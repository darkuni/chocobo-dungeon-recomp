#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800FF238
void f_800FF238(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF238
  c->r[0]=c->lr; // 800FF23C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF244
  c->r[31]=c->r[3]|c->r[3]; // 800FF248
  c->lr=0x800FF250u; f_801054C0(c); // 800FF24C
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FF250
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FF254
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF258
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF25C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF260
  c->lr=c->r[0]; // 800FF264
  c->r[1]=c->r[1]+0x00000010u; // 800FF268
  return; // 800FF26C
}

// fn_800FF270
void f_800FF270(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF270
  cmps(c,0,(int32_t)c->r[4],0); // 800FF274
  if (crb(c,2)) return; // 800FF278
  c->r[0]=0u+0x00000000u; // 800FF27C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FF280
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF284
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FF288
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF28C
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FF290
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF294
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FF298
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF29C
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FF2A0
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF2A4
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FF2A8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF2AC
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FF2B0
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF2B4
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FF2B8
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FF2BC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FF2C0
  return; // 800FF2C4
}

// fn_800FF2C8
void f_800FF2C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF2C8
  c->r[0]=c->lr; // 800FF2CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF2D0
  c->r[11]=c->r[1]+0x00000020u; // 800FF2D4
  c->lr=0x800FF2DCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF2D8
  c->r[27]=c->r[3]|c->r[3]; // 800FF2DC
  c->r[29]=c->r[4]|c->r[4]; // 800FF2E0
  c->r[28]=c->r[5]|c->r[5]; // 800FF2E4
  c->r[4]=c->r[28]|c->r[28]; // 800FF2E8
  c->lr=0x800FF2F0u; f_800FF414(c); // 800FF2EC
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF2F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FF2F4
  cmpu(c,0,c->r[0],c->r[29]); // 800FF2F8
  if (crb(c,2)) { goto L_800FF3C4; } // 800FF2FC
  c->r[3]=c->r[27]|c->r[27]; // 800FF300
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF304
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FF308
  c->ctr=c->r[12]; // 800FF30C
  if (true) { c->lr=0x800FF314u; dispatch(c,c->ctr); } // 800FF310
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF314
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FF318
  cmps(c,0,(int32_t)c->r[29],0); // 800FF31C
  if (crb(c,2)) { goto L_800FF3B0; } // 800FF320
  c->r[3]=c->r[29]|c->r[29]; // 800FF324
  c->lr=0x800FF32Cu; f_8006E4F4(c); // 800FF328
  c->r[30]=c->r[3]|c->r[3]; // 800FF32C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF330
  if (crb(c,2)) { goto L_800FF3A4; } // 800FF334
  c->r[4]=0u+0x00000000u; // 800FF338
  c->lr=0x800FF340u; f_8006E554(c); // 800FF33C
  c->r[31]=c->r[3]|c->r[3]; // 800FF340
  c->lr=0x800FF348u; f_800736A4(c); // 800FF344
  c->r[29]=c->r[3]|c->r[3]; // 800FF348
  c->r[3]=c->r[31]|c->r[31]; // 800FF34C
  c->lr=0x800FF354u; f_80077070(c); // 800FF350
  c->r[5]=c->r[3]|c->r[3]; // 800FF354
  c->r[3]=c->r[27]|c->r[27]; // 800FF358
  c->r[4]=c->r[29]|c->r[29]; // 800FF35C
  c->lr=0x800FF364u; f_801025DC(c); // 800FF360
  c->r[3]=c->r[30]|c->r[30]; // 800FF364
  c->lr=0x800FF36Cu; f_8006E54C(c); // 800FF368
  cmps(c,0,(int32_t)c->r[3],1); // 800FF36C
  if (!crb(c,1)) { goto L_800FF3A4; } // 800FF370
  c->r[3]=c->r[30]|c->r[30]; // 800FF374
  c->r[4]=0u+0x00000001u; // 800FF378
  c->lr=0x800FF380u; f_8006E554(c); // 800FF37C
  c->r[31]=c->r[3]|c->r[3]; // 800FF380
  c->lr=0x800FF388u; f_800736A4(c); // 800FF384
  c->r[30]=c->r[3]|c->r[3]; // 800FF388
  c->r[3]=c->r[31]|c->r[31]; // 800FF38C
  c->lr=0x800FF394u; f_80077070(c); // 800FF390
  c->r[5]=c->r[3]|c->r[3]; // 800FF394
  c->r[3]=c->r[27]|c->r[27]; // 800FF398
  c->r[4]=c->r[30]|c->r[30]; // 800FF39C
  c->lr=0x800FF3A4u; f_80102628(c); // 800FF3A0
L_800FF3A4:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF3A4
  c->r[4]=c->r[28]|c->r[28]; // 800FF3A8
  c->lr=0x800FF3B0u; f_800FF414(c); // 800FF3AC
L_800FF3B0:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF3B0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF3B4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FF3B8
  c->ctr=c->r[12]; // 800FF3BC
  if (true) { c->lr=0x800FF3C4u; dispatch(c,c->ctr); } // 800FF3C0
L_800FF3C4:;
  c->r[11]=c->r[1]+0x00000020u; // 800FF3C4
  c->lr=0x800FF3CCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF3C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF3CC
  c->lr=c->r[0]; // 800FF3D0
  c->r[1]=c->r[1]+0x00000020u; // 800FF3D4
  return; // 800FF3D8
}

// fn_800FF3DC
void f_800FF3DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF3DC
  c->r[0]=c->lr; // 800FF3E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF3E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF3E8
  c->r[31]=c->r[3]|c->r[3]; // 800FF3EC
  c->lr=0x800FF3F4u; f_8010546C(c); // 800FF3F0
  c->r[0]=0u+0x00000000u; // 800FF3F4
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FF3F8
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF3FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF400
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF404
  c->lr=c->r[0]; // 800FF408
  c->r[1]=c->r[1]+0x00000010u; // 800FF40C
  return; // 800FF410
}

// fn_800FF414
void f_800FF414(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF414
  c->r[0]=c->lr; // 800FF418
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF41C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF420
  c->r[31]=c->r[3]|c->r[3]; // 800FF424
  c->lr=0x800FF42Cu; f_801054C0(c); // 800FF428
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FF42C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FF430
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF438
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF43C
  c->lr=c->r[0]; // 800FF440
  c->r[1]=c->r[1]+0x00000010u; // 800FF444
  return; // 800FF448
}

// fn_800FF44C
void f_800FF44C(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF44C
  cmps(c,0,(int32_t)c->r[4],0); // 800FF450
  if (crb(c,2)) return; // 800FF454
  c->r[0]=0u+0x00000000u; // 800FF458
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FF45C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF460
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FF464
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF468
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FF46C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF470
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FF474
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF478
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FF47C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF480
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FF484
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF488
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FF48C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF490
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FF494
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FF498
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FF49C
  return; // 800FF4A0
}

// fn_800FF4A4
void f_800FF4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF4A4
  c->r[0]=c->lr; // 800FF4A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF4AC
  c->r[11]=c->r[1]+0x00000020u; // 800FF4B0
  c->lr=0x800FF4B8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF4B4
  c->r[27]=c->r[3]|c->r[3]; // 800FF4B8
  c->r[29]=c->r[4]|c->r[4]; // 800FF4BC
  c->r[28]=c->r[5]|c->r[5]; // 800FF4C0
  c->r[4]=c->r[28]|c->r[28]; // 800FF4C4
  c->lr=0x800FF4CCu; f_800FF5F0(c); // 800FF4C8
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF4CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FF4D0
  cmpu(c,0,c->r[0],c->r[29]); // 800FF4D4
  if (crb(c,2)) { goto L_800FF5A0; } // 800FF4D8
  c->r[3]=c->r[27]|c->r[27]; // 800FF4DC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF4E0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FF4E4
  c->ctr=c->r[12]; // 800FF4E8
  if (true) { c->lr=0x800FF4F0u; dispatch(c,c->ctr); } // 800FF4EC
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF4F0
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FF4F4
  cmps(c,0,(int32_t)c->r[29],0); // 800FF4F8
  if (crb(c,2)) { goto L_800FF58C; } // 800FF4FC
  c->r[3]=c->r[29]|c->r[29]; // 800FF500
  c->lr=0x800FF508u; f_8006E4F4(c); // 800FF504
  c->r[30]=c->r[3]|c->r[3]; // 800FF508
  cmps(c,0,(int32_t)c->r[3],0); // 800FF50C
  if (crb(c,2)) { goto L_800FF580; } // 800FF510
  c->r[4]=0u+0x00000000u; // 800FF514
  c->lr=0x800FF51Cu; f_8006E554(c); // 800FF518
  c->r[31]=c->r[3]|c->r[3]; // 800FF51C
  c->lr=0x800FF524u; f_800736A4(c); // 800FF520
  c->r[29]=c->r[3]|c->r[3]; // 800FF524
  c->r[3]=c->r[31]|c->r[31]; // 800FF528
  c->lr=0x800FF530u; f_80077070(c); // 800FF52C
  c->r[5]=c->r[3]|c->r[3]; // 800FF530
  c->r[3]=c->r[27]|c->r[27]; // 800FF534
  c->r[4]=c->r[29]|c->r[29]; // 800FF538
  c->lr=0x800FF540u; f_80102678(c); // 800FF53C
  c->r[3]=c->r[30]|c->r[30]; // 800FF540
  c->lr=0x800FF548u; f_8006E54C(c); // 800FF544
  cmps(c,0,(int32_t)c->r[3],1); // 800FF548
  if (!crb(c,1)) { goto L_800FF580; } // 800FF54C
  c->r[3]=c->r[30]|c->r[30]; // 800FF550
  c->r[4]=0u+0x00000001u; // 800FF554
  c->lr=0x800FF55Cu; f_8006E554(c); // 800FF558
  c->r[31]=c->r[3]|c->r[3]; // 800FF55C
  c->lr=0x800FF564u; f_800736A4(c); // 800FF560
  c->r[30]=c->r[3]|c->r[3]; // 800FF564
  c->r[3]=c->r[31]|c->r[31]; // 800FF568
  c->lr=0x800FF570u; f_80077070(c); // 800FF56C
  c->r[5]=c->r[3]|c->r[3]; // 800FF570
  c->r[3]=c->r[27]|c->r[27]; // 800FF574
  c->r[4]=c->r[30]|c->r[30]; // 800FF578
  c->lr=0x800FF580u; f_801026C4(c); // 800FF57C
L_800FF580:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF580
  c->r[4]=c->r[28]|c->r[28]; // 800FF584
  c->lr=0x800FF58Cu; f_800FF5F0(c); // 800FF588
L_800FF58C:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF58C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF590
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FF594
  c->ctr=c->r[12]; // 800FF598
  if (true) { c->lr=0x800FF5A0u; dispatch(c,c->ctr); } // 800FF59C
L_800FF5A0:;
  c->r[11]=c->r[1]+0x00000020u; // 800FF5A0
  c->lr=0x800FF5A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF5A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF5A8
  c->lr=c->r[0]; // 800FF5AC
  c->r[1]=c->r[1]+0x00000020u; // 800FF5B0
  return; // 800FF5B4
}

// fn_800FF5B8
void f_800FF5B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5B8
  c->r[0]=c->lr; // 800FF5BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF5C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF5C4
  c->r[31]=c->r[3]|c->r[3]; // 800FF5C8
  c->lr=0x800FF5D0u; f_8010546C(c); // 800FF5CC
  c->r[0]=0u+0x00000000u; // 800FF5D0
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FF5D4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF5D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF5DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF5E0
  c->lr=c->r[0]; // 800FF5E4
  c->r[1]=c->r[1]+0x00000010u; // 800FF5E8
  return; // 800FF5EC
}

// fn_800FF5F0
void f_800FF5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF5F0
  c->r[0]=c->lr; // 800FF5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF5F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF5FC
  c->r[31]=c->r[3]|c->r[3]; // 800FF600
  c->lr=0x800FF608u; f_801054C0(c); // 800FF604
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FF608
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FF60C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF614
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF618
  c->lr=c->r[0]; // 800FF61C
  c->r[1]=c->r[1]+0x00000010u; // 800FF620
  return; // 800FF624
}

// fn_800FF628
void f_800FF628(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF628
  cmps(c,0,(int32_t)c->r[4],0); // 800FF62C
  if (crb(c,2)) return; // 800FF630
  c->r[0]=0u+0x00000000u; // 800FF634
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FF638
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF63C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FF640
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF644
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FF648
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF64C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FF650
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF654
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FF658
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF65C
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FF660
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF664
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FF668
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF66C
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FF670
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FF674
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FF678
  return; // 800FF67C
}

// fn_800FF680
void f_800FF680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF680
  c->r[0]=c->lr; // 800FF684
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF688
  c->r[11]=c->r[1]+0x00000020u; // 800FF68C
  c->lr=0x800FF694u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF690
  c->r[27]=c->r[3]|c->r[3]; // 800FF694
  c->r[29]=c->r[4]|c->r[4]; // 800FF698
  c->r[28]=c->r[5]|c->r[5]; // 800FF69C
  c->r[4]=c->r[28]|c->r[28]; // 800FF6A0
  c->lr=0x800FF6A8u; f_800FF7CC(c); // 800FF6A4
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF6A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FF6AC
  cmpu(c,0,c->r[0],c->r[29]); // 800FF6B0
  if (crb(c,2)) { goto L_800FF77C; } // 800FF6B4
  c->r[3]=c->r[27]|c->r[27]; // 800FF6B8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF6BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FF6C0
  c->ctr=c->r[12]; // 800FF6C4
  if (true) { c->lr=0x800FF6CCu; dispatch(c,c->ctr); } // 800FF6C8
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF6CC
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FF6D0
  cmps(c,0,(int32_t)c->r[29],0); // 800FF6D4
  if (crb(c,2)) { goto L_800FF768; } // 800FF6D8
  c->r[3]=c->r[29]|c->r[29]; // 800FF6DC
  c->lr=0x800FF6E4u; f_8006E4F4(c); // 800FF6E0
  c->r[30]=c->r[3]|c->r[3]; // 800FF6E4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF6E8
  if (crb(c,2)) { goto L_800FF75C; } // 800FF6EC
  c->r[4]=0u+0x00000000u; // 800FF6F0
  c->lr=0x800FF6F8u; f_8006E554(c); // 800FF6F4
  c->r[31]=c->r[3]|c->r[3]; // 800FF6F8
  c->lr=0x800FF700u; f_800736A4(c); // 800FF6FC
  c->r[29]=c->r[3]|c->r[3]; // 800FF700
  c->r[3]=c->r[31]|c->r[31]; // 800FF704
  c->lr=0x800FF70Cu; f_80077070(c); // 800FF708
  c->r[5]=c->r[3]|c->r[3]; // 800FF70C
  c->r[3]=c->r[27]|c->r[27]; // 800FF710
  c->r[4]=c->r[29]|c->r[29]; // 800FF714
  c->lr=0x800FF71Cu; f_80102714(c); // 800FF718
  c->r[3]=c->r[30]|c->r[30]; // 800FF71C
  c->lr=0x800FF724u; f_8006E54C(c); // 800FF720
  cmps(c,0,(int32_t)c->r[3],1); // 800FF724
  if (!crb(c,1)) { goto L_800FF75C; } // 800FF728
  c->r[3]=c->r[30]|c->r[30]; // 800FF72C
  c->r[4]=0u+0x00000001u; // 800FF730
  c->lr=0x800FF738u; f_8006E554(c); // 800FF734
  c->r[31]=c->r[3]|c->r[3]; // 800FF738
  c->lr=0x800FF740u; f_800736A4(c); // 800FF73C
  c->r[30]=c->r[3]|c->r[3]; // 800FF740
  c->r[3]=c->r[31]|c->r[31]; // 800FF744
  c->lr=0x800FF74Cu; f_80077070(c); // 800FF748
  c->r[5]=c->r[3]|c->r[3]; // 800FF74C
  c->r[3]=c->r[27]|c->r[27]; // 800FF750
  c->r[4]=c->r[30]|c->r[30]; // 800FF754
  c->lr=0x800FF75Cu; f_80102760(c); // 800FF758
L_800FF75C:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF75C
  c->r[4]=c->r[28]|c->r[28]; // 800FF760
  c->lr=0x800FF768u; f_800FF7CC(c); // 800FF764
L_800FF768:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF768
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF76C
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FF770
  c->ctr=c->r[12]; // 800FF774
  if (true) { c->lr=0x800FF77Cu; dispatch(c,c->ctr); } // 800FF778
L_800FF77C:;
  c->r[11]=c->r[1]+0x00000020u; // 800FF77C
  c->lr=0x800FF784u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF780
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF784
  c->lr=c->r[0]; // 800FF788
  c->r[1]=c->r[1]+0x00000020u; // 800FF78C
  return; // 800FF790
}

// fn_800FF794
void f_800FF794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF794
  c->r[0]=c->lr; // 800FF798
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF79C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF7A0
  c->r[31]=c->r[3]|c->r[3]; // 800FF7A4
  c->lr=0x800FF7ACu; f_8010546C(c); // 800FF7A8
  c->r[0]=0u+0x00000000u; // 800FF7AC
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FF7B0
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF7B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF7B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF7BC
  c->lr=c->r[0]; // 800FF7C0
  c->r[1]=c->r[1]+0x00000010u; // 800FF7C4
  return; // 800FF7C8
}

// fn_800FF7CC
void f_800FF7CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF7CC
  c->r[0]=c->lr; // 800FF7D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF7D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF7D8
  c->r[31]=c->r[3]|c->r[3]; // 800FF7DC
  c->lr=0x800FF7E4u; f_801054C0(c); // 800FF7E0
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FF7E4
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FF7E8
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF7EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF7F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF7F4
  c->lr=c->r[0]; // 800FF7F8
  c->r[1]=c->r[1]+0x00000010u; // 800FF7FC
  return; // 800FF800
}

// fn_800FF804
void f_800FF804(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF804
  cmps(c,0,(int32_t)c->r[4],0); // 800FF808
  if (crb(c,2)) return; // 800FF80C
  c->r[0]=0u+0x00000000u; // 800FF810
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FF814
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF818
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FF81C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF820
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FF824
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF828
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FF82C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF830
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FF834
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF838
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FF83C
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF840
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FF844
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF848
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FF84C
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FF850
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FF854
  return; // 800FF858
}

// fn_800FF85C
void f_800FF85C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF85C
  c->r[0]=c->lr; // 800FF860
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF864
  c->r[11]=c->r[1]+0x00000020u; // 800FF868
  c->lr=0x800FF870u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF86C
  c->r[27]=c->r[3]|c->r[3]; // 800FF870
  c->r[29]=c->r[4]|c->r[4]; // 800FF874
  c->r[28]=c->r[5]|c->r[5]; // 800FF878
  c->r[4]=c->r[28]|c->r[28]; // 800FF87C
  c->lr=0x800FF884u; f_800FF9A8(c); // 800FF880
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF884
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FF888
  cmpu(c,0,c->r[0],c->r[29]); // 800FF88C
  if (crb(c,2)) { goto L_800FF958; } // 800FF890
  c->r[3]=c->r[27]|c->r[27]; // 800FF894
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF898
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FF89C
  c->ctr=c->r[12]; // 800FF8A0
  if (true) { c->lr=0x800FF8A8u; dispatch(c,c->ctr); } // 800FF8A4
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FF8A8
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FF8AC
  cmps(c,0,(int32_t)c->r[29],0); // 800FF8B0
  if (crb(c,2)) { goto L_800FF944; } // 800FF8B4
  c->r[3]=c->r[29]|c->r[29]; // 800FF8B8
  c->lr=0x800FF8C0u; f_8006E4F4(c); // 800FF8BC
  c->r[30]=c->r[3]|c->r[3]; // 800FF8C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF8C4
  if (crb(c,2)) { goto L_800FF938; } // 800FF8C8
  c->r[4]=0u+0x00000000u; // 800FF8CC
  c->lr=0x800FF8D4u; f_8006E554(c); // 800FF8D0
  c->r[31]=c->r[3]|c->r[3]; // 800FF8D4
  c->lr=0x800FF8DCu; f_800736A4(c); // 800FF8D8
  c->r[29]=c->r[3]|c->r[3]; // 800FF8DC
  c->r[3]=c->r[31]|c->r[31]; // 800FF8E0
  c->lr=0x800FF8E8u; f_80077070(c); // 800FF8E4
  c->r[5]=c->r[3]|c->r[3]; // 800FF8E8
  c->r[3]=c->r[27]|c->r[27]; // 800FF8EC
  c->r[4]=c->r[29]|c->r[29]; // 800FF8F0
  c->lr=0x800FF8F8u; f_801027B0(c); // 800FF8F4
  c->r[3]=c->r[30]|c->r[30]; // 800FF8F8
  c->lr=0x800FF900u; f_8006E54C(c); // 800FF8FC
  cmps(c,0,(int32_t)c->r[3],1); // 800FF900
  if (!crb(c,1)) { goto L_800FF938; } // 800FF904
  c->r[3]=c->r[30]|c->r[30]; // 800FF908
  c->r[4]=0u+0x00000001u; // 800FF90C
  c->lr=0x800FF914u; f_8006E554(c); // 800FF910
  c->r[31]=c->r[3]|c->r[3]; // 800FF914
  c->lr=0x800FF91Cu; f_800736A4(c); // 800FF918
  c->r[30]=c->r[3]|c->r[3]; // 800FF91C
  c->r[3]=c->r[31]|c->r[31]; // 800FF920
  c->lr=0x800FF928u; f_80077070(c); // 800FF924
  c->r[5]=c->r[3]|c->r[3]; // 800FF928
  c->r[3]=c->r[27]|c->r[27]; // 800FF92C
  c->r[4]=c->r[30]|c->r[30]; // 800FF930
  c->lr=0x800FF938u; f_801027FC(c); // 800FF934
L_800FF938:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF938
  c->r[4]=c->r[28]|c->r[28]; // 800FF93C
  c->lr=0x800FF944u; f_800FF9A8(c); // 800FF940
L_800FF944:;
  c->r[3]=c->r[27]|c->r[27]; // 800FF944
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FF948
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FF94C
  c->ctr=c->r[12]; // 800FF950
  if (true) { c->lr=0x800FF958u; dispatch(c,c->ctr); } // 800FF954
L_800FF958:;
  c->r[11]=c->r[1]+0x00000020u; // 800FF958
  c->lr=0x800FF960u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF95C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF960
  c->lr=c->r[0]; // 800FF964
  c->r[1]=c->r[1]+0x00000020u; // 800FF968
  return; // 800FF96C
}

// fn_800FF970
void f_800FF970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF970
  c->r[0]=c->lr; // 800FF974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF97C
  c->r[31]=c->r[3]|c->r[3]; // 800FF980
  c->lr=0x800FF988u; f_8010546C(c); // 800FF984
  c->r[0]=0u+0x00000000u; // 800FF988
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FF98C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF990
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF994
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF998
  c->lr=c->r[0]; // 800FF99C
  c->r[1]=c->r[1]+0x00000010u; // 800FF9A0
  return; // 800FF9A4
}

// fn_800FF9A8
void f_800FF9A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF9A8
  c->r[0]=c->lr; // 800FF9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF9B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF9B4
  c->r[31]=c->r[3]|c->r[3]; // 800FF9B8
  c->lr=0x800FF9C0u; f_801054C0(c); // 800FF9BC
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FF9C0
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FF9C4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FF9C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF9D0
  c->lr=c->r[0]; // 800FF9D4
  c->r[1]=c->r[1]+0x00000010u; // 800FF9D8
  return; // 800FF9DC
}

// fn_800FF9E0
void f_800FF9E0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF9E0
  cmps(c,0,(int32_t)c->r[4],0); // 800FF9E4
  if (crb(c,2)) return; // 800FF9E8
  c->r[0]=0u+0x00000000u; // 800FF9EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FF9F0
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF9F4
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FF9F8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FF9FC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FFA00
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFA04
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FFA08
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFA0C
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FFA10
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFA14
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FFA18
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFA1C
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FFA20
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFA24
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FFA28
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FFA2C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FFA30
  return; // 800FFA34
}

// fn_800FFA38
void f_800FFA38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFA38
  c->r[0]=c->lr; // 800FFA3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFA40
  c->r[11]=c->r[1]+0x00000020u; // 800FFA44
  c->lr=0x800FFA4Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FFA48
  c->r[27]=c->r[3]|c->r[3]; // 800FFA4C
  c->r[29]=c->r[4]|c->r[4]; // 800FFA50
  c->r[28]=c->r[5]|c->r[5]; // 800FFA54
  c->r[4]=c->r[28]|c->r[28]; // 800FFA58
  c->lr=0x800FFA60u; f_800FFB84(c); // 800FFA5C
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FFA60
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FFA64
  cmpu(c,0,c->r[0],c->r[29]); // 800FFA68
  if (crb(c,2)) { goto L_800FFB34; } // 800FFA6C
  c->r[3]=c->r[27]|c->r[27]; // 800FFA70
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FFA74
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FFA78
  c->ctr=c->r[12]; // 800FFA7C
  if (true) { c->lr=0x800FFA84u; dispatch(c,c->ctr); } // 800FFA80
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FFA84
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FFA88
  cmps(c,0,(int32_t)c->r[29],0); // 800FFA8C
  if (crb(c,2)) { goto L_800FFB20; } // 800FFA90
  c->r[3]=c->r[29]|c->r[29]; // 800FFA94
  c->lr=0x800FFA9Cu; f_8006E4F4(c); // 800FFA98
  c->r[30]=c->r[3]|c->r[3]; // 800FFA9C
  cmps(c,0,(int32_t)c->r[3],0); // 800FFAA0
  if (crb(c,2)) { goto L_800FFB14; } // 800FFAA4
  c->r[4]=0u+0x00000000u; // 800FFAA8
  c->lr=0x800FFAB0u; f_8006E554(c); // 800FFAAC
  c->r[31]=c->r[3]|c->r[3]; // 800FFAB0
  c->lr=0x800FFAB8u; f_800736A4(c); // 800FFAB4
  c->r[29]=c->r[3]|c->r[3]; // 800FFAB8
  c->r[3]=c->r[31]|c->r[31]; // 800FFABC
  c->lr=0x800FFAC4u; f_80077070(c); // 800FFAC0
  c->r[5]=c->r[3]|c->r[3]; // 800FFAC4
  c->r[3]=c->r[27]|c->r[27]; // 800FFAC8
  c->r[4]=c->r[29]|c->r[29]; // 800FFACC
  c->lr=0x800FFAD4u; f_8010284C(c); // 800FFAD0
  c->r[3]=c->r[30]|c->r[30]; // 800FFAD4
  c->lr=0x800FFADCu; f_8006E54C(c); // 800FFAD8
  cmps(c,0,(int32_t)c->r[3],1); // 800FFADC
  if (!crb(c,1)) { goto L_800FFB14; } // 800FFAE0
  c->r[3]=c->r[30]|c->r[30]; // 800FFAE4
  c->r[4]=0u+0x00000001u; // 800FFAE8
  c->lr=0x800FFAF0u; f_8006E554(c); // 800FFAEC
  c->r[31]=c->r[3]|c->r[3]; // 800FFAF0
  c->lr=0x800FFAF8u; f_800736A4(c); // 800FFAF4
  c->r[30]=c->r[3]|c->r[3]; // 800FFAF8
  c->r[3]=c->r[31]|c->r[31]; // 800FFAFC
  c->lr=0x800FFB04u; f_80077070(c); // 800FFB00
  c->r[5]=c->r[3]|c->r[3]; // 800FFB04
  c->r[3]=c->r[27]|c->r[27]; // 800FFB08
  c->r[4]=c->r[30]|c->r[30]; // 800FFB0C
  c->lr=0x800FFB14u; f_80102898(c); // 800FFB10
L_800FFB14:;
  c->r[3]=c->r[27]|c->r[27]; // 800FFB14
  c->r[4]=c->r[28]|c->r[28]; // 800FFB18
  c->lr=0x800FFB20u; f_800FFB84(c); // 800FFB1C
L_800FFB20:;
  c->r[3]=c->r[27]|c->r[27]; // 800FFB20
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FFB24
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FFB28
  c->ctr=c->r[12]; // 800FFB2C
  if (true) { c->lr=0x800FFB34u; dispatch(c,c->ctr); } // 800FFB30
L_800FFB34:;
  c->r[11]=c->r[1]+0x00000020u; // 800FFB34
  c->lr=0x800FFB3Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FFB38
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFB3C
  c->lr=c->r[0]; // 800FFB40
  c->r[1]=c->r[1]+0x00000020u; // 800FFB44
  return; // 800FFB48
}

// fn_800FFB4C
void f_800FFB4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFB4C
  c->r[0]=c->lr; // 800FFB50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFB54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFB58
  c->r[31]=c->r[3]|c->r[3]; // 800FFB5C
  c->lr=0x800FFB64u; f_8010546C(c); // 800FFB60
  c->r[0]=0u+0x00000000u; // 800FFB64
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FFB68
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FFB6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFB70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFB74
  c->lr=c->r[0]; // 800FFB78
  c->r[1]=c->r[1]+0x00000010u; // 800FFB7C
  return; // 800FFB80
}

// fn_800FFB84
void f_800FFB84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFB84
  c->r[0]=c->lr; // 800FFB88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFB8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFB90
  c->r[31]=c->r[3]|c->r[3]; // 800FFB94
  c->lr=0x800FFB9Cu; f_801054C0(c); // 800FFB98
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FFB9C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FFBA0
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FFBA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFBA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFBAC
  c->lr=c->r[0]; // 800FFBB0
  c->r[1]=c->r[1]+0x00000010u; // 800FFBB4
  return; // 800FFBB8
}

// fn_800FFBBC
void f_800FFBBC(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBBC
  cmps(c,0,(int32_t)c->r[4],0); // 800FFBC0
  if (crb(c,2)) return; // 800FFBC4
  c->r[0]=0u+0x00000000u; // 800FFBC8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FFBCC
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBD0
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FFBD4
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBD8
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FFBDC
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBE0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FFBE4
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBE8
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FFBEC
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBF0
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FFBF4
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFBF8
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FFBFC
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFC00
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FFC04
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FFC08
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FFC0C
  return; // 800FFC10
}

// fn_800FFC14
void f_800FFC14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC14
  c->r[0]=c->lr; // 800FFC18
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFC1C
  c->r[11]=c->r[1]+0x00000020u; // 800FFC20
  c->lr=0x800FFC28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FFC24
  c->r[27]=c->r[3]|c->r[3]; // 800FFC28
  c->r[29]=c->r[4]|c->r[4]; // 800FFC2C
  c->r[28]=c->r[5]|c->r[5]; // 800FFC30
  c->r[4]=c->r[28]|c->r[28]; // 800FFC34
  c->lr=0x800FFC3Cu; f_800FFD60(c); // 800FFC38
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FFC3C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FFC40
  cmpu(c,0,c->r[0],c->r[29]); // 800FFC44
  if (crb(c,2)) { goto L_800FFD10; } // 800FFC48
  c->r[3]=c->r[27]|c->r[27]; // 800FFC4C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FFC50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FFC54
  c->ctr=c->r[12]; // 800FFC58
  if (true) { c->lr=0x800FFC60u; dispatch(c,c->ctr); } // 800FFC5C
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FFC60
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FFC64
  cmps(c,0,(int32_t)c->r[29],0); // 800FFC68
  if (crb(c,2)) { goto L_800FFCFC; } // 800FFC6C
  c->r[3]=c->r[29]|c->r[29]; // 800FFC70
  c->lr=0x800FFC78u; f_8006E4F4(c); // 800FFC74
  c->r[30]=c->r[3]|c->r[3]; // 800FFC78
  cmps(c,0,(int32_t)c->r[3],0); // 800FFC7C
  if (crb(c,2)) { goto L_800FFCF0; } // 800FFC80
  c->r[4]=0u+0x00000000u; // 800FFC84
  c->lr=0x800FFC8Cu; f_8006E554(c); // 800FFC88
  c->r[31]=c->r[3]|c->r[3]; // 800FFC8C
  c->lr=0x800FFC94u; f_800736A4(c); // 800FFC90
  c->r[29]=c->r[3]|c->r[3]; // 800FFC94
  c->r[3]=c->r[31]|c->r[31]; // 800FFC98
  c->lr=0x800FFCA0u; f_80077070(c); // 800FFC9C
  c->r[5]=c->r[3]|c->r[3]; // 800FFCA0
  c->r[3]=c->r[27]|c->r[27]; // 800FFCA4
  c->r[4]=c->r[29]|c->r[29]; // 800FFCA8
  c->lr=0x800FFCB0u; f_801028E8(c); // 800FFCAC
  c->r[3]=c->r[30]|c->r[30]; // 800FFCB0
  c->lr=0x800FFCB8u; f_8006E54C(c); // 800FFCB4
  cmps(c,0,(int32_t)c->r[3],1); // 800FFCB8
  if (!crb(c,1)) { goto L_800FFCF0; } // 800FFCBC
  c->r[3]=c->r[30]|c->r[30]; // 800FFCC0
  c->r[4]=0u+0x00000001u; // 800FFCC4
  c->lr=0x800FFCCCu; f_8006E554(c); // 800FFCC8
  c->r[31]=c->r[3]|c->r[3]; // 800FFCCC
  c->lr=0x800FFCD4u; f_800736A4(c); // 800FFCD0
  c->r[30]=c->r[3]|c->r[3]; // 800FFCD4
  c->r[3]=c->r[31]|c->r[31]; // 800FFCD8
  c->lr=0x800FFCE0u; f_80077070(c); // 800FFCDC
  c->r[5]=c->r[3]|c->r[3]; // 800FFCE0
  c->r[3]=c->r[27]|c->r[27]; // 800FFCE4
  c->r[4]=c->r[30]|c->r[30]; // 800FFCE8
  c->lr=0x800FFCF0u; f_80102934(c); // 800FFCEC
