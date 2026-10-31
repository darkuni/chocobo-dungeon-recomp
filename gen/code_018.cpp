#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800EA0CC
void f_800EA0CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA0CC
  c->r[0]=c->lr; // 800EA0D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA0D4
  c->lr=0x800EA0DCu; f_8006E268(c); // 800EA0D8
  c->r[4]=0u+0x00000000u; // 800EA0DC
  c->lr=0x800EA0E4u; f_80073A50(c); // 800EA0E0
  c->r[3]=0u+0x00000000u; // 800EA0E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA0E8
  c->lr=c->r[0]; // 800EA0EC
  c->r[1]=c->r[1]+0x00000010u; // 800EA0F0
  return; // 800EA0F4
}

// fn_800EA0F8
void f_800EA0F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA0F8
  c->r[0]=c->lr; // 800EA0FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA104
  c->r[31]=c->r[3]|c->r[3]; // 800EA108
  c->lr=0x800EA110u; f_800A23BC(c); // 800EA10C
  c->lr=0x800EA114u; f_800BB700(c); // 800EA110
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EA114
  c->lr=0x800EA11Cu; f_800BBEA4(c); // 800EA118
  c->r[31]=c->r[3]|c->r[3]; // 800EA11C
  c->lr=0x800EA124u; f_800A23BC(c); // 800EA120
  c->lr=0x800EA128u; f_800BB700(c); // 800EA124
  c->r[4]=c->r[31]|c->r[31]; // 800EA128
  c->lr=0x800EA130u; f_800BBE64(c); // 800EA12C
  c->r[4]=0u+0x00000001u; // 800EA130
  c->lr=0x800EA138u; f_800D2CA0(c); // 800EA134
  c->r[3]=0u+0x00000000u; // 800EA138
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA13C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA140
  c->lr=c->r[0]; // 800EA144
  c->r[1]=c->r[1]+0x00000010u; // 800EA148
  return; // 800EA14C
}

// fn_800EA150
void f_800EA150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA150
  c->r[0]=c->lr; // 800EA154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA15C
  c->r[31]=c->r[3]|c->r[3]; // 800EA160
  c->lr=0x800EA168u; f_800A23BC(c); // 800EA164
  c->lr=0x800EA16Cu; f_800BB700(c); // 800EA168
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EA16C
  c->lr=0x800EA174u; f_800BBEA4(c); // 800EA170
  c->r[31]=c->r[3]|c->r[3]; // 800EA174
  c->lr=0x800EA17Cu; f_800A23BC(c); // 800EA178
  c->lr=0x800EA180u; f_800BB700(c); // 800EA17C
  c->r[4]=c->r[31]|c->r[31]; // 800EA180
  c->lr=0x800EA188u; f_800BBE64(c); // 800EA184
  c->r[4]=0u+0x00000000u; // 800EA188
  c->lr=0x800EA190u; f_800D2CA0(c); // 800EA18C
  c->r[3]=0u+0x00000000u; // 800EA190
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA194
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA198
  c->lr=c->r[0]; // 800EA19C
  c->r[1]=c->r[1]+0x00000010u; // 800EA1A0
  return; // 800EA1A4
}

// fn_800EA1A8
void f_800EA1A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA1A8
  c->r[0]=c->lr; // 800EA1AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA1B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA1B4
  c->r[31]=c->r[3]|c->r[3]; // 800EA1B8
  c->lr=0x800EA1C0u; f_800A23BC(c); // 800EA1BC
  c->lr=0x800EA1C4u; f_800BB700(c); // 800EA1C0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EA1C4
  c->lr=0x800EA1CCu; f_800BBEA4(c); // 800EA1C8
  c->r[31]=c->r[3]|c->r[3]; // 800EA1CC
  c->lr=0x800EA1D4u; f_800A23BC(c); // 800EA1D0
  c->lr=0x800EA1D8u; f_800BB700(c); // 800EA1D4
  c->r[4]=c->r[31]|c->r[31]; // 800EA1D8
  c->lr=0x800EA1E0u; f_800BBE64(c); // 800EA1DC
  c->r[4]=0u+0x00000001u; // 800EA1E0
  c->lr=0x800EA1E8u; f_800D2CF0(c); // 800EA1E4
  c->r[3]=0u+0x00000000u; // 800EA1E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA1EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA1F0
  c->lr=c->r[0]; // 800EA1F4
  c->r[1]=c->r[1]+0x00000010u; // 800EA1F8
  return; // 800EA1FC
}

// fn_800EA200
void f_800EA200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA200
  c->r[0]=c->lr; // 800EA204
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA20C
  c->r[31]=c->r[3]|c->r[3]; // 800EA210
  c->lr=0x800EA218u; f_800A23BC(c); // 800EA214
  c->lr=0x800EA21Cu; f_800BB700(c); // 800EA218
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EA21C
  c->lr=0x800EA224u; f_800BBEA4(c); // 800EA220
  c->r[31]=c->r[3]|c->r[3]; // 800EA224
  c->lr=0x800EA22Cu; f_800A23BC(c); // 800EA228
  c->lr=0x800EA230u; f_800BB700(c); // 800EA22C
  c->r[4]=c->r[31]|c->r[31]; // 800EA230
  c->lr=0x800EA238u; f_800BBE64(c); // 800EA234
  c->r[4]=0u+0x00000000u; // 800EA238
  c->lr=0x800EA240u; f_800D2CF0(c); // 800EA23C
  c->r[3]=0u+0x00000000u; // 800EA240
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA244
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA248
  c->lr=c->r[0]; // 800EA24C
  c->r[1]=c->r[1]+0x00000010u; // 800EA250
  return; // 800EA254
}

// fn_800EA258
void f_800EA258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA258
  c->r[0]=c->lr; // 800EA25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA260
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA264
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA268
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA26C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA270
  c->lr=0x800EA278u; f_800B9F04(c); // 800EA274
  c->r[3]=0u+0x00000000u; // 800EA278
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA27C
  c->lr=c->r[0]; // 800EA280
  c->r[1]=c->r[1]+0x00000010u; // 800EA284
  return; // 800EA288
}

// fn_800EA28C
void f_800EA28C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA28C
  c->r[0]=c->lr; // 800EA290
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA294
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA298
  c->lr=0x800EA2A0u; f_800BA01C(c); // 800EA29C
  c->r[3]=0u+0x00000000u; // 800EA2A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA2A4
  c->lr=c->r[0]; // 800EA2A8
  c->r[1]=c->r[1]+0x00000010u; // 800EA2AC
  return; // 800EA2B0
}

// fn_800EA2B4
void f_800EA2B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA2B4
  c->r[0]=c->lr; // 800EA2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA2BC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA2C0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA2C4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA2C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA2CC
  c->lr=0x800EA2D4u; f_800B9F60(c); // 800EA2D0
  c->r[3]=0u+0x00000000u; // 800EA2D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA2D8
  c->lr=c->r[0]; // 800EA2DC
  c->r[1]=c->r[1]+0x00000010u; // 800EA2E0
  return; // 800EA2E4
}

// fn_800EA2E8
void f_800EA2E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA2E8
  c->r[0]=c->lr; // 800EA2EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA2F0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA2F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA2F8
  c->lr=0x800EA300u; f_800B9FBC(c); // 800EA2FC
  c->r[3]=0u+0x00000000u; // 800EA300
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA304
  c->lr=c->r[0]; // 800EA308
  c->r[1]=c->r[1]+0x00000010u; // 800EA30C
  return; // 800EA310
}

// fn_800EA314
void f_800EA314(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA314
  c->r[0]=c->lr; // 800EA318
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA31C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA320
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA324
  c->r[30]=c->r[3]|c->r[3]; // 800EA328
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EA32C
  c->lr=0x800EA334u; f_800A23BC(c); // 800EA330
  c->lr=0x800EA338u; f_800BB700(c); // 800EA334
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EA338
  c->lr=0x800EA340u; f_800BBEA4(c); // 800EA33C
  c->r[30]=c->r[3]|c->r[3]; // 800EA340
  c->lr=0x800EA348u; f_800A23BC(c); // 800EA344
  c->lr=0x800EA34Cu; f_800BB700(c); // 800EA348
  c->r[4]=c->r[30]|c->r[30]; // 800EA34C
  c->lr=0x800EA354u; f_800BBE64(c); // 800EA350
  c->r[4]=c->r[31]|c->r[31]; // 800EA354
  c->lr=0x800EA35Cu; f_800ED3B0(c); // 800EA358
  c->r[3]=0u+0x00000000u; // 800EA35C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA360
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA364
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA368
  c->lr=c->r[0]; // 800EA36C
  c->r[1]=c->r[1]+0x00000010u; // 800EA370
  return; // 800EA374
}

// fn_800EA378
void f_800EA378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA378
  c->r[0]=c->lr; // 800EA37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA380
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA384
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA388
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA38C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA390
  c->lr=0x800EA398u; f_800BA06C(c); // 800EA394
  c->r[3]=0u+0x00000000u; // 800EA398
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA39C
  c->lr=c->r[0]; // 800EA3A0
  c->r[1]=c->r[1]+0x00000010u; // 800EA3A4
  return; // 800EA3A8
}

// fn_800EA3AC
void f_800EA3AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA3AC
  c->r[0]=c->lr; // 800EA3B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA3B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA3B8
  c->lr=0x800EA3C0u; f_800BA184(c); // 800EA3BC
  c->r[3]=0u+0x00000000u; // 800EA3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA3C4
  c->lr=c->r[0]; // 800EA3C8
  c->r[1]=c->r[1]+0x00000010u; // 800EA3CC
  return; // 800EA3D0
}

// fn_800EA3D4
void f_800EA3D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA3D4
  c->r[0]=c->lr; // 800EA3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA3DC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA3E0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA3E4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA3E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA3EC
  c->lr=0x800EA3F4u; f_800BA0C8(c); // 800EA3F0
  c->r[3]=0u+0x00000000u; // 800EA3F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA3F8
  c->lr=c->r[0]; // 800EA3FC
  c->r[1]=c->r[1]+0x00000010u; // 800EA400
  return; // 800EA404
}

// fn_800EA408
void f_800EA408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA408
  c->r[0]=c->lr; // 800EA40C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA410
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA414
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA418
  c->lr=0x800EA420u; f_800BA124(c); // 800EA41C
  c->r[3]=0u+0x00000000u; // 800EA420
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA424
  c->lr=c->r[0]; // 800EA428
  c->r[1]=c->r[1]+0x00000010u; // 800EA42C
  return; // 800EA430
}

// fn_800EA434
void f_800EA434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA434
  c->r[0]=c->lr; // 800EA438
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA43C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA440
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA444
  c->r[30]=c->r[3]|c->r[3]; // 800EA448
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EA44C
  c->lr=0x800EA454u; f_800A23BC(c); // 800EA450
  c->lr=0x800EA458u; f_800BB700(c); // 800EA454
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EA458
  c->lr=0x800EA460u; f_800BBEA4(c); // 800EA45C
  c->r[30]=c->r[3]|c->r[3]; // 800EA460
  c->lr=0x800EA468u; f_800A23BC(c); // 800EA464
  c->lr=0x800EA46Cu; f_800BB700(c); // 800EA468
  c->r[4]=c->r[30]|c->r[30]; // 800EA46C
  c->lr=0x800EA474u; f_800BBE64(c); // 800EA470
  c->r[4]=c->r[31]|c->r[31]; // 800EA474
  c->lr=0x800EA47Cu; f_800ED3B8(c); // 800EA478
  c->r[3]=0u+0x00000000u; // 800EA47C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA480
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA484
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA488
  c->lr=c->r[0]; // 800EA48C
  c->r[1]=c->r[1]+0x00000010u; // 800EA490
  return; // 800EA494
}

// fn_800EA498
void f_800EA498(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA498
  c->r[0]=c->lr; // 800EA49C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA4A0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA4A4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA4A8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA4AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA4B0
  c->lr=0x800EA4B8u; f_800BA1D4(c); // 800EA4B4
  c->r[3]=0u+0x00000000u; // 800EA4B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA4BC
  c->lr=c->r[0]; // 800EA4C0
  c->r[1]=c->r[1]+0x00000010u; // 800EA4C4
  return; // 800EA4C8
}

// fn_800EA4CC
void f_800EA4CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA4CC
  c->r[0]=c->lr; // 800EA4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA4D4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA4D8
  c->lr=0x800EA4E0u; f_800BA2EC(c); // 800EA4DC
  c->r[3]=0u+0x00000000u; // 800EA4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA4E4
  c->lr=c->r[0]; // 800EA4E8
  c->r[1]=c->r[1]+0x00000010u; // 800EA4EC
  return; // 800EA4F0
}

// fn_800EA4F4
void f_800EA4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA4F4
  c->r[0]=c->lr; // 800EA4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA4FC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA500
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA504
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA508
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA50C
  c->lr=0x800EA514u; f_800BA230(c); // 800EA510
  c->r[3]=0u+0x00000000u; // 800EA514
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA518
  c->lr=c->r[0]; // 800EA51C
  c->r[1]=c->r[1]+0x00000010u; // 800EA520
  return; // 800EA524
}

// fn_800EA528
void f_800EA528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA528
  c->r[0]=c->lr; // 800EA52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA530
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA534
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA538
  c->lr=0x800EA540u; f_800BA28C(c); // 800EA53C
  c->r[3]=0u+0x00000000u; // 800EA540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA544
  c->lr=c->r[0]; // 800EA548
  c->r[1]=c->r[1]+0x00000010u; // 800EA54C
  return; // 800EA550
}

// fn_800EA554
void f_800EA554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA554
  c->r[0]=c->lr; // 800EA558
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA560
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA564
  c->r[30]=c->r[3]|c->r[3]; // 800EA568
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EA56C
  c->lr=0x800EA574u; f_800A23BC(c); // 800EA570
  c->lr=0x800EA578u; f_800BB700(c); // 800EA574
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EA578
  c->lr=0x800EA580u; f_800BBEA4(c); // 800EA57C
  c->r[30]=c->r[3]|c->r[3]; // 800EA580
  c->lr=0x800EA588u; f_800A23BC(c); // 800EA584
  c->lr=0x800EA58Cu; f_800BB700(c); // 800EA588
  c->r[4]=c->r[30]|c->r[30]; // 800EA58C
  c->lr=0x800EA594u; f_800BBE64(c); // 800EA590
  c->r[4]=c->r[31]|c->r[31]; // 800EA594
  c->lr=0x800EA59Cu; f_800CA4B8(c); // 800EA598
  c->r[3]=0u+0x00000000u; // 800EA59C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA5A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA5A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA5A8
  c->lr=c->r[0]; // 800EA5AC
  c->r[1]=c->r[1]+0x00000010u; // 800EA5B0
  return; // 800EA5B4
}

// fn_800EA5B8
void f_800EA5B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA5B8
  c->r[0]=c->lr; // 800EA5BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA5C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA5C4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA5C8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA5CC
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA5D0
  c->lr=0x800EA5D8u; f_800BA33C(c); // 800EA5D4
  c->r[3]=0u+0x00000000u; // 800EA5D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA5DC
  c->lr=c->r[0]; // 800EA5E0
  c->r[1]=c->r[1]+0x00000010u; // 800EA5E4
  return; // 800EA5E8
}

// fn_800EA5EC
void f_800EA5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA5EC
  c->r[0]=c->lr; // 800EA5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA5F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA5F8
  c->lr=0x800EA600u; f_800BA454(c); // 800EA5FC
  c->r[3]=0u+0x00000000u; // 800EA600
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA604
  c->lr=c->r[0]; // 800EA608
  c->r[1]=c->r[1]+0x00000010u; // 800EA60C
  return; // 800EA610
}

// fn_800EA614
void f_800EA614(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA614
  c->r[0]=c->lr; // 800EA618
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA61C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA620
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EA624
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EA628
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA62C
  c->lr=0x800EA634u; f_800BA398(c); // 800EA630
  c->r[3]=0u+0x00000000u; // 800EA634
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA638
  c->lr=c->r[0]; // 800EA63C
  c->r[1]=c->r[1]+0x00000010u; // 800EA640
  return; // 800EA644
}

// fn_800EA648
void f_800EA648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA648
  c->r[0]=c->lr; // 800EA64C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA650
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA654
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA658
  c->lr=0x800EA660u; f_800BA3F4(c); // 800EA65C
  c->r[3]=0u+0x00000000u; // 800EA660
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA664
  c->lr=c->r[0]; // 800EA668
  c->r[1]=c->r[1]+0x00000010u; // 800EA66C
  return; // 800EA670
}

// fn_800EA674
void f_800EA674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA674
  c->r[0]=c->lr; // 800EA678
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA67C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA680
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA684
  c->r[30]=c->r[3]|c->r[3]; // 800EA688
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EA68C
  c->lr=0x800EA694u; f_800A23BC(c); // 800EA690
  c->lr=0x800EA698u; f_800BB700(c); // 800EA694
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EA698
  c->lr=0x800EA6A0u; f_800BBEA4(c); // 800EA69C
  c->r[30]=c->r[3]|c->r[3]; // 800EA6A0
  c->lr=0x800EA6A8u; f_800A23BC(c); // 800EA6A4
  c->lr=0x800EA6ACu; f_800BB700(c); // 800EA6A8
  c->r[4]=c->r[30]|c->r[30]; // 800EA6AC
  c->lr=0x800EA6B4u; f_800BBE64(c); // 800EA6B0
  c->r[4]=c->r[31]|c->r[31]; // 800EA6B4
  c->lr=0x800EA6BCu; f_800ED3C0(c); // 800EA6B8
  c->r[3]=0u+0x00000000u; // 800EA6BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA6C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA6C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA6C8
  c->lr=c->r[0]; // 800EA6CC
  c->r[1]=c->r[1]+0x00000010u; // 800EA6D0
  return; // 800EA6D4
}

// fn_800EA6D8
void f_800EA6D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA6D8
  c->r[0]=c->lr; // 800EA6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA6E0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA6E4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA6E8
  c->lr=0x800EA6F0u; f_800BA4A4(c); // 800EA6EC
  c->r[3]=0u+0x00000000u; // 800EA6F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA6F4
  c->lr=c->r[0]; // 800EA6F8
  c->r[1]=c->r[1]+0x00000010u; // 800EA6FC
  return; // 800EA700
}

// fn_800EA704
void f_800EA704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA704
  c->r[0]=c->lr; // 800EA708
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA70C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA710
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA714
  c->lr=0x800EA71Cu; f_800BA504(c); // 800EA718
  c->r[3]=0u+0x00000000u; // 800EA71C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA720
  c->lr=c->r[0]; // 800EA724
  c->r[1]=c->r[1]+0x00000010u; // 800EA728
  return; // 800EA72C
}

// fn_800EA730
void f_800EA730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA730
  c->r[0]=c->lr; // 800EA734
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA738
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA73C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA740
  c->lr=0x800EA748u; f_800BA564(c); // 800EA744
  c->r[3]=0u+0x00000000u; // 800EA748
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA74C
  c->lr=c->r[0]; // 800EA750
  c->r[1]=c->r[1]+0x00000010u; // 800EA754
  return; // 800EA758
}

// fn_800EA75C
void f_800EA75C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA75C
  c->r[0]=c->lr; // 800EA760
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA768
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA76C
  c->r[30]=c->r[3]|c->r[3]; // 800EA770
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EA774
  c->lr=0x800EA77Cu; f_800A23BC(c); // 800EA778
  c->lr=0x800EA780u; f_800BB700(c); // 800EA77C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EA780
  c->lr=0x800EA788u; f_800BBEA4(c); // 800EA784
  c->r[30]=c->r[3]|c->r[3]; // 800EA788
  c->lr=0x800EA790u; f_800A23BC(c); // 800EA78C
  c->lr=0x800EA794u; f_800BB700(c); // 800EA790
  c->r[4]=c->r[30]|c->r[30]; // 800EA794
  c->lr=0x800EA79Cu; f_800BBE64(c); // 800EA798
  c->r[4]=c->r[31]|c->r[31]; // 800EA79C
  c->lr=0x800EA7A4u; f_800ED3C8(c); // 800EA7A0
  c->r[3]=0u+0x00000000u; // 800EA7A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA7A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA7AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA7B0
  c->lr=c->r[0]; // 800EA7B4
  c->r[1]=c->r[1]+0x00000010u; // 800EA7B8
  return; // 800EA7BC
}

// fn_800EA7C0
void f_800EA7C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA7C0
  c->r[0]=c->lr; // 800EA7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA7C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA7CC
  c->lr=0x800EA7D4u; f_800BA5C4(c); // 800EA7D0
  c->r[3]=0u+0x00000000u; // 800EA7D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA7D8
  c->lr=c->r[0]; // 800EA7DC
  c->r[1]=c->r[1]+0x00000010u; // 800EA7E0
  return; // 800EA7E4
}

// fn_800EA7E8
void f_800EA7E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA7E8
  c->r[0]=c->lr; // 800EA7EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA7F0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA7F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA7F8
  c->lr=0x800EA800u; f_800BA614(c); // 800EA7FC
  c->r[3]=0u+0x00000000u; // 800EA800
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA804
  c->lr=c->r[0]; // 800EA808
  c->r[1]=c->r[1]+0x00000010u; // 800EA80C
  return; // 800EA810
}

// fn_800EA814
void f_800EA814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA814
  c->r[0]=c->lr; // 800EA818
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA81C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA820
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA824
  c->lr=0x800EA82Cu; f_800BA674(c); // 800EA828
  c->r[3]=0u+0x00000000u; // 800EA82C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA830
  c->lr=c->r[0]; // 800EA834
  c->r[1]=c->r[1]+0x00000010u; // 800EA838
  return; // 800EA83C
}

// fn_800EA840
void f_800EA840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA840
  c->r[0]=c->lr; // 800EA844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA848
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EA84C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA850
  c->lr=0x800EA858u; f_800BA6D4(c); // 800EA854
  c->r[3]=0u+0x00000000u; // 800EA858
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA85C
  c->lr=c->r[0]; // 800EA860
  c->r[1]=c->r[1]+0x00000010u; // 800EA864
  return; // 800EA868
}

// fn_800EA86C
void f_800EA86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA86C
  c->r[0]=c->lr; // 800EA870
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA878
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EA87C
  c->r[30]=c->r[3]|c->r[3]; // 800EA880
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EA884
  c->lr=0x800EA88Cu; f_800A23BC(c); // 800EA888
  c->lr=0x800EA890u; f_800BB700(c); // 800EA88C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EA890
  c->lr=0x800EA898u; f_800BBEA4(c); // 800EA894
  c->r[30]=c->r[3]|c->r[3]; // 800EA898
  c->lr=0x800EA8A0u; f_800A23BC(c); // 800EA89C
  c->lr=0x800EA8A4u; f_800BB700(c); // 800EA8A0
  c->r[4]=c->r[30]|c->r[30]; // 800EA8A4
  c->lr=0x800EA8ACu; f_800BBE64(c); // 800EA8A8
  c->r[4]=c->r[31]|c->r[31]; // 800EA8AC
  c->lr=0x800EA8B4u; f_800ED3D0(c); // 800EA8B0
  c->r[3]=0u+0x00000000u; // 800EA8B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA8B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EA8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA8C0
  c->lr=c->r[0]; // 800EA8C4
  c->r[1]=c->r[1]+0x00000010u; // 800EA8C8
  return; // 800EA8CC
}

// fn_800EA8D0
void f_800EA8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA8D0
  c->r[0]=c->lr; // 800EA8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EA8D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EA8DC
  c->lr=0x800EA8E4u; f_800BA734(c); // 800EA8E0
  c->r[3]=0u+0x00000000u; // 800EA8E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EA8E8
  c->lr=c->r[0]; // 800EA8EC
  c->r[1]=c->r[1]+0x00000010u; // 800EA8F0
  return; // 800EA8F4
}

// fn_800EA8F8
void f_800EA8F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA8F8
  c->r[0]=c->lr; // 800EA8FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA900
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EA904
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EA908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA90C
  c->r[31]=c->r[3]|c->r[3]; // 800EA910
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EA914
  c->lr=0x800EA91Cu; f_800A23BC(c); // 800EA918
  c->lr=0x800EA920u; f_800BB700(c); // 800EA91C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EA920
  c->lr=0x800EA928u; f_800BBEA4(c); // 800EA924
  c->r[31]=c->r[3]|c->r[3]; // 800EA928
  c->lr=0x800EA930u; f_800A23BC(c); // 800EA92C
  c->lr=0x800EA934u; f_800BB700(c); // 800EA930
  c->r[4]=c->r[31]|c->r[31]; // 800EA934
  c->lr=0x800EA93Cu; f_800BBE64(c); // 800EA938
  c->f[1]=c->f[31]; // 800EA93C
  c->lr=0x800EA944u; f_800CA4C0(c); // 800EA940
  c->r[3]=0u+0x00000000u; // 800EA944
  c->r[0]=0u+0x00000018u; // 800EA948
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EA94C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EA950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA954
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA958
  c->lr=c->r[0]; // 800EA95C
  c->r[1]=c->r[1]+0x00000020u; // 800EA960
  return; // 800EA964
}

// fn_800EA968
void f_800EA968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA968
  c->r[0]=c->lr; // 800EA96C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA970
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EA974
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EA978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA97C
  c->r[31]=c->r[3]|c->r[3]; // 800EA980
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EA984
  c->lr=0x800EA98Cu; f_800A23BC(c); // 800EA988
  c->lr=0x800EA990u; f_800BB700(c); // 800EA98C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EA990
  c->lr=0x800EA998u; f_800BBEA4(c); // 800EA994
  c->r[31]=c->r[3]|c->r[3]; // 800EA998
  c->lr=0x800EA9A0u; f_800A23BC(c); // 800EA99C
  c->lr=0x800EA9A4u; f_800BB700(c); // 800EA9A0
  c->r[4]=c->r[31]|c->r[31]; // 800EA9A4
  c->lr=0x800EA9ACu; f_800BBE64(c); // 800EA9A8
  c->f[1]=c->f[31]; // 800EA9AC
  c->lr=0x800EA9B4u; f_800CA46C(c); // 800EA9B0
  c->r[3]=0u+0x00000000u; // 800EA9B4
  c->r[0]=0u+0x00000018u; // 800EA9B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EA9BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EA9C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EA9C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EA9C8
  c->lr=c->r[0]; // 800EA9CC
  c->r[1]=c->r[1]+0x00000020u; // 800EA9D0
  return; // 800EA9D4
}

// fn_800EA9D8
void f_800EA9D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EA9D8
  c->r[0]=c->lr; // 800EA9DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EA9E0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EA9E4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EA9E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EA9EC
  c->r[31]=c->r[3]|c->r[3]; // 800EA9F0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EA9F4
  c->lr=0x800EA9FCu; f_800A23BC(c); // 800EA9F8
  c->lr=0x800EAA00u; f_800BB700(c); // 800EA9FC
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAA00
  c->lr=0x800EAA08u; f_800BBEA4(c); // 800EAA04
  c->r[31]=c->r[3]|c->r[3]; // 800EAA08
  c->lr=0x800EAA10u; f_800A23BC(c); // 800EAA0C
  c->lr=0x800EAA14u; f_800BB700(c); // 800EAA10
  c->r[4]=c->r[31]|c->r[31]; // 800EAA14
  c->lr=0x800EAA1Cu; f_800BBE64(c); // 800EAA18
  c->f[1]=c->f[31]; // 800EAA1C
  c->lr=0x800EAA24u; f_800CA450(c); // 800EAA20
  c->r[3]=0u+0x00000000u; // 800EAA24
  c->r[0]=0u+0x00000018u; // 800EAA28
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EAA2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EAA30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAA34
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAA38
  c->lr=c->r[0]; // 800EAA3C
  c->r[1]=c->r[1]+0x00000020u; // 800EAA40
  return; // 800EAA44
}

// fn_800EAA48
void f_800EAA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAA48
  c->r[0]=c->lr; // 800EAA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAA50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAA54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAA58
  c->r[30]=c->r[3]|c->r[3]; // 800EAA5C
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EAA60
  c->lr=0x800EAA68u; f_800A23BC(c); // 800EAA64
  c->lr=0x800EAA6Cu; f_800BB700(c); // 800EAA68
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EAA6C
  c->lr=0x800EAA74u; f_800BBEA4(c); // 800EAA70
  c->r[30]=c->r[3]|c->r[3]; // 800EAA74
  c->lr=0x800EAA7Cu; f_800A23BC(c); // 800EAA78
  c->lr=0x800EAA80u; f_800BB700(c); // 800EAA7C
  c->r[4]=c->r[30]|c->r[30]; // 800EAA80
  c->lr=0x800EAA88u; f_800BBE64(c); // 800EAA84
  c->r[4]=c->r[31]|c->r[31]; // 800EAA88
  c->lr=0x800EAA90u; f_800ED3D8(c); // 800EAA8C
  c->r[3]=0u+0x00000000u; // 800EAA90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAA94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAA98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAA9C
  c->lr=c->r[0]; // 800EAAA0
  c->r[1]=c->r[1]+0x00000010u; // 800EAAA4
  return; // 800EAAA8
}

// fn_800EAAAC
void f_800EAAAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAAAC
  c->r[0]=c->lr; // 800EAAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAAB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAAB8
  c->r[31]=c->r[3]|c->r[3]; // 800EAABC
  c->lr=0x800EAAC4u; f_800A23BC(c); // 800EAAC0
  c->lr=0x800EAAC8u; f_800BB700(c); // 800EAAC4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAAC8
  c->lr=0x800EAAD0u; f_800BBEA4(c); // 800EAACC
  c->r[31]=c->r[3]|c->r[3]; // 800EAAD0
  c->lr=0x800EAAD8u; f_800A23BC(c); // 800EAAD4
  c->lr=0x800EAADCu; f_800BB700(c); // 800EAAD8
  c->r[4]=c->r[31]|c->r[31]; // 800EAADC
  c->lr=0x800EAAE4u; f_800BBE64(c); // 800EAAE0
  c->lr=0x800EAAE8u; f_800CA4A0(c); // 800EAAE4
  c->r[3]=0u+0x00000000u; // 800EAAE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAAEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAAF0
  c->lr=c->r[0]; // 800EAAF4
  c->r[1]=c->r[1]+0x00000010u; // 800EAAF8
  return; // 800EAAFC
}

// fn_800EAB00
void f_800EAB00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAB00
  c->r[0]=c->lr; // 800EAB04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EAB08
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EAB0C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EAB10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAB14
  c->r[31]=c->r[3]|c->r[3]; // 800EAB18
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAB1C
  c->lr=0x800EAB24u; f_800A23BC(c); // 800EAB20
  c->lr=0x800EAB28u; f_800BB700(c); // 800EAB24
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAB28
  c->lr=0x800EAB30u; f_800BBEA4(c); // 800EAB2C
  c->r[31]=c->r[3]|c->r[3]; // 800EAB30
  c->lr=0x800EAB38u; f_800A23BC(c); // 800EAB34
  c->lr=0x800EAB3Cu; f_800BB700(c); // 800EAB38
  c->r[4]=c->r[31]|c->r[31]; // 800EAB3C
  c->lr=0x800EAB44u; f_800BBE64(c); // 800EAB40
  c->f[1]=c->f[31]; // 800EAB44
  c->lr=0x800EAB4Cu; f_800CA628(c); // 800EAB48
  c->r[3]=0u+0x00000000u; // 800EAB4C
  c->r[0]=0u+0x00000018u; // 800EAB50
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EAB54
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EAB58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAB5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAB60
  c->lr=c->r[0]; // 800EAB64
  c->r[1]=c->r[1]+0x00000020u; // 800EAB68
  return; // 800EAB6C
}

