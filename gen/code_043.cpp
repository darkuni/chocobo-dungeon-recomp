#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801AD214
void f_801AD214(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD214
  c->r[0]=c->lr; // 801AD218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD21C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD220
  c->r[31]=c->r[3]|c->r[3]; // 801AD224
  c->lr=0x801AD22Cu; f_801AD144(c); // 801AD228
  c->r[3]=c->r[31]|c->r[31]; // 801AD22C
  c->lr=0x801AD234u; f_801AD2FC(c); // 801AD230
  c->r[3]=c->r[31]|c->r[31]; // 801AD234
  c->r[4]=0u+0x00000001u; // 801AD238
  c->lr=0x801AD240u; f_801ACEE0(c); // 801AD23C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD240
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD244
  c->lr=c->r[0]; // 801AD248
  c->r[1]=c->r[1]+0x00000010u; // 801AD24C
  return; // 801AD250
}

// fn_801AD254
void f_801AD254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD254
  c->r[0]=c->lr; // 801AD258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD25C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD260
  c->r[31]=c->r[3]|c->r[3]; // 801AD264
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801AD268
  c->r[4]=0u+0x00000000u; // 801AD26C
  c->lr=0x801AD274u; f_801A44D4(c); // 801AD270
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD274
  c->r[4]=0u+0x00000000u; // 801AD278
  c->lr=0x801AD280u; f_801A44CC(c); // 801AD27C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD280
  c->r[4]=0u+0x00000001u; // 801AD284
  c->lr=0x801AD28Cu; f_801A44C4(c); // 801AD288
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD28C
  c->lr=0x801AD294u; f_801A4544(c); // 801AD290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD294
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD298
  c->lr=c->r[0]; // 801AD29C
  c->r[1]=c->r[1]+0x00000010u; // 801AD2A0
  return; // 801AD2A4
}

// fn_801AD2A8
void f_801AD2A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD2A8
  c->r[0]=c->lr; // 801AD2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD2B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD2B4
  c->r[31]=c->r[3]|c->r[3]; // 801AD2B8
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801AD2BC
  c->r[4]=0u+0x00000000u; // 801AD2C0
  c->lr=0x801AD2C8u; f_801A44D4(c); // 801AD2C4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD2C8
  c->r[4]=0u+0x00000000u; // 801AD2CC
  c->lr=0x801AD2D4u; f_801A44CC(c); // 801AD2D0
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD2D4
  c->r[4]=0u+0x00000001u; // 801AD2D8
  c->lr=0x801AD2E0u; f_801A44C4(c); // 801AD2DC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD2E0
  c->lr=0x801AD2E8u; f_801A4554(c); // 801AD2E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD2E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD2EC
  c->lr=c->r[0]; // 801AD2F0
  c->r[1]=c->r[1]+0x00000010u; // 801AD2F4
  return; // 801AD2F8
}

// fn_801AD2FC
void f_801AD2FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD2FC
  c->r[0]=c->lr; // 801AD300
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD304
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD308
  c->r[31]=c->r[3]|c->r[3]; // 801AD30C
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801AD310
  c->r[4]=0u+0x00000001u; // 801AD314
  c->lr=0x801AD31Cu; f_801A44D4(c); // 801AD318
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD31C
  c->r[4]=0u+0x00000001u; // 801AD320
  c->lr=0x801AD328u; f_801A44CC(c); // 801AD324
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD328
  c->lr=0x801AD330u; f_801A4564(c); // 801AD32C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD330
  c->lr=0x801AD338u; f_801A8568(c); // 801AD334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD338
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD33C
  c->lr=c->r[0]; // 801AD340
  c->r[1]=c->r[1]+0x00000010u; // 801AD344
  return; // 801AD348
}

// fn_801AD34C
void f_801AD34C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD34C
  c->r[0]=c->lr; // 801AD350
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD354
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD358
  c->r[31]=c->r[3]|c->r[3]; // 801AD35C
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801AD360
  c->r[4]=0u+0x00000001u; // 801AD364
  c->lr=0x801AD36Cu; f_801A44D4(c); // 801AD368
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD36C
  c->r[4]=0u+0x00000001u; // 801AD370
  c->lr=0x801AD378u; f_801A44CC(c); // 801AD374
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD378
  c->lr=0x801AD380u; f_801A4564(c); // 801AD37C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801AD380
  c->r[4]=R32(c->r[31]+0x000000E8u); // 801AD384
  c->lr=0x801AD38Cu; f_801A85B4(c); // 801AD388
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD38C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD390
  c->lr=c->r[0]; // 801AD394
  c->r[1]=c->r[1]+0x00000010u; // 801AD398
  return; // 801AD39C
}

// fn_801AD3A0
void f_801AD3A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801AD3A0
  f_801A4574(c); return; // 801AD3A4
}

// fn_801AD3A8
void f_801AD3A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD3A8
  c->r[0]=c->lr; // 801AD3AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD3B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD3B4
  c->r[31]=c->r[3]|c->r[3]; // 801AD3B8
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801AD3BC
  c->r[4]=0u+0x00000000u; // 801AD3C0
  c->lr=0x801AD3C8u; f_801A6144(c); // 801AD3C4
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD3C8
  c->r[4]=0u+0x00000001u; // 801AD3CC
  c->lr=0x801AD3D4u; f_801A613C(c); // 801AD3D0
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD3D4
  c->lr=0x801AD3DCu; f_801A614C(c); // 801AD3D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD3DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD3E0
  c->lr=c->r[0]; // 801AD3E4
  c->r[1]=c->r[1]+0x00000010u; // 801AD3E8
  return; // 801AD3EC
}

// fn_801AD3F0
void f_801AD3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD3F0
  c->r[0]=c->lr; // 801AD3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD3FC
  c->r[31]=c->r[3]|c->r[3]; // 801AD400
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801AD404
  c->r[4]=0u+0x00000000u; // 801AD408
  c->lr=0x801AD410u; f_801A6144(c); // 801AD40C
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD410
  c->r[4]=0u+0x00000001u; // 801AD414
  c->lr=0x801AD41Cu; f_801A613C(c); // 801AD418
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD41C
  c->lr=0x801AD424u; f_801A619C(c); // 801AD420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD424
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD428
  c->lr=c->r[0]; // 801AD42C
  c->r[1]=c->r[1]+0x00000010u; // 801AD430
  return; // 801AD434
}

// fn_801AD438
void f_801AD438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD438
  c->r[0]=c->lr; // 801AD43C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD444
  c->r[31]=c->r[3]|c->r[3]; // 801AD448
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD44C
  c->lr=0x801AD454u; f_801A58B8(c); // 801AD450
  c->r[4]=c->r[3]|c->r[3]; // 801AD454
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD458
  c->lr=0x801AD460u; f_801A909C(c); // 801AD45C
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD460
  c->r[4]=0u+0x00000001u; // 801AD464
  c->lr=0x801AD46Cu; f_801A6144(c); // 801AD468
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD46C
  c->lr=0x801AD474u; f_801A61EC(c); // 801AD470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD474
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD478
  c->lr=c->r[0]; // 801AD47C
  c->r[1]=c->r[1]+0x00000010u; // 801AD480
  return; // 801AD484
}

// fn_801AD488
void f_801AD488(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD488
  c->r[0]=c->lr; // 801AD48C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD494
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD498
  c->r[30]=c->r[3]|c->r[3]; // 801AD49C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD4A0
  c->lr=0x801AD4A8u; f_801A5880(c); // 801AD4A4
  c->r[31]=c->r[3]|c->r[3]; // 801AD4A8
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801AD4AC
  c->lr=0x801AD4B4u; f_801AA604(c); // 801AD4B0
  c->r[4]=c->r[3]|c->r[3]; // 801AD4B4
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801AD4B8
  c->r[5]=c->r[31]|c->r[31]; // 801AD4BC
  c->lr=0x801AD4C4u; f_801A9254(c); // 801AD4C0
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801AD4C4
  c->r[4]=0u+0x00000001u; // 801AD4C8
  c->lr=0x801AD4D0u; f_801A6144(c); // 801AD4CC
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801AD4D0
  c->lr=0x801AD4D8u; f_801A61EC(c); // 801AD4D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD4D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD4E0
  c->lr=c->r[0]; // 801AD4E4
  c->r[1]=c->r[1]+0x00000010u; // 801AD4E8
  return; // 801AD4EC
}

// fn_801AD4F0
void f_801AD4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD4F0
  c->r[0]=c->lr; // 801AD4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD4F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD4FC
  c->r[31]=c->r[3]|c->r[3]; // 801AD500
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD504
  c->lr=0x801AD50Cu; f_801A58B8(c); // 801AD508
  c->r[4]=c->r[3]|c->r[3]; // 801AD50C
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD510
  c->lr=0x801AD518u; f_801A9350(c); // 801AD514
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD518
  c->r[4]=0u+0x00000001u; // 801AD51C
  c->lr=0x801AD524u; f_801A6144(c); // 801AD520
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801AD524
  c->lr=0x801AD52Cu; f_801A61EC(c); // 801AD528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD52C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD530
  c->lr=c->r[0]; // 801AD534
  c->r[1]=c->r[1]+0x00000010u; // 801AD538
  return; // 801AD53C
}

// fn_801AD540
void f_801AD540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD540
  c->r[0]=c->lr; // 801AD544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD54C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD550
  c->r[30]=c->r[3]|c->r[3]; // 801AD554
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD558
  c->lr=0x801AD560u; f_801A5880(c); // 801AD55C
  c->r[31]=c->r[3]|c->r[3]; // 801AD560
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801AD564
  c->lr=0x801AD56Cu; f_801AA6D8(c); // 801AD568
  c->r[4]=c->r[3]|c->r[3]; // 801AD56C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801AD570
  c->r[5]=c->r[31]|c->r[31]; // 801AD574
  c->lr=0x801AD57Cu; f_801A9590(c); // 801AD578
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801AD57C
  c->r[4]=0u+0x00000001u; // 801AD580
  c->lr=0x801AD588u; f_801A6144(c); // 801AD584
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801AD588
  c->lr=0x801AD590u; f_801A61EC(c); // 801AD58C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD590
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD594
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD598
  c->lr=c->r[0]; // 801AD59C
  c->r[1]=c->r[1]+0x00000010u; // 801AD5A0
  return; // 801AD5A4
}

// fn_801AD5A8
void f_801AD5A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801AD5A8
  f_801A623C(c); return; // 801AD5AC
}

// fn_801AD5B0
void f_801AD5B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD5B0
  c->r[0]=c->lr; // 801AD5B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD5B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD5BC
  c->r[31]=c->r[3]|c->r[3]; // 801AD5C0
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801AD5C4
  c->r[4]=0u+0x00000001u; // 801AD5C8
  c->lr=0x801AD5D0u; f_8017CB84(c); // 801AD5CC
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD5D0
  c->r[4]=0u+0x00000000u; // 801AD5D4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AD5D8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801AD5DC
  c->ctr=c->r[12]; // 801AD5E0
  if (true) { c->lr=0x801AD5E8u; dispatch(c,c->ctr); } // 801AD5E4
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD5E8
  c->lr=0x801AD5F0u; f_8017CB9C(c); // 801AD5EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD5F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD5F4
  c->lr=c->r[0]; // 801AD5F8
  c->r[1]=c->r[1]+0x00000010u; // 801AD5FC
  return; // 801AD600
}

// fn_801AD604
void f_801AD604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD604
  c->r[0]=c->lr; // 801AD608
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD60C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD610
  c->r[31]=c->r[3]|c->r[3]; // 801AD614
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801AD618
  c->r[4]=0u+0x00000001u; // 801AD61C
  c->lr=0x801AD624u; f_8017CB84(c); // 801AD620
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD624
  c->r[4]=0u+0x00000000u; // 801AD628
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AD62C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801AD630
  c->ctr=c->r[12]; // 801AD634
  if (true) { c->lr=0x801AD63Cu; dispatch(c,c->ctr); } // 801AD638
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD63C
  c->lr=0x801AD644u; f_8017CBAC(c); // 801AD640
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD644
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD648
  c->lr=c->r[0]; // 801AD64C
  c->r[1]=c->r[1]+0x00000010u; // 801AD650
  return; // 801AD654
}

// fn_801AD658
void f_801AD658(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD658
  c->r[0]=c->lr; // 801AD65C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD660
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD664
  c->r[31]=c->r[3]|c->r[3]; // 801AD668
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801AD66C
  c->lr=0x801AD674u; f_801AC28C(c); // 801AD670
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD674
  c->lr=0x801AD67Cu; f_8017CBBC(c); // 801AD678
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD67C
  c->lr=0x801AD684u; f_801A58B8(c); // 801AD680
  c->r[4]=c->r[3]|c->r[3]; // 801AD684
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD688
  c->lr=0x801AD690u; f_801AC298(c); // 801AD68C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD690
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD694
  c->lr=c->r[0]; // 801AD698
  c->r[1]=c->r[1]+0x00000010u; // 801AD69C
  return; // 801AD6A0
}

// fn_801AD6A4
void f_801AD6A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD6A4
  c->r[0]=c->lr; // 801AD6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD6AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD6B0
  c->r[31]=c->r[3]|c->r[3]; // 801AD6B4
  c->r[3]=R32(c->r[3]+0x000000DCu); // 801AD6B8
  c->lr=0x801AD6C0u; f_801AC28C(c); // 801AD6BC
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD6C0
  c->lr=0x801AD6C8u; f_8017CBBC(c); // 801AD6C4
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD6C8
  c->lr=0x801AD6D0u; f_801A58B8(c); // 801AD6CC
  c->r[4]=c->r[3]|c->r[3]; // 801AD6D0
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801AD6D4
  c->lr=0x801AD6DCu; f_801AC3A0(c); // 801AD6D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD6DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD6E0
  c->lr=c->r[0]; // 801AD6E4
  c->r[1]=c->r[1]+0x00000010u; // 801AD6E8
  return; // 801AD6EC
}

// fn_801AD6F0
void f_801AD6F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD6F0
  c->r[0]=c->lr; // 801AD6F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD6F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD6FC
  c->r[31]=c->r[3]|c->r[3]; // 801AD700
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD704
  c->r[4]=0u+0x00000001u; // 801AD708
  c->lr=0x801AD710u; f_801A56A0(c); // 801AD70C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD710
  c->r[4]=0u+0x00000000u; // 801AD714
  c->lr=0x801AD71Cu; f_801A56E4(c); // 801AD718
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD71C
  c->lr=0x801AD724u; f_801A5754(c); // 801AD720
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD724
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD728
  c->lr=c->r[0]; // 801AD72C
  c->r[1]=c->r[1]+0x00000010u; // 801AD730
  return; // 801AD734
}

// fn_801AD738
void f_801AD738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD738
  c->r[0]=c->lr; // 801AD73C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD744
  c->r[31]=c->r[3]|c->r[3]; // 801AD748
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD74C
  c->r[4]=0u+0x00000001u; // 801AD750
  c->lr=0x801AD758u; f_801A56A0(c); // 801AD754
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD758
  c->r[4]=0u+0x00000000u; // 801AD75C
  c->lr=0x801AD764u; f_801A56E4(c); // 801AD760
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD764
  c->lr=0x801AD76Cu; f_801A5764(c); // 801AD768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD76C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD770
  c->lr=c->r[0]; // 801AD774
  c->r[1]=c->r[1]+0x00000010u; // 801AD778
  return; // 801AD77C
}

// fn_801AD780
void f_801AD780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD780
  c->r[0]=c->lr; // 801AD784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD78C
  c->r[31]=c->r[3]|c->r[3]; // 801AD790
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD794
  c->r[4]=0u+0x00000001u; // 801AD798
  c->lr=0x801AD7A0u; f_801A56E4(c); // 801AD79C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AD7A0
  c->lr=0x801AD7A8u; f_801A5774(c); // 801AD7A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD7AC
  c->lr=c->r[0]; // 801AD7B0
  c->r[1]=c->r[1]+0x00000010u; // 801AD7B4
  return; // 801AD7B8
}

// fn_801AD7BC
void f_801AD7BC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD7BC
  f_801A5784(c); return; // 801AD7C0
}

// fn_801AD7C4
void f_801AD7C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD7C4
  f_801A5A9C(c); return; // 801AD7C8
}

// fn_801AD7CC
void f_801AD7CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD7CC
  f_801A5A94(c); return; // 801AD7D0
}

// fn_801AD7D4
void f_801AD7D4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD7D4
  f_801AE58C(c); return; // 801AD7D8
}

// fn_801AD7DC
void f_801AD7DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD7DC
  c->r[0]=c->lr; // 801AD7E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD7E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD7E8
  c->r[31]=c->r[3]|c->r[3]; // 801AD7EC
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801AD7F0
  c->r[4]=0u+0x00000001u; // 801AD7F4
  c->lr=0x801AD7FCu; f_8017C078(c); // 801AD7F8
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AD7FC
  c->lr=0x801AD804u; f_8017C080(c); // 801AD800
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD804
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD808
  c->lr=c->r[0]; // 801AD80C
  c->r[1]=c->r[1]+0x00000010u; // 801AD810
  return; // 801AD814
}

// fn_801AD818
void f_801AD818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD818
  c->r[0]=c->lr; // 801AD81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD824
  c->r[31]=c->r[3]|c->r[3]; // 801AD828
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801AD82C
  c->r[4]=0u+0x00000000u; // 801AD830
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AD834
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801AD838
  c->ctr=c->r[12]; // 801AD83C
  if (true) { c->lr=0x801AD844u; dispatch(c,c->ctr); } // 801AD840
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AD844
  c->r[4]=0u+0x00000001u; // 801AD848
  c->lr=0x801AD850u; f_8017C078(c); // 801AD84C
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AD850
  c->lr=0x801AD858u; f_8017C090(c); // 801AD854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD858
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD85C
  c->lr=c->r[0]; // 801AD860
  c->r[1]=c->r[1]+0x00000010u; // 801AD864
  return; // 801AD868
}

// fn_801AD86C
void f_801AD86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD86C
  c->r[0]=c->lr; // 801AD870
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD878
  c->r[31]=c->r[3]|c->r[3]; // 801AD87C
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801AD880
  c->r[4]=0u+0x00000001u; // 801AD884
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AD888
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801AD88C
  c->ctr=c->r[12]; // 801AD890
  if (true) { c->lr=0x801AD898u; dispatch(c,c->ctr); } // 801AD894
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AD898
  c->lr=0x801AD8A0u; f_8017C0A0(c); // 801AD89C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD8A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD8A4
  c->lr=c->r[0]; // 801AD8A8
  c->r[1]=c->r[1]+0x00000010u; // 801AD8AC
  return; // 801AD8B0
}

// fn_801AD8B4
void f_801AD8B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801AD8B4
  f_8017C0B0(c); return; // 801AD8B8
}

// fn_801AD8BC
void f_801AD8BC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801AD8BC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AD8C0
  c->r[12]=R32(c->r[12]+0x00000068u); // 801AD8C4
  c->ctr=c->r[12]; // 801AD8C8
  if (true) { dispatch(c,c->ctr); return; } // 801AD8CC
}

// fn_801AD8D0
void f_801AD8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD8D0
  c->r[0]=c->lr; // 801AD8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD8DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AD8E0
  c->r[30]=c->r[3]|c->r[3]; // 801AD8E4
  c->r[31]=c->r[4]|c->r[4]; // 801AD8E8
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD8EC
  c->lr=0x801AD8F4u; f_801A5AC4(c); // 801AD8F0
  c->r[0]=cntlz(c->r[3]); // 801AD8F4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AD8F8
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801AD8FC
  c->r[4]=c->r[31]|c->r[31]; // 801AD900
  c->lr=0x801AD908u; f_801A5834(c); // 801AD904
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AD908
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AD90C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AD910
  c->lr=c->r[0]; // 801AD914
  c->r[1]=c->r[1]+0x00000010u; // 801AD918
  return; // 801AD91C
}

// fn_801AD920
void f_801AD920(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD920
  f_801A5AC4(c); return; // 801AD924
}

// fn_801AD928
void f_801AD928(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD928
  f_801A5880(c); return; // 801AD92C
}

// fn_801AD930
void f_801AD930(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD930
  f_801A5AA8(c); return; // 801AD934
}

// fn_801AD938
void f_801AD938(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD938
  f_801A5AB0(c); return; // 801AD93C
}

// fn_801AD940
void f_801AD940(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801AD940
  if (crb(c,2)) { goto L_801AD950; } // 801AD944
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD948
  f_801AA604(c); return; // 801AD94C
L_801AD950:;
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD950
  f_801AA6D8(c); return; // 801AD954
}

// fn_801AD958
void f_801AD958(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AD958
  f_801A59E4(c); return; // 801AD95C
}

// fn_801AD960
void f_801AD960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AD960
  c->r[0]=c->lr; // 801AD964
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AD968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AD96C
  c->r[31]=c->r[3]|c->r[3]; // 801AD970
  c->r[4]=0u+0x00000000u; // 801AD974
  c->lr=0x801AD97Cu; f_801AD7D4(c); // 801AD978
  c->r[3]=c->r[31]|c->r[31]; // 801AD97C
  c->r[4]=0u+0x00000000u; // 801AD980
  c->lr=0x801AD988u; f_801ACEE0(c); // 801AD984
  c->r[3]=c->r[31]|c->r[31]; // 801AD988
  c->r[4]=0u+0x00000001u; // 801AD98C
  c->lr=0x801AD994u; f_801AE160(c); // 801AD990
  c->r[3]=c->r[31]|c->r[31]; // 801AD994
  c->lr=0x801AD99Cu; f_801AD6F0(c); // 801AD998
  c->r[3]=c->r[31]|c->r[31]; // 801AD99C
  c->lr=0x801AD9A4u; f_801AD5B0(c); // 801AD9A0
  c->r[3]=c->r[31]|c->r[31]; // 801AD9A4
  c->lr=0x801AD9ACu; f_801AE11C(c); // 801AD9A8
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801AD9AC
  cmps(c,0,(int32_t)c->r[0],3); // 801AD9B0
  if (crb(c,2)) { goto L_801ADA1C; } // 801AD9B4
  if (!crb(c,0)) { goto L_801ADA6C; } // 801AD9B8
  cmps(c,0,(int32_t)c->r[0],2); // 801AD9BC
  if (!crb(c,0)) { goto L_801AD9C8; } // 801AD9C0
  goto L_801ADA6C; // 801AD9C4
L_801AD9C8:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801AD9C8
  c->r[4]=0u+0x00000000u; // 801AD9CC
  c->lr=0x801AD9D4u; f_80114680(c); // 801AD9D0
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801AD9D4
  c->r[4]=0u+0x00000002u; // 801AD9D8
  c->lr=0x801AD9E0u; f_80114680(c); // 801AD9DC
  c->lr=0x801AD9E4u; f_80111CF0(c); // 801AD9E0
  cmps(c,0,(int32_t)c->r[3],0); // 801AD9E4
  if (crb(c,2)) { goto L_801AD9F4; } // 801AD9E8
  c->r[4]=0u+0x00000001u; // 801AD9EC
  goto L_801ADA04; // 801AD9F0
L_801AD9F4:;
  c->lr=0x801AD9F8u; f_8007B524(c); // 801AD9F4
  c->r[4]=0u+0x00000000u; // 801AD9F8
  c->lr=0x801ADA00u; f_800A7010(c); // 801AD9FC
  c->r[4]=c->r[3]|c->r[3]; // 801ADA00
L_801ADA04:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADA04
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801ADA08
  c->r[0]=cntlz(c->r[0]); // 801ADA0C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801ADA10
  c->lr=0x801ADA18u; f_801145E4(c); // 801ADA14
  goto L_801ADA6C; // 801ADA18
L_801ADA1C:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADA1C
  c->r[4]=0u+0x00000000u; // 801ADA20
  c->lr=0x801ADA28u; f_80114680(c); // 801ADA24
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADA28
  c->r[4]=0u+0x00000003u; // 801ADA2C
  c->lr=0x801ADA34u; f_80114680(c); // 801ADA30
  c->lr=0x801ADA38u; f_80111CF0(c); // 801ADA34
  cmps(c,0,(int32_t)c->r[3],0); // 801ADA38
  if (crb(c,2)) { goto L_801ADA48; } // 801ADA3C
  c->r[4]=0u+0x00000001u; // 801ADA40
  goto L_801ADA58; // 801ADA44
L_801ADA48:;
  c->lr=0x801ADA4Cu; f_8007B524(c); // 801ADA48
  c->r[4]=0u+0x00000000u; // 801ADA4C
  c->lr=0x801ADA54u; f_800A7010(c); // 801ADA50
  c->r[4]=c->r[3]|c->r[3]; // 801ADA54
L_801ADA58:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADA58
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 801ADA5C
  c->r[0]=cntlz(c->r[0]); // 801ADA60
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801ADA64
  c->lr=0x801ADA6Cu; f_801145E4(c); // 801ADA68
L_801ADA6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADA6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADA70
  c->lr=c->r[0]; // 801ADA74
  c->r[1]=c->r[1]+0x00000010u; // 801ADA78
  return; // 801ADA7C
}

// fn_801ADA80
void f_801ADA80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADA80
  c->r[0]=c->lr; // 801ADA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADA8C
  c->r[31]=c->r[3]|c->r[3]; // 801ADA90
  c->r[4]=0u+0x00000000u; // 801ADA94
  c->lr=0x801ADA9Cu; f_801AD7D4(c); // 801ADA98
  c->r[3]=c->r[31]|c->r[31]; // 801ADA9C
  c->r[4]=0u+0x00000000u; // 801ADAA0
  c->lr=0x801ADAA8u; f_801ACEE0(c); // 801ADAA4
  c->r[3]=c->r[31]|c->r[31]; // 801ADAA8
  c->r[4]=0u+0x00000001u; // 801ADAAC
  c->lr=0x801ADAB4u; f_801AE160(c); // 801ADAB0
  c->r[3]=c->r[31]|c->r[31]; // 801ADAB4
  c->lr=0x801ADABCu; f_801AD6F0(c); // 801ADAB8
  c->r[3]=c->r[31]|c->r[31]; // 801ADABC
  c->lr=0x801ADAC4u; f_801AE11C(c); // 801ADAC0
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADAC4
  c->lr=0x801ADACCu; f_8011461C(c); // 801ADAC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADAD0
  c->lr=c->r[0]; // 801ADAD4
  c->r[1]=c->r[1]+0x00000010u; // 801ADAD8
  return; // 801ADADC
}

// fn_801ADAE0
void f_801ADAE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADAE0
  c->r[0]=c->lr; // 801ADAE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADAE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADAEC
  c->r[31]=c->r[3]|c->r[3]; // 801ADAF0
  c->r[4]=0u+0x00000000u; // 801ADAF4
  c->lr=0x801ADAFCu; f_801AD7D4(c); // 801ADAF8
  c->r[3]=c->r[31]|c->r[31]; // 801ADAFC
  c->r[4]=0u+0x00000000u; // 801ADB00
  c->lr=0x801ADB08u; f_801ACEE0(c); // 801ADB04
  c->r[3]=c->r[31]|c->r[31]; // 801ADB08
  c->r[4]=0u+0x00000001u; // 801ADB0C
  c->lr=0x801ADB14u; f_801AE160(c); // 801ADB10
  c->r[3]=c->r[31]|c->r[31]; // 801ADB14
  c->lr=0x801ADB1Cu; f_801AD738(c); // 801ADB18
  c->r[3]=c->r[31]|c->r[31]; // 801ADB1C
  c->lr=0x801ADB24u; f_801AD604(c); // 801ADB20
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADB24
  c->lr=0x801ADB2Cu; f_8011461C(c); // 801ADB28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADB2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADB30
  c->lr=c->r[0]; // 801ADB34
  c->r[1]=c->r[1]+0x00000010u; // 801ADB38
  return; // 801ADB3C
}

// fn_801ADB40
void f_801ADB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB40
  c->r[0]=c->lr; // 801ADB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADB48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADB4C
  c->r[31]=c->r[3]|c->r[3]; // 801ADB50
  c->r[4]=0u+0x00000000u; // 801ADB54
  c->lr=0x801ADB5Cu; f_801AD7D4(c); // 801ADB58
  c->r[3]=c->r[31]|c->r[31]; // 801ADB5C
  c->r[4]=0u+0x00000000u; // 801ADB60
  c->lr=0x801ADB68u; f_801ACEE0(c); // 801ADB64
  c->r[3]=c->r[31]|c->r[31]; // 801ADB68
  c->r[4]=0u+0x00000001u; // 801ADB6C
  c->lr=0x801ADB74u; f_801AE160(c); // 801ADB70
  c->r[3]=c->r[31]|c->r[31]; // 801ADB74
  c->lr=0x801ADB7Cu; f_801AD738(c); // 801ADB78
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADB7C
  c->lr=0x801ADB84u; f_8011461C(c); // 801ADB80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADB84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADB88
  c->lr=c->r[0]; // 801ADB8C
  c->r[1]=c->r[1]+0x00000010u; // 801ADB90
  return; // 801ADB94
}

// fn_801ADB98
void f_801ADB98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADB98
  c->r[0]=c->lr; // 801ADB9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADBA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADBA4
  c->r[31]=c->r[3]|c->r[3]; // 801ADBA8
  c->r[4]=0u+0x00000001u; // 801ADBAC
  c->lr=0x801ADBB4u; f_801AD7D4(c); // 801ADBB0
  c->r[3]=c->r[31]|c->r[31]; // 801ADBB4
  c->r[4]=0u+0x00000001u; // 801ADBB8
  c->lr=0x801ADBC0u; f_801ACEE0(c); // 801ADBBC
  c->r[3]=c->r[31]|c->r[31]; // 801ADBC0
  c->r[4]=0u+0x00000000u; // 801ADBC4
  c->lr=0x801ADBCCu; f_801AE160(c); // 801ADBC8
  c->r[3]=c->r[31]|c->r[31]; // 801ADBCC
  c->lr=0x801ADBD4u; f_801AD34C(c); // 801ADBD0
  c->r[3]=c->r[31]|c->r[31]; // 801ADBD4
  c->lr=0x801ADBDCu; f_801AD780(c); // 801ADBD8
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801ADBDC
  c->lr=0x801ADBE4u; f_80114624(c); // 801ADBE0
  c->r[0]=R32(c->r[31]+0x000000E8u); // 801ADBE4
  cmps(c,0,(int32_t)c->r[0],3); // 801ADBE8
  if (crb(c,2)) { goto L_801ADC0C; } // 801ADBEC
  if (!crb(c,0)) { goto L_801ADC14; } // 801ADBF0
  cmps(c,0,(int32_t)c->r[0],2); // 801ADBF4
  if (!crb(c,0)) { goto L_801ADC00; } // 801ADBF8
  goto L_801ADC14; // 801ADBFC
L_801ADC00:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADC00
  c->lr=0x801ADC08u; f_801AD658(c); // 801ADC04
  goto L_801ADC14; // 801ADC08
L_801ADC0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADC0C
  c->lr=0x801ADC14u; f_801AD6A4(c); // 801ADC10
L_801ADC14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADC14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADC18
  c->lr=c->r[0]; // 801ADC1C
  c->r[1]=c->r[1]+0x00000010u; // 801ADC20
  return; // 801ADC24
}

// fn_801ADC28
void f_801ADC28(Ctx* __restrict c) {
  f_801AD7BC(c); return; // 801ADC28
}

// fn_801ADC2C
void f_801ADC2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADC2C
  c->r[0]=c->lr; // 801ADC30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADC34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADC38
  c->r[31]=c->r[3]|c->r[3]; // 801ADC3C
  cmps(c,0,(int32_t)c->r[4],0); // 801ADC40
  if (crb(c,2)) { goto L_801ADC58; } // 801ADC44
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801ADC48
  c->lr=0x801ADC50u; f_801A5A7C(c); // 801ADC4C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801ADC50
  c->lr=0x801ADC58u; f_801AA7DC(c); // 801ADC54
L_801ADC58:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801ADC58
  c->lr=0x801ADC60u; f_801AA5E4(c); // 801ADC5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADC60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADC64
  c->lr=c->r[0]; // 801ADC68
  c->r[1]=c->r[1]+0x00000010u; // 801ADC6C
  return; // 801ADC70
}

// fn_801ADC74
void f_801ADC74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADC74
  c->r[0]=c->lr; // 801ADC78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADC7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADC80
  c->r[31]=c->r[3]|c->r[3]; // 801ADC84
  cmps(c,0,(int32_t)c->r[4],0); // 801ADC88
  if (crb(c,2)) { goto L_801ADCA0; } // 801ADC8C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801ADC90
  c->lr=0x801ADC98u; f_801A5A7C(c); // 801ADC94
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801ADC98
  c->lr=0x801ADCA0u; f_801AA7DC(c); // 801ADC9C
L_801ADCA0:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801ADCA0
  c->lr=0x801ADCA8u; f_801AA5F4(c); // 801ADCA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADCA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADCAC
  c->lr=c->r[0]; // 801ADCB0
  c->r[1]=c->r[1]+0x00000010u; // 801ADCB4
  return; // 801ADCB8
}

// fn_801ADCBC
void f_801ADCBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADCBC
  c->r[0]=c->lr; // 801ADCC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADCC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADCC8
  c->r[31]=c->r[3]|c->r[3]; // 801ADCCC
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801ADCD0
  c->r[4]=0u+0x00000000u; // 801ADCD4
  c->lr=0x801ADCDCu; f_801AE58C(c); // 801ADCD8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801ADCDC
  c->lr=0x801ADCE4u; f_801A59E4(c); // 801ADCE0
  c->r[3]=c->r[31]|c->r[31]; // 801ADCE4
  c->r[4]=0u+0x00000001u; // 801ADCE8
  c->lr=0x801ADCF0u; f_801AE160(c); // 801ADCEC
  c->r[3]=c->r[31]|c->r[31]; // 801ADCF0
  c->r[4]=0u+0x00000001u; // 801ADCF4
  c->lr=0x801ADCFCu; f_801ADC74(c); // 801ADCF8
  c->r[3]=c->r[31]|c->r[31]; // 801ADCFC
  c->lr=0x801ADD04u; f_801AE11C(c); // 801ADD00
  c->r[3]=c->r[31]|c->r[31]; // 801ADD04
  c->r[4]=0u+0x00000000u; // 801ADD08
  c->lr=0x801ADD10u; f_801AE160(c); // 801ADD0C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801ADD10
  c->r[4]=0u+0x00000001u; // 801ADD14
  c->lr=0x801ADD1Cu; f_801AE58C(c); // 801ADD18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADD1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADD20
  c->lr=c->r[0]; // 801ADD24
  c->r[1]=c->r[1]+0x00000010u; // 801ADD28
  return; // 801ADD2C
}

