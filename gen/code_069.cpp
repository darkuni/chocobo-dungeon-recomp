#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GetResult__Q34nw4r3g3d15AnmObjMatClrResFPQ34nw4r3g3d12ClrAnmResultUl_802C207C
void f_802C207C(Ctx* __restrict c) {
  trace_call(0x802C207Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C207C
  c->r[0]=c->lr; // 802C2080
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C2084
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C2088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C208C
  c->r[31]=c->r[4]|c->r[4]; // 802C2090
  c->r[6]=R32(c->r[3]+0x00000014u); // 802C2094
  c->r[5]=R16(c->r[6]+c->r[0]); // 802C2098
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 802C209C
  if (crb(c,2)) { goto L_802C20B4; } // 802C20A0
  c->r[0]=0u+0x00000000u; // 802C20A4
  c->r[3]=c->r[31]|c->r[31]; // 802C20A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C20AC
  goto L_802C20DC; // 802C20B0
L_802C20B4:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 802C20B4
  cmps(c,0,(int32_t)c->r[6],0); // 802C20B8
  if (crb(c,2)) { goto L_802C20CC; } // 802C20BC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 802C20C0
  c->r[3]=c->r[6]+c->r[0]; // 802C20C4
  goto L_802C20DC; // 802C20C8
L_802C20CC:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C20CC
  c->r[3]=c->r[3]+0x0000002Cu; // 802C20D0
  c->lr=0x802C20D8u; f_802BC734(c); // 802C20D4
  c->r[3]=c->r[31]|c->r[31]; // 802C20D8
L_802C20DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C20DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C20E0
  c->lr=c->r[0]; // 802C20E4
  c->r[1]=c->r[1]+0x00000010u; // 802C20E8
  return; // 802C20EC
}

// fn_802C20F0
void f_802C20F0(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 802C20F0
  c->r[0]=c->r[5]+0x00000002u; // 802C20F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C20F8
  if (crb(c,2)) { goto L_802C213C; } // 802C20FC
  if (!crb(c,0)) { goto L_802C2110; } // 802C2100
  cmps(c,0,(int32_t)c->r[4],8); // 802C2104
  if (crb(c,2)) { goto L_802C2120; } // 802C2108
  return; // 802C210C
L_802C2110:;
  c->r[0]=c->r[5]+0x00000004u; // 802C2110
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C2114
  if (!crb(c,0)) return; // 802C2118
  goto L_802C2130; // 802C211C
L_802C2120:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2120
  c->r[12]=R32(c->r[12]+0x00000024u); // 802C2124
  c->ctr=c->r[12]; // 802C2128
  if (true) { dispatch(c,c->ctr); return; } // 802C212C
L_802C2130:;
  c->r[0]=0u+0x00000000u; // 802C2130
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C2134
  return; // 802C2138
L_802C213C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C213C
  return; // 802C2140
}

// fn_802C2144
void f_802C2144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2144
  c->r[0]=c->lr; // 802C2148
  W32(c->r[1]+0x00000074u,c->r[0]); // 802C214C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802C2150
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802C2154
  c->r[11]=c->r[1]+0x00000060u; // 802C2158
  c->lr=0x802C2160u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C215C
  c->r[6]=R32(c->r[3]+0x00000000u); // 802C2160
  c->r[31]=c->r[4]|c->r[4]; // 802C2164
  c->r[7]=R32(c->r[5]+0x00000000u); // 802C2168
  c->r[8]=c->r[5]|c->r[5]; // 802C216C
  c->r[9]=c->r[6]|c->r[6]; // 802C2170
  c->r[4]=0u+0x0000000Fu; // 802C2174
  goto L_802C21DC; // 802C2178
L_802C217C:;
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 802C217C
  if (crb(c,2)) { goto L_802C21CC; } // 802C2180
  c->r[3]=R32(c->r[5]+0x00000008u); // 802C2184
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C2188
  W32(c->r[6]+0x00000004u,c->r[3]); // 802C218C
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C2190
  c->r[0]=c->r[0]&c->r[4]; // 802C2194
  {uint32_t ea=c->r[8]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C2198
  {uint32_t ea=c->r[9]+0x00000008u; WF32(ea,c->f[0]);} // 802C219C
  {uint32_t ea=c->r[8]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C21A0
  {uint32_t ea=c->r[9]+0x0000000Cu; WF32(ea,c->f[1]);} // 802C21A4
  {uint32_t ea=c->r[8]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C21A8
  {uint32_t ea=c->r[9]+0x00000010u; WF32(ea,c->f[0]);} // 802C21AC
  {uint32_t ea=c->r[8]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C21B0
  {uint32_t ea=c->r[9]+0x00000014u; WF32(ea,c->f[1]);} // 802C21B4
  {uint32_t ea=c->r[9]+0x00000018u; WF32(ea,c->f[0]);} // 802C21B8
  c->r[3]=R32(c->r[6]+0x00000000u); // 802C21BC
  c->r[3]=c->r[3]&~c->r[4]; // 802C21C0
  c->r[0]=c->r[3]|c->r[0]; // 802C21C4
  W32(c->r[6]+0x00000000u,c->r[0]); // 802C21C8
L_802C21CC:;
  c->r[7]=rotl(c->r[7],28)&0x0FFFFFFFu; // 802C21CC
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 802C21D0
  c->r[8]=c->r[8]+0x00000014u; // 802C21D4
  c->r[9]=c->r[9]+0x00000014u; // 802C21D8
L_802C21DC:;
  cmps(c,0,(int32_t)c->r[7],0); // 802C21DC
  if (!crb(c,2)) { IRQCHK(c); goto L_802C217C; } // 802C21E0
  c->r[29]=R32(c->r[5]+0x00000004u); // 802C21E4
  c->r[30]=c->r[5]+0x000000ACu; // 802C21E8
  {uint32_t ea=c->r[2]+0xFFFFABB0u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C21EC
  c->r[28]=0u+0x00000008u; // 802C21F0
  goto L_802C2330; // 802C21F4
L_802C21F8:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 802C21F8
  if (crb(c,2)) { goto L_802C2324; } // 802C21FC
  c->r[5]=c->r[30]|c->r[30]; // 802C2200
  c->r[3]=c->r[1]+0x00000010u; // 802C2204
  c->r[6]=rotl(c->r[29],0)&0x0000000Fu; // 802C2208
  c->r[4]=0u+0x00000001u; // 802C220C
  c->lr=0x802C2214u; f_802CCFC0(c); // 802C2210
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C2214
  c->f[1]=std::fabs(c->f[0]); // 802C2218
  fcmp(c,0,c->f[31],c->f[1]); // 802C221C
  if (!crb(c,0)) { goto L_802C2228; } // 802C2220
  goto L_802C222C; // 802C2224
L_802C2228:;
  c->f[1]=c->f[31]; // 802C2228
L_802C222C:;
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C222C
  c->f[2]=std::fabs(c->f[0]); // 802C2230
  fcmp(c,0,c->f[1],c->f[2]); // 802C2234
  if (!crb(c,0)) { goto L_802C2240; } // 802C2238
  goto L_802C2244; // 802C223C
L_802C2240:;
  c->f[2]=c->f[1]; // 802C2240
L_802C2244:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C2244
  c->f[1]=std::fabs(c->f[0]); // 802C2248
  fcmp(c,0,c->f[2],c->f[1]); // 802C224C
  if (!crb(c,0)) { goto L_802C2258; } // 802C2250
  goto L_802C225C; // 802C2254
L_802C2258:;
  c->f[1]=c->f[2]; // 802C2258
L_802C225C:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C225C
  c->f[2]=std::fabs(c->f[0]); // 802C2260
  fcmp(c,0,c->f[1],c->f[2]); // 802C2264
  if (!crb(c,0)) { goto L_802C2270; } // 802C2268
  goto L_802C2274; // 802C226C
L_802C2270:;
  c->f[2]=c->f[1]; // 802C2270
L_802C2274:;
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C2274
  c->f[1]=std::fabs(c->f[0]); // 802C2278
  fcmp(c,0,c->f[2],c->f[1]); // 802C227C
  if (!crb(c,0)) { goto L_802C2288; } // 802C2280
  goto L_802C228C; // 802C2284
L_802C2288:;
  c->f[1]=c->f[2]; // 802C2288
L_802C228C:;
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C228C
  c->f[0]=std::fabs(c->f[0]); // 802C2290
  fcmp(c,0,c->f[1],c->f[0]); // 802C2294
  if (!crb(c,0)) { goto L_802C22A0; } // 802C2298
  goto L_802C22A4; // 802C229C
L_802C22A0:;
  c->f[0]=c->f[1]; // 802C22A0
L_802C22A4:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802C22A4
  {uint32_t ea=c->r[2]+0xFFFFABB8u; c->f[1]=RF64(ea);} // 802C22A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 802C22AC
  c->r[3]=rotl(c->r[0],9)&0x000000FFu; // 802C22B0
  c->r[0]=c->r[3]+0xFFFFFF82u; // 802C22B4
  c->r[27]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C22B8
  c->r[3]=0u-c->r[27]; // 802C22BC
  c->lr=0x802C22C4u; f_802EFC2C(c); // 802C22C0
  c->f[6]=c->ps1[6]=S(c->f[1]); // 802C22C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C22C8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C22CC
  c->r[3]=c->r[31]|c->r[31]; // 802C22D0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802C22D4
  c->r[6]=c->r[27]|c->r[27]; // 802C22D8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[6]); // 802C22DC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C22E0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[6]); // 802C22E4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C22E8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C22EC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[6]); // 802C22F0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[6]); // 802C22F4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[5]);} // 802C22F8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[6]); // 802C22FC
  c->r[4]=c->r[28]+0xFFFFFFF9u; // 802C2300
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[6]); // 802C2304
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 802C2308
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 802C230C
  c->r[5]=c->r[1]+0x00000010u; // 802C2310
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[2]);} // 802C2314
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 802C2318
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 802C231C
  c->lr=0x802C2324u; f_802BAC1C(c); // 802C2320
L_802C2324:;
  c->r[29]=rotl(c->r[29],28)&0x0FFFFFFFu; // 802C2324
  c->r[30]=c->r[30]+0x00000014u; // 802C2328
  c->r[28]=c->r[28]+0x00000001u; // 802C232C
L_802C2330:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C2330
  if (!crb(c,2)) { IRQCHK(c); goto L_802C21F8; } // 802C2334
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802C2338
  c->r[11]=c->r[1]+0x00000060u; // 802C233C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802C2340
  c->lr=0x802C2348u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C2344
  c->r[0]=R32(c->r[1]+0x00000074u); // 802C2348
  c->lr=c->r[0]; // 802C234C
  c->r[1]=c->r[1]+0x00000070u; // 802C2350
  return; // 802C2354
}

// fn_802C2358
void f_802C2358(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C2358
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C235C
  c->r[3]=c->r[3]+0xFFFFC488u; // 802C2360
  cmpu(c,0,c->r[0],c->r[3]); // 802C2364
  if (!crb(c,2)) { goto L_802C2374; } // 802C2368
  c->r[3]=0u+0x00000001u; // 802C236C
  return; // 802C2370
L_802C2374:;
  c->r[3]=0u+0x80440000u; // 802C2374
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C2378
  c->r[3]=c->r[3]+0xFFFFC470u; // 802C237C
  cmpu(c,0,c->r[0],c->r[3]); // 802C2380
  if (!crb(c,2)) { goto L_802C2390; } // 802C2384
  c->r[3]=0u+0x00000001u; // 802C2388
  return; // 802C238C
L_802C2390:;
  c->r[3]=0u+0x80440000u; // 802C2390
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C2394
  cmpu(c,0,c->r[0],c->r[3]); // 802C2398
  if (!crb(c,2)) { goto L_802C23A8; } // 802C239C
  c->r[3]=0u+0x00000001u; // 802C23A0
  return; // 802C23A4
L_802C23A8:;
  c->r[3]=0u+0x80440000u; // 802C23A8
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C23AC
  c->r[0]=c->r[3]-c->r[0]; // 802C23B0
  c->r[0]=cntlz(c->r[0]); // 802C23B4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C23B8
  return; // 802C23BC
}

// fn_802C23C0
void f_802C23C0(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C23C0
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C23C4
  c->r[3]=c->r[3]+0xFFFFC470u; // 802C23C8
  cmpu(c,0,c->r[0],c->r[3]); // 802C23CC
  if (!crb(c,2)) { goto L_802C23DC; } // 802C23D0
  c->r[3]=0u+0x00000001u; // 802C23D4
  return; // 802C23D8
L_802C23DC:;
  c->r[3]=0u+0x80440000u; // 802C23DC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C23E0
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C23E4
  cmpu(c,0,c->r[0],c->r[3]); // 802C23E8
  if (!crb(c,2)) { goto L_802C23F8; } // 802C23EC
  c->r[3]=0u+0x00000001u; // 802C23F0
  return; // 802C23F4
L_802C23F8:;
  c->r[3]=0u+0x80440000u; // 802C23F8
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C23FC
  c->r[0]=c->r[3]-c->r[0]; // 802C2400
  c->r[0]=cntlz(c->r[0]); // 802C2404
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C2408
  return; // 802C240C
}

// fn_802C2410
void f_802C2410(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2410
  c->r[0]=c->lr; // 802C2414
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C2418
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C241C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C2420
  c->ctr=c->r[12]; // 802C2424
  if (true) { c->lr=0x802C242Cu; dispatch(c,c->ctr); } // 802C2428
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C242C
  c->r[3]=c->r[3]+0x00000004u; // 802C2430
  c->lr=c->r[0]; // 802C2434
  c->r[1]=c->r[1]+0x00000010u; // 802C2438
  return; // 802C243C
}

// fn_802C2440
void f_802C2440(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C2440
  c->r[3]=c->r[3]+0xFFFFC488u; // 802C2444
  return; // 802C2448
}

// fn_802C244C
void f_802C244C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C244C
  c->r[0]=c->lr; // 802C2450
  cmps(c,0,(int32_t)c->r[3],0); // 802C2454
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C2458
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C245C
  c->r[31]=c->r[3]|c->r[3]; // 802C2460
  if (crb(c,2)) { goto L_802C2478; } // 802C2464
  if (crb(c,2)) { goto L_802C2478; } // 802C2468
  if (crb(c,2)) { goto L_802C2478; } // 802C246C
  c->r[4]=0u+0x00000000u; // 802C2470
  c->lr=0x802C2478u; f_802C624C(c); // 802C2474
L_802C2478:;
  c->r[3]=c->r[31]|c->r[31]; // 802C2478
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C247C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C2480
  c->lr=c->r[0]; // 802C2484
  c->r[1]=c->r[1]+0x00000010u; // 802C2488
  return; // 802C248C
}

// GetTypeName__Q34nw4r3g3d12AnmObjTexSrtCFv
void f_802C2490(Ctx* __restrict c) {
  trace_call(0x802C2490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2490
  c->r[0]=c->lr; // 802C2494
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C2498
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C249C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C24A0
  c->ctr=c->r[12]; // 802C24A4
  if (true) { c->lr=0x802C24ACu; dispatch(c,c->ctr); } // 802C24A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C24AC
  c->r[3]=c->r[3]+0x00000004u; // 802C24B0
  c->lr=c->r[0]; // 802C24B4
  c->r[1]=c->r[1]+0x00000010u; // 802C24B8
  return; // 802C24BC
}

// GetTypeObj__Q34nw4r3g3d12AnmObjTexSrtCFv
void f_802C24C0(Ctx* __restrict c) {
  trace_call(0x802C24C0u);
  c->r[3]=0u+0x80440000u; // 802C24C0
  c->r[3]=c->r[3]+0xFFFFC470u; // 802C24C4
  return; // 802C24C8
}

// Release__Q34nw4r3g3d9AnmObjChrFv
void f_802C24CC(Ctx* __restrict c) {
  trace_call(0x802C24CCu);
  c->r[4]=0u+0x00010000u; // 802C24CC
  c->r[7]=0u+0x00000000u; // 802C24D0
  c->r[5]=c->r[4]+0xFFFF8000u; // 802C24D4
  c->r[6]=0u+0x00000000u; // 802C24D8
  goto L_802C24F0; // 802C24DC
L_802C24E0:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C24E0
  c->r[7]=c->r[7]+0x00000001u; // 802C24E4
  W16(c->r[4]+c->r[6],c->r[5]); // 802C24E8
  c->r[6]=c->r[6]+0x00000002u; // 802C24EC
L_802C24F0:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C24F0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802C24F4
  if (crb(c,0)) { IRQCHK(c); goto L_802C24E0; } // 802C24F8
  c->r[4]=0u+0x00000004u; // 802C24FC
  c->r[5]=0u+0x00000000u; // 802C2500
  f_802C63A4(c); return; // 802C2504
}

// Attach__Q34nw4r3g3d9AnmObjChrFiPQ34nw4r3g3d12AnmObjChrRes
void f_802C2508(Ctx* __restrict c) {
  trace_call(0x802C2508u);
  c->r[3]=0u+0x00000000u; // 802C2508
  return; // 802C250C
}

// Detach__Q34nw4r3g3d9AnmObjChrFi
void f_802C2510(Ctx* __restrict c) {
  trace_call(0x802C2510u);
  c->r[3]=0u+0x00000000u; // 802C2510
  return; // 802C2514
}

// SetWeight__Q34nw4r3g3d9AnmObjChrFif
void f_802C2518(Ctx* __restrict c) {
  trace_call(0x802C2518u);
  return; // 802C2518
}

// GetWeight__Q34nw4r3g3d9AnmObjChrCFi
void f_802C251C(Ctx* __restrict c) {
  trace_call(0x802C251Cu);
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C251C
  return; // 802C2520
}

// DetachAll__Q34nw4r3g3d9AnmObjChrFv
void f_802C2524(Ctx* __restrict c) {
  trace_call(0x802C2524u);
  return; // 802C2524
}

// __dt__Q34nw4r3g3d9AnmObjChrFv
void f_802C2528(Ctx* __restrict c) {
  trace_call(0x802C2528u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2528
  c->r[0]=c->lr; // 802C252C
  cmps(c,0,(int32_t)c->r[3],0); // 802C2530
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C2534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C2538
  c->r[31]=c->r[3]|c->r[3]; // 802C253C
  if (crb(c,2)) { goto L_802C2550; } // 802C2540
  if (crb(c,2)) { goto L_802C2550; } // 802C2544
  c->r[4]=0u+0x00000000u; // 802C2548
  c->lr=0x802C2550u; f_802C624C(c); // 802C254C
L_802C2550:;
  c->r[3]=c->r[31]|c->r[31]; // 802C2550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C2554
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C2558
  c->lr=c->r[0]; // 802C255C
  c->r[1]=c->r[1]+0x00000010u; // 802C2560
  return; // 802C2564
}

// __dt__Q34nw4r3g3d13AnmObjChrNodeFv
void f_802C2568(Ctx* __restrict c) {
  trace_call(0x802C2568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2568
  c->r[0]=c->lr; // 802C256C
  cmps(c,0,(int32_t)c->r[3],0); // 802C2570
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C2574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C2578
  c->r[31]=c->r[3]|c->r[3]; // 802C257C
  if (crb(c,2)) { goto L_802C25B4; } // 802C2580
  c->r[12]=0u+0x80480000u; // 802C2584
  c->r[12]=c->r[12]+0x00006D68u; // 802C2588
  W32(c->r[3]+0x00000000u,c->r[12]); // 802C258C
  c->r[12]=R32(c->r[12]+0x00000044u); // 802C2590
  c->ctr=c->r[12]; // 802C2594
  if (true) { c->lr=0x802C259Cu; dispatch(c,c->ctr); } // 802C2598
  cmps(c,0,(int32_t)c->r[31],0); // 802C259C
  if (crb(c,2)) { goto L_802C25B4; } // 802C25A0
  if (crb(c,2)) { goto L_802C25B4; } // 802C25A4
  c->r[3]=c->r[31]|c->r[31]; // 802C25A8
  c->r[4]=0u+0x00000000u; // 802C25AC
  c->lr=0x802C25B4u; f_802C624C(c); // 802C25B0
L_802C25B4:;
  c->r[3]=c->r[31]|c->r[31]; // 802C25B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C25B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C25BC
  c->lr=c->r[0]; // 802C25C0
  c->r[1]=c->r[1]+0x00000010u; // 802C25C4
  return; // 802C25C8
}

// Attach__Q34nw4r3g3d13AnmObjChrNodeFiPQ34nw4r3g3d12AnmObjChrRes
void f_802C25CC(Ctx* __restrict c) {
  trace_call(0x802C25CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C25CC
  c->r[0]=c->lr; // 802C25D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C25D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C25D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C25DC
  c->r[30]=c->r[5]|c->r[5]; // 802C25E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C25E4
  c->r[29]=c->r[4]|c->r[4]; // 802C25E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802C25EC
  c->r[28]=c->r[3]|c->r[3]; // 802C25F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C25F4
  c->r[12]=R32(c->r[12]+0x00000040u); // 802C25F8
  c->ctr=c->r[12]; // 802C25FC
  if (true) { c->lr=0x802C2604u; dispatch(c,c->ctr); } // 802C2600
  c->r[31]=c->r[3]|c->r[3]; // 802C2604
  c->r[6]=0u+0x00000000u; // 802C2608
  c->r[7]=0u+0x00000000u; // 802C260C
  c->r[5]=0u+0x00000000u; // 802C2610
  c->r[4]=0u+0x00000000u; // 802C2614
  goto L_802C2640; // 802C2618
L_802C261C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 802C261C
  c->r[0]=R16(c->r[3]+c->r[5]); // 802C2620
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 802C2624
  if (!crb(c,2)) { goto L_802C2638; } // 802C2628
  c->r[3]=R32(c->r[28]+0x00000014u); // 802C262C
  c->r[6]=0u+0x00000001u; // 802C2630
  W16(c->r[3]+c->r[5],c->r[4]); // 802C2634
L_802C2638:;
  c->r[5]=c->r[5]+0x00000002u; // 802C2638
  c->r[7]=c->r[7]+0x00000001u; // 802C263C
L_802C2640:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 802C2640
  cmpu(c,0,c->r[7],c->r[0]); // 802C2644
  if (crb(c,0)) { IRQCHK(c); goto L_802C261C; } // 802C2648
  cmps(c,0,(int32_t)c->r[6],0); // 802C264C
  if (crb(c,2)) { goto L_802C2664; } // 802C2650
  c->r[3]=c->r[28]|c->r[28]; // 802C2654
  c->r[4]=0u+0x00000004u; // 802C2658
  c->r[5]=0u+0x00000001u; // 802C265C
  c->lr=0x802C2664u; f_802C63A4(c); // 802C2660
L_802C2664:;
  c->r[5]=R32(c->r[28]+0x0000001Cu); // 802C2664
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802C2668
  c->r[4]=0u+0x00010000u; // 802C266C
  c->r[3]=c->r[30]|c->r[30]; // 802C2670
  W32(c->r[5]+c->r[0],c->r[30]); // 802C2674
  c->r[6]=c->r[28]|c->r[28]; // 802C2678
  c->r[4]=c->r[4]+0x00000002u; // 802C267C
  c->r[5]=0u+0x00000000u; // 802C2680
  c->r[12]=R32(c->r[30]+0x00000000u); // 802C2684
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802C2688
  c->ctr=c->r[12]; // 802C268C
  if (true) { c->lr=0x802C2694u; dispatch(c,c->ctr); } // 802C2690
  c->r[3]=c->r[31]|c->r[31]; // 802C2694
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C2698
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C269C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C26A0
  c->r[28]=R32(c->r[1]+0x00000010u); // 802C26A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C26A8
  c->lr=c->r[0]; // 802C26AC
  c->r[1]=c->r[1]+0x00000020u; // 802C26B0
  return; // 802C26B4
}

// Detach__Q34nw4r3g3d13AnmObjChrNodeFi
void f_802C26B8(Ctx* __restrict c) {
  trace_call(0x802C26B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C26B8
  c->r[0]=c->lr; // 802C26BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C26C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C26C4
  c->r[31]=c->r[3]|c->r[3]; // 802C26C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C26CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C26D0
  c->r[29]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802C26D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 802C26D8
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 802C26DC
  c->r[28]=R32(c->r[5]+c->r[29]); // 802C26E0
  cmps(c,0,(int32_t)c->r[28],0); // 802C26E4
  if (crb(c,2)) { goto L_802C27AC; } // 802C26E8
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C26EC
  c->r[30]=0u+0x00010000u; // 802C26F0
  c->r[3]=c->r[28]|c->r[28]; // 802C26F4
  c->r[6]=c->r[31]|c->r[31]; // 802C26F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802C26FC
  c->r[4]=c->r[30]+0x00000003u; // 802C2700
  c->r[5]=0u+0x00000000u; // 802C2704
  c->ctr=c->r[12]; // 802C2708
  if (true) { c->lr=0x802C2710u; dispatch(c,c->ctr); } // 802C270C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802C2710
  c->r[0]=0u+0x00000000u; // 802C2714
  c->r[6]=0u+0x00000000u; // 802C2718
  c->r[7]=0u+0x00000000u; // 802C271C
  W32(c->r[3]+c->r[29],c->r[0]); // 802C2720
  c->r[4]=0u+0x00000000u; // 802C2724
  goto L_802C2788; // 802C2728
L_802C272C:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 802C272C
  c->r[8]=c->r[30]+0xFFFF8000u; // 802C2730
  c->r[5]=0u+0x00000000u; // 802C2734
  c->ctr=c->r[0]; // 802C2738
  cmps(c,0,(int32_t)c->r[0],0); // 802C273C
  if (!crb(c,1)) { goto L_802C2778; } // 802C2740
L_802C2744:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802C2744
  c->r[3]=R32(c->r[3]+c->r[5]); // 802C2748
  cmps(c,0,(int32_t)c->r[3],0); // 802C274C
  if (crb(c,2)) { goto L_802C2770; } // 802C2750
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C2754
  c->r[0]=R16(c->r[4]+c->r[0]); // 802C2758
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 802C275C
  if (!crb(c,2)) { goto L_802C2770; } // 802C2760
  c->r[6]=0u+0x00000001u; // 802C2764
  c->r[8]=0u+0x00000000u; // 802C2768
  goto L_802C2778; // 802C276C
L_802C2770:;
  c->r[5]=c->r[5]+0x00000004u; // 802C2770
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C2744; } // 802C2774
L_802C2778:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C2778
  c->r[7]=c->r[7]+0x00000001u; // 802C277C
  W16(c->r[3]+c->r[4],c->r[8]); // 802C2780
  c->r[4]=c->r[4]+0x00000002u; // 802C2784
L_802C2788:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C2788
  cmpu(c,0,c->r[7],c->r[0]); // 802C278C
  if (crb(c,0)) { IRQCHK(c); goto L_802C272C; } // 802C2790
  cmps(c,0,(int32_t)c->r[6],0); // 802C2794
  if (!crb(c,2)) { goto L_802C27AC; } // 802C2798
  c->r[3]=c->r[31]|c->r[31]; // 802C279C
  c->r[4]=0u+0x00000004u; // 802C27A0
  c->r[5]=0u+0x00000000u; // 802C27A4
  c->lr=0x802C27ACu; f_802C63A4(c); // 802C27A8
L_802C27AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C27AC
  c->r[3]=c->r[28]|c->r[28]; // 802C27B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C27B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C27B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 802C27BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C27C0
  c->lr=c->r[0]; // 802C27C4
  c->r[1]=c->r[1]+0x00000020u; // 802C27C8
  return; // 802C27CC
}

// DetachAll__Q34nw4r3g3d13AnmObjChrNodeFv
void f_802C27D0(Ctx* __restrict c) {
  trace_call(0x802C27D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C27D0
  c->r[0]=c->lr; // 802C27D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C27D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C27DC
  c->r[31]=0u+0x00000000u; // 802C27E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802C27E4
  c->r[30]=c->r[3]|c->r[3]; // 802C27E8
  goto L_802C280C; // 802C27EC
L_802C27F0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 802C27F0
  c->r[3]=c->r[30]|c->r[30]; // 802C27F4
  c->r[4]=c->r[31]|c->r[31]; // 802C27F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 802C27FC
  c->ctr=c->r[12]; // 802C2800
  if (true) { c->lr=0x802C2808u; dispatch(c,c->ctr); } // 802C2804
  c->r[31]=c->r[31]+0x00000001u; // 802C2808
L_802C280C:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 802C280C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 802C2810
  if (crb(c,0)) { IRQCHK(c); goto L_802C27F0; } // 802C2814
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C2818
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C281C
  c->r[30]=R32(c->r[1]+0x00000008u); // 802C2820
  c->lr=c->r[0]; // 802C2824
  c->r[1]=c->r[1]+0x00000010u; // 802C2828
  return; // 802C282C
}

// UpdateFrame__Q34nw4r3g3d13AnmObjChrNodeFv
void f_802C2830(Ctx* __restrict c) {
  trace_call(0x802C2830u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2830
  c->r[0]=c->lr; // 802C2834
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C2838
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C283C
  c->r[31]=0u+0x00000000u; // 802C2840
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C2844
  c->r[30]=0u+0x00000000u; // 802C2848
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C284C
  c->r[29]=c->r[3]|c->r[3]; // 802C2850
  goto L_802C2880; // 802C2854
L_802C2858:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 802C2858
  c->r[3]=R32(c->r[3]+c->r[31]); // 802C285C
  cmps(c,0,(int32_t)c->r[3],0); // 802C2860
  if (crb(c,2)) { goto L_802C2878; } // 802C2864
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2868
  c->r[12]=R32(c->r[12]+0x00000024u); // 802C286C
  c->ctr=c->r[12]; // 802C2870
  if (true) { c->lr=0x802C2878u; dispatch(c,c->ctr); } // 802C2874
L_802C2878:;
  c->r[31]=c->r[31]+0x00000004u; // 802C2878
  c->r[30]=c->r[30]+0x00000001u; // 802C287C
L_802C2880:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 802C2880
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 802C2884
  if (crb(c,0)) { IRQCHK(c); goto L_802C2858; } // 802C2888
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C288C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C2890
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C2894
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C2898
  c->lr=c->r[0]; // 802C289C
  c->r[1]=c->r[1]+0x00000020u; // 802C28A0
  return; // 802C28A4
}

// SetFrame__Q34nw4r3g3d13AnmObjChrNodeFf
void f_802C28A8(Ctx* __restrict c) {
  trace_call(0x802C28A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C28A8
  c->r[0]=c->lr; // 802C28AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C28B0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 802C28B4
  c->f[31]=c->f[1]; // 802C28B8
  W32(c->r[1]+0x00000014u,c->r[31]); // 802C28BC
  c->r[31]=0u+0x00000000u; // 802C28C0
  W32(c->r[1]+0x00000010u,c->r[30]); // 802C28C4
  c->r[30]=0u+0x00000000u; // 802C28C8
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 802C28CC
  c->r[29]=c->r[3]|c->r[3]; // 802C28D0
  goto L_802C2904; // 802C28D4
L_802C28D8:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 802C28D8
  c->r[3]=R32(c->r[3]+c->r[31]); // 802C28DC
  cmps(c,0,(int32_t)c->r[3],0); // 802C28E0
  if (crb(c,2)) { goto L_802C28FC; } // 802C28E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C28E8
  c->f[1]=c->f[31]; // 802C28EC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 802C28F0
  c->ctr=c->r[12]; // 802C28F4
  if (true) { c->lr=0x802C28FCu; dispatch(c,c->ctr); } // 802C28F8
L_802C28FC:;
  c->r[31]=c->r[31]+0x00000004u; // 802C28FC
  c->r[30]=c->r[30]+0x00000001u; // 802C2900
L_802C2904:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 802C2904
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 802C2908
  if (crb(c,0)) { IRQCHK(c); goto L_802C28D8; } // 802C290C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C2910
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 802C2914
  c->r[31]=R32(c->r[1]+0x00000014u); // 802C2918
  c->r[30]=R32(c->r[1]+0x00000010u); // 802C291C
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 802C2920
  c->lr=c->r[0]; // 802C2924
  c->r[1]=c->r[1]+0x00000020u; // 802C2928
  return; // 802C292C
}

// GetFrame__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_802C2930(Ctx* __restrict c) {
  trace_call(0x802C2930u);
  c->r[0]=R32(c->r[3]+0x00000018u); // 802C2930
  c->r[6]=0u+0x00000000u; // 802C2934
  c->r[5]=0u+0x00000000u; // 802C2938
  c->ctr=c->r[0]; // 802C293C
  cmps(c,0,(int32_t)c->r[0],0); // 802C2940
  if (!crb(c,1)) { goto L_802C297C; } // 802C2944
L_802C2948:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 802C2948
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C294C
  cmps(c,0,(int32_t)c->r[0],0); // 802C2950
  if (crb(c,2)) { goto L_802C2970; } // 802C2954
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802C2958
  c->r[3]=R32(c->r[4]+c->r[0]); // 802C295C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2960
  c->r[12]=R32(c->r[12]+0x00000020u); // 802C2964
  c->ctr=c->r[12]; // 802C2968
  if (true) { dispatch(c,c->ctr); return; } // 802C296C
L_802C2970:;
  c->r[5]=c->r[5]+0x00000004u; // 802C2970
  c->r[6]=c->r[6]+0x00000001u; // 802C2974
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C2948; } // 802C2978
L_802C297C:;
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C297C
  return; // 802C2980
}

// SetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeFf
void f_802C2984(Ctx* __restrict c) {
  trace_call(0x802C2984u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2984
  c->r[0]=c->lr; // 802C2988
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C298C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 802C2990
  c->f[31]=c->f[1]; // 802C2994
  W32(c->r[1]+0x00000014u,c->r[31]); // 802C2998
  c->r[31]=0u+0x00000000u; // 802C299C
  W32(c->r[1]+0x00000010u,c->r[30]); // 802C29A0
  c->r[30]=0u+0x00000000u; // 802C29A4
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 802C29A8
  c->r[29]=c->r[3]|c->r[3]; // 802C29AC
  goto L_802C29E0; // 802C29B0
L_802C29B4:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 802C29B4
  c->r[3]=R32(c->r[3]+c->r[31]); // 802C29B8
  cmps(c,0,(int32_t)c->r[3],0); // 802C29BC
  if (crb(c,2)) { goto L_802C29D8; } // 802C29C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C29C4
  c->f[1]=c->f[31]; // 802C29C8
  c->r[12]=R32(c->r[12]+0x00000028u); // 802C29CC
  c->ctr=c->r[12]; // 802C29D0
  if (true) { c->lr=0x802C29D8u; dispatch(c,c->ctr); } // 802C29D4
L_802C29D8:;
  c->r[31]=c->r[31]+0x00000004u; // 802C29D8
  c->r[30]=c->r[30]+0x00000001u; // 802C29DC
L_802C29E0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 802C29E0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 802C29E4
  if (crb(c,0)) { IRQCHK(c); goto L_802C29B4; } // 802C29E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C29EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 802C29F0
  c->r[31]=R32(c->r[1]+0x00000014u); // 802C29F4
  c->r[30]=R32(c->r[1]+0x00000010u); // 802C29F8
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 802C29FC
  c->lr=c->r[0]; // 802C2A00
  c->r[1]=c->r[1]+0x00000020u; // 802C2A04
  return; // 802C2A08
}

// GetUpdateRate__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_802C2A0C(Ctx* __restrict c) {
  trace_call(0x802C2A0Cu);
  c->r[0]=R32(c->r[3]+0x00000018u); // 802C2A0C
  c->r[6]=0u+0x00000000u; // 802C2A10
  c->r[5]=0u+0x00000000u; // 802C2A14
  c->ctr=c->r[0]; // 802C2A18
  cmps(c,0,(int32_t)c->r[0],0); // 802C2A1C
  if (!crb(c,1)) { goto L_802C2A58; } // 802C2A20
L_802C2A24:;
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 802C2A24
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C2A28
  cmps(c,0,(int32_t)c->r[0],0); // 802C2A2C
  if (crb(c,2)) { goto L_802C2A4C; } // 802C2A30
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802C2A34
  c->r[3]=R32(c->r[4]+c->r[0]); // 802C2A38
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2A3C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 802C2A40
  c->ctr=c->r[12]; // 802C2A44
  if (true) { dispatch(c,c->ctr); return; } // 802C2A48
L_802C2A4C:;
  c->r[5]=c->r[5]+0x00000004u; // 802C2A4C
  c->r[6]=c->r[6]+0x00000001u; // 802C2A50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C2A24; } // 802C2A54
L_802C2A58:;
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C2A58
  return; // 802C2A5C
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdl
void f_802C2A60(Ctx* __restrict c) {
  trace_call(0x802C2A60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2A60
  c->r[0]=c->lr; // 802C2A64
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C2A68
  c->r[11]=c->r[1]+0x00000030u; // 802C2A6C
  c->lr=0x802C2A74u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C2A70
  c->r[25]=c->r[3]|c->r[3]; // 802C2A74
  c->r[26]=c->r[4]|c->r[4]; // 802C2A78
  c->r[29]=0u+0x00000000u; // 802C2A7C
  c->r[28]=0u+0x00000000u; // 802C2A80
  c->r[30]=0u+0x00000000u; // 802C2A84
  c->r[31]=0u+0x00000000u; // 802C2A88
  goto L_802C2B18; // 802C2A8C
L_802C2A90:;
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 802C2A90
  c->r[27]=R32(c->r[3]+c->r[30]); // 802C2A94
  cmps(c,0,(int32_t)c->r[27],0); // 802C2A98
  if (crb(c,2)) { goto L_802C2B10; } // 802C2A9C
  c->r[0]=R32(c->r[26]+0x00000000u); // 802C2AA0
  c->r[3]=c->r[27]|c->r[27]; // 802C2AA4
  c->r[4]=c->r[1]+0x00000008u; // 802C2AA8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C2AAC
  c->r[12]=R32(c->r[27]+0x00000000u); // 802C2AB0
  c->r[12]=R32(c->r[12]+0x00000030u); // 802C2AB4
  c->ctr=c->r[12]; // 802C2AB8
  if (true) { c->lr=0x802C2AC0u; dispatch(c,c->ctr); } // 802C2ABC
  cmps(c,0,(int32_t)c->r[29],0); // 802C2AC0
  c->r[29]=0u+0x00000000u; // 802C2AC4
  if (!crb(c,2)) { goto L_802C2AD4; } // 802C2AC8
  cmps(c,0,(int32_t)c->r[3],0); // 802C2ACC
  if (crb(c,2)) { goto L_802C2AD8; } // 802C2AD0
L_802C2AD4:;
  c->r[29]=0u+0x00000001u; // 802C2AD4
L_802C2AD8:;
  c->r[5]=0u+0x00000000u; // 802C2AD8
  c->r[4]=0u+0x00000000u; // 802C2ADC
  goto L_802C2B04; // 802C2AE0
L_802C2AE4:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 802C2AE4
  c->r[0]=R16(c->r[3]+c->r[4]); // 802C2AE8
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 802C2AEC
  if (!crb(c,2)) { goto L_802C2AFC; } // 802C2AF0
  c->r[3]=R32(c->r[25]+0x00000014u); // 802C2AF4
  W16(c->r[3]+c->r[4],c->r[31]); // 802C2AF8
L_802C2AFC:;
  c->r[4]=c->r[4]+0x00000002u; // 802C2AFC
  c->r[5]=c->r[5]+0x00000001u; // 802C2B00
L_802C2B04:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 802C2B04
  cmpu(c,0,c->r[5],c->r[0]); // 802C2B08
  if (crb(c,0)) { IRQCHK(c); goto L_802C2AE4; } // 802C2B0C
L_802C2B10:;
  c->r[30]=c->r[30]+0x00000004u; // 802C2B10
  c->r[28]=c->r[28]+0x00000001u; // 802C2B14
L_802C2B18:;
  c->r[0]=R32(c->r[25]+0x00000018u); // 802C2B18
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 802C2B1C
  if (crb(c,0)) { IRQCHK(c); goto L_802C2A90; } // 802C2B20
  c->r[3]=c->r[25]|c->r[25]; // 802C2B24
  c->r[4]=0u+0x00000004u; // 802C2B28
  c->r[5]=0u+0x00000001u; // 802C2B2C
  c->lr=0x802C2B34u; f_802C63A4(c); // 802C2B30
  c->r[11]=c->r[1]+0x00000030u; // 802C2B34
  c->r[3]=c->r[29]|c->r[29]; // 802C2B38
  c->lr=0x802C2B40u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C2B3C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C2B40
  c->lr=c->r[0]; // 802C2B44
  c->r[1]=c->r[1]+0x00000030u; // 802C2B48
  return; // 802C2B4C
}

// Bind__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_802C2B50(Ctx* __restrict c) {
  trace_call(0x802C2B50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2B50
  c->r[0]=c->lr; // 802C2B54
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C2B58
  c->r[11]=c->r[1]+0x00000040u; // 802C2B5C
  c->lr=0x802C2B64u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C2B60
  c->r[28]=c->r[3]|c->r[3]; // 802C2B64
  c->r[29]=c->r[4]|c->r[4]; // 802C2B68
  c->r[30]=c->r[5]|c->r[5]; // 802C2B6C
  c->r[31]=c->r[6]|c->r[6]; // 802C2B70
  c->r[25]=0u+0x00000000u; // 802C2B74
  c->r[24]=0u+0x00000000u; // 802C2B78
  c->r[26]=0u+0x00000000u; // 802C2B7C
  c->r[27]=0u+0x00000000u; // 802C2B80
  goto L_802C2C18; // 802C2B84
L_802C2B88:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 802C2B88
  c->r[23]=R32(c->r[3]+c->r[26]); // 802C2B8C
  cmps(c,0,(int32_t)c->r[23],0); // 802C2B90
  if (crb(c,2)) { goto L_802C2C10; } // 802C2B94
  c->r[0]=R32(c->r[29]+0x00000000u); // 802C2B98
  c->r[3]=c->r[23]|c->r[23]; // 802C2B9C
  c->r[5]=c->r[30]|c->r[30]; // 802C2BA0
  c->r[6]=c->r[31]|c->r[31]; // 802C2BA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C2BA8
  c->r[4]=c->r[1]+0x00000008u; // 802C2BAC
  c->r[12]=R32(c->r[23]+0x00000000u); // 802C2BB0
  c->r[12]=R32(c->r[12]+0x00000050u); // 802C2BB4
  c->ctr=c->r[12]; // 802C2BB8
  if (true) { c->lr=0x802C2BC0u; dispatch(c,c->ctr); } // 802C2BBC
  cmps(c,0,(int32_t)c->r[25],0); // 802C2BC0
  c->r[25]=0u+0x00000000u; // 802C2BC4
  if (!crb(c,2)) { goto L_802C2BD4; } // 802C2BC8
  cmps(c,0,(int32_t)c->r[3],0); // 802C2BCC
  if (crb(c,2)) { goto L_802C2BD8; } // 802C2BD0
L_802C2BD4:;
  c->r[25]=0u+0x00000001u; // 802C2BD4
L_802C2BD8:;
  c->r[5]=0u+0x00000000u; // 802C2BD8
  c->r[4]=0u+0x00000000u; // 802C2BDC
  goto L_802C2C04; // 802C2BE0
L_802C2BE4:;
  c->r[3]=R32(c->r[23]+0x00000014u); // 802C2BE4
  c->r[0]=R16(c->r[3]+c->r[4]); // 802C2BE8
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 802C2BEC
  if (!crb(c,2)) { goto L_802C2BFC; } // 802C2BF0
  c->r[3]=R32(c->r[28]+0x00000014u); // 802C2BF4
  W16(c->r[3]+c->r[4],c->r[27]); // 802C2BF8
L_802C2BFC:;
  c->r[4]=c->r[4]+0x00000002u; // 802C2BFC
  c->r[5]=c->r[5]+0x00000001u; // 802C2C00
L_802C2C04:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 802C2C04
  cmpu(c,0,c->r[5],c->r[0]); // 802C2C08
  if (crb(c,0)) { IRQCHK(c); goto L_802C2BE4; } // 802C2C0C
L_802C2C10:;
  c->r[26]=c->r[26]+0x00000004u; // 802C2C10
  c->r[24]=c->r[24]+0x00000001u; // 802C2C14
L_802C2C18:;
  c->r[0]=R32(c->r[28]+0x00000018u); // 802C2C18
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 802C2C1C
  if (crb(c,0)) { IRQCHK(c); goto L_802C2B88; } // 802C2C20
  c->r[3]=c->r[28]|c->r[28]; // 802C2C24
  c->r[4]=0u+0x00000004u; // 802C2C28
  c->r[5]=0u+0x00000001u; // 802C2C2C
  c->lr=0x802C2C34u; f_802C63A4(c); // 802C2C30
  c->r[11]=c->r[1]+0x00000040u; // 802C2C34
  c->r[3]=c->r[25]|c->r[25]; // 802C2C38
  c->lr=0x802C2C40u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C2C3C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C2C40
  c->lr=c->r[0]; // 802C2C44
  c->r[1]=c->r[1]+0x00000040u; // 802C2C48
  return; // 802C2C4C
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFv
void f_802C2C50(Ctx* __restrict c) {
  trace_call(0x802C2C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2C50
  c->r[0]=c->lr; // 802C2C54
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C2C58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C2C5C
  c->r[31]=0u+0x00000000u; // 802C2C60
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C2C64
  c->r[30]=0u+0x00000000u; // 802C2C68
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C2C6C
  c->r[29]=c->r[3]|c->r[3]; // 802C2C70
  goto L_802C2CA0; // 802C2C74
L_802C2C78:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 802C2C78
  c->r[3]=R32(c->r[3]+c->r[31]); // 802C2C7C
  cmps(c,0,(int32_t)c->r[3],0); // 802C2C80
  if (crb(c,2)) { goto L_802C2C98; } // 802C2C84
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2C88
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C2C8C
  c->ctr=c->r[12]; // 802C2C90
  if (true) { c->lr=0x802C2C98u; dispatch(c,c->ctr); } // 802C2C94
L_802C2C98:;
  c->r[31]=c->r[31]+0x00000004u; // 802C2C98
  c->r[30]=c->r[30]+0x00000001u; // 802C2C9C
L_802C2CA0:;
  c->r[0]=R32(c->r[29]+0x00000018u); // 802C2CA0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 802C2CA4
  if (crb(c,0)) { IRQCHK(c); goto L_802C2C78; } // 802C2CA8
  c->r[3]=0u+0x00010000u; // 802C2CAC
  c->r[5]=0u+0x00000000u; // 802C2CB0
  c->r[4]=c->r[3]+0xFFFF8000u; // 802C2CB4
  c->r[6]=0u+0x00000000u; // 802C2CB8
  goto L_802C2CD0; // 802C2CBC
L_802C2CC0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C2CC0
  c->r[5]=c->r[5]+0x00000001u; // 802C2CC4
  W16(c->r[3]+c->r[6],c->r[4]); // 802C2CC8
  c->r[6]=c->r[6]+0x00000002u; // 802C2CCC
L_802C2CD0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C2CD0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802C2CD4
  if (crb(c,0)) { IRQCHK(c); goto L_802C2CC0; } // 802C2CD8
  c->r[3]=c->r[29]|c->r[29]; // 802C2CDC
  c->r[4]=0u+0x00000004u; // 802C2CE0
  c->r[5]=0u+0x00000000u; // 802C2CE4
  c->lr=0x802C2CECu; f_802C63A4(c); // 802C2CE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C2CEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C2CF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C2CF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C2CF8
  c->lr=c->r[0]; // 802C2CFC
  c->r[1]=c->r[1]+0x00000020u; // 802C2D00
  return; // 802C2D04
}

// Release__Q34nw4r3g3d13AnmObjChrNodeFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_802C2D08(Ctx* __restrict c) {
  trace_call(0x802C2D08u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2D08
  c->r[0]=c->lr; // 802C2D0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C2D10
  c->r[11]=c->r[1]+0x00000030u; // 802C2D14
  c->lr=0x802C2D1Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C2D18
  c->r[31]=c->r[3]|c->r[3]; // 802C2D1C
  c->r[26]=c->r[4]|c->r[4]; // 802C2D20
  c->r[27]=c->r[5]|c->r[5]; // 802C2D24
  c->r[28]=c->r[6]|c->r[6]; // 802C2D28
  c->r[29]=0u+0x00000000u; // 802C2D2C
  c->r[30]=0u+0x00000000u; // 802C2D30
  goto L_802C2D74; // 802C2D34
L_802C2D38:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802C2D38
  c->r[3]=R32(c->r[3]+c->r[30]); // 802C2D3C
  cmps(c,0,(int32_t)c->r[3],0); // 802C2D40
  if (crb(c,2)) { goto L_802C2D6C; } // 802C2D44
  c->r[0]=R32(c->r[26]+0x00000000u); // 802C2D48
  c->r[5]=c->r[27]|c->r[27]; // 802C2D4C
  c->r[6]=c->r[28]|c->r[28]; // 802C2D50
  c->r[4]=c->r[1]+0x00000008u; // 802C2D54
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C2D58
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2D5C
  c->r[12]=R32(c->r[12]+0x00000054u); // 802C2D60
  c->ctr=c->r[12]; // 802C2D64
  if (true) { c->lr=0x802C2D6Cu; dispatch(c,c->ctr); } // 802C2D68
L_802C2D6C:;
  c->r[30]=c->r[30]+0x00000004u; // 802C2D6C
  c->r[29]=c->r[29]+0x00000001u; // 802C2D70
L_802C2D74:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 802C2D74
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 802C2D78
  if (crb(c,0)) { IRQCHK(c); goto L_802C2D38; } // 802C2D7C
  c->r[3]=0u+0x00010000u; // 802C2D80
  c->r[5]=0u+0x00000000u; // 802C2D84
  c->r[4]=c->r[3]+0xFFFF8000u; // 802C2D88
  c->r[6]=0u+0x00000000u; // 802C2D8C
  goto L_802C2DA4; // 802C2D90
L_802C2D94:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C2D94
  c->r[5]=c->r[5]+0x00000001u; // 802C2D98
  W16(c->r[3]+c->r[6],c->r[4]); // 802C2D9C
  c->r[6]=c->r[6]+0x00000002u; // 802C2DA0
L_802C2DA4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C2DA4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802C2DA8
  if (crb(c,0)) { IRQCHK(c); goto L_802C2D94; } // 802C2DAC
  c->r[3]=c->r[31]|c->r[31]; // 802C2DB0
  c->r[4]=0u+0x00000004u; // 802C2DB4
  c->r[5]=0u+0x00000000u; // 802C2DB8
  c->lr=0x802C2DC0u; f_802C63A4(c); // 802C2DBC
  c->r[7]=0u+0x00000000u; // 802C2DC0
  c->r[5]=0u+0x00000000u; // 802C2DC4
  c->r[4]=0u+0x00000000u; // 802C2DC8
  goto L_802C2E20; // 802C2DCC
L_802C2DD0:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802C2DD0
  c->r[8]=R32(c->r[3]+c->r[5]); // 802C2DD4
  cmps(c,0,(int32_t)c->r[8],0); // 802C2DD8
  if (crb(c,2)) { goto L_802C2E18; } // 802C2DDC
  c->r[9]=0u+0x00000000u; // 802C2DE0
  c->r[6]=0u+0x00000000u; // 802C2DE4
  goto L_802C2E0C; // 802C2DE8
L_802C2DEC:;
  c->r[3]=R32(c->r[8]+0x00000014u); // 802C2DEC
  c->r[0]=R16(c->r[3]+c->r[6]); // 802C2DF0
  c->r[0]=rotl(c->r[0],0)&0x00008000u; cr0(c,c->r[0]); // 802C2DF4
  if (!crb(c,2)) { goto L_802C2E04; } // 802C2DF8
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C2DFC
  W16(c->r[3]+c->r[6],c->r[4]); // 802C2E00
L_802C2E04:;
  c->r[6]=c->r[6]+0x00000002u; // 802C2E04
  c->r[9]=c->r[9]+0x00000001u; // 802C2E08
L_802C2E0C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C2E0C
  cmpu(c,0,c->r[9],c->r[0]); // 802C2E10
  if (crb(c,0)) { IRQCHK(c); goto L_802C2DEC; } // 802C2E14
L_802C2E18:;
  c->r[5]=c->r[5]+0x00000004u; // 802C2E18
  c->r[7]=c->r[7]+0x00000001u; // 802C2E1C
L_802C2E20:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 802C2E20
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802C2E24
  if (crb(c,0)) { IRQCHK(c); goto L_802C2DD0; } // 802C2E28
  c->r[11]=c->r[1]+0x00000030u; // 802C2E2C
  c->lr=0x802C2E34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C2E30
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C2E34
  c->lr=c->r[0]; // 802C2E38
  c->r[1]=c->r[1]+0x00000030u; // 802C2E3C
  return; // 802C2E40
}

// G3dProc__Q34nw4r3g3d13AnmObjChrNodeFUlUlPv
void f_802C2E44(Ctx* __restrict c) {
  trace_call(0x802C2E44u);
  c->r[5]=0u+0x00010000u; // 802C2E44
  c->r[0]=c->r[5]+0x00000002u; // 802C2E48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C2E4C
  if (crb(c,2)) { goto L_802C2ECC; } // 802C2E50
  if (!crb(c,0)) { goto L_802C2E68; } // 802C2E54
  c->r[0]=c->r[5]+0x00000001u; // 802C2E58
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C2E5C
  if (!crb(c,0)) { goto L_802C2E78; } // 802C2E60
  return; // 802C2E64
L_802C2E68:;
  c->r[0]=c->r[5]+0x00000004u; // 802C2E68
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C2E6C
  if (!crb(c,0)) return; // 802C2E70
  goto L_802C2EC0; // 802C2E74
L_802C2E78:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 802C2E78
  c->r[4]=0u+0x00000000u; // 802C2E7C
  c->r[7]=0u+0x00000000u; // 802C2E80
  c->ctr=c->r[0]; // 802C2E84
  cmps(c,0,(int32_t)c->r[0],0); // 802C2E88
  if (!crb(c,1)) return; // 802C2E8C
L_802C2E90:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 802C2E90
  c->r[0]=R32(c->r[5]+c->r[7]); // 802C2E94
  cmpu(c,0,c->r[0],c->r[6]); // 802C2E98
  if (!crb(c,2)) { goto L_802C2EB0; } // 802C2E9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C2EA0
  c->r[12]=R32(c->r[12]+0x00000040u); // 802C2EA4
  c->ctr=c->r[12]; // 802C2EA8
  if (true) { dispatch(c,c->ctr); return; } // 802C2EAC
L_802C2EB0:;
  c->r[7]=c->r[7]+0x00000004u; // 802C2EB0
  c->r[4]=c->r[4]+0x00000001u; // 802C2EB4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C2E90; } // 802C2EB8
  return; // 802C2EBC
L_802C2EC0:;
  c->r[0]=0u+0x00000000u; // 802C2EC0
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C2EC4
  return; // 802C2EC8
L_802C2ECC:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C2ECC
  return; // 802C2ED0
}

// Construct__Q34nw4r3g3d14AnmObjChrBlendFP12MEMAllocatorPUlQ34nw4r3g3d6ResMdli
void f_802C2ED4(Ctx* __restrict c) {
  trace_call(0x802C2ED4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C2ED4
  c->r[0]=c->lr; // 802C2ED8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C2EDC
  c->r[11]=c->r[1]+0x00000030u; // 802C2EE0
  c->lr=0x802C2EE8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C2EE4
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C2EE8
  c->r[25]=c->r[3]|c->r[3]; // 802C2EEC
  c->r[29]=c->r[4]|c->r[4]; // 802C2EF0
  c->r[30]=c->r[6]|c->r[6]; // 802C2EF4
  cmps(c,0,(int32_t)c->r[0],0); // 802C2EF8
  if (!crb(c,2)) { goto L_802C2F08; } // 802C2EFC
  c->r[3]=0u+0x00000000u; // 802C2F00
  goto L_802C3030; // 802C2F04
L_802C2F08:;
  c->r[3]=c->r[5]|c->r[5]; // 802C2F08
  c->lr=0x802C2F10u; f_802B854C(c); // 802C2F0C
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C2F10
  c->r[5]=rotl(c->r[30],2)&0xFFFFFFFCu; // 802C2F14
  c->r[0]=c->r[4]+0x00000027u; // 802C2F18
  c->r[28]=c->r[3]|c->r[3]; // 802C2F1C
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C2F20
  cmps(c,0,(int32_t)c->r[29],0); // 802C2F24
  c->r[3]=c->r[27]+c->r[5]; // 802C2F28
  c->r[0]=c->r[3]+0x00000003u; // 802C2F2C
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C2F30
  c->r[3]=c->r[26]+c->r[5]; // 802C2F34
  c->r[0]=c->r[3]+0x00000003u; // 802C2F38
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C2F3C
  if (crb(c,2)) { goto L_802C2F48; } // 802C2F40
  W32(c->r[29]+0x00000000u,c->r[4]); // 802C2F44
L_802C2F48:;
  cmps(c,0,(int32_t)c->r[25],0); // 802C2F48
  if (!crb(c,2)) { goto L_802C2F58; } // 802C2F4C
  c->r[3]=0u+0x00000000u; // 802C2F50
  goto L_802C3030; // 802C2F54
L_802C2F58:;
  c->r[3]=c->r[25]|c->r[25]; // 802C2F58
  c->lr=0x802C2F60u; f_8034FF40(c); // 802C2F5C
  cmps(c,0,(int32_t)c->r[3],0); // 802C2F60
  c->r[31]=c->r[3]|c->r[3]; // 802C2F64
  if (!crb(c,2)) { goto L_802C2F74; } // 802C2F68
  c->r[3]=0u+0x00000000u; // 802C2F6C
  goto L_802C3030; // 802C2F70
L_802C2F74:;
  if (crb(c,2)) { goto L_802C302C; } // 802C2F74
  c->r[29]=0u+0x00000000u; // 802C2F78
  c->r[12]=0u+0x80480000u; // 802C2F7C
  W32(c->r[3]+0x00000004u,c->r[29]); // 802C2F80
  c->r[12]=c->r[12]+0x00006DC0u; // 802C2F84
  c->r[0]=c->r[3]+0x00000024u; // 802C2F88
  W32(c->r[3]+0x00000008u,c->r[25]); // 802C2F8C
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 802C2F90
  W32(c->r[3]+0x00000000u,c->r[12]); // 802C2F94
  W32(c->r[3]+0x00000010u,c->r[28]); // 802C2F98
  W32(c->r[3]+0x00000014u,c->r[0]); // 802C2F9C
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C2FA0
  c->ctr=c->r[12]; // 802C2FA4
  if (true) { c->lr=0x802C2FACu; dispatch(c,c->ctr); } // 802C2FA8
  c->r[3]=0u+0x80480000u; // 802C2FAC
  c->r[0]=c->r[31]+c->r[27]; // 802C2FB0
  c->r[3]=c->r[3]+0x00006D68u; // 802C2FB4
  c->r[4]=0u+0x00000000u; // 802C2FB8
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C2FBC
  c->r[5]=0u+0x00000000u; // 802C2FC0
  W32(c->r[31]+0x00000018u,c->r[30]); // 802C2FC4
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 802C2FC8
  goto L_802C2FE0; // 802C2FCC
L_802C2FD0:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802C2FD0
  c->r[4]=c->r[4]+0x00000001u; // 802C2FD4
  W32(c->r[3]+c->r[5],c->r[29]); // 802C2FD8
  c->r[5]=c->r[5]+0x00000004u; // 802C2FDC
L_802C2FE0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 802C2FE0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C2FE4
  if (crb(c,0)) { IRQCHK(c); goto L_802C2FD0; } // 802C2FE8
  c->r[3]=0u+0x80480000u; // 802C2FEC
  c->r[0]=c->r[31]+c->r[26]; // 802C2FF0
  c->r[3]=c->r[3]+0x00006D10u; // 802C2FF4
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C2FF8
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C2FFC
  c->r[4]=0u+0x00000000u; // 802C3000
  c->r[5]=0u+0x00000000u; // 802C3004
  W32(c->r[31]+0x00000020u,c->r[0]); // 802C3008
  goto L_802C3020; // 802C300C
L_802C3010:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 802C3010
  c->r[4]=c->r[4]+0x00000001u; // 802C3014
  {uint32_t ea=c->r[3]+c->r[5]; WF32(ea,c->f[0]);} // 802C3018
  c->r[5]=c->r[5]+0x00000004u; // 802C301C
L_802C3020:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 802C3020
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C3024
  if (crb(c,0)) { IRQCHK(c); goto L_802C3010; } // 802C3028
L_802C302C:;
  c->r[3]=c->r[31]|c->r[31]; // 802C302C
L_802C3030:;
  c->r[11]=c->r[1]+0x00000030u; // 802C3030
  c->lr=0x802C3038u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C3034
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C3038
  c->lr=c->r[0]; // 802C303C
  c->r[1]=c->r[1]+0x00000030u; // 802C3040
  return; // 802C3044
}

// fn_802C3048
void f_802C3048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3048
  c->r[0]=c->lr; // 802C304C
  W32(c->r[1]+0x00000164u,c->r[0]); // 802C3050
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 802C3054
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 802C3058
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 802C305C
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 802C3060
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 802C3064
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 802C3068
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 802C306C
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 802C3070
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[27]);} // 802C3074
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,27,ea,0,0);} // 802C3078
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[26]);} // 802C307C
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,26,ea,0,0);} // 802C3080
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[25]);} // 802C3084
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,25,ea,0,0);} // 802C3088
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[24]);} // 802C308C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,24,ea,0,0);} // 802C3090
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[23]);} // 802C3094
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,23,ea,0,0);} // 802C3098
  c->r[11]=c->r[1]+0x000000D0u; // 802C309C
  c->lr=0x802C30A4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C30A0
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[23]=c->ps1[23]=RF32(ea);} // 802C30A4
  c->r[24]=c->r[3]|c->r[3]; // 802C30A8
  c->r[0]=R32(c->r[3]+0x00000018u); // 802C30AC
  c->r[25]=c->r[4]|c->r[4]; // 802C30B0
  c->r[26]=c->r[5]|c->r[5]; // 802C30B4
  c->f[0]=c->f[23]; // 802C30B8
  c->r[28]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C30BC
  c->r[8]=0u+0x00000000u; // 802C30C0
  c->r[9]=0u+0x00000000u; // 802C30C4
  c->r[7]=0u+0x00000000u; // 802C30C8
  c->ctr=c->r[0]; // 802C30CC
  cmps(c,0,(int32_t)c->r[0],0); // 802C30D0
  if (!crb(c,1)) { goto L_802C3124; } // 802C30D4
L_802C30D8:;
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 802C30D8
  c->r[6]=R32(c->r[3]+0x00000020u); // 802C30DC
  c->r[5]=R32(c->r[5]+c->r[7]); // 802C30E0
  {uint32_t ea=c->r[6]+c->r[7]; c->f[1]=c->ps1[1]=RF32(ea);} // 802C30E4
  cmps(c,0,(int32_t)c->r[5],0); // 802C30E8
  if (crb(c,2)) { goto L_802C311C; } // 802C30EC
  fcmp(c,0,c->f[0],c->f[1]); // 802C30F0
  if (crb(c,2)) { goto L_802C311C; } // 802C30F4
  c->r[0]=R32(c->r[5]+0x00000014u); // 802C30F8
  c->r[0]=R16(c->r[28]+c->r[0]); // 802C30FC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 802C3100
  if (!crb(c,2)) { goto L_802C311C; } // 802C3104
  cmps(c,0,(int32_t)c->r[8],0); // 802C3108
  c->f[23]=c->ps1[23]=S(c->f[23]+c->f[1]); // 802C310C
  c->r[9]=c->r[9]+0x00000001u; // 802C3110
  if (!crb(c,2)) { goto L_802C311C; } // 802C3114
  c->r[8]=c->r[5]|c->r[5]; // 802C3118
L_802C311C:;
  c->r[7]=c->r[7]+0x00000004u; // 802C311C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C30D8; } // 802C3120
L_802C3124:;
  cmps(c,0,(int32_t)c->r[9],0); // 802C3124
  if (!crb(c,2)) { goto L_802C313C; } // 802C3128
  c->r[0]=0u+0x00000000u; // 802C312C
  c->r[3]=c->r[25]|c->r[25]; // 802C3130
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C3134
  goto L_802C3628; // 802C3138
L_802C313C:;
  cmps(c,0,(int32_t)c->r[9],1); // 802C313C
  if (!crb(c,2)) { goto L_802C3164; } // 802C3140
  c->r[12]=R32(c->r[8]+0x00000000u); // 802C3144
  c->r[3]=c->r[8]|c->r[8]; // 802C3148
  c->r[4]=c->r[25]|c->r[25]; // 802C314C
  c->r[5]=c->r[26]|c->r[26]; // 802C3150
  c->r[12]=R32(c->r[12]+0x00000038u); // 802C3154
  c->ctr=c->r[12]; // 802C3158
  if (true) { c->lr=0x802C3160u; dispatch(c,c->ctr); } // 802C315C
  goto L_802C3628; // 802C3160
L_802C3164:;
  c->r[3]=c->r[24]|c->r[24]; // 802C3164
  c->r[4]=0u+0x00000008u; // 802C3168
  c->lr=0x802C3170u; f_802C63CC(c); // 802C316C
  c->r[30]=c->r[3]|c->r[3]; // 802C3170
  c->r[3]=c->r[24]|c->r[24]; // 802C3174
  c->r[4]=0u+0x00000010u; // 802C3178
  c->lr=0x802C3180u; f_802C63CC(c); // 802C317C
  c->f[29]=c->ps1[29]=fres(c->f[23]); // 802C3180
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[28]=c->ps1[28]=RF32(ea);} // 802C3184
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3188
  c->r[31]=c->r[3]|c->r[3]; // 802C318C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[28]);} // 802C3190
  c->r[0]=0u+0xFFFFFFFFu; // 802C3194
  {double t0=S(c->f[29]+c->f[29]), t1=S(c->ps1[29]+c->ps1[29]); c->f[2]=t0; c->ps1[2]=t1;} // 802C3198
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[28]);} // 802C319C
  {double t0=S(c->f[29]*c->f[29]), t1=S(c->ps1[29]*c->ps1[29]); c->f[1]=t0; c->ps1[1]=t1;} // 802C31A0
  c->r[3]=c->r[25]+0x0000001Cu; // 802C31A4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[28]);} // 802C31A8
  c->f[27]=c->f[28]; // 802C31AC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802C31B0
  c->f[26]=c->f[28]; // 802C31B4
  c->f[25]=c->f[28]; // 802C31B8
  {double t0=S(-std::fma(c->f[23],c->f[1],-c->f[2])), t1=S(-std::fma(c->ps1[23],c->ps1[1],-c->ps1[2])); c->f[29]=t0; c->ps1[29]=t1;} // 802C31BC
  W32(c->r[25]+0x00000000u,c->r[0]); // 802C31C0
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[28]);} // 802C31C4
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[28]);} // 802C31C8
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[28]);} // 802C31CC
  c->lr=0x802C31D4u; f_8026CD7C(c); // 802C31D0
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[30]=c->ps1[30]=RF32(ea);} // 802C31D4
  c->r[27]=0u+0x00000000u; // 802C31D8
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C31DC
  c->r[29]=0u+0x00000000u; // 802C31E0
  goto L_802C34CC; // 802C31E4
L_802C31E8:;
  c->r[3]=R32(c->r[24]+0x0000001Cu); // 802C31E8
  c->r[4]=R32(c->r[24]+0x00000020u); // 802C31EC
  c->r[3]=R32(c->r[3]+c->r[29]); // 802C31F0
  {uint32_t ea=c->r[4]+c->r[29]; c->f[24]=c->ps1[24]=RF32(ea);} // 802C31F4
  cmps(c,0,(int32_t)c->r[3],0); // 802C31F8
  if (crb(c,2)) { goto L_802C34C4; } // 802C31FC
  fcmp(c,0,c->f[30],c->f[24]); // 802C3200
  if (crb(c,2)) { goto L_802C34C4; } // 802C3204
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C3208
  c->r[0]=R16(c->r[28]+c->r[0]); // 802C320C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 802C3210
  if (!crb(c,2)) { goto L_802C34C4; } // 802C3214
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C3218
  c->r[5]=c->r[26]|c->r[26]; // 802C321C
  c->r[4]=c->r[1]+0x0000005Cu; // 802C3220
  c->r[12]=R32(c->r[12]+0x00000038u); // 802C3224
  c->ctr=c->r[12]; // 802C3228
  if (true) { c->lr=0x802C3230u; dispatch(c,c->ctr); } // 802C322C
  cmps(c,0,(int32_t)c->r[31],0); // 802C3230
  c->f[23]=c->ps1[23]=S(c->f[24]*c->f[29]); // 802C3234
  c->r[22]=R32(c->r[3]+0x00000000u); // 802C3238
  c->r[23]=c->r[3]|c->r[3]; // 802C323C
  if (crb(c,2)) { goto L_802C32B0; } // 802C3240
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 802C3244
  if (!crb(c,2)) { goto L_802C331C; } // 802C3248
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C324C
  fcmp(c,0,c->f[1],c->f[30]); // 802C3250
  if (!crb(c,1)) { goto L_802C3260; } // 802C3254
  c->lr=0x802C325Cu; f_8026C820(c); // 802C3258
  goto L_802C3264; // 802C325C
L_802C3260:;
  {uint32_t ea=c->r[2]+0xFFFFABC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3260
L_802C3264:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 802C3264
  {uint32_t ea=c->r[23]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3268
  fcmp(c,0,c->f[1],c->f[30]); // 802C326C
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 802C3270
  if (!crb(c,1)) { goto L_802C3280; } // 802C3274
  c->lr=0x802C327Cu; f_8026C820(c); // 802C3278
  goto L_802C3284; // 802C327C
L_802C3280:;
  {uint32_t ea=c->r[2]+0xFFFFABC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3280
L_802C3284:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 802C3284
  {uint32_t ea=c->r[23]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3288
  fcmp(c,0,c->f[1],c->f[30]); // 802C328C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[0]); // 802C3290
  if (!crb(c,1)) { goto L_802C32A0; } // 802C3294
  c->lr=0x802C329Cu; f_8026C820(c); // 802C3298
  goto L_802C32A4; // 802C329C
L_802C32A0:;
  {uint32_t ea=c->r[2]+0xFFFFABC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C32A0
L_802C32A4:;
  c->f[0]=c->ps1[0]=S(c->f[23]*c->f[1]); // 802C32A4
  c->f[26]=c->ps1[26]=S(c->f[26]+c->f[0]); // 802C32A8
  goto L_802C331C; // 802C32AC
L_802C32B0:;
  c->r[0]=rotl(c->r[22],0)&0x00000008u; cr0(c,c->r[0]); // 802C32B0
  if (!crb(c,2)) { goto L_802C32F8; } // 802C32B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C32B8
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C32BC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 802C32C0
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C32C4
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C32C8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802C32CC
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 802C32D0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C32D4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 802C32D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802C32DC
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 802C32E0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C32E4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 802C32E8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802C32EC
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C32F0
  goto L_802C331C; // 802C32F4
L_802C32F8:;
  {uint32_t ea=c->r[25]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C32F8
  {uint32_t ea=c->r[25]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C32FC
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3300
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[23]); // 802C3304
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 802C3308
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 802C330C
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[2]);} // 802C3310
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 802C3314
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C3318
L_802C331C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802C331C
  if (crb(c,2)) { goto L_802C3378; } // 802C3320
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 802C3324
  if (!crb(c,2)) { goto L_802C333C; } // 802C3328
  c->r[3]=c->r[1]+0x00000018u; // 802C332C
  c->r[4]=c->r[23]+0x0000001Cu; // 802C3330
  c->lr=0x802C3338u; f_80354628(c); // 802C3334
  goto L_802C334C; // 802C3338
L_802C333C:;
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[30]);} // 802C333C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[30]);} // 802C3340
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[30]);} // 802C3344
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[31]);} // 802C3348
L_802C334C:;
  c->f[25]=c->ps1[25]=S(c->f[25]+c->f[24]); // 802C334C
  c->r[3]=c->r[1]+0x00000028u; // 802C3350
  c->r[5]=c->r[3]|c->r[3]; // 802C3354
  c->r[4]=c->r[1]+0x00000018u; // 802C3358
  c->f[0]=c->ps1[0]=fres(c->f[25]); // 802C335C
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802C3360
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802C3364
  {double t0=S(-std::fma(c->f[25],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[25],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 802C3368
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 802C336C
  c->lr=0x802C3374u; f_803547F4(c); // 802C3370
  goto L_802C3474; // 802C3374
L_802C3378:;
  c->r[0]=rotl(c->r[22],0)&0x00000020u; cr0(c,c->r[0]); // 802C3378
  if (!crb(c,2)) { goto L_802C344C; } // 802C337C
  cmps(c,0,(int32_t)c->r[27],0); // 802C3380
  if (!crb(c,2)) { goto L_802C33D0; } // 802C3384
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3388
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 802C338C
  {uint32_t ea=c->r[23]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3390
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 802C3394
  {uint32_t ea=c->r[23]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3398
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 802C339C
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33A0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 802C33A4
  {uint32_t ea=c->r[23]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33A8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 802C33AC
  {uint32_t ea=c->r[23]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33B0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 802C33B4
  {uint32_t ea=c->r[23]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33B8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 802C33BC
  {uint32_t ea=c->r[23]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33C0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 802C33C4
  {uint32_t ea=c->r[23]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33C8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 802C33CC
L_802C33D0:;
  {uint32_t ea=c->r[23]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C33D0
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33D4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 802C33D8
  {uint32_t ea=c->r[25]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 802C33DC
  {uint32_t ea=c->r[25]+0x00000024u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C33E0
  {uint32_t ea=c->r[25]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C33E4
  c->f[5]=c->ps1[5]=S(c->f[0]+c->f[1]); // 802C33E8
  {uint32_t ea=c->r[25]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C33EC
  {uint32_t ea=c->r[25]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C33F0
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[5]);} // 802C33F4
  {uint32_t ea=c->r[23]+0x00000020u; c->f[5]=c->ps1[5]=RF32(ea);} // 802C33F8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[23]); // 802C33FC
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 802C3400
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[4]);} // 802C3404
  {uint32_t ea=c->r[23]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 802C3408
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[23]); // 802C340C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[4]); // 802C3410
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[3]);} // 802C3414
  {uint32_t ea=c->r[23]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802C3418
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[23]); // 802C341C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802C3420
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[2]);} // 802C3424
  {uint32_t ea=c->r[23]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C3428
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 802C342C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802C3430
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[1]);} // 802C3434
  {uint32_t ea=c->r[23]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3438
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 802C343C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802C3440
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 802C3444
  goto L_802C3474; // 802C3448
L_802C344C:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C344C
  if (!crb(c,2)) { goto L_802C345C; } // 802C3450
  c->r[3]=c->r[1]+0x00000038u; // 802C3454
  c->lr=0x802C345Cu; f_8026CC5C(c); // 802C3458
L_802C345C:;
  {uint32_t ea=c->r[25]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C345C
  {uint32_t ea=c->r[25]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3460
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[23]); // 802C3464
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[23]); // 802C3468
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[1]);} // 802C346C
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 802C3470
L_802C3474:;
  c->r[0]=rotl(c->r[22],0)&0x00000040u; cr0(c,c->r[0]); // 802C3474
  if (!crb(c,2)) { goto L_802C34B8; } // 802C3478
  {uint32_t ea=c->r[23]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C347C
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C3480
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[23]); // 802C3484
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3488
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C348C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802C3490
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 802C3494
  {uint32_t ea=c->r[23]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C3498
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[23]); // 802C349C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802C34A0
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 802C34A4
  {uint32_t ea=c->r[23]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C34A8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[23]); // 802C34AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802C34B0
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 802C34B4
L_802C34B8:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 802C34B8
  c->r[0]=c->r[0]&c->r[22]; // 802C34BC
  W32(c->r[25]+0x00000000u,c->r[0]); // 802C34C0
L_802C34C4:;
  c->r[29]=c->r[29]+0x00000004u; // 802C34C4
  c->r[27]=c->r[27]+0x00000001u; // 802C34C8
L_802C34CC:;
  c->r[0]=R32(c->r[24]+0x00000018u); // 802C34CC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 802C34D0
  if (crb(c,0)) { IRQCHK(c); goto L_802C31E8; } // 802C34D4
  cmps(c,0,(int32_t)c->r[31],0); // 802C34D8
  if (crb(c,2)) { goto L_802C3504; } // 802C34DC
  c->f[1]=c->f[28]; // 802C34E0
  c->lr=0x802C34E8u; f_8026C794(c); // 802C34E4
  {uint32_t ea=c->r[25]+0x00000004u; WF32(ea,c->f[1]);} // 802C34E8
  c->f[1]=c->f[27]; // 802C34EC
  c->lr=0x802C34F4u; f_8026C794(c); // 802C34F0
  {uint32_t ea=c->r[25]+0x00000008u; WF32(ea,c->f[1]);} // 802C34F4
  c->f[1]=c->f[26]; // 802C34F8
  c->lr=0x802C3500u; f_8026C794(c); // 802C34FC
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[1]);} // 802C3500
L_802C3504:;
  cmps(c,0,(int32_t)c->r[30],0); // 802C3504
  if (crb(c,2)) { goto L_802C354C; } // 802C3508
  {uint32_t ea=c->r[25]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C350C
  c->r[3]=c->r[25]+0x0000001Cu; // 802C3510
  {uint32_t ea=c->r[25]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3514
  c->r[4]=c->r[1]+0x00000028u; // 802C3518
  {uint32_t ea=c->r[25]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C351C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 802C3520
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802C3524
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802C3528
  c->lr=0x802C3530u; f_80353D70(c); // 802C352C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C3530
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3534
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3538
  {uint32_t ea=c->r[25]+0x00000028u; WF32(ea,c->f[2]);} // 802C353C
  {uint32_t ea=c->r[25]+0x00000038u; WF32(ea,c->f[1]);} // 802C3540
  {uint32_t ea=c->r[25]+0x00000048u; WF32(ea,c->f[0]);} // 802C3544
  goto L_802C3618; // 802C3548
L_802C354C:;
  c->r[22]=c->r[25]+0x0000001Cu; // 802C354C
  c->r[23]=c->r[25]+0x0000002Cu; // 802C3550
  c->r[24]=c->r[25]+0x0000003Cu; // 802C3554
  c->r[3]=c->r[22]|c->r[22]; // 802C3558
  c->r[4]=c->r[23]|c->r[23]; // 802C355C
  c->r[5]=c->r[24]|c->r[24]; // 802C3560
  c->lr=0x802C3568u; f_803544EC(c); // 802C3564
  {uint32_t ea=c->r[22]+0x00000000u; psq_load(c,2,ea,0,0);} // 802C3568
  {uint32_t ea=c->r[22]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C356C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 802C3570
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3574
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 802C3578
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802C357C
  fcmp(c,0,c->f[0],c->f[1]); // 802C3580
  if (crb(c,2)) { goto L_802C35A4; } // 802C3584
  {uint32_t ea=c->r[24]+0x00000000u; psq_load(c,2,ea,0,0);} // 802C3588
  {uint32_t ea=c->r[24]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C358C
  {double t0=S(c->f[2]*c->f[2]), t1=S(c->ps1[2]*c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 802C3590
  {double t0=S(std::fma(c->f[1],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[1],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 802C3594
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802C3598
  fcmp(c,0,c->f[0],c->f[1]); // 802C359C
  if (!crb(c,2)) { goto L_802C35F0; } // 802C35A0
L_802C35A4:;
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35A4
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C35A8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35AC
  {uint32_t ea=c->r[25]+0x00000020u; WF32(ea,c->f[0]);} // 802C35B0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35B4
  {uint32_t ea=c->r[25]+0x00000024u; WF32(ea,c->f[0]);} // 802C35B8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35BC
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[0]);} // 802C35C0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35C4
  {uint32_t ea=c->r[25]+0x00000030u; WF32(ea,c->f[0]);} // 802C35C8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35CC
  {uint32_t ea=c->r[25]+0x00000034u; WF32(ea,c->f[0]);} // 802C35D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35D4
  {uint32_t ea=c->r[25]+0x0000003Cu; WF32(ea,c->f[0]);} // 802C35D8
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35DC
  {uint32_t ea=c->r[25]+0x00000040u; WF32(ea,c->f[0]);} // 802C35E0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C35E4
  {uint32_t ea=c->r[25]+0x00000044u; WF32(ea,c->f[0]);} // 802C35E8
  goto L_802C3618; // 802C35EC
L_802C35F0:;
  c->r[3]=c->r[22]|c->r[22]; // 802C35F0
  c->r[4]=c->r[22]|c->r[22]; // 802C35F4
  c->lr=0x802C35FCu; f_80354444(c); // 802C35F8
  c->r[3]=c->r[24]|c->r[24]; // 802C35FC
  c->r[4]=c->r[24]|c->r[24]; // 802C3600
  c->lr=0x802C3608u; f_80354444(c); // 802C3604
  c->r[3]=c->r[24]|c->r[24]; // 802C3608
  c->r[4]=c->r[22]|c->r[22]; // 802C360C
  c->r[5]=c->r[23]|c->r[23]; // 802C3610
  c->lr=0x802C3618u; f_803544EC(c); // 802C3614
L_802C3618:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 802C3618
  c->r[3]=c->r[25]|c->r[25]; // 802C361C
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 802C3620
  W32(c->r[25]+0x00000000u,c->r[0]); // 802C3624
L_802C3628:;
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 802C3628
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 802C362C
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 802C3630
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 802C3634
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 802C3638
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 802C363C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 802C3640
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 802C3644
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,27,ea,0,0);} // 802C3648
  {uint32_t ea=c->r[1]+0x00000110u; c->f[27]=RF64(ea);} // 802C364C
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,26,ea,0,0);} // 802C3650
  {uint32_t ea=c->r[1]+0x00000100u; c->f[26]=RF64(ea);} // 802C3654
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,25,ea,0,0);} // 802C3658
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[25]=RF64(ea);} // 802C365C
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,24,ea,0,0);} // 802C3660
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[24]=RF64(ea);} // 802C3664
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,23,ea,0,0);} // 802C3668
  c->r[11]=c->r[1]+0x000000D0u; // 802C366C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[23]=RF64(ea);} // 802C3670
  c->lr=0x802C3678u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C3674
  c->r[0]=R32(c->r[1]+0x00000164u); // 802C3678
  c->lr=c->r[0]; // 802C367C
  c->r[1]=c->r[1]+0x00000160u; // 802C3680
  return; // 802C3684
}

// fn_802C3688
void f_802C3688(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C3688
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802C368C
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 802C3690
  return; // 802C3694
}

// fn_802C3698
void f_802C3698(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C3698
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802C369C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 802C36A0
  return; // 802C36A4
}

// Construct__Q34nw4r3g3d12AnmObjChrResFP12MEMAllocatorPiQ34nw4r3g3d9ResAnmChrQ34nw4r3g3d6ResMdlb
void f_802C36A8(Ctx* __restrict c) {
  trace_call(0x802C36A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C36A8
  c->r[0]=c->lr; // 802C36AC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C36B0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802C36B4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802C36B8
  c->r[11]=c->r[1]+0x00000030u; // 802C36BC
  c->lr=0x802C36C4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C36C0
  c->r[8]=R32(c->r[5]+0x00000000u); // 802C36C4
  c->r[29]=c->r[3]|c->r[3]; // 802C36C8
  c->r[25]=c->r[4]|c->r[4]; // 802C36CC
  c->r[30]=c->r[5]|c->r[5]; // 802C36D0
  cmps(c,0,(int32_t)c->r[8],0); // 802C36D4
  c->r[27]=c->r[7]|c->r[7]; // 802C36D8
  if (crb(c,2)) { goto L_802C36EC; } // 802C36DC
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C36E0
  cmps(c,0,(int32_t)c->r[0],0); // 802C36E4
  if (!crb(c,2)) { goto L_802C36F4; } // 802C36E8
L_802C36EC:;
  c->r[3]=0u+0x00000000u; // 802C36EC
  goto L_802C3878; // 802C36F0
L_802C36F4:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 802C36F4
  c->r[3]=c->r[6]|c->r[6]; // 802C36F8
  c->lr=0x802C3700u; f_802B854C(c); // 802C36FC
  c->r[0]=0u-c->r[27]; // 802C3700
  c->r[28]=c->r[3]|c->r[3]; // 802C3704
  c->r[4]=c->r[0]|c->r[27]; // 802C3708
  cmps(c,0,(int32_t)c->r[25],0); // 802C370C
  c->r[4]=sraw(c,c->r[4],31); // 802C3710
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C3714
  c->r[3]=c->r[31]&c->r[4]; // 802C3718
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 802C371C
  c->r[3]=c->r[26]+c->r[0]; // 802C3720
  c->r[4]=c->r[3]+0x00000034u; // 802C3724
  if (crb(c,2)) { goto L_802C3730; } // 802C3728
  W32(c->r[25]+0x00000000u,c->r[4]); // 802C372C
L_802C3730:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C3730
  if (!crb(c,2)) { goto L_802C3740; } // 802C3734
  c->r[3]=0u+0x00000000u; // 802C3738
  goto L_802C3878; // 802C373C
L_802C3740:;
  c->r[3]=c->r[29]|c->r[29]; // 802C3740
  c->lr=0x802C3748u; f_8034FF40(c); // 802C3744
  cmps(c,0,(int32_t)c->r[3],0); // 802C3748
  c->r[31]=c->r[3]|c->r[3]; // 802C374C
  if (!crb(c,2)) { goto L_802C375C; } // 802C3750
  c->r[3]=0u+0x00000000u; // 802C3754
  goto L_802C3878; // 802C3758
L_802C375C:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C375C
  if (crb(c,2)) { goto L_802C376C; } // 802C3760
  c->r[27]=c->r[3]+0x00000034u; // 802C3764
  goto L_802C3770; // 802C3768
L_802C376C:;
  c->r[27]=0u+0x00000000u; // 802C376C
L_802C3770:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C3770
  c->r[4]=c->r[3]+c->r[26]; // 802C3774
  c->r[5]=c->r[4]+0x00000034u; // 802C3778
  if (crb(c,2)) { goto L_802C3874; } // 802C377C
  c->r[0]=0u+0x00000000u; // 802C3780
  c->r[4]=0u+0x80480000u; // 802C3784
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C3788
  c->r[4]=c->r[4]+0x00006DC0u; // 802C378C
  c->r[30]=R32(c->r[30]+0x00000000u); // 802C3790
  W32(c->r[3]+0x00000008u,c->r[29]); // 802C3794
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C3798
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C379C
  W32(c->r[3]+0x00000010u,c->r[28]); // 802C37A0
  W32(c->r[3]+0x00000014u,c->r[5]); // 802C37A4
  c->r[3]=c->r[31]|c->r[31]; // 802C37A8
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C37AC
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C37B0
  c->ctr=c->r[12]; // 802C37B4
  if (true) { c->lr=0x802C37BCu; dispatch(c,c->ctr); } // 802C37B8
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 802C37BC
  c->r[0]=0u+0x43300000u; // 802C37C0
  c->r[5]=R32(c->r[30]+0x00000020u); // 802C37C4
  c->r[3]=0u+0x80480000u; // 802C37C8
  c->r[4]=c->r[4]^0x80000000u; // 802C37CC
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C37D0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802C37D4
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802C37D8
  {uint32_t ea=c->r[2]+0xFFFFABC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C37DC
  c->r[4]=c->r[13]+0xFFFF8008u; // 802C37E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C37E4
  c->r[3]=c->r[3]+0x00006CB8u; // 802C37E8
  {uint32_t ea=c->r[2]+0xFFFFABD0u; c->f[3]=RF64(ea);} // 802C37EC
  cmps(c,0,(int32_t)c->r[27],0); // 802C37F0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802C37F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802C37F8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C37FC
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 802C3800
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C3804
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802C3808
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802C380C
  W32(c->r[31]+0x00000028u,c->r[0]); // 802C3810
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C3814
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 802C3818
  W32(c->r[31]+0x00000030u,c->r[27]); // 802C381C
  if (crb(c,2)) { goto L_802C3874; } // 802C3820
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C3824
  c->r[28]=0u+0x00000000u; // 802C3828
  c->r[27]=0u+0x00000000u; // 802C382C
  goto L_802C3868; // 802C3830
L_802C3834:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C3834
  c->r[3]=R16(c->r[3]+c->r[27]); // 802C3838
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C383C
  if (!crb(c,2)) { goto L_802C3860; } // 802C3840
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C3844
  c->f[1]=c->f[31]; // 802C3848
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 802C384C
  c->r[4]=R32(c->r[31]+0x00000030u); // 802C3850
  c->r[3]=c->r[31]+0x0000002Cu; // 802C3854
  c->r[4]=c->r[4]+c->r[0]; // 802C3858
  c->lr=0x802C3860u; f_802BE30C(c); // 802C385C
L_802C3860:;
  c->r[27]=c->r[27]+0x00000002u; // 802C3860
  c->r[28]=c->r[28]+0x00000001u; // 802C3864
L_802C3868:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C3868
  cmpu(c,0,c->r[28],c->r[0]); // 802C386C
  if (crb(c,0)) { IRQCHK(c); goto L_802C3834; } // 802C3870
L_802C3874:;
  c->r[3]=c->r[31]|c->r[31]; // 802C3874
L_802C3878:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802C3878
  c->r[11]=c->r[1]+0x00000030u; // 802C387C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802C3880
  c->lr=0x802C3888u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C3884
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C3888
  c->lr=c->r[0]; // 802C388C
  c->r[1]=c->r[1]+0x00000040u; // 802C3890
  return; // 802C3894
}

// fn_802C3898
void f_802C3898(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3898
  c->r[0]=c->lr; // 802C389C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C38A0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C38A4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C38A8
  c->f[3]=c->f[1]; // 802C38AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C38B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C38B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C38B8
  c->r[29]=c->r[3]|c->r[3]; // 802C38BC
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C38C0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C38C4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C38C8
  c->ctr=c->r[12]; // 802C38CC
  if (true) { c->lr=0x802C38D4u; dispatch(c,c->ctr); } // 802C38D0
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C38D4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C38D8
  cmps(c,0,(int32_t)c->r[0],0); // 802C38DC
  if (crb(c,2)) { goto L_802C3934; } // 802C38E0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C38E4
  c->r[31]=0u+0x00000000u; // 802C38E8
  c->r[30]=0u+0x00000000u; // 802C38EC
  goto L_802C3928; // 802C38F0
L_802C38F4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C38F4
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C38F8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C38FC
  if (!crb(c,2)) { goto L_802C3920; } // 802C3900
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C3904
  c->f[1]=c->f[31]; // 802C3908
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 802C390C
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C3910
  c->r[3]=c->r[29]+0x0000002Cu; // 802C3914
  c->r[4]=c->r[4]+c->r[0]; // 802C3918
  c->lr=0x802C3920u; f_802BE30C(c); // 802C391C
L_802C3920:;
  c->r[30]=c->r[30]+0x00000002u; // 802C3920
  c->r[31]=c->r[31]+0x00000001u; // 802C3924
L_802C3928:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C3928
  cmpu(c,0,c->r[31],c->r[0]); // 802C392C
  if (crb(c,0)) { IRQCHK(c); goto L_802C38F4; } // 802C3930
L_802C3934:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C3934
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C3938
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C393C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C3940
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C3944
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C3948
  c->lr=c->r[0]; // 802C394C
  c->r[1]=c->r[1]+0x00000030u; // 802C3950
  return; // 802C3954
}

// fn_802C3958
void f_802C3958(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3958
  return; // 802C395C
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjChrResFf
void f_802C3960(Ctx* __restrict c) {
  trace_call(0x802C3960u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3960
  c->r[0]=c->lr; // 802C3964
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C3968
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C396C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C3970
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3974
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C3978
  fcmp(c,0,c->f[0],c->f[1]); // 802C397C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C3980
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C3984
  c->r[29]=c->r[3]|c->r[3]; // 802C3988
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 802C398C
  if (!crb(c,2)) { goto L_802C39F0; } // 802C3990
  c->r[0]=R32(c->r[3]+0x00000030u); // 802C3994
  cmps(c,0,(int32_t)c->r[0],0); // 802C3998
  if (crb(c,2)) { goto L_802C39F0; } // 802C399C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C39A0
  c->r[31]=0u+0x00000000u; // 802C39A4
  c->r[30]=0u+0x00000000u; // 802C39A8
  goto L_802C39E4; // 802C39AC
L_802C39B0:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C39B0
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C39B4
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C39B8
  if (!crb(c,2)) { goto L_802C39DC; } // 802C39BC
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C39C0
  c->f[1]=c->f[31]; // 802C39C4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 802C39C8
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C39CC
  c->r[3]=c->r[29]+0x0000002Cu; // 802C39D0
  c->r[4]=c->r[4]+c->r[0]; // 802C39D4
  c->lr=0x802C39DCu; f_802BE30C(c); // 802C39D8
L_802C39DC:;
  c->r[30]=c->r[30]+0x00000002u; // 802C39DC
  c->r[31]=c->r[31]+0x00000001u; // 802C39E0
L_802C39E4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C39E4
  cmpu(c,0,c->r[31],c->r[0]); // 802C39E8
  if (crb(c,0)) { IRQCHK(c); goto L_802C39B0; } // 802C39EC
L_802C39F0:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C39F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C39F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C39F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C39FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C3A00
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C3A04
  c->lr=c->r[0]; // 802C3A08
  c->r[1]=c->r[1]+0x00000030u; // 802C3A0C
  return; // 802C3A10
}

// GetUpdateRate__Q34nw4r3g3d12AnmObjChrResCFv
void f_802C3A14(Ctx* __restrict c) {
  trace_call(0x802C3A14u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3A14
  return; // 802C3A18
}

// UpdateFrame__Q34nw4r3g3d12AnmObjChrResFv
void f_802C3A1C(Ctx* __restrict c) {
  trace_call(0x802C3A1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3A1C
  c->r[0]=c->lr; // 802C3A20
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C3A24
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C3A28
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C3A2C
  {uint32_t ea=c->r[2]+0xFFFFABC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3A30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C3A34
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C3A38
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C3A3C
  c->r[29]=c->r[3]|c->r[3]; // 802C3A40
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3A44
  fcmp(c,0,c->f[0],c->f[1]); // 802C3A48
  if (crb(c,2)) { goto L_802C3AD8; } // 802C3A4C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C3A50
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3A54
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C3A58
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802C3A5C
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C3A60
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C3A64
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C3A68
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802C3A6C
  c->ctr=c->r[12]; // 802C3A70
  if (true) { c->lr=0x802C3A78u; dispatch(c,c->ctr); } // 802C3A74
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C3A78
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C3A7C
  cmps(c,0,(int32_t)c->r[0],0); // 802C3A80
  if (crb(c,2)) { goto L_802C3AD8; } // 802C3A84
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C3A88
  c->r[31]=0u+0x00000000u; // 802C3A8C
  c->r[30]=0u+0x00000000u; // 802C3A90
  goto L_802C3ACC; // 802C3A94
L_802C3A98:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C3A98
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C3A9C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C3AA0
  if (!crb(c,2)) { goto L_802C3AC4; } // 802C3AA4
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C3AA8
  c->f[1]=c->f[31]; // 802C3AAC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 802C3AB0
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C3AB4
  c->r[3]=c->r[29]+0x0000002Cu; // 802C3AB8
  c->r[4]=c->r[4]+c->r[0]; // 802C3ABC
  c->lr=0x802C3AC4u; f_802BE30C(c); // 802C3AC0
L_802C3AC4:;
  c->r[30]=c->r[30]+0x00000002u; // 802C3AC4
  c->r[31]=c->r[31]+0x00000001u; // 802C3AC8
L_802C3ACC:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C3ACC
  cmpu(c,0,c->r[31],c->r[0]); // 802C3AD0
  if (crb(c,0)) { IRQCHK(c); goto L_802C3A98; } // 802C3AD4
L_802C3AD8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C3AD8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C3ADC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C3AE0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C3AE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C3AE8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C3AEC
  c->lr=c->r[0]; // 802C3AF0
  c->r[1]=c->r[1]+0x00000030u; // 802C3AF4
  return; // 802C3AF8
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdl
void f_802C3AFC(Ctx* __restrict c) {
  trace_call(0x802C3AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3AFC
  c->r[0]=c->lr; // 802C3B00
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C3B04
  c->r[11]=c->r[1]+0x00000030u; // 802C3B08
  c->lr=0x802C3B10u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C3B0C
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802C3B10
  c->r[27]=c->r[3]|c->r[3]; // 802C3B14
  c->r[28]=c->r[4]|c->r[4]; // 802C3B18
  c->r[30]=0u+0x00000000u; // 802C3B1C
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 802C3B20
  c->r[29]=0u+0x00000000u; // 802C3B24
  cmps(c,0,(int32_t)c->r[31],0); // 802C3B28
  if (!crb(c,1)) { goto L_802C3BD4; } // 802C3B2C
  goto L_802C3BC8; // 802C3B30
L_802C3B34:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 802C3B34
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C3B38
  cmps(c,0,(int32_t)c->r[0],0); // 802C3B3C
  if (crb(c,2)) { goto L_802C3B4C; } // 802C3B40
  c->r[0]=c->r[3]+c->r[0]; // 802C3B44
  goto L_802C3B50; // 802C3B48
L_802C3B4C:;
  c->r[0]=0u+0x00000000u; // 802C3B4C
L_802C3B50:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C3B50
  if (crb(c,2)) { goto L_802C3B7C; } // 802C3B54
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 802C3B58
  c->r[3]=c->r[0]+c->r[3]; // 802C3B5C
  c->r[3]=R32(c->r[3]+0x00000024u); // 802C3B60
  cmps(c,0,(int32_t)c->r[3],0); // 802C3B64
  if (crb(c,2)) { goto L_802C3B74; } // 802C3B68
  c->r[5]=c->r[0]+c->r[3]; // 802C3B6C
  goto L_802C3B80; // 802C3B70
L_802C3B74:;
  c->r[5]=0u+0x00000000u; // 802C3B74
  goto L_802C3B80; // 802C3B78
L_802C3B7C:;
  c->r[5]=0u+0x00000000u; // 802C3B7C
L_802C3B80:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C3B80
  c->r[3]=c->r[28]|c->r[28]; // 802C3B84
  c->r[4]=c->r[1]+0x00000008u; // 802C3B88
  c->r[5]=c->r[0]+c->r[5]; // 802C3B8C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802C3B90
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C3B94
  c->lr=0x802C3B9Cu; f_802B8454(c); // 802C3B98
  cmps(c,0,(int32_t)c->r[3],0); // 802C3B9C
  if (crb(c,2)) { goto L_802C3BC4; } // 802C3BA0
  c->r[4]=R32(c->r[27]+0x00000014u); // 802C3BA4
  if (crb(c,2)) { goto L_802C3BB4; } // 802C3BA8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C3BAC
  goto L_802C3BB8; // 802C3BB0
L_802C3BB4:;
  c->r[0]=0u+0x00000000u; // 802C3BB4
L_802C3BB8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802C3BB8
  c->r[30]=0u+0x00000001u; // 802C3BBC
  W16(c->r[4]+c->r[0],c->r[29]); // 802C3BC0
L_802C3BC4:;
  c->r[29]=c->r[29]+0x00000001u; // 802C3BC4
L_802C3BC8:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 802C3BC8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802C3BCC
  if (crb(c,0)) { IRQCHK(c); goto L_802C3B34; } // 802C3BD0
L_802C3BD4:;
  c->r[3]=c->r[27]|c->r[27]; // 802C3BD4
  c->r[4]=0u+0x00000004u; // 802C3BD8
  c->r[5]=0u+0x00000001u; // 802C3BDC
  c->lr=0x802C3BE4u; f_802C63A4(c); // 802C3BE0
  c->r[11]=c->r[1]+0x00000030u; // 802C3BE4
  c->r[3]=c->r[30]|c->r[30]; // 802C3BE8
  c->lr=0x802C3BF0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C3BEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C3BF0
  c->lr=c->r[0]; // 802C3BF4
  c->r[1]=c->r[1]+0x00000030u; // 802C3BF8
  return; // 802C3BFC
}

// Bind__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_802C3C00(Ctx* __restrict c) {
  trace_call(0x802C3C00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3C00
  c->r[0]=c->lr; // 802C3C04
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C3C08
  c->r[11]=c->r[1]+0x00000040u; // 802C3C0C
  c->lr=0x802C3C14u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C3C10
  cmps(c,0,(int32_t)c->r[6],1); // 802C3C14
  c->r[28]=c->r[3]|c->r[3]; // 802C3C18
  c->r[29]=c->r[4]|c->r[4]; // 802C3C1C
  c->r[30]=c->r[5]|c->r[5]; // 802C3C20
  c->r[31]=0u+0x00000000u; // 802C3C24
  if (crb(c,2)) { goto L_802C3C3C; } // 802C3C28
  if (!crb(c,0)) { goto L_802C3DCC; } // 802C3C2C
  cmps(c,0,(int32_t)c->r[6],0); // 802C3C30
  if (!crb(c,0)) { goto L_802C3D5C; } // 802C3C34
  goto L_802C3DCC; // 802C3C38
L_802C3C3C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C3C3C
  c->r[4]=c->r[30]|c->r[30]; // 802C3C40
  c->r[3]=c->r[1]+0x00000018u; // 802C3C44
  W32(c->r[1]+0x00000018u,c->r[0]); // 802C3C48
  c->lr=0x802C3C50u; f_802B84F8(c); // 802C3C4C
  c->r[0]=R32(c->r[3]+0x00000064u); // 802C3C50
  cmps(c,0,(int32_t)c->r[0],0); // 802C3C54
  if (crb(c,2)) { goto L_802C3C64; } // 802C3C58
  c->r[4]=c->r[3]+c->r[0]; // 802C3C5C
  goto L_802C3CA4; // 802C3C60
L_802C3C64:;
  c->r[4]=0u+0x00000000u; // 802C3C64
  goto L_802C3CA4; // 802C3C68
L_802C3C6C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 802C3C6C
  cmps(c,0,(int32_t)c->r[0],0); // 802C3C70
  if (crb(c,2)) { goto L_802C3C80; } // 802C3C74
  c->r[3]=c->r[3]+c->r[0]; // 802C3C78
  goto L_802C3C84; // 802C3C7C
L_802C3C80:;
  c->r[3]=0u+0x00000000u; // 802C3C80
L_802C3C84:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C3C84
  if (crb(c,2)) { goto L_802C3CAC; } // 802C3C88
  c->r[0]=R32(c->r[3]+0x00000064u); // 802C3C8C
  cmps(c,0,(int32_t)c->r[0],0); // 802C3C90
  if (crb(c,2)) { goto L_802C3CA0; } // 802C3C94
  c->r[4]=c->r[3]+c->r[0]; // 802C3C98
  goto L_802C3CA4; // 802C3C9C
L_802C3CA0:;
  c->r[4]=0u+0x00000000u; // 802C3CA0
L_802C3CA4:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C3CA4
  if (crb(c,2)) { IRQCHK(c); goto L_802C3C6C; } // 802C3CA8
L_802C3CAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C3CAC
  if (crb(c,2)) { goto L_802C3CC8; } // 802C3CB0
  if (crb(c,2)) { goto L_802C3CC0; } // 802C3CB4
  c->r[27]=R32(c->r[4]+0x0000000Cu); // 802C3CB8
  goto L_802C3CD4; // 802C3CBC
L_802C3CC0:;
  c->r[27]=0u+0x00000000u; // 802C3CC0
  goto L_802C3CD4; // 802C3CC4
L_802C3CC8:;
  c->r[3]=c->r[1]+0x00000018u; // 802C3CC8
  c->lr=0x802C3CD0u; f_802B854C(c); // 802C3CCC
  c->r[27]=c->r[3]|c->r[3]; // 802C3CD0
L_802C3CD4:;
  c->r[26]=rotl(c->r[30],1)&0xFFFFFFFEu; // 802C3CD4
  goto L_802C3D50; // 802C3CD8
L_802C3CDC:;
  c->r[3]=c->r[29]|c->r[29]; // 802C3CDC
  c->r[4]=c->r[30]|c->r[30]; // 802C3CE0
  c->lr=0x802C3CE8u; f_802B84F8(c); // 802C3CE4
  c->r[0]=R32(c->r[3]+0x00000008u); // 802C3CE8
  cmps(c,0,(int32_t)c->r[0],0); // 802C3CEC
  if (crb(c,2)) { goto L_802C3D00; } // 802C3CF0
  c->r[3]=c->r[3]+c->r[0]; // 802C3CF4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802C3CF8
  goto L_802C3D04; // 802C3CFC
L_802C3D00:;
  c->r[0]=0u+0x00000000u; // 802C3D00
L_802C3D04:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 802C3D04
  c->r[3]=R32(c->r[4]+0x00000010u); // 802C3D08
  cmps(c,0,(int32_t)c->r[3],0); // 802C3D0C
  if (crb(c,2)) { goto L_802C3D1C; } // 802C3D10
  c->r[5]=c->r[4]+c->r[3]; // 802C3D14
  goto L_802C3D20; // 802C3D18
L_802C3D1C:;
  c->r[5]=0u+0x00000000u; // 802C3D1C
L_802C3D20:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C3D20
  c->r[3]=c->r[1]+0x00000010u; // 802C3D24
  c->r[4]=c->r[1]+0x00000014u; // 802C3D28
  W32(c->r[1]+0x00000010u,c->r[5]); // 802C3D2C
  c->lr=0x802C3D34u; f_802B67C0(c); // 802C3D30
  cmps(c,0,(int32_t)c->r[3],-1); // 802C3D34
  if (crb(c,2)) { goto L_802C3D48; } // 802C3D38
  c->r[4]=R32(c->r[28]+0x00000014u); // 802C3D3C
  c->r[31]=0u+0x00000001u; // 802C3D40
  W16(c->r[4]+c->r[26],c->r[3]); // 802C3D44
L_802C3D48:;
  c->r[26]=c->r[26]+0x00000002u; // 802C3D48
  c->r[30]=c->r[30]+0x00000001u; // 802C3D4C
L_802C3D50:;
  cmpu(c,0,c->r[30],c->r[27]); // 802C3D50
  if (crb(c,0)) { IRQCHK(c); goto L_802C3CDC; } // 802C3D54
  goto L_802C3DCC; // 802C3D58
L_802C3D5C:;
  c->r[3]=c->r[29]|c->r[29]; // 802C3D5C
  c->r[4]=c->r[30]|c->r[30]; // 802C3D60
  c->lr=0x802C3D68u; f_802B84F8(c); // 802C3D64
  c->r[0]=R32(c->r[3]+0x00000008u); // 802C3D68
  cmps(c,0,(int32_t)c->r[0],0); // 802C3D6C
  if (crb(c,2)) { goto L_802C3D80; } // 802C3D70
  c->r[3]=c->r[3]+c->r[0]; // 802C3D74
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802C3D78
  goto L_802C3D84; // 802C3D7C
L_802C3D80:;
  c->r[0]=0u+0x00000000u; // 802C3D80
L_802C3D84:;
  c->r[4]=R32(c->r[28]+0x0000002Cu); // 802C3D84
  c->r[3]=R32(c->r[4]+0x00000010u); // 802C3D88
  cmps(c,0,(int32_t)c->r[3],0); // 802C3D8C
  if (crb(c,2)) { goto L_802C3D9C; } // 802C3D90
  c->r[5]=c->r[4]+c->r[3]; // 802C3D94
  goto L_802C3DA0; // 802C3D98
L_802C3D9C:;
  c->r[5]=0u+0x00000000u; // 802C3D9C
L_802C3DA0:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802C3DA0
  c->r[3]=c->r[1]+0x00000008u; // 802C3DA4
  c->r[4]=c->r[1]+0x0000000Cu; // 802C3DA8
  W32(c->r[1]+0x00000008u,c->r[5]); // 802C3DAC
  c->lr=0x802C3DB4u; f_802B67C0(c); // 802C3DB0
  cmps(c,0,(int32_t)c->r[3],-1); // 802C3DB4
  if (crb(c,2)) { goto L_802C3DCC; } // 802C3DB8
  c->r[4]=R32(c->r[28]+0x00000014u); // 802C3DBC
  c->r[0]=rotl(c->r[30],1)&0xFFFFFFFEu; // 802C3DC0
  c->r[31]=0u+0x00000001u; // 802C3DC4
  W16(c->r[4]+c->r[0],c->r[3]); // 802C3DC8
L_802C3DCC:;
  c->r[3]=c->r[28]|c->r[28]; // 802C3DCC
  c->r[4]=0u+0x00000004u; // 802C3DD0
  c->r[5]=0u+0x00000001u; // 802C3DD4
  c->lr=0x802C3DDCu; f_802C63A4(c); // 802C3DD8
  c->r[11]=c->r[1]+0x00000040u; // 802C3DDC
  c->r[3]=c->r[31]|c->r[31]; // 802C3DE0
  c->lr=0x802C3DE8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C3DE4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C3DE8
  c->lr=c->r[0]; // 802C3DEC
  c->r[1]=c->r[1]+0x00000040u; // 802C3DF0
  return; // 802C3DF4
}

// Release__Q34nw4r3g3d12AnmObjChrResFQ34nw4r3g3d6ResMdlUlQ44nw4r3g3d9AnmObjChr10BindOption
void f_802C3DF8(Ctx* __restrict c) {
  trace_call(0x802C3DF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3DF8
  c->r[0]=c->lr; // 802C3DFC
  cmps(c,0,(int32_t)c->r[6],1); // 802C3E00
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C3E04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C3E08
  c->r[31]=c->r[5]|c->r[5]; // 802C3E0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C3E10
  c->r[30]=c->r[3]|c->r[3]; // 802C3E14
  if (crb(c,2)) { goto L_802C3E2C; } // 802C3E18
  if (!crb(c,0)) { goto L_802C3FAC; } // 802C3E1C
  cmps(c,0,(int32_t)c->r[6],0); // 802C3E20
  if (!crb(c,0)) { goto L_802C3F98; } // 802C3E24
  goto L_802C3FAC; // 802C3E28
L_802C3E2C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C3E2C
  c->r[4]=c->r[31]|c->r[31]; // 802C3E30
  c->r[3]=c->r[1]+0x00000008u; // 802C3E34
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C3E38
  c->lr=0x802C3E40u; f_802B84F8(c); // 802C3E3C
  c->r[0]=R32(c->r[3]+0x00000064u); // 802C3E40
  cmps(c,0,(int32_t)c->r[0],0); // 802C3E44
  if (crb(c,2)) { goto L_802C3E54; } // 802C3E48
  c->r[4]=c->r[3]+c->r[0]; // 802C3E4C
  goto L_802C3E94; // 802C3E50
L_802C3E54:;
  c->r[4]=0u+0x00000000u; // 802C3E54
  goto L_802C3E94; // 802C3E58
L_802C3E5C:;
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 802C3E5C
  cmps(c,0,(int32_t)c->r[0],0); // 802C3E60
  if (crb(c,2)) { goto L_802C3E70; } // 802C3E64
  c->r[3]=c->r[3]+c->r[0]; // 802C3E68
  goto L_802C3E74; // 802C3E6C
L_802C3E70:;
  c->r[3]=0u+0x00000000u; // 802C3E70
L_802C3E74:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C3E74
  if (crb(c,2)) { goto L_802C3E9C; } // 802C3E78
  c->r[0]=R32(c->r[3]+0x00000064u); // 802C3E7C
  cmps(c,0,(int32_t)c->r[0],0); // 802C3E80
  if (crb(c,2)) { goto L_802C3E90; } // 802C3E84
  c->r[4]=c->r[3]+c->r[0]; // 802C3E88
  goto L_802C3E94; // 802C3E8C
L_802C3E90:;
  c->r[4]=0u+0x00000000u; // 802C3E90
L_802C3E94:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C3E94
  if (crb(c,2)) { IRQCHK(c); goto L_802C3E5C; } // 802C3E98
L_802C3E9C:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C3E9C
  if (crb(c,2)) { goto L_802C3EB8; } // 802C3EA0
  if (crb(c,2)) { goto L_802C3EB0; } // 802C3EA4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 802C3EA8
  goto L_802C3EC0; // 802C3EAC
L_802C3EB0:;
  c->r[3]=0u+0x00000000u; // 802C3EB0
  goto L_802C3EC0; // 802C3EB4
L_802C3EB8:;
  c->r[3]=c->r[1]+0x00000008u; // 802C3EB8
  c->lr=0x802C3EC0u; f_802B854C(c); // 802C3EBC
L_802C3EC0:;
  cmpu(c,1,c->r[31],c->r[3]); // 802C3EC0
  if (!crb(c,4)) { goto L_802C3FAC; } // 802C3EC4
  c->r[0]=c->r[3]-c->r[31]; // 802C3EC8
  c->r[6]=c->r[3]+0xFFFFFFF8u; // 802C3ECC
  cmpu(c,0,c->r[0],0x00000008u); // 802C3ED0
  if (!crb(c,1)) { goto L_802C3F68; } // 802C3ED4
  if (crb(c,5)) { goto L_802C3F68; } // 802C3ED8
  c->r[0]=c->r[6]+0x00000007u; // 802C3EDC
  c->r[4]=0u+0x00010000u; // 802C3EE0
  c->r[0]=c->r[0]-c->r[31]; // 802C3EE4
  c->r[7]=rotl(c->r[31],1)&0xFFFFFFFEu; // 802C3EE8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802C3EEC
  c->r[5]=c->r[4]+0xFFFF8000u; // 802C3EF0
  c->ctr=c->r[0]; // 802C3EF4
  cmpu(c,0,c->r[31],c->r[6]); // 802C3EF8
  if (!crb(c,0)) { goto L_802C3F68; } // 802C3EFC
L_802C3F00:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 802C3F00
  c->r[31]=c->r[31]+0x00000008u; // 802C3F04
  W16(c->r[4]+c->r[7],c->r[5]); // 802C3F08
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F0C
  c->r[4]=c->r[0]+c->r[7]; // 802C3F10
  W16(c->r[4]+0x00000002u,c->r[5]); // 802C3F14
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F18
  c->r[4]=c->r[0]+c->r[7]; // 802C3F1C
  W16(c->r[4]+0x00000004u,c->r[5]); // 802C3F20
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F24
  c->r[4]=c->r[0]+c->r[7]; // 802C3F28
  W16(c->r[4]+0x00000006u,c->r[5]); // 802C3F2C
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F30
  c->r[4]=c->r[0]+c->r[7]; // 802C3F34
  W16(c->r[4]+0x00000008u,c->r[5]); // 802C3F38
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F3C
  c->r[4]=c->r[0]+c->r[7]; // 802C3F40
  W16(c->r[4]+0x0000000Au,c->r[5]); // 802C3F44
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F48
  c->r[4]=c->r[0]+c->r[7]; // 802C3F4C
  W16(c->r[4]+0x0000000Cu,c->r[5]); // 802C3F50
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C3F54
  c->r[4]=c->r[0]+c->r[7]; // 802C3F58
  c->r[7]=c->r[7]+0x00000010u; // 802C3F5C
  W16(c->r[4]+0x0000000Eu,c->r[5]); // 802C3F60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C3F00; } // 802C3F64
L_802C3F68:;
  c->r[4]=0u+0x00010000u; // 802C3F68
  c->r[0]=c->r[3]-c->r[31]; // 802C3F6C
  c->r[5]=rotl(c->r[31],1)&0xFFFFFFFEu; // 802C3F70
  c->r[4]=c->r[4]+0xFFFF8000u; // 802C3F74
  c->ctr=c->r[0]; // 802C3F78
  cmpu(c,0,c->r[31],c->r[3]); // 802C3F7C
  if (!crb(c,0)) { goto L_802C3FAC; } // 802C3F80
L_802C3F84:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 802C3F84
  W16(c->r[3]+c->r[5],c->r[4]); // 802C3F88
  c->r[5]=c->r[5]+0x00000002u; // 802C3F8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C3F84; } // 802C3F90
  goto L_802C3FAC; // 802C3F94
L_802C3F98:;
  c->r[4]=0u+0x00010000u; // 802C3F98
  c->r[3]=R32(c->r[3]+0x00000014u); // 802C3F9C
  c->r[4]=c->r[4]+0xFFFF8000u; // 802C3FA0
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C3FA4
  W16(c->r[3]+c->r[0],c->r[4]); // 802C3FA8
L_802C3FAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C3FAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C3FB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C3FB4
  c->lr=c->r[0]; // 802C3FB8
  c->r[1]=c->r[1]+0x00000020u; // 802C3FBC
  return; // 802C3FC0
}

// GetResult__Q34nw4r3g3d12AnmObjChrResFPQ34nw4r3g3d12ChrAnmResultUl
void f_802C3FC4(Ctx* __restrict c) {
  trace_call(0x802C3FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C3FC4
  c->r[0]=c->lr; // 802C3FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C3FCC
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C3FD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C3FD4
  c->r[31]=c->r[4]|c->r[4]; // 802C3FD8
  c->r[6]=R32(c->r[3]+0x00000014u); // 802C3FDC
  c->r[5]=R16(c->r[6]+c->r[0]); // 802C3FE0
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 802C3FE4
  if (crb(c,2)) { goto L_802C3FFC; } // 802C3FE8
  c->r[0]=0u+0x00000000u; // 802C3FEC
  c->r[3]=c->r[31]|c->r[31]; // 802C3FF0
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C3FF4
  goto L_802C4024; // 802C3FF8
L_802C3FFC:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 802C3FFC
  cmps(c,0,(int32_t)c->r[6],0); // 802C4000
  if (crb(c,2)) { goto L_802C4014; } // 802C4004
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)76); // 802C4008
  c->r[3]=c->r[6]+c->r[0]; // 802C400C
  goto L_802C4024; // 802C4010
L_802C4014:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4014
  c->r[3]=c->r[3]+0x0000002Cu; // 802C4018
  c->lr=0x802C4020u; f_802BE30C(c); // 802C401C
  c->r[3]=c->r[31]|c->r[31]; // 802C4020
L_802C4024:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4024
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C4028
  c->lr=c->r[0]; // 802C402C
  c->r[1]=c->r[1]+0x00000010u; // 802C4030
  return; // 802C4034
}

// G3dProc__Q34nw4r3g3d12AnmObjChrResFUlUlPv
void f_802C4038(Ctx* __restrict c) {
  trace_call(0x802C4038u);
  c->r[5]=0u+0x00010000u; // 802C4038
  c->r[0]=c->r[5]+0x00000002u; // 802C403C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C4040
  if (crb(c,2)) { goto L_802C4084; } // 802C4044
  if (!crb(c,0)) { goto L_802C4058; } // 802C4048
  cmps(c,0,(int32_t)c->r[4],8); // 802C404C
  if (crb(c,2)) { goto L_802C4068; } // 802C4050
  return; // 802C4054
L_802C4058:;
  c->r[0]=c->r[5]+0x00000004u; // 802C4058
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C405C
  if (!crb(c,0)) return; // 802C4060
  goto L_802C4078; // 802C4064
L_802C4068:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4068
  c->r[12]=R32(c->r[12]+0x00000024u); // 802C406C
  c->ctr=c->r[12]; // 802C4070
  if (true) { dispatch(c,c->ctr); return; } // 802C4074
L_802C4078:;
  c->r[0]=0u+0x00000000u; // 802C4078
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C407C
  return; // 802C4080
L_802C4084:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C4084
  return; // 802C4088
}

// IsDerivedFrom__Q34nw4r3g3d12AnmObjChrResCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C408C(Ctx* __restrict c) {
  trace_call(0x802C408Cu);
  c->r[3]=0u+0x80440000u; // 802C408C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4090
  c->r[3]=c->r[3]+0xFFFFC4D8u; // 802C4094
  cmpu(c,0,c->r[0],c->r[3]); // 802C4098
  if (!crb(c,2)) { goto L_802C40A8; } // 802C409C
  c->r[3]=0u+0x00000001u; // 802C40A0
  return; // 802C40A4
L_802C40A8:;
  c->r[3]=0u+0x80440000u; // 802C40A8
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C40AC
  c->r[3]=c->r[3]+0xFFFFC4A0u; // 802C40B0
  cmpu(c,0,c->r[0],c->r[3]); // 802C40B4
  if (!crb(c,2)) { goto L_802C40C4; } // 802C40B8
  c->r[3]=0u+0x00000001u; // 802C40BC
  return; // 802C40C0
L_802C40C4:;
  c->r[3]=0u+0x80440000u; // 802C40C4
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C40C8
  cmpu(c,0,c->r[0],c->r[3]); // 802C40CC
  if (!crb(c,2)) { goto L_802C40DC; } // 802C40D0
  c->r[3]=0u+0x00000001u; // 802C40D4
  return; // 802C40D8
L_802C40DC:;
  c->r[3]=0u+0x80440000u; // 802C40DC
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C40E0
  c->r[0]=c->r[3]-c->r[0]; // 802C40E4
  c->r[0]=cntlz(c->r[0]); // 802C40E8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C40EC
  return; // 802C40F0
}

// IsDerivedFrom__Q34nw4r3g3d9AnmObjChrCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C40F4(Ctx* __restrict c) {
  trace_call(0x802C40F4u);
  c->r[3]=0u+0x80440000u; // 802C40F4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C40F8
  c->r[3]=c->r[3]+0xFFFFC4A0u; // 802C40FC
  cmpu(c,0,c->r[0],c->r[3]); // 802C4100
  if (!crb(c,2)) { goto L_802C4110; } // 802C4104
  c->r[3]=0u+0x00000001u; // 802C4108
  return; // 802C410C
L_802C4110:;
  c->r[3]=0u+0x80440000u; // 802C4110
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4114
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C4118
  cmpu(c,0,c->r[0],c->r[3]); // 802C411C
  if (!crb(c,2)) { goto L_802C412C; } // 802C4120
  c->r[3]=0u+0x00000001u; // 802C4124
  return; // 802C4128
L_802C412C:;
  c->r[3]=0u+0x80440000u; // 802C412C
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C4130
  c->r[0]=c->r[3]-c->r[0]; // 802C4134
  c->r[0]=cntlz(c->r[0]); // 802C4138
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C413C
  return; // 802C4140
}

// GetTypeName__Q34nw4r3g3d12AnmObjChrResCFv
void f_802C4144(Ctx* __restrict c) {
  trace_call(0x802C4144u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4144
  c->r[0]=c->lr; // 802C4148
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C414C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4150
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C4154
  c->ctr=c->r[12]; // 802C4158
  if (true) { c->lr=0x802C4160u; dispatch(c,c->ctr); } // 802C415C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4160
  c->r[3]=c->r[3]+0x00000004u; // 802C4164
  c->lr=c->r[0]; // 802C4168
  c->r[1]=c->r[1]+0x00000010u; // 802C416C
  return; // 802C4170
}

// GetTypeObj__Q34nw4r3g3d12AnmObjChrResCFv
void f_802C4174(Ctx* __restrict c) {
  trace_call(0x802C4174u);
  c->r[3]=0u+0x80440000u; // 802C4174
  c->r[3]=c->r[3]+0xFFFFC4D8u; // 802C4178
  return; // 802C417C
}

// __dt__Q34nw4r3g3d12AnmObjChrResFv
void f_802C4180(Ctx* __restrict c) {
  trace_call(0x802C4180u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4180
  c->r[0]=c->lr; // 802C4184
  cmps(c,0,(int32_t)c->r[3],0); // 802C4188
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C418C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C4190
  c->r[31]=c->r[3]|c->r[3]; // 802C4194
  if (crb(c,2)) { goto L_802C41AC; } // 802C4198
  if (crb(c,2)) { goto L_802C41AC; } // 802C419C
  if (crb(c,2)) { goto L_802C41AC; } // 802C41A0
  c->r[4]=0u+0x00000000u; // 802C41A4
  c->lr=0x802C41ACu; f_802C624C(c); // 802C41A8
L_802C41AC:;
  c->r[3]=c->r[31]|c->r[31]; // 802C41AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C41B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C41B4
  c->lr=c->r[0]; // 802C41B8
  c->r[1]=c->r[1]+0x00000010u; // 802C41BC
  return; // 802C41C0
}

// IsDerivedFrom__Q34nw4r3g3d14AnmObjChrBlendCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C41C4(Ctx* __restrict c) {
  trace_call(0x802C41C4u);
  c->r[5]=0u+0x80440000u; // 802C41C4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C41C8
  c->r[5]=c->r[5]+0xFFFFC4A0u; // 802C41CC
  c->r[3]=c->r[5]+0x00000024u; // 802C41D0
  cmpu(c,0,c->r[0],c->r[3]); // 802C41D4
  if (!crb(c,2)) { goto L_802C41E4; } // 802C41D8
  c->r[3]=0u+0x00000001u; // 802C41DC
  return; // 802C41E0
L_802C41E4:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 802C41E4
  c->r[0]=c->r[5]+0x00000010u; // 802C41E8
  cmpu(c,0,c->r[4],c->r[0]); // 802C41EC
  if (!crb(c,2)) { goto L_802C41FC; } // 802C41F0
  c->r[3]=0u+0x00000001u; // 802C41F4
  return; // 802C41F8
L_802C41FC:;
  c->r[0]=c->r[5]+0x00000000u; // 802C41FC
  cmpu(c,0,c->r[4],c->r[0]); // 802C4200
  if (!crb(c,2)) { goto L_802C4210; } // 802C4204
  c->r[3]=0u+0x00000001u; // 802C4208
  return; // 802C420C
L_802C4210:;
  c->r[3]=0u+0x80440000u; // 802C4210
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C4214
  cmpu(c,0,c->r[4],c->r[3]); // 802C4218
  if (!crb(c,2)) { goto L_802C4228; } // 802C421C
  c->r[3]=0u+0x00000001u; // 802C4220
  return; // 802C4224
L_802C4228:;
  c->r[3]=0u+0x80440000u; // 802C4228
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C422C
  c->r[0]=c->r[3]-c->r[4]; // 802C4230
  c->r[0]=cntlz(c->r[0]); // 802C4234
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C4238
  return; // 802C423C
}

// IsDerivedFrom__Q34nw4r3g3d13AnmObjChrNodeCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C4240(Ctx* __restrict c) {
  trace_call(0x802C4240u);
  c->r[3]=0u+0x80440000u; // 802C4240
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4244
  c->r[3]=c->r[3]+0xFFFFC4B0u; // 802C4248
  cmpu(c,0,c->r[0],c->r[3]); // 802C424C
  if (!crb(c,2)) { goto L_802C425C; } // 802C4250
  c->r[3]=0u+0x00000001u; // 802C4254
  return; // 802C4258
L_802C425C:;
  c->r[3]=0u+0x80440000u; // 802C425C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4260
  c->r[3]=c->r[3]+0xFFFFC4A0u; // 802C4264
  cmpu(c,0,c->r[0],c->r[3]); // 802C4268
  if (!crb(c,2)) { goto L_802C4278; } // 802C426C
  c->r[3]=0u+0x00000001u; // 802C4270
  return; // 802C4274
L_802C4278:;
  c->r[3]=0u+0x80440000u; // 802C4278
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C427C
  cmpu(c,0,c->r[0],c->r[3]); // 802C4280
  if (!crb(c,2)) { goto L_802C4290; } // 802C4284
  c->r[3]=0u+0x00000001u; // 802C4288
  return; // 802C428C
L_802C4290:;
  c->r[3]=0u+0x80440000u; // 802C4290
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C4294
  c->r[0]=c->r[3]-c->r[0]; // 802C4298
  c->r[0]=cntlz(c->r[0]); // 802C429C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C42A0
  return; // 802C42A4
}

// GetTypeName__Q34nw4r3g3d14AnmObjChrBlendCFv
void f_802C42A8(Ctx* __restrict c) {
  trace_call(0x802C42A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C42A8
  c->r[0]=c->lr; // 802C42AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C42B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C42B4
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C42B8
  c->ctr=c->r[12]; // 802C42BC
  if (true) { c->lr=0x802C42C4u; dispatch(c,c->ctr); } // 802C42C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C42C4
  c->r[3]=c->r[3]+0x00000004u; // 802C42C8
  c->lr=c->r[0]; // 802C42CC
  c->r[1]=c->r[1]+0x00000010u; // 802C42D0
  return; // 802C42D4
}

// GetTypeObj__Q34nw4r3g3d14AnmObjChrBlendCFv
void f_802C42D8(Ctx* __restrict c) {
  trace_call(0x802C42D8u);
  c->r[3]=0u+0x80440000u; // 802C42D8
  c->r[3]=c->r[3]+0xFFFFC4C4u; // 802C42DC
  return; // 802C42E0
}

// __dt__Q34nw4r3g3d14AnmObjChrBlendFv
void f_802C42E4(Ctx* __restrict c) {
  trace_call(0x802C42E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C42E4
  c->r[0]=c->lr; // 802C42E8
  cmps(c,0,(int32_t)c->r[3],0); // 802C42EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C42F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C42F4
  c->r[31]=c->r[3]|c->r[3]; // 802C42F8
  if (crb(c,2)) { goto L_802C4334; } // 802C42FC
  if (crb(c,2)) { goto L_802C4334; } // 802C4300
  c->r[12]=0u+0x80480000u; // 802C4304
  c->r[12]=c->r[12]+0x00006D68u; // 802C4308
  W32(c->r[3]+0x00000000u,c->r[12]); // 802C430C
  c->r[12]=R32(c->r[12]+0x00000044u); // 802C4310
  c->ctr=c->r[12]; // 802C4314
  if (true) { c->lr=0x802C431Cu; dispatch(c,c->ctr); } // 802C4318
  cmps(c,0,(int32_t)c->r[31],0); // 802C431C
  if (crb(c,2)) { goto L_802C4334; } // 802C4320
  if (crb(c,2)) { goto L_802C4334; } // 802C4324
  c->r[3]=c->r[31]|c->r[31]; // 802C4328
  c->r[4]=0u+0x00000000u; // 802C432C
  c->lr=0x802C4334u; f_802C624C(c); // 802C4330
L_802C4334:;
  c->r[3]=c->r[31]|c->r[31]; // 802C4334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C4338
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C433C
  c->lr=c->r[0]; // 802C4340
  c->r[1]=c->r[1]+0x00000010u; // 802C4344
  return; // 802C4348
}

// GetTypeName__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_802C434C(Ctx* __restrict c) {
  trace_call(0x802C434Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C434C
  c->r[0]=c->lr; // 802C4350
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4354
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4358
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C435C
  c->ctr=c->r[12]; // 802C4360
  if (true) { c->lr=0x802C4368u; dispatch(c,c->ctr); } // 802C4364
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4368
  c->r[3]=c->r[3]+0x00000004u; // 802C436C
  c->lr=c->r[0]; // 802C4370
  c->r[1]=c->r[1]+0x00000010u; // 802C4374
  return; // 802C4378
}

// GetTypeObj__Q34nw4r3g3d13AnmObjChrNodeCFv
void f_802C437C(Ctx* __restrict c) {
  trace_call(0x802C437Cu);
  c->r[3]=0u+0x80440000u; // 802C437C
  c->r[3]=c->r[3]+0xFFFFC4B0u; // 802C4380
  return; // 802C4384
}

// GetTypeName__Q34nw4r3g3d9AnmObjChrCFv
void f_802C4388(Ctx* __restrict c) {
  trace_call(0x802C4388u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4388
  c->r[0]=c->lr; // 802C438C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4390
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4394
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C4398
  c->ctr=c->r[12]; // 802C439C
  if (true) { c->lr=0x802C43A4u; dispatch(c,c->ctr); } // 802C43A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C43A4
  c->r[3]=c->r[3]+0x00000004u; // 802C43A8
  c->lr=c->r[0]; // 802C43AC
  c->r[1]=c->r[1]+0x00000010u; // 802C43B0
  return; // 802C43B4
}

// GetTypeObj__Q34nw4r3g3d9AnmObjChrCFv
void f_802C43B8(Ctx* __restrict c) {
  trace_call(0x802C43B8u);
  c->r[3]=0u+0x80440000u; // 802C43B8
  c->r[3]=c->r[3]+0xFFFFC4A0u; // 802C43BC
  return; // 802C43C0
}

// TestExistence__Q34nw4r3g3d9AnmObjShpCFUl
void f_802C43C4(Ctx* __restrict c) {
  trace_call(0x802C43C4u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 802C43C4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802C43C8
  c->r[0]=R16(c->r[3]+c->r[0]); // 802C43CC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 802C43D0
  c->r[0]=cntlz(c->r[0]); // 802C43D4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C43D8
  return; // 802C43DC
}

// Release__Q34nw4r3g3d9AnmObjShpFv
void f_802C43E0(Ctx* __restrict c) {
  trace_call(0x802C43E0u);
  c->r[4]=0u+0x00010000u; // 802C43E0
  c->r[7]=0u+0x00000000u; // 802C43E4
  c->r[5]=c->r[4]+0xFFFF8000u; // 802C43E8
  c->r[6]=0u+0x00000000u; // 802C43EC
  goto L_802C4404; // 802C43F0
L_802C43F4:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C43F4
  c->r[7]=c->r[7]+0x00000001u; // 802C43F8
  W16(c->r[4]+c->r[6],c->r[5]); // 802C43FC
  c->r[6]=c->r[6]+0x00000002u; // 802C4400
L_802C4404:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C4404
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802C4408
  if (crb(c,0)) { IRQCHK(c); goto L_802C43F4; } // 802C440C
  c->r[4]=0u+0x00000004u; // 802C4410
  c->r[5]=0u+0x00000000u; // 802C4414
  f_802C63A4(c); return; // 802C4418
}

// Attach__Q34nw4r3g3d9AnmObjShpFiPQ34nw4r3g3d12AnmObjShpRes
void f_802C441C(Ctx* __restrict c) {
  trace_call(0x802C441Cu);
  c->r[3]=0u+0x00000000u; // 802C441C
  return; // 802C4420
}

// Detach__Q34nw4r3g3d9AnmObjShpFi
void f_802C4424(Ctx* __restrict c) {
  trace_call(0x802C4424u);
  c->r[3]=0u+0x00000000u; // 802C4424
  return; // 802C4428
}

// SetWeight__Q34nw4r3g3d9AnmObjShpFif
void f_802C442C(Ctx* __restrict c) {
  trace_call(0x802C442Cu);
  return; // 802C442C
}

// GetWeight__Q34nw4r3g3d9AnmObjShpCFi
void f_802C4430(Ctx* __restrict c) {
  trace_call(0x802C4430u);
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4430
  return; // 802C4434
}

// DetachAll__Q34nw4r3g3d9AnmObjShpFv
void f_802C4438(Ctx* __restrict c) {
  trace_call(0x802C4438u);
  return; // 802C4438
}

// __dt__Q34nw4r3g3d9AnmObjShpFv
void f_802C443C(Ctx* __restrict c) {
  trace_call(0x802C443Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C443C
  c->r[0]=c->lr; // 802C4440
  cmps(c,0,(int32_t)c->r[3],0); // 802C4444
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C444C
  c->r[31]=c->r[3]|c->r[3]; // 802C4450
  if (crb(c,2)) { goto L_802C4464; } // 802C4454
  if (crb(c,2)) { goto L_802C4464; } // 802C4458
  c->r[4]=0u+0x00000000u; // 802C445C
  c->lr=0x802C4464u; f_802C624C(c); // 802C4460
L_802C4464:;
  c->r[3]=c->r[31]|c->r[31]; // 802C4464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C4468
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C446C
  c->lr=c->r[0]; // 802C4470
  c->r[1]=c->r[1]+0x00000010u; // 802C4474
  return; // 802C4478
}

// Construct__Q34nw4r3g3d12AnmObjShpResFP12MEMAllocatorPUlQ34nw4r3g3d9ResAnmShpQ34nw4r3g3d6ResMdlb
void f_802C447C(Ctx* __restrict c) {
  trace_call(0x802C447Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C447C
  c->r[0]=c->lr; // 802C4480
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C4484
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802C4488
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802C448C
  c->r[11]=c->r[1]+0x00000030u; // 802C4490
  c->lr=0x802C4498u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C4494
  c->r[8]=R32(c->r[5]+0x00000000u); // 802C4498
  c->r[27]=c->r[3]|c->r[3]; // 802C449C
  c->r[29]=c->r[4]|c->r[4]; // 802C44A0
  c->r[28]=c->r[5]|c->r[5]; // 802C44A4
  cmps(c,0,(int32_t)c->r[8],0); // 802C44A8
  c->r[24]=c->r[7]|c->r[7]; // 802C44AC
  if (crb(c,2)) { goto L_802C44C0; } // 802C44B0
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C44B4
  cmps(c,0,(int32_t)c->r[0],0); // 802C44B8
  if (!crb(c,2)) { goto L_802C44C8; } // 802C44BC
L_802C44C0:;
  c->r[3]=0u+0x00000000u; // 802C44C0
  goto L_802C469C; // 802C44C4
L_802C44C8:;
  c->r[0]=R32(c->r[8]+0x00000010u); // 802C44C8
  cmps(c,0,(int32_t)c->r[0],0); // 802C44CC
  if (crb(c,2)) { goto L_802C44DC; } // 802C44D0
  c->r[3]=c->r[8]+c->r[0]; // 802C44D4
  goto L_802C44E0; // 802C44D8
L_802C44DC:;
  c->r[3]=0u+0x00000000u; // 802C44DC
L_802C44E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C44E0
  if (crb(c,2)) { goto L_802C44F0; } // 802C44E4
  c->r[25]=R32(c->r[3]+0x00000004u); // 802C44E8
  goto L_802C44F4; // 802C44EC
L_802C44F0:;
  c->r[25]=0u+0x00000000u; // 802C44F0
L_802C44F4:;
  c->r[3]=c->r[6]|c->r[6]; // 802C44F4
  c->lr=0x802C44FCu; f_802B8678(c); // 802C44F8
  c->r[5]=R32(c->r[28]+0x00000000u); // 802C44FC
  c->r[0]=0u-c->r[24]; // 802C4500
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C4504
  c->r[26]=c->r[3]|c->r[3]; // 802C4508
  c->r[6]=R16(c->r[5]+0x00000022u); // 802C450C
  c->r[0]=c->r[0]|c->r[24]; // 802C4510
  c->r[5]=sraw(c,c->r[0],31); // 802C4514
  c->r[4]=c->r[4]+0x0000003Bu; // 802C4518
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 802C451C
  cmps(c,0,(int32_t)c->r[29],0); // 802C4520
  c->r[5]=c->r[25]&c->r[5]; // 802C4524
  c->r[30]=rotl(c->r[4],0)&0xFFFFFFFCu; // 802C4528
  c->r[3]=c->r[30]+c->r[0]; // 802C452C
  c->r[0]=c->r[3]+0x00000003u; // 802C4530
  c->r[24]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 802C4534
  c->r[25]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C4538
  c->r[3]=c->r[25]+c->r[24]; // 802C453C
  c->r[0]=c->r[3]+0x00000003u; // 802C4540
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C4544
  if (crb(c,2)) { goto L_802C4550; } // 802C4548
  W32(c->r[29]+0x00000000u,c->r[4]); // 802C454C
L_802C4550:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C4550
  if (!crb(c,2)) { goto L_802C4560; } // 802C4554
  c->r[3]=0u+0x00000000u; // 802C4558
  goto L_802C469C; // 802C455C
L_802C4560:;
  c->r[3]=c->r[27]|c->r[27]; // 802C4560
  c->lr=0x802C4568u; f_8034FF40(c); // 802C4564
  cmps(c,0,(int32_t)c->r[3],0); // 802C4568
  c->r[31]=c->r[3]|c->r[3]; // 802C456C
  if (!crb(c,2)) { goto L_802C457C; } // 802C4570
  c->r[3]=0u+0x00000000u; // 802C4574
  goto L_802C469C; // 802C4578
L_802C457C:;
  c->r[5]=c->r[3]+0x00000038u; // 802C457C
  c->r[30]=c->r[3]+c->r[30]; // 802C4580
  c->r[29]=c->r[3]+c->r[25]; // 802C4584
  if (crb(c,2)) { goto L_802C4698; } // 802C4588
  cmps(c,0,(int32_t)c->r[24],0); // 802C458C
  c->r[28]=R32(c->r[28]+0x00000000u); // 802C4590
  if (crb(c,2)) { goto L_802C459C; } // 802C4594
  goto L_802C45A0; // 802C4598
L_802C459C:;
  c->r[29]=0u+0x00000000u; // 802C459C
L_802C45A0:;
  c->r[0]=0u+0x00000000u; // 802C45A0
  c->r[4]=0u+0x80480000u; // 802C45A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C45A8
  c->r[4]=c->r[4]+0x00006E68u; // 802C45AC
  W32(c->r[3]+0x00000008u,c->r[27]); // 802C45B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C45B4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C45B8
  W32(c->r[3]+0x00000010u,c->r[26]); // 802C45BC
  W32(c->r[3]+0x00000014u,c->r[5]); // 802C45C0
  c->r[3]=c->r[31]|c->r[31]; // 802C45C4
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C45C8
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C45CC
  c->ctr=c->r[12]; // 802C45D0
  if (true) { c->lr=0x802C45D8u; dispatch(c,c->ctr); } // 802C45D4
  c->r[4]=R16(c->r[28]+0x00000020u); // 802C45D8
  c->r[0]=0u+0x43300000u; // 802C45DC
  c->r[5]=R32(c->r[28]+0x00000024u); // 802C45E0
  c->r[3]=0u+0x80480000u; // 802C45E4
  c->r[4]=c->r[4]^0x80000000u; // 802C45E8
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C45EC
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802C45F0
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802C45F4
  {uint32_t ea=c->r[2]+0xFFFFABDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C45F8
  c->r[4]=c->r[13]+0xFFFF8008u; // 802C45FC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C4600
  c->r[3]=c->r[3]+0x00006E18u; // 802C4604
  {uint32_t ea=c->r[2]+0xFFFFABE0u; c->f[3]=RF64(ea);} // 802C4608
  cmps(c,0,(int32_t)c->r[29],0); // 802C460C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802C4610
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802C4614
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C4618
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 802C461C
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C4620
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802C4624
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802C4628
  W32(c->r[31]+0x00000028u,c->r[0]); // 802C462C
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C4630
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 802C4634
  W32(c->r[31]+0x00000030u,c->r[30]); // 802C4638
  W32(c->r[31]+0x00000034u,c->r[29]); // 802C463C
  if (crb(c,2)) { goto L_802C4698; } // 802C4640
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C4644
  c->r[26]=0u+0x00000000u; // 802C4648
  c->r[25]=0u+0x00000000u; // 802C464C
  goto L_802C468C; // 802C4650
L_802C4654:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C4654
  c->r[3]=R16(c->r[3]+c->r[25]); // 802C4658
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C465C
  if (!crb(c,2)) { goto L_802C4684; } // 802C4660
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C4664
  c->f[1]=c->f[31]; // 802C4668
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 802C466C
  c->r[4]=R32(c->r[31]+0x00000034u); // 802C4670
  c->r[6]=R32(c->r[31]+0x00000030u); // 802C4674
  c->r[3]=c->r[31]+0x0000002Cu; // 802C4678
  c->r[4]=c->r[4]+c->r[0]; // 802C467C
  c->lr=0x802C4684u; f_802BFA4C(c); // 802C4680
L_802C4684:;
  c->r[25]=c->r[25]+0x00000002u; // 802C4684
  c->r[26]=c->r[26]+0x00000001u; // 802C4688
L_802C468C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C468C
  cmpu(c,0,c->r[26],c->r[0]); // 802C4690
  if (crb(c,0)) { IRQCHK(c); goto L_802C4654; } // 802C4694
L_802C4698:;
  c->r[3]=c->r[31]|c->r[31]; // 802C4698
L_802C469C:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802C469C
  c->r[11]=c->r[1]+0x00000030u; // 802C46A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802C46A4
  c->lr=0x802C46ACu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C46A8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C46AC
  c->lr=c->r[0]; // 802C46B0
  c->r[1]=c->r[1]+0x00000040u; // 802C46B4
  return; // 802C46B8
}

// SetFrame__Q34nw4r3g3d12AnmObjShpResFf
void f_802C46BC(Ctx* __restrict c) {
  trace_call(0x802C46BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C46BC
  c->r[0]=c->lr; // 802C46C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C46C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C46C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C46CC
  c->f[3]=c->f[1]; // 802C46D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C46D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C46D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C46DC
  c->r[29]=c->r[3]|c->r[3]; // 802C46E0
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C46E4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C46E8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C46EC
  c->ctr=c->r[12]; // 802C46F0
  if (true) { c->lr=0x802C46F8u; dispatch(c,c->ctr); } // 802C46F4
  c->r[0]=R32(c->r[29]+0x00000034u); // 802C46F8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C46FC
  cmps(c,0,(int32_t)c->r[0],0); // 802C4700
  if (crb(c,2)) { goto L_802C475C; } // 802C4704
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C4708
  c->r[31]=0u+0x00000000u; // 802C470C
  c->r[30]=0u+0x00000000u; // 802C4710
  goto L_802C4750; // 802C4714
L_802C4718:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C4718
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C471C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C4720
  if (!crb(c,2)) { goto L_802C4748; } // 802C4724
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C4728
  c->f[1]=c->f[31]; // 802C472C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 802C4730
  c->r[4]=R32(c->r[29]+0x00000034u); // 802C4734
  c->r[6]=R32(c->r[29]+0x00000030u); // 802C4738
  c->r[3]=c->r[29]+0x0000002Cu; // 802C473C
  c->r[4]=c->r[4]+c->r[0]; // 802C4740
  c->lr=0x802C4748u; f_802BFA4C(c); // 802C4744
L_802C4748:;
  c->r[30]=c->r[30]+0x00000002u; // 802C4748
  c->r[31]=c->r[31]+0x00000001u; // 802C474C
L_802C4750:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C4750
  cmpu(c,0,c->r[31],c->r[0]); // 802C4754
  if (crb(c,0)) { IRQCHK(c); goto L_802C4718; } // 802C4758
L_802C475C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C475C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C4760
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C4764
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C4768
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C476C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C4770
  c->lr=c->r[0]; // 802C4774
  c->r[1]=c->r[1]+0x00000030u; // 802C4778
  return; // 802C477C
}

// GetFrame__Q34nw4r3g3d12AnmObjShpResCFv
void f_802C4780(Ctx* __restrict c) {
  trace_call(0x802C4780u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4780
  return; // 802C4784
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjShpResFf
void f_802C4788(Ctx* __restrict c) {
  trace_call(0x802C4788u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4788
  c->r[0]=c->lr; // 802C478C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C4790
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C4794
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C4798
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C479C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C47A0
  fcmp(c,0,c->f[0],c->f[1]); // 802C47A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C47A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C47AC
  c->r[29]=c->r[3]|c->r[3]; // 802C47B0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 802C47B4
  if (!crb(c,2)) { goto L_802C481C; } // 802C47B8
  c->r[0]=R32(c->r[3]+0x00000034u); // 802C47BC
  cmps(c,0,(int32_t)c->r[0],0); // 802C47C0
  if (crb(c,2)) { goto L_802C481C; } // 802C47C4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C47C8
  c->r[31]=0u+0x00000000u; // 802C47CC
  c->r[30]=0u+0x00000000u; // 802C47D0
  goto L_802C4810; // 802C47D4
L_802C47D8:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C47D8
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C47DC
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C47E0
  if (!crb(c,2)) { goto L_802C4808; } // 802C47E4
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C47E8
  c->f[1]=c->f[31]; // 802C47EC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 802C47F0
  c->r[4]=R32(c->r[29]+0x00000034u); // 802C47F4
  c->r[6]=R32(c->r[29]+0x00000030u); // 802C47F8
  c->r[3]=c->r[29]+0x0000002Cu; // 802C47FC
  c->r[4]=c->r[4]+c->r[0]; // 802C4800
  c->lr=0x802C4808u; f_802BFA4C(c); // 802C4804
L_802C4808:;
  c->r[30]=c->r[30]+0x00000002u; // 802C4808
  c->r[31]=c->r[31]+0x00000001u; // 802C480C
L_802C4810:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C4810
  cmpu(c,0,c->r[31],c->r[0]); // 802C4814
  if (crb(c,0)) { IRQCHK(c); goto L_802C47D8; } // 802C4818
L_802C481C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C481C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C4820
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C4824
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C4828
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C482C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C4830
  c->lr=c->r[0]; // 802C4834
  c->r[1]=c->r[1]+0x00000030u; // 802C4838
  return; // 802C483C
}

// GetUpdateRate__Q34nw4r3g3d12AnmObjShpResCFv
void f_802C4840(Ctx* __restrict c) {
  trace_call(0x802C4840u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4840
  return; // 802C4844
}

// UpdateFrame__Q34nw4r3g3d12AnmObjShpResFv
void f_802C4848(Ctx* __restrict c) {
  trace_call(0x802C4848u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4848
  c->r[0]=c->lr; // 802C484C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C4850
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C4854
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C4858
  {uint32_t ea=c->r[2]+0xFFFFABD8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C485C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C4860
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C4864
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C4868
  c->r[29]=c->r[3]|c->r[3]; // 802C486C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4870
  fcmp(c,0,c->f[0],c->f[1]); // 802C4874
  if (crb(c,2)) { goto L_802C4908; } // 802C4878
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C487C
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4880
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C4884
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802C4888
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C488C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4890
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4894
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802C4898
  c->ctr=c->r[12]; // 802C489C
  if (true) { c->lr=0x802C48A4u; dispatch(c,c->ctr); } // 802C48A0
  c->r[0]=R32(c->r[29]+0x00000034u); // 802C48A4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C48A8
  cmps(c,0,(int32_t)c->r[0],0); // 802C48AC
  if (crb(c,2)) { goto L_802C4908; } // 802C48B0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C48B4
  c->r[31]=0u+0x00000000u; // 802C48B8
  c->r[30]=0u+0x00000000u; // 802C48BC
  goto L_802C48FC; // 802C48C0
L_802C48C4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C48C4
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C48C8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C48CC
  if (!crb(c,2)) { goto L_802C48F4; } // 802C48D0
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C48D4
  c->f[1]=c->f[31]; // 802C48D8
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 802C48DC
  c->r[4]=R32(c->r[29]+0x00000034u); // 802C48E0
  c->r[6]=R32(c->r[29]+0x00000030u); // 802C48E4
  c->r[3]=c->r[29]+0x0000002Cu; // 802C48E8
  c->r[4]=c->r[4]+c->r[0]; // 802C48EC
  c->lr=0x802C48F4u; f_802BFA4C(c); // 802C48F0
L_802C48F4:;
  c->r[30]=c->r[30]+0x00000002u; // 802C48F4
  c->r[31]=c->r[31]+0x00000001u; // 802C48F8
L_802C48FC:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C48FC
  cmpu(c,0,c->r[31],c->r[0]); // 802C4900
  if (crb(c,0)) { IRQCHK(c); goto L_802C48C4; } // 802C4904
L_802C4908:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C4908
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C490C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C4910
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C4914
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C4918
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C491C
  c->lr=c->r[0]; // 802C4920
  c->r[1]=c->r[1]+0x00000030u; // 802C4924
  return; // 802C4928
}

// Bind__Q34nw4r3g3d12AnmObjShpResFQ34nw4r3g3d6ResMdl
void f_802C492C(Ctx* __restrict c) {
  trace_call(0x802C492Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C492C
  c->r[0]=c->lr; // 802C4930
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C4934
  c->r[11]=c->r[1]+0x00000040u; // 802C4938
  c->lr=0x802C4940u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C493C
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802C4940
  c->r[28]=c->r[3]|c->r[3]; // 802C4944
  c->r[29]=c->r[4]|c->r[4]; // 802C4948
  c->r[31]=0u+0x00000000u; // 802C494C
  c->r[0]=R32(c->r[5]+0x00000010u); // 802C4950
  cmps(c,0,(int32_t)c->r[0],0); // 802C4954
  if (crb(c,2)) { goto L_802C4964; } // 802C4958
  c->r[3]=c->r[5]+c->r[0]; // 802C495C
  goto L_802C4968; // 802C4960
L_802C4964:;
  c->r[3]=0u+0x00000000u; // 802C4964
L_802C4968:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C4968
  if (crb(c,2)) { goto L_802C4978; } // 802C496C
  c->r[27]=R32(c->r[3]+0x00000004u); // 802C4970
  goto L_802C497C; // 802C4974
L_802C4978:;
  c->r[27]=0u+0x00000000u; // 802C4978
L_802C497C:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C497C
  c->r[30]=0u+0x00000000u; // 802C4980
  if (crb(c,2)) { goto L_802C4A20; } // 802C4984
  goto L_802C4A14; // 802C4988
L_802C498C:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 802C498C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C4990
  cmps(c,0,(int32_t)c->r[0],0); // 802C4994
  if (crb(c,2)) { goto L_802C49A4; } // 802C4998
  c->r[0]=c->r[3]+c->r[0]; // 802C499C
  goto L_802C49A8; // 802C49A0
L_802C49A4:;
  c->r[0]=0u+0x00000000u; // 802C49A4
L_802C49A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C49A8
  if (crb(c,2)) { goto L_802C49D4; } // 802C49AC
  c->r[3]=rotl(c->r[30],4)&0x000FFFF0u; // 802C49B0
  c->r[3]=c->r[0]+c->r[3]; // 802C49B4
  c->r[3]=R32(c->r[3]+0x00000024u); // 802C49B8
  cmps(c,0,(int32_t)c->r[3],0); // 802C49BC
  if (crb(c,2)) { goto L_802C49CC; } // 802C49C0
  c->r[5]=c->r[0]+c->r[3]; // 802C49C4
  goto L_802C49D8; // 802C49C8
L_802C49CC:;
  c->r[5]=0u+0x00000000u; // 802C49CC
  goto L_802C49D8; // 802C49D0
L_802C49D4:;
  c->r[5]=0u+0x00000000u; // 802C49D4
L_802C49D8:;
  c->r[0]=R32(c->r[5]+0x00000004u); // 802C49D8
  c->r[3]=c->r[29]|c->r[29]; // 802C49DC
  c->r[4]=c->r[1]+0x00000014u; // 802C49E0
  c->r[5]=c->r[0]+c->r[5]; // 802C49E4
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802C49E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C49EC
  c->lr=0x802C49F4u; f_802B8580(c); // 802C49F0
  cmps(c,0,(int32_t)c->r[3],0); // 802C49F4
  if (crb(c,2)) { goto L_802C4A10; } // 802C49F8
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C49FC
  c->r[31]=0u+0x00000001u; // 802C4A00
  c->r[3]=R32(c->r[28]+0x00000014u); // 802C4A04
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802C4A08
  W16(c->r[3]+c->r[0],c->r[30]); // 802C4A0C
L_802C4A10:;
  c->r[30]=c->r[30]+0x00000001u; // 802C4A10
L_802C4A14:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 802C4A14
  cmpu(c,0,c->r[0],c->r[27]); // 802C4A18
  if (crb(c,0)) { IRQCHK(c); goto L_802C498C; } // 802C4A1C
L_802C4A20:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 802C4A20
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C4A24
  c->r[24]=R16(c->r[3]+0x00000022u); // 802C4A28
  cmps(c,0,(int32_t)c->r[0],0); // 802C4A2C
  if (crb(c,2)) { goto L_802C4A3C; } // 802C4A30
  c->r[27]=c->r[3]+c->r[0]; // 802C4A34
  goto L_802C4A40; // 802C4A38
L_802C4A3C:;
  c->r[27]=0u+0x00000000u; // 802C4A3C
L_802C4A40:;
  c->r[25]=c->r[27]|c->r[27]; // 802C4A40
  c->r[23]=0u+0x00000000u; // 802C4A44
  c->r[26]=0u+0x00000000u; // 802C4A48
  goto L_802C4AAC; // 802C4A4C
L_802C4A50:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 802C4A50
  c->r[3]=c->r[29]|c->r[29]; // 802C4A54
  c->r[6]=R32(c->r[28]+0x00000030u); // 802C4A58
  c->r[4]=c->r[1]+0x00000010u; // 802C4A5C
  c->r[5]=c->r[27]+c->r[0]; // 802C4A60
  c->r[30]=c->r[5]+0xFFFFFFFCu; // 802C4A64
  c->r[22]=c->r[6]+c->r[26]; // 802C4A68
  W32(c->r[1]+0x00000010u,c->r[30]); // 802C4A6C
  c->lr=0x802C4A74u; f_802B8580(c); // 802C4A70
  W32(c->r[22]+0x00000000u,c->r[3]); // 802C4A74
  c->r[3]=c->r[29]|c->r[29]; // 802C4A78
  c->r[4]=c->r[1]+0x0000000Cu; // 802C4A7C
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 802C4A80
  c->lr=0x802C4A88u; f_802B86AC(c); // 802C4A84
  W32(c->r[22]+0x00000004u,c->r[3]); // 802C4A88
  c->r[3]=c->r[29]|c->r[29]; // 802C4A8C
  c->r[4]=c->r[1]+0x00000008u; // 802C4A90
  W32(c->r[1]+0x00000008u,c->r[30]); // 802C4A94
  c->lr=0x802C4A9Cu; f_802B87D8(c); // 802C4A98
  W32(c->r[22]+0x00000008u,c->r[3]); // 802C4A9C
  c->r[26]=c->r[26]+0x0000000Cu; // 802C4AA0
  c->r[25]=c->r[25]+0x00000004u; // 802C4AA4
  c->r[23]=c->r[23]+0x00000001u; // 802C4AA8
L_802C4AAC:;
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[24]); // 802C4AAC
  if (crb(c,0)) { IRQCHK(c); goto L_802C4A50; } // 802C4AB0
  c->r[3]=c->r[28]|c->r[28]; // 802C4AB4
  c->r[4]=0u+0x00000004u; // 802C4AB8
  c->r[5]=0u+0x00000001u; // 802C4ABC
  c->lr=0x802C4AC4u; f_802C63A4(c); // 802C4AC0
  c->r[11]=c->r[1]+0x00000040u; // 802C4AC4
  c->r[3]=c->r[31]|c->r[31]; // 802C4AC8
  c->lr=0x802C4AD0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C4ACC
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C4AD0
  c->lr=c->r[0]; // 802C4AD4
  c->r[1]=c->r[1]+0x00000040u; // 802C4AD8
  return; // 802C4ADC
}

// GetResult__Q34nw4r3g3d12AnmObjShpResFPQ34nw4r3g3d12ShpAnmResultUl
void f_802C4AE0(Ctx* __restrict c) {
  trace_call(0x802C4AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4AE0
  c->r[0]=c->lr; // 802C4AE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4AE8
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C4AEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C4AF0
  c->r[31]=c->r[4]|c->r[4]; // 802C4AF4
  c->r[6]=R32(c->r[3]+0x00000014u); // 802C4AF8
  c->r[5]=R16(c->r[6]+c->r[0]); // 802C4AFC
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 802C4B00
  if (crb(c,2)) { goto L_802C4B18; } // 802C4B04
  c->r[0]=0u+0x00000000u; // 802C4B08
  c->r[3]=c->r[31]|c->r[31]; // 802C4B0C
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C4B10
  goto L_802C4B44; // 802C4B14
L_802C4B18:;
  c->r[6]=R32(c->r[3]+0x00000034u); // 802C4B18
  cmps(c,0,(int32_t)c->r[6],0); // 802C4B1C
  if (crb(c,2)) { goto L_802C4B30; } // 802C4B20
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)536); // 802C4B24
  c->r[3]=c->r[6]+c->r[0]; // 802C4B28
  goto L_802C4B44; // 802C4B2C
L_802C4B30:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4B30
  c->r[6]=R32(c->r[3]+0x00000030u); // 802C4B34
  c->r[3]=c->r[3]+0x0000002Cu; // 802C4B38
  c->lr=0x802C4B40u; f_802BFA4C(c); // 802C4B3C
  c->r[3]=c->r[31]|c->r[31]; // 802C4B40
L_802C4B44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C4B48
  c->lr=c->r[0]; // 802C4B4C
  c->r[1]=c->r[1]+0x00000010u; // 802C4B50
  return; // 802C4B54
}

// fn_802C4B58
void f_802C4B58(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 802C4B58
  c->r[0]=c->r[5]+0x00000002u; // 802C4B5C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C4B60
  if (crb(c,2)) { goto L_802C4BA4; } // 802C4B64
  if (!crb(c,0)) { goto L_802C4B78; } // 802C4B68
  cmps(c,0,(int32_t)c->r[4],8); // 802C4B6C
  if (crb(c,2)) { goto L_802C4B88; } // 802C4B70
  return; // 802C4B74
L_802C4B78:;
  c->r[0]=c->r[5]+0x00000004u; // 802C4B78
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C4B7C
  if (!crb(c,0)) return; // 802C4B80
  goto L_802C4B98; // 802C4B84
L_802C4B88:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4B88
  c->r[12]=R32(c->r[12]+0x00000024u); // 802C4B8C
  c->ctr=c->r[12]; // 802C4B90
  if (true) { dispatch(c,c->ctr); return; } // 802C4B94
L_802C4B98:;
  c->r[0]=0u+0x00000000u; // 802C4B98
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C4B9C
  return; // 802C4BA0
L_802C4BA4:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C4BA4
  return; // 802C4BA8
}

// fn_802C4BAC
void f_802C4BAC(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C4BAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4BB0
  c->r[3]=c->r[3]+0xFFFFC500u; // 802C4BB4
  cmpu(c,0,c->r[0],c->r[3]); // 802C4BB8
  if (!crb(c,2)) { goto L_802C4BC8; } // 802C4BBC
  c->r[3]=0u+0x00000001u; // 802C4BC0
  return; // 802C4BC4
L_802C4BC8:;
  c->r[3]=0u+0x80440000u; // 802C4BC8
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4BCC
  c->r[3]=c->r[3]+0xFFFFC4F0u; // 802C4BD0
  cmpu(c,0,c->r[0],c->r[3]); // 802C4BD4
  if (!crb(c,2)) { goto L_802C4BE4; } // 802C4BD8
  c->r[3]=0u+0x00000001u; // 802C4BDC
  return; // 802C4BE0
L_802C4BE4:;
  c->r[3]=0u+0x80440000u; // 802C4BE4
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C4BE8
  cmpu(c,0,c->r[0],c->r[3]); // 802C4BEC
  if (!crb(c,2)) { goto L_802C4BFC; } // 802C4BF0
  c->r[3]=0u+0x00000001u; // 802C4BF4
  return; // 802C4BF8
L_802C4BFC:;
  c->r[3]=0u+0x80440000u; // 802C4BFC
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C4C00
  c->r[0]=c->r[3]-c->r[0]; // 802C4C04
  c->r[0]=cntlz(c->r[0]); // 802C4C08
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C4C0C
  return; // 802C4C10
}

// fn_802C4C14
void f_802C4C14(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C4C14
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4C18
  c->r[3]=c->r[3]+0xFFFFC4F0u; // 802C4C1C
  cmpu(c,0,c->r[0],c->r[3]); // 802C4C20
  if (!crb(c,2)) { goto L_802C4C30; } // 802C4C24
  c->r[3]=0u+0x00000001u; // 802C4C28
  return; // 802C4C2C
L_802C4C30:;
  c->r[3]=0u+0x80440000u; // 802C4C30
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C4C34
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C4C38
  cmpu(c,0,c->r[0],c->r[3]); // 802C4C3C
  if (!crb(c,2)) { goto L_802C4C4C; } // 802C4C40
  c->r[3]=0u+0x00000001u; // 802C4C44
  return; // 802C4C48
L_802C4C4C:;
  c->r[3]=0u+0x80440000u; // 802C4C4C
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C4C50
  c->r[0]=c->r[3]-c->r[0]; // 802C4C54
  c->r[0]=cntlz(c->r[0]); // 802C4C58
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C4C5C
  return; // 802C4C60
}

// fn_802C4C64
void f_802C4C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4C64
  c->r[0]=c->lr; // 802C4C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4C6C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4C70
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C4C74
  c->ctr=c->r[12]; // 802C4C78
  if (true) { c->lr=0x802C4C80u; dispatch(c,c->ctr); } // 802C4C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4C80
  c->r[3]=c->r[3]+0x00000004u; // 802C4C84
  c->lr=c->r[0]; // 802C4C88
  c->r[1]=c->r[1]+0x00000010u; // 802C4C8C
  return; // 802C4C90
}

// fn_802C4C94
void f_802C4C94(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C4C94
  c->r[3]=c->r[3]+0xFFFFC500u; // 802C4C98
  return; // 802C4C9C
}

// fn_802C4CA0
void f_802C4CA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4CA0
  c->r[0]=c->lr; // 802C4CA4
  cmps(c,0,(int32_t)c->r[3],0); // 802C4CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4CAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C4CB0
  c->r[31]=c->r[3]|c->r[3]; // 802C4CB4
  if (crb(c,2)) { goto L_802C4CCC; } // 802C4CB8
  if (crb(c,2)) { goto L_802C4CCC; } // 802C4CBC
  if (crb(c,2)) { goto L_802C4CCC; } // 802C4CC0
  c->r[4]=0u+0x00000000u; // 802C4CC4
  c->lr=0x802C4CCCu; f_802C624C(c); // 802C4CC8
L_802C4CCC:;
  c->r[3]=c->r[31]|c->r[31]; // 802C4CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C4CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4CD4
  c->lr=c->r[0]; // 802C4CD8
  c->r[1]=c->r[1]+0x00000010u; // 802C4CDC
  return; // 802C4CE0
}

// fn_802C4CE4
void f_802C4CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4CE4
  c->r[0]=c->lr; // 802C4CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C4CEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4CF0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C4CF4
  c->ctr=c->r[12]; // 802C4CF8
  if (true) { c->lr=0x802C4D00u; dispatch(c,c->ctr); } // 802C4CFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C4D00
  c->r[3]=c->r[3]+0x00000004u; // 802C4D04
  c->lr=c->r[0]; // 802C4D08
  c->r[1]=c->r[1]+0x00000010u; // 802C4D0C
  return; // 802C4D10
}

// fn_802C4D14
void f_802C4D14(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C4D14
  c->r[3]=c->r[3]+0xFFFFC4F0u; // 802C4D18
  return; // 802C4D1C
}

// fn_802C4D20
void f_802C4D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4D20
  c->r[0]=c->lr; // 802C4D24
  W32(c->r[1]+0x00000054u,c->r[0]); // 802C4D28
  c->r[0]=R32(c->r[4]+0x00000004u); // 802C4D2C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802C4D30
  c->r[31]=c->r[4]|c->r[4]; // 802C4D34
  W32(c->r[1]+0x00000048u,c->r[30]); // 802C4D38
  c->r[30]=c->r[3]|c->r[3]; // 802C4D3C
  W32(c->r[1]+0x00000044u,c->r[29]); // 802C4D40
  c->r[29]=rotl(c->r[0],0)&0x00000003u; // 802C4D44
  c->lr=0x802C4D4Cu; f_802DBFA4(c); // 802C4D48
  cmps(c,0,(int32_t)c->r[29],1); // 802C4D4C
  if (crb(c,2)) { goto L_802C4DEC; } // 802C4D50
  if (!crb(c,0)) { goto L_802C4D64; } // 802C4D54
  cmps(c,0,(int32_t)c->r[29],0); // 802C4D58
  if (!crb(c,0)) { goto L_802C4D70; } // 802C4D5C
  goto L_802C4F48; // 802C4D60
L_802C4D64:;
  cmps(c,0,(int32_t)c->r[29],3); // 802C4D64
  if (!crb(c,0)) { goto L_802C4F48; } // 802C4D68
  goto L_802C4EA4; // 802C4D6C
L_802C4D70:;
  c->r[7]=R8(c->r[31]+0x00000020u); // 802C4D70
  c->r[4]=c->r[1]+0x00000010u; // 802C4D74
  c->r[6]=R8(c->r[31]+0x00000021u); // 802C4D78
  c->r[3]=c->r[30]|c->r[30]; // 802C4D7C
  c->r[5]=R8(c->r[31]+0x00000022u); // 802C4D80
  c->r[0]=R8(c->r[31]+0x00000023u); // 802C4D84
  W8(c->r[1]+0x00000010u,c->r[7]); // 802C4D88
  W8(c->r[1]+0x00000011u,c->r[6]); // 802C4D8C
  W8(c->r[1]+0x00000012u,c->r[5]); // 802C4D90
  W8(c->r[1]+0x00000013u,c->r[0]); // 802C4D94
  c->lr=0x802C4D9Cu; f_802DBFB8(c); // 802C4D98
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4D9C
  c->r[3]=c->r[30]|c->r[30]; // 802C4DA0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4DA4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C4DA8
  c->lr=0x802C4DB0u; f_802DC000(c); // 802C4DAC
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4DB0
  c->r[3]=c->r[30]|c->r[30]; // 802C4DB4
  c->r[4]=0u+0x00000000u; // 802C4DB8
  c->lr=0x802C4DC0u; f_802DC07C(c); // 802C4DBC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4DC0
  c->r[3]=c->r[30]|c->r[30]; // 802C4DC4
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4DC8
  c->r[4]=R32(c->r[31]+0x00000024u); // 802C4DCC
  c->lr=0x802C4DD4u; f_802DC0FC(c); // 802C4DD0
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4DD4
  c->r[3]=c->r[30]|c->r[30]; // 802C4DD8
  c->f[2]=c->f[1]; // 802C4DDC
  c->f[3]=c->f[1]; // 802C4DE0
  c->lr=0x802C4DE8u; f_802DC03C(c); // 802C4DE4
  goto L_802C4F48; // 802C4DE8
L_802C4DEC:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 802C4DEC
  c->r[4]=c->r[1]+0x0000000Cu; // 802C4DF0
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 802C4DF4
  c->r[3]=c->r[30]|c->r[30]; // 802C4DF8
  c->r[7]=R8(c->r[31]+0x00000020u); // 802C4DFC
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802C4E00
  c->r[6]=R8(c->r[31]+0x00000021u); // 802C4E04
  c->r[5]=R8(c->r[31]+0x00000022u); // 802C4E08
  c->r[0]=R8(c->r[31]+0x00000023u); // 802C4E0C
  {double t0=c->f[2], t1=c->ps1[2]; c->f[4]=t0; c->ps1[4]=t1;} // 802C4E10
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 802C4E14
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 802C4E18
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,2,ea,0,0);} // 802C4E1C
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802C4E20
  {uint32_t ea=c->r[2]+0xFFFFABECu; c->f[3]=c->ps1[3]=RF32(ea);} // 802C4E24
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 802C4E28
  {double t0=S(c->f[4]*c->f[3]), t1=S(c->ps1[4]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 802C4E2C
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,2,ea,1,0);} // 802C4E30
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 802C4E34
  {double t0=S(c->f[2]*c->f[3]), t1=S(c->ps1[2]*c->f[3]); c->f[0]=t0; c->ps1[0]=t1;} // 802C4E38
  W8(c->r[1]+0x0000000Du,c->r[6]); // 802C4E3C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 802C4E40
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 802C4E44
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 802C4E48
  c->lr=0x802C4E50u; f_802DBFB8(c); // 802C4E4C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4E50
  c->r[3]=c->r[30]|c->r[30]; // 802C4E54
  {uint32_t ea=c->r[1]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4E58
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C4E5C
  c->lr=0x802C4E64u; f_802DC000(c); // 802C4E60
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4E64
  c->r[3]=c->r[30]|c->r[30]; // 802C4E68
  {uint32_t ea=c->r[2]+0xFFFFABF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4E6C
  c->f[3]=c->f[2]; // 802C4E70
  c->lr=0x802C4E78u; f_802DC0BC(c); // 802C4E74
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4E78
  c->r[3]=c->r[30]|c->r[30]; // 802C4E7C
  {uint32_t ea=c->r[2]+0xFFFFABF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4E80
  c->f[3]=c->f[2]; // 802C4E84
  c->lr=0x802C4E8Cu; f_802DC13C(c); // 802C4E88
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4E8C
  c->r[3]=c->r[30]|c->r[30]; // 802C4E90
  c->f[2]=c->f[1]; // 802C4E94
  c->f[3]=c->f[1]; // 802C4E98
  c->lr=0x802C4EA0u; f_802DC03C(c); // 802C4E9C
  goto L_802C4F48; // 802C4EA0
L_802C4EA4:;
  {uint32_t ea=c->r[31]+0x00000014u; psq_load(c,0,ea,0,0);} // 802C4EA4
  c->r[3]=c->r[1]+0x00000014u; // 802C4EA8
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,1,ea,0,0);} // 802C4EAC
  c->r[4]=c->r[3]|c->r[3]; // 802C4EB0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802C4EB4
  {uint32_t ea=c->r[31]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 802C4EB8
  {uint32_t ea=c->r[31]+0x00000010u; psq_load(c,1,ea,1,0);} // 802C4EBC
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,2,ea,0,0);} // 802C4EC0
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802C4EC4
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,2,ea,1,0);} // 802C4EC8
  c->lr=0x802C4ED0u; f_80354444(c); // 802C4ECC
  c->r[7]=R8(c->r[31]+0x00000020u); // 802C4ED0
  c->r[4]=c->r[1]+0x00000008u; // 802C4ED4
  c->r[6]=R8(c->r[31]+0x00000021u); // 802C4ED8
  c->r[3]=c->r[30]|c->r[30]; // 802C4EDC
  c->r[5]=R8(c->r[31]+0x00000022u); // 802C4EE0
  c->r[0]=R8(c->r[31]+0x00000023u); // 802C4EE4
  W8(c->r[1]+0x00000008u,c->r[7]); // 802C4EE8
  W8(c->r[1]+0x00000009u,c->r[6]); // 802C4EEC
  W8(c->r[1]+0x0000000Au,c->r[5]); // 802C4EF0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802C4EF4
  c->lr=0x802C4EFCu; f_802DBFB8(c); // 802C4EF8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4EFC
  c->r[3]=c->r[30]|c->r[30]; // 802C4F00
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4F04
  {uint32_t ea=c->r[31]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C4F08
  c->lr=0x802C4F10u; f_802DC000(c); // 802C4F0C
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4F10
  c->r[3]=c->r[30]|c->r[30]; // 802C4F14
  c->r[4]=R32(c->r[31]+0x00000030u); // 802C4F18
  c->lr=0x802C4F20u; f_802DC07C(c); // 802C4F1C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4F20
  c->r[3]=c->r[30]|c->r[30]; // 802C4F24
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4F28
  c->r[4]=R32(c->r[31]+0x00000024u); // 802C4F2C
  c->lr=0x802C4F34u; f_802DC0FC(c); // 802C4F30
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C4F34
  c->r[3]=c->r[30]|c->r[30]; // 802C4F38
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C4F3C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802C4F40
  c->lr=0x802C4F48u; f_802DC03C(c); // 802C4F44
L_802C4F48:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 802C4F48
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802C4F4C
  if (!crb(c,2)) { goto L_802C4F60; } // 802C4F50
  c->r[0]=R32(c->r[30]+0x00000000u); // 802C4F54
  c->r[0]=c->r[0]|0x00000010u; // 802C4F58
  W32(c->r[30]+0x00000000u,c->r[0]); // 802C4F5C
L_802C4F60:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 802C4F60
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C4F64
  if (!crb(c,2)) { goto L_802C4F78; } // 802C4F68
  c->r[0]=R32(c->r[30]+0x00000000u); // 802C4F6C
  c->r[0]=c->r[0]|0x00000020u; // 802C4F70
  W32(c->r[30]+0x00000000u,c->r[0]); // 802C4F74
L_802C4F78:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 802C4F78
  c->r[0]=c->r[0]|0x00000004u; // 802C4F7C
  W32(c->r[30]+0x00000000u,c->r[0]); // 802C4F80
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 802C4F84
  c->r[30]=R32(c->r[1]+0x00000048u); // 802C4F88
  c->r[29]=R32(c->r[1]+0x00000044u); // 802C4F8C
  c->r[0]=R32(c->r[1]+0x00000054u); // 802C4F90
  c->lr=c->r[0]; // 802C4F94
  c->r[1]=c->r[1]+0x00000050u; // 802C4F98
  return; // 802C4F9C
}

// fn_802C4FA0
void f_802C4FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C4FA0
  c->r[0]=c->lr; // 802C4FA4
  W32(c->r[1]+0x00000064u,c->r[0]); // 802C4FA8
  c->r[11]=c->r[1]+0x00000060u; // 802C4FAC
  c->lr=0x802C4FB4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C4FB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C4FB4
  c->r[28]=c->r[3]|c->r[3]; // 802C4FB8
  c->r[29]=c->r[4]|c->r[4]; // 802C4FBC
  c->r[12]=R32(c->r[12]+0x00000050u); // 802C4FC0
  c->ctr=c->r[12]; // 802C4FC4
  if (true) { c->lr=0x802C4FCCu; dispatch(c,c->ctr); } // 802C4FC8
  W32(c->r[1]+0x00000024u,c->r[3]); // 802C4FCC
  c->r[3]=c->r[28]|c->r[28]; // 802C4FD0
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C4FD4
  c->r[12]=R32(c->r[12]+0x00000054u); // 802C4FD8
  c->ctr=c->r[12]; // 802C4FDC
  if (true) { c->lr=0x802C4FE4u; dispatch(c,c->ctr); } // 802C4FE0
  W32(c->r[1]+0x00000020u,c->r[3]); // 802C4FE4
  c->r[3]=c->r[28]|c->r[28]; // 802C4FE8
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C4FEC
  c->r[12]=R32(c->r[12]+0x00000058u); // 802C4FF0
  c->ctr=c->r[12]; // 802C4FF4
  if (true) { c->lr=0x802C4FFCu; dispatch(c,c->ctr); } // 802C4FF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C4FFC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802C5000
  cmps(c,0,(int32_t)c->r[0],0); // 802C5004
  if (crb(c,2)) { goto L_802C5078; } // 802C5008
  c->r[4]=R16(c->r[29]+0x00000002u); // 802C500C
  c->r[3]=c->r[1]+0x00000024u; // 802C5010
  cmpu(c,0,c->r[4],c->r[0]); // 802C5014
  W32(c->r[1]+0x00000018u,c->r[4]); // 802C5018
  if (!crb(c,0)) { goto L_802C5024; } // 802C501C
  c->r[3]=c->r[1]+0x00000018u; // 802C5020
L_802C5024:;
  c->r[27]=R32(c->r[3]+0x00000000u); // 802C5024
  c->r[30]=0u+0x00000000u; // 802C5028
  goto L_802C5070; // 802C502C
L_802C5030:;
  c->r[4]=c->r[29]|c->r[29]; // 802C5030
  c->r[5]=c->r[30]|c->r[30]; // 802C5034
  c->r[3]=c->r[1]+0x00000030u; // 802C5038
  c->lr=0x802C5040u; f_802C52B4(c); // 802C503C
  c->r[4]=R32(c->r[1]+0x00000030u); // 802C5040
  c->r[3]=c->r[28]|c->r[28]; // 802C5044
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C5048
  c->r[5]=c->r[30]|c->r[30]; // 802C504C
  W32(c->r[1]+0x00000028u,c->r[4]); // 802C5050
  c->r[4]=c->r[1]+0x00000028u; // 802C5054
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802C5058
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C505C
  c->r[12]=R32(c->r[12]+0x00000064u); // 802C5060
  c->ctr=c->r[12]; // 802C5064
  if (true) { c->lr=0x802C506Cu; dispatch(c,c->ctr); } // 802C5068
  c->r[30]=c->r[30]+0x00000001u; // 802C506C
L_802C5070:;
  cmpu(c,0,c->r[30],c->r[27]); // 802C5070
  if (crb(c,0)) { IRQCHK(c); goto L_802C5030; } // 802C5074
L_802C5078:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 802C5078
  cmps(c,0,(int32_t)c->r[0],0); // 802C507C
  if (crb(c,2)) { goto L_802C50E0; } // 802C5080
  c->r[4]=R16(c->r[29]+0x00000000u); // 802C5084
  c->r[3]=c->r[1]+0x00000020u; // 802C5088
  c->r[27]=R32(c->r[29]+0x00000008u); // 802C508C
  cmpu(c,0,c->r[4],c->r[0]); // 802C5090
  W32(c->r[1]+0x00000014u,c->r[4]); // 802C5094
  if (!crb(c,0)) { goto L_802C50A0; } // 802C5098
  c->r[3]=c->r[1]+0x00000014u; // 802C509C
L_802C50A0:;
  c->r[30]=R32(c->r[3]+0x00000000u); // 802C50A0
  c->r[31]=0u+0x00000000u; // 802C50A4
  goto L_802C50D8; // 802C50A8
L_802C50AC:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C50AC
  c->r[4]=c->r[28]|c->r[28]; // 802C50B0
  c->r[5]=c->r[31]|c->r[31]; // 802C50B4
  c->r[3]=c->r[1]+0x00000008u; // 802C50B8
  c->r[12]=R32(c->r[12]+0x00000068u); // 802C50BC
  c->ctr=c->r[12]; // 802C50C0
  if (true) { c->lr=0x802C50C8u; dispatch(c,c->ctr); } // 802C50C4
  c->r[0]=R32(c->r[1]+0x00000008u); // 802C50C8
  c->r[31]=c->r[31]+0x00000001u; // 802C50CC
  W32(c->r[27]+0x00000000u,c->r[0]); // 802C50D0
  c->r[27]=c->r[27]+0x00000004u; // 802C50D4
L_802C50D8:;
  cmpu(c,0,c->r[31],c->r[30]); // 802C50D8
  if (crb(c,0)) { IRQCHK(c); goto L_802C50AC; } // 802C50DC
L_802C50E0:;
  c->r[27]=R32(c->r[1]+0x0000001Cu); // 802C50E0
  cmps(c,0,(int32_t)c->r[27],0); // 802C50E4
  if (crb(c,2)) { goto L_802C529C; } // 802C50E8
  c->r[31]=R32(c->r[29]+0x00000004u); // 802C50EC
  c->r[3]=c->r[28]|c->r[28]; // 802C50F0
  c->r[29]=R16(c->r[29]+0x00000000u); // 802C50F4
  W32(c->r[1]+0x00000010u,c->r[29]); // 802C50F8
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C50FC
  c->r[12]=R32(c->r[12]+0x00000044u); // 802C5100
  c->ctr=c->r[12]; // 802C5104
  if (true) { c->lr=0x802C510Cu; dispatch(c,c->ctr); } // 802C5108
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 802C510C
  c->r[0]=c->r[27]+c->r[3]; // 802C5110
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802C5114
  c->r[3]=c->r[1]+0x0000001Cu; // 802C5118
  cmpu(c,0,c->r[29],c->r[4]); // 802C511C
  if (!crb(c,0)) { goto L_802C5128; } // 802C5120
  c->r[3]=c->r[1]+0x00000010u; // 802C5124
L_802C5128:;
  cmpu(c,0,c->r[29],c->r[0]); // 802C5128
  c->r[30]=R32(c->r[3]+0x00000000u); // 802C512C
  c->r[3]=c->r[1]+0x0000000Cu; // 802C5130
  if (!crb(c,0)) { goto L_802C513C; } // 802C5134
  c->r[3]=c->r[1]+0x00000010u; // 802C5138
L_802C513C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802C513C
  c->r[29]=R32(c->r[3]+0x00000000u); // 802C5140
  c->r[5]=0u+0x00000000u; // 802C5144
  if (crb(c,2)) { goto L_802C5208; } // 802C5148
  cmpu(c,0,c->r[30],0x00000008u); // 802C514C
  c->r[3]=c->r[30]+0xFFFFFFF8u; // 802C5150
  if (!crb(c,1)) { goto L_802C51DC; } // 802C5154
  c->r[0]=c->r[3]+0x00000007u; // 802C5158
  c->r[4]=c->r[31]|c->r[31]; // 802C515C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802C5160
  c->ctr=c->r[0]; // 802C5164
  cmpu(c,0,c->r[3],0x00000000u); // 802C5168
  if (!crb(c,1)) { goto L_802C51DC; } // 802C516C
L_802C5170:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C5170
  c->r[5]=c->r[5]+0x00000008u; // 802C5174
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C5178
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C517C
  c->r[0]=R32(c->r[4]+0x00000044u); // 802C5180
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C5184
  W32(c->r[4]+0x00000044u,c->r[0]); // 802C5188
  c->r[0]=R32(c->r[4]+0x00000088u); // 802C518C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C5190
  W32(c->r[4]+0x00000088u,c->r[0]); // 802C5194
  c->r[0]=R32(c->r[4]+0x000000CCu); // 802C5198
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C519C
  W32(c->r[4]+0x000000CCu,c->r[0]); // 802C51A0
  c->r[0]=R32(c->r[4]+0x00000110u); // 802C51A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C51A8
  W32(c->r[4]+0x00000110u,c->r[0]); // 802C51AC
  c->r[0]=R32(c->r[4]+0x00000154u); // 802C51B0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C51B4
  W32(c->r[4]+0x00000154u,c->r[0]); // 802C51B8
  c->r[0]=R32(c->r[4]+0x00000198u); // 802C51BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C51C0
  W32(c->r[4]+0x00000198u,c->r[0]); // 802C51C4
  c->r[0]=R32(c->r[4]+0x000001DCu); // 802C51C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C51CC
  W32(c->r[4]+0x000001DCu,c->r[0]); // 802C51D0
  c->r[4]=c->r[4]+0x00000220u; // 802C51D4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C5170; } // 802C51D8
L_802C51DC:;
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 802C51DC
  c->r[0]=c->r[30]-c->r[5]; // 802C51E0
  c->r[3]=c->r[31]+c->r[3]; // 802C51E4
  c->ctr=c->r[0]; // 802C51E8
  cmpu(c,0,c->r[5],c->r[30]); // 802C51EC
  if (!crb(c,0)) { goto L_802C5208; } // 802C51F0
L_802C51F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C51F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C51F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 802C51FC
  c->r[3]=c->r[3]+0x00000044u; // 802C5200
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C51F4; } // 802C5204
L_802C5208:;
  c->r[27]=c->r[31]|c->r[31]; // 802C5208
  c->r[26]=0u+0x00000000u; // 802C520C
  goto L_802C5294; // 802C5210
L_802C5214:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802C5214
  c->r[25]=0u+0x00000000u; // 802C5218
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C521C
  if (!crb(c,2)) { goto L_802C528C; } // 802C5220
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C5224
  c->r[3]=c->r[28]|c->r[28]; // 802C5228
  c->r[4]=c->r[26]|c->r[26]; // 802C522C
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 802C5230
  c->ctr=c->r[12]; // 802C5234
  if (true) { c->lr=0x802C523Cu; dispatch(c,c->ctr); } // 802C5238
  cmps(c,0,(int32_t)c->r[3],0); // 802C523C
  if (crb(c,2)) { goto L_802C526C; } // 802C5240
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C5244
  c->r[3]=c->r[28]|c->r[28]; // 802C5248
  c->r[4]=c->r[26]|c->r[26]; // 802C524C
  c->r[12]=R32(c->r[12]+0x00000078u); // 802C5250
  c->ctr=c->r[12]; // 802C5254
  if (true) { c->lr=0x802C525Cu; dispatch(c,c->ctr); } // 802C5258
  cmpu(c,0,c->r[3],c->r[29]); // 802C525C
  if (!crb(c,0)) { goto L_802C526C; } // 802C5260
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 802C5264
  c->r[25]=c->r[31]+c->r[0]; // 802C5268
L_802C526C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C526C
  c->r[3]=c->r[28]|c->r[28]; // 802C5270
  c->r[4]=c->r[27]|c->r[27]; // 802C5274
  c->r[5]=c->r[25]|c->r[25]; // 802C5278
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 802C527C
  c->r[6]=c->r[26]|c->r[26]; // 802C5280
  c->ctr=c->r[12]; // 802C5284
  if (true) { c->lr=0x802C528Cu; dispatch(c,c->ctr); } // 802C5288
L_802C528C:;
  c->r[27]=c->r[27]+0x00000044u; // 802C528C
  c->r[26]=c->r[26]+0x00000001u; // 802C5290
L_802C5294:;
  cmpu(c,0,c->r[26],c->r[30]); // 802C5294
  if (crb(c,0)) { IRQCHK(c); goto L_802C5214; } // 802C5298
L_802C529C:;
  c->r[11]=c->r[1]+0x00000060u; // 802C529C
  c->lr=0x802C52A4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C52A0
  c->r[0]=R32(c->r[1]+0x00000064u); // 802C52A4
  c->lr=c->r[0]; // 802C52A8
  c->r[1]=c->r[1]+0x00000060u; // 802C52AC
  return; // 802C52B0
}

// fn_802C52B4
void f_802C52B4(Ctx* __restrict c) {
  c->r[0]=R16(c->r[4]+0x00000002u); // 802C52B4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 802C52B8
  if (!crb(c,0)) { goto L_802C52E0; } // 802C52BC
  cmps(c,0,(int32_t)c->r[5],0); // 802C52C0
  if (crb(c,0)) { goto L_802C52E0; } // 802C52C4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 802C52C8
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 802C52CC
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C52D0
  c->r[0]=c->r[5]+c->r[0]; // 802C52D4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C52D8
  return; // 802C52DC
L_802C52E0:;
  c->r[0]=0u+0x00000000u; // 802C52E0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C52E4
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C52E8
  return; // 802C52EC
}

// fn_802C52F0
void f_802C52F0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C52F0
  return; // 802C52F4
}

// fn_802C52F8
void f_802C52F8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C52F8
  return; // 802C52FC
}

// fn_802C5300
void f_802C5300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5300
  c->r[0]=c->lr; // 802C5304
  cmps(c,0,(int32_t)c->r[3],0); // 802C5308
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C530C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C5310
  c->r[31]=c->r[3]|c->r[3]; // 802C5314
  if (crb(c,2)) { goto L_802C5324; } // 802C5318
  c->r[4]=0u+0x00000000u; // 802C531C
  c->lr=0x802C5324u; f_802C624C(c); // 802C5320
L_802C5324:;
  c->r[3]=c->r[31]|c->r[31]; // 802C5324
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C5328
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C532C
  c->lr=c->r[0]; // 802C5330
  c->r[1]=c->r[1]+0x00000010u; // 802C5334
  return; // 802C5338
}

// fn_802C533C
void f_802C533C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 802C533C
  f_802BEF30(c); return; // 802C5340
}

// fn_802C5344
void f_802C5344(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 802C5344
  f_802BF0E4(c); return; // 802C5348
}

// fn_802C534C
void f_802C534C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 802C534C
  f_802BF298(c); return; // 802C5350
}

// fn_802C5354
void f_802C5354(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C5354
  c->r[3]=R16(c->r[3]+0x00000032u); // 802C5358
  return; // 802C535C
}

// fn_802C5360
void f_802C5360(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 802C5360
  f_802BF3C4(c); return; // 802C5364
}

// fn_802C5368
void f_802C5368(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000020u; // 802C5368
  f_802BF59C(c); return; // 802C536C
}

// fn_802C5370
void f_802C5370(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C5370
  c->r[3]=R16(c->r[3]+0x00000038u); // 802C5374
  return; // 802C5378
}

// fn_802C537C
void f_802C537C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C537C
  c->r[3]=R16(c->r[3]+0x0000003Au); // 802C5380
  return; // 802C5384
}

// fn_802C5388
void f_802C5388(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C5388
  c->r[3]=R16(c->r[3]+0x0000003Cu); // 802C538C
  return; // 802C5390
}

// fn_802C5394
void f_802C5394(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C5394
  c->r[3]=R16(c->r[3]+0x0000003Eu); // 802C5398
  return; // 802C539C
}

// fn_802C53A0
void f_802C53A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 802C53A0
  c->r[3]=R16(c->r[3]+0x00000040u); // 802C53A4
  return; // 802C53A8
}

// fn_802C53AC
void f_802C53AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C53AC
  c->r[0]=c->lr; // 802C53B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C53B4
  c->r[11]=c->r[1]+0x00000040u; // 802C53B8
  c->lr=0x802C53C0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C53BC
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C53C0
  c->r[29]=c->r[3]|c->r[3]; // 802C53C4
  c->r[30]=c->r[4]|c->r[4]; // 802C53C8
  c->r[31]=c->r[5]|c->r[5]; // 802C53CC
  cmps(c,0,(int32_t)c->r[0],0); // 802C53D0
  c->r[22]=c->r[6]|c->r[6]; // 802C53D4
  if (!crb(c,2)) { goto L_802C53E4; } // 802C53D8
  c->r[3]=0u+0x00000000u; // 802C53DC
  goto L_802C5528; // 802C53E0
L_802C53E4:;
  cmps(c,0,(int32_t)c->r[6],0); // 802C53E4
  if (crb(c,2)) { goto L_802C53FC; } // 802C53E8
  c->r[3]=c->r[31]|c->r[31]; // 802C53EC
  c->lr=0x802C53F4u; f_802BF0E4(c); // 802C53F0
  c->r[26]=c->r[3]|c->r[3]; // 802C53F4
  goto L_802C5400; // 802C53F8
L_802C53FC:;
  c->r[26]=0u+0x00000000u; // 802C53FC
L_802C5400:;
  cmps(c,0,(int32_t)c->r[22],0); // 802C5400
  if (crb(c,2)) { goto L_802C5418; } // 802C5404
  c->r[3]=c->r[31]|c->r[31]; // 802C5408
  c->lr=0x802C5410u; f_802BF298(c); // 802C540C
  c->r[27]=c->r[3]|c->r[3]; // 802C5410
  goto L_802C541C; // 802C5414
L_802C5418:;
  c->r[27]=0u+0x00000000u; // 802C5418
L_802C541C:;
  cmps(c,0,(int32_t)c->r[22],0); // 802C541C
  if (crb(c,2)) { goto L_802C5434; } // 802C5420
  c->r[3]=c->r[31]|c->r[31]; // 802C5424
  c->lr=0x802C542Cu; f_802BF3C4(c); // 802C5428
  c->r[28]=c->r[3]|c->r[3]; // 802C542C
  goto L_802C5438; // 802C5430
L_802C5434:;
  c->r[28]=0u+0x00000000u; // 802C5434
L_802C5438:;
  cmps(c,0,(int32_t)c->r[22],0); // 802C5438
  if (crb(c,2)) { goto L_802C544C; } // 802C543C
  c->r[3]=c->r[31]|c->r[31]; // 802C5440
  c->lr=0x802C5448u; f_802BF59C(c); // 802C5444
  goto L_802C5450; // 802C5448
L_802C544C:;
  c->r[3]=0u+0x00000000u; // 802C544C
L_802C5450:;
  c->r[25]=rotl(c->r[26],3)&0xFFFFFFF8u; // 802C5450
  c->r[24]=rotl(c->r[27],6)&0xFFFFFFC0u; // 802C5454
  c->r[0]=c->r[25]+0x0000003Bu; // 802C5458
  c->r[23]=rotl(c->r[28],4)&0xFFFFFFF0u; // 802C545C
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C5460
  cmps(c,0,(int32_t)c->r[30],0); // 802C5464
  c->r[4]=c->r[26]+c->r[24]; // 802C5468
  c->r[0]=c->r[4]+0x00000003u; // 802C546C
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C5470
  c->r[4]=c->r[27]+c->r[23]; // 802C5474
  c->r[0]=c->r[4]+0x00000003u; // 802C5478
  c->r[22]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 802C547C
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C5480
  c->r[3]=c->r[28]+c->r[22]; // 802C5484
  c->r[0]=c->r[3]+0x00000003u; // 802C5488
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C548C
  if (crb(c,2)) { goto L_802C5498; } // 802C5490
  W32(c->r[30]+0x00000000u,c->r[4]); // 802C5494
L_802C5498:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C5498
  if (!crb(c,2)) { goto L_802C54A8; } // 802C549C
  c->r[3]=0u+0x00000000u; // 802C54A0
  goto L_802C5528; // 802C54A4
L_802C54A8:;
  c->r[3]=c->r[29]|c->r[29]; // 802C54A8
  c->lr=0x802C54B0u; f_8034FF40(c); // 802C54AC
  cmps(c,0,(int32_t)c->r[3],0); // 802C54B0
  if (!crb(c,2)) { goto L_802C54C0; } // 802C54B4
  c->r[3]=0u+0x00000000u; // 802C54B8
  goto L_802C5528; // 802C54BC
L_802C54C0:;
  if (crb(c,2)) { goto L_802C5528; } // 802C54C0
  cmps(c,0,(int32_t)c->r[22],0); // 802C54C4
  if (crb(c,2)) { goto L_802C54D4; } // 802C54C8
  c->r[9]=c->r[3]+c->r[28]; // 802C54CC
  goto L_802C54D8; // 802C54D0
L_802C54D4:;
  c->r[9]=0u+0x00000000u; // 802C54D4
L_802C54D8:;
  cmps(c,0,(int32_t)c->r[23],0); // 802C54D8
  if (crb(c,2)) { goto L_802C54E8; } // 802C54DC
  c->r[8]=c->r[3]+c->r[27]; // 802C54E0
  goto L_802C54EC; // 802C54E4
L_802C54E8:;
  c->r[8]=0u+0x00000000u; // 802C54E8
L_802C54EC:;
  cmps(c,0,(int32_t)c->r[24],0); // 802C54EC
  if (crb(c,2)) { goto L_802C54FC; } // 802C54F0
  c->r[7]=c->r[3]+c->r[26]; // 802C54F4
  goto L_802C5500; // 802C54F8
L_802C54FC:;
  c->r[7]=0u+0x00000000u; // 802C54FC
L_802C5500:;
  cmps(c,0,(int32_t)c->r[25],0); // 802C5500
  if (crb(c,2)) { goto L_802C5510; } // 802C5504
  c->r[6]=c->r[3]+0x00000038u; // 802C5508
  goto L_802C5514; // 802C550C
L_802C5510:;
  c->r[6]=0u+0x00000000u; // 802C5510
L_802C5514:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5514
  c->r[4]=c->r[29]|c->r[29]; // 802C5518
  c->r[5]=c->r[1]+0x00000008u; // 802C551C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C5520
  c->lr=0x802C5528u; f_802C5540(c); // 802C5524
L_802C5528:;
  c->r[11]=c->r[1]+0x00000040u; // 802C5528
  c->lr=0x802C5530u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C552C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C5530
  c->lr=c->r[0]; // 802C5534
  c->r[1]=c->r[1]+0x00000040u; // 802C5538
  return; // 802C553C
}

// fn_802C5540
void f_802C5540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5540
  c->r[0]=c->lr; // 802C5544
  c->r[12]=0u+0x80480000u; // 802C5548
  c->r[10]=0u+0x80480000u; // 802C554C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C5550
  c->r[0]=0u+0x43300000u; // 802C5554
  c->r[12]=c->r[12]+0x00006F48u; // 802C5558
  {uint32_t ea=c->r[2]+0xFFFFABF8u; c->f[3]=RF64(ea);} // 802C555C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C5560
  c->r[31]=0u+0x00000000u; // 802C5564
  c->r[11]=c->r[13]+0xFFFF8008u; // 802C5568
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C556C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C5570
  cmps(c,0,(int32_t)c->r[6],0); // 802C5574
  c->r[30]=R32(c->r[5]+0x00000000u); // 802C5578
  c->r[10]=c->r[10]+0x00006EB8u; // 802C557C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C5580
  c->r[29]=c->r[3]|c->r[3]; // 802C5584
  {uint32_t ea=c->r[2]+0xFFFFABF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5588
  W32(c->r[3]+0x00000004u,c->r[31]); // 802C558C
  W32(c->r[3]+0x00000008u,c->r[4]); // 802C5590
  W32(c->r[3]+0x00000000u,c->r[12]); // 802C5594
  c->r[4]=R16(c->r[30]+0x00000030u); // 802C5598
  c->r[12]=R32(c->r[30]+0x00000034u); // 802C559C
  c->r[4]=c->r[4]^0x80000000u; // 802C55A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C55A4
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 802C55A8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802C55AC
  c->r[4]=R32(c->r[11]+c->r[0]); // 802C55B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802C55B4
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C55B8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802C55BC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 802C55C0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 802C55C4
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 802C55C8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802C55CC
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 802C55D0
  W32(c->r[3]+0x00000000u,c->r[10]); // 802C55D4
  W32(c->r[3]+0x00000020u,c->r[0]); // 802C55D8
  W32(c->r[3]+0x00000024u,c->r[31]); // 802C55DC
  W32(c->r[3]+0x00000028u,c->r[6]); // 802C55E0
  W32(c->r[3]+0x0000002Cu,c->r[7]); // 802C55E4
  W32(c->r[3]+0x00000030u,c->r[8]); // 802C55E8
  W32(c->r[3]+0x00000034u,c->r[9]); // 802C55EC
  if (!crb(c,2)) { goto L_802C560C; } // 802C55F0
  cmps(c,0,(int32_t)c->r[7],0); // 802C55F4
  if (!crb(c,2)) { goto L_802C560C; } // 802C55F8
  cmps(c,0,(int32_t)c->r[8],0); // 802C55FC
  if (!crb(c,2)) { goto L_802C560C; } // 802C5600
  cmps(c,0,(int32_t)c->r[9],0); // 802C5604
  if (crb(c,2)) { goto L_802C5618; } // 802C5608
L_802C560C:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 802C560C
  c->r[0]=c->r[0]|0x00000001u; // 802C5610
  W32(c->r[3]+0x00000024u,c->r[0]); // 802C5614
L_802C5618:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 802C5618
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C561C
  if (crb(c,2)) { goto L_802C562C; } // 802C5620
  c->r[3]=c->r[29]|c->r[29]; // 802C5624
  c->lr=0x802C562Cu; f_802C5FD8(c); // 802C5628
L_802C562C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C562C
  c->r[3]=c->r[29]|c->r[29]; // 802C5630
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C5634
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C5638
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C563C
  c->lr=c->r[0]; // 802C5640
  c->r[1]=c->r[1]+0x00000020u; // 802C5644
  return; // 802C5648
}

// fn_802C564C
void f_802C564C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C564C
  c->r[0]=c->lr; // 802C5650
  cmps(c,0,(int32_t)c->r[3],0); // 802C5654
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C5658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C565C
  c->r[31]=c->r[3]|c->r[3]; // 802C5660
  if (crb(c,2)) { goto L_802C5674; } // 802C5664
  if (crb(c,2)) { goto L_802C5674; } // 802C5668
  c->r[4]=0u+0x00000000u; // 802C566C
  c->lr=0x802C5674u; f_802C624C(c); // 802C5670
L_802C5674:;
  c->r[3]=c->r[31]|c->r[31]; // 802C5674
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C5678
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C567C
  c->lr=c->r[0]; // 802C5680
  c->r[1]=c->r[1]+0x00000010u; // 802C5684
  return; // 802C5688
}

// fn_802C568C
void f_802C568C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C568C
  c->r[0]=c->lr; // 802C5690
  c->f[3]=c->f[1]; // 802C5694
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C5698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C569C
  c->r[31]=c->r[3]|c->r[3]; // 802C56A0
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 802C56A4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C56A8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C56AC
  c->ctr=c->r[12]; // 802C56B0
  if (true) { c->lr=0x802C56B8u; dispatch(c,c->ctr); } // 802C56B4
  c->r[0]=R32(c->r[31]+0x00000024u); // 802C56B8
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802C56BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C56C0
  if (crb(c,2)) { goto L_802C56D0; } // 802C56C4
  c->r[3]=c->r[31]|c->r[31]; // 802C56C8
  c->lr=0x802C56D0u; f_802C5FD8(c); // 802C56CC
L_802C56D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C56D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C56D4
  c->lr=c->r[0]; // 802C56D8
  c->r[1]=c->r[1]+0x00000010u; // 802C56DC
  return; // 802C56E0
}

// fn_802C56E4
void f_802C56E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C56E4
  return; // 802C56E8
}

// fn_802C56EC
void f_802C56EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C56EC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 802C56F0
  fcmp(c,0,c->f[0],c->f[1]); // 802C56F4
  if (!crb(c,2)) return; // 802C56F8
  c->r[0]=R32(c->r[3]+0x00000024u); // 802C56FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C5700
  if (crb(c,2)) return; // 802C5704
  f_802C5FD8(c); return; // 802C5708
  return; // 802C570C
}

// fn_802C5710
void f_802C5710(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5710
  return; // 802C5714
}

// fn_802C5718
void f_802C5718(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5718
  c->r[0]=c->lr; // 802C571C
  {uint32_t ea=c->r[2]+0xFFFFABE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5720
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C5724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C5728
  c->r[31]=c->r[3]|c->r[3]; // 802C572C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5730
  fcmp(c,0,c->f[0],c->f[1]); // 802C5734
  if (crb(c,2)) { goto L_802C577C; } // 802C5738
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C573C
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5740
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5744
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802C5748
  c->r[12]=R32(c->r[3]+0x0000001Cu); // 802C574C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5750
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C5754
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802C5758
  c->ctr=c->r[12]; // 802C575C
  if (true) { c->lr=0x802C5764u; dispatch(c,c->ctr); } // 802C5760
  c->r[0]=R32(c->r[31]+0x00000024u); // 802C5764
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802C5768
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C576C
  if (crb(c,2)) { goto L_802C577C; } // 802C5770
  c->r[3]=c->r[31]|c->r[31]; // 802C5774
  c->lr=0x802C577Cu; f_802C5FD8(c); // 802C5778
L_802C577C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C577C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C5780
  c->lr=c->r[0]; // 802C5784
  c->r[1]=c->r[1]+0x00000010u; // 802C5788
  return; // 802C578C
}

// fn_802C5790
void f_802C5790(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 802C5790
  c->r[0]=c->r[5]+0x00000002u; // 802C5794
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C5798
  if (crb(c,2)) { goto L_802C57DC; } // 802C579C
  if (!crb(c,0)) { goto L_802C57B0; } // 802C57A0
  cmps(c,0,(int32_t)c->r[4],8); // 802C57A4
  if (crb(c,2)) { goto L_802C57C0; } // 802C57A8
  return; // 802C57AC
L_802C57B0:;
  c->r[0]=c->r[5]+0x00000004u; // 802C57B0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C57B4
  if (!crb(c,0)) return; // 802C57B8
  goto L_802C57D0; // 802C57BC
L_802C57C0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C57C0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 802C57C4
  c->ctr=c->r[12]; // 802C57C8
  if (true) { dispatch(c,c->ctr); return; } // 802C57CC
L_802C57D0:;
  c->r[0]=0u+0x00000000u; // 802C57D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C57D4
  return; // 802C57D8
L_802C57DC:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C57DC
  return; // 802C57E0
}

// fn_802C57E4
void f_802C57E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C57E4
  c->r[0]=c->lr; // 802C57E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C57EC
  c->r[11]=c->r[1]+0x00000030u; // 802C57F0
  c->lr=0x802C57F8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C57F4
  c->r[24]=c->r[3]|c->r[3]; // 802C57F8
  c->r[25]=c->r[4]|c->r[4]; // 802C57FC
  c->r[4]=c->r[5]|c->r[5]; // 802C5800
  c->r[3]=c->r[3]+0x00000020u; // 802C5804
  c->lr=0x802C580Cu; f_802BF61C(c); // 802C5808
  cmps(c,0,(int32_t)c->r[3],0); // 802C580C
  c->r[30]=c->r[3]|c->r[3]; // 802C5810
  if (!crb(c,2)) { goto L_802C5820; } // 802C5814
  c->r[3]=0u+0x00000000u; // 802C5818
  goto L_802C5904; // 802C581C
L_802C5820:;
  c->r[26]=R8(c->r[3]+0x0000001Au); // 802C5820
  c->r[28]=0u+0x00000007u; // 802C5824
  c->r[27]=0u+0x00000000u; // 802C5828
  cmps(c,0,(int32_t)c->r[26],0); // 802C582C
  if (crb(c,2)) { goto L_802C58C0; } // 802C5830
  c->r[29]=c->r[30]|c->r[30]; // 802C5834
  goto L_802C58A0; // 802C5838
L_802C583C:;
  c->r[4]=R16(c->r[29]+0x0000003Cu); // 802C583C
  cmpu(c,0,c->r[4],0x0000FFFFu); // 802C5840
  if (crb(c,2)) { goto L_802C5888; } // 802C5844
  c->r[3]=c->r[24]+0x00000020u; // 802C5848
  c->lr=0x802C5850u; f_802BF1EC(c); // 802C584C
  c->r[31]=c->r[3]|c->r[3]; // 802C5850
  c->r[3]=c->r[25]|c->r[25]; // 802C5854
  c->r[5]=R32(c->r[31]+0x00000010u); // 802C5858
  c->r[4]=c->r[27]|c->r[27]; // 802C585C
  c->lr=0x802C5864u; f_802DC940(c); // 802C5860
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 802C5864
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802C5868
  if (crb(c,2)) { goto L_802C5898; } // 802C586C
  c->r[5]=R32(c->r[31]+0x00000014u); // 802C5870
  c->r[4]=c->r[28]|c->r[28]; // 802C5874
  c->r[3]=c->r[25]|c->r[25]; // 802C5878
  c->r[28]=c->r[28]+0xFFFFFFFFu; // 802C587C
  c->lr=0x802C5884u; f_802DC940(c); // 802C5880
  goto L_802C5898; // 802C5884
L_802C5888:;
  c->r[3]=c->r[25]|c->r[25]; // 802C5888
  c->r[4]=c->r[27]|c->r[27]; // 802C588C
  c->r[5]=0u+0xFFFFFFFFu; // 802C5890
  c->lr=0x802C5898u; f_802DC940(c); // 802C5894
L_802C5898:;
  c->r[29]=c->r[29]+0x00000002u; // 802C5898
  c->r[27]=c->r[27]+0x00000001u; // 802C589C
L_802C58A0:;
  cmpu(c,0,c->r[27],c->r[26]); // 802C58A0
  if (crb(c,0)) { IRQCHK(c); goto L_802C583C; } // 802C58A4
  goto L_802C58C0; // 802C58A8
L_802C58AC:;
  c->r[3]=c->r[25]|c->r[25]; // 802C58AC
  c->r[4]=c->r[26]|c->r[26]; // 802C58B0
  c->r[5]=0u+0xFFFFFFFFu; // 802C58B4
  c->lr=0x802C58BCu; f_802DC940(c); // 802C58B8
  c->r[26]=c->r[26]+0x00000001u; // 802C58BC
L_802C58C0:;
  cmpu(c,0,c->r[26],c->r[28]); // 802C58C0
  if (!crb(c,1)) { IRQCHK(c); goto L_802C58AC; } // 802C58C4
  c->r[0]=R32(c->r[30]+0x00000014u); // 802C58C8
  cmps(c,0,(int32_t)c->r[0],0); // 802C58CC
  if (crb(c,2)) { goto L_802C58F4; } // 802C58D0
  c->r[4]=R16(c->r[30]+0x00000018u); // 802C58D4
  c->r[3]=c->r[24]+0x00000020u; // 802C58D8
  c->lr=0x802C58E0u; f_802BF038(c); // 802C58DC
  c->r[4]=c->r[3]|c->r[3]; // 802C58E0
  c->r[3]=c->r[25]|c->r[25]; // 802C58E4
  c->r[4]=R32(c->r[4]+0x00000010u); // 802C58E8
  c->lr=0x802C58F0u; f_802DC9B0(c); // 802C58EC
  goto L_802C5900; // 802C58F0
L_802C58F4:;
  c->r[3]=c->r[25]|c->r[25]; // 802C58F4
  c->r[4]=0u+0xFFFFFFFFu; // 802C58F8
  c->lr=0x802C5900u; f_802DC9B0(c); // 802C58FC
L_802C5900:;
  c->r[3]=0u+0x00000001u; // 802C5900
L_802C5904:;
  c->r[11]=c->r[1]+0x00000030u; // 802C5904
  c->lr=0x802C590Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C5908
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C590C
  c->lr=c->r[0]; // 802C5910
  c->r[1]=c->r[1]+0x00000030u; // 802C5914
  return; // 802C5918
}

// fn_802C591C
void f_802C591C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C591C
  c->r[0]=c->lr; // 802C5920
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C5924
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C5928
  c->r[31]=c->r[3]|c->r[3]; // 802C592C
  c->r[3]=c->r[4]|c->r[4]; // 802C5930
  c->r[12]=R32(c->r[4]+0x00000000u); // 802C5934
  c->r[4]=c->r[1]+0x00000008u; // 802C5938
  c->r[12]=R32(c->r[12]+0x00000080u); // 802C593C
  c->ctr=c->r[12]; // 802C5940
  if (true) { c->lr=0x802C5948u; dispatch(c,c->ctr); } // 802C5944
  c->r[4]=R32(c->r[3]+0x00000000u); // 802C5948
  c->r[3]=R32(c->r[3]+0x00000004u); // 802C594C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802C5950
  if (!crb(c,2)) { goto L_802C5960; } // 802C5954
  c->r[0]=0u+0xFFFFFF00u; // 802C5958
  c->r[3]=c->r[3]|c->r[0]; // 802C595C
L_802C5960:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802C5960
  if (!crb(c,2)) { goto L_802C596C; } // 802C5964
  c->r[3]=c->r[3]|0x000000FFu; // 802C5968
L_802C596C:;
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C596C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C5970
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C5974
  c->lr=c->r[0]; // 802C5978
  c->r[1]=c->r[1]+0x00000020u; // 802C597C
  return; // 802C5980
}

// fn_802C5984
void f_802C5984(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5984
  c->r[0]=c->lr; // 802C5988
  W32(c->r[1]+0x00000074u,c->r[0]); // 802C598C
  c->r[0]=0u+0xFFFFFFFFu; // 802C5990
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 802C5994
  c->r[31]=c->r[5]|c->r[5]; // 802C5998
  c->r[5]=c->r[6]|c->r[6]; // 802C599C
  W32(c->r[1]+0x00000068u,c->r[30]); // 802C59A0
  W32(c->r[1]+0x00000064u,c->r[29]); // 802C59A4
  c->r[29]=c->r[4]|c->r[4]; // 802C59A8
  c->r[4]=c->r[1]+0x00000018u; // 802C59AC
  W32(c->r[1]+0x00000038u,c->r[0]); // 802C59B0
  W32(c->r[1]+0x00000050u,c->r[0]); // 802C59B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C59B8
  c->r[12]=R32(c->r[12]+0x00000084u); // 802C59BC
  c->ctr=c->r[12]; // 802C59C0
  if (true) { c->lr=0x802C59C8u; dispatch(c,c->ctr); } // 802C59C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 802C59C8
  c->r[30]=c->r[3]|c->r[3]; // 802C59CC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C59D0
  if (crb(c,2)) { goto L_802C5AD0; } // 802C59D4
  cmps(c,0,(int32_t)c->r[29],0); // 802C59D8
  if (crb(c,2)) { goto L_802C59EC; } // 802C59DC
  c->r[3]=c->r[29]|c->r[29]; // 802C59E0
  c->r[4]=c->r[30]|c->r[30]; // 802C59E4
  c->lr=0x802C59ECu; f_802C4D20(c); // 802C59E8
L_802C59EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802C59EC
  if (crb(c,2)) { goto L_802C5AF8; } // 802C59F0
  c->r[0]=R32(c->r[30]+0x00000004u); // 802C59F4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802C59F8
  if (crb(c,2)) { goto L_802C5AC0; } // 802C59FC
  {uint32_t ea=c->r[30]+0x00000014u; psq_load(c,1,ea,0,0);} // 802C5A00
  c->r[3]=c->r[1]+0x0000000Cu; // 802C5A04
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,0,ea,0,0);} // 802C5A08
  c->r[4]=c->r[3]|c->r[3]; // 802C5A0C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802C5A10
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802C5A14
  {uint32_t ea=c->r[30]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 802C5A18
  {uint32_t ea=c->r[30]+0x00000010u; psq_load(c,0,ea,1,0);} // 802C5A1C
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802C5A20
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 802C5A24
  c->lr=0x802C5A2Cu; f_80354444(c); // 802C5A28
  c->r[3]=c->r[31]|c->r[31]; // 802C5A2C
  c->lr=0x802C5A34u; f_802DBFA4(c); // 802C5A30
  c->r[0]=R8(c->r[30]+0x00000038u); // 802C5A34
  c->r[4]=c->r[1]+0x00000008u; // 802C5A38
  c->r[3]=c->r[31]|c->r[31]; // 802C5A3C
  W8(c->r[1]+0x00000008u,c->r[0]); // 802C5A40
  c->r[0]=R8(c->r[30]+0x00000039u); // 802C5A44
  W8(c->r[1]+0x00000009u,c->r[0]); // 802C5A48
  c->r[0]=R8(c->r[30]+0x0000003Au); // 802C5A4C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 802C5A50
  c->r[0]=R8(c->r[30]+0x0000003Bu); // 802C5A54
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802C5A58
  c->lr=0x802C5A60u; f_802DBFB8(c); // 802C5A5C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5A60
  c->r[3]=c->r[31]|c->r[31]; // 802C5A64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C5A68
  {uint32_t ea=c->r[1]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C5A6C
  c->lr=0x802C5A74u; f_802DC17C(c); // 802C5A70
  {uint32_t ea=c->r[30]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5A74
  c->r[3]=c->r[31]|c->r[31]; // 802C5A78
  c->lr=0x802C5A80u; f_802DC1BC(c); // 802C5A7C
  c->r[0]=R32(c->r[30]+0x00000004u); // 802C5A80
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802C5A84
  if (!crb(c,2)) { goto L_802C5A98; } // 802C5A88
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5A8C
  c->r[0]=c->r[0]|0x00000010u; // 802C5A90
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5A94
L_802C5A98:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 802C5A98
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C5A9C
  if (!crb(c,2)) { goto L_802C5AB0; } // 802C5AA0
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5AA4
  c->r[0]=c->r[0]|0x00000020u; // 802C5AA8
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5AAC
L_802C5AB0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5AB0
  c->r[0]=c->r[0]|0x00000004u; // 802C5AB4
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5AB8
  goto L_802C5AF8; // 802C5ABC
L_802C5AC0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5AC0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C5AC4
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5AC8
  goto L_802C5AF8; // 802C5ACC
L_802C5AD0:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C5AD0
  if (crb(c,2)) { goto L_802C5AE4; } // 802C5AD4
  c->r[0]=R32(c->r[29]+0x00000000u); // 802C5AD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C5ADC
  W32(c->r[29]+0x00000000u,c->r[0]); // 802C5AE0
L_802C5AE4:;
  cmps(c,0,(int32_t)c->r[31],0); // 802C5AE4
  if (crb(c,2)) { goto L_802C5AF8; } // 802C5AE8
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5AEC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802C5AF0
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5AF4
L_802C5AF8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 802C5AF8
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 802C5AFC
  c->r[30]=R32(c->r[1]+0x00000068u); // 802C5B00
  c->r[29]=R32(c->r[1]+0x00000064u); // 802C5B04
  c->lr=c->r[0]; // 802C5B08
  c->r[1]=c->r[1]+0x00000070u; // 802C5B0C
  return; // 802C5B10
}

// fn_802C5B14
void f_802C5B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5B14
  c->r[0]=c->lr; // 802C5B18
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C5B1C
  c->r[0]=0u+0xFFFFFFFFu; // 802C5B20
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802C5B24
  c->r[31]=c->r[4]|c->r[4]; // 802C5B28
  c->r[4]=c->r[1]+0x00000010u; // 802C5B2C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802C5B30
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C5B34
  c->r[12]=R32(c->r[12]+0x00000088u); // 802C5B38
  c->ctr=c->r[12]; // 802C5B3C
  if (true) { c->lr=0x802C5B44u; dispatch(c,c->ctr); } // 802C5B40
  c->r[4]=R32(c->r[31]+0x00000000u); // 802C5B44
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C5B48
  cmps(c,0,(int32_t)c->r[4],0); // 802C5B4C
  if (crb(c,2)) { goto L_802C5B58; } // 802C5B50
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C5B54
L_802C5B58:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 802C5B58
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5B5C
  cmps(c,0,(int32_t)c->r[4],0); // 802C5B60
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5B64
  if (crb(c,2)) { goto L_802C5B74; } // 802C5B68
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802C5B6C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[1]);} // 802C5B70
L_802C5B74:;
  c->r[7]=R32(c->r[31]+0x00000000u); // 802C5B74
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 802C5B78
  c->r[5]=R8(c->r[3]+0x0000000Du); // 802C5B7C
  cmps(c,0,(int32_t)c->r[7],0); // 802C5B80
  c->r[4]=R8(c->r[3]+0x0000000Eu); // 802C5B84
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 802C5B88
  W8(c->r[1]+0x00000008u,c->r[6]); // 802C5B8C
  W8(c->r[1]+0x00000009u,c->r[5]); // 802C5B90
  W8(c->r[1]+0x0000000Au,c->r[4]); // 802C5B94
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802C5B98
  if (crb(c,2)) { goto L_802C5BB0; } // 802C5B9C
  W8(c->r[7]+0x00000014u,c->r[6]); // 802C5BA0
  W8(c->r[7]+0x00000015u,c->r[5]); // 802C5BA4
  W8(c->r[7]+0x00000016u,c->r[4]); // 802C5BA8
  W8(c->r[7]+0x00000017u,c->r[0]); // 802C5BAC
L_802C5BB0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C5BB0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802C5BB4
  c->lr=c->r[0]; // 802C5BB8
  c->r[1]=c->r[1]+0x00000030u; // 802C5BBC
  return; // 802C5BC0
}

// fn_802C5BC4
void f_802C5BC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5BC4
  c->r[0]=c->lr; // 802C5BC8
  W32(c->r[1]+0x00000094u,c->r[0]); // 802C5BCC
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 802C5BD0
  W32(c->r[1]+0x00000088u,c->r[30]); // 802C5BD4
  c->r[30]=c->r[4]|c->r[4]; // 802C5BD8
  c->r[4]=c->r[1]+0x0000004Cu; // 802C5BDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C5BE0
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 802C5BE4
  c->ctr=c->r[12]; // 802C5BE8
  if (true) { c->lr=0x802C5BF0u; dispatch(c,c->ctr); } // 802C5BEC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C5BF0
  c->r[31]=c->r[3]|c->r[3]; // 802C5BF4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802C5BF8
  if (!crb(c,2)) { goto L_802C5C08; } // 802C5BFC
  c->r[3]=0u+0x00000000u; // 802C5C00
  goto L_802C5D0C; // 802C5C04
L_802C5C08:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 802C5C08
  cmps(c,0,(int32_t)c->r[0],1); // 802C5C0C
  if (crb(c,2)) { goto L_802C5C40; } // 802C5C10
  if (!crb(c,0)) { goto L_802C5C6C; } // 802C5C14
  cmps(c,0,(int32_t)c->r[0],0); // 802C5C18
  if (!crb(c,0)) { goto L_802C5C24; } // 802C5C1C
  goto L_802C5C6C; // 802C5C20
L_802C5C24:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5C24
  c->r[3]=c->r[30]|c->r[30]; // 802C5C28
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C5C2C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C5C30
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802C5C34
  c->lr=0x802C5C3Cu; f_802CFB3C(c); // 802C5C38
  goto L_802C5C6C; // 802C5C3C
L_802C5C40:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C5C40
  {uint32_t ea=c->r[2]+0xFFFFAC00u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5C44
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5C48
  c->r[3]=c->r[30]|c->r[30]; // 802C5C4C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802C5C50
  {uint32_t ea=c->r[31]+0x00000018u; c->f[5]=c->ps1[5]=RF32(ea);} // 802C5C54
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802C5C58
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 802C5C5C
  c->f[2]=-c->f[1]; // 802C5C60
  c->f[3]=-c->f[4]; // 802C5C64
  c->lr=0x802C5C6Cu; f_802CFB74(c); // 802C5C68
L_802C5C6C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C5C6C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802C5C70
  cmps(c,0,(int32_t)c->r[0],1); // 802C5C74
  if (crb(c,2)) { goto L_802C5CBC; } // 802C5C78
  if (!crb(c,0)) { goto L_802C5CF0; } // 802C5C7C
  cmps(c,0,(int32_t)c->r[0],0); // 802C5C80
  if (!crb(c,0)) { goto L_802C5C8C; } // 802C5C84
  goto L_802C5CF0; // 802C5C88
L_802C5C8C:;
  c->r[0]=0u+0x00000001u; // 802C5C8C
  W32(c->r[1]+0x00000020u,c->r[0]); // 802C5C90
  {uint32_t ea=c->r[31]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C5C94
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5C98
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5C9C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802C5CA0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802C5CA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C5CA8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 802C5CAC
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 802C5CB0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 802C5CB4
  goto L_802C5CF0; // 802C5CB8
L_802C5CBC:;
  c->r[0]=0u+0x00000002u; // 802C5CBC
  W32(c->r[1]+0x00000020u,c->r[0]); // 802C5CC0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5CC4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C5CC8
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5CCC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802C5CD0
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802C5CD4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 802C5CD8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[1]);} // 802C5CDC
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C5CE0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802C5CE4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 802C5CE8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 802C5CEC
L_802C5CF0:;
  c->r[3]=c->r[30]|c->r[30]; // 802C5CF0
  c->r[4]=c->r[31]+0x00000008u; // 802C5CF4
  c->lr=0x802C5CFCu; f_802CF8A0(c); // 802C5CF8
  c->r[3]=c->r[30]|c->r[30]; // 802C5CFC
  c->r[4]=c->r[1]+0x00000020u; // 802C5D00
  c->lr=0x802C5D08u; f_802CF8D4(c); // 802C5D04
  c->r[3]=0u+0x00000001u; // 802C5D08
L_802C5D0C:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 802C5D0C
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 802C5D10
  c->r[30]=R32(c->r[1]+0x00000088u); // 802C5D14
  c->lr=c->r[0]; // 802C5D18
  c->r[1]=c->r[1]+0x00000090u; // 802C5D1C
  return; // 802C5D20
}

// fn_802C5D24
void f_802C5D24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5D24
  c->r[0]=c->lr; // 802C5D28
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C5D2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C5D30
  c->r[31]=c->r[4]|c->r[4]; // 802C5D34
  c->r[4]=c->r[5]|c->r[5]; // 802C5D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C5D3C
  c->r[30]=c->r[3]|c->r[3]; // 802C5D40
  c->r[3]=c->r[3]+0x00000020u; // 802C5D44
  c->lr=0x802C5D4Cu; f_802BF668(c); // 802C5D48
  cmps(c,0,(int32_t)c->r[3],0); // 802C5D4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C5D50
  if (!crb(c,2)) { goto L_802C5D70; } // 802C5D54
  c->r[3]=0u+0x00000000u; // 802C5D58
  c->r[0]=0u+0xFFFFFFFFu; // 802C5D5C
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C5D60
  c->r[3]=c->r[31]|c->r[31]; // 802C5D64
  W32(c->r[31]+0x00000004u,c->r[0]); // 802C5D68
  goto L_802C5DA0; // 802C5D6C
L_802C5D70:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 802C5D70
  cmps(c,0,(int32_t)c->r[4],0); // 802C5D74
  if (crb(c,2)) { goto L_802C5D8C; } // 802C5D78
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C5D7C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802C5D80
  c->r[3]=c->r[4]+c->r[0]; // 802C5D84
  goto L_802C5DA0; // 802C5D88
L_802C5D8C:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5D8C
  c->r[4]=c->r[31]|c->r[31]; // 802C5D90
  c->r[3]=c->r[1]+0x00000008u; // 802C5D94
  c->lr=0x802C5D9Cu; f_802BE530(c); // 802C5D98
  c->r[3]=c->r[31]|c->r[31]; // 802C5D9C
L_802C5DA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C5DA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C5DA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C5DA8
  c->lr=c->r[0]; // 802C5DAC
  c->r[1]=c->r[1]+0x00000020u; // 802C5DB0
  return; // 802C5DB4
}

// fn_802C5DB8
void f_802C5DB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5DB8
  c->r[0]=c->lr; // 802C5DBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C5DC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C5DC4
  c->r[31]=c->r[4]|c->r[4]; // 802C5DC8
  c->r[4]=c->r[5]|c->r[5]; // 802C5DCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C5DD0
  c->r[30]=c->r[3]|c->r[3]; // 802C5DD4
  c->r[3]=c->r[3]+0x00000020u; // 802C5DD8
  c->lr=0x802C5DE0u; f_802BF6B4(c); // 802C5DDC
  cmps(c,0,(int32_t)c->r[3],0); // 802C5DE0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C5DE4
  if (!crb(c,2)) { goto L_802C5DFC; } // 802C5DE8
  c->r[0]=0u+0x00000000u; // 802C5DEC
  c->r[3]=c->r[31]|c->r[31]; // 802C5DF0
  W32(c->r[31]+0x00000004u,c->r[0]); // 802C5DF4
  goto L_802C5E2C; // 802C5DF8
L_802C5DFC:;
  c->r[4]=R32(c->r[30]+0x0000002Cu); // 802C5DFC
  cmps(c,0,(int32_t)c->r[4],0); // 802C5E00
  if (crb(c,2)) { goto L_802C5E18; } // 802C5E04
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C5E08
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 802C5E0C
  c->r[3]=c->r[4]+c->r[0]; // 802C5E10
  goto L_802C5E2C; // 802C5E14
L_802C5E18:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5E18
  c->r[4]=c->r[31]|c->r[31]; // 802C5E1C
  c->r[3]=c->r[1]+0x00000008u; // 802C5E20
  c->lr=0x802C5E28u; f_802BE600(c); // 802C5E24
  c->r[3]=c->r[31]|c->r[31]; // 802C5E28
L_802C5E2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C5E2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C5E30
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C5E34
  c->lr=c->r[0]; // 802C5E38
  c->r[1]=c->r[1]+0x00000020u; // 802C5E3C
  return; // 802C5E40
}

// fn_802C5E44
void f_802C5E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5E44
  c->r[0]=c->lr; // 802C5E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C5E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C5E50
  c->r[31]=c->r[4]|c->r[4]; // 802C5E54
  c->r[4]=c->r[5]|c->r[5]; // 802C5E58
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C5E5C
  c->r[30]=c->r[3]|c->r[3]; // 802C5E60
  c->r[3]=c->r[3]+0x00000020u; // 802C5E64
  c->lr=0x802C5E6Cu; f_802BF700(c); // 802C5E68
  cmps(c,0,(int32_t)c->r[3],0); // 802C5E6C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C5E70
  if (!crb(c,2)) { goto L_802C5E88; } // 802C5E74
  c->r[0]=0u+0x00000000u; // 802C5E78
  c->r[3]=c->r[31]|c->r[31]; // 802C5E7C
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5E80
  goto L_802C5EB8; // 802C5E84
L_802C5E88:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 802C5E88
  cmps(c,0,(int32_t)c->r[4],0); // 802C5E8C
  if (crb(c,2)) { goto L_802C5EA4; } // 802C5E90
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C5E94
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802C5E98
  c->r[3]=c->r[4]+c->r[0]; // 802C5E9C
  goto L_802C5EB8; // 802C5EA0
L_802C5EA4:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5EA4
  c->r[4]=c->r[31]|c->r[31]; // 802C5EA8
  c->r[3]=c->r[1]+0x00000008u; // 802C5EAC
  c->lr=0x802C5EB4u; f_802BE9F8(c); // 802C5EB0
  c->r[3]=c->r[31]|c->r[31]; // 802C5EB4
L_802C5EB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C5EB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C5EBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C5EC0
  c->lr=c->r[0]; // 802C5EC4
  c->r[1]=c->r[1]+0x00000020u; // 802C5EC8
  return; // 802C5ECC
}

// fn_802C5ED0
void f_802C5ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5ED0
  c->r[0]=c->lr; // 802C5ED4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C5ED8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C5EDC
  c->r[31]=c->r[4]|c->r[4]; // 802C5EE0
  c->r[4]=c->r[5]|c->r[5]; // 802C5EE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C5EE8
  c->r[30]=c->r[3]|c->r[3]; // 802C5EEC
  c->r[3]=c->r[3]+0x00000020u; // 802C5EF0
  c->lr=0x802C5EF8u; f_802BF74C(c); // 802C5EF4
  cmps(c,0,(int32_t)c->r[3],0); // 802C5EF8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C5EFC
  if (!crb(c,2)) { goto L_802C5F14; } // 802C5F00
  c->r[0]=0u+0x00000000u; // 802C5F04
  c->r[3]=c->r[31]|c->r[31]; // 802C5F08
  W32(c->r[31]+0x00000000u,c->r[0]); // 802C5F0C
  goto L_802C5F44; // 802C5F10
L_802C5F14:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 802C5F14
  cmps(c,0,(int32_t)c->r[4],0); // 802C5F18
  if (crb(c,2)) { goto L_802C5F30; } // 802C5F1C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C5F20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 802C5F24
  c->r[3]=c->r[4]+c->r[0]; // 802C5F28
  goto L_802C5F44; // 802C5F2C
L_802C5F30:;
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C5F30
  c->r[4]=c->r[31]|c->r[31]; // 802C5F34
  c->r[3]=c->r[1]+0x00000008u; // 802C5F38
  c->lr=0x802C5F40u; f_802BEB58(c); // 802C5F3C
  c->r[3]=c->r[31]|c->r[31]; // 802C5F40
L_802C5F44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C5F44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C5F48
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C5F4C
  c->lr=c->r[0]; // 802C5F50
  c->r[1]=c->r[1]+0x00000020u; // 802C5F54
  return; // 802C5F58
}

// fn_802C5F5C
void f_802C5F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5F5C
  c->r[0]=c->lr; // 802C5F60
  c->r[3]=c->r[3]+0x00000020u; // 802C5F64
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C5F68
  c->lr=0x802C5F70u; f_802BF6B4(c); // 802C5F6C
  cmps(c,0,(int32_t)c->r[3],0); // 802C5F70
  if (crb(c,2)) { goto L_802C5F80; } // 802C5F74
  c->r[3]=R32(c->r[3]+0x00000014u); // 802C5F78
  goto L_802C5F84; // 802C5F7C
L_802C5F80:;
  c->r[3]=0u+0xFFFFFFFFu; // 802C5F80
L_802C5F84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C5F84
  c->lr=c->r[0]; // 802C5F88
  c->r[1]=c->r[1]+0x00000010u; // 802C5F8C
  return; // 802C5F90
}

// fn_802C5F94
void f_802C5F94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5F94
  c->r[0]=c->lr; // 802C5F98
  c->r[3]=c->r[3]+0x00000020u; // 802C5F9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C5FA0
  c->lr=0x802C5FA8u; f_802BF6B4(c); // 802C5FA4
  cmps(c,0,(int32_t)c->r[3],0); // 802C5FA8
  c->r[4]=0u+0x00000000u; // 802C5FAC
  if (crb(c,2)) { goto L_802C5FC4; } // 802C5FB0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802C5FB4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802C5FB8
  if (crb(c,2)) { goto L_802C5FC4; } // 802C5FBC
  c->r[4]=0u+0x00000001u; // 802C5FC0
L_802C5FC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C5FC4
  c->r[3]=c->r[4]|c->r[4]; // 802C5FC8
  c->lr=c->r[0]; // 802C5FCC
  c->r[1]=c->r[1]+0x00000010u; // 802C5FD0
  return; // 802C5FD4
}

// fn_802C5FD8
void f_802C5FD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C5FD8
  c->r[0]=c->lr; // 802C5FDC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802C5FE0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802C5FE4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802C5FE8
  c->r[11]=c->r[1]+0x00000040u; // 802C5FEC
  c->lr=0x802C5FF4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C5FF0
  c->r[25]=c->r[3]|c->r[3]; // 802C5FF4
  c->r[3]=c->r[3]+0x00000020u; // 802C5FF8
  c->lr=0x802C6000u; f_802BF0E4(c); // 802C5FFC
  c->r[28]=c->r[3]|c->r[3]; // 802C6000
  c->r[3]=c->r[25]+0x00000020u; // 802C6004
  c->lr=0x802C600Cu; f_802BF298(c); // 802C6008
  c->r[29]=c->r[3]|c->r[3]; // 802C600C
  c->r[3]=c->r[25]+0x00000020u; // 802C6010
  c->lr=0x802C6018u; f_802BF3C4(c); // 802C6014
  c->r[30]=c->r[3]|c->r[3]; // 802C6018
  c->r[3]=c->r[25]+0x00000020u; // 802C601C
  c->lr=0x802C6024u; f_802BF59C(c); // 802C6020
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 802C6024
  c->r[31]=c->r[3]|c->r[3]; // 802C6028
  c->r[26]=0u+0x00000000u; // 802C602C
  c->r[27]=0u+0x00000000u; // 802C6030
  goto L_802C6064; // 802C6034
L_802C6038:;
  c->r[4]=c->r[26]|c->r[26]; // 802C6038
  c->r[3]=c->r[25]+0x00000020u; // 802C603C
  c->lr=0x802C6044u; f_802BF038(c); // 802C6040
  W32(c->r[1]+0x00000014u,c->r[3]); // 802C6044
  c->f[1]=c->f[31]; // 802C6048
  c->r[3]=c->r[1]+0x00000014u; // 802C604C
  c->r[0]=R32(c->r[25]+0x00000028u); // 802C6050
  c->r[4]=c->r[0]+c->r[27]; // 802C6054
  c->lr=0x802C605Cu; f_802BE530(c); // 802C6058
  c->r[27]=c->r[27]+0x00000008u; // 802C605C
  c->r[26]=c->r[26]+0x00000001u; // 802C6060
L_802C6064:;
  cmpu(c,0,c->r[26],c->r[28]); // 802C6064
  if (crb(c,0)) { IRQCHK(c); goto L_802C6038; } // 802C6068
  c->r[26]=0u+0x00000000u; // 802C606C
  c->r[28]=0u+0x00000000u; // 802C6070
  goto L_802C60A4; // 802C6074
L_802C6078:;
  c->r[4]=c->r[26]|c->r[26]; // 802C6078
  c->r[3]=c->r[25]+0x00000020u; // 802C607C
  c->lr=0x802C6084u; f_802BF1EC(c); // 802C6080
  W32(c->r[1]+0x00000010u,c->r[3]); // 802C6084
  c->f[1]=c->f[31]; // 802C6088
  c->r[3]=c->r[1]+0x00000010u; // 802C608C
  c->r[0]=R32(c->r[25]+0x0000002Cu); // 802C6090
  c->r[4]=c->r[0]+c->r[28]; // 802C6094
  c->lr=0x802C609Cu; f_802BE600(c); // 802C6098
  c->r[28]=c->r[28]+0x00000040u; // 802C609C
  c->r[26]=c->r[26]+0x00000001u; // 802C60A0
L_802C60A4:;
  cmpu(c,0,c->r[26],c->r[29]); // 802C60A4
  if (crb(c,0)) { IRQCHK(c); goto L_802C6078; } // 802C60A8
  c->r[26]=0u+0x00000000u; // 802C60AC
  c->r[28]=0u+0x00000000u; // 802C60B0
  goto L_802C60E4; // 802C60B4
L_802C60B8:;
  c->r[4]=c->r[26]|c->r[26]; // 802C60B8
  c->r[3]=c->r[25]+0x00000020u; // 802C60BC
  c->lr=0x802C60C4u; f_802BF318(c); // 802C60C0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802C60C4
  c->f[1]=c->f[31]; // 802C60C8
  c->r[3]=c->r[1]+0x0000000Cu; // 802C60CC
  c->r[0]=R32(c->r[25]+0x00000030u); // 802C60D0
  c->r[4]=c->r[0]+c->r[28]; // 802C60D4
  c->lr=0x802C60DCu; f_802BE9F8(c); // 802C60D8
  c->r[28]=c->r[28]+0x00000010u; // 802C60DC
  c->r[26]=c->r[26]+0x00000001u; // 802C60E0
L_802C60E4:;
  cmpu(c,0,c->r[26],c->r[30]); // 802C60E4
  if (crb(c,0)) { IRQCHK(c); goto L_802C60B8; } // 802C60E8
  c->r[26]=0u+0x00000000u; // 802C60EC
  c->r[28]=0u+0x00000000u; // 802C60F0
  goto L_802C6124; // 802C60F4
L_802C60F8:;
  c->r[4]=c->r[26]|c->r[26]; // 802C60F8
  c->r[3]=c->r[25]+0x00000020u; // 802C60FC
  c->lr=0x802C6104u; f_802BF4F0(c); // 802C6100
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C6104
  c->f[1]=c->f[31]; // 802C6108
  c->r[3]=c->r[1]+0x00000008u; // 802C610C
  c->r[0]=R32(c->r[25]+0x00000034u); // 802C6110
  c->r[4]=c->r[0]+c->r[28]; // 802C6114
  c->lr=0x802C611Cu; f_802BEB58(c); // 802C6118
  c->r[28]=c->r[28]+0x00000034u; // 802C611C
  c->r[26]=c->r[26]+0x00000001u; // 802C6120
L_802C6124:;
  cmpu(c,0,c->r[26],c->r[31]); // 802C6124
  if (crb(c,0)) { IRQCHK(c); goto L_802C60F8; } // 802C6128
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802C612C
  c->r[11]=c->r[1]+0x00000040u; // 802C6130
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802C6134
  c->lr=0x802C613Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C6138
  c->r[0]=R32(c->r[1]+0x00000054u); // 802C613C
  c->lr=c->r[0]; // 802C6140
  c->r[1]=c->r[1]+0x00000050u; // 802C6144
  return; // 802C6148
}

// fn_802C614C
void f_802C614C(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C614C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C6150
  c->r[3]=c->r[3]+0xFFFFC528u; // 802C6154
  cmpu(c,0,c->r[0],c->r[3]); // 802C6158
  if (!crb(c,2)) { goto L_802C6168; } // 802C615C
  c->r[3]=0u+0x00000001u; // 802C6160
  return; // 802C6164
L_802C6168:;
  c->r[3]=0u+0x80440000u; // 802C6168
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C616C
  c->r[3]=c->r[3]+0xFFFFC518u; // 802C6170
  cmpu(c,0,c->r[0],c->r[3]); // 802C6174
  if (!crb(c,2)) { goto L_802C6184; } // 802C6178
  c->r[3]=0u+0x00000001u; // 802C617C
  return; // 802C6180
L_802C6184:;
  c->r[3]=0u+0x80440000u; // 802C6184
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C6188
  c->r[0]=c->r[3]-c->r[0]; // 802C618C
  c->r[0]=cntlz(c->r[0]); // 802C6190
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C6194
  return; // 802C6198
}

// fn_802C619C
void f_802C619C(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C619C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C61A0
  c->r[3]=c->r[3]+0xFFFFC518u; // 802C61A4
  cmpu(c,0,c->r[0],c->r[3]); // 802C61A8
  if (!crb(c,2)) { goto L_802C61B8; } // 802C61AC
  c->r[3]=0u+0x00000001u; // 802C61B0
  return; // 802C61B4
L_802C61B8:;
  c->r[3]=0u+0x80440000u; // 802C61B8
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C61BC
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C61C0
  c->r[0]=c->r[3]-c->r[0]; // 802C61C4
  c->r[0]=cntlz(c->r[0]); // 802C61C8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C61CC
  return; // 802C61D0
}

// fn_802C61D4
void f_802C61D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C61D4
  c->r[0]=c->lr; // 802C61D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C61DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C61E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C61E4
  c->ctr=c->r[12]; // 802C61E8
  if (true) { c->lr=0x802C61F0u; dispatch(c,c->ctr); } // 802C61EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C61F0
  c->r[3]=c->r[3]+0x00000004u; // 802C61F4
  c->lr=c->r[0]; // 802C61F8
  c->r[1]=c->r[1]+0x00000010u; // 802C61FC
  return; // 802C6200
}

// fn_802C6204
void f_802C6204(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C6204
  c->r[3]=c->r[3]+0xFFFFC528u; // 802C6208
  return; // 802C620C
}

// fn_802C6210
void f_802C6210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6210
  c->r[0]=c->lr; // 802C6214
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C6218
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C621C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C6220
  c->ctr=c->r[12]; // 802C6224
  if (true) { c->lr=0x802C622Cu; dispatch(c,c->ctr); } // 802C6228
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C622C
  c->r[3]=c->r[3]+0x00000004u; // 802C6230
  c->lr=c->r[0]; // 802C6234
  c->r[1]=c->r[1]+0x00000010u; // 802C6238
  return; // 802C623C
}

// fn_802C6240
void f_802C6240(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C6240
  c->r[3]=c->r[3]+0xFFFFC518u; // 802C6244
  return; // 802C6248
}

// fn_802C624C
void f_802C624C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C624C
  c->r[0]=c->lr; // 802C6250
  cmps(c,0,(int32_t)c->r[3],0); // 802C6254
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C6258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C625C
  c->r[31]=c->r[3]|c->r[3]; // 802C6260
  if (crb(c,2)) { goto L_802C6280; } // 802C6264
  c->r[5]=0u+0x80480000u; // 802C6268
  c->r[4]=c->r[31]|c->r[31]; // 802C626C
  c->r[5]=c->r[5]+0x00006FD8u; // 802C6270
  W32(c->r[3]+0x00000000u,c->r[5]); // 802C6274
  c->r[3]=R32(c->r[3]+0x00000008u); // 802C6278
  c->lr=0x802C6280u; f_8034FF50(c); // 802C627C
L_802C6280:;
  c->r[3]=c->r[31]|c->r[31]; // 802C6280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C6284
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C6288
  c->lr=c->r[0]; // 802C628C
  c->r[1]=c->r[1]+0x00000010u; // 802C6290
  return; // 802C6294
}

// Destroy__Q34nw4r3g3d6G3dObjFv
void f_802C6298(Ctx* __restrict c) {
  trace_call(0x802C6298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6298
  c->r[0]=c->lr; // 802C629C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C62A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C62A4
  c->r[31]=c->r[3]|c->r[3]; // 802C62A8
  c->r[0]=R32(c->r[3]+0x00000004u); // 802C62AC
  cmps(c,0,(int32_t)c->r[0],0); // 802C62B0
  if (crb(c,2)) { goto L_802C62DC; } // 802C62B4
  c->r[3]=c->r[0]|c->r[0]; // 802C62B8
  c->r[4]=0u+0x00010000u; // 802C62BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C62C0
  c->r[6]=c->r[31]|c->r[31]; // 802C62C4
  c->r[4]=c->r[4]+0x00000001u; // 802C62C8
  c->r[5]=0u+0x00000000u; // 802C62CC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802C62D0
  c->ctr=c->r[12]; // 802C62D4
  if (true) { c->lr=0x802C62DCu; dispatch(c,c->ctr); } // 802C62D8
L_802C62DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802C62DC
  if (crb(c,2)) { goto L_802C62FC; } // 802C62E0
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C62E4
  c->r[3]=c->r[31]|c->r[31]; // 802C62E8
  c->r[4]=0u+0x00000001u; // 802C62EC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802C62F0
  c->ctr=c->r[12]; // 802C62F4
  if (true) { c->lr=0x802C62FCu; dispatch(c,c->ctr); } // 802C62F8
L_802C62FC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C62FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C6300
  c->lr=c->r[0]; // 802C6304
  c->r[1]=c->r[1]+0x00000010u; // 802C6308
  return; // 802C630C
}

// fn_802C6310
void f_802C6310(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C6310
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C6314
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C6318
  c->r[0]=c->r[3]-c->r[0]; // 802C631C
  c->r[0]=cntlz(c->r[0]); // 802C6320
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C6324
  return; // 802C6328
}

// PlayPolicy_Onetime__Q24nw4r3g3dFfff
void f_802C632C(Ctx* __restrict c) {
  trace_call(0x802C632Cu);
  c->f[1]=c->f[3]; // 802C632C
  return; // 802C6330
}

// PlayPolicy_Loop__Q24nw4r3g3dFfff
void f_802C6334(Ctx* __restrict c) {
  trace_call(0x802C6334u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6334
  c->r[0]=c->lr; // 802C6338
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C633C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 802C6340
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 802C6344
  {uint32_t ea=c->r[2]+0xFFFFAC08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6348
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 802C634C
  fcmp(c,0,c->f[3],c->f[0]); // 802C6350
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6354
  if (!crb(c,2)) { goto L_802C6370; } // 802C6358
  c->f[1]=c->f[3]; // 802C635C
  c->f[2]=c->f[31]; // 802C6360
  c->lr=0x802C6368u; f_802EFFF0(c); // 802C6364
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802C6368
  goto L_802C638C; // 802C636C
L_802C6370:;
  c->f[2]=c->f[31]; // 802C6370
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[31]); // 802C6374
  c->lr=0x802C637Cu; f_802EFFF0(c); // 802C6378
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802C637C
  {uint32_t ea=c->r[2]+0xFFFFAC08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6380
  c->f[0]=(c->f[1]>=0.0)?c->f[0]:c->f[31]; // 802C6384
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802C6388
L_802C638C:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 802C638C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C6390
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 802C6394
  c->lr=c->r[0]; // 802C6398
  c->r[1]=c->r[1]+0x00000020u; // 802C639C
  return; // 802C63A0
}

// SetAnmFlag__Q34nw4r3g3d6AnmObjFQ44nw4r3g3d6AnmObj7AnmFlagb
void f_802C63A4(Ctx* __restrict c) {
  trace_call(0x802C63A4u);
  cmps(c,0,(int32_t)c->r[5],0); // 802C63A4
  if (crb(c,2)) { goto L_802C63BC; } // 802C63A8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C63AC
  c->r[0]=c->r[0]|c->r[4]; // 802C63B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C63B4
  return; // 802C63B8
L_802C63BC:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C63BC
  c->r[0]=c->r[0]&~c->r[4]; // 802C63C0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C63C4
  return; // 802C63C8
}

// TestAnmFlag__Q34nw4r3g3d6AnmObjCFQ44nw4r3g3d6AnmObj7AnmFlag
void f_802C63CC(Ctx* __restrict c) {
  trace_call(0x802C63CCu);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C63CC
  c->r[3]=c->r[0]&c->r[4]; // 802C63D0
  c->r[0]=0u-c->r[3]; // 802C63D4
  c->r[0]=c->r[0]|c->r[3]; // 802C63D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802C63DC
  return; // 802C63E0
}

// GDSetGenMode2__Q34nw4r3g3d4fifoFUcUcUcUc11_GXCullMode
void f_802C63E4(Ctx* __restrict c) {
  trace_call(0x802C63E4u);
  c->r[10]=0u+0xCC010000u; // 802C63E4
  c->r[11]=0u+0x00000061u; // 802C63E8
  c->r[9]=0u+0xFE080000u; // 802C63EC
  c->r[8]=c->r[2]+0xFFFFAC10u; // 802C63F0
  c->r[7]=R8(c->r[8]+c->r[7]); // 802C63F4
  c->r[9]=c->r[9]+0xFFFFFC3Fu; // 802C63F8
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 802C63FC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802C6400
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 802C6404
  c->r[8]=rotl(c->r[6],16)&0x00FF0000u; // 802C6408
  c->r[6]=rotl(c->r[7],14)&0xFFFFC000u; // 802C640C
  W32(c->r[10]+0xFFFF8000u,c->r[9]); // 802C6410
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 802C6414
  c->r[0]=c->r[3]|c->r[0]; // 802C6418
  c->r[0]=c->r[5]|c->r[0]; // 802C641C
  c->r[6]=c->r[8]|c->r[6]; // 802C6420
  c->r[0]=c->r[6]|c->r[0]; // 802C6424
  W8(c->r[10]+0xFFFF8000u,c->r[11]); // 802C6428
  c->r[7]=0u+0x00000010u; // 802C642C
  c->r[6]=0u+0x00000000u; // 802C6430
  W32(c->r[10]+0xFFFF8000u,c->r[0]); // 802C6434
  c->r[5]=0u+0x00001009u; // 802C6438
  c->r[0]=0u+0x0000103Fu; // 802C643C
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 802C6440
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 802C6444
  W16(c->r[10]+0xFFFF8000u,c->r[5]); // 802C6448
  W32(c->r[10]+0xFFFF8000u,c->r[4]); // 802C644C
  W8(c->r[10]+0xFFFF8000u,c->r[7]); // 802C6450
  W16(c->r[10]+0xFFFF8000u,c->r[6]); // 802C6454
  W16(c->r[10]+0xFFFF8000u,c->r[0]); // 802C6458
  W32(c->r[10]+0xFFFF8000u,c->r[3]); // 802C645C
  return; // 802C6460
}

// GDSetCullMode__Q34nw4r3g3d4fifoF11_GXCullMode
void f_802C6464(Ctx* __restrict c) {
  trace_call(0x802C6464u);
  c->r[5]=0u+0xCC010000u; // 802C6464
  c->r[6]=0u+0x00000061u; // 802C6468
  c->r[4]=0u+0xFE010000u; // 802C646C
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802C6470
  c->r[0]=c->r[4]+0xFFFFC000u; // 802C6474
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C6478
  c->r[4]=c->r[2]+0xFFFFAC10u; // 802C647C
  c->r[0]=R8(c->r[4]+c->r[3]); // 802C6480
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802C6484
  c->r[0]=rotl(c->r[0],14)&0xFFFFC000u; // 802C6488
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C648C
  return; // 802C6490
}

// GDSetTexCoordScale2__Q34nw4r3g3d4fifoF13_GXTexCoordIDUsUcUcUsUcUc
void f_802C6494(Ctx* __restrict c) {
  trace_call(0x802C6494u);
  c->r[11]=0u+0xCC010000u; // 802C6494
  c->r[12]=0u+0x00000061u; // 802C6498
  c->r[10]=0u+0xFE040000u; // 802C649C
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 802C64A0
  c->r[0]=c->r[10]+0xFFFFFFFFu; // 802C64A4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 802C64A8
  c->r[10]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C64AC
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 802C64B0
  c->r[3]=rotl(c->r[5],16)&0x00FF0000u; // 802C64B4
  c->r[5]=rotl(c->r[6],17)&0x01FE0000u; // 802C64B8
  c->r[3]=c->r[4]|c->r[3]; // 802C64BC
  c->r[0]=c->r[10]+0x00000030u; // 802C64C0
  c->r[3]=c->r[5]|c->r[3]; // 802C64C4
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 802C64C8
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 802C64CC
  c->r[4]=c->r[7]+0xFFFFFFFFu; // 802C64D0
  c->r[0]=c->r[3]|c->r[0]; // 802C64D4
  c->r[3]=rotl(c->r[8],16)&0x00FF0000u; // 802C64D8
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 802C64DC
  c->r[0]=c->r[10]+0x00000031u; // 802C64E0
  c->r[5]=rotl(c->r[9],17)&0x01FE0000u; // 802C64E4
  c->r[3]=c->r[4]|c->r[3]; // 802C64E8
  W8(c->r[11]+0xFFFF8000u,c->r[12]); // 802C64EC
  c->r[3]=c->r[5]|c->r[3]; // 802C64F0
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 802C64F4
  c->r[0]=c->r[3]|c->r[0]; // 802C64F8
  W32(c->r[11]+0xFFFF8000u,c->r[0]); // 802C64FC
  return; // 802C6500
}

// GDSetIndTexMtx__Q34nw4r3g3d4fifoFUlRCQ34nw4r4math5MTX34
void f_802C6504(Ctx* __restrict c) {
  trace_call(0x802C6504u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C6504
  c->r[5]=0u+0x00000000u; // 802C6508
  {uint32_t ea=c->r[4]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C650C
  c->f[5]=std::fabs(c->f[2]); // 802C6510
  {uint32_t ea=c->r[2]+0xFFFFAC14u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6514
  {uint32_t ea=c->r[4]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802C6518
  c->f[9]=std::fabs(c->f[3]); // 802C651C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 802C6520
  {uint32_t ea=c->r[4]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 802C6524
  {uint32_t ea=c->r[4]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 802C6528
  fcmp(c,0,c->f[5],c->f[0]); // 802C652C
  c->f[10]=std::fabs(c->f[6]); // 802C6530
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6534
  c->f[11]=std::fabs(c->f[4]); // 802C6538
  c->f[12]=std::fabs(c->f[7]); // 802C653C
  c->f[13]=std::fabs(c->f[8]); // 802C6540
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6544
  if (crb(c,2)) { goto L_802C6588; } // 802C6548
  fcmp(c,0,c->f[9],c->f[0]); // 802C654C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6550
  if (crb(c,2)) { goto L_802C6588; } // 802C6554
  fcmp(c,0,c->f[10],c->f[0]); // 802C6558
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C655C
  if (crb(c,2)) { goto L_802C6588; } // 802C6560
  fcmp(c,0,c->f[11],c->f[0]); // 802C6564
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6568
  if (crb(c,2)) { goto L_802C6588; } // 802C656C
  fcmp(c,0,c->f[12],c->f[0]); // 802C6570
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6574
  if (crb(c,2)) { goto L_802C6588; } // 802C6578
  fcmp(c,0,c->f[13],c->f[0]); // 802C657C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6580
  if (!crb(c,2)) { goto L_802C661C; } // 802C6584
L_802C6588:;
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6588
  {uint32_t ea=c->r[2]+0xFFFFAC14u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C658C
L_802C6590:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 802C6590
  cmps(c,0,(int32_t)c->r[0],46); // 802C6594
  if (!crb(c,0)) { goto L_802C66C4; } // 802C6598
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[1]); // 802C659C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[1]); // 802C65A0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[1]); // 802C65A4
  fcmp(c,0,c->f[5],c->f[0]); // 802C65A8
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[1]); // 802C65AC
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[1]); // 802C65B0
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[1]); // 802C65B4
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[1]); // 802C65B8
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[1]); // 802C65BC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[1]); // 802C65C0
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[1]); // 802C65C4
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[1]); // 802C65C8
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[1]); // 802C65CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C65D0
  c->r[5]=c->r[5]+0x00000001u; // 802C65D4
  if (crb(c,2)) { IRQCHK(c); goto L_802C6590; } // 802C65D8
  fcmp(c,0,c->f[9],c->f[0]); // 802C65DC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C65E0
  if (crb(c,2)) { IRQCHK(c); goto L_802C6590; } // 802C65E4
  fcmp(c,0,c->f[10],c->f[0]); // 802C65E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C65EC
  if (crb(c,2)) { IRQCHK(c); goto L_802C6590; } // 802C65F0
  fcmp(c,0,c->f[11],c->f[0]); // 802C65F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C65F8
  if (crb(c,2)) { IRQCHK(c); goto L_802C6590; } // 802C65FC
  fcmp(c,0,c->f[12],c->f[0]); // 802C6600
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6604
  if (crb(c,2)) { IRQCHK(c); goto L_802C6590; } // 802C6608
  fcmp(c,0,c->f[13],c->f[0]); // 802C660C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802C6610
  if (crb(c,2)) { IRQCHK(c); goto L_802C6590; } // 802C6614
  goto L_802C66C4; // 802C6618
L_802C661C:;
  {uint32_t ea=c->r[2]+0xFFFFAC18u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C661C
  fcmp(c,0,c->f[5],c->f[1]); // 802C6620
  if (!crb(c,0)) { goto L_802C66C4; } // 802C6624
  fcmp(c,0,c->f[9],c->f[1]); // 802C6628
  if (!crb(c,0)) { goto L_802C66C4; } // 802C662C
  fcmp(c,0,c->f[10],c->f[1]); // 802C6630
  if (!crb(c,0)) { goto L_802C66C4; } // 802C6634
  fcmp(c,0,c->f[11],c->f[1]); // 802C6638
  if (!crb(c,0)) { goto L_802C66C4; } // 802C663C
  fcmp(c,0,c->f[12],c->f[1]); // 802C6640
  if (!crb(c,0)) { goto L_802C66C4; } // 802C6644
  fcmp(c,0,c->f[13],c->f[1]); // 802C6648
  if (!crb(c,0)) { goto L_802C66C4; } // 802C664C
  {uint32_t ea=c->r[2]+0xFFFFAC1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6650
L_802C6654:;
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[0]); // 802C6654
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802C6658
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 802C665C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802C6660
  fcmp(c,0,c->f[5],c->f[1]); // 802C6664
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[0]); // 802C6668
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[0]); // 802C666C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[0]); // 802C6670
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[0]); // 802C6674
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[0]); // 802C6678
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802C667C
  c->f[11]=c->ps1[11]=S(c->f[11]*c->f[0]); // 802C6680
  c->f[12]=c->ps1[12]=S(c->f[12]*c->f[0]); // 802C6684
  c->f[13]=c->ps1[13]=S(c->f[13]*c->f[0]); // 802C6688
  if (!crb(c,0)) { goto L_802C66C4; } // 802C668C
  fcmp(c,0,c->f[9],c->f[1]); // 802C6690
  if (!crb(c,0)) { goto L_802C66C4; } // 802C6694
  fcmp(c,0,c->f[10],c->f[1]); // 802C6698
  if (!crb(c,0)) { goto L_802C66C4; } // 802C669C
  fcmp(c,0,c->f[11],c->f[1]); // 802C66A0
  if (!crb(c,0)) { goto L_802C66C4; } // 802C66A4
  fcmp(c,0,c->f[12],c->f[1]); // 802C66A8
  if (!crb(c,0)) { goto L_802C66C4; } // 802C66AC
  fcmp(c,0,c->f[13],c->f[1]); // 802C66B0
  if (!crb(c,0)) { goto L_802C66C4; } // 802C66B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 802C66B8
  cmps(c,0,(int32_t)c->r[0],-17); // 802C66BC
  if (crb(c,1)) { IRQCHK(c); goto L_802C6654; } // 802C66C0
L_802C66C4:;
  {uint32_t ea=c->r[2]+0xFFFFAC20u; c->f[5]=c->ps1[5]=RF32(ea);} // 802C66C4
  c->r[9]=c->r[5]+0x00000011u; // 802C66C8
  c->r[0]=c->r[3]+0x00000006u; // 802C66CC
  c->r[7]=0u+0xCC010000u; // 802C66D0
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 802C66D4
  c->r[5]=rotl(c->r[9],22)&0x00C00000u; // 802C66D8
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 802C66DC
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 802C66E0
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[3]); // 802C66E4
  c->r[8]=0u+0x00000061u; // 802C66E8
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802C66EC
  c->r[0]=c->r[3]+0x00000007u; // 802C66F0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802C66F4
  c->r[6]=rotl(c->r[9],20)&0x00C00000u; // 802C66F8
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[7]); // 802C66FC
  c->r[6]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[6]&~0xFF000000u); // 802C6700
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[2]);} // 802C6704
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802C6708
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802C670C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[4]);} // 802C6710
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[6]); // 802C6714
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[8]); // 802C6718
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 802C671C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C6720
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802C6724
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 802C6728
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 802C672C
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 802C6730
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802C6734
  c->r[0]=c->r[5]|c->r[0]; // 802C6738
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802C673C
  c->r[0]=c->r[3]+0x00000008u; // 802C6740
  c->r[4]=rotl(c->r[9],18)&0x00C00000u; // 802C6744
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[2]);} // 802C6748
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 802C674C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 802C6750
  c->r[3]=R32(c->r[1]+0x00000024u); // 802C6754
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 802C6758
  c->r[5]=rotl(c->r[3],11)&0x003FF800u; // 802C675C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802C6760
  c->r[5]=(rotl(c->r[0],0)&0x000007FFu)|(c->r[5]&~0x000007FFu); // 802C6764
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 802C6768
  c->r[5]=c->r[6]|c->r[5]; // 802C676C
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 802C6770
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 802C6774
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C6778
  W32(c->r[7]+0xFFFF8000u,c->r[5]); // 802C677C
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 802C6780
  c->r[0]=(rotl(c->r[3],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 802C6784
  W8(c->r[7]+0xFFFF8000u,c->r[8]); // 802C6788
  c->r[0]=c->r[4]|c->r[0]; // 802C678C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802C6790
  c->r[1]=c->r[1]+0x00000040u; // 802C6794
  return; // 802C6798
}

// GDResetCurrentMtx__Q34nw4r3g3d4fifoFv
void f_802C679C(Ctx* __restrict c) {
  trace_call(0x802C679Cu);
  c->r[8]=0u+0xCC010000u; // 802C679C
  c->r[9]=0u+0x00000008u; // 802C67A0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 802C67A4
  c->r[0]=0u+0x00000030u; // 802C67A8
  c->r[4]=0u+0x3CF40000u; // 802C67AC
  c->r[3]=0u+0x00F40000u; // 802C67B0
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 802C67B4
  c->r[7]=c->r[4]+0xFFFFCF00u; // 802C67B8
  c->r[5]=c->r[3]+0xFFFFCF3Cu; // 802C67BC
  c->r[6]=0u+0x00000040u; // 802C67C0
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 802C67C4
  c->r[4]=0u+0x00000010u; // 802C67C8
  c->r[3]=0u+0x00000001u; // 802C67CC
  c->r[0]=0u+0x00001018u; // 802C67D0
  W8(c->r[8]+0xFFFF8000u,c->r[9]); // 802C67D4
  W8(c->r[8]+0xFFFF8000u,c->r[6]); // 802C67D8
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 802C67DC
  W8(c->r[8]+0xFFFF8000u,c->r[4]); // 802C67E0
  W16(c->r[8]+0xFFFF8000u,c->r[3]); // 802C67E4
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 802C67E8
  W32(c->r[8]+0xFFFF8000u,c->r[7]); // 802C67EC
  W32(c->r[8]+0xFFFF8000u,c->r[5]); // 802C67F0
  return; // 802C67F4
}

// GDSetCurrentMtx__Q34nw4r3g3d4fifoFPCUl
void f_802C67F8(Ctx* __restrict c) {
  trace_call(0x802C67F8u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 802C67F8
  c->r[5]=0u+0xCC010000u; // 802C67FC
  c->r[0]=0u+0x00000010u; // 802C6800
  c->r[6]=R32(c->r[3]+0x00000004u); // 802C6804
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 802C6808
  c->r[4]=0u+0x00000001u; // 802C680C
  c->r[8]=R32(c->r[3]+0x00000008u); // 802C6810
  c->r[7]=rotl(c->r[7],6)&0xFFFFFFC0u; // 802C6814
  c->r[6]=rotl(c->r[6],12)&0xFFFFF000u; // 802C6818
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 802C681C
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C6820
  c->r[6]=c->r[7]|c->r[6]; // 802C6824
  c->r[0]=0u+0x00001018u; // 802C6828
  c->r[8]=rotl(c->r[8],18)&0xFFFC0000u; // 802C682C
  c->r[10]=rotl(c->r[9],24)&0xFF000000u; // 802C6830
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C6834
  c->r[9]=c->r[8]|c->r[6]; // 802C6838
  c->r[7]=R32(c->r[3]+0x00000018u); // 802C683C
  c->r[6]=R32(c->r[3]+0x00000010u); // 802C6840
  c->r[9]=c->r[10]|c->r[9]; // 802C6844
  c->r[8]=R32(c->r[3]+0x0000001Cu); // 802C6848
  c->r[3]=rotl(c->r[4],6)&0xFFFFFFC0u; // 802C684C
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C6850
  c->r[0]=c->r[6]|c->r[3]; // 802C6854
  c->r[4]=rotl(c->r[7],12)&0xFFFFF000u; // 802C6858
  c->r[3]=rotl(c->r[8],18)&0xFFFC0000u; // 802C685C
  c->r[0]=c->r[4]|c->r[0]; // 802C6860
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 802C6864
  c->r[0]=c->r[3]|c->r[0]; // 802C6868
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C686C
  return; // 802C6870
}

// GDLoadTexMtxImm3x3__Q34nw4r3g3d4fifoFRCQ34nw4r4math5MTX33Ul
void f_802C6874(Ctx* __restrict c) {
  trace_call(0x802C6874u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6874
  c->r[0]=c->lr; // 802C6878
  {uint32_t ea=c->r[2]+0xFFFFAC24u; c->f[6]=c->ps1[6]=RF32(ea);} // 802C687C
  c->r[5]=0u+0x00000000u; // 802C6880
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C6884
  {uint32_t ea=c->r[3]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 802C6888
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802C688C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 802C6890
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802C6894
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 802C6898
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C689C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C68A0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C68A4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C68A8
  c->r[3]=c->r[1]+0x00000008u; // 802C68AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[9]);} // 802C68B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[8]);} // 802C68B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 802C68B8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 802C68BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 802C68C0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 802C68C4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 802C68C8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[6]);} // 802C68CC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 802C68D0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 802C68D4
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802C68D8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 802C68DC
  c->lr=0x802C68E4u; f_80349400(c); // 802C68E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C68E4
  c->lr=c->r[0]; // 802C68E8
  c->r[1]=c->r[1]+0x00000040u; // 802C68EC
  return; // 802C68F0
}

// Copy32ByteBlocks__Q34nw4r3g3d6detailFPvPCvUl
void f_802C68F4(Ctx* __restrict c) {
  trace_call(0x802C68F4u);
  c->r[5]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[5]); // 802C68F4
  if (crb(c,2)) return; // 802C68F8
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 802C68FC
  c->ctr=c->r[0]; // 802C6900
  if (crb(c,2)) { goto L_802C699C; } // 802C6904
L_802C6908:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 802C6908
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 802C690C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 802C6910
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 802C6914
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 802C6918
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 802C691C
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 802C6920
  {uint32_t ea=c->r[4]+0x00000020u; c->f[0]=RF64(ea);} // 802C6924
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 802C6928
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=RF64(ea);} // 802C692C
  {uint32_t ea=c->r[3]+0x00000020u; WF64(ea,c->f[0]);} // 802C6930
  {uint32_t ea=c->r[4]+0x00000030u; c->f[0]=RF64(ea);} // 802C6934
  {uint32_t ea=c->r[3]+0x00000028u; WF64(ea,c->f[1]);} // 802C6938
  {uint32_t ea=c->r[4]+0x00000038u; c->f[1]=RF64(ea);} // 802C693C
  {uint32_t ea=c->r[3]+0x00000030u; WF64(ea,c->f[0]);} // 802C6940
  {uint32_t ea=c->r[4]+0x00000040u; c->f[0]=RF64(ea);} // 802C6944
  {uint32_t ea=c->r[3]+0x00000038u; WF64(ea,c->f[1]);} // 802C6948
  {uint32_t ea=c->r[4]+0x00000048u; c->f[1]=RF64(ea);} // 802C694C
  {uint32_t ea=c->r[3]+0x00000040u; WF64(ea,c->f[0]);} // 802C6950
  {uint32_t ea=c->r[4]+0x00000050u; c->f[0]=RF64(ea);} // 802C6954
  {uint32_t ea=c->r[3]+0x00000048u; WF64(ea,c->f[1]);} // 802C6958
  {uint32_t ea=c->r[4]+0x00000058u; c->f[1]=RF64(ea);} // 802C695C
  {uint32_t ea=c->r[3]+0x00000050u; WF64(ea,c->f[0]);} // 802C6960
  {uint32_t ea=c->r[4]+0x00000060u; c->f[0]=RF64(ea);} // 802C6964
  {uint32_t ea=c->r[3]+0x00000058u; WF64(ea,c->f[1]);} // 802C6968
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=RF64(ea);} // 802C696C
  {uint32_t ea=c->r[3]+0x00000060u; WF64(ea,c->f[0]);} // 802C6970
  {uint32_t ea=c->r[4]+0x00000070u; c->f[0]=RF64(ea);} // 802C6974
  {uint32_t ea=c->r[3]+0x00000068u; WF64(ea,c->f[1]);} // 802C6978
  {uint32_t ea=c->r[4]+0x00000078u; c->f[1]=RF64(ea);} // 802C697C
  c->r[4]=c->r[4]+0x00000080u; // 802C6980
  {uint32_t ea=c->r[3]+0x00000070u; WF64(ea,c->f[0]);} // 802C6984
  {uint32_t ea=c->r[3]+0x00000078u; WF64(ea,c->f[1]);} // 802C6988
  c->r[3]=c->r[3]+0x00000080u; // 802C698C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C6908; } // 802C6990
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 802C6994
  if (crb(c,2)) return; // 802C6998
L_802C699C:;
  c->ctr=c->r[5]; // 802C699C
L_802C69A0:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 802C69A0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=RF64(ea);} // 802C69A4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 802C69A8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=RF64(ea);} // 802C69AC
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[1]);} // 802C69B0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 802C69B4
  c->r[4]=c->r[4]+0x00000020u; // 802C69B8
  {uint32_t ea=c->r[3]+0x00000010u; WF64(ea,c->f[0]);} // 802C69BC
  {uint32_t ea=c->r[3]+0x00000018u; WF64(ea,c->f[1]);} // 802C69C0
  c->r[3]=c->r[3]+0x00000020u; // 802C69C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C69A0; } // 802C69C8
  return; // 802C69CC
}

// ZeroMemory32ByteBlocks__Q34nw4r3g3d6detailFPvUl
void f_802C69D0(Ctx* __restrict c) {
  trace_call(0x802C69D0u);
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; cr0(c,c->r[4]); // 802C69D0
  {uint32_t ea=c->r[2]+0xFFFFAC28u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C69D4
  if (crb(c,2)) return; // 802C69D8
  c->r[0]=rotl(c->r[4],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 802C69DC
  c->ctr=c->r[0]; // 802C69E0
  if (crb(c,2)) { goto L_802C6A78; } // 802C69E4
L_802C69E8:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802C69E8
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 802C69EC
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 802C69F0
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 802C69F4
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,0,ea,0,0);} // 802C69F8
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,0,ea,0,0);} // 802C69FC
  {uint32_t ea=c->r[3]+0x00000030u; psq_store(c,0,ea,0,0);} // 802C6A00
  {uint32_t ea=c->r[3]+0x00000038u; psq_store(c,0,ea,0,0);} // 802C6A04
  {uint32_t ea=c->r[3]+0x00000040u; psq_store(c,0,ea,0,0);} // 802C6A08
  {uint32_t ea=c->r[3]+0x00000048u; psq_store(c,0,ea,0,0);} // 802C6A0C
  {uint32_t ea=c->r[3]+0x00000050u; psq_store(c,0,ea,0,0);} // 802C6A10
  {uint32_t ea=c->r[3]+0x00000058u; psq_store(c,0,ea,0,0);} // 802C6A14
  {uint32_t ea=c->r[3]+0x00000060u; psq_store(c,0,ea,0,0);} // 802C6A18
  {uint32_t ea=c->r[3]+0x00000068u; psq_store(c,0,ea,0,0);} // 802C6A1C
  {uint32_t ea=c->r[3]+0x00000070u; psq_store(c,0,ea,0,0);} // 802C6A20
  {uint32_t ea=c->r[3]+0x00000078u; psq_store(c,0,ea,0,0);} // 802C6A24
  {uint32_t ea=c->r[3]+0x00000080u; psq_store(c,0,ea,0,0);} // 802C6A28
  {uint32_t ea=c->r[3]+0x00000088u; psq_store(c,0,ea,0,0);} // 802C6A2C
  {uint32_t ea=c->r[3]+0x00000090u; psq_store(c,0,ea,0,0);} // 802C6A30
  {uint32_t ea=c->r[3]+0x00000098u; psq_store(c,0,ea,0,0);} // 802C6A34
  {uint32_t ea=c->r[3]+0x000000A0u; psq_store(c,0,ea,0,0);} // 802C6A38
  {uint32_t ea=c->r[3]+0x000000A8u; psq_store(c,0,ea,0,0);} // 802C6A3C
  {uint32_t ea=c->r[3]+0x000000B0u; psq_store(c,0,ea,0,0);} // 802C6A40
  {uint32_t ea=c->r[3]+0x000000B8u; psq_store(c,0,ea,0,0);} // 802C6A44
  {uint32_t ea=c->r[3]+0x000000C0u; psq_store(c,0,ea,0,0);} // 802C6A48
  {uint32_t ea=c->r[3]+0x000000C8u; psq_store(c,0,ea,0,0);} // 802C6A4C
  {uint32_t ea=c->r[3]+0x000000D0u; psq_store(c,0,ea,0,0);} // 802C6A50
  {uint32_t ea=c->r[3]+0x000000D8u; psq_store(c,0,ea,0,0);} // 802C6A54
  {uint32_t ea=c->r[3]+0x000000E0u; psq_store(c,0,ea,0,0);} // 802C6A58
  {uint32_t ea=c->r[3]+0x000000E8u; psq_store(c,0,ea,0,0);} // 802C6A5C
  {uint32_t ea=c->r[3]+0x000000F0u; psq_store(c,0,ea,0,0);} // 802C6A60
  {uint32_t ea=c->r[3]+0x000000F8u; psq_store(c,0,ea,0,0);} // 802C6A64
  c->r[3]=c->r[3]+0x00000100u; // 802C6A68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C69E8; } // 802C6A6C
  c->r[4]=c->r[4]&0x00000007u; cr0(c,c->r[4]); // 802C6A70
  if (crb(c,2)) return; // 802C6A74
L_802C6A78:;
  c->ctr=c->r[4]; // 802C6A78
L_802C6A7C:;
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802C6A7C
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,0,0);} // 802C6A80
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,0,ea,0,0);} // 802C6A84
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,0,ea,0,0);} // 802C6A88
  c->r[3]=c->r[3]+0x00000020u; // 802C6A8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C6A7C; } // 802C6A90
  return; // 802C6A94
}

// EnvironmentMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_802C6A98(Ctx* __restrict c) {
  trace_call(0x802C6A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6A98
  c->r[0]=c->lr; // 802C6A9C
  cmps(c,0,(int32_t)c->r[3],0); // 802C6AA0
  W32(c->r[1]+0x00000064u,c->r[0]); // 802C6AA4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 802C6AA8
  c->r[31]=c->r[3]|c->r[3]; // 802C6AAC
  W32(c->r[1]+0x00000058u,c->r[30]); // 802C6AB0
  W32(c->r[1]+0x00000054u,c->r[29]); // 802C6AB4
  if (crb(c,2)) { goto L_802C6E60; } // 802C6AB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 802C6ABC
  cmps(c,1,(int32_t)c->r[0],0); // 802C6AC0
  if (crb(c,4)) { goto L_802C6B74; } // 802C6AC4
  cmps(c,0,(int32_t)c->r[0],32); // 802C6AC8
  if (!crb(c,0)) { goto L_802C6B74; } // 802C6ACC
  if (!crb(c,0)) { goto L_802C6AF0; } // 802C6AD0
  if (crb(c,4)) { goto L_802C6AF0; } // 802C6AD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6AD8
  c->r[3]=0u+0x80510000u; // 802C6ADC
  c->r[3]=c->r[3]+0x00001E20u; // 802C6AE0
  c->r[3]=c->r[3]+c->r[0]; // 802C6AE4
  c->r[29]=c->r[3]+0x00000034u; // 802C6AE8
  goto L_802C6AF4; // 802C6AEC
L_802C6AF0:;
  c->r[29]=0u+0x00000000u; // 802C6AF0
L_802C6AF4:;
  c->r[30]=0u+0x80510000u; // 802C6AF4
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C6AF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C6AFC
  if (!crb(c,2)) { goto L_802C6B2C; } // 802C6B00
  c->r[3]=c->r[30]+0x00001E20u; // 802C6B04
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C6B08
  c->r[4]=c->r[3]+0x00000004u; // 802C6B0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6B10
  c->r[3]=c->r[3]+c->r[0]; // 802C6B14
  c->r[3]=c->r[3]+0x00000034u; // 802C6B18
  c->lr=0x802C6B20u; f_80353858(c); // 802C6B1C
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C6B20
  c->r[0]=c->r[0]|0x00000001u; // 802C6B24
  W16(c->r[30]+0x00001E20u,c->r[0]); // 802C6B28
L_802C6B2C:;
  c->r[30]=0u+0x80510000u; // 802C6B2C
  c->r[3]=c->r[29]|c->r[29]; // 802C6B30
  c->r[30]=c->r[30]+0x00001E20u; // 802C6B34
  c->r[5]=c->r[31]|c->r[31]; // 802C6B38
  c->r[4]=c->r[30]+0x00000004u; // 802C6B3C
  c->lr=0x802C6B44u; f_803535F4(c); // 802C6B40
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6B44
  c->r[4]=c->r[31]|c->r[31]; // 802C6B48
  c->r[5]=c->r[31]|c->r[31]; // 802C6B4C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802C6B50
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C6B54
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C6B58
  c->r[0]=R16(c->r[30]+0x00000002u); // 802C6B5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6B60
  c->r[3]=c->r[30]+c->r[0]; // 802C6B64
  c->r[3]=c->r[3]+0x00001434u; // 802C6B68
  c->lr=0x802C6B70u; f_803535F4(c); // 802C6B6C
  goto L_802C6E60; // 802C6B70
L_802C6B74:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 802C6B74
  cmps(c,1,(int32_t)c->r[0],0); // 802C6B78
  if (crb(c,4)) { goto L_802C6E40; } // 802C6B7C
  cmps(c,0,(int32_t)c->r[0],128); // 802C6B80
  if (!crb(c,0)) { goto L_802C6E40; } // 802C6B84
  if (crb(c,4)) { goto L_802C6BA8; } // 802C6B88
  if (!crb(c,0)) { goto L_802C6BA8; } // 802C6B8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 802C6B90
  c->r[3]=0u+0x80510000u; // 802C6B94
  c->r[3]=c->r[3]+0xFFFFF3F4u; // 802C6B98
  c->r[3]=c->r[3]+c->r[0]; // 802C6B9C
  c->r[3]=c->r[3]+0x0000002Cu; // 802C6BA0
  goto L_802C6BAC; // 802C6BA4
L_802C6BA8:;
  c->r[3]=0u+0x00000000u; // 802C6BA8
L_802C6BAC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C6BAC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C6BB0
  if (crb(c,2)) { goto L_802C6E40; } // 802C6BB4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 802C6BB8
  if (crb(c,0)) { goto L_802C6BE0; } // 802C6BBC
  cmps(c,0,(int32_t)c->r[0],128); // 802C6BC0
  if (!crb(c,0)) { goto L_802C6BE0; } // 802C6BC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 802C6BC8
  c->r[3]=0u+0x80510000u; // 802C6BCC
  c->r[3]=c->r[3]+0xFFFFF3F4u; // 802C6BD0
  c->r[3]=c->r[3]+c->r[0]; // 802C6BD4
  c->r[29]=c->r[3]+0x0000002Cu; // 802C6BD8
  goto L_802C6BE4; // 802C6BDC
L_802C6BE0:;
  c->r[29]=0u+0x00000000u; // 802C6BE0
L_802C6BE4:;
  c->r[3]=c->r[29]|c->r[29]; // 802C6BE4
  c->r[4]=c->r[1]+0x00000038u; // 802C6BE8
  c->lr=0x802C6BF0u; f_802DC238(c); // 802C6BEC
  c->r[30]=0u+0x80510000u; // 802C6BF0
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C6BF4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C6BF8
  if (!crb(c,2)) { goto L_802C6C28; } // 802C6BFC
  c->r[3]=c->r[30]+0x00001E20u; // 802C6C00
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C6C04
  c->r[4]=c->r[3]+0x00000004u; // 802C6C08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6C0C
  c->r[3]=c->r[3]+c->r[0]; // 802C6C10
  c->r[3]=c->r[3]+0x00000034u; // 802C6C14
  c->lr=0x802C6C1Cu; f_80353858(c); // 802C6C18
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C6C1C
  c->r[0]=c->r[0]|0x00000001u; // 802C6C20
  W16(c->r[30]+0x00001E20u,c->r[0]); // 802C6C24
L_802C6C28:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802C6C28
  c->r[3]=0u+0x80510000u; // 802C6C2C
  c->r[3]=c->r[3]+0x00001E20u; // 802C6C30
  c->r[4]=0u+0x00000000u; // 802C6C34
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 802C6C38
  c->r[30]=c->r[3]+0x00000004u; // 802C6C3C
  if (!crb(c,2)) { goto L_802C6C50; } // 802C6C40
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 802C6C44
  if (!crb(c,2)) { goto L_802C6C50; } // 802C6C48
  c->r[4]=0u+0x00000001u; // 802C6C4C
L_802C6C50:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C6C50
  if (!crb(c,2)) { goto L_802C6C80; } // 802C6C54
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6C58
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6C5C
  fcmp(c,0,c->f[1],c->f[0]); // 802C6C60
  if (!crb(c,2)) { goto L_802C6D00; } // 802C6C64
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6C68
  fcmp(c,0,c->f[1],c->f[0]); // 802C6C6C
  if (!crb(c,2)) { goto L_802C6D00; } // 802C6C70
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6C74
  fcmp(c,0,c->f[1],c->f[0]); // 802C6C78
  if (!crb(c,2)) { goto L_802C6D00; } // 802C6C7C
L_802C6C80:;
  c->r[3]=c->r[29]|c->r[29]; // 802C6C80
  c->r[4]=c->r[1]+0x00000038u; // 802C6C84
  c->lr=0x802C6C8Cu; f_802DC21C(c); // 802C6C88
  c->r[3]=c->r[1]+0x00000038u; // 802C6C8C
  c->r[4]=c->r[30]|c->r[30]; // 802C6C90
  c->r[5]=c->r[3]|c->r[3]; // 802C6C94
  c->lr=0x802C6C9Cu; f_8026CFE0(c); // 802C6C98
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6C9C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C6CA0
  c->f[6]=-c->f[0]; // 802C6CA4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6CA8
  c->f[4]=-c->f[2]; // 802C6CAC
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6CB0
  c->f[5]=-c->f[1]; // 802C6CB4
  c->f[3]=c->ps1[3]=S(c->f[6]); // 802C6CB8
  c->f[1]=c->ps1[1]=S(c->f[4]); // 802C6CBC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[6]);} // 802C6CC0
  c->f[2]=c->ps1[2]=S(c->f[5]); // 802C6CC4
  fcmp(c,0,c->f[0],c->f[3]); // 802C6CC8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 802C6CCC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 802C6CD0
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 802C6CD4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 802C6CD8
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 802C6CDC
  if (!crb(c,2)) { goto L_802C6D10; } // 802C6CE0
  fcmp(c,0,c->f[0],c->f[2]); // 802C6CE4
  if (!crb(c,2)) { goto L_802C6D10; } // 802C6CE8
  fcmp(c,0,c->f[0],c->f[1]); // 802C6CEC
  if (!crb(c,2)) { goto L_802C6D10; } // 802C6CF0
  {uint32_t ea=c->r[2]+0xFFFFAC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6CF4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 802C6CF8
  goto L_802C6D10; // 802C6CFC
L_802C6D00:;
  c->r[3]=c->r[1]+0x00000038u; // 802C6D00
  c->r[4]=c->r[30]|c->r[30]; // 802C6D04
  c->r[5]=c->r[3]|c->r[3]; // 802C6D08
  c->lr=0x802C6D10u; f_8026CFE0(c); // 802C6D0C
L_802C6D10:;
  c->r[3]=c->r[1]+0x00000038u; // 802C6D10
  c->r[4]=c->r[3]|c->r[3]; // 802C6D14
  c->lr=0x802C6D1Cu; f_80354444(c); // 802C6D18
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6D1C
  {uint32_t ea=c->r[2]+0xFFFFAC3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6D20
  c->f[1]=std::fabs(c->f[1]); // 802C6D24
  fcmp(c,0,c->f[1],c->f[0]); // 802C6D28
  if (!crb(c,0)) { goto L_802C6D74; } // 802C6D2C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6D30
  c->f[1]=std::fabs(c->f[1]); // 802C6D34
  fcmp(c,0,c->f[1],c->f[0]); // 802C6D38
  if (!crb(c,0)) { goto L_802C6D74; } // 802C6D3C
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6D40
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6D44
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 802C6D48
  fcmp(c,0,c->f[0],c->f[1]); // 802C6D4C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 802C6D50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802C6D54
  if (!crb(c,2)) { goto L_802C6D68; } // 802C6D58
  {uint32_t ea=c->r[2]+0xFFFFAC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6D5C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802C6D60
  goto L_802C6D88; // 802C6D64
L_802C6D68:;
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6D68
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802C6D6C
  goto L_802C6D88; // 802C6D70
L_802C6D74:;
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6D74
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6D78
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[1]);} // 802C6D7C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 802C6D80
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802C6D84
L_802C6D88:;
  c->r[3]=c->r[1]+0x00000038u; // 802C6D88
  c->r[4]=c->r[1]+0x0000002Cu; // 802C6D8C
  c->r[5]=c->r[1]+0x00000020u; // 802C6D90
  c->lr=0x802C6D98u; f_803544EC(c); // 802C6D94
  c->r[3]=c->r[1]+0x00000020u; // 802C6D98
  c->r[4]=c->r[3]|c->r[3]; // 802C6D9C
  c->lr=0x802C6DA4u; f_80354444(c); // 802C6DA0
  c->r[3]=c->r[1]+0x00000020u; // 802C6DA4
  c->r[4]=c->r[1]+0x00000038u; // 802C6DA8
  c->r[5]=c->r[1]+0x00000014u; // 802C6DAC
  c->lr=0x802C6DB4u; f_803544EC(c); // 802C6DB0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DB4
  c->r[3]=c->r[31]|c->r[31]; // 802C6DB8
  c->r[4]=c->r[30]|c->r[30]; // 802C6DBC
  c->r[5]=c->r[31]|c->r[31]; // 802C6DC0
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802C6DC4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DC8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 802C6DCC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DD0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 802C6DD4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DD8
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 802C6DDC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DE0
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 802C6DE4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DE8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 802C6DEC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DF0
  c->f[0]=-c->f[0]; // 802C6DF4
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 802C6DF8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6DFC
  c->f[0]=-c->f[0]; // 802C6E00
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802C6E04
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6E08
  c->f[0]=-c->f[0]; // 802C6E0C
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802C6E10
  c->lr=0x802C6E18u; f_803535F4(c); // 802C6E14
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C6E18
  c->r[3]=0u+0x80440000u; // 802C6E1C
  c->r[4]=c->r[31]|c->r[31]; // 802C6E20
  c->r[5]=c->r[31]|c->r[31]; // 802C6E24
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802C6E28
  c->r[3]=c->r[3]+0xFFFFC558u; // 802C6E2C
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C6E30
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C6E34
  c->lr=0x802C6E3Cu; f_803535F4(c); // 802C6E38
  goto L_802C6E60; // 802C6E3C
L_802C6E40:;
  c->r[3]=0u+0x80510000u; // 802C6E40
  c->r[4]=c->r[31]|c->r[31]; // 802C6E44
  c->r[3]=c->r[3]+0x00001E20u; // 802C6E48
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C6E4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6E50
  c->r[3]=c->r[3]+c->r[0]; // 802C6E54
  c->r[3]=c->r[3]+0x00001434u; // 802C6E58
  c->lr=0x802C6E60u; f_803535C0(c); // 802C6E5C
L_802C6E60:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 802C6E60
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 802C6E64
  c->r[30]=R32(c->r[1]+0x00000058u); // 802C6E68
  c->r[29]=R32(c->r[1]+0x00000054u); // 802C6E6C
  c->lr=c->r[0]; // 802C6E70
  c->r[1]=c->r[1]+0x00000060u; // 802C6E74
  return; // 802C6E78
}

// ProjectionMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_802C6E7C(Ctx* __restrict c) {
  trace_call(0x802C6E7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6E7C
  c->r[0]=c->lr; // 802C6E80
  cmps(c,0,(int32_t)c->r[3],0); // 802C6E84
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C6E88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C6E8C
  c->r[31]=c->r[3]|c->r[3]; // 802C6E90
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C6E94
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C6E98
  W32(c->r[1]+0x00000010u,c->r[28]); // 802C6E9C
  c->r[28]=c->r[4]|c->r[4]; // 802C6EA0
  if (crb(c,2)) { goto L_802C6F88; } // 802C6EA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 802C6EA8
  cmps(c,1,(int32_t)c->r[0],0); // 802C6EAC
  if (crb(c,4)) { goto L_802C6F68; } // 802C6EB0
  cmps(c,0,(int32_t)c->r[0],32); // 802C6EB4
  if (!crb(c,0)) { goto L_802C6F68; } // 802C6EB8
  if (!crb(c,0)) { goto L_802C6EDC; } // 802C6EBC
  if (crb(c,4)) { goto L_802C6EDC; } // 802C6EC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6EC4
  c->r[3]=0u+0x80510000u; // 802C6EC8
  c->r[3]=c->r[3]+0x00001E20u; // 802C6ECC
  c->r[3]=c->r[3]+c->r[0]; // 802C6ED0
  c->r[29]=c->r[3]+0x00000034u; // 802C6ED4
  goto L_802C6EE0; // 802C6ED8
L_802C6EDC:;
  c->r[29]=0u+0x00000000u; // 802C6EDC
L_802C6EE0:;
  c->r[30]=0u+0x80510000u; // 802C6EE0
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C6EE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C6EE8
  if (!crb(c,2)) { goto L_802C6F18; } // 802C6EEC
  c->r[3]=c->r[30]+0x00001E20u; // 802C6EF0
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C6EF4
  c->r[4]=c->r[3]+0x00000004u; // 802C6EF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6EFC
  c->r[3]=c->r[3]+c->r[0]; // 802C6F00
  c->r[3]=c->r[3]+0x00000034u; // 802C6F04
  c->lr=0x802C6F0Cu; f_80353858(c); // 802C6F08
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C6F0C
  c->r[0]=c->r[0]|0x00000001u; // 802C6F10
  W16(c->r[30]+0x00001E20u,c->r[0]); // 802C6F14
L_802C6F18:;
  c->r[30]=0u+0x80510000u; // 802C6F18
  c->r[3]=c->r[29]|c->r[29]; // 802C6F1C
  c->r[30]=c->r[30]+0x00001E20u; // 802C6F20
  c->r[5]=c->r[31]|c->r[31]; // 802C6F24
  c->r[4]=c->r[30]+0x00000004u; // 802C6F28
  c->lr=0x802C6F30u; f_803535F4(c); // 802C6F2C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 802C6F30
  cmps(c,0,(int32_t)c->r[0],32); // 802C6F34
  if (!crb(c,0)) { goto L_802C6F54; } // 802C6F38
  cmps(c,0,(int32_t)c->r[0],0); // 802C6F3C
  if (crb(c,0)) { goto L_802C6F54; } // 802C6F40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6F44
  c->r[3]=c->r[30]+c->r[0]; // 802C6F48
  c->r[3]=c->r[3]+0x00000E34u; // 802C6F4C
  goto L_802C6F58; // 802C6F50
L_802C6F54:;
  c->r[3]=0u+0x00000000u; // 802C6F54
L_802C6F58:;
  c->r[4]=c->r[31]|c->r[31]; // 802C6F58
  c->r[5]=c->r[31]|c->r[31]; // 802C6F5C
  c->lr=0x802C6F64u; f_803535F4(c); // 802C6F60
  goto L_802C6F88; // 802C6F64
L_802C6F68:;
  c->r[3]=0u+0x80510000u; // 802C6F68
  c->r[4]=c->r[31]|c->r[31]; // 802C6F6C
  c->r[3]=c->r[3]+0x00001E20u; // 802C6F70
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C6F74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C6F78
  c->r[3]=c->r[3]+c->r[0]; // 802C6F7C
  c->r[3]=c->r[3]+0x00000E34u; // 802C6F80
  c->lr=0x802C6F88u; f_803535C0(c); // 802C6F84
L_802C6F88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C6F88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C6F8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C6F90
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C6F94
  c->r[28]=R32(c->r[1]+0x00000010u); // 802C6F98
  c->lr=c->r[0]; // 802C6F9C
  c->r[1]=c->r[1]+0x00000020u; // 802C6FA0
  return; // 802C6FA4
}

// EnvironmentSpecularMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_802C6FA8(Ctx* __restrict c) {
  trace_call(0x802C6FA8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C6FA8
  c->r[0]=c->lr; // 802C6FAC
  cmps(c,0,(int32_t)c->r[3],0); // 802C6FB0
  W32(c->r[1]+0x00000094u,c->r[0]); // 802C6FB4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 802C6FB8
  W32(c->r[1]+0x00000088u,c->r[30]); // 802C6FBC
  c->r[30]=c->r[5]|c->r[5]; // 802C6FC0
  W32(c->r[1]+0x00000084u,c->r[29]); // 802C6FC4
  c->r[29]=c->r[4]|c->r[4]; // 802C6FC8
  W32(c->r[1]+0x00000080u,c->r[28]); // 802C6FCC
  c->r[28]=c->r[3]|c->r[3]; // 802C6FD0
  if (crb(c,2)) { goto L_802C73D4; } // 802C6FD4
  c->r[31]=0u+0x80510000u; // 802C6FD8
  c->r[4]=c->r[31]+0x00001E20u; // 802C6FDC
  c->r[0]=R16(c->r[31]+0x00001E20u); // 802C6FE0
  c->r[3]=R16(c->r[4]+0x00000002u); // 802C6FE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C6FE8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802C6FEC
  c->r[3]=c->r[4]+c->r[0]; // 802C6FF0
  c->r[3]=c->r[3]+0x00000034u; // 802C6FF4
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C6FF8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C6FFC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7000
  c->f[2]=-c->f[2]; // 802C7004
  c->f[1]=-c->f[1]; // 802C7008
  c->f[0]=-c->f[0]; // 802C700C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 802C7010
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 802C7014
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 802C7018
  if (!crb(c,2)) { goto L_802C7034; } // 802C701C
  c->r[4]=c->r[4]+0x00000004u; // 802C7020
  c->lr=0x802C7028u; f_80353858(c); // 802C7024
  c->r[0]=R16(c->r[31]+0x00001E20u); // 802C7028
  c->r[0]=c->r[0]|0x00000001u; // 802C702C
  W16(c->r[31]+0x00001E20u,c->r[0]); // 802C7030
L_802C7034:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 802C7034
  c->r[3]=0u+0x80510000u; // 802C7038
  cmps(c,1,(int32_t)c->r[0],0); // 802C703C
  c->r[3]=c->r[3]+0x00001E20u; // 802C7040
  c->r[31]=c->r[3]+0x00000004u; // 802C7044
  if (crb(c,4)) { goto L_802C7264; } // 802C7048
  cmps(c,0,(int32_t)c->r[0],128); // 802C704C
  if (!crb(c,0)) { goto L_802C7264; } // 802C7050
  if (crb(c,4)) { goto L_802C7074; } // 802C7054
  if (!crb(c,0)) { goto L_802C7074; } // 802C7058
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 802C705C
  c->r[3]=0u+0x80510000u; // 802C7060
  c->r[3]=c->r[3]+0xFFFFF3F4u; // 802C7064
  c->r[3]=c->r[3]+c->r[0]; // 802C7068
  c->r[3]=c->r[3]+0x0000002Cu; // 802C706C
  goto L_802C7078; // 802C7070
L_802C7074:;
  c->r[3]=0u+0x00000000u; // 802C7074
L_802C7078:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C7078
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C707C
  if (crb(c,2)) { goto L_802C7264; } // 802C7080
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; cr0(c,c->r[0]); // 802C7084
  if (crb(c,0)) { goto L_802C70AC; } // 802C7088
  cmps(c,0,(int32_t)c->r[0],128); // 802C708C
  if (!crb(c,0)) { goto L_802C70AC; } // 802C7090
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 802C7094
  c->r[3]=0u+0x80510000u; // 802C7098
  c->r[3]=c->r[3]+0xFFFFF3F4u; // 802C709C
  c->r[3]=c->r[3]+c->r[0]; // 802C70A0
  c->r[29]=c->r[3]+0x0000002Cu; // 802C70A4
  goto L_802C70B0; // 802C70A8
L_802C70AC:;
  c->r[29]=0u+0x00000000u; // 802C70AC
L_802C70B0:;
  c->r[3]=c->r[29]|c->r[29]; // 802C70B0
  c->r[4]=c->r[1]+0x00000044u; // 802C70B4
  c->lr=0x802C70BCu; f_802DC238(c); // 802C70B8
  c->r[4]=R32(c->r[29]+0x00000000u); // 802C70BC
  c->r[3]=0u+0x00000000u; // 802C70C0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802C70C4
  if (!crb(c,2)) { goto L_802C70D8; } // 802C70C8
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802C70CC
  if (!crb(c,2)) { goto L_802C70D8; } // 802C70D0
  c->r[3]=0u+0x00000001u; // 802C70D4
L_802C70D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C70D8
  if (!crb(c,2)) { goto L_802C7108; } // 802C70DC
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C70E0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C70E4
  fcmp(c,0,c->f[1],c->f[0]); // 802C70E8
  if (!crb(c,2)) { goto L_802C7188; } // 802C70EC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C70F0
  fcmp(c,0,c->f[1],c->f[0]); // 802C70F4
  if (!crb(c,2)) { goto L_802C7188; } // 802C70F8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C70FC
  fcmp(c,0,c->f[1],c->f[0]); // 802C7100
  if (!crb(c,2)) { goto L_802C7188; } // 802C7104
L_802C7108:;
  c->r[3]=c->r[29]|c->r[29]; // 802C7108
  c->r[4]=c->r[1]+0x00000044u; // 802C710C
  c->lr=0x802C7114u; f_802DC21C(c); // 802C7110
  c->r[3]=c->r[1]+0x00000044u; // 802C7114
  c->r[4]=c->r[31]|c->r[31]; // 802C7118
  c->r[5]=c->r[3]|c->r[3]; // 802C711C
  c->lr=0x802C7124u; f_8026CFE0(c); // 802C7120
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7124
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C7128
  c->f[6]=-c->f[0]; // 802C712C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C7130
  c->f[4]=-c->f[2]; // 802C7134
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7138
  c->f[5]=-c->f[1]; // 802C713C
  c->f[3]=c->ps1[3]=S(c->f[6]); // 802C7140
  c->f[1]=c->ps1[1]=S(c->f[4]); // 802C7144
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 802C7148
  c->f[2]=c->ps1[2]=S(c->f[5]); // 802C714C
  fcmp(c,0,c->f[0],c->f[3]); // 802C7150
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 802C7154
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 802C7158
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 802C715C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[2]);} // 802C7160
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 802C7164
  if (!crb(c,2)) { goto L_802C7198; } // 802C7168
  fcmp(c,0,c->f[0],c->f[2]); // 802C716C
  if (!crb(c,2)) { goto L_802C7198; } // 802C7170
  fcmp(c,0,c->f[0],c->f[1]); // 802C7174
  if (!crb(c,2)) { goto L_802C7198; } // 802C7178
  {uint32_t ea=c->r[2]+0xFFFFAC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C717C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 802C7180
  goto L_802C7198; // 802C7184
L_802C7188:;
  c->r[3]=c->r[1]+0x00000044u; // 802C7188
  c->r[4]=c->r[31]|c->r[31]; // 802C718C
  c->r[5]=c->r[3]|c->r[3]; // 802C7190
  c->lr=0x802C7198u; f_8026CFE0(c); // 802C7194
L_802C7198:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802C7198
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802C719C
  if (!crb(c,2)) { goto L_802C71B8; } // 802C71A0
  c->r[3]=c->r[1]+0x00000050u; // 802C71A4
  c->r[4]=c->r[1]+0x00000044u; // 802C71A8
  c->r[5]=c->r[1]+0x00000068u; // 802C71AC
  c->lr=0x802C71B4u; f_80354528(c); // 802C71B0
  goto L_802C71F4; // 802C71B4
L_802C71B8:;
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C71B8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C71BC
  c->f[2]=-c->f[0]; // 802C71C0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C71C4
  c->f[3]=-c->f[1]; // 802C71C8
  c->f[4]=-c->f[0]; // 802C71CC
  c->f[0]=c->ps1[0]=S(c->f[2]); // 802C71D0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802C71D4
  c->f[1]=c->ps1[1]=S(c->f[3]); // 802C71D8
  c->f[2]=c->ps1[2]=S(c->f[4]); // 802C71DC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 802C71E0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 802C71E4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[2]);} // 802C71E8
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 802C71EC
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 802C71F0
L_802C71F4:;
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C71F4
  {uint32_t ea=c->r[2]+0xFFFFAC3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C71F8
  c->f[1]=std::fabs(c->f[1]); // 802C71FC
  fcmp(c,0,c->f[1],c->f[0]); // 802C7200
  if (!crb(c,0)) { goto L_802C724C; } // 802C7204
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C7208
  c->f[1]=std::fabs(c->f[1]); // 802C720C
  fcmp(c,0,c->f[1],c->f[0]); // 802C7210
  if (!crb(c,0)) { goto L_802C724C; } // 802C7214
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C7218
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C721C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 802C7220
  fcmp(c,0,c->f[0],c->f[1]); // 802C7224
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 802C7228
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802C722C
  if (!crb(c,2)) { goto L_802C7240; } // 802C7230
  {uint32_t ea=c->r[2]+0xFFFFAC38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7234
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802C7238
  goto L_802C7310; // 802C723C
L_802C7240:;
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7240
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802C7244
  goto L_802C7310; // 802C7248
L_802C724C:;
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C724C
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7250
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 802C7254
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[1]);} // 802C7258
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 802C725C
  goto L_802C7310; // 802C7260
L_802C7264:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 802C7264
  cmps(c,1,(int32_t)c->r[0],0); // 802C7268
  if (crb(c,4)) { goto L_802C72EC; } // 802C726C
  cmps(c,0,(int32_t)c->r[0],32); // 802C7270
  if (!crb(c,0)) { goto L_802C72EC; } // 802C7274
  if (!crb(c,0)) { goto L_802C7298; } // 802C7278
  if (crb(c,4)) { goto L_802C7298; } // 802C727C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C7280
  c->r[3]=0u+0x80510000u; // 802C7284
  c->r[3]=c->r[3]+0x00001E20u; // 802C7288
  c->r[3]=c->r[3]+c->r[0]; // 802C728C
  c->r[6]=c->r[3]+0x00000034u; // 802C7290
  goto L_802C729C; // 802C7294
L_802C7298:;
  c->r[6]=0u+0x00000000u; // 802C7298
L_802C729C:;
  {uint32_t ea=c->r[6]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C729C
  c->r[3]=c->r[1]+0x00000050u; // 802C72A0
  c->r[4]=c->r[1]+0x00000038u; // 802C72A4
  c->r[5]=c->r[1]+0x00000068u; // 802C72A8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802C72AC
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C72B0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 802C72B4
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C72B8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 802C72BC
  {uint32_t ea=c->r[6]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C72C0
  {uint32_t ea=c->r[6]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C72C4
  {uint32_t ea=c->r[6]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C72C8
  c->f[2]=-c->f[2]; // 802C72CC
  c->f[1]=-c->f[1]; // 802C72D0
  c->f[0]=-c->f[0]; // 802C72D4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 802C72D8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 802C72DC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 802C72E0
  c->lr=0x802C72E8u; f_80354528(c); // 802C72E4
  goto L_802C7310; // 802C72E8
L_802C72EC:;
  c->r[3]=0u+0x80510000u; // 802C72EC
  c->r[4]=c->r[28]|c->r[28]; // 802C72F0
  c->r[3]=c->r[3]+0x00001E20u; // 802C72F4
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C72F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C72FC
  c->r[3]=c->r[3]+c->r[0]; // 802C7300
  c->r[3]=c->r[3]+0x00001434u; // 802C7304
  c->lr=0x802C730Cu; f_803535C0(c); // 802C7308
  goto L_802C73D4; // 802C730C
L_802C7310:;
  c->r[3]=c->r[1]+0x00000068u; // 802C7310
  c->r[4]=c->r[3]|c->r[3]; // 802C7314
  c->lr=0x802C731Cu; f_80354444(c); // 802C7318
  c->r[3]=c->r[1]+0x0000005Cu; // 802C731C
  c->r[4]=c->r[1]+0x00000068u; // 802C7320
  c->r[5]=c->r[1]+0x0000002Cu; // 802C7324
  c->lr=0x802C732Cu; f_803544EC(c); // 802C7328
  c->r[3]=c->r[1]+0x0000002Cu; // 802C732C
  c->r[4]=c->r[3]|c->r[3]; // 802C7330
  c->lr=0x802C7338u; f_80354444(c); // 802C7334
  c->r[3]=c->r[1]+0x00000068u; // 802C7338
  c->r[4]=c->r[1]+0x0000002Cu; // 802C733C
  c->r[5]=c->r[1]+0x00000020u; // 802C7340
  c->lr=0x802C7348u; f_803544EC(c); // 802C7344
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7348
  c->r[3]=c->r[28]|c->r[28]; // 802C734C
  c->r[4]=c->r[31]|c->r[31]; // 802C7350
  c->r[5]=c->r[28]|c->r[28]; // 802C7354
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802C7358
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C735C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 802C7360
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7364
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 802C7368
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C736C
  {uint32_t ea=c->r[28]+0x00000010u; WF32(ea,c->f[0]);} // 802C7370
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7374
  {uint32_t ea=c->r[28]+0x00000014u; WF32(ea,c->f[0]);} // 802C7378
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C737C
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[0]);} // 802C7380
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7384
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[0]);} // 802C7388
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C738C
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[0]);} // 802C7390
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C7394
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 802C7398
  c->lr=0x802C73A0u; f_803535F4(c); // 802C739C
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C73A0
  c->r[3]=0u+0x80510000u; // 802C73A4
  c->r[3]=c->r[3]+0x00001E20u; // 802C73A8
  c->r[4]=c->r[28]|c->r[28]; // 802C73AC
  {uint32_t ea=c->r[28]+0x0000002Cu; WF32(ea,c->f[0]);} // 802C73B0
  c->r[5]=c->r[28]|c->r[28]; // 802C73B4
  {uint32_t ea=c->r[28]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C73B8
  {uint32_t ea=c->r[28]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C73BC
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C73C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C73C4
  c->r[3]=c->r[3]+c->r[0]; // 802C73C8
  c->r[3]=c->r[3]+0x00001434u; // 802C73CC
  c->lr=0x802C73D4u; f_803535F4(c); // 802C73D0
L_802C73D4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 802C73D4
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 802C73D8
  c->r[30]=R32(c->r[1]+0x00000088u); // 802C73DC
  c->r[29]=R32(c->r[1]+0x00000084u); // 802C73E0
  c->r[28]=R32(c->r[1]+0x00000080u); // 802C73E4
  c->lr=c->r[0]; // 802C73E8
  c->r[1]=c->r[1]+0x00000090u; // 802C73EC
  return; // 802C73F0
}

// DefaultMapping__Q44nw4r3g3d6detail19ScnDependentMtxFuncFPQ34nw4r4math5MTX34ScSc
void f_802C73F4(Ctx* __restrict c) {
  trace_call(0x802C73F4u);
  cmps(c,0,(int32_t)c->r[3],0); // 802C73F4
  if (crb(c,2)) return; // 802C73F8
  f_80353594(c); return; // 802C73FC
  return; // 802C7400
}

// FifoSend__Q44nw4r3g3d8G3DState13IndTexMtxInfoCFv
void f_802C7404(Ctx* __restrict c) {
  trace_call(0x802C7404u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C7404
  c->r[0]=c->lr; // 802C7408
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C740C
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C7410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C7414
  c->r[31]=c->r[3]|c->r[3]; // 802C7418
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C741C
  if (crb(c,2)) { goto L_802C7430; } // 802C7420
  c->r[4]=c->r[31]+0x00000004u; // 802C7424
  c->r[3]=0u+0x00000000u; // 802C7428
  c->lr=0x802C7430u; f_802C6504(c); // 802C742C
L_802C7430:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C7430
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802C7434
  if (crb(c,2)) { goto L_802C7448; } // 802C7438
  c->r[4]=c->r[31]+0x00000034u; // 802C743C
  c->r[3]=0u+0x00000003u; // 802C7440
  c->lr=0x802C7448u; f_802C6504(c); // 802C7444
L_802C7448:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C7448
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C744C
  if (crb(c,2)) { goto L_802C7460; } // 802C7450
  c->r[4]=c->r[31]+0x00000064u; // 802C7454
  c->r[3]=0u+0x00000006u; // 802C7458
  c->lr=0x802C7460u; f_802C6504(c); // 802C745C
L_802C7460:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C7460
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C7464
  c->lr=c->r[0]; // 802C7468
  c->r[1]=c->r[1]+0x00000010u; // 802C746C
  return; // 802C7470
}

// __ct__Q34nw4r3g3d8LightObjFv
void f_802C7474(Ctx* __restrict c) {
  trace_call(0x802C7474u);
  c->r[0]=0u+0x00000000u; // 802C7474
  W32(c->r[3]+0x00000000u,c->r[0]); // 802C7478
  return; // 802C747C
}

// __dt__Q34nw4r3g3d8LightObjFv
void f_802C7480(Ctx* __restrict c) {
  trace_call(0x802C7480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C7480
  c->r[0]=c->lr; // 802C7484
  cmps(c,0,(int32_t)c->r[3],0); // 802C7488
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C748C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C7490
  c->r[31]=c->r[3]|c->r[3]; // 802C7494
  if (crb(c,2)) { goto L_802C74A8; } // 802C7498
  cmps(c,0,(int32_t)c->r[4],0); // 802C749C
  if (!crb(c,1)) { goto L_802C74A8; } // 802C74A0
  c->lr=0x802C74A8u; f_80047B20(c); // 802C74A4
L_802C74A8:;
  c->r[3]=c->r[31]|c->r[31]; // 802C74A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C74AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C74B0
  c->lr=c->r[0]; // 802C74B4
  c->r[1]=c->r[1]+0x00000010u; // 802C74B8
  return; // 802C74BC
}

// SetLightSetting__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFRCQ34nw4r3g3d12LightSetting
void f_802C74C0(Ctx* __restrict c) {
  trace_call(0x802C74C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C74C0
  c->r[0]=c->lr; // 802C74C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C74C8
  c->r[11]=c->r[1]+0x00000020u; // 802C74CC
  c->lr=0x802C74D4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C74D0
  c->r[31]=c->r[3]|c->r[3]; // 802C74D4
  c->r[26]=c->r[4]|c->r[4]; // 802C74D8
  c->lr=0x802C74E0u; f_802DC690(c); // 802C74DC
  c->r[4]=0u+0x80510000u; // 802C74E0
  c->r[5]=R16(c->r[26]+0x00000000u); // 802C74E4
  c->r[4]=c->r[4]+0x00001E20u; // 802C74E8
  c->r[3]=c->r[31]|c->r[31]; // 802C74EC
  c->r[0]=R16(c->r[4]+0x00000002u); // 802C74F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C74F4
  c->r[4]=c->r[4]+c->r[0]; // 802C74F8
  c->r[4]=c->r[4]+0x00000034u; // 802C74FC
  c->lr=0x802C7504u; f_802DC820(c); // 802C7500
  c->r[3]=0u+0xFFFFFFFFu; // 802C7504
  c->r[0]=0u+0x00000000u; // 802C7508
  W32(c->r[31]+0x00000010u,c->r[3]); // 802C750C
  c->r[27]=0u+0x00000000u; // 802C7510
  c->r[28]=R16(c->r[31]+0x00000000u); // 802C7514
  c->r[26]=0u+0x00000000u; // 802C7518
  W32(c->r[31]+0x00000014u,c->r[0]); // 802C751C
  c->r[29]=0u+0x00000000u; // 802C7520
  c->r[30]=0u+0x00000001u; // 802C7524
  W32(c->r[31]+0x00000018u,c->r[0]); // 802C7528
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 802C752C
  W32(c->r[31]+0x00000020u,c->r[0]); // 802C7530
  W8(c->r[31]+0x0000002Bu,c->r[3]); // 802C7534
  W8(c->r[31]+0x0000002Au,c->r[3]); // 802C7538
  W8(c->r[31]+0x00000029u,c->r[3]); // 802C753C
  W8(c->r[31]+0x00000028u,c->r[3]); // 802C7540
  W8(c->r[31]+0x00000027u,c->r[3]); // 802C7544
  W8(c->r[31]+0x00000026u,c->r[3]); // 802C7548
  W8(c->r[31]+0x00000025u,c->r[3]); // 802C754C
  W8(c->r[31]+0x00000024u,c->r[3]); // 802C7550
  goto L_802C758C; // 802C7554
L_802C7558:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 802C7558
  c->r[3]=c->r[0]+c->r[29]; // 802C755C
  c->r[0]=R32(c->r[29]+c->r[0]); // 802C7560
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C7564
  if (crb(c,2)) { goto L_802C7584; } // 802C7568
  c->r[4]=c->r[31]+c->r[27]; // 802C756C
  c->r[3]=c->r[3]+0x00000004u; // 802C7570
  W8(c->r[4]+0x00000024u,c->r[26]); // 802C7574
  c->r[4]=((c->r[27])&0x20)?0u:(c->r[30]<<((c->r[27])&31)); // 802C7578
  c->lr=0x802C7580u; f_80346C68(c); // 802C757C
  c->r[27]=c->r[27]+0x00000001u; // 802C7580
L_802C7584:;
  c->r[29]=c->r[29]+0x00000044u; // 802C7584
  c->r[26]=c->r[26]+0x00000001u; // 802C7588
L_802C758C:;
  cmpu(c,0,c->r[27],0x00000008u); // 802C758C
  if (!crb(c,0)) { goto L_802C759C; } // 802C7590
  cmpu(c,0,c->r[26],c->r[28]); // 802C7594
  if (crb(c,0)) { IRQCHK(c); goto L_802C7558; } // 802C7598
L_802C759C:;
  c->r[11]=c->r[1]+0x00000020u; // 802C759C
  c->lr=0x802C75A4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C75A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C75A4
  c->lr=c->r[0]; // 802C75A8
  c->r[1]=c->r[1]+0x00000020u; // 802C75AC
  return; // 802C75B0
}

// LoadLightSet__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@10LightStateFiPUlPUlPUlPUlPQ34nw4r3g3d11AmbLightObj
void f_802C75B4(Ctx* __restrict c) {
  trace_call(0x802C75B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C75B4
  c->r[0]=c->lr; // 802C75B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C75BC
  c->r[11]=c->r[1]+0x00000040u; // 802C75C0
  c->lr=0x802C75C8u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C75C4
  cmps(c,0,(int32_t)c->r[4],0); // 802C75C8
  c->r[20]=c->r[3]|c->r[3]; // 802C75CC
  c->r[21]=c->r[5]|c->r[5]; // 802C75D0
  c->r[22]=c->r[6]|c->r[6]; // 802C75D4
  c->r[23]=c->r[7]|c->r[7]; // 802C75D8
  c->r[24]=c->r[8]|c->r[8]; // 802C75DC
  if (crb(c,0)) { goto L_802C75EC; } // 802C75E0
  cmps(c,0,(int32_t)c->r[4],128); // 802C75E4
  if (crb(c,0)) { goto L_802C764C; } // 802C75E8
L_802C75EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802C75EC
  if (crb(c,2)) { goto L_802C75FC; } // 802C75F0
  c->r[0]=0u+0x00000000u; // 802C75F4
  W32(c->r[5]+0x00000000u,c->r[0]); // 802C75F8
L_802C75FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 802C75FC
  if (crb(c,2)) { goto L_802C760C; } // 802C7600
  c->r[0]=0u+0x00000000u; // 802C7604
  W32(c->r[6]+0x00000000u,c->r[0]); // 802C7608
L_802C760C:;
  cmps(c,0,(int32_t)c->r[7],0); // 802C760C
  if (crb(c,2)) { goto L_802C761C; } // 802C7610
  c->r[0]=0u+0x00000000u; // 802C7614
  W32(c->r[7]+0x00000000u,c->r[0]); // 802C7618
L_802C761C:;
  cmps(c,0,(int32_t)c->r[8],0); // 802C761C
  if (crb(c,2)) { goto L_802C762C; } // 802C7620
  c->r[0]=0u+0x00000000u; // 802C7624
  W32(c->r[8]+0x00000000u,c->r[0]); // 802C7628
L_802C762C:;
  cmps(c,0,(int32_t)c->r[9],0); // 802C762C
  if (crb(c,2)) { goto L_802C79B4; } // 802C7630
  c->r[0]=0u+0x000000FFu; // 802C7634
  W8(c->r[9]+0x00000003u,c->r[0]); // 802C7638
  W8(c->r[9]+0x00000002u,c->r[0]); // 802C763C
  W8(c->r[9]+0x00000001u,c->r[0]); // 802C7640
  W8(c->r[9]+0x00000000u,c->r[0]); // 802C7644
  goto L_802C79B4; // 802C7648
L_802C764C:;
  cmps(c,0,(int32_t)c->r[9],0); // 802C764C
  if (crb(c,2)) { goto L_802C76A8; } // 802C7650
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802C7654
  c->r[10]=c->r[3]+c->r[0]; // 802C7658
  c->r[0]=R8(c->r[10]+0x00002434u); // 802C765C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802C7660
  if (!crb(c,0)) { goto L_802C7680; } // 802C7664
  c->r[0]=0u+0x000000FFu; // 802C7668
  W8(c->r[9]+0x00000003u,c->r[0]); // 802C766C
  W8(c->r[9]+0x00000002u,c->r[0]); // 802C7670
  W8(c->r[9]+0x00000001u,c->r[0]); // 802C7674
  W8(c->r[9]+0x00000000u,c->r[0]); // 802C7678
  goto L_802C76A8; // 802C767C
L_802C7680:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802C7680
  c->r[10]=c->r[3]+c->r[0]; // 802C7684
  c->r[0]=R8(c->r[10]+0x0000222Cu); // 802C7688
  W8(c->r[9]+0x00000000u,c->r[0]); // 802C768C
  c->r[0]=R8(c->r[10]+0x0000222Du); // 802C7690
  W8(c->r[9]+0x00000001u,c->r[0]); // 802C7694
  c->r[0]=R8(c->r[10]+0x0000222Eu); // 802C7698
  W8(c->r[9]+0x00000002u,c->r[0]); // 802C769C
  c->r[0]=R8(c->r[10]+0x0000222Fu); // 802C76A0
  W8(c->r[9]+0x00000003u,c->r[0]); // 802C76A4
L_802C76A8:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C76A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802C76AC
  if (!crb(c,2)) { goto L_802C76F8; } // 802C76B0
  cmps(c,0,(int32_t)c->r[5],0); // 802C76B4
  if (crb(c,2)) { goto L_802C76C4; } // 802C76B8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C76BC
  W32(c->r[5]+0x00000000u,c->r[0]); // 802C76C0
L_802C76C4:;
  cmps(c,0,(int32_t)c->r[6],0); // 802C76C4
  if (crb(c,2)) { goto L_802C76D4; } // 802C76C8
  c->r[0]=R32(c->r[3]+0x00000018u); // 802C76CC
  W32(c->r[6]+0x00000000u,c->r[0]); // 802C76D0
L_802C76D4:;
  cmps(c,0,(int32_t)c->r[7],0); // 802C76D4
  if (crb(c,2)) { goto L_802C76E4; } // 802C76D8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802C76DC
  W32(c->r[7]+0x00000000u,c->r[0]); // 802C76E0
L_802C76E4:;
  cmps(c,0,(int32_t)c->r[8],0); // 802C76E4
  if (crb(c,2)) { goto L_802C79B4; } // 802C76E8
  c->r[0]=R32(c->r[3]+0x00000020u); // 802C76EC
  W32(c->r[8]+0x00000000u,c->r[0]); // 802C76F0
  goto L_802C79B4; // 802C76F4
L_802C76F8:;
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802C76F8
  c->r[0]=0u+0x00000000u; // 802C76FC
  W32(c->r[3]+0x00000014u,c->r[0]); // 802C7700
  c->r[27]=0u+0x00000000u; // 802C7704
  c->r[31]=0u+0x00000001u; // 802C7708
  c->r[5]=c->r[3]+c->r[5]; // 802C770C
  c->r[28]=c->r[5]+0x0000242Cu; // 802C7710
  W32(c->r[3]+0x00000018u,c->r[0]); // 802C7714
  c->r[18]=c->r[28]|c->r[28]; // 802C7718
  c->r[19]=0u+0x00000002u; // 802C771C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802C7720
  W32(c->r[3]+0x00000020u,c->r[0]); // 802C7724
  W32(c->r[3]+0x00000010u,c->r[4]); // 802C7728
L_802C772C:;
  c->r[26]=R8(c->r[18]+0x00000000u); // 802C772C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[26]; cr0(c,c->r[4]); // 802C7730
  if (crb(c,0)) { goto L_802C7964; } // 802C7734
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)68); // 802C7738
  c->r[29]=c->r[20]+c->r[0]; // 802C773C
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 802C7740
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C7744
  if (crb(c,2)) { goto L_802C7964; } // 802C7748
  c->r[5]=c->r[20]+0x00000024u; // 802C774C
  c->r[3]=c->r[20]+0x0000002Cu; // 802C7750
  goto L_802C775C; // 802C7754
L_802C7758:;
  c->r[5]=c->r[5]+0x00000001u; // 802C7758
L_802C775C:;
  cmpu(c,0,c->r[5],c->r[3]); // 802C775C
  if (crb(c,2)) { goto L_802C7774; } // 802C7760
  c->r[0]=R8(c->r[5]+0x00000000u); // 802C7764
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C7768
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802C776C
  if (!crb(c,2)) { IRQCHK(c); goto L_802C7758; } // 802C7770
L_802C7774:;
  c->r[3]=c->r[20]+0x0000002Cu; // 802C7774
  cmpu(c,0,c->r[5],c->r[3]); // 802C7778
  if (!crb(c,2)) { goto L_802C78F0; } // 802C777C
  c->r[4]=R32(c->r[13]+0xFFFFAA40u); // 802C7780
  c->r[30]=c->r[20]+0x00000024u; // 802C7784
  goto L_802C7790; // 802C7788
L_802C778C:;
  c->r[30]=c->r[30]+0x00000001u; // 802C778C
L_802C7790:;
  cmpu(c,0,c->r[30],c->r[3]); // 802C7790
  if (crb(c,2)) { goto L_802C77A8; } // 802C7794
  c->r[0]=R8(c->r[30]+0x00000000u); // 802C7798
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C779C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802C77A0
  if (!crb(c,2)) { IRQCHK(c); goto L_802C778C; } // 802C77A4
L_802C77A8:;
  c->r[0]=c->r[20]+0x0000002Cu; // 802C77A8
  cmpu(c,0,c->r[30],c->r[0]); // 802C77AC
  if (crb(c,2)) { goto L_802C77D4; } // 802C77B0
  c->r[0]=c->r[20]+0x00000024u; // 802C77B4
  c->r[3]=c->r[29]+0x00000030u; // 802C77B8
  c->r[0]=c->r[30]-c->r[0]; // 802C77BC
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 802C77C0
  c->r[4]=c->r[25]|c->r[25]; // 802C77C4
  c->lr=0x802C77CCu; f_80346C68(c); // 802C77C8
  W8(c->r[30]+0x00000000u,c->r[26]); // 802C77CC
  goto L_802C78FC; // 802C77D0
L_802C77D4:;
  c->r[4]=c->r[28]+0x00000008u; // 802C77D4
  c->r[30]=0u+0x00000000u; // 802C77D8
  c->ctr=c->r[19]; // 802C77DC
L_802C77E0:;
  c->r[5]=c->r[28]|c->r[28]; // 802C77E0
  c->r[6]=c->r[20]+c->r[30]; // 802C77E4
  goto L_802C77F0; // 802C77E8
L_802C77EC:;
  c->r[5]=c->r[5]+0x00000001u; // 802C77EC
L_802C77F0:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C77F0
  if (crb(c,2)) { goto L_802C7810; } // 802C77F4
  c->r[3]=R8(c->r[5]+0x00000000u); // 802C77F8
  c->r[0]=R8(c->r[6]+0x00000024u); // 802C77FC
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802C7800
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C7804
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802C7808
  if (!crb(c,2)) { IRQCHK(c); goto L_802C77EC; } // 802C780C
L_802C7810:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C7810
  if (crb(c,2)) { goto L_802C78D4; } // 802C7814
  c->r[30]=c->r[30]+0x00000001u; // 802C7818
  c->r[5]=c->r[28]|c->r[28]; // 802C781C
  c->r[6]=c->r[20]+c->r[30]; // 802C7820
  goto L_802C782C; // 802C7824
L_802C7828:;
  c->r[5]=c->r[5]+0x00000001u; // 802C7828
L_802C782C:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C782C
  if (crb(c,2)) { goto L_802C784C; } // 802C7830
  c->r[3]=R8(c->r[5]+0x00000000u); // 802C7834
  c->r[0]=R8(c->r[6]+0x00000024u); // 802C7838
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802C783C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C7840
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802C7844
  if (!crb(c,2)) { IRQCHK(c); goto L_802C7828; } // 802C7848
L_802C784C:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C784C
  if (crb(c,2)) { goto L_802C78D4; } // 802C7850
  c->r[30]=c->r[30]+0x00000001u; // 802C7854
  c->r[5]=c->r[28]|c->r[28]; // 802C7858
  c->r[6]=c->r[20]+c->r[30]; // 802C785C
  goto L_802C7868; // 802C7860
L_802C7864:;
  c->r[5]=c->r[5]+0x00000001u; // 802C7864
L_802C7868:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C7868
  if (crb(c,2)) { goto L_802C7888; } // 802C786C
  c->r[3]=R8(c->r[5]+0x00000000u); // 802C7870
  c->r[0]=R8(c->r[6]+0x00000024u); // 802C7874
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802C7878
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C787C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802C7880
  if (!crb(c,2)) { IRQCHK(c); goto L_802C7864; } // 802C7884
L_802C7888:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C7888
  if (crb(c,2)) { goto L_802C78D4; } // 802C788C
  c->r[30]=c->r[30]+0x00000001u; // 802C7890
  c->r[5]=c->r[28]|c->r[28]; // 802C7894
  c->r[6]=c->r[20]+c->r[30]; // 802C7898
  goto L_802C78A4; // 802C789C
L_802C78A0:;
  c->r[5]=c->r[5]+0x00000001u; // 802C78A0
L_802C78A4:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C78A4
  if (crb(c,2)) { goto L_802C78C4; } // 802C78A8
  c->r[3]=R8(c->r[5]+0x00000000u); // 802C78AC
  c->r[0]=R8(c->r[6]+0x00000024u); // 802C78B0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802C78B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C78B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802C78BC
  if (!crb(c,2)) { IRQCHK(c); goto L_802C78A0; } // 802C78C0
L_802C78C4:;
  cmpu(c,0,c->r[5],c->r[4]); // 802C78C4
  if (crb(c,2)) { goto L_802C78D4; } // 802C78C8
  c->r[30]=c->r[30]+0x00000001u; // 802C78CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802C77E0; } // 802C78D0
L_802C78D4:;
  c->r[25]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 802C78D4
  c->r[3]=c->r[29]+0x00000030u; // 802C78D8
  c->r[4]=c->r[25]|c->r[25]; // 802C78DC
  c->lr=0x802C78E4u; f_80346C68(c); // 802C78E0
  c->r[3]=c->r[20]+c->r[30]; // 802C78E4
  W8(c->r[3]+0x00000024u,c->r[26]); // 802C78E8
  goto L_802C78FC; // 802C78EC
L_802C78F0:;
  c->r[0]=c->r[20]+0x00000024u; // 802C78F0
  c->r[0]=c->r[5]-c->r[0]; // 802C78F4
  c->r[25]=((c->r[0])&0x20)?0u:(c->r[31]<<((c->r[0])&31)); // 802C78F8
L_802C78FC:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 802C78FC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 802C7900
  if (crb(c,2)) { goto L_802C7938; } // 802C7904
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802C7908
  if (!crb(c,2)) { goto L_802C791C; } // 802C790C
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 802C7910
  c->r[0]=c->r[0]|c->r[25]; // 802C7914
  W32(c->r[20]+0x0000001Cu,c->r[0]); // 802C7918
L_802C791C:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 802C791C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C7920
  if (!crb(c,2)) { goto L_802C7964; } // 802C7924
  c->r[0]=R32(c->r[20]+0x00000020u); // 802C7928
  c->r[0]=c->r[0]|c->r[25]; // 802C792C
  W32(c->r[20]+0x00000020u,c->r[0]); // 802C7930
  goto L_802C7964; // 802C7934
L_802C7938:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802C7938
  if (!crb(c,2)) { goto L_802C794C; } // 802C793C
  c->r[0]=R32(c->r[20]+0x00000014u); // 802C7940
  c->r[0]=c->r[0]|c->r[25]; // 802C7944
  W32(c->r[20]+0x00000014u,c->r[0]); // 802C7948
L_802C794C:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 802C794C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C7950
  if (!crb(c,2)) { goto L_802C7964; } // 802C7954
  c->r[0]=R32(c->r[20]+0x00000018u); // 802C7958
  c->r[0]=c->r[0]|c->r[25]; // 802C795C
  W32(c->r[20]+0x00000018u,c->r[0]); // 802C7960
L_802C7964:;
  c->r[27]=c->r[27]+0x00000001u; // 802C7964
  c->r[18]=c->r[18]+0x00000001u; // 802C7968
  cmpu(c,0,c->r[27],0x00000008u); // 802C796C
  if (crb(c,0)) { IRQCHK(c); goto L_802C772C; } // 802C7970
  cmps(c,0,(int32_t)c->r[21],0); // 802C7974
  if (crb(c,2)) { goto L_802C7984; } // 802C7978
  c->r[0]=R32(c->r[20]+0x00000014u); // 802C797C
  W32(c->r[21]+0x00000000u,c->r[0]); // 802C7980
L_802C7984:;
  cmps(c,0,(int32_t)c->r[22],0); // 802C7984
  if (crb(c,2)) { goto L_802C7994; } // 802C7988
  c->r[0]=R32(c->r[20]+0x00000018u); // 802C798C
  W32(c->r[22]+0x00000000u,c->r[0]); // 802C7990
L_802C7994:;
  cmps(c,0,(int32_t)c->r[23],0); // 802C7994
  if (crb(c,2)) { goto L_802C79A4; } // 802C7998
  c->r[0]=R32(c->r[20]+0x0000001Cu); // 802C799C
  W32(c->r[23]+0x00000000u,c->r[0]); // 802C79A0
L_802C79A4:;
  cmps(c,0,(int32_t)c->r[24],0); // 802C79A4
  if (crb(c,2)) { goto L_802C79B4; } // 802C79A8
  c->r[0]=R32(c->r[20]+0x00000020u); // 802C79AC
  W32(c->r[24]+0x00000000u,c->r[0]); // 802C79B0
L_802C79B4:;
  c->r[11]=c->r[1]+0x00000040u; // 802C79B4
  c->lr=0x802C79BCu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C79B8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C79BC
  c->lr=c->r[0]; // 802C79C0
  c->r[1]=c->r[1]+0x00000040u; // 802C79C4
  return; // 802C79C8
}

// __ct__Q54nw4r3g3d8G3DState23@unnamed@g3d_state_cpp@14CameraMtxStateFv
void f_802C79CC(Ctx* __restrict c) {
  trace_call(0x802C79CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C79CC
  c->r[0]=c->lr; // 802C79D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C79D4
  c->r[11]=c->r[1]+0x00000020u; // 802C79D8
  c->lr=0x802C79E0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C79DC
  c->r[0]=0u+0x00000000u; // 802C79E0
  c->r[26]=c->r[3]|c->r[3]; // 802C79E4
  W16(c->r[3]+0x00000000u,c->r[0]); // 802C79E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 802C79EC
  c->r[3]=c->r[3]+0x00000004u; // 802C79F0
  c->lr=0x802C79F8u; f_80353594(c); // 802C79F4
  c->r[31]=c->r[26]+0x00000034u; // 802C79F8
  c->r[30]=c->r[26]+0x00000634u; // 802C79FC
  c->r[29]=c->r[26]+0x00000E34u; // 802C7A00
  c->r[28]=c->r[26]+0x00001434u; // 802C7A04
  c->r[27]=0u+0x00000000u; // 802C7A08
L_802C7A0C:;
  c->r[3]=c->r[31]|c->r[31]; // 802C7A0C
  c->lr=0x802C7A14u; f_80353594(c); // 802C7A10
  c->r[3]=c->r[30]|c->r[30]; // 802C7A14
  c->lr=0x802C7A1Cu; f_8026D070(c); // 802C7A18
  c->r[3]=c->r[29]|c->r[29]; // 802C7A1C
  c->lr=0x802C7A24u; f_80353594(c); // 802C7A20
  c->r[3]=c->r[28]|c->r[28]; // 802C7A24
  c->lr=0x802C7A2Cu; f_80353594(c); // 802C7A28
  c->r[27]=c->r[27]+0x00000001u; // 802C7A2C
  c->r[30]=c->r[30]+0x00000040u; // 802C7A30
  cmpu(c,0,c->r[27],0x00000020u); // 802C7A34
  c->r[29]=c->r[29]+0x00000030u; // 802C7A38
  c->r[28]=c->r[28]+0x00000030u; // 802C7A3C
  c->r[31]=c->r[31]+0x00000030u; // 802C7A40
  if (crb(c,0)) { IRQCHK(c); goto L_802C7A0C; } // 802C7A44
  c->r[11]=c->r[1]+0x00000020u; // 802C7A48
  c->r[3]=c->r[26]|c->r[26]; // 802C7A4C
  c->lr=0x802C7A54u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C7A50
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C7A54
  c->lr=c->r[0]; // 802C7A58
  c->r[1]=c->r[1]+0x00000020u; // 802C7A5C
  return; // 802C7A60
}

// LoadResMatMisc__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatMisc
void f_802C7A64(Ctx* __restrict c) {
  trace_call(0x802C7A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C7A64
  c->r[0]=c->lr; // 802C7A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C7A6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C7A70
  cmps(c,0,(int32_t)c->r[0],0); // 802C7A74
  if (crb(c,2)) { goto L_802C7AC4; } // 802C7A78
  c->lr=0x802C7A80u; f_802BA2E0(c); // 802C7A7C
  c->r[0]=R32(c->r[13]+0xFFFFBE50u); // 802C7A80
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C7A84
  if (crb(c,2)) { goto L_802C7AA0; } // 802C7A88
  c->r[4]=c->r[13]+0xFFFFBE50u; // 802C7A8C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 802C7A90
  c->r[4]=R8(c->r[4]+0x00000004u); // 802C7A94
  cmpu(c,0,c->r[4],c->r[0]); // 802C7A98
  if (crb(c,2)) { goto L_802C7AC4; } // 802C7A9C
L_802C7AA0:;
  c->r[0]=R32(c->r[13]+0xFFFFBE50u); // 802C7AA0
  c->r[4]=c->r[13]+0xFFFFBE50u; // 802C7AA4
  W8(c->r[4]+0x00000004u,c->r[3]); // 802C7AA8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 802C7AAC
  c->r[0]=c->r[0]|0x00000001u; // 802C7AB0
  W32(c->r[13]+0xFFFFBE50u,c->r[0]); // 802C7AB4
  c->lr=0x802C7ABCu; f_80348F58(c); // 802C7AB8
  c->r[0]=0u+0x00000001u; // 802C7ABC
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C7AC0
L_802C7AC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C7AC4
  c->lr=c->r[0]; // 802C7AC8
  c->r[1]=c->r[1]+0x00000010u; // 802C7ACC
  return; // 802C7AD0
}

// LoadResTexObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexObj
void f_802C7AD4(Ctx* __restrict c) {
  trace_call(0x802C7AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C7AD4
  c->r[0]=c->lr; // 802C7AD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C7ADC
  c->r[11]=c->r[1]+0x00000030u; // 802C7AE0
  c->lr=0x802C7AE8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C7AE4
  c->r[4]=R32(c->r[3]+0x00000000u); // 802C7AE8
  c->r[0]=0u-c->r[4]; // 802C7AEC
  c->r[0]=c->r[0]|c->r[4]; // 802C7AF0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802C7AF4
  if (crb(c,2)) { goto L_802C7D24; } // 802C7AF8
  c->r[3]=0u+0x80510000u; // 802C7AFC
  c->r[25]=0u+0x80510000u; // 802C7B00
  W32(c->r[1]+0x00000008u,c->r[4]); // 802C7B04
  c->r[31]=c->r[3]+0xFFFFE420u; // 802C7B08
  c->r[26]=c->r[25]+0xFFFFE3ACu; // 802C7B0C
  c->r[28]=0u+0x00000000u; // 802C7B10
  c->r[27]=0u+0x00000000u; // 802C7B14
  c->r[30]=0u+0x00000001u; // 802C7B18
L_802C7B1C:;
  c->r[4]=c->r[28]|c->r[28]; // 802C7B1C
  c->r[3]=c->r[1]+0x00000008u; // 802C7B20
  c->lr=0x802C7B28u; f_802B9FD8(c); // 802C7B24
  cmps(c,0,(int32_t)c->r[3],0); // 802C7B28
  if (crb(c,2)) { goto L_802C7D0C; } // 802C7B2C
  c->r[4]=c->r[28]|c->r[28]; // 802C7B30
  c->r[3]=c->r[1]+0x00000008u; // 802C7B34
  c->lr=0x802C7B3Cu; f_802B9F70(c); // 802C7B38
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[30]<<((c->r[28])&31)); // 802C7B3C
  c->r[4]=R8(c->r[31]+0x00000100u); // 802C7B40
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 802C7B44
  c->r[29]=c->r[3]|c->r[3]; // 802C7B48
  c->r[4]=c->r[4]&c->r[0]; cr0(c,c->r[4]); // 802C7B4C
  if (crb(c,2)) { goto L_802C7C78; } // 802C7B50
  c->r[9]=R32(c->r[3]+0x00000000u); // 802C7B54
  c->r[4]=0u+0x00000000u; // 802C7B58
  c->r[8]=R32(c->r[31]+c->r[27]); // 802C7B5C
  c->r[5]=0u+0x00000000u; // 802C7B60
  c->r[6]=0u+0x00000000u; // 802C7B64
  c->r[7]=0u+0x00000000u; // 802C7B68
  cmpu(c,0,c->r[9],c->r[8]); // 802C7B6C
  c->r[10]=0u+0x00000000u; // 802C7B70
  c->r[11]=0u+0x00000000u; // 802C7B74
  c->r[12]=0u+0x00000000u; // 802C7B78
  if (!crb(c,2)) { goto L_802C7B98; } // 802C7B7C
  c->r[8]=c->r[31]+c->r[27]; // 802C7B80
  c->r[9]=R32(c->r[3]+0x00000004u); // 802C7B84
  c->r[8]=R32(c->r[8]+0x00000004u); // 802C7B88
  cmpu(c,0,c->r[9],c->r[8]); // 802C7B8C
  if (!crb(c,2)) { goto L_802C7B98; } // 802C7B90
  c->r[12]=0u+0x00000001u; // 802C7B94
L_802C7B98:;
  cmps(c,0,(int32_t)c->r[12],0); // 802C7B98
  if (crb(c,2)) { goto L_802C7BBC; } // 802C7B9C
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7BA0
  c->r[9]=R32(c->r[3]+0x00000008u); // 802C7BA4
  c->r[8]=c->r[31]+c->r[8]; // 802C7BA8
  c->r[8]=R32(c->r[8]+0x00000008u); // 802C7BAC
  cmpu(c,0,c->r[9],c->r[8]); // 802C7BB0
  if (!crb(c,2)) { goto L_802C7BBC; } // 802C7BB4
  c->r[11]=0u+0x00000001u; // 802C7BB8
L_802C7BBC:;
  cmps(c,0,(int32_t)c->r[11],0); // 802C7BBC
  if (crb(c,2)) { goto L_802C7BE0; } // 802C7BC0
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7BC4
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 802C7BC8
  c->r[8]=c->r[31]+c->r[8]; // 802C7BCC
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 802C7BD0
  cmpu(c,0,c->r[9],c->r[8]); // 802C7BD4
  if (!crb(c,2)) { goto L_802C7BE0; } // 802C7BD8
  c->r[10]=0u+0x00000001u; // 802C7BDC
L_802C7BE0:;
  cmps(c,0,(int32_t)c->r[10],0); // 802C7BE0
  if (crb(c,2)) { goto L_802C7C04; } // 802C7BE4
  c->r[8]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7BE8
  c->r[9]=R32(c->r[3]+0x00000010u); // 802C7BEC
  c->r[8]=c->r[31]+c->r[8]; // 802C7BF0
  c->r[8]=R32(c->r[8]+0x00000010u); // 802C7BF4
  cmpu(c,0,c->r[9],c->r[8]); // 802C7BF8
  if (!crb(c,2)) { goto L_802C7C04; } // 802C7BFC
  c->r[7]=0u+0x00000001u; // 802C7C00
L_802C7C04:;
  cmps(c,0,(int32_t)c->r[7],0); // 802C7C04
  if (crb(c,2)) { goto L_802C7C28; } // 802C7C08
  c->r[7]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7C0C
  c->r[8]=R32(c->r[3]+0x00000014u); // 802C7C10
  c->r[7]=c->r[31]+c->r[7]; // 802C7C14
  c->r[7]=R32(c->r[7]+0x00000014u); // 802C7C18
  cmpu(c,0,c->r[8],c->r[7]); // 802C7C1C
  if (!crb(c,2)) { goto L_802C7C28; } // 802C7C20
  c->r[6]=0u+0x00000001u; // 802C7C24
L_802C7C28:;
  cmps(c,0,(int32_t)c->r[6],0); // 802C7C28
  if (crb(c,2)) { goto L_802C7C4C; } // 802C7C2C
  c->r[6]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7C30
  c->r[7]=R32(c->r[3]+0x00000018u); // 802C7C34
  c->r[6]=c->r[31]+c->r[6]; // 802C7C38
  c->r[6]=R32(c->r[6]+0x00000018u); // 802C7C3C
  cmpu(c,0,c->r[7],c->r[6]); // 802C7C40
  if (!crb(c,2)) { goto L_802C7C4C; } // 802C7C44
  c->r[5]=0u+0x00000001u; // 802C7C48
L_802C7C4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802C7C4C
  if (crb(c,2)) { goto L_802C7C70; } // 802C7C50
  c->r[5]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7C54
  c->r[6]=R32(c->r[3]+0x0000001Cu); // 802C7C58
  c->r[5]=c->r[31]+c->r[5]; // 802C7C5C
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 802C7C60
  cmpu(c,0,c->r[6],c->r[5]); // 802C7C64
  if (!crb(c,2)) { goto L_802C7C70; } // 802C7C68
  c->r[4]=0u+0x00000001u; // 802C7C6C
L_802C7C70:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C7C70
  if (!crb(c,2)) { goto L_802C7D0C; } // 802C7C74
L_802C7C78:;
  c->r[5]=R8(c->r[31]+0x00000100u); // 802C7C78
  c->r[4]=rotl(c->r[28],5)&0xFFFFFFE0u; // 802C7C7C
  c->r[6]=c->r[31]+c->r[4]; // 802C7C80
  c->r[0]=c->r[5]|c->r[0]; // 802C7C84
  c->r[4]=c->r[28]|c->r[28]; // 802C7C88
  W8(c->r[31]+0x00000100u,c->r[0]); // 802C7C8C
  c->r[5]=R32(c->r[3]+0x00000000u); // 802C7C90
  c->r[0]=R32(c->r[3]+0x00000004u); // 802C7C94
  W32(c->r[6]+0x00000000u,c->r[5]); // 802C7C98
  W32(c->r[6]+0x00000004u,c->r[0]); // 802C7C9C
  c->r[5]=R32(c->r[3]+0x00000008u); // 802C7CA0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C7CA4
  W32(c->r[6]+0x00000008u,c->r[5]); // 802C7CA8
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 802C7CAC
  c->r[5]=R32(c->r[3]+0x00000010u); // 802C7CB0
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C7CB4
  W32(c->r[6]+0x00000010u,c->r[5]); // 802C7CB8
  W32(c->r[6]+0x00000014u,c->r[0]); // 802C7CBC
  c->r[5]=R32(c->r[3]+0x00000018u); // 802C7CC0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802C7CC4
  c->r[3]=c->r[29]|c->r[29]; // 802C7CC8
  W32(c->r[6]+0x00000018u,c->r[5]); // 802C7CCC
  W32(c->r[6]+0x0000001Cu,c->r[0]); // 802C7CD0
  c->lr=0x802C7CD8u; f_80347760(c); // 802C7CD4
  c->r[3]=c->r[29]|c->r[29]; // 802C7CD8
  c->lr=0x802C7CE0u; f_803474D8(c); // 802C7CDC
  c->r[24]=c->r[3]|c->r[3]; // 802C7CE0
  c->r[3]=c->r[29]|c->r[29]; // 802C7CE4
  c->lr=0x802C7CECu; f_803474C4(c); // 802C7CE8
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 802C7CEC
  c->r[4]=c->r[26]+c->r[0]; // 802C7CF0
  W16(c->r[4]+0x00000004u,c->r[3]); // 802C7CF4
  W16(c->r[4]+0x00000006u,c->r[24]); // 802C7CF8
  c->r[0]=R32(c->r[25]+0xFFFFE3ACu); // 802C7CFC
  c->r[0]=c->r[0]|0x00000002u; // 802C7D00
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802C7D04
  W32(c->r[25]+0xFFFFE3ACu,c->r[0]); // 802C7D08
L_802C7D0C:;
  c->r[28]=c->r[28]+0x00000001u; // 802C7D0C
  c->r[27]=c->r[27]+0x00000020u; // 802C7D10
  cmpu(c,0,c->r[28],0x00000008u); // 802C7D14
  if (crb(c,0)) { IRQCHK(c); goto L_802C7B1C; } // 802C7D18
  c->r[0]=0u+0x00000001u; // 802C7D1C
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C7D20
L_802C7D24:;
  c->r[11]=c->r[1]+0x00000030u; // 802C7D24
  c->lr=0x802C7D2Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C7D28
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C7D2C
  c->lr=c->r[0]; // 802C7D30
  c->r[1]=c->r[1]+0x00000030u; // 802C7D34
  return; // 802C7D38
}

// LoadResTlutObj__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResTlutObj
void f_802C7D3C(Ctx* __restrict c) {
  trace_call(0x802C7D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C7D3C
  c->r[0]=c->lr; // 802C7D40
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C7D44
  c->r[11]=c->r[1]+0x00000030u; // 802C7D48
  c->lr=0x802C7D50u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C7D4C
  c->r[3]=R32(c->r[3]+0x00000000u); // 802C7D50
  c->r[0]=0u-c->r[3]; // 802C7D54
  c->r[0]=c->r[0]|c->r[3]; // 802C7D58
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802C7D5C
  if (crb(c,2)) { goto L_802C7E70; } // 802C7D60
  c->r[27]=0u+0x80510000u; // 802C7D64
  c->r[28]=0u+0x80510000u; // 802C7D68
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C7D6C
  c->r[27]=c->r[27]+0xFFFFE540u; // 802C7D70
  c->r[28]=c->r[28]+0xFFFFE420u; // 802C7D74
  c->r[30]=0u+0x00000000u; // 802C7D78
  c->r[29]=0u+0x00000000u; // 802C7D7C
  c->r[31]=0u+0x00000001u; // 802C7D80
L_802C7D84:;
  c->r[4]=c->r[30]|c->r[30]; // 802C7D84
  c->r[3]=c->r[1]+0x00000008u; // 802C7D88
  c->lr=0x802C7D90u; f_802BA10C(c); // 802C7D8C
  cmps(c,0,(int32_t)c->r[3],0); // 802C7D90
  if (crb(c,2)) { goto L_802C7E58; } // 802C7D94
  c->r[4]=c->r[30]|c->r[30]; // 802C7D98
  c->r[3]=c->r[1]+0x00000008u; // 802C7D9C
  c->lr=0x802C7DA4u; f_802BA0A4(c); // 802C7DA0
  c->r[4]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 802C7DA4
  c->r[0]=R16(c->r[27]+0x00000060u); // 802C7DA8
  c->r[6]=rotl(c->r[4],0)&0x0000FFFFu; // 802C7DAC
  c->r[0]=c->r[0]&c->r[6]; cr0(c,c->r[0]); // 802C7DB0
  if (crb(c,2)) { goto L_802C7E14; } // 802C7DB4
  c->r[4]=R32(c->r[3]+0x00000000u); // 802C7DB8
  c->r[7]=0u+0x00000000u; // 802C7DBC
  c->r[0]=R32(c->r[27]+c->r[29]); // 802C7DC0
  c->r[8]=0u+0x00000000u; // 802C7DC4
  cmpu(c,0,c->r[4],c->r[0]); // 802C7DC8
  if (!crb(c,2)) { goto L_802C7DE8; } // 802C7DCC
  c->r[4]=c->r[27]+c->r[29]; // 802C7DD0
  c->r[5]=R32(c->r[3]+0x00000004u); // 802C7DD4
  c->r[0]=R32(c->r[4]+0x00000004u); // 802C7DD8
  cmpu(c,0,c->r[5],c->r[0]); // 802C7DDC
  if (!crb(c,2)) { goto L_802C7DE8; } // 802C7DE0
  c->r[8]=0u+0x00000001u; // 802C7DE4
L_802C7DE8:;
  cmps(c,0,(int32_t)c->r[8],0); // 802C7DE8
  if (crb(c,2)) { goto L_802C7E0C; } // 802C7DEC
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 802C7DF0
  c->r[5]=R32(c->r[3]+0x00000008u); // 802C7DF4
  c->r[4]=c->r[27]+c->r[0]; // 802C7DF8
  c->r[0]=R32(c->r[4]+0x00000008u); // 802C7DFC
  cmpu(c,0,c->r[5],c->r[0]); // 802C7E00
  if (!crb(c,2)) { goto L_802C7E0C; } // 802C7E04
  c->r[7]=0u+0x00000001u; // 802C7E08
L_802C7E0C:;
  cmps(c,0,(int32_t)c->r[7],0); // 802C7E0C
  if (!crb(c,2)) { goto L_802C7E58; } // 802C7E10
L_802C7E14:;
  c->r[5]=R16(c->r[27]+0x00000060u); // 802C7E14
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)12); // 802C7E18
  c->r[4]=c->r[30]|c->r[30]; // 802C7E1C
  c->r[5]=c->r[5]|c->r[6]; // 802C7E20
  W16(c->r[27]+0x00000060u,c->r[5]); // 802C7E24
  c->r[6]=c->r[27]+c->r[0]; // 802C7E28
  c->r[5]=R32(c->r[3]+0x00000000u); // 802C7E2C
  c->r[0]=R32(c->r[3]+0x00000004u); // 802C7E30
  W32(c->r[6]+0x00000000u,c->r[5]); // 802C7E34
  W32(c->r[6]+0x00000004u,c->r[0]); // 802C7E38
  c->r[0]=R32(c->r[3]+0x00000008u); // 802C7E3C
  W32(c->r[6]+0x00000008u,c->r[0]); // 802C7E40
  c->lr=0x802C7E48u; f_803477DC(c); // 802C7E44
  c->r[3]=R8(c->r[28]+0x00000100u); // 802C7E48
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 802C7E4C
  c->r[0]=c->r[3]&~c->r[0]; // 802C7E50
  W8(c->r[28]+0x00000100u,c->r[0]); // 802C7E54
L_802C7E58:;
  c->r[30]=c->r[30]+0x00000001u; // 802C7E58
  c->r[29]=c->r[29]+0x0000000Cu; // 802C7E5C
  cmpu(c,0,c->r[30],0x00000008u); // 802C7E60
  if (crb(c,0)) { IRQCHK(c); goto L_802C7D84; } // 802C7E64
  c->r[0]=0u+0x00000001u; // 802C7E68
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C7E6C
L_802C7E70:;
  c->r[11]=c->r[1]+0x00000030u; // 802C7E70
  c->lr=0x802C7E78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C7E74
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C7E78
  c->lr=c->r[0]; // 802C7E7C
  c->r[1]=c->r[1]+0x00000030u; // 802C7E80
  return; // 802C7E84
}

// LoadResGenMode__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResGenMode
void f_802C7E88(Ctx* __restrict c) {
  trace_call(0x802C7E88u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802C7E88
  cmps(c,0,(int32_t)c->r[3],0); // 802C7E8C
  if (crb(c,2)) return; // 802C7E90
  c->r[4]=0u+0x80510000u; // 802C7E94
  c->r[4]=R8(c->r[4]+0xFFFFE3A0u); // 802C7E98
  if (crb(c,2)) { goto L_802C7EA8; } // 802C7E9C
  c->r[0]=R8(c->r[3]+0x00000000u); // 802C7EA0
  goto L_802C7EAC; // 802C7EA4
L_802C7EA8:;
  c->r[0]=0u+0x00000000u; // 802C7EA8
L_802C7EAC:;
  cmpu(c,0,c->r[4],c->r[0]); // 802C7EAC
  if (crb(c,2)) { goto L_802C7EE0; } // 802C7EB0
  cmps(c,0,(int32_t)c->r[3],0); // 802C7EB4
  if (crb(c,2)) { goto L_802C7EC4; } // 802C7EB8
  c->r[0]=R8(c->r[3]+0x00000000u); // 802C7EBC
  goto L_802C7EC8; // 802C7EC0
L_802C7EC4:;
  c->r[0]=0u+0x00000000u; // 802C7EC4
L_802C7EC8:;
  c->r[5]=0u+0x80510000u; // 802C7EC8
  c->r[4]=c->r[5]+0xFFFFE3A0u; // 802C7ECC
  W8(c->r[5]+0xFFFFE3A0u,c->r[0]); // 802C7ED0
  c->r[0]=R32(c->r[4]+0x00000008u); // 802C7ED4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C7ED8
  W32(c->r[4]+0x00000008u,c->r[0]); // 802C7EDC
L_802C7EE0:;
  c->r[4]=0u+0x80510000u; // 802C7EE0
  cmps(c,0,(int32_t)c->r[3],0); // 802C7EE4
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7EE8
  c->r[4]=R8(c->r[4]+0x00000001u); // 802C7EEC
  if (crb(c,2)) { goto L_802C7EFC; } // 802C7EF0
  c->r[0]=R8(c->r[3]+0x00000001u); // 802C7EF4
  goto L_802C7F00; // 802C7EF8
L_802C7EFC:;
  c->r[0]=0u+0x00000000u; // 802C7EFC
L_802C7F00:;
  cmpu(c,0,c->r[4],c->r[0]); // 802C7F00
  if (crb(c,2)) { goto L_802C7F34; } // 802C7F04
  cmps(c,0,(int32_t)c->r[3],0); // 802C7F08
  if (crb(c,2)) { goto L_802C7F18; } // 802C7F0C
  c->r[5]=R8(c->r[3]+0x00000001u); // 802C7F10
  goto L_802C7F1C; // 802C7F14
L_802C7F18:;
  c->r[5]=0u+0x00000000u; // 802C7F18
L_802C7F1C:;
  c->r[4]=0u+0x80510000u; // 802C7F1C
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7F20
  c->r[0]=R32(c->r[4]+0x00000008u); // 802C7F24
  W8(c->r[4]+0x00000001u,c->r[5]); // 802C7F28
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 802C7F2C
  W32(c->r[4]+0x00000008u,c->r[0]); // 802C7F30
L_802C7F34:;
  c->r[4]=0u+0x80510000u; // 802C7F34
  cmps(c,0,(int32_t)c->r[3],0); // 802C7F38
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7F3C
  c->r[4]=R8(c->r[4]+0x00000002u); // 802C7F40
  if (crb(c,2)) { goto L_802C7F50; } // 802C7F44
  c->r[0]=R8(c->r[3]+0x00000002u); // 802C7F48
  goto L_802C7F54; // 802C7F4C
L_802C7F50:;
  c->r[0]=0u+0x00000000u; // 802C7F50
L_802C7F54:;
  cmpu(c,0,c->r[4],c->r[0]); // 802C7F54
  if (crb(c,2)) { goto L_802C7F88; } // 802C7F58
  cmps(c,0,(int32_t)c->r[3],0); // 802C7F5C
  if (crb(c,2)) { goto L_802C7F6C; } // 802C7F60
  c->r[5]=R8(c->r[3]+0x00000002u); // 802C7F64
  goto L_802C7F70; // 802C7F68
L_802C7F6C:;
  c->r[5]=0u+0x00000000u; // 802C7F6C
L_802C7F70:;
  c->r[4]=0u+0x80510000u; // 802C7F70
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7F74
  c->r[0]=R32(c->r[4]+0x00000008u); // 802C7F78
  W8(c->r[4]+0x00000002u,c->r[5]); // 802C7F7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802C7F80
  W32(c->r[4]+0x00000008u,c->r[0]); // 802C7F84
L_802C7F88:;
  c->r[4]=0u+0x80510000u; // 802C7F88
  cmps(c,0,(int32_t)c->r[3],0); // 802C7F8C
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7F90
  c->r[4]=R8(c->r[4]+0x00000003u); // 802C7F94
  if (crb(c,2)) { goto L_802C7FA4; } // 802C7F98
  c->r[0]=R8(c->r[3]+0x00000003u); // 802C7F9C
  goto L_802C7FA8; // 802C7FA0
L_802C7FA4:;
  c->r[0]=0u+0x00000000u; // 802C7FA4
L_802C7FA8:;
  cmpu(c,0,c->r[4],c->r[0]); // 802C7FA8
  if (crb(c,2)) { goto L_802C7FDC; } // 802C7FAC
  cmps(c,0,(int32_t)c->r[3],0); // 802C7FB0
  if (crb(c,2)) { goto L_802C7FC0; } // 802C7FB4
  c->r[5]=R8(c->r[3]+0x00000003u); // 802C7FB8
  goto L_802C7FC4; // 802C7FBC
L_802C7FC0:;
  c->r[5]=0u+0x00000000u; // 802C7FC0
L_802C7FC4:;
  c->r[4]=0u+0x80510000u; // 802C7FC4
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7FC8
  c->r[0]=R32(c->r[4]+0x00000008u); // 802C7FCC
  W8(c->r[4]+0x00000003u,c->r[5]); // 802C7FD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802C7FD4
  W32(c->r[4]+0x00000008u,c->r[0]); // 802C7FD8
L_802C7FDC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C7FDC
  if (crb(c,2)) { goto L_802C7FEC; } // 802C7FE0
  c->r[5]=R32(c->r[3]+0x00000004u); // 802C7FE4
  goto L_802C7FF0; // 802C7FE8
L_802C7FEC:;
  c->r[5]=0u+0x00000003u; // 802C7FEC
L_802C7FF0:;
  c->r[4]=0u+0x80510000u; // 802C7FF0
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C7FF4
  c->r[0]=R32(c->r[4]+0x00000004u); // 802C7FF8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 802C7FFC
  if (crb(c,2)) { goto L_802C8030; } // 802C8000
  cmps(c,0,(int32_t)c->r[3],0); // 802C8004
  if (crb(c,2)) { goto L_802C8014; } // 802C8008
  c->r[4]=R32(c->r[3]+0x00000004u); // 802C800C
  goto L_802C8018; // 802C8010
L_802C8014:;
  c->r[4]=0u+0x00000003u; // 802C8014
L_802C8018:;
  c->r[3]=0u+0x80510000u; // 802C8018
  c->r[3]=c->r[3]+0xFFFFE3A0u; // 802C801C
  c->r[0]=R32(c->r[3]+0x00000008u); // 802C8020
  W32(c->r[3]+0x00000004u,c->r[4]); // 802C8024
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802C8028
  W32(c->r[3]+0x00000008u,c->r[0]); // 802C802C
L_802C8030:;
  c->r[4]=0u+0x80510000u; // 802C8030
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C8034
  c->r[3]=R32(c->r[4]+0x00000008u); // 802C8038
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C803C
  if (!crb(c,2)) return; // 802C8040
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFCu; // 802C8044
  c->r[0]=c->r[0]|0x00000004u; // 802C8048
  W32(c->r[4]+0x00000008u,c->r[0]); // 802C804C
  return; // 802C8050
}

// LoadResTev__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResTev
void f_802C8054(Ctx* __restrict c) {
  trace_call(0x802C8054u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C8054
  c->r[0]=c->lr; // 802C8058
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C805C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C8060
  c->r[31]=c->r[3]|c->r[3]; // 802C8064
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C8068
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C806C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802C8070
  cmps(c,0,(int32_t)c->r[4],0); // 802C8074
  if (crb(c,2)) { goto L_802C8248; } // 802C8078
  c->r[0]=R32(c->r[13]+0xFFFFBE44u); // 802C807C
  cmpu(c,0,c->r[4],c->r[0]); // 802C8080
  if (!crb(c,2)) { goto L_802C8090; } // 802C8084
  c->r[0]=0u+0x00000001u; // 802C8088
  goto L_802C8098; // 802C808C
L_802C8090:;
  W32(c->r[13]+0xFFFFBE44u,c->r[4]); // 802C8090
  c->r[0]=0u+0x00000000u; // 802C8094
L_802C8098:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C8098
  if (!crb(c,2)) { goto L_802C8248; } // 802C809C
  c->r[9]=0u+0x80510000u; // 802C80A0
  c->r[8]=c->r[9]+0xFFFFE3A0u; // 802C80A4
  c->r[3]=R32(c->r[8]+0x00000008u); // 802C80A8
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C80AC
  if (crb(c,2)) { goto L_802C812C; } // 802C80B0
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802C80B4
  cmpu(c,0,c->r[0],0x00000002u); // 802C80B8
  if (!crb(c,2)) { goto L_802C812C; } // 802C80BC
  c->r[5]=R32(c->r[8]+0x00000004u); // 802C80C0
  c->r[3]=0u+0xFE080000u; // 802C80C4
  c->r[7]=0u+0xCC010000u; // 802C80C8
  c->r[4]=0u+0x00000061u; // 802C80CC
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 802C80D0
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 802C80D4
  c->r[3]=c->r[2]+0xFFFFAC30u; // 802C80D8
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802C80DC
  c->r[0]=R8(c->r[3]+c->r[5]); // 802C80E0
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 802C80E4
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 802C80E8
  c->r[3]=R8(c->r[8]+0x00000002u); // 802C80EC
  c->r[0]=R8(c->r[8]+0x00000001u); // 802C80F0
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 802C80F4
  c->r[6]=R8(c->r[8]+0x00000003u); // 802C80F8
  c->r[3]=R8(c->r[9]+0xFFFFE3A0u); // 802C80FC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802C8100
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 802C8104
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 802C8108
  c->r[0]=c->r[3]|c->r[0]; // 802C810C
  c->r[3]=c->r[6]|c->r[5]; // 802C8110
  c->r[0]=c->r[4]|c->r[0]; // 802C8114
  c->r[0]=c->r[3]|c->r[0]; // 802C8118
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802C811C
  c->r[0]=R32(c->r[8]+0x00000008u); // 802C8120
  c->r[0]=c->r[0]|0x00000001u; // 802C8124
  W32(c->r[8]+0x00000008u,c->r[0]); // 802C8128
L_802C812C:;
  c->r[4]=R8(c->r[13]+0xFFFFBE38u); // 802C812C
  c->r[0]=0u+0x00000000u; // 802C8130
  c->r[3]=c->r[31]|c->r[31]; // 802C8134
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C8138
  c->lr=0x802C8140u; f_802B9CBC(c); // 802C813C
  c->r[3]=0u+0x80510000u; // 802C8140
  c->r[6]=R32(c->r[31]+0x00000000u); // 802C8144
  c->r[0]=R32(c->r[3]+0xFFFFE3ACu); // 802C8148
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802C814C
  if (crb(c,2)) { goto L_802C8178; } // 802C8150
  c->r[4]=c->r[3]+0xFFFFE3ACu; // 802C8154
  c->r[3]=R32(c->r[6]+0x00000010u); // 802C8158
  c->r[0]=R32(c->r[4]+0x00000064u); // 802C815C
  cmpu(c,0,c->r[3],c->r[0]); // 802C8160
  if (!crb(c,2)) { goto L_802C8178; } // 802C8164
  c->r[3]=R32(c->r[6]+0x00000014u); // 802C8168
  c->r[0]=R32(c->r[4]+0x00000068u); // 802C816C
  cmpu(c,0,c->r[3],c->r[0]); // 802C8170
  if (crb(c,2)) { goto L_802C81A0; } // 802C8174
L_802C8178:;
  c->r[5]=0u+0x80510000u; // 802C8178
  c->r[3]=R32(c->r[6]+0x00000010u); // 802C817C
  c->r[4]=c->r[5]+0xFFFFE3ACu; // 802C8180
  c->r[0]=R32(c->r[5]+0xFFFFE3ACu); // 802C8184
  W32(c->r[4]+0x00000064u,c->r[3]); // 802C8188
  c->r[0]=c->r[0]|0x00000002u; // 802C818C
  c->r[3]=R32(c->r[6]+0x00000014u); // 802C8190
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802C8194
  W32(c->r[4]+0x00000068u,c->r[3]); // 802C8198
  W32(c->r[5]+0xFFFFE3ACu,c->r[0]); // 802C819C
L_802C81A0:;
  c->r[3]=0u+0x80510000u; // 802C81A0
  c->r[4]=0u+0x80510000u; // 802C81A4
  c->r[5]=R32(c->r[3]+0xFFFFE3ACu); // 802C81A8
  c->r[29]=R8(c->r[4]+0xFFFFE3A0u); // 802C81AC
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 802C81B0
  if (crb(c,2)) { goto L_802C8248; } // 802C81B4
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 802C81B8
  if (!crb(c,2)) { goto L_802C8248; } // 802C81BC
  cmps(c,0,(int32_t)c->r[29],0); // 802C81C0
  if (crb(c,2)) { goto L_802C8248; } // 802C81C4
  c->r[31]=c->r[3]+0xFFFFE3ACu; // 802C81C8
  c->r[30]=0u+0x00000000u; // 802C81CC
  goto L_802C822C; // 802C81D0
L_802C81D4:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 802C81D4
  c->r[7]=c->r[31]+c->r[3]; // 802C81D8
  c->r[0]=R8(c->r[7]+0x00000064u); // 802C81DC
  cmpu(c,0,c->r[0],0x000000FFu); // 802C81E0
  if (crb(c,2)) { goto L_802C8228; } // 802C81E4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 802C81E8
  c->r[5]=rotl(c->r[30],3)&0x000007F8u; // 802C81EC
  c->r[4]=c->r[31]+c->r[0]; // 802C81F0
  c->r[6]=0u+0x00000000u; // 802C81F4
  c->r[4]=R16(c->r[4]+0x00000004u); // 802C81F8
  c->r[10]=c->r[31]+c->r[5]; // 802C81FC
  c->r[5]=0u+0x00000000u; // 802C8200
  c->r[8]=0u+0x00000000u; // 802C8204
  W16(c->r[10]+0x00000024u,c->r[4]); // 802C8208
  c->r[9]=0u+0x00000000u; // 802C820C
  c->r[0]=R8(c->r[7]+0x00000064u); // 802C8210
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802C8214
  c->r[7]=c->r[31]+c->r[0]; // 802C8218
  c->r[7]=R16(c->r[7]+0x00000006u); // 802C821C
  W16(c->r[10]+0x00000026u,c->r[7]); // 802C8220
  c->lr=0x802C8228u; f_802C6494(c); // 802C8224
L_802C8228:;
  c->r[30]=c->r[30]+0x00000001u; // 802C8228
L_802C822C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 802C822C
  cmpu(c,0,c->r[0],c->r[29]); // 802C8230
  if (crb(c,0)) { IRQCHK(c); goto L_802C81D4; } // 802C8234
  c->r[3]=0u+0x80510000u; // 802C8238
  c->r[0]=R32(c->r[3]+0xFFFFE3ACu); // 802C823C
  c->r[0]=c->r[0]|0x00000001u; // 802C8240
  W32(c->r[3]+0xFFFFE3ACu,c->r[0]); // 802C8244
L_802C8248:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C8248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C824C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C8250
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C8254
  c->lr=c->r[0]; // 802C8258
  c->r[1]=c->r[1]+0x00000020u; // 802C825C
  return; // 802C8260
}

// LoadResMatPix__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResMatPix
void f_802C8264(Ctx* __restrict c) {
  trace_call(0x802C8264u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C8264
  cmps(c,0,(int32_t)c->r[0],0); // 802C8268
  if (crb(c,2)) return; // 802C826C
  c->r[10]=0u+0x80510000u; // 802C8270
  c->r[9]=c->r[10]+0xFFFFE3A0u; // 802C8274
  c->r[4]=R32(c->r[9]+0x00000008u); // 802C8278
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802C827C
  if (crb(c,2)) { goto L_802C82FC; } // 802C8280
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802C8284
  cmpu(c,0,c->r[0],0x00000002u); // 802C8288
  if (!crb(c,2)) { goto L_802C82FC; } // 802C828C
  c->r[6]=R32(c->r[9]+0x00000004u); // 802C8290
  c->r[4]=0u+0xFE080000u; // 802C8294
  c->r[8]=0u+0xCC010000u; // 802C8298
  c->r[5]=0u+0x00000061u; // 802C829C
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802C82A0
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 802C82A4
  c->r[4]=c->r[2]+0xFFFFAC30u; // 802C82A8
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802C82AC
  c->r[0]=R8(c->r[4]+c->r[6]); // 802C82B0
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802C82B4
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 802C82B8
  c->r[4]=R8(c->r[9]+0x00000002u); // 802C82BC
  c->r[0]=R8(c->r[9]+0x00000001u); // 802C82C0
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 802C82C4
  c->r[7]=R8(c->r[9]+0x00000003u); // 802C82C8
  c->r[4]=R8(c->r[10]+0xFFFFE3A0u); // 802C82CC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802C82D0
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 802C82D4
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 802C82D8
  c->r[0]=c->r[4]|c->r[0]; // 802C82DC
  c->r[4]=c->r[7]|c->r[6]; // 802C82E0
  c->r[0]=c->r[5]|c->r[0]; // 802C82E4
  c->r[0]=c->r[4]|c->r[0]; // 802C82E8
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802C82EC
  c->r[0]=R32(c->r[9]+0x00000008u); // 802C82F0
  c->r[0]=c->r[0]|0x00000001u; // 802C82F4
  W32(c->r[9]+0x00000008u,c->r[0]); // 802C82F8
L_802C82FC:;
  c->r[4]=R8(c->r[13]+0xFFFFBE38u); // 802C82FC
  c->r[0]=0u+0x00000000u; // 802C8300
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C8304
  f_802B9E20(c); return; // 802C8308
  return; // 802C830C
}

// LoadResMatTevColor__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d14ResMatTevColor
void f_802C8310(Ctx* __restrict c) {
  trace_call(0x802C8310u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C8310
  cmps(c,0,(int32_t)c->r[0],0); // 802C8314
  if (crb(c,2)) return; // 802C8318
  c->r[10]=0u+0x80510000u; // 802C831C
  c->r[9]=c->r[10]+0xFFFFE3A0u; // 802C8320
  c->r[4]=R32(c->r[9]+0x00000008u); // 802C8324
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802C8328
  if (crb(c,2)) { goto L_802C83A8; } // 802C832C
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802C8330
  cmpu(c,0,c->r[0],0x00000002u); // 802C8334
  if (!crb(c,2)) { goto L_802C83A8; } // 802C8338
  c->r[6]=R32(c->r[9]+0x00000004u); // 802C833C
  c->r[4]=0u+0xFE080000u; // 802C8340
  c->r[8]=0u+0xCC010000u; // 802C8344
  c->r[5]=0u+0x00000061u; // 802C8348
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802C834C
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 802C8350
  c->r[4]=c->r[2]+0xFFFFAC30u; // 802C8354
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802C8358
  c->r[0]=R8(c->r[4]+c->r[6]); // 802C835C
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802C8360
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 802C8364
  c->r[4]=R8(c->r[9]+0x00000002u); // 802C8368
  c->r[0]=R8(c->r[9]+0x00000001u); // 802C836C
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 802C8370
  c->r[7]=R8(c->r[9]+0x00000003u); // 802C8374
  c->r[4]=R8(c->r[10]+0xFFFFE3A0u); // 802C8378
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802C837C
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 802C8380
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 802C8384
  c->r[0]=c->r[4]|c->r[0]; // 802C8388
  c->r[4]=c->r[7]|c->r[6]; // 802C838C
  c->r[0]=c->r[5]|c->r[0]; // 802C8390
  c->r[0]=c->r[4]|c->r[0]; // 802C8394
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802C8398
  c->r[0]=R32(c->r[9]+0x00000008u); // 802C839C
  c->r[0]=c->r[0]|0x00000001u; // 802C83A0
  W32(c->r[9]+0x00000008u,c->r[0]); // 802C83A4
L_802C83A8:;
  c->r[4]=R8(c->r[13]+0xFFFFBE38u); // 802C83A8
  c->r[0]=0u+0x00000000u; // 802C83AC
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C83B0
  f_802B9E50(c); return; // 802C83B4
  return; // 802C83B8
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScale
void f_802C83BC(Ctx* __restrict c) {
  trace_call(0x802C83BCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C83BC
  cmps(c,0,(int32_t)c->r[0],0); // 802C83C0
  if (crb(c,2)) return; // 802C83C4
  c->r[10]=0u+0x80510000u; // 802C83C8
  c->r[9]=c->r[10]+0xFFFFE3A0u; // 802C83CC
  c->r[4]=R32(c->r[9]+0x00000008u); // 802C83D0
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802C83D4
  if (crb(c,2)) { goto L_802C8454; } // 802C83D8
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802C83DC
  cmpu(c,0,c->r[0],0x00000002u); // 802C83E0
  if (!crb(c,2)) { goto L_802C8454; } // 802C83E4
  c->r[6]=R32(c->r[9]+0x00000004u); // 802C83E8
  c->r[4]=0u+0xFE080000u; // 802C83EC
  c->r[8]=0u+0xCC010000u; // 802C83F0
  c->r[5]=0u+0x00000061u; // 802C83F4
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802C83F8
  c->r[0]=c->r[4]+0xFFFFFC3Fu; // 802C83FC
  c->r[4]=c->r[2]+0xFFFFAC30u; // 802C8400
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802C8404
  c->r[0]=R8(c->r[4]+c->r[6]); // 802C8408
  W8(c->r[8]+0xFFFF8000u,c->r[5]); // 802C840C
  c->r[6]=rotl(c->r[0],14)&0xFFFFC000u; // 802C8410
  c->r[4]=R8(c->r[9]+0x00000002u); // 802C8414
  c->r[0]=R8(c->r[9]+0x00000001u); // 802C8418
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 802C841C
  c->r[7]=R8(c->r[9]+0x00000003u); // 802C8420
  c->r[4]=R8(c->r[10]+0xFFFFE3A0u); // 802C8424
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802C8428
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 802C842C
  c->r[5]=rotl(c->r[5],10)&0xFFFFFC00u; // 802C8430
  c->r[0]=c->r[4]|c->r[0]; // 802C8434
  c->r[4]=c->r[7]|c->r[6]; // 802C8438
  c->r[0]=c->r[5]|c->r[0]; // 802C843C
  c->r[0]=c->r[4]|c->r[0]; // 802C8440
  W32(c->r[8]+0xFFFF8000u,c->r[0]); // 802C8444
  c->r[0]=R32(c->r[9]+0x00000008u); // 802C8448
  c->r[0]=c->r[0]|0x00000001u; // 802C844C
  W32(c->r[9]+0x00000008u,c->r[0]); // 802C8450
L_802C8454:;
  c->r[4]=0u+0x80510000u; // 802C8454
  c->r[5]=R8(c->r[13]+0xFFFFBE38u); // 802C8458
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C845C
  c->r[0]=0u+0x00000000u; // 802C8460
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C8464
  c->r[4]=R8(c->r[4]+0x00000003u); // 802C8468
  f_802BA738(c); return; // 802C846C
  return; // 802C8470
}

// LoadResMatIndMtxAndScale__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d20ResMatIndMtxAndScaleRQ44nw4r3g3d8G3DState8IndMtxOp
void f_802C8474(Ctx* __restrict c) {
  trace_call(0x802C8474u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C8474
  c->r[0]=c->lr; // 802C8478
  W32(c->r[1]+0x000000B4u,c->r[0]); // 802C847C
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C8480
  W32(c->r[1]+0x000000ACu,c->r[31]); // 802C8484
  c->r[31]=c->r[4]|c->r[4]; // 802C8488
  cmps(c,0,(int32_t)c->r[0],0); // 802C848C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 802C8490
  c->r[30]=c->r[3]|c->r[3]; // 802C8494
  if (crb(c,2)) { goto L_802C862C; } // 802C8498
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802C849C
  if (crb(c,2)) { goto L_802C8550; } // 802C84A0
  c->r[9]=0u+0x80510000u; // 802C84A4
  c->r[8]=c->r[9]+0xFFFFE3A0u; // 802C84A8
  c->r[3]=R32(c->r[8]+0x00000008u); // 802C84AC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C84B0
  if (crb(c,2)) { goto L_802C8530; } // 802C84B4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802C84B8
  cmpu(c,0,c->r[0],0x00000002u); // 802C84BC
  if (!crb(c,2)) { goto L_802C8530; } // 802C84C0
  c->r[5]=R32(c->r[8]+0x00000004u); // 802C84C4
  c->r[3]=0u+0xFE080000u; // 802C84C8
  c->r[7]=0u+0xCC010000u; // 802C84CC
  c->r[4]=0u+0x00000061u; // 802C84D0
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 802C84D4
  c->r[0]=c->r[3]+0xFFFFFC3Fu; // 802C84D8
  c->r[3]=c->r[2]+0xFFFFAC30u; // 802C84DC
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802C84E0
  c->r[0]=R8(c->r[3]+c->r[5]); // 802C84E4
  W8(c->r[7]+0xFFFF8000u,c->r[4]); // 802C84E8
  c->r[5]=rotl(c->r[0],14)&0xFFFFC000u; // 802C84EC
  c->r[3]=R8(c->r[8]+0x00000002u); // 802C84F0
  c->r[0]=R8(c->r[8]+0x00000001u); // 802C84F4
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 802C84F8
  c->r[6]=R8(c->r[8]+0x00000003u); // 802C84FC
  c->r[3]=R8(c->r[9]+0xFFFFE3A0u); // 802C8500
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802C8504
  c->r[6]=rotl(c->r[6],16)&0xFFFF0000u; // 802C8508
  c->r[4]=rotl(c->r[4],10)&0xFFFFFC00u; // 802C850C
  c->r[0]=c->r[3]|c->r[0]; // 802C8510
  c->r[3]=c->r[6]|c->r[5]; // 802C8514
  c->r[0]=c->r[4]|c->r[0]; // 802C8518
  c->r[0]=c->r[3]|c->r[0]; // 802C851C
  W32(c->r[7]+0xFFFF8000u,c->r[0]); // 802C8520
  c->r[0]=R32(c->r[8]+0x00000008u); // 802C8524
  c->r[0]=c->r[0]|0x00000001u; // 802C8528
  W32(c->r[8]+0x00000008u,c->r[0]); // 802C852C
L_802C8530:;
  c->r[4]=0u+0x80510000u; // 802C8530
  c->r[5]=R8(c->r[13]+0xFFFFBE38u); // 802C8534
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C8538
  c->r[0]=0u+0x00000000u; // 802C853C
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C8540
  c->r[3]=c->r[1]+0x0000000Cu; // 802C8544
  c->r[4]=R8(c->r[4]+0x00000003u); // 802C8548
  c->lr=0x802C8550u; f_802BA738(c); // 802C854C
L_802C8550:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 802C8550
  c->r[0]=0u+0x00000000u; // 802C8554
  W32(c->r[1]+0x00000010u,c->r[0]); // 802C8558
  c->r[3]=c->r[1]+0x00000008u; // 802C855C
  c->r[5]=c->r[1]+0x00000014u; // 802C8560
  c->r[4]=0u+0x00000001u; // 802C8564
  W32(c->r[1]+0x00000008u,c->r[6]); // 802C8568
  c->lr=0x802C8570u; f_802BA76C(c); // 802C856C
  cmps(c,0,(int32_t)c->r[3],0); // 802C8570
  if (crb(c,2)) { goto L_802C8584; } // 802C8574
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C8578
  c->r[0]=c->r[0]|0x00000001u; // 802C857C
  W32(c->r[1]+0x00000010u,c->r[0]); // 802C8580
L_802C8584:;
  c->r[3]=c->r[1]+0x00000008u; // 802C8584
  c->r[5]=c->r[1]+0x00000044u; // 802C8588
  c->r[4]=0u+0x00000002u; // 802C858C
  c->lr=0x802C8594u; f_802BA76C(c); // 802C8590
  cmps(c,0,(int32_t)c->r[3],0); // 802C8594
  if (crb(c,2)) { goto L_802C85A8; } // 802C8598
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C859C
  c->r[0]=c->r[0]|0x00000002u; // 802C85A0
  W32(c->r[1]+0x00000010u,c->r[0]); // 802C85A4
L_802C85A8:;
  c->r[3]=c->r[1]+0x00000008u; // 802C85A8
  c->r[5]=c->r[1]+0x00000074u; // 802C85AC
  c->r[4]=0u+0x00000003u; // 802C85B0
  c->lr=0x802C85B8u; f_802BA76C(c); // 802C85B4
  cmps(c,0,(int32_t)c->r[3],0); // 802C85B8
  if (crb(c,2)) { goto L_802C85CC; } // 802C85BC
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C85C0
  c->r[0]=c->r[0]|0x00000004u; // 802C85C4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802C85C8
L_802C85CC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C85CC
  c->r[3]=c->r[31]|c->r[31]; // 802C85D0
  c->r[4]=c->r[1]+0x00000010u; // 802C85D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802C85D8
  c->ctr=c->r[12]; // 802C85DC
  if (true) { c->lr=0x802C85E4u; dispatch(c,c->ctr); } // 802C85E0
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C85E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C85E8
  if (crb(c,2)) { goto L_802C85FC; } // 802C85EC
  c->r[4]=c->r[1]+0x00000014u; // 802C85F0
  c->r[3]=0u+0x00000000u; // 802C85F4
  c->lr=0x802C85FCu; f_802C6504(c); // 802C85F8
L_802C85FC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C85FC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802C8600
  if (crb(c,2)) { goto L_802C8614; } // 802C8604
  c->r[4]=c->r[1]+0x00000044u; // 802C8608
  c->r[3]=0u+0x00000003u; // 802C860C
  c->lr=0x802C8614u; f_802C6504(c); // 802C8610
L_802C8614:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C8614
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C8618
  if (crb(c,2)) { goto L_802C862C; } // 802C861C
  c->r[4]=c->r[1]+0x00000074u; // 802C8620
  c->r[3]=0u+0x00000006u; // 802C8624
  c->lr=0x802C862Cu; f_802C6504(c); // 802C8628
L_802C862C:;
  c->r[0]=R32(c->r[1]+0x000000B4u); // 802C862C
  c->r[31]=R32(c->r[1]+0x000000ACu); // 802C8630
  c->r[30]=R32(c->r[1]+0x000000A8u); // 802C8634
  c->lr=c->r[0]; // 802C8638
  c->r[1]=c->r[1]+0x000000B0u; // 802C863C
  return; // 802C8640
}

// LoadResMatChan__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d10ResMatChanUlUlUlUl8_GXColorb
void f_802C8644(Ctx* __restrict c) {
  trace_call(0x802C8644u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C8644
  c->r[0]=c->lr; // 802C8648
  W32(c->r[1]+0x00000084u,c->r[0]); // 802C864C
  c->r[11]=c->r[1]+0x00000080u; // 802C8650
  c->lr=0x802C8658u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C8654
  c->r[10]=R32(c->r[3]+0x00000000u); // 802C8658
  c->r[0]=0u+0x43300000u; // 802C865C
  W32(c->r[1]+0x00000030u,c->r[0]); // 802C8660
  cmps(c,0,(int32_t)c->r[10],0); // 802C8664
  W32(c->r[1]+0x00000038u,c->r[0]); // 802C8668
  if (crb(c,2)) { goto L_802C8D58; } // 802C866C
  c->r[11]=R32(c->r[10]+0x00000000u); // 802C8670
  c->r[0]=rotl(c->r[11],0)&0x00000001u; cr0(c,c->r[0]); // 802C8674
  if (crb(c,2)) { goto L_802C8714; } // 802C8678
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 802C867C
  if (crb(c,2)) { goto L_802C86CC; } // 802C8680
  c->r[31]=R8(c->r[10]+0x00000004u); // 802C8684
  c->r[12]=0u+0xCC010000u; // 802C8688
  c->r[30]=R8(c->r[10]+0x00000005u); // 802C868C
  c->r[27]=0u+0x00000010u; // 802C8690
  c->r[29]=R8(c->r[10]+0x00000006u); // 802C8694
  c->r[11]=0u+0x00000000u; // 802C8698
  c->r[28]=R8(c->r[10]+0x00000007u); // 802C869C
  c->r[0]=0u+0x0000100Cu; // 802C86A0
  W8(c->r[1]+0x00000028u,c->r[31]); // 802C86A4
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 802C86A8
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 802C86AC
  W8(c->r[1]+0x00000029u,c->r[30]); // 802C86B0
  W8(c->r[1]+0x0000002Au,c->r[29]); // 802C86B4
  W8(c->r[1]+0x0000002Bu,c->r[28]); // 802C86B8
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 802C86BC
  c->r[0]=R32(c->r[1]+0x00000028u); // 802C86C0
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 802C86C4
  goto L_802C8760; // 802C86C8
L_802C86CC:;
  c->r[31]=R8(c->r[10]+0x00000004u); // 802C86CC
  c->r[12]=0u+0xCC010000u; // 802C86D0
  c->r[30]=R8(c->r[10]+0x00000005u); // 802C86D4
  c->r[27]=0u+0x00000010u; // 802C86D8
  c->r[29]=R8(c->r[10]+0x00000006u); // 802C86DC
  c->r[11]=0u+0x00000000u; // 802C86E0
  c->r[28]=R8(c->r[10]+0x00000007u); // 802C86E4
  c->r[0]=0u+0x0000100Cu; // 802C86E8
  W8(c->r[1]+0x00000024u,c->r[31]); // 802C86EC
  W8(c->r[12]+0xFFFF8000u,c->r[27]); // 802C86F0
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 802C86F4
  W8(c->r[1]+0x00000025u,c->r[30]); // 802C86F8
  W8(c->r[1]+0x00000026u,c->r[29]); // 802C86FC
  W8(c->r[1]+0x00000027u,c->r[28]); // 802C8700
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 802C8704
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C8708
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 802C870C
  goto L_802C8760; // 802C8710
L_802C8714:;
  c->r[0]=rotl(c->r[11],0)&0x00000002u; cr0(c,c->r[0]); // 802C8714
  if (crb(c,2)) { goto L_802C8760; } // 802C8718
  c->r[27]=R8(c->r[10]+0x00000004u); // 802C871C
  c->r[12]=0u+0xCC010000u; // 802C8720
  c->r[28]=R8(c->r[10]+0x00000005u); // 802C8724
  c->r[29]=0u+0x00000010u; // 802C8728
  c->r[31]=R8(c->r[10]+0x00000006u); // 802C872C
  c->r[11]=0u+0x00000000u; // 802C8730
  c->r[30]=R8(c->r[10]+0x00000007u); // 802C8734
  c->r[0]=0u+0x0000100Cu; // 802C8738
  W8(c->r[1]+0x00000020u,c->r[27]); // 802C873C
  W8(c->r[12]+0xFFFF8000u,c->r[29]); // 802C8740
  W16(c->r[12]+0xFFFF8000u,c->r[11]); // 802C8744
  W8(c->r[1]+0x00000021u,c->r[28]); // 802C8748
  W8(c->r[1]+0x00000022u,c->r[31]); // 802C874C
  W8(c->r[1]+0x00000023u,c->r[30]); // 802C8750
  W16(c->r[12]+0xFFFF8000u,c->r[0]); // 802C8754
  c->r[0]=R32(c->r[1]+0x00000020u); // 802C8758
  W32(c->r[12]+0xFFFF8000u,c->r[0]); // 802C875C
L_802C8760:;
  c->r[12]=R8(c->r[8]+0x00000000u); // 802C8760
  c->r[11]=R8(c->r[10]+0x00000008u); // 802C8764
  c->r[30]=R8(c->r[8]+0x00000001u); // 802C8768
  c->r[29]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 802C876C
  c->r[0]=R8(c->r[10]+0x00000009u); // 802C8770
  c->r[27]=R32(c->r[10]+0x00000000u); // 802C8774
  c->r[31]=R8(c->r[8]+0x00000002u); // 802C8778
  c->r[12]=R8(c->r[10]+0x0000000Au); // 802C877C
  c->r[11]=R8(c->r[8]+0x00000003u); // 802C8780
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[0]); // 802C8784
  c->r[0]=c->r[29]^0x80000000u; // 802C8788
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C878C
  c->r[0]=rotl(c->r[27],0)&0x00000004u; cr0(c,c->r[0]); // 802C8790
  c->r[8]=R8(c->r[10]+0x0000000Bu); // 802C8794
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 802C8798
  c->r[0]=c->r[30]^0x80000000u; // 802C879C
  {uint32_t ea=c->r[2]+0xFFFFAC50u; c->f[6]=RF64(ea);} // 802C87A0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802C87A4
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[8]); // 802C87A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 802C87AC
  {uint32_t ea=c->r[2]+0xFFFFAC48u; c->f[5]=c->ps1[5]=RF32(ea);} // 802C87B0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802C87B4
  {uint32_t ea=c->r[2]+0xFFFFAC44u; c->f[4]=c->ps1[4]=RF32(ea);} // 802C87B8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 802C87BC
  c->r[12]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[12]); // 802C87C0
  c->r[0]=c->r[0]^0x80000000u; // 802C87C4
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[1]); // 802C87C8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802C87CC
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 802C87D0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802C87D4
  c->r[8]=c->r[12]^0x80000000u; // 802C87D8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802C87DC
  W32(c->r[1]+0x00000034u,c->r[8]); // 802C87E0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 802C87E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802C87E8
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802C87EC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 802C87F0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[6]); // 802C87F4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802C87F8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 802C87FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 802C8800
  c->r[12]=R32(c->r[1]+0x00000044u); // 802C8804
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 802C8808
  c->r[11]=R32(c->r[1]+0x0000004Cu); // 802C880C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802C8810
  W8(c->r[1]+0x0000002Cu,c->r[12]); // 802C8814
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 802C8818
  W8(c->r[1]+0x0000002Du,c->r[11]); // 802C881C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 802C8820
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802C8824
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802C8828
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 802C882C
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[0]);} // 802C8830
  c->r[8]=R32(c->r[1]+0x00000054u); // 802C8834
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 802C8838
  W8(c->r[1]+0x0000002Eu,c->r[8]); // 802C883C
  W8(c->r[1]+0x0000002Fu,c->r[0]); // 802C8840
  if (crb(c,2)) { goto L_802C88A0; } // 802C8844
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 802C8848
  if (crb(c,2)) { goto L_802C8878; } // 802C884C
  c->r[11]=0u+0xCC010000u; // 802C8850
  c->r[0]=0u+0x00000010u; // 802C8854
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 802C8858
  c->r[8]=0u+0x00000000u; // 802C885C
  c->r[0]=0u+0x0000100Au; // 802C8860
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 802C8864
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 802C8868
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 802C886C
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 802C8870
  goto L_802C88CC; // 802C8874
L_802C8878:;
  c->r[11]=0u+0xCC010000u; // 802C8878
  c->r[0]=0u+0x00000010u; // 802C887C
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 802C8880
  c->r[8]=0u+0x00000000u; // 802C8884
  c->r[0]=0u+0x0000100Au; // 802C8888
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 802C888C
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 802C8890
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 802C8894
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 802C8898
  goto L_802C88CC; // 802C889C
L_802C88A0:;
  c->r[0]=rotl(c->r[27],0)&0x00000008u; cr0(c,c->r[0]); // 802C88A0
  if (crb(c,2)) { goto L_802C88CC; } // 802C88A4
  c->r[11]=0u+0xCC010000u; // 802C88A8
  c->r[0]=0u+0x00000010u; // 802C88AC
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 802C88B0
  c->r[8]=0u+0x00000000u; // 802C88B4
  c->r[0]=0u+0x0000100Au; // 802C88B8
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 802C88BC
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 802C88C0
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 802C88C4
  W32(c->r[11]+0xFFFF8000u,c->r[12]); // 802C88C8
L_802C88CC:;
  cmps(c,0,(int32_t)c->r[9],0); // 802C88CC
  if (crb(c,2)) { goto L_802C8958; } // 802C88D0
  c->r[0]=R32(c->r[10]+0x00000000u); // 802C88D4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802C88D8
  if (crb(c,2)) { goto L_802C8914; } // 802C88DC
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 802C88E0
  c->r[12]=0u+0xFFFF87C1u; // 802C88E4
  c->r[11]=0u+0xCC010000u; // 802C88E8
  c->r[0]=0u+0x00000010u; // 802C88EC
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 802C88F0
  c->r[8]=0u+0x00000000u; // 802C88F4
  c->r[27]=c->r[27]&c->r[12]; // 802C88F8
  c->r[0]=0u+0x0000100Eu; // 802C88FC
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 802C8900
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 802C8904
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 802C8908
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 802C890C
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 802C8910
L_802C8914:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 802C8914
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C8918
  if (crb(c,2)) { goto L_802C89D8; } // 802C891C
  c->r[11]=R32(c->r[10]+0x00000010u); // 802C8920
  c->r[10]=0u+0xFFFF87C1u; // 802C8924
  c->r[8]=0u+0xCC010000u; // 802C8928
  c->r[0]=0u+0x00000010u; // 802C892C
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 802C8930
  c->r[4]=0u+0x00000000u; // 802C8934
  c->r[11]=c->r[11]&c->r[10]; // 802C8938
  c->r[0]=0u+0x00001010u; // 802C893C
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 802C8940
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 802C8944
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 802C8948
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 802C894C
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 802C8950
  goto L_802C89D8; // 802C8954
L_802C8958:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 802C8958
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802C895C
  if (crb(c,2)) { goto L_802C8998; } // 802C8960
  c->r[27]=R32(c->r[10]+0x0000000Cu); // 802C8964
  c->r[12]=0u+0xFFFF87C3u; // 802C8968
  c->r[11]=0u+0xCC010000u; // 802C896C
  c->r[0]=0u+0x00000010u; // 802C8970
  W8(c->r[11]+0xFFFF8000u,c->r[0]); // 802C8974
  c->r[8]=0u+0x00000000u; // 802C8978
  c->r[27]=c->r[27]&c->r[12]; // 802C897C
  c->r[0]=0u+0x0000100Eu; // 802C8980
  W16(c->r[11]+0xFFFF8000u,c->r[8]); // 802C8984
  c->r[27]=(rotl(c->r[4],2)&0x0000003Cu)|(c->r[27]&~0x0000003Cu); // 802C8988
  c->r[27]=(rotl(c->r[4],7)&0x00007800u)|(c->r[27]&~0x00007800u); // 802C898C
  W16(c->r[11]+0xFFFF8000u,c->r[0]); // 802C8990
  W32(c->r[11]+0xFFFF8000u,c->r[27]); // 802C8994
L_802C8998:;
  c->r[0]=R32(c->r[10]+0x00000000u); // 802C8998
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C899C
  if (crb(c,2)) { goto L_802C89D8; } // 802C89A0
  c->r[11]=R32(c->r[10]+0x00000010u); // 802C89A4
  c->r[10]=0u+0xFFFF87C3u; // 802C89A8
  c->r[8]=0u+0xCC010000u; // 802C89AC
  c->r[0]=0u+0x00000010u; // 802C89B0
  W8(c->r[8]+0xFFFF8000u,c->r[0]); // 802C89B4
  c->r[4]=0u+0x00000000u; // 802C89B8
  c->r[11]=c->r[11]&c->r[10]; // 802C89BC
  c->r[0]=0u+0x00001010u; // 802C89C0
  W16(c->r[8]+0xFFFF8000u,c->r[4]); // 802C89C4
  c->r[11]=(rotl(c->r[5],2)&0x0000003Cu)|(c->r[11]&~0x0000003Cu); // 802C89C8
  c->r[11]=(rotl(c->r[5],7)&0x00007800u)|(c->r[11]&~0x00007800u); // 802C89CC
  W16(c->r[8]+0xFFFF8000u,c->r[0]); // 802C89D0
  W32(c->r[8]+0xFFFF8000u,c->r[11]); // 802C89D4
L_802C89D8:;
  c->r[4]=0u+0x80510000u; // 802C89D8
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C89DC
  c->r[0]=R8(c->r[4]+0x00000001u); // 802C89E0
  cmpu(c,0,c->r[0],0x00000002u); // 802C89E4
  if (!crb(c,2)) { goto L_802C8CE0; } // 802C89E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 802C89EC
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C89F0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802C89F4
  if (crb(c,2)) { goto L_802C8A94; } // 802C89F8
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802C89FC
  if (crb(c,2)) { goto L_802C8A4C; } // 802C8A00
  c->r[31]=R8(c->r[3]+0x00000018u); // 802C8A04
  c->r[5]=0u+0xCC010000u; // 802C8A08
  c->r[12]=R8(c->r[3]+0x00000019u); // 802C8A0C
  c->r[8]=0u+0x00000010u; // 802C8A10
  c->r[11]=R8(c->r[3]+0x0000001Au); // 802C8A14
  c->r[4]=0u+0x00000000u; // 802C8A18
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 802C8A1C
  c->r[0]=0u+0x0000100Du; // 802C8A20
  W8(c->r[1]+0x0000001Cu,c->r[31]); // 802C8A24
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802C8A28
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8A2C
  W8(c->r[1]+0x0000001Du,c->r[12]); // 802C8A30
  W8(c->r[1]+0x0000001Eu,c->r[11]); // 802C8A34
  W8(c->r[1]+0x0000001Fu,c->r[10]); // 802C8A38
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8A3C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 802C8A40
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8A44
  goto L_802C8AE0; // 802C8A48
L_802C8A4C:;
  c->r[31]=R8(c->r[3]+0x00000018u); // 802C8A4C
  c->r[5]=0u+0xCC010000u; // 802C8A50
  c->r[12]=R8(c->r[3]+0x00000019u); // 802C8A54
  c->r[8]=0u+0x00000010u; // 802C8A58
  c->r[11]=R8(c->r[3]+0x0000001Au); // 802C8A5C
  c->r[4]=0u+0x00000000u; // 802C8A60
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 802C8A64
  c->r[0]=0u+0x0000100Du; // 802C8A68
  W8(c->r[1]+0x00000018u,c->r[31]); // 802C8A6C
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802C8A70
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8A74
  W8(c->r[1]+0x00000019u,c->r[12]); // 802C8A78
  W8(c->r[1]+0x0000001Au,c->r[11]); // 802C8A7C
  W8(c->r[1]+0x0000001Bu,c->r[10]); // 802C8A80
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8A84
  c->r[0]=R32(c->r[1]+0x00000018u); // 802C8A88
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8A8C
  goto L_802C8AE0; // 802C8A90
L_802C8A94:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802C8A94
  if (crb(c,2)) { goto L_802C8AE0; } // 802C8A98
  c->r[31]=R8(c->r[3]+0x00000018u); // 802C8A9C
  c->r[5]=0u+0xCC010000u; // 802C8AA0
  c->r[12]=R8(c->r[3]+0x00000019u); // 802C8AA4
  c->r[8]=0u+0x00000010u; // 802C8AA8
  c->r[11]=R8(c->r[3]+0x0000001Au); // 802C8AAC
  c->r[4]=0u+0x00000000u; // 802C8AB0
  c->r[10]=R8(c->r[3]+0x0000001Bu); // 802C8AB4
  c->r[0]=0u+0x0000100Du; // 802C8AB8
  W8(c->r[1]+0x00000014u,c->r[31]); // 802C8ABC
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802C8AC0
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8AC4
  W8(c->r[1]+0x00000015u,c->r[12]); // 802C8AC8
  W8(c->r[1]+0x00000016u,c->r[11]); // 802C8ACC
  W8(c->r[1]+0x00000017u,c->r[10]); // 802C8AD0
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C8AD8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8ADC
L_802C8AE0:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C8AE0
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802C8AE4
  if (crb(c,2)) { goto L_802C8B84; } // 802C8AE8
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 802C8AEC
  if (crb(c,2)) { goto L_802C8B3C; } // 802C8AF0
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 802C8AF4
  c->r[5]=0u+0xCC010000u; // 802C8AF8
  c->r[12]=R8(c->r[3]+0x0000001Du); // 802C8AFC
  c->r[8]=0u+0x00000010u; // 802C8B00
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 802C8B04
  c->r[4]=0u+0x00000000u; // 802C8B08
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 802C8B0C
  c->r[0]=0u+0x0000100Bu; // 802C8B10
  W8(c->r[1]+0x00000010u,c->r[31]); // 802C8B14
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802C8B18
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8B1C
  W8(c->r[1]+0x00000011u,c->r[12]); // 802C8B20
  W8(c->r[1]+0x00000012u,c->r[11]); // 802C8B24
  W8(c->r[1]+0x00000013u,c->r[10]); // 802C8B28
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8B2C
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C8B30
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8B34
  goto L_802C8BD0; // 802C8B38
L_802C8B3C:;
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 802C8B3C
  c->r[5]=0u+0xCC010000u; // 802C8B40
  c->r[12]=R8(c->r[3]+0x0000001Du); // 802C8B44
  c->r[8]=0u+0x00000010u; // 802C8B48
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 802C8B4C
  c->r[4]=0u+0x00000000u; // 802C8B50
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 802C8B54
  c->r[0]=0u+0x0000100Bu; // 802C8B58
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 802C8B5C
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802C8B60
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8B64
  W8(c->r[1]+0x0000000Du,c->r[12]); // 802C8B68
  W8(c->r[1]+0x0000000Eu,c->r[11]); // 802C8B6C
  W8(c->r[1]+0x0000000Fu,c->r[10]); // 802C8B70
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8B74
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802C8B78
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8B7C
  goto L_802C8BD0; // 802C8B80
L_802C8B84:;
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 802C8B84
  if (crb(c,2)) { goto L_802C8BD0; } // 802C8B88
  c->r[31]=R8(c->r[3]+0x0000001Cu); // 802C8B8C
  c->r[5]=0u+0xCC010000u; // 802C8B90
  c->r[12]=R8(c->r[3]+0x0000001Du); // 802C8B94
  c->r[8]=0u+0x00000010u; // 802C8B98
  c->r[11]=R8(c->r[3]+0x0000001Eu); // 802C8B9C
  c->r[4]=0u+0x00000000u; // 802C8BA0
  c->r[10]=R8(c->r[3]+0x0000001Fu); // 802C8BA4
  c->r[0]=0u+0x0000100Bu; // 802C8BA8
  W8(c->r[1]+0x00000008u,c->r[31]); // 802C8BAC
  W8(c->r[5]+0xFFFF8000u,c->r[8]); // 802C8BB0
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8BB4
  W8(c->r[1]+0x00000009u,c->r[12]); // 802C8BB8
  W8(c->r[1]+0x0000000Au,c->r[11]); // 802C8BBC
  W8(c->r[1]+0x0000000Bu,c->r[10]); // 802C8BC0
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8BC4
  c->r[0]=R32(c->r[1]+0x00000008u); // 802C8BC8
  W32(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8BCC
L_802C8BD0:;
  cmps(c,0,(int32_t)c->r[9],0); // 802C8BD0
  if (crb(c,2)) { goto L_802C8C5C; } // 802C8BD4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C8BD8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802C8BDC
  if (crb(c,2)) { goto L_802C8C18; } // 802C8BE0
  c->r[9]=R32(c->r[3]+0x00000020u); // 802C8BE4
  c->r[8]=0u+0xFFFF87C1u; // 802C8BE8
  c->r[5]=0u+0xCC010000u; // 802C8BEC
  c->r[0]=0u+0x00000010u; // 802C8BF0
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8BF4
  c->r[4]=0u+0x00000000u; // 802C8BF8
  c->r[9]=c->r[9]&c->r[8]; // 802C8BFC
  c->r[0]=0u+0x0000100Fu; // 802C8C00
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8C04
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 802C8C08
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 802C8C0C
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8C10
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 802C8C14
L_802C8C18:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C8C18
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C8C1C
  if (crb(c,2)) { goto L_802C8D14; } // 802C8C20
  c->r[6]=R32(c->r[3]+0x00000024u); // 802C8C24
  c->r[5]=0u+0xFFFF87C1u; // 802C8C28
  c->r[4]=0u+0xCC010000u; // 802C8C2C
  c->r[0]=0u+0x00000010u; // 802C8C30
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802C8C34
  c->r[3]=0u+0x00000000u; // 802C8C38
  c->r[6]=c->r[6]&c->r[5]; // 802C8C3C
  c->r[0]=0u+0x00001011u; // 802C8C40
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 802C8C44
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 802C8C48
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 802C8C4C
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 802C8C50
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 802C8C54
  goto L_802C8D14; // 802C8C58
L_802C8C5C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C8C5C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 802C8C60
  if (crb(c,2)) { goto L_802C8C9C; } // 802C8C64
  c->r[9]=R32(c->r[3]+0x00000020u); // 802C8C68
  c->r[8]=0u+0xFFFF87C3u; // 802C8C6C
  c->r[5]=0u+0xCC010000u; // 802C8C70
  c->r[0]=0u+0x00000010u; // 802C8C74
  W8(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8C78
  c->r[4]=0u+0x00000000u; // 802C8C7C
  c->r[9]=c->r[9]&c->r[8]; // 802C8C80
  c->r[0]=0u+0x0000100Fu; // 802C8C84
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8C88
  c->r[9]=(rotl(c->r[6],2)&0x0000003Cu)|(c->r[9]&~0x0000003Cu); // 802C8C8C
  c->r[9]=(rotl(c->r[6],7)&0x00007800u)|(c->r[9]&~0x00007800u); // 802C8C90
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8C94
  W32(c->r[5]+0xFFFF8000u,c->r[9]); // 802C8C98
L_802C8C9C:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 802C8C9C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C8CA0
  if (crb(c,2)) { goto L_802C8D14; } // 802C8CA4
  c->r[6]=R32(c->r[3]+0x00000024u); // 802C8CA8
  c->r[5]=0u+0xFFFF87C3u; // 802C8CAC
  c->r[4]=0u+0xCC010000u; // 802C8CB0
  c->r[0]=0u+0x00000010u; // 802C8CB4
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802C8CB8
  c->r[3]=0u+0x00000000u; // 802C8CBC
  c->r[6]=c->r[6]&c->r[5]; // 802C8CC0
  c->r[0]=0u+0x00001011u; // 802C8CC4
  W16(c->r[4]+0xFFFF8000u,c->r[3]); // 802C8CC8
  c->r[6]=(rotl(c->r[7],2)&0x0000003Cu)|(c->r[6]&~0x0000003Cu); // 802C8CCC
  c->r[6]=(rotl(c->r[7],7)&0x00007800u)|(c->r[6]&~0x00007800u); // 802C8CD0
  W16(c->r[4]+0xFFFF8000u,c->r[0]); // 802C8CD4
  W32(c->r[4]+0xFFFF8000u,c->r[6]); // 802C8CD8
  goto L_802C8D14; // 802C8CDC
L_802C8CE0:;
  c->r[5]=0u+0xCC010000u; // 802C8CE0
  c->r[6]=0u+0x00000010u; // 802C8CE4
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802C8CE8
  c->r[4]=0u+0x00000000u; // 802C8CEC
  c->r[3]=0u+0x0000100Fu; // 802C8CF0
  c->r[0]=0u+0x00001011u; // 802C8CF4
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8CF8
  W16(c->r[5]+0xFFFF8000u,c->r[3]); // 802C8CFC
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8D00
  W8(c->r[5]+0xFFFF8000u,c->r[6]); // 802C8D04
  W16(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8D08
  W16(c->r[5]+0xFFFF8000u,c->r[0]); // 802C8D0C
  W32(c->r[5]+0xFFFF8000u,c->r[4]); // 802C8D10
L_802C8D14:;
  c->r[3]=0u+0x80510000u; // 802C8D14
  c->r[31]=c->r[3]+0xFFFFE3A0u; // 802C8D18
  c->r[4]=R32(c->r[31]+0x00000008u); // 802C8D1C
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802C8D20
  if (crb(c,2)) { goto L_802C8D58; } // 802C8D24
  c->r[0]=rotl(c->r[4],0)&0x00000003u; // 802C8D28
  cmpu(c,0,c->r[0],0x00000003u); // 802C8D2C
  if (crb(c,2)) { goto L_802C8D58; } // 802C8D30
  c->r[3]=R8(c->r[3]+0xFFFFE3A0u); // 802C8D34
  c->r[4]=R8(c->r[31]+0x00000001u); // 802C8D38
  c->r[5]=R8(c->r[31]+0x00000002u); // 802C8D3C
  c->r[6]=R8(c->r[31]+0x00000003u); // 802C8D40
  c->r[7]=R32(c->r[31]+0x00000004u); // 802C8D44
  c->lr=0x802C8D4Cu; f_802C63E4(c); // 802C8D48
  c->r[0]=R32(c->r[31]+0x00000008u); // 802C8D4C
  c->r[0]=c->r[0]|0x00000003u; // 802C8D50
  W32(c->r[31]+0x00000008u,c->r[0]); // 802C8D54
L_802C8D58:;
  c->r[11]=c->r[1]+0x00000080u; // 802C8D58
  c->lr=0x802C8D60u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C8D5C
  c->r[0]=R32(c->r[1]+0x00000084u); // 802C8D60
  c->lr=c->r[0]; // 802C8D64
  c->r[1]=c->r[1]+0x00000080u; // 802C8D68
  return; // 802C8D6C
}

// LoadResMatTexCoordGen__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d17ResMatTexCoordGen
void f_802C8D70(Ctx* __restrict c) {
  trace_call(0x802C8D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C8D70
  c->r[0]=c->lr; // 802C8D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C8D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C8D7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 802C8D80
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C8D84
  cmps(c,0,(int32_t)c->r[0],0); // 802C8D88
  if (crb(c,2)) { goto L_802C8DE8; } // 802C8D8C
  c->r[5]=R8(c->r[13]+0xFFFFBE38u); // 802C8D90
  c->r[0]=0u+0x00000000u; // 802C8D94
  c->r[30]=0u+0x80510000u; // 802C8D98
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C8D9C
  c->r[4]=R8(c->r[30]+0xFFFFE3A0u); // 802C8DA0
  c->lr=0x802C8DA8u; f_802BAFC4(c); // 802C8DA4
  c->r[31]=c->r[30]+0xFFFFE3A0u; // 802C8DA8
  c->r[3]=R32(c->r[31]+0x00000008u); // 802C8DAC
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C8DB0
  if (crb(c,2)) { goto L_802C8DE8; } // 802C8DB4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802C8DB8
  cmpu(c,0,c->r[0],0x00000003u); // 802C8DBC
  if (crb(c,2)) { goto L_802C8DE8; } // 802C8DC0
  c->r[3]=R8(c->r[30]+0xFFFFE3A0u); // 802C8DC4
  c->r[4]=R8(c->r[31]+0x00000001u); // 802C8DC8
  c->r[5]=R8(c->r[31]+0x00000002u); // 802C8DCC
  c->r[6]=R8(c->r[31]+0x00000003u); // 802C8DD0
  c->r[7]=R32(c->r[31]+0x00000004u); // 802C8DD4
  c->lr=0x802C8DDCu; f_802C63E4(c); // 802C8DD8
  c->r[0]=R32(c->r[31]+0x00000008u); // 802C8DDC
  c->r[0]=c->r[0]|0x00000003u; // 802C8DE0
  W32(c->r[31]+0x00000008u,c->r[0]); // 802C8DE4
L_802C8DE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C8DE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C8DEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802C8DF0
  c->lr=c->r[0]; // 802C8DF4
  c->r[1]=c->r[1]+0x00000010u; // 802C8DF8
  return; // 802C8DFC
}

// LoadResTexSrt__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d9ResTexSrt
void f_802C8E00(Ctx* __restrict c) {
  trace_call(0x802C8E00u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C8E00
  c->r[0]=c->lr; // 802C8E04
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802C8E08
  c->r[11]=c->r[1]+0x000000D0u; // 802C8E0C
  c->lr=0x802C8E14u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C8E10
  c->r[30]=0u+0x80510000u; // 802C8E14
  c->r[26]=0u+0x80510000u; // 802C8E18
  c->r[21]=c->r[3]|c->r[3]; // 802C8E1C
  c->r[23]=0u+0x00000000u; // 802C8E20
  c->r[26]=c->r[26]+0xFFFFE5B0u; // 802C8E24
  c->r[30]=c->r[30]+0xFFFFE5E0u; // 802C8E28
  c->r[28]=0u+0x00000000u; // 802C8E2C
  c->r[27]=0u+0x00000000u; // 802C8E30
  c->r[25]=0u+0x00000000u; // 802C8E34
  c->r[24]=0u+0x00000040u; // 802C8E38
  c->r[31]=0u+0x00000000u; // 802C8E3C
  c->r[20]=0u+0x00000001u; // 802C8E40
L_802C8E44:;
  c->r[4]=R32(c->r[21]+0x00000000u); // 802C8E44
  cmps(c,0,(int32_t)c->r[4],0); // 802C8E48
  if (crb(c,2)) { goto L_802C8E6C; } // 802C8E4C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C8E50
  c->r[3]=((c->r[28])&0x20)?0u:(c->r[20]<<((c->r[28])&31)); // 802C8E54
  c->r[3]=c->r[3]&c->r[0]; // 802C8E58
  c->r[0]=0u-c->r[3]; // 802C8E5C
  c->r[0]=c->r[0]|c->r[3]; // 802C8E60
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802C8E64
  goto L_802C8E70; // 802C8E68
L_802C8E6C:;
  c->r[0]=0u+0x00000000u; // 802C8E6C
L_802C8E70:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C8E70
  if (crb(c,2)) { goto L_802C9070; } // 802C8E74
  c->r[29]=c->r[4]+c->r[27]; // 802C8E78
  c->r[3]=c->r[1]+0x00000068u; // 802C8E7C
  c->r[22]=0u+0x00000001u; // 802C8E80
  c->lr=0x802C8E88u; f_80353594(c); // 802C8E84
  c->r[6]=R8(c->r[29]+0x000000AAu); // 802C8E88
  cmps(c,0,(int32_t)c->r[6],0); // 802C8E8C
  if (crb(c,2)) { goto L_802C8F04; } // 802C8E90
  c->r[3]=R8(c->r[29]+0x000000A9u); // 802C8E94
  cmpu(c,0,c->r[6],0x00000100u); // 802C8E98
  c->r[0]=R8(c->r[29]+0x000000A8u); // 802C8E9C
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802C8EA0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802C8EA4
  if (crb(c,0)) { goto L_802C8EB0; } // 802C8EA8
  c->r[6]=0u+0x00000000u; // 802C8EAC
L_802C8EB0:;
  cmps(c,0,(int32_t)c->r[4],32); // 802C8EB0
  if (crb(c,0)) { goto L_802C8EBC; } // 802C8EB4
  c->r[4]=0u+0xFFFFFFFFu; // 802C8EB8
L_802C8EBC:;
  cmps(c,0,(int32_t)c->r[5],128); // 802C8EBC
  if (crb(c,0)) { goto L_802C8EC8; } // 802C8EC0
  c->r[5]=0u+0xFFFFFFFFu; // 802C8EC4
L_802C8EC8:;
  c->r[0]=rotl(c->r[6],3)&0xFFFFFFF8u; // 802C8EC8
  c->r[3]=c->r[1]+0x00000068u; // 802C8ECC
  c->r[12]=R32(c->r[30]+c->r[0]); // 802C8ED0
  c->ctr=c->r[12]; // 802C8ED4
  if (true) { c->lr=0x802C8EDCu; dispatch(c,c->ctr); } // 802C8ED8
  c->r[0]=R8(c->r[29]+0x000000AAu); // 802C8EDC
  cmpu(c,0,c->r[0],0x00000100u); // 802C8EE0
  if (crb(c,0)) { goto L_802C8EEC; } // 802C8EE4
  c->r[0]=0u+0x00000000u; // 802C8EE8
L_802C8EEC:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802C8EEC
  c->r[22]=0u+0x00000000u; // 802C8EF0
  c->r[3]=c->r[30]+c->r[0]; // 802C8EF4
  c->r[0]=R32(c->r[3]+0x00000004u); // 802C8EF8
  W32(c->r[26]+0x00000000u,c->r[0]); // 802C8EFC
  goto L_802C8F08; // 802C8F00
L_802C8F04:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 802C8F04
L_802C8F08:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 802C8F08
  c->r[4]=0u+0x00000000u; // 802C8F0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C8F10
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 802C8F14
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 802C8F18
  cmpu(c,0,c->r[0],0x0000000Fu); // 802C8F1C
  if (!crb(c,2)) { goto L_802C8F38; } // 802C8F20
  c->r[3]=c->r[3]+c->r[27]; // 802C8F24
  c->r[0]=R8(c->r[3]+0x000000ABu); // 802C8F28
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C8F2C
  if (crb(c,2)) { goto L_802C8F38; } // 802C8F30
  c->r[4]=0u+0x00000001u; // 802C8F34
L_802C8F38:;
  cmps(c,0,(int32_t)c->r[4],0); // 802C8F38
  if (!crb(c,2)) { goto L_802C900C; } // 802C8F3C
  cmps(c,0,(int32_t)c->r[22],0); // 802C8F40
  if (crb(c,2)) { goto L_802C8F68; } // 802C8F44
  c->r[0]=R8(c->r[29]+0x000000ABu); // 802C8F48
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C8F4C
  if (!crb(c,2)) { goto L_802C8F78; } // 802C8F50
  c->r[3]=c->r[29]+0x000000ACu; // 802C8F54
  c->r[4]=c->r[1]+0x00000068u; // 802C8F58
  c->r[22]=0u+0x00000000u; // 802C8F5C
  c->lr=0x802C8F64u; f_803535C0(c); // 802C8F60
  goto L_802C8F78; // 802C8F64
L_802C8F68:;
  c->r[4]=c->r[1]+0x00000068u; // 802C8F68
  c->r[3]=c->r[29]+0x000000ACu; // 802C8F6C
  c->r[5]=c->r[4]|c->r[4]; // 802C8F70
  c->lr=0x802C8F78u; f_803535F4(c); // 802C8F74
L_802C8F78:;
  c->r[0]=R8(c->r[29]+0x000000AAu); // 802C8F78
  cmps(c,0,(int32_t)c->r[0],0); // 802C8F7C
  if (!crb(c,2)) { goto L_802C8FB0; } // 802C8F80
  c->r[6]=R32(c->r[21]+0x00000000u); // 802C8F84
  c->r[4]=c->r[22]|c->r[22]; // 802C8F88
  c->r[3]=c->r[1]+0x00000068u; // 802C8F8C
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C8F90
  c->r[5]=c->r[6]+c->r[25]; // 802C8F94
  c->r[7]=R32(c->r[6]+0x00000004u); // 802C8F98
  c->r[5]=c->r[5]+0x00000008u; // 802C8F9C
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 802C8FA0
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 802C8FA4
  c->lr=0x802C8FACu; f_802CCF38(c); // 802C8FA8
  goto L_802C9008; // 802C8FAC
L_802C8FB0:;
  c->r[6]=R32(c->r[21]+0x00000000u); // 802C8FB0
  c->r[3]=c->r[1]+0x00000038u; // 802C8FB4
  c->r[4]=0u+0x00000001u; // 802C8FB8
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C8FBC
  c->r[5]=c->r[6]+c->r[25]; // 802C8FC0
  c->r[7]=R32(c->r[6]+0x00000004u); // 802C8FC4
  c->r[5]=c->r[5]+0x00000008u; // 802C8FC8
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]>>((c->r[28])&31)); // 802C8FCC
  c->r[6]=rotl(c->r[0],0)&0x0000000Fu; // 802C8FD0
  c->lr=0x802C8FD8u; f_802CCF38(c); // 802C8FD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C8FD8
  c->r[4]=c->r[1]+0x00000068u; // 802C8FDC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C8FE0
  c->r[5]=c->r[4]|c->r[4]; // 802C8FE4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C8FE8
  c->r[3]=c->r[1]+0x00000038u; // 802C8FEC
  {uint32_t ea=c->r[1]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C8FF0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 802C8FF4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 802C8FF8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 802C8FFC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[3]);} // 802C9000
  c->lr=0x802C9008u; f_803535F4(c); // 802C9004
L_802C9008:;
  c->r[22]=0u+0x00000000u; // 802C9008
L_802C900C:;
  cmps(c,0,(int32_t)c->r[22],0); // 802C900C
  if (crb(c,2)) { goto L_802C904C; } // 802C9010
  c->r[0]=R32(c->r[13]+0xFFFFBE40u); // 802C9014
  c->r[4]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 802C9018
  c->r[0]=c->r[0]&c->r[4]; cr0(c,c->r[0]); // 802C901C
  if (!crb(c,2)) { goto L_802C9074; } // 802C9020
  c->r[0]=R32(c->r[13]+0xFFFFBE40u); // 802C9024
  c->r[3]=c->r[1]+0x00000008u; // 802C9028
  c->r[0]=c->r[0]|c->r[4]; // 802C902C
  W32(c->r[13]+0xFFFFBE40u,c->r[0]); // 802C9030
  c->lr=0x802C9038u; f_80353594(c); // 802C9034
  c->r[4]=c->r[24]|c->r[24]; // 802C9038
  c->r[3]=c->r[1]+0x00000008u; // 802C903C
  c->r[5]=0u+0x00000000u; // 802C9040
  c->lr=0x802C9048u; f_80349400(c); // 802C9044
  goto L_802C9074; // 802C9048
L_802C904C:;
  c->r[5]=R32(c->r[13]+0xFFFFBE40u); // 802C904C
  c->r[0]=((c->r[23])&0x20)?0u:(c->r[20]<<((c->r[23])&31)); // 802C9050
  c->r[4]=c->r[24]|c->r[24]; // 802C9054
  c->r[3]=c->r[1]+0x00000068u; // 802C9058
  c->r[0]=c->r[5]&~c->r[0]; // 802C905C
  c->r[5]=0u+0x00000000u; // 802C9060
  W32(c->r[13]+0xFFFFBE40u,c->r[0]); // 802C9064
  c->lr=0x802C906Cu; f_80349400(c); // 802C9068
  goto L_802C9074; // 802C906C
L_802C9070:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 802C9070
L_802C9074:;
  c->r[23]=c->r[23]+0x00000001u; // 802C9074
  c->r[27]=c->r[27]+0x00000034u; // 802C9078
  cmpu(c,0,c->r[23],0x00000008u); // 802C907C
  c->r[26]=c->r[26]+0x00000004u; // 802C9080
  c->r[25]=c->r[25]+0x00000014u; // 802C9084
  c->r[24]=c->r[24]+0x00000003u; // 802C9088
  c->r[28]=c->r[28]+0x00000004u; // 802C908C
  if (crb(c,0)) { IRQCHK(c); goto L_802C8E44; } // 802C9090
  c->r[11]=c->r[1]+0x000000D0u; // 802C9094
  c->lr=0x802C909Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C9098
  c->r[0]=R32(c->r[1]+0x000000D4u); // 802C909C
  c->lr=c->r[0]; // 802C90A0
  c->r[1]=c->r[1]+0x000000D0u; // 802C90A4
  return; // 802C90A8
}

// LoadResShpPrePrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShp
void f_802C90AC(Ctx* __restrict c) {
  trace_call(0x802C90ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C90AC
  c->r[0]=c->lr; // 802C90B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C90B4
  c->r[11]=c->r[1]+0x00000020u; // 802C90B8
  c->lr=0x802C90C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C90BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C90C0
  c->r[31]=0u+0x80510000u; // 802C90C4
  c->r[30]=c->r[3]|c->r[3]; // 802C90C8
  cmps(c,0,(int32_t)c->r[0],0); // 802C90CC
  c->r[31]=c->r[31]+0xFFFFE3A0u; // 802C90D0
  if (crb(c,2)) { goto L_802C9238; } // 802C90D4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802C90D8
  c->r[27]=R8(c->r[31]+0x00000000u); // 802C90DC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 802C90E0
  if (crb(c,2)) { goto L_802C9174; } // 802C90E4
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802C90E8
  if (!crb(c,2)) { goto L_802C9174; } // 802C90EC
  cmps(c,0,(int32_t)c->r[27],0); // 802C90F0
  if (crb(c,2)) { goto L_802C9174; } // 802C90F4
  c->r[29]=c->r[31]+0x0000000Cu; // 802C90F8
  c->r[28]=0u+0x00000000u; // 802C90FC
  goto L_802C915C; // 802C9100
L_802C9104:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 802C9104
  c->r[7]=c->r[29]+c->r[3]; // 802C9108
  c->r[0]=R8(c->r[7]+0x00000064u); // 802C910C
  cmpu(c,0,c->r[0],0x000000FFu); // 802C9110
  if (crb(c,2)) { goto L_802C9158; } // 802C9114
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 802C9118
  c->r[5]=rotl(c->r[28],3)&0x000007F8u; // 802C911C
  c->r[4]=c->r[29]+c->r[0]; // 802C9120
  c->r[6]=0u+0x00000000u; // 802C9124
  c->r[4]=R16(c->r[4]+0x00000004u); // 802C9128
  c->r[10]=c->r[29]+c->r[5]; // 802C912C
  c->r[5]=0u+0x00000000u; // 802C9130
  c->r[8]=0u+0x00000000u; // 802C9134
  W16(c->r[10]+0x00000024u,c->r[4]); // 802C9138
  c->r[9]=0u+0x00000000u; // 802C913C
  c->r[0]=R8(c->r[7]+0x00000064u); // 802C9140
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802C9144
  c->r[7]=c->r[29]+c->r[0]; // 802C9148
  c->r[7]=R16(c->r[7]+0x00000006u); // 802C914C
  W16(c->r[10]+0x00000026u,c->r[7]); // 802C9150
  c->lr=0x802C9158u; f_802C6494(c); // 802C9154
L_802C9158:;
  c->r[28]=c->r[28]+0x00000001u; // 802C9158
L_802C915C:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 802C915C
  cmpu(c,0,c->r[0],c->r[27]); // 802C9160
  if (crb(c,0)) { IRQCHK(c); goto L_802C9104; } // 802C9164
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802C9168
  c->r[0]=c->r[0]|0x00000001u; // 802C916C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802C9170
L_802C9174:;
  c->r[29]=c->r[31]+0x00000000u; // 802C9174
  c->r[3]=R32(c->r[29]+0x00000008u); // 802C9178
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C917C
  if (crb(c,2)) { goto L_802C91B4; } // 802C9180
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802C9184
  cmpu(c,0,c->r[0],0x00000003u); // 802C9188
  if (crb(c,2)) { goto L_802C91B4; } // 802C918C
  c->r[3]=R8(c->r[31]+0x00000000u); // 802C9190
  c->r[4]=R8(c->r[29]+0x00000001u); // 802C9194
  c->r[5]=R8(c->r[29]+0x00000002u); // 802C9198
  c->r[6]=R8(c->r[29]+0x00000003u); // 802C919C
  c->r[7]=R32(c->r[29]+0x00000004u); // 802C91A0
  c->lr=0x802C91A8u; f_802C63E4(c); // 802C91A4
  c->r[0]=R32(c->r[29]+0x00000008u); // 802C91A8
  c->r[0]=c->r[0]|0x00000003u; // 802C91AC
  W32(c->r[29]+0x00000008u,c->r[0]); // 802C91B0
L_802C91B4:;
  c->r[6]=R32(c->r[30]+0x00000000u); // 802C91B4
  c->r[5]=0u+0x00000000u; // 802C91B8
  c->r[0]=R32(c->r[31]+0x00000204u); // 802C91BC
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 802C91C0
  cmpu(c,0,c->r[3],c->r[0]); // 802C91C4
  if (!crb(c,2)) { goto L_802C91F4; } // 802C91C8
  c->r[4]=c->r[31]+0x00000204u; // 802C91CC
  c->r[3]=R32(c->r[6]+0x00000010u); // 802C91D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 802C91D4
  cmpu(c,0,c->r[3],c->r[0]); // 802C91D8
  if (!crb(c,2)) { goto L_802C91F4; } // 802C91DC
  c->r[3]=R32(c->r[6]+0x00000014u); // 802C91E0
  c->r[0]=R32(c->r[4]+0x00000008u); // 802C91E4
  cmpu(c,0,c->r[3],c->r[0]); // 802C91E8
  if (!crb(c,2)) { goto L_802C91F4; } // 802C91EC
  c->r[5]=0u+0x00000001u; // 802C91F0
L_802C91F4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802C91F4
  if (crb(c,2)) { goto L_802C9204; } // 802C91F8
  c->r[5]=0u+0x00000001u; // 802C91FC
  goto L_802C9224; // 802C9200
L_802C9204:;
  c->r[4]=R32(c->r[6]+0x0000000Cu); // 802C9204
  c->r[3]=c->r[31]+0x00000204u; // 802C9208
  c->r[0]=R32(c->r[6]+0x00000010u); // 802C920C
  c->r[5]=0u+0x00000000u; // 802C9210
  W32(c->r[31]+0x00000204u,c->r[4]); // 802C9214
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C9218
  c->r[0]=R32(c->r[6]+0x00000014u); // 802C921C
  W32(c->r[3]+0x00000008u,c->r[0]); // 802C9220
L_802C9224:;
  c->r[4]=R8(c->r[13]+0xFFFFBE38u); // 802C9224
  c->r[0]=0u+0x00000000u; // 802C9228
  c->r[3]=c->r[30]|c->r[30]; // 802C922C
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C9230
  c->lr=0x802C9238u; f_802B9B80(c); // 802C9234
L_802C9238:;
  c->r[11]=c->r[1]+0x00000020u; // 802C9238
  c->lr=0x802C9240u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C923C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C9240
  c->lr=c->r[0]; // 802C9244
  c->r[1]=c->r[1]+0x00000020u; // 802C9248
  return; // 802C924C
}

// LoadResShpPrimitive__Q34nw4r3g3d8G3DStateFQ34nw4r3g3d6ResShpPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_802C9250(Ctx* __restrict c) {
  trace_call(0x802C9250u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9250
  c->r[0]=c->lr; // 802C9254
  W32(c->r[1]+0x00000094u,c->r[0]); // 802C9258
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802C925C
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802C9260
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 802C9264
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 802C9268
  c->r[11]=c->r[1]+0x00000070u; // 802C926C
  c->lr=0x802C9274u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C9270
  c->r[0]=R32(c->r[3]+0x00000000u); // 802C9274
  c->r[31]=0u+0x80510000u; // 802C9278
  c->r[24]=c->r[3]|c->r[3]; // 802C927C
  c->r[27]=c->r[4]|c->r[4]; // 802C9280
  cmps(c,0,(int32_t)c->r[0],0); // 802C9284
  c->r[26]=c->r[5]|c->r[5]; // 802C9288
  c->r[31]=c->r[31]+0xFFFFE3A0u; // 802C928C
  if (crb(c,2)) { goto L_802C9570; } // 802C9290
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 802C9294
  c->r[17]=R8(c->r[31]+0x00000000u); // 802C9298
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 802C929C
  if (crb(c,2)) { goto L_802C9330; } // 802C92A0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802C92A4
  if (!crb(c,2)) { goto L_802C9330; } // 802C92A8
  cmps(c,0,(int32_t)c->r[17],0); // 802C92AC
  if (crb(c,2)) { goto L_802C9330; } // 802C92B0
  c->r[18]=c->r[31]+0x0000000Cu; // 802C92B4
  c->r[19]=0u+0x00000000u; // 802C92B8
  goto L_802C9318; // 802C92BC
L_802C92C0:;
  c->r[3]=rotl(c->r[19],0)&0x000000FFu; // 802C92C0
  c->r[7]=c->r[18]+c->r[3]; // 802C92C4
  c->r[0]=R8(c->r[7]+0x00000064u); // 802C92C8
  cmpu(c,0,c->r[0],0x000000FFu); // 802C92CC
  if (crb(c,2)) { goto L_802C9314; } // 802C92D0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 802C92D4
  c->r[5]=rotl(c->r[19],3)&0x000007F8u; // 802C92D8
  c->r[4]=c->r[18]+c->r[0]; // 802C92DC
  c->r[6]=0u+0x00000000u; // 802C92E0
  c->r[4]=R16(c->r[4]+0x00000004u); // 802C92E4
  c->r[10]=c->r[18]+c->r[5]; // 802C92E8
  c->r[5]=0u+0x00000000u; // 802C92EC
  c->r[8]=0u+0x00000000u; // 802C92F0
  W16(c->r[10]+0x00000024u,c->r[4]); // 802C92F4
  c->r[9]=0u+0x00000000u; // 802C92F8
  c->r[0]=R8(c->r[7]+0x00000064u); // 802C92FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802C9300
  c->r[7]=c->r[18]+c->r[0]; // 802C9304
  c->r[7]=R16(c->r[7]+0x00000006u); // 802C9308
  W16(c->r[10]+0x00000026u,c->r[7]); // 802C930C
  c->lr=0x802C9314u; f_802C6494(c); // 802C9310
L_802C9314:;
  c->r[19]=c->r[19]+0x00000001u; // 802C9314
L_802C9318:;
  c->r[0]=rotl(c->r[19],0)&0x000000FFu; // 802C9318
  cmpu(c,0,c->r[0],c->r[17]); // 802C931C
  if (crb(c,0)) { IRQCHK(c); goto L_802C92C0; } // 802C9320
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802C9324
  c->r[0]=c->r[0]|0x00000001u; // 802C9328
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802C932C
L_802C9330:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 802C9330
  c->r[17]=R32(c->r[3]+0x00000008u); // 802C9334
  c->r[25]=rotl(c->r[17],1)&0x00000001u; cr0(c,c->r[25]); // 802C9338
  if (!crb(c,2)) { goto L_802C94F8; } // 802C933C
  cmps(c,0,(int32_t)c->r[27],0); // 802C9340
  if (crb(c,2)) { goto L_802C938C; } // 802C9344
  c->r[3]=c->r[27]|c->r[27]; // 802C9348
  c->r[4]=0u+0x00000000u; // 802C934C
  c->lr=0x802C9354u; f_803492D8(c); // 802C9350
  c->r[3]=R32(c->r[24]+0x00000000u); // 802C9354
  c->r[0]=R32(c->r[3]+0x00000030u); // 802C9358
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802C935C
  if (crb(c,2)) { goto L_802C93B4; } // 802C9360
  cmps(c,0,(int32_t)c->r[26],0); // 802C9364
  if (crb(c,2)) { goto L_802C937C; } // 802C9368
  c->r[3]=c->r[26]|c->r[26]; // 802C936C
  c->r[4]=0u+0x00000000u; // 802C9370
  c->lr=0x802C9378u; f_80349354(c); // 802C9374
  goto L_802C93B4; // 802C9378
L_802C937C:;
  c->r[3]=c->r[27]|c->r[27]; // 802C937C
  c->r[4]=0u+0x00000000u; // 802C9380
  c->lr=0x802C9388u; f_80349354(c); // 802C9384
  goto L_802C93B4; // 802C9388
L_802C938C:;
  c->r[3]=rotl(c->r[17],0)&0x0000FFFFu; // 802C938C
  c->r[4]=0u+0x00000000u; // 802C9390
  c->lr=0x802C9398u; f_80349328(c); // 802C9394
  c->r[3]=R32(c->r[24]+0x00000000u); // 802C9398
  c->r[0]=R32(c->r[3]+0x00000030u); // 802C939C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802C93A0
  if (crb(c,2)) { goto L_802C93B4; } // 802C93A4
  c->r[3]=rotl(c->r[17],0)&0x0000FFFFu; // 802C93A8
  c->r[4]=0u+0x00000000u; // 802C93AC
  c->lr=0x802C93B4u; f_803493AC(c); // 802C93B0
L_802C93B4:;
  cmps(c,0,(int32_t)c->r[17],0); // 802C93B4
  c->r[3]=0u+0x00000001u; // 802C93B8
  if (crb(c,0)) { goto L_802C9510; } // 802C93BC
  c->r[0]=rotl(c->r[17],0)&0x0000FFFFu; // 802C93C0
  c->r[20]=0u+0x80510000u; // 802C93C4
  c->r[27]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 802C93C8
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[30]=c->ps1[30]=RF32(ea);} // 802C93CC
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C93D0
  c->r[30]=c->r[31]+0x00000210u; // 802C93D4
  c->r[28]=c->r[1]+0x00000008u; // 802C93D8
  c->r[26]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C93DC
  c->r[18]=c->r[31]+0x00000230u; // 802C93E0
  c->r[21]=c->r[20]+0x00003938u; // 802C93E4
  c->r[17]=0u+0x00000000u; // 802C93E8
  c->r[29]=0u+0x0000001Eu; // 802C93EC
  c->r[19]=0u+0x00000001u; // 802C93F0
  c->r[23]=0u+0x0000003Cu; // 802C93F4
  c->r[22]=0u+0x00000000u; // 802C93F8
L_802C93FC:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 802C93FC
  cmps(c,0,(int32_t)c->r[0],1); // 802C9400
  if (!crb(c,2)) { goto L_802C9490; } // 802C9404
  c->r[0]=R32(c->r[18]+0x00000004u); // 802C9408
  W32(c->r[28]+0x00000000u,c->r[29]); // 802C940C
  cmps(c,0,(int32_t)c->r[0],0); // 802C9410
  if (crb(c,2)) { goto L_802C9420; } // 802C9414
  c->r[3]=c->r[0]+c->r[27]; // 802C9418
  goto L_802C9480; // 802C941C
L_802C9420:;
  c->r[0]=R8(c->r[13]+0xFFFFBE48u); // 802C9420
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802C9424
  if (!crb(c,2)) { goto L_802C9430; } // 802C9428
  W8(c->r[13]+0xFFFFBE48u,c->r[19]); // 802C942C
L_802C9430:;
  c->r[0]=R32(c->r[31]+0x00000230u); // 802C9430
  c->r[3]=c->r[20]+0x00003938u; // 802C9434
  cmps(c,0,(int32_t)c->r[0],0); // 802C9438
  if (crb(c,2)) { goto L_802C9448; } // 802C943C
  c->r[4]=c->r[0]+c->r[26]; // 802C9440
  goto L_802C944C; // 802C9444
L_802C9448:;
  c->r[4]=0u+0x00000000u; // 802C9448
L_802C944C:;
  c->lr=0x802C9450u; f_8026CCB4(c); // 802C944C
  cmps(c,0,(int32_t)c->r[3],0); // 802C9450
  if (!crb(c,2)) { goto L_802C947C; } // 802C9454
  {uint32_t ea=c->r[21]+0x00000020u; WF32(ea,c->f[30]);} // 802C9458
  {uint32_t ea=c->r[21]+0x00000010u; WF32(ea,c->f[30]);} // 802C945C
  {uint32_t ea=c->r[20]+0x00003938u; WF32(ea,c->f[30]);} // 802C9460
  {uint32_t ea=c->r[21]+0x0000001Cu; WF32(ea,c->f[31]);} // 802C9464
  {uint32_t ea=c->r[21]+0x00000018u; WF32(ea,c->f[31]);} // 802C9468
  {uint32_t ea=c->r[21]+0x00000014u; WF32(ea,c->f[31]);} // 802C946C
  {uint32_t ea=c->r[21]+0x0000000Cu; WF32(ea,c->f[31]);} // 802C9470
  {uint32_t ea=c->r[21]+0x00000008u; WF32(ea,c->f[31]);} // 802C9474
  {uint32_t ea=c->r[21]+0x00000004u; WF32(ea,c->f[31]);} // 802C9478
L_802C947C:;
  c->r[3]=c->r[20]+0x00003938u; // 802C947C
L_802C9480:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 802C9480
  c->lr=0x802C9488u; f_802C6874(c); // 802C9484
  c->r[3]=0u+0x00000000u; // 802C9488
  goto L_802C94A8; // 802C948C
L_802C9490:;
  cmps(c,0,(int32_t)c->r[0],2); // 802C9490
  if (!crb(c,2)) { goto L_802C94A4; } // 802C9494
  W32(c->r[28]+0x00000000u,c->r[22]); // 802C9498
  c->r[3]=0u+0x00000000u; // 802C949C
  goto L_802C94A8; // 802C94A0
L_802C94A4:;
  W32(c->r[28]+0x00000000u,c->r[23]); // 802C94A4
L_802C94A8:;
  c->r[17]=c->r[17]+0x00000001u; // 802C94A8
  c->r[29]=c->r[29]+0x00000003u; // 802C94AC
  cmpu(c,0,c->r[17],0x00000008u); // 802C94B0
  c->r[28]=c->r[28]+0x00000004u; // 802C94B4
  c->r[30]=c->r[30]+0x00000004u; // 802C94B8
  if (crb(c,0)) { IRQCHK(c); goto L_802C93FC; } // 802C94BC
  cmps(c,0,(int32_t)c->r[3],0); // 802C94C0
  if (crb(c,2)) { goto L_802C94E4; } // 802C94C4
  c->r[0]=R8(c->r[13]+0xFFFFBE3Cu); // 802C94C8
  cmps(c,0,(int32_t)c->r[0],0); // 802C94CC
  if (!crb(c,2)) { goto L_802C9510; } // 802C94D0
  c->lr=0x802C94D8u; f_802C679C(c); // 802C94D4
  c->r[0]=0u+0x00000001u; // 802C94D8
  W8(c->r[13]+0xFFFFBE3Cu,c->r[0]); // 802C94DC
  goto L_802C9510; // 802C94E0
L_802C94E4:;
  c->r[3]=c->r[1]+0x00000008u; // 802C94E4
  c->lr=0x802C94ECu; f_802C67F8(c); // 802C94E8
  c->r[0]=0u+0x00000000u; // 802C94EC
  W8(c->r[13]+0xFFFFBE3Cu,c->r[0]); // 802C94F0
  goto L_802C9510; // 802C94F4
L_802C94F8:;
  c->r[0]=R8(c->r[13]+0xFFFFBE3Cu); // 802C94F8
  cmps(c,0,(int32_t)c->r[0],0); // 802C94FC
  if (!crb(c,2)) { goto L_802C9510; } // 802C9500
  c->lr=0x802C9508u; f_802C679C(c); // 802C9504
  c->r[0]=0u+0x00000001u; // 802C9508
  W8(c->r[13]+0xFFFFBE3Cu,c->r[0]); // 802C950C
L_802C9510:;
  c->r[26]=c->r[31]+0x00000000u; // 802C9510
  c->r[3]=R32(c->r[26]+0x00000008u); // 802C9514
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C9518
  if (crb(c,2)) { goto L_802C9550; } // 802C951C
  c->r[0]=rotl(c->r[3],0)&0x00000003u; // 802C9520
  cmpu(c,0,c->r[0],0x00000003u); // 802C9524
  if (crb(c,2)) { goto L_802C9550; } // 802C9528
  c->r[3]=R8(c->r[31]+0x00000000u); // 802C952C
  c->r[4]=R8(c->r[26]+0x00000001u); // 802C9530
  c->r[5]=R8(c->r[26]+0x00000002u); // 802C9534
  c->r[6]=R8(c->r[26]+0x00000003u); // 802C9538
  c->r[7]=R32(c->r[26]+0x00000004u); // 802C953C
  c->lr=0x802C9544u; f_802C63E4(c); // 802C9540
  c->r[0]=R32(c->r[26]+0x00000008u); // 802C9544
  c->r[0]=c->r[0]|0x00000003u; // 802C9548
  W32(c->r[26]+0x00000008u,c->r[0]); // 802C954C
L_802C9550:;
  c->r[4]=R8(c->r[13]+0xFFFFBE38u); // 802C9550
  c->r[26]=0u+0x00000000u; // 802C9554
  c->r[3]=c->r[24]|c->r[24]; // 802C9558
  W8(c->r[13]+0xFFFFBE38u,c->r[26]); // 802C955C
  c->lr=0x802C9564u; f_802B9C58(c); // 802C9560
  cmps(c,0,(int32_t)c->r[25],0); // 802C9564
  if (crb(c,2)) { goto L_802C9570; } // 802C9568
  W8(c->r[13]+0xFFFFBE3Cu,c->r[26]); // 802C956C
L_802C9570:;
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 802C9570
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 802C9574
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 802C9578
  c->r[11]=c->r[1]+0x00000070u; // 802C957C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 802C9580
  c->lr=0x802C9588u; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C9584
  c->r[0]=R32(c->r[1]+0x00000094u); // 802C9588
  c->lr=c->r[0]; // 802C958C
  c->r[1]=c->r[1]+0x00000090u; // 802C9590
  return; // 802C9594
}

// SetViewPosNrmMtxArray__Q34nw4r3g3d8G3DStateFPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34
void f_802C9598(Ctx* __restrict c) {
  trace_call(0x802C9598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9598
  c->r[0]=c->lr; // 802C959C
  c->r[7]=0u+0x80510000u; // 802C95A0
  cmps(c,0,(int32_t)c->r[3],0); // 802C95A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C95A8
  c->r[6]=c->r[7]+0xFFFFE5D0u; // 802C95AC
  W32(c->r[7]+0xFFFFE5D0u,c->r[3]); // 802C95B0
  W32(c->r[6]+0x00000004u,c->r[4]); // 802C95B4
  W32(c->r[6]+0x00000008u,c->r[5]); // 802C95B8
  if (crb(c,2)) { goto L_802C95D0; } // 802C95BC
  c->r[4]=c->r[3]|c->r[3]; // 802C95C0
  c->r[3]=0u+0x00000015u; // 802C95C4
  c->r[5]=0u+0x00000030u; // 802C95C8
  c->lr=0x802C95D0u; f_80344D30(c); // 802C95CC
L_802C95D0:;
  c->r[3]=0u+0x80510000u; // 802C95D0
  c->r[3]=c->r[3]+0xFFFFE5D0u; // 802C95D4
  c->r[4]=R32(c->r[3]+0x00000004u); // 802C95D8
  cmps(c,0,(int32_t)c->r[4],0); // 802C95DC
  if (crb(c,2)) { goto L_802C95F0; } // 802C95E0
  c->r[3]=0u+0x00000016u; // 802C95E4
  c->r[5]=0u+0x00000024u; // 802C95E8
  c->lr=0x802C95F0u; f_80344D30(c); // 802C95EC
L_802C95F0:;
  c->r[3]=0u+0x80510000u; // 802C95F0
  c->r[3]=c->r[3]+0xFFFFE5D0u; // 802C95F4
  c->r[4]=R32(c->r[3]+0x00000008u); // 802C95F8
  cmps(c,0,(int32_t)c->r[4],0); // 802C95FC
  if (crb(c,2)) { goto L_802C9610; } // 802C9600
  c->r[3]=0u+0x00000017u; // 802C9604
  c->r[5]=0u+0x00000030u; // 802C9608
  c->lr=0x802C9610u; f_80344D30(c); // 802C960C
L_802C9610:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C9610
  c->lr=c->r[0]; // 802C9614
  c->r[1]=c->r[1]+0x00000010u; // 802C9618
  return; // 802C961C
}

// GetViewNrmMtxPtr__Q34nw4r3g3d8G3DStateFUl
void f_802C9620(Ctx* __restrict c) {
  trace_call(0x802C9620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9620
  c->r[0]=c->lr; // 802C9624
  c->r[4]=0u+0x80510000u; // 802C9628
  c->r[5]=c->r[3]|c->r[3]; // 802C962C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C9630
  c->r[4]=c->r[4]+0xFFFFE5D0u; // 802C9634
  c->r[4]=R32(c->r[4]+0x00000004u); // 802C9638
  cmps(c,0,(int32_t)c->r[4],0); // 802C963C
  if (crb(c,2)) { goto L_802C9650; } // 802C9640
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)36); // 802C9644
  c->r[3]=c->r[4]+c->r[0]; // 802C9648
  goto L_802C96D4; // 802C964C
L_802C9650:;
  c->r[0]=R8(c->r[13]+0xFFFFBE48u); // 802C9650
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802C9654
  if (!crb(c,2)) { goto L_802C9664; } // 802C9658
  c->r[0]=0u+0x00000001u; // 802C965C
  W8(c->r[13]+0xFFFFBE48u,c->r[0]); // 802C9660
L_802C9664:;
  c->r[4]=0u+0x80510000u; // 802C9664
  c->r[3]=0u+0x80510000u; // 802C9668
  c->r[4]=R32(c->r[4]+0xFFFFE5D0u); // 802C966C
  c->r[3]=c->r[3]+0x00003938u; // 802C9670
  cmps(c,0,(int32_t)c->r[4],0); // 802C9674
  if (crb(c,2)) { goto L_802C9688; } // 802C9678
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 802C967C
  c->r[4]=c->r[4]+c->r[0]; // 802C9680
  goto L_802C968C; // 802C9684
L_802C9688:;
  c->r[4]=0u+0x00000000u; // 802C9688
L_802C968C:;
  c->lr=0x802C9690u; f_8026CCB4(c); // 802C968C
  cmps(c,0,(int32_t)c->r[3],0); // 802C9690
  if (!crb(c,2)) { goto L_802C96CC; } // 802C9694
  c->r[4]=0u+0x80510000u; // 802C9698
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C969C
  c->r[3]=c->r[4]+0x00003938u; // 802C96A0
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C96A4
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 802C96A8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 802C96AC
  {uint32_t ea=c->r[4]+0x00003938u; WF32(ea,c->f[1]);} // 802C96B0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C96B4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 802C96B8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 802C96BC
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C96C0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802C96C4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802C96C8
L_802C96CC:;
  c->r[3]=0u+0x80510000u; // 802C96CC
  c->r[3]=c->r[3]+0x00003938u; // 802C96D0
L_802C96D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C96D4
  c->lr=c->r[0]; // 802C96D8
  c->r[1]=c->r[1]+0x00000010u; // 802C96DC
  return; // 802C96E0
}

// fn_802C96E4
void f_802C96E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFAA44u); // 802C96E4
  return; // 802C96E8
}

// fn_802C96EC
void f_802C96EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C96EC
  c->r[0]=c->lr; // 802C96F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802C96F4
  cmps(c,0,(int32_t)c->r[4],0); // 802C96F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C96FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C9700
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C9704
  c->r[30]=c->r[4]|c->r[4]; // 802C9708
  W32(c->r[1]+0x00000008u,c->r[3]); // 802C970C
  if (crb(c,0)) { goto L_802C9778; } // 802C9710
  cmps(c,0,(int32_t)c->r[4],32); // 802C9714
  if (!crb(c,0)) { goto L_802C9778; } // 802C9718
  cmps(c,0,(int32_t)c->r[3],0); // 802C971C
  if (crb(c,2)) { goto L_802C9778; } // 802C9720
  c->r[31]=0u+0x80510000u; // 802C9724
  c->r[6]=c->r[31]+0xFFFFEDE0u; // 802C9728
  c->r[0]=R32(c->r[6]+0x00000004u); // 802C972C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 802C9730
  if (!crb(c,2)) { goto L_802C975C; } // 802C9734
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802C9738
  c->r[5]=0u+0x00000030u; // 802C973C
  c->r[4]=c->r[6]+c->r[0]; // 802C9740
  c->r[4]=c->r[4]+0x00000008u; // 802C9744
  c->lr=0x802C974Cu; f_802E54DC(c); // 802C9748
  cmps(c,0,(int32_t)c->r[3],0); // 802C974C
  if (crb(c,2)) { goto L_802C9778; } // 802C9750
  c->r[0]=0u+0x00000000u; // 802C9754
  W32(c->r[31]+0xFFFFEDE0u,c->r[0]); // 802C9758
L_802C975C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)48); // 802C975C
  c->r[4]=0u+0x80510000u; // 802C9760
  c->r[3]=c->r[1]+0x00000008u; // 802C9764
  c->r[4]=c->r[4]+0xFFFFEDE0u; // 802C9768
  c->r[4]=c->r[4]+c->r[0]; // 802C976C
  c->r[4]=c->r[4]+0x00000008u; // 802C9770
  c->lr=0x802C9778u; f_802DBEA8(c); // 802C9774
L_802C9778:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C9778
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C977C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C9780
  c->lr=c->r[0]; // 802C9784
  c->r[1]=c->r[1]+0x00000020u; // 802C9788
  return; // 802C978C
}

// fn_802C9790
void f_802C9790(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9790
  c->r[0]=c->lr; // 802C9794
  c->r[4]=0u+0x80510000u; // 802C9798
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C979C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C97A0
  c->r[31]=c->r[3]|c->r[3]; // 802C97A4
  c->r[5]=R32(c->r[4]+0xFFFFEDE0u); // 802C97A8
  c->r[0]=rotl(c->r[5],0)&0x00000001u; cr0(c,c->r[0]); // 802C97AC
  if (crb(c,2)) { goto L_802C97CC; } // 802C97B0
  c->r[0]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[0]); // 802C97B4
  if (crb(c,2)) { goto L_802C97CC; } // 802C97B8
  c->r[4]=c->r[4]+0xFFFFEDE0u; // 802C97BC
  c->r[0]=R32(c->r[4]+0x00000004u); // 802C97C0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802C97C4
  if (crb(c,2)) { goto L_802C983C; } // 802C97C8
L_802C97CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C97CC
  if (crb(c,0)) { goto L_802C97DC; } // 802C97D0
  cmps(c,0,(int32_t)c->r[3],32); // 802C97D4
  if (crb(c,0)) { goto L_802C9804; } // 802C97D8
L_802C97DC:;
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C97DC
  c->r[0]=0u+0x00000000u; // 802C97E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C97E4
  c->r[4]=c->r[1]+0x00000008u; // 802C97E8
  c->f[2]=c->f[1]; // 802C97EC
  c->r[3]=0u+0x00000000u; // 802C97F0
  c->f[3]=c->f[1]; // 802C97F4
  c->f[4]=c->f[1]; // 802C97F8
  c->lr=0x802C9800u; f_803489CC(c); // 802C97FC
  goto L_802C9824; // 802C9800
L_802C9804:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 802C9804
  c->r[4]=0u+0x80510000u; // 802C9808
  c->r[3]=c->r[1]+0x0000000Cu; // 802C980C
  c->r[4]=c->r[4]+0xFFFFEDE0u; // 802C9810
  c->r[4]=c->r[4]+c->r[0]; // 802C9814
  c->r[4]=c->r[4]+0x00000008u; // 802C9818
  c->lr=0x802C9820u; f_802DBE30(c); // 802C981C
  c->lr=0x802C9824u; f_802DBF1C(c); // 802C9820
L_802C9824:;
  c->r[4]=0u+0x80510000u; // 802C9824
  c->r[0]=R32(c->r[4]+0xFFFFEDE0u); // 802C9828
  c->r[3]=c->r[4]+0xFFFFEDE0u; // 802C982C
  W32(c->r[3]+0x00000004u,c->r[31]); // 802C9830
  c->r[0]=c->r[0]|0x00000003u; // 802C9834
  W32(c->r[4]+0xFFFFEDE0u,c->r[0]); // 802C9838
L_802C983C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C983C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C9840
  c->lr=c->r[0]; // 802C9844
  c->r[1]=c->r[1]+0x00000020u; // 802C9848
  return; // 802C984C
}

// fn_802C9850
void f_802C9850(Ctx* __restrict c) {
  c->r[5]=0u+0x80510000u; // 802C9850
  c->r[4]=c->r[3]|c->r[3]; // 802C9854
  c->r[3]=c->r[5]+0xFFFFF3F4u; // 802C9858
  f_802C74C0(c); return; // 802C985C
}

// fn_802C9860
void f_802C9860(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],0); // 802C9860
  if (crb(c,0)) { goto L_802C9888; } // 802C9864
  cmps(c,0,(int32_t)c->r[3],128); // 802C9868
  if (!crb(c,0)) { goto L_802C9888; } // 802C986C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 802C9870
  c->r[3]=0u+0x80510000u; // 802C9874
  c->r[3]=c->r[3]+0xFFFFF3F4u; // 802C9878
  c->r[3]=c->r[3]+c->r[0]; // 802C987C
  c->r[3]=c->r[3]+0x0000002Cu; // 802C9880
  return; // 802C9884
L_802C9888:;
  c->r[3]=0u+0x00000000u; // 802C9888
  return; // 802C988C
}

// fn_802C9890
void f_802C9890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9890
  c->r[0]=c->lr; // 802C9894
  c->r[12]=c->r[4]|c->r[4]; // 802C9898
  c->r[11]=c->r[5]|c->r[5]; // 802C989C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C98A0
  c->r[10]=c->r[6]|c->r[6]; // 802C98A4
  c->r[0]=c->r[7]|c->r[7]; // 802C98A8
  c->r[9]=c->r[8]|c->r[8]; // 802C98AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C98B0
  c->r[31]=c->r[3]|c->r[3]; // 802C98B4
  c->r[3]=0u+0x80510000u; // 802C98B8
  c->r[5]=c->r[12]|c->r[12]; // 802C98BC
  c->r[4]=c->r[31]|c->r[31]; // 802C98C0
  c->r[6]=c->r[11]|c->r[11]; // 802C98C4
  c->r[7]=c->r[10]|c->r[10]; // 802C98C8
  c->r[8]=c->r[0]|c->r[0]; // 802C98CC
  c->r[3]=c->r[3]+0xFFFFF3F4u; // 802C98D0
  c->lr=0x802C98D8u; f_802C75B4(c); // 802C98D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C98D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C98DC
  c->lr=c->r[0]; // 802C98E0
  c->r[1]=c->r[1]+0x00000010u; // 802C98E4
  return; // 802C98E8
}

// fn_802C98EC
void f_802C98EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C98EC
  c->r[0]=c->lr; // 802C98F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C98F4
  c->r[11]=c->r[1]+0x00000020u; // 802C98F8
  c->lr=0x802C9900u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C98FC
  cmps(c,0,(int32_t)c->r[4],32); // 802C9900
  c->r[26]=c->r[3]|c->r[3]; // 802C9904
  c->r[27]=c->r[4]|c->r[4]; // 802C9908
  c->r[28]=c->r[5]|c->r[5]; // 802C990C
  if (!crb(c,0)) { goto L_802C9980; } // 802C9910
  cmps(c,0,(int32_t)c->r[4],0); // 802C9914
  if (crb(c,0)) { goto L_802C9980; } // 802C9918
  c->r[29]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802C991C
  c->r[30]=0u+0x80510000u; // 802C9920
  c->r[31]=c->r[30]+0x00001E20u; // 802C9924
  c->r[4]=c->r[31]+c->r[29]; // 802C9928
  c->r[4]=c->r[4]+0x00000034u; // 802C992C
  c->lr=0x802C9934u; f_802CFCF8(c); // 802C9930
  c->r[0]=rotl(c->r[27],6)&0xFFFFFFC0u; // 802C9934
  c->r[3]=c->r[26]|c->r[26]; // 802C9938
  c->r[4]=c->r[31]+c->r[0]; // 802C993C
  c->r[4]=c->r[4]+0x00000634u; // 802C9940
  c->lr=0x802C9948u; f_802CFD58(c); // 802C9944
  c->r[4]=c->r[31]+c->r[29]; // 802C9948
  c->r[3]=c->r[26]|c->r[26]; // 802C994C
  c->r[4]=c->r[4]+0x00000E34u; // 802C9950
  c->lr=0x802C9958u; f_802CFE34(c); // 802C9954
  c->r[4]=c->r[31]+c->r[29]; // 802C9958
  c->r[3]=c->r[26]|c->r[26]; // 802C995C
  c->r[4]=c->r[4]+0x00001434u; // 802C9960
  c->lr=0x802C9968u; f_802CFF04(c); // 802C9964
  cmps(c,0,(int32_t)c->r[28],0); // 802C9968
  if (crb(c,2)) { goto L_802C9980; } // 802C996C
  c->r[0]=R16(c->r[30]+0x00001E20u); // 802C9970
  W16(c->r[31]+0x00000002u,c->r[27]); // 802C9974
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 802C9978
  W16(c->r[30]+0x00001E20u,c->r[0]); // 802C997C
L_802C9980:;
  c->r[11]=c->r[1]+0x00000020u; // 802C9980
  c->lr=0x802C9988u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C9984
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C9988
  c->lr=c->r[0]; // 802C998C
  c->r[1]=c->r[1]+0x00000020u; // 802C9990
  return; // 802C9994
}

// fn_802C9998
void f_802C9998(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802C9998
  c->r[3]=c->r[3]+0x00001E20u; // 802C999C
  c->r[0]=R16(c->r[3]+0x00000002u); // 802C99A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802C99A4
  c->r[3]=c->r[3]+c->r[0]; // 802C99A8
  c->r[3]=c->r[3]+0x00000034u; // 802C99AC
  return; // 802C99B0
}

// fn_802C99B4
void f_802C99B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C99B4
  c->r[0]=c->lr; // 802C99B8
  W32(c->r[1]+0x00000094u,c->r[0]); // 802C99BC
  c->r[11]=c->r[1]+0x00000090u; // 802C99C0
  c->lr=0x802C99C8u; f_802F0D94(c); // 802C99C4
  c->r[15]=R8(c->r[3]+0x00000029u); // 802C99C8
  c->r[4]=0u+0x80510000u; // 802C99CC
  c->r[18]=c->r[4]+0x00003854u; // 802C99D0
  c->r[0]=R8(c->r[3]+0x00000027u); // 802C99D4
  W32(c->r[1]+0x00000040u,c->r[15]); // 802C99D8
  c->r[15]=R8(c->r[3]+0x0000002Au); // 802C99DC
  W8(c->r[18]+0x00000027u,c->r[0]); // 802C99E0
  c->r[0]=R32(c->r[1]+0x00000040u); // 802C99E4
  W32(c->r[1]+0x00000008u,c->r[15]); // 802C99E8
  c->r[15]=R8(c->r[3]+0x0000002Bu); // 802C99EC
  W8(c->r[18]+0x00000029u,c->r[0]); // 802C99F0
  c->r[0]=R32(c->r[1]+0x00000008u); // 802C99F4
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 802C99F8
  c->r[15]=R8(c->r[3]+0x0000002Cu); // 802C99FC
  W8(c->r[18]+0x0000002Au,c->r[0]); // 802C9A00
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802C9A04
  W32(c->r[1]+0x00000010u,c->r[15]); // 802C9A08
  c->r[15]=R8(c->r[3]+0x0000002Du); // 802C9A0C
  W8(c->r[18]+0x0000002Bu,c->r[0]); // 802C9A10
  c->r[0]=R32(c->r[1]+0x00000010u); // 802C9A14
  W32(c->r[1]+0x00000014u,c->r[15]); // 802C9A18
  c->r[15]=R8(c->r[3]+0x0000002Eu); // 802C9A1C
  W8(c->r[18]+0x0000002Cu,c->r[0]); // 802C9A20
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C9A24
  W32(c->r[1]+0x00000018u,c->r[15]); // 802C9A28
  c->r[15]=R8(c->r[3]+0x0000002Fu); // 802C9A2C
  W8(c->r[18]+0x0000002Du,c->r[0]); // 802C9A30
  c->r[0]=R32(c->r[1]+0x00000018u); // 802C9A34
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 802C9A38
  c->r[15]=R8(c->r[3]+0x00000030u); // 802C9A3C
  W8(c->r[18]+0x0000002Eu,c->r[0]); // 802C9A40
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 802C9A44
  W32(c->r[1]+0x00000020u,c->r[15]); // 802C9A48
  c->r[15]=R8(c->r[3]+0x00000031u); // 802C9A4C
  W8(c->r[18]+0x0000002Fu,c->r[0]); // 802C9A50
  c->r[0]=R32(c->r[1]+0x00000020u); // 802C9A54
  W32(c->r[1]+0x00000024u,c->r[15]); // 802C9A58
  c->r[15]=R8(c->r[3]+0x00000032u); // 802C9A5C
  W8(c->r[18]+0x00000030u,c->r[0]); // 802C9A60
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C9A64
  W32(c->r[1]+0x00000028u,c->r[15]); // 802C9A68
  c->r[15]=R8(c->r[3]+0x00000033u); // 802C9A6C
  W8(c->r[18]+0x00000031u,c->r[0]); // 802C9A70
  c->r[0]=R32(c->r[1]+0x00000028u); // 802C9A74
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 802C9A78
  c->r[15]=R8(c->r[3]+0x00000034u); // 802C9A7C
  W8(c->r[18]+0x00000032u,c->r[0]); // 802C9A80
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 802C9A84
  W32(c->r[1]+0x00000030u,c->r[15]); // 802C9A88
  c->r[15]=R8(c->r[3]+0x00000035u); // 802C9A8C
  W8(c->r[18]+0x00000033u,c->r[0]); // 802C9A90
  c->r[0]=R32(c->r[1]+0x00000030u); // 802C9A94
  W32(c->r[1]+0x00000034u,c->r[15]); // 802C9A98
  c->r[15]=R8(c->r[3]+0x00000036u); // 802C9A9C
  W8(c->r[18]+0x00000034u,c->r[0]); // 802C9AA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C9AA4
  W32(c->r[1]+0x00000038u,c->r[15]); // 802C9AA8
  c->r[15]=R8(c->r[3]+0x00000037u); // 802C9AAC
  W8(c->r[18]+0x00000035u,c->r[0]); // 802C9AB0
  c->r[0]=R32(c->r[1]+0x00000038u); // 802C9AB4
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 802C9AB8
  c->r[17]=R16(c->r[3]+0x00000004u); // 802C9ABC
  c->r[19]=R16(c->r[3]+0x00000006u); // 802C9AC0
  c->r[20]=R16(c->r[3]+0x00000008u); // 802C9AC4
  c->r[21]=R16(c->r[3]+0x0000000Au); // 802C9AC8
  c->r[22]=R16(c->r[3]+0x0000000Cu); // 802C9ACC
  c->r[23]=R16(c->r[3]+0x0000000Eu); // 802C9AD0
  c->r[24]=R16(c->r[3]+0x00000010u); // 802C9AD4
  c->r[25]=R32(c->r[3]+0x00000014u); // 802C9AD8
  c->r[26]=R8(c->r[3]+0x00000018u); // 802C9ADC
  c->r[27]=R8(c->r[3]+0x00000019u); // 802C9AE0
  c->r[28]=R8(c->r[3]+0x0000001Au); // 802C9AE4
  c->r[29]=R8(c->r[3]+0x0000001Bu); // 802C9AE8
  c->r[30]=R8(c->r[3]+0x0000001Cu); // 802C9AEC
  c->r[31]=R8(c->r[3]+0x0000001Du); // 802C9AF0
  c->r[12]=R8(c->r[3]+0x0000001Eu); // 802C9AF4
  c->r[11]=R8(c->r[3]+0x0000001Fu); // 802C9AF8
  c->r[10]=R8(c->r[3]+0x00000020u); // 802C9AFC
  c->r[9]=R8(c->r[3]+0x00000021u); // 802C9B00
  c->r[8]=R8(c->r[3]+0x00000022u); // 802C9B04
  c->r[7]=R8(c->r[3]+0x00000023u); // 802C9B08
  c->r[6]=R8(c->r[3]+0x00000024u); // 802C9B0C
  c->r[5]=R8(c->r[3]+0x00000025u); // 802C9B10
  c->r[4]=R8(c->r[3]+0x00000026u); // 802C9B14
  c->r[14]=R8(c->r[3]+0x00000028u); // 802C9B18
  c->r[15]=R8(c->r[3]+0x00000038u); // 802C9B1C
  c->r[16]=R32(c->r[3]+0x00000000u); // 802C9B20
  c->r[3]=0u+0x80510000u; // 802C9B24
  W8(c->r[18]+0x00000036u,c->r[0]); // 802C9B28
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 802C9B2C
  W32(c->r[3]+0x00003854u,c->r[16]); // 802C9B30
  W16(c->r[18]+0x00000004u,c->r[17]); // 802C9B34
  W16(c->r[18]+0x00000006u,c->r[19]); // 802C9B38
  W16(c->r[18]+0x00000008u,c->r[20]); // 802C9B3C
  W16(c->r[18]+0x0000000Au,c->r[21]); // 802C9B40
  W16(c->r[18]+0x0000000Cu,c->r[22]); // 802C9B44
  W16(c->r[18]+0x0000000Eu,c->r[23]); // 802C9B48
  W16(c->r[18]+0x00000010u,c->r[24]); // 802C9B4C
  W32(c->r[18]+0x00000014u,c->r[25]); // 802C9B50
  W8(c->r[18]+0x00000018u,c->r[26]); // 802C9B54
  W8(c->r[18]+0x00000019u,c->r[27]); // 802C9B58
  W8(c->r[18]+0x0000001Au,c->r[28]); // 802C9B5C
  W8(c->r[18]+0x0000001Bu,c->r[29]); // 802C9B60
  W8(c->r[18]+0x0000001Cu,c->r[30]); // 802C9B64
  W8(c->r[18]+0x0000001Du,c->r[31]); // 802C9B68
  W8(c->r[18]+0x0000001Eu,c->r[12]); // 802C9B6C
  W8(c->r[18]+0x0000001Fu,c->r[11]); // 802C9B70
  W8(c->r[18]+0x00000020u,c->r[10]); // 802C9B74
  W8(c->r[18]+0x00000021u,c->r[9]); // 802C9B78
  W8(c->r[18]+0x00000022u,c->r[8]); // 802C9B7C
  W8(c->r[18]+0x00000023u,c->r[7]); // 802C9B80
  W8(c->r[18]+0x00000024u,c->r[6]); // 802C9B84
  W8(c->r[18]+0x00000025u,c->r[5]); // 802C9B88
  W8(c->r[18]+0x00000026u,c->r[4]); // 802C9B8C
  W8(c->r[18]+0x00000028u,c->r[14]); // 802C9B90
  W8(c->r[18]+0x00000037u,c->r[0]); // 802C9B94
  W8(c->r[18]+0x00000038u,c->r[15]); // 802C9B98
  c->r[11]=c->r[1]+0x00000090u; // 802C9B9C
  c->lr=0x802C9BA4u; f_802F0DE0(c); // 802C9BA0
  c->r[0]=R32(c->r[1]+0x00000094u); // 802C9BA4
  c->lr=c->r[0]; // 802C9BA8
  c->r[1]=c->r[1]+0x00000090u; // 802C9BAC
  return; // 802C9BB0
}

// fn_802C9BB4
void f_802C9BB4(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802C9BB4
  c->r[3]=c->r[3]+0x00003854u; // 802C9BB8
  return; // 802C9BBC
}

// fn_802C9BC0
void f_802C9BC0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802C9BC0
  c->r[4]=0u+0x80510000u; // 802C9BC4
  c->r[4]=c->r[4]+0xFFFFE3A0u; // 802C9BC8
  if (crb(c,2)) { goto L_802C9BE0; } // 802C9BCC
  c->r[0]=0u+0x00000000u; // 802C9BD0
  c->r[5]=c->r[4]+0x00000080u; // 802C9BD4
  W8(c->r[5]+0x00000100u,c->r[0]); // 802C9BD8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802C9BDC
L_802C9BE0:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 802C9BE0
  if (crb(c,2)) { goto L_802C9BF4; } // 802C9BE4
  c->r[5]=c->r[4]+0x000001A0u; // 802C9BE8
  c->r[0]=0u+0x00000000u; // 802C9BEC
  W16(c->r[5]+0x00000060u,c->r[0]); // 802C9BF0
L_802C9BF4:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802C9BF4
  if (crb(c,2)) { goto L_802C9C08; } // 802C9BF8
  c->r[0]=0u+0x00000000u; // 802C9BFC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802C9C00
  W32(c->r[13]+0xFFFFBE44u,c->r[0]); // 802C9C04
L_802C9C08:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 802C9C08
  if (crb(c,2)) { goto L_802C9C38; } // 802C9C0C
  c->r[7]=0u+0x00000001u; // 802C9C10
  c->r[5]=c->r[4]+0x00000000u; // 802C9C14
  c->r[6]=0u+0x00000000u; // 802C9C18
  c->r[0]=0u+0x00000002u; // 802C9C1C
  W8(c->r[4]+0x00000000u,c->r[7]); // 802C9C20
  W8(c->r[5]+0x00000001u,c->r[6]); // 802C9C24
  W8(c->r[5]+0x00000002u,c->r[7]); // 802C9C28
  W8(c->r[5]+0x00000003u,c->r[6]); // 802C9C2C
  W32(c->r[5]+0x00000004u,c->r[0]); // 802C9C30
  W32(c->r[5]+0x00000008u,c->r[6]); // 802C9C34
L_802C9C38:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802C9C38
  if (crb(c,2)) { goto L_802C9C54; } // 802C9C3C
  c->r[0]=0u+0x00000000u; // 802C9C40
  c->r[5]=c->r[4]+0x00000204u; // 802C9C44
  W32(c->r[5]+0x00000008u,c->r[0]); // 802C9C48
  W32(c->r[5]+0x00000004u,c->r[0]); // 802C9C4C
  W32(c->r[4]+0x00000204u,c->r[0]); // 802C9C50
L_802C9C54:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 802C9C54
  if (crb(c,2)) { goto L_802C9C64; } // 802C9C58
  c->r[0]=0u+0x00000000u; // 802C9C5C
  W8(c->r[13]+0xFFFFBE3Cu,c->r[0]); // 802C9C60
L_802C9C64:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 802C9C64
  if (crb(c,2)) { goto L_802C9C74; } // 802C9C68
  c->r[0]=0u+0x00000000u; // 802C9C6C
  W32(c->r[13]+0xFFFFBE40u,c->r[0]); // 802C9C70
L_802C9C74:;
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 802C9C74
  if (crb(c,2)) { goto L_802C9C88; } // 802C9C78
  c->r[0]=R32(c->r[13]+0xFFFFBE50u); // 802C9C7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802C9C80
  W32(c->r[13]+0xFFFFBE50u,c->r[0]); // 802C9C84
L_802C9C88:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 802C9C88
  if (crb(c,2)) { goto L_802C9C98; } // 802C9C8C
  c->r[0]=0u+0x00000000u; // 802C9C90
  W32(c->r[4]+0x00000A40u,c->r[0]); // 802C9C94
L_802C9C98:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 802C9C98
  if (crb(c,2)) { goto L_802C9CE0; } // 802C9C9C
  c->r[5]=c->r[4]+0x00001054u; // 802C9CA0
  c->r[6]=0u+0xFFFFFFFFu; // 802C9CA4
  c->r[0]=0u+0x00000000u; // 802C9CA8
  W32(c->r[5]+0x00000010u,c->r[6]); // 802C9CAC
  W32(c->r[5]+0x00000014u,c->r[0]); // 802C9CB0
  W32(c->r[5]+0x00000018u,c->r[0]); // 802C9CB4
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 802C9CB8
  W32(c->r[5]+0x00000020u,c->r[0]); // 802C9CBC
  W8(c->r[5]+0x0000002Bu,c->r[6]); // 802C9CC0
  W8(c->r[5]+0x0000002Au,c->r[6]); // 802C9CC4
  W8(c->r[5]+0x00000029u,c->r[6]); // 802C9CC8
  W8(c->r[5]+0x00000028u,c->r[6]); // 802C9CCC
  W8(c->r[5]+0x00000027u,c->r[6]); // 802C9CD0
  W8(c->r[5]+0x00000026u,c->r[6]); // 802C9CD4
  W8(c->r[5]+0x00000025u,c->r[6]); // 802C9CD8
  W8(c->r[5]+0x00000024u,c->r[6]); // 802C9CDC
L_802C9CE0:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 802C9CE0
  if (crb(c,2)) { goto L_802C9CFC; } // 802C9CE4
  c->r[0]=0u+0x00000000u; // 802C9CE8
  c->r[3]=c->r[4]+0x00000230u; // 802C9CEC
  W32(c->r[4]+0x00000230u,c->r[0]); // 802C9CF0
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C9CF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 802C9CF8
L_802C9CFC:;
  c->r[0]=0u+0x00000001u; // 802C9CFC
  W8(c->r[13]+0xFFFFBE38u,c->r[0]); // 802C9D00
  return; // 802C9D04
}

// fn_802C9D08
void f_802C9D08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9D08
  c->r[0]=c->lr; // 802C9D0C
  cmps(c,0,(int32_t)c->r[4],1); // 802C9D10
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C9D14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802C9D18
  W32(c->r[1]+0x00000028u,c->r[30]); // 802C9D1C
  W32(c->r[1]+0x00000024u,c->r[29]); // 802C9D20
  c->r[29]=c->r[6]|c->r[6]; // 802C9D24
  W32(c->r[1]+0x00000020u,c->r[28]); // 802C9D28
  c->r[28]=c->r[3]|c->r[3]; // 802C9D2C
  if (crb(c,0)) { goto L_802C9E4C; } // 802C9D30
  cmps(c,0,(int32_t)c->r[4],3); // 802C9D34
  if (crb(c,1)) { goto L_802C9E4C; } // 802C9D38
  cmps(c,0,(int32_t)c->r[7],0); // 802C9D3C
  if (crb(c,2)) { goto L_802C9E4C; } // 802C9D40
  cmps(c,0,(int32_t)c->r[7],3); // 802C9D44
  if (crb(c,2)) { goto L_802C9E4C; } // 802C9D48
  c->r[6]=c->r[4]+0xFFFFFFFFu; // 802C9D4C
  cmps(c,0,(int32_t)c->r[5],0); // 802C9D50
  c->r[4]=c->r[3]+c->r[6]; // 802C9D54
  c->r[0]=0u+0x00000001u; // 802C9D58
  W8(c->r[4]+0x00000004u,c->r[0]); // 802C9D5C
  if (crb(c,2)) { goto L_802C9E3C; } // 802C9D60
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9D64
  c->r[30]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 802C9D68
  {uint32_t ea=c->r[2]+0xFFFFAC44u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C9D6C
  cmps(c,0,(int32_t)c->r[7],2); // 802C9D70
  c->f[0]=-c->f[0]; // 802C9D74
  c->r[3]=c->r[3]+c->r[30]; // 802C9D78
  c->r[31]=c->r[3]+0x00000008u; // 802C9D7C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802C9D80
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802C9D84
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9D88
  c->f[0]=-c->f[0]; // 802C9D8C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802C9D90
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802C9D94
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9D98
  c->f[0]=-c->f[0]; // 802C9D9C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802C9DA0
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 802C9DA4
  if (!crb(c,2)) { goto L_802C9E14; } // 802C9DA8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C9DAC
  c->r[3]=c->r[1]+0x00000008u; // 802C9DB0
  {uint32_t ea=c->r[2]+0xFFFFAC40u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9DB4
  c->r[4]=c->r[3]|c->r[3]; // 802C9DB8
  {uint32_t ea=c->r[5]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C9DBC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C9DC0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802C9DC4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 802C9DC8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 802C9DCC
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802C9DD0
  c->lr=0x802C9DD8u; f_80354444(c); // 802C9DD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9DD8
  c->r[3]=c->r[28]+c->r[30]; // 802C9DDC
  {uint32_t ea=c->r[2]+0xFFFFAC44u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C9DE0
  c->f[0]=-c->f[0]; // 802C9DE4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802C9DE8
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 802C9DEC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9DF0
  c->f[0]=-c->f[0]; // 802C9DF4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802C9DF8
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C9DFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9E00
  c->f[0]=-c->f[0]; // 802C9E04
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802C9E08
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 802C9E0C
  goto L_802C9E24; // 802C9E10
L_802C9E14:;
  {uint32_t ea=c->r[2]+0xFFFFAC34u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C9E14
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 802C9E18
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C9E1C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 802C9E20
L_802C9E24:;
  c->r[3]=c->r[28]+c->r[30]; // 802C9E24
  c->r[4]=c->r[29]|c->r[29]; // 802C9E28
  c->r[5]=c->r[31]|c->r[31]; // 802C9E2C
  c->r[3]=c->r[3]+0x00000008u; // 802C9E30
  c->lr=0x802C9E38u; f_803535F4(c); // 802C9E34
  goto L_802C9E4C; // 802C9E38
L_802C9E3C:;
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)48); // 802C9E3C
  c->r[3]=c->r[3]+c->r[0]; // 802C9E40
  c->r[3]=c->r[3]+0x00000008u; // 802C9E44
  c->lr=0x802C9E4Cu; f_8026CD7C(c); // 802C9E48
L_802C9E4C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C9E4C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802C9E50
  c->r[30]=R32(c->r[1]+0x00000028u); // 802C9E54
  c->r[29]=R32(c->r[1]+0x00000024u); // 802C9E58
  c->r[28]=R32(c->r[1]+0x00000020u); // 802C9E5C
  c->lr=c->r[0]; // 802C9E60
  c->r[1]=c->r[1]+0x00000030u; // 802C9E64
  return; // 802C9E68
}

// fn_802C9E6C
void f_802C9E6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C9E6C
  c->r[0]=c->lr; // 802C9E70
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C9E74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C9E78
  c->r[31]=c->r[3]|c->r[3]; // 802C9E7C
  c->r[3]=c->r[3]+0x00000008u; // 802C9E80
  c->lr=0x802C9E88u; f_80353594(c); // 802C9E84
  c->r[3]=c->r[31]+0x00000038u; // 802C9E88
  c->lr=0x802C9E90u; f_80353594(c); // 802C9E8C
  c->r[3]=c->r[31]+0x00000068u; // 802C9E90
  c->lr=0x802C9E98u; f_80353594(c); // 802C9E94
  c->r[0]=0u+0x00000000u; // 802C9E98
  W8(c->r[31]+0x00000006u,c->r[0]); // 802C9E9C
  W8(c->r[31]+0x00000005u,c->r[0]); // 802C9EA0
  W8(c->r[31]+0x00000004u,c->r[0]); // 802C9EA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C9EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C9EAC
  c->lr=c->r[0]; // 802C9EB0
  c->r[1]=c->r[1]+0x00000010u; // 802C9EB4
  return; // 802C9EB8
}

// fn_802C9EBC
void f_802C9EBC(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000004u); // 802C9EBC
  cmps(c,0,(int32_t)c->r[0],0); // 802C9EC0
  if (crb(c,2)) { goto L_802C9F34; } // 802C9EC4
  c->r[6]=R32(c->r[3]+0x00000008u); // 802C9EC8
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 802C9ECC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C9ED0
  W32(c->r[4]+0x00000004u,c->r[6]); // 802C9ED4
  c->r[0]=c->r[0]|0x00000001u; // 802C9ED8
  W32(c->r[4]+0x00000008u,c->r[5]); // 802C9EDC
  c->r[6]=R32(c->r[3]+0x00000010u); // 802C9EE0
  c->r[5]=R32(c->r[3]+0x00000014u); // 802C9EE4
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 802C9EE8
  W32(c->r[4]+0x00000010u,c->r[5]); // 802C9EEC
  c->r[6]=R32(c->r[3]+0x00000018u); // 802C9EF0
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 802C9EF4
  W32(c->r[4]+0x00000014u,c->r[6]); // 802C9EF8
  W32(c->r[4]+0x00000018u,c->r[5]); // 802C9EFC
  c->r[6]=R32(c->r[3]+0x00000020u); // 802C9F00
  c->r[5]=R32(c->r[3]+0x00000024u); // 802C9F04
  W32(c->r[4]+0x0000001Cu,c->r[6]); // 802C9F08
  W32(c->r[4]+0x00000020u,c->r[5]); // 802C9F0C
  c->r[6]=R32(c->r[3]+0x00000028u); // 802C9F10
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802C9F14
  W32(c->r[4]+0x00000024u,c->r[6]); // 802C9F18
  W32(c->r[4]+0x00000028u,c->r[5]); // 802C9F1C
  c->r[6]=R32(c->r[3]+0x00000030u); // 802C9F20
  c->r[5]=R32(c->r[3]+0x00000034u); // 802C9F24
  W32(c->r[4]+0x0000002Cu,c->r[6]); // 802C9F28
  W32(c->r[4]+0x00000030u,c->r[5]); // 802C9F2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C9F30
L_802C9F34:;
  c->r[0]=R8(c->r[3]+0x00000005u); // 802C9F34
  cmps(c,0,(int32_t)c->r[0],0); // 802C9F38
  if (crb(c,2)) { goto L_802C9FAC; } // 802C9F3C
  c->r[6]=R32(c->r[3]+0x00000038u); // 802C9F40
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 802C9F44
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C9F48
  W32(c->r[4]+0x00000034u,c->r[6]); // 802C9F4C
  c->r[0]=c->r[0]|0x00000002u; // 802C9F50
  W32(c->r[4]+0x00000038u,c->r[5]); // 802C9F54
  c->r[6]=R32(c->r[3]+0x00000040u); // 802C9F58
  c->r[5]=R32(c->r[3]+0x00000044u); // 802C9F5C
  W32(c->r[4]+0x0000003Cu,c->r[6]); // 802C9F60
  W32(c->r[4]+0x00000040u,c->r[5]); // 802C9F64
  c->r[6]=R32(c->r[3]+0x00000048u); // 802C9F68
  c->r[5]=R32(c->r[3]+0x0000004Cu); // 802C9F6C
  W32(c->r[4]+0x00000044u,c->r[6]); // 802C9F70
  W32(c->r[4]+0x00000048u,c->r[5]); // 802C9F74
  c->r[6]=R32(c->r[3]+0x00000050u); // 802C9F78
  c->r[5]=R32(c->r[3]+0x00000054u); // 802C9F7C
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 802C9F80
  W32(c->r[4]+0x00000050u,c->r[5]); // 802C9F84
  c->r[6]=R32(c->r[3]+0x00000058u); // 802C9F88
  c->r[5]=R32(c->r[3]+0x0000005Cu); // 802C9F8C
  W32(c->r[4]+0x00000054u,c->r[6]); // 802C9F90
  W32(c->r[4]+0x00000058u,c->r[5]); // 802C9F94
  c->r[6]=R32(c->r[3]+0x00000060u); // 802C9F98
  c->r[5]=R32(c->r[3]+0x00000064u); // 802C9F9C
  W32(c->r[4]+0x0000005Cu,c->r[6]); // 802C9FA0
  W32(c->r[4]+0x00000060u,c->r[5]); // 802C9FA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C9FA8
L_802C9FAC:;
  c->r[0]=R8(c->r[3]+0x00000006u); // 802C9FAC
  cmps(c,0,(int32_t)c->r[0],0); // 802C9FB0
  if (crb(c,2)) return; // 802C9FB4
  c->r[6]=R32(c->r[3]+0x00000068u); // 802C9FB8
  c->r[5]=R32(c->r[3]+0x0000006Cu); // 802C9FBC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C9FC0
  W32(c->r[4]+0x00000064u,c->r[6]); // 802C9FC4
  c->r[0]=c->r[0]|0x00000004u; // 802C9FC8
  W32(c->r[4]+0x00000068u,c->r[5]); // 802C9FCC
  c->r[6]=R32(c->r[3]+0x00000070u); // 802C9FD0
  c->r[5]=R32(c->r[3]+0x00000074u); // 802C9FD4
  W32(c->r[4]+0x0000006Cu,c->r[6]); // 802C9FD8
  W32(c->r[4]+0x00000070u,c->r[5]); // 802C9FDC
  c->r[6]=R32(c->r[3]+0x00000078u); // 802C9FE0
  c->r[5]=R32(c->r[3]+0x0000007Cu); // 802C9FE4
  W32(c->r[4]+0x00000074u,c->r[6]); // 802C9FE8
  W32(c->r[4]+0x00000078u,c->r[5]); // 802C9FEC
  c->r[6]=R32(c->r[3]+0x00000080u); // 802C9FF0
  c->r[5]=R32(c->r[3]+0x00000084u); // 802C9FF4
  W32(c->r[4]+0x0000007Cu,c->r[6]); // 802C9FF8
  W32(c->r[4]+0x00000080u,c->r[5]); // 802C9FFC
  c->r[6]=R32(c->r[3]+0x00000088u); // 802CA000
  c->r[5]=R32(c->r[3]+0x0000008Cu); // 802CA004
  W32(c->r[4]+0x00000084u,c->r[6]); // 802CA008
  W32(c->r[4]+0x00000088u,c->r[5]); // 802CA00C
  c->r[5]=R32(c->r[3]+0x00000090u); // 802CA010
  c->r[3]=R32(c->r[3]+0x00000094u); // 802CA014
  W32(c->r[4]+0x0000008Cu,c->r[5]); // 802CA018
  W32(c->r[4]+0x00000090u,c->r[3]); // 802CA01C
  W32(c->r[4]+0x00000000u,c->r[0]); // 802CA020
  return; // 802CA024
}

// fn_802CA028
void f_802CA028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CA028
  c->r[0]=c->lr; // 802CA02C
  cmps(c,0,(int32_t)c->r[3],0); // 802CA030
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CA034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CA038
  c->r[31]=c->r[3]|c->r[3]; // 802CA03C
  if (crb(c,2)) { goto L_802CA050; } // 802CA040
  cmps(c,0,(int32_t)c->r[4],0); // 802CA044
  if (!crb(c,1)) { goto L_802CA050; } // 802CA048
  c->lr=0x802CA050u; f_80047B20(c); // 802CA04C
L_802CA050:;
  c->r[3]=c->r[31]|c->r[31]; // 802CA050
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CA054
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CA058
  c->lr=c->r[0]; // 802CA05C
  c->r[1]=c->r[1]+0x00000010u; // 802CA060
  return; // 802CA064
}

// fn_802CA068
void f_802CA068(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CA068
  c->r[0]=c->lr; // 802CA06C
  c->r[4]=0u+0x00000000u; // 802CA070
  c->r[5]=0u+0x0000006Cu; // 802CA074
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CA078
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802CA07C
  c->r[31]=0u+0x80510000u; // 802CA080
  c->r[31]=c->r[31]+0xFFFFE3A0u; // 802CA084
  W32(c->r[1]+0x00000018u,c->r[30]); // 802CA088
  c->r[30]=0u+0x00000000u; // 802CA08C
  c->r[6]=c->r[31]+0x00000000u; // 802CA090
  c->r[3]=c->r[31]+0x0000000Cu; // 802CA094
  W32(c->r[1]+0x00000014u,c->r[29]); // 802CA098
  c->r[29]=0u+0x00000002u; // 802CA09C
  W32(c->r[1]+0x00000010u,c->r[28]); // 802CA0A0
  c->r[28]=0u+0x00000001u; // 802CA0A4
  W8(c->r[13]+0xFFFFBE38u,c->r[28]); // 802CA0A8
  W8(c->r[31]+0x00000000u,c->r[28]); // 802CA0AC
  W8(c->r[6]+0x00000001u,c->r[30]); // 802CA0B0
  W8(c->r[6]+0x00000002u,c->r[28]); // 802CA0B4
  W8(c->r[6]+0x00000003u,c->r[30]); // 802CA0B8
  W32(c->r[6]+0x00000004u,c->r[29]); // 802CA0BC
  W32(c->r[6]+0x00000008u,c->r[30]); // 802CA0C0
  c->lr=0x802CA0C8u; f_800060B8(c); // 802CA0C4
  c->r[8]=0u+0x802C0000u; // 802CA0C8
  c->r[6]=0u+0x802C0000u; // 802CA0CC
  c->r[10]=c->r[31]+0x00000210u; // 802CA0D0
  c->r[7]=c->r[31]+0x00000240u; // 802CA0D4
  c->r[11]=c->r[31]+0x00000204u; // 802CA0D8
  c->r[9]=c->r[31]+0x00000230u; // 802CA0DC
  c->r[6]=c->r[6]+0x00006A98u; // 802CA0E0
  c->r[5]=0u+0x802C0000u; // 802CA0E4
  c->r[4]=0u+0x802C0000u; // 802CA0E8
  c->r[3]=c->r[31]+0x00000080u; // 802CA0EC
  c->r[12]=c->r[31]+0x000001A0u; // 802CA0F0
  c->r[8]=c->r[8]+0x000073F4u; // 802CA0F4
  c->r[5]=c->r[5]+0x00006E7Cu; // 802CA0F8
  c->r[4]=c->r[4]+0x00006FA8u; // 802CA0FC
  W8(c->r[3]+0x00000100u,c->r[30]); // 802CA100
  c->r[0]=0u+0x000000FBu; // 802CA104
  c->r[3]=0u+0x00000028u; // 802CA108
  W16(c->r[12]+0x00000060u,c->r[30]); // 802CA10C
  W32(c->r[11]+0x00000008u,c->r[30]); // 802CA110
  W32(c->r[11]+0x00000004u,c->r[30]); // 802CA114
  W32(c->r[31]+0x00000204u,c->r[30]); // 802CA118
  W8(c->r[13]+0xFFFFBE3Cu,c->r[30]); // 802CA11C
  W32(c->r[13]+0xFFFFBE40u,c->r[30]); // 802CA120
  W32(c->r[10]+0x0000001Cu,c->r[30]); // 802CA124
  W32(c->r[10]+0x00000018u,c->r[30]); // 802CA128
  W32(c->r[10]+0x00000014u,c->r[30]); // 802CA12C
  W32(c->r[10]+0x00000010u,c->r[30]); // 802CA130
  W32(c->r[10]+0x0000000Cu,c->r[30]); // 802CA134
  W32(c->r[10]+0x00000008u,c->r[30]); // 802CA138
  W32(c->r[10]+0x00000004u,c->r[30]); // 802CA13C
  W32(c->r[31]+0x00000210u,c->r[30]); // 802CA140
  W32(c->r[13]+0xFFFFBE44u,c->r[30]); // 802CA144
  W32(c->r[31]+0x00000230u,c->r[30]); // 802CA148
  W32(c->r[9]+0x00000004u,c->r[30]); // 802CA14C
  W32(c->r[9]+0x00000008u,c->r[30]); // 802CA150
  W32(c->r[31]+0x00000240u,c->r[8]); // 802CA154
  W32(c->r[7]+0x00000004u,c->r[30]); // 802CA158
  W32(c->r[7]+0x00000008u,c->r[6]); // 802CA15C
  W32(c->r[7]+0x0000000Cu,c->r[28]); // 802CA160
  W32(c->r[7]+0x00000010u,c->r[5]); // 802CA164
  W32(c->r[7]+0x00000014u,c->r[29]); // 802CA168
  W32(c->r[7]+0x00000018u,c->r[6]); // 802CA16C
  W32(c->r[7]+0x0000001Cu,c->r[28]); // 802CA170
  W32(c->r[7]+0x00000020u,c->r[4]); // 802CA174
  W32(c->r[7]+0x00000024u,c->r[28]); // 802CA178
  c->ctr=c->r[0]; // 802CA17C
L_802CA180:;
  W32(c->r[7]+c->r[3],c->r[8]); // 802CA180
  c->r[4]=c->r[7]+c->r[3]; // 802CA184
  c->r[3]=c->r[3]+0x00000008u; // 802CA188
  W32(c->r[4]+0x00000004u,c->r[30]); // 802CA18C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802CA180; } // 802CA190
  c->r[3]=0u+0x00000000u; // 802CA194
  c->r[29]=c->r[31]+0x00000A40u; // 802CA198
  c->r[0]=0u+0xFFFFFFFFu; // 802CA19C
  W32(c->r[31]+0x00000A40u,c->r[3]); // 802CA1A0
  c->r[28]=0u+0x00000000u; // 802CA1A4
  c->r[30]=0u+0x00000000u; // 802CA1A8
  W32(c->r[29]+0x00000004u,c->r[0]); // 802CA1AC
L_802CA1B0:;
  c->r[4]=c->r[29]+c->r[30]; // 802CA1B0
  c->r[3]=c->r[1]+0x00000008u; // 802CA1B4
  c->r[4]=c->r[4]+0x00000008u; // 802CA1B8
  c->lr=0x802CA1C0u; f_802DBE30(c); // 802CA1BC
  c->lr=0x802CA1C4u; f_802DBE38(c); // 802CA1C0
  c->r[28]=c->r[28]+0x00000001u; // 802CA1C4
  c->r[30]=c->r[30]+0x00000030u; // 802CA1C8
  cmpu(c,0,c->r[28],0x00000020u); // 802CA1CC
  if (crb(c,0)) { IRQCHK(c); goto L_802CA1B0; } // 802CA1D0
  c->r[28]=c->r[31]+0x00001054u; // 802CA1D4
  c->r[6]=0u+0x00000080u; // 802CA1D8
  c->r[3]=c->r[28]|c->r[28]; // 802CA1DC
  c->r[8]=0u+0x00000080u; // 802CA1E0
  c->r[4]=c->r[28]+0x0000002Cu; // 802CA1E4
  c->r[5]=c->r[28]+0x0000222Cu; // 802CA1E8
  c->r[7]=c->r[28]+0x0000242Cu; // 802CA1EC
  c->lr=0x802CA1F4u; f_802DC254(c); // 802CA1F0
  c->r[4]=0u+0x802C0000u; // 802CA1F4
  c->r[5]=0u+0x802C0000u; // 802CA1F8
  c->r[3]=c->r[28]+0x0000002Cu; // 802CA1FC
  c->r[6]=0u+0x00000044u; // 802CA200
  c->r[4]=c->r[4]+0x00007474u; // 802CA204
  c->r[5]=c->r[5]+0x00007480u; // 802CA208
  c->r[7]=0u+0x00000080u; // 802CA20C
  c->lr=0x802CA214u; f_802F07B0(c); // 802CA210
  c->r[0]=0u+0xFFFFFFFFu; // 802CA214
  c->r[30]=0u+0x00000000u; // 802CA218
  c->r[4]=0u+0x802D0000u; // 802CA21C
  W32(c->r[28]+0x00000010u,c->r[0]); // 802CA220
  c->r[3]=c->r[28]|c->r[28]; // 802CA224
  c->r[5]=c->r[31]+0x00001048u; // 802CA228
  W32(c->r[28]+0x00000014u,c->r[30]); // 802CA22C
  c->r[4]=c->r[4]+0xFFFFA2FCu; // 802CA230
  W32(c->r[28]+0x00000018u,c->r[30]); // 802CA234
  W32(c->r[28]+0x0000001Cu,c->r[30]); // 802CA238
  W32(c->r[28]+0x00000020u,c->r[30]); // 802CA23C
  W8(c->r[28]+0x0000002Bu,c->r[0]); // 802CA240
  W8(c->r[28]+0x0000002Au,c->r[0]); // 802CA244
  W8(c->r[28]+0x00000029u,c->r[0]); // 802CA248
  W8(c->r[28]+0x00000028u,c->r[0]); // 802CA24C
  W8(c->r[28]+0x00000027u,c->r[0]); // 802CA250
  W8(c->r[28]+0x00000026u,c->r[0]); // 802CA254
  W8(c->r[28]+0x00000025u,c->r[0]); // 802CA258
  W8(c->r[28]+0x00000024u,c->r[0]); // 802CA25C
  c->lr=0x802CA264u; f_802F0334(c); // 802CA260
  c->r[3]=c->r[31]+0x00003A80u; // 802CA264
  c->lr=0x802CA26Cu; f_802C79CC(c); // 802CA268
  c->r[3]=0u+0x80480000u; // 802CA26C
  c->r[28]=c->r[31]+0x00005500u; // 802CA270
  c->r[3]=c->r[3]+0x00006FF8u; // 802CA274
  c->r[4]=c->r[13]+0xFFFFBE50u; // 802CA278
  W32(c->r[13]+0xFFFFBE50u,c->r[30]); // 802CA27C
  c->r[5]=c->r[28]+0x00000008u; // 802CA280
  c->r[0]=c->r[28]+0x00000098u; // 802CA284
  W8(c->r[4]+0x00000004u,c->r[30]); // 802CA288
  W32(c->r[28]+0x00000000u,c->r[3]); // 802CA28C
L_802CA290:;
  c->r[5]=c->r[5]+0x00000030u; // 802CA290
  cmpu(c,0,c->r[5],c->r[0]); // 802CA294
  if (crb(c,0)) { IRQCHK(c); goto L_802CA290; } // 802CA298
  c->r[3]=c->r[28]+0x00000008u; // 802CA29C
  c->lr=0x802CA2A4u; f_80353594(c); // 802CA2A0
  c->r[3]=c->r[28]+0x00000038u; // 802CA2A4
  c->lr=0x802CA2ACu; f_80353594(c); // 802CA2A8
  c->r[3]=c->r[28]+0x00000068u; // 802CA2AC
  c->lr=0x802CA2B4u; f_80353594(c); // 802CA2B0
  c->r[0]=0u+0x00000000u; // 802CA2B4
  c->r[4]=0u+0x802D0000u; // 802CA2B8
  W8(c->r[28]+0x00000006u,c->r[0]); // 802CA2BC
  c->r[3]=c->r[31]+0x00005500u; // 802CA2C0
  c->r[4]=c->r[4]+0xFFFFA028u; // 802CA2C4
  c->r[5]=c->r[31]+0x000054F0u; // 802CA2C8
  W8(c->r[28]+0x00000005u,c->r[0]); // 802CA2CC
  W8(c->r[28]+0x00000004u,c->r[0]); // 802CA2D0
  W8(c->r[28]+0x00000007u,c->r[0]); // 802CA2D4
  c->lr=0x802CA2DCu; f_802F0334(c); // 802CA2D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802CA2DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802CA2E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802CA2E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802CA2E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 802CA2EC
  c->lr=c->r[0]; // 802CA2F0
  c->r[1]=c->r[1]+0x00000020u; // 802CA2F4
  return; // 802CA2F8
}

// fn_802CA2FC
void f_802CA2FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CA2FC
  c->r[0]=c->lr; // 802CA300
  cmps(c,0,(int32_t)c->r[3],0); // 802CA304
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CA308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CA30C
  c->r[31]=c->r[4]|c->r[4]; // 802CA310
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CA314
  c->r[30]=c->r[3]|c->r[3]; // 802CA318
  if (crb(c,2)) { goto L_802CA348; } // 802CA31C
  c->r[4]=0u+0x802C0000u; // 802CA320
  c->r[5]=0u+0x00000044u; // 802CA324
  c->r[4]=c->r[4]+0x00007480u; // 802CA328
  c->r[6]=0u+0x00000080u; // 802CA32C
  c->r[3]=c->r[3]+0x0000002Cu; // 802CA330
  c->lr=0x802CA338u; f_802F08A8(c); // 802CA334
  cmps(c,0,(int32_t)c->r[31],0); // 802CA338
  if (!crb(c,1)) { goto L_802CA348; } // 802CA33C
  c->r[3]=c->r[30]|c->r[30]; // 802CA340
  c->lr=0x802CA348u; f_80047B20(c); // 802CA344
L_802CA348:;
  c->r[3]=c->r[30]|c->r[30]; // 802CA348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CA34C
  c->r[30]=R32(c->r[1]+0x00000008u); // 802CA350
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CA354
  c->lr=c->r[0]; // 802CA358
  c->r[1]=c->r[1]+0x00000010u; // 802CA35C
  return; // 802CA360
}

// fn_802CA364
void f_802CA364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CA364
  c->r[0]=c->lr; // 802CA368
  cmps(c,0,(int32_t)c->r[7],0); // 802CA36C
  W32(c->r[1]+0x00000134u,c->r[0]); // 802CA370
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 802CA374
  c->r[31]=c->r[6]|c->r[6]; // 802CA378
  W32(c->r[1]+0x00000128u,c->r[30]); // 802CA37C
  c->r[30]=c->r[5]|c->r[5]; // 802CA380
  W32(c->r[1]+0x00000124u,c->r[29]); // 802CA384
  c->r[29]=c->r[4]|c->r[4]; // 802CA388
  W32(c->r[1]+0x00000120u,c->r[28]); // 802CA38C
  c->r[28]=c->r[3]|c->r[3]; // 802CA390
  if (!crb(c,2)) { goto L_802CA77C; } // 802CA394
  c->r[0]=0u+0x00000000u; // 802CA398
  cmps(c,0,(int32_t)c->r[5],0); // 802CA39C
  W32(c->r[1]+0x00000088u,c->r[0]); // 802CA3A0
  if (crb(c,2)) { goto L_802CA3B4; } // 802CA3A4
  c->r[0]=R32(c->r[5]+0x00000024u); // 802CA3A8
  cmps(c,0,(int32_t)c->r[0],0); // 802CA3AC
  if (!crb(c,2)) { goto L_802CA3C4; } // 802CA3B0
L_802CA3B4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CA3B4
  c->r[0]=c->r[3]+0x0000001Cu; // 802CA3B8
  W32(c->r[1]+0x00000088u,c->r[0]); // 802CA3BC
  goto L_802CA3CC; // 802CA3C0
L_802CA3C4:;
  c->r[0]=R32(c->r[5]+0x00000024u); // 802CA3C4
  W32(c->r[1]+0x00000088u,c->r[0]); // 802CA3C8
L_802CA3CC:;
  c->r[3]=c->r[1]+0x00000088u; // 802CA3CC
  c->lr=0x802CA3D4u; f_802BA31C(c); // 802CA3D0
  c->lr=0x802CA3D8u; f_802C9790(c); // 802CA3D4
  c->r[0]=R32(c->r[1]+0x00000088u); // 802CA3D8
  c->r[3]=c->r[1]+0x0000006Cu; // 802CA3DC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802CA3E0
  c->lr=0x802CA3E8u; f_802C7A64(c); // 802CA3E4
  cmps(c,0,(int32_t)c->r[30],0); // 802CA3E8
  if (crb(c,2)) { goto L_802CA3FC; } // 802CA3EC
  c->r[0]=R32(c->r[30]+0x00000004u); // 802CA3F0
  cmps(c,0,(int32_t)c->r[0],0); // 802CA3F4
  if (!crb(c,2)) { goto L_802CA414; } // 802CA3F8
L_802CA3FC:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 802CA3FC
  c->r[3]=c->r[1]+0x00000068u; // 802CA400
  c->r[0]=c->r[4]+0x00000144u; // 802CA404
  W32(c->r[1]+0x00000068u,c->r[0]); // 802CA408
  c->lr=0x802CA410u; f_802C7D3C(c); // 802CA40C
  goto L_802CA424; // 802CA410
L_802CA414:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 802CA414
  c->r[3]=c->r[1]+0x00000064u; // 802CA418
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CA41C
  c->lr=0x802CA424u; f_802C7D3C(c); // 802CA420
L_802CA424:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA424
  if (crb(c,2)) { goto L_802CA438; } // 802CA428
  c->r[0]=R32(c->r[30]+0x00000000u); // 802CA42C
  cmps(c,0,(int32_t)c->r[0],0); // 802CA430
  if (!crb(c,2)) { goto L_802CA450; } // 802CA434
L_802CA438:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 802CA438
  c->r[3]=c->r[1]+0x00000060u; // 802CA43C
  c->r[0]=c->r[4]+0x00000040u; // 802CA440
  W32(c->r[1]+0x00000060u,c->r[0]); // 802CA444
  c->lr=0x802CA44Cu; f_802C7AD4(c); // 802CA448
  goto L_802CA460; // 802CA44C
L_802CA450:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 802CA450
  c->r[3]=c->r[1]+0x0000005Cu; // 802CA454
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802CA458
  c->lr=0x802CA460u; f_802C7AD4(c); // 802CA45C
L_802CA460:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA460
  if (crb(c,2)) { goto L_802CA474; } // 802CA464
  c->r[0]=R32(c->r[30]+0x00000008u); // 802CA468
  cmps(c,0,(int32_t)c->r[0],0); // 802CA46C
  if (!crb(c,2)) { goto L_802CA48C; } // 802CA470
L_802CA474:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 802CA474
  c->r[3]=c->r[1]+0x00000058u; // 802CA478
  c->r[0]=c->r[4]+0x00000014u; // 802CA47C
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CA480
  c->lr=0x802CA488u; f_802C7E88(c); // 802CA484
  goto L_802CA49C; // 802CA488
L_802CA48C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 802CA48C
  c->r[3]=c->r[1]+0x00000054u; // 802CA490
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CA494
  c->lr=0x802CA49Cu; f_802C7E88(c); // 802CA498
L_802CA49C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA49C
  if (crb(c,2)) { goto L_802CA4B0; } // 802CA4A0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 802CA4A4
  cmps(c,0,(int32_t)c->r[0],0); // 802CA4A8
  if (!crb(c,2)) { goto L_802CA4C8; } // 802CA4AC
L_802CA4B0:;
  c->r[3]=c->r[28]|c->r[28]; // 802CA4B0
  c->lr=0x802CA4B8u; f_802BB230(c); // 802CA4B4
  W32(c->r[1]+0x00000050u,c->r[3]); // 802CA4B8
  c->r[3]=c->r[1]+0x00000050u; // 802CA4BC
  c->lr=0x802CA4C4u; f_802C8054(c); // 802CA4C0
  goto L_802CA4D8; // 802CA4C4
L_802CA4C8:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 802CA4C8
  c->r[3]=c->r[1]+0x0000004Cu; // 802CA4CC
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802CA4D0
  c->lr=0x802CA4D8u; f_802C8054(c); // 802CA4D4
L_802CA4D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA4D8
  if (crb(c,2)) { goto L_802CA4EC; } // 802CA4DC
  c->r[0]=R32(c->r[30]+0x00000010u); // 802CA4E0
  cmps(c,0,(int32_t)c->r[0],0); // 802CA4E4
  if (!crb(c,2)) { goto L_802CA518; } // 802CA4E8
L_802CA4EC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802CA4EC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CA4F0
  cmps(c,0,(int32_t)c->r[0],0); // 802CA4F4
  if (crb(c,2)) { goto L_802CA504; } // 802CA4F8
  c->r[0]=c->r[3]+c->r[0]; // 802CA4FC
  goto L_802CA508; // 802CA500
L_802CA504:;
  c->r[0]=0u+0x00000000u; // 802CA504
L_802CA508:;
  W32(c->r[1]+0x00000048u,c->r[0]); // 802CA508
  c->r[3]=c->r[1]+0x00000048u; // 802CA50C
  c->lr=0x802CA514u; f_802C8264(c); // 802CA510
  goto L_802CA528; // 802CA514
L_802CA518:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 802CA518
  c->r[3]=c->r[1]+0x00000044u; // 802CA51C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802CA520
  c->lr=0x802CA528u; f_802C8264(c); // 802CA524
L_802CA528:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA528
  if (crb(c,2)) { goto L_802CA53C; } // 802CA52C
  c->r[0]=R32(c->r[30]+0x00000014u); // 802CA530
  cmps(c,0,(int32_t)c->r[0],0); // 802CA534
  if (!crb(c,2)) { goto L_802CA56C; } // 802CA538
L_802CA53C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802CA53C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CA540
  cmps(c,0,(int32_t)c->r[0],0); // 802CA544
  if (crb(c,2)) { goto L_802CA554; } // 802CA548
  c->r[3]=c->r[3]+c->r[0]; // 802CA54C
  goto L_802CA558; // 802CA550
L_802CA554:;
  c->r[3]=0u+0x00000000u; // 802CA554
L_802CA558:;
  c->r[0]=c->r[3]+0x00000020u; // 802CA558
  c->r[3]=c->r[1]+0x00000040u; // 802CA55C
  W32(c->r[1]+0x00000040u,c->r[0]); // 802CA560
  c->lr=0x802CA568u; f_802C8310(c); // 802CA564
  goto L_802CA57C; // 802CA568
L_802CA56C:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 802CA56C
  c->r[3]=c->r[1]+0x0000003Cu; // 802CA570
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802CA574
  c->lr=0x802CA57Cu; f_802C8310(c); // 802CA578
L_802CA57C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA57C
  if (crb(c,2)) { goto L_802CA590; } // 802CA580
  c->r[0]=R32(c->r[30]+0x00000018u); // 802CA584
  cmps(c,0,(int32_t)c->r[0],0); // 802CA588
  if (!crb(c,2)) { goto L_802CA5FC; } // 802CA58C
L_802CA590:;
  cmps(c,0,(int32_t)c->r[31],0); // 802CA590
  if (crb(c,2)) { goto L_802CA5CC; } // 802CA594
  c->r[3]=R32(c->r[28]+0x00000000u); // 802CA598
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CA59C
  cmps(c,0,(int32_t)c->r[0],0); // 802CA5A0
  if (crb(c,2)) { goto L_802CA5B0; } // 802CA5A4
  c->r[3]=c->r[3]+c->r[0]; // 802CA5A8
  goto L_802CA5B4; // 802CA5AC
L_802CA5B0:;
  c->r[3]=0u+0x00000000u; // 802CA5B0
L_802CA5B4:;
  c->r[0]=c->r[3]+0x000000A0u; // 802CA5B4
  c->r[4]=c->r[31]|c->r[31]; // 802CA5B8
  W32(c->r[1]+0x00000038u,c->r[0]); // 802CA5BC
  c->r[3]=c->r[1]+0x00000038u; // 802CA5C0
  c->lr=0x802CA5C8u; f_802C8474(c); // 802CA5C4
  goto L_802CA62C; // 802CA5C8
L_802CA5CC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802CA5CC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CA5D0
  cmps(c,0,(int32_t)c->r[0],0); // 802CA5D4
  if (crb(c,2)) { goto L_802CA5E4; } // 802CA5D8
  c->r[3]=c->r[3]+c->r[0]; // 802CA5DC
  goto L_802CA5E8; // 802CA5E0
L_802CA5E4:;
  c->r[3]=0u+0x00000000u; // 802CA5E4
L_802CA5E8:;
  c->r[0]=c->r[3]+0x000000A0u; // 802CA5E8
  c->r[3]=c->r[1]+0x00000034u; // 802CA5EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802CA5F0
  c->lr=0x802CA5F8u; f_802C83BC(c); // 802CA5F4
  goto L_802CA62C; // 802CA5F8
L_802CA5FC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802CA5FC
  if (crb(c,2)) { goto L_802CA61C; } // 802CA600
  c->r[0]=R32(c->r[30]+0x00000018u); // 802CA604
  c->r[4]=c->r[31]|c->r[31]; // 802CA608
  c->r[3]=c->r[1]+0x00000030u; // 802CA60C
  W32(c->r[1]+0x00000030u,c->r[0]); // 802CA610
  c->lr=0x802CA618u; f_802C8474(c); // 802CA614
  goto L_802CA62C; // 802CA618
L_802CA61C:;
  c->r[0]=R32(c->r[30]+0x00000018u); // 802CA61C
  c->r[3]=c->r[1]+0x0000002Cu; // 802CA620
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802CA624
  c->lr=0x802CA62Cu; f_802C83BC(c); // 802CA628
L_802CA62C:;
  c->r[3]=c->r[1]+0x00000088u; // 802CA62C
  c->lr=0x802CA634u; f_802BA2FC(c); // 802CA630
  c->r[4]=c->r[1]+0x00000084u; // 802CA634
  c->r[5]=c->r[1]+0x00000080u; // 802CA638
  c->r[6]=c->r[1]+0x0000007Cu; // 802CA63C
  c->r[7]=c->r[1]+0x00000078u; // 802CA640
  c->r[8]=c->r[1]+0x00000070u; // 802CA644
  c->lr=0x802CA64Cu; f_802C9890(c); // 802CA648
  c->r[5]=R8(c->r[1]+0x00000070u); // 802CA64C
  cmps(c,0,(int32_t)c->r[30],0); // 802CA650
  c->r[4]=R8(c->r[1]+0x00000071u); // 802CA654
  c->r[3]=R8(c->r[1]+0x00000072u); // 802CA658
  c->r[0]=R8(c->r[1]+0x00000073u); // 802CA65C
  W8(c->r[1]+0x00000074u,c->r[5]); // 802CA660
  W8(c->r[1]+0x00000075u,c->r[4]); // 802CA664
  W8(c->r[1]+0x00000076u,c->r[3]); // 802CA668
  W8(c->r[1]+0x00000077u,c->r[0]); // 802CA66C
  if (crb(c,2)) { goto L_802CA680; } // 802CA670
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 802CA674
  cmps(c,0,(int32_t)c->r[0],0); // 802CA678
  if (!crb(c,2)) { goto L_802CA6B8; } // 802CA67C
L_802CA680:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 802CA680
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 802CA684
  c->r[4]=R32(c->r[1]+0x00000084u); // 802CA688
  c->r[3]=c->r[1]+0x00000028u; // 802CA68C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CA690
  c->r[8]=c->r[1]+0x00000024u; // 802CA694
  c->r[5]=R32(c->r[1]+0x00000080u); // 802CA698
  c->r[7]=R32(c->r[28]+0x00000000u); // 802CA69C
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 802CA6A0
  c->r[0]=c->r[7]+0x000003F0u; // 802CA6A4
  c->r[7]=R32(c->r[1]+0x00000078u); // 802CA6A8
  W32(c->r[1]+0x00000028u,c->r[0]); // 802CA6AC
  c->lr=0x802CA6B4u; f_802C8644(c); // 802CA6B0
  goto L_802CA6E8; // 802CA6B4
L_802CA6B8:;
  c->r[0]=R32(c->r[1]+0x00000074u); // 802CA6B8
  c->r[9]=rotl(c->r[29],29)&0x00000001u; // 802CA6BC
  c->r[4]=R32(c->r[1]+0x00000084u); // 802CA6C0
  c->r[3]=c->r[1]+0x00000020u; // 802CA6C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802CA6C8
  c->r[8]=c->r[1]+0x0000001Cu; // 802CA6CC
  c->r[5]=R32(c->r[1]+0x00000080u); // 802CA6D0
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 802CA6D4
  c->r[6]=R32(c->r[1]+0x0000007Cu); // 802CA6D8
  W32(c->r[1]+0x00000020u,c->r[0]); // 802CA6DC
  c->r[7]=R32(c->r[1]+0x00000078u); // 802CA6E0
  c->lr=0x802CA6E8u; f_802C8644(c); // 802CA6E4
L_802CA6E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA6E8
  if (crb(c,2)) { goto L_802CA6FC; } // 802CA6EC
  c->r[0]=R32(c->r[30]+0x00000020u); // 802CA6F0
  cmps(c,0,(int32_t)c->r[0],0); // 802CA6F4
  if (!crb(c,2)) { goto L_802CA72C; } // 802CA6F8
L_802CA6FC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802CA6FC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CA700
  cmps(c,0,(int32_t)c->r[0],0); // 802CA704
  if (crb(c,2)) { goto L_802CA714; } // 802CA708
  c->r[3]=c->r[3]+c->r[0]; // 802CA70C
  goto L_802CA718; // 802CA710
L_802CA714:;
  c->r[3]=0u+0x00000000u; // 802CA714
L_802CA718:;
  c->r[0]=c->r[3]+0x000000E0u; // 802CA718
  c->r[3]=c->r[1]+0x00000018u; // 802CA71C
  W32(c->r[1]+0x00000018u,c->r[0]); // 802CA720
  c->lr=0x802CA728u; f_802C8D70(c); // 802CA724
  goto L_802CA73C; // 802CA728
L_802CA72C:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 802CA72C
  c->r[3]=c->r[1]+0x00000014u; // 802CA730
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CA734
  c->lr=0x802CA73Cu; f_802C8D70(c); // 802CA738
L_802CA73C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CA73C
  if (crb(c,2)) { goto L_802CA750; } // 802CA740
  c->r[0]=R32(c->r[30]+0x00000028u); // 802CA744
  cmps(c,0,(int32_t)c->r[0],0); // 802CA748
  if (!crb(c,2)) { goto L_802CA768; } // 802CA74C
L_802CA750:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 802CA750
  c->r[3]=c->r[1]+0x00000010u; // 802CA754
  c->r[0]=c->r[4]+0x000001A8u; // 802CA758
  W32(c->r[1]+0x00000010u,c->r[0]); // 802CA75C
  c->lr=0x802CA764u; f_802C8E00(c); // 802CA760
  goto L_802CA7D8; // 802CA764
L_802CA768:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 802CA768
  c->r[3]=c->r[1]+0x0000000Cu; // 802CA76C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802CA770
  c->lr=0x802CA778u; f_802C8E00(c); // 802CA774
  goto L_802CA7D8; // 802CA778
L_802CA77C:;
  cmps(c,0,(int32_t)c->r[6],0); // 802CA77C
  if (crb(c,2)) { goto L_802CA7D8; } // 802CA780
  cmps(c,0,(int32_t)c->r[5],0); // 802CA784
  if (crb(c,2)) { goto L_802CA798; } // 802CA788
  c->r[0]=R32(c->r[5]+0x00000018u); // 802CA78C
  cmps(c,0,(int32_t)c->r[0],0); // 802CA790
  if (!crb(c,2)) { goto L_802CA7C4; } // 802CA794
L_802CA798:;
  c->r[0]=0u+0x00000000u; // 802CA798
  c->r[3]=c->r[31]|c->r[31]; // 802CA79C
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 802CA7A0
  c->r[4]=c->r[1]+0x0000008Cu; // 802CA7A4
  c->r[12]=R32(c->r[31]+0x00000000u); // 802CA7A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802CA7AC
  c->ctr=c->r[12]; // 802CA7B0
  if (true) { c->lr=0x802CA7B8u; dispatch(c,c->ctr); } // 802CA7B4
  c->r[3]=c->r[1]+0x0000008Cu; // 802CA7B8
  c->lr=0x802CA7C0u; f_802C7404(c); // 802CA7BC
  goto L_802CA7D8; // 802CA7C0
L_802CA7C4:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 802CA7C4
  c->r[4]=c->r[31]|c->r[31]; // 802CA7C8
  c->r[3]=c->r[1]+0x00000008u; // 802CA7CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802CA7D0
  c->lr=0x802CA7D8u; f_802C8474(c); // 802CA7D4
L_802CA7D8:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 802CA7D8
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 802CA7DC
  c->r[30]=R32(c->r[1]+0x00000128u); // 802CA7E0
  c->r[29]=R32(c->r[1]+0x00000124u); // 802CA7E4
  c->r[28]=R32(c->r[1]+0x00000120u); // 802CA7E8
  c->lr=c->r[0]; // 802CA7EC
  c->r[1]=c->r[1]+0x00000130u; // 802CA7F0
  return; // 802CA7F4
}

// fn_802CA7F8
void f_802CA7F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CA7F8
  c->r[0]=c->lr; // 802CA7FC
  W32(c->r[1]+0x00000264u,c->r[0]); // 802CA800
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[31]);} // 802CA804
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,31,ea,0,0);} // 802CA808
  {uint32_t ea=c->r[1]+0x00000240u; WF64(ea,c->f[30]);} // 802CA80C
  {uint32_t ea=c->r[1]+0x00000248u; psq_store(c,30,ea,0,0);} // 802CA810
  {uint32_t ea=c->r[1]+0x00000230u; WF64(ea,c->f[29]);} // 802CA814
  {uint32_t ea=c->r[1]+0x00000238u; psq_store(c,29,ea,0,0);} // 802CA818
  {uint32_t ea=c->r[1]+0x00000220u; WF64(ea,c->f[28]);} // 802CA81C
  {uint32_t ea=c->r[1]+0x00000228u; psq_store(c,28,ea,0,0);} // 802CA820
  {uint32_t ea=c->r[1]+0x00000210u; WF64(ea,c->f[27]);} // 802CA824
  {uint32_t ea=c->r[1]+0x00000218u; psq_store(c,27,ea,0,0);} // 802CA828
  {uint32_t ea=c->r[1]+0x00000200u; WF64(ea,c->f[26]);} // 802CA82C
  {uint32_t ea=c->r[1]+0x00000208u; psq_store(c,26,ea,0,0);} // 802CA830
  {uint32_t ea=c->r[1]+0x000001F0u; WF64(ea,c->f[25]);} // 802CA834
  {uint32_t ea=c->r[1]+0x000001F8u; psq_store(c,25,ea,0,0);} // 802CA838
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[24]);} // 802CA83C
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,24,ea,0,0);} // 802CA840
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[23]);} // 802CA844
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,23,ea,0,0);} // 802CA848
  c->r[11]=c->r[1]+0x000001D0u; // 802CA84C
  c->lr=0x802CA854u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CA850
  c->r[0]=rotl(c->r[7],0)&0x00000001u; cr0(c,c->r[0]); // 802CA854
  c->r[18]=c->r[3]|c->r[3]; // 802CA858
  c->r[0]=0u+0x43300000u; // 802CA85C
  c->r[26]=c->r[4]|c->r[4]; // 802CA860
  c->r[27]=c->r[5]|c->r[5]; // 802CA864
  c->r[28]=c->r[6]|c->r[6]; // 802CA868
  W32(c->r[1]+0x00000158u,c->r[0]); // 802CA86C
  c->r[17]=c->r[7]|c->r[7]; // 802CA870
  c->r[15]=c->r[8]|c->r[8]; // 802CA874
  c->r[20]=c->r[9]|c->r[9]; // 802CA878
  W32(c->r[1]+0x00000160u,c->r[0]); // 802CA87C
  if (!crb(c,2)) { goto L_802CA890; } // 802CA880
  c->r[3]=0u+0x00000000u; // 802CA884
  c->lr=0x802CA88Cu; f_80359F28(c); // 802CA888
  c->lr=0x802CA890u; f_8030A778(c); // 802CA88C
L_802CA890:;
  c->r[16]=0u+0x00000000u; // 802CA890
  c->r[19]=0u+0x00000000u; // 802CA894
  W32(c->r[1]+0x00000074u,c->r[16]); // 802CA898
  c->r[0]=R32(c->r[18]+0x00000000u); // 802CA89C
  cmps(c,0,(int32_t)c->r[0],0); // 802CA8A0
  if (crb(c,2)) { goto L_802CA8D0; } // 802CA8A4
  c->r[0]=rotl(c->r[17],0)&0x00000010u; cr0(c,c->r[0]); // 802CA8A8
  if (crb(c,2)) { goto L_802CA8B4; } // 802CA8AC
  c->r[16]=0u+0x00000001u; // 802CA8B0
L_802CA8B4:;
  c->r[3]=c->r[18]|c->r[18]; // 802CA8B4
  c->lr=0x802CA8BCu; f_802BB250(c); // 802CA8B8
  cmps(c,0,(int32_t)c->r[3],0); // 802CA8BC
  W32(c->r[1]+0x00000074u,c->r[3]); // 802CA8C0
  if (crb(c,2)) { goto L_802CA8D4; } // 802CA8C4
  c->r[19]=0u+0x00000001u; // 802CA8C8
  goto L_802CA8D4; // 802CA8CC
L_802CA8D0:;
  c->r[16]=0u+0x00000001u; // 802CA8D0
L_802CA8D4:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 802CA8D4
  c->r[4]=c->r[17]|c->r[17]; // 802CA8D8
  c->r[5]=c->r[15]|c->r[15]; // 802CA8DC
  c->r[6]=c->r[20]|c->r[20]; // 802CA8E0
  W32(c->r[1]+0x00000040u,c->r[0]); // 802CA8E4
  c->r[7]=c->r[16]|c->r[16]; // 802CA8E8
  c->r[3]=c->r[1]+0x00000040u; // 802CA8EC
  c->lr=0x802CA8F4u; f_802CA364(c); // 802CA8F0
  c->r[3]=R32(c->r[26]+0x00000000u); // 802CA8F4
  cmps(c,0,(int32_t)c->r[3],0); // 802CA8F8
  if (crb(c,2)) { goto L_802CB038; } // 802CA8FC
  c->r[0]=R32(c->r[3]+0x00000034u); // 802CA900
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802CA904
  if (!crb(c,2)) { goto L_802CB038; } // 802CA908
  cmps(c,0,(int32_t)c->r[19],0); // 802CA90C
  if (crb(c,2)) { goto L_802CAF30; } // 802CA910
  c->r[6]=0u+0x80440000u; // 802CA914
  {uint32_t ea=c->r[6]+0xFFFFC588u; c->r[5]=R32(ea); c->r[6]=ea;} // 802CA918
  c->r[0]=cntlz(c->r[15]); // 802CA91C
  c->r[8]=R32(c->r[1]+0x00000074u); // 802CA920
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[16]); // 802CA924
  c->r[4]=R32(c->r[6]+0x00000004u); // 802CA928
  c->r[3]=R32(c->r[6]+0x00000008u); // 802CA92C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 802CA930
  W32(c->r[1]+0x00000080u,c->r[5]); // 802CA934
  c->r[7]=c->r[16]|c->r[16]; // 802CA938
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[26]=c->ps1[26]=RF32(ea);} // 802CA93C
  W32(c->r[1]+0x00000084u,c->r[4]); // 802CA940
  {uint32_t ea=c->r[8]+0x00000010u; c->f[25]=c->ps1[25]=RF32(ea);} // 802CA944
  W32(c->r[1]+0x00000088u,c->r[3]); // 802CA948
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 802CA94C
  if (!crb(c,2)) { goto L_802CA960; } // 802CA950
  c->r[0]=R32(c->r[15]+0x00000014u); // 802CA954
  c->r[0]=cntlz(c->r[0]); // 802CA958
  c->r[7]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CA95C
L_802CA960:;
  cmps(c,0,(int32_t)c->r[7],0); // 802CA960
  if (crb(c,2)) { goto L_802CA994; } // 802CA964
  c->r[3]=R32(c->r[18]+0x00000000u); // 802CA968
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CA96C
  cmps(c,0,(int32_t)c->r[0],0); // 802CA970
  if (crb(c,2)) { goto L_802CA980; } // 802CA974
  c->r[3]=c->r[3]+c->r[0]; // 802CA978
  goto L_802CA984; // 802CA97C
L_802CA980:;
  c->r[3]=0u+0x00000000u; // 802CA980
L_802CA984:;
  c->r[0]=c->r[3]+0x00000020u; // 802CA984
  c->r[3]=c->r[1]+0x0000003Cu; // 802CA988
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802CA98C
  goto L_802CA998; // 802CA990
L_802CA994:;
  c->r[3]=c->r[15]+0x00000014u; // 802CA994
L_802CA998:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802CA998
  c->r[3]=c->r[1]+0x0000005Cu; // 802CA99C
  c->r[5]=c->r[1]+0x00000070u; // 802CA9A0
  c->r[4]=0u+0x00000000u; // 802CA9A4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802CA9A8
  c->lr=0x802CA9B0u; f_802BA5FC(c); // 802CA9AC
  c->r[3]=c->r[1]+0x0000005Cu; // 802CA9B0
  c->r[5]=c->r[1]+0x0000006Cu; // 802CA9B4
  c->r[4]=0u+0x00000001u; // 802CA9B8
  c->lr=0x802CA9C0u; f_802BA5FC(c); // 802CA9BC
  c->r[3]=c->r[1]+0x0000005Cu; // 802CA9C0
  c->r[5]=c->r[1]+0x00000068u; // 802CA9C4
  c->r[4]=0u+0x00000002u; // 802CA9C8
  c->lr=0x802CA9D0u; f_802BA5FC(c); // 802CA9CC
  cmps(c,0,(int32_t)c->r[16],0); // 802CA9D0
  c->r[31]=R8(c->r[1]+0x00000069u); // 802CA9D4
  c->r[3]=0u+0x00000000u; // 802CA9D8
  if (!crb(c,2)) { goto L_802CA9EC; } // 802CA9DC
  c->r[0]=R32(c->r[15]+0x0000001Cu); // 802CA9E0
  cmps(c,0,(int32_t)c->r[0],0); // 802CA9E4
  if (!crb(c,2)) { goto L_802CA9F0; } // 802CA9E8
L_802CA9EC:;
  c->r[3]=0u+0x00000001u; // 802CA9EC
L_802CA9F0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CA9F0
  if (crb(c,2)) { goto L_802CAA0C; } // 802CA9F4
  c->r[3]=R32(c->r[18]+0x00000000u); // 802CA9F8
  c->r[4]=c->r[1]+0x00000038u; // 802CA9FC
  c->r[0]=c->r[3]+0x000003F0u; // 802CAA00
  W32(c->r[1]+0x00000038u,c->r[0]); // 802CAA04
  goto L_802CAA10; // 802CAA08
L_802CAA0C:;
  c->r[4]=c->r[15]+0x0000001Cu; // 802CAA0C
L_802CAA10:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802CAA10
  c->r[3]=c->r[1]+0x00000058u; // 802CAA14
  c->r[5]=c->r[1]+0x00000078u; // 802CAA18
  c->r[4]=0u+0x00000000u; // 802CAA1C
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CAA20
  c->lr=0x802CAA28u; f_802BAE38(c); // 802CAA24
  c->r[3]=c->r[1]+0x00000058u; // 802CAA28
  c->r[5]=c->r[1]+0x0000007Cu; // 802CAA2C
  c->r[4]=0u+0x00000001u; // 802CAA30
  c->lr=0x802CAA38u; f_802BAE38(c); // 802CAA34
  c->r[19]=c->r[1]+0x00000080u; // 802CAA38
  c->r[20]=0u+0x00000000u; // 802CAA3C
L_802CAA40:;
  c->r[0]=rotl(c->r[20],2)&0x000003FCu; // 802CAA40
  c->r[7]=c->r[1]+0x000000A0u; // 802CAA44
  c->r[10]=c->r[1]+0x00000090u; // 802CAA48
  c->r[4]=R32(c->r[19]+c->r[0]); // 802CAA4C
  c->r[3]=c->r[1]+0x00000058u; // 802CAA50
  c->r[7]=c->r[7]+c->r[0]; // 802CAA54
  c->r[10]=c->r[10]+c->r[0]; // 802CAA58
  c->r[5]=0u+0x00000000u; // 802CAA5C
  c->r[6]=0u+0x00000000u; // 802CAA60
  c->r[8]=0u+0x00000000u; // 802CAA64
  c->r[9]=0u+0x00000000u; // 802CAA68
  c->lr=0x802CAA70u; f_802BAEA8(c); // 802CAA6C
  c->r[20]=c->r[20]+0x00000001u; // 802CAA70
  cmpu(c,0,c->r[20],0x00000004u); // 802CAA74
  if (crb(c,0)) { IRQCHK(c); goto L_802CAA40; } // 802CAA78
  cmps(c,0,(int32_t)c->r[16],0); // 802CAA7C
  c->r[3]=0u+0x00000000u; // 802CAA80
  if (!crb(c,2)) { goto L_802CAA94; } // 802CAA84
  c->r[0]=R32(c->r[15]+0x00000024u); // 802CAA88
  cmps(c,0,(int32_t)c->r[0],0); // 802CAA8C
  if (!crb(c,2)) { goto L_802CAA98; } // 802CAA90
L_802CAA94:;
  c->r[3]=0u+0x00000001u; // 802CAA94
L_802CAA98:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CAA98
  if (crb(c,2)) { goto L_802CAAB4; } // 802CAA9C
  c->r[3]=R32(c->r[18]+0x00000000u); // 802CAAA0
  c->r[4]=c->r[1]+0x00000034u; // 802CAAA4
  c->r[0]=c->r[3]+0x0000001Cu; // 802CAAA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802CAAAC
  goto L_802CAAB8; // 802CAAB0
L_802CAAB4:;
  c->r[4]=c->r[15]+0x00000024u; // 802CAAB4
L_802CAAB8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802CAAB8
  cmps(c,0,(int32_t)c->r[16],0); // 802CAABC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CAAC0
  if (!crb(c,2)) { goto L_802CAAD4; } // 802CAAC4
  c->r[0]=R32(c->r[15]+0x00000018u); // 802CAAC8
  c->r[0]=cntlz(c->r[0]); // 802CAACC
  c->r[16]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CAAD0
L_802CAAD4:;
  cmps(c,0,(int32_t)c->r[16],0); // 802CAAD4
  if (crb(c,2)) { goto L_802CAB08; } // 802CAAD8
  c->r[3]=R32(c->r[18]+0x00000000u); // 802CAADC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802CAAE0
  cmps(c,0,(int32_t)c->r[0],0); // 802CAAE4
  if (crb(c,2)) { goto L_802CAAF4; } // 802CAAE8
  c->r[3]=c->r[3]+c->r[0]; // 802CAAEC
  goto L_802CAAF8; // 802CAAF0
L_802CAAF4:;
  c->r[3]=0u+0x00000000u; // 802CAAF4
L_802CAAF8:;
  c->r[0]=c->r[3]+0x000000A0u; // 802CAAF8
  c->r[3]=c->r[1]+0x00000030u; // 802CAAFC
  W32(c->r[1]+0x00000030u,c->r[0]); // 802CAB00
  goto L_802CAB0C; // 802CAB04
L_802CAB08:;
  c->r[3]=c->r[15]+0x00000018u; // 802CAB08
L_802CAB0C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802CAB0C
  c->r[18]=c->r[1]+0x00000064u; // 802CAB10
  c->r[19]=c->r[1]+0x00000060u; // 802CAB14
  c->r[20]=c->r[1]+0x000000C8u; // 802CAB18
  W32(c->r[1]+0x00000050u,c->r[0]); // 802CAB1C
  c->r[21]=0u+0x00000000u; // 802CAB20
  c->r[16]=0u+0x00000001u; // 802CAB24
  c->r[15]=0u+0x00000000u; // 802CAB28
L_802CAB2C:;
  c->r[22]=c->r[21]+0x00000001u; // 802CAB2C
  c->r[3]=c->r[1]+0x00000054u; // 802CAB30
  c->r[4]=c->r[22]|c->r[22]; // 802CAB34
  c->r[5]=c->r[1]+0x0000004Cu; // 802CAB38
  c->r[6]=c->r[1]+0x00000008u; // 802CAB3C
  c->lr=0x802CAB44u; f_802BA33C(c); // 802CAB40
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 802CAB44
  cmps(c,0,(int32_t)c->r[0],3); // 802CAB48
  if (!crb(c,2)) { goto L_802CAB6C; } // 802CAB4C
  W8(c->r[18]+0x00000000u,c->r[16]); // 802CAB50
  c->r[4]=c->r[22]|c->r[22]; // 802CAB54
  c->r[5]=c->r[20]|c->r[20]; // 802CAB58
  c->r[6]=c->r[19]|c->r[19]; // 802CAB5C
  c->r[3]=c->r[1]+0x00000050u; // 802CAB60
  c->lr=0x802CAB68u; f_802BAA2C(c); // 802CAB64
  goto L_802CAB70; // 802CAB68
L_802CAB6C:;
  W8(c->r[18]+0x00000000u,c->r[15]); // 802CAB6C
L_802CAB70:;
  c->r[21]=c->r[21]+0x00000001u; // 802CAB70
  c->r[19]=c->r[19]+0x00000001u; // 802CAB74
  cmpu(c,0,c->r[21],0x00000003u); // 802CAB78
  c->r[20]=c->r[20]+0x00000030u; // 802CAB7C
  c->r[18]=c->r[18]+0x00000001u; // 802CAB80
  if (crb(c,0)) { IRQCHK(c); goto L_802CAB2C; } // 802CAB84
  c->r[0]=R32(c->r[26]+0x00000000u); // 802CAB88
  c->r[3]=c->r[1]+0x0000002Cu; // 802CAB8C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802CAB90
  c->lr=0x802CAB98u; f_802C90AC(c); // 802CAB94
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 802CAB98
  if (crb(c,2)) { goto L_802CABB0; } // 802CAB9C
  c->r[3]=0u+0x00000001u; // 802CABA0
  c->lr=0x802CABA8u; f_802C6464(c); // 802CABA4
  c->r[3]=0u+0x00000010u; // 802CABA8
  c->lr=0x802CABB0u; f_802C9BC0(c); // 802CABAC
L_802CABB0:;
  c->r[3]=c->r[26]|c->r[26]; // 802CABB0
  c->lr=0x802CABB8u; f_802B9530(c); // 802CABB4
  W32(c->r[1]+0x00000048u,c->r[3]); // 802CABB8
  c->r[18]=c->r[1]+0x000000A0u; // 802CABBC
  {uint32_t ea=c->r[2]+0xFFFFAC70u; c->f[31]=RF64(ea);} // 802CABC0
  c->r[19]=c->r[1]+0x00000090u; // 802CABC4
  c->r[30]=R32(c->r[3]+0x00000020u); // 802CABC8
  c->r[20]=c->r[1]+0x00000078u; // 802CABCC
  {uint32_t ea=c->r[2]+0xFFFFAC58u; c->f[29]=c->ps1[29]=RF32(ea);} // 802CABD0
  c->r[21]=c->r[1]+0x00000080u; // 802CABD4
  {uint32_t ea=c->r[2]+0xFFFFAC68u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CABD8
  c->r[17]=c->r[1]+0x00000060u; // 802CABDC
  c->r[16]=c->r[1]+0x00000064u; // 802CABE0
  c->r[29]=0u+0x00000000u; // 802CABE4
  c->r[22]=0u+0x00000010u; // 802CABE8
  c->r[23]=0u+0xCC010000u; // 802CABEC
  c->r[24]=0u+0x00000000u; // 802CABF0
  c->r[25]=0u+0x00000002u; // 802CABF4
  goto L_802CAF20; // 802CABF8
L_802CABFC:;
  c->r[3]=c->r[1]+0x00000074u; // 802CABFC
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802CAC00
  c->lr=0x802CAC08u; f_802BA3F0(c); // 802CAC04
  c->f[24]=c->f[1]; // 802CAC08
  c->f[2]=c->f[26]; // 802CAC0C
  c->f[23]=c->ps1[23]=S(c->f[29]-c->f[1]); // 802CAC10
  c->lr=0x802CAC18u; f_802EFFFC(c); // 802CAC14
  c->f[28]=c->ps1[28]=S(c->f[1]); // 802CAC18
  c->f[1]=c->f[24]; // 802CAC1C
  c->f[2]=c->f[25]; // 802CAC20
  c->lr=0x802CAC28u; f_802EFFFC(c); // 802CAC24
  c->f[27]=c->ps1[27]=S(c->f[1]); // 802CAC28
  {uint32_t ea=c->r[2]+0xFFFFAC60u; c->f[2]=RF64(ea);} // 802CAC2C
  c->f[1]=c->f[24]; // 802CAC30
  c->lr=0x802CAC38u; f_802EFFFC(c); // 802CAC34
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 802CAC38
  c->f[3]=c->ps1[3]=S(c->f[1]); // 802CAC3C
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[24]); // 802CAC40
  c->r[4]=c->r[1]+0x00000028u; // 802CAC44
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 802CAC48
  c->r[3]=0u+0x00000002u; // 802CAC4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802CAC50
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802CAC54
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 802CAC58
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[1]);} // 802CAC5C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802CAC60
  c->r[0]=R32(c->r[1]+0x0000016Cu); // 802CAC64
  W8(c->r[1]+0x00000068u,c->r[0]); // 802CAC68
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 802CAC6C
  c->r[0]=R32(c->r[1]+0x00000174u); // 802CAC70
  W8(c->r[1]+0x00000069u,c->r[0]); // 802CAC74
  c->r[0]=R32(c->r[1]+0x00000068u); // 802CAC78
  W32(c->r[1]+0x00000028u,c->r[0]); // 802CAC7C
  c->lr=0x802CAC84u; f_803485D4(c); // 802CAC80
  c->r[15]=0u+0x00000000u; // 802CAC84
L_802CAC88:;
  c->r[3]=rotl(c->r[15],0)&0x000000FFu; // 802CAC88
  c->r[0]=R8(c->r[16]+c->r[3]); // 802CAC8C
  cmps(c,0,(int32_t)c->r[0],0); // 802CAC90
  if (crb(c,2)) { goto L_802CACF4; } // 802CAC94
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802CAC98
  c->r[6]=c->r[1]+0x000000C8u; // 802CAC9C
  c->r[0]=R8(c->r[17]+c->r[3]); // 802CACA0
  c->r[3]=c->r[3]+0x00000001u; // 802CACA4
  c->r[4]=c->r[1]+0x000000B0u; // 802CACA8
  {uint32_t ea=c->r[6]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea); c->r[6]=ea;} // 802CACAC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802CACB0
  c->f[5]=c->ps1[5]=S(c->f[24]*c->f[0]); // 802CACB4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CACB8
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CACBC
  c->f[4]=c->ps1[4]=S(c->f[24]*c->f[2]); // 802CACC0
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CACC4
  c->f[2]=c->ps1[2]=S(c->f[24]*c->f[1]); // 802CACC8
  c->f[1]=c->ps1[1]=S(c->f[24]*c->f[0]); // 802CACCC
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CACD0
  {uint32_t ea=c->r[6]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CACD4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[5]);} // 802CACD8
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[4]);} // 802CACDC
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[3]);} // 802CACE0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[2]);} // 802CACE4
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 802CACE8
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 802CACEC
  c->lr=0x802CACF4u; f_80347F68(c); // 802CACF0
L_802CACF4:;
  c->r[15]=c->r[15]+0x00000001u; // 802CACF4
  cmpu(c,0,c->r[15],0x00000003u); // 802CACF8
  if (crb(c,0)) { IRQCHK(c); goto L_802CAC88; } // 802CACFC
  c->r[3]=R8(c->r[1]+0x00000070u); // 802CAD00
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[28]); // 802CAD04
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 802CAD08
  c->r[7]=0u+0x00000000u; // 802CAD0C
  W32(c->r[1]+0x00000164u,c->r[3]); // 802CAD10
  c->r[3]=R8(c->r[1]+0x00000071u); // 802CAD14
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 802CAD18
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 802CAD1C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 802CAD20
  c->r[0]=R8(c->r[1]+0x0000006Du); // 802CAD24
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 802CAD28
  W32(c->r[1]+0x00000164u,c->r[3]); // 802CAD2C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 802CAD30
  c->r[3]=R8(c->r[1]+0x00000072u); // 802CAD34
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 802CAD38
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[23]); // 802CAD3C
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 802CAD40
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 802CAD44
  W32(c->r[1]+0x00000164u,c->r[3]); // 802CAD48
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[24]); // 802CAD4C
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 802CAD50
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 802CAD54
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[23]); // 802CAD58
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 802CAD5C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 802CAD60
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 802CAD64
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 802CAD68
  c->r[3]=R8(c->r[1]+0x00000073u); // 802CAD6C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 802CAD70
  c->f[7]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 802CAD74
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 802CAD78
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[24]); // 802CAD7C
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 802CAD80
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[31]); // 802CAD84
  W32(c->r[1]+0x0000015Cu,c->r[0]); // 802CAD88
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[23]); // 802CAD8C
  W32(c->r[1]+0x00000164u,c->r[3]); // 802CAD90
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[24]); // 802CAD94
  {uint32_t ea=c->r[1]+0x00000158u; c->f[0]=RF64(ea);} // 802CAD98
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802CAD9C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[2]=RF64(ea);} // 802CADA0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802CADA4
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[7]);} // 802CADA8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[31]); // 802CADAC
  c->f[5]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 802CADB0
  c->r[0]=R32(c->r[1]+0x00000174u); // 802CADB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[28]); // 802CADB8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802CADBC
  {uint32_t ea=c->r[1]+0x00000168u; WF64(ea,c->f[5]);} // 802CADC0
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 802CADC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CADC8
  c->r[3]=R32(c->r[1]+0x0000016Cu); // 802CADCC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802CADD0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802CADD4
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 802CADD8
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[0]);} // 802CADDC
  c->r[4]=R32(c->r[1]+0x0000017Cu); // 802CADE0
  c->r[5]=R32(c->r[1]+0x00000184u); // 802CADE4
  c->ctr=c->r[25]; // 802CADE8
L_802CADEC:;
  c->r[6]=rotl(c->r[7],3)&0x000003F8u; // 802CADEC
  c->r[8]=rotl(c->r[7],1)&0x000000FEu; // 802CADF0
  c->r[9]=R32(c->r[18]+c->r[6]); // 802CADF4
  cmps(c,0,(int32_t)c->r[9],0); // 802CADF8
  if (crb(c,2)) { goto L_802CAE14; } // 802CADFC
  c->r[9]=rotl(c->r[8],2)&0x000003FCu; // 802CAE00
  c->r[9]=c->r[18]+c->r[9]; // 802CAE04
  c->r[9]=R32(c->r[9]+0x00000004u); // 802CAE08
  cmps(c,0,(int32_t)c->r[9],0); // 802CAE0C
  if (!crb(c,2)) { goto L_802CAEF0; } // 802CAE10
L_802CAE14:;
  c->r[9]=R32(c->r[19]+c->r[6]); // 802CAE14
  cmps(c,0,(int32_t)c->r[9],0); // 802CAE18
  if (!crb(c,2)) { goto L_802CAE98; } // 802CAE1C
  c->r[9]=rotl(c->r[7],2)&0x000003FCu; // 802CAE20
  c->r[11]=c->r[1]+0x00000078u; // 802CAE24
  {uint32_t ea=c->r[11]+c->r[9]; c->r[9]=R8(ea); c->r[11]=ea;} // 802CAE28
  W32(c->r[1]+0x00000164u,c->r[9]); // 802CAE2C
  c->r[10]=R8(c->r[11]+0x00000001u); // 802CAE30
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 802CAE34
  c->r[9]=R8(c->r[11]+0x00000002u); // 802CAE38
  W32(c->r[1]+0x0000015Cu,c->r[10]); // 802CAE3C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 802CAE40
  W32(c->r[1]+0x00000164u,c->r[9]); // 802CAE44
  {uint32_t ea=c->r[1]+0x00000158u; c->f[1]=RF64(ea);} // 802CAE48
  c->f[2]=c->ps1[2]=S(c->f[27]*c->f[2]); // 802CAE4C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 802CAE50
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 802CAE54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802CAE58
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802CAE5C
  c->f[1]=c->ps1[1]=S(c->f[27]*c->f[1]); // 802CAE60
  c->f[0]=c->ps1[0]=S(c->f[27]*c->f[0]); // 802CAE64
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[2]);} // 802CAE68
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802CAE6C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802CAE70
  c->r[11]=R32(c->r[1]+0x00000184u); // 802CAE74
  {uint32_t ea=c->r[1]+0x00000178u; WF64(ea,c->f[1]);} // 802CAE78
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[0]);} // 802CAE7C
  c->r[10]=R32(c->r[1]+0x0000017Cu); // 802CAE80
  c->r[9]=R32(c->r[1]+0x00000174u); // 802CAE84
  W8(c->r[1]+0x00000044u,c->r[11]); // 802CAE88
  W8(c->r[1]+0x00000045u,c->r[10]); // 802CAE8C
  W8(c->r[1]+0x00000046u,c->r[9]); // 802CAE90
  goto L_802CAEA4; // 802CAE94
L_802CAE98:;
  W8(c->r[1]+0x00000044u,c->r[0]); // 802CAE98
  W8(c->r[1]+0x00000045u,c->r[3]); // 802CAE9C
  W8(c->r[1]+0x00000046u,c->r[4]); // 802CAEA0
L_802CAEA4:;
  c->r[8]=rotl(c->r[8],2)&0x000003FCu; // 802CAEA4
  c->r[8]=c->r[19]+c->r[8]; // 802CAEA8
  c->r[8]=R32(c->r[8]+0x00000004u); // 802CAEAC
  cmps(c,0,(int32_t)c->r[8],0); // 802CAEB0
  if (!crb(c,2)) { goto L_802CAEC8; } // 802CAEB4
  c->r[8]=rotl(c->r[7],2)&0x000003FCu; // 802CAEB8
  c->r[8]=c->r[20]+c->r[8]; // 802CAEBC
  c->r[8]=R8(c->r[8]+0x00000003u); // 802CAEC0
  goto L_802CAECC; // 802CAEC4
L_802CAEC8:;
  c->r[8]=c->r[5]|c->r[5]; // 802CAEC8
L_802CAECC:;
  W8(c->r[23]+0xFFFF8000u,c->r[22]); // 802CAECC
  c->r[6]=R32(c->r[21]+c->r[6]); // 802CAED0
  W8(c->r[1]+0x00000047u,c->r[8]); // 802CAED4
  c->r[6]=rotl(c->r[6],0)&0x00000001u; // 802CAED8
  W16(c->r[23]+0xFFFF8000u,c->r[24]); // 802CAEDC
  c->r[6]=c->r[6]+0x0000100Cu; // 802CAEE0
  c->r[8]=R32(c->r[1]+0x00000044u); // 802CAEE4
  W16(c->r[23]+0xFFFF8000u,c->r[6]); // 802CAEE8
  W32(c->r[23]+0xFFFF8000u,c->r[8]); // 802CAEEC
L_802CAEF0:;
  c->r[7]=c->r[7]+0x00000001u; // 802CAEF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802CADEC; } // 802CAEF4
  c->r[3]=c->r[1]+0x00000048u; // 802CAEF8
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 802CAEFC
  c->lr=0x802CAF04u; f_802BB808(c); // 802CAF00
  c->r[0]=R32(c->r[26]+0x00000000u); // 802CAF04
  c->r[4]=c->r[27]|c->r[27]; // 802CAF08
  c->r[5]=c->r[28]|c->r[28]; // 802CAF0C
  c->r[3]=c->r[1]+0x00000024u; // 802CAF10
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CAF14
  c->lr=0x802CAF1Cu; f_802C9250(c); // 802CAF18
  c->r[29]=c->r[29]+0x00000001u; // 802CAF1C
L_802CAF20:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 802CAF20
  cmpu(c,0,c->r[0],c->r[30]); // 802CAF24
  if (crb(c,0)) { IRQCHK(c); goto L_802CABFC; } // 802CAF28
  goto L_802CB038; // 802CAF2C
L_802CAF30:;
  c->r[0]=rotl(c->r[17],0)&0x00000002u; cr0(c,c->r[0]); // 802CAF30
  if (!crb(c,2)) { goto L_802CB008; } // 802CAF34
  c->r[0]=R32(c->r[26]+0x00000000u); // 802CAF38
  c->r[3]=c->r[1]+0x00000020u; // 802CAF3C
  W32(c->r[1]+0x00000020u,c->r[0]); // 802CAF40
  c->lr=0x802CAF48u; f_802C90AC(c); // 802CAF44
  cmps(c,0,(int32_t)c->r[15],0); // 802CAF48
  if (crb(c,2)) { goto L_802CB008; } // 802CAF4C
  c->r[5]=R32(c->r[15]+0x0000002Cu); // 802CAF50
  cmps(c,0,(int32_t)c->r[5],0); // 802CAF54
  if (crb(c,2)) { goto L_802CAF78; } // 802CAF58
  c->r[4]=R32(c->r[26]+0x00000000u); // 802CAF5C
  c->r[3]=c->r[1]+0x0000001Cu; // 802CAF60
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000048u); // 802CAF64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CAF68
  c->r[0]=R32(c->r[5]+c->r[0]); // 802CAF6C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802CAF70
  c->lr=0x802CAF78u; f_802BB54C(c); // 802CAF74
L_802CAF78:;
  c->r[4]=R32(c->r[15]+0x00000030u); // 802CAF78
  cmps(c,0,(int32_t)c->r[4],0); // 802CAF7C
  if (crb(c,2)) { goto L_802CAFA8; } // 802CAF80
  c->r[3]=R32(c->r[26]+0x00000000u); // 802CAF84
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Au); // 802CAF88
  cmps(c,0,(int32_t)c->r[0],0); // 802CAF8C
  if (crb(c,0)) { goto L_802CAFA8; } // 802CAF90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CAF94
  c->r[3]=c->r[1]+0x00000018u; // 802CAF98
  c->r[0]=R32(c->r[4]+c->r[0]); // 802CAF9C
  W32(c->r[1]+0x00000018u,c->r[0]); // 802CAFA0
  c->lr=0x802CAFA8u; f_802BB61C(c); // 802CAFA4
L_802CAFA8:;
  c->r[4]=R32(c->r[15]+0x00000034u); // 802CAFA8
  cmps(c,0,(int32_t)c->r[4],0); // 802CAFAC
  if (crb(c,2)) { goto L_802CB008; } // 802CAFB0
  c->r[3]=R32(c->r[26]+0x00000000u); // 802CAFB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Cu); // 802CAFB8
  cmps(c,0,(int32_t)c->r[0],0); // 802CAFBC
  if (crb(c,0)) { goto L_802CAFDC; } // 802CAFC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CAFC4
  c->r[3]=c->r[1]+0x00000014u; // 802CAFC8
  c->r[0]=R32(c->r[4]+c->r[0]); // 802CAFCC
  c->r[4]=0u+0x0000000Bu; // 802CAFD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CAFD4
  c->lr=0x802CAFDCu; f_802BB6EC(c); // 802CAFD8
L_802CAFDC:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 802CAFDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000004Eu); // 802CAFE0
  cmps(c,0,(int32_t)c->r[0],0); // 802CAFE4
  if (crb(c,0)) { goto L_802CB008; } // 802CAFE8
  c->r[5]=R32(c->r[15]+0x00000034u); // 802CAFEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CAFF0
  c->r[3]=c->r[1]+0x00000010u; // 802CAFF4
  c->r[4]=0u+0x0000000Cu; // 802CAFF8
  c->r[0]=R32(c->r[5]+c->r[0]); // 802CAFFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 802CB000
  c->lr=0x802CB008u; f_802BB6EC(c); // 802CB004
L_802CB008:;
  c->r[0]=rotl(c->r[17],0)&0x00000004u; cr0(c,c->r[0]); // 802CB008
  if (crb(c,2)) { goto L_802CB020; } // 802CB00C
  c->r[3]=0u+0x00000001u; // 802CB010
  c->lr=0x802CB018u; f_802C6464(c); // 802CB014
  c->r[3]=0u+0x00000010u; // 802CB018
  c->lr=0x802CB020u; f_802C9BC0(c); // 802CB01C
L_802CB020:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 802CB020
  c->r[4]=c->r[27]|c->r[27]; // 802CB024
  c->r[5]=c->r[28]|c->r[28]; // 802CB028
  c->r[3]=c->r[1]+0x0000000Cu; // 802CB02C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802CB030
  c->lr=0x802CB038u; f_802C9250(c); // 802CB034
L_802CB038:;
  {uint32_t ea=c->r[1]+0x00000258u; psq_load(c,31,ea,0,0);} // 802CB038
  {uint32_t ea=c->r[1]+0x00000250u; c->f[31]=RF64(ea);} // 802CB03C
  {uint32_t ea=c->r[1]+0x00000248u; psq_load(c,30,ea,0,0);} // 802CB040
  {uint32_t ea=c->r[1]+0x00000240u; c->f[30]=RF64(ea);} // 802CB044
  {uint32_t ea=c->r[1]+0x00000238u; psq_load(c,29,ea,0,0);} // 802CB048
  {uint32_t ea=c->r[1]+0x00000230u; c->f[29]=RF64(ea);} // 802CB04C
  {uint32_t ea=c->r[1]+0x00000228u; psq_load(c,28,ea,0,0);} // 802CB050
  {uint32_t ea=c->r[1]+0x00000220u; c->f[28]=RF64(ea);} // 802CB054
  {uint32_t ea=c->r[1]+0x00000218u; psq_load(c,27,ea,0,0);} // 802CB058
  {uint32_t ea=c->r[1]+0x00000210u; c->f[27]=RF64(ea);} // 802CB05C
  {uint32_t ea=c->r[1]+0x00000208u; psq_load(c,26,ea,0,0);} // 802CB060
  {uint32_t ea=c->r[1]+0x00000200u; c->f[26]=RF64(ea);} // 802CB064
  {uint32_t ea=c->r[1]+0x000001F8u; psq_load(c,25,ea,0,0);} // 802CB068
  {uint32_t ea=c->r[1]+0x000001F0u; c->f[25]=RF64(ea);} // 802CB06C
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,24,ea,0,0);} // 802CB070
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[24]=RF64(ea);} // 802CB074
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,23,ea,0,0);} // 802CB078
  c->r[11]=c->r[1]+0x000001D0u; // 802CB07C
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[23]=RF64(ea);} // 802CB080
  c->lr=0x802CB088u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CB084
  c->r[0]=R32(c->r[1]+0x00000264u); // 802CB088
  c->lr=c->r[0]; // 802CB08C
  c->r[1]=c->r[1]+0x00000260u; // 802CB090
  return; // 802CB094
}

// GetModelLocalAxisY2__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_802CB098(Ctx* __restrict c) {
  trace_call(0x802CB098u);
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 802CB098
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 802CB09C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 802CB0A0
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 802CB0A4
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 802CB0A8
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 802CB0AC
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 802CB0B0
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB0B4
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[12]=t0; c->ps1[12]=t1;} // 802CB0B8
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 802CB0BC
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[10]=t0; c->ps1[10]=t1;} // 802CB0C0
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 802CB0C4
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 802CB0C8
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[12])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 802CB0CC
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[10])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 802CB0D0
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[11])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802CB0D4
  {double t0=S(c->f[0]*c->f[12]), t1=S(c->ps1[0]*c->ps1[12]); c->f[7]=t0; c->ps1[7]=t1;} // 802CB0D8
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB0DC
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 802CB0E0
  {double t0=S(std::fma(c->f[2],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802CB0E4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 802CB0E8
  {double t0=S(std::fma(c->f[4],c->f[10],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[10],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802CB0EC
  fcmp(c,0,c->f[7],c->f[6]); // 802CB0F0
  if (!crb(c,2)) { goto L_802CB100; } // 802CB0F4
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,0,0);} // 802CB0F8
  return; // 802CB0FC
L_802CB100:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 802CB100
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 802CB104
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 802CB108
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 802CB10C
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB110
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 802CB114
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 802CB118
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB11C
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 802CB120
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 802CB124
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 802CB128
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 802CB12C
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 802CB130
  {double t0=S(c->f[4]*c->f[11]), t1=S(c->ps1[4]*c->f[11]); c->f[0]=t0; c->ps1[0]=t1;} // 802CB134
  {double t0=S(std::fma(c->f[5],c->ps1[11],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[11],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CB138
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CB13C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802CB140
  return; // 802CB144
}

// GetModelLocalAxisY3__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34
void f_802CB148(Ctx* __restrict c) {
  trace_call(0x802CB148u);
  {uint32_t ea=c->r[5]+0x00000010u; psq_load(c,2,ea,1,0);} // 802CB148
  {uint32_t ea=c->r[5]+0x00000014u; psq_load(c,3,ea,0,0);} // 802CB14C
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,0);} // 802CB150
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,1,ea,0,0);} // 802CB154
  {double t0=S(c->ps1[3]), t1=S(c->f[2]); c->f[7]=t0; c->ps1[7]=t1;} // 802CB158
  {uint32_t ea=c->r[5]+0x00000024u; psq_load(c,5,ea,0,0);} // 802CB15C
  {uint32_t ea=c->r[5]+0x00000020u; psq_load(c,4,ea,1,0);} // 802CB160
  {double t0=S(c->ps1[1]), t1=S(c->f[0]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB164
  {double t0=S(c->f[5]*c->f[7]), t1=S(c->ps1[5]*c->ps1[7]); c->f[12]=t0; c->ps1[12]=t1;} // 802CB168
  {double t0=S(c->ps1[5]), t1=S(c->f[4]); c->f[8]=t0; c->ps1[8]=t1;} // 802CB16C
  {double t0=S(c->f[3]*c->f[6]), t1=S(c->ps1[3]*c->ps1[6]); c->f[10]=t0; c->ps1[10]=t1;} // 802CB170
  {double t0=S(c->f[0]*c->f[5]), t1=S(c->ps1[0]*c->ps1[5]); c->f[9]=t0; c->ps1[9]=t1;} // 802CB174
  {double t0=S(c->f[1]*c->f[8]), t1=S(c->ps1[1]*c->ps1[8]); c->f[11]=t0; c->ps1[11]=t1;} // 802CB178
  {double t0=S(std::fma(c->f[3],c->f[8],-c->f[12])), t1=S(std::fma(c->ps1[3],c->ps1[8],-c->ps1[12])); c->f[12]=t0; c->ps1[12]=t1;} // 802CB17C
  {double t0=S(std::fma(c->f[1],c->f[7],-c->f[10])), t1=S(std::fma(c->ps1[1],c->ps1[7],-c->ps1[10])); c->f[10]=t0; c->ps1[10]=t1;} // 802CB180
  {double t0=S(std::fma(c->f[5],c->f[6],-c->f[11])), t1=S(std::fma(c->ps1[5],c->ps1[6],-c->ps1[11])); c->f[11]=t0; c->ps1[11]=t1;} // 802CB184
  {double t0=S(c->f[0]*c->f[12]), t1=S(c->ps1[0]*c->ps1[12]); c->f[7]=t0; c->ps1[7]=t1;} // 802CB188
  {double t0=S(c->f[6]-c->f[6]), t1=S(c->ps1[6]-c->ps1[6]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB18C
  {double t0=S(std::fma(c->f[1],c->f[4],-c->f[9])), t1=S(std::fma(c->ps1[1],c->ps1[4],-c->ps1[9])); c->f[9]=t0; c->ps1[9]=t1;} // 802CB190
  {double t0=S(std::fma(c->f[2],c->f[11],c->f[7])), t1=S(std::fma(c->ps1[2],c->ps1[11],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802CB194
  {double t0=S(std::fma(c->f[4],c->f[10],c->f[7])), t1=S(std::fma(c->ps1[4],c->ps1[10],c->ps1[7])); c->f[7]=t0; c->ps1[7]=t1;} // 802CB198
  fcmp(c,0,c->f[7],c->f[6]); // 802CB19C
  if (!crb(c,2)) { goto L_802CB1B0; } // 802CB1A0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,6,ea,0,0);} // 802CB1A4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 802CB1A8
  return; // 802CB1AC
L_802CB1B0:;
  c->f[0]=c->ps1[0]=fres(c->f[7]); // 802CB1B0
  {uint32_t ea=c->r[4]+0x00000010u; psq_load(c,1,ea,0,0);} // 802CB1B4
  {uint32_t ea=c->r[4]+0x00000008u; psq_load(c,2,ea,1,0);} // 802CB1B8
  {uint32_t ea=c->r[4]+0x00000018u; psq_load(c,3,ea,1,0);} // 802CB1BC
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB1C0
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[5]=t0; c->ps1[5]=t1;} // 802CB1C4
  {double t0=S(-std::fma(c->f[7],c->f[5],-c->f[6])), t1=S(-std::fma(c->ps1[7],c->ps1[5],-c->ps1[6])); c->f[0]=t0; c->ps1[0]=t1;} // 802CB1C8
  {double t0=S(c->f[2]), t1=S(c->f[3]); c->f[6]=t0; c->ps1[6]=t1;} // 802CB1CC
  {uint32_t ea=c->r[4]+0x00000028u; psq_load(c,2,ea,1,0);} // 802CB1D0
  {double t0=S(c->f[11]*c->f[0]), t1=S(c->ps1[11]*c->f[0]); c->f[11]=t0; c->ps1[11]=t1;} // 802CB1D4
  {double t0=S(c->f[9]*c->f[0]), t1=S(c->ps1[9]*c->f[0]); c->f[9]=t0; c->ps1[9]=t1;} // 802CB1D8
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,0,0);} // 802CB1DC
  {double t0=S(c->f[0]), t1=S(c->f[1]); c->f[4]=t0; c->ps1[4]=t1;} // 802CB1E0
  {double t0=S(c->ps1[0]), t1=S(c->ps1[1]); c->f[5]=t0; c->ps1[5]=t1;} // 802CB1E4
  {uint32_t ea=c->r[4]+0x00000020u; psq_load(c,1,ea,0,0);} // 802CB1E8
  {double t0=S(c->f[4]*c->f[11]), t1=S(c->ps1[4]*c->f[11]); c->f[0]=t0; c->ps1[0]=t1;} // 802CB1EC
  {double t0=S(c->f[1]*c->f[9]), t1=S(c->ps1[1]*c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 802CB1F0
  {double t0=S(std::fma(c->f[5],c->ps1[11],c->f[0])), t1=S(std::fma(c->ps1[5],c->ps1[11],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CB1F4
  {double t0=S(c->f[1]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CB1F8
  {double t0=S(std::fma(c->f[6],c->f[9],c->f[0])), t1=S(std::fma(c->ps1[6],c->f[9],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CB1FC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[9],c->f[1])); // 802CB200
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802CB204
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,1,0);} // 802CB208
  return; // 802CB20C
}

// Calc_BILLBOARD_STD__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_802CB210(Ctx* __restrict c) {
  trace_call(0x802CB210u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CB210
  c->r[0]=c->lr; // 802CB214
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CB218
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 802CB21C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 802CB220
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 802CB224
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 802CB228
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 802CB22C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 802CB230
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB234
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802CB238
  c->r[31]=c->r[8]|c->r[8]; // 802CB23C
  W32(c->r[1]+0x00000028u,c->r[30]); // 802CB240
  c->r[30]=c->r[5]|c->r[5]; // 802CB244
  W32(c->r[1]+0x00000024u,c->r[29]); // 802CB248
  c->r[29]=c->r[4]|c->r[4]; // 802CB24C
  W32(c->r[1]+0x00000020u,c->r[28]); // 802CB250
  c->r[28]=c->r[3]|c->r[3]; // 802CB254
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB258
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB25C
  c->r[3]=c->r[1]+0x00000008u; // 802CB260
  c->r[4]=c->r[3]|c->r[3]; // 802CB264
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802CB268
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802CB26C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802CB270
  c->lr=0x802CB278u; f_80354444(c); // 802CB274
  cmps(c,0,(int32_t)c->r[30],0); // 802CB278
  if (crb(c,2)) { goto L_802CB2FC; } // 802CB27C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 802CB280
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB284
  c->r[3]=c->r[29]+c->r[0]; // 802CB288
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB28C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB290
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB294
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB298
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB29C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CB2A0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CB2A4
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 802CB2A8
  fcmp(c,0,c->f[30],c->f[0]); // 802CB2AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB2B0
  if (!crb(c,2)) { goto L_802CB2BC; } // 802CB2B4
  goto L_802CB2C8; // 802CB2B8
L_802CB2BC:;
  c->f[1]=c->f[30]; // 802CB2BC
  c->lr=0x802CB2C4u; f_8026C8AC(c); // 802CB2C0
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 802CB2C4
L_802CB2C8:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 802CB2C8
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB2CC
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB2D0
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 802CB2D4
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 802CB2D8
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 802CB2DC
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 802CB2E0
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 802CB2E4
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 802CB2E8
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 802CB2EC
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 802CB2F0
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,0,ea,0,0);} // 802CB2F4
  goto L_802CB404; // 802CB2F8
L_802CB2FC:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 802CB2FC
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CB300
  c->r[3]=c->r[29]+c->r[31]; // 802CB304
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB308
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB30C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB310
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB314
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CB318
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB31C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CB320
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 802CB324
  fcmp(c,0,c->f[31],c->f[30]); // 802CB328
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB32C
  if (!crb(c,2)) { goto L_802CB338; } // 802CB330
  goto L_802CB344; // 802CB334
L_802CB338:;
  c->f[1]=c->f[31]; // 802CB338
  c->lr=0x802CB340u; f_8026C8AC(c); // 802CB33C
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 802CB340
L_802CB344:;
  c->r[3]=c->r[29]+c->r[31]; // 802CB344
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CB348
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB34C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB350
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB354
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB358
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CB35C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB360
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CB364
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802CB368
  fcmp(c,0,c->f[29],c->f[31]); // 802CB36C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB370
  if (!crb(c,2)) { goto L_802CB37C; } // 802CB374
  goto L_802CB388; // 802CB378
L_802CB37C:;
  c->f[1]=c->f[29]; // 802CB37C
  c->lr=0x802CB384u; f_8026C8AC(c); // 802CB380
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802CB384
L_802CB388:;
  c->r[3]=c->r[29]+c->r[31]; // 802CB388
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB38C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB390
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB394
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB398
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB39C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB3A0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CB3A4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CB3A8
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802CB3AC
  fcmp(c,0,c->f[29],c->f[0]); // 802CB3B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB3B4
  if (!crb(c,2)) { goto L_802CB3C0; } // 802CB3B8
  goto L_802CB3CC; // 802CB3BC
L_802CB3C0:;
  c->f[1]=c->f[29]; // 802CB3C0
  c->lr=0x802CB3C8u; f_8026C8AC(c); // 802CB3C4
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802CB3C8
L_802CB3CC:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CB3CC
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 802CB3D0
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB3D4
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB3D8
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[0]);} // 802CB3DC
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 802CB3E0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 802CB3E4
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB3E8
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[1]);} // 802CB3EC
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CB3F0
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB3F4
  {uint32_t ea=c->r[28]+0x00000020u; psq_store(c,1,ea,0,0);} // 802CB3F8
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB3FC
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,2,ea,0,0);} // 802CB400
L_802CB404:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 802CB404
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 802CB408
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 802CB40C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 802CB410
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 802CB414
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 802CB418
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802CB41C
  c->r[30]=R32(c->r[1]+0x00000028u); // 802CB420
  c->r[29]=R32(c->r[1]+0x00000024u); // 802CB424
  c->r[0]=R32(c->r[1]+0x00000064u); // 802CB428
  c->r[28]=R32(c->r[1]+0x00000020u); // 802CB42C
  c->lr=c->r[0]; // 802CB430
  c->r[1]=c->r[1]+0x00000060u; // 802CB434
  return; // 802CB438
}

// Calc_BILLBOARD_PERSP_STD__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_802CB43C(Ctx* __restrict c) {
  trace_call(0x802CB43Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CB43C
  c->r[0]=c->lr; // 802CB440
  W32(c->r[1]+0x00000074u,c->r[0]); // 802CB444
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802CB448
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802CB44C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802CB450
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802CB454
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802CB458
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802CB45C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802CB460
  c->r[31]=c->r[8]|c->r[8]; // 802CB464
  W32(c->r[1]+0x00000038u,c->r[30]); // 802CB468
  c->r[30]=c->r[5]|c->r[5]; // 802CB46C
  W32(c->r[1]+0x00000034u,c->r[29]); // 802CB470
  c->r[29]=c->r[4]|c->r[4]; // 802CB474
  W32(c->r[1]+0x00000030u,c->r[28]); // 802CB478
  c->r[28]=c->r[3]|c->r[3]; // 802CB47C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB480
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB484
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB488
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802CB48C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802CB490
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 802CB494
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB498
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB49C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB4A0
  c->f[2]=-c->f[2]; // 802CB4A4
  c->f[1]=-c->f[1]; // 802CB4A8
  c->r[3]=c->r[1]+0x00000008u; // 802CB4AC
  c->f[0]=-c->f[0]; // 802CB4B0
  c->r[4]=c->r[3]|c->r[3]; // 802CB4B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802CB4B8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802CB4BC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802CB4C0
  c->lr=0x802CB4C8u; f_80354444(c); // 802CB4C4
  c->r[3]=c->r[1]+0x00000014u; // 802CB4C8
  c->r[4]=c->r[1]+0x00000008u; // 802CB4CC
  c->r[5]=c->r[1]+0x00000020u; // 802CB4D0
  c->lr=0x802CB4D8u; f_803544EC(c); // 802CB4D4
  c->r[3]=c->r[1]+0x00000020u; // 802CB4D8
  c->r[4]=c->r[3]|c->r[3]; // 802CB4DC
  c->lr=0x802CB4E4u; f_80354444(c); // 802CB4E0
  c->r[3]=c->r[1]+0x00000008u; // 802CB4E4
  c->r[4]=c->r[1]+0x00000020u; // 802CB4E8
  c->r[5]=c->r[1]+0x00000014u; // 802CB4EC
  c->lr=0x802CB4F4u; f_803544EC(c); // 802CB4F0
  cmps(c,0,(int32_t)c->r[30],0); // 802CB4F4
  if (crb(c,2)) { goto L_802CB5A0; } // 802CB4F8
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 802CB4FC
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB500
  c->r[3]=c->r[29]+c->r[0]; // 802CB504
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB508
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB50C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB510
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB514
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB518
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CB51C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CB520
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 802CB524
  fcmp(c,0,c->f[30],c->f[0]); // 802CB528
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB52C
  if (!crb(c,2)) { goto L_802CB538; } // 802CB530
  goto L_802CB544; // 802CB534
L_802CB538:;
  c->f[1]=c->f[30]; // 802CB538
  c->lr=0x802CB540u; f_8026C8AC(c); // 802CB53C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 802CB540
L_802CB544:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802CB544
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802CB548
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CB54C
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CB550
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB554
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CB558
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CB55C
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 802CB560
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CB564
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CB568
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 802CB56C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 802CB570
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 802CB574
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB578
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CB57C
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 802CB580
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB584
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CB588
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 802CB58C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB590
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CB594
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 802CB598
  goto L_802CB6C8; // 802CB59C
L_802CB5A0:;
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)48); // 802CB5A0
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CB5A4
  c->r[3]=c->r[29]+c->r[31]; // 802CB5A8
  {uint32_t ea=c->r[29]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB5AC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB5B0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB5B4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB5B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CB5BC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB5C0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CB5C4
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 802CB5C8
  fcmp(c,0,c->f[31],c->f[30]); // 802CB5CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB5D0
  if (!crb(c,2)) { goto L_802CB5DC; } // 802CB5D4
  goto L_802CB5E8; // 802CB5D8
L_802CB5DC:;
  c->f[1]=c->f[31]; // 802CB5DC
  c->lr=0x802CB5E4u; f_8026C8AC(c); // 802CB5E0
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 802CB5E4
L_802CB5E8:;
  c->r[3]=c->r[29]+c->r[31]; // 802CB5E8
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CB5EC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB5F0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB5F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB5F8
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB5FC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CB600
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB604
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CB608
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802CB60C
  fcmp(c,0,c->f[29],c->f[31]); // 802CB610
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB614
  if (!crb(c,2)) { goto L_802CB620; } // 802CB618
  goto L_802CB62C; // 802CB61C
L_802CB620:;
  c->f[1]=c->f[29]; // 802CB620
  c->lr=0x802CB628u; f_8026C8AC(c); // 802CB624
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802CB628
L_802CB62C:;
  c->r[3]=c->r[29]+c->r[31]; // 802CB62C
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB630
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB634
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB638
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB63C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB640
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB644
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CB648
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CB64C
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802CB650
  fcmp(c,0,c->f[29],c->f[0]); // 802CB654
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB658
  if (!crb(c,2)) { goto L_802CB664; } // 802CB65C
  goto L_802CB670; // 802CB660
L_802CB664:;
  c->f[1]=c->f[29]; // 802CB664
  c->lr=0x802CB66Cu; f_8026C8AC(c); // 802CB668
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802CB66C
L_802CB670:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802CB670
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802CB674
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 802CB678
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 802CB67C
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB680
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CB684
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CB688
  {uint32_t ea=c->r[28]+0x00000010u; psq_store(c,1,ea,0,0);} // 802CB68C
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CB690
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CB694
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[3]);} // 802CB698
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 802CB69C
  {uint32_t ea=c->r[28]+0x00000018u; WF32(ea,c->f[3]);} // 802CB6A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB6A4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 802CB6A8
  {uint32_t ea=c->r[28]+0x00000020u; WF32(ea,c->f[3]);} // 802CB6AC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB6B0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 802CB6B4
  {uint32_t ea=c->r[28]+0x00000024u; WF32(ea,c->f[3]);} // 802CB6B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB6BC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CB6C0
  {uint32_t ea=c->r[28]+0x00000028u; WF32(ea,c->f[3]);} // 802CB6C4
L_802CB6C8:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802CB6C8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802CB6CC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 802CB6D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 802CB6D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 802CB6D8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 802CB6DC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802CB6E0
  c->r[30]=R32(c->r[1]+0x00000038u); // 802CB6E4
  c->r[29]=R32(c->r[1]+0x00000034u); // 802CB6E8
  c->r[0]=R32(c->r[1]+0x00000074u); // 802CB6EC
  c->r[28]=R32(c->r[1]+0x00000030u); // 802CB6F0
  c->lr=c->r[0]; // 802CB6F4
  c->r[1]=c->r[1]+0x00000070u; // 802CB6F8
  return; // 802CB6FC
}

// Calc_BILLBOARD_ROT__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_802CB700(Ctx* __restrict c) {
  trace_call(0x802CB700u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CB700
  c->r[0]=c->lr; // 802CB704
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CB708
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 802CB70C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 802CB710
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 802CB714
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 802CB718
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 802CB71C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 802CB720
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802CB724
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802CB728
  c->r[31]=c->r[4]|c->r[4]; // 802CB72C
  W32(c->r[1]+0x00000028u,c->r[30]); // 802CB730
  c->r[30]=c->r[3]|c->r[3]; // 802CB734
  W32(c->r[1]+0x00000024u,c->r[29]); // 802CB738
  c->r[29]=c->r[8]|c->r[8]; // 802CB73C
  W32(c->r[1]+0x00000020u,c->r[28]); // 802CB740
  c->r[28]=c->r[5]|c->r[5]; // 802CB744
  c->r[6]=R32(c->r[7]+0x00000000u); // 802CB748
  c->r[6]=c->r[6]+0x00000048u; // 802CB74C
  c->r[3]=R32(c->r[6]+0x00000024u); // 802CB750
  c->r[3]=c->r[6]+c->r[3]; // 802CB754
  c->r[3]=c->r[3]+c->r[0]; // 802CB758
  c->r[0]=R32(c->r[3]+0x00000004u); // 802CB75C
  cmps(c,0,(int32_t)c->r[0],0); // 802CB760
  if (crb(c,0)) { goto L_802CB7E4; } // 802CB764
  c->r[3]=c->r[7]|c->r[7]; // 802CB768
  c->r[4]=c->r[0]|c->r[0]; // 802CB76C
  c->lr=0x802CB774u; f_802B84A4(c); // 802CB770
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 802CB774
  cmps(c,0,(int32_t)c->r[0],0); // 802CB778
  if (crb(c,2)) { goto L_802CB788; } // 802CB77C
  c->r[3]=c->r[3]+c->r[0]; // 802CB780
  goto L_802CB78C; // 802CB784
L_802CB788:;
  c->r[3]=0u+0x00000000u; // 802CB788
L_802CB78C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CB78C
  if (crb(c,2)) { goto L_802CB7C0; } // 802CB790
  if (crb(c,2)) { goto L_802CB7A0; } // 802CB794
  c->r[0]=R32(c->r[3]+0x00000010u); // 802CB798
  goto L_802CB7A4; // 802CB79C
L_802CB7A0:;
  c->r[0]=0u+0x00000000u; // 802CB7A0
L_802CB7A4:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 802CB7A4
  c->r[3]=c->r[1]+0x00000008u; // 802CB7A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CB7AC
  c->r[4]=c->r[31]+c->r[29]; // 802CB7B0
  c->r[5]=c->r[31]+c->r[0]; // 802CB7B4
  c->lr=0x802CB7BCu; f_802CB098(c); // 802CB7B8
  goto L_802CB804; // 802CB7BC
L_802CB7C0:;
  c->r[29]=(uint32_t)((int32_t)c->r[29]*(int32_t)48); // 802CB7C0
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB7C4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802CB7C8
  c->r[3]=c->r[31]+c->r[29]; // 802CB7CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB7D0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB7D4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802CB7D8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802CB7DC
  goto L_802CB804; // 802CB7E0
L_802CB7E4:;
  c->r[29]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 802CB7E4
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB7E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802CB7EC
  c->r[3]=c->r[4]+c->r[29]; // 802CB7F0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB7F4
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB7F8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802CB7FC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802CB800
L_802CB804:;
  c->r[3]=c->r[1]+0x00000008u; // 802CB804
  c->r[4]=c->r[3]|c->r[3]; // 802CB808
  c->lr=0x802CB810u; f_80354444(c); // 802CB80C
  cmps(c,0,(int32_t)c->r[28],0); // 802CB810
  if (crb(c,2)) { goto L_802CB890; } // 802CB814
  c->r[3]=c->r[31]+c->r[29]; // 802CB818
  {uint32_t ea=c->r[31]+c->r[29]; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB81C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB820
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB824
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB828
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB82C
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB830
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CB834
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CB838
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 802CB83C
  fcmp(c,0,c->f[30],c->f[0]); // 802CB840
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB844
  if (!crb(c,2)) { goto L_802CB850; } // 802CB848
  goto L_802CB85C; // 802CB84C
L_802CB850:;
  c->f[1]=c->f[30]; // 802CB850
  c->lr=0x802CB858u; f_8026C8AC(c); // 802CB854
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 802CB858
L_802CB85C:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 802CB85C
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB860
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB864
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 802CB868
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 802CB86C
  {double t0=S(c->ps1[2]), t1=S(c->f[2]); c->f[0]=t0; c->ps1[0]=t1;} // 802CB870
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 802CB874
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 802CB878
  {double t0=-c->f[2], t1=-c->ps1[2]; c->f[0]=t0; c->ps1[0]=t1;} // 802CB87C
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 802CB880
  {double t0=S(c->f[0]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 802CB884
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,0,ea,0,0);} // 802CB888
  goto L_802CB994; // 802CB88C
L_802CB890:;
  c->r[3]=c->r[31]+c->r[29]; // 802CB890
  {uint32_t ea=c->r[31]+c->r[29]; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB894
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB898
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB89C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB8A0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CB8A4
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CB8A8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB8AC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CB8B0
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 802CB8B4
  fcmp(c,0,c->f[31],c->f[30]); // 802CB8B8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB8BC
  if (!crb(c,2)) { goto L_802CB8C8; } // 802CB8C0
  goto L_802CB8D4; // 802CB8C4
L_802CB8C8:;
  c->f[1]=c->f[31]; // 802CB8C8
  c->lr=0x802CB8D0u; f_8026C8AC(c); // 802CB8CC
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 802CB8D0
L_802CB8D4:;
  c->r[3]=c->r[31]+c->r[29]; // 802CB8D4
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CB8D8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB8DC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB8E0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB8E4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB8E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CB8EC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB8F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CB8F4
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802CB8F8
  fcmp(c,0,c->f[29],c->f[31]); // 802CB8FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB900
  if (!crb(c,2)) { goto L_802CB90C; } // 802CB904
  goto L_802CB918; // 802CB908
L_802CB90C:;
  c->f[1]=c->f[29]; // 802CB90C
  c->lr=0x802CB914u; f_8026C8AC(c); // 802CB910
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802CB914
L_802CB918:;
  c->r[3]=c->r[31]+c->r[29]; // 802CB918
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CB91C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CB920
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB924
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CB928
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CB92C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CB930
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CB934
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CB938
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802CB93C
  fcmp(c,0,c->f[29],c->f[0]); // 802CB940
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CB944
  if (!crb(c,2)) { goto L_802CB950; } // 802CB948
  goto L_802CB95C; // 802CB94C
L_802CB950:;
  c->f[1]=c->f[29]; // 802CB950
  c->lr=0x802CB958u; f_8026C8AC(c); // 802CB954
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802CB958
L_802CB95C:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CB95C
  {double t0=S(c->f[30]), t1=S(c->f[31]); c->f[4]=t0; c->ps1[4]=t1;} // 802CB960
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CB964
  {double t0=S(c->ps1[3]), t1=S(c->f[3]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB968
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 802CB96C
  {double t0=-c->f[3], t1=-c->ps1[3]; c->f[0]=t0; c->ps1[0]=t1;} // 802CB970
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[1]);} // 802CB974
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB978
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 802CB97C
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CB980
  {double t0=S(c->f[0]), t1=S(c->ps1[3]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB984
  {uint32_t ea=c->r[30]+0x00000020u; psq_store(c,1,ea,0,0);} // 802CB988
  {double t0=S(c->f[2]*c->f[4]), t1=S(c->ps1[2]*c->ps1[4]); c->f[2]=t0; c->ps1[2]=t1;} // 802CB98C
  {uint32_t ea=c->r[30]+0x00000010u; psq_store(c,2,ea,0,0);} // 802CB990
L_802CB994:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 802CB994
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 802CB998
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 802CB99C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 802CB9A0
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 802CB9A4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 802CB9A8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802CB9AC
  c->r[30]=R32(c->r[1]+0x00000028u); // 802CB9B0
  c->r[29]=R32(c->r[1]+0x00000024u); // 802CB9B4
  c->r[0]=R32(c->r[1]+0x00000064u); // 802CB9B8
  c->r[28]=R32(c->r[1]+0x00000020u); // 802CB9BC
  c->lr=c->r[0]; // 802CB9C0
  c->r[1]=c->r[1]+0x00000060u; // 802CB9C4
  return; // 802CB9C8
}

// Calc_BILLBOARD_PERSP_ROT__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_802CB9CC(Ctx* __restrict c) {
  trace_call(0x802CB9CCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CB9CC
  c->r[0]=c->lr; // 802CB9D0
  W32(c->r[1]+0x00000074u,c->r[0]); // 802CB9D4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802CB9D8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802CB9DC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802CB9E0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802CB9E4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802CB9E8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802CB9EC
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802CB9F0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802CB9F4
  c->r[31]=c->r[5]|c->r[5]; // 802CB9F8
  W32(c->r[1]+0x00000038u,c->r[30]); // 802CB9FC
  c->r[30]=c->r[4]|c->r[4]; // 802CBA00
  W32(c->r[1]+0x00000034u,c->r[29]); // 802CBA04
  c->r[29]=c->r[3]|c->r[3]; // 802CBA08
  W32(c->r[1]+0x00000030u,c->r[28]); // 802CBA0C
  c->r[28]=c->r[8]|c->r[8]; // 802CBA10
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBA14
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBA18
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBA1C
  c->f[2]=-c->f[2]; // 802CBA20
  c->f[1]=-c->f[1]; // 802CBA24
  c->f[0]=-c->f[0]; // 802CBA28
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802CBA2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802CBA30
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802CBA34
  c->r[3]=R32(c->r[7]+0x00000000u); // 802CBA38
  c->r[5]=c->r[3]+0x00000048u; // 802CBA3C
  c->r[3]=R32(c->r[3]+0x0000006Cu); // 802CBA40
  c->r[3]=c->r[5]+c->r[3]; // 802CBA44
  c->r[3]=c->r[3]+c->r[0]; // 802CBA48
  c->r[0]=R32(c->r[3]+0x00000004u); // 802CBA4C
  cmps(c,0,(int32_t)c->r[0],0); // 802CBA50
  if (crb(c,0)) { goto L_802CBAD4; } // 802CBA54
  c->r[3]=c->r[7]|c->r[7]; // 802CBA58
  c->r[4]=c->r[0]|c->r[0]; // 802CBA5C
  c->lr=0x802CBA64u; f_802B84A4(c); // 802CBA60
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 802CBA64
  cmps(c,0,(int32_t)c->r[0],0); // 802CBA68
  if (crb(c,2)) { goto L_802CBA78; } // 802CBA6C
  c->r[3]=c->r[3]+c->r[0]; // 802CBA70
  goto L_802CBA7C; // 802CBA74
L_802CBA78:;
  c->r[3]=0u+0x00000000u; // 802CBA78
L_802CBA7C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CBA7C
  if (crb(c,2)) { goto L_802CBAB0; } // 802CBA80
  if (crb(c,2)) { goto L_802CBA90; } // 802CBA84
  c->r[0]=R32(c->r[3]+0x00000010u); // 802CBA88
  goto L_802CBA94; // 802CBA8C
L_802CBA90:;
  c->r[0]=0u+0x00000000u; // 802CBA90
L_802CBA94:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 802CBA94
  c->r[3]=c->r[1]+0x00000014u; // 802CBA98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CBA9C
  c->r[4]=c->r[30]+c->r[28]; // 802CBAA0
  c->r[5]=c->r[30]+c->r[0]; // 802CBAA4
  c->lr=0x802CBAACu; f_802CB148(c); // 802CBAA8
  goto L_802CBAF4; // 802CBAAC
L_802CBAB0:;
  c->r[28]=(uint32_t)((int32_t)c->r[28]*(int32_t)48); // 802CBAB0
  c->r[3]=c->r[30]+c->r[28]; // 802CBAB4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBAB8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBABC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBAC0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802CBAC4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802CBAC8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802CBACC
  goto L_802CBAF4; // 802CBAD0
L_802CBAD4:;
  c->r[28]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 802CBAD4
  c->r[3]=c->r[4]+c->r[28]; // 802CBAD8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBADC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBAE0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBAE4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802CBAE8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802CBAEC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802CBAF0
L_802CBAF4:;
  c->r[3]=c->r[1]+0x00000008u; // 802CBAF4
  c->r[4]=c->r[3]|c->r[3]; // 802CBAF8
  c->lr=0x802CBB00u; f_80354444(c); // 802CBAFC
  c->r[3]=c->r[1]+0x00000014u; // 802CBB00
  c->r[4]=c->r[1]+0x00000008u; // 802CBB04
  c->r[5]=c->r[1]+0x00000020u; // 802CBB08
  c->lr=0x802CBB10u; f_803544EC(c); // 802CBB0C
  c->r[3]=c->r[1]+0x00000020u; // 802CBB10
  c->r[4]=c->r[3]|c->r[3]; // 802CBB14
  c->lr=0x802CBB1Cu; f_80354444(c); // 802CBB18
  c->r[3]=c->r[1]+0x00000008u; // 802CBB1C
  c->r[4]=c->r[1]+0x00000020u; // 802CBB20
  c->r[5]=c->r[1]+0x00000014u; // 802CBB24
  c->lr=0x802CBB2Cu; f_803544EC(c); // 802CBB28
  cmps(c,0,(int32_t)c->r[31],0); // 802CBB2C
  if (crb(c,2)) { goto L_802CBBD4; } // 802CBB30
  c->r[3]=c->r[30]+c->r[28]; // 802CBB34
  {uint32_t ea=c->r[30]+c->r[28]; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBB38
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBB3C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBB40
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBB44
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBB48
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBB4C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CBB50
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CBB54
  c->f[30]=c->ps1[30]=S(c->f[3]+c->f[1]); // 802CBB58
  fcmp(c,0,c->f[30],c->f[0]); // 802CBB5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBB60
  if (!crb(c,2)) { goto L_802CBB6C; } // 802CBB64
  goto L_802CBB78; // 802CBB68
L_802CBB6C:;
  c->f[1]=c->f[30]; // 802CBB6C
  c->lr=0x802CBB74u; f_8026C8AC(c); // 802CBB70
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 802CBB74
L_802CBB78:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802CBB78
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802CBB7C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBB80
  {double t0=S(c->f[1]*c->f[0]), t1=S(c->ps1[1]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBB84
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802CBB88
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBB8C
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CBB90
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 802CBB94
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CBB98
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBB9C
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 802CBBA0
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBBA4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 802CBBA8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBBAC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CBBB0
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 802CBBB4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBBB8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CBBBC
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 802CBBC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBBC4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CBBC8
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 802CBBCC
  goto L_802CBCF8; // 802CBBD0
L_802CBBD4:;
  c->r[3]=c->r[30]+c->r[28]; // 802CBBD4
  {uint32_t ea=c->r[30]+c->r[28]; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBBD8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBBDC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBBE0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBBE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CBBE8
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CBBEC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBBF0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CBBF4
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 802CBBF8
  fcmp(c,0,c->f[31],c->f[30]); // 802CBBFC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBC00
  if (!crb(c,2)) { goto L_802CBC0C; } // 802CBC04
  goto L_802CBC18; // 802CBC08
L_802CBC0C:;
  c->f[1]=c->f[31]; // 802CBC0C
  c->lr=0x802CBC14u; f_8026C8AC(c); // 802CBC10
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 802CBC14
L_802CBC18:;
  c->r[3]=c->r[30]+c->r[28]; // 802CBC18
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CBC1C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBC20
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBC24
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBC28
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBC2C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CBC30
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBC34
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CBC38
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802CBC3C
  fcmp(c,0,c->f[29],c->f[31]); // 802CBC40
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBC44
  if (!crb(c,2)) { goto L_802CBC50; } // 802CBC48
  goto L_802CBC5C; // 802CBC4C
L_802CBC50:;
  c->f[1]=c->f[29]; // 802CBC50
  c->lr=0x802CBC58u; f_8026C8AC(c); // 802CBC54
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802CBC58
L_802CBC5C:;
  c->r[3]=c->r[30]+c->r[28]; // 802CBC5C
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBC60
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBC64
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBC68
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBC6C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBC70
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBC74
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CBC78
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CBC7C
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802CBC80
  fcmp(c,0,c->f[29],c->f[0]); // 802CBC84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBC88
  if (!crb(c,2)) { goto L_802CBC94; } // 802CBC8C
  goto L_802CBCA0; // 802CBC90
L_802CBC94:;
  c->f[1]=c->f[29]; // 802CBC94
  c->lr=0x802CBC9Cu; f_8026C8AC(c); // 802CBC98
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802CBC9C
L_802CBCA0:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802CBCA0
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802CBCA4
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBCA8
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBCAC
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802CBCB0
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBCB4
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CBCB8
  {uint32_t ea=c->r[29]+0x00000010u; psq_store(c,1,ea,0,0);} // 802CBCBC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CBCC0
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBCC4
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 802CBCC8
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBCCC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 802CBCD0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBCD4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 802CBCD8
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 802CBCDC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBCE0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 802CBCE4
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 802CBCE8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBCEC
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CBCF0
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[3]);} // 802CBCF4
L_802CBCF8:;
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802CBCF8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802CBCFC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 802CBD00
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 802CBD04
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 802CBD08
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 802CBD0C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802CBD10
  c->r[30]=R32(c->r[1]+0x00000038u); // 802CBD14
  c->r[29]=R32(c->r[1]+0x00000034u); // 802CBD18
  c->r[0]=R32(c->r[1]+0x00000074u); // 802CBD1C
  c->r[28]=R32(c->r[1]+0x00000030u); // 802CBD20
  c->lr=c->r[0]; // 802CBD24
  c->r[1]=c->r[1]+0x00000070u; // 802CBD28
  return; // 802CBD2C
}

// Calc_BILLBOARD_Y__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_802CBD30(Ctx* __restrict c) {
  trace_call(0x802CBD30u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CBD30
  c->r[0]=c->lr; // 802CBD34
  W32(c->r[1]+0x00000084u,c->r[0]); // 802CBD38
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802CBD3C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802CBD40
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 802CBD44
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 802CBD48
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 802CBD4C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 802CBD50
  c->r[11]=c->r[1]+0x00000050u; // 802CBD54
  c->lr=0x802CBD5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CBD58
  c->r[30]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 802CBD5C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBD60
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CBD64
  c->r[27]=c->r[3]|c->r[3]; // 802CBD68
  c->f[6]=-c->f[3]; // 802CBD6C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CBD70
  c->r[6]=c->r[4]+c->r[30]; // 802CBD74
  {uint32_t ea=c->r[3]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CBD78
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBD7C
  c->r[28]=c->r[4]|c->r[4]; // 802CBD80
  {uint32_t ea=c->r[6]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBD84
  c->r[29]=c->r[5]|c->r[5]; // 802CBD88
  {uint32_t ea=c->r[6]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBD8C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBD90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CBD94
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[3]);} // 802CBD98
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBD9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 802CBDA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CBDA4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[5]);} // 802CBDA8
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 802CBDAC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 802CBDB0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[6]);} // 802CBDB4
  fcmp(c,0,c->f[30],c->f[31]); // 802CBDB8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[31]);} // 802CBDBC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBDC0
  if (!crb(c,2)) { goto L_802CBDCC; } // 802CBDC4
  goto L_802CBDD8; // 802CBDC8
L_802CBDCC:;
  c->f[1]=c->f[30]; // 802CBDCC
  c->lr=0x802CBDD4u; f_8026C8AC(c); // 802CBDD0
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[1]); // 802CBDD4
L_802CBDD8:;
  c->f[0]=c->ps1[0]=fres(c->f[31]); // 802CBDD8
  c->r[31]=c->r[1]+0x00000014u; // 802CBDDC
  c->r[3]=c->r[1]+0x00000008u; // 802CBDE0
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 802CBDE4
  c->r[4]=c->r[3]|c->r[3]; // 802CBDE8
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBDEC
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802CBDF0
  {double t0=S(-std::fma(c->f[31],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[31],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 802CBDF4
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBDF8
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,2,ea,1,0);} // 802CBDFC
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,0);} // 802CBE00
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBE04
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,1,ea,1,0);} // 802CBE08
  c->lr=0x802CBE10u; f_80354444(c); // 802CBE0C
  c->r[4]=c->r[31]|c->r[31]; // 802CBE10
  c->r[3]=c->r[1]+0x00000008u; // 802CBE14
  c->r[5]=c->r[1]+0x00000020u; // 802CBE18
  c->lr=0x802CBE20u; f_803544EC(c); // 802CBE1C
  cmps(c,0,(int32_t)c->r[29],0); // 802CBE20
  if (crb(c,2)) { goto L_802CBE84; } // 802CBE24
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 802CBE28
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,0,ea,0,0);} // 802CBE2C
  {double t0=S(c->f[2]*c->f[31]), t1=S(c->ps1[2]*c->f[31]); c->f[2]=t0; c->ps1[2]=t1;} // 802CBE30
  {double t0=S(c->f[0]*c->f[31]), t1=S(c->ps1[0]*c->f[31]); c->f[0]=t0; c->ps1[0]=t1;} // 802CBE34
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBE38
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802CBE3C
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,1,ea,0,0);} // 802CBE40
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,0,ea,0,0);} // 802CBE44
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 802CBE48
  {double t0=S(c->f[2]*c->f[31]), t1=S(c->ps1[2]*c->f[31]); c->f[2]=t0; c->ps1[2]=t1;} // 802CBE4C
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[2]);} // 802CBE50
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 802CBE54
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[2]);} // 802CBE58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBE5C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 802CBE60
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[2]);} // 802CBE64
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBE68
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 802CBE6C
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[2]);} // 802CBE70
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBE74
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[31]); // 802CBE78
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[2]);} // 802CBE7C
  goto L_802CBF64; // 802CBE80
L_802CBE84:;
  c->r[3]=c->r[28]+c->r[30]; // 802CBE84
  {uint32_t ea=c->r[28]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBE88
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBE8C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBE90
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBE94
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CBE98
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CBE9C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBEA0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CBEA4
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802CBEA8
  fcmp(c,0,c->f[29],c->f[30]); // 802CBEAC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBEB0
  if (!crb(c,2)) { goto L_802CBEBC; } // 802CBEB4
  goto L_802CBEC8; // 802CBEB8
L_802CBEBC:;
  c->f[1]=c->f[29]; // 802CBEBC
  c->lr=0x802CBEC4u; f_8026C8AC(c); // 802CBEC0
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 802CBEC4
L_802CBEC8:;
  c->r[3]=c->r[28]+c->r[30]; // 802CBEC8
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBECC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBED0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBED4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBED8
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBEDC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBEE0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CBEE4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CBEE8
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802CBEEC
  fcmp(c,0,c->f[29],c->f[0]); // 802CBEF0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CBEF4
  if (!crb(c,2)) { goto L_802CBF00; } // 802CBEF8
  goto L_802CBF0C; // 802CBEFC
L_802CBF00:;
  c->f[1]=c->f[29]; // 802CBF00
  c->lr=0x802CBF08u; f_8026C8AC(c); // 802CBF04
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802CBF08
L_802CBF0C:;
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CBF0C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802CBF10
  {double t0=S(c->f[3]*c->f[30]), t1=S(c->ps1[3]*c->f[30]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBF14
  {double t0=S(c->f[1]*c->f[31]), t1=S(c->ps1[1]*c->f[31]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBF18
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802CBF1C
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CBF20
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CBF24
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,1,ea,0,0);} // 802CBF28
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802CBF2C
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBF30
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 802CBF34
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 802CBF38
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[3]);} // 802CBF3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBF40
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 802CBF44
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[3]);} // 802CBF48
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBF4C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 802CBF50
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[3]);} // 802CBF54
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBF58
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CBF5C
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[3]);} // 802CBF60
L_802CBF64:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 802CBF64
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 802CBF68
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 802CBF6C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 802CBF70
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 802CBF74
  c->r[11]=c->r[1]+0x00000050u; // 802CBF78
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 802CBF7C
  c->lr=0x802CBF84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CBF80
  c->r[0]=R32(c->r[1]+0x00000084u); // 802CBF84
  c->lr=c->r[0]; // 802CBF88
  c->r[1]=c->r[1]+0x00000080u; // 802CBF8C
  return; // 802CBF90
}

// Calc_BILLBOARD_PERSP_Y__Q34nw4r3g3d26@unnamed@g3d_calcview_cpp@FPQ34nw4r4math5MTX34PCQ34nw4r4math5MTX34bPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlUl
void f_802CBF94(Ctx* __restrict c) {
  trace_call(0x802CBF94u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CBF94
  c->r[0]=c->lr; // 802CBF98
  W32(c->r[1]+0x00000084u,c->r[0]); // 802CBF9C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802CBFA0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802CBFA4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 802CBFA8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 802CBFAC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 802CBFB0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 802CBFB4
  c->r[11]=c->r[1]+0x00000050u; // 802CBFB8
  c->lr=0x802CBFC0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CBFBC
  c->r[30]=(uint32_t)((int32_t)c->r[8]*(int32_t)48); // 802CBFC0
  c->r[28]=c->r[4]|c->r[4]; // 802CBFC4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CBFC8
  c->r[27]=c->r[3]|c->r[3]; // 802CBFCC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CBFD0
  c->r[29]=c->r[5]|c->r[5]; // 802CBFD4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBFD8
  c->r[4]=c->r[4]+c->r[30]; // 802CBFDC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CBFE0
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802CBFE4
  {uint32_t ea=c->r[4]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CBFE8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CBFEC
  {uint32_t ea=c->r[4]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CBFF0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CBFF4
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 802CBFF8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CBFFC
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CC000
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 802CC004
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CC008
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CC00C
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CC010
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 802CC014
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CC018
  c->f[2]=-c->f[3]; // 802CC01C
  c->f[1]=-c->f[1]; // 802CC020
  c->f[0]=-c->f[0]; // 802CC024
  fcmp(c,0,c->f[31],c->f[30]); // 802CC028
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802CC02C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802CC030
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802CC034
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CC038
  if (!crb(c,2)) { goto L_802CC044; } // 802CC03C
  goto L_802CC050; // 802CC040
L_802CC044:;
  c->f[1]=c->f[31]; // 802CC044
  c->lr=0x802CC04Cu; f_8026C8AC(c); // 802CC048
  c->f[30]=c->ps1[30]=S(c->f[31]*c->f[1]); // 802CC04C
L_802CC050:;
  c->f[0]=c->ps1[0]=fres(c->f[30]); // 802CC050
  c->r[31]=c->r[1]+0x00000014u; // 802CC054
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,2,ea,0,0);} // 802CC058
  c->r[3]=c->r[31]|c->r[31]; // 802CC05C
  c->r[4]=c->r[1]+0x00000008u; // 802CC060
  c->r[5]=c->r[1]+0x00000020u; // 802CC064
  {double t0=S(c->f[0]+c->f[0]), t1=S(c->ps1[0]+c->ps1[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CC068
  {double t0=S(c->f[0]*c->f[0]), t1=S(c->ps1[0]*c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802CC06C
  {double t0=S(-std::fma(c->f[30],c->f[0],-c->f[1])), t1=S(-std::fma(c->ps1[30],c->ps1[0],-c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 802CC070
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CC074
  {uint32_t ea=c->r[31]+0x00000008u; psq_load(c,2,ea,1,0);} // 802CC078
  {uint32_t ea=c->r[31]+0x00000000u; psq_store(c,1,ea,0,0);} // 802CC07C
  {double t0=S(c->f[2]*c->f[0]), t1=S(c->ps1[2]*c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CC080
  {uint32_t ea=c->r[31]+0x00000008u; psq_store(c,1,ea,1,0);} // 802CC084
  c->lr=0x802CC08Cu; f_803544EC(c); // 802CC088
  c->r[3]=c->r[1]+0x00000020u; // 802CC08C
  c->r[4]=c->r[3]|c->r[3]; // 802CC090
  c->lr=0x802CC098u; f_80354444(c); // 802CC094
  c->r[4]=c->r[31]|c->r[31]; // 802CC098
  c->r[3]=c->r[1]+0x00000020u; // 802CC09C
  c->r[5]=c->r[1]+0x00000008u; // 802CC0A0
  c->lr=0x802CC0A8u; f_803544EC(c); // 802CC0A4
  cmps(c,0,(int32_t)c->r[29],0); // 802CC0A8
  if (crb(c,2)) { goto L_802CC10C; } // 802CC0AC
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 802CC0B0
  {uint32_t ea=c->r[31]+0x00000000u; psq_load(c,0,ea,0,0);} // 802CC0B4
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 802CC0B8
  {double t0=S(c->f[0]*c->f[30]), t1=S(c->ps1[0]*c->f[30]); c->f[0]=t0; c->ps1[0]=t1;} // 802CC0BC
  {double t0=S(c->f[2]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CC0C0
  {double t0=S(c->ps1[2]), t1=S(c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802CC0C4
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,1,ea,0,0);} // 802CC0C8
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,0,ea,0,0);} // 802CC0CC
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 802CC0D0
  {double t0=S(c->f[2]*c->f[30]), t1=S(c->ps1[2]*c->f[30]); c->f[2]=t0; c->ps1[2]=t1;} // 802CC0D4
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[2]);} // 802CC0D8
  {double t0=S(c->ps1[2]), t1=S(c->ps1[2]); c->f[2]=t0; c->ps1[2]=t1;} // 802CC0DC
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[2]);} // 802CC0E0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CC0E4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 802CC0E8
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[2]);} // 802CC0EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CC0F0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 802CC0F4
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[2]);} // 802CC0F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CC0FC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[30]); // 802CC100
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[2]);} // 802CC104
  goto L_802CC1EC; // 802CC108
L_802CC10C:;
  c->r[3]=c->r[28]+c->r[30]; // 802CC10C
  {uint32_t ea=c->r[28]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 802CC110
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CC114
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CC118
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CC11C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 802CC120
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CC124
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CC128
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802CC12C
  c->f[29]=c->ps1[29]=S(c->f[2]+c->f[0]); // 802CC130
  fcmp(c,0,c->f[29],c->f[31]); // 802CC134
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CC138
  if (!crb(c,2)) { goto L_802CC144; } // 802CC13C
  goto L_802CC150; // 802CC140
L_802CC144:;
  c->f[1]=c->f[29]; // 802CC144
  c->lr=0x802CC14Cu; f_8026C8AC(c); // 802CC148
  c->f[31]=c->ps1[31]=S(c->f[29]*c->f[1]); // 802CC14C
L_802CC150:;
  c->r[3]=c->r[28]+c->r[30]; // 802CC150
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CC154
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CC158
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CC15C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 802CC160
  {uint32_t ea=c->r[3]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CC164
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 802CC168
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[3]); // 802CC16C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802CC170
  c->f[29]=c->ps1[29]=S(c->f[3]+c->f[1]); // 802CC174
  fcmp(c,0,c->f[29],c->f[0]); // 802CC178
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802CC17C
  if (!crb(c,2)) { goto L_802CC188; } // 802CC180
  goto L_802CC194; // 802CC184
L_802CC188:;
  c->f[1]=c->f[29]; // 802CC188
  c->lr=0x802CC190u; f_8026C8AC(c); // 802CC18C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 802CC190
L_802CC194:;
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,3,ea,0,0);} // 802CC194
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802CC198
  {double t0=S(c->f[3]*c->f[31]), t1=S(c->ps1[3]*c->f[31]); c->f[3]=t0; c->ps1[3]=t1;} // 802CC19C
  {double t0=S(c->f[1]*c->f[30]), t1=S(c->ps1[1]*c->f[30]); c->f[1]=t0; c->ps1[1]=t1;} // 802CC1A0
  {double t0=S(c->f[3]), t1=S(c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802CC1A4
  {double t0=S(c->ps1[3]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802CC1A8
  {uint32_t ea=c->r[27]+0x00000000u; psq_store(c,2,ea,0,0);} // 802CC1AC
  {uint32_t ea=c->r[27]+0x00000010u; psq_store(c,1,ea,0,0);} // 802CC1B0
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,3,ea,0,0);} // 802CC1B4
  {double t0=S(c->f[3]*c->f[0]), t1=S(c->ps1[3]*c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CC1B8
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[3]);} // 802CC1BC
  {double t0=S(c->ps1[3]), t1=S(c->ps1[3]); c->f[3]=t0; c->ps1[3]=t1;} // 802CC1C0
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[3]);} // 802CC1C4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CC1C8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[31]); // 802CC1CC
  {uint32_t ea=c->r[27]+0x00000020u; WF32(ea,c->f[3]);} // 802CC1D0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CC1D4
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[30]); // 802CC1D8
  {uint32_t ea=c->r[27]+0x00000024u; WF32(ea,c->f[3]);} // 802CC1DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CC1E0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[0]); // 802CC1E4
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[3]);} // 802CC1E8
L_802CC1EC:;
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 802CC1EC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 802CC1F0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 802CC1F4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 802CC1F8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 802CC1FC
  c->r[11]=c->r[1]+0x00000050u; // 802CC200
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 802CC204
  c->lr=0x802CC20Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CC208
  c->r[0]=R32(c->r[1]+0x00000084u); // 802CC20C
  c->lr=c->r[0]; // 802CC210
  c->r[1]=c->r[1]+0x00000080u; // 802CC214
  return; // 802CC218
}

// CalcView__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
void f_802CC21C(Ctx* __restrict c) {
  trace_call(0x802CC21Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CC21C
  c->r[0]=c->lr; // 802CC220
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802CC224
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 802CC228
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 802CC22C
  c->r[11]=c->r[1]+0x00000090u; // 802CC230
  c->lr=0x802CC238u; f_802F0D94(c); // 802CC234
  cmps(c,0,(int32_t)c->r[7],0); // 802CC238
  c->r[15]=c->r[3]|c->r[3]; // 802CC23C
  c->r[16]=c->r[4]|c->r[4]; // 802CC240
  c->r[17]=c->r[5]|c->r[5]; // 802CC244
  c->r[18]=c->r[6]|c->r[6]; // 802CC248
  c->r[19]=c->r[7]|c->r[7]; // 802CC24C
  c->r[20]=c->r[8]|c->r[8]; // 802CC250
  c->r[21]=c->r[9]|c->r[9]; // 802CC254
  c->r[22]=c->r[10]|c->r[10]; // 802CC258
  if (crb(c,2)) { goto L_802CC520; } // 802CC25C
  c->r[3]=(uint32_t)((int32_t)c->r[7]*(int32_t)36); // 802CC260
  cmpu(c,0,c->r[7],0x00000001u); // 802CC264
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 802CC268
  c->r[0]=c->r[3]+0x0000001Fu; // 802CC26C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802CC270
  c->r[4]=c->r[4]+0x0000001Fu; // 802CC274
  W32(c->r[1]+0x00000040u,c->r[0]); // 802CC278
  c->r[14]=rotl(c->r[4],0)&0xFFFFFFE0u; // 802CC27C
  if (!crb(c,1)) { goto L_802CC29C; } // 802CC280
  c->r[3]=c->r[20]|c->r[20]; // 802CC284
  c->r[4]=c->r[17]|c->r[17]; // 802CC288
  c->r[5]=c->r[15]|c->r[15]; // 802CC28C
  c->r[6]=c->r[19]|c->r[19]; // 802CC290
  c->lr=0x802CC298u; f_803536C0(c); // 802CC294
  goto L_802CC2AC; // 802CC298
L_802CC29C:;
  c->r[3]=c->r[20]|c->r[20]; // 802CC29C
  c->r[4]=c->r[17]|c->r[17]; // 802CC2A0
  c->r[5]=c->r[15]|c->r[15]; // 802CC2A4
  c->lr=0x802CC2ACu; f_803535F4(c); // 802CC2A8
L_802CC2AC:;
  c->lr=0x802CC2B0u; f_802CD048(c); // 802CC2AC
  c->r[24]=c->r[3]|c->r[3]; // 802CC2B0
  c->r[31]=0u+0x80440000u; // 802CC2B4
  c->r[30]=c->r[18]|c->r[18]; // 802CC2B8
  c->r[29]=c->r[15]|c->r[15]; // 802CC2BC
  c->r[27]=c->r[17]|c->r[17]; // 802CC2C0
  c->r[26]=c->r[24]|c->r[24]; // 802CC2C4
  c->r[25]=c->r[15]|c->r[15]; // 802CC2C8
  c->r[31]=c->r[31]+0xFFFFC598u; // 802CC2CC
  c->r[23]=0u+0x00000000u; // 802CC2D0
  c->r[28]=0u+0x00000000u; // 802CC2D4
  goto L_802CC434; // 802CC2D8
L_802CC2DC:;
  c->r[9]=R32(c->r[30]+0x00000000u); // 802CC2DC
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; cr0(c,c->r[0]); // 802CC2E0
  if (crb(c,2)) { goto L_802CC3A8; } // 802CC2E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CC2E8
  c->r[5]=R32(c->r[21]+0x00000000u); // 802CC2EC
  c->r[12]=R32(c->r[31]+c->r[0]); // 802CC2F0
  c->r[3]=c->r[29]|c->r[29]; // 802CC2F4
  W32(c->r[1]+0x00000008u,c->r[5]); // 802CC2F8
  c->r[4]=c->r[17]|c->r[17]; // 802CC2FC
  c->r[6]=c->r[20]|c->r[20]; // 802CC300
  c->r[8]=c->r[23]|c->r[23]; // 802CC304
  c->r[7]=c->r[1]+0x00000008u; // 802CC308
  c->r[5]=rotl(c->r[9],3)&0x00000001u; // 802CC30C
  c->ctr=c->r[12]; // 802CC310
  if (true) { c->lr=0x802CC318u; dispatch(c,c->ctr); } // 802CC314
  c->r[4]=R32(c->r[21]+0x00000000u); // 802CC318
  c->r[3]=c->r[21]|c->r[21]; // 802CC31C
  c->r[4]=c->r[4]+0x00000048u; // 802CC320
  c->r[0]=R32(c->r[4]+0x00000024u); // 802CC324
  c->r[0]=c->r[4]+c->r[0]; // 802CC328
  c->r[4]=c->r[0]+c->r[28]; // 802CC32C
  c->r[4]=R32(c->r[4]+0x00000004u); // 802CC330
  c->lr=0x802CC338u; f_802B84F8(c); // 802CC334
  c->r[0]=0u-c->r[3]; // 802CC338
  c->r[0]=c->r[0]|c->r[3]; // 802CC33C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802CC340
  if (crb(c,2)) { goto L_802CC36C; } // 802CC344
  c->r[0]=R32(c->r[3]+0x00000060u); // 802CC348
  cmps(c,0,(int32_t)c->r[0],0); // 802CC34C
  if (crb(c,2)) { goto L_802CC35C; } // 802CC350
  c->r[0]=c->r[3]+c->r[0]; // 802CC354
  goto L_802CC360; // 802CC358
L_802CC35C:;
  c->r[0]=0u+0x00000000u; // 802CC35C
L_802CC360:;
  c->r[3]=0u-c->r[0]; // 802CC360
  c->r[0]=c->r[3]|c->r[0]; // 802CC364
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802CC368
L_802CC36C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CC36C
  if (crb(c,2)) { goto L_802CC418; } // 802CC370
  c->r[3]=c->r[27]|c->r[27]; // 802CC374
  c->r[4]=c->r[1]+0x00000010u; // 802CC378
  c->lr=0x802CC380u; f_80353858(c); // 802CC37C
  cmpu(c,0,c->r[3],0x00000001u); // 802CC380
  if (!crb(c,2)) { goto L_802CC39C; } // 802CC384
  c->r[3]=c->r[25]|c->r[25]; // 802CC388
  c->r[5]=c->r[26]|c->r[26]; // 802CC38C
  c->r[4]=c->r[1]+0x00000010u; // 802CC390
  c->lr=0x802CC398u; f_803535F4(c); // 802CC394
  goto L_802CC418; // 802CC398
L_802CC39C:;
  c->r[3]=c->r[26]|c->r[26]; // 802CC39C
  c->lr=0x802CC3A4u; f_80353594(c); // 802CC3A0
  goto L_802CC418; // 802CC3A4
L_802CC3A8:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 802CC3A8
  c->r[3]=c->r[3]+0x00000048u; // 802CC3AC
  c->r[0]=R32(c->r[3]+0x00000024u); // 802CC3B0
  c->r[0]=c->r[3]+c->r[0]; // 802CC3B4
  c->r[3]=c->r[0]+c->r[28]; // 802CC3B8
  c->r[4]=R32(c->r[3]+0x00000004u); // 802CC3BC
  cmps(c,0,(int32_t)c->r[4],0); // 802CC3C0
  if (crb(c,0)) { goto L_802CC418; } // 802CC3C4
  c->r[3]=c->r[21]|c->r[21]; // 802CC3C8
  c->lr=0x802CC3D0u; f_802B84F8(c); // 802CC3CC
  cmps(c,0,(int32_t)c->r[3],0); // 802CC3D0
  if (crb(c,2)) { goto L_802CC418; } // 802CC3D4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802CC3D8
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802CC3DC
  if (crb(c,2)) { goto L_802CC418; } // 802CC3E0
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 802CC3E4
  c->r[3]=c->r[21]|c->r[21]; // 802CC3E8
  c->lr=0x802CC3F0u; f_802B84F8(c); // 802CC3EC
  cmps(c,0,(int32_t)c->r[3],0); // 802CC3F0
  if (crb(c,2)) { goto L_802CC400; } // 802CC3F4
  c->r[0]=R32(c->r[3]+0x00000010u); // 802CC3F8
  goto L_802CC404; // 802CC3FC
L_802CC400:;
  c->r[0]=0u+0x00000000u; // 802CC400
L_802CC404:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CC404
  c->r[4]=c->r[27]|c->r[27]; // 802CC408
  c->r[5]=c->r[29]|c->r[29]; // 802CC40C
  c->r[3]=c->r[24]+c->r[0]; // 802CC410
  c->lr=0x802CC418u; f_803535F4(c); // 802CC414
L_802CC418:;
  c->r[30]=c->r[30]+0x00000004u; // 802CC418
  c->r[29]=c->r[29]+0x00000030u; // 802CC41C
  c->r[28]=c->r[28]+0x00000004u; // 802CC420
  c->r[27]=c->r[27]+0x00000030u; // 802CC424
  c->r[26]=c->r[26]+0x00000030u; // 802CC428
  c->r[25]=c->r[25]+0x00000030u; // 802CC42C
  c->r[23]=c->r[23]+0x00000001u; // 802CC430
L_802CC434:;
  cmpu(c,0,c->r[23],c->r[19]); // 802CC434
  if (crb(c,0)) { IRQCHK(c); goto L_802CC2DC; } // 802CC438
  cmps(c,0,(int32_t)c->r[16],0); // 802CC43C
  if (crb(c,2)) { goto L_802CC4EC; } // 802CC440
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CC444
  c->r[17]=c->r[15]|c->r[15]; // 802CC448
  c->r[20]=c->r[16]|c->r[16]; // 802CC44C
  c->r[21]=c->r[22]|c->r[22]; // 802CC450
  c->r[23]=c->r[22]|c->r[22]; // 802CC454
  c->r[24]=0u+0x00000000u; // 802CC458
  goto L_802CC4E4; // 802CC45C
L_802CC460:;
  c->r[0]=R32(c->r[18]+0x00000000u); // 802CC460
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 802CC464
  if (crb(c,2)) { goto L_802CC49C; } // 802CC468
  cmps(c,0,(int32_t)c->r[22],0); // 802CC46C
  if (crb(c,2)) { goto L_802CC48C; } // 802CC470
  c->r[3]=c->r[17]|c->r[17]; // 802CC474
  c->r[4]=c->r[21]|c->r[21]; // 802CC478
  c->lr=0x802CC480u; f_803535C0(c); // 802CC47C
  {uint32_t ea=c->r[21]+0x0000002Cu; WF32(ea,c->f[31]);} // 802CC480
  {uint32_t ea=c->r[21]+0x0000001Cu; WF32(ea,c->f[31]);} // 802CC484
  {uint32_t ea=c->r[21]+0x0000000Cu; WF32(ea,c->f[31]);} // 802CC488
L_802CC48C:;
  c->r[3]=c->r[20]|c->r[20]; // 802CC48C
  c->r[4]=c->r[17]|c->r[17]; // 802CC490
  c->lr=0x802CC498u; f_8026CC80(c); // 802CC494
  goto L_802CC4CC; // 802CC498
L_802CC49C:;
  cmps(c,0,(int32_t)c->r[22],0); // 802CC49C
  if (crb(c,2)) { goto L_802CC4C0; } // 802CC4A0
  c->r[3]=c->r[17]|c->r[17]; // 802CC4A4
  c->r[4]=c->r[21]|c->r[21]; // 802CC4A8
  c->lr=0x802CC4B0u; f_80353950(c); // 802CC4AC
  c->r[3]=c->r[20]|c->r[20]; // 802CC4B0
  c->r[4]=c->r[23]|c->r[23]; // 802CC4B4
  c->lr=0x802CC4BCu; f_8026CC80(c); // 802CC4B8
  goto L_802CC4CC; // 802CC4BC
L_802CC4C0:;
  c->r[3]=c->r[20]|c->r[20]; // 802CC4C0
  c->r[4]=c->r[17]|c->r[17]; // 802CC4C4
  c->lr=0x802CC4CCu; f_8026CCB4(c); // 802CC4C8
L_802CC4CC:;
  c->r[17]=c->r[17]+0x00000030u; // 802CC4CC
  c->r[20]=c->r[20]+0x00000024u; // 802CC4D0
  c->r[18]=c->r[18]+0x00000004u; // 802CC4D4
  c->r[21]=c->r[21]+0x00000030u; // 802CC4D8
  c->r[23]=c->r[23]+0x00000030u; // 802CC4DC
  c->r[24]=c->r[24]+0x00000001u; // 802CC4E0
L_802CC4E4:;
  cmpu(c,0,c->r[24],c->r[19]); // 802CC4E4
  if (crb(c,0)) { IRQCHK(c); goto L_802CC460; } // 802CC4E8
L_802CC4EC:;
  c->r[3]=c->r[15]|c->r[15]; // 802CC4EC
  c->r[4]=c->r[14]|c->r[14]; // 802CC4F0
  c->lr=0x802CC4F8u; f_80359C2C(c); // 802CC4F4
  cmps(c,0,(int32_t)c->r[16],0); // 802CC4F8
  if (crb(c,2)) { goto L_802CC520; } // 802CC4FC
  c->r[4]=R32(c->r[1]+0x00000040u); // 802CC500
  c->r[3]=c->r[16]|c->r[16]; // 802CC504
  c->lr=0x802CC50Cu; f_80359C2C(c); // 802CC508
  cmps(c,0,(int32_t)c->r[22],0); // 802CC50C
  if (crb(c,2)) { goto L_802CC520; } // 802CC510
  c->r[3]=c->r[22]|c->r[22]; // 802CC514
  c->r[4]=c->r[14]|c->r[14]; // 802CC518
  c->lr=0x802CC520u; f_80359C2C(c); // 802CC51C
L_802CC520:;
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 802CC520
  c->r[11]=c->r[1]+0x00000090u; // 802CC524
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 802CC528
  c->lr=0x802CC530u; f_802F0DE0(c); // 802CC52C
  c->r[0]=R32(c->r[1]+0x000000A4u); // 802CC530
  c->lr=c->r[0]; // 802CC534
  c->r[1]=c->r[1]+0x000000A0u; // 802CC538
  return; // 802CC53C
}

// CalcView_LC__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
void f_802CC540(Ctx* __restrict c) {
  trace_call(0x802CC540u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CC540
  c->r[0]=c->lr; // 802CC544
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802CC548
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 802CC54C
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 802CC550
  c->r[11]=c->r[1]+0x000000C0u; // 802CC554
  c->lr=0x802CC55Cu; f_802F0D94(c); // 802CC558
  cmps(c,0,(int32_t)c->r[7],0); // 802CC55C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CC560
  c->r[15]=c->r[5]|c->r[5]; // 802CC564
  c->r[16]=c->r[8]|c->r[8]; // 802CC568
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802CC56C
  c->r[17]=c->r[9]|c->r[9]; // 802CC570
  c->r[18]=c->r[10]|c->r[10]; // 802CC574
  W32(c->r[1]+0x00000010u,c->r[6]); // 802CC578
  W32(c->r[1]+0x00000014u,c->r[7]); // 802CC57C
  if (crb(c,2)) { goto L_802CC9BC; } // 802CC580
  c->r[5]=0u+0xE0000000u; // 802CC584
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 802CC588
  c->r[0]=c->r[5]+0x00001000u; // 802CC58C
  W32(c->r[1]+0x00000068u,c->r[0]); // 802CC590
  c->r[22]=c->r[5]+0x00000800u; // 802CC594
  c->r[0]=c->r[5]+0x00002800u; // 802CC598
  c->r[14]=c->r[5]+0x00001800u; // 802CC59C
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CC5A0
  c->r[0]=c->r[5]+0x00003000u; // 802CC5A4
  c->r[4]=c->r[4]+0x0000001Fu; // 802CC5A8
  W32(c->r[1]+0x00000060u,c->r[0]); // 802CC5AC
  c->r[0]=c->r[5]+0x00003800u; // 802CC5B0
  c->r[19]=rotl(c->r[4],0)&0xFFFFFFE0u; // 802CC5B4
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802CC5B8
  c->r[4]=c->r[19]|c->r[19]; // 802CC5BC
  c->lr=0x802CC5C4u; f_80359BA0(c); // 802CC5C0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CC5C4
  cmps(c,0,(int32_t)c->r[0],0); // 802CC5C8
  c->r[0]=0u+0x00000001u; // 802CC5CC
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CC5D0
  if (crb(c,2)) { goto L_802CC614; } // 802CC5D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CC5D8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802CC5DC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 802CC5E0
  c->r[0]=0u+0x00000002u; // 802CC5E4
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CC5E8
  c->r[0]=c->r[4]+0x0000001Fu; // 802CC5EC
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802CC5F0
  c->lr=0x802CC5F8u; f_80359BA0(c); // 802CC5F4
  cmps(c,0,(int32_t)c->r[18],0); // 802CC5F8
  if (crb(c,2)) { goto L_802CC614; } // 802CC5FC
  c->r[0]=0u+0x00000003u; // 802CC600
  c->r[3]=c->r[18]|c->r[18]; // 802CC604
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CC608
  c->r[4]=c->r[19]|c->r[19]; // 802CC60C
  c->lr=0x802CC614u; f_80359BA0(c); // 802CC610
L_802CC614:;
  c->lr=0x802CC618u; f_802CD048(c); // 802CC614
  c->r[29]=c->r[3]|c->r[3]; // 802CC618
  c->r[3]=0u+0x00000000u; // 802CC61C
  c->lr=0x802CC624u; f_80359F28(c); // 802CC620
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CC624
  c->r[30]=0u+0x80440000u; // 802CC628
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CC62C
  c->r[30]=c->r[30]+0xFFFFC598u; // 802CC630
  W32(c->r[1]+0x00000074u,c->r[15]); // 802CC634
  c->r[21]=0u+0x00000000u; // 802CC638
  c->r[31]=0u+0x00000000u; // 802CC63C
  W32(c->r[1]+0x00000070u,c->r[0]); // 802CC640
  W32(c->r[1]+0x0000006Cu,c->r[18]); // 802CC644
  goto L_802CC9B0; // 802CC648
L_802CC64C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CC64C
  c->r[20]=c->r[0]-c->r[21]; // 802CC650
  cmpu(c,0,c->r[20],0x00000028u); // 802CC654
  if (!crb(c,1)) { goto L_802CC674; } // 802CC658
  c->r[0]=0u+0x0000003Cu; // 802CC65C
  c->r[20]=0u+0x00000028u; // 802CC660
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CC664
  c->r[0]=0u+0x0000002Du; // 802CC668
  W32(c->r[1]+0x00000050u,c->r[0]); // 802CC66C
  goto L_802CC694; // 802CC670
L_802CC674:;
  c->r[4]=(uint32_t)((int32_t)c->r[20]*(int32_t)48); // 802CC674
  c->r[3]=(uint32_t)((int32_t)c->r[20]*(int32_t)36); // 802CC678
  c->r[0]=c->r[4]+0x0000001Fu; // 802CC67C
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CC680
  c->r[3]=c->r[3]+0x0000001Fu; // 802CC684
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CC688
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 802CC68C
  W32(c->r[1]+0x00000050u,c->r[0]); // 802CC690
L_802CC694:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 802CC694
  c->lr=0x802CC69Cu; f_80359F28(c); // 802CC698
  cmpu(c,0,c->r[20],0x00000001u); // 802CC69C
  if (!crb(c,1)) { goto L_802CC6BC; } // 802CC6A0
  c->r[4]=R32(c->r[1]+0x00000074u); // 802CC6A4
  c->r[3]=c->r[16]|c->r[16]; // 802CC6A8
  c->r[5]=c->r[22]|c->r[22]; // 802CC6AC
  c->r[6]=c->r[20]|c->r[20]; // 802CC6B0
  c->lr=0x802CC6B8u; f_803536C0(c); // 802CC6B4
  goto L_802CC6CC; // 802CC6B8
L_802CC6BC:;
  c->r[4]=R32(c->r[1]+0x00000074u); // 802CC6BC
  c->r[3]=c->r[16]|c->r[16]; // 802CC6C0
  c->r[5]=c->r[22]|c->r[22]; // 802CC6C4
  c->lr=0x802CC6CCu; f_803535F4(c); // 802CC6C8
L_802CC6CC:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 802CC6CC
  c->r[27]=c->r[22]|c->r[22]; // 802CC6D0
  c->r[25]=c->r[22]|c->r[22]; // 802CC6D4
  c->r[19]=0u+0x00000000u; // 802CC6D8
  c->r[23]=c->r[0]+c->r[31]; // 802CC6DC
  c->r[26]=0u+0x00000000u; // 802CC6E0
  c->r[28]=c->r[23]|c->r[23]; // 802CC6E4
  goto L_802CC854; // 802CC6E8
L_802CC6EC:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 802CC6EC
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 802CC6F0
  if (crb(c,2)) { goto L_802CC7C4; } // 802CC6F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CC6F8
  c->r[5]=R32(c->r[17]+0x00000000u); // 802CC6FC
  c->r[12]=R32(c->r[30]+c->r[0]); // 802CC700
  c->r[3]=c->r[27]|c->r[27]; // 802CC704
  W32(c->r[1]+0x00000018u,c->r[5]); // 802CC708
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 802CC70C
  c->r[4]=c->r[15]|c->r[15]; // 802CC710
  c->r[6]=c->r[16]|c->r[16]; // 802CC714
  c->r[7]=c->r[1]+0x00000018u; // 802CC718
  c->r[8]=c->r[21]+c->r[19]; // 802CC71C
  c->ctr=c->r[12]; // 802CC720
  if (true) { c->lr=0x802CC728u; dispatch(c,c->ctr); } // 802CC724
  c->r[4]=R32(c->r[17]+0x00000000u); // 802CC728
  c->r[3]=c->r[17]|c->r[17]; // 802CC72C
  c->r[4]=c->r[4]+0x00000048u; // 802CC730
  c->r[0]=R32(c->r[4]+0x00000024u); // 802CC734
  c->r[0]=c->r[4]+c->r[0]; // 802CC738
  c->r[0]=c->r[0]+c->r[31]; // 802CC73C
  c->r[4]=c->r[0]+c->r[26]; // 802CC740
  c->r[4]=R32(c->r[4]+0x00000004u); // 802CC744
  c->lr=0x802CC74Cu; f_802B84F8(c); // 802CC748
  c->r[0]=0u-c->r[3]; // 802CC74C
  c->r[0]=c->r[0]|c->r[3]; // 802CC750
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802CC754
  if (crb(c,2)) { goto L_802CC780; } // 802CC758
  c->r[0]=R32(c->r[3]+0x00000060u); // 802CC75C
  cmps(c,0,(int32_t)c->r[0],0); // 802CC760
  if (crb(c,2)) { goto L_802CC770; } // 802CC764
  c->r[0]=c->r[3]+c->r[0]; // 802CC768
  goto L_802CC774; // 802CC76C
L_802CC770:;
  c->r[0]=0u+0x00000000u; // 802CC770
L_802CC774:;
  c->r[3]=0u-c->r[0]; // 802CC774
  c->r[0]=c->r[3]|c->r[0]; // 802CC778
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802CC77C
L_802CC780:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CC780
  if (crb(c,2)) { goto L_802CC840; } // 802CC784
  c->r[0]=c->r[21]+c->r[19]; // 802CC788
  c->r[4]=c->r[1]+0x00000020u; // 802CC78C
  c->r[24]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CC790
  c->r[3]=c->r[15]+c->r[24]; // 802CC794
  c->lr=0x802CC79Cu; f_80353858(c); // 802CC798
  cmpu(c,0,c->r[3],0x00000001u); // 802CC79C
  if (!crb(c,2)) { goto L_802CC7B8; } // 802CC7A0
  c->r[3]=c->r[25]|c->r[25]; // 802CC7A4
  c->r[4]=c->r[1]+0x00000020u; // 802CC7A8
  c->r[5]=c->r[29]+c->r[24]; // 802CC7AC
  c->lr=0x802CC7B4u; f_803535F4(c); // 802CC7B0
  goto L_802CC840; // 802CC7B4
L_802CC7B8:;
  c->r[3]=c->r[29]+c->r[24]; // 802CC7B8
  c->lr=0x802CC7C0u; f_80353594(c); // 802CC7BC
  goto L_802CC840; // 802CC7C0
L_802CC7C4:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 802CC7C4
  c->r[3]=c->r[3]+0x00000048u; // 802CC7C8
  c->r[0]=R32(c->r[3]+0x00000024u); // 802CC7CC
  c->r[0]=c->r[3]+c->r[0]; // 802CC7D0
  c->r[0]=c->r[0]+c->r[31]; // 802CC7D4
  c->r[3]=c->r[0]+c->r[26]; // 802CC7D8
  c->r[4]=R32(c->r[3]+0x00000004u); // 802CC7DC
  cmps(c,0,(int32_t)c->r[4],0); // 802CC7E0
  if (crb(c,0)) { goto L_802CC840; } // 802CC7E4
  c->r[3]=c->r[17]|c->r[17]; // 802CC7E8
  c->lr=0x802CC7F0u; f_802B84F8(c); // 802CC7EC
  cmps(c,0,(int32_t)c->r[3],0); // 802CC7F0
  if (crb(c,2)) { goto L_802CC840; } // 802CC7F4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802CC7F8
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802CC7FC
  if (crb(c,2)) { goto L_802CC840; } // 802CC800
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 802CC804
  c->r[3]=c->r[17]|c->r[17]; // 802CC808
  c->lr=0x802CC810u; f_802B84F8(c); // 802CC80C
  cmps(c,0,(int32_t)c->r[3],0); // 802CC810
  if (crb(c,2)) { goto L_802CC820; } // 802CC814
  c->r[3]=R32(c->r[3]+0x00000010u); // 802CC818
  goto L_802CC824; // 802CC81C
L_802CC820:;
  c->r[3]=0u+0x00000000u; // 802CC820
L_802CC824:;
  c->r[0]=c->r[21]+c->r[19]; // 802CC824
  c->r[5]=c->r[27]|c->r[27]; // 802CC828
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802CC82C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CC830
  c->r[3]=c->r[29]+c->r[3]; // 802CC834
  c->r[4]=c->r[15]+c->r[0]; // 802CC838
  c->lr=0x802CC840u; f_803535F4(c); // 802CC83C
L_802CC840:;
  c->r[28]=c->r[28]+0x00000004u; // 802CC840
  c->r[27]=c->r[27]+0x00000030u; // 802CC844
  c->r[26]=c->r[26]+0x00000004u; // 802CC848
  c->r[25]=c->r[25]+0x00000030u; // 802CC84C
  c->r[19]=c->r[19]+0x00000001u; // 802CC850
L_802CC854:;
  cmpu(c,0,c->r[19],c->r[20]); // 802CC854
  if (crb(c,0)) { IRQCHK(c); goto L_802CC6EC; } // 802CC858
  c->r[3]=R32(c->r[1]+0x00000008u); // 802CC85C
  c->r[4]=c->r[22]|c->r[22]; // 802CC860
  c->r[5]=R32(c->r[1]+0x00000054u); // 802CC864
  c->lr=0x802CC86Cu; f_8028E1DC(c); // 802CC868
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CC86C
  cmps(c,0,(int32_t)c->r[0],0); // 802CC870
  if (crb(c,2)) { goto L_802CC91C; } // 802CC874
  c->r[24]=R32(c->r[1]+0x00000068u); // 802CC878
  c->r[19]=c->r[22]|c->r[22]; // 802CC87C
  c->r[25]=c->r[14]|c->r[14]; // 802CC880
  c->r[26]=c->r[14]|c->r[14]; // 802CC884
  c->r[27]=0u+0x00000000u; // 802CC888
  goto L_802CC914; // 802CC88C
L_802CC890:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 802CC890
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 802CC894
  if (crb(c,2)) { goto L_802CC8CC; } // 802CC898
  cmps(c,0,(int32_t)c->r[18],0); // 802CC89C
  if (crb(c,2)) { goto L_802CC8BC; } // 802CC8A0
  c->r[3]=c->r[19]|c->r[19]; // 802CC8A4
  c->r[4]=c->r[25]|c->r[25]; // 802CC8A8
  c->lr=0x802CC8B0u; f_803535C0(c); // 802CC8AC
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[31]);} // 802CC8B0
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[31]);} // 802CC8B4
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[31]);} // 802CC8B8
L_802CC8BC:;
  c->r[3]=c->r[24]|c->r[24]; // 802CC8BC
  c->r[4]=c->r[19]|c->r[19]; // 802CC8C0
  c->lr=0x802CC8C8u; f_8026CC80(c); // 802CC8C4
  goto L_802CC8FC; // 802CC8C8
L_802CC8CC:;
  cmps(c,0,(int32_t)c->r[18],0); // 802CC8CC
  if (crb(c,2)) { goto L_802CC8F0; } // 802CC8D0
  c->r[3]=c->r[19]|c->r[19]; // 802CC8D4
  c->r[4]=c->r[25]|c->r[25]; // 802CC8D8
  c->lr=0x802CC8E0u; f_80353950(c); // 802CC8DC
  c->r[3]=c->r[24]|c->r[24]; // 802CC8E0
  c->r[4]=c->r[26]|c->r[26]; // 802CC8E4
  c->lr=0x802CC8ECu; f_8026CC80(c); // 802CC8E8
  goto L_802CC8FC; // 802CC8EC
L_802CC8F0:;
  c->r[3]=c->r[24]|c->r[24]; // 802CC8F0
  c->r[4]=c->r[19]|c->r[19]; // 802CC8F4
  c->lr=0x802CC8FCu; f_8026CCB4(c); // 802CC8F8
L_802CC8FC:;
  c->r[19]=c->r[19]+0x00000030u; // 802CC8FC
  c->r[24]=c->r[24]+0x00000024u; // 802CC900
  c->r[23]=c->r[23]+0x00000004u; // 802CC904
  c->r[25]=c->r[25]+0x00000030u; // 802CC908
  c->r[26]=c->r[26]+0x00000030u; // 802CC90C
  c->r[27]=c->r[27]+0x00000001u; // 802CC910
L_802CC914:;
  cmpu(c,0,c->r[27],c->r[20]); // 802CC914
  if (crb(c,0)) { IRQCHK(c); goto L_802CC890; } // 802CC918
L_802CC91C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CC91C
  cmps(c,0,(int32_t)c->r[0],0); // 802CC920
  if (crb(c,2)) { goto L_802CC950; } // 802CC924
  c->r[3]=R32(c->r[1]+0x00000070u); // 802CC928
  c->r[4]=R32(c->r[1]+0x00000068u); // 802CC92C
  c->r[5]=R32(c->r[1]+0x00000050u); // 802CC930
  c->lr=0x802CC938u; f_8028E1DC(c); // 802CC934
  cmps(c,0,(int32_t)c->r[18],0); // 802CC938
  if (crb(c,2)) { goto L_802CC950; } // 802CC93C
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 802CC940
  c->r[4]=c->r[14]|c->r[14]; // 802CC944
  c->r[5]=R32(c->r[1]+0x00000054u); // 802CC948
  c->lr=0x802CC950u; f_8028E1DC(c); // 802CC94C
L_802CC950:;
  c->r[3]=c->r[22]|c->r[22]; // 802CC950
  c->r[22]=R32(c->r[1]+0x00000064u); // 802CC954
  c->r[5]=c->r[14]|c->r[14]; // 802CC958
  c->r[14]=R32(c->r[1]+0x0000005Cu); // 802CC95C
  W32(c->r[1]+0x00000064u,c->r[3]); // 802CC960
  c->r[21]=c->r[21]+0x00000028u; // 802CC964
  c->r[3]=R32(c->r[1]+0x00000074u); // 802CC968
  c->r[31]=c->r[31]+0x000000A0u; // 802CC96C
  c->r[4]=R32(c->r[1]+0x00000068u); // 802CC970
  c->r[3]=c->r[3]+0x00000780u; // 802CC974
  c->r[0]=R32(c->r[1]+0x00000060u); // 802CC978
  W32(c->r[1]+0x00000074u,c->r[3]); // 802CC97C
  c->r[3]=R32(c->r[1]+0x00000008u); // 802CC980
  W32(c->r[1]+0x00000068u,c->r[0]); // 802CC984
  c->r[3]=c->r[3]+0x00000780u; // 802CC988
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CC98C
  c->r[3]=R32(c->r[1]+0x00000070u); // 802CC990
  W32(c->r[1]+0x00000060u,c->r[4]); // 802CC994
  c->r[3]=c->r[3]+0x000005A0u; // 802CC998
  W32(c->r[1]+0x00000070u,c->r[3]); // 802CC99C
  c->r[3]=R32(c->r[1]+0x0000006Cu); // 802CC9A0
  W32(c->r[1]+0x0000005Cu,c->r[5]); // 802CC9A4
  c->r[3]=c->r[3]+0x00000780u; // 802CC9A8
  W32(c->r[1]+0x0000006Cu,c->r[3]); // 802CC9AC
L_802CC9B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CC9B0
  cmpu(c,0,c->r[21],c->r[0]); // 802CC9B4
  if (crb(c,0)) { IRQCHK(c); goto L_802CC64C; } // 802CC9B8
L_802CC9BC:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 802CC9BC
  c->r[11]=c->r[1]+0x000000C0u; // 802CC9C0
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 802CC9C4
  c->lr=0x802CC9CCu; f_802F0DE0(c); // 802CC9C8
  c->r[0]=R32(c->r[1]+0x000000D4u); // 802CC9CC
  c->lr=c->r[0]; // 802CC9D0
  c->r[1]=c->r[1]+0x000000D0u; // 802CC9D4
  return; // 802CC9D8
}

// CalcView_LC_DMA_ModelMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34PQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUlUlPCQ34nw4r4math5MTX34Q34nw4r3g3d6ResMdlPQ34nw4r4math5MTX34
void f_802CC9DC(Ctx* __restrict c) {
  trace_call(0x802CC9DCu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CC9DC
  c->r[0]=c->lr; // 802CC9E0
  W32(c->r[1]+0x000000E4u,c->r[0]); // 802CC9E4
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[31]);} // 802CC9E8
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,31,ea,0,0);} // 802CC9EC
  c->r[11]=c->r[1]+0x000000D0u; // 802CC9F0
  c->lr=0x802CC9F8u; f_802F0D94(c); // 802CC9F4
  cmps(c,0,(int32_t)c->r[7],0); // 802CC9F8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CC9FC
  c->r[15]=c->r[5]|c->r[5]; // 802CCA00
  c->r[16]=c->r[8]|c->r[8]; // 802CCA04
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802CCA08
  c->r[17]=c->r[9]|c->r[9]; // 802CCA0C
  c->r[18]=c->r[10]|c->r[10]; // 802CCA10
  W32(c->r[1]+0x00000010u,c->r[6]); // 802CCA14
  W32(c->r[1]+0x00000014u,c->r[7]); // 802CCA18
  if (crb(c,2)) { goto L_802CCF18; } // 802CCA1C
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)48); // 802CCA20
  c->r[0]=0u+0xE0000000u; // 802CCA24
  W32(c->r[1]+0x00000070u,c->r[0]); // 802CCA28
  c->r[4]=c->r[0]|c->r[0]; // 802CCA2C
  c->r[5]=c->r[5]+0x0000001Fu; // 802CCA30
  c->r[19]=rotl(c->r[5],0)&0xFFFFFFE0u; // 802CCA34
  c->r[5]=R32(c->r[1]+0x00000070u); // 802CCA38
  c->r[0]=c->r[4]+0x00001000u; // 802CCA3C
  c->r[22]=c->r[4]+0x00000800u; // 802CCA40
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802CCA44
  c->r[0]=c->r[5]+0x00002000u; // 802CCA48
  c->r[4]=R32(c->r[1]+0x00000070u); // 802CCA4C
  W32(c->r[1]+0x00000068u,c->r[0]); // 802CCA50
  c->r[0]=c->r[5]+0x00002800u; // 802CCA54
  c->r[14]=c->r[4]+0x00001800u; // 802CCA58
  c->r[4]=c->r[19]|c->r[19]; // 802CCA5C
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CCA60
  c->r[0]=c->r[5]+0x00003000u; // 802CCA64
  W32(c->r[1]+0x00000060u,c->r[0]); // 802CCA68
  c->r[0]=c->r[5]+0x00003800u; // 802CCA6C
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802CCA70
  c->lr=0x802CCA78u; f_80359BA0(c); // 802CCA74
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CCA78
  cmps(c,0,(int32_t)c->r[0],0); // 802CCA7C
  c->r[0]=0u+0x00000001u; // 802CCA80
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CCA84
  if (crb(c,2)) { goto L_802CCAC8; } // 802CCA88
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCA8C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802CCA90
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 802CCA94
  c->r[0]=0u+0x00000002u; // 802CCA98
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CCA9C
  c->r[0]=c->r[4]+0x0000001Fu; // 802CCAA0
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 802CCAA4
  c->lr=0x802CCAACu; f_80359BA0(c); // 802CCAA8
  cmps(c,0,(int32_t)c->r[18],0); // 802CCAAC
  if (crb(c,2)) { goto L_802CCAC8; } // 802CCAB0
  c->r[0]=0u+0x00000003u; // 802CCAB4
  c->r[3]=c->r[18]|c->r[18]; // 802CCAB8
  W32(c->r[1]+0x00000058u,c->r[0]); // 802CCABC
  c->r[4]=c->r[19]|c->r[19]; // 802CCAC0
  c->lr=0x802CCAC8u; f_80359BA0(c); // 802CCAC4
L_802CCAC8:;
  c->lr=0x802CCACCu; f_802CD048(c); // 802CCAC8
  c->r[29]=c->r[3]|c->r[3]; // 802CCACC
  c->r[3]=0u+0x00000000u; // 802CCAD0
  c->lr=0x802CCAD8u; f_80359F28(c); // 802CCAD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCAD8
  c->r[4]=c->r[15]|c->r[15]; // 802CCADC
  c->r[3]=0u+0xE0000000u; // 802CCAE0
  c->r[5]=0u+0x0000003Cu; // 802CCAE4
  cmpu(c,0,c->r[0],0x00000028u); // 802CCAE8
  if (crb(c,1)) { goto L_802CCAF4; } // 802CCAEC
  c->r[5]=rotl(c->r[19],27)&0x07FFFFFFu; // 802CCAF0
L_802CCAF4:;
  c->lr=0x802CCAF8u; f_8028E1D8(c); // 802CCAF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCAF8
  cmpu(c,0,c->r[0],0x00000014u); // 802CCAFC
  if (!crb(c,1)) { goto L_802CCB1C; } // 802CCB00
  goto L_802CCB0C; // 802CCB04
L_802CCB08:;
  c->lr=0x802CCB0Cu; f_80360D78(c); // 802CCB08
L_802CCB0C:;
  c->lr=0x802CCB10u; f_80359F1C(c); // 802CCB0C
  cmps(c,0,(int32_t)c->r[3],0); // 802CCB10
  if (!crb(c,2)) { IRQCHK(c); goto L_802CCB08; } // 802CCB14
  goto L_802CCB24; // 802CCB18
L_802CCB1C:;
  c->r[3]=0u+0x00000000u; // 802CCB1C
  c->lr=0x802CCB24u; f_80359F28(c); // 802CCB20
L_802CCB24:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CCB24
  c->r[30]=0u+0x80440000u; // 802CCB28
  {uint32_t ea=c->r[2]+0xFFFFAC78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CCB2C
  c->r[30]=c->r[30]+0xFFFFC598u; // 802CCB30
  W32(c->r[1]+0x00000078u,c->r[0]); // 802CCB34
  c->r[0]=0u+0x00000000u; // 802CCB38
  c->r[21]=0u+0x00000000u; // 802CCB3C
  c->r[31]=0u+0x00000000u; // 802CCB40
  W32(c->r[1]+0x00000074u,c->r[18]); // 802CCB44
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802CCB48
  goto L_802CCF0C; // 802CCB4C
L_802CCB50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCB50
  c->r[19]=c->r[0]-c->r[21]; // 802CCB54
  cmpu(c,0,c->r[19],0x00000028u); // 802CCB58
  c->r[20]=c->r[19]|c->r[19]; // 802CCB5C
  if (!crb(c,1)) { goto L_802CCB7C; } // 802CCB60
  c->r[0]=0u+0x0000003Cu; // 802CCB64
  c->r[20]=0u+0x00000028u; // 802CCB68
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CCB6C
  c->r[0]=0u+0x0000002Du; // 802CCB70
  W32(c->r[1]+0x00000050u,c->r[0]); // 802CCB74
  goto L_802CCB9C; // 802CCB78
L_802CCB7C:;
  c->r[4]=(uint32_t)((int32_t)c->r[19]*(int32_t)48); // 802CCB7C
  c->r[3]=(uint32_t)((int32_t)c->r[19]*(int32_t)36); // 802CCB80
  c->r[0]=c->r[4]+0x0000001Fu; // 802CCB84
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CCB88
  c->r[3]=c->r[3]+0x0000001Fu; // 802CCB8C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CCB90
  c->r[0]=rotl(c->r[3],27)&0x07FFFFFFu; // 802CCB94
  W32(c->r[1]+0x00000050u,c->r[0]); // 802CCB98
L_802CCB9C:;
  c->r[3]=R32(c->r[1]+0x00000058u); // 802CCB9C
  c->lr=0x802CCBA4u; f_80359F28(c); // 802CCBA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCBA4
  c->r[3]=c->r[21]+0x00000028u; // 802CCBA8
  cmpu(c,0,c->r[3],c->r[0]); // 802CCBAC
  if (!crb(c,0)) { goto L_802CCBE8; } // 802CCBB0
  c->r[5]=c->r[19]+0xFFFFFFD8u; // 802CCBB4
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 802CCBB8
  cmpu(c,0,c->r[5],0x00000028u); // 802CCBBC
  c->r[3]=R32(c->r[1]+0x00000068u); // 802CCBC0
  c->r[4]=c->r[0]+c->r[15]; // 802CCBC4
  c->r[4]=c->r[4]+0x00000780u; // 802CCBC8
  if (!crb(c,1)) { goto L_802CCBD8; } // 802CCBCC
  c->r[5]=0u+0x0000003Cu; // 802CCBD0
  goto L_802CCBE4; // 802CCBD4
L_802CCBD8:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)48); // 802CCBD8
  c->r[0]=c->r[5]+0x0000001Fu; // 802CCBDC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CCBE0
L_802CCBE4:;
  c->lr=0x802CCBE8u; f_8028E1D8(c); // 802CCBE4
L_802CCBE8:;
  cmpu(c,0,c->r[20],0x00000001u); // 802CCBE8
  if (!crb(c,1)) { goto L_802CCC08; } // 802CCBEC
  c->r[4]=R32(c->r[1]+0x00000070u); // 802CCBF0
  c->r[3]=c->r[16]|c->r[16]; // 802CCBF4
  c->r[5]=c->r[22]|c->r[22]; // 802CCBF8
  c->r[6]=c->r[20]|c->r[20]; // 802CCBFC
  c->lr=0x802CCC04u; f_803536C0(c); // 802CCC00
  goto L_802CCC18; // 802CCC04
L_802CCC08:;
  c->r[4]=R32(c->r[1]+0x00000070u); // 802CCC08
  c->r[3]=c->r[16]|c->r[16]; // 802CCC0C
  c->r[5]=c->r[22]|c->r[22]; // 802CCC10
  c->lr=0x802CCC18u; f_803535F4(c); // 802CCC14
L_802CCC18:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 802CCC18
  c->r[27]=c->r[22]|c->r[22]; // 802CCC1C
  c->r[25]=c->r[22]|c->r[22]; // 802CCC20
  c->r[19]=0u+0x00000000u; // 802CCC24
  c->r[23]=c->r[0]+c->r[31]; // 802CCC28
  c->r[26]=0u+0x00000000u; // 802CCC2C
  c->r[28]=c->r[23]|c->r[23]; // 802CCC30
  goto L_802CCDA0; // 802CCC34
L_802CCC38:;
  c->r[8]=R32(c->r[28]+0x00000000u); // 802CCC38
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; cr0(c,c->r[0]); // 802CCC3C
  if (crb(c,2)) { goto L_802CCD10; } // 802CCC40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CCC44
  c->r[5]=R32(c->r[17]+0x00000000u); // 802CCC48
  c->r[12]=R32(c->r[30]+c->r[0]); // 802CCC4C
  c->r[3]=c->r[27]|c->r[27]; // 802CCC50
  W32(c->r[1]+0x00000018u,c->r[5]); // 802CCC54
  c->r[5]=rotl(c->r[8],3)&0x00000001u; // 802CCC58
  c->r[4]=c->r[15]|c->r[15]; // 802CCC5C
  c->r[6]=c->r[16]|c->r[16]; // 802CCC60
  c->r[7]=c->r[1]+0x00000018u; // 802CCC64
  c->r[8]=c->r[21]+c->r[19]; // 802CCC68
  c->ctr=c->r[12]; // 802CCC6C
  if (true) { c->lr=0x802CCC74u; dispatch(c,c->ctr); } // 802CCC70
  c->r[4]=R32(c->r[17]+0x00000000u); // 802CCC74
  c->r[3]=c->r[17]|c->r[17]; // 802CCC78
  c->r[4]=c->r[4]+0x00000048u; // 802CCC7C
  c->r[0]=R32(c->r[4]+0x00000024u); // 802CCC80
  c->r[0]=c->r[4]+c->r[0]; // 802CCC84
  c->r[0]=c->r[0]+c->r[31]; // 802CCC88
  c->r[4]=c->r[0]+c->r[26]; // 802CCC8C
  c->r[4]=R32(c->r[4]+0x00000004u); // 802CCC90
  c->lr=0x802CCC98u; f_802B84F8(c); // 802CCC94
  c->r[0]=0u-c->r[3]; // 802CCC98
  c->r[0]=c->r[0]|c->r[3]; // 802CCC9C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802CCCA0
  if (crb(c,2)) { goto L_802CCCCC; } // 802CCCA4
  c->r[0]=R32(c->r[3]+0x00000060u); // 802CCCA8
  cmps(c,0,(int32_t)c->r[0],0); // 802CCCAC
  if (crb(c,2)) { goto L_802CCCBC; } // 802CCCB0
  c->r[0]=c->r[3]+c->r[0]; // 802CCCB4
  goto L_802CCCC0; // 802CCCB8
L_802CCCBC:;
  c->r[0]=0u+0x00000000u; // 802CCCBC
L_802CCCC0:;
  c->r[3]=0u-c->r[0]; // 802CCCC0
  c->r[0]=c->r[3]|c->r[0]; // 802CCCC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802CCCC8
L_802CCCCC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CCCCC
  if (crb(c,2)) { goto L_802CCD8C; } // 802CCCD0
  c->r[0]=c->r[21]+c->r[19]; // 802CCCD4
  c->r[4]=c->r[1]+0x00000020u; // 802CCCD8
  c->r[24]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CCCDC
  c->r[3]=c->r[15]+c->r[24]; // 802CCCE0
  c->lr=0x802CCCE8u; f_80353858(c); // 802CCCE4
  cmpu(c,0,c->r[3],0x00000001u); // 802CCCE8
  if (!crb(c,2)) { goto L_802CCD04; } // 802CCCEC
  c->r[3]=c->r[25]|c->r[25]; // 802CCCF0
  c->r[4]=c->r[1]+0x00000020u; // 802CCCF4
  c->r[5]=c->r[29]+c->r[24]; // 802CCCF8
  c->lr=0x802CCD00u; f_803535F4(c); // 802CCCFC
  goto L_802CCD8C; // 802CCD00
L_802CCD04:;
  c->r[3]=c->r[29]+c->r[24]; // 802CCD04
  c->lr=0x802CCD0Cu; f_80353594(c); // 802CCD08
  goto L_802CCD8C; // 802CCD0C
L_802CCD10:;
  c->r[3]=R32(c->r[17]+0x00000000u); // 802CCD10
  c->r[3]=c->r[3]+0x00000048u; // 802CCD14
  c->r[0]=R32(c->r[3]+0x00000024u); // 802CCD18
  c->r[0]=c->r[3]+c->r[0]; // 802CCD1C
  c->r[0]=c->r[0]+c->r[31]; // 802CCD20
  c->r[3]=c->r[0]+c->r[26]; // 802CCD24
  c->r[4]=R32(c->r[3]+0x00000004u); // 802CCD28
  cmps(c,0,(int32_t)c->r[4],0); // 802CCD2C
  if (crb(c,0)) { goto L_802CCD8C; } // 802CCD30
  c->r[3]=c->r[17]|c->r[17]; // 802CCD34
  c->lr=0x802CCD3Cu; f_802B84F8(c); // 802CCD38
  cmps(c,0,(int32_t)c->r[3],0); // 802CCD3C
  if (crb(c,2)) { goto L_802CCD8C; } // 802CCD40
  c->r[0]=R32(c->r[3]+0x00000014u); // 802CCD44
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802CCD48
  if (crb(c,2)) { goto L_802CCD8C; } // 802CCD4C
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 802CCD50
  c->r[3]=c->r[17]|c->r[17]; // 802CCD54
  c->lr=0x802CCD5Cu; f_802B84F8(c); // 802CCD58
  cmps(c,0,(int32_t)c->r[3],0); // 802CCD5C
  if (crb(c,2)) { goto L_802CCD6C; } // 802CCD60
  c->r[3]=R32(c->r[3]+0x00000010u); // 802CCD64
  goto L_802CCD70; // 802CCD68
L_802CCD6C:;
  c->r[3]=0u+0x00000000u; // 802CCD6C
L_802CCD70:;
  c->r[0]=c->r[21]+c->r[19]; // 802CCD70
  c->r[5]=c->r[27]|c->r[27]; // 802CCD74
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)48); // 802CCD78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CCD7C
  c->r[3]=c->r[29]+c->r[3]; // 802CCD80
  c->r[4]=c->r[15]+c->r[0]; // 802CCD84
  c->lr=0x802CCD8Cu; f_803535F4(c); // 802CCD88
L_802CCD8C:;
  c->r[28]=c->r[28]+0x00000004u; // 802CCD8C
  c->r[27]=c->r[27]+0x00000030u; // 802CCD90
  c->r[26]=c->r[26]+0x00000004u; // 802CCD94
  c->r[25]=c->r[25]+0x00000030u; // 802CCD98
  c->r[19]=c->r[19]+0x00000001u; // 802CCD9C
L_802CCDA0:;
  cmpu(c,0,c->r[19],c->r[20]); // 802CCDA0
  if (crb(c,0)) { IRQCHK(c); goto L_802CCC38; } // 802CCDA4
  c->r[3]=R32(c->r[1]+0x00000008u); // 802CCDA8
  c->r[4]=c->r[22]|c->r[22]; // 802CCDAC
  c->r[5]=R32(c->r[1]+0x00000054u); // 802CCDB0
  c->lr=0x802CCDB8u; f_8028E1DC(c); // 802CCDB4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CCDB8
  cmps(c,0,(int32_t)c->r[0],0); // 802CCDBC
  if (crb(c,2)) { goto L_802CCE68; } // 802CCDC0
  c->r[24]=R32(c->r[1]+0x0000006Cu); // 802CCDC4
  c->r[19]=c->r[22]|c->r[22]; // 802CCDC8
  c->r[25]=c->r[14]|c->r[14]; // 802CCDCC
  c->r[26]=c->r[14]|c->r[14]; // 802CCDD0
  c->r[27]=0u+0x00000000u; // 802CCDD4
  goto L_802CCE60; // 802CCDD8
L_802CCDDC:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 802CCDDC
  c->r[0]=rotl(c->r[0],0)&0x20000000u; cr0(c,c->r[0]); // 802CCDE0
  if (crb(c,2)) { goto L_802CCE18; } // 802CCDE4
  cmps(c,0,(int32_t)c->r[18],0); // 802CCDE8
  if (crb(c,2)) { goto L_802CCE08; } // 802CCDEC
  c->r[3]=c->r[19]|c->r[19]; // 802CCDF0
  c->r[4]=c->r[25]|c->r[25]; // 802CCDF4
  c->lr=0x802CCDFCu; f_803535C0(c); // 802CCDF8
  {uint32_t ea=c->r[25]+0x0000002Cu; WF32(ea,c->f[31]);} // 802CCDFC
  {uint32_t ea=c->r[25]+0x0000001Cu; WF32(ea,c->f[31]);} // 802CCE00
  {uint32_t ea=c->r[25]+0x0000000Cu; WF32(ea,c->f[31]);} // 802CCE04
L_802CCE08:;
  c->r[3]=c->r[24]|c->r[24]; // 802CCE08
  c->r[4]=c->r[19]|c->r[19]; // 802CCE0C
  c->lr=0x802CCE14u; f_8026CC80(c); // 802CCE10
  goto L_802CCE48; // 802CCE14
L_802CCE18:;
  cmps(c,0,(int32_t)c->r[18],0); // 802CCE18
  if (crb(c,2)) { goto L_802CCE3C; } // 802CCE1C
  c->r[3]=c->r[19]|c->r[19]; // 802CCE20
  c->r[4]=c->r[25]|c->r[25]; // 802CCE24
  c->lr=0x802CCE2Cu; f_80353950(c); // 802CCE28
  c->r[3]=c->r[24]|c->r[24]; // 802CCE2C
  c->r[4]=c->r[26]|c->r[26]; // 802CCE30
  c->lr=0x802CCE38u; f_8026CC80(c); // 802CCE34
  goto L_802CCE48; // 802CCE38
L_802CCE3C:;
  c->r[3]=c->r[24]|c->r[24]; // 802CCE3C
  c->r[4]=c->r[19]|c->r[19]; // 802CCE40
  c->lr=0x802CCE48u; f_8026CCB4(c); // 802CCE44
L_802CCE48:;
  c->r[19]=c->r[19]+0x00000030u; // 802CCE48
  c->r[24]=c->r[24]+0x00000024u; // 802CCE4C
  c->r[23]=c->r[23]+0x00000004u; // 802CCE50
  c->r[25]=c->r[25]+0x00000030u; // 802CCE54
  c->r[26]=c->r[26]+0x00000030u; // 802CCE58
  c->r[27]=c->r[27]+0x00000001u; // 802CCE5C
L_802CCE60:;
  cmpu(c,0,c->r[27],c->r[20]); // 802CCE60
  if (crb(c,0)) { IRQCHK(c); goto L_802CCDDC; } // 802CCE64
L_802CCE68:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 802CCE68
  cmps(c,0,(int32_t)c->r[0],0); // 802CCE6C
  if (crb(c,2)) { goto L_802CCE9C; } // 802CCE70
  c->r[3]=R32(c->r[1]+0x00000078u); // 802CCE74
  c->r[4]=R32(c->r[1]+0x0000006Cu); // 802CCE78
  c->r[5]=R32(c->r[1]+0x00000050u); // 802CCE7C
  c->lr=0x802CCE84u; f_8028E1DC(c); // 802CCE80
  cmps(c,0,(int32_t)c->r[18],0); // 802CCE84
  if (crb(c,2)) { goto L_802CCE9C; } // 802CCE88
  c->r[3]=R32(c->r[1]+0x00000074u); // 802CCE8C
  c->r[4]=c->r[14]|c->r[14]; // 802CCE90
  c->r[5]=R32(c->r[1]+0x00000054u); // 802CCE94
  c->lr=0x802CCE9Cu; f_8028E1DC(c); // 802CCE98
L_802CCE9C:;
  c->r[3]=R32(c->r[1]+0x00000070u); // 802CCE9C
  c->r[4]=c->r[22]|c->r[22]; // 802CCEA0
  c->r[0]=R32(c->r[1]+0x00000068u); // 802CCEA4
  c->r[6]=c->r[14]|c->r[14]; // 802CCEA8
  c->r[22]=R32(c->r[1]+0x00000064u); // 802CCEAC
  c->r[21]=c->r[21]+0x00000028u; // 802CCEB0
  W32(c->r[1]+0x00000068u,c->r[3]); // 802CCEB4
  c->r[31]=c->r[31]+0x000000A0u; // 802CCEB8
  c->r[3]=R32(c->r[1]+0x0000007Cu); // 802CCEBC
  W32(c->r[1]+0x00000070u,c->r[0]); // 802CCEC0
  c->r[3]=c->r[3]+0x00000780u; // 802CCEC4
  c->r[14]=R32(c->r[1]+0x0000005Cu); // 802CCEC8
  W32(c->r[1]+0x0000007Cu,c->r[3]); // 802CCECC
  c->r[3]=R32(c->r[1]+0x00000008u); // 802CCED0
  c->r[5]=R32(c->r[1]+0x0000006Cu); // 802CCED4
  c->r[3]=c->r[3]+0x00000780u; // 802CCED8
  c->r[0]=R32(c->r[1]+0x00000060u); // 802CCEDC
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CCEE0
  c->r[3]=R32(c->r[1]+0x00000078u); // 802CCEE4
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802CCEE8
  c->r[3]=c->r[3]+0x000005A0u; // 802CCEEC
  W32(c->r[1]+0x00000078u,c->r[3]); // 802CCEF0
  c->r[3]=R32(c->r[1]+0x00000074u); // 802CCEF4
  W32(c->r[1]+0x00000064u,c->r[4]); // 802CCEF8
  c->r[3]=c->r[3]+0x00000780u; // 802CCEFC
  W32(c->r[1]+0x00000060u,c->r[5]); // 802CCF00
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 802CCF04
  W32(c->r[1]+0x00000074u,c->r[3]); // 802CCF08
L_802CCF0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCF0C
  cmpu(c,0,c->r[21],c->r[0]); // 802CCF10
  if (crb(c,0)) { IRQCHK(c); goto L_802CCB50; } // 802CCF14
L_802CCF18:;
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,31,ea,0,0);} // 802CCF18
  c->r[11]=c->r[1]+0x000000D0u; // 802CCF1C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[31]=RF64(ea);} // 802CCF20
  c->lr=0x802CCF28u; f_802F0DE0(c); // 802CCF24
  c->r[0]=R32(c->r[1]+0x000000E4u); // 802CCF28
  c->lr=c->r[0]; // 802CCF2C
  c->r[1]=c->r[1]+0x000000E0u; // 802CCF30
  return; // 802CCF34
}

// CalcTexMtx__Q24nw4r3g3dFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4FlagQ44nw4r3g3d13TexSrtTypedef13TexMatrixMode
void f_802CCF38(Ctx* __restrict c) {
  trace_call(0x802CCF38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CCF38
  c->r[0]=c->lr; // 802CCF3C
  cmps(c,0,(int32_t)c->r[7],0); // 802CCF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CCF44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CCF48
  c->r[31]=c->r[4]|c->r[4]; // 802CCF4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CCF50
  c->r[30]=c->r[3]|c->r[3]; // 802CCF54
  if (!crb(c,2)) { goto L_802CCF6C; } // 802CCF58
  c->lr=0x802CCF60u; f_802D1268(c); // 802CCF5C
  c->r[0]=cntlz(c->r[3]); // 802CCF60
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CCF64
  goto L_802CCF90; // 802CCF68
L_802CCF6C:;
  cmps(c,0,(int32_t)c->r[7],1); // 802CCF6C
  if (!crb(c,2)) { goto L_802CCF84; } // 802CCF70
  c->lr=0x802CCF78u; f_802D1E04(c); // 802CCF74
  c->r[0]=cntlz(c->r[3]); // 802CCF78
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CCF7C
  goto L_802CCF90; // 802CCF80
L_802CCF84:;
  c->lr=0x802CCF88u; f_802D2A64(c); // 802CCF84
  c->r[0]=cntlz(c->r[3]); // 802CCF88
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CCF8C
L_802CCF90:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CCF90
  if (crb(c,2)) { goto L_802CCFA8; } // 802CCF94
  cmps(c,0,(int32_t)c->r[31],0); // 802CCF98
  if (crb(c,2)) { goto L_802CCFA8; } // 802CCF9C
  c->r[3]=c->r[30]|c->r[30]; // 802CCFA0
  c->lr=0x802CCFA8u; f_80353594(c); // 802CCFA4
L_802CCFA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCFA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CCFAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802CCFB0
  c->lr=c->r[0]; // 802CCFB4
  c->r[1]=c->r[1]+0x00000010u; // 802CCFB8
  return; // 802CCFBC
}

// fn_802CCFC0
void f_802CCFC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CCFC0
  c->r[0]=c->lr; // 802CCFC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CCFC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CCFCC
  c->r[31]=c->r[4]|c->r[4]; // 802CCFD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CCFD4
  c->r[30]=c->r[3]|c->r[3]; // 802CCFD8
  c->lr=0x802CCFE0u; f_802D0514(c); // 802CCFDC
  c->r[0]=cntlz(c->r[3]); // 802CCFE0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802CCFE4
  if (crb(c,2)) { goto L_802CCFFC; } // 802CCFE8
  cmps(c,0,(int32_t)c->r[31],0); // 802CCFEC
  if (crb(c,2)) { goto L_802CCFFC; } // 802CCFF0
  c->r[3]=c->r[30]|c->r[30]; // 802CCFF4
  c->lr=0x802CCFFCu; f_80353594(c); // 802CCFF8
L_802CCFFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CCFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CD000
  c->r[30]=R32(c->r[1]+0x00000008u); // 802CD004
  c->lr=c->r[0]; // 802CD008
  c->r[1]=c->r[1]+0x00000010u; // 802CD00C
  return; // 802CD010
}

// fn_802CD014
void f_802CD014(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802CD014
  c->r[3]=c->r[3]+0x00003980u; // 802CD018
  return; // 802CD01C
}

// fn_802CD020
void f_802CD020(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802CD020
  c->r[3]=c->r[3]+0x00003980u; // 802CD024
  c->r[3]=c->r[3]+0x00006000u; // 802CD028
  return; // 802CD02C
}

// fn_802CD030
void f_802CD030(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802CD030
  c->r[3]=c->r[3]+0x00003980u; // 802CD034
  return; // 802CD038
}

// fn_802CD03C
void f_802CD03C(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802CD03C
  c->r[3]=c->r[3]+0x00003980u; // 802CD040
  return; // 802CD044
}

// fn_802CD048
void f_802CD048(Ctx* __restrict c) {
  c->r[3]=0u+0x80510000u; // 802CD048
  c->r[3]=c->r[3]+0x00003980u; // 802CD04C
  return; // 802CD050
}

// fn_802CD054
void f_802CD054(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CD054
  c->r[0]=c->lr; // 802CD058
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802CD05C
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 802CD060
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 802CD064
  c->r[11]=c->r[1]+0x000000C0u; // 802CD068
  c->lr=0x802CD070u; f_802F0D94(c); // 802CD06C
  cmps(c,0,(int32_t)c->r[5],0); // 802CD070
  c->r[18]=c->r[3]|c->r[3]; // 802CD074
  c->r[19]=c->r[4]|c->r[4]; // 802CD078
  c->r[20]=c->r[5]|c->r[5]; // 802CD07C
  c->r[17]=c->r[6]|c->r[6]; // 802CD080
  c->r[21]=c->r[7]|c->r[7]; // 802CD084
  c->r[14]=c->r[8]|c->r[8]; // 802CD088
  c->r[22]=c->r[9]|c->r[9]; // 802CD08C
  c->r[15]=c->r[10]|c->r[10]; // 802CD090
  c->r[31]=0u+0x00000000u; // 802CD094
  if (!crb(c,2)) { goto L_802CD0B8; } // 802CD098
  c->r[4]=0u+0x80480000u; // 802CD09C
  c->r[3]=c->r[21]|c->r[21]; // 802CD0A0
  c->r[4]=c->r[4]+0x00007010u; // 802CD0A4
  c->lr=0x802CD0ACu; f_802B83CC(c); // 802CD0A8
  cmps(c,0,(int32_t)c->r[3],0); // 802CD0AC
  c->r[20]=c->r[3]|c->r[3]; // 802CD0B0
  if (crb(c,2)) { goto L_802CD5F8; } // 802CD0B4
L_802CD0B8:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 802CD0B8
  c->r[0]=rotl(c->r[15],5)&0x00000001u; // 802CD0BC
  W32(c->r[1]+0x00000074u,c->r[0]); // 802CD0C0
  c->r[3]=c->r[3]+0x00000048u; // 802CD0C4
  c->r[3]=R32(c->r[3]+0x00000008u); // 802CD0C8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802CD0CC
  c->r[0]=cntlz(c->r[0]); // 802CD0D0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CD0D4
  W8(c->r[1]+0x00000070u,c->r[0]); // 802CD0D8
  c->lr=0x802CD0E0u; f_802CD014(c); // 802CD0DC
  {uint32_t ea=c->r[2]+0xFFFFAC80u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD0E0
  c->r[16]=c->r[3]|c->r[3]; // 802CD0E4
  c->r[4]=c->r[18]|c->r[18]; // 802CD0E8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802CD0EC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802CD0F0
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 802CD0F4
  c->r[3]=c->r[17]|c->r[17]; // 802CD0F8
  c->lr=0x802CD100u; f_803535C0(c); // 802CD0FC
  c->lr=0x802CD104u; f_802CD020(c); // 802CD100
  W32(c->r[19]+0x00000000u,c->r[15]); // 802CD104
  c->r[30]=c->r[3]|c->r[3]; // 802CD108
  c->r[29]=0u+0x00000000u; // 802CD10C
  c->r[17]=0u+0x00000000u; // 802CD110
  goto L_802CD550; // 802CD114
L_802CD118:;
  cmpu(c,0,c->r[0],0x00000002u); // 802CD118
  if (!crb(c,2)) { goto L_802CD4D8; } // 802CD11C
  c->r[0]=R8(c->r[20]+0x00000001u); // 802CD120
  c->r[3]=c->r[21]|c->r[21]; // 802CD124
  c->r[4]=R8(c->r[20]+0x00000003u); // 802CD128
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 802CD12C
  c->r[6]=R8(c->r[20]+0x00000002u); // 802CD130
  c->r[0]=R8(c->r[20]+0x00000004u); // 802CD134
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 802CD138
  c->r[28]=c->r[7]+c->r[6]; // 802CD13C
  c->r[4]=c->r[28]|c->r[28]; // 802CD140
  c->r[24]=c->r[5]+c->r[0]; // 802CD144
  c->lr=0x802CD14Cu; f_802B84F8(c); // 802CD148
  cmps(c,0,(int32_t)c->r[3],0); // 802CD14C
  W32(c->r[1]+0x00000014u,c->r[3]); // 802CD150
  if (crb(c,2)) { goto L_802CD160; } // 802CD154
  c->r[15]=R32(c->r[3]+0x00000010u); // 802CD158
  goto L_802CD164; // 802CD15C
L_802CD160:;
  c->r[15]=0u+0x00000000u; // 802CD160
L_802CD164:;
  W32(c->r[30]+c->r[17],c->r[15]); // 802CD164
  c->r[0]=rotl(c->r[24],2)&0xFFFFFFFCu; // 802CD168
  c->r[3]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 802CD16C
  cmps(c,0,(int32_t)c->r[14],0); // 802CD170
  c->r[23]=R32(c->r[19]+c->r[0]); // 802CD174
  c->r[29]=c->r[29]+0x00000001u; // 802CD178
  c->r[17]=c->r[17]+0x00000004u; // 802CD17C
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 802CD180
  c->r[27]=c->r[18]+c->r[3]; // 802CD184
  c->r[3]=(uint32_t)((int32_t)c->r[24]*(int32_t)48); // 802CD188
  c->r[26]=c->r[16]+c->r[0]; // 802CD18C
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)12); // 802CD190
  c->r[25]=c->r[18]+c->r[3]; // 802CD194
  c->r[24]=c->r[16]+c->r[0]; // 802CD198
  if (crb(c,2)) { goto L_802CD1D4; } // 802CD19C
  c->r[5]=R32(c->r[1]+0x00000014u); // 802CD1A0
  c->r[3]=c->r[14]|c->r[14]; // 802CD1A4
  c->r[4]=c->r[1]+0x00000024u; // 802CD1A8
  cmps(c,0,(int32_t)c->r[5],0); // 802CD1AC
  if (crb(c,2)) { goto L_802CD1BC; } // 802CD1B0
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 802CD1B4
  goto L_802CD1C0; // 802CD1B8
L_802CD1BC:;
  c->r[5]=0u+0x00000000u; // 802CD1BC
L_802CD1C0:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802CD1C0
  c->r[12]=R32(c->r[12]+0x00000038u); // 802CD1C4
  c->ctr=c->r[12]; // 802CD1C8
  if (true) { c->lr=0x802CD1D0u; dispatch(c,c->ctr); } // 802CD1CC
  c->r[31]=c->r[3]|c->r[3]; // 802CD1D0
L_802CD1D4:;
  cmps(c,0,(int32_t)c->r[14],0); // 802CD1D4
  if (crb(c,2)) { goto L_802CD1E8; } // 802CD1D8
  c->r[0]=R32(c->r[31]+0x00000000u); // 802CD1DC
  cmps(c,0,(int32_t)c->r[0],0); // 802CD1E0
  if (!crb(c,2)) { goto L_802CD1F8; } // 802CD1E4
L_802CD1E8:;
  c->r[3]=c->r[1]+0x00000014u; // 802CD1E8
  c->r[4]=c->r[1]+0x00000024u; // 802CD1EC
  c->lr=0x802CD1F4u; f_802BBBD8(c); // 802CD1F0
  c->r[31]=c->r[1]+0x00000024u; // 802CD1F4
L_802CD1F8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802CD1F8
  if (crb(c,2)) { goto L_802CD2CC; } // 802CD1FC
  c->r[0]=R32(c->r[1]+0x00000074u); // 802CD200
  cmps(c,0,(int32_t)c->r[0],0); // 802CD204
  if (crb(c,2)) { goto L_802CD2CC; } // 802CD208
  c->r[0]=c->r[1]+0x00000024u; // 802CD20C
  cmpu(c,0,c->r[31],c->r[0]); // 802CD210
  if (crb(c,2)) { goto L_802CD2B4; } // 802CD214
  c->r[0]=R32(c->r[31]+0x00000000u); // 802CD218
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CD21C
  c->r[3]=R32(c->r[31]+0x00000004u); // 802CD220
  c->r[0]=R32(c->r[31]+0x00000008u); // 802CD224
  W32(c->r[1]+0x00000028u,c->r[3]); // 802CD228
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802CD22C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802CD230
  W32(c->r[1]+0x00000030u,c->r[0]); // 802CD234
  c->r[3]=R32(c->r[31]+0x00000010u); // 802CD238
  c->r[0]=R32(c->r[31]+0x00000014u); // 802CD23C
  W32(c->r[1]+0x00000034u,c->r[3]); // 802CD240
  W32(c->r[1]+0x00000038u,c->r[0]); // 802CD244
  c->r[0]=R32(c->r[31]+0x00000018u); // 802CD248
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802CD24C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802CD250
  c->r[0]=R32(c->r[31]+0x00000020u); // 802CD254
  W32(c->r[1]+0x00000040u,c->r[3]); // 802CD258
  W32(c->r[1]+0x00000044u,c->r[0]); // 802CD25C
  c->r[3]=R32(c->r[31]+0x00000024u); // 802CD260
  c->r[0]=R32(c->r[31]+0x00000028u); // 802CD264
  W32(c->r[1]+0x00000048u,c->r[3]); // 802CD268
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802CD26C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 802CD270
  c->r[0]=R32(c->r[31]+0x00000030u); // 802CD274
  W32(c->r[1]+0x00000050u,c->r[3]); // 802CD278
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CD27C
  c->r[3]=R32(c->r[31]+0x00000034u); // 802CD280
  c->r[0]=R32(c->r[31]+0x00000038u); // 802CD284
  W32(c->r[1]+0x00000058u,c->r[3]); // 802CD288
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802CD28C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 802CD290
  c->r[0]=R32(c->r[31]+0x00000040u); // 802CD294
  W32(c->r[1]+0x00000060u,c->r[3]); // 802CD298
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CD29C
  c->r[3]=R32(c->r[31]+0x00000044u); // 802CD2A0
  c->r[0]=R32(c->r[31]+0x00000048u); // 802CD2A4
  c->r[31]=c->r[1]+0x00000024u; // 802CD2A8
  W32(c->r[1]+0x00000068u,c->r[3]); // 802CD2AC
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802CD2B0
L_802CD2B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802CD2B4
  c->r[3]=c->r[1]+0x00000014u; // 802CD2B8
  c->r[4]=c->r[1]+0x00000024u; // 802CD2BC
  c->r[0]=c->r[0]|0x00000200u; // 802CD2C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CD2C4
  c->lr=0x802CD2CCu; f_802BBAA8(c); // 802CD2C8
L_802CD2CC:;
  cmps(c,0,(int32_t)c->r[22],0); // 802CD2CC
  if (crb(c,2)) { goto L_802CD3BC; } // 802CD2D0
  c->r[0]=c->r[1]+0x00000024u; // 802CD2D4
  cmpu(c,0,c->r[31],c->r[0]); // 802CD2D8
  if (crb(c,2)) { goto L_802CD37C; } // 802CD2DC
  c->r[0]=R32(c->r[31]+0x00000000u); // 802CD2E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CD2E4
  c->r[3]=R32(c->r[31]+0x00000004u); // 802CD2E8
  c->r[0]=R32(c->r[31]+0x00000008u); // 802CD2EC
  W32(c->r[1]+0x00000028u,c->r[3]); // 802CD2F0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802CD2F4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802CD2F8
  W32(c->r[1]+0x00000030u,c->r[0]); // 802CD2FC
  c->r[3]=R32(c->r[31]+0x00000010u); // 802CD300
  c->r[0]=R32(c->r[31]+0x00000014u); // 802CD304
  W32(c->r[1]+0x00000034u,c->r[3]); // 802CD308
  W32(c->r[1]+0x00000038u,c->r[0]); // 802CD30C
  c->r[0]=R32(c->r[31]+0x00000018u); // 802CD310
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802CD314
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 802CD318
  c->r[0]=R32(c->r[31]+0x00000020u); // 802CD31C
  W32(c->r[1]+0x00000040u,c->r[3]); // 802CD320
  W32(c->r[1]+0x00000044u,c->r[0]); // 802CD324
  c->r[3]=R32(c->r[31]+0x00000024u); // 802CD328
  c->r[0]=R32(c->r[31]+0x00000028u); // 802CD32C
  W32(c->r[1]+0x00000048u,c->r[3]); // 802CD330
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802CD334
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 802CD338
  c->r[0]=R32(c->r[31]+0x00000030u); // 802CD33C
  W32(c->r[1]+0x00000050u,c->r[3]); // 802CD340
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CD344
  c->r[3]=R32(c->r[31]+0x00000034u); // 802CD348
  c->r[0]=R32(c->r[31]+0x00000038u); // 802CD34C
  W32(c->r[1]+0x00000058u,c->r[3]); // 802CD350
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802CD354
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 802CD358
  c->r[0]=R32(c->r[31]+0x00000040u); // 802CD35C
  W32(c->r[1]+0x00000060u,c->r[3]); // 802CD360
  W32(c->r[1]+0x00000064u,c->r[0]); // 802CD364
  c->r[3]=R32(c->r[31]+0x00000044u); // 802CD368
  c->r[0]=R32(c->r[31]+0x00000048u); // 802CD36C
  c->r[31]=c->r[1]+0x00000024u; // 802CD370
  W32(c->r[1]+0x00000068u,c->r[3]); // 802CD374
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802CD378
L_802CD37C:;
  c->r[0]=R16(c->r[22]+0x00000006u); // 802CD37C
  c->r[3]=R32(c->r[21]+0x00000000u); // 802CD380
  cmpu(c,0,c->r[28],c->r[0]); // 802CD384
  if (!crb(c,2)) { goto L_802CD3BC; } // 802CD388
  c->r[0]=R8(c->r[22]+0x00000004u); // 802CD38C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802CD390
  if (crb(c,2)) { goto L_802CD3BC; } // 802CD394
  W32(c->r[1]+0x00000010u,c->r[3]); // 802CD398
  c->r[6]=c->r[22]|c->r[22]; // 802CD39C
  c->r[4]=c->r[1]+0x00000024u; // 802CD3A0
  c->r[5]=c->r[1]+0x00000010u; // 802CD3A4
  c->r[3]=R32(c->r[22]+0x00000000u); // 802CD3A8
  c->r[12]=R32(c->r[3]+0x00000000u); // 802CD3AC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802CD3B0
  c->ctr=c->r[12]; // 802CD3B4
  if (true) { c->lr=0x802CD3BCu; dispatch(c,c->ctr); } // 802CD3B8
L_802CD3BC:;
  c->r[0]=R8(c->r[1]+0x00000070u); // 802CD3BC
  cmps(c,0,(int32_t)c->r[0],0); // 802CD3C0
  if (crb(c,2)) { goto L_802CD3F4; } // 802CD3C4
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 802CD3C8
  c->r[3]=c->r[27]|c->r[27]; // 802CD3CC
  c->r[15]=c->r[19]+c->r[0]; // 802CD3D0
  c->r[4]=c->r[26]|c->r[26]; // 802CD3D4
  c->r[5]=c->r[25]|c->r[25]; // 802CD3D8
  c->r[6]=c->r[24]|c->r[24]; // 802CD3DC
  c->r[7]=c->r[23]|c->r[23]; // 802CD3E0
  c->r[8]=c->r[31]|c->r[31]; // 802CD3E4
  c->lr=0x802CD3ECu; f_802D1EA0(c); // 802CD3E8
  W32(c->r[15]+0x00000000u,c->r[3]); // 802CD3EC
  goto L_802CD454; // 802CD3F0
L_802CD3F4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802CD3F4
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802CD3F8
  if (crb(c,2)) { goto L_802CD42C; } // 802CD3FC
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 802CD400
  c->r[3]=c->r[27]|c->r[27]; // 802CD404
  c->r[15]=c->r[19]+c->r[0]; // 802CD408
  c->r[4]=c->r[26]|c->r[26]; // 802CD40C
  c->r[5]=c->r[25]|c->r[25]; // 802CD410
  c->r[6]=c->r[24]|c->r[24]; // 802CD414
  c->r[7]=c->r[23]|c->r[23]; // 802CD418
  c->r[8]=c->r[31]|c->r[31]; // 802CD41C
  c->lr=0x802CD424u; f_802D1304(c); // 802CD420
  W32(c->r[15]+0x00000000u,c->r[3]); // 802CD424
  goto L_802CD454; // 802CD428
L_802CD42C:;
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 802CD42C
  c->r[3]=c->r[27]|c->r[27]; // 802CD430
  c->r[15]=c->r[19]+c->r[0]; // 802CD434
  c->r[4]=c->r[26]|c->r[26]; // 802CD438
  c->r[5]=c->r[25]|c->r[25]; // 802CD43C
  c->r[6]=c->r[24]|c->r[24]; // 802CD440
  c->r[7]=c->r[23]|c->r[23]; // 802CD444
  c->r[8]=c->r[31]|c->r[31]; // 802CD448
  c->lr=0x802CD450u; f_802D0670(c); // 802CD44C
  W32(c->r[15]+0x00000000u,c->r[3]); // 802CD450
L_802CD454:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 802CD454
  cmps(c,0,(int32_t)c->r[3],0); // 802CD458
  if (crb(c,2)) { goto L_802CD468; } // 802CD45C
  c->r[3]=R32(c->r[3]+0x00000018u); // 802CD460
  goto L_802CD46C; // 802CD464
L_802CD468:;
  c->r[3]=0u+0x00000000u; // 802CD468
L_802CD46C:;
  c->r[0]=R32(c->r[15]+0x00000000u); // 802CD46C
  cmps(c,0,(int32_t)c->r[22],0); // 802CD470
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 802CD474
  c->r[0]=c->r[0]|c->r[3]; // 802CD478
  W32(c->r[15]+0x00000000u,c->r[0]); // 802CD47C
  if (crb(c,2)) { goto L_802CD4D0; } // 802CD480
  c->r[0]=R16(c->r[22]+0x00000006u); // 802CD484
  c->r[3]=R32(c->r[21]+0x00000000u); // 802CD488
  cmpu(c,0,c->r[28],c->r[0]); // 802CD48C
  if (!crb(c,2)) { goto L_802CD4D0; } // 802CD490
  c->r[0]=R8(c->r[22]+0x00000004u); // 802CD494
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802CD498
  if (crb(c,2)) { goto L_802CD4D0; } // 802CD49C
  W32(c->r[1]+0x00000018u,c->r[27]); // 802CD4A0
  c->r[6]=c->r[22]|c->r[22]; // 802CD4A4
  c->r[4]=c->r[1]+0x00000018u; // 802CD4A8
  c->r[5]=c->r[1]+0x0000000Cu; // 802CD4AC
  W32(c->r[1]+0x0000001Cu,c->r[26]); // 802CD4B0
  W32(c->r[1]+0x00000020u,c->r[15]); // 802CD4B4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802CD4B8
  c->r[3]=R32(c->r[22]+0x00000000u); // 802CD4BC
  c->r[12]=R32(c->r[3]+0x00000000u); // 802CD4C0
  c->r[12]=R32(c->r[12]+0x00000010u); // 802CD4C4
  c->ctr=c->r[12]; // 802CD4C8
  if (true) { c->lr=0x802CD4D0u; dispatch(c,c->ctr); } // 802CD4CC
L_802CD4D0:;
  c->r[20]=c->r[20]+0x00000005u; // 802CD4D0
  goto L_802CD550; // 802CD4D4
L_802CD4D8:;
  c->r[0]=R8(c->r[20]+0x00000001u); // 802CD4D8
  c->r[29]=c->r[29]+0x00000001u; // 802CD4DC
  c->r[3]=R8(c->r[20]+0x00000003u); // 802CD4E0
  c->r[5]=rotl(c->r[0],8)&0xFFFFFF00u; // 802CD4E4
  c->r[4]=R8(c->r[20]+0x00000002u); // 802CD4E8
  c->r[0]=R8(c->r[20]+0x00000004u); // 802CD4EC
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802CD4F0
  c->r[15]=c->r[5]+c->r[4]; // 802CD4F4
  c->r[23]=c->r[3]+c->r[0]; // 802CD4F8
  W32(c->r[30]+c->r[17],c->r[15]); // 802CD4FC
  c->r[4]=rotl(c->r[23],2)&0xFFFFFFFCu; // 802CD500
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 802CD504
  c->r[4]=R32(c->r[19]+c->r[4]); // 802CD508
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)48); // 802CD50C
  c->r[17]=c->r[17]+0x00000004u; // 802CD510
  W32(c->r[19]+c->r[0],c->r[4]); // 802CD514
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)48); // 802CD518
  c->r[3]=c->r[18]+c->r[3]; // 802CD51C
  c->r[4]=c->r[18]+c->r[0]; // 802CD520
  c->lr=0x802CD528u; f_803535C0(c); // 802CD524
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)12); // 802CD528
  c->r[20]=c->r[20]+0x00000005u; // 802CD52C
  c->r[3]=(uint32_t)((int32_t)c->r[23]*(int32_t)12); // 802CD530
  {uint32_t ea=c->r[3]+c->r[16]; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802CD534
  c->r[4]=c->r[16]+c->r[0]; // 802CD538
  {uint32_t ea=c->r[16]+c->r[0]; WF32(ea,c->f[0]);} // 802CD53C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD540
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802CD544
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD548
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802CD54C
L_802CD550:;
  c->r[0]=R8(c->r[20]+0x00000000u); // 802CD550
  cmpu(c,0,c->r[0],0x00000001u); // 802CD554
  if (!crb(c,2)) { IRQCHK(c); goto L_802CD118; } // 802CD558
  {uint32_t ea=c->r[2]+0xFFFFAC80u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CD55C
  c->r[14]=0u+0x00000000u; // 802CD560
  goto L_802CD5B4; // 802CD564
L_802CD568:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 802CD568
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802CD56C
  {uint32_t ea=c->r[16]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD570
  c->r[3]=c->r[16]+c->r[0]; // 802CD574
  fcmp(c,0,c->f[31],c->f[0]); // 802CD578
  if (!crb(c,2)) { goto L_802CD598; } // 802CD57C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD580
  fcmp(c,0,c->f[31],c->f[0]); // 802CD584
  if (!crb(c,2)) { goto L_802CD598; } // 802CD588
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD58C
  fcmp(c,0,c->f[31],c->f[0]); // 802CD590
  if (crb(c,2)) { goto L_802CD5AC; } // 802CD594
L_802CD598:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802CD598
  c->r[5]=c->r[16]+c->r[0]; // 802CD59C
  c->r[3]=c->r[18]+c->r[3]; // 802CD5A0
  c->r[4]=c->r[3]|c->r[3]; // 802CD5A4
  c->lr=0x802CD5ACu; f_8026CD9C(c); // 802CD5A8
L_802CD5AC:;
  c->r[30]=c->r[30]+0x00000004u; // 802CD5AC
  c->r[14]=c->r[14]+0x00000001u; // 802CD5B0
L_802CD5B4:;
  cmpu(c,0,c->r[14],c->r[29]); // 802CD5B4
  if (crb(c,0)) { IRQCHK(c); goto L_802CD568; } // 802CD5B8
  cmps(c,0,(int32_t)c->r[22],0); // 802CD5BC
  if (crb(c,2)) { goto L_802CD5F8; } // 802CD5C0
  c->r[0]=R8(c->r[22]+0x00000004u); // 802CD5C4
  c->r[3]=R32(c->r[21]+0x00000000u); // 802CD5C8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802CD5CC
  if (crb(c,2)) { goto L_802CD5F8; } // 802CD5D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CD5D4
  c->r[4]=c->r[18]|c->r[18]; // 802CD5D8
  c->r[6]=c->r[22]|c->r[22]; // 802CD5DC
  c->r[5]=c->r[1]+0x00000008u; // 802CD5E0
  c->r[3]=R32(c->r[22]+0x00000000u); // 802CD5E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802CD5E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 802CD5EC
  c->ctr=c->r[12]; // 802CD5F0
  if (true) { c->lr=0x802CD5F8u; dispatch(c,c->ctr); } // 802CD5F4
L_802CD5F8:;
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 802CD5F8
  c->r[11]=c->r[1]+0x000000C0u; // 802CD5FC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 802CD600
  c->lr=0x802CD608u; f_802F0DE0(c); // 802CD604
  c->r[0]=R32(c->r[1]+0x000000D4u); // 802CD608
  c->lr=c->r[0]; // 802CD60C
  c->r[1]=c->r[1]+0x000000D0u; // 802CD610
  return; // 802CD614
}

// fn_802CD618
void f_802CD618(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CD618
  c->r[0]=c->lr; // 802CD61C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802CD620
  c->r[11]=c->r[1]+0x00000030u; // 802CD624
  c->lr=0x802CD62Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CD628
  cmps(c,0,(int32_t)c->r[6],0); // 802CD62C
  c->r[26]=c->r[3]|c->r[3]; // 802CD630
  c->r[27]=c->r[4]|c->r[4]; // 802CD634
  c->r[28]=c->r[5]|c->r[5]; // 802CD638
  c->r[29]=c->r[6]|c->r[6]; // 802CD63C
  if (!crb(c,2)) { goto L_802CD65C; } // 802CD640
  c->r[3]=c->r[28]|c->r[28]; // 802CD644
  c->r[4]=c->r[13]+0xFFFFAA48u; // 802CD648
  c->lr=0x802CD650u; f_802B83CC(c); // 802CD64C
  cmps(c,0,(int32_t)c->r[3],0); // 802CD650
  c->r[29]=c->r[3]|c->r[3]; // 802CD654
  if (crb(c,2)) { goto L_802CD8DC; } // 802CD658
L_802CD65C:;
  c->lr=0x802CD660u; f_802CD03C(c); // 802CD65C
  c->r[30]=c->r[3]|c->r[3]; // 802CD660
  c->r[31]=0u+0xF0000000u; // 802CD664
  goto L_802CD8D0; // 802CD668
L_802CD66C:;
  cmpu(c,0,c->r[0],0x00000003u); // 802CD66C
  if (!crb(c,2)) { goto L_802CD890; } // 802CD670
  {uint32_t ea=c->r[2]+0xFFFFAC84u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CD674
  c->r[3]=R8(c->r[29]+0x00000001u); // 802CD678
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802CD67C
  c->r[0]=R8(c->r[29]+0x00000002u); // 802CD680
  c->r[11]=R8(c->r[29]+0x00000003u); // 802CD684
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802CD688
  c->r[10]=c->r[3]+c->r[0]; // 802CD68C
  c->r[29]=c->r[29]+0x00000004u; // 802CD690
  c->r[9]=rotl(c->r[10],2)&0xFFFFFFFCu; // 802CD694
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[1]=t0; c->ps1[1]=t1;} // 802CD698
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[2]=t0; c->ps1[2]=t1;} // 802CD69C
  cmpu(c,0,c->r[11],0x00000000u); // 802CD6A0
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[3]=t0; c->ps1[3]=t1;} // 802CD6A4
  W32(c->r[27]+c->r[9],c->r[31]); // 802CD6A8
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[4]=t0; c->ps1[4]=t1;} // 802CD6AC
  {double t0=S(c->f[0]), t1=S(c->f[0]); c->f[5]=t0; c->ps1[5]=t1;} // 802CD6B0
  if (!crb(c,1)) { goto L_802CD86C; } // 802CD6B4
  c->r[0]=rotl(c->r[11],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 802CD6B8
  c->ctr=c->r[0]; // 802CD6BC
  if (crb(c,2)) { goto L_802CD7DC; } // 802CD6C0
L_802CD6C4:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 802CD6C4
  c->r[0]=R8(c->r[29]+0x00000001u); // 802CD6C8
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802CD6CC
  c->r[5]=R8(c->r[29]+0x00000003u); // 802CD6D0
  c->r[0]=c->r[3]+c->r[0]; // 802CD6D4
  c->r[3]=R32(c->r[27]+c->r[9]); // 802CD6D8
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CD6DC
  c->r[7]=R8(c->r[29]+0x00000005u); // 802CD6E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CD6E4
  c->r[8]=R8(c->r[29]+0x00000004u); // 802CD6E8
  c->r[0]=R32(c->r[27]+c->r[0]); // 802CD6EC
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 802CD6F0
  c->r[12]=c->r[30]+c->r[4]; // 802CD6F4
  c->r[6]=R8(c->r[29]+0x00000002u); // 802CD6F8
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 802CD6FC
  c->r[0]=c->r[3]&c->r[0]; // 802CD700
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 802CD704
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 802CD708
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 802CD70C
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 802CD710
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 802CD714
  c->r[4]=c->r[7]|c->r[5]; // 802CD718
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 802CD71C
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 802CD720
  W32(c->r[1]+0x00000008u,c->r[4]); // 802CD724
  W32(c->r[27]+c->r[9],c->r[0]); // 802CD728
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CD72C
  c->r[3]=R8(c->r[29]+0x00000006u); // 802CD730
  c->r[5]=R8(c->r[29]+0x00000009u); // 802CD734
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CD738
  c->r[0]=R8(c->r[29]+0x00000007u); // 802CD73C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802CD740
  c->r[8]=R8(c->r[29]+0x0000000Au); // 802CD744
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 802CD748
  c->r[0]=c->r[3]+c->r[0]; // 802CD74C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CD750
  c->r[6]=R8(c->r[29]+0x00000008u); // 802CD754
  c->r[7]=R8(c->r[29]+0x0000000Bu); // 802CD758
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CD75C
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 802CD760
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 802CD764
  c->r[12]=c->r[30]+c->r[4]; // 802CD768
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 802CD76C
  c->r[4]=c->r[7]|c->r[5]; // 802CD770
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 802CD774
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 802CD778
  W32(c->r[1]+0x00000008u,c->r[4]); // 802CD77C
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 802CD780
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 802CD784
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 802CD788
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CD78C
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 802CD790
  c->r[29]=c->r[29]+0x0000000Cu; // 802CD794
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 802CD798
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CD79C
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 802CD7A0
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 802CD7A4
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 802CD7A8
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 802CD7AC
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 802CD7B0
  c->r[3]=R32(c->r[27]+c->r[9]); // 802CD7B4
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 802CD7B8
  c->r[0]=R32(c->r[27]+c->r[0]); // 802CD7BC
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 802CD7C0
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 802CD7C4
  c->r[0]=c->r[3]&c->r[0]; // 802CD7C8
  W32(c->r[27]+c->r[9],c->r[0]); // 802CD7CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802CD6C4; } // 802CD7D0
  c->r[11]=c->r[11]&0x00000001u; cr0(c,c->r[11]); // 802CD7D4
  if (crb(c,2)) { goto L_802CD86C; } // 802CD7D8
L_802CD7DC:;
  c->ctr=c->r[11]; // 802CD7DC
L_802CD7E0:;
  c->r[3]=R8(c->r[29]+0x00000000u); // 802CD7E0
  c->r[0]=R8(c->r[29]+0x00000001u); // 802CD7E4
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 802CD7E8
  c->r[5]=R8(c->r[29]+0x00000003u); // 802CD7EC
  c->r[0]=c->r[3]+c->r[0]; // 802CD7F0
  c->r[8]=R8(c->r[29]+0x00000004u); // 802CD7F4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CD7F8
  c->r[6]=R8(c->r[29]+0x00000002u); // 802CD7FC
  c->r[7]=R8(c->r[29]+0x00000005u); // 802CD800
  c->r[5]=rotl(c->r[5],16)&0xFFFF0000u; // 802CD804
  c->r[7]=(rotl(c->r[8],8)&0x0000FF00u)|(c->r[7]&~0x0000FF00u); // 802CD808
  c->r[3]=R32(c->r[27]+c->r[9]); // 802CD80C
  c->r[12]=c->r[30]+c->r[4]; // 802CD810
  c->r[5]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 802CD814
  c->r[4]=c->r[7]|c->r[5]; // 802CD818
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CD81C
  W32(c->r[1]+0x00000008u,c->r[4]); // 802CD820
  c->r[29]=c->r[29]+0x00000006u; // 802CD824
  c->r[0]=R32(c->r[27]+c->r[0]); // 802CD828
  {uint32_t ea=c->r[12]+0x00000000u; psq_load(c,7,ea,0,0);} // 802CD82C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CD830
  c->r[0]=c->r[3]&c->r[0]; // 802CD834
  {uint32_t ea=c->r[12]+0x00000008u; psq_load(c,8,ea,0,0);} // 802CD838
  {uint32_t ea=c->r[12]+0x00000010u; psq_load(c,9,ea,0,0);} // 802CD83C
  {double t0=S(std::fma(c->f[7],c->f[6],c->f[0])), t1=S(std::fma(c->ps1[7],c->f[6],c->ps1[0])); c->f[0]=t0; c->ps1[0]=t1;} // 802CD840
  {uint32_t ea=c->r[12]+0x00000018u; psq_load(c,10,ea,0,0);} // 802CD844
  {double t0=S(std::fma(c->f[8],c->f[6],c->f[1])), t1=S(std::fma(c->ps1[8],c->f[6],c->ps1[1])); c->f[1]=t0; c->ps1[1]=t1;} // 802CD848
  {uint32_t ea=c->r[12]+0x00000020u; psq_load(c,11,ea,0,0);} // 802CD84C
  {double t0=S(std::fma(c->f[9],c->f[6],c->f[2])), t1=S(std::fma(c->ps1[9],c->f[6],c->ps1[2])); c->f[2]=t0; c->ps1[2]=t1;} // 802CD850
  {uint32_t ea=c->r[12]+0x00000028u; psq_load(c,12,ea,0,0);} // 802CD854
  {double t0=S(std::fma(c->f[10],c->f[6],c->f[3])), t1=S(std::fma(c->ps1[10],c->f[6],c->ps1[3])); c->f[3]=t0; c->ps1[3]=t1;} // 802CD858
  {double t0=S(std::fma(c->f[11],c->f[6],c->f[4])), t1=S(std::fma(c->ps1[11],c->f[6],c->ps1[4])); c->f[4]=t0; c->ps1[4]=t1;} // 802CD85C
  W32(c->r[27]+c->r[9],c->r[0]); // 802CD860
  {double t0=S(std::fma(c->f[12],c->f[6],c->f[5])), t1=S(std::fma(c->ps1[12],c->f[6],c->ps1[5])); c->f[5]=t0; c->ps1[5]=t1;} // 802CD864
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802CD7E0; } // 802CD868
L_802CD86C:;
  c->r[0]=(uint32_t)((int32_t)c->r[10]*(int32_t)48); // 802CD86C
  c->r[3]=c->r[26]+c->r[0]; // 802CD870
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802CD874
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,1,ea,0,0);} // 802CD878
  {uint32_t ea=c->r[3]+0x00000010u; psq_store(c,2,ea,0,0);} // 802CD87C
  {uint32_t ea=c->r[3]+0x00000018u; psq_store(c,3,ea,0,0);} // 802CD880
  {uint32_t ea=c->r[3]+0x00000020u; psq_store(c,4,ea,0,0);} // 802CD884
  {uint32_t ea=c->r[3]+0x00000028u; psq_store(c,5,ea,0,0);} // 802CD888
  goto L_802CD8D0; // 802CD88C
L_802CD890:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 802CD890
  c->r[3]=c->r[28]|c->r[28]; // 802CD894
  c->r[4]=R8(c->r[29]+0x00000003u); // 802CD898
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 802CD89C
  c->r[5]=R8(c->r[29]+0x00000002u); // 802CD8A0
  c->r[0]=R8(c->r[29]+0x00000004u); // 802CD8A4
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 802CD8A8
  c->r[25]=c->r[6]+c->r[5]; // 802CD8AC
  c->r[4]=c->r[4]+c->r[0]; // 802CD8B0
  c->lr=0x802CD8B8u; f_802B84F8(c); // 802CD8B4
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)48); // 802CD8B8
  c->r[4]=c->r[3]+0x000000A0u; // 802CD8BC
  c->r[3]=c->r[26]+c->r[0]; // 802CD8C0
  c->r[5]=c->r[30]+c->r[0]; // 802CD8C4
  c->lr=0x802CD8CCu; f_803535F4(c); // 802CD8C8
  c->r[29]=c->r[29]+0x00000005u; // 802CD8CC
L_802CD8D0:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 802CD8D0
  cmpu(c,0,c->r[0],0x00000001u); // 802CD8D4
  if (!crb(c,2)) { IRQCHK(c); goto L_802CD66C; } // 802CD8D8
L_802CD8DC:;
  c->r[11]=c->r[1]+0x00000030u; // 802CD8DC
  c->lr=0x802CD8E4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CD8E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802CD8E4
  c->lr=c->r[0]; // 802CD8E8
  c->r[1]=c->r[1]+0x00000030u; // 802CD8EC
  return; // 802CD8F0
}

// fn_802CD8F4
void f_802CD8F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CD8F4
  c->r[0]=c->lr; // 802CD8F8
  W32(c->r[1]+0x00000134u,c->r[0]); // 802CD8FC
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 802CD900
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 802CD904
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 802CD908
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 802CD90C
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 802CD910
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 802CD914
  c->r[11]=c->r[1]+0x00000100u; // 802CD918
  c->lr=0x802CD920u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CD91C
  c->r[6]=R32(c->r[3]+0x00000000u); // 802CD920
  c->r[23]=c->r[3]|c->r[3]; // 802CD924
  c->r[24]=c->r[4]|c->r[4]; // 802CD928
  c->r[25]=c->r[5]|c->r[5]; // 802CD92C
  cmps(c,0,(int32_t)c->r[6],0); // 802CD930
  if (crb(c,2)) { goto L_802CD944; } // 802CD934
  c->r[0]=R32(c->r[5]+0x00000000u); // 802CD938
  cmps(c,0,(int32_t)c->r[0],0); // 802CD93C
  if (!crb(c,2)) { goto L_802CD94C; } // 802CD940
L_802CD944:;
  c->r[3]=0u+0x00000000u; // 802CD944
  goto L_802CDDE0; // 802CD948
L_802CD94C:;
  c->r[0]=c->r[6]+0x0000001Cu; // 802CD94C
  c->r[3]=c->r[1]+0x00000010u; // 802CD950
  W32(c->r[1]+0x00000010u,c->r[0]); // 802CD954
  c->r[5]=c->r[1]+0x00000068u; // 802CD958
  c->r[6]=c->r[1]+0x0000000Cu; // 802CD95C
  c->r[4]=0u+0x00000001u; // 802CD960
  c->lr=0x802CD968u; f_802BA33C(c); // 802CD964
  c->r[3]=c->r[1]+0x00000010u; // 802CD968
  c->r[5]=c->r[1]+0x0000006Cu; // 802CD96C
  c->r[6]=c->r[1]+0x0000000Du; // 802CD970
  c->r[4]=0u+0x00000002u; // 802CD974
  c->lr=0x802CD97Cu; f_802BA33C(c); // 802CD978
  c->r[3]=c->r[1]+0x00000010u; // 802CD97C
  c->r[5]=c->r[1]+0x00000070u; // 802CD980
  c->r[6]=c->r[1]+0x0000000Eu; // 802CD984
  c->r[4]=0u+0x00000003u; // 802CD988
  c->lr=0x802CD990u; f_802BA33C(c); // 802CD98C
  c->r[0]=R32(c->r[1]+0x00000068u); // 802CD990
  cmps(c,0,(int32_t)c->r[0],0); // 802CD994
  if (!crb(c,2)) { goto L_802CD9BC; } // 802CD998
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 802CD99C
  cmps(c,0,(int32_t)c->r[0],0); // 802CD9A0
  if (!crb(c,2)) { goto L_802CD9BC; } // 802CD9A4
  c->r[0]=R32(c->r[1]+0x00000070u); // 802CD9A8
  cmps(c,0,(int32_t)c->r[0],0); // 802CD9AC
  if (!crb(c,2)) { goto L_802CD9BC; } // 802CD9B0
  c->r[3]=0u+0x00000000u; // 802CD9B4
  goto L_802CDDE0; // 802CD9B8
L_802CD9BC:;
  c->r[29]=0u+0x00000000u; // 802CD9BC
  c->lr=0x802CD9C4u; f_802C96E4(c); // 802CD9C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802CD9C4
  c->r[27]=c->r[3]|c->r[3]; // 802CD9C8
  c->r[12]=R32(c->r[12]+0x00000010u); // 802CD9CC
  c->ctr=c->r[12]; // 802CD9D0
  if (true) { c->lr=0x802CD9D8u; dispatch(c,c->ctr); } // 802CD9D4
  {uint32_t ea=c->r[2]+0xFFFFAC8Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 802CD9D8
  c->r[31]=c->r[1]+0x00000068u; // 802CD9DC
  {uint32_t ea=c->r[2]+0xFFFFAC90u; c->f[30]=c->ps1[30]=RF32(ea);} // 802CD9E0
  c->r[30]=c->r[1]+0x0000000Cu; // 802CD9E4
  {uint32_t ea=c->r[2]+0xFFFFAC88u; c->f[31]=c->ps1[31]=RF32(ea);} // 802CD9E8
  c->r[28]=0u+0x00000000u; // 802CD9EC
L_802CD9F0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802CD9F0
  c->r[26]=c->r[28]+0x00000001u; // 802CD9F4
  cmps(c,0,(int32_t)c->r[0],0); // 802CD9F8
  if (crb(c,2)) { goto L_802CDDC8; } // 802CD9FC
  cmps(c,0,(int32_t)c->r[29],0); // 802CDA00
  if (!crb(c,2)) { goto L_802CDC14; } // 802CDA04
  c->r[3]=R32(c->r[25]+0x00000000u); // 802CDA08
  c->r[29]=0u+0x00000001u; // 802CDA0C
  c->r[3]=R32(c->r[3]+0x00000008u); // 802CDA10
  cmps(c,0,(int32_t)c->r[3],0); // 802CDA14
  if (crb(c,0)) { goto L_802CDC08; } // 802CDA18
  c->r[4]=R32(c->r[24]+0x00000000u); // 802CDA1C
  cmps(c,0,(int32_t)c->r[4],0); // 802CDA20
  if (crb(c,2)) { goto L_802CDA30; } // 802CDA24
  c->r[0]=R32(c->r[4]+0x00000010u); // 802CDA28
  goto L_802CDA34; // 802CDA2C
L_802CDA30:;
  c->r[0]=0u+0x00000000u; // 802CDA30
L_802CDA34:;
  cmpu(c,0,c->r[3],c->r[0]); // 802CDA34
  if (!crb(c,2)) { goto L_802CDA8C; } // 802CDA38
  c->lr=0x802CDA40u; f_802C9620(c); // 802CDA3C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA40
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 802CDA44
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA48
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 802CDA4C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA50
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 802CDA54
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA58
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 802CDA5C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA60
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 802CDA64
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA68
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 802CDA6C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA70
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 802CDA74
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA78
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 802CDA7C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDA80
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 802CDA84
  goto L_802CDB44; // 802CDA88
L_802CDA8C:;
  c->r[3]=c->r[23]|c->r[23]; // 802CDA8C
  c->lr=0x802CDA94u; f_802B9D90(c); // 802CDA90
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CDA94
  c->r[6]=c->r[3]+0x00000048u; // 802CDA98
  c->r[4]=R32(c->r[25]+0x00000000u); // 802CDA9C
  c->r[3]=c->r[1]+0x00000008u; // 802CDAA0
  c->r[5]=R32(c->r[6]+0x00000024u); // 802CDAA4
  c->r[0]=R32(c->r[4]+0x00000008u); // 802CDAA8
  c->r[4]=c->r[6]+c->r[5]; // 802CDAAC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802CDAB0
  c->r[4]=c->r[4]+c->r[0]; // 802CDAB4
  c->r[4]=R32(c->r[4]+0x00000004u); // 802CDAB8
  c->lr=0x802CDAC0u; f_802B84A4(c); // 802CDABC
  c->r[4]=R32(c->r[24]+0x00000000u); // 802CDAC0
  c->r[5]=c->r[1]+0x000000A8u; // 802CDAC4
  c->r[3]=c->r[3]+0x000000A0u; // 802CDAC8
  c->r[4]=c->r[4]+0x00000070u; // 802CDACC
  c->lr=0x802CDAD4u; f_803535F4(c); // 802CDAD0
  c->r[3]=R32(c->r[25]+0x00000000u); // 802CDAD4
  c->r[3]=R32(c->r[3]+0x00000008u); // 802CDAD8
  c->lr=0x802CDAE0u; f_802C9620(c); // 802CDADC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 802CDAE0
  c->r[4]=c->r[1]+0x000000A8u; // 802CDAE4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802CDAE8
  c->r[5]=c->r[4]|c->r[4]; // 802CDAEC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CDAF0
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CDAF4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CDAF8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CDAFC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CDB00
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDB04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDB08
  c->r[3]=c->r[1]+0x00000078u; // 802CDB0C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 802CDB10
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 802CDB14
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[2]);} // 802CDB18
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[31]);} // 802CDB1C
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[3]);} // 802CDB20
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[4]);} // 802CDB24
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[5]);} // 802CDB28
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[31]);} // 802CDB2C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[6]);} // 802CDB30
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[7]);} // 802CDB34
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[8]);} // 802CDB38
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[31]);} // 802CDB3C
  c->lr=0x802CDB44u; f_803535F4(c); // 802CDB40
L_802CDB44:;
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CDB44
  c->r[3]=c->r[1]+0x0000005Cu; // 802CDB48
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDB4C
  c->r[4]=c->r[3]|c->r[3]; // 802CDB50
  {uint32_t ea=c->r[1]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDB54
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[31]);} // 802CDB58
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[31]);} // 802CDB5C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[31]);} // 802CDB60
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 802CDB64
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 802CDB68
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 802CDB6C
  c->lr=0x802CDB74u; f_80354444(c); // 802CDB70
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CDB74
  c->r[3]=c->r[1]+0x00000050u; // 802CDB78
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDB7C
  c->r[4]=c->r[3]|c->r[3]; // 802CDB80
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDB84
  {uint32_t ea=c->r[1]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 802CDB88
  {uint32_t ea=c->r[1]+0x000000BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 802CDB8C
  {uint32_t ea=c->r[1]+0x000000ACu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CDB90
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[2]);} // 802CDB94
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 802CDB98
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 802CDB9C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 802CDBA0
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[4]);} // 802CDBA4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[5]);} // 802CDBA8
  c->lr=0x802CDBB0u; f_80354444(c); // 802CDBAC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CDBB0
  c->r[3]=c->r[1]+0x00000044u; // 802CDBB4
  {uint32_t ea=c->r[1]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDBB8
  c->r[4]=c->r[3]|c->r[3]; // 802CDBBC
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDBC0
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CDBC4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CDBC8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CDBCC
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[2]);} // 802CDBD0
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 802CDBD4
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 802CDBD8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 802CDBDC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[4]);} // 802CDBE0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[5]);} // 802CDBE4
  c->lr=0x802CDBECu; f_80354444(c); // 802CDBE8
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CDBEC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDBF0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDBF4
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[2]);} // 802CDBF8
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 802CDBFC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 802CDC00
  goto L_802CDC14; // 802CDC04
L_802CDC08:;
  c->lr=0x802CDC0Cu; f_802C9998(c); // 802CDC08
  c->r[4]=c->r[1]+0x000000A8u; // 802CDC0C
  c->lr=0x802CDC14u; f_803535C0(c); // 802CDC10
L_802CDC14:;
  c->r[3]=R8(c->r[30]+0x00000000u); // 802CDC14
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802CDC18
  c->lr=0x802CDC20u; f_802C9860(c); // 802CDC1C
  cmps(c,0,(int32_t)c->r[3],0); // 802CDC20
  c->r[22]=c->r[3]|c->r[3]; // 802CDC24
  if (crb(c,2)) { goto L_802CDDA4; } // 802CDC28
  c->r[4]=R32(c->r[3]+0x00000000u); // 802CDC2C
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 802CDC30
  if (crb(c,2)) { goto L_802CDDA4; } // 802CDC34
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 802CDC38
  if (crb(c,2)) { goto L_802CDCC4; } // 802CDC3C
  c->r[4]=c->r[1]+0x00000038u; // 802CDC40
  c->lr=0x802CDC48u; f_802DC238(c); // 802CDC44
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDC48
  fcmp(c,0,c->f[31],c->f[0]); // 802CDC4C
  if (!crb(c,2)) { goto L_802CDD7C; } // 802CDC50
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDC54
  fcmp(c,0,c->f[31],c->f[0]); // 802CDC58
  if (!crb(c,2)) { goto L_802CDD7C; } // 802CDC5C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDC60
  fcmp(c,0,c->f[31],c->f[0]); // 802CDC64
  if (!crb(c,2)) { goto L_802CDD7C; } // 802CDC68
  c->r[3]=c->r[22]|c->r[22]; // 802CDC6C
  c->r[4]=c->r[1]+0x00000038u; // 802CDC70
  c->lr=0x802CDC78u; f_802DC21C(c); // 802CDC74
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDC78
  c->r[3]=c->r[1]+0x00000038u; // 802CDC7C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDC80
  c->r[4]=c->r[3]|c->r[3]; // 802CDC84
  c->f[2]=-c->f[0]; // 802CDC88
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDC8C
  c->f[3]=-c->f[1]; // 802CDC90
  c->f[4]=-c->f[0]; // 802CDC94
  c->f[0]=c->ps1[0]=S(c->f[2]); // 802CDC98
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 802CDC9C
  c->f[1]=c->ps1[1]=S(c->f[3]); // 802CDCA0
  c->f[2]=c->ps1[2]=S(c->f[4]); // 802CDCA4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 802CDCA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[3]);} // 802CDCAC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 802CDCB0
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 802CDCB4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 802CDCB8
  c->lr=0x802CDCC0u; f_80354444(c); // 802CDCBC
  goto L_802CDD7C; // 802CDCC0
L_802CDCC4:;
  c->r[3]=0u+0x00000000u; // 802CDCC4
  if (!crb(c,2)) { goto L_802CDCD8; } // 802CDCC8
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802CDCCC
  if (!crb(c,2)) { goto L_802CDCD8; } // 802CDCD0
  c->r[3]=0u+0x00000001u; // 802CDCD4
L_802CDCD8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CDCD8
  if (crb(c,2)) { goto L_802CDD38; } // 802CDCDC
  c->r[3]=c->r[22]|c->r[22]; // 802CDCE0
  c->r[4]=c->r[1]+0x00000038u; // 802CDCE4
  c->lr=0x802CDCECu; f_802DC21C(c); // 802CDCE8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDCEC
  c->r[3]=c->r[1]+0x00000038u; // 802CDCF0
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDCF4
  c->r[4]=c->r[3]|c->r[3]; // 802CDCF8
  c->f[2]=-c->f[0]; // 802CDCFC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDD00
  c->f[3]=-c->f[1]; // 802CDD04
  c->f[4]=-c->f[0]; // 802CDD08
  c->f[0]=c->ps1[0]=S(c->f[2]); // 802CDD0C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 802CDD10
  c->f[1]=c->ps1[1]=S(c->f[3]); // 802CDD14
  c->f[2]=c->ps1[2]=S(c->f[4]); // 802CDD18
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 802CDD1C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 802CDD20
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 802CDD24
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 802CDD28
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 802CDD2C
  c->lr=0x802CDD34u; f_80354444(c); // 802CDD30
  goto L_802CDD7C; // 802CDD34
L_802CDD38:;
  c->r[3]=c->r[22]|c->r[22]; // 802CDD38
  c->r[4]=c->r[1]+0x0000002Cu; // 802CDD3C
  c->lr=0x802CDD44u; f_802DC238(c); // 802CDD40
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CDD44
  c->r[3]=c->r[1]+0x00000038u; // 802CDD48
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CDD4C
  c->r[4]=c->r[3]|c->r[3]; // 802CDD50
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[0]); // 802CDD54
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CDD58
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802CDD5C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802CDD60
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 802CDD64
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 802CDD68
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 802CDD6C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[1]);} // 802CDD70
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 802CDD74
  c->lr=0x802CDD7Cu; f_80354444(c); // 802CDD78
L_802CDD7C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 802CDD7C
  c->r[3]=c->r[27]|c->r[27]; // 802CDD80
  c->r[4]=c->r[26]|c->r[26]; // 802CDD84
  c->r[5]=c->r[1]+0x00000038u; // 802CDD88
  c->r[12]=R32(c->r[12]+0x00000014u); // 802CDD8C
  c->r[6]=c->r[1]+0x000000A8u; // 802CDD90
  c->r[7]=R32(c->r[31]+0x00000000u); // 802CDD94
  c->ctr=c->r[12]; // 802CDD98
  if (true) { c->lr=0x802CDDA0u; dispatch(c,c->ctr); } // 802CDD9C
  goto L_802CDDC8; // 802CDDA0
L_802CDDA4:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 802CDDA4
  c->r[3]=c->r[27]|c->r[27]; // 802CDDA8
  c->r[4]=c->r[26]|c->r[26]; // 802CDDAC
  c->r[6]=c->r[1]+0x000000A8u; // 802CDDB0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802CDDB4
  c->r[5]=0u+0x00000000u; // 802CDDB8
  c->r[7]=R32(c->r[31]+0x00000000u); // 802CDDBC
  c->ctr=c->r[12]; // 802CDDC0
  if (true) { c->lr=0x802CDDC8u; dispatch(c,c->ctr); } // 802CDDC4
L_802CDDC8:;
  c->r[28]=c->r[28]+0x00000001u; // 802CDDC8
  c->r[30]=c->r[30]+0x00000001u; // 802CDDCC
  cmpu(c,0,c->r[28],0x00000003u); // 802CDDD0
  c->r[31]=c->r[31]+0x00000004u; // 802CDDD4
  if (crb(c,0)) { IRQCHK(c); goto L_802CD9F0; } // 802CDDD8
  c->r[3]=c->r[27]|c->r[27]; // 802CDDDC
L_802CDDE0:;
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,31,ea,0,0);} // 802CDDE0
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 802CDDE4
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,30,ea,0,0);} // 802CDDE8
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 802CDDEC
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,29,ea,0,0);} // 802CDDF0
  c->r[11]=c->r[1]+0x00000100u; // 802CDDF4
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 802CDDF8
  c->lr=0x802CDE00u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CDDFC
  c->r[0]=R32(c->r[1]+0x00000134u); // 802CDE00
  c->lr=c->r[0]; // 802CDE04
  c->r[1]=c->r[1]+0x00000130u; // 802CDE08
  return; // 802CDE0C
}

// fn_802CDE10
void f_802CDE10(Ctx* __restrict c) {
  c->r[6]=R32(c->r[4]+0x00000008u); // 802CDE10
  cmps(c,0,(int32_t)c->r[6],0); // 802CDE14
  if (crb(c,2)) { goto L_802CDE2C; } // 802CDE18
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)260); // 802CDE1C
  c->r[0]=c->r[6]+c->r[0]; // 802CDE20
  W32(c->r[3]+0x00000000u,c->r[0]); // 802CDE24
  goto L_802CDE34; // 802CDE28
L_802CDE2C:;
  c->r[0]=0u+0x00000000u; // 802CDE2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 802CDE30
L_802CDE34:;
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 802CDE34
  cmps(c,0,(int32_t)c->r[6],0); // 802CDE38
  if (crb(c,2)) { goto L_802CDE50; } // 802CDE3C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)100); // 802CDE40
  c->r[0]=c->r[6]+c->r[0]; // 802CDE44
  W32(c->r[3]+0x00000004u,c->r[0]); // 802CDE48
  goto L_802CDE58; // 802CDE4C
L_802CDE50:;
  c->r[0]=0u+0x00000000u; // 802CDE50
  W32(c->r[3]+0x00000004u,c->r[0]); // 802CDE54
L_802CDE58:;
  c->r[6]=R32(c->r[4]+0x00000010u); // 802CDE58
  cmps(c,0,(int32_t)c->r[6],0); // 802CDE5C
  if (crb(c,2)) { goto L_802CDE74; } // 802CDE60
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)584); // 802CDE64
  c->r[0]=c->r[6]+c->r[0]; // 802CDE68
  W32(c->r[3]+0x00000028u,c->r[0]); // 802CDE6C
  goto L_802CDE7C; // 802CDE70
L_802CDE74:;
  c->r[0]=0u+0x00000000u; // 802CDE74
  W32(c->r[3]+0x00000028u,c->r[0]); // 802CDE78
L_802CDE7C:;
  c->r[6]=R32(c->r[4]+0x00000014u); // 802CDE7C
  cmps(c,0,(int32_t)c->r[6],0); // 802CDE80
  if (crb(c,2)) { goto L_802CDE98; } // 802CDE84
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)40); // 802CDE88
  c->r[0]=c->r[6]+c->r[0]; // 802CDE8C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802CDE90
  goto L_802CDEA0; // 802CDE94
L_802CDE98:;
  c->r[0]=0u+0x00000000u; // 802CDE98
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 802CDE9C
L_802CDEA0:;
  c->r[6]=R32(c->r[4]+0x00000018u); // 802CDEA0
  cmps(c,0,(int32_t)c->r[6],0); // 802CDEA4
  if (crb(c,2)) { goto L_802CDEBC; } // 802CDEA8
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 802CDEAC
  c->r[0]=c->r[6]+c->r[0]; // 802CDEB0
  W32(c->r[3]+0x00000008u,c->r[0]); // 802CDEB4
  goto L_802CDEC4; // 802CDEB8
L_802CDEBC:;
  c->r[0]=0u+0x00000000u; // 802CDEBC
  W32(c->r[3]+0x00000008u,c->r[0]); // 802CDEC0
L_802CDEC4:;
  c->r[6]=R32(c->r[4]+0x0000001Cu); // 802CDEC4
  cmps(c,0,(int32_t)c->r[6],0); // 802CDEC8
  if (crb(c,2)) { goto L_802CDEE0; } // 802CDECC
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)12); // 802CDED0
  c->r[0]=c->r[6]+c->r[0]; // 802CDED4
  W32(c->r[3]+0x00000024u,c->r[0]); // 802CDED8
  goto L_802CDEE8; // 802CDEDC
L_802CDEE0:;
  c->r[0]=0u+0x00000000u; // 802CDEE0
  W32(c->r[3]+0x00000024u,c->r[0]); // 802CDEE4
L_802CDEE8:;
  c->r[6]=R32(c->r[4]+0x00000020u); // 802CDEE8
  cmps(c,0,(int32_t)c->r[6],0); // 802CDEEC
  if (crb(c,2)) { goto L_802CDF04; } // 802CDEF0
  c->r[0]=rotl(c->r[5],5)&0xFFFFFFE0u; // 802CDEF4
  c->r[0]=c->r[6]+c->r[0]; // 802CDEF8
  W32(c->r[3]+0x00000010u,c->r[0]); // 802CDEFC
  goto L_802CDF0C; // 802CDF00
L_802CDF04:;
  c->r[0]=0u+0x00000000u; // 802CDF04
  W32(c->r[3]+0x00000010u,c->r[0]); // 802CDF08
L_802CDF0C:;
  c->r[6]=R32(c->r[4]+0x00000024u); // 802CDF0C
  cmps(c,0,(int32_t)c->r[6],0); // 802CDF10
  if (crb(c,2)) { goto L_802CDF28; } // 802CDF14
  c->r[0]=rotl(c->r[5],7)&0xFFFFFF80u; // 802CDF18
  c->r[0]=c->r[6]+c->r[0]; // 802CDF1C
  W32(c->r[3]+0x00000014u,c->r[0]); // 802CDF20
  goto L_802CDF30; // 802CDF24
L_802CDF28:;
  c->r[0]=0u+0x00000000u; // 802CDF28
  W32(c->r[3]+0x00000014u,c->r[0]); // 802CDF2C
L_802CDF30:;
  c->r[6]=R32(c->r[4]+0x00000028u); // 802CDF30
  cmps(c,0,(int32_t)c->r[6],0); // 802CDF34
  if (crb(c,2)) { goto L_802CDF4C; } // 802CDF38
  c->r[0]=rotl(c->r[5],6)&0xFFFFFFC0u; // 802CDF3C
  c->r[0]=c->r[6]+c->r[0]; // 802CDF40
  W32(c->r[3]+0x00000018u,c->r[0]); // 802CDF44
  goto L_802CDF54; // 802CDF48
L_802CDF4C:;
  c->r[0]=0u+0x00000000u; // 802CDF4C
  W32(c->r[3]+0x00000018u,c->r[0]); // 802CDF50
L_802CDF54:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 802CDF54
  cmps(c,0,(int32_t)c->r[6],0); // 802CDF58
  if (crb(c,2)) { goto L_802CDF70; } // 802CDF5C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)160); // 802CDF60
  c->r[0]=c->r[6]+c->r[0]; // 802CDF64
  W32(c->r[3]+0x00000020u,c->r[0]); // 802CDF68
  goto L_802CDF78; // 802CDF6C
L_802CDF70:;
  c->r[0]=0u+0x00000000u; // 802CDF70
  W32(c->r[3]+0x00000020u,c->r[0]); // 802CDF74
L_802CDF78:;
  c->r[6]=R32(c->r[4]+0x00000030u); // 802CDF78
  cmps(c,0,(int32_t)c->r[6],0); // 802CDF7C
  if (crb(c,2)) { goto L_802CDF94; } // 802CDF80
  c->r[0]=rotl(c->r[5],9)&0xFFFFFE00u; // 802CDF84
  c->r[0]=c->r[6]+c->r[0]; // 802CDF88
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802CDF8C
  goto L_802CDF9C; // 802CDF90
L_802CDF94:;
  c->r[0]=0u+0x00000000u; // 802CDF94
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802CDF98
L_802CDF9C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 802CDF9C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802CDFA0
  if (crb(c,2)) { goto L_802CDFBC; } // 802CDFA4
  c->r[0]=0u+0x00000000u; // 802CDFA8
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802CDFAC
  W32(c->r[3]+0x00000030u,c->r[0]); // 802CDFB0
  W32(c->r[3]+0x00000034u,c->r[0]); // 802CDFB4
  return; // 802CDFB8
L_802CDFBC:;
  c->r[0]=R32(c->r[4]+0x00000034u); // 802CDFBC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 802CDFC0
  c->r[0]=R32(c->r[4]+0x00000038u); // 802CDFC4
  W32(c->r[3]+0x00000030u,c->r[0]); // 802CDFC8
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 802CDFCC
  W32(c->r[3]+0x00000034u,c->r[0]); // 802CDFD0
  return; // 802CDFD4
}

// fn_802CDFD8
void f_802CDFD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CDFD8
  c->r[0]=c->lr; // 802CDFDC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CDFE0
  c->r[11]=c->r[1]+0x00000050u; // 802CDFE4
  c->lr=0x802CDFECu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CDFE8
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 802CDFEC
  c->r[29]=c->r[3]|c->r[3]; // 802CDFF0
  c->r[30]=c->r[4]|c->r[4]; // 802CDFF4
  c->r[28]=0u+0x00000000u; // 802CDFF8
  c->r[31]=0u+0x00000001u; // 802CDFFC
  if (crb(c,2)) { goto L_802CE008; } // 802CE000
  c->r[31]=c->r[31]|0x00000008u; // 802CE004
L_802CE008:;
  c->r[0]=rotl(c->r[5],0)&0x00000004u; cr0(c,c->r[0]); // 802CE008
  if (crb(c,2)) { goto L_802CE014; } // 802CE00C
  c->r[31]=c->r[31]|0x00000010u; // 802CE010
L_802CE014:;
  c->r[22]=c->r[31]|0x00000010u; // 802CE014
  c->r[25]=c->r[1]+0x00000008u; // 802CE018
  c->r[24]=c->r[1]+0x0000000Cu; // 802CE01C
  c->r[23]=c->r[1]+0x00000010u; // 802CE020
  goto L_802CE0E8; // 802CE024
L_802CE028:;
  c->r[0]=R8(c->r[30]+0x00000005u); // 802CE028
  c->r[3]=c->r[29]|c->r[29]; // 802CE02C
  c->r[4]=R8(c->r[30]+0x00000006u); // 802CE030
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802CE034
  c->lr=0x802CE03Cu; f_802B84A4(c); // 802CE038
  cmps(c,0,(int32_t)c->r[3],0); // 802CE03C
  c->r[26]=c->r[3]|c->r[3]; // 802CE040
  if (crb(c,2)) { goto L_802CE054; } // 802CE044
  c->r[0]=R32(c->r[3]+0x00000014u); // 802CE048
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 802CE04C
  goto L_802CE058; // 802CE050
L_802CE054:;
  c->r[0]=0u+0x00000000u; // 802CE054
L_802CE058:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CE058
  if (crb(c,2)) { goto L_802CE0E4; } // 802CE05C
  c->r[0]=R8(c->r[30]+0x00000001u); // 802CE060
  c->r[3]=c->r[29]|c->r[29]; // 802CE064
  c->r[4]=R8(c->r[30]+0x00000002u); // 802CE068
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802CE06C
  c->lr=0x802CE074u; f_802B89FC(c); // 802CE070
  c->r[0]=R8(c->r[30]+0x00000003u); // 802CE074
  c->r[27]=c->r[3]|c->r[3]; // 802CE078
  c->r[4]=R8(c->r[30]+0x00000004u); // 802CE07C
  c->r[3]=c->r[29]|c->r[29]; // 802CE080
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802CE084
  c->lr=0x802CE08Cu; f_802B8AD8(c); // 802CE088
  cmpu(c,0,c->r[27],c->r[28]); // 802CE08C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802CE090
  c->r[28]=c->r[31]|c->r[31]; // 802CE094
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 802CE098
  W32(c->r[1]+0x00000010u,c->r[27]); // 802CE09C
  if (!crb(c,2)) { goto L_802CE0A8; } // 802CE0A0
  c->r[28]=c->r[22]|c->r[22]; // 802CE0A4
L_802CE0A8:;
  W32(c->r[1]+0x00000014u,c->r[3]); // 802CE0A8
  c->r[3]=c->r[23]|c->r[23]; // 802CE0AC
  c->r[4]=c->r[24]|c->r[24]; // 802CE0B0
  c->r[5]=c->r[25]|c->r[25]; // 802CE0B4
  W32(c->r[1]+0x00000018u,c->r[27]); // 802CE0B8
  c->lr=0x802CE0C0u; f_802CD8F4(c); // 802CE0BC
  c->r[9]=c->r[3]|c->r[3]; // 802CE0C0
  c->r[7]=c->r[28]|c->r[28]; // 802CE0C4
  c->r[3]=c->r[1]+0x00000018u; // 802CE0C8
  c->r[4]=c->r[1]+0x00000014u; // 802CE0CC
  c->r[5]=0u+0x00000000u; // 802CE0D0
  c->r[6]=0u+0x00000000u; // 802CE0D4
  c->r[8]=0u+0x00000000u; // 802CE0D8
  c->lr=0x802CE0E0u; f_802CA7F8(c); // 802CE0DC
  c->r[28]=c->r[27]|c->r[27]; // 802CE0E0
L_802CE0E4:;
  c->r[30]=c->r[30]+0x00000008u; // 802CE0E4
L_802CE0E8:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 802CE0E8
  cmpu(c,0,c->r[0],0x00000001u); // 802CE0EC
  if (!crb(c,2)) { IRQCHK(c); goto L_802CE028; } // 802CE0F0
  c->r[11]=c->r[1]+0x00000050u; // 802CE0F4
  c->lr=0x802CE0FCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CE0F8
  c->r[0]=R32(c->r[1]+0x00000054u); // 802CE0FC
  c->lr=c->r[0]; // 802CE100
  c->r[1]=c->r[1]+0x00000050u; // 802CE104
  return; // 802CE108
}

// fn_802CE10C
void f_802CE10C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CE10C
  c->r[0]=c->lr; // 802CE110
  W32(c->r[1]+0x00000094u,c->r[0]); // 802CE114
  c->r[11]=c->r[1]+0x00000090u; // 802CE118
  c->lr=0x802CE120u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CE11C
  c->r[26]=0u+0x00000000u; // 802CE120
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 802CE124
  W32(c->r[1]+0x00000020u,c->r[26]); // 802CE128
  c->r[22]=c->r[3]|c->r[3]; // 802CE12C
  c->r[23]=c->r[4]|c->r[4]; // 802CE130
  c->r[24]=c->r[5]|c->r[5]; // 802CE134
  W32(c->r[1]+0x00000024u,c->r[26]); // 802CE138
  c->r[25]=0u+0x00000001u; // 802CE13C
  W32(c->r[1]+0x00000028u,c->r[26]); // 802CE140
  W32(c->r[1]+0x0000002Cu,c->r[26]); // 802CE144
  W32(c->r[1]+0x00000030u,c->r[26]); // 802CE148
  W32(c->r[1]+0x00000034u,c->r[26]); // 802CE14C
  W32(c->r[1]+0x00000038u,c->r[26]); // 802CE150
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 802CE154
  W32(c->r[1]+0x00000040u,c->r[26]); // 802CE158
  W32(c->r[1]+0x00000044u,c->r[26]); // 802CE15C
  W32(c->r[1]+0x00000048u,c->r[26]); // 802CE160
  W32(c->r[1]+0x0000004Cu,c->r[26]); // 802CE164
  W32(c->r[1]+0x00000050u,c->r[26]); // 802CE168
  W32(c->r[1]+0x00000054u,c->r[26]); // 802CE16C
  if (crb(c,2)) { goto L_802CE178; } // 802CE170
  c->r[25]=c->r[25]|0x00000008u; // 802CE174
L_802CE178:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 802CE178
  if (crb(c,2)) { goto L_802CE184; } // 802CE17C
  c->r[25]=c->r[25]|0x00000010u; // 802CE180
L_802CE184:;
  c->r[27]=c->r[25]|0x00000010u; // 802CE184
  c->r[30]=c->r[1]+0x00000008u; // 802CE188
  c->r[29]=c->r[1]+0x0000000Cu; // 802CE18C
  c->r[28]=c->r[1]+0x00000010u; // 802CE190
  goto L_802CE2A0; // 802CE194
L_802CE198:;
  c->r[0]=R8(c->r[23]+0x00000005u); // 802CE198
  c->r[3]=c->r[22]|c->r[22]; // 802CE19C
  c->r[4]=R8(c->r[23]+0x00000006u); // 802CE1A0
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802CE1A4
  c->lr=0x802CE1ACu; f_802B84A4(c); // 802CE1A8
  c->r[4]=R32(c->r[24]+0x00000004u); // 802CE1AC
  c->r[31]=c->r[3]|c->r[3]; // 802CE1B0
  cmps(c,0,(int32_t)c->r[4],0); // 802CE1B4
  if (crb(c,2)) { goto L_802CE1E4; } // 802CE1B8
  cmps(c,0,(int32_t)c->r[3],0); // 802CE1BC
  if (crb(c,2)) { goto L_802CE1CC; } // 802CE1C0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802CE1C4
  goto L_802CE1D0; // 802CE1C8
L_802CE1CC:;
  c->r[0]=0u+0x00000000u; // 802CE1CC
L_802CE1D0:;
  c->r[3]=R8(c->r[4]+c->r[0]); // 802CE1D0
  c->r[0]=0u-c->r[3]; // 802CE1D4
  c->r[0]=c->r[0]|c->r[3]; // 802CE1D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802CE1DC
  goto L_802CE1FC; // 802CE1E0
L_802CE1E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CE1E4
  if (crb(c,2)) { goto L_802CE1F8; } // 802CE1E8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802CE1EC
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 802CE1F0
  goto L_802CE1FC; // 802CE1F4
L_802CE1F8:;
  c->r[0]=0u+0x00000000u; // 802CE1F8
L_802CE1FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CE1FC
  if (crb(c,2)) { goto L_802CE29C; } // 802CE200
  c->r[0]=R8(c->r[23]+0x00000001u); // 802CE204
  c->r[3]=c->r[22]|c->r[22]; // 802CE208
  c->r[4]=R8(c->r[23]+0x00000002u); // 802CE20C
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802CE210
  c->lr=0x802CE218u; f_802B89FC(c); // 802CE214
  c->r[0]=R8(c->r[23]+0x00000003u); // 802CE218
  c->r[20]=c->r[3]|c->r[3]; // 802CE21C
  c->r[4]=R8(c->r[23]+0x00000004u); // 802CE220
  c->r[3]=c->r[22]|c->r[22]; // 802CE224
  c->r[4]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[4]&~0x0000FF00u); // 802CE228
  c->lr=0x802CE230u; f_802B8AD8(c); // 802CE22C
  c->r[5]=R32(c->r[20]+0x0000000Cu); // 802CE230
  c->r[21]=c->r[3]|c->r[3]; // 802CE234
  c->r[4]=c->r[24]|c->r[24]; // 802CE238
  c->r[3]=c->r[1]+0x00000020u; // 802CE23C
  c->lr=0x802CE244u; f_802CDE10(c); // 802CE240
  cmpu(c,0,c->r[20],c->r[26]); // 802CE244
  W32(c->r[1]+0x00000008u,c->r[21]); // 802CE248
  c->r[26]=c->r[25]|c->r[25]; // 802CE24C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CE250
  W32(c->r[1]+0x00000010u,c->r[20]); // 802CE254
  if (!crb(c,2)) { goto L_802CE260; } // 802CE258
  c->r[26]=c->r[27]|c->r[27]; // 802CE25C
L_802CE260:;
  W32(c->r[1]+0x00000014u,c->r[21]); // 802CE260
  c->r[3]=c->r[28]|c->r[28]; // 802CE264
  c->r[4]=c->r[29]|c->r[29]; // 802CE268
  c->r[5]=c->r[30]|c->r[30]; // 802CE26C
  W32(c->r[1]+0x00000018u,c->r[20]); // 802CE270
  c->lr=0x802CE278u; f_802CD8F4(c); // 802CE274
  c->r[9]=c->r[3]|c->r[3]; // 802CE278
  c->r[7]=c->r[26]|c->r[26]; // 802CE27C
  c->r[3]=c->r[1]+0x00000018u; // 802CE280
  c->r[4]=c->r[1]+0x00000014u; // 802CE284
  c->r[8]=c->r[1]+0x00000020u; // 802CE288
  c->r[5]=0u+0x00000000u; // 802CE28C
  c->r[6]=0u+0x00000000u; // 802CE290
  c->lr=0x802CE298u; f_802CA7F8(c); // 802CE294
  c->r[26]=c->r[20]|c->r[20]; // 802CE298
L_802CE29C:;
  c->r[23]=c->r[23]+0x00000008u; // 802CE29C
L_802CE2A0:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 802CE2A0
  cmpu(c,0,c->r[0],0x00000001u); // 802CE2A4
  if (!crb(c,2)) { IRQCHK(c); goto L_802CE198; } // 802CE2A8
  c->r[11]=c->r[1]+0x00000090u; // 802CE2AC
  c->lr=0x802CE2B4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CE2B0
  c->r[0]=R32(c->r[1]+0x00000094u); // 802CE2B4
  c->lr=c->r[0]; // 802CE2B8
  c->r[1]=c->r[1]+0x00000090u; // 802CE2BC
  return; // 802CE2C0
}

// fn_802CE2C4
void f_802CE2C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CE2C4
  c->r[0]=c->lr; // 802CE2C8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CE2CC
  c->r[11]=c->r[1]+0x00000050u; // 802CE2D0
  c->lr=0x802CE2D8u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CE2D4
  c->r[0]=rotl(c->r[6],0)&0x00000008u; cr0(c,c->r[0]); // 802CE2D8
  c->r[20]=c->r[3]|c->r[3]; // 802CE2DC
  c->r[21]=c->r[5]|c->r[5]; // 802CE2E0
  c->r[31]=0u+0x00000000u; // 802CE2E4
  c->r[22]=0u+0x00000001u; // 802CE2E8
  if (crb(c,2)) { goto L_802CE2F4; } // 802CE2EC
  c->r[22]=c->r[22]|0x00000008u; // 802CE2F0
L_802CE2F4:;
  c->r[0]=rotl(c->r[6],0)&0x00000004u; cr0(c,c->r[0]); // 802CE2F4
  if (crb(c,2)) { goto L_802CE300; } // 802CE2F8
  c->r[22]=c->r[22]|0x00000010u; // 802CE2FC
L_802CE300:;
  cmps(c,0,(int32_t)c->r[5],0); // 802CE300
  c->r[23]=0u+0x00000000u; // 802CE304
  if (crb(c,2)) { goto L_802CE3B8; } // 802CE308
  c->r[25]=c->r[4]|c->r[4]; // 802CE30C
  c->r[28]=c->r[1]+0x00000008u; // 802CE310
  c->r[27]=c->r[1]+0x0000000Cu; // 802CE314
  c->r[26]=c->r[1]+0x00000010u; // 802CE318
  c->r[24]=c->r[22]|0x00000010u; // 802CE31C
  goto L_802CE3B0; // 802CE320
L_802CE324:;
  c->r[4]=R16(c->r[25]+0x00000008u); // 802CE324
  c->r[3]=c->r[20]|c->r[20]; // 802CE328
  c->lr=0x802CE330u; f_802B89FC(c); // 802CE32C
  c->r[4]=R16(c->r[25]+0x0000000Au); // 802CE330
  c->r[29]=c->r[3]|c->r[3]; // 802CE334
  c->r[3]=c->r[20]|c->r[20]; // 802CE338
  c->lr=0x802CE340u; f_802B8AD8(c); // 802CE33C
  c->r[4]=R16(c->r[25]+0x00000006u); // 802CE340
  c->r[30]=c->r[3]|c->r[3]; // 802CE344
  c->r[3]=c->r[20]|c->r[20]; // 802CE348
  c->lr=0x802CE350u; f_802B84A4(c); // 802CE34C
  cmpu(c,0,c->r[29],c->r[31]); // 802CE350
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CE354
  c->r[31]=c->r[22]|c->r[22]; // 802CE358
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802CE35C
  W32(c->r[1]+0x00000010u,c->r[29]); // 802CE360
  if (!crb(c,2)) { goto L_802CE36C; } // 802CE364
  c->r[31]=c->r[24]|c->r[24]; // 802CE368
L_802CE36C:;
  W32(c->r[1]+0x00000014u,c->r[30]); // 802CE36C
  c->r[3]=c->r[26]|c->r[26]; // 802CE370
  c->r[4]=c->r[27]|c->r[27]; // 802CE374
  c->r[5]=c->r[28]|c->r[28]; // 802CE378
  W32(c->r[1]+0x00000018u,c->r[29]); // 802CE37C
  c->lr=0x802CE384u; f_802CD8F4(c); // 802CE380
  c->r[9]=c->r[3]|c->r[3]; // 802CE384
  c->r[7]=c->r[31]|c->r[31]; // 802CE388
  c->r[3]=c->r[1]+0x00000018u; // 802CE38C
  c->r[4]=c->r[1]+0x00000014u; // 802CE390
  c->r[5]=0u+0x00000000u; // 802CE394
  c->r[6]=0u+0x00000000u; // 802CE398
  c->r[8]=0u+0x00000000u; // 802CE39C
  c->lr=0x802CE3A4u; f_802CA7F8(c); // 802CE3A0
  c->r[31]=c->r[29]|c->r[29]; // 802CE3A4
  c->r[25]=c->r[25]+0x0000000Cu; // 802CE3A8
  c->r[23]=c->r[23]+0x00000001u; // 802CE3AC
L_802CE3B0:;
  cmpu(c,0,c->r[23],c->r[21]); // 802CE3B0
  if (crb(c,0)) { IRQCHK(c); goto L_802CE324; } // 802CE3B4
L_802CE3B8:;
  c->r[11]=c->r[1]+0x00000050u; // 802CE3B8
  c->lr=0x802CE3C0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CE3BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 802CE3C0
  c->lr=c->r[0]; // 802CE3C4
  c->r[1]=c->r[1]+0x00000050u; // 802CE3C8
  return; // 802CE3CC
}

// fn_802CE3D0
void f_802CE3D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CE3D0
  c->r[0]=c->lr; // 802CE3D4
  W32(c->r[1]+0x00000094u,c->r[0]); // 802CE3D8
  c->r[11]=c->r[1]+0x00000090u; // 802CE3DC
  c->lr=0x802CE3E4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CE3E0
  c->r[31]=0u+0x00000000u; // 802CE3E4
  c->r[0]=rotl(c->r[7],0)&0x00000008u; cr0(c,c->r[0]); // 802CE3E8
  W32(c->r[1]+0x00000020u,c->r[31]); // 802CE3EC
  c->r[18]=c->r[3]|c->r[3]; // 802CE3F0
  c->r[19]=c->r[5]|c->r[5]; // 802CE3F4
  c->r[20]=c->r[6]|c->r[6]; // 802CE3F8
  W32(c->r[1]+0x00000024u,c->r[31]); // 802CE3FC
  c->r[21]=0u+0x00000001u; // 802CE400
  W32(c->r[1]+0x00000028u,c->r[31]); // 802CE404
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802CE408
  W32(c->r[1]+0x00000030u,c->r[31]); // 802CE40C
  W32(c->r[1]+0x00000034u,c->r[31]); // 802CE410
  W32(c->r[1]+0x00000038u,c->r[31]); // 802CE414
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802CE418
  W32(c->r[1]+0x00000040u,c->r[31]); // 802CE41C
  W32(c->r[1]+0x00000044u,c->r[31]); // 802CE420
  W32(c->r[1]+0x00000048u,c->r[31]); // 802CE424
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802CE428
  W32(c->r[1]+0x00000050u,c->r[31]); // 802CE42C
  W32(c->r[1]+0x00000054u,c->r[31]); // 802CE430
  if (crb(c,2)) { goto L_802CE43C; } // 802CE434
  c->r[21]=c->r[21]|0x00000008u; // 802CE438
L_802CE43C:;
  c->r[0]=rotl(c->r[7],0)&0x00000004u; cr0(c,c->r[0]); // 802CE43C
  if (crb(c,2)) { goto L_802CE448; } // 802CE440
  c->r[21]=c->r[21]|0x00000010u; // 802CE444
L_802CE448:;
  cmps(c,0,(int32_t)c->r[5],0); // 802CE448
  c->r[22]=0u+0x00000000u; // 802CE44C
  if (crb(c,2)) { goto L_802CE514; } // 802CE450
  c->r[24]=c->r[4]|c->r[4]; // 802CE454
  c->r[27]=c->r[1]+0x00000008u; // 802CE458
  c->r[26]=c->r[1]+0x0000000Cu; // 802CE45C
  c->r[25]=c->r[1]+0x00000010u; // 802CE460
  c->r[23]=c->r[21]|0x00000010u; // 802CE464
  goto L_802CE50C; // 802CE468
L_802CE46C:;
  c->r[4]=R16(c->r[24]+0x00000008u); // 802CE46C
  c->r[3]=c->r[18]|c->r[18]; // 802CE470
  c->lr=0x802CE478u; f_802B89FC(c); // 802CE474
  c->r[4]=R16(c->r[24]+0x0000000Au); // 802CE478
  c->r[28]=c->r[3]|c->r[3]; // 802CE47C
  c->r[3]=c->r[18]|c->r[18]; // 802CE480
  c->lr=0x802CE488u; f_802B8AD8(c); // 802CE484
  c->r[4]=R16(c->r[24]+0x00000006u); // 802CE488
  c->r[29]=c->r[3]|c->r[3]; // 802CE48C
  c->r[3]=c->r[18]|c->r[18]; // 802CE490
  c->lr=0x802CE498u; f_802B84A4(c); // 802CE494
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 802CE498
  c->r[30]=c->r[3]|c->r[3]; // 802CE49C
  c->r[4]=c->r[20]|c->r[20]; // 802CE4A0
  c->r[3]=c->r[1]+0x00000020u; // 802CE4A4
  c->lr=0x802CE4ACu; f_802CDE10(c); // 802CE4A8
  cmpu(c,0,c->r[28],c->r[31]); // 802CE4AC
  W32(c->r[1]+0x00000008u,c->r[29]); // 802CE4B0
  c->r[31]=c->r[21]|c->r[21]; // 802CE4B4
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 802CE4B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802CE4BC
  if (!crb(c,2)) { goto L_802CE4C8; } // 802CE4C0
  c->r[31]=c->r[23]|c->r[23]; // 802CE4C4
L_802CE4C8:;
  W32(c->r[1]+0x00000014u,c->r[29]); // 802CE4C8
  c->r[3]=c->r[25]|c->r[25]; // 802CE4CC
  c->r[4]=c->r[26]|c->r[26]; // 802CE4D0
  c->r[5]=c->r[27]|c->r[27]; // 802CE4D4
  W32(c->r[1]+0x00000018u,c->r[28]); // 802CE4D8
  c->lr=0x802CE4E0u; f_802CD8F4(c); // 802CE4DC
  c->r[9]=c->r[3]|c->r[3]; // 802CE4E0
  c->r[7]=c->r[31]|c->r[31]; // 802CE4E4
  c->r[3]=c->r[1]+0x00000018u; // 802CE4E8
  c->r[4]=c->r[1]+0x00000014u; // 802CE4EC
  c->r[8]=c->r[1]+0x00000020u; // 802CE4F0
  c->r[5]=0u+0x00000000u; // 802CE4F4
  c->r[6]=0u+0x00000000u; // 802CE4F8
  c->lr=0x802CE500u; f_802CA7F8(c); // 802CE4FC
  c->r[31]=c->r[28]|c->r[28]; // 802CE500
  c->r[24]=c->r[24]+0x0000000Cu; // 802CE504
  c->r[22]=c->r[22]+0x00000001u; // 802CE508
L_802CE50C:;
  cmpu(c,0,c->r[22],c->r[19]); // 802CE50C
  if (crb(c,0)) { IRQCHK(c); goto L_802CE46C; } // 802CE510
L_802CE514:;
  c->r[11]=c->r[1]+0x00000090u; // 802CE514
  c->lr=0x802CE51Cu; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CE518
  c->r[0]=R32(c->r[1]+0x00000094u); // 802CE51C
  c->lr=c->r[0]; // 802CE520
  c->r[1]=c->r[1]+0x00000090u; // 802CE524
  return; // 802CE528
}

// SetUpMdlZ__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FPUlQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCUcPQ34nw4r3g3d21DrawResMdlReplacement
void f_802CE52C(Ctx* __restrict c) {
  trace_call(0x802CE52Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CE52C
  c->r[0]=c->lr; // 802CE530
  W32(c->r[1]+0x00000034u,c->r[0]); // 802CE534
  c->r[11]=c->r[1]+0x00000030u; // 802CE538
  c->lr=0x802CE540u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CE53C
  c->r[24]=c->r[3]|c->r[3]; // 802CE540
  c->r[25]=c->r[4]|c->r[4]; // 802CE544
  c->r[26]=c->r[5]|c->r[5]; // 802CE548
  c->r[27]=c->r[6]|c->r[6]; // 802CE54C
  c->r[28]=c->r[7]|c->r[7]; // 802CE550
  c->r[30]=0u+0x00000000u; // 802CE554
  c->lr=0x802CE55Cu; f_802CD030(c); // 802CE558
  c->r[29]=c->r[3]|c->r[3]; // 802CE55C
  c->r[31]=c->r[29]|c->r[29]; // 802CE560
  goto L_802CE638; // 802CE564
L_802CE568:;
  c->r[0]=R8(c->r[27]+0x00000005u); // 802CE568
  c->r[3]=c->r[25]|c->r[25]; // 802CE56C
  c->r[23]=R8(c->r[27]+0x00000006u); // 802CE570
  c->r[23]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[23]&~0x0000FF00u); // 802CE574
  c->r[4]=c->r[23]|c->r[23]; // 802CE578
  c->lr=0x802CE580u; f_802B84A4(c); // 802CE57C
  cmps(c,0,(int32_t)c->r[28],0); // 802CE580
  if (crb(c,2)) { goto L_802CE594; } // 802CE584
  c->r[4]=R32(c->r[28]+0x00000004u); // 802CE588
  cmps(c,0,(int32_t)c->r[4],0); // 802CE58C
  if (!crb(c,2)) { goto L_802CE5B0; } // 802CE590
L_802CE594:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CE594
  if (crb(c,2)) { goto L_802CE5A8; } // 802CE598
  c->r[0]=R32(c->r[3]+0x00000014u); // 802CE59C
  c->r[0]=rotl(c->r[0],24)&0x00000001u; // 802CE5A0
  goto L_802CE5D4; // 802CE5A4
L_802CE5A8:;
  c->r[0]=0u+0x00000000u; // 802CE5A8
  goto L_802CE5D4; // 802CE5AC
L_802CE5B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802CE5B0
  if (crb(c,2)) { goto L_802CE5C0; } // 802CE5B4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802CE5B8
  goto L_802CE5C4; // 802CE5BC
L_802CE5C0:;
  c->r[0]=0u+0x00000000u; // 802CE5C0
L_802CE5C4:;
  c->r[4]=R8(c->r[4]+c->r[0]); // 802CE5C4
  c->r[0]=0u-c->r[4]; // 802CE5C8
  c->r[0]=c->r[0]|c->r[4]; // 802CE5CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802CE5D0
L_802CE5D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CE5D4
  if (crb(c,2)) { goto L_802CE634; } // 802CE5D8
  c->r[0]=R8(c->r[27]+0x00000001u); // 802CE5DC
  cmps(c,0,(int32_t)c->r[3],0); // 802CE5E0
  c->r[5]=R8(c->r[27]+0x00000002u); // 802CE5E4
  c->r[5]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[5]&~0x0000FF00u); // 802CE5E8
  W16(c->r[31]+0x00000006u,c->r[23]); // 802CE5EC
  c->r[4]=R8(c->r[27]+0x00000003u); // 802CE5F0
  c->r[0]=R8(c->r[27]+0x00000004u); // 802CE5F4
  W16(c->r[31]+0x00000008u,c->r[5]); // 802CE5F8
  c->r[0]=(rotl(c->r[4],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 802CE5FC
  W16(c->r[31]+0x0000000Au,c->r[0]); // 802CE600
  if (crb(c,2)) { goto L_802CE610; } // 802CE604
  c->r[0]=R32(c->r[3]+0x00000010u); // 802CE608
  goto L_802CE614; // 802CE60C
L_802CE610:;
  c->r[0]=0u+0x00000000u; // 802CE610
L_802CE614:;
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)48); // 802CE614
  c->r[0]=R8(c->r[27]+0x00000007u); // 802CE618
  c->r[30]=c->r[30]+0x00000001u; // 802CE61C
  c->r[3]=c->r[26]+c->r[3]; // 802CE620
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CE624
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802CE628
  W16(c->r[31]+0x00000004u,c->r[0]); // 802CE62C
  c->r[31]=c->r[31]+0x0000000Cu; // 802CE630
L_802CE634:;
  c->r[27]=c->r[27]+0x00000008u; // 802CE634
L_802CE638:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 802CE638
  cmpu(c,0,c->r[0],0x00000001u); // 802CE63C
  if (!crb(c,2)) { IRQCHK(c); goto L_802CE568; } // 802CE640
  W32(c->r[24]+0x00000000u,c->r[30]); // 802CE644
  c->r[11]=c->r[1]+0x00000030u; // 802CE648
  c->r[3]=c->r[29]|c->r[29]; // 802CE64C
  c->lr=0x802CE654u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CE650
  c->r[0]=R32(c->r[1]+0x00000034u); // 802CE654
  c->lr=c->r[0]; // 802CE658
  c->r[1]=c->r[1]+0x00000030u; // 802CE65C
  return; // 802CE660
}

// DrawResMdlDirectly__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPCQ34nw4r4math5MTX34PCQ34nw4r4math5MTX33PCQ34nw4r4math5MTX34PCUcPCUcPQ34nw4r3g3d21DrawResMdlReplacementUl
void f_802CE664(Ctx* __restrict c) {
  trace_call(0x802CE664u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CE664
  c->r[0]=c->lr; // 802CE668
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CE66C
  c->r[11]=c->r[1]+0x00000050u; // 802CE670
  c->lr=0x802CE678u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CE674
  c->r[28]=c->r[4]|c->r[4]; // 802CE678
  c->r[27]=c->r[3]|c->r[3]; // 802CE67C
  c->r[4]=c->r[5]|c->r[5]; // 802CE680
  c->r[5]=c->r[6]|c->r[6]; // 802CE684
  c->r[26]=c->r[7]|c->r[7]; // 802CE688
  c->r[29]=c->r[8]|c->r[8]; // 802CE68C
  c->r[30]=c->r[9]|c->r[9]; // 802CE690
  c->r[31]=c->r[10]|c->r[10]; // 802CE694
  c->r[3]=c->r[28]|c->r[28]; // 802CE698
  c->lr=0x802CE6A0u; f_802C9598(c); // 802CE69C
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802CE6A0
  if (!crb(c,2)) { goto L_802CE6B4; } // 802CE6A4
  c->r[3]=0u+0x00000000u; // 802CE6A8
  c->lr=0x802CE6B0u; f_80359F28(c); // 802CE6AC
  c->lr=0x802CE6B4u; f_8030A778(c); // 802CE6B0
L_802CE6B4:;
  cmps(c,0,(int32_t)c->r[26],0); // 802CE6B4
  if (crb(c,2)) { goto L_802CE78C; } // 802CE6B8
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 802CE6BC
  if (crb(c,2)) { goto L_802CE74C; } // 802CE6C0
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE6C4
  c->r[5]=c->r[28]|c->r[28]; // 802CE6C8
  c->r[6]=c->r[26]|c->r[26]; // 802CE6CC
  c->r[7]=c->r[30]|c->r[30]; // 802CE6D0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802CE6D4
  c->r[3]=c->r[1]+0x00000034u; // 802CE6D8
  c->r[4]=c->r[1]+0x0000002Cu; // 802CE6DC
  c->lr=0x802CE6E4u; f_802CE52C(c); // 802CE6E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802CE6E4
  c->r[5]=0u+0x802D0000u; // 802CE6E8
  c->r[26]=c->r[3]|c->r[3]; // 802CE6EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802CE6F0
  c->r[5]=c->r[5]+0xFFFFE88Cu; // 802CE6F4
  c->r[4]=c->r[3]+c->r[0]; // 802CE6F8
  c->lr=0x802CE700u; f_802CE92C(c); // 802CE6FC
  cmps(c,0,(int32_t)c->r[30],0); // 802CE700
  if (crb(c,2)) { goto L_802CE72C; } // 802CE704
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE708
  c->r[4]=c->r[26]|c->r[26]; // 802CE70C
  c->r[5]=R32(c->r[1]+0x00000034u); // 802CE710
  c->r[6]=c->r[30]|c->r[30]; // 802CE714
  W32(c->r[1]+0x00000028u,c->r[0]); // 802CE718
  c->r[7]=c->r[31]|c->r[31]; // 802CE71C
  c->r[3]=c->r[1]+0x00000028u; // 802CE720
  c->lr=0x802CE728u; f_802CE3D0(c); // 802CE724
  goto L_802CE78C; // 802CE728
L_802CE72C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE72C
  c->r[4]=c->r[26]|c->r[26]; // 802CE730
  c->r[5]=R32(c->r[1]+0x00000034u); // 802CE734
  c->r[6]=c->r[31]|c->r[31]; // 802CE738
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CE73C
  c->r[3]=c->r[1]+0x00000024u; // 802CE740
  c->lr=0x802CE748u; f_802CE2C4(c); // 802CE744
  goto L_802CE78C; // 802CE748
L_802CE74C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CE74C
  if (crb(c,2)) { goto L_802CE774; } // 802CE750
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE754
  c->r[4]=c->r[26]|c->r[26]; // 802CE758
  c->r[5]=c->r[30]|c->r[30]; // 802CE75C
  c->r[6]=c->r[31]|c->r[31]; // 802CE760
  W32(c->r[1]+0x00000020u,c->r[0]); // 802CE764
  c->r[3]=c->r[1]+0x00000020u; // 802CE768
  c->lr=0x802CE770u; f_802CE10C(c); // 802CE76C
  goto L_802CE78C; // 802CE770
L_802CE774:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE774
  c->r[4]=c->r[26]|c->r[26]; // 802CE778
  c->r[5]=c->r[31]|c->r[31]; // 802CE77C
  c->r[3]=c->r[1]+0x0000001Cu; // 802CE780
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802CE784
  c->lr=0x802CE78Cu; f_802CDFD8(c); // 802CE788
L_802CE78C:;
  cmps(c,0,(int32_t)c->r[29],0); // 802CE78C
  if (crb(c,2)) { goto L_802CE864; } // 802CE790
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802CE794
  if (crb(c,2)) { goto L_802CE824; } // 802CE798
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE79C
  c->r[5]=c->r[28]|c->r[28]; // 802CE7A0
  c->r[6]=c->r[29]|c->r[29]; // 802CE7A4
  c->r[7]=c->r[30]|c->r[30]; // 802CE7A8
  W32(c->r[1]+0x00000018u,c->r[0]); // 802CE7AC
  c->r[3]=c->r[1]+0x00000030u; // 802CE7B0
  c->r[4]=c->r[1]+0x00000018u; // 802CE7B4
  c->lr=0x802CE7BCu; f_802CE52C(c); // 802CE7B8
  c->r[0]=R32(c->r[1]+0x00000030u); // 802CE7BC
  c->r[5]=0u+0x802D0000u; // 802CE7C0
  c->r[26]=c->r[3]|c->r[3]; // 802CE7C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802CE7C8
  c->r[5]=c->r[5]+0xFFFFE8C8u; // 802CE7CC
  c->r[4]=c->r[3]+c->r[0]; // 802CE7D0
  c->lr=0x802CE7D8u; f_802CE92C(c); // 802CE7D4
  cmps(c,0,(int32_t)c->r[30],0); // 802CE7D8
  if (crb(c,2)) { goto L_802CE804; } // 802CE7DC
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE7E0
  c->r[4]=c->r[26]|c->r[26]; // 802CE7E4
  c->r[5]=R32(c->r[1]+0x00000030u); // 802CE7E8
  c->r[6]=c->r[30]|c->r[30]; // 802CE7EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CE7F0
  c->r[7]=c->r[31]|c->r[31]; // 802CE7F4
  c->r[3]=c->r[1]+0x00000014u; // 802CE7F8
  c->lr=0x802CE800u; f_802CE3D0(c); // 802CE7FC
  goto L_802CE864; // 802CE800
L_802CE804:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE804
  c->r[4]=c->r[26]|c->r[26]; // 802CE808
  c->r[5]=R32(c->r[1]+0x00000030u); // 802CE80C
  c->r[6]=c->r[31]|c->r[31]; // 802CE810
  W32(c->r[1]+0x00000010u,c->r[0]); // 802CE814
  c->r[3]=c->r[1]+0x00000010u; // 802CE818
  c->lr=0x802CE820u; f_802CE2C4(c); // 802CE81C
  goto L_802CE864; // 802CE820
L_802CE824:;
  cmps(c,0,(int32_t)c->r[30],0); // 802CE824
  if (crb(c,2)) { goto L_802CE84C; } // 802CE828
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE82C
  c->r[4]=c->r[29]|c->r[29]; // 802CE830
  c->r[5]=c->r[30]|c->r[30]; // 802CE834
  c->r[6]=c->r[31]|c->r[31]; // 802CE838
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802CE83C
  c->r[3]=c->r[1]+0x0000000Cu; // 802CE840
  c->lr=0x802CE848u; f_802CE10C(c); // 802CE844
  goto L_802CE864; // 802CE848
L_802CE84C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802CE84C
  c->r[4]=c->r[29]|c->r[29]; // 802CE850
  c->r[5]=c->r[31]|c->r[31]; // 802CE854
  c->r[3]=c->r[1]+0x00000008u; // 802CE858
  W32(c->r[1]+0x00000008u,c->r[0]); // 802CE85C
  c->lr=0x802CE864u; f_802CDFD8(c); // 802CE860
L_802CE864:;
  c->r[3]=0u+0x00000000u; // 802CE864
  c->r[4]=0u+0x00000000u; // 802CE868
  c->r[5]=0u+0x00000000u; // 802CE86C
  c->lr=0x802CE874u; f_802C9598(c); // 802CE870
  c->r[11]=c->r[1]+0x00000050u; // 802CE874
  c->lr=0x802CE87Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CE878
  c->r[0]=R32(c->r[1]+0x00000054u); // 802CE87C
  c->lr=c->r[0]; // 802CE880
  c->r[1]=c->r[1]+0x00000050u; // 802CE884
  return; // 802CE888
}

// FrontToBack__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_802CE88C(Ctx* __restrict c) {
  trace_call(0x802CE88Cu);
  c->r[0]=R16(c->r[4]+0x00000004u); // 802CE88C
  c->r[5]=R16(c->r[3]+0x00000004u); // 802CE890
  cmpu(c,0,c->r[5],c->r[0]); // 802CE894
  if (!crb(c,0)) { goto L_802CE8A4; } // 802CE898
  c->r[3]=0u+0x00000001u; // 802CE89C
  return; // 802CE8A0
L_802CE8A4:;
  if (!crb(c,1)) { goto L_802CE8B0; } // 802CE8A4
  c->r[3]=0u+0x00000000u; // 802CE8A8
  return; // 802CE8AC
L_802CE8B0:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CE8B0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CE8B4
  fcmp(c,0,c->f[1],c->f[0]); // 802CE8B8
  c->r[3]=c->cr; // 802CE8BC
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 802CE8C0
  return; // 802CE8C4
}

// BackToFront__Q34nw4r3g3d22@unnamed@g3d_draw_cpp@FRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ
void f_802CE8C8(Ctx* __restrict c) {
  trace_call(0x802CE8C8u);
  c->r[0]=R16(c->r[4]+0x00000004u); // 802CE8C8
  c->r[5]=R16(c->r[3]+0x00000004u); // 802CE8CC
  cmpu(c,0,c->r[5],c->r[0]); // 802CE8D0
  if (!crb(c,0)) { goto L_802CE8E0; } // 802CE8D4
  c->r[3]=0u+0x00000001u; // 802CE8D8
  return; // 802CE8DC
L_802CE8E0:;
  if (!crb(c,1)) { goto L_802CE8EC; } // 802CE8E0
  c->r[3]=0u+0x00000000u; // 802CE8E4
  return; // 802CE8E8
L_802CE8EC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CE8EC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CE8F0
  fcmp(c,0,c->f[1],c->f[0]); // 802CE8F4
  if (!crb(c,0)) { goto L_802CE904; } // 802CE8F8
  c->r[3]=0u+0x00000001u; // 802CE8FC
  return; // 802CE900
L_802CE904:;
  fcmp(c,0,c->f[1],c->f[0]); // 802CE904
  if (!crb(c,2)) { goto L_802CE924; } // 802CE908
  c->r[3]=R16(c->r[3]+0x00000008u); // 802CE90C
  c->r[0]=R16(c->r[4]+0x00000008u); // 802CE910
  cmpu(c,0,c->r[3],c->r[0]); // 802CE914
  if (!crb(c,0)) { goto L_802CE924; } // 802CE918
  c->r[3]=0u+0x00000001u; // 802CE91C
  return; // 802CE920
L_802CE924:;
  c->r[3]=0u+0x00000000u; // 802CE924
  return; // 802CE928
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,PFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_802CE92C(Ctx* __restrict c) {
  trace_call(0x802CE92Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CE92C
  c->r[0]=c->lr; // 802CE930
  W32(c->r[1]+0x00000084u,c->r[0]); // 802CE934
  c->r[11]=c->r[1]+0x00000080u; // 802CE938
  c->lr=0x802CE940u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CE93C
  c->r[24]=0u+0x2AAB0000u; // 802CE940
  c->r[6]=0u+0x66660000u; // 802CE944
  W32(c->r[1]+0x00000008u,c->r[5]); // 802CE948
  c->r[25]=c->r[3]|c->r[3]; // 802CE94C
  c->r[26]=c->r[4]|c->r[4]; // 802CE950
  c->r[31]=c->r[6]+0x00006667u; // 802CE954
  c->r[30]=c->r[24]+0xFFFFAAABu; // 802CE958
L_802CE95C:;
  c->r[0]=c->r[26]-c->r[25]; // 802CE95C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 802CE960
  c->r[0]=sraw(c,c->r[0],1); // 802CE964
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802CE968
  c->r[7]=c->r[0]+c->r[3]; // 802CE96C
  cmps(c,0,(int32_t)c->r[7],1); // 802CE970
  if (!crb(c,1)) { goto L_802CEED0; } // 802CE974
  cmps(c,0,(int32_t)c->r[7],20); // 802CE978
  if (crb(c,1)) { goto L_802CEA50; } // 802CE97C
  cmpu(c,0,c->r[25],c->r[26]); // 802CE980
  if (crb(c,2)) { goto L_802CEED0; } // 802CE984
  c->r[24]=c->r[26]+0xFFFFFFF4u; // 802CE988
  goto L_802CEA44; // 802CE98C
L_802CE990:;
  cmpu(c,0,c->r[25],c->r[26]); // 802CE990
  c->r[27]=c->r[25]|c->r[25]; // 802CE994
  if (crb(c,2)) { goto L_802CE9D0; } // 802CE998
  c->r[28]=c->r[25]+0x0000000Cu; // 802CE99C
  goto L_802CE9C8; // 802CE9A0
L_802CE9A4:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CE9A4
  c->r[3]=c->r[28]|c->r[28]; // 802CE9A8
  c->r[4]=c->r[27]|c->r[27]; // 802CE9AC
  c->ctr=c->r[12]; // 802CE9B0
  if (true) { c->lr=0x802CE9B8u; dispatch(c,c->ctr); } // 802CE9B4
  cmps(c,0,(int32_t)c->r[3],0); // 802CE9B8
  if (crb(c,2)) { goto L_802CE9C4; } // 802CE9BC
  c->r[27]=c->r[28]|c->r[28]; // 802CE9C0
L_802CE9C4:;
  c->r[28]=c->r[28]+0x0000000Cu; // 802CE9C4
L_802CE9C8:;
  cmpu(c,0,c->r[28],c->r[26]); // 802CE9C8
  if (!crb(c,2)) { IRQCHK(c); goto L_802CE9A4; } // 802CE9CC
L_802CE9D0:;
  cmpu(c,0,c->r[27],c->r[25]); // 802CE9D0
  if (crb(c,2)) { goto L_802CEA40; } // 802CE9D4
  c->r[7]=R32(c->r[27]+0x00000000u); // 802CE9D8
  c->r[0]=R32(c->r[27]+0x00000004u); // 802CE9DC
  c->r[3]=R32(c->r[27]+0x00000008u); // 802CE9E0
  {uint32_t ea=c->r[25]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CE9E4
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802CE9E8
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 802CE9EC
  c->r[5]=R16(c->r[1]+0x0000004Cu); // 802CE9F0
  c->r[0]=R16(c->r[25]+0x00000004u); // 802CE9F4
  W32(c->r[1]+0x00000048u,c->r[7]); // 802CE9F8
  c->r[4]=R16(c->r[1]+0x0000004Eu); // 802CE9FC
  W16(c->r[27]+0x00000004u,c->r[0]); // 802CEA00
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEA04
  c->r[6]=R16(c->r[25]+0x00000006u); // 802CEA08
  W32(c->r[1]+0x00000050u,c->r[3]); // 802CEA0C
  W16(c->r[27]+0x00000006u,c->r[6]); // 802CEA10
  c->r[3]=R16(c->r[1]+0x00000050u); // 802CEA14
  c->r[6]=R16(c->r[25]+0x00000008u); // 802CEA18
  c->r[0]=R16(c->r[1]+0x00000052u); // 802CEA1C
  W16(c->r[27]+0x00000008u,c->r[6]); // 802CEA20
  c->r[6]=R16(c->r[25]+0x0000000Au); // 802CEA24
  W16(c->r[27]+0x0000000Au,c->r[6]); // 802CEA28
  {uint32_t ea=c->r[25]+0x00000000u; WF32(ea,c->f[0]);} // 802CEA2C
  W16(c->r[25]+0x00000004u,c->r[5]); // 802CEA30
  W16(c->r[25]+0x00000006u,c->r[4]); // 802CEA34
  W16(c->r[25]+0x00000008u,c->r[3]); // 802CEA38
  W16(c->r[25]+0x0000000Au,c->r[0]); // 802CEA3C
L_802CEA40:;
  c->r[25]=c->r[25]+0x0000000Cu; // 802CEA40
L_802CEA44:;
  cmpu(c,0,c->r[25],c->r[24]); // 802CEA44
  if (!crb(c,2)) { IRQCHK(c); goto L_802CE990; } // 802CEA48
  goto L_802CEED0; // 802CEA4C
L_802CEA50:;
  c->r[4]=R32(c->r[13]+0xFFFFAA50u); // 802CEA50
  c->r[0]=sraw(c,c->r[7],2); // 802CEA54
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 802CEA58
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 802CEA5C
  c->r[6]=c->r[4]+0x00000001u; // 802CEA60
  cmps(c,0,(int32_t)c->r[6],5); // 802CEA64
  c->r[0]=sraw(c,c->r[0],1); // 802CEA68
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802CEA6C
  c->r[0]=c->r[0]+c->r[3]; // 802CEA70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 802CEA74
  c->r[0]=c->r[4]-c->r[0]; // 802CEA78
  c->r[0]=c->r[5]+c->r[0]; // 802CEA7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802CEA80
  c->r[3]=c->r[25]+c->r[0]; // 802CEA84
  if (crb(c,0)) { goto L_802CEA90; } // 802CEA88
  c->r[6]=0u+0xFFFFFFFCu; // 802CEA8C
L_802CEA90:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 802CEA90
  c->r[0]=c->r[6]+0x00000001u; // 802CEA94
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802CEA98
  W32(c->r[13]+0xFFFFAA50u,c->r[0]); // 802CEA9C
  cmps(c,0,(int32_t)c->r[0],5); // 802CEAA0
  c->r[0]=c->r[5]-c->r[7]; // 802CEAA4
  c->r[0]=sraw(c,c->r[0],2); // 802CEAA8
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 802CEAAC
  c->r[0]=sraw(c,c->r[4],1); // 802CEAB0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 802CEAB4
  c->r[0]=c->r[0]+c->r[4]; // 802CEAB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 802CEABC
  c->r[0]=c->r[6]-c->r[0]; // 802CEAC0
  c->r[0]=c->r[5]+c->r[0]; // 802CEAC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802CEAC8
  c->r[4]=c->r[25]+c->r[0]; // 802CEACC
  if (crb(c,0)) { goto L_802CEADC; } // 802CEAD0
  c->r[6]=0u+0xFFFFFFFCu; // 802CEAD4
  W32(c->r[13]+0xFFFFAA50u,c->r[6]); // 802CEAD8
L_802CEADC:;
  c->r[27]=c->r[26]+0xFFFFFFF4u; // 802CEADC
  c->r[6]=c->r[1]+0x00000008u; // 802CEAE0
  c->r[5]=c->r[27]|c->r[27]; // 802CEAE4
  c->lr=0x802CEAECu; f_802CF4A4(c); // 802CEAE8
  c->r[29]=c->r[25]|c->r[25]; // 802CEAEC
  c->r[28]=c->r[27]|c->r[27]; // 802CEAF0
  goto L_802CEAFC; // 802CEAF4
L_802CEAF8:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CEAF8
L_802CEAFC:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CEAFC
  c->r[3]=c->r[29]|c->r[29]; // 802CEB00
  c->r[4]=c->r[27]|c->r[27]; // 802CEB04
  c->ctr=c->r[12]; // 802CEB08
  if (true) { c->lr=0x802CEB10u; dispatch(c,c->ctr); } // 802CEB0C
  cmps(c,0,(int32_t)c->r[3],0); // 802CEB10
  if (!crb(c,2)) { IRQCHK(c); goto L_802CEAF8; } // 802CEB14
L_802CEB18:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 802CEB18
  cmpu(c,0,c->r[29],c->r[28]); // 802CEB1C
  if (crb(c,2)) { goto L_802CEB40; } // 802CEB20
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CEB24
  c->r[3]=c->r[28]|c->r[28]; // 802CEB28
  c->r[4]=c->r[27]|c->r[27]; // 802CEB2C
  c->ctr=c->r[12]; // 802CEB30
  if (true) { c->lr=0x802CEB38u; dispatch(c,c->ctr); } // 802CEB34
  cmps(c,0,(int32_t)c->r[3],0); // 802CEB38
  if (crb(c,2)) { IRQCHK(c); goto L_802CEB18; } // 802CEB3C
L_802CEB40:;
  cmpu(c,0,c->r[29],c->r[28]); // 802CEB40
  if (!crb(c,0)) { goto L_802CEC70; } // 802CEB44
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CEB48
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CEB4C
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CEB50
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEB54
  W32(c->r[1]+0x00000040u,c->r[0]); // 802CEB58
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CEB5C
  c->r[5]=R16(c->r[1]+0x00000040u); // 802CEB60
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CEB64
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 802CEB68
  c->r[4]=R16(c->r[1]+0x00000042u); // 802CEB6C
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CEB70
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEB74
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CEB78
  W32(c->r[1]+0x00000044u,c->r[3]); // 802CEB7C
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CEB80
  c->r[3]=R16(c->r[1]+0x00000044u); // 802CEB84
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CEB88
  c->r[0]=R16(c->r[1]+0x00000046u); // 802CEB8C
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CEB90
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CEB94
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CEB98
  c->r[29]=c->r[29]+0x0000000Cu; // 802CEB9C
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CEBA0
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CEBA4
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CEBA8
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CEBAC
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CEBB0
  goto L_802CEBBC; // 802CEBB4
L_802CEBB8:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CEBB8
L_802CEBBC:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CEBBC
  c->r[3]=c->r[29]|c->r[29]; // 802CEBC0
  c->r[4]=c->r[27]|c->r[27]; // 802CEBC4
  c->ctr=c->r[12]; // 802CEBC8
  if (true) { c->lr=0x802CEBD0u; dispatch(c,c->ctr); } // 802CEBCC
  cmps(c,0,(int32_t)c->r[3],0); // 802CEBD0
  if (!crb(c,2)) { IRQCHK(c); goto L_802CEBB8; } // 802CEBD4
L_802CEBD8:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CEBD8
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 802CEBDC
  c->r[3]=c->r[28]|c->r[28]; // 802CEBE0
  c->r[4]=c->r[27]|c->r[27]; // 802CEBE4
  c->ctr=c->r[12]; // 802CEBE8
  if (true) { c->lr=0x802CEBF0u; dispatch(c,c->ctr); } // 802CEBEC
  cmps(c,0,(int32_t)c->r[3],0); // 802CEBF0
  if (crb(c,2)) { IRQCHK(c); goto L_802CEBD8; } // 802CEBF4
  cmpu(c,0,c->r[29],c->r[28]); // 802CEBF8
  if (!crb(c,0)) { goto L_802CEC70; } // 802CEBFC
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CEC00
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CEC04
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CEC08
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEC0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802CEC10
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CEC14
  c->r[5]=R16(c->r[1]+0x00000034u); // 802CEC18
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CEC1C
  W32(c->r[1]+0x00000030u,c->r[7]); // 802CEC20
  c->r[4]=R16(c->r[1]+0x00000036u); // 802CEC24
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CEC28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEC2C
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CEC30
  W32(c->r[1]+0x00000038u,c->r[3]); // 802CEC34
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CEC38
  c->r[3]=R16(c->r[1]+0x00000038u); // 802CEC3C
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CEC40
  c->r[0]=R16(c->r[1]+0x0000003Au); // 802CEC44
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CEC48
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CEC4C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CEC50
  c->r[29]=c->r[29]+0x0000000Cu; // 802CEC54
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CEC58
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CEC5C
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CEC60
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CEC64
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CEC68
  IRQCHK(c); goto L_802CEBBC; // 802CEC6C
L_802CEC70:;
  cmpu(c,0,c->r[29],c->r[25]); // 802CEC70
  if (!crb(c,2)) { goto L_802CEE6C; } // 802CEC74
  c->r[9]=R32(c->r[29]+0x00000000u); // 802CEC78
  c->r[28]=c->r[26]+0xFFFFFFF4u; // 802CEC7C
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CEC80
  c->r[3]=c->r[25]|c->r[25]; // 802CEC84
  c->r[5]=R32(c->r[29]+0x00000008u); // 802CEC88
  c->r[4]=c->r[28]|c->r[28]; // 802CEC8C
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEC90
  W32(c->r[1]+0x00000028u,c->r[0]); // 802CEC94
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CEC98
  c->r[7]=R16(c->r[1]+0x00000028u); // 802CEC9C
  c->r[0]=R16(c->r[27]+0x00000004u); // 802CECA0
  W32(c->r[1]+0x00000024u,c->r[9]); // 802CECA4
  c->r[6]=R16(c->r[1]+0x0000002Au); // 802CECA8
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CECAC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CECB0
  c->r[8]=R16(c->r[27]+0x00000006u); // 802CECB4
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 802CECB8
  W16(c->r[29]+0x00000006u,c->r[8]); // 802CECBC
  c->r[5]=R16(c->r[1]+0x0000002Cu); // 802CECC0
  c->r[8]=R16(c->r[27]+0x00000008u); // 802CECC4
  c->r[0]=R16(c->r[1]+0x0000002Eu); // 802CECC8
  W16(c->r[29]+0x00000008u,c->r[8]); // 802CECCC
  c->r[8]=R16(c->r[27]+0x0000000Au); // 802CECD0
  W16(c->r[29]+0x0000000Au,c->r[8]); // 802CECD4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 802CECD8
  W16(c->r[27]+0x00000004u,c->r[7]); // 802CECDC
  W16(c->r[27]+0x00000006u,c->r[6]); // 802CECE0
  W16(c->r[27]+0x00000008u,c->r[5]); // 802CECE4
  W16(c->r[27]+0x0000000Au,c->r[0]); // 802CECE8
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CECEC
  c->ctr=c->r[12]; // 802CECF0
  c->r[29]=c->r[29]+0x0000000Cu; // 802CECF4
  if (true) { c->lr=0x802CECFCu; dispatch(c,c->ctr); } // 802CECF8
  cmps(c,0,(int32_t)c->r[3],0); // 802CECFC
  if (!crb(c,2)) { goto L_802CEDA0; } // 802CED00
  goto L_802CED0C; // 802CED04
L_802CED08:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CED08
L_802CED0C:;
  cmpu(c,0,c->r[29],c->r[26]); // 802CED0C
  if (crb(c,2)) { goto L_802CED30; } // 802CED10
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CED14
  c->r[3]=c->r[25]|c->r[25]; // 802CED18
  c->r[4]=c->r[29]|c->r[29]; // 802CED1C
  c->ctr=c->r[12]; // 802CED20
  if (true) { c->lr=0x802CED28u; dispatch(c,c->ctr); } // 802CED24
  cmps(c,0,(int32_t)c->r[3],0); // 802CED28
  if (crb(c,2)) { IRQCHK(c); goto L_802CED08; } // 802CED2C
L_802CED30:;
  cmpu(c,0,c->r[29],c->r[28]); // 802CED30
  if (!crb(c,0)) { goto L_802CEDA0; } // 802CED34
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CED38
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CED3C
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CED40
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CED44
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802CED48
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CED4C
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 802CED50
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CED54
  W32(c->r[1]+0x00000018u,c->r[7]); // 802CED58
  c->r[4]=R16(c->r[1]+0x0000001Eu); // 802CED5C
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CED60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CED64
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CED68
  W32(c->r[1]+0x00000020u,c->r[3]); // 802CED6C
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CED70
  c->r[3]=R16(c->r[1]+0x00000020u); // 802CED74
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CED78
  c->r[0]=R16(c->r[1]+0x00000022u); // 802CED7C
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CED80
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CED84
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CED88
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CED8C
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CED90
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CED94
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CED98
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CED9C
L_802CEDA0:;
  cmpu(c,0,c->r[29],c->r[28]); // 802CEDA0
  if (!crb(c,0)) { goto L_802CEE64; } // 802CEDA4
  goto L_802CEDB0; // 802CEDA8
L_802CEDAC:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CEDAC
L_802CEDB0:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CEDB0
  c->r[3]=c->r[25]|c->r[25]; // 802CEDB4
  c->r[4]=c->r[29]|c->r[29]; // 802CEDB8
  c->ctr=c->r[12]; // 802CEDBC
  if (true) { c->lr=0x802CEDC4u; dispatch(c,c->ctr); } // 802CEDC0
  cmps(c,0,(int32_t)c->r[3],0); // 802CEDC4
  if (crb(c,2)) { IRQCHK(c); goto L_802CEDAC; } // 802CEDC8
L_802CEDCC:;
  c->r[12]=R32(c->r[1]+0x00000008u); // 802CEDCC
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 802CEDD0
  c->r[3]=c->r[25]|c->r[25]; // 802CEDD4
  c->r[4]=c->r[28]|c->r[28]; // 802CEDD8
  c->ctr=c->r[12]; // 802CEDDC
  if (true) { c->lr=0x802CEDE4u; dispatch(c,c->ctr); } // 802CEDE0
  cmps(c,0,(int32_t)c->r[3],0); // 802CEDE4
  if (!crb(c,2)) { IRQCHK(c); goto L_802CEDCC; } // 802CEDE8
  cmpu(c,0,c->r[29],c->r[28]); // 802CEDEC
  if (!crb(c,0)) { goto L_802CEE64; } // 802CEDF0
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CEDF4
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CEDF8
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CEDFC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEE00
  W32(c->r[1]+0x00000010u,c->r[0]); // 802CEE04
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CEE08
  c->r[5]=R16(c->r[1]+0x00000010u); // 802CEE0C
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CEE10
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 802CEE14
  c->r[4]=R16(c->r[1]+0x00000012u); // 802CEE18
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CEE1C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEE20
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CEE24
  W32(c->r[1]+0x00000014u,c->r[3]); // 802CEE28
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CEE2C
  c->r[3]=R16(c->r[1]+0x00000014u); // 802CEE30
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CEE34
  c->r[0]=R16(c->r[1]+0x00000016u); // 802CEE38
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CEE3C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CEE40
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CEE44
  c->r[29]=c->r[29]+0x0000000Cu; // 802CEE48
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CEE4C
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CEE50
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CEE54
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CEE58
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CEE5C
  IRQCHK(c); goto L_802CEDB0; // 802CEE60
L_802CEE64:;
  c->r[25]=c->r[29]|c->r[29]; // 802CEE64
  IRQCHK(c); goto L_802CE95C; // 802CEE68
L_802CEE6C:;
  c->r[0]=c->r[29]-c->r[25]; // 802CEE6C
  c->r[4]=c->r[24]+0xFFFFAAABu; // 802CEE70
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802CEE74
  c->r[0]=c->r[26]-c->r[29]; // 802CEE78
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802CEE7C
  c->r[3]=sraw(c,c->r[3],1); // 802CEE80
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 802CEE84
  c->r[0]=sraw(c,c->r[0],1); // 802CEE88
  c->r[4]=c->r[3]+c->r[4]; // 802CEE8C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802CEE90
  c->r[0]=c->r[0]+c->r[3]; // 802CEE94
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802CEE98
  if (!crb(c,0)) { goto L_802CEEB8; } // 802CEE9C
  c->r[3]=c->r[25]|c->r[25]; // 802CEEA0
  c->r[4]=c->r[29]|c->r[29]; // 802CEEA4
  c->r[5]=c->r[1]+0x00000008u; // 802CEEA8
  c->lr=0x802CEEB0u; f_802CEEE8(c); // 802CEEAC
  c->r[25]=c->r[29]|c->r[29]; // 802CEEB0
  IRQCHK(c); goto L_802CE95C; // 802CEEB4
L_802CEEB8:;
  c->r[3]=c->r[29]|c->r[29]; // 802CEEB8
  c->r[4]=c->r[26]|c->r[26]; // 802CEEBC
  c->r[5]=c->r[1]+0x00000008u; // 802CEEC0
  c->lr=0x802CEEC8u; f_802CEEE8(c); // 802CEEC4
  c->r[26]=c->r[29]|c->r[29]; // 802CEEC8
  IRQCHK(c); goto L_802CE95C; // 802CEECC
L_802CEED0:;
  c->r[11]=c->r[1]+0x00000080u; // 802CEED0
  c->lr=0x802CEED8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CEED4
  c->r[0]=R32(c->r[1]+0x00000084u); // 802CEED8
  c->lr=c->r[0]; // 802CEEDC
  c->r[1]=c->r[1]+0x00000080u; // 802CEEE0
  return; // 802CEEE4
}

// sort<PQ54nw4r3g3d6detail7workmem4MdlZ,RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_802CEEE8(Ctx* __restrict c) {
  trace_call(0x802CEEE8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CEEE8
  c->r[0]=c->lr; // 802CEEEC
  W32(c->r[1]+0x00000084u,c->r[0]); // 802CEEF0
  c->r[11]=c->r[1]+0x00000080u; // 802CEEF4
  c->lr=0x802CEEFCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CEEF8
  c->r[23]=0u+0x2AAB0000u; // 802CEEFC
  c->r[6]=0u+0x66660000u; // 802CEF00
  c->r[24]=c->r[3]|c->r[3]; // 802CEF04
  c->r[25]=c->r[4]|c->r[4]; // 802CEF08
  c->r[26]=c->r[5]|c->r[5]; // 802CEF0C
  c->r[31]=c->r[6]+0x00006667u; // 802CEF10
  c->r[30]=c->r[23]+0xFFFFAAABu; // 802CEF14
L_802CEF18:;
  c->r[0]=c->r[25]-c->r[24]; // 802CEF18
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[0])>>32); // 802CEF1C
  c->r[0]=sraw(c,c->r[0],1); // 802CEF20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802CEF24
  c->r[7]=c->r[0]+c->r[3]; // 802CEF28
  cmps(c,0,(int32_t)c->r[7],1); // 802CEF2C
  if (!crb(c,1)) { goto L_802CF48C; } // 802CEF30
  cmps(c,0,(int32_t)c->r[7],20); // 802CEF34
  if (crb(c,1)) { goto L_802CF00C; } // 802CEF38
  cmpu(c,0,c->r[24],c->r[25]); // 802CEF3C
  if (crb(c,2)) { goto L_802CF48C; } // 802CEF40
  c->r[23]=c->r[25]+0xFFFFFFF4u; // 802CEF44
  goto L_802CF000; // 802CEF48
L_802CEF4C:;
  cmpu(c,0,c->r[24],c->r[25]); // 802CEF4C
  c->r[27]=c->r[24]|c->r[24]; // 802CEF50
  if (crb(c,2)) { goto L_802CEF8C; } // 802CEF54
  c->r[28]=c->r[24]+0x0000000Cu; // 802CEF58
  goto L_802CEF84; // 802CEF5C
L_802CEF60:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CEF60
  c->r[3]=c->r[28]|c->r[28]; // 802CEF64
  c->r[4]=c->r[27]|c->r[27]; // 802CEF68
  c->ctr=c->r[12]; // 802CEF6C
  if (true) { c->lr=0x802CEF74u; dispatch(c,c->ctr); } // 802CEF70
  cmps(c,0,(int32_t)c->r[3],0); // 802CEF74
  if (crb(c,2)) { goto L_802CEF80; } // 802CEF78
  c->r[27]=c->r[28]|c->r[28]; // 802CEF7C
L_802CEF80:;
  c->r[28]=c->r[28]+0x0000000Cu; // 802CEF80
L_802CEF84:;
  cmpu(c,0,c->r[28],c->r[25]); // 802CEF84
  if (!crb(c,2)) { IRQCHK(c); goto L_802CEF60; } // 802CEF88
L_802CEF8C:;
  cmpu(c,0,c->r[27],c->r[24]); // 802CEF8C
  if (crb(c,2)) { goto L_802CEFFC; } // 802CEF90
  c->r[7]=R32(c->r[27]+0x00000000u); // 802CEF94
  c->r[0]=R32(c->r[27]+0x00000004u); // 802CEF98
  c->r[3]=R32(c->r[27]+0x00000008u); // 802CEF9C
  {uint32_t ea=c->r[24]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEFA0
  W32(c->r[1]+0x00000048u,c->r[0]); // 802CEFA4
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 802CEFA8
  c->r[5]=R16(c->r[1]+0x00000048u); // 802CEFAC
  c->r[0]=R16(c->r[24]+0x00000004u); // 802CEFB0
  W32(c->r[1]+0x00000044u,c->r[7]); // 802CEFB4
  c->r[4]=R16(c->r[1]+0x0000004Au); // 802CEFB8
  W16(c->r[27]+0x00000004u,c->r[0]); // 802CEFBC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CEFC0
  c->r[6]=R16(c->r[24]+0x00000006u); // 802CEFC4
  W32(c->r[1]+0x0000004Cu,c->r[3]); // 802CEFC8
  W16(c->r[27]+0x00000006u,c->r[6]); // 802CEFCC
  c->r[3]=R16(c->r[1]+0x0000004Cu); // 802CEFD0
  c->r[6]=R16(c->r[24]+0x00000008u); // 802CEFD4
  c->r[0]=R16(c->r[1]+0x0000004Eu); // 802CEFD8
  W16(c->r[27]+0x00000008u,c->r[6]); // 802CEFDC
  c->r[6]=R16(c->r[24]+0x0000000Au); // 802CEFE0
  W16(c->r[27]+0x0000000Au,c->r[6]); // 802CEFE4
  {uint32_t ea=c->r[24]+0x00000000u; WF32(ea,c->f[0]);} // 802CEFE8
  W16(c->r[24]+0x00000004u,c->r[5]); // 802CEFEC
  W16(c->r[24]+0x00000006u,c->r[4]); // 802CEFF0
  W16(c->r[24]+0x00000008u,c->r[3]); // 802CEFF4
  W16(c->r[24]+0x0000000Au,c->r[0]); // 802CEFF8
L_802CEFFC:;
  c->r[24]=c->r[24]+0x0000000Cu; // 802CEFFC
L_802CF000:;
  cmpu(c,0,c->r[24],c->r[23]); // 802CF000
  if (!crb(c,2)) { IRQCHK(c); goto L_802CEF4C; } // 802CF004
  goto L_802CF48C; // 802CF008
L_802CF00C:;
  c->r[4]=R32(c->r[13]+0xFFFFAA54u); // 802CF00C
  c->r[0]=sraw(c,c->r[7],2); // 802CF010
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 802CF014
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 802CF018
  c->r[6]=c->r[4]+0x00000001u; // 802CF01C
  cmps(c,0,(int32_t)c->r[6],5); // 802CF020
  c->r[0]=sraw(c,c->r[0],1); // 802CF024
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802CF028
  c->r[0]=c->r[0]+c->r[3]; // 802CF02C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 802CF030
  c->r[0]=c->r[4]-c->r[0]; // 802CF034
  c->r[0]=c->r[5]+c->r[0]; // 802CF038
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802CF03C
  c->r[3]=c->r[24]+c->r[0]; // 802CF040
  if (crb(c,0)) { goto L_802CF04C; } // 802CF044
  c->r[6]=0u+0xFFFFFFFCu; // 802CF048
L_802CF04C:;
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[6])>>32); // 802CF04C
  c->r[0]=c->r[6]+0x00000001u; // 802CF050
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802CF054
  W32(c->r[13]+0xFFFFAA54u,c->r[0]); // 802CF058
  cmps(c,0,(int32_t)c->r[0],5); // 802CF05C
  c->r[0]=c->r[5]-c->r[7]; // 802CF060
  c->r[0]=sraw(c,c->r[0],2); // 802CF064
  c->r[5]=addc(c,c->r[0],0,c->xer_ca); // 802CF068
  c->r[0]=sraw(c,c->r[4],1); // 802CF06C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 802CF070
  c->r[0]=c->r[0]+c->r[4]; // 802CF074
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 802CF078
  c->r[0]=c->r[6]-c->r[0]; // 802CF07C
  c->r[0]=c->r[5]+c->r[0]; // 802CF080
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802CF084
  c->r[4]=c->r[24]+c->r[0]; // 802CF088
  if (crb(c,0)) { goto L_802CF098; } // 802CF08C
  c->r[6]=0u+0xFFFFFFFCu; // 802CF090
  W32(c->r[13]+0xFFFFAA54u,c->r[6]); // 802CF094
L_802CF098:;
  c->r[27]=c->r[25]+0xFFFFFFF4u; // 802CF098
  c->r[6]=c->r[26]|c->r[26]; // 802CF09C
  c->r[5]=c->r[27]|c->r[27]; // 802CF0A0
  c->lr=0x802CF0A8u; f_802CF4A4(c); // 802CF0A4
  c->r[29]=c->r[24]|c->r[24]; // 802CF0A8
  c->r[28]=c->r[27]|c->r[27]; // 802CF0AC
  goto L_802CF0B8; // 802CF0B0
L_802CF0B4:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF0B4
L_802CF0B8:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF0B8
  c->r[3]=c->r[29]|c->r[29]; // 802CF0BC
  c->r[4]=c->r[27]|c->r[27]; // 802CF0C0
  c->ctr=c->r[12]; // 802CF0C4
  if (true) { c->lr=0x802CF0CCu; dispatch(c,c->ctr); } // 802CF0C8
  cmps(c,0,(int32_t)c->r[3],0); // 802CF0CC
  if (!crb(c,2)) { IRQCHK(c); goto L_802CF0B4; } // 802CF0D0
L_802CF0D4:;
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 802CF0D4
  cmpu(c,0,c->r[29],c->r[28]); // 802CF0D8
  if (crb(c,2)) { goto L_802CF0FC; } // 802CF0DC
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF0E0
  c->r[3]=c->r[28]|c->r[28]; // 802CF0E4
  c->r[4]=c->r[27]|c->r[27]; // 802CF0E8
  c->ctr=c->r[12]; // 802CF0EC
  if (true) { c->lr=0x802CF0F4u; dispatch(c,c->ctr); } // 802CF0F0
  cmps(c,0,(int32_t)c->r[3],0); // 802CF0F4
  if (crb(c,2)) { IRQCHK(c); goto L_802CF0D4; } // 802CF0F8
L_802CF0FC:;
  cmpu(c,0,c->r[29],c->r[28]); // 802CF0FC
  if (!crb(c,0)) { goto L_802CF22C; } // 802CF100
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF104
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CF108
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF10C
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF110
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802CF114
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF118
  c->r[5]=R16(c->r[1]+0x0000003Cu); // 802CF11C
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CF120
  W32(c->r[1]+0x00000038u,c->r[7]); // 802CF124
  c->r[4]=R16(c->r[1]+0x0000003Eu); // 802CF128
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF12C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF130
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CF134
  W32(c->r[1]+0x00000040u,c->r[3]); // 802CF138
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CF13C
  c->r[3]=R16(c->r[1]+0x00000040u); // 802CF140
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CF144
  c->r[0]=R16(c->r[1]+0x00000042u); // 802CF148
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF14C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CF150
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF154
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF158
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CF15C
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CF160
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CF164
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CF168
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CF16C
  goto L_802CF178; // 802CF170
L_802CF174:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF174
L_802CF178:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF178
  c->r[3]=c->r[29]|c->r[29]; // 802CF17C
  c->r[4]=c->r[27]|c->r[27]; // 802CF180
  c->ctr=c->r[12]; // 802CF184
  if (true) { c->lr=0x802CF18Cu; dispatch(c,c->ctr); } // 802CF188
  cmps(c,0,(int32_t)c->r[3],0); // 802CF18C
  if (!crb(c,2)) { IRQCHK(c); goto L_802CF174; } // 802CF190
L_802CF194:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF194
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 802CF198
  c->r[3]=c->r[28]|c->r[28]; // 802CF19C
  c->r[4]=c->r[27]|c->r[27]; // 802CF1A0
  c->ctr=c->r[12]; // 802CF1A4
  if (true) { c->lr=0x802CF1ACu; dispatch(c,c->ctr); } // 802CF1A8
  cmps(c,0,(int32_t)c->r[3],0); // 802CF1AC
  if (crb(c,2)) { IRQCHK(c); goto L_802CF194; } // 802CF1B0
  cmpu(c,0,c->r[29],c->r[28]); // 802CF1B4
  if (!crb(c,0)) { goto L_802CF22C; } // 802CF1B8
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF1BC
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CF1C0
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF1C4
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF1C8
  W32(c->r[1]+0x00000030u,c->r[0]); // 802CF1CC
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF1D0
  c->r[5]=R16(c->r[1]+0x00000030u); // 802CF1D4
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CF1D8
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 802CF1DC
  c->r[4]=R16(c->r[1]+0x00000032u); // 802CF1E0
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF1E4
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF1E8
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CF1EC
  W32(c->r[1]+0x00000034u,c->r[3]); // 802CF1F0
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CF1F4
  c->r[3]=R16(c->r[1]+0x00000034u); // 802CF1F8
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CF1FC
  c->r[0]=R16(c->r[1]+0x00000036u); // 802CF200
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF204
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CF208
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF20C
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF210
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CF214
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CF218
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CF21C
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CF220
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CF224
  IRQCHK(c); goto L_802CF178; // 802CF228
L_802CF22C:;
  cmpu(c,0,c->r[29],c->r[24]); // 802CF22C
  if (!crb(c,2)) { goto L_802CF428; } // 802CF230
  c->r[9]=R32(c->r[29]+0x00000000u); // 802CF234
  c->r[28]=c->r[25]+0xFFFFFFF4u; // 802CF238
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CF23C
  c->r[3]=c->r[24]|c->r[24]; // 802CF240
  c->r[5]=R32(c->r[29]+0x00000008u); // 802CF244
  c->r[4]=c->r[28]|c->r[28]; // 802CF248
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF24C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802CF250
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF254
  c->r[7]=R16(c->r[1]+0x00000024u); // 802CF258
  c->r[0]=R16(c->r[27]+0x00000004u); // 802CF25C
  W32(c->r[1]+0x00000020u,c->r[9]); // 802CF260
  c->r[6]=R16(c->r[1]+0x00000026u); // 802CF264
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF268
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF26C
  c->r[8]=R16(c->r[27]+0x00000006u); // 802CF270
  W32(c->r[1]+0x00000028u,c->r[5]); // 802CF274
  W16(c->r[29]+0x00000006u,c->r[8]); // 802CF278
  c->r[5]=R16(c->r[1]+0x00000028u); // 802CF27C
  c->r[8]=R16(c->r[27]+0x00000008u); // 802CF280
  c->r[0]=R16(c->r[1]+0x0000002Au); // 802CF284
  W16(c->r[29]+0x00000008u,c->r[8]); // 802CF288
  c->r[8]=R16(c->r[27]+0x0000000Au); // 802CF28C
  W16(c->r[29]+0x0000000Au,c->r[8]); // 802CF290
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 802CF294
  W16(c->r[27]+0x00000004u,c->r[7]); // 802CF298
  W16(c->r[27]+0x00000006u,c->r[6]); // 802CF29C
  W16(c->r[27]+0x00000008u,c->r[5]); // 802CF2A0
  W16(c->r[27]+0x0000000Au,c->r[0]); // 802CF2A4
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF2A8
  c->ctr=c->r[12]; // 802CF2AC
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF2B0
  if (true) { c->lr=0x802CF2B8u; dispatch(c,c->ctr); } // 802CF2B4
  cmps(c,0,(int32_t)c->r[3],0); // 802CF2B8
  if (!crb(c,2)) { goto L_802CF35C; } // 802CF2BC
  goto L_802CF2C8; // 802CF2C0
L_802CF2C4:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF2C4
L_802CF2C8:;
  cmpu(c,0,c->r[29],c->r[25]); // 802CF2C8
  if (crb(c,2)) { goto L_802CF2EC; } // 802CF2CC
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF2D0
  c->r[3]=c->r[24]|c->r[24]; // 802CF2D4
  c->r[4]=c->r[29]|c->r[29]; // 802CF2D8
  c->ctr=c->r[12]; // 802CF2DC
  if (true) { c->lr=0x802CF2E4u; dispatch(c,c->ctr); } // 802CF2E0
  cmps(c,0,(int32_t)c->r[3],0); // 802CF2E4
  if (crb(c,2)) { IRQCHK(c); goto L_802CF2C4; } // 802CF2E8
L_802CF2EC:;
  cmpu(c,0,c->r[29],c->r[28]); // 802CF2EC
  if (!crb(c,0)) { goto L_802CF35C; } // 802CF2F0
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF2F4
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CF2F8
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF2FC
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF300
  W32(c->r[1]+0x00000018u,c->r[0]); // 802CF304
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF308
  c->r[5]=R16(c->r[1]+0x00000018u); // 802CF30C
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CF310
  W32(c->r[1]+0x00000014u,c->r[7]); // 802CF314
  c->r[4]=R16(c->r[1]+0x0000001Au); // 802CF318
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF31C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF320
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CF324
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802CF328
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CF32C
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 802CF330
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CF334
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 802CF338
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF33C
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CF340
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF344
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CF348
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CF34C
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CF350
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CF354
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CF358
L_802CF35C:;
  cmpu(c,0,c->r[29],c->r[28]); // 802CF35C
  if (!crb(c,0)) { goto L_802CF420; } // 802CF360
  goto L_802CF36C; // 802CF364
L_802CF368:;
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF368
L_802CF36C:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF36C
  c->r[3]=c->r[24]|c->r[24]; // 802CF370
  c->r[4]=c->r[29]|c->r[29]; // 802CF374
  c->ctr=c->r[12]; // 802CF378
  if (true) { c->lr=0x802CF380u; dispatch(c,c->ctr); } // 802CF37C
  cmps(c,0,(int32_t)c->r[3],0); // 802CF380
  if (crb(c,2)) { IRQCHK(c); goto L_802CF368; } // 802CF384
L_802CF388:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 802CF388
  c->r[28]=c->r[28]+0xFFFFFFF4u; // 802CF38C
  c->r[3]=c->r[24]|c->r[24]; // 802CF390
  c->r[4]=c->r[28]|c->r[28]; // 802CF394
  c->ctr=c->r[12]; // 802CF398
  if (true) { c->lr=0x802CF3A0u; dispatch(c,c->ctr); } // 802CF39C
  cmps(c,0,(int32_t)c->r[3],0); // 802CF3A0
  if (!crb(c,2)) { IRQCHK(c); goto L_802CF388; } // 802CF3A4
  cmpu(c,0,c->r[29],c->r[28]); // 802CF3A8
  if (!crb(c,0)) { goto L_802CF420; } // 802CF3AC
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF3B0
  c->r[0]=R32(c->r[29]+0x00000004u); // 802CF3B4
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF3B8
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF3BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802CF3C0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF3C4
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 802CF3C8
  c->r[0]=R16(c->r[28]+0x00000004u); // 802CF3CC
  W32(c->r[1]+0x00000008u,c->r[7]); // 802CF3D0
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 802CF3D4
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF3D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF3DC
  c->r[6]=R16(c->r[28]+0x00000006u); // 802CF3E0
  W32(c->r[1]+0x00000010u,c->r[3]); // 802CF3E4
  W16(c->r[29]+0x00000006u,c->r[6]); // 802CF3E8
  c->r[3]=R16(c->r[1]+0x00000010u); // 802CF3EC
  c->r[6]=R16(c->r[28]+0x00000008u); // 802CF3F0
  c->r[0]=R16(c->r[1]+0x00000012u); // 802CF3F4
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF3F8
  c->r[6]=R16(c->r[28]+0x0000000Au); // 802CF3FC
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF400
  c->r[29]=c->r[29]+0x0000000Cu; // 802CF404
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802CF408
  W16(c->r[28]+0x00000004u,c->r[5]); // 802CF40C
  W16(c->r[28]+0x00000006u,c->r[4]); // 802CF410
  W16(c->r[28]+0x00000008u,c->r[3]); // 802CF414
  W16(c->r[28]+0x0000000Au,c->r[0]); // 802CF418
  IRQCHK(c); goto L_802CF36C; // 802CF41C
L_802CF420:;
  c->r[24]=c->r[29]|c->r[29]; // 802CF420
  IRQCHK(c); goto L_802CEF18; // 802CF424
L_802CF428:;
  c->r[0]=c->r[29]-c->r[24]; // 802CF428
  c->r[4]=c->r[23]+0xFFFFAAABu; // 802CF42C
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802CF430
  c->r[0]=c->r[25]-c->r[29]; // 802CF434
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 802CF438
  c->r[3]=sraw(c,c->r[3],1); // 802CF43C
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 802CF440
  c->r[0]=sraw(c,c->r[0],1); // 802CF444
  c->r[4]=c->r[3]+c->r[4]; // 802CF448
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802CF44C
  c->r[0]=c->r[0]+c->r[3]; // 802CF450
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802CF454
  if (!crb(c,0)) { goto L_802CF474; } // 802CF458
  c->r[3]=c->r[24]|c->r[24]; // 802CF45C
  c->r[4]=c->r[29]|c->r[29]; // 802CF460
  c->r[5]=c->r[26]|c->r[26]; // 802CF464
  c->lr=0x802CF46Cu; f_802CEEE8(c); // 802CF468
  c->r[24]=c->r[29]|c->r[29]; // 802CF46C
  IRQCHK(c); goto L_802CEF18; // 802CF470
L_802CF474:;
  c->r[3]=c->r[29]|c->r[29]; // 802CF474
  c->r[4]=c->r[25]|c->r[25]; // 802CF478
  c->r[5]=c->r[26]|c->r[26]; // 802CF47C
  c->lr=0x802CF484u; f_802CEEE8(c); // 802CF480
  c->r[25]=c->r[29]|c->r[29]; // 802CF484
  IRQCHK(c); goto L_802CEF18; // 802CF488
L_802CF48C:;
  c->r[11]=c->r[1]+0x00000080u; // 802CF48C
  c->lr=0x802CF494u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CF490
  c->r[0]=R32(c->r[1]+0x00000084u); // 802CF494
  c->lr=c->r[0]; // 802CF498
  c->r[1]=c->r[1]+0x00000080u; // 802CF49C
  return; // 802CF4A0
}

// __sort132<RPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b,PQ54nw4r3g3d6detail7workmem4MdlZ>__3stdFPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZPQ54nw4r3g3d6detail7workmem4MdlZRPFRCQ54nw4r3g3d6detail7workmem4MdlZRCQ54nw4r3g3d6detail7workmem4MdlZ_b_v
void f_802CF4A4(Ctx* __restrict c) {
  trace_call(0x802CF4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CF4A4
  c->r[0]=c->lr; // 802CF4A8
  W32(c->r[1]+0x00000054u,c->r[0]); // 802CF4AC
  c->r[11]=c->r[1]+0x00000050u; // 802CF4B0
  c->lr=0x802CF4B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802CF4B4
  c->r[12]=R32(c->r[6]+0x00000000u); // 802CF4B8
  c->r[29]=c->r[3]|c->r[3]; // 802CF4BC
  c->r[31]=c->r[5]|c->r[5]; // 802CF4C0
  c->r[30]=c->r[4]|c->r[4]; // 802CF4C4
  c->r[27]=c->r[6]|c->r[6]; // 802CF4C8
  c->r[4]=c->r[29]|c->r[29]; // 802CF4CC
  c->r[3]=c->r[31]|c->r[31]; // 802CF4D0
  c->ctr=c->r[12]; // 802CF4D4
  if (true) { c->lr=0x802CF4DCu; dispatch(c,c->ctr); } // 802CF4D8
  c->r[12]=R32(c->r[27]+0x00000000u); // 802CF4DC
  c->r[0]=cntlz(c->r[3]); // 802CF4E0
  c->r[3]=c->r[30]|c->r[30]; // 802CF4E4
  c->r[4]=c->r[31]|c->r[31]; // 802CF4E8
  c->r[28]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CF4EC
  c->ctr=c->r[12]; // 802CF4F0
  if (true) { c->lr=0x802CF4F8u; dispatch(c,c->ctr); } // 802CF4F4
  cmps(c,0,(int32_t)c->r[28],0); // 802CF4F8
  c->r[0]=cntlz(c->r[3]); // 802CF4FC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 802CF500
  if (crb(c,2)) { goto L_802CF510; } // 802CF504
  cmps(c,0,(int32_t)c->r[0],0); // 802CF508
  if (!crb(c,2)) { goto L_802CF6EC; } // 802CF50C
L_802CF510:;
  cmps(c,0,(int32_t)c->r[28],0); // 802CF510
  if (!crb(c,2)) { goto L_802CF58C; } // 802CF514
  cmps(c,0,(int32_t)c->r[0],0); // 802CF518
  if (!crb(c,2)) { goto L_802CF58C; } // 802CF51C
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF520
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF524
  c->r[4]=R32(c->r[29]+0x00000004u); // 802CF528
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF52C
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF530
  c->r[0]=R16(c->r[30]+0x00000004u); // 802CF534
  W32(c->r[1]+0x00000030u,c->r[4]); // 802CF538
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF53C
  c->r[5]=R16(c->r[1]+0x00000030u); // 802CF540
  c->r[0]=R16(c->r[30]+0x00000006u); // 802CF544
  W32(c->r[1]+0x00000034u,c->r[3]); // 802CF548
  c->r[4]=R16(c->r[1]+0x00000032u); // 802CF54C
  W16(c->r[29]+0x00000006u,c->r[0]); // 802CF550
  c->r[3]=R16(c->r[1]+0x00000034u); // 802CF554
  c->r[6]=R16(c->r[30]+0x00000008u); // 802CF558
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 802CF55C
  c->r[0]=R16(c->r[1]+0x00000036u); // 802CF560
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF564
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF568
  c->r[6]=R16(c->r[30]+0x0000000Au); // 802CF56C
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF570
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802CF574
  W16(c->r[30]+0x00000004u,c->r[5]); // 802CF578
  W16(c->r[30]+0x00000006u,c->r[4]); // 802CF57C
  W16(c->r[30]+0x00000008u,c->r[3]); // 802CF580
  W16(c->r[30]+0x0000000Au,c->r[0]); // 802CF584
  goto L_802CF6EC; // 802CF588
L_802CF58C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 802CF58C
  c->r[3]=c->r[30]|c->r[30]; // 802CF590
  c->r[4]=c->r[29]|c->r[29]; // 802CF594
  c->ctr=c->r[12]; // 802CF598
  if (true) { c->lr=0x802CF5A0u; dispatch(c,c->ctr); } // 802CF59C
  cmps(c,0,(int32_t)c->r[3],0); // 802CF5A0
  if (crb(c,2)) { goto L_802CF610; } // 802CF5A4
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF5A8
  {uint32_t ea=c->r[30]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF5AC
  c->r[4]=R32(c->r[29]+0x00000004u); // 802CF5B0
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF5B4
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF5B8
  c->r[0]=R16(c->r[30]+0x00000004u); // 802CF5BC
  W32(c->r[1]+0x00000024u,c->r[4]); // 802CF5C0
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF5C4
  c->r[5]=R16(c->r[1]+0x00000024u); // 802CF5C8
  c->r[0]=R16(c->r[30]+0x00000006u); // 802CF5CC
  W32(c->r[1]+0x00000028u,c->r[3]); // 802CF5D0
  c->r[4]=R16(c->r[1]+0x00000026u); // 802CF5D4
  W16(c->r[29]+0x00000006u,c->r[0]); // 802CF5D8
  c->r[3]=R16(c->r[1]+0x00000028u); // 802CF5DC
  c->r[6]=R16(c->r[30]+0x00000008u); // 802CF5E0
  W32(c->r[1]+0x00000020u,c->r[7]); // 802CF5E4
  c->r[0]=R16(c->r[1]+0x0000002Au); // 802CF5E8
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF5EC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF5F0
  c->r[6]=R16(c->r[30]+0x0000000Au); // 802CF5F4
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF5F8
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802CF5FC
  W16(c->r[30]+0x00000004u,c->r[5]); // 802CF600
  W16(c->r[30]+0x00000006u,c->r[4]); // 802CF604
  W16(c->r[30]+0x00000008u,c->r[3]); // 802CF608
  W16(c->r[30]+0x0000000Au,c->r[0]); // 802CF60C
L_802CF610:;
  cmps(c,0,(int32_t)c->r[28],0); // 802CF610
  if (crb(c,2)) { goto L_802CF684; } // 802CF614
  c->r[7]=R32(c->r[30]+0x00000000u); // 802CF618
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF61C
  c->r[4]=R32(c->r[30]+0x00000004u); // 802CF620
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802CF624
  c->r[3]=R32(c->r[30]+0x00000008u); // 802CF628
  c->r[0]=R16(c->r[31]+0x00000004u); // 802CF62C
  W32(c->r[1]+0x00000018u,c->r[4]); // 802CF630
  W16(c->r[30]+0x00000004u,c->r[0]); // 802CF634
  c->r[5]=R16(c->r[1]+0x00000018u); // 802CF638
  c->r[0]=R16(c->r[31]+0x00000006u); // 802CF63C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802CF640
  c->r[4]=R16(c->r[1]+0x0000001Au); // 802CF644
  W16(c->r[30]+0x00000006u,c->r[0]); // 802CF648
  c->r[3]=R16(c->r[1]+0x0000001Cu); // 802CF64C
  c->r[6]=R16(c->r[31]+0x00000008u); // 802CF650
  W32(c->r[1]+0x00000014u,c->r[7]); // 802CF654
  c->r[0]=R16(c->r[1]+0x0000001Eu); // 802CF658
  W16(c->r[30]+0x00000008u,c->r[6]); // 802CF65C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF660
  c->r[6]=R16(c->r[31]+0x0000000Au); // 802CF664
  W16(c->r[30]+0x0000000Au,c->r[6]); // 802CF668
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802CF66C
  W16(c->r[31]+0x00000004u,c->r[5]); // 802CF670
  W16(c->r[31]+0x00000006u,c->r[4]); // 802CF674
  W16(c->r[31]+0x00000008u,c->r[3]); // 802CF678
  W16(c->r[31]+0x0000000Au,c->r[0]); // 802CF67C
  goto L_802CF6EC; // 802CF680
L_802CF684:;
  c->r[7]=R32(c->r[29]+0x00000000u); // 802CF684
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF688
  c->r[4]=R32(c->r[29]+0x00000004u); // 802CF68C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802CF690
  c->r[3]=R32(c->r[29]+0x00000008u); // 802CF694
  c->r[0]=R16(c->r[31]+0x00000004u); // 802CF698
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802CF69C
  W16(c->r[29]+0x00000004u,c->r[0]); // 802CF6A0
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 802CF6A4
  c->r[0]=R16(c->r[31]+0x00000006u); // 802CF6A8
  W32(c->r[1]+0x00000010u,c->r[3]); // 802CF6AC
  c->r[4]=R16(c->r[1]+0x0000000Eu); // 802CF6B0
  W16(c->r[29]+0x00000006u,c->r[0]); // 802CF6B4
  c->r[3]=R16(c->r[1]+0x00000010u); // 802CF6B8
  c->r[6]=R16(c->r[31]+0x00000008u); // 802CF6BC
  W32(c->r[1]+0x00000008u,c->r[7]); // 802CF6C0
  c->r[0]=R16(c->r[1]+0x00000012u); // 802CF6C4
  W16(c->r[29]+0x00000008u,c->r[6]); // 802CF6C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF6CC
  c->r[6]=R16(c->r[31]+0x0000000Au); // 802CF6D0
  W16(c->r[29]+0x0000000Au,c->r[6]); // 802CF6D4
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802CF6D8
  W16(c->r[31]+0x00000004u,c->r[5]); // 802CF6DC
  W16(c->r[31]+0x00000006u,c->r[4]); // 802CF6E0
  W16(c->r[31]+0x00000008u,c->r[3]); // 802CF6E4
  W16(c->r[31]+0x0000000Au,c->r[0]); // 802CF6E8
L_802CF6EC:;
  c->r[11]=c->r[1]+0x00000050u; // 802CF6EC
  c->lr=0x802CF6F4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802CF6F0
  c->r[0]=R32(c->r[1]+0x00000054u); // 802CF6F4
  c->lr=c->r[0]; // 802CF6F8
  c->r[1]=c->r[1]+0x00000050u; // 802CF6FC
  return; // 802CF700
}

// __ct__Q34nw4r3g3d6CameraFPQ34nw4r3g3d10CameraData
void f_802CF704(Ctx* __restrict c) {
  trace_call(0x802CF704u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 802CF704
  return; // 802CF708
}

// Init__Q34nw4r3g3d6CameraFv
void f_802CF70C(Ctx* __restrict c) {
  trace_call(0x802CF70Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CF70C
  c->r[0]=c->lr; // 802CF710
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CF714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CF718
  c->r[31]=c->r[3]|c->r[3]; // 802CF71C
  c->lr=0x802CF724u; f_802C9BB4(c); // 802CF720
  c->r[9]=c->r[3]|c->r[3]; // 802CF724
  c->r[4]=R16(c->r[3]+0x00000004u); // 802CF728
  c->r[5]=R16(c->r[3]+0x00000006u); // 802CF72C
  c->r[3]=c->r[31]|c->r[31]; // 802CF730
  c->r[7]=R16(c->r[9]+0x00000008u); // 802CF734
  c->r[6]=c->r[4]|c->r[4]; // 802CF738
  c->r[8]=R16(c->r[9]+0x0000000Eu); // 802CF73C
  c->r[9]=R16(c->r[9]+0x00000010u); // 802CF740
  c->lr=0x802CF748u; f_802CF75C(c); // 802CF744
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CF748
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CF74C
  c->lr=c->r[0]; // 802CF750
  c->r[1]=c->r[1]+0x00000010u; // 802CF754
  return; // 802CF758
}

// Init__Q34nw4r3g3d6CameraFUsUsUsUsUsUs
void f_802CF75C(Ctx* __restrict c) {
  trace_call(0x802CF75Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CF75C
  c->r[0]=0u+0x43300000u; // 802CF760
  c->r[10]=R32(c->r[3]+0x00000000u); // 802CF764
  W32(c->r[1]+0x00000008u,c->r[0]); // 802CF768
  cmps(c,0,(int32_t)c->r[10],0); // 802CF76C
  W32(c->r[1]+0x00000010u,c->r[0]); // 802CF770
  if (crb(c,2)) { goto L_802CF870; } // 802CF774
  c->r[3]=0u+0x00000021u; // 802CF778
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 802CF77C
  {uint32_t ea=c->r[2]+0xFFFFAC98u; c->f[8]=c->ps1[8]=RF32(ea);} // 802CF780
  c->r[0]=0u+0x00000000u; // 802CF784
  W32(c->r[10]+0x00000070u,c->r[3]); // 802CF788
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802CF78C
  {uint32_t ea=c->r[10]+0x00000074u; WF32(ea,c->f[8]);} // 802CF790
  {uint32_t ea=c->r[2]+0xFFFFAC9Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF794
  {uint32_t ea=c->r[10]+0x00000078u; WF32(ea,c->f[8]);} // 802CF798
  {uint32_t ea=c->r[2]+0xFFFFACB8u; c->f[3]=RF64(ea);} // 802CF79C
  {uint32_t ea=c->r[10]+0x0000007Cu; WF32(ea,c->f[1]);} // 802CF7A0
  {uint32_t ea=c->r[2]+0xFFFFACA0u; c->f[7]=c->ps1[7]=RF32(ea);} // 802CF7A4
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 802CF7A8
  {uint32_t ea=c->r[10]+0x00000080u; WF32(ea,c->f[8]);} // 802CF7AC
  {uint32_t ea=c->r[2]+0xFFFFACA4u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CF7B0
  {uint32_t ea=c->r[10]+0x00000084u; WF32(ea,c->f[7]);} // 802CF7B4
  {uint32_t ea=c->r[2]+0xFFFFACA8u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CF7B8
  {uint32_t ea=c->r[10]+0x00000088u; WF32(ea,c->f[8]);} // 802CF7BC
  {uint32_t ea=c->r[2]+0xFFFFACACu; c->f[4]=c->ps1[4]=RF32(ea);} // 802CF7C0
  {uint32_t ea=c->r[10]+0x0000008Cu; WF32(ea,c->f[8]);} // 802CF7C4
  {uint32_t ea=c->r[2]+0xFFFFACB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF7C8
  {uint32_t ea=c->r[10]+0x00000090u; WF32(ea,c->f[8]);} // 802CF7CC
  {uint32_t ea=c->r[2]+0xFFFFACB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF7D0
  {uint32_t ea=c->r[10]+0x00000094u; WF32(ea,c->f[8]);} // 802CF7D4
  {uint32_t ea=c->r[10]+0x00000098u; WF32(ea,c->f[8]);} // 802CF7D8
  {uint32_t ea=c->r[10]+0x0000009Cu; WF32(ea,c->f[8]);} // 802CF7DC
  {uint32_t ea=c->r[10]+0x000000A0u; WF32(ea,c->f[8]);} // 802CF7E0
  {uint32_t ea=c->r[10]+0x000000A4u; WF32(ea,c->f[8]);} // 802CF7E4
  W32(c->r[10]+0x000000A8u,c->r[0]); // 802CF7E8
  {uint32_t ea=c->r[10]+0x000000ACu; WF32(ea,c->f[6]);} // 802CF7EC
  {uint32_t ea=c->r[10]+0x000000B0u; WF32(ea,c->f[5]);} // 802CF7F0
  {uint32_t ea=c->r[10]+0x000000B4u; WF32(ea,c->f[4]);} // 802CF7F4
  {uint32_t ea=c->r[10]+0x000000B8u; WF32(ea,c->f[1]);} // 802CF7F8
  W32(c->r[1]+0x00000014u,c->r[8]); // 802CF7FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 802CF800
  {uint32_t ea=c->r[10]+0x000000BCu; WF32(ea,c->f[8]);} // 802CF804
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 802CF808
  {uint32_t ea=c->r[10]+0x000000C0u; WF32(ea,c->f[2]);} // 802CF80C
  {uint32_t ea=c->r[10]+0x000000C4u; WF32(ea,c->f[8]);} // 802CF810
  {uint32_t ea=c->r[10]+0x000000C8u; WF32(ea,c->f[1]);} // 802CF814
  {uint32_t ea=c->r[10]+0x000000CCu; WF32(ea,c->f[0]);} // 802CF818
  {uint32_t ea=c->r[10]+0x000000D0u; WF32(ea,c->f[0]);} // 802CF81C
  {uint32_t ea=c->r[10]+0x000000D4u; WF32(ea,c->f[0]);} // 802CF820
  {uint32_t ea=c->r[10]+0x000000D8u; WF32(ea,c->f[0]);} // 802CF824
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 802CF828
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802CF82C
  {uint32_t ea=c->r[10]+0x000000DCu; WF32(ea,c->f[8]);} // 802CF830
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[3]); // 802CF834
  W32(c->r[1]+0x00000014u,c->r[7]); // 802CF838
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802CF83C
  {uint32_t ea=c->r[10]+0x000000E0u; WF32(ea,c->f[8]);} // 802CF840
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802CF844
  {uint32_t ea=c->r[10]+0x000000E4u; WF32(ea,c->f[1]);} // 802CF848
  {uint32_t ea=c->r[10]+0x000000E8u; WF32(ea,c->f[0]);} // 802CF84C
  {uint32_t ea=c->r[10]+0x000000ECu; WF32(ea,c->f[8]);} // 802CF850
  {uint32_t ea=c->r[10]+0x000000F0u; WF32(ea,c->f[7]);} // 802CF854
  W32(c->r[10]+0x000000F4u,c->r[0]); // 802CF858
  W32(c->r[10]+0x000000F8u,c->r[0]); // 802CF85C
  W32(c->r[10]+0x000000FCu,c->r[4]); // 802CF860
  W32(c->r[10]+0x00000100u,c->r[5]); // 802CF864
  W32(c->r[10]+0x00000104u,c->r[0]); // 802CF868
  W32(c->r[10]+0x00000108u,c->r[0]); // 802CF86C
L_802CF870:;
  c->r[1]=c->r[1]+0x00000020u; // 802CF870
  return; // 802CF874
}

// SetPosition__Q34nw4r3g3d6CameraFfff
void f_802CF878(Ctx* __restrict c) {
  trace_call(0x802CF878u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CF878
  cmps(c,0,(int32_t)c->r[3],0); // 802CF87C
  if (crb(c,2)) return; // 802CF880
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 802CF884
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[2]);} // 802CF888
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[3]);} // 802CF88C
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CF890
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802CF894
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CF898
  return; // 802CF89C
}

// SetPosition__Q34nw4r3g3d6CameraFRCQ34nw4r4math4VEC3
void f_802CF8A0(Ctx* __restrict c) {
  trace_call(0x802CF8A0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CF8A0
  cmps(c,0,(int32_t)c->r[3],0); // 802CF8A4
  if (crb(c,2)) return; // 802CF8A8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF8AC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF8B0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[0]);} // 802CF8B4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF8B8
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 802CF8BC
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[0]);} // 802CF8C0
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CF8C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802CF8C8
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CF8CC
  return; // 802CF8D0
}

// SetPosture__Q34nw4r3g3d6CameraFRCQ44nw4r3g3d6Camera11PostureInfo
void f_802CF8D4(Ctx* __restrict c) {
  trace_call(0x802CF8D4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CF8D4
  cmps(c,0,(int32_t)c->r[3],0); // 802CF8D8
  if (crb(c,2)) return; // 802CF8DC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802CF8E0
  cmps(c,0,(int32_t)c->r[0],1); // 802CF8E4
  if (crb(c,2)) { goto L_802CF9E0; } // 802CF8E8
  if (!crb(c,0)) { goto L_802CF8FC; } // 802CF8EC
  cmps(c,0,(int32_t)c->r[0],0); // 802CF8F0
  if (!crb(c,0)) { goto L_802CF908; } // 802CF8F4
  return; // 802CF8F8
L_802CF8FC:;
  cmps(c,0,(int32_t)c->r[0],3); // 802CF8FC
  if (!crb(c,0)) return; // 802CF900
  goto L_802CFA5C; // 802CF904
L_802CF908:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CF908
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802CF90C
  if (crb(c,2)) { goto L_802CF994; } // 802CF910
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF914
  c->r[0]=0u+0x00000000u; // 802CF918
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF91C
  fcmp(c,0,c->f[1],c->f[0]); // 802CF920
  if (!crb(c,2)) { goto L_802CF948; } // 802CF924
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF928
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF92C
  fcmp(c,0,c->f[1],c->f[0]); // 802CF930
  if (!crb(c,2)) { goto L_802CF948; } // 802CF934
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF938
  {uint32_t ea=c->r[3]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF93C
  fcmp(c,0,c->f[1],c->f[0]); // 802CF940
  if (crb(c,2)) { goto L_802CF94C; } // 802CF944
L_802CF948:;
  c->r[0]=0u+0x00000001u; // 802CF948
L_802CF94C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CF94C
  if (!crb(c,2)) { goto L_802CF994; } // 802CF950
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF954
  c->r[0]=0u+0x00000000u; // 802CF958
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF95C
  fcmp(c,0,c->f[1],c->f[0]); // 802CF960
  if (!crb(c,2)) { goto L_802CF988; } // 802CF964
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF968
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF96C
  fcmp(c,0,c->f[1],c->f[0]); // 802CF970
  if (!crb(c,2)) { goto L_802CF988; } // 802CF974
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF978
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF97C
  fcmp(c,0,c->f[1],c->f[0]); // 802CF980
  if (crb(c,2)) { goto L_802CF98C; } // 802CF984
L_802CF988:;
  c->r[0]=0u+0x00000001u; // 802CF988
L_802CF98C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CF98C
  if (crb(c,2)) return; // 802CF990
L_802CF994:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CF994
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF998
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 802CF99C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF9A0
  c->r[0]=c->r[0]|0x00000001u; // 802CF9A4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CF9A8
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CF9AC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802CF9B0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CF9B4
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 802CF9B8
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF9BC
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[0]);} // 802CF9C0
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF9C4
  {uint32_t ea=c->r[3]+0x00000088u; WF32(ea,c->f[3]);} // 802CF9C8
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[2]);} // 802CF9CC
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 802CF9D0
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 802CF9D4
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CF9D8
  return; // 802CF9DC
L_802CF9E0:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CF9E0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802CF9E4
  if (crb(c,2)) { goto L_802CFA2C; } // 802CF9E8
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CF9EC
  c->r[0]=0u+0x00000000u; // 802CF9F0
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CF9F4
  fcmp(c,0,c->f[1],c->f[0]); // 802CF9F8
  if (!crb(c,2)) { goto L_802CFA20; } // 802CF9FC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFA00
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFA04
  fcmp(c,0,c->f[1],c->f[0]); // 802CFA08
  if (!crb(c,2)) { goto L_802CFA20; } // 802CFA0C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFA10
  {uint32_t ea=c->r[3]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFA14
  fcmp(c,0,c->f[1],c->f[0]); // 802CFA18
  if (crb(c,2)) { goto L_802CFA24; } // 802CFA1C
L_802CFA20:;
  c->r[0]=0u+0x00000001u; // 802CFA20
L_802CFA24:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CFA24
  if (crb(c,2)) return; // 802CFA28
L_802CFA2C:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CFA2C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFA30
  {uint32_t ea=c->r[4]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFA34
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 802CFA38
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 802CFA3C
  c->r[0]=c->r[0]|0x00000002u; // 802CFA40
  {uint32_t ea=c->r[4]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFA44
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802CFA48
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 802CFA4C
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 802CFA50
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CFA54
  return; // 802CFA58
L_802CFA5C:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CFA5C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802CFA60
  if (crb(c,2)) { goto L_802CFAB8; } // 802CFA64
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFA68
  c->r[0]=0u+0x00000000u; // 802CFA6C
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFA70
  fcmp(c,0,c->f[1],c->f[0]); // 802CFA74
  if (!crb(c,2)) { goto L_802CFA9C; } // 802CFA78
  {uint32_t ea=c->r[4]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFA7C
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFA80
  fcmp(c,0,c->f[1],c->f[0]); // 802CFA84
  if (!crb(c,2)) { goto L_802CFA9C; } // 802CFA88
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFA8C
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFA90
  fcmp(c,0,c->f[1],c->f[0]); // 802CFA94
  if (crb(c,2)) { goto L_802CFAA0; } // 802CFA98
L_802CFA9C:;
  c->r[0]=0u+0x00000001u; // 802CFA9C
L_802CFAA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802CFAA0
  if (!crb(c,2)) { goto L_802CFAB8; } // 802CFAA4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFAA8
  {uint32_t ea=c->r[3]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFAAC
  fcmp(c,0,c->f[1],c->f[0]); // 802CFAB0
  if (crb(c,2)) return; // 802CFAB4
L_802CFAB8:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CFAB8
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFABC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 802CFAC0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFAC4
  c->r[0]=c->r[0]|0x00000004u; // 802CFAC8
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFACC
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CFAD0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802CFAD4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFAD8
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[3]);} // 802CFADC
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 802CFAE0
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 802CFAE4
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 802CFAE8
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CFAEC
  return; // 802CFAF0
}

// SetCameraMtxDirectly__Q34nw4r3g3d6CameraFRCQ34nw4r4math5MTX34
void f_802CFAF4(Ctx* __restrict c) {
  trace_call(0x802CFAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFAF4
  c->r[0]=c->lr; // 802CFAF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CFAFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CFB00
  c->r[31]=R32(c->r[3]+0x00000000u); // 802CFB04
  cmps(c,0,(int32_t)c->r[31],0); // 802CFB08
  if (crb(c,2)) { goto L_802CFB28; } // 802CFB0C
  c->r[3]=c->r[4]|c->r[4]; // 802CFB10
  c->r[4]=c->r[31]|c->r[31]; // 802CFB14
  c->lr=0x802CFB1Cu; f_803535C0(c); // 802CFB18
  c->r[0]=R32(c->r[31]+0x00000070u); // 802CFB1C
  c->r[0]=c->r[0]|0x00000008u; // 802CFB20
  W32(c->r[31]+0x00000070u,c->r[0]); // 802CFB24
L_802CFB28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CFB28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CFB2C
  c->lr=c->r[0]; // 802CFB30
  c->r[1]=c->r[1]+0x00000010u; // 802CFB34
  return; // 802CFB38
}

// SetPerspective__Q34nw4r3g3d6CameraFffff
void f_802CFB3C(Ctx* __restrict c) {
  trace_call(0x802CFB3Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CFB3C
  cmps(c,0,(int32_t)c->r[3],0); // 802CFB40
  if (crb(c,2)) return; // 802CFB44
  c->r[0]=0u+0x00000000u; // 802CFB48
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802CFB4C
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 802CFB50
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 802CFB54
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[3]);} // 802CFB58
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[4]);} // 802CFB5C
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CFB60
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 802CFB64
  c->r[0]=c->r[0]|0x00000020u; // 802CFB68
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CFB6C
  return; // 802CFB70
}

// SetOrtho__Q34nw4r3g3d6CameraFffffff
void f_802CFB74(Ctx* __restrict c) {
  trace_call(0x802CFB74u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CFB74
  cmps(c,0,(int32_t)c->r[3],0); // 802CFB78
  if (crb(c,2)) return; // 802CFB7C
  c->r[0]=0u+0x00000001u; // 802CFB80
  W32(c->r[3]+0x000000A8u,c->r[0]); // 802CFB84
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[1]);} // 802CFB88
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[2]);} // 802CFB8C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[3]);} // 802CFB90
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 802CFB94
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[5]);} // 802CFB98
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 802CFB9C
  c->r[0]=R32(c->r[3]+0x00000070u); // 802CFBA0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 802CFBA4
  c->r[0]=c->r[0]|0x00000040u; // 802CFBA8
  W32(c->r[3]+0x00000070u,c->r[0]); // 802CFBAC
  return; // 802CFBB0
}

// fn_802CFBB4
void f_802CFBB4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CFBB4
  cmps(c,0,(int32_t)c->r[3],0); // 802CFBB8
  if (crb(c,2)) return; // 802CFBBC
  W32(c->r[3]+0x000000F4u,c->r[4]); // 802CFBC0
  W32(c->r[3]+0x000000F8u,c->r[5]); // 802CFBC4
  W32(c->r[3]+0x000000FCu,c->r[6]); // 802CFBC8
  W32(c->r[3]+0x00000100u,c->r[7]); // 802CFBCC
  return; // 802CFBD0
}

// SetViewport__Q34nw4r3g3d6CameraFffff
void f_802CFBD4(Ctx* __restrict c) {
  trace_call(0x802CFBD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFBD4
  c->r[0]=c->lr; // 802CFBD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802CFBDC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 802CFBE0
  c->f[31]=c->f[4]; // 802CFBE4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 802CFBE8
  c->f[30]=c->f[3]; // 802CFBEC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[29]);} // 802CFBF0
  c->f[29]=c->f[2]; // 802CFBF4
  W32(c->r[1]+0x00000014u,c->r[31]); // 802CFBF8
  c->r[4]=R32(c->r[3]+0x00000000u); // 802CFBFC
  cmps(c,0,(int32_t)c->r[4],0); // 802CFC00
  if (crb(c,2)) { goto L_802CFC50; } // 802CFC04
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[1]);} // 802CFC08
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[2]);} // 802CFC0C
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[3]);} // 802CFC10
  {uint32_t ea=c->r[4]+0x000000E8u; WF32(ea,c->f[4]);} // 802CFC14
  c->r[31]=R32(c->r[3]+0x00000000u); // 802CFC18
  cmps(c,0,(int32_t)c->r[31],0); // 802CFC1C
  if (crb(c,2)) { goto L_802CFC50; } // 802CFC20
  c->lr=0x802CFC28u; f_802F0CA0(c); // 802CFC24
  c->f[1]=c->f[29]; // 802CFC28
  W32(c->r[31]+0x000000F4u,c->r[3]); // 802CFC2C
  c->lr=0x802CFC34u; f_802F0CA0(c); // 802CFC30
  c->f[1]=c->f[30]; // 802CFC34
  W32(c->r[31]+0x000000F8u,c->r[3]); // 802CFC38
  c->lr=0x802CFC40u; f_802F0CA0(c); // 802CFC3C
  c->f[1]=c->f[31]; // 802CFC40
  W32(c->r[31]+0x000000FCu,c->r[3]); // 802CFC44
  c->lr=0x802CFC4Cu; f_802F0CA0(c); // 802CFC48
  W32(c->r[31]+0x00000100u,c->r[3]); // 802CFC4C
L_802CFC50:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802CFC50
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 802CFC54
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 802CFC58
  {uint32_t ea=c->r[1]+0x00000018u; c->f[29]=RF64(ea);} // 802CFC5C
  c->r[31]=R32(c->r[1]+0x00000014u); // 802CFC60
  c->lr=c->r[0]; // 802CFC64
  c->r[1]=c->r[1]+0x00000030u; // 802CFC68
  return; // 802CFC6C
}

// SetViewportZRange__Q34nw4r3g3d6CameraFff
void f_802CFC70(Ctx* __restrict c) {
  trace_call(0x802CFC70u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CFC70
  cmps(c,0,(int32_t)c->r[3],0); // 802CFC74
  if (crb(c,2)) return; // 802CFC78
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[1]);} // 802CFC7C
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[2]);} // 802CFC80
  return; // 802CFC84
}

// GetViewport__Q34nw4r3g3d6CameraCFPfPfPfPfPfPf
void f_802CFC88(Ctx* __restrict c) {
  trace_call(0x802CFC88u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802CFC88
  cmps(c,0,(int32_t)c->r[3],0); // 802CFC8C
  if (crb(c,2)) return; // 802CFC90
  cmps(c,0,(int32_t)c->r[4],0); // 802CFC94
  if (crb(c,2)) { goto L_802CFCA4; } // 802CFC98
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFC9C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 802CFCA0
L_802CFCA4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802CFCA4
  if (crb(c,2)) { goto L_802CFCB4; } // 802CFCA8
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFCAC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 802CFCB0
L_802CFCB4:;
  cmps(c,0,(int32_t)c->r[6],0); // 802CFCB4
  if (crb(c,2)) { goto L_802CFCC4; } // 802CFCB8
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFCBC
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 802CFCC0
L_802CFCC4:;
  cmps(c,0,(int32_t)c->r[7],0); // 802CFCC4
  if (crb(c,2)) { goto L_802CFCD4; } // 802CFCC8
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFCCC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 802CFCD0
L_802CFCD4:;
  cmps(c,0,(int32_t)c->r[8],0); // 802CFCD4
  if (crb(c,2)) { goto L_802CFCE4; } // 802CFCD8
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFCDC
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 802CFCE0
L_802CFCE4:;
  cmps(c,0,(int32_t)c->r[9],0); // 802CFCE4
  if (crb(c,2)) return; // 802CFCE8
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFCEC
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 802CFCF0
  return; // 802CFCF4
}

// GetCameraMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_802CFCF8(Ctx* __restrict c) {
  trace_call(0x802CFCF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFCF8
  c->r[0]=c->lr; // 802CFCFC
  cmps(c,0,(int32_t)c->r[4],0); // 802CFD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CFD04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CFD08
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CFD0C
  c->r[30]=c->r[4]|c->r[4]; // 802CFD10
  if (crb(c,2)) { goto L_802CFD40; } // 802CFD14
  c->r[31]=R32(c->r[3]+0x00000000u); // 802CFD18
  cmps(c,0,(int32_t)c->r[31],0); // 802CFD1C
  if (crb(c,2)) { goto L_802CFD40; } // 802CFD20
  c->r[0]=R32(c->r[31]+0x00000070u); // 802CFD24
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802CFD28
  if (!crb(c,2)) { goto L_802CFD34; } // 802CFD2C
  c->lr=0x802CFD34u; f_802D0110(c); // 802CFD30
L_802CFD34:;
  c->r[3]=c->r[31]|c->r[31]; // 802CFD34
  c->r[4]=c->r[30]|c->r[30]; // 802CFD38
  c->lr=0x802CFD40u; f_803535C0(c); // 802CFD3C
L_802CFD40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CFD40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CFD44
  c->r[30]=R32(c->r[1]+0x00000008u); // 802CFD48
  c->lr=c->r[0]; // 802CFD4C
  c->r[1]=c->r[1]+0x00000010u; // 802CFD50
  return; // 802CFD54
}

// GetProjectionMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX44
void f_802CFD58(Ctx* __restrict c) {
  trace_call(0x802CFD58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFD58
  c->r[0]=c->lr; // 802CFD5C
  cmps(c,0,(int32_t)c->r[4],0); // 802CFD60
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CFD64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CFD68
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CFD6C
  c->r[30]=c->r[4]|c->r[4]; // 802CFD70
  if (crb(c,2)) { goto L_802CFE1C; } // 802CFD74
  c->r[31]=R32(c->r[3]+0x00000000u); // 802CFD78
  cmps(c,0,(int32_t)c->r[31],0); // 802CFD7C
  if (crb(c,2)) { goto L_802CFE1C; } // 802CFD80
  c->r[0]=R32(c->r[31]+0x00000070u); // 802CFD84
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 802CFD88
  if (!crb(c,2)) { goto L_802CFE10; } // 802CFD8C
  c->r[3]=R32(c->r[31]+0x00000070u); // 802CFD90
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 802CFD94
  if (crb(c,2)) { goto L_802CFDC0; } // 802CFD98
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFD9C
  c->r[3]=c->r[31]+0x00000030u; // 802CFDA0
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFDA4
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFDA8
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFDAC
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFDB0
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CFDB4
  c->lr=0x802CFDBCu; f_80354388(c); // 802CFDB8
  goto L_802CFE04; // 802CFDBC
L_802CFDC0:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802CFDC0
  if (crb(c,2)) { goto L_802CFDEC; } // 802CFDC4
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFDC8
  c->r[3]=c->r[31]+0x00000030u; // 802CFDCC
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFDD0
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFDD4
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFDD8
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFDDC
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CFDE0
  c->lr=0x802CFDE8u; f_80354200(c); // 802CFDE4
  goto L_802CFE04; // 802CFDE8
L_802CFDEC:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFDEC
  c->r[3]=c->r[31]+0x00000030u; // 802CFDF0
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFDF4
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFDF8
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFDFC
  c->lr=0x802CFE04u; f_8035429C(c); // 802CFE00
L_802CFE04:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 802CFE04
  c->r[0]=c->r[0]|0x00000080u; // 802CFE08
  W32(c->r[31]+0x00000070u,c->r[0]); // 802CFE0C
L_802CFE10:;
  c->r[3]=c->r[30]|c->r[30]; // 802CFE10
  c->r[4]=c->r[31]+0x00000030u; // 802CFE14
  c->lr=0x802CFE1Cu; f_8026D0A4(c); // 802CFE18
L_802CFE1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CFE1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CFE20
  c->r[30]=R32(c->r[1]+0x00000008u); // 802CFE24
  c->lr=c->r[0]; // 802CFE28
  c->r[1]=c->r[1]+0x00000010u; // 802CFE2C
  return; // 802CFE30
}

// GetProjectionTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_802CFE34(Ctx* __restrict c) {
  trace_call(0x802CFE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFE34
  c->r[0]=c->lr; // 802CFE38
  cmps(c,0,(int32_t)c->r[4],0); // 802CFE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CFE40
  if (crb(c,2)) { goto L_802CFEF4; } // 802CFE44
  c->r[5]=R32(c->r[3]+0x00000000u); // 802CFE48
  cmps(c,0,(int32_t)c->r[5],0); // 802CFE4C
  if (crb(c,2)) { goto L_802CFEF4; } // 802CFE50
  c->r[3]=R32(c->r[5]+0x00000070u); // 802CFE54
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 802CFE58
  if (crb(c,2)) { goto L_802CFE90; } // 802CFE5C
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFE60
  c->r[3]=c->r[4]|c->r[4]; // 802CFE64
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFE68
  c->f[6]=-c->f[0]; // 802CFE6C
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFE70
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFE74
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFE78
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFE7C
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[7]=c->ps1[7]=RF32(ea);} // 802CFE80
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[8]=c->ps1[8]=RF32(ea);} // 802CFE84
  c->lr=0x802CFE8Cu; f_80354124(c); // 802CFE88
  goto L_802CFEF4; // 802CFE8C
L_802CFE90:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802CFE90
  if (crb(c,2)) { goto L_802CFED0; } // 802CFE94
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFE98
  c->r[3]=c->r[4]|c->r[4]; // 802CFE9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802CFEA0
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFEA4
  {uint32_t ea=c->r[5]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFEA8
  c->f[7]=-c->f[0]; // 802CFEAC
  {uint32_t ea=c->r[5]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFEB0
  {uint32_t ea=c->r[5]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFEB4
  {uint32_t ea=c->r[5]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFEB8
  {uint32_t ea=c->r[5]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFEBC
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[6]=c->ps1[6]=RF32(ea);} // 802CFEC0
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[8]=c->ps1[8]=RF32(ea);} // 802CFEC4
  c->lr=0x802CFECCu; f_80353F88(c); // 802CFEC8
  goto L_802CFEF4; // 802CFECC
L_802CFED0:;
  {uint32_t ea=c->r[5]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFED0
  c->r[3]=c->r[4]|c->r[4]; // 802CFED4
  {uint32_t ea=c->r[5]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFED8
  c->f[4]=-c->f[0]; // 802CFEDC
  {uint32_t ea=c->r[5]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFEE0
  {uint32_t ea=c->r[5]+0x000000CCu; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFEE4
  {uint32_t ea=c->r[5]+0x000000D4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFEE8
  {uint32_t ea=c->r[5]+0x000000D8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CFEEC
  c->lr=0x802CFEF4u; f_8035402C(c); // 802CFEF0
L_802CFEF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CFEF4
  c->lr=c->r[0]; // 802CFEF8
  c->r[1]=c->r[1]+0x00000010u; // 802CFEFC
  return; // 802CFF00
}

// GetEnvironmentTexMtx__Q34nw4r3g3d6CameraCFPQ34nw4r4math5MTX34
void f_802CFF04(Ctx* __restrict c) {
  trace_call(0x802CFF04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFF04
  c->r[0]=c->lr; // 802CFF08
  cmps(c,0,(int32_t)c->r[4],0); // 802CFF0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CFF10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CFF14
  W32(c->r[1]+0x00000008u,c->r[30]); // 802CFF18
  c->r[30]=c->r[4]|c->r[4]; // 802CFF1C
  if (crb(c,2)) { goto L_802CFF6C; } // 802CFF20
  c->r[31]=R32(c->r[3]+0x00000000u); // 802CFF24
  cmps(c,0,(int32_t)c->r[31],0); // 802CFF28
  if (crb(c,2)) { goto L_802CFF6C; } // 802CFF2C
  c->r[3]=c->r[30]|c->r[30]; // 802CFF30
  c->lr=0x802CFF38u; f_80353594(c); // 802CFF34
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFF38
  {uint32_t ea=c->r[2]+0xFFFFAC98u; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFF3C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802CFF40
  {uint32_t ea=c->r[2]+0xFFFFACA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802CFF44
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFF48
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802CFF4C
  {uint32_t ea=c->r[31]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFF50
  c->f[2]=-c->f[2]; // 802CFF54
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[2]);} // 802CFF58
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFF5C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[2]);} // 802CFF60
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[1]);} // 802CFF64
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 802CFF68
L_802CFF6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CFF6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CFF70
  c->r[30]=R32(c->r[1]+0x00000008u); // 802CFF74
  c->lr=c->r[0]; // 802CFF78
  c->r[1]=c->r[1]+0x00000010u; // 802CFF7C
  return; // 802CFF80
}

// GXSetViewport__Q34nw4r3g3d6CameraCFv
void f_802CFF84(Ctx* __restrict c) {
  trace_call(0x802CFF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802CFF84
  c->r[0]=c->lr; // 802CFF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 802CFF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802CFF90
  c->r[31]=R32(c->r[3]+0x00000000u); // 802CFF94
  cmps(c,0,(int32_t)c->r[31],0); // 802CFF98
  if (crb(c,2)) { goto L_802CFFF4; } // 802CFF9C
  c->lr=0x802CFFA4u; f_802C9BB4(c); // 802CFFA0
  c->r[0]=R8(c->r[3]+0x00000018u); // 802CFFA4
  cmps(c,0,(int32_t)c->r[0],0); // 802CFFA8
  if (crb(c,2)) { goto L_802CFFD8; } // 802CFFAC
  c->r[0]=R32(c->r[31]+0x00000070u); // 802CFFB0
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFFB4
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFFB8
  c->r[3]=rotl(c->r[0],24)&0x00000001u; // 802CFFBC
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFFC0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFFC4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFFC8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CFFCC
  c->lr=0x802CFFD4u; f_80349544(c); // 802CFFD0
  goto L_802CFFF4; // 802CFFD4
L_802CFFD8:;
  {uint32_t ea=c->r[31]+0x000000DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802CFFD8
  {uint32_t ea=c->r[31]+0x000000E0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802CFFDC
  {uint32_t ea=c->r[31]+0x000000E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802CFFE0
  {uint32_t ea=c->r[31]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802CFFE4
  {uint32_t ea=c->r[31]+0x000000ECu; c->f[5]=c->ps1[5]=RF32(ea);} // 802CFFE8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[6]=c->ps1[6]=RF32(ea);} // 802CFFEC
  c->lr=0x802CFFF4u; f_80349580(c); // 802CFFF0
L_802CFFF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802CFFF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802CFFF8
  c->lr=c->r[0]; // 802CFFFC
  c->r[1]=c->r[1]+0x00000010u; // 802D0000
  return; // 802D0004
}

// GXSetProjection__Q34nw4r3g3d6CameraCFv
void f_802D0008(Ctx* __restrict c) {
  trace_call(0x802D0008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0008
  c->r[0]=c->lr; // 802D000C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D0010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D0014
  c->r[31]=R32(c->r[3]+0x00000000u); // 802D0018
  cmps(c,0,(int32_t)c->r[31],0); // 802D001C
  if (crb(c,2)) { goto L_802D00BC; } // 802D0020
  c->r[0]=R32(c->r[31]+0x00000070u); // 802D0024
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 802D0028
  if (!crb(c,2)) { goto L_802D00B0; } // 802D002C
  c->r[3]=R32(c->r[31]+0x00000070u); // 802D0030
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 802D0034
  if (crb(c,2)) { goto L_802D0060; } // 802D0038
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D003C
  c->r[3]=c->r[31]+0x00000030u; // 802D0040
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0044
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0048
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D004C
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0050
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0054
  c->lr=0x802D005Cu; f_80354388(c); // 802D0058
  goto L_802D00A4; // 802D005C
L_802D0060:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802D0060
  if (crb(c,2)) { goto L_802D008C; } // 802D0064
  {uint32_t ea=c->r[31]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0068
  c->r[3]=c->r[31]+0x00000030u; // 802D006C
  {uint32_t ea=c->r[31]+0x000000C0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0070
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0074
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0078
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D007C
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0080
  c->lr=0x802D0088u; f_80354200(c); // 802D0084
  goto L_802D00A4; // 802D0088
L_802D008C:;
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D008C
  c->r[3]=c->r[31]+0x00000030u; // 802D0090
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0094
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0098
  {uint32_t ea=c->r[31]+0x000000B8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D009C
  c->lr=0x802D00A4u; f_8035429C(c); // 802D00A0
L_802D00A4:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 802D00A4
  c->r[0]=c->r[0]|0x00000080u; // 802D00A8
  W32(c->r[31]+0x00000070u,c->r[0]); // 802D00AC
L_802D00B0:;
  c->r[4]=R32(c->r[31]+0x000000A8u); // 802D00B0
  c->r[3]=c->r[31]+0x00000030u; // 802D00B4
  c->lr=0x802D00BCu; f_803491E8(c); // 802D00B8
L_802D00BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D00BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D00C0
  c->lr=c->r[0]; // 802D00C4
  c->r[1]=c->r[1]+0x00000010u; // 802D00C8
  return; // 802D00CC
}

// GXSetScissor__Q34nw4r3g3d6CameraCFv
void f_802D00D0(Ctx* __restrict c) {
  trace_call(0x802D00D0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 802D00D0
  cmps(c,0,(int32_t)c->r[6],0); // 802D00D4
  if (crb(c,2)) return; // 802D00D8
  c->r[3]=R32(c->r[6]+0x000000F4u); // 802D00DC
  c->r[4]=R32(c->r[6]+0x000000F8u); // 802D00E0
  c->r[5]=R32(c->r[6]+0x000000FCu); // 802D00E4
  c->r[6]=R32(c->r[6]+0x00000100u); // 802D00E8
  f_803495AC(c); return; // 802D00EC
  return; // 802D00F0
}

// GXSetScissorBoxOffset__Q34nw4r3g3d6CameraCFv
void f_802D00F4(Ctx* __restrict c) {
  trace_call(0x802D00F4u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 802D00F4
  cmps(c,0,(int32_t)c->r[4],0); // 802D00F8
  if (crb(c,2)) return; // 802D00FC
  c->r[3]=R32(c->r[4]+0x00000104u); // 802D0100
  c->r[4]=R32(c->r[4]+0x00000108u); // 802D0104
  f_80349614(c); return; // 802D0108
  return; // 802D010C
}

// UpdateCameraMtx__Q34nw4r3g3d6CameraCFv
void f_802D0110(Ctx* __restrict c) {
  trace_call(0x802D0110u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0110
  c->r[0]=c->lr; // 802D0114
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802D0118
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 802D011C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 802D0120
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 802D0124
  c->r[31]=R32(c->r[3]+0x00000000u); // 802D0128
  c->r[3]=R32(c->r[31]+0x00000070u); // 802D012C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 802D0130
  if (crb(c,2)) { goto L_802D0150; } // 802D0134
  c->r[3]=c->r[31]|c->r[31]; // 802D0138
  c->r[4]=c->r[31]+0x00000074u; // 802D013C
  c->r[5]=c->r[31]+0x00000080u; // 802D0140
  c->r[6]=c->r[31]+0x0000008Cu; // 802D0144
  c->lr=0x802D014Cu; f_80353E14(c); // 802D0148
  goto L_802D04EC; // 802D014C
L_802D0150:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 802D0150
  if (crb(c,2)) { goto L_802D0388; } // 802D0154
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0158
  {uint32_t ea=c->r[31]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D015C
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0160
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[0]); // 802D0164
  {uint32_t ea=c->r[31]+0x00000094u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0168
  {uint32_t ea=c->r[2]+0xFFFFAC98u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D016C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0170
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 802D0174
  {uint32_t ea=c->r[31]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0178
  fcmp(c,0,c->f[2],c->f[5]); // 802D017C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802D0180
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[5]);} // 802D0184
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[3]);} // 802D0188
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 802D018C
  if (!crb(c,2)) { goto L_802D0220; } // 802D0190
  fcmp(c,0,c->f[2],c->f[3]); // 802D0194
  if (!crb(c,2)) { goto L_802D0220; } // 802D0198
  {uint32_t ea=c->r[2]+0xFFFFACA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D019C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 802D01A0
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 802D01A4
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 802D01A8
  {uint32_t ea=c->r[31]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D01AC
  c->f[0]=-c->f[0]; // 802D01B0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D01B4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[2]);} // 802D01B8
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 802D01BC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[2]);} // 802D01C0
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 802D01C4
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D01C8
  fcmp(c,0,c->f[0],c->f[2]); // 802D01CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802D01D0
  if (!crb(c,2)) { goto L_802D01FC; } // 802D01D4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802D01D8
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D01DC
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D01E0
  c->f[1]=-c->f[1]; // 802D01E4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 802D01E8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802D01EC
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D01F0
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D01F4
  goto L_802D04EC; // 802D01F8
L_802D01FC:;
  {uint32_t ea=c->r[2]+0xFFFFACC0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D01FC
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 802D0200
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0204
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0208
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 802D020C
  {uint32_t ea=c->r[31]+0x00000078u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0210
  c->f[0]=-c->f[0]; // 802D0214
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D0218
  goto L_802D04EC; // 802D021C
L_802D0220:;
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0220
  c->r[3]=c->r[1]+0x0000007Cu; // 802D0224
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0228
  c->r[4]=c->r[3]|c->r[3]; // 802D022C
  c->f[2]=-c->f[0]; // 802D0230
  {uint32_t ea=c->r[2]+0xFFFFAC98u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0234
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 802D0238
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 802D023C
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[2]);} // 802D0240
  c->lr=0x802D0248u; f_80354444(c); // 802D0244
  c->r[3]=c->r[1]+0x00000070u; // 802D0248
  c->r[4]=c->r[3]|c->r[3]; // 802D024C
  c->lr=0x802D0254u; f_80354444(c); // 802D0250
  c->r[3]=c->r[1]+0x0000007Cu; // 802D0254
  c->r[4]=c->r[1]+0x00000070u; // 802D0258
  c->r[5]=c->r[1]+0x00000064u; // 802D025C
  c->lr=0x802D0264u; f_803544EC(c); // 802D0260
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0264
  c->r[3]=c->r[1]+0x00000024u; // 802D0268
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D026C
  c->r[4]=c->r[1]+0x00000020u; // 802D0270
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0274
  c->lr=0x802D027Cu; f_8026C998(c); // 802D0278
  {uint32_t ea=c->r[1]+0x00000024u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D027C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0280
  {uint32_t ea=c->r[1]+0x00000020u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D0284
  {uint32_t ea=c->r[1]+0x00000070u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0288
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[0]); // 802D028C
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 802D0290
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0294
  c->f[0]=c->ps1[0]=S(c->f[10]*c->f[4]); // 802D0298
  {uint32_t ea=c->r[1]+0x00000068u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D029C
  {uint32_t ea=c->r[1]+0x00000078u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D02A0
  c->f[7]=c->ps1[7]=S(c->f[11]*c->f[8]); // 802D02A4
  c->f[9]=c->ps1[9]=S(c->f[2]+c->f[0]); // 802D02A8
  c->f[3]=c->ps1[3]=S(c->f[11]*c->f[6]); // 802D02AC
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[5]); // 802D02B0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[7]);} // 802D02B4
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[4]); // 802D02B8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 802D02BC
  c->f[4]=c->ps1[4]=S(c->f[3]+c->f[2]); // 802D02C0
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 802D02C4
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[7]);} // 802D02C8
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[6]); // 802D02CC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 802D02D0
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 802D02D4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 802D02D8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[4]);} // 802D02DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 802D02E0
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,6,ea,0,0);} // 802D02E4
  {uint32_t ea=c->r[1]+0x0000005Cu; psq_load(c,5,ea,0,0);} // 802D02E8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[9]);} // 802D02EC
  {double t0=S(c->f[6]*c->f[5]), t1=S(c->ps1[6]*c->ps1[5]); c->f[6]=t0; c->ps1[6]=t1;} // 802D02F0
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 802D02F4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,4,ea,1,0);} // 802D02F8
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[3]);} // 802D02FC
  {double t0=S(std::fma(c->f[0],c->f[4],c->f[6])), t1=S(std::fma(c->ps1[0],c->ps1[4],c->ps1[6])); c->f[5]=t0; c->ps1[5]=t1;} // 802D0300
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[2]);} // 802D0304
  {uint32_t ea=c->r[1]+0x0000004Cu; psq_load(c,7,ea,1,0);} // 802D0308
  {double t0=S(c->f[5]+c->ps1[6]), t1=S(c->ps1[6]); c->f[0]=t0; c->ps1[0]=t1;} // 802D030C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 802D0310
  {uint32_t ea=c->r[1]+0x00000050u; psq_load(c,4,ea,0,0);} // 802D0314
  c->f[0]=-c->f[0]; // 802D0318
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D031C
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 802D0320
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 802D0324
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802D0328
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 802D032C
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 802D0330
  {double t0=S(c->f[1]*c->f[4]), t1=S(c->ps1[1]*c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 802D0334
  {double t0=S(std::fma(c->f[0],c->f[7],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[7],c->ps1[1])); c->f[4]=t0; c->ps1[4]=t1;} // 802D0338
  {double t0=S(c->f[4]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802D033C
  c->f[0]=-c->f[0]; // 802D0340
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0344
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0348
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 802D034C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0350
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802D0354
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0358
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802D035C
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,2,ea,0,0);} // 802D0360
  {uint32_t ea=c->r[1]+0x00000080u; psq_load(c,1,ea,0,0);} // 802D0364
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 802D0368
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802D036C
  {uint32_t ea=c->r[1]+0x0000007Cu; psq_load(c,1,ea,1,0);} // 802D0370
  {double t0=S(std::fma(c->f[0],c->f[1],c->f[2])), t1=S(std::fma(c->ps1[0],c->ps1[1],c->ps1[2])); c->f[1]=t0; c->ps1[1]=t1;} // 802D0374
  {double t0=S(c->f[1]+c->ps1[2]), t1=S(c->ps1[2]); c->f[0]=t0; c->ps1[0]=t1;} // 802D0378
  c->f[0]=-c->f[0]; // 802D037C
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D0380
  goto L_802D04EC; // 802D0384
L_802D0388:;
  {uint32_t ea=c->r[31]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0388
  c->r[3]=c->r[1]+0x0000001Cu; // 802D038C
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0390
  c->r[4]=c->r[1]+0x00000010u; // 802D0394
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0398
  c->lr=0x802D03A0u; f_8026C998(c); // 802D039C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D03A0
  c->r[3]=c->r[1]+0x00000018u; // 802D03A4
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D03A8
  c->r[4]=c->r[1]+0x0000000Cu; // 802D03AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D03B0
  c->lr=0x802D03B8u; f_8026C998(c); // 802D03B4
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D03B8
  c->r[3]=c->r[1]+0x00000014u; // 802D03BC
  {uint32_t ea=c->r[2]+0xFFFFACC4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D03C0
  c->r[4]=c->r[1]+0x00000008u; // 802D03C4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D03C8
  c->lr=0x802D03D0u; f_8026C998(c); // 802D03CC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D03D0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D03D4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D03D8
  c->f[0]=-c->f[2]; // 802D03DC
  c->f[13]=c->ps1[13]=S(c->f[2]*c->f[31]); // 802D03E0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 802D03E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D03E8
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[12]); // 802D03EC
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[11]); // 802D03F0
  c->f[7]=c->ps1[7]=S(c->f[12]*c->f[13]); // 802D03F4
  c->f[5]=c->ps1[5]=S(c->f[11]*c->f[10]); // 802D03F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D03FC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D0400
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[4]); // 802D0404
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[10]); // 802D0408
  c->f[9]=c->ps1[9]=S(c->f[7]+c->f[5]); // 802D040C
  c->f[8]=c->ps1[8]=S(c->f[6]*c->f[12]); // 802D0410
  c->f[7]=c->ps1[7]=S(c->f[3]-c->f[2]); // 802D0414
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[9]);} // 802D0418
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[4]); // 802D041C
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[10]); // 802D0420
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[8]);} // 802D0424
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[31]); // 802D0428
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[1]); // 802D042C
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[11]); // 802D0430
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[7]);} // 802D0434
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[13]); // 802D0438
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[8]);} // 802D043C
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[12]); // 802D0440
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,8,ea,1,0);} // 802D0444
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[7]);} // 802D0448
  c->f[0]=c->ps1[0]=S(c->f[0]); // 802D044C
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[1]); // 802D0450
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[9]);} // 802D0454
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,9,ea,0,0);} // 802D0458
  {uint32_t ea=c->r[1]+0x00000044u; psq_load(c,7,ea,0,0);} // 802D045C
  {uint32_t ea=c->r[1]+0x00000040u; psq_load(c,1,ea,1,0);} // 802D0460
  {double t0=S(c->f[9]*c->f[7]), t1=S(c->ps1[9]*c->ps1[7]); c->f[9]=t0; c->ps1[9]=t1;} // 802D0464
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[6]);} // 802D0468
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 802D046C
  {double t0=S(std::fma(c->f[8],c->f[1],c->f[9])), t1=S(std::fma(c->ps1[8],c->ps1[1],c->ps1[9])); c->f[7]=t0; c->ps1[7]=t1;} // 802D0470
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,10,ea,1,0);} // 802D0474
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[3]);} // 802D0478
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,11,ea,0,0);} // 802D047C
  {double t0=S(c->f[7]+c->ps1[9]), t1=S(c->ps1[9]); c->f[1]=t0; c->ps1[1]=t1;} // 802D0480
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[5]);} // 802D0484
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,8,ea,1,0);} // 802D0488
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[4]);} // 802D048C
  c->f[1]=-c->f[1]; // 802D0490
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,7,ea,0,0);} // 802D0494
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D0498
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 802D049C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[5]);} // 802D04A0
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 802D04A4
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,4,ea,0,0);} // 802D04A8
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,1,ea,1,0);} // 802D04AC
  {double t0=S(c->f[4]*c->f[7]), t1=S(c->ps1[4]*c->ps1[7]); c->f[4]=t0; c->ps1[4]=t1;} // 802D04B0
  {double t0=S(std::fma(c->f[1],c->f[10],c->f[4])), t1=S(std::fma(c->ps1[1],c->ps1[10],c->ps1[4])); c->f[7]=t0; c->ps1[7]=t1;} // 802D04B4
  {double t0=S(c->f[7]+c->ps1[4]), t1=S(c->ps1[4]); c->f[1]=t0; c->ps1[1]=t1;} // 802D04B8
  c->f[1]=-c->f[1]; // 802D04BC
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 802D04C0
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[3]);} // 802D04C4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802D04C8
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[2]);} // 802D04CC
  {uint32_t ea=c->r[31]+0x00000078u; psq_load(c,1,ea,0,0);} // 802D04D0
  {uint32_t ea=c->r[31]+0x00000074u; psq_load(c,0,ea,1,0);} // 802D04D4
  {double t0=S(c->f[1]*c->f[11]), t1=S(c->ps1[1]*c->ps1[11]); c->f[1]=t0; c->ps1[1]=t1;} // 802D04D8
  {double t0=S(std::fma(c->f[0],c->f[8],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[8],c->ps1[1])); c->f[11]=t0; c->ps1[11]=t1;} // 802D04DC
  {double t0=S(c->f[11]+c->ps1[1]), t1=S(c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802D04E0
  c->f[0]=-c->f[0]; // 802D04E4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D04E8
L_802D04EC:;
  c->r[0]=R32(c->r[31]+0x00000070u); // 802D04EC
  c->r[0]=c->r[0]|0x00000008u; // 802D04F0
  W32(c->r[31]+0x00000070u,c->r[0]); // 802D04F4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 802D04F8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 802D04FC
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 802D0500
  c->r[0]=R32(c->r[1]+0x000000A4u); // 802D0504
  c->lr=c->r[0]; // 802D0508
  c->r[1]=c->r[1]+0x000000A0u; // 802D050C
  return; // 802D0510
}

// CalcTexMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_802D0514(Ctx* __restrict c) {
  trace_call(0x802D0514u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0514
  c->r[0]=c->lr; // 802D0518
  W32(c->r[1]+0x00000054u,c->r[0]); // 802D051C
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 802D0520
  cmpu(c,0,c->r[0],0x00000007u); // 802D0524
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802D0528
  c->r[31]=c->r[5]|c->r[5]; // 802D052C
  W32(c->r[1]+0x00000048u,c->r[30]); // 802D0530
  c->r[30]=c->r[4]|c->r[4]; // 802D0534
  W32(c->r[1]+0x00000044u,c->r[29]); // 802D0538
  c->r[29]=c->r[3]|c->r[3]; // 802D053C
  if (!crb(c,2)) { goto L_802D054C; } // 802D0540
  c->r[3]=0u+0x00000000u; // 802D0544
  goto L_802D0654; // 802D0548
L_802D054C:;
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D054C
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0550
  {uint32_t ea=c->r[2]+0xFFFFACC8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0554
  c->r[4]=c->r[1]+0x00000008u; // 802D0558
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D055C
  c->lr=0x802D0564u; f_8026C998(c); // 802D0560
  cmps(c,0,(int32_t)c->r[30],0); // 802D0564
  if (crb(c,2)) { goto L_802D05DC; } // 802D0568
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D056C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0570
  {uint32_t ea=c->r[31]+0x00000004u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0574
  c->f[0]=c->ps1[0]=S(c->f[7]*c->f[0]); // 802D0578
  {uint32_t ea=c->r[2]+0xFFFFACCCu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D057C
  c->f[5]=-c->f[6]; // 802D0580
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0584
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0588
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802D058C
  {uint32_t ea=c->r[2]+0xFFFFACD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0590
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0594
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[4]); // 802D0598
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[3]);} // 802D059C
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D05A0
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[4]);} // 802D05A4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D05A8
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 802D05AC
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[2]);} // 802D05B0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D05B4
  c->f[2]=c->ps1[2]=S(c->f[6]*c->f[2]); // 802D05B8
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[3]);} // 802D05BC
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[1]);} // 802D05C0
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[2]);} // 802D05C4
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[3]);} // 802D05C8
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[3]);} // 802D05CC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 802D05D0
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[3]);} // 802D05D4
  goto L_802D0650; // 802D05D8
L_802D05DC:;
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D05DC
  c->r[4]=c->r[29]|c->r[29]; // 802D05E0
  {uint32_t ea=c->r[2]+0xFFFFACCCu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D05E4
  c->r[5]=c->r[29]|c->r[29]; // 802D05E8
  c->f[1]=-c->f[2]; // 802D05EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D05F0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D05F4
  c->r[3]=c->r[1]+0x00000010u; // 802D05F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D05FC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 802D0600
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 802D0604
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0608
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[0]); // 802D060C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0610
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[0]); // 802D0614
  {uint32_t ea=c->r[2]+0xFFFFACD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0618
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[7]);} // 802D061C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[6]);} // 802D0620
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[5]);} // 802D0624
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 802D0628
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 802D062C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[2]);} // 802D0630
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[5]);} // 802D0634
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 802D0638
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[5]);} // 802D063C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[5]);} // 802D0640
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 802D0644
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 802D0648
  c->lr=0x802D0650u; f_803535F4(c); // 802D064C
L_802D0650:;
  c->r[3]=0u+0x00000001u; // 802D0650
L_802D0654:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 802D0654
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 802D0658
  c->r[30]=R32(c->r[1]+0x00000048u); // 802D065C
  c->r[29]=R32(c->r[1]+0x00000044u); // 802D0660
  c->lr=c->r[0]; // 802D0664
  c->r[1]=c->r[1]+0x00000050u; // 802D0668
  return; // 802D066C
}

// CalcWorldMtx_Basic__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_802D0670(Ctx* __restrict c) {
  trace_call(0x802D0670u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0670
  c->r[0]=c->lr; // 802D0674
  W32(c->r[1]+0x00000064u,c->r[0]); // 802D0678
  c->r[11]=c->r[1]+0x00000060u; // 802D067C
  c->lr=0x802D0684u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D0680
  c->r[31]=R32(c->r[8]+0x00000000u); // 802D0684
  c->r[26]=c->r[3]|c->r[3]; // 802D0688
  c->r[27]=c->r[4]|c->r[4]; // 802D068C
  c->r[28]=c->r[5]|c->r[5]; // 802D0690
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802D0694
  c->r[29]=c->r[7]|c->r[7]; // 802D0698
  c->r[30]=c->r[8]|c->r[8]; // 802D069C
  if (!crb(c,2)) { goto L_802D06AC; } // 802D06A0
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 802D06A4
  if (crb(c,2)) { goto L_802D06D8; } // 802D06A8
L_802D06AC:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 802D06AC
  if (crb(c,2)) { goto L_802D06C4; } // 802D06B0
  c->r[3]=c->r[28]|c->r[28]; // 802D06B4
  c->r[4]=c->r[26]|c->r[26]; // 802D06B8
  c->lr=0x802D06C0u; f_803535C0(c); // 802D06BC
  goto L_802D0774; // 802D06C0
L_802D06C4:;
  c->r[3]=c->r[26]|c->r[26]; // 802D06C4
  c->r[4]=c->r[28]|c->r[28]; // 802D06C8
  c->r[5]=c->r[6]|c->r[6]; // 802D06CC
  c->lr=0x802D06D4u; f_8026CD9C(c); // 802D06D0
  goto L_802D0774; // 802D06D4
L_802D06D8:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 802D06D8
  if (crb(c,2)) { goto L_802D073C; } // 802D06DC
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 802D06E0
  if (crb(c,2)) { goto L_802D0710; } // 802D06E4
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D06E8
  c->r[4]=c->r[28]|c->r[28]; // 802D06EC
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D06F0
  c->r[5]=c->r[1]+0x00000008u; // 802D06F4
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D06F8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D06FC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802D0700
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[2]);} // 802D0704
  c->lr=0x802D070Cu; f_8026CDF0(c); // 802D0708
  goto L_802D0774; // 802D070C
L_802D0710:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0710
  c->r[3]=c->r[8]+0x0000001Cu; // 802D0714
  {uint32_t ea=c->r[6]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0718
  c->r[4]=c->r[1]+0x00000018u; // 802D071C
  {uint32_t ea=c->r[6]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0720
  c->lr=0x802D0728u; f_80353D18(c); // 802D0724
  c->r[3]=c->r[28]|c->r[28]; // 802D0728
  c->r[5]=c->r[26]|c->r[26]; // 802D072C
  c->r[4]=c->r[1]+0x00000018u; // 802D0730
  c->lr=0x802D0738u; f_803535F4(c); // 802D0734
  goto L_802D0774; // 802D0738
L_802D073C:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 802D073C
  if (crb(c,2)) { goto L_802D0758; } // 802D0740
  c->r[3]=c->r[28]|c->r[28]; // 802D0744
  c->r[5]=c->r[26]|c->r[26]; // 802D0748
  c->r[4]=c->r[8]+0x0000001Cu; // 802D074C
  c->lr=0x802D0754u; f_803535F4(c); // 802D0750
  goto L_802D0774; // 802D0754
L_802D0758:;
  c->r[4]=c->r[28]|c->r[28]; // 802D0758
  c->r[5]=c->r[6]|c->r[6]; // 802D075C
  c->lr=0x802D0764u; f_8026CD9C(c); // 802D0760
  c->r[3]=c->r[26]|c->r[26]; // 802D0764
  c->r[5]=c->r[26]|c->r[26]; // 802D0768
  c->r[4]=c->r[30]+0x0000001Cu; // 802D076C
  c->lr=0x802D0774u; f_803535F4(c); // 802D0770
L_802D0774:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 802D0774
  if (crb(c,2)) { goto L_802D0794; } // 802D0778
  {uint32_t ea=c->r[2]+0xFFFFACD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D077C
  c->r[4]=c->r[29]|0x40000000u; // 802D0780
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 802D0784
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 802D0788
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[0]);} // 802D078C
  goto L_802D07B0; // 802D0790
L_802D0794:;
  {uint32_t ea=c->r[30]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0794
  c->r[4]=rotl(c->r[29],0)&0x3FFFFFFFu; // 802D0798
  {uint32_t ea=c->r[30]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D079C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D07A0
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[2]);} // 802D07A4
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 802D07A8
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[0]);} // 802D07AC
L_802D07B0:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802D07B0
  c->r[3]=rotl(c->r[4],0)&0x0FFFFFFFu; // 802D07B4
  if (crb(c,2)) { goto L_802D07C0; } // 802D07B8
  c->r[3]=c->r[4]|0x10000000u; // 802D07BC
L_802D07C0:;
  c->r[11]=c->r[1]+0x00000060u; // 802D07C0
  c->lr=0x802D07C8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D07C4
  c->r[0]=R32(c->r[1]+0x00000064u); // 802D07C8
  c->lr=c->r[0]; // 802D07CC
  c->r[1]=c->r[1]+0x00000060u; // 802D07D0
  return; // 802D07D4
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D07D8(Ctx* __restrict c) {
  trace_call(0x802D07D8u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D07D8
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D07DC
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D07E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D07E4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D07E8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 802D07EC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 802D07F0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 802D07F4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D07F8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 802D07FC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 802D0800
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D0804
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0808
  return; // 802D080C
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0810(Ctx* __restrict c) {
  trace_call(0x802D0810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0810
  c->r[0]=c->lr; // 802D0814
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0818
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D081C
  c->r[4]=c->r[1]+0x00000008u; // 802D0820
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D0824
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D082C
  c->r[31]=c->r[3]|c->r[3]; // 802D0830
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0834
  c->lr=0x802D083Cu; f_8026C998(c); // 802D0838
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D083C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0840
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0844
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[1]); // 802D0848
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D084C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802D0850
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 802D0854
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[0]); // 802D0858
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D085C
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 802D0860
  c->f[1]=c->ps1[1]=S(c->f[4]-c->f[3]); // 802D0864
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 802D0868
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[3]); // 802D086C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D0870
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0874
  c->f[1]=-c->f[1]; // 802D0878
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 802D087C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0880
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 802D0884
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 802D0888
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D088C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0890
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D0894
  c->lr=c->r[0]; // 802D0898
  c->r[1]=c->r[1]+0x00000020u; // 802D089C
  return; // 802D08A0
}

// MakeTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D08A4(Ctx* __restrict c) {
  trace_call(0x802D08A4u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D08A4
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D08A8
  c->f[1]=-c->f[0]; // 802D08AC
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D08B0
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D08B4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 802D08B8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 802D08BC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 802D08C0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D08C4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 802D08C8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D08CC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D08D0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D08D4
  return; // 802D08D8
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D08DC(Ctx* __restrict c) {
  trace_call(0x802D08DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D08DC
  c->r[0]=c->lr; // 802D08E0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D08E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D08E8
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D08EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D08F0
  c->r[31]=c->r[4]|c->r[4]; // 802D08F4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D08F8
  c->r[4]=c->r[1]+0x00000008u; // 802D08FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D0900
  c->r[30]=c->r[3]|c->r[3]; // 802D0904
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0908
  c->lr=0x802D0910u; f_8026C998(c); // 802D090C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0910
  {uint32_t ea=c->r[31]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0914
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0918
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D091C
  c->f[11]=c->ps1[11]=S(c->f[7]*c->f[1]); // 802D0920
  c->f[3]=c->ps1[3]=S(c->f[7]*c->f[0]); // 802D0924
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0928
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[1]); // 802D092C
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0930
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[0]); // 802D0934
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[11]); // 802D0938
  c->f[3]=-c->f[3]; // 802D093C
  {uint32_t ea=c->r[2]+0xFFFFACE8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0940
  c->f[5]=c->ps1[5]=S(c->f[10]+c->f[9]); // 802D0944
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0948
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[7]); // 802D094C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[9]);} // 802D0950
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[8]); // 802D0954
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 802D0958
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 802D095C
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 802D0960
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 802D0964
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D0968
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 802D096C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D0970
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[11]);} // 802D0974
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 802D0978
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D097C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0980
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D0984
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D0988
  c->lr=c->r[0]; // 802D098C
  c->r[1]=c->r[1]+0x00000020u; // 802D0990
  return; // 802D0994
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0998(Ctx* __restrict c) {
  trace_call(0x802D0998u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0998
  c->r[0]=c->lr; // 802D099C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D09A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D09A4
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D09A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D09AC
  c->r[31]=c->r[4]|c->r[4]; // 802D09B0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D09B4
  c->r[4]=c->r[1]+0x00000008u; // 802D09B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D09BC
  c->r[30]=c->r[3]|c->r[3]; // 802D09C0
  c->r[3]=c->r[1]+0x0000000Cu; // 802D09C4
  c->lr=0x802D09CCu; f_8026C998(c); // 802D09C8
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D09CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D09D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D09D4
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[1]); // 802D09D8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D09DC
  c->f[6]=c->ps1[6]=S(c->f[5]*c->f[3]); // 802D09E0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[1]);} // 802D09E4
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D09E8
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[0]); // 802D09EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D09F0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D09F4
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[6]); // 802D09F8
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 802D09FC
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[6]); // 802D0A00
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 802D0A04
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802D0A08
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D0A0C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D0A10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0A14
  c->f[1]=-c->f[1]; // 802D0A18
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 802D0A1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0A20
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 802D0A24
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 802D0A28
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0A2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0A30
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D0A34
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D0A38
  c->lr=c->r[0]; // 802D0A3C
  c->r[1]=c->r[1]+0x00000020u; // 802D0A40
  return; // 802D0A44
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0A48(Ctx* __restrict c) {
  trace_call(0x802D0A48u);
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0A48
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0A4C
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0A50
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0A54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D0A58
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0A5C
  c->f[4]=-c->f[6]; // 802D0A60
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0A64
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802D0A68
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 802D0A6C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802D0A70
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 802D0A74
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D0A78
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 802D0A7C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 802D0A80
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 802D0A84
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 802D0A88
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 802D0A8C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0A90
  return; // 802D0A94
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0A98(Ctx* __restrict c) {
  trace_call(0x802D0A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0A98
  c->r[0]=c->lr; // 802D0A9C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0AA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D0AA4
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0AA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D0AAC
  c->r[31]=c->r[4]|c->r[4]; // 802D0AB0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0AB4
  c->r[4]=c->r[1]+0x00000008u; // 802D0AB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D0ABC
  c->r[30]=c->r[3]|c->r[3]; // 802D0AC0
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0AC4
  c->lr=0x802D0ACCu; f_8026C998(c); // 802D0AC8
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0ACC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0AD0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0AD4
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[0]); // 802D0AD8
  {uint32_t ea=c->r[2]+0xFFFFACE8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0ADC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0AE0
  c->f[3]=-c->f[4]; // 802D0AE4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D0AE8
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[0]); // 802D0AEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 802D0AF0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0AF4
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[0]); // 802D0AF8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0AFC
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0B00
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[2]); // 802D0B04
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802D0B08
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 802D0B0C
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0B10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 802D0B14
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 802D0B18
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802D0B1C
  c->f[6]=c->ps1[6]=S(c->f[9]*c->f[8]); // 802D0B20
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[7]);} // 802D0B24
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[5]); // 802D0B28
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 802D0B2C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 802D0B30
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D0B34
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D0B38
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0B3C
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[1]); // 802D0B40
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 802D0B44
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0B48
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[1]); // 802D0B4C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[7]);} // 802D0B50
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0B54
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 802D0B58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0B5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D0B60
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D0B64
  c->lr=c->r[0]; // 802D0B68
  c->r[1]=c->r[1]+0x00000020u; // 802D0B6C
  return; // 802D0B70
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0B74(Ctx* __restrict c) {
  trace_call(0x802D0B74u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0B74
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0B78
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0B7C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[5]); // 802D0B80
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0B84
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 802D0B88
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0B8C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0B90
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D0B94
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 802D0B98
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D0B9C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D0BA0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 802D0BA4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0BA8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0BAC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0BB0
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 802D0BB4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 802D0BB8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 802D0BBC
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 802D0BC0
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[9]); // 802D0BC4
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 802D0BC8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802D0BCC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 802D0BD0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 802D0BD4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D0BD8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D0BDC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 802D0BE0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0BE4
  return; // 802D0BE8
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0BEC(Ctx* __restrict c) {
  trace_call(0x802D0BECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0BEC
  c->r[0]=c->lr; // 802D0BF0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0BF4
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0BF8
  c->r[4]=c->r[1]+0x00000008u; // 802D0BFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D0C00
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0C04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D0C08
  c->r[31]=c->r[3]|c->r[3]; // 802D0C0C
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0C10
  c->lr=0x802D0C18u; f_8026C998(c); // 802D0C14
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 802D0C18
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0C1C
  c->f[1]=-c->f[10]; // 802D0C20
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0C24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0C28
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[0]); // 802D0C2C
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D0C30
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 802D0C34
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 802D0C38
  {uint32_t ea=c->r[31]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D0C3C
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D0C40
  {uint32_t ea=c->r[31]+0x00000014u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D0C44
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D0C48
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[5]); // 802D0C4C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802D0C50
  {uint32_t ea=c->r[31]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D0C54
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 802D0C58
  c->f[0]=c->ps1[0]=S(c->f[12]*c->f[10]); // 802D0C5C
  c->f[1]=c->ps1[1]=S(c->f[12]-c->f[4]); // 802D0C60
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 802D0C64
  {uint32_t ea=c->r[31]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0C68
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0C6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D0C70
  c->f[2]=-c->f[3]; // 802D0C74
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0C78
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[8]); // 802D0C7C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0C80
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 802D0C84
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[11]); // 802D0C88
  c->f[2]=c->ps1[2]=S(c->f[12]*c->f[8]); // 802D0C8C
  c->f[4]=c->ps1[4]=S(c->f[10]+c->f[4]); // 802D0C90
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D0C94
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[4]);} // 802D0C98
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 802D0C9C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0CA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D0CA4
  c->f[2]=-c->f[3]; // 802D0CA8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[6]); // 802D0CAC
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 802D0CB0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[9]); // 802D0CB4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[6]); // 802D0CB8
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[4]); // 802D0CBC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D0CC0
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 802D0CC4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 802D0CC8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D0CCC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D0CD0
  c->f[2]=-c->f[3]; // 802D0CD4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[5]); // 802D0CD8
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 802D0CDC
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[7]); // 802D0CE0
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[5]); // 802D0CE4
  c->f[4]=c->ps1[4]=S(c->f[6]+c->f[4]); // 802D0CE8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D0CEC
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[4]); // 802D0CF0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 802D0CF4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[0]); // 802D0CF8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D0CFC
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D0D00
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0D08
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D0D0C
  c->lr=c->r[0]; // 802D0D10
  c->r[1]=c->r[1]+0x00000020u; // 802D0D14
  return; // 802D0D18
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0D1C(Ctx* __restrict c) {
  trace_call(0x802D0D1Cu);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0D1C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0D20
  c->f[3]=-c->f[0]; // 802D0D24
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0D28
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0D2C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802D0D30
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D0D34
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D0D38
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D0D3C
  return; // 802D0D40
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0D44(Ctx* __restrict c) {
  trace_call(0x802D0D44u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0D44
  c->r[0]=c->lr; // 802D0D48
  W32(c->r[1]+0x00000084u,c->r[0]); // 802D0D4C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802D0D50
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802D0D54
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 802D0D58
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 802D0D5C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 802D0D60
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 802D0D64
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 802D0D68
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 802D0D6C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 802D0D70
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 802D0D74
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 802D0D78
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 802D0D7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0D80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D0D84
  c->r[31]=c->r[4]|c->r[4]; // 802D0D88
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0D8C
  c->r[4]=c->r[1]+0x00000008u; // 802D0D90
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D0D94
  c->r[30]=c->r[3]|c->r[3]; // 802D0D98
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0D9C
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0DA0
  c->lr=0x802D0DA8u; f_8026C998(c); // 802D0DA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0DA8
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0DAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0DB0
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[6]); // 802D0DB4
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D0DB8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0DBC
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[7]); // 802D0DC0
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0DC4
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[0]); // 802D0DC8
  c->f[30]=-c->f[8]; // 802D0DCC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0DD0
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[10]); // 802D0DD4
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 802D0DD8
  c->f[8]=c->ps1[8]=S(c->f[2]-c->f[10]); // 802D0DDC
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 802D0DE0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[7]); // 802D0DE4
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D0DE8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[6]); // 802D0DEC
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 802D0DF0
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[8]); // 802D0DF4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D0DF8
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[4]); // 802D0DFC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D0E00
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[8]); // 802D0E04
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[4]); // 802D0E08
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0E0C
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 802D0E10
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 802D0E14
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 802D0E18
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 802D0E1C
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 802D0E20
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 802D0E24
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 802D0E28
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 802D0E2C
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 802D0E30
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 802D0E34
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 802D0E38
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 802D0E3C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 802D0E40
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 802D0E44
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 802D0E48
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 802D0E4C
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 802D0E50
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 802D0E54
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 802D0E58
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 802D0E5C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 802D0E60
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 802D0E64
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 802D0E68
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 802D0E6C
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 802D0E70
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 802D0E74
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 802D0E78
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D0E7C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 802D0E80
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D0E84
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 802D0E88
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D0E8C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 802D0E90
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 802D0E94
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 802D0E98
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 802D0E9C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 802D0EA0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 802D0EA4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 802D0EA8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 802D0EAC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 802D0EB0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 802D0EB4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 802D0EB8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 802D0EBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D0EC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D0EC4
  c->r[0]=R32(c->r[1]+0x00000084u); // 802D0EC8
  c->lr=c->r[0]; // 802D0ECC
  c->r[1]=c->r[1]+0x00000080u; // 802D0ED0
  return; // 802D0ED4
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D0ED8(Ctx* __restrict c) {
  trace_call(0x802D0ED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D0ED8
  c->r[0]=c->lr; // 802D0EDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802D0EE0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802D0EE4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802D0EE8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D0EEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D0EF0
  c->r[31]=c->r[4]|c->r[4]; // 802D0EF4
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0EF8
  c->r[4]=c->r[1]+0x00000008u; // 802D0EFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D0F00
  c->r[30]=c->r[3]|c->r[3]; // 802D0F04
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D0F08
  c->r[3]=c->r[1]+0x0000000Cu; // 802D0F0C
  c->lr=0x802D0F14u; f_8026C998(c); // 802D0F10
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0F14
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D0F18
  c->f[1]=-c->f[7]; // 802D0F1C
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0F20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0F24
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[0]); // 802D0F28
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D0F2C
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[4]); // 802D0F30
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 802D0F34
  {uint32_t ea=c->r[2]+0xFFFFACE8u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D0F38
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D0F3C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[13]=c->ps1[13]=RF32(ea);} // 802D0F40
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D0F44
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[7]); // 802D0F48
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802D0F4C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D0F50
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 802D0F54
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[5]); // 802D0F58
  c->f[0]=c->ps1[0]=S(c->f[4]-c->f[12]); // 802D0F5C
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[3]);} // 802D0F60
  {uint32_t ea=c->r[30]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D0F64
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0F68
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D0F6C
  c->f[3]=-c->f[4]; // 802D0F70
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D0F74
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[10]); // 802D0F78
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 802D0F7C
  c->f[12]=c->ps1[12]=S(c->f[31]*c->f[13]); // 802D0F80
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802D0F84
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 802D0F88
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D0F8C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[10]); // 802D0F90
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D0F94
  c->f[6]=c->ps1[6]=S(c->f[12]+c->f[6]); // 802D0F98
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802D0F9C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[6]);} // 802D0FA0
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[3]);} // 802D0FA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0FA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D0FAC
  c->f[3]=-c->f[4]; // 802D0FB0
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[8]); // 802D0FB4
  c->f[10]=c->ps1[10]=S(c->f[12]*c->f[11]); // 802D0FB8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[11]); // 802D0FBC
  c->f[3]=c->ps1[3]=S(c->f[12]*c->f[8]); // 802D0FC0
  c->f[6]=c->ps1[6]=S(c->f[10]+c->f[6]); // 802D0FC4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802D0FC8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 802D0FCC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[3]);} // 802D0FD0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D0FD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D0FD8
  c->f[3]=-c->f[4]; // 802D0FDC
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[7]); // 802D0FE0
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 802D0FE4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[9]); // 802D0FE8
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[7]); // 802D0FEC
  c->f[6]=c->ps1[6]=S(c->f[8]+c->f[6]); // 802D0FF0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802D0FF4
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[6]); // 802D0FF8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[3]); // 802D0FFC
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[0]); // 802D1000
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D1004
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[5]); // 802D1008
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802D100C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D1010
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D1014
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802D1018
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802D101C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1020
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1024
  c->r[0]=R32(c->r[1]+0x00000034u); // 802D1028
  c->lr=c->r[0]; // 802D102C
  c->r[1]=c->r[1]+0x00000030u; // 802D1030
  return; // 802D1034
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1038(Ctx* __restrict c) {
  trace_call(0x802D1038u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1038
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D103C
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1040
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802D1044
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1048
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D104C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1050
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D1054
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1058
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 802D105C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D1060
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 802D1064
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1068
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 802D106C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1070
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D1074
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1078
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D107C
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 802D1080
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1084
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 802D1088
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 802D108C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 802D1090
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 802D1094
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 802D1098
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 802D109C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D10A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 802D10A4
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 802D10A8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 802D10AC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D10B0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D10B4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D10B8
  return; // 802D10BC
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc22@unnamed@g3d_maya_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D10C0(Ctx* __restrict c) {
  trace_call(0x802D10C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D10C0
  c->r[0]=c->lr; // 802D10C4
  W32(c->r[1]+0x00000084u,c->r[0]); // 802D10C8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 802D10CC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 802D10D0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 802D10D4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 802D10D8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 802D10DC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 802D10E0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 802D10E4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 802D10E8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 802D10EC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 802D10F0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[26]);} // 802D10F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,26,ea,0,0);} // 802D10F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D10FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D1100
  c->r[31]=c->r[4]|c->r[4]; // 802D1104
  {uint32_t ea=c->r[2]+0xFFFFACE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1108
  c->r[4]=c->r[1]+0x00000008u; // 802D110C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D1110
  c->r[30]=c->r[3]|c->r[3]; // 802D1114
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1118
  c->r[3]=c->r[1]+0x0000000Cu; // 802D111C
  c->lr=0x802D1124u; f_8026C998(c); // 802D1120
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1124
  {uint32_t ea=c->r[31]+0x00000004u; c->f[27]=c->ps1[27]=RF32(ea);} // 802D1128
  {uint32_t ea=c->r[2]+0xFFFFACE4u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D112C
  c->f[4]=c->ps1[4]=S(c->f[27]*c->f[2]); // 802D1130
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1134
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D1138
  c->f[8]=c->ps1[8]=S(c->f[1]-c->f[7]); // 802D113C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1140
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1144
  c->f[5]=c->ps1[5]=S(c->f[7]-c->f[1]); // 802D1148
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D114C
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1150
  c->f[30]=-c->f[4]; // 802D1154
  {uint32_t ea=c->r[30]+0x00000010u; c->f[28]=c->ps1[28]=RF32(ea);} // 802D1158
  c->f[10]=c->ps1[10]=S(c->f[7]-c->f[1]); // 802D115C
  c->f[3]=c->ps1[3]=S(c->f[27]*c->f[9]); // 802D1160
  {uint32_t ea=c->r[30]+0x00000000u; c->f[26]=c->ps1[26]=RF32(ea);} // 802D1164
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[9]); // 802D1168
  c->f[9]=c->ps1[9]=S(c->f[6]-c->f[7]); // 802D116C
  {uint32_t ea=c->r[30]+0x00000014u; c->f[13]=c->ps1[13]=RF32(ea);} // 802D1170
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 802D1174
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[27]); // 802D1178
  {uint32_t ea=c->r[30]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D117C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 802D1180
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[4]); // 802D1184
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1188
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[8]); // 802D118C
  c->f[27]=c->ps1[27]=S(c->f[1]*c->f[26]); // 802D1190
  {uint32_t ea=c->r[30]+0x00000018u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D1194
  {uint32_t ea=c->r[30]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D1198
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 802D119C
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[26]); // 802D11A0
  c->f[29]=c->ps1[29]=S(c->f[2]*c->f[28]); // 802D11A4
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[5]); // 802D11A8
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[28]); // 802D11AC
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[29]); // 802D11B0
  c->f[26]=c->ps1[26]=S(c->f[4]+c->f[5]); // 802D11B4
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[6]); // 802D11B8
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[31]); // 802D11BC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[27]);} // 802D11C0
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 802D11C4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 802D11C8
  c->f[9]=c->ps1[9]=S(c->f[1]*c->f[9]); // 802D11CC
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[8]); // 802D11D0
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[5]); // 802D11D4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[26]);} // 802D11D8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[12]); // 802D11DC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[11]); // 802D11E0
  c->f[6]=c->ps1[6]=S(c->f[30]*c->f[31]); // 802D11E4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 802D11E8
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[13]); // 802D11EC
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[11]); // 802D11F0
  c->f[3]=c->ps1[3]=S(c->f[5]+c->f[1]); // 802D11F4
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[4]); // 802D11F8
  c->f[4]=c->ps1[4]=S(c->f[30]*c->f[12]); // 802D11FC
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[0]); // 802D1200
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[3]);} // 802D1204
  c->f[0]=c->ps1[0]=S(c->f[9]+c->f[8]); // 802D1208
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D120C
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 802D1210
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D1214
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 802D1218
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D121C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,31,ea,0,0);} // 802D1220
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 802D1224
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,30,ea,0,0);} // 802D1228
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 802D122C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,29,ea,0,0);} // 802D1230
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 802D1234
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,28,ea,0,0);} // 802D1238
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 802D123C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,27,ea,0,0);} // 802D1240
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 802D1244
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,26,ea,0,0);} // 802D1248
  {uint32_t ea=c->r[1]+0x00000020u; c->f[26]=RF64(ea);} // 802D124C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1250
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1254
  c->r[0]=R32(c->r[1]+0x00000084u); // 802D1258
  c->lr=c->r[0]; // 802D125C
  c->r[1]=c->r[1]+0x00000080u; // 802D1260
  return; // 802D1264
}

// CalcTexMtx_Maya__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_802D1268(Ctx* __restrict c) {
  trace_call(0x802D1268u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1268
  c->r[0]=c->lr; // 802D126C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1270
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 802D1274
  cmpu(c,0,c->r[0],0x00000007u); // 802D1278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D127C
  c->r[31]=c->r[3]|c->r[3]; // 802D1280
  if (!crb(c,2)) { goto L_802D1290; } // 802D1284
  c->r[3]=0u+0x00000000u; // 802D1288
  goto L_802D12F0; // 802D128C
L_802D1290:;
  cmps(c,0,(int32_t)c->r[4],0); // 802D1290
  if (crb(c,2)) { goto L_802D12B8; } // 802D1294
  c->r[6]=0u+0x80440000u; // 802D1298
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D129C
  c->r[6]=c->r[6]+0xFFFFC5B8u; // 802D12A0
  c->r[4]=c->r[5]|c->r[5]; // 802D12A4
  c->r[12]=R32(c->r[6]+c->r[0]); // 802D12A8
  c->ctr=c->r[12]; // 802D12AC
  if (true) { c->lr=0x802D12B4u; dispatch(c,c->ctr); } // 802D12B0
  goto L_802D12D4; // 802D12B4
L_802D12B8:;
  c->r[6]=0u+0x80440000u; // 802D12B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D12BC
  c->r[6]=c->r[6]+0xFFFFC5D4u; // 802D12C0
  c->r[4]=c->r[5]|c->r[5]; // 802D12C4
  c->r[12]=R32(c->r[6]+c->r[0]); // 802D12C8
  c->ctr=c->r[12]; // 802D12CC
  if (true) { c->lr=0x802D12D4u; dispatch(c,c->ctr); } // 802D12D0
L_802D12D4:;
  {uint32_t ea=c->r[2]+0xFFFFACD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D12D4
  c->r[3]=0u+0x00000001u; // 802D12D8
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D12DC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802D12E0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 802D12E4
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802D12E8
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 802D12EC
L_802D12F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D12F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D12F4
  c->lr=c->r[0]; // 802D12F8
  c->r[1]=c->r[1]+0x00000010u; // 802D12FC
  return; // 802D1300
}

// CalcWorldMtx_Maya_SSC_Apply__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_802D1304(Ctx* __restrict c) {
  trace_call(0x802D1304u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1304
  c->r[0]=c->lr; // 802D1308
  W32(c->r[1]+0x00000044u,c->r[0]); // 802D130C
  c->r[11]=c->r[1]+0x00000040u; // 802D1310
  c->lr=0x802D1318u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D1314
  c->r[31]=R32(c->r[8]+0x00000000u); // 802D1318
  c->r[27]=c->r[3]|c->r[3]; // 802D131C
  c->r[28]=c->r[5]|c->r[5]; // 802D1320
  c->r[29]=c->r[6]|c->r[6]; // 802D1324
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 802D1328
  if (crb(c,2)) { goto L_802D1348; } // 802D132C
  {uint32_t ea=c->r[2]+0xFFFFACDCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1330
  c->r[30]=c->r[7]|0x40000000u; // 802D1334
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802D1338
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802D133C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 802D1340
  goto L_802D1364; // 802D1344
L_802D1348:;
  {uint32_t ea=c->r[8]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1348
  c->r[30]=rotl(c->r[7],0)&0x3FFFFFFFu; // 802D134C
  {uint32_t ea=c->r[8]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1350
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1354
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 802D1358
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 802D135C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802D1360
L_802D1364:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802D1364
  if (!crb(c,2)) { goto L_802D1374; } // 802D1368
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 802D136C
  if (crb(c,2)) { goto L_802D1384; } // 802D1370
L_802D1374:;
  c->r[3]=c->r[28]|c->r[28]; // 802D1374
  c->r[4]=c->r[27]|c->r[27]; // 802D1378
  c->lr=0x802D1380u; f_803535C0(c); // 802D137C
  goto L_802D146C; // 802D1380
L_802D1384:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 802D1384
  if (crb(c,2)) { goto L_802D1404; } // 802D1388
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 802D138C
  if (crb(c,2)) { goto L_802D13C0; } // 802D1390
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1394
  c->r[3]=c->r[27]|c->r[27]; // 802D1398
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D139C
  c->r[4]=c->r[28]|c->r[28]; // 802D13A0
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D13A4
  c->r[5]=c->r[1]+0x00000014u; // 802D13A8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802D13AC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802D13B0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 802D13B4
  c->lr=0x802D13BCu; f_8026CDF0(c); // 802D13B8
  goto L_802D146C; // 802D13BC
L_802D13C0:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D13C0
  c->r[3]=c->r[27]|c->r[27]; // 802D13C4
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D13C8
  c->r[4]=c->r[28]|c->r[28]; // 802D13CC
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D13D0
  c->r[5]=c->r[1]+0x00000008u; // 802D13D4
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 802D13D8
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D13DC
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D13E0
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D13E4
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D13E8
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 802D13EC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D13F0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D13F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802D13F8
  c->lr=0x802D1400u; f_8026CDF0(c); // 802D13FC
  goto L_802D146C; // 802D1400
L_802D1404:;
  c->r[0]=rotl(c->r[7],0)&0x40000000u; cr0(c,c->r[0]); // 802D1404
  if (crb(c,2)) { goto L_802D1420; } // 802D1408
  c->r[3]=c->r[28]|c->r[28]; // 802D140C
  c->r[5]=c->r[27]|c->r[27]; // 802D1410
  c->r[4]=c->r[8]+0x0000001Cu; // 802D1414
  c->lr=0x802D141Cu; f_803535F4(c); // 802D1418
  goto L_802D146C; // 802D141C
L_802D1420:;
  c->r[4]=c->r[27]|c->r[27]; // 802D1420
  c->r[3]=c->r[8]+0x0000001Cu; // 802D1424
  c->lr=0x802D142Cu; f_803535C0(c); // 802D1428
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D142C
  c->r[3]=c->r[28]|c->r[28]; // 802D1430
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1434
  c->r[4]=c->r[27]|c->r[27]; // 802D1438
  {uint32_t ea=c->r[27]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D143C
  c->r[5]=c->r[27]|c->r[27]; // 802D1440
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 802D1444
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1448
  {uint32_t ea=c->r[27]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D144C
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1450
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D1454
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[4]);} // 802D1458
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D145C
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[2]);} // 802D1460
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D1464
  c->lr=0x802D146Cu; f_803535F4(c); // 802D1468
L_802D146C:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802D146C
  c->r[3]=rotl(c->r[30],0)&0x0FFFFFFFu; // 802D1470
  if (crb(c,2)) { goto L_802D147C; } // 802D1474
  c->r[3]=c->r[30]|0x10000000u; // 802D1478
L_802D147C:;
  c->r[11]=c->r[1]+0x00000040u; // 802D147C
  c->lr=0x802D1484u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D1480
  c->r[0]=R32(c->r[1]+0x00000044u); // 802D1484
  c->lr=c->r[0]; // 802D1488
  c->r[1]=c->r[1]+0x00000040u; // 802D148C
  return; // 802D1490
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1494(Ctx* __restrict c) {
  trace_call(0x802D1494u);
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1494
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1498
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D149C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D14A0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D14A4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 802D14A8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 802D14AC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 802D14B0
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D14B4
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 802D14B8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 802D14BC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D14C0
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D14C4
  return; // 802D14C8
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D14CC(Ctx* __restrict c) {
  trace_call(0x802D14CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D14CC
  c->r[0]=c->lr; // 802D14D0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D14D4
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D14D8
  c->r[4]=c->r[1]+0x00000008u; // 802D14DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D14E0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D14E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D14E8
  c->r[31]=c->r[3]|c->r[3]; // 802D14EC
  c->r[3]=c->r[1]+0x0000000Cu; // 802D14F0
  c->lr=0x802D14F8u; f_8026C998(c); // 802D14F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D14F8
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D14FC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802D1500
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1504
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1508
  c->f[0]=-c->f[0]; // 802D150C
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 802D1510
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 802D1514
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1518
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D151C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1520
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 802D1524
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1528
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 802D152C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[2]);} // 802D1530
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1534
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 802D1538
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D153C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1540
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D1544
  c->lr=c->r[0]; // 802D1548
  c->r[1]=c->r[1]+0x00000020u; // 802D154C
  return; // 802D1550
}

// MakeTexSrtMtx_T__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1554(Ctx* __restrict c) {
  trace_call(0x802D1554u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1554
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1558
  c->f[1]=-c->f[0]; // 802D155C
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1560
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1564
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 802D1568
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 802D156C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 802D1570
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D1574
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 802D1578
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D157C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D1580
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D1584
  return; // 802D1588
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D158C(Ctx* __restrict c) {
  trace_call(0x802D158Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D158C
  c->r[0]=c->lr; // 802D1590
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1594
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D1598
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D159C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D15A0
  c->r[31]=c->r[4]|c->r[4]; // 802D15A4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D15A8
  c->r[4]=c->r[1]+0x00000008u; // 802D15AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D15B0
  c->r[30]=c->r[3]|c->r[3]; // 802D15B4
  c->r[3]=c->r[1]+0x0000000Cu; // 802D15B8
  c->lr=0x802D15C0u; f_8026C998(c); // 802D15BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D15C0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D15C4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D15C8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D15CC
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[0]); // 802D15D0
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 802D15D4
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D15D8
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[4]); // 802D15DC
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D15E0
  c->f[1]=-c->f[7]; // 802D15E4
  c->f[4]=c->ps1[4]=S(c->f[3]*c->f[4]); // 802D15E8
  c->f[3]=-c->f[6]; // 802D15EC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 802D15F0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D15F4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 802D15F8
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[3]);} // 802D15FC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[6]);} // 802D1600
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 802D1604
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[7]);} // 802D1608
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[2]);} // 802D160C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D1610
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1614
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1618
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D161C
  c->lr=c->r[0]; // 802D1620
  c->r[1]=c->r[1]+0x00000020u; // 802D1624
  return; // 802D1628
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D162C(Ctx* __restrict c) {
  trace_call(0x802D162Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D162C
  c->r[0]=c->lr; // 802D1630
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1634
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D1638
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D163C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D1640
  c->r[31]=c->r[4]|c->r[4]; // 802D1644
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1648
  c->r[4]=c->r[1]+0x00000008u; // 802D164C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D1650
  c->r[30]=c->r[3]|c->r[3]; // 802D1654
  c->r[3]=c->r[1]+0x0000000Cu; // 802D1658
  c->lr=0x802D1660u; f_8026C998(c); // 802D165C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1660
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1664
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802D1668
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D166C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1670
  {uint32_t ea=c->r[31]+0x00000010u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1674
  c->f[1]=-c->f[0]; // 802D1678
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 802D167C
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1680
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 802D1684
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1688
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D168C
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[6]); // 802D1690
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[5]); // 802D1694
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802D1698
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 802D169C
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D16A0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D16A4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 802D16A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D16AC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 802D16B0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[4]);} // 802D16B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D16B8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D16BC
  c->f[3]=-c->f[4]; // 802D16C0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[6]); // 802D16C4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[5]); // 802D16C8
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802D16CC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D16D0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D16D4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D16D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D16DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D16E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D16E4
  c->lr=c->r[0]; // 802D16E8
  c->r[1]=c->r[1]+0x00000020u; // 802D16EC
  return; // 802D16F0
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D16F4(Ctx* __restrict c) {
  trace_call(0x802D16F4u);
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D16F4
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D16F8
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D16FC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1700
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D1704
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1708
  c->f[4]=-c->f[6]; // 802D170C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1710
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802D1714
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 802D1718
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802D171C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 802D1720
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D1724
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 802D1728
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[3]);} // 802D172C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 802D1730
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 802D1734
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 802D1738
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D173C
  return; // 802D1740
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1744(Ctx* __restrict c) {
  trace_call(0x802D1744u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1744
  c->r[0]=c->lr; // 802D1748
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D174C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D1750
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1754
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D1758
  c->r[31]=c->r[4]|c->r[4]; // 802D175C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1760
  c->r[4]=c->r[1]+0x00000008u; // 802D1764
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D1768
  c->r[30]=c->r[3]|c->r[3]; // 802D176C
  c->r[3]=c->r[1]+0x0000000Cu; // 802D1770
  c->lr=0x802D1778u; f_8026C998(c); // 802D1774
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1778
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D177C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1780
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1784
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[3]); // 802D1788
  c->f[10]=c->ps1[10]=S(c->f[0]*c->f[2]); // 802D178C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1790
  c->f[7]=c->ps1[7]=S(c->f[5]*c->f[3]); // 802D1794
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1798
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[2]); // 802D179C
  c->f[3]=-c->f[9]; // 802D17A0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[1]); // 802D17A4
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D17A8
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[1]); // 802D17AC
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D17B0
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[4]); // 802D17B4
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802D17B8
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[4]); // 802D17BC
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[7]);} // 802D17C0
  c->f[5]=c->ps1[5]=S(c->f[8]-c->f[5]); // 802D17C4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D17C8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 802D17CC
  c->f[4]=-c->f[8]; // 802D17D0
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 802D17D4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[10]);} // 802D17D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D17DC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[9]);} // 802D17E0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 802D17E4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 802D17E8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D17EC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D17F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D17F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D17F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D17FC
  c->lr=c->r[0]; // 802D1800
  c->r[1]=c->r[1]+0x00000020u; // 802D1804
  return; // 802D1808
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D180C(Ctx* __restrict c) {
  trace_call(0x802D180Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D180C
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1810
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1814
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D1818
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D181C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1820
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1824
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[5]); // 802D1828
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D182C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 802D1830
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1834
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 802D1838
  {uint32_t ea=c->r[4]+0x00000000u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D183C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D1840
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1844
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[9]); // 802D1848
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D184C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[9]); // 802D1850
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 802D1854
  c->f[6]=c->ps1[6]=S(c->f[6]*c->f[9]); // 802D1858
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[9]); // 802D185C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D1860
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[8]);} // 802D1864
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[7]);} // 802D1868
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[6]);} // 802D186C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[4]);} // 802D1870
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D1874
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D1878
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D187C
  return; // 802D1880
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1884(Ctx* __restrict c) {
  trace_call(0x802D1884u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1884
  c->r[0]=c->lr; // 802D1888
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D188C
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1890
  c->r[4]=c->r[1]+0x00000008u; // 802D1894
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D1898
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D189C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D18A0
  c->r[31]=c->r[3]|c->r[3]; // 802D18A4
  c->r[3]=c->r[1]+0x0000000Cu; // 802D18A8
  c->lr=0x802D18B0u; f_8026C998(c); // 802D18AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D18B0
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D18B4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D18B8
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D18BC
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[2]); // 802D18C0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[2]); // 802D18C4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D18C8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 802D18CC
  {uint32_t ea=c->r[31]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D18D0
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D18D4
  {uint32_t ea=c->r[31]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D18D8
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[1]); // 802D18DC
  {uint32_t ea=c->r[31]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D18E0
  c->f[6]=c->ps1[6]=S(c->f[3]+c->f[0]); // 802D18E4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D18E8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D18EC
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[4]);} // 802D18F0
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D18F4
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[6]);} // 802D18F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D18FC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1900
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[9]); // 802D1904
  c->f[6]=c->ps1[6]=S(c->f[4]*c->f[2]); // 802D1908
  c->f[4]=c->ps1[4]=S(c->f[4]*c->f[9]); // 802D190C
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 802D1910
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[6]); // 802D1914
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D1918
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[6]);} // 802D191C
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[2]);} // 802D1920
  {uint32_t ea=c->r[1]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1924
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1928
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[7]); // 802D192C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[1]); // 802D1930
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[7]); // 802D1934
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 802D1938
  c->f[4]=c->ps1[4]=S(c->f[6]-c->f[4]); // 802D193C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D1940
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 802D1944
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802D1948
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D194C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1950
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 802D1954
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 802D1958
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 802D195C
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802D1960
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D1964
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 802D1968
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 802D196C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D1970
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D1974
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D1978
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D197C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1980
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D1984
  c->lr=c->r[0]; // 802D1988
  c->r[1]=c->r[1]+0x00000020u; // 802D198C
  return; // 802D1990
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1994(Ctx* __restrict c) {
  trace_call(0x802D1994u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1994
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1998
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D199C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D19A0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802D19A4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D19A8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D19AC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D19B0
  return; // 802D19B4
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D19B8(Ctx* __restrict c) {
  trace_call(0x802D19B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D19B8
  c->r[0]=c->lr; // 802D19BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802D19C0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802D19C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802D19C8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 802D19CC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 802D19D0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D19D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D19D8
  c->r[31]=c->r[4]|c->r[4]; // 802D19DC
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D19E0
  c->r[4]=c->r[1]+0x00000008u; // 802D19E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D19E8
  c->r[30]=c->r[3]|c->r[3]; // 802D19EC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D19F0
  c->r[3]=c->r[1]+0x0000000Cu; // 802D19F4
  c->lr=0x802D19FCu; f_8026C998(c); // 802D19F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D19FC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1A00
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1A04
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[4]); // 802D1A08
  {uint32_t ea=c->r[31]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1A0C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[1]); // 802D1A10
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1A14
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[4]); // 802D1A18
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 802D1A1C
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 802D1A20
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802D1A24
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[7]); // 802D1A28
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 802D1A2C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[6]); // 802D1A30
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D1A34
  c->f[7]=c->ps1[7]=S(c->f[0]*c->f[7]); // 802D1A38
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D1A3C
  c->f[5]=c->ps1[5]=S(c->f[5]+c->f[4]); // 802D1A40
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1A44
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[6]); // 802D1A48
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D1A4C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 802D1A50
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1A54
  c->f[6]=c->ps1[6]=S(c->f[7]-c->f[6]); // 802D1A58
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 802D1A5C
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 802D1A60
  c->f[12]=c->ps1[12]=S(c->f[1]*c->f[13]); // 802D1A64
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[30]); // 802D1A68
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[4]);} // 802D1A6C
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[11]); // 802D1A70
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[12]); // 802D1A74
  c->f[12]=c->ps1[12]=S(c->f[1]+c->f[6]); // 802D1A78
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[13]); // 802D1A7C
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[10]); // 802D1A80
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 802D1A84
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[6]); // 802D1A88
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[12]);} // 802D1A8C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[10]); // 802D1A90
  c->f[10]=c->ps1[10]=S(c->f[5]-c->f[4]); // 802D1A94
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[11]); // 802D1A98
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 802D1A9C
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[9]); // 802D1AA0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[8]); // 802D1AA4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[10]);} // 802D1AA8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 802D1AAC
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[9]); // 802D1AB0
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 802D1AB4
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 802D1AB8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D1ABC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 802D1AC0
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 802D1AC4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 802D1AC8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802D1ACC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802D1AD0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 802D1AD4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 802D1AD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1ADC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1AE0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802D1AE4
  c->lr=c->r[0]; // 802D1AE8
  c->r[1]=c->r[1]+0x00000040u; // 802D1AEC
  return; // 802D1AF0
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1AF4(Ctx* __restrict c) {
  trace_call(0x802D1AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1AF4
  c->r[0]=c->lr; // 802D1AF8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1AFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D1B00
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1B04
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D1B08
  c->r[31]=c->r[4]|c->r[4]; // 802D1B0C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1B10
  c->r[4]=c->r[1]+0x00000008u; // 802D1B14
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D1B18
  c->r[30]=c->r[3]|c->r[3]; // 802D1B1C
  c->r[3]=c->r[1]+0x0000000Cu; // 802D1B20
  c->lr=0x802D1B28u; f_8026C998(c); // 802D1B24
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1B28
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1B2C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1B30
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[1]); // 802D1B34
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1B38
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802D1B3C
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D1B40
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 802D1B44
  {uint32_t ea=c->r[30]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D1B48
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 802D1B4C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1B50
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[2]); // 802D1B54
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1B58
  {uint32_t ea=c->r[30]+0x00000018u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1B5C
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 802D1B60
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1B64
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 802D1B68
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 802D1B6C
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1B70
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[4]);} // 802D1B74
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1B78
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D1B7C
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802D1B80
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1B84
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 802D1B88
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1B8C
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[7]); // 802D1B90
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[10]); // 802D1B94
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[7]); // 802D1B98
  c->f[4]=c->ps1[4]=S(c->f[9]-c->f[4]); // 802D1B9C
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D1BA0
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[4]);} // 802D1BA4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 802D1BA8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1BAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D1BB0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[6]); // 802D1BB4
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[8]); // 802D1BB8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[8]); // 802D1BBC
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[6]); // 802D1BC0
  c->f[4]=c->ps1[4]=S(c->f[7]-c->f[4]); // 802D1BC4
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D1BC8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[4]);} // 802D1BCC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[1]);} // 802D1BD0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1BD4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1BD8
  c->f[1]=c->ps1[1]=S(c->f[6]*c->f[3]); // 802D1BDC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[5]); // 802D1BE0
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 802D1BE4
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802D1BE8
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 802D1BEC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[3]); // 802D1BF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 802D1BF4
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D1BF8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802D1BFC
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D1C00
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D1C04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1C08
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1C0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D1C10
  c->lr=c->r[0]; // 802D1C14
  c->r[1]=c->r[1]+0x00000020u; // 802D1C18
  return; // 802D1C1C
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1C20(Ctx* __restrict c) {
  trace_call(0x802D1C20u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1C20
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1C24
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1C28
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 802D1C2C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1C30
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1C34
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1C38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D1C3C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1C40
  c->f[6]=c->ps1[6]=S(c->f[6]-c->f[4]); // 802D1C44
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D1C48
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 802D1C4C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1C50
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 802D1C54
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1C58
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D1C5C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1C60
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D1C64
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 802D1C68
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1C6C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 802D1C70
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 802D1C74
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 802D1C78
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 802D1C7C
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 802D1C80
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 802D1C84
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D1C88
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 802D1C8C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 802D1C90
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 802D1C94
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D1C98
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D1C9C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D1CA0
  return; // 802D1CA4
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc21@unnamed@g3d_xsi_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D1CA8(Ctx* __restrict c) {
  trace_call(0x802D1CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1CA8
  c->r[0]=c->lr; // 802D1CAC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802D1CB0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802D1CB4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802D1CB8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802D1CBC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802D1CC0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 802D1CC4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 802D1CC8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1CCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D1CD0
  c->r[31]=c->r[4]|c->r[4]; // 802D1CD4
  {uint32_t ea=c->r[2]+0xFFFFACF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1CD8
  c->r[4]=c->r[1]+0x00000008u; // 802D1CDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D1CE0
  c->r[30]=c->r[3]|c->r[3]; // 802D1CE4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D1CE8
  c->r[3]=c->r[1]+0x0000000Cu; // 802D1CEC
  c->lr=0x802D1CF4u; f_8026C998(c); // 802D1CF0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1CF4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1CF8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802D1CFC
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D1D00
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 802D1D04
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[6]); // 802D1D08
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1D0C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1D10
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[5]); // 802D1D14
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 802D1D18
  c->f[7]=c->ps1[7]=S(c->f[4]-c->f[1]); // 802D1D1C
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 802D1D20
  {uint32_t ea=c->r[31]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1D24
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 802D1D28
  c->f[4]=c->ps1[4]=S(c->f[5]+c->f[4]); // 802D1D2C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D1D30
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[7]); // 802D1D34
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[7]); // 802D1D38
  {uint32_t ea=c->r[30]+0x00000004u; c->f[12]=c->ps1[12]=RF32(ea);} // 802D1D3C
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[4]); // 802D1D40
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[4]); // 802D1D44
  {uint32_t ea=c->r[30]+0x00000014u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D1D48
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 802D1D4C
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802D1D50
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D1D54
  c->f[6]=c->ps1[6]=S(c->f[8]-c->f[7]); // 802D1D58
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 802D1D5C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D1D60
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[2]); // 802D1D64
  c->f[8]=c->ps1[8]=S(c->f[1]+c->f[6]); // 802D1D68
  {uint32_t ea=c->r[30]+0x00000018u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D1D6C
  c->f[30]=c->ps1[30]=S(c->f[30]-c->f[13]); // 802D1D70
  c->f[13]=c->ps1[13]=S(c->f[4]+c->f[5]); // 802D1D74
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[29]); // 802D1D78
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[8]);} // 802D1D7C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[31]); // 802D1D80
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[12]); // 802D1D84
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[30]);} // 802D1D88
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[11]); // 802D1D8C
  c->f[29]=c->ps1[29]=S(c->f[7]+c->f[6]); // 802D1D90
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[13]);} // 802D1D94
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[12]); // 802D1D98
  c->f[8]=c->ps1[8]=S(c->f[5]-c->f[4]); // 802D1D9C
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[11]); // 802D1DA0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[29]);} // 802D1DA4
  c->f[5]=c->ps1[5]=S(c->f[0]*c->f[10]); // 802D1DA8
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[9]); // 802D1DAC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[8]);} // 802D1DB0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[9]); // 802D1DB4
  c->f[1]=c->ps1[1]=S(c->f[3]*c->f[10]); // 802D1DB8
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[6]); // 802D1DBC
  c->f[2]=c->ps1[2]=S(c->f[5]-c->f[4]); // 802D1DC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D1DC4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[6]);} // 802D1DC8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 802D1DCC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 802D1DD0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802D1DD4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802D1DD8
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 802D1DDC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 802D1DE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 802D1DE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 802D1DE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D1DEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D1DF0
  c->r[0]=R32(c->r[1]+0x00000054u); // 802D1DF4
  c->lr=c->r[0]; // 802D1DF8
  c->r[1]=c->r[1]+0x00000050u; // 802D1DFC
  return; // 802D1E00
}

// CalcTexMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_802D1E04(Ctx* __restrict c) {
  trace_call(0x802D1E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1E04
  c->r[0]=c->lr; // 802D1E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D1E0C
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 802D1E10
  cmpu(c,0,c->r[0],0x00000007u); // 802D1E14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D1E18
  c->r[31]=c->r[3]|c->r[3]; // 802D1E1C
  if (!crb(c,2)) { goto L_802D1E2C; } // 802D1E20
  c->r[3]=0u+0x00000000u; // 802D1E24
  goto L_802D1E8C; // 802D1E28
L_802D1E2C:;
  cmps(c,0,(int32_t)c->r[4],0); // 802D1E2C
  if (crb(c,2)) { goto L_802D1E54; } // 802D1E30
  c->r[6]=0u+0x80440000u; // 802D1E34
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D1E38
  c->r[6]=c->r[6]+0xFFFFC5F0u; // 802D1E3C
  c->r[4]=c->r[5]|c->r[5]; // 802D1E40
  c->r[12]=R32(c->r[6]+c->r[0]); // 802D1E44
  c->ctr=c->r[12]; // 802D1E48
  if (true) { c->lr=0x802D1E50u; dispatch(c,c->ctr); } // 802D1E4C
  goto L_802D1E70; // 802D1E50
L_802D1E54:;
  c->r[6]=0u+0x80440000u; // 802D1E54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D1E58
  c->r[6]=c->r[6]+0xFFFFC60Cu; // 802D1E5C
  c->r[4]=c->r[5]|c->r[5]; // 802D1E60
  c->r[12]=R32(c->r[6]+c->r[0]); // 802D1E64
  c->ctr=c->r[12]; // 802D1E68
  if (true) { c->lr=0x802D1E70u; dispatch(c,c->ctr); } // 802D1E6C
L_802D1E70:;
  {uint32_t ea=c->r[2]+0xFFFFACF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1E70
  c->r[3]=0u+0x00000001u; // 802D1E74
  {uint32_t ea=c->r[2]+0xFFFFACF4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1E78
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802D1E7C
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 802D1E80
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802D1E84
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 802D1E88
L_802D1E8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D1E8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D1E90
  c->lr=c->r[0]; // 802D1E94
  c->r[1]=c->r[1]+0x00000010u; // 802D1E98
  return; // 802D1E9C
}

// CalcWorldMtx_Xsi__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3PCQ34nw4r4math5MTX34PCQ34nw4r4math4VEC3UlPCQ34nw4r3g3d12ChrAnmResult
void f_802D1EA0(Ctx* __restrict c) {
  trace_call(0x802D1EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D1EA0
  c->r[0]=c->lr; // 802D1EA4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802D1EA8
  c->r[11]=c->r[1]+0x00000040u; // 802D1EAC
  c->lr=0x802D1EB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802D1EB0
  c->r[31]=R32(c->r[8]+0x00000000u); // 802D1EB4
  c->r[27]=c->r[3]|c->r[3]; // 802D1EB8
  c->r[28]=c->r[5]|c->r[5]; // 802D1EBC
  c->r[29]=c->r[6]|c->r[6]; // 802D1EC0
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 802D1EC4
  if (crb(c,2)) { goto L_802D1EEC; } // 802D1EC8
  {uint32_t ea=c->r[6]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1ECC
  c->r[30]=c->r[7]|0x40000000u; // 802D1ED0
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1ED4
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1ED8
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[2]);} // 802D1EDC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[1]);} // 802D1EE0
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802D1EE4
  goto L_802D1F20; // 802D1EE8
L_802D1EEC:;
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1EEC
  c->r[30]=rotl(c->r[7],0)&0x3FFFFFFFu; // 802D1EF0
  {uint32_t ea=c->r[8]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1EF4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1EF8
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 802D1EFC
  {uint32_t ea=c->r[8]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1F00
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1F04
  {uint32_t ea=c->r[8]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1F08
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D1F0C
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[4]);} // 802D1F10
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D1F14
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[2]);} // 802D1F18
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802D1F1C
L_802D1F20:;
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802D1F20
  if (!crb(c,2)) { goto L_802D1F30; } // 802D1F24
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 802D1F28
  if (crb(c,2)) { goto L_802D1F40; } // 802D1F2C
L_802D1F30:;
  c->r[3]=c->r[28]|c->r[28]; // 802D1F30
  c->r[4]=c->r[27]|c->r[27]; // 802D1F34
  c->lr=0x802D1F3Cu; f_803535C0(c); // 802D1F38
  goto L_802D2028; // 802D1F3C
L_802D1F40:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 802D1F40
  if (crb(c,2)) { goto L_802D1FC0; } // 802D1F44
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 802D1F48
  if (crb(c,2)) { goto L_802D1F7C; } // 802D1F4C
  {uint32_t ea=c->r[8]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1F50
  c->r[3]=c->r[27]|c->r[27]; // 802D1F54
  {uint32_t ea=c->r[8]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1F58
  c->r[4]=c->r[28]|c->r[28]; // 802D1F5C
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1F60
  c->r[5]=c->r[1]+0x00000014u; // 802D1F64
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802D1F68
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802D1F6C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 802D1F70
  c->lr=0x802D1F78u; f_8026CDF0(c); // 802D1F74
  goto L_802D2028; // 802D1F78
L_802D1F7C:;
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1F7C
  c->r[3]=c->r[27]|c->r[27]; // 802D1F80
  {uint32_t ea=c->r[8]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1F84
  c->r[4]=c->r[28]|c->r[28]; // 802D1F88
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1F8C
  c->r[5]=c->r[1]+0x00000008u; // 802D1F90
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 802D1F94
  {uint32_t ea=c->r[8]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D1F98
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1F9C
  {uint32_t ea=c->r[8]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1FA0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D1FA4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 802D1FA8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D1FAC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D1FB0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802D1FB4
  c->lr=0x802D1FBCu; f_8026CDF0(c); // 802D1FB8
  goto L_802D2028; // 802D1FBC
L_802D1FC0:;
  c->r[0]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[0]); // 802D1FC0
  if (crb(c,2)) { goto L_802D1FDC; } // 802D1FC4
  c->r[3]=c->r[28]|c->r[28]; // 802D1FC8
  c->r[5]=c->r[27]|c->r[27]; // 802D1FCC
  c->r[4]=c->r[8]+0x0000001Cu; // 802D1FD0
  c->lr=0x802D1FD8u; f_803535F4(c); // 802D1FD4
  goto L_802D2028; // 802D1FD8
L_802D1FDC:;
  c->r[4]=c->r[27]|c->r[27]; // 802D1FDC
  c->r[3]=c->r[8]+0x0000001Cu; // 802D1FE0
  c->lr=0x802D1FE8u; f_803535C0(c); // 802D1FE4
  {uint32_t ea=c->r[27]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D1FE8
  c->r[3]=c->r[28]|c->r[28]; // 802D1FEC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D1FF0
  c->r[4]=c->r[27]|c->r[27]; // 802D1FF4
  {uint32_t ea=c->r[27]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D1FF8
  c->r[5]=c->r[27]|c->r[27]; // 802D1FFC
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[0]); // 802D2000
  {uint32_t ea=c->r[29]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2004
  {uint32_t ea=c->r[27]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2008
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D200C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D2010
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[4]);} // 802D2014
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D2018
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[2]);} // 802D201C
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D2020
  c->lr=0x802D2028u; f_803535F4(c); // 802D2024
L_802D2028:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802D2028
  c->r[3]=rotl(c->r[30],0)&0x0FFFFFFFu; // 802D202C
  if (crb(c,2)) { goto L_802D2038; } // 802D2030
  c->r[3]=c->r[30]|0x10000000u; // 802D2034
L_802D2038:;
  c->r[11]=c->r[1]+0x00000040u; // 802D2038
  c->lr=0x802D2040u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802D203C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802D2040
  c->lr=c->r[0]; // 802D2044
  c->r[1]=c->r[1]+0x00000040u; // 802D2048
  return; // 802D204C
}

// MakeTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2050(Ctx* __restrict c) {
  trace_call(0x802D2050u);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2050
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2054
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2058
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[5]); // 802D205C
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2060
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802D2064
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D2068
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[5]);} // 802D206C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D2070
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802D2074
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[4]);} // 802D2078
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[4]);} // 802D207C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D2080
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 802D2084
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 802D2088
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[4]);} // 802D208C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2090
  return; // 802D2094
}

// MakeTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2098(Ctx* __restrict c) {
  trace_call(0x802D2098u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2098
  c->r[0]=c->lr; // 802D209C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D20A0
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D20A4
  c->r[4]=c->r[1]+0x00000008u; // 802D20A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D20AC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D20B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D20B4
  c->r[31]=c->r[3]|c->r[3]; // 802D20B8
  c->r[3]=c->r[1]+0x0000000Cu; // 802D20BC
  c->lr=0x802D20C4u; f_8026C998(c); // 802D20C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D20C4
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D20C8
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 802D20CC
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D20D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D20D4
  {uint32_t ea=c->r[2]+0xFFFFAD10u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D20D8
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[0]);} // 802D20DC
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[4]);} // 802D20E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D20E4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D20E8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D20EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802D20F0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802D20F4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D20F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D20FC
  c->f[0]=-c->f[0]; // 802D2100
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 802D2104
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2108
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 802D210C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[4]);} // 802D2110
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2114
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2118
  c->f[1]=-c->f[1]; // 802D211C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D2120
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802D2124
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802D2128
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D212C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2130
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D2134
  c->lr=c->r[0]; // 802D2138
  c->r[1]=c->r[1]+0x00000020u; // 802D213C
  return; // 802D2140
}

// MakeTexSrtMtx_T__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2144(Ctx* __restrict c) {
  trace_call(0x802D2144u);
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2144
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2148
  c->f[1]=-c->f[0]; // 802D214C
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2150
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2154
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[3]);} // 802D2158
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 802D215C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[2]);} // 802D2160
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D2164
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 802D2168
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D216C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D2170
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2174
  return; // 802D2178
}

// MakeTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D217C(Ctx* __restrict c) {
  trace_call(0x802D217Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D217C
  c->r[0]=c->lr; // 802D2180
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2184
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D2188
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D218C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2190
  c->r[31]=c->r[4]|c->r[4]; // 802D2194
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D2198
  c->r[4]=c->r[1]+0x00000008u; // 802D219C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D21A0
  c->r[30]=c->r[3]|c->r[3]; // 802D21A4
  c->r[3]=c->r[1]+0x0000000Cu; // 802D21A8
  c->lr=0x802D21B0u; f_8026C998(c); // 802D21AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D21B0
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D21B4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D21B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D21BC
  c->f[9]=c->ps1[9]=S(c->f[0]*c->f[1]); // 802D21C0
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[1]); // 802D21C4
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D21C8
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[2]); // 802D21CC
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D21D0
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[2]); // 802D21D4
  c->f[1]=-c->f[9]; // 802D21D8
  c->f[2]=c->ps1[2]=S(c->f[6]+c->f[7]); // 802D21DC
  {uint32_t ea=c->r[2]+0xFFFFAD10u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D21E0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[6]);} // 802D21E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[8]); // 802D21E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[4]); // 802D21EC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 802D21F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 802D21F4
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 802D21F8
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802D21FC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 802D2200
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802D2204
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D2208
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 802D220C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 802D2210
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2214
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2218
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D221C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D2220
  c->lr=c->r[0]; // 802D2224
  c->r[1]=c->r[1]+0x00000020u; // 802D2228
  return; // 802D222C
}

// MakeTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2230(Ctx* __restrict c) {
  trace_call(0x802D2230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2230
  c->r[0]=c->lr; // 802D2234
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2238
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D223C
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2240
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2244
  c->r[31]=c->r[4]|c->r[4]; // 802D2248
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D224C
  c->r[4]=c->r[1]+0x00000008u; // 802D2250
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D2254
  c->r[30]=c->r[3]|c->r[3]; // 802D2258
  c->r[3]=c->r[1]+0x0000000Cu; // 802D225C
  c->lr=0x802D2264u; f_8026C998(c); // 802D2260
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2264
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2268
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802D226C
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D2270
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2274
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2278
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 802D227C
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2280
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 802D2284
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[5]);} // 802D2288
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 802D228C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2290
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2294
  c->f[1]=-c->f[1]; // 802D2298
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802D229C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 802D22A0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D22A4
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 802D22A8
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D22AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D22B0
  c->f[0]=-c->f[0]; // 802D22B4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 802D22B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D22BC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 802D22C0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[5]);} // 802D22C4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D22C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D22CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 802D22D0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802D22D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D22D8
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 802D22DC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D22E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D22E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D22E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D22EC
  c->lr=c->r[0]; // 802D22F0
  c->r[1]=c->r[1]+0x00000020u; // 802D22F4
  return; // 802D22F8
}

// MakeTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D22FC(Ctx* __restrict c) {
  trace_call(0x802D22FCu);
  {uint32_t ea=c->r[4]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D22FC
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2300
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2304
  c->f[4]=-c->f[6]; // 802D2308
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D230C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[1]); // 802D2310
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2314
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802D2318
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D231C
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[6]);} // 802D2320
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 802D2324
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D2328
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[5]);} // 802D232C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D2330
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[5]);} // 802D2334
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 802D2338
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[5]);} // 802D233C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D2340
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 802D2344
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[5]);} // 802D2348
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D234C
  return; // 802D2350
}

// MakeTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2354(Ctx* __restrict c) {
  trace_call(0x802D2354u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2354
  c->r[0]=c->lr; // 802D2358
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D235C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D2360
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2364
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2368
  c->r[31]=c->r[4]|c->r[4]; // 802D236C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D2370
  c->r[4]=c->r[1]+0x00000008u; // 802D2374
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D2378
  c->r[30]=c->r[3]|c->r[3]; // 802D237C
  c->r[3]=c->r[1]+0x0000000Cu; // 802D2380
  c->lr=0x802D2388u; f_8026C998(c); // 802D2384
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2388
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D238C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2390
  {uint32_t ea=c->r[31]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2394
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[0]); // 802D2398
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[3]); // 802D239C
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D23A0
  c->f[8]=c->ps1[8]=S(c->f[2]*c->f[0]); // 802D23A4
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D23A8
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[3]); // 802D23AC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D23B0
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[1]); // 802D23B4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[5]);} // 802D23B8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 802D23BC
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D23C0
  c->f[5]=-c->f[5]; // 802D23C4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 802D23C8
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 802D23CC
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[6]);} // 802D23D0
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[2]); // 802D23D4
  c->f[3]=c->ps1[3]=S(c->f[5]*c->f[3]); // 802D23D8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[8]);} // 802D23DC
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 802D23E0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D23E4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[6]);} // 802D23E8
  c->f[1]=-c->f[9]; // 802D23EC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D23F0
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 802D23F4
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[1]);} // 802D23F8
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D23FC
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2400
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D2404
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2408
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D240C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D2410
  c->lr=c->r[0]; // 802D2414
  c->r[1]=c->r[1]+0x00000020u; // 802D2418
  return; // 802D241C
}

// ProductTexSrtMtx_S__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2420(Ctx* __restrict c) {
  trace_call(0x802D2420u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2420
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D2424
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2428
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 802D242C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D2430
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2434
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 802D2438
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D243C
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[1]); // 802D2440
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[10]); // 802D2444
  {uint32_t ea=c->r[3]+0x00000004u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D2448
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 802D244C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D2450
  {uint32_t ea=c->r[3]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2454
  {uint32_t ea=c->r[3]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2458
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D245C
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[10]); // 802D2460
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[10]); // 802D2464
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[9]);} // 802D2468
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802D246C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 802D2470
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[8]);} // 802D2474
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 802D2478
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 802D247C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 802D2480
  c->f[0]=c->ps1[0]=S(c->f[6]+c->f[0]); // 802D2484
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[5]);} // 802D2488
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[3]);} // 802D248C
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 802D2490
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 802D2494
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2498
  return; // 802D249C
}

// ProductTexSrtMtx_R__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D24A0(Ctx* __restrict c) {
  trace_call(0x802D24A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D24A0
  c->r[0]=c->lr; // 802D24A4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D24A8
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D24AC
  c->r[4]=c->r[1]+0x00000008u; // 802D24B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D24B4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D24B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D24BC
  c->r[31]=c->r[3]|c->r[3]; // 802D24C0
  c->r[3]=c->r[1]+0x0000000Cu; // 802D24C4
  c->lr=0x802D24CCu; f_8026C998(c); // 802D24C8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D24CC
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D24D0
  c->f[1]=-c->f[2]; // 802D24D4
  {uint32_t ea=c->r[31]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D24D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D24DC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 802D24E0
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D24E4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802D24E8
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 802D24EC
  {uint32_t ea=c->r[31]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D24F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 802D24F4
  {uint32_t ea=c->r[31]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D24F8
  {uint32_t ea=c->r[31]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D24FC
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 802D2500
  c->f[3]=c->ps1[3]=S(c->f[1]+c->f[0]); // 802D2504
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2508
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D250C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 802D2510
  c->f[6]=c->ps1[6]=S(c->f[1]-c->f[7]); // 802D2514
  {uint32_t ea=c->r[31]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D2518
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[3]);} // 802D251C
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 802D2520
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2524
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D2528
  c->f[0]=-c->f[1]; // 802D252C
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[5]); // 802D2530
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 802D2534
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[10]); // 802D2538
  c->f[0]=c->ps1[0]=S(c->f[11]*c->f[5]); // 802D253C
  c->f[2]=c->ps1[2]=S(c->f[9]+c->f[2]); // 802D2540
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D2544
  {uint32_t ea=c->r[31]+0x00000004u; WF32(ea,c->f[2]);} // 802D2548
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[0]);} // 802D254C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2550
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D2554
  c->f[0]=-c->f[1]; // 802D2558
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 802D255C
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 802D2560
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 802D2564
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 802D2568
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 802D256C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D2570
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[2]);} // 802D2574
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[0]);} // 802D2578
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D257C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2580
  c->f[0]=-c->f[1]; // 802D2584
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 802D2588
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 802D258C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 802D2590
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 802D2594
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D2598
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D259C
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 802D25A0
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 802D25A4
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D25A8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D25AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D25B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D25B4
  c->lr=c->r[0]; // 802D25B8
  c->r[1]=c->r[1]+0x00000020u; // 802D25BC
  return; // 802D25C0
}

// ProductTexSrtMtx_T__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D25C4(Ctx* __restrict c) {
  trace_call(0x802D25C4u);
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D25C4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D25C8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D25CC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D25D0
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 802D25D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D25D8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[2]);} // 802D25DC
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D25E0
  return; // 802D25E4
}

// ProductTexSrtMtx_SR__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D25E8(Ctx* __restrict c) {
  trace_call(0x802D25E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D25E8
  c->r[0]=c->lr; // 802D25EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802D25F0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802D25F4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802D25F8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 802D25FC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 802D2600
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2604
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2608
  c->r[31]=c->r[4]|c->r[4]; // 802D260C
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2610
  c->r[4]=c->r[1]+0x00000008u; // 802D2614
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D2618
  c->r[30]=c->r[3]|c->r[3]; // 802D261C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D2620
  c->r[3]=c->r[1]+0x0000000Cu; // 802D2624
  c->lr=0x802D262Cu; f_8026C998(c); // 802D2628
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D262C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2630
  {uint32_t ea=c->r[31]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2634
  c->f[8]=c->ps1[8]=S(c->f[5]*c->f[0]); // 802D2638
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D263C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 802D2640
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2644
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D2648
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[6]); // 802D264C
  c->f[12]=-c->f[8]; // 802D2650
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2654
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[7]); // 802D2658
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802D265C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[7]); // 802D2660
  {uint32_t ea=c->r[30]+0x00000010u; c->f[13]=c->ps1[13]=RF32(ea);} // 802D2664
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 802D2668
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D266C
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 802D2670
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D2674
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 802D2678
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D267C
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 802D2680
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D2684
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 802D2688
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802D268C
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[30]); // 802D2690
  c->f[6]=c->ps1[6]=S(c->f[1]*c->f[13]); // 802D2694
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802D2698
  c->f[4]=c->ps1[4]=S(c->f[7]+c->f[5]); // 802D269C
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[6]); // 802D26A0
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 802D26A4
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[4]);} // 802D26A8
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[30]); // 802D26AC
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[13]); // 802D26B0
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 802D26B4
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 802D26B8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 802D26BC
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 802D26C0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[31]);} // 802D26C4
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 802D26C8
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 802D26CC
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 802D26D0
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 802D26D4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 802D26D8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 802D26DC
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 802D26E0
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 802D26E4
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 802D26E8
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802D26EC
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 802D26F0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D26F4
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 802D26F8
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 802D26FC
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 802D2700
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802D2704
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802D2708
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 802D270C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 802D2710
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2714
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D2718
  c->r[0]=R32(c->r[1]+0x00000044u); // 802D271C
  c->lr=c->r[0]; // 802D2720
  c->r[1]=c->r[1]+0x00000040u; // 802D2724
  return; // 802D2728
}

// ProductTexSrtMtx_RT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D272C(Ctx* __restrict c) {
  trace_call(0x802D272Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D272C
  c->r[0]=c->lr; // 802D2730
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2734
  W32(c->r[1]+0x00000024u,c->r[0]); // 802D2738
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D273C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2740
  c->r[31]=c->r[4]|c->r[4]; // 802D2744
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D2748
  c->r[4]=c->r[1]+0x00000008u; // 802D274C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D2750
  c->r[30]=c->r[3]|c->r[3]; // 802D2754
  c->r[3]=c->r[1]+0x0000000Cu; // 802D2758
  c->lr=0x802D2760u; f_8026C998(c); // 802D275C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2760
  {uint32_t ea=c->r[30]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2764
  c->f[1]=-c->f[2]; // 802D2768
  {uint32_t ea=c->r[30]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D276C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2770
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 802D2774
  {uint32_t ea=c->r[30]+0x00000004u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D2778
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802D277C
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[4]); // 802D2780
  {uint32_t ea=c->r[30]+0x00000014u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D2784
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[4]); // 802D2788
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D278C
  {uint32_t ea=c->r[30]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D2790
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 802D2794
  c->f[5]=c->ps1[5]=S(c->f[1]+c->f[0]); // 802D2798
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D279C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D27A0
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[3]);} // 802D27A4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 802D27A8
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D27AC
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[5]);} // 802D27B0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D27B4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D27B8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D27BC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D27C0
  c->f[1]=-c->f[3]; // 802D27C4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 802D27C8
  c->f[5]=c->ps1[5]=S(c->f[3]*c->f[6]); // 802D27CC
  c->f[9]=c->ps1[9]=S(c->f[11]*c->f[10]); // 802D27D0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 802D27D4
  c->f[1]=c->ps1[1]=S(c->f[11]*c->f[6]); // 802D27D8
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[5]); // 802D27DC
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[7]); // 802D27E0
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[1]); // 802D27E4
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[5]);} // 802D27E8
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[7]); // 802D27EC
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[1]);} // 802D27F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D27F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D27F8
  c->f[0]=-c->f[1]; // 802D27FC
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[4]); // 802D2800
  c->f[5]=c->ps1[5]=S(c->f[9]*c->f[8]); // 802D2804
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[8]); // 802D2808
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[4]); // 802D280C
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 802D2810
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D2814
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 802D2818
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 802D281C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2820
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2824
  c->f[0]=-c->f[1]; // 802D2828
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[3]); // 802D282C
  c->f[4]=c->ps1[4]=S(c->f[5]*c->f[6]); // 802D2830
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 802D2834
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[3]); // 802D2838
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[2]); // 802D283C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D2840
  c->f[1]=c->ps1[1]=S(c->f[7]+c->f[2]); // 802D2844
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 802D2848
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 802D284C
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2850
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2854
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D2858
  c->r[0]=R32(c->r[1]+0x00000024u); // 802D285C
  c->lr=c->r[0]; // 802D2860
  c->r[1]=c->r[1]+0x00000020u; // 802D2864
  return; // 802D2868
}

// ProductTexSrtMtx_ST__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D286C(Ctx* __restrict c) {
  trace_call(0x802D286Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D286C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2870
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2874
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2878
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D287C
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D2880
  c->f[4]=c->ps1[4]=S(c->f[3]-c->f[2]); // 802D2884
  {uint32_t ea=c->r[4]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2888
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[7]); // 802D288C
  {uint32_t ea=c->r[3]+0x00000014u; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2890
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D2894
  c->f[6]=c->ps1[6]=S(c->f[4]-c->f[7]); // 802D2898
  c->f[0]=c->ps1[0]=S(c->f[5]*c->f[0]); // 802D289C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D28A0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[5]); // 802D28A4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D28A8
  c->f[2]=c->ps1[2]=S(c->f[11]*c->f[6]); // 802D28AC
  c->f[10]=c->ps1[10]=S(c->f[8]*c->f[11]); // 802D28B0
  c->f[0]=c->ps1[0]=S(c->f[7]+c->f[0]); // 802D28B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D28B8
  c->f[6]=c->ps1[6]=S(c->f[7]+c->f[2]); // 802D28BC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D28C0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D28C4
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[11]); // 802D28C8
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[11]); // 802D28CC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[10]);} // 802D28D0
  c->f[3]=c->ps1[3]=S(c->f[3]*c->f[5]); // 802D28D4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[5]); // 802D28D8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[6]);} // 802D28DC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802D28E0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[9]);} // 802D28E4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[7]);} // 802D28E8
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[4]);} // 802D28EC
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[3]);} // 802D28F0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 802D28F4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D28F8
  return; // 802D28FC
}

// ProductTexSrtMtx_SRT__Q54nw4r3g3d6detail3dcc24@unnamed@g3d_3dsmax_cpp@FPQ34nw4r4math5MTX34RCQ34nw4r3g3d6TexSrt
void f_802D2900(Ctx* __restrict c) {
  trace_call(0x802D2900u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2900
  c->r[0]=c->lr; // 802D2904
  W32(c->r[1]+0x00000054u,c->r[0]); // 802D2908
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802D290C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802D2910
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802D2914
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802D2918
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 802D291C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 802D2920
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2924
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802D2928
  c->r[31]=c->r[4]|c->r[4]; // 802D292C
  {uint32_t ea=c->r[2]+0xFFFFAD0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2930
  c->r[4]=c->r[1]+0x00000008u; // 802D2934
  W32(c->r[1]+0x00000018u,c->r[30]); // 802D2938
  c->r[30]=c->r[3]|c->r[3]; // 802D293C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802D2940
  c->r[3]=c->r[1]+0x0000000Cu; // 802D2944
  c->lr=0x802D294Cu; f_8026C998(c); // 802D2948
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802D294C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802D2950
  {uint32_t ea=c->r[30]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2954
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2958
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[2]); // 802D295C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D2960
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[0]); // 802D2964
  {uint32_t ea=c->r[1]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802D2968
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[2]); // 802D296C
  {uint32_t ea=c->r[2]+0xFFFFAD04u; c->f[7]=c->ps1[7]=RF32(ea);} // 802D2970
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[6]); // 802D2974
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802D2978
  {uint32_t ea=c->r[31]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802D297C
  c->f[12]=-c->f[9]; // 802D2980
  {uint32_t ea=c->r[30]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 802D2984
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[7]); // 802D2988
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[2]); // 802D298C
  {uint32_t ea=c->r[30]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 802D2990
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[6]); // 802D2994
  c->f[6]=c->ps1[6]=S(c->f[0]*c->f[4]); // 802D2998
  {uint32_t ea=c->r[30]+0x00000004u; c->f[11]=c->ps1[11]=RF32(ea);} // 802D299C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[7]); // 802D29A0
  c->f[4]=c->ps1[4]=S(c->f[12]*c->f[4]); // 802D29A4
  {uint32_t ea=c->r[30]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 802D29A8
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[29]); // 802D29AC
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[3]); // 802D29B0
  {uint32_t ea=c->r[30]+0x00000008u; c->f[9]=c->ps1[9]=RF32(ea);} // 802D29B4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 802D29B8
  c->f[13]=c->ps1[13]=S(c->f[1]*c->f[31]); // 802D29BC
  {uint32_t ea=c->r[30]+0x00000018u; c->f[8]=c->ps1[8]=RF32(ea);} // 802D29C0
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802D29C4
  c->f[3]=c->ps1[3]=S(c->f[4]+c->f[3]); // 802D29C8
  c->f[4]=c->ps1[4]=S(c->f[30]+c->f[13]); // 802D29CC
  c->f[13]=c->ps1[13]=S(c->f[7]+c->f[5]); // 802D29D0
  c->f[7]=c->ps1[7]=S(c->f[7]+c->f[3]); // 802D29D4
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[4]);} // 802D29D8
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[29]); // 802D29DC
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[31]); // 802D29E0
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[13]);} // 802D29E4
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[11]); // 802D29E8
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[10]); // 802D29EC
  c->f[13]=c->ps1[13]=S(c->f[6]+c->f[5]); // 802D29F0
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[7]);} // 802D29F4
  c->f[6]=c->ps1[6]=S(c->f[12]*c->f[11]); // 802D29F8
  c->f[7]=c->ps1[7]=S(c->f[4]+c->f[3]); // 802D29FC
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[10]); // 802D2A00
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[13]);} // 802D2A04
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[9]); // 802D2A08
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[8]); // 802D2A0C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[7]);} // 802D2A10
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[8]); // 802D2A14
  c->f[1]=c->ps1[1]=S(c->f[12]*c->f[9]); // 802D2A18
  c->f[5]=c->ps1[5]=S(c->f[6]+c->f[5]); // 802D2A1C
  c->f[2]=c->ps1[2]=S(c->f[4]+c->f[3]); // 802D2A20
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802D2A24
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[5]);} // 802D2A28
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[2]);} // 802D2A2C
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 802D2A30
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802D2A34
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802D2A38
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 802D2A3C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 802D2A40
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 802D2A44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 802D2A48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802D2A4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802D2A50
  c->r[0]=R32(c->r[1]+0x00000054u); // 802D2A54
  c->lr=c->r[0]; // 802D2A58
  c->r[1]=c->r[1]+0x00000050u; // 802D2A5C
  return; // 802D2A60
}

// CalcTexMtx_3dsmax__Q44nw4r3g3d6detail3dccFPQ34nw4r4math5MTX34bRCQ34nw4r3g3d6TexSrtQ44nw4r3g3d6TexSrt4Flag
void f_802D2A64(Ctx* __restrict c) {
  trace_call(0x802D2A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2A64
  c->r[0]=c->lr; // 802D2A68
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D2A6C
  c->r[0]=rotl(c->r[6],31)&0x00000007u; // 802D2A70
  cmpu(c,0,c->r[0],0x00000007u); // 802D2A74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D2A78
  c->r[31]=c->r[3]|c->r[3]; // 802D2A7C
  if (!crb(c,2)) { goto L_802D2A8C; } // 802D2A80
  c->r[3]=0u+0x00000000u; // 802D2A84
  goto L_802D2AEC; // 802D2A88
L_802D2A8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 802D2A8C
  if (crb(c,2)) { goto L_802D2AB4; } // 802D2A90
  c->r[6]=0u+0x80440000u; // 802D2A94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D2A98
  c->r[6]=c->r[6]+0xFFFFC628u; // 802D2A9C
  c->r[4]=c->r[5]|c->r[5]; // 802D2AA0
  c->r[12]=R32(c->r[6]+c->r[0]); // 802D2AA4
  c->ctr=c->r[12]; // 802D2AA8
  if (true) { c->lr=0x802D2AB0u; dispatch(c,c->ctr); } // 802D2AAC
  goto L_802D2AD0; // 802D2AB0
L_802D2AB4:;
  c->r[6]=0u+0x80440000u; // 802D2AB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802D2AB8
  c->r[6]=c->r[6]+0xFFFFC644u; // 802D2ABC
  c->r[4]=c->r[5]|c->r[5]; // 802D2AC0
  c->r[12]=R32(c->r[6]+c->r[0]); // 802D2AC4
  c->ctr=c->r[12]; // 802D2AC8
  if (true) { c->lr=0x802D2AD0u; dispatch(c,c->ctr); } // 802D2ACC
L_802D2AD0:;
  {uint32_t ea=c->r[2]+0xFFFFAD00u; c->f[1]=c->ps1[1]=RF32(ea);} // 802D2AD0
  c->r[3]=0u+0x00000001u; // 802D2AD4
  {uint32_t ea=c->r[2]+0xFFFFAD08u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2AD8
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802D2ADC
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 802D2AE0
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802D2AE4
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[1]);} // 802D2AE8
L_802D2AEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D2AEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D2AF0
  c->lr=c->r[0]; // 802D2AF4
  c->r[1]=c->r[1]+0x00000010u; // 802D2AF8
  return; // 802D2AFC
}

// CalcWorldMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34PUl
void f_802D2B00(Ctx* __restrict c) {
  trace_call(0x802D2B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2B00
  c->r[0]=c->lr; // 802D2B04
  cmps(c,0,(int32_t)c->r[5],0); // 802D2B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D2B0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D2B10
  c->r[31]=c->r[3]|c->r[3]; // 802D2B14
  if (crb(c,2)) { goto L_802D2B34; } // 802D2B18
  c->r[6]=R32(c->r[5]+0x00000000u); // 802D2B1C
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 802D2B20
  if (crb(c,2)) { goto L_802D2B34; } // 802D2B24
  c->r[0]=rotl(c->r[6],0)&0xFFFFFFFEu; // 802D2B28
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2B2C
  goto L_802D2B94; // 802D2B30
L_802D2B34:;
  cmps(c,0,(int32_t)c->r[4],0); // 802D2B34
  if (crb(c,2)) { goto L_802D2B6C; } // 802D2B38
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2B3C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 802D2B40
  if (crb(c,2)) { goto L_802D2B58; } // 802D2B44
  c->r[3]=c->r[4]|c->r[4]; // 802D2B48
  c->r[4]=c->r[31]+0x0000003Cu; // 802D2B4C
  c->lr=0x802D2B54u; f_803535C0(c); // 802D2B50
  goto L_802D2B78; // 802D2B54
L_802D2B58:;
  c->r[3]=c->r[4]|c->r[4]; // 802D2B58
  c->r[4]=c->r[31]+0x0000000Cu; // 802D2B5C
  c->r[5]=c->r[31]+0x0000003Cu; // 802D2B60
  c->lr=0x802D2B68u; f_803535F4(c); // 802D2B64
  goto L_802D2B78; // 802D2B68
L_802D2B6C:;
  c->r[3]=c->r[3]+0x0000000Cu; // 802D2B6C
  c->r[4]=c->r[31]+0x0000003Cu; // 802D2B70
  c->lr=0x802D2B78u; f_803535C0(c); // 802D2B74
L_802D2B78:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 802D2B78
  c->r[0]=rotl(c->r[0],0)&0x10000000u; cr0(c,c->r[0]); // 802D2B7C
  if (crb(c,2)) { goto L_802D2B94; } // 802D2B80
  c->r[3]=c->r[31]+0x000000B4u; // 802D2B84
  c->r[4]=c->r[31]+0x0000009Cu; // 802D2B88
  c->r[5]=c->r[31]+0x0000003Cu; // 802D2B8C
  c->lr=0x802D2B94u; f_8026D27C(c); // 802D2B90
L_802D2B94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D2B94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D2B98
  c->lr=c->r[0]; // 802D2B9C
  c->r[1]=c->r[1]+0x00000010u; // 802D2BA0
  return; // 802D2BA4
}

// CalcViewMtx__Q34nw4r3g3d6ScnObjFPCQ34nw4r4math5MTX34
void f_802D2BA8(Ctx* __restrict c) {
  trace_call(0x802D2BA8u);
  c->r[5]=c->r[3]|c->r[3]; // 802D2BA8
  c->r[3]=c->r[4]|c->r[4]; // 802D2BAC
  c->r[4]=c->r[5]+0x0000003Cu; // 802D2BB0
  c->r[5]=c->r[5]+0x0000006Cu; // 802D2BB4
  f_803535F4(c); return; // 802D2BB8
}

// __ct__Q34nw4r3g3d6ScnObjFP12MEMAllocator
void f_802D2BBC(Ctx* __restrict c) {
  trace_call(0x802D2BBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2BBC
  c->r[0]=c->lr; // 802D2BC0
  c->r[6]=0u+0x80480000u; // 802D2BC4
  c->r[7]=0u+0x00000000u; // 802D2BC8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802D2BCC
  c->r[5]=0u+0x00000080u; // 802D2BD0
  c->r[6]=c->r[6]+0x000070B0u; // 802D2BD4
  c->r[0]=c->r[7]|0x80000000u; // 802D2BD8
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802D2BDC
  c->r[31]=c->r[3]|c->r[3]; // 802D2BE0
  W32(c->r[3]+0x00000004u,c->r[7]); // 802D2BE4
  W32(c->r[3]+0x00000008u,c->r[4]); // 802D2BE8
  W32(c->r[3]+0x00000000u,c->r[6]); // 802D2BEC
  W8(c->r[3]+0x000000D0u,c->r[5]); // 802D2BF0
  W8(c->r[3]+0x000000D1u,c->r[5]); // 802D2BF4
  W8(c->r[3]+0x000000D2u,c->r[7]); // 802D2BF8
  W8(c->r[3]+0x000000D3u,c->r[7]); // 802D2BFC
  W32(c->r[3]+0x000000D4u,c->r[7]); // 802D2C00
  W8(c->r[3]+0x000000D8u,c->r[7]); // 802D2C04
  W8(c->r[3]+0x000000D9u,c->r[7]); // 802D2C08
  W16(c->r[3]+0x000000DAu,c->r[7]); // 802D2C0C
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2C10
  c->r[3]=c->r[3]+0x0000000Cu; // 802D2C14
  c->lr=0x802D2C1Cu; f_80353594(c); // 802D2C18
  c->r[3]=c->r[31]+0x0000003Cu; // 802D2C1C
  c->lr=0x802D2C24u; f_80353594(c); // 802D2C20
  c->r[3]=c->r[31]+0x0000006Cu; // 802D2C24
  c->lr=0x802D2C2Cu; f_80353594(c); // 802D2C28
  {uint32_t ea=c->r[2]+0xFFFFAD18u; c->f[0]=c->ps1[0]=RF32(ea);} // 802D2C2C
  c->r[3]=c->r[31]|c->r[31]; // 802D2C30
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 802D2C34
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 802D2C38
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 802D2C3C
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 802D2C40
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 802D2C44
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 802D2C48
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 802D2C4C
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[0]);} // 802D2C50
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[0]);} // 802D2C54
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[0]);} // 802D2C58
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[0]);} // 802D2C5C
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[0]);} // 802D2C60
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802D2C64
  c->r[0]=R32(c->r[1]+0x00000044u); // 802D2C68
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802D2C6C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802D2C70
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802D2C74
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 802D2C78
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 802D2C7C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 802D2C80
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802D2C84
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 802D2C88
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802D2C8C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802D2C90
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802D2C94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802D2C98
  c->lr=c->r[0]; // 802D2C9C
  c->r[1]=c->r[1]+0x00000040u; // 802D2CA0
  return; // 802D2CA4
}

// __dt__Q34nw4r3g3d6ScnObjFv
void f_802D2CA8(Ctx* __restrict c) {
  trace_call(0x802D2CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2CA8
  c->r[0]=c->lr; // 802D2CAC
  cmps(c,0,(int32_t)c->r[3],0); // 802D2CB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D2CB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802D2CB8
  c->r[31]=c->r[3]|c->r[3]; // 802D2CBC
  if (crb(c,2)) { goto L_802D2D14; } // 802D2CC0
  c->r[5]=R32(c->r[3]+0x000000D4u); // 802D2CC4
  c->r[4]=0u+0x80480000u; // 802D2CC8
  c->r[4]=c->r[4]+0x000070B0u; // 802D2CCC
  cmps(c,1,(int32_t)c->r[5],0); // 802D2CD0
  W32(c->r[3]+0x00000000u,c->r[4]); // 802D2CD4
  if (crb(c,6)) { goto L_802D2D08; } // 802D2CD8
  c->r[0]=R8(c->r[3]+0x000000D9u); // 802D2CDC
  cmps(c,0,(int32_t)c->r[0],1); // 802D2CE0
  if (crb(c,2)) { goto L_802D2CEC; } // 802D2CE4
  goto L_802D2D08; // 802D2CE8
L_802D2CEC:;
  if (crb(c,6)) { goto L_802D2D08; } // 802D2CEC
  c->r[12]=R32(c->r[5]+0x00000000u); // 802D2CF0
  c->r[3]=c->r[5]|c->r[5]; // 802D2CF4
  c->r[4]=0u+0x00000001u; // 802D2CF8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802D2CFC
  c->ctr=c->r[12]; // 802D2D00
  if (true) { c->lr=0x802D2D08u; dispatch(c,c->ctr); } // 802D2D04
L_802D2D08:;
  c->r[3]=c->r[31]|c->r[31]; // 802D2D08
  c->r[4]=0u+0x00000000u; // 802D2D0C
  c->lr=0x802D2D14u; f_802C624C(c); // 802D2D10
L_802D2D14:;
  c->r[3]=c->r[31]|c->r[31]; // 802D2D14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802D2D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D2D1C
  c->lr=c->r[0]; // 802D2D20
  c->r[1]=c->r[1]+0x00000010u; // 802D2D24
  return; // 802D2D28
}

// SetScnObjOption__Q34nw4r3g3d6ScnObjFUlUl
void f_802D2D2C(Ctx* __restrict c) {
  trace_call(0x802D2D2Cu);
  cmpu(c,0,c->r[4],0x00000009u); // 802D2D2C
  if (crb(c,1)) { goto L_802D2EB4; } // 802D2D30
  c->r[6]=0u+0x80480000u; // 802D2D34
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802D2D38
  c->r[6]=c->r[6]+0x00007020u; // 802D2D3C
  c->r[6]=R32(c->r[6]+c->r[0]); // 802D2D40
  c->ctr=c->r[6]; // 802D2D44
  if (true) { switch (c->ctr) { case 0x802D2D4Cu: goto L_802D2D4C; case 0x802D2D74u: goto L_802D2D74; case 0x802D2D9Cu: goto L_802D2D9C; case 0x802D2DC4u: goto L_802D2DC4; case 0x802D2DECu: goto L_802D2DEC; case 0x802D2E14u: goto L_802D2E14; case 0x802D2E3Cu: goto L_802D2E3C; case 0x802D2E64u: goto L_802D2E64; case 0x802D2E8Cu: goto L_802D2E8C; case 0x802D2EB4u: goto L_802D2EB4; default: break; } dispatch(c,c->ctr); return; } // 802D2D48
L_802D2D4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2D4C
  if (crb(c,2)) { goto L_802D2D64; } // 802D2D50
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2D54
  c->r[0]=c->r[0]|0x00000010u; // 802D2D58
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2D5C
  goto L_802D2EBC; // 802D2D60
L_802D2D64:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2D64
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 802D2D68
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2D6C
  goto L_802D2EBC; // 802D2D70
L_802D2D74:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2D74
  if (crb(c,2)) { goto L_802D2D8C; } // 802D2D78
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2D7C
  c->r[0]=c->r[0]|0x00000001u; // 802D2D80
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2D84
  goto L_802D2EBC; // 802D2D88
L_802D2D8C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2D8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802D2D90
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2D94
  goto L_802D2EBC; // 802D2D98
L_802D2D9C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2D9C
  if (crb(c,2)) { goto L_802D2DB4; } // 802D2DA0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2DA4
  c->r[0]=c->r[0]|0x00000002u; // 802D2DA8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2DAC
  goto L_802D2EBC; // 802D2DB0
L_802D2DB4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2DB4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 802D2DB8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2DBC
  goto L_802D2EBC; // 802D2DC0
L_802D2DC4:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2DC4
  if (crb(c,2)) { goto L_802D2DDC; } // 802D2DC8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2DCC
  c->r[0]=c->r[0]|0x00000004u; // 802D2DD0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2DD4
  goto L_802D2EBC; // 802D2DD8
L_802D2DDC:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2DDC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 802D2DE0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2DE4
  goto L_802D2EBC; // 802D2DE8
L_802D2DEC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2DEC
  if (crb(c,2)) { goto L_802D2E04; } // 802D2DF0
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2DF4
  c->r[0]=c->r[0]|0x00000008u; // 802D2DF8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2DFC
  goto L_802D2EBC; // 802D2E00
L_802D2E04:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E04
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 802D2E08
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E0C
  goto L_802D2EBC; // 802D2E10
L_802D2E14:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2E14
  if (crb(c,2)) { goto L_802D2E2C; } // 802D2E18
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E1C
  c->r[0]=c->r[0]|0x00000020u; // 802D2E20
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E24
  goto L_802D2EBC; // 802D2E28
L_802D2E2C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 802D2E30
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E34
  goto L_802D2EBC; // 802D2E38
L_802D2E3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2E3C
  if (crb(c,2)) { goto L_802D2E54; } // 802D2E40
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E44
  c->r[0]=c->r[0]|0x00000040u; // 802D2E48
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E4C
  goto L_802D2EBC; // 802D2E50
L_802D2E54:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E54
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 802D2E58
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E5C
  goto L_802D2EBC; // 802D2E60
L_802D2E64:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2E64
  if (crb(c,2)) { goto L_802D2E7C; } // 802D2E68
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E6C
  c->r[0]=c->r[0]|0x00000080u; // 802D2E70
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E74
  goto L_802D2EBC; // 802D2E78
L_802D2E7C:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 802D2E80
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E84
  goto L_802D2EBC; // 802D2E88
L_802D2E8C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802D2E8C
  if (crb(c,2)) { goto L_802D2EA4; } // 802D2E90
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2E94
  c->r[0]=c->r[0]|0x10000000u; // 802D2E98
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2E9C
  goto L_802D2EBC; // 802D2EA0
L_802D2EA4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2EA4
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 802D2EA8
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2EAC
  goto L_802D2EBC; // 802D2EB0
L_802D2EB4:;
  c->r[3]=0u+0x00000000u; // 802D2EB4
  return; // 802D2EB8
L_802D2EBC:;
  c->r[3]=0u+0x00000001u; // 802D2EBC
  return; // 802D2EC0
}

// GetScnObjOption__Q34nw4r3g3d6ScnObjCFUlPUl
void f_802D2EC4(Ctx* __restrict c) {
  trace_call(0x802D2EC4u);
  cmps(c,0,(int32_t)c->r[5],0); // 802D2EC4
  if (!crb(c,2)) { goto L_802D2ED4; } // 802D2EC8
  c->r[3]=0u+0x00000000u; // 802D2ECC
  return; // 802D2ED0
L_802D2ED4:;
  cmpu(c,0,c->r[4],0x00000009u); // 802D2ED4
  if (crb(c,1)) { goto L_802D2F84; } // 802D2ED8
  c->r[6]=0u+0x80480000u; // 802D2EDC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802D2EE0
  c->r[6]=c->r[6]+0x00007048u; // 802D2EE4
  c->r[6]=R32(c->r[6]+c->r[0]); // 802D2EE8
  c->ctr=c->r[6]; // 802D2EEC
  if (true) { switch (c->ctr) { case 0x802D2EF4u: goto L_802D2EF4; case 0x802D2F04u: goto L_802D2F04; case 0x802D2F14u: goto L_802D2F14; case 0x802D2F24u: goto L_802D2F24; case 0x802D2F34u: goto L_802D2F34; case 0x802D2F44u: goto L_802D2F44; case 0x802D2F54u: goto L_802D2F54; case 0x802D2F64u: goto L_802D2F64; case 0x802D2F74u: goto L_802D2F74; case 0x802D2F84u: goto L_802D2F84; default: break; } dispatch(c,c->ctr); return; } // 802D2EF0
L_802D2EF4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2EF4
  c->r[0]=rotl(c->r[0],28)&0x00000001u; // 802D2EF8
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2EFC
  goto L_802D2F8C; // 802D2F00
L_802D2F04:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802D2F08
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F0C
  goto L_802D2F8C; // 802D2F10
L_802D2F14:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F14
  c->r[0]=rotl(c->r[0],31)&0x00000001u; // 802D2F18
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F1C
  goto L_802D2F8C; // 802D2F20
L_802D2F24:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F24
  c->r[0]=rotl(c->r[0],30)&0x00000001u; // 802D2F28
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F2C
  goto L_802D2F8C; // 802D2F30
L_802D2F34:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F34
  c->r[0]=rotl(c->r[0],29)&0x00000001u; // 802D2F38
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F3C
  goto L_802D2F8C; // 802D2F40
L_802D2F44:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F44
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 802D2F48
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F4C
  goto L_802D2F8C; // 802D2F50
L_802D2F54:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F54
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 802D2F58
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F5C
  goto L_802D2F8C; // 802D2F60
L_802D2F64:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F64
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 802D2F68
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F6C
  goto L_802D2F8C; // 802D2F70
L_802D2F74:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2F74
  c->r[0]=rotl(c->r[0],4)&0x00000001u; // 802D2F78
  W32(c->r[5]+0x00000000u,c->r[0]); // 802D2F7C
  goto L_802D2F8C; // 802D2F80
L_802D2F84:;
  c->r[3]=0u+0x00000000u; // 802D2F84
  return; // 802D2F88
L_802D2F8C:;
  c->r[3]=0u+0x00000001u; // 802D2F8C
  return; // 802D2F90
}

// SetMtx__Q34nw4r3g3d6ScnObjFQ44nw4r3g3d6ScnObj13ScnObjMtxTypePCQ34nw4r4math5MTX34
void f_802D2F94(Ctx* __restrict c) {
  trace_call(0x802D2F94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802D2F94
  c->r[0]=c->lr; // 802D2F98
  cmpu(c,0,c->r[4],0x00000003u); // 802D2F9C
  c->r[6]=c->r[3]|c->r[3]; // 802D2FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802D2FA4
  if (!crb(c,0)) { goto L_802D300C; } // 802D2FA8
  cmps(c,0,(int32_t)c->r[5],0); // 802D2FAC
  if (crb(c,2)) { goto L_802D2FE0; } // 802D2FB0
  cmps(c,0,(int32_t)c->r[4],0); // 802D2FB4
  if (!crb(c,2)) { goto L_802D2FC8; } // 802D2FB8
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2FBC
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 802D2FC0
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2FC4
L_802D2FC8:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802D2FC8
  c->r[3]=c->r[5]|c->r[5]; // 802D2FCC
  c->r[4]=c->r[6]+c->r[0]; // 802D2FD0
  c->r[4]=c->r[4]+0x0000000Cu; // 802D2FD4
  c->lr=0x802D2FDCu; f_803535C0(c); // 802D2FD8
  goto L_802D3004; // 802D2FDC
L_802D2FE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 802D2FE0
  if (!crb(c,2)) { goto L_802D2FF4; } // 802D2FE4
  c->r[0]=R32(c->r[3]+0x000000CCu); // 802D2FE8
  c->r[0]=c->r[0]|0x80000000u; // 802D2FEC
  W32(c->r[3]+0x000000CCu,c->r[0]); // 802D2FF0
L_802D2FF4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)48); // 802D2FF4
  c->r[3]=c->r[3]+c->r[0]; // 802D2FF8
  c->r[3]=c->r[3]+0x0000000Cu; // 802D2FFC
  c->lr=0x802D3004u; f_80353594(c); // 802D3000
L_802D3004:;
  c->r[3]=0u+0x00000001u; // 802D3004
  goto L_802D3010; // 802D3008
L_802D300C:;
  c->r[3]=0u+0x00000000u; // 802D300C
L_802D3010:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802D3010
  c->lr=c->r[0]; // 802D3014
  c->r[1]=c->r[1]+0x00000010u; // 802D3018
  return; // 802D301C
}