// fn_800EAB70
void f_800EAB70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAB70
  c->r[0]=c->lr; // 800EAB74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EAB78
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EAB7C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EAB80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAB84
  c->r[31]=c->r[3]|c->r[3]; // 800EAB88
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAB8C
  c->lr=0x800EAB94u; f_800A23BC(c); // 800EAB90
  c->lr=0x800EAB98u; f_800BB700(c); // 800EAB94
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAB98
  c->lr=0x800EABA0u; f_800BBEA4(c); // 800EAB9C
  c->r[31]=c->r[3]|c->r[3]; // 800EABA0
  c->lr=0x800EABA8u; f_800A23BC(c); // 800EABA4
  c->lr=0x800EABACu; f_800BB700(c); // 800EABA8
  c->r[4]=c->r[31]|c->r[31]; // 800EABAC
  c->lr=0x800EABB4u; f_800BBE64(c); // 800EABB0
  c->f[1]=c->f[31]; // 800EABB4
  c->lr=0x800EABBCu; f_800ED3E0(c); // 800EABB8
  c->r[3]=0u+0x00000000u; // 800EABBC
  c->r[0]=0u+0x00000018u; // 800EABC0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EABC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EABC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EABCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EABD0
  c->lr=c->r[0]; // 800EABD4
  c->r[1]=c->r[1]+0x00000020u; // 800EABD8
  return; // 800EABDC
}

// fn_800EABE0
void f_800EABE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EABE0
  c->r[0]=c->lr; // 800EABE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EABE8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EABEC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EABF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EABF4
  c->r[31]=c->r[3]|c->r[3]; // 800EABF8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EABFC
  c->lr=0x800EAC04u; f_800A23BC(c); // 800EAC00
  c->lr=0x800EAC08u; f_800BB700(c); // 800EAC04
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAC08
  c->lr=0x800EAC10u; f_800BBEA4(c); // 800EAC0C
  c->r[31]=c->r[3]|c->r[3]; // 800EAC10
  c->lr=0x800EAC18u; f_800A23BC(c); // 800EAC14
  c->lr=0x800EAC1Cu; f_800BB700(c); // 800EAC18
  c->r[4]=c->r[31]|c->r[31]; // 800EAC1C
  c->lr=0x800EAC24u; f_800BBE64(c); // 800EAC20
  c->f[1]=c->f[31]; // 800EAC24
  c->lr=0x800EAC2Cu; f_800ED414(c); // 800EAC28
  c->r[3]=0u+0x00000000u; // 800EAC2C
  c->r[0]=0u+0x00000018u; // 800EAC30
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EAC34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EAC38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAC3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAC40
  c->lr=c->r[0]; // 800EAC44
  c->r[1]=c->r[1]+0x00000020u; // 800EAC48
  return; // 800EAC4C
}

// fn_800EAC50
void f_800EAC50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAC50
  c->r[0]=c->lr; // 800EAC54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAC58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAC5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAC60
  c->r[30]=c->r[3]|c->r[3]; // 800EAC64
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EAC68
  c->lr=0x800EAC70u; f_800A23BC(c); // 800EAC6C
  c->lr=0x800EAC74u; f_800BB700(c); // 800EAC70
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EAC74
  c->lr=0x800EAC7Cu; f_800BBEA4(c); // 800EAC78
  c->r[30]=c->r[3]|c->r[3]; // 800EAC7C
  c->lr=0x800EAC84u; f_800A23BC(c); // 800EAC80
  c->lr=0x800EAC88u; f_800BB700(c); // 800EAC84
  c->r[4]=c->r[30]|c->r[30]; // 800EAC88
  c->lr=0x800EAC90u; f_800BBE64(c); // 800EAC8C
  c->r[4]=c->r[31]|c->r[31]; // 800EAC90
  c->lr=0x800EAC98u; f_800ED430(c); // 800EAC94
  c->r[3]=0u+0x00000000u; // 800EAC98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAC9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EACA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EACA4
  c->lr=c->r[0]; // 800EACA8
  c->r[1]=c->r[1]+0x00000010u; // 800EACAC
  return; // 800EACB0
}

// fn_800EACB4
void f_800EACB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EACB4
  c->r[0]=c->lr; // 800EACB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EACBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EACC0
  c->r[31]=c->r[3]|c->r[3]; // 800EACC4
  c->lr=0x800EACCCu; f_800A23BC(c); // 800EACC8
  c->lr=0x800EACD0u; f_800BB700(c); // 800EACCC
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EACD0
  c->lr=0x800EACD8u; f_800BBEA4(c); // 800EACD4
  c->r[31]=c->r[3]|c->r[3]; // 800EACD8
  c->lr=0x800EACE0u; f_800A23BC(c); // 800EACDC
  c->lr=0x800EACE4u; f_800BB700(c); // 800EACE0
  c->r[4]=c->r[31]|c->r[31]; // 800EACE4
  c->lr=0x800EACECu; f_800BBE64(c); // 800EACE8
  c->lr=0x800EACF0u; f_800ED438(c); // 800EACEC
  c->r[3]=0u+0x00000000u; // 800EACF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EACF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EACF8
  c->lr=c->r[0]; // 800EACFC
  c->r[1]=c->r[1]+0x00000010u; // 800EAD00
  return; // 800EAD04
}

// fn_800EAD08
void f_800EAD08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAD08
  c->r[0]=c->lr; // 800EAD0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EAD10
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EAD14
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EAD18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAD1C
  c->r[31]=c->r[3]|c->r[3]; // 800EAD20
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAD24
  c->lr=0x800EAD2Cu; f_800A23BC(c); // 800EAD28
  c->lr=0x800EAD30u; f_800BB700(c); // 800EAD2C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAD30
  c->lr=0x800EAD38u; f_800BBEA4(c); // 800EAD34
  c->r[31]=c->r[3]|c->r[3]; // 800EAD38
  c->lr=0x800EAD40u; f_800A23BC(c); // 800EAD3C
  c->lr=0x800EAD44u; f_800BB700(c); // 800EAD40
  c->r[4]=c->r[31]|c->r[31]; // 800EAD44
  c->lr=0x800EAD4Cu; f_800BBE64(c); // 800EAD48
  c->f[1]=c->f[31]; // 800EAD4C
  c->lr=0x800EAD54u; f_800ED440(c); // 800EAD50
  c->r[3]=0u+0x00000000u; // 800EAD54
  c->r[0]=0u+0x00000018u; // 800EAD58
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EAD5C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EAD60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAD64
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAD68
  c->lr=c->r[0]; // 800EAD6C
  c->r[1]=c->r[1]+0x00000020u; // 800EAD70
  return; // 800EAD74
}

// fn_800EAD78
void f_800EAD78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAD78
  c->r[0]=c->lr; // 800EAD7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EAD80
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EAD84
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EAD88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAD8C
  c->r[31]=c->r[3]|c->r[3]; // 800EAD90
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAD94
  c->lr=0x800EAD9Cu; f_800A23BC(c); // 800EAD98
  c->lr=0x800EADA0u; f_800BB700(c); // 800EAD9C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EADA0
  c->lr=0x800EADA8u; f_800BBEA4(c); // 800EADA4
  c->r[31]=c->r[3]|c->r[3]; // 800EADA8
  c->lr=0x800EADB0u; f_800A23BC(c); // 800EADAC
  c->lr=0x800EADB4u; f_800BB700(c); // 800EADB0
  c->r[4]=c->r[31]|c->r[31]; // 800EADB4
  c->lr=0x800EADBCu; f_800BBE64(c); // 800EADB8
  c->f[1]=c->f[31]; // 800EADBC
  c->lr=0x800EADC4u; f_800ED474(c); // 800EADC0
  c->r[3]=0u+0x00000000u; // 800EADC4
  c->r[0]=0u+0x00000018u; // 800EADC8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EADCC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EADD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EADD4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EADD8
  c->lr=c->r[0]; // 800EADDC
  c->r[1]=c->r[1]+0x00000020u; // 800EADE0
  return; // 800EADE4
}

// fn_800EADE8
void f_800EADE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EADE8
  c->r[0]=c->lr; // 800EADEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EADF0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EADF4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EADF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EADFC
  c->r[31]=c->r[3]|c->r[3]; // 800EAE00
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAE04
  c->lr=0x800EAE0Cu; f_800A23BC(c); // 800EAE08
  c->lr=0x800EAE10u; f_800BB700(c); // 800EAE0C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAE10
  c->lr=0x800EAE18u; f_800BBEA4(c); // 800EAE14
  c->r[31]=c->r[3]|c->r[3]; // 800EAE18
  c->lr=0x800EAE20u; f_800A23BC(c); // 800EAE1C
  c->lr=0x800EAE24u; f_800BB700(c); // 800EAE20
  c->r[4]=c->r[31]|c->r[31]; // 800EAE24
  c->lr=0x800EAE2Cu; f_800BBE64(c); // 800EAE28
  c->f[1]=c->f[31]; // 800EAE2C
  c->lr=0x800EAE34u; f_800ED4A8(c); // 800EAE30
  c->r[3]=0u+0x00000000u; // 800EAE34
  c->r[0]=0u+0x00000018u; // 800EAE38
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EAE3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EAE40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAE44
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EAE48
  c->lr=c->r[0]; // 800EAE4C
  c->r[1]=c->r[1]+0x00000020u; // 800EAE50
  return; // 800EAE54
}

// fn_800EAE58
void f_800EAE58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAE58
  c->r[0]=c->lr; // 800EAE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAE60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAE64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EAE68
  c->r[30]=c->r[3]|c->r[3]; // 800EAE6C
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EAE70
  c->lr=0x800EAE78u; f_800A23BC(c); // 800EAE74
  c->lr=0x800EAE7Cu; f_800BB700(c); // 800EAE78
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EAE7C
  c->lr=0x800EAE84u; f_800BBEA4(c); // 800EAE80
  c->r[30]=c->r[3]|c->r[3]; // 800EAE84
  c->lr=0x800EAE8Cu; f_800A23BC(c); // 800EAE88
  c->lr=0x800EAE90u; f_800BB700(c); // 800EAE8C
  c->r[4]=c->r[30]|c->r[30]; // 800EAE90
  c->lr=0x800EAE98u; f_800BBE64(c); // 800EAE94
  c->r[4]=c->r[31]|c->r[31]; // 800EAE98
  c->lr=0x800EAEA0u; f_800ED4C4(c); // 800EAE9C
  c->r[3]=0u+0x00000000u; // 800EAEA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAEA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EAEA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAEAC
  c->lr=c->r[0]; // 800EAEB0
  c->r[1]=c->r[1]+0x00000010u; // 800EAEB4
  return; // 800EAEB8
}

// fn_800EAEBC
void f_800EAEBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAEBC
  c->r[0]=c->lr; // 800EAEC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EAEC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EAEC8
  c->r[31]=c->r[3]|c->r[3]; // 800EAECC
  c->lr=0x800EAED4u; f_800A23BC(c); // 800EAED0
  c->lr=0x800EAED8u; f_800BB700(c); // 800EAED4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EAED8
  c->lr=0x800EAEE0u; f_800BBEA4(c); // 800EAEDC
  c->r[31]=c->r[3]|c->r[3]; // 800EAEE0
  c->lr=0x800EAEE8u; f_800A23BC(c); // 800EAEE4
  c->lr=0x800EAEECu; f_800BB700(c); // 800EAEE8
  c->r[4]=c->r[31]|c->r[31]; // 800EAEEC
  c->lr=0x800EAEF4u; f_800BBE64(c); // 800EAEF0
  c->lr=0x800EAEF8u; f_800ED4CC(c); // 800EAEF4
  c->r[3]=0u+0x00000000u; // 800EAEF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EAEFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EAF00
  c->lr=c->r[0]; // 800EAF04
  c->r[1]=c->r[1]+0x00000010u; // 800EAF08
  return; // 800EAF0C
}

// fn_800EAF10
void f_800EAF10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAF10
  c->r[0]=c->lr; // 800EAF14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EAF18
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EAF1C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EAF20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EAF24
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EAF28
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EAF2C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EAF30
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EAF34
  {uint32_t ea=c->r[3]+0x00000010u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAF38
  c->r[3]=c->r[1]+0x00000008u; // 800EAF3C
  c->lr=0x800EAF44u; f_8004E34C(c); // 800EAF40
  c->lr=0x800EAF48u; f_800A23BC(c); // 800EAF44
  c->lr=0x800EAF4Cu; f_800BB700(c); // 800EAF48
  c->r[4]=c->r[31]|c->r[31]; // 800EAF4C
  c->lr=0x800EAF54u; f_800BBEA4(c); // 800EAF50
  c->r[31]=c->r[3]|c->r[3]; // 800EAF54
  c->lr=0x800EAF5Cu; f_800A23BC(c); // 800EAF58
  c->lr=0x800EAF60u; f_800BB700(c); // 800EAF5C
  c->r[4]=c->r[31]|c->r[31]; // 800EAF60
  c->lr=0x800EAF68u; f_800BBE64(c); // 800EAF64
  c->r[4]=c->r[1]+0x00000008u; // 800EAF68
  c->f[1]=c->f[31]; // 800EAF6C
  c->lr=0x800EAF74u; f_800D2AA4(c); // 800EAF70
  c->r[3]=0u+0x00000000u; // 800EAF74
  c->r[0]=0u+0x00000028u; // 800EAF78
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EAF7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EAF80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EAF84
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EAF88
  c->lr=c->r[0]; // 800EAF8C
  c->r[1]=c->r[1]+0x00000030u; // 800EAF90
  return; // 800EAF94
}

// fn_800EAF98
void f_800EAF98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EAF98
  c->r[0]=c->lr; // 800EAF9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EAFA0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EAFA4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EAFA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EAFAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EAFB0
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EAFB4
  c->r[30]=R32(c->r[3]+0x00000004u); // 800EAFB8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EAFBC
  c->r[3]=c->r[1]+0x00000008u; // 800EAFC0
  c->lr=0x800EAFC8u; f_8004B0A4(c); // 800EAFC4
  c->lr=0x800EAFCCu; f_800A23BC(c); // 800EAFC8
  c->lr=0x800EAFD0u; f_800BB800(c); // 800EAFCC
  c->r[4]=c->r[30]|c->r[30]; // 800EAFD0
  c->lr=0x800EAFD8u; f_800BBD98(c); // 800EAFD4
  c->r[30]=c->r[3]|c->r[3]; // 800EAFD8
  c->lr=0x800EAFE0u; f_800A23BC(c); // 800EAFDC
  c->lr=0x800EAFE4u; f_800BB800(c); // 800EAFE0
  c->r[4]=c->r[30]|c->r[30]; // 800EAFE4
  c->lr=0x800EAFECu; f_800BBD58(c); // 800EAFE8
  c->r[4]=c->r[1]+0x00000008u; // 800EAFEC
  c->lr=0x800EAFF4u; f_800BD664(c); // 800EAFF0
  c->lr=0x800EAFF8u; f_800A23BC(c); // 800EAFF4
  c->lr=0x800EAFFCu; f_800BB700(c); // 800EAFF8
  c->r[4]=c->r[31]|c->r[31]; // 800EAFFC
  c->lr=0x800EB004u; f_800BBEA4(c); // 800EB000
  c->r[30]=c->r[3]|c->r[3]; // 800EB004
  c->lr=0x800EB00Cu; f_800A23BC(c); // 800EB008
  c->lr=0x800EB010u; f_800BB700(c); // 800EB00C
  c->r[4]=c->r[30]|c->r[30]; // 800EB010
  c->lr=0x800EB018u; f_800BBE64(c); // 800EB014
  c->r[4]=c->r[1]+0x00000008u; // 800EB018
  c->f[1]=c->f[31]; // 800EB01C
  c->lr=0x800EB024u; f_800D2AA4(c); // 800EB020
  c->r[3]=0u+0x00000000u; // 800EB024
  c->r[0]=0u+0x00000028u; // 800EB028
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EB02C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EB030
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB034
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EB038
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EB03C
  c->lr=c->r[0]; // 800EB040
  c->r[1]=c->r[1]+0x00000030u; // 800EB044
  return; // 800EB048
}

// fn_800EB04C
void f_800EB04C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB04C
  c->r[0]=c->lr; // 800EB050
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB054
  c->r[4]=c->r[3]|c->r[3]; // 800EB058
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB05C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EB060
  c->lr=0x800EB068u; f_800BA7D4(c); // 800EB064
  c->r[3]=0u+0x00000000u; // 800EB068
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB06C
  c->lr=c->r[0]; // 800EB070
  c->r[1]=c->r[1]+0x00000010u; // 800EB074
  return; // 800EB078
}

// fn_800EB07C
void f_800EB07C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB07C
  c->r[0]=c->lr; // 800EB080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB084
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB088
  c->lr=0x800EB090u; f_800BA848(c); // 800EB08C
  c->r[3]=0u+0x00000000u; // 800EB090
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB094
  c->lr=c->r[0]; // 800EB098
  c->r[1]=c->r[1]+0x00000010u; // 800EB09C
  return; // 800EB0A0
}

// fn_800EB0A4
void f_800EB0A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB0A4
  c->r[0]=c->lr; // 800EB0A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB0AC
  c->r[4]=c->r[3]|c->r[3]; // 800EB0B0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB0B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB0B8
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EB0BC
  c->lr=0x800EB0C4u; f_800BA898(c); // 800EB0C0
  c->r[3]=0u+0x00000000u; // 800EB0C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB0C8
  c->lr=c->r[0]; // 800EB0CC
  c->r[1]=c->r[1]+0x00000010u; // 800EB0D0
  return; // 800EB0D4
}

// fn_800EB0D8
void f_800EB0D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB0D8
  c->r[0]=c->lr; // 800EB0DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB0E0
  c->r[4]=c->r[3]|c->r[3]; // 800EB0E4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB0E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB0EC
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EB0F0
  c->lr=0x800EB0F8u; f_800BA93C(c); // 800EB0F4
  c->r[3]=0u+0x00000000u; // 800EB0F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB0FC
  c->lr=c->r[0]; // 800EB100
  c->r[1]=c->r[1]+0x00000010u; // 800EB104
  return; // 800EB108
}

// fn_800EB10C
void f_800EB10C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB10C
  c->r[0]=c->lr; // 800EB110
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB114
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB118
  {uint32_t ea=c->r[3]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800EB11C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB120
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB124
  c->f[4]=c->f[2]; // 800EB128
  c->lr=0x800EB130u; f_800BA9E0(c); // 800EB12C
  c->r[3]=0u+0x00000000u; // 800EB130
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB134
  c->lr=c->r[0]; // 800EB138
  c->r[1]=c->r[1]+0x00000010u; // 800EB13C
  return; // 800EB140
}

// fn_800EB144
void f_800EB144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB144
  c->r[0]=c->lr; // 800EB148
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB14C
  c->r[4]=c->r[3]|c->r[3]; // 800EB150
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB154
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB158
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB15C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EB160
  c->lr=0x800EB168u; f_800BAA60(c); // 800EB164
  c->r[3]=0u+0x00000000u; // 800EB168
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB16C
  c->lr=c->r[0]; // 800EB170
  c->r[1]=c->r[1]+0x00000010u; // 800EB174
  return; // 800EB178
}

// fn_800EB17C
void f_800EB17C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB17C
  c->r[0]=c->lr; // 800EB180
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB184
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB188
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EB18C
  c->r[30]=c->r[3]|c->r[3]; // 800EB190
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EB194
  c->lr=0x800EB19Cu; f_800A23BC(c); // 800EB198
  c->lr=0x800EB1A0u; f_800BB700(c); // 800EB19C
  c->r[4]=R32(c->r[30]+0x00000000u); // 800EB1A0
  c->lr=0x800EB1A8u; f_800BBEA4(c); // 800EB1A4
  c->r[30]=c->r[3]|c->r[3]; // 800EB1A8
  c->lr=0x800EB1B0u; f_800A23BC(c); // 800EB1AC
  c->lr=0x800EB1B4u; f_800BB700(c); // 800EB1B0
  c->r[4]=c->r[30]|c->r[30]; // 800EB1B4
  c->lr=0x800EB1BCu; f_800BBE64(c); // 800EB1B8
  c->r[4]=c->r[31]|c->r[31]; // 800EB1BC
  c->lr=0x800EB1C4u; f_800D2800(c); // 800EB1C0
  c->r[3]=0u+0x00000000u; // 800EB1C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB1C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EB1CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB1D0
  c->lr=c->r[0]; // 800EB1D4
  c->r[1]=c->r[1]+0x00000010u; // 800EB1D8
  return; // 800EB1DC
}

// fn_800EB1E0
void f_800EB1E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB1E0
  c->r[0]=c->lr; // 800EB1E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB1E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB1EC
  c->lr=0x800EB1F4u; f_800B9E08(c); // 800EB1F0
  c->r[3]=0u+0x00000000u; // 800EB1F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB1F8
  c->lr=c->r[0]; // 800EB1FC
  c->r[1]=c->r[1]+0x00000010u; // 800EB200
  return; // 800EB204
}

// fn_800EB208
void f_800EB208(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB208
  c->r[0]=c->lr; // 800EB20C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB210
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB214
  c->lr=0x800EB21Cu; f_800B9E5C(c); // 800EB218
  c->r[3]=0u+0x00000000u; // 800EB21C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB220
  c->lr=c->r[0]; // 800EB224
  c->r[1]=c->r[1]+0x00000010u; // 800EB228
  return; // 800EB22C
}

// fn_800EB230
void f_800EB230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB230
  c->r[0]=c->lr; // 800EB234
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB238
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB23C
  c->lr=0x800EB244u; f_800B9EB0(c); // 800EB240
  c->r[3]=0u+0x00000000u; // 800EB244
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB248
  c->lr=c->r[0]; // 800EB24C
  c->r[1]=c->r[1]+0x00000010u; // 800EB250
  return; // 800EB254
}

// fn_800EB258
void f_800EB258(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB258
  f_800BA784(c); return; // 800EB25C
}

// fn_800EB260
void f_800EB260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB260
  c->r[0]=c->lr; // 800EB264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB26C
  c->r[31]=c->r[3]|c->r[3]; // 800EB270
  c->lr=0x800EB278u; f_800A23BC(c); // 800EB274
  c->lr=0x800EB27Cu; f_800BB700(c); // 800EB278
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EB27C
  c->lr=0x800EB284u; f_800BBEA4(c); // 800EB280
  c->r[31]=c->r[3]|c->r[3]; // 800EB284
  cmps(c,0,(int32_t)c->r[3],0); // 800EB288
  if (!crb(c,2)) { goto L_800EB298; } // 800EB28C
  c->r[3]=0u+0x00000000u; // 800EB290
  goto L_800EB2B0; // 800EB294
L_800EB298:;
  c->lr=0x800EB29Cu; f_800A23BC(c); // 800EB298
  c->lr=0x800EB2A0u; f_800BB700(c); // 800EB29C
  c->r[4]=c->r[31]|c->r[31]; // 800EB2A0
  c->lr=0x800EB2A8u; f_800BBE64(c); // 800EB2A4
  c->lr=0x800EB2ACu; f_800CA598(c); // 800EB2A8
  c->r[3]=0u+0x00000000u; // 800EB2AC
L_800EB2B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB2B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB2B4
  c->lr=c->r[0]; // 800EB2B8
  c->r[1]=c->r[1]+0x00000010u; // 800EB2BC
  return; // 800EB2C0
}

// fn_800EB2C4
void f_800EB2C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB2C4
  c->r[0]=c->lr; // 800EB2C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB2CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB2D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EB2D4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB2D8
  c->r[3]=c->r[1]+0x00000008u; // 800EB2DC
  c->lr=0x800EB2E4u; f_8004B0A4(c); // 800EB2E0
  c->lr=0x800EB2E8u; f_8006E268(c); // 800EB2E4
  c->lr=0x800EB2ECu; f_80073690(c); // 800EB2E8
  cmps(c,0,(int32_t)c->r[3],5); // 800EB2EC
  if (!crb(c,2)) { goto L_800EB2FC; } // 800EB2F0
  c->r[3]=0u+0x00000000u; // 800EB2F4
  goto L_800EB3AC; // 800EB2F8
L_800EB2FC:;
  c->lr=0x800EB300u; f_800A23BC(c); // 800EB2FC
  c->lr=0x800EB304u; f_800BB700(c); // 800EB300
  c->r[4]=c->r[31]|c->r[31]; // 800EB304
  c->lr=0x800EB30Cu; f_800BBEA4(c); // 800EB308
  c->r[31]=c->r[3]|c->r[3]; // 800EB30C
  cmps(c,0,(int32_t)c->r[3],0); // 800EB310
  if (!crb(c,2)) { goto L_800EB320; } // 800EB314
  c->r[3]=0u+0x00000000u; // 800EB318
  goto L_800EB3AC; // 800EB31C
L_800EB320:;
  c->lr=0x800EB324u; f_800A23BC(c); // 800EB320
  c->lr=0x800EB328u; f_800BB700(c); // 800EB324
  c->r[4]=c->r[31]|c->r[31]; // 800EB328
  c->lr=0x800EB330u; f_800BBE64(c); // 800EB32C
  c->lr=0x800EB334u; f_800CA3BC(c); // 800EB330
  cmps(c,0,(int32_t)c->r[3],0); // 800EB334
  if (crb(c,2)) { goto L_800EB3A8; } // 800EB338
  c->lr=0x800EB340u; f_800A23BC(c); // 800EB33C
  c->lr=0x800EB344u; f_800BB700(c); // 800EB340
  c->r[4]=c->r[31]|c->r[31]; // 800EB344
  c->lr=0x800EB34Cu; f_800BBE64(c); // 800EB348
  c->lr=0x800EB350u; f_800CA338(c); // 800EB34C
  c->lr=0x800EB354u; f_800A23BC(c); // 800EB350
  c->lr=0x800EB358u; f_800A23C4(c); // 800EB354
  c->lr=0x800EB35Cu; f_800BBF6C(c); // 800EB358
  c->r[30]=c->r[3]|c->r[3]; // 800EB35C
  c->lr=0x800EB364u; f_800A23BC(c); // 800EB360
  c->lr=0x800EB368u; f_800BB800(c); // 800EB364
  c->r[4]=c->r[30]|c->r[30]; // 800EB368
  c->lr=0x800EB370u; f_800C1284(c); // 800EB36C
  cmps(c,0,(int32_t)c->r[3],0); // 800EB370
  if (crb(c,2)) { goto L_800EB3A8; } // 800EB374
  c->lr=0x800EB37Cu; f_800A23BC(c); // 800EB378
  c->lr=0x800EB380u; f_800BB800(c); // 800EB37C
  c->r[4]=c->r[30]|c->r[30]; // 800EB380
  c->lr=0x800EB388u; f_800BBD58(c); // 800EB384
  c->r[4]=c->r[1]+0x00000008u; // 800EB388
  c->lr=0x800EB390u; f_800BD664(c); // 800EB38C
  c->lr=0x800EB394u; f_800A23BC(c); // 800EB390
  c->lr=0x800EB398u; f_800BB700(c); // 800EB394
  c->r[4]=c->r[31]|c->r[31]; // 800EB398
  c->lr=0x800EB3A0u; f_800BBE64(c); // 800EB39C
  c->r[4]=c->r[1]+0x00000008u; // 800EB3A0
  c->lr=0x800EB3A8u; f_800BB528(c); // 800EB3A4
L_800EB3A8:;
  c->r[3]=0u+0x00000000u; // 800EB3A8
L_800EB3AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB3AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EB3B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB3B4
  c->lr=c->r[0]; // 800EB3B8
  c->r[1]=c->r[1]+0x00000020u; // 800EB3BC
  return; // 800EB3C0
}

// fn_800EB3C4
void f_800EB3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB3C4
  c->r[0]=c->lr; // 800EB3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB3CC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EB3D0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EB3D4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800EB3D8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB3DC
  c->lr=0x800EB3E4u; f_800BAA64(c); // 800EB3E0
  c->r[3]=0u+0x00000000u; // 800EB3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB3E8
  c->lr=c->r[0]; // 800EB3EC
  c->r[1]=c->r[1]+0x00000010u; // 800EB3F0
  return; // 800EB3F4
}

// fn_800EB3F8
void f_800EB3F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB3F8
  c->r[0]=c->lr; // 800EB3FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB400
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB404
  c->lr=0x800EB40Cu; f_800BAAD0(c); // 800EB408
  c->r[3]=0u+0x00000000u; // 800EB40C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB410
  c->lr=c->r[0]; // 800EB414
  c->r[1]=c->r[1]+0x00000010u; // 800EB418
  return; // 800EB41C
}

// fn_800EB420
void f_800EB420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB420
  c->r[0]=c->lr; // 800EB424
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB428
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB42C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB430
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB434
  c->lr=0x800EB43Cu; f_8004B0A4(c); // 800EB438
  c->lr=0x800EB440u; f_800A23BC(c); // 800EB43C
  c->lr=0x800EB444u; f_800BB810(c); // 800EB440
  c->r[4]=c->r[31]|c->r[31]; // 800EB444
  c->lr=0x800EB44Cu; f_800BBB34(c); // 800EB448
  c->r[31]=c->r[3]|c->r[3]; // 800EB44C
  c->lr=0x800EB454u; f_800A23BC(c); // 800EB450
  c->lr=0x800EB458u; f_800BB810(c); // 800EB454
  c->r[4]=c->r[31]|c->r[31]; // 800EB458
  c->lr=0x800EB460u; f_800BBAF4(c); // 800EB45C
  c->lr=0x800EB464u; f_800ED4D4(c); // 800EB460
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EB464
  c->r[3]=R32(c->r[1]+0x00000008u); // 800EB468
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB46C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB470
  c->lr=c->r[0]; // 800EB474
  c->r[1]=c->r[1]+0x00000020u; // 800EB478
  return; // 800EB47C
}

// fn_800EB480
void f_800EB480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB480
  c->r[0]=c->lr; // 800EB484
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB48C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB490
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB494
  c->lr=0x800EB49Cu; f_8004B0A4(c); // 800EB498
  c->lr=0x800EB4A0u; f_800A23BC(c); // 800EB49C
  c->lr=0x800EB4A4u; f_800BB810(c); // 800EB4A0
  c->r[4]=c->r[31]|c->r[31]; // 800EB4A4
  c->lr=0x800EB4ACu; f_800BBB34(c); // 800EB4A8
  c->r[31]=c->r[3]|c->r[3]; // 800EB4AC
  c->lr=0x800EB4B4u; f_800A23BC(c); // 800EB4B0
  c->lr=0x800EB4B8u; f_800BB810(c); // 800EB4B4
  c->r[4]=c->r[31]|c->r[31]; // 800EB4B8
  c->lr=0x800EB4C0u; f_800BBAF4(c); // 800EB4BC
  c->lr=0x800EB4C4u; f_800ED4DC(c); // 800EB4C0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EB4C4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800EB4C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB4CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB4D0
  c->lr=c->r[0]; // 800EB4D4
  c->r[1]=c->r[1]+0x00000020u; // 800EB4D8
  return; // 800EB4DC
}

