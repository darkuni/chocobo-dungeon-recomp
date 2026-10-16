// IOS (Starlet) replacement at the IPC request level.
// __ios_Ipc2(request, callback) is replaced: requests are serviced on the host.
#include "hle.h"
#include <map>
#include <string>
#include <cstring>

enum { IOS_OPEN = 1, IOS_CLOSE = 2, IOS_READ = 3, IOS_WRITE = 4, IOS_SEEK = 5, IOS_IOCTL = 6, IOS_IOCTLV = 7 };

struct IosDev {
    std::string name;
    virtual ~IosDev() {}
    // return >=0 result, or INT32_MIN to never complete (event hooks)
    virtual int32_t ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) {
        fprintf(g_log, "[ios] %s ioctl %X in=%08X/%X out=%08X/%X -> 0 (unhandled)\n", name.c_str(), cmd, in, inlen, out, outlen);
        return 0;
    }
    virtual int32_t ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) {
        fprintf(g_log, "[ios] %s ioctlv %X nin=%u nio=%u -> 0 (unhandled)\n", name.c_str(), cmd, nin, nio);
        return 0;
    }
    virtual int32_t read(uint32_t buf, uint32_t len) { fprintf(g_log, "[ios] %s read %X -> 0\n", name.c_str(), len); return 0; }
    virtual int32_t write(uint32_t buf, uint32_t len) { fprintf(g_log, "[ios] %s write %X -> %X\n", name.c_str(), len, len); return (int32_t)len; }
    virtual int32_t seek(int32_t off, int32_t whence) { return 0; }
};

struct StmEventHook : IosDev {
    int32_t ioctl(uint32_t cmd, uint32_t, uint32_t, uint32_t, uint32_t) override {
        // 0x1000: register event hook - completes only on power/reset press
        return cmd == 0x1000 ? INT32_MIN : 0;
    }
};

int32_t di_ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen);
struct DiDev : IosDev {
    int32_t ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) override {
        return di_ioctl(cmd, in, inlen, out, outlen);
    }
};

int32_t fs_ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen);
int32_t fs_ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec);
int32_t nand_open(const std::string& path, uint32_t mode, void** handle);
void nand_close(void* h);
int32_t nand_read(void* h, uint32_t dst, uint32_t len);
int32_t nand_write(void* h, uint32_t src, uint32_t len);
int32_t nand_seek(void* h, int32_t off, int32_t whence);
int32_t nand_filestats(void* h, uint32_t out);
struct FsDev : IosDev {
    int32_t ioctl(uint32_t cmd, uint32_t in, uint32_t inlen, uint32_t out, uint32_t outlen) override { return fs_ioctl(cmd, in, inlen, out, outlen); }
    int32_t ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) override { return fs_ioctlv(cmd, nin, nio, vec); }
};
struct NandFileDev : IosDev {
    void* h = nullptr;
    ~NandFileDev() { if (h) nand_close(h); }
    int32_t read(uint32_t buf, uint32_t len) override { return nand_read(h, buf, len); }
    int32_t write(uint32_t buf, uint32_t len) override { return nand_write(h, buf, len); }
    int32_t seek(int32_t off, int32_t whence) override { return nand_seek(h, off, whence); }
    int32_t ioctl(uint32_t cmd, uint32_t, uint32_t, uint32_t out, uint32_t) override { return cmd == 0x0B ? nand_filestats(h, out) : 0; }
};

// /dev/es: only what the SDK asks at boot (title ID, data directory)
struct EsDev : IosDev {
    static constexpr uint64_t kTitle = 0x0001000052374645ull;   // 00010000-R7FE
    int32_t ioctlv(uint32_t cmd, uint32_t nin, uint32_t nio, uint32_t vec) override {
        auto vptr = [&](int i) { return phys_to_guest(R32(vec + 8 * i)); };
        if (cmd == 0x20) { W64(vptr(0), kTitle); return 0; }                    // GetTitleID
        if (cmd == 0x1D) {                                                         // GetDataDir
            const char* p = "/title/00010000/52374645/data";
            uint32_t o = vptr(nin);
            for (int i = 0; p[i]; i++) W8(o + i, p[i]);
            W8(o + (uint32_t)strlen(p), 0);
            return 0;
        }
        return IosDev::ioctlv(cmd, nin, nio, vec);
    }
};

static std::map<int32_t, IosDev*> g_fds;
static int32_t g_next_fd = 3;

static IosDev* make_dev(const std::string& path) {
    IosDev* d;
    if (path == "/dev/stm/eventhook") d = new StmEventHook;
    else if (path == "/dev/di") d = new DiDev;
    else if (path == "/dev/fs") d = new FsDev;
    else if (path == "/dev/es") d = new EsDev;
    else d = new IosDev;
    d->name = path;
    return d;
}

static int32_t ios_exec(uint32_t req) {
    uint32_t cmd = R32(req), fd = R32(req + 8);
    uint32_t a0 = R32(req + 0x0C), a1 = R32(req + 0x10), a2 = R32(req + 0x14), a3 = R32(req + 0x18), a4 = R32(req + 0x1C);
    if (cmd == IOS_OPEN) {
        std::string path = guest_str(phys_to_guest(a0));
        IosDev* d;
        if (path.rfind("/dev/", 0) != 0) {
            void* h = nullptr;
            int32_t r = nand_open(path, a1, &h);
            if (r < 0) { fprintf(g_log, "[ios] open %s -> %d\n", path.c_str(), r); return r; }
            auto* nf = new NandFileDev; nf->h = h; nf->name = path; d = nf;
        } else d = make_dev(path);
        int32_t nfd = g_next_fd++;
        g_fds[nfd] = d;
        fprintf(g_log, "[ios] open %s mode %u -> fd %d\n", path.c_str(), a1, nfd);
        return nfd;
    }
    auto it = g_fds.find((int32_t)fd);
    if (it == g_fds.end()) { fprintf(g_log, "[ios] cmd %u on bad fd %d\n", cmd, fd); return -6; }
    IosDev* d = it->second;
    switch (cmd) {
        case IOS_CLOSE: g_fds.erase(it); delete d; return 0;
        case IOS_READ: return d->read(phys_to_guest(a0), a1);
        case IOS_WRITE: return d->write(phys_to_guest(a0), a1);
        case IOS_SEEK: return d->seek((int32_t)a0, (int32_t)a1);
        case IOS_IOCTL: return d->ioctl(a0, phys_to_guest(a1), a2, phys_to_guest(a3), a4);
        case IOS_IOCTLV: return d->ioctlv(a0, a1, a2, phys_to_guest(a3));
    }
    fprintf(g_log, "[ios] unknown cmd %u\n", cmd);
    return -4;
}

extern void f_8034B910(Ctx*);  // iosFree(heap, ptr)

void hle___ios_Ipc2(Ctx* c) {
    uint32_t req = c->r[3], cb = c->r[4];
    if (!req) { c->r[3] = (uint32_t)-4; return; }
    int32_t res = ios_exec(req);
    uint32_t heap = R32(c->r[13] - 0x537C);
    if (!cb) {
        W32(req + 4, (uint32_t)res);
        guest_call(c, 0x8034B910u, {heap, req});
        c->r[3] = (uint32_t)res;
        return;
    }
    c->r[3] = 0;
    if (res == INT32_MIN) return;   // never completes
    uint32_t usr = R32(req + 0x24);
    post_irq([=](Ctx* ic) {
        W32(req + 4, (uint32_t)res);
        guest_call(ic, cb, {(uint32_t)res, usr});
        guest_call(ic, 0x8034B910u, {heap, req});
    });
}