L_800FFCF0:;
  c->r[3]=c->r[27]|c->r[27]; // 800FFCF0
  c->r[4]=c->r[28]|c->r[28]; // 800FFCF4
  c->lr=0x800FFCFCu; f_800FFD60(c); // 800FFCF8
L_800FFCFC:;
  c->r[3]=c->r[27]|c->r[27]; // 800FFCFC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FFD00
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FFD04
  c->ctr=c->r[12]; // 800FFD08
  if (true) { c->lr=0x800FFD10u; dispatch(c,c->ctr); } // 800FFD0C
L_800FFD10:;
  c->r[11]=c->r[1]+0x00000020u; // 800FFD10
  c->lr=0x800FFD18u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FFD14
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFD18
  c->lr=c->r[0]; // 800FFD1C
  c->r[1]=c->r[1]+0x00000020u; // 800FFD20
  return; // 800FFD24
}

// fn_800FFD28
void f_800FFD28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD28
  c->r[0]=c->lr; // 800FFD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFD34
  c->r[31]=c->r[3]|c->r[3]; // 800FFD38
  c->lr=0x800FFD40u; f_8010546C(c); // 800FFD3C
  c->r[0]=0u+0x00000000u; // 800FFD40
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FFD44
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FFD48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFD4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFD50
  c->lr=c->r[0]; // 800FFD54
  c->r[1]=c->r[1]+0x00000010u; // 800FFD58
  return; // 800FFD5C
}

// fn_800FFD60
void f_800FFD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD60
  c->r[0]=c->lr; // 800FFD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFD6C
  c->r[31]=c->r[3]|c->r[3]; // 800FFD70
  c->lr=0x800FFD78u; f_801054C0(c); // 800FFD74
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FFD78
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FFD7C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FFD80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFD84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFD88
  c->lr=c->r[0]; // 800FFD8C
  c->r[1]=c->r[1]+0x00000010u; // 800FFD90
  return; // 800FFD94
}

// fn_800FFD98
void f_800FFD98(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFD98
  cmps(c,0,(int32_t)c->r[4],0); // 800FFD9C
  if (crb(c,2)) return; // 800FFDA0
  c->r[0]=0u+0x00000000u; // 800FFDA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800FFDA8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDAC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800FFDB0
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDB4
  W32(c->r[4]+0x00000008u,c->r[0]); // 800FFDB8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDBC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800FFDC0
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDC4
  W32(c->r[4]+0x00000010u,c->r[0]); // 800FFDC8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDCC
  W32(c->r[4]+0x00000014u,c->r[0]); // 800FFDD0
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDD4
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FFDD8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFDDC
  W32(c->r[4]+0x00000018u,c->r[0]); // 800FFDE0
  c->r[3]=R32(c->r[3]+0x00000034u); // 800FFDE4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800FFDE8
  return; // 800FFDEC
}

// fn_800FFDF0
void f_800FFDF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFDF0
  c->r[0]=c->lr; // 800FFDF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FFDF8
  c->r[11]=c->r[1]+0x00000020u; // 800FFDFC
  c->lr=0x800FFE04u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FFE00
  c->r[27]=c->r[3]|c->r[3]; // 800FFE04
  c->r[29]=c->r[4]|c->r[4]; // 800FFE08
  c->r[28]=c->r[5]|c->r[5]; // 800FFE0C
  c->r[4]=c->r[28]|c->r[28]; // 800FFE10
  c->lr=0x800FFE18u; f_800FFF3C(c); // 800FFE14
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FFE18
  c->r[0]=R32(c->r[3]+0x00000000u); // 800FFE1C
  cmpu(c,0,c->r[0],c->r[29]); // 800FFE20
  if (crb(c,2)) { goto L_800FFEEC; } // 800FFE24
  c->r[3]=c->r[27]|c->r[27]; // 800FFE28
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FFE2C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800FFE30
  c->ctr=c->r[12]; // 800FFE34
  if (true) { c->lr=0x800FFE3Cu; dispatch(c,c->ctr); } // 800FFE38
  c->r[3]=R32(c->r[27]+0x00000034u); // 800FFE3C
  W32(c->r[3]+0x00000000u,c->r[29]); // 800FFE40
  cmps(c,0,(int32_t)c->r[29],0); // 800FFE44
  if (crb(c,2)) { goto L_800FFED8; } // 800FFE48
  c->r[3]=c->r[29]|c->r[29]; // 800FFE4C
  c->lr=0x800FFE54u; f_8006E4F4(c); // 800FFE50
  c->r[30]=c->r[3]|c->r[3]; // 800FFE54
  cmps(c,0,(int32_t)c->r[3],0); // 800FFE58
  if (crb(c,2)) { goto L_800FFECC; } // 800FFE5C
  c->r[4]=0u+0x00000000u; // 800FFE60
  c->lr=0x800FFE68u; f_8006E554(c); // 800FFE64
  c->r[31]=c->r[3]|c->r[3]; // 800FFE68
  c->lr=0x800FFE70u; f_800736A4(c); // 800FFE6C
  c->r[29]=c->r[3]|c->r[3]; // 800FFE70
  c->r[3]=c->r[31]|c->r[31]; // 800FFE74
  c->lr=0x800FFE7Cu; f_80077070(c); // 800FFE78
  c->r[5]=c->r[3]|c->r[3]; // 800FFE7C
  c->r[3]=c->r[27]|c->r[27]; // 800FFE80
  c->r[4]=c->r[29]|c->r[29]; // 800FFE84
  c->lr=0x800FFE8Cu; f_80102984(c); // 800FFE88
  c->r[3]=c->r[30]|c->r[30]; // 800FFE8C
  c->lr=0x800FFE94u; f_8006E54C(c); // 800FFE90
  cmps(c,0,(int32_t)c->r[3],1); // 800FFE94
  if (!crb(c,1)) { goto L_800FFECC; } // 800FFE98
  c->r[3]=c->r[30]|c->r[30]; // 800FFE9C
  c->r[4]=0u+0x00000001u; // 800FFEA0
  c->lr=0x800FFEA8u; f_8006E554(c); // 800FFEA4
  c->r[31]=c->r[3]|c->r[3]; // 800FFEA8
  c->lr=0x800FFEB0u; f_800736A4(c); // 800FFEAC
  c->r[30]=c->r[3]|c->r[3]; // 800FFEB0
  c->r[3]=c->r[31]|c->r[31]; // 800FFEB4
  c->lr=0x800FFEBCu; f_80077070(c); // 800FFEB8
  c->r[5]=c->r[3]|c->r[3]; // 800FFEBC
  c->r[3]=c->r[27]|c->r[27]; // 800FFEC0
  c->r[4]=c->r[30]|c->r[30]; // 800FFEC4
  c->lr=0x800FFECCu; f_801029D0(c); // 800FFEC8
L_800FFECC:;
  c->r[3]=c->r[27]|c->r[27]; // 800FFECC
  c->r[4]=c->r[28]|c->r[28]; // 800FFED0
  c->lr=0x800FFED8u; f_800FFF3C(c); // 800FFED4
L_800FFED8:;
  c->r[3]=c->r[27]|c->r[27]; // 800FFED8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800FFEDC
  c->r[12]=R32(c->r[12]+0x00000020u); // 800FFEE0
  c->ctr=c->r[12]; // 800FFEE4
  if (true) { c->lr=0x800FFEECu; dispatch(c,c->ctr); } // 800FFEE8
L_800FFEEC:;
  c->r[11]=c->r[1]+0x00000020u; // 800FFEEC
  c->lr=0x800FFEF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FFEF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFEF4
  c->lr=c->r[0]; // 800FFEF8
  c->r[1]=c->r[1]+0x00000020u; // 800FFEFC
  return; // 800FFF00
}

// fn_800FFF04
void f_800FFF04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFF04
  c->r[0]=c->lr; // 800FFF08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFF0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFF10
  c->r[31]=c->r[3]|c->r[3]; // 800FFF14
  c->lr=0x800FFF1Cu; f_8010546C(c); // 800FFF18
  c->r[0]=0u+0x00000000u; // 800FFF1C
  W32(c->r[31]+0x00000034u,c->r[0]); // 800FFF20
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FFF24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFF28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFF2C
  c->lr=c->r[0]; // 800FFF30
  c->r[1]=c->r[1]+0x00000010u; // 800FFF34
  return; // 800FFF38
}

// fn_800FFF3C
void f_800FFF3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFF3C
  c->r[0]=c->lr; // 800FFF40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFF44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFF48
  c->r[31]=c->r[3]|c->r[3]; // 800FFF4C
  c->lr=0x800FFF54u; f_801054C0(c); // 800FFF50
  W32(c->r[31]+0x00000034u,c->r[3]); // 800FFF54
  c->r[0]=R32(c->r[3]+0x00000020u); // 800FFF58
  W32(c->r[31]+0x00000038u,c->r[0]); // 800FFF5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFF60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFF64
  c->lr=c->r[0]; // 800FFF68
  c->r[1]=c->r[1]+0x00000010u; // 800FFF6C
  return; // 800FFF70
}

// fn_800FFF74
void f_800FFF74(Ctx* __restrict c) {
  return; // 800FFF74
}

// fn_800FFF78
void f_800FFF78(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 800FFF78
  W32(c->r[5]+0x00000004u,c->r[4]); // 800FFF7C
  c->r[0]=c->r[4]+0x00000020u; // 800FFF80
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFF84
  W32(c->r[4]+0x00000020u,c->r[0]); // 800FFF88
  c->r[5]=R32(c->r[3]+0x00000034u); // 800FFF8C
  c->r[4]=R32(c->r[5]+0x00000004u); // 800FFF90
  c->r[0]=R32(c->r[4]+0x00000018u); // 800FFF94
  W32(c->r[5]+0x00000014u,c->r[0]); // 800FFF98
  c->r[5]=R32(c->r[3]+0x00000034u); // 800FFF9C
  c->r[4]=R32(c->r[5]+0x00000004u); // 800FFFA0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800FFFA4
  W32(c->r[5]+0x00000008u,c->r[0]); // 800FFFA8
  c->r[4]=R32(c->r[3]+0x00000034u); // 800FFFAC
  c->r[3]=R32(c->r[4]+0x00000018u); // 800FFFB0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FFFB4
  c->r[0]=c->r[3]+c->r[0]; // 800FFFB8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800FFFBC
  return; // 800FFFC0
}

// fn_800FFFC4
void f_800FFFC4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 800FFFC4
  c->r[5]=R32(c->r[3]+0x00000034u); // 800FFFC8
  W32(c->r[5]+0x00000010u,c->r[0]); // 800FFFCC
  c->r[0]=c->r[4]+0x00000010u; // 800FFFD0
  c->r[5]=R32(c->r[3]+0x00000034u); // 800FFFD4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800FFFD8
  c->r[7]=0u+0x00000000u; // 800FFFDC
  c->r[6]=0u+0x00000000u; // 800FFFE0
  goto L_80100000; // 800FFFE4
L_800FFFE8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 800FFFE8
  c->r[0]=R32(c->r[5]+c->r[6]); // 800FFFEC
  c->r[0]=c->r[4]+c->r[0]; // 800FFFF0
  W32(c->r[5]+c->r[6],c->r[0]); // 800FFFF4
  c->r[6]=c->r[6]+0x00000004u; // 800FFFF8
  c->r[7]=c->r[7]+0x00000001u; // 800FFFFC
L_80100000:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100000
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100004
  cmpu(c,0,c->r[7],c->r[0]); // 80100008
  if (crb(c,0)) { IRQCHK(c); goto L_800FFFE8; } // 8010000C
  return; // 80100010
}

// fn_80100014
void f_80100014(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100014
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100018
  c->r[0]=c->r[4]+0x00000020u; // 8010001C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100020
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100024
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100028
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010002C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100030
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100034
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100038
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010003C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100040
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100044
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100048
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010004C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100050
  c->r[0]=c->r[3]+c->r[0]; // 80100054
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100058
  return; // 8010005C
}

// fn_80100060
void f_80100060(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100060
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100064
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100068
  c->r[0]=c->r[4]+0x00000010u; // 8010006C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100070
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100074
  c->r[7]=0u+0x00000000u; // 80100078
  c->r[6]=0u+0x00000000u; // 8010007C
  goto L_8010009C; // 80100080
L_80100084:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100084
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100088
  c->r[0]=c->r[4]+c->r[0]; // 8010008C
  W32(c->r[5]+c->r[6],c->r[0]); // 80100090
  c->r[6]=c->r[6]+0x00000004u; // 80100094
  c->r[7]=c->r[7]+0x00000001u; // 80100098
L_8010009C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010009C
  c->r[0]=R32(c->r[5]+0x00000010u); // 801000A0
  cmpu(c,0,c->r[7],c->r[0]); // 801000A4
  if (crb(c,0)) { IRQCHK(c); goto L_80100084; } // 801000A8
  return; // 801000AC
}

// fn_801000B0
void f_801000B0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801000B0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801000B4
  c->r[0]=c->r[4]+0x00000020u; // 801000B8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801000BC
  W32(c->r[4]+0x00000020u,c->r[0]); // 801000C0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801000C4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801000C8
  c->r[0]=R32(c->r[4]+0x00000018u); // 801000CC
  W32(c->r[5]+0x00000014u,c->r[0]); // 801000D0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801000D4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801000D8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801000DC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801000E0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801000E4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801000E8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801000EC
  c->r[0]=c->r[3]+c->r[0]; // 801000F0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801000F4
  return; // 801000F8
}

// fn_801000FC
void f_801000FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801000FC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100100
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100104
  c->r[0]=c->r[4]+0x00000010u; // 80100108
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010010C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100110
  c->r[7]=0u+0x00000000u; // 80100114
  c->r[6]=0u+0x00000000u; // 80100118
  goto L_80100138; // 8010011C
L_80100120:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100120
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100124
  c->r[0]=c->r[4]+c->r[0]; // 80100128
  W32(c->r[5]+c->r[6],c->r[0]); // 8010012C
  c->r[6]=c->r[6]+0x00000004u; // 80100130
  c->r[7]=c->r[7]+0x00000001u; // 80100134
L_80100138:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100138
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010013C
  cmpu(c,0,c->r[7],c->r[0]); // 80100140
  if (crb(c,0)) { IRQCHK(c); goto L_80100120; } // 80100144
  return; // 80100148
}

// fn_8010014C
void f_8010014C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010014C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100150
  c->r[0]=c->r[4]+0x00000020u; // 80100154
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100158
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010015C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100160
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100164
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100168
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010016C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100170
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100174
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100178
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010017C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100180
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100184
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100188
  c->r[0]=c->r[3]+c->r[0]; // 8010018C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100190
  return; // 80100194
}

// fn_80100198
void f_80100198(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100198
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010019C
  W32(c->r[5]+0x00000010u,c->r[0]); // 801001A0
  c->r[0]=c->r[4]+0x00000010u; // 801001A4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801001A8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801001AC
  c->r[7]=0u+0x00000000u; // 801001B0
  c->r[6]=0u+0x00000000u; // 801001B4
  goto L_801001D4; // 801001B8
L_801001BC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801001BC
  c->r[0]=R32(c->r[5]+c->r[6]); // 801001C0
  c->r[0]=c->r[4]+c->r[0]; // 801001C4
  W32(c->r[5]+c->r[6],c->r[0]); // 801001C8
  c->r[6]=c->r[6]+0x00000004u; // 801001CC
  c->r[7]=c->r[7]+0x00000001u; // 801001D0
L_801001D4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801001D4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801001D8
  cmpu(c,0,c->r[7],c->r[0]); // 801001DC
  if (crb(c,0)) { IRQCHK(c); goto L_801001BC; } // 801001E0
  return; // 801001E4
}

// fn_801001E8
void f_801001E8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801001E8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801001EC
  c->r[0]=c->r[4]+0x00000020u; // 801001F0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801001F4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801001F8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801001FC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100200
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100204
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100208
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010020C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100210
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100214
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100218
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010021C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100220
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100224
  c->r[0]=c->r[3]+c->r[0]; // 80100228
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010022C
  return; // 80100230
}

// fn_80100234
void f_80100234(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100234
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100238
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010023C
  c->r[0]=c->r[4]+0x00000010u; // 80100240
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100244
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100248
  c->r[7]=0u+0x00000000u; // 8010024C
  c->r[6]=0u+0x00000000u; // 80100250
  goto L_80100270; // 80100254
L_80100258:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100258
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010025C
  c->r[0]=c->r[4]+c->r[0]; // 80100260
  W32(c->r[5]+c->r[6],c->r[0]); // 80100264
  c->r[6]=c->r[6]+0x00000004u; // 80100268
  c->r[7]=c->r[7]+0x00000001u; // 8010026C
L_80100270:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100270
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100274
  cmpu(c,0,c->r[7],c->r[0]); // 80100278
  if (crb(c,0)) { IRQCHK(c); goto L_80100258; } // 8010027C
  return; // 80100280
}

// fn_80100284
void f_80100284(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100284
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100288
  c->r[0]=c->r[4]+0x00000020u; // 8010028C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100290
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100294
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100298
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010029C
  c->r[0]=R32(c->r[4]+0x00000018u); // 801002A0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801002A4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801002A8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801002AC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801002B0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801002B4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801002B8
  c->r[3]=R32(c->r[4]+0x00000018u); // 801002BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801002C0
  c->r[0]=c->r[3]+c->r[0]; // 801002C4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801002C8
  return; // 801002CC
}

// fn_801002D0
void f_801002D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801002D0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801002D4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801002D8
  c->r[0]=c->r[4]+0x00000010u; // 801002DC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801002E0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801002E4
  c->r[7]=0u+0x00000000u; // 801002E8
  c->r[6]=0u+0x00000000u; // 801002EC
  goto L_8010030C; // 801002F0
L_801002F4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801002F4
  c->r[0]=R32(c->r[5]+c->r[6]); // 801002F8
  c->r[0]=c->r[4]+c->r[0]; // 801002FC
  W32(c->r[5]+c->r[6],c->r[0]); // 80100300
  c->r[6]=c->r[6]+0x00000004u; // 80100304
  c->r[7]=c->r[7]+0x00000001u; // 80100308
L_8010030C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010030C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100310
  cmpu(c,0,c->r[7],c->r[0]); // 80100314
  if (crb(c,0)) { IRQCHK(c); goto L_801002F4; } // 80100318
  return; // 8010031C
}

// fn_80100320
void f_80100320(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100320
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100324
  c->r[0]=c->r[4]+0x00000020u; // 80100328
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010032C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100330
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100334
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100338
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010033C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100340
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100344
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100348
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8010034C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100350
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100354
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100358
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010035C
  c->r[0]=c->r[3]+c->r[0]; // 80100360
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100364
  return; // 80100368
}

// fn_8010036C
void f_8010036C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010036C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100370
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100374
  c->r[0]=c->r[4]+0x00000010u; // 80100378
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010037C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100380
  c->r[7]=0u+0x00000000u; // 80100384
  c->r[6]=0u+0x00000000u; // 80100388
  goto L_801003A8; // 8010038C
L_80100390:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100390
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100394
  c->r[0]=c->r[4]+c->r[0]; // 80100398
  W32(c->r[5]+c->r[6],c->r[0]); // 8010039C
  c->r[6]=c->r[6]+0x00000004u; // 801003A0
  c->r[7]=c->r[7]+0x00000001u; // 801003A4
L_801003A8:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801003A8
  c->r[0]=R32(c->r[5]+0x00000010u); // 801003AC
  cmpu(c,0,c->r[7],c->r[0]); // 801003B0
  if (crb(c,0)) { IRQCHK(c); goto L_80100390; } // 801003B4
  return; // 801003B8
}

// fn_801003BC
void f_801003BC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801003BC
  W32(c->r[5]+0x00000004u,c->r[4]); // 801003C0
  c->r[0]=c->r[4]+0x00000020u; // 801003C4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801003C8
  W32(c->r[4]+0x00000020u,c->r[0]); // 801003CC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801003D0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801003D4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801003D8
  W32(c->r[5]+0x00000014u,c->r[0]); // 801003DC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801003E0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801003E4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801003E8
  W32(c->r[5]+0x00000008u,c->r[0]); // 801003EC
  c->r[4]=R32(c->r[3]+0x00000034u); // 801003F0
  c->r[3]=R32(c->r[4]+0x00000018u); // 801003F4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801003F8
  c->r[0]=c->r[3]+c->r[0]; // 801003FC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100400
  return; // 80100404
}

// fn_80100408
void f_80100408(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100408
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010040C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100410
  c->r[0]=c->r[4]+0x00000010u; // 80100414
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100418
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010041C
  c->r[7]=0u+0x00000000u; // 80100420
  c->r[6]=0u+0x00000000u; // 80100424
  goto L_80100444; // 80100428
L_8010042C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010042C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100430
  c->r[0]=c->r[4]+c->r[0]; // 80100434
  W32(c->r[5]+c->r[6],c->r[0]); // 80100438
  c->r[6]=c->r[6]+0x00000004u; // 8010043C
  c->r[7]=c->r[7]+0x00000001u; // 80100440
L_80100444:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100444
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100448
  cmpu(c,0,c->r[7],c->r[0]); // 8010044C
  if (crb(c,0)) { IRQCHK(c); goto L_8010042C; } // 80100450
  return; // 80100454
}

// fn_80100458
void f_80100458(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100458
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010045C
  c->r[0]=c->r[4]+0x00000020u; // 80100460
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100464
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100468
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010046C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100470
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100474
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100478
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010047C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100480
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100484
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100488
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010048C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100490
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100494
  c->r[0]=c->r[3]+c->r[0]; // 80100498
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010049C
  return; // 801004A0
}

// fn_801004A4
void f_801004A4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801004A4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801004A8
  W32(c->r[5]+0x00000010u,c->r[0]); // 801004AC
  c->r[0]=c->r[4]+0x00000010u; // 801004B0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801004B4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801004B8
  c->r[7]=0u+0x00000000u; // 801004BC
  c->r[6]=0u+0x00000000u; // 801004C0
  goto L_801004E0; // 801004C4
L_801004C8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801004C8
  c->r[0]=R32(c->r[5]+c->r[6]); // 801004CC
  c->r[0]=c->r[4]+c->r[0]; // 801004D0
  W32(c->r[5]+c->r[6],c->r[0]); // 801004D4
  c->r[6]=c->r[6]+0x00000004u; // 801004D8
  c->r[7]=c->r[7]+0x00000001u; // 801004DC
L_801004E0:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801004E0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801004E4
  cmpu(c,0,c->r[7],c->r[0]); // 801004E8
  if (crb(c,0)) { IRQCHK(c); goto L_801004C8; } // 801004EC
  return; // 801004F0
}

// fn_801004F4
void f_801004F4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801004F4
  W32(c->r[5]+0x00000004u,c->r[4]); // 801004F8
  c->r[0]=c->r[4]+0x00000020u; // 801004FC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100500
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100504
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100508
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010050C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100510
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100514
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100518
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010051C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100520
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100524
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100528
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010052C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100530
  c->r[0]=c->r[3]+c->r[0]; // 80100534
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100538
  return; // 8010053C
}

// fn_80100540
void f_80100540(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100540
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100544
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100548
  c->r[0]=c->r[4]+0x00000010u; // 8010054C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100550
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100554
  c->r[7]=0u+0x00000000u; // 80100558
  c->r[6]=0u+0x00000000u; // 8010055C
  goto L_8010057C; // 80100560
L_80100564:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100564
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100568
  c->r[0]=c->r[4]+c->r[0]; // 8010056C
  W32(c->r[5]+c->r[6],c->r[0]); // 80100570
  c->r[6]=c->r[6]+0x00000004u; // 80100574
  c->r[7]=c->r[7]+0x00000001u; // 80100578
L_8010057C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010057C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100580
  cmpu(c,0,c->r[7],c->r[0]); // 80100584
  if (crb(c,0)) { IRQCHK(c); goto L_80100564; } // 80100588
  return; // 8010058C
}

// fn_80100590
void f_80100590(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100590
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100594
  c->r[0]=c->r[4]+0x00000020u; // 80100598
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010059C
  W32(c->r[4]+0x00000020u,c->r[0]); // 801005A0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801005A4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801005A8
  c->r[0]=R32(c->r[4]+0x00000018u); // 801005AC
  W32(c->r[5]+0x00000014u,c->r[0]); // 801005B0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801005B4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801005B8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801005BC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801005C0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801005C4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801005C8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801005CC
  c->r[0]=c->r[3]+c->r[0]; // 801005D0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801005D4
  return; // 801005D8
}

// fn_801005DC
void f_801005DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801005DC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801005E0
  W32(c->r[5]+0x00000010u,c->r[0]); // 801005E4
  c->r[0]=c->r[4]+0x00000010u; // 801005E8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801005EC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801005F0
  c->r[7]=0u+0x00000000u; // 801005F4
  c->r[6]=0u+0x00000000u; // 801005F8
  goto L_80100618; // 801005FC
L_80100600:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100600
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100604
  c->r[0]=c->r[4]+c->r[0]; // 80100608
  W32(c->r[5]+c->r[6],c->r[0]); // 8010060C
  c->r[6]=c->r[6]+0x00000004u; // 80100610
  c->r[7]=c->r[7]+0x00000001u; // 80100614
L_80100618:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100618
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010061C
  cmpu(c,0,c->r[7],c->r[0]); // 80100620
  if (crb(c,0)) { IRQCHK(c); goto L_80100600; } // 80100624
  return; // 80100628
}

// fn_8010062C
void f_8010062C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010062C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100630
  c->r[0]=c->r[4]+0x00000020u; // 80100634
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100638
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010063C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100640
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100644
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100648
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010064C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100650
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100654
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100658
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010065C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100660
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100664
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100668
  c->r[0]=c->r[3]+c->r[0]; // 8010066C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100670
  return; // 80100674
}

// fn_80100678
void f_80100678(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100678
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010067C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100680
  c->r[0]=c->r[4]+0x00000010u; // 80100684
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100688
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010068C
  c->r[7]=0u+0x00000000u; // 80100690
  c->r[6]=0u+0x00000000u; // 80100694
  goto L_801006B4; // 80100698
L_8010069C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010069C
  c->r[0]=R32(c->r[5]+c->r[6]); // 801006A0
  c->r[0]=c->r[4]+c->r[0]; // 801006A4
  W32(c->r[5]+c->r[6],c->r[0]); // 801006A8
  c->r[6]=c->r[6]+0x00000004u; // 801006AC
  c->r[7]=c->r[7]+0x00000001u; // 801006B0
L_801006B4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801006B4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801006B8
  cmpu(c,0,c->r[7],c->r[0]); // 801006BC
  if (crb(c,0)) { IRQCHK(c); goto L_8010069C; } // 801006C0
  return; // 801006C4
}

// fn_801006C8
void f_801006C8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801006C8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801006CC
  c->r[0]=c->r[4]+0x00000020u; // 801006D0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801006D4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801006D8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801006DC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801006E0
  c->r[0]=R32(c->r[4]+0x00000018u); // 801006E4
  W32(c->r[5]+0x00000014u,c->r[0]); // 801006E8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801006EC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801006F0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801006F4
  W32(c->r[5]+0x00000008u,c->r[0]); // 801006F8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801006FC
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100700
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100704
  c->r[0]=c->r[3]+c->r[0]; // 80100708
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010070C
  return; // 80100710
}

// fn_80100714
void f_80100714(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100714
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100718
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010071C
  c->r[0]=c->r[4]+0x00000010u; // 80100720
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100724
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100728
  c->r[7]=0u+0x00000000u; // 8010072C
  c->r[6]=0u+0x00000000u; // 80100730
  goto L_80100750; // 80100734
L_80100738:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100738
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010073C
  c->r[0]=c->r[4]+c->r[0]; // 80100740
  W32(c->r[5]+c->r[6],c->r[0]); // 80100744
  c->r[6]=c->r[6]+0x00000004u; // 80100748
  c->r[7]=c->r[7]+0x00000001u; // 8010074C
L_80100750:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100750
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100754
  cmpu(c,0,c->r[7],c->r[0]); // 80100758
  if (crb(c,0)) { IRQCHK(c); goto L_80100738; } // 8010075C
  return; // 80100760
}

// fn_80100764
void f_80100764(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100764
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100768
  c->r[0]=c->r[4]+0x00000020u; // 8010076C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100770
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100774
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100778
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010077C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100780
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100784
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100788
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010078C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100790
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100794
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100798
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010079C
  c->r[0]=R32(c->r[4]+0x00000008u); // 801007A0
  c->r[0]=c->r[3]+c->r[0]; // 801007A4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801007A8
  return; // 801007AC
}

// fn_801007B0
void f_801007B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801007B0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801007B4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801007B8
  c->r[0]=c->r[4]+0x00000010u; // 801007BC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801007C0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801007C4
  c->r[7]=0u+0x00000000u; // 801007C8
  c->r[6]=0u+0x00000000u; // 801007CC
  goto L_801007EC; // 801007D0
L_801007D4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801007D4
  c->r[0]=R32(c->r[5]+c->r[6]); // 801007D8
  c->r[0]=c->r[4]+c->r[0]; // 801007DC
  W32(c->r[5]+c->r[6],c->r[0]); // 801007E0
  c->r[6]=c->r[6]+0x00000004u; // 801007E4
  c->r[7]=c->r[7]+0x00000001u; // 801007E8
L_801007EC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801007EC
  c->r[0]=R32(c->r[5]+0x00000010u); // 801007F0
  cmpu(c,0,c->r[7],c->r[0]); // 801007F4
  if (crb(c,0)) { IRQCHK(c); goto L_801007D4; } // 801007F8
  return; // 801007FC
}

// fn_80100800
void f_80100800(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100800
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100804
  c->r[0]=c->r[4]+0x00000020u; // 80100808
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010080C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100810
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100814
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100818
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010081C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100820
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100824
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100828
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8010082C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100830
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100834
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100838
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010083C
  c->r[0]=c->r[3]+c->r[0]; // 80100840
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100844
  return; // 80100848
}

// fn_8010084C
void f_8010084C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010084C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100850
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100854
  c->r[0]=c->r[4]+0x00000010u; // 80100858
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010085C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100860
  c->r[7]=0u+0x00000000u; // 80100864
  c->r[6]=0u+0x00000000u; // 80100868
  goto L_80100888; // 8010086C
L_80100870:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100870
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100874
  c->r[0]=c->r[4]+c->r[0]; // 80100878
  W32(c->r[5]+c->r[6],c->r[0]); // 8010087C
  c->r[6]=c->r[6]+0x00000004u; // 80100880
  c->r[7]=c->r[7]+0x00000001u; // 80100884
L_80100888:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100888
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010088C
  cmpu(c,0,c->r[7],c->r[0]); // 80100890
  if (crb(c,0)) { IRQCHK(c); goto L_80100870; } // 80100894
  return; // 80100898
}