// fn_800EB4E0
void f_800EB4E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB4E0
  c->r[0]=c->lr; // 800EB4E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB4E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB4EC
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB4F0
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB4F4
  c->lr=0x800EB4FCu; f_8004B0A4(c); // 800EB4F8
  c->lr=0x800EB500u; f_800A23BC(c); // 800EB4FC
  c->lr=0x800EB504u; f_800BB810(c); // 800EB500
  c->r[4]=c->r[31]|c->r[31]; // 800EB504
  c->lr=0x800EB50Cu; f_800BBB34(c); // 800EB508
  c->r[31]=c->r[3]|c->r[3]; // 800EB50C
  c->lr=0x800EB514u; f_800A23BC(c); // 800EB510
  c->lr=0x800EB518u; f_800BB810(c); // 800EB514
  c->r[4]=c->r[31]|c->r[31]; // 800EB518
  c->lr=0x800EB520u; f_800BBAF4(c); // 800EB51C
  c->lr=0x800EB524u; f_800ED4E4(c); // 800EB520
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EB524
  c->r[3]=R32(c->r[1]+0x00000008u); // 800EB528
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB52C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB530
  c->lr=c->r[0]; // 800EB534
  c->r[1]=c->r[1]+0x00000020u; // 800EB538
  return; // 800EB53C
}

// fn_800EB540
void f_800EB540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB540
  c->r[0]=c->lr; // 800EB544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB54C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB550
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB554
  c->lr=0x800EB55Cu; f_8004B0A4(c); // 800EB558
  c->lr=0x800EB560u; f_800A23BC(c); // 800EB55C
  c->lr=0x800EB564u; f_800BB810(c); // 800EB560
  c->r[4]=c->r[31]|c->r[31]; // 800EB564
  c->lr=0x800EB56Cu; f_800BBB34(c); // 800EB568
  c->r[31]=c->r[3]|c->r[3]; // 800EB56C
  c->lr=0x800EB574u; f_800A23BC(c); // 800EB570
  c->lr=0x800EB578u; f_800BB810(c); // 800EB574
  c->r[4]=c->r[31]|c->r[31]; // 800EB578
  c->lr=0x800EB580u; f_800BBAF4(c); // 800EB57C
  c->lr=0x800EB584u; f_800ED4EC(c); // 800EB580
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EB584
  c->r[3]=R32(c->r[1]+0x00000008u); // 800EB588
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB58C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB590
  c->lr=c->r[0]; // 800EB594
  c->r[1]=c->r[1]+0x00000020u; // 800EB598
  return; // 800EB59C
}

// fn_800EB5A0
void f_800EB5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB5A0
  c->r[0]=c->lr; // 800EB5A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB5A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB5AC
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB5B0
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB5B4
  c->lr=0x800EB5BCu; f_8004B0A4(c); // 800EB5B8
  c->lr=0x800EB5C0u; f_800A23BC(c); // 800EB5BC
  c->lr=0x800EB5C4u; f_800BB810(c); // 800EB5C0
  c->r[4]=c->r[31]|c->r[31]; // 800EB5C4
  c->lr=0x800EB5CCu; f_800BBB34(c); // 800EB5C8
  c->r[31]=c->r[3]|c->r[3]; // 800EB5CC
  c->lr=0x800EB5D4u; f_800A23BC(c); // 800EB5D0
  c->lr=0x800EB5D8u; f_800BB810(c); // 800EB5D4
  c->r[4]=c->r[31]|c->r[31]; // 800EB5D8
  c->lr=0x800EB5E0u; f_800BBAF4(c); // 800EB5DC
  c->lr=0x800EB5E4u; f_800ED4F4(c); // 800EB5E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EB5E4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800EB5E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB5EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB5F0
  c->lr=c->r[0]; // 800EB5F4
  c->r[1]=c->r[1]+0x00000020u; // 800EB5F8
  return; // 800EB5FC
}

// fn_800EB600
void f_800EB600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB600
  c->r[0]=c->lr; // 800EB604
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EB60C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB610
  c->r[3]=c->r[1]+0x0000000Cu; // 800EB614
  c->lr=0x800EB61Cu; f_8004B0A4(c); // 800EB618
  c->lr=0x800EB620u; f_800A23BC(c); // 800EB61C
  c->lr=0x800EB624u; f_800BB810(c); // 800EB620
  c->r[4]=c->r[31]|c->r[31]; // 800EB624
  c->lr=0x800EB62Cu; f_800BBB34(c); // 800EB628
  c->r[31]=c->r[3]|c->r[3]; // 800EB62C
  c->lr=0x800EB634u; f_800A23BC(c); // 800EB630
  c->lr=0x800EB638u; f_800BB810(c); // 800EB634
  c->r[4]=c->r[31]|c->r[31]; // 800EB638
  c->lr=0x800EB640u; f_800BBAF4(c); // 800EB63C
  c->lr=0x800EB644u; f_800ED4FC(c); // 800EB640
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800EB644
  c->r[3]=R32(c->r[1]+0x00000008u); // 800EB648
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EB64C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB650
  c->lr=c->r[0]; // 800EB654
  c->r[1]=c->r[1]+0x00000020u; // 800EB658
  return; // 800EB65C
}

// fn_800EB660
void f_800EB660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB660
  c->r[0]=c->lr; // 800EB664
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB668
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB66C
  c->lr=0x800EB674u; f_800BAB08(c); // 800EB670
  c->r[3]=0u+0x00000000u; // 800EB674
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB678
  c->lr=c->r[0]; // 800EB67C
  c->r[1]=c->r[1]+0x00000010u; // 800EB680
  return; // 800EB684
}

// fn_800EB688
void f_800EB688(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB688
  c->r[0]=c->lr; // 800EB68C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB690
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB694
  c->lr=0x800EB69Cu; f_800A23BC(c); // 800EB698
  c->lr=0x800EB6A0u; f_800BB828(c); // 800EB69C
  c->r[4]=R32(c->r[13]+0xFFFF8D28u); // 800EB6A0
  c->lr=0x800EB6A8u; f_800BB9DC(c); // 800EB6A4
  c->r[31]=c->r[3]|c->r[3]; // 800EB6A8
  cmps(c,0,(int32_t)c->r[3],0); // 800EB6AC
  if (crb(c,2)) { goto L_800EB6CC; } // 800EB6B0
  c->lr=0x800EB6B8u; f_800A23BC(c); // 800EB6B4
  c->lr=0x800EB6BCu; f_800BB828(c); // 800EB6B8
  c->r[4]=c->r[31]|c->r[31]; // 800EB6BC
  c->lr=0x800EB6C4u; f_800BB99C(c); // 800EB6C0
  c->lr=0x800EB6C8u; f_800ED504(c); // 800EB6C4
  goto L_800EB6D0; // 800EB6C8
L_800EB6CC:;
  c->r[3]=0u+0x00000001u; // 800EB6CC
L_800EB6D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB6D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB6D4
  c->lr=c->r[0]; // 800EB6D8
  c->r[1]=c->r[1]+0x00000010u; // 800EB6DC
  return; // 800EB6E0
}

// fn_800EB6E4
void f_800EB6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB6E4
  c->r[0]=c->lr; // 800EB6E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EB6EC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800EB6F0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800EB6F4
  W32(c->r[1]+0x00000010u,c->r[30]); // 800EB6F8
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB6FC
  c->lr=0x800EB704u; f_8007B524(c); // 800EB700
  c->r[4]=c->r[31]|c->r[31]; // 800EB704
  c->lr=0x800EB70Cu; f_800ED564(c); // 800EB708
  c->r[30]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800EB70C
  c->lr=0x800EB714u; f_8007B524(c); // 800EB710
  c->r[4]=c->r[31]|c->r[31]; // 800EB714
  c->lr=0x800EB71Cu; f_800ED59C(c); // 800EB718
  c->lr=0x800EB720u; f_8007B524(c); // 800EB71C
  c->r[4]=c->r[31]|c->r[31]; // 800EB720
  c->lr=0x800EB728u; f_800ED5F4(c); // 800EB724
  c->lr=0x800EB72Cu; f_8007B524(c); // 800EB728
  c->r[4]=c->r[31]|c->r[31]; // 800EB72C
  c->lr=0x800EB734u; f_800ED64C(c); // 800EB730
  c->f[31]=c->f[1]; // 800EB734
  cmps(c,0,(int32_t)c->r[30],0); // 800EB738
  if (crb(c,0)) { goto L_800EB7A0; } // 800EB73C
  c->lr=0x800EB744u; f_800A23BC(c); // 800EB740
  c->lr=0x800EB748u; f_800BB828(c); // 800EB744
  c->r[4]=R32(c->r[13]+0xFFFF8D2Cu); // 800EB748
  c->lr=0x800EB750u; f_800BB9DC(c); // 800EB74C
  c->r[31]=c->r[3]|c->r[3]; // 800EB750
  cmps(c,0,(int32_t)c->r[3],0); // 800EB754
  if (crb(c,2)) { goto L_800EB76C; } // 800EB758
  c->lr=0x800EB760u; f_800A23BC(c); // 800EB75C
  c->lr=0x800EB764u; f_800BB828(c); // 800EB760
  c->r[4]=c->r[31]|c->r[31]; // 800EB764
  c->lr=0x800EB76Cu; f_800E1BF4(c); // 800EB768
L_800EB76C:;
  c->lr=0x800EB770u; f_800A23BC(c); // 800EB76C
  c->lr=0x800EB774u; f_800BB828(c); // 800EB770
  c->r[4]=R32(c->r[13]+0xFFFF8D2Cu); // 800EB774
  c->r[5]=c->r[30]|c->r[30]; // 800EB778
  c->r[6]=0u+0x00000002u; // 800EB77C
  c->f[1]=c->f[31]; // 800EB780
  c->lr=0x800EB788u; f_800E1ABC(c); // 800EB784
  c->r[31]=c->r[3]|c->r[3]; // 800EB788
  c->lr=0x800EB790u; f_800A23BC(c); // 800EB78C
  c->lr=0x800EB794u; f_800BB828(c); // 800EB790
  c->r[4]=c->r[31]|c->r[31]; // 800EB794
  c->lr=0x800EB79Cu; f_800BB99C(c); // 800EB798
  c->lr=0x800EB7A0u; f_800E1798(c); // 800EB79C
L_800EB7A0:;
  c->r[3]=0u+0x00000000u; // 800EB7A0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800EB7A4
  c->r[31]=R32(c->r[1]+0x00000014u); // 800EB7A8
  c->r[30]=R32(c->r[1]+0x00000010u); // 800EB7AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EB7B0
  c->lr=c->r[0]; // 800EB7B4
  c->r[1]=c->r[1]+0x00000020u; // 800EB7B8
  return; // 800EB7BC
}

// fn_800EB7C0
void f_800EB7C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB7C0
  c->r[0]=c->lr; // 800EB7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB7C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB7CC
  c->lr=0x800EB7D4u; f_800A23BC(c); // 800EB7D0
  c->lr=0x800EB7D8u; f_800BB828(c); // 800EB7D4
  c->r[4]=R32(c->r[13]+0xFFFF8D30u); // 800EB7D8
  c->lr=0x800EB7E0u; f_800BB9DC(c); // 800EB7DC
  c->r[31]=c->r[3]|c->r[3]; // 800EB7E0
  cmps(c,0,(int32_t)c->r[3],0); // 800EB7E4
  if (crb(c,2)) { goto L_800EB7FC; } // 800EB7E8
  c->lr=0x800EB7F0u; f_800A23BC(c); // 800EB7EC
  c->lr=0x800EB7F4u; f_800BB828(c); // 800EB7F0
  c->r[4]=c->r[31]|c->r[31]; // 800EB7F4
  c->lr=0x800EB7FCu; f_800E1BF4(c); // 800EB7F8
L_800EB7FC:;
  c->r[3]=0u+0x00000000u; // 800EB7FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB800
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB804
  c->lr=c->r[0]; // 800EB808
  c->r[1]=c->r[1]+0x00000010u; // 800EB80C
  return; // 800EB810
}

// fn_800EB814
void f_800EB814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB814
  c->r[0]=c->lr; // 800EB818
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB81C
  c->r[3]=0u+0x00000001u; // 800EB820
  c->lr=0x800EB828u; f_8005D9C8(c); // 800EB824
  c->lr=0x800EB82Cu; f_800BAC18(c); // 800EB828
  c->r[3]=0u+0x00000000u; // 800EB82C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB830
  c->lr=c->r[0]; // 800EB834
  c->r[1]=c->r[1]+0x00000010u; // 800EB838
  return; // 800EB83C
}

// fn_800EB840
void f_800EB840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB840
  c->r[0]=c->lr; // 800EB844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB848
  c->lr=0x800EB850u; f_800BAC1C(c); // 800EB84C
  c->lr=0x800EB854u; f_800BB0F8(c); // 800EB850
  c->r[3]=0u+0x00000000u; // 800EB854
  c->lr=0x800EB85Cu; f_8005D9C8(c); // 800EB858
  c->r[3]=0u+0x00000000u; // 800EB85C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB860
  c->lr=c->r[0]; // 800EB864
  c->r[1]=c->r[1]+0x00000010u; // 800EB868
  return; // 800EB86C
}

// fn_800EB870
void f_800EB870(Ctx* __restrict c) {
  f_800BAC20(c); return; // 800EB870
}

// fn_800EB874
void f_800EB874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB874
  c->r[0]=c->lr; // 800EB878
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB87C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB880
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB884
  c->r[3]=c->r[31]|c->r[31]; // 800EB888
  c->lr=0x800EB890u; f_800BB088(c); // 800EB88C
  c->r[3]=c->r[31]|c->r[31]; // 800EB890
  c->lr=0x800EB898u; f_800BAC24(c); // 800EB894
  c->r[3]=0u+0x00000000u; // 800EB898
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB89C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB8A0
  c->lr=c->r[0]; // 800EB8A4
  c->r[1]=c->r[1]+0x00000010u; // 800EB8A8
  return; // 800EB8AC
}

// fn_800EB8B0
void f_800EB8B0(Ctx* __restrict c) {
  f_800BAC48(c); return; // 800EB8B0
}

// fn_800EB8B4
void f_800EB8B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800EB8B4
  return; // 800EB8B8
}

// fn_800EB8BC
void f_800EB8BC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800EB8BC
  return; // 800EB8C0
}

// fn_800EB8C4
void f_800EB8C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB8C4
  c->r[0]=c->lr; // 800EB8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB8CC
  c->lr=0x800EB8D4u; f_8018E4B8(c); // 800EB8D0
  c->r[3]=0u+0x00000000u; // 800EB8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB8D8
  c->lr=c->r[0]; // 800EB8DC
  c->r[1]=c->r[1]+0x00000010u; // 800EB8E0
  return; // 800EB8E4
}

// fn_800EB8E8
void f_800EB8E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB8E8
  c->r[0]=c->lr; // 800EB8EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB8F0
  c->lr=0x800EB8F8u; f_8018E4E4(c); // 800EB8F4
  c->lr=0x800EB8FCu; f_800BB0F8(c); // 800EB8F8
  c->r[3]=0u+0x00000000u; // 800EB8FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB900
  c->lr=c->r[0]; // 800EB904
  c->r[1]=c->r[1]+0x00000010u; // 800EB908
  return; // 800EB90C
}

// fn_800EB910
void f_800EB910(Ctx* __restrict c) {
  f_8018E510(c); return; // 800EB910
}

// fn_800EB914
void f_800EB914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB914
  c->r[0]=c->lr; // 800EB918
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB91C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB920
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EB924
  c->r[3]=c->r[31]|c->r[31]; // 800EB928
  c->lr=0x800EB930u; f_800BB088(c); // 800EB92C
  c->r[3]=c->r[31]|c->r[31]; // 800EB930
  c->lr=0x800EB938u; f_8018DCA0(c); // 800EB934
  c->lr=0x800EB93Cu; f_8018E48C(c); // 800EB938
  c->r[3]=0u+0x00000000u; // 800EB93C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EB940
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB944
  c->lr=c->r[0]; // 800EB948
  c->r[1]=c->r[1]+0x00000010u; // 800EB94C
  return; // 800EB950
}

// fn_800EB954
void f_800EB954(Ctx* __restrict c) {
  f_8018E53C(c); return; // 800EB954
}

// fn_800EB958
void f_800EB958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB958
  c->r[0]=c->lr; // 800EB95C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB960
  c->lr=0x800EB968u; f_8018E568(c); // 800EB964
  c->lr=0x800EB96Cu; f_800BB0F8(c); // 800EB968
  c->r[3]=0u+0x00000000u; // 800EB96C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB970
  c->lr=c->r[0]; // 800EB974
  c->r[1]=c->r[1]+0x00000010u; // 800EB978
  return; // 800EB97C
}

// fn_800EB980
void f_800EB980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB980
  c->r[0]=c->lr; // 800EB984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB988
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB98C
  c->lr=0x800EB994u; f_801B1A48(c); // 800EB990
  c->r[3]=0u+0x00000000u; // 800EB994
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB998
  c->lr=c->r[0]; // 800EB99C
  c->r[1]=c->r[1]+0x00000010u; // 800EB9A0
  return; // 800EB9A4
}

// fn_800EB9A8
void f_800EB9A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB9A8
  c->r[0]=c->lr; // 800EB9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB9B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EB9B4
  c->lr=0x800EB9BCu; f_801B1A7C(c); // 800EB9B8
  c->r[3]=0u+0x00000000u; // 800EB9BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EB9C0
  c->lr=c->r[0]; // 800EB9C4
  c->r[1]=c->r[1]+0x00000010u; // 800EB9C8
  return; // 800EB9CC
}

// fn_800EB9D0
void f_800EB9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EB9D0
  c->r[0]=c->lr; // 800EB9D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EB9D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EB9DC
  c->lr=0x800EB9E4u; f_800A23BC(c); // 800EB9E0
  c->lr=0x800EB9E8u; f_800A23B4(c); // 800EB9E4
  c->lr=0x800EB9ECu; f_800A2410(c); // 800EB9E8
  cmpu(c,0,c->r[3],0x00000002u); // 800EB9EC
  c->r[31]=0u+0x00000000u; // 800EB9F0
  if (!crb(c,2)) { goto L_800EB9FC; } // 800EB9F4
  c->r[31]=0u+0x00000005u; // 800EB9F8
L_800EB9FC:;
  c->r[3]=0u+0x00000001u; // 800EB9FC
  c->lr=0x800EBA04u; f_8005D9C8(c); // 800EBA00
  c->r[3]=c->r[31]|c->r[31]; // 800EBA04
  c->lr=0x800EBA0Cu; f_801B1AD4(c); // 800EBA08
  c->lr=0x800EBA10u; f_8007B524(c); // 800EBA0C
  c->r[4]=0u+0x00000000u; // 800EBA10
  c->lr=0x800EBA18u; f_800A60FC(c); // 800EBA14
  c->lr=0x800EBA1Cu; f_8007B524(c); // 800EBA18
  c->r[4]=c->r[31]|c->r[31]; // 800EBA1C
  c->lr=0x800EBA24u; f_800A4C48(c); // 800EBA20
  c->lr=0x800EBA28u; f_801B08A8(c); // 800EBA24
  c->r[3]=0u+0x00000000u; // 800EBA28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBA2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBA30
  c->lr=c->r[0]; // 800EBA34
  c->r[1]=c->r[1]+0x00000010u; // 800EBA38
  return; // 800EBA3C
}

// fn_800EBA40
void f_800EBA40(Ctx* __restrict c) {
  f_800E32E0(c); return; // 800EBA40
}

// fn_800EBA44
void f_800EBA44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBA44
  c->r[0]=c->lr; // 800EBA48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBA4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBA50
  c->lr=0x800EBA58u; f_800A23BC(c); // 800EBA54
  c->lr=0x800EBA5Cu; f_800A23B4(c); // 800EBA58
  c->lr=0x800EBA60u; f_800A2410(c); // 800EBA5C
  cmpu(c,0,c->r[3],0x00000002u); // 800EBA60
  c->r[31]=0u+0x00000001u; // 800EBA64
  if (!crb(c,2)) { goto L_800EBA70; } // 800EBA68
  c->r[31]=0u+0x00000006u; // 800EBA6C
L_800EBA70:;
  c->r[3]=0u+0x00000001u; // 800EBA70
  c->lr=0x800EBA78u; f_8005D9C8(c); // 800EBA74
  c->r[3]=c->r[31]|c->r[31]; // 800EBA78
  c->lr=0x800EBA80u; f_801B1AD4(c); // 800EBA7C
  c->lr=0x800EBA84u; f_8007B524(c); // 800EBA80
  c->r[4]=0u+0x00000000u; // 800EBA84
  c->lr=0x800EBA8Cu; f_800A60FC(c); // 800EBA88
  c->lr=0x800EBA90u; f_8007B524(c); // 800EBA8C
  c->r[4]=c->r[31]|c->r[31]; // 800EBA90
  c->lr=0x800EBA98u; f_800A4C48(c); // 800EBA94
  c->lr=0x800EBA9Cu; f_801B08A8(c); // 800EBA98
  c->r[3]=0u+0x00000000u; // 800EBA9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBAA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBAA4
  c->lr=c->r[0]; // 800EBAA8
  c->r[1]=c->r[1]+0x00000010u; // 800EBAAC
  return; // 800EBAB0
}

// fn_800EBAB4
void f_800EBAB4(Ctx* __restrict c) {
  f_800E32E0(c); return; // 800EBAB4
}

// fn_800EBAB8
void f_800EBAB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBAB8
  c->r[0]=c->lr; // 800EBABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBAC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBAC4
  c->lr=0x800EBACCu; f_800A23BC(c); // 800EBAC8
  c->lr=0x800EBAD0u; f_800A23B4(c); // 800EBACC
  c->lr=0x800EBAD4u; f_800A2410(c); // 800EBAD0
  cmpu(c,0,c->r[3],0x00000002u); // 800EBAD4
  c->r[31]=0u+0x00000002u; // 800EBAD8
  if (!crb(c,2)) { goto L_800EBAE4; } // 800EBADC
  c->r[31]=0u+0x00000007u; // 800EBAE0
L_800EBAE4:;
  c->r[3]=0u+0x00000001u; // 800EBAE4
  c->lr=0x800EBAECu; f_8005D9C8(c); // 800EBAE8
  c->r[3]=c->r[31]|c->r[31]; // 800EBAEC
  c->lr=0x800EBAF4u; f_801B1AD4(c); // 800EBAF0
  c->lr=0x800EBAF8u; f_8007B524(c); // 800EBAF4
  c->r[4]=0u+0x00000000u; // 800EBAF8
  c->lr=0x800EBB00u; f_800A60FC(c); // 800EBAFC
  c->lr=0x800EBB04u; f_8007B524(c); // 800EBB00
  c->r[4]=c->r[31]|c->r[31]; // 800EBB04
  c->lr=0x800EBB0Cu; f_800A4C48(c); // 800EBB08
  c->lr=0x800EBB10u; f_801B08A8(c); // 800EBB0C
  c->r[3]=0u+0x00000000u; // 800EBB10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBB14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBB18
  c->lr=c->r[0]; // 800EBB1C
  c->r[1]=c->r[1]+0x00000010u; // 800EBB20
  return; // 800EBB24
}

// fn_800EBB28
void f_800EBB28(Ctx* __restrict c) {
  f_800E32E0(c); return; // 800EBB28
}

// fn_800EBB2C
void f_800EBB2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBB2C
  c->r[0]=c->lr; // 800EBB30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBB34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBB38
  c->lr=0x800EBB40u; f_800A23BC(c); // 800EBB3C
  c->lr=0x800EBB44u; f_800A23B4(c); // 800EBB40
  c->lr=0x800EBB48u; f_800A2410(c); // 800EBB44
  cmpu(c,0,c->r[3],0x00000002u); // 800EBB48
  c->r[31]=0u+0x00000003u; // 800EBB4C
  if (!crb(c,2)) { goto L_800EBB58; } // 800EBB50
  c->r[31]=0u+0x00000008u; // 800EBB54
L_800EBB58:;
  c->r[3]=0u+0x00000001u; // 800EBB58
  c->lr=0x800EBB60u; f_8005D9C8(c); // 800EBB5C
  c->r[3]=c->r[31]|c->r[31]; // 800EBB60
  c->lr=0x800EBB68u; f_801B1AD4(c); // 800EBB64
  c->lr=0x800EBB6Cu; f_8007B524(c); // 800EBB68
  c->r[4]=0u+0x00000000u; // 800EBB6C
  c->lr=0x800EBB74u; f_800A60FC(c); // 800EBB70
  c->lr=0x800EBB78u; f_8007B524(c); // 800EBB74
  c->r[4]=c->r[31]|c->r[31]; // 800EBB78
  c->lr=0x800EBB80u; f_800A4C48(c); // 800EBB7C
  c->lr=0x800EBB84u; f_801B08A8(c); // 800EBB80
  c->r[3]=0u+0x00000000u; // 800EBB84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBB88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBB8C
  c->lr=c->r[0]; // 800EBB90
  c->r[1]=c->r[1]+0x00000010u; // 800EBB94
  return; // 800EBB98
}

// fn_800EBB9C
void f_800EBB9C(Ctx* __restrict c) {
  f_800E32E0(c); return; // 800EBB9C
}

// fn_800EBBA0
void f_800EBBA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBBA0
  c->r[0]=c->lr; // 800EBBA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBBA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBBAC
  c->lr=0x800EBBB4u; f_800A23BC(c); // 800EBBB0
  c->lr=0x800EBBB8u; f_800A23B4(c); // 800EBBB4
  c->lr=0x800EBBBCu; f_800A2410(c); // 800EBBB8
  cmpu(c,0,c->r[3],0x00000002u); // 800EBBBC
  c->r[31]=0u+0x00000004u; // 800EBBC0
  if (!crb(c,2)) { goto L_800EBBCC; } // 800EBBC4
  c->r[31]=0u+0x00000009u; // 800EBBC8
L_800EBBCC:;
  c->r[3]=0u+0x00000001u; // 800EBBCC
  c->lr=0x800EBBD4u; f_8005D9C8(c); // 800EBBD0
  c->r[3]=c->r[31]|c->r[31]; // 800EBBD4
  c->lr=0x800EBBDCu; f_801B1AD4(c); // 800EBBD8
  c->lr=0x800EBBE0u; f_8007B524(c); // 800EBBDC
  c->r[4]=0u+0x00000000u; // 800EBBE0
  c->lr=0x800EBBE8u; f_800A60FC(c); // 800EBBE4
  c->lr=0x800EBBECu; f_8007B524(c); // 800EBBE8
  c->r[4]=c->r[31]|c->r[31]; // 800EBBEC
  c->lr=0x800EBBF4u; f_800A4C48(c); // 800EBBF0
  c->lr=0x800EBBF8u; f_801B08A8(c); // 800EBBF4
  c->r[3]=0u+0x00000000u; // 800EBBF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC00
  c->lr=c->r[0]; // 800EBC04
  c->r[1]=c->r[1]+0x00000010u; // 800EBC08
  return; // 800EBC0C
}

// fn_800EBC10
void f_800EBC10(Ctx* __restrict c) {
  f_800E32E0(c); return; // 800EBC10
}

// fn_800EBC14
void f_800EBC14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC14
  c->r[0]=c->lr; // 800EBC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBC1C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBC20
  c->r[4]=0u+0x00000001u; // 800EBC24
  c->lr=0x800EBC2Cu; f_801C27B0(c); // 800EBC28
  c->r[3]=0u+0x00000000u; // 800EBC2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC30
  c->lr=c->r[0]; // 800EBC34
  c->r[1]=c->r[1]+0x00000010u; // 800EBC38
  return; // 800EBC3C
}

// fn_800EBC40
void f_800EBC40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC40
  c->r[0]=c->lr; // 800EBC44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBC48
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBC4C
  c->r[4]=0u+0x00000000u; // 800EBC50
  c->lr=0x800EBC58u; f_801C27B0(c); // 800EBC54
  c->r[3]=0u+0x00000000u; // 800EBC58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC5C
  c->lr=c->r[0]; // 800EBC60
  c->r[1]=c->r[1]+0x00000010u; // 800EBC64
  return; // 800EBC68
}

// fn_800EBC6C
void f_800EBC6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC6C
  c->r[0]=c->lr; // 800EBC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBC74
  c->r[3]=0u+0x00000001u; // 800EBC78
  c->lr=0x800EBC80u; f_8005D9C8(c); // 800EBC7C
  c->lr=0x800EBC84u; f_801C274C(c); // 800EBC80
  c->r[3]=0u+0x00000000u; // 800EBC84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBC88
  c->lr=c->r[0]; // 800EBC8C
  c->r[1]=c->r[1]+0x00000010u; // 800EBC90
  return; // 800EBC94
}

// fn_800EBC98
void f_800EBC98(Ctx* __restrict c) {
  f_801C2784(c); return; // 800EBC98
}

// fn_800EBC9C
void f_800EBC9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBC9C
  c->r[0]=c->lr; // 800EBCA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBCA4
  c->r[3]=0u+0x00000001u; // 800EBCA8
  c->lr=0x800EBCB0u; f_8005D9C8(c); // 800EBCAC
  c->lr=0x800EBCB4u; f_801CF868(c); // 800EBCB0
  c->r[3]=0u+0x00000000u; // 800EBCB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBCB8
  c->lr=c->r[0]; // 800EBCBC
  c->r[1]=c->r[1]+0x00000010u; // 800EBCC0
  return; // 800EBCC4
}

// fn_800EBCC8
void f_800EBCC8(Ctx* __restrict c) {
  f_801CF8A0(c); return; // 800EBCC8
}

// fn_800EBCCC
void f_800EBCCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBCCC
  c->r[0]=c->lr; // 800EBCD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBCD4
  c->r[3]=0u+0x00000001u; // 800EBCD8
  c->lr=0x800EBCE0u; f_8005D9C8(c); // 800EBCDC
  c->lr=0x800EBCE4u; f_801E0820(c); // 800EBCE0
  c->r[3]=0u+0x00000000u; // 800EBCE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBCE8
  c->lr=c->r[0]; // 800EBCEC
  c->r[1]=c->r[1]+0x00000010u; // 800EBCF0
  return; // 800EBCF4
}

// fn_800EBCF8
void f_800EBCF8(Ctx* __restrict c) {
  f_801E0858(c); return; // 800EBCF8
}

// fn_800EBCFC
void f_800EBCFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBCFC
  c->r[0]=c->lr; // 800EBD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBD04
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBD08
  c->lr=0x800EBD10u; f_801E1598(c); // 800EBD0C
  c->r[3]=0u+0x00000000u; // 800EBD10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD14
  c->lr=c->r[0]; // 800EBD18
  c->r[1]=c->r[1]+0x00000010u; // 800EBD1C
  return; // 800EBD20
}

