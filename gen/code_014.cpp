#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800CA184
void f_800CA184(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 800CA184
  return; // 800CA188
}

// fn_800CA18C
void f_800CA18C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CA18C
  return; // 800CA190
}

// fn_800CA194
void f_800CA194(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CA194
  c->r[0]=0u-c->r[3]; // 800CA198
  c->r[0]=c->r[0]|c->r[3]; // 800CA19C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA1A0
  return; // 800CA1A4
}

// fn_800CA1A8
void f_800CA1A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CA1A8
  return; // 800CA1AC
}

// fn_800CA1B0
void f_800CA1B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA1B0
  c->r[0]=c->lr; // 800CA1B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA1B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA1BC
  c->r[31]=c->r[3]|c->r[3]; // 800CA1C0
  c->lr=0x800CA1C8u; f_800CA1E0(c); // 800CA1C4
  c->r[3]=c->r[31]|c->r[31]; // 800CA1C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA1CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA1D0
  c->lr=c->r[0]; // 800CA1D4
  c->r[1]=c->r[1]+0x00000010u; // 800CA1D8
  return; // 800CA1DC
}

// fn_800CA1E0
void f_800CA1E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 800CA1E0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CA1E4
  return; // 800CA1E8
}

// fn_800CA1EC
void f_800CA1EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CA1EC
  return; // 800CA1F0
}

// fn_800CA1F4
void f_800CA1F4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000098u); // 800CA1F4
  return; // 800CA1F8
}

// fn_800CA1FC
void f_800CA1FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000009Cu); // 800CA1FC
  return; // 800CA200
}

// fn_800CA204
void f_800CA204(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CA204
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 800CA208
  return; // 800CA20C
}

// fn_800CA210
void f_800CA210(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800CA210
  f_800BB8E4(c); return; // 800CA214
}

// fn_800CA218
void f_800CA218(Ctx* __restrict c) {
  c->r[4]=0u+0x00000002u; // 800CA218
  f_800BB8E4(c); return; // 800CA21C
}

// fn_800CA220
void f_800CA220(Ctx* __restrict c) {
  c->r[4]=0u+0x0000000Fu; // 800CA220
  f_800BB8E4(c); return; // 800CA224
}

// fn_800CA228
void f_800CA228(Ctx* __restrict c) {
  c->r[4]=0u+0x0000000Eu; // 800CA228
  f_800BB8E4(c); return; // 800CA22C
}

// fn_800CA230
void f_800CA230(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800CA230
  cmps(c,0,(int32_t)c->r[3],0); // 800CA234
  if (crb(c,2)) { goto L_800CA244; } // 800CA238
  c->r[3]=R32(c->r[3]+0x00000014u); // 800CA23C
  return; // 800CA240
L_800CA244:;
  c->r[3]=0u+0xFFFFFFFFu; // 800CA244
  return; // 800CA248
}

// dtor_800CA24C
void f_800CA24C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA24C
  c->r[0]=c->lr; // 800CA250
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA258
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CA25C
  c->r[30]=c->r[3]|c->r[3]; // 800CA260
  c->r[31]=c->r[4]|c->r[4]; // 800CA264
  cmps(c,0,(int32_t)c->r[3],0); // 800CA268
  if (crb(c,2)) { goto L_800CA28C; } // 800CA26C
  c->r[4]=0u+0xFFFFFFFFu; // 800CA270
  c->lr=0x800CA278u; f_800BB850(c); // 800CA274
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CA278
  cmps(c,0,(int32_t)c->r[0],0); // 800CA27C
  if (!crb(c,1)) { goto L_800CA28C; } // 800CA280
  c->r[3]=c->r[30]|c->r[30]; // 800CA284
  c->lr=0x800CA28Cu; f_80047B20(c); // 800CA288
L_800CA28C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA28C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA290
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA294
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA298
  c->lr=c->r[0]; // 800CA29C
  c->r[1]=c->r[1]+0x00000010u; // 800CA2A0
  return; // 800CA2A4
}

// fn_800CA2A8
void f_800CA2A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA2A8
  c->r[0]=c->lr; // 800CA2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA2B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA2B4
  c->r[31]=c->r[3]|c->r[3]; // 800CA2B8
  c->r[4]=0u+0x80460000u; // 800CA2BC
  c->r[0]=c->r[4]+0x00000A94u; // 800CA2C0
  W32(c->r[3]+0x000000E0u,c->r[0]); // 800CA2C4
  c->lr=0x800CA2CCu; f_800BB894(c); // 800CA2C8
  c->r[3]=c->r[31]+0x000000A0u; // 800CA2CC
  c->lr=0x800CA2D4u; f_8004B0A4(c); // 800CA2D0
  c->r[3]=c->r[31]+0x000000ACu; // 800CA2D4
  c->lr=0x800CA2DCu; f_8004B0A4(c); // 800CA2D8
  c->r[3]=c->r[31]+0x000000B8u; // 800CA2DC
  c->lr=0x800CA2E4u; f_8004B0A4(c); // 800CA2E0
  c->r[0]=0u+0x00000000u; // 800CA2E4
  W32(c->r[31]+0x00000078u,c->r[0]); // 800CA2E8
  W32(c->r[31]+0x0000007Cu,c->r[0]); // 800CA2EC
  c->r[3]=c->r[31]|c->r[31]; // 800CA2F0
  c->lr=0x800CA2F8u; f_800D8540(c); // 800CA2F4
  c->r[3]=c->r[31]|c->r[31]; // 800CA2F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA2FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA300
  c->lr=c->r[0]; // 800CA304
  c->r[1]=c->r[1]+0x00000010u; // 800CA308
  return; // 800CA30C
}

// fn_800CA310
void f_800CA310(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 800CA310
  return; // 800CA314
}

// fn_800CA318
void f_800CA318(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B4u; // 800CA318
  c->r[5]=0u+0x00000003u; // 800CA31C
  f_800D148C(c); return; // 800CA320
}

// fn_800CA324
void f_800CA324(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000054u; // 800CA324
  c->r[5]=0u+0x00000003u; // 800CA328
  f_800D148C(c); return; // 800CA32C
}

// fn_800CA330
void f_800CA330(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CA330
  return; // 800CA334
}

// fn_800CA338
void f_800CA338(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA338
  c->r[0]=c->lr; // 800CA33C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA340
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CA344
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CA348
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CA34C
  c->r[29]=c->r[3]|c->r[3]; // 800CA350
  c->r[0]=R32(c->r[3]+0x000006B0u); // 800CA354
  cmps(c,0,(int32_t)c->r[0],0); // 800CA358
  if (crb(c,2)) { goto L_800CA398; } // 800CA35C
  c->r[4]=c->r[3]+0x00000424u; // 800CA360
  c->lr=0x800CA368u; f_800BB148(c); // 800CA364
  c->r[0]=0u+0x00000000u; // 800CA368
  W32(c->r[29]+0x000006B0u,c->r[0]); // 800CA36C
  c->r[30]=0u+0x00000000u; // 800CA370
  c->r[31]=c->r[29]+0x00000054u; // 800CA374
L_800CA378:;
  c->r[3]=c->r[31]|c->r[31]; // 800CA378
  c->r[4]=R32(c->r[29]+0x0000068Cu); // 800CA37C
  c->lr=0x800CA384u; f_800CA3B4(c); // 800CA380
  c->r[29]=c->r[29]+0x00000004u; // 800CA384
  c->r[31]=c->r[31]+0x00000060u; // 800CA388
  c->r[30]=c->r[30]+0x00000001u; // 800CA38C
  cmpu(c,0,c->r[30],0x00000009u); // 800CA390
  if (crb(c,0)) { IRQCHK(c); goto L_800CA378; } // 800CA394
L_800CA398:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CA398
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CA39C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CA3A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA3A4
  c->lr=c->r[0]; // 800CA3A8
  c->r[1]=c->r[1]+0x00000020u; // 800CA3AC
  return; // 800CA3B0
}

// fn_800CA3B4
void f_800CA3B4(Ctx* __restrict c) {
  W32(c->r[3]+0x00000058u,c->r[4]); // 800CA3B4
  return; // 800CA3B8
}

// fn_800CA3BC
void f_800CA3BC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000006B0u); // 800CA3BC
  c->r[0]=0u-c->r[3]; // 800CA3C0
  c->r[0]=c->r[0]|c->r[3]; // 800CA3C4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA3C8
  return; // 800CA3CC
}

// fn_800CA3D0
void f_800CA3D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA3D0
  c->r[0]=c->lr; // 800CA3D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA3D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA3DC
  c->r[31]=c->r[3]|c->r[3]; // 800CA3E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CA3E4
  if (crb(c,2)) { goto L_800CA3FC; } // 800CA3E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800CA3EC
  cmps(c,0,(int32_t)c->r[0],0); // 800CA3F0
  if (!crb(c,1)) { goto L_800CA3FC; } // 800CA3F4
  c->lr=0x800CA3FCu; f_80047B20(c); // 800CA3F8
L_800CA3FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800CA3FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA400
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA404
  c->lr=c->r[0]; // 800CA408
  c->r[1]=c->r[1]+0x00000010u; // 800CA40C
  return; // 800CA410
}

// fn_800CA414
void f_800CA414(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA414
  c->r[0]=c->lr; // 800CA418
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA41C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA420
  c->r[31]=c->r[3]|c->r[3]; // 800CA424
  c->r[4]=0u+0x80460000u; // 800CA428
  c->r[0]=c->r[4]+0x00001100u; // 800CA42C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800CA430
  c->lr=0x800CA438u; f_800D0E90(c); // 800CA434
  c->r[3]=c->r[31]|c->r[31]; // 800CA438
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA43C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA440
  c->lr=c->r[0]; // 800CA444
  c->r[1]=c->r[1]+0x00000010u; // 800CA448
  return; // 800CA44C
}

// fn_800CA450
void f_800CA450(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800CA450
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800CA454
  cmps(c,0,(int32_t)c->r[0],0); // 800CA458
  if (crb(c,2)) { goto L_800CA464; } // 800CA45C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA460
L_800CA464:;
  c->r[3]=c->r[3]+0x00000294u; // 800CA464
  f_800D13D4(c); return; // 800CA468
}

// fn_800CA46C
void f_800CA46C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA46C
  c->r[0]=c->lr; // 800CA470
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA474
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800CA478
  c->r[3]=c->r[3]+0x00000294u; // 800CA47C
  c->r[4]=c->r[1]+0x00000008u; // 800CA480
  c->r[5]=0u+0x00000001u; // 800CA484
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CA488
  c->lr=0x800CA490u; f_800D0F54(c); // 800CA48C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA490
  c->lr=c->r[0]; // 800CA494
  c->r[1]=c->r[1]+0x00000010u; // 800CA498
  return; // 800CA49C
}

// fn_800CA4A0
void f_800CA4A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000294u; // 800CA4A0
  f_800D0F18(c); return; // 800CA4A4
}

// fn_800CA4A8
void f_800CA4A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CA4A8
  f_800488DC(c); return; // 800CA4AC
}

// fn_800CA4B0
void f_800CA4B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CA4B0
  f_8005EEA0(c); return; // 800CA4B4
}

// fn_800CA4B8
void f_800CA4B8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B4u; // 800CA4B8
  f_800CA3B4(c); return; // 800CA4BC
}

// fn_800CA4C0
void f_800CA4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA4C0
  c->r[0]=c->lr; // 800CA4C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA4C8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800CA4CC
  c->r[3]=c->r[3]+0x00000294u; // 800CA4D0
  c->r[4]=c->r[1]+0x00000008u; // 800CA4D4
  c->r[5]=0u+0x00000001u; // 800CA4D8
  c->r[6]=0u+0x00000001u; // 800CA4DC
  c->lr=0x800CA4E4u; f_800D141C(c); // 800CA4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA4E4
  c->lr=c->r[0]; // 800CA4E8
  c->r[1]=c->r[1]+0x00000010u; // 800CA4EC
  return; // 800CA4F0
}

// fn_800CA4F4
void f_800CA4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA4F4
  c->r[0]=c->lr; // 800CA4F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CA4FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CA500
  c->r[31]=c->r[3]|c->r[3]; // 800CA504
  c->r[3]=c->r[1]+0x00000014u; // 800CA508
  c->lr=0x800CA510u; f_8004B0A4(c); // 800CA50C
  c->r[3]=c->r[1]+0x00000008u; // 800CA510
  c->lr=0x800CA518u; f_8004B0A4(c); // 800CA514
  c->r[3]=c->r[31]|c->r[31]; // 800CA518
  c->r[4]=c->r[1]+0x00000014u; // 800CA51C
  c->lr=0x800CA524u; f_800CA318(c); // 800CA520
  c->r[3]=c->r[31]|c->r[31]; // 800CA524
  c->r[4]=c->r[1]+0x00000008u; // 800CA528
  c->lr=0x800CA530u; f_800CA58C(c); // 800CA52C
  c->r[3]=c->r[31]|c->r[31]; // 800CA530
  c->lr=0x800CA538u; f_800BB564(c); // 800CA534
  c->r[3]=c->r[31]|c->r[31]; // 800CA538
  c->lr=0x800CA540u; f_800BB5A8(c); // 800CA53C
  c->r[3]=c->r[1]+0x00000014u; // 800CA540
  c->r[4]=c->r[3]|c->r[3]; // 800CA544
  c->r[5]=c->r[1]+0x00000008u; // 800CA548
  c->lr=0x800CA550u; f_8005C194(c); // 800CA54C
  c->r[3]=c->r[31]|c->r[31]; // 800CA550
  c->r[4]=c->r[1]+0x00000014u; // 800CA554
  c->lr=0x800CA55Cu; f_800BB528(c); // 800CA558
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CA55C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800CA560
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CA564
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800CA568
  c->r[3]=c->r[31]|c->r[31]; // 800CA56C
  c->r[4]=c->r[1]+0x00000008u; // 800CA570
  c->lr=0x800CA578u; f_800BB56C(c); // 800CA574
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CA578
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CA57C
  c->lr=c->r[0]; // 800CA580
  c->r[1]=c->r[1]+0x00000030u; // 800CA584
  return; // 800CA588
}

// fn_800CA58C
void f_800CA58C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000114u; // 800CA58C
  c->r[5]=0u+0x00000003u; // 800CA590
  f_800D148C(c); return; // 800CA594
}

// fn_800CA598
void f_800CA598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA598
  c->r[0]=c->lr; // 800CA59C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CA5A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CA5A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CA5A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CA5AC
  c->r[29]=c->r[3]|c->r[3]; // 800CA5B0
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CA5B4
  c->lr=0x800CA5BCu; f_8004B264(c); // 800CA5B8
  c->r[0]=rotl(c->r[3],0)&0x00000040u; // 800CA5BC
  cmps(c,0,(int32_t)c->r[0],0); // 800CA5C0
  if (crb(c,2)) { goto L_800CA604; } // 800CA5C4
  c->r[3]=c->r[29]|c->r[29]; // 800CA5C8
  c->r[4]=c->r[29]+0x00000424u; // 800CA5CC
  c->lr=0x800CA5D4u; f_800BB1D0(c); // 800CA5D0
  c->r[0]=0u+0x00000001u; // 800CA5D4
  W32(c->r[29]+0x000006B0u,c->r[0]); // 800CA5D8
  c->r[30]=0u+0x00000000u; // 800CA5DC
  c->r[31]=c->r[29]+0x00000054u; // 800CA5E0
L_800CA5E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800CA5E4
  c->lr=0x800CA5ECu; f_800CA620(c); // 800CA5E8
  W32(c->r[29]+0x0000068Cu,c->r[3]); // 800CA5EC
  c->r[31]=c->r[31]+0x00000060u; // 800CA5F0
  c->r[29]=c->r[29]+0x00000004u; // 800CA5F4
  c->r[30]=c->r[30]+0x00000001u; // 800CA5F8
  cmpu(c,0,c->r[30],0x00000009u); // 800CA5FC
  if (crb(c,0)) { IRQCHK(c); goto L_800CA5E4; } // 800CA600
L_800CA604:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CA604
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CA608
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CA60C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CA610
  c->lr=c->r[0]; // 800CA614
  c->r[1]=c->r[1]+0x00000020u; // 800CA618
  return; // 800CA61C
}

// fn_800CA620
void f_800CA620(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000058u); // 800CA620
  return; // 800CA624
}

// fn_800CA628
void f_800CA628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA628
  c->r[0]=c->lr; // 800CA62C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA630
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800CA634
  c->r[3]=c->r[3]+0x000002F4u; // 800CA638
  c->r[4]=c->r[1]+0x00000008u; // 800CA63C
  c->r[5]=0u+0x00000001u; // 800CA640
  c->r[6]=0u+0x00000001u; // 800CA644
  c->lr=0x800CA64Cu; f_800D141C(c); // 800CA648
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA64C
  c->lr=c->r[0]; // 800CA650
  c->r[1]=c->r[1]+0x00000010u; // 800CA654
  return; // 800CA658
}

// dtor_800CA65C
void f_800CA65C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA65C
  c->r[0]=c->lr; // 800CA660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA668
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CA66C
  c->r[30]=c->r[3]|c->r[3]; // 800CA670
  c->r[31]=c->r[4]|c->r[4]; // 800CA674
  cmps(c,0,(int32_t)c->r[3],0); // 800CA678
  if (crb(c,2)) { goto L_800CA69C; } // 800CA67C
  c->r[4]=0u+0x00000000u; // 800CA680
  c->lr=0x800CA688u; f_800C1D48(c); // 800CA684
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CA688
  cmps(c,0,(int32_t)c->r[0],0); // 800CA68C
  if (!crb(c,1)) { goto L_800CA69C; } // 800CA690
  c->r[3]=c->r[30]|c->r[30]; // 800CA694
  c->lr=0x800CA69Cu; f_80047B20(c); // 800CA698
L_800CA69C:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA69C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA6A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA6A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA6A8
  c->lr=c->r[0]; // 800CA6AC
  c->r[1]=c->r[1]+0x00000010u; // 800CA6B0
  return; // 800CA6B4
}

// fn_800CA6B8
void f_800CA6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA6B8
  c->r[0]=c->lr; // 800CA6BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA6C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA6C4
  c->r[31]=c->r[3]|c->r[3]; // 800CA6C8
  c->lr=0x800CA6D0u; f_800C1D0C(c); // 800CA6CC
  c->r[3]=0u+0x80460000u; // 800CA6D0
  c->r[0]=c->r[3]+0x00001090u; // 800CA6D4
  W32(c->r[31]+0x00000024u,c->r[0]); // 800CA6D8
  c->r[3]=c->r[31]|c->r[31]; // 800CA6DC
  c->lr=0x800CA6E4u; f_800D2F6C(c); // 800CA6E0
  c->r[3]=c->r[31]|c->r[31]; // 800CA6E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA6EC
  c->lr=c->r[0]; // 800CA6F0
  c->r[1]=c->r[1]+0x00000010u; // 800CA6F4
  return; // 800CA6F8
}

// fn_800CA6FC
void f_800CA6FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA6FC
  c->r[3]=rotl(c->r[0],0)&0x04000000u; // 800CA700
  c->r[0]=0u-c->r[3]; // 800CA704
  c->r[0]=c->r[0]|c->r[3]; // 800CA708
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA70C
  return; // 800CA710
}

// fn_800CA714
void f_800CA714(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA714
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF80u; // 800CA718
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CA71C
  return; // 800CA720
}

// fn_800CA724
void f_800CA724(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA724
  c->r[3]=rotl(c->r[0],0)&0x00000040u; // 800CA728
  c->r[0]=0u-c->r[3]; // 800CA72C
  c->r[0]=c->r[0]|c->r[3]; // 800CA730
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA734
  return; // 800CA738
}

// fn_800CA73C
void f_800CA73C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000002ECu); // 800CA73C
  return; // 800CA740
}

// fn_800CA744
void f_800CA744(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA744
  c->r[3]=rotl(c->r[0],0)&0x00000008u; // 800CA748
  c->r[0]=0u-c->r[3]; // 800CA74C
  c->r[0]=c->r[0]|c->r[3]; // 800CA750
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA754
  return; // 800CA758
}

// fn_800CA75C
void f_800CA75C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA75C
  c->r[3]=rotl(c->r[0],0)&0x00000004u; // 800CA760
  c->r[0]=0u-c->r[3]; // 800CA764
  c->r[0]=c->r[0]|c->r[3]; // 800CA768
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA76C
  return; // 800CA770
}

// fn_800CA774
void f_800CA774(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA774
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 800CA778
  c->r[0]=0u-c->r[3]; // 800CA77C
  c->r[0]=c->r[0]|c->r[3]; // 800CA780
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA784
  return; // 800CA788
}

// fn_800CA78C
void f_800CA78C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA78C
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800CA790
  c->r[0]=0u-c->r[3]; // 800CA794
  c->r[0]=c->r[0]|c->r[3]; // 800CA798
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA79C
  return; // 800CA7A0
}

// fn_800CA7A4
void f_800CA7A4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CA7A4
  c->r[3]=rotl(c->r[0],0)&0x00002000u; // 800CA7A8
  c->r[0]=0u-c->r[3]; // 800CA7AC
  c->r[0]=c->r[0]|c->r[3]; // 800CA7B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA7B4
  return; // 800CA7B8
}

// fn_800CA7BC
void f_800CA7BC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CA7BC
  c->r[3]=rotl(c->r[0],0)&0x40000000u; // 800CA7C0
  c->r[0]=0u-c->r[3]; // 800CA7C4
  c->r[0]=c->r[0]|c->r[3]; // 800CA7C8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA7CC
  return; // 800CA7D0
}

// fn_800CA7D4
void f_800CA7D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000005Cu; // 800CA7D4
  return; // 800CA7D8
}

// fn_800CA7DC
void f_800CA7DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CA7DC
  c->r[3]=rotl(c->r[0],0)&0x00200000u; // 800CA7E0
  c->r[0]=0u-c->r[3]; // 800CA7E4
  c->r[0]=c->r[0]|c->r[3]; // 800CA7E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA7EC
  return; // 800CA7F0
}

// fn_800CA7F4
void f_800CA7F4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000007Cu; // 800CA7F4
  return; // 800CA7F8
}

// fn_800CA7FC
void f_800CA7FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CA7FC
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800CA800
  c->r[0]=0u-c->r[3]; // 800CA804
  c->r[0]=c->r[0]|c->r[3]; // 800CA808
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA80C
  return; // 800CA810
}

// fn_800CA814
void f_800CA814(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CA814
  c->r[3]=rotl(c->r[0],0)&0x00010000u; // 800CA818
  c->r[0]=0u-c->r[3]; // 800CA81C
  c->r[0]=c->r[0]|c->r[3]; // 800CA820
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA824
  return; // 800CA828
}

// fn_800CA82C
void f_800CA82C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CA82C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CA830
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CA834
  return; // 800CA838
}

// fn_800CA83C
void f_800CA83C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA83C
  c->r[3]=rotl(c->r[0],0)&0x08000000u; // 800CA840
  c->r[0]=0u-c->r[3]; // 800CA844
  c->r[0]=c->r[0]|c->r[3]; // 800CA848
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CA84C
  return; // 800CA850
}

// fn_800CA854
void f_800CA854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA854
  c->r[0]=c->lr; // 800CA858
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA85C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA860
  c->r[31]=c->r[3]|c->r[3]; // 800CA864
  c->r[3]=c->r[3]+0x00000004u; // 800CA868
  c->lr=0x800CA870u; f_8004B0A4(c); // 800CA86C
  c->r[3]=c->r[31]|c->r[31]; // 800CA870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA874
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA878
  c->lr=c->r[0]; // 800CA87C
  c->r[1]=c->r[1]+0x00000010u; // 800CA880
  return; // 800CA884
}

// fn_800CA888
void f_800CA888(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA888
  c->r[0]=c->r[0]|0x00200000u; // 800CA88C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CA890
  return; // 800CA894
}

// fn_800CA898
void f_800CA898(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000280u); // 800CA898
  W32(c->r[3]+0x00000284u,c->r[0]); // 800CA89C
  W32(c->r[3]+0x00000280u,c->r[4]); // 800CA8A0
  return; // 800CA8A4
}

// fn_800CA8A8
void f_800CA8A8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA8A8
  c->r[0]=c->r[0]|0x00000080u; // 800CA8AC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CA8B0
  return; // 800CA8B4
}

// fn_800CA8B8
void f_800CA8B8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CA8B8
  c->r[0]=rotl(c->r[0],0)&0xFFDFFFFFu; // 800CA8BC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CA8C0
  return; // 800CA8C4
}

// fn_800CA8C8
void f_800CA8C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000274u); // 800CA8C8
  return; // 800CA8CC
}

// dtor_800CA8D0
void f_800CA8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA8D0
  c->r[0]=c->lr; // 800CA8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA8DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CA8E0
  c->r[30]=c->r[3]|c->r[3]; // 800CA8E4
  c->r[31]=c->r[4]|c->r[4]; // 800CA8E8
  cmps(c,0,(int32_t)c->r[3],0); // 800CA8EC
  if (crb(c,2)) { goto L_800CA920; } // 800CA8F0
  c->r[3]=c->r[3]+0x0000002Cu; // 800CA8F4
  c->r[4]=0u+0xFFFFFFFFu; // 800CA8F8
  c->lr=0x800CA900u; f_800BB850(c); // 800CA8FC
  c->r[3]=c->r[30]|c->r[30]; // 800CA900
  c->r[4]=0u+0x00000000u; // 800CA904
  c->lr=0x800CA90Cu; f_800BFD8C(c); // 800CA908
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CA90C
  cmps(c,0,(int32_t)c->r[0],0); // 800CA910
  if (!crb(c,1)) { goto L_800CA920; } // 800CA914
  c->r[3]=c->r[30]|c->r[30]; // 800CA918
  c->lr=0x800CA920u; f_80047B20(c); // 800CA91C
L_800CA920:;
  c->r[3]=c->r[30]|c->r[30]; // 800CA920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA924
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CA928
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA92C
  c->lr=c->r[0]; // 800CA930
  c->r[1]=c->r[1]+0x00000010u; // 800CA934
  return; // 800CA938
}

// fn_800CA93C
void f_800CA93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA93C
  c->r[0]=c->lr; // 800CA940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA948
  c->r[31]=c->r[3]|c->r[3]; // 800CA94C
  c->lr=0x800CA954u; f_800BFD50(c); // 800CA950
  c->r[3]=0u+0x80460000u; // 800CA954
  c->r[0]=c->r[3]+0x00000D9Cu; // 800CA958
  W32(c->r[31]+0x00000024u,c->r[0]); // 800CA95C
  c->r[3]=c->r[31]+0x0000002Cu; // 800CA960
  c->lr=0x800CA968u; f_800BB894(c); // 800CA964
  c->r[3]=c->r[31]+0x00000250u; // 800CA968
  c->lr=0x800CA970u; f_800CA990(c); // 800CA96C
  c->r[3]=c->r[31]|c->r[31]; // 800CA970
  c->lr=0x800CA978u; f_800CD5B0(c); // 800CA974
  c->r[3]=c->r[31]|c->r[31]; // 800CA978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA97C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA980
  c->lr=c->r[0]; // 800CA984
  c->r[1]=c->r[1]+0x00000010u; // 800CA988
  return; // 800CA98C
}

// fn_800CA990
void f_800CA990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA990
  c->r[0]=c->lr; // 800CA994
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA99C
  c->r[31]=c->r[3]|c->r[3]; // 800CA9A0
  c->r[3]=c->r[3]+0x00000004u; // 800CA9A4
  c->lr=0x800CA9ACu; f_8004B0A4(c); // 800CA9A8
  c->r[3]=c->r[31]+0x00000010u; // 800CA9AC
  c->lr=0x800CA9B4u; f_8004B0A4(c); // 800CA9B0
  c->r[3]=c->r[31]|c->r[31]; // 800CA9B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CA9B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CA9BC
  c->lr=c->r[0]; // 800CA9C0
  c->r[1]=c->r[1]+0x00000010u; // 800CA9C4
  return; // 800CA9C8
}

// fn_800CA9CC
void f_800CA9CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CA9CC
  c->r[0]=c->lr; // 800CA9D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CA9D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CA9D8
  c->r[31]=c->r[3]|c->r[3]; // 800CA9DC
  c->lr=0x800CA9E4u; f_800BC8A8(c); // 800CA9E0
  c->r[3]=0u+0x80460000u; // 800CA9E4
  c->r[0]=c->r[3]+0x00000EA4u; // 800CA9E8
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CA9EC
  c->r[3]=c->r[31]+0x000000D8u; // 800CA9F0
  c->lr=0x800CA9F8u; f_8004B0A4(c); // 800CA9F4
  c->r[3]=c->r[31]+0x000000E4u; // 800CA9F8
  c->lr=0x800CAA00u; f_8004B0A4(c); // 800CA9FC
  c->r[3]=c->r[31]+0x000000F0u; // 800CAA00
  c->lr=0x800CAA08u; f_8004B0A4(c); // 800CAA04
  c->r[3]=c->r[31]+0x000000FCu; // 800CAA08
  c->lr=0x800CAA10u; f_8004B0A4(c); // 800CAA0C
  c->r[3]=c->r[31]+0x00000108u; // 800CAA10
  c->lr=0x800CAA18u; f_8004B0A0(c); // 800CAA14
  c->r[3]=c->r[31]|c->r[31]; // 800CAA18
  c->lr=0x800CAA20u; f_800BDD88(c); // 800CAA1C
  c->r[3]=c->r[31]|c->r[31]; // 800CAA20
  c->lr=0x800CAA28u; f_800CAC44(c); // 800CAA24
  c->r[3]=c->r[31]|c->r[31]; // 800CAA28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAA2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAA30
  c->lr=c->r[0]; // 800CAA34
  c->r[1]=c->r[1]+0x00000010u; // 800CAA38
  return; // 800CAA3C
}

// fn_800CAA40
void f_800CAA40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAA40
  c->r[0]=c->lr; // 800CAA44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAA48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAA4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CAA50
  c->r[30]=c->r[3]|c->r[3]; // 800CAA54
  c->r[31]=c->r[4]|c->r[4]; // 800CAA58
  cmps(c,0,(int32_t)c->r[3],0); // 800CAA5C
  if (crb(c,2)) { goto L_800CAA94; } // 800CAA60
  c->r[4]=0u+0x80460000u; // 800CAA64
  c->r[0]=c->r[4]+0x00000EA4u; // 800CAA68
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CAA6C
  c->lr=0x800CAA74u; f_800CABB4(c); // 800CAA70
  c->r[3]=c->r[30]|c->r[30]; // 800CAA74
  c->r[4]=0u+0x00000000u; // 800CAA78
  c->lr=0x800CAA80u; f_800BC914(c); // 800CAA7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CAA80
  cmps(c,0,(int32_t)c->r[0],0); // 800CAA84
  if (!crb(c,1)) { goto L_800CAA94; } // 800CAA88
  c->r[3]=c->r[30]|c->r[30]; // 800CAA8C
  c->lr=0x800CAA94u; f_80047B20(c); // 800CAA90
L_800CAA94:;
  c->r[3]=c->r[30]|c->r[30]; // 800CAA94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAA98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CAA9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAAA0
  c->lr=c->r[0]; // 800CAAA4
  c->r[1]=c->r[1]+0x00000010u; // 800CAAA8
  return; // 800CAAAC
}

// fn_800CAAB0
void f_800CAAB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAAB0
  c->r[0]=c->lr; // 800CAAB4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CAAB8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CAABC
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CAAC0
  W32(c->r[1]+0x00000044u,c->r[29]); // 800CAAC4
  c->r[29]=c->r[3]|c->r[3]; // 800CAAC8
  c->r[30]=c->r[4]|c->r[4]; // 800CAACC
  c->lr=0x800CAAD4u; f_800BCADC(c); // 800CAAD0
  c->r[0]=R32(c->r[29]+0x000000D4u); // 800CAAD4
  cmps(c,0,(int32_t)c->r[0],0); // 800CAAD8
  if (!crb(c,2)) { goto L_800CAB98; } // 800CAADC
  c->lr=0x800CAAE4u; f_800A23BC(c); // 800CAAE0
  c->lr=0x800CAAE8u; f_800BB808(c); // 800CAAE4
  c->lr=0x800CAAECu; f_800CB110(c); // 800CAAE8
  c->r[31]=c->r[3]|c->r[3]; // 800CAAEC
  c->lr=0x800CAAF4u; f_8006E5AC(c); // 800CAAF0
  c->r[0]=0u+0x00000000u; // 800CAAF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CAAF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800CAAFC
  c->r[4]=c->r[30]|c->r[30]; // 800CAB00
  c->r[5]=c->r[31]|c->r[31]; // 800CAB04
  c->r[6]=0u+0x00000000u; // 800CAB08
  c->r[7]=0u+0x00000000u; // 800CAB0C
  c->r[8]=0u+0x00000000u; // 800CAB10
  c->r[9]=0u+0x00000000u; // 800CAB14
  c->r[10]=0u+0x00000000u; // 800CAB18
  c->lr=0x800CAB20u; f_8010A974(c); // 800CAB1C
  W32(c->r[29]+0x000000D4u,c->r[3]); // 800CAB20
  c->r[4]=0u+0x00000001u; // 800CAB24
  c->lr=0x800CAB2Cu; f_8010B2AC(c); // 800CAB28
  c->r[3]=R32(c->r[29]+0x000000D4u); // 800CAB2C
  c->r[4]=0u+0x00000000u; // 800CAB30
  c->lr=0x800CAB38u; f_800ABE74(c); // 800CAB34
  c->r[3]=c->r[1]+0x00000028u; // 800CAB38
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB3C
  c->f[2]=c->f[1]; // 800CAB40
  c->f[3]=c->f[1]; // 800CAB44
  c->lr=0x800CAB4Cu; f_8004E34C(c); // 800CAB48
  c->r[3]=c->r[1]+0x0000001Cu; // 800CAB4C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB50
  c->f[2]=c->f[1]; // 800CAB54
  c->f[3]=c->f[1]; // 800CAB58
  c->lr=0x800CAB60u; f_8004E34C(c); // 800CAB5C
  c->r[3]=c->r[1]+0x00000010u; // 800CAB60
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAB64
  c->f[2]=c->f[1]; // 800CAB68
  c->f[3]=c->f[1]; // 800CAB6C
  c->lr=0x800CAB74u; f_8004E34C(c); // 800CAB70
  c->r[3]=c->r[29]|c->r[29]; // 800CAB74
  c->r[4]=c->r[1]+0x00000028u; // 800CAB78
  c->lr=0x800CAB80u; f_800BCDE8(c); // 800CAB7C
  c->r[3]=c->r[29]|c->r[29]; // 800CAB80
  c->r[4]=c->r[1]+0x0000001Cu; // 800CAB84
  c->lr=0x800CAB8Cu; f_800BD0E8(c); // 800CAB88
  c->r[3]=c->r[29]|c->r[29]; // 800CAB8C
  c->r[4]=c->r[1]+0x00000010u; // 800CAB90
  c->lr=0x800CAB98u; f_800BD4A8(c); // 800CAB94
L_800CAB98:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CAB98
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CAB9C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800CABA0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CABA4
  c->lr=c->r[0]; // 800CABA8
  c->r[1]=c->r[1]+0x00000050u; // 800CABAC
  return; // 800CABB0
}

// fn_800CABB4
void f_800CABB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CABB4
  c->r[0]=c->lr; // 800CABB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CABBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CABC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CABC4
  c->r[30]=c->r[3]|c->r[3]; // 800CABC8
  c->r[31]=R32(c->r[3]+0x000000D4u); // 800CABCC
  cmps(c,0,(int32_t)c->r[31],0); // 800CABD0
  if (crb(c,2)) { goto L_800CABF8; } // 800CABD4
  c->lr=0x800CABDCu; f_8006E5AC(c); // 800CABD8
  c->r[4]=c->r[31]|c->r[31]; // 800CABDC
  c->r[5]=0u+0x00000001u; // 800CABE0
  c->lr=0x800CABE8u; f_8010AB10(c); // 800CABE4
  c->r[3]=c->r[30]|c->r[30]; // 800CABE8
  c->lr=0x800CABF0u; f_800BCAE0(c); // 800CABEC
  c->r[0]=0u+0x00000000u; // 800CABF0
  W32(c->r[30]+0x000000D4u,c->r[0]); // 800CABF4
L_800CABF8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CABF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CABFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAC00
  c->lr=c->r[0]; // 800CAC04
  c->r[1]=c->r[1]+0x00000010u; // 800CAC08
  return; // 800CAC0C
}

// fn_800CAC10
void f_800CAC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAC10
  c->r[0]=c->lr; // 800CAC14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAC18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAC1C
  c->r[31]=c->r[3]|c->r[3]; // 800CAC20
  c->lr=0x800CAC28u; f_800BD7E8(c); // 800CAC24
  c->r[3]=R32(c->r[31]+0x000000D4u); // 800CAC28
  c->lr=0x800CAC30u; f_800F273C(c); // 800CAC2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAC30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAC34
  c->lr=c->r[0]; // 800CAC38
  c->r[1]=c->r[1]+0x00000010u; // 800CAC3C
  return; // 800CAC40
}

// fn_800CAC44
void f_800CAC44(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CAC44
  W32(c->r[3]+0x000000D4u,c->r[0]); // 800CAC48
  f_800BC98C(c); return; // 800CAC4C
}

// fn_800CAC50
void f_800CAC50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAC50
  c->r[0]=c->lr; // 800CAC54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAC58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAC5C
  c->r[31]=c->r[3]|c->r[3]; // 800CAC60
  c->lr=0x800CAC68u; f_800CABB4(c); // 800CAC64
  c->r[3]=c->r[31]|c->r[31]; // 800CAC68
  c->lr=0x800CAC70u; f_800BCA78(c); // 800CAC6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAC70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAC74
  c->lr=c->r[0]; // 800CAC78
  c->r[1]=c->r[1]+0x00000010u; // 800CAC7C
  return; // 800CAC80
}

// fn_800CAC84
void f_800CAC84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAC84
  c->r[0]=c->lr; // 800CAC88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAC8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAC90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CAC94
  c->r[30]=c->r[3]|c->r[3]; // 800CAC98
  c->r[31]=c->r[4]|c->r[4]; // 800CAC9C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CACA0
  c->lr=0x800CACA8u; f_800F27F8(c); // 800CACA4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CACA8
  c->r[4]=c->r[31]|c->r[31]; // 800CACAC
  c->lr=0x800CACB4u; f_800F28BC(c); // 800CACB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CACB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CACB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CACBC
  c->lr=c->r[0]; // 800CACC0
  c->r[1]=c->r[1]+0x00000010u; // 800CACC4
  return; // 800CACC8
}

// fn_800CACCC
void f_800CACCC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CACCC
  f_800CB060(c); return; // 800CACD0
}

// fn_800CACD4
void f_800CACD4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CACD4
  f_8009CC68(c); return; // 800CACD8
}

// fn_800CACDC
void f_800CACDC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CACDC
  f_800CB09C(c); return; // 800CACE0
}

// fn_800CACE4
void f_800CACE4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CACE4
  f_8006E5B4(c); return; // 800CACE8
}

// fn_800CACEC
void f_800CACEC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CACEC
  f_8009CC60(c); return; // 800CACF0
}

// fn_800CACF4
void f_800CACF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CACF4
  c->r[0]=c->lr; // 800CACF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CACFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAD00
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CAD04
  c->r[30]=c->r[3]|c->r[3]; // 800CAD08
  c->r[31]=c->r[4]|c->r[4]; // 800CAD0C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CAD10
  c->lr=0x800CAD18u; f_800ABE5C(c); // 800CAD14
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CAD18
  c->r[4]=c->r[31]|c->r[31]; // 800CAD1C
  c->lr=0x800CAD24u; f_800ABE6C(c); // 800CAD20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAD24
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CAD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAD2C
  c->lr=c->r[0]; // 800CAD30
  c->r[1]=c->r[1]+0x00000010u; // 800CAD34
  return; // 800CAD38
}

// fn_800CAD3C
void f_800CAD3C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CAD3C
  f_800F292C(c); return; // 800CAD40
}

// fn_800CAD44
void f_800CAD44(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CAD44
  f_800ABE74(c); return; // 800CAD48
}

// fn_800CAD4C
void f_800CAD4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAD4C
  c->r[0]=c->lr; // 800CAD50
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAD54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CAD58
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CAD5C
  c->r[30]=c->r[3]|c->r[3]; // 800CAD60
  c->r[31]=c->r[4]|c->r[4]; // 800CAD64
  c->r[3]=c->r[1]+0x00000008u; // 800CAD68
  c->lr=0x800CAD70u; f_8004B0A4(c); // 800CAD6C
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CAD70
  c->lr=0x800CAD78u; f_800CB0E8(c); // 800CAD74
  cmps(c,0,(int32_t)c->r[3],0); // 800CAD78
  if (!crb(c,2)) { goto L_800CADC0; } // 800CAD7C
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CAD80
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAD84
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800CAD88
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800CAD8C
  c->lr=0x800CAD94u; f_80070424(c); // 800CAD90
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CAD94
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CAD98
  c->f[2]=c->f[1]; // 800CAD9C
  c->f[3]=c->f[1]; // 800CADA0
  c->lr=0x800CADA8u; f_800CB0D8(c); // 800CADA4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CADA8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CADAC
  c->f[2]=c->f[1]; // 800CADB0
  c->f[3]=c->f[1]; // 800CADB4
  c->lr=0x800CADBCu; f_80070434(c); // 800CADB8
  goto L_800CADE4; // 800CADBC
L_800CADC0:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CADC0
  c->r[4]=c->r[1]+0x00000008u; // 800CADC4
  c->lr=0x800CADCCu; f_800CB09C(c); // 800CADC8
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CADCC
  c->r[4]=c->r[1]+0x00000008u; // 800CADD0
  c->lr=0x800CADD8u; f_800ABE6C(c); // 800CADD4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 800CADD8
  c->r[4]=c->r[31]|c->r[31]; // 800CADDC
  c->lr=0x800CADE4u; f_800ABE64(c); // 800CADE0
L_800CADE4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CADE4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CADE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CADEC
  c->lr=c->r[0]; // 800CADF0
  c->r[1]=c->r[1]+0x00000020u; // 800CADF4
  return; // 800CADF8
}

// fn_800CADFC
void f_800CADFC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 800CADFC
  f_800F26F4(c); return; // 800CAE00
}

// fn_800CAE04
void f_800CAE04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAE04
  c->r[0]=c->lr; // 800CAE08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAE0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAE10
  c->r[31]=c->r[3]|c->r[3]; // 800CAE14
  c->lr=0x800CAE1Cu; f_800C0890(c); // 800CAE18
  c->r[3]=0u+0x80460000u; // 800CAE1C
  c->r[0]=c->r[3]+0x00000E68u; // 800CAE20
  W32(c->r[31]+0x00000024u,c->r[0]); // 800CAE24
  c->r[3]=c->r[31]|c->r[31]; // 800CAE28
  c->lr=0x800CAE30u; f_800CAEE0(c); // 800CAE2C
  c->r[3]=c->r[31]|c->r[31]; // 800CAE30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAE34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAE38
  c->lr=c->r[0]; // 800CAE3C
  c->r[1]=c->r[1]+0x00000010u; // 800CAE40
  return; // 800CAE44
}

// fn_800CAE48
void f_800CAE48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAE48
  c->r[0]=c->lr; // 800CAE4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAE50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CAE54
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CAE58
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CAE5C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CAE60
  c->r[28]=c->r[3]|c->r[3]; // 800CAE64
  c->r[29]=c->r[4]|c->r[4]; // 800CAE68
  c->r[30]=c->r[5]|c->r[5]; // 800CAE6C
  c->r[31]=c->r[6]|c->r[6]; // 800CAE70
  c->lr=0x800CAE78u; f_800CAEE0(c); // 800CAE74
  c->r[3]=c->r[28]|c->r[28]; // 800CAE78
  c->r[4]=c->r[29]|c->r[29]; // 800CAE7C
  c->r[5]=c->r[30]|c->r[30]; // 800CAE80
  c->r[6]=c->r[31]|c->r[31]; // 800CAE84
  c->lr=0x800CAE8Cu; f_800C0954(c); // 800CAE88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CAE8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CAE90
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CAE94
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CAE98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAE9C
  c->lr=c->r[0]; // 800CAEA0
  c->r[1]=c->r[1]+0x00000020u; // 800CAEA4
  return; // 800CAEA8
}

// fn_800CAEAC
void f_800CAEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAEAC
  c->r[0]=c->lr; // 800CAEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CAEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CAEB8
  c->r[31]=c->r[3]|c->r[3]; // 800CAEBC
  c->lr=0x800CAEC4u; f_800C0A30(c); // 800CAEC0
  c->r[3]=c->r[31]|c->r[31]; // 800CAEC4
  c->lr=0x800CAECCu; f_800CAEE0(c); // 800CAEC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CAECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CAED0
  c->lr=c->r[0]; // 800CAED4
  c->r[1]=c->r[1]+0x00000010u; // 800CAED8
  return; // 800CAEDC
}

// fn_800CAEE0
void f_800CAEE0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800CAEE0
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CAEE4
  return; // 800CAEE8
}

// fn_800CAEEC
void f_800CAEEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAEEC
  c->r[0]=c->lr; // 800CAEF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAEF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CAEF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CAEFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CAF00
  c->r[29]=c->r[3]|c->r[3]; // 800CAF04
  c->lr=0x800CAF0Cu; f_800C0D78(c); // 800CAF08
  c->r[30]=c->r[3]|c->r[3]; // 800CAF0C
  goto L_800CAF4C; // 800CAF10
L_800CAF14:;
  c->r[3]=c->r[29]|c->r[29]; // 800CAF14
  c->r[4]=c->r[30]|c->r[30]; // 800CAF18
  c->lr=0x800CAF20u; f_800BBC8C(c); // 800CAF1C
  c->r[31]=c->r[3]|c->r[3]; // 800CAF20
  c->r[3]=c->r[29]|c->r[29]; // 800CAF24
  c->r[4]=c->r[30]|c->r[30]; // 800CAF28
  c->lr=0x800CAF30u; f_800C0DB0(c); // 800CAF2C
  c->r[30]=c->r[3]|c->r[3]; // 800CAF30
  c->r[3]=c->r[31]|c->r[31]; // 800CAF34
  c->lr=0x800CAF3Cu; f_800CADFC(c); // 800CAF38
  cmps(c,0,(int32_t)c->r[3],0); // 800CAF3C
  if (crb(c,2)) { goto L_800CAF4C; } // 800CAF40
  c->r[3]=c->r[31]|c->r[31]; // 800CAF44
  c->lr=0x800CAF4Cu; f_800CAC10(c); // 800CAF48
L_800CAF4C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CAF4C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CAF14; } // 800CAF50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CAF54
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CAF58
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CAF5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAF60
  c->lr=c->r[0]; // 800CAF64
  c->r[1]=c->r[1]+0x00000020u; // 800CAF68
  return; // 800CAF6C
}

// fn_800CAF70
void f_800CAF70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CAF70
  c->r[0]=c->lr; // 800CAF74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CAF78
  c->r[11]=c->r[1]+0x00000020u; // 800CAF7C
  c->lr=0x800CAF84u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CAF80
  c->r[27]=c->r[3]|c->r[3]; // 800CAF84
  c->r[28]=c->r[4]|c->r[4]; // 800CAF88
  c->r[29]=c->r[5]|c->r[5]; // 800CAF8C
  c->lr=0x800CAF94u; f_800A23BC(c); // 800CAF90
  c->lr=0x800CAF98u; f_800BB808(c); // 800CAF94
  c->r[4]=c->r[28]|c->r[28]; // 800CAF98
  c->lr=0x800CAFA0u; f_800BBCCC(c); // 800CAF9C
  c->r[30]=c->r[3]|c->r[3]; // 800CAFA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CAFA4
  if (!crb(c,2)) { goto L_800CAFE0; } // 800CAFA8
  c->r[3]=c->r[27]|c->r[27]; // 800CAFAC
  c->r[4]=0u+0x00000000u; // 800CAFB0
  c->lr=0x800CAFB8u; f_800C0B58(c); // 800CAFB4
  c->r[30]=c->r[3]|c->r[3]; // 800CAFB8
  c->r[3]=c->r[27]|c->r[27]; // 800CAFBC
  c->r[4]=c->r[30]|c->r[30]; // 800CAFC0
  c->lr=0x800CAFC8u; f_800BBC8C(c); // 800CAFC4
  c->r[31]=c->r[3]|c->r[3]; // 800CAFC8
  c->r[4]=c->r[29]|c->r[29]; // 800CAFCC
  c->lr=0x800CAFD4u; f_800CAAB0(c); // 800CAFD0
  c->r[3]=c->r[31]|c->r[31]; // 800CAFD4
  c->r[4]=c->r[28]|c->r[28]; // 800CAFD8
  c->lr=0x800CAFE0u; f_800BDE70(c); // 800CAFDC
L_800CAFE0:;
  c->r[3]=c->r[27]|c->r[27]; // 800CAFE0
  c->r[4]=c->r[30]|c->r[30]; // 800CAFE4
  c->lr=0x800CAFECu; f_800BBC8C(c); // 800CAFE8
  c->lr=0x800CAFF0u; f_800BE0EC(c); // 800CAFEC
  c->r[3]=c->r[30]|c->r[30]; // 800CAFF0
  c->r[11]=c->r[1]+0x00000020u; // 800CAFF4
  c->lr=0x800CAFFCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CAFF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CAFFC
  c->lr=c->r[0]; // 800CB000
  c->r[1]=c->r[1]+0x00000020u; // 800CB004
  return; // 800CB008
}

// fn_800CB00C
void f_800CB00C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB00C
  c->r[0]=c->lr; // 800CB010
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB014
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB018
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB01C
  c->r[30]=c->r[3]|c->r[3]; // 800CB020
  c->r[31]=c->r[4]|c->r[4]; // 800CB024
  c->lr=0x800CB02Cu; f_800BBC8C(c); // 800CB028
  cmps(c,0,(int32_t)c->r[3],0); // 800CB02C
  if (crb(c,2)) { goto L_800CB048; } // 800CB030
  c->r[4]=0u+0x00000000u; // 800CB034
  c->lr=0x800CB03Cu; f_800BB958(c); // 800CB038
  c->r[3]=c->r[30]|c->r[30]; // 800CB03C
  c->r[4]=c->r[31]|c->r[31]; // 800CB040
  c->lr=0x800CB048u; f_800C0C24(c); // 800CB044
L_800CB048:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB048
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB050
  c->lr=c->r[0]; // 800CB054
  c->r[1]=c->r[1]+0x00000010u; // 800CB058
  return; // 800CB05C
}

// fn_800CB060
void f_800CB060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB060
  c->r[0]=c->lr; // 800CB064
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB06C
  c->r[5]=c->r[3]|c->r[3]; // 800CB070
  c->r[31]=c->r[4]|c->r[4]; // 800CB074
  c->r[3]=c->r[31]|c->r[31]; // 800CB078
  c->r[4]=c->r[5]+0x000000A8u; // 800CB07C
  c->lr=0x800CB084u; f_8004A65C(c); // 800CB080
  c->r[3]=c->r[31]|c->r[31]; // 800CB084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB088
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB08C
  c->lr=c->r[0]; // 800CB090
  c->r[1]=c->r[1]+0x00000010u; // 800CB094
  return; // 800CB098
}

// fn_800CB09C
void f_800CB09C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB09C
  c->r[0]=c->lr; // 800CB0A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB0A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB0A8
  c->r[5]=c->r[3]|c->r[3]; // 800CB0AC
  c->r[31]=c->r[4]|c->r[4]; // 800CB0B0
  c->r[3]=c->r[31]|c->r[31]; // 800CB0B4
  c->r[4]=c->r[5]+0x00000090u; // 800CB0B8
  c->lr=0x800CB0C0u; f_8004A65C(c); // 800CB0BC
  c->r[3]=c->r[31]|c->r[31]; // 800CB0C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB0C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB0C8
  c->lr=c->r[0]; // 800CB0CC
  c->r[1]=c->r[1]+0x00000010u; // 800CB0D0
  return; // 800CB0D4
}

// fn_800CB0D8
void f_800CB0D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 800CB0D8
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[2]);} // 800CB0DC
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[3]);} // 800CB0E0
  return; // 800CB0E4
}

// fn_800CB0E8
void f_800CB0E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CB0E8
  return; // 800CB0EC
}

// fn_800CB0F0
void f_800CB0F0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000010u); // 800CB0F0
  c->r[0]=R32(c->r[3]+0x00000014u); // 800CB0F4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800CB0F8
  c->r[3]=R32(c->r[4]+c->r[0]); // 800CB0FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800CB100
  c->r[12]=R32(c->r[12]+0x00000020u); // 800CB104
  c->ctr=c->r[12]; // 800CB108
  if (true) { dispatch(c,c->ctr); return; } // 800CB10C
}

// fn_800CB110
void f_800CB110(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000028u); // 800CB110
  return; // 800CB114
}

// dtor_800CB118
void f_800CB118(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB118
  c->r[0]=c->lr; // 800CB11C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB120
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB124
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB128
  c->r[30]=c->r[3]|c->r[3]; // 800CB12C
  c->r[31]=c->r[4]|c->r[4]; // 800CB130
  cmps(c,0,(int32_t)c->r[3],0); // 800CB134
  if (crb(c,2)) { goto L_800CB158; } // 800CB138
  c->r[4]=0u+0x00000000u; // 800CB13C
  c->lr=0x800CB144u; f_800C08CC(c); // 800CB140
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CB144
  cmps(c,0,(int32_t)c->r[0],0); // 800CB148
  if (!crb(c,1)) { goto L_800CB158; } // 800CB14C
  c->r[3]=c->r[30]|c->r[30]; // 800CB150
  c->lr=0x800CB158u; f_80047B20(c); // 800CB154
L_800CB158:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB15C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB160
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB164
  c->lr=c->r[0]; // 800CB168
  c->r[1]=c->r[1]+0x00000010u; // 800CB16C
  return; // 800CB170
}

// fn_800CB174
void f_800CB174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB174
  c->r[0]=c->lr; // 800CB178
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB17C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB180
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB184
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CB188
  c->r[29]=c->r[3]|c->r[3]; // 800CB18C
  c->lr=0x800CB194u; f_800BDCD0(c); // 800CB190
  c->r[3]=0u+0x80460000u; // 800CB194
  c->r[0]=c->r[3]+0x00000E38u; // 800CB198
  W32(c->r[29]+0x00000048u,c->r[0]); // 800CB19C
  c->r[3]=c->r[29]+0x0000004Cu; // 800CB1A0
  c->lr=0x800CB1A8u; f_80185604(c); // 800CB1A4
  c->r[3]=c->r[29]+0x00000060u; // 800CB1A8
  c->lr=0x800CB1B0u; f_80185DC0(c); // 800CB1AC
  c->lr=0x800CB1B4u; f_80056B5C(c); // 800CB1B0
  c->r[30]=c->r[3]|c->r[3]; // 800CB1B4
  c->lr=0x800CB1BCu; f_800A23BC(c); // 800CB1B8
  c->lr=0x800CB1C0u; f_800C23AC(c); // 800CB1BC
  c->lr=0x800CB1C4u; f_800C0888(c); // 800CB1C0
  c->lr=0x800CB1C8u; f_80056B54(c); // 800CB1C4
  c->r[3]=0u+0x000000ECu; // 800CB1C8
  c->lr=0x800CB1D0u; f_80047B64(c); // 800CB1CC
  c->r[31]=c->r[3]|c->r[3]; // 800CB1D0
  cmps(c,0,(int32_t)c->r[3],0); // 800CB1D4
  if (crb(c,2)) { goto L_800CB1E4; } // 800CB1D8
  c->r[4]=c->r[29]+0x00000060u; // 800CB1DC
  c->lr=0x800CB1E4u; f_80182238(c); // 800CB1E0
L_800CB1E4:;
  W32(c->r[29]+0x00000084u,c->r[31]); // 800CB1E4
  c->r[3]=c->r[30]|c->r[30]; // 800CB1E8
  c->lr=0x800CB1F0u; f_80056B54(c); // 800CB1EC
  c->r[3]=c->r[29]|c->r[29]; // 800CB1F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB1F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CB1F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CB1FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB200
  c->lr=c->r[0]; // 800CB204
  c->r[1]=c->r[1]+0x00000020u; // 800CB208
  return; // 800CB20C
}

// fn_800CB210
void f_800CB210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB210
  c->r[0]=c->lr; // 800CB214
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB218
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB21C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB220
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CB224
  c->r[29]=c->r[3]|c->r[3]; // 800CB228
  c->r[30]=c->r[4]|c->r[4]; // 800CB22C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB230
  if (crb(c,2)) { goto L_800CB2BC; } // 800CB234
  c->r[4]=0u+0x80460000u; // 800CB238
  c->r[0]=c->r[4]+0x00000E38u; // 800CB23C
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CB240
  c->lr=0x800CB248u; f_800CB378(c); // 800CB244
  c->r[0]=R32(c->r[29]+0x00000084u); // 800CB248
  cmps(c,0,(int32_t)c->r[0],0); // 800CB24C
  if (crb(c,2)) { goto L_800CB29C; } // 800CB250
  c->lr=0x800CB258u; f_80056B5C(c); // 800CB254
  c->r[31]=c->r[3]|c->r[3]; // 800CB258
  c->lr=0x800CB260u; f_800A23BC(c); // 800CB25C
  c->lr=0x800CB264u; f_800C23AC(c); // 800CB260
  c->lr=0x800CB268u; f_800C0888(c); // 800CB264
  c->lr=0x800CB26Cu; f_80056B54(c); // 800CB268
  c->r[3]=R32(c->r[29]+0x00000084u); // 800CB26C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB270
  if (crb(c,2)) { goto L_800CB28C; } // 800CB274
  c->r[4]=0u+0x00000001u; // 800CB278
  c->r[12]=R32(c->r[3]+0x00000024u); // 800CB27C
  c->r[12]=R32(c->r[12]+0x00000008u); // 800CB280
  c->ctr=c->r[12]; // 800CB284
  if (true) { c->lr=0x800CB28Cu; dispatch(c,c->ctr); } // 800CB288
L_800CB28C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB28C
  c->lr=0x800CB294u; f_80056B54(c); // 800CB290
  c->r[0]=0u+0x00000000u; // 800CB294
  W32(c->r[29]+0x00000084u,c->r[0]); // 800CB298
L_800CB29C:;
  c->r[3]=c->r[29]|c->r[29]; // 800CB29C
  c->r[4]=0u+0x00000000u; // 800CB2A0
  c->lr=0x800CB2A8u; f_800BDD24(c); // 800CB2A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 800CB2A8
  cmps(c,0,(int32_t)c->r[0],0); // 800CB2AC
  if (!crb(c,1)) { goto L_800CB2BC; } // 800CB2B0
  c->r[3]=c->r[29]|c->r[29]; // 800CB2B4
  c->lr=0x800CB2BCu; f_80047B20(c); // 800CB2B8
L_800CB2BC:;
  c->r[3]=c->r[29]|c->r[29]; // 800CB2BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB2C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CB2C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CB2C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB2CC
  c->lr=c->r[0]; // 800CB2D0
  c->r[1]=c->r[1]+0x00000020u; // 800CB2D4
  return; // 800CB2D8
}

// fn_800CB2DC
void f_800CB2DC(Ctx* __restrict c) {
  return; // 800CB2DC
}

// fn_800CB2E0
void f_800CB2E0(Ctx* __restrict c) {
  f_800CB378(c); return; // 800CB2E0
}

// fn_800CB2E4
void f_800CB2E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB2E4
  c->r[0]=c->lr; // 800CB2E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB2EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB2F0
  c->r[31]=c->r[3]|c->r[3]; // 800CB2F4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[2]=c->ps1[2]=RF32(ea);} // 800CB2F8
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[2]);} // 800CB2FC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 800CB300
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[2]);} // 800CB304
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[2]);} // 800CB308
  {uint32_t ea=c->r[2]+0xFFFF88B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB30C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800CB310
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[2]);} // 800CB314
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 800CB318
  c->r[3]=R32(c->r[3]+0x00000084u); // 800CB31C
  c->r[4]=c->r[31]+0x00000060u; // 800CB320
  c->lr=0x800CB328u; f_801822F8(c); // 800CB324
  c->r[3]=R32(c->r[31]+0x00000084u); // 800CB328
  c->r[4]=0u+0x00000001u; // 800CB32C
  c->lr=0x800CB334u; f_80180F84(c); // 800CB330
  c->r[3]=R32(c->r[31]+0x00000084u); // 800CB334
  c->r[4]=0u+0x00000002u; // 800CB338
  c->lr=0x800CB340u; f_80180F84(c); // 800CB33C
  c->r[3]=R32(c->r[31]+0x00000084u); // 800CB340
  c->r[4]=0u+0x00000004u; // 800CB344
  c->lr=0x800CB34Cu; f_80180F84(c); // 800CB348
  c->r[3]=R32(c->r[31]+0x00000084u); // 800CB34C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB350
  c->lr=0x800CB358u; f_80180F6C(c); // 800CB354
  c->lr=0x800CB35Cu; f_80078B6C(c); // 800CB358
  c->r[4]=R32(c->r[31]+0x00000084u); // 800CB35C
  c->lr=0x800CB364u; f_8018F928(c); // 800CB360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB364
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB368
  c->lr=c->r[0]; // 800CB36C
  c->r[1]=c->r[1]+0x00000010u; // 800CB370
  return; // 800CB374
}

// fn_800CB378
void f_800CB378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB378
  c->r[0]=c->lr; // 800CB37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB380
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB384
  c->r[31]=c->r[3]|c->r[3]; // 800CB388
  c->lr=0x800CB390u; f_80078B6C(c); // 800CB38C
  c->r[4]=R32(c->r[31]+0x00000084u); // 800CB390
  c->lr=0x800CB398u; f_8018F934(c); // 800CB394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB398
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB39C
  c->lr=c->r[0]; // 800CB3A0
  c->r[1]=c->r[1]+0x00000010u; // 800CB3A4
  return; // 800CB3A8
}

// fn_800CB3AC
void f_800CB3AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB3AC
  c->r[0]=c->lr; // 800CB3B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB3B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB3B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB3BC
  c->r[30]=c->r[3]|c->r[3]; // 800CB3C0
  c->r[31]=c->r[4]|c->r[4]; // 800CB3C4
  c->r[3]=c->r[1]+0x00000008u; // 800CB3C8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB3CC
  c->f[2]=c->f[1]; // 800CB3D0
  c->f[3]=c->f[1]; // 800CB3D4
  c->lr=0x800CB3DCu; f_8004E34C(c); // 800CB3D8
  c->r[3]=c->r[30]|c->r[30]; // 800CB3DC
  c->lr=0x800CB3E4u; f_800C2408(c); // 800CB3E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CB3E4
  if (crb(c,2)) { goto L_800CB448; } // 800CB3E8
  cmps(c,0,(int32_t)c->r[31],0); // 800CB3EC
  if (crb(c,2)) { goto L_800CB428; } // 800CB3F0
  c->r[3]=c->r[30]|c->r[30]; // 800CB3F4
  c->lr=0x800CB3FCu; f_800C2408(c); // 800CB3F8
  c->r[4]=0u+0x00000003u; // 800CB3FC
  c->lr=0x800CB404u; f_80180F94(c); // 800CB400
  c->r[3]=c->r[30]|c->r[30]; // 800CB404
  c->lr=0x800CB40Cu; f_800C2408(c); // 800CB408
  c->r[4]=0u+0x0000000Cu; // 800CB40C
  c->lr=0x800CB414u; f_80180F84(c); // 800CB410
  c->r[3]=c->r[30]|c->r[30]; // 800CB414
  c->lr=0x800CB41Cu; f_800C2408(c); // 800CB418
  c->r[4]=c->r[1]+0x00000008u; // 800CB41C
  c->lr=0x800CB424u; f_80180F74(c); // 800CB420
  goto L_800CB448; // 800CB424
L_800CB428:;
  c->r[3]=c->r[30]|c->r[30]; // 800CB428
  c->lr=0x800CB430u; f_800C2408(c); // 800CB42C
  c->r[4]=0u+0x00000003u; // 800CB430
  c->lr=0x800CB438u; f_80180F84(c); // 800CB434
  c->r[3]=c->r[30]|c->r[30]; // 800CB438
  c->lr=0x800CB440u; f_800C2408(c); // 800CB43C
  c->r[4]=c->r[1]+0x00000008u; // 800CB440
  c->lr=0x800CB448u; f_80180F74(c); // 800CB444
L_800CB448:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB448
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CB44C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB450
  c->lr=c->r[0]; // 800CB454
  c->r[1]=c->r[1]+0x00000020u; // 800CB458
  return; // 800CB45C
}

// fn_800CB460
void f_800CB460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB460
  c->r[0]=c->lr; // 800CB464
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB46C
  c->r[31]=c->r[3]|c->r[3]; // 800CB470
  c->lr=0x800CB478u; f_800C02CC(c); // 800CB474
  c->r[3]=0u+0x80460000u; // 800CB478
  c->r[0]=c->r[3]+0x00000DFCu; // 800CB47C
  W32(c->r[31]+0x00000024u,c->r[0]); // 800CB480
  c->r[3]=c->r[31]+0x00000028u; // 800CB484
  c->lr=0x800CB48Cu; f_8004B0A4(c); // 800CB488
  c->r[3]=c->r[31]+0x00000034u; // 800CB48C
  c->lr=0x800CB494u; f_8004B0A4(c); // 800CB490
  c->r[3]=c->r[31]+0x00000040u; // 800CB494
  c->lr=0x800CB49Cu; f_8004B0A4(c); // 800CB498
  c->r[0]=0u+0x00000000u; // 800CB49C
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800CB4A0
  c->r[3]=c->r[31]|c->r[31]; // 800CB4A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB4A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB4AC
  c->lr=c->r[0]; // 800CB4B0
  c->r[1]=c->r[1]+0x00000010u; // 800CB4B4
  return; // 800CB4B8
}

// fn_800CB4BC
void f_800CB4BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB4BC
  c->r[0]=c->lr; // 800CB4C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB4C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB4C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB4CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CB4D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CB4D4
  c->r[28]=c->r[3]|c->r[3]; // 800CB4D8
  c->r[29]=c->r[4]|c->r[4]; // 800CB4DC
  c->r[30]=c->r[5]|c->r[5]; // 800CB4E0
  c->r[31]=c->r[6]|c->r[6]; // 800CB4E4
  c->lr=0x800CB4ECu; f_800CB554(c); // 800CB4E8
  c->r[3]=c->r[28]|c->r[28]; // 800CB4EC
  c->r[4]=c->r[29]|c->r[29]; // 800CB4F0
  c->r[5]=c->r[30]|c->r[30]; // 800CB4F4
  c->r[6]=c->r[31]|c->r[31]; // 800CB4F8
  c->lr=0x800CB500u; f_800C0390(c); // 800CB4FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB500
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CB504
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CB508
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CB50C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB510
  c->lr=c->r[0]; // 800CB514
  c->r[1]=c->r[1]+0x00000020u; // 800CB518
  return; // 800CB51C
}

// fn_800CB520
void f_800CB520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB520
  c->r[0]=c->lr; // 800CB524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB52C
  c->r[31]=c->r[3]|c->r[3]; // 800CB530
  c->lr=0x800CB538u; f_800C046C(c); // 800CB534
  c->r[3]=c->r[31]|c->r[31]; // 800CB538
  c->lr=0x800CB540u; f_800CB554(c); // 800CB53C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB544
  c->lr=c->r[0]; // 800CB548
  c->r[1]=c->r[1]+0x00000010u; // 800CB54C
  return; // 800CB550
}

// fn_800CB554
void f_800CB554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB554
  c->r[0]=c->lr; // 800CB558
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB560
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB564
  c->r[30]=c->r[3]|c->r[3]; // 800CB568
  c->r[3]=c->r[3]+0x00000028u; // 800CB56C
  c->r[31]=0u+0x804C0000u; // 800CB570
  c->r[4]=c->r[31]+0x000024A0u; // 800CB574
  c->lr=0x800CB57Cu; f_8004A65C(c); // 800CB578
  c->r[3]=c->r[30]+0x00000034u; // 800CB57C
  c->r[4]=c->r[31]+0x000024A0u; // 800CB580
  c->lr=0x800CB588u; f_8004A65C(c); // 800CB584
  c->r[3]=c->r[30]+0x00000040u; // 800CB588
  c->r[4]=c->r[31]+0x000024A0u; // 800CB58C
  c->lr=0x800CB594u; f_8004A65C(c); // 800CB590
  c->r[0]=0u+0x00000000u; // 800CB594
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800CB598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB59C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB5A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB5A4
  c->lr=c->r[0]; // 800CB5A8
  c->r[1]=c->r[1]+0x00000010u; // 800CB5AC
  return; // 800CB5B0
}

// fn_800CB5B4
void f_800CB5B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB5B4
  c->r[0]=c->lr; // 800CB5B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB5BC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800CB5C0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800CB5C4
  W32(c->r[1]+0x00000010u,c->r[30]); // 800CB5C8
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800CB5CC
  c->r[29]=c->r[3]|c->r[3]; // 800CB5D0
  c->r[30]=c->r[4]|c->r[4]; // 800CB5D4
  c->f[31]=c->f[1]; // 800CB5D8
  c->r[4]=0u+0x00000000u; // 800CB5DC
  c->lr=0x800CB5E4u; f_800C0594(c); // 800CB5E0
  c->r[31]=c->r[3]|c->r[3]; // 800CB5E4
  cmps(c,0,(int32_t)c->r[3],0); // 800CB5E8
  if (crb(c,2)) { goto L_800CB610; } // 800CB5EC
  c->r[3]=c->r[29]|c->r[29]; // 800CB5F0
  c->r[4]=c->r[31]|c->r[31]; // 800CB5F4
  c->lr=0x800CB5FCu; f_800C07B4(c); // 800CB5F8
  cmps(c,0,(int32_t)c->r[3],0); // 800CB5FC
  if (crb(c,2)) { goto L_800CB610; } // 800CB600
  c->r[4]=c->r[30]|c->r[30]; // 800CB604
  c->f[1]=c->f[31]; // 800CB608
  c->lr=0x800CB610u; f_800CB2E4(c); // 800CB60C
L_800CB610:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB610
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800CB614
  c->r[31]=R32(c->r[1]+0x00000014u); // 800CB618
  c->r[30]=R32(c->r[1]+0x00000010u); // 800CB61C
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 800CB620
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB624
  c->lr=c->r[0]; // 800CB628
  c->r[1]=c->r[1]+0x00000020u; // 800CB62C
  return; // 800CB630
}

// fn_800CB634
void f_800CB634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB634
  c->r[0]=c->lr; // 800CB638
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB63C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB640
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB644
  c->r[30]=c->r[3]|c->r[3]; // 800CB648
  c->r[31]=c->r[4]|c->r[4]; // 800CB64C
  c->lr=0x800CB654u; f_800C07B4(c); // 800CB650
  cmps(c,0,(int32_t)c->r[3],0); // 800CB654
  if (crb(c,2)) { goto L_800CB668; } // 800CB658
  c->r[3]=c->r[30]|c->r[30]; // 800CB65C
  c->r[4]=c->r[31]|c->r[31]; // 800CB660
  c->lr=0x800CB668u; f_800C0660(c); // 800CB664
L_800CB668:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB668
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB66C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB670
  c->lr=c->r[0]; // 800CB674
  c->r[1]=c->r[1]+0x00000010u; // 800CB678
  return; // 800CB67C
}

// fn_800CB680
void f_800CB680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB680
  c->r[0]=c->lr; // 800CB684
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB688
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB68C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB690
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CB694
  c->r[29]=c->r[3]|c->r[3]; // 800CB698
  c->r[30]=c->r[4]|c->r[4]; // 800CB69C
  c->lr=0x800CB6A4u; f_800C07F4(c); // 800CB6A0
  c->r[31]=c->r[3]|c->r[3]; // 800CB6A4
  goto L_800CB6D0; // 800CB6A8
L_800CB6AC:;
  c->r[3]=c->r[29]|c->r[29]; // 800CB6AC
  c->r[4]=c->r[31]|c->r[31]; // 800CB6B0
  c->lr=0x800CB6B8u; f_800C07B4(c); // 800CB6B4
  c->r[4]=c->r[30]|c->r[30]; // 800CB6B8
  c->lr=0x800CB6C0u; f_800CB3AC(c); // 800CB6BC
  c->r[3]=c->r[29]|c->r[29]; // 800CB6C0
  c->r[4]=c->r[31]|c->r[31]; // 800CB6C4
  c->lr=0x800CB6CCu; f_800C082C(c); // 800CB6C8
  c->r[31]=c->r[3]|c->r[3]; // 800CB6CC
L_800CB6D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CB6D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CB6AC; } // 800CB6D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CB6D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CB6DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CB6E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CB6E4
  c->lr=c->r[0]; // 800CB6E8
  c->r[1]=c->r[1]+0x00000020u; // 800CB6EC
  return; // 800CB6F0
}

// fn_800CB6F4
void f_800CB6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB6F4
  c->r[0]=c->lr; // 800CB6F8
  W32(c->r[1]+0x00000094u,c->r[0]); // 800CB6FC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800CB700
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800CB704
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800CB708
  c->r[31]=c->r[4]|c->r[4]; // 800CB70C
  c->r[3]=c->r[1]+0x00000014u; // 800CB710
  c->lr=0x800CB718u; f_80185AAC(c); // 800CB714
  c->r[3]=c->r[1]+0x00000008u; // 800CB718
  c->lr=0x800CB720u; f_8004B0A4(c); // 800CB71C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800CB720
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB724
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CB728
  {uint32_t ea=c->r[2]+0xFFFF8884u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB72C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB730
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CB734
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CB738
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB73C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800CB740
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CB744
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[1]);} // 800CB748
  {uint32_t ea=c->r[2]+0xFFFF88B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB74C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800CB750
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[1]);} // 800CB754
  c->lr=0x800CB75Cu; f_80078B6C(c); // 800CB758
  c->lr=0x800CB760u; f_8018F91C(c); // 800CB75C
  c->r[31]=c->r[3]|c->r[3]; // 800CB760
  cmps(c,0,(int32_t)c->r[3],0); // 800CB764
  if (crb(c,2)) { goto L_800CB7B4; } // 800CB768
  c->lr=0x800CB770u; f_80078B6C(c); // 800CB76C
  c->r[4]=c->r[1]+0x00000014u; // 800CB770
  c->r[5]=0u+0x00000001u; // 800CB774
  c->r[6]=c->r[1]+0x00000030u; // 800CB778
  c->lr=0x800CB780u; f_8018F940(c); // 800CB77C
  cmps(c,0,(int32_t)c->r[3],0); // 800CB780
  if (crb(c,2)) { goto L_800CB7B4; } // 800CB784
  c->r[3]=c->r[31]|c->r[31]; // 800CB788
  c->r[4]=R32(c->r[1]+0x00000030u); // 800CB78C
  c->r[4]=R32(c->r[4]+0x00000010u); // 800CB790
  c->lr=0x800CB798u; f_801808D8(c); // 800CB794
  cmps(c,0,(int32_t)c->r[3],0); // 800CB798
  if (crb(c,2)) { goto L_800CB7B4; } // 800CB79C
  c->r[4]=c->r[1]+0x00000018u; // 800CB7A0
  c->r[5]=c->r[1]+0x00000024u; // 800CB7A4
  c->r[6]=c->r[1]+0x00000008u; // 800CB7A8
  c->lr=0x800CB7B0u; f_80180CDC(c); // 800CB7AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800CB7B0
L_800CB7B4:;
  c->f[1]=c->f[31]; // 800CB7B4
  c->r[0]=0u+0x00000088u; // 800CB7B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800CB7BC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800CB7C0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800CB7C4
  c->r[0]=R32(c->r[1]+0x00000094u); // 800CB7C8
  c->lr=c->r[0]; // 800CB7CC
  c->r[1]=c->r[1]+0x00000090u; // 800CB7D0
  return; // 800CB7D4
}

// fn_800CB7D8
void f_800CB7D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB7D8
  c->r[0]=c->lr; // 800CB7DC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800CB7E0
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 800CB7E4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 800CB7E8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 800CB7EC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 800CB7F0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 800CB7F4
  W32(c->r[1]+0x00000088u,c->r[30]); // 800CB7F8
  W32(c->r[1]+0x00000084u,c->r[29]); // 800CB7FC
  W32(c->r[1]+0x00000080u,c->r[28]); // 800CB800
  c->r[28]=c->r[3]|c->r[3]; // 800CB804
  c->r[29]=c->r[4]|c->r[4]; // 800CB808
  c->r[30]=c->r[5]|c->r[5]; // 800CB80C
  c->r[3]=c->r[1]+0x00000020u; // 800CB810
  c->lr=0x800CB818u; f_80185AAC(c); // 800CB814
  c->r[3]=c->r[1]+0x00000008u; // 800CB818
  c->lr=0x800CB820u; f_8004B0A4(c); // 800CB81C
  c->r[3]=c->r[1]+0x00000024u; // 800CB820
  c->r[4]=c->r[29]|c->r[29]; // 800CB824
  c->lr=0x800CB82Cu; f_8004A65C(c); // 800CB828
  c->r[3]=c->r[1]+0x00000030u; // 800CB82C
  c->r[4]=c->r[30]|c->r[30]; // 800CB830
  c->lr=0x800CB838u; f_8004A65C(c); // 800CB834
  c->lr=0x800CB83Cu; f_80078B6C(c); // 800CB838
  c->lr=0x800CB840u; f_8018F91C(c); // 800CB83C
  c->r[31]=c->r[3]|c->r[3]; // 800CB840
  cmps(c,0,(int32_t)c->r[3],0); // 800CB844
  if (!crb(c,2)) { goto L_800CB854; } // 800CB848
  c->r[3]=0u+0x00000000u; // 800CB84C
  goto L_800CB91C; // 800CB850
L_800CB854:;
  c->lr=0x800CB858u; f_80078B6C(c); // 800CB854
  c->r[4]=c->r[1]+0x00000020u; // 800CB858
  c->r[5]=0u+0x00000001u; // 800CB85C
  c->r[6]=c->r[1]+0x00000040u; // 800CB860
  c->lr=0x800CB868u; f_8018F940(c); // 800CB864
  cmps(c,0,(int32_t)c->r[3],0); // 800CB868
  if (!crb(c,2)) { goto L_800CB878; } // 800CB86C
  c->r[3]=0u+0x00000000u; // 800CB870
  goto L_800CB91C; // 800CB874
L_800CB878:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB878
  c->r[4]=R32(c->r[1]+0x00000040u); // 800CB87C
  c->r[4]=R32(c->r[4]+0x00000010u); // 800CB880
  c->lr=0x800CB888u; f_801808D8(c); // 800CB884
  cmps(c,0,(int32_t)c->r[3],0); // 800CB888
  if (!crb(c,2)) { goto L_800CB898; } // 800CB88C
  c->r[3]=0u+0x00000000u; // 800CB890
  goto L_800CB91C; // 800CB894
L_800CB898:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB898
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800CB89C
  {uint32_t ea=c->r[29]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB8A0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CB8A4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CB8A8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CB8AC
  c->r[4]=c->r[1]+0x00000014u; // 800CB8B0
  c->lr=0x800CB8B8u; f_80180CA4(c); // 800CB8B4
  c->f[30]=c->f[1]; // 800CB8B8
  c->r[3]=c->r[30]|c->r[30]; // 800CB8BC
  c->lr=0x800CB8C4u; f_8005C170(c); // 800CB8C0
  c->f[31]=c->f[1]; // 800CB8C4
  c->f[1]=c->f[30]; // 800CB8C8
  c->lr=0x800CB8D0u; f_800797BC(c); // 800CB8CC
  fcmp(c,0,c->f[1],c->f[31]); // 800CB8D0
  if (!crb(c,1)) { goto L_800CB8E0; } // 800CB8D4
  c->r[3]=0u+0x00000000u; // 800CB8D8
  goto L_800CB91C; // 800CB8DC
L_800CB8E0:;
  c->r[3]=R32(c->r[28]+0x0000004Cu); // 800CB8E0
  c->r[4]=R32(c->r[1]+0x00000040u); // 800CB8E4
  c->r[4]=R32(c->r[4]+0x00000014u); // 800CB8E8
  c->lr=0x800CB8F0u; f_80180A18(c); // 800CB8EC
  cmps(c,0,(int32_t)c->r[3],0); // 800CB8F0
  if (!crb(c,2)) { goto L_800CB900; } // 800CB8F4
  c->r[3]=0u+0x00000000u; // 800CB8F8
  goto L_800CB91C; // 800CB8FC
L_800CB900:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 800CB900
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CB904
  cmps(c,0,(int32_t)c->r[0],0); // 800CB908
  if (crb(c,2)) { goto L_800CB918; } // 800CB90C
  c->r[3]=0u+0x00000000u; // 800CB910
  goto L_800CB91C; // 800CB914
L_800CB918:;
  c->r[3]=R32(c->r[1]+0x00000040u); // 800CB918
L_800CB91C:;
  c->r[0]=0u+0x000000A8u; // 800CB91C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800CB920
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 800CB924
  c->r[0]=0u+0x00000098u; // 800CB928
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800CB92C
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 800CB930
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 800CB934
  c->r[30]=R32(c->r[1]+0x00000088u); // 800CB938
  c->r[29]=R32(c->r[1]+0x00000084u); // 800CB93C
  c->r[28]=R32(c->r[1]+0x00000080u); // 800CB940
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800CB944
  c->lr=c->r[0]; // 800CB948
  c->r[1]=c->r[1]+0x000000B0u; // 800CB94C
  return; // 800CB950
}

// fn_800CB954
void f_800CB954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB954
  c->r[0]=c->lr; // 800CB958
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CB95C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CB960
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CB964
  c->r[30]=c->r[4]|c->r[4]; // 800CB968
  c->lr=0x800CB970u; f_80078B6C(c); // 800CB96C
  c->lr=0x800CB974u; f_8018F91C(c); // 800CB970
  c->r[31]=c->r[3]|c->r[3]; // 800CB974
  cmps(c,0,(int32_t)c->r[3],0); // 800CB978
  if (!crb(c,2)) { goto L_800CB988; } // 800CB97C
  c->r[3]=0u+0x00000000u; // 800CB980
  goto L_800CB9C4; // 800CB984
L_800CB988:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 800CB988
  c->lr=0x800CB990u; f_80180A18(c); // 800CB98C
  c->r[4]=c->r[3]|c->r[3]; // 800CB990
  cmps(c,0,(int32_t)c->r[3],0); // 800CB994
  if (!crb(c,2)) { goto L_800CB9A4; } // 800CB998
  c->r[3]=0u+0x00000000u; // 800CB99C
  goto L_800CB9C4; // 800CB9A0
L_800CB9A4:;
  c->r[3]=c->r[31]|c->r[31]; // 800CB9A4
  c->r[4]=R32(c->r[4]+0x00000044u); // 800CB9A8
  c->lr=0x800CB9B0u; f_80180A58(c); // 800CB9AC
  cmps(c,0,(int32_t)c->r[3],0); // 800CB9B0
  if (!crb(c,2)) { goto L_800CB9C0; } // 800CB9B4
  c->r[3]=0u+0x00000000u; // 800CB9B8
  goto L_800CB9C4; // 800CB9BC
L_800CB9C0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CB9C0
L_800CB9C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CB9C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CB9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CB9CC
  c->lr=c->r[0]; // 800CB9D0
  c->r[1]=c->r[1]+0x00000010u; // 800CB9D4
  return; // 800CB9D8
}

// fn_800CB9DC
void f_800CB9DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CB9DC
  c->r[0]=c->lr; // 800CB9E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CB9E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CB9E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CB9EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CB9F0
  c->r[29]=c->r[3]|c->r[3]; // 800CB9F4
  c->r[30]=c->r[4]|c->r[4]; // 800CB9F8
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800CB9FC
  cmps(c,0,(int32_t)c->r[0],0); // 800CBA00
  if (!crb(c,2)) { goto L_800CBA10; } // 800CBA04
  c->r[3]=0u+0xFFFFFFFFu; // 800CBA08
  goto L_800CBA68; // 800CBA0C
L_800CBA10:;
  c->r[31]=0u+0x00000000u; // 800CBA10
L_800CBA14:;
  c->r[3]=R32(c->r[29]+0x0000004Cu); // 800CBA14
  c->r[4]=c->r[31]|c->r[31]; // 800CBA18
  c->lr=0x800CBA20u; f_80180A18(c); // 800CBA1C
  c->r[4]=c->r[3]|c->r[3]; // 800CBA20
  cmps(c,0,(int32_t)c->r[3],0); // 800CBA24
  if (crb(c,2)) { goto L_800CBA64; } // 800CBA28
  c->r[3]=R32(c->r[29]+0x0000004Cu); // 800CBA2C
  c->r[4]=R32(c->r[4]+0x00000044u); // 800CBA30
  c->lr=0x800CBA38u; f_80180A58(c); // 800CBA34
  cmps(c,0,(int32_t)c->r[3],0); // 800CBA38
  if (crb(c,2)) { goto L_800CBA64; } // 800CBA3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CBA40
  c->r[4]=c->r[30]|c->r[30]; // 800CBA44
  c->lr=0x800CBA4Cu; f_800C2D00(c); // 800CBA48
  cmps(c,0,(int32_t)c->r[3],0); // 800CBA4C
  if (crb(c,2)) { goto L_800CBA5C; } // 800CBA50
  c->r[3]=c->r[31]|c->r[31]; // 800CBA54
  goto L_800CBA68; // 800CBA58
L_800CBA5C:;
  c->r[31]=c->r[31]+0x00000001u; // 800CBA5C
  IRQCHK(c); goto L_800CBA14; // 800CBA60
L_800CBA64:;
  c->r[3]=0u+0xFFFFFFFFu; // 800CBA64
L_800CBA68:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CBA68
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CBA6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CBA70
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CBA74
  c->lr=c->r[0]; // 800CBA78
  c->r[1]=c->r[1]+0x00000020u; // 800CBA7C
  return; // 800CBA80
}

// fn_800CBA84
void f_800CBA84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBA84
  c->r[0]=c->lr; // 800CBA88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBA8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBA90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CBA94
  c->r[30]=c->r[3]|c->r[3]; // 800CBA98
  c->r[31]=c->r[5]|c->r[5]; // 800CBA9C
  c->lr=0x800CBAA4u; f_800CB9DC(c); // 800CBAA0
  c->r[4]=c->r[3]|c->r[3]; // 800CBAA4
  c->r[3]=R32(c->r[30]+0x0000004Cu); // 800CBAA8
  c->lr=0x800CBAB0u; f_80180A18(c); // 800CBAAC
  cmps(c,0,(int32_t)c->r[31],0); // 800CBAB0
  if (crb(c,2)) { goto L_800CBAC8; } // 800CBAB4
  c->r[0]=R32(c->r[3]+0x00000048u); // 800CBAB8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800CBABC
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CBAC0
  goto L_800CBAD4; // 800CBAC4
L_800CBAC8:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 800CBAC8
  c->r[0]=c->r[0]|0x00000001u; // 800CBACC
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CBAD0
L_800CBAD4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBAD4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CBAD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBADC
  c->lr=c->r[0]; // 800CBAE0
  c->r[1]=c->r[1]+0x00000010u; // 800CBAE4
  return; // 800CBAE8
}

// fn_800CBAEC
void f_800CBAEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBAEC
  c->r[0]=c->lr; // 800CBAF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBAF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBAF8
  c->r[31]=c->r[5]|c->r[5]; // 800CBAFC
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800CBB00
  c->lr=0x800CBB08u; f_80180A18(c); // 800CBB04
  cmps(c,0,(int32_t)c->r[31],0); // 800CBB08
  if (crb(c,2)) { goto L_800CBB20; } // 800CBB0C
  c->r[0]=R32(c->r[3]+0x00000048u); // 800CBB10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800CBB14
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CBB18
  goto L_800CBB2C; // 800CBB1C
L_800CBB20:;
  c->r[0]=R32(c->r[3]+0x00000048u); // 800CBB20
  c->r[0]=c->r[0]|0x00000001u; // 800CBB24
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CBB28
L_800CBB2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBB30
  c->lr=c->r[0]; // 800CBB34
  c->r[1]=c->r[1]+0x00000010u; // 800CBB38
  return; // 800CBB3C
}

// fn_800CBB40
void f_800CBB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBB40
  c->r[0]=c->lr; // 800CBB44
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CBB48
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800CBB4C
  W32(c->r[1]+0x00000038u,c->r[30]); // 800CBB50
  W32(c->r[1]+0x00000034u,c->r[29]); // 800CBB54
  c->r[29]=c->r[3]|c->r[3]; // 800CBB58
  c->r[30]=c->r[4]|c->r[4]; // 800CBB5C
  c->r[3]=c->r[1]+0x00000008u; // 800CBB60
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBB64
  c->f[2]=c->f[1]; // 800CBB68
  c->f[3]=c->f[1]; // 800CBB6C
  c->lr=0x800CBB74u; f_8004E34C(c); // 800CBB70
  W32(c->r[29]+0x0000004Cu,c->r[30]); // 800CBB74
  c->lr=0x800CBB7Cu; f_80078B6C(c); // 800CBB78
  c->r[4]=c->r[30]|c->r[30]; // 800CBB7C
  c->lr=0x800CBB84u; f_8018F910(c); // 800CBB80
  c->r[3]=R32(c->r[30]+0x00000000u); // 800CBB84
  c->r[4]=0u+0x00000000u; // 800CBB88
  c->lr=0x800CBB90u; f_80180DA4(c); // 800CBB8C
  c->r[31]=c->r[3]|c->r[3]; // 800CBB90
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBB94
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 800CBB98
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 800CBB9C
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 800CBBA0
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 800CBBA4
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 800CBBA8
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 800CBBAC
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 800CBBB0
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 800CBBB4
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800CBBB8
  c->r[30]=0u+0x00000000u; // 800CBBBC
L_800CBBC0:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 800CBBC0
  c->r[4]=c->r[30]|c->r[30]; // 800CBBC4
  c->lr=0x800CBBCCu; f_80180DA4(c); // 800CBBC8
  cmps(c,0,(int32_t)c->r[3],0); // 800CBBCC
  if (crb(c,2)) { goto L_800CBC8C; } // 800CBBD0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBBD4
  {uint32_t ea=c->r[29]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBBD8
  fcmp(c,0,c->f[1],c->f[0]); // 800CBBDC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CBBE0
  if (!crb(c,2)) { goto L_800CBBEC; } // 800CBBE4
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[1]);} // 800CBBE8
L_800CBBEC:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBBEC
  {uint32_t ea=c->r[29]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBBF0
  fcmp(c,0,c->f[1],c->f[0]); // 800CBBF4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CBBF8
  if (!crb(c,2)) { goto L_800CBC04; } // 800CBBFC
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[1]);} // 800CBC00
L_800CBC04:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC04
  {uint32_t ea=c->r[29]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC08
  fcmp(c,0,c->f[1],c->f[0]); // 800CBC0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CBC10
  if (!crb(c,2)) { goto L_800CBC1C; } // 800CBC14
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[1]);} // 800CBC18
L_800CBC1C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC1C
  {uint32_t ea=c->r[29]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC20
  fcmp(c,0,c->f[1],c->f[0]); // 800CBC24
  if (!crb(c,1)) { goto L_800CBC30; } // 800CBC28
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[1]);} // 800CBC2C
L_800CBC30:;
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC30
  {uint32_t ea=c->r[29]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC34
  fcmp(c,0,c->f[1],c->f[0]); // 800CBC38
  if (!crb(c,1)) { goto L_800CBC44; } // 800CBC3C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[1]);} // 800CBC40
L_800CBC44:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC44
  {uint32_t ea=c->r[29]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC48
  fcmp(c,0,c->f[1],c->f[0]); // 800CBC4C
  if (!crb(c,1)) { goto L_800CBC58; } // 800CBC50
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[1]);} // 800CBC54
L_800CBC58:;
  {uint32_t ea=c->r[29]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC58
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC5C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CBC60
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800CBC64
  {uint32_t ea=c->r[29]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC68
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC6C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CBC70
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 800CBC74
  {uint32_t ea=c->r[29]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CBC78
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBC7C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800CBC80
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 800CBC84
  c->r[30]=c->r[30]+0x00000001u; // 800CBC88
L_800CBC8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CBC8C
  if (!crb(c,2)) { IRQCHK(c); goto L_800CBBC0; } // 800CBC90
  cmps(c,0,(int32_t)c->r[30],0); // 800CBC94
  if (crb(c,2)) { goto L_800CBCFC; } // 800CBC98
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[2]=RF64(ea);} // 800CBC9C
  c->r[3]=c->r[30]^0x80000000u; // 800CBCA0
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800CBCA4
  c->r[0]=0u+0x43300000u; // 800CBCA8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CBCAC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800CBCB0
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800CBCB4
  {uint32_t ea=c->r[29]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBCB8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800CBCBC
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 800CBCC0
  W32(c->r[1]+0x00000024u,c->r[3]); // 800CBCC4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CBCC8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800CBCCC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800CBCD0
  {uint32_t ea=c->r[29]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBCD4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800CBCD8
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 800CBCDC
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800CBCE0
  W32(c->r[1]+0x00000028u,c->r[0]); // 800CBCE4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800CBCE8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800CBCEC
  {uint32_t ea=c->r[29]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CBCF0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 800CBCF4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 800CBCF8
L_800CBCFC:;
  c->r[31]=0u+0x00000000u; // 800CBCFC
L_800CBD00:;
  c->r[3]=R32(c->r[29]+0x0000004Cu); // 800CBD00
  c->r[4]=c->r[31]|c->r[31]; // 800CBD04
  c->lr=0x800CBD0Cu; f_80180A18(c); // 800CBD08
  cmps(c,0,(int32_t)c->r[3],0); // 800CBD0C
  if (crb(c,2)) { goto L_800CBD28; } // 800CBD10
  c->r[0]=R32(c->r[3]+0x00000048u); // 800CBD14
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800CBD18
  W32(c->r[3]+0x00000048u,c->r[0]); // 800CBD1C
  c->r[31]=c->r[31]+0x00000001u; // 800CBD20
  IRQCHK(c); goto L_800CBD00; // 800CBD24
L_800CBD28:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800CBD28
  c->r[30]=R32(c->r[1]+0x00000038u); // 800CBD2C
  c->r[29]=R32(c->r[1]+0x00000034u); // 800CBD30
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CBD34
  c->lr=c->r[0]; // 800CBD38
  c->r[1]=c->r[1]+0x00000040u; // 800CBD3C
  return; // 800CBD40
}

// fn_800CBD44
void f_800CBD44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBD44
  c->r[0]=c->lr; // 800CBD48
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CBD4C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CBD50
  c->r[31]=c->r[3]|c->r[3]; // 800CBD54
  c->r[4]=R32(c->r[3]+0x00000050u); // 800CBD58
  c->r[0]=rotl(c->r[4],0)&0x000000C0u; // 800CBD5C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBD60
  if (crb(c,2)) { goto L_800CBDCC; } // 800CBD64
  c->r[0]=rotl(c->r[4],0)&0x00400000u; // 800CBD68
  cmps(c,0,(int32_t)c->r[0],0); // 800CBD6C
  if (!crb(c,2)) { goto L_800CBDCC; } // 800CBD70
  c->r[0]=rotl(c->r[4],0)&0x00000040u; // 800CBD74
  cmps(c,0,(int32_t)c->r[0],0); // 800CBD78
  if (crb(c,2)) { goto L_800CBDA8; } // 800CBD7C
  c->lr=0x800CBD84u; f_800BDEB4(c); // 800CBD80
  c->r[5]=c->r[3]|c->r[3]; // 800CBD84
  c->r[3]=c->r[1]+0x00000008u; // 800CBD88
  c->r[4]=0u+0x80460000u; // 800CBD8C
  c->r[4]=c->r[4]+0x000000FCu; // 800CBD90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CBD94
  c->lr=0x800CBD9Cu; f_802E7CC4(c); // 800CBD98
  c->r[3]=c->r[1]+0x00000008u; // 800CBD9C
  c->lr=0x800CBDA4u; f_800B8660(c); // 800CBDA0
  W32(c->r[31]+0x00000098u,c->r[3]); // 800CBDA4
L_800CBDA8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CBDA8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800CBDAC
  cmps(c,0,(int32_t)c->r[0],0); // 800CBDB0
  if (crb(c,2)) { goto L_800CBDC0; } // 800CBDB4
  c->r[3]=R32(c->r[31]+0x0000009Cu); // 800CBDB8
  c->lr=0x800CBDC0u; f_800BAC4C(c); // 800CBDBC
L_800CBDC0:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CBDC0
  c->r[0]=c->r[0]|0x00400000u; // 800CBDC4
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CBDC8
L_800CBDCC:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CBDCC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CBDD0
  c->lr=c->r[0]; // 800CBDD4
  c->r[1]=c->r[1]+0x00000030u; // 800CBDD8
  return; // 800CBDDC
}

// fn_800CBDE0
void f_800CBDE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBDE0
  c->r[0]=c->lr; // 800CBDE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBDE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBDEC
  c->r[31]=c->r[3]|c->r[3]; // 800CBDF0
  c->r[4]=R32(c->r[3]+0x00000050u); // 800CBDF4
  c->r[0]=rotl(c->r[4],0)&0x00400000u; // 800CBDF8
  cmps(c,0,(int32_t)c->r[0],0); // 800CBDFC
  if (crb(c,2)) { goto L_800CBE88; } // 800CBE00
  c->r[0]=rotl(c->r[4],0)&0x00000080u; // 800CBE04
  cmps(c,0,(int32_t)c->r[0],0); // 800CBE08
  if (crb(c,2)) { goto L_800CBE28; } // 800CBE0C
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 800CBE10
  cmps(c,0,(int32_t)c->r[0],0); // 800CBE14
  if (crb(c,2)) { goto L_800CBE28; } // 800CBE18
  c->lr=0x800CBE20u; f_800BAC84(c); // 800CBE1C
  c->r[0]=0u+0x00000000u; // 800CBE20
  W32(c->r[31]+0x0000009Cu,c->r[0]); // 800CBE24
L_800CBE28:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CBE28
  c->r[0]=rotl(c->r[0],0)&0x00000040u; // 800CBE2C
  cmps(c,0,(int32_t)c->r[0],0); // 800CBE30
  if (crb(c,2)) { goto L_800CBE7C; } // 800CBE34
  c->lr=0x800CBE3Cu; f_800A23BC(c); // 800CBE38
  c->lr=0x800CBE40u; f_800BB7F0(c); // 800CBE3C
  c->r[4]=R32(c->r[31]+0x00000098u); // 800CBE40
  c->lr=0x800CBE48u; f_800C1808(c); // 800CBE44
  cmps(c,0,(int32_t)c->r[3],0); // 800CBE48
  if (crb(c,2)) { goto L_800CBE74; } // 800CBE4C
  c->lr=0x800CBE54u; f_800A23BC(c); // 800CBE50
  c->lr=0x800CBE58u; f_800BB7F0(c); // 800CBE54
  c->r[4]=R32(c->r[31]+0x00000098u); // 800CBE58
  c->lr=0x800CBE60u; f_800BBE24(c); // 800CBE5C
  c->lr=0x800CBE64u; f_800BE3D8(c); // 800CBE60
  c->lr=0x800CBE68u; f_800A23BC(c); // 800CBE64
  c->lr=0x800CBE6Cu; f_800BB7F0(c); // 800CBE68
  c->r[4]=R32(c->r[31]+0x00000098u); // 800CBE6C
  c->lr=0x800CBE74u; f_800C2B04(c); // 800CBE70
L_800CBE74:;
  c->r[0]=0u+0x00000000u; // 800CBE74
  W32(c->r[31]+0x00000098u,c->r[0]); // 800CBE78
L_800CBE7C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CBE7C
  c->r[0]=rotl(c->r[0],0)&0xFFBFFFFFu; // 800CBE80
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CBE84
L_800CBE88:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBE88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBE8C
  c->lr=c->r[0]; // 800CBE90
  c->r[1]=c->r[1]+0x00000010u; // 800CBE94
  return; // 800CBE98
}

// fn_800CBE9C
void f_800CBE9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBE9C
  c->r[0]=c->lr; // 800CBEA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBEA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBEA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CBEAC
  c->r[30]=c->r[3]|c->r[3]; // 800CBEB0
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CBEB4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CBEB8
  cmps(c,0,(int32_t)c->r[0],0); // 800CBEBC
  if (crb(c,2)) { goto L_800CBF20; } // 800CBEC0
  c->lr=0x800CBEC8u; f_800A23BC(c); // 800CBEC4
  c->lr=0x800CBECCu; f_800A23C4(c); // 800CBEC8
  c->lr=0x800CBED0u; f_800BBF6C(c); // 800CBECC
  c->r[31]=c->r[3]|c->r[3]; // 800CBED0
  cmps(c,0,(int32_t)c->r[3],0); // 800CBED4
  if (crb(c,2)) { goto L_800CBF20; } // 800CBED8
  c->lr=0x800CBEE0u; f_800A23BC(c); // 800CBEDC
  c->lr=0x800CBEE4u; f_800BB800(c); // 800CBEE0
  c->r[4]=c->r[31]|c->r[31]; // 800CBEE4
  c->lr=0x800CBEECu; f_800BBD58(c); // 800CBEE8
  c->r[4]=0u+0x00000001u; // 800CBEEC
  c->lr=0x800CBEF4u; f_800BB958(c); // 800CBEF0
  c->lr=0x800CBEF8u; f_800A23BC(c); // 800CBEF4
  c->lr=0x800CBEFCu; f_800BB800(c); // 800CBEF8
  c->r[4]=c->r[31]|c->r[31]; // 800CBEFC
  c->lr=0x800CBF04u; f_800BBD58(c); // 800CBF00
  c->r[4]=0u+0x00000001u; // 800CBF04
  c->r[5]=0u+0x00000000u; // 800CBF08
  c->lr=0x800CBF10u; f_800C7B08(c); // 800CBF0C
  c->lr=0x800CBF14u; f_800A23BC(c); // 800CBF10
  c->lr=0x800CBF18u; f_800A23C4(c); // 800CBF14
  c->r[4]=0u+0x00000000u; // 800CBF18
  c->lr=0x800CBF20u; f_800D8804(c); // 800CBF1C
L_800CBF20:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800CBF20
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CBF24
  cmps(c,0,(int32_t)c->r[0],0); // 800CBF28
  if (crb(c,2)) { goto L_800CBF60; } // 800CBF2C
  c->r[3]=c->r[30]|c->r[30]; // 800CBF30
  c->lr=0x800CBF38u; f_800CCAF4(c); // 800CBF34
  c->r[31]=c->r[3]|c->r[3]; // 800CBF38
  cmps(c,0,(int32_t)c->r[3],0); // 800CBF3C
  if (crb(c,2)) { goto L_800CBF60; } // 800CBF40
  c->lr=0x800CBF48u; f_800A23BC(c); // 800CBF44
  c->lr=0x800CBF4Cu; f_800BB800(c); // 800CBF48
  c->r[4]=c->r[31]|c->r[31]; // 800CBF4C
  c->lr=0x800CBF54u; f_800BBD58(c); // 800CBF50
  c->r[4]=0u+0x00000001u; // 800CBF54
  c->r[5]=0u+0x00000000u; // 800CBF58
  c->lr=0x800CBF60u; f_800C7B08(c); // 800CBF5C
L_800CBF60:;
  c->r[3]=c->r[30]|c->r[30]; // 800CBF60
  c->lr=0x800CBF68u; f_800BDEB4(c); // 800CBF64
  c->r[0]=0u+0x00000002u; // 800CBF68
  W32(c->r[30]+0x00000054u,c->r[0]); // 800CBF6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CBF70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CBF74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CBF78
  c->lr=c->r[0]; // 800CBF7C
  c->r[1]=c->r[1]+0x00000010u; // 800CBF80
  return; // 800CBF84
}

// fn_800CBF88
void f_800CBF88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CBF88
  c->r[0]=c->lr; // 800CBF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CBF90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CBF94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CBF98
  c->r[30]=c->r[3]|c->r[3]; // 800CBF9C
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CBFA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800CBFA4
  cmps(c,0,(int32_t)c->r[0],0); // 800CBFA8
  if (crb(c,2)) { goto L_800CBFF4; } // 800CBFAC
  c->lr=0x800CBFB4u; f_800A23BC(c); // 800CBFB0
  c->lr=0x800CBFB8u; f_800A23C4(c); // 800CBFB4
  c->lr=0x800CBFBCu; f_800BBF6C(c); // 800CBFB8
  c->r[31]=c->r[3]|c->r[3]; // 800CBFBC
  cmps(c,0,(int32_t)c->r[3],0); // 800CBFC0
  if (crb(c,2)) { goto L_800CBFF4; } // 800CBFC4
  c->lr=0x800CBFCCu; f_800A23BC(c); // 800CBFC8
  c->lr=0x800CBFD0u; f_800BB800(c); // 800CBFCC
  c->r[4]=c->r[31]|c->r[31]; // 800CBFD0
  c->lr=0x800CBFD8u; f_800BBD58(c); // 800CBFD4
  c->r[4]=0u+0x00000000u; // 800CBFD8
  c->r[5]=0u+0x00000000u; // 800CBFDC
  c->lr=0x800CBFE4u; f_800C7B08(c); // 800CBFE0
  c->lr=0x800CBFE8u; f_800A23BC(c); // 800CBFE4
  c->lr=0x800CBFECu; f_800A23C4(c); // 800CBFE8
  c->r[4]=0u+0x00000000u; // 800CBFEC
  c->lr=0x800CBFF4u; f_800D88CC(c); // 800CBFF0
L_800CBFF4:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800CBFF4
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CBFF8
  cmps(c,0,(int32_t)c->r[0],0); // 800CBFFC
  if (crb(c,2)) { goto L_800CC034; } // 800CC000
  c->r[3]=c->r[30]|c->r[30]; // 800CC004
  c->lr=0x800CC00Cu; f_800CCAF4(c); // 800CC008
  c->r[31]=c->r[3]|c->r[3]; // 800CC00C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC010
  if (crb(c,2)) { goto L_800CC034; } // 800CC014
  c->lr=0x800CC01Cu; f_800A23BC(c); // 800CC018
  c->lr=0x800CC020u; f_800BB800(c); // 800CC01C
  c->r[4]=c->r[31]|c->r[31]; // 800CC020
  c->lr=0x800CC028u; f_800BBD58(c); // 800CC024
  c->r[4]=0u+0x00000000u; // 800CC028
  c->r[5]=0u+0x00000000u; // 800CC02C
  c->lr=0x800CC034u; f_800C7B08(c); // 800CC030
L_800CC034:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC034
  c->lr=0x800CC03Cu; f_800BDEB4(c); // 800CC038
  c->r[0]=0u+0x00000003u; // 800CC03C
  W32(c->r[30]+0x00000054u,c->r[0]); // 800CC040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC044
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CC048
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC04C
  c->lr=c->r[0]; // 800CC050
  c->r[1]=c->r[1]+0x00000010u; // 800CC054
  return; // 800CC058
}

// fn_800CC05C
void f_800CC05C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC05C
  c->r[0]=c->lr; // 800CC060
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CC064
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800CC068
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800CC06C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CC070
  W32(c->r[1]+0x00000048u,c->r[30]); // 800CC074
  W32(c->r[1]+0x00000044u,c->r[29]); // 800CC078
  c->r[29]=c->r[3]|c->r[3]; // 800CC07C
  c->r[30]=c->r[4]|c->r[4]; // 800CC080
  c->f[31]=c->f[1]; // 800CC084
  c->r[31]=c->r[5]|c->r[5]; // 800CC088
  c->r[3]=c->r[1]+0x00000018u; // 800CC08C
  c->lr=0x800CC094u; f_8004B0A4(c); // 800CC090
  cmps(c,0,(int32_t)c->r[31],0); // 800CC094
  if (!crb(c,2)) { goto L_800CC114; } // 800CC098
  c->r[3]=c->r[1]+0x00000018u; // 800CC09C
  c->r[4]=c->r[30]|c->r[30]; // 800CC0A0
  c->r[5]=c->r[29]|c->r[29]; // 800CC0A4
  c->lr=0x800CC0ACu; f_8006000C(c); // 800CC0A8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC0AC
  c->lr=0x800CC0B4u; f_800797BC(c); // 800CC0B0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CC0B4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800CC0B8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800CC0BC
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800CC0C0
  c->r[0]=c->r[0]^0x80000000u; // 800CC0C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC0C8
  c->r[0]=0u+0x43300000u; // 800CC0CC
  W32(c->r[1]+0x00000030u,c->r[0]); // 800CC0D0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800CC0D4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CC0D8
  {uint32_t ea=c->r[2]+0xFFFF8894u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC0DC
  fcmp(c,0,c->f[1],c->f[0]); // 800CC0E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800CC0E4
  if (!crb(c,2)) { goto L_800CC0F4; } // 800CC0E8
  c->r[3]=0u+0x00000000u; // 800CC0EC
  goto L_800CC1FC; // 800CC0F0
L_800CC0F4:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC0F4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800CC0F8
  c->r[3]=c->r[1]+0x00000018u; // 800CC0FC
  c->lr=0x800CC104u; f_8005C170(c); // 800CC100
  fcmp(c,0,c->f[1],c->f[31]); // 800CC104
  if (!crb(c,1)) { goto L_800CC1F8; } // 800CC108
  c->r[3]=0u+0x00000000u; // 800CC10C
  goto L_800CC1FC; // 800CC110
L_800CC114:;
  c->lr=0x800CC118u; f_8007B524(c); // 800CC114
  c->lr=0x800CC11Cu; f_8006E224(c); // 800CC118
  c->lr=0x800CC120u; f_800897A8(c); // 800CC11C
  c->r[4]=c->r[1]+0x00000010u; // 800CC120
  c->r[5]=c->r[30]|c->r[30]; // 800CC124
  c->lr=0x800CC12Cu; f_80068458(c); // 800CC128
  c->lr=0x800CC130u; f_8007B524(c); // 800CC12C
  c->lr=0x800CC134u; f_8006E224(c); // 800CC130
  c->lr=0x800CC138u; f_800897A8(c); // 800CC134
  c->r[4]=c->r[1]+0x00000008u; // 800CC138
  c->r[5]=c->r[29]|c->r[29]; // 800CC13C
  c->lr=0x800CC144u; f_80068458(c); // 800CC140
  c->r[3]=R32(c->r[1]+0x00000010u); // 800CC144
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CC148
  c->r[0]=c->r[0]-c->r[3]; // 800CC14C
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800CC150
  c->r[0]=c->r[0]^0x80000000u; // 800CC154
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC158
  c->r[31]=0u+0x43300000u; // 800CC15C
  W32(c->r[1]+0x00000030u,c->r[31]); // 800CC160
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800CC164
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CC168
  c->lr=0x800CC170u; f_800797BC(c); // 800CC16C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CC170
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800CC174
  c->r[3]=R32(c->r[1]+0x0000002Cu); // 800CC178
  {uint32_t ea=c->r[2]+0xFFFF88C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC17C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800CC180
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CC184
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800CC188
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800CC18C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CC190
  if (!crb(c,1)) { goto L_800CC1A0; } // 800CC194
  c->r[3]=0u+0x00000000u; // 800CC198
  goto L_800CC1FC; // 800CC19C
L_800CC1A0:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 800CC1A0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CC1A4
  c->r[0]=c->r[0]-c->r[3]; // 800CC1A8
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800CC1AC
  c->r[0]=c->r[0]^0x80000000u; // 800CC1B0
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800CC1B4
  W32(c->r[1]+0x00000038u,c->r[31]); // 800CC1B8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 800CC1BC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CC1C0
  c->lr=0x800CC1C8u; f_800797BC(c); // 800CC1C4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CC1C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CC1CC
  c->r[3]=R32(c->r[1]+0x00000034u); // 800CC1D0
  {uint32_t ea=c->r[2]+0xFFFF88C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CC1D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[31]); // 800CC1D8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800CC1DC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800CC1E0
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800CC1E4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CC1E8
  if (!crb(c,1)) { goto L_800CC1F8; } // 800CC1EC
  c->r[3]=0u+0x00000000u; // 800CC1F0
  goto L_800CC1FC; // 800CC1F4
L_800CC1F8:;
  c->r[3]=0u+0x00000001u; // 800CC1F8
L_800CC1FC:;
  c->r[0]=0u+0x00000058u; // 800CC1FC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800CC200
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800CC204
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CC208
  c->r[30]=R32(c->r[1]+0x00000048u); // 800CC20C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800CC210
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CC214
  c->lr=c->r[0]; // 800CC218
  c->r[1]=c->r[1]+0x00000060u; // 800CC21C
  return; // 800CC220
}

// fn_800CC224
void f_800CC224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC224
  c->r[0]=c->lr; // 800CC228
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC22C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC230
  c->r[31]=c->r[3]|c->r[3]; // 800CC234
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CC238
  c->r[0]=rotl(c->r[0],0)&0xBFFFFFFFu; // 800CC23C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CC240
  c->lr=0x800CC248u; f_800A23BC(c); // 800CC244
  c->lr=0x800CC24Cu; f_800A23C8(c); // 800CC248
  c->lr=0x800CC250u; f_800CA774(c); // 800CC24C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC250
  if (crb(c,2)) { goto L_800CC260; } // 800CC254
  c->r[3]=c->r[31]|c->r[31]; // 800CC258
  c->lr=0x800CC260u; f_800CD0E0(c); // 800CC25C
L_800CC260:;
  c->lr=0x800CC264u; f_800A23BC(c); // 800CC260
  c->lr=0x800CC268u; f_800A23C8(c); // 800CC264
  c->lr=0x800CC26Cu; f_800CA75C(c); // 800CC268
  cmps(c,0,(int32_t)c->r[3],0); // 800CC26C
  if (crb(c,2)) { goto L_800CC27C; } // 800CC270
  c->r[3]=c->r[31]|c->r[31]; // 800CC274
  c->lr=0x800CC27Cu; f_800CD0F0(c); // 800CC278
L_800CC27C:;
  c->lr=0x800CC280u; f_800A23BC(c); // 800CC27C
  c->lr=0x800CC284u; f_800A23C8(c); // 800CC280
  c->lr=0x800CC288u; f_800CA744(c); // 800CC284
  cmps(c,0,(int32_t)c->r[3],0); // 800CC288
  if (crb(c,2)) { goto L_800CC298; } // 800CC28C
  c->r[3]=c->r[31]|c->r[31]; // 800CC290
  c->lr=0x800CC298u; f_800CD1DC(c); // 800CC294
L_800CC298:;
  c->lr=0x800CC29Cu; f_800A23BC(c); // 800CC298
  c->lr=0x800CC2A0u; f_800A23C8(c); // 800CC29C
  c->lr=0x800CC2A4u; f_800CA73C(c); // 800CC2A0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC2A4
  if (crb(c,2)) { goto L_800CC2C4; } // 800CC2A8
  c->lr=0x800CC2B0u; f_800A23BC(c); // 800CC2AC
  c->lr=0x800CC2B4u; f_800A23C8(c); // 800CC2B0
  c->lr=0x800CC2B8u; f_800CA73C(c); // 800CC2B4
  c->r[4]=c->r[3]|c->r[3]; // 800CC2B8
  c->r[3]=c->r[31]|c->r[31]; // 800CC2BC
  c->lr=0x800CC2C4u; f_800CD1EC(c); // 800CC2C0
L_800CC2C4:;
  c->lr=0x800CC2C8u; f_800A23BC(c); // 800CC2C4
  c->lr=0x800CC2CCu; f_800A23C8(c); // 800CC2C8
  c->lr=0x800CC2D0u; f_800CA724(c); // 800CC2CC
  cmps(c,0,(int32_t)c->r[3],0); // 800CC2D0
  if (crb(c,2)) { goto L_800CC2E0; } // 800CC2D4
  c->r[3]=c->r[31]|c->r[31]; // 800CC2D8
  c->lr=0x800CC2E0u; f_800CD238(c); // 800CC2DC
L_800CC2E0:;
  c->lr=0x800CC2E4u; f_800A23BC(c); // 800CC2E0
  c->lr=0x800CC2E8u; f_800A23C8(c); // 800CC2E4
  c->lr=0x800CC2ECu; f_800CA714(c); // 800CC2E8
  c->r[3]=0u+0x00000001u; // 800CC2EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC2F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC2F4
  c->lr=c->r[0]; // 800CC2F8
  c->r[1]=c->r[1]+0x00000010u; // 800CC2FC
  return; // 800CC300
}

// fn_800CC304
void f_800CC304(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC304
  c->r[0]=c->lr; // 800CC308
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC30C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC310
  c->r[31]=c->r[3]|c->r[3]; // 800CC314
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CC318
  c->r[0]=rotl(c->r[0],0)&0x04000000u; // 800CC31C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC320
  if (crb(c,2)) { goto L_800CC348; } // 800CC324
  c->r[3]=c->r[3]+0x0000006Cu; // 800CC328
  c->lr=0x800CC330u; f_8007BE34(c); // 800CC32C
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CC330
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 800CC334
  cmps(c,0,(int32_t)c->r[0],0); // 800CC338
  if (crb(c,2)) { goto L_800CC348; } // 800CC33C
  c->lr=0x800CC344u; f_800A23BC(c); // 800CC340
  c->lr=0x800CC348u; f_800C23CC(c); // 800CC344
L_800CC348:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC348
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC34C
  c->lr=c->r[0]; // 800CC350
  c->r[1]=c->r[1]+0x00000010u; // 800CC354
  return; // 800CC358
}

// fn_800CC35C
void f_800CC35C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC35C
  c->r[0]=c->lr; // 800CC360
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC368
  c->r[31]=c->r[3]|c->r[3]; // 800CC36C
  c->lr=0x800CC374u; f_800BDCD0(c); // 800CC370
  c->r[3]=0u+0x80460000u; // 800CC374
  c->r[0]=c->r[3]+0x00000DD8u; // 800CC378
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CC37C
  c->r[3]=c->r[31]+0x0000008Cu; // 800CC380
  c->lr=0x800CC388u; f_8004B0A4(c); // 800CC384
  c->r[3]=c->r[31]|c->r[31]; // 800CC388
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC38C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC390
  c->lr=c->r[0]; // 800CC394
  c->r[1]=c->r[1]+0x00000010u; // 800CC398
  return; // 800CC39C
}

// fn_800CC3A0
void f_800CC3A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC3A0
  c->r[0]=c->lr; // 800CC3A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC3A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC3AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CC3B0
  c->r[30]=c->r[3]|c->r[3]; // 800CC3B4
  c->r[31]=c->r[4]|c->r[4]; // 800CC3B8
  cmps(c,0,(int32_t)c->r[3],0); // 800CC3BC
  if (crb(c,2)) { goto L_800CC3E0; } // 800CC3C0
  c->r[4]=0u+0x00000000u; // 800CC3C4
  c->lr=0x800CC3CCu; f_800BDD24(c); // 800CC3C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CC3CC
  cmps(c,0,(int32_t)c->r[0],0); // 800CC3D0
  if (!crb(c,1)) { goto L_800CC3E0; } // 800CC3D4
  c->r[3]=c->r[30]|c->r[30]; // 800CC3D8
  c->lr=0x800CC3E0u; f_80047B20(c); // 800CC3DC
L_800CC3E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC3E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC3E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CC3E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC3EC
  c->lr=c->r[0]; // 800CC3F0
  c->r[1]=c->r[1]+0x00000010u; // 800CC3F4
  return; // 800CC3F8
}

// fn_800CC3FC
void f_800CC3FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC3FC
  c->r[0]=c->lr; // 800CC400
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC408
  c->r[31]=c->r[3]|c->r[3]; // 800CC40C
  c->r[3]=c->r[3]+0x000000A0u; // 800CC410
  c->r[4]=0u+0x00000000u; // 800CC414
  c->r[5]=0u+0x00000018u; // 800CC418
  c->lr=0x800CC420u; f_800060B8(c); // 800CC41C
  c->r[3]=0u+0x00000000u; // 800CC420
  W32(c->r[31]+0x00000050u,c->r[3]); // 800CC424
  W32(c->r[31]+0x00000054u,c->r[3]); // 800CC428
  W32(c->r[31]+0x00000098u,c->r[3]); // 800CC42C
  W32(c->r[31]+0x0000009Cu,c->r[3]); // 800CC430
  c->r[0]=0u+0xFFFFFFFFu; // 800CC434
  W32(c->r[31]+0x00000058u,c->r[0]); // 800CC438
  W32(c->r[31]+0x000000B8u,c->r[3]); // 800CC43C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC440
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC444
  c->lr=c->r[0]; // 800CC448
  c->r[1]=c->r[1]+0x00000010u; // 800CC44C
  return; // 800CC450
}

// fn_800CC454
void f_800CC454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC454
  c->r[0]=c->lr; // 800CC458
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CC45C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800CC460
  c->r[31]=c->r[3]|c->r[3]; // 800CC464
  c->r[0]=0u+0x00000000u; // 800CC468
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CC46C
  W32(c->r[3]+0x00000054u,c->r[0]); // 800CC470
  c->lr=0x800CC478u; f_800BDEB4(c); // 800CC474
  c->r[4]=c->r[13]+0xFFFF8878u; // 800CC478
  c->r[5]=0u+0x00000006u; // 800CC47C
  c->lr=0x800CC484u; f_802E97E0(c); // 800CC480
  cmps(c,0,(int32_t)c->r[3],0); // 800CC484
  if (!crb(c,2)) { goto L_800CC498; } // 800CC488
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CC48C
  c->r[0]=c->r[0]|0x00200000u; // 800CC490
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CC494
L_800CC498:;
  c->r[3]=c->r[31]|c->r[31]; // 800CC498
  c->lr=0x800CC4A0u; f_800BDEB4(c); // 800CC49C
  c->r[5]=c->r[3]|c->r[3]; // 800CC4A0
  c->r[3]=c->r[1]+0x00000008u; // 800CC4A4
  c->r[4]=c->r[13]+0xFFFF8854u; // 800CC4A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CC4AC
  c->lr=0x800CC4B4u; f_802E7CC4(c); // 800CC4B0
  c->r[3]=c->r[31]|c->r[31]; // 800CC4B4
  c->lr=0x800CC4BCu; f_800BDEB4(c); // 800CC4B8
  c->lr=0x800CC4C0u; f_8007BE8C(c); // 800CC4BC
  cmps(c,0,(int32_t)c->r[3],0); // 800CC4C0
  if (crb(c,2)) { goto L_800CC4D0; } // 800CC4C4
  c->r[3]=c->r[1]+0x00000008u; // 800CC4C8
  c->lr=0x800CC4D0u; f_802F0250(c); // 800CC4CC
L_800CC4D0:;
  c->r[3]=c->r[31]|c->r[31]; // 800CC4D0
  c->lr=0x800CC4D8u; f_800BDEB4(c); // 800CC4D4
  c->r[5]=c->r[3]|c->r[3]; // 800CC4D8
  c->r[3]=c->r[31]+0x0000006Cu; // 800CC4DC
  c->r[4]=c->r[13]+0xFFFF8880u; // 800CC4E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CC4E4
  c->lr=0x800CC4ECu; f_802E7CC4(c); // 800CC4E8
  c->r[3]=c->r[31]+0x0000006Cu; // 800CC4EC
  c->lr=0x800CC4F4u; f_8007BE8C(c); // 800CC4F0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC4F4
  if (crb(c,2)) { goto L_800CC518; } // 800CC4F8
  c->r[3]=c->r[31]+0x0000006Cu; // 800CC4FC
  c->lr=0x800CC504u; f_802F0250(c); // 800CC500
  cmpu(c,0,c->r[3],0x0000000Cu); // 800CC504
  if (crb(c,1)) { goto L_800CC518; } // 800CC508
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CC50C
  c->r[0]=c->r[0]|0x04000000u; // 800CC510
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CC514
L_800CC518:;
  c->r[3]=c->r[31]|c->r[31]; // 800CC518
  c->lr=0x800CC520u; f_800BDEB4(c); // 800CC51C
  c->r[5]=c->r[3]|c->r[3]; // 800CC520
  c->r[3]=c->r[31]+0x0000007Cu; // 800CC524
  c->r[4]=c->r[13]+0xFFFF8888u; // 800CC528
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CC52C
  c->lr=0x800CC534u; f_802E7CC4(c); // 800CC530
  c->r[3]=c->r[31]+0x0000007Cu; // 800CC534
  c->lr=0x800CC53Cu; f_8007BE8C(c); // 800CC538
  cmps(c,0,(int32_t)c->r[3],0); // 800CC53C
  if (crb(c,2)) { goto L_800CC560; } // 800CC540
  c->r[3]=c->r[31]+0x0000007Cu; // 800CC544
  c->lr=0x800CC54Cu; f_802F0250(c); // 800CC548
  cmpu(c,0,c->r[3],0x0000000Cu); // 800CC54C
  if (crb(c,1)) { goto L_800CC560; } // 800CC550
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CC554
  c->r[0]=c->r[0]|0x08000000u; // 800CC558
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CC55C
L_800CC560:;
  c->r[3]=c->r[31]|c->r[31]; // 800CC560
  c->lr=0x800CC568u; f_800BDEB4(c); // 800CC564
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800CC568
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CC56C
  c->lr=c->r[0]; // 800CC570
  c->r[1]=c->r[1]+0x00000050u; // 800CC574
  return; // 800CC578
}

// fn_800CC57C
void f_800CC57C(Ctx* __restrict c) {
  return; // 800CC57C
}

// fn_800CC580
void f_800CC580(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 800CC580
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CC584
  c->r[0]=cntlz(c->r[0]); // 800CC588
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CC58C
  return; // 800CC590
}

// fn_800CC594
void f_800CC594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC594
  c->r[0]=c->lr; // 800CC598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CC59C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CC5A0
  c->r[31]=c->r[3]|c->r[3]; // 800CC5A4
  c->lr=0x800CC5ACu; f_800A23BC(c); // 800CC5A8
  c->lr=0x800CC5B0u; f_800A23B4(c); // 800CC5AC
  c->lr=0x800CC5B4u; f_800DECBC(c); // 800CC5B0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC5B4
  if (!crb(c,2)) { goto L_800CC5C4; } // 800CC5B8
  c->r[3]=0u+0x00000000u; // 800CC5BC
  goto L_800CC630; // 800CC5C0
L_800CC5C4:;
  c->lr=0x800CC5C8u; f_800A23BC(c); // 800CC5C4
  c->lr=0x800CC5CCu; f_800A23C8(c); // 800CC5C8
  c->lr=0x800CC5D0u; f_800CDEF0(c); // 800CC5CC
  cmps(c,0,(int32_t)c->r[3],0); // 800CC5D0
  if (crb(c,2)) { goto L_800CC5E0; } // 800CC5D4
  c->r[3]=0u+0x00000000u; // 800CC5D8
  goto L_800CC630; // 800CC5DC
L_800CC5E0:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 800CC5E0
  c->r[0]=rotl(c->r[3],0)&0x10000000u; // 800CC5E4
  cmps(c,0,(int32_t)c->r[0],0); // 800CC5E8
  if (crb(c,2)) { goto L_800CC5F8; } // 800CC5EC
  c->r[3]=0u+0x00000000u; // 800CC5F0
  goto L_800CC630; // 800CC5F4
L_800CC5F8:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; // 800CC5F8
  cmps(c,0,(int32_t)c->r[0],0); // 800CC5FC
  if (!crb(c,2)) { goto L_800CC60C; } // 800CC600
  c->r[3]=0u+0x00000000u; // 800CC604
  goto L_800CC630; // 800CC608
L_800CC60C:;
  c->r[0]=rotl(c->r[3],0)&0x00010000u; // 800CC60C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC610
  if (!crb(c,2)) { goto L_800CC620; } // 800CC614
  c->r[3]=0u+0x00000000u; // 800CC618
  goto L_800CC630; // 800CC61C
L_800CC620:;
  c->r[3]=rotl(c->r[3],0)&0x00000010u; // 800CC620
  c->r[0]=0u-c->r[3]; // 800CC624
  c->r[0]=c->r[0]|c->r[3]; // 800CC628
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CC62C
L_800CC630:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CC630
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CC634
  c->lr=c->r[0]; // 800CC638
  c->r[1]=c->r[1]+0x00000010u; // 800CC63C
  return; // 800CC640
}

// fn_800CC644
void f_800CC644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC644
  c->r[0]=c->lr; // 800CC648
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC64C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CC650
  W32(c->r[1]+0x00000028u,c->r[30]); // 800CC654
  W32(c->r[1]+0x00000024u,c->r[29]); // 800CC658
  c->r[29]=c->r[3]|c->r[3]; // 800CC65C
  c->r[30]=c->r[4]|c->r[4]; // 800CC660
  c->r[3]=c->r[1]+0x00000008u; // 800CC664
  c->lr=0x800CC66Cu; f_8004B0A4(c); // 800CC668
  c->r[3]=c->r[29]|c->r[29]; // 800CC66C
  c->lr=0x800CC674u; f_800CC594(c); // 800CC670
  cmps(c,0,(int32_t)c->r[3],0); // 800CC674
  if (!crb(c,2)) { goto L_800CC684; } // 800CC678
  c->r[3]=0u+0x00000000u; // 800CC67C
  goto L_800CC790; // 800CC680
L_800CC684:;
  c->r[3]=R32(c->r[29]+0x00000050u); // 800CC684
  c->r[0]=rotl(c->r[3],0)&0x00000100u; // 800CC688
  cmps(c,0,(int32_t)c->r[0],0); // 800CC68C
  if (crb(c,2)) { goto L_800CC70C; } // 800CC690
  c->r[3]=c->r[29]|c->r[29]; // 800CC694
  c->lr=0x800CC69Cu; f_800CCAF4(c); // 800CC698
  c->r[31]=c->r[3]|c->r[3]; // 800CC69C
  cmps(c,0,(int32_t)c->r[3],0); // 800CC6A0
  if (!crb(c,2)) { goto L_800CC6B0; } // 800CC6A4
  c->r[3]=0u+0x00000000u; // 800CC6A8
  goto L_800CC790; // 800CC6AC
L_800CC6B0:;
  c->lr=0x800CC6B4u; f_800A23BC(c); // 800CC6B0
  c->lr=0x800CC6B8u; f_800BB800(c); // 800CC6B4
  c->r[4]=c->r[31]|c->r[31]; // 800CC6B8
  c->lr=0x800CC6C0u; f_800BBD58(c); // 800CC6BC
  c->r[4]=0u+0x80460000u; // 800CC6C0
  c->r[4]=c->r[4]+0x00000060u; // 800CC6C4
  c->r[5]=c->r[1]+0x00000008u; // 800CC6C8
  c->r[6]=0u+0x00000001u; // 800CC6CC
  c->lr=0x800CC6D4u; f_800C6F78(c); // 800CC6D0
  cmps(c,0,(int32_t)c->r[3],0); // 800CC6D4
  if (!crb(c,2)) { goto L_800CC6F4; } // 800CC6D8
  c->lr=0x800CC6E0u; f_800A23BC(c); // 800CC6DC
  c->lr=0x800CC6E4u; f_800BB800(c); // 800CC6E0
  c->r[4]=c->r[31]|c->r[31]; // 800CC6E4
  c->lr=0x800CC6ECu; f_800BBD58(c); // 800CC6E8
  c->r[4]=c->r[1]+0x00000008u; // 800CC6EC
  c->lr=0x800CC6F4u; f_800BD664(c); // 800CC6F0
L_800CC6F4:;
  c->r[3]=c->r[30]|c->r[30]; // 800CC6F4
  c->r[4]=c->r[1]+0x00000008u; // 800CC6F8
  c->r[5]=c->r[29]+0x0000008Cu; // 800CC6FC
  c->lr=0x800CC704u; f_8005C194(c); // 800CC700
  c->r[3]=0u+0x00000001u; // 800CC704
  goto L_800CC790; // 800CC708
L_800CC70C:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; // 800CC70C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC710
  if (crb(c,2)) { goto L_800CC730; } // 800CC714
  c->r[3]=c->r[30]|c->r[30]; // 800CC718
  c->r[4]=c->r[29]+0x000000A8u; // 800CC71C
  c->r[5]=c->r[29]+0x0000008Cu; // 800CC720
  c->lr=0x800CC728u; f_8005C194(c); // 800CC724
  c->r[3]=0u+0x00000001u; // 800CC728
  goto L_800CC790; // 800CC72C
L_800CC730:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; // 800CC730
  cmps(c,0,(int32_t)c->r[0],0); // 800CC734
  if (crb(c,2)) { goto L_800CC76C; } // 800CC738
  c->lr=0x800CC740u; f_800A23BC(c); // 800CC73C
  c->lr=0x800CC744u; f_800BB820(c); // 800CC740
  c->r[4]=R32(c->r[29]+0x000000A8u); // 800CC744
  c->lr=0x800CC74Cu; f_800BF370(c); // 800CC748
  c->r[4]=c->r[1]+0x00000008u; // 800CC74C
  c->lr=0x800CC754u; f_800D054C(c); // 800CC750
  c->r[3]=c->r[30]|c->r[30]; // 800CC754
  c->r[4]=c->r[1]+0x00000008u; // 800CC758
  c->r[5]=c->r[29]+0x0000008Cu; // 800CC75C
  c->lr=0x800CC764u; f_8005C194(c); // 800CC760
  c->r[3]=0u+0x00000001u; // 800CC764
  goto L_800CC790; // 800CC768
L_800CC76C:;
  c->r[0]=rotl(c->r[3],0)&0x00001000u; // 800CC76C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC770
  if (crb(c,2)) { goto L_800CC78C; } // 800CC774
  c->r[3]=c->r[30]|c->r[30]; // 800CC778
  c->r[4]=c->r[29]+0x0000008Cu; // 800CC77C
  c->lr=0x800CC784u; f_8004A65C(c); // 800CC780
  c->r[3]=0u+0x00000001u; // 800CC784
  goto L_800CC790; // 800CC788
L_800CC78C:;
  c->r[3]=0u+0x00000000u; // 800CC78C
L_800CC790:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CC790
  c->r[30]=R32(c->r[1]+0x00000028u); // 800CC794
  c->r[29]=R32(c->r[1]+0x00000024u); // 800CC798
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC79C
  c->lr=c->r[0]; // 800CC7A0
  c->r[1]=c->r[1]+0x00000030u; // 800CC7A4
  return; // 800CC7A8
}

// fn_800CC7AC
void f_800CC7AC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CC7AC
  c->r[0]=rotl(c->r[0],0)&0x00100000u; // 800CC7B0
  cmps(c,0,(int32_t)c->r[0],0); // 800CC7B4
  if (!crb(c,2)) { goto L_800CC7C4; } // 800CC7B8
  c->r[3]=0u+0x00000001u; // 800CC7BC
  return; // 800CC7C0
L_800CC7C4:;
  c->r[4]=R32(c->r[3]+0x000000A0u); // 800CC7C4
  cmps(c,0,(int32_t)c->r[4],0); // 800CC7C8
  if (crb(c,2)) { goto L_800CC7D8; } // 800CC7CC
  c->r[3]=0u+0x00000000u; // 800CC7D0
  f_800BABD0(c); return; // 800CC7D4
L_800CC7D8:;
  c->r[3]=0u+0x00000001u; // 800CC7D8
  return; // 800CC7DC
}

// fn_800CC7E0
void f_800CC7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CC7E0
  c->r[0]=c->lr; // 800CC7E4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CC7E8
  c->r[11]=c->r[1]+0x00000050u; // 800CC7EC
  c->lr=0x800CC7F4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CC7F0
  c->r[30]=c->r[3]|c->r[3]; // 800CC7F4
  c->r[27]=c->r[4]|c->r[4]; // 800CC7F8
  c->r[3]=c->r[1]+0x0000001Cu; // 800CC7FC
  c->lr=0x800CC804u; f_8004B0A4(c); // 800CC800
  c->r[4]=R32(c->r[30]+0x00000050u); // 800CC804
  c->r[0]=rotl(c->r[4],0)&0x000C0000u; // 800CC808
  cmps(c,0,(int32_t)c->r[0],0); // 800CC80C
  if (!crb(c,2)) { goto L_800CC81C; } // 800CC810
  c->r[3]=0u+0x00000001u; // 800CC814
  goto L_800CCADC; // 800CC818
L_800CC81C:;
  c->r[31]=0u+0x00000000u; // 800CC81C
  c->r[3]=rotl(c->r[4],0)&0x00008000u; // 800CC820
  c->r[0]=0u-c->r[3]; // 800CC824
  c->r[0]=c->r[0]|c->r[3]; // 800CC828
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 800CC82C
  c->r[0]=rotl(c->r[4],0)&0x00000100u; // 800CC830
  cmps(c,0,(int32_t)c->r[0],0); // 800CC834
  if (crb(c,2)) { goto L_800CC884; } // 800CC838
  c->r[3]=c->r[30]|c->r[30]; // 800CC83C
  c->lr=0x800CC844u; f_800CCAF4(c); // 800CC840
  c->r[28]=c->r[3]|c->r[3]; // 800CC844
  cmps(c,0,(int32_t)c->r[3],0); // 800CC848
  if (crb(c,2)) { goto L_800CCA50; } // 800CC84C
  c->lr=0x800CC854u; f_800A23BC(c); // 800CC850
  c->lr=0x800CC858u; f_800BB800(c); // 800CC854
  c->r[4]=c->r[28]|c->r[28]; // 800CC858
  c->lr=0x800CC860u; f_800BBD58(c); // 800CC85C
  c->r[4]=c->r[1]+0x0000001Cu; // 800CC860
  c->lr=0x800CC868u; f_800BD664(c); // 800CC864
  c->r[3]=c->r[1]+0x0000001Cu; // 800CC868
  c->r[4]=c->r[27]|c->r[27]; // 800CC86C
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC870
  c->r[5]=c->r[29]|c->r[29]; // 800CC874
  c->lr=0x800CC87Cu; f_800CC05C(c); // 800CC878
  c->r[31]=c->r[3]|c->r[3]; // 800CC87C
  goto L_800CCA50; // 800CC880
L_800CC884:;
  c->r[0]=rotl(c->r[4],0)&0x00000200u; // 800CC884
  cmps(c,0,(int32_t)c->r[0],0); // 800CC888
  if (crb(c,2)) { goto L_800CC8C4; } // 800CC88C
  c->r[3]=c->r[1]+0x00000010u; // 800CC890
  c->r[4]=c->r[30]+0x000000A8u; // 800CC894
  c->lr=0x800CC89Cu; f_800C236C(c); // 800CC898
  c->r[4]=c->r[3]|c->r[3]; // 800CC89C
  c->r[3]=c->r[1]+0x0000001Cu; // 800CC8A0
  c->lr=0x800CC8A8u; f_8004A65C(c); // 800CC8A4
  c->r[3]=c->r[1]+0x0000001Cu; // 800CC8A8
  c->r[4]=c->r[27]|c->r[27]; // 800CC8AC
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CC8B0
  c->r[5]=c->r[29]|c->r[29]; // 800CC8B4
  c->lr=0x800CC8BCu; f_800CC05C(c); // 800CC8B8
  c->r[31]=c->r[3]|c->r[3]; // 800CC8BC
  goto L_800CCA50; // 800CC8C0
L_800CC8C4:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; // 800CC8C4
  cmps(c,0,(int32_t)c->r[0],0); // 800CC8C8
  if (crb(c,2)) { goto L_800CC8EC; } // 800CC8CC
  c->lr=0x800CC8D4u; f_800A23BC(c); // 800CC8D0
  c->lr=0x800CC8D8u; f_800BB820(c); // 800CC8D4
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800CC8D8
  c->lr=0x800CC8E0u; f_800BF370(c); // 800CC8DC
  c->r[4]=c->r[27]|c->r[27]; // 800CC8E0
  c->lr=0x800CC8E8u; f_800D055C(c); // 800CC8E4
  goto L_800CCADC; // 800CC8E8
L_800CC8EC:;
  c->r[0]=rotl(c->r[4],0)&0x00001000u; // 800CC8EC
  cmps(c,0,(int32_t)c->r[0],0); // 800CC8F0
  if (crb(c,2)) { goto L_800CC92C; } // 800CC8F4
  c->r[29]=R32(c->r[30]+0x000000A8u); // 800CC8F8
  cmps(c,0,(int32_t)c->r[29],0); // 800CC8FC
  if (crb(c,0)) { goto L_800CC924; } // 800CC900
  c->lr=0x800CC908u; f_800A23BC(c); // 800CC904
  c->lr=0x800CC90Cu; f_800A23C4(c); // 800CC908
  c->r[4]=c->r[29]|c->r[29]; // 800CC90C
  c->lr=0x800CC914u; f_800D8A14(c); // 800CC910
  cmps(c,0,(int32_t)c->r[3],0); // 800CC914
  if (crb(c,2)) { goto L_800CC924; } // 800CC918
  c->r[3]=0u+0x00000001u; // 800CC91C
  goto L_800CCADC; // 800CC920
L_800CC924:;
  c->r[3]=0u+0x00000000u; // 800CC924
  goto L_800CCADC; // 800CC928
L_800CC92C:;
  c->r[0]=rotl(c->r[4],0)&0x00000800u; // 800CC92C
  cmps(c,0,(int32_t)c->r[0],0); // 800CC930
  if (crb(c,2)) { goto L_800CCA50; } // 800CC934
  c->lr=0x800CC93Cu; f_8007B524(c); // 800CC938
  c->r[4]=c->r[1]+0x00000008u; // 800CC93C
  c->lr=0x800CC944u; f_8009CFD0(c); // 800CC940
  c->lr=0x800CC948u; f_8006E268(c); // 800CC944
  c->lr=0x800CC94Cu; f_8006E244(c); // 800CC948
  c->r[0]=R32(c->r[30]+0x000000A8u); // 800CC94C
  cmpu(c,0,c->r[0],c->r[3]); // 800CC950
  if (crb(c,2)) { goto L_800CC960; } // 800CC954
  c->r[3]=0u+0x00000000u; // 800CC958
  goto L_800CCADC; // 800CC95C
L_800CC960:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CC960
  c->r[0]=R32(c->r[30]+0x000000ACu); // 800CC964
  c->r[28]=c->r[0]-c->r[3]; // 800CC968
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800CC96C
  c->r[0]=c->r[28]^0x80000000u; // 800CC970
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CC974
  c->r[31]=0u+0x43300000u; // 800CC978
  W32(c->r[1]+0x00000028u,c->r[31]); // 800CC97C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800CC980
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CC984
  c->lr=0x800CC98Cu; f_800797BC(c); // 800CC988
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CC98C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CC990
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CC994
  cmps(c,0,(int32_t)c->r[0],1); // 800CC998
  if (!crb(c,1)) { goto L_800CC9A8; } // 800CC99C
  c->r[3]=0u+0x00000000u; // 800CC9A0
  goto L_800CCADC; // 800CC9A4
L_800CC9A8:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CC9A8
  c->r[0]=R32(c->r[30]+0x000000B0u); // 800CC9AC
  c->r[30]=c->r[0]-c->r[3]; // 800CC9B0
  {uint32_t ea=c->r[2]+0xFFFF88B8u; c->f[1]=RF64(ea);} // 800CC9B4
  c->r[0]=c->r[30]^0x80000000u; // 800CC9B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CC9BC
  W32(c->r[1]+0x00000030u,c->r[31]); // 800CC9C0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800CC9C4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800CC9C8
  c->lr=0x800CC9D0u; f_800797BC(c); // 800CC9CC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800CC9D0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800CC9D4
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 800CC9D8
  cmps(c,0,(int32_t)c->r[0],1); // 800CC9DC
  if (!crb(c,1)) { goto L_800CC9EC; } // 800CC9E0
  c->r[3]=0u+0x00000000u; // 800CC9E4
  goto L_800CCADC; // 800CC9E8
L_800CC9EC:;
  c->lr=0x800CC9F0u; f_8007B524(c); // 800CC9EC
  c->lr=0x800CC9F4u; f_8009D0D0(c); // 800CC9F0
  c->r[29]=c->r[3]|c->r[3]; // 800CC9F4
  cmps(c,0,(int32_t)c->r[28],0); // 800CC9F8
  if (!crb(c,2)) { goto L_800CCA08; } // 800CC9FC
  cmps(c,0,(int32_t)c->r[30],0); // 800CCA00
  if (crb(c,2)) { goto L_800CCA48; } // 800CCA04
L_800CCA08:;
  c->lr=0x800CCA0Cu; f_800A23BC(c); // 800CCA08
  c->lr=0x800CCA10u; f_800A23C4(c); // 800CCA0C
  c->r[4]=c->r[29]|c->r[29]; // 800CCA10
  c->lr=0x800CCA18u; f_800D8110(c); // 800CCA14
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 800CCA18
  if (crb(c,2)) { goto L_800CCA28; } // 800CCA1C
  c->r[3]=0u+0x00000000u; // 800CCA20
  goto L_800CCADC; // 800CCA24
L_800CCA28:;
  c->lr=0x800CCA2Cu; f_800A23BC(c); // 800CCA28
  c->lr=0x800CCA30u; f_800A23C4(c); // 800CCA2C
  c->r[4]=c->r[29]|c->r[29]; // 800CCA30
  c->lr=0x800CCA38u; f_800D8138(c); // 800CCA34
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 800CCA38
  if (crb(c,2)) { goto L_800CCA48; } // 800CCA3C
  c->r[3]=0u+0x00000000u; // 800CCA40
  goto L_800CCADC; // 800CCA44
L_800CCA48:;
  c->r[3]=0u+0x00000001u; // 800CCA48
  goto L_800CCADC; // 800CCA4C
L_800CCA50:;
  c->r[3]=R32(c->r[30]+0x00000050u); // 800CCA50
  c->r[0]=rotl(c->r[3],0)&0x00000300u; // 800CCA54
  cmps(c,0,(int32_t)c->r[0],0); // 800CCA58
  if (crb(c,2)) { goto L_800CCAD8; } // 800CCA5C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; // 800CCA60
  cmps(c,0,(int32_t)c->r[0],0); // 800CCA64
  if (!crb(c,2)) { goto L_800CCA8C; } // 800CCA68
  c->lr=0x800CCA70u; f_800A23BC(c); // 800CCA6C
  c->lr=0x800CCA74u; f_800A23C4(c); // 800CCA70
  c->r[4]=c->r[1]+0x0000001Cu; // 800CCA74
  c->lr=0x800CCA7Cu; f_800D83C8(c); // 800CCA78
  cmps(c,0,(int32_t)c->r[3],0); // 800CCA7C
  if (!crb(c,2)) { goto L_800CCAD8; } // 800CCA80
  c->r[3]=0u+0x00000000u; // 800CCA84
  goto L_800CCADC; // 800CCA88
L_800CCA8C:;
  c->lr=0x800CCA90u; f_800A23BC(c); // 800CCA8C
  c->lr=0x800CCA94u; f_800A23C4(c); // 800CCA90
  c->r[4]=c->r[1]+0x0000001Cu; // 800CCA94
  c->lr=0x800CCA9Cu; f_800D82AC(c); // 800CCA98
  cmps(c,0,(int32_t)c->r[3],0); // 800CCA9C
  if (!crb(c,2)) { goto L_800CCAAC; } // 800CCAA0
  c->r[3]=0u+0x00000000u; // 800CCAA4
  goto L_800CCADC; // 800CCAA8
L_800CCAAC:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800CCAAC
  c->r[0]=rotl(c->r[0],0)&0x00800000u; // 800CCAB0
  cmps(c,0,(int32_t)c->r[0],0); // 800CCAB4
  if (crb(c,2)) { goto L_800CCAD8; } // 800CCAB8
  c->lr=0x800CCAC0u; f_8007B524(c); // 800CCABC
  c->lr=0x800CCAC4u; f_8009D0D0(c); // 800CCAC0
  c->r[0]=R32(c->r[30]+0x000000A4u); // 800CCAC4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800CCAC8
  if (crb(c,2)) { goto L_800CCAD8; } // 800CCACC
  c->r[3]=0u+0x00000000u; // 800CCAD0
  goto L_800CCADC; // 800CCAD4
L_800CCAD8:;
  c->r[3]=c->r[31]|c->r[31]; // 800CCAD8
L_800CCADC:;
  c->r[11]=c->r[1]+0x00000050u; // 800CCADC
  c->lr=0x800CCAE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CCAE0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CCAE4
  c->lr=c->r[0]; // 800CCAE8
  c->r[1]=c->r[1]+0x00000050u; // 800CCAEC
  return; // 800CCAF0
}

// fn_800CCAF4
void f_800CCAF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCAF4
  c->r[0]=c->lr; // 800CCAF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CCAFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CCB00
  c->r[31]=c->r[3]|c->r[3]; // 800CCB04
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCB08
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CCB0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CCB10
  if (!crb(c,2)) { goto L_800CCB20; } // 800CCB14
  c->r[3]=0u+0x00000000u; // 800CCB18
  goto L_800CCB84; // 800CCB1C
L_800CCB20:;
  c->lr=0x800CCB24u; f_800A23BC(c); // 800CCB20
  c->lr=0x800CCB28u; f_800BB800(c); // 800CCB24
  c->r[4]=R32(c->r[31]+0x000000A8u); // 800CCB28
  c->lr=0x800CCB30u; f_800C1284(c); // 800CCB2C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCB30
  if (!crb(c,2)) { goto L_800CCB40; } // 800CCB34
  c->r[3]=0u+0x00000000u; // 800CCB38
  goto L_800CCB84; // 800CCB3C
L_800CCB40:;
  c->lr=0x800CCB44u; f_800A23BC(c); // 800CCB40
  c->lr=0x800CCB48u; f_800BB800(c); // 800CCB44
  c->r[4]=R32(c->r[31]+0x000000A8u); // 800CCB48
  c->lr=0x800CCB50u; f_800BBD58(c); // 800CCB4C
  c->lr=0x800CCB54u; f_800C9F80(c); // 800CCB50
  cmps(c,0,(int32_t)c->r[3],0); // 800CCB54
  if (!crb(c,2)) { goto L_800CCB80; } // 800CCB58
  c->lr=0x800CCB60u; f_800A23BC(c); // 800CCB5C
  c->lr=0x800CCB64u; f_800BB800(c); // 800CCB60
  c->r[4]=R32(c->r[31]+0x000000A8u); // 800CCB64
  c->lr=0x800CCB6Cu; f_800BBD58(c); // 800CCB68
  c->lr=0x800CCB70u; f_800BE11C(c); // 800CCB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCB70
  if (!crb(c,2)) { goto L_800CCB80; } // 800CCB74
  c->r[3]=0u+0x00000000u; // 800CCB78
  goto L_800CCB84; // 800CCB7C
L_800CCB80:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800CCB80
L_800CCB84:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CCB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CCB88
  c->lr=c->r[0]; // 800CCB8C
  c->r[1]=c->r[1]+0x00000010u; // 800CCB90
  return; // 800CCB94
}

// fn_800CCB98
void f_800CCB98(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCB98
  c->r[0]=rotl(c->r[0],0)&0x00001000u; // 800CCB9C
  cmps(c,0,(int32_t)c->r[0],0); // 800CCBA0
  if (crb(c,2)) { goto L_800CCBB0; } // 800CCBA4
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800CCBA8
  return; // 800CCBAC
L_800CCBB0:;
  c->r[3]=0u+0x00000000u; // 800CCBB0
  return; // 800CCBB4
}

// fn_800CCBB8
void f_800CCBB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCBB8
  c->r[0]=c->lr; // 800CCBBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCBC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CCBC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CCBC8
  c->r[31]=c->r[3]|c->r[3]; // 800CCBCC
  c->r[3]=c->r[1]+0x00000008u; // 800CCBD0
  c->lr=0x800CCBD8u; f_8004B0A4(c); // 800CCBD4
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CCBD8
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800CCBDC
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CCBE0
  c->lr=0x800CCBE8u; f_8007B524(c); // 800CCBE4
  c->r[4]=c->r[1]+0x00000008u; // 800CCBE8
  c->lr=0x800CCBF0u; f_8009CDA0(c); // 800CCBEC
  c->lr=0x800CCBF4u; f_800A23BC(c); // 800CCBF0
  c->lr=0x800CCBF8u; f_800A23C4(c); // 800CCBF4
  c->lr=0x800CCBFCu; f_800BBF6C(c); // 800CCBF8
  c->r[3]=R32(c->r[31]+0x00000050u); // 800CCBFC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 800CCC00
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC04
  if (crb(c,2)) { goto L_800CCD48; } // 800CCC08
  c->r[0]=rotl(c->r[3],0)&0x10000000u; // 800CCC0C
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC10
  if (!crb(c,2)) { goto L_800CCD48; } // 800CCC14
  c->lr=0x800CCC1Cu; f_800A23BC(c); // 800CCC18
  c->lr=0x800CCC20u; f_800A23B4(c); // 800CCC1C
  c->lr=0x800CCC24u; f_800DECE8(c); // 800CCC20
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC24
  if (!crb(c,2)) { goto L_800CCD48; } // 800CCC28
  c->lr=0x800CCC30u; f_800A23BC(c); // 800CCC2C
  c->lr=0x800CCC34u; f_800A23C8(c); // 800CCC30
  c->lr=0x800CCC38u; f_800CDEF0(c); // 800CCC34
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC38
  if (!crb(c,2)) { goto L_800CCD48; } // 800CCC3C
  c->r[0]=R32(c->r[31]+0x00000054u); // 800CCC40
  cmpu(c,0,c->r[0],0x00000001u); // 800CCC44
  if (crb(c,2)) { goto L_800CCD5C; } // 800CCC48
  cmpu(c,0,c->r[0],0x00000002u); // 800CCC4C
  if (crb(c,2)) { goto L_800CCD5C; } // 800CCC50
  c->r[3]=c->r[31]|c->r[31]; // 800CCC54
  c->lr=0x800CCC5Cu; f_800CC7AC(c); // 800CCC58
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC5C
  if (crb(c,2)) { goto L_800CCD48; } // 800CCC60
  c->r[3]=R32(c->r[31]+0x00000050u); // 800CCC64
  c->r[0]=rotl(c->r[3],0)&0x000C0000u; // 800CCC68
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC6C
  if (crb(c,2)) { goto L_800CCC80; } // 800CCC70
  c->r[0]=rotl(c->r[3],0)&0x00000010u; // 800CCC74
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC78
  if (crb(c,2)) { goto L_800CCD48; } // 800CCC7C
L_800CCC80:;
  c->r[0]=rotl(c->r[3],0)&0x00010000u; // 800CCC80
  cmps(c,0,(int32_t)c->r[0],0); // 800CCC84
  if (crb(c,2)) { goto L_800CCCC8; } // 800CCC88
  c->lr=0x800CCC90u; f_800A23BC(c); // 800CCC8C
  c->lr=0x800CCC94u; f_800A23C4(c); // 800CCC90
  c->lr=0x800CCC98u; f_800D8188(c); // 800CCC94
  cmps(c,0,(int32_t)c->r[3],0); // 800CCC98
  if (crb(c,2)) { goto L_800CCD48; } // 800CCC9C
  c->lr=0x800CCCA4u; f_800A23BC(c); // 800CCCA0
  c->lr=0x800CCCA8u; f_800A23C4(c); // 800CCCA4
  c->lr=0x800CCCACu; f_800CA1FC(c); // 800CCCA8
  c->r[30]=c->r[3]|c->r[3]; // 800CCCAC
  cmps(c,0,(int32_t)c->r[3],0); // 800CCCB0
  if (crb(c,2)) { goto L_800CCCC8; } // 800CCCB4
  c->r[3]=c->r[31]|c->r[31]; // 800CCCB8
  c->lr=0x800CCCC0u; f_800BDE68(c); // 800CCCBC
  cmpu(c,0,c->r[30],c->r[3]); // 800CCCC0
  if (!crb(c,2)) { goto L_800CCD48; } // 800CCCC4
L_800CCCC8:;
  c->r[3]=c->r[31]|c->r[31]; // 800CCCC8
  c->lr=0x800CCCD0u; f_800CCAF4(c); // 800CCCCC
  c->r[30]=c->r[3]|c->r[3]; // 800CCCD0
  cmps(c,0,(int32_t)c->r[3],0); // 800CCCD4
  if (crb(c,2)) { goto L_800CCCF0; } // 800CCCD8
  c->lr=0x800CCCE0u; f_800A23BC(c); // 800CCCDC
  c->lr=0x800CCCE4u; f_800A23C4(c); // 800CCCE0
  c->lr=0x800CCCE8u; f_800CA1F4(c); // 800CCCE4
  cmpu(c,0,c->r[30],c->r[3]); // 800CCCE8
  if (!crb(c,2)) { goto L_800CCD48; } // 800CCCEC
L_800CCCF0:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CCCF0
  c->r[0]=rotl(c->r[0],0)&0x04000000u; // 800CCCF4
  cmps(c,0,(int32_t)c->r[0],0); // 800CCCF8
  if (crb(c,2)) { goto L_800CCD30; } // 800CCCFC
  c->lr=0x800CCD04u; f_800A23BC(c); // 800CCD00
  c->lr=0x800CCD08u; f_800A23C8(c); // 800CCD04
  c->lr=0x800CCD0Cu; f_800CA714(c); // 800CCD08
  c->r[3]=c->r[31]+0x0000006Cu; // 800CCD0C
  c->lr=0x800CCD14u; f_8007BE34(c); // 800CCD10
  c->lr=0x800CCD18u; f_800A23BC(c); // 800CCD14
  c->lr=0x800CCD1Cu; f_800A23C8(c); // 800CCD18
  c->lr=0x800CCD20u; f_800CA78C(c); // 800CCD1C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCD20
  if (crb(c,2)) { goto L_800CCD48; } // 800CCD24
  c->r[3]=c->r[31]|c->r[31]; // 800CCD28
  c->lr=0x800CCD30u; f_800CC224(c); // 800CCD2C
L_800CCD30:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 800CCD30
  cmps(c,0,(int32_t)c->r[0],0); // 800CCD34
  if (!crb(c,2)) { goto L_800CCD5C; } // 800CCD38
  c->r[0]=0u+0x00000001u; // 800CCD3C
  W32(c->r[31]+0x00000054u,c->r[0]); // 800CCD40
  goto L_800CCD5C; // 800CCD44
L_800CCD48:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800CCD48
  c->r[0]=c->r[0]|0x00004000u; // 800CCD4C
  W32(c->r[31]+0x00000050u,c->r[0]); // 800CCD50
  c->r[0]=0u+0x00000000u; // 800CCD54
  W32(c->r[31]+0x00000054u,c->r[0]); // 800CCD58
L_800CCD5C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CCD5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CCD60
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCD64
  c->lr=c->r[0]; // 800CCD68
  c->r[1]=c->r[1]+0x00000020u; // 800CCD6C
  return; // 800CCD70
}

// fn_800CCD74
void f_800CCD74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCD74
  c->r[0]=c->lr; // 800CCD78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCD7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CCD80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CCD84
  c->r[30]=c->r[3]|c->r[3]; // 800CCD88
  c->r[3]=c->r[1]+0x00000008u; // 800CCD8C
  c->lr=0x800CCD94u; f_8004B0A4(c); // 800CCD90
  c->r[0]=R32(c->r[30]+0x00000050u); // 800CCD94
  c->r[0]=rotl(c->r[0],0)&0x00000100u; // 800CCD98
  cmps(c,0,(int32_t)c->r[0],0); // 800CCD9C
  if (crb(c,2)) { goto L_800CCDDC; } // 800CCDA0
  c->lr=0x800CCDA8u; f_800A23BC(c); // 800CCDA4
  c->lr=0x800CCDACu; f_800BB800(c); // 800CCDA8
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800CCDAC
  c->lr=0x800CCDB4u; f_800C1284(c); // 800CCDB0
  cmps(c,0,(int32_t)c->r[3],0); // 800CCDB4
  if (!crb(c,2)) { goto L_800CCDDC; } // 800CCDB8
  c->r[3]=c->r[30]|c->r[30]; // 800CCDBC
  c->lr=0x800CCDC4u; f_800BDE68(c); // 800CCDC0
  c->r[31]=c->r[3]|c->r[3]; // 800CCDC4
  c->lr=0x800CCDCCu; f_800A23BC(c); // 800CCDC8
  c->lr=0x800CCDD0u; f_800A23C8(c); // 800CCDCC
  c->r[4]=c->r[31]|c->r[31]; // 800CCDD0
  c->lr=0x800CCDD8u; f_800CDE90(c); // 800CCDD4
  goto L_800CCEAC; // 800CCDD8
L_800CCDDC:;
  c->r[0]=R32(c->r[30]+0x00000050u); // 800CCDDC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CCDE0
  W32(c->r[30]+0x00000050u,c->r[0]); // 800CCDE4
  c->lr=0x800CCDECu; f_8007B524(c); // 800CCDE8
  c->r[4]=c->r[1]+0x00000008u; // 800CCDEC
  c->lr=0x800CCDF4u; f_8009CDA0(c); // 800CCDF0
  c->lr=0x800CCDF8u; f_800A23BC(c); // 800CCDF4
  c->lr=0x800CCDFCu; f_800A23C4(c); // 800CCDF8
  c->lr=0x800CCE00u; f_800BBF6C(c); // 800CCDFC
  c->r[31]=c->r[3]|c->r[3]; // 800CCE00
  cmps(c,0,(int32_t)c->r[3],0); // 800CCE04
  if (crb(c,2)) { goto L_800CCEAC; } // 800CCE08
  c->lr=0x800CCE10u; f_800A23BC(c); // 800CCE0C
  c->lr=0x800CCE14u; f_800BB800(c); // 800CCE10
  c->r[4]=c->r[31]|c->r[31]; // 800CCE14
  c->lr=0x800CCE1Cu; f_800BBD58(c); // 800CCE18
  c->r[4]=c->r[1]+0x00000008u; // 800CCE1C
  c->lr=0x800CCE24u; f_800BD664(c); // 800CCE20
  c->r[3]=R32(c->r[30]+0x00000050u); // 800CCE24
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 800CCE28
  cmps(c,0,(int32_t)c->r[0],0); // 800CCE2C
  if (crb(c,2)) { goto L_800CCEAC; } // 800CCE30
  c->r[0]=rotl(c->r[3],0)&0x10000000u; // 800CCE34
  cmps(c,0,(int32_t)c->r[0],0); // 800CCE38
  if (!crb(c,2)) { goto L_800CCEAC; } // 800CCE3C
  c->lr=0x800CCE44u; f_800A23BC(c); // 800CCE40
  c->lr=0x800CCE48u; f_800A23B4(c); // 800CCE44
  c->lr=0x800CCE4Cu; f_800DECE8(c); // 800CCE48
  cmps(c,0,(int32_t)c->r[3],0); // 800CCE4C
  if (!crb(c,2)) { goto L_800CCEAC; } // 800CCE50
  c->lr=0x800CCE58u; f_800A23BC(c); // 800CCE54
  c->lr=0x800CCE5Cu; f_800A23C8(c); // 800CCE58
  c->lr=0x800CCE60u; f_800CDEF0(c); // 800CCE5C
  cmps(c,0,(int32_t)c->r[3],0); // 800CCE60
  if (!crb(c,2)) { goto L_800CCEAC; } // 800CCE64
  c->r[0]=R32(c->r[30]+0x00000054u); // 800CCE68
  cmpu(c,0,c->r[0],0x00000001u); // 800CCE6C
  if (crb(c,2)) { goto L_800CCEAC; } // 800CCE70
  cmpu(c,0,c->r[0],0x00000002u); // 800CCE74
  if (crb(c,2)) { goto L_800CCEAC; } // 800CCE78
  c->r[3]=c->r[30]|c->r[30]; // 800CCE7C
  c->lr=0x800CCE84u; f_800CC7AC(c); // 800CCE80
  cmps(c,0,(int32_t)c->r[3],0); // 800CCE84
  if (crb(c,2)) { goto L_800CCEAC; } // 800CCE88
  c->r[3]=c->r[30]|c->r[30]; // 800CCE8C
  c->r[4]=c->r[1]+0x00000008u; // 800CCE90
  c->lr=0x800CCE98u; f_800CC7E0(c); // 800CCE94
  cmps(c,0,(int32_t)c->r[3],0); // 800CCE98
  if (crb(c,2)) { goto L_800CCEAC; } // 800CCE9C
  c->r[0]=R32(c->r[30]+0x00000050u); // 800CCEA0
  c->r[0]=c->r[0]|0x00000010u; // 800CCEA4
  W32(c->r[30]+0x00000050u,c->r[0]); // 800CCEA8
L_800CCEAC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CCEAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CCEB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCEB4
  c->lr=c->r[0]; // 800CCEB8
  c->r[1]=c->r[1]+0x00000020u; // 800CCEBC
  return; // 800CCEC0
}

// fn_800CCEC4
void f_800CCEC4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800CCEC4
  if (crb(c,2)) { goto L_800CCEDC; } // 800CCEC8
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCECC
  c->r[0]=c->r[0]|0x10000000u; // 800CCED0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCED4
  return; // 800CCED8
L_800CCEDC:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCEDC
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800CCEE0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCEE4
  return; // 800CCEE8
}

// fn_800CCEEC
void f_800CCEEC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x000000B8u); // 800CCEEC
  c->ctr=c->r[12]; // 800CCEF0
  if (true) { dispatch(c,c->ctr); return; } // 800CCEF4
}

// fn_800CCEF8
void f_800CCEF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CCEF8
  c->r[0]=c->lr; // 800CCEFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CCF00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CCF04
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CCF08
  c->r[30]=c->r[3]|c->r[3]; // 800CCF0C
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCF10
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800CCF14
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCF18
  c->lr=0x800CCF20u; f_800BDEB4(c); // 800CCF1C
  c->r[31]=c->r[3]|c->r[3]; // 800CCF20
  c->r[4]=0u+0x0000002Du; // 800CCF24
  c->lr=0x800CCF2Cu; f_800C2CF8(c); // 800CCF28
  c->r[0]=0u+0xFFFFFFFFu; // 800CCF2C
  W32(c->r[30]+0x00000058u,c->r[0]); // 800CCF30
  cmps(c,0,(int32_t)c->r[3],0); // 800CCF34
  if (crb(c,2)) { goto L_800CCF6C; } // 800CCF38
  c->r[3]=c->r[31]|c->r[31]; // 800CCF3C
  c->r[4]=c->r[13]+0xFFFF8890u; // 800CCF40
  c->r[5]=c->r[1]+0x0000000Cu; // 800CCF44
  c->r[6]=c->r[1]+0x00000008u; // 800CCF48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CCF4C
  c->lr=0x800CCF54u; f_802E93D0(c); // 800CCF50
  c->r[3]=R32(c->r[1]+0x00000008u); // 800CCF54
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CCF58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 800CCF5C
  c->r[0]=c->r[3]+c->r[0]; // 800CCF60
  W32(c->r[30]+0x00000058u,c->r[0]); // 800CCF64
  goto L_800CCF88; // 800CCF68
L_800CCF6C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CCF6C
  c->r[4]=c->r[13]+0xFFFF8898u; // 800CCF70
  c->r[5]=c->r[1]+0x0000000Cu; // 800CCF74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CCF78
  c->lr=0x800CCF80u; f_802E93D0(c); // 800CCF7C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CCF80
  W32(c->r[30]+0x00000058u,c->r[0]); // 800CCF84
L_800CCF88:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CCF88
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CCF8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CCF90
  c->lr=c->r[0]; // 800CCF94
  c->r[1]=c->r[1]+0x00000020u; // 800CCF98
  return; // 800CCF9C
}

// fn_800CCFA0
void f_800CCFA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCFA0
  c->r[0]=c->r[0]|0x00000002u; // 800CCFA4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFA8
  return; // 800CCFAC
}

// fn_800CCFB0
void f_800CCFB0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCFB0
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800CCFB4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFB8
  c->r[0]=c->r[0]|0x00000100u; // 800CCFBC
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFC0
  c->r[0]=c->r[0]|0x00040000u; // 800CCFC4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFC8
  W32(c->r[3]+0x000000A8u,c->r[4]); // 800CCFCC
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[1]);} // 800CCFD0
  return; // 800CCFD4
}

// fn_800CCFD8
void f_800CCFD8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CCFD8
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800CCFDC
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFE0
  c->r[0]=c->r[0]|0x00000200u; // 800CCFE4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFE8
  c->r[0]=c->r[0]|0x00040000u; // 800CCFEC
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CCFF0
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[1]);} // 800CCFF4
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[2]);} // 800CCFF8
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[3]);} // 800CCFFC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[4]);} // 800CD000
  return; // 800CD004
}

// fn_800CD008
void f_800CD008(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD008
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800CD00C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD010
  c->r[0]=c->r[0]|0x00000400u; // 800CD014
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD018
  W32(c->r[3]+0x000000A8u,c->r[4]); // 800CD01C
  return; // 800CD020
}

// fn_800CD024
void f_800CD024(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD024
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800CD028
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD02C
  c->r[0]=c->r[0]|0x00000800u; // 800CD030
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD034
  c->r[0]=c->r[0]|0x00040000u; // 800CD038
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD03C
  W32(c->r[3]+0x000000A8u,c->r[4]); // 800CD040
  W32(c->r[3]+0x000000ACu,c->r[5]); // 800CD044
  W32(c->r[3]+0x000000B0u,c->r[6]); // 800CD048
  return; // 800CD04C
}

// fn_800CD050
void f_800CD050(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD050
  c->r[0]=rotl(c->r[0],0)&0xEFFFFFFFu; // 800CD054
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD058
  c->r[0]=c->r[0]|0x00001000u; // 800CD05C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD060
  W32(c->r[3]+0x000000A8u,c->r[4]); // 800CD064
  return; // 800CD068
}

// fn_800CD06C
void f_800CD06C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800CD06C
  if (!crb(c,2)) { goto L_800CD08C; } // 800CD070
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD074
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 800CD078
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD07C
  c->r[0]=0u+0x00000000u; // 800CD080
  W32(c->r[3]+0x000000A0u,c->r[0]); // 800CD084
  return; // 800CD088
L_800CD08C:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD08C
  c->r[0]=c->r[0]|0x00100000u; // 800CD090
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD094
  W32(c->r[3]+0x000000A0u,c->r[4]); // 800CD098
  return; // 800CD09C
}

// fn_800CD0A0
void f_800CD0A0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD0A0
  c->r[0]=c->r[0]|0x00010000u; // 800CD0A4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD0A8
  return; // 800CD0AC
}

// fn_800CD0B0
void f_800CD0B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD0B0
  c->r[0]=c->r[0]|0x00020000u; // 800CD0B4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD0B8
  return; // 800CD0BC
}

// fn_800CD0C0
void f_800CD0C0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD0C0
  c->r[0]=c->r[0]|0x00040000u; // 800CD0C4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD0C8
  return; // 800CD0CC
}

// fn_800CD0D0
void f_800CD0D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD0D0
  c->r[0]=c->r[0]|0x00080000u; // 800CD0D4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD0D8
  return; // 800CD0DC
}

// fn_800CD0E0
void f_800CD0E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD0E0
  c->r[0]=c->r[0]|0x00000001u; // 800CD0E4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD0E8
  return; // 800CD0EC
}

// fn_800CD0F0
void f_800CD0F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD0F0
  c->r[0]=c->r[0]|0x00000004u; // 800CD0F4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD0F8
  return; // 800CD0FC
}

// fn_800CD100
void f_800CD100(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD100
  c->r[0]=c->r[0]|0x00000008u; // 800CD104
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD108
  return; // 800CD10C
}

// fn_800CD110
void f_800CD110(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD110
  c->r[0]=c->r[0]|0x00200000u; // 800CD114
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD118
  return; // 800CD11C
}

// fn_800CD120
void f_800CD120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD120
  c->r[0]=c->lr; // 800CD124
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD12C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD130
  c->r[30]=c->r[3]|c->r[3]; // 800CD134
  c->r[31]=c->r[4]|c->r[4]; // 800CD138
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD13C
  c->r[0]=c->r[0]|0x01000000u; // 800CD140
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD144
  c->r[3]=c->r[31]|c->r[31]; // 800CD148
  c->lr=0x800CD150u; f_802F0250(c); // 800CD14C
  c->r[3]=c->r[30]+0x0000005Cu; // 800CD150
  c->r[4]=c->r[31]|c->r[31]; // 800CD154
  c->lr=0x800CD15Cu; f_802E9548(c); // 800CD158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD15C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD160
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD164
  c->lr=c->r[0]; // 800CD168
  c->r[1]=c->r[1]+0x00000010u; // 800CD16C
  return; // 800CD170
}

// fn_800CD174
void f_800CD174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD174
  c->r[0]=c->lr; // 800CD178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD17C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD180
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD184
  c->r[30]=c->r[3]|c->r[3]; // 800CD188
  c->r[31]=c->r[4]|c->r[4]; // 800CD18C
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD190
  c->r[0]=c->r[0]|0x02000000u; // 800CD194
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD198
  c->r[3]=c->r[31]|c->r[31]; // 800CD19C
  c->lr=0x800CD1A4u; f_802F0250(c); // 800CD1A0
  c->r[3]=c->r[30]+0x0000005Cu; // 800CD1A4
  c->r[4]=c->r[31]|c->r[31]; // 800CD1A8
  c->lr=0x800CD1B0u; f_802E9548(c); // 800CD1AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD1B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD1B8
  c->lr=c->r[0]; // 800CD1BC
  c->r[1]=c->r[1]+0x00000010u; // 800CD1C0
  return; // 800CD1C4
}

// fn_800CD1C8
void f_800CD1C8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD1C8
  c->r[0]=c->r[0]|0x00000020u; // 800CD1CC
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD1D0
  c->r[3]=c->r[3]+0x0000008Cu; // 800CD1D4
  f_8004A65C(c); return; // 800CD1D8
}

// fn_800CD1DC
void f_800CD1DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD1DC
  c->r[0]=c->r[0]|0x00000040u; // 800CD1E0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD1E4
  return; // 800CD1E8
}

// fn_800CD1EC
void f_800CD1EC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD1EC
  c->r[0]=c->r[0]|0x00000080u; // 800CD1F0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD1F4
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 800CD1F8
  return; // 800CD1FC
}

// fn_800CD200
void f_800CD200(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD200
  c->r[0]=c->r[0]|0x00002000u; // 800CD204
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD208
  W32(c->r[3]+0x000000B8u,c->r[4]); // 800CD20C
  return; // 800CD210
}

// fn_800CD214
void f_800CD214(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD214
  c->r[0]=c->r[0]|0x00800000u; // 800CD218
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD21C
  W32(c->r[3]+0x000000A4u,c->r[4]); // 800CD220
  return; // 800CD224
}

// fn_800CD228
void f_800CD228(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD228
  c->r[0]=c->r[0]|0x00008000u; // 800CD22C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD230
  return; // 800CD234
}

// fn_800CD238
void f_800CD238(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CD238
  c->r[0]=c->r[0]|0x40000000u; // 800CD23C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CD240
  return; // 800CD244
}

// fn_800CD248
void f_800CD248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD248
  c->r[0]=c->lr; // 800CD24C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD250
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD254
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD258
  c->r[30]=c->r[3]|c->r[3]; // 800CD25C
  c->r[31]=R32(c->r[3]+0x00000274u); // 800CD260
  cmps(c,0,(int32_t)c->r[31],0); // 800CD264
  if (crb(c,2)) { goto L_800CD288; } // 800CD268
  c->lr=0x800CD270u; f_800A23BC(c); // 800CD26C
  c->lr=0x800CD274u; f_800A23C8(c); // 800CD270
  c->r[4]=c->r[31]|c->r[31]; // 800CD274
  c->lr=0x800CD27Cu; f_800BBBC0(c); // 800CD278
  c->r[0]=0u+0x00000001u; // 800CD27C
  W32(c->r[30]+0x0000027Cu,c->r[0]); // 800CD280
  c->lr=0x800CD288u; f_800CC304(c); // 800CD284
L_800CD288:;
  c->lr=0x800CD28Cu; f_800A23BC(c); // 800CD288
  c->lr=0x800CD290u; f_800A23C4(c); // 800CD28C
  c->r[4]=0u+0x00000001u; // 800CD290
  c->lr=0x800CD298u; f_800D88CC(c); // 800CD294
  c->lr=0x800CD29Cu; f_800A23BC(c); // 800CD298
  c->lr=0x800CD2A0u; f_800A23C4(c); // 800CD29C
  c->lr=0x800CD2A4u; f_800CA204(c); // 800CD2A0
  c->lr=0x800CD2A8u; f_800A23BC(c); // 800CD2A4
  c->lr=0x800CD2ACu; f_800E2328(c); // 800CD2A8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD2AC
  if (crb(c,2)) { goto L_800CD2C0; } // 800CD2B0
  c->lr=0x800CD2B8u; f_800A23BC(c); // 800CD2B4
  c->r[4]=0u+0x00000000u; // 800CD2B8
  c->lr=0x800CD2C0u; f_800E2514(c); // 800CD2BC
L_800CD2C0:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CD2C0
  c->r[0]=rotl(c->r[0],0)&0x00800000u; // 800CD2C4
  cmps(c,0,(int32_t)c->r[0],0); // 800CD2C8
  if (crb(c,2)) { goto L_800CD34C; } // 800CD2CC
  c->lr=0x800CD2D4u; f_8006E268(c); // 800CD2D0
  c->lr=0x800CD2D8u; f_80073690(c); // 800CD2D4
  cmps(c,0,(int32_t)c->r[3],4); // 800CD2D8
  if (!crb(c,2)) { goto L_800CD334; } // 800CD2DC
  c->lr=0x800CD2E4u; f_800A23BC(c); // 800CD2E0
  c->lr=0x800CD2E8u; f_800A23B4(c); // 800CD2E4
  c->r[4]=0u+0x00000000u; // 800CD2E8
  c->lr=0x800CD2F0u; f_800DB448(c); // 800CD2EC
  c->r[31]=c->r[3]|c->r[3]; // 800CD2F0
  c->lr=0x800CD2F8u; f_800A23BC(c); // 800CD2F4
  c->lr=0x800CD2FCu; f_800A23B4(c); // 800CD2F8
  c->r[4]=c->r[31]|c->r[31]; // 800CD2FC
  c->r[5]=0u+0x00000000u; // 800CD300
  c->lr=0x800CD308u; f_800DB5BC(c); // 800CD304
  c->lr=0x800CD30Cu; f_800A23BC(c); // 800CD308
  c->lr=0x800CD310u; f_800A23B4(c); // 800CD30C
  c->r[4]=0u+0x00000001u; // 800CD310
  c->lr=0x800CD318u; f_800DB448(c); // 800CD314
  c->r[31]=c->r[3]|c->r[3]; // 800CD318
  c->lr=0x800CD320u; f_800A23BC(c); // 800CD31C
  c->lr=0x800CD324u; f_800A23B4(c); // 800CD320
  c->r[4]=c->r[31]|c->r[31]; // 800CD324
  c->r[5]=0u+0x00000001u; // 800CD328
  c->lr=0x800CD330u; f_800DB5BC(c); // 800CD32C
  goto L_800CD340; // 800CD330
L_800CD334:;
  c->lr=0x800CD338u; f_8007B524(c); // 800CD334
  c->r[4]=R32(c->r[30]+0x0000024Cu); // 800CD338
  c->lr=0x800CD340u; f_800A08C4(c); // 800CD33C
L_800CD340:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CD340
  c->r[0]=rotl(c->r[0],0)&0xFF7FFFFFu; // 800CD344
  W32(c->r[30]+0x00000028u,c->r[0]); // 800CD348
L_800CD34C:;
  c->r[31]=0u+0x00000000u; // 800CD34C
  W32(c->r[30]+0x00000278u,c->r[31]); // 800CD350
  c->r[3]=c->r[30]+0x0000002Cu; // 800CD354
  c->r[4]=0u+0x00000000u; // 800CD358
  c->lr=0x800CD360u; f_800BB8E4(c); // 800CD35C
  W32(c->r[30]+0x00000274u,c->r[31]); // 800CD360
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD364
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD368
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD36C
  c->lr=c->r[0]; // 800CD370
  c->r[1]=c->r[1]+0x00000010u; // 800CD374
  return; // 800CD378
}

// fn_800CD37C
void f_800CD37C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD37C
  c->r[0]=c->lr; // 800CD380
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD388
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD38C
  c->r[30]=c->r[3]|c->r[3]; // 800CD390
  c->r[0]=R32(c->r[3]+0x00000300u); // 800CD394
  cmps(c,0,(int32_t)c->r[0],2); // 800CD398
  if (crb(c,2)) { goto L_800CD454; } // 800CD39C
  if (!crb(c,0)) { goto L_800CD4A8; } // 800CD3A0
  cmps(c,0,(int32_t)c->r[0],0); // 800CD3A4
  if (crb(c,2)) { goto L_800CD3B8; } // 800CD3A8
  if (!crb(c,0)) { goto L_800CD440; } // 800CD3AC
  goto L_800CD4A8; // 800CD3B0
  goto L_800CD4A8; // 800CD3B4
L_800CD3B8:;
  c->r[0]=R32(c->r[3]+0x00000314u); // 800CD3B8
  cmps(c,0,(int32_t)c->r[0],0); // 800CD3BC
  if (crb(c,2)) { goto L_800CD42C; } // 800CD3C0
  c->lr=0x800CD3C8u; f_800A23BC(c); // 800CD3C4
  c->lr=0x800CD3CCu; f_800BB828(c); // 800CD3C8
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800CD3CC
  c->lr=0x800CD3D4u; f_800BB9DC(c); // 800CD3D0
  c->r[31]=c->r[3]|c->r[3]; // 800CD3D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD3D8
  if (crb(c,2)) { goto L_800CD400; } // 800CD3DC
  c->lr=0x800CD3E4u; f_800A23BC(c); // 800CD3E0
  c->lr=0x800CD3E8u; f_800BB828(c); // 800CD3E4
  c->r[4]=c->r[31]|c->r[31]; // 800CD3E8
  c->lr=0x800CD3F0u; f_800BB99C(c); // 800CD3EC
  c->lr=0x800CD3F4u; f_800CFA4C(c); // 800CD3F0
  c->r[0]=R32(c->r[30]+0x00000304u); // 800CD3F4
  cmpu(c,0,c->r[0],c->r[3]); // 800CD3F8
  if (crb(c,2)) { goto L_800CD4A8; } // 800CD3FC
L_800CD400:;
  c->lr=0x800CD404u; f_800A23BC(c); // 800CD400
  c->lr=0x800CD408u; f_800A23B4(c); // 800CD404
  c->r[4]=R32(c->r[30]+0x00000304u); // 800CD408
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD40C
  c->r[5]=0u+0x00000000u; // 800CD410
  c->lr=0x800CD418u; f_800DE760(c); // 800CD414
  c->lr=0x800CD41Cu; f_800A23BC(c); // 800CD418
  c->lr=0x800CD420u; f_800A23B4(c); // 800CD41C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD420
  c->lr=0x800CD428u; f_800CF578(c); // 800CD424
  goto L_800CD4A8; // 800CD428
L_800CD42C:;
  c->lr=0x800CD430u; f_800A23BC(c); // 800CD42C
  c->lr=0x800CD434u; f_800A23B4(c); // 800CD430
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD434
  c->lr=0x800CD43Cu; f_800DE82C(c); // 800CD438
  goto L_800CD4A8; // 800CD43C
L_800CD440:;
  c->lr=0x800CD444u; f_800A23BC(c); // 800CD440
  c->lr=0x800CD448u; f_800A23B4(c); // 800CD444
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD448
  c->lr=0x800CD450u; f_800DE82C(c); // 800CD44C
  goto L_800CD4A8; // 800CD450
L_800CD454:;
  c->lr=0x800CD458u; f_800A23BC(c); // 800CD454
  c->lr=0x800CD45Cu; f_800A23B4(c); // 800CD458
  c->lr=0x800CD460u; f_800A2410(c); // 800CD45C
  c->r[31]=c->r[3]|c->r[3]; // 800CD460
  c->lr=0x800CD468u; f_800A23BC(c); // 800CD464
  c->lr=0x800CD46Cu; f_800A23B4(c); // 800CD468
  c->r[4]=c->r[31]|c->r[31]; // 800CD46C
  c->lr=0x800CD474u; f_800E0E04(c); // 800CD470
  c->r[31]=c->r[3]|c->r[3]; // 800CD474
  cmps(c,0,(int32_t)c->r[3],0); // 800CD478
  if (crb(c,0)) { goto L_800CD4A8; } // 800CD47C
  c->lr=0x800CD484u; f_800A23BC(c); // 800CD480
  c->lr=0x800CD488u; f_800A23B4(c); // 800CD484
  c->r[4]=c->r[31]|c->r[31]; // 800CD488
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD48C
  c->r[5]=0u+0x00000000u; // 800CD490
  c->lr=0x800CD498u; f_800DE760(c); // 800CD494
  c->lr=0x800CD49Cu; f_800A23BC(c); // 800CD498
  c->lr=0x800CD4A0u; f_800A23B4(c); // 800CD49C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CD4A0
  c->lr=0x800CD4A8u; f_800CF578(c); // 800CD4A4
L_800CD4A8:;
  c->lr=0x800CD4ACu; f_800A23BC(c); // 800CD4A8
  c->lr=0x800CD4B0u; f_800BB818(c); // 800CD4AC
  c->r[4]=0u+0x00000001u; // 800CD4B0
  c->lr=0x800CD4B8u; f_800BBF74(c); // 800CD4B4
  c->lr=0x800CD4BCu; f_800CF4BC(c); // 800CD4B8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD4BC
  if (!crb(c,1)) { goto L_800CD4F4; } // 800CD4C0
  c->r[31]=R32(c->r[30]+0x00000310u); // 800CD4C4
  cmps(c,0,(int32_t)c->r[31],0); // 800CD4C8
  if (crb(c,2)) { goto L_800CD4F4; } // 800CD4CC
  c->lr=0x800CD4D4u; f_800A23BC(c); // 800CD4D0
  c->lr=0x800CD4D8u; f_800BB818(c); // 800CD4D4
  c->r[4]=0u+0x00000001u; // 800CD4D8
  c->lr=0x800CD4E0u; f_800BBF74(c); // 800CD4DC
  c->r[4]=c->r[31]|c->r[31]; // 800CD4E0
  c->r[5]=0u+0x00000001u; // 800CD4E4
  c->lr=0x800CD4ECu; f_800D348C(c); // 800CD4E8
  c->r[0]=0u+0x00000000u; // 800CD4EC
  W32(c->r[30]+0x00000310u,c->r[0]); // 800CD4F0
L_800CD4F4:;
  c->r[0]=0u+0x00000000u; // 800CD4F4
  W32(c->r[30]+0x00000314u,c->r[0]); // 800CD4F8
  W32(c->r[30]+0x00000300u,c->r[0]); // 800CD4FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD500
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD504
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD508
  c->lr=c->r[0]; // 800CD50C
  c->r[1]=c->r[1]+0x00000010u; // 800CD510
  return; // 800CD514
}

// fn_800CD518
void f_800CD518(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD518
  c->r[0]=c->lr; // 800CD51C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD520
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD524
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CD528
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CD52C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CD530
  c->r[28]=c->r[3]|c->r[3]; // 800CD534
  c->r[29]=c->r[4]|c->r[4]; // 800CD538
  c->r[30]=c->r[5]|c->r[5]; // 800CD53C
  c->r[31]=c->r[6]|c->r[6]; // 800CD540
  c->lr=0x800CD548u; f_800CD5B0(c); // 800CD544
  c->r[3]=c->r[28]|c->r[28]; // 800CD548
  c->r[4]=c->r[29]|c->r[29]; // 800CD54C
  c->r[5]=c->r[30]|c->r[30]; // 800CD550
  c->r[6]=c->r[31]|c->r[31]; // 800CD554
  c->lr=0x800CD55Cu; f_800BFE14(c); // 800CD558
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD55C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CD560
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CD564
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CD568
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD56C
  c->lr=c->r[0]; // 800CD570
  c->r[1]=c->r[1]+0x00000020u; // 800CD574
  return; // 800CD578
}

// fn_800CD57C
void f_800CD57C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD57C
  c->r[0]=c->lr; // 800CD580
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD584
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD588
  c->r[31]=c->r[3]|c->r[3]; // 800CD58C
  c->lr=0x800CD594u; f_800BFEF0(c); // 800CD590
  c->r[3]=c->r[31]|c->r[31]; // 800CD594
  c->lr=0x800CD59Cu; f_800CD5B0(c); // 800CD598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD5A0
  c->lr=c->r[0]; // 800CD5A4
  c->r[1]=c->r[1]+0x00000010u; // 800CD5A8
  return; // 800CD5AC
}

// fn_800CD5B0
void f_800CD5B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD5B0
  c->r[0]=c->lr; // 800CD5B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD5B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD5BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CD5C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CD5C4
  c->r[29]=c->r[3]|c->r[3]; // 800CD5C8
  c->r[0]=0u+0x00000000u; // 800CD5CC
  W32(c->r[3]+0x000002E8u,c->r[0]); // 800CD5D0
  W32(c->r[3]+0x00000274u,c->r[0]); // 800CD5D4
  W32(c->r[3]+0x00000278u,c->r[0]); // 800CD5D8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CD5DC
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800CD5E0
  W32(c->r[3]+0x00000038u,c->r[0]); // 800CD5E4
  W32(c->r[3]+0x0000027Cu,c->r[0]); // 800CD5E8
  W32(c->r[3]+0x00000280u,c->r[0]); // 800CD5EC
  W32(c->r[3]+0x00000284u,c->r[0]); // 800CD5F0
  W32(c->r[3]+0x000002ECu,c->r[0]); // 800CD5F4
  W32(c->r[3]+0x000002F0u,c->r[0]); // 800CD5F8
  c->r[30]=0u+0x00000000u; // 800CD5FC
  c->r[31]=c->r[3]+0x000000C4u; // 800CD600
L_800CD604:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD604
  c->r[4]=0u+0x00000000u; // 800CD608
  c->r[5]=0u+0x00000018u; // 800CD60C
  c->lr=0x800CD614u; f_800060B8(c); // 800CD610
  c->r[31]=c->r[31]+0x00000018u; // 800CD614
  c->r[30]=c->r[30]+0x00000001u; // 800CD618
  cmpu(c,0,c->r[30],0x00000010u); // 800CD61C
  if (crb(c,0)) { IRQCHK(c); goto L_800CD604; } // 800CD620
  c->r[0]=0u+0x00000000u; // 800CD624
  W32(c->r[29]+0x000000C0u,c->r[0]); // 800CD628
  c->r[3]=c->r[29]+0x00000040u; // 800CD62C
  c->r[4]=0u+0x00000000u; // 800CD630
  c->r[5]=0u+0x00000040u; // 800CD634
  c->lr=0x800CD63Cu; f_800060B8(c); // 800CD638
  c->r[3]=c->r[29]+0x00000250u; // 800CD63C
  c->r[4]=0u+0x00000000u; // 800CD640
  c->r[5]=0u+0x00000024u; // 800CD644
  c->lr=0x800CD64Cu; f_800060B8(c); // 800CD648
  c->r[3]=c->r[29]+0x0000002Cu; // 800CD64C
  c->lr=0x800CD654u; f_800BB8D0(c); // 800CD650
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD654
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CD658
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CD65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD660
  c->lr=c->r[0]; // 800CD664
  c->r[1]=c->r[1]+0x00000020u; // 800CD668
  return; // 800CD66C
}

// fn_800CD670
void f_800CD670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD670
  c->r[0]=c->lr; // 800CD674
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CD678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CD67C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CD680
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CD684
  c->r[29]=c->r[3]|c->r[3]; // 800CD688
  c->lr=0x800CD690u; f_800C0238(c); // 800CD68C
  c->r[30]=c->r[3]|c->r[3]; // 800CD690
  goto L_800CD6C0; // 800CD694
L_800CD698:;
  c->r[3]=c->r[29]|c->r[29]; // 800CD698
  c->r[4]=c->r[30]|c->r[30]; // 800CD69C
  c->lr=0x800CD6A4u; f_800BBBC0(c); // 800CD6A0
  c->r[31]=c->r[3]|c->r[3]; // 800CD6A4
  c->r[3]=c->r[29]|c->r[29]; // 800CD6A8
  c->r[4]=c->r[30]|c->r[30]; // 800CD6AC
  c->lr=0x800CD6B4u; f_800C0270(c); // 800CD6B0
  c->r[30]=c->r[3]|c->r[3]; // 800CD6B4
  c->r[3]=c->r[31]|c->r[31]; // 800CD6B8
  c->lr=0x800CD6C0u; f_800CCD74(c); // 800CD6BC
L_800CD6C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CD6C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CD698; } // 800CD6C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CD6C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CD6CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CD6D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CD6D4
  c->lr=c->r[0]; // 800CD6D8
  c->r[1]=c->r[1]+0x00000020u; // 800CD6DC
  return; // 800CD6E0
}

// fn_800CD6E4
void f_800CD6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD6E4
  c->r[0]=c->lr; // 800CD6E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD6EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD6F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD6F4
  c->r[30]=c->r[3]|c->r[3]; // 800CD6F8
  c->lr=0x800CD700u; f_800A23BC(c); // 800CD6FC
  c->lr=0x800CD704u; f_800A23C4(c); // 800CD700
  c->lr=0x800CD708u; f_800CA204(c); // 800CD704
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CD708
  c->r[0]=rotl(c->r[0],0)&0xFDFFFFFFu; // 800CD70C
  W32(c->r[30]+0x00000028u,c->r[0]); // 800CD710
  c->lr=0x800CD718u; f_8006E268(c); // 800CD714
  c->lr=0x800CD71Cu; f_80073690(c); // 800CD718
  cmps(c,0,(int32_t)c->r[3],5); // 800CD71C
  if (!crb(c,2)) { goto L_800CD7B0; } // 800CD720
  c->lr=0x800CD728u; f_800A23BC(c); // 800CD724
  c->lr=0x800CD72Cu; f_800A23C4(c); // 800CD728
  c->lr=0x800CD730u; f_800BBF6C(c); // 800CD72C
  c->r[31]=c->r[3]|c->r[3]; // 800CD730
  cmps(c,0,(int32_t)c->r[3],0); // 800CD734
  if (crb(c,2)) { goto L_800CD758; } // 800CD738
  c->lr=0x800CD740u; f_800A23BC(c); // 800CD73C
  c->lr=0x800CD744u; f_800BB800(c); // 800CD740
  c->r[4]=c->r[31]|c->r[31]; // 800CD744
  c->lr=0x800CD74Cu; f_800BBD58(c); // 800CD748
  c->lr=0x800CD750u; f_800C7424(c); // 800CD74C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD750
  if (crb(c,2)) { goto L_800CD800; } // 800CD754
L_800CD758:;
  c->r[31]=0u+0x00000001u; // 800CD758
  c->lr=0x800CD760u; f_8007B524(c); // 800CD75C
  c->lr=0x800CD764u; f_8009D9FC(c); // 800CD760
  cmps(c,0,(int32_t)c->r[3],0); // 800CD764
  if (crb(c,2)) { goto L_800CD774; } // 800CD768
  c->r[31]=0u+0x00000000u; // 800CD76C
  goto L_800CD7A8; // 800CD770
L_800CD774:;
  c->lr=0x800CD778u; f_800A23BC(c); // 800CD774
  c->lr=0x800CD77Cu; f_800A23C8(c); // 800CD778
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CD77C
  c->lr=0x800CD784u; f_800C01C8(c); // 800CD780
  cmps(c,0,(int32_t)c->r[3],0); // 800CD784
  if (!crb(c,2)) { goto L_800CD794; } // 800CD788
  c->r[31]=0u+0x00000000u; // 800CD78C
  goto L_800CD7A8; // 800CD790
L_800CD794:;
  c->lr=0x800CD798u; f_8007B524(c); // 800CD794
  c->lr=0x800CD79Cu; f_8009D2B8(c); // 800CD798
  cmps(c,0,(int32_t)c->r[3],0); // 800CD79C
  if (crb(c,2)) { goto L_800CD7A8; } // 800CD7A0
  c->r[31]=0u+0x00000000u; // 800CD7A4
L_800CD7A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CD7A8
  if (!crb(c,2)) { goto L_800CD800; } // 800CD7AC
L_800CD7B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CD7B0
  c->lr=0x800CD7B8u; f_800CE000(c); // 800CD7B4
  c->r[3]=c->r[30]|c->r[30]; // 800CD7B8
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CD7BC
  c->lr=0x800CD7C4u; f_800C01C8(c); // 800CD7C0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD7C4
  if (crb(c,2)) { goto L_800CD7F4; } // 800CD7C8
  c->r[3]=c->r[30]|c->r[30]; // 800CD7CC
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CD7D0
  c->lr=0x800CD7D8u; f_800BBBC0(c); // 800CD7D4
  c->lr=0x800CD7DCu; f_800CA7A4(c); // 800CD7D8
  cmps(c,0,(int32_t)c->r[3],0); // 800CD7DC
  if (crb(c,2)) { goto L_800CD7F4; } // 800CD7E0
  c->r[3]=c->r[30]+0x0000002Cu; // 800CD7E4
  c->r[4]=0u+0x00000002u; // 800CD7E8
  c->lr=0x800CD7F0u; f_800BB8E4(c); // 800CD7EC
  goto L_800CD800; // 800CD7F0
L_800CD7F4:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800CD7F4
  c->r[4]=0u+0x00000003u; // 800CD7F8
  c->lr=0x800CD800u; f_800BB8E4(c); // 800CD7FC
L_800CD800:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD800
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CD804
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD808
  c->lr=c->r[0]; // 800CD80C
  c->r[1]=c->r[1]+0x00000010u; // 800CD810
  return; // 800CD814
}

// fn_800CD818
void f_800CD818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD818
  c->r[0]=c->lr; // 800CD81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD824
  c->r[31]=c->r[3]|c->r[3]; // 800CD828
  c->r[4]=R32(c->r[3]+0x00000274u); // 800CD82C
  c->lr=0x800CD834u; f_800BBBC0(c); // 800CD830
  c->lr=0x800CD838u; f_800CCEEC(c); // 800CD834
  cmps(c,0,(int32_t)c->r[3],0); // 800CD838
  if (!crb(c,2)) { goto L_800CD84C; } // 800CD83C
  c->r[3]=c->r[31]+0x0000002Cu; // 800CD840
  c->r[4]=0u+0x00000005u; // 800CD844
  c->lr=0x800CD84Cu; f_800BB8E4(c); // 800CD848
L_800CD84C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CD84C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CD850
  c->lr=c->r[0]; // 800CD854
  c->r[1]=c->r[1]+0x00000010u; // 800CD858
  return; // 800CD85C
}

// fn_800CD860
void f_800CD860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CD860
  c->r[0]=c->lr; // 800CD864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CD868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CD86C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CD870
  c->r[30]=c->r[3]|c->r[3]; // 800CD874
  c->r[3]=c->r[3]+0x0000002Cu; // 800CD878
  c->lr=0x800CD880u; f_800BB8EC(c); // 800CD87C
  cmps(c,0,(int32_t)c->r[3],0); // 800CD880
  if (crb(c,2)) { goto L_800CD9B8; } // 800CD884
  c->lr=0x800CD88Cu; f_8006E268(c); // 800CD888
  c->lr=0x800CD890u; f_80073690(c); // 800CD88C
  cmps(c,0,(int32_t)c->r[3],5); // 800CD890
  if (!crb(c,2)) { goto L_800CD8E8; } // 800CD894
  c->r[0]=R32(c->r[30]+0x00000278u); // 800CD898
  cmpu(c,0,c->r[0],0x00000002u); // 800CD89C
  if (!crb(c,2)) { goto L_800CD8E8; } // 800CD8A0
  c->lr=0x800CD8A8u; f_800A23BC(c); // 800CD8A4
  c->lr=0x800CD8ACu; f_800A23C4(c); // 800CD8A8
  c->lr=0x800CD8B0u; f_800BBF6C(c); // 800CD8AC
  c->r[31]=c->r[3]|c->r[3]; // 800CD8B0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD8B4
  if (crb(c,2)) { goto L_800CD8E8; } // 800CD8B8
  c->lr=0x800CD8C0u; f_800A23BC(c); // 800CD8BC
  c->lr=0x800CD8C4u; f_800BB800(c); // 800CD8C0
  c->r[4]=c->r[31]|c->r[31]; // 800CD8C4
  c->lr=0x800CD8CCu; f_800BBD58(c); // 800CD8C8
  c->r[4]=0u+0x00000001u; // 800CD8CC
  c->r[5]=0u+0x00000001u; // 800CD8D0
  c->lr=0x800CD8D8u; f_800C7B08(c); // 800CD8D4
  c->lr=0x800CD8DCu; f_800A23BC(c); // 800CD8D8
  c->lr=0x800CD8E0u; f_800A23C4(c); // 800CD8DC
  c->r[4]=0u+0x00000001u; // 800CD8E0
  c->lr=0x800CD8E8u; f_800D8804(c); // 800CD8E4
L_800CD8E8:;
  c->r[31]=R32(c->r[30]+0x0000003Cu); // 800CD8E8
  c->lr=0x800CD8F0u; f_8007BE68(c); // 800CD8EC
  c->lr=0x800CD8F4u; f_8007BDEC(c); // 800CD8F0
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800CD8F4
  c->lr=0x800CD8FCu; f_8007BD50(c); // 800CD8F8
  W32(c->r[30]+0x0000003Cu,c->r[31]); // 800CD8FC
  c->r[3]=c->r[31]|c->r[31]; // 800CD900
  c->lr=0x800CD908u; f_8007BD1C(c); // 800CD904
  c->lr=0x800CD90Cu; f_8007BE10(c); // 800CD908
  c->r[3]=0u+0x00000100u; // 800CD90C
  c->lr=0x800CD914u; f_8007BD84(c); // 800CD910
  c->r[31]=0u+0x00000000u; // 800CD914
  c->r[0]=R32(c->r[30]+0x00000278u); // 800CD918
  cmps(c,0,(int32_t)c->r[0],2); // 800CD91C
  if (crb(c,2)) { goto L_800CD948; } // 800CD920
  if (!crb(c,0)) { goto L_800CD934; } // 800CD924
  cmps(c,0,(int32_t)c->r[0],1); // 800CD928
  if (!crb(c,0)) { goto L_800CD940; } // 800CD92C
  goto L_800CD964; // 800CD930
L_800CD934:;
  cmps(c,0,(int32_t)c->r[0],4); // 800CD934
  if (!crb(c,0)) { goto L_800CD964; } // 800CD938
  goto L_800CD960; // 800CD93C
L_800CD940:;
  c->r[31]=c->r[13]+0xFFFF88A8u; // 800CD940
  goto L_800CD964; // 800CD944
L_800CD948:;
  c->r[3]=c->r[30]|c->r[30]; // 800CD948
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CD94C
  c->lr=0x800CD954u; f_800BBBC0(c); // 800CD950
  c->lr=0x800CD958u; f_800CA7D4(c); // 800CD954
  c->r[31]=c->r[3]|c->r[3]; // 800CD958
  goto L_800CD964; // 800CD95C
L_800CD960:;
  c->r[31]=c->r[30]+0x00000080u; // 800CD960
L_800CD964:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CD964
  if (!crb(c,2)) { goto L_800CD984; } // 800CD968
  c->r[0]=0u+0x00000000u; // 800CD96C
  W32(c->r[30]+0x00000278u,c->r[0]); // 800CD970
  c->r[3]=c->r[30]+0x0000002Cu; // 800CD974
  c->r[4]=0u+0x00000005u; // 800CD978
  c->lr=0x800CD980u; f_800BB8E4(c); // 800CD97C
  goto L_800CDAAC; // 800CD980
L_800CD984:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD984
  c->lr=0x800CD98Cu; f_8007BE8C(c); // 800CD988
  cmps(c,0,(int32_t)c->r[3],0); // 800CD98C
  if (!crb(c,2)) { goto L_800CD9AC; } // 800CD990
  c->r[0]=0u+0x00000000u; // 800CD994
  W32(c->r[30]+0x00000278u,c->r[0]); // 800CD998
  c->r[3]=c->r[30]+0x0000002Cu; // 800CD99C
  c->r[4]=0u+0x00000005u; // 800CD9A0
  c->lr=0x800CD9A8u; f_800BB8E4(c); // 800CD9A4
  goto L_800CDAAC; // 800CD9A8
L_800CD9AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800CD9AC
  c->lr=0x800CD9B4u; f_8007BDB8(c); // 800CD9B0
  goto L_800CDA94; // 800CD9B4
L_800CD9B8:;
  c->lr=0x800CD9BCu; f_800A23BC(c); // 800CD9B8
  c->lr=0x800CD9C0u; f_800A23C8(c); // 800CD9BC
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CD9C0
  c->lr=0x800CD9C8u; f_800C01C8(c); // 800CD9C4
  cmps(c,0,(int32_t)c->r[3],0); // 800CD9C8
  if (crb(c,2)) { goto L_800CDA94; } // 800CD9CC
  c->lr=0x800CD9D4u; f_800A23BC(c); // 800CD9D0
  c->lr=0x800CD9D8u; f_800A23C8(c); // 800CD9D4
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CD9D8
  c->lr=0x800CD9E0u; f_800BBBC0(c); // 800CD9DC
  c->lr=0x800CD9E4u; f_800CA7BC(c); // 800CD9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CD9E4
  if (crb(c,2)) { goto L_800CDA94; } // 800CD9E8
  c->r[3]=R32(c->r[30]+0x00000028u); // 800CD9EC
  c->r[0]=rotl(c->r[3],0)&0x00400000u; // 800CD9F0
  cmps(c,0,(int32_t)c->r[0],0); // 800CD9F4
  if (crb(c,2)) { goto L_800CDA94; } // 800CD9F8
  c->r[0]=rotl(c->r[3],0)&0x01000000u; // 800CD9FC
  cmps(c,0,(int32_t)c->r[0],0); // 800CDA00
  if (!crb(c,2)) { goto L_800CDA38; } // 800CDA04
  c->lr=0x800CDA0Cu; f_800A23BC(c); // 800CDA08
  c->lr=0x800CDA10u; f_800A23C4(c); // 800CDA0C
  c->lr=0x800CDA14u; f_800D8164(c); // 800CDA10
  cmps(c,0,(int32_t)c->r[3],0); // 800CDA14
  if (crb(c,2)) { goto L_800CDA94; } // 800CDA18
  c->r[3]=0u+0x000001A7u; // 800CDA1C
  c->lr=0x800CDA24u; f_8026C63C(c); // 800CDA20
  c->lr=0x800CDA28u; f_8026C5AC(c); // 800CDA24
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CDA28
  c->r[0]=c->r[0]|0x01000000u; // 800CDA2C
  W32(c->r[30]+0x00000028u,c->r[0]); // 800CDA30
  goto L_800CDA94; // 800CDA34
L_800CDA38:;
  c->lr=0x800CDA3Cu; f_8026C610(c); // 800CDA38
  cmps(c,0,(int32_t)c->r[3],0); // 800CDA3C
  if (crb(c,2)) { goto L_800CDA58; } // 800CDA40
  c->r[0]=R32(c->r[30]+0x00000028u); // 800CDA44
  c->r[0]=rotl(c->r[0],0)&0xFEFFFFFFu; // 800CDA48
  W32(c->r[30]+0x00000028u,c->r[0]); // 800CDA4C
  c->lr=0x800CDA54u; f_8026C5E4(c); // 800CDA50
  goto L_800CDA94; // 800CDA54
L_800CDA58:;
  c->lr=0x800CDA5Cu; f_800A23BC(c); // 800CDA58
  c->lr=0x800CDA60u; f_800A23C4(c); // 800CDA5C
  c->lr=0x800CDA64u; f_800D8164(c); // 800CDA60
  cmps(c,0,(int32_t)c->r[3],0); // 800CDA64
  if (crb(c,2)) { goto L_800CDA94; } // 800CDA68
  c->lr=0x800CDA70u; f_800A23BC(c); // 800CDA6C
  c->r[4]=0u+0x00000001u; // 800CDA70
  c->lr=0x800CDA78u; f_800E2514(c); // 800CDA74
  c->lr=0x800CDA7Cu; f_8026C5E4(c); // 800CDA78
  c->r[3]=c->r[30]|c->r[30]; // 800CDA7C
  c->lr=0x800CDA84u; f_800CF2CC(c); // 800CDA80
  c->r[3]=c->r[30]+0x0000002Cu; // 800CDA84
  c->r[4]=0u+0x00000004u; // 800CDA88
  c->lr=0x800CDA90u; f_800BB8E4(c); // 800CDA8C
  goto L_800CDAAC; // 800CDA90
L_800CDA94:;
  c->lr=0x800CDA98u; f_8007BCF8(c); // 800CDA94
  cmps(c,0,(int32_t)c->r[3],0); // 800CDA98
  if (crb(c,2)) { goto L_800CDAAC; } // 800CDA9C
  c->r[3]=c->r[30]+0x0000002Cu; // 800CDAA0
  c->r[4]=0u+0x00000005u; // 800CDAA4
  c->lr=0x800CDAACu; f_800BB8E4(c); // 800CDAA8
L_800CDAAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDAAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CDAB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDAB4
  c->lr=c->r[0]; // 800CDAB8
  c->r[1]=c->r[1]+0x00000010u; // 800CDABC
  return; // 800CDAC0
}

// fn_800CDAC4
void f_800CDAC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDAC4
  c->r[0]=c->lr; // 800CDAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDAD0
  c->r[31]=c->r[3]|c->r[3]; // 800CDAD4
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CDAD8
  c->r[0]=cntlz(c->r[0]); // 800CDADC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CDAE0
  c->r[0]=rotl(c->r[0],0)&0x00400000u; // 800CDAE4
  cmps(c,0,(int32_t)c->r[0],0); // 800CDAE8
  if (crb(c,2)) { goto L_800CDB00; } // 800CDAEC
  c->r[3]=c->r[3]+0x0000002Cu; // 800CDAF0
  c->r[4]=0u+0x00000005u; // 800CDAF4
  c->lr=0x800CDAFCu; f_800BB8E4(c); // 800CDAF8
  goto L_800CDB40; // 800CDAFC
L_800CDB00:;
  c->r[3]=c->r[3]+0x0000002Cu; // 800CDB00
  c->lr=0x800CDB08u; f_800BB8EC(c); // 800CDB04
  cmps(c,0,(int32_t)c->r[3],0); // 800CDB08
  if (crb(c,2)) { goto L_800CDB1C; } // 800CDB0C
  c->r[3]=c->r[31]|c->r[31]; // 800CDB10
  c->lr=0x800CDB18u; f_800CEF54(c); // 800CDB14
  goto L_800CDB40; // 800CDB18
L_800CDB1C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CDB1C
  c->lr=0x800CDB24u; f_800CF044(c); // 800CDB20
  cmps(c,0,(int32_t)c->r[3],0); // 800CDB24
  if (crb(c,2)) { goto L_800CDB40; } // 800CDB28
  c->r[3]=c->r[31]|c->r[31]; // 800CDB2C
  c->lr=0x800CDB34u; f_800CF320(c); // 800CDB30
  c->r[3]=c->r[31]+0x0000002Cu; // 800CDB34
  c->r[4]=0u+0x00000005u; // 800CDB38
  c->lr=0x800CDB40u; f_800BB8E4(c); // 800CDB3C
L_800CDB40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDB40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDB44
  c->lr=c->r[0]; // 800CDB48
  c->r[1]=c->r[1]+0x00000010u; // 800CDB4C
  return; // 800CDB50
}

// fn_800CDB54
void f_800CDB54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDB54
  c->r[0]=c->lr; // 800CDB58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDB5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDB60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDB64
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CDB68
  c->r[29]=c->r[3]|c->r[3]; // 800CDB6C
  c->r[3]=c->r[3]+0x0000002Cu; // 800CDB70
  c->lr=0x800CDB78u; f_800BB8EC(c); // 800CDB74
  cmps(c,0,(int32_t)c->r[3],0); // 800CDB78
  if (crb(c,2)) { goto L_800CDBAC; } // 800CDB7C
  c->r[0]=R32(c->r[29]+0x00000278u); // 800CDB80
  cmpu(c,0,c->r[0],0x00000001u); // 800CDB84
  if (!crb(c,2)) { goto L_800CDB94; } // 800CDB88
  c->r[0]=0u+0x00000001u; // 800CDB8C
  W32(c->r[29]+0x00000038u,c->r[0]); // 800CDB90
L_800CDB94:;
  c->r[3]=c->r[29]|c->r[29]; // 800CDB94
  c->lr=0x800CDB9Cu; f_800CE1C8(c); // 800CDB98
  c->lr=0x800CDBA0u; f_800A23BC(c); // 800CDB9C
  c->r[4]=0u+0x00000000u; // 800CDBA0
  c->lr=0x800CDBA8u; f_800C23DC(c); // 800CDBA4
  goto L_800CDD54; // 800CDBA8
L_800CDBAC:;
  c->r[3]=c->r[29]|c->r[29]; // 800CDBAC
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CDBB0
  c->lr=0x800CDBB8u; f_800C01C8(c); // 800CDBB4
  cmps(c,0,(int32_t)c->r[3],0); // 800CDBB8
  if (crb(c,2)) { goto L_800CDBE8; } // 800CDBBC
  c->lr=0x800CDBC4u; f_800A23BC(c); // 800CDBC0
  c->lr=0x800CDBC8u; f_800A23B4(c); // 800CDBC4
  c->lr=0x800CDBCCu; f_800CF5A0(c); // 800CDBC8
  cmps(c,0,(int32_t)c->r[3],0); // 800CDBCC
  if (crb(c,2)) { goto L_800CDBE8; } // 800CDBD0
  c->lr=0x800CDBD8u; f_800A23BC(c); // 800CDBD4
  c->lr=0x800CDBDCu; f_800A23B4(c); // 800CDBD8
  c->lr=0x800CDBE0u; f_800CF590(c); // 800CDBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDBE0
  if (crb(c,2)) { goto L_800CDD54; } // 800CDBE4
L_800CDBE8:;
  c->r[3]=c->r[29]|c->r[29]; // 800CDBE8
  c->lr=0x800CDBF0u; f_800BBF88(c); // 800CDBEC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDBF0
  if (crb(c,2)) { goto L_800CDC14; } // 800CDBF4
  c->lr=0x800CDBFCu; f_8006592C(c); // 800CDBF8
  c->r[4]=0u+0x00000004u; // 800CDBFC
  c->lr=0x800CDC04u; f_80048D00(c); // 800CDC00
  cmps(c,0,(int32_t)c->r[3],0); // 800CDC04
  if (crb(c,2)) { goto L_800CDD54; } // 800CDC08
  c->r[0]=0u+0x00000000u; // 800CDC0C
  W32(c->r[29]+0x000002F0u,c->r[0]); // 800CDC10
L_800CDC14:;
  c->r[31]=R32(c->r[29]+0x00000274u); // 800CDC14
  cmps(c,0,(int32_t)c->r[31],0); // 800CDC18
  if (crb(c,2)) { goto L_800CDD4C; } // 800CDC1C
  c->lr=0x800CDC24u; f_800A23BC(c); // 800CDC20
  c->lr=0x800CDC28u; f_800A23C8(c); // 800CDC24
  c->r[4]=c->r[31]|c->r[31]; // 800CDC28
  c->lr=0x800CDC30u; f_800BBBC0(c); // 800CDC2C
  c->r[3]=c->r[29]|c->r[29]; // 800CDC30
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CDC34
  c->lr=0x800CDC3Cu; f_800BBBC0(c); // 800CDC38
  c->lr=0x800CDC40u; f_800CA7F4(c); // 800CDC3C
  c->r[31]=c->r[3]|c->r[3]; // 800CDC40
  c->r[3]=c->r[29]|c->r[29]; // 800CDC44
  c->lr=0x800CDC4Cu; f_800CE624(c); // 800CDC48
  c->lr=0x800CDC50u; f_8006E268(c); // 800CDC4C
  c->lr=0x800CDC54u; f_80073690(c); // 800CDC50
  cmps(c,0,(int32_t)c->r[3],4); // 800CDC54
  if (!crb(c,2)) { goto L_800CDD00; } // 800CDC58
  c->r[3]=c->r[29]|c->r[29]; // 800CDC5C
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CDC60
  c->lr=0x800CDC68u; f_800C01C8(c); // 800CDC64
  cmps(c,0,(int32_t)c->r[3],0); // 800CDC68
  if (crb(c,2)) { goto L_800CDD00; } // 800CDC6C
  c->r[3]=c->r[29]|c->r[29]; // 800CDC70
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CDC74
  c->lr=0x800CDC7Cu; f_800BBBC0(c); // 800CDC78
  c->lr=0x800CDC80u; f_800CA7DC(c); // 800CDC7C
  cmps(c,0,(int32_t)c->r[3],0); // 800CDC80
  if (!crb(c,2)) { goto L_800CDD00; } // 800CDC84
  c->lr=0x800CDC8Cu; f_800A23BC(c); // 800CDC88
  c->lr=0x800CDC90u; f_800A23B4(c); // 800CDC8C
  c->lr=0x800CDC94u; f_800CF588(c); // 800CDC90
  c->r[30]=c->r[3]|c->r[3]; // 800CDC94
  c->lr=0x800CDC9Cu; f_800A23BC(c); // 800CDC98
  c->lr=0x800CDCA0u; f_800A23B4(c); // 800CDC9C
  c->r[4]=c->r[30]|c->r[30]; // 800CDCA0
  c->lr=0x800CDCA8u; f_800BEDE0(c); // 800CDCA4
  c->r[30]=c->r[3]|c->r[3]; // 800CDCA8
  c->lr=0x800CDCB0u; f_800A23BC(c); // 800CDCAC
  c->lr=0x800CDCB4u; f_800A23B4(c); // 800CDCB0
  c->r[4]=c->r[30]|c->r[30]; // 800CDCB4
  c->lr=0x800CDCBCu; f_800BEDA0(c); // 800CDCB8
  c->lr=0x800CDCC0u; f_800CF580(c); // 800CDCBC
  cmps(c,0,(int32_t)c->r[3],5); // 800CDCC0
  if (crb(c,2)) { goto L_800CDD00; } // 800CDCC4
  c->r[30]=0u+0x00000000u; // 800CDCC8
  c->lr=0x800CDCD0u; f_800B85C4(c); // 800CDCCC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDCD0
  if (crb(c,2)) { goto L_800CDCDC; } // 800CDCD4
  c->r[30]=0u+0x00000001u; // 800CDCD8
L_800CDCDC:;
  c->lr=0x800CDCE0u; f_800A23BC(c); // 800CDCDC
  c->lr=0x800CDCE4u; f_800E2328(c); // 800CDCE0
  cmps(c,0,(int32_t)c->r[3],0); // 800CDCE4
  if (crb(c,2)) { goto L_800CDCF0; } // 800CDCE8
  c->r[30]=0u+0x00000001u; // 800CDCEC
L_800CDCF0:;
  c->lr=0x800CDCF4u; f_800A23BC(c); // 800CDCF0
  c->lr=0x800CDCF8u; f_800A23C4(c); // 800CDCF4
  c->r[4]=c->r[30]|c->r[30]; // 800CDCF8
  c->lr=0x800CDD00u; f_800D7FAC(c); // 800CDCFC
L_800CDD00:;
  c->r[3]=c->r[29]|c->r[29]; // 800CDD00
  c->lr=0x800CDD08u; f_800CE624(c); // 800CDD04
  c->r[3]=c->r[31]|c->r[31]; // 800CDD08
  c->lr=0x800CDD10u; f_8007BE8C(c); // 800CDD0C
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD10
  if (crb(c,2)) { goto L_800CDD4C; } // 800CDD14
  c->lr=0x800CDD1Cu; f_8007BE10(c); // 800CDD18
  c->r[3]=0u+0x00000100u; // 800CDD1C
  c->lr=0x800CDD24u; f_8007BD84(c); // 800CDD20
  c->r[3]=c->r[31]|c->r[31]; // 800CDD24
  c->lr=0x800CDD2Cu; f_8007BDB8(c); // 800CDD28
  c->lr=0x800CDD30u; f_800A23BC(c); // 800CDD2C
  c->lr=0x800CDD34u; f_800A23C4(c); // 800CDD30
  c->r[4]=0u+0x00000001u; // 800CDD34
  c->lr=0x800CDD3Cu; f_800D8804(c); // 800CDD38
  c->r[3]=c->r[29]+0x0000002Cu; // 800CDD3C
  c->r[4]=0u+0x00000006u; // 800CDD40
  c->lr=0x800CDD48u; f_800BB8E4(c); // 800CDD44
  goto L_800CDD54; // 800CDD48
L_800CDD4C:;
  c->r[3]=c->r[29]|c->r[29]; // 800CDD4C
  c->lr=0x800CDD54u; f_800CD248(c); // 800CDD50
L_800CDD54:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CDD54
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CDD58
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CDD5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDD60
  c->lr=c->r[0]; // 800CDD64
  c->r[1]=c->r[1]+0x00000020u; // 800CDD68
  return; // 800CDD6C
}

// fn_800CDD70
void f_800CDD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDD70
  c->r[0]=c->lr; // 800CDD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDD78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDD7C
  c->r[31]=c->r[3]|c->r[3]; // 800CDD80
  c->lr=0x800CDD88u; f_8007BCF8(c); // 800CDD84
  cmps(c,0,(int32_t)c->r[3],0); // 800CDD88
  if (crb(c,2)) { goto L_800CDD98; } // 800CDD8C
  c->r[3]=c->r[31]|c->r[31]; // 800CDD90
  c->lr=0x800CDD98u; f_800CD248(c); // 800CDD94
L_800CDD98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDD98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDD9C
  c->lr=c->r[0]; // 800CDDA0
  c->r[1]=c->r[1]+0x00000010u; // 800CDDA4
  return; // 800CDDA8
}

// fn_800CDDAC
void f_800CDDAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDDAC
  c->r[0]=c->lr; // 800CDDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDDB8
  c->r[31]=c->r[3]|c->r[3]; // 800CDDBC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800CDDC0
  cmps(c,0,(int32_t)c->r[0],0); // 800CDDC4
  if (crb(c,2)) { goto L_800CDDF8; } // 800CDDC8
  c->r[3]=c->r[3]+0x0000002Cu; // 800CDDCC
  c->lr=0x800CDDD4u; f_800BB910(c); // 800CDDD0
  c->r[3]=c->r[31]+0x0000002Cu; // 800CDDD4
  c->lr=0x800CDDDCu; f_800BB904(c); // 800CDDD8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800CDDDC
  c->r[3]=0u+0x80460000u; // 800CDDE0
  c->r[0]=c->r[3]+0x00000108u; // 800CDDE4
  c->r[12]=c->r[0]+c->r[4]; // 800CDDE8
  c->r[3]=c->r[31]|c->r[31]; // 800CDDEC
  c->lr=0x800CDDF4u; f_802F09D0(c); // 800CDDF0
  c->r[0]=c->r[0]|0x00000000u; // 800CDDF4
L_800CDDF8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDDF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDDFC
  c->lr=c->r[0]; // 800CDE00
  c->r[1]=c->r[1]+0x00000010u; // 800CDE04
  return; // 800CDE08
}

// fn_800CDE0C
void f_800CDE0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDE0C
  c->r[0]=c->lr; // 800CDE10
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CDE14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CDE18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CDE1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CDE20
  c->r[29]=c->r[3]|c->r[3]; // 800CDE24
  c->r[30]=c->r[4]|c->r[4]; // 800CDE28
  c->lr=0x800CDE30u; f_800A23BC(c); // 800CDE2C
  c->lr=0x800CDE34u; f_800BB800(c); // 800CDE30
  c->r[4]=c->r[30]|c->r[30]; // 800CDE34
  c->lr=0x800CDE3Cu; f_800BBD98(c); // 800CDE38
  c->r[31]=c->r[3]|c->r[3]; // 800CDE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE40
  if (!crb(c,2)) { goto L_800CDE70; } // 800CDE44
  c->r[3]=c->r[29]|c->r[29]; // 800CDE48
  c->r[4]=c->r[30]|c->r[30]; // 800CDE4C
  c->lr=0x800CDE54u; f_800C0018(c); // 800CDE50
  c->r[31]=c->r[3]|c->r[3]; // 800CDE54
  cmps(c,0,(int32_t)c->r[3],0); // 800CDE58
  if (crb(c,2)) { goto L_800CDE70; } // 800CDE5C
  c->r[3]=c->r[29]|c->r[29]; // 800CDE60
  c->r[4]=c->r[31]|c->r[31]; // 800CDE64
  c->lr=0x800CDE6Cu; f_800BBBC0(c); // 800CDE68
  c->lr=0x800CDE70u; f_800CC454(c); // 800CDE6C
L_800CDE70:;
  c->r[3]=c->r[31]|c->r[31]; // 800CDE70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CDE74
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CDE78
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CDE7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CDE80
  c->lr=c->r[0]; // 800CDE84
  c->r[1]=c->r[1]+0x00000020u; // 800CDE88
  return; // 800CDE8C
}

// fn_800CDE90
void f_800CDE90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDE90
  c->r[0]=c->lr; // 800CDE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDE9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CDEA0
  c->r[30]=c->r[3]|c->r[3]; // 800CDEA4
  c->r[31]=c->r[4]|c->r[4]; // 800CDEA8
  c->lr=0x800CDEB0u; f_800BBBC0(c); // 800CDEAC
  cmps(c,0,(int32_t)c->r[3],0); // 800CDEB0
  if (crb(c,2)) { goto L_800CDED8; } // 800CDEB4
  c->r[3]=c->r[30]|c->r[30]; // 800CDEB8
  c->r[4]=c->r[31]|c->r[31]; // 800CDEBC
  c->lr=0x800CDEC4u; f_800C00E4(c); // 800CDEC0
  c->r[0]=R32(c->r[30]+0x00000274u); // 800CDEC4
  cmpu(c,0,c->r[0],c->r[31]); // 800CDEC8
  if (!crb(c,2)) { goto L_800CDED8; } // 800CDECC
  c->r[0]=0u+0x00000000u; // 800CDED0
  W32(c->r[30]+0x00000274u,c->r[0]); // 800CDED4
L_800CDED8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CDEDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDEE0
  c->lr=c->r[0]; // 800CDEE4
  c->r[1]=c->r[1]+0x00000010u; // 800CDEE8
  return; // 800CDEEC
}

// fn_800CDEF0
void f_800CDEF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDEF0
  c->r[0]=c->lr; // 800CDEF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDEF8
  c->r[3]=c->r[3]+0x0000002Cu; // 800CDEFC
  c->lr=0x800CDF04u; f_800BB904(c); // 800CDF00
  c->r[0]=0u-c->r[3]; // 800CDF04
  c->r[0]=c->r[0]|c->r[3]; // 800CDF08
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CDF0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF10
  c->lr=c->r[0]; // 800CDF14
  c->r[1]=c->r[1]+0x00000010u; // 800CDF18
  return; // 800CDF1C
}

// fn_800CDF20
void f_800CDF20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDF20
  c->r[0]=c->lr; // 800CDF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDF28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDF2C
  c->r[31]=c->r[3]|c->r[3]; // 800CDF30
  c->r[3]=c->r[3]+0x0000002Cu; // 800CDF34
  c->lr=0x800CDF3Cu; f_800BB904(c); // 800CDF38
  cmpu(c,0,c->r[3],0x00000001u); // 800CDF3C
  if (!crb(c,0)) { goto L_800CDF4C; } // 800CDF40
  c->r[3]=0u+0x00000000u; // 800CDF44
  goto L_800CDF6C; // 800CDF48
L_800CDF4C:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800CDF4C
  c->lr=0x800CDF54u; f_800BB904(c); // 800CDF50
  c->r[4]=0u+0x00000005u; // 800CDF54
  c->r[0]=addc(c,~c->r[3],0x00000005u,1); // 800CDF58
  c->r[3]=c->r[4]|~c->r[3]; // 800CDF5C
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800CDF60
  c->r[0]=c->r[3]-c->r[0]; // 800CDF64
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800CDF68
L_800CDF6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDF6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDF70
  c->lr=c->r[0]; // 800CDF74
  c->r[1]=c->r[1]+0x00000010u; // 800CDF78
  return; // 800CDF7C
}

// fn_800CDF80
void f_800CDF80(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000C0u); // 800CDF80
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800CDF84
  c->r[5]=c->r[3]+c->r[0]; // 800CDF88
  W32(c->r[5]+0x000000C4u,c->r[4]); // 800CDF8C
  c->r[4]=R32(c->r[3]+0x000000C0u); // 800CDF90
  c->r[0]=c->r[4]+0x00000001u; // 800CDF94
  W32(c->r[3]+0x000000C0u,c->r[0]); // 800CDF98
  return; // 800CDF9C
}

// fn_800CDFA0
void f_800CDFA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDFA0
  c->r[0]=c->lr; // 800CDFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDFA8
  c->r[4]=R32(c->r[3]+0x00000274u); // 800CDFAC
  c->lr=0x800CDFB4u; f_800BBBC0(c); // 800CDFB0
  c->lr=0x800CDFB8u; f_800CD1DC(c); // 800CDFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDFB8
  c->lr=c->r[0]; // 800CDFBC
  c->r[1]=c->r[1]+0x00000010u; // 800CDFC0
  return; // 800CDFC4
}

// fn_800CDFC8
void f_800CDFC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CDFC8
  c->r[0]=c->lr; // 800CDFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CDFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CDFD4
  c->r[31]=c->r[4]|c->r[4]; // 800CDFD8
  c->r[4]=R32(c->r[3]+0x00000274u); // 800CDFDC
  c->lr=0x800CDFE4u; f_800BBBC0(c); // 800CDFE0
  c->r[4]=c->r[31]|c->r[31]; // 800CDFE4
  c->lr=0x800CDFECu; f_800CD1EC(c); // 800CDFE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CDFEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CDFF0
  c->lr=c->r[0]; // 800CDFF4
  c->r[1]=c->r[1]+0x00000010u; // 800CDFF8
  return; // 800CDFFC
}

// fn_800CE000
void f_800CE000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE000
  c->r[0]=c->lr; // 800CE004
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE008
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE00C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE010
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CE014
  c->r[29]=c->r[3]|c->r[3]; // 800CE018
  c->lr=0x800CE020u; f_800A23BC(c); // 800CE01C
  c->lr=0x800CE024u; f_800A23C8(c); // 800CE020
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CE024
  c->lr=0x800CE02Cu; f_800C01C8(c); // 800CE028
  cmps(c,0,(int32_t)c->r[3],0); // 800CE02C
  if (crb(c,2)) { goto L_800CE1AC; } // 800CE030
  c->lr=0x800CE038u; f_800A23BC(c); // 800CE034
  c->lr=0x800CE03Cu; f_800A23C8(c); // 800CE038
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CE03C
  c->lr=0x800CE044u; f_800BBBC0(c); // 800CE040
  c->r[31]=c->r[3]|c->r[3]; // 800CE044
  cmps(c,0,(int32_t)c->r[3],0); // 800CE048
  if (crb(c,2)) { goto L_800CE1AC; } // 800CE04C
  c->lr=0x800CE054u; f_800CA7FC(c); // 800CE050
  cmps(c,0,(int32_t)c->r[3],0); // 800CE054
  if (crb(c,2)) { goto L_800CE19C; } // 800CE058
  c->r[3]=c->r[29]+0x00000304u; // 800CE05C
  c->r[4]=0u+0x00000000u; // 800CE060
  c->r[5]=0u+0x00000014u; // 800CE064
  c->lr=0x800CE06Cu; f_800060B8(c); // 800CE068
  c->lr=0x800CE070u; f_800A23BC(c); // 800CE06C
  c->lr=0x800CE074u; f_800BB828(c); // 800CE070
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800CE074
  c->lr=0x800CE07Cu; f_800BB9DC(c); // 800CE078
  c->r[30]=c->r[3]|c->r[3]; // 800CE07C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE080
  if (crb(c,2)) { goto L_800CE0F4; } // 800CE084
  c->lr=0x800CE08Cu; f_800A23BC(c); // 800CE088
  c->lr=0x800CE090u; f_800BB828(c); // 800CE08C
  c->r[4]=c->r[30]|c->r[30]; // 800CE090
  c->lr=0x800CE098u; f_800BB99C(c); // 800CE094
  c->lr=0x800CE09Cu; f_800CFA64(c); // 800CE098
  cmps(c,0,(int32_t)c->r[3],0); // 800CE09C
  if (!crb(c,2)) { goto L_800CE0F4; } // 800CE0A0
  c->r[0]=0u+0x00000001u; // 800CE0A4
  W32(c->r[29]+0x00000314u,c->r[0]); // 800CE0A8
  c->lr=0x800CE0B0u; f_800A23BC(c); // 800CE0AC
  c->lr=0x800CE0B4u; f_800BB828(c); // 800CE0B0
  c->r[4]=c->r[30]|c->r[30]; // 800CE0B4
  c->lr=0x800CE0BCu; f_800BB99C(c); // 800CE0B8
  c->lr=0x800CE0C0u; f_800CFA4C(c); // 800CE0BC
  W32(c->r[29]+0x00000304u,c->r[3]); // 800CE0C0
  c->lr=0x800CE0C8u; f_800A23BC(c); // 800CE0C4
  c->lr=0x800CE0CCu; f_800BB828(c); // 800CE0C8
  c->r[4]=c->r[30]|c->r[30]; // 800CE0CC
  c->lr=0x800CE0D4u; f_800BB99C(c); // 800CE0D0
  c->lr=0x800CE0D8u; f_800CFA5C(c); // 800CE0D4
  {uint32_t ea=c->r[29]+0x00000308u; WF32(ea,c->f[1]);} // 800CE0D8
  c->lr=0x800CE0E0u; f_800A23BC(c); // 800CE0DC
  c->lr=0x800CE0E4u; f_800BB828(c); // 800CE0E0
  c->r[4]=c->r[30]|c->r[30]; // 800CE0E4
  c->lr=0x800CE0ECu; f_800BB99C(c); // 800CE0E8
  c->lr=0x800CE0F0u; f_800CFA54(c); // 800CE0EC
  W32(c->r[29]+0x0000030Cu,c->r[3]); // 800CE0F0
L_800CE0F4:;
  c->lr=0x800CE0F8u; f_800A23BC(c); // 800CE0F4
  c->lr=0x800CE0FCu; f_800BB818(c); // 800CE0F8
  c->r[4]=0u+0x00000001u; // 800CE0FC
  c->lr=0x800CE104u; f_800BBF74(c); // 800CE100
  c->lr=0x800CE108u; f_800CF4C4(c); // 800CE104
  W32(c->r[29]+0x00000310u,c->r[3]); // 800CE108
  c->lr=0x800CE110u; f_800A23BC(c); // 800CE10C
  c->lr=0x800CE114u; f_800E2BE0(c); // 800CE110
  c->r[3]=c->r[29]|c->r[29]; // 800CE114
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CE118
  c->lr=0x800CE120u; f_800BBBC0(c); // 800CE11C
  c->lr=0x800CE124u; f_800CBD44(c); // 800CE120
  c->lr=0x800CE128u; f_800A23BC(c); // 800CE124
  c->lr=0x800CE12Cu; f_800A23C8(c); // 800CE128
  c->r[4]=R32(c->r[29]+0x00000274u); // 800CE12C
  c->lr=0x800CE134u; f_800C01C8(c); // 800CE130
  cmps(c,0,(int32_t)c->r[3],0); // 800CE134
  if (crb(c,2)) { goto L_800CE19C; } // 800CE138
  c->lr=0x800CE140u; f_8006E268(c); // 800CE13C
  c->lr=0x800CE144u; f_80073690(c); // 800CE140
  cmps(c,0,(int32_t)c->r[3],4); // 800CE144
  if (!crb(c,2)) { goto L_800CE178; } // 800CE148
  c->lr=0x800CE150u; f_800A23BC(c); // 800CE14C
  c->lr=0x800CE154u; f_800A23B4(c); // 800CE150
  c->r[4]=0u+0x00000000u; // 800CE154
  c->r[5]=0u+0x00000000u; // 800CE158
  c->lr=0x800CE160u; f_800DB5BC(c); // 800CE15C
  c->lr=0x800CE164u; f_800A23BC(c); // 800CE160
  c->lr=0x800CE168u; f_800A23B4(c); // 800CE164
  c->r[4]=0u+0x00000000u; // 800CE168
  c->r[5]=0u+0x00000001u; // 800CE16C
  c->lr=0x800CE174u; f_800DB5BC(c); // 800CE170
  goto L_800CE190; // 800CE174
L_800CE178:;
  c->lr=0x800CE17Cu; f_8007B524(c); // 800CE178
  c->lr=0x800CE180u; f_800A08FC(c); // 800CE17C
  W32(c->r[29]+0x0000024Cu,c->r[3]); // 800CE180
  c->lr=0x800CE188u; f_8007B524(c); // 800CE184
  c->r[4]=0u+0x00000000u; // 800CE188
  c->lr=0x800CE190u; f_800A08C4(c); // 800CE18C
L_800CE190:;
  c->r[0]=R32(c->r[29]+0x00000028u); // 800CE190
  c->r[0]=c->r[0]|0x00800000u; // 800CE194
  W32(c->r[29]+0x00000028u,c->r[0]); // 800CE198
L_800CE19C:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE19C
  c->lr=0x800CE1A4u; f_800CBE9C(c); // 800CE1A0
  c->r[3]=0u+0x00000000u; // 800CE1A4
  c->lr=0x800CE1ACu; f_8005D9C8(c); // 800CE1A8
L_800CE1AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE1AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE1B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CE1B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE1B8
  c->lr=c->r[0]; // 800CE1BC
  c->r[1]=c->r[1]+0x00000020u; // 800CE1C0
  return; // 800CE1C4
}

// fn_800CE1C8
void f_800CE1C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE1C8
  c->r[0]=c->lr; // 800CE1CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CE1D0
  c->r[11]=c->r[1]+0x00000030u; // 800CE1D4
  c->lr=0x800CE1DCu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE1D8
  c->r[31]=c->r[3]|c->r[3]; // 800CE1DC
  c->lr=0x800CE1E4u; f_800A23BC(c); // 800CE1E0
  c->lr=0x800CE1E8u; f_800A23C4(c); // 800CE1E4
  c->lr=0x800CE1ECu; f_800BBF6C(c); // 800CE1E8
  c->r[25]=c->r[3]|c->r[3]; // 800CE1EC
  c->lr=0x800CE1F4u; f_800A23BC(c); // 800CE1F0
  c->lr=0x800CE1F8u; f_800A23C8(c); // 800CE1F4
  c->r[4]=R32(c->r[31]+0x00000274u); // 800CE1F8
  c->lr=0x800CE200u; f_800C01C8(c); // 800CE1FC
  cmps(c,0,(int32_t)c->r[3],0); // 800CE200
  if (crb(c,2)) { goto L_800CE5A8; } // 800CE204
  c->lr=0x800CE20Cu; f_800A23BC(c); // 800CE208
  c->lr=0x800CE210u; f_800A23C8(c); // 800CE20C
  c->r[4]=R32(c->r[31]+0x00000274u); // 800CE210
  c->lr=0x800CE218u; f_800BBBC0(c); // 800CE214
  c->r[26]=c->r[3]|c->r[3]; // 800CE218
  cmps(c,0,(int32_t)c->r[3],0); // 800CE21C
  if (crb(c,2)) { goto L_800CE5A8; } // 800CE220
  c->lr=0x800CE228u; f_800CBF88(c); // 800CE224
  c->r[28]=0u+0x00000000u; // 800CE228
  c->r[29]=c->r[31]|c->r[31]; // 800CE22C
  goto L_800CE2A0; // 800CE230
L_800CE234:;
  c->r[27]=R32(c->r[29]+0x000000C4u); // 800CE234
  c->lr=0x800CE23Cu; f_800A23BC(c); // 800CE238
  c->lr=0x800CE240u; f_800BB800(c); // 800CE23C
  c->r[4]=c->r[27]|c->r[27]; // 800CE240
  c->lr=0x800CE248u; f_800C1284(c); // 800CE244
  cmps(c,0,(int32_t)c->r[3],0); // 800CE248
  if (crb(c,2)) { goto L_800CE298; } // 800CE24C
  c->lr=0x800CE254u; f_800A23BC(c); // 800CE250
  c->lr=0x800CE258u; f_800BB800(c); // 800CE254
  c->r[4]=c->r[27]|c->r[27]; // 800CE258
  c->lr=0x800CE260u; f_800BBD58(c); // 800CE25C
  c->lr=0x800CE264u; f_800C85F0(c); // 800CE260
  c->lr=0x800CE268u; f_800A23BC(c); // 800CE264
  c->lr=0x800CE26Cu; f_800BB800(c); // 800CE268
  c->r[4]=c->r[27]|c->r[27]; // 800CE26C
  c->lr=0x800CE274u; f_800BBD58(c); // 800CE270
  c->r[4]=0u+0x00000000u; // 800CE274
  c->lr=0x800CE27Cu; f_800C9438(c); // 800CE278
  c->lr=0x800CE280u; f_800A23BC(c); // 800CE27C
  c->lr=0x800CE284u; f_800BB800(c); // 800CE280
  c->r[4]=c->r[27]|c->r[27]; // 800CE284
  c->lr=0x800CE28Cu; f_800BBD58(c); // 800CE288
  c->r[4]=0u+0x00000000u; // 800CE28C
  c->r[5]=0u+0x00000000u; // 800CE290
  c->lr=0x800CE298u; f_800C7B08(c); // 800CE294
L_800CE298:;
  c->r[29]=c->r[29]+0x00000018u; // 800CE298
  c->r[28]=c->r[28]+0x00000001u; // 800CE29C
L_800CE2A0:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800CE2A0
  cmpu(c,0,c->r[28],c->r[0]); // 800CE2A4
  if (crb(c,0)) { IRQCHK(c); goto L_800CE234; } // 800CE2A8
  c->r[3]=c->r[26]|c->r[26]; // 800CE2AC
  c->lr=0x800CE2B4u; f_800CA7FC(c); // 800CE2B0
  cmps(c,0,(int32_t)c->r[3],0); // 800CE2B4
  if (crb(c,2)) { goto L_800CE348; } // 800CE2B8
  c->r[3]=c->r[26]|c->r[26]; // 800CE2BC
  c->lr=0x800CE2C4u; f_800CBDE0(c); // 800CE2C0
  c->lr=0x800CE2C8u; f_800A23BC(c); // 800CE2C4
  c->lr=0x800CE2CCu; f_800C23E4(c); // 800CE2C8
  c->r[27]=c->r[3]|c->r[3]; // 800CE2CC
  c->lr=0x800CE2D4u; f_800A23BC(c); // 800CE2D0
  c->lr=0x800CE2D8u; f_800BB810(c); // 800CE2D4
  c->r[4]=c->r[27]|c->r[27]; // 800CE2D8
  c->r[5]=0u+0x00000001u; // 800CE2DC
  c->lr=0x800CE2E4u; f_800BF5DC(c); // 800CE2E0
  c->lr=0x800CE2E8u; f_800A23BC(c); // 800CE2E4
  c->lr=0x800CE2ECu; f_800BB808(c); // 800CE2E8
  c->r[4]=c->r[27]|c->r[27]; // 800CE2EC
  c->r[5]=0u+0x00000001u; // 800CE2F0
  c->lr=0x800CE2F8u; f_800C0ABC(c); // 800CE2F4
  c->lr=0x800CE2FCu; f_800A23BC(c); // 800CE2F8
  c->lr=0x800CE300u; f_800BB828(c); // 800CE2FC
  c->r[4]=c->r[27]|c->r[27]; // 800CE300
  c->r[5]=0u+0x00000001u; // 800CE304
  c->lr=0x800CE30Cu; f_800BE758(c); // 800CE308
  c->lr=0x800CE310u; f_800A23BC(c); // 800CE30C
  c->lr=0x800CE314u; f_800BB800(c); // 800CE310
  c->r[4]=c->r[27]|c->r[27]; // 800CE314
  c->r[5]=0u+0x00000001u; // 800CE318
  c->lr=0x800CE320u; f_800C1038(c); // 800CE31C
  c->lr=0x800CE324u; f_800A23BC(c); // 800CE320
  c->lr=0x800CE328u; f_800C23AC(c); // 800CE324
  c->r[4]=c->r[27]|c->r[27]; // 800CE328
  c->r[5]=0u+0x00000001u; // 800CE32C
  c->lr=0x800CE334u; f_800C04F8(c); // 800CE330
  c->lr=0x800CE338u; f_800A23BC(c); // 800CE334
  c->lr=0x800CE33Cu; f_800BB7F0(c); // 800CE338
  c->r[4]=c->r[27]|c->r[27]; // 800CE33C
  c->r[5]=0u+0x00000001u; // 800CE340
  c->lr=0x800CE348u; f_800C15BC(c); // 800CE344
L_800CE348:;
  c->r[28]=0u+0x00000000u; // 800CE348
  c->r[29]=c->r[31]|c->r[31]; // 800CE34C
  c->r[30]=0u+0x00000000u; // 800CE350
  goto L_800CE434; // 800CE354
L_800CE358:;
  c->r[27]=R32(c->r[29]+0x000000C4u); // 800CE358
  W32(c->r[29]+0x000000C4u,c->r[30]); // 800CE35C
  c->lr=0x800CE364u; f_800A23BC(c); // 800CE360
  c->lr=0x800CE368u; f_800BB800(c); // 800CE364
  c->r[4]=c->r[27]|c->r[27]; // 800CE368
  c->lr=0x800CE370u; f_800C1284(c); // 800CE36C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE370
  if (crb(c,2)) { goto L_800CE42C; } // 800CE374
  c->lr=0x800CE37Cu; f_800A23BC(c); // 800CE378
  c->lr=0x800CE380u; f_800BB800(c); // 800CE37C
  c->r[4]=c->r[27]|c->r[27]; // 800CE380
  c->lr=0x800CE388u; f_800BBD58(c); // 800CE384
  c->r[24]=c->r[3]|c->r[3]; // 800CE388
  cmps(c,0,(int32_t)c->r[3],0); // 800CE38C
  if (crb(c,2)) { goto L_800CE42C; } // 800CE390
  cmpu(c,0,c->r[27],c->r[25]); // 800CE394
  if (crb(c,2)) { goto L_800CE42C; } // 800CE398
  c->lr=0x800CE3A0u; f_800C9F08(c); // 800CE39C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE3A0
  if (!crb(c,2)) { goto L_800CE42C; } // 800CE3A4
  c->r[3]=c->r[24]|c->r[24]; // 800CE3A8
  c->lr=0x800CE3B0u; f_800C9ED8(c); // 800CE3AC
  cmps(c,0,(int32_t)c->r[3],0); // 800CE3B0
  if (crb(c,2)) { goto L_800CE42C; } // 800CE3B4
  c->r[3]=c->r[24]|c->r[24]; // 800CE3B8
  c->r[4]=0u+0x00000001u; // 800CE3BC
  c->lr=0x800CE3C4u; f_800C9438(c); // 800CE3C0
  cmps(c,0,(int32_t)c->r[25],0); // 800CE3C4
  if (crb(c,2)) { goto L_800CE3F4; } // 800CE3C8
  c->lr=0x800CE3D0u; f_800A23BC(c); // 800CE3CC
  c->lr=0x800CE3D4u; f_800BB800(c); // 800CE3D0
  c->r[4]=c->r[25]|c->r[25]; // 800CE3D4
  c->lr=0x800CE3DCu; f_800BBD58(c); // 800CE3D8
  c->r[4]=0u+0x00000000u; // 800CE3DC
  c->lr=0x800CE3E4u; f_800C95A0(c); // 800CE3E0
  c->r[5]=c->r[3]|c->r[3]; // 800CE3E4
  c->r[3]=c->r[24]|c->r[24]; // 800CE3E8
  c->r[4]=c->r[25]|c->r[25]; // 800CE3EC
  c->lr=0x800CE3F4u; f_800C94F4(c); // 800CE3F0
L_800CE3F4:;
  c->r[3]=c->r[24]|c->r[24]; // 800CE3F4
  c->lr=0x800CE3FCu; f_800BE3E4(c); // 800CE3F8
  cmps(c,0,(int32_t)c->r[3],0); // 800CE3FC
  if (crb(c,2)) { goto L_800CE410; } // 800CE400
  c->r[3]=c->r[24]|c->r[24]; // 800CE404
  c->r[4]=0u+0x00000000u; // 800CE408
  c->lr=0x800CE410u; f_800C8F70(c); // 800CE40C
L_800CE410:;
  c->r[3]=c->r[24]|c->r[24]; // 800CE410
  c->lr=0x800CE418u; f_800C9F98(c); // 800CE414
  cmps(c,0,(int32_t)c->r[3],0); // 800CE418
  if (crb(c,2)) { goto L_800CE42C; } // 800CE41C
  c->r[3]=c->r[24]|c->r[24]; // 800CE420
  c->r[4]=0u+0x00000001u; // 800CE424
  c->lr=0x800CE42Cu; f_800C8EF8(c); // 800CE428
L_800CE42C:;
  c->r[29]=c->r[29]+0x00000018u; // 800CE42C
  c->r[28]=c->r[28]+0x00000001u; // 800CE430
L_800CE434:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800CE434
  cmpu(c,0,c->r[28],c->r[0]); // 800CE438
  if (crb(c,0)) { IRQCHK(c); goto L_800CE358; } // 800CE43C
  c->r[0]=0u+0x00000000u; // 800CE440
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800CE444
  c->r[3]=c->r[26]|c->r[26]; // 800CE448
  c->lr=0x800CE450u; f_800CA7FC(c); // 800CE44C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE450
  if (crb(c,2)) { goto L_800CE478; } // 800CE454
  c->lr=0x800CE45Cu; f_800A23BC(c); // 800CE458
  c->lr=0x800CE460u; f_800E2BF0(c); // 800CE45C
  c->r[3]=c->r[26]|c->r[26]; // 800CE460
  c->lr=0x800CE468u; f_800CA7DC(c); // 800CE464
  cmps(c,0,(int32_t)c->r[3],0); // 800CE468
  if (!crb(c,2)) { goto L_800CE478; } // 800CE46C
  c->r[3]=c->r[31]|c->r[31]; // 800CE470
  c->lr=0x800CE478u; f_800CD37C(c); // 800CE474
L_800CE478:;
  c->r[3]=c->r[26]|c->r[26]; // 800CE478
  c->lr=0x800CE480u; f_800CA7FC(c); // 800CE47C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800CE480
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800CE484
  cmps(c,0,(int32_t)c->r[0],0); // 800CE488
  if (crb(c,2)) { goto L_800CE4AC; } // 800CE48C
  c->lr=0x800CE494u; f_800A23BC(c); // 800CE490
  c->lr=0x800CE498u; f_800A23C4(c); // 800CE494
  c->r[4]=0u+0x00000002u; // 800CE498
  c->lr=0x800CE4A0u; f_800D88CC(c); // 800CE49C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800CE4A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800CE4A4
  W32(c->r[31]+0x00000028u,c->r[0]); // 800CE4A8
L_800CE4AC:;
  c->lr=0x800CE4B0u; f_800A23BC(c); // 800CE4AC
  c->lr=0x800CE4B4u; f_800BB700(c); // 800CE4B0
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800CE4B4
  c->lr=0x800CE4BCu; f_800BBEA4(c); // 800CE4B8
  c->r[25]=c->r[3]|c->r[3]; // 800CE4BC
  cmps(c,0,(int32_t)c->r[3],0); // 800CE4C0
  if (crb(c,2)) { goto L_800CE578; } // 800CE4C4
  c->lr=0x800CE4CCu; f_8006E268(c); // 800CE4C8
  c->lr=0x800CE4D0u; f_80073690(c); // 800CE4CC
  cmps(c,0,(int32_t)c->r[3],5); // 800CE4D0
  if (crb(c,2)) { goto L_800CE4E0; } // 800CE4D4
  if (!crb(c,0)) { goto L_800CE578; } // 800CE4D8
  goto L_800CE578; // 800CE4DC
L_800CE4E0:;
  c->r[0]=R32(c->r[31]+0x00000250u); // 800CE4E0
  cmps(c,0,(int32_t)c->r[0],0); // 800CE4E4
  if (crb(c,2)) { goto L_800CE578; } // 800CE4E8
  c->lr=0x800CE4F0u; f_800A23BC(c); // 800CE4EC
  c->lr=0x800CE4F4u; f_800BB700(c); // 800CE4F0
  c->r[4]=c->r[25]|c->r[25]; // 800CE4F4
  c->lr=0x800CE4FCu; f_800BBE64(c); // 800CE4F8
  c->lr=0x800CE500u; f_800CA330(c); // 800CE4FC
  c->r[27]=c->r[3]|c->r[3]; // 800CE500
  c->lr=0x800CE508u; f_800A23BC(c); // 800CE504
  c->lr=0x800CE50Cu; f_800BB700(c); // 800CE508
  c->r[4]=c->r[25]|c->r[25]; // 800CE50C
  c->lr=0x800CE514u; f_800BBE64(c); // 800CE510
  c->r[4]=0u+0x00000000u; // 800CE514
  c->lr=0x800CE51Cu; f_800D2D18(c); // 800CE518
  c->lr=0x800CE520u; f_8006E268(c); // 800CE51C
  c->r[4]=0u+0x00000001u; // 800CE520
  c->lr=0x800CE528u; f_80073A50(c); // 800CE524
  {uint32_t ea=c->r[31]+0x00000254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE528
  {uint32_t ea=c->r[2]+0xFFFF8858u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CE52C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CE530
  {uint32_t ea=c->r[31]+0x00000254u; WF32(ea,c->f[0]);} // 800CE534
  c->r[3]=c->r[27]|c->r[27]; // 800CE538
  c->r[4]=c->r[31]+0x00000254u; // 800CE53C
  c->r[5]=c->r[31]+0x00000260u; // 800CE540
  c->r[6]=c->r[31]+0x0000026Cu; // 800CE544
  c->lr=0x800CE54Cu; f_8005F090(c); // 800CE548
  c->r[3]=c->r[27]|c->r[27]; // 800CE54C
  {uint32_t ea=c->r[31]+0x00000270u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE550
  c->lr=0x800CE558u; f_8005F010(c); // 800CE554
  c->lr=0x800CE55Cu; f_800A23BC(c); // 800CE558
  c->lr=0x800CE560u; f_800BB700(c); // 800CE55C
  c->r[4]=c->r[25]|c->r[25]; // 800CE560
  c->lr=0x800CE568u; f_800BBE64(c); // 800CE564
  {uint32_t ea=c->r[31]+0x00000270u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE568
  c->lr=0x800CE570u; f_800BB674(c); // 800CE56C
  c->r[0]=0u+0x00000000u; // 800CE570
  W32(c->r[31]+0x00000250u,c->r[0]); // 800CE574
L_800CE578:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE578
  c->lr=0x800CE580u; f_800BBF88(c); // 800CE57C
  c->r[24]=c->r[3]|c->r[3]; // 800CE580
  cmps(c,0,(int32_t)c->r[3],0); // 800CE584
  if (crb(c,2)) { goto L_800CE5A0; } // 800CE588
  c->lr=0x800CE590u; f_8006592C(c); // 800CE58C
  c->r[4]=c->r[24]|c->r[24]; // 800CE590
  c->r[5]=0u+0xFFFFFFFFu; // 800CE594
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CE598
  c->lr=0x800CE5A0u; f_80048BF8(c); // 800CE59C
L_800CE5A0:;
  c->r[3]=0u+0x00000001u; // 800CE5A0
  c->lr=0x800CE5A8u; f_8005D9C8(c); // 800CE5A4
L_800CE5A8:;
  c->r[11]=c->r[1]+0x00000030u; // 800CE5A8
  c->lr=0x800CE5B0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE5AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CE5B0
  c->lr=c->r[0]; // 800CE5B4
  c->r[1]=c->r[1]+0x00000030u; // 800CE5B8
  return; // 800CE5BC
}

// fn_800CE5C0
void f_800CE5C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE5C0
  c->r[0]=c->lr; // 800CE5C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE5C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE5CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CE5D0
  c->r[30]=c->r[3]|c->r[3]; // 800CE5D4
  c->r[31]=c->r[4]|c->r[4]; // 800CE5D8
  c->lr=0x800CE5E0u; f_800CE704(c); // 800CE5DC
  W32(c->r[30]+0x0000003Cu,c->r[31]); // 800CE5E0
  c->r[3]=c->r[31]|c->r[31]; // 800CE5E4
  c->lr=0x800CE5ECu; f_8007BD1C(c); // 800CE5E8
  c->r[3]=c->r[30]+0x0000002Cu; // 800CE5EC
  c->r[4]=0u+0x00000001u; // 800CE5F0
  c->lr=0x800CE5F8u; f_800BB8E4(c); // 800CE5F4
  c->r[0]=0u+0x00000001u; // 800CE5F8
  W32(c->r[30]+0x00000278u,c->r[0]); // 800CE5FC
  c->r[0]=0u+0x00000000u; // 800CE600
  W32(c->r[30]+0x00000038u,c->r[0]); // 800CE604
  W32(c->r[30]+0x00000274u,c->r[0]); // 800CE608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE60C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CE610
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE614
  c->lr=c->r[0]; // 800CE618
  c->r[1]=c->r[1]+0x00000010u; // 800CE61C
  return; // 800CE620
}

// fn_800CE624
void f_800CE624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE624
  c->r[0]=c->lr; // 800CE628
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE62C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE630
  c->r[31]=c->r[3]|c->r[3]; // 800CE634
  c->lr=0x800CE63Cu; f_8007BE68(c); // 800CE638
  c->lr=0x800CE640u; f_8007BDEC(c); // 800CE63C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800CE640
  c->lr=0x800CE648u; f_8007BD50(c); // 800CE644
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800CE648
  c->lr=0x800CE650u; f_8007BD1C(c); // 800CE64C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE650
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE654
  c->lr=c->r[0]; // 800CE658
  c->r[1]=c->r[1]+0x00000010u; // 800CE65C
  return; // 800CE660
}

// fn_800CE664
void f_800CE664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE664
  c->r[0]=c->lr; // 800CE668
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE66C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE670
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE674
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CE678
  c->r[29]=c->r[3]|c->r[3]; // 800CE67C
  c->r[30]=c->r[4]|c->r[4]; // 800CE680
  c->r[31]=c->r[5]|c->r[5]; // 800CE684
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800CE688
  cmps(c,0,(int32_t)c->r[0],0); // 800CE68C
  if (crb(c,2)) { goto L_800CE6E8; } // 800CE690
  c->r[3]=c->r[3]+0x00000080u; // 800CE694
  c->lr=0x800CE69Cu; f_802E9548(c); // 800CE698
  cmps(c,0,(int32_t)c->r[31],0); // 800CE69C
  if (crb(c,2)) { goto L_800CE6C4; } // 800CE6A0
  c->r[3]=c->r[29]|c->r[29]; // 800CE6A4
  c->r[4]=c->r[30]|c->r[30]; // 800CE6A8
  c->lr=0x800CE6B0u; f_800BBC00(c); // 800CE6AC
  c->r[5]=c->r[3]|c->r[3]; // 800CE6B0
  c->r[3]=c->r[29]|c->r[29]; // 800CE6B4
  c->r[4]=0u+0x00000003u; // 800CE6B8
  c->lr=0x800CE6C0u; f_800CF3C8(c); // 800CE6BC
  goto L_800CE6E8; // 800CE6C0
L_800CE6C4:;
  c->r[3]=c->r[29]|c->r[29]; // 800CE6C4
  c->lr=0x800CE6CCu; f_800CDEF0(c); // 800CE6C8
  c->lr=0x800CE6D0u; f_8007BE68(c); // 800CE6CC
  c->lr=0x800CE6D4u; f_8007BDEC(c); // 800CE6D0
  c->r[0]=0u+0x00000003u; // 800CE6D4
  W32(c->r[29]+0x00000278u,c->r[0]); // 800CE6D8
  c->r[3]=c->r[29]+0x0000002Cu; // 800CE6DC
  c->r[4]=0u+0x00000001u; // 800CE6E0
  c->lr=0x800CE6E8u; f_800BB8E4(c); // 800CE6E4
L_800CE6E8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE6E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE6EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CE6F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE6F4
  c->lr=c->r[0]; // 800CE6F8
  c->r[1]=c->r[1]+0x00000020u; // 800CE6FC
  return; // 800CE700
}

// fn_800CE704
void f_800CE704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE704
  c->r[0]=c->lr; // 800CE708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE70C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE710
  c->r[31]=c->r[3]|c->r[3]; // 800CE714
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800CE718
  cmps(c,0,(int32_t)c->r[0],0); // 800CE71C
  if (crb(c,2)) { goto L_800CE758; } // 800CE720
  c->lr=0x800CE728u; f_8007BE68(c); // 800CE724
  c->lr=0x800CE72Cu; f_8007BDEC(c); // 800CE728
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800CE72C
  c->lr=0x800CE734u; f_8007BD50(c); // 800CE730
  c->r[3]=c->r[31]+0x0000002Cu; // 800CE734
  c->r[4]=0u+0x00000000u; // 800CE738
  c->lr=0x800CE740u; f_800BB8E4(c); // 800CE73C
  c->r[0]=0u+0x00000001u; // 800CE740
  W32(c->r[31]+0x00000278u,c->r[0]); // 800CE744
  c->r[0]=0u+0x00000000u; // 800CE748
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800CE74C
  W32(c->r[31]+0x00000274u,c->r[0]); // 800CE750
  W32(c->r[31]+0x000002E8u,c->r[0]); // 800CE754
L_800CE758:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CE758
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CE75C
  c->lr=c->r[0]; // 800CE760
  c->r[1]=c->r[1]+0x00000010u; // 800CE764
  return; // 800CE768
}

// fn_800CE76C
void f_800CE76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE76C
  c->r[0]=c->lr; // 800CE770
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE774
  c->r[11]=c->r[1]+0x00000020u; // 800CE778
  c->lr=0x800CE780u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CE77C
  c->r[27]=c->r[3]|c->r[3]; // 800CE780
  c->r[28]=c->r[4]|c->r[4]; // 800CE784
  c->r[0]=0u+0x00000000u; // 800CE788
  W32(c->r[3]+0x0000027Cu,c->r[0]); // 800CE78C
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CE790
  c->r[0]=rotl(c->r[0],0)&0x00200000u; // 800CE794
  cmps(c,0,(int32_t)c->r[0],0); // 800CE798
  if (crb(c,2)) { goto L_800CE7A8; } // 800CE79C
  c->r[3]=0u+0x00000000u; // 800CE7A0
  goto L_800CE8E0; // 800CE7A4
L_800CE7A8:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 800CE7A8
  cmps(c,0,(int32_t)c->r[0],0); // 800CE7AC
  if (!crb(c,2)) { goto L_800CE7BC; } // 800CE7B0
  c->r[3]=0u+0x00000000u; // 800CE7B4
  goto L_800CE8E0; // 800CE7B8
L_800CE7BC:;
  c->lr=0x800CE7C0u; f_800CDEF0(c); // 800CE7BC
  cmps(c,0,(int32_t)c->r[3],0); // 800CE7C0
  if (crb(c,2)) { goto L_800CE7D0; } // 800CE7C4
  c->r[3]=0u+0x00000000u; // 800CE7C8
  goto L_800CE8E0; // 800CE7CC
L_800CE7D0:;
  c->lr=0x800CE7D4u; f_8007B524(c); // 800CE7D0
  c->lr=0x800CE7D8u; f_8009DA54(c); // 800CE7D4
  cmps(c,0,(int32_t)c->r[3],0); // 800CE7D8
  if (!crb(c,2)) { goto L_800CE7F8; } // 800CE7DC
  c->lr=0x800CE7E4u; f_8007B524(c); // 800CE7E0
  c->lr=0x800CE7E8u; f_8009D1CC(c); // 800CE7E4
  cmps(c,0,(int32_t)c->r[3],0); // 800CE7E8
  if (crb(c,2)) { goto L_800CE7F8; } // 800CE7EC
  c->r[3]=0u+0x00000000u; // 800CE7F0
  goto L_800CE8E0; // 800CE7F4
L_800CE7F8:;
  c->r[3]=c->r[27]|c->r[27]; // 800CE7F8
  c->lr=0x800CE800u; f_800C0238(c); // 800CE7FC
  c->r[30]=c->r[3]|c->r[3]; // 800CE800
  goto L_800CE888; // 800CE804
L_800CE808:;
  c->r[3]=c->r[27]|c->r[27]; // 800CE808
  c->r[4]=c->r[30]|c->r[30]; // 800CE80C
  c->lr=0x800CE814u; f_800BBBC0(c); // 800CE810
  c->r[31]=c->r[3]|c->r[3]; // 800CE814
  c->r[3]=c->r[27]|c->r[27]; // 800CE818
  c->r[4]=c->r[30]|c->r[30]; // 800CE81C
  c->lr=0x800CE824u; f_800C0270(c); // 800CE820
  c->r[29]=c->r[3]|c->r[3]; // 800CE824
  c->r[0]=R32(c->r[27]+0x00000028u); // 800CE828
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800CE82C
  cmps(c,0,(int32_t)c->r[0],0); // 800CE830
  if (crb(c,2)) { goto L_800CE858; } // 800CE834
  c->r[3]=c->r[31]|c->r[31]; // 800CE838
  c->lr=0x800CE840u; f_800CA7DC(c); // 800CE83C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE840
  if (!crb(c,2)) { goto L_800CE884; } // 800CE844
  c->r[3]=c->r[31]|c->r[31]; // 800CE848
  c->lr=0x800CE850u; f_800CA814(c); // 800CE84C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE850
  if (!crb(c,2)) { goto L_800CE884; } // 800CE854
L_800CE858:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE858
  c->lr=0x800CE860u; f_800CCBB8(c); // 800CE85C
  c->r[3]=c->r[31]|c->r[31]; // 800CE860
  c->lr=0x800CE868u; f_800CC580(c); // 800CE864
  cmps(c,0,(int32_t)c->r[3],0); // 800CE868
  if (crb(c,2)) { goto L_800CE884; } // 800CE86C
  c->r[3]=c->r[27]|c->r[27]; // 800CE870
  c->r[4]=0u+0x00000002u; // 800CE874
  c->r[5]=c->r[30]|c->r[30]; // 800CE878
  c->lr=0x800CE880u; f_800CF3C8(c); // 800CE87C
  goto L_800CE890; // 800CE880
L_800CE884:;
  c->r[30]=c->r[29]|c->r[29]; // 800CE884
L_800CE888:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CE888
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE808; } // 800CE88C
L_800CE890:;
  cmps(c,0,(int32_t)c->r[28],0); // 800CE890
  if (!crb(c,2)) { goto L_800CE8B0; } // 800CE894
  c->r[3]=c->r[27]|c->r[27]; // 800CE898
  c->lr=0x800CE8A0u; f_800CE8F8(c); // 800CE89C
  cmps(c,0,(int32_t)c->r[3],0); // 800CE8A0
  if (crb(c,2)) { goto L_800CE8B0; } // 800CE8A4
  c->r[3]=0u+0x00000001u; // 800CE8A8
  goto L_800CE8E0; // 800CE8AC
L_800CE8B0:;
  c->r[0]=R32(c->r[27]+0x00000028u); // 800CE8B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800CE8B4
  cmps(c,0,(int32_t)c->r[0],0); // 800CE8B8
  if (crb(c,2)) { goto L_800CE8DC; } // 800CE8BC
  c->lr=0x800CE8C4u; f_800A23BC(c); // 800CE8C0
  c->lr=0x800CE8C8u; f_800A23C4(c); // 800CE8C4
  c->r[4]=0u+0x00000002u; // 800CE8C8
  c->lr=0x800CE8D0u; f_800D88CC(c); // 800CE8CC
  c->r[0]=R32(c->r[27]+0x00000028u); // 800CE8D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800CE8D4
  W32(c->r[27]+0x00000028u,c->r[0]); // 800CE8D8
L_800CE8DC:;
  c->r[3]=0u+0x00000000u; // 800CE8DC
L_800CE8E0:;
  c->r[11]=c->r[1]+0x00000020u; // 800CE8E0
  c->lr=0x800CE8E8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CE8E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE8E8
  c->lr=c->r[0]; // 800CE8EC
  c->r[1]=c->r[1]+0x00000020u; // 800CE8F0
  return; // 800CE8F4
}

// fn_800CE8F8
void f_800CE8F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE8F8
  c->r[0]=c->lr; // 800CE8FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE900
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE904
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE908
  c->r[30]=c->r[3]|c->r[3]; // 800CE90C
  c->r[4]=c->r[1]+0x00000008u; // 800CE910
  c->lr=0x800CE918u; f_800CF438(c); // 800CE914
  cmps(c,0,(int32_t)c->r[3],0); // 800CE918
  if (crb(c,2)) { goto L_800CE9AC; } // 800CE91C
  c->r[4]=R32(c->r[1]+0x00000010u); // 800CE920
  W32(c->r[30]+0x00000274u,c->r[4]); // 800CE924
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CE928
  W32(c->r[30]+0x00000278u,c->r[0]); // 800CE92C
  c->r[3]=c->r[30]|c->r[30]; // 800CE930
  c->lr=0x800CE938u; f_800C01C8(c); // 800CE934
  cmps(c,0,(int32_t)c->r[3],0); // 800CE938
  if (crb(c,2)) { goto L_800CE998; } // 800CE93C
  c->r[3]=c->r[30]|c->r[30]; // 800CE940
  c->r[4]=R32(c->r[30]+0x00000274u); // 800CE944
  c->lr=0x800CE94Cu; f_800BBBC0(c); // 800CE948
  c->r[31]=c->r[3]|c->r[3]; // 800CE94C
  c->lr=0x800CE954u; f_800CA7FC(c); // 800CE950
  cmps(c,0,(int32_t)c->r[3],0); // 800CE954
  if (crb(c,2)) { goto L_800CE970; } // 800CE958
  c->lr=0x800CE960u; f_80154798(c); // 800CE95C
  c->lr=0x800CE964u; f_800A23BC(c); // 800CE960
  c->lr=0x800CE968u; f_800A23C4(c); // 800CE964
  c->r[4]=0u+0x00000001u; // 800CE968
  c->lr=0x800CE970u; f_800D8804(c); // 800CE96C
L_800CE970:;
  c->r[3]=c->r[31]|c->r[31]; // 800CE970
  c->lr=0x800CE978u; f_800CA814(c); // 800CE974
  cmps(c,0,(int32_t)c->r[3],0); // 800CE978
  if (crb(c,2)) { goto L_800CE998; } // 800CE97C
  c->lr=0x800CE984u; f_8006592C(c); // 800CE980
  c->r[4]=0u+0x00000004u; // 800CE984
  c->r[5]=0u+0x00000000u; // 800CE988
  c->r[6]=0u+0xFFFFFFFFu; // 800CE98C
  c->r[7]=0u+0xFFFFFFFFu; // 800CE990
  c->lr=0x800CE998u; f_80048F20(c); // 800CE994
L_800CE998:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800CE998
  c->r[4]=0u+0x00000001u; // 800CE99C
  c->lr=0x800CE9A4u; f_800BB8E4(c); // 800CE9A0
  c->r[3]=0u+0x00000001u; // 800CE9A4
  goto L_800CE9B0; // 800CE9A8
L_800CE9AC:;
  c->r[3]=0u+0x00000000u; // 800CE9AC
L_800CE9B0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE9B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE9B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE9B8
  c->lr=c->r[0]; // 800CE9BC
  c->r[1]=c->r[1]+0x00000020u; // 800CE9C0
  return; // 800CE9C4
}

// fn_800CE9C8
void f_800CE9C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE9C8
  c->r[0]=c->lr; // 800CE9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE9D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CE9D4
  c->r[31]=c->r[3]|c->r[3]; // 800CE9D8
  c->r[4]=R32(c->r[3]+0x00000274u); // 800CE9DC
  c->lr=0x800CE9E4u; f_800C01C8(c); // 800CE9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800CE9E4
  if (crb(c,2)) { goto L_800CEA00; } // 800CE9E8
  c->lr=0x800CE9F0u; f_800A23BC(c); // 800CE9EC
  c->lr=0x800CE9F4u; f_800A23C8(c); // 800CE9F0
  c->r[4]=R32(c->r[31]+0x00000274u); // 800CE9F4
  c->lr=0x800CE9FCu; f_800BBBC0(c); // 800CE9F8
  c->lr=0x800CEA00u; f_800CBD44(c); // 800CE9FC
L_800CEA00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CEA00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CEA04
  c->lr=c->r[0]; // 800CEA08
  c->r[1]=c->r[1]+0x00000010u; // 800CEA0C
  return; // 800CEA10
}

// fn_800CEA14
void f_800CEA14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEA14
  c->r[0]=c->lr; // 800CEA18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEA1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CEA20
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CEA24
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CEA28
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CEA2C
  c->r[28]=c->r[3]|c->r[3]; // 800CEA30
  c->r[30]=0u+0x00000000u; // 800CEA34
  c->r[31]=c->r[28]|c->r[28]; // 800CEA38
  goto L_800CEAD4; // 800CEA3C
L_800CEA40:;
  c->r[29]=R32(c->r[31]+0x000000C4u); // 800CEA40
  cmps(c,0,(int32_t)c->r[29],0); // 800CEA44
  if (crb(c,2)) { goto L_800CEACC; } // 800CEA48
  c->lr=0x800CEA50u; f_800A23BC(c); // 800CEA4C
  c->lr=0x800CEA54u; f_800BB800(c); // 800CEA50
  c->r[4]=c->r[29]|c->r[29]; // 800CEA54
  c->lr=0x800CEA5Cu; f_800C1284(c); // 800CEA58
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA5C
  if (crb(c,2)) { goto L_800CEACC; } // 800CEA60
  c->lr=0x800CEA68u; f_800A23BC(c); // 800CEA64
  c->lr=0x800CEA6Cu; f_800BB800(c); // 800CEA68
  c->r[4]=c->r[29]|c->r[29]; // 800CEA6C
  c->lr=0x800CEA74u; f_800BBD58(c); // 800CEA70
  c->lr=0x800CEA78u; f_800C9F08(c); // 800CEA74
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA78
  if (!crb(c,2)) { goto L_800CEACC; } // 800CEA7C
  c->lr=0x800CEA84u; f_800A23BC(c); // 800CEA80
  c->lr=0x800CEA88u; f_800BB800(c); // 800CEA84
  c->r[4]=c->r[29]|c->r[29]; // 800CEA88
  c->lr=0x800CEA90u; f_800BBD58(c); // 800CEA8C
  c->lr=0x800CEA94u; f_800C9F6C(c); // 800CEA90
  cmps(c,0,(int32_t)c->r[3],0); // 800CEA94
  if (!crb(c,2)) { goto L_800CEACC; } // 800CEA98
  c->lr=0x800CEAA0u; f_800A23BC(c); // 800CEA9C
  c->lr=0x800CEAA4u; f_800BB800(c); // 800CEAA0
  c->r[4]=c->r[29]|c->r[29]; // 800CEAA4
  c->lr=0x800CEAACu; f_800BBD58(c); // 800CEAA8
  c->r[4]=0u+0x00000000u; // 800CEAAC
  c->lr=0x800CEAB4u; f_800C8EF8(c); // 800CEAB0
  c->lr=0x800CEAB8u; f_800A23BC(c); // 800CEAB4
  c->lr=0x800CEABCu; f_800BB800(c); // 800CEAB8
  c->r[4]=c->r[29]|c->r[29]; // 800CEABC
  c->lr=0x800CEAC4u; f_800BBD58(c); // 800CEAC0
  c->r[4]=0u+0x00000001u; // 800CEAC4
  c->lr=0x800CEACCu; f_800C6B50(c); // 800CEAC8
L_800CEACC:;
  c->r[31]=c->r[31]+0x00000018u; // 800CEACC
  c->r[30]=c->r[30]+0x00000001u; // 800CEAD0
L_800CEAD4:;
  c->r[0]=R32(c->r[28]+0x000000C0u); // 800CEAD4
  cmpu(c,0,c->r[30],c->r[0]); // 800CEAD8
  if (crb(c,0)) { IRQCHK(c); goto L_800CEA40; } // 800CEADC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CEAE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CEAE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CEAE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CEAEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CEAF0
  c->lr=c->r[0]; // 800CEAF4
  c->r[1]=c->r[1]+0x00000020u; // 800CEAF8
  return; // 800CEAFC
}

// fn_800CEB00
void f_800CEB00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEB00
  c->r[0]=c->lr; // 800CEB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEB08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CEB0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CEB10
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CEB14
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CEB18
  c->r[28]=c->r[3]|c->r[3]; // 800CEB1C
  c->r[29]=c->r[4]|c->r[4]; // 800CEB20
  c->lr=0x800CEB28u; f_800A23BC(c); // 800CEB24
  c->lr=0x800CEB2Cu; f_800BB7F0(c); // 800CEB28
  c->lr=0x800CEB30u; f_800C2B94(c); // 800CEB2C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEB30
  if (!crb(c,2)) { goto L_800CEB40; } // 800CEB34
  c->r[3]=0u+0x00000000u; // 800CEB38
  goto L_800CEC30; // 800CEB3C
L_800CEB40:;
  c->lr=0x800CEB44u; f_800A23BC(c); // 800CEB40
  c->lr=0x800CEB48u; f_800BB828(c); // 800CEB44
  c->lr=0x800CEB4Cu; f_800E1DC4(c); // 800CEB48
  cmps(c,0,(int32_t)c->r[3],0); // 800CEB4C
  if (!crb(c,2)) { goto L_800CEB5C; } // 800CEB50
  c->r[3]=0u+0x00000000u; // 800CEB54
  goto L_800CEC30; // 800CEB58
L_800CEB5C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800CEB5C
  if (crb(c,2)) { goto L_800CEC2C; } // 800CEB60
  c->lr=0x800CEB68u; f_800A23BC(c); // 800CEB64
  c->lr=0x800CEB6Cu; f_800BB800(c); // 800CEB68
  c->lr=0x800CEB70u; f_800C9C38(c); // 800CEB6C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEB70
  if (!crb(c,2)) { goto L_800CEB80; } // 800CEB74
  c->r[3]=0u+0x00000000u; // 800CEB78
  goto L_800CEC30; // 800CEB7C
L_800CEB80:;
  c->r[30]=0u+0x00000000u; // 800CEB80
  c->r[31]=c->r[28]|c->r[28]; // 800CEB84
  goto L_800CEC20; // 800CEB88
L_800CEB8C:;
  c->r[29]=R32(c->r[31]+0x000000C4u); // 800CEB8C
  cmps(c,0,(int32_t)c->r[29],0); // 800CEB90
  if (crb(c,2)) { goto L_800CEC18; } // 800CEB94
  c->lr=0x800CEB9Cu; f_800A23BC(c); // 800CEB98
  c->lr=0x800CEBA0u; f_800BB800(c); // 800CEB9C
  c->r[4]=c->r[29]|c->r[29]; // 800CEBA0
  c->lr=0x800CEBA8u; f_800C1284(c); // 800CEBA4
  cmps(c,0,(int32_t)c->r[3],0); // 800CEBA8
  if (crb(c,2)) { goto L_800CEC18; } // 800CEBAC
  c->lr=0x800CEBB4u; f_800A23BC(c); // 800CEBB0
  c->lr=0x800CEBB8u; f_800BB800(c); // 800CEBB4
  c->r[4]=c->r[29]|c->r[29]; // 800CEBB8
  c->lr=0x800CEBC0u; f_800BBD58(c); // 800CEBBC
  c->lr=0x800CEBC4u; f_800C9F08(c); // 800CEBC0
  cmps(c,0,(int32_t)c->r[3],0); // 800CEBC4
  if (!crb(c,2)) { goto L_800CEC18; } // 800CEBC8
  c->lr=0x800CEBD0u; f_800A23BC(c); // 800CEBCC
  c->lr=0x800CEBD4u; f_800BB800(c); // 800CEBD0
  c->r[4]=c->r[29]|c->r[29]; // 800CEBD4
  c->lr=0x800CEBDCu; f_800BBD58(c); // 800CEBD8
  c->lr=0x800CEBE0u; f_800C9ED8(c); // 800CEBDC
  cmps(c,0,(int32_t)c->r[3],0); // 800CEBE0
  if (crb(c,2)) { goto L_800CEC18; } // 800CEBE4
  c->lr=0x800CEBECu; f_800A23BC(c); // 800CEBE8
  c->lr=0x800CEBF0u; f_800BB800(c); // 800CEBEC
  c->r[4]=c->r[29]|c->r[29]; // 800CEBF0
  c->lr=0x800CEBF8u; f_800BBD58(c); // 800CEBF4
  c->r[4]=0u+0x00000000u; // 800CEBF8
  c->lr=0x800CEC00u; f_800C9124(c); // 800CEBFC
  c->lr=0x800CEC04u; f_800A23BC(c); // 800CEC00
  c->lr=0x800CEC08u; f_800BB800(c); // 800CEC04
  c->r[4]=c->r[29]|c->r[29]; // 800CEC08
  c->lr=0x800CEC10u; f_800BBD58(c); // 800CEC0C
  c->r[4]=0u+0x00000001u; // 800CEC10
  c->lr=0x800CEC18u; f_800C8F70(c); // 800CEC14
L_800CEC18:;
  c->r[31]=c->r[31]+0x00000018u; // 800CEC18
  c->r[30]=c->r[30]+0x00000001u; // 800CEC1C
L_800CEC20:;
  c->r[0]=R32(c->r[28]+0x000000C0u); // 800CEC20
  cmpu(c,0,c->r[30],c->r[0]); // 800CEC24
  if (crb(c,0)) { IRQCHK(c); goto L_800CEB8C; } // 800CEC28
L_800CEC2C:;
  c->r[3]=0u+0x00000001u; // 800CEC2C
L_800CEC30:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CEC30
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CEC34
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CEC38
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CEC3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CEC40
  c->lr=c->r[0]; // 800CEC44
  c->r[1]=c->r[1]+0x00000020u; // 800CEC48
  return; // 800CEC4C
}

// fn_800CEC50
void f_800CEC50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEC50
  c->r[0]=c->lr; // 800CEC54
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CEC58
  c->r[11]=c->r[1]+0x00000060u; // 800CEC5C
  c->lr=0x800CEC64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CEC60
  c->r[27]=c->r[3]|c->r[3]; // 800CEC64
  c->r[3]=c->r[1]+0x00000014u; // 800CEC68
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC6C
  c->f[2]=c->f[1]; // 800CEC70
  c->f[3]=c->f[1]; // 800CEC74
  c->lr=0x800CEC7Cu; f_8004E34C(c); // 800CEC78
  c->r[3]=c->r[1]+0x00000008u; // 800CEC7C
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEC80
  c->f[2]=c->f[1]; // 800CEC84
  c->f[3]=c->f[1]; // 800CEC88
  c->lr=0x800CEC90u; f_8004E34C(c); // 800CEC8C
  c->r[3]=R32(c->r[27]+0x00000028u); // 800CEC90
  c->r[0]=rotl(c->r[3],0)&0x02000000u; // 800CEC94
  cmps(c,0,(int32_t)c->r[0],0); // 800CEC98
  if (!crb(c,2)) { goto L_800CEF3C; } // 800CEC9C
  c->r[0]=rotl(c->r[3],0)&0x00400000u; // 800CECA0
  cmps(c,0,(int32_t)c->r[0],0); // 800CECA4
  if (!crb(c,2)) { goto L_800CEF3C; } // 800CECA8
  c->r[3]=c->r[27]|c->r[27]; // 800CECAC
  c->r[4]=R32(c->r[27]+0x00000274u); // 800CECB0
  c->lr=0x800CECB8u; f_800C01C8(c); // 800CECB4
  cmps(c,0,(int32_t)c->r[3],0); // 800CECB8
  if (!crb(c,2)) { goto L_800CECCC; } // 800CECBC
  c->r[0]=0u+0x00000000u; // 800CECC0
  W32(c->r[27]+0x00000274u,c->r[0]); // 800CECC4
  goto L_800CEF3C; // 800CECC8
L_800CECCC:;
  c->lr=0x800CECD0u; f_8006E268(c); // 800CECCC
  c->lr=0x800CECD4u; f_80073690(c); // 800CECD0
  cmps(c,0,(int32_t)c->r[3],4); // 800CECD4
  if (!crb(c,2)) { goto L_800CED0C; } // 800CECD8
  c->r[3]=c->r[27]|c->r[27]; // 800CECDC
  c->r[4]=R32(c->r[27]+0x00000274u); // 800CECE0
  c->lr=0x800CECE8u; f_800C01C8(c); // 800CECE4
  cmps(c,0,(int32_t)c->r[3],0); // 800CECE8
  if (crb(c,2)) { goto L_800CED0C; } // 800CECEC
  c->lr=0x800CECF4u; f_800A23BC(c); // 800CECF0
  c->lr=0x800CECF8u; f_800A23B4(c); // 800CECF4
  c->lr=0x800CECFCu; f_800E1108(c); // 800CECF8
  c->r[3]=c->r[27]|c->r[27]; // 800CECFC
  c->r[4]=R32(c->r[27]+0x00000274u); // 800CED00
  c->lr=0x800CED08u; f_800BBBC0(c); // 800CED04
  c->lr=0x800CED0Cu; f_800CA7DC(c); // 800CED08
L_800CED0C:;
  c->lr=0x800CED10u; f_800A23BC(c); // 800CED0C
  c->lr=0x800CED14u; f_800BB700(c); // 800CED10
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800CED14
  c->lr=0x800CED1Cu; f_800BBEA4(c); // 800CED18
  c->r[31]=c->r[3]|c->r[3]; // 800CED1C
  cmps(c,0,(int32_t)c->r[3],0); // 800CED20
  if (crb(c,2)) { goto L_800CEE64; } // 800CED24
  c->lr=0x800CED2Cu; f_8006E268(c); // 800CED28
  c->lr=0x800CED30u; f_80073A60(c); // 800CED2C
  cmps(c,0,(int32_t)c->r[3],0); // 800CED30
  if (crb(c,2)) { goto L_800CEE64; } // 800CED34
  c->lr=0x800CED3Cu; f_800A23BC(c); // 800CED38
  c->lr=0x800CED40u; f_800BB700(c); // 800CED3C
  c->r[4]=c->r[31]|c->r[31]; // 800CED40
  c->lr=0x800CED48u; f_800BBE64(c); // 800CED44
  c->lr=0x800CED4Cu; f_800CA330(c); // 800CED48
  c->r[30]=c->r[3]|c->r[3]; // 800CED4C
  c->lr=0x800CED54u; f_800A23BC(c); // 800CED50
  c->lr=0x800CED58u; f_800BB700(c); // 800CED54
  c->r[4]=c->r[31]|c->r[31]; // 800CED58
  c->lr=0x800CED60u; f_800BBE64(c); // 800CED5C
  c->r[4]=0u+0x00000001u; // 800CED60
  c->lr=0x800CED68u; f_800D2D18(c); // 800CED64
  c->lr=0x800CED6Cu; f_8006E268(c); // 800CED68
  c->r[4]=0u+0x00000000u; // 800CED6C
  c->lr=0x800CED74u; f_80073A50(c); // 800CED70
  c->r[0]=0u+0x00000001u; // 800CED74
  W32(c->r[27]+0x00000250u,c->r[0]); // 800CED78
  c->r[3]=c->r[30]|c->r[30]; // 800CED7C
  c->r[4]=c->r[27]+0x00000254u; // 800CED80
  c->r[5]=c->r[27]+0x00000260u; // 800CED84
  c->r[6]=c->r[27]+0x0000026Cu; // 800CED88
  c->lr=0x800CED90u; f_8006E40C(c); // 800CED8C
  c->r[3]=c->r[30]|c->r[30]; // 800CED90
  c->lr=0x800CED98u; f_800CFB60(c); // 800CED94
  {uint32_t ea=c->r[27]+0x00000270u; WF32(ea,c->f[1]);} // 800CED98
  c->r[3]=c->r[1]+0x00000014u; // 800CED9C
  c->r[4]=c->r[27]+0x00000260u; // 800CEDA0
  c->lr=0x800CEDA8u; f_8004A65C(c); // 800CEDA4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDA8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800CEDAC
  {uint32_t ea=c->r[27]+0x00000264u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDB0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CEDB4
  {uint32_t ea=c->r[27]+0x00000254u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEDB8
  {uint32_t ea=c->r[2]+0xFFFF8858u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CEDBC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800CEDC0
  {uint32_t ea=c->r[27]+0x00000254u; WF32(ea,c->f[0]);} // 800CEDC4
  c->r[3]=c->r[30]|c->r[30]; // 800CEDC8
  c->r[4]=0u+0x00000040u; // 800CEDCC
  c->lr=0x800CEDD4u; f_8005EE5C(c); // 800CEDD0
  c->lr=0x800CEDD8u; f_800A23BC(c); // 800CEDD4
  c->lr=0x800CEDDCu; f_800BB700(c); // 800CEDD8
  c->r[4]=c->r[31]|c->r[31]; // 800CEDDC
  c->lr=0x800CEDE4u; f_800BBE64(c); // 800CEDE0
  c->r[4]=0u+0x00000000u; // 800CEDE4
  c->lr=0x800CEDECu; f_800D2748(c); // 800CEDE8
  c->lr=0x800CEDF0u; f_800A23BC(c); // 800CEDEC
  c->lr=0x800CEDF4u; f_800BB700(c); // 800CEDF0
  c->r[4]=c->r[31]|c->r[31]; // 800CEDF4
  c->lr=0x800CEDFCu; f_800BBE64(c); // 800CEDF8
  c->r[4]=c->r[27]+0x00000254u; // 800CEDFC
  c->lr=0x800CEE04u; f_800BB27C(c); // 800CEE00
  c->lr=0x800CEE08u; f_800A23BC(c); // 800CEE04
  c->lr=0x800CEE0Cu; f_800BB700(c); // 800CEE08
  c->r[4]=c->r[31]|c->r[31]; // 800CEE0C
  c->lr=0x800CEE14u; f_800BBE64(c); // 800CEE10
  c->r[4]=c->r[1]+0x00000014u; // 800CEE14
  c->lr=0x800CEE1Cu; f_800BB528(c); // 800CEE18
  c->lr=0x800CEE20u; f_800A23BC(c); // 800CEE1C
  c->lr=0x800CEE24u; f_800BB700(c); // 800CEE20
  c->r[4]=c->r[31]|c->r[31]; // 800CEE24
  c->lr=0x800CEE2Cu; f_800BBE64(c); // 800CEE28
  {uint32_t ea=c->r[27]+0x0000026Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEE2C
  c->lr=0x800CEE34u; f_800BB5B0(c); // 800CEE30
  c->lr=0x800CEE38u; f_800A23BC(c); // 800CEE34
  c->lr=0x800CEE3Cu; f_800BB700(c); // 800CEE38
  c->r[4]=c->r[31]|c->r[31]; // 800CEE3C
  c->lr=0x800CEE44u; f_800BBE64(c); // 800CEE40
  c->r[4]=c->r[1]+0x00000008u; // 800CEE44
  c->lr=0x800CEE4Cu; f_800BB56C(c); // 800CEE48
  c->lr=0x800CEE50u; f_800A23BC(c); // 800CEE4C
  c->lr=0x800CEE54u; f_800BB700(c); // 800CEE50
  c->r[4]=c->r[31]|c->r[31]; // 800CEE54
  c->lr=0x800CEE5Cu; f_800BBE64(c); // 800CEE58
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEE5C
  c->lr=0x800CEE64u; f_800D2488(c); // 800CEE60
L_800CEE64:;
  c->r[29]=0u+0x00000000u; // 800CEE64
  c->r[30]=c->r[27]|c->r[27]; // 800CEE68
  c->r[31]=0u+0x80460000u; // 800CEE6C
  goto L_800CEF14; // 800CEE70
L_800CEE74:;
  c->r[28]=R32(c->r[30]+0x000000C4u); // 800CEE74
  cmps(c,0,(int32_t)c->r[28],0); // 800CEE78
  if (crb(c,2)) { goto L_800CEF0C; } // 800CEE7C
  c->lr=0x800CEE84u; f_800A23BC(c); // 800CEE80
  c->lr=0x800CEE88u; f_800BB800(c); // 800CEE84
  c->r[4]=c->r[28]|c->r[28]; // 800CEE88
  c->lr=0x800CEE90u; f_800C1284(c); // 800CEE8C
  cmps(c,0,(int32_t)c->r[3],0); // 800CEE90
  if (crb(c,2)) { goto L_800CEF0C; } // 800CEE94
  c->lr=0x800CEE9Cu; f_800A23BC(c); // 800CEE98
  c->lr=0x800CEEA0u; f_800BB800(c); // 800CEE9C
  c->r[4]=c->r[28]|c->r[28]; // 800CEEA0
  c->lr=0x800CEEA8u; f_800BBD58(c); // 800CEEA4
  c->r[4]=0u+0x00000001u; // 800CEEA8
  c->r[5]=0u+0x00000001u; // 800CEEAC
  c->lr=0x800CEEB4u; f_800C7B08(c); // 800CEEB0
  c->lr=0x800CEEB8u; f_800A23BC(c); // 800CEEB4
  c->lr=0x800CEEBCu; f_800BB800(c); // 800CEEB8
  c->r[4]=c->r[28]|c->r[28]; // 800CEEBC
  c->lr=0x800CEEC4u; f_800BBD58(c); // 800CEEC0
  c->r[4]=0u+0x00000000u; // 800CEEC4
  c->lr=0x800CEECCu; f_800C9438(c); // 800CEEC8
  c->lr=0x800CEED0u; f_800A23BC(c); // 800CEECC
  c->lr=0x800CEED4u; f_800BB800(c); // 800CEED0
  c->r[4]=c->r[28]|c->r[28]; // 800CEED4
  c->lr=0x800CEEDCu; f_800BBD58(c); // 800CEED8
  c->lr=0x800CEEE0u; f_800C9FB0(c); // 800CEEDC
  c->r[5]=c->r[3]|c->r[3]; // 800CEEE0
  c->r[3]=c->r[1]+0x00000020u; // 800CEEE4
  c->r[4]=c->r[31]+0x0000015Cu; // 800CEEE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800CEEEC
  c->lr=0x800CEEF4u; f_802E7CC4(c); // 800CEEF0
  c->lr=0x800CEEF8u; f_800A23BC(c); // 800CEEF4
  c->lr=0x800CEEFCu; f_800BB800(c); // 800CEEF8
  c->r[4]=c->r[28]|c->r[28]; // 800CEEFC
  c->lr=0x800CEF04u; f_800BBD58(c); // 800CEF00
  c->r[4]=c->r[1]+0x00000020u; // 800CEF04
  c->lr=0x800CEF0Cu; f_800C84B8(c); // 800CEF08
L_800CEF0C:;
  c->r[30]=c->r[30]+0x00000018u; // 800CEF0C
  c->r[29]=c->r[29]+0x00000001u; // 800CEF10
L_800CEF14:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 800CEF14
  cmpu(c,0,c->r[29],c->r[0]); // 800CEF18
  if (crb(c,0)) { IRQCHK(c); goto L_800CEE74; } // 800CEF1C
  c->lr=0x800CEF24u; f_800A23BC(c); // 800CEF20
  c->lr=0x800CEF28u; f_800E2BE0(c); // 800CEF24
  c->r[0]=R32(c->r[27]+0x00000028u); // 800CEF28
  c->r[0]=c->r[0]|0x00400000u; // 800CEF2C
  W32(c->r[27]+0x00000028u,c->r[0]); // 800CEF30
  c->r[0]=rotl(c->r[0],0)&0xFDFFFFFFu; // 800CEF34
  W32(c->r[27]+0x00000028u,c->r[0]); // 800CEF38
L_800CEF3C:;
  c->r[11]=c->r[1]+0x00000060u; // 800CEF3C
  c->lr=0x800CEF44u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CEF40
  c->r[0]=R32(c->r[1]+0x00000064u); // 800CEF44
  c->lr=c->r[0]; // 800CEF48
  c->r[1]=c->r[1]+0x00000060u; // 800CEF4C
  return; // 800CEF50
}

// fn_800CEF54
void f_800CEF54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEF54
  c->r[0]=c->lr; // 800CEF58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CEF5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CEF60
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CEF64
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CEF68
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CEF6C
  c->r[28]=c->r[3]|c->r[3]; // 800CEF70
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CEF74
  c->r[0]=rotl(c->r[0],0)&0x00400000u; // 800CEF78
  cmps(c,0,(int32_t)c->r[0],0); // 800CEF7C
  if (crb(c,2)) { goto L_800CF024; } // 800CEF80
  c->r[29]=0u+0x00000000u; // 800CEF84
  c->r[31]=c->r[28]|c->r[28]; // 800CEF88
  goto L_800CF00C; // 800CEF8C
L_800CEF90:;
  c->r[30]=R32(c->r[31]+0x000000C4u); // 800CEF90
  c->lr=0x800CEF98u; f_800A23BC(c); // 800CEF94
  c->lr=0x800CEF9Cu; f_800BB800(c); // 800CEF98
  c->r[4]=c->r[30]|c->r[30]; // 800CEF9C
  c->lr=0x800CEFA4u; f_800C1284(c); // 800CEFA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CEFA4
  if (crb(c,2)) { goto L_800CF004; } // 800CEFA8
  c->lr=0x800CEFB0u; f_800A23BC(c); // 800CEFAC
  c->lr=0x800CEFB4u; f_800BB800(c); // 800CEFB0
  c->r[4]=c->r[30]|c->r[30]; // 800CEFB4
  c->lr=0x800CEFBCu; f_800BBD58(c); // 800CEFB8
  {uint32_t ea=c->r[2]+0xFFFF88B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEFBC
  c->lr=0x800CEFC4u; f_800C84A8(c); // 800CEFC0
  c->lr=0x800CEFC8u; f_800A23BC(c); // 800CEFC4
  c->lr=0x800CEFCCu; f_800BB800(c); // 800CEFC8
  c->r[4]=c->r[30]|c->r[30]; // 800CEFCC
  c->lr=0x800CEFD4u; f_800BBD58(c); // 800CEFD0
  c->lr=0x800CEFD8u; f_800C8560(c); // 800CEFD4
  c->lr=0x800CEFDCu; f_800A23BC(c); // 800CEFD8
  c->lr=0x800CEFE0u; f_800BB800(c); // 800CEFDC
  c->r[4]=c->r[30]|c->r[30]; // 800CEFE0
  c->lr=0x800CEFE8u; f_800BBD58(c); // 800CEFE4
  c->lr=0x800CEFECu; f_800C8114(c); // 800CEFE8
  c->lr=0x800CEFF0u; f_800A23BC(c); // 800CEFEC
  c->lr=0x800CEFF4u; f_800BB800(c); // 800CEFF0
  c->r[4]=c->r[30]|c->r[30]; // 800CEFF4
  c->lr=0x800CEFFCu; f_800BBD58(c); // 800CEFF8
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEFFC
  c->lr=0x800CF004u; f_800C84A8(c); // 800CF000
L_800CF004:;
  c->r[31]=c->r[31]+0x00000018u; // 800CF004
  c->r[29]=c->r[29]+0x00000001u; // 800CF008
L_800CF00C:;
  c->r[0]=R32(c->r[28]+0x000000C0u); // 800CF00C
  cmpu(c,0,c->r[29],c->r[0]); // 800CF010
  if (crb(c,0)) { IRQCHK(c); goto L_800CEF90; } // 800CF014
  c->r[0]=R32(c->r[28]+0x00000028u); // 800CF018
  c->r[0]=rotl(c->r[0],0)&0xFFBFFFFFu; // 800CF01C
  W32(c->r[28]+0x00000028u,c->r[0]); // 800CF020
L_800CF024:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF024
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF028
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF02C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CF030
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF034
  c->lr=c->r[0]; // 800CF038
  c->r[1]=c->r[1]+0x00000020u; // 800CF03C
  return; // 800CF040
}

// fn_800CF044
void f_800CF044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF044
  c->r[0]=c->lr; // 800CF048
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF04C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CF050
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CF054
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CF058
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CF05C
  c->r[28]=c->r[3]|c->r[3]; // 800CF060
  c->r[30]=0u+0x00000000u; // 800CF064
  c->r[31]=c->r[28]|c->r[28]; // 800CF068
  goto L_800CF0D4; // 800CF06C
L_800CF070:;
  c->r[29]=R32(c->r[31]+0x000000C4u); // 800CF070
  c->lr=0x800CF078u; f_800A23BC(c); // 800CF074
  c->lr=0x800CF07Cu; f_800BB800(c); // 800CF078
  c->r[4]=c->r[29]|c->r[29]; // 800CF07C
  c->lr=0x800CF084u; f_800C1284(c); // 800CF080
  cmps(c,0,(int32_t)c->r[3],0); // 800CF084
  if (crb(c,2)) { goto L_800CF0CC; } // 800CF088
  c->lr=0x800CF090u; f_800A23BC(c); // 800CF08C
  c->lr=0x800CF094u; f_800BB800(c); // 800CF090
  c->r[4]=c->r[29]|c->r[29]; // 800CF094
  c->lr=0x800CF09Cu; f_800BBD58(c); // 800CF098
  c->lr=0x800CF0A0u; f_800C9FB8(c); // 800CF09C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF0A0
  if (crb(c,2)) { goto L_800CF0CC; } // 800CF0A4
  c->lr=0x800CF0ACu; f_800A23BC(c); // 800CF0A8
  c->lr=0x800CF0B0u; f_800BB800(c); // 800CF0AC
  c->r[4]=c->r[29]|c->r[29]; // 800CF0B0
  c->lr=0x800CF0B8u; f_800BBD58(c); // 800CF0B4
  c->lr=0x800CF0BCu; f_800C7424(c); // 800CF0B8
  cmps(c,0,(int32_t)c->r[3],0); // 800CF0BC
  if (!crb(c,2)) { goto L_800CF0CC; } // 800CF0C0
  c->r[3]=0u+0x00000000u; // 800CF0C4
  goto L_800CF2AC; // 800CF0C8
L_800CF0CC:;
  c->r[31]=c->r[31]+0x00000018u; // 800CF0CC
  c->r[30]=c->r[30]+0x00000001u; // 800CF0D0
L_800CF0D4:;
  c->r[0]=R32(c->r[28]+0x000000C0u); // 800CF0D4
  cmpu(c,0,c->r[30],c->r[0]); // 800CF0D8
  if (crb(c,0)) { IRQCHK(c); goto L_800CF070; } // 800CF0DC
  c->r[30]=0u+0x00000000u; // 800CF0E0
  c->r[31]=c->r[28]|c->r[28]; // 800CF0E4
  goto L_800CF124; // 800CF0E8
L_800CF0EC:;
  c->r[29]=R32(c->r[31]+0x000000C4u); // 800CF0EC
  c->lr=0x800CF0F4u; f_800A23BC(c); // 800CF0F0
  c->lr=0x800CF0F8u; f_800BB800(c); // 800CF0F4
  c->r[4]=c->r[29]|c->r[29]; // 800CF0F8
  c->lr=0x800CF100u; f_800C1284(c); // 800CF0FC
  cmps(c,0,(int32_t)c->r[3],0); // 800CF100
  if (crb(c,2)) { goto L_800CF11C; } // 800CF104
  c->lr=0x800CF10Cu; f_800A23BC(c); // 800CF108
  c->lr=0x800CF110u; f_800BB800(c); // 800CF10C
  c->r[4]=c->r[29]|c->r[29]; // 800CF110
  c->lr=0x800CF118u; f_800BBD58(c); // 800CF114
  c->lr=0x800CF11Cu; f_800C85F0(c); // 800CF118
L_800CF11C:;
  c->r[31]=c->r[31]+0x00000018u; // 800CF11C
  c->r[30]=c->r[30]+0x00000001u; // 800CF120
L_800CF124:;
  c->r[0]=R32(c->r[28]+0x000000C0u); // 800CF124
  cmpu(c,0,c->r[30],c->r[0]); // 800CF128
  if (crb(c,0)) { IRQCHK(c); goto L_800CF0EC; } // 800CF12C
  c->lr=0x800CF134u; f_800A23BC(c); // 800CF130
  c->lr=0x800CF138u; f_800C23E4(c); // 800CF134
  c->r[29]=c->r[3]|c->r[3]; // 800CF138
  c->lr=0x800CF140u; f_800A23BC(c); // 800CF13C
  c->lr=0x800CF144u; f_800BB818(c); // 800CF140
  c->r[4]=0u+0x00000001u; // 800CF144
  c->lr=0x800CF14Cu; f_800BBF74(c); // 800CF148
  c->lr=0x800CF150u; f_800CF4BC(c); // 800CF14C
  cmps(c,0,(int32_t)c->r[3],0); // 800CF150
  if (!crb(c,1)) { goto L_800CF16C; } // 800CF154
  c->lr=0x800CF15Cu; f_800A23BC(c); // 800CF158
  c->lr=0x800CF160u; f_800BB818(c); // 800CF15C
  c->r[4]=0u+0x00000001u; // 800CF160
  c->lr=0x800CF168u; f_800BBF74(c); // 800CF164
  c->lr=0x800CF16Cu; f_800D3524(c); // 800CF168
L_800CF16C:;
  c->lr=0x800CF170u; f_800A23BC(c); // 800CF16C
  c->lr=0x800CF174u; f_800BB818(c); // 800CF170
  c->r[4]=0u+0x00000002u; // 800CF174
  c->lr=0x800CF17Cu; f_800BBF74(c); // 800CF178
  c->lr=0x800CF180u; f_800D3524(c); // 800CF17C
  c->lr=0x800CF184u; f_800A23BC(c); // 800CF180
  c->r[4]=0u+0x00000001u; // 800CF184
  c->lr=0x800CF18Cu; f_800C23DC(c); // 800CF188
  c->r[3]=0u+0x00000000u; // 800CF18C
  c->r[4]=0u+0x00000000u; // 800CF190
  c->r[5]=0u+0x00000000u; // 800CF194
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800CF198
  c->lr=0x800CF1A0u; f_800B8308(c); // 800CF19C
  c->lr=0x800CF1A4u; f_800A23BC(c); // 800CF1A0
  c->r[4]=0u+0x00000000u; // 800CF1A4
  c->lr=0x800CF1ACu; f_800C23DC(c); // 800CF1A8
  c->lr=0x800CF1B0u; f_800A23BC(c); // 800CF1AC
  c->lr=0x800CF1B4u; f_800A23C8(c); // 800CF1B0
  c->r[4]=c->r[29]|c->r[29]; // 800CF1B4
  c->r[5]=0u+0x00000001u; // 800CF1B8
  c->lr=0x800CF1C0u; f_800BFF7C(c); // 800CF1BC
  c->lr=0x800CF1C4u; f_800A23BC(c); // 800CF1C0
  c->lr=0x800CF1C8u; f_800BB820(c); // 800CF1C4
  c->r[4]=c->r[29]|c->r[29]; // 800CF1C8
  c->r[5]=0u+0x00000001u; // 800CF1CC
  c->lr=0x800CF1D4u; f_800BF124(c); // 800CF1D0
  c->lr=0x800CF1D8u; f_800A23BC(c); // 800CF1D4
  c->lr=0x800CF1DCu; f_800BB810(c); // 800CF1D8
  c->r[4]=c->r[29]|c->r[29]; // 800CF1DC
  c->r[5]=0u+0x00000001u; // 800CF1E0
  c->lr=0x800CF1E8u; f_800BF5DC(c); // 800CF1E4
  c->lr=0x800CF1ECu; f_800A23BC(c); // 800CF1E8
  c->lr=0x800CF1F0u; f_800BB808(c); // 800CF1EC
  c->r[4]=c->r[29]|c->r[29]; // 800CF1F0
  c->r[5]=0u+0x00000001u; // 800CF1F4
  c->lr=0x800CF1FCu; f_800C0ABC(c); // 800CF1F8
  c->lr=0x800CF200u; f_800A23BC(c); // 800CF1FC
  c->lr=0x800CF204u; f_800BB828(c); // 800CF200
  c->r[4]=c->r[29]|c->r[29]; // 800CF204
  c->r[5]=0u+0x00000001u; // 800CF208
  c->lr=0x800CF210u; f_800BE758(c); // 800CF20C
  c->lr=0x800CF214u; f_800A23BC(c); // 800CF210
  c->lr=0x800CF218u; f_800BB800(c); // 800CF214
  c->r[4]=c->r[29]|c->r[29]; // 800CF218
  c->r[5]=0u+0x00000001u; // 800CF21C
  c->lr=0x800CF224u; f_800C1038(c); // 800CF220
  c->lr=0x800CF228u; f_800A23BC(c); // 800CF224
  c->lr=0x800CF22Cu; f_800C23AC(c); // 800CF228
  c->r[4]=c->r[29]|c->r[29]; // 800CF22C
  c->r[5]=0u+0x00000001u; // 800CF230
  c->lr=0x800CF238u; f_800C04F8(c); // 800CF234
  c->lr=0x800CF23Cu; f_800A23BC(c); // 800CF238
  c->lr=0x800CF240u; f_800BB7F0(c); // 800CF23C
  c->r[4]=c->r[29]|c->r[29]; // 800CF240
  c->r[5]=0u+0x00000001u; // 800CF244
  c->lr=0x800CF24Cu; f_800C15BC(c); // 800CF248
  c->lr=0x800CF250u; f_800A23BC(c); // 800CF24C
  c->lr=0x800CF254u; f_800E2BF0(c); // 800CF250
  c->lr=0x800CF258u; f_800A23BC(c); // 800CF254
  c->lr=0x800CF25Cu; f_800BB700(c); // 800CF258
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800CF25C
  c->lr=0x800CF264u; f_800BBEA4(c); // 800CF260
  c->r[29]=c->r[3]|c->r[3]; // 800CF264
  cmps(c,0,(int32_t)c->r[3],0); // 800CF268
  if (crb(c,2)) { goto L_800CF2A8; } // 800CF26C
  c->lr=0x800CF274u; f_8006E268(c); // 800CF270
  c->lr=0x800CF278u; f_80073690(c); // 800CF274
  cmps(c,0,(int32_t)c->r[3],5); // 800CF278
  if (crb(c,2)) { goto L_800CF2A8; } // 800CF27C
  if (!crb(c,0)) { goto L_800CF2A8; } // 800CF280
  cmps(c,0,(int32_t)c->r[3],4); // 800CF284
  if (!crb(c,0)) { goto L_800CF290; } // 800CF288
  goto L_800CF2A8; // 800CF28C
L_800CF290:;
  c->lr=0x800CF294u; f_800A23BC(c); // 800CF290
  c->lr=0x800CF298u; f_800BB700(c); // 800CF294
  c->r[4]=c->r[29]|c->r[29]; // 800CF298
  c->lr=0x800CF2A0u; f_800BBE64(c); // 800CF29C
  c->r[4]=0u+0x00000001u; // 800CF2A0
  c->lr=0x800CF2A8u; f_800D2CA0(c); // 800CF2A4
L_800CF2A8:;
  c->r[3]=0u+0x00000001u; // 800CF2A8
L_800CF2AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CF2AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CF2B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CF2B4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CF2B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF2BC
  c->lr=c->r[0]; // 800CF2C0
  c->r[1]=c->r[1]+0x00000020u; // 800CF2C4
  return; // 800CF2C8
}

// fn_800CF2CC
void f_800CF2CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF2CC
  c->r[0]=c->lr; // 800CF2D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF2D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF2D8
  c->r[31]=c->r[3]|c->r[3]; // 800CF2DC
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF2E0
  c->r[0]=c->r[0]|0x02000000u; // 800CF2E4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF2E8
  c->lr=0x800CF2F0u; f_8007BE68(c); // 800CF2EC
  c->lr=0x800CF2F4u; f_8007BDEC(c); // 800CF2F0
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800CF2F4
  c->lr=0x800CF2FCu; f_8007BD50(c); // 800CF2F8
  c->lr=0x800CF300u; f_80156FC4(c); // 800CF2FC
  c->lr=0x800CF304u; f_8018E4E4(c); // 800CF300
  c->lr=0x800CF308u; f_80225FE4(c); // 800CF304
  c->lr=0x800CF30Cu; f_800BB0F8(c); // 800CF308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF30C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF310
  c->lr=c->r[0]; // 800CF314
  c->r[1]=c->r[1]+0x00000010u; // 800CF318
  return; // 800CF31C
}

// fn_800CF320
void f_800CF320(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF320
  c->r[0]=c->lr; // 800CF324
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CF328
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CF32C
  c->r[3]=c->r[1]+0x00000014u; // 800CF330
  c->lr=0x800CF338u; f_8004B0A4(c); // 800CF334
  c->r[3]=c->r[1]+0x00000008u; // 800CF338
  c->lr=0x800CF340u; f_8004B0A4(c); // 800CF33C
  c->lr=0x800CF344u; f_800A23BC(c); // 800CF340
  c->lr=0x800CF348u; f_800BB700(c); // 800CF344
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800CF348
  c->lr=0x800CF350u; f_800BBEA4(c); // 800CF34C
  c->r[31]=c->r[3]|c->r[3]; // 800CF350
  c->lr=0x800CF358u; f_800A23BC(c); // 800CF354
  c->lr=0x800CF35Cu; f_800BB700(c); // 800CF358
  c->r[4]=c->r[31]|c->r[31]; // 800CF35C
  c->lr=0x800CF364u; f_800BBE64(c); // 800CF360
  c->lr=0x800CF368u; f_800CA3BC(c); // 800CF364
  cmps(c,0,(int32_t)c->r[3],0); // 800CF368
  if (crb(c,2)) { goto L_800CF3B4; } // 800CF36C
  c->lr=0x800CF374u; f_800A23BC(c); // 800CF370
  c->lr=0x800CF378u; f_800BB700(c); // 800CF374
  c->r[4]=c->r[31]|c->r[31]; // 800CF378
  c->lr=0x800CF380u; f_800BBE64(c); // 800CF37C
  c->r[4]=c->r[1]+0x00000008u; // 800CF380
  c->lr=0x800CF388u; f_800CA318(c); // 800CF384
  c->lr=0x800CF38Cu; f_800A23BC(c); // 800CF388
  c->lr=0x800CF390u; f_800BB700(c); // 800CF38C
  c->r[4]=c->r[31]|c->r[31]; // 800CF390
  c->lr=0x800CF398u; f_800BBE64(c); // 800CF394
  c->lr=0x800CF39Cu; f_800CA338(c); // 800CF398
  c->lr=0x800CF3A0u; f_800A23BC(c); // 800CF39C
  c->lr=0x800CF3A4u; f_800BB700(c); // 800CF3A0
  c->r[4]=c->r[31]|c->r[31]; // 800CF3A4
  c->lr=0x800CF3ACu; f_800BBE64(c); // 800CF3A8
  c->r[4]=c->r[1]+0x00000008u; // 800CF3AC
  c->lr=0x800CF3B4u; f_800BB528(c); // 800CF3B0
L_800CF3B4:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CF3B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CF3B8
  c->lr=c->r[0]; // 800CF3BC
  c->r[1]=c->r[1]+0x00000030u; // 800CF3C0
  return; // 800CF3C4
}

// fn_800CF3C8
void f_800CF3C8(Ctx* __restrict c) {
  c->r[6]=c->r[3]|c->r[3]; // 800CF3C8
  c->r[8]=R32(c->r[3]+0x000002E8u); // 800CF3CC
  c->ctr=c->r[8]; // 800CF3D0
  cmpu(c,0,c->r[8],0x00000000u); // 800CF3D4
  if (!crb(c,1)) { goto L_800CF3F0; } // 800CF3D8
L_800CF3DC:;
  c->r[0]=R32(c->r[6]+0x00000290u); // 800CF3DC
  cmpu(c,0,c->r[5],c->r[0]); // 800CF3E0
  if (crb(c,2)) return; // 800CF3E4
  c->r[6]=c->r[6]+0x0000000Cu; // 800CF3E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF3DC; } // 800CF3EC
L_800CF3F0:;
  cmpu(c,0,c->r[8],0x00000008u); // 800CF3F0
  if (!crb(c,0)) return; // 800CF3F4
  c->r[7]=R32(c->r[3]+0x00000280u); // 800CF3F8
  c->r[0]=(uint32_t)((int32_t)c->r[8]*(int32_t)12); // 800CF3FC
  c->r[6]=c->r[3]+c->r[0]; // 800CF400
  W32(c->r[6]+0x00000288u,c->r[7]); // 800CF404
  c->r[0]=R32(c->r[3]+0x000002E8u); // 800CF408
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800CF40C
  c->r[6]=c->r[3]+c->r[0]; // 800CF410
  W32(c->r[6]+0x0000028Cu,c->r[4]); // 800CF414
  c->r[0]=R32(c->r[3]+0x000002E8u); // 800CF418
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800CF41C
  c->r[4]=c->r[3]+c->r[0]; // 800CF420
  W32(c->r[4]+0x00000290u,c->r[5]); // 800CF424
  c->r[4]=R32(c->r[3]+0x000002E8u); // 800CF428
  c->r[0]=c->r[4]+0x00000001u; // 800CF42C
  W32(c->r[3]+0x000002E8u,c->r[0]); // 800CF430
  return; // 800CF434
}

// fn_800CF438
void f_800CF438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF438
  c->r[0]=c->lr; // 800CF43C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF444
  c->r[31]=c->r[3]|c->r[3]; // 800CF448
  c->r[0]=R32(c->r[3]+0x000002E8u); // 800CF44C
  cmps(c,0,(int32_t)c->r[0],0); // 800CF450
  if (!crb(c,2)) { goto L_800CF460; } // 800CF454
  c->r[3]=0u+0x00000000u; // 800CF458
  goto L_800CF48C; // 800CF45C
L_800CF460:;
  c->r[3]=c->r[4]|c->r[4]; // 800CF460
  c->r[4]=c->r[31]+0x00000288u; // 800CF464
  c->lr=0x800CF46Cu; f_800CF4A0(c); // 800CF468
  c->r[3]=c->r[31]+0x00000288u; // 800CF46C
  c->r[4]=c->r[31]+0x00000294u; // 800CF470
  c->r[5]=0u+0x00000054u; // 800CF474
  c->lr=0x800CF47Cu; f_802E53B8(c); // 800CF478
  c->r[3]=R32(c->r[31]+0x000002E8u); // 800CF47C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800CF480
  W32(c->r[31]+0x000002E8u,c->r[0]); // 800CF484
  c->r[3]=0u+0x00000001u; // 800CF488
L_800CF48C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF48C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF490
  c->lr=c->r[0]; // 800CF494
  c->r[1]=c->r[1]+0x00000010u; // 800CF498
  return; // 800CF49C
}

// fn_800CF4A0
void f_800CF4A0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 800CF4A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CF4A4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800CF4A8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CF4AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 800CF4B0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CF4B4
  return; // 800CF4B8
}

// fn_800CF4BC
void f_800CF4BC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 800CF4BC
  return; // 800CF4C0
}

// fn_800CF4C4
void f_800CF4C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800CF4C4
  return; // 800CF4C8
}

// fn_800CF4CC
void f_800CF4CC(Ctx* __restrict c) {
  return; // 800CF4CC
}

// fn_800CF4D0
void f_800CF4D0(Ctx* __restrict c) {
  return; // 800CF4D0
}

// fn_800CF4D4
void f_800CF4D4(Ctx* __restrict c) {
  return; // 800CF4D4
}

// fn_800CF4D8
void f_800CF4D8(Ctx* __restrict c) {
  return; // 800CF4D8
}

// fn_800CF4DC
void f_800CF4DC(Ctx* __restrict c) {
  return; // 800CF4DC
}

// fn_800CF4E0
void f_800CF4E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF4E0
  c->r[0]=c->lr; // 800CF4E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF4E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF4EC
  c->r[31]=c->r[3]|c->r[3]; // 800CF4F0
  c->lr=0x800CF4F8u; f_800D3394(c); // 800CF4F4
  c->r[3]=0u+0x80460000u; // 800CF4F8
  c->r[0]=c->r[3]+0x00000B8Cu; // 800CF4FC
  W32(c->r[31]+0x00000040u,c->r[0]); // 800CF500
  c->r[3]=c->r[31]|c->r[31]; // 800CF504
  c->lr=0x800CF50Cu; f_800D3980(c); // 800CF508
  c->r[3]=c->r[31]|c->r[31]; // 800CF50C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF510
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF514
  c->lr=c->r[0]; // 800CF518
  c->r[1]=c->r[1]+0x00000010u; // 800CF51C
  return; // 800CF520
}

// fn_800CF524
void f_800CF524(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF524
  c->r[0]=c->lr; // 800CF528
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF52C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF530
  c->r[31]=c->r[3]|c->r[3]; // 800CF534
  c->lr=0x800CF53Cu; f_800D3394(c); // 800CF538
  c->r[3]=0u+0x80460000u; // 800CF53C
  c->r[0]=c->r[3]+0x00000BCCu; // 800CF540
  W32(c->r[31]+0x00000040u,c->r[0]); // 800CF544
  c->r[3]=c->r[31]|c->r[31]; // 800CF548
  c->lr=0x800CF550u; f_800D36BC(c); // 800CF54C
  c->r[3]=c->r[31]|c->r[31]; // 800CF550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF554
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF558
  c->lr=c->r[0]; // 800CF55C
  c->r[1]=c->r[1]+0x00000010u; // 800CF560
  return; // 800CF564
}

// fn_800CF568
void f_800CF568(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000038u); // 800CF568
  return; // 800CF56C
}

// fn_800CF570
void f_800CF570(Ctx* __restrict c) {
  return; // 800CF570
}

// fn_800CF574
void f_800CF574(Ctx* __restrict c) {
  return; // 800CF574
}

// fn_800CF578
void f_800CF578(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00001EB8u; WF32(ea,c->f[1]);} // 800CF578
  return; // 800CF57C
}

// fn_800CF580
void f_800CF580(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800CF580
  return; // 800CF584
}

// fn_800CF588
void f_800CF588(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 800CF588
  return; // 800CF58C
}

// fn_800CF590
void f_800CF590(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00001EB0u); // 800CF590
  c->r[0]=cntlz(c->r[0]); // 800CF594
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CF598
  return; // 800CF59C
}

// fn_800CF5A0
void f_800CF5A0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF5A0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800CF5A4
  c->r[0]=cntlz(c->r[0]); // 800CF5A8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CF5AC
  return; // 800CF5B0
}

// fn_800CF5B4
void f_800CF5B4(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 800CF5B4
  c->r[3]=c->r[3]+c->r[0]; // 800CF5B8
  c->r[3]=c->r[3]+0x0000177Cu; // 800CF5BC
  return; // 800CF5C0
}

// fn_800CF5C4
void f_800CF5C4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00001964u; // 800CF5C4
  f_800D5424(c); return; // 800CF5C8
}

// fn_800CF5CC
void f_800CF5CC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00001964u; // 800CF5CC
  return; // 800CF5D0
}

// fn_800CF5D4
void f_800CF5D4(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)72); // 800CF5D4
  c->r[3]=c->r[3]+c->r[0]; // 800CF5D8
  c->r[3]=c->r[3]+0x0000153Cu; // 800CF5DC
  return; // 800CF5E0
}

// fn_800CF5E4
void f_800CF5E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 800CF5E4
  return; // 800CF5E8
}

// fn_800CF5EC
void f_800CF5EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CF5EC
  return; // 800CF5F0
}

// fn_800CF5F4
void f_800CF5F4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000040u); // 800CF5F4
  return; // 800CF5F8
}

// fn_800CF5FC
void f_800CF5FC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000028u); // 800CF5FC
  c->r[0]=rotl(c->r[5],0)&0x00000020u; // 800CF600
  cmps(c,0,(int32_t)c->r[0],0); // 800CF604
  if (!crb(c,2)) return; // 800CF608
  c->r[0]=c->r[5]|0x00000010u; // 800CF60C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF610
  c->r[3]=c->r[3]+0x00001EA0u; // 800CF614
  f_8004A65C(c); return; // 800CF618
  return; // 800CF61C
}

// fn_800CF620
void f_800CF620(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00001F04u); // 800CF620
  return; // 800CF624
}

// fn_800CF628
void f_800CF628(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 800CF628
  return; // 800CF62C
}

// fn_800CF630
void f_800CF630(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000044u); // 800CF630
  return; // 800CF634
}

// fn_800CF638
void f_800CF638(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CF638
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CF63C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CF640
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CF644
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800CF648
  return; // 800CF64C
}

// fn_800CF650
void f_800CF650(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CF650
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CF654
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CF658
  return; // 800CF65C
}

// fn_800CF660
void f_800CF660(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CF660
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CF664
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CF668
  return; // 800CF66C
}

// fn_800CF670
void f_800CF670(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CF670
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CF674
  return; // 800CF678
}

// fn_800CF67C
void f_800CF67C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CF67C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800CF680
  W32(c->r[3]+0x00000004u,c->r[0]); // 800CF684
  W32(c->r[3]+0x00000008u,c->r[0]); // 800CF688
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800CF68C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800CF690
  return; // 800CF694
}

// fn_800CF698
void f_800CF698(Ctx* __restrict c) {
  W32(c->r[3]+0x00000054u,c->r[4]); // 800CF698
  return; // 800CF69C
}

// fn_800CF6A0
void f_800CF6A0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000050u,c->r[4]); // 800CF6A0
  return; // 800CF6A4
}

// fn_800CF6A8
void f_800CF6A8(Ctx* __restrict c) {
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 800CF6A8
  return; // 800CF6AC
}

// fn_800CF6B0
void f_800CF6B0(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800CF6B0
  if (crb(c,2)) { goto L_800CF6C8; } // 800CF6B4
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF6B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800CF6BC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF6C0
  return; // 800CF6C4
L_800CF6C8:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF6C8
  c->r[0]=c->r[0]|0x00000020u; // 800CF6CC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF6D0
  return; // 800CF6D4
}

// fn_800CF6D8
void f_800CF6D8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF6D8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800CF6DC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF6E0
  c->r[3]=c->r[3]+0x00001EA0u; // 800CF6E4
  c->r[4]=0u+0x804C0000u; // 800CF6E8
  c->r[4]=c->r[4]+0x000024A0u; // 800CF6EC
  f_8004A65C(c); return; // 800CF6F0
}

// fn_800CF6F4
void f_800CF6F4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800CF6F4
  if (crb(c,2)) { goto L_800CF70C; } // 800CF6F8
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF6FC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF7Fu; // 800CF700
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF704
  return; // 800CF708
L_800CF70C:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF70C
  c->r[0]=c->r[0]|0x00000080u; // 800CF710
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF714
  return; // 800CF718
}

// fn_800CF71C
void f_800CF71C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B8u; // 800CF71C
  return; // 800CF720
}

// fn_800CF724
void f_800CF724(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800CF724
  c->r[0]=c->r[0]|0x00002000u; // 800CF728
  W32(c->r[3]+0x00000028u,c->r[0]); // 800CF72C
  return; // 800CF730
}

// fn_800CF734
void f_800CF734(Ctx* __restrict c) {
  W32(c->r[3]+0x00000048u,c->r[4]); // 800CF734
  return; // 800CF738
}

// dtor_800CF73C
void f_800CF73C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF73C
  c->r[0]=c->lr; // 800CF740
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF748
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF74C
  c->r[30]=c->r[3]|c->r[3]; // 800CF750
  c->r[31]=c->r[4]|c->r[4]; // 800CF754
  cmps(c,0,(int32_t)c->r[3],0); // 800CF758
  if (crb(c,2)) { goto L_800CF828; } // 800CF75C
  c->r[3]=c->r[3]+0x0000199Cu; // 800CF760
  c->r[4]=0u+0x800D0000u; // 800CF764
  c->r[4]=c->r[4]+0x00005794u; // 800CF768
  c->r[5]=0u+0x00000050u; // 800CF76C
  c->r[6]=0u+0x00000010u; // 800CF770
  c->lr=0x800CF778u; f_802F08A8(c); // 800CF774
  c->r[3]=c->r[30]+0x00001964u; // 800CF778
  c->r[4]=0u+0xFFFFFFFFu; // 800CF77C
  c->lr=0x800CF784u; f_800D5378(c); // 800CF780
  c->r[3]=c->r[30]+0x00001934u; // 800CF784
  c->r[4]=0u+0xFFFFFFFFu; // 800CF788
  c->lr=0x800CF790u; f_800D3D34(c); // 800CF78C
  c->r[3]=c->r[30]+0x0000177Cu; // 800CF790
  c->r[4]=0u+0x800D0000u; // 800CF794
  c->r[4]=c->r[4]+0x000048F0u; // 800CF798
  c->r[5]=0u+0x00000034u; // 800CF79C
  c->r[6]=0u+0x00000008u; // 800CF7A0
  c->lr=0x800CF7A8u; f_802F08A8(c); // 800CF7A4
  c->r[3]=c->r[30]+0x0000153Cu; // 800CF7A8
  c->r[4]=0u+0x800D0000u; // 800CF7AC
  c->r[4]=c->r[4]+0x000052D4u; // 800CF7B0
  c->r[5]=0u+0x00000048u; // 800CF7B4
  c->r[6]=0u+0x00000008u; // 800CF7B8
  c->lr=0x800CF7C0u; f_802F08A8(c); // 800CF7BC
  c->r[3]=c->r[30]+0x00000EFCu; // 800CF7C0
  c->r[4]=0u+0xFFFFFFFFu; // 800CF7C4
  c->lr=0x800CF7CCu; f_800E30F0(c); // 800CF7C8
  c->r[3]=c->r[30]+0x0000057Cu; // 800CF7CC
  c->r[4]=0u+0x800E0000u; // 800CF7D0
  c->r[4]=c->r[4]+0x000030F0u; // 800CF7D4
  c->r[5]=0u+0x0000004Cu; // 800CF7D8
  c->r[6]=0u+0x00000020u; // 800CF7DC
  c->lr=0x800CF7E4u; f_802F08A8(c); // 800CF7E0
  c->r[3]=c->r[30]+0x00000170u; // 800CF7E4
  c->r[4]=0u+0x800D0000u; // 800CF7E8
  c->r[4]=c->r[4]+0x0000688Cu; // 800CF7EC
  c->r[5]=0u+0x00000040u; // 800CF7F0
  c->r[6]=0u+0x00000010u; // 800CF7F4
  c->lr=0x800CF7FCu; f_802F08A8(c); // 800CF7F8
  c->r[3]=c->r[30]+0x0000002Cu; // 800CF7FC
  c->r[4]=0u+0xFFFFFFFFu; // 800CF800
  c->lr=0x800CF808u; f_800BB850(c); // 800CF804
  c->r[3]=c->r[30]|c->r[30]; // 800CF808
  c->r[4]=0u+0x00000000u; // 800CF80C
  c->lr=0x800CF814u; f_800BEAE4(c); // 800CF810
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CF814
  cmps(c,0,(int32_t)c->r[0],0); // 800CF818
  if (!crb(c,1)) { goto L_800CF828; } // 800CF81C
  c->r[3]=c->r[30]|c->r[30]; // 800CF820
  c->lr=0x800CF828u; f_80047B20(c); // 800CF824
L_800CF828:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF828
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF82C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF830
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF834
  c->lr=c->r[0]; // 800CF838
  c->r[1]=c->r[1]+0x00000010u; // 800CF83C
  return; // 800CF840
}

// fn_800CF844
void f_800CF844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF844
  c->r[0]=c->lr; // 800CF848
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF84C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF850
  c->r[31]=c->r[3]|c->r[3]; // 800CF854
  c->lr=0x800CF85Cu; f_800BEAA8(c); // 800CF858
  c->r[3]=0u+0x80460000u; // 800CF85C
  c->r[0]=c->r[3]+0x00000A5Cu; // 800CF860
  W32(c->r[31]+0x00000024u,c->r[0]); // 800CF864
  c->r[3]=c->r[31]+0x0000002Cu; // 800CF868
  c->lr=0x800CF870u; f_800BB894(c); // 800CF86C
  c->r[3]=c->r[31]+0x00000170u; // 800CF870
  c->r[4]=0u+0x800D0000u; // 800CF874
  c->r[4]=c->r[4]+0x00006848u; // 800CF878
  c->r[5]=0u+0x800D0000u; // 800CF87C
  c->r[5]=c->r[5]+0x0000688Cu; // 800CF880
  c->r[6]=0u+0x00000040u; // 800CF884
  c->r[7]=0u+0x00000010u; // 800CF888
  c->lr=0x800CF890u; f_802F07B0(c); // 800CF88C
  c->r[3]=c->r[31]+0x0000057Cu; // 800CF890
  c->r[4]=0u+0x800E0000u; // 800CF894
  c->r[4]=c->r[4]+0x0000314Cu; // 800CF898
  c->r[5]=0u+0x800E0000u; // 800CF89C
  c->r[5]=c->r[5]+0x000030F0u; // 800CF8A0
  c->r[6]=0u+0x0000004Cu; // 800CF8A4
  c->r[7]=0u+0x00000020u; // 800CF8A8
  c->lr=0x800CF8B0u; f_802F07B0(c); // 800CF8AC
  c->r[3]=c->r[31]+0x00000EFCu; // 800CF8B0
  c->lr=0x800CF8B8u; f_800E314C(c); // 800CF8B4
  c->r[3]=c->r[31]+0x0000153Cu; // 800CF8B8
  c->r[4]=0u+0x800D0000u; // 800CF8BC
  c->r[4]=c->r[4]+0x00004000u; // 800CF8C0
  c->r[5]=0u+0x800D0000u; // 800CF8C4
  c->r[5]=c->r[5]+0x000052D4u; // 800CF8C8
  c->r[6]=0u+0x00000048u; // 800CF8CC
  c->r[7]=0u+0x00000008u; // 800CF8D0
  c->lr=0x800CF8D8u; f_802F07B0(c); // 800CF8D4
  c->r[3]=c->r[31]+0x0000177Cu; // 800CF8D8
  c->r[4]=0u+0x800D0000u; // 800CF8DC
  c->r[4]=c->r[4]+0x000048A8u; // 800CF8E0
  c->r[5]=0u+0x800D0000u; // 800CF8E4
  c->r[5]=c->r[5]+0x000048F0u; // 800CF8E8
  c->r[6]=0u+0x00000034u; // 800CF8EC
  c->r[7]=0u+0x00000008u; // 800CF8F0
  c->lr=0x800CF8F8u; f_802F07B0(c); // 800CF8F4
  c->r[3]=c->r[31]+0x00001934u; // 800CF8F8
  c->lr=0x800CF900u; f_800D3CF0(c); // 800CF8FC
  c->r[3]=c->r[31]+0x00001964u; // 800CF900
  c->lr=0x800CF908u; f_800D533C(c); // 800CF904
  c->r[3]=c->r[31]+0x0000199Cu; // 800CF908
  c->r[4]=0u+0x800D0000u; // 800CF90C
  c->r[4]=c->r[4]+0x00005740u; // 800CF910
  c->r[5]=0u+0x800D0000u; // 800CF914
  c->r[5]=c->r[5]+0x00005794u; // 800CF918
  c->r[6]=0u+0x00000050u; // 800CF91C
  c->r[7]=0u+0x00000010u; // 800CF920
  c->lr=0x800CF928u; f_802F07B0(c); // 800CF924
  c->r[3]=c->r[31]+0x00001EA0u; // 800CF928
  c->lr=0x800CF930u; f_8004B0A4(c); // 800CF92C
  c->r[3]=c->r[31]+0x00001F08u; // 800CF930
  c->lr=0x800CF938u; f_8004B0A4(c); // 800CF934
  c->r[3]=c->r[31]+0x00001F14u; // 800CF938
  c->lr=0x800CF940u; f_8004B0A4(c); // 800CF93C
  c->r[3]=c->r[31]+0x00001F20u; // 800CF940
  c->lr=0x800CF948u; f_8004B0A4(c); // 800CF944
  c->r[3]=c->r[31]+0x00001F2Cu; // 800CF948
  c->lr=0x800CF950u; f_8004B0A4(c); // 800CF94C
  c->r[3]=c->r[31]+0x00001F38u; // 800CF950
  c->lr=0x800CF958u; f_8004B0A4(c); // 800CF954
  c->r[3]=c->r[31]|c->r[31]; // 800CF958
  c->lr=0x800CF960u; f_800DC878(c); // 800CF95C
  c->r[3]=c->r[31]|c->r[31]; // 800CF960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF964
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF968
  c->lr=c->r[0]; // 800CF96C
  c->r[1]=c->r[1]+0x00000010u; // 800CF970
  return; // 800CF974
}

// fn_800CF978
void f_800CF978(Ctx* __restrict c) {
  W32(c->r[3]+0x00001F04u,c->r[4]); // 800CF978
  return; // 800CF97C
}

// fn_800CF980
void f_800CF980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF980
  c->r[0]=c->lr; // 800CF984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF98C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CF990
  c->r[30]=c->r[3]|c->r[3]; // 800CF994
  c->r[31]=c->r[4]|c->r[4]; // 800CF998
  cmps(c,0,(int32_t)c->r[3],0); // 800CF99C
  if (crb(c,2)) { goto L_800CF9C0; } // 800CF9A0
  c->r[4]=0u+0x00000000u; // 800CF9A4
  c->lr=0x800CF9ACu; f_800BDD24(c); // 800CF9A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CF9AC
  cmps(c,0,(int32_t)c->r[0],0); // 800CF9B0
  if (!crb(c,1)) { goto L_800CF9C0; } // 800CF9B4
  c->r[3]=c->r[30]|c->r[30]; // 800CF9B8
  c->lr=0x800CF9C0u; f_80047B20(c); // 800CF9BC
L_800CF9C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800CF9C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CF9C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CF9C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CF9CC
  c->lr=c->r[0]; // 800CF9D0
  c->r[1]=c->r[1]+0x00000010u; // 800CF9D4
  return; // 800CF9D8
}

// fn_800CF9DC
void f_800CF9DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF9DC
  c->r[0]=c->lr; // 800CF9E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF9E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CF9E8
  c->r[31]=c->r[3]|c->r[3]; // 800CF9EC
  c->lr=0x800CF9F4u; f_800BDCD0(c); // 800CF9F0
  c->r[3]=0u+0x80460000u; // 800CF9F4
  c->r[0]=c->r[3]+0x00001280u; // 800CF9F8
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CF9FC
  c->r[3]=c->r[31]+0x000000D8u; // 800CFA00
  c->lr=0x800CFA08u; f_8004B0A4(c); // 800CFA04
  c->r[3]=c->r[31]|c->r[31]; // 800CFA08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFA0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFA10
  c->lr=c->r[0]; // 800CFA14
  c->r[1]=c->r[1]+0x00000010u; // 800CFA18
  return; // 800CFA1C
}

// fn_800CFA20
void f_800CFA20(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CFA20
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CFA24
  W32(c->r[3]+0x00000054u,c->r[0]); // 800CFA28
  return; // 800CFA2C
}

// fn_800CFA30
void f_800CFA30(Ctx* __restrict c) {
  return; // 800CFA30
}

// fn_800CFA34
void f_800CFA34(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF2Cu; // 800CFA34
  f_800C36E0(c); return; // 800CFA38
}

// fn_800CFA3C
void f_800CFA3C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF2Cu; // 800CFA3C
  f_800C6238(c); return; // 800CFA40
}

// fn_800CFA44
void f_800CFA44(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFB4u; // 800CFA44
  f_800CFBE8(c); return; // 800CFA48
}

// fn_800CFA4C
void f_800CFA4C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 800CFA4C
  return; // 800CFA50
}

// fn_800CFA54
void f_800CFA54(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000058u); // 800CFA54
  return; // 800CFA58
}

// fn_800CFA5C
void f_800CFA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFA5C
  return; // 800CFA60
}

// fn_800CFA64
void f_800CFA64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFA64
  c->r[0]=c->lr; // 800CFA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFA6C
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800CFA70
  c->lr=0x800CFA78u; f_8005AD90(c); // 800CFA74
  c->r[0]=cntlz(c->r[3]); // 800CFA78
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CFA7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFA80
  c->lr=c->r[0]; // 800CFA84
  c->r[1]=c->r[1]+0x00000010u; // 800CFA88
  return; // 800CFA8C
}

// fn_800CFA90
void f_800CFA90(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800CFA90
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 800CFA94
  c->r[0]=cntlz(c->r[0]); // 800CFA98
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800CFA9C
  return; // 800CFAA0
}

// fn_800CFAA4
void f_800CFAA4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800CFAA4
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800CFAA8
  W32(c->r[3]+0x00000054u,c->r[0]); // 800CFAAC
  W32(c->r[3]+0x00000058u,c->r[0]); // 800CFAB0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFAB4
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 800CFAB8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFABC
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800CFAC0
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[1]);} // 800CFAC4
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 800CFAC8
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 800CFACC
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 800CFAD0
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800CFAD4
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[1]);} // 800CFAD8
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800CFADC
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 800CFAE0
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800CFAE4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800CFAE8
  return; // 800CFAEC
}

// dtor_800CFAF0
void f_800CFAF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFAF0
  c->r[0]=c->lr; // 800CFAF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFAF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFAFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFB00
  c->r[30]=c->r[3]|c->r[3]; // 800CFB04
  c->r[31]=c->r[4]|c->r[4]; // 800CFB08
  cmps(c,0,(int32_t)c->r[3],0); // 800CFB0C
  if (crb(c,2)) { goto L_800CFB40; } // 800CFB10
  c->r[3]=c->r[3]+0x0000002Cu; // 800CFB14
  c->r[4]=0u+0xFFFFFFFFu; // 800CFB18
  c->lr=0x800CFB20u; f_800BB850(c); // 800CFB1C
  c->r[3]=c->r[30]|c->r[30]; // 800CFB20
  c->r[4]=0u+0x00000000u; // 800CFB24
  c->lr=0x800CFB2Cu; f_800BE568(c); // 800CFB28
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CFB2C
  cmps(c,0,(int32_t)c->r[0],0); // 800CFB30
  if (!crb(c,1)) { goto L_800CFB40; } // 800CFB34
  c->r[3]=c->r[30]|c->r[30]; // 800CFB38
  c->lr=0x800CFB40u; f_80047B20(c); // 800CFB3C
L_800CFB40:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFB40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFB44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFB48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFB4C
  c->lr=c->r[0]; // 800CFB50
  c->r[1]=c->r[1]+0x00000010u; // 800CFB54
  return; // 800CFB58
}

// fn_800CFB5C
void f_800CFB5C(Ctx* __restrict c) {
  f_800E1640(c); return; // 800CFB5C
}

// fn_800CFB60
void f_800CFB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFB60
  return; // 800CFB64
}

// fn_800CFB68
void f_800CFB68(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800CFB68
  c->r[3]=c->r[4]|c->r[4]; // 800CFB6C
  c->r[4]=c->r[5]+0x000001ACu; // 800CFB70
  goto L_800CFB78; // 800CFB74
L_800CFB78:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFB78
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 800CFB7C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFB80
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800CFB84
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFB88
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800CFB8C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFB90
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 800CFB94
  return; // 800CFB98
}

// fn_800CFB9C
void f_800CFB9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFB9C
  c->r[0]=c->lr; // 800CFBA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFBA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFBA8
  c->r[31]=c->r[3]|c->r[3]; // 800CFBAC
  c->lr=0x800CFBB4u; f_800BDCD0(c); // 800CFBB0
  c->r[3]=c->r[31]+0x0000004Cu; // 800CFBB4
  c->lr=0x800CFBBCu; f_800BE49C(c); // 800CFBB8
  c->r[3]=0u+0x80460000u; // 800CFBBC
  c->r[3]=c->r[3]+0x00000D50u; // 800CFBC0
  W32(c->r[31]+0x00000048u,c->r[3]); // 800CFBC4
  c->r[0]=c->r[3]+0x00000018u; // 800CFBC8
  W32(c->r[31]+0x00000098u,c->r[0]); // 800CFBCC
  c->r[3]=c->r[31]|c->r[31]; // 800CFBD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFBD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFBD8
  c->lr=c->r[0]; // 800CFBDC
  c->r[1]=c->r[1]+0x00000010u; // 800CFBE0
  return; // 800CFBE4
}

// fn_800CFBE8
void f_800CFBE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFBE8
  c->r[0]=c->lr; // 800CFBEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFBF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFBF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFBF8
  c->r[30]=c->r[3]|c->r[3]; // 800CFBFC
  c->r[31]=c->r[4]|c->r[4]; // 800CFC00
  cmps(c,0,(int32_t)c->r[3],0); // 800CFC04
  if (crb(c,2)) { goto L_800CFC38; } // 800CFC08
  c->r[3]=c->r[3]+0x0000004Cu; // 800CFC0C
  c->r[4]=0u+0x00000000u; // 800CFC10
  c->lr=0x800CFC18u; f_800BE3FC(c); // 800CFC14
  c->r[3]=c->r[30]|c->r[30]; // 800CFC18
  c->r[4]=0u+0x00000000u; // 800CFC1C
  c->lr=0x800CFC24u; f_800BDD24(c); // 800CFC20
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CFC24
  cmps(c,0,(int32_t)c->r[0],0); // 800CFC28
  if (!crb(c,1)) { goto L_800CFC38; } // 800CFC2C
  c->r[3]=c->r[30]|c->r[30]; // 800CFC30
  c->lr=0x800CFC38u; f_80047B20(c); // 800CFC34
L_800CFC38:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFC3C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFC40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFC44
  c->lr=c->r[0]; // 800CFC48
  c->r[1]=c->r[1]+0x00000010u; // 800CFC4C
  return; // 800CFC50
}

// fn_800CFC54
void f_800CFC54(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000004Cu; // 800CFC54
  f_800BE030(c); return; // 800CFC58
}

// fn_800CFC5C
void f_800CFC5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFC5C
  c->r[0]=c->lr; // 800CFC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFC68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFC6C
  c->r[30]=c->r[3]|c->r[3]; // 800CFC70
  c->r[31]=c->r[4]|c->r[4]; // 800CFC74
  c->r[3]=c->r[3]+0x0000004Cu; // 800CFC78
  c->lr=0x800CFC80u; f_800BE030(c); // 800CFC7C
  c->r[3]=c->r[30]+0x0000004Cu; // 800CFC80
  c->r[4]=c->r[31]|c->r[31]; // 800CFC84
  c->lr=0x800CFC8Cu; f_800BBFE8(c); // 800CFC88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFC8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFC90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFC94
  c->lr=c->r[0]; // 800CFC98
  c->r[1]=c->r[1]+0x00000010u; // 800CFC9C
  return; // 800CFCA0
}

// fn_800CFCA4
void f_800CFCA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFCA4
  c->r[0]=c->lr; // 800CFCA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFCAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CFCB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CFCB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CFCB8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CFCBC
  c->r[28]=c->r[3]|c->r[3]; // 800CFCC0
  c->r[29]=c->r[4]|c->r[4]; // 800CFCC4
  c->r[30]=c->r[5]|c->r[5]; // 800CFCC8
  c->r[31]=c->r[6]|c->r[6]; // 800CFCCC
  c->lr=0x800CFCD4u; f_800CFD3C(c); // 800CFCD0
  c->r[3]=c->r[28]|c->r[28]; // 800CFCD4
  c->r[4]=c->r[29]|c->r[29]; // 800CFCD8
  c->r[5]=c->r[30]|c->r[30]; // 800CFCDC
  c->r[6]=c->r[31]|c->r[31]; // 800CFCE0
  c->lr=0x800CFCE8u; f_800BF8EC(c); // 800CFCE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CFCE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CFCEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CFCF0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CFCF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CFCF8
  c->lr=c->r[0]; // 800CFCFC
  c->r[1]=c->r[1]+0x00000020u; // 800CFD00
  return; // 800CFD04
}

// fn_800CFD08
void f_800CFD08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFD08
  c->r[0]=c->lr; // 800CFD0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFD10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFD14
  c->r[31]=c->r[3]|c->r[3]; // 800CFD18
  c->lr=0x800CFD20u; f_800BF9C8(c); // 800CFD1C
  c->r[3]=c->r[31]|c->r[31]; // 800CFD20
  c->lr=0x800CFD28u; f_800CFD3C(c); // 800CFD24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFD2C
  c->lr=c->r[0]; // 800CFD30
  c->r[1]=c->r[1]+0x00000010u; // 800CFD34
  return; // 800CFD38
}

// fn_800CFD3C
void f_800CFD3C(Ctx* __restrict c) {
  return; // 800CFD3C
}

// fn_800CFD40
void f_800CFD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFD40
  c->r[0]=c->lr; // 800CFD44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFD48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CFD4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CFD50
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CFD54
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CFD58
  c->r[28]=c->r[3]|c->r[3]; // 800CFD5C
  c->r[29]=c->r[4]|c->r[4]; // 800CFD60
  c->lr=0x800CFD68u; f_800A23BC(c); // 800CFD64
  c->lr=0x800CFD6Cu; f_800C23E4(c); // 800CFD68
  c->r[30]=c->r[3]|c->r[3]; // 800CFD6C
  c->lr=0x800CFD74u; f_800A23BC(c); // 800CFD70
  c->r[4]=0u+0x00000000u; // 800CFD74
  c->lr=0x800CFD7Cu; f_800C23EC(c); // 800CFD78
  c->r[3]=c->r[28]|c->r[28]; // 800CFD7C
  c->r[4]=0u+0x00000000u; // 800CFD80
  c->lr=0x800CFD88u; f_800BFAF0(c); // 800CFD84
  c->r[31]=c->r[3]|c->r[3]; // 800CFD88
  cmps(c,0,(int32_t)c->r[3],0); // 800CFD8C
  if (crb(c,2)) { goto L_800CFDB0; } // 800CFD90
  c->r[3]=c->r[28]|c->r[28]; // 800CFD94
  c->r[4]=c->r[31]|c->r[31]; // 800CFD98
  c->lr=0x800CFDA0u; f_800BFD10(c); // 800CFD9C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFDA0
  if (crb(c,2)) { goto L_800CFDB0; } // 800CFDA4
  c->r[4]=c->r[29]|c->r[29]; // 800CFDA8
  c->lr=0x800CFDB0u; f_800CFC5C(c); // 800CFDAC
L_800CFDB0:;
  c->lr=0x800CFDB4u; f_800A23BC(c); // 800CFDB0
  c->r[4]=c->r[30]|c->r[30]; // 800CFDB4
  c->lr=0x800CFDBCu; f_800C23EC(c); // 800CFDB8
  c->r[3]=c->r[31]|c->r[31]; // 800CFDBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CFDC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CFDC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CFDC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CFDCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CFDD0
  c->lr=c->r[0]; // 800CFDD4
  c->r[1]=c->r[1]+0x00000020u; // 800CFDD8
  return; // 800CFDDC
}

// fn_800CFDE0
void f_800CFDE0(Ctx* __restrict c) {
  f_800BFBBC(c); return; // 800CFDE0
}

// fn_800CFDE4
void f_800CFDE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFDE4
  c->r[0]=c->lr; // 800CFDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFDF0
  c->r[31]=c->r[3]|c->r[3]; // 800CFDF4
  c->lr=0x800CFDFCu; f_800BDCD0(c); // 800CFDF8
  c->r[3]=0u+0x80460000u; // 800CFDFC
  c->r[0]=c->r[3]+0x00000CE8u; // 800CFE00
  W32(c->r[31]+0x00000048u,c->r[0]); // 800CFE04
  c->r[3]=c->r[31]+0x0000004Cu; // 800CFE08
  c->lr=0x800CFE10u; f_8004B0A4(c); // 800CFE0C
  c->r[3]=c->r[31]+0x00000058u; // 800CFE10
  c->lr=0x800CFE18u; f_8004B0A4(c); // 800CFE14
  c->r[3]=c->r[31]+0x00000064u; // 800CFE18
  c->lr=0x800CFE20u; f_8004B0A4(c); // 800CFE1C
  c->r[3]=c->r[31]|c->r[31]; // 800CFE20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFE28
  c->lr=c->r[0]; // 800CFE2C
  c->r[1]=c->r[1]+0x00000010u; // 800CFE30
  return; // 800CFE34
}

// fn_800CFE38
void f_800CFE38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFE38
  c->r[0]=c->lr; // 800CFE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CFE40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800CFE44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800CFE48
  c->r[30]=c->r[3]|c->r[3]; // 800CFE4C
  c->r[31]=c->r[4]|c->r[4]; // 800CFE50
  cmps(c,0,(int32_t)c->r[3],0); // 800CFE54
  if (crb(c,2)) { goto L_800CFE78; } // 800CFE58
  c->r[4]=0u+0x00000000u; // 800CFE5C
  c->lr=0x800CFE64u; f_800BDD24(c); // 800CFE60
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800CFE64
  cmps(c,0,(int32_t)c->r[0],0); // 800CFE68
  if (!crb(c,1)) { goto L_800CFE78; } // 800CFE6C
  c->r[3]=c->r[30]|c->r[30]; // 800CFE70
  c->lr=0x800CFE78u; f_80047B20(c); // 800CFE74
L_800CFE78:;
  c->r[3]=c->r[30]|c->r[30]; // 800CFE78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800CFE7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800CFE80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800CFE84
  c->lr=c->r[0]; // 800CFE88
  c->r[1]=c->r[1]+0x00000010u; // 800CFE8C
  return; // 800CFE90
}

// fn_800CFE94
void f_800CFE94(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFE94
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800CFE98
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 800CFE9C
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800CFEA0
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800CFEA4
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[0]);} // 800CFEA8
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[0]);} // 800CFEAC
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 800CFEB0
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[0]);} // 800CFEB4
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800CFEB8
  return; // 800CFEBC
}

// fn_800CFEC0
void f_800CFEC0(Ctx* __restrict c) {
  return; // 800CFEC0
}

// fn_800CFEC4
void f_800CFEC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFEC4
  c->r[0]=c->lr; // 800CFEC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CFED0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CFED4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CFED8
  c->r[29]=c->r[3]|c->r[3]; // 800CFEDC
  c->r[30]=c->r[5]|c->r[5]; // 800CFEE0
  c->r[31]=c->r[6]|c->r[6]; // 800CFEE4
  cmps(c,0,(int32_t)c->r[4],0); // 800CFEE8
  if (crb(c,2)) { goto L_800CFEF8; } // 800CFEEC
  c->r[3]=c->r[3]+0x0000004Cu; // 800CFEF0
  c->lr=0x800CFEF8u; f_8004A65C(c); // 800CFEF4
L_800CFEF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800CFEF8
  if (crb(c,2)) { goto L_800CFF0C; } // 800CFEFC
  c->r[3]=c->r[29]+0x00000058u; // 800CFF00
  c->r[4]=c->r[30]|c->r[30]; // 800CFF04
  c->lr=0x800CFF0Cu; f_8004A65C(c); // 800CFF08
L_800CFF0C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CFF0C
  if (crb(c,2)) { goto L_800CFF20; } // 800CFF10
  c->r[3]=c->r[29]+0x00000064u; // 800CFF14
  c->r[4]=c->r[31]|c->r[31]; // 800CFF18
  c->lr=0x800CFF20u; f_8004A65C(c); // 800CFF1C
L_800CFF20:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800CFF20
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 800CFF24
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 800CFF28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CFF2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CFF30
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CFF34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CFF38
  c->lr=c->r[0]; // 800CFF3C
  c->r[1]=c->r[1]+0x00000020u; // 800CFF40
  return; // 800CFF44
}

// fn_800CFF48
void f_800CFF48(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800CFF48
  c->r[3]=c->r[4]|c->r[4]; // 800CFF4C
  c->r[4]=c->r[5]+0x0000004Cu; // 800CFF50
  f_8004A65C(c); return; // 800CFF54
}

// fn_800CFF58
void f_800CFF58(Ctx* __restrict c) {
  f_800BF474(c); return; // 800CFF58
}

// fn_800CFF5C
void f_800CFF5C(Ctx* __restrict c) {
  f_800BF550(c); return; // 800CFF5C
}

// fn_800CFF60
void f_800CFF60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFF60
  c->r[0]=c->lr; // 800CFF64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CFF68
  c->r[11]=c->r[1]+0x00000020u; // 800CFF6C
  c->lr=0x800CFF74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CFF70
  c->r[27]=c->r[3]|c->r[3]; // 800CFF74
  c->r[28]=c->r[4]|c->r[4]; // 800CFF78
  c->r[29]=c->r[5]|c->r[5]; // 800CFF7C
  c->r[30]=c->r[6]|c->r[6]; // 800CFF80
  c->r[4]=0u+0x00000000u; // 800CFF84
  c->lr=0x800CFF8Cu; f_800BF678(c); // 800CFF88
  c->r[31]=c->r[3]|c->r[3]; // 800CFF8C
  cmps(c,0,(int32_t)c->r[3],0); // 800CFF90
  if (crb(c,2)) { goto L_800CFFC4; } // 800CFF94
  c->r[3]=c->r[27]|c->r[27]; // 800CFF98
  c->r[4]=c->r[31]|c->r[31]; // 800CFF9C
  c->lr=0x800CFFA4u; f_800BBAF4(c); // 800CFFA0
  cmps(c,0,(int32_t)c->r[3],0); // 800CFFA4
  if (crb(c,2)) { goto L_800CFFC4; } // 800CFFA8
  c->r[4]=c->r[28]|c->r[28]; // 800CFFAC
  c->r[5]=c->r[29]|c->r[29]; // 800CFFB0
  c->r[6]=c->r[30]|c->r[30]; // 800CFFB4
  c->lr=0x800CFFBCu; f_800CFEC4(c); // 800CFFB8
  c->r[3]=c->r[31]|c->r[31]; // 800CFFBC
  goto L_800CFFC8; // 800CFFC0
L_800CFFC4:;
  c->r[3]=0u+0x00000000u; // 800CFFC4
L_800CFFC8:;
  c->r[11]=c->r[1]+0x00000020u; // 800CFFC8
  c->lr=0x800CFFD0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800CFFCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CFFD0
  c->lr=c->r[0]; // 800CFFD4
  c->r[1]=c->r[1]+0x00000020u; // 800CFFD8
  return; // 800CFFDC
}

// fn_800CFFE0
void f_800CFFE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CFFE0
  c->r[0]=c->lr; // 800CFFE4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800CFFE8
  c->r[11]=c->r[1]+0x00000060u; // 800CFFEC
  c->lr=0x800CFFF4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800CFFF0
  c->r[21]=c->r[3]|c->r[3]; // 800CFFF4
  c->r[22]=c->r[4]|c->r[4]; // 800CFFF8
  c->r[3]=c->r[1]+0x0000001Cu; // 800CFFFC
  c->r[4]=0u+0x00000000u; // 800D0000
  c->lr=0x800D0008u; f_800543BC(c); // 800D0004
  c->r[3]=c->r[1]+0x00000018u; // 800D0008
  c->r[4]=0u+0x00000000u; // 800D000C
  c->lr=0x800D0014u; f_8005457C(c); // 800D0010
  c->r[3]=c->r[1]+0x00000014u; // 800D0014
  c->r[4]=0u+0x00000000u; // 800D0018
  c->lr=0x800D0020u; f_800D0164(c); // 800D001C
  c->r[3]=c->r[1]+0x00000020u; // 800D0020
  c->lr=0x800D0028u; f_8004B0A4(c); // 800D0024
  c->lr=0x800D002Cu; f_800A23BC(c); // 800D0028
  c->lr=0x800D0030u; f_800BB7F0(c); // 800D002C
  c->r[4]=c->r[22]|c->r[22]; // 800D0030
  c->r[5]=c->r[1]+0x00000010u; // 800D0034
  c->lr=0x800D003Cu; f_800C2C24(c); // 800D0038
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D003C
  c->lr=0x800D0044u; f_8006E56C(c); // 800D0040
  c->lr=0x800D0048u; f_8006E564(c); // 800D0044
  c->r[26]=c->r[3]|c->r[3]; // 800D0048
  c->lr=0x800D0050u; f_802B6960(c); // 800D004C
  c->r[28]=c->r[3]|c->r[3]; // 800D0050
  c->r[23]=0u+0x00000000u; // 800D0054
  goto L_800D0144; // 800D0058
L_800D005C:;
  c->r[3]=c->r[26]|c->r[26]; // 800D005C
  c->r[4]=c->r[23]|c->r[23]; // 800D0060
  c->lr=0x800D0068u; f_802B68C8(c); // 800D0064
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D0068
  c->r[3]=c->r[1]+0x0000001Cu; // 800D006C
  c->r[4]=c->r[1]+0x0000000Cu; // 800D0070
  c->lr=0x800D0078u; f_80051C04(c); // 800D0074
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0078
  c->lr=0x800D0080u; f_802B854C(c); // 800D007C
  c->r[29]=c->r[3]|c->r[3]; // 800D0080
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0084
  c->lr=0x800D008Cu; f_802B8678(c); // 800D0088
  c->r[22]=0u+0x00000000u; // 800D008C
  goto L_800D0138; // 800D0090
L_800D0094:;
  c->r[3]=c->r[1]+0x0000001Cu; // 800D0094
  c->r[4]=c->r[22]|c->r[22]; // 800D0098
  c->lr=0x800D00A0u; f_802B84F8(c); // 800D009C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D00A0
  c->r[3]=c->r[1]+0x00000018u; // 800D00A4
  c->r[4]=c->r[1]+0x00000008u; // 800D00A8
  c->lr=0x800D00B0u; f_8005420C(c); // 800D00AC
  c->r[3]=c->r[1]+0x00000018u; // 800D00B0
  c->lr=0x800D00B8u; f_800544D4(c); // 800D00B4
  c->r[27]=c->r[3]|c->r[3]; // 800D00B8
  c->r[3]=c->r[21]|c->r[21]; // 800D00BC
  c->r[4]=0u+0x00000000u; // 800D00C0
  c->lr=0x800D00C8u; f_800BF678(c); // 800D00C4
  c->r[24]=c->r[3]|c->r[3]; // 800D00C8
  cmps(c,0,(int32_t)c->r[3],0); // 800D00CC
  if (crb(c,2)) { goto L_800D0134; } // 800D00D0
  c->r[3]=c->r[21]|c->r[21]; // 800D00D4
  c->r[4]=c->r[24]|c->r[24]; // 800D00D8
  c->lr=0x800D00E0u; f_800BBAF4(c); // 800D00DC
  c->r[25]=c->r[3]|c->r[3]; // 800D00E0
  cmps(c,0,(int32_t)c->r[3],0); // 800D00E4
  if (crb(c,2)) { goto L_800D0134; } // 800D00E8
  c->r[3]=c->r[1]+0x00000018u; // 800D00EC
  c->lr=0x800D00F4u; f_800CA0B4(c); // 800D00F0
  c->r[30]=c->r[3]|c->r[3]; // 800D00F4
  c->r[3]=c->r[1]+0x00000018u; // 800D00F8
  c->lr=0x800D0100u; f_800CA0D8(c); // 800D00FC
  c->r[31]=c->r[3]|c->r[3]; // 800D0100
  c->r[3]=c->r[1]+0x00000018u; // 800D0104
  c->lr=0x800D010Cu; f_800CA0FC(c); // 800D0108
  c->r[4]=c->r[3]|c->r[3]; // 800D010C
  c->r[3]=c->r[25]|c->r[25]; // 800D0110
  c->r[5]=c->r[31]|c->r[31]; // 800D0114
  c->r[6]=c->r[30]|c->r[30]; // 800D0118
  c->lr=0x800D0120u; f_800CFEC4(c); // 800D011C
  c->r[3]=c->r[21]|c->r[21]; // 800D0120
  c->r[4]=c->r[24]|c->r[24]; // 800D0124
  c->lr=0x800D012Cu; f_800BBAF4(c); // 800D0128
  c->r[4]=c->r[27]|c->r[27]; // 800D012C
  c->lr=0x800D0134u; f_800BDE70(c); // 800D0130
L_800D0134:;
  c->r[22]=c->r[22]+0x00000001u; // 800D0134
L_800D0138:;
  cmpu(c,0,c->r[22],c->r[29]); // 800D0138
  if (crb(c,0)) { IRQCHK(c); goto L_800D0094; } // 800D013C
  c->r[23]=c->r[23]+0x00000001u; // 800D0140
L_800D0144:;
  cmpu(c,0,c->r[23],c->r[28]); // 800D0144
  if (crb(c,0)) { IRQCHK(c); goto L_800D005C; } // 800D0148
  c->r[11]=c->r[1]+0x00000060u; // 800D014C
  c->lr=0x800D0154u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D0150
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D0154
  c->lr=c->r[0]; // 800D0158
  c->r[1]=c->r[1]+0x00000060u; // 800D015C
  return; // 800D0160
}

// fn_800D0164
void f_800D0164(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0164
  c->r[0]=c->lr; // 800D0168
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D016C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D0170
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0174
  c->r[30]=c->r[3]|c->r[3]; // 800D0178
  c->r[31]=c->r[4]|c->r[4]; // 800D017C
  c->lr=0x800D0184u; f_800CA184(c); // 800D0180
  c->r[0]=rotl(c->r[31],0)&0x00000003u; // 800D0184
  cmps(c,0,(int32_t)c->r[0],0); // 800D0188
  if (crb(c,2)) { goto L_800D01AC; } // 800D018C
  c->r[3]=0u+0x80460000u; // 800D0190
  c->r[3]=c->r[3]+0x00001348u; // 800D0194
  c->r[4]=0u+0x00000027u; // 800D0198
  c->r[5]=0u+0x80460000u; // 800D019C
  c->r[5]=c->r[5]+0x0000131Cu; // 800D01A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D01A4
  c->lr=0x800D01ACu; f_80292868(c); // 800D01A8
L_800D01AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800D01AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D01B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D01B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D01B8
  c->lr=c->r[0]; // 800D01BC
  c->r[1]=c->r[1]+0x00000010u; // 800D01C0
  return; // 800D01C4
}

// fn_800D01C8
void f_800D01C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D01C8
  c->r[0]=c->lr; // 800D01CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D01D0
  c->lr=0x800D01D8u; f_800D01EC(c); // 800D01D4
  c->r[3]=R16(c->r[3]+0x0000001Eu); // 800D01D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D01DC
  c->lr=c->r[0]; // 800D01E0
  c->r[1]=c->r[1]+0x00000010u; // 800D01E4
  return; // 800D01E8
}

// fn_800D01EC
void f_800D01EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D01EC
  c->r[0]=c->lr; // 800D01F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D01F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D01F8
  c->r[31]=c->r[3]|c->r[3]; // 800D01FC
  c->lr=0x800D0204u; f_800CA194(c); // 800D0200
  cmps(c,0,(int32_t)c->r[3],0); // 800D0204
  if (!crb(c,2)) { goto L_800D0234; } // 800D0208
  c->lr=0x800D0210u; f_800D0250(c); // 800D020C
  c->r[6]=c->r[3]|c->r[3]; // 800D0210
  c->r[3]=0u+0x80460000u; // 800D0214
  c->r[3]=c->r[3]+0x000013B0u; // 800D0218
  c->r[4]=0u+0x00000027u; // 800D021C
  c->r[5]=0u+0x80460000u; // 800D0220
  c->r[5]=c->r[5]+0x00001390u; // 800D0224
  c->r[7]=c->r[2]+0xFFFF8940u; // 800D0228
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D022C
  c->lr=0x800D0234u; f_80292868(c); // 800D0230
L_800D0234:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0234
  c->lr=0x800D023Cu; f_800CA18C(c); // 800D0238
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D023C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0240
  c->lr=c->r[0]; // 800D0244
  c->r[1]=c->r[1]+0x00000010u; // 800D0248
  return; // 800D024C
}

// fn_800D0250
void f_800D0250(Ctx* __restrict c) {
  c->r[3]=0u+0x80460000u; // 800D0250
  c->r[3]=c->r[3]+0x00001358u; // 800D0254
  return; // 800D0258
}

// fn_800D025C
void f_800D025C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D025C
  c->r[0]=c->lr; // 800D0260
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0264
  c->lr=0x800D026Cu; f_800D0294(c); // 800D0268
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D026C
  cmps(c,0,(int32_t)c->r[0],0); // 800D0270
  if (crb(c,2)) { goto L_800D0280; } // 800D0274
  c->r[3]=c->r[3]+c->r[0]; // 800D0278
  goto L_800D0284; // 800D027C
L_800D0280:;
  c->r[3]=0u+0x00000000u; // 800D0280
L_800D0284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D0284
  c->lr=c->r[0]; // 800D0288
  c->r[1]=c->r[1]+0x00000010u; // 800D028C
  return; // 800D0290
}

// fn_800D0294
void f_800D0294(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0294
  c->r[0]=c->lr; // 800D0298
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D029C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D02A0
  c->r[31]=c->r[3]|c->r[3]; // 800D02A4
  c->lr=0x800D02ACu; f_800CA194(c); // 800D02A8
  cmps(c,0,(int32_t)c->r[3],0); // 800D02AC
  if (!crb(c,2)) { goto L_800D02DC; } // 800D02B0
  c->lr=0x800D02B8u; f_800D0250(c); // 800D02B4
  c->r[6]=c->r[3]|c->r[3]; // 800D02B8
  c->r[3]=0u+0x80460000u; // 800D02BC
  c->r[3]=c->r[3]+0x00001380u; // 800D02C0
  c->r[4]=0u+0x00000027u; // 800D02C4
  c->r[5]=0u+0x80460000u; // 800D02C8
  c->r[5]=c->r[5]+0x00001364u; // 800D02CC
  c->r[7]=c->r[2]+0xFFFF893Cu; // 800D02D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D02D4
  c->lr=0x800D02DCu; f_80292868(c); // 800D02D8
L_800D02DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800D02DC
  c->lr=0x800D02E4u; f_800CA1A8(c); // 800D02E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D02E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D02E8
  c->lr=c->r[0]; // 800D02EC
  c->r[1]=c->r[1]+0x00000010u; // 800D02F0
  return; // 800D02F4
}

// fn_800D02F8
void f_800D02F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D02F8
  c->r[0]=c->lr; // 800D02FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D0300
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D0304
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D0308
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D030C
  c->r[29]=c->r[3]|c->r[3]; // 800D0310
  c->lr=0x800D0318u; f_800BDCD0(c); // 800D0314
  c->r[3]=0u+0x80460000u; // 800D0318
  c->r[0]=c->r[3]+0x00000C78u; // 800D031C
  W32(c->r[29]+0x00000048u,c->r[0]); // 800D0320
  c->r[3]=c->r[29]+0x0000004Cu; // 800D0324
  c->lr=0x800D032Cu; f_8004B0A4(c); // 800D0328
  c->r[3]=c->r[29]+0x00000058u; // 800D032C
  c->lr=0x800D0334u; f_8004B0A4(c); // 800D0330
  c->r[30]=c->r[29]+0x00000068u; // 800D0334
  c->r[31]=c->r[29]+0x00000098u; // 800D0338
L_800D033C:;
  c->r[3]=c->r[30]|c->r[30]; // 800D033C
  c->lr=0x800D0344u; f_8004B0A4(c); // 800D0340
  c->r[30]=c->r[30]+0x0000000Cu; // 800D0344
  cmpu(c,0,c->r[30],c->r[31]); // 800D0348
  if (crb(c,0)) { IRQCHK(c); goto L_800D033C; } // 800D034C
  c->r[3]=c->r[29]|c->r[29]; // 800D0350
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D0354
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D0358
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D035C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0360
  c->lr=c->r[0]; // 800D0364
  c->r[1]=c->r[1]+0x00000020u; // 800D0368
  return; // 800D036C
}

// fn_800D0370
void f_800D0370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0370
  c->r[0]=c->lr; // 800D0374
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D037C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D0380
  c->r[30]=c->r[3]|c->r[3]; // 800D0384
  c->r[31]=c->r[4]|c->r[4]; // 800D0388
  cmps(c,0,(int32_t)c->r[3],0); // 800D038C
  if (crb(c,2)) { goto L_800D03B0; } // 800D0390
  c->r[4]=0u+0x00000000u; // 800D0394
  c->lr=0x800D039Cu; f_800BDD24(c); // 800D0398
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800D039C
  cmps(c,0,(int32_t)c->r[0],0); // 800D03A0
  if (!crb(c,1)) { goto L_800D03B0; } // 800D03A4
  c->r[3]=c->r[30]|c->r[30]; // 800D03A8
  c->lr=0x800D03B0u; f_80047B20(c); // 800D03AC
L_800D03B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800D03B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D03B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D03B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D03BC
  c->lr=c->r[0]; // 800D03C0
  c->r[1]=c->r[1]+0x00000010u; // 800D03C4
  return; // 800D03C8
}

// fn_800D03CC
void f_800D03CC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800D03CC
  W32(c->r[3]+0x00000098u,c->r[0]); // 800D03D0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D03D4
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D03D8
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 800D03DC
  {uint32_t ea=c->r[3]+0x00000054u; WF32(ea,c->f[0]);} // 800D03E0
  return; // 800D03E4
}

// fn_800D03E8
void f_800D03E8(Ctx* __restrict c) {
  return; // 800D03E8
}

// fn_800D03EC
void f_800D03EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D03EC
  c->r[0]=c->lr; // 800D03F0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D03F4
  c->r[11]=c->r[1]+0x00000050u; // 800D03F8
  c->lr=0x800D0400u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800D03FC
  c->r[27]=c->r[3]|c->r[3]; // 800D0400
  c->r[28]=c->r[4]|c->r[4]; // 800D0404
  c->r[29]=c->r[5]|c->r[5]; // 800D0408
  c->r[30]=c->r[6]|c->r[6]; // 800D040C
  c->r[3]=c->r[1]+0x0000002Cu; // 800D0410
  c->lr=0x800D0418u; f_8004B0A4(c); // 800D0414
  c->r[3]=c->r[1]+0x00000020u; // 800D0418
  c->lr=0x800D0420u; f_8004B0A4(c); // 800D041C
  c->r[3]=c->r[1]+0x00000014u; // 800D0420
  c->lr=0x800D0428u; f_8004B0A4(c); // 800D0424
  c->r[3]=c->r[1]+0x00000008u; // 800D0428
  c->lr=0x800D0430u; f_8004B0A4(c); // 800D042C
  W32(c->r[27]+0x00000098u,c->r[30]); // 800D0430
  c->r[30]=0u+0x00000000u; // 800D0434
  c->r[31]=c->r[27]+0x00000068u; // 800D0438
  goto L_800D045C; // 800D043C
L_800D0440:;
  c->r[3]=c->r[31]|c->r[31]; // 800D0440
  c->r[4]=c->r[28]|c->r[28]; // 800D0444
  c->r[5]=c->r[29]|c->r[29]; // 800D0448
  c->lr=0x800D0450u; f_8005FF94(c); // 800D044C
  c->r[29]=c->r[29]+0x0000000Cu; // 800D0450
  c->r[31]=c->r[31]+0x0000000Cu; // 800D0454
  c->r[30]=c->r[30]+0x00000001u; // 800D0458
L_800D045C:;
  c->r[0]=R32(c->r[27]+0x00000098u); // 800D045C
  cmpu(c,0,c->r[30],c->r[0]); // 800D0460
  if (crb(c,0)) { IRQCHK(c); goto L_800D0440; } // 800D0464
  c->r[3]=c->r[1]+0x00000020u; // 800D0468
  c->r[4]=c->r[27]+0x00000068u; // 800D046C
  c->r[5]=c->r[27]+0x00000074u; // 800D0470
  c->lr=0x800D0478u; f_8006000C(c); // 800D0474
  c->r[3]=c->r[1]+0x00000014u; // 800D0478
  c->r[4]=c->r[27]+0x00000080u; // 800D047C
  c->r[5]=c->r[27]+0x00000074u; // 800D0480
  c->lr=0x800D0488u; f_8006000C(c); // 800D0484
  c->r[3]=c->r[1]+0x00000008u; // 800D0488
  c->r[4]=c->r[1]+0x00000020u; // 800D048C
  c->r[5]=c->r[1]+0x00000014u; // 800D0490
  c->lr=0x800D0498u; f_800C22F8(c); // 800D0494
  c->r[3]=c->r[27]+0x00000058u; // 800D0498
  c->r[4]=c->r[1]+0x00000008u; // 800D049C
  c->lr=0x800D04A4u; f_8005C110(c); // 800D04A0
  c->r[3]=c->r[27]+0x00000058u; // 800D04A4
  c->r[4]=c->r[27]+0x00000068u; // 800D04A8
  c->lr=0x800D04B0u; f_80079760(c); // 800D04AC
  c->f[0]=-c->f[1]; // 800D04B0
  {uint32_t ea=c->r[27]+0x00000064u; WF32(ea,c->f[0]);} // 800D04B4
  {uint32_t ea=c->r[28]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04B8
  {uint32_t ea=c->r[27]+0x0000004Cu; WF32(ea,c->f[0]);} // 800D04BC
  {uint32_t ea=c->r[28]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04C0
  {uint32_t ea=c->r[27]+0x00000050u; WF32(ea,c->f[0]);} // 800D04C4
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D04C8
  {uint32_t ea=c->r[27]+0x00000054u; WF32(ea,c->f[0]);} // 800D04CC
  c->r[11]=c->r[1]+0x00000050u; // 800D04D0
  c->lr=0x800D04D8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800D04D4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D04D8
  c->lr=c->r[0]; // 800D04DC
  c->r[1]=c->r[1]+0x00000050u; // 800D04E0
  return; // 800D04E4
}

// fn_800D04E8
void f_800D04E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D04E8
  c->r[0]=c->lr; // 800D04EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D04F0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D04F4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D04F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D04FC
  c->r[31]=c->r[3]|c->r[3]; // 800D0500
  c->r[3]=c->r[3]+0x00000058u; // 800D0504
  c->lr=0x800D050Cu; f_80079760(c); // 800D0508
  c->f[31]=c->f[1]; // 800D050C
  c->r[3]=c->r[31]+0x00000058u; // 800D0510
  c->r[4]=c->r[3]|c->r[3]; // 800D0514
  c->lr=0x800D051Cu; f_80079760(c); // 800D0518
  c->lr=0x800D0520u; f_80059320(c); // 800D051C
  {uint32_t ea=c->r[31]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D0520
  c->f[0]=c->ps1[0]=S(c->f[31]+c->f[0]); // 800D0524
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 800D0528
  c->r[0]=0u+0x00000018u; // 800D052C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800D0530
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D0534
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D0538
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D053C
  c->lr=c->r[0]; // 800D0540
  c->r[1]=c->r[1]+0x00000020u; // 800D0544
  return; // 800D0548
}

// fn_800D054C
void f_800D054C(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800D054C
  c->r[3]=c->r[4]|c->r[4]; // 800D0550
  c->r[4]=c->r[5]+0x0000004Cu; // 800D0554
  f_8004A65C(c); return; // 800D0558
}