// fn_8010089C
void f_8010089C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010089C
  W32(c->r[5]+0x00000004u,c->r[4]); // 801008A0
  c->r[0]=c->r[4]+0x00000020u; // 801008A4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801008A8
  W32(c->r[4]+0x00000020u,c->r[0]); // 801008AC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801008B0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801008B4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801008B8
  W32(c->r[5]+0x00000014u,c->r[0]); // 801008BC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801008C0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801008C4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801008C8
  W32(c->r[5]+0x00000008u,c->r[0]); // 801008CC
  c->r[4]=R32(c->r[3]+0x00000034u); // 801008D0
  c->r[3]=R32(c->r[4]+0x00000018u); // 801008D4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801008D8
  c->r[0]=c->r[3]+c->r[0]; // 801008DC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801008E0
  return; // 801008E4
}

// fn_801008E8
void f_801008E8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801008E8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801008EC
  W32(c->r[5]+0x00000010u,c->r[0]); // 801008F0
  c->r[0]=c->r[4]+0x00000010u; // 801008F4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801008F8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801008FC
  c->r[7]=0u+0x00000000u; // 80100900
  c->r[6]=0u+0x00000000u; // 80100904
  goto L_80100924; // 80100908
L_8010090C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010090C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100910
  c->r[0]=c->r[4]+c->r[0]; // 80100914
  W32(c->r[5]+c->r[6],c->r[0]); // 80100918
  c->r[6]=c->r[6]+0x00000004u; // 8010091C
  c->r[7]=c->r[7]+0x00000001u; // 80100920
L_80100924:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100924
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100928
  cmpu(c,0,c->r[7],c->r[0]); // 8010092C
  if (crb(c,0)) { IRQCHK(c); goto L_8010090C; } // 80100930
  return; // 80100934
}

// fn_80100938
void f_80100938(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100938
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010093C
  c->r[0]=c->r[4]+0x00000020u; // 80100940
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100944
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100948
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010094C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100950
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100954
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100958
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010095C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100960
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100964
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100968
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010096C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100970
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100974
  c->r[0]=c->r[3]+c->r[0]; // 80100978
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010097C
  return; // 80100980
}

// fn_80100984
void f_80100984(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100984
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100988
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010098C
  c->r[0]=c->r[4]+0x00000010u; // 80100990
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100994
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100998
  c->r[7]=0u+0x00000000u; // 8010099C
  c->r[6]=0u+0x00000000u; // 801009A0
  goto L_801009C0; // 801009A4
L_801009A8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801009A8
  c->r[0]=R32(c->r[5]+c->r[6]); // 801009AC
  c->r[0]=c->r[4]+c->r[0]; // 801009B0
  W32(c->r[5]+c->r[6],c->r[0]); // 801009B4
  c->r[6]=c->r[6]+0x00000004u; // 801009B8
  c->r[7]=c->r[7]+0x00000001u; // 801009BC
L_801009C0:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801009C0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801009C4
  cmpu(c,0,c->r[7],c->r[0]); // 801009C8
  if (crb(c,0)) { IRQCHK(c); goto L_801009A8; } // 801009CC
  return; // 801009D0
}

// fn_801009D4
void f_801009D4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801009D4
  W32(c->r[5]+0x00000004u,c->r[4]); // 801009D8
  c->r[0]=c->r[4]+0x00000020u; // 801009DC
  c->r[4]=R32(c->r[3]+0x00000034u); // 801009E0
  W32(c->r[4]+0x00000020u,c->r[0]); // 801009E4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801009E8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801009EC
  c->r[0]=R32(c->r[4]+0x00000018u); // 801009F0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801009F4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801009F8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801009FC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100A00
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100A04
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100A08
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100A0C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100A10
  c->r[0]=c->r[3]+c->r[0]; // 80100A14
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100A18
  return; // 80100A1C
}

// fn_80100A20
void f_80100A20(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100A20
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100A24
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100A28
  c->r[0]=c->r[4]+0x00000010u; // 80100A2C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100A30
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100A34
  c->r[7]=0u+0x00000000u; // 80100A38
  c->r[6]=0u+0x00000000u; // 80100A3C
  goto L_80100A5C; // 80100A40
L_80100A44:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100A44
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100A48
  c->r[0]=c->r[4]+c->r[0]; // 80100A4C
  W32(c->r[5]+c->r[6],c->r[0]); // 80100A50
  c->r[6]=c->r[6]+0x00000004u; // 80100A54
  c->r[7]=c->r[7]+0x00000001u; // 80100A58
L_80100A5C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100A5C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100A60
  cmpu(c,0,c->r[7],c->r[0]); // 80100A64
  if (crb(c,0)) { IRQCHK(c); goto L_80100A44; } // 80100A68
  return; // 80100A6C
}

// fn_80100A70
void f_80100A70(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100A70
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100A74
  c->r[0]=c->r[4]+0x00000020u; // 80100A78
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100A7C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100A80
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100A84
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100A88
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100A8C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100A90
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100A94
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100A98
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100A9C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100AA0
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100AA4
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100AA8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100AAC
  c->r[0]=c->r[3]+c->r[0]; // 80100AB0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100AB4
  return; // 80100AB8
}

// fn_80100ABC
void f_80100ABC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100ABC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100AC0
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100AC4
  c->r[0]=c->r[4]+0x00000010u; // 80100AC8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100ACC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100AD0
  c->r[7]=0u+0x00000000u; // 80100AD4
  c->r[6]=0u+0x00000000u; // 80100AD8
  goto L_80100AF8; // 80100ADC
L_80100AE0:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100AE0
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100AE4
  c->r[0]=c->r[4]+c->r[0]; // 80100AE8
  W32(c->r[5]+c->r[6],c->r[0]); // 80100AEC
  c->r[6]=c->r[6]+0x00000004u; // 80100AF0
  c->r[7]=c->r[7]+0x00000001u; // 80100AF4
L_80100AF8:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100AF8
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100AFC
  cmpu(c,0,c->r[7],c->r[0]); // 80100B00
  if (crb(c,0)) { IRQCHK(c); goto L_80100AE0; } // 80100B04
  return; // 80100B08
}

// fn_80100B0C
void f_80100B0C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100B0C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100B10
  c->r[0]=c->r[4]+0x00000020u; // 80100B14
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100B18
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100B1C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100B20
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100B24
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100B28
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100B2C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100B30
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100B34
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100B38
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100B3C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100B40
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100B44
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100B48
  c->r[0]=c->r[3]+c->r[0]; // 80100B4C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100B50
  return; // 80100B54
}

// fn_80100B58
void f_80100B58(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100B58
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100B5C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100B60
  c->r[0]=c->r[4]+0x00000010u; // 80100B64
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100B68
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100B6C
  c->r[7]=0u+0x00000000u; // 80100B70
  c->r[6]=0u+0x00000000u; // 80100B74
  goto L_80100B94; // 80100B78
L_80100B7C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100B7C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100B80
  c->r[0]=c->r[4]+c->r[0]; // 80100B84
  W32(c->r[5]+c->r[6],c->r[0]); // 80100B88
  c->r[6]=c->r[6]+0x00000004u; // 80100B8C
  c->r[7]=c->r[7]+0x00000001u; // 80100B90
L_80100B94:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100B94
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100B98
  cmpu(c,0,c->r[7],c->r[0]); // 80100B9C
  if (crb(c,0)) { IRQCHK(c); goto L_80100B7C; } // 80100BA0
  return; // 80100BA4
}

// fn_80100BA8
void f_80100BA8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100BA8
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100BAC
  c->r[0]=c->r[4]+0x00000020u; // 80100BB0
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100BB4
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100BB8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100BBC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100BC0
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100BC4
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100BC8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100BCC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100BD0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100BD4
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100BD8
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100BDC
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100BE0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100BE4
  c->r[0]=c->r[3]+c->r[0]; // 80100BE8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100BEC
  return; // 80100BF0
}

// fn_80100BF4
void f_80100BF4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100BF4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100BF8
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100BFC
  c->r[0]=c->r[4]+0x00000010u; // 80100C00
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100C04
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100C08
  c->r[7]=0u+0x00000000u; // 80100C0C
  c->r[6]=0u+0x00000000u; // 80100C10
  goto L_80100C30; // 80100C14
L_80100C18:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100C18
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100C1C
  c->r[0]=c->r[4]+c->r[0]; // 80100C20
  W32(c->r[5]+c->r[6],c->r[0]); // 80100C24
  c->r[6]=c->r[6]+0x00000004u; // 80100C28
  c->r[7]=c->r[7]+0x00000001u; // 80100C2C
L_80100C30:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100C30
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100C34
  cmpu(c,0,c->r[7],c->r[0]); // 80100C38
  if (crb(c,0)) { IRQCHK(c); goto L_80100C18; } // 80100C3C
  return; // 80100C40
}

// fn_80100C44
void f_80100C44(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100C44
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100C48
  c->r[0]=c->r[4]+0x00000020u; // 80100C4C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100C50
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100C54
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100C58
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100C5C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100C60
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100C64
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100C68
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100C6C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100C70
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100C74
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100C78
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100C7C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100C80
  c->r[0]=c->r[3]+c->r[0]; // 80100C84
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100C88
  return; // 80100C8C
}

// fn_80100C90
void f_80100C90(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100C90
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100C94
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100C98
  c->r[0]=c->r[4]+0x00000010u; // 80100C9C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100CA0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100CA4
  c->r[7]=0u+0x00000000u; // 80100CA8
  c->r[6]=0u+0x00000000u; // 80100CAC
  goto L_80100CCC; // 80100CB0
L_80100CB4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100CB4
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100CB8
  c->r[0]=c->r[4]+c->r[0]; // 80100CBC
  W32(c->r[5]+c->r[6],c->r[0]); // 80100CC0
  c->r[6]=c->r[6]+0x00000004u; // 80100CC4
  c->r[7]=c->r[7]+0x00000001u; // 80100CC8
L_80100CCC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100CCC
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100CD0
  cmpu(c,0,c->r[7],c->r[0]); // 80100CD4
  if (crb(c,0)) { IRQCHK(c); goto L_80100CB4; } // 80100CD8
  return; // 80100CDC
}

// fn_80100CE0
void f_80100CE0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100CE0
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100CE4
  c->r[0]=c->r[4]+0x00000020u; // 80100CE8
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100CEC
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100CF0
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100CF4
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100CF8
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100CFC
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100D00
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100D04
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100D08
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100D0C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100D10
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100D14
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100D18
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100D1C
  c->r[0]=c->r[3]+c->r[0]; // 80100D20
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100D24
  return; // 80100D28
}

// fn_80100D2C
void f_80100D2C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100D2C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100D30
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100D34
  c->r[0]=c->r[4]+0x00000010u; // 80100D38
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100D3C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100D40
  c->r[7]=0u+0x00000000u; // 80100D44
  c->r[6]=0u+0x00000000u; // 80100D48
  goto L_80100D68; // 80100D4C
L_80100D50:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100D50
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100D54
  c->r[0]=c->r[4]+c->r[0]; // 80100D58
  W32(c->r[5]+c->r[6],c->r[0]); // 80100D5C
  c->r[6]=c->r[6]+0x00000004u; // 80100D60
  c->r[7]=c->r[7]+0x00000001u; // 80100D64
L_80100D68:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100D68
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100D6C
  cmpu(c,0,c->r[7],c->r[0]); // 80100D70
  if (crb(c,0)) { IRQCHK(c); goto L_80100D50; } // 80100D74
  return; // 80100D78
}

// fn_80100D7C
void f_80100D7C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100D7C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100D80
  c->r[0]=c->r[4]+0x00000020u; // 80100D84
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100D88
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100D8C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100D90
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100D94
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100D98
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100D9C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100DA0
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100DA4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100DA8
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100DAC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100DB0
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100DB4
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100DB8
  c->r[0]=c->r[3]+c->r[0]; // 80100DBC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100DC0
  return; // 80100DC4
}

// fn_80100DC8
void f_80100DC8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100DC8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100DCC
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100DD0
  c->r[0]=c->r[4]+0x00000010u; // 80100DD4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100DD8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100DDC
  c->r[7]=0u+0x00000000u; // 80100DE0
  c->r[6]=0u+0x00000000u; // 80100DE4
  goto L_80100E04; // 80100DE8
L_80100DEC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100DEC
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100DF0
  c->r[0]=c->r[4]+c->r[0]; // 80100DF4
  W32(c->r[5]+c->r[6],c->r[0]); // 80100DF8
  c->r[6]=c->r[6]+0x00000004u; // 80100DFC
  c->r[7]=c->r[7]+0x00000001u; // 80100E00
L_80100E04:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100E04
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100E08
  cmpu(c,0,c->r[7],c->r[0]); // 80100E0C
  if (crb(c,0)) { IRQCHK(c); goto L_80100DEC; } // 80100E10
  return; // 80100E14
}

// fn_80100E18
void f_80100E18(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100E18
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100E1C
  c->r[0]=c->r[4]+0x00000020u; // 80100E20
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100E24
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100E28
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100E2C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100E30
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100E34
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100E38
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100E3C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100E40
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100E44
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100E48
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100E4C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100E50
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100E54
  c->r[0]=c->r[3]+c->r[0]; // 80100E58
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100E5C
  return; // 80100E60
}

// fn_80100E64
void f_80100E64(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100E64
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100E68
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100E6C
  c->r[0]=c->r[4]+0x00000010u; // 80100E70
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100E74
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100E78
  c->r[7]=0u+0x00000000u; // 80100E7C
  c->r[6]=0u+0x00000000u; // 80100E80
  goto L_80100EA0; // 80100E84
L_80100E88:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100E88
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100E8C
  c->r[0]=c->r[4]+c->r[0]; // 80100E90
  W32(c->r[5]+c->r[6],c->r[0]); // 80100E94
  c->r[6]=c->r[6]+0x00000004u; // 80100E98
  c->r[7]=c->r[7]+0x00000001u; // 80100E9C
L_80100EA0:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100EA0
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100EA4
  cmpu(c,0,c->r[7],c->r[0]); // 80100EA8
  if (crb(c,0)) { IRQCHK(c); goto L_80100E88; } // 80100EAC
  return; // 80100EB0
}

// fn_80100EB4
void f_80100EB4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100EB4
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100EB8
  c->r[0]=c->r[4]+0x00000020u; // 80100EBC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100EC0
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100EC4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100EC8
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100ECC
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100ED0
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100ED4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100ED8
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100EDC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100EE0
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100EE4
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100EE8
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100EEC
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100EF0
  c->r[0]=c->r[3]+c->r[0]; // 80100EF4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100EF8
  return; // 80100EFC
}

// fn_80100F00
void f_80100F00(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100F00
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100F04
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100F08
  c->r[0]=c->r[4]+0x00000010u; // 80100F0C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100F10
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100F14
  c->r[7]=0u+0x00000000u; // 80100F18
  c->r[6]=0u+0x00000000u; // 80100F1C
  goto L_80100F3C; // 80100F20
L_80100F24:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100F24
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100F28
  c->r[0]=c->r[4]+c->r[0]; // 80100F2C
  W32(c->r[5]+c->r[6],c->r[0]); // 80100F30
  c->r[6]=c->r[6]+0x00000004u; // 80100F34
  c->r[7]=c->r[7]+0x00000001u; // 80100F38
L_80100F3C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100F3C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100F40
  cmpu(c,0,c->r[7],c->r[0]); // 80100F44
  if (crb(c,0)) { IRQCHK(c); goto L_80100F24; } // 80100F48
  return; // 80100F4C
}

// fn_80100F50
void f_80100F50(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100F50
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100F54
  c->r[0]=c->r[4]+0x00000020u; // 80100F58
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100F5C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100F60
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100F64
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100F68
  c->r[0]=R32(c->r[4]+0x00000018u); // 80100F6C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80100F70
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100F74
  c->r[4]=R32(c->r[5]+0x00000004u); // 80100F78
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80100F7C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80100F80
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100F84
  c->r[3]=R32(c->r[4]+0x00000018u); // 80100F88
  c->r[0]=R32(c->r[4]+0x00000008u); // 80100F8C
  c->r[0]=c->r[3]+c->r[0]; // 80100F90
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80100F94
  return; // 80100F98
}

// fn_80100F9C
void f_80100F9C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80100F9C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100FA0
  W32(c->r[5]+0x00000010u,c->r[0]); // 80100FA4
  c->r[0]=c->r[4]+0x00000010u; // 80100FA8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100FAC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80100FB0
  c->r[7]=0u+0x00000000u; // 80100FB4
  c->r[6]=0u+0x00000000u; // 80100FB8
  goto L_80100FD8; // 80100FBC
L_80100FC0:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80100FC0
  c->r[0]=R32(c->r[5]+c->r[6]); // 80100FC4
  c->r[0]=c->r[4]+c->r[0]; // 80100FC8
  W32(c->r[5]+c->r[6],c->r[0]); // 80100FCC
  c->r[6]=c->r[6]+0x00000004u; // 80100FD0
  c->r[7]=c->r[7]+0x00000001u; // 80100FD4
L_80100FD8:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100FD8
  c->r[0]=R32(c->r[5]+0x00000010u); // 80100FDC
  cmpu(c,0,c->r[7],c->r[0]); // 80100FE0
  if (crb(c,0)) { IRQCHK(c); goto L_80100FC0; } // 80100FE4
  return; // 80100FE8
}

// fn_80100FEC
void f_80100FEC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80100FEC
  W32(c->r[5]+0x00000004u,c->r[4]); // 80100FF0
  c->r[0]=c->r[4]+0x00000020u; // 80100FF4
  c->r[4]=R32(c->r[3]+0x00000034u); // 80100FF8
  W32(c->r[4]+0x00000020u,c->r[0]); // 80100FFC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101000
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101004
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101008
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010100C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101010
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101014
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101018
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010101C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101020
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101024
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101028
  c->r[0]=c->r[3]+c->r[0]; // 8010102C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101030
  return; // 80101034
}

// fn_80101038
void f_80101038(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101038
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010103C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101040
  c->r[0]=c->r[4]+0x00000010u; // 80101044
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101048
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010104C
  c->r[7]=0u+0x00000000u; // 80101050
  c->r[6]=0u+0x00000000u; // 80101054
  goto L_80101074; // 80101058
L_8010105C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010105C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101060
  c->r[0]=c->r[4]+c->r[0]; // 80101064
  W32(c->r[5]+c->r[6],c->r[0]); // 80101068
  c->r[6]=c->r[6]+0x00000004u; // 8010106C
  c->r[7]=c->r[7]+0x00000001u; // 80101070
L_80101074:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101074
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101078
  cmpu(c,0,c->r[7],c->r[0]); // 8010107C
  if (crb(c,0)) { IRQCHK(c); goto L_8010105C; } // 80101080
  return; // 80101084
}

// fn_80101088
void f_80101088(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101088
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010108C
  c->r[0]=c->r[4]+0x00000020u; // 80101090
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101094
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101098
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010109C
  c->r[4]=R32(c->r[5]+0x00000004u); // 801010A0
  c->r[0]=R32(c->r[4]+0x00000018u); // 801010A4
  W32(c->r[5]+0x00000014u,c->r[0]); // 801010A8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801010AC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801010B0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801010B4
  W32(c->r[5]+0x00000008u,c->r[0]); // 801010B8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801010BC
  c->r[3]=R32(c->r[4]+0x00000018u); // 801010C0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801010C4
  c->r[0]=c->r[3]+c->r[0]; // 801010C8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801010CC
  return; // 801010D0
}

// fn_801010D4
void f_801010D4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801010D4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801010D8
  W32(c->r[5]+0x00000010u,c->r[0]); // 801010DC
  c->r[0]=c->r[4]+0x00000010u; // 801010E0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801010E4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801010E8
  c->r[7]=0u+0x00000000u; // 801010EC
  c->r[6]=0u+0x00000000u; // 801010F0
  goto L_80101110; // 801010F4
L_801010F8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801010F8
  c->r[0]=R32(c->r[5]+c->r[6]); // 801010FC
  c->r[0]=c->r[4]+c->r[0]; // 80101100
  W32(c->r[5]+c->r[6],c->r[0]); // 80101104
  c->r[6]=c->r[6]+0x00000004u; // 80101108
  c->r[7]=c->r[7]+0x00000001u; // 8010110C
L_80101110:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101110
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101114
  cmpu(c,0,c->r[7],c->r[0]); // 80101118
  if (crb(c,0)) { IRQCHK(c); goto L_801010F8; } // 8010111C
  return; // 80101120
}

// fn_80101124
void f_80101124(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101124
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101128
  c->r[0]=c->r[4]+0x00000020u; // 8010112C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101130
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101134
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101138
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010113C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101140
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101144
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101148
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010114C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101150
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101154
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101158
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010115C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101160
  c->r[0]=c->r[3]+c->r[0]; // 80101164
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101168
  return; // 8010116C
}

// fn_80101170
void f_80101170(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101170
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101174
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101178
  c->r[0]=c->r[4]+0x00000010u; // 8010117C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101180
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101184
  c->r[7]=0u+0x00000000u; // 80101188
  c->r[6]=0u+0x00000000u; // 8010118C
  goto L_801011AC; // 80101190
L_80101194:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101194
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101198
  c->r[0]=c->r[4]+c->r[0]; // 8010119C
  W32(c->r[5]+c->r[6],c->r[0]); // 801011A0
  c->r[6]=c->r[6]+0x00000004u; // 801011A4
  c->r[7]=c->r[7]+0x00000001u; // 801011A8
L_801011AC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801011AC
  c->r[0]=R32(c->r[5]+0x00000010u); // 801011B0
  cmpu(c,0,c->r[7],c->r[0]); // 801011B4
  if (crb(c,0)) { IRQCHK(c); goto L_80101194; } // 801011B8
  return; // 801011BC
}

// fn_801011C0
void f_801011C0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801011C0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801011C4
  c->r[0]=c->r[4]+0x00000020u; // 801011C8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801011CC
  W32(c->r[4]+0x00000020u,c->r[0]); // 801011D0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801011D4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801011D8
  c->r[0]=R32(c->r[4]+0x00000018u); // 801011DC
  W32(c->r[5]+0x00000014u,c->r[0]); // 801011E0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801011E4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801011E8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801011EC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801011F0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801011F4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801011F8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801011FC
  c->r[0]=c->r[3]+c->r[0]; // 80101200
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101204
  return; // 80101208
}

// fn_8010120C
void f_8010120C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010120C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101210
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101214
  c->r[0]=c->r[4]+0x00000010u; // 80101218
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010121C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101220
  c->r[7]=0u+0x00000000u; // 80101224
  c->r[6]=0u+0x00000000u; // 80101228
  goto L_80101248; // 8010122C
L_80101230:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101230
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101234
  c->r[0]=c->r[4]+c->r[0]; // 80101238
  W32(c->r[5]+c->r[6],c->r[0]); // 8010123C
  c->r[6]=c->r[6]+0x00000004u; // 80101240
  c->r[7]=c->r[7]+0x00000001u; // 80101244
L_80101248:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101248
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010124C
  cmpu(c,0,c->r[7],c->r[0]); // 80101250
  if (crb(c,0)) { IRQCHK(c); goto L_80101230; } // 80101254
  return; // 80101258
}

// fn_8010125C
void f_8010125C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010125C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101260
  c->r[0]=c->r[4]+0x00000020u; // 80101264
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101268
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010126C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101270
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101274
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101278
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010127C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101280
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101284
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101288
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010128C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101290
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101294
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101298
  c->r[0]=c->r[3]+c->r[0]; // 8010129C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801012A0
  return; // 801012A4
}

// fn_801012A8
void f_801012A8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801012A8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801012AC
  W32(c->r[5]+0x00000010u,c->r[0]); // 801012B0
  c->r[0]=c->r[4]+0x00000010u; // 801012B4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801012B8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801012BC
  c->r[7]=0u+0x00000000u; // 801012C0
  c->r[6]=0u+0x00000000u; // 801012C4
  goto L_801012E4; // 801012C8
L_801012CC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801012CC
  c->r[0]=R32(c->r[5]+c->r[6]); // 801012D0
  c->r[0]=c->r[4]+c->r[0]; // 801012D4
  W32(c->r[5]+c->r[6],c->r[0]); // 801012D8
  c->r[6]=c->r[6]+0x00000004u; // 801012DC
  c->r[7]=c->r[7]+0x00000001u; // 801012E0
L_801012E4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801012E4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801012E8
  cmpu(c,0,c->r[7],c->r[0]); // 801012EC
  if (crb(c,0)) { IRQCHK(c); goto L_801012CC; } // 801012F0
  return; // 801012F4
}

// fn_801012F8
void f_801012F8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801012F8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801012FC
  c->r[0]=c->r[4]+0x00000020u; // 80101300
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101304
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101308
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010130C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101310
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101314
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101318
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010131C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101320
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101324
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101328
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010132C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101330
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101334
  c->r[0]=c->r[3]+c->r[0]; // 80101338
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010133C
  return; // 80101340
}

// fn_80101344
void f_80101344(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101344
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101348
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010134C
  c->r[0]=c->r[4]+0x00000010u; // 80101350
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101354
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101358
  c->r[7]=0u+0x00000000u; // 8010135C
  c->r[6]=0u+0x00000000u; // 80101360
  goto L_80101380; // 80101364
L_80101368:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101368
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010136C
  c->r[0]=c->r[4]+c->r[0]; // 80101370
  W32(c->r[5]+c->r[6],c->r[0]); // 80101374
  c->r[6]=c->r[6]+0x00000004u; // 80101378
  c->r[7]=c->r[7]+0x00000001u; // 8010137C
L_80101380:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101380
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101384
  cmpu(c,0,c->r[7],c->r[0]); // 80101388
  if (crb(c,0)) { IRQCHK(c); goto L_80101368; } // 8010138C
  return; // 80101390
}

// fn_80101394
void f_80101394(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101394
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101398
  c->r[0]=c->r[4]+0x00000020u; // 8010139C
  c->r[4]=R32(c->r[3]+0x00000034u); // 801013A0
  W32(c->r[4]+0x00000020u,c->r[0]); // 801013A4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801013A8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801013AC
  c->r[0]=R32(c->r[4]+0x00000018u); // 801013B0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801013B4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801013B8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801013BC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801013C0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801013C4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801013C8
  c->r[3]=R32(c->r[4]+0x00000018u); // 801013CC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801013D0
  c->r[0]=c->r[3]+c->r[0]; // 801013D4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801013D8
  return; // 801013DC
}

// fn_801013E0
void f_801013E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801013E0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801013E4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801013E8
  c->r[0]=c->r[4]+0x00000010u; // 801013EC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801013F0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801013F4
  c->r[7]=0u+0x00000000u; // 801013F8
  c->r[6]=0u+0x00000000u; // 801013FC
  goto L_8010141C; // 80101400
L_80101404:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101404
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101408
  c->r[0]=c->r[4]+c->r[0]; // 8010140C
  W32(c->r[5]+c->r[6],c->r[0]); // 80101410
  c->r[6]=c->r[6]+0x00000004u; // 80101414
  c->r[7]=c->r[7]+0x00000001u; // 80101418
L_8010141C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010141C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101420
  cmpu(c,0,c->r[7],c->r[0]); // 80101424
  if (crb(c,0)) { IRQCHK(c); goto L_80101404; } // 80101428
  return; // 8010142C
}

// fn_80101430
void f_80101430(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101430
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101434
  c->r[0]=c->r[4]+0x00000020u; // 80101438
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010143C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101440
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101444
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101448
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010144C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101450
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101454
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101458
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8010145C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101460
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101464
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101468
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010146C
  c->r[0]=c->r[3]+c->r[0]; // 80101470
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101474
  return; // 80101478
}

// fn_8010147C
void f_8010147C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010147C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101480
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101484
  c->r[0]=c->r[4]+0x00000010u; // 80101488
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010148C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101490
  c->r[7]=0u+0x00000000u; // 80101494
  c->r[6]=0u+0x00000000u; // 80101498
  goto L_801014B8; // 8010149C
L_801014A0:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801014A0
  c->r[0]=R32(c->r[5]+c->r[6]); // 801014A4
  c->r[0]=c->r[4]+c->r[0]; // 801014A8
  W32(c->r[5]+c->r[6],c->r[0]); // 801014AC
  c->r[6]=c->r[6]+0x00000004u; // 801014B0
  c->r[7]=c->r[7]+0x00000001u; // 801014B4
L_801014B8:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801014B8
  c->r[0]=R32(c->r[5]+0x00000010u); // 801014BC
  cmpu(c,0,c->r[7],c->r[0]); // 801014C0
  if (crb(c,0)) { IRQCHK(c); goto L_801014A0; } // 801014C4
  return; // 801014C8
}

// fn_801014CC
void f_801014CC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801014CC
  W32(c->r[5]+0x00000004u,c->r[4]); // 801014D0
  c->r[0]=c->r[4]+0x00000020u; // 801014D4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801014D8
  W32(c->r[4]+0x00000020u,c->r[0]); // 801014DC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801014E0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801014E4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801014E8
  W32(c->r[5]+0x00000014u,c->r[0]); // 801014EC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801014F0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801014F4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801014F8
  W32(c->r[5]+0x00000008u,c->r[0]); // 801014FC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101500
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101504
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101508
  c->r[0]=c->r[3]+c->r[0]; // 8010150C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101510
  return; // 80101514
}

// fn_80101518
void f_80101518(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101518
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010151C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101520
  c->r[0]=c->r[4]+0x00000010u; // 80101524
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101528
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010152C
  c->r[7]=0u+0x00000000u; // 80101530
  c->r[6]=0u+0x00000000u; // 80101534
  goto L_80101554; // 80101538
L_8010153C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010153C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101540
  c->r[0]=c->r[4]+c->r[0]; // 80101544
  W32(c->r[5]+c->r[6],c->r[0]); // 80101548
  c->r[6]=c->r[6]+0x00000004u; // 8010154C
  c->r[7]=c->r[7]+0x00000001u; // 80101550
L_80101554:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101554
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101558
  cmpu(c,0,c->r[7],c->r[0]); // 8010155C
  if (crb(c,0)) { IRQCHK(c); goto L_8010153C; } // 80101560
  return; // 80101564
}

// fn_80101568
void f_80101568(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101568
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010156C
  c->r[0]=c->r[4]+0x00000020u; // 80101570
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101574
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101578
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010157C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101580
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101584
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101588
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010158C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101590
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101594
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101598
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010159C
  c->r[3]=R32(c->r[4]+0x00000018u); // 801015A0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801015A4
  c->r[0]=c->r[3]+c->r[0]; // 801015A8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801015AC
  return; // 801015B0
}

// fn_801015B4
void f_801015B4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801015B4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801015B8
  W32(c->r[5]+0x00000010u,c->r[0]); // 801015BC
  c->r[0]=c->r[4]+0x00000010u; // 801015C0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801015C4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801015C8
  c->r[7]=0u+0x00000000u; // 801015CC
  c->r[6]=0u+0x00000000u; // 801015D0
  goto L_801015F0; // 801015D4
L_801015D8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801015D8
  c->r[0]=R32(c->r[5]+c->r[6]); // 801015DC
  c->r[0]=c->r[4]+c->r[0]; // 801015E0
  W32(c->r[5]+c->r[6],c->r[0]); // 801015E4
  c->r[6]=c->r[6]+0x00000004u; // 801015E8
  c->r[7]=c->r[7]+0x00000001u; // 801015EC
L_801015F0:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801015F0
  c->r[0]=R32(c->r[5]+0x00000010u); // 801015F4
  cmpu(c,0,c->r[7],c->r[0]); // 801015F8
  if (crb(c,0)) { IRQCHK(c); goto L_801015D8; } // 801015FC
  return; // 80101600
}

// fn_80101604
void f_80101604(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101604
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101608
  c->r[0]=c->r[4]+0x00000020u; // 8010160C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101610
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101614
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101618
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010161C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101620
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101624
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101628
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010162C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101630
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101634
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101638
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010163C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101640
  c->r[0]=c->r[3]+c->r[0]; // 80101644
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101648
  return; // 8010164C
}

// fn_80101650
void f_80101650(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101650
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101654
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101658
  c->r[0]=c->r[4]+0x00000010u; // 8010165C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101660
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101664
  c->r[7]=0u+0x00000000u; // 80101668
  c->r[6]=0u+0x00000000u; // 8010166C
  goto L_8010168C; // 80101670
L_80101674:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101674
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101678
  c->r[0]=c->r[4]+c->r[0]; // 8010167C
  W32(c->r[5]+c->r[6],c->r[0]); // 80101680
  c->r[6]=c->r[6]+0x00000004u; // 80101684
  c->r[7]=c->r[7]+0x00000001u; // 80101688
L_8010168C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010168C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101690
  cmpu(c,0,c->r[7],c->r[0]); // 80101694
  if (crb(c,0)) { IRQCHK(c); goto L_80101674; } // 80101698
  return; // 8010169C
}