// fn_800EBD24
void f_800EBD24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBD24
  c->r[0]=c->lr; // 800EBD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBD2C
  c->r[3]=0u+0x00000001u; // 800EBD30
  c->lr=0x800EBD38u; f_8005D9C8(c); // 800EBD34
  c->lr=0x800EBD3Cu; f_8007B524(c); // 800EBD38
  c->r[4]=0u+0x00000001u; // 800EBD3C
  c->lr=0x800EBD44u; f_800A60FC(c); // 800EBD40
  c->lr=0x800EBD48u; f_801B08A8(c); // 800EBD44
  c->r[3]=0u+0x00000000u; // 800EBD48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD4C
  c->lr=c->r[0]; // 800EBD50
  c->r[1]=c->r[1]+0x00000010u; // 800EBD54
  return; // 800EBD58
}

// fn_800EBD5C
void f_800EBD5C(Ctx* __restrict c) {
  f_800E32E0(c); return; // 800EBD5C
}

// fn_800EBD60
void f_800EBD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBD60
  c->r[0]=c->lr; // 800EBD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBD68
  c->lr=0x800EBD70u; f_801299E4(c); // 800EBD6C
  c->r[3]=0u+0x00000000u; // 800EBD70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD74
  c->lr=c->r[0]; // 800EBD78
  c->r[1]=c->r[1]+0x00000010u; // 800EBD7C
  return; // 800EBD80
}

// fn_800EBD84
void f_800EBD84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBD84
  c->r[0]=c->lr; // 800EBD88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBD8C
  c->lr=0x800EBD94u; f_80129A1C(c); // 800EBD90
  c->r[3]=0u+0x00000000u; // 800EBD94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBD98
  c->lr=c->r[0]; // 800EBD9C
  c->r[1]=c->r[1]+0x00000010u; // 800EBDA0
  return; // 800EBDA4
}

// fn_800EBDA8
void f_800EBDA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBDA8
  c->r[0]=c->lr; // 800EBDAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBDB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBDB4
  c->lr=0x800EBDBCu; f_8012C3BC(c); // 800EBDB8
  c->r[3]=0u+0x00000001u; // 800EBDBC
  c->lr=0x800EBDC4u; f_8012C380(c); // 800EBDC0
  c->r[3]=0u+0x00000000u; // 800EBDC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBDC8
  c->lr=c->r[0]; // 800EBDCC
  c->r[1]=c->r[1]+0x00000010u; // 800EBDD0
  return; // 800EBDD4
}

// fn_800EBDD8
void f_800EBDD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBDD8
  c->r[0]=c->lr; // 800EBDDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBDE0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBDE4
  c->r[4]=0u+0x00000000u; // 800EBDE8
  c->lr=0x800EBDF0u; f_8012C334(c); // 800EBDEC
  c->r[3]=0u+0x00000000u; // 800EBDF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBDF4
  c->lr=c->r[0]; // 800EBDF8
  c->r[1]=c->r[1]+0x00000010u; // 800EBDFC
  return; // 800EBE00
}

// fn_800EBE04
void f_800EBE04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBE04
  c->r[0]=c->lr; // 800EBE08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBE0C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBE10
  c->r[4]=0u+0x00000000u; // 800EBE14
  c->lr=0x800EBE1Cu; f_8012C334(c); // 800EBE18
  c->r[3]=0u+0x00000000u; // 800EBE1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBE20
  c->lr=c->r[0]; // 800EBE24
  c->r[1]=c->r[1]+0x00000010u; // 800EBE28
  return; // 800EBE2C
}

// fn_800EBE30
void f_800EBE30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBE30
  c->r[0]=c->lr; // 800EBE34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBE38
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBE3C
  c->r[4]=0u+0x00000001u; // 800EBE40
  c->lr=0x800EBE48u; f_8012C334(c); // 800EBE44
  c->r[3]=0u+0x00000000u; // 800EBE48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBE4C
  c->lr=c->r[0]; // 800EBE50
  c->r[1]=c->r[1]+0x00000010u; // 800EBE54
  return; // 800EBE58
}

// fn_800EBE5C
void f_800EBE5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBE5C
  c->r[0]=c->lr; // 800EBE60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBE64
  c->r[3]=0u+0x00000001u; // 800EBE68
  c->lr=0x800EBE70u; f_8005D9C8(c); // 800EBE6C
  c->lr=0x800EBE74u; f_8012C280(c); // 800EBE70
  c->r[3]=0u+0x00000000u; // 800EBE74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBE78
  c->lr=c->r[0]; // 800EBE7C
  c->r[1]=c->r[1]+0x00000010u; // 800EBE80
  return; // 800EBE84
}

// fn_800EBE88
void f_800EBE88(Ctx* __restrict c) {
  f_8012C2B8(c); return; // 800EBE88
}

// fn_800EBE8C
void f_800EBE8C(Ctx* __restrict c) {
  f_8012C2E4(c); return; // 800EBE8C
}

// fn_800EBE90
void f_800EBE90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBE90
  c->r[0]=c->lr; // 800EBE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBE98
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EBE9C
  c->lr=0x800EBEA4u; f_8012C380(c); // 800EBEA0
  c->r[3]=0u+0x00000000u; // 800EBEA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBEA8
  c->lr=c->r[0]; // 800EBEAC
  c->r[1]=c->r[1]+0x00000010u; // 800EBEB0
  return; // 800EBEB4
}

// fn_800EBEB8
void f_800EBEB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBEB8
  c->r[0]=c->lr; // 800EBEBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EBEC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EBEC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EBEC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EBECC
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EBED0
  c->r[30]=R32(c->r[3]+0x00000004u); // 800EBED4
  c->r[29]=R32(c->r[3]+0x00000008u); // 800EBED8
  c->r[3]=0u+0x00000000u; // 800EBEDC
  c->lr=0x800EBEE4u; f_8023BAAC(c); // 800EBEE0
  c->r[3]=c->r[31]|c->r[31]; // 800EBEE4
  c->lr=0x800EBEECu; f_8023B8EC(c); // 800EBEE8
  c->r[3]=c->r[30]|c->r[30]; // 800EBEEC
  c->lr=0x800EBEF4u; f_8023B9D8(c); // 800EBEF0
  c->r[3]=c->r[29]|c->r[29]; // 800EBEF4
  c->lr=0x800EBEFCu; f_8023BA28(c); // 800EBEF8
  c->r[3]=c->r[31]|c->r[31]; // 800EBEFC
  c->lr=0x800EBF04u; f_8023B954(c); // 800EBF00
  c->r[3]=0u+0x00000000u; // 800EBF04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EBF08
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EBF0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EBF10
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EBF14
  c->lr=c->r[0]; // 800EBF18
  c->r[1]=c->r[1]+0x00000020u; // 800EBF1C
  return; // 800EBF20
}

// fn_800EBF24
void f_800EBF24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBF24
  c->r[0]=c->lr; // 800EBF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EBF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EBF30
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EBF34
  c->r[3]=0u+0x00000001u; // 800EBF38
  c->lr=0x800EBF40u; f_8005D9C8(c); // 800EBF3C
  c->r[3]=0u+0x00000000u; // 800EBF40
  c->lr=0x800EBF48u; f_8023BAAC(c); // 800EBF44
  c->r[3]=0u+0x00000000u; // 800EBF48
  c->lr=0x800EBF50u; f_8023BA78(c); // 800EBF4C
  c->r[3]=0u+0x00000000u; // 800EBF50
  c->lr=0x800EBF58u; f_8023BAE0(c); // 800EBF54
  c->r[3]=c->r[31]|c->r[31]; // 800EBF58
  c->lr=0x800EBF60u; f_8023B988(c); // 800EBF5C
  c->lr=0x800EBF64u; f_8023B85C(c); // 800EBF60
  c->r[3]=0u+0x00000000u; // 800EBF64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EBF68
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EBF6C
  c->lr=c->r[0]; // 800EBF70
  c->r[1]=c->r[1]+0x00000010u; // 800EBF74
  return; // 800EBF78
}

// fn_800EBF7C
void f_800EBF7C(Ctx* __restrict c) {
  f_8023B894(c); return; // 800EBF7C
}

// fn_800EBF80
void f_800EBF80(Ctx* __restrict c) {
  f_8023B8C0(c); return; // 800EBF80
}

// fn_800EBF84
void f_800EBF84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EBF84
  c->r[0]=c->lr; // 800EBF88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EBF8C
  c->r[11]=c->r[1]+0x00000020u; // 800EBF90
  c->lr=0x800EBF98u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EBF94
  c->r[27]=c->r[3]|c->r[3]; // 800EBF98
  c->r[31]=R32(c->r[3]+0x00000004u); // 800EBF9C
  c->r[30]=R32(c->r[3]+0x00000008u); // 800EBFA0
  c->r[29]=R32(c->r[3]+0x0000000Cu); // 800EBFA4
  c->lr=0x800EBFACu; f_800A23BC(c); // 800EBFA8
  c->lr=0x800EBFB0u; f_800A23B4(c); // 800EBFAC
  c->r[4]=R32(c->r[27]+0x00000000u); // 800EBFB0
  c->lr=0x800EBFB8u; f_800BEDE0(c); // 800EBFB4
  c->r[28]=c->r[3]|c->r[3]; // 800EBFB8
  c->lr=0x800EBFC0u; f_800A23BC(c); // 800EBFBC
  c->lr=0x800EBFC4u; f_800A23B4(c); // 800EBFC0
  c->r[4]=c->r[28]|c->r[28]; // 800EBFC4
  c->lr=0x800EBFCCu; f_800BEDA0(c); // 800EBFC8
  c->lr=0x800EBFD0u; f_800CF5EC(c); // 800EBFCC
  c->r[27]=c->r[3]|c->r[3]; // 800EBFD0
  c->lr=0x800EBFD8u; f_800A23BC(c); // 800EBFD4
  c->lr=0x800EBFDCu; f_800A23B4(c); // 800EBFD8
  c->r[4]=c->r[28]|c->r[28]; // 800EBFDC
  c->lr=0x800EBFE4u; f_800BEDA0(c); // 800EBFE0
  c->lr=0x800EBFE8u; f_800CF5E4(c); // 800EBFE4
  c->r[28]=c->r[3]|c->r[3]; // 800EBFE8
  c->lr=0x800EBFF0u; f_8007B524(c); // 800EBFEC
  c->r[4]=c->r[27]|c->r[27]; // 800EBFF0
  c->lr=0x800EBFF8u; f_800A2380(c); // 800EBFF4
  cmps(c,0,(int32_t)c->r[29],0); // 800EBFF8
  if (crb(c,2)) { goto L_800EC004; } // 800EBFFC
  c->r[3]=0u+0x00000001u; // 800EC000
L_800EC004:;
  cmps(c,0,(int32_t)c->r[3],0); // 800EC004
  if (crb(c,2)) { goto L_800EC018; } // 800EC008
  c->r[3]=c->r[27]|c->r[27]; // 800EC00C
  c->lr=0x800EC014u; f_8023B8EC(c); // 800EC010
  goto L_800EC020; // 800EC014
L_800EC018:;
  c->r[3]=c->r[27]|c->r[27]; // 800EC018
  c->lr=0x800EC020u; f_8023B920(c); // 800EC01C
L_800EC020:;
  c->r[3]=c->r[28]|c->r[28]; // 800EC020
  c->lr=0x800EC028u; f_8023BAAC(c); // 800EC024
  c->r[3]=c->r[31]|c->r[31]; // 800EC028
  c->lr=0x800EC030u; f_8023B9D8(c); // 800EC02C
  c->r[3]=c->r[30]|c->r[30]; // 800EC030
  c->lr=0x800EC038u; f_8023BA28(c); // 800EC034
  c->r[3]=c->r[27]|c->r[27]; // 800EC038
  c->lr=0x800EC040u; f_8023B954(c); // 800EC03C
  c->r[3]=0u+0x00000000u; // 800EC040
  c->r[11]=c->r[1]+0x00000020u; // 800EC044
  c->lr=0x800EC04Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EC048
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC04C
  c->lr=c->r[0]; // 800EC050
  c->r[1]=c->r[1]+0x00000020u; // 800EC054
  return; // 800EC058
}

// fn_800EC05C
void f_800EC05C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC05C
  c->r[0]=c->lr; // 800EC060
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC064
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC068
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EC06C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EC070
  c->r[3]=0u+0x00000001u; // 800EC074
  c->lr=0x800EC07Cu; f_8005D9C8(c); // 800EC078
  c->lr=0x800EC080u; f_8007B524(c); // 800EC07C
  c->lr=0x800EC084u; f_8009DD48(c); // 800EC080
  cmps(c,0,(int32_t)c->r[3],0); // 800EC084
  if (!crb(c,2)) { goto L_800EC094; } // 800EC088
  c->r[3]=0u+0x00000000u; // 800EC08C
  goto L_800EC0B8; // 800EC090
L_800EC094:;
  c->r[4]=0u+0x00000000u; // 800EC094
  c->lr=0x800EC09Cu; f_8008E560(c); // 800EC098
  c->r[30]=c->r[3]|c->r[3]; // 800EC09C
  c->r[3]=c->r[31]|c->r[31]; // 800EC0A0
  c->lr=0x800EC0A8u; f_8023B988(c); // 800EC0A4
  c->r[3]=c->r[30]|c->r[30]; // 800EC0A8
  c->lr=0x800EC0B0u; f_8023BA78(c); // 800EC0AC
  c->lr=0x800EC0B4u; f_8023B85C(c); // 800EC0B0
  c->r[3]=0u+0x00000000u; // 800EC0B4
L_800EC0B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC0B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EC0BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC0C0
  c->lr=c->r[0]; // 800EC0C4
  c->r[1]=c->r[1]+0x00000010u; // 800EC0C8
  return; // 800EC0CC
}

// fn_800EC0D0
void f_800EC0D0(Ctx* __restrict c) {
  f_8023B894(c); return; // 800EC0D0
}

// fn_800EC0D4
void f_800EC0D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC0D4
  c->r[0]=c->lr; // 800EC0D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC0DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC0E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC0E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC0E8
  c->lr=0x800EC0F0u; f_8023B8C0(c); // 800EC0EC
  c->r[31]=c->r[3]|c->r[3]; // 800EC0F0
  c->lr=0x800EC0F8u; f_800A23BC(c); // 800EC0F4
  c->lr=0x800EC0FCu; f_800A23B4(c); // 800EC0F8
  c->lr=0x800EC100u; f_800BEE64(c); // 800EC0FC
  c->r[30]=c->r[3]|c->r[3]; // 800EC100
  goto L_800EC158; // 800EC104
L_800EC108:;
  c->lr=0x800EC10Cu; f_800A23BC(c); // 800EC108
  c->lr=0x800EC110u; f_800A23B4(c); // 800EC10C
  c->r[4]=c->r[30]|c->r[30]; // 800EC110
  c->lr=0x800EC118u; f_800BEDA0(c); // 800EC114
  c->r[29]=c->r[3]|c->r[3]; // 800EC118
  c->lr=0x800EC120u; f_800CF580(c); // 800EC11C
  cmps(c,0,(int32_t)c->r[3],4); // 800EC120
  if (!crb(c,2)) { goto L_800EC144; } // 800EC124
  c->r[3]=c->r[29]|c->r[29]; // 800EC128
  c->lr=0x800EC130u; f_800CF5EC(c); // 800EC12C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800EC130
  if (!crb(c,2)) { goto L_800EC144; } // 800EC134
  c->r[3]=c->r[29]|c->r[29]; // 800EC138
  c->lr=0x800EC140u; f_800BDEC4(c); // 800EC13C
  goto L_800EC164; // 800EC140
L_800EC144:;
  c->lr=0x800EC148u; f_800A23BC(c); // 800EC144
  c->lr=0x800EC14Cu; f_800A23B4(c); // 800EC148
  c->r[4]=c->r[30]|c->r[30]; // 800EC14C
  c->lr=0x800EC154u; f_800BEE9C(c); // 800EC150
  c->r[30]=c->r[3]|c->r[3]; // 800EC154
L_800EC158:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EC158
  if (!crb(c,2)) { IRQCHK(c); goto L_800EC108; } // 800EC15C
  c->r[3]=0u+0x00000000u; // 800EC160
L_800EC164:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC164
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EC168
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EC16C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC170
  c->lr=c->r[0]; // 800EC174
  c->r[1]=c->r[1]+0x00000020u; // 800EC178
  return; // 800EC17C
}

// fn_800EC180
void f_800EC180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC180
  c->r[0]=c->lr; // 800EC184
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC188
  c->r[3]=0u+0x00000001u; // 800EC18C
  c->lr=0x800EC194u; f_8005D9C8(c); // 800EC190
  c->lr=0x800EC198u; f_801D6E84(c); // 800EC194
  c->r[3]=0u+0x00000000u; // 800EC198
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC19C
  c->lr=c->r[0]; // 800EC1A0
  c->r[1]=c->r[1]+0x00000010u; // 800EC1A4
  return; // 800EC1A8
}

// fn_800EC1AC
void f_800EC1AC(Ctx* __restrict c) {
  f_801D6EBC(c); return; // 800EC1AC
}

// fn_800EC1B0
void f_800EC1B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC1B0
  c->r[0]=c->lr; // 800EC1B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC1B8
  c->r[3]=0u+0x00000001u; // 800EC1BC
  c->lr=0x800EC1C4u; f_8005D9C8(c); // 800EC1C0
  c->lr=0x800EC1C8u; f_80225F80(c); // 800EC1C4
  c->r[3]=0u+0x00000000u; // 800EC1C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC1CC
  c->lr=c->r[0]; // 800EC1D0
  c->r[1]=c->r[1]+0x00000010u; // 800EC1D4
  return; // 800EC1D8
}

// fn_800EC1DC
void f_800EC1DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC1DC
  c->r[0]=c->lr; // 800EC1E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC1E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC1E8
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EC1EC
  c->r[3]=c->r[31]|c->r[31]; // 800EC1F0
  c->lr=0x800EC1F8u; f_800BB088(c); // 800EC1F4
  c->r[3]=c->r[31]|c->r[31]; // 800EC1F8
  c->lr=0x800EC200u; f_80226010(c); // 800EC1FC
  c->r[3]=0u+0x00000000u; // 800EC200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC204
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC208
  c->lr=c->r[0]; // 800EC20C
  c->r[1]=c->r[1]+0x00000010u; // 800EC210
  return; // 800EC214
}

// fn_800EC218
void f_800EC218(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC218
  c->r[0]=c->lr; // 800EC21C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC220
  c->lr=0x800EC228u; f_80225FE4(c); // 800EC224
  c->lr=0x800EC22Cu; f_800BB0F8(c); // 800EC228
  c->r[3]=0u+0x00000000u; // 800EC22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC230
  c->lr=c->r[0]; // 800EC234
  c->r[1]=c->r[1]+0x00000010u; // 800EC238
  return; // 800EC23C
}

// fn_800EC240
void f_800EC240(Ctx* __restrict c) {
  f_80225FB8(c); return; // 800EC240
}

// fn_800EC244
void f_800EC244(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC244
  c->r[0]=c->lr; // 800EC248
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC24C
  c->lr=0x800EC254u; f_8007B524(c); // 800EC250
  c->lr=0x800EC258u; f_800A1378(c); // 800EC254
  c->r[3]=0u+0x00000000u; // 800EC258
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC25C
  c->lr=c->r[0]; // 800EC260
  c->r[1]=c->r[1]+0x00000010u; // 800EC264
  return; // 800EC268
}

// fn_800EC26C
void f_800EC26C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC26C
  c->r[0]=c->lr; // 800EC270
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC278
  c->r[31]=c->r[3]|c->r[3]; // 800EC27C
  c->lr=0x800EC284u; f_8007B524(c); // 800EC280
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC284
  c->lr=0x800EC28Cu; f_800ED52C(c); // 800EC288
  c->r[31]=c->r[3]|c->r[3]; // 800EC28C
  c->lr=0x800EC294u; f_8007B524(c); // 800EC290
  c->r[4]=0u+0x00000014u; // 800EC294
  c->r[5]=c->r[31]|c->r[31]; // 800EC298
  c->lr=0x800EC2A0u; f_802238E0(c); // 800EC29C
  c->r[3]=0u+0x00000000u; // 800EC2A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC2A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC2A8
  c->lr=c->r[0]; // 800EC2AC
  c->r[1]=c->r[1]+0x00000010u; // 800EC2B0
  return; // 800EC2B4
}

// fn_800EC2B8
void f_800EC2B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC2B8
  c->r[0]=c->lr; // 800EC2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC2C0
  c->lr=0x800EC2C8u; f_8007B524(c); // 800EC2C4
  c->lr=0x800EC2CCu; f_80223970(c); // 800EC2C8
  c->r[3]=0u+0x00000000u; // 800EC2CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC2D0
  c->lr=c->r[0]; // 800EC2D4
  c->r[1]=c->r[1]+0x00000010u; // 800EC2D8
  return; // 800EC2DC
}

// fn_800EC2E0
void f_800EC2E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC2E0
  c->r[0]=c->lr; // 800EC2E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC2E8
  c->r[3]=0u+0x00000001u; // 800EC2EC
  c->lr=0x800EC2F4u; f_8005D9C8(c); // 800EC2F0
  c->lr=0x800EC2F8u; f_8007B524(c); // 800EC2F4
  c->lr=0x800EC2FCu; f_8022394C(c); // 800EC2F8
  c->r[3]=0u+0x00000000u; // 800EC2FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC300
  c->lr=c->r[0]; // 800EC304
  c->r[1]=c->r[1]+0x00000010u; // 800EC308
  return; // 800EC30C
}

// fn_800EC310
void f_800EC310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC310
  c->r[0]=c->lr; // 800EC314
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC318
  c->lr=0x800EC320u; f_8007B524(c); // 800EC31C
  c->lr=0x800EC324u; f_80223954(c); // 800EC320
  c->r[3]=0u+0x00000000u; // 800EC324
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC328
  c->lr=c->r[0]; // 800EC32C
  c->r[1]=c->r[1]+0x00000010u; // 800EC330
  return; // 800EC334
}

// fn_800EC338
void f_800EC338(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC338
  c->r[0]=c->lr; // 800EC33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC340
  c->lr=0x800EC348u; f_8007B524(c); // 800EC344
  c->lr=0x800EC34Cu; f_8022395C(c); // 800EC348
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC34C
  c->lr=c->r[0]; // 800EC350
  c->r[1]=c->r[1]+0x00000010u; // 800EC354
  return; // 800EC358
}

// fn_800EC35C
void f_800EC35C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC35C
  c->r[0]=c->lr; // 800EC360
  W32(c->r[1]+0x00000214u,c->r[0]); // 800EC364
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 800EC368
  W32(c->r[1]+0x00000208u,c->r[30]); // 800EC36C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EC370
  c->lr=0x800EC378u; f_8007B524(c); // 800EC374
  c->lr=0x800EC37Cu; f_80223944(c); // 800EC378
  c->r[30]=c->r[3]|c->r[3]; // 800EC37C
  c->lr=0x800EC384u; f_8007B524(c); // 800EC380
  c->r[4]=c->r[31]|c->r[31]; // 800EC384
  c->lr=0x800EC38Cu; f_800ED52C(c); // 800EC388
  c->r[31]=c->r[3]|c->r[3]; // 800EC38C
  c->lr=0x800EC394u; f_802F0250(c); // 800EC390
  c->r[6]=c->r[3]|c->r[3]; // 800EC394
  c->r[3]=c->r[1]+0x00000108u; // 800EC398
  c->r[4]=0u+0x00000100u; // 800EC39C
  c->r[5]=c->r[31]|c->r[31]; // 800EC3A0
  c->lr=0x800EC3A8u; f_800E3360(c); // 800EC3A4
  c->r[3]=c->r[30]|c->r[30]; // 800EC3A8
  c->lr=0x800EC3B0u; f_802F0250(c); // 800EC3AC
  c->r[6]=c->r[3]|c->r[3]; // 800EC3B0
  c->r[3]=c->r[1]+0x00000008u; // 800EC3B4
  c->r[4]=0u+0x00000100u; // 800EC3B8
  c->r[5]=c->r[30]|c->r[30]; // 800EC3BC
  c->lr=0x800EC3C4u; f_800E3360(c); // 800EC3C0
  c->r[3]=c->r[1]+0x00000108u; // 800EC3C4
  c->r[4]=c->r[1]+0x00000008u; // 800EC3C8
  c->lr=0x800EC3D0u; f_802E96C4(c); // 800EC3CC
  c->r[0]=cntlz(c->r[3]); // 800EC3D0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EC3D4
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 800EC3D8
  c->r[30]=R32(c->r[1]+0x00000208u); // 800EC3DC
  c->r[0]=R32(c->r[1]+0x00000214u); // 800EC3E0
  c->lr=c->r[0]; // 800EC3E4
  c->r[1]=c->r[1]+0x00000210u; // 800EC3E8
  return; // 800EC3EC
}

// fn_800EC3F0
void f_800EC3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC3F0
  c->r[0]=c->lr; // 800EC3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC3FC
  c->r[31]=c->r[3]|c->r[3]; // 800EC400
  c->lr=0x800EC408u; f_8006592C(c); // 800EC404
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC408
  c->r[5]=0u+0xFFFFFFFFu; // 800EC40C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800EC410
  c->lr=0x800EC418u; f_80048BF8(c); // 800EC414
  c->r[3]=0u+0x00000000u; // 800EC418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC41C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC420
  c->lr=c->r[0]; // 800EC424
  c->r[1]=c->r[1]+0x00000010u; // 800EC428
  return; // 800EC42C
}

// fn_800EC430
void f_800EC430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC430
  c->r[0]=c->lr; // 800EC434
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC438
  c->lr=0x800EC440u; f_8006592C(c); // 800EC43C
  c->r[4]=0u+0x00000000u; // 800EC440
  c->lr=0x800EC448u; f_80048E5C(c); // 800EC444
  c->r[3]=0u+0x00000000u; // 800EC448
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC44C
  c->lr=c->r[0]; // 800EC450
  c->r[1]=c->r[1]+0x00000010u; // 800EC454
  return; // 800EC458
}

// fn_800EC45C
void f_800EC45C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC45C
  c->r[0]=c->lr; // 800EC460
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC464
  c->lr=0x800EC46Cu; f_8006592C(c); // 800EC468
  c->r[4]=0u+0x00000004u; // 800EC46C
  c->lr=0x800EC474u; f_80048D00(c); // 800EC470
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC474
  c->lr=c->r[0]; // 800EC478
  c->r[1]=c->r[1]+0x00000010u; // 800EC47C
  return; // 800EC480
}

// fn_800EC484
void f_800EC484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC484
  c->r[0]=c->lr; // 800EC488
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC48C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EC490
  c->lr=0x800EC498u; f_800BAC4C(c); // 800EC494
  c->r[3]=0u+0x00000000u; // 800EC498
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC49C
  c->lr=c->r[0]; // 800EC4A0
  c->r[1]=c->r[1]+0x00000010u; // 800EC4A4
  return; // 800EC4A8
}

// fn_800EC4AC
void f_800EC4AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC4AC
  c->r[0]=c->lr; // 800EC4B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC4B4
  c->lr=0x800EC4BCu; f_800A23BC(c); // 800EC4B8
  c->lr=0x800EC4C0u; f_800BB828(c); // 800EC4BC
  c->r[4]=0u+0x00000002u; // 800EC4C0
  c->lr=0x800EC4C8u; f_800E1DD4(c); // 800EC4C4
  c->r[3]=0u+0x00000000u; // 800EC4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC4CC
  c->lr=c->r[0]; // 800EC4D0
  c->r[1]=c->r[1]+0x00000010u; // 800EC4D4
  return; // 800EC4D8
}

// fn_800EC4DC
void f_800EC4DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC4DC
  c->r[0]=c->lr; // 800EC4E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC4E4
  c->lr=0x800EC4ECu; f_800A23BC(c); // 800EC4E8
  c->lr=0x800EC4F0u; f_800BB828(c); // 800EC4EC
  c->r[4]=0u+0x00000000u; // 800EC4F0
  c->lr=0x800EC4F8u; f_800E1E14(c); // 800EC4F4
  c->r[3]=0u+0x00000000u; // 800EC4F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC4FC
  c->lr=c->r[0]; // 800EC500
  c->r[1]=c->r[1]+0x00000010u; // 800EC504
  return; // 800EC508
}

// fn_800EC50C
void f_800EC50C(Ctx* __restrict c) {
  f_800BACD8(c); return; // 800EC50C
}

// fn_800EC510
void f_800EC510(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC510
  c->r[0]=c->lr; // 800EC514
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC518
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC51C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC520
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC524
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EC528
  c->r[30]=R32(c->r[3]+0x00000004u); // 800EC52C
  c->r[3]=c->r[31]|c->r[31]; // 800EC530
  c->r[4]=c->r[13]+0xFFFF8D34u; // 800EC534
  c->lr=0x800EC53Cu; f_802E96C4(c); // 800EC538
  cmps(c,0,(int32_t)c->r[3],0); // 800EC53C
  if (!crb(c,2)) { goto L_800EC54C; } // 800EC540
  c->r[29]=0u+0x00000001u; // 800EC544
  goto L_800EC588; // 800EC548
L_800EC54C:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC54C
  c->r[4]=c->r[13]+0xFFFF8D38u; // 800EC550
  c->lr=0x800EC558u; f_802E96C4(c); // 800EC554
  cmps(c,0,(int32_t)c->r[3],0); // 800EC558
  if (!crb(c,2)) { goto L_800EC568; } // 800EC55C
  c->r[29]=0u+0x00000000u; // 800EC560
  goto L_800EC588; // 800EC564
L_800EC568:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC568
  c->r[4]=c->r[13]+0xFFFF8D20u; // 800EC56C
  c->r[5]=0u+0x00000005u; // 800EC570
  c->lr=0x800EC578u; f_802E97E0(c); // 800EC574
  cmps(c,0,(int32_t)c->r[3],0); // 800EC578
  c->r[29]=0u+0xFFFFFFFFu; // 800EC57C
  if (!crb(c,2)) { goto L_800EC588; } // 800EC580
  c->r[29]=0u+0x00000002u; // 800EC584
L_800EC588:;
  c->lr=0x800EC58Cu; f_800A23BC(c); // 800EC588
  c->lr=0x800EC590u; f_800BB828(c); // 800EC58C
  c->r[4]=c->r[31]|c->r[31]; // 800EC590
  c->r[5]=c->r[30]|c->r[30]; // 800EC594
  c->r[6]=c->r[29]|c->r[29]; // 800EC598
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC59C
  c->lr=0x800EC5A4u; f_800E1ABC(c); // 800EC5A0
  c->r[3]=0u+0x00000000u; // 800EC5A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC5A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EC5AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EC5B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC5B4
  c->lr=c->r[0]; // 800EC5B8
  c->r[1]=c->r[1]+0x00000020u; // 800EC5BC
  return; // 800EC5C0
}