// fn_801ADD30
void f_801ADD30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADD30
  c->r[0]=c->lr; // 801ADD34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADD38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADD3C
  c->r[31]=c->r[3]|c->r[3]; // 801ADD40
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801ADD44
  c->r[4]=0u+0x00000000u; // 801ADD48
  c->lr=0x801ADD50u; f_8012F910(c); // 801ADD4C
  c->r[3]=c->r[31]|c->r[31]; // 801ADD50
  c->lr=0x801ADD58u; f_801AD3A8(c); // 801ADD54
  c->r[3]=c->r[31]|c->r[31]; // 801ADD58
  c->lr=0x801ADD60u; f_801AD0AC(c); // 801ADD5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADD60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADD64
  c->lr=c->r[0]; // 801ADD68
  c->r[1]=c->r[1]+0x00000010u; // 801ADD6C
  return; // 801ADD70
}

// fn_801ADD74
void f_801ADD74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADD74
  c->r[0]=c->lr; // 801ADD78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADD7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADD80
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADD84
  c->r[30]=c->r[3]|c->r[3]; // 801ADD88
  c->r[31]=c->r[4]|c->r[4]; // 801ADD8C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801ADD90
  c->r[4]=0u+0x00000000u; // 801ADD94
  c->lr=0x801ADD9Cu; f_8012F910(c); // 801ADD98
  c->r[3]=c->r[30]|c->r[30]; // 801ADD9C
  c->r[4]=c->r[31]|c->r[31]; // 801ADDA0
  c->lr=0x801ADDA8u; f_801ADEC8(c); // 801ADDA4
  c->r[3]=c->r[30]|c->r[30]; // 801ADDA8
  c->lr=0x801ADDB0u; f_801AD0AC(c); // 801ADDAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADDB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADDB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADDB8
  c->lr=c->r[0]; // 801ADDBC
  c->r[1]=c->r[1]+0x00000010u; // 801ADDC0
  return; // 801ADDC4
}

// fn_801ADDC8
void f_801ADDC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADDC8
  c->r[0]=c->lr; // 801ADDCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADDD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADDD4
  c->r[31]=c->r[3]|c->r[3]; // 801ADDD8
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801ADDDC
  c->r[4]=0u+0x00000000u; // 801ADDE0
  c->lr=0x801ADDE8u; f_8012F910(c); // 801ADDE4
  c->r[3]=c->r[31]|c->r[31]; // 801ADDE8
  c->lr=0x801ADDF0u; f_801AD3F0(c); // 801ADDEC
  c->r[3]=c->r[31]|c->r[31]; // 801ADDF0
  c->lr=0x801ADDF8u; f_801AD0F4(c); // 801ADDF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADDF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADDFC
  c->lr=c->r[0]; // 801ADE00
  c->r[1]=c->r[1]+0x00000010u; // 801ADE04
  return; // 801ADE08
}

// fn_801ADE0C
void f_801ADE0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE0C
  c->r[0]=c->lr; // 801ADE10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADE18
  c->r[31]=c->r[3]|c->r[3]; // 801ADE1C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801ADE20
  c->r[4]=0u+0x00000000u; // 801ADE24
  c->lr=0x801ADE2Cu; f_8012F910(c); // 801ADE28
  c->r[3]=c->r[31]|c->r[31]; // 801ADE2C
  c->lr=0x801ADE34u; f_801AD604(c); // 801ADE30
  c->r[3]=c->r[31]|c->r[31]; // 801ADE34
  c->lr=0x801ADE3Cu; f_801AD0F4(c); // 801ADE38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADE3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADE40
  c->lr=c->r[0]; // 801ADE44
  c->r[1]=c->r[1]+0x00000010u; // 801ADE48
  return; // 801ADE4C
}

// fn_801ADE50
void f_801ADE50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE50
  c->r[0]=c->lr; // 801ADE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADE5C
  c->r[31]=c->r[3]|c->r[3]; // 801ADE60
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801ADE64
  c->r[4]=0u+0x00000000u; // 801ADE68
  c->lr=0x801ADE70u; f_8012F910(c); // 801ADE6C
  c->r[3]=c->r[31]|c->r[31]; // 801ADE70
  c->lr=0x801ADE78u; f_801AD0F4(c); // 801ADE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADE78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADE7C
  c->lr=c->r[0]; // 801ADE80
  c->r[1]=c->r[1]+0x00000010u; // 801ADE84
  return; // 801ADE88
}

// fn_801ADE8C
void f_801ADE8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADE8C
  c->r[0]=c->lr; // 801ADE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADE94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADE98
  c->r[31]=c->r[3]|c->r[3]; // 801ADE9C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801ADEA0
  c->r[4]=0u+0x00000000u; // 801ADEA4
  c->lr=0x801ADEACu; f_8012F910(c); // 801ADEA8
  c->r[3]=c->r[31]|c->r[31]; // 801ADEAC
  c->lr=0x801ADEB4u; f_801AD0F4(c); // 801ADEB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADEB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADEB8
  c->lr=c->r[0]; // 801ADEBC
  c->r[1]=c->r[1]+0x00000010u; // 801ADEC0
  return; // 801ADEC4
}

// fn_801ADEC8
void f_801ADEC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADEC8
  c->r[0]=c->lr; // 801ADECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADED4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ADED8
  c->r[30]=c->r[3]|c->r[3]; // 801ADEDC
  c->r[31]=c->r[4]|c->r[4]; // 801ADEE0
  cmps(c,0,(int32_t)c->r[4],0); // 801ADEE4
  if (crb(c,2)) { goto L_801ADEF4; } // 801ADEE8
  c->lr=0x801ADEF0u; f_801AD438(c); // 801ADEEC
  goto L_801ADEF8; // 801ADEF0
L_801ADEF4:;
  c->lr=0x801ADEF8u; f_801AD4F0(c); // 801ADEF4
L_801ADEF8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801ADEF8
  if (crb(c,2)) { goto L_801ADF0C; } // 801ADEFC
  c->r[3]=c->r[30]|c->r[30]; // 801ADF00
  c->lr=0x801ADF08u; f_801AD658(c); // 801ADF04
  goto L_801ADF14; // 801ADF08
L_801ADF0C:;
  c->r[3]=c->r[30]|c->r[30]; // 801ADF0C
  c->lr=0x801ADF14u; f_801AD6A4(c); // 801ADF10
L_801ADF14:;
  c->r[3]=c->r[30]|c->r[30]; // 801ADF14
  c->lr=0x801ADF1Cu; f_801AD144(c); // 801ADF18
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801ADF1C
  c->r[4]=0u+0x00000001u; // 801ADF20
  c->lr=0x801ADF28u; f_8012F910(c); // 801ADF24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADF28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ADF2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADF30
  c->lr=c->r[0]; // 801ADF34
  c->r[1]=c->r[1]+0x00000010u; // 801ADF38
  return; // 801ADF3C
}

// fn_801ADF40
void f_801ADF40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADF40
  c->r[0]=c->lr; // 801ADF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADF48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADF4C
  c->r[31]=c->r[3]|c->r[3]; // 801ADF50
  cmps(c,0,(int32_t)c->r[4],0); // 801ADF54
  if (crb(c,2)) { goto L_801ADF64; } // 801ADF58
  c->lr=0x801ADF60u; f_801AD488(c); // 801ADF5C
  goto L_801ADF68; // 801ADF60
L_801ADF64:;
  c->lr=0x801ADF68u; f_801AD540(c); // 801ADF64
L_801ADF68:;
  c->r[3]=c->r[31]|c->r[31]; // 801ADF68
  c->lr=0x801ADF70u; f_801AD144(c); // 801ADF6C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801ADF70
  c->r[4]=0u+0x00000001u; // 801ADF74
  c->lr=0x801ADF7Cu; f_8012F910(c); // 801ADF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADF7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADF80
  c->lr=c->r[0]; // 801ADF84
  c->r[1]=c->r[1]+0x00000010u; // 801ADF88
  return; // 801ADF8C
}

// fn_801ADF90
void f_801ADF90(Ctx* __restrict c) {
  f_801AD5A8(c); return; // 801ADF90
}

// fn_801ADF94
void f_801ADF94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADF94
  c->r[0]=c->lr; // 801ADF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADFA0
  c->r[31]=c->r[3]|c->r[3]; // 801ADFA4
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801ADFA8
  c->r[4]=0u+0x00000000u; // 801ADFAC
  c->lr=0x801ADFB4u; f_8012F910(c); // 801ADFB0
  c->r[3]=c->r[31]|c->r[31]; // 801ADFB4
  c->lr=0x801ADFBCu; f_801AE280(c); // 801ADFB8
  c->r[3]=c->r[31]|c->r[31]; // 801ADFBC
  c->lr=0x801ADFC4u; f_801AD7DC(c); // 801ADFC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ADFC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ADFC8
  c->lr=c->r[0]; // 801ADFCC
  c->r[1]=c->r[1]+0x00000010u; // 801ADFD0
  return; // 801ADFD4
}

// fn_801ADFD8
void f_801ADFD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ADFD8
  c->r[0]=c->lr; // 801ADFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ADFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ADFE4
  c->r[31]=c->r[3]|c->r[3]; // 801ADFE8
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801ADFEC
  c->r[4]=0u+0x00000000u; // 801ADFF0
  c->lr=0x801ADFF8u; f_8012F910(c); // 801ADFF4
  c->r[3]=c->r[31]|c->r[31]; // 801ADFF8
  c->lr=0x801AE000u; f_801AD818(c); // 801ADFFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE000
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE004
  c->lr=c->r[0]; // 801AE008
  c->r[1]=c->r[1]+0x00000010u; // 801AE00C
  return; // 801AE010
}

// fn_801AE014
void f_801AE014(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE014
  c->r[0]=c->lr; // 801AE018
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE01C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE020
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE024
  c->r[30]=c->r[3]|c->r[3]; // 801AE028
  c->r[31]=c->r[4]|c->r[4]; // 801AE02C
  c->lr=0x801AE034u; f_801AE2F0(c); // 801AE030
  cmps(c,0,(int32_t)c->r[3],0); // 801AE034
  if (crb(c,2)) { goto L_801AE048; } // 801AE038
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801AE03C
  c->r[4]=0u+0x00000001u; // 801AE040
  c->lr=0x801AE048u; f_8012F910(c); // 801AE044
L_801AE048:;
  c->r[3]=c->r[30]|c->r[30]; // 801AE048
  c->r[4]=c->r[31]|c->r[31]; // 801AE04C
  c->lr=0x801AE054u; f_801AE278(c); // 801AE050
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801AE054
  c->r[4]=c->r[31]|c->r[31]; // 801AE058
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE05C
  c->r[12]=R32(c->r[12]+0x00000078u); // 801AE060
  c->ctr=c->r[12]; // 801AE064
  if (true) { c->lr=0x801AE06Cu; dispatch(c,c->ctr); } // 801AE068
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801AE06C
  c->lr=0x801AE074u; f_801A58B8(c); // 801AE070
  c->r[4]=c->r[3]|c->r[3]; // 801AE074
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801AE078
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE07C
  c->r[12]=R32(c->r[12]+0x00000074u); // 801AE080
  c->ctr=c->r[12]; // 801AE084
  if (true) { c->lr=0x801AE08Cu; dispatch(c,c->ctr); } // 801AE088
  c->r[3]=R32(c->r[30]+0x000000D8u); // 801AE08C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE090
  c->r[12]=R32(c->r[12]+0x00000064u); // 801AE094
  c->ctr=c->r[12]; // 801AE098
  if (true) { c->lr=0x801AE0A0u; dispatch(c,c->ctr); } // 801AE09C
  c->r[3]=c->r[30]|c->r[30]; // 801AE0A0
  c->lr=0x801AE0A8u; f_801AD86C(c); // 801AE0A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE0A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE0AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE0B0
  c->lr=c->r[0]; // 801AE0B4
  c->r[1]=c->r[1]+0x00000010u; // 801AE0B8
  return; // 801AE0BC
}

// fn_801AE0C0
void f_801AE0C0(Ctx* __restrict c) {
  f_801AD8B4(c); return; // 801AE0C0
}

// fn_801AE0C4
void f_801AE0C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE0C4
  c->r[0]=c->lr; // 801AE0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE0D0
  c->r[31]=c->r[3]|c->r[3]; // 801AE0D4
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AE0D8
  c->lr=0x801AE0E0u; f_801A58B8(c); // 801AE0DC
  c->r[4]=c->r[3]|c->r[3]; // 801AE0E0
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AE0E4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE0E8
  c->r[12]=R32(c->r[12]+0x00000074u); // 801AE0EC
  c->ctr=c->r[12]; // 801AE0F0
  if (true) { c->lr=0x801AE0F8u; dispatch(c,c->ctr); } // 801AE0F4
  c->r[3]=c->r[31]|c->r[31]; // 801AE0F8
  c->lr=0x801AE100u; f_801AD8BC(c); // 801AE0FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE100
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE104
  c->lr=c->r[0]; // 801AE108
  c->r[1]=c->r[1]+0x00000010u; // 801AE10C
  return; // 801AE110
}

// fn_801AE114
void f_801AE114(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801AE114
  f_80148358(c); return; // 801AE118
}

// fn_801AE11C
void f_801AE11C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE11C
  c->r[0]=c->lr; // 801AE120
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE124
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE128
  c->r[31]=c->r[3]|c->r[3]; // 801AE12C
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AE130
  c->lr=0x801AE138u; f_801A5AA8(c); // 801AE134
  c->r[4]=c->r[3]|c->r[3]; // 801AE138
  c->r[3]=R32(c->r[31]+0x000000E0u); // 801AE13C
  c->lr=0x801AE144u; f_8013C6C8(c); // 801AE140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE144
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE148
  c->lr=c->r[0]; // 801AE14C
  c->r[1]=c->r[1]+0x00000010u; // 801AE150
  return; // 801AE154
}

// fn_801AE158
void f_801AE158(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801AE158
  f_8013C6D0(c); return; // 801AE15C
}

// fn_801AE160
void f_801AE160(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801AE160
  f_8013C6D8(c); return; // 801AE164
}

// fn_801AE168
void f_801AE168(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE168
  c->r[0]=c->lr; // 801AE16C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE170
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE174
  c->r[31]=c->r[3]|c->r[3]; // 801AE178
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801AE17C
  c->lr=0x801AE184u; f_8013F9D0(c); // 801AE180
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801AE184
  c->lr=0x801AE18Cu; f_801AB070(c); // 801AE188
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE18C
  c->lr=0x801AE194u; f_8013C6A8(c); // 801AE190
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801AE194
  c->lr=0x801AE19Cu; f_801AB09C(c); // 801AE198
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE19C
  c->lr=0x801AE1A4u; f_8013C6A0(c); // 801AE1A0
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE1A4
  c->lr=0x801AE1ACu; f_8013FBA4(c); // 801AE1A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE1AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE1B0
  c->lr=c->r[0]; // 801AE1B4
  c->r[1]=c->r[1]+0x00000010u; // 801AE1B8
  return; // 801AE1BC
}

// fn_801AE1C0
void f_801AE1C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE1C0
  c->r[0]=c->lr; // 801AE1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE1C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE1CC
  c->r[31]=c->r[3]|c->r[3]; // 801AE1D0
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801AE1D4
  c->lr=0x801AE1DCu; f_8013FBF0(c); // 801AE1D8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AE1DC
  c->lr=0x801AE1E4u; f_801AA818(c); // 801AE1E0
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE1E4
  c->lr=0x801AE1ECu; f_8013C6A8(c); // 801AE1E8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801AE1EC
  c->lr=0x801AE1F4u; f_801AA844(c); // 801AE1F0
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE1F4
  c->lr=0x801AE1FCu; f_8013C6A0(c); // 801AE1F8
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE1FC
  c->lr=0x801AE204u; f_8013FBA4(c); // 801AE200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE204
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE208
  c->lr=c->r[0]; // 801AE20C
  c->r[1]=c->r[1]+0x00000010u; // 801AE210
  return; // 801AE214
}

// fn_801AE218
void f_801AE218(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE218
  c->r[0]=c->lr; // 801AE21C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE224
  c->r[31]=c->r[3]|c->r[3]; // 801AE228
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801AE22C
  c->lr=0x801AE234u; f_8013F9D0(c); // 801AE230
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801AE234
  c->lr=0x801AE23Cu; f_801AB0C8(c); // 801AE238
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE23C
  c->lr=0x801AE244u; f_8013C6A8(c); // 801AE240
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801AE244
  c->lr=0x801AE24Cu; f_801AB0F4(c); // 801AE248
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE24C
  c->lr=0x801AE254u; f_8013C6A0(c); // 801AE250
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801AE254
  c->lr=0x801AE25Cu; f_8013FBA4(c); // 801AE258
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE25C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE260
  c->lr=c->r[0]; // 801AE264
  c->r[1]=c->r[1]+0x00000010u; // 801AE268
  return; // 801AE26C
}

// fn_801AE270
void f_801AE270(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801AE270
  f_8011271C(c); return; // 801AE274
}

// fn_801AE278
void f_801AE278(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801AE278
  f_80112714(c); return; // 801AE27C
}

// fn_801AE280
void f_801AE280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE280
  c->r[0]=c->lr; // 801AE284
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE28C
  c->r[31]=c->r[3]|c->r[3]; // 801AE290
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801AE294
  c->lr=0x801AE29Cu; f_8014039C(c); // 801AE298
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AE29C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE2A0
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801AE2A4
  c->ctr=c->r[12]; // 801AE2A8
  if (true) { c->lr=0x801AE2B0u; dispatch(c,c->ctr); } // 801AE2AC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801AE2B0
  c->lr=0x801AE2B8u; f_8013C6B8(c); // 801AE2B4
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AE2B8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE2BC
  c->r[12]=R32(c->r[12]+0x00000070u); // 801AE2C0
  c->ctr=c->r[12]; // 801AE2C4
  if (true) { c->lr=0x801AE2CCu; dispatch(c,c->ctr); } // 801AE2C8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801AE2CC
  c->lr=0x801AE2D4u; f_8013C6B0(c); // 801AE2D0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801AE2D4
  c->lr=0x801AE2DCu; f_80140570(c); // 801AE2D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE2DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE2E0
  c->lr=c->r[0]; // 801AE2E4
  c->r[1]=c->r[1]+0x00000010u; // 801AE2E8
  return; // 801AE2EC
}

// fn_801AE2F0
void f_801AE2F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE2F0
  c->r[0]=c->lr; // 801AE2F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE2F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE2FC
  c->r[31]=c->r[3]|c->r[3]; // 801AE300
  c->r[3]=R32(c->r[3]+0x000000D8u); // 801AE304
  c->lr=0x801AE30Cu; f_801ABB3C(c); // 801AE308
  cmps(c,0,(int32_t)c->r[3],0); // 801AE30C
  if (!crb(c,2)) { goto L_801AE31C; } // 801AE310
  c->r[3]=0u+0x00000000u; // 801AE314
  goto L_801AE33C; // 801AE318
L_801AE31C:;
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801AE31C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801AE320
  c->r[12]=R32(c->r[12]+0x00000068u); // 801AE324
  c->ctr=c->r[12]; // 801AE328
  if (true) { c->lr=0x801AE330u; dispatch(c,c->ctr); } // 801AE32C
  c->r[0]=0u-c->r[3]; // 801AE330
  c->r[0]=c->r[0]&~c->r[3]; // 801AE334
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801AE338
L_801AE33C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE33C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE340
  c->lr=c->r[0]; // 801AE344
  c->r[1]=c->r[1]+0x00000010u; // 801AE348
  return; // 801AE34C
}

// fn_801AE350
void f_801AE350(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 801AE350
  return; // 801AE354
}

// fn_801AE358
void f_801AE358(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AE358
  return; // 801AE35C
}

// fn_801AE360
void f_801AE360(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801AE360
  f_801C6DC8(c); return; // 801AE364
}

// fn_801AE368
void f_801AE368(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801AE368
  f_801C6DB8(c); return; // 801AE36C
}

// fn_801AE370
void f_801AE370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE370
  c->r[0]=c->lr; // 801AE374
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE37C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE380
  c->r[30]=c->r[3]|c->r[3]; // 801AE384
  c->r[31]=c->r[4]|c->r[4]; // 801AE388
  c->lr=0x801AE390u; f_801AE270(c); // 801AE38C
  c->r[3]=c->r[30]|c->r[30]; // 801AE390
  c->r[4]=c->r[31]|c->r[31]; // 801AE394
  c->lr=0x801AE39Cu; f_801AD188(c); // 801AE398
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE39C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE3A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE3A4
  c->lr=c->r[0]; // 801AE3A8
  c->r[1]=c->r[1]+0x00000010u; // 801AE3AC
  return; // 801AE3B0
}

// fn_801AE3B4
void f_801AE3B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE3B4
  c->r[0]=c->lr; // 801AE3B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE3BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE3C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE3C4
  c->r[30]=c->r[3]|c->r[3]; // 801AE3C8
  c->r[31]=c->r[4]|c->r[4]; // 801AE3CC
  c->lr=0x801AE3D4u; f_801AE270(c); // 801AE3D0
  c->r[3]=c->r[30]|c->r[30]; // 801AE3D4
  c->r[4]=c->r[31]|c->r[31]; // 801AE3D8
  c->lr=0x801AE3E0u; f_801AD180(c); // 801AE3DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE3E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE3E8
  c->lr=c->r[0]; // 801AE3EC
  c->r[1]=c->r[1]+0x00000010u; // 801AE3F0
  return; // 801AE3F4
}

// fn_801AE3F8
void f_801AE3F8(Ctx* __restrict c) {
  W32(c->r[3]+0x000000ECu,c->r[4]); // 801AE3F8
  return; // 801AE3FC
}

// fn_801AE400
void f_801AE400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE400
  c->r[0]=c->lr; // 801AE404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE40C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE410
  c->r[30]=c->r[3]|c->r[3]; // 801AE414
  c->r[31]=c->r[4]|c->r[4]; // 801AE418
  c->lr=0x801AE420u; f_801AE270(c); // 801AE41C
  c->r[3]=c->r[30]|c->r[30]; // 801AE420
  c->r[4]=c->r[31]|c->r[31]; // 801AE424
  c->lr=0x801AE42Cu; f_801AD7CC(c); // 801AE428
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE42C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE430
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE434
  c->lr=c->r[0]; // 801AE438
  c->r[1]=c->r[1]+0x00000010u; // 801AE43C
  return; // 801AE440
}

// fn_801AE444
void f_801AE444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE444
  c->r[0]=c->lr; // 801AE448
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE44C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE450
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE454
  c->r[30]=c->r[3]|c->r[3]; // 801AE458
  c->r[31]=c->r[4]|c->r[4]; // 801AE45C
  c->lr=0x801AE464u; f_801AD7C4(c); // 801AE460
  c->r[3]=c->r[30]|c->r[30]; // 801AE464
  c->r[4]=c->r[31]|c->r[31]; // 801AE468
  c->lr=0x801AE470u; f_801AE158(c); // 801AE46C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE470
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE474
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE478
  c->lr=c->r[0]; // 801AE47C
  c->r[1]=c->r[1]+0x00000010u; // 801AE480
  return; // 801AE484
}

// fn_801AE488
void f_801AE488(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AE488
  f_801A5ADC(c); return; // 801AE48C
}

// fn_801AE490
void f_801AE490(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AE490
  f_801A58B8(c); return; // 801AE494
}

// fn_801AE498
void f_801AE498(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AE498
  f_801A5AB8(c); return; // 801AE49C
}

// fn_801AE4A0
void f_801AE4A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801AE4A0
  f_801A5874(c); return; // 801AE4A4
}

// fn_801AE4A8
void f_801AE4A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801AE4A8
  f_8011400C(c); return; // 801AE4AC
}

// fn_801AE4B0
void f_801AE4B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E0u); // 801AE4B0
  f_80114070(c); return; // 801AE4B4
}

// fn_801AE4B8
void f_801AE4B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE4B8
  c->r[0]=c->lr; // 801AE4BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE4C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE4C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE4C8
  c->r[30]=c->r[3]|c->r[3]; // 801AE4CC
  c->r[31]=c->r[4]|c->r[4]; // 801AE4D0
  cmps(c,0,(int32_t)c->r[3],0); // 801AE4D4
  if (crb(c,2)) { goto L_801AE4F8; } // 801AE4D8
  c->r[4]=0u+0x00000000u; // 801AE4DC
  c->lr=0x801AE4E4u; f_8012FB1C(c); // 801AE4E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801AE4E4
  cmps(c,0,(int32_t)c->r[0],0); // 801AE4E8
  if (!crb(c,1)) { goto L_801AE4F8; } // 801AE4EC
  c->r[3]=c->r[30]|c->r[30]; // 801AE4F0
  c->lr=0x801AE4F8u; f_80047B20(c); // 801AE4F4
L_801AE4F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801AE4F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE4FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE500
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE504
  c->lr=c->r[0]; // 801AE508
  c->r[1]=c->r[1]+0x00000010u; // 801AE50C
  return; // 801AE510
}

// fn_801AE514
void f_801AE514(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE514
  c->r[0]=c->lr; // 801AE518
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE51C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE520
  c->r[31]=c->r[3]|c->r[3]; // 801AE524
  c->lr=0x801AE52Cu; f_801A5EE4(c); // 801AE528
  c->r[3]=0u+0x80470000u; // 801AE52C
  c->r[0]=c->r[3]+0x00000D90u; // 801AE530
  W32(c->r[31]+0x00000058u,c->r[0]); // 801AE534
  c->r[3]=c->r[31]|c->r[31]; // 801AE538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE53C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE540
  c->lr=c->r[0]; // 801AE544
  c->r[1]=c->r[1]+0x00000010u; // 801AE548
  return; // 801AE54C
}

// fn_801AE550
void f_801AE550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE550
  c->r[0]=c->lr; // 801AE554
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE55C
  c->r[31]=c->r[3]|c->r[3]; // 801AE560
  c->lr=0x801AE568u; f_801A3F30(c); // 801AE564
  c->r[3]=0u+0x80470000u; // 801AE568
  c->r[0]=c->r[3]+0x00000C98u; // 801AE56C
  W32(c->r[31]+0x00000058u,c->r[0]); // 801AE570
  c->r[3]=c->r[31]|c->r[31]; // 801AE574
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE578
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE57C
  c->lr=c->r[0]; // 801AE580
  c->r[1]=c->r[1]+0x00000010u; // 801AE584
  return; // 801AE588
}

// fn_801AE58C
void f_801AE58C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E4u,c->r[4]); // 801AE58C
  return; // 801AE590
}

// fn_801AE594
void f_801AE594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE594
  c->r[0]=c->lr; // 801AE598
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE59C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE5A0
  c->r[31]=c->r[3]|c->r[3]; // 801AE5A4
  c->lr=0x801AE5ACu; f_8012FBEC(c); // 801AE5A8
  c->r[3]=0u+0x80470000u; // 801AE5AC
  c->r[0]=c->r[3]+0x00000E08u; // 801AE5B0
  W32(c->r[31]+0x00000044u,c->r[0]); // 801AE5B4
  c->r[3]=c->r[31]+0x00000048u; // 801AE5B8
  c->lr=0x801AE5C0u; f_800592DC(c); // 801AE5BC
  c->r[3]=c->r[31]+0x00000050u; // 801AE5C0
  c->lr=0x801AE5C8u; f_800592DC(c); // 801AE5C4
  c->r[3]=c->r[31]+0x0000005Cu; // 801AE5C8
  c->lr=0x801AE5D0u; f_800592DC(c); // 801AE5CC
  c->r[3]=c->r[31]+0x00000064u; // 801AE5D0
  c->lr=0x801AE5D8u; f_800592DC(c); // 801AE5D4
  c->r[3]=c->r[31]+0x00000070u; // 801AE5D8
  c->lr=0x801AE5E0u; f_800592DC(c); // 801AE5DC
  c->r[3]=c->r[31]+0x00000048u; // 801AE5E0
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801AE5E4
  c->lr=0x801AE5ECu; f_800593A0(c); // 801AE5E8
  c->r[3]=c->r[31]+0x00000050u; // 801AE5EC
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801AE5F0
  c->lr=0x801AE5F8u; f_800593A0(c); // 801AE5F4
  c->r[3]=c->r[31]+0x0000005Cu; // 801AE5F8
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801AE5FC
  c->lr=0x801AE604u; f_800593A0(c); // 801AE600
  c->r[3]=c->r[31]+0x00000050u; // 801AE604
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801AE608
  c->lr=0x801AE610u; f_800593A0(c); // 801AE60C
  c->r[3]=c->r[31]+0x00000070u; // 801AE610
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801AE614
  c->lr=0x801AE61Cu; f_800593A0(c); // 801AE618
  {uint32_t ea=c->r[2]+0xFFFF92F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE61C
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 801AE620
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 801AE624
  c->r[3]=c->r[31]|c->r[31]; // 801AE628
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE62C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE630
  c->lr=c->r[0]; // 801AE634
  c->r[1]=c->r[1]+0x00000010u; // 801AE638
  return; // 801AE63C
}

// fn_801AE640
void f_801AE640(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801AE640
  f_800593A0(c); return; // 801AE644
}

// fn_801AE648
void f_801AE648(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE648
  return; // 801AE64C
}

// fn_801AE650
void f_801AE650(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE650
  return; // 801AE654
}

// fn_801AE658
void f_801AE658(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000050u; // 801AE658
  f_800593A0(c); return; // 801AE65C
}

// fn_801AE660
void f_801AE660(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE660
  return; // 801AE664
}

// fn_801AE668
void f_801AE668(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE668
  return; // 801AE66C
}

// fn_801AE670
void f_801AE670(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE670
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801AE674
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 801AE678
  return; // 801AE67C
}

// fn_801AE680
void f_801AE680(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE680
  return; // 801AE684
}

// fn_801AE688
void f_801AE688(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000005Cu; // 801AE688
  f_800593A0(c); return; // 801AE68C
}

// fn_801AE690
void f_801AE690(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE690
  return; // 801AE694
}

// fn_801AE698
void f_801AE698(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE698
  return; // 801AE69C
}

// fn_801AE6A0
void f_801AE6A0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000064u; // 801AE6A0
  f_800593A0(c); return; // 801AE6A4
}

// fn_801AE6A8
void f_801AE6A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE6A8
  return; // 801AE6AC
}

// fn_801AE6B0
void f_801AE6B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE6B0
  return; // 801AE6B4
}

// fn_801AE6B8
void f_801AE6B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF92FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801AE6B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801AE6BC
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 801AE6C0
  return; // 801AE6C4
}

// fn_801AE6C8
void f_801AE6C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE6C8
  return; // 801AE6CC
}

// fn_801AE6D0
void f_801AE6D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801AE6D0
  f_800593A0(c); return; // 801AE6D4
}

// fn_801AE6D8
void f_801AE6D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE6D8
  return; // 801AE6DC
}

// fn_801AE6E0
void f_801AE6E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801AE6E0
  return; // 801AE6E4
}

// fn_801AE6E8
void f_801AE6E8(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801AE6E8
  c->r[3]=c->r[3]+0x00000898u; // 801AE6EC
  return; // 801AE6F0
}

// fn_801AE6F4
void f_801AE6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE6F4
  c->r[0]=c->lr; // 801AE6F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE6FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE700
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AE704
  c->r[30]=c->r[3]|c->r[3]; // 801AE708
  c->r[31]=c->r[4]|c->r[4]; // 801AE70C
  cmps(c,0,(int32_t)c->r[3],0); // 801AE710
  if (crb(c,2)) { goto L_801AE734; } // 801AE714
  c->r[4]=0u+0x00000000u; // 801AE718
  c->lr=0x801AE720u; f_801197A8(c); // 801AE71C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801AE720
  cmps(c,0,(int32_t)c->r[0],0); // 801AE724
  if (!crb(c,1)) { goto L_801AE734; } // 801AE728
  c->r[3]=c->r[30]|c->r[30]; // 801AE72C
  c->lr=0x801AE734u; f_80047B20(c); // 801AE730
L_801AE734:;
  c->r[3]=c->r[30]|c->r[30]; // 801AE734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE738
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AE73C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE740
  c->lr=c->r[0]; // 801AE744
  c->r[1]=c->r[1]+0x00000010u; // 801AE748
  return; // 801AE74C
}

// fn_801AE750
void f_801AE750(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE750
  c->r[0]=c->lr; // 801AE754
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AE758
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AE75C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AE760
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AE764
  c->r[29]=c->r[3]|c->r[3]; // 801AE768
  c->lr=0x801AE770u; f_80056B5C(c); // 801AE76C
  c->r[30]=c->r[3]|c->r[3]; // 801AE770
  c->lr=0x801AE778u; f_8005DEE8(c); // 801AE774
  c->lr=0x801AE77Cu; f_80056B54(c); // 801AE778
  c->r[3]=0u+0x00000078u; // 801AE77C
  c->lr=0x801AE784u; f_80047B64(c); // 801AE780
  c->r[31]=c->r[3]|c->r[3]; // 801AE784
  cmps(c,0,(int32_t)c->r[3],0); // 801AE788
  if (crb(c,2)) { goto L_801AE794; } // 801AE78C
  c->lr=0x801AE794u; f_801AE594(c); // 801AE790
L_801AE794:;
  c->r[3]=c->r[30]|c->r[30]; // 801AE794
  c->lr=0x801AE79Cu; f_80056B54(c); // 801AE798
  c->r[3]=c->r[31]|c->r[31]; // 801AE79C
  c->r[4]=0u+0x00000006u; // 801AE7A0
  c->lr=0x801AE7A8u; f_8011A278(c); // 801AE7A4
  c->r[3]=c->r[29]|c->r[29]; // 801AE7A8
  c->r[4]=c->r[31]|c->r[31]; // 801AE7AC
  c->lr=0x801AE7B4u; f_8028CA70(c); // 801AE7B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AE7B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AE7B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AE7BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AE7C0
  c->lr=c->r[0]; // 801AE7C4
  c->r[1]=c->r[1]+0x00000020u; // 801AE7C8
  return; // 801AE7CC
}

// fn_801AE7D0
void f_801AE7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE7D0
  c->r[0]=c->lr; // 801AE7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE7D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE7DC
  c->r[31]=c->r[4]|c->r[4]; // 801AE7E0
  c->r[4]=0u+0x00000006u; // 801AE7E4
  c->lr=0x801AE7ECu; f_8011B718(c); // 801AE7E8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE7EC
  if (crb(c,2)) { goto L_801AE7FC; } // 801AE7F0
  c->r[4]=c->r[31]|c->r[31]; // 801AE7F4
  c->lr=0x801AE7FCu; f_801AE640(c); // 801AE7F8
L_801AE7FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE7FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE800
  c->lr=c->r[0]; // 801AE804
  c->r[1]=c->r[1]+0x00000010u; // 801AE808
  return; // 801AE80C
}