// fn_801016A0
void f_801016A0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801016A0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801016A4
  c->r[0]=c->r[4]+0x00000020u; // 801016A8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801016AC
  W32(c->r[4]+0x00000020u,c->r[0]); // 801016B0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801016B4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801016B8
  c->r[0]=R32(c->r[4]+0x00000018u); // 801016BC
  W32(c->r[5]+0x00000014u,c->r[0]); // 801016C0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801016C4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801016C8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801016CC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801016D0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801016D4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801016D8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801016DC
  c->r[0]=c->r[3]+c->r[0]; // 801016E0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801016E4
  return; // 801016E8
}

// fn_801016EC
void f_801016EC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801016EC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801016F0
  W32(c->r[5]+0x00000010u,c->r[0]); // 801016F4
  c->r[0]=c->r[4]+0x00000010u; // 801016F8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801016FC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101700
  c->r[7]=0u+0x00000000u; // 80101704
  c->r[6]=0u+0x00000000u; // 80101708
  goto L_80101728; // 8010170C
L_80101710:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101710
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101714
  c->r[0]=c->r[4]+c->r[0]; // 80101718
  W32(c->r[5]+c->r[6],c->r[0]); // 8010171C
  c->r[6]=c->r[6]+0x00000004u; // 80101720
  c->r[7]=c->r[7]+0x00000001u; // 80101724
L_80101728:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101728
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010172C
  cmpu(c,0,c->r[7],c->r[0]); // 80101730
  if (crb(c,0)) { IRQCHK(c); goto L_80101710; } // 80101734
  return; // 80101738
}

// fn_8010173C
void f_8010173C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010173C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101740
  c->r[0]=c->r[4]+0x00000020u; // 80101744
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101748
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010174C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101750
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101754
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101758
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010175C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101760
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101764
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101768
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010176C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101770
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101774
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101778
  c->r[0]=c->r[3]+c->r[0]; // 8010177C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101780
  return; // 80101784
}

// fn_80101788
void f_80101788(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101788
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010178C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101790
  c->r[0]=c->r[4]+0x00000010u; // 80101794
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101798
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010179C
  c->r[7]=0u+0x00000000u; // 801017A0
  c->r[6]=0u+0x00000000u; // 801017A4
  goto L_801017C4; // 801017A8
L_801017AC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801017AC
  c->r[0]=R32(c->r[5]+c->r[6]); // 801017B0
  c->r[0]=c->r[4]+c->r[0]; // 801017B4
  W32(c->r[5]+c->r[6],c->r[0]); // 801017B8
  c->r[6]=c->r[6]+0x00000004u; // 801017BC
  c->r[7]=c->r[7]+0x00000001u; // 801017C0
L_801017C4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801017C4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801017C8
  cmpu(c,0,c->r[7],c->r[0]); // 801017CC
  if (crb(c,0)) { IRQCHK(c); goto L_801017AC; } // 801017D0
  return; // 801017D4
}

// fn_801017D8
void f_801017D8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801017D8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801017DC
  c->r[0]=c->r[4]+0x00000020u; // 801017E0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801017E4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801017E8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801017EC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801017F0
  c->r[0]=R32(c->r[4]+0x00000018u); // 801017F4
  W32(c->r[5]+0x00000014u,c->r[0]); // 801017F8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801017FC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101800
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101804
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101808
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010180C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101810
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101814
  c->r[0]=c->r[3]+c->r[0]; // 80101818
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010181C
  return; // 80101820
}

// fn_80101824
void f_80101824(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101824
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101828
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010182C
  c->r[0]=c->r[4]+0x00000010u; // 80101830
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101834
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101838
  c->r[7]=0u+0x00000000u; // 8010183C
  c->r[6]=0u+0x00000000u; // 80101840
  goto L_80101860; // 80101844
L_80101848:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101848
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010184C
  c->r[0]=c->r[4]+c->r[0]; // 80101850
  W32(c->r[5]+c->r[6],c->r[0]); // 80101854
  c->r[6]=c->r[6]+0x00000004u; // 80101858
  c->r[7]=c->r[7]+0x00000001u; // 8010185C
L_80101860:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101860
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101864
  cmpu(c,0,c->r[7],c->r[0]); // 80101868
  if (crb(c,0)) { IRQCHK(c); goto L_80101848; } // 8010186C
  return; // 80101870
}

// fn_80101874
void f_80101874(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101874
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101878
  c->r[0]=c->r[4]+0x00000020u; // 8010187C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101880
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101884
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101888
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010188C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101890
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101894
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101898
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010189C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801018A0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801018A4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801018A8
  c->r[3]=R32(c->r[4]+0x00000018u); // 801018AC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801018B0
  c->r[0]=c->r[3]+c->r[0]; // 801018B4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801018B8
  return; // 801018BC
}

// fn_801018C0
void f_801018C0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801018C0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801018C4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801018C8
  c->r[0]=c->r[4]+0x00000010u; // 801018CC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801018D0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801018D4
  c->r[7]=0u+0x00000000u; // 801018D8
  c->r[6]=0u+0x00000000u; // 801018DC
  goto L_801018FC; // 801018E0
L_801018E4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801018E4
  c->r[0]=R32(c->r[5]+c->r[6]); // 801018E8
  c->r[0]=c->r[4]+c->r[0]; // 801018EC
  W32(c->r[5]+c->r[6],c->r[0]); // 801018F0
  c->r[6]=c->r[6]+0x00000004u; // 801018F4
  c->r[7]=c->r[7]+0x00000001u; // 801018F8
L_801018FC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801018FC
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101900
  cmpu(c,0,c->r[7],c->r[0]); // 80101904
  if (crb(c,0)) { IRQCHK(c); goto L_801018E4; } // 80101908
  return; // 8010190C
}

// fn_80101910
void f_80101910(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101910
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101914
  c->r[0]=c->r[4]+0x00000020u; // 80101918
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010191C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101920
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101924
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101928
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010192C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101930
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101934
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101938
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8010193C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101940
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101944
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101948
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010194C
  c->r[0]=c->r[3]+c->r[0]; // 80101950
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101954
  return; // 80101958
}

// fn_8010195C
void f_8010195C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010195C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101960
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101964
  c->r[0]=c->r[4]+0x00000010u; // 80101968
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010196C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101970
  c->r[7]=0u+0x00000000u; // 80101974
  c->r[6]=0u+0x00000000u; // 80101978
  goto L_80101998; // 8010197C
L_80101980:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101980
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101984
  c->r[0]=c->r[4]+c->r[0]; // 80101988
  W32(c->r[5]+c->r[6],c->r[0]); // 8010198C
  c->r[6]=c->r[6]+0x00000004u; // 80101990
  c->r[7]=c->r[7]+0x00000001u; // 80101994
L_80101998:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101998
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010199C
  cmpu(c,0,c->r[7],c->r[0]); // 801019A0
  if (crb(c,0)) { IRQCHK(c); goto L_80101980; } // 801019A4
  return; // 801019A8
}

// fn_801019AC
void f_801019AC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801019AC
  W32(c->r[5]+0x00000004u,c->r[4]); // 801019B0
  c->r[0]=c->r[4]+0x00000020u; // 801019B4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801019B8
  W32(c->r[4]+0x00000020u,c->r[0]); // 801019BC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801019C0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801019C4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801019C8
  W32(c->r[5]+0x00000014u,c->r[0]); // 801019CC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801019D0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801019D4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801019D8
  W32(c->r[5]+0x00000008u,c->r[0]); // 801019DC
  c->r[4]=R32(c->r[3]+0x00000034u); // 801019E0
  c->r[3]=R32(c->r[4]+0x00000018u); // 801019E4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801019E8
  c->r[0]=c->r[3]+c->r[0]; // 801019EC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801019F0
  return; // 801019F4
}

// fn_801019F8
void f_801019F8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801019F8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801019FC
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101A00
  c->r[0]=c->r[4]+0x00000010u; // 80101A04
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101A08
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101A0C
  c->r[7]=0u+0x00000000u; // 80101A10
  c->r[6]=0u+0x00000000u; // 80101A14
  goto L_80101A34; // 80101A18
L_80101A1C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101A1C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101A20
  c->r[0]=c->r[4]+c->r[0]; // 80101A24
  W32(c->r[5]+c->r[6],c->r[0]); // 80101A28
  c->r[6]=c->r[6]+0x00000004u; // 80101A2C
  c->r[7]=c->r[7]+0x00000001u; // 80101A30
L_80101A34:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101A34
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101A38
  cmpu(c,0,c->r[7],c->r[0]); // 80101A3C
  if (crb(c,0)) { IRQCHK(c); goto L_80101A1C; } // 80101A40
  return; // 80101A44
}

// fn_80101A48
void f_80101A48(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101A48
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101A4C
  c->r[0]=c->r[4]+0x00000020u; // 80101A50
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101A54
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101A58
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101A5C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101A60
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101A64
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101A68
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101A6C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101A70
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101A74
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101A78
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101A7C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101A80
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101A84
  c->r[0]=c->r[3]+c->r[0]; // 80101A88
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101A8C
  return; // 80101A90
}

// fn_80101A94
void f_80101A94(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101A94
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101A98
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101A9C
  c->r[0]=c->r[4]+0x00000010u; // 80101AA0
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101AA4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101AA8
  c->r[7]=0u+0x00000000u; // 80101AAC
  c->r[6]=0u+0x00000000u; // 80101AB0
  goto L_80101AD0; // 80101AB4
L_80101AB8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101AB8
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101ABC
  c->r[0]=c->r[4]+c->r[0]; // 80101AC0
  W32(c->r[5]+c->r[6],c->r[0]); // 80101AC4
  c->r[6]=c->r[6]+0x00000004u; // 80101AC8
  c->r[7]=c->r[7]+0x00000001u; // 80101ACC
L_80101AD0:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101AD0
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101AD4
  cmpu(c,0,c->r[7],c->r[0]); // 80101AD8
  if (crb(c,0)) { IRQCHK(c); goto L_80101AB8; } // 80101ADC
  return; // 80101AE0
}

// fn_80101AE4
void f_80101AE4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101AE4
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101AE8
  c->r[0]=c->r[4]+0x00000020u; // 80101AEC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101AF0
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101AF4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101AF8
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101AFC
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101B00
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101B04
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101B08
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101B0C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101B10
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101B14
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101B18
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101B1C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101B20
  c->r[0]=c->r[3]+c->r[0]; // 80101B24
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101B28
  return; // 80101B2C
}

// fn_80101B30
void f_80101B30(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101B30
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101B34
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101B38
  c->r[0]=c->r[4]+0x00000010u; // 80101B3C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101B40
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101B44
  c->r[7]=0u+0x00000000u; // 80101B48
  c->r[6]=0u+0x00000000u; // 80101B4C
  goto L_80101B6C; // 80101B50
L_80101B54:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101B54
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101B58
  c->r[0]=c->r[4]+c->r[0]; // 80101B5C
  W32(c->r[5]+c->r[6],c->r[0]); // 80101B60
  c->r[6]=c->r[6]+0x00000004u; // 80101B64
  c->r[7]=c->r[7]+0x00000001u; // 80101B68
L_80101B6C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101B6C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101B70
  cmpu(c,0,c->r[7],c->r[0]); // 80101B74
  if (crb(c,0)) { IRQCHK(c); goto L_80101B54; } // 80101B78
  return; // 80101B7C
}

// fn_80101B80
void f_80101B80(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101B80
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101B84
  c->r[0]=c->r[4]+0x00000020u; // 80101B88
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101B8C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101B90
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101B94
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101B98
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101B9C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101BA0
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101BA4
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101BA8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101BAC
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101BB0
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101BB4
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101BB8
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101BBC
  c->r[0]=c->r[3]+c->r[0]; // 80101BC0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101BC4
  return; // 80101BC8
}

// fn_80101BCC
void f_80101BCC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101BCC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101BD0
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101BD4
  c->r[0]=c->r[4]+0x00000010u; // 80101BD8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101BDC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101BE0
  c->r[7]=0u+0x00000000u; // 80101BE4
  c->r[6]=0u+0x00000000u; // 80101BE8
  goto L_80101C08; // 80101BEC
L_80101BF0:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101BF0
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101BF4
  c->r[0]=c->r[4]+c->r[0]; // 80101BF8
  W32(c->r[5]+c->r[6],c->r[0]); // 80101BFC
  c->r[6]=c->r[6]+0x00000004u; // 80101C00
  c->r[7]=c->r[7]+0x00000001u; // 80101C04
L_80101C08:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101C08
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101C0C
  cmpu(c,0,c->r[7],c->r[0]); // 80101C10
  if (crb(c,0)) { IRQCHK(c); goto L_80101BF0; } // 80101C14
  return; // 80101C18
}

// fn_80101C1C
void f_80101C1C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101C1C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101C20
  c->r[0]=c->r[4]+0x00000020u; // 80101C24
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101C28
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101C2C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101C30
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101C34
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101C38
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101C3C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101C40
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101C44
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101C48
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101C4C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101C50
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101C54
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101C58
  c->r[0]=c->r[3]+c->r[0]; // 80101C5C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101C60
  return; // 80101C64
}

// fn_80101C68
void f_80101C68(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101C68
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101C6C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101C70
  c->r[0]=c->r[4]+0x00000010u; // 80101C74
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101C78
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101C7C
  c->r[7]=0u+0x00000000u; // 80101C80
  c->r[6]=0u+0x00000000u; // 80101C84
  goto L_80101CA4; // 80101C88
L_80101C8C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101C8C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101C90
  c->r[0]=c->r[4]+c->r[0]; // 80101C94
  W32(c->r[5]+c->r[6],c->r[0]); // 80101C98
  c->r[6]=c->r[6]+0x00000004u; // 80101C9C
  c->r[7]=c->r[7]+0x00000001u; // 80101CA0
L_80101CA4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101CA4
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101CA8
  cmpu(c,0,c->r[7],c->r[0]); // 80101CAC
  if (crb(c,0)) { IRQCHK(c); goto L_80101C8C; } // 80101CB0
  return; // 80101CB4
}

// fn_80101CB8
void f_80101CB8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101CB8
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101CBC
  c->r[0]=c->r[4]+0x00000020u; // 80101CC0
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101CC4
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101CC8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101CCC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101CD0
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101CD4
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101CD8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101CDC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101CE0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101CE4
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101CE8
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101CEC
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101CF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101CF4
  c->r[0]=c->r[3]+c->r[0]; // 80101CF8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101CFC
  return; // 80101D00
}

// fn_80101D04
void f_80101D04(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101D04
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101D08
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101D0C
  c->r[0]=c->r[4]+0x00000010u; // 80101D10
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101D14
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101D18
  c->r[7]=0u+0x00000000u; // 80101D1C
  c->r[6]=0u+0x00000000u; // 80101D20
  goto L_80101D40; // 80101D24
L_80101D28:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101D28
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101D2C
  c->r[0]=c->r[4]+c->r[0]; // 80101D30
  W32(c->r[5]+c->r[6],c->r[0]); // 80101D34
  c->r[6]=c->r[6]+0x00000004u; // 80101D38
  c->r[7]=c->r[7]+0x00000001u; // 80101D3C
L_80101D40:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101D40
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101D44
  cmpu(c,0,c->r[7],c->r[0]); // 80101D48
  if (crb(c,0)) { IRQCHK(c); goto L_80101D28; } // 80101D4C
  return; // 80101D50
}

// fn_80101D54
void f_80101D54(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101D54
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101D58
  c->r[0]=c->r[4]+0x00000020u; // 80101D5C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101D60
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101D64
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101D68
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101D6C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101D70
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101D74
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101D78
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101D7C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101D80
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101D84
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101D88
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101D8C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101D90
  c->r[0]=c->r[3]+c->r[0]; // 80101D94
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101D98
  return; // 80101D9C
}

// fn_80101DA0
void f_80101DA0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101DA0
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101DA4
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101DA8
  c->r[0]=c->r[4]+0x00000010u; // 80101DAC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101DB0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101DB4
  c->r[7]=0u+0x00000000u; // 80101DB8
  c->r[6]=0u+0x00000000u; // 80101DBC
  goto L_80101DDC; // 80101DC0
L_80101DC4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101DC4
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101DC8
  c->r[0]=c->r[4]+c->r[0]; // 80101DCC
  W32(c->r[5]+c->r[6],c->r[0]); // 80101DD0
  c->r[6]=c->r[6]+0x00000004u; // 80101DD4
  c->r[7]=c->r[7]+0x00000001u; // 80101DD8
L_80101DDC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101DDC
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101DE0
  cmpu(c,0,c->r[7],c->r[0]); // 80101DE4
  if (crb(c,0)) { IRQCHK(c); goto L_80101DC4; } // 80101DE8
  return; // 80101DEC
}

// fn_80101DF0
void f_80101DF0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101DF0
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101DF4
  c->r[0]=c->r[4]+0x00000020u; // 80101DF8
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101DFC
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101E00
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101E04
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101E08
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101E0C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101E10
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101E14
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101E18
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101E1C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101E20
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101E24
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101E28
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101E2C
  c->r[0]=c->r[3]+c->r[0]; // 80101E30
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101E34
  return; // 80101E38
}

// fn_80101E3C
void f_80101E3C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101E3C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101E40
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101E44
  c->r[0]=c->r[4]+0x00000010u; // 80101E48
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101E4C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101E50
  c->r[7]=0u+0x00000000u; // 80101E54
  c->r[6]=0u+0x00000000u; // 80101E58
  goto L_80101E78; // 80101E5C
L_80101E60:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101E60
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101E64
  c->r[0]=c->r[4]+c->r[0]; // 80101E68
  W32(c->r[5]+c->r[6],c->r[0]); // 80101E6C
  c->r[6]=c->r[6]+0x00000004u; // 80101E70
  c->r[7]=c->r[7]+0x00000001u; // 80101E74
L_80101E78:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101E78
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101E7C
  cmpu(c,0,c->r[7],c->r[0]); // 80101E80
  if (crb(c,0)) { IRQCHK(c); goto L_80101E60; } // 80101E84
  return; // 80101E88
}

// fn_80101E8C
void f_80101E8C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101E8C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101E90
  c->r[0]=c->r[4]+0x00000020u; // 80101E94
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101E98
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101E9C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101EA0
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101EA4
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101EA8
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101EAC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101EB0
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101EB4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101EB8
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101EBC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101EC0
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101EC4
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101EC8
  c->r[0]=c->r[3]+c->r[0]; // 80101ECC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101ED0
  return; // 80101ED4
}

// fn_80101ED8
void f_80101ED8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101ED8
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101EDC
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101EE0
  c->r[0]=c->r[4]+0x00000010u; // 80101EE4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101EE8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101EEC
  c->r[7]=0u+0x00000000u; // 80101EF0
  c->r[6]=0u+0x00000000u; // 80101EF4
  goto L_80101F14; // 80101EF8
L_80101EFC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101EFC
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101F00
  c->r[0]=c->r[4]+c->r[0]; // 80101F04
  W32(c->r[5]+c->r[6],c->r[0]); // 80101F08
  c->r[6]=c->r[6]+0x00000004u; // 80101F0C
  c->r[7]=c->r[7]+0x00000001u; // 80101F10
L_80101F14:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101F14
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101F18
  cmpu(c,0,c->r[7],c->r[0]); // 80101F1C
  if (crb(c,0)) { IRQCHK(c); goto L_80101EFC; } // 80101F20
  return; // 80101F24
}

// fn_80101F28
void f_80101F28(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101F28
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101F2C
  c->r[0]=c->r[4]+0x00000020u; // 80101F30
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101F34
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101F38
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101F3C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101F40
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101F44
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101F48
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101F4C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101F50
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101F54
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101F58
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101F5C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101F60
  c->r[0]=R32(c->r[4]+0x00000008u); // 80101F64
  c->r[0]=c->r[3]+c->r[0]; // 80101F68
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80101F6C
  return; // 80101F70
}

// fn_80101F74
void f_80101F74(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80101F74
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101F78
  W32(c->r[5]+0x00000010u,c->r[0]); // 80101F7C
  c->r[0]=c->r[4]+0x00000010u; // 80101F80
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101F84
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80101F88
  c->r[7]=0u+0x00000000u; // 80101F8C
  c->r[6]=0u+0x00000000u; // 80101F90
  goto L_80101FB0; // 80101F94
L_80101F98:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80101F98
  c->r[0]=R32(c->r[5]+c->r[6]); // 80101F9C
  c->r[0]=c->r[4]+c->r[0]; // 80101FA0
  W32(c->r[5]+c->r[6],c->r[0]); // 80101FA4
  c->r[6]=c->r[6]+0x00000004u; // 80101FA8
  c->r[7]=c->r[7]+0x00000001u; // 80101FAC
L_80101FB0:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101FB0
  c->r[0]=R32(c->r[5]+0x00000010u); // 80101FB4
  cmpu(c,0,c->r[7],c->r[0]); // 80101FB8
  if (crb(c,0)) { IRQCHK(c); goto L_80101F98; } // 80101FBC
  return; // 80101FC0
}

// fn_80101FC4
void f_80101FC4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101FC4
  W32(c->r[5]+0x00000004u,c->r[4]); // 80101FC8
  c->r[0]=c->r[4]+0x00000020u; // 80101FCC
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101FD0
  W32(c->r[4]+0x00000020u,c->r[0]); // 80101FD4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101FD8
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101FDC
  c->r[0]=R32(c->r[4]+0x00000018u); // 80101FE0
  W32(c->r[5]+0x00000014u,c->r[0]); // 80101FE4
  c->r[5]=R32(c->r[3]+0x00000034u); // 80101FE8
  c->r[4]=R32(c->r[5]+0x00000004u); // 80101FEC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80101FF0
  W32(c->r[5]+0x00000008u,c->r[0]); // 80101FF4
  c->r[4]=R32(c->r[3]+0x00000034u); // 80101FF8
  c->r[3]=R32(c->r[4]+0x00000018u); // 80101FFC
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102000
  c->r[0]=c->r[3]+c->r[0]; // 80102004
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102008
  return; // 8010200C
}

// fn_80102010
void f_80102010(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102010
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102014
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102018
  c->r[0]=c->r[4]+0x00000010u; // 8010201C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102020
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102024
  c->r[7]=0u+0x00000000u; // 80102028
  c->r[6]=0u+0x00000000u; // 8010202C
  goto L_8010204C; // 80102030
L_80102034:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102034
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102038
  c->r[0]=c->r[4]+c->r[0]; // 8010203C
  W32(c->r[5]+c->r[6],c->r[0]); // 80102040
  c->r[6]=c->r[6]+0x00000004u; // 80102044
  c->r[7]=c->r[7]+0x00000001u; // 80102048
L_8010204C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010204C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102050
  cmpu(c,0,c->r[7],c->r[0]); // 80102054
  if (crb(c,0)) { IRQCHK(c); goto L_80102034; } // 80102058
  return; // 8010205C
}

// fn_80102060
void f_80102060(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102060
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102064
  c->r[0]=c->r[4]+0x00000020u; // 80102068
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010206C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102070
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102074
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102078
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010207C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102080
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102084
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102088
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8010208C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102090
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102094
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102098
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010209C
  c->r[0]=c->r[3]+c->r[0]; // 801020A0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801020A4
  return; // 801020A8
}

// fn_801020AC
void f_801020AC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801020AC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801020B0
  W32(c->r[5]+0x00000010u,c->r[0]); // 801020B4
  c->r[0]=c->r[4]+0x00000010u; // 801020B8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801020BC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801020C0
  c->r[7]=0u+0x00000000u; // 801020C4
  c->r[6]=0u+0x00000000u; // 801020C8
  goto L_801020E8; // 801020CC
L_801020D0:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801020D0
  c->r[0]=R32(c->r[5]+c->r[6]); // 801020D4
  c->r[0]=c->r[4]+c->r[0]; // 801020D8
  W32(c->r[5]+c->r[6],c->r[0]); // 801020DC
  c->r[6]=c->r[6]+0x00000004u; // 801020E0
  c->r[7]=c->r[7]+0x00000001u; // 801020E4
L_801020E8:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801020E8
  c->r[0]=R32(c->r[5]+0x00000010u); // 801020EC
  cmpu(c,0,c->r[7],c->r[0]); // 801020F0
  if (crb(c,0)) { IRQCHK(c); goto L_801020D0; } // 801020F4
  return; // 801020F8
}

// fn_801020FC
void f_801020FC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801020FC
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102100
  c->r[0]=c->r[4]+0x00000020u; // 80102104
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102108
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010210C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102110
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102114
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102118
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010211C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102120
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102124
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102128
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010212C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102130
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102134
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102138
  c->r[0]=c->r[3]+c->r[0]; // 8010213C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102140
  return; // 80102144
}

// fn_80102148
void f_80102148(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102148
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010214C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102150
  c->r[0]=c->r[4]+0x00000010u; // 80102154
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102158
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010215C
  c->r[7]=0u+0x00000000u; // 80102160
  c->r[6]=0u+0x00000000u; // 80102164
  goto L_80102184; // 80102168
L_8010216C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010216C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102170
  c->r[0]=c->r[4]+c->r[0]; // 80102174
  W32(c->r[5]+c->r[6],c->r[0]); // 80102178
  c->r[6]=c->r[6]+0x00000004u; // 8010217C
  c->r[7]=c->r[7]+0x00000001u; // 80102180
L_80102184:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102184
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102188
  cmpu(c,0,c->r[7],c->r[0]); // 8010218C
  if (crb(c,0)) { IRQCHK(c); goto L_8010216C; } // 80102190
  return; // 80102194
}

// fn_80102198
void f_80102198(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102198
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010219C
  c->r[0]=c->r[4]+0x00000020u; // 801021A0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801021A4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801021A8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801021AC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801021B0
  c->r[0]=R32(c->r[4]+0x00000018u); // 801021B4
  W32(c->r[5]+0x00000014u,c->r[0]); // 801021B8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801021BC
  c->r[4]=R32(c->r[5]+0x00000004u); // 801021C0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801021C4
  W32(c->r[5]+0x00000008u,c->r[0]); // 801021C8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801021CC
  c->r[3]=R32(c->r[4]+0x00000018u); // 801021D0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801021D4
  c->r[0]=c->r[3]+c->r[0]; // 801021D8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801021DC
  return; // 801021E0
}

// fn_801021E4
void f_801021E4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801021E4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801021E8
  W32(c->r[5]+0x00000010u,c->r[0]); // 801021EC
  c->r[0]=c->r[4]+0x00000010u; // 801021F0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801021F4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801021F8
  c->r[7]=0u+0x00000000u; // 801021FC
  c->r[6]=0u+0x00000000u; // 80102200
  goto L_80102220; // 80102204
L_80102208:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102208
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010220C
  c->r[0]=c->r[4]+c->r[0]; // 80102210
  W32(c->r[5]+c->r[6],c->r[0]); // 80102214
  c->r[6]=c->r[6]+0x00000004u; // 80102218
  c->r[7]=c->r[7]+0x00000001u; // 8010221C
L_80102220:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102220
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102224
  cmpu(c,0,c->r[7],c->r[0]); // 80102228
  if (crb(c,0)) { IRQCHK(c); goto L_80102208; } // 8010222C
  return; // 80102230
}

// fn_80102234
void f_80102234(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102234
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102238
  c->r[0]=c->r[4]+0x00000020u; // 8010223C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102240
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102244
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102248
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010224C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102250
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102254
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102258
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010225C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102260
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102264
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102268
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010226C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102270
  c->r[0]=c->r[3]+c->r[0]; // 80102274
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102278
  return; // 8010227C
}

// fn_80102280
void f_80102280(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102280
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102284
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102288
  c->r[0]=c->r[4]+0x00000010u; // 8010228C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102290
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102294
  c->r[7]=0u+0x00000000u; // 80102298
  c->r[6]=0u+0x00000000u; // 8010229C
  goto L_801022BC; // 801022A0
L_801022A4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801022A4
  c->r[0]=R32(c->r[5]+c->r[6]); // 801022A8
  c->r[0]=c->r[4]+c->r[0]; // 801022AC
  W32(c->r[5]+c->r[6],c->r[0]); // 801022B0
  c->r[6]=c->r[6]+0x00000004u; // 801022B4
  c->r[7]=c->r[7]+0x00000001u; // 801022B8
L_801022BC:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801022BC
  c->r[0]=R32(c->r[5]+0x00000010u); // 801022C0
  cmpu(c,0,c->r[7],c->r[0]); // 801022C4
  if (crb(c,0)) { IRQCHK(c); goto L_801022A4; } // 801022C8
  return; // 801022CC
}

// fn_801022D0
void f_801022D0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801022D0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801022D4
  c->r[0]=c->r[4]+0x00000020u; // 801022D8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801022DC
  W32(c->r[4]+0x00000020u,c->r[0]); // 801022E0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801022E4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801022E8
  c->r[0]=R32(c->r[4]+0x00000018u); // 801022EC
  W32(c->r[5]+0x00000014u,c->r[0]); // 801022F0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801022F4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801022F8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801022FC
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102300
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102304
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102308
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010230C
  c->r[0]=c->r[3]+c->r[0]; // 80102310
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102314
  return; // 80102318
}

// fn_8010231C
void f_8010231C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010231C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102320
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102324
  c->r[0]=c->r[4]+0x00000010u; // 80102328
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010232C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102330
  c->r[7]=0u+0x00000000u; // 80102334
  c->r[6]=0u+0x00000000u; // 80102338
  goto L_80102358; // 8010233C
L_80102340:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102340
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102344
  c->r[0]=c->r[4]+c->r[0]; // 80102348
  W32(c->r[5]+c->r[6],c->r[0]); // 8010234C
  c->r[6]=c->r[6]+0x00000004u; // 80102350
  c->r[7]=c->r[7]+0x00000001u; // 80102354
L_80102358:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102358
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010235C
  cmpu(c,0,c->r[7],c->r[0]); // 80102360
  if (crb(c,0)) { IRQCHK(c); goto L_80102340; } // 80102364
  return; // 80102368
}

// fn_8010236C
void f_8010236C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010236C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102370
  c->r[0]=c->r[4]+0x00000020u; // 80102374
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102378
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010237C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102380
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102384
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102388
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010238C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102390
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102394
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102398
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010239C
  c->r[4]=R32(c->r[3]+0x00000034u); // 801023A0
  c->r[3]=R32(c->r[4]+0x00000018u); // 801023A4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801023A8
  c->r[0]=c->r[3]+c->r[0]; // 801023AC
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801023B0
  return; // 801023B4
}

// fn_801023B8
void f_801023B8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801023B8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801023BC
  W32(c->r[5]+0x00000010u,c->r[0]); // 801023C0
  c->r[0]=c->r[4]+0x00000010u; // 801023C4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801023C8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801023CC
  c->r[7]=0u+0x00000000u; // 801023D0
  c->r[6]=0u+0x00000000u; // 801023D4
  goto L_801023F4; // 801023D8
L_801023DC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801023DC
  c->r[0]=R32(c->r[5]+c->r[6]); // 801023E0
  c->r[0]=c->r[4]+c->r[0]; // 801023E4
  W32(c->r[5]+c->r[6],c->r[0]); // 801023E8
  c->r[6]=c->r[6]+0x00000004u; // 801023EC
  c->r[7]=c->r[7]+0x00000001u; // 801023F0
L_801023F4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801023F4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801023F8
  cmpu(c,0,c->r[7],c->r[0]); // 801023FC
  if (crb(c,0)) { IRQCHK(c); goto L_801023DC; } // 80102400
  return; // 80102404
}

// fn_80102408
void f_80102408(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102408
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010240C
  c->r[0]=c->r[4]+0x00000020u; // 80102410
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102414
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102418
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010241C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102420
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102424
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102428
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010242C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102430
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102434
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102438
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010243C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102440
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102444
  c->r[0]=c->r[3]+c->r[0]; // 80102448
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010244C
  return; // 80102450
}

// fn_80102454
void f_80102454(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102454
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102458
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010245C
  c->r[0]=c->r[4]+0x00000010u; // 80102460
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102464
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102468
  c->r[7]=0u+0x00000000u; // 8010246C
  c->r[6]=0u+0x00000000u; // 80102470
  goto L_80102490; // 80102474
L_80102478:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102478
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010247C
  c->r[0]=c->r[4]+c->r[0]; // 80102480
  W32(c->r[5]+c->r[6],c->r[0]); // 80102484
  c->r[6]=c->r[6]+0x00000004u; // 80102488
  c->r[7]=c->r[7]+0x00000001u; // 8010248C
L_80102490:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102490
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102494
  cmpu(c,0,c->r[7],c->r[0]); // 80102498
  if (crb(c,0)) { IRQCHK(c); goto L_80102478; } // 8010249C
  return; // 801024A0
}