// fn_800EC5C4
void f_800EC5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC5C4
  c->r[0]=c->lr; // 800EC5C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC5CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC5D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EC5D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EC5D8
  c->r[31]=R32(c->r[3]+0x00000000u); // 800EC5DC
  c->r[30]=R32(c->r[3]+0x00000004u); // 800EC5E0
  c->r[3]=c->r[31]|c->r[31]; // 800EC5E4
  c->r[4]=c->r[13]+0xFFFF8D34u; // 800EC5E8
  c->lr=0x800EC5F0u; f_802E96C4(c); // 800EC5EC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC5F0
  if (!crb(c,2)) { goto L_800EC600; } // 800EC5F4
  c->r[29]=0u+0x00000001u; // 800EC5F8
  goto L_800EC63C; // 800EC5FC
L_800EC600:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC600
  c->r[4]=c->r[13]+0xFFFF8D38u; // 800EC604
  c->lr=0x800EC60Cu; f_802E96C4(c); // 800EC608
  cmps(c,0,(int32_t)c->r[3],0); // 800EC60C
  if (!crb(c,2)) { goto L_800EC61C; } // 800EC610
  c->r[29]=0u+0x00000000u; // 800EC614
  goto L_800EC63C; // 800EC618
L_800EC61C:;
  c->r[3]=c->r[31]|c->r[31]; // 800EC61C
  c->r[4]=c->r[13]+0xFFFF8D20u; // 800EC620
  c->r[5]=0u+0x00000005u; // 800EC624
  c->lr=0x800EC62Cu; f_802E97E0(c); // 800EC628
  cmps(c,0,(int32_t)c->r[3],0); // 800EC62C
  c->r[29]=0u+0xFFFFFFFFu; // 800EC630
  if (!crb(c,2)) { goto L_800EC63C; } // 800EC634
  c->r[29]=0u+0x00000002u; // 800EC638
L_800EC63C:;
  c->lr=0x800EC640u; f_800A23BC(c); // 800EC63C
  c->lr=0x800EC644u; f_800BB828(c); // 800EC640
  c->r[4]=c->r[31]|c->r[31]; // 800EC644
  c->r[5]=c->r[30]|c->r[30]; // 800EC648
  c->r[6]=c->r[29]|c->r[29]; // 800EC64C
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EC650
  c->lr=0x800EC658u; f_800E1ABC(c); // 800EC654
  c->r[3]=0u+0x00000000u; // 800EC658
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC65C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EC660
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EC664
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC668
  c->lr=c->r[0]; // 800EC66C
  c->r[1]=c->r[1]+0x00000020u; // 800EC670
  return; // 800EC674
}

// fn_800EC678
void f_800EC678(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC678
  c->r[0]=c->lr; // 800EC67C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC680
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC684
  c->r[31]=c->r[3]|c->r[3]; // 800EC688
  c->lr=0x800EC690u; f_8006592C(c); // 800EC68C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC690
  c->r[5]=0u+0x00000000u; // 800EC694
  c->r[6]=0u+0xFFFFFFFFu; // 800EC698
  c->r[7]=0u+0xFFFFFFFFu; // 800EC69C
  c->lr=0x800EC6A4u; f_80048F20(c); // 800EC6A0
  c->r[3]=0u+0x00000000u; // 800EC6A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC6A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC6AC
  c->lr=c->r[0]; // 800EC6B0
  c->r[1]=c->r[1]+0x00000010u; // 800EC6B4
  return; // 800EC6B8
}

// fn_800EC6BC
void f_800EC6BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC6BC
  c->r[0]=c->lr; // 800EC6C0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EC6C4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800EC6C8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800EC6CC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800EC6D0
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800EC6D4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 800EC6D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 800EC6DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EC6E0
  c->r[31]=c->r[3]|c->r[3]; // 800EC6E4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC6E8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[30]=c->ps1[30]=RF32(ea);} // 800EC6EC
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800EC6F0
  c->lr=0x800EC6F8u; f_8006592C(c); // 800EC6F4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC6F8
  c->r[5]=0u+0x00000000u; // 800EC6FC
  c->r[6]=0u+0xFFFFFFFFu; // 800EC700
  c->r[7]=0u+0xFFFFFFFFu; // 800EC704
  c->lr=0x800EC70Cu; f_80048F20(c); // 800EC708
  c->r[31]=c->r[3]|c->r[3]; // 800EC70C
  cmps(c,0,(int32_t)c->r[3],0); // 800EC710
  if (crb(c,2)) { goto L_800EC738; } // 800EC714
  c->f[1]=c->f[31]; // 800EC718
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[30],true)); // 800EC71C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800EC720
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800EC724
  c->lr=0x800EC72Cu; f_8005AB88(c); // 800EC728
  c->r[3]=c->r[31]|c->r[31]; // 800EC72C
  c->f[1]=c->f[29]; // 800EC730
  c->lr=0x800EC738u; f_8005AC90(c); // 800EC734
L_800EC738:;
  c->r[3]=0u+0x00000000u; // 800EC738
  c->r[0]=0u+0x00000048u; // 800EC73C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EC740
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800EC744
  c->r[0]=0u+0x00000038u; // 800EC748
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800EC74C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800EC750
  c->r[0]=0u+0x00000028u; // 800EC754
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800EC758
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 800EC75C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EC760
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EC764
  c->lr=c->r[0]; // 800EC768
  c->r[1]=c->r[1]+0x00000050u; // 800EC76C
  return; // 800EC770
}

// fn_800EC774
void f_800EC774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC774
  c->r[0]=c->lr; // 800EC778
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EC77C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EC780
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EC784
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800EC788
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800EC78C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800EC790
  c->lr=0x800EC798u; f_800BAD00(c); // 800EC794
  c->r[3]=0u+0x00000000u; // 800EC798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EC79C
  c->lr=c->r[0]; // 800EC7A0
  c->r[1]=c->r[1]+0x00000010u; // 800EC7A4
  return; // 800EC7A8
}

// fn_800EC7AC
void f_800EC7AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC7AC
  c->r[0]=c->lr; // 800EC7B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC7B4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EC7B8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EC7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC7C0
  c->r[31]=c->r[3]|c->r[3]; // 800EC7C4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC7C8
  c->lr=0x800EC7D0u; f_800A23BC(c); // 800EC7CC
  c->lr=0x800EC7D4u; f_800BB828(c); // 800EC7D0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC7D4
  c->lr=0x800EC7DCu; f_800BB9DC(c); // 800EC7D8
  c->r[31]=c->r[3]|c->r[3]; // 800EC7DC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC7E0
  if (crb(c,2)) { goto L_800EC800; } // 800EC7E4
  c->lr=0x800EC7ECu; f_800A23BC(c); // 800EC7E8
  c->lr=0x800EC7F0u; f_800BB828(c); // 800EC7EC
  c->r[4]=c->r[31]|c->r[31]; // 800EC7F0
  c->lr=0x800EC7F8u; f_800BB99C(c); // 800EC7F4
  c->f[1]=c->f[31]; // 800EC7F8
  c->lr=0x800EC800u; f_800E18E8(c); // 800EC7FC
L_800EC800:;
  c->r[3]=0u+0x00000000u; // 800EC800
  c->r[0]=0u+0x00000018u; // 800EC804
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EC808
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EC80C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC810
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC814
  c->lr=c->r[0]; // 800EC818
  c->r[1]=c->r[1]+0x00000020u; // 800EC81C
  return; // 800EC820
}

// fn_800EC824
void f_800EC824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC824
  c->r[0]=c->lr; // 800EC828
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC82C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EC830
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EC834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC838
  c->r[31]=c->r[3]|c->r[3]; // 800EC83C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC840
  c->lr=0x800EC848u; f_800A23BC(c); // 800EC844
  c->lr=0x800EC84Cu; f_800BB828(c); // 800EC848
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC84C
  c->lr=0x800EC854u; f_800BB9DC(c); // 800EC850
  c->r[31]=c->r[3]|c->r[3]; // 800EC854
  cmps(c,0,(int32_t)c->r[3],0); // 800EC858
  if (crb(c,2)) { goto L_800EC878; } // 800EC85C
  c->lr=0x800EC864u; f_800A23BC(c); // 800EC860
  c->lr=0x800EC868u; f_800BB828(c); // 800EC864
  c->r[4]=c->r[31]|c->r[31]; // 800EC868
  c->lr=0x800EC870u; f_800BB99C(c); // 800EC86C
  c->f[1]=c->f[31]; // 800EC870
  c->lr=0x800EC878u; f_800E18FC(c); // 800EC874
L_800EC878:;
  c->r[3]=0u+0x00000000u; // 800EC878
  c->r[0]=0u+0x00000018u; // 800EC87C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EC880
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EC884
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC888
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC88C
  c->lr=c->r[0]; // 800EC890
  c->r[1]=c->r[1]+0x00000020u; // 800EC894
  return; // 800EC898
}

// fn_800EC89C
void f_800EC89C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC89C
  c->r[0]=c->lr; // 800EC8A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC8A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EC8A8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EC8AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC8B0
  c->r[31]=c->r[3]|c->r[3]; // 800EC8B4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC8B8
  c->lr=0x800EC8C0u; f_800A23BC(c); // 800EC8BC
  c->lr=0x800EC8C4u; f_800BB828(c); // 800EC8C0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC8C4
  c->lr=0x800EC8CCu; f_800BB9DC(c); // 800EC8C8
  c->r[31]=c->r[3]|c->r[3]; // 800EC8CC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC8D0
  if (crb(c,2)) { goto L_800EC8F0; } // 800EC8D4
  c->lr=0x800EC8DCu; f_800A23BC(c); // 800EC8D8
  c->lr=0x800EC8E0u; f_800BB828(c); // 800EC8DC
  c->r[4]=c->r[31]|c->r[31]; // 800EC8E0
  c->lr=0x800EC8E8u; f_800BB99C(c); // 800EC8E4
  c->f[1]=c->f[31]; // 800EC8E8
  c->lr=0x800EC8F0u; f_800E190C(c); // 800EC8EC
L_800EC8F0:;
  c->r[3]=0u+0x00000000u; // 800EC8F0
  c->r[0]=0u+0x00000018u; // 800EC8F4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EC8F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EC8FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC900
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC904
  c->lr=c->r[0]; // 800EC908
  c->r[1]=c->r[1]+0x00000020u; // 800EC90C
  return; // 800EC910
}

// fn_800EC914
void f_800EC914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC914
  c->r[0]=c->lr; // 800EC918
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC91C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EC920
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EC924
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC928
  c->r[31]=c->r[3]|c->r[3]; // 800EC92C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC930
  c->lr=0x800EC938u; f_800A23BC(c); // 800EC934
  c->lr=0x800EC93Cu; f_800BB828(c); // 800EC938
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC93C
  c->lr=0x800EC944u; f_800BB9DC(c); // 800EC940
  c->r[31]=c->r[3]|c->r[3]; // 800EC944
  cmps(c,0,(int32_t)c->r[3],0); // 800EC948
  if (crb(c,2)) { goto L_800EC968; } // 800EC94C
  c->lr=0x800EC954u; f_800A23BC(c); // 800EC950
  c->lr=0x800EC958u; f_800BB828(c); // 800EC954
  c->r[4]=c->r[31]|c->r[31]; // 800EC958
  c->lr=0x800EC960u; f_800BB99C(c); // 800EC95C
  c->f[1]=c->f[31]; // 800EC960
  c->lr=0x800EC968u; f_800E1928(c); // 800EC964
L_800EC968:;
  c->r[3]=0u+0x00000000u; // 800EC968
  c->r[0]=0u+0x00000018u; // 800EC96C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EC970
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EC974
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC978
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC97C
  c->lr=c->r[0]; // 800EC980
  c->r[1]=c->r[1]+0x00000020u; // 800EC984
  return; // 800EC988
}

// fn_800EC98C
void f_800EC98C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC98C
  c->r[0]=c->lr; // 800EC990
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EC994
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800EC998
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800EC99C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EC9A0
  c->r[31]=c->r[3]|c->r[3]; // 800EC9A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EC9A8
  c->lr=0x800EC9B0u; f_800A23BC(c); // 800EC9AC
  c->lr=0x800EC9B4u; f_800BB828(c); // 800EC9B0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EC9B4
  c->lr=0x800EC9BCu; f_800BB9DC(c); // 800EC9B8
  c->r[31]=c->r[3]|c->r[3]; // 800EC9BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EC9C0
  if (crb(c,2)) { goto L_800EC9E0; } // 800EC9C4
  c->lr=0x800EC9CCu; f_800A23BC(c); // 800EC9C8
  c->lr=0x800EC9D0u; f_800BB828(c); // 800EC9CC
  c->r[4]=c->r[31]|c->r[31]; // 800EC9D0
  c->lr=0x800EC9D8u; f_800BB99C(c); // 800EC9D4
  c->f[1]=c->f[31]; // 800EC9D8
  c->lr=0x800EC9E0u; f_800E193C(c); // 800EC9DC
L_800EC9E0:;
  c->r[3]=0u+0x00000000u; // 800EC9E0
  c->r[0]=0u+0x00000018u; // 800EC9E4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EC9E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800EC9EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EC9F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EC9F4
  c->lr=c->r[0]; // 800EC9F8
  c->r[1]=c->r[1]+0x00000020u; // 800EC9FC
  return; // 800ECA00
}

// fn_800ECA04
void f_800ECA04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECA04
  c->r[0]=c->lr; // 800ECA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECA0C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800ECA10
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800ECA14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECA18
  c->r[31]=c->r[3]|c->r[3]; // 800ECA1C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800ECA20
  c->lr=0x800ECA28u; f_800A23BC(c); // 800ECA24
  c->lr=0x800ECA2Cu; f_800BB828(c); // 800ECA28
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECA2C
  c->lr=0x800ECA34u; f_800BB9DC(c); // 800ECA30
  c->r[31]=c->r[3]|c->r[3]; // 800ECA34
  cmps(c,0,(int32_t)c->r[3],0); // 800ECA38
  if (crb(c,2)) { goto L_800ECA58; } // 800ECA3C
  c->lr=0x800ECA44u; f_800A23BC(c); // 800ECA40
  c->lr=0x800ECA48u; f_800BB828(c); // 800ECA44
  c->r[4]=c->r[31]|c->r[31]; // 800ECA48
  c->lr=0x800ECA50u; f_800BB99C(c); // 800ECA4C
  c->f[1]=c->f[31]; // 800ECA50
  c->lr=0x800ECA58u; f_800E194C(c); // 800ECA54
L_800ECA58:;
  c->r[3]=0u+0x00000000u; // 800ECA58
  c->r[0]=0u+0x00000018u; // 800ECA5C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800ECA60
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800ECA64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECA68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECA6C
  c->lr=c->r[0]; // 800ECA70
  c->r[1]=c->r[1]+0x00000020u; // 800ECA74
  return; // 800ECA78
}

// fn_800ECA7C
void f_800ECA7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECA7C
  c->r[0]=c->lr; // 800ECA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECA84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECA88
  c->r[31]=c->r[3]|c->r[3]; // 800ECA8C
  c->lr=0x800ECA94u; f_800A23BC(c); // 800ECA90
  c->lr=0x800ECA98u; f_800BB828(c); // 800ECA94
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECA98
  c->lr=0x800ECAA0u; f_800BB9DC(c); // 800ECA9C
  c->r[31]=c->r[3]|c->r[3]; // 800ECAA0
  cmps(c,0,(int32_t)c->r[3],0); // 800ECAA4
  if (!crb(c,2)) { goto L_800ECAB4; } // 800ECAA8
  c->r[3]=0u+0x00000001u; // 800ECAAC
  goto L_800ECAF4; // 800ECAB0
L_800ECAB4:;
  c->lr=0x800ECAB8u; f_800A23BC(c); // 800ECAB4
  c->lr=0x800ECABCu; f_800BB828(c); // 800ECAB8
  c->r[4]=c->r[31]|c->r[31]; // 800ECABC
  c->lr=0x800ECAC4u; f_800BB99C(c); // 800ECAC0
  c->lr=0x800ECAC8u; f_800ED50C(c); // 800ECAC4
  cmps(c,0,(int32_t)c->r[3],0); // 800ECAC8
  if (!crb(c,2)) { goto L_800ECAD8; } // 800ECACC
  c->r[3]=0u+0x00000001u; // 800ECAD0
  goto L_800ECAF4; // 800ECAD4
L_800ECAD8:;
  c->lr=0x800ECADCu; f_800A23BC(c); // 800ECAD8
  c->lr=0x800ECAE0u; f_800BB828(c); // 800ECADC
  c->r[4]=c->r[31]|c->r[31]; // 800ECAE0
  c->lr=0x800ECAE8u; f_800BB99C(c); // 800ECAE4
  c->lr=0x800ECAECu; f_800CFA64(c); // 800ECAE8
  c->r[0]=cntlz(c->r[3]); // 800ECAEC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800ECAF0
L_800ECAF4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECAF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECAF8
  c->lr=c->r[0]; // 800ECAFC
  c->r[1]=c->r[1]+0x00000010u; // 800ECB00
  return; // 800ECB04
}

// fn_800ECB08
void f_800ECB08(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800ECB08
  return; // 800ECB0C
}

// fn_800ECB10
void f_800ECB10(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800ECB10
  return; // 800ECB14
}

// fn_800ECB18
void f_800ECB18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB18
  c->r[0]=c->lr; // 800ECB1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECB20
  c->r[4]=c->r[3]|c->r[3]; // 800ECB24
  c->r[3]=R32(c->r[3]+0x00000000u); // 800ECB28
  c->r[4]=R32(c->r[4]+0x00000004u); // 800ECB2C
  c->lr=0x800ECB34u; f_800BAD68(c); // 800ECB30
  c->r[3]=0u+0x00000000u; // 800ECB34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECB38
  c->lr=c->r[0]; // 800ECB3C
  c->r[1]=c->r[1]+0x00000010u; // 800ECB40
  return; // 800ECB44
}

// fn_800ECB48
void f_800ECB48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB48
  c->r[0]=c->lr; // 800ECB4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECB50
  c->r[3]=R32(c->r[3]+0x00000000u); // 800ECB54
  c->lr=0x800ECB5Cu; f_800BADEC(c); // 800ECB58
  c->r[3]=0u+0x00000000u; // 800ECB5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECB60
  c->lr=c->r[0]; // 800ECB64
  c->r[1]=c->r[1]+0x00000010u; // 800ECB68
  return; // 800ECB6C
}

// fn_800ECB70
void f_800ECB70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB70
  c->r[0]=c->lr; // 800ECB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECB78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECB7C
  c->r[31]=c->r[3]|c->r[3]; // 800ECB80
  c->lr=0x800ECB88u; f_800A23BC(c); // 800ECB84
  c->lr=0x800ECB8Cu; f_800BB808(c); // 800ECB88
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECB8C
  c->lr=0x800ECB94u; f_800BBCCC(c); // 800ECB90
  c->r[31]=c->r[3]|c->r[3]; // 800ECB94
  cmps(c,0,(int32_t)c->r[3],0); // 800ECB98
  if (crb(c,2)) { goto L_800ECBB8; } // 800ECB9C
  c->lr=0x800ECBA4u; f_800A23BC(c); // 800ECBA0
  c->lr=0x800ECBA8u; f_800BB808(c); // 800ECBA4
  c->r[4]=c->r[31]|c->r[31]; // 800ECBA8
  c->lr=0x800ECBB0u; f_800BBC8C(c); // 800ECBAC
  c->r[4]=0u+0x00000001u; // 800ECBB0
  c->lr=0x800ECBB8u; f_800CAD3C(c); // 800ECBB4
L_800ECBB8:;
  c->r[3]=0u+0x00000000u; // 800ECBB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECBBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECBC0
  c->lr=c->r[0]; // 800ECBC4
  c->r[1]=c->r[1]+0x00000010u; // 800ECBC8
  return; // 800ECBCC
}

// fn_800ECBD0
void f_800ECBD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECBD0
  c->r[0]=c->lr; // 800ECBD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECBD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECBDC
  c->r[31]=c->r[3]|c->r[3]; // 800ECBE0
  c->lr=0x800ECBE8u; f_800A23BC(c); // 800ECBE4
  c->lr=0x800ECBECu; f_800BB808(c); // 800ECBE8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECBEC
  c->lr=0x800ECBF4u; f_800BBCCC(c); // 800ECBF0
  c->r[31]=c->r[3]|c->r[3]; // 800ECBF4
  cmps(c,0,(int32_t)c->r[3],0); // 800ECBF8
  if (crb(c,2)) { goto L_800ECC18; } // 800ECBFC
  c->lr=0x800ECC04u; f_800A23BC(c); // 800ECC00
  c->lr=0x800ECC08u; f_800BB808(c); // 800ECC04
  c->r[4]=c->r[31]|c->r[31]; // 800ECC08
  c->lr=0x800ECC10u; f_800BBC8C(c); // 800ECC0C
  c->r[4]=0u+0x00000000u; // 800ECC10
  c->lr=0x800ECC18u; f_800CAD3C(c); // 800ECC14
L_800ECC18:;
  c->r[3]=0u+0x00000000u; // 800ECC18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECC1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECC20
  c->lr=c->r[0]; // 800ECC24
  c->r[1]=c->r[1]+0x00000010u; // 800ECC28
  return; // 800ECC2C
}

// fn_800ECC30
void f_800ECC30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECC30
  c->r[0]=c->lr; // 800ECC34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECC38
  c->lr=0x800ECC40u; f_800A23BC(c); // 800ECC3C
  c->lr=0x800ECC44u; f_800BB808(c); // 800ECC40
  c->r[4]=0u+0x00000000u; // 800ECC44
  c->lr=0x800ECC4Cu; f_800ED520(c); // 800ECC48
  c->r[3]=0u+0x00000000u; // 800ECC4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECC50
  c->lr=c->r[0]; // 800ECC54
  c->r[1]=c->r[1]+0x00000010u; // 800ECC58
  return; // 800ECC5C
}

// fn_800ECC60
void f_800ECC60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECC60
  c->r[0]=c->lr; // 800ECC64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECC68
  c->lr=0x800ECC70u; f_800A23BC(c); // 800ECC6C
  c->lr=0x800ECC74u; f_800BB808(c); // 800ECC70
  c->r[4]=0u+0x00000001u; // 800ECC74
  c->lr=0x800ECC7Cu; f_800ED520(c); // 800ECC78
  c->r[3]=0u+0x00000000u; // 800ECC7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECC80
  c->lr=c->r[0]; // 800ECC84
  c->r[1]=c->r[1]+0x00000010u; // 800ECC88
  return; // 800ECC8C
}

// fn_800ECC90
void f_800ECC90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECC90
  c->r[0]=c->lr; // 800ECC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECC98
  c->lr=0x800ECCA0u; f_800A23BC(c); // 800ECC9C
  c->lr=0x800ECCA4u; f_800BB808(c); // 800ECCA0
  c->r[4]=0u+0x00000002u; // 800ECCA4
  c->lr=0x800ECCACu; f_800ED520(c); // 800ECCA8
  c->r[3]=0u+0x00000000u; // 800ECCAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECCB0
  c->lr=c->r[0]; // 800ECCB4
  c->r[1]=c->r[1]+0x00000010u; // 800ECCB8
  return; // 800ECCBC
}

// fn_800ECCC0
void f_800ECCC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECCC0
  c->r[0]=c->lr; // 800ECCC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECCC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECCCC
  c->r[31]=c->r[3]|c->r[3]; // 800ECCD0
  c->lr=0x800ECCD8u; f_800A23BC(c); // 800ECCD4
  c->lr=0x800ECCDCu; f_800BB808(c); // 800ECCD8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECCDC
  c->lr=0x800ECCE4u; f_800BBCCC(c); // 800ECCE0
  c->r[31]=c->r[3]|c->r[3]; // 800ECCE4
  c->lr=0x800ECCECu; f_800A23BC(c); // 800ECCE8
  c->lr=0x800ECCF0u; f_800BB808(c); // 800ECCEC
  c->r[4]=c->r[31]|c->r[31]; // 800ECCF0
  c->lr=0x800ECCF8u; f_800BBC8C(c); // 800ECCF4
  c->r[4]=0u+0x00000001u; // 800ECCF8
  c->lr=0x800ECD00u; f_800BB958(c); // 800ECCFC
  c->r[3]=0u+0x00000000u; // 800ECD00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECD04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECD08
  c->lr=c->r[0]; // 800ECD0C
  c->r[1]=c->r[1]+0x00000010u; // 800ECD10
  return; // 800ECD14
}

// fn_800ECD18
void f_800ECD18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD18
  c->r[0]=c->lr; // 800ECD1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECD20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECD24
  c->r[31]=c->r[3]|c->r[3]; // 800ECD28
  c->lr=0x800ECD30u; f_800A23BC(c); // 800ECD2C
  c->lr=0x800ECD34u; f_800BB808(c); // 800ECD30
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECD34
  c->lr=0x800ECD3Cu; f_800BBCCC(c); // 800ECD38
  c->r[31]=c->r[3]|c->r[3]; // 800ECD3C
  c->lr=0x800ECD44u; f_800A23BC(c); // 800ECD40
  c->lr=0x800ECD48u; f_800BB808(c); // 800ECD44
  c->r[4]=c->r[31]|c->r[31]; // 800ECD48
  c->lr=0x800ECD50u; f_800BBC8C(c); // 800ECD4C
  c->r[4]=0u+0x00000000u; // 800ECD50
  c->lr=0x800ECD58u; f_800BB958(c); // 800ECD54
  c->r[3]=0u+0x00000000u; // 800ECD58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ECD5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECD60
  c->lr=c->r[0]; // 800ECD64
  c->r[1]=c->r[1]+0x00000010u; // 800ECD68
  return; // 800ECD6C
}

// fn_800ECD70
void f_800ECD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECD70
  c->r[0]=c->lr; // 800ECD74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECD78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ECD7C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800ECD80
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECD84
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECD88
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800ECD8C
  c->r[3]=c->r[1]+0x00000008u; // 800ECD90
  c->lr=0x800ECD98u; f_8004E34C(c); // 800ECD94
  c->r[3]=c->r[31]|c->r[31]; // 800ECD98
  c->r[4]=c->r[1]+0x00000008u; // 800ECD9C
  c->lr=0x800ECDA4u; f_800BAE40(c); // 800ECDA0
  c->r[3]=0u+0x00000000u; // 800ECDA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECDA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECDAC
  c->lr=c->r[0]; // 800ECDB0
  c->r[1]=c->r[1]+0x00000020u; // 800ECDB4
  return; // 800ECDB8
}

// fn_800ECDBC
void f_800ECDBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECDBC
  c->r[0]=c->lr; // 800ECDC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECDC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ECDC8
  c->r[31]=R32(c->r[3]+0x00000000u); // 800ECDCC
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECDD0
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECDD4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800ECDD8
  c->r[3]=c->r[1]+0x00000008u; // 800ECDDC
  c->lr=0x800ECDE4u; f_8004E34C(c); // 800ECDE0
  c->r[3]=c->r[31]|c->r[31]; // 800ECDE4
  c->r[4]=c->r[1]+0x00000008u; // 800ECDE8
  c->lr=0x800ECDF0u; f_800BAEA0(c); // 800ECDEC
  c->r[3]=0u+0x00000000u; // 800ECDF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECDF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECDF8
  c->lr=c->r[0]; // 800ECDFC
  c->r[1]=c->r[1]+0x00000020u; // 800ECE00
  return; // 800ECE04
}

// fn_800ECE08
void f_800ECE08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECE08
  c->r[0]=c->lr; // 800ECE0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECE10
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECE14
  c->r[3]=R32(c->r[3]+0x00000000u); // 800ECE18
  c->lr=0x800ECE20u; f_800BAF00(c); // 800ECE1C
  c->r[3]=0u+0x00000000u; // 800ECE20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECE24
  c->lr=c->r[0]; // 800ECE28
  c->r[1]=c->r[1]+0x00000010u; // 800ECE2C
  return; // 800ECE30
}

// fn_800ECE34
void f_800ECE34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECE34
  c->r[0]=c->lr; // 800ECE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ECE3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800ECE40
  c->lr=0x800ECE48u; f_800BAF74(c); // 800ECE44
  c->r[3]=0u+0x00000000u; // 800ECE48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ECE4C
  c->lr=c->r[0]; // 800ECE50
  c->r[1]=c->r[1]+0x00000010u; // 800ECE54
  return; // 800ECE58
}

// fn_800ECE5C
void f_800ECE5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECE5C
  c->r[0]=c->lr; // 800ECE60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECE64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ECE68
  c->r[31]=R32(c->r[3]+0x00000000u); // 800ECE6C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECE70
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECE74
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800ECE78
  c->r[3]=c->r[1]+0x00000008u; // 800ECE7C
  c->lr=0x800ECE84u; f_8004E34C(c); // 800ECE80
  c->r[3]=c->r[31]|c->r[31]; // 800ECE84
  c->r[4]=c->r[1]+0x00000008u; // 800ECE88
  c->lr=0x800ECE90u; f_800BB084(c); // 800ECE8C
  c->r[3]=0u+0x00000000u; // 800ECE90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECE94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECE98
  c->lr=c->r[0]; // 800ECE9C
  c->r[1]=c->r[1]+0x00000020u; // 800ECEA0
  return; // 800ECEA4
}

// fn_800ECEA8
void f_800ECEA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECEA8
  c->r[0]=c->lr; // 800ECEAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECEB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ECEB4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800ECEB8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECEBC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECEC0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800ECEC4
  c->r[3]=c->r[1]+0x00000008u; // 800ECEC8
  c->lr=0x800ECED0u; f_8004E34C(c); // 800ECECC
  c->r[3]=c->r[31]|c->r[31]; // 800ECED0
  c->r[4]=c->r[1]+0x00000008u; // 800ECED4
  c->lr=0x800ECEDCu; f_800BAFC4(c); // 800ECED8
  c->r[3]=0u+0x00000000u; // 800ECEDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECEE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECEE4
  c->lr=c->r[0]; // 800ECEE8
  c->r[1]=c->r[1]+0x00000020u; // 800ECEEC
  return; // 800ECEF0
}

// fn_800ECEF4
void f_800ECEF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECEF4
  c->r[0]=c->lr; // 800ECEF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECEFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ECF00
  c->r[31]=R32(c->r[3]+0x00000000u); // 800ECF04
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECF08
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECF0C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800ECF10
  c->r[3]=c->r[1]+0x00000008u; // 800ECF14
  c->lr=0x800ECF1Cu; f_8004E34C(c); // 800ECF18
  c->r[3]=c->r[31]|c->r[31]; // 800ECF1C
  c->r[4]=c->r[1]+0x00000008u; // 800ECF20
  c->lr=0x800ECF28u; f_800BB024(c); // 800ECF24
  c->r[3]=0u+0x00000000u; // 800ECF28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECF2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECF30
  c->lr=c->r[0]; // 800ECF34
  c->r[1]=c->r[1]+0x00000020u; // 800ECF38
  return; // 800ECF3C
}