// fn_801AE810
void f_801AE810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE810
  c->r[0]=c->lr; // 801AE814
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE81C
  c->r[31]=c->r[4]|c->r[4]; // 801AE820
  c->r[4]=0u+0x00000006u; // 801AE824
  c->lr=0x801AE82Cu; f_8011B718(c); // 801AE828
  cmps(c,0,(int32_t)c->r[3],0); // 801AE82C
  if (crb(c,2)) { goto L_801AE83C; } // 801AE830
  c->r[4]=c->r[31]|c->r[31]; // 801AE834
  c->lr=0x801AE83Cu; f_801AE658(c); // 801AE838
L_801AE83C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE83C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE840
  c->lr=c->r[0]; // 801AE844
  c->r[1]=c->r[1]+0x00000010u; // 801AE848
  return; // 801AE84C
}

// fn_801AE850
void f_801AE850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE850
  c->r[0]=c->lr; // 801AE854
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE858
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801AE85C
  c->f[31]=c->f[1]; // 801AE860
  c->r[4]=0u+0x00000006u; // 801AE864
  c->lr=0x801AE86Cu; f_8011B718(c); // 801AE868
  cmps(c,0,(int32_t)c->r[3],0); // 801AE86C
  if (crb(c,2)) { goto L_801AE87C; } // 801AE870
  c->f[1]=c->f[31]; // 801AE874
  c->lr=0x801AE87Cu; f_801AE670(c); // 801AE878
L_801AE87C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801AE87C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE880
  c->lr=c->r[0]; // 801AE884
  c->r[1]=c->r[1]+0x00000010u; // 801AE888
  return; // 801AE88C
}

// fn_801AE890
void f_801AE890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE890
  c->r[0]=c->lr; // 801AE894
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE89C
  c->r[31]=c->r[4]|c->r[4]; // 801AE8A0
  c->r[4]=0u+0x00000006u; // 801AE8A4
  c->lr=0x801AE8ACu; f_8011B718(c); // 801AE8A8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE8AC
  if (crb(c,2)) { goto L_801AE8BC; } // 801AE8B0
  c->r[4]=c->r[31]|c->r[31]; // 801AE8B4
  c->lr=0x801AE8BCu; f_801AE688(c); // 801AE8B8
L_801AE8BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE8C0
  c->lr=c->r[0]; // 801AE8C4
  c->r[1]=c->r[1]+0x00000010u; // 801AE8C8
  return; // 801AE8CC
}

// fn_801AE8D0
void f_801AE8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE8D0
  c->r[0]=c->lr; // 801AE8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE8DC
  c->r[31]=c->r[4]|c->r[4]; // 801AE8E0
  c->r[4]=0u+0x00000006u; // 801AE8E4
  c->lr=0x801AE8ECu; f_8011B718(c); // 801AE8E8
  cmps(c,0,(int32_t)c->r[3],0); // 801AE8EC
  if (crb(c,2)) { goto L_801AE8FC; } // 801AE8F0
  c->r[4]=c->r[31]|c->r[31]; // 801AE8F4
  c->lr=0x801AE8FCu; f_801AE6A0(c); // 801AE8F8
L_801AE8FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE8FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE900
  c->lr=c->r[0]; // 801AE904
  c->r[1]=c->r[1]+0x00000010u; // 801AE908
  return; // 801AE90C
}

// fn_801AE910
void f_801AE910(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE910
  c->r[0]=c->lr; // 801AE914
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE918
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801AE91C
  c->f[31]=c->f[1]; // 801AE920
  c->r[4]=0u+0x00000006u; // 801AE924
  c->lr=0x801AE92Cu; f_8011B718(c); // 801AE928
  cmps(c,0,(int32_t)c->r[3],0); // 801AE92C
  if (crb(c,2)) { goto L_801AE93C; } // 801AE930
  c->f[1]=c->f[31]; // 801AE934
  c->lr=0x801AE93Cu; f_801AE6B8(c); // 801AE938
L_801AE93C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801AE93C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE940
  c->lr=c->r[0]; // 801AE944
  c->r[1]=c->r[1]+0x00000010u; // 801AE948
  return; // 801AE94C
}

// fn_801AE950
void f_801AE950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE950
  c->r[0]=c->lr; // 801AE954
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE95C
  c->r[31]=c->r[4]|c->r[4]; // 801AE960
  c->r[4]=0u+0x00000006u; // 801AE964
  c->lr=0x801AE96Cu; f_8011B718(c); // 801AE968
  cmps(c,0,(int32_t)c->r[3],0); // 801AE96C
  if (crb(c,2)) { goto L_801AE97C; } // 801AE970
  c->r[4]=c->r[31]|c->r[31]; // 801AE974
  c->lr=0x801AE97Cu; f_801AE6D0(c); // 801AE978
L_801AE97C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE97C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE980
  c->lr=c->r[0]; // 801AE984
  c->r[1]=c->r[1]+0x00000010u; // 801AE988
  return; // 801AE98C
}

// fn_801AE990
void f_801AE990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE990
  c->r[0]=c->lr; // 801AE994
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE99C
  c->r[31]=c->r[3]|c->r[3]; // 801AE9A0
  c->lr=0x801AE9A8u; f_8011B41C(c); // 801AE9A4
  c->r[4]=c->r[31]|c->r[31]; // 801AE9A8
  c->lr=0x801AE9B0u; f_801AE7D0(c); // 801AE9AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE9B4
  c->lr=c->r[0]; // 801AE9B8
  c->r[1]=c->r[1]+0x00000010u; // 801AE9BC
  return; // 801AE9C0
}

// fn_801AE9C4
void f_801AE9C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE9C4
  c->r[0]=c->lr; // 801AE9C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AE9CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AE9D0
  c->r[31]=c->r[3]|c->r[3]; // 801AE9D4
  c->lr=0x801AE9DCu; f_8011B41C(c); // 801AE9D8
  c->r[4]=c->r[31]|c->r[31]; // 801AE9DC
  c->lr=0x801AE9E4u; f_801AE810(c); // 801AE9E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AE9E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AE9E8
  c->lr=c->r[0]; // 801AE9EC
  c->r[1]=c->r[1]+0x00000010u; // 801AE9F0
  return; // 801AE9F4
}

// fn_801AE9F8
void f_801AE9F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AE9F8
  c->r[0]=c->lr; // 801AE9FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEA00
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801AEA04
  c->f[31]=c->f[1]; // 801AEA08
  c->lr=0x801AEA10u; f_8011B41C(c); // 801AEA0C
  c->f[1]=c->f[31]; // 801AEA10
  c->lr=0x801AEA18u; f_801AE850(c); // 801AEA14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801AEA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEA1C
  c->lr=c->r[0]; // 801AEA20
  c->r[1]=c->r[1]+0x00000010u; // 801AEA24
  return; // 801AEA28
}

// fn_801AEA2C
void f_801AEA2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEA2C
  c->r[0]=c->lr; // 801AEA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEA38
  c->r[31]=c->r[3]|c->r[3]; // 801AEA3C
  c->lr=0x801AEA44u; f_8011B41C(c); // 801AEA40
  c->r[4]=c->r[31]|c->r[31]; // 801AEA44
  c->lr=0x801AEA4Cu; f_801AE890(c); // 801AEA48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEA4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEA50
  c->lr=c->r[0]; // 801AEA54
  c->r[1]=c->r[1]+0x00000010u; // 801AEA58
  return; // 801AEA5C
}

// fn_801AEA60
void f_801AEA60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEA60
  c->r[0]=c->lr; // 801AEA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEA68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEA6C
  c->r[31]=c->r[3]|c->r[3]; // 801AEA70
  c->lr=0x801AEA78u; f_8011B41C(c); // 801AEA74
  c->r[4]=c->r[31]|c->r[31]; // 801AEA78
  c->lr=0x801AEA80u; f_801AE8D0(c); // 801AEA7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEA80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEA84
  c->lr=c->r[0]; // 801AEA88
  c->r[1]=c->r[1]+0x00000010u; // 801AEA8C
  return; // 801AEA90
}

// fn_801AEA94
void f_801AEA94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEA94
  c->r[0]=c->lr; // 801AEA98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEA9C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801AEAA0
  c->f[31]=c->f[1]; // 801AEAA4
  c->lr=0x801AEAACu; f_8011B41C(c); // 801AEAA8
  c->f[1]=c->f[31]; // 801AEAAC
  c->lr=0x801AEAB4u; f_801AE910(c); // 801AEAB0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801AEAB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEAB8
  c->lr=c->r[0]; // 801AEABC
  c->r[1]=c->r[1]+0x00000010u; // 801AEAC0
  return; // 801AEAC4
}

// fn_801AEAC8
void f_801AEAC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEAC8
  c->r[0]=c->lr; // 801AEACC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEAD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEAD4
  c->r[31]=c->r[3]|c->r[3]; // 801AEAD8
  c->lr=0x801AEAE0u; f_8011B41C(c); // 801AEADC
  c->r[4]=c->r[31]|c->r[31]; // 801AEAE0
  c->lr=0x801AEAE8u; f_801AE950(c); // 801AEAE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEAE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEAEC
  c->lr=c->r[0]; // 801AEAF0
  c->r[1]=c->r[1]+0x00000010u; // 801AEAF4
  return; // 801AEAF8
}

// fn_801AEAFC
void f_801AEAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEAFC
  c->r[0]=c->lr; // 801AEB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEB04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEB08
  c->r[31]=c->r[3]|c->r[3]; // 801AEB0C
  c->lr=0x801AEB14u; f_80130F14(c); // 801AEB10
  c->r[3]=0u+0x80470000u; // 801AEB14
  c->r[0]=c->r[3]+0x00001070u; // 801AEB18
  W32(c->r[31]+0x00000058u,c->r[0]); // 801AEB1C
  c->r[3]=c->r[31]|c->r[31]; // 801AEB20
  c->r[4]=0u+0x80470000u; // 801AEB24
  c->r[4]=c->r[4]+0x00000E30u; // 801AEB28
  c->lr=0x801AEB30u; f_80131078(c); // 801AEB2C
  c->r[0]=0u+0x00000000u; // 801AEB30
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801AEB34
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801AEB38
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801AEB3C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801AEB40
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801AEB44
  c->r[3]=c->r[31]|c->r[31]; // 801AEB48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEB4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEB50
  c->lr=c->r[0]; // 801AEB54
  c->r[1]=c->r[1]+0x00000010u; // 801AEB58
  return; // 801AEB5C
}

// fn_801AEB60
void f_801AEB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEB60
  c->r[0]=c->lr; // 801AEB64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEB68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEB6C
  c->r[31]=c->r[3]|c->r[3]; // 801AEB70
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AEB74
  c->lr=0x801AEB7Cu; f_801AE360(c); // 801AEB78
  c->r[4]=c->r[3]|c->r[3]; // 801AEB7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEB80
  c->lr=0x801AEB88u; f_801A6D20(c); // 801AEB84
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEB88
  c->lr=0x801AEB90u; f_801A6D18(c); // 801AEB8C
  c->r[4]=c->r[3]|c->r[3]; // 801AEB90
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEB94
  c->lr=0x801AEB9Cu; f_801AE270(c); // 801AEB98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEB9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEBA0
  c->lr=c->r[0]; // 801AEBA4
  c->r[1]=c->r[1]+0x00000010u; // 801AEBA8
  return; // 801AEBAC
}

// fn_801AEBB0
void f_801AEBB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEBB0
  c->r[0]=c->lr; // 801AEBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEBB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEBBC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AEBC0
  c->r[30]=c->r[3]|c->r[3]; // 801AEBC4
  c->r[31]=c->r[4]|c->r[4]; // 801AEBC8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AEBCC
  c->lr=0x801AEBD4u; f_801A6BE4(c); // 801AEBD0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AEBD4
  c->r[4]=c->r[31]|c->r[31]; // 801AEBD8
  c->lr=0x801AEBE0u; f_801AD940(c); // 801AEBDC
  c->r[4]=c->r[3]|c->r[3]; // 801AEBE0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AEBE4
  c->lr=0x801AEBECu; f_801A738C(c); // 801AEBE8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AEBEC
  c->lr=0x801AEBF4u; f_801AD928(c); // 801AEBF0
  c->r[4]=c->r[3]|c->r[3]; // 801AEBF4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AEBF8
  c->lr=0x801AEC00u; f_801A7394(c); // 801AEBFC
  cmps(c,0,(int32_t)c->r[31],0); // 801AEC00
  if (crb(c,2)) { goto L_801AEC14; } // 801AEC04
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AEC08
  c->lr=0x801AEC10u; f_801A739C(c); // 801AEC0C
  goto L_801AEC1C; // 801AEC10
L_801AEC14:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AEC14
  c->lr=0x801AEC1Cu; f_801A7448(c); // 801AEC18
L_801AEC1C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEC1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AEC20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEC24
  c->lr=c->r[0]; // 801AEC28
  c->r[1]=c->r[1]+0x00000010u; // 801AEC2C
  return; // 801AEC30
}

// fn_801AEC34
void f_801AEC34(Ctx* __restrict c) {
  return; // 801AEC34
}

// fn_801AEC38
void f_801AEC38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEC38
  c->r[0]=c->lr; // 801AEC3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801AEC40
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801AEC44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801AEC48
  W32(c->r[1]+0x00000014u,c->r[29]); // 801AEC4C
  c->r[29]=c->r[3]|c->r[3]; // 801AEC50
  c->r[3]=0u+0x00000006u; // 801AEC54
  c->lr=0x801AEC5Cu; f_801F1364(c); // 801AEC58
  c->r[3]=c->r[29]|c->r[29]; // 801AEC5C
  c->r[4]=0u+0x00000000u; // 801AEC60
  c->lr=0x801AEC68u; f_80131168(c); // 801AEC64
  c->r[3]=c->r[29]|c->r[29]; // 801AEC68
  c->r[4]=0u+0x00000000u; // 801AEC6C
  c->lr=0x801AEC74u; f_80131184(c); // 801AEC70
  c->lr=0x801AEC78u; f_80056B5C(c); // 801AEC74
  c->r[30]=c->r[3]|c->r[3]; // 801AEC78
  c->lr=0x801AEC80u; f_801F1340(c); // 801AEC7C
  c->lr=0x801AEC84u; f_80056B54(c); // 801AEC80
  c->r[3]=0u+0x000001E0u; // 801AEC84
  c->lr=0x801AEC8Cu; f_80047B64(c); // 801AEC88
  c->r[31]=c->r[3]|c->r[3]; // 801AEC8C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEC90
  if (crb(c,2)) { goto L_801AEC9C; } // 801AEC94
  c->lr=0x801AEC9Cu; f_801A62E8(c); // 801AEC98
L_801AEC9C:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801AEC9C
  c->r[3]=c->r[30]|c->r[30]; // 801AECA0
  c->lr=0x801AECA8u; f_80056B54(c); // 801AECA4
  c->lr=0x801AECACu; f_80056B5C(c); // 801AECA8
  c->r[30]=c->r[3]|c->r[3]; // 801AECAC
  c->lr=0x801AECB4u; f_801F1340(c); // 801AECB0
  c->lr=0x801AECB8u; f_80056B54(c); // 801AECB4
  c->r[3]=0u+0x000000F0u; // 801AECB8
  c->lr=0x801AECC0u; f_80047B64(c); // 801AECBC
  c->r[31]=c->r[3]|c->r[3]; // 801AECC0
  cmps(c,0,(int32_t)c->r[3],0); // 801AECC4
  if (crb(c,2)) { goto L_801AECD0; } // 801AECC8
  c->lr=0x801AECD0u; f_801AC6F0(c); // 801AECCC
L_801AECD0:;
  W32(c->r[29]+0x000000F8u,c->r[31]); // 801AECD0
  c->r[3]=c->r[30]|c->r[30]; // 801AECD4
  c->lr=0x801AECDCu; f_80056B54(c); // 801AECD8
  c->r[3]=R32(c->r[29]+0x000000F8u); // 801AECDC
  c->lr=0x801AECE4u; f_801AC75C(c); // 801AECE0
  c->r[3]=c->r[29]|c->r[29]; // 801AECE4
  c->r[4]=0u+0x00000001u; // 801AECE8
  c->lr=0x801AECF0u; f_801311BC(c); // 801AECEC
  c->r[3]=c->r[29]|c->r[29]; // 801AECF0
  c->r[4]=0u+0x00000000u; // 801AECF4
  c->lr=0x801AECFCu; f_8013114C(c); // 801AECF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801AECFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801AED00
  c->r[29]=R32(c->r[1]+0x00000014u); // 801AED04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801AED08
  c->lr=c->r[0]; // 801AED0C
  c->r[1]=c->r[1]+0x00000020u; // 801AED10
  return; // 801AED14
}

// fn_801AED18
void f_801AED18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED18
  c->r[0]=c->lr; // 801AED1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AED20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AED24
  c->r[31]=c->r[3]|c->r[3]; // 801AED28
  c->r[0]=0u+0x00000005u; // 801AED2C
  W32(c->r[3]+0x000000ECu,c->r[0]); // 801AED30
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AED34
  c->r[4]=0u+0x00000000u; // 801AED38
  c->lr=0x801AED40u; f_801AE350(c); // 801AED3C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AED40
  c->lr=0x801AED48u; f_801ACF54(c); // 801AED44
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AED48
  c->lr=0x801AED50u; f_801AD190(c); // 801AED4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AED50
  c->lr=0x801AED58u; f_801A63F0(c); // 801AED54
  c->r[3]=c->r[31]|c->r[31]; // 801AED58
  c->r[4]=0u+0x00000005u; // 801AED5C
  c->lr=0x801AED64u; f_8013114C(c); // 801AED60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AED64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AED68
  c->lr=c->r[0]; // 801AED6C
  c->r[1]=c->r[1]+0x00000010u; // 801AED70
  return; // 801AED74
}

// fn_801AED78
void f_801AED78(Ctx* __restrict c) {
  c->r[4]=0u+0x00000028u; // 801AED78
  f_8013114C(c); return; // 801AED7C
}

// fn_801AED80
void f_801AED80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AED80
  c->r[0]=c->lr; // 801AED84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AED88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AED8C
  c->r[31]=c->r[3]|c->r[3]; // 801AED90
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AED94
  c->lr=0x801AED9Cu; f_801AD19C(c); // 801AED98
  cmps(c,0,(int32_t)c->r[3],0); // 801AED9C
  if (crb(c,2)) { goto L_801AEDB8; } // 801AEDA0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEDA4
  c->lr=0x801AEDACu; f_801AD1A0(c); // 801AEDA8
  c->r[3]=c->r[31]|c->r[31]; // 801AEDAC
  c->r[4]=0u+0x00000028u; // 801AEDB0
  c->lr=0x801AEDB8u; f_8013114C(c); // 801AEDB4
L_801AEDB8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEDB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEDBC
  c->lr=c->r[0]; // 801AEDC0
  c->r[1]=c->r[1]+0x00000010u; // 801AEDC4
  return; // 801AEDC8
}

// fn_801AEDCC
void f_801AEDCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEDCC
  c->r[0]=c->lr; // 801AEDD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEDD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEDD8
  c->r[31]=c->r[3]|c->r[3]; // 801AEDDC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AEDE0
  c->r[4]=0u+0x00000001u; // 801AEDE4
  c->lr=0x801AEDECu; f_801AE350(c); // 801AEDE8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEDEC
  c->lr=0x801AEDF4u; f_801ACF54(c); // 801AEDF0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEDF4
  c->lr=0x801AEDFCu; f_801AD1A4(c); // 801AEDF8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEDFC
  c->lr=0x801AEE04u; f_801A74F4(c); // 801AEE00
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEE04
  c->r[4]=0u+0x00000001u; // 801AEE08
  c->lr=0x801AEE10u; f_801A7640(c); // 801AEE0C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEE10
  c->lr=0x801AEE18u; f_801A6ABC(c); // 801AEE14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEE18
  c->lr=0x801AEE20u; f_801A63F0(c); // 801AEE1C
  c->r[3]=c->r[31]|c->r[31]; // 801AEE20
  c->lr=0x801AEE28u; f_801AEB60(c); // 801AEE24
  c->r[3]=c->r[31]|c->r[31]; // 801AEE28
  c->r[4]=0u+0x00000006u; // 801AEE2C
  c->lr=0x801AEE34u; f_8013114C(c); // 801AEE30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEE34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEE38
  c->lr=c->r[0]; // 801AEE3C
  c->r[1]=c->r[1]+0x00000010u; // 801AEE40
  return; // 801AEE44
}

// fn_801AEE48
void f_801AEE48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEE48
  c->r[0]=c->lr; // 801AEE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEE50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEE54
  c->r[31]=c->r[3]|c->r[3]; // 801AEE58
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AEE5C
  c->lr=0x801AEE64u; f_801AD13C(c); // 801AEE60
  cmps(c,0,(int32_t)c->r[3],0); // 801AEE64
  if (crb(c,2)) { goto L_801AEE94; } // 801AEE68
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEE6C
  c->lr=0x801AEE74u; f_801AD214(c); // 801AEE70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEE74
  c->lr=0x801AEE7Cu; f_801A6D18(c); // 801AEE78
  c->r[4]=c->r[3]|c->r[3]; // 801AEE7C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEE80
  c->lr=0x801AEE88u; f_801AE3B4(c); // 801AEE84
  c->r[3]=c->r[31]|c->r[31]; // 801AEE88
  c->r[4]=0u+0x00000009u; // 801AEE8C
  c->lr=0x801AEE94u; f_8013114C(c); // 801AEE90
L_801AEE94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEE94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEE98
  c->lr=c->r[0]; // 801AEE9C
  c->r[1]=c->r[1]+0x00000010u; // 801AEEA0
  return; // 801AEEA4
}

// fn_801AEEA8
void f_801AEEA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEEA8
  c->r[0]=c->lr; // 801AEEAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEEB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEEB4
  c->r[31]=c->r[3]|c->r[3]; // 801AEEB8
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AEEBC
  c->r[4]=0u+0x00000001u; // 801AEEC0
  c->lr=0x801AEEC8u; f_801AE350(c); // 801AEEC4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEEC8
  c->r[4]=0u+0x00000000u; // 801AEECC
  c->lr=0x801AEED4u; f_801AE3F8(c); // 801AEED0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEED4
  c->lr=0x801AEEDCu; f_801ACF54(c); // 801AEED8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEEDC
  c->lr=0x801AEEE4u; f_801AD1DC(c); // 801AEEE0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEEE4
  c->lr=0x801AEEECu; f_801A74F4(c); // 801AEEE8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEEEC
  c->lr=0x801AEEF4u; f_801A6ABC(c); // 801AEEF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEEF4
  c->lr=0x801AEEFCu; f_801A63F0(c); // 801AEEF8
  c->r[3]=c->r[31]|c->r[31]; // 801AEEFC
  c->lr=0x801AEF04u; f_801AEB60(c); // 801AEF00
  c->r[3]=c->r[31]|c->r[31]; // 801AEF04
  c->r[4]=0u+0x00000008u; // 801AEF08
  c->lr=0x801AEF10u; f_8013114C(c); // 801AEF0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEF10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEF14
  c->lr=c->r[0]; // 801AEF18
  c->r[1]=c->r[1]+0x00000010u; // 801AEF1C
  return; // 801AEF20
}

// fn_801AEF24
void f_801AEF24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF24
  c->r[0]=c->lr; // 801AEF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEF30
  c->r[31]=c->r[3]|c->r[3]; // 801AEF34
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AEF38
  c->lr=0x801AEF40u; f_801AD13C(c); // 801AEF3C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEF40
  if (crb(c,2)) { goto L_801AEF70; } // 801AEF44
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEF48
  c->lr=0x801AEF50u; f_801AD214(c); // 801AEF4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEF50
  c->lr=0x801AEF58u; f_801A6D18(c); // 801AEF54
  c->r[4]=c->r[3]|c->r[3]; // 801AEF58
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEF5C
  c->lr=0x801AEF64u; f_801AE3B4(c); // 801AEF60
  c->r[3]=c->r[31]|c->r[31]; // 801AEF64
  c->r[4]=0u+0x00000009u; // 801AEF68
  c->lr=0x801AEF70u; f_8013114C(c); // 801AEF6C
L_801AEF70:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AEF70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AEF74
  c->lr=c->r[0]; // 801AEF78
  c->r[1]=c->r[1]+0x00000010u; // 801AEF7C
  return; // 801AEF80
}

// fn_801AEF84
void f_801AEF84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AEF84
  c->r[0]=c->lr; // 801AEF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AEF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AEF90
  c->r[31]=c->r[3]|c->r[3]; // 801AEF94
  c->r[3]=0u+0x00000001u; // 801AEF98
  c->lr=0x801AEFA0u; f_8019CD1C(c); // 801AEF9C
  cmps(c,0,(int32_t)c->r[3],0); // 801AEFA0
  if (crb(c,2)) { goto L_801AEFC0; } // 801AEFA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEFA8
  c->lr=0x801AEFB0u; f_801A63E8(c); // 801AEFAC
  c->r[3]=c->r[31]|c->r[31]; // 801AEFB0
  c->r[4]=0u+0x0000000Eu; // 801AEFB4
  c->lr=0x801AEFBCu; f_8013114C(c); // 801AEFB8
  goto L_801AF05C; // 801AEFBC
L_801AEFC0:;
  c->r[3]=0u+0x00000000u; // 801AEFC0
  c->lr=0x801AEFC8u; f_8019CD1C(c); // 801AEFC4
  cmps(c,0,(int32_t)c->r[3],0); // 801AEFC8
  if (crb(c,2)) { goto L_801AF010; } // 801AEFCC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEFD0
  c->lr=0x801AEFD8u; f_801A6D18(c); // 801AEFD4
  c->r[4]=c->r[3]|c->r[3]; // 801AEFD8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AEFDC
  c->lr=0x801AEFE4u; f_801AE368(c); // 801AEFE0
  cmps(c,0,(int32_t)c->r[3],0); // 801AEFE4
  if (crb(c,2)) { goto L_801AEFF8; } // 801AEFE8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEFEC
  c->lr=0x801AEFF4u; f_801A6BB0(c); // 801AEFF0
  goto L_801AF05C; // 801AEFF4
L_801AEFF8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AEFF8
  c->lr=0x801AF000u; f_801A6B24(c); // 801AEFFC
  c->r[3]=c->r[31]|c->r[31]; // 801AF000
  c->r[4]=0u+0x0000000Au; // 801AF004
  c->lr=0x801AF00Cu; f_8013114C(c); // 801AF008
  goto L_801AF05C; // 801AF00C
L_801AF010:;
  c->r[3]=0u+0x00000003u; // 801AF010
  c->lr=0x801AF018u; f_8019CD1C(c); // 801AF014
  cmps(c,0,(int32_t)c->r[3],0); // 801AF018
  if (crb(c,2)) { goto L_801AF028; } // 801AF01C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF020
  c->lr=0x801AF028u; f_801A6CCC(c); // 801AF024
L_801AF028:;
  c->r[3]=0u+0x00000004u; // 801AF028
  c->lr=0x801AF030u; f_8019CD1C(c); // 801AF02C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF030
  if (crb(c,2)) { goto L_801AF040; } // 801AF034
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF038
  c->lr=0x801AF040u; f_801A6C80(c); // 801AF03C
L_801AF040:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF040
  c->lr=0x801AF048u; f_801AD214(c); // 801AF044
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF048
  c->lr=0x801AF050u; f_801A6D18(c); // 801AF04C
  c->r[4]=c->r[3]|c->r[3]; // 801AF050
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF054
  c->lr=0x801AF05Cu; f_801AE3B4(c); // 801AF058
L_801AF05C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF05C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF060
  c->lr=c->r[0]; // 801AF064
  c->r[1]=c->r[1]+0x00000010u; // 801AF068
  return; // 801AF06C
}

// fn_801AF070
void f_801AF070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF070
  c->r[0]=c->lr; // 801AF074
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF07C
  c->r[31]=c->r[3]|c->r[3]; // 801AF080
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AF084
  c->lr=0x801AF08Cu; f_801A6D18(c); // 801AF088
  c->r[4]=c->r[3]|c->r[3]; // 801AF08C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF090
  c->lr=0x801AF098u; f_801AE370(c); // 801AF094
  c->r[3]=c->r[31]|c->r[31]; // 801AF098
  c->r[4]=0u+0x0000000Bu; // 801AF09C
  c->lr=0x801AF0A4u; f_8013114C(c); // 801AF0A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF0A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF0A8
  c->lr=c->r[0]; // 801AF0AC
  c->r[1]=c->r[1]+0x00000010u; // 801AF0B0
  return; // 801AF0B4
}

// fn_801AF0B8
void f_801AF0B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF0B8
  c->r[0]=c->lr; // 801AF0BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF0C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF0C4
  c->r[31]=c->r[3]|c->r[3]; // 801AF0C8
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF0CC
  c->lr=0x801AF0D4u; f_801AD13C(c); // 801AF0D0
  cmps(c,0,(int32_t)c->r[3],0); // 801AF0D4
  if (crb(c,2)) { goto L_801AF0F4; } // 801AF0D8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF0DC
  c->r[4]=0u+0x00000000u; // 801AF0E0
  c->lr=0x801AF0E8u; f_801ACEE0(c); // 801AF0E4
  c->r[3]=c->r[31]|c->r[31]; // 801AF0E8
  c->r[4]=0u+0x0000000Cu; // 801AF0EC
  c->lr=0x801AF0F4u; f_8013114C(c); // 801AF0F0
L_801AF0F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF0F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF0F8
  c->lr=c->r[0]; // 801AF0FC
  c->r[1]=c->r[1]+0x00000010u; // 801AF100
  return; // 801AF104
}

// fn_801AF108
void f_801AF108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF108
  c->r[0]=c->lr; // 801AF10C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF114
  c->r[31]=c->r[3]|c->r[3]; // 801AF118
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF11C
  c->r[4]=0u+0x00000000u; // 801AF120
  c->lr=0x801AF128u; f_801ACEE0(c); // 801AF124
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF128
  c->lr=0x801AF130u; f_801A6AF0(c); // 801AF12C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF130
  c->lr=0x801AF138u; f_801AD210(c); // 801AF134
  c->r[3]=c->r[31]|c->r[31]; // 801AF138
  c->r[4]=0u+0x0000000Du; // 801AF13C
  c->lr=0x801AF144u; f_8013114C(c); // 801AF140
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF144
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF148
  c->lr=c->r[0]; // 801AF14C
  c->r[1]=c->r[1]+0x00000010u; // 801AF150
  return; // 801AF154
}

// fn_801AF158
void f_801AF158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF158
  c->r[0]=c->lr; // 801AF15C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF164
  c->r[31]=c->r[3]|c->r[3]; // 801AF168
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF16C
  c->lr=0x801AF174u; f_801AD13C(c); // 801AF170
  cmps(c,0,(int32_t)c->r[3],0); // 801AF174
  if (crb(c,2)) { goto L_801AF244; } // 801AF178
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF17C
  c->r[4]=0u+0x00000000u; // 801AF180
  c->lr=0x801AF188u; f_801ACE6C(c); // 801AF184
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF188
  c->lr=0x801AF190u; f_801A6D18(c); // 801AF18C
  cmps(c,0,(int32_t)c->r[3],1); // 801AF190
  if (crb(c,2)) { goto L_801AF1C4; } // 801AF194
  if (!crb(c,0)) { goto L_801AF1A8; } // 801AF198
  cmps(c,0,(int32_t)c->r[3],0); // 801AF19C
  if (!crb(c,0)) { goto L_801AF1B4; } // 801AF1A0
  goto L_801AF244; // 801AF1A4
L_801AF1A8:;
  cmps(c,0,(int32_t)c->r[3],3); // 801AF1A8
  if (!crb(c,0)) { goto L_801AF244; } // 801AF1AC
  goto L_801AF224; // 801AF1B0
L_801AF1B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801AF1B4
  c->r[4]=0u+0x00000010u; // 801AF1B8
  c->lr=0x801AF1C0u; f_8013114C(c); // 801AF1BC
  goto L_801AF244; // 801AF1C0
L_801AF1C4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF1C4
  c->r[4]=0u+0x00000000u; // 801AF1C8
  c->lr=0x801AF1D0u; f_801A7394(c); // 801AF1CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF1D0
  c->r[4]=0u+0x00000000u; // 801AF1D4
  c->lr=0x801AF1DCu; f_801A738C(c); // 801AF1D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF1DC
  c->r[4]=0u+0xFFFFFFFFu; // 801AF1E0
  c->lr=0x801AF1E8u; f_801A7374(c); // 801AF1E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF1E8
  c->r[4]=0u+0x00000003u; // 801AF1EC
  c->lr=0x801AF1F4u; f_801A6734(c); // 801AF1F0
  cmps(c,0,(int32_t)c->r[3],3); // 801AF1F4
  if (!crb(c,2)) { goto L_801AF214; } // 801AF1F8
  c->r[0]=0u+0x00000005u; // 801AF1FC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801AF200
  c->r[3]=c->r[31]|c->r[31]; // 801AF204
  c->r[4]=0u+0x00000028u; // 801AF208
  c->lr=0x801AF210u; f_8013114C(c); // 801AF20C
  goto L_801AF244; // 801AF210
L_801AF214:;
  c->r[3]=c->r[31]|c->r[31]; // 801AF214
  c->r[4]=0u+0x00000016u; // 801AF218
  c->lr=0x801AF220u; f_8013114C(c); // 801AF21C
  goto L_801AF244; // 801AF220
L_801AF224:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF224
  c->r[4]=0u+0x00000000u; // 801AF228
  c->lr=0x801AF230u; f_801A753C(c); // 801AF22C
  c->r[0]=0u+0x00000000u; // 801AF230
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801AF234
  c->r[3]=c->r[31]|c->r[31]; // 801AF238
  c->r[4]=0u+0x00000003u; // 801AF23C
  c->lr=0x801AF244u; f_8013114C(c); // 801AF240
L_801AF244:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF244
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF248
  c->lr=c->r[0]; // 801AF24C
  c->r[1]=c->r[1]+0x00000010u; // 801AF250
  return; // 801AF254
}

// fn_801AF258
void f_801AF258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF258
  c->r[0]=c->lr; // 801AF25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF264
  c->r[31]=c->r[3]|c->r[3]; // 801AF268
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF26C
  c->r[4]=0u+0x00000000u; // 801AF270
  c->lr=0x801AF278u; f_801ACEE0(c); // 801AF274
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF278
  c->lr=0x801AF280u; f_801A6AF0(c); // 801AF27C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF280
  c->lr=0x801AF288u; f_801AD1D8(c); // 801AF284
  c->r[3]=c->r[31]|c->r[31]; // 801AF288
  c->r[4]=0u+0x0000000Fu; // 801AF28C
  c->lr=0x801AF294u; f_8013114C(c); // 801AF290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF294
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF298
  c->lr=c->r[0]; // 801AF29C
  c->r[1]=c->r[1]+0x00000010u; // 801AF2A0
  return; // 801AF2A4
}

