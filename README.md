# Chocobo's Dungeon - native PC port (static recompilation)

**Status: complete (1.0).** Plays through the opening, tutorial, town and dungeons on Windows 10/11.
See [CHANGELOG.md](CHANGELOG.md) for the history.

A native Windows/Linux port of *Final Fantasy Fables: Chocobo's Dungeon* (Wii, R7FEGD) built by
statically recompiling the game's PowerPC code to C++ and replacing the Wii hardware and OS
with a host runtime.

**No game code or data is in this repository.** The recompiled C++ (`gen/`) is produced from
`main.dol` taken from your own disc, and the game reads its assets from your own extracted disc.

## How it works

- `recomp.py` - reads `main.dol` + `symbols.txt` and writes one C++ function per guest function
  (~26,000) into `gen/`. Handles jump tables, CodeWarrior `_savegpr/_restgpr`, paired singles,
  interrupt checks on backward branches, and HLE replacement of SDK functions listed in `hle.txt`.
- `ppcdec.py`, `ppcdis.py`, `dol.py`, `xref.py` - decoder, disassembler, DOL loader, xref helper.
- `runtime/` - the replacement console:
  - `runtime.cpp`, `ppc.h` - guest memory (4 GiB reservation at a fixed host address), MMIO, SPRs, dispatch
  - `hle_thread.cpp` - guest OS threads on host threads, interrupts, idle wait
  - `hle_ios.cpp`, `hle_dvd.cpp`, `hle_fs.cpp` - IOS: disc reads from the extracted files, NAND saves to a folder
  - `hle_audio.cpp`, `ax_dsp.cpp` - AI DMA timing and the AX DSP mixer on the host
  - `hle_input.cpp` - Wii Remote (sideways / Nunchuk) and Classic Controller from keyboard/gamepad
  - `gx_fifo.cpp`, `gx_render.cpp`, `gx_shader.cpp`, `gx_tex.cpp` - GX command processor -> OpenGL 3.3
    (CPU vertex transform/lighting, TEV -> GLSL, texture decoders, EFB copies, draw batching,
    MSAA, mipmaps/anisotropic filtering, internal resolution scaling)
  - `gl_platform_sdl.cpp` - window, presentation thread, input, audio (Windows / `USE_SDL`)
  - `gl_platform_egl.cpp` - headless EGL for automated Linux runs (screenshots via `SHOT_EVERY`)
  - `overlay.cpp`, `config.cpp` - in-game settings menu (F1) and `chocobo.ini`

## Building

1. Get `main.dol` from your disc (`sys/main.dol` of an extracted image, e.g. `wit extract`).
2. Generate the C++:
   ```
   python3 recomp.py main.dol symbols.txt gen 300
   ```
3. Windows build (cross-compiled from Linux with mingw-w64, POSIX threads):
   ```
   cmake -B build-win -G Ninja -DCMAKE_TOOLCHAIN_FILE=mingw.cmake \
         -DSDL2_DIR=/path/to/SDL2-2.30.x/x86_64-w64-mingw32
   ninja -C build-win
   ```
   Ship `chocobo.exe` with `SDL2.dll` (`libwinpthread` is linked statically).

   Linux headless (EGL) build: `cmake -B build -G Ninja && ninja -C build`
   (add `-DUSE_SDL=ON` for a windowed SDL build).

Compiling `gen/` takes a while (about 90 large files).

## Running

Put the extracted disc (`sys/`, `files/`) in an `extracted` folder next to the executable and run it.
Saves go to `nand/` and settings to `chocobo.ini` next to the executable. See `dist/README.txt`
for settings and controls.