// fn_800ECF40
void f_800ECF40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECF40
  c->r[0]=c->lr; // 800ECF44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECF48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ECF4C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800ECF50
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ECF54
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800ECF58
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800ECF5C
  c->r[3]=c->r[1]+0x00000008u; // 800ECF60
  c->lr=0x800ECF68u; f_8004E34C(c); // 800ECF64
  c->lr=0x800ECF6Cu; f_800A23BC(c); // 800ECF68
  c->lr=0x800ECF70u; f_800BB808(c); // 800ECF6C
  c->r[4]=c->r[31]|c->r[31]; // 800ECF70
  c->lr=0x800ECF78u; f_800BBCCC(c); // 800ECF74
  c->r[31]=c->r[3]|c->r[3]; // 800ECF78
  c->lr=0x800ECF80u; f_800A23BC(c); // 800ECF7C
  c->lr=0x800ECF84u; f_800BB808(c); // 800ECF80
  c->r[4]=c->r[31]|c->r[31]; // 800ECF84
  c->lr=0x800ECF8Cu; f_800BBC8C(c); // 800ECF88
  c->r[4]=c->r[1]+0x00000008u; // 800ECF8C
  c->lr=0x800ECF94u; f_800BD558(c); // 800ECF90
  c->r[3]=0u+0x00000000u; // 800ECF94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ECF98
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ECF9C
  c->lr=c->r[0]; // 800ECFA0
  c->r[1]=c->r[1]+0x00000020u; // 800ECFA4
  return; // 800ECFA8
}

// fn_800ECFAC
void f_800ECFAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECFAC
  c->r[0]=c->lr; // 800ECFB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ECFB4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800ECFB8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800ECFBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ECFC0
  c->r[31]=c->r[3]|c->r[3]; // 800ECFC4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[31]=c->ps1[31]=RF32(ea);} // 800ECFC8
  c->lr=0x800ECFD0u; f_800A23BC(c); // 800ECFCC
  c->lr=0x800ECFD4u; f_800BB808(c); // 800ECFD0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ECFD4
  c->lr=0x800ECFDCu; f_800BBCCC(c); // 800ECFD8
  c->r[31]=c->r[3]|c->r[3]; // 800ECFDC
  c->lr=0x800ECFE4u; f_800A23BC(c); // 800ECFE0
  c->lr=0x800ECFE8u; f_800BB808(c); // 800ECFE4
  c->r[4]=c->r[31]|c->r[31]; // 800ECFE8
  c->lr=0x800ECFF0u; f_800BBC8C(c); // 800ECFEC
  c->f[1]=c->f[31]; // 800ECFF0
  c->lr=0x800ECFF8u; f_800BD5B4(c); // 800ECFF4
  c->r[3]=0u+0x00000000u; // 800ECFF8
  c->r[0]=0u+0x00000018u; // 800ECFFC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800ED000
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800ED004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED008
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED00C
  c->lr=c->r[0]; // 800ED010
  c->r[1]=c->r[1]+0x00000020u; // 800ED014
  return; // 800ED018
}

// fn_800ED01C
void f_800ED01C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED01C
  c->r[0]=c->lr; // 800ED020
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED028
  c->r[31]=c->r[3]|c->r[3]; // 800ED02C
  c->lr=0x800ED034u; f_800A23BC(c); // 800ED030
  c->lr=0x800ED038u; f_800BB808(c); // 800ED034
  c->r[4]=R32(c->r[31]+0x00000000u); // 800ED038
  c->lr=0x800ED040u; f_800BBCCC(c); // 800ED03C
  c->r[31]=c->r[3]|c->r[3]; // 800ED040
  c->lr=0x800ED048u; f_800A23BC(c); // 800ED044
  c->lr=0x800ED04Cu; f_800BB808(c); // 800ED048
  c->r[4]=c->r[31]|c->r[31]; // 800ED04C
  c->lr=0x800ED054u; f_800BBC8C(c); // 800ED050
  c->lr=0x800ED058u; f_800BD610(c); // 800ED054
  c->r[3]=0u+0x00000000u; // 800ED058
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED05C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED060
  c->lr=c->r[0]; // 800ED064
  c->r[1]=c->r[1]+0x00000010u; // 800ED068
  return; // 800ED06C
}

// fn_800ED070
void f_800ED070(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800ED070
  W32(c->r[3]+0x00004F74u,c->r[0]); // 800ED074
  return; // 800ED078
}

// fn_800ED07C
void f_800ED07C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800ED07C
  W32(c->r[3]+0x00004F74u,c->r[0]); // 800ED080
  return; // 800ED084
}

// fn_800ED088
void f_800ED088(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800ED088
  c->r[3]=c->r[3]+c->r[0]; // 800ED08C
  c->r[0]=R32(c->r[3]+0x00004F18u); // 800ED090
  c->r[0]=c->r[0]+c->r[5]; // 800ED094
  W32(c->r[3]+0x00004F18u,c->r[0]); // 800ED098
  return; // 800ED09C
}

// fn_800ED0A0
void f_800ED0A0(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800ED0A0
  c->r[3]=c->r[3]+c->r[0]; // 800ED0A4
  c->r[0]=R32(c->r[3]+0x00004F18u); // 800ED0A8
  c->r[0]=c->r[0]-c->r[5]; // 800ED0AC
  W32(c->r[3]+0x00004F18u,c->r[0]); // 800ED0B0
  return; // 800ED0B4
}

// fn_800ED0B8
void f_800ED0B8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800ED0B8
  c->r[3]=c->r[3]+c->r[0]; // 800ED0BC
  W32(c->r[3]+0x00004F18u,c->r[5]); // 800ED0C0
  return; // 800ED0C4
}

// fn_800ED0C8
void f_800ED0C8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800ED0C8
  c->r[3]=c->r[3]+c->r[0]; // 800ED0CC
  c->r[3]=R32(c->r[3]+0x00004F18u); // 800ED0D0
  return; // 800ED0D4
}

// fn_800ED0D8
void f_800ED0D8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 800ED0D8
  W32(c->r[3]+0x00004F80u,c->r[0]); // 800ED0DC
  {uint32_t ea=c->r[3]+0x00004EE0u; WF32(ea,c->f[1]);} // 800ED0E0
  return; // 800ED0E4
}

// fn_800ED0E8
void f_800ED0E8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800ED0E8
  W32(c->r[3]+0x00004F80u,c->r[0]); // 800ED0EC
  return; // 800ED0F0
}

// fn_800ED0F4
void f_800ED0F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00004EE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED0F4
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED0F8
  fcmp(c,0,c->f[1],c->f[0]); // 800ED0FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800ED100
  c->r[3]=c->cr; // 800ED104
  c->r[3]=rotl(c->r[3],3)&0x00000001u; // 800ED108
  return; // 800ED10C
}

// fn_800ED110
void f_800ED110(Ctx* __restrict c) {
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800ED110
  return; // 800ED114
}

// fn_800ED118
void f_800ED118(Ctx* __restrict c) {
  W32(c->r[3]+0x00000028u,c->r[4]); // 800ED118
  return; // 800ED11C
}

// fn_800ED120
void f_800ED120(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000D8u); // 800ED120
  cmpu(c,0,c->r[0],0x00000006u); // 800ED124
  if (!crb(c,2)) return; // 800ED128
  c->r[0]=0u+0x00000007u; // 800ED12C
  W32(c->r[3]+0x000000D8u,c->r[0]); // 800ED130
  return; // 800ED134
}

// fn_800ED138
void f_800ED138(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000092Cu); // 800ED138
  return; // 800ED13C
}

// fn_800ED140
void f_800ED140(Ctx* __restrict c) {
  W32(c->r[3]+0x000002F0u,c->r[4]); // 800ED140
  return; // 800ED144
}

// fn_800ED148
void f_800ED148(Ctx* __restrict c) {
  W32(c->r[3]+0x000002F4u,c->r[4]); // 800ED148
  return; // 800ED14C
}

// fn_800ED150
void f_800ED150(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000280u; WF32(ea,c->f[1]);} // 800ED150
  return; // 800ED154
}

// fn_800ED158
void f_800ED158(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800ED158
  c->r[3]=c->r[3]+c->r[0]; // 800ED15C
  {uint32_t ea=c->r[3]+0x00000284u; WF32(ea,c->f[1]);} // 800ED160
  return; // 800ED164
}

// fn_800ED168
void f_800ED168(Ctx* __restrict c) {
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 800ED168
  c->r[12]=R32(c->r[3]+0x00000040u); // 800ED16C
  c->r[12]=R32(c->r[12]+0x00000018u); // 800ED170
  c->ctr=c->r[12]; // 800ED174
  if (true) { dispatch(c,c->ctr); return; } // 800ED178
}

// fn_800ED17C
void f_800ED17C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 800ED17C
  return; // 800ED180
}

// fn_800ED184
void f_800ED184(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED184
  c->r[0]=c->r[0]|0x00010000u; // 800ED188
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED18C
  return; // 800ED190
}

// fn_800ED194
void f_800ED194(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000048u); // 800ED194
  return; // 800ED198
}

// fn_800ED19C
void f_800ED19C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800ED19C
  if (crb(c,2)) { goto L_800ED1B4; } // 800ED1A0
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED1A4
  c->r[0]=rotl(c->r[0],0)&0xFFDFFFFFu; // 800ED1A8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED1AC
  return; // 800ED1B0
L_800ED1B4:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED1B4
  c->r[0]=c->r[0]|0x00200000u; // 800ED1B8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED1BC
  return; // 800ED1C0
}

// fn_800ED1C4
void f_800ED1C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00001EACu; WF32(ea,c->f[1]);} // 800ED1C4
  return; // 800ED1C8
}

// fn_800ED1CC
void f_800ED1CC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00001F08u; // 800ED1CC
  f_8004A65C(c); return; // 800ED1D0
}

// fn_800ED1D4
void f_800ED1D4(Ctx* __restrict c) {
  W32(c->r[3]+0x00001EF4u,c->r[4]); // 800ED1D4
  return; // 800ED1D8
}

// fn_800ED1DC
void f_800ED1DC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED1DC
  c->r[3]=rotl(c->r[0],0)&0x00000004u; // 800ED1E0
  c->r[0]=0u-c->r[3]; // 800ED1E4
  c->r[0]=c->r[0]|c->r[3]; // 800ED1E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800ED1EC
  return; // 800ED1F0
}

// fn_800ED1F4
void f_800ED1F4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 800ED1F4
  return; // 800ED1F8
}

// fn_800ED1FC
void f_800ED1FC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000070u); // 800ED1FC
  c->ctr=c->r[0]; // 800ED200
  cmpu(c,0,c->r[0],0x00000000u); // 800ED204
  if (!crb(c,1)) { goto L_800ED228; } // 800ED208
L_800ED20C:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 800ED20C
  cmpu(c,0,c->r[4],c->r[0]); // 800ED210
  if (!crb(c,2)) { goto L_800ED220; } // 800ED214
  c->r[3]=0u+0x00000001u; // 800ED218
  return; // 800ED21C
L_800ED220:;
  c->r[3]=c->r[3]+0x00000004u; // 800ED220
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ED20C; } // 800ED224
L_800ED228:;
  c->r[3]=0u+0x00000000u; // 800ED228
  return; // 800ED22C
}

// fn_800ED230
void f_800ED230(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED230
  return; // 800ED234
}

// fn_800ED238
void f_800ED238(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED238
  return; // 800ED23C
}

// fn_800ED240
void f_800ED240(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED240
  return; // 800ED244
}

// fn_800ED248
void f_800ED248(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED248
  return; // 800ED24C
}

// fn_800ED250
void f_800ED250(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED250
  return; // 800ED254
}

// fn_800ED258
void f_800ED258(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED258
  return; // 800ED25C
}

// fn_800ED260
void f_800ED260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED260
  c->r[0]=c->lr; // 800ED264
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED268
  c->r[3]=c->r[3]+0x0000002Cu; // 800ED26C
  c->lr=0x800ED274u; f_800BB904(c); // 800ED270
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 800ED274
  c->r[0]=cntlz(c->r[0]); // 800ED278
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800ED27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED280
  c->lr=c->r[0]; // 800ED284
  c->r[1]=c->r[1]+0x00000010u; // 800ED288
  return; // 800ED28C
}

// fn_800ED290
void f_800ED290(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800ED290
  if (crb(c,2)) { goto L_800ED2A8; } // 800ED294
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED298
  c->r[0]=c->r[0]|0x04000000u; // 800ED29C
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED2A0
  return; // 800ED2A4
L_800ED2A8:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED2A8
  c->r[0]=rotl(c->r[0],0)&0xFBFFFFFFu; // 800ED2AC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED2B0
  return; // 800ED2B4
}

// fn_800ED2B8
void f_800ED2B8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800ED2B8
  if (crb(c,2)) { goto L_800ED2D0; } // 800ED2BC
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED2C0
  c->r[0]=c->r[0]|0x08000000u; // 800ED2C4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED2C8
  return; // 800ED2CC
L_800ED2D0:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED2D0
  c->r[0]=rotl(c->r[0],0)&0xF7FFFFFFu; // 800ED2D4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED2D8
  return; // 800ED2DC
}

// fn_800ED2E0
void f_800ED2E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED2E0
  c->r[3]=rotl(c->r[0],0)&0x02000000u; // 800ED2E4
  c->r[0]=0u-c->r[3]; // 800ED2E8
  c->r[0]=c->r[0]|c->r[3]; // 800ED2EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800ED2F0
  return; // 800ED2F4
}

// fn_800ED2F8
void f_800ED2F8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED2F8
  c->r[3]=rotl(c->r[0],0)&0x00400000u; // 800ED2FC
  c->r[0]=0u-c->r[3]; // 800ED300
  c->r[0]=c->r[0]|c->r[3]; // 800ED304
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800ED308
  return; // 800ED30C
}

// fn_800ED310
void f_800ED310(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED310
  c->r[0]=c->r[0]|0x00000002u; // 800ED314
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED318
  return; // 800ED31C
}

// fn_800ED320
void f_800ED320(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED320
  c->r[0]=c->r[0]|0x00000004u; // 800ED324
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED328
  return; // 800ED32C
}

// fn_800ED330
void f_800ED330(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED330
  c->r[0]=c->r[0]|0x00000008u; // 800ED334
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED338
  return; // 800ED33C
}

// fn_800ED340
void f_800ED340(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED340
  c->r[0]=c->r[0]|0x00000010u; // 800ED344
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED348
  W32(c->r[3]+0x000002ECu,c->r[4]); // 800ED34C
  return; // 800ED350
}

// fn_800ED354
void f_800ED354(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED354
  c->r[0]=c->r[0]|0x00000040u; // 800ED358
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED35C
  return; // 800ED360
}

// fn_800ED364
void f_800ED364(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED364
  c->r[0]=c->r[0]|0x00000001u; // 800ED368
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED36C
  return; // 800ED370
}

// fn_800ED374
void f_800ED374(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED374
  c->r[0]=c->r[0]|0x00000020u; // 800ED378
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED37C
  return; // 800ED380
}

// fn_800ED384
void f_800ED384(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800ED384
  c->r[0]=c->r[0]|0x00000100u; // 800ED388
  W32(c->r[3]+0x00000028u,c->r[0]); // 800ED38C
  W32(c->r[3]+0x000002F0u,c->r[4]); // 800ED390
  return; // 800ED394
}

// fn_800ED398
void f_800ED398(Ctx* __restrict c) {
  W32(c->r[3]+0x00000300u,c->r[4]); // 800ED398
  return; // 800ED39C
}

// fn_800ED3A0
void f_800ED3A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000027Cu); // 800ED3A0
  return; // 800ED3A4
}

// fn_800ED3A8
void f_800ED3A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000280u); // 800ED3A8
  return; // 800ED3AC
}

// fn_800ED3B0
void f_800ED3B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000054u; // 800ED3B0
  f_800CA3B4(c); return; // 800ED3B4
}

// fn_800ED3B8
void f_800ED3B8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000174u; // 800ED3B8
  f_800CA3B4(c); return; // 800ED3BC
}

// fn_800ED3C0
void f_800ED3C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000114u; // 800ED3C0
  f_800CA3B4(c); return; // 800ED3C4
}

// fn_800ED3C8
void f_800ED3C8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000001D4u; // 800ED3C8
  f_800CA3B4(c); return; // 800ED3CC
}

// fn_800ED3D0
void f_800ED3D0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000234u; // 800ED3D0
  f_800CA3B4(c); return; // 800ED3D4
}

// fn_800ED3D8
void f_800ED3D8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000294u; // 800ED3D8
  f_800CA3B4(c); return; // 800ED3DC
}

// fn_800ED3E0
void f_800ED3E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED3E0
  c->r[0]=c->lr; // 800ED3E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED3E8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800ED3EC
  c->r[3]=c->r[3]+0x000002F4u; // 800ED3F0
  c->r[4]=c->r[1]+0x00000008u; // 800ED3F4
  c->r[5]=0u+0x00000001u; // 800ED3F8
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED3FC
  c->lr=0x800ED404u; f_800D0F54(c); // 800ED400
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED404
  c->lr=c->r[0]; // 800ED408
  c->r[1]=c->r[1]+0x00000010u; // 800ED40C
  return; // 800ED410
}

// fn_800ED414
void f_800ED414(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800ED414
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800ED418
  cmps(c,0,(int32_t)c->r[0],0); // 800ED41C
  if (crb(c,2)) { goto L_800ED428; } // 800ED420
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED424
L_800ED428:;
  c->r[3]=c->r[3]+0x000002F4u; // 800ED428
  f_800D13D4(c); return; // 800ED42C
}

// fn_800ED430
void f_800ED430(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000002F4u; // 800ED430
  f_800CA3B4(c); return; // 800ED434
}

// fn_800ED438
void f_800ED438(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000002F4u; // 800ED438
  f_800D0F18(c); return; // 800ED43C
}

// fn_800ED440
void f_800ED440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED440
  c->r[0]=c->lr; // 800ED444
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED448
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800ED44C
  c->r[3]=c->r[3]+0x00000354u; // 800ED450
  c->r[4]=c->r[1]+0x00000008u; // 800ED454
  c->r[5]=0u+0x00000001u; // 800ED458
  c->r[6]=0u+0x00000001u; // 800ED45C
  c->lr=0x800ED464u; f_800D141C(c); // 800ED460
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED464
  c->lr=c->r[0]; // 800ED468
  c->r[1]=c->r[1]+0x00000010u; // 800ED46C
  return; // 800ED470
}

// fn_800ED474
void f_800ED474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED474
  c->r[0]=c->lr; // 800ED478
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED47C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800ED480
  c->r[3]=c->r[3]+0x00000354u; // 800ED484
  c->r[4]=c->r[1]+0x00000008u; // 800ED488
  c->r[5]=0u+0x00000001u; // 800ED48C
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED490
  c->lr=0x800ED498u; f_800D0F54(c); // 800ED494
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED498
  c->lr=c->r[0]; // 800ED49C
  c->r[1]=c->r[1]+0x00000010u; // 800ED4A0
  return; // 800ED4A4
}

// fn_800ED4A8
void f_800ED4A8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800ED4A8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800ED4AC
  cmps(c,0,(int32_t)c->r[0],0); // 800ED4B0
  if (crb(c,2)) { goto L_800ED4BC; } // 800ED4B4
  {uint32_t ea=c->r[2]+0xFFFF8948u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4B8
L_800ED4BC:;
  c->r[3]=c->r[3]+0x00000354u; // 800ED4BC
  f_800D13D4(c); return; // 800ED4C0
}

// fn_800ED4C4
void f_800ED4C4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000354u; // 800ED4C4
  f_800CA3B4(c); return; // 800ED4C8
}

// fn_800ED4CC
void f_800ED4CC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000354u; // 800ED4CC
  f_800D0F18(c); return; // 800ED4D0
}

// fn_800ED4D4
void f_800ED4D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4D4
  return; // 800ED4D8
}

// fn_800ED4DC
void f_800ED4DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4DC
  return; // 800ED4E0
}

// fn_800ED4E4
void f_800ED4E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4E4
  return; // 800ED4E8
}

// fn_800ED4EC
void f_800ED4EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4EC
  return; // 800ED4F0
}

// fn_800ED4F4
void f_800ED4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4F4
  return; // 800ED4F8
}

// fn_800ED4FC
void f_800ED4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800ED4FC
  return; // 800ED500
}

// fn_800ED504
void f_800ED504(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800ED504
  f_8005AA88(c); return; // 800ED508
}

// fn_800ED50C
void f_800ED50C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800ED50C
  c->r[0]=0u-c->r[3]; // 800ED510
  c->r[0]=c->r[0]|c->r[3]; // 800ED514
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800ED518
  return; // 800ED51C
}

// fn_800ED520
void f_800ED520(Ctx* __restrict c) {
  W32(c->r[3]+0x00000028u,c->r[4]); // 800ED520
  return; // 800ED524
}

// fn_800ED528
void f_800ED528(Ctx* __restrict c) {
  return; // 800ED528
}

// fn_800ED52C
void f_800ED52C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED52C
  c->r[0]=c->lr; // 800ED530
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED538
  c->r[31]=c->r[4]|c->r[4]; // 800ED53C
  c->lr=0x800ED544u; f_800F4430(c); // 800ED540
  c->r[3]=c->r[3]+0x0000015Cu; // 800ED544
  c->r[4]=c->r[31]|c->r[31]; // 800ED548
  c->lr=0x800ED550u; f_80105288(c); // 800ED54C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED550
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED554
  c->lr=c->r[0]; // 800ED558
  c->r[1]=c->r[1]+0x00000010u; // 800ED55C
  return; // 800ED560
}

// fn_800ED564
void f_800ED564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED564
  c->r[0]=c->lr; // 800ED568
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED56C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED570
  c->r[31]=c->r[4]|c->r[4]; // 800ED574
  c->lr=0x800ED57Cu; f_800F4430(c); // 800ED578
  c->r[3]=c->r[3]+0x0000019Cu; // 800ED57C
  c->r[4]=c->r[31]|c->r[31]; // 800ED580
  c->lr=0x800ED588u; f_80260C48(c); // 800ED584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED588
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED58C
  c->lr=c->r[0]; // 800ED590
  c->r[1]=c->r[1]+0x00000010u; // 800ED594
  return; // 800ED598
}

// fn_800ED59C
void f_800ED59C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED59C
  c->r[0]=c->lr; // 800ED5A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED5A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED5A8
  c->r[31]=c->r[4]|c->r[4]; // 800ED5AC
  c->lr=0x800ED5B4u; f_800F4430(c); // 800ED5B0
  c->r[3]=c->r[3]+0x0000019Cu; // 800ED5B4
  c->r[4]=c->r[31]|c->r[31]; // 800ED5B8
  c->lr=0x800ED5C0u; f_80260C94(c); // 800ED5BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800ED5C0
  {uint32_t ea=c->r[2]+0xFFFF8950u; c->f[1]=RF64(ea);} // 800ED5C4
  c->r[0]=c->r[0]^0x80000000u; // 800ED5C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED5CC
  c->r[0]=0u+0x43300000u; // 800ED5D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ED5D4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800ED5D8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800ED5DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ED5E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED5E4
  c->lr=c->r[0]; // 800ED5E8
  c->r[1]=c->r[1]+0x00000020u; // 800ED5EC
  return; // 800ED5F0
}

// fn_800ED5F4
void f_800ED5F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED5F4
  c->r[0]=c->lr; // 800ED5F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED5FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED600
  c->r[31]=c->r[4]|c->r[4]; // 800ED604
  c->lr=0x800ED60Cu; f_800F4430(c); // 800ED608
  c->r[3]=c->r[3]+0x0000019Cu; // 800ED60C
  c->r[4]=c->r[31]|c->r[31]; // 800ED610
  c->lr=0x800ED618u; f_80260CE0(c); // 800ED614
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800ED618
  {uint32_t ea=c->r[2]+0xFFFF8950u; c->f[1]=RF64(ea);} // 800ED61C
  c->r[0]=c->r[0]^0x80000000u; // 800ED620
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED624
  c->r[0]=0u+0x43300000u; // 800ED628
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ED62C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800ED630
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800ED634
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ED638
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED63C
  c->lr=c->r[0]; // 800ED640
  c->r[1]=c->r[1]+0x00000020u; // 800ED644
  return; // 800ED648
}

// fn_800ED64C
void f_800ED64C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED64C
  c->r[0]=c->lr; // 800ED650
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED654
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED658
  c->r[31]=c->r[4]|c->r[4]; // 800ED65C
  c->lr=0x800ED664u; f_800F4430(c); // 800ED660
  c->r[3]=c->r[3]+0x0000019Cu; // 800ED664
  c->r[4]=c->r[31]|c->r[31]; // 800ED668
  c->lr=0x800ED670u; f_80260D2C(c); // 800ED66C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 800ED670
  {uint32_t ea=c->r[2]+0xFFFF8950u; c->f[1]=RF64(ea);} // 800ED674
  c->r[0]=c->r[0]^0x80000000u; // 800ED678
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800ED67C
  c->r[0]=0u+0x43300000u; // 800ED680
  W32(c->r[1]+0x00000008u,c->r[0]); // 800ED684
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800ED688
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800ED68C
  {uint32_t ea=c->r[2]+0xFFFF8958u; c->f[0]=c->ps1[0]=RF32(ea);} // 800ED690
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 800ED694
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ED698
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED69C
  c->lr=c->r[0]; // 800ED6A0
  c->r[1]=c->r[1]+0x00000020u; // 800ED6A4
  return; // 800ED6A8
}

// fn_800ED6AC
void f_800ED6AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED6AC
  c->r[0]=c->lr; // 800ED6B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED6B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED6B8
  c->r[31]=c->r[4]|c->r[4]; // 800ED6BC
  c->lr=0x800ED6C4u; f_800F4430(c); // 800ED6C0
  c->r[3]=c->r[3]+0x0000015Cu; // 800ED6C4
  c->r[4]=c->r[31]|c->r[31]; // 800ED6C8
  c->lr=0x800ED6D0u; f_801052DC(c); // 800ED6CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED6D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED6D4
  c->lr=c->r[0]; // 800ED6D8
  c->r[1]=c->r[1]+0x00000010u; // 800ED6DC
  return; // 800ED6E0
}

// fn_800ED6E4
void f_800ED6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED6E4
  c->r[0]=c->lr; // 800ED6E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED6EC
  c->lr=0x800ED6F4u; f_8006E268(c); // 800ED6F0
  c->r[4]=0u+0x00000037u; // 800ED6F4
  c->lr=0x800ED6FCu; f_80073960(c); // 800ED6F8
  c->r[3]=0u+0x00000001u; // 800ED6FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED700
  c->lr=c->r[0]; // 800ED704
  c->r[1]=c->r[1]+0x00000010u; // 800ED708
  return; // 800ED70C
}

// fn_800ED710
void f_800ED710(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800ED710
  return; // 800ED714
}

// fn_800ED718
void f_800ED718(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED718
  c->r[0]=c->lr; // 800ED71C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED720
  c->lr=0x800ED728u; f_8006E268(c); // 800ED724
  c->r[4]=0u+0x00000037u; // 800ED728
  c->lr=0x800ED730u; f_80073960(c); // 800ED72C
  c->r[3]=0u+0x00000001u; // 800ED730
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED734
  c->lr=c->r[0]; // 800ED738
  c->r[1]=c->r[1]+0x00000010u; // 800ED73C
  return; // 800ED740
}

// fn_800ED744
void f_800ED744(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800ED744
  return; // 800ED748
}

// fn_800ED74C
void f_800ED74C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED74C
  c->r[0]=c->lr; // 800ED750
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED754
  c->lr=0x800ED75Cu; f_8006E268(c); // 800ED758
  c->r[4]=0u+0x00000037u; // 800ED75C
  c->lr=0x800ED764u; f_80073960(c); // 800ED760
  c->r[3]=0u+0x00000001u; // 800ED764
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED768
  c->lr=c->r[0]; // 800ED76C
  c->r[1]=c->r[1]+0x00000010u; // 800ED770
  return; // 800ED774
}

// fn_800ED778
void f_800ED778(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800ED778
  return; // 800ED77C
}

// fn_800ED780
void f_800ED780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED780
  c->r[0]=c->lr; // 800ED784
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED788
  c->lr=0x800ED790u; f_8006E268(c); // 800ED78C
  c->r[4]=0u+0x00000037u; // 800ED790
  c->lr=0x800ED798u; f_80073960(c); // 800ED794
  c->r[3]=0u+0x00000001u; // 800ED798
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED79C
  c->lr=c->r[0]; // 800ED7A0
  c->r[1]=c->r[1]+0x00000010u; // 800ED7A4
  return; // 800ED7A8
}

// fn_800ED7AC
void f_800ED7AC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800ED7AC
  return; // 800ED7B0
}

// fn_800ED7B4
void f_800ED7B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED7B4
  c->r[0]=c->lr; // 800ED7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED7BC
  c->lr=0x800ED7C4u; f_8006E268(c); // 800ED7C0
  c->r[4]=0u+0x00000037u; // 800ED7C4
  c->lr=0x800ED7CCu; f_80073960(c); // 800ED7C8
  c->r[3]=0u+0x00000001u; // 800ED7CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED7D0
  c->lr=c->r[0]; // 800ED7D4
  c->r[1]=c->r[1]+0x00000010u; // 800ED7D8
  return; // 800ED7DC
}

// fn_800ED7E0
void f_800ED7E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED7E0
  c->r[0]=c->lr; // 800ED7E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED7E8
  c->lr=0x800ED7F0u; f_8006E268(c); // 800ED7EC
  c->r[4]=0u+0x00000037u; // 800ED7F0
  c->lr=0x800ED7F8u; f_80073960(c); // 800ED7F4
  c->lr=0x800ED7FCu; f_8006E268(c); // 800ED7F8
  c->r[4]=0u+0x00000001u; // 800ED7FC
  c->lr=0x800ED804u; f_80073A30(c); // 800ED800
  c->r[3]=0u+0x00000001u; // 800ED804
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED808
  c->lr=c->r[0]; // 800ED80C
  c->r[1]=c->r[1]+0x00000010u; // 800ED810
  return; // 800ED814
}

// fn_800ED818
void f_800ED818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED818
  c->r[0]=c->lr; // 800ED81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED820
  c->lr=0x800ED828u; f_8006E268(c); // 800ED824
  c->r[4]=0u+0x00000000u; // 800ED828
  c->lr=0x800ED830u; f_80073960(c); // 800ED82C
  c->lr=0x800ED834u; f_8006E268(c); // 800ED830
  c->r[4]=0u+0x00000001u; // 800ED834
  c->lr=0x800ED83Cu; f_80073A30(c); // 800ED838
  c->r[3]=0u+0x00000001u; // 800ED83C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED840
  c->lr=c->r[0]; // 800ED844
  c->r[1]=c->r[1]+0x00000010u; // 800ED848
  return; // 800ED84C
}