// fn_801AF2A8
void f_801AF2A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF2A8
  c->r[0]=c->lr; // 801AF2AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF2B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF2B4
  c->r[31]=c->r[3]|c->r[3]; // 801AF2B8
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF2BC
  c->lr=0x801AF2C4u; f_801AD13C(c); // 801AF2C0
  cmps(c,0,(int32_t)c->r[3],0); // 801AF2C4
  if (crb(c,2)) { goto L_801AF2F8; } // 801AF2C8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF2CC
  c->r[4]=0u+0x00000000u; // 801AF2D0
  c->lr=0x801AF2D8u; f_801ACE6C(c); // 801AF2D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF2D8
  c->r[4]=0u+0x00000000u; // 801AF2DC
  c->lr=0x801AF2E4u; f_801A753C(c); // 801AF2E0
  c->r[0]=0u+0x00000000u; // 801AF2E4
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801AF2E8
  c->r[3]=c->r[31]|c->r[31]; // 801AF2EC
  c->r[4]=0u+0x00000003u; // 801AF2F0
  c->lr=0x801AF2F8u; f_8013114C(c); // 801AF2F4
L_801AF2F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF2F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF2FC
  c->lr=c->r[0]; // 801AF300
  c->r[1]=c->r[1]+0x00000010u; // 801AF304
  return; // 801AF308
}

// fn_801AF30C
void f_801AF30C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF30C
  c->r[0]=c->lr; // 801AF310
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF314
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF318
  c->r[31]=c->r[3]|c->r[3]; // 801AF31C
  c->r[0]=R32(c->r[3]+0x000000F4u); // 801AF320
  cmps(c,0,(int32_t)c->r[0],0); // 801AF324
  if (!crb(c,2)) { goto L_801AF33C; } // 801AF328
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AF32C
  c->r[4]=0u+0x00000001u; // 801AF330
  c->lr=0x801AF338u; f_801A7640(c); // 801AF334
  goto L_801AF350; // 801AF338
L_801AF33C:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AF33C
  c->r[4]=0u+0x00000000u; // 801AF340
  c->lr=0x801AF348u; f_801A7640(c); // 801AF344
  c->r[0]=0u+0x00000000u; // 801AF348
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801AF34C
L_801AF350:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF350
  c->r[4]=0u+0x00000002u; // 801AF354
  c->lr=0x801AF35Cu; f_801AE350(c); // 801AF358
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF35C
  c->r[4]=0u+0x00000000u; // 801AF360
  c->lr=0x801AF368u; f_801AE3F8(c); // 801AF364
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF368
  c->r[4]=0u+0x00000000u; // 801AF36C
  c->lr=0x801AF374u; f_801ADC2C(c); // 801AF370
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF374
  c->lr=0x801AF37Cu; f_801ACF54(c); // 801AF378
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF37C
  c->lr=0x801AF384u; f_801AE4A0(c); // 801AF380
  c->r[4]=c->r[3]|c->r[3]; // 801AF384
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF388
  c->lr=0x801AF390u; f_801A6F60(c); // 801AF38C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF390
  c->lr=0x801AF398u; f_801A63F8(c); // 801AF394
  cmps(c,0,(int32_t)c->r[3],0); // 801AF398
  if (crb(c,2)) { goto L_801AF3B0; } // 801AF39C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF3A0
  c->lr=0x801AF3A8u; f_801AE488(c); // 801AF3A4
  cmps(c,0,(int32_t)c->r[3],0); // 801AF3A8
  if (crb(c,2)) { goto L_801AF3BC; } // 801AF3AC
L_801AF3B0:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF3B0
  c->lr=0x801AF3B8u; f_801AD960(c); // 801AF3B4
  goto L_801AF3C4; // 801AF3B8
L_801AF3BC:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF3BC
  c->lr=0x801AF3C4u; f_801ADA80(c); // 801AF3C0
L_801AF3C4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF3C4
  c->lr=0x801AF3CCu; f_801A6ABC(c); // 801AF3C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF3CC
  c->lr=0x801AF3D4u; f_801A63F0(c); // 801AF3D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF3D4
  c->lr=0x801AF3DCu; f_801A6E6C(c); // 801AF3D8
  c->r[4]=c->r[3]|c->r[3]; // 801AF3DC
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF3E0
  c->lr=0x801AF3E8u; f_801AE270(c); // 801AF3E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF3E8
  c->lr=0x801AF3F0u; f_801A6E6C(c); // 801AF3EC
  c->r[4]=c->r[3]|c->r[3]; // 801AF3F0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF3F4
  c->lr=0x801AF3FCu; f_801AE400(c); // 801AF3F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF3FC
  c->lr=0x801AF404u; f_801A6E6C(c); // 801AF400
  c->r[4]=c->r[3]|c->r[3]; // 801AF404
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF408
  c->lr=0x801AF410u; f_801AE444(c); // 801AF40C
  c->r[3]=c->r[31]|c->r[31]; // 801AF410
  c->r[4]=0u+0x00000011u; // 801AF414
  c->lr=0x801AF41Cu; f_8013114C(c); // 801AF418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF41C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF420
  c->lr=c->r[0]; // 801AF424
  c->r[1]=c->r[1]+0x00000010u; // 801AF428
  return; // 801AF42C
}

// fn_801AF430
void f_801AF430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF430
  c->r[0]=c->lr; // 801AF434
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF438
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF43C
  c->r[31]=c->r[3]|c->r[3]; // 801AF440
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF444
  c->lr=0x801AF44Cu; f_801ADC28(c); // 801AF448
  cmps(c,0,(int32_t)c->r[3],0); // 801AF44C
  if (crb(c,2)) { goto L_801AF468; } // 801AF450
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF454
  c->lr=0x801AF45Cu; f_801ADB98(c); // 801AF458
  c->r[3]=c->r[31]|c->r[31]; // 801AF45C
  c->r[4]=0u+0x00000012u; // 801AF460
  c->lr=0x801AF468u; f_8013114C(c); // 801AF464
L_801AF468:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF468
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF46C
  c->lr=c->r[0]; // 801AF470
  c->r[1]=c->r[1]+0x00000010u; // 801AF474
  return; // 801AF478
}

// fn_801AF47C
void f_801AF47C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF47C
  c->r[0]=c->lr; // 801AF480
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF488
  c->r[31]=c->r[3]|c->r[3]; // 801AF48C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF490
  c->lr=0x801AF498u; f_801AD938(c); // 801AF494
  c->r[4]=c->r[3]|c->r[3]; // 801AF498
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF49C
  c->lr=0x801AF4A4u; f_801A6F50(c); // 801AF4A0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF4A4
  c->lr=0x801AF4ACu; f_801AD930(c); // 801AF4A8
  c->r[4]=c->r[3]|c->r[3]; // 801AF4AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF4B0
  c->lr=0x801AF4B8u; f_801A6F58(c); // 801AF4B4
  c->r[3]=c->r[31]|c->r[31]; // 801AF4B8
  c->r[4]=0u+0x00000013u; // 801AF4BC
  c->lr=0x801AF4C4u; f_8013114C(c); // 801AF4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF4C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF4C8
  c->lr=c->r[0]; // 801AF4CC
  c->r[1]=c->r[1]+0x00000010u; // 801AF4D0
  return; // 801AF4D4
}

// fn_801AF4D8
void f_801AF4D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF4D8
  c->r[0]=c->lr; // 801AF4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF4E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF4E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF4E8
  c->r[30]=c->r[3]|c->r[3]; // 801AF4EC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF4F0
  c->lr=0x801AF4F8u; f_801AE488(c); // 801AF4F4
  cmps(c,0,(int32_t)c->r[3],0); // 801AF4F8
  if (!crb(c,2)) { goto L_801AF518; } // 801AF4FC
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF500
  c->lr=0x801AF508u; f_801AE490(c); // 801AF504
  c->r[4]=c->r[3]|c->r[3]; // 801AF508
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF50C
  c->lr=0x801AF514u; f_801A7374(c); // 801AF510
  goto L_801AF524; // 801AF514
L_801AF518:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF518
  c->r[4]=0u+0xFFFFFFFFu; // 801AF51C
  c->lr=0x801AF524u; f_801A7374(c); // 801AF520
L_801AF524:;
  c->r[3]=0u+0x00000001u; // 801AF524
  c->lr=0x801AF52Cu; f_8019CD1C(c); // 801AF528
  cmps(c,0,(int32_t)c->r[3],0); // 801AF52C
  if (crb(c,2)) { goto L_801AF54C; } // 801AF530
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF534
  c->lr=0x801AF53Cu; f_801A63E8(c); // 801AF538
  c->r[3]=c->r[30]|c->r[30]; // 801AF53C
  c->r[4]=0u+0x00000014u; // 801AF540
  c->lr=0x801AF548u; f_8013114C(c); // 801AF544
  goto L_801AF6E0; // 801AF548
L_801AF54C:;
  c->r[3]=0u+0x00000000u; // 801AF54C
  c->lr=0x801AF554u; f_8019CD1C(c); // 801AF550
  cmps(c,0,(int32_t)c->r[3],0); // 801AF554
  if (crb(c,2)) { goto L_801AF5C0; } // 801AF558
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF55C
  c->lr=0x801AF564u; f_801A6E6C(c); // 801AF560
  c->r[4]=c->r[3]|c->r[3]; // 801AF564
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF568
  c->lr=0x801AF570u; f_801AE400(c); // 801AF56C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF570
  c->lr=0x801AF578u; f_801A6F48(c); // 801AF574
  c->r[4]=c->r[3]|c->r[3]; // 801AF578
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF57C
  c->lr=0x801AF584u; f_801AE444(c); // 801AF580
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF584
  c->lr=0x801AF58Cu; f_801ADB98(c); // 801AF588
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF58C
  c->lr=0x801AF594u; f_801A6418(c); // 801AF590
  cmps(c,0,(int32_t)c->r[3],0); // 801AF594
  if (!crb(c,2)) { goto L_801AF5A8; } // 801AF598
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF59C
  c->lr=0x801AF5A4u; f_801A6BB0(c); // 801AF5A0
  goto L_801AF6E0; // 801AF5A4
L_801AF5A8:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF5A8
  c->lr=0x801AF5B0u; f_801A6B24(c); // 801AF5AC
  c->r[3]=c->r[30]|c->r[30]; // 801AF5B0
  c->r[4]=0u+0x00000014u; // 801AF5B4
  c->lr=0x801AF5BCu; f_8013114C(c); // 801AF5B8
  goto L_801AF6E0; // 801AF5BC
L_801AF5C0:;
  c->r[3]=0u+0x00000007u; // 801AF5C0
  c->lr=0x801AF5C8u; f_8019CD1C(c); // 801AF5C4
  cmps(c,0,(int32_t)c->r[3],0); // 801AF5C8
  if (crb(c,2)) { goto L_801AF630; } // 801AF5CC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF5D0
  c->lr=0x801AF5D8u; f_801A6C40(c); // 801AF5D4
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF5D8
  c->lr=0x801AF5E0u; f_801AE498(c); // 801AF5DC
  c->r[31]=c->r[3]|c->r[3]; // 801AF5E0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF5E4
  c->r[4]=c->r[31]|c->r[31]; // 801AF5E8
  c->lr=0x801AF5F0u; f_801AD8D0(c); // 801AF5EC
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF5F0
  c->lr=0x801AF5F8u; f_801AD920(c); // 801AF5F4
  cmps(c,0,(int32_t)c->r[3],0); // 801AF5F8
  if (crb(c,2)) { goto L_801AF61C; } // 801AF5FC
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF600
  c->lr=0x801AF608u; f_801AE490(c); // 801AF604
  c->r[4]=c->r[3]|c->r[3]; // 801AF608
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF60C
  c->r[5]=c->r[31]|c->r[31]; // 801AF610
  c->lr=0x801AF618u; f_801A737C(c); // 801AF614
  goto L_801AF6E0; // 801AF618
L_801AF61C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF61C
  c->r[4]=0u+0xFFFFFFFFu; // 801AF620
  c->r[5]=c->r[31]|c->r[31]; // 801AF624
  c->lr=0x801AF62Cu; f_801A737C(c); // 801AF628
  goto L_801AF6E0; // 801AF62C
L_801AF630:;
  c->r[3]=0u+0x00000003u; // 801AF630
  c->lr=0x801AF638u; f_8019CD1C(c); // 801AF634
  cmps(c,0,(int32_t)c->r[3],0); // 801AF638
  if (crb(c,2)) { goto L_801AF648; } // 801AF63C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF640
  c->lr=0x801AF648u; f_801A6DCC(c); // 801AF644
L_801AF648:;
  c->r[3]=0u+0x00000004u; // 801AF648
  c->lr=0x801AF650u; f_8019CD1C(c); // 801AF64C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF650
  if (crb(c,2)) { goto L_801AF660; } // 801AF654
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF658
  c->lr=0x801AF660u; f_801A6D6C(c); // 801AF65C
L_801AF660:;
  c->r[3]=0u+0x00000006u; // 801AF660
  c->lr=0x801AF668u; f_8019CD1C(c); // 801AF664
  cmps(c,0,(int32_t)c->r[3],0); // 801AF668
  if (crb(c,2)) { goto L_801AF688; } // 801AF66C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF670
  c->lr=0x801AF678u; f_801AE4A8(c); // 801AF674
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF678
  c->lr=0x801AF680u; f_801A6EFC(c); // 801AF67C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF680
  c->lr=0x801AF688u; f_801A6E2C(c); // 801AF684
L_801AF688:;
  c->r[3]=0u+0x00000005u; // 801AF688
  c->lr=0x801AF690u; f_8019CD1C(c); // 801AF68C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF690
  if (crb(c,2)) { goto L_801AF6B0; } // 801AF694
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF698
  c->lr=0x801AF6A0u; f_801AE4B0(c); // 801AF69C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF6A0
  c->lr=0x801AF6A8u; f_801A6EB0(c); // 801AF6A4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF6A8
  c->lr=0x801AF6B0u; f_801A6E2C(c); // 801AF6AC
L_801AF6B0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF6B0
  c->lr=0x801AF6B8u; f_801A6E6C(c); // 801AF6B4
  c->r[4]=c->r[3]|c->r[3]; // 801AF6B8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF6BC
  c->lr=0x801AF6C4u; f_801AE400(c); // 801AF6C0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF6C4
  c->lr=0x801AF6CCu; f_801A6F48(c); // 801AF6C8
  c->r[4]=c->r[3]|c->r[3]; // 801AF6CC
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF6D0
  c->lr=0x801AF6D8u; f_801AE444(c); // 801AF6D4
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF6D8
  c->lr=0x801AF6E0u; f_801ADB98(c); // 801AF6DC
L_801AF6E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF6E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AF6E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF6E8
  c->lr=c->r[0]; // 801AF6EC
  c->r[1]=c->r[1]+0x00000010u; // 801AF6F0
  return; // 801AF6F4
}

// fn_801AF6F8
void f_801AF6F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF6F8
  c->r[0]=c->lr; // 801AF6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF704
  c->r[31]=c->r[3]|c->r[3]; // 801AF708
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AF70C
  c->lr=0x801AF714u; f_801A6AF0(c); // 801AF710
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF714
  c->lr=0x801AF71Cu; f_801A63F8(c); // 801AF718
  cmps(c,0,(int32_t)c->r[3],0); // 801AF71C
  if (!crb(c,2)) { goto L_801AF734; } // 801AF720
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF724
  c->lr=0x801AF72Cu; f_801AE488(c); // 801AF728
  cmps(c,0,(int32_t)c->r[3],0); // 801AF72C
  if (crb(c,2)) { goto L_801AF740; } // 801AF730
L_801AF734:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF734
  c->lr=0x801AF73Cu; f_801ADAE0(c); // 801AF738
  goto L_801AF748; // 801AF73C
L_801AF740:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF740
  c->lr=0x801AF748u; f_801ADB40(c); // 801AF744
L_801AF748:;
  c->r[3]=c->r[31]|c->r[31]; // 801AF748
  c->r[4]=0u+0x00000015u; // 801AF74C
  c->lr=0x801AF754u; f_8013114C(c); // 801AF750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF754
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF758
  c->lr=c->r[0]; // 801AF75C
  c->r[1]=c->r[1]+0x00000010u; // 801AF760
  return; // 801AF764
}

// fn_801AF768
void f_801AF768(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF768
  c->r[0]=c->lr; // 801AF76C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF770
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF774
  c->r[31]=c->r[3]|c->r[3]; // 801AF778
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF77C
  c->lr=0x801AF784u; f_801ADC28(c); // 801AF780
  cmps(c,0,(int32_t)c->r[3],0); // 801AF784
  if (crb(c,2)) { goto L_801AF7CC; } // 801AF788
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF78C
  c->r[4]=0u+0x00000000u; // 801AF790
  c->lr=0x801AF798u; f_801ACE74(c); // 801AF794
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF798
  c->lr=0x801AF7A0u; f_801A63F8(c); // 801AF79C
  cmps(c,0,(int32_t)c->r[3],0); // 801AF7A0
  if (crb(c,2)) { goto L_801AF7B8; } // 801AF7A4
  c->r[3]=c->r[31]|c->r[31]; // 801AF7A8
  c->r[4]=0u+0x00000007u; // 801AF7AC
  c->lr=0x801AF7B4u; f_8013114C(c); // 801AF7B0
  goto L_801AF7CC; // 801AF7B4
L_801AF7B8:;
  c->r[0]=0u+0x00000010u; // 801AF7B8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801AF7BC
  c->r[3]=c->r[31]|c->r[31]; // 801AF7C0
  c->r[4]=0u+0x0000001Cu; // 801AF7C4
  c->lr=0x801AF7CCu; f_8013114C(c); // 801AF7C8
L_801AF7CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF7CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF7D0
  c->lr=c->r[0]; // 801AF7D4
  c->r[1]=c->r[1]+0x00000010u; // 801AF7D8
  return; // 801AF7DC
}

// fn_801AF7E0
void f_801AF7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF7E0
  c->r[0]=c->lr; // 801AF7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF7E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF7EC
  c->r[31]=c->r[3]|c->r[3]; // 801AF7F0
  c->r[0]=R32(c->r[3]+0x000000F4u); // 801AF7F4
  cmps(c,0,(int32_t)c->r[0],0); // 801AF7F8
  if (!crb(c,2)) { goto L_801AF810; } // 801AF7FC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AF800
  c->r[4]=0u+0x00000001u; // 801AF804
  c->lr=0x801AF80Cu; f_801A7640(c); // 801AF808
  goto L_801AF824; // 801AF80C
L_801AF810:;
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AF810
  c->r[4]=0u+0x00000000u; // 801AF814
  c->lr=0x801AF81Cu; f_801A7640(c); // 801AF818
  c->r[0]=0u+0x00000000u; // 801AF81C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801AF820
L_801AF824:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF824
  c->r[4]=0u+0x00000003u; // 801AF828
  c->lr=0x801AF830u; f_801AE350(c); // 801AF82C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF830
  c->r[4]=0u+0x00000000u; // 801AF834
  c->lr=0x801AF83Cu; f_801AE3F8(c); // 801AF838
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF83C
  c->r[4]=0u+0x00000000u; // 801AF840
  c->lr=0x801AF848u; f_801ADC74(c); // 801AF844
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF848
  c->lr=0x801AF850u; f_801ACF54(c); // 801AF84C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF850
  c->lr=0x801AF858u; f_801A63F8(c); // 801AF854
  cmps(c,0,(int32_t)c->r[3],0); // 801AF858
  if (crb(c,2)) { goto L_801AF870; } // 801AF85C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF860
  c->lr=0x801AF868u; f_801AE488(c); // 801AF864
  cmps(c,0,(int32_t)c->r[3],0); // 801AF868
  if (crb(c,2)) { goto L_801AF87C; } // 801AF86C
L_801AF870:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF870
  c->lr=0x801AF878u; f_801AD960(c); // 801AF874
  goto L_801AF884; // 801AF878
L_801AF87C:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF87C
  c->lr=0x801AF884u; f_801ADA80(c); // 801AF880
L_801AF884:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF884
  c->lr=0x801AF88Cu; f_801A6ABC(c); // 801AF888
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF88C
  c->lr=0x801AF894u; f_801A63F0(c); // 801AF890
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF894
  c->lr=0x801AF89Cu; f_801A7108(c); // 801AF898
  c->r[4]=c->r[3]|c->r[3]; // 801AF89C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF8A0
  c->lr=0x801AF8A8u; f_801AE270(c); // 801AF8A4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF8A8
  c->lr=0x801AF8B0u; f_801A7108(c); // 801AF8AC
  c->r[4]=c->r[3]|c->r[3]; // 801AF8B0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF8B4
  c->lr=0x801AF8BCu; f_801AE400(c); // 801AF8B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF8BC
  c->lr=0x801AF8C4u; f_801A71B4(c); // 801AF8C0
  c->r[4]=c->r[3]|c->r[3]; // 801AF8C4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF8C8
  c->lr=0x801AF8D0u; f_801AE444(c); // 801AF8CC
  c->r[3]=c->r[31]|c->r[31]; // 801AF8D0
  c->r[4]=0u+0x00000017u; // 801AF8D4
  c->lr=0x801AF8DCu; f_8013114C(c); // 801AF8D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF8DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF8E0
  c->lr=c->r[0]; // 801AF8E4
  c->r[1]=c->r[1]+0x00000010u; // 801AF8E8
  return; // 801AF8EC
}

// fn_801AF8F0
void f_801AF8F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF8F0
  c->r[0]=c->lr; // 801AF8F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF8F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF8FC
  c->r[31]=c->r[3]|c->r[3]; // 801AF900
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF904
  c->lr=0x801AF90Cu; f_801ADC28(c); // 801AF908
  cmps(c,0,(int32_t)c->r[3],0); // 801AF90C
  if (crb(c,2)) { goto L_801AF928; } // 801AF910
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF914
  c->lr=0x801AF91Cu; f_801ADB98(c); // 801AF918
  c->r[3]=c->r[31]|c->r[31]; // 801AF91C
  c->r[4]=0u+0x00000018u; // 801AF920
  c->lr=0x801AF928u; f_8013114C(c); // 801AF924
L_801AF928:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF928
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF92C
  c->lr=c->r[0]; // 801AF930
  c->r[1]=c->r[1]+0x00000010u; // 801AF934
  return; // 801AF938
}

// fn_801AF93C
void f_801AF93C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF93C
  c->r[0]=c->lr; // 801AF940
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF948
  c->r[31]=c->r[3]|c->r[3]; // 801AF94C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF950
  c->lr=0x801AF958u; f_801AD938(c); // 801AF954
  c->r[4]=c->r[3]|c->r[3]; // 801AF958
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF95C
  c->lr=0x801AF964u; f_801A71BC(c); // 801AF960
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AF964
  c->lr=0x801AF96Cu; f_801AD930(c); // 801AF968
  c->r[4]=c->r[3]|c->r[3]; // 801AF96C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF970
  c->lr=0x801AF978u; f_801A71C4(c); // 801AF974
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AF978
  c->lr=0x801AF980u; f_801A6C74(c); // 801AF97C
  c->r[3]=c->r[31]|c->r[31]; // 801AF980
  c->r[4]=0u+0x00000019u; // 801AF984
  c->lr=0x801AF98Cu; f_8013114C(c); // 801AF988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AF98C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AF990
  c->lr=c->r[0]; // 801AF994
  c->r[1]=c->r[1]+0x00000010u; // 801AF998
  return; // 801AF99C
}

// fn_801AF9A0
void f_801AF9A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AF9A0
  c->r[0]=c->lr; // 801AF9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AF9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AF9AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AF9B0
  c->r[30]=c->r[3]|c->r[3]; // 801AF9B4
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AF9B8
  c->lr=0x801AF9C0u; f_801AE488(c); // 801AF9BC
  cmps(c,0,(int32_t)c->r[3],0); // 801AF9C0
  if (!crb(c,2)) { goto L_801AF9E0; } // 801AF9C4
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AF9C8
  c->lr=0x801AF9D0u; f_801AE490(c); // 801AF9CC
  c->r[4]=c->r[3]|c->r[3]; // 801AF9D0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF9D4
  c->lr=0x801AF9DCu; f_801A7374(c); // 801AF9D8
  goto L_801AF9EC; // 801AF9DC
L_801AF9E0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF9E0
  c->r[4]=0u+0xFFFFFFFFu; // 801AF9E4
  c->lr=0x801AF9ECu; f_801A7374(c); // 801AF9E8
L_801AF9EC:;
  c->r[3]=0u+0x00000001u; // 801AF9EC
  c->lr=0x801AF9F4u; f_8019CD1C(c); // 801AF9F0
  cmps(c,0,(int32_t)c->r[3],0); // 801AF9F4
  if (crb(c,2)) { goto L_801AFA1C; } // 801AF9F8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AF9FC
  c->lr=0x801AFA04u; f_801A63E8(c); // 801AFA00
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA04
  c->lr=0x801AFA0Cu; f_801A6C74(c); // 801AFA08
  c->r[3]=c->r[30]|c->r[30]; // 801AFA0C
  c->r[4]=0u+0x0000001Au; // 801AFA10
  c->lr=0x801AFA18u; f_8013114C(c); // 801AFA14
  goto L_801AFCB4; // 801AFA18
L_801AFA1C:;
  c->r[3]=0u+0x00000000u; // 801AFA1C
  c->lr=0x801AFA24u; f_8019CD1C(c); // 801AFA20
  cmps(c,0,(int32_t)c->r[3],0); // 801AFA24
  if (crb(c,2)) { goto L_801AFA98; } // 801AFA28
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA2C
  c->lr=0x801AFA34u; f_801A7108(c); // 801AFA30
  c->r[4]=c->r[3]|c->r[3]; // 801AFA34
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFA38
  c->lr=0x801AFA40u; f_801AE400(c); // 801AFA3C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA40
  c->lr=0x801AFA48u; f_801A71B4(c); // 801AFA44
  c->r[4]=c->r[3]|c->r[3]; // 801AFA48
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFA4C
  c->lr=0x801AFA54u; f_801AE444(c); // 801AFA50
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFA54
  c->lr=0x801AFA5Cu; f_801ADB98(c); // 801AFA58
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA5C
  c->lr=0x801AFA64u; f_801A642C(c); // 801AFA60
  cmps(c,0,(int32_t)c->r[3],0); // 801AFA64
  if (!crb(c,2)) { goto L_801AFA78; } // 801AFA68
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA6C
  c->lr=0x801AFA74u; f_801A6BB0(c); // 801AFA70
  goto L_801AFCB4; // 801AFA74
L_801AFA78:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA78
  c->lr=0x801AFA80u; f_801A6B24(c); // 801AFA7C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA80
  c->lr=0x801AFA88u; f_801A6C74(c); // 801AFA84
  c->r[3]=c->r[30]|c->r[30]; // 801AFA88
  c->r[4]=0u+0x0000001Au; // 801AFA8C
  c->lr=0x801AFA94u; f_8013114C(c); // 801AFA90
  goto L_801AFCB4; // 801AFA94
L_801AFA98:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFA98
  c->lr=0x801AFAA0u; f_801A6A1C(c); // 801AFA9C
  cmps(c,0,(int32_t)c->r[3],0); // 801AFAA0
  if (!crb(c,2)) { goto L_801AFB34; } // 801AFAA4
  c->r[3]=0u+0x00000008u; // 801AFAA8
  c->lr=0x801AFAB0u; f_8019CD1C(c); // 801AFAAC
  cmps(c,0,(int32_t)c->r[3],0); // 801AFAB0
  if (crb(c,2)) { goto L_801AFB34; } // 801AFAB4
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFAB8
  c->lr=0x801AFAC0u; f_801ADCBC(c); // 801AFABC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFAC0
  c->lr=0x801AFAC8u; f_801A70FC(c); // 801AFAC4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFAC8
  c->lr=0x801AFAD0u; f_801A7110(c); // 801AFACC
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFAD0
  c->lr=0x801AFAD8u; f_801AD938(c); // 801AFAD4
  c->r[4]=c->r[3]|c->r[3]; // 801AFAD8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFADC
  c->lr=0x801AFAE4u; f_801A71BC(c); // 801AFAE0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFAE4
  c->lr=0x801AFAECu; f_801AD930(c); // 801AFAE8
  c->r[4]=c->r[3]|c->r[3]; // 801AFAEC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFAF0
  c->lr=0x801AFAF8u; f_801A71C4(c); // 801AFAF4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFAF8
  c->lr=0x801AFB00u; f_801A6B58(c); // 801AFAFC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB00
  c->lr=0x801AFB08u; f_801A7108(c); // 801AFB04
  c->r[4]=c->r[3]|c->r[3]; // 801AFB08
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFB0C
  c->lr=0x801AFB14u; f_801AE400(c); // 801AFB10
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB14
  c->lr=0x801AFB1Cu; f_801A71B4(c); // 801AFB18
  c->r[4]=c->r[3]|c->r[3]; // 801AFB1C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFB20
  c->lr=0x801AFB28u; f_801AE444(c); // 801AFB24
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFB28
  c->lr=0x801AFB30u; f_801ADB98(c); // 801AFB2C
  goto L_801AFCB4; // 801AFB30
L_801AFB34:;
  c->r[3]=0u+0x00000007u; // 801AFB34
  c->lr=0x801AFB3Cu; f_8019CD1C(c); // 801AFB38
  cmps(c,0,(int32_t)c->r[3],0); // 801AFB3C
  if (crb(c,2)) { goto L_801AFC04; } // 801AFB40
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFB44
  c->lr=0x801AFB4Cu; f_801AD928(c); // 801AFB48
  c->r[4]=c->r[3]|c->r[3]; // 801AFB4C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB50
  c->lr=0x801AFB58u; f_801A7394(c); // 801AFB54
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFB58
  c->r[4]=0u+0x00000000u; // 801AFB5C
  c->lr=0x801AFB64u; f_801AD940(c); // 801AFB60
  c->r[4]=c->r[3]|c->r[3]; // 801AFB64
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB68
  c->lr=0x801AFB70u; f_801A738C(c); // 801AFB6C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFB70
  c->lr=0x801AFB78u; f_801AE490(c); // 801AFB74
  c->r[4]=c->r[3]|c->r[3]; // 801AFB78
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB7C
  c->lr=0x801AFB84u; f_801A7374(c); // 801AFB80
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB84
  c->r[4]=0u+0x00000003u; // 801AFB88
  c->lr=0x801AFB90u; f_801A6734(c); // 801AFB8C
  cmps(c,0,(int32_t)c->r[3],4); // 801AFB90
  if (!crb(c,2)) { goto L_801AFBA4; } // 801AFB94
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFB98
  c->lr=0x801AFBA0u; f_801A6BB0(c); // 801AFB9C
  goto L_801AFCB4; // 801AFBA0
L_801AFBA4:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFBA4
  c->lr=0x801AFBACu; f_801A6C40(c); // 801AFBA8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFBAC
  c->lr=0x801AFBB4u; f_801AE498(c); // 801AFBB0
  c->r[31]=c->r[3]|c->r[3]; // 801AFBB4
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFBB8
  c->r[4]=c->r[31]|c->r[31]; // 801AFBBC
  c->lr=0x801AFBC4u; f_801AD8D0(c); // 801AFBC0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFBC4
  c->lr=0x801AFBCCu; f_801AD920(c); // 801AFBC8
  cmps(c,0,(int32_t)c->r[3],0); // 801AFBCC
  if (crb(c,2)) { goto L_801AFBF0; } // 801AFBD0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFBD4
  c->lr=0x801AFBDCu; f_801AE490(c); // 801AFBD8
  c->r[4]=c->r[3]|c->r[3]; // 801AFBDC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFBE0
  c->r[5]=c->r[31]|c->r[31]; // 801AFBE4
  c->lr=0x801AFBECu; f_801A737C(c); // 801AFBE8
  goto L_801AFCB4; // 801AFBEC
L_801AFBF0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFBF0
  c->r[4]=0u+0xFFFFFFFFu; // 801AFBF4
  c->r[5]=c->r[31]|c->r[31]; // 801AFBF8
  c->lr=0x801AFC00u; f_801A737C(c); // 801AFBFC
  goto L_801AFCB4; // 801AFC00
L_801AFC04:;
  c->r[3]=0u+0x00000003u; // 801AFC04
  c->lr=0x801AFC0Cu; f_8019CD1C(c); // 801AFC08
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC0C
  if (crb(c,2)) { goto L_801AFC1C; } // 801AFC10
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC14
  c->lr=0x801AFC1Cu; f_801A705C(c); // 801AFC18
L_801AFC1C:;
  c->r[3]=0u+0x00000004u; // 801AFC1C
  c->lr=0x801AFC24u; f_8019CD1C(c); // 801AFC20
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC24
  if (crb(c,2)) { goto L_801AFC34; } // 801AFC28
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC2C
  c->lr=0x801AFC34u; f_801A6FFC(c); // 801AFC30
L_801AFC34:;
  c->r[3]=0u+0x00000006u; // 801AFC34
  c->lr=0x801AFC3Cu; f_8019CD1C(c); // 801AFC38
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC3C
  if (crb(c,2)) { goto L_801AFC5C; } // 801AFC40
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFC44
  c->lr=0x801AFC4Cu; f_801AE4A8(c); // 801AFC48
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC4C
  c->lr=0x801AFC54u; f_801A7168(c); // 801AFC50
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC54
  c->lr=0x801AFC5Cu; f_801A70BC(c); // 801AFC58
L_801AFC5C:;
  c->r[3]=0u+0x00000005u; // 801AFC5C
  c->lr=0x801AFC64u; f_8019CD1C(c); // 801AFC60
  cmps(c,0,(int32_t)c->r[3],0); // 801AFC64
  if (crb(c,2)) { goto L_801AFC84; } // 801AFC68
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFC6C
  c->lr=0x801AFC74u; f_801AE4B0(c); // 801AFC70
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC74
  c->lr=0x801AFC7Cu; f_801A711C(c); // 801AFC78
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC7C
  c->lr=0x801AFC84u; f_801A70BC(c); // 801AFC80
L_801AFC84:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC84
  c->lr=0x801AFC8Cu; f_801A7108(c); // 801AFC88
  c->r[4]=c->r[3]|c->r[3]; // 801AFC8C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFC90
  c->lr=0x801AFC98u; f_801AE400(c); // 801AFC94
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFC98
  c->lr=0x801AFCA0u; f_801A71B4(c); // 801AFC9C
  c->r[4]=c->r[3]|c->r[3]; // 801AFCA0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFCA4
  c->lr=0x801AFCACu; f_801AE444(c); // 801AFCA8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFCAC
  c->lr=0x801AFCB4u; f_801ADB98(c); // 801AFCB0
L_801AFCB4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFCB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AFCB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFCBC
  c->lr=c->r[0]; // 801AFCC0
  c->r[1]=c->r[1]+0x00000010u; // 801AFCC4
  return; // 801AFCC8
}