// fn_801024A4
void f_801024A4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801024A4
  W32(c->r[5]+0x00000004u,c->r[4]); // 801024A8
  c->r[0]=c->r[4]+0x00000020u; // 801024AC
  c->r[4]=R32(c->r[3]+0x00000034u); // 801024B0
  W32(c->r[4]+0x00000020u,c->r[0]); // 801024B4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801024B8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801024BC
  c->r[0]=R32(c->r[4]+0x00000018u); // 801024C0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801024C4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801024C8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801024CC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801024D0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801024D4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801024D8
  c->r[3]=R32(c->r[4]+0x00000018u); // 801024DC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801024E0
  c->r[0]=c->r[3]+c->r[0]; // 801024E4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801024E8
  return; // 801024EC
}

// fn_801024F0
void f_801024F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801024F0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801024F4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801024F8
  c->r[0]=c->r[4]+0x00000010u; // 801024FC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102500
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102504
  c->r[7]=0u+0x00000000u; // 80102508
  c->r[6]=0u+0x00000000u; // 8010250C
  goto L_8010252C; // 80102510
L_80102514:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102514
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102518
  c->r[0]=c->r[4]+c->r[0]; // 8010251C
  W32(c->r[5]+c->r[6],c->r[0]); // 80102520
  c->r[6]=c->r[6]+0x00000004u; // 80102524
  c->r[7]=c->r[7]+0x00000001u; // 80102528
L_8010252C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010252C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102530
  cmpu(c,0,c->r[7],c->r[0]); // 80102534
  if (crb(c,0)) { IRQCHK(c); goto L_80102514; } // 80102538
  return; // 8010253C
}

// fn_80102540
void f_80102540(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102540
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102544
  c->r[0]=c->r[4]+0x00000020u; // 80102548
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010254C
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102550
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102554
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102558
  c->r[0]=R32(c->r[4]+0x00000018u); // 8010255C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102560
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102564
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102568
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8010256C
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102570
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102574
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102578
  c->r[0]=R32(c->r[4]+0x00000008u); // 8010257C
  c->r[0]=c->r[3]+c->r[0]; // 80102580
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102584
  return; // 80102588
}

// fn_8010258C
void f_8010258C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 8010258C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102590
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102594
  c->r[0]=c->r[4]+0x00000010u; // 80102598
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010259C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801025A0
  c->r[7]=0u+0x00000000u; // 801025A4
  c->r[6]=0u+0x00000000u; // 801025A8
  goto L_801025C8; // 801025AC
L_801025B0:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801025B0
  c->r[0]=R32(c->r[5]+c->r[6]); // 801025B4
  c->r[0]=c->r[4]+c->r[0]; // 801025B8
  W32(c->r[5]+c->r[6],c->r[0]); // 801025BC
  c->r[6]=c->r[6]+0x00000004u; // 801025C0
  c->r[7]=c->r[7]+0x00000001u; // 801025C4
L_801025C8:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801025C8
  c->r[0]=R32(c->r[5]+0x00000010u); // 801025CC
  cmpu(c,0,c->r[7],c->r[0]); // 801025D0
  if (crb(c,0)) { IRQCHK(c); goto L_801025B0; } // 801025D4
  return; // 801025D8
}

// fn_801025DC
void f_801025DC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801025DC
  W32(c->r[5]+0x00000004u,c->r[4]); // 801025E0
  c->r[0]=c->r[4]+0x00000020u; // 801025E4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801025E8
  W32(c->r[4]+0x00000020u,c->r[0]); // 801025EC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801025F0
  c->r[4]=R32(c->r[5]+0x00000004u); // 801025F4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801025F8
  W32(c->r[5]+0x00000014u,c->r[0]); // 801025FC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102600
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102604
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102608
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010260C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102610
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102614
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102618
  c->r[0]=c->r[3]+c->r[0]; // 8010261C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102620
  return; // 80102624
}

// fn_80102628
void f_80102628(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102628
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010262C
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102630
  c->r[0]=c->r[4]+0x00000010u; // 80102634
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102638
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 8010263C
  c->r[7]=0u+0x00000000u; // 80102640
  c->r[6]=0u+0x00000000u; // 80102644
  goto L_80102664; // 80102648
L_8010264C:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 8010264C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102650
  c->r[0]=c->r[4]+c->r[0]; // 80102654
  W32(c->r[5]+c->r[6],c->r[0]); // 80102658
  c->r[6]=c->r[6]+0x00000004u; // 8010265C
  c->r[7]=c->r[7]+0x00000001u; // 80102660
L_80102664:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102664
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102668
  cmpu(c,0,c->r[7],c->r[0]); // 8010266C
  if (crb(c,0)) { IRQCHK(c); goto L_8010264C; } // 80102670
  return; // 80102674
}

// fn_80102678
void f_80102678(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102678
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010267C
  c->r[0]=c->r[4]+0x00000020u; // 80102680
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102684
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102688
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010268C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102690
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102694
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102698
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010269C
  c->r[4]=R32(c->r[5]+0x00000004u); // 801026A0
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801026A4
  W32(c->r[5]+0x00000008u,c->r[0]); // 801026A8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801026AC
  c->r[3]=R32(c->r[4]+0x00000018u); // 801026B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801026B4
  c->r[0]=c->r[3]+c->r[0]; // 801026B8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801026BC
  return; // 801026C0
}

// fn_801026C4
void f_801026C4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801026C4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801026C8
  W32(c->r[5]+0x00000010u,c->r[0]); // 801026CC
  c->r[0]=c->r[4]+0x00000010u; // 801026D0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801026D4
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801026D8
  c->r[7]=0u+0x00000000u; // 801026DC
  c->r[6]=0u+0x00000000u; // 801026E0
  goto L_80102700; // 801026E4
L_801026E8:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801026E8
  c->r[0]=R32(c->r[5]+c->r[6]); // 801026EC
  c->r[0]=c->r[4]+c->r[0]; // 801026F0
  W32(c->r[5]+c->r[6],c->r[0]); // 801026F4
  c->r[6]=c->r[6]+0x00000004u; // 801026F8
  c->r[7]=c->r[7]+0x00000001u; // 801026FC
L_80102700:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102700
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102704
  cmpu(c,0,c->r[7],c->r[0]); // 80102708
  if (crb(c,0)) { IRQCHK(c); goto L_801026E8; } // 8010270C
  return; // 80102710
}

// fn_80102714
void f_80102714(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102714
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102718
  c->r[0]=c->r[4]+0x00000020u; // 8010271C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102720
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102724
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102728
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010272C
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102730
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102734
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102738
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010273C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102740
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102744
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102748
  c->r[3]=R32(c->r[4]+0x00000018u); // 8010274C
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102750
  c->r[0]=c->r[3]+c->r[0]; // 80102754
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102758
  return; // 8010275C
}

// fn_80102760
void f_80102760(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102760
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102764
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102768
  c->r[0]=c->r[4]+0x00000010u; // 8010276C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102770
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102774
  c->r[7]=0u+0x00000000u; // 80102778
  c->r[6]=0u+0x00000000u; // 8010277C
  goto L_8010279C; // 80102780
L_80102784:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102784
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102788
  c->r[0]=c->r[4]+c->r[0]; // 8010278C
  W32(c->r[5]+c->r[6],c->r[0]); // 80102790
  c->r[6]=c->r[6]+0x00000004u; // 80102794
  c->r[7]=c->r[7]+0x00000001u; // 80102798
L_8010279C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010279C
  c->r[0]=R32(c->r[5]+0x00000010u); // 801027A0
  cmpu(c,0,c->r[7],c->r[0]); // 801027A4
  if (crb(c,0)) { IRQCHK(c); goto L_80102784; } // 801027A8
  return; // 801027AC
}

// fn_801027B0
void f_801027B0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801027B0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801027B4
  c->r[0]=c->r[4]+0x00000020u; // 801027B8
  c->r[4]=R32(c->r[3]+0x00000034u); // 801027BC
  W32(c->r[4]+0x00000020u,c->r[0]); // 801027C0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801027C4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801027C8
  c->r[0]=R32(c->r[4]+0x00000018u); // 801027CC
  W32(c->r[5]+0x00000014u,c->r[0]); // 801027D0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801027D4
  c->r[4]=R32(c->r[5]+0x00000004u); // 801027D8
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801027DC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801027E0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801027E4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801027E8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801027EC
  c->r[0]=c->r[3]+c->r[0]; // 801027F0
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801027F4
  return; // 801027F8
}

// fn_801027FC
void f_801027FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801027FC
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102800
  W32(c->r[5]+0x00000010u,c->r[0]); // 80102804
  c->r[0]=c->r[4]+0x00000010u; // 80102808
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010280C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102810
  c->r[7]=0u+0x00000000u; // 80102814
  c->r[6]=0u+0x00000000u; // 80102818
  goto L_80102838; // 8010281C
L_80102820:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102820
  c->r[0]=R32(c->r[5]+c->r[6]); // 80102824
  c->r[0]=c->r[4]+c->r[0]; // 80102828
  W32(c->r[5]+c->r[6],c->r[0]); // 8010282C
  c->r[6]=c->r[6]+0x00000004u; // 80102830
  c->r[7]=c->r[7]+0x00000001u; // 80102834
L_80102838:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102838
  c->r[0]=R32(c->r[5]+0x00000010u); // 8010283C
  cmpu(c,0,c->r[7],c->r[0]); // 80102840
  if (crb(c,0)) { IRQCHK(c); goto L_80102820; } // 80102844
  return; // 80102848
}

// fn_8010284C
void f_8010284C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010284C
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102850
  c->r[0]=c->r[4]+0x00000020u; // 80102854
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102858
  W32(c->r[4]+0x00000020u,c->r[0]); // 8010285C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102860
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102864
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102868
  W32(c->r[5]+0x00000014u,c->r[0]); // 8010286C
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102870
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102874
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102878
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010287C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102880
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102884
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102888
  c->r[0]=c->r[3]+c->r[0]; // 8010288C
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 80102890
  return; // 80102894
}

// fn_80102898
void f_80102898(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102898
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010289C
  W32(c->r[5]+0x00000010u,c->r[0]); // 801028A0
  c->r[0]=c->r[4]+0x00000010u; // 801028A4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801028A8
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801028AC
  c->r[7]=0u+0x00000000u; // 801028B0
  c->r[6]=0u+0x00000000u; // 801028B4
  goto L_801028D4; // 801028B8
L_801028BC:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801028BC
  c->r[0]=R32(c->r[5]+c->r[6]); // 801028C0
  c->r[0]=c->r[4]+c->r[0]; // 801028C4
  W32(c->r[5]+c->r[6],c->r[0]); // 801028C8
  c->r[6]=c->r[6]+0x00000004u; // 801028CC
  c->r[7]=c->r[7]+0x00000001u; // 801028D0
L_801028D4:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 801028D4
  c->r[0]=R32(c->r[5]+0x00000010u); // 801028D8
  cmpu(c,0,c->r[7],c->r[0]); // 801028DC
  if (crb(c,0)) { IRQCHK(c); goto L_801028BC; } // 801028E0
  return; // 801028E4
}

// fn_801028E8
void f_801028E8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 801028E8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801028EC
  c->r[0]=c->r[4]+0x00000020u; // 801028F0
  c->r[4]=R32(c->r[3]+0x00000034u); // 801028F4
  W32(c->r[4]+0x00000020u,c->r[0]); // 801028F8
  c->r[5]=R32(c->r[3]+0x00000034u); // 801028FC
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102900
  c->r[0]=R32(c->r[4]+0x00000018u); // 80102904
  W32(c->r[5]+0x00000014u,c->r[0]); // 80102908
  c->r[5]=R32(c->r[3]+0x00000034u); // 8010290C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80102910
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 80102914
  W32(c->r[5]+0x00000008u,c->r[0]); // 80102918
  c->r[4]=R32(c->r[3]+0x00000034u); // 8010291C
  c->r[3]=R32(c->r[4]+0x00000018u); // 80102920
  c->r[0]=R32(c->r[4]+0x00000008u); // 80102924
  c->r[0]=c->r[3]+c->r[0]; // 80102928
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 8010292C
  return; // 80102930
}

// fn_80102934
void f_80102934(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 80102934
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102938
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010293C
  c->r[0]=c->r[4]+0x00000010u; // 80102940
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102944
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 80102948
  c->r[7]=0u+0x00000000u; // 8010294C
  c->r[6]=0u+0x00000000u; // 80102950
  goto L_80102970; // 80102954
L_80102958:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 80102958
  c->r[0]=R32(c->r[5]+c->r[6]); // 8010295C
  c->r[0]=c->r[4]+c->r[0]; // 80102960
  W32(c->r[5]+c->r[6],c->r[0]); // 80102964
  c->r[6]=c->r[6]+0x00000004u; // 80102968
  c->r[7]=c->r[7]+0x00000001u; // 8010296C
L_80102970:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102970
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102974
  cmpu(c,0,c->r[7],c->r[0]); // 80102978
  if (crb(c,0)) { IRQCHK(c); goto L_80102958; } // 8010297C
  return; // 80102980
}

// fn_80102984
void f_80102984(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102984
  W32(c->r[5]+0x00000004u,c->r[4]); // 80102988
  c->r[0]=c->r[4]+0x00000020u; // 8010298C
  c->r[4]=R32(c->r[3]+0x00000034u); // 80102990
  W32(c->r[4]+0x00000020u,c->r[0]); // 80102994
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102998
  c->r[4]=R32(c->r[5]+0x00000004u); // 8010299C
  c->r[0]=R32(c->r[4]+0x00000018u); // 801029A0
  W32(c->r[5]+0x00000014u,c->r[0]); // 801029A4
  c->r[5]=R32(c->r[3]+0x00000034u); // 801029A8
  c->r[4]=R32(c->r[5]+0x00000004u); // 801029AC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801029B0
  W32(c->r[5]+0x00000008u,c->r[0]); // 801029B4
  c->r[4]=R32(c->r[3]+0x00000034u); // 801029B8
  c->r[3]=R32(c->r[4]+0x00000018u); // 801029BC
  c->r[0]=R32(c->r[4]+0x00000008u); // 801029C0
  c->r[0]=c->r[3]+c->r[0]; // 801029C4
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 801029C8
  return; // 801029CC
}

// fn_801029D0
void f_801029D0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000004u); // 801029D0
  c->r[5]=R32(c->r[3]+0x00000034u); // 801029D4
  W32(c->r[5]+0x00000010u,c->r[0]); // 801029D8
  c->r[0]=c->r[4]+0x00000010u; // 801029DC
  c->r[5]=R32(c->r[3]+0x00000034u); // 801029E0
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 801029E4
  c->r[7]=0u+0x00000000u; // 801029E8
  c->r[6]=0u+0x00000000u; // 801029EC
  goto L_80102A0C; // 801029F0
L_801029F4:;
  c->r[5]=R32(c->r[5]+0x0000000Cu); // 801029F4
  c->r[0]=R32(c->r[5]+c->r[6]); // 801029F8
  c->r[0]=c->r[4]+c->r[0]; // 801029FC
  W32(c->r[5]+c->r[6],c->r[0]); // 80102A00
  c->r[6]=c->r[6]+0x00000004u; // 80102A04
  c->r[7]=c->r[7]+0x00000001u; // 80102A08
L_80102A0C:;
  c->r[5]=R32(c->r[3]+0x00000034u); // 80102A0C
  c->r[0]=R32(c->r[5]+0x00000010u); // 80102A10
  cmpu(c,0,c->r[7],c->r[0]); // 80102A14
  if (crb(c,0)) { IRQCHK(c); goto L_801029F4; } // 80102A18
  return; // 80102A1C
}

// dtor_80102A20
void f_80102A20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102A20
  c->r[0]=c->lr; // 80102A24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102A28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102A2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102A30
  c->r[30]=c->r[3]|c->r[3]; // 80102A34
  c->r[31]=c->r[4]|c->r[4]; // 80102A38
  cmps(c,0,(int32_t)c->r[3],0); // 80102A3C
  if (crb(c,2)) { goto L_80102A60; } // 80102A40
  c->r[4]=0u+0x00000000u; // 80102A44
  c->lr=0x80102A4Cu; f_800F49B8(c); // 80102A48
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102A4C
  cmps(c,0,(int32_t)c->r[0],0); // 80102A50
  if (!crb(c,1)) { goto L_80102A60; } // 80102A54
  c->r[3]=c->r[30]|c->r[30]; // 80102A58
  c->lr=0x80102A60u; f_80047B20(c); // 80102A5C
L_80102A60:;
  c->r[3]=c->r[30]|c->r[30]; // 80102A60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102A64
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102A68
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102A6C
  c->lr=c->r[0]; // 80102A70
  c->r[1]=c->r[1]+0x00000010u; // 80102A74
  return; // 80102A78
}

// fn_80102A7C
void f_80102A7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102A7C
  c->r[0]=c->lr; // 80102A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102A88
  c->r[31]=c->r[3]|c->r[3]; // 80102A8C
  c->lr=0x80102A94u; f_800F6B6C(c); // 80102A90
  c->r[3]=0u+0x80480000u; // 80102A94
  c->r[0]=c->r[3]+0x00002C30u; // 80102A98
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102A9C
  c->r[3]=c->r[31]|c->r[31]; // 80102AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102AA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102AA8
  c->lr=c->r[0]; // 80102AAC
  c->r[1]=c->r[1]+0x00000010u; // 80102AB0
  return; // 80102AB4
}

// dtor_80102AB8
void f_80102AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102AB8
  c->r[0]=c->lr; // 80102ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102AC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102AC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102AC8
  c->r[30]=c->r[3]|c->r[3]; // 80102ACC
  c->r[31]=c->r[4]|c->r[4]; // 80102AD0
  cmps(c,0,(int32_t)c->r[3],0); // 80102AD4
  if (crb(c,2)) { goto L_80102AF8; } // 80102AD8
  c->r[4]=0u+0x00000000u; // 80102ADC
  c->lr=0x80102AE4u; f_800F4A34(c); // 80102AE0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80102AE8
  if (!crb(c,1)) { goto L_80102AF8; } // 80102AEC
  c->r[3]=c->r[30]|c->r[30]; // 80102AF0
  c->lr=0x80102AF8u; f_80047B20(c); // 80102AF4
L_80102AF8:;
  c->r[3]=c->r[30]|c->r[30]; // 80102AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102AFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102B00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102B04
  c->lr=c->r[0]; // 80102B08
  c->r[1]=c->r[1]+0x00000010u; // 80102B0C
  return; // 80102B10
}

// fn_80102B14
void f_80102B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102B14
  c->r[0]=c->lr; // 80102B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102B20
  c->r[31]=c->r[3]|c->r[3]; // 80102B24
  c->lr=0x80102B2Cu; f_800F6BB4(c); // 80102B28
  c->r[3]=0u+0x80480000u; // 80102B2C
  c->r[0]=c->r[3]+0x00002630u; // 80102B30
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102B34
  c->r[3]=c->r[31]|c->r[31]; // 80102B38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102B3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102B40
  c->lr=c->r[0]; // 80102B44
  c->r[1]=c->r[1]+0x00000010u; // 80102B48
  return; // 80102B4C
}

// dtor_80102B50
void f_80102B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102B50
  c->r[0]=c->lr; // 80102B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102B5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102B60
  c->r[30]=c->r[3]|c->r[3]; // 80102B64
  c->r[31]=c->r[4]|c->r[4]; // 80102B68
  cmps(c,0,(int32_t)c->r[3],0); // 80102B6C
  if (crb(c,2)) { goto L_80102B90; } // 80102B70
  c->r[4]=0u+0x00000000u; // 80102B74
  c->lr=0x80102B7Cu; f_800F4AB0(c); // 80102B78
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102B7C
  cmps(c,0,(int32_t)c->r[0],0); // 80102B80
  if (!crb(c,1)) { goto L_80102B90; } // 80102B84
  c->r[3]=c->r[30]|c->r[30]; // 80102B88
  c->lr=0x80102B90u; f_80047B20(c); // 80102B8C
L_80102B90:;
  c->r[3]=c->r[30]|c->r[30]; // 80102B90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102B94
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102B98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102B9C
  c->lr=c->r[0]; // 80102BA0
  c->r[1]=c->r[1]+0x00000010u; // 80102BA4
  return; // 80102BA8
}

// fn_80102BAC
void f_80102BAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102BAC
  c->r[0]=c->lr; // 80102BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102BB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102BB8
  c->r[31]=c->r[3]|c->r[3]; // 80102BBC
  c->lr=0x80102BC4u; f_800F6BFC(c); // 80102BC0
  c->r[3]=0u+0x80480000u; // 80102BC4
  c->r[0]=c->r[3]+0xFFFFFD10u; // 80102BC8
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102BCC
  c->r[3]=c->r[31]|c->r[31]; // 80102BD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102BD8
  c->lr=c->r[0]; // 80102BDC
  c->r[1]=c->r[1]+0x00000010u; // 80102BE0
  return; // 80102BE4
}

// dtor_80102BE8
void f_80102BE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102BE8
  c->r[0]=c->lr; // 80102BEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102BF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102BF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102BF8
  c->r[30]=c->r[3]|c->r[3]; // 80102BFC
  c->r[31]=c->r[4]|c->r[4]; // 80102C00
  cmps(c,0,(int32_t)c->r[3],0); // 80102C04
  if (crb(c,2)) { goto L_80102C28; } // 80102C08
  c->r[4]=0u+0x00000000u; // 80102C0C
  c->lr=0x80102C14u; f_800F4B2C(c); // 80102C10
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102C14
  cmps(c,0,(int32_t)c->r[0],0); // 80102C18
  if (!crb(c,1)) { goto L_80102C28; } // 80102C1C
  c->r[3]=c->r[30]|c->r[30]; // 80102C20
  c->lr=0x80102C28u; f_80047B20(c); // 80102C24
L_80102C28:;
  c->r[3]=c->r[30]|c->r[30]; // 80102C28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102C2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102C30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102C34
  c->lr=c->r[0]; // 80102C38
  c->r[1]=c->r[1]+0x00000010u; // 80102C3C
  return; // 80102C40
}

// fn_80102C44
void f_80102C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102C44
  c->r[0]=c->lr; // 80102C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102C50
  c->r[31]=c->r[3]|c->r[3]; // 80102C54
  c->lr=0x80102C5Cu; f_800F6C44(c); // 80102C58
  c->r[3]=0u+0x80480000u; // 80102C5C
  c->r[0]=c->r[3]+0x00003C78u; // 80102C60
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102C64
  c->r[3]=c->r[31]|c->r[31]; // 80102C68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102C70
  c->lr=c->r[0]; // 80102C74
  c->r[1]=c->r[1]+0x00000010u; // 80102C78
  return; // 80102C7C
}

// dtor_80102C80
void f_80102C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102C80
  c->r[0]=c->lr; // 80102C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102C8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102C90
  c->r[30]=c->r[3]|c->r[3]; // 80102C94
  c->r[31]=c->r[4]|c->r[4]; // 80102C98
  cmps(c,0,(int32_t)c->r[3],0); // 80102C9C
  if (crb(c,2)) { goto L_80102CC0; } // 80102CA0
  c->r[4]=0u+0x00000000u; // 80102CA4
  c->lr=0x80102CACu; f_800F4BA8(c); // 80102CA8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102CAC
  cmps(c,0,(int32_t)c->r[0],0); // 80102CB0
  if (!crb(c,1)) { goto L_80102CC0; } // 80102CB4
  c->r[3]=c->r[30]|c->r[30]; // 80102CB8
  c->lr=0x80102CC0u; f_80047B20(c); // 80102CBC
L_80102CC0:;
  c->r[3]=c->r[30]|c->r[30]; // 80102CC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102CC4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102CCC
  c->lr=c->r[0]; // 80102CD0
  c->r[1]=c->r[1]+0x00000010u; // 80102CD4
  return; // 80102CD8
}

// fn_80102CDC
void f_80102CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102CDC
  c->r[0]=c->lr; // 80102CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102CE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102CE8
  c->r[31]=c->r[3]|c->r[3]; // 80102CEC
  c->lr=0x80102CF4u; f_800F6C8C(c); // 80102CF0
  c->r[3]=0u+0x80480000u; // 80102CF4
  c->r[0]=c->r[3]+0x00003C30u; // 80102CF8
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102CFC
  c->r[3]=c->r[31]|c->r[31]; // 80102D00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102D04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102D08
  c->lr=c->r[0]; // 80102D0C
  c->r[1]=c->r[1]+0x00000010u; // 80102D10
  return; // 80102D14
}

// dtor_80102D18
void f_80102D18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102D18
  c->r[0]=c->lr; // 80102D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102D24
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102D28
  c->r[30]=c->r[3]|c->r[3]; // 80102D2C
  c->r[31]=c->r[4]|c->r[4]; // 80102D30
  cmps(c,0,(int32_t)c->r[3],0); // 80102D34
  if (crb(c,2)) { goto L_80102D58; } // 80102D38
  c->r[4]=0u+0x00000000u; // 80102D3C
  c->lr=0x80102D44u; f_800F4C24(c); // 80102D40
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102D44
  cmps(c,0,(int32_t)c->r[0],0); // 80102D48
  if (!crb(c,1)) { goto L_80102D58; } // 80102D4C
  c->r[3]=c->r[30]|c->r[30]; // 80102D50
  c->lr=0x80102D58u; f_80047B20(c); // 80102D54
L_80102D58:;
  c->r[3]=c->r[30]|c->r[30]; // 80102D58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102D5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102D64
  c->lr=c->r[0]; // 80102D68
  c->r[1]=c->r[1]+0x00000010u; // 80102D6C
  return; // 80102D70
}

// fn_80102D74
void f_80102D74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102D74
  c->r[0]=c->lr; // 80102D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102D7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102D80
  c->r[31]=c->r[3]|c->r[3]; // 80102D84
  c->lr=0x80102D8Cu; f_800F6CD4(c); // 80102D88
  c->r[3]=0u+0x80480000u; // 80102D8C
  c->r[0]=c->r[3]+0x00002D00u; // 80102D90
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102D94
  c->r[3]=c->r[31]|c->r[31]; // 80102D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102D9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102DA0
  c->lr=c->r[0]; // 80102DA4
  c->r[1]=c->r[1]+0x00000010u; // 80102DA8
  return; // 80102DAC
}

// dtor_80102DB0
void f_80102DB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102DB0
  c->r[0]=c->lr; // 80102DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102DBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102DC0
  c->r[30]=c->r[3]|c->r[3]; // 80102DC4
  c->r[31]=c->r[4]|c->r[4]; // 80102DC8
  cmps(c,0,(int32_t)c->r[3],0); // 80102DCC
  if (crb(c,2)) { goto L_80102DF0; } // 80102DD0
  c->r[4]=0u+0x00000000u; // 80102DD4
  c->lr=0x80102DDCu; f_800F4CA0(c); // 80102DD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102DDC
  cmps(c,0,(int32_t)c->r[0],0); // 80102DE0
  if (!crb(c,1)) { goto L_80102DF0; } // 80102DE4
  c->r[3]=c->r[30]|c->r[30]; // 80102DE8
  c->lr=0x80102DF0u; f_80047B20(c); // 80102DEC
L_80102DF0:;
  c->r[3]=c->r[30]|c->r[30]; // 80102DF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102DF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102DFC
  c->lr=c->r[0]; // 80102E00
  c->r[1]=c->r[1]+0x00000010u; // 80102E04
  return; // 80102E08
}

// dtor_80102E0C
void f_80102E0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102E0C
  c->r[0]=c->lr; // 80102E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102E14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102E18
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102E1C
  c->r[30]=c->r[3]|c->r[3]; // 80102E20
  c->r[31]=c->r[4]|c->r[4]; // 80102E24
  cmps(c,0,(int32_t)c->r[3],0); // 80102E28
  if (crb(c,2)) { goto L_80102E4C; } // 80102E2C
  c->r[4]=0u+0x00000000u; // 80102E30
  c->lr=0x80102E38u; f_800F4D1C(c); // 80102E34
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102E38
  cmps(c,0,(int32_t)c->r[0],0); // 80102E3C
  if (!crb(c,1)) { goto L_80102E4C; } // 80102E40
  c->r[3]=c->r[30]|c->r[30]; // 80102E44
  c->lr=0x80102E4Cu; f_80047B20(c); // 80102E48
L_80102E4C:;
  c->r[3]=c->r[30]|c->r[30]; // 80102E4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102E50
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102E54
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102E58
  c->lr=c->r[0]; // 80102E5C
  c->r[1]=c->r[1]+0x00000010u; // 80102E60
  return; // 80102E64
}

// fn_80102E68
void f_80102E68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102E68
  c->r[0]=c->lr; // 80102E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102E74
  c->r[31]=c->r[3]|c->r[3]; // 80102E78
  c->lr=0x80102E80u; f_800F6D1C(c); // 80102E7C
  c->r[3]=0u+0x80470000u; // 80102E80
  c->r[0]=c->r[3]+0xFFFFEEC0u; // 80102E84
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102E88
  c->r[3]=c->r[31]|c->r[31]; // 80102E8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102E94
  c->lr=c->r[0]; // 80102E98
  c->r[1]=c->r[1]+0x00000010u; // 80102E9C
  return; // 80102EA0
}

// dtor_80102EA4
void f_80102EA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102EA4
  c->r[0]=c->lr; // 80102EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102EAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102EB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102EB4
  c->r[30]=c->r[3]|c->r[3]; // 80102EB8
  c->r[31]=c->r[4]|c->r[4]; // 80102EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80102EC0
  if (crb(c,2)) { goto L_80102EE4; } // 80102EC4
  c->r[4]=0u+0x00000000u; // 80102EC8
  c->lr=0x80102ED0u; f_800F4D98(c); // 80102ECC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102ED0
  cmps(c,0,(int32_t)c->r[0],0); // 80102ED4
  if (!crb(c,1)) { goto L_80102EE4; } // 80102ED8
  c->r[3]=c->r[30]|c->r[30]; // 80102EDC
  c->lr=0x80102EE4u; f_80047B20(c); // 80102EE0
L_80102EE4:;
  c->r[3]=c->r[30]|c->r[30]; // 80102EE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102EE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102EF0
  c->lr=c->r[0]; // 80102EF4
  c->r[1]=c->r[1]+0x00000010u; // 80102EF8
  return; // 80102EFC
}

// fn_80102F00
void f_80102F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102F00
  c->r[0]=c->lr; // 80102F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102F08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102F0C
  c->r[31]=c->r[3]|c->r[3]; // 80102F10
  c->lr=0x80102F18u; f_800F6D64(c); // 80102F14
  c->r[3]=0u+0x80480000u; // 80102F18
  c->r[0]=c->r[3]+0xFFFFFCC8u; // 80102F1C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102F20
  c->r[3]=c->r[31]|c->r[31]; // 80102F24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102F28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102F2C
  c->lr=c->r[0]; // 80102F30
  c->r[1]=c->r[1]+0x00000010u; // 80102F34
  return; // 80102F38
}

// dtor_80102F3C
void f_80102F3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102F3C
  c->r[0]=c->lr; // 80102F40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102F44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102F48
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102F4C
  c->r[30]=c->r[3]|c->r[3]; // 80102F50
  c->r[31]=c->r[4]|c->r[4]; // 80102F54
  cmps(c,0,(int32_t)c->r[3],0); // 80102F58
  if (crb(c,2)) { goto L_80102F7C; } // 80102F5C
  c->r[4]=0u+0x00000000u; // 80102F60
  c->lr=0x80102F68u; f_800F4E14(c); // 80102F64
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80102F68
  cmps(c,0,(int32_t)c->r[0],0); // 80102F6C
  if (!crb(c,1)) { goto L_80102F7C; } // 80102F70
  c->r[3]=c->r[30]|c->r[30]; // 80102F74
  c->lr=0x80102F7Cu; f_80047B20(c); // 80102F78
L_80102F7C:;
  c->r[3]=c->r[30]|c->r[30]; // 80102F7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102F80
  c->r[30]=R32(c->r[1]+0x00000008u); // 80102F84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102F88
  c->lr=c->r[0]; // 80102F8C
  c->r[1]=c->r[1]+0x00000010u; // 80102F90
  return; // 80102F94
}