// fn_800ED850
void f_800ED850(Ctx* __restrict c) {
  c->r[0]=0u+0x0000000Eu; // 800ED850
  W32(c->r[3]+0x00000030u,c->r[0]); // 800ED854
  c->r[3]=0u+0x00000000u; // 800ED858
  return; // 800ED85C
}

// fn_800ED860
void f_800ED860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED860
  c->r[0]=c->lr; // 800ED864
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800ED86C
  c->r[31]=c->r[3]|c->r[3]; // 800ED870
  c->lr=0x800ED878u; f_8007B524(c); // 800ED874
  c->lr=0x800ED87Cu; f_800A1EE8(c); // 800ED878
  cmps(c,0,(int32_t)c->r[3],0); // 800ED87C
  if (crb(c,2)) { goto L_800ED894; } // 800ED880
  c->lr=0x800ED888u; f_8006E268(c); // 800ED884
  c->r[4]=0u+0x00000034u; // 800ED888
  c->lr=0x800ED890u; f_80073960(c); // 800ED88C
  goto L_800ED89C; // 800ED890
L_800ED894:;
  c->r[0]=0u+0x0000000Fu; // 800ED894
  W32(c->r[31]+0x00000030u,c->r[0]); // 800ED898
L_800ED89C:;
  c->r[3]=0u+0x00000000u; // 800ED89C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800ED8A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED8A4
  c->lr=c->r[0]; // 800ED8A8
  c->r[1]=c->r[1]+0x00000010u; // 800ED8AC
  return; // 800ED8B0
}

// fn_800ED8B4
void f_800ED8B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED8B4
  c->r[0]=c->lr; // 800ED8B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED8BC
  c->lr=0x800ED8C4u; f_8007B524(c); // 800ED8C0
  c->lr=0x800ED8C8u; f_800A1EE8(c); // 800ED8C4
  cmps(c,0,(int32_t)c->r[3],0); // 800ED8C8
  if (crb(c,2)) { goto L_800ED8E0; } // 800ED8CC
  c->lr=0x800ED8D4u; f_8006E268(c); // 800ED8D0
  c->r[4]=0u+0x00000034u; // 800ED8D4
  c->lr=0x800ED8DCu; f_80073960(c); // 800ED8D8
  goto L_800ED8EC; // 800ED8DC
L_800ED8E0:;
  c->lr=0x800ED8E4u; f_8006E268(c); // 800ED8E0
  c->r[4]=0u+0x00000037u; // 800ED8E4
  c->lr=0x800ED8ECu; f_80073960(c); // 800ED8E8
L_800ED8EC:;
  c->r[3]=0u+0x00000000u; // 800ED8EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED8F0
  c->lr=c->r[0]; // 800ED8F4
  c->r[1]=c->r[1]+0x00000010u; // 800ED8F8
  return; // 800ED8FC
}

// fn_800ED900
void f_800ED900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED900
  c->r[0]=c->lr; // 800ED904
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED908
  c->lr=0x800ED910u; f_8007B524(c); // 800ED90C
  c->lr=0x800ED914u; f_800A1F9C(c); // 800ED910
  cmps(c,0,(int32_t)c->r[3],0); // 800ED914
  if (crb(c,2)) { goto L_800ED924; } // 800ED918
  c->r[3]=0u+0x00000000u; // 800ED91C
  goto L_800ED934; // 800ED920
L_800ED924:;
  c->lr=0x800ED928u; f_8006E268(c); // 800ED924
  c->r[4]=0u+0x00000035u; // 800ED928
  c->lr=0x800ED930u; f_80073960(c); // 800ED92C
  c->r[3]=0u+0x00000001u; // 800ED930
L_800ED934:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED934
  c->lr=c->r[0]; // 800ED938
  c->r[1]=c->r[1]+0x00000010u; // 800ED93C
  return; // 800ED940
}

// fn_800ED944
void f_800ED944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED944
  c->r[0]=c->lr; // 800ED948
  W32(c->r[1]+0x00000014u,c->r[0]); // 800ED94C
  c->lr=0x800ED954u; f_8006E268(c); // 800ED950
  c->r[4]=0u+0x00000000u; // 800ED954
  c->lr=0x800ED95Cu; f_80073960(c); // 800ED958
  c->r[3]=0u+0x00000001u; // 800ED95C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800ED960
  c->lr=c->r[0]; // 800ED964
  c->r[1]=c->r[1]+0x00000010u; // 800ED968
  return; // 800ED96C
}

// fn_800ED970
void f_800ED970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED970
  c->r[0]=c->lr; // 800ED974
  W32(c->r[1]+0x00000024u,c->r[0]); // 800ED978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED97C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ED980
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ED984
  c->r[29]=c->r[3]|c->r[3]; // 800ED988
  c->r[3]=0u+0x80430000u; // 800ED98C
  c->r[31]=c->r[3]+0xFFFFDBF0u; // 800ED990
L_800ED994:;
  c->lr=0x800ED998u; f_8006E268(c); // 800ED994
  c->lr=0x800ED99Cu; f_80089E10(c); // 800ED998
  c->r[30]=c->r[3]|c->r[3]; // 800ED99C
  c->lr=0x800ED9A4u; f_8006E268(c); // 800ED9A0
  c->r[4]=c->r[30]|c->r[30]; // 800ED9A4
  c->r[12]=R32(c->r[3]+0x00000058u); // 800ED9A8
  c->r[12]=R32(c->r[12]+0x00000040u); // 800ED9AC
  c->ctr=c->r[12]; // 800ED9B0
  if (true) { c->lr=0x800ED9B8u; dispatch(c,c->ctr); } // 800ED9B4
  c->lr=0x800ED9BCu; f_8006E268(c); // 800ED9B8
  c->lr=0x800ED9C0u; f_80089E10(c); // 800ED9BC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800ED9C0
  c->r[12]=c->r[31]+c->r[0]; // 800ED9C4
  c->r[3]=c->r[29]|c->r[29]; // 800ED9C8
  c->lr=0x800ED9D0u; f_802F09D0(c); // 800ED9CC
  c->r[0]=c->r[0]|0x00000000u; // 800ED9D0
  cmps(c,0,(int32_t)c->r[3],1); // 800ED9D4
  if (crb(c,2)) { IRQCHK(c); goto L_800ED994; } // 800ED9D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800ED9DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800ED9E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800ED9E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800ED9E8
  c->lr=c->r[0]; // 800ED9EC
  c->r[1]=c->r[1]+0x00000020u; // 800ED9F0
  return; // 800ED9F4
}

// fn_800ED9F8
void f_800ED9F8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800ED9F8
  c->r[0]=0u+0x00000003u; // 800ED9FC
  W32(c->r[3]+0x0000014Cu,c->r[4]); // 800EDA00
  W32(c->r[3]+0x00000150u,c->r[0]); // 800EDA04
  W32(c->r[3]+0x00000154u,c->r[4]); // 800EDA08
  W32(c->r[3]+0x00000158u,c->r[4]); // 800EDA0C
  W32(c->r[3]+0x0000015Cu,c->r[0]); // 800EDA10
  W32(c->r[3]+0x00000160u,c->r[4]); // 800EDA14
  W32(c->r[3]+0x00000164u,c->r[4]); // 800EDA18
  W32(c->r[3]+0x00000168u,c->r[0]); // 800EDA1C
  W32(c->r[3]+0x0000016Cu,c->r[4]); // 800EDA20
  W32(c->r[3]+0x00000170u,c->r[4]); // 800EDA24
  W32(c->r[3]+0x00000174u,c->r[0]); // 800EDA28
  W32(c->r[3]+0x00000178u,c->r[4]); // 800EDA2C
  W32(c->r[3]+0x0000017Cu,c->r[4]); // 800EDA30
  W32(c->r[3]+0x00000180u,c->r[0]); // 800EDA34
  W32(c->r[3]+0x00000184u,c->r[4]); // 800EDA38
  W32(c->r[3]+0x00000188u,c->r[4]); // 800EDA3C
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 800EDA40
  W32(c->r[3]+0x00000190u,c->r[4]); // 800EDA44
  W32(c->r[3]+0x00000194u,c->r[4]); // 800EDA48
  W32(c->r[3]+0x00000198u,c->r[0]); // 800EDA4C
  W32(c->r[3]+0x0000019Cu,c->r[4]); // 800EDA50
  W32(c->r[3]+0x000001A0u,c->r[4]); // 800EDA54
  W32(c->r[3]+0x000001A4u,c->r[0]); // 800EDA58
  W32(c->r[3]+0x000001A8u,c->r[4]); // 800EDA5C
  W32(c->r[3]+0x000001ACu,c->r[4]); // 800EDA60
  W32(c->r[3]+0x000001B0u,c->r[0]); // 800EDA64
  W32(c->r[3]+0x000001B4u,c->r[4]); // 800EDA68
  W32(c->r[3]+0x000001B8u,c->r[4]); // 800EDA6C
  W32(c->r[3]+0x000001BCu,c->r[0]); // 800EDA70
  W32(c->r[3]+0x000001C0u,c->r[4]); // 800EDA74
  W32(c->r[3]+0x000001C4u,c->r[4]); // 800EDA78
  W32(c->r[3]+0x000001C8u,c->r[0]); // 800EDA7C
  W32(c->r[3]+0x000001CCu,c->r[4]); // 800EDA80
  W32(c->r[3]+0x000001D0u,c->r[4]); // 800EDA84
  W32(c->r[3]+0x000001D4u,c->r[0]); // 800EDA88
  W32(c->r[3]+0x000001D8u,c->r[4]); // 800EDA8C
  W32(c->r[3]+0x000001DCu,c->r[4]); // 800EDA90
  W32(c->r[3]+0x000001E0u,c->r[0]); // 800EDA94
  W32(c->r[3]+0x000001E4u,c->r[4]); // 800EDA98
  W32(c->r[3]+0x000001E8u,c->r[4]); // 800EDA9C
  W32(c->r[3]+0x000001ECu,c->r[0]); // 800EDAA0
  W32(c->r[3]+0x000001F0u,c->r[4]); // 800EDAA4
  W32(c->r[3]+0x000001F4u,c->r[4]); // 800EDAA8
  W32(c->r[3]+0x000001F8u,c->r[0]); // 800EDAAC
  W32(c->r[3]+0x000001FCu,c->r[4]); // 800EDAB0
  W32(c->r[3]+0x00000200u,c->r[4]); // 800EDAB4
  W32(c->r[3]+0x00000204u,c->r[0]); // 800EDAB8
  W32(c->r[3]+0x00000208u,c->r[4]); // 800EDABC
  return; // 800EDAC0
}

// fn_800EDAC4
void f_800EDAC4(Ctx* __restrict c) {
  c->r[8]=0u+0x00000000u; // 800EDAC4
  c->r[7]=c->r[3]+0x0000014Cu; // 800EDAC8
  c->r[3]=0u+0x00000000u; // 800EDACC
  c->r[0]=0u+0x00000004u; // 800EDAD0
  c->ctr=c->r[0]; // 800EDAD4
L_800EDAD8:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 800EDAD8
  cmps(c,0,(int32_t)c->r[0],3); // 800EDADC
  if (crb(c,2)) { goto L_800EDAF0; } // 800EDAE0
  c->r[0]=R32(c->r[7]+0x00000000u); // 800EDAE4
  cmps(c,0,(int32_t)c->r[0],255); // 800EDAE8
  if (!crb(c,2)) { goto L_800EDB00; } // 800EDAEC
L_800EDAF0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800EDAF0
  if (!crb(c,2)) { goto L_800EDB1C; } // 800EDAF4
  c->r[8]=c->r[7]|c->r[7]; // 800EDAF8
  goto L_800EDB1C; // 800EDAFC
L_800EDB00:;
  cmps(c,0,(int32_t)c->r[6],0); // 800EDB00
  if (crb(c,2)) { goto L_800EDB1C; } // 800EDB04
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EDB08
  cmpu(c,0,c->r[0],c->r[5]); // 800EDB0C
  if (!crb(c,2)) { goto L_800EDB1C; } // 800EDB10
  c->r[3]=0u+0x00000000u; // 800EDB14
  return; // 800EDB18
L_800EDB1C:;
  c->r[7]=c->r[7]+0x0000000Cu; // 800EDB1C
  c->r[0]=R32(c->r[7]+0x00000004u); // 800EDB20
  cmps(c,0,(int32_t)c->r[0],3); // 800EDB24
  if (crb(c,2)) { goto L_800EDB38; } // 800EDB28
  c->r[0]=R32(c->r[7]+0x00000000u); // 800EDB2C
  cmps(c,0,(int32_t)c->r[0],255); // 800EDB30
  if (!crb(c,2)) { goto L_800EDB48; } // 800EDB34
L_800EDB38:;
  cmps(c,0,(int32_t)c->r[8],0); // 800EDB38
  if (!crb(c,2)) { goto L_800EDB64; } // 800EDB3C
  c->r[8]=c->r[7]|c->r[7]; // 800EDB40
  goto L_800EDB64; // 800EDB44
L_800EDB48:;
  cmps(c,0,(int32_t)c->r[6],0); // 800EDB48
  if (crb(c,2)) { goto L_800EDB64; } // 800EDB4C
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EDB50
  cmpu(c,0,c->r[0],c->r[5]); // 800EDB54
  if (!crb(c,2)) { goto L_800EDB64; } // 800EDB58
  c->r[3]=0u+0x00000000u; // 800EDB5C
  return; // 800EDB60
L_800EDB64:;
  c->r[7]=c->r[7]+0x0000000Cu; // 800EDB64
  c->r[0]=R32(c->r[7]+0x00000004u); // 800EDB68
  cmps(c,0,(int32_t)c->r[0],3); // 800EDB6C
  if (crb(c,2)) { goto L_800EDB80; } // 800EDB70
  c->r[0]=R32(c->r[7]+0x00000000u); // 800EDB74
  cmps(c,0,(int32_t)c->r[0],255); // 800EDB78
  if (!crb(c,2)) { goto L_800EDB90; } // 800EDB7C
L_800EDB80:;
  cmps(c,0,(int32_t)c->r[8],0); // 800EDB80
  if (!crb(c,2)) { goto L_800EDBAC; } // 800EDB84
  c->r[8]=c->r[7]|c->r[7]; // 800EDB88
  goto L_800EDBAC; // 800EDB8C
L_800EDB90:;
  cmps(c,0,(int32_t)c->r[6],0); // 800EDB90
  if (crb(c,2)) { goto L_800EDBAC; } // 800EDB94
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EDB98
  cmpu(c,0,c->r[0],c->r[5]); // 800EDB9C
  if (!crb(c,2)) { goto L_800EDBAC; } // 800EDBA0
  c->r[3]=0u+0x00000000u; // 800EDBA4
  return; // 800EDBA8
L_800EDBAC:;
  c->r[7]=c->r[7]+0x0000000Cu; // 800EDBAC
  c->r[0]=R32(c->r[7]+0x00000004u); // 800EDBB0
  cmps(c,0,(int32_t)c->r[0],3); // 800EDBB4
  if (crb(c,2)) { goto L_800EDBC8; } // 800EDBB8
  c->r[0]=R32(c->r[7]+0x00000000u); // 800EDBBC
  cmps(c,0,(int32_t)c->r[0],255); // 800EDBC0
  if (!crb(c,2)) { goto L_800EDBD8; } // 800EDBC4
L_800EDBC8:;
  cmps(c,0,(int32_t)c->r[8],0); // 800EDBC8
  if (!crb(c,2)) { goto L_800EDBF4; } // 800EDBCC
  c->r[8]=c->r[7]|c->r[7]; // 800EDBD0
  goto L_800EDBF4; // 800EDBD4
L_800EDBD8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800EDBD8
  if (crb(c,2)) { goto L_800EDBF4; } // 800EDBDC
  c->r[0]=R32(c->r[7]+0x00000008u); // 800EDBE0
  cmpu(c,0,c->r[0],c->r[5]); // 800EDBE4
  if (!crb(c,2)) { goto L_800EDBF4; } // 800EDBE8
  c->r[3]=0u+0x00000000u; // 800EDBEC
  return; // 800EDBF0
L_800EDBF4:;
  c->r[3]=c->r[3]+0x00000003u; // 800EDBF4
  c->r[7]=c->r[7]+0x0000000Cu; // 800EDBF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDAD8; } // 800EDBFC
  cmps(c,0,(int32_t)c->r[8],0); // 800EDC00
  if (crb(c,2)) { goto L_800EDC20; } // 800EDC04
  c->r[0]=0u+0x00000000u; // 800EDC08
  W32(c->r[8]+0x00000000u,c->r[0]); // 800EDC0C
  W32(c->r[8]+0x00000004u,c->r[4]); // 800EDC10
  W32(c->r[8]+0x00000008u,c->r[5]); // 800EDC14
  c->r[3]=0u+0x00000001u; // 800EDC18
  return; // 800EDC1C
L_800EDC20:;
  c->r[3]=0u+0x00000000u; // 800EDC20
  return; // 800EDC24
}

// fn_800EDC28
void f_800EDC28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDC28
  c->r[0]=c->lr; // 800EDC2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDC30
  c->r[11]=c->r[1]+0x00000020u; // 800EDC34
  c->lr=0x800EDC3Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EDC38
  c->r[27]=c->r[3]+0x0000014Cu; // 800EDC3C
  c->r[29]=0u+0x00000000u; // 800EDC40
  c->r[28]=0u+0x00000000u; // 800EDC44
  c->r[30]=0u+0x00000000u; // 800EDC48
  c->r[31]=0u+0x000000FFu; // 800EDC4C
L_800EDC50:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 800EDC50
  cmps(c,0,(int32_t)c->r[0],1); // 800EDC54
  if (crb(c,2)) { goto L_800EDD08; } // 800EDC58
  if (!crb(c,0)) { goto L_800EDC6C; } // 800EDC5C
  cmps(c,0,(int32_t)c->r[0],0); // 800EDC60
  if (!crb(c,0)) { goto L_800EDC78; } // 800EDC64
  goto L_800EDE28; // 800EDC68
L_800EDC6C:;
  cmps(c,0,(int32_t)c->r[0],3); // 800EDC6C
  if (!crb(c,0)) { goto L_800EDE28; } // 800EDC70
  goto L_800EDD98; // 800EDC74
L_800EDC78:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EDC78
  cmps(c,0,(int32_t)c->r[0],1); // 800EDC7C
  if (crb(c,2)) { goto L_800EDCDC; } // 800EDC80
  if (!crb(c,0)) { goto L_800EDC94; } // 800EDC84
  cmps(c,0,(int32_t)c->r[0],0); // 800EDC88
  if (!crb(c,0)) { goto L_800EDCA0; } // 800EDC8C
  goto L_800EDE2C; // 800EDC90
L_800EDC94:;
  cmps(c,0,(int32_t)c->r[0],255); // 800EDC94
  if (crb(c,2)) { goto L_800EDD00; } // 800EDC98
  goto L_800EDE2C; // 800EDC9C
L_800EDCA0:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDCA0
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDCA4
  c->r[12]=R32(c->r[12]+0x00000020u); // 800EDCA8
  c->ctr=c->r[12]; // 800EDCAC
  if (true) { c->lr=0x800EDCB4u; dispatch(c,c->ctr); } // 800EDCB0
  cmps(c,0,(int32_t)c->r[3],0); // 800EDCB4
  if (!crb(c,2)) { goto L_800EDCD0; } // 800EDCB8
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDCBC
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDCC0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800EDCC4
  c->ctr=c->r[12]; // 800EDCC8
  if (true) { c->lr=0x800EDCD0u; dispatch(c,c->ctr); } // 800EDCCC
L_800EDCD0:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800EDCD0
  c->r[0]=c->r[3]+0x00000001u; // 800EDCD4
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EDCD8
L_800EDCDC:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDCDC
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDCE0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800EDCE4
  c->ctr=c->r[12]; // 800EDCE8
  if (true) { c->lr=0x800EDCF0u; dispatch(c,c->ctr); } // 800EDCEC
  cmps(c,0,(int32_t)c->r[3],0); // 800EDCF0
  if (crb(c,2)) { goto L_800EDE2C; } // 800EDCF4
  W32(c->r[27]+0x00000000u,c->r[31]); // 800EDCF8
  goto L_800EDE2C; // 800EDCFC
L_800EDD00:;
  c->r[29]=c->r[29]+0x00000001u; // 800EDD00
  goto L_800EDE2C; // 800EDD04
L_800EDD08:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EDD08
  cmps(c,0,(int32_t)c->r[0],1); // 800EDD0C
  if (crb(c,2)) { goto L_800EDD6C; } // 800EDD10
  if (!crb(c,0)) { goto L_800EDD24; } // 800EDD14
  cmps(c,0,(int32_t)c->r[0],0); // 800EDD18
  if (!crb(c,0)) { goto L_800EDD30; } // 800EDD1C
  goto L_800EDE2C; // 800EDD20
L_800EDD24:;
  cmps(c,0,(int32_t)c->r[0],255); // 800EDD24
  if (crb(c,2)) { goto L_800EDD90; } // 800EDD28
  goto L_800EDE2C; // 800EDD2C
L_800EDD30:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDD30
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDD34
  c->r[12]=R32(c->r[12]+0x00000030u); // 800EDD38
  c->ctr=c->r[12]; // 800EDD3C
  if (true) { c->lr=0x800EDD44u; dispatch(c,c->ctr); } // 800EDD40
  cmps(c,0,(int32_t)c->r[3],0); // 800EDD44
  if (!crb(c,2)) { goto L_800EDD60; } // 800EDD48
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDD4C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDD50
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800EDD54
  c->ctr=c->r[12]; // 800EDD58
  if (true) { c->lr=0x800EDD60u; dispatch(c,c->ctr); } // 800EDD5C
L_800EDD60:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800EDD60
  c->r[0]=c->r[3]+0x00000001u; // 800EDD64
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EDD68
L_800EDD6C:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDD6C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDD70
  c->r[12]=R32(c->r[12]+0x00000030u); // 800EDD74
  c->ctr=c->r[12]; // 800EDD78
  if (true) { c->lr=0x800EDD80u; dispatch(c,c->ctr); } // 800EDD7C
  cmps(c,0,(int32_t)c->r[3],0); // 800EDD80
  if (crb(c,2)) { goto L_800EDE2C; } // 800EDD84
  W32(c->r[27]+0x00000000u,c->r[31]); // 800EDD88
  goto L_800EDE2C; // 800EDD8C
L_800EDD90:;
  c->r[29]=c->r[29]+0x00000001u; // 800EDD90
  goto L_800EDE2C; // 800EDD94
L_800EDD98:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EDD98
  cmps(c,0,(int32_t)c->r[0],1); // 800EDD9C
  if (crb(c,2)) { goto L_800EDDFC; } // 800EDDA0
  if (!crb(c,0)) { goto L_800EDDB4; } // 800EDDA4
  cmps(c,0,(int32_t)c->r[0],0); // 800EDDA8
  if (!crb(c,0)) { goto L_800EDDC0; } // 800EDDAC
  goto L_800EDE2C; // 800EDDB0
L_800EDDB4:;
  cmps(c,0,(int32_t)c->r[0],255); // 800EDDB4
  if (crb(c,2)) { goto L_800EDE20; } // 800EDDB8
  goto L_800EDE2C; // 800EDDBC
L_800EDDC0:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDDC0
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDDC4
  c->r[12]=R32(c->r[12]+0x00000038u); // 800EDDC8
  c->ctr=c->r[12]; // 800EDDCC
  if (true) { c->lr=0x800EDDD4u; dispatch(c,c->ctr); } // 800EDDD0
  cmps(c,0,(int32_t)c->r[3],0); // 800EDDD4
  if (!crb(c,2)) { goto L_800EDDF0; } // 800EDDD8
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDDDC
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDDE0
  c->r[12]=R32(c->r[12]+0x00000034u); // 800EDDE4
  c->ctr=c->r[12]; // 800EDDE8
  if (true) { c->lr=0x800EDDF0u; dispatch(c,c->ctr); } // 800EDDEC
L_800EDDF0:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 800EDDF0
  c->r[0]=c->r[3]+0x00000001u; // 800EDDF4
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EDDF8
L_800EDDFC:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EDDFC
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EDE00
  c->r[12]=R32(c->r[12]+0x00000038u); // 800EDE04
  c->ctr=c->r[12]; // 800EDE08
  if (true) { c->lr=0x800EDE10u; dispatch(c,c->ctr); } // 800EDE0C
  cmps(c,0,(int32_t)c->r[3],0); // 800EDE10
  if (crb(c,2)) { goto L_800EDE2C; } // 800EDE14
  W32(c->r[27]+0x00000000u,c->r[31]); // 800EDE18
  goto L_800EDE2C; // 800EDE1C
L_800EDE20:;
  c->r[29]=c->r[29]+0x00000001u; // 800EDE20
  goto L_800EDE2C; // 800EDE24
L_800EDE28:;
  c->r[28]=c->r[28]+0x00000001u; // 800EDE28
L_800EDE2C:;
  c->r[30]=c->r[30]+0x00000001u; // 800EDE2C
  c->r[27]=c->r[27]+0x0000000Cu; // 800EDE30
  cmps(c,0,(int32_t)c->r[30],16); // 800EDE34
  if (crb(c,0)) { IRQCHK(c); goto L_800EDC50; } // 800EDE38
  c->r[0]=addc(c,~c->r[28],0x00000010u,1); // 800EDE3C
  c->r[0]=c->r[29]-c->r[0]; // 800EDE40
  c->r[0]=cntlz(c->r[0]); // 800EDE44
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EDE48
  c->r[11]=c->r[1]+0x00000020u; // 800EDE4C
  c->lr=0x800EDE54u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EDE50
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EDE54
  c->lr=c->r[0]; // 800EDE58
  c->r[1]=c->r[1]+0x00000020u; // 800EDE5C
  return; // 800EDE60
}

// fn_800EDE64
void f_800EDE64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDE64
  c->r[0]=c->lr; // 800EDE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDE70
  c->r[31]=c->r[3]|c->r[3]; // 800EDE74
  c->r[3]=c->r[3]+0x00000014u; // 800EDE78
  c->lr=0x800EDE80u; f_8004B0A4(c); // 800EDE7C
  c->r[3]=c->r[31]+0x00000020u; // 800EDE80
  c->lr=0x800EDE88u; f_8004B0A4(c); // 800EDE84
  c->r[3]=c->r[31]+0x0000002Cu; // 800EDE88
  c->lr=0x800EDE90u; f_8004B0A4(c); // 800EDE8C
  c->r[3]=c->r[31]+0x0000003Cu; // 800EDE90
  c->lr=0x800EDE98u; f_8004B0A4(c); // 800EDE94
  c->r[3]=c->r[31]+0x00000048u; // 800EDE98
  c->lr=0x800EDEA0u; f_8004B0A4(c); // 800EDE9C
  c->r[3]=c->r[31]+0x00000054u; // 800EDEA0
  c->lr=0x800EDEA8u; f_8005B418(c); // 800EDEA4
  c->r[3]=c->r[31]+0x00000070u; // 800EDEA8
  c->lr=0x800EDEB0u; f_8009CA7C(c); // 800EDEAC
  c->r[3]=c->r[31]+0x000000A4u; // 800EDEB0
  c->lr=0x800EDEB8u; f_8009CA7C(c); // 800EDEB4
  c->r[3]=c->r[31]+0x000000D8u; // 800EDEB8
  c->lr=0x800EDEC0u; f_8009CA7C(c); // 800EDEBC
  c->r[0]=0u+0x00000000u; // 800EDEC0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EDEC4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800EDEC8
  W32(c->r[31]+0x00000008u,c->r[0]); // 800EDECC
  c->lr=0x800EDED4u; f_800484B8(c); // 800EDED0
  c->r[4]=0u+0x00000000u; // 800EDED4
  c->lr=0x800EDEDCu; f_80048624(c); // 800EDED8
  W32(c->r[31]+0x00000004u,c->r[3]); // 800EDEDC
  {uint32_t ea=c->r[2]+0xFFFF8960u; c->f[2]=c->ps1[2]=RF32(ea);} // 800EDEE0
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[2]);} // 800EDEE4
  {uint32_t ea=c->r[2]+0xFFFF8964u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDEE8
  {uint32_t ea=c->r[31]+0x0000003Cu; WF32(ea,c->f[0]);} // 800EDEEC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EDEF0
  {uint32_t ea=c->r[31]+0x00000040u; WF32(ea,c->f[1]);} // 800EDEF4
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 800EDEF8
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 800EDEFC
  {uint32_t ea=c->r[2]+0xFFFF896Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EDF00
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 800EDF04
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 800EDF08
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[2]);} // 800EDF0C
  c->r[3]=c->r[31]+0x00000014u; // 800EDF10
  c->r[4]=c->r[31]+0x0000003Cu; // 800EDF14
  c->lr=0x800EDF1Cu; f_8004A65C(c); // 800EDF18
  c->r[3]=c->r[31]+0x00000020u; // 800EDF1C
  c->r[4]=c->r[31]+0x00000048u; // 800EDF20
  c->lr=0x800EDF28u; f_8004A65C(c); // 800EDF24
  c->r[3]=c->r[31]|c->r[31]; // 800EDF28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDF2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDF30
  c->lr=c->r[0]; // 800EDF34
  c->r[1]=c->r[1]+0x00000010u; // 800EDF38
  return; // 800EDF3C
}

// dtor_800EDF40
void f_800EDF40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDF40
  c->r[0]=c->lr; // 800EDF44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EDF48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EDF4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EDF50
  c->r[30]=c->r[3]|c->r[3]; // 800EDF54
  c->r[31]=c->r[4]|c->r[4]; // 800EDF58
  cmps(c,0,(int32_t)c->r[3],0); // 800EDF5C
  if (crb(c,2)) { goto L_800EDFA8; } // 800EDF60
  c->r[3]=c->r[3]+0x000000D8u; // 800EDF64
  c->r[4]=0u+0xFFFFFFFFu; // 800EDF68
  c->lr=0x800EDF70u; f_8005C0B4(c); // 800EDF6C
  c->r[3]=c->r[30]+0x000000A4u; // 800EDF70
  c->r[4]=0u+0xFFFFFFFFu; // 800EDF74
  c->lr=0x800EDF7Cu; f_8005C0B4(c); // 800EDF78
  c->r[3]=c->r[30]+0x00000070u; // 800EDF7C
  c->r[4]=0u+0xFFFFFFFFu; // 800EDF80
  c->lr=0x800EDF88u; f_8005C0B4(c); // 800EDF84
  c->r[3]=c->r[30]+0x00000054u; // 800EDF88
  c->r[4]=0u+0xFFFFFFFFu; // 800EDF8C
  c->lr=0x800EDF94u; f_8005B3BC(c); // 800EDF90
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800EDF94
  cmps(c,0,(int32_t)c->r[0],0); // 800EDF98
  if (!crb(c,1)) { goto L_800EDFA8; } // 800EDF9C
  c->r[3]=c->r[30]|c->r[30]; // 800EDFA0
  c->lr=0x800EDFA8u; f_80047B20(c); // 800EDFA4