// fn_801AFCCC
void f_801AFCCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFCCC
  c->r[0]=c->lr; // 801AFCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFCD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFCD8
  c->r[31]=c->r[3]|c->r[3]; // 801AFCDC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801AFCE0
  c->lr=0x801AFCE8u; f_801A6AF0(c); // 801AFCE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFCE8
  c->lr=0x801AFCF0u; f_801A63F8(c); // 801AFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 801AFCF0
  if (!crb(c,2)) { goto L_801AFD08; } // 801AFCF4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFCF8
  c->lr=0x801AFD00u; f_801AE488(c); // 801AFCFC
  cmps(c,0,(int32_t)c->r[3],0); // 801AFD00
  if (crb(c,2)) { goto L_801AFD14; } // 801AFD04
L_801AFD08:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFD08
  c->lr=0x801AFD10u; f_801ADAE0(c); // 801AFD0C
  goto L_801AFD1C; // 801AFD10
L_801AFD14:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFD14
  c->lr=0x801AFD1Cu; f_801ADB40(c); // 801AFD18
L_801AFD1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801AFD1C
  c->r[4]=0u+0x0000001Bu; // 801AFD20
  c->lr=0x801AFD28u; f_8013114C(c); // 801AFD24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFD2C
  c->lr=c->r[0]; // 801AFD30
  c->r[1]=c->r[1]+0x00000010u; // 801AFD34
  return; // 801AFD38
}

// fn_801AFD3C
void f_801AFD3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFD3C
  c->r[0]=c->lr; // 801AFD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFD48
  c->r[31]=c->r[3]|c->r[3]; // 801AFD4C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AFD50
  c->lr=0x801AFD58u; f_801ADC28(c); // 801AFD54
  cmps(c,0,(int32_t)c->r[3],0); // 801AFD58
  if (crb(c,2)) { goto L_801AFDA0; } // 801AFD5C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFD60
  c->r[4]=0u+0x00000000u; // 801AFD64
  c->lr=0x801AFD6Cu; f_801ACE74(c); // 801AFD68
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFD6C
  c->lr=0x801AFD74u; f_801A63F8(c); // 801AFD70
  cmps(c,0,(int32_t)c->r[3],0); // 801AFD74
  if (crb(c,2)) { goto L_801AFD8C; } // 801AFD78
  c->r[3]=c->r[31]|c->r[31]; // 801AFD7C
  c->r[4]=0u+0x00000007u; // 801AFD80
  c->lr=0x801AFD88u; f_8013114C(c); // 801AFD84
  goto L_801AFDA0; // 801AFD88
L_801AFD8C:;
  c->r[0]=0u+0x00000016u; // 801AFD8C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801AFD90
  c->r[3]=c->r[31]|c->r[31]; // 801AFD94
  c->r[4]=0u+0x0000001Cu; // 801AFD98
  c->lr=0x801AFDA0u; f_8013114C(c); // 801AFD9C
L_801AFDA0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFDA4
  c->lr=c->r[0]; // 801AFDA8
  c->r[1]=c->r[1]+0x00000010u; // 801AFDAC
  return; // 801AFDB0
}

// fn_801AFDB4
void f_801AFDB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFDB4
  c->r[0]=c->lr; // 801AFDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFDBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFDC0
  c->r[31]=c->r[3]|c->r[3]; // 801AFDC4
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AFDC8
  c->r[4]=0u+0x00000001u; // 801AFDCC
  c->lr=0x801AFDD4u; f_801AE3F8(c); // 801AFDD0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFDD4
  c->lr=0x801AFDDCu; f_801ACF54(c); // 801AFDD8
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801AFDDC
  cmps(c,0,(int32_t)c->r[0],0); // 801AFDE0
  if (crb(c,2)) { goto L_801AFE08; } // 801AFDE4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFDE8
  c->lr=0x801AFDF0u; f_801AE358(c); // 801AFDEC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801AFDF0
  c->r[0]=cntlz(c->r[0]); // 801AFDF4
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AFDF8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFDFC
  c->lr=0x801AFE04u; f_801ADD74(c); // 801AFE00
  goto L_801AFE10; // 801AFE04
L_801AFE08:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFE08
  c->lr=0x801AFE10u; f_801ADD30(c); // 801AFE0C
L_801AFE10:;
  c->r[0]=0u+0x00000000u; // 801AFE10
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801AFE14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFE18
  c->lr=0x801AFE20u; f_801A6ABC(c); // 801AFE1C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFE20
  c->lr=0x801AFE28u; f_801A63F0(c); // 801AFE24
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFE28
  c->lr=0x801AFE30u; f_801AE360(c); // 801AFE2C
  c->r[4]=c->r[3]|c->r[3]; // 801AFE30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFE34
  c->lr=0x801AFE3Cu; f_801A7290(c); // 801AFE38
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFE3C
  c->lr=0x801AFE44u; f_801A727C(c); // 801AFE40
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801AFE44
  c->lr=0x801AFE4Cu; f_801A7288(c); // 801AFE48
  c->r[4]=c->r[3]|c->r[3]; // 801AFE4C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801AFE50
  c->lr=0x801AFE58u; f_801AE270(c); // 801AFE54
  c->r[3]=c->r[31]|c->r[31]; // 801AFE58
  c->r[4]=0u+0x0000001Du; // 801AFE5C
  c->lr=0x801AFE64u; f_8013114C(c); // 801AFE60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFE64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFE68
  c->lr=c->r[0]; // 801AFE6C
  c->r[1]=c->r[1]+0x00000010u; // 801AFE70
  return; // 801AFE74
}

// fn_801AFE78
void f_801AFE78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFE78
  c->r[0]=c->lr; // 801AFE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFE80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFE84
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AFE88
  c->r[30]=c->r[3]|c->r[3]; // 801AFE8C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801AFE90
  c->lr=0x801AFE98u; f_801ADF90(c); // 801AFE94
  cmps(c,0,(int32_t)c->r[3],0); // 801AFE98
  if (crb(c,2)) { goto L_801AFF00; } // 801AFE9C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFEA0
  c->lr=0x801AFEA8u; f_801AE358(c); // 801AFEA4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801AFEA8
  c->r[0]=cntlz(c->r[0]); // 801AFEAC
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AFEB0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFEB4
  c->lr=0x801AFEBCu; f_801AE488(c); // 801AFEB8
  cmps(c,0,(int32_t)c->r[3],0); // 801AFEBC
  if (crb(c,2)) { goto L_801AFED4; } // 801AFEC0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFEC4
  c->r[4]=c->r[31]|c->r[31]; // 801AFEC8
  c->lr=0x801AFED0u; f_801ADF40(c); // 801AFECC
  goto L_801AFEE0; // 801AFED0
L_801AFED4:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFED4
  c->r[4]=c->r[31]|c->r[31]; // 801AFED8
  c->lr=0x801AFEE0u; f_801ADEC8(c); // 801AFEDC
L_801AFEE0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFEE0
  c->lr=0x801AFEE8u; f_801A7288(c); // 801AFEE4
  c->r[4]=c->r[3]|c->r[3]; // 801AFEE8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFEEC
  c->lr=0x801AFEF4u; f_801AE3B4(c); // 801AFEF0
  c->r[3]=c->r[30]|c->r[30]; // 801AFEF4
  c->r[4]=0u+0x0000001Eu; // 801AFEF8
  c->lr=0x801AFF00u; f_8013114C(c); // 801AFEFC
L_801AFF00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801AFF00
  c->r[30]=R32(c->r[1]+0x00000008u); // 801AFF04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801AFF08
  c->lr=c->r[0]; // 801AFF0C
  c->r[1]=c->r[1]+0x00000010u; // 801AFF10
  return; // 801AFF14
}

// fn_801AFF18
void f_801AFF18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801AFF18
  c->r[0]=c->lr; // 801AFF1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801AFF20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801AFF24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801AFF28
  c->r[30]=c->r[3]|c->r[3]; // 801AFF2C
  c->r[3]=0u+0x00000001u; // 801AFF30
  c->lr=0x801AFF38u; f_8019CD1C(c); // 801AFF34
  cmps(c,0,(int32_t)c->r[3],0); // 801AFF38
  if (crb(c,2)) { goto L_801AFF58; } // 801AFF3C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFF40
  c->lr=0x801AFF48u; f_801A63E8(c); // 801AFF44
  c->r[3]=c->r[30]|c->r[30]; // 801AFF48
  c->r[4]=0u+0x00000021u; // 801AFF4C
  c->lr=0x801AFF54u; f_8013114C(c); // 801AFF50
  goto L_801B002C; // 801AFF54
L_801AFF58:;
  c->r[3]=0u+0x00000000u; // 801AFF58
  c->lr=0x801AFF60u; f_8019CD1C(c); // 801AFF5C
  cmps(c,0,(int32_t)c->r[3],0); // 801AFF60
  if (crb(c,2)) { goto L_801AFFA8; } // 801AFF64
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFF68
  c->lr=0x801AFF70u; f_801A7288(c); // 801AFF6C
  c->r[4]=c->r[3]|c->r[3]; // 801AFF70
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFF74
  c->lr=0x801AFF7Cu; f_801AE368(c); // 801AFF78
  cmps(c,0,(int32_t)c->r[3],0); // 801AFF7C
  if (crb(c,2)) { goto L_801AFF90; } // 801AFF80
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFF84
  c->lr=0x801AFF8Cu; f_801A6BB0(c); // 801AFF88
  goto L_801B002C; // 801AFF8C
L_801AFF90:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFF90
  c->lr=0x801AFF98u; f_801A6B24(c); // 801AFF94
  c->r[3]=c->r[30]|c->r[30]; // 801AFF98
  c->r[4]=0u+0x0000001Fu; // 801AFF9C
  c->lr=0x801AFFA4u; f_8013114C(c); // 801AFFA0
  goto L_801B002C; // 801AFFA4
L_801AFFA8:;
  c->r[3]=0u+0x00000003u; // 801AFFA8
  c->lr=0x801AFFB0u; f_8019CD1C(c); // 801AFFAC
  cmps(c,0,(int32_t)c->r[3],0); // 801AFFB0
  if (crb(c,2)) { goto L_801AFFC0; } // 801AFFB4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFFB8
  c->lr=0x801AFFC0u; f_801A7230(c); // 801AFFBC
L_801AFFC0:;
  c->r[3]=0u+0x00000004u; // 801AFFC0
  c->lr=0x801AFFC8u; f_8019CD1C(c); // 801AFFC4
  cmps(c,0,(int32_t)c->r[3],0); // 801AFFC8
  if (crb(c,2)) { goto L_801AFFD8; } // 801AFFCC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801AFFD0
  c->lr=0x801AFFD8u; f_801A71E4(c); // 801AFFD4
L_801AFFD8:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFFD8
  c->lr=0x801AFFE0u; f_801AE358(c); // 801AFFDC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801AFFE0
  c->r[0]=cntlz(c->r[0]); // 801AFFE4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801AFFE8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFFEC
  c->lr=0x801AFFF4u; f_801AE488(c); // 801AFFF0
  cmps(c,0,(int32_t)c->r[3],0); // 801AFFF4
  if (crb(c,2)) { goto L_801B000C; } // 801AFFF8
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801AFFFC
  c->r[4]=c->r[31]|c->r[31]; // 801B0000
  c->lr=0x801B0008u; f_801ADF40(c); // 801B0004
  goto L_801B0018; // 801B0008
L_801B000C:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B000C
  c->r[4]=c->r[31]|c->r[31]; // 801B0010
  c->lr=0x801B0018u; f_801ADEC8(c); // 801B0014
L_801B0018:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B0018
  c->lr=0x801B0020u; f_801A7288(c); // 801B001C
  c->r[4]=c->r[3]|c->r[3]; // 801B0020
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0024
  c->lr=0x801B002Cu; f_801AE3B4(c); // 801B0028
L_801B002C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B002C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0030
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0034
  c->lr=c->r[0]; // 801B0038
  c->r[1]=c->r[1]+0x00000010u; // 801B003C
  return; // 801B0040
}

// fn_801B0044
void f_801B0044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0044
  c->r[0]=c->lr; // 801B0048
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B004C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0050
  c->r[31]=c->r[3]|c->r[3]; // 801B0054
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B0058
  c->lr=0x801B0060u; f_801A7288(c); // 801B005C
  c->r[4]=c->r[3]|c->r[3]; // 801B0060
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0064
  c->lr=0x801B006Cu; f_801AE370(c); // 801B0068
  c->r[3]=c->r[31]|c->r[31]; // 801B006C
  c->r[4]=0u+0x00000020u; // 801B0070
  c->lr=0x801B0078u; f_8013114C(c); // 801B0074
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0078
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B007C
  c->lr=c->r[0]; // 801B0080
  c->r[1]=c->r[1]+0x00000010u; // 801B0084
  return; // 801B0088
}

// fn_801B008C
void f_801B008C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B008C
  c->r[0]=c->lr; // 801B0090
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0098
  c->r[31]=c->r[3]|c->r[3]; // 801B009C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B00A0
  c->lr=0x801B00A8u; f_801ADF90(c); // 801B00A4
  cmps(c,0,(int32_t)c->r[3],0); // 801B00A8
  if (crb(c,2)) { goto L_801B00C8; } // 801B00AC
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B00B0
  c->r[4]=0u+0x00000000u; // 801B00B4
  c->lr=0x801B00BCu; f_801ACEE0(c); // 801B00B8
  c->r[3]=c->r[31]|c->r[31]; // 801B00BC
  c->r[4]=0u+0x00000021u; // 801B00C0
  c->lr=0x801B00C8u; f_8013114C(c); // 801B00C4
L_801B00C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B00C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B00CC
  c->lr=c->r[0]; // 801B00D0
  c->r[1]=c->r[1]+0x00000010u; // 801B00D4
  return; // 801B00D8
}

// fn_801B00DC
void f_801B00DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B00DC
  c->r[0]=c->lr; // 801B00E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B00E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B00E8
  c->r[31]=c->r[3]|c->r[3]; // 801B00EC
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B00F0
  c->r[4]=0u+0x00000000u; // 801B00F4
  c->lr=0x801B00FCu; f_801ACEE0(c); // 801B00F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B00FC
  c->lr=0x801B0104u; f_801A6AF0(c); // 801B0100
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0104
  c->lr=0x801B010Cu; f_801A63F8(c); // 801B0108
  cmps(c,0,(int32_t)c->r[3],0); // 801B010C
  if (crb(c,2)) { goto L_801B0120; } // 801B0110
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0114
  c->lr=0x801B011Cu; f_801ADDC8(c); // 801B0118
  goto L_801B0170; // 801B011C
L_801B0120:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0120
  c->lr=0x801B0128u; f_801AE488(c); // 801B0124
  cmps(c,0,(int32_t)c->r[3],0); // 801B0128
  if (crb(c,2)) { goto L_801B013C; } // 801B012C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0130
  c->lr=0x801B0138u; f_801ADE8C(c); // 801B0134
  goto L_801B0170; // 801B0138
L_801B013C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B013C
  c->lr=0x801B0144u; f_801A7288(c); // 801B0140
  cmps(c,0,(int32_t)c->r[3],1); // 801B0144
  if (!crb(c,2)) { goto L_801B0158; } // 801B0148
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B014C
  c->lr=0x801B0154u; f_801ADE50(c); // 801B0150
  goto L_801B0170; // 801B0154
L_801B0158:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0158
  c->lr=0x801B0160u; f_801A7288(c); // 801B015C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0160
  if (!crb(c,2)) { goto L_801B0170; } // 801B0164
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0168
  c->lr=0x801B0170u; f_801ADE0C(c); // 801B016C
L_801B0170:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0170
  c->r[4]=0u+0x00000022u; // 801B0174
  c->lr=0x801B017Cu; f_8013114C(c); // 801B0178
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B017C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0180
  c->lr=c->r[0]; // 801B0184
  c->r[1]=c->r[1]+0x00000010u; // 801B0188
  return; // 801B018C
}

// fn_801B0190
void f_801B0190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0190
  c->r[0]=c->lr; // 801B0194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B019C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B01A0
  c->r[30]=c->r[3]|c->r[3]; // 801B01A4
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B01A8
  c->lr=0x801B01B0u; f_801ADF90(c); // 801B01AC
  cmps(c,0,(int32_t)c->r[3],0); // 801B01B0
  if (crb(c,2)) { goto L_801B0304; } // 801B01B4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B01B8
  c->lr=0x801B01C0u; f_801A63F8(c); // 801B01BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B01C0
  if (crb(c,2)) { goto L_801B01EC; } // 801B01C4
  c->r[0]=0u+0x00000001u; // 801B01C8
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801B01CC
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B01D0
  c->r[4]=0u+0x00000000u; // 801B01D4
  c->lr=0x801B01DCu; f_801ACE7C(c); // 801B01D8
  c->r[3]=c->r[30]|c->r[30]; // 801B01DC
  c->r[4]=R32(c->r[30]+0x000000ECu); // 801B01E0
  c->lr=0x801B01E8u; f_8013114C(c); // 801B01E4
  goto L_801B0304; // 801B01E8
L_801B01EC:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B01EC
  c->lr=0x801B01F4u; f_801AE358(c); // 801B01F0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801B01F4
  c->r[0]=cntlz(c->r[0]); // 801B01F8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801B01FC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B0200
  c->lr=0x801B0208u; f_801A7288(c); // 801B0204
  cmps(c,0,(int32_t)c->r[3],1); // 801B0208
  if (crb(c,2)) { goto L_801B02EC; } // 801B020C
  if (!crb(c,0)) { goto L_801B0304; } // 801B0210
  cmps(c,0,(int32_t)c->r[3],0); // 801B0214
  if (!crb(c,0)) { goto L_801B0220; } // 801B0218
  goto L_801B0304; // 801B021C
L_801B0220:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0220
  c->lr=0x801B0228u; f_801AD928(c); // 801B0224
  c->r[4]=c->r[3]|c->r[3]; // 801B0228
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B022C
  c->lr=0x801B0234u; f_801A7394(c); // 801B0230
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0234
  c->r[4]=c->r[31]|c->r[31]; // 801B0238
  c->lr=0x801B0240u; f_801AD940(c); // 801B023C
  c->r[4]=c->r[3]|c->r[3]; // 801B0240
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B0244
  c->lr=0x801B024Cu; f_801A738C(c); // 801B0248
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B024C
  c->lr=0x801B0254u; f_801AE358(c); // 801B0250
  c->r[4]=c->r[3]|c->r[3]; // 801B0254
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B0258
  c->lr=0x801B0260u; f_801A6734(c); // 801B025C
  cmps(c,0,(int32_t)c->r[3],5); // 801B0260
  if (!crb(c,2)) { goto L_801B02AC; } // 801B0264
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0268
  c->lr=0x801B0270u; f_801AE488(c); // 801B026C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0270
  if (crb(c,2)) { goto L_801B0284; } // 801B0274
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B0278
  c->r[4]=0u+0xFFFFFFFFu; // 801B027C
  c->lr=0x801B0284u; f_801A7374(c); // 801B0280
L_801B0284:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0284
  c->r[4]=c->r[31]|c->r[31]; // 801B0288
  c->lr=0x801B0290u; f_801AEBB0(c); // 801B028C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0290
  c->r[4]=0u+0x00000000u; // 801B0294
  c->lr=0x801B029Cu; f_801ACE7C(c); // 801B0298
  c->r[3]=c->r[30]|c->r[30]; // 801B029C
  c->r[4]=0u+0x00000007u; // 801B02A0
  c->lr=0x801B02A8u; f_8013114C(c); // 801B02A4
  goto L_801B0304; // 801B02A8
L_801B02AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801B02AC
  if (crb(c,2)) { goto L_801B02C0; } // 801B02B0
  c->r[0]=0u+0x00000010u; // 801B02B4
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801B02B8
  goto L_801B02C8; // 801B02BC
L_801B02C0:;
  c->r[0]=0u+0x00000016u; // 801B02C0
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801B02C4
L_801B02C8:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B02C8
  c->r[4]=0u+0x00000000u; // 801B02CC
  c->lr=0x801B02D4u; f_801ACEC4(c); // 801B02D0
  c->r[0]=0u+0x00000001u; // 801B02D4
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801B02D8
  c->r[3]=c->r[30]|c->r[30]; // 801B02DC
  c->r[4]=0u+0x00000028u; // 801B02E0
  c->lr=0x801B02E8u; f_8013114C(c); // 801B02E4
  goto L_801B0304; // 801B02E8
L_801B02EC:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B02EC
  c->r[4]=0u+0x00000000u; // 801B02F0
  c->lr=0x801B02F8u; f_801ACEC4(c); // 801B02F4
  c->r[3]=c->r[30]|c->r[30]; // 801B02F8
  c->r[4]=0u+0x00000023u; // 801B02FC
  c->lr=0x801B0304u; f_8013114C(c); // 801B0300
L_801B0304:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0304
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0308
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B030C
  c->lr=c->r[0]; // 801B0310
  c->r[1]=c->r[1]+0x00000010u; // 801B0314
  return; // 801B0318
}

// fn_801B031C
void f_801B031C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B031C
  c->r[0]=c->lr; // 801B0320
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0324
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0328
  c->r[31]=c->r[3]|c->r[3]; // 801B032C
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B0330
  c->lr=0x801B0338u; f_801AE0C4(c); // 801B0334
  c->r[4]=c->r[3]|c->r[3]; // 801B0338
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B033C
  c->lr=0x801B0344u; f_801A7344(c); // 801B0340
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0344
  c->lr=0x801B034Cu; f_801ADF94(c); // 801B0348
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B034C
  c->lr=0x801B0354u; f_801A7338(c); // 801B0350
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0354
  c->lr=0x801B035Cu; f_801A7330(c); // 801B0358
  c->r[4]=c->r[3]|c->r[3]; // 801B035C
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0360
  c->lr=0x801B0368u; f_801AE278(c); // 801B0364
  c->r[3]=c->r[31]|c->r[31]; // 801B0368
  c->r[4]=0u+0x00000024u; // 801B036C
  c->lr=0x801B0374u; f_8013114C(c); // 801B0370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0374
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0378
  c->lr=c->r[0]; // 801B037C
  c->r[1]=c->r[1]+0x00000010u; // 801B0380
  return; // 801B0384
}

// fn_801B0388
void f_801B0388(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0388
  c->r[0]=c->lr; // 801B038C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0390
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0394
  c->r[31]=c->r[3]|c->r[3]; // 801B0398
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B039C
  c->lr=0x801B03A4u; f_801AE0C0(c); // 801B03A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B03A4
  if (crb(c,2)) { goto L_801B03CC; } // 801B03A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B03AC
  c->lr=0x801B03B4u; f_801A7330(c); // 801B03B0
  c->r[4]=c->r[3]|c->r[3]; // 801B03B4
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B03B8
  c->lr=0x801B03C0u; f_801AE014(c); // 801B03BC
  c->r[3]=c->r[31]|c->r[31]; // 801B03C0
  c->r[4]=0u+0x00000025u; // 801B03C4
  c->lr=0x801B03CCu; f_8013114C(c); // 801B03C8
L_801B03CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B03CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B03D0
  c->lr=c->r[0]; // 801B03D4
  c->r[1]=c->r[1]+0x00000010u; // 801B03D8
  return; // 801B03DC
}

// fn_801B03E0
void f_801B03E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B03E0
  c->r[0]=c->lr; // 801B03E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B03E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B03EC
  c->r[31]=c->r[3]|c->r[3]; // 801B03F0
  c->r[3]=0u+0x00000001u; // 801B03F4
  c->lr=0x801B03FCu; f_8019CD1C(c); // 801B03F8
  cmps(c,0,(int32_t)c->r[3],0); // 801B03FC
  if (crb(c,2)) { goto L_801B041C; } // 801B0400
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0404
  c->lr=0x801B040Cu; f_801A63E8(c); // 801B0408
  c->r[3]=c->r[31]|c->r[31]; // 801B040C
  c->r[4]=0u+0x00000026u; // 801B0410
  c->lr=0x801B0418u; f_8013114C(c); // 801B0414
  goto L_801B0460; // 801B0418
L_801B041C:;
  c->r[3]=0u+0x00000006u; // 801B041C
  c->lr=0x801B0424u; f_8019CD1C(c); // 801B0420
  cmps(c,0,(int32_t)c->r[3],0); // 801B0424
  if (crb(c,2)) { goto L_801B0434; } // 801B0428
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B042C
  c->lr=0x801B0434u; f_801A72E4(c); // 801B0430
L_801B0434:;
  c->r[3]=0u+0x00000005u; // 801B0434
  c->lr=0x801B043Cu; f_8019CD1C(c); // 801B0438
  cmps(c,0,(int32_t)c->r[3],0); // 801B043C
  if (crb(c,2)) { goto L_801B044C; } // 801B0440
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0444
  c->lr=0x801B044Cu; f_801A7298(c); // 801B0448
L_801B044C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B044C
  c->lr=0x801B0454u; f_801A7330(c); // 801B0450
  c->r[4]=c->r[3]|c->r[3]; // 801B0454
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0458
  c->lr=0x801B0460u; f_801AE014(c); // 801B045C
L_801B0460:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0460
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0464
  c->lr=c->r[0]; // 801B0468
  c->r[1]=c->r[1]+0x00000010u; // 801B046C
  return; // 801B0470
}

// fn_801B0474
void f_801B0474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0474
  c->r[0]=c->lr; // 801B0478
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B047C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0480
  c->r[31]=c->r[3]|c->r[3]; // 801B0484
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B0488
  c->lr=0x801B0490u; f_801ADFD8(c); // 801B048C
  c->r[3]=c->r[31]|c->r[31]; // 801B0490
  c->r[4]=0u+0x00000027u; // 801B0494
  c->lr=0x801B049Cu; f_8013114C(c); // 801B0498
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B049C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B04A0
  c->lr=c->r[0]; // 801B04A4
  c->r[1]=c->r[1]+0x00000010u; // 801B04A8
  return; // 801B04AC
}

// fn_801B04B0
void f_801B04B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B04B0
  c->r[0]=c->lr; // 801B04B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B04B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B04BC
  c->r[31]=c->r[3]|c->r[3]; // 801B04C0
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801B04C4
  c->lr=0x801B04CCu; f_801AE0C0(c); // 801B04C8
  cmps(c,0,(int32_t)c->r[3],0); // 801B04CC
  if (crb(c,2)) { goto L_801B04F4; } // 801B04D0
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B04D4
  c->r[4]=0u+0x00000000u; // 801B04D8
  c->lr=0x801B04E0u; f_801ACECC(c); // 801B04DC
  c->r[0]=0u+0x00000001u; // 801B04E0
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801B04E4
  c->r[3]=c->r[31]|c->r[31]; // 801B04E8
  c->r[4]=0u+0x0000001Cu; // 801B04EC
  c->lr=0x801B04F4u; f_8013114C(c); // 801B04F0
L_801B04F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B04F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B04F8
  c->lr=c->r[0]; // 801B04FC
  c->r[1]=c->r[1]+0x00000010u; // 801B0500
  return; // 801B0504
}

// fn_801B0508
void f_801B0508(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0508
  c->r[0]=c->lr; // 801B050C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0510
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0514
  c->r[31]=c->r[3]|c->r[3]; // 801B0518
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B051C
  c->r[4]=0u+0x00000001u; // 801B0520
  c->lr=0x801B0528u; f_801A759C(c); // 801B0524
  c->lr=0x801B052Cu; f_80156F98(c); // 801B0528
  c->r[3]=0u+0x00000000u; // 801B052C
  c->lr=0x801B0534u; f_80157074(c); // 801B0530
  c->r[3]=c->r[31]|c->r[31]; // 801B0534
  c->r[4]=0u+0x00000029u; // 801B0538
  c->lr=0x801B0540u; f_8013114C(c); // 801B053C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0540
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0544
  c->lr=c->r[0]; // 801B0548
  c->r[1]=c->r[1]+0x00000010u; // 801B054C
  return; // 801B0550
}

// fn_801B0554
void f_801B0554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0554
  c->r[0]=c->lr; // 801B0558
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B055C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0560
  c->r[31]=c->r[3]|c->r[3]; // 801B0564
  c->lr=0x801B056Cu; f_80156FF0(c); // 801B0568
  cmps(c,0,(int32_t)c->r[3],0); // 801B056C
  if (crb(c,2)) { goto L_801B05A4; } // 801B0570
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0574
  c->lr=0x801B057Cu; f_801A7594(c); // 801B0578
  c->r[4]=c->r[3]|c->r[3]; // 801B057C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0580
  c->lr=0x801B0588u; f_801A75D0(c); // 801B0584
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0588
  c->lr=0x801B0590u; f_801A7594(c); // 801B058C
  c->lr=0x801B0594u; f_80156434(c); // 801B0590
  c->lr=0x801B0598u; f_80156F40(c); // 801B0594
  c->r[3]=c->r[31]|c->r[31]; // 801B0598
  c->r[4]=0u+0x0000002Au; // 801B059C
  c->lr=0x801B05A4u; f_8013114C(c); // 801B05A0
L_801B05A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B05A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B05A8
  c->lr=c->r[0]; // 801B05AC
  c->r[1]=c->r[1]+0x00000010u; // 801B05B0
  return; // 801B05B4
}

// fn_801B05B8
void f_801B05B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B05B8
  c->r[0]=c->lr; // 801B05BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B05C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B05C4
  c->r[31]=c->r[3]|c->r[3]; // 801B05C8
  c->lr=0x801B05D0u; f_80157048(c); // 801B05CC
  cmps(c,0,(int32_t)c->r[3],0); // 801B05D0
  if (crb(c,2)) { goto L_801B05EC; } // 801B05D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B05D8
  c->lr=0x801B05E0u; f_801A7610(c); // 801B05DC
  c->r[3]=c->r[31]|c->r[31]; // 801B05E0
  c->r[4]=0u+0x0000002Bu; // 801B05E4
  c->lr=0x801B05ECu; f_8013114C(c); // 801B05E8
L_801B05EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B05EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B05F0
  c->lr=c->r[0]; // 801B05F4
  c->r[1]=c->r[1]+0x00000010u; // 801B05F8
  return; // 801B05FC
}

// fn_801B0600
void f_801B0600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0600
  c->r[0]=c->lr; // 801B0604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B060C
  c->r[31]=c->r[3]|c->r[3]; // 801B0610
  c->lr=0x801B0618u; f_80156FC4(c); // 801B0614
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801B0618
  cmps(c,0,(int32_t)c->r[0],16); // 801B061C
  if (crb(c,2)) { goto L_801B0654; } // 801B0620
  if (!crb(c,0)) { goto L_801B0634; } // 801B0624
  cmps(c,0,(int32_t)c->r[0],0); // 801B0628
  if (crb(c,2)) { goto L_801B0640; } // 801B062C
  goto L_801B0664; // 801B0630
L_801B0634:;
  cmps(c,0,(int32_t)c->r[0],22); // 801B0634
  if (crb(c,2)) { goto L_801B0654; } // 801B0638
  goto L_801B0664; // 801B063C
L_801B0640:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0640
  c->lr=0x801B0648u; f_801A6AF0(c); // 801B0644
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B0648
  c->lr=0x801B0650u; f_801AD194(c); // 801B064C
  goto L_801B0664; // 801B0650
L_801B0654:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B0654
  c->lr=0x801B065Cu; f_801A6AF0(c); // 801B0658
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B065C
  c->lr=0x801B0664u; f_801AD198(c); // 801B0660
L_801B0664:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0664
  c->r[4]=0u+0x0000002Cu; // 801B0668
  c->lr=0x801B0670u; f_8013114C(c); // 801B066C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0670
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0674
  c->lr=c->r[0]; // 801B0678
  c->r[1]=c->r[1]+0x00000010u; // 801B067C
  return; // 801B0680
}

// fn_801B0684
void f_801B0684(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0684
  c->r[0]=c->lr; // 801B0688
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B068C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0690
  c->r[31]=c->r[3]|c->r[3]; // 801B0694
  c->lr=0x801B069Cu; f_80156FF0(c); // 801B0698
  cmps(c,0,(int32_t)c->r[3],0); // 801B069C
  if (crb(c,2)) { goto L_801B06DC; } // 801B06A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B06A4
  c->r[4]=0u+0x00000000u; // 801B06A8
  c->lr=0x801B06B0u; f_801A759C(c); // 801B06AC
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801B06B0
  cmps(c,0,(int32_t)c->r[0],0); // 801B06B4
  if (!crb(c,2)) { goto L_801B06D0; } // 801B06B8
  c->r[3]=R32(c->r[31]+0x000000F8u); // 801B06BC
  c->r[4]=0u+0x00000000u; // 801B06C0
  c->lr=0x801B06C8u; f_801ACEE8(c); // 801B06C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801B06C8
  c->lr=0x801B06D0u; f_801A63D8(c); // 801B06CC
L_801B06D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801B06D0
  c->r[4]=R32(c->r[31]+0x000000ECu); // 801B06D4
  c->lr=0x801B06DCu; f_8013114C(c); // 801B06D8
L_801B06DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B06DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B06E0
  c->lr=c->r[0]; // 801B06E4
  c->r[1]=c->r[1]+0x00000010u; // 801B06E8
  return; // 801B06EC
}

// fn_801B06F0
void f_801B06F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B06F0
  c->r[0]=c->lr; // 801B06F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B06F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B06FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0700
  c->r[30]=c->r[3]|c->r[3]; // 801B0704
  c->r[3]=0u+0x00000006u; // 801B0708
  c->lr=0x801B0710u; f_801F1364(c); // 801B070C
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801B0710
  cmps(c,0,(int32_t)c->r[0],0); // 801B0714
  if (crb(c,2)) { goto L_801B0748; } // 801B0718
  c->lr=0x801B0720u; f_80056B5C(c); // 801B071C
  c->r[31]=c->r[3]|c->r[3]; // 801B0720
  c->lr=0x801B0728u; f_801F1340(c); // 801B0724
  c->lr=0x801B072Cu; f_80056B54(c); // 801B0728
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801B072C
  c->r[4]=0u+0x00000001u; // 801B0730
  c->lr=0x801B0738u; f_801A631C(c); // 801B0734
  c->r[3]=c->r[31]|c->r[31]; // 801B0738
  c->lr=0x801B0740u; f_80056B54(c); // 801B073C
  c->r[0]=0u+0x00000000u; // 801B0740
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801B0744
L_801B0748:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0748
  cmps(c,0,(int32_t)c->r[3],0); // 801B074C
  if (crb(c,2)) { goto L_801B0798; } // 801B0750
  c->lr=0x801B0758u; f_801ACA9C(c); // 801B0754
  c->lr=0x801B075Cu; f_80056B5C(c); // 801B0758
  c->r[31]=c->r[3]|c->r[3]; // 801B075C
  c->lr=0x801B0764u; f_801F1340(c); // 801B0760
  c->lr=0x801B0768u; f_80056B54(c); // 801B0764
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801B0768
  cmps(c,0,(int32_t)c->r[3],0); // 801B076C
  if (crb(c,2)) { goto L_801B0788; } // 801B0770
  c->r[4]=0u+0x00000001u; // 801B0774
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B0778
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B077C
  c->ctr=c->r[12]; // 801B0780
  if (true) { c->lr=0x801B0788u; dispatch(c,c->ctr); } // 801B0784