// fn_80102F98
void f_80102F98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102F98
  c->r[0]=c->lr; // 80102F9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102FA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102FA4
  c->r[31]=c->r[3]|c->r[3]; // 80102FA8
  c->lr=0x80102FB0u; f_800F6DAC(c); // 80102FAC
  c->r[3]=0u+0x80470000u; // 80102FB0
  c->r[0]=c->r[3]+0xFFFFF098u; // 80102FB4
  W32(c->r[31]+0x00000030u,c->r[0]); // 80102FB8
  c->r[3]=c->r[31]|c->r[31]; // 80102FBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80102FC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80102FC4
  c->lr=c->r[0]; // 80102FC8
  c->r[1]=c->r[1]+0x00000010u; // 80102FCC
  return; // 80102FD0
}

// dtor_80102FD4
void f_80102FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102FD4
  c->r[0]=c->lr; // 80102FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80102FDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102FE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80102FE4
  c->r[30]=c->r[3]|c->r[3]; // 80102FE8
  c->r[31]=c->r[4]|c->r[4]; // 80102FEC
  cmps(c,0,(int32_t)c->r[3],0); // 80102FF0
  if (crb(c,2)) { goto L_80103014; } // 80102FF4
  c->r[4]=0u+0x00000000u; // 80102FF8
  c->lr=0x80103000u; f_800F4E90(c); // 80102FFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103000
  cmps(c,0,(int32_t)c->r[0],0); // 80103004
  if (!crb(c,1)) { goto L_80103014; } // 80103008
  c->r[3]=c->r[30]|c->r[30]; // 8010300C
  c->lr=0x80103014u; f_80047B20(c); // 80103010
L_80103014:;
  c->r[3]=c->r[30]|c->r[30]; // 80103014
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103018
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010301C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103020
  c->lr=c->r[0]; // 80103024
  c->r[1]=c->r[1]+0x00000010u; // 80103028
  return; // 8010302C
}

// fn_80103030
void f_80103030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103030
  c->r[0]=c->lr; // 80103034
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103038
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010303C
  c->r[31]=c->r[3]|c->r[3]; // 80103040
  c->lr=0x80103048u; f_800F6DF4(c); // 80103044
  c->r[3]=0u+0x80470000u; // 80103048
  c->r[0]=c->r[3]+0x00001190u; // 8010304C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103050
  c->r[3]=c->r[31]|c->r[31]; // 80103054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103058
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010305C
  c->lr=c->r[0]; // 80103060
  c->r[1]=c->r[1]+0x00000010u; // 80103064
  return; // 80103068
}

// dtor_8010306C
void f_8010306C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010306C
  c->r[0]=c->lr; // 80103070
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103078
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010307C
  c->r[30]=c->r[3]|c->r[3]; // 80103080
  c->r[31]=c->r[4]|c->r[4]; // 80103084
  cmps(c,0,(int32_t)c->r[3],0); // 80103088
  if (crb(c,2)) { goto L_801030AC; } // 8010308C
  c->r[4]=0u+0x00000000u; // 80103090
  c->lr=0x80103098u; f_800F4F0C(c); // 80103094
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103098
  cmps(c,0,(int32_t)c->r[0],0); // 8010309C
  if (!crb(c,1)) { goto L_801030AC; } // 801030A0
  c->r[3]=c->r[30]|c->r[30]; // 801030A4
  c->lr=0x801030ACu; f_80047B20(c); // 801030A8
L_801030AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801030AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801030B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801030B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801030B8
  c->lr=c->r[0]; // 801030BC
  c->r[1]=c->r[1]+0x00000010u; // 801030C0
  return; // 801030C4
}

// fn_801030C8
void f_801030C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801030C8
  c->r[0]=c->lr; // 801030CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801030D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801030D4
  c->r[31]=c->r[3]|c->r[3]; // 801030D8
  c->lr=0x801030E0u; f_800F6E3C(c); // 801030DC
  c->r[3]=0u+0x80470000u; // 801030E0
  c->r[0]=c->r[3]+0xFFFFDB88u; // 801030E4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801030E8
  c->r[3]=c->r[31]|c->r[31]; // 801030EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801030F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801030F4
  c->lr=c->r[0]; // 801030F8
  c->r[1]=c->r[1]+0x00000010u; // 801030FC
  return; // 80103100
}

// dtor_80103104
void f_80103104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103104
  c->r[0]=c->lr; // 80103108
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010310C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103110
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103114
  c->r[30]=c->r[3]|c->r[3]; // 80103118
  c->r[31]=c->r[4]|c->r[4]; // 8010311C
  cmps(c,0,(int32_t)c->r[3],0); // 80103120
  if (crb(c,2)) { goto L_80103144; } // 80103124
  c->r[4]=0u+0x00000000u; // 80103128
  c->lr=0x80103130u; f_800F4F88(c); // 8010312C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103130
  cmps(c,0,(int32_t)c->r[0],0); // 80103134
  if (!crb(c,1)) { goto L_80103144; } // 80103138
  c->r[3]=c->r[30]|c->r[30]; // 8010313C
  c->lr=0x80103144u; f_80047B20(c); // 80103140
L_80103144:;
  c->r[3]=c->r[30]|c->r[30]; // 80103144
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103148
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010314C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103150
  c->lr=c->r[0]; // 80103154
  c->r[1]=c->r[1]+0x00000010u; // 80103158
  return; // 8010315C
}

// fn_80103160
void f_80103160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103160
  c->r[0]=c->lr; // 80103164
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010316C
  c->r[31]=c->r[3]|c->r[3]; // 80103170
  c->lr=0x80103178u; f_800F6E84(c); // 80103174
  c->r[3]=0u+0x80470000u; // 80103178
  c->r[0]=c->r[3]+0xFFFFD990u; // 8010317C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103180
  c->r[3]=c->r[31]|c->r[31]; // 80103184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103188
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010318C
  c->lr=c->r[0]; // 80103190
  c->r[1]=c->r[1]+0x00000010u; // 80103194
  return; // 80103198
}

// dtor_8010319C
void f_8010319C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010319C
  c->r[0]=c->lr; // 801031A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801031A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801031A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801031AC
  c->r[30]=c->r[3]|c->r[3]; // 801031B0
  c->r[31]=c->r[4]|c->r[4]; // 801031B4
  cmps(c,0,(int32_t)c->r[3],0); // 801031B8
  if (crb(c,2)) { goto L_801031DC; } // 801031BC
  c->r[4]=0u+0x00000000u; // 801031C0
  c->lr=0x801031C8u; f_800F5004(c); // 801031C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801031C8
  cmps(c,0,(int32_t)c->r[0],0); // 801031CC
  if (!crb(c,1)) { goto L_801031DC; } // 801031D0
  c->r[3]=c->r[30]|c->r[30]; // 801031D4
  c->lr=0x801031DCu; f_80047B20(c); // 801031D8
L_801031DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801031DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801031E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801031E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801031E8
  c->lr=c->r[0]; // 801031EC
  c->r[1]=c->r[1]+0x00000010u; // 801031F0
  return; // 801031F4
}

// fn_801031F8
void f_801031F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801031F8
  c->r[0]=c->lr; // 801031FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103200
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103204
  c->r[31]=c->r[3]|c->r[3]; // 80103208
  c->lr=0x80103210u; f_800F6ECC(c); // 8010320C
  c->r[3]=0u+0x80470000u; // 80103210
  c->r[0]=c->r[3]+0xFFFFD948u; // 80103214
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103218
  c->r[3]=c->r[31]|c->r[31]; // 8010321C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103220
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103224
  c->lr=c->r[0]; // 80103228
  c->r[1]=c->r[1]+0x00000010u; // 8010322C
  return; // 80103230
}

// dtor_80103234
void f_80103234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103234
  c->r[0]=c->lr; // 80103238
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010323C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103240
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103244
  c->r[30]=c->r[3]|c->r[3]; // 80103248
  c->r[31]=c->r[4]|c->r[4]; // 8010324C
  cmps(c,0,(int32_t)c->r[3],0); // 80103250
  if (crb(c,2)) { goto L_80103274; } // 80103254
  c->r[4]=0u+0x00000000u; // 80103258
  c->lr=0x80103260u; f_800F5080(c); // 8010325C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103260
  cmps(c,0,(int32_t)c->r[0],0); // 80103264
  if (!crb(c,1)) { goto L_80103274; } // 80103268
  c->r[3]=c->r[30]|c->r[30]; // 8010326C
  c->lr=0x80103274u; f_80047B20(c); // 80103270
L_80103274:;
  c->r[3]=c->r[30]|c->r[30]; // 80103274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103278
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010327C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103280
  c->lr=c->r[0]; // 80103284
  c->r[1]=c->r[1]+0x00000010u; // 80103288
  return; // 8010328C
}

// fn_80103290
void f_80103290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103290
  c->r[0]=c->lr; // 80103294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010329C
  c->r[31]=c->r[3]|c->r[3]; // 801032A0
  c->lr=0x801032A8u; f_800F6F14(c); // 801032A4
  c->r[3]=0u+0x80470000u; // 801032A8
  c->r[0]=c->r[3]+0xFFFFDB40u; // 801032AC
  W32(c->r[31]+0x00000030u,c->r[0]); // 801032B0
  c->r[3]=c->r[31]|c->r[31]; // 801032B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801032B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801032BC
  c->lr=c->r[0]; // 801032C0
  c->r[1]=c->r[1]+0x00000010u; // 801032C4
  return; // 801032C8
}

// dtor_801032CC
void f_801032CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801032CC
  c->r[0]=c->lr; // 801032D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801032D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801032D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801032DC
  c->r[30]=c->r[3]|c->r[3]; // 801032E0
  c->r[31]=c->r[4]|c->r[4]; // 801032E4
  cmps(c,0,(int32_t)c->r[3],0); // 801032E8
  if (crb(c,2)) { goto L_8010330C; } // 801032EC
  c->r[4]=0u+0x00000000u; // 801032F0
  c->lr=0x801032F8u; f_800F50FC(c); // 801032F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801032F8
  cmps(c,0,(int32_t)c->r[0],0); // 801032FC
  if (!crb(c,1)) { goto L_8010330C; } // 80103300
  c->r[3]=c->r[30]|c->r[30]; // 80103304
  c->lr=0x8010330Cu; f_80047B20(c); // 80103308
L_8010330C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010330C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103310
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103314
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103318
  c->lr=c->r[0]; // 8010331C
  c->r[1]=c->r[1]+0x00000010u; // 80103320
  return; // 80103324
}

// fn_80103328
void f_80103328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103328
  c->r[0]=c->lr; // 8010332C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103334
  c->r[31]=c->r[3]|c->r[3]; // 80103338
  c->lr=0x80103340u; f_800F6F5C(c); // 8010333C
  c->r[3]=0u+0x80470000u; // 80103340
  c->r[0]=c->r[3]+0xFFFFDAF8u; // 80103344
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103348
  c->r[3]=c->r[31]|c->r[31]; // 8010334C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103350
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103354
  c->lr=c->r[0]; // 80103358
  c->r[1]=c->r[1]+0x00000010u; // 8010335C
  return; // 80103360
}

// dtor_80103364
void f_80103364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103364
  c->r[0]=c->lr; // 80103368
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010336C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103370
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103374
  c->r[30]=c->r[3]|c->r[3]; // 80103378
  c->r[31]=c->r[4]|c->r[4]; // 8010337C
  cmps(c,0,(int32_t)c->r[3],0); // 80103380
  if (crb(c,2)) { goto L_801033A4; } // 80103384
  c->r[4]=0u+0x00000000u; // 80103388
  c->lr=0x80103390u; f_800F5178(c); // 8010338C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103390
  cmps(c,0,(int32_t)c->r[0],0); // 80103394
  if (!crb(c,1)) { goto L_801033A4; } // 80103398
  c->r[3]=c->r[30]|c->r[30]; // 8010339C
  c->lr=0x801033A4u; f_80047B20(c); // 801033A0
L_801033A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801033A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801033A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801033AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801033B0
  c->lr=c->r[0]; // 801033B4
  c->r[1]=c->r[1]+0x00000010u; // 801033B8
  return; // 801033BC
}

// fn_801033C0
void f_801033C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801033C0
  c->r[0]=c->lr; // 801033C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801033C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801033CC
  c->r[31]=c->r[3]|c->r[3]; // 801033D0
  c->lr=0x801033D8u; f_800F6FA4(c); // 801033D4
  c->r[3]=0u+0x80480000u; // 801033D8
  c->r[0]=c->r[3]+0x00003CC0u; // 801033DC
  W32(c->r[31]+0x00000030u,c->r[0]); // 801033E0
  c->r[3]=c->r[31]|c->r[31]; // 801033E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801033E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801033EC
  c->lr=c->r[0]; // 801033F0
  c->r[1]=c->r[1]+0x00000010u; // 801033F4
  return; // 801033F8
}

// dtor_801033FC
void f_801033FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801033FC
  c->r[0]=c->lr; // 80103400
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103408
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010340C
  c->r[30]=c->r[3]|c->r[3]; // 80103410
  c->r[31]=c->r[4]|c->r[4]; // 80103414
  cmps(c,0,(int32_t)c->r[3],0); // 80103418
  if (crb(c,2)) { goto L_8010343C; } // 8010341C
  c->r[4]=0u+0x00000000u; // 80103420
  c->lr=0x80103428u; f_800F51F4(c); // 80103424
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103428
  cmps(c,0,(int32_t)c->r[0],0); // 8010342C
  if (!crb(c,1)) { goto L_8010343C; } // 80103430
  c->r[3]=c->r[30]|c->r[30]; // 80103434
  c->lr=0x8010343Cu; f_80047B20(c); // 80103438
L_8010343C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010343C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103440
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103444
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103448
  c->lr=c->r[0]; // 8010344C
  c->r[1]=c->r[1]+0x00000010u; // 80103450
  return; // 80103454
}

// fn_80103458
void f_80103458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103458
  c->r[0]=c->lr; // 8010345C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103460
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103464
  c->r[31]=c->r[3]|c->r[3]; // 80103468
  c->lr=0x80103470u; f_800F6FEC(c); // 8010346C
  c->r[3]=0u+0x80470000u; // 80103470
  c->r[0]=c->r[3]+0xFFFFDAB0u; // 80103474
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103478
  c->r[3]=c->r[31]|c->r[31]; // 8010347C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103480
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103484
  c->lr=c->r[0]; // 80103488
  c->r[1]=c->r[1]+0x00000010u; // 8010348C
  return; // 80103490
}

// dtor_80103494
void f_80103494(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103494
  c->r[0]=c->lr; // 80103498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010349C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801034A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801034A4
  c->r[30]=c->r[3]|c->r[3]; // 801034A8
  c->r[31]=c->r[4]|c->r[4]; // 801034AC
  cmps(c,0,(int32_t)c->r[3],0); // 801034B0
  if (crb(c,2)) { goto L_801034D4; } // 801034B4
  c->r[4]=0u+0x00000000u; // 801034B8
  c->lr=0x801034C0u; f_800F5270(c); // 801034BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801034C0
  cmps(c,0,(int32_t)c->r[0],0); // 801034C4
  if (!crb(c,1)) { goto L_801034D4; } // 801034C8
  c->r[3]=c->r[30]|c->r[30]; // 801034CC
  c->lr=0x801034D4u; f_80047B20(c); // 801034D0
L_801034D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801034D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801034D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801034DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801034E0
  c->lr=c->r[0]; // 801034E4
  c->r[1]=c->r[1]+0x00000010u; // 801034E8
  return; // 801034EC
}

// fn_801034F0
void f_801034F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801034F0
  c->r[0]=c->lr; // 801034F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801034F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801034FC
  c->r[31]=c->r[3]|c->r[3]; // 80103500
  c->lr=0x80103508u; f_800F7034(c); // 80103504
  c->r[3]=0u+0x80470000u; // 80103508
  c->r[0]=c->r[3]+0xFFFFDA68u; // 8010350C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103510
  c->r[3]=c->r[31]|c->r[31]; // 80103514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103518
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010351C
  c->lr=c->r[0]; // 80103520
  c->r[1]=c->r[1]+0x00000010u; // 80103524
  return; // 80103528
}

// dtor_8010352C
void f_8010352C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010352C
  c->r[0]=c->lr; // 80103530
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103538
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010353C
  c->r[30]=c->r[3]|c->r[3]; // 80103540
  c->r[31]=c->r[4]|c->r[4]; // 80103544
  cmps(c,0,(int32_t)c->r[3],0); // 80103548
  if (crb(c,2)) { goto L_8010356C; } // 8010354C
  c->r[4]=0u+0x00000000u; // 80103550
  c->lr=0x80103558u; f_800F52EC(c); // 80103554
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103558
  cmps(c,0,(int32_t)c->r[0],0); // 8010355C
  if (!crb(c,1)) { goto L_8010356C; } // 80103560
  c->r[3]=c->r[30]|c->r[30]; // 80103564
  c->lr=0x8010356Cu; f_80047B20(c); // 80103568
L_8010356C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010356C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103570
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103574
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103578
  c->lr=c->r[0]; // 8010357C
  c->r[1]=c->r[1]+0x00000010u; // 80103580
  return; // 80103584
}

// fn_80103588
void f_80103588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103588
  c->r[0]=c->lr; // 8010358C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103594
  c->r[31]=c->r[3]|c->r[3]; // 80103598
  c->lr=0x801035A0u; f_800F707C(c); // 8010359C
  c->r[3]=0u+0x80470000u; // 801035A0
  c->r[0]=c->r[3]+0xFFFFDA20u; // 801035A4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801035A8
  c->r[3]=c->r[31]|c->r[31]; // 801035AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801035B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801035B4
  c->lr=c->r[0]; // 801035B8
  c->r[1]=c->r[1]+0x00000010u; // 801035BC
  return; // 801035C0
}

// dtor_801035C4
void f_801035C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801035C4
  c->r[0]=c->lr; // 801035C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801035CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801035D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801035D4
  c->r[30]=c->r[3]|c->r[3]; // 801035D8
  c->r[31]=c->r[4]|c->r[4]; // 801035DC
  cmps(c,0,(int32_t)c->r[3],0); // 801035E0
  if (crb(c,2)) { goto L_80103604; } // 801035E4
  c->r[4]=0u+0x00000000u; // 801035E8
  c->lr=0x801035F0u; f_800F5368(c); // 801035EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801035F0
  cmps(c,0,(int32_t)c->r[0],0); // 801035F4
  if (!crb(c,1)) { goto L_80103604; } // 801035F8
  c->r[3]=c->r[30]|c->r[30]; // 801035FC
  c->lr=0x80103604u; f_80047B20(c); // 80103600
L_80103604:;
  c->r[3]=c->r[30]|c->r[30]; // 80103604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103608
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010360C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103610
  c->lr=c->r[0]; // 80103614
  c->r[1]=c->r[1]+0x00000010u; // 80103618
  return; // 8010361C
}

// fn_80103620
void f_80103620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103620
  c->r[0]=c->lr; // 80103624
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010362C
  c->r[31]=c->r[3]|c->r[3]; // 80103630
  c->lr=0x80103638u; f_800F70C4(c); // 80103634
  c->r[3]=0u+0x80470000u; // 80103638
  c->r[0]=c->r[3]+0xFFFFD9D8u; // 8010363C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103640
  c->r[3]=c->r[31]|c->r[31]; // 80103644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103648
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010364C
  c->lr=c->r[0]; // 80103650
  c->r[1]=c->r[1]+0x00000010u; // 80103654
  return; // 80103658
}

// dtor_8010365C
void f_8010365C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010365C
  c->r[0]=c->lr; // 80103660
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103668
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010366C
  c->r[30]=c->r[3]|c->r[3]; // 80103670
  c->r[31]=c->r[4]|c->r[4]; // 80103674
  cmps(c,0,(int32_t)c->r[3],0); // 80103678
  if (crb(c,2)) { goto L_8010369C; } // 8010367C
  c->r[4]=0u+0x00000000u; // 80103680
  c->lr=0x80103688u; f_800F53E4(c); // 80103684
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103688
  cmps(c,0,(int32_t)c->r[0],0); // 8010368C
  if (!crb(c,1)) { goto L_8010369C; } // 80103690
  c->r[3]=c->r[30]|c->r[30]; // 80103694
  c->lr=0x8010369Cu; f_80047B20(c); // 80103698
L_8010369C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010369C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801036A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801036A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801036A8
  c->lr=c->r[0]; // 801036AC
  c->r[1]=c->r[1]+0x00000010u; // 801036B0
  return; // 801036B4
}

// fn_801036B8
void f_801036B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801036B8
  c->r[0]=c->lr; // 801036BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801036C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801036C4
  c->r[31]=c->r[3]|c->r[3]; // 801036C8
  c->lr=0x801036D0u; f_800F710C(c); // 801036CC
  c->r[3]=0u+0x80470000u; // 801036D0
  c->r[0]=c->r[3]+0x00002150u; // 801036D4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801036D8
  c->r[3]=c->r[31]|c->r[31]; // 801036DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801036E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801036E4
  c->lr=c->r[0]; // 801036E8
  c->r[1]=c->r[1]+0x00000010u; // 801036EC
  return; // 801036F0
}

// dtor_801036F4
void f_801036F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801036F4
  c->r[0]=c->lr; // 801036F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801036FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103700
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103704
  c->r[30]=c->r[3]|c->r[3]; // 80103708
  c->r[31]=c->r[4]|c->r[4]; // 8010370C
  cmps(c,0,(int32_t)c->r[3],0); // 80103710
  if (crb(c,2)) { goto L_80103734; } // 80103714
  c->r[4]=0u+0x00000000u; // 80103718
  c->lr=0x80103720u; f_800F5460(c); // 8010371C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103720
  cmps(c,0,(int32_t)c->r[0],0); // 80103724
  if (!crb(c,1)) { goto L_80103734; } // 80103728
  c->r[3]=c->r[30]|c->r[30]; // 8010372C
  c->lr=0x80103734u; f_80047B20(c); // 80103730
L_80103734:;
  c->r[3]=c->r[30]|c->r[30]; // 80103734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103738
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010373C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103740
  c->lr=c->r[0]; // 80103744
  c->r[1]=c->r[1]+0x00000010u; // 80103748
  return; // 8010374C
}

// fn_80103750
void f_80103750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103750
  c->r[0]=c->lr; // 80103754
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103758
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010375C
  c->r[31]=c->r[3]|c->r[3]; // 80103760
  c->lr=0x80103768u; f_800F7154(c); // 80103764
  c->r[3]=0u+0x80470000u; // 80103768
  c->r[0]=c->r[3]+0xFFFFD900u; // 8010376C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103770
  c->r[3]=c->r[31]|c->r[31]; // 80103774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103778
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010377C
  c->lr=c->r[0]; // 80103780
  c->r[1]=c->r[1]+0x00000010u; // 80103784
  return; // 80103788
}

// dtor_8010378C
void f_8010378C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010378C
  c->r[0]=c->lr; // 80103790
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103798
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010379C
  c->r[30]=c->r[3]|c->r[3]; // 801037A0
  c->r[31]=c->r[4]|c->r[4]; // 801037A4
  cmps(c,0,(int32_t)c->r[3],0); // 801037A8
  if (crb(c,2)) { goto L_801037CC; } // 801037AC
  c->r[4]=0u+0x00000000u; // 801037B0
  c->lr=0x801037B8u; f_800F54DC(c); // 801037B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801037B8
  cmps(c,0,(int32_t)c->r[0],0); // 801037BC
  if (!crb(c,1)) { goto L_801037CC; } // 801037C0
  c->r[3]=c->r[30]|c->r[30]; // 801037C4
  c->lr=0x801037CCu; f_80047B20(c); // 801037C8
L_801037CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801037CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801037D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801037D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801037D8
  c->lr=c->r[0]; // 801037DC
  c->r[1]=c->r[1]+0x00000010u; // 801037E0
  return; // 801037E4
}

// fn_801037E8
void f_801037E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801037E8
  c->r[0]=c->lr; // 801037EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801037F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801037F4
  c->r[31]=c->r[3]|c->r[3]; // 801037F8
  c->lr=0x80103800u; f_800F719C(c); // 801037FC
  c->r[3]=0u+0x80470000u; // 80103800
  c->r[0]=c->r[3]+0xFFFFC7D8u; // 80103804
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103808
  c->r[3]=c->r[31]|c->r[31]; // 8010380C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103810
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103814
  c->lr=c->r[0]; // 80103818
  c->r[1]=c->r[1]+0x00000010u; // 8010381C
  return; // 80103820
}

// dtor_80103824
void f_80103824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103824
  c->r[0]=c->lr; // 80103828
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010382C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103830
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103834
  c->r[30]=c->r[3]|c->r[3]; // 80103838
  c->r[31]=c->r[4]|c->r[4]; // 8010383C
  cmps(c,0,(int32_t)c->r[3],0); // 80103840
  if (crb(c,2)) { goto L_80103864; } // 80103844
  c->r[4]=0u+0x00000000u; // 80103848
  c->lr=0x80103850u; f_800F5558(c); // 8010384C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103850
  cmps(c,0,(int32_t)c->r[0],0); // 80103854
  if (!crb(c,1)) { goto L_80103864; } // 80103858
  c->r[3]=c->r[30]|c->r[30]; // 8010385C
  c->lr=0x80103864u; f_80047B20(c); // 80103860
L_80103864:;
  c->r[3]=c->r[30]|c->r[30]; // 80103864
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103868
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010386C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103870
  c->lr=c->r[0]; // 80103874
  c->r[1]=c->r[1]+0x00000010u; // 80103878
  return; // 8010387C
}

// fn_80103880
void f_80103880(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103880
  c->r[0]=c->lr; // 80103884
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103888
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010388C
  c->r[31]=c->r[3]|c->r[3]; // 80103890
  c->lr=0x80103898u; f_800F71E4(c); // 80103894
  c->r[3]=0u+0x80470000u; // 80103898
  c->r[0]=c->r[3]+0xFFFFC790u; // 8010389C
  W32(c->r[31]+0x00000030u,c->r[0]); // 801038A0
  c->r[3]=c->r[31]|c->r[31]; // 801038A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801038A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801038AC
  c->lr=c->r[0]; // 801038B0
  c->r[1]=c->r[1]+0x00000010u; // 801038B4
  return; // 801038B8
}

// dtor_801038BC
void f_801038BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801038BC
  c->r[0]=c->lr; // 801038C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801038C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801038C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801038CC
  c->r[30]=c->r[3]|c->r[3]; // 801038D0
  c->r[31]=c->r[4]|c->r[4]; // 801038D4
  cmps(c,0,(int32_t)c->r[3],0); // 801038D8
  if (crb(c,2)) { goto L_801038FC; } // 801038DC
  c->r[4]=0u+0x00000000u; // 801038E0
  c->lr=0x801038E8u; f_800F55D4(c); // 801038E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801038E8
  cmps(c,0,(int32_t)c->r[0],0); // 801038EC
  if (!crb(c,1)) { goto L_801038FC; } // 801038F0
  c->r[3]=c->r[30]|c->r[30]; // 801038F4
  c->lr=0x801038FCu; f_80047B20(c); // 801038F8
L_801038FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801038FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103900
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103904
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103908
  c->lr=c->r[0]; // 8010390C
  c->r[1]=c->r[1]+0x00000010u; // 80103910
  return; // 80103914
}

// fn_80103918
void f_80103918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103918
  c->r[0]=c->lr; // 8010391C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103924
  c->r[31]=c->r[3]|c->r[3]; // 80103928
  c->lr=0x80103930u; f_800F722C(c); // 8010392C
  c->r[3]=0u+0x80470000u; // 80103930
  c->r[0]=c->r[3]+0xFFFFC748u; // 80103934
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103938
  c->r[3]=c->r[31]|c->r[31]; // 8010393C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103940
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103944
  c->lr=c->r[0]; // 80103948
  c->r[1]=c->r[1]+0x00000010u; // 8010394C
  return; // 80103950
}

// dtor_80103954
void f_80103954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103954
  c->r[0]=c->lr; // 80103958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010395C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103960
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103964
  c->r[30]=c->r[3]|c->r[3]; // 80103968
  c->r[31]=c->r[4]|c->r[4]; // 8010396C
  cmps(c,0,(int32_t)c->r[3],0); // 80103970
  if (crb(c,2)) { goto L_80103994; } // 80103974
  c->r[4]=0u+0x00000000u; // 80103978
  c->lr=0x80103980u; f_800F5650(c); // 8010397C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103980
  cmps(c,0,(int32_t)c->r[0],0); // 80103984
  if (!crb(c,1)) { goto L_80103994; } // 80103988
  c->r[3]=c->r[30]|c->r[30]; // 8010398C
  c->lr=0x80103994u; f_80047B20(c); // 80103990
L_80103994:;
  c->r[3]=c->r[30]|c->r[30]; // 80103994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103998
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010399C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801039A0
  c->lr=c->r[0]; // 801039A4
  c->r[1]=c->r[1]+0x00000010u; // 801039A8
  return; // 801039AC
}

// fn_801039B0
void f_801039B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801039B0
  c->r[0]=c->lr; // 801039B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801039B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801039BC
  c->r[31]=c->r[3]|c->r[3]; // 801039C0
  c->lr=0x801039C8u; f_800F7274(c); // 801039C4
  c->r[3]=0u+0x80470000u; // 801039C8
  c->r[0]=c->r[3]+0xFFFFC700u; // 801039CC
  W32(c->r[31]+0x00000030u,c->r[0]); // 801039D0
  c->r[3]=c->r[31]|c->r[31]; // 801039D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801039D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801039DC
  c->lr=c->r[0]; // 801039E0
  c->r[1]=c->r[1]+0x00000010u; // 801039E4
  return; // 801039E8
}

// dtor_801039EC
void f_801039EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801039EC
  c->r[0]=c->lr; // 801039F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801039F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801039F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801039FC
  c->r[30]=c->r[3]|c->r[3]; // 80103A00
  c->r[31]=c->r[4]|c->r[4]; // 80103A04
  cmps(c,0,(int32_t)c->r[3],0); // 80103A08
  if (crb(c,2)) { goto L_80103A2C; } // 80103A0C
  c->r[4]=0u+0x00000000u; // 80103A10
  c->lr=0x80103A18u; f_800F56CC(c); // 80103A14
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103A18
  cmps(c,0,(int32_t)c->r[0],0); // 80103A1C
  if (!crb(c,1)) { goto L_80103A2C; } // 80103A20
  c->r[3]=c->r[30]|c->r[30]; // 80103A24
  c->lr=0x80103A2Cu; f_80047B20(c); // 80103A28
L_80103A2C:;
  c->r[3]=c->r[30]|c->r[30]; // 80103A2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103A30
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103A34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103A38
  c->lr=c->r[0]; // 80103A3C
  c->r[1]=c->r[1]+0x00000010u; // 80103A40
  return; // 80103A44
}

// fn_80103A48
void f_80103A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103A48
  c->r[0]=c->lr; // 80103A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103A54
  c->r[31]=c->r[3]|c->r[3]; // 80103A58
  c->lr=0x80103A60u; f_800F72BC(c); // 80103A5C
  c->r[3]=0u+0x80470000u; // 80103A60
  c->r[0]=c->r[3]+0xFFFFC6B8u; // 80103A64
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103A68
  c->r[3]=c->r[31]|c->r[31]; // 80103A6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103A70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103A74
  c->lr=c->r[0]; // 80103A78
  c->r[1]=c->r[1]+0x00000010u; // 80103A7C
  return; // 80103A80
}

// dtor_80103A84
void f_80103A84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103A84
  c->r[0]=c->lr; // 80103A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103A8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103A90
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103A94
  c->r[30]=c->r[3]|c->r[3]; // 80103A98
  c->r[31]=c->r[4]|c->r[4]; // 80103A9C
  cmps(c,0,(int32_t)c->r[3],0); // 80103AA0
  if (crb(c,2)) { goto L_80103AC4; } // 80103AA4
  c->r[4]=0u+0x00000000u; // 80103AA8
  c->lr=0x80103AB0u; f_800F5748(c); // 80103AAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80103AB4
  if (!crb(c,1)) { goto L_80103AC4; } // 80103AB8
  c->r[3]=c->r[30]|c->r[30]; // 80103ABC
  c->lr=0x80103AC4u; f_80047B20(c); // 80103AC0
L_80103AC4:;
  c->r[3]=c->r[30]|c->r[30]; // 80103AC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103AC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103ACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103AD0
  c->lr=c->r[0]; // 80103AD4
  c->r[1]=c->r[1]+0x00000010u; // 80103AD8
  return; // 80103ADC
}