L_800EDFA8:;
  c->r[3]=c->r[30]|c->r[30]; // 800EDFA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EDFAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EDFB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EDFB4
  c->lr=c->r[0]; // 800EDFB8
  c->r[1]=c->r[1]+0x00000010u; // 800EDFBC
  return; // 800EDFC0
}

// fn_800EDFC4
void f_800EDFC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDFC4
  c->r[0]=c->lr; // 800EDFC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EDFCC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EDFD0
  c->r[31]=c->r[3]|c->r[3]; // 800EDFD4
  c->r[3]=c->r[1]+0x00000008u; // 800EDFD8
  c->lr=0x800EDFE0u; f_8004B0A4(c); // 800EDFDC
  c->r[3]=c->r[31]|c->r[31]; // 800EDFE0
  c->lr=0x800EDFE8u; f_800EE3B0(c); // 800EDFE4
  cmps(c,0,(int32_t)c->r[3],0); // 800EDFE8
  if (crb(c,2)) { goto L_800EE374; } // 800EDFEC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800EDFF0
  cmps(c,0,(int32_t)c->r[0],1); // 800EDFF4
  if (crb(c,2)) { goto L_800EE094; } // 800EDFF8
  if (!crb(c,0)) { goto L_800EE00C; } // 800EDFFC
  cmps(c,0,(int32_t)c->r[0],0); // 800EE000
  if (!crb(c,0)) { goto L_800EE018; } // 800EE004
  goto L_800EE358; // 800EE008
L_800EE00C:;
  cmps(c,0,(int32_t)c->r[0],3); // 800EE00C
  if (!crb(c,0)) { goto L_800EE358; } // 800EE010
  goto L_800EE1EC; // 800EE014
L_800EE018:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EE018
  cmps(c,0,(int32_t)c->r[3],0); // 800EE01C
  if (!crb(c,2)) { goto L_800EE034; } // 800EE020
  c->lr=0x800EE028u; f_8007B524(c); // 800EE024
  c->lr=0x800EE02Cu; f_8006E22C(c); // 800EE028
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800EE02C
  goto L_800EE374; // 800EE030
L_800EE034:;
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EE034
  c->r[12]=R32(c->r[12]+0x00000020u); // 800EE038
  c->ctr=c->r[12]; // 800EE03C
  if (true) { c->lr=0x800EE044u; dispatch(c,c->ctr); } // 800EE040
  cmps(c,0,(int32_t)c->r[3],0); // 800EE044
  if (crb(c,2)) { goto L_800EE374; } // 800EE048
  c->r[3]=R32(c->r[31]+0x00000004u); // 800EE04C
  c->r[4]=0u+0x00000020u; // 800EE050
  c->lr=0x800EE058u; f_8005EE5C(c); // 800EE054
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EE058
  c->lr=0x800EE060u; f_8006E48C(c); // 800EE05C
  c->lr=0x800EE064u; f_8006E484(c); // 800EE060
  c->r[4]=c->r[31]+0x0000002Cu; // 800EE064
  c->lr=0x800EE06Cu; f_8009BBE4(c); // 800EE068
  c->r[3]=c->r[31]+0x00000014u; // 800EE06C
  c->r[4]=c->r[31]+0x0000003Cu; // 800EE070
  c->lr=0x800EE078u; f_8004A65C(c); // 800EE074
  c->r[3]=c->r[31]+0x00000020u; // 800EE078
  c->r[4]=c->r[31]+0x00000048u; // 800EE07C
  c->r[5]=c->r[31]+0x0000002Cu; // 800EE080
  c->lr=0x800EE088u; f_8005C194(c); // 800EE084
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE088
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800EE08C
  goto L_800EE358; // 800EE090
L_800EE094:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EE094
  cmps(c,0,(int32_t)c->r[3],0); // 800EE098
  if (!crb(c,2)) { goto L_800EE0B0; } // 800EE09C
  c->lr=0x800EE0A4u; f_8007B524(c); // 800EE0A0
  c->lr=0x800EE0A8u; f_8006E22C(c); // 800EE0A4
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800EE0A8
  goto L_800EE374; // 800EE0AC
L_800EE0B0:;
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EE0B0
  c->r[12]=R32(c->r[12]+0x00000020u); // 800EE0B4
  c->ctr=c->r[12]; // 800EE0B8
  if (true) { c->lr=0x800EE0C0u; dispatch(c,c->ctr); } // 800EE0BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE0C0
  if (crb(c,2)) { goto L_800EE374; } // 800EE0C4
  c->r[3]=c->r[31]+0x000000A4u; // 800EE0C8
  c->r[4]=0u+0x00000002u; // 800EE0CC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE0D0
  c->lr=0x800EE0D8u; f_8005BFF4(c); // 800EE0D4
  c->r[3]=c->r[31]+0x00000054u; // 800EE0D8
  c->r[4]=0u+0x00000002u; // 800EE0DC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE0E0
  c->lr=0x800EE0E8u; f_8005BFDC(c); // 800EE0E4
  c->r[3]=c->r[31]+0x00000070u; // 800EE0E8
  c->r[4]=0u+0x00000002u; // 800EE0EC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE0F0
  c->lr=0x800EE0F8u; f_8005BFF4(c); // 800EE0F4
  c->r[3]=c->r[31]+0x000000D8u; // 800EE0F8
  c->r[4]=0u+0x00000002u; // 800EE0FC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE100
  c->lr=0x800EE108u; f_8005BFF4(c); // 800EE104
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE108
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE10C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EE110
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800EE114
  c->r[3]=c->r[31]+0x00000014u; // 800EE118
  c->r[4]=c->r[31]+0x00000080u; // 800EE11C
  c->r[5]=c->r[31]+0x0000003Cu; // 800EE120
  c->lr=0x800EE128u; f_8005C194(c); // 800EE124
  c->r[3]=c->r[31]+0x00000020u; // 800EE128
  c->r[4]=c->r[31]+0x000000B4u; // 800EE12C
  c->r[5]=c->r[31]+0x00000048u; // 800EE130
  c->lr=0x800EE138u; f_8005C194(c); // 800EE134
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EE138
  c->lr=0x800EE140u; f_8006E48C(c); // 800EE13C
  c->lr=0x800EE144u; f_8006E484(c); // 800EE140
  c->r[4]=c->r[31]+0x0000002Cu; // 800EE144
  c->lr=0x800EE14Cu; f_8009BBE4(c); // 800EE148
  c->r[3]=c->r[31]+0x00000020u; // 800EE14C
  c->r[4]=c->r[3]|c->r[3]; // 800EE150
  c->r[5]=c->r[31]+0x0000002Cu; // 800EE154
  c->lr=0x800EE15Cu; f_8005C194(c); // 800EE158
  c->r[3]=0u+0x00000001u; // 800EE15C
  c->lr=0x800EE164u; f_8005D714(c); // 800EE160
  c->r[3]=c->r[31]+0x000000A4u; // 800EE164
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE168
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE16C
  c->ctr=c->r[12]; // 800EE170
  if (true) { c->lr=0x800EE178u; dispatch(c,c->ctr); } // 800EE174
  c->r[3]=0u+0x00000001u; // 800EE178
  c->lr=0x800EE180u; f_8005D714(c); // 800EE17C
  c->r[3]=c->r[31]+0x00000054u; // 800EE180
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE184
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE188
  c->ctr=c->r[12]; // 800EE18C
  if (true) { c->lr=0x800EE194u; dispatch(c,c->ctr); } // 800EE190
  c->r[3]=0u+0x00000001u; // 800EE194
  c->lr=0x800EE19Cu; f_8005D714(c); // 800EE198
  c->r[3]=c->r[31]+0x00000070u; // 800EE19C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE1A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE1A4
  c->ctr=c->r[12]; // 800EE1A8
  if (true) { c->lr=0x800EE1B0u; dispatch(c,c->ctr); } // 800EE1AC
  c->r[3]=0u+0x00000001u; // 800EE1B0
  c->lr=0x800EE1B8u; f_8005D714(c); // 800EE1B4
  c->r[3]=c->r[31]+0x000000D8u; // 800EE1B8
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE1BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE1C0
  c->ctr=c->r[12]; // 800EE1C4
  if (true) { c->lr=0x800EE1CCu; dispatch(c,c->ctr); } // 800EE1C8
  c->r[3]=c->r[31]+0x00000054u; // 800EE1CC
  c->lr=0x800EE1D4u; f_8005BB70(c); // 800EE1D0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE1D4
  if (crb(c,2)) { goto L_800EE358; } // 800EE1D8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE1DC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 800EE1E0
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EE1E4
  goto L_800EE358; // 800EE1E8
L_800EE1EC:;
  c->r[3]=c->r[31]+0x000000A4u; // 800EE1EC
  c->r[4]=0u+0x00000002u; // 800EE1F0
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE1F4
  c->lr=0x800EE1FCu; f_8005BFF4(c); // 800EE1F8
  c->r[3]=c->r[31]+0x00000054u; // 800EE1FC
  c->r[4]=0u+0x00000002u; // 800EE200
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE204
  c->lr=0x800EE20Cu; f_8005BFDC(c); // 800EE208
  c->r[3]=c->r[31]+0x00000070u; // 800EE20C
  c->r[4]=0u+0x00000002u; // 800EE210
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE214
  c->lr=0x800EE21Cu; f_8005BFF4(c); // 800EE218
  c->r[3]=c->r[31]+0x000000D8u; // 800EE21C
  c->r[4]=0u+0x00000002u; // 800EE220
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE224
  c->lr=0x800EE22Cu; f_8005BFF4(c); // 800EE228
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE22C
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE230
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EE234
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 800EE238
  c->r[3]=c->r[31]+0x00000014u; // 800EE23C
  c->r[4]=c->r[31]+0x00000080u; // 800EE240
  c->r[5]=c->r[31]+0x0000003Cu; // 800EE244
  c->lr=0x800EE24Cu; f_8005C194(c); // 800EE248
  c->r[3]=c->r[31]+0x00000020u; // 800EE24C
  c->r[4]=c->r[31]+0x000000B4u; // 800EE250
  c->r[5]=c->r[31]+0x00000048u; // 800EE254
  c->lr=0x800EE25Cu; f_8005C194(c); // 800EE258
  c->r[3]=c->r[31]+0x0000002Cu; // 800EE25C
  c->r[4]=c->r[31]+0x000000E8u; // 800EE260
  c->lr=0x800EE268u; f_8004A65C(c); // 800EE264
  c->r[3]=c->r[31]+0x00000020u; // 800EE268
  c->r[4]=c->r[3]|c->r[3]; // 800EE26C
  c->r[5]=c->r[31]+0x0000002Cu; // 800EE270
  c->lr=0x800EE278u; f_8005C194(c); // 800EE274
  c->r[3]=0u+0x00000001u; // 800EE278
  c->lr=0x800EE280u; f_8005D714(c); // 800EE27C
  c->r[3]=c->r[31]+0x000000A4u; // 800EE280
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE284
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE288
  c->ctr=c->r[12]; // 800EE28C
  if (true) { c->lr=0x800EE294u; dispatch(c,c->ctr); } // 800EE290
  c->r[3]=0u+0x00000001u; // 800EE294
  c->lr=0x800EE29Cu; f_8005D714(c); // 800EE298
  c->r[3]=c->r[31]+0x00000054u; // 800EE29C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE2A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE2A4
  c->ctr=c->r[12]; // 800EE2A8
  if (true) { c->lr=0x800EE2B0u; dispatch(c,c->ctr); } // 800EE2AC
  c->r[3]=0u+0x00000001u; // 800EE2B0
  c->lr=0x800EE2B8u; f_8005D714(c); // 800EE2B4
  c->r[3]=c->r[31]+0x00000070u; // 800EE2B8
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE2BC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE2C0
  c->ctr=c->r[12]; // 800EE2C4
  if (true) { c->lr=0x800EE2CCu; dispatch(c,c->ctr); } // 800EE2C8
  c->r[3]=0u+0x00000001u; // 800EE2CC
  c->lr=0x800EE2D4u; f_8005D714(c); // 800EE2D0
  c->r[3]=c->r[31]+0x000000D8u; // 800EE2D4
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800EE2D8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 800EE2DC
  c->ctr=c->r[12]; // 800EE2E0
  if (true) { c->lr=0x800EE2E8u; dispatch(c,c->ctr); } // 800EE2E4
  c->r[3]=c->r[31]+0x000000A4u; // 800EE2E8
  c->lr=0x800EE2F0u; f_8005BB70(c); // 800EE2EC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE2F0
  if (crb(c,2)) { goto L_800EE304; } // 800EE2F4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE2F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800EE2FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EE300
L_800EE304:;
  c->r[3]=c->r[31]+0x00000054u; // 800EE304
  c->lr=0x800EE30Cu; f_8005BB70(c); // 800EE308
  cmps(c,0,(int32_t)c->r[3],0); // 800EE30C
  if (crb(c,2)) { goto L_800EE320; } // 800EE310
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE314
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800EE318
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EE31C
L_800EE320:;
  c->r[3]=c->r[31]+0x00000070u; // 800EE320
  c->lr=0x800EE328u; f_8005BB70(c); // 800EE324
  cmps(c,0,(int32_t)c->r[3],0); // 800EE328
  if (crb(c,2)) { goto L_800EE33C; } // 800EE32C
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE330
  c->r[0]=rotl(c->r[0],0)&0xFFFFEFFFu; // 800EE334
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EE338
L_800EE33C:;
  c->r[3]=c->r[31]+0x000000D8u; // 800EE33C
  c->lr=0x800EE344u; f_8005BB70(c); // 800EE340
  cmps(c,0,(int32_t)c->r[3],0); // 800EE344
  if (crb(c,2)) { goto L_800EE358; } // 800EE348
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE34C
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800EE350
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EE354
L_800EE358:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 800EE358
  c->r[4]=c->r[31]+0x00000014u; // 800EE35C
  c->r[5]=c->r[31]+0x00000020u; // 800EE360
  c->r[6]=c->r[31]+0x00000010u; // 800EE364
  c->lr=0x800EE36Cu; f_8005F090(c); // 800EE368
  c->lr=0x800EE370u; f_8007B524(c); // 800EE36C
  c->lr=0x800EE374u; f_800A196C(c); // 800EE370
L_800EE374:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EE374
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE378
  c->lr=c->r[0]; // 800EE37C
  c->r[1]=c->r[1]+0x00000020u; // 800EE380
  return; // 800EE384
}

// fn_800EE388
void f_800EE388(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800EE388
  if (crb(c,2)) { goto L_800EE3A0; } // 800EE38C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE390
  c->r[0]=c->r[0]|0x00000001u; // 800EE394
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE398
  return; // 800EE39C
L_800EE3A0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE3A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800EE3A4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE3A8
  return; // 800EE3AC
}

// fn_800EE3B0
void f_800EE3B0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE3B0
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800EE3B4
  c->r[0]=0u-c->r[3]; // 800EE3B8
  c->r[0]=c->r[0]|c->r[3]; // 800EE3BC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800EE3C0
  return; // 800EE3C4
}

// fn_800EE3C8
void f_800EE3C8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 800EE3C8
  return; // 800EE3CC
}

// fn_800EE3D0
void f_800EE3D0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 800EE3D0
  return; // 800EE3D4
}

// fn_800EE3D8
void f_800EE3D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE3D8
  c->r[0]=c->lr; // 800EE3DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE3E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE3E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE3E8
  c->r[30]=c->r[3]|c->r[3]; // 800EE3EC
  c->r[31]=c->r[6]|c->r[6]; // 800EE3F0
  cmps(c,0,(int32_t)c->r[4],0); // 800EE3F4
  if (crb(c,2)) { goto L_800EE404; } // 800EE3F8
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE3FC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800EE400
L_800EE404:;
  cmps(c,0,(int32_t)c->r[5],0); // 800EE404
  if (crb(c,2)) { goto L_800EE418; } // 800EE408
  c->r[3]=c->r[5]|c->r[5]; // 800EE40C
  c->r[4]=c->r[30]+0x00000014u; // 800EE410
  c->lr=0x800EE418u; f_8004A65C(c); // 800EE414
L_800EE418:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE418
  if (crb(c,2)) { goto L_800EE42C; } // 800EE41C
  c->r[3]=c->r[31]|c->r[31]; // 800EE420
  c->r[4]=c->r[30]+0x00000020u; // 800EE424
  c->lr=0x800EE42Cu; f_8004A65C(c); // 800EE428
L_800EE42C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE42C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE430
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE434
  c->lr=c->r[0]; // 800EE438
  c->r[1]=c->r[1]+0x00000010u; // 800EE43C
  return; // 800EE440
}

// fn_800EE444
void f_800EE444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE444
  c->r[0]=c->lr; // 800EE448
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE44C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE450
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE454
  c->r[30]=c->r[3]|c->r[3]; // 800EE458
  c->r[31]=c->r[6]|c->r[6]; // 800EE45C
  cmps(c,0,(int32_t)c->r[4],0); // 800EE460
  if (crb(c,2)) { goto L_800EE470; } // 800EE464
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE468
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800EE46C
L_800EE470:;
  cmps(c,0,(int32_t)c->r[5],0); // 800EE470
  if (crb(c,2)) { goto L_800EE484; } // 800EE474
  c->r[3]=c->r[3]+0x0000003Cu; // 800EE478
  c->r[4]=c->r[5]|c->r[5]; // 800EE47C
  c->lr=0x800EE484u; f_8004A65C(c); // 800EE480
L_800EE484:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE484
  if (crb(c,2)) { goto L_800EE498; } // 800EE488
  c->r[3]=c->r[30]+0x00000048u; // 800EE48C
  c->r[4]=c->r[31]|c->r[31]; // 800EE490
  c->lr=0x800EE498u; f_8004A65C(c); // 800EE494
L_800EE498:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE498
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE4A0
  c->lr=c->r[0]; // 800EE4A4
  c->r[1]=c->r[1]+0x00000010u; // 800EE4A8
  return; // 800EE4AC
}

// fn_800EE4B0
void f_800EE4B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE4B0
  c->r[0]=c->lr; // 800EE4B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE4B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE4BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EE4C0
  c->r[30]=c->r[3]|c->r[3]; // 800EE4C4
  c->r[31]=c->r[6]|c->r[6]; // 800EE4C8
  cmps(c,0,(int32_t)c->r[4],0); // 800EE4CC
  if (crb(c,2)) { goto L_800EE4DC; } // 800EE4D0
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE4D4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800EE4D8
L_800EE4DC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800EE4DC
  if (crb(c,2)) { goto L_800EE4F0; } // 800EE4E0
  c->r[3]=c->r[5]|c->r[5]; // 800EE4E4
  c->r[4]=c->r[30]+0x0000003Cu; // 800EE4E8
  c->lr=0x800EE4F0u; f_8004A65C(c); // 800EE4EC
L_800EE4F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE4F0
  if (crb(c,2)) { goto L_800EE504; } // 800EE4F4
  c->r[3]=c->r[31]|c->r[31]; // 800EE4F8
  c->r[4]=c->r[30]+0x00000048u; // 800EE4FC
  c->lr=0x800EE504u; f_8004A65C(c); // 800EE500
L_800EE504:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE504
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EE508
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE50C
  c->lr=c->r[0]; // 800EE510
  c->r[1]=c->r[1]+0x00000010u; // 800EE514
  return; // 800EE518
}

// fn_800EE51C
void f_800EE51C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE51C
  c->r[0]=c->lr; // 800EE520
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE524
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800EE528
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800EE52C
  c->r[11]=c->r[1]+0x00000020u; // 800EE530
  c->lr=0x800EE538u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE534
  c->r[27]=c->r[3]|c->r[3]; // 800EE538
  c->f[31]=c->f[1]; // 800EE53C
  c->r[28]=c->r[4]|c->r[4]; // 800EE540
  c->r[29]=c->r[5]|c->r[5]; // 800EE544
  c->r[30]=c->r[6]|c->r[6]; // 800EE548
  c->r[31]=c->r[7]|c->r[7]; // 800EE54C
  cmps(c,0,(int32_t)c->r[4],0); // 800EE550
  if (crb(c,2)) { goto L_800EE5BC; } // 800EE554
  c->r[3]=c->r[3]+0x00000054u; // 800EE558
  c->lr=0x800EE560u; f_8005BB40(c); // 800EE55C
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE560
  fcmp(c,0,c->f[31],c->f[0]); // 800EE564
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EE568
  if (!crb(c,2)) { goto L_800EE588; } // 800EE56C
  c->r[3]=c->r[27]+0x00000054u; // 800EE570
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE574
  c->f[2]=c->f[1]; // 800EE578
  c->f[3]=c->f[1]; // 800EE57C
  c->lr=0x800EE584u; f_800EEDF8(c); // 800EE580
  goto L_800EE5A4; // 800EE584
L_800EE588:;
  {uint32_t ea=c->r[27]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EE588
  {uint32_t ea=c->r[27]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE58C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800EE590
  {uint32_t ea=c->r[27]+0x00000064u; WF32(ea,c->f[0]);} // 800EE594
  {uint32_t ea=c->r[27]+0x00000068u; WF32(ea,c->f[0]);} // 800EE598
  {uint32_t ea=c->r[28]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE59C
  {uint32_t ea=c->r[27]+0x0000006Cu; WF32(ea,c->f[0]);} // 800EE5A0
L_800EE5A4:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EE5A4
  c->r[0]=c->r[0]|0x00004000u; // 800EE5A8
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EE5AC
  c->r[3]=c->r[27]+0x00000054u; // 800EE5B0
  c->r[4]=0u+0x00000001u; // 800EE5B4
  c->lr=0x800EE5BCu; f_8005BBF0(c); // 800EE5B8
L_800EE5BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EE5BC
  if (crb(c,2)) { goto L_800EE638; } // 800EE5C0
  c->r[3]=c->r[27]+0x00000070u; // 800EE5C4
  c->f[1]=c->f[31]; // 800EE5C8
  c->lr=0x800EE5D0u; f_8005BB40(c); // 800EE5CC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE5D0
  fcmp(c,0,c->f[31],c->f[0]); // 800EE5D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EE5D8
  if (!crb(c,2)) { goto L_800EE5F8; } // 800EE5DC
  c->r[3]=c->r[27]+0x00000070u; // 800EE5E0
  c->r[4]=c->r[29]|c->r[29]; // 800EE5E4
  c->r[5]=c->r[29]|c->r[29]; // 800EE5E8
  c->r[6]=c->r[29]|c->r[29]; // 800EE5EC
  c->lr=0x800EE5F4u; f_80065D30(c); // 800EE5F0
  goto L_800EE620; // 800EE5F4
L_800EE5F8:;
  c->r[3]=c->r[27]+0x00000080u; // 800EE5F8
  c->r[4]=c->r[27]+0x00000014u; // 800EE5FC
  c->r[5]=c->r[27]+0x0000003Cu; // 800EE600
  c->lr=0x800EE608u; f_8006000C(c); // 800EE604
  c->r[3]=c->r[27]+0x0000008Cu; // 800EE608
  c->r[4]=c->r[27]+0x00000080u; // 800EE60C
  c->lr=0x800EE614u; f_8004A65C(c); // 800EE610
  c->r[3]=c->r[27]+0x00000098u; // 800EE614
  c->r[4]=c->r[29]|c->r[29]; // 800EE618
  c->lr=0x800EE620u; f_8004A65C(c); // 800EE61C
L_800EE620:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EE620
  c->r[0]=c->r[0]|0x00001000u; // 800EE624
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EE628
  c->r[3]=c->r[27]+0x00000070u; // 800EE62C
  c->r[4]=0u+0x00000001u; // 800EE630
  c->lr=0x800EE638u; f_8005BBF0(c); // 800EE634
L_800EE638:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE638
  if (crb(c,2)) { goto L_800EE6B0; } // 800EE63C
  c->r[3]=c->r[27]+0x000000D8u; // 800EE640
  c->f[1]=c->f[31]; // 800EE644
  c->lr=0x800EE64Cu; f_8005BB40(c); // 800EE648
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE64C
  fcmp(c,0,c->f[31],c->f[0]); // 800EE650
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EE654
  if (!crb(c,2)) { goto L_800EE674; } // 800EE658
  c->r[3]=c->r[27]+0x000000D8u; // 800EE65C
  c->r[4]=c->r[31]|c->r[31]; // 800EE660
  c->r[5]=c->r[31]|c->r[31]; // 800EE664
  c->r[6]=c->r[31]|c->r[31]; // 800EE668
  c->lr=0x800EE670u; f_80065D30(c); // 800EE66C
  goto L_800EE698; // 800EE670
L_800EE674:;
  c->r[3]=c->r[27]+0x000000E8u; // 800EE674
  c->r[4]=c->r[27]+0x0000002Cu; // 800EE678
  c->lr=0x800EE680u; f_8004A65C(c); // 800EE67C
  c->r[3]=c->r[27]+0x000000F4u; // 800EE680
  c->r[4]=c->r[27]+0x000000E8u; // 800EE684
  c->lr=0x800EE68Cu; f_8004A65C(c); // 800EE688
  c->r[3]=c->r[27]+0x00000100u; // 800EE68C
  c->r[4]=c->r[31]|c->r[31]; // 800EE690
  c->lr=0x800EE698u; f_8004A65C(c); // 800EE694
L_800EE698:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EE698
  c->r[0]=c->r[0]|0x00008000u; // 800EE69C
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EE6A0
  c->r[3]=c->r[27]+0x000000D8u; // 800EE6A4
  c->r[4]=0u+0x00000001u; // 800EE6A8
  c->lr=0x800EE6B0u; f_8005BBF0(c); // 800EE6AC
L_800EE6B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EE6B0
  if (crb(c,2)) { goto L_800EE73C; } // 800EE6B4
  c->r[3]=c->r[27]+0x000000A4u; // 800EE6B8
  c->f[1]=c->f[31]; // 800EE6BC
  c->lr=0x800EE6C4u; f_8005BB40(c); // 800EE6C0
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EE6C4
  fcmp(c,0,c->f[31],c->f[0]); // 800EE6C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800EE6CC
  if (!crb(c,2)) { goto L_800EE6EC; } // 800EE6D0
  c->r[3]=c->r[27]+0x000000A4u; // 800EE6D4
  c->r[4]=c->r[30]|c->r[30]; // 800EE6D8
  c->r[5]=c->r[30]|c->r[30]; // 800EE6DC
  c->r[6]=c->r[30]|c->r[30]; // 800EE6E0
  c->lr=0x800EE6E8u; f_80065D30(c); // 800EE6E4
  goto L_800EE724; // 800EE6E8
L_800EE6EC:;
  c->r[3]=c->r[27]+0x000000B4u; // 800EE6EC
  c->r[4]=c->r[27]+0x00000020u; // 800EE6F0
  c->r[5]=c->r[27]+0x00000048u; // 800EE6F4
  c->lr=0x800EE6FCu; f_8006000C(c); // 800EE6F8
  c->r[3]=c->r[27]+0x000000B4u; // 800EE6FC
  c->r[4]=c->r[3]|c->r[3]; // 800EE700
  c->r[5]=c->r[27]+0x0000002Cu; // 800EE704
  c->lr=0x800EE70Cu; f_8006000C(c); // 800EE708
  c->r[3]=c->r[27]+0x000000C0u; // 800EE70C
  c->r[4]=c->r[27]+0x000000B4u; // 800EE710
  c->lr=0x800EE718u; f_8004A65C(c); // 800EE714
  c->r[3]=c->r[27]+0x000000CCu; // 800EE718
  c->r[4]=c->r[30]|c->r[30]; // 800EE71C
  c->lr=0x800EE724u; f_8004A65C(c); // 800EE720
L_800EE724:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 800EE724
  c->r[0]=c->r[0]|0x00002000u; // 800EE728
  W32(c->r[27]+0x00000000u,c->r[0]); // 800EE72C
  c->r[3]=c->r[27]+0x000000A4u; // 800EE730
  c->r[4]=0u+0x00000001u; // 800EE734
  c->lr=0x800EE73Cu; f_8005BBF0(c); // 800EE738
L_800EE73C:;
  c->r[0]=0u+0x00000028u; // 800EE73C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EE740
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800EE744
  c->r[11]=c->r[1]+0x00000020u; // 800EE748
  c->lr=0x800EE750u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EE74C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE750
  c->lr=c->r[0]; // 800EE754
  c->r[1]=c->r[1]+0x00000030u; // 800EE758
  return; // 800EE75C
}

// fn_800EE760
void f_800EE760(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE760
  c->r[3]=rotl(c->r[0],0)&0x0000F000u; // 800EE764
  c->r[0]=0u-c->r[3]; // 800EE768
  c->r[0]=c->r[0]|c->r[3]; // 800EE76C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800EE770
  return; // 800EE774
}

// fn_800EE778
void f_800EE778(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EE778
  cmps(c,0,(int32_t)c->r[3],0); // 800EE77C
  if (crb(c,2)) return; // 800EE780
  f_8005F718(c); return; // 800EE784
  return; // 800EE788
}

// fn_800EE78C
void f_800EE78C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE78C
  c->r[0]=c->lr; // 800EE790
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE794
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EE798
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EE79C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EE7A0
  c->r[29]=c->r[3]|c->r[3]; // 800EE7A4
  c->r[30]=c->r[3]+0x00000018u; // 800EE7A8
  c->r[31]=c->r[3]+0x00000028u; // 800EE7AC
L_800EE7B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EE7B0
  c->lr=0x800EE7B8u; f_800592DC(c); // 800EE7B4
  c->r[30]=c->r[30]+0x00000008u; // 800EE7B8
  cmpu(c,0,c->r[30],c->r[31]); // 800EE7BC
  if (crb(c,0)) { IRQCHK(c); goto L_800EE7B0; } // 800EE7C0
  c->r[0]=0u+0x00000000u; // 800EE7C4
  W32(c->r[29]+0x00000000u,c->r[0]); // 800EE7C8
  c->r[0]=0u+0xFFFFFFFFu; // 800EE7CC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 800EE7D0
  c->r[3]=c->r[29]|c->r[29]; // 800EE7D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EE7D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EE7DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EE7E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE7E4
  c->lr=c->r[0]; // 800EE7E8
  c->r[1]=c->r[1]+0x00000020u; // 800EE7EC
  return; // 800EE7F0
}

// dtor_800EE7F4
void f_800EE7F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE7F4
  c->r[0]=c->lr; // 800EE7F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE7FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE800
  c->r[31]=c->r[3]|c->r[3]; // 800EE804
  cmps(c,0,(int32_t)c->r[3],0); // 800EE808
  if (crb(c,2)) { goto L_800EE820; } // 800EE80C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800EE810
  cmps(c,0,(int32_t)c->r[0],0); // 800EE814
  if (!crb(c,1)) { goto L_800EE820; } // 800EE818
  c->lr=0x800EE820u; f_80047B20(c); // 800EE81C
L_800EE820:;
  c->r[3]=c->r[31]|c->r[31]; // 800EE820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EE824
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EE828
  c->lr=c->r[0]; // 800EE82C
  c->r[1]=c->r[1]+0x00000010u; // 800EE830
  return; // 800EE834
}