L_801B0788:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0788
  c->lr=0x801B0790u; f_80056B54(c); // 801B078C
  c->r[0]=0u+0x00000000u; // 801B0790
  W32(c->r[30]+0x000000F8u,c->r[0]); // 801B0794
L_801B0798:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0798
  c->r[4]=0u+0x0000002Eu; // 801B079C
  c->lr=0x801B07A4u; f_8013114C(c); // 801B07A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B07A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B07A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B07AC
  c->lr=c->r[0]; // 801B07B0
  c->r[1]=c->r[1]+0x00000010u; // 801B07B4
  return; // 801B07B8
}

// fn_801B07BC
void f_801B07BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B07BC
  c->r[0]=c->lr; // 801B07C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B07C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B07C8
  c->r[31]=c->r[3]|c->r[3]; // 801B07CC
  c->r[4]=0u+0x00000001u; // 801B07D0
  c->lr=0x801B07D8u; f_80131168(c); // 801B07D4
  c->r[3]=c->r[31]|c->r[31]; // 801B07D8
  c->r[4]=0u+0x00000001u; // 801B07DC
  c->lr=0x801B07E4u; f_80131184(c); // 801B07E0
  c->r[3]=c->r[31]|c->r[31]; // 801B07E4
  c->r[4]=0u+0x00000000u; // 801B07E8
  c->lr=0x801B07F0u; f_8013114C(c); // 801B07EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B07F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B07F4
  c->lr=c->r[0]; // 801B07F8
  c->r[1]=c->r[1]+0x00000010u; // 801B07FC
  return; // 801B0800
}

// fn_801B0804
void f_801B0804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0804
  c->r[0]=c->lr; // 801B0808
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B080C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0810
  c->r[31]=c->r[3]|c->r[3]; // 801B0814
  c->r[4]=0u+0x00000000u; // 801B0818
  c->lr=0x801B0820u; f_801311BC(c); // 801B081C
  c->r[3]=c->r[31]|c->r[31]; // 801B0820
  c->r[4]=0u+0x00000001u; // 801B0824
  c->lr=0x801B082Cu; f_8013114C(c); // 801B0828
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B082C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0830
  c->lr=c->r[0]; // 801B0834
  c->r[1]=c->r[1]+0x00000010u; // 801B0838
  return; // 801B083C
}

// fn_801B0840
void f_801B0840(Ctx* __restrict c) {
  c->r[4]=0u+0x0000002Du; // 801B0840
  f_8013114C(c); return; // 801B0844
}

// fn_801B0848
void f_801B0848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0848
  c->r[0]=c->lr; // 801B084C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0854
  c->r[31]=c->r[3]|c->r[3]; // 801B0858
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B085C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0860
  if (crb(c,2)) { goto L_801B0870; } // 801B0864
  c->r[4]=0u+0x00000001u; // 801B0868
  c->lr=0x801B0870u; f_801A7640(c); // 801B086C
L_801B0870:;
  c->r[3]=c->r[31]|c->r[31]; // 801B0870
  c->r[4]=0u+0x00000002u; // 801B0874
  c->lr=0x801B087Cu; f_8013114C(c); // 801B0878
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B087C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0880
  c->lr=c->r[0]; // 801B0884
  c->r[1]=c->r[1]+0x00000010u; // 801B0888
  return; // 801B088C
}

// fn_801B0890
void f_801B0890(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801B0890
  cmps(c,0,(int32_t)c->r[3],0); // 801B0894
  if (crb(c,2)) { goto L_801B08A0; } // 801B0898
  f_801A63E0(c); return; // 801B089C
L_801B08A0:;
  c->r[3]=0u+0x00000001u; // 801B08A0
  return; // 801B08A4
}

// fn_801B08A8
void f_801B08A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B08A8
  c->r[0]=c->lr; // 801B08AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B08B0
  c->lr=0x801B08B8u; f_8011C12C(c); // 801B08B4
  c->r[4]=0u+0x00000006u; // 801B08B8
  c->lr=0x801B08C0u; f_8011CFF4(c); // 801B08BC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801B08C0
  c->r[12]=R32(c->r[12]+0x00000048u); // 801B08C4
  c->ctr=c->r[12]; // 801B08C8
  if (true) { c->lr=0x801B08D0u; dispatch(c,c->ctr); } // 801B08CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B08D0
  c->lr=c->r[0]; // 801B08D4
  c->r[1]=c->r[1]+0x00000010u; // 801B08D8
  return; // 801B08DC
}

// fn_801B08E0
void f_801B08E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B08E0
  c->r[0]=c->lr; // 801B08E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B08E8
  c->lr=0x801B08F0u; f_8011C12C(c); // 801B08EC
  c->r[4]=0u+0x00000006u; // 801B08F0
  c->lr=0x801B08F8u; f_8011CFF4(c); // 801B08F4
  c->lr=0x801B08FCu; f_801B0890(c); // 801B08F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B08FC
  c->lr=c->r[0]; // 801B0900
  c->r[1]=c->r[1]+0x00000010u; // 801B0904
  return; // 801B0908
}

// fn_801B090C
void f_801B090C(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801B090C
  c->r[5]=c->r[3]+0x00000E30u; // 801B0910
  c->r[3]=0u+0x80440000u; // 801B0914
  c->r[4]=c->r[3]+0xFFFFD898u; // 801B0918
  c->r[3]=R32(c->r[4]+0x00000000u); // 801B091C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801B0920
  W32(c->r[5]+0x00000234u,c->r[3]); // 801B0924
  W32(c->r[5]+0x00000238u,c->r[0]); // 801B0928
  c->r[0]=R32(c->r[4]+0x00000008u); // 801B092C
  W32(c->r[5]+0x0000023Cu,c->r[0]); // 801B0930
  return; // 801B0934
}

// fn_801B0938
void f_801B0938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0938
  c->r[0]=c->lr; // 801B093C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0940
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0944
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0948
  c->r[30]=c->r[3]|c->r[3]; // 801B094C
  c->r[31]=c->r[4]|c->r[4]; // 801B0950
  cmps(c,0,(int32_t)c->r[3],0); // 801B0954
  if (crb(c,2)) { goto L_801B0978; } // 801B0958
  c->r[4]=0u+0x00000000u; // 801B095C
  c->lr=0x801B0964u; f_80130F88(c); // 801B0960
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801B0964
  cmps(c,0,(int32_t)c->r[0],0); // 801B0968
  if (!crb(c,1)) { goto L_801B0978; } // 801B096C
  c->r[3]=c->r[30]|c->r[30]; // 801B0970
  c->lr=0x801B0978u; f_80047B20(c); // 801B0974
L_801B0978:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0978
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B097C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0980
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0984
  c->lr=c->r[0]; // 801B0988
  c->r[1]=c->r[1]+0x00000010u; // 801B098C
  return; // 801B0990
}

// fn_801B0994
void f_801B0994(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801B0994
  c->r[3]=c->r[13]+0xFFFF9AA8u; // 801B0998
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B099C
  return; // 801B09A0
}

// fn_801B09A4
void f_801B09A4(Ctx* __restrict c) {
  goto L_801B09A8; // 801B09A4
L_801B09A8:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 801B09A8
  c->r[3]=R32(c->r[3]+0x00000034u); // 801B09AC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B09B0
  c->r[0]=c->r[4]-c->r[0]; // 801B09B4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801B09B8
  c->r[3]=c->r[5]+c->r[0]; // 801B09BC
  return; // 801B09C0
}

// fn_801B09C4
void f_801B09C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B09C4
  c->r[0]=c->lr; // 801B09C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B09CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B09D0
  c->r[31]=c->r[3]|c->r[3]; // 801B09D4
  c->lr=0x801B09DCu; f_801B0AFC(c); // 801B09D8
  c->r[3]=0u+0x80470000u; // 801B09DC
  c->r[0]=c->r[3]+0x00001148u; // 801B09E0
  W32(c->r[31]+0x00000030u,c->r[0]); // 801B09E4
  c->r[0]=0u+0x00000000u; // 801B09E8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801B09EC
  c->r[3]=c->r[31]|c->r[31]; // 801B09F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B09F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B09F8
  c->lr=c->r[0]; // 801B09FC
  c->r[1]=c->r[1]+0x00000010u; // 801B0A00
  return; // 801B0A04
}

// fn_801B0A08
void f_801B0A08(Ctx* __restrict c) {
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801B0A08
  c->r[3]=0u+0x80430000u; // 801B0A0C
  c->r[0]=c->r[3]+0x000009A8u; // 801B0A10
  c->r[3]=c->r[0]+c->r[4]; // 801B0A14
  return; // 801B0A18
}

// fn_801B0A1C
void f_801B0A1C(Ctx* __restrict c) {
  c->r[3]=0u+0x0000000Au; // 801B0A1C
  return; // 801B0A20
}

// fn_801B0A24
void f_801B0A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0A24
  c->r[0]=c->lr; // 801B0A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0A30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0A34
  c->r[30]=c->r[3]|c->r[3]; // 801B0A38
  c->r[31]=c->r[4]|c->r[4]; // 801B0A3C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801B0A40
  c->lr=0x801B0A48u; f_800F8C64(c); // 801B0A44
  c->r[3]=c->r[30]|c->r[30]; // 801B0A48
  c->r[4]=c->r[31]|c->r[31]; // 801B0A4C
  c->lr=0x801B0A54u; f_801B0B44(c); // 801B0A50
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B0A54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0A58
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0A60
  c->lr=c->r[0]; // 801B0A64
  c->r[1]=c->r[1]+0x00000010u; // 801B0A68
  return; // 801B0A6C
}

// fn_801B0A70
void f_801B0A70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0A70
  c->r[0]=c->lr; // 801B0A74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0A78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0A7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0A80
  c->r[30]=c->r[3]|c->r[3]; // 801B0A84
  c->r[31]=c->r[4]|c->r[4]; // 801B0A88
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801B0A8C
  c->lr=0x801B0A94u; f_800F8C64(c); // 801B0A90
  c->r[3]=c->r[30]|c->r[30]; // 801B0A94
  c->r[4]=c->r[31]|c->r[31]; // 801B0A98
  c->lr=0x801B0AA0u; f_801B0B44(c); // 801B0A9C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B0AA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0AA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0AAC
  c->lr=c->r[0]; // 801B0AB0
  c->r[1]=c->r[1]+0x00000010u; // 801B0AB4
  return; // 801B0AB8
}

// fn_801B0ABC
void f_801B0ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0ABC
  c->r[0]=c->lr; // 801B0AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0AC8
  c->r[31]=c->r[3]|c->r[3]; // 801B0ACC
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801B0AD0
  c->lr=0x801B0AD8u; f_800F8C64(c); // 801B0AD4
  c->r[3]=R32(c->r[31]+0x00000034u); // 801B0AD8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801B0ADC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0AE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0AE4
  c->lr=c->r[0]; // 801B0AE8
  c->r[1]=c->r[1]+0x00000010u; // 801B0AEC
  return; // 801B0AF0
}

// fn_801B0AF4
void f_801B0AF4(Ctx* __restrict c) {
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801B0AF4
  return; // 801B0AF8
}

// fn_801B0AFC
void f_801B0AFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0AFC
  c->r[0]=c->lr; // 801B0B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0B08
  c->r[31]=c->r[3]|c->r[3]; // 801B0B0C
  c->lr=0x801B0B14u; f_80105360(c); // 801B0B10
  c->r[3]=0u+0x80460000u; // 801B0B14
  c->r[0]=c->r[3]+0x000026CCu; // 801B0B18
  W32(c->r[31]+0x00000030u,c->r[0]); // 801B0B1C
  c->r[0]=0u+0x00000000u; // 801B0B20
  W32(c->r[31]+0x00000034u,c->r[0]); // 801B0B24
  W32(c->r[31]+0x00000038u,c->r[0]); // 801B0B28
  c->r[3]=c->r[31]|c->r[31]; // 801B0B2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0B30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0B34
  c->lr=c->r[0]; // 801B0B38
  c->r[1]=c->r[1]+0x00000010u; // 801B0B3C
  return; // 801B0B40
}

// fn_801B0B44
void f_801B0B44(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801B0B44
  c->r[3]=R32(c->r[3]+0x00000034u); // 801B0B48
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B0B4C
  c->r[0]=c->r[4]-c->r[0]; // 801B0B50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801B0B54
  c->r[3]=c->r[5]+c->r[0]; // 801B0B58
  return; // 801B0B5C
}

// fn_801B0B60
void f_801B0B60(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801B0B60
  c->r[3]=c->r[3]+0x00000AE8u; // 801B0B64
  return; // 801B0B68
}

// fn_801B0B6C
void f_801B0B6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0B6C
  c->r[0]=c->lr; // 801B0B70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0B74
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 801B0B78
  c->r[4]=c->r[5]+c->r[0]; // 801B0B7C
  c->lr=0x801B0B84u; f_801B0B98(c); // 801B0B80
  c->r[3]=R32(c->r[3]+0x00000004u); // 801B0B84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0B88
  c->lr=c->r[0]; // 801B0B8C
  c->r[1]=c->r[1]+0x00000010u; // 801B0B90
  return; // 801B0B94
}

// fn_801B0B98
void f_801B0B98(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801B0B98
  c->r[3]=R32(c->r[3]+0x00000034u); // 801B0B9C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801B0BA0
  c->r[0]=c->r[4]-c->r[0]; // 801B0BA4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801B0BA8
  c->r[3]=c->r[5]+c->r[0]; // 801B0BAC
  return; // 801B0BB0
}

// fn_801B0BB4
void f_801B0BB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0BB4
  c->r[0]=c->lr; // 801B0BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0BBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0BC0
  c->r[31]=c->r[3]|c->r[3]; // 801B0BC4
  c->r[3]=c->r[4]|c->r[4]; // 801B0BC8
  c->lr=0x801B0BD0u; f_80073580(c); // 801B0BCC
  c->r[4]=c->r[3]|c->r[3]; // 801B0BD0
  c->r[3]=c->r[31]|c->r[31]; // 801B0BD4
  c->lr=0x801B0BDCu; f_801B18BC(c); // 801B0BD8
  c->r[3]=0u+0x00000000u; // 801B0BDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0BE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0BE4
  c->lr=c->r[0]; // 801B0BE8
  c->r[1]=c->r[1]+0x00000010u; // 801B0BEC
  return; // 801B0BF0
}

// fn_801B0BF4
void f_801B0BF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0BF4
  c->r[0]=c->lr; // 801B0BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0C00
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0C04
  c->r[0]=R32(c->r[13]+0xFFFFBAE8u); // 801B0C08
  cmps(c,0,(int32_t)c->r[0],0); // 801B0C0C
  if (!crb(c,2)) { goto L_801B0C48; } // 801B0C10
  c->lr=0x801B0C18u; f_80056B5C(c); // 801B0C14
  c->r[30]=c->r[3]|c->r[3]; // 801B0C18
  c->lr=0x801B0C20u; f_8005DEE8(c); // 801B0C1C
  c->lr=0x801B0C24u; f_80056B54(c); // 801B0C20
  c->r[3]=0u+0x00000390u; // 801B0C24
  c->lr=0x801B0C2Cu; f_80047B64(c); // 801B0C28
  c->r[31]=c->r[3]|c->r[3]; // 801B0C2C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0C30
  if (crb(c,2)) { goto L_801B0C3C; } // 801B0C34
  c->lr=0x801B0C3Cu; f_801B0C64(c); // 801B0C38
L_801B0C3C:;
  W32(c->r[13]+0xFFFFBAE8u,c->r[31]); // 801B0C3C
  c->r[3]=c->r[30]|c->r[30]; // 801B0C40
  c->lr=0x801B0C48u; f_80056B54(c); // 801B0C44
L_801B0C48:;
  c->r[3]=R32(c->r[13]+0xFFFFBAE8u); // 801B0C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0C4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0C54
  c->lr=c->r[0]; // 801B0C58
  c->r[1]=c->r[1]+0x00000010u; // 801B0C5C
  return; // 801B0C60
}

// fn_801B0C64
void f_801B0C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0C64
  c->r[0]=c->lr; // 801B0C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0C6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0C70
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0C74
  c->r[30]=c->r[3]|c->r[3]; // 801B0C78
  c->r[31]=0u+0x00000000u; // 801B0C7C
  W32(c->r[3]+0x00000000u,c->r[31]); // 801B0C80
  W32(c->r[3]+0x00000004u,c->r[31]); // 801B0C84
  W32(c->r[3]+0x00000008u,c->r[31]); // 801B0C88
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 801B0C8C
  W32(c->r[3]+0x00000010u,c->r[31]); // 801B0C90
  W32(c->r[3]+0x00000014u,c->r[31]); // 801B0C94
  W32(c->r[3]+0x00000018u,c->r[31]); // 801B0C98
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 801B0C9C
  W32(c->r[3]+0x00000020u,c->r[31]); // 801B0CA0
  W32(c->r[3]+0x00000024u,c->r[31]); // 801B0CA4
  c->r[3]=c->r[3]+0x00000370u; // 801B0CA8
  c->r[4]=0u+0x00000000u; // 801B0CAC
  c->r[5]=0u+0x00000010u; // 801B0CB0
  c->lr=0x801B0CB8u; f_800060B8(c); // 801B0CB4
  c->r[3]=c->r[30]+0x00000028u; // 801B0CB8
  c->r[4]=0u+0x00000000u; // 801B0CBC
  c->r[5]=0u+0x00000028u; // 801B0CC0
  c->lr=0x801B0CC8u; f_800060B8(c); // 801B0CC4
  c->r[3]=c->r[30]+0x00000050u; // 801B0CC8
  c->r[4]=0u+0xFFFFFFFFu; // 801B0CCC
  c->r[5]=0u+0x0000018Cu; // 801B0CD0
  c->lr=0x801B0CD8u; f_800060B8(c); // 801B0CD4
  c->r[3]=c->r[30]+0x000001DCu; // 801B0CD8
  c->r[4]=0u+0xFFFFFFFFu; // 801B0CDC
  c->r[5]=0u+0x0000018Cu; // 801B0CE0
  c->lr=0x801B0CE8u; f_800060B8(c); // 801B0CE4
  W32(c->r[30]+0x0000036Cu,c->r[31]); // 801B0CE8
  {uint32_t ea=c->r[2]+0xFFFF9300u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B0CEC
  {uint32_t ea=c->r[30]+0x00000380u; WF32(ea,c->f[0]);} // 801B0CF0
  {uint32_t ea=c->r[30]+0x00000384u; WF32(ea,c->f[0]);} // 801B0CF4
  c->r[0]=0u+0x0000000Au; // 801B0CF8
  W32(c->r[30]+0x00000388u,c->r[0]); // 801B0CFC
  W32(c->r[30]+0x0000038Cu,c->r[0]); // 801B0D00
  c->r[3]=c->r[30]|c->r[30]; // 801B0D04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0D08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0D0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0D10
  c->lr=c->r[0]; // 801B0D14
  c->r[1]=c->r[1]+0x00000010u; // 801B0D18
  return; // 801B0D1C
}

// fn_801B0D20
void f_801B0D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0D20
  c->r[0]=c->lr; // 801B0D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0D28
  c->r[11]=c->r[1]+0x00000020u; // 801B0D2C
  c->lr=0x801B0D34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0D30
  c->r[27]=c->r[3]|c->r[3]; // 801B0D34
  c->r[29]=0u+0x00000000u; // 801B0D38
  c->r[30]=c->r[27]|c->r[27]; // 801B0D3C
L_801B0D40:;
  c->lr=0x801B0D44u; f_80056B5C(c); // 801B0D40
  c->r[28]=c->r[3]|c->r[3]; // 801B0D44
  c->lr=0x801B0D4Cu; f_8005DEE8(c); // 801B0D48
  c->lr=0x801B0D50u; f_80056B54(c); // 801B0D4C
  c->r[3]=0u+0x00000038u; // 801B0D50
  c->lr=0x801B0D58u; f_80047B64(c); // 801B0D54
  c->r[31]=c->r[3]|c->r[3]; // 801B0D58
  cmps(c,0,(int32_t)c->r[3],0); // 801B0D5C
  if (crb(c,2)) { goto L_801B0D68; } // 801B0D60
  c->lr=0x801B0D68u; f_8008E550(c); // 801B0D64
L_801B0D68:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 801B0D68
  c->r[3]=c->r[28]|c->r[28]; // 801B0D6C
  c->lr=0x801B0D74u; f_80056B54(c); // 801B0D70
  c->r[30]=c->r[30]+0x00000004u; // 801B0D74
  c->r[29]=c->r[29]+0x00000001u; // 801B0D78
  cmps(c,0,(int32_t)c->r[29],10); // 801B0D7C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0D40; } // 801B0D80
  c->r[30]=0u+0x00000000u; // 801B0D84
  c->r[31]=c->r[27]|c->r[27]; // 801B0D88
L_801B0D8C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B0D8C
  c->r[4]=0u+0x00000001u; // 801B0D90
  c->lr=0x801B0D98u; f_801797EC(c); // 801B0D94
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B0D98
  c->r[4]=0u+0x00000000u; // 801B0D9C
  c->r[5]=0u+0x00000063u; // 801B0DA0
  c->lr=0x801B0DA8u; f_80179858(c); // 801B0DA4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B0DA8
  c->r[4]=0u+0x00000002u; // 801B0DAC
  c->r[5]=0u+0x00000063u; // 801B0DB0
  c->lr=0x801B0DB8u; f_80179858(c); // 801B0DB4
  c->r[31]=c->r[31]+0x00000004u; // 801B0DB8
  c->r[30]=c->r[30]+0x00000001u; // 801B0DBC
  cmps(c,0,(int32_t)c->r[30],10); // 801B0DC0
  if (crb(c,0)) { IRQCHK(c); goto L_801B0D8C; } // 801B0DC4
  c->r[0]=0u+0x00000000u; // 801B0DC8
  W32(c->r[27]+0x0000038Cu,c->r[0]); // 801B0DCC
  c->r[11]=c->r[1]+0x00000020u; // 801B0DD0
  c->lr=0x801B0DD8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B0DD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0DD8
  c->lr=c->r[0]; // 801B0DDC
  c->r[1]=c->r[1]+0x00000020u; // 801B0DE0
  return; // 801B0DE4
}

// fn_801B0DE8
void f_801B0DE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0DE8
  c->r[0]=c->lr; // 801B0DEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B0DF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B0DF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B0DF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B0DFC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B0E00
  c->r[28]=c->r[3]|c->r[3]; // 801B0E04
  c->r[4]=R32(c->r[3]+0x0000038Cu); // 801B0E08
  c->lr=0x801B0E10u; f_801B105C(c); // 801B0E0C
  c->r[3]=c->r[28]|c->r[28]; // 801B0E10
  c->lr=0x801B0E18u; f_801B1484(c); // 801B0E14
  c->r[30]=0u+0x00000000u; // 801B0E18
  c->r[31]=0u+0x00000000u; // 801B0E1C
L_801B0E20:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801B0E20
  cmps(c,0,(int32_t)c->r[0],0); // 801B0E24
  if (crb(c,2)) { goto L_801B0E68; } // 801B0E28
  c->lr=0x801B0E30u; f_80056B5C(c); // 801B0E2C
  c->r[29]=c->r[3]|c->r[3]; // 801B0E30
  c->lr=0x801B0E38u; f_8005DEE8(c); // 801B0E34
  c->lr=0x801B0E3Cu; f_80056B54(c); // 801B0E38
  c->r[3]=R32(c->r[28]+0x00000000u); // 801B0E3C
  cmps(c,0,(int32_t)c->r[3],0); // 801B0E40
  if (crb(c,2)) { goto L_801B0E5C; } // 801B0E44
  c->r[4]=0u+0x00000001u; // 801B0E48
  c->r[12]=R32(c->r[3]+0x00000034u); // 801B0E4C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801B0E50
  c->ctr=c->r[12]; // 801B0E54
  if (true) { c->lr=0x801B0E5Cu; dispatch(c,c->ctr); } // 801B0E58
L_801B0E5C:;
  c->r[3]=c->r[29]|c->r[29]; // 801B0E5C
  c->lr=0x801B0E64u; f_80056B54(c); // 801B0E60
  W32(c->r[28]+0x00000000u,c->r[31]); // 801B0E64
L_801B0E68:;
  c->r[28]=c->r[28]+0x00000004u; // 801B0E68
  c->r[30]=c->r[30]+0x00000001u; // 801B0E6C
  cmps(c,0,(int32_t)c->r[30],10); // 801B0E70
  if (crb(c,0)) { IRQCHK(c); goto L_801B0E20; } // 801B0E74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B0E78
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B0E7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B0E80
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B0E84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B0E88
  c->lr=c->r[0]; // 801B0E8C
  c->r[1]=c->r[1]+0x00000020u; // 801B0E90
  return; // 801B0E94
}

// fn_801B0E98
void f_801B0E98(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B0E98
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0E9C
  c->r[6]=c->r[3]+c->r[0]; // 801B0EA0
  c->r[5]=R32(c->r[6]+0x00000370u); // 801B0EA4
  c->r[3]=0u+0x00000001u; // 801B0EA8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B0EAC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801B0EB0
  c->r[0]=c->r[5]|c->r[0]; // 801B0EB4
  W32(c->r[6]+0x00000370u,c->r[0]); // 801B0EB8
  return; // 801B0EBC
}

// fn_801B0EC0
void f_801B0EC0(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801B0EC0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B0EC4
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801B0EC8
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B0ECC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0ED0
  c->r[3]=c->r[3]+c->r[0]; // 801B0ED4
  c->r[0]=R32(c->r[3]+0x00000370u); // 801B0ED8
  c->r[3]=c->r[5]&c->r[0]; // 801B0EDC
  c->r[0]=0u-c->r[3]; // 801B0EE0
  c->r[0]=c->r[0]|c->r[3]; // 801B0EE4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B0EE8
  return; // 801B0EEC
}

// fn_801B0EF0
void f_801B0EF0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B0EF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B0EF4
  c->r[6]=c->r[3]+c->r[0]; // 801B0EF8
  c->r[5]=R32(c->r[6]+0x00000370u); // 801B0EFC
  c->r[3]=0u+0x00000001u; // 801B0F00
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B0F04
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801B0F08
  c->r[0]=~(c->r[0]|c->r[0]); // 801B0F0C
  c->r[0]=c->r[5]&c->r[0]; // 801B0F10
  W32(c->r[6]+0x00000370u,c->r[0]); // 801B0F14
  return; // 801B0F18
}

// fn_801B0F1C
void f_801B0F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F1C
  c->r[0]=c->lr; // 801B0F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B0F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B0F28
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B0F2C
  c->r[30]=c->r[3]|c->r[3]; // 801B0F30
  c->r[31]=0u+0x00000000u; // 801B0F34
L_801B0F38:;
  c->r[3]=c->r[30]|c->r[30]; // 801B0F38
  c->r[4]=c->r[31]|c->r[31]; // 801B0F3C
  c->lr=0x801B0F44u; f_801B0EF0(c); // 801B0F40
  c->r[31]=c->r[31]+0x00000001u; // 801B0F44
  cmps(c,0,(int32_t)c->r[31],99); // 801B0F48
  if (crb(c,0)) { IRQCHK(c); goto L_801B0F38; } // 801B0F4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B0F50
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B0F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B0F58
  c->lr=c->r[0]; // 801B0F5C
  c->r[1]=c->r[1]+0x00000010u; // 801B0F60
  return; // 801B0F64
}

// fn_801B0F68
void f_801B0F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B0F68
  c->r[0]=c->lr; // 801B0F6C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B0F70
  c->r[11]=c->r[1]+0x00000030u; // 801B0F74
  c->lr=0x801B0F7Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B0F78
  c->r[25]=c->r[3]|c->r[3]; // 801B0F7C
  c->r[26]=c->r[4]|c->r[4]; // 801B0F80
  c->lr=0x801B0F88u; f_800F4430(c); // 801B0F84
  c->r[3]=c->r[3]+0x00000F00u; // 801B0F88
  c->r[4]=c->r[26]|c->r[26]; // 801B0F8C
  c->lr=0x801B0F94u; f_801B0AF4(c); // 801B0F90
  c->lr=0x801B0F98u; f_8007B524(c); // 801B0F94
  c->lr=0x801B0F9Cu; f_800A70B4(c); // 801B0F98
  c->r[30]=c->r[3]|c->r[3]; // 801B0F9C
  c->r[27]=0u+0x00000000u; // 801B0FA0
  c->r[29]=c->r[25]|c->r[25]; // 801B0FA4
  c->r[0]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801B0FA8
  c->r[28]=c->r[25]+c->r[0]; // 801B0FAC
  goto L_801B103C; // 801B0FB0
L_801B0FB4:;
  c->r[3]=c->r[25]|c->r[25]; // 801B0FB4
  c->r[4]=c->r[27]|c->r[27]; // 801B0FB8
  c->lr=0x801B0FC0u; f_801B0EC0(c); // 801B0FBC
  cmps(c,0,(int32_t)c->r[3],0); // 801B0FC0
  if (crb(c,2)) { goto L_801B1038; } // 801B0FC4
  c->lr=0x801B0FCCu; f_800F4430(c); // 801B0FC8
  c->r[3]=c->r[3]+0x00000F00u; // 801B0FCC
  c->r[4]=c->r[27]|c->r[27]; // 801B0FD0
  c->lr=0x801B0FD8u; f_801B0A24(c); // 801B0FD4
  c->r[26]=c->r[3]|c->r[3]; // 801B0FD8
  c->lr=0x801B0FE0u; f_800F4430(c); // 801B0FDC
  c->r[3]=c->r[3]+0x00000F00u; // 801B0FE0
  c->r[4]=c->r[27]|c->r[27]; // 801B0FE4
  c->lr=0x801B0FECu; f_801B0A70(c); // 801B0FE8
  c->r[31]=c->r[3]|c->r[3]; // 801B0FEC
  c->r[3]=c->r[25]|c->r[25]; // 801B0FF0
  c->r[4]=c->r[26]|c->r[26]; // 801B0FF4
  c->lr=0x801B0FFCu; f_801B1150(c); // 801B0FF8
  c->r[26]=c->r[3]|c->r[3]; // 801B0FFC
  c->lr=0x801B1004u; f_80089E24(c); // 801B1000
  c->r[4]=c->r[3]|c->r[3]; // 801B1004
  W32(c->r[3]+0x00000004u,c->r[31]); // 801B1008
  c->r[3]=c->r[26]|c->r[26]; // 801B100C
  c->r[5]=0u+0x00000001u; // 801B1010
  c->lr=0x801B1018u; f_80178F64(c); // 801B1014
  c->r[3]=R32(c->r[28]+0x00000000u); // 801B1018
  c->r[4]=c->r[26]|c->r[26]; // 801B101C
  c->lr=0x801B1024u; f_80179868(c); // 801B1020
  W32(c->r[29]+0x00000050u,c->r[3]); // 801B1024
  c->r[29]=c->r[29]+0x00000004u; // 801B1028
  c->r[3]=R32(c->r[28]+0x00000028u); // 801B102C
  c->r[0]=c->r[3]+0x00000001u; // 801B1030
  W32(c->r[28]+0x00000028u,c->r[0]); // 801B1034
L_801B1038:;
  c->r[27]=c->r[27]+0x00000001u; // 801B1038
L_801B103C:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[30]); // 801B103C
  if (crb(c,0)) { IRQCHK(c); goto L_801B0FB4; } // 801B1040
  c->r[11]=c->r[1]+0x00000030u; // 801B1044
  c->lr=0x801B104Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1048
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B104C
  c->lr=c->r[0]; // 801B1050
  c->r[1]=c->r[1]+0x00000030u; // 801B1054
  return; // 801B1058
}

// fn_801B105C
void f_801B105C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B105C
  c->r[0]=c->lr; // 801B1060
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1064
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B1068
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B106C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B1070
  W32(c->r[1]+0x00000010u,c->r[28]); // 801B1074
  c->r[28]=c->r[3]|c->r[3]; // 801B1078
  c->lr=0x801B1080u; f_800F4430(c); // 801B107C
  c->r[3]=c->r[3]+0x00000F00u; // 801B1080
  c->r[4]=R32(c->r[28]+0x0000038Cu); // 801B1084
  c->lr=0x801B108Cu; f_801B0AF4(c); // 801B1088
  c->r[3]=c->r[28]|c->r[28]; // 801B108C
  c->lr=0x801B1094u; f_801B1268(c); // 801B1090
  c->r[31]=c->r[3]|c->r[3]; // 801B1094
  c->r[3]=c->r[28]|c->r[28]; // 801B1098
  c->lr=0x801B10A0u; f_801B1254(c); // 801B109C
  c->r[0]=c->r[3]+c->r[31]; // 801B10A0
  cmps(c,0,(int32_t)c->r[0],0); // 801B10A4
  if (!crb(c,1)) { goto L_801B1110; } // 801B10A8
  c->lr=0x801B10B0u; f_8007B524(c); // 801B10AC
  c->lr=0x801B10B4u; f_800A70B4(c); // 801B10B0
  c->r[31]=c->r[3]|c->r[3]; // 801B10B4
  c->r[29]=0u+0x00000000u; // 801B10B8
  c->r[30]=c->r[28]|c->r[28]; // 801B10BC
  goto L_801B1108; // 801B10C0
L_801B10C4:;
  c->r[4]=R32(c->r[30]+0x00000050u); // 801B10C4
  c->r[0]=c->r[4]+0x00010000u; // 801B10C8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B10CC
  if (crb(c,2)) { goto L_801B1100; } // 801B10D0
  c->r[0]=R32(c->r[28]+0x0000038Cu); // 801B10D4
  cmps(c,0,(int32_t)c->r[0],10); // 801B10D8
  if (crb(c,2)) { goto L_801B1100; } // 801B10DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B10E0
  c->r[3]=R32(c->r[28]+c->r[0]); // 801B10E4
  c->lr=0x801B10ECu; f_80179984(c); // 801B10E8
  c->r[4]=c->r[3]|c->r[3]; // 801B10EC
  cmps(c,0,(int32_t)c->r[3],0); // 801B10F0
  if (crb(c,2)) { goto L_801B1100; } // 801B10F4
  c->r[3]=c->r[28]|c->r[28]; // 801B10F8
  c->lr=0x801B1100u; f_801B11B4(c); // 801B10FC
L_801B1100:;
  c->r[30]=c->r[30]+0x00000004u; // 801B1100
  c->r[29]=c->r[29]+0x00000001u; // 801B1104