// fn_80103AE0
void f_80103AE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103AE0
  c->r[0]=c->lr; // 80103AE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103AE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103AEC
  c->r[31]=c->r[3]|c->r[3]; // 80103AF0
  c->lr=0x80103AF8u; f_800F7304(c); // 80103AF4
  c->r[3]=0u+0x80470000u; // 80103AF8
  c->r[0]=c->r[3]+0xFFFFC670u; // 80103AFC
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103B00
  c->r[3]=c->r[31]|c->r[31]; // 80103B04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103B08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103B0C
  c->lr=c->r[0]; // 80103B10
  c->r[1]=c->r[1]+0x00000010u; // 80103B14
  return; // 80103B18
}

// dtor_80103B1C
void f_80103B1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B1C
  c->r[0]=c->lr; // 80103B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103B24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103B28
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103B2C
  c->r[30]=c->r[3]|c->r[3]; // 80103B30
  c->r[31]=c->r[4]|c->r[4]; // 80103B34
  cmps(c,0,(int32_t)c->r[3],0); // 80103B38
  if (crb(c,2)) { goto L_80103B5C; } // 80103B3C
  c->r[4]=0u+0x00000000u; // 80103B40
  c->lr=0x80103B48u; f_800F57C4(c); // 80103B44
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103B48
  cmps(c,0,(int32_t)c->r[0],0); // 80103B4C
  if (!crb(c,1)) { goto L_80103B5C; } // 80103B50
  c->r[3]=c->r[30]|c->r[30]; // 80103B54
  c->lr=0x80103B5Cu; f_80047B20(c); // 80103B58
L_80103B5C:;
  c->r[3]=c->r[30]|c->r[30]; // 80103B5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103B60
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103B64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103B68
  c->lr=c->r[0]; // 80103B6C
  c->r[1]=c->r[1]+0x00000010u; // 80103B70
  return; // 80103B74
}

// fn_80103B78
void f_80103B78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B78
  c->r[0]=c->lr; // 80103B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103B84
  c->r[31]=c->r[3]|c->r[3]; // 80103B88
  c->lr=0x80103B90u; f_800F734C(c); // 80103B8C
  c->r[3]=0u+0x80470000u; // 80103B90
  c->r[0]=c->r[3]+0xFFFFC628u; // 80103B94
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103B98
  c->r[3]=c->r[31]|c->r[31]; // 80103B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103BA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103BA4
  c->lr=c->r[0]; // 80103BA8
  c->r[1]=c->r[1]+0x00000010u; // 80103BAC
  return; // 80103BB0
}

// dtor_80103BB4
void f_80103BB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103BB4
  c->r[0]=c->lr; // 80103BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103BBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103BC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103BC4
  c->r[30]=c->r[3]|c->r[3]; // 80103BC8
  c->r[31]=c->r[4]|c->r[4]; // 80103BCC
  cmps(c,0,(int32_t)c->r[3],0); // 80103BD0
  if (crb(c,2)) { goto L_80103BF4; } // 80103BD4
  c->r[4]=0u+0x00000000u; // 80103BD8
  c->lr=0x80103BE0u; f_800F5840(c); // 80103BDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103BE0
  cmps(c,0,(int32_t)c->r[0],0); // 80103BE4
  if (!crb(c,1)) { goto L_80103BF4; } // 80103BE8
  c->r[3]=c->r[30]|c->r[30]; // 80103BEC
  c->lr=0x80103BF4u; f_80047B20(c); // 80103BF0
L_80103BF4:;
  c->r[3]=c->r[30]|c->r[30]; // 80103BF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103BF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103C00
  c->lr=c->r[0]; // 80103C04
  c->r[1]=c->r[1]+0x00000010u; // 80103C08
  return; // 80103C0C
}

// fn_80103C10
void f_80103C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103C10
  c->r[0]=c->lr; // 80103C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103C18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103C1C
  c->r[31]=c->r[3]|c->r[3]; // 80103C20
  c->lr=0x80103C28u; f_800F7394(c); // 80103C24
  c->r[3]=0u+0x80470000u; // 80103C28
  c->r[0]=c->r[3]+0xFFFFC820u; // 80103C2C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103C30
  c->r[3]=c->r[31]|c->r[31]; // 80103C34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103C38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103C3C
  c->lr=c->r[0]; // 80103C40
  c->r[1]=c->r[1]+0x00000010u; // 80103C44
  return; // 80103C48
}

// dtor_80103C4C
void f_80103C4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103C4C
  c->r[0]=c->lr; // 80103C50
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103C54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103C58
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103C5C
  c->r[30]=c->r[3]|c->r[3]; // 80103C60
  c->r[31]=c->r[4]|c->r[4]; // 80103C64
  cmps(c,0,(int32_t)c->r[3],0); // 80103C68
  if (crb(c,2)) { goto L_80103C8C; } // 80103C6C
  c->r[4]=0u+0x00000000u; // 80103C70
  c->lr=0x80103C78u; f_800F58BC(c); // 80103C74
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103C78
  cmps(c,0,(int32_t)c->r[0],0); // 80103C7C
  if (!crb(c,1)) { goto L_80103C8C; } // 80103C80
  c->r[3]=c->r[30]|c->r[30]; // 80103C84
  c->lr=0x80103C8Cu; f_80047B20(c); // 80103C88
L_80103C8C:;
  c->r[3]=c->r[30]|c->r[30]; // 80103C8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103C90
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103C98
  c->lr=c->r[0]; // 80103C9C
  c->r[1]=c->r[1]+0x00000010u; // 80103CA0
  return; // 80103CA4
}

// fn_80103CA8
void f_80103CA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103CA8
  c->r[0]=c->lr; // 80103CAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103CB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103CB4
  c->r[31]=c->r[3]|c->r[3]; // 80103CB8
  c->lr=0x80103CC0u; f_800F73DC(c); // 80103CBC
  c->r[3]=0u+0x80470000u; // 80103CC0
  c->r[0]=c->r[3]+0xFFFFC5E0u; // 80103CC4
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103CC8
  c->r[3]=c->r[31]|c->r[31]; // 80103CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103CD4
  c->lr=c->r[0]; // 80103CD8
  c->r[1]=c->r[1]+0x00000010u; // 80103CDC
  return; // 80103CE0
}

// dtor_80103CE4
void f_80103CE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103CE4
  c->r[0]=c->lr; // 80103CE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103CEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103CF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103CF4
  c->r[30]=c->r[3]|c->r[3]; // 80103CF8
  c->r[31]=c->r[4]|c->r[4]; // 80103CFC
  cmps(c,0,(int32_t)c->r[3],0); // 80103D00
  if (crb(c,2)) { goto L_80103D24; } // 80103D04
  c->r[4]=0u+0x00000000u; // 80103D08
  c->lr=0x80103D10u; f_800F5938(c); // 80103D0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103D10
  cmps(c,0,(int32_t)c->r[0],0); // 80103D14
  if (!crb(c,1)) { goto L_80103D24; } // 80103D18
  c->r[3]=c->r[30]|c->r[30]; // 80103D1C
  c->lr=0x80103D24u; f_80047B20(c); // 80103D20
L_80103D24:;
  c->r[3]=c->r[30]|c->r[30]; // 80103D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103D28
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103D30
  c->lr=c->r[0]; // 80103D34
  c->r[1]=c->r[1]+0x00000010u; // 80103D38
  return; // 80103D3C
}

// fn_80103D40
void f_80103D40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103D40
  c->r[0]=c->lr; // 80103D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103D4C
  c->r[31]=c->r[3]|c->r[3]; // 80103D50
  c->lr=0x80103D58u; f_800F7424(c); // 80103D54
  c->r[3]=0u+0x80470000u; // 80103D58
  c->r[0]=c->r[3]+0x00002198u; // 80103D5C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103D60
  c->r[3]=c->r[31]|c->r[31]; // 80103D64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103D68
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103D6C
  c->lr=c->r[0]; // 80103D70
  c->r[1]=c->r[1]+0x00000010u; // 80103D74
  return; // 80103D78
}

// dtor_80103D7C
void f_80103D7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103D7C
  c->r[0]=c->lr; // 80103D80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103D84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103D88
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103D8C
  c->r[30]=c->r[3]|c->r[3]; // 80103D90
  c->r[31]=c->r[4]|c->r[4]; // 80103D94
  cmps(c,0,(int32_t)c->r[3],0); // 80103D98
  if (crb(c,2)) { goto L_80103DBC; } // 80103D9C
  c->r[4]=0u+0x00000000u; // 80103DA0
  c->lr=0x80103DA8u; f_800F59B4(c); // 80103DA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103DA8
  cmps(c,0,(int32_t)c->r[0],0); // 80103DAC
  if (!crb(c,1)) { goto L_80103DBC; } // 80103DB0
  c->r[3]=c->r[30]|c->r[30]; // 80103DB4
  c->lr=0x80103DBCu; f_80047B20(c); // 80103DB8
L_80103DBC:;
  c->r[3]=c->r[30]|c->r[30]; // 80103DBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103DC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103DC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103DC8
  c->lr=c->r[0]; // 80103DCC
  c->r[1]=c->r[1]+0x00000010u; // 80103DD0
  return; // 80103DD4
}

// fn_80103DD8
void f_80103DD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103DD8
  c->r[0]=c->lr; // 80103DDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103DE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103DE4
  c->r[31]=c->r[3]|c->r[3]; // 80103DE8
  c->lr=0x80103DF0u; f_800F746C(c); // 80103DEC
  c->r[3]=0u+0x80470000u; // 80103DF0
  c->r[0]=c->r[3]+0x00000288u; // 80103DF4
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103DF8
  c->r[3]=c->r[31]|c->r[31]; // 80103DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103E04
  c->lr=c->r[0]; // 80103E08
  c->r[1]=c->r[1]+0x00000010u; // 80103E0C
  return; // 80103E10
}

// dtor_80103E14
void f_80103E14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103E14
  c->r[0]=c->lr; // 80103E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103E20
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103E24
  c->r[30]=c->r[3]|c->r[3]; // 80103E28
  c->r[31]=c->r[4]|c->r[4]; // 80103E2C
  cmps(c,0,(int32_t)c->r[3],0); // 80103E30
  if (crb(c,2)) { goto L_80103E54; } // 80103E34
  c->r[4]=0u+0x00000000u; // 80103E38
  c->lr=0x80103E40u; f_800F5A30(c); // 80103E3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103E40
  cmps(c,0,(int32_t)c->r[0],0); // 80103E44
  if (!crb(c,1)) { goto L_80103E54; } // 80103E48
  c->r[3]=c->r[30]|c->r[30]; // 80103E4C
  c->lr=0x80103E54u; f_80047B20(c); // 80103E50
L_80103E54:;
  c->r[3]=c->r[30]|c->r[30]; // 80103E54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103E58
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103E5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103E60
  c->lr=c->r[0]; // 80103E64
  c->r[1]=c->r[1]+0x00000010u; // 80103E68
  return; // 80103E6C
}

// fn_80103E70
void f_80103E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103E70
  c->r[0]=c->lr; // 80103E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103E7C
  c->r[31]=c->r[3]|c->r[3]; // 80103E80
  c->lr=0x80103E88u; f_800F74B4(c); // 80103E84
  c->r[3]=0u+0x80480000u; // 80103E88
  c->r[0]=c->r[3]+0xFFFFFA68u; // 80103E8C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103E90
  c->r[3]=c->r[31]|c->r[31]; // 80103E94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103E98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103E9C
  c->lr=c->r[0]; // 80103EA0
  c->r[1]=c->r[1]+0x00000010u; // 80103EA4
  return; // 80103EA8
}

// dtor_80103EAC
void f_80103EAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103EAC
  c->r[0]=c->lr; // 80103EB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103EB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103EB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103EBC
  c->r[30]=c->r[3]|c->r[3]; // 80103EC0
  c->r[31]=c->r[4]|c->r[4]; // 80103EC4
  cmps(c,0,(int32_t)c->r[3],0); // 80103EC8
  if (crb(c,2)) { goto L_80103EEC; } // 80103ECC
  c->r[4]=0u+0x00000000u; // 80103ED0
  c->lr=0x80103ED8u; f_800F5AAC(c); // 80103ED4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103ED8
  cmps(c,0,(int32_t)c->r[0],0); // 80103EDC
  if (!crb(c,1)) { goto L_80103EEC; } // 80103EE0
  c->r[3]=c->r[30]|c->r[30]; // 80103EE4
  c->lr=0x80103EECu; f_80047B20(c); // 80103EE8
L_80103EEC:;
  c->r[3]=c->r[30]|c->r[30]; // 80103EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103EF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103EF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103EF8
  c->lr=c->r[0]; // 80103EFC
  c->r[1]=c->r[1]+0x00000010u; // 80103F00
  return; // 80103F04
}

// fn_80103F08
void f_80103F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103F08
  c->r[0]=c->lr; // 80103F0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103F10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103F14
  c->r[31]=c->r[3]|c->r[3]; // 80103F18
  c->lr=0x80103F20u; f_800F74FC(c); // 80103F1C
  c->r[3]=0u+0x80470000u; // 80103F20
  c->r[0]=c->r[3]+0xFFFFF050u; // 80103F24
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103F28
  c->r[3]=c->r[31]|c->r[31]; // 80103F2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103F30
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103F34
  c->lr=c->r[0]; // 80103F38
  c->r[1]=c->r[1]+0x00000010u; // 80103F3C
  return; // 80103F40
}

// dtor_80103F44
void f_80103F44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103F44
  c->r[0]=c->lr; // 80103F48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103F50
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103F54
  c->r[30]=c->r[3]|c->r[3]; // 80103F58
  c->r[31]=c->r[4]|c->r[4]; // 80103F5C
  cmps(c,0,(int32_t)c->r[3],0); // 80103F60
  if (crb(c,2)) { goto L_80103F84; } // 80103F64
  c->r[4]=0u+0x00000000u; // 80103F68
  c->lr=0x80103F70u; f_800F5B28(c); // 80103F6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80103F70
  cmps(c,0,(int32_t)c->r[0],0); // 80103F74
  if (!crb(c,1)) { goto L_80103F84; } // 80103F78
  c->r[3]=c->r[30]|c->r[30]; // 80103F7C
  c->lr=0x80103F84u; f_80047B20(c); // 80103F80
L_80103F84:;
  c->r[3]=c->r[30]|c->r[30]; // 80103F84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103F88
  c->r[30]=R32(c->r[1]+0x00000008u); // 80103F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103F90
  c->lr=c->r[0]; // 80103F94
  c->r[1]=c->r[1]+0x00000010u; // 80103F98
  return; // 80103F9C
}

// fn_80103FA0
void f_80103FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103FA0
  c->r[0]=c->lr; // 80103FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103FAC
  c->r[31]=c->r[3]|c->r[3]; // 80103FB0
  c->lr=0x80103FB8u; f_800F7544(c); // 80103FB4
  c->r[3]=0u+0x80470000u; // 80103FB8
  c->r[0]=c->r[3]+0x00005830u; // 80103FBC
  W32(c->r[31]+0x00000030u,c->r[0]); // 80103FC0
  c->r[3]=c->r[31]|c->r[31]; // 80103FC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103FC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103FCC
  c->lr=c->r[0]; // 80103FD0
  c->r[1]=c->r[1]+0x00000010u; // 80103FD4
  return; // 80103FD8
}

// dtor_80103FDC
void f_80103FDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103FDC
  c->r[0]=c->lr; // 80103FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103FE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80103FEC
  c->r[30]=c->r[3]|c->r[3]; // 80103FF0
  c->r[31]=c->r[4]|c->r[4]; // 80103FF4
  cmps(c,0,(int32_t)c->r[3],0); // 80103FF8
  if (crb(c,2)) { goto L_8010401C; } // 80103FFC
  c->r[4]=0u+0x00000000u; // 80104000
  c->lr=0x80104008u; f_800F5BA4(c); // 80104004
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104008
  cmps(c,0,(int32_t)c->r[0],0); // 8010400C
  if (!crb(c,1)) { goto L_8010401C; } // 80104010
  c->r[3]=c->r[30]|c->r[30]; // 80104014
  c->lr=0x8010401Cu; f_80047B20(c); // 80104018
L_8010401C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010401C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104020
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104024
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104028
  c->lr=c->r[0]; // 8010402C
  c->r[1]=c->r[1]+0x00000010u; // 80104030
  return; // 80104034
}

// fn_80104038
void f_80104038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104038
  c->r[0]=c->lr; // 8010403C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104044
  c->r[31]=c->r[3]|c->r[3]; // 80104048
  c->lr=0x80104050u; f_800F758C(c); // 8010404C
  c->r[3]=0u+0x80470000u; // 80104050
  c->r[0]=c->r[3]+0xFFFFEE70u; // 80104054
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104058
  c->r[3]=c->r[31]|c->r[31]; // 8010405C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104060
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104064
  c->lr=c->r[0]; // 80104068
  c->r[1]=c->r[1]+0x00000010u; // 8010406C
  return; // 80104070
}

// dtor_80104074
void f_80104074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104074
  c->r[0]=c->lr; // 80104078
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010407C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104080
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104084
  c->r[30]=c->r[3]|c->r[3]; // 80104088
  c->r[31]=c->r[4]|c->r[4]; // 8010408C
  cmps(c,0,(int32_t)c->r[3],0); // 80104090
  if (crb(c,2)) { goto L_801040B4; } // 80104094
  c->r[4]=0u+0x00000000u; // 80104098
  c->lr=0x801040A0u; f_800F5C20(c); // 8010409C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801040A0
  cmps(c,0,(int32_t)c->r[0],0); // 801040A4
  if (!crb(c,1)) { goto L_801040B4; } // 801040A8
  c->r[3]=c->r[30]|c->r[30]; // 801040AC
  c->lr=0x801040B4u; f_80047B20(c); // 801040B0
L_801040B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801040B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801040B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801040BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801040C0
  c->lr=c->r[0]; // 801040C4
  c->r[1]=c->r[1]+0x00000010u; // 801040C8
  return; // 801040CC
}

// fn_801040D0
void f_801040D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801040D0
  c->r[0]=c->lr; // 801040D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801040D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801040DC
  c->r[31]=c->r[3]|c->r[3]; // 801040E0
  c->lr=0x801040E8u; f_800F75D4(c); // 801040E4
  c->r[3]=0u+0x80470000u; // 801040E8
  c->r[0]=c->r[3]+0xFFFFC258u; // 801040EC
  W32(c->r[31]+0x00000030u,c->r[0]); // 801040F0
  c->r[3]=c->r[31]|c->r[31]; // 801040F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801040F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801040FC
  c->lr=c->r[0]; // 80104100
  c->r[1]=c->r[1]+0x00000010u; // 80104104
  return; // 80104108
}

// dtor_8010410C
void f_8010410C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010410C
  c->r[0]=c->lr; // 80104110
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104114
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104118
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010411C
  c->r[30]=c->r[3]|c->r[3]; // 80104120
  c->r[31]=c->r[4]|c->r[4]; // 80104124
  cmps(c,0,(int32_t)c->r[3],0); // 80104128
  if (crb(c,2)) { goto L_8010414C; } // 8010412C
  c->r[4]=0u+0x00000000u; // 80104130
  c->lr=0x80104138u; f_800F5C9C(c); // 80104134
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104138
  cmps(c,0,(int32_t)c->r[0],0); // 8010413C
  if (!crb(c,1)) { goto L_8010414C; } // 80104140
  c->r[3]=c->r[30]|c->r[30]; // 80104144
  c->lr=0x8010414Cu; f_80047B20(c); // 80104148
L_8010414C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010414C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104150
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104154
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104158
  c->lr=c->r[0]; // 8010415C
  c->r[1]=c->r[1]+0x00000010u; // 80104160
  return; // 80104164
}

// fn_80104168
void f_80104168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104168
  c->r[0]=c->lr; // 8010416C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104174
  c->r[31]=c->r[3]|c->r[3]; // 80104178
  c->lr=0x80104180u; f_800F761C(c); // 8010417C
  c->r[3]=0u+0x80480000u; // 80104180
  c->r[0]=c->r[3]+0xFFFFBB28u; // 80104184
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104188
  c->r[3]=c->r[31]|c->r[31]; // 8010418C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104190
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104194
  c->lr=c->r[0]; // 80104198
  c->r[1]=c->r[1]+0x00000010u; // 8010419C
  return; // 801041A0
}

// dtor_801041A4
void f_801041A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801041A4
  c->r[0]=c->lr; // 801041A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801041AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801041B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801041B4
  c->r[30]=c->r[3]|c->r[3]; // 801041B8
  c->r[31]=c->r[4]|c->r[4]; // 801041BC
  cmps(c,0,(int32_t)c->r[3],0); // 801041C0
  if (crb(c,2)) { goto L_801041E4; } // 801041C4
  c->r[4]=0u+0x00000000u; // 801041C8
  c->lr=0x801041D0u; f_800F5D18(c); // 801041CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801041D0
  cmps(c,0,(int32_t)c->r[0],0); // 801041D4
  if (!crb(c,1)) { goto L_801041E4; } // 801041D8
  c->r[3]=c->r[30]|c->r[30]; // 801041DC
  c->lr=0x801041E4u; f_80047B20(c); // 801041E0
L_801041E4:;
  c->r[3]=c->r[30]|c->r[30]; // 801041E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801041E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801041EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801041F0
  c->lr=c->r[0]; // 801041F4
  c->r[1]=c->r[1]+0x00000010u; // 801041F8
  return; // 801041FC
}

// fn_80104200
void f_80104200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104200
  c->r[0]=c->lr; // 80104204
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010420C
  c->r[31]=c->r[3]|c->r[3]; // 80104210
  c->lr=0x80104218u; f_800F7664(c); // 80104214
  c->r[3]=0u+0x80480000u; // 80104218
  c->r[0]=c->r[3]+0xFFFFE640u; // 8010421C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104220
  c->r[3]=c->r[31]|c->r[31]; // 80104224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104228
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010422C
  c->lr=c->r[0]; // 80104230
  c->r[1]=c->r[1]+0x00000010u; // 80104234
  return; // 80104238
}

// dtor_8010423C
void f_8010423C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010423C
  c->r[0]=c->lr; // 80104240
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104244
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104248
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010424C
  c->r[30]=c->r[3]|c->r[3]; // 80104250
  c->r[31]=c->r[4]|c->r[4]; // 80104254
  cmps(c,0,(int32_t)c->r[3],0); // 80104258
  if (crb(c,2)) { goto L_8010427C; } // 8010425C
  c->r[4]=0u+0x00000000u; // 80104260
  c->lr=0x80104268u; f_800F5D94(c); // 80104264
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104268
  cmps(c,0,(int32_t)c->r[0],0); // 8010426C
  if (!crb(c,1)) { goto L_8010427C; } // 80104270
  c->r[3]=c->r[30]|c->r[30]; // 80104274
  c->lr=0x8010427Cu; f_80047B20(c); // 80104278
L_8010427C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010427C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104280
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104284
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104288
  c->lr=c->r[0]; // 8010428C
  c->r[1]=c->r[1]+0x00000010u; // 80104290
  return; // 80104294
}

// fn_80104298
void f_80104298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104298
  c->r[0]=c->lr; // 8010429C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801042A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801042A4
  c->r[31]=c->r[3]|c->r[3]; // 801042A8
  c->lr=0x801042B0u; f_800F76AC(c); // 801042AC
  c->r[3]=0u+0x80470000u; // 801042B0
  c->r[0]=c->r[3]+0xFFFFD870u; // 801042B4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801042B8
  c->r[3]=c->r[31]|c->r[31]; // 801042BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801042C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801042C4
  c->lr=c->r[0]; // 801042C8
  c->r[1]=c->r[1]+0x00000010u; // 801042CC
  return; // 801042D0
}

// dtor_801042D4
void f_801042D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801042D4
  c->r[0]=c->lr; // 801042D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801042DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801042E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801042E4
  c->r[30]=c->r[3]|c->r[3]; // 801042E8
  c->r[31]=c->r[4]|c->r[4]; // 801042EC
  cmps(c,0,(int32_t)c->r[3],0); // 801042F0
  if (crb(c,2)) { goto L_80104314; } // 801042F4
  c->r[4]=0u+0x00000000u; // 801042F8
  c->lr=0x80104300u; f_800F5E10(c); // 801042FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104300
  cmps(c,0,(int32_t)c->r[0],0); // 80104304
  if (!crb(c,1)) { goto L_80104314; } // 80104308
  c->r[3]=c->r[30]|c->r[30]; // 8010430C
  c->lr=0x80104314u; f_80047B20(c); // 80104310
L_80104314:;
  c->r[3]=c->r[30]|c->r[30]; // 80104314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104318
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010431C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104320
  c->lr=c->r[0]; // 80104324
  c->r[1]=c->r[1]+0x00000010u; // 80104328
  return; // 8010432C
}

// fn_80104330
void f_80104330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104330
  c->r[0]=c->lr; // 80104334
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010433C
  c->r[31]=c->r[3]|c->r[3]; // 80104340
  c->lr=0x80104348u; f_800F76F4(c); // 80104344
  c->r[3]=0u+0x80480000u; // 80104348
  c->r[0]=c->r[3]+0x00003A40u; // 8010434C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104350
  c->r[3]=c->r[31]|c->r[31]; // 80104354
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104358
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010435C
  c->lr=c->r[0]; // 80104360
  c->r[1]=c->r[1]+0x00000010u; // 80104364
  return; // 80104368
}

// dtor_8010436C
void f_8010436C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010436C
  c->r[0]=c->lr; // 80104370
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104374
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104378
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010437C
  c->r[30]=c->r[3]|c->r[3]; // 80104380
  c->r[31]=c->r[4]|c->r[4]; // 80104384
  cmps(c,0,(int32_t)c->r[3],0); // 80104388
  if (crb(c,2)) { goto L_801043AC; } // 8010438C
  c->r[4]=0u+0x00000000u; // 80104390
  c->lr=0x80104398u; f_800F5E8C(c); // 80104394
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104398
  cmps(c,0,(int32_t)c->r[0],0); // 8010439C
  if (!crb(c,1)) { goto L_801043AC; } // 801043A0
  c->r[3]=c->r[30]|c->r[30]; // 801043A4
  c->lr=0x801043ACu; f_80047B20(c); // 801043A8
L_801043AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801043AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801043B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801043B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801043B8
  c->lr=c->r[0]; // 801043BC
  c->r[1]=c->r[1]+0x00000010u; // 801043C0
  return; // 801043C4
}

// fn_801043C8
void f_801043C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801043C8
  c->r[0]=c->lr; // 801043CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801043D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801043D4
  c->r[31]=c->r[3]|c->r[3]; // 801043D8
  c->lr=0x801043E0u; f_800F773C(c); // 801043DC
  c->r[3]=0u+0x80480000u; // 801043E0
  c->r[0]=c->r[3]+0x00002CB8u; // 801043E4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801043E8
  c->r[3]=c->r[31]|c->r[31]; // 801043EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801043F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801043F4
  c->lr=c->r[0]; // 801043F8
  c->r[1]=c->r[1]+0x00000010u; // 801043FC
  return; // 80104400
}

// dtor_80104404
void f_80104404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104404
  c->r[0]=c->lr; // 80104408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010440C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104410
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104414
  c->r[30]=c->r[3]|c->r[3]; // 80104418
  c->r[31]=c->r[4]|c->r[4]; // 8010441C
  cmps(c,0,(int32_t)c->r[3],0); // 80104420
  if (crb(c,2)) { goto L_80104444; } // 80104424
  c->r[4]=0u+0x00000000u; // 80104428
  c->lr=0x80104430u; f_800F5F08(c); // 8010442C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104430
  cmps(c,0,(int32_t)c->r[0],0); // 80104434
  if (!crb(c,1)) { goto L_80104444; } // 80104438
  c->r[3]=c->r[30]|c->r[30]; // 8010443C
  c->lr=0x80104444u; f_80047B20(c); // 80104440
L_80104444:;
  c->r[3]=c->r[30]|c->r[30]; // 80104444
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104448
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010444C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104450
  c->lr=c->r[0]; // 80104454
  c->r[1]=c->r[1]+0x00000010u; // 80104458
  return; // 8010445C
}

// fn_80104460
void f_80104460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104460
  c->r[0]=c->lr; // 80104464
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010446C
  c->r[31]=c->r[3]|c->r[3]; // 80104470
  c->lr=0x80104478u; f_800F7784(c); // 80104474
  c->r[3]=0u+0x80480000u; // 80104478
  c->r[0]=c->r[3]+0xFFFFE768u; // 8010447C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104480
  c->r[3]=c->r[31]|c->r[31]; // 80104484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104488
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010448C
  c->lr=c->r[0]; // 80104490
  c->r[1]=c->r[1]+0x00000010u; // 80104494
  return; // 80104498
}

// dtor_8010449C
void f_8010449C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010449C
  c->r[0]=c->lr; // 801044A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801044A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801044A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801044AC
  c->r[30]=c->r[3]|c->r[3]; // 801044B0
  c->r[31]=c->r[4]|c->r[4]; // 801044B4
  cmps(c,0,(int32_t)c->r[3],0); // 801044B8
  if (crb(c,2)) { goto L_801044DC; } // 801044BC
  c->r[4]=0u+0x00000000u; // 801044C0
  c->lr=0x801044C8u; f_800F5F84(c); // 801044C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801044C8
  cmps(c,0,(int32_t)c->r[0],0); // 801044CC
  if (!crb(c,1)) { goto L_801044DC; } // 801044D0
  c->r[3]=c->r[30]|c->r[30]; // 801044D4
  c->lr=0x801044DCu; f_80047B20(c); // 801044D8
L_801044DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801044DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801044E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801044E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801044E8
  c->lr=c->r[0]; // 801044EC
  c->r[1]=c->r[1]+0x00000010u; // 801044F0
  return; // 801044F4
}

// fn_801044F8
void f_801044F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801044F8
  c->r[0]=c->lr; // 801044FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104504
  c->r[31]=c->r[3]|c->r[3]; // 80104508
  c->lr=0x80104510u; f_800F77CC(c); // 8010450C
  c->r[3]=0u+0x80470000u; // 80104510
  c->r[0]=c->r[3]+0xFFFFC20Cu; // 80104514
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104518
  c->r[3]=c->r[31]|c->r[31]; // 8010451C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104520
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104524
  c->lr=c->r[0]; // 80104528
  c->r[1]=c->r[1]+0x00000010u; // 8010452C
  return; // 80104530
}

// dtor_80104534
void f_80104534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104534
  c->r[0]=c->lr; // 80104538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010453C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104540
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104544
  c->r[30]=c->r[3]|c->r[3]; // 80104548
  c->r[31]=c->r[4]|c->r[4]; // 8010454C
  cmps(c,0,(int32_t)c->r[3],0); // 80104550
  if (crb(c,2)) { goto L_80104574; } // 80104554
  c->r[4]=0u+0x00000000u; // 80104558
  c->lr=0x80104560u; f_800F6000(c); // 8010455C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104560
  cmps(c,0,(int32_t)c->r[0],0); // 80104564
  if (!crb(c,1)) { goto L_80104574; } // 80104568
  c->r[3]=c->r[30]|c->r[30]; // 8010456C
  c->lr=0x80104574u; f_80047B20(c); // 80104570
L_80104574:;
  c->r[3]=c->r[30]|c->r[30]; // 80104574
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104578
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010457C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104580
  c->lr=c->r[0]; // 80104584
  c->r[1]=c->r[1]+0x00000010u; // 80104588
  return; // 8010458C
}

// fn_80104590
void f_80104590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104590
  c->r[0]=c->lr; // 80104594
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010459C
  c->r[31]=c->r[3]|c->r[3]; // 801045A0
  c->lr=0x801045A8u; f_800F7814(c); // 801045A4
  c->r[3]=0u+0x80470000u; // 801045A8
  c->r[0]=c->r[3]+0xFFFFEFE8u; // 801045AC
  W32(c->r[31]+0x00000030u,c->r[0]); // 801045B0
  c->r[3]=c->r[31]|c->r[31]; // 801045B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801045B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801045BC
  c->lr=c->r[0]; // 801045C0
  c->r[1]=c->r[1]+0x00000010u; // 801045C4
  return; // 801045C8
}

// dtor_801045CC
void f_801045CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801045CC
  c->r[0]=c->lr; // 801045D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801045D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801045D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801045DC
  c->r[30]=c->r[3]|c->r[3]; // 801045E0
  c->r[31]=c->r[4]|c->r[4]; // 801045E4
  cmps(c,0,(int32_t)c->r[3],0); // 801045E8
  if (crb(c,2)) { goto L_8010460C; } // 801045EC
  c->r[4]=0u+0x00000000u; // 801045F0
  c->lr=0x801045F8u; f_800F607C(c); // 801045F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801045F8
  cmps(c,0,(int32_t)c->r[0],0); // 801045FC
  if (!crb(c,1)) { goto L_8010460C; } // 80104600
  c->r[3]=c->r[30]|c->r[30]; // 80104604
  c->lr=0x8010460Cu; f_80047B20(c); // 80104608
L_8010460C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010460C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104610
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104614
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104618
  c->lr=c->r[0]; // 8010461C
  c->r[1]=c->r[1]+0x00000010u; // 80104620
  return; // 80104624
}

// fn_80104628
void f_80104628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104628
  c->r[0]=c->lr; // 8010462C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104634
  c->r[31]=c->r[3]|c->r[3]; // 80104638
  c->lr=0x80104640u; f_800F785C(c); // 8010463C
  c->r[3]=0u+0x80470000u; // 80104640
  c->r[0]=c->r[3]+0x00004310u; // 80104644
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104648
  c->r[3]=c->r[31]|c->r[31]; // 8010464C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104650
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104654
  c->lr=c->r[0]; // 80104658
  c->r[1]=c->r[1]+0x00000010u; // 8010465C
  return; // 80104660
}

// dtor_80104664
void f_80104664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104664
  c->r[0]=c->lr; // 80104668
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010466C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104670
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104674
  c->r[30]=c->r[3]|c->r[3]; // 80104678
  c->r[31]=c->r[4]|c->r[4]; // 8010467C
  cmps(c,0,(int32_t)c->r[3],0); // 80104680
  if (crb(c,2)) { goto L_801046A4; } // 80104684
  c->r[4]=0u+0x00000000u; // 80104688
  c->lr=0x80104690u; f_800F60F8(c); // 8010468C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104690
  cmps(c,0,(int32_t)c->r[0],0); // 80104694
  if (!crb(c,1)) { goto L_801046A4; } // 80104698
  c->r[3]=c->r[30]|c->r[30]; // 8010469C
  c->lr=0x801046A4u; f_80047B20(c); // 801046A0
L_801046A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801046A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801046A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801046AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801046B0
  c->lr=c->r[0]; // 801046B4
  c->r[1]=c->r[1]+0x00000010u; // 801046B8
  return; // 801046BC
}

// fn_801046C0
void f_801046C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801046C0
  c->r[0]=c->lr; // 801046C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801046C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801046CC
  c->r[31]=c->r[3]|c->r[3]; // 801046D0
  c->lr=0x801046D8u; f_800F78A4(c); // 801046D4
  c->r[3]=0u+0x80480000u; // 801046D8
  c->r[0]=c->r[3]+0xFFFFE6F0u; // 801046DC
  W32(c->r[31]+0x00000030u,c->r[0]); // 801046E0
  c->r[3]=c->r[31]|c->r[31]; // 801046E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801046E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801046EC
  c->lr=c->r[0]; // 801046F0
  c->r[1]=c->r[1]+0x00000010u; // 801046F4
  return; // 801046F8
}

// dtor_801046FC
void f_801046FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801046FC
  c->r[0]=c->lr; // 80104700
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104708
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010470C
  c->r[30]=c->r[3]|c->r[3]; // 80104710
  c->r[31]=c->r[4]|c->r[4]; // 80104714
  cmps(c,0,(int32_t)c->r[3],0); // 80104718
  if (crb(c,2)) { goto L_8010473C; } // 8010471C
  c->r[4]=0u+0x00000000u; // 80104720
  c->lr=0x80104728u; f_800F6174(c); // 80104724
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104728
  cmps(c,0,(int32_t)c->r[0],0); // 8010472C
  if (!crb(c,1)) { goto L_8010473C; } // 80104730
  c->r[3]=c->r[30]|c->r[30]; // 80104734
  c->lr=0x8010473Cu; f_80047B20(c); // 80104738
L_8010473C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010473C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104740
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104744
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104748
  c->lr=c->r[0]; // 8010474C
  c->r[1]=c->r[1]+0x00000010u; // 80104750
  return; // 80104754
}

// fn_80104758
void f_80104758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104758
  c->r[0]=c->lr; // 8010475C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104760
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104764
  c->r[31]=c->r[3]|c->r[3]; // 80104768
  c->lr=0x80104770u; f_800F78EC(c); // 8010476C
  c->r[3]=0u+0x80460000u; // 80104770
  c->r[0]=c->r[3]+0x000040D8u; // 80104774
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104778
  c->r[3]=c->r[31]|c->r[31]; // 8010477C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104780
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104784
  c->lr=c->r[0]; // 80104788
  c->r[1]=c->r[1]+0x00000010u; // 8010478C
  return; // 80104790
}

// dtor_80104794
void f_80104794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104794
  c->r[0]=c->lr; // 80104798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010479C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801047A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801047A4
  c->r[30]=c->r[3]|c->r[3]; // 801047A8
  c->r[31]=c->r[4]|c->r[4]; // 801047AC
  cmps(c,0,(int32_t)c->r[3],0); // 801047B0
  if (crb(c,2)) { goto L_801047D4; } // 801047B4
  c->r[4]=0u+0x00000000u; // 801047B8
  c->lr=0x801047C0u; f_800F61F0(c); // 801047BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801047C0
  cmps(c,0,(int32_t)c->r[0],0); // 801047C4
  if (!crb(c,1)) { goto L_801047D4; } // 801047C8
  c->r[3]=c->r[30]|c->r[30]; // 801047CC
  c->lr=0x801047D4u; f_80047B20(c); // 801047D0
L_801047D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801047D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801047D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801047DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801047E0
  c->lr=c->r[0]; // 801047E4
  c->r[1]=c->r[1]+0x00000010u; // 801047E8
  return; // 801047EC
}

// fn_801047F0
void f_801047F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801047F0
  c->r[0]=c->lr; // 801047F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801047F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801047FC
  c->r[31]=c->r[3]|c->r[3]; // 80104800
  c->lr=0x80104808u; f_800F7934(c); // 80104804
  c->r[3]=0u+0x80480000u; // 80104808
  c->r[0]=c->r[3]+0x00002940u; // 8010480C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104810
  c->r[3]=c->r[31]|c->r[31]; // 80104814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104818
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010481C
  c->lr=c->r[0]; // 80104820
  c->r[1]=c->r[1]+0x00000010u; // 80104824
  return; // 80104828
}

// dtor_8010482C
void f_8010482C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010482C
  c->r[0]=c->lr; // 80104830
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104838
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010483C
  c->r[30]=c->r[3]|c->r[3]; // 80104840
  c->r[31]=c->r[4]|c->r[4]; // 80104844
  cmps(c,0,(int32_t)c->r[3],0); // 80104848
  if (crb(c,2)) { goto L_8010486C; } // 8010484C
  c->r[4]=0u+0x00000000u; // 80104850
  c->lr=0x80104858u; f_800F626C(c); // 80104854
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104858
  cmps(c,0,(int32_t)c->r[0],0); // 8010485C
  if (!crb(c,1)) { goto L_8010486C; } // 80104860
  c->r[3]=c->r[30]|c->r[30]; // 80104864
  c->lr=0x8010486Cu; f_80047B20(c); // 80104868
L_8010486C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010486C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104870
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104874
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104878
  c->lr=c->r[0]; // 8010487C
  c->r[1]=c->r[1]+0x00000010u; // 80104880
  return; // 80104884
}

// fn_80104888
void f_80104888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104888
  c->r[0]=c->lr; // 8010488C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104894
  c->r[31]=c->r[3]|c->r[3]; // 80104898
  c->lr=0x801048A0u; f_800F797C(c); // 8010489C
  c->r[3]=0u+0x80480000u; // 801048A0
  c->r[0]=c->r[3]+0x00000168u; // 801048A4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801048A8
  c->r[3]=c->r[31]|c->r[31]; // 801048AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801048B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801048B4
  c->lr=c->r[0]; // 801048B8
  c->r[1]=c->r[1]+0x00000010u; // 801048BC
  return; // 801048C0
}

// dtor_801048C4
void f_801048C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801048C4
  c->r[0]=c->lr; // 801048C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801048CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801048D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801048D4
  c->r[30]=c->r[3]|c->r[3]; // 801048D8
  c->r[31]=c->r[4]|c->r[4]; // 801048DC
  cmps(c,0,(int32_t)c->r[3],0); // 801048E0
  if (crb(c,2)) { goto L_80104904; } // 801048E4
  c->r[4]=0u+0x00000000u; // 801048E8
  c->lr=0x801048F0u; f_800F62E8(c); // 801048EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801048F0
  cmps(c,0,(int32_t)c->r[0],0); // 801048F4
  if (!crb(c,1)) { goto L_80104904; } // 801048F8
  c->r[3]=c->r[30]|c->r[30]; // 801048FC
  c->lr=0x80104904u; f_80047B20(c); // 80104900
L_80104904:;
  c->r[3]=c->r[30]|c->r[30]; // 80104904
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104908
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010490C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104910
  c->lr=c->r[0]; // 80104914
  c->r[1]=c->r[1]+0x00000010u; // 80104918
  return; // 8010491C
}

// fn_80104920
void f_80104920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104920
  c->r[0]=c->lr; // 80104924
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104928
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010492C
  c->r[31]=c->r[3]|c->r[3]; // 80104930
  c->lr=0x80104938u; f_800F79C4(c); // 80104934
  c->r[3]=0u+0x80480000u; // 80104938
  c->r[0]=c->r[3]+0xFFFFE6A0u; // 8010493C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104940
  c->r[3]=c->r[31]|c->r[31]; // 80104944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104948
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010494C
  c->lr=c->r[0]; // 80104950
  c->r[1]=c->r[1]+0x00000010u; // 80104954
  return; // 80104958
}

// dtor_8010495C
void f_8010495C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010495C
  c->r[0]=c->lr; // 80104960
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104968
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010496C
  c->r[30]=c->r[3]|c->r[3]; // 80104970
  c->r[31]=c->r[4]|c->r[4]; // 80104974
  cmps(c,0,(int32_t)c->r[3],0); // 80104978
  if (crb(c,2)) { goto L_8010499C; } // 8010497C
  c->r[4]=0u+0x00000000u; // 80104980
  c->lr=0x80104988u; f_800F6364(c); // 80104984
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104988
  cmps(c,0,(int32_t)c->r[0],0); // 8010498C
  if (!crb(c,1)) { goto L_8010499C; } // 80104990
  c->r[3]=c->r[30]|c->r[30]; // 80104994
  c->lr=0x8010499Cu; f_80047B20(c); // 80104998
L_8010499C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010499C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801049A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801049A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801049A8
  c->lr=c->r[0]; // 801049AC
  c->r[1]=c->r[1]+0x00000010u; // 801049B0
  return; // 801049B4
}

// fn_801049B8
void f_801049B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801049B8
  c->r[0]=c->lr; // 801049BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801049C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801049C4
  c->r[31]=c->r[3]|c->r[3]; // 801049C8
  c->lr=0x801049D0u; f_800F7A0C(c); // 801049CC
  c->r[3]=0u+0x80470000u; // 801049D0
  c->r[0]=c->r[3]+0x00001100u; // 801049D4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801049D8
  c->r[3]=c->r[31]|c->r[31]; // 801049DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801049E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801049E4
  c->lr=c->r[0]; // 801049E8
  c->r[1]=c->r[1]+0x00000010u; // 801049EC
  return; // 801049F0
}

// dtor_801049F4
void f_801049F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801049F4
  c->r[0]=c->lr; // 801049F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801049FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104A00
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104A04
  c->r[30]=c->r[3]|c->r[3]; // 80104A08
  c->r[31]=c->r[4]|c->r[4]; // 80104A0C
  cmps(c,0,(int32_t)c->r[3],0); // 80104A10
  if (crb(c,2)) { goto L_80104A34; } // 80104A14
  c->r[4]=0u+0x00000000u; // 80104A18
  c->lr=0x80104A20u; f_800F63E0(c); // 80104A1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104A20
  cmps(c,0,(int32_t)c->r[0],0); // 80104A24
  if (!crb(c,1)) { goto L_80104A34; } // 80104A28
  c->r[3]=c->r[30]|c->r[30]; // 80104A2C
  c->lr=0x80104A34u; f_80047B20(c); // 80104A30
L_80104A34:;
  c->r[3]=c->r[30]|c->r[30]; // 80104A34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104A38
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104A40
  c->lr=c->r[0]; // 80104A44
  c->r[1]=c->r[1]+0x00000010u; // 80104A48
  return; // 80104A4C
}

// fn_80104A50
void f_80104A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104A50
  c->r[0]=c->lr; // 80104A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104A5C
  c->r[31]=c->r[3]|c->r[3]; // 80104A60
  c->lr=0x80104A68u; f_800F7A54(c); // 80104A64
  c->r[3]=0u+0x80470000u; // 80104A68
  c->r[0]=c->r[3]+0x00000244u; // 80104A6C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104A70
  c->r[3]=c->r[31]|c->r[31]; // 80104A74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104A78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104A7C
  c->lr=c->r[0]; // 80104A80
  c->r[1]=c->r[1]+0x00000010u; // 80104A84
  return; // 80104A88
}

// dtor_80104A8C
void f_80104A8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104A8C
  c->r[0]=c->lr; // 80104A90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104A94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104A98
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104A9C
  c->r[30]=c->r[3]|c->r[3]; // 80104AA0
  c->r[31]=c->r[4]|c->r[4]; // 80104AA4
  cmps(c,0,(int32_t)c->r[3],0); // 80104AA8
  if (crb(c,2)) { goto L_80104ACC; } // 80104AAC
  c->r[4]=0u+0x00000000u; // 80104AB0
  c->lr=0x80104AB8u; f_800F645C(c); // 80104AB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104AB8
  cmps(c,0,(int32_t)c->r[0],0); // 80104ABC
  if (!crb(c,1)) { goto L_80104ACC; } // 80104AC0
  c->r[3]=c->r[30]|c->r[30]; // 80104AC4
  c->lr=0x80104ACCu; f_80047B20(c); // 80104AC8
L_80104ACC:;
  c->r[3]=c->r[30]|c->r[30]; // 80104ACC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104AD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104AD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104AD8
  c->lr=c->r[0]; // 80104ADC
  c->r[1]=c->r[1]+0x00000010u; // 80104AE0
  return; // 80104AE4
}

// fn_80104AE8
void f_80104AE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104AE8
  c->r[0]=c->lr; // 80104AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104AF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104AF4
  c->r[31]=c->r[3]|c->r[3]; // 80104AF8
  c->lr=0x80104B00u; f_800F7A9C(c); // 80104AFC
  c->r[3]=0u+0x80470000u; // 80104B00
  c->r[0]=c->r[3]+0xFFFFFE34u; // 80104B04
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104B08
  c->r[3]=c->r[31]|c->r[31]; // 80104B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104B14
  c->lr=c->r[0]; // 80104B18
  c->r[1]=c->r[1]+0x00000010u; // 80104B1C
  return; // 80104B20
}

// dtor_80104B24
void f_80104B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104B24
  c->r[0]=c->lr; // 80104B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104B30
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104B34
  c->r[30]=c->r[3]|c->r[3]; // 80104B38
  c->r[31]=c->r[4]|c->r[4]; // 80104B3C
  cmps(c,0,(int32_t)c->r[3],0); // 80104B40
  if (crb(c,2)) { goto L_80104B64; } // 80104B44
  c->r[4]=0u+0x00000000u; // 80104B48
  c->lr=0x80104B50u; f_800F64D8(c); // 80104B4C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104B50
  cmps(c,0,(int32_t)c->r[0],0); // 80104B54
  if (!crb(c,1)) { goto L_80104B64; } // 80104B58
  c->r[3]=c->r[30]|c->r[30]; // 80104B5C
  c->lr=0x80104B64u; f_80047B20(c); // 80104B60
L_80104B64:;
  c->r[3]=c->r[30]|c->r[30]; // 80104B64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104B68
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104B70
  c->lr=c->r[0]; // 80104B74
  c->r[1]=c->r[1]+0x00000010u; // 80104B78
  return; // 80104B7C
}

// fn_80104B80
void f_80104B80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104B80
  c->r[0]=c->lr; // 80104B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104B88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104B8C
  c->r[31]=c->r[3]|c->r[3]; // 80104B90
  c->lr=0x80104B98u; f_800F7AE4(c); // 80104B94
  c->r[3]=0u+0x80470000u; // 80104B98
  c->r[0]=c->r[3]+0xFFFFFA1Cu; // 80104B9C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104BA0
  c->r[3]=c->r[31]|c->r[31]; // 80104BA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104BA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104BAC
  c->lr=c->r[0]; // 80104BB0
  c->r[1]=c->r[1]+0x00000010u; // 80104BB4
  return; // 80104BB8
}

// dtor_80104BBC
void f_80104BBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104BBC
  c->r[0]=c->lr; // 80104BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104BC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104BCC
  c->r[30]=c->r[3]|c->r[3]; // 80104BD0
  c->r[31]=c->r[4]|c->r[4]; // 80104BD4
  cmps(c,0,(int32_t)c->r[3],0); // 80104BD8
  if (crb(c,2)) { goto L_80104BFC; } // 80104BDC
  c->r[4]=0u+0x00000000u; // 80104BE0
  c->lr=0x80104BE8u; f_800F6554(c); // 80104BE4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104BE8
  cmps(c,0,(int32_t)c->r[0],0); // 80104BEC
  if (!crb(c,1)) { goto L_80104BFC; } // 80104BF0
  c->r[3]=c->r[30]|c->r[30]; // 80104BF4
  c->lr=0x80104BFCu; f_80047B20(c); // 80104BF8
L_80104BFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80104BFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104C00
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104C04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104C08
  c->lr=c->r[0]; // 80104C0C
  c->r[1]=c->r[1]+0x00000010u; // 80104C10
  return; // 80104C14
}

// dtor_80104C18
void f_80104C18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104C18
  c->r[0]=c->lr; // 80104C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104C20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104C24
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104C28
  c->r[30]=c->r[3]|c->r[3]; // 80104C2C
  c->r[31]=c->r[4]|c->r[4]; // 80104C30
  cmps(c,0,(int32_t)c->r[3],0); // 80104C34
  if (crb(c,2)) { goto L_80104C58; } // 80104C38
  c->r[4]=0u+0x00000000u; // 80104C3C
  c->lr=0x80104C44u; f_800F65D0(c); // 80104C40
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104C44
  cmps(c,0,(int32_t)c->r[0],0); // 80104C48
  if (!crb(c,1)) { goto L_80104C58; } // 80104C4C
  c->r[3]=c->r[30]|c->r[30]; // 80104C50
  c->lr=0x80104C58u; f_80047B20(c); // 80104C54
L_80104C58:;
  c->r[3]=c->r[30]|c->r[30]; // 80104C58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104C5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104C60
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104C64
  c->lr=c->r[0]; // 80104C68
  c->r[1]=c->r[1]+0x00000010u; // 80104C6C
  return; // 80104C70
}

// fn_80104C74
void f_80104C74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104C74
  c->r[0]=c->lr; // 80104C78
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104C7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104C80
  c->r[31]=c->r[3]|c->r[3]; // 80104C84
  c->lr=0x80104C8Cu; f_800F7B2C(c); // 80104C88
  c->r[3]=0u+0x80470000u; // 80104C8C
  c->r[0]=c->r[3]+0x000057E4u; // 80104C90
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104C94
  c->r[3]=c->r[31]|c->r[31]; // 80104C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104CA0
  c->lr=c->r[0]; // 80104CA4
  c->r[1]=c->r[1]+0x00000010u; // 80104CA8
  return; // 80104CAC
}

// dtor_80104CB0
void f_80104CB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104CB0
  c->r[0]=c->lr; // 80104CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104CBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104CC0
  c->r[30]=c->r[3]|c->r[3]; // 80104CC4
  c->r[31]=c->r[4]|c->r[4]; // 80104CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80104CCC
  if (crb(c,2)) { goto L_80104CF0; } // 80104CD0
  c->r[4]=0u+0x00000000u; // 80104CD4
  c->lr=0x80104CDCu; f_800F664C(c); // 80104CD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104CDC
  cmps(c,0,(int32_t)c->r[0],0); // 80104CE0
  if (!crb(c,1)) { goto L_80104CF0; } // 80104CE4
  c->r[3]=c->r[30]|c->r[30]; // 80104CE8
  c->lr=0x80104CF0u; f_80047B20(c); // 80104CEC
L_80104CF0:;
  c->r[3]=c->r[30]|c->r[30]; // 80104CF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104CF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104CF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104CFC
  c->lr=c->r[0]; // 80104D00
  c->r[1]=c->r[1]+0x00000010u; // 80104D04
  return; // 80104D08
}

// fn_80104D0C
void f_80104D0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104D0C
  c->r[0]=c->lr; // 80104D10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104D14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104D18
  c->r[31]=c->r[3]|c->r[3]; // 80104D1C
  c->lr=0x80104D24u; f_800F7B74(c); // 80104D20
  c->r[3]=0u+0x80470000u; // 80104D24
  c->r[0]=c->r[3]+0x00005348u; // 80104D28
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104D2C
  c->r[3]=c->r[31]|c->r[31]; // 80104D30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104D34
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104D38
  c->lr=c->r[0]; // 80104D3C
  c->r[1]=c->r[1]+0x00000010u; // 80104D40
  return; // 80104D44
}

// dtor_80104D48
void f_80104D48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104D48
  c->r[0]=c->lr; // 80104D4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104D50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104D54
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104D58
  c->r[30]=c->r[3]|c->r[3]; // 80104D5C
  c->r[31]=c->r[4]|c->r[4]; // 80104D60
  cmps(c,0,(int32_t)c->r[3],0); // 80104D64
  if (crb(c,2)) { goto L_80104D88; } // 80104D68
  c->r[4]=0u+0x00000000u; // 80104D6C
  c->lr=0x80104D74u; f_800F66C8(c); // 80104D70
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104D74
  cmps(c,0,(int32_t)c->r[0],0); // 80104D78
  if (!crb(c,1)) { goto L_80104D88; } // 80104D7C
  c->r[3]=c->r[30]|c->r[30]; // 80104D80
  c->lr=0x80104D88u; f_80047B20(c); // 80104D84
L_80104D88:;
  c->r[3]=c->r[30]|c->r[30]; // 80104D88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104D8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104D90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104D94
  c->lr=c->r[0]; // 80104D98
  c->r[1]=c->r[1]+0x00000010u; // 80104D9C
  return; // 80104DA0
}

// fn_80104DA4
void f_80104DA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104DA4
  c->r[0]=c->lr; // 80104DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104DAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104DB0
  c->r[31]=c->r[3]|c->r[3]; // 80104DB4
  c->lr=0x80104DBCu; f_800F7BBC(c); // 80104DB8
  c->r[3]=0u+0x80470000u; // 80104DBC
  c->r[0]=c->r[3]+0xFFFFF584u; // 80104DC0
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104DC4
  c->r[3]=c->r[31]|c->r[31]; // 80104DC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104DCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104DD0
  c->lr=c->r[0]; // 80104DD4
  c->r[1]=c->r[1]+0x00000010u; // 80104DD8
  return; // 80104DDC
}

// dtor_80104DE0
void f_80104DE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104DE0
  c->r[0]=c->lr; // 80104DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104DE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104DEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104DF0
  c->r[30]=c->r[3]|c->r[3]; // 80104DF4
  c->r[31]=c->r[4]|c->r[4]; // 80104DF8
  cmps(c,0,(int32_t)c->r[3],0); // 80104DFC
  if (crb(c,2)) { goto L_80104E20; } // 80104E00
  c->r[4]=0u+0x00000000u; // 80104E04
  c->lr=0x80104E0Cu; f_800F6744(c); // 80104E08
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104E0C
  cmps(c,0,(int32_t)c->r[0],0); // 80104E10
  if (!crb(c,1)) { goto L_80104E20; } // 80104E14
  c->r[3]=c->r[30]|c->r[30]; // 80104E18
  c->lr=0x80104E20u; f_80047B20(c); // 80104E1C
L_80104E20:;
  c->r[3]=c->r[30]|c->r[30]; // 80104E20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104E24
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104E28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104E2C
  c->lr=c->r[0]; // 80104E30
  c->r[1]=c->r[1]+0x00000010u; // 80104E34
  return; // 80104E38
}

// fn_80104E3C
void f_80104E3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104E3C
  c->r[0]=c->lr; // 80104E40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104E44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104E48
  c->r[31]=c->r[3]|c->r[3]; // 80104E4C
  c->lr=0x80104E54u; f_800F7C04(c); // 80104E50
  c->r[3]=0u+0x80470000u; // 80104E54
  c->r[0]=c->r[3]+0x000042C0u; // 80104E58
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104E5C
  c->r[3]=c->r[31]|c->r[31]; // 80104E60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104E64
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104E68
  c->lr=c->r[0]; // 80104E6C
  c->r[1]=c->r[1]+0x00000010u; // 80104E70
  return; // 80104E74
}

// dtor_80104E78
void f_80104E78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104E78
  c->r[0]=c->lr; // 80104E7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104E80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104E84
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104E88
  c->r[30]=c->r[3]|c->r[3]; // 80104E8C
  c->r[31]=c->r[4]|c->r[4]; // 80104E90
  cmps(c,0,(int32_t)c->r[3],0); // 80104E94
  if (crb(c,2)) { goto L_80104EB8; } // 80104E98
  c->r[4]=0u+0x00000000u; // 80104E9C
  c->lr=0x80104EA4u; f_800F67C0(c); // 80104EA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104EA4
  cmps(c,0,(int32_t)c->r[0],0); // 80104EA8
  if (!crb(c,1)) { goto L_80104EB8; } // 80104EAC
  c->r[3]=c->r[30]|c->r[30]; // 80104EB0
  c->lr=0x80104EB8u; f_80047B20(c); // 80104EB4
L_80104EB8:;
  c->r[3]=c->r[30]|c->r[30]; // 80104EB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104EBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104EC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104EC4
  c->lr=c->r[0]; // 80104EC8
  c->r[1]=c->r[1]+0x00000010u; // 80104ECC
  return; // 80104ED0
}

// fn_80104ED4
void f_80104ED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104ED4
  c->r[0]=c->lr; // 80104ED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104EDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104EE0
  c->r[31]=c->r[3]|c->r[3]; // 80104EE4
  c->lr=0x80104EECu; f_800F7C4C(c); // 80104EE8
  c->r[3]=0u+0x80470000u; // 80104EEC
  c->r[0]=c->r[3]+0xFFFFF528u; // 80104EF0
  W32(c->r[31]+0x00000030u,c->r[0]); // 80104EF4
  c->r[3]=c->r[31]|c->r[31]; // 80104EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104F00
  c->lr=c->r[0]; // 80104F04
  c->r[1]=c->r[1]+0x00000010u; // 80104F08
  return; // 80104F0C
}

// dtor_80104F10
void f_80104F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104F10
  c->r[0]=c->lr; // 80104F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104F18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104F1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104F20
  c->r[30]=c->r[3]|c->r[3]; // 80104F24
  c->r[31]=c->r[4]|c->r[4]; // 80104F28
  cmps(c,0,(int32_t)c->r[3],0); // 80104F2C
  if (crb(c,2)) { goto L_80104F50; } // 80104F30
  c->r[4]=0u+0x00000000u; // 80104F34
  c->lr=0x80104F3Cu; f_800F683C(c); // 80104F38
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80104F40
  if (!crb(c,1)) { goto L_80104F50; } // 80104F44
  c->r[3]=c->r[30]|c->r[30]; // 80104F48
  c->lr=0x80104F50u; f_80047B20(c); // 80104F4C
L_80104F50:;
  c->r[3]=c->r[30]|c->r[30]; // 80104F50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104F54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104F58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104F5C
  c->lr=c->r[0]; // 80104F60
  c->r[1]=c->r[1]+0x00000010u; // 80104F64
  return; // 80104F68
}

// dtor_80104F6C
void f_80104F6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104F6C
  c->r[0]=c->lr; // 80104F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104F74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104F78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104F7C
  c->r[30]=c->r[3]|c->r[3]; // 80104F80
  c->r[31]=c->r[4]|c->r[4]; // 80104F84
  cmps(c,0,(int32_t)c->r[3],0); // 80104F88
  if (crb(c,2)) { goto L_80104FAC; } // 80104F8C
  c->r[4]=0u+0x00000000u; // 80104F90
  c->lr=0x80104F98u; f_800F68B8(c); // 80104F94
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104F98
  cmps(c,0,(int32_t)c->r[0],0); // 80104F9C
  if (!crb(c,1)) { goto L_80104FAC; } // 80104FA0
  c->r[3]=c->r[30]|c->r[30]; // 80104FA4
  c->lr=0x80104FACu; f_80047B20(c); // 80104FA8
L_80104FAC:;
  c->r[3]=c->r[30]|c->r[30]; // 80104FAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104FB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104FB8
  c->lr=c->r[0]; // 80104FBC
  c->r[1]=c->r[1]+0x00000010u; // 80104FC0
  return; // 80104FC4
}

// dtor_80104FC8
void f_80104FC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104FC8
  c->r[0]=c->lr; // 80104FCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104FD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80104FD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104FD8
  c->r[30]=c->r[3]|c->r[3]; // 80104FDC
  c->r[31]=c->r[4]|c->r[4]; // 80104FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80104FE4
  if (crb(c,2)) { goto L_80105008; } // 80104FE8
  c->r[4]=0u+0x00000000u; // 80104FEC
  c->lr=0x80104FF4u; f_800F6934(c); // 80104FF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80104FF4
  cmps(c,0,(int32_t)c->r[0],0); // 80104FF8
  if (!crb(c,1)) { goto L_80105008; } // 80104FFC
  c->r[3]=c->r[30]|c->r[30]; // 80105000
  c->lr=0x80105008u; f_80047B20(c); // 80105004
L_80105008:;
  c->r[3]=c->r[30]|c->r[30]; // 80105008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010500C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80105010
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105014
  c->lr=c->r[0]; // 80105018
  c->r[1]=c->r[1]+0x00000010u; // 8010501C
  return; // 80105020
}

// fn_80105024
void f_80105024(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105024
  c->r[0]=c->lr; // 80105028
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010502C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105030
  c->r[31]=c->r[3]|c->r[3]; // 80105034
  c->lr=0x8010503Cu; f_800F7C94(c); // 80105038
  c->r[3]=0u+0x80470000u; // 8010503C
  c->r[0]=c->r[3]+0xFFFFD8B8u; // 80105040
  W32(c->r[31]+0x00000030u,c->r[0]); // 80105044
  c->r[3]=c->r[31]|c->r[31]; // 80105048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010504C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105050
  c->lr=c->r[0]; // 80105054
  c->r[1]=c->r[1]+0x00000010u; // 80105058
  return; // 8010505C
}

// dtor_80105060
void f_80105060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105060
  c->r[0]=c->lr; // 80105064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010506C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80105070
  c->r[30]=c->r[3]|c->r[3]; // 80105074
  c->r[31]=c->r[4]|c->r[4]; // 80105078
  cmps(c,0,(int32_t)c->r[3],0); // 8010507C
  if (crb(c,2)) { goto L_801050A0; } // 80105080
  c->r[4]=0u+0x00000000u; // 80105084
  c->lr=0x8010508Cu; f_800F69B0(c); // 80105088
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8010508C
  cmps(c,0,(int32_t)c->r[0],0); // 80105090
  if (!crb(c,1)) { goto L_801050A0; } // 80105094
  c->r[3]=c->r[30]|c->r[30]; // 80105098
  c->lr=0x801050A0u; f_80047B20(c); // 8010509C
L_801050A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801050A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801050A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801050A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801050AC
  c->lr=c->r[0]; // 801050B0
  c->r[1]=c->r[1]+0x00000010u; // 801050B4
  return; // 801050B8
}

// fn_801050BC
void f_801050BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801050BC
  c->r[0]=c->lr; // 801050C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801050C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801050C8
  c->r[31]=c->r[3]|c->r[3]; // 801050CC
  c->lr=0x801050D4u; f_800F7CDC(c); // 801050D0
  c->r[3]=0u+0x80470000u; // 801050D4
  c->r[0]=c->r[3]+0xFFFFD620u; // 801050D8
  W32(c->r[31]+0x00000030u,c->r[0]); // 801050DC
  c->r[3]=c->r[31]|c->r[31]; // 801050E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801050E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801050E8
  c->lr=c->r[0]; // 801050EC
  c->r[1]=c->r[1]+0x00000010u; // 801050F0
  return; // 801050F4
}