L_801B1108:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 801B1108
  if (crb(c,0)) { IRQCHK(c); goto L_801B10C4; } // 801B110C
L_801B1110:;
  c->r[3]=c->r[28]+0x00000028u; // 801B1110
  c->r[4]=0u+0x00000000u; // 801B1114
  c->r[5]=0u+0x00000028u; // 801B1118
  c->lr=0x801B1120u; f_800060B8(c); // 801B111C
  c->r[3]=c->r[28]+0x00000050u; // 801B1120
  c->r[4]=0u+0xFFFFFFFFu; // 801B1124
  c->r[5]=0u+0x0000018Cu; // 801B1128
  c->lr=0x801B1130u; f_800060B8(c); // 801B112C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1130
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B1134
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1138
  c->r[28]=R32(c->r[1]+0x00000010u); // 801B113C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1140
  c->lr=c->r[0]; // 801B1144
  c->r[1]=c->r[1]+0x00000020u; // 801B1148
  return; // 801B114C
}

// fn_801B1150
void f_801B1150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1150
  c->r[0]=c->lr; // 801B1154
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801B1158
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801B115C
  W32(c->r[1]+0x000000A8u,c->r[30]); // 801B1160
  c->r[30]=c->r[4]|c->r[4]; // 801B1164
  c->lr=0x801B116Cu; f_80074E68(c); // 801B1168
  c->lr=0x801B1170u; f_8017A2D8(c); // 801B116C
  c->r[31]=c->r[3]|c->r[3]; // 801B1170
  c->r[3]=c->r[1]+0x00000008u; // 801B1174
  c->lr=0x801B117Cu; f_8008A590(c); // 801B1178
  c->r[3]=c->r[1]+0x00000008u; // 801B117C
  c->r[4]=c->r[30]|c->r[30]; // 801B1180
  c->lr=0x801B1188u; f_80178974(c); // 801B1184
  c->r[3]=c->r[31]|c->r[31]; // 801B1188
  c->r[4]=c->r[1]+0x00000008u; // 801B118C
  c->r[5]=0u+0x00000001u; // 801B1190
  c->lr=0x801B1198u; f_80178F64(c); // 801B1194
  c->r[3]=c->r[31]|c->r[31]; // 801B1198
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801B119C
  c->r[30]=R32(c->r[1]+0x000000A8u); // 801B11A0
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801B11A4
  c->lr=c->r[0]; // 801B11A8
  c->r[1]=c->r[1]+0x000000B0u; // 801B11AC
  return; // 801B11B0
}

// fn_801B11B4
void f_801B11B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B11B4
  c->r[0]=c->lr; // 801B11B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B11BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B11C0
  c->r[31]=c->r[4]|c->r[4]; // 801B11C4
  c->lr=0x801B11CCu; f_80074E68(c); // 801B11C8
  c->r[4]=c->r[31]|c->r[31]; // 801B11CC
  c->lr=0x801B11D4u; f_8017A3C0(c); // 801B11D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B11D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B11D8
  c->lr=c->r[0]; // 801B11DC
  c->r[1]=c->r[1]+0x00000010u; // 801B11E0
  return; // 801B11E4
}

// fn_801B11E8
void f_801B11E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B11E8
  c->r[0]=c->lr; // 801B11EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B11F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B11F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B11F8
  c->r[30]=c->r[3]|c->r[3]; // 801B11FC
  c->r[31]=c->r[4]|c->r[4]; // 801B1200
  c->lr=0x801B1208u; f_801B105C(c); // 801B1204
  c->r[3]=c->r[30]|c->r[30]; // 801B1208
  c->r[4]=c->r[31]|c->r[31]; // 801B120C
  c->lr=0x801B1214u; f_801B0F68(c); // 801B1210
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1214
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B1218
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B121C
  c->lr=c->r[0]; // 801B1220
  c->r[1]=c->r[1]+0x00000010u; // 801B1224
  return; // 801B1228
}

// fn_801B122C
void f_801B122C(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00010000u; // 801B122C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B1230
  if (!crb(c,2)) { goto L_801B1240; } // 801B1234
  c->r[3]=0u+0x00000000u; // 801B1238
  return; // 801B123C
L_801B1240:;
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801B1240
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1244
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B1248
  f_801799CC(c); return; // 801B124C
  return; // 801B1250
}

// fn_801B1254
void f_801B1254(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801B1254
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1258
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B125C
  c->r[4]=0u+0x00000000u; // 801B1260
  f_8008E560(c); return; // 801B1264
}

// fn_801B1268
void f_801B1268(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801B1268
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B126C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B1270
  c->r[4]=0u+0x00000002u; // 801B1274
  f_8008E560(c); return; // 801B1278
}

// fn_801B127C
void f_801B127C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000036Cu); // 801B127C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1280
  c->r[5]=c->r[3]+c->r[0]; // 801B1284
  W32(c->r[5]+0x000001DCu,c->r[4]); // 801B1288
  c->r[4]=R32(c->r[3]+0x0000036Cu); // 801B128C
  c->r[0]=c->r[4]+0x00000001u; // 801B1290
  W32(c->r[3]+0x0000036Cu,c->r[0]); // 801B1294
  return; // 801B1298
}

// fn_801B129C
void f_801B129C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B129C
  c->r[0]=c->lr; // 801B12A0
  W32(c->r[1]+0x00000144u,c->r[0]); // 801B12A4
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 801B12A8
  W32(c->r[1]+0x00000138u,c->r[30]); // 801B12AC
  W32(c->r[1]+0x00000134u,c->r[29]); // 801B12B0
  W32(c->r[1]+0x00000130u,c->r[28]); // 801B12B4
  c->r[28]=c->r[3]|c->r[3]; // 801B12B8
  c->r[29]=c->r[4]|c->r[4]; // 801B12BC
  c->r[0]=R32(c->r[3]+0x0000036Cu); // 801B12C0
  cmps(c,0,(int32_t)c->r[0],0); // 801B12C4
  if (crb(c,1)) { goto L_801B12D4; } // 801B12C8
  c->r[3]=0u+0x00000000u; // 801B12CC
  goto L_801B139C; // 801B12D0
L_801B12D4:;
  c->r[3]=c->r[1]+0x0000009Cu; // 801B12D4
  c->lr=0x801B12DCu; f_8008A590(c); // 801B12D8
  c->r[3]=c->r[1]+0x00000008u; // 801B12DC
  c->lr=0x801B12E4u; f_8008A590(c); // 801B12E0
  c->r[3]=c->r[29]|c->r[29]; // 801B12E4
  c->lr=0x801B12ECu; f_801B1B08(c); // 801B12E8
  c->r[31]=c->r[3]|c->r[3]; // 801B12EC
  c->lr=0x801B12F4u; f_80089E24(c); // 801B12F0
  c->r[4]=c->r[3]|c->r[3]; // 801B12F4
  c->r[3]=c->r[28]|c->r[28]; // 801B12F8
  c->r[4]=R32(c->r[4]+0x00000000u); // 801B12FC
  c->lr=0x801B1304u; f_801B1150(c); // 801B1300
  c->r[30]=c->r[3]|c->r[3]; // 801B1304
  c->r[3]=c->r[31]|c->r[31]; // 801B1308
  c->lr=0x801B1310u; f_80089E24(c); // 801B130C
  c->r[4]=c->r[3]|c->r[3]; // 801B1310
  c->r[3]=c->r[1]+0x0000009Cu; // 801B1314
  c->lr=0x801B131Cu; f_8017903C(c); // 801B1318
  c->r[3]=c->r[30]|c->r[30]; // 801B131C
  c->lr=0x801B1324u; f_80089E24(c); // 801B1320
  c->r[4]=c->r[3]|c->r[3]; // 801B1324
  c->r[3]=c->r[1]+0x00000008u; // 801B1328
  c->lr=0x801B1330u; f_8017903C(c); // 801B132C
  c->r[0]=R32(c->r[1]+0x000000A0u); // 801B1330
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1334
  c->r[3]=c->r[30]|c->r[30]; // 801B1338
  c->r[4]=c->r[1]+0x00000008u; // 801B133C
  c->r[5]=0u+0x00000001u; // 801B1340
  c->lr=0x801B1348u; f_80178F64(c); // 801B1344
  c->r[5]=0u+0x00000000u; // 801B1348
  c->r[3]=c->r[28]|c->r[28]; // 801B134C
  c->r[0]=R32(c->r[28]+0x0000036Cu); // 801B1350
  c->ctr=c->r[0]; // 801B1354
  cmps(c,0,(int32_t)c->r[0],0); // 801B1358
  if (!crb(c,1)) { goto L_801B138C; } // 801B135C
L_801B1360:;
  c->r[0]=R32(c->r[3]+0x000001DCu); // 801B1360
  cmpu(c,0,c->r[29],c->r[0]); // 801B1364
  if (!crb(c,2)) { goto L_801B1380; } // 801B1368
  c->r[4]=0u+0xFFFFFFFFu; // 801B136C
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801B1370
  c->r[3]=c->r[28]+c->r[0]; // 801B1374
  W32(c->r[3]+0x000001DCu,c->r[4]); // 801B1378
  goto L_801B138C; // 801B137C
L_801B1380:;
  c->r[3]=c->r[3]+0x00000004u; // 801B1380
  c->r[5]=c->r[5]+0x00000001u; // 801B1384
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B1360; } // 801B1388
L_801B138C:;
  c->r[3]=R32(c->r[28]+0x0000036Cu); // 801B138C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B1390
  W32(c->r[28]+0x0000036Cu,c->r[0]); // 801B1394
  c->r[3]=c->r[30]|c->r[30]; // 801B1398
L_801B139C:;
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 801B139C
  c->r[30]=R32(c->r[1]+0x00000138u); // 801B13A0
  c->r[29]=R32(c->r[1]+0x00000134u); // 801B13A4
  c->r[28]=R32(c->r[1]+0x00000130u); // 801B13A8
  c->r[0]=R32(c->r[1]+0x00000144u); // 801B13AC
  c->lr=c->r[0]; // 801B13B0
  c->r[1]=c->r[1]+0x00000140u; // 801B13B4
  return; // 801B13B8
}

// fn_801B13BC
void f_801B13BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B13BC
  c->r[0]=c->lr; // 801B13C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B13C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801B13C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801B13CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801B13D0
  c->r[29]=c->r[3]|c->r[3]; // 801B13D4
  c->r[30]=c->r[4]|c->r[4]; // 801B13D8
  c->lr=0x801B13E0u; f_8007B524(c); // 801B13DC
  c->lr=0x801B13E4u; f_800A3488(c); // 801B13E0
  c->r[31]=c->r[3]|c->r[3]; // 801B13E4
  c->lr=0x801B13ECu; f_8007B524(c); // 801B13E8
  c->r[4]=c->r[30]|c->r[30]; // 801B13EC
  c->lr=0x801B13F4u; f_800A3064(c); // 801B13F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B13F4
  if (crb(c,2)) { goto L_801B140C; } // 801B13F8
  c->lr=0x801B1400u; f_8007B524(c); // 801B13FC
  c->r[4]=c->r[30]|c->r[30]; // 801B1400
  c->r[5]=0u+0x00000000u; // 801B1404
  c->lr=0x801B140Cu; f_800A30DC(c); // 801B1408
L_801B140C:;
  c->r[3]=c->r[31]|c->r[31]; // 801B140C
  c->r[4]=c->r[30]|c->r[30]; // 801B1410
  c->lr=0x801B1418u; f_80179984(c); // 801B1414
  c->r[6]=0u+0x00000000u; // 801B1418
  c->r[4]=c->r[29]|c->r[29]; // 801B141C
  c->r[0]=R32(c->r[29]+0x0000036Cu); // 801B1420
  c->ctr=c->r[0]; // 801B1424
  cmps(c,0,(int32_t)c->r[0],0); // 801B1428
  if (!crb(c,1)) { goto L_801B145C; } // 801B142C
L_801B1430:;
  c->r[0]=R32(c->r[4]+0x000001DCu); // 801B1430
  cmpu(c,0,c->r[30],c->r[0]); // 801B1434
  if (!crb(c,2)) { goto L_801B1450; } // 801B1438
  c->r[5]=0u+0xFFFFFFFFu; // 801B143C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801B1440
  c->r[4]=c->r[29]+c->r[0]; // 801B1444
  W32(c->r[4]+0x000001DCu,c->r[5]); // 801B1448
  goto L_801B145C; // 801B144C
L_801B1450:;
  c->r[4]=c->r[4]+0x00000004u; // 801B1450
  c->r[6]=c->r[6]+0x00000001u; // 801B1454
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B1430; } // 801B1458
L_801B145C:;
  c->r[4]=R32(c->r[29]+0x0000036Cu); // 801B145C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801B1460
  W32(c->r[29]+0x0000036Cu,c->r[0]); // 801B1464
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801B1468
  c->r[30]=R32(c->r[1]+0x00000018u); // 801B146C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801B1470
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B1474
  c->lr=c->r[0]; // 801B1478
  c->r[1]=c->r[1]+0x00000020u; // 801B147C
  return; // 801B1480
}

// fn_801B1484
void f_801B1484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1484
  c->r[0]=c->lr; // 801B1488
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B148C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1490
  c->r[31]=c->r[3]|c->r[3]; // 801B1494
  c->r[3]=c->r[3]+0x000001DCu; // 801B1498
  c->r[4]=0u+0xFFFFFFFFu; // 801B149C
  c->r[5]=0u+0x0000018Cu; // 801B14A0
  c->lr=0x801B14A8u; f_800060B8(c); // 801B14A4
  c->r[0]=0u+0x00000000u; // 801B14A8
  W32(c->r[31]+0x0000036Cu,c->r[0]); // 801B14AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B14B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B14B4
  c->lr=c->r[0]; // 801B14B8
  c->r[1]=c->r[1]+0x00000010u; // 801B14BC
  return; // 801B14C0
}

// fn_801B14C4
void f_801B14C4(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 801B14C4
  c->r[0]=R32(c->r[3]+0x0000036Cu); // 801B14C8
  c->ctr=c->r[0]; // 801B14CC
  cmps(c,0,(int32_t)c->r[0],0); // 801B14D0
  if (!crb(c,1)) { goto L_801B14F4; } // 801B14D4
L_801B14D8:;
  c->r[4]=R32(c->r[3]+0x000001DCu); // 801B14D8
  c->r[0]=c->r[4]+0x00010000u; // 801B14DC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801B14E0
  if (crb(c,2)) { goto L_801B14EC; } // 801B14E4
  c->r[5]=c->r[5]+0x00000001u; // 801B14E8
L_801B14EC:;
  c->r[3]=c->r[3]+0x00000004u; // 801B14EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801B14D8; } // 801B14F0
L_801B14F4:;
  c->r[3]=c->r[5]|c->r[5]; // 801B14F4
  return; // 801B14F8
}

// fn_801B14FC
void f_801B14FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801B14FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1500
  c->r[3]=R32(c->r[3]+c->r[0]); // 801B1504
  return; // 801B1508
}

// fn_801B150C
void f_801B150C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B150C
  c->r[0]=c->lr; // 801B1510
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B1514
  c->r[11]=c->r[1]+0x00000020u; // 801B1518
  c->lr=0x801B1520u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B151C
  c->r[27]=c->r[3]|c->r[3]; // 801B1520
  c->lr=0x801B1528u; f_8007B524(c); // 801B1524
  c->lr=0x801B152Cu; f_800A3488(c); // 801B1528
  c->r[28]=c->r[3]|c->r[3]; // 801B152C
  c->r[3]=c->r[27]|c->r[27]; // 801B1530
  c->lr=0x801B1538u; f_801B14C4(c); // 801B1534
  c->r[31]=c->r[3]|c->r[3]; // 801B1538
  c->r[29]=0u+0x00000000u; // 801B153C
  c->r[30]=c->r[27]|c->r[27]; // 801B1540
  goto L_801B158C; // 801B1544
L_801B1548:;
  c->lr=0x801B154Cu; f_8007B524(c); // 801B1548
  c->r[4]=R32(c->r[30]+0x000001DCu); // 801B154C
  c->lr=0x801B1554u; f_800A3B20(c); // 801B1550
  cmps(c,0,(int32_t)c->r[3],0); // 801B1554
  if (crb(c,2)) { goto L_801B1584; } // 801B1558
  c->r[3]=c->r[27]|c->r[27]; // 801B155C
  c->r[4]=R32(c->r[30]+0x000001DCu); // 801B1560
  c->lr=0x801B1568u; f_801B129C(c); // 801B1564
  c->r[4]=c->r[3]|c->r[3]; // 801B1568
  cmps(c,0,(int32_t)c->r[3],0); // 801B156C
  if (crb(c,2)) { goto L_801B1584; } // 801B1570
  c->r[3]=c->r[28]|c->r[28]; // 801B1574
  c->lr=0x801B157Cu; f_80179868(c); // 801B1578
  c->lr=0x801B1580u; f_8007B524(c); // 801B157C
  c->lr=0x801B1584u; f_800A606C(c); // 801B1580
L_801B1584:;
  c->r[30]=c->r[30]+0x00000004u; // 801B1584
  c->r[29]=c->r[29]+0x00000001u; // 801B1588
L_801B158C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 801B158C
  if (crb(c,0)) { IRQCHK(c); goto L_801B1548; } // 801B1590
  c->r[3]=c->r[27]|c->r[27]; // 801B1594
  c->lr=0x801B159Cu; f_801B14C4(c); // 801B1598
  c->r[31]=c->r[3]|c->r[3]; // 801B159C
  c->r[29]=0u+0x00000000u; // 801B15A0
  c->r[30]=c->r[27]|c->r[27]; // 801B15A4
  goto L_801B15D4; // 801B15A8
L_801B15AC:;
  c->r[3]=c->r[27]|c->r[27]; // 801B15AC
  c->r[4]=R32(c->r[30]+0x000001DCu); // 801B15B0
  c->lr=0x801B15B8u; f_801B129C(c); // 801B15B4
  c->r[4]=c->r[3]|c->r[3]; // 801B15B8
  cmps(c,0,(int32_t)c->r[3],0); // 801B15BC
  if (crb(c,2)) { goto L_801B15CC; } // 801B15C0
  c->r[3]=c->r[28]|c->r[28]; // 801B15C4
  c->lr=0x801B15CCu; f_80179868(c); // 801B15C8
L_801B15CC:;
  c->r[30]=c->r[30]+0x00000004u; // 801B15CC
  c->r[29]=c->r[29]+0x00000001u; // 801B15D0
L_801B15D4:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 801B15D4
  if (crb(c,0)) { IRQCHK(c); goto L_801B15AC; } // 801B15D8
  c->r[11]=c->r[1]+0x00000020u; // 801B15DC
  c->lr=0x801B15E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B15E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B15E4
  c->lr=c->r[0]; // 801B15E8
  c->r[1]=c->r[1]+0x00000020u; // 801B15EC
  return; // 801B15F0
}

// fn_801B15F4
void f_801B15F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B15F4
  c->r[0]=c->lr; // 801B15F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801B15FC
  c->r[11]=c->r[1]+0x00000020u; // 801B1600
  c->lr=0x801B1608u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801B1604
  c->r[27]=c->r[3]|c->r[3]; // 801B1608
  c->lr=0x801B1610u; f_801B14C4(c); // 801B160C
  c->r[31]=c->r[3]|c->r[3]; // 801B1610
  c->r[29]=0u+0x00000000u; // 801B1614
  c->r[30]=c->r[27]|c->r[27]; // 801B1618
  goto L_801B164C; // 801B161C
L_801B1620:;
  c->r[3]=c->r[27]|c->r[27]; // 801B1620
  c->r[4]=R32(c->r[30]+0x000001DCu); // 801B1624
  c->lr=0x801B162Cu; f_801B13BC(c); // 801B1628
  c->r[28]=c->r[3]|c->r[3]; // 801B162C
  cmps(c,0,(int32_t)c->r[3],0); // 801B1630
  if (crb(c,2)) { goto L_801B1644; } // 801B1634
  c->lr=0x801B163Cu; f_80074E68(c); // 801B1638
  c->r[4]=c->r[28]|c->r[28]; // 801B163C
  c->lr=0x801B1644u; f_8017A3C0(c); // 801B1640
L_801B1644:;
  c->r[30]=c->r[30]+0x00000004u; // 801B1644
  c->r[29]=c->r[29]+0x00000001u; // 801B1648
L_801B164C:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 801B164C
  if (crb(c,0)) { IRQCHK(c); goto L_801B1620; } // 801B1650
  c->r[11]=c->r[1]+0x00000020u; // 801B1654
  c->lr=0x801B165Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801B1658
  c->r[0]=R32(c->r[1]+0x00000024u); // 801B165C
  c->lr=c->r[0]; // 801B1660
  c->r[1]=c->r[1]+0x00000020u; // 801B1664
  return; // 801B1668
}

// fn_801B166C
void f_801B166C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B166C
  c->r[0]=c->lr; // 801B1670
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B1674
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B1678
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B167C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B1680
  c->r[31]=c->r[4]|c->r[4]; // 801B1684
  c->r[0]=0u+0x43300000u; // 801B1688
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B168C
  c->r[0]=0u+0x43300000u; // 801B1690
  W32(c->r[1]+0x00000010u,c->r[0]); // 801B1694
  c->r[3]=c->r[31]|c->r[31]; // 801B1698
  c->lr=0x801B16A0u; f_80179098(c); // 801B169C
  c->r[29]=c->r[3]|c->r[3]; // 801B16A0
  cmps(c,0,(int32_t)c->r[3],0); // 801B16A4
  if (!crb(c,2)) { goto L_801B16B4; } // 801B16A8
  c->r[3]=0u+0x00000000u; // 801B16AC
  goto L_801B175C; // 801B16B0
L_801B16B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B16B4
  c->lr=0x801B16BCu; f_80089E24(c); // 801B16B8
  c->r[30]=c->r[3]|c->r[3]; // 801B16BC
  cmps(c,0,(int32_t)c->r[3],0); // 801B16C0
  if (!crb(c,2)) { goto L_801B16D0; } // 801B16C4
  c->r[3]=0u+0x00000000u; // 801B16C8
  goto L_801B175C; // 801B16CC
L_801B16D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801B16D0
  c->lr=0x801B16D8u; f_80073580(c); // 801B16D4
  c->r[31]=c->r[3]|c->r[3]; // 801B16D8
  c->lr=0x801B16E0u; f_8007B524(c); // 801B16DC
  c->r[4]=c->r[31]|c->r[31]; // 801B16E0
  c->lr=0x801B16E8u; f_800A39E4(c); // 801B16E4
  cmps(c,0,(int32_t)c->r[3],0); // 801B16E8
  if (!crb(c,0)) { goto L_801B16F4; } // 801B16EC
  c->r[3]=0u+0x00000000u; // 801B16F0
L_801B16F4:;
  c->r[4]=R32(c->r[29]+0x00000020u); // 801B16F4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801B16F8
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[4]=RF64(ea);} // 801B16FC
  c->r[0]=c->r[0]^0x80000000u; // 801B1700
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1704
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B1708
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 801B170C
  c->r[0]=c->r[4]^0x80000000u; // 801B1710
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1714
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B1718
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 801B171C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B1720
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B1724
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[4]); // 801B1728
  {uint32_t ea=c->r[2]+0xFFFF9304u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B172C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801B1730
  c->r[0]=c->r[3]^0x80000000u; // 801B1734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1738
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801B173C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801B1740
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801B1744
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801B1748
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801B174C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B1750
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801B1754
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 801B1758
L_801B175C:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B175C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B1760
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B1764
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B1768
  c->lr=c->r[0]; // 801B176C
  c->r[1]=c->r[1]+0x00000030u; // 801B1770
  return; // 801B1774
}

// fn_801B1778
void f_801B1778(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1778
  c->r[0]=c->lr; // 801B177C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1784
  c->r[31]=c->r[3]|c->r[3]; // 801B1788
  c->r[3]=c->r[4]|c->r[4]; // 801B178C
  c->lr=0x801B1794u; f_801B1B08(c); // 801B1790
  c->r[4]=c->r[3]|c->r[3]; // 801B1794
  cmps(c,0,(int32_t)c->r[3],0); // 801B1798
  if (crb(c,2)) { goto L_801B17AC; } // 801B179C
  c->r[3]=c->r[31]|c->r[31]; // 801B17A0
  c->lr=0x801B17A8u; f_801B166C(c); // 801B17A4
  goto L_801B17B0; // 801B17A8
L_801B17AC:;
  c->r[3]=0u+0x00000000u; // 801B17AC
L_801B17B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B17B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B17B4
  c->lr=c->r[0]; // 801B17B8
  c->r[1]=c->r[1]+0x00000010u; // 801B17BC
  return; // 801B17C0
}

// fn_801B17C4
void f_801B17C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B17C4
  c->r[0]=c->lr; // 801B17C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801B17CC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801B17D0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801B17D4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801B17D8
  c->r[29]=c->r[3]|c->r[3]; // 801B17DC
  c->r[30]=c->r[4]|c->r[4]; // 801B17E0
  c->lr=0x801B17E8u; f_8007B524(c); // 801B17E4
  c->r[4]=c->r[30]|c->r[30]; // 801B17E8
  c->lr=0x801B17F0u; f_800A24C4(c); // 801B17EC
  c->r[31]=c->r[3]|c->r[3]; // 801B17F0
  cmps(c,0,(int32_t)c->r[3],0); // 801B17F4
  if (!crb(c,2)) { goto L_801B1804; } // 801B17F8
  c->r[3]=0u+0x00000000u; // 801B17FC
  goto L_801B1890; // 801B1800
L_801B1804:;
  c->lr=0x801B1808u; f_8007B524(c); // 801B1804
  c->r[4]=c->r[30]|c->r[30]; // 801B1808
  c->lr=0x801B1810u; f_800A38BC(c); // 801B180C
  cmps(c,0,(int32_t)c->r[3],0); // 801B1810
  if (crb(c,2)) { goto L_801B1820; } // 801B1814
  c->r[3]=R32(c->r[29]+0x00000388u); // 801B1818
  goto L_801B1890; // 801B181C
L_801B1820:;
  c->r[3]=c->r[29]|c->r[29]; // 801B1820
  c->r[4]=c->r[31]|c->r[31]; // 801B1824
  c->lr=0x801B182Cu; f_801B166C(c); // 801B1828
  c->r[31]=c->r[3]|c->r[3]; // 801B182C
  c->lr=0x801B1834u; f_8007B524(c); // 801B1830
  c->r[4]=c->r[30]|c->r[30]; // 801B1834
  c->lr=0x801B183Cu; f_800A3980(c); // 801B1838
  {uint32_t ea=c->r[29]+0x00000380u; c->f[2]=c->ps1[2]=RF32(ea);} // 801B183C
  cmps(c,0,(int32_t)c->r[3],0); // 801B1840
  if (!crb(c,2)) { goto L_801B1864; } // 801B1844
  c->r[0]=R32(c->r[29]+0x0000038Cu); // 801B1848
  cmps(c,0,(int32_t)c->r[0],2); // 801B184C
  if (crb(c,2)) { goto L_801B1864; } // 801B1850
  cmps(c,0,(int32_t)c->r[0],7); // 801B1854
  if (crb(c,2)) { goto L_801B1864; } // 801B1858
  {uint32_t ea=c->r[29]+0x00000384u; c->f[0]=c->ps1[0]=RF32(ea);} // 801B185C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801B1860
L_801B1864:;
  {uint32_t ea=c->r[2]+0xFFFF9308u; c->f[1]=RF64(ea);} // 801B1864
  c->r[0]=c->r[31]^0x80000000u; // 801B1868
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801B186C
  c->r[0]=0u+0x43300000u; // 801B1870
  W32(c->r[1]+0x00000008u,c->r[0]); // 801B1874
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801B1878
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801B187C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801B1880
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801B1884
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801B1888
  c->r[3]=R32(c->r[1]+0x00000014u); // 801B188C
L_801B1890:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801B1890
  c->r[30]=R32(c->r[1]+0x00000028u); // 801B1894
  c->r[29]=R32(c->r[1]+0x00000024u); // 801B1898
  c->r[0]=R32(c->r[1]+0x00000034u); // 801B189C
  c->lr=c->r[0]; // 801B18A0
  c->r[1]=c->r[1]+0x00000030u; // 801B18A4
  return; // 801B18A8
}

// fn_801B18AC
void f_801B18AC(Ctx* __restrict c) {
  W32(c->r[3]+0x0000038Cu,c->r[4]); // 801B18AC
  return; // 801B18B0
}

// fn_801B18B4
void f_801B18B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000038Cu); // 801B18B4
  return; // 801B18B8
}

// fn_801B18BC
void f_801B18BC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801B18BC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B18C0
  c->r[5]=c->r[3]+c->r[0]; // 801B18C4
  c->r[6]=R32(c->r[5]+0x00000028u); // 801B18C8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801B18CC
  c->r[5]=c->r[3]+c->r[0]; // 801B18D0
  W32(c->r[5]+0x00000050u,c->r[4]); // 801B18D4
  c->r[4]=c->r[6]+0x00000001u; // 801B18D8
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801B18DC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B18E0
  c->r[3]=c->r[3]+c->r[0]; // 801B18E4
  W32(c->r[3]+0x00000028u,c->r[4]); // 801B18E8
  return; // 801B18EC
}

// fn_801B18F0
void f_801B18F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B18F0
  c->r[0]=c->lr; // 801B18F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B18F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B18FC
  c->r[31]=c->r[3]|c->r[3]; // 801B1900
  c->r[3]=c->r[3]+0x00000050u; // 801B1904
  c->r[4]=0u+0xFFFFFFFFu; // 801B1908
  c->r[5]=0u+0x0000018Cu; // 801B190C
  c->lr=0x801B1914u; f_800060B8(c); // 801B1910
  c->r[3]=c->r[31]+0x00000028u; // 801B1914
  c->r[4]=0u+0x00000000u; // 801B1918
  c->r[5]=0u+0x00000028u; // 801B191C
  c->lr=0x801B1924u; f_800060B8(c); // 801B1920
  c->lr=0x801B1928u; f_801B1B3C(c); // 801B1924
  cmps(c,0,(int32_t)c->r[3],0); // 801B1928
  if (!crb(c,1)) { goto L_801B1950; } // 801B192C
  c->r[0]=R32(c->r[31]+0x0000038Cu); // 801B1930
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1934
  c->r[3]=R32(c->r[31]+c->r[0]); // 801B1938
  c->r[4]=0u+0x00000000u; // 801B193C
  c->r[5]=c->r[31]|c->r[31]; // 801B1940
  c->r[6]=0u+0x801B0000u; // 801B1944
  c->r[6]=c->r[6]+0x00000BB4u; // 801B1948
  c->lr=0x801B1950u; f_80179BAC(c); // 801B194C
L_801B1950:;
  c->lr=0x801B1954u; f_801B1B60(c); // 801B1950
  cmps(c,0,(int32_t)c->r[3],0); // 801B1954
  if (!crb(c,1)) { goto L_801B197C; } // 801B1958
  c->r[0]=R32(c->r[31]+0x0000038Cu); // 801B195C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1960
  c->r[3]=R32(c->r[31]+c->r[0]); // 801B1964
  c->r[4]=0u+0x00000002u; // 801B1968
  c->r[5]=c->r[31]|c->r[31]; // 801B196C
  c->r[6]=0u+0x801B0000u; // 801B1970
  c->r[6]=c->r[6]+0x00000BB4u; // 801B1974
  c->lr=0x801B197Cu; f_80179BAC(c); // 801B1978
L_801B197C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B197C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1980
  c->lr=c->r[0]; // 801B1984
  c->r[1]=c->r[1]+0x00000010u; // 801B1988
  return; // 801B198C
}

// fn_801B1990
void f_801B1990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1990
  c->r[0]=c->lr; // 801B1994
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B199C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B19A0
  c->r[30]=0u+0x00000000u; // 801B19A4
  c->r[31]=c->r[3]|c->r[3]; // 801B19A8
L_801B19AC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B19AC
  c->r[4]=0u+0x00000001u; // 801B19B0
  c->lr=0x801B19B8u; f_801797EC(c); // 801B19B4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B19B8
  c->r[4]=0u+0x00000000u; // 801B19BC
  c->r[5]=0u+0x00000063u; // 801B19C0
  c->lr=0x801B19C8u; f_80179858(c); // 801B19C4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801B19C8
  c->r[4]=0u+0x00000002u; // 801B19CC
  c->r[5]=0u+0x00000063u; // 801B19D0
  c->lr=0x801B19D8u; f_80179858(c); // 801B19D4
  c->r[31]=c->r[31]+0x00000004u; // 801B19D8
  c->r[30]=c->r[30]+0x00000001u; // 801B19DC
  cmps(c,0,(int32_t)c->r[30],10); // 801B19E0
  if (crb(c,0)) { IRQCHK(c); goto L_801B19AC; } // 801B19E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B19E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B19EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B19F0
  c->lr=c->r[0]; // 801B19F4
  c->r[1]=c->r[1]+0x00000010u; // 801B19F8
  return; // 801B19FC
}

// fn_801B1A00
void f_801B1A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A00
  c->r[0]=c->lr; // 801B1A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1A08
  c->lr=0x801B1A10u; f_801B0BF4(c); // 801B1A0C
  c->lr=0x801B1A14u; f_801B0D20(c); // 801B1A10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1A14
  c->lr=c->r[0]; // 801B1A18
  c->r[1]=c->r[1]+0x00000010u; // 801B1A1C
  return; // 801B1A20
}

// fn_801B1A24
void f_801B1A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A24
  c->r[0]=c->lr; // 801B1A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1A2C
  c->lr=0x801B1A34u; f_801B0BF4(c); // 801B1A30
  c->lr=0x801B1A38u; f_801B0DE8(c); // 801B1A34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1A38
  c->lr=c->r[0]; // 801B1A3C
  c->r[1]=c->r[1]+0x00000010u; // 801B1A40
  return; // 801B1A44
}

// fn_801B1A48
void f_801B1A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A48
  c->r[0]=c->lr; // 801B1A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1A54
  c->r[31]=c->r[3]|c->r[3]; // 801B1A58
  c->lr=0x801B1A60u; f_801B0BF4(c); // 801B1A5C
  c->r[4]=c->r[31]|c->r[31]; // 801B1A60
  c->lr=0x801B1A68u; f_801B0E98(c); // 801B1A64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1A68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1A6C
  c->lr=c->r[0]; // 801B1A70
  c->r[1]=c->r[1]+0x00000010u; // 801B1A74
  return; // 801B1A78
}

// fn_801B1A7C
void f_801B1A7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1A7C
  c->r[0]=c->lr; // 801B1A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1A88
  c->r[31]=c->r[3]|c->r[3]; // 801B1A8C
  c->lr=0x801B1A94u; f_801B0BF4(c); // 801B1A90
  c->r[4]=c->r[31]|c->r[31]; // 801B1A94
  c->lr=0x801B1A9Cu; f_801B0EF0(c); // 801B1A98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1AA0
  c->lr=c->r[0]; // 801B1AA4
  c->r[1]=c->r[1]+0x00000010u; // 801B1AA8
  return; // 801B1AAC
}

// fn_801B1AB0
void f_801B1AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1AB0
  c->r[0]=c->lr; // 801B1AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1AB8
  c->lr=0x801B1AC0u; f_801B0BF4(c); // 801B1ABC
  c->lr=0x801B1AC4u; f_801B0F1C(c); // 801B1AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1AC4
  c->lr=c->r[0]; // 801B1AC8
  c->r[1]=c->r[1]+0x00000010u; // 801B1ACC
  return; // 801B1AD0
}

// fn_801B1AD4
void f_801B1AD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1AD4
  c->r[0]=c->lr; // 801B1AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1ADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1AE0
  c->r[31]=c->r[3]|c->r[3]; // 801B1AE4
  c->lr=0x801B1AECu; f_801B0BF4(c); // 801B1AE8
  c->r[4]=c->r[31]|c->r[31]; // 801B1AEC
  c->lr=0x801B1AF4u; f_801B11E8(c); // 801B1AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1AF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1AF8
  c->lr=c->r[0]; // 801B1AFC
  c->r[1]=c->r[1]+0x00000010u; // 801B1B00
  return; // 801B1B04
}

// fn_801B1B08
void f_801B1B08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B08
  c->r[0]=c->lr; // 801B1B0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1B10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1B14
  c->r[31]=c->r[3]|c->r[3]; // 801B1B18
  c->lr=0x801B1B20u; f_801B0BF4(c); // 801B1B1C
  c->r[4]=c->r[31]|c->r[31]; // 801B1B20
  c->lr=0x801B1B28u; f_801B122C(c); // 801B1B24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1B28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1B2C
  c->lr=c->r[0]; // 801B1B30
  c->r[1]=c->r[1]+0x00000010u; // 801B1B34
  return; // 801B1B38
}

// fn_801B1B3C
void f_801B1B3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B3C
  c->r[0]=c->lr; // 801B1B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1B44
  c->lr=0x801B1B4Cu; f_801B0BF4(c); // 801B1B48
  c->lr=0x801B1B50u; f_801B1254(c); // 801B1B4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1B50
  c->lr=c->r[0]; // 801B1B54
  c->r[1]=c->r[1]+0x00000010u; // 801B1B58
  return; // 801B1B5C
}

// fn_801B1B60
void f_801B1B60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B60
  c->r[0]=c->lr; // 801B1B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1B68
  c->lr=0x801B1B70u; f_801B0BF4(c); // 801B1B6C
  c->lr=0x801B1B74u; f_801B1268(c); // 801B1B70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1B74
  c->lr=c->r[0]; // 801B1B78
  c->r[1]=c->r[1]+0x00000010u; // 801B1B7C
  return; // 801B1B80
}

// fn_801B1B84
void f_801B1B84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1B84
  c->r[0]=c->lr; // 801B1B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1B90
  c->r[31]=c->r[3]|c->r[3]; // 801B1B94
  c->lr=0x801B1B9Cu; f_801B0BF4(c); // 801B1B98
  c->r[4]=c->r[31]|c->r[31]; // 801B1B9C
  c->lr=0x801B1BA4u; f_801B127C(c); // 801B1BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1BA8
  c->lr=c->r[0]; // 801B1BAC
  c->r[1]=c->r[1]+0x00000010u; // 801B1BB0
  return; // 801B1BB4
}

// fn_801B1BB8
void f_801B1BB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1BB8
  c->r[0]=c->lr; // 801B1BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1BC0
  c->lr=0x801B1BC8u; f_801B0BF4(c); // 801B1BC4
  c->lr=0x801B1BCCu; f_801B1484(c); // 801B1BC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1BCC
  c->lr=c->r[0]; // 801B1BD0
  c->r[1]=c->r[1]+0x00000010u; // 801B1BD4
  return; // 801B1BD8
}

// fn_801B1BDC
void f_801B1BDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1BDC
  c->r[0]=c->lr; // 801B1BE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1BE4
  c->lr=0x801B1BECu; f_801B0BF4(c); // 801B1BE8
  c->lr=0x801B1BF0u; f_801B150C(c); // 801B1BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1BF0
  c->lr=c->r[0]; // 801B1BF4
  c->r[1]=c->r[1]+0x00000010u; // 801B1BF8
  return; // 801B1BFC
}

// fn_801B1C00
void f_801B1C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C00
  c->r[0]=c->lr; // 801B1C04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1C08
  c->lr=0x801B1C10u; f_801B0BF4(c); // 801B1C0C
  c->lr=0x801B1C14u; f_801B15F4(c); // 801B1C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1C14
  c->lr=c->r[0]; // 801B1C18
  c->r[1]=c->r[1]+0x00000010u; // 801B1C1C
  return; // 801B1C20
}

// fn_801B1C24
void f_801B1C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C24
  c->r[0]=c->lr; // 801B1C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1C2C
  c->lr=0x801B1C34u; f_801B0BF4(c); // 801B1C30
  c->lr=0x801B1C38u; f_801B14FC(c); // 801B1C34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1C38
  c->lr=c->r[0]; // 801B1C3C
  c->r[1]=c->r[1]+0x00000010u; // 801B1C40
  return; // 801B1C44
}

// fn_801B1C48
void f_801B1C48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C48
  c->r[0]=c->lr; // 801B1C4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1C50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1C54
  c->r[31]=c->r[3]|c->r[3]; // 801B1C58
  c->lr=0x801B1C60u; f_801B0BF4(c); // 801B1C5C
  c->r[4]=c->r[31]|c->r[31]; // 801B1C60
  c->lr=0x801B1C68u; f_801B18AC(c); // 801B1C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1C68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1C6C
  c->lr=c->r[0]; // 801B1C70
  c->r[1]=c->r[1]+0x00000010u; // 801B1C74
  return; // 801B1C78
}

// fn_801B1C7C
void f_801B1C7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1C7C
  c->r[0]=c->lr; // 801B1C80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1C84
  c->lr=0x801B1C8Cu; f_801B0BF4(c); // 801B1C88
  c->lr=0x801B1C90u; f_801B18B4(c); // 801B1C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1C90
  c->lr=c->r[0]; // 801B1C94
  c->r[1]=c->r[1]+0x00000010u; // 801B1C98
  return; // 801B1C9C
}

// fn_801B1CA0
void f_801B1CA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1CA0
  c->r[0]=c->lr; // 801B1CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1CAC
  c->r[31]=c->r[3]|c->r[3]; // 801B1CB0
  c->lr=0x801B1CB8u; f_801B0BF4(c); // 801B1CB4
  c->r[4]=c->r[31]|c->r[31]; // 801B1CB8
  c->lr=0x801B1CC0u; f_801B1778(c); // 801B1CBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1CC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1CC4
  c->lr=c->r[0]; // 801B1CC8
  c->r[1]=c->r[1]+0x00000010u; // 801B1CCC
  return; // 801B1CD0
}

// fn_801B1CD4
void f_801B1CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1CD4
  c->r[0]=c->lr; // 801B1CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1CE0
  c->r[31]=c->r[3]|c->r[3]; // 801B1CE4
  c->lr=0x801B1CECu; f_801B0BF4(c); // 801B1CE8
  c->r[4]=c->r[31]|c->r[31]; // 801B1CEC
  c->lr=0x801B1CF4u; f_801B17C4(c); // 801B1CF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1CF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1CF8
  c->lr=c->r[0]; // 801B1CFC
  c->r[1]=c->r[1]+0x00000010u; // 801B1D00
  return; // 801B1D04
}

// fn_801B1D08
void f_801B1D08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1D08
  c->r[0]=c->lr; // 801B1D0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1D10
  c->lr=0x801B1D18u; f_801B0BF4(c); // 801B1D14
  c->lr=0x801B1D1Cu; f_801B18F0(c); // 801B1D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1D1C
  c->lr=c->r[0]; // 801B1D20
  c->r[1]=c->r[1]+0x00000010u; // 801B1D24
  return; // 801B1D28
}

// fn_801B1D2C
void f_801B1D2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1D2C
  c->r[0]=c->lr; // 801B1D30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1D34
  c->lr=0x801B1D3Cu; f_801B0BF4(c); // 801B1D38
  c->lr=0x801B1D40u; f_801B1990(c); // 801B1D3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1D40
  c->lr=c->r[0]; // 801B1D44
  c->r[1]=c->r[1]+0x00000010u; // 801B1D48
  return; // 801B1D4C
}

// fn_801B1D50
void f_801B1D50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1D50
  c->r[0]=c->lr; // 801B1D54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1D58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1D5C
  c->r[31]=c->r[3]|c->r[3]; // 801B1D60
  c->r[4]=0u+0x00000000u; // 801B1D64
  c->r[5]=0u+0x00000004u; // 801B1D68
  c->lr=0x801B1D70u; f_800060B8(c); // 801B1D6C
  c->r[0]=0u+0x00000000u; // 801B1D70
  W32(c->r[31]+0x00000018u,c->r[0]); // 801B1D74
  c->r[3]=c->r[31]|c->r[31]; // 801B1D78
  c->lr=0x801B1D80u; f_801B3AAC(c); // 801B1D7C
  c->r[3]=c->r[31]|c->r[31]; // 801B1D80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1D84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1D88
  c->lr=c->r[0]; // 801B1D8C
  c->r[1]=c->r[1]+0x00000010u; // 801B1D90
  return; // 801B1D94
}

// fn_801B1D98
void f_801B1D98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1D98
  c->r[0]=c->lr; // 801B1D9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1DA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1DA4
  c->r[31]=c->r[3]|c->r[3]; // 801B1DA8
  cmps(c,0,(int32_t)c->r[3],0); // 801B1DAC
  if (crb(c,2)) { goto L_801B1DC4; } // 801B1DB0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801B1DB4
  cmps(c,0,(int32_t)c->r[0],0); // 801B1DB8
  if (!crb(c,1)) { goto L_801B1DC4; } // 801B1DBC
  c->lr=0x801B1DC4u; f_80047B20(c); // 801B1DC0
L_801B1DC4:;
  c->r[3]=c->r[31]|c->r[31]; // 801B1DC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1DC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1DCC
  c->lr=c->r[0]; // 801B1DD0
  c->r[1]=c->r[1]+0x00000010u; // 801B1DD4
  return; // 801B1DD8
}

// fn_801B1DDC
void f_801B1DDC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B1DDC
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1DE0
  c->r[6]=R32(c->r[3]+c->r[7]); // 801B1DE4
  c->r[5]=0u+0x00000001u; // 801B1DE8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B1DEC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801B1DF0
  c->r[0]=c->r[6]|c->r[0]; // 801B1DF4
  W32(c->r[3]+c->r[7],c->r[0]); // 801B1DF8
  return; // 801B1DFC
}

// fn_801B1E00
void f_801B1E00(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801B1E00
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B1E04
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801B1E08
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B1E0C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1E10
  c->r[0]=R32(c->r[3]+c->r[0]); // 801B1E14
  c->r[3]=c->r[5]&c->r[0]; // 801B1E18
  c->r[0]=0u-c->r[3]; // 801B1E1C
  c->r[0]=c->r[0]|c->r[3]; // 801B1E20
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B1E24
  return; // 801B1E28
}

// fn_801B1E2C
void f_801B1E2C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801B1E2C
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801B1E30
  c->r[6]=R32(c->r[3]+c->r[7]); // 801B1E34
  c->r[5]=0u+0x00000001u; // 801B1E38
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B1E3C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801B1E40
  c->r[0]=~(c->r[0]|c->r[0]); // 801B1E44
  c->r[0]=c->r[6]&c->r[0]; // 801B1E48
  W32(c->r[3]+c->r[7],c->r[0]); // 801B1E4C
  return; // 801B1E50
}

// fn_801B1E54
void f_801B1E54(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000018u); // 801B1E54
  c->r[5]=0u+0x00000001u; // 801B1E58
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B1E5C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801B1E60
  c->r[0]=c->r[6]|c->r[0]; // 801B1E64
  W32(c->r[3]+0x00000018u,c->r[0]); // 801B1E68
  return; // 801B1E6C
}

// fn_801B1E70
void f_801B1E70(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000018u); // 801B1E70
  c->r[3]=0u+0x00000001u; // 801B1E74
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B1E78
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801B1E7C
  c->r[3]=c->r[5]&c->r[0]; // 801B1E80
  c->r[0]=0u-c->r[3]; // 801B1E84
  c->r[0]=c->r[0]|c->r[3]; // 801B1E88
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801B1E8C
  return; // 801B1E90
}

// fn_801B1E94
void f_801B1E94(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000018u); // 801B1E94
  c->r[5]=0u+0x00000001u; // 801B1E98
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801B1E9C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801B1EA0
  c->r[0]=~(c->r[0]|c->r[0]); // 801B1EA4
  c->r[0]=c->r[6]&c->r[0]; // 801B1EA8
  W32(c->r[3]+0x00000018u,c->r[0]); // 801B1EAC
  return; // 801B1EB0
}

// fn_801B1EB4
void f_801B1EB4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801B1EB4
  f_801B1DDC(c); return; // 801B1EB8
}

// fn_801B1EBC
void f_801B1EBC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801B1EBC
  f_801B1E2C(c); return; // 801B1EC0
}

// fn_801B1EC4
void f_801B1EC4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801B1EC4
  f_801B1E00(c); return; // 801B1EC8
}

// fn_801B1ECC
void f_801B1ECC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801B1ECC
  f_801B1DDC(c); return; // 801B1ED0
}

// fn_801B1ED4
void f_801B1ED4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801B1ED4
  f_801B1E2C(c); return; // 801B1ED8
}

// fn_801B1EDC
void f_801B1EDC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801B1EDC
  f_801B1E00(c); return; // 801B1EE0
}

// fn_801B1EE4
void f_801B1EE4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801B1EE4
  c->r[5]=sraw(c,c->r[0],31); // 801B1EE8
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 801B1EEC
  c->r[0]=addc(c,~c->r[4],c->r[0],1); // 801B1EF0
  c->r[3]=addc(c,c->r[5],c->r[3],c->xer_ca); // 801B1EF4
  return; // 801B1EF8
}

// fn_801B1EFC
void f_801B1EFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1EFC
  c->r[0]=c->lr; // 801B1F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1F04
  c->lr=0x801B1F0Cu; f_8006592C(c); // 801B1F08
  c->r[4]=0u+0x00000006u; // 801B1F0C
  c->r[5]=0u+0x00000000u; // 801B1F10
  c->r[6]=0u+0xFFFFFFFFu; // 801B1F14
  c->r[7]=0u+0xFFFFFFFFu; // 801B1F18
  c->lr=0x801B1F20u; f_80048F20(c); // 801B1F1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1F20
  c->lr=c->r[0]; // 801B1F24
  c->r[1]=c->r[1]+0x00000010u; // 801B1F28
  return; // 801B1F2C
}

// fn_801B1F30
void f_801B1F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1F30
  c->r[0]=c->lr; // 801B1F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B1F3C
  c->r[31]=c->r[3]|c->r[3]; // 801B1F40
  c->lr=0x801B1F48u; f_801B1EE4(c); // 801B1F44
  cmps(c,0,(int32_t)c->r[3],0); // 801B1F48
  if (!crb(c,2)) { goto L_801B1F58; } // 801B1F4C
  c->r[3]=c->r[31]|c->r[31]; // 801B1F50
  c->lr=0x801B1F58u; f_801B1EFC(c); // 801B1F54
L_801B1F58:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B1F58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1F5C
  c->lr=c->r[0]; // 801B1F60
  c->r[1]=c->r[1]+0x00000010u; // 801B1F64
  return; // 801B1F68
}

// fn_801B1F6C
void f_801B1F6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1F6C
  c->r[0]=c->lr; // 801B1F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1F74
  c->lr=0x801B1F7Cu; f_8006592C(c); // 801B1F78
  c->r[4]=0u+0x00000000u; // 801B1F7C
  c->r[5]=0u+0x00000000u; // 801B1F80
  c->r[6]=0u+0xFFFFFFFFu; // 801B1F84
  c->r[7]=0u+0xFFFFFFFFu; // 801B1F88
  c->lr=0x801B1F90u; f_80048F20(c); // 801B1F8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1F90
  c->lr=c->r[0]; // 801B1F94
  c->r[1]=c->r[1]+0x00000010u; // 801B1F98
  return; // 801B1F9C
}

// fn_801B1FA0
void f_801B1FA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1FA0
  c->r[0]=c->lr; // 801B1FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1FA8
  c->lr=0x801B1FB0u; f_8006592C(c); // 801B1FAC
  c->r[4]=0u+0x00000001u; // 801B1FB0
  c->r[5]=0u+0x00000000u; // 801B1FB4
  c->r[6]=0u+0xFFFFFFFFu; // 801B1FB8
  c->r[7]=0u+0xFFFFFFFFu; // 801B1FBC
  c->lr=0x801B1FC4u; f_80048F20(c); // 801B1FC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1FC4
  c->lr=c->r[0]; // 801B1FC8
  c->r[1]=c->r[1]+0x00000010u; // 801B1FCC
  return; // 801B1FD0
}

// fn_801B1FD4
void f_801B1FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B1FD4
  c->r[0]=c->lr; // 801B1FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B1FDC
  c->lr=0x801B1FE4u; f_8006592C(c); // 801B1FE0
  c->r[4]=0u+0x00000004u; // 801B1FE4
  c->r[5]=0u+0x00000000u; // 801B1FE8
  c->r[6]=0u+0xFFFFFFFFu; // 801B1FEC
  c->r[7]=0u+0xFFFFFFFFu; // 801B1FF0
  c->lr=0x801B1FF8u; f_80048F20(c); // 801B1FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B1FF8
  c->lr=c->r[0]; // 801B1FFC
  c->r[1]=c->r[1]+0x00000010u; // 801B2000
  return; // 801B2004
}

// fn_801B2008
void f_801B2008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2008
  c->r[0]=c->lr; // 801B200C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2010
  c->lr=0x801B2018u; f_8006592C(c); // 801B2014
  c->r[4]=0u+0x00000007u; // 801B2018
  c->r[5]=0u+0x00000000u; // 801B201C
  c->r[6]=0u+0xFFFFFFFFu; // 801B2020
  c->r[7]=0u+0xFFFFFFFFu; // 801B2024
  c->lr=0x801B202Cu; f_80048F20(c); // 801B2028
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B202C
  c->lr=c->r[0]; // 801B2030
  c->r[1]=c->r[1]+0x00000010u; // 801B2034
  return; // 801B2038
}

// fn_801B203C
void f_801B203C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B203C
  c->r[0]=c->lr; // 801B2040
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2048
  c->lr=0x801B2050u; f_8011B03C(c); // 801B204C
  c->r[31]=c->r[3]|c->r[3]; // 801B2050
  c->lr=0x801B2058u; f_8006592C(c); // 801B2054
  c->r[4]=0u+0x00000009u; // 801B2058
  c->r[5]=0u+0x00000000u; // 801B205C
  c->r[6]=c->r[31]|c->r[31]; // 801B2060
  c->r[7]=0u+0xFFFFFFFFu; // 801B2064
  c->lr=0x801B206Cu; f_80048F20(c); // 801B2068
  c->lr=0x801B2070u; f_8006592C(c); // 801B206C
  c->r[4]=0u+0x00000009u; // 801B2070
  c->r[5]=0u+0x00000000u; // 801B2074
  c->r[6]=0u+0xFFFFFFFFu; // 801B2078
  c->r[7]=0u+0xFFFFFFFFu; // 801B207C
  c->lr=0x801B2084u; f_80048F20(c); // 801B2080
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2084
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2088
  c->lr=c->r[0]; // 801B208C
  c->r[1]=c->r[1]+0x00000010u; // 801B2090
  return; // 801B2094
}

// fn_801B2098
void f_801B2098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2098
  c->r[0]=c->lr; // 801B209C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B20A0
  c->lr=0x801B20A8u; f_8006592C(c); // 801B20A4
  c->r[4]=0u+0x0000011Au; // 801B20A8
  c->r[5]=0u+0x00000000u; // 801B20AC
  c->r[6]=0u+0xFFFFFFFFu; // 801B20B0
  c->r[7]=0u+0xFFFFFFFFu; // 801B20B4
  c->lr=0x801B20BCu; f_80048F20(c); // 801B20B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B20BC
  c->lr=c->r[0]; // 801B20C0
  c->r[1]=c->r[1]+0x00000010u; // 801B20C4
  return; // 801B20C8
}

// fn_801B20CC
void f_801B20CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B20CC
  c->r[0]=c->lr; // 801B20D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B20D4
  c->lr=0x801B20DCu; f_8006592C(c); // 801B20D8
  c->r[4]=0u+0x0000011Bu; // 801B20DC
  c->r[5]=0u+0x00000000u; // 801B20E0
  c->r[6]=0u+0xFFFFFFFFu; // 801B20E4
  c->r[7]=0u+0xFFFFFFFFu; // 801B20E8
  c->lr=0x801B20F0u; f_80048F20(c); // 801B20EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B20F0
  c->lr=c->r[0]; // 801B20F4
  c->r[1]=c->r[1]+0x00000010u; // 801B20F8
  return; // 801B20FC
}

// fn_801B2100
void f_801B2100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2100
  c->r[0]=c->lr; // 801B2104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2108
  c->lr=0x801B2110u; f_8006592C(c); // 801B210C
  c->r[4]=0u+0x0000011Cu; // 801B2110
  c->r[5]=0u+0x00000000u; // 801B2114
  c->r[6]=0u+0xFFFFFFFFu; // 801B2118
  c->r[7]=0u+0xFFFFFFFFu; // 801B211C
  c->lr=0x801B2124u; f_80048F20(c); // 801B2120
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2124
  c->lr=c->r[0]; // 801B2128
  c->r[1]=c->r[1]+0x00000010u; // 801B212C
  return; // 801B2130
}

// fn_801B2134
void f_801B2134(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2134
  c->r[0]=c->lr; // 801B2138
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B213C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2140
  c->r[31]=c->r[3]|c->r[3]; // 801B2144
  c->lr=0x801B214Cu; f_801B1EFC(c); // 801B2148
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B214C
  c->r[3]=c->r[3]+0x00000001u; // 801B2150
  W32(c->r[31]+0x00000010u,c->r[3]); // 801B2154
  c->r[4]=0u+0x00000000u; // 801B2158
  c->r[5]=R32(c->r[31]+0x00000014u); // 801B215C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2160
  c->lr=0x801B2168u; f_800EEE08(c); // 801B2164
  W32(c->r[31]+0x00000010u,c->r[3]); // 801B2168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B216C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2170
  c->lr=c->r[0]; // 801B2174
  c->r[1]=c->r[1]+0x00000010u; // 801B2178
  return; // 801B217C
}

// fn_801B2180
void f_801B2180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2180
  c->r[0]=c->lr; // 801B2184
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B218C
  c->r[31]=c->r[3]|c->r[3]; // 801B2190
  c->lr=0x801B2198u; f_801B1EFC(c); // 801B2194
  c->r[3]=R32(c->r[31]+0x00000010u); // 801B2198
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B219C
  W32(c->r[31]+0x00000010u,c->r[3]); // 801B21A0
  c->r[4]=0u+0x00000000u; // 801B21A4
  c->r[5]=R32(c->r[31]+0x00000014u); // 801B21A8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B21AC
  c->lr=0x801B21B4u; f_800EEE08(c); // 801B21B0
  W32(c->r[31]+0x00000010u,c->r[3]); // 801B21B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B21B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B21BC
  c->lr=c->r[0]; // 801B21C0
  c->r[1]=c->r[1]+0x00000010u; // 801B21C4
  return; // 801B21C8
}

// fn_801B21CC
void f_801B21CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 801B21CC
  return; // 801B21D0
}

// fn_801B21D4
void f_801B21D4(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 801B21D4
  return; // 801B21D8
}

// fn_801B21DC
void f_801B21DC(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B21DC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801B21E0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801B21E4
  return; // 801B21E8
}

// fn_801B21EC
void f_801B21EC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000028u); // 801B21EC
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801B21F0
  c->r[6]=R32(c->r[3]+0x0000002Cu); // 801B21F4
  c->r[0]=c->r[5]+0x00000001u; // 801B21F8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801B21FC
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[0]); // 801B2200
  cmps(c,0,(int32_t)c->r[0],0); // 801B2204
  if (!crb(c,1)) { goto L_801B2214; } // 801B2208
  c->r[3]=c->r[4]|c->r[4]; // 801B220C
  return; // 801B2210
L_801B2214:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 801B2214
  c->r[0]=divw((int32_t)c->r[6],(int32_t)c->r[3]); // 801B2218
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801B221C
  c->r[3]=c->r[6]-c->r[0]; // 801B2220
  return; // 801B2224
}

// fn_801B2228
void f_801B2228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2228
  c->r[0]=c->lr; // 801B222C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2234
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2238
  c->r[30]=c->r[3]|c->r[3]; // 801B223C
  c->lr=0x801B2244u; f_801B21EC(c); // 801B2240
  c->r[31]=c->r[3]|c->r[3]; // 801B2244
  c->r[3]=c->r[30]|c->r[30]; // 801B2248
  c->r[4]=c->r[31]|c->r[31]; // 801B224C
  c->lr=0x801B2254u; f_801B1F30(c); // 801B2250
  c->r[3]=R32(c->r[30]+0x00000024u); // 801B2254
  c->r[3]=c->r[3]+0x00000001u; // 801B2258
  W32(c->r[30]+0x00000024u,c->r[3]); // 801B225C
  c->r[4]=0u+0x00000000u; // 801B2260
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B2264
  c->lr=0x801B226Cu; f_800EEE08(c); // 801B2268
  W32(c->r[30]+0x00000024u,c->r[3]); // 801B226C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2270
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B2274
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2278
  c->lr=c->r[0]; // 801B227C
  c->r[1]=c->r[1]+0x00000010u; // 801B2280
  return; // 801B2284
}

// fn_801B2288
void f_801B2288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2288
  c->r[0]=c->lr; // 801B228C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2294
  W32(c->r[1]+0x00000008u,c->r[30]); // 801B2298
  c->r[30]=c->r[3]|c->r[3]; // 801B229C
  c->lr=0x801B22A4u; f_801B21EC(c); // 801B22A0
  c->r[31]=c->r[3]|c->r[3]; // 801B22A4
  c->r[3]=c->r[30]|c->r[30]; // 801B22A8
  c->r[4]=c->r[31]|c->r[31]; // 801B22AC
  c->lr=0x801B22B4u; f_801B1F30(c); // 801B22B0
  c->r[3]=R32(c->r[30]+0x00000024u); // 801B22B4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B22B8
  W32(c->r[30]+0x00000024u,c->r[3]); // 801B22BC
  c->r[4]=0u+0x00000000u; // 801B22C0
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 801B22C4
  c->lr=0x801B22CCu; f_800EEE08(c); // 801B22C8
  W32(c->r[30]+0x00000024u,c->r[3]); // 801B22CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B22D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801B22D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B22D8
  c->lr=c->r[0]; // 801B22DC
  c->r[1]=c->r[1]+0x00000010u; // 801B22E0
  return; // 801B22E4
}

// fn_801B22E8
void f_801B22E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B22E8
  c->r[0]=c->lr; // 801B22EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B22F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B22F4
  c->r[31]=c->r[3]|c->r[3]; // 801B22F8
  c->lr=0x801B2300u; f_801B21EC(c); // 801B22FC
  c->r[0]=R32(c->r[31]+0x00000024u); // 801B2300
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801B2304
  if (crb(c,0)) { goto L_801B2314; } // 801B2308
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801B230C
  W32(c->r[31]+0x00000024u,c->r[0]); // 801B2310
L_801B2314:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2314
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2318
  c->lr=c->r[0]; // 801B231C
  c->r[1]=c->r[1]+0x00000010u; // 801B2320
  return; // 801B2324
}

// fn_801B2328
void f_801B2328(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 801B2328
  return; // 801B232C
}

// fn_801B2330
void f_801B2330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2330
  c->r[0]=c->lr; // 801B2334
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B233C
  c->r[31]=c->r[3]|c->r[3]; // 801B2340
  c->r[4]=R32(c->r[3]+0x00000020u); // 801B2344
  c->lr=0x801B234Cu; f_801B1F30(c); // 801B2348
  c->r[3]=R32(c->r[31]+0x00000028u); // 801B234C
  c->r[3]=c->r[3]+0x00000001u; // 801B2350
  W32(c->r[31]+0x00000028u,c->r[3]); // 801B2354
  c->r[4]=0u+0x00000000u; // 801B2358
  c->r[5]=R32(c->r[31]+0x00000020u); // 801B235C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2360
  c->lr=0x801B2368u; f_800EEE08(c); // 801B2364
  W32(c->r[31]+0x00000028u,c->r[3]); // 801B2368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B236C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2370
  c->lr=c->r[0]; // 801B2374
  c->r[1]=c->r[1]+0x00000010u; // 801B2378
  return; // 801B237C
}

// fn_801B2380
void f_801B2380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B2380
  c->r[0]=c->lr; // 801B2384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B238C
  c->r[31]=c->r[3]|c->r[3]; // 801B2390
  c->r[4]=R32(c->r[3]+0x00000020u); // 801B2394
  c->lr=0x801B239Cu; f_801B1F30(c); // 801B2398
  c->r[3]=R32(c->r[31]+0x00000028u); // 801B239C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B23A0
  W32(c->r[31]+0x00000028u,c->r[3]); // 801B23A4
  c->r[4]=0u+0x00000000u; // 801B23A8
  c->r[5]=R32(c->r[31]+0x00000020u); // 801B23AC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B23B0
  c->lr=0x801B23B8u; f_800EEE08(c); // 801B23B4
  W32(c->r[31]+0x00000028u,c->r[3]); // 801B23B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B23BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B23C0
  c->lr=c->r[0]; // 801B23C4
  c->r[1]=c->r[1]+0x00000010u; // 801B23C8
  return; // 801B23CC
}

// fn_801B23D0
void f_801B23D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000028u); // 801B23D0
  return; // 801B23D4
}

// fn_801B23D8
void f_801B23D8(Ctx* __restrict c) {
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801B23D8
  return; // 801B23DC
}

// fn_801B23E0
void f_801B23E0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000020u,c->r[4]); // 801B23E0
  return; // 801B23E4
}

// fn_801B23E8
void f_801B23E8(Ctx* __restrict c) {
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801B23E8
  return; // 801B23EC
}

// fn_801B23F0
void f_801B23F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B23F0
  c->r[0]=c->lr; // 801B23F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B23F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B23FC
  c->r[31]=c->r[3]|c->r[3]; // 801B2400
  c->lr=0x801B2408u; f_801B1EFC(c); // 801B2404
  c->r[3]=R32(c->r[31]+0x00000030u); // 801B2408
  c->r[3]=c->r[3]+0x00000001u; // 801B240C
  W32(c->r[31]+0x00000030u,c->r[3]); // 801B2410
  c->r[4]=0u+0x00000000u; // 801B2414
  c->r[5]=R32(c->r[31]+0x00000034u); // 801B2418
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B241C
  c->lr=0x801B2424u; f_800EEE08(c); // 801B2420
  W32(c->r[31]+0x00000030u,c->r[3]); // 801B2424
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2428
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B242C
  c->lr=c->r[0]; // 801B2430
  c->r[1]=c->r[1]+0x00000010u; // 801B2434
  return; // 801B2438
}

// fn_801B243C
void f_801B243C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B243C
  c->r[0]=c->lr; // 801B2440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B2444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B2448
  c->r[31]=c->r[3]|c->r[3]; // 801B244C
  c->lr=0x801B2454u; f_801B1EFC(c); // 801B2450
  c->r[3]=R32(c->r[31]+0x00000030u); // 801B2454
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B2458
  W32(c->r[31]+0x00000030u,c->r[3]); // 801B245C
  c->r[4]=0u+0x00000000u; // 801B2460
  c->r[5]=R32(c->r[31]+0x00000034u); // 801B2464
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B2468
  c->lr=0x801B2470u; f_800EEE08(c); // 801B246C
  W32(c->r[31]+0x00000030u,c->r[3]); // 801B2470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2474
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B2478
  c->lr=c->r[0]; // 801B247C
  c->r[1]=c->r[1]+0x00000010u; // 801B2480
  return; // 801B2484
}

// fn_801B2488
void f_801B2488(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B2488
  W32(c->r[3]+0x00000030u,c->r[0]); // 801B248C
  return; // 801B2490
}

// fn_801B2494
void f_801B2494(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 801B2494
  return; // 801B2498
}

// fn_801B249C
void f_801B249C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000034u,c->r[4]); // 801B249C
  return; // 801B24A0
}

// fn_801B24A4
void f_801B24A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B24A4
  c->r[0]=c->lr; // 801B24A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B24AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B24B0
  c->r[31]=c->r[3]|c->r[3]; // 801B24B4
  c->lr=0x801B24BCu; f_801B1EFC(c); // 801B24B8
  c->r[3]=R32(c->r[31]+0x00000038u); // 801B24BC
  c->r[3]=c->r[3]+0x00000001u; // 801B24C0
  W32(c->r[31]+0x00000038u,c->r[3]); // 801B24C4
  c->r[4]=0u+0x00000000u; // 801B24C8
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 801B24CC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B24D0
  c->lr=0x801B24D8u; f_800EEE08(c); // 801B24D4
  W32(c->r[31]+0x00000038u,c->r[3]); // 801B24D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B24DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B24E0
  c->lr=c->r[0]; // 801B24E4
  c->r[1]=c->r[1]+0x00000010u; // 801B24E8
  return; // 801B24EC
}

// fn_801B24F0
void f_801B24F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801B24F0
  c->r[0]=c->lr; // 801B24F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801B24F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801B24FC
  c->r[31]=c->r[3]|c->r[3]; // 801B2500
  c->lr=0x801B2508u; f_801B1EFC(c); // 801B2504
  c->r[3]=R32(c->r[31]+0x00000038u); // 801B2508
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801B250C
  W32(c->r[31]+0x00000038u,c->r[3]); // 801B2510
  c->r[4]=0u+0x00000000u; // 801B2514
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 801B2518
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801B251C
  c->lr=0x801B2524u; f_800EEE08(c); // 801B2520
  W32(c->r[31]+0x00000038u,c->r[3]); // 801B2524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801B2528
  c->r[0]=R32(c->r[1]+0x00000014u); // 801B252C
  c->lr=c->r[0]; // 801B2530
  c->r[1]=c->r[1]+0x00000010u; // 801B2534
  return; // 801B2538
}

// fn_801B253C
void f_801B253C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801B253C
  W32(c->r[3]+0x00000038u,c->r[0]); // 801B2540
  return; // 801B2544
}

