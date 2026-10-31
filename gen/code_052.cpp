#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801EC08C
void f_801EC08C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC08C
  c->r[0]=c->lr; // 801EC090
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC094
  c->lr=0x801EC09Cu; f_801EDEE8(c); // 801EC098
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801EC09C
  c->r[0]=cntlz(c->r[0]); // 801EC0A0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EC0A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC0A8
  c->lr=c->r[0]; // 801EC0AC
  c->r[1]=c->r[1]+0x00000010u; // 801EC0B0
  return; // 801EC0B4
}

// fn_801EC0B8
void f_801EC0B8(Ctx* __restrict c) {
  return; // 801EC0B8
}

// fn_801EC0BC
void f_801EC0BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC0BC
  c->r[0]=c->lr; // 801EC0C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC0C4
  c->lr=0x801EC0CCu; f_801EDEE8(c); // 801EC0C8
  c->r[0]=cntlz(c->r[3]); // 801EC0CC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EC0D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC0D4
  c->lr=c->r[0]; // 801EC0D8
  c->r[1]=c->r[1]+0x00000010u; // 801EC0DC
  return; // 801EC0E0
}

// fn_801EC0E4
void f_801EC0E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC0E4
  c->r[0]=c->lr; // 801EC0E8
  W32(c->r[1]+0x00000064u,c->r[0]); // 801EC0EC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801EC0F0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801EC0F4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801EC0F8
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801EC0FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801EC100
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801EC104
  c->r[11]=c->r[1]+0x00000030u; // 801EC108
  c->lr=0x801EC110u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EC10C
  c->r[27]=c->r[3]|c->r[3]; // 801EC110
  c->r[4]=0u+0x0000000Au; // 801EC114
  c->r[5]=0u+0x00000000u; // 801EC118
  c->r[6]=0u+0x00000002u; // 801EC11C
  c->r[7]=0u+0x00000003u; // 801EC120
  c->lr=0x801EC128u; f_801EDF08(c); // 801EC124
  c->r[4]=c->r[27]+0x00010000u; // 801EC128
  W32(c->r[4]+0xFFFF80FCu,c->r[3]); // 801EC12C
  {uint32_t ea=c->r[2]+0xFFFF94A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC130
  {uint32_t ea=c->r[2]+0xFFFF94ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EC134
  c->lr=0x801EC13Cu; f_8021B27C(c); // 801EC138
  c->r[3]=c->r[27]+0x00010000u; // 801EC13C
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 801EC140
  c->r[4]=0u+0x00000001u; // 801EC144
  c->r[5]=0u+0x00000000u; // 801EC148
  c->lr=0x801EC150u; f_8021B47C(c); // 801EC14C
  c->r[3]=c->r[27]+0x00010000u; // 801EC150
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 801EC154
  c->r[4]=0u+0x00000000u; // 801EC158
  c->lr=0x801EC160u; f_8021B46C(c); // 801EC15C
  c->r[29]=0u+0x00000000u; // 801EC160
  c->r[28]=0u+0x00000000u; // 801EC164
  c->r[30]=c->r[27]|c->r[27]; // 801EC168
  {uint32_t ea=c->r[2]+0xFFFF94C8u; c->f[29]=RF64(ea);} // 801EC16C
  c->r[31]=0u+0x43300000u; // 801EC170
  {uint32_t ea=c->r[2]+0xFFFF94B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801EC174
  {uint32_t ea=c->r[2]+0xFFFF94ACu; c->f[31]=c->ps1[31]=RF32(ea);} // 801EC178
L_801EC17C:;
  c->r[3]=c->r[27]|c->r[27]; // 801EC17C
  c->r[4]=0u+0x00000009u; // 801EC180
  c->r[5]=c->r[28]|c->r[28]; // 801EC184
  c->r[6]=0u+0x00000002u; // 801EC188
  c->r[7]=0u+0x00000006u; // 801EC18C
  c->lr=0x801EC194u; f_801EDF08(c); // 801EC190
  c->r[4]=c->r[30]+0x00010000u; // 801EC194
  W32(c->r[4]+0xFFFF8168u,c->r[3]); // 801EC198
  c->r[3]=R32(c->r[4]+0xFFFF8168u); // 801EC19C
  {uint32_t ea=c->r[2]+0xFFFF94B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC1A0
  c->r[0]=c->r[29]^0x80000000u; // 801EC1A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EC1A8
  W32(c->r[1]+0x00000008u,c->r[31]); // 801EC1AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801EC1B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 801EC1B4
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 801EC1B8
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[0]); // 801EC1BC
  c->lr=0x801EC1C4u; f_8021B27C(c); // 801EC1C0
  c->r[3]=c->r[30]+0x00010000u; // 801EC1C4
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC1C8
  c->r[4]=0u+0x00000080u; // 801EC1CC
  c->r[5]=0u+0x00000000u; // 801EC1D0
  c->lr=0x801EC1D8u; f_8021B47C(c); // 801EC1D4
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EC1D8
  c->r[4]=c->r[29]|c->r[29]; // 801EC1DC
  c->lr=0x801EC1E4u; f_801EF41C(c); // 801EC1E0
  c->r[4]=c->r[3]|c->r[3]; // 801EC1E4
  c->r[3]=c->r[27]|c->r[27]; // 801EC1E8
  c->r[5]=c->r[30]+0x00010000u; // 801EC1EC
  c->r[5]=R32(c->r[5]+0xFFFF8168u); // 801EC1F0
  c->lr=0x801EC1F8u; f_801EDFF4(c); // 801EC1F4
  c->r[4]=c->r[30]+0x00010000u; // 801EC1F8
  W32(c->r[4]+0xFFFF8180u,c->r[3]); // 801EC1FC
  c->r[3]=R32(c->r[4]+0xFFFF8180u); // 801EC200
  c->r[4]=0u+0x00000001u; // 801EC204
  c->r[5]=0u+0x00000000u; // 801EC208
  c->lr=0x801EC210u; f_802249B4(c); // 801EC20C
  c->r[3]=c->r[30]+0x00010000u; // 801EC210
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 801EC214
  {uint32_t ea=c->r[2]+0xFFFF94B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC218
  {uint32_t ea=c->r[2]+0xFFFF94BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EC21C
  c->r[4]=0u+0x00000001u; // 801EC220
  c->lr=0x801EC228u; f_802249E8(c); // 801EC224
  cmps(c,0,(int32_t)c->r[29],3); // 801EC228
  if (!crb(c,2)) { goto L_801EC244; } // 801EC22C
  c->r[3]=c->r[30]+0x00010000u; // 801EC230
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 801EC234
  {uint32_t ea=c->r[2]+0xFFFF94C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EC238
  c->r[4]=0u+0x00000001u; // 801EC23C
  c->lr=0x801EC244u; f_80224A18(c); // 801EC240
L_801EC244:;
  c->r[3]=c->r[27]|c->r[27]; // 801EC244
  c->r[4]=c->r[29]|c->r[29]; // 801EC248
  c->r[5]=0u+0x00000000u; // 801EC24C
  c->lr=0x801EC254u; f_801EC2B0(c); // 801EC250
  cmps(c,0,(int32_t)c->r[28],0); // 801EC254
  if (!crb(c,2)) { goto L_801EC264; } // 801EC258
  c->r[3]=c->r[30]+0x00010000u; // 801EC25C
  c->r[28]=R32(c->r[3]+0xFFFF8168u); // 801EC260
L_801EC264:;
  c->r[30]=c->r[30]+0x00000004u; // 801EC264
  c->r[29]=c->r[29]+0x00000001u; // 801EC268
  cmps(c,0,(int32_t)c->r[29],6); // 801EC26C
  if (crb(c,0)) { IRQCHK(c); goto L_801EC17C; } // 801EC270
  c->r[0]=0u+0x00000058u; // 801EC274
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EC278
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801EC27C
  c->r[0]=0u+0x00000048u; // 801EC280
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801EC284
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801EC288
  c->r[0]=0u+0x00000038u; // 801EC28C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801EC290
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801EC294
  c->r[11]=c->r[1]+0x00000030u; // 801EC298
  c->lr=0x801EC2A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EC29C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801EC2A0
  c->lr=c->r[0]; // 801EC2A4
  c->r[1]=c->r[1]+0x00000060u; // 801EC2A8
  return; // 801EC2AC
}

// fn_801EC2B0
void f_801EC2B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC2B0
  c->r[0]=c->lr; // 801EC2B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EC2B8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801EC2BC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801EC2C0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801EC2C4
  c->r[29]=c->r[3]|c->r[3]; // 801EC2C8
  c->r[31]=c->r[4]|c->r[4]; // 801EC2CC
  c->r[30]=c->r[5]|c->r[5]; // 801EC2D0
  c->r[3]=c->r[1]+0x0000000Cu; // 801EC2D4
  c->lr=0x801EC2DCu; f_80047C5C(c); // 801EC2D8
  cmps(c,0,(int32_t)c->r[30],0); // 801EC2DC
  if (crb(c,2)) { goto L_801EC30C; } // 801EC2E0
  c->r[3]=c->r[29]+0x00010000u; // 801EC2E4
  W32(c->r[3]+0xFFFF80D4u,c->r[31]); // 801EC2E8
  c->r[30]=0u+0x00000001u; // 801EC2EC
  c->r[3]=0u+0x000000FFu; // 801EC2F0
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801EC2F4
  W8(c->r[1]+0x0000000Du,c->r[3]); // 801EC2F8
  c->r[0]=0u+0x00000000u; // 801EC2FC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801EC300
  W8(c->r[1]+0x0000000Fu,c->r[3]); // 801EC304
  goto L_801EC324; // 801EC308
L_801EC30C:;
  c->r[30]=0u+0x00000000u; // 801EC30C
  c->r[0]=0u+0x000000FFu; // 801EC310
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801EC314
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801EC318
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801EC31C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801EC320
L_801EC324:;
  c->r[3]=c->r[1]+0x00000008u; // 801EC324
  c->r[4]=c->r[1]+0x0000000Cu; // 801EC328
  c->lr=0x801EC330u; f_800549FC(c); // 801EC32C
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 801EC330
  c->r[0]=c->r[29]+0x00010000u; // 801EC334
  c->r[3]=c->r[0]+c->r[31]; // 801EC338
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 801EC33C
  c->r[4]=c->r[1]+0x00000008u; // 801EC340
  c->lr=0x801EC348u; f_801ECCDC(c); // 801EC344
  c->r[3]=c->r[1]+0x00000008u; // 801EC348
  c->r[4]=0u+0xFFFFFFFFu; // 801EC34C
  c->lr=0x801EC354u; f_80047BD4(c); // 801EC350
  c->r[0]=c->r[29]+0x00010000u; // 801EC354
  c->r[3]=c->r[0]+c->r[31]; // 801EC358
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC35C
  c->r[4]=0u+0x00000002u; // 801EC360
  c->r[5]=c->r[30]|c->r[30]; // 801EC364
  c->lr=0x801EC36Cu; f_8021B358(c); // 801EC368
  c->r[4]=c->r[29]+0x00010000u; // 801EC36C
  c->r[3]=R32(c->r[4]+0xFFFF80FCu); // 801EC370
  c->r[0]=R32(c->r[4]+0xFFFF80D4u); // 801EC374
  {uint32_t ea=c->r[2]+0xFFFF94C8u; c->f[1]=RF64(ea);} // 801EC378
  c->r[0]=c->r[0]^0x80000000u; // 801EC37C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC380
  c->r[0]=0u+0x43300000u; // 801EC384
  W32(c->r[1]+0x00000010u,c->r[0]); // 801EC388
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801EC38C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801EC390
  {uint32_t ea=c->r[2]+0xFFFF94B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC394
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801EC398
  {uint32_t ea=c->r[2]+0xFFFF94ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EC39C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801EC3A0
  c->lr=0x801EC3A8u; f_8021B290(c); // 801EC3A4
  c->r[3]=c->r[1]+0x0000000Cu; // 801EC3A8
  c->r[4]=0u+0xFFFFFFFFu; // 801EC3AC
  c->lr=0x801EC3B4u; f_80047BD4(c); // 801EC3B0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801EC3B4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801EC3B8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801EC3BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EC3C0
  c->lr=c->r[0]; // 801EC3C4
  c->r[1]=c->r[1]+0x00000030u; // 801EC3C8
  return; // 801EC3CC
}

// fn_801EC3D0
void f_801EC3D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC3D0
  c->r[0]=c->lr; // 801EC3D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC3D8
  c->r[4]=0u+0x00000058u; // 801EC3DC
  c->r[5]=c->r[13]+0xFFFF9E18u; // 801EC3E0
  c->r[6]=c->r[13]+0xFFFF9E20u; // 801EC3E4
  c->r[7]=0u+0x00000000u; // 801EC3E8
  c->lr=0x801EC3F0u; f_802F09F8(c); // 801EC3EC
  c->lr=0x801EC3F4u; f_801EE384(c); // 801EC3F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC3F4
  c->lr=c->r[0]; // 801EC3F8
  c->r[1]=c->r[1]+0x00000010u; // 801EC3FC
  return; // 801EC400
}

// fn_801EC404
void f_801EC404(Ctx* __restrict c) {
  return; // 801EC404
}

// fn_801EC408
void f_801EC408(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC408
  c->r[0]=c->lr; // 801EC40C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC414
  c->r[31]=c->r[3]|c->r[3]; // 801EC418
  c->lr=0x801EC420u; f_801EC0E4(c); // 801EC41C
  c->lr=0x801EC424u; f_8006592C(c); // 801EC420
  c->r[4]=0u+0x00000000u; // 801EC424
  c->r[5]=0u+0x00000000u; // 801EC428
  c->r[6]=0u+0xFFFFFFFFu; // 801EC42C
  c->r[7]=0u+0xFFFFFFFFu; // 801EC430
  c->lr=0x801EC438u; f_80048F20(c); // 801EC434
  c->r[3]=c->r[31]|c->r[31]; // 801EC438
  c->r[4]=0u+0x00000002u; // 801EC43C
  c->lr=0x801EC444u; f_801EDEE0(c); // 801EC440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC444
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC448
  c->lr=c->r[0]; // 801EC44C
  c->r[1]=c->r[1]+0x00000010u; // 801EC450
  return; // 801EC454
}

// fn_801EC458
void f_801EC458(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC458
  c->r[0]=c->lr; // 801EC45C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC460
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EC464
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EC468
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EC46C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EC470
  c->r[28]=c->r[3]|c->r[3]; // 801EC474
  c->r[0]=0u+0x00000001u; // 801EC478
  c->r[29]=0u+0x00000000u; // 801EC47C
  c->r[30]=c->r[28]|c->r[28]; // 801EC480
L_801EC484:;
  c->r[31]=0u+0x00000000u; // 801EC484
  cmps(c,0,(int32_t)c->r[0],0); // 801EC488
  if (crb(c,2)) { goto L_801EC4AC; } // 801EC48C
  c->r[3]=c->r[30]+0x00010000u; // 801EC490
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC494
  c->r[4]=0u+0x00000000u; // 801EC498
  c->lr=0x801EC4A0u; f_8021B3FC(c); // 801EC49C
  cmps(c,0,(int32_t)c->r[3],0); // 801EC4A0
  if (crb(c,2)) { goto L_801EC4AC; } // 801EC4A4
  c->r[31]=0u+0x00000001u; // 801EC4A8
L_801EC4AC:;
  c->r[0]=c->r[31]|c->r[31]; // 801EC4AC
  c->r[30]=c->r[30]+0x00000004u; // 801EC4B0
  c->r[29]=c->r[29]+0x00000001u; // 801EC4B4
  cmps(c,0,(int32_t)c->r[29],6); // 801EC4B8
  if (crb(c,0)) { IRQCHK(c); goto L_801EC484; } // 801EC4BC
  cmps(c,0,(int32_t)c->r[31],0); // 801EC4C0
  if (crb(c,2)) { goto L_801EC57C; } // 801EC4C4
  c->r[31]=0u+0x00000000u; // 801EC4C8
  c->lr=0x801EC4D0u; f_801ECCEC(c); // 801EC4CC
  c->lr=0x801EC4D4u; f_801ECCF4(c); // 801EC4D0
  W32(c->r[3]+0x00000000u,c->r[31]); // 801EC4D4
  c->r[29]=0u+0x00000000u; // 801EC4D8
  c->r[31]=c->r[28]|c->r[28]; // 801EC4DC
L_801EC4E0:;
  c->r[3]=c->r[31]+0x00010000u; // 801EC4E0
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 801EC4E4
  c->r[4]=0u+0x00000001u; // 801EC4E8
  c->lr=0x801EC4F0u; f_80224B90(c); // 801EC4EC
  c->r[31]=c->r[31]+0x00000004u; // 801EC4F0
  c->r[29]=c->r[29]+0x00000001u; // 801EC4F4
  cmps(c,0,(int32_t)c->r[29],6); // 801EC4F8
  if (crb(c,0)) { IRQCHK(c); goto L_801EC4E0; } // 801EC4FC
  c->r[3]=c->r[28]+0x00010000u; // 801EC500
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 801EC504
  c->r[4]=0u+0x00000001u; // 801EC508
  c->lr=0x801EC510u; f_8021B46C(c); // 801EC50C
  c->r[3]=c->r[28]|c->r[28]; // 801EC510
  c->r[4]=0u+0x00000000u; // 801EC514
  c->r[5]=0u+0x00000001u; // 801EC518
  c->lr=0x801EC520u; f_801EC2B0(c); // 801EC51C
  c->lr=0x801EC524u; f_801ECCEC(c); // 801EC520
  c->lr=0x801EC528u; f_80206CF8(c); // 801EC524
  c->lr=0x801EC52Cu; f_80047C9C(c); // 801EC528
  c->r[4]=0u+0x00000001u; // 801EC52C
  c->r[5]=0u+0x00000000u; // 801EC530
  c->lr=0x801EC538u; f_80065690(c); // 801EC534
  c->r[3]=c->r[28]|c->r[28]; // 801EC538
  c->r[4]=0u+0x00000001u; // 801EC53C
  c->lr=0x801EC544u; f_801ECD0C(c); // 801EC540
  c->lr=0x801EC548u; f_801ECCEC(c); // 801EC544
  c->lr=0x801EC54Cu; f_80207A34(c); // 801EC548
  cmps(c,0,(int32_t)c->r[3],0); // 801EC54C
  if (crb(c,2)) { goto L_801EC570; } // 801EC550
  c->r[0]=0u+0x00000000u; // 801EC554
  c->r[3]=c->r[28]+0x00010000u; // 801EC558
  W32(c->r[3]+0xFFFF8198u,c->r[0]); // 801EC55C
  c->r[3]=c->r[28]|c->r[28]; // 801EC560
  c->r[4]=0u+0x00000006u; // 801EC564
  c->lr=0x801EC56Cu; f_801EDEE0(c); // 801EC568
  goto L_801EC57C; // 801EC56C
L_801EC570:;
  c->r[3]=c->r[28]|c->r[28]; // 801EC570
  c->r[4]=0u+0x00000003u; // 801EC574
  c->lr=0x801EC57Cu; f_801EDEE0(c); // 801EC578
L_801EC57C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EC57C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EC580
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EC584
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EC588
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC58C
  c->lr=c->r[0]; // 801EC590
  c->r[1]=c->r[1]+0x00000020u; // 801EC594
  return; // 801EC598
}

// fn_801EC59C
void f_801EC59C(Ctx* __restrict c) {
  f_801ED56C(c); return; // 801EC59C
}

// fn_801EC5A0
void f_801EC5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC5A0
  c->r[0]=c->lr; // 801EC5A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC5A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EC5AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EC5B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EC5B4
  c->r[29]=c->r[3]|c->r[3]; // 801EC5B8
  c->r[3]=c->r[3]+0x00010000u; // 801EC5BC
  c->r[0]=R32(c->r[3]+0xFFFF80D4u); // 801EC5C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801EC5C4
  c->r[3]=c->r[3]+c->r[0]; // 801EC5C8
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC5CC
  c->r[4]=0u+0x00000000u; // 801EC5D0
  c->lr=0x801EC5D8u; f_8021B3FC(c); // 801EC5D4
  cmps(c,0,(int32_t)c->r[3],0); // 801EC5D8
  if (crb(c,2)) { goto L_801EC650; } // 801EC5DC
  c->r[30]=0u+0x00000000u; // 801EC5E0
  c->r[31]=c->r[29]|c->r[29]; // 801EC5E4
L_801EC5E8:;
  c->r[3]=c->r[31]+0x00010000u; // 801EC5E8
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 801EC5EC
  c->r[4]=0u+0x00000000u; // 801EC5F0
  c->lr=0x801EC5F8u; f_80224B90(c); // 801EC5F4
  c->r[3]=c->r[31]+0x00010000u; // 801EC5F8
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC5FC
  c->r[4]=0u+0x00000000u; // 801EC600
  c->r[5]=0u+0x00000003u; // 801EC604
  c->lr=0x801EC60Cu; f_8021B358(c); // 801EC608
  c->r[31]=c->r[31]+0x00000004u; // 801EC60C
  c->r[30]=c->r[30]+0x00000001u; // 801EC610
  cmps(c,0,(int32_t)c->r[30],6); // 801EC614
  if (crb(c,0)) { IRQCHK(c); goto L_801EC5E8; } // 801EC618
  c->r[3]=c->r[29]+0x00010000u; // 801EC61C
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 801EC620
  c->r[4]=0u+0x00000000u; // 801EC624
  c->lr=0x801EC62Cu; f_8021B46C(c); // 801EC628
  c->r[3]=c->r[29]|c->r[29]; // 801EC62C
  c->r[4]=0u+0x00000005u; // 801EC630
  c->lr=0x801EC638u; f_801EDEE0(c); // 801EC634
  c->lr=0x801EC63Cu; f_8006592C(c); // 801EC638
  c->r[4]=0u+0x00000001u; // 801EC63C
  c->r[5]=0u+0x00000000u; // 801EC640
  c->r[6]=0u+0xFFFFFFFFu; // 801EC644
  c->r[7]=0u+0xFFFFFFFFu; // 801EC648
  c->lr=0x801EC650u; f_80048F20(c); // 801EC64C
L_801EC650:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EC650
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EC654
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EC658
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC65C
  c->lr=c->r[0]; // 801EC660
  c->r[1]=c->r[1]+0x00000020u; // 801EC664
  return; // 801EC668
}

// fn_801EC66C
void f_801EC66C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC66C
  c->r[0]=c->lr; // 801EC670
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EC674
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EC678
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EC67C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EC680
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EC684
  c->r[28]=c->r[3]|c->r[3]; // 801EC688
  c->r[0]=0u+0x00000001u; // 801EC68C
  c->r[29]=0u+0x00000000u; // 801EC690
  c->r[30]=c->r[28]|c->r[28]; // 801EC694
L_801EC698:;
  c->r[3]=c->r[30]+0x00010000u; // 801EC698
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC69C
  cmps(c,0,(int32_t)c->r[3],0); // 801EC6A0
  if (crb(c,2)) { goto L_801EC6CC; } // 801EC6A4
  c->r[31]=0u+0x00000000u; // 801EC6A8
  cmps(c,0,(int32_t)c->r[0],0); // 801EC6AC
  if (crb(c,2)) { goto L_801EC6C8; } // 801EC6B0
  c->r[4]=0u+0x00000000u; // 801EC6B4
  c->lr=0x801EC6BCu; f_8021B3FC(c); // 801EC6B8
  cmps(c,0,(int32_t)c->r[3],0); // 801EC6BC
  if (crb(c,2)) { goto L_801EC6C8; } // 801EC6C0
  c->r[31]=0u+0x00000001u; // 801EC6C4
L_801EC6C8:;
  c->r[0]=c->r[31]|c->r[31]; // 801EC6C8
L_801EC6CC:;
  c->r[30]=c->r[30]+0x00000004u; // 801EC6CC
  c->r[29]=c->r[29]+0x00000001u; // 801EC6D0
  cmps(c,0,(int32_t)c->r[29],6); // 801EC6D4
  if (crb(c,0)) { IRQCHK(c); goto L_801EC698; } // 801EC6D8
  cmps(c,0,(int32_t)c->r[0],0); // 801EC6DC
  if (crb(c,2)) { goto L_801EC734; } // 801EC6E0
  c->r[29]=0u+0x00000000u; // 801EC6E4
  c->r[31]=c->r[28]|c->r[28]; // 801EC6E8
L_801EC6EC:;
  c->r[3]=c->r[31]+0x00010000u; // 801EC6EC
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801EC6F0
  cmps(c,0,(int32_t)c->r[3],0); // 801EC6F4
  if (crb(c,2)) { goto L_801EC704; } // 801EC6F8
  c->r[4]=0u+0x00000000u; // 801EC6FC
  c->lr=0x801EC704u; f_8021B46C(c); // 801EC700
L_801EC704:;
  c->r[31]=c->r[31]+0x00000004u; // 801EC704
  c->r[29]=c->r[29]+0x00000001u; // 801EC708
  cmps(c,0,(int32_t)c->r[29],6); // 801EC70C
  if (crb(c,0)) { IRQCHK(c); goto L_801EC6EC; } // 801EC710
  c->r[3]=c->r[28]|c->r[28]; // 801EC714
  c->lr=0x801EC71Cu; f_801EDEFC(c); // 801EC718
  c->r[4]=c->r[3]|c->r[3]; // 801EC71C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EC720
  c->lr=0x801EC728u; f_801EF234(c); // 801EC724
  c->r[3]=c->r[28]|c->r[28]; // 801EC728
  c->r[4]=0u+0x00000000u; // 801EC72C
  c->lr=0x801EC734u; f_801EDEE0(c); // 801EC730
L_801EC734:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EC734
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EC738
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EC73C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EC740
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EC744
  c->lr=c->r[0]; // 801EC748
  c->r[1]=c->r[1]+0x00000020u; // 801EC74C
  return; // 801EC750
}

// fn_801EC754
void f_801EC754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC754
  c->r[0]=c->lr; // 801EC758
  W32(c->r[1]+0x00000214u,c->r[0]); // 801EC75C
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 801EC760
  c->r[31]=c->r[3]|c->r[3]; // 801EC764
  c->r[4]=c->r[3]+0x00010000u; // 801EC768
  c->r[0]=R32(c->r[4]+0xFFFF8198u); // 801EC76C
  cmps(c,0,(int32_t)c->r[0],2); // 801EC770
  if (crb(c,2)) { goto L_801EC88C; } // 801EC774
  if (!crb(c,0)) { goto L_801EC78C; } // 801EC778
  cmps(c,0,(int32_t)c->r[0],0); // 801EC77C
  if (crb(c,2)) { goto L_801EC798; } // 801EC780
  if (!crb(c,0)) { goto L_801EC7C8; } // 801EC784
  goto L_801EC8E8; // 801EC788
L_801EC78C:;
  cmps(c,0,(int32_t)c->r[0],4); // 801EC78C
  if (!crb(c,0)) { goto L_801EC8E8; } // 801EC790
  goto L_801EC8B0; // 801EC794
L_801EC798:;
  c->lr=0x801EC79Cu; f_801EE630(c); // 801EC798
  c->r[3]=c->r[31]+0x00010000u; // 801EC79C
  c->r[0]=R32(c->r[3]+0xFFFF8148u); // 801EC7A0
  cmps(c,0,(int32_t)c->r[0],0); // 801EC7A4
  if (crb(c,2)) { goto L_801EC7B4; } // 801EC7A8
  c->r[3]=c->r[31]|c->r[31]; // 801EC7AC
  c->lr=0x801EC7B4u; f_801EE384(c); // 801EC7B0
L_801EC7B4:;
  c->r[4]=c->r[31]+0x00010000u; // 801EC7B4
  c->r[3]=R32(c->r[4]+0xFFFF8198u); // 801EC7B8
  c->r[0]=c->r[3]+0x00000001u; // 801EC7BC
  W32(c->r[4]+0xFFFF8198u,c->r[0]); // 801EC7C0
  goto L_801EC8E8; // 801EC7C4
L_801EC7C8:;
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 801EC7C8
  cmps(c,0,(int32_t)c->r[0],0); // 801EC7CC
  if (!crb(c,2)) { goto L_801EC8E8; } // 801EC7D0
  c->lr=0x801EC7D8u; f_801ECCEC(c); // 801EC7D4
  c->lr=0x801EC7DCu; f_801ECCFC(c); // 801EC7D8
  cmps(c,0,(int32_t)c->r[3],0); // 801EC7DC
  if (crb(c,2)) { goto L_801EC810; } // 801EC7E0
  c->lr=0x801EC7E8u; f_801ECCEC(c); // 801EC7E4
  c->lr=0x801EC7ECu; f_80206C24(c); // 801EC7E8
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EC7EC
  c->r[4]=0u+0x00000005u; // 801EC7F0
  c->r[5]=0u+0x0000000Fu; // 801EC7F4
  c->lr=0x801EC7FCu; f_801EF42C(c); // 801EC7F8
  c->r[4]=c->r[3]|c->r[3]; // 801EC7FC
  c->r[3]=c->r[31]|c->r[31]; // 801EC800
  c->r[5]=0u+0x00000000u; // 801EC804
  c->lr=0x801EC80Cu; f_801EE164(c); // 801EC808
  goto L_801EC858; // 801EC80C
L_801EC810:;
  c->lr=0x801EC814u; f_801ECCEC(c); // 801EC810
  c->r[4]=c->r[1]+0x00000008u; // 801EC814
  c->lr=0x801EC81Cu; f_80207000(c); // 801EC818
  cmps(c,0,(int32_t)c->r[3],0); // 801EC81C
  if (crb(c,2)) { goto L_801EC838; } // 801EC820
  c->r[3]=c->r[31]|c->r[31]; // 801EC824
  c->r[4]=c->r[1]+0x00000008u; // 801EC828
  c->r[5]=0u+0x00000000u; // 801EC82C
  c->lr=0x801EC834u; f_801EE164(c); // 801EC830
  goto L_801EC858; // 801EC834
L_801EC838:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EC838
  c->r[4]=0u+0x00000005u; // 801EC83C
  c->r[5]=0u+0x00000013u; // 801EC840
  c->lr=0x801EC848u; f_801EF42C(c); // 801EC844
  c->r[4]=c->r[3]|c->r[3]; // 801EC848
  c->r[3]=c->r[31]|c->r[31]; // 801EC84C
  c->r[5]=0u+0x00000000u; // 801EC850
  c->lr=0x801EC858u; f_801EE164(c); // 801EC854
L_801EC858:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EC858
  c->r[4]=0u+0x0000000Du; // 801EC85C
  c->r[5]=0u+0x00000011u; // 801EC860
  c->lr=0x801EC868u; f_801EF42C(c); // 801EC864
  c->r[4]=c->r[3]|c->r[3]; // 801EC868
  c->r[3]=c->r[31]|c->r[31]; // 801EC86C
  c->r[5]=0u+0x00000000u; // 801EC870
  c->lr=0x801EC878u; f_801EE6AC(c); // 801EC874
  c->r[4]=c->r[31]+0x00010000u; // 801EC878
  c->r[3]=R32(c->r[4]+0xFFFF8198u); // 801EC87C
  c->r[0]=c->r[3]+0x00000001u; // 801EC880
  W32(c->r[4]+0xFFFF8198u,c->r[0]); // 801EC884
  goto L_801EC8E8; // 801EC888
L_801EC88C:;
  c->lr=0x801EC890u; f_801ED56C(c); // 801EC88C
  c->r[4]=c->r[31]+0x00010000u; // 801EC890
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 801EC894
  cmps(c,0,(int32_t)c->r[0],0); // 801EC898
  if (crb(c,2)) { goto L_801EC8E8; } // 801EC89C
  c->r[3]=R32(c->r[4]+0xFFFF8198u); // 801EC8A0
  c->r[0]=c->r[3]+0x00000001u; // 801EC8A4
  W32(c->r[4]+0xFFFF8198u,c->r[0]); // 801EC8A8
  goto L_801EC8E8; // 801EC8AC
L_801EC8B0:;
  c->lr=0x801EC8B4u; f_801ED56C(c); // 801EC8B0
  c->r[3]=c->r[31]+0x00010000u; // 801EC8B4
  c->r[0]=R32(c->r[3]+0xFFFF8148u); // 801EC8B8
  cmps(c,0,(int32_t)c->r[0],0); // 801EC8BC
  if (!crb(c,2)) { goto L_801EC8E8; } // 801EC8C0
  c->lr=0x801EC8C8u; f_801ECCEC(c); // 801EC8C4
  c->lr=0x801EC8CCu; f_80207B20(c); // 801EC8C8
  cmps(c,0,(int32_t)c->r[3],0); // 801EC8CC
  if (crb(c,2)) { goto L_801EC8E8; } // 801EC8D0
  c->lr=0x801EC8D8u; f_801ECCEC(c); // 801EC8D4
  c->lr=0x801EC8DCu; f_802079DC(c); // 801EC8D8
  c->r[3]=c->r[31]|c->r[31]; // 801EC8DC
  c->r[4]=0u+0x00000002u; // 801EC8E0
  c->lr=0x801EC8E8u; f_801EDEE0(c); // 801EC8E4
L_801EC8E8:;
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 801EC8E8
  c->r[0]=R32(c->r[1]+0x00000214u); // 801EC8EC
  c->lr=c->r[0]; // 801EC8F0
  c->r[1]=c->r[1]+0x00000210u; // 801EC8F4
  return; // 801EC8F8
}

// fn_801EC8FC
void f_801EC8FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC8FC
  c->r[0]=c->lr; // 801EC900
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC908
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EC90C
  c->r[30]=c->r[3]|c->r[3]; // 801EC910
  c->r[4]=c->r[3]+0x00010000u; // 801EC914
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 801EC918
  cmps(c,0,(int32_t)c->r[0],0); // 801EC91C
  if (!crb(c,2)) { goto L_801EC978; } // 801EC920
  c->r[31]=R32(c->r[4]+0xFFFF80D4u); // 801EC924
  c->r[4]=c->r[31]|c->r[31]; // 801EC928
  c->r[5]=0u+0x00000000u; // 801EC92C
  c->lr=0x801EC934u; f_801EC2B0(c); // 801EC930
  c->r[3]=c->r[30]|c->r[30]; // 801EC934
  c->r[5]=c->r[31]+0x00000005u; // 801EC938
  c->r[4]=0u+0x2AAB0000u; // 801EC93C
  c->r[0]=c->r[4]+0xFFFFAAABu; // 801EC940
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801EC944
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801EC948
  c->r[0]=c->r[4]+c->r[0]; // 801EC94C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801EC950
  c->r[4]=c->r[5]-c->r[0]; // 801EC954
  c->r[5]=0u+0x00000001u; // 801EC958
  c->lr=0x801EC960u; f_801EC2B0(c); // 801EC95C
  c->lr=0x801EC964u; f_8006592C(c); // 801EC960
  c->r[4]=0u+0x00000006u; // 801EC964
  c->r[5]=0u+0x00000000u; // 801EC968
  c->r[6]=0u+0xFFFFFFFFu; // 801EC96C
  c->r[7]=0u+0xFFFFFFFFu; // 801EC970
  c->lr=0x801EC978u; f_80048F20(c); // 801EC974
L_801EC978:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC978
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EC97C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC980
  c->lr=c->r[0]; // 801EC984
  c->r[1]=c->r[1]+0x00000010u; // 801EC988
  return; // 801EC98C
}

// fn_801EC990
void f_801EC990(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC990
  c->r[0]=c->lr; // 801EC994
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC99C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EC9A0
  c->r[30]=c->r[3]|c->r[3]; // 801EC9A4
  c->r[4]=c->r[3]+0x00010000u; // 801EC9A8
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 801EC9AC
  cmps(c,0,(int32_t)c->r[0],0); // 801EC9B0
  if (!crb(c,2)) { goto L_801ECA0C; } // 801EC9B4
  c->r[31]=R32(c->r[4]+0xFFFF80D4u); // 801EC9B8
  c->r[4]=c->r[31]|c->r[31]; // 801EC9BC
  c->r[5]=0u+0x00000000u; // 801EC9C0
  c->lr=0x801EC9C8u; f_801EC2B0(c); // 801EC9C4
  c->r[3]=c->r[30]|c->r[30]; // 801EC9C8
  c->r[5]=c->r[31]+0x00000001u; // 801EC9CC
  c->r[4]=0u+0x2AAB0000u; // 801EC9D0
  c->r[0]=c->r[4]+0xFFFFAAABu; // 801EC9D4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801EC9D8
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801EC9DC
  c->r[0]=c->r[4]+c->r[0]; // 801EC9E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801EC9E4
  c->r[4]=c->r[5]-c->r[0]; // 801EC9E8
  c->r[5]=0u+0x00000001u; // 801EC9EC
  c->lr=0x801EC9F4u; f_801EC2B0(c); // 801EC9F0
  c->lr=0x801EC9F8u; f_8006592C(c); // 801EC9F4
  c->r[4]=0u+0x00000006u; // 801EC9F8
  c->r[5]=0u+0x00000000u; // 801EC9FC
  c->r[6]=0u+0xFFFFFFFFu; // 801ECA00
  c->r[7]=0u+0xFFFFFFFFu; // 801ECA04
  c->lr=0x801ECA0Cu; f_80048F20(c); // 801ECA08
L_801ECA0C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECA0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECA10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECA14
  c->lr=c->r[0]; // 801ECA18
  c->r[1]=c->r[1]+0x00000010u; // 801ECA1C
  return; // 801ECA20
}

// fn_801ECA24
void f_801ECA24(Ctx* __restrict c) {
  return; // 801ECA24
}

// fn_801ECA28
void f_801ECA28(Ctx* __restrict c) {
  return; // 801ECA28
}

// fn_801ECA2C
void f_801ECA2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECA2C
  c->r[0]=c->lr; // 801ECA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECA38
  c->r[31]=c->r[3]|c->r[3]; // 801ECA3C
  c->r[3]=c->r[3]+0x00010000u; // 801ECA40
  c->r[0]=R32(c->r[3]+0xFFFF80D4u); // 801ECA44
  cmps(c,0,(int32_t)c->r[0],3); // 801ECA48
  if (crb(c,2)) { goto L_801ECC14; } // 801ECA4C
  if (!crb(c,0)) { goto L_801ECA6C; } // 801ECA50
  cmps(c,0,(int32_t)c->r[0],1); // 801ECA54
  if (crb(c,2)) { goto L_801ECBAC; } // 801ECA58
  if (!crb(c,0)) { goto L_801ECBE0; } // 801ECA5C
  cmps(c,0,(int32_t)c->r[0],0); // 801ECA60
  if (!crb(c,0)) { goto L_801ECA7C; } // 801ECA64
  goto L_801ECCAC; // 801ECA68
L_801ECA6C:;
  cmps(c,0,(int32_t)c->r[0],5); // 801ECA6C
  if (crb(c,2)) { goto L_801ECC7C; } // 801ECA70
  if (!crb(c,0)) { goto L_801ECCAC; } // 801ECA74
  goto L_801ECC48; // 801ECA78
L_801ECA7C:;
  c->lr=0x801ECA80u; f_801ECCEC(c); // 801ECA7C
  c->lr=0x801ECA84u; f_801ECCE4(c); // 801ECA80
  c->r[4]=0u+0x00000000u; // 801ECA84
  c->r[0]=R8(c->r[3]+0x0000034Fu); // 801ECA88
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECA8C
  if (!crb(c,2)) { goto L_801ECA98; } // 801ECA90
  c->r[4]=0u+0x00000001u; // 801ECA94
L_801ECA98:;
  c->r[0]=R8(c->r[3]+0x00000371u); // 801ECA98
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECA9C
  if (!crb(c,2)) { goto L_801ECAA8; } // 801ECAA0
  c->r[4]=0u+0x00000001u; // 801ECAA4
L_801ECAA8:;
  c->r[3]=c->r[3]+0x00000044u; // 801ECAA8
  c->r[0]=R8(c->r[3]+0x0000034Fu); // 801ECAAC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECAB0
  if (!crb(c,2)) { goto L_801ECABC; } // 801ECAB4
  c->r[4]=0u+0x00000001u; // 801ECAB8
L_801ECABC:;
  c->r[0]=R8(c->r[3]+0x00000371u); // 801ECABC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECAC0
  if (!crb(c,2)) { goto L_801ECACC; } // 801ECAC4
  c->r[4]=0u+0x00000001u; // 801ECAC8
L_801ECACC:;
  c->r[0]=R8(c->r[3]+0x00000393u); // 801ECACC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECAD0
  if (!crb(c,2)) { goto L_801ECADC; } // 801ECAD4
  c->r[4]=0u+0x00000001u; // 801ECAD8
L_801ECADC:;
  c->r[0]=R8(c->r[3]+0x000003B5u); // 801ECADC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECAE0
  if (!crb(c,2)) { goto L_801ECAEC; } // 801ECAE4
  c->r[4]=0u+0x00000001u; // 801ECAE8
L_801ECAEC:;
  c->r[0]=R8(c->r[3]+0x000003D7u); // 801ECAEC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECAF0
  if (!crb(c,2)) { goto L_801ECAFC; } // 801ECAF4
  c->r[4]=0u+0x00000001u; // 801ECAF8
L_801ECAFC:;
  c->r[0]=R8(c->r[3]+0x000003F9u); // 801ECAFC
  cmpu(c,0,c->r[0],0x0000000Fu); // 801ECB00
  if (!crb(c,2)) { goto L_801ECB0C; } // 801ECB04
  c->r[4]=0u+0x00000001u; // 801ECB08
L_801ECB0C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801ECB0C
  if (crb(c,2)) { goto L_801ECB68; } // 801ECB10
  c->lr=0x801ECB18u; f_801ECCEC(c); // 801ECB14
  c->lr=0x801ECB1Cu; f_801ECD04(c); // 801ECB18
  cmps(c,0,(int32_t)c->r[3],0); // 801ECB1C
  if (!crb(c,2)) { goto L_801ECB2C; } // 801ECB20
  c->lr=0x801ECB28u; f_801ECCEC(c); // 801ECB24
  c->lr=0x801ECB2Cu; f_801FB584(c); // 801ECB28
L_801ECB2C:;
  c->r[3]=c->r[31]+0x00010000u; // 801ECB2C
  c->r[0]=R32(c->r[3]+0xFFFF80D4u); // 801ECB30
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ECB34
  c->r[3]=c->r[3]+c->r[0]; // 801ECB38
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801ECB3C
  c->r[4]=0u+0x00000000u; // 801ECB40
  c->r[5]=0u+0x00000002u; // 801ECB44
  c->lr=0x801ECB4Cu; f_8021B358(c); // 801ECB48
  c->r[3]=c->r[31]|c->r[31]; // 801ECB4C
  c->r[4]=0u+0x00000004u; // 801ECB50
  c->lr=0x801ECB58u; f_801EDEE0(c); // 801ECB54
  c->r[3]=c->r[31]|c->r[31]; // 801ECB58
  c->r[4]=0u+0x00000004u; // 801ECB5C
  c->lr=0x801ECB64u; f_801EDEF0(c); // 801ECB60
  goto L_801ECCAC; // 801ECB64
L_801ECB68:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801ECB68
  c->r[4]=0u+0x00000006u; // 801ECB6C
  c->lr=0x801ECB74u; f_801EF41C(c); // 801ECB70
  c->r[4]=c->r[3]|c->r[3]; // 801ECB74
  c->r[3]=c->r[31]|c->r[31]; // 801ECB78
  c->r[5]=0u+0x00000000u; // 801ECB7C
  c->lr=0x801ECB84u; f_801EE164(c); // 801ECB80
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801ECB84
  c->r[4]=0u+0x0000000Du; // 801ECB88
  c->r[5]=0u+0x00000015u; // 801ECB8C
  c->lr=0x801ECB94u; f_801EF42C(c); // 801ECB90
  c->r[4]=c->r[3]|c->r[3]; // 801ECB94
  c->r[3]=c->r[31]|c->r[31]; // 801ECB98
  c->r[5]=0u+0x801F0000u; // 801ECB9C
  c->r[5]=c->r[5]+0xFFFFC3D0u; // 801ECBA0
  c->lr=0x801ECBA8u; f_801EE6AC(c); // 801ECBA4
  goto L_801ECCAC; // 801ECBA8
L_801ECBAC:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ECBAC
  c->r[3]=c->r[3]+c->r[0]; // 801ECBB0
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801ECBB4
  c->r[4]=0u+0x00000000u; // 801ECBB8
  c->r[5]=0u+0x00000002u; // 801ECBBC
  c->lr=0x801ECBC4u; f_8021B358(c); // 801ECBC0
  c->r[3]=c->r[31]|c->r[31]; // 801ECBC4
  c->r[4]=0u+0x00000004u; // 801ECBC8
  c->lr=0x801ECBD0u; f_801EDEE0(c); // 801ECBCC
  c->r[3]=c->r[31]|c->r[31]; // 801ECBD0
  c->r[4]=0u+0x00000009u; // 801ECBD4
  c->lr=0x801ECBDCu; f_801EDEF0(c); // 801ECBD8
  goto L_801ECCAC; // 801ECBDC
L_801ECBE0:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ECBE0
  c->r[3]=c->r[3]+c->r[0]; // 801ECBE4
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801ECBE8
  c->r[4]=0u+0x00000000u; // 801ECBEC
  c->r[5]=0u+0x00000002u; // 801ECBF0
  c->lr=0x801ECBF8u; f_8021B358(c); // 801ECBF4
  c->r[3]=c->r[31]|c->r[31]; // 801ECBF8
  c->r[4]=0u+0x00000004u; // 801ECBFC
  c->lr=0x801ECC04u; f_801EDEE0(c); // 801ECC00
  c->r[3]=c->r[31]|c->r[31]; // 801ECC04
  c->r[4]=0u+0x0000000Eu; // 801ECC08
  c->lr=0x801ECC10u; f_801EDEF0(c); // 801ECC0C
  goto L_801ECCAC; // 801ECC10
L_801ECC14:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ECC14
  c->r[3]=c->r[3]+c->r[0]; // 801ECC18
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801ECC1C
  c->r[4]=0u+0x00000000u; // 801ECC20
  c->r[5]=0u+0x00000002u; // 801ECC24
  c->lr=0x801ECC2Cu; f_8021B358(c); // 801ECC28
  c->r[3]=c->r[31]|c->r[31]; // 801ECC2C
  c->r[4]=0u+0x00000004u; // 801ECC30
  c->lr=0x801ECC38u; f_801EDEE0(c); // 801ECC34
  c->r[3]=c->r[31]|c->r[31]; // 801ECC38
  c->r[4]=0u+0x00000018u; // 801ECC3C
  c->lr=0x801ECC44u; f_801EDEF0(c); // 801ECC40
  goto L_801ECCAC; // 801ECC44
L_801ECC48:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ECC48
  c->r[3]=c->r[3]+c->r[0]; // 801ECC4C
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801ECC50
  c->r[4]=0u+0x00000000u; // 801ECC54
  c->r[5]=0u+0x00000002u; // 801ECC58
  c->lr=0x801ECC60u; f_8021B358(c); // 801ECC5C
  c->r[3]=c->r[31]|c->r[31]; // 801ECC60
  c->r[4]=0u+0x00000004u; // 801ECC64
  c->lr=0x801ECC6Cu; f_801EDEE0(c); // 801ECC68
  c->r[3]=c->r[31]|c->r[31]; // 801ECC6C
  c->r[4]=0u+0x00000011u; // 801ECC70
  c->lr=0x801ECC78u; f_801EDEF0(c); // 801ECC74
  goto L_801ECCAC; // 801ECC78
L_801ECC7C:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801ECC7C
  c->r[3]=c->r[3]+c->r[0]; // 801ECC80
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 801ECC84
  c->r[4]=0u+0x00000000u; // 801ECC88
  c->r[5]=0u+0x00000002u; // 801ECC8C
  c->lr=0x801ECC94u; f_8021B358(c); // 801ECC90
  c->r[3]=c->r[31]|c->r[31]; // 801ECC94
  c->r[4]=0u+0x00000004u; // 801ECC98
  c->lr=0x801ECCA0u; f_801EDEE0(c); // 801ECC9C
  c->r[3]=c->r[31]|c->r[31]; // 801ECCA0
  c->r[4]=0u+0xFFFFFFFFu; // 801ECCA4
  c->lr=0x801ECCACu; f_801EDEF0(c); // 801ECCA8
L_801ECCAC:;
  c->lr=0x801ECCB0u; f_8006592C(c); // 801ECCAC
  c->r[4]=0u+0x00000004u; // 801ECCB0
  c->r[5]=0u+0x00000000u; // 801ECCB4
  c->r[6]=0u+0xFFFFFFFFu; // 801ECCB8
  c->r[7]=0u+0xFFFFFFFFu; // 801ECCBC
  c->lr=0x801ECCC4u; f_80048F20(c); // 801ECCC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECCC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECCC8
  c->lr=c->r[0]; // 801ECCCC
  c->r[1]=c->r[1]+0x00000010u; // 801ECCD0
  return; // 801ECCD4
}

// fn_801ECCD8
void f_801ECCD8(Ctx* __restrict c) {
  return; // 801ECCD8
}

// fn_801ECCDC
void f_801ECCDC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000044u; // 801ECCDC
  f_8005D48C(c); return; // 801ECCE0
}

// fn_801ECCE4
void f_801ECCE4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000078u; // 801ECCE4
  return; // 801ECCE8
}

// fn_801ECCEC
void f_801ECCEC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFBB48u); // 801ECCEC
  return; // 801ECCF0
}

// fn_801ECCF4
void f_801ECCF4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D08u); // 801ECCF4
  return; // 801ECCF8
}

// fn_801ECCFC
void f_801ECCFC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000050u); // 801ECCFC
  return; // 801ECD00
}

// fn_801ECD04
void f_801ECD04(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801ECD04
  return; // 801ECD08
}

// fn_801ECD0C
void f_801ECD0C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801ECD0C
  W32(c->r[3]+0xFFFF8150u,c->r[4]); // 801ECD10
  return; // 801ECD14
}

// fn_801ECD18
void f_801ECD18(Ctx* __restrict c) {
  return; // 801ECD18
}

// fn_801ECD1C
void f_801ECD1C(Ctx* __restrict c) {
  return; // 801ECD1C
}

// fn_801ECD20
void f_801ECD20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECD20
  c->r[0]=c->lr; // 801ECD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECD28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECD2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ECD30
  c->r[31]=c->r[3]|c->r[3]; // 801ECD34
  c->lr=0x801ECD3Cu; f_80078F38(c); // 801ECD38
  c->r[3]=0u+0x80470000u; // 801ECD3C
  c->r[0]=c->r[3]+0x00004BE0u; // 801ECD40
  W32(c->r[31]+0x00000058u,c->r[0]); // 801ECD44
  c->r[0]=0u+0x00000064u; // 801ECD48
  c->r[3]=c->r[31]+0x00010000u; // 801ECD4C
  W16(c->r[3]+0xFFFF80D0u,c->r[0]); // 801ECD50
  c->r[30]=0u+0x00000000u; // 801ECD54
  W32(c->r[3]+0xFFFF80D4u,c->r[30]); // 801ECD58
  W32(c->r[3]+0xFFFF80FCu,c->r[30]); // 801ECD5C
  W32(c->r[3]+0xFFFF8138u,c->r[30]); // 801ECD60
  W32(c->r[3]+0xFFFF813Cu,c->r[30]); // 801ECD64
  W32(c->r[3]+0xFFFF8140u,c->r[30]); // 801ECD68
  W32(c->r[3]+0xFFFF8148u,c->r[30]); // 801ECD6C
  c->r[0]=0u+0x00000003u; // 801ECD70
  W32(c->r[3]+0xFFFF8160u,c->r[0]); // 801ECD74
  c->r[3]=c->r[31]|c->r[31]; // 801ECD78
  c->r[4]=0u+0x00140000u; // 801ECD7C
  c->r[5]=0u+0x80470000u; // 801ECD80
  c->r[5]=c->r[5]+0x00004B48u; // 801ECD84
  c->r[6]=0u+0x00000000u; // 801ECD88
  c->lr=0x801ECD90u; f_80078D6C(c); // 801ECD8C
  c->r[3]=c->r[31]+0x00010000u; // 801ECD90
  c->r[3]=c->r[3]+0xFFFF80D8u; // 801ECD94
  c->r[4]=0u+0x000008B4u; // 801ECD98
  c->lr=0x801ECDA0u; f_8028CA58(c); // 801ECD9C
  c->r[3]=c->r[31]+0x00010000u; // 801ECDA0
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ECDA4
  c->r[4]=0u+0x00000000u; // 801ECDA8
  c->lr=0x801ECDB0u; f_8028CA58(c); // 801ECDAC
  c->r[3]=c->r[31]+0x00010000u; // 801ECDB0
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801ECDB4
  c->r[4]=0u+0x00000000u; // 801ECDB8
  c->lr=0x801ECDC0u; f_8028CA58(c); // 801ECDBC
  c->r[3]=c->r[31]|c->r[31]; // 801ECDC0
  c->r[4]=R32(c->r[13]+0xFFFFBB28u); // 801ECDC4
  c->r[5]=0u+0x000000FFu; // 801ECDC8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801ECDCC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801ECDD0
  c->ctr=c->r[12]; // 801ECDD4
  if (true) { c->lr=0x801ECDDCu; dispatch(c,c->ctr); } // 801ECDD8
  c->r[0]=0u+0x00000001u; // 801ECDDC
  c->r[3]=c->r[31]+0x00010000u; // 801ECDE0
  W32(c->r[3]+0xFFFF8150u,c->r[0]); // 801ECDE4
  W32(c->r[3]+0xFFFF8154u,c->r[0]); // 801ECDE8
  W32(c->r[3]+0xFFFF8158u,c->r[30]); // 801ECDEC
  W32(c->r[3]+0xFFFF8100u,c->r[30]); // 801ECDF0
  W32(c->r[3]+0xFFFF8104u,c->r[30]); // 801ECDF4
  W32(c->r[3]+0xFFFF8108u,c->r[30]); // 801ECDF8
  W32(c->r[3]+0xFFFF810Cu,c->r[30]); // 801ECDFC
  W32(c->r[3]+0xFFFF8110u,c->r[30]); // 801ECE00
  W32(c->r[3]+0xFFFF8144u,c->r[30]); // 801ECE04
  W32(c->r[3]+0xFFFF8148u,c->r[30]); // 801ECE08
  W32(c->r[3]+0xFFFF814Cu,c->r[30]); // 801ECE0C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801ECE10
  c->lr=0x801ECE18u; f_801EF3E0(c); // 801ECE14
  cmpu(c,0,c->r[3],0x0000001Au); // 801ECE18
  if (!crb(c,2)) { goto L_801ECEAC; } // 801ECE1C
  c->lr=0x801ECE24u; f_8007B524(c); // 801ECE20
  c->r[4]=0u+0x00000000u; // 801ECE24
  c->lr=0x801ECE2Cu; f_8023BBB4(c); // 801ECE28
  cmps(c,0,(int32_t)c->r[3],1); // 801ECE2C
  if (crb(c,2)) { goto L_801ECE50; } // 801ECE30
  if (!crb(c,0)) { goto L_801ECE44; } // 801ECE34
  cmps(c,0,(int32_t)c->r[3],0); // 801ECE38
  if (!crb(c,0)) { goto L_801ECE64; } // 801ECE3C
  goto L_801ECE94; // 801ECE40
L_801ECE44:;
  cmps(c,0,(int32_t)c->r[3],3); // 801ECE44
  if (!crb(c,0)) { goto L_801ECE94; } // 801ECE48
  goto L_801ECE7C; // 801ECE4C
L_801ECE50:;
  c->r[3]=0u+0x80430000u; // 801ECE50
  c->r[0]=c->r[3]+0x00001728u; // 801ECE54
  c->r[3]=c->r[31]+0x00010000u; // 801ECE58
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ECE5C
  goto L_801ECEBC; // 801ECE60
L_801ECE64:;
  c->r[3]=0u+0x80430000u; // 801ECE64
  c->r[3]=c->r[3]+0x00001728u; // 801ECE68
  c->r[0]=c->r[3]+0x00000020u; // 801ECE6C
  c->r[3]=c->r[31]+0x00010000u; // 801ECE70
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ECE74
  goto L_801ECEBC; // 801ECE78
L_801ECE7C:;
  c->r[3]=0u+0x80430000u; // 801ECE7C
  c->r[3]=c->r[3]+0x00001728u; // 801ECE80
  c->r[0]=c->r[3]+0x00000040u; // 801ECE84
  c->r[3]=c->r[31]+0x00010000u; // 801ECE88
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ECE8C
  goto L_801ECEBC; // 801ECE90
L_801ECE94:;
  c->r[3]=0u+0x80430000u; // 801ECE94
  c->r[3]=c->r[3]+0x00001728u; // 801ECE98
  c->r[0]=c->r[3]+0x00000020u; // 801ECE9C
  c->r[3]=c->r[31]+0x00010000u; // 801ECEA0
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ECEA4
  goto L_801ECEBC; // 801ECEA8
L_801ECEAC:;
  c->r[3]=0u+0x80430000u; // 801ECEAC
  c->r[0]=c->r[3]+0x00001728u; // 801ECEB0
  c->r[3]=c->r[31]+0x00010000u; // 801ECEB4
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ECEB8
L_801ECEBC:;
  c->r[0]=0u+0x00000000u; // 801ECEBC
  c->r[3]=c->r[31]+0x00010000u; // 801ECEC0
  W32(c->r[3]+0xFFFF8114u,c->r[0]); // 801ECEC4
  W32(c->r[3]+0xFFFF8118u,c->r[0]); // 801ECEC8
  W32(c->r[3]+0xFFFF811Cu,c->r[0]); // 801ECECC
  c->r[4]=c->r[31]+0x0000000Cu; // 801ECED0
  c->r[3]=c->r[4]+0x00010000u; // 801ECED4
  W32(c->r[3]+0xFFFF8114u,c->r[0]); // 801ECED8
  W32(c->r[3]+0xFFFF8118u,c->r[0]); // 801ECEDC
  W32(c->r[3]+0xFFFF811Cu,c->r[0]); // 801ECEE0
  c->r[4]=c->r[4]+0x0000000Cu; // 801ECEE4
  c->r[3]=c->r[4]+0x00010000u; // 801ECEE8
  W32(c->r[3]+0xFFFF8114u,c->r[0]); // 801ECEEC
  W32(c->r[3]+0xFFFF8118u,c->r[0]); // 801ECEF0
  W32(c->r[3]+0xFFFF811Cu,c->r[0]); // 801ECEF4
  c->r[0]=0u+0x00000001u; // 801ECEF8
  c->r[3]=c->r[31]+0x00010000u; // 801ECEFC
  W32(c->r[3]+0xFFFF815Cu,c->r[0]); // 801ECF00
  c->r[3]=c->r[31]|c->r[31]; // 801ECF04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECF08
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECF0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECF10
  c->lr=c->r[0]; // 801ECF14
  c->r[1]=c->r[1]+0x00000010u; // 801ECF18
  return; // 801ECF1C
}

// dtor_801ECF20
void f_801ECF20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECF20
  c->r[0]=c->lr; // 801ECF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ECF28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ECF2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ECF30
  c->r[30]=c->r[3]|c->r[3]; // 801ECF34
  c->r[31]=c->r[4]|c->r[4]; // 801ECF38
  cmps(c,0,(int32_t)c->r[3],0); // 801ECF3C
  if (crb(c,2)) { goto L_801ECF8C; } // 801ECF40
  c->r[4]=0u+0x80470000u; // 801ECF44
  c->r[0]=c->r[4]+0x00004BE0u; // 801ECF48
  W32(c->r[3]+0x00000058u,c->r[0]); // 801ECF4C
  c->lr=0x801ECF54u; f_80078DF4(c); // 801ECF50
  c->r[3]=c->r[30]|c->r[30]; // 801ECF54
  c->r[4]=R32(c->r[13]+0xFFFFBB28u); // 801ECF58
  c->r[12]=R32(c->r[3]+0x00000058u); // 801ECF5C
  c->r[12]=R32(c->r[12]+0x00000014u); // 801ECF60
  c->ctr=c->r[12]; // 801ECF64
  if (true) { c->lr=0x801ECF6Cu; dispatch(c,c->ctr); } // 801ECF68
  c->r[3]=c->r[30]|c->r[30]; // 801ECF6C
  c->r[4]=0u+0x00000000u; // 801ECF70
  c->lr=0x801ECF78u; f_80078FA4(c); // 801ECF74
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801ECF78
  cmps(c,0,(int32_t)c->r[0],0); // 801ECF7C
  if (!crb(c,1)) { goto L_801ECF8C; } // 801ECF80
  c->r[3]=c->r[30]|c->r[30]; // 801ECF84
  c->lr=0x801ECF8Cu; f_80047B20(c); // 801ECF88
L_801ECF8C:;
  c->r[3]=c->r[30]|c->r[30]; // 801ECF8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ECF90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ECF94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ECF98
  c->lr=c->r[0]; // 801ECF9C
  c->r[1]=c->r[1]+0x00000010u; // 801ECFA0
  return; // 801ECFA4
}

// fn_801ECFA8
void f_801ECFA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ECFA8
  c->r[0]=c->lr; // 801ECFAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ECFB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ECFB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ECFB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ECFBC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801ECFC0
  c->r[28]=c->r[3]|c->r[3]; // 801ECFC4
  c->r[3]=c->r[3]+0x00010000u; // 801ECFC8
  c->r[3]=c->r[3]+0xFFFF80D8u; // 801ECFCC
  c->lr=0x801ECFD4u; f_80078A60(c); // 801ECFD0
  c->r[30]=c->r[3]|c->r[3]; // 801ECFD4
  c->r[3]=c->r[28]+0x00010000u; // 801ECFD8
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801ECFDC
  c->lr=0x801ECFE4u; f_8004B018(c); // 801ECFE0
  c->r[29]=c->r[3]|c->r[3]; // 801ECFE4
  c->r[0]=0u+0x00000000u; // 801ECFE8
  c->r[3]=c->r[28]+0x00010000u; // 801ECFEC
  W32(c->r[3]+0xFFFF815Cu,c->r[0]); // 801ECFF0
  goto L_801ED01C; // 801ECFF4
L_801ECFF8:;
  c->r[3]=c->r[28]+0x00010000u; // 801ECFF8
  c->r[3]=c->r[3]+0xFFFF80D8u; // 801ECFFC
  c->r[4]=c->r[30]|c->r[30]; // 801ED000
  c->lr=0x801ED008u; f_8028CCF8(c); // 801ED004
  c->r[31]=c->r[3]|c->r[3]; // 801ED008
  c->r[3]=c->r[28]|c->r[28]; // 801ED00C
  c->r[4]=c->r[30]|c->r[30]; // 801ED010
  c->lr=0x801ED018u; f_801EEE18(c); // 801ED014
  c->r[30]=c->r[31]|c->r[31]; // 801ED018
L_801ED01C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ED01C
  if (!crb(c,2)) { IRQCHK(c); goto L_801ECFF8; } // 801ED020
  goto L_801ED04C; // 801ED024
L_801ED028:;
  c->r[3]=c->r[28]+0x00010000u; // 801ED028
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801ED02C
  c->r[4]=c->r[29]|c->r[29]; // 801ED030
  c->lr=0x801ED038u; f_8028CCD8(c); // 801ED034
  c->r[30]=c->r[3]|c->r[3]; // 801ED038
  c->r[3]=c->r[28]|c->r[28]; // 801ED03C
  c->r[4]=c->r[29]|c->r[29]; // 801ED040
  c->lr=0x801ED048u; f_801EEEB0(c); // 801ED044
  c->r[29]=c->r[30]|c->r[30]; // 801ED048
L_801ED04C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801ED04C
  if (!crb(c,2)) { IRQCHK(c); goto L_801ED028; } // 801ED050
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ED054
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ED058
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ED05C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801ED060
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED064
  c->lr=c->r[0]; // 801ED068
  c->r[1]=c->r[1]+0x00000020u; // 801ED06C
  return; // 801ED070
}

// fn_801ED074
void f_801ED074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED074
  c->r[0]=c->lr; // 801ED078
  W32(c->r[1]+0x00000014u,c->r[0]); // 801ED07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801ED080
  W32(c->r[1]+0x00000008u,c->r[30]); // 801ED084
  c->r[30]=c->r[3]|c->r[3]; // 801ED088
  c->r[3]=c->r[3]+0x00010000u; // 801ED08C
  c->r[3]=c->r[3]+0xFFFF80D8u; // 801ED090
  c->lr=0x801ED098u; f_8004B018(c); // 801ED094
  c->r[31]=c->r[3]|c->r[3]; // 801ED098
  c->r[3]=c->r[30]+0x00010000u; // 801ED09C
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801ED0A0
  c->lr=0x801ED0A8u; f_8004B018(c); // 801ED0A4
  c->r[0]=0u+0x00000000u; // 801ED0A8
  cmps(c,0,(int32_t)c->r[31],0); // 801ED0AC
  if (!crb(c,2)) { goto L_801ED0C0; } // 801ED0B0
  cmps(c,0,(int32_t)c->r[3],0); // 801ED0B4
  if (!crb(c,2)) { goto L_801ED0C0; } // 801ED0B8
  c->r[0]=0u+0x00000001u; // 801ED0BC
L_801ED0C0:;
  c->r[3]=c->r[0]|c->r[0]; // 801ED0C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801ED0C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801ED0C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801ED0CC
  c->lr=c->r[0]; // 801ED0D0
  c->r[1]=c->r[1]+0x00000010u; // 801ED0D4
  return; // 801ED0D8
}

// fn_801ED0DC
void f_801ED0DC(Ctx* __restrict c) {
  W32(c->r[13]+0xFFFFBB28u,c->r[3]); // 801ED0DC
  return; // 801ED0E0
}

// fn_801ED0E4
void f_801ED0E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED0E4
  c->r[0]=c->lr; // 801ED0E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED0EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ED0F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ED0F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ED0F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801ED0FC
  c->r[31]=c->r[3]|c->r[3]; // 801ED100
  c->r[4]=c->r[3]+0x00010000u; // 801ED104
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 801ED108
  cmps(c,0,(int32_t)c->r[0],2); // 801ED10C
  if (crb(c,2)) { goto L_801ED378; } // 801ED110
  if (!crb(c,0)) { goto L_801ED128; } // 801ED114
  cmps(c,0,(int32_t)c->r[0],0); // 801ED118
  if (crb(c,2)) { goto L_801ED378; } // 801ED11C
  if (!crb(c,0)) { goto L_801ED138; } // 801ED120
  goto L_801ED378; // 801ED124
L_801ED128:;
  cmps(c,0,(int32_t)c->r[0],4); // 801ED128
  if (crb(c,2)) { goto L_801ED260; } // 801ED12C
  if (!crb(c,0)) { goto L_801ED378; } // 801ED130
  goto L_801ED1A8; // 801ED134
L_801ED138:;
  c->r[3]=R32(c->r[4]+0xFFFF8138u); // 801ED138
  c->r[4]=0u+0x00000000u; // 801ED13C
  c->lr=0x801ED144u; f_8021B3FC(c); // 801ED140
  cmps(c,0,(int32_t)c->r[3],0); // 801ED144
  if (crb(c,2)) { goto L_801ED39C; } // 801ED148
  c->r[3]=c->r[31]+0x00010000u; // 801ED14C
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED150
  c->lr=0x801ED158u; f_8004B018(c); // 801ED154
  c->r[30]=c->r[3]|c->r[3]; // 801ED158
  goto L_801ED180; // 801ED15C
L_801ED160:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801ED160
  c->r[4]=0u+0x00000001u; // 801ED164
  c->lr=0x801ED16Cu; f_80224B90(c); // 801ED168
  c->r[3]=c->r[31]+0x00010000u; // 801ED16C
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED170
  c->r[4]=c->r[30]|c->r[30]; // 801ED174
  c->lr=0x801ED17Cu; f_8028CCD8(c); // 801ED178
  c->r[30]=c->r[3]|c->r[3]; // 801ED17C
L_801ED180:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ED180
  if (!crb(c,2)) { IRQCHK(c); goto L_801ED160; } // 801ED184
  c->r[3]=c->r[31]+0x00010000u; // 801ED188
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801ED18C
  c->r[4]=0u+0x00000001u; // 801ED190
  c->lr=0x801ED198u; f_8021B46C(c); // 801ED194
  c->r[0]=0u+0x00000002u; // 801ED198
  c->r[3]=c->r[31]+0x00010000u; // 801ED19C
  W32(c->r[3]+0xFFFF8148u,c->r[0]); // 801ED1A0
  goto L_801ED39C; // 801ED1A4
L_801ED1A8:;
  c->r[3]=c->r[4]|c->r[4]; // 801ED1A8
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED1AC
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED1B0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED1B4
  c->lr=0x801ED1BCu; f_8028CD14(c); // 801ED1B8
  c->r[3]=R32(c->r[3]+0x00000014u); // 801ED1BC
  c->r[4]=0u+0x00000000u; // 801ED1C0
  c->lr=0x801ED1C8u; f_8021B3FC(c); // 801ED1C4
  cmps(c,0,(int32_t)c->r[3],0); // 801ED1C8
  if (crb(c,2)) { goto L_801ED39C; } // 801ED1CC
  c->r[3]=c->r[31]+0x00010000u; // 801ED1D0
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED1D4
  c->lr=0x801ED1DCu; f_8004B018(c); // 801ED1D8
  c->r[30]=c->r[3]|c->r[3]; // 801ED1DC
  goto L_801ED214; // 801ED1E0
L_801ED1E4:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801ED1E4
  c->r[4]=0u+0x00000000u; // 801ED1E8
  c->lr=0x801ED1F0u; f_80224B90(c); // 801ED1EC
  c->r[3]=R32(c->r[30]+0x00000014u); // 801ED1F0
  c->r[4]=0u+0x00000006u; // 801ED1F4
  c->r[5]=0u+0x00000003u; // 801ED1F8
  c->lr=0x801ED200u; f_8021B358(c); // 801ED1FC
  c->r[3]=c->r[31]+0x00010000u; // 801ED200
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED204
  c->r[4]=c->r[30]|c->r[30]; // 801ED208
  c->lr=0x801ED210u; f_8028CCD8(c); // 801ED20C
  c->r[30]=c->r[3]|c->r[3]; // 801ED210
L_801ED214:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ED214
  if (!crb(c,2)) { IRQCHK(c); goto L_801ED1E4; } // 801ED218
  c->r[3]=c->r[31]+0x00010000u; // 801ED21C
  c->r[3]=R32(c->r[3]+0xFFFF8138u); // 801ED220
  c->r[4]=0u+0x00000006u; // 801ED224
  c->r[5]=0u+0x00000002u; // 801ED228
  c->lr=0x801ED230u; f_8021B358(c); // 801ED22C
  c->r[3]=c->r[31]+0x00010000u; // 801ED230
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801ED234
  c->r[4]=0u+0x00000000u; // 801ED238
  c->lr=0x801ED240u; f_8021B46C(c); // 801ED23C
  c->r[3]=c->r[31]+0x00010000u; // 801ED240
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801ED244
  c->r[4]=0u+0x00000000u; // 801ED248
  c->lr=0x801ED250u; f_80224B90(c); // 801ED24C
  c->r[0]=0u+0x00000004u; // 801ED250
  c->r[3]=c->r[31]+0x00010000u; // 801ED254
  W32(c->r[3]+0xFFFF8148u,c->r[0]); // 801ED258
  goto L_801ED39C; // 801ED25C
L_801ED260:;
  c->r[3]=R32(c->r[4]+0xFFFF8138u); // 801ED260
  c->r[4]=0u+0x00000000u; // 801ED264
  c->lr=0x801ED26Cu; f_8021B3FC(c); // 801ED268
  cmps(c,0,(int32_t)c->r[3],0); // 801ED26C
  if (crb(c,2)) { goto L_801ED39C; } // 801ED270
  c->r[3]=c->r[31]+0x00010000u; // 801ED274
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED278
  c->lr=0x801ED280u; f_8004B018(c); // 801ED27C
  c->r[30]=c->r[3]|c->r[3]; // 801ED280
  c->r[3]=c->r[31]+0x00010000u; // 801ED284
  c->r[4]=R32(c->r[3]+0xFFFF8138u); // 801ED288
  cmps(c,0,(int32_t)c->r[4],0); // 801ED28C
  if (crb(c,2)) { goto L_801ED338; } // 801ED290
  c->r[3]=c->r[31]|c->r[31]; // 801ED294
  c->lr=0x801ED29Cu; f_801EEE18(c); // 801ED298
  c->r[3]=c->r[31]|c->r[31]; // 801ED29C
  c->r[4]=c->r[31]+0x00010000u; // 801ED2A0
  c->r[4]=R32(c->r[4]+0xFFFF813Cu); // 801ED2A4
  c->lr=0x801ED2ACu; f_801EEE18(c); // 801ED2A8
  c->r[3]=c->r[31]|c->r[31]; // 801ED2AC
  c->r[4]=c->r[31]+0x00010000u; // 801ED2B0
  c->r[4]=R32(c->r[4]+0xFFFF8140u); // 801ED2B4
  c->lr=0x801ED2BCu; f_801EEEB0(c); // 801ED2B8
  c->r[0]=0u+0x00000000u; // 801ED2BC
  c->r[3]=c->r[31]+0x00010000u; // 801ED2C0
  W32(c->r[3]+0xFFFF8138u,c->r[0]); // 801ED2C4
  W32(c->r[3]+0xFFFF813Cu,c->r[0]); // 801ED2C8
  W32(c->r[3]+0xFFFF8140u,c->r[0]); // 801ED2CC
  goto L_801ED338; // 801ED2D0
L_801ED2D4:;
  c->r[3]=c->r[31]+0x00010000u; // 801ED2D4
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED2D8
  c->r[4]=c->r[30]|c->r[30]; // 801ED2DC
  c->lr=0x801ED2E4u; f_8028CCD8(c); // 801ED2E0
  c->r[29]=c->r[3]|c->r[3]; // 801ED2E4
  c->r[3]=c->r[31]|c->r[31]; // 801ED2E8
  c->r[4]=R32(c->r[30]+0x00000010u); // 801ED2EC
  c->lr=0x801ED2F4u; f_801EEEB0(c); // 801ED2F0
  c->r[3]=c->r[31]|c->r[31]; // 801ED2F4
  c->r[4]=R32(c->r[30]+0x00000014u); // 801ED2F8
  c->lr=0x801ED300u; f_801EEE18(c); // 801ED2FC
  c->r[3]=c->r[31]+0x00010000u; // 801ED300
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED304
  c->r[4]=c->r[30]|c->r[30]; // 801ED308
  c->lr=0x801ED310u; f_8028CC6C(c); // 801ED30C
  c->lr=0x801ED314u; f_80056B5C(c); // 801ED310
  c->r[28]=c->r[3]|c->r[3]; // 801ED314
  c->r[3]=c->r[31]|c->r[31]; // 801ED318
  c->lr=0x801ED320u; f_80065DB4(c); // 801ED31C
  c->lr=0x801ED324u; f_80056B54(c); // 801ED320
  c->r[3]=c->r[30]|c->r[30]; // 801ED324
  c->lr=0x801ED32Cu; f_80047B20(c); // 801ED328
  c->r[3]=c->r[28]|c->r[28]; // 801ED32C
  c->lr=0x801ED334u; f_80056B54(c); // 801ED330
  c->r[30]=c->r[29]|c->r[29]; // 801ED334
L_801ED338:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ED338
  if (!crb(c,2)) { IRQCHK(c); goto L_801ED2D4; } // 801ED33C
  c->r[30]=0u+0x00000000u; // 801ED340
  c->r[4]=c->r[31]+0x00010000u; // 801ED344
  W32(c->r[4]+0xFFFF8148u,c->r[30]); // 801ED348
  c->r[3]=R32(c->r[4]+0xFFFF80FCu); // 801ED34C
  cmps(c,0,(int32_t)c->r[3],0); // 801ED350
  if (crb(c,2)) { goto L_801ED39C; } // 801ED354
  c->r[0]=R32(c->r[4]+0xFFFF8158u); // 801ED358
  cmps(c,0,(int32_t)c->r[0],0); // 801ED35C
  if (crb(c,2)) { goto L_801ED39C; } // 801ED360
  c->r[4]=0u+0x00000001u; // 801ED364
  c->lr=0x801ED36Cu; f_8021B46C(c); // 801ED368
  c->r[3]=c->r[31]+0x00010000u; // 801ED36C
  W32(c->r[3]+0xFFFF8158u,c->r[30]); // 801ED370
  goto L_801ED39C; // 801ED374
L_801ED378:;
  c->r[3]=c->r[3]+0x00010000u; // 801ED378
  c->r[0]=R32(c->r[3]+0xFFFF8138u); // 801ED37C
  cmps(c,0,(int32_t)c->r[0],0); // 801ED380
  if (crb(c,2)) { goto L_801ED39C; } // 801ED384
  c->lr=0x801ED38Cu; f_801E65AC(c); // 801ED388
  c->r[4]=c->r[3]|c->r[3]; // 801ED38C
  c->r[3]=c->r[31]+0x00010000u; // 801ED390
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801ED394
  c->lr=0x801ED39Cu; f_80224B90(c); // 801ED398
L_801ED39C:;
  c->r[3]=c->r[31]+0x00010000u; // 801ED39C
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801ED3A0
  c->lr=0x801ED3A8u; f_8004B018(c); // 801ED3A4
  c->r[30]=c->r[3]|c->r[3]; // 801ED3A8
  goto L_801ED3CC; // 801ED3AC
L_801ED3B0:;
  c->r[3]=c->r[30]|c->r[30]; // 801ED3B0
  c->lr=0x801ED3B8u; f_80224BBC(c); // 801ED3B4
  c->r[3]=c->r[31]+0x00010000u; // 801ED3B8
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801ED3BC
  c->r[4]=c->r[30]|c->r[30]; // 801ED3C0
  c->lr=0x801ED3C8u; f_8028CCD8(c); // 801ED3C4
  c->r[30]=c->r[3]|c->r[3]; // 801ED3C8
L_801ED3CC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801ED3CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801ED3B0; } // 801ED3D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801ED3D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801ED3D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801ED3DC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801ED3E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801ED3E4
  c->lr=c->r[0]; // 801ED3E8
  c->r[1]=c->r[1]+0x00000020u; // 801ED3EC
  return; // 801ED3F0
}

// fn_801ED3F4
void f_801ED3F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED3F4
  c->r[0]=c->lr; // 801ED3F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801ED3FC
  c->r[11]=c->r[1]+0x00000030u; // 801ED400
  c->lr=0x801ED408u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801ED404
  c->r[27]=c->r[3]|c->r[3]; // 801ED408
  c->r[28]=c->r[4]|c->r[4]; // 801ED40C
  c->r[3]=c->r[1]+0x00000010u; // 801ED410
  c->lr=0x801ED418u; f_80047C5C(c); // 801ED414
  c->r[3]=c->r[27]+0x00010000u; // 801ED418
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED41C
  c->r[4]=c->r[27]+0x00010000u; // 801ED420
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED424
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED428
  c->lr=0x801ED430u; f_8028CD14(c); // 801ED42C
  c->r[29]=c->r[3]|c->r[3]; // 801ED430
  c->r[3]=c->r[27]+0x00010000u; // 801ED434
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED438
  c->r[4]=rotl(c->r[28],0)&0x0000FFFFu; // 801ED43C
  c->lr=0x801ED444u; f_8028CD14(c); // 801ED440
  c->r[30]=c->r[3]|c->r[3]; // 801ED444
  c->r[3]=c->r[27]+0x00010000u; // 801ED448
  c->r[0]=R32(c->r[3]+0xFFFF8144u); // 801ED44C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801ED450
  if (crb(c,2)) { goto L_801ED470; } // 801ED454
  c->lr=0x801ED45Cu; f_8006592C(c); // 801ED458
  c->r[4]=0u+0x00000006u; // 801ED45C
  c->r[5]=0u+0x00000000u; // 801ED460
  c->r[6]=0u+0xFFFFFFFFu; // 801ED464
  c->r[7]=0u+0xFFFFFFFFu; // 801ED468
  c->lr=0x801ED470u; f_80048F20(c); // 801ED46C
L_801ED470:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 801ED470
  c->r[4]=0u+0x00000002u; // 801ED474
  c->r[5]=0u+0x00000000u; // 801ED478
  c->lr=0x801ED480u; f_8021B358(c); // 801ED47C
  c->r[3]=R32(c->r[30]+0x00000014u); // 801ED480
  c->r[4]=0u+0x00000002u; // 801ED484
  c->r[5]=0u+0x00000001u; // 801ED488
  c->lr=0x801ED490u; f_8021B358(c); // 801ED48C
  c->r[31]=0u+0x000000FFu; // 801ED490
  W8(c->r[1]+0x00000010u,c->r[31]); // 801ED494
  W8(c->r[1]+0x00000011u,c->r[31]); // 801ED498
  W8(c->r[1]+0x00000012u,c->r[31]); // 801ED49C
  W8(c->r[1]+0x00000013u,c->r[31]); // 801ED4A0
  c->r[3]=c->r[1]+0x0000000Cu; // 801ED4A4
  c->r[4]=c->r[1]+0x00000010u; // 801ED4A8
  c->lr=0x801ED4B0u; f_800549FC(c); // 801ED4AC
  c->r[3]=R32(c->r[29]+0x00000010u); // 801ED4B0
  c->r[4]=c->r[1]+0x0000000Cu; // 801ED4B4
  c->lr=0x801ED4BCu; f_801ECCDC(c); // 801ED4B8
  c->r[3]=c->r[1]+0x0000000Cu; // 801ED4BC
  c->r[4]=0u+0xFFFFFFFFu; // 801ED4C0
  c->lr=0x801ED4C8u; f_80047BD4(c); // 801ED4C4
  W8(c->r[1]+0x00000010u,c->r[31]); // 801ED4C8
  W8(c->r[1]+0x00000011u,c->r[31]); // 801ED4CC
  c->r[0]=0u+0x00000000u; // 801ED4D0
  W8(c->r[1]+0x00000012u,c->r[0]); // 801ED4D4
  W8(c->r[1]+0x00000013u,c->r[31]); // 801ED4D8
  c->r[3]=c->r[1]+0x00000008u; // 801ED4DC
  c->r[4]=c->r[1]+0x00000010u; // 801ED4E0
  c->lr=0x801ED4E8u; f_800549FC(c); // 801ED4E4
  c->r[3]=R32(c->r[30]+0x00000010u); // 801ED4E8
  c->r[4]=c->r[1]+0x00000008u; // 801ED4EC
  c->lr=0x801ED4F4u; f_801ECCDC(c); // 801ED4F0
  c->r[3]=c->r[1]+0x00000008u; // 801ED4F4
  c->r[4]=0u+0xFFFFFFFFu; // 801ED4F8
  c->lr=0x801ED500u; f_80047BD4(c); // 801ED4FC
  c->r[3]=c->r[27]+0x00010000u; // 801ED500
  W32(c->r[3]+0xFFFF8144u,c->r[28]); // 801ED504
  c->r[0]=R32(c->r[3]+0xFFFF814Cu); // 801ED508
  cmps(c,0,(int32_t)c->r[0],0); // 801ED50C
  if (!crb(c,2)) { goto L_801ED52C; } // 801ED510
  c->r[3]=R32(c->r[30]+0x00000014u); // 801ED514
  c->lr=0x801ED51Cu; f_8021B2A0(c); // 801ED518
  c->r[3]=c->r[27]+0x00010000u; // 801ED51C
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801ED520
  c->lr=0x801ED528u; f_8021B290(c); // 801ED524
  goto L_801ED548; // 801ED528
L_801ED52C:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801ED52C
  c->lr=0x801ED534u; f_8021B298(c); // 801ED530
  {uint32_t ea=c->r[2]+0xFFFF94D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801ED534
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801ED538
  c->r[3]=c->r[27]+0x00010000u; // 801ED53C
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801ED540
  c->lr=0x801ED548u; f_8021B288(c); // 801ED544
L_801ED548:;
  c->r[3]=c->r[1]+0x00000010u; // 801ED548
  c->r[4]=0u+0xFFFFFFFFu; // 801ED54C
  c->lr=0x801ED554u; f_80047BD4(c); // 801ED550
  c->r[11]=c->r[1]+0x00000030u; // 801ED554
  c->lr=0x801ED55Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801ED558
  c->r[0]=R32(c->r[1]+0x00000034u); // 801ED55C
  c->lr=c->r[0]; // 801ED560
  c->r[1]=c->r[1]+0x00000030u; // 801ED564
  return; // 801ED568
}

// fn_801ED56C
void f_801ED56C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801ED56C
  c->r[0]=c->lr; // 801ED570
  W32(c->r[1]+0x00000024u,c->r[0]); // 801ED574
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801ED578
  W32(c->r[1]+0x00000018u,c->r[30]); // 801ED57C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801ED580
  c->r[30]=c->r[3]|c->r[3]; // 801ED584
  c->r[3]=c->r[3]+0x00010000u; // 801ED588
  c->r[0]=R32(c->r[3]+0xFFFF815Cu); // 801ED58C
  cmps(c,0,(int32_t)c->r[0],0); // 801ED590
  if (crb(c,2)) { goto L_801EDEC4; } // 801ED594
  c->lr=0x801ED59Cu; f_801E65AC(c); // 801ED598
  cmps(c,0,(int32_t)c->r[3],0); // 801ED59C
  if (crb(c,2)) { goto L_801EDEC4; } // 801ED5A0
  c->lr=0x801ED5A8u; f_80047C9C(c); // 801ED5A4
  c->lr=0x801ED5ACu; f_80065638(c); // 801ED5A8
  cmps(c,0,(int32_t)c->r[3],0); // 801ED5AC
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED5B0
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801ED5B4
  c->lr=0x801ED5BCu; f_801EF3E0(c); // 801ED5B8
  cmpu(c,0,c->r[3],0x0000001Au); // 801ED5BC
  if (!crb(c,2)) { goto L_801ED69C; } // 801ED5C0
  c->lr=0x801ED5C8u; f_8007B524(c); // 801ED5C4
  c->r[4]=0u+0x00000000u; // 801ED5C8
  c->lr=0x801ED5D0u; f_8023BBB4(c); // 801ED5CC
  c->r[4]=c->r[30]+0x00010000u; // 801ED5D0
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED5D4
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801ED5D8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 801ED5DC
  if (crb(c,2)) { goto L_801ED6F0; } // 801ED5E0
  c->lr=0x801ED5E8u; f_8007B524(c); // 801ED5E4
  c->r[4]=0u+0x00000000u; // 801ED5E8
  c->lr=0x801ED5F0u; f_8023BBB4(c); // 801ED5EC
  cmps(c,0,(int32_t)c->r[3],1); // 801ED5F0
  if (crb(c,2)) { goto L_801ED614; } // 801ED5F4
  if (!crb(c,0)) { goto L_801ED608; } // 801ED5F8
  cmps(c,0,(int32_t)c->r[3],0); // 801ED5FC
  if (!crb(c,0)) { goto L_801ED62C; } // 801ED600
  goto L_801ED664; // 801ED604
L_801ED608:;
  cmps(c,0,(int32_t)c->r[3],3); // 801ED608
  if (!crb(c,0)) { goto L_801ED664; } // 801ED60C
  goto L_801ED648; // 801ED610
L_801ED614:;
  c->r[3]=0u+0x80430000u; // 801ED614
  c->r[0]=c->r[3]+0x00001728u; // 801ED618
  c->r[3]=c->r[30]+0x00010000u; // 801ED61C
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ED620
  c->r[4]=0u+0x00000004u; // 801ED624
  goto L_801ED67C; // 801ED628
L_801ED62C:;
  c->r[3]=0u+0x80430000u; // 801ED62C
  c->r[3]=c->r[3]+0x00001728u; // 801ED630
  c->r[0]=c->r[3]+0x00000020u; // 801ED634
  c->r[3]=c->r[30]+0x00010000u; // 801ED638
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ED63C
  c->r[4]=0u+0x00000005u; // 801ED640
  goto L_801ED67C; // 801ED644
L_801ED648:;
  c->r[3]=0u+0x80430000u; // 801ED648
  c->r[3]=c->r[3]+0x00001728u; // 801ED64C
  c->r[0]=c->r[3]+0x00000040u; // 801ED650
  c->r[3]=c->r[30]+0x00010000u; // 801ED654
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ED658
  c->r[4]=0u+0x00000006u; // 801ED65C
  goto L_801ED67C; // 801ED660
L_801ED664:;
  c->r[3]=0u+0x80430000u; // 801ED664
  c->r[3]=c->r[3]+0x00001728u; // 801ED668
  c->r[0]=c->r[3]+0x00000020u; // 801ED66C
  c->r[3]=c->r[30]+0x00010000u; // 801ED670
  W32(c->r[3]+0xFFFF8164u,c->r[0]); // 801ED674
  c->r[4]=0u+0x00000005u; // 801ED678
L_801ED67C:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801ED67C
  c->lr=0x801ED684u; f_801EF41C(c); // 801ED680
  c->r[4]=c->r[3]|c->r[3]; // 801ED684
  c->r[3]=c->r[30]+0x00010000u; // 801ED688
  c->r[3]=R32(c->r[3]+0xFFFF810Cu); // 801ED68C
  c->r[5]=0u+0x00000001u; // 801ED690
  c->lr=0x801ED698u; f_80224894(c); // 801ED694
  goto L_801ED6F0; // 801ED698
L_801ED69C:;
  c->lr=0x801ED6A0u; f_801ECCEC(c); // 801ED69C
  c->lr=0x801ED6A4u; f_801ECCF4(c); // 801ED6A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801ED6A4
  cmps(c,0,(int32_t)c->r[0],2); // 801ED6A8
  if (!crb(c,2)) { goto L_801ED6F0; } // 801ED6AC
  c->r[3]=c->r[30]+0x00010000u; // 801ED6B0
  c->r[0]=R32(c->r[3]+0xFFFF8150u); // 801ED6B4
  cmps(c,0,(int32_t)c->r[0],0); // 801ED6B8
  if (crb(c,2)) { goto L_801ED6F0; } // 801ED6BC
  c->lr=0x801ED6C4u; f_801ECCEC(c); // 801ED6C0
  c->lr=0x801ED6C8u; f_80207A34(c); // 801ED6C4
  cmps(c,0,(int32_t)c->r[3],0); // 801ED6C8
  if (crb(c,2)) { goto L_801ED6F0; } // 801ED6CC
  c->r[3]=0u+0x00000008u; // 801ED6D0
  c->r[4]=0u+0x80470000u; // 801ED6D4
  c->r[4]=c->r[4]+0x00004B58u; // 801ED6D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801ED6DC
  c->lr=0x801ED6E4u; f_803D3760(c); // 801ED6E0
  c->r[0]=0u+0x00000000u; // 801ED6E4
  c->r[3]=c->r[30]+0x00010000u; // 801ED6E8
  W32(c->r[3]+0xFFFF8150u,c->r[0]); // 801ED6EC
L_801ED6F0:;
  c->r[3]=c->r[30]+0x00010000u; // 801ED6F0
  c->r[0]=R32(c->r[3]+0xFFFF8148u); // 801ED6F4
  cmps(c,0,(int32_t)c->r[0],1); // 801ED6F8
  if (crb(c,2)) { goto L_801EDEC4; } // 801ED6FC
  if (!crb(c,0)) { goto L_801ED710; } // 801ED700
  cmps(c,0,(int32_t)c->r[0],0); // 801ED704
  if (!crb(c,0)) { goto L_801EDAFC; } // 801ED708
  goto L_801EDEC4; // 801ED70C
L_801ED710:;
  cmps(c,0,(int32_t)c->r[0],3); // 801ED710
  if (!crb(c,0)) { goto L_801EDEC4; } // 801ED714
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED718
  c->lr=0x801ED720u; f_8005C00C(c); // 801ED71C
  c->r[31]=rotl(c->r[3],0)&0x0000FFFFu; // 801ED720
  c->r[3]=c->r[30]+0x00010000u; // 801ED724
  c->r[29]=R32(c->r[3]+0xFFFF8164u); // 801ED728
  c->r[0]=R32(c->r[29]+0x00000018u); // 801ED72C
  cmps(c,0,(int32_t)c->r[0],0); // 801ED730
  if (crb(c,2)) { goto L_801ED918; } // 801ED734
  c->lr=0x801ED73Cu; f_80047C90(c); // 801ED738
  c->r[4]=0u+0x00000000u; // 801ED73C
  c->lr=0x801ED744u; f_80058EA4(c); // 801ED740
  c->r[4]=R32(c->r[29]+0x00000000u); // 801ED744
  c->lr=0x801ED74Cu; f_80057CA0(c); // 801ED748
  cmps(c,0,(int32_t)c->r[3],0); // 801ED74C
  if (crb(c,2)) { goto L_801ED788; } // 801ED750
  c->r[4]=c->r[30]+0x00010000u; // 801ED754
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED758
  cmps(c,0,(int32_t)c->r[0],0); // 801ED75C
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED760
  c->r[3]=c->r[30]|c->r[30]; // 801ED764
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED768
  c->r[4]=c->r[31]+c->r[0]; // 801ED76C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801ED770
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801ED774
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801ED778
  c->r[4]=c->r[4]-c->r[0]; // 801ED77C
  c->lr=0x801ED784u; f_801ED3F4(c); // 801ED780
  goto L_801EDEC4; // 801ED784
L_801ED788:;
  c->lr=0x801ED78Cu; f_80047C90(c); // 801ED788
  c->r[4]=0u+0x00000000u; // 801ED78C
  c->lr=0x801ED794u; f_80058EA4(c); // 801ED790
  c->r[4]=c->r[30]+0x00010000u; // 801ED794
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED798
  c->r[4]=R32(c->r[4]+0x00000004u); // 801ED79C
  c->lr=0x801ED7A4u; f_80057CA0(c); // 801ED7A0
  cmps(c,0,(int32_t)c->r[3],0); // 801ED7A4
  if (crb(c,2)) { goto L_801ED7DC; } // 801ED7A8
  c->r[4]=c->r[30]+0x00010000u; // 801ED7AC
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED7B0
  cmps(c,0,(int32_t)c->r[0],0); // 801ED7B4
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED7B8
  c->r[3]=c->r[30]|c->r[30]; // 801ED7BC
  c->r[4]=R32(c->r[4]+0xFFFF8144u); // 801ED7C0
  c->r[4]=c->r[4]+0x00000001u; // 801ED7C4
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801ED7C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801ED7CC
  c->r[4]=c->r[4]-c->r[0]; // 801ED7D0
  c->lr=0x801ED7D8u; f_801ED3F4(c); // 801ED7D4
  goto L_801EDEC4; // 801ED7D8
L_801ED7DC:;
  c->lr=0x801ED7E0u; f_80047C90(c); // 801ED7DC
  c->r[4]=0u+0x00000000u; // 801ED7E0
  c->lr=0x801ED7E8u; f_80058EA4(c); // 801ED7E4
  c->r[4]=c->r[30]+0x00010000u; // 801ED7E8
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED7EC
  c->r[4]=R32(c->r[4]+0x00000008u); // 801ED7F0
  c->lr=0x801ED7F8u; f_80057CA0(c); // 801ED7F4
  cmps(c,0,(int32_t)c->r[3],0); // 801ED7F8
  if (crb(c,2)) { goto L_801ED834; } // 801ED7FC
  c->r[4]=c->r[30]+0x00010000u; // 801ED800
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED804
  cmps(c,0,(int32_t)c->r[0],1); // 801ED808
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED80C
  c->r[3]=c->r[30]|c->r[30]; // 801ED810
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED814
  c->r[4]=c->r[31]+c->r[0]; // 801ED818
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801ED81C
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801ED820
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801ED824
  c->r[4]=c->r[4]-c->r[0]; // 801ED828
  c->lr=0x801ED830u; f_801ED3F4(c); // 801ED82C
  goto L_801EDEC4; // 801ED830
L_801ED834:;
  c->lr=0x801ED838u; f_80047C90(c); // 801ED834
  c->r[4]=0u+0x00000000u; // 801ED838
  c->lr=0x801ED840u; f_80058EA4(c); // 801ED83C
  c->r[4]=c->r[30]+0x00010000u; // 801ED840
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED844
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801ED848
  c->lr=0x801ED850u; f_80057CA0(c); // 801ED84C
  cmps(c,0,(int32_t)c->r[3],0); // 801ED850
  if (crb(c,2)) { goto L_801ED888; } // 801ED854
  c->r[4]=c->r[30]+0x00010000u; // 801ED858
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED85C
  cmps(c,0,(int32_t)c->r[0],1); // 801ED860
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED864
  c->r[3]=c->r[30]|c->r[30]; // 801ED868
  c->r[4]=R32(c->r[4]+0xFFFF8144u); // 801ED86C
  c->r[4]=c->r[4]+0x00000001u; // 801ED870
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801ED874
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801ED878
  c->r[4]=c->r[4]-c->r[0]; // 801ED87C
  c->lr=0x801ED884u; f_801ED3F4(c); // 801ED880
  goto L_801EDEC4; // 801ED884
L_801ED888:;
  c->lr=0x801ED88Cu; f_80047C90(c); // 801ED888
  c->r[4]=0u+0x00000000u; // 801ED88C
  c->lr=0x801ED894u; f_80058EA4(c); // 801ED890
  c->r[4]=c->r[30]+0x00010000u; // 801ED894
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED898
  c->r[4]=R32(c->r[4]+0x00000010u); // 801ED89C
  c->lr=0x801ED8A4u; f_80057B68(c); // 801ED8A0
  cmps(c,0,(int32_t)c->r[3],0); // 801ED8A4
  if (crb(c,2)) { goto L_801EDEC4; } // 801ED8A8
  c->r[4]=c->r[30]+0x00010000u; // 801ED8AC
  c->r[0]=R32(c->r[4]+0xFFFF8154u); // 801ED8B0
  cmps(c,0,(int32_t)c->r[0],0); // 801ED8B4
  if (crb(c,2)) { goto L_801EDEC4; } // 801ED8B8
  c->r[3]=c->r[4]|c->r[4]; // 801ED8BC
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801ED8C0
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED8C4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801ED8C8
  c->lr=0x801ED8D0u; f_8028CD14(c); // 801ED8CC
  c->r[31]=c->r[3]|c->r[3]; // 801ED8D0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801ED8D4
  cmps(c,0,(int32_t)c->r[12],0); // 801ED8D8
  if (crb(c,2)) { goto L_801ED904; } // 801ED8DC
  c->r[3]=c->r[30]|c->r[30]; // 801ED8E0
  c->ctr=c->r[12]; // 801ED8E4
  if (true) { c->lr=0x801ED8ECu; dispatch(c,c->ctr); } // 801ED8E8
  c->lr=0x801ED8F0u; f_8006592C(c); // 801ED8EC
  c->r[4]=0u+0x00000004u; // 801ED8F0
  c->r[5]=0u+0x00000000u; // 801ED8F4
  c->r[6]=0u+0xFFFFFFFFu; // 801ED8F8
  c->r[7]=0u+0xFFFFFFFFu; // 801ED8FC
  c->lr=0x801ED904u; f_80048F20(c); // 801ED900
L_801ED904:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801ED904
  c->r[4]=0u+0x00000000u; // 801ED908
  c->r[5]=0u+0x00000002u; // 801ED90C
  c->lr=0x801ED914u; f_8021B358(c); // 801ED910
  goto L_801EDEC4; // 801ED914
L_801ED918:;
  c->lr=0x801ED91Cu; f_80047C90(c); // 801ED918
  c->r[4]=0u+0x00000000u; // 801ED91C
  c->lr=0x801ED924u; f_80058EA4(c); // 801ED920
  c->r[4]=R32(c->r[29]+0x00000000u); // 801ED924
  c->lr=0x801ED92Cu; f_80057C1C(c); // 801ED928
  cmps(c,0,(int32_t)c->r[3],0); // 801ED92C
  if (crb(c,2)) { goto L_801ED968; } // 801ED930
  c->r[4]=c->r[30]+0x00010000u; // 801ED934
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED938
  cmps(c,0,(int32_t)c->r[0],0); // 801ED93C
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED940
  c->r[3]=c->r[30]|c->r[30]; // 801ED944
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED948
  c->r[4]=c->r[31]+c->r[0]; // 801ED94C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801ED950
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801ED954
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801ED958
  c->r[4]=c->r[4]-c->r[0]; // 801ED95C
  c->lr=0x801ED964u; f_801ED3F4(c); // 801ED960
  goto L_801EDEC4; // 801ED964
L_801ED968:;
  c->lr=0x801ED96Cu; f_80047C90(c); // 801ED968
  c->r[4]=0u+0x00000000u; // 801ED96C
  c->lr=0x801ED974u; f_80058EA4(c); // 801ED970
  c->r[4]=c->r[30]+0x00010000u; // 801ED974
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED978
  c->r[4]=R32(c->r[4]+0x00000004u); // 801ED97C
  c->lr=0x801ED984u; f_80057C1C(c); // 801ED980
  cmps(c,0,(int32_t)c->r[3],0); // 801ED984
  if (crb(c,2)) { goto L_801ED9BC; } // 801ED988
  c->r[4]=c->r[30]+0x00010000u; // 801ED98C
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED990
  cmps(c,0,(int32_t)c->r[0],0); // 801ED994
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED998
  c->r[3]=c->r[30]|c->r[30]; // 801ED99C
  c->r[4]=R32(c->r[4]+0xFFFF8144u); // 801ED9A0
  c->r[4]=c->r[4]+0x00000001u; // 801ED9A4
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801ED9A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801ED9AC
  c->r[4]=c->r[4]-c->r[0]; // 801ED9B0
  c->lr=0x801ED9B8u; f_801ED3F4(c); // 801ED9B4
  goto L_801EDEC4; // 801ED9B8
L_801ED9BC:;
  c->lr=0x801ED9C0u; f_80047C90(c); // 801ED9BC
  c->r[4]=0u+0x00000000u; // 801ED9C0
  c->lr=0x801ED9C8u; f_80058EA4(c); // 801ED9C4
  c->r[4]=c->r[30]+0x00010000u; // 801ED9C8
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801ED9CC
  c->r[4]=R32(c->r[4]+0x00000008u); // 801ED9D0
  c->lr=0x801ED9D8u; f_80057C1C(c); // 801ED9D4
  cmps(c,0,(int32_t)c->r[3],0); // 801ED9D8
  if (crb(c,2)) { goto L_801EDA14; } // 801ED9DC
  c->r[4]=c->r[30]+0x00010000u; // 801ED9E0
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801ED9E4
  cmps(c,0,(int32_t)c->r[0],1); // 801ED9E8
  if (!crb(c,2)) { goto L_801EDEC4; } // 801ED9EC
  c->r[3]=c->r[30]|c->r[30]; // 801ED9F0
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801ED9F4
  c->r[4]=c->r[31]+c->r[0]; // 801ED9F8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801ED9FC
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801EDA00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801EDA04
  c->r[4]=c->r[4]-c->r[0]; // 801EDA08
  c->lr=0x801EDA10u; f_801ED3F4(c); // 801EDA0C
  goto L_801EDEC4; // 801EDA10
L_801EDA14:;
  c->lr=0x801EDA18u; f_80047C90(c); // 801EDA14
  c->r[4]=0u+0x00000000u; // 801EDA18
  c->lr=0x801EDA20u; f_80058EA4(c); // 801EDA1C
  c->r[4]=c->r[30]+0x00010000u; // 801EDA20
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDA24
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801EDA28
  c->lr=0x801EDA30u; f_80057C1C(c); // 801EDA2C
  cmps(c,0,(int32_t)c->r[3],0); // 801EDA30
  if (crb(c,2)) { goto L_801EDA68; } // 801EDA34
  c->r[4]=c->r[30]+0x00010000u; // 801EDA38
  c->r[0]=R32(c->r[4]+0xFFFF814Cu); // 801EDA3C
  cmps(c,0,(int32_t)c->r[0],1); // 801EDA40
  if (!crb(c,2)) { goto L_801EDEC4; } // 801EDA44
  c->r[3]=c->r[30]|c->r[30]; // 801EDA48
  c->r[4]=R32(c->r[4]+0xFFFF8144u); // 801EDA4C
  c->r[4]=c->r[4]+0x00000001u; // 801EDA50
  c->r[0]=divw((int32_t)c->r[4],(int32_t)c->r[31]); // 801EDA54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[31]); // 801EDA58
  c->r[4]=c->r[4]-c->r[0]; // 801EDA5C
  c->lr=0x801EDA64u; f_801ED3F4(c); // 801EDA60
  goto L_801EDEC4; // 801EDA64
L_801EDA68:;
  c->lr=0x801EDA6Cu; f_80047C90(c); // 801EDA68
  c->r[4]=0u+0x00000000u; // 801EDA6C
  c->lr=0x801EDA74u; f_80058EA4(c); // 801EDA70
  c->r[4]=c->r[30]+0x00010000u; // 801EDA74
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDA78
  c->r[4]=R32(c->r[4]+0x00000010u); // 801EDA7C
  c->lr=0x801EDA84u; f_80057B44(c); // 801EDA80
  cmps(c,0,(int32_t)c->r[3],0); // 801EDA84
  if (crb(c,2)) { goto L_801EDEC4; } // 801EDA88
  c->r[4]=c->r[30]+0x00010000u; // 801EDA8C
  c->r[0]=R32(c->r[4]+0xFFFF8154u); // 801EDA90
  cmps(c,0,(int32_t)c->r[0],0); // 801EDA94
  if (crb(c,2)) { goto L_801EDEC4; } // 801EDA98
  c->r[3]=c->r[4]|c->r[4]; // 801EDA9C
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EDAA0
  c->r[0]=R32(c->r[4]+0xFFFF8144u); // 801EDAA4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801EDAA8
  c->lr=0x801EDAB0u; f_8028CD14(c); // 801EDAAC
  c->r[31]=c->r[3]|c->r[3]; // 801EDAB0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801EDAB4
  cmps(c,0,(int32_t)c->r[0],0); // 801EDAB8
  if (crb(c,2)) { goto L_801EDAE8; } // 801EDABC
  c->lr=0x801EDAC4u; f_8006592C(c); // 801EDAC0
  c->r[4]=0u+0x00000004u; // 801EDAC4
  c->r[5]=0u+0x00000000u; // 801EDAC8
  c->r[6]=0u+0xFFFFFFFFu; // 801EDACC
  c->r[7]=0u+0xFFFFFFFFu; // 801EDAD0
  c->lr=0x801EDAD8u; f_80048F20(c); // 801EDAD4
  c->r[3]=c->r[30]|c->r[30]; // 801EDAD8
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 801EDADC
  c->ctr=c->r[12]; // 801EDAE0
  if (true) { c->lr=0x801EDAE8u; dispatch(c,c->ctr); } // 801EDAE4
L_801EDAE8:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 801EDAE8
  c->r[4]=0u+0x00000000u; // 801EDAEC
  c->r[5]=0u+0x00000002u; // 801EDAF0
  c->lr=0x801EDAF8u; f_8021B358(c); // 801EDAF4
  goto L_801EDEC4; // 801EDAF8
L_801EDAFC:;
  c->r[0]=R32(c->r[3]+0xFFFF8150u); // 801EDAFC
  cmps(c,0,(int32_t)c->r[0],0); // 801EDB00
  if (crb(c,2)) { goto L_801EDEC4; } // 801EDB04
  c->r[29]=R32(c->r[3]+0xFFFF8164u); // 801EDB08
  c->r[0]=R32(c->r[29]+0x00000018u); // 801EDB0C
  cmps(c,0,(int32_t)c->r[0],0); // 801EDB10
  if (crb(c,2)) { goto L_801EDCF0; } // 801EDB14
  c->lr=0x801EDB1Cu; f_80047C90(c); // 801EDB18
  c->r[4]=0u+0x00000000u; // 801EDB1C
  c->lr=0x801EDB24u; f_80058EA4(c); // 801EDB20
  c->r[4]=R32(c->r[29]+0x00000000u); // 801EDB24
  c->lr=0x801EDB2Cu; f_80057CA0(c); // 801EDB28
  cmps(c,0,(int32_t)c->r[3],0); // 801EDB2C
  if (crb(c,2)) { goto L_801EDB4C; } // 801EDB30
  c->r[3]=c->r[30]|c->r[30]; // 801EDB34
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDB38
  c->r[12]=R32(c->r[12]+0x00000050u); // 801EDB3C
  c->ctr=c->r[12]; // 801EDB40
  if (true) { c->lr=0x801EDB48u; dispatch(c,c->ctr); } // 801EDB44
  goto L_801EDEC4; // 801EDB48
L_801EDB4C:;
  c->lr=0x801EDB50u; f_80047C90(c); // 801EDB4C
  c->r[4]=0u+0x00000000u; // 801EDB50
  c->lr=0x801EDB58u; f_80058EA4(c); // 801EDB54
  c->r[4]=c->r[30]+0x00010000u; // 801EDB58
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDB5C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801EDB60
  c->lr=0x801EDB68u; f_80057CA0(c); // 801EDB64
  cmps(c,0,(int32_t)c->r[3],0); // 801EDB68
  if (crb(c,2)) { goto L_801EDB88; } // 801EDB6C
  c->r[3]=c->r[30]|c->r[30]; // 801EDB70
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDB74
  c->r[12]=R32(c->r[12]+0x00000054u); // 801EDB78
  c->ctr=c->r[12]; // 801EDB7C
  if (true) { c->lr=0x801EDB84u; dispatch(c,c->ctr); } // 801EDB80
  goto L_801EDEC4; // 801EDB84
L_801EDB88:;
  c->lr=0x801EDB8Cu; f_80047C90(c); // 801EDB88
  c->r[4]=0u+0x00000000u; // 801EDB8C
  c->lr=0x801EDB94u; f_80058EA4(c); // 801EDB90
  c->r[4]=c->r[30]+0x00010000u; // 801EDB94
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDB98
  c->r[4]=R32(c->r[4]+0x00000008u); // 801EDB9C
  c->lr=0x801EDBA4u; f_80057CA0(c); // 801EDBA0
  cmps(c,0,(int32_t)c->r[3],0); // 801EDBA4
  if (crb(c,2)) { goto L_801EDBC4; } // 801EDBA8
  c->r[3]=c->r[30]|c->r[30]; // 801EDBAC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDBB0
  c->r[12]=R32(c->r[12]+0x00000058u); // 801EDBB4
  c->ctr=c->r[12]; // 801EDBB8
  if (true) { c->lr=0x801EDBC0u; dispatch(c,c->ctr); } // 801EDBBC
  goto L_801EDEC4; // 801EDBC0
L_801EDBC4:;
  c->lr=0x801EDBC8u; f_80047C90(c); // 801EDBC4
  c->r[4]=0u+0x00000000u; // 801EDBC8
  c->lr=0x801EDBD0u; f_80058EA4(c); // 801EDBCC
  c->r[4]=c->r[30]+0x00010000u; // 801EDBD0
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDBD4
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801EDBD8
  c->lr=0x801EDBE0u; f_80057CA0(c); // 801EDBDC
  cmps(c,0,(int32_t)c->r[3],0); // 801EDBE0
  if (crb(c,2)) { goto L_801EDC00; } // 801EDBE4
  c->r[3]=c->r[30]|c->r[30]; // 801EDBE8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDBEC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801EDBF0
  c->ctr=c->r[12]; // 801EDBF4
  if (true) { c->lr=0x801EDBFCu; dispatch(c,c->ctr); } // 801EDBF8
  goto L_801EDEC4; // 801EDBFC
L_801EDC00:;
  c->lr=0x801EDC04u; f_80047C90(c); // 801EDC00
  c->r[4]=0u+0x00000000u; // 801EDC04
  c->lr=0x801EDC0Cu; f_80058EA4(c); // 801EDC08
  c->r[4]=c->r[30]+0x00010000u; // 801EDC0C
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDC10
  c->r[4]=R32(c->r[4]+0x00000010u); // 801EDC14
  c->lr=0x801EDC1Cu; f_80057BB0(c); // 801EDC18
  cmps(c,0,(int32_t)c->r[3],0); // 801EDC1C
  if (crb(c,2)) { goto L_801EDC3C; } // 801EDC20
  c->r[3]=c->r[30]|c->r[30]; // 801EDC24
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDC28
  c->r[12]=R32(c->r[12]+0x00000068u); // 801EDC2C
  c->ctr=c->r[12]; // 801EDC30
  if (true) { c->lr=0x801EDC38u; dispatch(c,c->ctr); } // 801EDC34
  goto L_801EDEC4; // 801EDC38
L_801EDC3C:;
  c->lr=0x801EDC40u; f_80047C90(c); // 801EDC3C
  c->r[4]=0u+0x00000000u; // 801EDC40
  c->lr=0x801EDC48u; f_80058EA4(c); // 801EDC44
  c->r[4]=c->r[30]+0x00010000u; // 801EDC48
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDC4C
  c->r[4]=R32(c->r[4]+0x00000014u); // 801EDC50
  c->lr=0x801EDC58u; f_80057BB0(c); // 801EDC54
  cmps(c,0,(int32_t)c->r[3],0); // 801EDC58
  if (crb(c,2)) { goto L_801EDC78; } // 801EDC5C
  c->r[3]=c->r[30]|c->r[30]; // 801EDC60
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDC64
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801EDC68
  c->ctr=c->r[12]; // 801EDC6C
  if (true) { c->lr=0x801EDC74u; dispatch(c,c->ctr); } // 801EDC70
  goto L_801EDEC4; // 801EDC74
L_801EDC78:;
  c->lr=0x801EDC7Cu; f_80047C90(c); // 801EDC78
  c->r[4]=0u+0x00000000u; // 801EDC7C
  c->lr=0x801EDC84u; f_80058EA4(c); // 801EDC80
  c->r[4]=c->r[30]+0x00010000u; // 801EDC84
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDC88
  c->r[4]=R32(c->r[4]+0x00000010u); // 801EDC8C
  c->lr=0x801EDC94u; f_80057B68(c); // 801EDC90
  cmps(c,0,(int32_t)c->r[3],0); // 801EDC94
  if (crb(c,2)) { goto L_801EDCB4; } // 801EDC98
  c->r[3]=c->r[30]|c->r[30]; // 801EDC9C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDCA0
  c->r[12]=R32(c->r[12]+0x00000060u); // 801EDCA4
  c->ctr=c->r[12]; // 801EDCA8
  if (true) { c->lr=0x801EDCB0u; dispatch(c,c->ctr); } // 801EDCAC
  goto L_801EDEC4; // 801EDCB0
L_801EDCB4:;
  c->lr=0x801EDCB8u; f_80047C90(c); // 801EDCB4
  c->r[4]=0u+0x00000000u; // 801EDCB8
  c->lr=0x801EDCC0u; f_80058EA4(c); // 801EDCBC
  c->r[4]=c->r[30]+0x00010000u; // 801EDCC0
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDCC4
  c->r[4]=R32(c->r[4]+0x00000014u); // 801EDCC8
  c->lr=0x801EDCD0u; f_80057B68(c); // 801EDCCC
  cmps(c,0,(int32_t)c->r[3],0); // 801EDCD0
  if (crb(c,2)) { goto L_801EDEC4; } // 801EDCD4
  c->r[3]=c->r[30]|c->r[30]; // 801EDCD8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDCDC
  c->r[12]=R32(c->r[12]+0x00000064u); // 801EDCE0
  c->ctr=c->r[12]; // 801EDCE4
  if (true) { c->lr=0x801EDCECu; dispatch(c,c->ctr); } // 801EDCE8
  goto L_801EDEC4; // 801EDCEC
L_801EDCF0:;
  c->lr=0x801EDCF4u; f_80047C90(c); // 801EDCF0
  c->r[4]=0u+0x00000000u; // 801EDCF4
  c->lr=0x801EDCFCu; f_80058EA4(c); // 801EDCF8
  c->r[4]=R32(c->r[29]+0x00000000u); // 801EDCFC
  c->lr=0x801EDD04u; f_80057C1C(c); // 801EDD00
  cmps(c,0,(int32_t)c->r[3],0); // 801EDD04
  if (crb(c,2)) { goto L_801EDD24; } // 801EDD08
  c->r[3]=c->r[30]|c->r[30]; // 801EDD0C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDD10
  c->r[12]=R32(c->r[12]+0x00000050u); // 801EDD14
  c->ctr=c->r[12]; // 801EDD18
  if (true) { c->lr=0x801EDD20u; dispatch(c,c->ctr); } // 801EDD1C
  goto L_801EDEC4; // 801EDD20
L_801EDD24:;
  c->lr=0x801EDD28u; f_80047C90(c); // 801EDD24
  c->r[4]=0u+0x00000000u; // 801EDD28
  c->lr=0x801EDD30u; f_80058EA4(c); // 801EDD2C
  c->r[4]=c->r[30]+0x00010000u; // 801EDD30
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDD34
  c->r[4]=R32(c->r[4]+0x00000004u); // 801EDD38
  c->lr=0x801EDD40u; f_80057C1C(c); // 801EDD3C
  cmps(c,0,(int32_t)c->r[3],0); // 801EDD40
  if (crb(c,2)) { goto L_801EDD60; } // 801EDD44
  c->r[3]=c->r[30]|c->r[30]; // 801EDD48
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDD4C
  c->r[12]=R32(c->r[12]+0x00000054u); // 801EDD50
  c->ctr=c->r[12]; // 801EDD54
  if (true) { c->lr=0x801EDD5Cu; dispatch(c,c->ctr); } // 801EDD58
  goto L_801EDEC4; // 801EDD5C
L_801EDD60:;
  c->lr=0x801EDD64u; f_80047C90(c); // 801EDD60
  c->r[4]=0u+0x00000000u; // 801EDD64
  c->lr=0x801EDD6Cu; f_80058EA4(c); // 801EDD68
  c->r[4]=c->r[30]+0x00010000u; // 801EDD6C
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDD70
  c->r[4]=R32(c->r[4]+0x00000008u); // 801EDD74
  c->lr=0x801EDD7Cu; f_80057C1C(c); // 801EDD78
  cmps(c,0,(int32_t)c->r[3],0); // 801EDD7C
  if (crb(c,2)) { goto L_801EDD9C; } // 801EDD80
  c->r[3]=c->r[30]|c->r[30]; // 801EDD84
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDD88
  c->r[12]=R32(c->r[12]+0x00000058u); // 801EDD8C
  c->ctr=c->r[12]; // 801EDD90
  if (true) { c->lr=0x801EDD98u; dispatch(c,c->ctr); } // 801EDD94
  goto L_801EDEC4; // 801EDD98
L_801EDD9C:;
  c->lr=0x801EDDA0u; f_80047C90(c); // 801EDD9C
  c->r[4]=0u+0x00000000u; // 801EDDA0
  c->lr=0x801EDDA8u; f_80058EA4(c); // 801EDDA4
  c->r[4]=c->r[30]+0x00010000u; // 801EDDA8
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDDAC
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801EDDB0
  c->lr=0x801EDDB8u; f_80057C1C(c); // 801EDDB4
  cmps(c,0,(int32_t)c->r[3],0); // 801EDDB8
  if (crb(c,2)) { goto L_801EDDD8; } // 801EDDBC
  c->r[3]=c->r[30]|c->r[30]; // 801EDDC0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDDC4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801EDDC8
  c->ctr=c->r[12]; // 801EDDCC
  if (true) { c->lr=0x801EDDD4u; dispatch(c,c->ctr); } // 801EDDD0
  goto L_801EDEC4; // 801EDDD4
L_801EDDD8:;
  c->lr=0x801EDDDCu; f_80047C90(c); // 801EDDD8
  c->r[4]=0u+0x00000000u; // 801EDDDC
  c->lr=0x801EDDE4u; f_80058EA4(c); // 801EDDE0
  c->r[4]=c->r[30]+0x00010000u; // 801EDDE4
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDDE8
  c->r[4]=R32(c->r[4]+0x00000010u); // 801EDDEC
  c->lr=0x801EDDF4u; f_80057B8C(c); // 801EDDF0
  cmps(c,0,(int32_t)c->r[3],0); // 801EDDF4
  if (crb(c,2)) { goto L_801EDE14; } // 801EDDF8
  c->r[3]=c->r[30]|c->r[30]; // 801EDDFC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDE00
  c->r[12]=R32(c->r[12]+0x00000068u); // 801EDE04
  c->ctr=c->r[12]; // 801EDE08
  if (true) { c->lr=0x801EDE10u; dispatch(c,c->ctr); } // 801EDE0C
  goto L_801EDEC4; // 801EDE10
L_801EDE14:;
  c->lr=0x801EDE18u; f_80047C90(c); // 801EDE14
  c->r[4]=0u+0x00000000u; // 801EDE18
  c->lr=0x801EDE20u; f_80058EA4(c); // 801EDE1C
  c->r[4]=c->r[30]+0x00010000u; // 801EDE20
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDE24
  c->r[4]=R32(c->r[4]+0x00000014u); // 801EDE28
  c->lr=0x801EDE30u; f_80057B8C(c); // 801EDE2C
  cmps(c,0,(int32_t)c->r[3],0); // 801EDE30
  if (crb(c,2)) { goto L_801EDE50; } // 801EDE34
  c->r[3]=c->r[30]|c->r[30]; // 801EDE38
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDE3C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801EDE40
  c->ctr=c->r[12]; // 801EDE44
  if (true) { c->lr=0x801EDE4Cu; dispatch(c,c->ctr); } // 801EDE48
  goto L_801EDEC4; // 801EDE4C
L_801EDE50:;
  c->lr=0x801EDE54u; f_80047C90(c); // 801EDE50
  c->r[4]=0u+0x00000000u; // 801EDE54
  c->lr=0x801EDE5Cu; f_80058EA4(c); // 801EDE58
  c->r[4]=c->r[30]+0x00010000u; // 801EDE5C
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDE60
  c->r[4]=R32(c->r[4]+0x00000010u); // 801EDE64
  c->lr=0x801EDE6Cu; f_80057B44(c); // 801EDE68
  cmps(c,0,(int32_t)c->r[3],0); // 801EDE6C
  if (crb(c,2)) { goto L_801EDE8C; } // 801EDE70
  c->r[3]=c->r[30]|c->r[30]; // 801EDE74
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDE78
  c->r[12]=R32(c->r[12]+0x00000060u); // 801EDE7C
  c->ctr=c->r[12]; // 801EDE80
  if (true) { c->lr=0x801EDE88u; dispatch(c,c->ctr); } // 801EDE84
  goto L_801EDEC4; // 801EDE88
L_801EDE8C:;
  c->lr=0x801EDE90u; f_80047C90(c); // 801EDE8C
  c->r[4]=0u+0x00000000u; // 801EDE90
  c->lr=0x801EDE98u; f_80058EA4(c); // 801EDE94
  c->r[4]=c->r[30]+0x00010000u; // 801EDE98
  c->r[4]=R32(c->r[4]+0xFFFF8164u); // 801EDE9C
  c->r[4]=R32(c->r[4]+0x00000014u); // 801EDEA0
  c->lr=0x801EDEA8u; f_80057B44(c); // 801EDEA4
  cmps(c,0,(int32_t)c->r[3],0); // 801EDEA8
  if (crb(c,2)) { goto L_801EDEC4; } // 801EDEAC
  c->r[3]=c->r[30]|c->r[30]; // 801EDEB0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EDEB4
  c->r[12]=R32(c->r[12]+0x00000064u); // 801EDEB8
  c->ctr=c->r[12]; // 801EDEBC
  if (true) { c->lr=0x801EDEC4u; dispatch(c,c->ctr); } // 801EDEC0
L_801EDEC4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EDEC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EDEC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EDECC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EDED0
  c->lr=c->r[0]; // 801EDED4
  c->r[1]=c->r[1]+0x00000020u; // 801EDED8
  return; // 801EDEDC
}

// fn_801EDEE0
void f_801EDEE0(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 801EDEE0
  return; // 801EDEE4
}

// fn_801EDEE8
void f_801EDEE8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000B0u); // 801EDEE8
  return; // 801EDEEC
}

// fn_801EDEF0
void f_801EDEF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EDEF0
  W32(c->r[3]+0xFFFF8160u,c->r[4]); // 801EDEF4
  return; // 801EDEF8
}

// fn_801EDEFC
void f_801EDEFC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EDEFC
  c->r[3]=R32(c->r[3]+0xFFFF8160u); // 801EDF00
  return; // 801EDF04
}

// fn_801EDF08
void f_801EDF08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDF08
  c->r[0]=c->lr; // 801EDF0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EDF10
  c->r[11]=c->r[1]+0x00000030u; // 801EDF14
  c->lr=0x801EDF1Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EDF18
  c->r[25]=c->r[3]|c->r[3]; // 801EDF1C
  c->r[26]=c->r[4]|c->r[4]; // 801EDF20
  c->r[27]=c->r[5]|c->r[5]; // 801EDF24
  c->r[28]=c->r[6]|c->r[6]; // 801EDF28
  c->r[29]=c->r[7]|c->r[7]; // 801EDF2C
  c->lr=0x801EDF34u; f_80056B5C(c); // 801EDF30
  c->r[30]=c->r[3]|c->r[3]; // 801EDF34
  c->r[3]=c->r[25]|c->r[25]; // 801EDF38
  c->lr=0x801EDF40u; f_80065DB4(c); // 801EDF3C
  c->lr=0x801EDF44u; f_80056B54(c); // 801EDF40
  c->r[3]=0u+0x000008E8u; // 801EDF44
  c->lr=0x801EDF4Cu; f_80047B64(c); // 801EDF48
  c->r[31]=c->r[3]|c->r[3]; // 801EDF4C
  cmps(c,0,(int32_t)c->r[3],0); // 801EDF50
  if (crb(c,2)) { goto L_801EDF5C; } // 801EDF54
  c->lr=0x801EDF5Cu; f_8021B02C(c); // 801EDF58
L_801EDF5C:;
  c->r[3]=c->r[30]|c->r[30]; // 801EDF5C
  c->lr=0x801EDF64u; f_80056B54(c); // 801EDF60
  cmps(c,0,(int32_t)c->r[26],20); // 801EDF64
  if (!crb(c,0)) { goto L_801EDF84; } // 801EDF68
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EDF6C
  c->r[4]=0u+0x00000013u; // 801EDF70
  c->lr=0x801EDF78u; f_801EF3EC(c); // 801EDF74
  c->r[4]=c->r[3]|c->r[3]; // 801EDF78
  c->r[3]=c->r[31]|c->r[31]; // 801EDF7C
  c->lr=0x801EDF84u; f_8021B100(c); // 801EDF80
L_801EDF84:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EDF84
  c->r[4]=c->r[26]|c->r[26]; // 801EDF88
  c->lr=0x801EDF90u; f_801EF3EC(c); // 801EDF8C
  c->r[30]=c->r[3]|c->r[3]; // 801EDF90
  c->r[3]=c->r[25]|c->r[25]; // 801EDF94
  c->lr=0x801EDF9Cu; f_80065DB4(c); // 801EDF98
  c->r[6]=c->r[3]|c->r[3]; // 801EDF9C
  c->r[3]=c->r[31]|c->r[31]; // 801EDFA0
  c->r[4]=c->r[30]|c->r[30]; // 801EDFA4
  c->r[5]=c->r[27]|c->r[27]; // 801EDFA8
  c->r[7]=c->r[28]|c->r[28]; // 801EDFAC
  c->r[8]=0u+0x00000000u; // 801EDFB0
  c->r[9]=c->r[29]|c->r[29]; // 801EDFB4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801EDFB8
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801EDFBC
  c->ctr=c->r[12]; // 801EDFC0
  if (true) { c->lr=0x801EDFC8u; dispatch(c,c->ctr); } // 801EDFC4
  c->r[3]=c->r[25]+0x00010000u; // 801EDFC8
  c->r[3]=c->r[3]+0xFFFF80D8u; // 801EDFCC
  c->r[4]=c->r[31]|c->r[31]; // 801EDFD0
  c->lr=0x801EDFD8u; f_8028CA70(c); // 801EDFD4
  c->r[3]=c->r[31]|c->r[31]; // 801EDFD8
  c->r[11]=c->r[1]+0x00000030u; // 801EDFDC
  c->lr=0x801EDFE4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EDFE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EDFE4
  c->lr=c->r[0]; // 801EDFE8
  c->r[1]=c->r[1]+0x00000030u; // 801EDFEC
  return; // 801EDFF0
}

// fn_801EDFF4
void f_801EDFF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EDFF4
  c->r[0]=c->lr; // 801EDFF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EDFFC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801EE000
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801EE004
  c->r[11]=c->r[1]+0x00000020u; // 801EE008
  c->lr=0x801EE010u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE00C
  c->r[26]=c->r[3]|c->r[3]; // 801EE010
  c->r[27]=c->r[4]|c->r[4]; // 801EE014
  c->r[28]=c->r[5]|c->r[5]; // 801EE018
  c->lr=0x801EE020u; f_80065DB4(c); // 801EE01C
  c->r[30]=c->r[3]|c->r[3]; // 801EE020
  c->lr=0x801EE028u; f_80056B5C(c); // 801EE024
  c->r[29]=c->r[3]|c->r[3]; // 801EE028
  c->r[3]=c->r[30]|c->r[30]; // 801EE02C
  c->lr=0x801EE034u; f_80056B54(c); // 801EE030
  c->r[3]=0u+0x00000050u; // 801EE034
  c->lr=0x801EE03Cu; f_80047B64(c); // 801EE038
  c->r[31]=c->r[3]|c->r[3]; // 801EE03C
  cmps(c,0,(int32_t)c->r[3],0); // 801EE040
  if (crb(c,2)) { goto L_801EE054; } // 801EE044
  c->r[4]=c->r[30]|c->r[30]; // 801EE048
  c->r[5]=c->r[27]|c->r[27]; // 801EE04C
  c->lr=0x801EE054u; f_802247AC(c); // 801EE050
L_801EE054:;
  c->r[3]=c->r[29]|c->r[29]; // 801EE054
  c->lr=0x801EE05Cu; f_80056B54(c); // 801EE058
  c->r[3]=c->r[31]|c->r[31]; // 801EE05C
  c->r[4]=0u+0x00000000u; // 801EE060
  c->lr=0x801EE068u; f_80224B90(c); // 801EE064
  cmps(c,0,(int32_t)c->r[28],0); // 801EE068
  if (crb(c,2)) { goto L_801EE098; } // 801EE06C
  c->r[3]=c->r[28]|c->r[28]; // 801EE070
  c->lr=0x801EE078u; f_8021B2B8(c); // 801EE074
  {uint32_t ea=c->r[2]+0xFFFF94D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EE078
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801EE07C
  c->r[3]=c->r[28]|c->r[28]; // 801EE080
  c->lr=0x801EE088u; f_8021B2A8(c); // 801EE084
  c->r[3]=c->r[31]|c->r[31]; // 801EE088
  c->f[2]=c->f[31]; // 801EE08C
  c->r[4]=0u+0x00000000u; // 801EE090
  c->lr=0x801EE098u; f_802249D0(c); // 801EE094
L_801EE098:;
  c->r[3]=c->r[31]|c->r[31]; // 801EE098
  c->r[4]=0u+0x00000004u; // 801EE09C
  c->lr=0x801EE0A4u; f_80224A40(c); // 801EE0A0
  c->r[3]=c->r[26]+0x00010000u; // 801EE0A4
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801EE0A8
  c->r[4]=c->r[31]|c->r[31]; // 801EE0AC
  c->lr=0x801EE0B4u; f_8028CAE0(c); // 801EE0B0
  c->r[3]=c->r[31]|c->r[31]; // 801EE0B4
  c->r[0]=0u+0x00000028u; // 801EE0B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EE0BC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801EE0C0
  c->r[11]=c->r[1]+0x00000020u; // 801EE0C4
  c->lr=0x801EE0CCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE0C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EE0CC
  c->lr=c->r[0]; // 801EE0D0
  c->r[1]=c->r[1]+0x00000030u; // 801EE0D4
  return; // 801EE0D8
}

// fn_801EE0DC
void f_801EE0DC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801EE0DC
  c->r[5]=0u+0x00000000u; // 801EE0E0
  goto L_801EE110; // 801EE0E4
L_801EE0E8:;
  cmps(c,0,(int32_t)c->r[0],32); // 801EE0E8
  if (!crb(c,0)) { goto L_801EE10C; } // 801EE0EC
  cmps(c,0,(int32_t)c->r[0],10); // 801EE0F0
  if (!crb(c,2)) { goto L_801EE10C; } // 801EE0F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[5]); // 801EE0F8
  if (!crb(c,0)) { goto L_801EE104; } // 801EE0FC
  c->r[4]=c->r[5]|c->r[5]; // 801EE100
L_801EE104:;
  c->r[5]=0u+0x00000000u; // 801EE104
  goto L_801EE110; // 801EE108
L_801EE10C:;
  c->r[5]=c->r[5]+0x00000001u; // 801EE10C
L_801EE110:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EE110
  c->r[3]=c->r[3]+0x00000001u; // 801EE114
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801EE118
  cmps(c,0,(int32_t)c->r[0],0); // 801EE11C
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE0E8; } // 801EE120
  c->r[3]=c->r[4]|c->r[4]; // 801EE124
  return; // 801EE128
}

// fn_801EE12C
void f_801EE12C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801EE12C
  goto L_801EE148; // 801EE130
L_801EE134:;
  cmps(c,0,(int32_t)c->r[0],32); // 801EE134
  if (!crb(c,0)) { goto L_801EE148; } // 801EE138
  cmps(c,0,(int32_t)c->r[0],10); // 801EE13C
  if (!crb(c,2)) { goto L_801EE148; } // 801EE140
  c->r[4]=c->r[4]+0x00000001u; // 801EE144
L_801EE148:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801EE148
  c->r[3]=c->r[3]+0x00000001u; // 801EE14C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801EE150
  cmps(c,0,(int32_t)c->r[0],0); // 801EE154
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE134; } // 801EE158
  c->r[3]=c->r[4]+0x00000001u; // 801EE15C
  return; // 801EE160
}

// fn_801EE164
void f_801EE164(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE164
  c->r[0]=c->lr; // 801EE168
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE16C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EE170
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EE174
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EE178
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EE17C
  c->r[29]=c->r[3]|c->r[3]; // 801EE180
  c->r[30]=c->r[4]|c->r[4]; // 801EE184
  c->r[31]=c->r[5]|c->r[5]; // 801EE188
  c->r[4]=c->r[3]+0x00010000u; // 801EE18C
  c->r[0]=R32(c->r[4]+0xFFFF8138u); // 801EE190
  cmps(c,0,(int32_t)c->r[0],0); // 801EE194
  if (!crb(c,2)) { goto L_801EE364; } // 801EE198
  c->r[4]=0u+0x00000004u; // 801EE19C
  c->r[5]=0u+0x00000000u; // 801EE1A0
  c->r[6]=0u+0x00000003u; // 801EE1A4
  c->r[7]=0u+0x00000003u; // 801EE1A8
  c->lr=0x801EE1B0u; f_801EDF08(c); // 801EE1AC
  c->r[4]=c->r[29]+0x00010000u; // 801EE1B0
  W32(c->r[4]+0xFFFF8138u,c->r[3]); // 801EE1B4
  c->r[4]=0u+0x00000084u; // 801EE1B8
  c->r[5]=0u+0x00000000u; // 801EE1BC
  c->lr=0x801EE1C4u; f_8021B47C(c); // 801EE1C0
  c->r[3]=c->r[29]+0x00010000u; // 801EE1C4
  c->r[3]=R32(c->r[3]+0xFFFF8138u); // 801EE1C8
  c->r[4]=0u+0x00000001u; // 801EE1CC
  c->lr=0x801EE1D4u; f_8021B46C(c); // 801EE1D0
  c->r[3]=c->r[29]|c->r[29]; // 801EE1D4
  c->r[4]=0u+0x0000000Au; // 801EE1D8
  c->r[5]=0u+0x00000000u; // 801EE1DC
  c->r[6]=0u+0x00000003u; // 801EE1E0
  c->r[7]=0u+0x00000003u; // 801EE1E4
  c->lr=0x801EE1ECu; f_801EDF08(c); // 801EE1E8
  c->r[4]=c->r[29]+0x00010000u; // 801EE1EC
  W32(c->r[4]+0xFFFF813Cu,c->r[3]); // 801EE1F0
  c->r[4]=0u+0x00000001u; // 801EE1F4
  c->r[5]=0u+0x00000000u; // 801EE1F8
  c->lr=0x801EE200u; f_8021B47C(c); // 801EE1FC
  c->r[3]=c->r[29]+0x00010000u; // 801EE200
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801EE204
  {uint32_t ea=c->r[2]+0xFFFF94D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE208
  {uint32_t ea=c->r[2]+0xFFFF94DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE20C
  c->lr=0x801EE214u; f_8021B27C(c); // 801EE210
  c->r[3]=c->r[29]+0x00010000u; // 801EE214
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801EE218
  c->r[4]=0u+0x00000000u; // 801EE21C
  c->lr=0x801EE224u; f_8021B46C(c); // 801EE220
  c->r[3]=c->r[29]+0x00010000u; // 801EE224
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 801EE228
  cmps(c,0,(int32_t)c->r[3],0); // 801EE22C
  if (crb(c,2)) { goto L_801EE254; } // 801EE230
  c->lr=0x801EE238u; f_8021B474(c); // 801EE234
  c->r[4]=c->r[29]+0x00010000u; // 801EE238
  W32(c->r[4]+0xFFFF8158u,c->r[3]); // 801EE23C
  cmps(c,0,(int32_t)c->r[3],0); // 801EE240
  if (crb(c,2)) { goto L_801EE254; } // 801EE244
  c->r[3]=R32(c->r[4]+0xFFFF80FCu); // 801EE248
  c->r[4]=0u+0x00000000u; // 801EE24C
  c->lr=0x801EE254u; f_8021B46C(c); // 801EE250
L_801EE254:;
  c->r[3]=c->r[29]|c->r[29]; // 801EE254
  c->r[4]=c->r[30]|c->r[30]; // 801EE258
  c->r[5]=c->r[29]+0x00010000u; // 801EE25C
  c->r[5]=R32(c->r[5]+0xFFFF8138u); // 801EE260
  c->lr=0x801EE268u; f_801EDFF4(c); // 801EE264
  c->r[4]=c->r[29]+0x00010000u; // 801EE268
  W32(c->r[4]+0xFFFF8140u,c->r[3]); // 801EE26C
  c->r[4]=0u+0x00000003u; // 801EE270
  c->lr=0x801EE278u; f_80224BB4(c); // 801EE274
  c->r[3]=c->r[29]+0x00010000u; // 801EE278
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801EE27C
  {uint32_t ea=c->r[2]+0xFFFF94E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE280
  {uint32_t ea=c->r[2]+0xFFFF94E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE284
  c->r[4]=0u+0x00000001u; // 801EE288
  c->lr=0x801EE290u; f_802249E8(c); // 801EE28C
  c->r[3]=c->r[29]+0x00010000u; // 801EE290
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801EE294
  c->r[4]=0u+0x00000000u; // 801EE298
  c->lr=0x801EE2A0u; f_80224B90(c); // 801EE29C
  c->r[3]=c->r[30]|c->r[30]; // 801EE2A0
  c->lr=0x801EE2A8u; f_801EE0DC(c); // 801EE2A4
  c->r[28]=c->r[3]|c->r[3]; // 801EE2A8
  c->r[3]=c->r[30]|c->r[30]; // 801EE2AC
  c->lr=0x801EE2B4u; f_801EE12C(c); // 801EE2B0
  cmps(c,0,(int32_t)c->r[3],5); // 801EE2B4
  if (!crb(c,1)) { goto L_801EE2FC; } // 801EE2B8
  cmps(c,0,(int32_t)c->r[28],40); // 801EE2BC
  if (!crb(c,1)) { goto L_801EE2DC; } // 801EE2C0
  c->r[3]=c->r[29]+0x00010000u; // 801EE2C4
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801EE2C8
  {uint32_t ea=c->r[2]+0xFFFF94E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE2CC
  c->r[4]=0u+0x00000001u; // 801EE2D0
  c->lr=0x801EE2D8u; f_80224A00(c); // 801EE2D4
  goto L_801EE334; // 801EE2D8
L_801EE2DC:;
  cmps(c,0,(int32_t)c->r[28],38); // 801EE2DC
  if (!crb(c,1)) { goto L_801EE334; } // 801EE2E0
  c->r[3]=c->r[29]+0x00010000u; // 801EE2E4
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801EE2E8
  {uint32_t ea=c->r[2]+0xFFFF94ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE2EC
  c->r[4]=0u+0x00000001u; // 801EE2F0
  c->lr=0x801EE2F8u; f_80224A00(c); // 801EE2F4
  goto L_801EE334; // 801EE2F8
L_801EE2FC:;
  cmps(c,0,(int32_t)c->r[28],41); // 801EE2FC
  if (!crb(c,1)) { goto L_801EE334; } // 801EE300
  c->r[3]=0u+0x00000001u; // 801EE304
  c->r[4]=0u+0x80470000u; // 801EE308
  c->r[4]=c->r[4]+0x00004BA4u; // 801EE30C
  c->r[5]=c->r[28]|c->r[28]; // 801EE310
  c->r[6]=c->r[30]|c->r[30]; // 801EE314
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EE318
  c->lr=0x801EE320u; f_803D3760(c); // 801EE31C
  c->r[3]=c->r[29]+0x00010000u; // 801EE320
  c->r[3]=R32(c->r[3]+0xFFFF8140u); // 801EE324
  {uint32_t ea=c->r[2]+0xFFFF94E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE328
  c->r[4]=0u+0x00000001u; // 801EE32C
  c->lr=0x801EE334u; f_80224A00(c); // 801EE330
L_801EE334:;
  c->r[0]=0u+0x00000000u; // 801EE334
  c->r[3]=c->r[29]+0x00010000u; // 801EE338
  W32(c->r[3]+0xFFFF8144u,c->r[0]); // 801EE33C
  c->r[0]=0u+0x00000001u; // 801EE340
  W32(c->r[3]+0xFFFF8148u,c->r[0]); // 801EE344
  W32(c->r[3]+0xFFFF814Cu,c->r[31]); // 801EE348
  c->lr=0x801EE350u; f_8006592C(c); // 801EE34C
  c->r[4]=0u+0x00000000u; // 801EE350
  c->r[5]=0u+0x00000000u; // 801EE354
  c->r[6]=0u+0xFFFFFFFFu; // 801EE358
  c->r[7]=0u+0xFFFFFFFFu; // 801EE35C
  c->lr=0x801EE364u; f_80048F20(c); // 801EE360
L_801EE364:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EE364
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EE368
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EE36C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EE370
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE374
  c->lr=c->r[0]; // 801EE378
  c->r[1]=c->r[1]+0x00000020u; // 801EE37C
  return; // 801EE380
}

// fn_801EE384
void f_801EE384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE384
  c->r[0]=c->lr; // 801EE388
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE38C
  c->r[3]=c->r[3]+0x00010000u; // 801EE390
  c->r[0]=R32(c->r[3]+0xFFFF8148u); // 801EE394
  cmps(c,0,(int32_t)c->r[0],0); // 801EE398
  if (crb(c,2)) { goto L_801EE3C0; } // 801EE39C
  c->r[0]=0u+0x00000003u; // 801EE3A0
  W32(c->r[3]+0xFFFF8148u,c->r[0]); // 801EE3A4
  c->lr=0x801EE3ACu; f_8006592C(c); // 801EE3A8
  c->r[4]=0u+0x00000001u; // 801EE3AC
  c->r[5]=0u+0x00000000u; // 801EE3B0
  c->r[6]=0u+0xFFFFFFFFu; // 801EE3B4
  c->r[7]=0u+0xFFFFFFFFu; // 801EE3B8
  c->lr=0x801EE3C0u; f_80048F20(c); // 801EE3BC
L_801EE3C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EE3C0
  c->lr=c->r[0]; // 801EE3C4
  c->r[1]=c->r[1]+0x00000010u; // 801EE3C8
  return; // 801EE3CC
}

// fn_801EE3D0
void f_801EE3D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE3D0
  c->r[0]=c->lr; // 801EE3D4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801EE3D8
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801EE3DC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801EE3E0
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 801EE3E4
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 801EE3E8
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 801EE3EC
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 801EE3F0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 801EE3F4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 801EE3F8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[27]);} // 801EE3FC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,27,ea,0,0);} // 801EE400
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[26]);} // 801EE404
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,26,ea,0,0);} // 801EE408
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[25]);} // 801EE40C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,25,ea,0,0);} // 801EE410
  c->r[11]=c->r[1]+0x00000040u; // 801EE414
  c->lr=0x801EE41Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE418
  c->r[25]=c->r[3]|c->r[3]; // 801EE41C
  c->r[26]=c->r[4]|c->r[4]; // 801EE420
  c->f[25]=c->f[1]; // 801EE424
  c->f[26]=c->f[2]; // 801EE428
  c->r[27]=0u+0x00000000u; // 801EE42C
  c->r[31]=0u+0x00000000u; // 801EE430
  c->r[29]=c->r[25]|c->r[25]; // 801EE434
  {uint32_t ea=c->r[2]+0xFFFF94F0u; c->f[29]=c->ps1[29]=RF32(ea);} // 801EE438
  {uint32_t ea=c->r[2]+0xFFFF94F4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801EE43C
  c->r[30]=0u+0x80470000u; // 801EE440
  {uint32_t ea=c->r[2]+0xFFFF94E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EE444
L_801EE448:;
  c->r[3]=c->r[25]|c->r[25]; // 801EE448
  c->r[4]=c->r[26]|c->r[26]; // 801EE44C
  c->r[5]=0u+0x00000000u; // 801EE450
  c->lr=0x801EE458u; f_801EDFF4(c); // 801EE454
  c->r[4]=c->r[29]+0x00010000u; // 801EE458
  W32(c->r[4]+0xFFFF8114u,c->r[3]); // 801EE45C
  c->f[28]=c->ps1[28]=S(c->f[29]+c->f[25]); // 801EE460
  c->f[27]=c->ps1[27]=S(c->f[30]+c->f[26]); // 801EE464
  c->r[3]=c->r[1]+0x00000010u; // 801EE468
  c->r[4]=0u+0x00000000u; // 801EE46C
  c->r[5]=0u+0x00000000u; // 801EE470
  c->r[6]=0u+0x00000000u; // 801EE474
  c->r[7]=0u+0x000000FFu; // 801EE478
  c->lr=0x801EE480u; f_8004E248(c); // 801EE47C
  c->r[28]=0u+0x00000007u; // 801EE480
  cmpu(c,0,c->r[27],0x00000008u); // 801EE484
  if (crb(c,1)) { goto L_801EE4EC; } // 801EE488
  c->r[3]=c->r[30]+0x00004BBCu; // 801EE48C
  c->r[3]=R32(c->r[3]+c->r[31]); // 801EE490
  c->ctr=c->r[3]; // 801EE494
  if (true) { switch (c->ctr) { case 0x801EE49Cu: goto L_801EE49C; case 0x801EE4A8u: goto L_801EE4A8; case 0x801EE4B4u: goto L_801EE4B4; case 0x801EE4C0u: goto L_801EE4C0; case 0x801EE4CCu: goto L_801EE4CC; case 0x801EE4D4u: goto L_801EE4D4; case 0x801EE4DCu: goto L_801EE4DC; case 0x801EE4E4u: goto L_801EE4E4; case 0x801EE4ECu: goto L_801EE4EC; default: break; } dispatch(c,c->ctr); return; } // 801EE498
L_801EE49C:;
  c->f[28]=c->ps1[28]=S(c->f[28]-c->f[31]); // 801EE49C
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[31]); // 801EE4A0
  goto L_801EE520; // 801EE4A4
L_801EE4A8:;
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[31]); // 801EE4A8
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[31]); // 801EE4AC
  goto L_801EE520; // 801EE4B0
L_801EE4B4:;
  c->f[28]=c->ps1[28]=S(c->f[28]-c->f[31]); // 801EE4B4
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 801EE4B8
  goto L_801EE520; // 801EE4BC
L_801EE4C0:;
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[31]); // 801EE4C0
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 801EE4C4
  goto L_801EE520; // 801EE4C8
L_801EE4CC:;
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[31]); // 801EE4CC
  goto L_801EE520; // 801EE4D0
L_801EE4D4:;
  c->f[28]=c->ps1[28]=S(c->f[28]-c->f[31]); // 801EE4D4
  goto L_801EE520; // 801EE4D8
L_801EE4DC:;
  c->f[27]=c->ps1[27]=S(c->f[27]+c->f[31]); // 801EE4DC
  goto L_801EE520; // 801EE4E0
L_801EE4E4:;
  c->f[27]=c->ps1[27]=S(c->f[27]-c->f[31]); // 801EE4E4
  goto L_801EE520; // 801EE4E8
L_801EE4EC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801EE4EC
  c->r[4]=0u+0x000000FFu; // 801EE4F0
  c->r[5]=0u+0x000000FFu; // 801EE4F4
  c->r[6]=0u+0x000000FFu; // 801EE4F8
  c->r[7]=0u+0x000000FFu; // 801EE4FC
  c->lr=0x801EE504u; f_8004E248(c); // 801EE500
  c->r[3]=c->r[1]+0x00000010u; // 801EE504
  c->r[4]=c->r[1]+0x0000000Cu; // 801EE508
  c->lr=0x801EE510u; f_8005D48C(c); // 801EE50C
  c->r[3]=c->r[1]+0x0000000Cu; // 801EE510
  c->r[4]=0u+0xFFFFFFFFu; // 801EE514
  c->lr=0x801EE51Cu; f_80047BD4(c); // 801EE518
  c->r[28]=0u+0x00000006u; // 801EE51C
L_801EE520:;
  c->r[3]=c->r[29]+0x00010000u; // 801EE520
  c->r[3]=R32(c->r[3]+0xFFFF8114u); // 801EE524
  cmps(c,0,(int32_t)c->r[3],0); // 801EE528
  if (crb(c,2)) { goto L_801EE59C; } // 801EE52C
  c->f[1]=c->f[28]; // 801EE530
  c->f[2]=c->f[27]; // 801EE534
  c->r[4]=0u+0x00000000u; // 801EE538
  c->lr=0x801EE540u; f_802249D0(c); // 801EE53C
  c->r[3]=c->r[1]+0x00000008u; // 801EE540
  c->r[4]=c->r[1]+0x00000010u; // 801EE544
  c->lr=0x801EE54Cu; f_800549FC(c); // 801EE548
  c->r[3]=c->r[29]+0x00010000u; // 801EE54C
  c->r[3]=R32(c->r[3]+0xFFFF8114u); // 801EE550
  c->r[4]=c->r[1]+0x00000008u; // 801EE554
  c->lr=0x801EE55Cu; f_801ECCDC(c); // 801EE558
  c->r[3]=c->r[1]+0x00000008u; // 801EE55C
  c->r[4]=0u+0xFFFFFFFFu; // 801EE560
  c->lr=0x801EE568u; f_80047BD4(c); // 801EE564
  c->r[3]=c->r[29]+0x00010000u; // 801EE568
  c->r[3]=R32(c->r[3]+0xFFFF8114u); // 801EE56C
  c->r[4]=c->r[28]|c->r[28]; // 801EE570
  c->lr=0x801EE578u; f_80224A40(c); // 801EE574
  c->r[3]=c->r[29]+0x00010000u; // 801EE578
  c->r[3]=R32(c->r[3]+0xFFFF8114u); // 801EE57C
  c->r[4]=0u+0x00000001u; // 801EE580
  c->r[5]=0u+0x00000001u; // 801EE584
  c->lr=0x801EE58Cu; f_802249B4(c); // 801EE588
  c->r[3]=c->r[29]+0x00010000u; // 801EE58C
  c->r[3]=R32(c->r[3]+0xFFFF8114u); // 801EE590
  c->r[4]=0u+0x00000001u; // 801EE594
  c->lr=0x801EE59Cu; f_80224B90(c); // 801EE598
L_801EE59C:;
  c->r[3]=c->r[1]+0x00000010u; // 801EE59C
  c->r[4]=0u+0xFFFFFFFFu; // 801EE5A0
  c->lr=0x801EE5A8u; f_80047BD4(c); // 801EE5A4
  c->r[29]=c->r[29]+0x00000004u; // 801EE5A8
  c->r[27]=c->r[27]+0x00000001u; // 801EE5AC
  c->r[31]=c->r[31]+0x00000004u; // 801EE5B0
  cmps(c,0,(int32_t)c->r[27],9); // 801EE5B4
  if (crb(c,0)) { IRQCHK(c); goto L_801EE448; } // 801EE5B8
  c->r[3]=c->r[25]+0x00010000u; // 801EE5BC
  c->r[3]=R32(c->r[3]+0xFFFF8114u); // 801EE5C0
  c->r[0]=0u+0x000000A8u; // 801EE5C4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EE5C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801EE5CC
  c->r[0]=0u+0x00000098u; // 801EE5D0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801EE5D4
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 801EE5D8
  c->r[0]=0u+0x00000088u; // 801EE5DC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801EE5E0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 801EE5E4
  c->r[0]=0u+0x00000078u; // 801EE5E8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 801EE5EC
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 801EE5F0
  c->r[0]=0u+0x00000068u; // 801EE5F4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 801EE5F8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[27]=RF64(ea);} // 801EE5FC
  c->r[0]=0u+0x00000058u; // 801EE600
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,26,ea,0,0);} // 801EE604
  {uint32_t ea=c->r[1]+0x00000050u; c->f[26]=RF64(ea);} // 801EE608
  c->r[0]=0u+0x00000048u; // 801EE60C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,25,ea,0,0);} // 801EE610
  {uint32_t ea=c->r[1]+0x00000040u; c->f[25]=RF64(ea);} // 801EE614
  c->r[11]=c->r[1]+0x00000040u; // 801EE618
  c->lr=0x801EE620u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE61C
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801EE620
  c->lr=c->r[0]; // 801EE624
  c->r[1]=c->r[1]+0x000000B0u; // 801EE628
  return; // 801EE62C
}

// fn_801EE630
void f_801EE630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE630
  c->r[0]=c->lr; // 801EE634
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE638
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EE63C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EE640
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EE644
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EE648
  c->r[28]=c->r[3]|c->r[3]; // 801EE64C
  c->r[29]=0u+0x00000000u; // 801EE650
  c->r[30]=c->r[28]|c->r[28]; // 801EE654
  c->r[31]=0u+0x00000000u; // 801EE658
L_801EE65C:;
  c->r[3]=c->r[30]+0x00010000u; // 801EE65C
  c->r[4]=R32(c->r[3]+0xFFFF8114u); // 801EE660
  cmps(c,0,(int32_t)c->r[4],0); // 801EE664
  if (crb(c,2)) { goto L_801EE67C; } // 801EE668
  c->r[3]=c->r[28]|c->r[28]; // 801EE66C
  c->lr=0x801EE674u; f_801EEEB0(c); // 801EE670
  c->r[3]=c->r[30]+0x00010000u; // 801EE674
  W32(c->r[3]+0xFFFF8114u,c->r[31]); // 801EE678
L_801EE67C:;
  c->r[30]=c->r[30]+0x00000004u; // 801EE67C
  c->r[29]=c->r[29]+0x00000001u; // 801EE680
  cmps(c,0,(int32_t)c->r[29],9); // 801EE684
  if (crb(c,0)) { IRQCHK(c); goto L_801EE65C; } // 801EE688
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EE68C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EE690
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EE694
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EE698
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EE69C
  c->lr=c->r[0]; // 801EE6A0
  c->r[1]=c->r[1]+0x00000020u; // 801EE6A4
  return; // 801EE6A8
}

// fn_801EE6AC
void f_801EE6AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE6AC
  c->r[0]=c->lr; // 801EE6B0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801EE6B4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801EE6B8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801EE6BC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801EE6C0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801EE6C4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 801EE6C8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 801EE6CC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 801EE6D0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801EE6D4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 801EE6D8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 801EE6DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[26]);} // 801EE6E0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,26,ea,0,0);} // 801EE6E4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[25]);} // 801EE6E8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,25,ea,0,0);} // 801EE6EC
  c->r[11]=c->r[1]+0x00000030u; // 801EE6F0
  c->lr=0x801EE6F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EE6F4
  c->r[31]=c->r[3]|c->r[3]; // 801EE6F8
  c->r[29]=c->r[4]|c->r[4]; // 801EE6FC
  c->r[27]=c->r[5]|c->r[5]; // 801EE700
  c->r[3]=c->r[3]+0x00010000u; // 801EE704
  c->r[0]=R32(c->r[3]+0xFFFF8138u); // 801EE708
  cmps(c,0,(int32_t)c->r[0],0); // 801EE70C
  if (crb(c,2)) { goto L_801EE954; } // 801EE710
  c->lr=0x801EE718u; f_80056B5C(c); // 801EE714
  c->r[26]=c->r[3]|c->r[3]; // 801EE718
  c->r[3]=c->r[31]|c->r[31]; // 801EE71C
  c->lr=0x801EE724u; f_80065DB4(c); // 801EE720
  c->lr=0x801EE728u; f_80056B54(c); // 801EE724
  c->r[3]=0u+0x00000018u; // 801EE728
  c->lr=0x801EE730u; f_80047B64(c); // 801EE72C
  c->r[28]=c->r[3]|c->r[3]; // 801EE730
  c->r[3]=c->r[26]|c->r[26]; // 801EE734
  c->lr=0x801EE73Cu; f_80056B54(c); // 801EE738
  c->r[3]=c->r[31]+0x00010000u; // 801EE73C
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EE740
  c->lr=0x801EE748u; f_8005C00C(c); // 801EE744
  cmps(c,0,(int32_t)c->r[27],0); // 801EE748
  if (!crb(c,2)) { goto L_801EE758; } // 801EE74C
  c->r[3]=0u+0x801F0000u; // 801EE750
  c->r[27]=c->r[3]+0xFFFFEF2Cu; // 801EE754
L_801EE758:;
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 801EE758
  c->r[3]=c->r[31]|c->r[31]; // 801EE75C
  c->r[4]=0u+0x00000009u; // 801EE760
  c->r[5]=0u+0x00000000u; // 801EE764
  c->r[6]=0u+0x00000003u; // 801EE768
  c->r[7]=0u+0x00000003u; // 801EE76C
  c->lr=0x801EE774u; f_801EDF08(c); // 801EE770
  W32(c->r[28]+0x00000014u,c->r[3]); // 801EE774
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE778
  c->r[4]=0u+0x00000080u; // 801EE77C
  c->r[5]=0u+0x00000000u; // 801EE780
  c->lr=0x801EE788u; f_8021B47C(c); // 801EE784
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE788
  c->r[4]=0u+0x00000001u; // 801EE78C
  c->lr=0x801EE794u; f_8021B46C(c); // 801EE790
  c->r[3]=c->r[31]|c->r[31]; // 801EE794
  c->r[4]=c->r[29]|c->r[29]; // 801EE798
  c->r[5]=R32(c->r[28]+0x00000014u); // 801EE79C
  c->lr=0x801EE7A4u; f_801EDFF4(c); // 801EE7A0
  W32(c->r[28]+0x00000010u,c->r[3]); // 801EE7A4
  c->r[3]=R32(c->r[28]+0x00000010u); // 801EE7A8
  c->r[4]=0u+0x00000003u; // 801EE7AC
  c->lr=0x801EE7B4u; f_80224BB4(c); // 801EE7B0
  c->r[3]=R32(c->r[28]+0x00000010u); // 801EE7B4
  c->r[4]=0u+0x00000004u; // 801EE7B8
  c->lr=0x801EE7C0u; f_80224A40(c); // 801EE7BC
  c->r[3]=R32(c->r[28]+0x00000010u); // 801EE7C0
  c->r[4]=0u+0x00000001u; // 801EE7C4
  c->r[5]=0u+0x00000000u; // 801EE7C8
  c->lr=0x801EE7D0u; f_802249B4(c); // 801EE7CC
  c->r[3]=R32(c->r[28]+0x00000010u); // 801EE7D0
  {uint32_t ea=c->r[2]+0xFFFF94F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE7D4
  {uint32_t ea=c->r[2]+0xFFFF94FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE7D8
  c->r[4]=0u+0x00000000u; // 801EE7DC
  c->lr=0x801EE7E4u; f_802249E8(c); // 801EE7E0
  c->r[3]=R32(c->r[28]+0x00000010u); // 801EE7E4
  c->r[4]=0u+0x00000000u; // 801EE7E8
  c->lr=0x801EE7F0u; f_80224B90(c); // 801EE7EC
  c->r[3]=c->r[31]+0x00010000u; // 801EE7F0
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EE7F4
  c->lr=0x801EE7FCu; f_8005C00C(c); // 801EE7F8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE7FC
  cmps(c,0,(int32_t)c->r[0],0); // 801EE800
  if (!crb(c,2)) { goto L_801EE81C; } // 801EE804
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE808
  c->r[4]=0u+0x00000002u; // 801EE80C
  c->r[5]=0u+0x00000001u; // 801EE810
  c->lr=0x801EE818u; f_8021B358(c); // 801EE814
  goto L_801EE82C; // 801EE818
L_801EE81C:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE81C
  c->r[4]=0u+0x00000002u; // 801EE820
  c->r[5]=0u+0x00000000u; // 801EE824
  c->lr=0x801EE82Cu; f_8021B358(c); // 801EE828
L_801EE82C:;
  c->r[3]=c->r[31]+0x00010000u; // 801EE82C
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EE830
  c->r[4]=c->r[28]|c->r[28]; // 801EE834
  c->lr=0x801EE83Cu; f_8028CA70(c); // 801EE838
  c->r[26]=0u+0x00000000u; // 801EE83C
  c->r[3]=c->r[31]+0x00010000u; // 801EE840
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EE844
  c->lr=0x801EE84Cu; f_8005C00C(c); // 801EE848
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801EE84C
  c->r[27]=c->r[3]+0xFFFFFFFFu; // 801EE850
  c->r[3]=c->r[31]+0x00010000u; // 801EE854
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EE858
  c->lr=0x801EE860u; f_8004B018(c); // 801EE85C
  c->r[28]=c->r[3]|c->r[3]; // 801EE860
  c->r[29]=c->r[31]+0x00010000u; // 801EE864
  {uint32_t ea=c->r[2]+0xFFFF9510u; c->f[27]=RF64(ea);} // 801EE868
  c->r[30]=0u+0x43300000u; // 801EE86C
  {uint32_t ea=c->r[2]+0xFFFF9508u; c->f[28]=c->ps1[28]=RF32(ea);} // 801EE870
  {uint32_t ea=c->r[2]+0xFFFF9500u; c->f[29]=c->ps1[29]=RF32(ea);} // 801EE874
  {uint32_t ea=c->r[2]+0xFFFF9504u; c->f[25]=c->ps1[25]=RF32(ea);} // 801EE878
  {uint32_t ea=c->r[2]+0xFFFF94DCu; c->f[26]=c->ps1[26]=RF32(ea);} // 801EE87C
  {uint32_t ea=c->r[2]+0xFFFF94D4u; c->f[30]=c->ps1[30]=RF32(ea);} // 801EE880
  goto L_801EE938; // 801EE884
L_801EE888:;
  c->r[0]=R32(c->r[29]+0xFFFF814Cu); // 801EE888
  cmps(c,0,(int32_t)c->r[0],0); // 801EE88C
  if (!crb(c,2)) { goto L_801EE8D4; } // 801EE890
  {uint32_t ea=c->r[2]+0xFFFF9500u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EE894
  c->r[0]=c->r[26]^0x80000000u; // 801EE898
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EE89C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EE8A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801EE8A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 801EE8A8
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[0]); // 801EE8AC
  c->f[2]=c->ps1[2]=S(c->f[26]+c->f[0]); // 801EE8B0
  c->r[0]=c->r[27]^0x80000000u; // 801EE8B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE8B8
  W32(c->r[1]+0x00000010u,c->r[30]); // 801EE8BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801EE8C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 801EE8C4
  c->f[0]=c->ps1[0]=S(c->f[25]*c->f[0]); // 801EE8C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801EE8CC
  goto L_801EE8F4; // 801EE8D0
L_801EE8D4:;
  c->r[0]=c->r[26]^0x80000000u; // 801EE8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EE8D8
  W32(c->r[1]+0x00000010u,c->r[30]); // 801EE8DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801EE8E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[27]); // 801EE8E4
  c->f[0]=c->ps1[0]=S(c->f[28]*c->f[0]); // 801EE8E8
  c->f[1]=c->ps1[1]=S(c->f[29]+c->f[0]); // 801EE8EC
  {uint32_t ea=c->r[2]+0xFFFF94DCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EE8F0
L_801EE8F4:;
  c->r[26]=c->r[26]+0x00000001u; // 801EE8F4
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE8F8
  c->lr=0x801EE900u; f_8021B27C(c); // 801EE8FC
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE900
  c->lr=0x801EE908u; f_8021B2B8(c); // 801EE904
  c->f[31]=c->ps1[31]=S(c->f[30]+c->f[1]); // 801EE908
  c->r[3]=R32(c->r[28]+0x00000014u); // 801EE90C
  c->lr=0x801EE914u; f_8021B2A8(c); // 801EE910
  c->r[3]=R32(c->r[28]+0x00000010u); // 801EE914
  c->f[2]=c->f[31]; // 801EE918
  c->r[4]=0u+0x00000001u; // 801EE91C
  c->lr=0x801EE924u; f_802249D0(c); // 801EE920
  c->r[3]=c->r[31]+0x00010000u; // 801EE924
  c->r[3]=c->r[3]+0xFFFF80E4u; // 801EE928
  c->r[4]=c->r[28]|c->r[28]; // 801EE92C
  c->lr=0x801EE934u; f_8028CCD8(c); // 801EE930
  c->r[28]=c->r[3]|c->r[3]; // 801EE934
L_801EE938:;
  cmps(c,0,(int32_t)c->r[28],0); // 801EE938
  if (!crb(c,2)) { IRQCHK(c); goto L_801EE888; } // 801EE93C
  cmps(c,0,(int32_t)c->r[27],0); // 801EE940
  if (!crb(c,2)) { goto L_801EE954; } // 801EE944
  c->r[3]=c->r[31]|c->r[31]; // 801EE948
  c->r[4]=0u+0x00000000u; // 801EE94C
  c->lr=0x801EE954u; f_801ED3F4(c); // 801EE950
L_801EE954:;
  c->r[0]=0u+0x00000098u; // 801EE954
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EE958
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801EE95C
  c->r[0]=0u+0x00000088u; // 801EE960
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801EE964
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801EE968
  c->r[0]=0u+0x00000078u; // 801EE96C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801EE970
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 801EE974
  c->r[0]=0u+0x00000068u; // 801EE978
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 801EE97C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 801EE980
  c->r[0]=0u+0x00000058u; // 801EE984
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 801EE988
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 801EE98C
  c->r[0]=0u+0x00000048u; // 801EE990
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,26,ea,0,0);} // 801EE994
  {uint32_t ea=c->r[1]+0x00000040u; c->f[26]=RF64(ea);} // 801EE998
  c->r[0]=0u+0x00000038u; // 801EE99C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,25,ea,0,0);} // 801EE9A0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[25]=RF64(ea);} // 801EE9A4
  c->r[11]=c->r[1]+0x00000030u; // 801EE9A8
  c->lr=0x801EE9B0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EE9AC
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801EE9B0
  c->lr=c->r[0]; // 801EE9B4
  c->r[1]=c->r[1]+0x000000A0u; // 801EE9B8
  return; // 801EE9BC
}

// fn_801EE9C0
void f_801EE9C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EE9C0
  c->r[0]=c->lr; // 801EE9C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EE9C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EE9CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EE9D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EE9D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EE9D8
  c->r[30]=c->r[3]|c->r[3]; // 801EE9DC
  c->r[28]=c->r[4]|c->r[4]; // 801EE9E0
  c->r[29]=c->r[5]|c->r[5]; // 801EE9E4
  c->r[31]=c->r[6]|c->r[6]; // 801EE9E8
  c->r[4]=0u+0x00000000u; // 801EE9EC
  c->r[5]=0u+0x00000000u; // 801EE9F0
  c->r[6]=0u+0x00000002u; // 801EE9F4
  c->r[7]=0u+0x00000003u; // 801EE9F8
  c->lr=0x801EEA00u; f_801EDF08(c); // 801EE9FC
  c->r[4]=c->r[30]+0x00010000u; // 801EEA00
  W32(c->r[4]+0xFFFF8100u,c->r[3]); // 801EEA04
  {uint32_t ea=c->r[2]+0xFFFF9518u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEA08
  c->lr=0x801EEA10u; f_8021B290(c); // 801EEA0C
  c->r[3]=c->r[30]+0x00010000u; // 801EEA10
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 801EEA14
  c->r[4]=0u+0x00000084u; // 801EEA18
  c->r[5]=0u+0x00000000u; // 801EEA1C
  c->lr=0x801EEA24u; f_8021B47C(c); // 801EEA20
  cmps(c,0,(int32_t)c->r[28],0); // 801EEA24
  if (crb(c,0)) { goto L_801EEA58; } // 801EEA28
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EEA2C
  c->r[4]=c->r[28]|c->r[28]; // 801EEA30
  c->lr=0x801EEA38u; f_801EF41C(c); // 801EEA34
  c->r[4]=c->r[3]|c->r[3]; // 801EEA38
  c->r[3]=c->r[30]|c->r[30]; // 801EEA3C
  c->r[5]=c->r[30]+0x00010000u; // 801EEA40
  c->r[5]=R32(c->r[5]+0xFFFF8100u); // 801EEA44
  c->lr=0x801EEA4Cu; f_801EDFF4(c); // 801EEA48
  c->r[4]=c->r[30]+0x00010000u; // 801EEA4C
  W32(c->r[4]+0xFFFF8108u,c->r[3]); // 801EEA50
  goto L_801EEA74; // 801EEA54
L_801EEA58:;
  c->r[3]=c->r[30]|c->r[30]; // 801EEA58
  c->r[4]=0u+0x00000000u; // 801EEA5C
  c->r[5]=c->r[30]+0x00010000u; // 801EEA60
  c->r[5]=R32(c->r[5]+0xFFFF8100u); // 801EEA64
  c->lr=0x801EEA6Cu; f_801EDFF4(c); // 801EEA68
  c->r[4]=c->r[30]+0x00010000u; // 801EEA6C
  W32(c->r[4]+0xFFFF8108u,c->r[3]); // 801EEA70
L_801EEA74:;
  c->r[3]=c->r[30]+0x00010000u; // 801EEA74
  c->r[3]=R32(c->r[3]+0xFFFF8108u); // 801EEA78
  c->r[4]=0u+0x000000FFu; // 801EEA7C
  c->r[5]=0u+0x000000FFu; // 801EEA80
  c->r[6]=0u+0x00000000u; // 801EEA84
  c->r[7]=0u+0x000000FFu; // 801EEA88
  c->lr=0x801EEA90u; f_80224BA0(c); // 801EEA8C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EEA90
  c->lr=0x801EEA98u; f_801EF3E0(c); // 801EEA94
  cmpu(c,0,c->r[3],0x0000001Au); // 801EEA98
  if (!crb(c,2)) { goto L_801EEABC; } // 801EEA9C
  c->r[3]=c->r[30]+0x00010000u; // 801EEAA0
  c->r[3]=R32(c->r[3]+0xFFFF8108u); // 801EEAA4
  {uint32_t ea=c->r[2]+0xFFFF951Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEAA8
  {uint32_t ea=c->r[2]+0xFFFF9520u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEAAC
  c->r[4]=0u+0x00000001u; // 801EEAB0
  c->lr=0x801EEAB8u; f_802249E8(c); // 801EEAB4
  goto L_801EEAD4; // 801EEAB8
L_801EEABC:;
  c->r[3]=c->r[30]+0x00010000u; // 801EEABC
  c->r[3]=R32(c->r[3]+0xFFFF8108u); // 801EEAC0
  {uint32_t ea=c->r[2]+0xFFFF951Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEAC4
  {uint32_t ea=c->r[2]+0xFFFF9524u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEAC8
  c->r[4]=0u+0x00000001u; // 801EEACC
  c->lr=0x801EEAD4u; f_802249E8(c); // 801EEAD0
L_801EEAD4:;
  c->r[3]=c->r[30]+0x00010000u; // 801EEAD4
  c->r[3]=R32(c->r[3]+0xFFFF8108u); // 801EEAD8
  {uint32_t ea=c->r[2]+0xFFFF9528u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEADC
  c->r[4]=0u+0x00000000u; // 801EEAE0
  c->lr=0x801EEAE8u; f_80224A00(c); // 801EEAE4
  cmps(c,0,(int32_t)c->r[29],0); // 801EEAE8
  if (crb(c,0)) { goto L_801EEB9C; } // 801EEAEC
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EEAF0
  c->r[4]=c->r[29]|c->r[29]; // 801EEAF4
  c->lr=0x801EEAFCu; f_801EF41C(c); // 801EEAF8
  c->r[4]=c->r[3]|c->r[3]; // 801EEAFC
  c->r[3]=c->r[30]|c->r[30]; // 801EEB00
  c->r[5]=c->r[30]+0x00010000u; // 801EEB04
  c->r[5]=R32(c->r[5]+0xFFFF8100u); // 801EEB08
  c->lr=0x801EEB10u; f_801EDFF4(c); // 801EEB0C
  c->r[4]=c->r[30]+0x00010000u; // 801EEB10
  W32(c->r[4]+0xFFFF810Cu,c->r[3]); // 801EEB14
  c->r[4]=0u+0x000000FFu; // 801EEB18
  c->r[5]=0u+0x000000FFu; // 801EEB1C
  c->r[6]=0u+0x000000FFu; // 801EEB20
  c->r[7]=0u+0x000000FFu; // 801EEB24
  c->lr=0x801EEB2Cu; f_80224BA0(c); // 801EEB28
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EEB2C
  c->lr=0x801EEB34u; f_801EF3E0(c); // 801EEB30
  cmpu(c,0,c->r[3],0x0000001Au); // 801EEB34
  if (!crb(c,2)) { goto L_801EEB58; } // 801EEB38
  c->r[3]=c->r[30]+0x00010000u; // 801EEB3C
  c->r[3]=R32(c->r[3]+0xFFFF810Cu); // 801EEB40
  {uint32_t ea=c->r[2]+0xFFFF952Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEB44
  {uint32_t ea=c->r[2]+0xFFFF9520u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEB48
  c->r[4]=0u+0x00000000u; // 801EEB4C
  c->lr=0x801EEB54u; f_802249E8(c); // 801EEB50
  goto L_801EEB70; // 801EEB54
L_801EEB58:;
  c->r[3]=c->r[30]+0x00010000u; // 801EEB58
  c->r[3]=R32(c->r[3]+0xFFFF810Cu); // 801EEB5C
  {uint32_t ea=c->r[2]+0xFFFF952Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEB60
  {uint32_t ea=c->r[2]+0xFFFF9524u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEB64
  c->r[4]=0u+0x00000000u; // 801EEB68
  c->lr=0x801EEB70u; f_802249E8(c); // 801EEB6C
L_801EEB70:;
  c->r[3]=c->r[30]+0x00010000u; // 801EEB70
  c->r[3]=R32(c->r[3]+0xFFFF810Cu); // 801EEB74
  {uint32_t ea=c->r[2]+0xFFFF9528u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEB78
  c->r[4]=0u+0x00000000u; // 801EEB7C
  c->lr=0x801EEB84u; f_80224A00(c); // 801EEB80
  c->r[3]=c->r[30]+0x00010000u; // 801EEB84
  c->r[3]=R32(c->r[3]+0xFFFF810Cu); // 801EEB88
  c->r[4]=0u+0x00000002u; // 801EEB8C
  c->r[5]=0u+0x00000001u; // 801EEB90
  c->lr=0x801EEB98u; f_802249B4(c); // 801EEB94
  goto L_801EEBA8; // 801EEB98
L_801EEB9C:;
  c->r[0]=0u+0x00000000u; // 801EEB9C
  c->r[3]=c->r[30]+0x00010000u; // 801EEBA0
  W32(c->r[3]+0xFFFF810Cu,c->r[0]); // 801EEBA4
L_801EEBA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801EEBA8
  if (crb(c,2)) { goto L_801EEC38; } // 801EEBAC
  c->r[3]=c->r[30]|c->r[30]; // 801EEBB0
  c->r[4]=0u+0x00000007u; // 801EEBB4
  c->r[5]=0u+0x00000000u; // 801EEBB8
  c->r[6]=0u+0x00000002u; // 801EEBBC
  c->r[7]=0u+0x00000003u; // 801EEBC0
  c->lr=0x801EEBC8u; f_801EDF08(c); // 801EEBC4
  c->r[4]=c->r[30]+0x00010000u; // 801EEBC8
  W32(c->r[4]+0xFFFF8104u,c->r[3]); // 801EEBCC
  {uint32_t ea=c->r[2]+0xFFFF9530u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEBD0
  c->lr=0x801EEBD8u; f_8021B290(c); // 801EEBD4
  c->r[3]=c->r[30]|c->r[30]; // 801EEBD8
  c->r[4]=0u+0x00000000u; // 801EEBDC
  c->r[5]=c->r[30]+0x00010000u; // 801EEBE0
  c->r[5]=R32(c->r[5]+0xFFFF8104u); // 801EEBE4
  c->lr=0x801EEBECu; f_801EDFF4(c); // 801EEBE8
  c->r[4]=c->r[30]+0x00010000u; // 801EEBEC
  W32(c->r[4]+0xFFFF8110u,c->r[3]); // 801EEBF0
  {uint32_t ea=c->r[2]+0xFFFF9528u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEBF4
  c->r[4]=0u+0x00000000u; // 801EEBF8
  c->lr=0x801EEC00u; f_80224A00(c); // 801EEBFC
  c->r[3]=c->r[30]+0x00010000u; // 801EEC00
  c->r[3]=R32(c->r[3]+0xFFFF8110u); // 801EEC04
  c->r[4]=0u+0x000000FFu; // 801EEC08
  c->r[5]=0u+0x000000FFu; // 801EEC0C
  c->r[6]=0u+0x000000FFu; // 801EEC10
  c->r[7]=0u+0x000000FFu; // 801EEC14
  c->lr=0x801EEC1Cu; f_80224BA0(c); // 801EEC18
  c->r[3]=c->r[30]+0x00010000u; // 801EEC1C
  c->r[3]=R32(c->r[3]+0xFFFF8110u); // 801EEC20
  {uint32_t ea=c->r[2]+0xFFFF951Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EEC24
  {uint32_t ea=c->r[2]+0xFFFF9524u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EEC28
  c->r[4]=0u+0x00000001u; // 801EEC2C
  c->lr=0x801EEC34u; f_802249E8(c); // 801EEC30
  goto L_801EEC48; // 801EEC34
L_801EEC38:;
  c->r[0]=0u+0x00000000u; // 801EEC38
  c->r[3]=c->r[30]+0x00010000u; // 801EEC3C
  W32(c->r[3]+0xFFFF8104u,c->r[0]); // 801EEC40
  W32(c->r[3]+0xFFFF8110u,c->r[0]); // 801EEC44
L_801EEC48:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EEC48
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EEC4C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EEC50
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EEC54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EEC58
  c->lr=c->r[0]; // 801EEC5C
  c->r[1]=c->r[1]+0x00000020u; // 801EEC60
  return; // 801EEC64
}

// fn_801EEC68
void f_801EEC68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEC68
  c->r[0]=c->lr; // 801EEC6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EEC70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EEC74
  c->r[31]=c->r[3]|c->r[3]; // 801EEC78
  c->r[3]=c->r[3]+0x00010000u; // 801EEC7C
  c->r[0]=R32(c->r[3]+0xFFFF8110u); // 801EEC80
  cmps(c,0,(int32_t)c->r[0],0); // 801EEC84
  if (crb(c,2)) { goto L_801EECA8; } // 801EEC88
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 801EEC8C
  c->lr=0x801EEC94u; f_801EF41C(c); // 801EEC90
  c->r[4]=c->r[3]|c->r[3]; // 801EEC94
  c->r[3]=c->r[31]+0x00010000u; // 801EEC98
  c->r[3]=R32(c->r[3]+0xFFFF8110u); // 801EEC9C
  c->r[5]=0u+0x00000001u; // 801EECA0
  c->lr=0x801EECA8u; f_80224894(c); // 801EECA4
L_801EECA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EECA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EECAC
  c->lr=c->r[0]; // 801EECB0
  c->r[1]=c->r[1]+0x00000010u; // 801EECB4
  return; // 801EECB8
}

// fn_801EECBC
void f_801EECBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EECBC
  c->r[0]=c->lr; // 801EECC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EECC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EECC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EECCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EECD0
  c->r[29]=c->r[4]|c->r[4]; // 801EECD4
  c->r[30]=0u+0x00000000u; // 801EECD8
  c->r[31]=c->r[3]|c->r[3]; // 801EECDC
L_801EECE0:;
  c->r[3]=c->r[31]+0x00010000u; // 801EECE0
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 801EECE4
  cmps(c,0,(int32_t)c->r[3],0); // 801EECE8
  if (crb(c,2)) { goto L_801EECFC; } // 801EECEC
  c->r[4]=0u+0x00000000u; // 801EECF0
  c->r[5]=c->r[29]|c->r[29]; // 801EECF4
  c->lr=0x801EECFCu; f_8021B358(c); // 801EECF8
L_801EECFC:;
  c->r[31]=c->r[31]+0x00000004u; // 801EECFC
  c->r[30]=c->r[30]+0x00000001u; // 801EED00
  cmps(c,0,(int32_t)c->r[30],2); // 801EED04
  if (crb(c,0)) { IRQCHK(c); goto L_801EECE0; } // 801EED08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EED0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EED10
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EED14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EED18
  c->lr=c->r[0]; // 801EED1C
  c->r[1]=c->r[1]+0x00000020u; // 801EED20
  return; // 801EED24
}

// fn_801EED28
void f_801EED28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EED28
  c->r[0]=c->lr; // 801EED2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EED30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EED34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EED38
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EED3C
  c->r[29]=c->r[4]|c->r[4]; // 801EED40
  c->r[30]=0u+0x00000000u; // 801EED44
  c->r[31]=c->r[3]|c->r[3]; // 801EED48
L_801EED4C:;
  c->r[3]=c->r[31]+0x00010000u; // 801EED4C
  c->r[3]=R32(c->r[3]+0xFFFF8108u); // 801EED50
  cmps(c,0,(int32_t)c->r[3],0); // 801EED54
  if (crb(c,2)) { goto L_801EED64; } // 801EED58
  c->r[4]=c->r[29]|c->r[29]; // 801EED5C
  c->lr=0x801EED64u; f_80224B90(c); // 801EED60
L_801EED64:;
  c->r[31]=c->r[31]+0x00000004u; // 801EED64
  c->r[30]=c->r[30]+0x00000001u; // 801EED68
  cmps(c,0,(int32_t)c->r[30],3); // 801EED6C
  if (crb(c,0)) { IRQCHK(c); goto L_801EED4C; } // 801EED70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EED74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EED78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EED7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EED80
  c->lr=c->r[0]; // 801EED84
  c->r[1]=c->r[1]+0x00000020u; // 801EED88
  return; // 801EED8C
}

// fn_801EED90
void f_801EED90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EED90
  c->r[0]=c->lr; // 801EED94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EED98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EED9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EEDA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EEDA4
  c->r[0]=0u+0x00000001u; // 801EEDA8
  c->r[29]=0u+0x00000000u; // 801EEDAC
  c->r[30]=c->r[3]|c->r[3]; // 801EEDB0
L_801EEDB4:;
  c->r[3]=c->r[30]+0x00010000u; // 801EEDB4
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 801EEDB8
  cmps(c,0,(int32_t)c->r[3],0); // 801EEDBC
  if (crb(c,2)) { goto L_801EEDE8; } // 801EEDC0
  c->r[31]=0u+0x00000000u; // 801EEDC4
  cmps(c,0,(int32_t)c->r[0],0); // 801EEDC8
  if (crb(c,2)) { goto L_801EEDE4; } // 801EEDCC
  c->r[4]=0u+0x00000000u; // 801EEDD0
  c->lr=0x801EEDD8u; f_8021B3FC(c); // 801EEDD4
  cmps(c,0,(int32_t)c->r[3],0); // 801EEDD8
  if (crb(c,2)) { goto L_801EEDE4; } // 801EEDDC
  c->r[31]=0u+0x00000001u; // 801EEDE0
L_801EEDE4:;
  c->r[0]=c->r[31]|c->r[31]; // 801EEDE4
L_801EEDE8:;
  c->r[30]=c->r[30]+0x00000004u; // 801EEDE8
  c->r[29]=c->r[29]+0x00000001u; // 801EEDEC
  cmps(c,0,(int32_t)c->r[29],2); // 801EEDF0
  if (crb(c,0)) { IRQCHK(c); goto L_801EEDB4; } // 801EEDF4
  c->r[3]=c->r[0]|c->r[0]; // 801EEDF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EEDFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EEE00
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EEE04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EEE08
  c->lr=c->r[0]; // 801EEE0C
  c->r[1]=c->r[1]+0x00000020u; // 801EEE10
  return; // 801EEE14
}

// fn_801EEE18
void f_801EEE18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEE18
  c->r[0]=c->lr; // 801EEE1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EEE20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EEE24
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EEE28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EEE2C
  c->r[29]=c->r[3]|c->r[3]; // 801EEE30
  c->r[30]=c->r[4]|c->r[4]; // 801EEE34
  cmps(c,0,(int32_t)c->r[4],0); // 801EEE38
  if (crb(c,2)) { goto L_801EEE94; } // 801EEE3C
  c->r[3]=c->r[30]|c->r[30]; // 801EEE40
  c->lr=0x801EEE48u; f_8021B22C(c); // 801EEE44
  c->r[3]=c->r[29]+0x00010000u; // 801EEE48
  c->r[3]=c->r[3]+0xFFFF80D8u; // 801EEE4C
  c->r[4]=c->r[30]|c->r[30]; // 801EEE50
  c->lr=0x801EEE58u; f_8028CC6C(c); // 801EEE54
  c->lr=0x801EEE5Cu; f_80056B5C(c); // 801EEE58
  c->r[31]=c->r[3]|c->r[3]; // 801EEE5C
  c->r[3]=c->r[29]|c->r[29]; // 801EEE60
  c->lr=0x801EEE68u; f_80065DB4(c); // 801EEE64
  c->lr=0x801EEE6Cu; f_80056B54(c); // 801EEE68
  cmps(c,0,(int32_t)c->r[30],0); // 801EEE6C
  if (crb(c,2)) { goto L_801EEE8C; } // 801EEE70
  c->r[3]=c->r[30]|c->r[30]; // 801EEE74
  c->r[4]=0u+0x00000001u; // 801EEE78
  c->r[12]=R32(c->r[3]+0x00000020u); // 801EEE7C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EEE80
  c->ctr=c->r[12]; // 801EEE84
  if (true) { c->lr=0x801EEE8Cu; dispatch(c,c->ctr); } // 801EEE88
L_801EEE8C:;
  c->r[3]=c->r[31]|c->r[31]; // 801EEE8C
  c->lr=0x801EEE94u; f_80056B54(c); // 801EEE90
L_801EEE94:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EEE94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EEE98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EEE9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EEEA0
  c->lr=c->r[0]; // 801EEEA4
  c->r[1]=c->r[1]+0x00000020u; // 801EEEA8
  return; // 801EEEAC
}

// fn_801EEEB0
void f_801EEEB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEEB0
  c->r[0]=c->lr; // 801EEEB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EEEB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EEEBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EEEC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EEEC4
  c->r[29]=c->r[3]|c->r[3]; // 801EEEC8
  c->r[30]=c->r[4]|c->r[4]; // 801EEECC
  c->r[3]=c->r[30]|c->r[30]; // 801EEED0
  c->lr=0x801EEED8u; f_80224940(c); // 801EEED4
  c->r[3]=c->r[29]+0x00010000u; // 801EEED8
  c->r[3]=c->r[3]+0xFFFF80F0u; // 801EEEDC
  c->r[4]=c->r[30]|c->r[30]; // 801EEEE0
  c->lr=0x801EEEE8u; f_8028CC6C(c); // 801EEEE4
  c->lr=0x801EEEECu; f_80056B5C(c); // 801EEEE8
  c->r[31]=c->r[3]|c->r[3]; // 801EEEEC
  c->r[3]=c->r[29]|c->r[29]; // 801EEEF0
  c->lr=0x801EEEF8u; f_80065DB4(c); // 801EEEF4
  c->lr=0x801EEEFCu; f_80056B54(c); // 801EEEF8
  c->r[3]=c->r[30]|c->r[30]; // 801EEEFC
  c->r[4]=0u+0x00000001u; // 801EEF00
  c->lr=0x801EEF08u; f_80224830(c); // 801EEF04
  c->r[3]=c->r[31]|c->r[31]; // 801EEF08
  c->lr=0x801EEF10u; f_80056B54(c); // 801EEF0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EEF10
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EEF14
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EEF18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EEF1C
  c->lr=c->r[0]; // 801EEF20
  c->r[1]=c->r[1]+0x00000020u; // 801EEF24
  return; // 801EEF28
}

// fn_801EEF2C
void f_801EEF2C(Ctx* __restrict c) {
  f_801EE384(c); return; // 801EEF2C
}

// fn_801EEF30
void f_801EEF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EEF30
  c->r[0]=c->lr; // 801EEF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EEF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EEF3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EEF40
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EEF44
  c->r[29]=c->r[3]|c->r[3]; // 801EEF48
  c->lr=0x801EEF50u; f_80078F38(c); // 801EEF4C
  c->r[3]=0u+0x80470000u; // 801EEF50
  c->r[0]=c->r[3]+0x00004D18u; // 801EEF54
  W32(c->r[29]+0x00000058u,c->r[0]); // 801EEF58
  c->r[31]=0u+0x00000000u; // 801EEF5C
  c->r[3]=c->r[29]+0x00010000u; // 801EEF60
  W32(c->r[3]+0xFFFF9008u,c->r[31]); // 801EEF64
  c->r[0]=0u+0x00000003u; // 801EEF68
  W32(c->r[3]+0xFFFF900Cu,c->r[0]); // 801EEF6C
  W32(c->r[3]+0xFFFF9010u,c->r[0]); // 801EEF70
  c->r[0]=0u+0xFFFFFFFFu; // 801EEF74
  W32(c->r[3]+0xFFFF9014u,c->r[0]); // 801EEF78
  W32(c->r[3]+0xFFFF9018u,c->r[31]); // 801EEF7C
  W32(c->r[3]+0xFFFF901Cu,c->r[31]); // 801EEF80
  W32(c->r[3]+0xFFFF9020u,c->r[31]); // 801EEF84
  W32(c->r[3]+0xFFFF9024u,c->r[31]); // 801EEF88
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801EEF8C
  c->lr=0x801EEF94u; f_80076954(c); // 801EEF90
  c->r[3]=c->r[29]+0x00010000u; // 801EEF94
  W32(c->r[3]+0xFFFF9098u,c->r[31]); // 801EEF98
  W32(c->r[3]+0xFFFF909Cu,c->r[31]); // 801EEF9C
  c->r[3]=c->r[3]+0xFFFF90ACu; // 801EEFA0
  c->lr=0x801EEFA8u; f_802123F0(c); // 801EEFA4
  c->r[3]=c->r[29]+0x00010000u; // 801EEFA8
  W32(c->r[3]+0xFFFF912Cu,c->r[31]); // 801EEFAC
  c->lr=0x801EEFB4u; f_800567B4(c); // 801EEFB0
  c->r[4]=0u+0x00060000u; // 801EEFB4
  c->lr=0x801EEFBCu; f_80056AC0(c); // 801EEFB8
  c->r[4]=c->r[3]|c->r[3]; // 801EEFBC
  c->r[5]=c->r[29]+0x00010000u; // 801EEFC0
  W32(c->r[5]+0xFFFF9004u,c->r[3]); // 801EEFC4
  c->r[3]=c->r[5]|c->r[5]; // 801EEFC8
  c->r[3]=c->r[3]+0xFFFF8FD4u; // 801EEFCC
  c->r[5]=0u+0x00060000u; // 801EEFD0
  c->r[6]=0u+0x00000020u; // 801EEFD4
  c->r[7]=0u+0x80470000u; // 801EEFD8
  c->r[7]=c->r[7]+0x00004C50u; // 801EEFDC
  c->lr=0x801EEFE4u; f_800569F4(c); // 801EEFE0
  c->r[3]=c->r[29]|c->r[29]; // 801EEFE4
  c->r[4]=0u+0x00040000u; // 801EEFE8
  c->r[5]=0u+0x80470000u; // 801EEFEC
  c->r[5]=c->r[5]+0x00004C5Cu; // 801EEFF0
  c->r[6]=c->r[29]+0x00010000u; // 801EEFF4
  c->r[6]=c->r[6]+0xFFFF8FD4u; // 801EEFF8
  c->lr=0x801EF000u; f_80078D6C(c); // 801EEFFC
  c->r[3]=c->r[29]|c->r[29]; // 801EF000
  c->r[4]=0u+0x80470000u; // 801EF004
  c->r[4]=c->r[4]+0x00004C68u; // 801EF008
  c->lr=0x801EF010u; f_80078E9C(c); // 801EF00C
  c->r[3]=c->r[29]|c->r[29]; // 801EF010
  c->r[4]=0u+0x00000000u; // 801EF014
  c->r[5]=0u+0x000000FFu; // 801EF018
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EF01C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801EF020
  c->ctr=c->r[12]; // 801EF024
  if (true) { c->lr=0x801EF02Cu; dispatch(c,c->ctr); } // 801EF028
  c->r[3]=c->r[29]|c->r[29]; // 801EF02C
  c->lr=0x801EF034u; f_801ED0DC(c); // 801EF030
  c->r[3]=c->r[29]|c->r[29]; // 801EF034
  c->lr=0x801EF03Cu; f_8025BECC(c); // 801EF038
  c->r[3]=c->r[29]+0x00010000u; // 801EF03C
  W32(c->r[3]+0xFFFF90A0u,c->r[31]); // 801EF040
  W32(c->r[3]+0xFFFF90A4u,c->r[31]); // 801EF044
  c->r[3]=c->r[29]|c->r[29]; // 801EF048
  c->r[4]=0u+0x00000006u; // 801EF04C
  c->lr=0x801EF054u; f_801EF5CC(c); // 801EF050
  c->r[3]=c->r[29]+0x00010000u; // 801EF054
  W8(c->r[3]+0xFFFF9138u,c->r[31]); // 801EF058
  W32(c->r[3]+0xFFFF80D0u,c->r[31]); // 801EF05C
  c->r[3]=c->r[3]+0xFFFF80D4u; // 801EF060
  c->r[4]=0u+0x00000000u; // 801EF064
  c->r[5]=0u+0x00000F00u; // 801EF068
  c->lr=0x801EF070u; f_800060B8(c); // 801EF06C
  c->lr=0x801EF074u; f_80056B5C(c); // 801EF070
  c->r[30]=c->r[3]|c->r[3]; // 801EF074
  c->r[3]=c->r[29]|c->r[29]; // 801EF078
  c->lr=0x801EF080u; f_80065DB4(c); // 801EF07C
  c->lr=0x801EF084u; f_80056B54(c); // 801EF080
  c->r[3]=0u+0x00001708u; // 801EF084
  c->lr=0x801EF08Cu; f_80047B64(c); // 801EF088
  c->r[31]=c->r[3]|c->r[3]; // 801EF08C
  cmps(c,0,(int32_t)c->r[3],0); // 801EF090
  if (crb(c,2)) { goto L_801EF0AC; } // 801EF094
  c->r[3]=c->r[29]|c->r[29]; // 801EF098
  c->lr=0x801EF0A0u; f_80065DB4(c); // 801EF09C
  c->r[4]=c->r[3]|c->r[3]; // 801EF0A0
  c->r[3]=c->r[31]|c->r[31]; // 801EF0A4
  c->lr=0x801EF0ACu; f_80212518(c); // 801EF0A8
L_801EF0AC:;
  c->r[3]=c->r[29]+0x00010000u; // 801EF0AC
  W32(c->r[3]+0xFFFF90A8u,c->r[31]); // 801EF0B0
  c->r[3]=c->r[30]|c->r[30]; // 801EF0B4
  c->lr=0x801EF0BCu; f_80056B54(c); // 801EF0B8
  c->r[3]=c->r[29]|c->r[29]; // 801EF0BC
  c->r[4]=0u+0x00000001u; // 801EF0C0
  c->lr=0x801EF0C8u; f_801EFDF8(c); // 801EF0C4
  c->r[3]=c->r[29]|c->r[29]; // 801EF0C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF0CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF0D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF0D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF0D8
  c->lr=c->r[0]; // 801EF0DC
  c->r[1]=c->r[1]+0x00000020u; // 801EF0E0
  return; // 801EF0E4
}

// fn_801EF0E8
void f_801EF0E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF0E8
  c->r[0]=c->lr; // 801EF0EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF0F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF0F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF0F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF0FC
  c->r[29]=c->r[3]|c->r[3]; // 801EF100
  c->r[30]=c->r[4]|c->r[4]; // 801EF104
  cmps(c,0,(int32_t)c->r[3],0); // 801EF108
  if (crb(c,2)) { goto L_801EF214; } // 801EF10C
  c->r[4]=0u+0x80470000u; // 801EF110
  c->r[0]=c->r[4]+0x00004D18u; // 801EF114
  W32(c->r[3]+0x00000058u,c->r[0]); // 801EF118
  c->lr=0x801EF120u; f_80056B5C(c); // 801EF11C
  c->r[31]=c->r[3]|c->r[3]; // 801EF120
  c->r[3]=c->r[29]|c->r[29]; // 801EF124
  c->lr=0x801EF12Cu; f_80065DB4(c); // 801EF128
  c->lr=0x801EF130u; f_80056B54(c); // 801EF12C
  c->r[3]=c->r[29]+0x00010000u; // 801EF130
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EF134
  c->r[4]=0u+0x00000001u; // 801EF138
  c->lr=0x801EF140u; f_802125A8(c); // 801EF13C
  c->r[3]=c->r[31]|c->r[31]; // 801EF140
  c->lr=0x801EF148u; f_80056B54(c); // 801EF144
  c->r[3]=c->r[29]+0x00010000u; // 801EF148
  c->r[0]=R32(c->r[3]+0xFFFF909Cu); // 801EF14C
  cmps(c,0,(int32_t)c->r[0],0); // 801EF150
  if (crb(c,2)) { goto L_801EF198; } // 801EF154
  c->lr=0x801EF15Cu; f_80056B5C(c); // 801EF158
  c->r[31]=c->r[3]|c->r[3]; // 801EF15C
  c->r[3]=c->r[29]|c->r[29]; // 801EF160
  c->lr=0x801EF168u; f_80065DB4(c); // 801EF164
  c->lr=0x801EF16Cu; f_80056B54(c); // 801EF168
  c->r[3]=c->r[29]+0x00010000u; // 801EF16C
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EF170
  cmps(c,0,(int32_t)c->r[3],0); // 801EF174
  if (crb(c,2)) { goto L_801EF190; } // 801EF178
  c->r[4]=0u+0x00000001u; // 801EF17C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EF180
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EF184
  c->ctr=c->r[12]; // 801EF188
  if (true) { c->lr=0x801EF190u; dispatch(c,c->ctr); } // 801EF18C
L_801EF190:;
  c->r[3]=c->r[31]|c->r[31]; // 801EF190
  c->lr=0x801EF198u; f_80056B54(c); // 801EF194
L_801EF198:;
  c->r[3]=c->r[29]+0x00010000u; // 801EF198
  c->r[3]=c->r[3]+0xFFFF8FD4u; // 801EF19C
  c->lr=0x801EF1A4u; f_80056A84(c); // 801EF1A0
  c->lr=0x801EF1A8u; f_800567B4(c); // 801EF1A4
  c->r[4]=c->r[29]+0x00010000u; // 801EF1A8
  c->r[4]=R32(c->r[4]+0xFFFF9004u); // 801EF1AC
  c->lr=0x801EF1B4u; f_80056B0C(c); // 801EF1B0
  c->r[3]=c->r[29]|c->r[29]; // 801EF1B4
  c->lr=0x801EF1BCu; f_80078DF4(c); // 801EF1B8
  c->r[3]=c->r[29]|c->r[29]; // 801EF1BC
  c->r[4]=0u+0x00000000u; // 801EF1C0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EF1C4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801EF1C8
  c->ctr=c->r[12]; // 801EF1CC
  if (true) { c->lr=0x801EF1D4u; dispatch(c,c->ctr); } // 801EF1D0
  c->r[3]=c->r[29]+0x00010000u; // 801EF1D4
  c->r[3]=c->r[3]+0xFFFF90ACu; // 801EF1D8
  c->r[4]=0u+0xFFFFFFFFu; // 801EF1DC
  c->lr=0x801EF1E4u; f_802123F4(c); // 801EF1E0
  c->r[3]=c->r[29]+0x00010000u; // 801EF1E4
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801EF1E8
  c->r[4]=0u+0xFFFFFFFFu; // 801EF1EC
  c->lr=0x801EF1F4u; f_800769DC(c); // 801EF1F0
  c->r[3]=c->r[29]|c->r[29]; // 801EF1F4
  c->r[4]=0u+0x00000000u; // 801EF1F8
  c->lr=0x801EF200u; f_80078FA4(c); // 801EF1FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801EF200
  cmps(c,0,(int32_t)c->r[0],0); // 801EF204
  if (!crb(c,1)) { goto L_801EF214; } // 801EF208
  c->r[3]=c->r[29]|c->r[29]; // 801EF20C
  c->lr=0x801EF214u; f_80047B20(c); // 801EF210
L_801EF214:;
  c->r[3]=c->r[29]|c->r[29]; // 801EF214
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF218
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF21C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF220
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF224
  c->lr=c->r[0]; // 801EF228
  c->r[1]=c->r[1]+0x00000020u; // 801EF22C
  return; // 801EF230
}

// fn_801EF234
void f_801EF234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF234
  c->r[0]=c->lr; // 801EF238
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF23C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF240
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF244
  c->r[30]=c->r[3]|c->r[3]; // 801EF248
  c->r[31]=c->r[4]|c->r[4]; // 801EF24C
  c->r[0]=c->r[4]+0x00010000u; // 801EF250
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801EF254
  if (!crb(c,2)) { goto L_801EF2C8; } // 801EF258
  c->r[3]=c->r[1]+0x00000014u; // 801EF25C
  c->r[4]=0u+0x00000000u; // 801EF260
  c->r[5]=0u+0x00000000u; // 801EF264
  c->r[6]=0u+0x00000000u; // 801EF268
  c->r[7]=0u+0x000000FFu; // 801EF26C
  c->lr=0x801EF274u; f_8004E248(c); // 801EF270
  c->r[3]=c->r[1]+0x0000000Cu; // 801EF274
  c->r[4]=c->r[1]+0x00000014u; // 801EF278
  c->lr=0x801EF280u; f_800549FC(c); // 801EF27C
  c->r[3]=0u+0x00000001u; // 801EF280
  c->lr=0x801EF288u; f_80173F68(c); // 801EF284
  c->r[4]=c->r[1]+0x0000000Cu; // 801EF288
  {uint32_t ea=c->r[2]+0xFFFF9538u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF28C
  {uint32_t ea=c->r[2]+0xFFFF953Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF290
  c->lr=0x801EF298u; f_801747F4(c); // 801EF294
  c->r[3]=c->r[1]+0x0000000Cu; // 801EF298
  c->r[4]=0u+0xFFFFFFFFu; // 801EF29C
  c->lr=0x801EF2A4u; f_80047BD4(c); // 801EF2A0
  c->r[3]=c->r[30]|c->r[30]; // 801EF2A4
  c->lr=0x801EF2ACu; f_801EF978(c); // 801EF2A8
  c->r[3]=c->r[30]|c->r[30]; // 801EF2AC
  c->r[4]=0u+0x00000009u; // 801EF2B0
  c->lr=0x801EF2B8u; f_801EFDF8(c); // 801EF2B4
  c->r[3]=c->r[1]+0x00000014u; // 801EF2B8
  c->r[4]=0u+0xFFFFFFFFu; // 801EF2BC
  c->lr=0x801EF2C4u; f_80047BD4(c); // 801EF2C0
  goto L_801EF358; // 801EF2C4
L_801EF2C8:;
  c->r[3]=c->r[3]+0x00010000u; // 801EF2C8
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EF2CC
  cmps(c,0,(int32_t)c->r[3],0); // 801EF2D0
  if (crb(c,2)) { goto L_801EF2F8; } // 801EF2D4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EF2D8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801EF2DC
  c->ctr=c->r[12]; // 801EF2E0
  if (true) { c->lr=0x801EF2E8u; dispatch(c,c->ctr); } // 801EF2E4
  c->r[3]=c->r[30]|c->r[30]; // 801EF2E8
  c->r[4]=0u+0x00000007u; // 801EF2EC
  c->lr=0x801EF2F4u; f_801EFDF8(c); // 801EF2F0
  goto L_801EF358; // 801EF2F4
L_801EF2F8:;
  c->r[3]=c->r[1]+0x00000010u; // 801EF2F8
  c->r[4]=0u+0x00000000u; // 801EF2FC
  c->r[5]=0u+0x00000000u; // 801EF300
  c->r[6]=0u+0x00000000u; // 801EF304
  c->r[7]=0u+0x00000000u; // 801EF308
  c->lr=0x801EF310u; f_8004E248(c); // 801EF30C
  c->r[3]=c->r[1]+0x00000008u; // 801EF310
  c->r[4]=c->r[1]+0x00000010u; // 801EF314
  c->lr=0x801EF31Cu; f_800549FC(c); // 801EF318
  c->r[3]=0u+0x00000001u; // 801EF31C
  c->lr=0x801EF324u; f_80173F68(c); // 801EF320
  c->r[4]=c->r[1]+0x00000008u; // 801EF324
  {uint32_t ea=c->r[2]+0xFFFF9538u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EF328
  {uint32_t ea=c->r[2]+0xFFFF9540u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EF32C
  c->lr=0x801EF334u; f_801747F4(c); // 801EF330
  c->r[3]=c->r[1]+0x00000008u; // 801EF334
  c->r[4]=0u+0xFFFFFFFFu; // 801EF338
  c->lr=0x801EF340u; f_80047BD4(c); // 801EF33C
  c->r[3]=c->r[30]|c->r[30]; // 801EF340
  c->r[4]=0u+0x00000006u; // 801EF344
  c->lr=0x801EF34Cu; f_801EFDF8(c); // 801EF348
  c->r[3]=c->r[1]+0x00000010u; // 801EF34C
  c->r[4]=0u+0xFFFFFFFFu; // 801EF350
  c->lr=0x801EF358u; f_80047BD4(c); // 801EF354
L_801EF358:;
  c->r[3]=c->r[30]+0x00010000u; // 801EF358
  W32(c->r[3]+0xFFFF900Cu,c->r[31]); // 801EF35C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF360
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF364
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF368
  c->lr=c->r[0]; // 801EF36C
  c->r[1]=c->r[1]+0x00000020u; // 801EF370
  return; // 801EF374
}

// fn_801EF378
void f_801EF378(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF378
  c->r[0]=c->lr; // 801EF37C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF380
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF384
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF388
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF38C
  c->r[29]=c->r[3]|c->r[3]; // 801EF390
  c->r[30]=c->r[5]|c->r[5]; // 801EF394
  c->r[31]=c->r[6]|c->r[6]; // 801EF398
  c->r[5]=c->r[3]+0x00010000u; // 801EF39C
  W32(c->r[5]+0xFFFF9010u,c->r[4]); // 801EF3A0
  c->r[4]=0u+0x0000000Au; // 801EF3A4
  c->lr=0x801EF3ACu; f_801EFDF8(c); // 801EF3A8
  c->r[3]=c->r[29]+0x00010000u; // 801EF3AC
  W32(c->r[3]+0xFFFF9130u,c->r[30]); // 801EF3B0
  W32(c->r[3]+0xFFFF9134u,c->r[31]); // 801EF3B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF3B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF3BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF3C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF3C4
  c->lr=c->r[0]; // 801EF3C8
  c->r[1]=c->r[1]+0x00000020u; // 801EF3CC
  return; // 801EF3D0
}

// fn_801EF3D4
void f_801EF3D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF3D4
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EF3D8
  return; // 801EF3DC
}

// fn_801EF3E0
void f_801EF3E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF3E0
  c->r[3]=R32(c->r[3]+0xFFFF900Cu); // 801EF3E4
  return; // 801EF3E8
}

// fn_801EF3EC
void f_801EF3EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF3EC
  c->r[0]=c->lr; // 801EF3F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF3F4
  c->r[3]=c->r[3]+0x00010000u; // 801EF3F8
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801EF3FC
  c->r[4]=c->r[4]+0x00000001u; // 801EF400
  c->lr=0x801EF408u; f_80076DF8(c); // 801EF404
  c->lr=0x801EF40Cu; f_8006E56C(c); // 801EF408
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF40C
  c->lr=c->r[0]; // 801EF410
  c->r[1]=c->r[1]+0x00000010u; // 801EF414
  return; // 801EF418
}

// fn_801EF41C
void f_801EF41C(Ctx* __restrict c) {
  c->r[5]=c->r[4]|c->r[4]; // 801EF41C
  c->r[4]=c->r[3]+0x00010000u; // 801EF420
  c->r[4]=R32(c->r[4]+0xFFFF900Cu); // 801EF424
  f_801EF42C(c); return; // 801EF428
}

// fn_801EF42C
void f_801EF42C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF42C
  c->r[3]=c->r[3]+0xFFFF90ACu; // 801EF430
  f_80212438(c); return; // 801EF434
}

// fn_801EF438
void f_801EF438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF438
  c->r[0]=c->lr; // 801EF43C
  W32(c->r[1]+0x00000084u,c->r[0]); // 801EF440
  c->r[12]=c->r[3]|c->r[3]; // 801EF444
  c->r[11]=c->r[4]|c->r[4]; // 801EF448
  if (!crb(c,6)) { goto L_801EF470; } // 801EF44C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801EF450
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801EF454
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801EF458
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801EF45C
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801EF460
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801EF464
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801EF468
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801EF46C
L_801EF470:;
  W32(c->r[1]+0x00000008u,c->r[3]); // 801EF470
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801EF474
  W32(c->r[1]+0x00000010u,c->r[5]); // 801EF478
  W32(c->r[1]+0x00000014u,c->r[6]); // 801EF47C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801EF480
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801EF484
  W32(c->r[1]+0x00000020u,c->r[9]); // 801EF488
  W32(c->r[1]+0x00000024u,c->r[10]); // 801EF48C
  c->r[6]=c->r[1]+0x00000068u; // 801EF490
  c->r[0]=0u+0x02000000u; // 801EF494
  W32(c->r[1]+0x00000068u,c->r[0]); // 801EF498
  c->r[0]=c->r[1]+0x00000088u; // 801EF49C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801EF4A0
  c->r[0]=c->r[1]+0x00000008u; // 801EF4A4
  W32(c->r[1]+0x00000070u,c->r[0]); // 801EF4A8
  c->r[3]=c->r[3]+0x00010000u; // 801EF4AC
  c->r[3]=c->r[3]+0xFFFF90ACu; // 801EF4B0
  c->r[4]=c->r[12]+0x00010000u; // 801EF4B4
  c->r[4]=R32(c->r[4]+0xFFFF900Cu); // 801EF4B8
  c->r[5]=c->r[11]|c->r[11]; // 801EF4BC
  c->lr=0x801EF4C4u; f_80212454(c); // 801EF4C0
  c->r[0]=R32(c->r[1]+0x00000084u); // 801EF4C4
  c->lr=c->r[0]; // 801EF4C8
  c->r[1]=c->r[1]+0x00000080u; // 801EF4CC
  return; // 801EF4D0
}

// fn_801EF4D4
void f_801EF4D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF4D4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801EF4D8
  c->r[3]=c->r[3]+c->r[0]; // 801EF4DC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF8134u); // 801EF4E0
  return; // 801EF4E4
}

// fn_801EF4E8
void f_801EF4E8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF4E8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801EF4EC
  c->r[3]=c->r[3]+c->r[0]; // 801EF4F0
  c->r[3]=R32(c->r[3]+0xFFFF813Cu); // 801EF4F4
  return; // 801EF4F8
}

// fn_801EF4FC
void f_801EF4FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF4FC
  c->r[0]=c->lr; // 801EF500
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF504
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF508
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF50C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF510
  c->r[29]=c->r[3]|c->r[3]; // 801EF514
  c->r[0]=0u+0x00000001u; // 801EF518
  c->r[30]=0u+0x00000000u; // 801EF51C
L_801EF520:;
  c->r[31]=0u+0x00000000u; // 801EF520
  cmps(c,0,(int32_t)c->r[0],0); // 801EF524
  if (crb(c,2)) { goto L_801EF544; } // 801EF528
  c->r[3]=c->r[29]|c->r[29]; // 801EF52C
  c->r[4]=c->r[30]|c->r[30]; // 801EF530
  c->lr=0x801EF538u; f_801EF4E8(c); // 801EF534
  cmps(c,0,(int32_t)c->r[3],0); // 801EF538
  if (crb(c,2)) { goto L_801EF544; } // 801EF53C
  c->r[31]=0u+0x00000001u; // 801EF540
L_801EF544:;
  c->r[0]=c->r[31]|c->r[31]; // 801EF544
  c->r[30]=c->r[30]+0x00000001u; // 801EF548
  cmps(c,0,(int32_t)c->r[30],2); // 801EF54C
  if (crb(c,0)) { IRQCHK(c); goto L_801EF520; } // 801EF550
  c->r[3]=c->r[31]|c->r[31]; // 801EF554
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF558
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF55C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF560
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF564
  c->lr=c->r[0]; // 801EF568
  c->r[1]=c->r[1]+0x00000020u; // 801EF56C
  return; // 801EF570
}

// fn_801EF574
void f_801EF574(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801EF574
  c->r[3]=c->r[3]+0x00010000u; // 801EF578
  W32(c->r[3]+0xFFFF8148u,c->r[0]); // 801EF57C
  return; // 801EF580
}

// fn_801EF584
void f_801EF584(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF584
  W16(c->r[3]+0xFFFF8144u,c->r[4]); // 801EF588
  return; // 801EF58C
}

// fn_801EF590
void f_801EF590(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF590
  c->r[0]=R8(c->r[3]+0xFFFF810Eu); // 801EF594
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801EF598
  c->r[3]=c->r[3]+c->r[0]; // 801EF59C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF8138u); // 801EF5A0
  return; // 801EF5A4
}

// fn_801EF5A8
void f_801EF5A8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF5A8
  W32(c->r[3]+0xFFFF901Cu,c->r[4]); // 801EF5AC
  return; // 801EF5B0
}

// fn_801EF5B4
void f_801EF5B4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF5B4
  c->r[3]=R32(c->r[3]+0xFFFF901Cu); // 801EF5B8
  return; // 801EF5BC
}

// fn_801EF5C0
void f_801EF5C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF5C0
  W32(c->r[3]+0xFFFF9024u,c->r[4]); // 801EF5C4
  return; // 801EF5C8
}

// fn_801EF5CC
void f_801EF5CC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF5CC
  W32(c->r[3]+0xFFFF9028u,c->r[4]); // 801EF5D0
  return; // 801EF5D4
}

// fn_801EF5D8
void f_801EF5D8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF5D8
  c->r[3]=R32(c->r[3]+0xFFFF9028u); // 801EF5DC
  return; // 801EF5E0
}

// fn_801EF5E4
void f_801EF5E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF5E4
  c->r[0]=c->lr; // 801EF5E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EF5EC
  c->r[11]=c->r[1]+0x00000030u; // 801EF5F0
  c->lr=0x801EF5F8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EF5F4
  c->r[30]=c->r[3]|c->r[3]; // 801EF5F8
  c->r[28]=c->r[4]|c->r[4]; // 801EF5FC
  c->r[27]=c->r[3]+0x00010000u; // 801EF600
  c->r[27]=c->r[27]+0xFFFF9138u; // 801EF604
  c->r[31]=0u+0x00000000u; // 801EF608
  c->r[29]=0u+0x00000001u; // 801EF60C
  goto L_801EF6E8; // 801EF610
L_801EF614:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801EF614
  cmps(c,0,(int32_t)c->r[0],64); // 801EF618
  if (!crb(c,2)) { goto L_801EF6D0; } // 801EF61C
  c->r[0]=R8(c->r[28]+0x00000001u); // 801EF620
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801EF624
  cmps(c,0,(int32_t)c->r[0],114); // 801EF628
  if (!crb(c,2)) { goto L_801EF6D0; } // 801EF62C
  c->r[28]=c->r[28]+0x00000002u; // 801EF630
  c->r[26]=c->r[28]|c->r[28]; // 801EF634
  c->r[3]=c->r[30]|c->r[30]; // 801EF638
  c->r[4]=c->r[28]|c->r[28]; // 801EF63C
  c->r[5]=0u+0x0000003Cu; // 801EF640
  c->lr=0x801EF648u; f_801EFEC4(c); // 801EF644
  c->r[24]=c->r[3]|c->r[3]; // 801EF648
  c->r[3]=c->r[3]+c->r[28]; // 801EF64C
  c->r[28]=c->r[3]+0x00000001u; // 801EF650
  c->r[25]=c->r[28]|c->r[28]; // 801EF654
  c->r[3]=c->r[30]|c->r[30]; // 801EF658
  c->r[4]=c->r[28]|c->r[28]; // 801EF65C
  c->r[5]=0u+0x0000003Eu; // 801EF660
  c->lr=0x801EF668u; f_801EFEC4(c); // 801EF664
  c->r[23]=c->r[3]|c->r[3]; // 801EF668
  c->r[4]=c->r[3]+c->r[28]; // 801EF66C
  c->r[28]=c->r[4]+0x00000001u; // 801EF670
  W8(c->r[27]+0x00000000u,c->r[29]); // 801EF674
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801EF678
  W8(c->r[27]+0x00000001u,c->r[0]); // 801EF67C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[24]; // 801EF680
  W8(c->r[27]+0x00000002u,c->r[0]); // 801EF684
  c->r[27]=c->r[27]+0x00000003u; // 801EF688
  c->r[3]=c->r[27]|c->r[27]; // 801EF68C
  c->r[4]=c->r[25]|c->r[25]; // 801EF690
  c->r[5]=c->r[23]|c->r[23]; // 801EF694
  c->lr=0x801EF69Cu; f_80005FB4(c); // 801EF698
  c->r[3]=c->r[27]|c->r[27]; // 801EF69C
  c->r[4]=c->r[23]|c->r[23]; // 801EF6A0
  c->lr=0x801EF6A8u; f_80359BCC(c); // 801EF6A4
  c->r[27]=c->r[27]+c->r[23]; // 801EF6A8
  c->r[3]=c->r[27]|c->r[27]; // 801EF6AC
  c->r[4]=c->r[26]|c->r[26]; // 801EF6B0
  c->r[5]=c->r[24]|c->r[24]; // 801EF6B4
  c->lr=0x801EF6BCu; f_80005FB4(c); // 801EF6B8
  c->r[3]=c->r[27]|c->r[27]; // 801EF6BC
  c->r[4]=c->r[24]|c->r[24]; // 801EF6C0
  c->lr=0x801EF6C8u; f_80359BCC(c); // 801EF6C4
  c->r[27]=c->r[27]+c->r[24]; // 801EF6C8
  goto L_801EF6E8; // 801EF6CC
L_801EF6D0:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801EF6D0
  c->r[28]=c->r[28]+0x00000001u; // 801EF6D4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801EF6D8
  W8(c->r[27]+0x00000000u,c->r[0]); // 801EF6DC
  c->r[27]=c->r[27]+0x00000001u; // 801EF6E0
  c->r[31]=c->r[31]+0x00000001u; // 801EF6E4
L_801EF6E8:;
  c->r[3]=R8(c->r[28]+0x00000000u); // 801EF6E8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 801EF6EC
  cmps(c,0,(int32_t)c->r[0],0); // 801EF6F0
  if (crb(c,2)) { goto L_801EF700; } // 801EF6F4
  cmps(c,0,(int32_t)c->r[31],31); // 801EF6F8
  if (crb(c,0)) { IRQCHK(c); goto L_801EF614; } // 801EF6FC
L_801EF700:;
  c->r[0]=0u+0x00000000u; // 801EF700
  W8(c->r[27]+0x00000000u,c->r[0]); // 801EF704
  c->r[3]=c->r[30]+0x00010000u; // 801EF708
  W8(c->r[3]+0xFFFF9157u,c->r[0]); // 801EF70C
  c->r[11]=c->r[1]+0x00000030u; // 801EF710
  c->lr=0x801EF718u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EF714
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EF718
  c->lr=c->r[0]; // 801EF71C
  c->r[1]=c->r[1]+0x00000030u; // 801EF720
  return; // 801EF724
}

// fn_801EF728
void f_801EF728(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF728
  c->r[3]=c->r[3]+0xFFFF9138u; // 801EF72C
  return; // 801EF730
}

// fn_801EF734
void f_801EF734(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF734
  c->r[3]=c->r[3]+0xFFFF9158u; // 801EF738
  c->r[5]=0u+0x00000030u; // 801EF73C
  f_802E9608(c); return; // 801EF740
}

// fn_801EF744
void f_801EF744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF744
  c->r[0]=c->lr; // 801EF748
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF74C
  c->r[3]=c->r[3]+0x00010000u; // 801EF750
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EF754
  cmps(c,0,(int32_t)c->r[3],0); // 801EF758
  if (crb(c,2)) { goto L_801EF77C; } // 801EF75C
  c->r[4]=0u+0x00000058u; // 801EF760
  c->r[5]=c->r[13]+0xFFFF9E28u; // 801EF764
  c->r[6]=c->r[13]+0xFFFF9E20u; // 801EF768
  c->r[7]=0u+0x00000000u; // 801EF76C
  c->lr=0x801EF774u; f_802F09F8(c); // 801EF770
  c->lr=0x801EF778u; f_80220C08(c); // 801EF774
  goto L_801EF780; // 801EF778
L_801EF77C:;
  c->r[3]=0u+0x00000001u; // 801EF77C
L_801EF780:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF780
  c->lr=c->r[0]; // 801EF784
  c->r[1]=c->r[1]+0x00000010u; // 801EF788
  return; // 801EF78C
}

// fn_801EF790
void f_801EF790(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF790
  c->r[3]=c->r[3]+0xFFFF9158u; // 801EF794
  return; // 801EF798
}

// fn_801EF79C
void f_801EF79C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF79C
  c->r[3]=R32(c->r[3]+0xFFFF9024u); // 801EF7A0
  return; // 801EF7A4
}

// fn_801EF7A8
void f_801EF7A8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF7A8
  c->r[3]=R32(c->r[3]+0xFFFF9098u); // 801EF7AC
  return; // 801EF7B0
}

// fn_801EF7B4
void f_801EF7B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF7B4
  c->r[0]=c->lr; // 801EF7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF7C0
  c->r[31]=c->r[3]|c->r[3]; // 801EF7C4
  c->r[3]=c->r[3]+0x00010000u; // 801EF7C8
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EF7CC
  cmps(c,0,(int32_t)c->r[3],0); // 801EF7D0
  if (crb(c,2)) { goto L_801EF7F8; } // 801EF7D4
  c->r[4]=0u+0x00000000u; // 801EF7D8
  c->r[5]=0u+0x00000002u; // 801EF7DC
  c->lr=0x801EF7E4u; f_8021B358(c); // 801EF7E0
  c->r[3]=c->r[31]+0x00010000u; // 801EF7E4
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EF7E8
  c->r[4]=0u+0x00000002u; // 801EF7EC
  c->r[5]=0u+0x00000002u; // 801EF7F0
  c->lr=0x801EF7F8u; f_8021B358(c); // 801EF7F4
L_801EF7F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF7F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF7FC
  c->lr=c->r[0]; // 801EF800
  c->r[1]=c->r[1]+0x00000010u; // 801EF804
  return; // 801EF808
}

// fn_801EF80C
void f_801EF80C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF80C
  c->r[0]=c->lr; // 801EF810
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF814
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF818
  c->r[31]=c->r[3]|c->r[3]; // 801EF81C
  c->r[3]=c->r[3]+0x00010000u; // 801EF820
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EF824
  cmps(c,0,(int32_t)c->r[3],0); // 801EF828
  if (crb(c,2)) { goto L_801EF85C; } // 801EF82C
  c->r[4]=0u+0x00000000u; // 801EF830
  c->r[5]=0u+0x00000001u; // 801EF834
  c->lr=0x801EF83Cu; f_8021B358(c); // 801EF838
  c->r[3]=c->r[31]+0x00010000u; // 801EF83C
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EF840
  c->r[4]=0u+0x00000002u; // 801EF844
  c->r[5]=0u+0x00000001u; // 801EF848
  c->lr=0x801EF850u; f_8021B358(c); // 801EF84C
  c->r[0]=0u+0x00000001u; // 801EF850
  c->r[3]=c->r[31]+0x00010000u; // 801EF854
  W32(c->r[3]+0xFFFF9020u,c->r[0]); // 801EF858
L_801EF85C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF85C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF860
  c->lr=c->r[0]; // 801EF864
  c->r[1]=c->r[1]+0x00000010u; // 801EF868
  return; // 801EF86C
}

// fn_801EF870
void f_801EF870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF870
  c->r[0]=c->lr; // 801EF874
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF878
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF87C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EF880
  c->r[30]=c->r[3]|c->r[3]; // 801EF884
  c->r[31]=0u+0x00000000u; // 801EF888
  c->r[3]=c->r[3]+0x00010000u; // 801EF88C
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EF890
  c->r[4]=0u+0x00000000u; // 801EF894
  c->lr=0x801EF89Cu; f_8021B3FC(c); // 801EF898
  cmps(c,0,(int32_t)c->r[3],0); // 801EF89C
  if (crb(c,2)) { goto L_801EF8C0; } // 801EF8A0
  c->r[3]=c->r[30]+0x00010000u; // 801EF8A4
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EF8A8
  c->r[4]=0u+0x00000002u; // 801EF8AC
  c->lr=0x801EF8B4u; f_8021B3FC(c); // 801EF8B0
  cmps(c,0,(int32_t)c->r[3],0); // 801EF8B4
  if (crb(c,2)) { goto L_801EF8C0; } // 801EF8B8
  c->r[31]=0u+0x00000001u; // 801EF8BC
L_801EF8C0:;
  c->r[3]=c->r[31]|c->r[31]; // 801EF8C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF8C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EF8C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF8CC
  c->lr=c->r[0]; // 801EF8D0
  c->r[1]=c->r[1]+0x00000010u; // 801EF8D4
  return; // 801EF8D8
}

// fn_801EF8DC
void f_801EF8DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF8DC
  c->r[0]=c->lr; // 801EF8E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EF8E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EF8E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EF8EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EF8F0
  c->r[29]=c->r[3]|c->r[3]; // 801EF8F4
  c->r[30]=c->r[4]|c->r[4]; // 801EF8F8
  c->r[3]=c->r[3]+0x00010000u; // 801EF8FC
  c->r[0]=R32(c->r[3]+0xFFFF9014u); // 801EF900
  cmpu(c,0,c->r[0],c->r[4]); // 801EF904
  if (crb(c,2)) { goto L_801EF95C; } // 801EF908
  c->r[31]=R32(c->r[3]+0xFFFF912Cu); // 801EF90C
  cmps(c,0,(int32_t)c->r[31],0); // 801EF910
  if (crb(c,2)) { goto L_801EF934; } // 801EF914
  c->lr=0x801EF91Cu; f_8006592C(c); // 801EF918
  c->r[4]=c->r[30]|c->r[30]; // 801EF91C
  c->r[5]=c->r[31]|c->r[31]; // 801EF920
  c->r[6]=0u+0xFFFFFFFFu; // 801EF924
  c->r[7]=0u+0x00000000u; // 801EF928
  c->lr=0x801EF930u; f_80048F20(c); // 801EF92C
  goto L_801EF954; // 801EF930
L_801EF934:;
  c->lr=0x801EF938u; f_8006592C(c); // 801EF934
  c->r[4]=c->r[30]|c->r[30]; // 801EF938
  c->r[5]=0u+0x00000000u; // 801EF93C
  c->r[6]=0u+0xFFFFFFFFu; // 801EF940
  c->r[7]=0u+0x00000000u; // 801EF944
  c->lr=0x801EF94Cu; f_80048F20(c); // 801EF948
  c->r[4]=c->r[29]+0x00010000u; // 801EF94C
  W32(c->r[4]+0xFFFF912Cu,c->r[3]); // 801EF950
L_801EF954:;
  c->r[3]=c->r[29]+0x00010000u; // 801EF954
  W32(c->r[3]+0xFFFF9014u,c->r[30]); // 801EF958
L_801EF95C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EF95C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EF960
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EF964
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EF968
  c->lr=c->r[0]; // 801EF96C
  c->r[1]=c->r[1]+0x00000020u; // 801EF970
  return; // 801EF974
}

// fn_801EF978
void f_801EF978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EF978
  c->r[0]=c->lr; // 801EF97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EF980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EF984
  c->r[31]=c->r[3]|c->r[3]; // 801EF988
  c->r[3]=c->r[3]+0x00010000u; // 801EF98C
  c->r[3]=R32(c->r[3]+0xFFFF912Cu); // 801EF990
  c->r[4]=0u+0x0000001Eu; // 801EF994
  c->lr=0x801EF99Cu; f_8005A908(c); // 801EF998
  c->r[0]=0u+0xFFFFFFFFu; // 801EF99C
  c->r[3]=c->r[31]+0x00010000u; // 801EF9A0
  W32(c->r[3]+0xFFFF9014u,c->r[0]); // 801EF9A4
  c->r[0]=0u+0x00000000u; // 801EF9A8
  W32(c->r[3]+0xFFFF912Cu,c->r[0]); // 801EF9AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EF9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EF9B4
  c->lr=c->r[0]; // 801EF9B8
  c->r[1]=c->r[1]+0x00000010u; // 801EF9BC
  return; // 801EF9C0
}

// fn_801EF9C4
void f_801EF9C4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF9C4
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EF9C8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801EF9CC
  f_80212794(c); return; // 801EF9D0
}

// fn_801EF9D4
void f_801EF9D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF9D4
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EF9D8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801EF9DC
  f_802126D4(c); return; // 801EF9E0
}

// fn_801EF9E4
void f_801EF9E4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF9E4
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EF9E8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801EF9EC
  f_80212694(c); return; // 801EF9F0
}

// fn_801EF9F4
void f_801EF9F4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EF9F4
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EF9F8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801EF9FC
  f_802127D4(c); return; // 801EFA00
}

// fn_801EFA04
void f_801EFA04(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EFA04
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EFA08
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801EFA0C
  f_80212734(c); return; // 801EFA10
}

// fn_801EFA14
void f_801EFA14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFA14
  c->r[0]=c->lr; // 801EFA18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFA1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFA20
  c->r[31]=c->r[3]|c->r[3]; // 801EFA24
  c->r[0]=R32(c->r[3]+0x000000B0u); // 801EFA28
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801EFA2C
  c->r[4]=0u+0x80430000u; // 801EFA30
  c->r[0]=c->r[4]+0x00001788u; // 801EFA34
  c->r[12]=c->r[0]+c->r[5]; // 801EFA38
  c->lr=0x801EFA40u; f_802F09D0(c); // 801EFA3C
  c->r[0]=c->r[0]|0x00000000u; // 801EFA40
  c->r[3]=c->r[31]|c->r[31]; // 801EFA44
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EFA48
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801EFA4C
  c->ctr=c->r[12]; // 801EFA50
  if (true) { c->lr=0x801EFA58u; dispatch(c,c->ctr); } // 801EFA54
  c->r[3]=c->r[31]+0x00010000u; // 801EFA58
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801EFA5C
  cmps(c,0,(int32_t)c->r[3],0); // 801EFA60
  if (crb(c,2)) { goto L_801EFA6C; } // 801EFA64
  c->lr=0x801EFA6Cu; f_80206B30(c); // 801EFA68
L_801EFA6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFA6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFA70
  c->lr=c->r[0]; // 801EFA74
  c->r[1]=c->r[1]+0x00000010u; // 801EFA78
  return; // 801EFA7C
}

// fn_801EFA80
void f_801EFA80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFA80
  c->r[0]=c->lr; // 801EFA84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EFA88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EFA8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EFA90
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EFA94
  c->r[29]=c->r[3]|c->r[3]; // 801EFA98
  c->r[3]=c->r[3]+0x00010000u; // 801EFA9C
  c->r[0]=R32(c->r[3]+0xFFFF9024u); // 801EFAA0
  cmps(c,0,(int32_t)c->r[0],3); // 801EFAA4
  if (crb(c,2)) { goto L_801EFB30; } // 801EFAA8
  c->r[0]=R32(c->r[3]+0xFFFF80D0u); // 801EFAAC
  cmps(c,0,(int32_t)c->r[0],0); // 801EFAB0
  if (!crb(c,2)) { goto L_801EFAF4; } // 801EFAB4
  c->lr=0x801EFABCu; f_80056B5C(c); // 801EFAB8
  c->r[30]=c->r[3]|c->r[3]; // 801EFABC
  c->r[3]=c->r[29]|c->r[29]; // 801EFAC0
  c->lr=0x801EFAC8u; f_80065DB4(c); // 801EFAC4
  c->lr=0x801EFACCu; f_80056B54(c); // 801EFAC8
  c->r[3]=0u+0x00000D70u; // 801EFACC
  c->lr=0x801EFAD4u; f_80047B64(c); // 801EFAD0
  c->r[31]=c->r[3]|c->r[3]; // 801EFAD4
  cmps(c,0,(int32_t)c->r[3],0); // 801EFAD8
  if (crb(c,2)) { goto L_801EFAE4; } // 801EFADC
  c->lr=0x801EFAE4u; f_801FB094(c); // 801EFAE0
L_801EFAE4:;
  c->r[3]=c->r[29]+0x00010000u; // 801EFAE4
  W32(c->r[3]+0xFFFF80D0u,c->r[31]); // 801EFAE8
  c->r[3]=c->r[30]|c->r[30]; // 801EFAEC
  c->lr=0x801EFAF4u; f_80056B54(c); // 801EFAF0
L_801EFAF4:;
  c->r[3]=c->r[29]|c->r[29]; // 801EFAF4
  c->lr=0x801EFAFCu; f_80065DB4(c); // 801EFAF8
  c->r[4]=c->r[3]|c->r[3]; // 801EFAFC
  c->r[3]=c->r[29]+0x00010000u; // 801EFB00
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801EFB04
  c->lr=0x801EFB0Cu; f_801FB384(c); // 801EFB08
  c->r[4]=c->r[29]+0x00010000u; // 801EFB0C
  c->r[3]=R32(c->r[4]+0xFFFF80D0u); // 801EFB10
  c->r[4]=c->r[4]+0xFFFF80D4u; // 801EFB14
  c->lr=0x801EFB1Cu; f_801FB43C(c); // 801EFB18
  c->r[3]=c->r[29]+0x00010000u; // 801EFB1C
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801EFB20
  c->r[4]=0u+0x00000001u; // 801EFB24
  c->lr=0x801EFB2Cu; f_801FB330(c); // 801EFB28
  goto L_801EFB38; // 801EFB2C
L_801EFB30:;
  c->r[0]=0u+0x00000000u; // 801EFB30
  W32(c->r[3]+0xFFFF80D0u,c->r[0]); // 801EFB34
L_801EFB38:;
  c->r[3]=c->r[29]|c->r[29]; // 801EFB38
  c->r[4]=0u+0x00000002u; // 801EFB3C
  c->lr=0x801EFB44u; f_801EFDF8(c); // 801EFB40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EFB44
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EFB48
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EFB4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EFB50
  c->lr=c->r[0]; // 801EFB54
  c->r[1]=c->r[1]+0x00000020u; // 801EFB58
  return; // 801EFB5C
}

// fn_801EFB60
void f_801EFB60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFB60
  c->r[0]=c->lr; // 801EFB64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFB68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFB6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EFB70
  c->r[30]=c->r[3]|c->r[3]; // 801EFB74
  c->lr=0x801EFB7Cu; f_801EF79C(c); // 801EFB78
  cmps(c,0,(int32_t)c->r[3],3); // 801EFB7C
  if (crb(c,2)) { goto L_801EFB9C; } // 801EFB80
  c->r[3]=c->r[30]+0x00010000u; // 801EFB84
  c->r[0]=R32(c->r[3]+0xFFFF80D0u); // 801EFB88
  cmps(c,0,(int32_t)c->r[0],0); // 801EFB8C
  if (!crb(c,2)) { goto L_801EFB9C; } // 801EFB90
  c->r[3]=0u+0x00000000u; // 801EFB94
  goto L_801EFBF0; // 801EFB98
L_801EFB9C:;
  c->r[3]=c->r[30]+0x00010000u; // 801EFB9C
  c->r[0]=R32(c->r[3]+0xFFFF909Cu); // 801EFBA0
  cmps(c,0,(int32_t)c->r[0],0); // 801EFBA4
  if (!crb(c,2)) { goto L_801EFBB4; } // 801EFBA8
  c->r[31]=0u+0x00000000u; // 801EFBAC
  goto L_801EFBEC; // 801EFBB0
L_801EFBB4:;
  c->r[31]=0u+0x00000000u; // 801EFBB4
  c->r[3]=c->r[30]|c->r[30]; // 801EFBB8
  c->lr=0x801EFBC0u; f_801EFE00(c); // 801EFBBC
  cmps(c,0,(int32_t)c->r[3],8); // 801EFBC0
  if (!crb(c,2)) { goto L_801EFBEC; } // 801EFBC4
  c->r[3]=c->r[30]+0x00010000u; // 801EFBC8
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EFBCC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EFBD0
  c->r[12]=R32(c->r[12]+0x00000020u); // 801EFBD4
  c->ctr=c->r[12]; // 801EFBD8
  if (true) { c->lr=0x801EFBE0u; dispatch(c,c->ctr); } // 801EFBDC
  cmps(c,0,(int32_t)c->r[3],0); // 801EFBE0
  if (crb(c,2)) { goto L_801EFBEC; } // 801EFBE4
  c->r[31]=0u+0x00000001u; // 801EFBE8
L_801EFBEC:;
  c->r[3]=c->r[31]|c->r[31]; // 801EFBEC
L_801EFBF0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFBF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EFBF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFBF8
  c->lr=c->r[0]; // 801EFBFC
  c->r[1]=c->r[1]+0x00000010u; // 801EFC00
  return; // 801EFC04
}

// fn_801EFC08
void f_801EFC08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFC08
  c->r[0]=c->lr; // 801EFC0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFC10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFC14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EFC18
  c->r[30]=c->r[3]|c->r[3]; // 801EFC1C
  c->r[3]=c->r[3]+0x00010000u; // 801EFC20
  c->r[0]=R32(c->r[3]+0xFFFF80D0u); // 801EFC24
  cmps(c,0,(int32_t)c->r[0],0); // 801EFC28
  if (crb(c,2)) { goto L_801EFC7C; } // 801EFC2C
  c->lr=0x801EFC34u; f_80056B5C(c); // 801EFC30
  c->r[31]=c->r[3]|c->r[3]; // 801EFC34
  c->r[3]=c->r[30]|c->r[30]; // 801EFC38
  c->lr=0x801EFC40u; f_80065DB4(c); // 801EFC3C
  c->lr=0x801EFC44u; f_80056B54(c); // 801EFC40
  c->r[3]=c->r[30]+0x00010000u; // 801EFC44
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801EFC48
  cmps(c,0,(int32_t)c->r[3],0); // 801EFC4C
  if (crb(c,2)) { goto L_801EFC68; } // 801EFC50
  c->r[4]=0u+0x00000001u; // 801EFC54
  c->r[12]=R32(c->r[3]+0x00000028u); // 801EFC58
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EFC5C
  c->ctr=c->r[12]; // 801EFC60
  if (true) { c->lr=0x801EFC68u; dispatch(c,c->ctr); } // 801EFC64
L_801EFC68:;
  c->r[3]=c->r[31]|c->r[31]; // 801EFC68
  c->lr=0x801EFC70u; f_80056B54(c); // 801EFC6C
  c->r[0]=0u+0x00000000u; // 801EFC70
  c->r[3]=c->r[30]+0x00010000u; // 801EFC74
  W32(c->r[3]+0xFFFF80D0u,c->r[0]); // 801EFC78
L_801EFC7C:;
  c->r[3]=c->r[30]+0x00010000u; // 801EFC7C
  c->r[0]=R32(c->r[3]+0xFFFF9008u); // 801EFC80
  cmps(c,0,(int32_t)c->r[0],0); // 801EFC84
  if (crb(c,2)) { goto L_801EFC98; } // 801EFC88
  c->r[3]=c->r[30]|c->r[30]; // 801EFC8C
  c->r[4]=0u+0x00000009u; // 801EFC90
  c->lr=0x801EFC98u; f_801EFDF8(c); // 801EFC94
L_801EFC98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFC98
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EFC9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFCA0
  c->lr=c->r[0]; // 801EFCA4
  c->r[1]=c->r[1]+0x00000010u; // 801EFCA8
  return; // 801EFCAC
}

// fn_801EFCB0
void f_801EFCB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801EFCB0
  c->r[0]=R32(c->r[3]+0xFFFF9008u); // 801EFCB4
  c->r[0]=cntlz(c->r[0]); // 801EFCB8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EFCBC
  return; // 801EFCC0
}

// fn_801EFCC4
void f_801EFCC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFCC4
  c->r[0]=c->lr; // 801EFCC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFCCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFCD0
  c->r[31]=c->r[3]|c->r[3]; // 801EFCD4
  c->r[4]=c->r[3]+0x00010000u; // 801EFCD8
  c->r[0]=R32(c->r[4]+0xFFFF9008u); // 801EFCDC
  cmps(c,0,(int32_t)c->r[0],0); // 801EFCE0
  if (crb(c,2)) { goto L_801EFCF4; } // 801EFCE4
  c->r[4]=0u+0x00000009u; // 801EFCE8
  c->lr=0x801EFCF0u; f_801EFDF8(c); // 801EFCEC
  goto L_801EFD10; // 801EFCF0
L_801EFCF4:;
  c->lr=0x801EFCF8u; f_8006E23C(c); // 801EFCF4
  c->r[4]=0u+0x00000001u; // 801EFCF8
  c->r[5]=0u+0x00000000u; // 801EFCFC
  c->lr=0x801EFD04u; f_801E9E38(c); // 801EFD00
  c->r[3]=c->r[31]|c->r[31]; // 801EFD04
  c->r[4]=0u+0x00000000u; // 801EFD08
  c->lr=0x801EFD10u; f_801EFDF8(c); // 801EFD0C
L_801EFD10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFD10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFD14
  c->lr=c->r[0]; // 801EFD18
  c->r[1]=c->r[1]+0x00000010u; // 801EFD1C
  return; // 801EFD20
}

// fn_801EFD24
void f_801EFD24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFD24
  c->r[0]=c->lr; // 801EFD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFD2C
  c->lr=0x801EFD34u; f_801EFE00(c); // 801EFD30
  c->r[0]=cntlz(c->r[3]); // 801EFD34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EFD38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFD3C
  c->lr=c->r[0]; // 801EFD40
  c->r[1]=c->r[1]+0x00000010u; // 801EFD44
  return; // 801EFD48
}

// fn_801EFD4C
void f_801EFD4C(Ctx* __restrict c) {
  return; // 801EFD4C
}

// fn_801EFD50
void f_801EFD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFD50
  c->r[0]=c->lr; // 801EFD54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFD58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFD5C
  c->r[31]=c->r[3]|c->r[3]; // 801EFD60
  c->lr=0x801EFD68u; f_801EF3E0(c); // 801EFD64
  cmpu(c,0,c->r[3],0x0000001Au); // 801EFD68
  if (!crb(c,2)) { goto L_801EFD90; } // 801EFD6C
  c->r[3]=c->r[31]+0x00010000u; // 801EFD70
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EFD74
  c->r[4]=0u+0x00000058u; // 801EFD78
  c->r[5]=c->r[13]+0xFFFF9E28u; // 801EFD7C
  c->r[6]=c->r[13]+0xFFFF9E20u; // 801EFD80
  c->r[7]=0u+0x00000000u; // 801EFD84
  c->lr=0x801EFD8Cu; f_802F09F8(c); // 801EFD88
  c->lr=0x801EFD90u; f_80220A9C(c); // 801EFD8C
L_801EFD90:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFD90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFD94
  c->lr=c->r[0]; // 801EFD98
  c->r[1]=c->r[1]+0x00000010u; // 801EFD9C
  return; // 801EFDA0
}

// fn_801EFDA4
void f_801EFDA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFDA4
  c->r[0]=c->lr; // 801EFDA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFDAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFDB0
  c->r[31]=c->r[3]|c->r[3]; // 801EFDB4
  c->lr=0x801EFDBCu; f_801EF3E0(c); // 801EFDB8
  cmpu(c,0,c->r[3],0x0000001Au); // 801EFDBC
  if (!crb(c,2)) { goto L_801EFDE4; } // 801EFDC0
  c->r[3]=c->r[31]+0x00010000u; // 801EFDC4
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801EFDC8
  c->r[4]=0u+0x00000058u; // 801EFDCC
  c->r[5]=c->r[13]+0xFFFF9E28u; // 801EFDD0
  c->r[6]=c->r[13]+0xFFFF9E20u; // 801EFDD4
  c->r[7]=0u+0x00000000u; // 801EFDD8
  c->lr=0x801EFDE0u; f_802F09F8(c); // 801EFDDC
  c->lr=0x801EFDE4u; f_80220B70(c); // 801EFDE0
L_801EFDE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFDE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFDE8
  c->lr=c->r[0]; // 801EFDEC
  c->r[1]=c->r[1]+0x00000010u; // 801EFDF0
  return; // 801EFDF4
}

// fn_801EFDF8
void f_801EFDF8(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 801EFDF8
  return; // 801EFDFC
}

// fn_801EFE00
void f_801EFE00(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000B0u); // 801EFE00
  return; // 801EFE04
}

// fn_801EFE08
void f_801EFE08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFE08
  c->r[0]=c->lr; // 801EFE0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFE10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFE14
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EFE18
  c->r[30]=c->r[3]|c->r[3]; // 801EFE1C
  c->r[31]=c->r[4]|c->r[4]; // 801EFE20
  c->r[5]=c->r[3]+0x00010000u; // 801EFE24
  c->r[3]=R32(c->r[5]+0xFFFF90A0u); // 801EFE28
  cmps(c,0,(int32_t)c->r[3],0); // 801EFE2C
  if (crb(c,2)) { goto L_801EFEAC; } // 801EFE30
  c->r[0]=R32(c->r[5]+0xFFFF90A4u); // 801EFE34
  cmps(c,0,(int32_t)c->r[0],0); // 801EFE38
  if (crb(c,2)) { goto L_801EFEAC; } // 801EFE3C
  c->r[0]=R32(c->r[5]+0xFFFF9018u); // 801EFE40
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801EFE44
  if (crb(c,2)) { goto L_801EFEAC; } // 801EFE48
  cmps(c,0,(int32_t)c->r[4],0); // 801EFE4C
  if (!crb(c,0)) { goto L_801EFE78; } // 801EFE50
  c->r[4]=0u+0x00000000u; // 801EFE54
  c->lr=0x801EFE5Cu; f_8021B46C(c); // 801EFE58
  c->r[3]=c->r[30]+0x00010000u; // 801EFE5C
  c->r[3]=R32(c->r[3]+0xFFFF90A4u); // 801EFE60
  c->r[4]=0u+0x00000000u; // 801EFE64
  c->lr=0x801EFE6Cu; f_8021B46C(c); // 801EFE68
  c->r[3]=c->r[30]+0x00010000u; // 801EFE6C
  W32(c->r[3]+0xFFFF9018u,c->r[31]); // 801EFE70
  goto L_801EFEAC; // 801EFE74
L_801EFE78:;
  c->r[4]=0u+0x00000001u; // 801EFE78
  c->lr=0x801EFE80u; f_8021B46C(c); // 801EFE7C
  c->r[3]=c->r[30]+0x00010000u; // 801EFE80
  c->r[3]=R32(c->r[3]+0xFFFF90A4u); // 801EFE84
  c->r[4]=0u+0x00000001u; // 801EFE88
  c->lr=0x801EFE90u; f_8021B46C(c); // 801EFE8C
  c->r[3]=c->r[30]+0x00010000u; // 801EFE90
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801EFE94
  c->r[4]=0u+0x00000003u; // 801EFE98
  c->r[5]=c->r[31]|c->r[31]; // 801EFE9C
  c->lr=0x801EFEA4u; f_8021B358(c); // 801EFEA0
  c->r[3]=c->r[30]+0x00010000u; // 801EFEA4
  W32(c->r[3]+0xFFFF9018u,c->r[31]); // 801EFEA8
L_801EFEAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFEAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EFEB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFEB4
  c->lr=c->r[0]; // 801EFEB8
  c->r[1]=c->r[1]+0x00000010u; // 801EFEBC
  return; // 801EFEC0
}

// fn_801EFEC4
void f_801EFEC4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801EFEC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801EFEC8
  goto L_801EFEEC; // 801EFECC
L_801EFED0:;
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801EFED0
  cmps(c,0,(int32_t)c->r[5],0); // 801EFED4
  if (!crb(c,2)) { goto L_801EFEE4; } // 801EFED8
  c->r[3]=0u+0xFFFFFFFFu; // 801EFEDC
  return; // 801EFEE0
L_801EFEE4:;
  c->r[3]=c->r[3]+0x00000001u; // 801EFEE4
  c->r[4]=c->r[4]+0x00000001u; // 801EFEE8
L_801EFEEC:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 801EFEEC
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801EFEF0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801EFEF4
  if (!crb(c,2)) { IRQCHK(c); goto L_801EFED0; } // 801EFEF8
  return; // 801EFEFC
}

// fn_801EFF00
void f_801EFF00(Ctx* __restrict c) {
  return; // 801EFF00
}

// fn_801EFF04
void f_801EFF04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFF04
  c->r[0]=c->lr; // 801EFF08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EFF0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EFF10
  c->r[31]=c->r[3]|c->r[3]; // 801EFF14
  c->r[3]=c->r[3]+0x00010000u; // 801EFF18
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801EFF1C
  c->lr=0x801EFF24u; f_8021264C(c); // 801EFF20
  cmps(c,0,(int32_t)c->r[3],0); // 801EFF24
  if (crb(c,2)) { goto L_801EFF38; } // 801EFF28
  c->r[3]=c->r[31]|c->r[31]; // 801EFF2C
  c->r[4]=0u+0x00000000u; // 801EFF30
  c->lr=0x801EFF38u; f_801EFDF8(c); // 801EFF34
L_801EFF38:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EFF38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EFF3C
  c->lr=c->r[0]; // 801EFF40
  c->r[1]=c->r[1]+0x00000010u; // 801EFF44
  return; // 801EFF48
}

// fn_801EFF4C
void f_801EFF4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EFF4C
  c->r[0]=c->lr; // 801EFF50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EFF54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EFF58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EFF5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EFF60
  c->r[29]=c->r[3]|c->r[3]; // 801EFF64
  c->lr=0x801EFF6Cu; f_801EF79C(c); // 801EFF68
  cmps(c,0,(int32_t)c->r[3],3); // 801EFF6C
  if (!crb(c,2)) { goto L_801EFF9C; } // 801EFF70
  c->r[3]=c->r[29]+0x00010000u; // 801EFF74
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801EFF78
  c->r[4]=0u+0x80430000u; // 801EFF7C
  c->r[4]=c->r[4]+0x00001B40u; // 801EFF80
  c->r[5]=0u+0x00000001u; // 801EFF84
  c->lr=0x801EFF8Cu; f_80076D08(c); // 801EFF88
  c->r[0]=0u+0x00000000u; // 801EFF8C
  c->r[3]=c->r[29]+0x00010000u; // 801EFF90
  W32(c->r[3]+0xFFFF9098u,c->r[0]); // 801EFF94
  goto L_801F000C; // 801EFF98
L_801EFF9C:;
  c->r[3]=c->r[29]+0x00010000u; // 801EFF9C
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801EFFA0
  c->r[4]=0u+0x80430000u; // 801EFFA4
  c->r[4]=c->r[4]+0x00001810u; // 801EFFA8
  c->r[5]=0u+0x00000001u; // 801EFFAC
  c->lr=0x801EFFB4u; f_80076D08(c); // 801EFFB0
  c->lr=0x801EFFB8u; f_80056B5C(c); // 801EFFB4
  c->r[30]=c->r[3]|c->r[3]; // 801EFFB8
  c->r[3]=c->r[29]|c->r[29]; // 801EFFBC
  c->lr=0x801EFFC4u; f_80065DB4(c); // 801EFFC0
  c->lr=0x801EFFC8u; f_80056B54(c); // 801EFFC4
  c->r[3]=0u+0x00010000u; // 801EFFC8
  c->r[3]=c->r[3]+0xFFFF8450u; // 801EFFCC
  c->lr=0x801EFFD4u; f_80047B64(c); // 801EFFD0
  c->r[31]=c->r[3]|c->r[3]; // 801EFFD4
  cmps(c,0,(int32_t)c->r[3],0); // 801EFFD8
  if (crb(c,2)) { goto L_801EFFE4; } // 801EFFDC
  c->lr=0x801EFFE4u; f_8025BBAC(c); // 801EFFE0
L_801EFFE4:;
  c->r[3]=c->r[29]+0x00010000u; // 801EFFE4
  W32(c->r[3]+0xFFFF9098u,c->r[31]); // 801EFFE8
  c->r[3]=c->r[30]|c->r[30]; // 801EFFEC
  c->lr=0x801EFFF4u; f_80056B54(c); // 801EFFF0
  c->r[3]=c->r[29]+0x00010000u; // 801EFFF4
  c->r[3]=R32(c->r[3]+0xFFFF9098u); // 801EFFF8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EFFFC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801F0000
  c->ctr=c->r[12]; // 801F0004
  if (true) { c->lr=0x801F000Cu; dispatch(c,c->ctr); } // 801F0008
L_801F000C:;
  c->r[3]=0u+0x00000000u; // 801F000C
  c->lr=0x801F0014u; f_8005D7F4(c); // 801F0010
  c->r[3]=c->r[29]|c->r[29]; // 801F0014
  c->r[4]=0u+0x00000004u; // 801F0018
  c->lr=0x801F0020u; f_801EFDF8(c); // 801F001C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F0020
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F0024
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F0028
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F002C
  c->lr=c->r[0]; // 801F0030
  c->r[1]=c->r[1]+0x00000020u; // 801F0034
  return; // 801F0038
}

// fn_801F003C
void f_801F003C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F003C
  c->r[0]=c->lr; // 801F0040
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0048
  c->r[31]=c->r[3]|c->r[3]; // 801F004C
  c->r[3]=c->r[3]+0x00010000u; // 801F0050
  c->r[3]=R32(c->r[3]+0xFFFF90A8u); // 801F0054
  c->lr=0x801F005Cu; f_8021264C(c); // 801F0058
  cmps(c,0,(int32_t)c->r[3],0); // 801F005C
  if (crb(c,2)) { goto L_801F00E8; } // 801F0060
  c->r[3]=c->r[31]+0x00010000u; // 801F0064
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801F0068
  c->lr=0x801F0070u; f_80075AF0(c); // 801F006C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0070
  if (crb(c,2)) { goto L_801F00E8; } // 801F0074
  c->r[3]=c->r[31]+0x00010000u; // 801F0078
  c->r[3]=R32(c->r[3]+0xFFFF9098u); // 801F007C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0080
  if (crb(c,2)) { goto L_801F0094; } // 801F0084
  c->lr=0x801F008Cu; f_8025BED4(c); // 801F0088
  cmps(c,0,(int32_t)c->r[3],0); // 801F008C
  if (crb(c,2)) { goto L_801F00E8; } // 801F0090
L_801F0094:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0094
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801F0098
  c->lr=0x801F00A0u; f_80076D58(c); // 801F009C
  c->lr=0x801F00A4u; f_8006E23C(c); // 801F00A0
  c->r[4]=0u+0x00000000u; // 801F00A4
  c->r[5]=0u+0x00000000u; // 801F00A8
  c->lr=0x801F00B0u; f_801E9E38(c); // 801F00AC
  c->r[3]=c->r[31]|c->r[31]; // 801F00B0
  c->lr=0x801F00B8u; f_801EF79C(c); // 801F00B4
  cmps(c,0,(int32_t)c->r[3],3); // 801F00B8
  if (!crb(c,2)) { goto L_801F00DC; } // 801F00BC
  c->r[0]=0u+0x00000001u; // 801F00C0
  c->r[3]=c->r[31]+0x00010000u; // 801F00C4
  W32(c->r[3]+0xFFFF9008u,c->r[0]); // 801F00C8
  c->r[3]=c->r[31]|c->r[31]; // 801F00CC
  c->r[4]=0u+0x0000001Au; // 801F00D0
  c->lr=0x801F00D8u; f_801EF234(c); // 801F00D4
  goto L_801F00E8; // 801F00D8
L_801F00DC:;
  c->r[3]=c->r[31]|c->r[31]; // 801F00DC
  c->r[4]=0u+0x00000003u; // 801F00E0
  c->lr=0x801F00E8u; f_801EFDF8(c); // 801F00E4
L_801F00E8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F00E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F00EC
  c->lr=c->r[0]; // 801F00F0
  c->r[1]=c->r[1]+0x00000010u; // 801F00F4
  return; // 801F00F8
}

// fn_801F00FC
void f_801F00FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F00FC
  c->r[0]=c->lr; // 801F0100
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0108
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F010C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F0110
  c->r[31]=c->r[3]|c->r[3]; // 801F0114
  c->lr=0x801F011Cu; f_80056B5C(c); // 801F0118
  c->r[29]=c->r[3]|c->r[3]; // 801F011C
  c->r[3]=c->r[31]|c->r[31]; // 801F0120
  c->lr=0x801F0128u; f_80065DB4(c); // 801F0124
  c->lr=0x801F012Cu; f_80056B54(c); // 801F0128
  c->r[3]=0u+0x000008E8u; // 801F012C
  c->lr=0x801F0134u; f_80047B64(c); // 801F0130
  c->r[30]=c->r[3]|c->r[3]; // 801F0134
  cmps(c,0,(int32_t)c->r[3],0); // 801F0138
  if (crb(c,2)) { goto L_801F0144; } // 801F013C
  c->lr=0x801F0144u; f_8021B02C(c); // 801F0140
L_801F0144:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0144
  W32(c->r[3]+0xFFFF90A0u,c->r[30]); // 801F0148
  c->r[3]=c->r[29]|c->r[29]; // 801F014C
  c->lr=0x801F0154u; f_80056B54(c); // 801F0150
  c->r[3]=c->r[31]|c->r[31]; // 801F0154
  c->r[4]=0u+0x0000003Cu; // 801F0158
  c->lr=0x801F0160u; f_801EF3EC(c); // 801F015C
  c->r[30]=c->r[3]|c->r[3]; // 801F0160
  c->r[3]=c->r[31]|c->r[31]; // 801F0164
  c->lr=0x801F016Cu; f_80065DB4(c); // 801F0168
  c->r[6]=c->r[3]|c->r[3]; // 801F016C
  c->r[3]=c->r[31]+0x00010000u; // 801F0170
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801F0174
  c->r[4]=c->r[30]|c->r[30]; // 801F0178
  c->r[5]=0u+0x00000000u; // 801F017C
  c->r[7]=0u+0x00000001u; // 801F0180
  c->r[8]=0u+0x00000000u; // 801F0184
  c->r[9]=0u+0x00000003u; // 801F0188
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F018C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801F0190
  c->ctr=c->r[12]; // 801F0194
  if (true) { c->lr=0x801F019Cu; dispatch(c,c->ctr); } // 801F0198
  c->r[3]=c->r[31]+0x00010000u; // 801F019C
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801F01A0
  c->r[4]=0u+0x00000088u; // 801F01A4
  c->r[5]=0u+0x00000000u; // 801F01A8
  c->lr=0x801F01B0u; f_8021B47C(c); // 801F01AC
  c->lr=0x801F01B4u; f_80056B5C(c); // 801F01B0
  c->r[29]=c->r[3]|c->r[3]; // 801F01B4
  c->r[3]=c->r[31]|c->r[31]; // 801F01B8
  c->lr=0x801F01C0u; f_80065DB4(c); // 801F01BC
  c->lr=0x801F01C4u; f_80056B54(c); // 801F01C0
  c->r[3]=0u+0x000008E8u; // 801F01C4
  c->lr=0x801F01CCu; f_80047B64(c); // 801F01C8
  c->r[30]=c->r[3]|c->r[3]; // 801F01CC
  cmps(c,0,(int32_t)c->r[3],0); // 801F01D0
  if (crb(c,2)) { goto L_801F01DC; } // 801F01D4
  c->lr=0x801F01DCu; f_8021B02C(c); // 801F01D8
L_801F01DC:;
  c->r[3]=c->r[31]+0x00010000u; // 801F01DC
  W32(c->r[3]+0xFFFF90A4u,c->r[30]); // 801F01E0
  c->r[3]=c->r[29]|c->r[29]; // 801F01E4
  c->lr=0x801F01ECu; f_80056B54(c); // 801F01E8
  c->r[3]=c->r[31]|c->r[31]; // 801F01EC
  c->r[4]=0u+0x0000003Bu; // 801F01F0
  c->lr=0x801F01F8u; f_801EF3EC(c); // 801F01F4
  c->r[30]=c->r[3]|c->r[3]; // 801F01F8
  c->r[3]=c->r[31]|c->r[31]; // 801F01FC
  c->lr=0x801F0204u; f_80065DB4(c); // 801F0200
  c->r[6]=c->r[3]|c->r[3]; // 801F0204
  c->r[3]=c->r[31]+0x00010000u; // 801F0208
  c->r[3]=R32(c->r[3]+0xFFFF90A4u); // 801F020C
  c->r[4]=c->r[30]|c->r[30]; // 801F0210
  c->r[5]=0u+0x00000000u; // 801F0214
  c->r[7]=0u+0x00000001u; // 801F0218
  c->r[8]=0u+0x00000000u; // 801F021C
  c->r[9]=0u+0x00000003u; // 801F0220
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F0224
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801F0228
  c->ctr=c->r[12]; // 801F022C
  if (true) { c->lr=0x801F0234u; dispatch(c,c->ctr); } // 801F0230
  c->r[3]=c->r[31]+0x00010000u; // 801F0234
  c->r[3]=R32(c->r[3]+0xFFFF90A4u); // 801F0238
  c->r[4]=0u+0x00000087u; // 801F023C
  c->r[5]=0u+0x00000000u; // 801F0240
  c->lr=0x801F0248u; f_8021B47C(c); // 801F0244
  c->r[3]=c->r[31]+0x00010000u; // 801F0248
  c->r[0]=R32(c->r[3]+0xFFFF9024u); // 801F024C
  cmps(c,0,(int32_t)c->r[0],0); // 801F0250
  if (crb(c,2)) { goto L_801F0268; } // 801F0254
  if (crb(c,0)) { goto L_801F02AC; } // 801F0258
  cmps(c,0,(int32_t)c->r[0],3); // 801F025C
  if (!crb(c,0)) { goto L_801F02AC; } // 801F0260
  goto L_801F02A0; // 801F0264
L_801F0268:;
  c->lr=0x801F026Cu; f_801ECCEC(c); // 801F0268
  c->lr=0x801F0270u; f_801ECCE4(c); // 801F026C
  c->r[0]=R8(c->r[3]+0x0000004Cu); // 801F0270
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801F0274
  cmps(c,0,(int32_t)c->r[0],0); // 801F0278
  if (!crb(c,2)) { goto L_801F0290; } // 801F027C
  c->r[3]=c->r[31]|c->r[31]; // 801F0280
  c->r[4]=0u+0x00000000u; // 801F0284
  c->lr=0x801F028Cu; f_801EF234(c); // 801F0288
  goto L_801F02AC; // 801F028C
L_801F0290:;
  c->r[3]=c->r[31]|c->r[31]; // 801F0290
  c->r[4]=0u+0x00000003u; // 801F0294
  c->lr=0x801F029Cu; f_801EF234(c); // 801F0298
  goto L_801F02AC; // 801F029C
L_801F02A0:;
  c->r[3]=c->r[31]|c->r[31]; // 801F02A0
  c->r[4]=0u+0x00000017u; // 801F02A4
  c->lr=0x801F02ACu; f_801EF234(c); // 801F02A8
L_801F02AC:;
  c->r[0]=0u+0x00000001u; // 801F02AC
  c->r[3]=c->r[31]+0x00010000u; // 801F02B0
  W32(c->r[3]+0xFFFF9008u,c->r[0]); // 801F02B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F02B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F02BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F02C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F02C4
  c->lr=c->r[0]; // 801F02C8
  c->r[1]=c->r[1]+0x00000020u; // 801F02CC
  return; // 801F02D0
}

// fn_801F02D4
void f_801F02D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F02D4
  c->r[0]=c->lr; // 801F02D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F02DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F02E0
  c->r[31]=c->r[3]|c->r[3]; // 801F02E4
  c->r[3]=c->r[3]+0x00010000u; // 801F02E8
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F02EC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F02F0
  c->r[12]=R32(c->r[12]+0x00000020u); // 801F02F4
  c->ctr=c->r[12]; // 801F02F8
  if (true) { c->lr=0x801F0300u; dispatch(c,c->ctr); } // 801F02FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F0300
  if (crb(c,2)) { goto L_801F0314; } // 801F0304
  c->r[3]=c->r[31]|c->r[31]; // 801F0308
  c->r[4]=0u+0x00000008u; // 801F030C
  c->lr=0x801F0314u; f_801EFDF8(c); // 801F0310
L_801F0314:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0314
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0318
  c->lr=c->r[0]; // 801F031C
  c->r[1]=c->r[1]+0x00000010u; // 801F0320
  return; // 801F0324
}

// fn_801F0328
void f_801F0328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0328
  c->r[0]=c->lr; // 801F032C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0330
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F0334
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F0338
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F033C
  c->r[31]=c->r[3]|c->r[3]; // 801F0340
  c->r[3]=c->r[3]+0x00010000u; // 801F0344
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F0348
  cmps(c,0,(int32_t)c->r[3],0); // 801F034C
  if (crb(c,2)) { goto L_801F036C; } // 801F0350
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0354
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F0358
  c->ctr=c->r[12]; // 801F035C
  if (true) { c->lr=0x801F0364u; dispatch(c,c->ctr); } // 801F0360
  cmps(c,0,(int32_t)c->r[3],0); // 801F0364
  if (crb(c,2)) { goto L_801F0C7C; } // 801F0368
L_801F036C:;
  c->r[3]=c->r[31]+0x00010000u; // 801F036C
  c->r[0]=R32(c->r[3]+0xFFFF909Cu); // 801F0370
  cmps(c,0,(int32_t)c->r[0],0); // 801F0374
  if (crb(c,2)) { goto L_801F03C8; } // 801F0378
  c->lr=0x801F0380u; f_80056B5C(c); // 801F037C
  c->r[30]=c->r[3]|c->r[3]; // 801F0380
  c->r[3]=c->r[31]|c->r[31]; // 801F0384
  c->lr=0x801F038Cu; f_80065DB4(c); // 801F0388
  c->lr=0x801F0390u; f_80056B54(c); // 801F038C
  c->r[3]=c->r[31]+0x00010000u; // 801F0390
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F0394
  cmps(c,0,(int32_t)c->r[3],0); // 801F0398
  if (crb(c,2)) { goto L_801F03B4; } // 801F039C
  c->r[4]=0u+0x00000001u; // 801F03A0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F03A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F03A8
  c->ctr=c->r[12]; // 801F03AC
  if (true) { c->lr=0x801F03B4u; dispatch(c,c->ctr); } // 801F03B0
L_801F03B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801F03B4
  c->lr=0x801F03BCu; f_80056B54(c); // 801F03B8
  c->r[0]=0u+0x00000000u; // 801F03BC
  c->r[3]=c->r[31]+0x00010000u; // 801F03C0
  W32(c->r[3]+0xFFFF909Cu,c->r[0]); // 801F03C4
L_801F03C8:;
  c->r[3]=c->r[31]|c->r[31]; // 801F03C8
  c->lr=0x801F03D0u; f_801EF3E0(c); // 801F03CC
  c->r[0]=c->r[3]+0x00000001u; // 801F03D0
  cmpu(c,0,c->r[0],0x0000001Bu); // 801F03D4
  if (crb(c,1)) { goto L_801F0C58; } // 801F03D8
  c->r[3]=0u+0x80470000u; // 801F03DC
  c->r[3]=c->r[3]+0x00004C74u; // 801F03E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F03E4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F03E8
  c->ctr=c->r[3]; // 801F03EC
  if (true) { switch (c->ctr) { case 0x801F03F4u: goto L_801F03F4; case 0x801F0480u: goto L_801F0480; case 0x801F04DCu: goto L_801F04DC; case 0x801F0538u: goto L_801F0538; case 0x801F0594u: goto L_801F0594; case 0x801F05F0u: goto L_801F05F0; case 0x801F064Cu: goto L_801F064C; case 0x801F06A8u: goto L_801F06A8; case 0x801F0704u: goto L_801F0704; case 0x801F0760u: goto L_801F0760; case 0x801F07BCu: goto L_801F07BC; case 0x801F0818u: goto L_801F0818; case 0x801F0874u: goto L_801F0874; case 0x801F08D0u: goto L_801F08D0; case 0x801F092Cu: goto L_801F092C; case 0x801F0988u: goto L_801F0988; case 0x801F09E4u: goto L_801F09E4; case 0x801F0A40u: goto L_801F0A40; case 0x801F0A9Cu: goto L_801F0A9C; case 0x801F0AF8u: goto L_801F0AF8; case 0x801F0B54u: goto L_801F0B54; case 0x801F0BB0u: goto L_801F0BB0; case 0x801F0C00u: goto L_801F0C00; case 0x801F0C58u: goto L_801F0C58; default: break; } dispatch(c,c->ctr); return; } // 801F03F0
L_801F03F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801F03F4
  c->r[4]=0u+0x00000000u; // 801F03F8
  c->lr=0x801F0400u; f_801EFDF8(c); // 801F03FC
  c->r[3]=0u+0x00000001u; // 801F0400
  c->lr=0x801F0408u; f_8005D7F4(c); // 801F0404
  c->r[0]=0u+0x00000000u; // 801F0408
  c->r[3]=c->r[31]+0x00010000u; // 801F040C
  W32(c->r[3]+0xFFFF9008u,c->r[0]); // 801F0410
  c->r[0]=R32(c->r[3]+0xFFFF9098u); // 801F0414
  cmps(c,0,(int32_t)c->r[0],0); // 801F0418
  if (crb(c,2)) { goto L_801F046C; } // 801F041C
  c->lr=0x801F0424u; f_80056B5C(c); // 801F0420
  c->r[30]=c->r[3]|c->r[3]; // 801F0424
  c->r[3]=c->r[31]|c->r[31]; // 801F0428
  c->lr=0x801F0430u; f_80065DB4(c); // 801F042C
  c->lr=0x801F0434u; f_80056B54(c); // 801F0430
  c->r[3]=c->r[31]+0x00010000u; // 801F0434
  c->r[3]=R32(c->r[3]+0xFFFF9098u); // 801F0438
  cmps(c,0,(int32_t)c->r[3],0); // 801F043C
  if (crb(c,2)) { goto L_801F0458; } // 801F0440
  c->r[4]=0u+0x00000001u; // 801F0444
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0448
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F044C
  c->ctr=c->r[12]; // 801F0450
  if (true) { c->lr=0x801F0458u; dispatch(c,c->ctr); } // 801F0454
L_801F0458:;
  c->r[3]=c->r[30]|c->r[30]; // 801F0458
  c->lr=0x801F0460u; f_80056B54(c); // 801F045C
  c->r[0]=0u+0x00000000u; // 801F0460
  c->r[3]=c->r[31]+0x00010000u; // 801F0464
  W32(c->r[3]+0xFFFF9098u,c->r[0]); // 801F0468
L_801F046C:;
  c->lr=0x801F0470u; f_8006E23C(c); // 801F046C
  c->r[4]=0u+0x00000001u; // 801F0470
  c->r[5]=0u+0x00000000u; // 801F0474
  c->lr=0x801F047Cu; f_801E9E38(c); // 801F0478
  goto L_801F0C7C; // 801F047C
L_801F0480:;
  c->lr=0x801F0484u; f_80056B5C(c); // 801F0480
  c->r[29]=c->r[3]|c->r[3]; // 801F0484
  c->r[3]=c->r[31]|c->r[31]; // 801F0488
  c->lr=0x801F0490u; f_80065DB4(c); // 801F048C
  c->lr=0x801F0494u; f_80056B54(c); // 801F0490
  c->r[3]=0u+0x00010000u; // 801F0494
  c->r[3]=c->r[3]+0xFFFF8208u; // 801F0498
  c->lr=0x801F04A0u; f_80047B64(c); // 801F049C
  c->r[30]=c->r[3]|c->r[3]; // 801F04A0
  cmps(c,0,(int32_t)c->r[3],0); // 801F04A4
  if (crb(c,2)) { goto L_801F04B0; } // 801F04A8
  c->lr=0x801F04B0u; f_8022075C(c); // 801F04AC
L_801F04B0:;
  c->r[3]=c->r[31]+0x00010000u; // 801F04B0
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F04B4
  c->r[3]=c->r[29]|c->r[29]; // 801F04B8
  c->lr=0x801F04C0u; f_80056B54(c); // 801F04BC
  c->r[3]=c->r[31]|c->r[31]; // 801F04C0
  c->r[4]=0u+0x00000030u; // 801F04C4
  c->lr=0x801F04CCu; f_801EF8DC(c); // 801F04C8
  c->r[3]=c->r[31]|c->r[31]; // 801F04CC
  c->r[4]=0u+0x00000000u; // 801F04D0
  c->lr=0x801F04D8u; f_801EFE08(c); // 801F04D4
  goto L_801F0C58; // 801F04D8
L_801F04DC:;
  c->lr=0x801F04E0u; f_80056B5C(c); // 801F04DC
  c->r[29]=c->r[3]|c->r[3]; // 801F04E0
  c->r[3]=c->r[31]|c->r[31]; // 801F04E4
  c->lr=0x801F04ECu; f_80065DB4(c); // 801F04E8
  c->lr=0x801F04F0u; f_80056B54(c); // 801F04EC
  c->r[3]=0u+0x00010000u; // 801F04F0
  c->r[3]=c->r[3]+0xFFFF81A0u; // 801F04F4
  c->lr=0x801F04FCu; f_80047B64(c); // 801F04F8
  c->r[30]=c->r[3]|c->r[3]; // 801F04FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F0500
  if (crb(c,2)) { goto L_801F050C; } // 801F0504
  c->lr=0x801F050Cu; f_801EBF44(c); // 801F0508
L_801F050C:;
  c->r[3]=c->r[31]+0x00010000u; // 801F050C
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0510
  c->r[3]=c->r[29]|c->r[29]; // 801F0514
  c->lr=0x801F051Cu; f_80056B54(c); // 801F0518
  c->r[3]=c->r[31]|c->r[31]; // 801F051C
  c->r[4]=0u+0x0000002Fu; // 801F0520
  c->lr=0x801F0528u; f_801EF8DC(c); // 801F0524
  c->r[3]=c->r[31]|c->r[31]; // 801F0528
  c->r[4]=0u+0x00000000u; // 801F052C
  c->lr=0x801F0534u; f_801EFE08(c); // 801F0530
  goto L_801F0C58; // 801F0534
L_801F0538:;
  c->lr=0x801F053Cu; f_80056B5C(c); // 801F0538
  c->r[29]=c->r[3]|c->r[3]; // 801F053C
  c->r[3]=c->r[31]|c->r[31]; // 801F0540
  c->lr=0x801F0548u; f_80065DB4(c); // 801F0544
  c->lr=0x801F054Cu; f_80056B54(c); // 801F0548
  c->r[3]=0u+0x00010000u; // 801F054C
  c->r[3]=c->r[3]+0xFFFF81A8u; // 801F0550
  c->lr=0x801F0558u; f_80047B64(c); // 801F0554
  c->r[30]=c->r[3]|c->r[3]; // 801F0558
  cmps(c,0,(int32_t)c->r[3],0); // 801F055C
  if (crb(c,2)) { goto L_801F0568; } // 801F0560
  c->lr=0x801F0568u; f_80210CA0(c); // 801F0564
L_801F0568:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0568
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F056C
  c->r[3]=c->r[29]|c->r[29]; // 801F0570
  c->lr=0x801F0578u; f_80056B54(c); // 801F0574
  c->r[3]=c->r[31]|c->r[31]; // 801F0578
  c->r[4]=0u+0x00000030u; // 801F057C
  c->lr=0x801F0584u; f_801EF8DC(c); // 801F0580
  c->r[3]=c->r[31]|c->r[31]; // 801F0584
  c->r[4]=0u+0x00000001u; // 801F0588
  c->lr=0x801F0590u; f_801EFE08(c); // 801F058C
  goto L_801F0C58; // 801F0590
L_801F0594:;
  c->lr=0x801F0598u; f_80056B5C(c); // 801F0594
  c->r[29]=c->r[3]|c->r[3]; // 801F0598
  c->r[3]=c->r[31]|c->r[31]; // 801F059C
  c->lr=0x801F05A4u; f_80065DB4(c); // 801F05A0
  c->lr=0x801F05A8u; f_80056B54(c); // 801F05A4
  c->r[3]=0u+0x00010000u; // 801F05A8
  c->r[3]=c->r[3]+0xFFFF82C0u; // 801F05AC
  c->lr=0x801F05B4u; f_80047B64(c); // 801F05B0
  c->r[30]=c->r[3]|c->r[3]; // 801F05B4
  cmps(c,0,(int32_t)c->r[3],0); // 801F05B8
  if (crb(c,2)) { goto L_801F05C4; } // 801F05BC
  c->lr=0x801F05C4u; f_80213380(c); // 801F05C0
L_801F05C4:;
  c->r[3]=c->r[31]+0x00010000u; // 801F05C4
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F05C8
  c->r[3]=c->r[29]|c->r[29]; // 801F05CC
  c->lr=0x801F05D4u; f_80056B54(c); // 801F05D0
  c->r[3]=c->r[31]|c->r[31]; // 801F05D4
  c->r[4]=0u+0x00000030u; // 801F05D8
  c->lr=0x801F05E0u; f_801EF8DC(c); // 801F05DC
  c->r[3]=c->r[31]|c->r[31]; // 801F05E0
  c->r[4]=0u+0x00000001u; // 801F05E4
  c->lr=0x801F05ECu; f_801EFE08(c); // 801F05E8
  goto L_801F0C58; // 801F05EC
L_801F05F0:;
  c->lr=0x801F05F4u; f_80056B5C(c); // 801F05F0
  c->r[29]=c->r[3]|c->r[3]; // 801F05F4
  c->r[3]=c->r[31]|c->r[31]; // 801F05F8
  c->lr=0x801F0600u; f_80065DB4(c); // 801F05FC
  c->lr=0x801F0604u; f_80056B54(c); // 801F0600
  c->r[3]=0u+0x00010000u; // 801F0604
  c->r[3]=c->r[3]+0xFFFF81A0u; // 801F0608
  c->lr=0x801F0610u; f_80047B64(c); // 801F060C
  c->r[30]=c->r[3]|c->r[3]; // 801F0610
  cmps(c,0,(int32_t)c->r[3],0); // 801F0614
  if (crb(c,2)) { goto L_801F0620; } // 801F0618
  c->lr=0x801F0620u; f_8022397C(c); // 801F061C
L_801F0620:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0620
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0624
  c->r[3]=c->r[29]|c->r[29]; // 801F0628
  c->lr=0x801F0630u; f_80056B54(c); // 801F062C
  c->r[3]=c->r[31]|c->r[31]; // 801F0630
  c->r[4]=0u+0x00000030u; // 801F0634
  c->lr=0x801F063Cu; f_801EF8DC(c); // 801F0638
  c->r[3]=c->r[31]|c->r[31]; // 801F063C
  c->r[4]=0u+0x00000001u; // 801F0640
  c->lr=0x801F0648u; f_801EFE08(c); // 801F0644
  goto L_801F0C58; // 801F0648
L_801F064C:;
  c->lr=0x801F0650u; f_80056B5C(c); // 801F064C
  c->r[29]=c->r[3]|c->r[3]; // 801F0650
  c->r[3]=c->r[31]|c->r[31]; // 801F0654
  c->lr=0x801F065Cu; f_80065DB4(c); // 801F0658
  c->lr=0x801F0660u; f_80056B54(c); // 801F065C
  c->r[3]=0u+0x00010000u; // 801F0660
  c->r[3]=c->r[3]+0xFFFF8228u; // 801F0664
  c->lr=0x801F066Cu; f_80047B64(c); // 801F0668
  c->r[30]=c->r[3]|c->r[3]; // 801F066C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0670
  if (crb(c,2)) { goto L_801F067C; } // 801F0674
  c->lr=0x801F067Cu; f_80214FA8(c); // 801F0678
L_801F067C:;
  c->r[3]=c->r[31]+0x00010000u; // 801F067C
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0680
  c->r[3]=c->r[29]|c->r[29]; // 801F0684
  c->lr=0x801F068Cu; f_80056B54(c); // 801F0688
  c->r[3]=c->r[31]|c->r[31]; // 801F068C
  c->r[4]=0u+0x00000030u; // 801F0690
  c->lr=0x801F0698u; f_801EF8DC(c); // 801F0694
  c->r[3]=c->r[31]|c->r[31]; // 801F0698
  c->r[4]=0u+0x00000001u; // 801F069C
  c->lr=0x801F06A4u; f_801EFE08(c); // 801F06A0
  goto L_801F0C58; // 801F06A4
L_801F06A8:;
  c->lr=0x801F06ACu; f_80056B5C(c); // 801F06A8
  c->r[29]=c->r[3]|c->r[3]; // 801F06AC
  c->r[3]=c->r[31]|c->r[31]; // 801F06B0
  c->lr=0x801F06B8u; f_80065DB4(c); // 801F06B4
  c->lr=0x801F06BCu; f_80056B54(c); // 801F06B8
  c->r[3]=0u+0x00010000u; // 801F06BC
  c->r[3]=c->r[3]+0xFFFF8228u; // 801F06C0
  c->lr=0x801F06C8u; f_80047B64(c); // 801F06C4
  c->r[30]=c->r[3]|c->r[3]; // 801F06C8
  cmps(c,0,(int32_t)c->r[3],0); // 801F06CC
  if (crb(c,2)) { goto L_801F06D8; } // 801F06D0
  c->lr=0x801F06D8u; f_8021EC60(c); // 801F06D4
L_801F06D8:;
  c->r[3]=c->r[31]+0x00010000u; // 801F06D8
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F06DC
  c->r[3]=c->r[29]|c->r[29]; // 801F06E0
  c->lr=0x801F06E8u; f_80056B54(c); // 801F06E4
  c->r[3]=c->r[31]|c->r[31]; // 801F06E8
  c->r[4]=0u+0x00000031u; // 801F06EC
  c->lr=0x801F06F4u; f_801EF8DC(c); // 801F06F0
  c->r[3]=c->r[31]|c->r[31]; // 801F06F4
  c->r[4]=0u+0x00000001u; // 801F06F8
  c->lr=0x801F0700u; f_801EFE08(c); // 801F06FC
  goto L_801F0C58; // 801F0700
L_801F0704:;
  c->lr=0x801F0708u; f_80056B5C(c); // 801F0704
  c->r[29]=c->r[3]|c->r[3]; // 801F0708
  c->r[3]=c->r[31]|c->r[31]; // 801F070C
  c->lr=0x801F0714u; f_80065DB4(c); // 801F0710
  c->lr=0x801F0718u; f_80056B54(c); // 801F0714
  c->r[3]=0u+0x00010000u; // 801F0718
  c->r[3]=c->r[3]+0xFFFF8228u; // 801F071C
  c->lr=0x801F0724u; f_80047B64(c); // 801F0720
  c->r[30]=c->r[3]|c->r[3]; // 801F0724
  cmps(c,0,(int32_t)c->r[3],0); // 801F0728
  if (crb(c,2)) { goto L_801F0734; } // 801F072C
  c->lr=0x801F0734u; f_8021EC60(c); // 801F0730
L_801F0734:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0734
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0738
  c->r[3]=c->r[29]|c->r[29]; // 801F073C
  c->lr=0x801F0744u; f_80056B54(c); // 801F0740
  c->r[3]=c->r[31]|c->r[31]; // 801F0744
  c->r[4]=0u+0x00000030u; // 801F0748
  c->lr=0x801F0750u; f_801EF8DC(c); // 801F074C
  c->r[3]=c->r[31]|c->r[31]; // 801F0750
  c->r[4]=0u+0x00000002u; // 801F0754
  c->lr=0x801F075Cu; f_801EFE08(c); // 801F0758
  goto L_801F0C58; // 801F075C
L_801F0760:;
  c->lr=0x801F0764u; f_80056B5C(c); // 801F0760
  c->r[29]=c->r[3]|c->r[3]; // 801F0764
  c->r[3]=c->r[31]|c->r[31]; // 801F0768
  c->lr=0x801F0770u; f_80065DB4(c); // 801F076C
  c->lr=0x801F0774u; f_80056B54(c); // 801F0770
  c->r[3]=0u+0x00010000u; // 801F0774
  c->r[3]=c->r[3]+0xFFFF8188u; // 801F0778
  c->lr=0x801F0780u; f_80047B64(c); // 801F077C
  c->r[30]=c->r[3]|c->r[3]; // 801F0780
  cmps(c,0,(int32_t)c->r[3],0); // 801F0784
  if (crb(c,2)) { goto L_801F0790; } // 801F0788
  c->lr=0x801F0790u; f_80232F2C(c); // 801F078C
L_801F0790:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0790
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0794
  c->r[3]=c->r[29]|c->r[29]; // 801F0798
  c->lr=0x801F07A0u; f_80056B54(c); // 801F079C
  c->r[3]=c->r[31]|c->r[31]; // 801F07A0
  c->r[4]=0u+0x00000030u; // 801F07A4
  c->lr=0x801F07ACu; f_801EF8DC(c); // 801F07A8
  c->r[3]=c->r[31]|c->r[31]; // 801F07AC
  c->r[4]=0u+0x00000002u; // 801F07B0
  c->lr=0x801F07B8u; f_801EFE08(c); // 801F07B4
  goto L_801F0C58; // 801F07B8
L_801F07BC:;
  c->lr=0x801F07C0u; f_80056B5C(c); // 801F07BC
  c->r[29]=c->r[3]|c->r[3]; // 801F07C0
  c->r[3]=c->r[31]|c->r[31]; // 801F07C4
  c->lr=0x801F07CCu; f_80065DB4(c); // 801F07C8
  c->lr=0x801F07D0u; f_80056B54(c); // 801F07CC
  c->r[3]=0u+0x00010000u; // 801F07D0
  c->r[3]=c->r[3]+0xFFFF8378u; // 801F07D4
  c->lr=0x801F07DCu; f_80047B64(c); // 801F07D8
  c->r[30]=c->r[3]|c->r[3]; // 801F07DC
  cmps(c,0,(int32_t)c->r[3],0); // 801F07E0
  if (crb(c,2)) { goto L_801F07EC; } // 801F07E4
  c->lr=0x801F07ECu; f_80231094(c); // 801F07E8
L_801F07EC:;
  c->r[3]=c->r[31]+0x00010000u; // 801F07EC
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F07F0
  c->r[3]=c->r[29]|c->r[29]; // 801F07F4
  c->lr=0x801F07FCu; f_80056B54(c); // 801F07F8
  c->r[3]=c->r[31]|c->r[31]; // 801F07FC
  c->r[4]=0u+0x00000030u; // 801F0800
  c->lr=0x801F0808u; f_801EF8DC(c); // 801F0804
  c->r[3]=c->r[31]|c->r[31]; // 801F0808
  c->r[4]=0u+0x00000002u; // 801F080C
  c->lr=0x801F0814u; f_801EFE08(c); // 801F0810
  goto L_801F0C58; // 801F0814
L_801F0818:;
  c->lr=0x801F081Cu; f_80056B5C(c); // 801F0818
  c->r[29]=c->r[3]|c->r[3]; // 801F081C
  c->r[3]=c->r[31]|c->r[31]; // 801F0820
  c->lr=0x801F0828u; f_80065DB4(c); // 801F0824
  c->lr=0x801F082Cu; f_80056B54(c); // 801F0828
  c->r[3]=0u+0x00010000u; // 801F082C
  c->r[3]=c->r[3]+0xFFFF82D0u; // 801F0830
  c->lr=0x801F0838u; f_80047B64(c); // 801F0834
  c->r[30]=c->r[3]|c->r[3]; // 801F0838
  cmps(c,0,(int32_t)c->r[3],0); // 801F083C
  if (crb(c,2)) { goto L_801F0848; } // 801F0840
  c->lr=0x801F0848u; f_8022C474(c); // 801F0844
L_801F0848:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0848
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F084C
  c->r[3]=c->r[29]|c->r[29]; // 801F0850
  c->lr=0x801F0858u; f_80056B54(c); // 801F0854
  c->r[3]=c->r[31]|c->r[31]; // 801F0858
  c->r[4]=0u+0x0000002Cu; // 801F085C
  c->lr=0x801F0864u; f_801EF8DC(c); // 801F0860
  c->r[3]=c->r[31]|c->r[31]; // 801F0864
  c->r[4]=0u+0x00000001u; // 801F0868
  c->lr=0x801F0870u; f_801EFE08(c); // 801F086C
  goto L_801F0C58; // 801F0870
L_801F0874:;
  c->lr=0x801F0878u; f_80056B5C(c); // 801F0874
  c->r[29]=c->r[3]|c->r[3]; // 801F0878
  c->r[3]=c->r[31]|c->r[31]; // 801F087C
  c->lr=0x801F0884u; f_80065DB4(c); // 801F0880
  c->lr=0x801F0888u; f_80056B54(c); // 801F0884
  c->r[3]=0u+0x00010000u; // 801F0888
  c->r[3]=c->r[3]+0xFFFF8180u; // 801F088C
  c->lr=0x801F0894u; f_80047B64(c); // 801F0890
  c->r[30]=c->r[3]|c->r[3]; // 801F0894
  cmps(c,0,(int32_t)c->r[3],0); // 801F0898
  if (crb(c,2)) { goto L_801F08A4; } // 801F089C
  c->lr=0x801F08A4u; f_802437AC(c); // 801F08A0
L_801F08A4:;
  c->r[3]=c->r[31]+0x00010000u; // 801F08A4
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F08A8
  c->r[3]=c->r[29]|c->r[29]; // 801F08AC
  c->lr=0x801F08B4u; f_80056B54(c); // 801F08B0
  c->r[3]=c->r[31]|c->r[31]; // 801F08B4
  c->r[4]=0u+0x00000030u; // 801F08B8
  c->lr=0x801F08C0u; f_801EF8DC(c); // 801F08BC
  c->r[3]=c->r[31]|c->r[31]; // 801F08C0
  c->r[4]=0u+0x00000002u; // 801F08C4
  c->lr=0x801F08CCu; f_801EFE08(c); // 801F08C8
  goto L_801F0C58; // 801F08CC
L_801F08D0:;
  c->lr=0x801F08D4u; f_80056B5C(c); // 801F08D0
  c->r[29]=c->r[3]|c->r[3]; // 801F08D4
  c->r[3]=c->r[31]|c->r[31]; // 801F08D8
  c->lr=0x801F08E0u; f_80065DB4(c); // 801F08DC
  c->lr=0x801F08E4u; f_80056B54(c); // 801F08E0
  c->r[3]=0u+0x00010000u; // 801F08E4
  c->r[3]=c->r[3]+0xFFFF8190u; // 801F08E8
  c->lr=0x801F08F0u; f_80047B64(c); // 801F08EC
  c->r[30]=c->r[3]|c->r[3]; // 801F08F0
  cmps(c,0,(int32_t)c->r[3],0); // 801F08F4
  if (crb(c,2)) { goto L_801F0900; } // 801F08F8
  c->lr=0x801F0900u; f_8024421C(c); // 801F08FC
L_801F0900:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0900
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0904
  c->r[3]=c->r[29]|c->r[29]; // 801F0908
  c->lr=0x801F0910u; f_80056B54(c); // 801F090C
  c->r[3]=c->r[31]|c->r[31]; // 801F0910
  c->r[4]=0u+0x00000030u; // 801F0914
  c->lr=0x801F091Cu; f_801EF8DC(c); // 801F0918
  c->r[3]=c->r[31]|c->r[31]; // 801F091C
  c->r[4]=0u+0x00000002u; // 801F0920
  c->lr=0x801F0928u; f_801EFE08(c); // 801F0924
  goto L_801F0C58; // 801F0928
L_801F092C:;
  c->lr=0x801F0930u; f_80056B5C(c); // 801F092C
  c->r[29]=c->r[3]|c->r[3]; // 801F0930
  c->r[3]=c->r[31]|c->r[31]; // 801F0934
  c->lr=0x801F093Cu; f_80065DB4(c); // 801F0938
  c->lr=0x801F0940u; f_80056B54(c); // 801F093C
  c->r[3]=0u+0x00010000u; // 801F0940
  c->r[3]=c->r[3]+0xFFFF8378u; // 801F0944
  c->lr=0x801F094Cu; f_80047B64(c); // 801F0948
  c->r[30]=c->r[3]|c->r[3]; // 801F094C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0950
  if (crb(c,2)) { goto L_801F095C; } // 801F0954
  c->lr=0x801F095Cu; f_80231094(c); // 801F0958
L_801F095C:;
  c->r[3]=c->r[31]+0x00010000u; // 801F095C
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0960
  c->r[3]=c->r[29]|c->r[29]; // 801F0964
  c->lr=0x801F096Cu; f_80056B54(c); // 801F0968
  c->r[3]=c->r[31]|c->r[31]; // 801F096C
  c->r[4]=0u+0x00000030u; // 801F0970
  c->lr=0x801F0978u; f_801EF8DC(c); // 801F0974
  c->r[3]=c->r[31]|c->r[31]; // 801F0978
  c->r[4]=0u+0x00000002u; // 801F097C
  c->lr=0x801F0984u; f_801EFE08(c); // 801F0980
  goto L_801F0C58; // 801F0984
L_801F0988:;
  c->lr=0x801F098Cu; f_80056B5C(c); // 801F0988
  c->r[29]=c->r[3]|c->r[3]; // 801F098C
  c->r[3]=c->r[31]|c->r[31]; // 801F0990
  c->lr=0x801F0998u; f_80065DB4(c); // 801F0994
  c->lr=0x801F099Cu; f_80056B54(c); // 801F0998
  c->r[3]=0u+0x00010000u; // 801F099C
  c->r[3]=c->r[3]+0xFFFF8190u; // 801F09A0
  c->lr=0x801F09A8u; f_80047B64(c); // 801F09A4
  c->r[30]=c->r[3]|c->r[3]; // 801F09A8
  cmps(c,0,(int32_t)c->r[3],0); // 801F09AC
  if (crb(c,2)) { goto L_801F09B8; } // 801F09B0
  c->lr=0x801F09B8u; f_802429A8(c); // 801F09B4
L_801F09B8:;
  c->r[3]=c->r[31]+0x00010000u; // 801F09B8
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F09BC
  c->r[3]=c->r[29]|c->r[29]; // 801F09C0
  c->lr=0x801F09C8u; f_80056B54(c); // 801F09C4
  c->r[3]=c->r[31]|c->r[31]; // 801F09C8
  c->r[4]=0u+0x00000030u; // 801F09CC
  c->lr=0x801F09D4u; f_801EF8DC(c); // 801F09D0
  c->r[3]=c->r[31]|c->r[31]; // 801F09D4
  c->r[4]=0u+0x00000002u; // 801F09D8
  c->lr=0x801F09E0u; f_801EFE08(c); // 801F09DC
  goto L_801F0C58; // 801F09E0
L_801F09E4:;
  c->lr=0x801F09E8u; f_80056B5C(c); // 801F09E4
  c->r[29]=c->r[3]|c->r[3]; // 801F09E8
  c->r[3]=c->r[31]|c->r[31]; // 801F09EC
  c->lr=0x801F09F4u; f_80065DB4(c); // 801F09F0
  c->lr=0x801F09F8u; f_80056B54(c); // 801F09F4
  c->r[3]=0u+0x00010000u; // 801F09F8
  c->r[3]=c->r[3]+0xFFFF81F8u; // 801F09FC
  c->lr=0x801F0A04u; f_80047B64(c); // 801F0A00
  c->r[30]=c->r[3]|c->r[3]; // 801F0A04
  cmps(c,0,(int32_t)c->r[3],0); // 801F0A08
  if (crb(c,2)) { goto L_801F0A14; } // 801F0A0C
  c->lr=0x801F0A14u; f_80241210(c); // 801F0A10
L_801F0A14:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0A14
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0A18
  c->r[3]=c->r[29]|c->r[29]; // 801F0A1C
  c->lr=0x801F0A24u; f_80056B54(c); // 801F0A20
  c->r[3]=c->r[31]|c->r[31]; // 801F0A24
  c->r[4]=0u+0x00000030u; // 801F0A28
  c->lr=0x801F0A30u; f_801EF8DC(c); // 801F0A2C
  c->r[3]=c->r[31]|c->r[31]; // 801F0A30
  c->r[4]=0u+0x00000002u; // 801F0A34
  c->lr=0x801F0A3Cu; f_801EFE08(c); // 801F0A38
  goto L_801F0C58; // 801F0A3C
L_801F0A40:;
  c->lr=0x801F0A44u; f_80056B5C(c); // 801F0A40
  c->r[29]=c->r[3]|c->r[3]; // 801F0A44
  c->r[3]=c->r[31]|c->r[31]; // 801F0A48
  c->lr=0x801F0A50u; f_80065DB4(c); // 801F0A4C
  c->lr=0x801F0A54u; f_80056B54(c); // 801F0A50
  c->r[3]=0u+0x00010000u; // 801F0A54
  c->r[3]=c->r[3]+0xFFFF81A8u; // 801F0A58
  c->lr=0x801F0A60u; f_80047B64(c); // 801F0A5C
  c->r[30]=c->r[3]|c->r[3]; // 801F0A60
  cmps(c,0,(int32_t)c->r[3],0); // 801F0A64
  if (crb(c,2)) { goto L_801F0A70; } // 801F0A68
  c->lr=0x801F0A70u; f_802486B4(c); // 801F0A6C
L_801F0A70:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0A70
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0A74
  c->r[3]=c->r[29]|c->r[29]; // 801F0A78
  c->lr=0x801F0A80u; f_80056B54(c); // 801F0A7C
  c->r[3]=c->r[31]|c->r[31]; // 801F0A80
  c->r[4]=0u+0x00000030u; // 801F0A84
  c->lr=0x801F0A8Cu; f_801EF8DC(c); // 801F0A88
  c->r[3]=c->r[31]|c->r[31]; // 801F0A8C
  c->r[4]=0u+0x00000002u; // 801F0A90
  c->lr=0x801F0A98u; f_801EFE08(c); // 801F0A94
  goto L_801F0C58; // 801F0A98
L_801F0A9C:;
  c->lr=0x801F0AA0u; f_80056B5C(c); // 801F0A9C
  c->r[29]=c->r[3]|c->r[3]; // 801F0AA0
  c->r[3]=c->r[31]|c->r[31]; // 801F0AA4
  c->lr=0x801F0AACu; f_80065DB4(c); // 801F0AA8
  c->lr=0x801F0AB0u; f_80056B54(c); // 801F0AAC
  c->r[3]=0u+0x00010000u; // 801F0AB0
  c->r[3]=c->r[3]+0xFFFF81A0u; // 801F0AB4
  c->lr=0x801F0ABCu; f_80047B64(c); // 801F0AB8
  c->r[30]=c->r[3]|c->r[3]; // 801F0ABC
  cmps(c,0,(int32_t)c->r[3],0); // 801F0AC0
  if (crb(c,2)) { goto L_801F0ACC; } // 801F0AC4
  c->lr=0x801F0ACCu; f_8026578C(c); // 801F0AC8
L_801F0ACC:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0ACC
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0AD0
  c->r[3]=c->r[29]|c->r[29]; // 801F0AD4
  c->lr=0x801F0ADCu; f_80056B54(c); // 801F0AD8
  c->r[3]=c->r[31]|c->r[31]; // 801F0ADC
  c->r[4]=0u+0x00000030u; // 801F0AE0
  c->lr=0x801F0AE8u; f_801EF8DC(c); // 801F0AE4
  c->r[3]=c->r[31]|c->r[31]; // 801F0AE8
  c->r[4]=0u+0x00000002u; // 801F0AEC
  c->lr=0x801F0AF4u; f_801EFE08(c); // 801F0AF0
  goto L_801F0C58; // 801F0AF4
L_801F0AF8:;
  c->lr=0x801F0AFCu; f_80056B5C(c); // 801F0AF8
  c->r[29]=c->r[3]|c->r[3]; // 801F0AFC
  c->r[3]=c->r[31]|c->r[31]; // 801F0B00
  c->lr=0x801F0B08u; f_80065DB4(c); // 801F0B04
  c->lr=0x801F0B0Cu; f_80056B54(c); // 801F0B08
  c->r[3]=0u+0x00010000u; // 801F0B0C
  c->r[3]=c->r[3]+0xFFFF8190u; // 801F0B10
  c->lr=0x801F0B18u; f_80047B64(c); // 801F0B14
  c->r[30]=c->r[3]|c->r[3]; // 801F0B18
  cmps(c,0,(int32_t)c->r[3],0); // 801F0B1C
  if (crb(c,2)) { goto L_801F0B28; } // 801F0B20
  c->lr=0x801F0B28u; f_80267500(c); // 801F0B24
L_801F0B28:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0B28
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0B2C
  c->r[3]=c->r[29]|c->r[29]; // 801F0B30
  c->lr=0x801F0B38u; f_80056B54(c); // 801F0B34
  c->r[3]=c->r[31]|c->r[31]; // 801F0B38
  c->r[4]=0u+0x00000030u; // 801F0B3C
  c->lr=0x801F0B44u; f_801EF8DC(c); // 801F0B40
  c->r[3]=c->r[31]|c->r[31]; // 801F0B44
  c->r[4]=0u+0x00000002u; // 801F0B48
  c->lr=0x801F0B50u; f_801EFE08(c); // 801F0B4C
  goto L_801F0C58; // 801F0B50
L_801F0B54:;
  c->lr=0x801F0B58u; f_80056B5C(c); // 801F0B54
  c->r[29]=c->r[3]|c->r[3]; // 801F0B58
  c->r[3]=c->r[31]|c->r[31]; // 801F0B5C
  c->lr=0x801F0B64u; f_80065DB4(c); // 801F0B60
  c->lr=0x801F0B68u; f_80056B54(c); // 801F0B64
  c->r[3]=0u+0x00010000u; // 801F0B68
  c->r[3]=c->r[3]+0xFFFF81C8u; // 801F0B6C
  c->lr=0x801F0B74u; f_80047B64(c); // 801F0B70
  c->r[30]=c->r[3]|c->r[3]; // 801F0B74
  cmps(c,0,(int32_t)c->r[3],0); // 801F0B78
  if (crb(c,2)) { goto L_801F0B84; } // 801F0B7C
  c->lr=0x801F0B84u; f_80266630(c); // 801F0B80
L_801F0B84:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0B84
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0B88
  c->r[3]=c->r[29]|c->r[29]; // 801F0B8C
  c->lr=0x801F0B94u; f_80056B54(c); // 801F0B90
  c->r[3]=c->r[31]|c->r[31]; // 801F0B94
  c->r[4]=0u+0x00000030u; // 801F0B98
  c->lr=0x801F0BA0u; f_801EF8DC(c); // 801F0B9C
  c->r[3]=c->r[31]|c->r[31]; // 801F0BA0
  c->r[4]=0u+0x00000002u; // 801F0BA4
  c->lr=0x801F0BACu; f_801EFE08(c); // 801F0BA8
  goto L_801F0C58; // 801F0BAC
L_801F0BB0:;
  c->lr=0x801F0BB4u; f_80056B5C(c); // 801F0BB0
  c->r[29]=c->r[3]|c->r[3]; // 801F0BB4
  c->r[3]=c->r[31]|c->r[31]; // 801F0BB8
  c->lr=0x801F0BC0u; f_80065DB4(c); // 801F0BBC
  c->lr=0x801F0BC4u; f_80056B54(c); // 801F0BC0
  c->r[3]=0u+0x00010000u; // 801F0BC4
  c->r[3]=c->r[3]+0xFFFF8260u; // 801F0BC8
  c->lr=0x801F0BD0u; f_80047B64(c); // 801F0BCC
  c->r[30]=c->r[3]|c->r[3]; // 801F0BD0
  cmps(c,0,(int32_t)c->r[3],0); // 801F0BD4
  if (crb(c,2)) { goto L_801F0BE0; } // 801F0BD8
  c->lr=0x801F0BE0u; f_80250780(c); // 801F0BDC
L_801F0BE0:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0BE0
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0BE4
  c->r[3]=c->r[29]|c->r[29]; // 801F0BE8
  c->lr=0x801F0BF0u; f_80056B54(c); // 801F0BEC
  c->r[3]=c->r[31]|c->r[31]; // 801F0BF0
  c->r[4]=0u+0x00000002u; // 801F0BF4
  c->lr=0x801F0BFCu; f_801EFE08(c); // 801F0BF8
  goto L_801F0C58; // 801F0BFC
L_801F0C00:;
  c->lr=0x801F0C04u; f_80056B5C(c); // 801F0C00
  c->r[29]=c->r[3]|c->r[3]; // 801F0C04
  c->r[3]=c->r[31]|c->r[31]; // 801F0C08
  c->lr=0x801F0C10u; f_80065DB4(c); // 801F0C0C
  c->lr=0x801F0C14u; f_80056B54(c); // 801F0C10
  c->r[3]=0u+0x00010000u; // 801F0C14
  c->r[3]=c->r[3]+0xFFFF8300u; // 801F0C18
  c->lr=0x801F0C20u; f_80047B64(c); // 801F0C1C
  c->r[30]=c->r[3]|c->r[3]; // 801F0C20
  cmps(c,0,(int32_t)c->r[3],0); // 801F0C24
  if (crb(c,2)) { goto L_801F0C30; } // 801F0C28
  c->lr=0x801F0C30u; f_8026831C(c); // 801F0C2C
L_801F0C30:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0C30
  W32(c->r[3]+0xFFFF909Cu,c->r[30]); // 801F0C34
  c->r[3]=c->r[29]|c->r[29]; // 801F0C38
  c->lr=0x801F0C40u; f_80056B54(c); // 801F0C3C
  c->r[3]=c->r[31]|c->r[31]; // 801F0C40
  c->r[4]=0u+0x00000030u; // 801F0C44
  c->lr=0x801F0C4Cu; f_801EF8DC(c); // 801F0C48
  c->r[3]=c->r[31]|c->r[31]; // 801F0C4C
  c->r[4]=0u+0x00000002u; // 801F0C50
  c->lr=0x801F0C58u; f_801EFE08(c); // 801F0C54
L_801F0C58:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0C58
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F0C5C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0C60
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801F0C64
  c->ctr=c->r[12]; // 801F0C68
  if (true) { c->lr=0x801F0C70u; dispatch(c,c->ctr); } // 801F0C6C
  c->r[3]=c->r[31]|c->r[31]; // 801F0C70
  c->r[4]=0u+0x00000005u; // 801F0C74
  c->lr=0x801F0C7Cu; f_801EFDF8(c); // 801F0C78
L_801F0C7C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F0C7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F0C80
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F0C84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0C88
  c->lr=c->r[0]; // 801F0C8C
  c->r[1]=c->r[1]+0x00000020u; // 801F0C90
  return; // 801F0C94
}

// fn_801F0C98
void f_801F0C98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0C98
  c->r[0]=c->lr; // 801F0C9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F0CA0
  c->r[11]=c->r[1]+0x00000020u; // 801F0CA4
  c->lr=0x801F0CACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F0CA8
  c->r[31]=c->r[3]|c->r[3]; // 801F0CAC
  c->lr=0x801F0CB4u; f_801EF3E0(c); // 801F0CB0
  c->r[30]=c->r[3]|c->r[3]; // 801F0CB4
  c->r[0]=c->r[3]+0x00010000u; // 801F0CB8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801F0CBC
  if (!crb(c,2)) { goto L_801F0D08; } // 801F0CC0
  c->r[3]=c->r[31]+0x00010000u; // 801F0CC4
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801F0CC8
  cmps(c,0,(int32_t)c->r[3],0); // 801F0CCC
  if (crb(c,2)) { goto L_801F0D08; } // 801F0CD0
  c->lr=0x801F0CD8u; f_801F1014(c); // 801F0CD4
  cmps(c,0,(int32_t)c->r[3],34); // 801F0CD8
  if (crb(c,2)) { goto L_801F0D08; } // 801F0CDC
  c->r[3]=c->r[31]+0x00010000u; // 801F0CE0
  c->r[3]=R32(c->r[3]+0xFFFF9098u); // 801F0CE4
  cmps(c,0,(int32_t)c->r[3],0); // 801F0CE8
  if (crb(c,2)) { goto L_801F0D08; } // 801F0CEC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0CF0
  c->r[12]=R32(c->r[12]+0x00000030u); // 801F0CF4
  c->ctr=c->r[12]; // 801F0CF8
  if (true) { c->lr=0x801F0D00u; dispatch(c,c->ctr); } // 801F0CFC
  cmps(c,0,(int32_t)c->r[3],0); // 801F0D00
  if (crb(c,2)) { goto L_801F0E7C; } // 801F0D04
L_801F0D08:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0D08
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F0D0C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0D10
  c->r[12]=R32(c->r[12]+0x00000030u); // 801F0D14
  c->ctr=c->r[12]; // 801F0D18
  if (true) { c->lr=0x801F0D20u; dispatch(c,c->ctr); } // 801F0D1C
  cmps(c,0,(int32_t)c->r[3],0); // 801F0D20
  if (crb(c,2)) { goto L_801F0E7C; } // 801F0D24
  c->r[3]=0u+0x00000001u; // 801F0D28
  c->lr=0x801F0D30u; f_80173F68(c); // 801F0D2C
  c->r[4]=0u+0x00000000u; // 801F0D30
  c->lr=0x801F0D38u; f_801748B8(c); // 801F0D34
  cmps(c,0,(int32_t)c->r[3],0); // 801F0D38
  if (crb(c,2)) { goto L_801F0E7C; } // 801F0D3C
  c->r[0]=c->r[30]+0x00010000u; // 801F0D40
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801F0D44
  if (!crb(c,2)) { goto L_801F0E58; } // 801F0D48
  c->r[3]=c->r[31]+0x00010000u; // 801F0D4C
  c->r[0]=R32(c->r[3]+0xFFFF80D0u); // 801F0D50
  cmps(c,0,(int32_t)c->r[0],0); // 801F0D54
  if (crb(c,2)) { goto L_801F0DA8; } // 801F0D58
  c->lr=0x801F0D60u; f_80056B5C(c); // 801F0D5C
  c->r[29]=c->r[3]|c->r[3]; // 801F0D60
  c->r[3]=c->r[31]|c->r[31]; // 801F0D64
  c->lr=0x801F0D6Cu; f_80065DB4(c); // 801F0D68
  c->lr=0x801F0D70u; f_80056B54(c); // 801F0D6C
  c->r[3]=c->r[31]+0x00010000u; // 801F0D70
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801F0D74
  cmps(c,0,(int32_t)c->r[3],0); // 801F0D78
  if (crb(c,2)) { goto L_801F0D94; } // 801F0D7C
  c->r[4]=0u+0x00000001u; // 801F0D80
  c->r[12]=R32(c->r[3]+0x00000028u); // 801F0D84
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F0D88
  c->ctr=c->r[12]; // 801F0D8C
  if (true) { c->lr=0x801F0D94u; dispatch(c,c->ctr); } // 801F0D90
L_801F0D94:;
  c->r[3]=c->r[29]|c->r[29]; // 801F0D94
  c->lr=0x801F0D9Cu; f_80056B54(c); // 801F0D98
  c->r[0]=0u+0x00000000u; // 801F0D9C
  c->r[3]=c->r[31]+0x00010000u; // 801F0DA0
  W32(c->r[3]+0xFFFF80D0u,c->r[0]); // 801F0DA4
L_801F0DA8:;
  c->r[28]=0u+0x00000000u; // 801F0DA8
  c->r[29]=c->r[31]|c->r[31]; // 801F0DAC
  c->r[30]=0u+0x00000000u; // 801F0DB0
L_801F0DB4:;
  c->r[3]=c->r[29]+0x00010000u; // 801F0DB4
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801F0DB8
  cmps(c,0,(int32_t)c->r[3],0); // 801F0DBC
  if (crb(c,2)) { goto L_801F0E10; } // 801F0DC0
  c->lr=0x801F0DC8u; f_8021B22C(c); // 801F0DC4
  c->lr=0x801F0DCCu; f_80056B5C(c); // 801F0DC8
  c->r[27]=c->r[3]|c->r[3]; // 801F0DCC
  c->r[3]=c->r[31]|c->r[31]; // 801F0DD0
  c->lr=0x801F0DD8u; f_80065DB4(c); // 801F0DD4
  c->lr=0x801F0DDCu; f_80056B54(c); // 801F0DD8
  c->r[3]=c->r[29]+0x00010000u; // 801F0DDC
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801F0DE0
  cmps(c,0,(int32_t)c->r[3],0); // 801F0DE4
  if (crb(c,2)) { goto L_801F0E00; } // 801F0DE8
  c->r[4]=0u+0x00000001u; // 801F0DEC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F0DF0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F0DF4
  c->ctr=c->r[12]; // 801F0DF8
  if (true) { c->lr=0x801F0E00u; dispatch(c,c->ctr); } // 801F0DFC
L_801F0E00:;
  c->r[3]=c->r[27]|c->r[27]; // 801F0E00
  c->lr=0x801F0E08u; f_80056B54(c); // 801F0E04
  c->r[3]=c->r[29]+0x00010000u; // 801F0E08
  W32(c->r[3]+0xFFFF90A0u,c->r[30]); // 801F0E0C
L_801F0E10:;
  c->r[29]=c->r[29]+0x00000004u; // 801F0E10
  c->r[28]=c->r[28]+0x00000001u; // 801F0E14
  cmps(c,0,(int32_t)c->r[28],2); // 801F0E18
  if (crb(c,0)) { IRQCHK(c); goto L_801F0DB4; } // 801F0E1C
  c->r[3]=c->r[31]+0x00010000u; // 801F0E20
  c->r[3]=R32(c->r[3]+0xFFFF9098u); // 801F0E24
  cmps(c,0,(int32_t)c->r[3],0); // 801F0E28
  if (crb(c,2)) { goto L_801F0E40; } // 801F0E2C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0E30
  c->r[12]=R32(c->r[12]+0x00000024u); // 801F0E34
  c->ctr=c->r[12]; // 801F0E38
  if (true) { c->lr=0x801F0E40u; dispatch(c,c->ctr); } // 801F0E3C
L_801F0E40:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0E40
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801F0E44
  c->lr=0x801F0E4Cu; f_80076CD4(c); // 801F0E48
  c->r[3]=c->r[31]+0x00010000u; // 801F0E4C
  c->r[3]=c->r[3]+0xFFFF902Cu; // 801F0E50
  c->lr=0x801F0E58u; f_80076C5C(c); // 801F0E54
L_801F0E58:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0E58
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F0E5C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0E60
  c->r[12]=R32(c->r[12]+0x00000024u); // 801F0E64
  c->ctr=c->r[12]; // 801F0E68
  if (true) { c->lr=0x801F0E70u; dispatch(c,c->ctr); } // 801F0E6C
  c->r[3]=c->r[31]|c->r[31]; // 801F0E70
  c->r[4]=0u+0x00000006u; // 801F0E74
  c->lr=0x801F0E7Cu; f_801EFDF8(c); // 801F0E78
L_801F0E7C:;
  c->r[11]=c->r[1]+0x00000020u; // 801F0E7C
  c->lr=0x801F0E84u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F0E80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F0E84
  c->lr=c->r[0]; // 801F0E88
  c->r[1]=c->r[1]+0x00000020u; // 801F0E8C
  return; // 801F0E90
}

// fn_801F0E94
void f_801F0E94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0E94
  c->r[0]=c->lr; // 801F0E98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0E9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0EA0
  c->r[31]=c->r[3]|c->r[3]; // 801F0EA4
  c->r[4]=c->r[3]+0x00010000u; // 801F0EA8
  c->r[0]=R32(c->r[4]+0xFFFF90A0u); // 801F0EAC
  cmps(c,0,(int32_t)c->r[0],0); // 801F0EB0
  if (crb(c,2)) { goto L_801F0F04; } // 801F0EB4
  c->r[0]=R32(c->r[4]+0xFFFF9020u); // 801F0EB8
  cmps(c,0,(int32_t)c->r[0],0); // 801F0EBC
  if (crb(c,2)) { goto L_801F0F04; } // 801F0EC0
  c->lr=0x801F0EC8u; f_801EF870(c); // 801F0EC4
  cmps(c,0,(int32_t)c->r[3],0); // 801F0EC8
  if (crb(c,2)) { goto L_801F0F04; } // 801F0ECC
  c->r[3]=c->r[31]+0x00010000u; // 801F0ED0
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801F0ED4
  c->r[4]=0u+0x00000000u; // 801F0ED8
  c->r[5]=0u+0x00000000u; // 801F0EDC
  c->lr=0x801F0EE4u; f_8021B358(c); // 801F0EE0
  c->r[3]=c->r[31]+0x00010000u; // 801F0EE4
  c->r[3]=R32(c->r[3]+0xFFFF90A0u); // 801F0EE8
  c->r[4]=0u+0x00000002u; // 801F0EEC
  c->r[5]=0u+0x00000000u; // 801F0EF0
  c->lr=0x801F0EF8u; f_8021B358(c); // 801F0EF4
  c->r[0]=0u+0x00000000u; // 801F0EF8
  c->r[3]=c->r[31]+0x00010000u; // 801F0EFC
  W32(c->r[3]+0xFFFF9020u,c->r[0]); // 801F0F00
L_801F0F04:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0F04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0F08
  c->lr=c->r[0]; // 801F0F0C
  c->r[1]=c->r[1]+0x00000010u; // 801F0F10
  return; // 801F0F14
}

// fn_801F0F18
void f_801F0F18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0F18
  c->r[0]=c->lr; // 801F0F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0F20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0F24
  c->r[31]=c->r[3]|c->r[3]; // 801F0F28
  c->r[3]=c->r[3]+0x00010000u; // 801F0F2C
  c->r[3]=R32(c->r[3]+0xFFFF909Cu); // 801F0F30
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0F34
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F0F38
  c->ctr=c->r[12]; // 801F0F3C
  if (true) { c->lr=0x801F0F44u; dispatch(c,c->ctr); } // 801F0F40
  c->r[3]=c->r[31]|c->r[31]; // 801F0F44
  c->lr=0x801F0F4Cu; f_801EF3E0(c); // 801F0F48
  c->r[4]=c->r[31]+0x00010000u; // 801F0F4C
  c->r[4]=R32(c->r[4]+0xFFFF9098u); // 801F0F50
  cmps(c,0,(int32_t)c->r[4],0); // 801F0F54
  if (crb(c,2)) { goto L_801F0F7C; } // 801F0F58
  c->r[0]=c->r[3]+0x00010000u; // 801F0F5C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801F0F60
  if (!crb(c,2)) { goto L_801F0F7C; } // 801F0F64
  c->r[3]=c->r[4]|c->r[4]; // 801F0F68
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F0F6C
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F0F70
  c->ctr=c->r[12]; // 801F0F74
  if (true) { c->lr=0x801F0F7Cu; dispatch(c,c->ctr); } // 801F0F78
L_801F0F7C:;
  c->r[3]=c->r[31]+0x00010000u; // 801F0F7C
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 801F0F80
  cmps(c,0,(int32_t)c->r[3],0); // 801F0F84
  if (crb(c,2)) { goto L_801F0F94; } // 801F0F88
  c->r[4]=0u+0x00000020u; // 801F0F8C
  c->lr=0x801F0F94u; f_801FB330(c); // 801F0F90
L_801F0F94:;
  c->r[3]=c->r[31]|c->r[31]; // 801F0F94
  c->r[4]=0u+0x00000007u; // 801F0F98
  c->lr=0x801F0FA0u; f_801EFDF8(c); // 801F0F9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F0FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F0FA4
  c->lr=c->r[0]; // 801F0FA8
  c->r[1]=c->r[1]+0x00000010u; // 801F0FAC
  return; // 801F0FB0
}

// fn_801F0FB4
void f_801F0FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F0FB4
  c->r[0]=c->lr; // 801F0FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F0FBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F0FC0
  c->r[31]=c->r[3]|c->r[3]; // 801F0FC4
  c->lr=0x801F0FCCu; f_801EF4FC(c); // 801F0FC8
  cmps(c,0,(int32_t)c->r[3],0); // 801F0FCC
  if (crb(c,2)) { goto L_801F1000; } // 801F0FD0
  c->r[4]=c->r[31]+0x00010000u; // 801F0FD4
  c->r[3]=R32(c->r[4]+0xFFFF909Cu); // 801F0FD8
  c->r[12]=R32(c->r[4]+0xFFFF9130u); // 801F0FDC
  c->ctr=c->r[12]; // 801F0FE0
  if (true) { c->lr=0x801F0FE8u; dispatch(c,c->ctr); } // 801F0FE4
  cmps(c,0,(int32_t)c->r[3],0); // 801F0FE8
  if (crb(c,2)) { goto L_801F1000; } // 801F0FEC
  c->r[3]=c->r[31]|c->r[31]; // 801F0FF0
  c->r[4]=c->r[31]+0x00010000u; // 801F0FF4
  c->r[4]=R32(c->r[4]+0xFFFF9010u); // 801F0FF8
  c->lr=0x801F1000u; f_801EF234(c); // 801F0FFC
L_801F1000:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1000
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1004
  c->lr=c->r[0]; // 801F1008
  c->r[1]=c->r[1]+0x00000010u; // 801F100C
  return; // 801F1010
}

// fn_801F1014
void f_801F1014(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000004u); // 801F1014
  return; // 801F1018
}

// fn_801F101C
void f_801F101C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F101C
  c->r[0]=c->lr; // 801F1020
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1028
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F102C
  c->r[0]=R32(c->r[13]+0xFFFFBB30u); // 801F1030
  cmps(c,0,(int32_t)c->r[0],0); // 801F1034
  if (!crb(c,2)) { goto L_801F1070; } // 801F1038
  c->lr=0x801F1040u; f_80056B5C(c); // 801F103C
  c->r[30]=c->r[3]|c->r[3]; // 801F1040
  c->lr=0x801F1048u; f_8005DEE8(c); // 801F1044
  c->lr=0x801F104Cu; f_80056B54(c); // 801F1048
  c->r[3]=0u+0x00000198u; // 801F104C
  c->lr=0x801F1054u; f_80047B64(c); // 801F1050
  c->r[31]=c->r[3]|c->r[3]; // 801F1054
  cmps(c,0,(int32_t)c->r[3],0); // 801F1058
  if (crb(c,2)) { goto L_801F1064; } // 801F105C
  c->lr=0x801F1064u; f_801F108C(c); // 801F1060
L_801F1064:;
  W32(c->r[13]+0xFFFFBB30u,c->r[31]); // 801F1064
  c->r[3]=c->r[30]|c->r[30]; // 801F1068
  c->lr=0x801F1070u; f_80056B54(c); // 801F106C
L_801F1070:;
  c->r[3]=R32(c->r[13]+0xFFFFBB30u); // 801F1070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1074
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F1078
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F107C
  c->lr=c->r[0]; // 801F1080
  c->r[1]=c->r[1]+0x00000010u; // 801F1084
  return; // 801F1088
}

// fn_801F108C
void f_801F108C(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 801F108C
  c->r[5]=c->r[3]|c->r[3]; // 801F1090
  c->r[4]=0u+0x00000000u; // 801F1094
  c->r[0]=0u+0x00000002u; // 801F1098
  c->ctr=c->r[0]; // 801F109C
L_801F10A0:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 801F10A0
  W32(c->r[5]+0x00000004u,c->r[4]); // 801F10A4
  W32(c->r[5]+0x00000008u,c->r[4]); // 801F10A8
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801F10AC
  W32(c->r[5]+0x00000010u,c->r[4]); // 801F10B0
  W32(c->r[5]+0x00000014u,c->r[4]); // 801F10B4
  W32(c->r[5]+0x00000018u,c->r[4]); // 801F10B8
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801F10BC
  W32(c->r[5]+0x00000020u,c->r[4]); // 801F10C0
  W32(c->r[5]+0x00000024u,c->r[4]); // 801F10C4
  W32(c->r[5]+0x00000028u,c->r[4]); // 801F10C8
  W32(c->r[5]+0x0000002Cu,c->r[4]); // 801F10CC
  W32(c->r[5]+0x00000030u,c->r[4]); // 801F10D0
  W32(c->r[5]+0x00000034u,c->r[4]); // 801F10D4
  W32(c->r[5]+0x00000038u,c->r[4]); // 801F10D8
  W32(c->r[5]+0x0000003Cu,c->r[4]); // 801F10DC
  W32(c->r[5]+0x00000040u,c->r[4]); // 801F10E0
  W32(c->r[5]+0x00000044u,c->r[4]); // 801F10E4
  W32(c->r[5]+0x00000048u,c->r[4]); // 801F10E8
  W32(c->r[5]+0x0000004Cu,c->r[4]); // 801F10EC
  W32(c->r[5]+0x00000050u,c->r[4]); // 801F10F0
  W32(c->r[5]+0x00000054u,c->r[4]); // 801F10F4
  W32(c->r[5]+0x00000058u,c->r[4]); // 801F10F8
  W32(c->r[5]+0x0000005Cu,c->r[4]); // 801F10FC
  W32(c->r[5]+0x00000060u,c->r[4]); // 801F1100
  W32(c->r[5]+0x00000064u,c->r[4]); // 801F1104
  W32(c->r[5]+0x00000068u,c->r[4]); // 801F1108
  W32(c->r[5]+0x0000006Cu,c->r[4]); // 801F110C
  W32(c->r[5]+0x00000070u,c->r[4]); // 801F1110
  W32(c->r[5]+0x00000074u,c->r[4]); // 801F1114
  W32(c->r[5]+0x00000078u,c->r[4]); // 801F1118
  W32(c->r[5]+0x0000007Cu,c->r[4]); // 801F111C
  W32(c->r[5]+0x00000080u,c->r[4]); // 801F1120
  W32(c->r[5]+0x00000084u,c->r[4]); // 801F1124
  W32(c->r[5]+0x00000088u,c->r[4]); // 801F1128
  W32(c->r[5]+0x0000008Cu,c->r[4]); // 801F112C
  W32(c->r[5]+0x00000090u,c->r[4]); // 801F1130
  W32(c->r[5]+0x00000094u,c->r[4]); // 801F1134
  W32(c->r[5]+0x00000098u,c->r[4]); // 801F1138
  W32(c->r[5]+0x0000009Cu,c->r[4]); // 801F113C
  W32(c->r[5]+0x000000A0u,c->r[4]); // 801F1140
  W32(c->r[5]+0x000000A4u,c->r[4]); // 801F1144
  W32(c->r[5]+0x000000A8u,c->r[4]); // 801F1148
  W32(c->r[5]+0x000000ACu,c->r[4]); // 801F114C
  W32(c->r[5]+0x000000B0u,c->r[4]); // 801F1150
  W32(c->r[5]+0x000000B4u,c->r[4]); // 801F1154
  W32(c->r[5]+0x000000B8u,c->r[4]); // 801F1158
  W32(c->r[5]+0x000000BCu,c->r[4]); // 801F115C
  c->r[5]=c->r[5]+0x000000C0u; // 801F1160
  c->r[6]=c->r[6]+0x00000030u; // 801F1164
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F10A0; } // 801F1168
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801F116C
  c->r[4]=c->r[3]+c->r[0]; // 801F1170
  c->r[0]=0u+0x00000000u; // 801F1174
  W32(c->r[4]+0x00000000u,c->r[0]); // 801F1178
  W32(c->r[4]+0x00000004u,c->r[0]); // 801F117C
  W32(c->r[4]+0x00000008u,c->r[0]); // 801F1180
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801F1184
  W32(c->r[3]+0x00000190u,c->r[0]); // 801F1188
  c->r[0]=0u+0x0000001Au; // 801F118C
  W32(c->r[3]+0x00000194u,c->r[0]); // 801F1190
  return; // 801F1194
}

// fn_801F1198
void f_801F1198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1198
  c->r[0]=c->lr; // 801F119C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F11A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F11A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F11A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F11AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F11B0
  c->r[28]=c->r[3]|c->r[3]; // 801F11B4
  c->r[30]=c->r[4]|c->r[4]; // 801F11B8
  c->lr=0x801F11C0u; f_80056B5C(c); // 801F11BC
  c->r[29]=c->r[3]|c->r[3]; // 801F11C0
  c->lr=0x801F11C8u; f_8005DEE8(c); // 801F11C4
  c->lr=0x801F11CCu; f_80056B54(c); // 801F11C8
  c->r[3]=0u+0x000000B8u; // 801F11CC
  c->lr=0x801F11D4u; f_80047B64(c); // 801F11D0
  c->r[31]=c->r[3]|c->r[3]; // 801F11D4
  cmps(c,0,(int32_t)c->r[3],0); // 801F11D8
  if (crb(c,2)) { goto L_801F11E4; } // 801F11DC
  c->lr=0x801F11E4u; f_801F1398(c); // 801F11E0
L_801F11E4:;
  c->r[30]=rotl(c->r[30],2)&0xFFFFFFFCu; // 801F11E4
  W32(c->r[28]+c->r[30],c->r[31]); // 801F11E8
  c->r[3]=c->r[29]|c->r[29]; // 801F11EC
  c->lr=0x801F11F4u; f_80056B54(c); // 801F11F0
  c->lr=0x801F11F8u; f_8004A07C(c); // 801F11F4
  c->r[6]=c->r[3]|c->r[3]; // 801F11F8
  c->r[3]=R32(c->r[28]+c->r[30]); // 801F11FC
  c->r[4]=0u+0x80430000u; // 801F1200
  c->r[4]=c->r[4]+0x00001CD8u; // 801F1204
  c->r[4]=R32(c->r[4]+c->r[30]); // 801F1208
  c->r[5]=0u+0x80470000u; // 801F120C
  c->r[5]=c->r[5]+0x00004F30u; // 801F1210
  c->r[5]=R32(c->r[5]+c->r[30]); // 801F1214
  c->lr=0x801F121Cu; f_80078D6C(c); // 801F1218
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F121C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1220
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1224
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F1228
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F122C
  c->lr=c->r[0]; // 801F1230
  c->r[1]=c->r[1]+0x00000020u; // 801F1234
  return; // 801F1238
}

// fn_801F123C
void f_801F123C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F123C
  c->r[0]=c->lr; // 801F1240
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1244
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1248
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F124C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F1250
  c->r[29]=c->r[3]|c->r[3]; // 801F1254
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801F1258
  c->r[3]=R32(c->r[3]+c->r[31]); // 801F125C
  c->lr=0x801F1264u; f_80078DF4(c); // 801F1260
  c->lr=0x801F1268u; f_80056B5C(c); // 801F1264
  c->r[30]=c->r[3]|c->r[3]; // 801F1268
  c->lr=0x801F1270u; f_8005DEE8(c); // 801F126C
  c->lr=0x801F1274u; f_80056B54(c); // 801F1270
  c->r[3]=R32(c->r[29]+c->r[31]); // 801F1274
  cmps(c,0,(int32_t)c->r[3],0); // 801F1278
  if (crb(c,2)) { goto L_801F1294; } // 801F127C
  c->r[4]=0u+0x00000001u; // 801F1280
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F1284
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F1288
  c->ctr=c->r[12]; // 801F128C
  if (true) { c->lr=0x801F1294u; dispatch(c,c->ctr); } // 801F1290
L_801F1294:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1294
  c->lr=0x801F129Cu; f_80056B54(c); // 801F1298
  c->r[0]=0u+0x00000000u; // 801F129C
  W32(c->r[29]+c->r[31],c->r[0]); // 801F12A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F12A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F12A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F12AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F12B0
  c->lr=c->r[0]; // 801F12B4
  c->r[1]=c->r[1]+0x00000020u; // 801F12B8
  return; // 801F12BC
}

// fn_801F12C0
void f_801F12C0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000190u); // 801F12C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F12C4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F12C8
  f_80065DB4(c); return; // 801F12CC
}

// fn_801F12D0
void f_801F12D0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000190u,c->r[4]); // 801F12D0
  return; // 801F12D4
}

// fn_801F12D8
void f_801F12D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F12D8
  c->r[0]=c->lr; // 801F12DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F12E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F12E4
  c->r[31]=c->r[3]|c->r[3]; // 801F12E8
  c->lr=0x801F12F0u; f_801F101C(c); // 801F12EC
  c->r[4]=c->r[31]|c->r[31]; // 801F12F0
  c->lr=0x801F12F8u; f_801F1198(c); // 801F12F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F12F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F12FC
  c->lr=c->r[0]; // 801F1300
  c->r[1]=c->r[1]+0x00000010u; // 801F1304
  return; // 801F1308
}

// fn_801F130C
void f_801F130C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F130C
  c->r[0]=c->lr; // 801F1310
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1314
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1318
  c->r[31]=c->r[3]|c->r[3]; // 801F131C
  c->lr=0x801F1324u; f_801F101C(c); // 801F1320
  c->r[4]=c->r[31]|c->r[31]; // 801F1324
  c->lr=0x801F132Cu; f_801F123C(c); // 801F1328
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F132C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1330
  c->lr=c->r[0]; // 801F1334
  c->r[1]=c->r[1]+0x00000010u; // 801F1338
  return; // 801F133C
}

// fn_801F1340
void f_801F1340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1340
  c->r[0]=c->lr; // 801F1344
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1348
  c->lr=0x801F1350u; f_801F101C(c); // 801F134C
  c->lr=0x801F1354u; f_801F12C0(c); // 801F1350
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1354
  c->lr=c->r[0]; // 801F1358
  c->r[1]=c->r[1]+0x00000010u; // 801F135C
  return; // 801F1360
}

// fn_801F1364
void f_801F1364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1364
  c->r[0]=c->lr; // 801F1368
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F136C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1370
  c->r[31]=c->r[3]|c->r[3]; // 801F1374
  c->lr=0x801F137Cu; f_801F101C(c); // 801F1378
  c->r[4]=c->r[31]|c->r[31]; // 801F137C
  c->lr=0x801F1384u; f_801F12D0(c); // 801F1380
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1384
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1388
  c->lr=c->r[0]; // 801F138C
  c->r[1]=c->r[1]+0x00000010u; // 801F1390
  return; // 801F1394
}

// fn_801F1398
void f_801F1398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1398
  c->r[0]=c->lr; // 801F139C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F13A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F13A4
  c->r[31]=c->r[3]|c->r[3]; // 801F13A8
  c->lr=0x801F13B0u; f_80078B74(c); // 801F13AC
  c->r[3]=0u+0x80470000u; // 801F13B0
  c->r[0]=c->r[3]+0x000050C0u; // 801F13B4
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F13B8
  c->r[3]=c->r[31]|c->r[31]; // 801F13BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F13C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F13C4
  c->lr=c->r[0]; // 801F13C8
  c->r[1]=c->r[1]+0x00000010u; // 801F13CC
  return; // 801F13D0
}

// fn_801F13D4
void f_801F13D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F13D4
  c->r[0]=c->lr; // 801F13D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F13DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F13E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F13E4
  c->r[30]=c->r[3]|c->r[3]; // 801F13E8
  c->r[31]=c->r[4]|c->r[4]; // 801F13EC
  cmps(c,0,(int32_t)c->r[3],0); // 801F13F0
  if (crb(c,2)) { goto L_801F1414; } // 801F13F4
  c->r[4]=0u+0x00000000u; // 801F13F8
  c->lr=0x801F1400u; f_80078BF0(c); // 801F13FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F1400
  cmps(c,0,(int32_t)c->r[0],0); // 801F1404
  if (!crb(c,1)) { goto L_801F1414; } // 801F1408
  c->r[3]=c->r[30]|c->r[30]; // 801F140C
  c->lr=0x801F1414u; f_80047B20(c); // 801F1410
L_801F1414:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1418
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F141C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1420
  c->lr=c->r[0]; // 801F1424
  c->r[1]=c->r[1]+0x00000010u; // 801F1428
  return; // 801F142C
}

// fn_801F1430
void f_801F1430(Ctx* __restrict c) {
  return; // 801F1430
}

// fn_801F1434
void f_801F1434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1434
  c->r[0]=c->lr; // 801F1438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F143C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1440
  c->r[31]=c->r[3]|c->r[3]; // 801F1444
  c->r[0]=R32(c->r[3]+0x00000A58u); // 801F1448
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801F144C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1450
  if (!crb(c,2)) { goto L_801F14D8; } // 801F1454
  c->r[3]=c->r[3]+0x00000024u; // 801F1458
  c->r[4]=0u+0x00000000u; // 801F145C
  c->r[5]=0u+0x00000000u; // 801F1460
  c->lr=0x801F1468u; f_80052E14(c); // 801F1464
  c->r[3]=c->r[31]+0x00000024u; // 801F1468
  c->r[4]=0u+0x00000001u; // 801F146C
  c->r[5]=0u+0x00000000u; // 801F1470
  c->lr=0x801F1478u; f_80052E14(c); // 801F1474
  c->r[3]=c->r[31]+0x00000024u; // 801F1478
  c->r[4]=0u+0x00000002u; // 801F147C
  c->r[5]=0u+0x00000000u; // 801F1480
  c->lr=0x801F1488u; f_80052E14(c); // 801F1484
  c->r[3]=c->r[31]+0x00000024u; // 801F1488
  c->r[4]=0u+0x00000003u; // 801F148C
  c->r[5]=0u+0x00000000u; // 801F1490
  c->lr=0x801F1498u; f_80052E14(c); // 801F1494
  c->r[3]=c->r[31]+0x00000024u; // 801F1498
  c->r[4]=0u+0x00000004u; // 801F149C
  c->r[5]=0u+0x00000000u; // 801F14A0
  c->lr=0x801F14A8u; f_80052E14(c); // 801F14A4
  c->r[3]=c->r[31]+0x00000024u; // 801F14A8
  c->r[4]=0u+0x00000005u; // 801F14AC
  c->r[5]=0u+0x00000000u; // 801F14B0
  c->lr=0x801F14B8u; f_80052E14(c); // 801F14B4
  c->r[0]=0u+0x00000000u; // 801F14B8
  W32(c->r[31]+0x00000E34u,c->r[0]); // 801F14BC
  c->r[3]=c->r[31]+0x00000024u; // 801F14C0
  c->r[4]=0u+0x00000000u; // 801F14C4
  c->lr=0x801F14CCu; f_80053794(c); // 801F14C8
  c->r[0]=R32(c->r[31]+0x00000A58u); // 801F14CC
  c->r[0]=c->r[0]|0x00000001u; // 801F14D0
  W32(c->r[31]+0x00000A58u,c->r[0]); // 801F14D4
L_801F14D8:;
  c->r[3]=c->r[31]|c->r[31]; // 801F14D8
  c->r[4]=0u+0x00000001u; // 801F14DC
  c->lr=0x801F14E4u; f_800897D4(c); // 801F14E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F14E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F14E8
  c->lr=c->r[0]; // 801F14EC
  c->r[1]=c->r[1]+0x00000010u; // 801F14F0
  return; // 801F14F4
}

// fn_801F14F8
void f_801F14F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F14F8
  c->r[0]=c->lr; // 801F14FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1500
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1504
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F1508
  c->r[30]=c->r[3]|c->r[3]; // 801F150C
  c->r[4]=c->r[3]+0x00000A5Cu; // 801F1510
  c->r[5]=c->r[3]+0x000008B4u; // 801F1514
  c->lr=0x801F151Cu; f_8007FD18(c); // 801F1518
  c->r[3]=c->r[30]+0x00000A74u; // 801F151C
  c->r[4]=c->r[30]+0x00000A5Cu; // 801F1520
  c->lr=0x801F1528u; f_8004A65C(c); // 801F1524
  c->r[4]=c->r[3]|c->r[3]; // 801F1528
  c->r[3]=c->r[30]+0x00000A68u; // 801F152C
  c->lr=0x801F1534u; f_8004A65C(c); // 801F1530
  c->r[3]=c->r[30]+0x00000024u; // 801F1534
  c->r[4]=c->r[30]+0x00000A5Cu; // 801F1538
  c->lr=0x801F1540u; f_8005658C(c); // 801F153C
  c->r[3]=c->r[30]+0x000008BCu; // 801F1540
  c->r[4]=c->r[30]+0x00000A94u; // 801F1544
  c->lr=0x801F154Cu; f_800AAEE0(c); // 801F1548
  c->r[3]=c->r[30]+0x00000AACu; // 801F154C
  c->r[4]=c->r[30]+0x00000A94u; // 801F1550
  c->lr=0x801F1558u; f_8004A65C(c); // 801F1554
  c->r[4]=c->r[3]|c->r[3]; // 801F1558
  c->r[3]=c->r[30]+0x00000AA0u; // 801F155C
  c->lr=0x801F1564u; f_8004A65C(c); // 801F1560
  c->r[3]=c->r[30]+0x00000024u; // 801F1564
  c->r[4]=c->r[30]+0x00000A94u; // 801F1568
  c->lr=0x801F1570u; f_80056594(c); // 801F156C
  c->lr=0x801F1574u; f_8007B524(c); // 801F1570
  c->r[4]=0u+0x00000004u; // 801F1574
  c->r[5]=c->r[30]+0x00000A74u; // 801F1578
  c->lr=0x801F1580u; f_800A0984(c); // 801F157C
  W32(c->r[30]+0x00000A4Cu,c->r[3]); // 801F1580
  c->r[3]=c->r[30]|c->r[30]; // 801F1584
  {uint32_t ea=c->r[2]+0xFFFF9548u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1588
  c->lr=0x801F1590u; f_80078A18(c); // 801F158C
  c->r[3]=c->r[30]|c->r[30]; // 801F1590
  {uint32_t ea=c->r[2]+0xFFFF954Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1594
  c->f[2]=c->f[1]; // 801F1598
  c->lr=0x801F15A0u; f_80078A28(c); // 801F159C
  c->r[3]=c->r[30]|c->r[30]; // 801F15A0
  c->r[4]=0u+0x00000000u; // 801F15A4
  c->r[5]=0u+0x00000001u; // 801F15A8
  c->r[6]=0u+0x00000000u; // 801F15AC
  c->lr=0x801F15B4u; f_800787A8(c); // 801F15B0
  c->r[31]=0u+0x00000000u; // 801F15B4
  W32(c->r[30]+0x000009E8u,c->r[31]); // 801F15B8
  W32(c->r[30]+0x000009F8u,c->r[31]); // 801F15BC
  W32(c->r[30]+0x00000AB8u,c->r[31]); // 801F15C0
  W32(c->r[30]+0x00000A80u,c->r[31]); // 801F15C4
  c->r[3]=c->r[30]|c->r[30]; // 801F15C8
  c->r[4]=0u+0x00000000u; // 801F15CC
  c->lr=0x801F15D4u; f_80089840(c); // 801F15D0
  c->r[3]=c->r[30]|c->r[30]; // 801F15D4
  c->r[4]=0u+0x00000001u; // 801F15D8
  c->lr=0x801F15E0u; f_80089840(c); // 801F15DC
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F15E0
  {uint32_t ea=c->r[30]+0x00000A88u; WF32(ea,c->f[0]);} // 801F15E4
  {uint32_t ea=c->r[30]+0x00000ABCu; WF32(ea,c->f[0]);} // 801F15E8
  {uint32_t ea=c->r[30]+0x00000A30u; WF32(ea,c->f[0]);} // 801F15EC
  {uint32_t ea=c->r[30]+0x00000A34u; WF32(ea,c->f[0]);} // 801F15F0
  c->r[3]=c->r[30]|c->r[30]; // 801F15F4
  c->lr=0x801F15FCu; f_80080354(c); // 801F15F8
  W32(c->r[30]+0x00000A90u,c->r[31]); // 801F15FC
  c->r[3]=c->r[30]+0x000008CCu; // 801F1600
  c->lr=0x801F1608u; f_80089BCC(c); // 801F1604
  c->r[4]=c->r[3]|c->r[3]; // 801F1608
  c->r[3]=c->r[30]|c->r[30]; // 801F160C
  c->lr=0x801F1614u; f_801F28A0(c); // 801F1610
  c->r[3]=c->r[30]+0x00000C0Cu; // 801F1614
  c->r[4]=c->r[30]|c->r[30]; // 801F1618
  c->r[5]=0u+0x00000001u; // 801F161C
  c->lr=0x801F1624u; f_800A9738(c); // 801F1620
  c->r[3]=c->r[30]+0x00000C0Cu; // 801F1624
  c->r[4]=0u+0x00000000u; // 801F1628
  c->lr=0x801F1630u; f_80089BA0(c); // 801F162C
  c->r[3]=c->r[1]+0x00000008u; // 801F1630
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F1634
  {uint32_t ea=c->r[2]+0xFFFF9554u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F1638
  c->f[3]=c->f[1]; // 801F163C
  c->lr=0x801F1644u; f_8004E34C(c); // 801F1640
  c->r[3]=c->r[30]|c->r[30]; // 801F1644
  c->lr=0x801F164Cu; f_801F2898(c); // 801F1648
  cmps(c,0,(int32_t)c->r[3],3); // 801F164C
  if (crb(c,2)) { goto L_801F1760; } // 801F1650
  if (!crb(c,0)) { goto L_801F1670; } // 801F1654
  cmps(c,0,(int32_t)c->r[3],1); // 801F1658
  if (crb(c,2)) { goto L_801F169C; } // 801F165C
  if (!crb(c,0)) { goto L_801F16F4; } // 801F1660
  cmps(c,0,(int32_t)c->r[3],0); // 801F1664
  if (!crb(c,0)) { goto L_801F1680; } // 801F1668
  goto L_801F18B4; // 801F166C
L_801F1670:;
  cmps(c,0,(int32_t)c->r[3],5); // 801F1670
  if (crb(c,2)) { goto L_801F1844; } // 801F1674
  if (!crb(c,0)) { goto L_801F18B4; } // 801F1678
  goto L_801F17D8; // 801F167C
L_801F1680:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1680
  c->r[4]=0u+0x00000001u; // 801F1684
  c->lr=0x801F168Cu; f_80089860(c); // 801F1688
  c->r[3]=c->r[30]|c->r[30]; // 801F168C
  c->r[4]=0u+0x00000001u; // 801F1690
  c->lr=0x801F1698u; f_801F2890(c); // 801F1694
  goto L_801F18CC; // 801F1698
L_801F169C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F169C
  c->lr=0x801F16A4u; f_80085A0C(c); // 801F16A0
  c->r[31]=c->r[3]|c->r[3]; // 801F16A4
  c->r[3]=c->r[3]+0x00000008u; // 801F16A8
  c->r[4]=0u+0x0000008Au; // 801F16AC
  c->r[5]=0u+0x00000019u; // 801F16B0
  c->r[6]=0u+0x00000001u; // 801F16B4
  c->r[7]=0u+0x00000001u; // 801F16B8
  c->r[8]=0u+0x00000000u; // 801F16BC
  c->lr=0x801F16C4u; f_800A7F74(c); // 801F16C0
  c->r[3]=c->r[31]+0x00000008u; // 801F16C4
  c->r[4]=c->r[1]+0x00000008u; // 801F16C8
  c->lr=0x801F16D0u; f_800A8770(c); // 801F16CC
  c->r[3]=c->r[31]+0x00000008u; // 801F16D0
  c->lr=0x801F16D8u; f_800A8148(c); // 801F16D4
  c->r[3]=c->r[30]|c->r[30]; // 801F16D8
  c->r[4]=0u+0x00000000u; // 801F16DC
  c->lr=0x801F16E4u; f_80089860(c); // 801F16E0
  c->r[3]=c->r[30]|c->r[30]; // 801F16E4
  c->r[4]=0u+0x00000000u; // 801F16E8
  c->lr=0x801F16F0u; f_801F2890(c); // 801F16EC
  goto L_801F18CC; // 801F16F0
L_801F16F4:;
  c->r[3]=c->r[30]|c->r[30]; // 801F16F4
  c->lr=0x801F16FCu; f_80085A0C(c); // 801F16F8
  c->r[31]=c->r[3]|c->r[3]; // 801F16FC
  c->r[3]=c->r[3]+0x00000008u; // 801F1700
  c->r[4]=0u+0x00000083u; // 801F1704
  c->r[5]=0u+0x00000019u; // 801F1708
  c->r[6]=0u+0x00000001u; // 801F170C
  c->r[7]=0u+0x00000001u; // 801F1710
  c->r[8]=0u+0x00000000u; // 801F1714
  c->lr=0x801F171Cu; f_800A7F74(c); // 801F1718
  {uint32_t ea=c->r[2]+0xFFFF9558u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F171C
  c->r[3]=0u+0x804C0000u; // 801F1720
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 801F1724
  c->r[4]=c->r[3]+0x000025D0u; // 801F1728
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801F172C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801F1730
  c->r[3]=c->r[31]+0x00000008u; // 801F1734
  c->lr=0x801F173Cu; f_800A8530(c); // 801F1738
  c->r[3]=c->r[31]+0x00000008u; // 801F173C
  c->lr=0x801F1744u; f_800A8148(c); // 801F1740
  c->r[3]=c->r[30]|c->r[30]; // 801F1744
  c->r[4]=0u+0x00000000u; // 801F1748
  c->lr=0x801F1750u; f_80089860(c); // 801F174C
  c->r[3]=c->r[30]|c->r[30]; // 801F1750
  c->r[4]=0u+0x00000000u; // 801F1754
  c->lr=0x801F175Cu; f_801F2890(c); // 801F1758
  goto L_801F18CC; // 801F175C
L_801F1760:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1760
  c->lr=0x801F1768u; f_80085A0C(c); // 801F1764
  c->r[3]=c->r[3]+0x00000008u; // 801F1768
  c->r[4]=0u+0x000000C5u; // 801F176C
  c->r[5]=0u+0x00000019u; // 801F1770
  c->r[6]=0u+0x00000002u; // 801F1774
  c->r[7]=0u+0x00000001u; // 801F1778
  c->r[8]=0u+0x00000000u; // 801F177C
  c->lr=0x801F1784u; f_800A7F74(c); // 801F1780
  c->r[3]=c->r[30]|c->r[30]; // 801F1784
  c->r[4]=0u+0x00000001u; // 801F1788
  c->lr=0x801F1790u; f_80089860(c); // 801F178C
  c->r[3]=c->r[30]|c->r[30]; // 801F1790
  c->r[4]=0u+0x00000000u; // 801F1794
  c->lr=0x801F179Cu; f_801F2890(c); // 801F1798
  c->r[3]=c->r[30]+0x00000024u; // 801F179C
  c->r[4]=0u+0x00000000u; // 801F17A0
  c->r[5]=0u+0x00000000u; // 801F17A4
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F17A8
  {uint32_t ea=c->r[2]+0xFFFF955Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F17AC
  c->r[6]=0u+0x00000000u; // 801F17B0
  c->lr=0x801F17B8u; f_80052ECC(c); // 801F17B4
  c->r[3]=c->r[30]+0x00000024u; // 801F17B8
  c->r[4]=0u+0x00000002u; // 801F17BC
  c->r[5]=0u+0x00000000u; // 801F17C0
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F17C4
  {uint32_t ea=c->r[2]+0xFFFF955Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F17C8
  c->r[6]=0u+0x00000000u; // 801F17CC
  c->lr=0x801F17D4u; f_80052ECC(c); // 801F17D0
  goto L_801F18CC; // 801F17D4
L_801F17D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801F17D8
  c->lr=0x801F17E0u; f_80085A0C(c); // 801F17DC
  c->r[31]=c->r[3]|c->r[3]; // 801F17E0
  c->r[3]=c->r[3]+0x00000008u; // 801F17E4
  c->r[4]=0u+0x000000E1u; // 801F17E8
  c->r[5]=0u+0x00000019u; // 801F17EC
  c->r[6]=0u+0x00000001u; // 801F17F0
  c->r[7]=0u+0x00000001u; // 801F17F4
  c->r[8]=0u+0x00000000u; // 801F17F8
  c->lr=0x801F1800u; f_800A7F74(c); // 801F17FC
  c->r[3]=c->r[31]+0x00000008u; // 801F1800
  c->r[4]=c->r[1]+0x00000008u; // 801F1804
  c->lr=0x801F180Cu; f_800A8770(c); // 801F1808
  c->r[3]=c->r[31]+0x00000008u; // 801F180C
  c->lr=0x801F1814u; f_800A8148(c); // 801F1810
  c->r[3]=c->r[30]|c->r[30]; // 801F1814
  c->r[4]=0u+0x00000000u; // 801F1818
  c->lr=0x801F1820u; f_80089860(c); // 801F181C
  c->r[3]=c->r[30]|c->r[30]; // 801F1820
  c->r[4]=0u+0x00000000u; // 801F1824
  c->lr=0x801F182Cu; f_801F2890(c); // 801F1828
  c->r[3]=c->r[30]+0x000008CCu; // 801F182C
  c->r[4]=0u+0x00000078u; // 801F1830
  c->r[5]=0u+0x00000000u; // 801F1834
  c->r[6]=0u+0x00000064u; // 801F1838
  c->lr=0x801F1840u; f_800B6630(c); // 801F183C
  goto L_801F18CC; // 801F1840
L_801F1844:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1844
  c->lr=0x801F184Cu; f_80085A0C(c); // 801F1848
  c->r[31]=c->r[3]|c->r[3]; // 801F184C
  c->r[3]=c->r[3]+0x00000008u; // 801F1850
  c->r[4]=0u+0x000000F4u; // 801F1854
  c->r[5]=0u+0x00000019u; // 801F1858
  c->r[6]=0u+0x00000001u; // 801F185C
  c->r[7]=0u+0x00000001u; // 801F1860
  c->r[8]=0u+0x00000000u; // 801F1864
  c->lr=0x801F186Cu; f_800A7F74(c); // 801F1868
  c->r[3]=c->r[31]+0x00000008u; // 801F186C
  c->r[4]=c->r[1]+0x00000008u; // 801F1870
  c->lr=0x801F1878u; f_800A8770(c); // 801F1874
  c->r[3]=c->r[31]+0x00000008u; // 801F1878
  c->lr=0x801F1880u; f_800A8148(c); // 801F187C
  c->r[3]=c->r[30]|c->r[30]; // 801F1880
  c->r[4]=0u+0x00000000u; // 801F1884
  c->lr=0x801F188Cu; f_80089860(c); // 801F1888
  c->r[3]=c->r[30]|c->r[30]; // 801F188C
  c->r[4]=0u+0x00000000u; // 801F1890
  c->lr=0x801F1898u; f_801F2890(c); // 801F1894
  c->r[3]=c->r[30]+0x000008CCu; // 801F1898
  c->r[4]=0u+0x00000003u; // 801F189C
  c->lr=0x801F18A4u; f_801F2854(c); // 801F18A0
  c->r[3]=c->r[30]+0x000008CCu; // 801F18A4
  c->r[4]=0u+0x00000003u; // 801F18A8
  c->lr=0x801F18B0u; f_801F2818(c); // 801F18AC
  goto L_801F18CC; // 801F18B0
L_801F18B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801F18B4
  c->r[4]=0u+0x00000001u; // 801F18B8
  c->lr=0x801F18C0u; f_80089860(c); // 801F18BC
  c->r[3]=c->r[30]|c->r[30]; // 801F18C0
  c->r[4]=0u+0x00000001u; // 801F18C4
  c->lr=0x801F18CCu; f_801F2890(c); // 801F18C8
L_801F18CC:;
  c->r[0]=R32(c->r[30]+0x00000A58u); // 801F18CC
  c->r[0]=c->r[0]|0x00000002u; // 801F18D0
  W32(c->r[30]+0x00000A58u,c->r[0]); // 801F18D4
  c->r[3]=c->r[30]|c->r[30]; // 801F18D8
  c->r[4]=0u+0x00000002u; // 801F18DC
  c->lr=0x801F18E4u; f_800897D4(c); // 801F18E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F18E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F18E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F18EC
  c->lr=c->r[0]; // 801F18F0
  c->r[1]=c->r[1]+0x00000020u; // 801F18F4
  return; // 801F18F8
}

// fn_801F18FC
void f_801F18FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F18FC
  c->r[0]=c->lr; // 801F1900
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1904
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1908
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F190C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F1910
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F1914
  c->r[28]=c->r[3]|c->r[3]; // 801F1918
  c->r[30]=0u+0x00000000u; // 801F191C
  c->r[31]=c->r[3]+0x00000AC8u; // 801F1920
L_801F1924:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1924
  c->lr=0x801F192Cu; f_800A8C14(c); // 801F1928
  c->r[31]=c->r[31]+0x00000050u; // 801F192C
  c->r[30]=c->r[30]+0x00000001u; // 801F1930
  cmps(c,0,(int32_t)c->r[30],3); // 801F1934
  if (crb(c,0)) { IRQCHK(c); goto L_801F1924; } // 801F1938
  c->r[0]=R32(c->r[28]+0x000009E8u); // 801F193C
  cmps(c,0,(int32_t)c->r[0],0); // 801F1940
  if (crb(c,2)) { goto L_801F1954; } // 801F1944
  c->r[3]=c->r[28]|c->r[28]; // 801F1948
  c->lr=0x801F1950u; f_80087A2C(c); // 801F194C
  goto L_801F1978; // 801F1950
L_801F1954:;
  c->r[3]=c->r[28]|c->r[28]; // 801F1954
  c->lr=0x801F195Cu; f_8006F0FC(c); // 801F1958
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801F195C
  c->r[3]=0u+0x80430000u; // 801F1960
  c->r[0]=c->r[3]+0xFFFFC3A8u; // 801F1964
  c->r[12]=c->r[0]+c->r[4]; // 801F1968
  c->r[3]=c->r[28]|c->r[28]; // 801F196C
  c->lr=0x801F1974u; f_802F09D0(c); // 801F1970
  c->r[0]=c->r[0]|0x00000000u; // 801F1974
L_801F1978:;
  c->r[3]=c->r[28]+0x00000CE4u; // 801F1978
  c->lr=0x801F1980u; f_800A93DC(c); // 801F197C
  c->r[30]=0u+0x00000000u; // 801F1980
  c->r[29]=0u+0x00000000u; // 801F1984
  c->lr=0x801F198Cu; f_80089890(c); // 801F1988
  cmps(c,0,(int32_t)c->r[3],0); // 801F198C
  if (crb(c,2)) { goto L_801F19F4; } // 801F1990
  c->lr=0x801F1998u; f_800484B8(c); // 801F1994
  c->r[4]=0u+0x00000000u; // 801F1998
  c->lr=0x801F19A0u; f_80048624(c); // 801F199C
  c->r[4]=0u+0x00000000u; // 801F19A0
  c->r[31]=0u+0x804C0000u; // 801F19A4
  c->r[5]=c->r[31]+0x000025D0u; // 801F19A8
  c->r[6]=0u+0x00000000u; // 801F19AC
  c->lr=0x801F19B4u; f_8006E40C(c); // 801F19B0
  c->r[3]=R32(c->r[13]+0xFFFFB94Cu); // 801F19B4
  c->r[4]=c->r[1]+0x00000008u; // 801F19B8
  c->r[5]=c->r[31]+0x000025D0u; // 801F19BC
  c->lr=0x801F19C4u; f_80068458(c); // 801F19C0
  c->r[3]=c->r[28]|c->r[28]; // 801F19C4
  c->r[4]=c->r[1]+0x00000008u; // 801F19C8
  c->lr=0x801F19D0u; f_80081910(c); // 801F19CC
  cmps(c,0,(int32_t)c->r[3],8); // 801F19D0
  if (crb(c,1)) { goto L_801F1A0C; } // 801F19D4
  c->r[3]=c->r[28]|c->r[28]; // 801F19D8
  c->lr=0x801F19E0u; f_80089898(c); // 801F19DC
  cmps(c,0,(int32_t)c->r[3],0); // 801F19E0
  if (crb(c,2)) { goto L_801F19EC; } // 801F19E4
  c->r[30]=0u+0x00000001u; // 801F19E8
L_801F19EC:;
  c->r[29]=0u+0x00000001u; // 801F19EC
  goto L_801F1A0C; // 801F19F0
L_801F19F4:;
  c->r[3]=c->r[28]|c->r[28]; // 801F19F4
  c->lr=0x801F19FCu; f_80089898(c); // 801F19F8
  cmps(c,0,(int32_t)c->r[3],0); // 801F19FC
  if (crb(c,2)) { goto L_801F1A08; } // 801F1A00
  c->r[30]=0u+0x00000001u; // 801F1A04
L_801F1A08:;
  c->r[29]=0u+0x00000001u; // 801F1A08
L_801F1A0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F1A0C
  if (crb(c,2)) { goto L_801F1A84; } // 801F1A10
  c->r[3]=c->r[28]+0x00000C0Cu; // 801F1A14
  c->lr=0x801F1A1Cu; f_80089B9C(c); // 801F1A18
  cmps(c,0,(int32_t)c->r[3],0); // 801F1A1C
  if (crb(c,2)) { goto L_801F1A64; } // 801F1A20
  c->r[3]=c->r[28]|c->r[28]; // 801F1A24
  c->lr=0x801F1A2Cu; f_801F28A8(c); // 801F1A28
  cmps(c,0,(int32_t)c->r[3],0); // 801F1A2C
  if (crb(c,2)) { goto L_801F1A4C; } // 801F1A30
  c->r[3]=c->r[28]|c->r[28]; // 801F1A34
  c->r[4]=0u+0x00000001u; // 801F1A38
  c->r[5]=0u+0x00000001u; // 801F1A3C
  c->r[6]=0u+0x00000000u; // 801F1A40
  c->lr=0x801F1A48u; f_800787A8(c); // 801F1A44
  goto L_801F1AA4; // 801F1A48
L_801F1A4C:;
  c->r[3]=c->r[28]|c->r[28]; // 801F1A4C
  c->r[4]=0u+0x00000000u; // 801F1A50
  c->r[5]=0u+0x00000001u; // 801F1A54
  c->r[6]=0u+0x00000000u; // 801F1A58
  c->lr=0x801F1A60u; f_800787A8(c); // 801F1A5C
  goto L_801F1AA4; // 801F1A60
L_801F1A64:;
  c->r[3]=c->r[28]|c->r[28]; // 801F1A64
  c->lr=0x801F1A6Cu; f_80089898(c); // 801F1A68
  cmps(c,0,(int32_t)c->r[3],0); // 801F1A6C
  if (crb(c,2)) { goto L_801F1AA4; } // 801F1A70
  c->r[3]=c->r[28]+0x00000C0Cu; // 801F1A74
  c->r[4]=0u+0x00000001u; // 801F1A78
  c->lr=0x801F1A80u; f_80089BA0(c); // 801F1A7C
  goto L_801F1AA4; // 801F1A80
L_801F1A84:;
  c->r[3]=c->r[28]+0x00000C0Cu; // 801F1A84
  c->r[4]=0u+0x00000000u; // 801F1A88
  c->lr=0x801F1A90u; f_80089BA0(c); // 801F1A8C
  c->r[3]=c->r[28]|c->r[28]; // 801F1A90
  c->r[4]=0u+0x00000000u; // 801F1A94
  c->r[5]=0u+0x00000001u; // 801F1A98
  c->r[6]=0u+0x00000000u; // 801F1A9C
  c->lr=0x801F1AA4u; f_800787A8(c); // 801F1AA0
L_801F1AA4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F1AA4
  if (crb(c,2)) { goto L_801F1B08; } // 801F1AA8
  c->r[3]=c->r[28]|c->r[28]; // 801F1AAC
  c->lr=0x801F1AB4u; f_80085974(c); // 801F1AB0
  c->r[29]=c->r[3]|c->r[3]; // 801F1AB4
  goto L_801F1AFC; // 801F1AB8
L_801F1ABC:;
  c->r[3]=c->r[29]+0x00000008u; // 801F1ABC
  c->r[4]=0u+0x00000000u; // 801F1AC0
  c->lr=0x801F1AC8u; f_800A8214(c); // 801F1AC4
  c->r[3]=c->r[29]+0x00000008u; // 801F1AC8
  c->r[4]=0u+0x00000001u; // 801F1ACC
  c->lr=0x801F1AD4u; f_800A8B90(c); // 801F1AD0
  c->r[3]=c->r[29]+0x00000008u; // 801F1AD4
  c->lr=0x801F1ADCu; f_800A8888(c); // 801F1AD8
  c->r[3]=c->r[29]+0x00000008u; // 801F1ADC
  c->lr=0x801F1AE4u; f_800A891C(c); // 801F1AE0
  c->r[3]=c->r[29]+0x00000008u; // 801F1AE4
  c->lr=0x801F1AECu; f_800A8B08(c); // 801F1AE8
  c->r[3]=c->r[28]|c->r[28]; // 801F1AEC
  c->r[4]=c->r[29]|c->r[29]; // 801F1AF0
  c->lr=0x801F1AF8u; f_800859B8(c); // 801F1AF4
  c->r[29]=c->r[3]|c->r[3]; // 801F1AF8
L_801F1AFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F1AFC
  if (!crb(c,2)) { IRQCHK(c); goto L_801F1ABC; } // 801F1B00
  goto L_801F1B3C; // 801F1B04
L_801F1B08:;
  c->r[3]=c->r[28]|c->r[28]; // 801F1B08
  c->lr=0x801F1B10u; f_80085974(c); // 801F1B0C
  c->r[29]=c->r[3]|c->r[3]; // 801F1B10
  goto L_801F1B34; // 801F1B14
L_801F1B18:;
  c->r[3]=c->r[29]+0x00000008u; // 801F1B18
  c->r[4]=0u+0x00000000u; // 801F1B1C
  c->lr=0x801F1B24u; f_800A8B90(c); // 801F1B20
  c->r[3]=c->r[28]|c->r[28]; // 801F1B24
  c->r[4]=c->r[29]|c->r[29]; // 801F1B28
  c->lr=0x801F1B30u; f_800859B8(c); // 801F1B2C
  c->r[29]=c->r[3]|c->r[3]; // 801F1B30
L_801F1B34:;
  cmps(c,0,(int32_t)c->r[29],0); // 801F1B34
  if (!crb(c,2)) { IRQCHK(c); goto L_801F1B18; } // 801F1B38
L_801F1B3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F1B3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1B40
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1B44
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F1B48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1B4C
  c->lr=c->r[0]; // 801F1B50
  c->r[1]=c->r[1]+0x00000020u; // 801F1B54
  return; // 801F1B58
}

// fn_801F1B5C
void f_801F1B5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1B5C
  c->r[0]=c->lr; // 801F1B60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1B64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1B68
  c->r[31]=c->r[3]|c->r[3]; // 801F1B6C
  c->lr=0x801F1B74u; f_8007E154(c); // 801F1B70
  c->r[3]=0u+0x80470000u; // 801F1B74
  c->r[3]=c->r[3]+0x000051B8u; // 801F1B78
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F1B7C
  c->r[0]=c->r[3]+0x0000000Cu; // 801F1B80
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F1B84
  c->r[0]=c->r[3]+0x00000018u; // 801F1B88
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F1B8C
  c->r[0]=c->r[3]+0x00000024u; // 801F1B90
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F1B94
  c->r[0]=c->r[3]+0x00000030u; // 801F1B98
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F1B9C
  c->r[3]=c->r[31]|c->r[31]; // 801F1BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1BA8
  c->lr=c->r[0]; // 801F1BAC
  c->r[1]=c->r[1]+0x00000010u; // 801F1BB0
  return; // 801F1BB4
}

// fn_801F1BB8
void f_801F1BB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1BB8
  c->r[0]=c->lr; // 801F1BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1BC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1BC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F1BC8
  c->r[30]=c->r[3]|c->r[3]; // 801F1BCC
  c->r[31]=c->r[4]|c->r[4]; // 801F1BD0
  cmps(c,0,(int32_t)c->r[3],0); // 801F1BD4
  if (crb(c,2)) { goto L_801F1BF8; } // 801F1BD8
  c->r[4]=0u+0x00000000u; // 801F1BDC
  c->lr=0x801F1BE4u; f_8007E240(c); // 801F1BE0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F1BE4
  cmps(c,0,(int32_t)c->r[0],0); // 801F1BE8
  if (!crb(c,1)) { goto L_801F1BF8; } // 801F1BEC
  c->r[3]=c->r[30]|c->r[30]; // 801F1BF0
  c->lr=0x801F1BF8u; f_80047B20(c); // 801F1BF4
L_801F1BF8:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1BF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F1BFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F1C00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F1C04
  c->lr=c->r[0]; // 801F1C08
  c->r[1]=c->r[1]+0x00000010u; // 801F1C0C
  return; // 801F1C10
}

// fn_801F1C14
void f_801F1C14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1C14
  c->r[0]=c->lr; // 801F1C18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1C1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1C20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F1C24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F1C28
  c->r[29]=c->r[3]|c->r[3]; // 801F1C2C
  c->r[0]=0u+0x00000000u; // 801F1C30
  W32(c->r[3]+0x00000C08u,c->r[0]); // 801F1C34
  c->r[3]=c->r[3]+0x00000E7Cu; // 801F1C38
  c->r[4]=c->r[29]|c->r[29]; // 801F1C3C
  c->lr=0x801F1C44u; f_800A751C(c); // 801F1C40
  c->r[0]=0u+0x00000001u; // 801F1C44
  W32(c->r[29]+0x000008C4u,c->r[0]); // 801F1C48
  W32(c->r[29]+0x000008C8u,c->r[0]); // 801F1C4C
  c->r[30]=0u+0x00000000u; // 801F1C50
  c->r[31]=c->r[29]+0x00000AC8u; // 801F1C54
L_801F1C58:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1C58
  c->r[4]=c->r[29]|c->r[29]; // 801F1C5C
  c->lr=0x801F1C64u; f_80089B8C(c); // 801F1C60
  c->r[31]=c->r[31]+0x00000050u; // 801F1C64
  c->r[30]=c->r[30]+0x00000001u; // 801F1C68
  cmps(c,0,(int32_t)c->r[30],3); // 801F1C6C
  if (crb(c,0)) { IRQCHK(c); goto L_801F1C58; } // 801F1C70
  c->r[3]=c->r[29]+0x00000D30u; // 801F1C74
  c->r[4]=c->r[29]|c->r[29]; // 801F1C78
  c->lr=0x801F1C80u; f_800A8D04(c); // 801F1C7C
  c->r[3]=c->r[29]+0x00000E4Cu; // 801F1C80
  c->r[4]=0u+0x00000000u; // 801F1C84
  c->lr=0x801F1C8Cu; f_8028CA58(c); // 801F1C88
  c->r[3]=c->r[29]+0x00000E5Cu; // 801F1C8C
  c->r[4]=0u+0x00000000u; // 801F1C90
  c->lr=0x801F1C98u; f_8028CA58(c); // 801F1C94
  c->r[0]=R32(c->r[29]+0x00000A58u); // 801F1C98
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801F1C9C
  W32(c->r[29]+0x00000A58u,c->r[0]); // 801F1CA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F1CA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1CA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1CAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1CB0
  c->lr=c->r[0]; // 801F1CB4
  c->r[1]=c->r[1]+0x00000020u; // 801F1CB8
  return; // 801F1CBC
}

// fn_801F1CC0
void f_801F1CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1CC0
  c->r[0]=c->lr; // 801F1CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1CCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F1CD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F1CD4
  c->r[29]=c->r[3]|c->r[3]; // 801F1CD8
  c->lr=0x801F1CE0u; f_8008628C(c); // 801F1CDC
  c->r[3]=c->r[29]|c->r[29]; // 801F1CE0
  c->lr=0x801F1CE8u; f_80085AD4(c); // 801F1CE4
  c->r[30]=0u+0x00000000u; // 801F1CE8
  c->r[31]=c->r[29]+0x00000AC8u; // 801F1CEC
L_801F1CF0:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1CF0
  c->r[4]=0u+0x00000001u; // 801F1CF4
  c->lr=0x801F1CFCu; f_800A8494(c); // 801F1CF8
  c->r[31]=c->r[31]+0x00000050u; // 801F1CFC
  c->r[30]=c->r[30]+0x00000001u; // 801F1D00
  cmps(c,0,(int32_t)c->r[30],3); // 801F1D04
  if (crb(c,0)) { IRQCHK(c); goto L_801F1CF0; } // 801F1D08
  c->r[3]=c->r[29]+0x00000D4Cu; // 801F1D0C
  c->r[4]=0u+0x00000001u; // 801F1D10
  c->lr=0x801F1D18u; f_800A8494(c); // 801F1D14
  c->r[3]=c->r[29]+0x00000D9Cu; // 801F1D18
  c->r[4]=0u+0x00000001u; // 801F1D1C
  c->lr=0x801F1D24u; f_800A8494(c); // 801F1D20
  c->r[3]=c->r[29]+0x00000C0Cu; // 801F1D24
  c->lr=0x801F1D2Cu; f_800A9854(c); // 801F1D28
  c->r[3]=c->r[29]+0x000008CCu; // 801F1D2C
  c->lr=0x801F1D34u; f_800B4848(c); // 801F1D30
  c->r[0]=R32(c->r[29]+0x00000C08u); // 801F1D34
  cmps(c,0,(int32_t)c->r[0],0); // 801F1D38
  if (crb(c,2)) { goto L_801F1D84; } // 801F1D3C
  c->lr=0x801F1D44u; f_80056B5C(c); // 801F1D40
  c->r[30]=c->r[3]|c->r[3]; // 801F1D44
  c->r[3]=R32(c->r[13]+0xFFFFB948u); // 801F1D48
  c->lr=0x801F1D50u; f_80065DB4(c); // 801F1D4C
  c->lr=0x801F1D54u; f_80056B54(c); // 801F1D50
  c->r[3]=R32(c->r[29]+0x00000C08u); // 801F1D54
  cmps(c,0,(int32_t)c->r[3],0); // 801F1D58
  if (crb(c,2)) { goto L_801F1D74; } // 801F1D5C
  c->r[4]=0u+0x00000001u; // 801F1D60
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F1D64
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F1D68
  c->ctr=c->r[12]; // 801F1D6C
  if (true) { c->lr=0x801F1D74u; dispatch(c,c->ctr); } // 801F1D70
L_801F1D74:;
  c->r[3]=c->r[30]|c->r[30]; // 801F1D74
  c->lr=0x801F1D7Cu; f_80056B54(c); // 801F1D78
  c->r[0]=0u+0x00000000u; // 801F1D7C
  W32(c->r[29]+0x00000C08u,c->r[0]); // 801F1D80
L_801F1D84:;
  c->r[3]=c->r[29]|c->r[29]; // 801F1D84
  c->r[4]=0u+0x00000000u; // 801F1D88
  c->lr=0x801F1D90u; f_80078790(c); // 801F1D8C
  c->r[3]=c->r[29]|c->r[29]; // 801F1D90
  c->r[4]=0u+0x00000000u; // 801F1D94
  c->lr=0x801F1D9Cu; f_800780C4(c); // 801F1D98
  c->r[0]=R32(c->r[29]+0x00000A58u); // 801F1D9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801F1DA0
  W32(c->r[29]+0x00000A58u,c->r[0]); // 801F1DA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F1DA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F1DAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F1DB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1DB4
  c->lr=c->r[0]; // 801F1DB8
  c->r[1]=c->r[1]+0x00000020u; // 801F1DBC
  return; // 801F1DC0
}

// fn_801F1DC4
void f_801F1DC4(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F1DC4
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F1DC8
  c->ctr=c->r[12]; // 801F1DCC
  if (true) { dispatch(c,c->ctr); return; } // 801F1DD0
}

// fn_801F1DD4
void f_801F1DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1DD4
  c->r[0]=c->lr; // 801F1DD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F1DDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F1DE0
  c->r[31]=c->r[3]|c->r[3]; // 801F1DE4
  cmps(c,0,(int32_t)c->r[4],0); // 801F1DE8
  if (!crb(c,2)) { goto L_801F1E00; } // 801F1DEC
  c->r[4]=0u+0x00000000u; // 801F1DF0
  c->lr=0x801F1DF8u; f_800897DC(c); // 801F1DF4
  c->r[3]=0u+0x00000000u; // 801F1DF8
  goto L_801F1F3C; // 801F1DFC
L_801F1E00:;
  c->lr=0x801F1E04u; f_8006E268(c); // 801F1E00
  c->lr=0x801F1E08u; f_80089E10(c); // 801F1E04
  cmps(c,0,(int32_t)c->r[3],8); // 801F1E08
  if (crb(c,2)) { goto L_801F1E20; } // 801F1E0C
  c->lr=0x801F1E14u; f_8006E268(c); // 801F1E10
  c->lr=0x801F1E18u; f_80089E10(c); // 801F1E14
  cmps(c,0,(int32_t)c->r[3],33); // 801F1E18
  if (!crb(c,2)) { goto L_801F1E28; } // 801F1E1C
L_801F1E20:;
  c->r[3]=0u+0x00000000u; // 801F1E20
  goto L_801F1F3C; // 801F1E24
L_801F1E28:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1E28
  c->lr=0x801F1E30u; f_801F2898(c); // 801F1E2C
  cmps(c,0,(int32_t)c->r[3],4); // 801F1E30
  if (crb(c,2)) { goto L_801F1E5C; } // 801F1E34
  if (!crb(c,0)) { goto L_801F1E48; } // 801F1E38
  cmps(c,0,(int32_t)c->r[3],0); // 801F1E3C
  if (!crb(c,0)) { goto L_801F1E54; } // 801F1E40
  goto L_801F1F38; // 801F1E44
L_801F1E48:;
  cmps(c,0,(int32_t)c->r[3],6); // 801F1E48
  if (!crb(c,0)) { goto L_801F1F38; } // 801F1E4C
  goto L_801F1EEC; // 801F1E50
L_801F1E54:;
  c->r[3]=0u+0x00000000u; // 801F1E54
  goto L_801F1F3C; // 801F1E58
L_801F1E5C:;
  c->r[3]=R32(c->r[13]+0xFFFFB948u); // 801F1E5C
  c->r[4]=c->r[1]+0x00000010u; // 801F1E60
  c->lr=0x801F1E68u; f_8006F124(c); // 801F1E64
  c->r[3]=c->r[31]+0x00000A0Cu; // 801F1E68
  c->r[4]=c->r[1]+0x00000010u; // 801F1E6C
  c->lr=0x801F1E74u; f_800670A8(c); // 801F1E70
  c->r[0]=0u+0x00000078u; // 801F1E74
  W32(c->r[31]+0x00000A00u,c->r[0]); // 801F1E78
  c->r[3]=c->r[31]|c->r[31]; // 801F1E7C
  c->lr=0x801F1E84u; f_801718C8(c); // 801F1E80
  cmps(c,0,(int32_t)c->r[3],100); // 801F1E84
  if (!crb(c,2)) { goto L_801F1EA0; } // 801F1E88
  c->r[3]=c->r[31]|c->r[31]; // 801F1E8C
  c->r[4]=0u+0x00000003u; // 801F1E90
  c->lr=0x801F1E98u; f_800897DC(c); // 801F1E94
  c->r[3]=0u+0x00000004u; // 801F1E98
  goto L_801F1F3C; // 801F1E9C
L_801F1EA0:;
  c->r[3]=c->r[31]|c->r[31]; // 801F1EA0
  c->r[4]=c->r[31]+0x00000A0Cu; // 801F1EA4
  c->r[5]=c->r[1]+0x00000008u; // 801F1EA8
  c->r[6]=0u+0x00000000u; // 801F1EAC
  c->lr=0x801F1EB4u; f_8007E50C(c); // 801F1EB0
  cmps(c,0,(int32_t)c->r[3],0); // 801F1EB4
  if (crb(c,2)) { goto L_801F1EE4; } // 801F1EB8
  c->r[0]=0u+0x00000001u; // 801F1EBC
  W32(c->r[31]+0x00000A28u,c->r[0]); // 801F1EC0
  c->r[3]=c->r[31]|c->r[31]; // 801F1EC4
  c->r[4]=c->r[1]+0x00000008u; // 801F1EC8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F1ECC
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 801F1ED0
  c->ctr=c->r[12]; // 801F1ED4
  if (true) { c->lr=0x801F1EDCu; dispatch(c,c->ctr); } // 801F1ED8
  c->r[3]=0u+0x00000001u; // 801F1EDC
  goto L_801F1F3C; // 801F1EE0
L_801F1EE4:;
  c->r[3]=0u+0x00000000u; // 801F1EE4
  goto L_801F1F3C; // 801F1EE8
L_801F1EEC:;
  c->r[3]=c->r[31]+0x000008CCu; // 801F1EEC
  c->lr=0x801F1EF4u; f_8009F4D8(c); // 801F1EF0
  cmps(c,0,(int32_t)c->r[3],0); // 801F1EF4
  if (!crb(c,2)) { goto L_801F1F18; } // 801F1EF8
  c->r[0]=0u+0x00000079u; // 801F1EFC
  W32(c->r[31]+0x00000A00u,c->r[0]); // 801F1F00
  c->r[3]=c->r[31]|c->r[31]; // 801F1F04
  c->r[4]=0u+0x00000003u; // 801F1F08
  c->lr=0x801F1F10u; f_800897DC(c); // 801F1F0C
  c->r[3]=0u+0x00000004u; // 801F1F10
  goto L_801F1F3C; // 801F1F14
L_801F1F18:;
  c->r[3]=c->r[31]+0x000008CCu; // 801F1F18
  c->lr=0x801F1F20u; f_8009F4D8(c); // 801F1F1C
  c->r[4]=c->r[3]|c->r[3]; // 801F1F20
  c->r[3]=c->r[31]+0x000008CCu; // 801F1F24
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801F1F28
  c->lr=0x801F1F30u; f_801F2818(c); // 801F1F2C
  c->r[3]=0u+0x00000000u; // 801F1F30
  goto L_801F1F3C; // 801F1F34
L_801F1F38:;
  c->r[3]=0u+0x00000000u; // 801F1F38
L_801F1F3C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F1F3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F1F40
  c->lr=c->r[0]; // 801F1F44
  c->r[1]=c->r[1]+0x00000020u; // 801F1F48
  return; // 801F1F4C
}

// fn_801F1F50
void f_801F1F50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F1F50
  c->r[0]=c->lr; // 801F1F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F1F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F1F5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F1F60
  c->r[30]=c->r[3]|c->r[3]; // 801F1F64
  c->r[31]=c->r[4]|c->r[4]; // 801F1F68
  c->r[5]=0u+0x00000000u; // 801F1F6C
  c->lr=0x801F1F74u; f_80080554(c); // 801F1F70
  cmps(c,0,(int32_t)c->r[3],0); // 801F1F74
  if (crb(c,2)) { goto L_801F203C; } // 801F1F78
  c->r[3]=c->r[30]+0x000008B4u; // 801F1F7C
  c->r[4]=c->r[31]|c->r[31]; // 801F1F80
  c->lr=0x801F1F88u; f_800AB39C(c); // 801F1F84
  cmps(c,0,(int32_t)c->r[3],1); // 801F1F88
  if (crb(c,2)) { goto L_801F1FAC; } // 801F1F8C
  cmps(c,0,(int32_t)c->r[3],2); // 801F1F90
  if (!crb(c,2)) { goto L_801F203C; } // 801F1F94
  c->r[3]=c->r[30]|c->r[30]; // 801F1F98
  c->r[4]=c->r[31]|c->r[31]; // 801F1F9C
  c->lr=0x801F1FA4u; f_80080794(c); // 801F1FA0
  cmps(c,0,(int32_t)c->r[3],0); // 801F1FA4
  if (crb(c,2)) { goto L_801F203C; } // 801F1FA8
L_801F1FAC:;
  c->r[3]=c->r[30]+0x000008B4u; // 801F1FAC
  c->r[4]=c->r[31]|c->r[31]; // 801F1FB0
  c->lr=0x801F1FB8u; f_800670A8(c); // 801F1FB4
  c->r[3]=c->r[30]+0x000008CCu; // 801F1FB8
  c->lr=0x801F1FC0u; f_80089C78(c); // 801F1FBC
  c->r[3]=c->r[30]+0x00000A5Cu; // 801F1FC0
  c->r[4]=c->r[30]+0x00000A74u; // 801F1FC4
  c->lr=0x801F1FCCu; f_8004A65C(c); // 801F1FC8
  c->r[3]=c->r[30]|c->r[30]; // 801F1FCC
  c->r[4]=c->r[30]+0x00000A68u; // 801F1FD0
  c->r[5]=c->r[30]+0x000008B4u; // 801F1FD4
  c->lr=0x801F1FDCu; f_8007FD18(c); // 801F1FD8
  c->r[0]=0u+0x00000000u; // 801F1FDC
  W32(c->r[30]+0x00000A90u,c->r[0]); // 801F1FE0
  c->r[3]=R32(c->r[13]+0xFFFFB948u); // 801F1FE4
  c->lr=0x801F1FECu; f_80089DD8(c); // 801F1FE8
  cmps(c,0,(int32_t)c->r[3],0); // 801F1FEC
  if (crb(c,2)) { goto L_801F2004; } // 801F1FF0
  c->lr=0x801F1FF8u; f_8006E268(c); // 801F1FF4
  c->lr=0x801F1FFCu; f_800738E0(c); // 801F1FF8
  {uint32_t ea=c->r[30]+0x00000A84u; WF32(ea,c->f[1]);} // 801F1FFC
  goto L_801F2018; // 801F2000
L_801F2004:;
  c->lr=0x801F2008u; f_8006E268(c); // 801F2004
  c->lr=0x801F200Cu; f_800738E0(c); // 801F2008
  {uint32_t ea=c->r[2]+0xFFFF9558u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F200C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F2010
  {uint32_t ea=c->r[30]+0x00000A84u; WF32(ea,c->f[0]);} // 801F2014
L_801F2018:;
  c->r[0]=0u+0x00000001u; // 801F2018
  W32(c->r[30]+0x00000A80u,c->r[0]); // 801F201C
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F2020
  {uint32_t ea=c->r[30]+0x00000A30u; WF32(ea,c->f[0]);} // 801F2024
  c->r[3]=c->r[30]|c->r[30]; // 801F2028
  c->r[4]=0u+0x00000001u; // 801F202C
  c->lr=0x801F2034u; f_800897DC(c); // 801F2030
  c->r[3]=0u+0x00000001u; // 801F2034
  goto L_801F2040; // 801F2038
L_801F203C:;
  c->r[3]=0u+0x00000000u; // 801F203C
L_801F2040:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2040
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F2044
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2048
  c->lr=c->r[0]; // 801F204C
  c->r[1]=c->r[1]+0x00000010u; // 801F2050
  return; // 801F2054
}

// fn_801F2058
void f_801F2058(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2058
  c->r[0]=c->lr; // 801F205C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2060
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2064
  c->r[31]=c->r[3]|c->r[3]; // 801F2068
  c->lr=0x801F2070u; f_80083714(c); // 801F206C
  c->lr=0x801F2074u; f_8007B524(c); // 801F2070
  c->r[4]=c->r[31]+0x000008B4u; // 801F2074
  c->r[5]=0u+0x00000000u; // 801F2078
  c->r[6]=0u+0x00000001u; // 801F207C
  c->lr=0x801F2084u; f_800A1184(c); // 801F2080
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2084
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2088
  c->lr=c->r[0]; // 801F208C
  c->r[1]=c->r[1]+0x00000010u; // 801F2090
  return; // 801F2094
}

// fn_801F2098
void f_801F2098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2098
  c->r[0]=c->lr; // 801F209C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F20A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F20A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F20A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F20AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F20B0
  c->r[29]=c->r[3]|c->r[3]; // 801F20B4
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F20B8
  fcmp(c,0,c->f[0],c->f[1]); // 801F20BC
  if (crb(c,2)) { goto L_801F20E0; } // 801F20C0
  {uint32_t ea=c->r[3]+0x00000A38u; WF32(ea,c->f[1]);} // 801F20C4
  c->r[0]=0u+0x00000000u; // 801F20C8
  W32(c->r[3]+0x000009F0u,c->r[0]); // 801F20CC
  c->r[0]=0u+0x00000001u; // 801F20D0
  W32(c->r[3]+0x000009E8u,c->r[0]); // 801F20D4
  c->r[3]=0u+0x00000000u; // 801F20D8
  goto L_801F2404; // 801F20DC
L_801F20E0:;
  c->r[28]=R32(c->r[3]+0x00001124u); // 801F20E0
  c->r[31]=R32(c->r[3]+0x00001120u); // 801F20E4
  c->r[30]=0u+0x00000000u; // 801F20E8
  c->r[4]=R32(c->r[3]+0x000008B4u); // 801F20EC
  c->r[0]=R32(c->r[3]+0x000008B8u); // 801F20F0
  W32(c->r[1]+0x00000008u,c->r[4]); // 801F20F4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F20F8
  cmps(c,0,(int32_t)c->r[28],0); // 801F20FC
  if (crb(c,2)) { goto L_801F210C; } // 801F2100
  cmpu(c,0,c->r[28],0x00000004u); // 801F2104
  if (!crb(c,2)) { goto L_801F2330; } // 801F2108
L_801F210C:;
  c->r[3]=c->r[29]|c->r[29]; // 801F210C
  c->lr=0x801F2114u; f_801F2898(c); // 801F2110
  cmps(c,0,(int32_t)c->r[3],3); // 801F2114
  if (crb(c,2)) { goto L_801F21FC; } // 801F2118
  if (!crb(c,0)) { goto L_801F2138; } // 801F211C
  cmps(c,0,(int32_t)c->r[3],1); // 801F2120
  if (crb(c,2)) { goto L_801F2184; } // 801F2124
  if (!crb(c,0)) { goto L_801F21C0; } // 801F2128
  cmps(c,0,(int32_t)c->r[3],0); // 801F212C
  if (!crb(c,0)) { goto L_801F2148; } // 801F2130
  goto L_801F230C; // 801F2134
L_801F2138:;
  cmps(c,0,(int32_t)c->r[3],5); // 801F2138
  if (crb(c,2)) { goto L_801F22C0; } // 801F213C
  if (!crb(c,0)) { goto L_801F230C; } // 801F2140
  goto L_801F2264; // 801F2144
L_801F2148:;
  c->r[31]=0u+0x00000001u; // 801F2148
  c->r[3]=c->r[29]|c->r[29]; // 801F214C
  c->r[4]=c->r[29]+0x00001194u; // 801F2150
  c->r[5]=0u+0x00000001u; // 801F2154
  c->r[6]=0u+0x00000000u; // 801F2158
  c->lr=0x801F2160u; f_80083418(c); // 801F215C
  cmps(c,0,(int32_t)c->r[3],0); // 801F2160
  if (crb(c,2)) { goto L_801F2178; } // 801F2164
  c->r[30]=0u+0x00000001u; // 801F2168
  c->r[0]=0u+0x00000001u; // 801F216C
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F2170
  goto L_801F2318; // 801F2174
L_801F2178:;
  c->r[0]=0u+0x00000002u; // 801F2178
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F217C
  goto L_801F2318; // 801F2180
L_801F2184:;
  c->r[31]=0u+0x00000000u; // 801F2184
  c->r[3]=c->r[29]|c->r[29]; // 801F2188
  c->r[4]=c->r[29]+0x00001194u; // 801F218C
  c->r[5]=0u+0x00000001u; // 801F2190
  c->r[6]=0u+0x00000000u; // 801F2194
  c->lr=0x801F219Cu; f_80083418(c); // 801F2198
  cmps(c,0,(int32_t)c->r[3],0); // 801F219C
  if (crb(c,2)) { goto L_801F21B4; } // 801F21A0
  c->r[30]=0u+0x00000001u; // 801F21A4
  c->r[0]=0u+0x00000001u; // 801F21A8
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F21AC
  goto L_801F2318; // 801F21B0
L_801F21B4:;
  c->r[0]=0u+0x00000002u; // 801F21B4
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F21B8
  goto L_801F2318; // 801F21BC
L_801F21C0:;
  c->r[31]=0u+0x00000000u; // 801F21C0
  c->r[3]=c->r[29]|c->r[29]; // 801F21C4
  c->r[4]=c->r[29]+0x00001194u; // 801F21C8
  c->r[5]=0u+0x0000000Au; // 801F21CC
  c->r[6]=0u+0x00000000u; // 801F21D0
  c->lr=0x801F21D8u; f_80083418(c); // 801F21D4
  cmps(c,0,(int32_t)c->r[3],0); // 801F21D8
  if (crb(c,2)) { goto L_801F21F0; } // 801F21DC
  c->r[30]=0u+0x00000001u; // 801F21E0
  c->r[0]=0u+0x00000001u; // 801F21E4
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F21E8
  goto L_801F2318; // 801F21EC
L_801F21F0:;
  c->r[0]=0u+0x00000002u; // 801F21F0
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F21F4
  goto L_801F2318; // 801F21F8
L_801F21FC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801F21FC
  if (!crb(c,2)) { goto L_801F2208; } // 801F2200
  c->r[31]=0u+0x00000001u; // 801F2204
L_801F2208:;
  c->r[3]=c->r[31]|c->r[31]; // 801F2208
  c->lr=0x801F2210u; f_80133F48(c); // 801F220C
  c->r[3]=0u+0x00000001u; // 801F2210
  c->lr=0x801F2218u; f_80133F84(c); // 801F2214
  c->r[3]=R32(c->r[29]+0x0000112Cu); // 801F2218
  c->lr=0x801F2220u; f_80133FC0(c); // 801F221C
  c->r[3]=c->r[29]+0x00000A74u; // 801F2220
  c->lr=0x801F2228u; f_80133EEC(c); // 801F2224
  c->r[3]=0u+0x00000001u; // 801F2228
  c->lr=0x801F2230u; f_80133FFC(c); // 801F222C
  c->lr=0x801F2234u; f_80133E78(c); // 801F2230
  c->r[3]=0u+0x00000020u; // 801F2234
  c->lr=0x801F223Cu; f_801930C4(c); // 801F2238
  c->r[3]=0u+0x00000000u; // 801F223C
  c->r[4]=0u+0x000001B1u; // 801F2240
  c->lr=0x801F2248u; f_80193100(c); // 801F2244
  c->r[3]=0u+0x00000001u; // 801F2248
  c->r[4]=c->r[31]|c->r[31]; // 801F224C
  c->lr=0x801F2254u; f_80193100(c); // 801F2250
  c->lr=0x801F2258u; f_80193060(c); // 801F2254
  c->r[0]=0u+0x00000002u; // 801F2258
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F225C
  goto L_801F2318; // 801F2260
L_801F2264:;
  c->r[0]=0u+0x00000002u; // 801F2264
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F2268
  c->r[3]=c->r[31]|c->r[31]; // 801F226C
  c->lr=0x801F2274u; f_80133F48(c); // 801F2270
  c->r[3]=0u+0x00000001u; // 801F2274
  c->lr=0x801F227Cu; f_80133F84(c); // 801F2278
  c->r[3]=R32(c->r[29]+0x0000112Cu); // 801F227C
  c->lr=0x801F2284u; f_80133FC0(c); // 801F2280
  c->r[3]=c->r[29]+0x00000A74u; // 801F2284
  c->lr=0x801F228Cu; f_80133EEC(c); // 801F2288
  c->r[3]=0u+0x00000001u; // 801F228C
  c->lr=0x801F2294u; f_80133FFC(c); // 801F2290
  c->lr=0x801F2298u; f_80133E78(c); // 801F2294
  c->r[3]=0u+0x00000020u; // 801F2298
  c->lr=0x801F22A0u; f_801930C4(c); // 801F229C
  c->r[3]=0u+0x00000000u; // 801F22A0
  c->r[4]=0u+0x000001B2u; // 801F22A4
  c->lr=0x801F22ACu; f_80193100(c); // 801F22A8
  c->r[3]=0u+0x00000001u; // 801F22AC
  c->r[4]=c->r[31]|c->r[31]; // 801F22B0
  c->lr=0x801F22B8u; f_80193100(c); // 801F22B4
  c->lr=0x801F22BCu; f_80193060(c); // 801F22B8
  goto L_801F2318; // 801F22BC
L_801F22C0:;
  c->r[31]=0u+0x00000000u; // 801F22C0
  c->r[0]=0u+0x00000002u; // 801F22C4
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F22C8
  c->r[0]=0u+0xFFFFFFFFu; // 801F22CC
  W32(c->r[29]+0x0000119Cu,c->r[0]); // 801F22D0
  c->r[0]=0u+0x0000006Au; // 801F22D4
  W32(c->r[29]+0x000011A0u,c->r[0]); // 801F22D8
  c->r[3]=0u+0x00000001u; // 801F22DC
  c->lr=0x801F22E4u; f_80158740(c); // 801F22E0
  c->r[3]=c->r[29]+0x00000A74u; // 801F22E4
  c->lr=0x801F22ECu; f_801586E4(c); // 801F22E8
  c->lr=0x801F22F0u; f_80158670(c); // 801F22EC
  c->r[3]=0u+0x00000018u; // 801F22F0
  c->lr=0x801F22F8u; f_801930C4(c); // 801F22F4
  c->r[3]=0u+0x00000000u; // 801F22F8
  c->r[4]=0u+0x000001B3u; // 801F22FC
  c->lr=0x801F2304u; f_80193100(c); // 801F2300
  c->lr=0x801F2308u; f_80193060(c); // 801F2304
  goto L_801F2318; // 801F2308
L_801F230C:;
  c->r[31]=0u+0x00000001u; // 801F230C
  c->r[0]=0u+0x00000002u; // 801F2310
  W32(c->r[29]+0x000009F0u,c->r[0]); // 801F2314
L_801F2318:;
  c->r[3]=c->r[29]+0x000008CCu; // 801F2318
  c->r[4]=c->r[31]|c->r[31]; // 801F231C
  c->lr=0x801F2324u; f_800B6E44(c); // 801F2320
  c->r[0]=0u+0x00000001u; // 801F2324
  W32(c->r[29]+0x000009E8u,c->r[0]); // 801F2328
  goto L_801F2344; // 801F232C
L_801F2330:;
  c->r[3]=0u+0x00000000u; // 801F2330
  c->lr=0x801F2338u; f_80158740(c); // 801F2334
  c->r[3]=c->r[29]+0x00000A74u; // 801F2338
  c->lr=0x801F2340u; f_801586E4(c); // 801F233C
  c->lr=0x801F2344u; f_80158670(c); // 801F2340
L_801F2344:;
  c->r[3]=c->r[29]+0x00000AC8u; // 801F2344
  c->lr=0x801F234Cu; f_800A81B4(c); // 801F2348
  c->r[3]=c->r[29]+0x00000CE4u; // 801F234C
  c->lr=0x801F2354u; f_800A92F0(c); // 801F2350
  c->r[4]=R32(c->r[29]+0x0000119Cu); // 801F2354
  cmps(c,0,(int32_t)c->r[4],0); // 801F2358
  if (crb(c,0)) { goto L_801F2378; } // 801F235C
  c->r[3]=c->r[29]+0x00000AC8u; // 801F2360
  c->r[5]=0u+0x00000019u; // 801F2364
  c->r[6]=R32(c->r[29]+0x000011A8u); // 801F2368
  c->r[7]=0u+0x00000000u; // 801F236C
  c->r[8]=0u+0x00000000u; // 801F2370
  c->lr=0x801F2378u; f_800A7F74(c); // 801F2374
L_801F2378:;
  c->r[4]=R32(c->r[29]+0x000011A0u); // 801F2378
  cmps(c,0,(int32_t)c->r[4],0); // 801F237C
  if (crb(c,0)) { goto L_801F2398; } // 801F2380
  c->r[3]=c->r[29]+0x00000CE4u; // 801F2384
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F2388
  c->r[5]=0u+0x00000000u; // 801F238C
  c->r[6]=0u+0x00000000u; // 801F2390
  c->lr=0x801F2398u; f_800A9344(c); // 801F2394
L_801F2398:;
  c->r[3]=c->r[29]+0x00000AC8u; // 801F2398
  c->r[4]=0u+0x00000001u; // 801F239C
  c->lr=0x801F23A4u; f_800A8214(c); // 801F23A0
  c->r[3]=c->r[29]+0x00000CE4u; // 801F23A4
  c->r[4]=0u+0x00000000u; // 801F23A8
  c->lr=0x801F23B0u; f_800A935C(c); // 801F23AC
  c->r[3]=c->r[29]+0x000008CCu; // 801F23B0
  c->lr=0x801F23B8u; f_8006F114(c); // 801F23B4
  cmps(c,0,(int32_t)c->r[3],0); // 801F23B8
  if (crb(c,1)) { goto L_801F23E4; } // 801F23BC
  c->r[30]=0u+0x00000001u; // 801F23C0
  c->r[3]=c->r[29]|c->r[29]; // 801F23C4
  c->r[4]=0u+0x00000001u; // 801F23C8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F23CC
  c->r[12]=R32(c->r[12]+0x00000078u); // 801F23D0
  c->ctr=c->r[12]; // 801F23D4
  if (true) { c->lr=0x801F23DCu; dispatch(c,c->ctr); } // 801F23D8
  c->r[0]=0u+0x00000000u; // 801F23DC
  W32(c->r[29]+0x000009E8u,c->r[0]); // 801F23E0
L_801F23E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F23E4
  if (crb(c,2)) { goto L_801F2400; } // 801F23E8
  c->lr=0x801F23F0u; f_8007B524(c); // 801F23EC
  c->r[4]=c->r[1]+0x00000008u; // 801F23F0
  c->r[5]=0u+0x00000000u; // 801F23F4
  c->r[6]=0u+0x00000000u; // 801F23F8
  c->lr=0x801F2400u; f_800A1184(c); // 801F23FC
L_801F2400:;
  c->r[3]=0u+0x00000000u; // 801F2400
L_801F2404:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F2404
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F2408
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F240C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F2410
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F2414
  c->lr=c->r[0]; // 801F2418
  c->r[1]=c->r[1]+0x00000020u; // 801F241C
  return; // 801F2420
}

// fn_801F2424
void f_801F2424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2424
  c->r[0]=c->lr; // 801F2428
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F242C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2430
  c->r[31]=c->r[3]|c->r[3]; // 801F2434
  c->r[3]=c->r[3]+0x000008CCu; // 801F2438
  c->r[4]=0u+0x00000000u; // 801F243C
  c->lr=0x801F2444u; f_800B64E8(c); // 801F2440
  c->r[0]=0u+0x00000002u; // 801F2444
  W32(c->r[31]+0x00000A00u,c->r[0]); // 801F2448
  c->r[3]=c->r[31]|c->r[31]; // 801F244C
  c->r[4]=0u+0x00000000u; // 801F2450
  c->lr=0x801F2458u; f_800897E4(c); // 801F2454
  c->r[3]=c->r[31]|c->r[31]; // 801F2458
  c->r[4]=0u+0x00000000u; // 801F245C
  c->lr=0x801F2464u; f_80089858(c); // 801F2460
  {uint32_t ea=c->r[2]+0xFFFF9550u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F2464
  {uint32_t ea=c->r[31]+0x00000A30u; WF32(ea,c->f[0]);} // 801F2468
  c->r[3]=c->r[31]|c->r[31]; // 801F246C
  c->r[4]=0u+0x00000006u; // 801F2470
  c->lr=0x801F2478u; f_800897DC(c); // 801F2474
  c->r[3]=c->r[31]|c->r[31]; // 801F2478
  c->lr=0x801F2480u; f_80087D64(c); // 801F247C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2480
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2484
  c->lr=c->r[0]; // 801F2488
  c->r[1]=c->r[1]+0x00000010u; // 801F248C
  return; // 801F2490
}

// fn_801F2494
void f_801F2494(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2494
  c->r[0]=c->lr; // 801F2498
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F249C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F24A0
  c->r[31]=c->r[3]|c->r[3]; // 801F24A4
  c->lr=0x801F24ACu; f_80077934(c); // 801F24A8
  c->r[3]=0u+0x80470000u; // 801F24AC
  c->r[3]=c->r[3]+0x00005130u; // 801F24B0
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F24B4
  c->r[0]=c->r[3]+0x0000000Cu; // 801F24B8
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F24BC
  c->r[0]=c->r[3]+0x00000018u; // 801F24C0
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F24C4
  c->r[0]=c->r[3]+0x00000024u; // 801F24C8
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F24CC
  c->r[0]=c->r[3]+0x00000030u; // 801F24D0
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F24D4
  c->r[3]=c->r[31]+0x000008CCu; // 801F24D8
  c->lr=0x801F24E0u; f_8004B0A4(c); // 801F24DC
  c->r[3]=c->r[31]|c->r[31]; // 801F24E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F24E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F24E8
  c->lr=c->r[0]; // 801F24EC
  c->r[1]=c->r[1]+0x00000010u; // 801F24F0
  return; // 801F24F4
}

// dtor_801F24F8
void f_801F24F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F24F8
  c->r[0]=c->lr; // 801F24FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2504
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F2508
  c->r[30]=c->r[3]|c->r[3]; // 801F250C
  c->r[31]=c->r[4]|c->r[4]; // 801F2510
  cmps(c,0,(int32_t)c->r[3],0); // 801F2514
  if (crb(c,2)) { goto L_801F2538; } // 801F2518
  c->r[4]=0u+0x00000000u; // 801F251C
  c->lr=0x801F2524u; f_800779D0(c); // 801F2520
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F2524
  cmps(c,0,(int32_t)c->r[0],0); // 801F2528
  if (!crb(c,1)) { goto L_801F2538; } // 801F252C
  c->r[3]=c->r[30]|c->r[30]; // 801F2530
  c->lr=0x801F2538u; f_80047B20(c); // 801F2534
L_801F2538:;
  c->r[3]=c->r[30]|c->r[30]; // 801F2538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F253C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F2540
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2544
  c->lr=c->r[0]; // 801F2548
  c->r[1]=c->r[1]+0x00000010u; // 801F254C
  return; // 801F2550
}

// fn_801F2554
void f_801F2554(Ctx* __restrict c) {
  W32(c->r[3]+0x000008B4u,c->r[4]); // 801F2554
  return; // 801F2558
}

// fn_801F255C
void f_801F255C(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F255C
  c->r[12]=R32(c->r[12]+0x00000044u); // 801F2560
  c->ctr=c->r[12]; // 801F2564
  if (true) { dispatch(c,c->ctr); return; } // 801F2568
}

// fn_801F256C
void f_801F256C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F256C
  c->r[0]=c->lr; // 801F2570
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2578
  c->r[31]=c->r[3]|c->r[3]; // 801F257C
  c->r[0]=0u+0x00000000u; // 801F2580
  W32(c->r[3]+0x000008B8u,c->r[0]); // 801F2584
  c->r[4]=0u+0x00000000u; // 801F2588
  c->lr=0x801F2590u; f_801F2554(c); // 801F258C
  c->r[3]=c->r[31]|c->r[31]; // 801F2590
  c->r[4]=0u+0x00000000u; // 801F2594
  c->lr=0x801F259Cu; f_801F28B0(c); // 801F2598
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F259C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F25A0
  c->lr=c->r[0]; // 801F25A4
  c->r[1]=c->r[1]+0x00000010u; // 801F25A8
  return; // 801F25AC
}

// fn_801F25B0
void f_801F25B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F25B0
  c->r[0]=c->lr; // 801F25B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F25B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F25BC
  c->r[31]=c->r[3]|c->r[3]; // 801F25C0
  c->r[0]=R32(c->r[3]+0x000008B8u); // 801F25C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F25C8
  if (!crb(c,2)) { goto L_801F25E0; } // 801F25CC
  c->r[3]=c->r[3]+0x00000024u; // 801F25D0
  c->lr=0x801F25D8u; f_800536E8(c); // 801F25D4
  c->r[0]=0u+0x00000001u; // 801F25D8
  W32(c->r[31]+0x000008B8u,c->r[0]); // 801F25DC
L_801F25E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F25E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F25E4
  c->lr=c->r[0]; // 801F25E8
  c->r[1]=c->r[1]+0x00000010u; // 801F25EC
  return; // 801F25F0
}

// fn_801F25F4
void f_801F25F4(Ctx* __restrict c) {
  W32(c->r[3]+0x000008C4u,c->r[4]); // 801F25F4
  W32(c->r[3]+0x000008C8u,c->r[5]); // 801F25F8
  c->r[3]=c->r[3]+0x000008CCu; // 801F25FC
  cmps(c,0,(int32_t)c->r[6],0); // 801F2600
  if (crb(c,2)) { goto L_801F2610; } // 801F2604
  c->r[4]=c->r[6]|c->r[6]; // 801F2608
  goto L_801F2618; // 801F260C
L_801F2610:;
  c->r[4]=0u+0x804C0000u; // 801F2610
  c->r[4]=c->r[4]+0x000024A0u; // 801F2614
L_801F2618:;
  f_8004A65C(c); return; // 801F2618
}

// fn_801F261C
void f_801F261C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F261C
  c->r[0]=c->lr; // 801F2620
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F2624
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F2628
  c->r[31]=c->r[3]|c->r[3]; // 801F262C
  c->r[3]=c->r[3]+0x00000024u; // 801F2630
  c->lr=0x801F2638u; f_800ABEB4(c); // 801F2634
  cmps(c,0,(int32_t)c->r[3],0); // 801F2638
  if (crb(c,2)) { goto L_801F26A8; } // 801F263C
  c->r[3]=c->r[1]+0x00000010u; // 801F2640
  c->lr=0x801F2648u; f_8004B0A4(c); // 801F2644
  c->r[3]=c->r[31]+0x00000024u; // 801F2648
  c->r[4]=c->r[1]+0x00000010u; // 801F264C
  c->lr=0x801F2654u; f_8006E4CC(c); // 801F2650
  c->r[3]=c->r[1]+0x00000010u; // 801F2654
  c->r[4]=c->r[3]|c->r[3]; // 801F2658
  c->r[5]=c->r[31]+0x000008CCu; // 801F265C
  c->lr=0x801F2664u; f_8005C194(c); // 801F2660
  c->lr=0x801F2668u; f_8006E5AC(c); // 801F2664
  c->r[0]=0u+0x00000000u; // 801F2668
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F266C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F2670
  c->r[4]=R32(c->r[31]+0x000008C4u); // 801F2674
  c->r[5]=0u+0x00000001u; // 801F2678
  c->r[6]=c->r[1]+0x00000010u; // 801F267C
  c->r[7]=0u+0x00000000u; // 801F2680
  c->r[8]=0u+0x00000000u; // 801F2684
  c->r[9]=0u+0x00000000u; // 801F2688
  c->r[10]=0u+0x00000000u; // 801F268C
  c->lr=0x801F2694u; f_8010AA7C(c); // 801F2690
  W32(c->r[31]+0x000008C0u,c->r[3]); // 801F2694
  c->r[4]=R32(c->r[31]+0x000008C8u); // 801F2698
  c->lr=0x801F26A0u; f_8010B2AC(c); // 801F269C
  c->r[0]=0u+0x00000001u; // 801F26A0
  W32(c->r[31]+0x000008BCu,c->r[0]); // 801F26A4
L_801F26A8:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F26A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F26AC
  c->lr=c->r[0]; // 801F26B0
  c->r[1]=c->r[1]+0x00000030u; // 801F26B4
  return; // 801F26B8
}

// fn_801F26BC
void f_801F26BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F26BC
  c->r[0]=c->lr; // 801F26C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F26C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F26C8
  c->r[31]=c->r[3]|c->r[3]; // 801F26CC
  c->lr=0x801F26D4u; f_8006E5AC(c); // 801F26D0
  c->r[4]=R32(c->r[31]+0x000008C0u); // 801F26D4
  c->r[5]=R32(c->r[31]+0x000008C8u); // 801F26D8
  c->lr=0x801F26E0u; f_8010AB10(c); // 801F26DC
  c->r[0]=0u+0x00000000u; // 801F26E0
  W32(c->r[31]+0x000008BCu,c->r[0]); // 801F26E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F26E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F26EC
  c->lr=c->r[0]; // 801F26F0
  c->r[1]=c->r[1]+0x00000010u; // 801F26F4
  return; // 801F26F8
}

// fn_801F26FC
void f_801F26FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F26FC
  c->r[0]=c->lr; // 801F2700
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2708
  c->r[31]=c->r[3]|c->r[3]; // 801F270C
  c->r[0]=R32(c->r[3]+0x00000890u); // 801F2710
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801F2714
  c->r[4]=0u+0x80430000u; // 801F2718
  c->r[0]=c->r[4]+0x00001E68u; // 801F271C
  c->r[12]=c->r[0]+c->r[5]; // 801F2720
  c->lr=0x801F2728u; f_802F09D0(c); // 801F2724
  c->r[0]=c->r[0]|0x00000000u; // 801F2728
  c->r[3]=c->r[31]|c->r[31]; // 801F272C
  c->lr=0x801F2734u; f_801F255C(c); // 801F2730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2734
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2738
  c->lr=c->r[0]; // 801F273C
  c->r[1]=c->r[1]+0x00000010u; // 801F2740
  return; // 801F2744
}

// fn_801F2748
void f_801F2748(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801F2748
  f_801F28B0(c); return; // 801F274C
}

// fn_801F2750
void f_801F2750(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801F2750
  W32(c->r[3]+0x000008BCu,c->r[0]); // 801F2754
  c->r[4]=0u+0x00000002u; // 801F2758
  f_801F28B0(c); return; // 801F275C
}

// fn_801F2760
void f_801F2760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2760
  c->r[0]=c->lr; // 801F2764
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F2768
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F276C
  c->r[31]=c->r[3]|c->r[3]; // 801F2770
  c->r[3]=c->r[3]+0x00000024u; // 801F2774
  c->lr=0x801F277Cu; f_800ABEB4(c); // 801F2778
  cmps(c,0,(int32_t)c->r[3],0); // 801F277C
  if (crb(c,2)) { goto L_801F27C0; } // 801F2780
  c->r[0]=R32(c->r[31]+0x000008BCu); // 801F2784
  cmps(c,0,(int32_t)c->r[0],0); // 801F2788
  if (crb(c,2)) { goto L_801F27C0; } // 801F278C
  c->r[3]=c->r[1]+0x00000008u; // 801F2790
  c->lr=0x801F2798u; f_8004B0A4(c); // 801F2794
  c->r[3]=c->r[31]+0x00000024u; // 801F2798
  c->r[4]=c->r[1]+0x00000008u; // 801F279C
  c->lr=0x801F27A4u; f_8006E4CC(c); // 801F27A0
  c->r[3]=c->r[1]+0x00000008u; // 801F27A4
  c->r[4]=c->r[3]|c->r[3]; // 801F27A8
  c->r[5]=c->r[31]+0x000008CCu; // 801F27AC
  c->lr=0x801F27B4u; f_8005C194(c); // 801F27B0
  c->r[3]=R32(c->r[31]+0x000008C0u); // 801F27B4
  c->r[4]=c->r[1]+0x00000008u; // 801F27B8
  c->lr=0x801F27C0u; f_8006E5B4(c); // 801F27BC
L_801F27C0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F27C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F27C4
  c->lr=c->r[0]; // 801F27C8
  c->r[1]=c->r[1]+0x00000020u; // 801F27CC
  return; // 801F27D0
}

// fn_801F27D4
void f_801F27D4(Ctx* __restrict c) {
  return; // 801F27D4
}

// fn_801F27D8
void f_801F27D8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F27D8
  f_801F1BB8(c); return; // 801F27DC
}

// fn_801F27E0
void f_801F27E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F27E0
  f_801F1BB8(c); return; // 801F27E4
}

// fn_801F27E8
void f_801F27E8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F27E8
  f_801F1BB8(c); return; // 801F27EC
}

// fn_801F27F0
void f_801F27F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F27F0
  f_801F1BB8(c); return; // 801F27F4
}

// fn_801F27F8
void f_801F27F8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F27F8
  f_801F24F8(c); return; // 801F27FC
}

// fn_801F2800
void f_801F2800(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F2800
  f_801F24F8(c); return; // 801F2804
}

// fn_801F2808
void f_801F2808(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F2808
  f_801F24F8(c); return; // 801F280C
}

// fn_801F2810
void f_801F2810(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F2810
  f_801F24F8(c); return; // 801F2814
}

// fn_801F2818
void f_801F2818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2818
  c->r[0]=c->lr; // 801F281C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2824
  c->r[31]=c->r[3]|c->r[3]; // 801F2828
  c->r[3]=c->r[4]|c->r[4]; // 801F282C
  c->r[4]=0u+0x00000000u; // 801F2830
  c->r[5]=R32(c->r[31]+0x00000024u); // 801F2834
  c->lr=0x801F283Cu; f_800592BC(c); // 801F2838
  W32(c->r[31]+0x00000028u,c->r[3]); // 801F283C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2840
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2844
  c->lr=c->r[0]; // 801F2848
  c->r[1]=c->r[1]+0x00000010u; // 801F284C
  return; // 801F2850
}

// fn_801F2854
void f_801F2854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2854
  c->r[0]=c->lr; // 801F2858
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F285C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2860
  c->r[31]=c->r[3]|c->r[3]; // 801F2864
  c->r[3]=c->r[4]|c->r[4]; // 801F2868
  c->r[4]=0u+0x00000000u; // 801F286C
  c->r[5]=0u+0x0000270Fu; // 801F2870
  c->lr=0x801F2878u; f_800592BC(c); // 801F2874
  W32(c->r[31]+0x00000024u,c->r[3]); // 801F2878
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F287C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2880
  c->lr=c->r[0]; // 801F2884
  c->r[1]=c->r[1]+0x00000010u; // 801F2888
  return; // 801F288C
}

// fn_801F2890
void f_801F2890(Ctx* __restrict c) {
  W32(c->r[3]+0x000011BCu,c->r[4]); // 801F2890
  return; // 801F2894
}

// fn_801F2898
void f_801F2898(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000011B8u); // 801F2898
  return; // 801F289C
}

// fn_801F28A0
void f_801F28A0(Ctx* __restrict c) {
  W32(c->r[3]+0x000011B8u,c->r[4]); // 801F28A0
  return; // 801F28A4
}

// fn_801F28A8
void f_801F28A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000011BCu); // 801F28A8
  return; // 801F28AC
}

// fn_801F28B0
void f_801F28B0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000890u,c->r[4]); // 801F28B0
  return; // 801F28B4
}

// fn_801F28B8
void f_801F28B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F28B8
  c->r[0]=c->lr; // 801F28BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F28C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F28C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F28C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F28CC
  c->r[31]=c->r[3]|c->r[3]; // 801F28D0
  c->lr=0x801F28D8u; f_80078B74(c); // 801F28D4
  c->r[3]=0u+0x80470000u; // 801F28D8
  c->r[0]=c->r[3]+0x00005284u; // 801F28DC
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F28E0
  c->r[3]=c->r[31]+0x000000C8u; // 801F28E4
  c->r[29]=0u+0x800F0000u; // 801F28E8
  c->r[4]=c->r[29]+0x000019A4u; // 801F28EC
  c->r[30]=0u+0x800F0000u; // 801F28F0
  c->r[5]=c->r[30]+0x00001A14u; // 801F28F4
  c->r[6]=0u+0x000008C4u; // 801F28F8
  c->r[7]=0u+0x00000010u; // 801F28FC
  c->lr=0x801F2904u; f_802F07B0(c); // 801F2900
  c->r[3]=c->r[31]+0x00010000u; // 801F2904
  c->r[3]=c->r[3]+0xFFFF8DD0u; // 801F2908
  c->r[4]=c->r[29]+0x000019A4u; // 801F290C
  c->r[5]=c->r[30]+0x00001A14u; // 801F2910
  c->r[6]=0u+0x000008C4u; // 801F2914
  c->r[7]=0u+0x00000004u; // 801F2918
  c->lr=0x801F2920u; f_802F07B0(c); // 801F291C
  c->r[3]=c->r[31]+0x00010000u; // 801F2920
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2924
  c->lr=0x801F292Cu; f_800F1B48(c); // 801F2928
  c->r[3]=c->r[31]|c->r[31]; // 801F292C
  c->r[4]=0u+0x80470000u; // 801F2930
  c->r[4]=c->r[4]+0x00005278u; // 801F2934
  c->lr=0x801F293Cu; f_80078E9C(c); // 801F2938
  c->lr=0x801F2940u; f_8007B524(c); // 801F293C
  c->lr=0x801F2944u; f_8006E224(c); // 801F2940
  c->r[4]=c->r[3]|c->r[3]; // 801F2944
  c->r[3]=c->r[31]|c->r[31]; // 801F2948
  c->r[5]=0u+0x00000000u; // 801F294C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F2950
  c->r[12]=R32(c->r[12]+0x00000010u); // 801F2954
  c->ctr=c->r[12]; // 801F2958
  if (true) { c->lr=0x801F2960u; dispatch(c,c->ctr); } // 801F295C
  c->r[5]=0u+0x00000000u; // 801F2960
  W32(c->r[31]+0x000000B8u,c->r[5]); // 801F2964
  W32(c->r[31]+0x000000C0u,c->r[5]); // 801F2968
  W32(c->r[31]+0x000000C4u,c->r[5]); // 801F296C
  c->r[3]=c->r[31]+0x00010000u; // 801F2970
  W32(c->r[3]+0xFFFF8DCCu,c->r[5]); // 801F2974
  c->r[11]=0u+0x00000000u; // 801F2978
  c->r[6]=c->r[3]+0xFFFFB76Cu; // 801F297C
  c->r[3]=0u+0xFFFFFFFEu; // 801F2980
  c->r[4]=0u+0xFFFFFFFFu; // 801F2984
  c->r[0]=0u+0x00000002u; // 801F2988
L_801F298C:;
  W32(c->r[6]+0x00000000u,c->r[11]); // 801F298C
  W32(c->r[6]+0x00000004u,c->r[4]); // 801F2990
  W32(c->r[6]+0x00000010u,c->r[5]); // 801F2994
  c->r[12]=0u+0x00000000u; // 801F2998
  c->r[7]=c->r[6]|c->r[6]; // 801F299C
  c->r[8]=c->r[6]|c->r[6]; // 801F29A0
L_801F29A4:;
  c->r[9]=c->r[7]|c->r[7]; // 801F29A4
  c->r[10]=c->r[8]|c->r[8]; // 801F29A8
  c->ctr=c->r[0]; // 801F29AC
L_801F29B0:;
  W16(c->r[9]+0x00001020u,c->r[3]); // 801F29B0
  W32(c->r[10]+0x00000020u,c->r[5]); // 801F29B4
  W16(c->r[9]+0x00001022u,c->r[3]); // 801F29B8
  W32(c->r[10]+0x00000024u,c->r[5]); // 801F29BC
  W16(c->r[9]+0x00001024u,c->r[3]); // 801F29C0
  W32(c->r[10]+0x00000028u,c->r[5]); // 801F29C4
  W16(c->r[9]+0x00001026u,c->r[3]); // 801F29C8
  W32(c->r[10]+0x0000002Cu,c->r[5]); // 801F29CC
  W16(c->r[9]+0x00001028u,c->r[3]); // 801F29D0
  W32(c->r[10]+0x00000030u,c->r[5]); // 801F29D4
  W16(c->r[9]+0x0000102Au,c->r[3]); // 801F29D8
  W32(c->r[10]+0x00000034u,c->r[5]); // 801F29DC
  W16(c->r[9]+0x0000102Cu,c->r[3]); // 801F29E0
  W32(c->r[10]+0x00000038u,c->r[5]); // 801F29E4
  W16(c->r[9]+0x0000102Eu,c->r[3]); // 801F29E8
  W32(c->r[10]+0x0000003Cu,c->r[5]); // 801F29EC
  W16(c->r[9]+0x00001030u,c->r[3]); // 801F29F0
  W32(c->r[10]+0x00000040u,c->r[5]); // 801F29F4
  W16(c->r[9]+0x00001032u,c->r[3]); // 801F29F8
  W32(c->r[10]+0x00000044u,c->r[5]); // 801F29FC
  W16(c->r[9]+0x00001034u,c->r[3]); // 801F2A00
  W32(c->r[10]+0x00000048u,c->r[5]); // 801F2A04
  W16(c->r[9]+0x00001036u,c->r[3]); // 801F2A08
  W32(c->r[10]+0x0000004Cu,c->r[5]); // 801F2A0C
  W16(c->r[9]+0x00001038u,c->r[3]); // 801F2A10
  W32(c->r[10]+0x00000050u,c->r[5]); // 801F2A14
  W16(c->r[9]+0x0000103Au,c->r[3]); // 801F2A18
  W32(c->r[10]+0x00000054u,c->r[5]); // 801F2A1C
  W16(c->r[9]+0x0000103Cu,c->r[3]); // 801F2A20
  W32(c->r[10]+0x00000058u,c->r[5]); // 801F2A24
  W16(c->r[9]+0x0000103Eu,c->r[3]); // 801F2A28
  W32(c->r[10]+0x0000005Cu,c->r[5]); // 801F2A2C
  c->r[9]=c->r[9]+0x00000020u; // 801F2A30
  c->r[10]=c->r[10]+0x00000040u; // 801F2A34
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801F29B0; } // 801F2A38
  c->r[7]=c->r[7]+0x00000040u; // 801F2A3C
  c->r[8]=c->r[8]+0x00000080u; // 801F2A40
  c->r[12]=c->r[12]+0x00000001u; // 801F2A44
  cmpu(c,0,c->r[12],0x00000020u); // 801F2A48
  if (crb(c,0)) { IRQCHK(c); goto L_801F29A4; } // 801F2A4C
  c->r[6]=c->r[6]+0x00001820u; // 801F2A50
  c->r[11]=c->r[11]+0x00000001u; // 801F2A54
  cmpu(c,0,c->r[11],0x00000020u); // 801F2A58
  if (crb(c,0)) { IRQCHK(c); goto L_801F298C; } // 801F2A5C
  c->r[3]=c->r[31]|c->r[31]; // 801F2A60
  c->r[4]=0u+0x00000000u; // 801F2A64
  c->lr=0x801F2A6Cu; f_801F329C(c); // 801F2A68
  c->r[3]=c->r[31]|c->r[31]; // 801F2A6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F2A70
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F2A74
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F2A78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F2A7C
  c->lr=c->r[0]; // 801F2A80
  c->r[1]=c->r[1]+0x00000020u; // 801F2A84
  return; // 801F2A88
}

// fn_801F2A8C
void f_801F2A8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2A8C
  c->r[0]=c->lr; // 801F2A90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F2A94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F2A98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F2A9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F2AA0
  c->r[29]=c->r[3]|c->r[3]; // 801F2AA4
  c->r[30]=c->r[4]|c->r[4]; // 801F2AA8
  cmps(c,0,(int32_t)c->r[3],0); // 801F2AAC
  if (crb(c,2)) { goto L_801F2B40; } // 801F2AB0
  c->r[4]=0u+0x80470000u; // 801F2AB4
  c->r[0]=c->r[4]+0x00005284u; // 801F2AB8
  W32(c->r[3]+0x00000058u,c->r[0]); // 801F2ABC
  c->lr=0x801F2AC4u; f_8007B524(c); // 801F2AC0
  c->lr=0x801F2AC8u; f_8006E224(c); // 801F2AC4
  c->r[4]=c->r[3]|c->r[3]; // 801F2AC8
  c->r[3]=c->r[29]|c->r[29]; // 801F2ACC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F2AD0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801F2AD4
  c->ctr=c->r[12]; // 801F2AD8
  if (true) { c->lr=0x801F2AE0u; dispatch(c,c->ctr); } // 801F2ADC
  c->r[3]=c->r[29]+0x00010000u; // 801F2AE0
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2AE4
  c->r[4]=0u+0xFFFFFFFFu; // 801F2AE8
  c->lr=0x801F2AF0u; f_800F1B94(c); // 801F2AEC
  c->r[3]=c->r[29]+0x00010000u; // 801F2AF0
  c->r[3]=c->r[3]+0xFFFF8DD0u; // 801F2AF4
  c->r[31]=0u+0x800F0000u; // 801F2AF8
  c->r[4]=c->r[31]+0x00001A14u; // 801F2AFC
  c->r[5]=0u+0x000008C4u; // 801F2B00
  c->r[6]=0u+0x00000004u; // 801F2B04
  c->lr=0x801F2B0Cu; f_802F08A8(c); // 801F2B08
  c->r[3]=c->r[29]+0x000000C8u; // 801F2B0C
  c->r[4]=c->r[31]+0x00001A14u; // 801F2B10
  c->r[5]=0u+0x000008C4u; // 801F2B14
  c->r[6]=0u+0x00000010u; // 801F2B18
  c->lr=0x801F2B20u; f_802F08A8(c); // 801F2B1C
  c->r[3]=c->r[29]|c->r[29]; // 801F2B20
  c->r[4]=0u+0x00000000u; // 801F2B24
  c->lr=0x801F2B2Cu; f_80078BF0(c); // 801F2B28
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801F2B2C
  cmps(c,0,(int32_t)c->r[0],0); // 801F2B30
  if (!crb(c,1)) { goto L_801F2B40; } // 801F2B34
  c->r[3]=c->r[29]|c->r[29]; // 801F2B38
  c->lr=0x801F2B40u; f_80047B20(c); // 801F2B3C
L_801F2B40:;
  c->r[3]=c->r[29]|c->r[29]; // 801F2B40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F2B44
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F2B48
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F2B4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F2B50
  c->lr=c->r[0]; // 801F2B54
  c->r[1]=c->r[1]+0x00000020u; // 801F2B58
  return; // 801F2B5C
}

// fn_801F2B60
void f_801F2B60(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801F2B60
  f_801F329C(c); return; // 801F2B64
}

// fn_801F2B68
void f_801F2B68(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 801F2B68
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 801F2B6C
  c->r[0]=0u-c->r[3]; // 801F2B70
  c->r[0]=c->r[0]|c->r[3]; // 801F2B74
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F2B78
  return; // 801F2B7C
}

// fn_801F2B80
void f_801F2B80(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 801F2B80
  f_801F329C(c); return; // 801F2B84
}

// fn_801F2B88
void f_801F2B88(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 801F2B88
  return; // 801F2B8C
}

// fn_801F2B90
void f_801F2B90(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 801F2B90
  f_801F329C(c); return; // 801F2B94
}

// fn_801F2B98
void f_801F2B98(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 801F2B98
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 801F2B9C
  c->r[0]=0u-c->r[3]; // 801F2BA0
  c->r[0]=c->r[0]|c->r[3]; // 801F2BA4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F2BA8
  return; // 801F2BAC
}

// fn_801F2BB0
void f_801F2BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2BB0
  c->r[0]=c->lr; // 801F2BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2BB8
  c->r[0]=R32(c->r[3]+0x000000B0u); // 801F2BBC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801F2BC0
  c->r[4]=0u+0x80430000u; // 801F2BC4
  c->r[0]=c->r[4]+0x00001E98u; // 801F2BC8
  c->r[12]=c->r[0]+c->r[5]; // 801F2BCC
  c->lr=0x801F2BD4u; f_802F09D0(c); // 801F2BD0
  c->r[0]=c->r[0]|0x00000000u; // 801F2BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2BD8
  c->lr=c->r[0]; // 801F2BDC
  c->r[1]=c->r[1]+0x00000010u; // 801F2BE0
  return; // 801F2BE4
}

// fn_801F2BE8
void f_801F2BE8(Ctx* __restrict c) {
  return; // 801F2BE8
}

// fn_801F2BEC
void f_801F2BEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2BEC
  c->r[0]=c->lr; // 801F2BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2BF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2BF8
  c->r[31]=c->r[3]|c->r[3]; // 801F2BFC
  c->lr=0x801F2C04u; f_8007B524(c); // 801F2C00
  c->lr=0x801F2C08u; f_8006E224(c); // 801F2C04
  c->lr=0x801F2C0Cu; f_800897A8(c); // 801F2C08
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F2C0C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801F2C10
  c->ctr=c->r[12]; // 801F2C14
  if (true) { c->lr=0x801F2C1Cu; dispatch(c,c->ctr); } // 801F2C18
  cmps(c,0,(int32_t)c->r[3],0); // 801F2C1C
  if (crb(c,2)) { goto L_801F2C44; } // 801F2C20
  c->r[0]=0u+0x00000000u; // 801F2C24
  W32(c->r[31]+0x000000BCu,c->r[0]); // 801F2C28
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F2C2C
  c->r[3]=c->r[31]+0x00010000u; // 801F2C30
  W32(c->r[3]+0xFFFF8D08u,c->r[0]); // 801F2C34
  c->r[3]=c->r[31]|c->r[31]; // 801F2C38
  c->r[4]=0u+0x00000002u; // 801F2C3C
  c->lr=0x801F2C44u; f_801F329C(c); // 801F2C40
L_801F2C44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2C44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2C48
  c->lr=c->r[0]; // 801F2C4C
  c->r[1]=c->r[1]+0x00000010u; // 801F2C50
  return; // 801F2C54
}

// fn_801F2C58
void f_801F2C58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2C58
  c->r[0]=c->lr; // 801F2C5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F2C60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F2C64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F2C68
  c->r[30]=c->r[3]|c->r[3]; // 801F2C6C
  c->lr=0x801F2C74u; f_8007B524(c); // 801F2C70
  c->lr=0x801F2C78u; f_8006E224(c); // 801F2C74
  c->lr=0x801F2C7Cu; f_800897A8(c); // 801F2C78
  c->r[31]=c->r[3]|c->r[3]; // 801F2C7C
  c->r[3]=c->r[30]|c->r[30]; // 801F2C80
  c->lr=0x801F2C88u; f_801F2DE0(c); // 801F2C84
  c->r[3]=c->r[30]|c->r[30]; // 801F2C88
  c->lr=0x801F2C90u; f_801F30F0(c); // 801F2C8C
  c->r[3]=c->r[31]|c->r[31]; // 801F2C90
  c->lr=0x801F2C98u; f_8006A930(c); // 801F2C94
  c->r[0]=R32(c->r[30]+0x000000B8u); // 801F2C98
  c->r[0]=c->r[0]|0x00000001u; // 801F2C9C
  W32(c->r[30]+0x000000B8u,c->r[0]); // 801F2CA0
  c->r[3]=c->r[30]|c->r[30]; // 801F2CA4
  c->r[4]=0u+0x00000003u; // 801F2CA8
  c->lr=0x801F2CB0u; f_801F329C(c); // 801F2CAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F2CB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F2CB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F2CB8
  c->lr=c->r[0]; // 801F2CBC
  c->r[1]=c->r[1]+0x00000010u; // 801F2CC0
  return; // 801F2CC4
}

// fn_801F2CC8
void f_801F2CC8(Ctx* __restrict c) {
  return; // 801F2CC8
}

// fn_801F2CCC
void f_801F2CCC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 801F2CCC
  f_801F329C(c); return; // 801F2CD0
}

// fn_801F2CD4
void f_801F2CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2CD4
  c->r[0]=c->lr; // 801F2CD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F2CDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F2CE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F2CE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F2CE8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F2CEC
  c->r[28]=c->r[3]|c->r[3]; // 801F2CF0
  c->r[3]=0u+0x00000003u; // 801F2CF4
  c->lr=0x801F2CFCu; f_8005D854(c); // 801F2CF8
  c->r[29]=0u+0x00000000u; // 801F2CFC
  c->r[30]=c->r[28]+0x000000C8u; // 801F2D00
  goto L_801F2D34; // 801F2D04
L_801F2D08:;
  c->r[4]=c->r[30]|c->r[30]; // 801F2D08
  cmps(c,0,(int32_t)c->r[30],0); // 801F2D0C
  if (crb(c,2)) { goto L_801F2D18; } // 801F2D10
  c->r[4]=c->r[30]+0x000002B4u; // 801F2D14
L_801F2D18:;
  c->r[3]=c->r[28]+0x00010000u; // 801F2D18
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2D1C
  c->lr=0x801F2D24u; f_800F1CF4(c); // 801F2D20
  c->r[3]=c->r[30]|c->r[30]; // 801F2D24
  c->lr=0x801F2D2Cu; f_800780CC(c); // 801F2D28
  c->r[30]=c->r[30]+0x000008C4u; // 801F2D2C
  c->r[29]=c->r[29]+0x00000001u; // 801F2D30
L_801F2D34:;
  c->r[0]=R32(c->r[28]+0x000000C4u); // 801F2D34
  cmpu(c,0,c->r[29],c->r[0]); // 801F2D38
  if (crb(c,0)) { IRQCHK(c); goto L_801F2D08; } // 801F2D3C
  c->r[29]=0u+0x00000000u; // 801F2D40
  c->r[30]=c->r[28]+0x00010000u; // 801F2D44
  c->r[30]=c->r[30]+0xFFFF8DD0u; // 801F2D48
  c->r[31]=c->r[28]+0x00010000u; // 801F2D4C
  goto L_801F2D80; // 801F2D50
L_801F2D54:;
  c->r[4]=c->r[30]|c->r[30]; // 801F2D54
  cmps(c,0,(int32_t)c->r[30],0); // 801F2D58
  if (crb(c,2)) { goto L_801F2D64; } // 801F2D5C
  c->r[4]=c->r[30]+0x000002B4u; // 801F2D60
L_801F2D64:;
  c->r[3]=c->r[28]+0x00010000u; // 801F2D64
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2D68
  c->lr=0x801F2D70u; f_800F1CF4(c); // 801F2D6C
  c->r[3]=c->r[30]|c->r[30]; // 801F2D70
  c->lr=0x801F2D78u; f_800780CC(c); // 801F2D74
  c->r[30]=c->r[30]+0x000008C4u; // 801F2D78
  c->r[29]=c->r[29]+0x00000001u; // 801F2D7C
L_801F2D80:;
  c->r[0]=R32(c->r[31]+0xFFFF8DCCu); // 801F2D80
  cmpu(c,0,c->r[29],c->r[0]); // 801F2D84
  if (crb(c,0)) { IRQCHK(c); goto L_801F2D54; } // 801F2D88
  c->r[3]=0u+0x00000003u; // 801F2D8C
  c->lr=0x801F2D94u; f_8005D8D8(c); // 801F2D90
  c->r[3]=c->r[28]+0x00010000u; // 801F2D94
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2D98
  c->lr=0x801F2DA0u; f_800F1D58(c); // 801F2D9C
  c->r[0]=R32(c->r[28]+0x000000B8u); // 801F2DA0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801F2DA4
  W32(c->r[28]+0x000000B8u,c->r[0]); // 801F2DA8
  c->r[0]=c->r[0]|0x00000002u; // 801F2DAC
  W32(c->r[28]+0x000000B8u,c->r[0]); // 801F2DB0
  c->r[3]=c->r[28]|c->r[28]; // 801F2DB4
  c->r[4]=0u+0x00000000u; // 801F2DB8
  c->lr=0x801F2DC0u; f_801F329C(c); // 801F2DBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F2DC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F2DC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F2DC8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F2DCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F2DD0
  c->lr=c->r[0]; // 801F2DD4
  c->r[1]=c->r[1]+0x00000020u; // 801F2DD8
  return; // 801F2DDC
}

// fn_801F2DE0
void f_801F2DE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2DE0
  c->r[0]=c->lr; // 801F2DE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F2DE8
  c->r[11]=c->r[1]+0x00000020u; // 801F2DEC
  c->lr=0x801F2DF4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F2DF0
  c->r[26]=c->r[3]|c->r[3]; // 801F2DF4
  c->lr=0x801F2DFCu; f_8007B524(c); // 801F2DF8
  c->lr=0x801F2E00u; f_8006E224(c); // 801F2DFC
  c->lr=0x801F2E04u; f_800897A8(c); // 801F2E00
  c->lr=0x801F2E08u; f_8007B524(c); // 801F2E04
  c->lr=0x801F2E0Cu; f_8006E224(c); // 801F2E08
  c->lr=0x801F2E10u; f_8006E3AC(c); // 801F2E0C
  c->r[3]=c->r[3]+0x00000864u; // 801F2E10
  c->r[4]=0u+0x00000000u; // 801F2E14
  c->lr=0x801F2E1Cu; f_8006E53C(c); // 801F2E18
  c->lr=0x801F2E20u; f_8006E4F4(c); // 801F2E1C
  c->r[4]=0u+0x00000003u; // 801F2E20
  c->lr=0x801F2E28u; f_8006E4E4(c); // 801F2E24
  c->lr=0x801F2E2Cu; f_8006E4F4(c); // 801F2E28
  c->r[28]=c->r[3]|c->r[3]; // 801F2E2C
  c->r[3]=0u+0x00000003u; // 801F2E30
  c->lr=0x801F2E38u; f_8005D854(c); // 801F2E34
  c->lr=0x801F2E3Cu; f_8007B524(c); // 801F2E38
  c->r[4]=0u+0x00000009u; // 801F2E3C
  c->lr=0x801F2E44u; f_800A1B48(c); // 801F2E40
  c->r[6]=c->r[3]|c->r[3]; // 801F2E44
  c->r[3]=c->r[26]+0x00010000u; // 801F2E48
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2E4C
  c->r[4]=0u+0x00000001u; // 801F2E50
  c->r[5]=0u+0x00000000u; // 801F2E54
  c->lr=0x801F2E5Cu; f_800F1C00(c); // 801F2E58
  c->r[3]=c->r[28]|c->r[28]; // 801F2E5C
  c->lr=0x801F2E64u; f_8006E54C(c); // 801F2E60
  c->r[31]=c->r[26]+0x00010000u; // 801F2E64
  W32(c->r[31]+0xFFFF8DCCu,c->r[3]); // 801F2E68
  c->r[27]=0u+0x00000000u; // 801F2E6C
  c->r[30]=c->r[31]+0xFFFF8DD0u; // 801F2E70
  goto L_801F2EFC; // 801F2E74
L_801F2E78:;
  c->r[3]=c->r[28]|c->r[28]; // 801F2E78
  c->r[4]=c->r[27]|c->r[27]; // 801F2E7C
  c->lr=0x801F2E84u; f_8006E554(c); // 801F2E80
  c->r[29]=c->r[3]|c->r[3]; // 801F2E84
  c->lr=0x801F2E8Cu; f_8007B524(c); // 801F2E88
  c->r[4]=0u+0x00000009u; // 801F2E8C
  c->lr=0x801F2E94u; f_800A1B48(c); // 801F2E90
  c->r[4]=c->r[3]|c->r[3]; // 801F2E94
  c->r[3]=c->r[30]|c->r[30]; // 801F2E98
  c->lr=0x801F2EA0u; f_80077A90(c); // 801F2E9C
  c->r[3]=c->r[29]|c->r[29]; // 801F2EA0
  c->lr=0x801F2EA8u; f_8006E56C(c); // 801F2EA4
  c->r[4]=c->r[3]|c->r[3]; // 801F2EA8
  c->r[3]=c->r[30]|c->r[30]; // 801F2EAC
  c->r[5]=0u+0x00000011u; // 801F2EB0
  c->r[6]=0u+0x00000000u; // 801F2EB4
  c->r[7]=0u+0x00000001u; // 801F2EB8
  c->r[8]=0u+0x00000000u; // 801F2EBC
  c->lr=0x801F2EC4u; f_80077B88(c); // 801F2EC0
  c->r[3]=c->r[30]|c->r[30]; // 801F2EC4
  c->lr=0x801F2ECCu; f_800F1A78(c); // 801F2EC8
  c->r[3]=c->r[30]+0x00000024u; // 801F2ECC
  c->r[4]=0u+0x00000000u; // 801F2ED0
  c->lr=0x801F2ED8u; f_800534E4(c); // 801F2ED4
  c->r[4]=c->r[30]|c->r[30]; // 801F2ED8
  cmps(c,0,(int32_t)c->r[30],0); // 801F2EDC
  if (crb(c,2)) { goto L_801F2EE8; } // 801F2EE0
  c->r[4]=c->r[30]+0x000002B4u; // 801F2EE4
L_801F2EE8:;
  c->r[3]=c->r[26]+0x00010000u; // 801F2EE8
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F2EEC
  c->lr=0x801F2EF4u; f_800F1C90(c); // 801F2EF0
  c->r[30]=c->r[30]+0x000008C4u; // 801F2EF4
  c->r[27]=c->r[27]+0x00000001u; // 801F2EF8
L_801F2EFC:;
  c->r[0]=R32(c->r[31]+0xFFFF8DCCu); // 801F2EFC
  cmpu(c,0,c->r[27],c->r[0]); // 801F2F00
  if (crb(c,0)) { IRQCHK(c); goto L_801F2E78; } // 801F2F04
  c->r[3]=0u+0x00000003u; // 801F2F08
  c->lr=0x801F2F10u; f_8005D8D8(c); // 801F2F0C
  c->r[11]=c->r[1]+0x00000020u; // 801F2F10
  c->lr=0x801F2F18u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F2F14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F2F18
  c->lr=c->r[0]; // 801F2F1C
  c->r[1]=c->r[1]+0x00000020u; // 801F2F20
  return; // 801F2F24
}

// fn_801F2F28
void f_801F2F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F2F28
  c->r[0]=c->lr; // 801F2F2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F2F30
  c->r[11]=c->r[1]+0x00000050u; // 801F2F34
  c->lr=0x801F2F3Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F2F38
  c->r[31]=c->r[3]|c->r[3]; // 801F2F3C
  c->r[23]=c->r[4]|c->r[4]; // 801F2F40
  c->r[24]=c->r[5]|c->r[5]; // 801F2F44
  c->r[25]=c->r[6]|c->r[6]; // 801F2F48
  c->lr=0x801F2F50u; f_8007B524(c); // 801F2F4C
  c->lr=0x801F2F54u; f_8006E224(c); // 801F2F50
  c->lr=0x801F2F58u; f_800897A8(c); // 801F2F54
  c->r[27]=c->r[3]|c->r[3]; // 801F2F58
  c->lr=0x801F2F60u; f_8007B524(c); // 801F2F5C
  c->lr=0x801F2F64u; f_8006E224(c); // 801F2F60
  c->lr=0x801F2F68u; f_8006E3AC(c); // 801F2F64
  c->r[3]=c->r[3]+0x00000864u; // 801F2F68
  c->r[4]=0u+0x00000000u; // 801F2F6C
  c->lr=0x801F2F74u; f_8006E53C(c); // 801F2F70
  c->lr=0x801F2F78u; f_8006E4F4(c); // 801F2F74
  c->r[4]=0u+0x00000003u; // 801F2F78
  c->lr=0x801F2F80u; f_8006E4E4(c); // 801F2F7C
  c->lr=0x801F2F84u; f_8006E4F4(c); // 801F2F80
  c->r[28]=c->r[3]|c->r[3]; // 801F2F84
  c->r[26]=0u+0x00000000u; // 801F2F88
  c->r[30]=c->r[31]+0x00010000u; // 801F2F8C
  goto L_801F30CC; // 801F2F90
L_801F2F94:;
  c->r[3]=c->r[28]|c->r[28]; // 801F2F94
  c->r[4]=c->r[26]|c->r[26]; // 801F2F98
  c->lr=0x801F2FA0u; f_8006E554(c); // 801F2F9C
  c->r[29]=c->r[3]|c->r[3]; // 801F2FA0
  c->r[3]=c->r[1]+0x00000008u; // 801F2FA4
  c->r[4]=c->r[23]|c->r[23]; // 801F2FA8
  c->lr=0x801F2FB0u; f_802E9548(c); // 801F2FAC
  c->r[3]=c->r[1]+0x00000008u; // 801F2FB0
  c->r[4]=c->r[13]+0xFFFF9E50u; // 801F2FB4
  c->lr=0x801F2FBCu; f_802E964C(c); // 801F2FB8
  c->r[3]=c->r[29]|c->r[29]; // 801F2FBC
  c->lr=0x801F2FC4u; f_800C2D04(c); // 801F2FC0
  c->r[4]=c->r[3]|c->r[3]; // 801F2FC4
  c->r[3]=c->r[1]+0x00000008u; // 801F2FC8
  c->lr=0x801F2FD0u; f_802EBEB4(c); // 801F2FCC
  cmps(c,0,(int32_t)c->r[3],0); // 801F2FD0
  if (!crb(c,2)) { goto L_801F30C8; } // 801F2FD4
  c->r[0]=R32(c->r[31]+0x000000C4u); // 801F2FD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2244); // 801F2FDC
  c->r[3]=c->r[31]+c->r[0]; // 801F2FE0
  c->r[28]=c->r[3]+0x000000C8u; // 801F2FE4
  c->lr=0x801F2FECu; f_8007B524(c); // 801F2FE8
  c->r[4]=0u+0x00000009u; // 801F2FEC
  c->lr=0x801F2FF4u; f_800A1B48(c); // 801F2FF0
  c->r[4]=c->r[3]|c->r[3]; // 801F2FF4
  c->r[3]=c->r[28]|c->r[28]; // 801F2FF8
  c->lr=0x801F3000u; f_80077A90(c); // 801F2FFC
  c->r[3]=c->r[28]|c->r[28]; // 801F3000
  c->r[4]=c->r[31]+0x00010000u; // 801F3004
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)2244); // 801F3008
  c->r[4]=c->r[4]+c->r[0]; // 801F300C
  c->r[4]=c->r[4]+0xFFFF8DD0u; // 801F3010
  c->lr=0x801F3018u; f_80078028(c); // 801F3014
  c->r[3]=c->r[28]|c->r[28]; // 801F3018
  c->r[4]=0u+0x00000000u; // 801F301C
  c->r[5]=0u+0x00000001u; // 801F3020
  c->r[6]=0u+0x00000000u; // 801F3024
  c->r[7]=0u+0x00000001u; // 801F3028
  c->r[8]=0u+0x00000000u; // 801F302C
  c->lr=0x801F3034u; f_80077B88(c); // 801F3030
  c->r[3]=c->r[27]|c->r[27]; // 801F3034
  c->r[30]=0u+0x804C0000u; // 801F3038
  c->r[4]=c->r[30]+0x000025D0u; // 801F303C
  c->r[5]=c->r[24]|c->r[24]; // 801F3040
  c->lr=0x801F3048u; f_8006838C(c); // 801F3044
  c->r[3]=c->r[28]+0x00000024u; // 801F3048
  c->r[4]=c->r[30]+0x000025D0u; // 801F304C
  c->lr=0x801F3054u; f_8005658C(c); // 801F3050
  cmps(c,0,(int32_t)c->r[25],0); // 801F3054
  if (crb(c,2)) { goto L_801F3088; } // 801F3058
  {uint32_t ea=c->r[2]+0xFFFF9560u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F305C
  {uint32_t ea=c->r[30]+0x000025D0u; WF32(ea,c->f[0]);} // 801F3060
  c->lr=0x801F3068u; f_8005C5B0(c); // 801F3064
  {uint32_t ea=c->r[2]+0xFFFF9564u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3068
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F306C
  c->r[4]=c->r[30]+0x000025D0u; // 801F3070
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 801F3074
  {uint32_t ea=c->r[2]+0xFFFF9560u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3078
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 801F307C
  c->r[3]=c->r[28]+0x00000024u; // 801F3080
  c->lr=0x801F3088u; f_80056594(c); // 801F3084
L_801F3088:;
  c->r[3]=c->r[28]|c->r[28]; // 801F3088
  c->lr=0x801F3090u; f_800F1A78(c); // 801F308C
  c->r[3]=c->r[28]+0x00000024u; // 801F3090
  c->r[4]=0u+0x00000001u; // 801F3094
  c->lr=0x801F309Cu; f_800534E4(c); // 801F3098
  cmps(c,0,(int32_t)c->r[28],0); // 801F309C
  if (crb(c,2)) { goto L_801F30A8; } // 801F30A0
  c->r[28]=c->r[28]+0x000002B4u; // 801F30A4
L_801F30A8:;
  c->r[3]=c->r[31]+0x00010000u; // 801F30A8
  c->r[3]=c->r[3]+0xFFFFB0E0u; // 801F30AC
  c->r[4]=c->r[28]|c->r[28]; // 801F30B0
  c->lr=0x801F30B8u; f_800F1C90(c); // 801F30B4
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801F30B8
  c->r[0]=c->r[3]+0x00000001u; // 801F30BC
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F30C0
  goto L_801F30D8; // 801F30C4
L_801F30C8:;
  c->r[26]=c->r[26]+0x00000001u; // 801F30C8
L_801F30CC:;
  c->r[0]=R32(c->r[30]+0xFFFF8DCCu); // 801F30CC
  cmpu(c,0,c->r[26],c->r[0]); // 801F30D0
  if (crb(c,0)) { IRQCHK(c); goto L_801F2F94; } // 801F30D4
L_801F30D8:;
  c->r[11]=c->r[1]+0x00000050u; // 801F30D8
  c->lr=0x801F30E0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F30DC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F30E0
  c->lr=c->r[0]; // 801F30E4
  c->r[1]=c->r[1]+0x00000050u; // 801F30E8
  return; // 801F30EC
}

// fn_801F30F0
void f_801F30F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F30F0
  c->r[0]=c->lr; // 801F30F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F30F8
  c->r[11]=c->r[1]+0x00000030u; // 801F30FC
  c->lr=0x801F3104u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F3100
  c->r[26]=c->r[3]|c->r[3]; // 801F3104
  c->lr=0x801F310Cu; f_8007B524(c); // 801F3108
  c->lr=0x801F3110u; f_8006E224(c); // 801F310C
  c->lr=0x801F3114u; f_800897A8(c); // 801F3110
  c->r[31]=c->r[3]|c->r[3]; // 801F3114
  c->lr=0x801F311Cu; f_8007B524(c); // 801F3118
  c->lr=0x801F3120u; f_800A104C(c); // 801F311C
  cmps(c,0,(int32_t)c->r[3],0); // 801F3120
  if (crb(c,2)) { goto L_801F31E4; } // 801F3124
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801F3128
  c->r[28]=R32(c->r[3]+0x0000004Cu); // 801F312C
  c->r[30]=0u+0x00000000u; // 801F3130
  c->r[27]=c->r[28]+0x000032C4u; // 801F3134
  goto L_801F31D8; // 801F3138
L_801F313C:;
  c->r[29]=0u+0x00000000u; // 801F313C
L_801F3140:;
  c->lr=0x801F3144u; f_800F4430(c); // 801F3140
  c->r[3]=c->r[3]+0x00000290u; // 801F3144
  c->r[4]=c->r[29]|c->r[29]; // 801F3148
  c->lr=0x801F3150u; f_801F43D0(c); // 801F314C
  c->r[4]=c->r[3]|c->r[3]; // 801F3150
  c->r[3]=c->r[27]|c->r[27]; // 801F3154
  c->lr=0x801F315Cu; f_802EBEB4(c); // 801F3158
  cmps(c,0,(int32_t)c->r[3],0); // 801F315C
  if (!crb(c,2)) { goto L_801F31C4; } // 801F3160
  c->r[3]=c->r[1]+0x00000008u; // 801F3164
  c->r[4]=c->r[27]+0x00000020u; // 801F3168
  c->lr=0x801F3170u; f_800670A8(c); // 801F316C
  c->r[3]=R32(c->r[1]+0x00000008u); // 801F3170
  c->r[0]=c->r[3]+0x00000001u; // 801F3174
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F3178
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801F317C
  c->r[0]=c->r[3]+0x00000001u; // 801F3180
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F3184
  c->lr=0x801F318Cu; f_800F4430(c); // 801F3188
  c->r[3]=c->r[3]+0x00000290u; // 801F318C
  c->r[4]=c->r[29]|c->r[29]; // 801F3190
  c->lr=0x801F3198u; f_801F43CC(c); // 801F3194
  c->r[31]=c->r[3]|c->r[3]; // 801F3198
  c->r[3]=c->r[26]|c->r[26]; // 801F319C
  c->r[4]=c->r[27]|c->r[27]; // 801F31A0
  c->r[5]=c->r[1]+0x00000008u; // 801F31A4
  c->r[6]=R32(c->r[31]+0x00000014u); // 801F31A8
  c->lr=0x801F31B0u; f_801F2F28(c); // 801F31AC
  c->r[3]=c->r[26]|c->r[26]; // 801F31B0
  c->r[4]=c->r[1]+0x00000008u; // 801F31B4
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 801F31B8
  c->r[6]=R32(c->r[31]+0x00000010u); // 801F31BC
  c->lr=0x801F31C4u; f_801F31FC(c); // 801F31C0
L_801F31C4:;
  c->r[29]=c->r[29]+0x00000001u; // 801F31C4
  cmpu(c,0,c->r[29],0x00000005u); // 801F31C8
  if (crb(c,0)) { IRQCHK(c); goto L_801F3140; } // 801F31CC
  c->r[27]=c->r[27]+0x00000028u; // 801F31D0
  c->r[30]=c->r[30]+0x00000001u; // 801F31D4
L_801F31D8:;
  c->r[0]=R32(c->r[28]+0x000032C0u); // 801F31D8
  cmpu(c,0,c->r[30],c->r[0]); // 801F31DC
  if (crb(c,0)) { IRQCHK(c); goto L_801F313C; } // 801F31E0
L_801F31E4:;
  c->r[11]=c->r[1]+0x00000030u; // 801F31E4
  c->lr=0x801F31ECu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F31E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F31EC
  c->lr=c->r[0]; // 801F31F0
  c->r[1]=c->r[1]+0x00000030u; // 801F31F4
  return; // 801F31F8
}

// fn_801F31FC
void f_801F31FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F31FC
  c->r[0]=c->lr; // 801F3200
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F3204
  c->r[11]=c->r[1]+0x00000030u; // 801F3208
  c->lr=0x801F3210u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F320C
  c->r[25]=c->r[4]|c->r[4]; // 801F3210
  c->r[26]=c->r[5]|c->r[5]; // 801F3214
  c->r[27]=c->r[6]|c->r[6]; // 801F3218
  c->lr=0x801F3220u; f_8007B524(c); // 801F321C
  c->lr=0x801F3224u; f_8006E224(c); // 801F3220
  c->lr=0x801F3228u; f_800897A8(c); // 801F3224
  c->r[30]=c->r[3]|c->r[3]; // 801F3228
  c->r[28]=0u+0x00000000u; // 801F322C
  c->r[31]=0u+0x00000002u; // 801F3230
  goto L_801F327C; // 801F3234
L_801F3238:;
  c->r[29]=0u+0x00000000u; // 801F3238
  goto L_801F3270; // 801F323C
L_801F3240:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 801F3240
  c->r[0]=c->r[0]+c->r[29]; // 801F3244
  W32(c->r[1]+0x00000008u,c->r[0]); // 801F3248
  c->r[0]=R32(c->r[25]+0x00000004u); // 801F324C
  c->r[0]=c->r[0]+c->r[28]; // 801F3250
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801F3254
  c->r[3]=c->r[30]|c->r[30]; // 801F3258
  c->r[4]=c->r[1]+0x00000008u; // 801F325C
  c->r[5]=0u+0x00000000u; // 801F3260
  c->lr=0x801F3268u; f_80067A38(c); // 801F3264
  W32(c->r[3]+0x00000004u,c->r[31]); // 801F3268
  c->r[29]=c->r[29]+0x00000001u; // 801F326C
L_801F3270:;
  cmpu(c,0,c->r[29],c->r[26]); // 801F3270
  if (crb(c,0)) { IRQCHK(c); goto L_801F3240; } // 801F3274
  c->r[28]=c->r[28]+0x00000001u; // 801F3278
L_801F327C:;
  cmpu(c,0,c->r[28],c->r[27]); // 801F327C
  if (crb(c,0)) { IRQCHK(c); goto L_801F3238; } // 801F3280
  c->r[11]=c->r[1]+0x00000030u; // 801F3284
  c->lr=0x801F328Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F3288
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F328C
  c->lr=c->r[0]; // 801F3290
  c->r[1]=c->r[1]+0x00000030u; // 801F3294
  return; // 801F3298
}

// fn_801F329C
void f_801F329C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 801F329C
  return; // 801F32A0
}

// fn_801F32A4
void f_801F32A4(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801F32A4
  c->r[0]=R32(c->r[13]+0xFFFFBB44u); // 801F32A8
  cmps(c,0,(int32_t)c->r[0],0); // 801F32AC
  if (crb(c,2)) { goto L_801F32C0; } // 801F32B0
  c->r[3]=0u+0x804E0000u; // 801F32B4
  c->r[3]=c->r[3]+0xFFFFA188u; // 801F32B8
  f_80056AC0(c); return; // 801F32BC
L_801F32C0:;
  c->r[3]=0u+0x00000000u; // 801F32C0
  return; // 801F32C4
}

// fn_801F32C8
void f_801F32C8(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 801F32C8
  c->r[0]=R32(c->r[13]+0xFFFFBB44u); // 801F32CC
  cmps(c,0,(int32_t)c->r[0],0); // 801F32D0
  if (crb(c,2)) return; // 801F32D4
  c->r[3]=0u+0x804E0000u; // 801F32D8
  c->r[3]=c->r[3]+0xFFFFA188u; // 801F32DC
  f_80056B0C(c); return; // 801F32E0
  return; // 801F32E4
}

// fn_801F32E8
void f_801F32E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F32E8
  c->r[0]=c->lr; // 801F32EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F32F0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F32F4
  W32(c->r[1]+0x00000028u,c->r[30]); // 801F32F8
  c->r[30]=c->r[3]|c->r[3]; // 801F32FC
  c->r[31]=c->r[4]|c->r[4]; // 801F3300
  c->r[3]=c->r[1]+0x00000008u; // 801F3304
  c->r[4]=0u+0x00000000u; // 801F3308
  c->r[5]=0u+0x00000020u; // 801F330C
  c->lr=0x801F3314u; f_800060B8(c); // 801F3310
  {uint32_t ea=c->r[2]+0xFFFF9568u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3314
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F3318
  c->r[0]=0u+0x00000000u; // 801F331C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3320
  c->r[3]=c->r[1]+0x00000008u; // 801F3324
  c->lr=0x801F332Cu; f_8037656C(c); // 801F3328
  c->r[3]=0u+0x804E0000u; // 801F332C
  c->r[3]=c->r[3]+0xFFFFA1B8u; // 801F3330
  c->r[4]=0u+0x0000082Cu; // 801F3334
  c->lr=0x801F333Cu; f_8028CA58(c); // 801F3338
  cmps(c,0,(int32_t)c->r[31],0); // 801F333C
  if (crb(c,2)) { goto L_801F3348; } // 801F3340
  goto L_801F3350; // 801F3344
L_801F3348:;
  c->lr=0x801F334Cu; f_8004A07C(c); // 801F3348
  c->r[31]=c->r[3]|c->r[3]; // 801F334C
L_801F3350:;
  W32(c->r[13]+0xFFFFBB38u,c->r[31]); // 801F3350
  cmps(c,0,(int32_t)c->r[30],0); // 801F3354
  c->r[3]=0u+0x00580000u; // 801F3358
  c->r[0]=c->r[3]+0xFFFFD000u; // 801F335C
  if (crb(c,2)) { goto L_801F3368; } // 801F3360
  c->r[0]=c->r[30]|c->r[30]; // 801F3364
L_801F3368:;
  W32(c->r[13]+0xFFFFBB40u,c->r[0]); // 801F3368
  W32(c->r[13]+0xFFFFBB3Cu,c->r[0]); // 801F336C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F3370
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F3374
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F3378
  c->lr=c->r[0]; // 801F337C
  c->r[1]=c->r[1]+0x00000030u; // 801F3380
  return; // 801F3384
}

// fn_801F3388
void f_801F3388(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3388
  c->r[0]=c->lr; // 801F338C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3390
  c->r[3]=R32(c->r[13]+0xFFFFBB38u); // 801F3394
  c->r[4]=R32(c->r[13]+0xFFFFBB40u); // 801F3398
  c->lr=0x801F33A0u; f_80056AC0(c); // 801F339C
  c->r[4]=c->r[3]|c->r[3]; // 801F33A0
  W32(c->r[13]+0xFFFFBB44u,c->r[3]); // 801F33A4
  c->r[3]=0u+0x804E0000u; // 801F33A8
  c->r[3]=c->r[3]+0xFFFFA188u; // 801F33AC
  c->r[5]=R32(c->r[13]+0xFFFFBB40u); // 801F33B0
  c->r[6]=0u+0x00000020u; // 801F33B4
  c->r[7]=c->r[13]+0xFFFF9E60u; // 801F33B8
  c->lr=0x801F33C0u; f_800569F4(c); // 801F33BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F33C0
  c->lr=c->r[0]; // 801F33C4
  c->r[1]=c->r[1]+0x00000010u; // 801F33C8
  return; // 801F33CC
}

// fn_801F33D0
void f_801F33D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F33D0
  c->r[0]=c->lr; // 801F33D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F33D8
  c->r[0]=R32(c->r[13]+0xFFFFBB44u); // 801F33DC
  cmps(c,0,(int32_t)c->r[0],0); // 801F33E0
  if (crb(c,2)) { goto L_801F3408; } // 801F33E4
  c->r[3]=0u+0x804E0000u; // 801F33E8
  c->r[3]=c->r[3]+0xFFFFA188u; // 801F33EC
  c->lr=0x801F33F4u; f_80056A84(c); // 801F33F0
  c->r[3]=R32(c->r[13]+0xFFFFBB38u); // 801F33F4
  c->r[4]=R32(c->r[13]+0xFFFFBB44u); // 801F33F8
  c->lr=0x801F3400u; f_80056B0C(c); // 801F33FC
  c->r[0]=0u+0x00000000u; // 801F3400
  W32(c->r[13]+0xFFFFBB44u,c->r[0]); // 801F3404
L_801F3408:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3408
  c->lr=c->r[0]; // 801F340C
  c->r[1]=c->r[1]+0x00000010u; // 801F3410
  return; // 801F3414
}

// fn_801F3418
void f_801F3418(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFBB44u); // 801F3418
  c->r[0]=0u-c->r[3]; // 801F341C
  c->r[0]=c->r[0]|c->r[3]; // 801F3420
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F3424
  return; // 801F3428
}

// fn_801F342C
void f_801F342C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F342C
  c->r[0]=c->lr; // 801F3430
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F3438
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F343C
  c->r[31]=0u+0x804E0000u; // 801F3440
  c->r[3]=c->r[31]+0xFFFFA1B8u; // 801F3444
  c->lr=0x801F344Cu; f_8004B018(c); // 801F3448
  c->r[30]=c->r[3]|c->r[3]; // 801F344C
  goto L_801F346C; // 801F3450
L_801F3454:;
  c->r[3]=c->r[30]|c->r[30]; // 801F3454
  c->lr=0x801F345Cu; f_801F3B4C(c); // 801F3458
  c->r[3]=c->r[31]+0xFFFFA1B8u; // 801F345C
  c->r[4]=c->r[30]|c->r[30]; // 801F3460
  c->lr=0x801F3468u; f_8028CCD8(c); // 801F3464
  c->r[30]=c->r[3]|c->r[3]; // 801F3468
L_801F346C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801F346C
  if (!crb(c,2)) { IRQCHK(c); goto L_801F3454; } // 801F3470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F3474
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F3478
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F347C
  c->lr=c->r[0]; // 801F3480
  c->r[1]=c->r[1]+0x00000010u; // 801F3484
  return; // 801F3488
}

// fn_801F348C
void f_801F348C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F348C
  c->r[0]=c->lr; // 801F3490
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3494
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F3498
  c->r[31]=c->r[3]|c->r[3]; // 801F349C
  c->r[4]=0u+0x80470000u; // 801F34A0
  c->r[0]=c->r[4]+0x00005300u; // 801F34A4
  W32(c->r[3]+0x000005B8u,c->r[0]); // 801F34A8
  c->lr=0x801F34B0u; f_801F350C(c); // 801F34AC
  c->r[3]=c->r[31]|c->r[31]; // 801F34B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F34B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F34B8
  c->lr=c->r[0]; // 801F34BC
  c->r[1]=c->r[1]+0x00000010u; // 801F34C0
  return; // 801F34C4
}

// dtor_801F34C8
void f_801F34C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F34C8
  c->r[0]=c->lr; // 801F34CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F34D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F34D4
  c->r[31]=c->r[3]|c->r[3]; // 801F34D8
  cmps(c,0,(int32_t)c->r[3],0); // 801F34DC
  if (crb(c,2)) { goto L_801F34F4; } // 801F34E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801F34E4
  cmps(c,0,(int32_t)c->r[0],0); // 801F34E8
  if (!crb(c,1)) { goto L_801F34F4; } // 801F34EC
  c->lr=0x801F34F4u; f_80047B20(c); // 801F34F0
L_801F34F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801F34F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F34F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F34FC
  c->lr=c->r[0]; // 801F3500
  c->r[1]=c->r[1]+0x00000010u; // 801F3504
  return; // 801F3508
}

// fn_801F350C
void f_801F350C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801F350C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F3510
  W32(c->r[3]+0x00000004u,c->r[0]); // 801F3514
  c->r[0]=0u+0xFFFFFFFFu; // 801F3518
  W32(c->r[3]+0x00000188u,c->r[0]); // 801F351C
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 801F3520
  c->r[3]=c->r[3]+0x00000008u; // 801F3524
  c->r[4]=0u+0x00000000u; // 801F3528
  c->r[5]=0u+0x0000003Cu; // 801F352C
  f_800060B8(c); return; // 801F3530
}

// fn_801F3534
void f_801F3534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3534
  c->r[0]=c->lr; // 801F3538
  W32(c->r[1]+0x000000C4u,c->r[0]); // 801F353C
  W32(c->r[1]+0x000000BCu,c->r[31]); // 801F3540
  W32(c->r[1]+0x000000B8u,c->r[30]); // 801F3544
  W32(c->r[1]+0x000000B4u,c->r[29]); // 801F3548
  c->r[29]=c->r[3]|c->r[3]; // 801F354C
  c->r[30]=c->r[4]|c->r[4]; // 801F3550
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F3554
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 801F3558
  cmps(c,0,(int32_t)c->r[0],0); // 801F355C
  if (!crb(c,2)) { goto L_801F3570; } // 801F3560
  c->lr=0x801F3568u; f_8005D778(c); // 801F3564
  cmps(c,0,(int32_t)c->r[3],0); // 801F3568
  if (crb(c,2)) { goto L_801F3590; } // 801F356C
L_801F3570:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F3570
  c->lr=0x801F3578u; f_80376C30(c); // 801F3574
  cmps(c,0,(int32_t)c->r[3],0); // 801F3578
  if (!crb(c,2)) { goto L_801F35AC; } // 801F357C
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F3580
  c->r[4]=0u+0x00000001u; // 801F3584
  c->lr=0x801F358Cu; f_80377180(c); // 801F3588
  goto L_801F35AC; // 801F358C
L_801F3590:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F3590
  c->lr=0x801F3598u; f_80376C30(c); // 801F3594
  cmps(c,0,(int32_t)c->r[3],0); // 801F3598
  if (crb(c,2)) { goto L_801F35AC; } // 801F359C
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F35A0
  c->r[4]=0u+0x00000000u; // 801F35A4
  c->lr=0x801F35ACu; f_80377180(c); // 801F35A8
L_801F35AC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F35AC
  c->r[4]=c->r[1]+0x00000008u; // 801F35B0
  c->lr=0x801F35B8u; f_80371A98(c); // 801F35B4
  c->r[3]=0u+0x00000000u; // 801F35B8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801F35BC
  cmps(c,0,(int32_t)c->r[0],0); // 801F35C0
  if (crb(c,2)) { goto L_801F366C; } // 801F35C4
  c->r[3]=c->r[30]|c->r[30]; // 801F35C8
  c->lr=0x801F35D0u; f_80174084(c); // 801F35CC
  c->r[31]=rotl(c->r[3],0)&0x0000FFFFu; // 801F35D0
  c->r[3]=c->r[30]|c->r[30]; // 801F35D4
  c->lr=0x801F35DCu; f_8017408C(c); // 801F35D8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801F35DC
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F35E0
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F35E4
  c->r[5]=c->r[31]|c->r[31]; // 801F35E8
  c->lr=0x801F35F0u; f_80373688(c); // 801F35EC
  c->r[3]=c->r[30]|c->r[30]; // 801F35F0
  c->lr=0x801F35F8u; f_80174094(c); // 801F35F4
  c->r[5]=c->r[3]|c->r[3]; // 801F35F8
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F35FC
  c->r[4]=c->r[1]+0x00000008u; // 801F3600
  c->lr=0x801F3608u; f_80378944(c); // 801F3604
  c->r[3]=c->r[30]|c->r[30]; // 801F3608
  c->lr=0x801F3610u; f_801F439C(c); // 801F360C
  c->r[31]=c->r[3]|c->r[3]; // 801F3610
  c->r[3]=c->r[30]|c->r[30]; // 801F3614
  c->lr=0x801F361Cu; f_80174094(c); // 801F3618
  c->r[4]=c->r[31]|c->r[31]; // 801F361C
  c->lr=0x801F3624u; f_80359C2C(c); // 801F3620
  c->r[3]=c->r[29]+0x00000068u; // 801F3624
  c->r[4]=c->r[1]+0x00000008u; // 801F3628
  c->lr=0x801F3630u; f_801F3688(c); // 801F362C
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F3630
  c->lr=0x801F3638u; f_803720E8(c); // 801F3634
  c->r[0]=R32(c->r[29]+0x0000008Cu); // 801F3638
  W32(c->r[29]+0x00000188u,c->r[0]); // 801F363C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801F3640
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 801F3644
  cmps(c,0,(int32_t)c->r[0],0); // 801F3648
  if (!crb(c,2)) { goto L_801F3668; } // 801F364C
  c->r[3]=R32(c->r[29]+0x00000004u); // 801F3650
  c->lr=0x801F3658u; f_803721B4(c); // 801F3654
  W32(c->r[29]+0x0000018Cu,c->r[3]); // 801F3658
  c->r[0]=R32(c->r[29]+0x00000000u); // 801F365C
  c->r[0]=c->r[0]|0x00000020u; // 801F3660
  W32(c->r[29]+0x00000000u,c->r[0]); // 801F3664
L_801F3668:;
  c->r[3]=0u+0x00000001u; // 801F3668
L_801F366C:;
  c->r[31]=R32(c->r[1]+0x000000BCu); // 801F366C
  c->r[30]=R32(c->r[1]+0x000000B8u); // 801F3670
  c->r[29]=R32(c->r[1]+0x000000B4u); // 801F3674
  c->r[0]=R32(c->r[1]+0x000000C4u); // 801F3678
  c->lr=c->r[0]; // 801F367C
  c->r[1]=c->r[1]+0x000000C0u; // 801F3680
  return; // 801F3684
}

// fn_801F3688
void f_801F3688(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 801F3688
  W32(c->r[3]+0x00000000u,c->r[0]); // 801F368C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801F3690
  W32(c->r[3]+0x00000004u,c->r[0]); // 801F3694
  c->r[0]=R32(c->r[4]+0x00000008u); // 801F3698
  W32(c->r[3]+0x00000008u,c->r[0]); // 801F369C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801F36A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801F36A4
  c->r[0]=R32(c->r[4]+0x00000010u); // 801F36A8
  W32(c->r[3]+0x00000010u,c->r[0]); // 801F36AC
  c->r[0]=R32(c->r[4]+0x00000014u); // 801F36B0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801F36B4
  c->r[0]=R32(c->r[4]+0x00000018u); // 801F36B8
  W32(c->r[3]+0x00000018u,c->r[0]); // 801F36BC
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801F36C0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801F36C4
  c->r[0]=R32(c->r[4]+0x00000020u); // 801F36C8
  W32(c->r[3]+0x00000020u,c->r[0]); // 801F36CC
  c->r[0]=R32(c->r[4]+0x00000024u); // 801F36D0
  W32(c->r[3]+0x00000024u,c->r[0]); // 801F36D4
  c->r[0]=R32(c->r[4]+0x00000028u); // 801F36D8
  W32(c->r[3]+0x00000028u,c->r[0]); // 801F36DC
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 801F36E0
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801F36E4
  c->r[0]=R32(c->r[4]+0x00000030u); // 801F36E8
  W32(c->r[3]+0x00000030u,c->r[0]); // 801F36EC
  c->r[0]=R32(c->r[4]+0x00000034u); // 801F36F0
  W32(c->r[3]+0x00000034u,c->r[0]); // 801F36F4
  c->r[0]=R32(c->r[4]+0x00000038u); // 801F36F8
  W32(c->r[3]+0x00000038u,c->r[0]); // 801F36FC
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801F3700
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801F3704
  c->r[0]=R32(c->r[4]+0x00000040u); // 801F3708
  W32(c->r[3]+0x00000040u,c->r[0]); // 801F370C
  c->r[0]=R32(c->r[4]+0x00000044u); // 801F3710
  W32(c->r[3]+0x00000044u,c->r[0]); // 801F3714
  c->r[0]=R32(c->r[4]+0x00000048u); // 801F3718
  W32(c->r[3]+0x00000048u,c->r[0]); // 801F371C
  c->r[0]=R32(c->r[4]+0x0000004Cu); // 801F3720
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 801F3724
  c->r[0]=R32(c->r[4]+0x00000050u); // 801F3728
  W32(c->r[3]+0x00000050u,c->r[0]); // 801F372C
  c->r[0]=R32(c->r[4]+0x00000054u); // 801F3730
  W32(c->r[3]+0x00000054u,c->r[0]); // 801F3734
  c->r[0]=R32(c->r[4]+0x00000058u); // 801F3738
  W32(c->r[3]+0x00000058u,c->r[0]); // 801F373C
  c->r[5]=R32(c->r[4]+0x00000060u); // 801F3740
  c->r[0]=R32(c->r[4]+0x00000064u); // 801F3744
  W32(c->r[3]+0x00000060u,c->r[5]); // 801F3748
  W32(c->r[3]+0x00000064u,c->r[0]); // 801F374C
  c->r[5]=R32(c->r[4]+0x00000068u); // 801F3750
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 801F3754
  W32(c->r[3]+0x00000068u,c->r[5]); // 801F3758
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 801F375C
  c->r[5]=R32(c->r[4]+0x00000070u); // 801F3760
  c->r[0]=R32(c->r[4]+0x00000074u); // 801F3764
  W32(c->r[3]+0x00000070u,c->r[5]); // 801F3768
  W32(c->r[3]+0x00000074u,c->r[0]); // 801F376C
  c->r[5]=R32(c->r[4]+0x00000078u); // 801F3770
  c->r[0]=R32(c->r[4]+0x0000007Cu); // 801F3774
  W32(c->r[3]+0x00000078u,c->r[5]); // 801F3778
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 801F377C
  c->r[5]=R32(c->r[4]+0x00000080u); // 801F3780
  c->r[0]=R32(c->r[4]+0x00000084u); // 801F3784
  W32(c->r[3]+0x00000080u,c->r[5]); // 801F3788
  W32(c->r[3]+0x00000084u,c->r[0]); // 801F378C
  c->r[5]=R32(c->r[4]+0x00000088u); // 801F3790
  c->r[0]=R32(c->r[4]+0x0000008Cu); // 801F3794
  W32(c->r[3]+0x00000088u,c->r[5]); // 801F3798
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 801F379C
  c->r[5]=R32(c->r[4]+0x00000090u); // 801F37A0
  c->r[0]=R32(c->r[4]+0x00000094u); // 801F37A4
  W32(c->r[3]+0x00000090u,c->r[5]); // 801F37A8
  W32(c->r[3]+0x00000094u,c->r[0]); // 801F37AC
  c->r[0]=R32(c->r[4]+0x00000098u); // 801F37B0
  W32(c->r[3]+0x00000098u,c->r[0]); // 801F37B4
  c->r[0]=R32(c->r[4]+0x0000009Cu); // 801F37B8
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 801F37BC
  return; // 801F37C0
}

// fn_801F37C4
void f_801F37C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F37C4
  c->r[0]=c->lr; // 801F37C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F37CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F37D0
  c->r[31]=c->r[3]|c->r[3]; // 801F37D4
  W32(c->r[3]+0x00000028u,c->r[5]); // 801F37D8
  W32(c->r[3]+0x00000008u,c->r[4]); // 801F37DC
  cmps(c,0,(int32_t)c->r[6],0); // 801F37E0
  if (crb(c,2)) { goto L_801F3814; } // 801F37E4
  c->r[0]=R32(c->r[6]+0x00000000u); // 801F37E8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801F37EC
  c->r[0]=R32(c->r[6]+0x00000004u); // 801F37F0
  W32(c->r[3]+0x00000010u,c->r[0]); // 801F37F4
  c->r[0]=R32(c->r[6]+0x00000008u); // 801F37F8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801F37FC
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801F3800
  W32(c->r[3]+0x00000018u,c->r[0]); // 801F3804
  c->r[0]=R32(c->r[6]+0x00000010u); // 801F3808
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801F380C
  goto L_801F383C; // 801F3810
L_801F3814:;
  c->r[4]=0u+0x005C0000u; // 801F3814
  c->r[0]=c->r[4]+0xFFFF8D80u; // 801F3818
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801F381C
  c->r[0]=0u+0x000002D0u; // 801F3820
  W32(c->r[3]+0x00000010u,c->r[0]); // 801F3824
  c->r[0]=0u+0x000001E0u; // 801F3828
  W32(c->r[3]+0x00000014u,c->r[0]); // 801F382C
  c->r[0]=0u+0x00000002u; // 801F3830
  W32(c->r[3]+0x00000018u,c->r[0]); // 801F3834
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801F3838
L_801F383C:;
  c->r[0]=0u+0x00000000u; // 801F383C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801F3840
  c->r[3]=c->r[3]+0x00000008u; // 801F3844
  c->lr=0x801F384Cu; f_8037433C(c); // 801F3848
  W32(c->r[31]+0x00000024u,c->r[3]); // 801F384C
  c->lr=0x801F3854u; f_801F32A4(c); // 801F3850
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F3854
  cmps(c,0,(int32_t)c->r[3],0); // 801F3858
  if (!crb(c,2)) { goto L_801F3870; } // 801F385C
  c->r[3]=c->r[31]|c->r[31]; // 801F3860
  c->lr=0x801F3868u; f_801F38B8(c); // 801F3864
  c->r[3]=0u+0x00000000u; // 801F3868
  goto L_801F38A4; // 801F386C
L_801F3870:;
  c->r[3]=c->r[31]+0x00000008u; // 801F3870
  c->lr=0x801F3878u; f_80375B08(c); // 801F3874
  W32(c->r[31]+0x00000004u,c->r[3]); // 801F3878
  cmps(c,0,(int32_t)c->r[3],0); // 801F387C
  if (!crb(c,2)) { goto L_801F3894; } // 801F3880
  c->r[3]=c->r[31]|c->r[31]; // 801F3884
  c->lr=0x801F388Cu; f_801F38B8(c); // 801F3888
  c->r[3]=0u+0x00000000u; // 801F388C
  goto L_801F38A4; // 801F3890
L_801F3894:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801F3894
  c->r[0]=c->r[0]|0x00000004u; // 801F3898
  W32(c->r[31]+0x00000000u,c->r[0]); // 801F389C
  c->r[3]=0u+0x00000001u; // 801F38A0
L_801F38A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F38A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F38A8
  c->lr=c->r[0]; // 801F38AC
  c->r[1]=c->r[1]+0x00000010u; // 801F38B0
  return; // 801F38B4
}

// fn_801F38B8
void f_801F38B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F38B8
  c->r[0]=c->lr; // 801F38BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F38C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F38C4
  c->r[31]=c->r[3]|c->r[3]; // 801F38C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801F38CC
  cmps(c,0,(int32_t)c->r[3],0); // 801F38D0
  if (crb(c,2)) { goto L_801F38DC; } // 801F38D4
  c->lr=0x801F38DCu; f_803763B4(c); // 801F38D8
L_801F38DC:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 801F38DC
  cmps(c,0,(int32_t)c->r[3],0); // 801F38E0
  if (crb(c,2)) { goto L_801F38EC; } // 801F38E4
  c->lr=0x801F38ECu; f_801F32C8(c); // 801F38E8
L_801F38EC:;
  c->r[3]=c->r[31]|c->r[31]; // 801F38EC
  c->lr=0x801F38F4u; f_801F350C(c); // 801F38F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F38F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F38F8
  c->lr=c->r[0]; // 801F38FC
  c->r[1]=c->r[1]+0x00000010u; // 801F3900
  return; // 801F3904
}

// fn_801F3908
void f_801F3908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3908
  c->r[0]=c->lr; // 801F390C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F3910
  c->r[11]=c->r[1]+0x00000020u; // 801F3914
  c->lr=0x801F391Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F3918
  c->r[26]=c->r[3]|c->r[3]; // 801F391C
  c->r[27]=c->r[4]|c->r[4]; // 801F3920
  c->r[28]=c->r[5]|c->r[5]; // 801F3924
  c->r[29]=c->r[6]|c->r[6]; // 801F3928
  c->r[30]=c->r[7]|c->r[7]; // 801F392C
  c->r[31]=c->r[8]|c->r[8]; // 801F3930
  c->lr=0x801F3938u; f_801F43A4(c); // 801F3934
  cmps(c,0,(int32_t)c->r[3],0); // 801F3938
  if (!crb(c,2)) { goto L_801F3948; } // 801F393C
  c->r[3]=0u+0x00000000u; // 801F3940
  goto L_801F39CC; // 801F3944
L_801F3948:;
  c->r[3]=c->r[26]+0x00000108u; // 801F3948
  c->r[4]=c->r[27]|c->r[27]; // 801F394C
  c->r[5]=0u+0x00000080u; // 801F3950
  c->lr=0x801F3958u; f_802E9608(c); // 801F3954
  c->r[0]=0u+0x00000000u; // 801F3958
  W8(c->r[26]+0x00000187u,c->r[0]); // 801F395C
  c->r[0]=0u+0xFFFFFFFFu; // 801F3960
  W32(c->r[26]+0x00000188u,c->r[0]); // 801F3964
  W32(c->r[26]+0x0000018Cu,c->r[0]); // 801F3968
  c->r[0]=R32(c->r[26]+0x00000000u); // 801F396C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 801F3970
  W32(c->r[26]+0x00000000u,c->r[0]); // 801F3974
  cmps(c,0,(int32_t)c->r[28],0); // 801F3978
  if (crb(c,2)) { goto L_801F3990; } // 801F397C
  c->r[3]=R32(c->r[26]+0x00000004u); // 801F3980
  c->r[4]=c->r[26]+0x00000108u; // 801F3984
  c->lr=0x801F398Cu; f_8037294C(c); // 801F3988
  goto L_801F399C; // 801F398C
L_801F3990:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 801F3990
  c->r[4]=c->r[26]+0x00000108u; // 801F3994
  c->lr=0x801F399Cu; f_80376E50(c); // 801F3998
L_801F399C:;
  c->r[0]=R32(c->r[26]+0x00000028u); // 801F399C
  cmps(c,0,(int32_t)c->r[0],49); // 801F39A0
  if (!crb(c,2)) { goto L_801F39C8; } // 801F39A4
  W32(c->r[26]+0x000005ACu,c->r[29]); // 801F39A8
  W32(c->r[26]+0x000005B0u,c->r[30]); // 801F39AC
  W32(c->r[26]+0x000005B4u,c->r[31]); // 801F39B0
  c->r[3]=R32(c->r[26]+0x00000004u); // 801F39B4
  c->r[4]=c->r[30]|c->r[30]; // 801F39B8
  c->r[5]=c->r[31]|c->r[31]; // 801F39BC
  c->r[6]=c->r[29]|c->r[29]; // 801F39C0
  c->lr=0x801F39C8u; f_80373E58(c); // 801F39C4
L_801F39C8:;
  c->r[3]=0u+0x00000001u; // 801F39C8
L_801F39CC:;
  c->r[11]=c->r[1]+0x00000020u; // 801F39CC
  c->lr=0x801F39D4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F39D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F39D4
  c->lr=c->r[0]; // 801F39D8
  c->r[1]=c->r[1]+0x00000020u; // 801F39DC
  return; // 801F39E0
}

// fn_801F39E4
void f_801F39E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F39E4
  c->r[0]=c->lr; // 801F39E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F39EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F39F0
  c->r[31]=c->r[3]|c->r[3]; // 801F39F4
  c->lr=0x801F39FCu; f_801F43A4(c); // 801F39F8
  cmps(c,0,(int32_t)c->r[3],0); // 801F39FC
  if (crb(c,2)) { goto L_801F3A10; } // 801F3A00
  c->r[3]=R32(c->r[31]+0x00000004u); // 801F3A04
  c->lr=0x801F3A0Cu; f_803775C8(c); // 801F3A08
  goto L_801F3A14; // 801F3A0C
L_801F3A10:;
  c->r[3]=0u+0x00000000u; // 801F3A10
L_801F3A14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F3A14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3A18
  c->lr=c->r[0]; // 801F3A1C
  c->r[1]=c->r[1]+0x00000010u; // 801F3A20
  return; // 801F3A24
}

// fn_801F3A28
void f_801F3A28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3A28
  c->r[0]=c->lr; // 801F3A2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F3A30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F3A34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F3A38
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F3A3C
  c->r[29]=c->r[3]|c->r[3]; // 801F3A40
  c->lr=0x801F3A48u; f_801F348C(c); // 801F3A44
  c->r[3]=0u+0x80470000u; // 801F3A48
  c->r[0]=c->r[3]+0x000052D8u; // 801F3A4C
  W32(c->r[29]+0x000005B8u,c->r[0]); // 801F3A50
  c->r[3]=c->r[29]+0x000005BCu; // 801F3A54
  c->lr=0x801F3A5Cu; f_8004CDFC(c); // 801F3A58
  c->r[3]=c->r[29]+0x0000079Cu; // 801F3A5C
  c->lr=0x801F3A64u; f_80055580(c); // 801F3A60
  c->r[3]=c->r[29]+0x000007E8u; // 801F3A64
  c->lr=0x801F3A6Cu; f_8004B0A4(c); // 801F3A68
  c->r[3]=c->r[29]+0x000007F4u; // 801F3A6C
  c->lr=0x801F3A74u; f_800592DC(c); // 801F3A70
  c->r[3]=c->r[29]+0x000007FCu; // 801F3A74
  c->lr=0x801F3A7Cu; f_80047C5C(c); // 801F3A78
  c->r[30]=c->r[29]+0x00000804u; // 801F3A7C
  c->r[31]=c->r[29]+0x00000824u; // 801F3A80
L_801F3A84:;
  c->r[3]=c->r[30]|c->r[30]; // 801F3A84
  c->lr=0x801F3A8Cu; f_800592DC(c); // 801F3A88
  c->r[30]=c->r[30]+0x00000008u; // 801F3A8C
  cmpu(c,0,c->r[30],c->r[31]); // 801F3A90
  if (crb(c,0)) { IRQCHK(c); goto L_801F3A84; } // 801F3A94
  c->r[3]=c->r[29]|c->r[29]; // 801F3A98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F3A9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F3AA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F3AA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F3AA8
  c->lr=c->r[0]; // 801F3AAC
  c->r[1]=c->r[1]+0x00000020u; // 801F3AB0
  return; // 801F3AB4
}

// dtor_801F3AB8
void f_801F3AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3AB8
  c->r[0]=c->lr; // 801F3ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3AC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F3AC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F3AC8
  c->r[30]=c->r[3]|c->r[3]; // 801F3ACC
  c->r[31]=c->r[4]|c->r[4]; // 801F3AD0
  cmps(c,0,(int32_t)c->r[3],0); // 801F3AD4
  if (crb(c,2)) { goto L_801F3B30; } // 801F3AD8
  c->r[4]=0u+0x80470000u; // 801F3ADC
  c->r[0]=c->r[4]+0x000052D8u; // 801F3AE0
  W32(c->r[3]+0x000005B8u,c->r[0]); // 801F3AE4
  c->lr=0x801F3AECu; f_801F3BE4(c); // 801F3AE8
  c->r[3]=c->r[30]+0x000007FCu; // 801F3AEC
  c->r[4]=0u+0xFFFFFFFFu; // 801F3AF0
  c->lr=0x801F3AF8u; f_80047BD4(c); // 801F3AF4
  c->r[3]=c->r[30]+0x0000079Cu; // 801F3AF8
  c->r[4]=0u+0xFFFFFFFFu; // 801F3AFC
  c->lr=0x801F3B04u; f_80055594(c); // 801F3B00
  c->r[3]=c->r[30]+0x000005BCu; // 801F3B04
  c->r[4]=0u+0xFFFFFFFFu; // 801F3B08
  c->lr=0x801F3B10u; f_8004CE58(c); // 801F3B0C
  c->r[3]=c->r[30]|c->r[30]; // 801F3B10
  c->r[4]=0u+0x00000000u; // 801F3B14
  c->lr=0x801F3B1Cu; f_801F34C8(c); // 801F3B18
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F3B1C
  cmps(c,0,(int32_t)c->r[0],0); // 801F3B20
  if (!crb(c,1)) { goto L_801F3B30; } // 801F3B24
  c->r[3]=c->r[30]|c->r[30]; // 801F3B28
  c->lr=0x801F3B30u; f_80047B20(c); // 801F3B2C
L_801F3B30:;
  c->r[3]=c->r[30]|c->r[30]; // 801F3B30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F3B34
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F3B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3B3C
  c->lr=c->r[0]; // 801F3B40
  c->r[1]=c->r[1]+0x00000010u; // 801F3B44
  return; // 801F3B48
}

// fn_801F3B4C
void f_801F3B4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3B4C
  c->r[0]=c->lr; // 801F3B50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3B54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F3B58
  c->r[31]=c->r[3]|c->r[3]; // 801F3B5C
  c->lr=0x801F3B64u; f_801F3F18(c); // 801F3B60
  cmps(c,0,(int32_t)c->r[3],0); // 801F3B64
  if (crb(c,2)) { goto L_801F3BA8; } // 801F3B68
  c->r[3]=c->r[31]|c->r[31]; // 801F3B6C
  c->r[4]=c->r[31]+0x0000079Cu; // 801F3B70
  c->lr=0x801F3B78u; f_801F3534(c); // 801F3B74
  cmps(c,0,(int32_t)c->r[3],0); // 801F3B78
  if (crb(c,2)) { goto L_801F3BA0; } // 801F3B7C
  c->r[0]=R32(c->r[31]+0x00000824u); // 801F3B80
  cmps(c,0,(int32_t)c->r[0],0); // 801F3B84
  if (!crb(c,2)) { goto L_801F3BA0; } // 801F3B88
  c->r[3]=c->r[31]|c->r[31]; // 801F3B8C
  c->lr=0x801F3B94u; f_801F4240(c); // 801F3B90
  c->r[3]=c->r[31]|c->r[31]; // 801F3B94
  c->r[4]=0u+0x00000001u; // 801F3B98
  c->lr=0x801F3BA0u; f_801F4390(c); // 801F3B9C
L_801F3BA0:;
  c->r[3]=c->r[31]|c->r[31]; // 801F3BA0
  c->lr=0x801F3BA8u; f_801F41A0(c); // 801F3BA4
L_801F3BA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F3BA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3BAC
  c->lr=c->r[0]; // 801F3BB0
  c->r[1]=c->r[1]+0x00000010u; // 801F3BB4
  return; // 801F3BB8
}

// fn_801F3BBC
void f_801F3BBC(Ctx* __restrict c) {
  c->r[0]=c->r[8]|c->r[8]; // 801F3BBC
  c->r[10]=c->r[9]|c->r[9]; // 801F3BC0
  c->r[8]=0u+0x00000000u; // 801F3BC4
  c->r[9]=c->r[0]|c->r[0]; // 801F3BC8
  f_801F3F84(c); return; // 801F3BCC
}

// fn_801F3BD0
void f_801F3BD0(Ctx* __restrict c) {
  c->r[0]=c->r[8]|c->r[8]; // 801F3BD0
  c->r[10]=c->r[9]|c->r[9]; // 801F3BD4
  c->r[8]=0u+0x00000001u; // 801F3BD8
  c->r[9]=c->r[0]|c->r[0]; // 801F3BDC
  f_801F3F84(c); return; // 801F3BE0
}

// fn_801F3BE4
void f_801F3BE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3BE4
  c->r[0]=c->lr; // 801F3BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F3BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F3BF0
  c->r[31]=c->r[3]|c->r[3]; // 801F3BF4
  c->lr=0x801F3BFCu; f_801F3F18(c); // 801F3BF8
  cmps(c,0,(int32_t)c->r[3],0); // 801F3BFC
  if (crb(c,2)) { goto L_801F3C44; } // 801F3C00
  c->r[3]=0u+0x804E0000u; // 801F3C04
  c->r[3]=c->r[3]+0xFFFFA1B8u; // 801F3C08
  c->r[4]=c->r[31]|c->r[31]; // 801F3C0C
  c->lr=0x801F3C14u; f_8028CC6C(c); // 801F3C10
  c->r[3]=c->r[31]+0x000005BCu; // 801F3C14
  c->lr=0x801F3C1Cu; f_8004D19C(c); // 801F3C18
  c->r[3]=c->r[31]+0x0000079Cu; // 801F3C1C
  c->lr=0x801F3C24u; f_80055750(c); // 801F3C20
  c->r[3]=c->r[31]|c->r[31]; // 801F3C24
  c->lr=0x801F3C2Cu; f_801F38B8(c); // 801F3C28
  c->r[0]=R32(c->r[31]+0x00000828u); // 801F3C2C
  cmps(c,0,(int32_t)c->r[0],0); // 801F3C30
  if (crb(c,2)) { goto L_801F3C44; } // 801F3C34
  c->lr=0x801F3C3Cu; f_801F33D0(c); // 801F3C38
  c->r[0]=0u+0x00000000u; // 801F3C3C
  W32(c->r[31]+0x00000828u,c->r[0]); // 801F3C40
L_801F3C44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F3C44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F3C48
  c->lr=c->r[0]; // 801F3C4C
  c->r[1]=c->r[1]+0x00000010u; // 801F3C50
  return; // 801F3C54
}

// fn_801F3C58
void f_801F3C58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3C58
  c->r[0]=c->lr; // 801F3C5C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 801F3C60
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 801F3C64
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 801F3C68
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 801F3C6C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 801F3C70
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[29]);} // 801F3C74
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,29,ea,0,0);} // 801F3C78
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[28]);} // 801F3C7C
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,28,ea,0,0);} // 801F3C80
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[27]);} // 801F3C84
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,27,ea,0,0);} // 801F3C88
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801F3C8C
  W32(c->r[1]+0x00000078u,c->r[30]); // 801F3C90
  W32(c->r[1]+0x00000074u,c->r[29]); // 801F3C94
  W32(c->r[1]+0x00000070u,c->r[28]); // 801F3C98
  c->r[28]=c->r[3]|c->r[3]; // 801F3C9C
  c->f[27]=c->f[1]; // 801F3CA0
  c->f[28]=c->f[2]; // 801F3CA4
  c->f[29]=c->f[3]; // 801F3CA8
  c->f[30]=c->f[4]; // 801F3CAC
  c->f[31]=c->f[5]; // 801F3CB0
  c->r[29]=c->r[4]|c->r[4]; // 801F3CB4
  c->r[3]=c->r[1]+0x00000030u; // 801F3CB8
  c->lr=0x801F3CC0u; f_8004B0A4(c); // 801F3CBC
  c->r[3]=c->r[1]+0x0000003Cu; // 801F3CC0
  c->lr=0x801F3CC8u; f_8004B0A4(c); // 801F3CC4
  c->r[3]=c->r[1]+0x00000048u; // 801F3CC8
  c->lr=0x801F3CD0u; f_8004B0A4(c); // 801F3CCC
  c->r[3]=c->r[1]+0x00000054u; // 801F3CD0
  c->lr=0x801F3CD8u; f_8004B0A4(c); // 801F3CD4
  c->r[3]=c->r[1]+0x00000010u; // 801F3CD8
  c->lr=0x801F3CE0u; f_800592DC(c); // 801F3CDC
  c->r[3]=c->r[1]+0x00000018u; // 801F3CE0
  c->lr=0x801F3CE8u; f_800592DC(c); // 801F3CE4
  c->r[3]=c->r[1]+0x00000020u; // 801F3CE8
  c->lr=0x801F3CF0u; f_800592DC(c); // 801F3CEC
  c->r[3]=c->r[1]+0x00000028u; // 801F3CF0
  c->lr=0x801F3CF8u; f_800592DC(c); // 801F3CF4
  c->r[3]=c->r[1]+0x00000008u; // 801F3CF8
  c->lr=0x801F3D00u; f_800592DC(c); // 801F3CFC
  {uint32_t ea=c->r[28]+0x000007E8u; WF32(ea,c->f[27]);} // 801F3D00
  {uint32_t ea=c->r[28]+0x000007ECu; WF32(ea,c->f[28]);} // 801F3D04
  {uint32_t ea=c->r[2]+0xFFFF956Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3D08
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[29]); // 801F3D0C
  {uint32_t ea=c->r[28]+0x000007F0u; WF32(ea,c->f[0]);} // 801F3D10
  {uint32_t ea=c->r[28]+0x000007F4u; WF32(ea,c->f[30]);} // 801F3D14
  {uint32_t ea=c->r[28]+0x000007F8u; WF32(ea,c->f[31]);} // 801F3D18
  c->r[3]=c->r[28]+0x000007FCu; // 801F3D1C
  c->r[4]=c->r[29]|c->r[29]; // 801F3D20
  c->lr=0x801F3D28u; f_8005D48C(c); // 801F3D24
  c->r[3]=c->r[28]+0x0000079Cu; // 801F3D28
  c->lr=0x801F3D30u; f_8017408C(c); // 801F3D2C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801F3D30
  {uint32_t ea=c->r[2]+0xFFFF9578u; c->f[1]=RF64(ea);} // 801F3D34
  W32(c->r[1]+0x00000064u,c->r[0]); // 801F3D38
  c->r[31]=0u+0x43300000u; // 801F3D3C
  W32(c->r[1]+0x00000060u,c->r[31]); // 801F3D40
  {uint32_t ea=c->r[1]+0x00000060u; c->f[0]=RF64(ea);} // 801F3D44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F3D48
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F3D4C
  c->r[3]=c->r[28]+0x0000079Cu; // 801F3D50
  c->lr=0x801F3D58u; f_80174084(c); // 801F3D54
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801F3D58
  {uint32_t ea=c->r[2]+0xFFFF9578u; c->f[1]=RF64(ea);} // 801F3D5C
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801F3D60
  W32(c->r[1]+0x00000068u,c->r[31]); // 801F3D64
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=RF64(ea);} // 801F3D68
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F3D6C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F3D70
  {uint32_t ea=c->r[2]+0xFFFF9570u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F3D74
  {uint32_t ea=c->r[28]+0x00000804u; WF32(ea,c->f[3]);} // 801F3D78
  {uint32_t ea=c->r[28]+0x000007F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F3D7C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3D80
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 801F3D84
  {uint32_t ea=c->r[28]+0x00000808u; WF32(ea,c->f[0]);} // 801F3D88
  {uint32_t ea=c->r[28]+0x000007F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F3D8C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3D90
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F3D94
  {uint32_t ea=c->r[28]+0x0000080Cu; WF32(ea,c->f[0]);} // 801F3D98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3D9C
  c->f[0]=c->ps1[0]=S(c->f[2]/c->f[0]); // 801F3DA0
  {uint32_t ea=c->r[28]+0x00000810u; WF32(ea,c->f[0]);} // 801F3DA4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3DA8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F3DAC
  {uint32_t ea=c->r[28]+0x00000814u; WF32(ea,c->f[0]);} // 801F3DB0
  {uint32_t ea=c->r[28]+0x00000818u; WF32(ea,c->f[3]);} // 801F3DB4
  {uint32_t ea=c->r[28]+0x0000081Cu; WF32(ea,c->f[3]);} // 801F3DB8
  {uint32_t ea=c->r[28]+0x00000820u; WF32(ea,c->f[3]);} // 801F3DBC
  c->f[0]=-c->f[1]; // 801F3DC0
  {uint32_t ea=c->r[2]+0xFFFF9574u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F3DC4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3DC8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801F3DCC
  {uint32_t ea=c->r[28]+0x000007F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3DD0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3DD4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801F3DD8
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[3]);} // 801F3DDC
  {uint32_t ea=c->r[28]+0x000007F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3DE0
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3DE4
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 801F3DE8
  {uint32_t ea=c->r[28]+0x000007F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3DEC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3DF0
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 801F3DF4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 801F3DF8
  {uint32_t ea=c->r[28]+0x000007F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3DFC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3E00
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801F3E04
  {uint32_t ea=c->r[28]+0x000007F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3E08
  c->f[0]=-c->f[0]; // 801F3E0C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3E10
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801F3E14
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[3]);} // 801F3E18
  {uint32_t ea=c->r[28]+0x000007F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3E1C
  c->f[0]=-c->f[0]; // 801F3E20
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3E24
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 801F3E28
  {uint32_t ea=c->r[28]+0x000007F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F3E2C
  c->f[0]=-c->f[0]; // 801F3E30
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 801F3E34
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 801F3E38
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[3]);} // 801F3E3C
  c->r[29]=0u+0x00000000u; // 801F3E40
  c->r[31]=c->r[1]+0x00000030u; // 801F3E44
  c->r[30]=c->r[28]+0x00000804u; // 801F3E48
L_801F3E4C:;
  c->r[3]=c->r[28]+0x000005BCu; // 801F3E4C
  c->r[4]=0u+0x00000000u; // 801F3E50
  c->r[5]=c->r[29]|c->r[29]; // 801F3E54
  c->r[6]=c->r[31]|c->r[31]; // 801F3E58
  c->lr=0x801F3E60u; f_8004D384(c); // 801F3E5C
  c->r[3]=c->r[28]+0x000005BCu; // 801F3E60
  c->r[4]=0u+0x00000000u; // 801F3E64
  c->r[5]=c->r[29]|c->r[29]; // 801F3E68
  c->r[6]=c->r[30]|c->r[30]; // 801F3E6C
  c->r[7]=0u+0xFFFFFFFFu; // 801F3E70
  c->lr=0x801F3E78u; f_8004D650(c); // 801F3E74
  c->r[3]=c->r[28]+0x000005BCu; // 801F3E78
  c->r[4]=0u+0x00000000u; // 801F3E7C
  c->r[5]=c->r[29]|c->r[29]; // 801F3E80
  c->r[6]=c->r[28]+0x000007FCu; // 801F3E84
  c->lr=0x801F3E8Cu; f_8004D508(c); // 801F3E88
  c->r[31]=c->r[31]+0x0000000Cu; // 801F3E8C
  c->r[30]=c->r[30]+0x00000008u; // 801F3E90
  c->r[29]=c->r[29]+0x00000001u; // 801F3E94
  cmps(c,0,(int32_t)c->r[29],4); // 801F3E98
  if (crb(c,0)) { IRQCHK(c); goto L_801F3E4C; } // 801F3E9C
  c->r[3]=c->r[28]|c->r[28]; // 801F3EA0
  c->lr=0x801F3EA8u; f_801F41A0(c); // 801F3EA4
  c->r[0]=0u+0x000000C8u; // 801F3EA8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F3EAC
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 801F3EB0
  c->r[0]=0u+0x000000B8u; // 801F3EB4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801F3EB8
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 801F3EBC
  c->r[0]=0u+0x000000A8u; // 801F3EC0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801F3EC4
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[29]=RF64(ea);} // 801F3EC8
  c->r[0]=0u+0x00000098u; // 801F3ECC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 801F3ED0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[28]=RF64(ea);} // 801F3ED4
  c->r[0]=0u+0x00000088u; // 801F3ED8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 801F3EDC
  {uint32_t ea=c->r[1]+0x00000080u; c->f[27]=RF64(ea);} // 801F3EE0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801F3EE4
  c->r[30]=R32(c->r[1]+0x00000078u); // 801F3EE8
  c->r[29]=R32(c->r[1]+0x00000074u); // 801F3EEC
  c->r[28]=R32(c->r[1]+0x00000070u); // 801F3EF0
  c->r[0]=R32(c->r[1]+0x000000D4u); // 801F3EF4
  c->lr=c->r[0]; // 801F3EF8
  c->r[1]=c->r[1]+0x000000D0u; // 801F3EFC
  return; // 801F3F00
}

// fn_801F3F04
void f_801F3F04(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000018Cu); // 801F3F04
  return; // 801F3F08
}

// fn_801F3F0C
void f_801F3F0C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000188u); // 801F3F0C
  return; // 801F3F10
}

// fn_801F3F14
void f_801F3F14(Ctx* __restrict c) {
  f_801F39E4(c); return; // 801F3F14
}

// fn_801F3F18
void f_801F3F18(Ctx* __restrict c) {
  f_801F43A4(c); return; // 801F3F18
}

// fn_801F3F1C
void f_801F3F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3F1C
  c->r[0]=c->lr; // 801F3F20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F3F24
  c->r[11]=c->r[1]+0x00000020u; // 801F3F28
  c->lr=0x801F3F30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F3F2C
  c->r[26]=c->r[3]|c->r[3]; // 801F3F30
  c->r[27]=c->r[4]|c->r[4]; // 801F3F34
  c->r[28]=c->r[5]|c->r[5]; // 801F3F38
  c->r[29]=c->r[7]|c->r[7]; // 801F3F3C
  c->r[30]=c->r[8]|c->r[8]; // 801F3F40
  c->r[31]=c->r[9]|c->r[9]; // 801F3F44
  c->r[4]=0u+0x00000000u; // 801F3F48
  c->lr=0x801F3F50u; f_801F4390(c); // 801F3F4C
  c->r[3]=c->r[26]|c->r[26]; // 801F3F50
  c->r[4]=c->r[27]|c->r[27]; // 801F3F54
  c->r[5]=c->r[28]|c->r[28]; // 801F3F58
  c->r[6]=c->r[29]|c->r[29]; // 801F3F5C
  c->r[7]=c->r[30]|c->r[30]; // 801F3F60
  c->r[8]=c->r[31]|c->r[31]; // 801F3F64
  c->lr=0x801F3F6Cu; f_801F3908(c); // 801F3F68
  c->r[11]=c->r[1]+0x00000020u; // 801F3F6C
  c->lr=0x801F3F74u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F3F70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F3F74
  c->lr=c->r[0]; // 801F3F78
  c->r[1]=c->r[1]+0x00000020u; // 801F3F7C
  return; // 801F3F80
}

// fn_801F3F84
void f_801F3F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F3F84
  c->r[0]=c->lr; // 801F3F88
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F3F8C
  c->r[11]=c->r[1]+0x00000050u; // 801F3F90
  c->lr=0x801F3F98u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F3F94
  c->r[31]=c->r[3]|c->r[3]; // 801F3F98
  c->r[24]=c->r[4]|c->r[4]; // 801F3F9C
  c->r[25]=c->r[5]|c->r[5]; // 801F3FA0
  c->r[26]=c->r[6]|c->r[6]; // 801F3FA4
  c->r[27]=c->r[7]|c->r[7]; // 801F3FA8
  c->r[28]=c->r[8]|c->r[8]; // 801F3FAC
  c->r[29]=c->r[9]|c->r[9]; // 801F3FB0
  c->r[30]=c->r[10]|c->r[10]; // 801F3FB4
  c->r[3]=c->r[1]+0x00000010u; // 801F3FB8
  c->lr=0x801F3FC0u; f_800592DC(c); // 801F3FBC
  c->lr=0x801F3FC4u; f_801F3418(c); // 801F3FC0
  cmps(c,0,(int32_t)c->r[3],0); // 801F3FC4
  if (!crb(c,2)) { goto L_801F3FDC; } // 801F3FC8
  c->lr=0x801F3FD0u; f_801F3388(c); // 801F3FCC
  c->r[0]=0u+0x00000001u; // 801F3FD0
  W32(c->r[31]+0x00000828u,c->r[0]); // 801F3FD4
  goto L_801F3FE4; // 801F3FD8
L_801F3FDC:;
  c->r[0]=0u+0x00000000u; // 801F3FDC
  W32(c->r[31]+0x00000828u,c->r[0]); // 801F3FE0
L_801F3FE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801F3FE4
  c->r[4]=c->r[26]|c->r[26]; // 801F3FE8
  c->r[5]=c->r[27]|c->r[27]; // 801F3FEC
  c->r[6]=c->r[30]|c->r[30]; // 801F3FF0
  c->lr=0x801F3FF8u; f_801F37C4(c); // 801F3FF4
  cmps(c,0,(int32_t)c->r[3],0); // 801F3FF8
  if (!crb(c,2)) { goto L_801F4008; } // 801F3FFC
  c->r[3]=0u+0x00000000u; // 801F4000
  goto L_801F4188; // 801F4004
L_801F4008:;
  W32(c->r[31]+0x00000800u,c->r[28]); // 801F4008
  c->r[3]=c->r[31]+0x0000079Cu; // 801F400C
  c->r[0]=c->r[24]+0x0000001Fu; // 801F4010
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801F4014
  c->r[5]=c->r[25]|c->r[25]; // 801F4018
  c->r[6]=0u+0x00000006u; // 801F401C
  c->r[30]=0u+0x804E0000u; // 801F4020
  c->r[7]=c->r[30]+0xFFFFA188u; // 801F4024
  c->r[8]=0u+0x00000000u; // 801F4028
  c->r[9]=0u+0x00000001u; // 801F402C
  c->lr=0x801F4034u; f_800556D8(c); // 801F4030
  c->r[3]=c->r[31]+0x000005BCu; // 801F4034
  c->r[4]=0u+0x00000003u; // 801F4038
  c->r[5]=0u+0x00000001u; // 801F403C
  c->r[6]=0u+0x00000000u; // 801F4040
  c->r[7]=c->r[30]+0xFFFFA188u; // 801F4044
  c->r[8]=0u+0x00000000u; // 801F4048
  c->lr=0x801F4050u; f_8004CFB0(c); // 801F404C
  c->r[3]=c->r[31]+0x000005BCu; // 801F4050
  c->r[4]=0u+0x00000001u; // 801F4054
  c->lr=0x801F405Cu; f_8004D750(c); // 801F4058
  c->r[3]=c->r[31]+0x000005BCu; // 801F405C
  c->r[4]=0u+0x00000000u; // 801F4060
  c->lr=0x801F4068u; f_8004D7F8(c); // 801F4064
  c->r[3]=c->r[31]+0x000005BCu; // 801F4068
  c->r[4]=c->r[29]|c->r[29]; // 801F406C
  c->lr=0x801F4074u; f_8004D740(c); // 801F4070
  c->r[3]=c->r[31]+0x0000079Cu; // 801F4074
  c->lr=0x801F407Cu; f_8017409C(c); // 801F4078
  c->r[4]=c->r[3]|c->r[3]; // 801F407C
  c->r[3]=c->r[31]+0x00000670u; // 801F4080
  c->lr=0x801F4088u; f_8004CDB4(c); // 801F4084
  c->r[3]=c->r[31]|c->r[31]; // 801F4088
  c->r[4]=0u+0x00000000u; // 801F408C
  c->lr=0x801F4094u; f_801F4390(c); // 801F4090
  c->r[3]=c->r[31]+0x000005BCu; // 801F4094
  c->r[4]=0u+0x00000001u; // 801F4098
  c->lr=0x801F40A0u; f_8004D22C(c); // 801F409C
  c->r[3]=c->r[31]+0x000005BCu; // 801F40A0
  c->r[4]=0u+0x00000001u; // 801F40A4
  c->lr=0x801F40ACu; f_8004D26C(c); // 801F40A8
  c->r[3]=c->r[1]+0x00000010u; // 801F40AC
  c->lr=0x801F40B4u; f_8005D29C(c); // 801F40B0
  c->r[0]=R32(c->r[31]+0x00000800u); // 801F40B4
  cmps(c,0,(int32_t)c->r[0],0); // 801F40B8
  if (crb(c,2)) { goto L_801F4104; } // 801F40BC
  c->r[3]=c->r[1]+0x0000000Cu; // 801F40C0
  c->r[4]=0u+0x80460000u; // 801F40C4
  c->r[4]=R32(c->r[4]+0xFFFFD188u); // 801F40C8
  c->lr=0x801F40D0u; f_800549FC(c); // 801F40CC
  c->r[3]=c->r[31]|c->r[31]; // 801F40D0
  {uint32_t ea=c->r[2]+0xFFFF9574u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F40D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 801F40D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801F40DC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 801F40E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[5]); // 801F40E4
  {uint32_t ea=c->r[2]+0xFFFF9580u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F40E8
  c->r[4]=c->r[1]+0x0000000Cu; // 801F40EC
  c->lr=0x801F40F4u; f_801F3C58(c); // 801F40F0
  c->r[3]=c->r[1]+0x0000000Cu; // 801F40F4
  c->r[4]=0u+0xFFFFFFFFu; // 801F40F8
  c->lr=0x801F4100u; f_80047BD4(c); // 801F40FC
  goto L_801F4174; // 801F4100
L_801F4104:;
  c->r[3]=c->r[1]+0x00000010u; // 801F4104
  {uint32_t ea=c->r[2]+0xFFFF9574u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4108
  c->lr=0x801F4110u; f_801A17B8(c); // 801F410C
  c->r[3]=c->r[1]+0x00000008u; // 801F4110
  c->r[4]=0u+0x80460000u; // 801F4114
  c->r[4]=R32(c->r[4]+0xFFFFD188u); // 801F4118
  c->lr=0x801F4120u; f_800549FC(c); // 801F411C
  c->r[3]=c->r[31]|c->r[31]; // 801F4120
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4124
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F4128
  {uint32_t ea=c->r[2]+0xFFFF9580u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F412C
  {uint32_t ea=c->r[2]+0xFFFF9588u; c->f[5]=RF64(ea);} // 801F4130
  c->r[0]=c->r[24]^0x80000000u; // 801F4134
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F4138
  c->r[4]=0u+0x43300000u; // 801F413C
  W32(c->r[1]+0x00000018u,c->r[4]); // 801F4140
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801F4144
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 801F4148
  c->r[0]=c->r[25]^0x80000000u; // 801F414C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4150
  W32(c->r[1]+0x00000020u,c->r[4]); // 801F4154
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801F4158
  c->f[5]=c->ps1[5]=S(c->f[0]-c->f[5]); // 801F415C
  c->r[4]=c->r[1]+0x00000008u; // 801F4160
  c->lr=0x801F4168u; f_801F3C58(c); // 801F4164
  c->r[3]=c->r[1]+0x00000008u; // 801F4168
  c->r[4]=0u+0xFFFFFFFFu; // 801F416C
  c->lr=0x801F4174u; f_80047BD4(c); // 801F4170
L_801F4174:;
  c->r[3]=0u+0x804E0000u; // 801F4174
  c->r[3]=c->r[3]+0xFFFFA1B8u; // 801F4178
  c->r[4]=c->r[31]|c->r[31]; // 801F417C
  c->lr=0x801F4184u; f_8028CA70(c); // 801F4180
  c->r[3]=0u+0x00000001u; // 801F4184
L_801F4188:;
  c->r[11]=c->r[1]+0x00000050u; // 801F4188
  c->lr=0x801F4190u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F418C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F4190
  c->lr=c->r[0]; // 801F4194
  c->r[1]=c->r[1]+0x00000050u; // 801F4198
  return; // 801F419C
}

// fn_801F41A0
void f_801F41A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F41A0
  c->r[0]=c->lr; // 801F41A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F41A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F41AC
  c->r[31]=c->r[3]|c->r[3]; // 801F41B0
  c->r[3]=c->r[3]+0x000005BCu; // 801F41B4
  {uint32_t ea=c->r[31]+0x000007E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F41B8
  {uint32_t ea=c->r[31]+0x000007ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F41BC
  {uint32_t ea=c->r[31]+0x000007F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F41C0
  c->lr=0x801F41C8u; f_80070424(c); // 801F41C4
  c->r[0]=R32(c->r[31]+0x00000800u); // 801F41C8
  cmps(c,0,(int32_t)c->r[0],0); // 801F41CC
  if (crb(c,2)) { goto L_801F4210; } // 801F41D0
  c->lr=0x801F41D8u; f_8005D984(c); // 801F41D4
  cmps(c,0,(int32_t)c->r[3],0); // 801F41D8
  if (crb(c,2)) { goto L_801F41F8; } // 801F41DC
  c->r[3]=c->r[31]+0x000005BCu; // 801F41E0
  {uint32_t ea=c->r[2]+0xFFFF9590u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F41E4
  {uint32_t ea=c->r[2]+0xFFFF9594u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F41E8
  {uint32_t ea=c->r[2]+0xFFFF9580u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F41EC
  c->lr=0x801F41F4u; f_80070434(c); // 801F41F0
  goto L_801F4224; // 801F41F4
L_801F41F8:;
  c->r[3]=c->r[31]+0x000005BCu; // 801F41F8
  {uint32_t ea=c->r[2]+0xFFFF9580u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F41FC
  c->f[2]=c->f[1]; // 801F4200
  c->f[3]=c->f[1]; // 801F4204
  c->lr=0x801F420Cu; f_80070434(c); // 801F4208
  goto L_801F4224; // 801F420C
L_801F4210:;
  c->r[3]=c->r[31]+0x000005BCu; // 801F4210
  {uint32_t ea=c->r[2]+0xFFFF9580u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4214
  c->f[2]=c->f[1]; // 801F4218
  c->f[3]=c->f[1]; // 801F421C
  c->lr=0x801F4224u; f_80070434(c); // 801F4220
L_801F4224:;
  c->r[3]=c->r[31]+0x000005BCu; // 801F4224
  c->lr=0x801F422Cu; f_8004E1AC(c); // 801F4228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F422C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4230
  c->lr=c->r[0]; // 801F4234
  c->r[1]=c->r[1]+0x00000010u; // 801F4238
  return; // 801F423C
}

// fn_801F4240
void f_801F4240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4240
  c->r[0]=c->lr; // 801F4244
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F4248
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F424C
  W32(c->r[1]+0x00000038u,c->r[30]); // 801F4250
  W32(c->r[1]+0x00000034u,c->r[29]); // 801F4254
  c->r[29]=c->r[3]|c->r[3]; // 801F4258
  c->r[0]=0u+0x43300000u; // 801F425C
  W32(c->r[1]+0x00000018u,c->r[0]); // 801F4260
  c->r[0]=0u+0x43300000u; // 801F4264
  W32(c->r[1]+0x00000020u,c->r[0]); // 801F4268
  c->r[3]=c->r[1]+0x00000010u; // 801F426C
  c->lr=0x801F4274u; f_800592DC(c); // 801F4270
  c->r[3]=c->r[1]+0x00000008u; // 801F4274
  c->lr=0x801F427Cu; f_800592DC(c); // 801F4278
  c->r[3]=c->r[29]+0x0000079Cu; // 801F427C
  c->lr=0x801F4284u; f_8017408C(c); // 801F4280
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801F4284
  {uint32_t ea=c->r[2]+0xFFFF9578u; c->f[1]=RF64(ea);} // 801F4288
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F428C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801F4290
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F4294
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 801F4298
  c->r[3]=c->r[29]+0x0000079Cu; // 801F429C
  c->lr=0x801F42A4u; f_80174084(c); // 801F42A0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801F42A4
  {uint32_t ea=c->r[2]+0xFFFF9578u; c->f[1]=RF64(ea);} // 801F42A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F42AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801F42B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F42B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801F42B8
  c->r[0]=R32(c->r[29]+0x00000074u); // 801F42BC
  {uint32_t ea=c->r[2]+0xFFFF9588u; c->f[1]=RF64(ea);} // 801F42C0
  c->r[0]=c->r[0]^0x80000000u; // 801F42C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F42C8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801F42CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F42D0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F42D4
  c->r[0]=R32(c->r[29]+0x00000078u); // 801F42D8
  c->r[0]=c->r[0]^0x80000000u; // 801F42DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F42E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801F42E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801F42E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F42EC
  {uint32_t ea=c->r[2]+0xFFFF9570u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F42F0
  {uint32_t ea=c->r[29]+0x00000804u; WF32(ea,c->f[2]);} // 801F42F4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F42F8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F42FC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F4300
  {uint32_t ea=c->r[29]+0x00000808u; WF32(ea,c->f[0]);} // 801F4304
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4308
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F430C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F4310
  {uint32_t ea=c->r[29]+0x0000080Cu; WF32(ea,c->f[0]);} // 801F4314
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4318
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F431C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F4320
  {uint32_t ea=c->r[29]+0x00000810u; WF32(ea,c->f[0]);} // 801F4324
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4328
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F432C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801F4330
  {uint32_t ea=c->r[29]+0x00000814u; WF32(ea,c->f[0]);} // 801F4334
  {uint32_t ea=c->r[29]+0x00000818u; WF32(ea,c->f[2]);} // 801F4338
  {uint32_t ea=c->r[29]+0x0000081Cu; WF32(ea,c->f[2]);} // 801F433C
  {uint32_t ea=c->r[29]+0x00000820u; WF32(ea,c->f[2]);} // 801F4340
  c->r[30]=0u+0x00000000u; // 801F4344
  c->r[31]=c->r[29]+0x00000804u; // 801F4348
L_801F434C:;
  c->r[3]=c->r[29]+0x000005BCu; // 801F434C
  c->r[4]=0u+0x00000000u; // 801F4350
  c->r[5]=c->r[30]|c->r[30]; // 801F4354
  c->r[6]=c->r[31]|c->r[31]; // 801F4358
  c->r[7]=0u+0xFFFFFFFFu; // 801F435C
  c->lr=0x801F4364u; f_8004D650(c); // 801F4360
  c->r[31]=c->r[31]+0x00000008u; // 801F4364
  c->r[30]=c->r[30]+0x00000001u; // 801F4368
  cmps(c,0,(int32_t)c->r[30],4); // 801F436C
  if (crb(c,0)) { IRQCHK(c); goto L_801F434C; } // 801F4370
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F4374
  c->r[30]=R32(c->r[1]+0x00000038u); // 801F4378
  c->r[29]=R32(c->r[1]+0x00000034u); // 801F437C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F4380
  c->lr=c->r[0]; // 801F4384
  c->r[1]=c->r[1]+0x00000040u; // 801F4388
  return; // 801F438C
}

// fn_801F4390
void f_801F4390(Ctx* __restrict c) {
  W32(c->r[3]+0x00000824u,c->r[4]); // 801F4390
  c->r[3]=c->r[3]+0x000005BCu; // 801F4394
  f_8004C674(c); return; // 801F4398
}

// fn_801F439C
void f_801F439C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 801F439C
  return; // 801F43A0
}

// fn_801F43A4
void f_801F43A4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801F43A4
  c->r[3]=rotl(c->r[0],0)&0x00000004u; // 801F43A8
  c->r[0]=0u-c->r[3]; // 801F43AC
  c->r[0]=c->r[0]|c->r[3]; // 801F43B0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F43B4
  return; // 801F43B8
}

// fn_801F43BC
void f_801F43BC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801F43BC
  c->r[3]=c->r[13]+0xFFFF9E78u; // 801F43C0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F43C4
  return; // 801F43C8
}

// fn_801F43CC
void f_801F43CC(Ctx* __restrict c) {
  f_801F440C(c); return; // 801F43CC
}

// fn_801F43D0
void f_801F43D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F43D0
  c->r[0]=c->lr; // 801F43D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F43D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F43DC
  c->r[31]=c->r[3]|c->r[3]; // 801F43E0
  c->lr=0x801F43E8u; f_801F440C(c); // 801F43E4
  c->r[4]=c->r[3]|c->r[3]; // 801F43E8
  c->r[3]=c->r[31]|c->r[31]; // 801F43EC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801F43F0
  c->lr=0x801F43F8u; f_801F4428(c); // 801F43F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F43F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F43FC
  c->lr=c->r[0]; // 801F4400
  c->r[1]=c->r[1]+0x00000010u; // 801F4404
  return; // 801F4408
}

// fn_801F440C
void f_801F440C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801F440C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801F4410
  c->r[0]=R32(c->r[3]+0x00000018u); // 801F4414
  c->r[0]=c->r[4]-c->r[0]; // 801F4418
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 801F441C
  c->r[3]=c->r[5]+c->r[0]; // 801F4420
  return; // 801F4424
}

// fn_801F4428
void f_801F4428(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801F4428
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801F442C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801F4430
  c->r[3]=c->r[3]+c->r[0]; // 801F4434
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801F4438
  return; // 801F443C
}

// fn_801F4440
void f_801F4440(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801F4440
  c->r[3]=0u+0x80470000u; // 801F4444
  c->r[3]=c->r[3]+0x00005740u; // 801F4448
  c->r[3]=R32(c->r[3]+c->r[0]); // 801F444C
  return; // 801F4450
}

// fn_801F4454
void f_801F4454(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801F4454
  c->r[4]=0u+0x80470000u; // 801F4458
  c->r[4]=c->r[4]+0x00005740u; // 801F445C
  goto L_801F446C; // 801F4460
L_801F4464:;
  c->r[4]=c->r[4]+0x00000004u; // 801F4464
  c->r[3]=c->r[3]+0x00000001u; // 801F4468
L_801F446C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801F446C
  cmps(c,0,(int32_t)c->r[0],0); // 801F4470
  if (!crb(c,2)) { IRQCHK(c); goto L_801F4464; } // 801F4474
  return; // 801F4478
}

// fn_801F447C
void f_801F447C(Ctx* __restrict c) {
  f_800FEE80(c); return; // 801F447C
}

// fn_801F4480
void f_801F4480(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801F4480
  c->r[3]=c->r[3]+0x00001EE0u; // 801F4484
  return; // 801F4488
}

// fn_801F448C
void f_801F448C(Ctx* __restrict c) {
  goto L_801F4490; // 801F448C
L_801F4490:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 801F4490
  c->r[3]=R32(c->r[3]+0x00000034u); // 801F4494
  c->r[0]=R32(c->r[3]+0x00000018u); // 801F4498
  c->r[0]=c->r[4]-c->r[0]; // 801F449C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801F44A0
  c->r[3]=c->r[5]+c->r[0]; // 801F44A4
  return; // 801F44A8
}

// fn_801F44AC
void f_801F44AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F44AC
  c->r[0]=c->lr; // 801F44B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F44B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F44B8
  c->r[31]=c->r[3]|c->r[3]; // 801F44BC
  c->r[4]=0u+0x00000000u; // 801F44C0
  c->r[5]=0u+0x00000004u; // 801F44C4
  c->lr=0x801F44CCu; f_800060B8(c); // 801F44C8
  c->r[3]=c->r[31]|c->r[31]; // 801F44CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F44D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F44D4
  c->lr=c->r[0]; // 801F44D8
  c->r[1]=c->r[1]+0x00000010u; // 801F44DC
  return; // 801F44E0
}

// fn_801F44E4
void f_801F44E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F44E4
  c->r[0]=c->lr; // 801F44E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F44EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F44F0
  c->r[31]=c->r[3]|c->r[3]; // 801F44F4
  cmps(c,0,(int32_t)c->r[3],0); // 801F44F8
  if (crb(c,2)) { goto L_801F4510; } // 801F44FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801F4500
  cmps(c,0,(int32_t)c->r[0],0); // 801F4504
  if (!crb(c,1)) { goto L_801F4510; } // 801F4508
  c->lr=0x801F4510u; f_80047B20(c); // 801F450C
L_801F4510:;
  c->r[3]=c->r[31]|c->r[31]; // 801F4510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F4514
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4518
  c->lr=c->r[0]; // 801F451C
  c->r[1]=c->r[1]+0x00000010u; // 801F4520
  return; // 801F4524
}

// fn_801F4528
void f_801F4528(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801F4528
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F452C
  c->r[6]=R32(c->r[3]+c->r[7]); // 801F4530
  c->r[5]=0u+0x00000001u; // 801F4534
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801F4538
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801F453C
  c->r[0]=c->r[6]|c->r[0]; // 801F4540
  W32(c->r[3]+c->r[7],c->r[0]); // 801F4544
  return; // 801F4548
}

// fn_801F454C
void f_801F454C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801F454C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801F4550
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801F4554
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801F4558
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F455C
  c->r[0]=R32(c->r[3]+c->r[0]); // 801F4560
  c->r[3]=c->r[5]&c->r[0]; // 801F4564
  c->r[0]=0u-c->r[3]; // 801F4568
  c->r[0]=c->r[0]|c->r[3]; // 801F456C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F4570
  return; // 801F4574
}

// fn_801F4578
void f_801F4578(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801F4578
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801F457C
  c->r[6]=R32(c->r[3]+c->r[7]); // 801F4580
  c->r[5]=0u+0x00000001u; // 801F4584
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801F4588
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801F458C
  c->r[0]=~(c->r[0]|c->r[0]); // 801F4590
  c->r[0]=c->r[6]&c->r[0]; // 801F4594
  W32(c->r[3]+c->r[7],c->r[0]); // 801F4598
  return; // 801F459C
}

// fn_801F45A0
void f_801F45A0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801F45A0
  f_801F4528(c); return; // 801F45A4
}

// fn_801F45A8
void f_801F45A8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801F45A8
  f_801F4578(c); return; // 801F45AC
}

// fn_801F45B0
void f_801F45B0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801F45B0
  f_801F454C(c); return; // 801F45B4
}

// fn_801F45B8
void f_801F45B8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801F45B8
  f_801F4528(c); return; // 801F45BC
}

// fn_801F45C0
void f_801F45C0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801F45C0
  f_801F4578(c); return; // 801F45C4
}

// fn_801F45C8
void f_801F45C8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801F45C8
  f_801F454C(c); return; // 801F45CC
}

// fn_801F45D0
void f_801F45D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F45D0
  c->r[0]=c->lr; // 801F45D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F45D8
  c->lr=0x801F45E0u; f_8006592C(c); // 801F45DC
  c->r[4]=0u+0x0000000Bu; // 801F45E0
  c->r[5]=0u+0x00000000u; // 801F45E4
  c->r[6]=0u+0xFFFFFFFFu; // 801F45E8
  c->r[7]=0u+0xFFFFFFFFu; // 801F45EC
  c->lr=0x801F45F4u; f_80048F20(c); // 801F45F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F45F4
  c->lr=c->r[0]; // 801F45F8
  c->r[1]=c->r[1]+0x00000010u; // 801F45FC
  return; // 801F4600
}

// fn_801F4604
void f_801F4604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4604
  c->r[0]=c->lr; // 801F4608
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F460C
  c->lr=0x801F4614u; f_8006592C(c); // 801F4610
  c->r[4]=0u+0x0000000Du; // 801F4614
  c->r[5]=0u+0x00000000u; // 801F4618
  c->r[6]=0u+0xFFFFFFFFu; // 801F461C
  c->r[7]=0u+0xFFFFFFFFu; // 801F4620
  c->lr=0x801F4628u; f_80048F20(c); // 801F4624
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4628
  c->lr=c->r[0]; // 801F462C
  c->r[1]=c->r[1]+0x00000010u; // 801F4630
  return; // 801F4634
}

// fn_801F4638
void f_801F4638(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4638
  c->r[0]=c->lr; // 801F463C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4640
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801F4644
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801F4648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F464C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F4650
  c->r[30]=c->r[3]|c->r[3]; // 801F4654
  c->lr=0x801F465Cu; f_8011B41C(c); // 801F4658
  c->r[4]=0u+0x00000016u; // 801F465C
  c->lr=0x801F4664u; f_8011B814(c); // 801F4660
  c->r[31]=c->r[3]|c->r[3]; // 801F4664
  c->lr=0x801F466Cu; f_8012FCB8(c); // 801F4668
  c->f[31]=c->f[1]; // 801F466C
  c->r[3]=c->r[31]|c->r[31]; // 801F4670
  c->lr=0x801F4678u; f_8012FCB0(c); // 801F4674
  c->r[3]=c->r[30]|c->r[30]; // 801F4678
  c->f[2]=c->f[31]; // 801F467C
  c->lr=0x801F4684u; f_8012FA24(c); // 801F4680
  c->r[3]=c->r[31]|c->r[31]; // 801F4684
  c->lr=0x801F468Cu; f_8012FCD0(c); // 801F4688
  c->f[31]=c->f[1]; // 801F468C
  c->r[3]=c->r[31]|c->r[31]; // 801F4690
  c->lr=0x801F4698u; f_8012FCC8(c); // 801F4694
  c->r[3]=c->r[30]|c->r[30]; // 801F4698
  c->f[2]=c->f[31]; // 801F469C
  c->lr=0x801F46A4u; f_8012FA40(c); // 801F46A0
  c->r[3]=c->r[31]|c->r[31]; // 801F46A4
  c->lr=0x801F46ACu; f_8012FCE8(c); // 801F46A8
  c->r[3]=c->r[30]|c->r[30]; // 801F46AC
  c->lr=0x801F46B4u; f_8012FA6C(c); // 801F46B0
  c->r[3]=c->r[31]|c->r[31]; // 801F46B4
  c->lr=0x801F46BCu; f_8012FCF0(c); // 801F46B8
  c->r[3]=c->r[30]|c->r[30]; // 801F46BC
  c->lr=0x801F46C4u; f_8012FA74(c); // 801F46C0
  c->r[3]=c->r[30]|c->r[30]; // 801F46C4
  c->r[4]=0u+0x00000001u; // 801F46C8
  c->lr=0x801F46D0u; f_8012F918(c); // 801F46CC
  c->r[3]=c->r[31]|c->r[31]; // 801F46D0
  c->lr=0x801F46D8u; f_801F9960(c); // 801F46D4
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F46D8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F46DC
  c->r[3]=c->r[30]|c->r[30]; // 801F46E0
  c->lr=0x801F46E8u; f_80117D04(c); // 801F46E4
  c->r[3]=c->r[30]|c->r[30]; // 801F46E8
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F46EC
  c->f[2]=c->f[1]; // 801F46F0
  c->f[3]=c->f[1]; // 801F46F4
  c->lr=0x801F46FCu; f_80114AB8(c); // 801F46F8
  c->r[3]=c->r[31]|c->r[31]; // 801F46FC
  c->lr=0x801F4704u; f_801F9978(c); // 801F4700
  c->f[31]=c->f[1]; // 801F4704
  c->r[3]=c->r[31]|c->r[31]; // 801F4708
  c->lr=0x801F4710u; f_801F9978(c); // 801F470C
  c->r[3]=c->r[30]|c->r[30]; // 801F4710
  c->f[2]=c->f[31]; // 801F4714
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F4718
  c->lr=0x801F4720u; f_80114AA8(c); // 801F471C
  c->lr=0x801F4724u; f_8011A9D8(c); // 801F4720
  c->r[4]=0u+0x00000000u; // 801F4724
  c->lr=0x801F472Cu; f_8011AF74(c); // 801F4728
  c->r[31]=c->r[3]|c->r[3]; // 801F472C
  c->lr=0x801F4734u; f_8011A6E8(c); // 801F4730
  c->r[4]=c->r[31]|c->r[31]; // 801F4734
  c->lr=0x801F473Cu; f_8011A9B0(c); // 801F4738
  c->lr=0x801F4740u; f_8012DA20(c); // 801F473C
  c->r[4]=c->r[3]|c->r[3]; // 801F4740
  c->r[3]=c->r[30]|c->r[30]; // 801F4744
  c->lr=0x801F474Cu; f_80114AA0(c); // 801F4748
  c->r[3]=c->r[30]|c->r[30]; // 801F474C
  c->r[4]=0u+0x00000016u; // 801F4750
  c->r[5]=0u+0x00000001u; // 801F4754
  c->r[6]=0u+0xFFFFFFFFu; // 801F4758
  c->lr=0x801F4760u; f_8012DE5C(c); // 801F475C
  c->r[3]=c->r[30]|c->r[30]; // 801F4760
  c->lr=0x801F4768u; f_8012F448(c); // 801F4764
  c->r[3]=c->r[30]|c->r[30]; // 801F4768
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F476C
  c->r[4]=0u+0x00000006u; // 801F4770
  c->lr=0x801F4778u; f_8012E920(c); // 801F4774
  c->r[3]=c->r[30]|c->r[30]; // 801F4778
  c->r[4]=0u+0x00000001u; // 801F477C
  c->lr=0x801F4784u; f_8012E1C0(c); // 801F4780
  c->r[3]=c->r[30]|c->r[30]; // 801F4784
  c->r[4]=0u+0x00000000u; // 801F4788
  c->lr=0x801F4790u; f_8012F910(c); // 801F478C
  c->r[0]=0u+0x00000018u; // 801F4790
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F4794
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801F4798
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F479C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F47A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F47A4
  c->lr=c->r[0]; // 801F47A8
  c->r[1]=c->r[1]+0x00000020u; // 801F47AC
  return; // 801F47B0
}

// fn_801F47B4
void f_801F47B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F47B4
  c->r[0]=c->lr; // 801F47B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F47BC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801F47C0
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801F47C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F47C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F47CC
  c->r[30]=c->r[3]|c->r[3]; // 801F47D0
  c->lr=0x801F47D8u; f_8011B41C(c); // 801F47D4
  c->r[4]=0u+0x00000016u; // 801F47D8
  c->lr=0x801F47E0u; f_8011B814(c); // 801F47DC
  c->r[31]=c->r[3]|c->r[3]; // 801F47E0
  c->lr=0x801F47E8u; f_8012FCB8(c); // 801F47E4
  c->f[31]=c->f[1]; // 801F47E8
  c->r[3]=c->r[31]|c->r[31]; // 801F47EC
  c->lr=0x801F47F4u; f_8012FCB0(c); // 801F47F0
  c->r[3]=c->r[30]|c->r[30]; // 801F47F4
  c->f[2]=c->f[31]; // 801F47F8
  c->lr=0x801F4800u; f_8012FA24(c); // 801F47FC
  c->r[3]=c->r[31]|c->r[31]; // 801F4800
  c->lr=0x801F4808u; f_8012FCD0(c); // 801F4804
  c->f[31]=c->f[1]; // 801F4808
  c->r[3]=c->r[31]|c->r[31]; // 801F480C
  c->lr=0x801F4814u; f_8012FCC8(c); // 801F4810
  c->r[3]=c->r[30]|c->r[30]; // 801F4814
  c->f[2]=c->f[31]; // 801F4818
  c->lr=0x801F4820u; f_8012FA40(c); // 801F481C
  c->r[3]=c->r[31]|c->r[31]; // 801F4820
  c->lr=0x801F4828u; f_8012FCE8(c); // 801F4824
  c->r[3]=c->r[30]|c->r[30]; // 801F4828
  c->lr=0x801F4830u; f_8012FA6C(c); // 801F482C
  c->r[3]=c->r[31]|c->r[31]; // 801F4830
  c->lr=0x801F4838u; f_8012FCF0(c); // 801F4834
  c->r[3]=c->r[30]|c->r[30]; // 801F4838
  c->lr=0x801F4840u; f_8012FA74(c); // 801F483C
  c->r[3]=c->r[30]|c->r[30]; // 801F4840
  c->r[4]=0u+0x00000001u; // 801F4844
  c->lr=0x801F484Cu; f_8012F918(c); // 801F4848
  c->r[3]=c->r[31]|c->r[31]; // 801F484C
  c->lr=0x801F4854u; f_801F9960(c); // 801F4850
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4854
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F4858
  {uint32_t ea=c->r[2]+0xFFFF95A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F485C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F4860
  c->r[3]=c->r[30]|c->r[30]; // 801F4864
  c->lr=0x801F486Cu; f_80117D04(c); // 801F4868
  c->r[3]=c->r[31]|c->r[31]; // 801F486C
  c->lr=0x801F4874u; f_801F9978(c); // 801F4870
  c->f[31]=c->f[1]; // 801F4874
  c->r[3]=c->r[31]|c->r[31]; // 801F4878
  c->lr=0x801F4880u; f_801F9978(c); // 801F487C
  c->r[3]=c->r[30]|c->r[30]; // 801F4880
  c->f[2]=c->f[31]; // 801F4884
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F4888
  c->lr=0x801F4890u; f_80114AA8(c); // 801F488C
  c->lr=0x801F4894u; f_8011A9D8(c); // 801F4890
  c->r[4]=0u+0x00000000u; // 801F4894
  c->lr=0x801F489Cu; f_8011AF74(c); // 801F4898
  c->r[31]=c->r[3]|c->r[3]; // 801F489C
  c->lr=0x801F48A4u; f_8011A6E8(c); // 801F48A0
  c->r[4]=c->r[31]|c->r[31]; // 801F48A4
  c->lr=0x801F48ACu; f_8011A9B0(c); // 801F48A8
  c->lr=0x801F48B0u; f_8012DA20(c); // 801F48AC
  c->r[4]=c->r[3]|c->r[3]; // 801F48B0
  c->r[3]=c->r[30]|c->r[30]; // 801F48B4
  c->lr=0x801F48BCu; f_80114AA0(c); // 801F48B8
  c->r[3]=c->r[30]|c->r[30]; // 801F48BC
  c->r[4]=0u+0x00000016u; // 801F48C0
  c->r[5]=0u+0x00000006u; // 801F48C4
  c->r[6]=0u+0xFFFFFFFFu; // 801F48C8
  c->lr=0x801F48D0u; f_8012DE5C(c); // 801F48CC
  c->r[3]=c->r[30]|c->r[30]; // 801F48D0
  c->lr=0x801F48D8u; f_8012F448(c); // 801F48D4
  c->r[3]=c->r[30]|c->r[30]; // 801F48D8
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F48DC
  c->r[4]=0u+0x00000006u; // 801F48E0
  c->lr=0x801F48E8u; f_8012E920(c); // 801F48E4
  c->r[3]=c->r[30]|c->r[30]; // 801F48E8
  c->r[4]=0u+0x00000001u; // 801F48EC
  c->lr=0x801F48F4u; f_8012E1C0(c); // 801F48F0
  c->r[3]=c->r[30]|c->r[30]; // 801F48F4
  c->r[4]=0u+0x00000000u; // 801F48F8
  c->lr=0x801F4900u; f_8012F910(c); // 801F48FC
  c->r[0]=0u+0x00000018u; // 801F4900
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F4904
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801F4908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F490C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F4910
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F4914
  c->lr=c->r[0]; // 801F4918
  c->r[1]=c->r[1]+0x00000020u; // 801F491C
  return; // 801F4920
}

// fn_801F4924
void f_801F4924(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4924
  c->r[0]=c->lr; // 801F4928
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F492C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F4930
  c->r[31]=c->r[3]|c->r[3]; // 801F4934
  c->lr=0x801F493Cu; f_8019C77C(c); // 801F4938
  c->r[3]=0u+0x80470000u; // 801F493C
  c->r[3]=c->r[3]+0x00005D50u; // 801F4940
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801F4944
  c->r[0]=c->r[3]+0x00000014u; // 801F4948
  W32(c->r[31]+0x00000128u,c->r[0]); // 801F494C
  c->r[3]=c->r[31]+0x00003340u; // 801F4950
  c->lr=0x801F4958u; f_8011E990(c); // 801F4954
  c->r[3]=c->r[31]+0x00003370u; // 801F4958
  c->lr=0x801F4960u; f_80110498(c); // 801F495C
  c->r[3]=c->r[31]+0x00003340u; // 801F4960
  c->r[4]=0u+0x00000000u; // 801F4964
  c->r[5]=0u+0x00000030u; // 801F4968
  c->lr=0x801F4970u; f_800060B8(c); // 801F496C
  c->r[3]=c->r[31]|c->r[31]; // 801F4970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F4974
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4978
  c->lr=c->r[0]; // 801F497C
  c->r[1]=c->r[1]+0x00000010u; // 801F4980
  return; // 801F4984
}

// fn_801F4988
void f_801F4988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4988
  c->r[0]=c->lr; // 801F498C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4990
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801F4994
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801F4998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F499C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F49A0
  c->r[30]=c->r[3]|c->r[3]; // 801F49A4
  c->lr=0x801F49ACu; f_8011B41C(c); // 801F49A8
  c->r[4]=0u+0x00000016u; // 801F49AC
  c->lr=0x801F49B4u; f_8011B814(c); // 801F49B0
  c->r[31]=c->r[3]|c->r[3]; // 801F49B4
  c->lr=0x801F49BCu; f_8012FCB8(c); // 801F49B8
  c->f[31]=c->f[1]; // 801F49BC
  c->r[3]=c->r[31]|c->r[31]; // 801F49C0
  c->lr=0x801F49C8u; f_8012FCB0(c); // 801F49C4
  c->r[3]=c->r[30]|c->r[30]; // 801F49C8
  c->f[2]=c->f[31]; // 801F49CC
  c->lr=0x801F49D4u; f_8019CAB4(c); // 801F49D0
  c->r[3]=c->r[31]|c->r[31]; // 801F49D4
  c->lr=0x801F49DCu; f_8012FCD0(c); // 801F49D8
  c->f[31]=c->f[1]; // 801F49DC
  c->r[3]=c->r[31]|c->r[31]; // 801F49E0
  c->lr=0x801F49E8u; f_8012FCC8(c); // 801F49E4
  c->r[3]=c->r[30]|c->r[30]; // 801F49E8
  c->f[2]=c->f[31]; // 801F49EC
  c->lr=0x801F49F4u; f_8019CB34(c); // 801F49F0
  c->r[3]=c->r[30]|c->r[30]; // 801F49F4
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F49F8
  c->lr=0x801F4A00u; f_8019CA94(c); // 801F49FC
  c->r[3]=c->r[30]|c->r[30]; // 801F4A00
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4A04
  c->lr=0x801F4A0Cu; f_8019CA9C(c); // 801F4A08
  c->r[3]=c->r[31]|c->r[31]; // 801F4A0C
  c->lr=0x801F4A14u; f_8012FCE8(c); // 801F4A10
  c->r[3]=c->r[30]|c->r[30]; // 801F4A14
  c->lr=0x801F4A1Cu; f_8019CAA4(c); // 801F4A18
  c->r[3]=c->r[31]|c->r[31]; // 801F4A1C
  c->lr=0x801F4A24u; f_8012FCF0(c); // 801F4A20
  c->r[3]=c->r[30]|c->r[30]; // 801F4A24
  c->lr=0x801F4A2Cu; f_8019CAAC(c); // 801F4A28
  c->r[3]=c->r[31]|c->r[31]; // 801F4A2C
  c->lr=0x801F4A34u; f_8012FCE0(c); // 801F4A30
  c->r[4]=c->r[3]|c->r[3]; // 801F4A34
  c->r[3]=c->r[30]|c->r[30]; // 801F4A38
  c->lr=0x801F4A40u; f_8019C988(c); // 801F4A3C
  c->r[3]=c->r[31]|c->r[31]; // 801F4A40
  c->lr=0x801F4A48u; f_8012FCF8(c); // 801F4A44
  c->r[3]=c->r[30]+0x00003248u; // 801F4A48
  c->lr=0x801F4A50u; f_80110580(c); // 801F4A4C
  c->r[3]=c->r[31]|c->r[31]; // 801F4A50
  c->lr=0x801F4A58u; f_8012FD00(c); // 801F4A54
  c->r[3]=c->r[30]+0x00003290u; // 801F4A58
  c->lr=0x801F4A60u; f_80110580(c); // 801F4A5C
  c->r[3]=c->r[30]+0x000032D8u; // 801F4A60
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4A64
  c->lr=0x801F4A6Cu; f_80110580(c); // 801F4A68
  c->r[3]=c->r[31]|c->r[31]; // 801F4A6C
  c->lr=0x801F4A74u; f_8012FD08(c); // 801F4A70
  c->r[3]=c->r[30]+0x00003248u; // 801F4A74
  c->lr=0x801F4A7Cu; f_80110588(c); // 801F4A78
  c->r[3]=c->r[31]|c->r[31]; // 801F4A7C
  c->lr=0x801F4A84u; f_8012FD10(c); // 801F4A80
  c->r[3]=c->r[30]+0x00003290u; // 801F4A84
  c->lr=0x801F4A8Cu; f_80110588(c); // 801F4A88
  c->r[3]=c->r[30]+0x000032D8u; // 801F4A8C
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4A90
  c->lr=0x801F4A98u; f_80110588(c); // 801F4A94
  c->r[3]=c->r[30]|c->r[30]; // 801F4A98
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4A9C
  c->f[2]=c->f[1]; // 801F4AA0
  c->f[3]=c->f[1]; // 801F4AA4
  c->lr=0x801F4AACu; f_8011E9F8(c); // 801F4AA8
  c->r[3]=c->r[31]|c->r[31]; // 801F4AAC
  c->lr=0x801F4AB4u; f_801F9960(c); // 801F4AB0
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4AB4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F4AB8
  {uint32_t ea=c->r[2]+0xFFFF95A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4ABC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F4AC0
  c->r[3]=c->r[30]|c->r[30]; // 801F4AC4
  c->lr=0x801F4ACCu; f_8011EA08(c); // 801F4AC8
  c->r[3]=c->r[30]|c->r[30]; // 801F4ACC
  c->r[4]=0u+0x00000000u; // 801F4AD0
  c->lr=0x801F4AD8u; f_8011EA10(c); // 801F4AD4
  c->r[3]=c->r[30]|c->r[30]; // 801F4AD8
  c->lr=0x801F4AE0u; f_801F4B8C(c); // 801F4ADC
  c->r[3]=c->r[30]|c->r[30]; // 801F4AE0
  c->r[4]=c->r[30]+0x00003340u; // 801F4AE4
  c->r[5]=0u+0x00000001u; // 801F4AE8
  c->lr=0x801F4AF0u; f_8019C328(c); // 801F4AEC
  c->lr=0x801F4AF4u; f_8011A9D8(c); // 801F4AF0
  c->r[4]=0u+0x00000000u; // 801F4AF4
  c->lr=0x801F4AFCu; f_8011AF74(c); // 801F4AF8
  c->r[31]=c->r[3]|c->r[3]; // 801F4AFC
  c->lr=0x801F4B04u; f_8011A6E8(c); // 801F4B00
  c->r[4]=c->r[31]|c->r[31]; // 801F4B04
  c->lr=0x801F4B0Cu; f_8011A9B0(c); // 801F4B08
  c->lr=0x801F4B10u; f_8012DA20(c); // 801F4B0C
  c->r[4]=c->r[3]|c->r[3]; // 801F4B10
  c->r[3]=c->r[30]|c->r[30]; // 801F4B14
  c->lr=0x801F4B1Cu; f_8011E988(c); // 801F4B18
  c->r[3]=c->r[30]|c->r[30]; // 801F4B1C
  c->r[4]=0u+0x00000003u; // 801F4B20
  c->lr=0x801F4B28u; f_8011E980(c); // 801F4B24
  c->r[3]=c->r[30]|c->r[30]; // 801F4B28
  c->r[4]=0u+0x00000016u; // 801F4B2C
  c->r[5]=0u+0x00000000u; // 801F4B30
  c->lr=0x801F4B38u; f_8019BEF0(c); // 801F4B34
  c->r[3]=c->r[30]+0x00003370u; // 801F4B38
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4B3C
  c->lr=0x801F4B44u; f_80110560(c); // 801F4B40
  c->r[3]=c->r[30]+0x00003370u; // 801F4B44
  {uint32_t ea=c->r[2]+0xFFFF95ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4B48
  c->lr=0x801F4B50u; f_80110568(c); // 801F4B4C
  c->r[3]=c->r[30]+0x00003370u; // 801F4B50
  c->r[4]=0u+0x00000000u; // 801F4B54
  c->lr=0x801F4B5Cu; f_80110578(c); // 801F4B58
  c->r[3]=c->r[30]+0x00003370u; // 801F4B5C
  c->r[4]=0u+0x00000001u; // 801F4B60
  c->lr=0x801F4B68u; f_80110570(c); // 801F4B64
  c->r[0]=0u+0x00000018u; // 801F4B68
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F4B6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801F4B70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F4B74
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F4B78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F4B7C
  c->lr=c->r[0]; // 801F4B80
  c->r[1]=c->r[1]+0x00000020u; // 801F4B84
  return; // 801F4B88
}

// fn_801F4B8C
void f_801F4B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4B8C
  c->r[0]=c->lr; // 801F4B90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4B94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F4B98
  c->r[31]=c->r[3]|c->r[3]; // 801F4B9C
  c->r[3]=c->r[1]+0x00000008u; // 801F4BA0
  c->lr=0x801F4BA8u; f_8004B0A4(c); // 801F4BA4
  c->lr=0x801F4BACu; f_8011B41C(c); // 801F4BA8
  c->r[4]=0u+0x00000016u; // 801F4BAC
  c->lr=0x801F4BB4u; f_8011B814(c); // 801F4BB0
  c->r[4]=0u+0x00000000u; // 801F4BB4
  c->r[5]=c->r[1]+0x00000008u; // 801F4BB8
  c->lr=0x801F4BC0u; f_801F9940(c); // 801F4BBC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4BC0
  {uint32_t ea=c->r[31]+0x00003340u; WF32(ea,c->f[0]);} // 801F4BC4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4BC8
  {uint32_t ea=c->r[31]+0x00003344u; WF32(ea,c->f[0]);} // 801F4BCC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4BD0
  {uint32_t ea=c->r[31]+0x00003348u; WF32(ea,c->f[0]);} // 801F4BD4
  {uint32_t ea=c->r[2]+0xFFFF95B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4BD8
  {uint32_t ea=c->r[31]+0x00003360u; WF32(ea,c->f[0]);} // 801F4BDC
  {uint32_t ea=c->r[31]+0x00003364u; WF32(ea,c->f[0]);} // 801F4BE0
  {uint32_t ea=c->r[31]+0x00003368u; WF32(ea,c->f[0]);} // 801F4BE4
  {uint32_t ea=c->r[31]+0x0000336Cu; WF32(ea,c->f[0]);} // 801F4BE8
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4BEC
  {uint32_t ea=c->r[31]+0x00003350u; WF32(ea,c->f[1]);} // 801F4BF0
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4BF4
  {uint32_t ea=c->r[31]+0x00003354u; WF32(ea,c->f[0]);} // 801F4BF8
  {uint32_t ea=c->r[31]+0x00003358u; WF32(ea,c->f[1]);} // 801F4BFC
  {uint32_t ea=c->r[31]+0x0000335Cu; WF32(ea,c->f[0]);} // 801F4C00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F4C04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F4C08
  c->lr=c->r[0]; // 801F4C0C
  c->r[1]=c->r[1]+0x00000020u; // 801F4C10
  return; // 801F4C14
}

// fn_801F4C18
void f_801F4C18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4C18
  c->r[0]=c->lr; // 801F4C1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4C20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F4C24
  c->r[31]=c->r[3]|c->r[3]; // 801F4C28
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4C2C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F4C30
  c->r[3]=c->r[3]+0x00003370u; // 801F4C34
  c->lr=0x801F4C3Cu; f_801105F8(c); // 801F4C38
  cmps(c,0,(int32_t)c->r[3],0); // 801F4C3C
  if (!crb(c,2)) { goto L_801F4C60; } // 801F4C40
  c->r[3]=c->r[31]+0x00003370u; // 801F4C44
  c->r[4]=0u+0x00000001u; // 801F4C48
  c->lr=0x801F4C50u; f_80110570(c); // 801F4C4C
  c->r[3]=c->r[31]+0x00003370u; // 801F4C50
  {uint32_t ea=c->r[2]+0xFFFF95B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4C54
  c->lr=0x801F4C5Cu; f_80110590(c); // 801F4C58
  goto L_801F4C6C; // 801F4C5C
L_801F4C60:;
  c->r[3]=c->r[31]+0x00003370u; // 801F4C60
  c->r[4]=c->r[1]+0x00000008u; // 801F4C64
  c->lr=0x801F4C6Cu; f_801108D8(c); // 801F4C68
L_801F4C6C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4C6C
  {uint32_t ea=c->r[2]+0xFFFF95B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4C70
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801F4C74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F4C78
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F4C7C
  {uint32_t ea=c->r[2]+0xFFFF95BCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F4C80
  c->lr=0x801F4C88u; f_800549D4(c); // 801F4C84
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F4C88
  c->r[0]=0u+0x000000FFu; // 801F4C8C
  W8(c->r[31]+0x0000334Cu,c->r[0]); // 801F4C90
  W8(c->r[31]+0x0000334Du,c->r[0]); // 801F4C94
  W8(c->r[31]+0x0000334Eu,c->r[0]); // 801F4C98
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4C9C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801F4CA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801F4CA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4CA8
  W8(c->r[31]+0x0000334Fu,c->r[0]); // 801F4CAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F4CB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F4CB4
  c->lr=c->r[0]; // 801F4CB8
  c->r[1]=c->r[1]+0x00000020u; // 801F4CBC
  return; // 801F4CC0
}

// fn_801F4CC4
void f_801F4CC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4CC4
  c->r[0]=c->lr; // 801F4CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F4CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F4CD0
  c->r[31]=c->r[3]|c->r[3]; // 801F4CD4
  c->lr=0x801F4CDCu; f_801F4B8C(c); // 801F4CD8
  c->r[3]=c->r[31]|c->r[31]; // 801F4CDC
  c->lr=0x801F4CE4u; f_801F4C18(c); // 801F4CE0
  c->r[3]=c->r[31]|c->r[31]; // 801F4CE4
  c->r[4]=c->r[31]+0x00003340u; // 801F4CE8
  c->r[5]=0u+0x00000001u; // 801F4CEC
  c->lr=0x801F4CF4u; f_8019C328(c); // 801F4CF0
  c->r[3]=c->r[31]|c->r[31]; // 801F4CF4
  c->lr=0x801F4CFCu; f_8019C88C(c); // 801F4CF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F4CFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F4D00
  c->lr=c->r[0]; // 801F4D04
  c->r[1]=c->r[1]+0x00000010u; // 801F4D08
  return; // 801F4D0C
}

// fn_801F4D10
void f_801F4D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4D10
  c->r[0]=c->lr; // 801F4D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4D18
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801F4D1C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801F4D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F4D24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F4D28
  c->r[30]=c->r[3]|c->r[3]; // 801F4D2C
  c->lr=0x801F4D34u; f_8011B41C(c); // 801F4D30
  c->r[4]=0u+0x00000016u; // 801F4D34
  c->lr=0x801F4D3Cu; f_8011B814(c); // 801F4D38
  c->r[31]=c->r[3]|c->r[3]; // 801F4D3C
  c->lr=0x801F4D44u; f_8012FCB8(c); // 801F4D40
  c->f[31]=c->f[1]; // 801F4D44
  c->r[3]=c->r[31]|c->r[31]; // 801F4D48
  c->lr=0x801F4D50u; f_8012FCB0(c); // 801F4D4C
  c->r[3]=c->r[30]|c->r[30]; // 801F4D50
  c->f[2]=c->f[31]; // 801F4D54
  c->lr=0x801F4D5Cu; f_8012FA24(c); // 801F4D58
  c->r[3]=c->r[31]|c->r[31]; // 801F4D5C
  c->lr=0x801F4D64u; f_8012FCD0(c); // 801F4D60
  c->f[31]=c->f[1]; // 801F4D64
  c->r[3]=c->r[31]|c->r[31]; // 801F4D68
  c->lr=0x801F4D70u; f_8012FCC8(c); // 801F4D6C
  c->r[3]=c->r[30]|c->r[30]; // 801F4D70
  c->f[2]=c->f[31]; // 801F4D74
  c->lr=0x801F4D7Cu; f_8012FA40(c); // 801F4D78
  c->r[3]=c->r[31]|c->r[31]; // 801F4D7C
  c->lr=0x801F4D84u; f_8012FCE8(c); // 801F4D80
  c->r[3]=c->r[30]|c->r[30]; // 801F4D84
  c->lr=0x801F4D8Cu; f_8012FA6C(c); // 801F4D88
  c->r[3]=c->r[31]|c->r[31]; // 801F4D8C
  c->lr=0x801F4D94u; f_8012FCF0(c); // 801F4D90
  c->r[3]=c->r[30]|c->r[30]; // 801F4D94
  c->lr=0x801F4D9Cu; f_8012FA74(c); // 801F4D98
  c->r[3]=c->r[30]|c->r[30]; // 801F4D9C
  c->r[4]=0u+0x00000001u; // 801F4DA0
  c->lr=0x801F4DA8u; f_8012F918(c); // 801F4DA4
  c->r[3]=c->r[31]|c->r[31]; // 801F4DA8
  c->lr=0x801F4DB0u; f_801F9960(c); // 801F4DAC
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4DB0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F4DB4
  {uint32_t ea=c->r[2]+0xFFFF95C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4DB8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F4DBC
  c->r[3]=c->r[30]|c->r[30]; // 801F4DC0
  c->lr=0x801F4DC8u; f_80117D04(c); // 801F4DC4
  c->r[3]=c->r[31]|c->r[31]; // 801F4DC8
  c->lr=0x801F4DD0u; f_801F9978(c); // 801F4DCC
  c->f[31]=c->f[1]; // 801F4DD0
  c->r[3]=c->r[31]|c->r[31]; // 801F4DD4
  c->lr=0x801F4DDCu; f_801F9978(c); // 801F4DD8
  c->r[3]=c->r[30]|c->r[30]; // 801F4DDC
  c->f[2]=c->f[31]; // 801F4DE0
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F4DE4
  c->lr=0x801F4DECu; f_80114AA8(c); // 801F4DE8
  c->lr=0x801F4DF0u; f_8011A9D8(c); // 801F4DEC
  c->r[4]=0u+0x00000000u; // 801F4DF0
  c->lr=0x801F4DF8u; f_8011AF74(c); // 801F4DF4
  c->r[31]=c->r[3]|c->r[3]; // 801F4DF8
  c->lr=0x801F4E00u; f_8011A6E8(c); // 801F4DFC
  c->r[4]=c->r[31]|c->r[31]; // 801F4E00
  c->lr=0x801F4E08u; f_8011A9B0(c); // 801F4E04
  c->lr=0x801F4E0Cu; f_8012DA20(c); // 801F4E08
  c->r[4]=c->r[3]|c->r[3]; // 801F4E0C
  c->r[3]=c->r[30]|c->r[30]; // 801F4E10
  c->lr=0x801F4E18u; f_80114AA0(c); // 801F4E14
  c->r[0]=R32(c->r[30]+0x000009F8u); // 801F4E18
  cmps(c,0,(int32_t)c->r[0],0); // 801F4E1C
  if (!crb(c,2)) { goto L_801F4E30; } // 801F4E20
  c->r[3]=c->r[30]|c->r[30]; // 801F4E24
  c->r[4]=0u+0x00000005u; // 801F4E28
  c->lr=0x801F4E30u; f_8012F440(c); // 801F4E2C
L_801F4E30:;
  c->r[3]=c->r[30]|c->r[30]; // 801F4E30
  c->r[4]=0u+0x00000016u; // 801F4E34
  c->r[5]=0u+0x00000002u; // 801F4E38
  c->r[6]=0u+0xFFFFFFFFu; // 801F4E3C
  c->lr=0x801F4E44u; f_8012DE5C(c); // 801F4E40
  c->r[3]=c->r[30]|c->r[30]; // 801F4E44
  c->lr=0x801F4E4Cu; f_8012F448(c); // 801F4E48
  c->r[3]=c->r[30]|c->r[30]; // 801F4E4C
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4E50
  c->r[4]=0u+0x00000006u; // 801F4E54
  c->lr=0x801F4E5Cu; f_8012E920(c); // 801F4E58
  c->r[3]=c->r[30]|c->r[30]; // 801F4E5C
  c->r[4]=0u+0x00000001u; // 801F4E60
  c->lr=0x801F4E68u; f_8012E1C0(c); // 801F4E64
  c->r[3]=c->r[30]|c->r[30]; // 801F4E68
  c->r[4]=0u+0x00000000u; // 801F4E6C
  c->lr=0x801F4E74u; f_8012F910(c); // 801F4E70
  c->r[0]=0u+0x00000018u; // 801F4E74
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F4E78
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801F4E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F4E80
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F4E84
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F4E88
  c->lr=c->r[0]; // 801F4E8C
  c->r[1]=c->r[1]+0x00000020u; // 801F4E90
  return; // 801F4E94
}

// fn_801F4E98
void f_801F4E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F4E98
  c->r[0]=c->lr; // 801F4E9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F4EA0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801F4EA4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801F4EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F4EAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F4EB0
  c->r[30]=c->r[3]|c->r[3]; // 801F4EB4
  c->lr=0x801F4EBCu; f_8011B41C(c); // 801F4EB8
  c->r[4]=0u+0x00000016u; // 801F4EBC
  c->lr=0x801F4EC4u; f_8011B814(c); // 801F4EC0
  c->r[31]=c->r[3]|c->r[3]; // 801F4EC4
  c->lr=0x801F4ECCu; f_8012FCB8(c); // 801F4EC8
  c->f[31]=c->f[1]; // 801F4ECC
  c->r[3]=c->r[31]|c->r[31]; // 801F4ED0
  c->lr=0x801F4ED8u; f_8012FCB0(c); // 801F4ED4
  c->r[3]=c->r[30]|c->r[30]; // 801F4ED8
  c->f[2]=c->f[31]; // 801F4EDC
  c->lr=0x801F4EE4u; f_8012FA24(c); // 801F4EE0
  c->r[3]=c->r[31]|c->r[31]; // 801F4EE4
  c->lr=0x801F4EECu; f_8012FCD0(c); // 801F4EE8
  c->f[31]=c->f[1]; // 801F4EEC
  c->r[3]=c->r[31]|c->r[31]; // 801F4EF0
  c->lr=0x801F4EF8u; f_8012FCC8(c); // 801F4EF4
  c->r[3]=c->r[30]|c->r[30]; // 801F4EF8
  c->f[2]=c->f[31]; // 801F4EFC
  c->lr=0x801F4F04u; f_8012FA40(c); // 801F4F00
  c->r[3]=c->r[31]|c->r[31]; // 801F4F04
  c->lr=0x801F4F0Cu; f_8012FCE8(c); // 801F4F08
  c->r[3]=c->r[30]|c->r[30]; // 801F4F0C
  c->lr=0x801F4F14u; f_8012FA6C(c); // 801F4F10
  c->r[3]=c->r[31]|c->r[31]; // 801F4F14
  c->lr=0x801F4F1Cu; f_8012FCF0(c); // 801F4F18
  c->r[3]=c->r[30]|c->r[30]; // 801F4F1C
  c->lr=0x801F4F24u; f_8012FA74(c); // 801F4F20
  c->r[3]=c->r[30]|c->r[30]; // 801F4F24
  c->r[4]=0u+0x00000001u; // 801F4F28
  c->lr=0x801F4F30u; f_8012F918(c); // 801F4F2C
  c->r[3]=c->r[31]|c->r[31]; // 801F4F30
  c->lr=0x801F4F38u; f_801F9960(c); // 801F4F34
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4F38
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F4F3C
  {uint32_t ea=c->r[2]+0xFFFF95A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F4F40
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F4F44
  c->r[3]=c->r[30]|c->r[30]; // 801F4F48
  c->lr=0x801F4F50u; f_80117D04(c); // 801F4F4C
  c->r[3]=c->r[31]|c->r[31]; // 801F4F50
  c->lr=0x801F4F58u; f_801F9978(c); // 801F4F54
  c->f[31]=c->f[1]; // 801F4F58
  c->r[3]=c->r[31]|c->r[31]; // 801F4F5C
  c->lr=0x801F4F64u; f_801F9978(c); // 801F4F60
  c->r[3]=c->r[30]|c->r[30]; // 801F4F64
  c->f[2]=c->f[31]; // 801F4F68
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F4F6C
  c->lr=0x801F4F74u; f_80114AA8(c); // 801F4F70
  c->lr=0x801F4F78u; f_8011A9D8(c); // 801F4F74
  c->r[4]=0u+0x00000000u; // 801F4F78
  c->lr=0x801F4F80u; f_8011AF74(c); // 801F4F7C
  c->r[31]=c->r[3]|c->r[3]; // 801F4F80
  c->lr=0x801F4F88u; f_8011A6E8(c); // 801F4F84
  c->r[4]=c->r[31]|c->r[31]; // 801F4F88
  c->lr=0x801F4F90u; f_8011A9B0(c); // 801F4F8C
  c->lr=0x801F4F94u; f_8012DA20(c); // 801F4F90
  c->r[4]=c->r[3]|c->r[3]; // 801F4F94
  c->r[3]=c->r[30]|c->r[30]; // 801F4F98
  c->lr=0x801F4FA0u; f_80114AA0(c); // 801F4F9C
  c->r[0]=R32(c->r[30]+0x000009F8u); // 801F4FA0
  cmps(c,0,(int32_t)c->r[0],0); // 801F4FA4
  if (!crb(c,2)) { goto L_801F4FB8; } // 801F4FA8
  c->r[3]=c->r[30]|c->r[30]; // 801F4FAC
  c->r[4]=0u+0x0000000Au; // 801F4FB0
  c->lr=0x801F4FB8u; f_8012F440(c); // 801F4FB4
L_801F4FB8:;
  c->r[3]=c->r[30]|c->r[30]; // 801F4FB8
  c->r[4]=0u+0x00000016u; // 801F4FBC
  c->r[5]=0u+0x00000003u; // 801F4FC0
  c->r[6]=0u+0xFFFFFFFFu; // 801F4FC4
  c->lr=0x801F4FCCu; f_8012DE5C(c); // 801F4FC8
  c->r[3]=c->r[30]|c->r[30]; // 801F4FCC
  c->lr=0x801F4FD4u; f_8012F448(c); // 801F4FD0
  c->r[3]=c->r[30]|c->r[30]; // 801F4FD4
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F4FD8
  c->r[4]=0u+0x00000006u; // 801F4FDC
  c->lr=0x801F4FE4u; f_8012E920(c); // 801F4FE0
  c->r[3]=c->r[30]|c->r[30]; // 801F4FE4
  c->r[4]=0u+0x00000001u; // 801F4FE8
  c->lr=0x801F4FF0u; f_8012E1C0(c); // 801F4FEC
  c->r[3]=c->r[30]|c->r[30]; // 801F4FF0
  c->r[4]=0u+0x00000000u; // 801F4FF4
  c->lr=0x801F4FFCu; f_8012F910(c); // 801F4FF8
  c->r[0]=0u+0x00000018u; // 801F4FFC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F5000
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801F5004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5008
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F500C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F5010
  c->lr=c->r[0]; // 801F5014
  c->r[1]=c->r[1]+0x00000020u; // 801F5018
  return; // 801F501C
}

// fn_801F5020
void f_801F5020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5020
  c->r[0]=c->lr; // 801F5024
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F5028
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801F502C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801F5030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5034
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F5038
  c->r[30]=c->r[3]|c->r[3]; // 801F503C
  c->lr=0x801F5044u; f_8011B41C(c); // 801F5040
  c->r[4]=0u+0x00000016u; // 801F5044
  c->lr=0x801F504Cu; f_8011B814(c); // 801F5048
  c->r[31]=c->r[3]|c->r[3]; // 801F504C
  c->lr=0x801F5054u; f_8012FCB8(c); // 801F5050
  c->f[31]=c->f[1]; // 801F5054
  c->r[3]=c->r[31]|c->r[31]; // 801F5058
  c->lr=0x801F5060u; f_8012FCB0(c); // 801F505C
  c->r[3]=c->r[30]|c->r[30]; // 801F5060
  c->f[2]=c->f[31]; // 801F5064
  c->lr=0x801F506Cu; f_8012FA24(c); // 801F5068
  c->r[3]=c->r[31]|c->r[31]; // 801F506C
  c->lr=0x801F5074u; f_8012FCD0(c); // 801F5070
  c->f[31]=c->f[1]; // 801F5074
  c->r[3]=c->r[31]|c->r[31]; // 801F5078
  c->lr=0x801F5080u; f_8012FCC8(c); // 801F507C
  c->r[3]=c->r[30]|c->r[30]; // 801F5080
  c->f[2]=c->f[31]; // 801F5084
  c->lr=0x801F508Cu; f_8012FA40(c); // 801F5088
  c->r[3]=c->r[31]|c->r[31]; // 801F508C
  c->lr=0x801F5094u; f_8012FCE8(c); // 801F5090
  c->r[3]=c->r[30]|c->r[30]; // 801F5094
  c->lr=0x801F509Cu; f_8012FA6C(c); // 801F5098
  c->r[3]=c->r[31]|c->r[31]; // 801F509C
  c->lr=0x801F50A4u; f_8012FCF0(c); // 801F50A0
  c->r[3]=c->r[30]|c->r[30]; // 801F50A4
  c->lr=0x801F50ACu; f_8012FA74(c); // 801F50A8
  c->r[3]=c->r[30]|c->r[30]; // 801F50AC
  c->r[4]=0u+0x00000001u; // 801F50B0
  c->lr=0x801F50B8u; f_8012F918(c); // 801F50B4
  c->r[3]=c->r[31]|c->r[31]; // 801F50B8
  c->lr=0x801F50C0u; f_801F9960(c); // 801F50BC
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F50C0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F50C4
  {uint32_t ea=c->r[2]+0xFFFF95A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F50C8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F50CC
  c->r[3]=c->r[30]|c->r[30]; // 801F50D0
  c->lr=0x801F50D8u; f_80117D04(c); // 801F50D4
  c->r[3]=c->r[31]|c->r[31]; // 801F50D8
  c->lr=0x801F50E0u; f_801F9978(c); // 801F50DC
  c->f[31]=c->f[1]; // 801F50E0
  c->r[3]=c->r[31]|c->r[31]; // 801F50E4
  c->lr=0x801F50ECu; f_801F9978(c); // 801F50E8
  c->r[3]=c->r[30]|c->r[30]; // 801F50EC
  c->f[2]=c->f[31]; // 801F50F0
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F50F4
  c->lr=0x801F50FCu; f_80114AA8(c); // 801F50F8
  c->lr=0x801F5100u; f_8011A9D8(c); // 801F50FC
  c->r[4]=0u+0x00000000u; // 801F5100
  c->lr=0x801F5108u; f_8011AF74(c); // 801F5104
  c->r[31]=c->r[3]|c->r[3]; // 801F5108
  c->lr=0x801F5110u; f_8011A6E8(c); // 801F510C
  c->r[4]=c->r[31]|c->r[31]; // 801F5110
  c->lr=0x801F5118u; f_8011A9B0(c); // 801F5114
  c->lr=0x801F511Cu; f_8012DA20(c); // 801F5118
  c->r[4]=c->r[3]|c->r[3]; // 801F511C
  c->r[3]=c->r[30]|c->r[30]; // 801F5120
  c->lr=0x801F5128u; f_80114AA0(c); // 801F5124
  c->r[3]=c->r[30]|c->r[30]; // 801F5128
  c->r[4]=0u+0x00000016u; // 801F512C
  c->r[5]=0u+0x00000005u; // 801F5130
  c->r[6]=0u+0xFFFFFFFFu; // 801F5134
  c->lr=0x801F513Cu; f_8012DE5C(c); // 801F5138
  c->r[3]=c->r[30]|c->r[30]; // 801F513C
  c->lr=0x801F5144u; f_8012F448(c); // 801F5140
  c->r[3]=c->r[30]|c->r[30]; // 801F5144
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F5148
  c->r[4]=0u+0x00000006u; // 801F514C
  c->lr=0x801F5154u; f_8012E920(c); // 801F5150
  c->r[3]=c->r[30]|c->r[30]; // 801F5154
  c->r[4]=0u+0x00000001u; // 801F5158
  c->lr=0x801F5160u; f_8012E1C0(c); // 801F515C
  c->r[3]=c->r[30]|c->r[30]; // 801F5160
  c->r[4]=0u+0x00000000u; // 801F5164
  c->lr=0x801F516Cu; f_8012F910(c); // 801F5168
  c->r[0]=0u+0x00000018u; // 801F516C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F5170
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801F5174
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5178
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F517C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F5180
  c->lr=c->r[0]; // 801F5184
  c->r[1]=c->r[1]+0x00000020u; // 801F5188
  return; // 801F518C
}

// fn_801F5190
void f_801F5190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5190
  c->r[0]=c->lr; // 801F5194
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F5198
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801F519C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801F51A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F51A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F51A8
  c->r[30]=c->r[3]|c->r[3]; // 801F51AC
  c->lr=0x801F51B4u; f_8011B41C(c); // 801F51B0
  c->r[4]=0u+0x00000016u; // 801F51B4
  c->lr=0x801F51BCu; f_8011B814(c); // 801F51B8
  c->r[31]=c->r[3]|c->r[3]; // 801F51BC
  c->r[3]=c->r[1]+0x00000008u; // 801F51C0
  c->lr=0x801F51C8u; f_8004B0A4(c); // 801F51C4
  c->r[3]=c->r[31]|c->r[31]; // 801F51C8
  c->r[4]=c->r[1]+0x00000008u; // 801F51CC
  c->lr=0x801F51D4u; f_801F9998(c); // 801F51D0
  c->r[3]=c->r[31]|c->r[31]; // 801F51D4
  c->lr=0x801F51DCu; f_8012FCB8(c); // 801F51D8
  c->f[31]=c->f[1]; // 801F51DC
  c->r[3]=c->r[31]|c->r[31]; // 801F51E0
  c->lr=0x801F51E8u; f_8012FCB0(c); // 801F51E4
  c->r[3]=c->r[30]|c->r[30]; // 801F51E8
  c->f[2]=c->f[31]; // 801F51EC
  c->lr=0x801F51F4u; f_8012FA24(c); // 801F51F0
  c->r[3]=c->r[31]|c->r[31]; // 801F51F4
  c->lr=0x801F51FCu; f_8012FCD0(c); // 801F51F8
  c->f[31]=c->f[1]; // 801F51FC
  c->r[3]=c->r[31]|c->r[31]; // 801F5200
  c->lr=0x801F5208u; f_8012FCC8(c); // 801F5204
  c->r[3]=c->r[30]|c->r[30]; // 801F5208
  c->f[2]=c->f[31]; // 801F520C
  c->lr=0x801F5214u; f_8012FA40(c); // 801F5210
  c->r[3]=c->r[31]|c->r[31]; // 801F5214
  c->lr=0x801F521Cu; f_8012FCE8(c); // 801F5218
  c->r[3]=c->r[30]|c->r[30]; // 801F521C
  c->lr=0x801F5224u; f_8012FA6C(c); // 801F5220
  c->r[3]=c->r[31]|c->r[31]; // 801F5224
  c->lr=0x801F522Cu; f_8012FCF0(c); // 801F5228
  c->r[3]=c->r[30]|c->r[30]; // 801F522C
  c->lr=0x801F5234u; f_8012FA74(c); // 801F5230
  c->r[3]=c->r[30]|c->r[30]; // 801F5234
  c->r[4]=0u+0x00000001u; // 801F5238
  c->lr=0x801F5240u; f_8012F918(c); // 801F523C
  c->r[3]=c->r[31]|c->r[31]; // 801F5240
  c->lr=0x801F5248u; f_801F9960(c); // 801F5244
  {uint32_t ea=c->r[2]+0xFFFF9598u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F5248
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F524C
  {uint32_t ea=c->r[2]+0xFFFF95C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F5250
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F5254
  c->r[3]=c->r[30]|c->r[30]; // 801F5258
  c->lr=0x801F5260u; f_80117D04(c); // 801F525C
  c->r[3]=c->r[30]|c->r[30]; // 801F5260
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F5264
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F5268
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F526C
  c->lr=0x801F5274u; f_80114AB8(c); // 801F5270
  c->r[3]=c->r[31]|c->r[31]; // 801F5274
  c->lr=0x801F527Cu; f_801F9978(c); // 801F5278
  c->f[31]=c->f[1]; // 801F527C
  c->r[3]=c->r[31]|c->r[31]; // 801F5280
  c->lr=0x801F5288u; f_801F9978(c); // 801F5284
  c->r[3]=c->r[30]|c->r[30]; // 801F5288
  c->f[2]=c->f[31]; // 801F528C
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F5290
  c->lr=0x801F5298u; f_80114AA8(c); // 801F5294
  c->lr=0x801F529Cu; f_8011A9D8(c); // 801F5298
  c->r[4]=0u+0x00000000u; // 801F529C
  c->lr=0x801F52A4u; f_8011AF74(c); // 801F52A0
  c->r[31]=c->r[3]|c->r[3]; // 801F52A4
  c->lr=0x801F52ACu; f_8011A6E8(c); // 801F52A8
  c->r[4]=c->r[31]|c->r[31]; // 801F52AC
  c->lr=0x801F52B4u; f_8011A9B0(c); // 801F52B0
  c->lr=0x801F52B8u; f_8012DA20(c); // 801F52B4
  c->r[4]=c->r[3]|c->r[3]; // 801F52B8
  c->r[3]=c->r[30]|c->r[30]; // 801F52BC
  c->lr=0x801F52C4u; f_80114AA0(c); // 801F52C0
  c->r[3]=c->r[30]|c->r[30]; // 801F52C4
  c->r[4]=0u+0x00000016u; // 801F52C8
  c->r[5]=0u+0x00000004u; // 801F52CC
  c->r[6]=0u+0xFFFFFFFFu; // 801F52D0
  c->lr=0x801F52D8u; f_8012DE5C(c); // 801F52D4
  c->r[3]=c->r[30]|c->r[30]; // 801F52D8
  c->lr=0x801F52E0u; f_8012F448(c); // 801F52DC
  c->r[3]=c->r[30]|c->r[30]; // 801F52E0
  {uint32_t ea=c->r[2]+0xFFFF95A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F52E4
  c->r[4]=0u+0x00000006u; // 801F52E8
  c->lr=0x801F52F0u; f_8012E920(c); // 801F52EC
  c->r[3]=c->r[30]|c->r[30]; // 801F52F0
  c->r[4]=0u+0x00000001u; // 801F52F4
  c->lr=0x801F52FCu; f_8012E1C0(c); // 801F52F8
  c->r[3]=c->r[30]|c->r[30]; // 801F52FC
  c->r[4]=0u+0x00000000u; // 801F5300
  c->lr=0x801F5308u; f_8012F910(c); // 801F5304
  c->r[0]=0u+0x00000028u; // 801F5308
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F530C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801F5310
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F5314
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F5318
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F531C
  c->lr=c->r[0]; // 801F5320
  c->r[1]=c->r[1]+0x00000030u; // 801F5324
  return; // 801F5328
}

// fn_801F532C
void f_801F532C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F532C
  c->r[0]=c->lr; // 801F5330
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5334
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5338
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F533C
  c->r[30]=c->r[3]|c->r[3]; // 801F5340
  c->lr=0x801F5348u; f_801F99D4(c); // 801F5344
  c->lr=0x801F534Cu; f_801F9C64(c); // 801F5348
  c->r[31]=c->r[3]|c->r[3]; // 801F534C
  c->lr=0x801F5354u; f_801F99D4(c); // 801F5350
  c->lr=0x801F5358u; f_801F9C74(c); // 801F5354
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801F5358
  if (crb(c,0)) { goto L_801F5374; } // 801F535C
  c->r[3]=c->r[30]|c->r[30]; // 801F5360
  c->r[4]=0u+0x00000001u; // 801F5364
  c->r[5]=0u+0x00000006u; // 801F5368
  c->lr=0x801F5370u; f_8012E640(c); // 801F536C
  goto L_801F5384; // 801F5370
L_801F5374:;
  c->r[3]=c->r[30]|c->r[30]; // 801F5374
  c->r[4]=0u+0x00000000u; // 801F5378
  c->r[5]=0u+0x00000006u; // 801F537C
  c->lr=0x801F5384u; f_8012E640(c); // 801F5380
L_801F5384:;
  c->r[3]=c->r[30]|c->r[30]; // 801F5384
  c->lr=0x801F538Cu; f_8012F874(c); // 801F5388
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F538C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F5390
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5394
  c->lr=c->r[0]; // 801F5398
  c->r[1]=c->r[1]+0x00000010u; // 801F539C
  return; // 801F53A0
}

// fn_801F53A4
void f_801F53A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F53A4
  c->r[0]=c->lr; // 801F53A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F53AC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801F53B0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801F53B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F53B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F53BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F53C0
  c->r[29]=c->r[3]|c->r[3]; // 801F53C4
  c->lr=0x801F53CCu; f_8011B41C(c); // 801F53C8
  c->r[4]=0u+0x00000016u; // 801F53CC
  c->lr=0x801F53D4u; f_8011B814(c); // 801F53D0
  c->r[31]=c->r[3]|c->r[3]; // 801F53D4
  c->lr=0x801F53DCu; f_8011B41C(c); // 801F53D8
  c->r[4]=0u+0x00000019u; // 801F53DC
  c->lr=0x801F53E4u; f_8011B814(c); // 801F53E0
  c->r[30]=c->r[3]|c->r[3]; // 801F53E4
  c->r[3]=c->r[31]|c->r[31]; // 801F53E8
  c->lr=0x801F53F0u; f_8012FCB8(c); // 801F53EC
  c->f[31]=c->f[1]; // 801F53F0
  c->r[3]=c->r[31]|c->r[31]; // 801F53F4
  c->lr=0x801F53FCu; f_8012FCB0(c); // 801F53F8
  c->r[3]=c->r[29]|c->r[29]; // 801F53FC
  c->f[2]=c->f[31]; // 801F5400
  c->lr=0x801F5408u; f_80131C2C(c); // 801F5404
  c->r[3]=c->r[31]|c->r[31]; // 801F5408
  c->lr=0x801F5410u; f_8012FCD0(c); // 801F540C
  c->f[31]=c->f[1]; // 801F5410
  c->r[3]=c->r[31]|c->r[31]; // 801F5414
  c->lr=0x801F541Cu; f_8012FCC8(c); // 801F5418
  c->r[3]=c->r[29]|c->r[29]; // 801F541C
  c->f[2]=c->f[31]; // 801F5420
  c->lr=0x801F5428u; f_80131C48(c); // 801F5424
  c->r[3]=c->r[31]|c->r[31]; // 801F5428
  c->lr=0x801F5430u; f_8012FCE8(c); // 801F542C
  c->r[3]=c->r[29]|c->r[29]; // 801F5430
  c->lr=0x801F5438u; f_80131C64(c); // 801F5434
  c->r[3]=c->r[31]|c->r[31]; // 801F5438
  c->lr=0x801F5440u; f_8012FCF0(c); // 801F543C
  c->r[3]=c->r[29]|c->r[29]; // 801F5440
  c->lr=0x801F5448u; f_80131C6C(c); // 801F5444
  c->r[3]=c->r[31]|c->r[31]; // 801F5448
  c->lr=0x801F5450u; f_8012FCE0(c); // 801F544C
  c->r[4]=c->r[3]|c->r[3]; // 801F5450
  c->r[3]=c->r[29]|c->r[29]; // 801F5454
  c->lr=0x801F545Cu; f_80131B68(c); // 801F5458
  c->r[3]=c->r[31]|c->r[31]; // 801F545C
  c->lr=0x801F5464u; f_8012FCF8(c); // 801F5460
  c->r[3]=c->r[29]+0x00003158u; // 801F5464
  c->lr=0x801F546Cu; f_80110580(c); // 801F5468
  c->r[3]=c->r[31]|c->r[31]; // 801F546C
  c->lr=0x801F5474u; f_8012FD00(c); // 801F5470
  c->r[3]=c->r[29]+0x000031A0u; // 801F5474
  c->lr=0x801F547Cu; f_80110580(c); // 801F5478
  c->r[3]=c->r[31]|c->r[31]; // 801F547C
  c->lr=0x801F5484u; f_8012FD08(c); // 801F5480
  c->r[3]=c->r[29]+0x00003158u; // 801F5484
  c->lr=0x801F548Cu; f_80110588(c); // 801F5488
  c->r[3]=c->r[31]|c->r[31]; // 801F548C
  c->lr=0x801F5494u; f_8012FD10(c); // 801F5490
  c->r[3]=c->r[29]+0x000031A0u; // 801F5494
  c->lr=0x801F549Cu; f_80110588(c); // 801F5498
  c->r[3]=c->r[29]|c->r[29]; // 801F549C
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F54A0
  c->f[2]=c->f[1]; // 801F54A4
  c->lr=0x801F54ACu; f_801313A0(c); // 801F54A8
  c->r[3]=c->r[31]|c->r[31]; // 801F54AC
  c->lr=0x801F54B4u; f_801F9988(c); // 801F54B0
  c->f[31]=c->f[1]; // 801F54B4
  c->r[3]=c->r[31]|c->r[31]; // 801F54B8
  c->lr=0x801F54C0u; f_801F9988(c); // 801F54BC
  c->r[3]=c->r[29]|c->r[29]; // 801F54C0
  c->f[2]=c->f[31]; // 801F54C4
  c->lr=0x801F54CCu; f_801313AC(c); // 801F54C8
  c->r[3]=c->r[30]|c->r[30]; // 801F54CC
  c->r[4]=0u+0x00000011u; // 801F54D0
  c->lr=0x801F54D8u; f_8011961C(c); // 801F54D4
  c->r[4]=c->r[3]|c->r[3]; // 801F54D8
  c->r[3]=c->r[1]+0x00000008u; // 801F54DC
  c->lr=0x801F54E4u; f_800549FC(c); // 801F54E0
  c->r[3]=c->r[29]|c->r[29]; // 801F54E4
  c->r[4]=c->r[1]+0x00000008u; // 801F54E8
  c->lr=0x801F54F0u; f_801313CC(c); // 801F54EC
  c->r[3]=c->r[1]+0x00000008u; // 801F54F0
  c->r[4]=0u+0xFFFFFFFFu; // 801F54F4
  c->lr=0x801F54FCu; f_80047BD4(c); // 801F54F8
  c->r[3]=c->r[29]|c->r[29]; // 801F54FC
  c->r[4]=c->r[13]+0xFFFF9E98u; // 801F5500
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F5504
  c->lr=0x801F550Cu; f_801313D4(c); // 801F5508
  c->r[0]=0u+0x00000028u; // 801F550C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F5510
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801F5514
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F5518
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F551C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F5520
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F5524
  c->lr=c->r[0]; // 801F5528
  c->r[1]=c->r[1]+0x00000030u; // 801F552C
  return; // 801F5530
}

// fn_801F5534
void f_801F5534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5534
  c->r[0]=c->lr; // 801F5538
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F553C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5540
  c->r[31]=c->r[3]|c->r[3]; // 801F5544
  c->lr=0x801F554Cu; f_8012FAAC(c); // 801F5548
  c->r[3]=0u+0x80470000u; // 801F554C
  c->r[0]=c->r[3]+0x00005960u; // 801F5550
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F5554
  c->r[0]=0u+0x00000000u; // 801F5558
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801F555C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F5560
  c->r[3]=c->r[31]|c->r[31]; // 801F5564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5568
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F556C
  c->lr=c->r[0]; // 801F5570
  c->r[1]=c->r[1]+0x00000010u; // 801F5574
  return; // 801F5578
}

// fn_801F557C
void f_801F557C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F557C
  c->r[0]=c->lr; // 801F5580
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F5584
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F5588
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F558C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F5590
  c->r[29]=c->r[3]|c->r[3]; // 801F5594
  c->lr=0x801F559Cu; f_80056B5C(c); // 801F5598
  c->r[30]=c->r[3]|c->r[3]; // 801F559C
  c->lr=0x801F55A4u; f_801F1340(c); // 801F55A0
  c->lr=0x801F55A8u; f_80056B54(c); // 801F55A4
  c->r[3]=0u+0x00000B28u; // 801F55A8
  c->lr=0x801F55B0u; f_80047B64(c); // 801F55AC
  c->r[31]=c->r[3]|c->r[3]; // 801F55B0
  cmps(c,0,(int32_t)c->r[3],0); // 801F55B4
  if (crb(c,2)) { goto L_801F55C0; } // 801F55B8
  c->lr=0x801F55C0u; f_801F68E8(c); // 801F55BC
L_801F55C0:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801F55C0
  c->r[3]=c->r[30]|c->r[30]; // 801F55C4
  c->lr=0x801F55CCu; f_80056B54(c); // 801F55C8
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801F55CC
  c->r[4]=0u+0x00000000u; // 801F55D0
  c->lr=0x801F55D8u; f_80114AE0(c); // 801F55D4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801F55D8
  c->r[4]=0u+0x00000000u; // 801F55DC
  c->lr=0x801F55E4u; f_801169C8(c); // 801F55E0
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801F55E4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F55E8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F55EC
  c->ctr=c->r[12]; // 801F55F0
  if (true) { c->lr=0x801F55F8u; dispatch(c,c->ctr); } // 801F55F4
  c->lr=0x801F55FCu; f_80056B5C(c); // 801F55F8
  c->r[30]=c->r[3]|c->r[3]; // 801F55FC
  c->lr=0x801F5604u; f_801F1340(c); // 801F5600
  c->lr=0x801F5608u; f_80056B54(c); // 801F5604
  c->r[3]=0u+0x00003200u; // 801F5608
  c->lr=0x801F5610u; f_80047B64(c); // 801F560C
  c->r[31]=c->r[3]|c->r[3]; // 801F5610
  cmps(c,0,(int32_t)c->r[3],0); // 801F5614
  if (crb(c,2)) { goto L_801F5620; } // 801F5618
  c->lr=0x801F5620u; f_801F68AC(c); // 801F561C
L_801F5620:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801F5620
  c->r[3]=c->r[30]|c->r[30]; // 801F5624
  c->lr=0x801F562Cu; f_80056B54(c); // 801F5628
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801F562C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F5630
  c->r[12]=R32(c->r[12]+0x00000044u); // 801F5634
  c->ctr=c->r[12]; // 801F5638
  if (true) { c->lr=0x801F5640u; dispatch(c,c->ctr); } // 801F563C
  c->lr=0x801F5644u; f_8011B41C(c); // 801F5640
  c->r[4]=0u+0x00000016u; // 801F5644
  c->lr=0x801F564Cu; f_8011B814(c); // 801F5648
  c->r[30]=c->r[3]|c->r[3]; // 801F564C
  c->r[3]=c->r[1]+0x00000008u; // 801F5650
  c->lr=0x801F5658u; f_800592DC(c); // 801F5654
  c->r[3]=c->r[30]|c->r[30]; // 801F5658
  c->r[4]=c->r[1]+0x00000008u; // 801F565C
  c->lr=0x801F5664u; f_801F99B8(c); // 801F5660
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801F5664
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F5668
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F566C
  c->lr=0x801F5674u; f_801313A0(c); // 801F5670
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F5674
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F5678
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F567C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F5680
  c->lr=c->r[0]; // 801F5684
  c->r[1]=c->r[1]+0x00000020u; // 801F5688
  return; // 801F568C
}

// fn_801F5690
void f_801F5690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5690
  c->r[0]=c->lr; // 801F5694
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F569C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F56A0
  c->r[30]=c->r[3]|c->r[3]; // 801F56A4
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801F56A8
  cmps(c,0,(int32_t)c->r[3],0); // 801F56AC
  if (crb(c,2)) { goto L_801F5704; } // 801F56B0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F56B4
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F56B8
  c->ctr=c->r[12]; // 801F56BC
  if (true) { c->lr=0x801F56C4u; dispatch(c,c->ctr); } // 801F56C0
  c->lr=0x801F56C8u; f_80056B5C(c); // 801F56C4
  c->r[31]=c->r[3]|c->r[3]; // 801F56C8
  c->lr=0x801F56D0u; f_801F1340(c); // 801F56CC
  c->lr=0x801F56D4u; f_80056B54(c); // 801F56D0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801F56D4
  cmps(c,0,(int32_t)c->r[3],0); // 801F56D8
  if (crb(c,2)) { goto L_801F56F4; } // 801F56DC
  c->r[4]=0u+0x00000001u; // 801F56E0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F56E4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F56E8
  c->ctr=c->r[12]; // 801F56EC
  if (true) { c->lr=0x801F56F4u; dispatch(c,c->ctr); } // 801F56F0
L_801F56F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801F56F4
  c->lr=0x801F56FCu; f_80056B54(c); // 801F56F8
  c->r[0]=0u+0x00000000u; // 801F56FC
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801F5700
L_801F5704:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801F5704
  cmps(c,0,(int32_t)c->r[3],0); // 801F5708
  if (crb(c,2)) { goto L_801F5760; } // 801F570C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F5710
  c->r[12]=R32(c->r[12]+0x00000048u); // 801F5714
  c->ctr=c->r[12]; // 801F5718
  if (true) { c->lr=0x801F5720u; dispatch(c,c->ctr); } // 801F571C
  c->lr=0x801F5724u; f_80056B5C(c); // 801F5720
  c->r[31]=c->r[3]|c->r[3]; // 801F5724
  c->lr=0x801F572Cu; f_801F1340(c); // 801F5728
  c->lr=0x801F5730u; f_80056B54(c); // 801F572C
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801F5730
  cmps(c,0,(int32_t)c->r[3],0); // 801F5734
  if (crb(c,2)) { goto L_801F5750; } // 801F5738
  c->r[4]=0u+0x00000001u; // 801F573C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F5740
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5744
  c->ctr=c->r[12]; // 801F5748
  if (true) { c->lr=0x801F5750u; dispatch(c,c->ctr); } // 801F574C
L_801F5750:;
  c->r[3]=c->r[31]|c->r[31]; // 801F5750
  c->lr=0x801F5758u; f_80056B54(c); // 801F5754
  c->r[0]=0u+0x00000000u; // 801F5758
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801F575C
L_801F5760:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5760
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F5764
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5768
  c->lr=c->r[0]; // 801F576C
  c->r[1]=c->r[1]+0x00000010u; // 801F5770
  return; // 801F5774
}

// fn_801F5778
void f_801F5778(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5778
  c->r[0]=c->lr; // 801F577C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5780
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5784
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F5788
  c->r[30]=c->r[3]|c->r[3]; // 801F578C
  c->r[31]=c->r[4]|c->r[4]; // 801F5790
  cmps(c,0,(int32_t)c->r[3],0); // 801F5794
  if (crb(c,2)) { goto L_801F57B8; } // 801F5798
  c->r[4]=0u+0x00000000u; // 801F579C
  c->lr=0x801F57A4u; f_80114B08(c); // 801F57A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F57A4
  cmps(c,0,(int32_t)c->r[0],0); // 801F57A8
  if (!crb(c,1)) { goto L_801F57B8; } // 801F57AC
  c->r[3]=c->r[30]|c->r[30]; // 801F57B0
  c->lr=0x801F57B8u; f_80047B20(c); // 801F57B4
L_801F57B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801F57B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F57BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F57C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F57C4
  c->lr=c->r[0]; // 801F57C8
  c->r[1]=c->r[1]+0x00000010u; // 801F57CC
  return; // 801F57D0
}

// fn_801F57D4
void f_801F57D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F57D4
  c->r[0]=c->lr; // 801F57D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F57DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F57E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F57E4
  c->r[30]=c->r[3]|c->r[3]; // 801F57E8
  c->r[31]=c->r[4]|c->r[4]; // 801F57EC
  cmps(c,0,(int32_t)c->r[3],0); // 801F57F0
  if (crb(c,2)) { goto L_801F5814; } // 801F57F4
  c->r[4]=0u+0x00000000u; // 801F57F8
  c->lr=0x801F5800u; f_8012F7F0(c); // 801F57FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F5800
  cmps(c,0,(int32_t)c->r[0],0); // 801F5804
  if (!crb(c,1)) { goto L_801F5814; } // 801F5808
  c->r[3]=c->r[30]|c->r[30]; // 801F580C
  c->lr=0x801F5814u; f_80047B20(c); // 801F5810
L_801F5814:;
  c->r[3]=c->r[30]|c->r[30]; // 801F5814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5818
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F581C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5820
  c->lr=c->r[0]; // 801F5824
  c->r[1]=c->r[1]+0x00000010u; // 801F5828
  return; // 801F582C
}

// fn_801F5830
void f_801F5830(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801F5830
  f_8012F910(c); return; // 801F5834
}

// fn_801F5838
void f_801F5838(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801F5838
  f_80131388(c); return; // 801F583C
}

// fn_801F5840
void f_801F5840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5840
  c->r[0]=c->lr; // 801F5844
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F584C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F5850
  c->r[30]=c->r[3]|c->r[3]; // 801F5854
  c->r[31]=c->r[4]|c->r[4]; // 801F5858
  c->lr=0x801F5860u; f_801F5830(c); // 801F585C
  c->r[3]=c->r[30]|c->r[30]; // 801F5860
  c->r[4]=c->r[31]|c->r[31]; // 801F5864
  c->lr=0x801F586Cu; f_801F5838(c); // 801F5868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F586C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F5870
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F5874
  c->lr=c->r[0]; // 801F5878
  c->r[1]=c->r[1]+0x00000010u; // 801F587C
  return; // 801F5880
}

// fn_801F5884
void f_801F5884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5884
  c->r[0]=c->lr; // 801F5888
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F588C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F5890
  W32(c->r[1]+0x00000038u,c->r[30]); // 801F5894
  W32(c->r[1]+0x00000034u,c->r[29]); // 801F5898
  c->r[29]=c->r[3]|c->r[3]; // 801F589C
  c->lr=0x801F58A4u; f_801F99D4(c); // 801F58A0
  c->lr=0x801F58A8u; f_801F9C64(c); // 801F58A4
  c->r[31]=c->r[3]|c->r[3]; // 801F58A8
  c->lr=0x801F58B0u; f_801F99D4(c); // 801F58AC
  c->lr=0x801F58B4u; f_801F9C74(c); // 801F58B0
  c->r[30]=c->r[3]|c->r[3]; // 801F58B4
  c->lr=0x801F58BCu; f_8007B524(c); // 801F58B8
  c->r[4]=0u+0x00000001u; // 801F58BC
  c->lr=0x801F58C4u; f_800A2EF0(c); // 801F58C0
  c->r[4]=c->r[3]|c->r[3]; // 801F58C4
  c->r[3]=c->r[1]+0x00000008u; // 801F58C8
  c->r[5]=c->r[31]|c->r[31]; // 801F58CC
  c->r[6]=c->r[30]|c->r[30]; // 801F58D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F58D4
  c->lr=0x801F58DCu; f_802E7CC4(c); // 801F58D8
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801F58DC
  c->r[4]=c->r[1]+0x00000008u; // 801F58E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801F58E4
  c->lr=0x801F58ECu; f_801313D4(c); // 801F58E8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F58EC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801F58F0
  c->r[29]=R32(c->r[1]+0x00000034u); // 801F58F4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F58F8
  c->lr=c->r[0]; // 801F58FC
  c->r[1]=c->r[1]+0x00000040u; // 801F5900
  return; // 801F5904
}

// fn_801F5908
void f_801F5908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5908
  c->r[0]=c->lr; // 801F590C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5914
  c->r[31]=c->r[3]|c->r[3]; // 801F5918
  c->r[4]=0u+0x00000001u; // 801F591C
  c->lr=0x801F5924u; f_801F5830(c); // 801F5920
  c->r[3]=c->r[31]|c->r[31]; // 801F5924
  c->r[4]=0u+0x00000001u; // 801F5928
  c->lr=0x801F5930u; f_801F5838(c); // 801F592C
  c->r[3]=c->r[31]|c->r[31]; // 801F5930
  c->lr=0x801F5938u; f_801F5884(c); // 801F5934
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801F5938
  c->r[4]=0u+0x00000000u; // 801F593C
  c->r[5]=0u+0x00000006u; // 801F5940
  c->lr=0x801F5948u; f_8012E640(c); // 801F5944
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F5948
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F594C
  c->lr=c->r[0]; // 801F5950
  c->r[1]=c->r[1]+0x00000010u; // 801F5954
  return; // 801F5958
}

// fn_801F595C
void f_801F595C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F595C
  c->r[0]=c->lr; // 801F5960
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F5964
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F5968
  c->r[31]=c->r[3]|c->r[3]; // 801F596C
  c->lr=0x801F5974u; f_8012FAAC(c); // 801F5970
  c->r[3]=0u+0x80470000u; // 801F5974
  c->r[0]=c->r[3]+0x000058F0u; // 801F5978
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F597C
  c->r[0]=0u+0x00000000u; // 801F5980
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801F5984
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801F5988
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801F598C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F5990
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801F5994
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801F5998
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801F599C
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801F59A0
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801F59A4
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801F59A8
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801F59AC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801F59B0
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801F59B4
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801F59B8
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801F59BC
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801F59C0
  W32(c->r[31]+0x00000100u,c->r[0]); // 801F59C4
  W32(c->r[31]+0x00000104u,c->r[0]); // 801F59C8
  c->r[3]=c->r[31]|c->r[31]; // 801F59CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F59D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F59D4
  c->lr=c->r[0]; // 801F59D8
  c->r[1]=c->r[1]+0x00000010u; // 801F59DC
  return; // 801F59E0
}

// fn_801F59E4
void f_801F59E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F59E4
  c->r[0]=c->lr; // 801F59E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F59EC
  c->r[11]=c->r[1]+0x00000020u; // 801F59F0
  c->lr=0x801F59F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F59F4
  c->r[31]=c->r[3]|c->r[3]; // 801F59F8
  c->lr=0x801F5A00u; f_8011C12C(c); // 801F59FC
  c->r[4]=0u+0x00000016u; // 801F5A00
  c->lr=0x801F5A08u; f_8011CFF4(c); // 801F5A04
  c->r[27]=c->r[3]|c->r[3]; // 801F5A08
  c->r[28]=0u+0x00000000u; // 801F5A0C
  c->r[29]=c->r[31]|c->r[31]; // 801F5A10
L_801F5A14:;
  c->lr=0x801F5A18u; f_80056B5C(c); // 801F5A14
  c->r[26]=c->r[3]|c->r[3]; // 801F5A18
  c->lr=0x801F5A20u; f_801F1340(c); // 801F5A1C
  c->lr=0x801F5A24u; f_80056B54(c); // 801F5A20
  c->r[3]=0u+0x00000B28u; // 801F5A24
  c->lr=0x801F5A2Cu; f_80047B64(c); // 801F5A28
  c->r[30]=c->r[3]|c->r[3]; // 801F5A2C
  cmps(c,0,(int32_t)c->r[3],0); // 801F5A30
  if (crb(c,2)) { goto L_801F5A3C; } // 801F5A34
  c->lr=0x801F5A3Cu; f_801F6AB4(c); // 801F5A38
L_801F5A3C:;
  W32(c->r[29]+0x000000D4u,c->r[30]); // 801F5A3C
  c->r[3]=c->r[26]|c->r[26]; // 801F5A40
  c->lr=0x801F5A48u; f_80056B54(c); // 801F5A44
  c->r[3]=c->r[27]|c->r[27]; // 801F5A48
  c->lr=0x801F5A50u; f_801FACBC(c); // 801F5A4C
  c->lr=0x801F5A54u; f_801F67DC(c); // 801F5A50
  c->lr=0x801F5A58u; f_80116A2C(c); // 801F5A54
  c->r[4]=c->r[3]|c->r[3]; // 801F5A58
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801F5A5C
  c->lr=0x801F5A64u; f_80114AE0(c); // 801F5A60
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801F5A64
  c->r[4]=c->r[28]|c->r[28]; // 801F5A68
  c->lr=0x801F5A70u; f_80114AD8(c); // 801F5A6C
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801F5A70
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5A74
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F5A78
  c->ctr=c->r[12]; // 801F5A7C
  if (true) { c->lr=0x801F5A84u; dispatch(c,c->ctr); } // 801F5A80
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801F5A84
  c->r[4]=c->r[28]|c->r[28]; // 801F5A88
  c->r[5]=0u+0x00000006u; // 801F5A8C
  c->lr=0x801F5A94u; f_8012E640(c); // 801F5A90
  c->r[29]=c->r[29]+0x00000004u; // 801F5A94
  c->r[28]=c->r[28]+0x00000001u; // 801F5A98
  cmps(c,0,(int32_t)c->r[28],4); // 801F5A9C
  if (crb(c,0)) { IRQCHK(c); goto L_801F5A14; } // 801F5AA0
  c->r[28]=0u+0x00000000u; // 801F5AA4
  c->r[29]=c->r[31]|c->r[31]; // 801F5AA8
L_801F5AAC:;
  c->lr=0x801F5AB0u; f_80056B5C(c); // 801F5AAC
  c->r[26]=c->r[3]|c->r[3]; // 801F5AB0
  c->lr=0x801F5AB8u; f_801F1340(c); // 801F5AB4
  c->lr=0x801F5ABCu; f_80056B54(c); // 801F5AB8
  c->r[3]=0u+0x00000B28u; // 801F5ABC
  c->lr=0x801F5AC4u; f_80047B64(c); // 801F5AC0
  c->r[30]=c->r[3]|c->r[3]; // 801F5AC4
  cmps(c,0,(int32_t)c->r[3],0); // 801F5AC8
  if (crb(c,2)) { goto L_801F5AD4; } // 801F5ACC
  c->lr=0x801F5AD4u; f_801F6A58(c); // 801F5AD0
L_801F5AD4:;
  W32(c->r[29]+0x000000E4u,c->r[30]); // 801F5AD4
  c->r[3]=c->r[26]|c->r[26]; // 801F5AD8
  c->lr=0x801F5AE0u; f_80056B54(c); // 801F5ADC
  c->r[3]=c->r[27]|c->r[27]; // 801F5AE0
  c->lr=0x801F5AE8u; f_801FACBC(c); // 801F5AE4
  c->lr=0x801F5AECu; f_801F67E4(c); // 801F5AE8
  c->lr=0x801F5AF0u; f_80116A2C(c); // 801F5AEC
  c->r[4]=c->r[3]|c->r[3]; // 801F5AF0
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801F5AF4
  c->lr=0x801F5AFCu; f_80114AE0(c); // 801F5AF8
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801F5AFC
  c->r[4]=c->r[28]|c->r[28]; // 801F5B00
  c->lr=0x801F5B08u; f_80114AD8(c); // 801F5B04
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801F5B08
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5B0C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F5B10
  c->ctr=c->r[12]; // 801F5B14
  if (true) { c->lr=0x801F5B1Cu; dispatch(c,c->ctr); } // 801F5B18
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801F5B1C
  c->r[4]=c->r[28]|c->r[28]; // 801F5B20
  c->r[5]=0u+0x00000004u; // 801F5B24
  c->lr=0x801F5B2Cu; f_8012E640(c); // 801F5B28
  c->r[29]=c->r[29]+0x00000004u; // 801F5B2C
  c->r[28]=c->r[28]+0x00000001u; // 801F5B30
  cmps(c,0,(int32_t)c->r[28],9); // 801F5B34
  if (crb(c,0)) { IRQCHK(c); goto L_801F5AAC; } // 801F5B38
  c->r[3]=R32(c->r[31]+0x00000104u); // 801F5B3C
  c->r[4]=0u+0x00000007u; // 801F5B40
  c->r[5]=0u+0x00000004u; // 801F5B44
  c->lr=0x801F5B4Cu; f_8012E640(c); // 801F5B48
  c->lr=0x801F5B50u; f_80056B5C(c); // 801F5B4C
  c->r[26]=c->r[3]|c->r[3]; // 801F5B50
  c->lr=0x801F5B58u; f_801F1340(c); // 801F5B54
  c->lr=0x801F5B5Cu; f_80056B54(c); // 801F5B58
  c->r[3]=0u+0x00000B28u; // 801F5B5C
  c->lr=0x801F5B64u; f_80047B64(c); // 801F5B60
  c->r[30]=c->r[3]|c->r[3]; // 801F5B64
  cmps(c,0,(int32_t)c->r[3],0); // 801F5B68
  if (crb(c,2)) { goto L_801F5B74; } // 801F5B6C
  c->lr=0x801F5B74u; f_801F69FC(c); // 801F5B70
L_801F5B74:;
  W32(c->r[31]+0x000000C0u,c->r[30]); // 801F5B74
  c->r[3]=c->r[26]|c->r[26]; // 801F5B78
  c->lr=0x801F5B80u; f_80056B54(c); // 801F5B7C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801F5B80
  c->r[4]=0u+0x00000000u; // 801F5B84
  c->lr=0x801F5B8Cu; f_80114AE0(c); // 801F5B88
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801F5B8C
  c->r[4]=0u+0x00000000u; // 801F5B90
  c->lr=0x801F5B98u; f_801169C8(c); // 801F5B94
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801F5B98
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5B9C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F5BA0
  c->ctr=c->r[12]; // 801F5BA4
  if (true) { c->lr=0x801F5BACu; dispatch(c,c->ctr); } // 801F5BA8
  c->lr=0x801F5BB0u; f_80056B5C(c); // 801F5BAC
  c->r[26]=c->r[3]|c->r[3]; // 801F5BB0
  c->lr=0x801F5BB8u; f_801F1340(c); // 801F5BB4
  c->lr=0x801F5BBCu; f_80056B54(c); // 801F5BB8
  c->r[3]=0u+0x00000B28u; // 801F5BBC
  c->lr=0x801F5BC4u; f_80047B64(c); // 801F5BC0
  c->r[30]=c->r[3]|c->r[3]; // 801F5BC4
  cmps(c,0,(int32_t)c->r[3],0); // 801F5BC8
  if (crb(c,2)) { goto L_801F5BD4; } // 801F5BCC
  c->lr=0x801F5BD4u; f_801F69A0(c); // 801F5BD0
L_801F5BD4:;
  W32(c->r[31]+0x000000CCu,c->r[30]); // 801F5BD4
  c->r[3]=c->r[26]|c->r[26]; // 801F5BD8
  c->lr=0x801F5BE0u; f_80056B54(c); // 801F5BDC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801F5BE0
  c->r[4]=0u+0x00000000u; // 801F5BE4
  c->lr=0x801F5BECu; f_80114AE0(c); // 801F5BE8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801F5BEC
  c->r[4]=0u+0x00000000u; // 801F5BF0
  c->lr=0x801F5BF8u; f_801169C8(c); // 801F5BF4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801F5BF8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5BFC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F5C00
  c->ctr=c->r[12]; // 801F5C04
  if (true) { c->lr=0x801F5C0Cu; dispatch(c,c->ctr); } // 801F5C08
  c->lr=0x801F5C10u; f_80056B5C(c); // 801F5C0C
  c->r[26]=c->r[3]|c->r[3]; // 801F5C10
  c->lr=0x801F5C18u; f_801F1340(c); // 801F5C14
  c->lr=0x801F5C1Cu; f_80056B54(c); // 801F5C18
  c->r[3]=0u+0x00000B28u; // 801F5C1C
  c->lr=0x801F5C24u; f_80047B64(c); // 801F5C20
  c->r[30]=c->r[3]|c->r[3]; // 801F5C24
  cmps(c,0,(int32_t)c->r[3],0); // 801F5C28
  if (crb(c,2)) { goto L_801F5C34; } // 801F5C2C
  c->lr=0x801F5C34u; f_801F6944(c); // 801F5C30
L_801F5C34:;
  W32(c->r[31]+0x000000C8u,c->r[30]); // 801F5C34
  c->r[3]=c->r[26]|c->r[26]; // 801F5C38
  c->lr=0x801F5C40u; f_80056B54(c); // 801F5C3C
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801F5C40
  c->r[4]=0u+0x00000000u; // 801F5C44
  c->lr=0x801F5C4Cu; f_80114AE0(c); // 801F5C48
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801F5C4C
  c->r[4]=0u+0x00000000u; // 801F5C50
  c->lr=0x801F5C58u; f_801169C8(c); // 801F5C54
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801F5C58
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5C5C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F5C60
  c->ctr=c->r[12]; // 801F5C64
  if (true) { c->lr=0x801F5C6Cu; dispatch(c,c->ctr); } // 801F5C68
  c->lr=0x801F5C70u; f_80056B5C(c); // 801F5C6C
  c->r[26]=c->r[3]|c->r[3]; // 801F5C70
  c->lr=0x801F5C78u; f_801F1340(c); // 801F5C74
  c->lr=0x801F5C7Cu; f_80056B54(c); // 801F5C78
  c->r[3]=0u+0x000000C8u; // 801F5C7C
  c->lr=0x801F5C84u; f_80047B64(c); // 801F5C80
  c->r[30]=c->r[3]|c->r[3]; // 801F5C84
  cmps(c,0,(int32_t)c->r[3],0); // 801F5C88
  if (crb(c,2)) { goto L_801F5C94; } // 801F5C8C
  c->lr=0x801F5C94u; f_801F5534(c); // 801F5C90
L_801F5C94:;
  W32(c->r[31]+0x000000C4u,c->r[30]); // 801F5C94
  c->r[3]=c->r[26]|c->r[26]; // 801F5C98
  c->lr=0x801F5CA0u; f_80056B54(c); // 801F5C9C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801F5CA0
  c->lr=0x801F5CA8u; f_801F557C(c); // 801F5CA4
  c->lr=0x801F5CACu; f_80056B5C(c); // 801F5CA8
  c->r[26]=c->r[3]|c->r[3]; // 801F5CAC
  c->lr=0x801F5CB4u; f_801F1340(c); // 801F5CB0
  c->lr=0x801F5CB8u; f_80056B54(c); // 801F5CB4
  c->r[3]=0u+0x000033B8u; // 801F5CB8
  c->lr=0x801F5CC0u; f_80047B64(c); // 801F5CBC
  c->r[30]=c->r[3]|c->r[3]; // 801F5CC0
  cmps(c,0,(int32_t)c->r[3],0); // 801F5CC4
  if (crb(c,2)) { goto L_801F5CD0; } // 801F5CC8
  c->lr=0x801F5CD0u; f_801F4924(c); // 801F5CCC
L_801F5CD0:;
  W32(c->r[31]+0x000000D0u,c->r[30]); // 801F5CD0
  c->r[3]=c->r[26]|c->r[26]; // 801F5CD4
  c->lr=0x801F5CDCu; f_80056B54(c); // 801F5CD8
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801F5CDC
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F5CE0
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F5CE4
  c->ctr=c->r[12]; // 801F5CE8
  if (true) { c->lr=0x801F5CF0u; dispatch(c,c->ctr); } // 801F5CEC
  c->lr=0x801F5CF4u; f_8019CEB8(c); // 801F5CF0
  c->r[4]=R32(c->r[31]+0x000000D0u); // 801F5CF4
  c->lr=0x801F5CFCu; f_8019D1D8(c); // 801F5CF8
  c->r[11]=c->r[1]+0x00000020u; // 801F5CFC
  c->lr=0x801F5D04u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F5D00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F5D04
  c->lr=c->r[0]; // 801F5D08
  c->r[1]=c->r[1]+0x00000020u; // 801F5D0C
  return; // 801F5D10
}

// fn_801F5D14
void f_801F5D14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5D14
  c->r[0]=c->lr; // 801F5D18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F5D1C
  c->r[11]=c->r[1]+0x00000020u; // 801F5D20
  c->lr=0x801F5D28u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F5D24
  c->r[31]=c->r[3]|c->r[3]; // 801F5D28
  c->r[28]=0u+0x00000000u; // 801F5D2C
  c->r[29]=c->r[31]|c->r[31]; // 801F5D30
  c->r[30]=0u+0x00000000u; // 801F5D34
L_801F5D38:;
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801F5D38
  cmps(c,0,(int32_t)c->r[3],0); // 801F5D3C
  if (crb(c,2)) { goto L_801F5D90; } // 801F5D40
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5D44
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F5D48
  c->ctr=c->r[12]; // 801F5D4C
  if (true) { c->lr=0x801F5D54u; dispatch(c,c->ctr); } // 801F5D50
  c->lr=0x801F5D58u; f_80056B5C(c); // 801F5D54
  c->r[27]=c->r[3]|c->r[3]; // 801F5D58
  c->lr=0x801F5D60u; f_801F1340(c); // 801F5D5C
  c->lr=0x801F5D64u; f_80056B54(c); // 801F5D60
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801F5D64
  cmps(c,0,(int32_t)c->r[3],0); // 801F5D68
  if (crb(c,2)) { goto L_801F5D84; } // 801F5D6C
  c->r[4]=0u+0x00000001u; // 801F5D70
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5D74
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5D78
  c->ctr=c->r[12]; // 801F5D7C
  if (true) { c->lr=0x801F5D84u; dispatch(c,c->ctr); } // 801F5D80
L_801F5D84:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5D84
  c->lr=0x801F5D8Cu; f_80056B54(c); // 801F5D88
  W32(c->r[29]+0x000000D4u,c->r[30]); // 801F5D8C
L_801F5D90:;
  c->r[29]=c->r[29]+0x00000004u; // 801F5D90
  c->r[28]=c->r[28]+0x00000001u; // 801F5D94
  cmps(c,0,(int32_t)c->r[28],4); // 801F5D98
  if (crb(c,0)) { IRQCHK(c); goto L_801F5D38; } // 801F5D9C
  c->r[28]=0u+0x00000000u; // 801F5DA0
  c->r[29]=c->r[31]|c->r[31]; // 801F5DA4
  c->r[30]=0u+0x00000000u; // 801F5DA8
L_801F5DAC:;
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801F5DAC
  cmps(c,0,(int32_t)c->r[3],0); // 801F5DB0
  if (crb(c,2)) { goto L_801F5E04; } // 801F5DB4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5DB8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F5DBC
  c->ctr=c->r[12]; // 801F5DC0
  if (true) { c->lr=0x801F5DC8u; dispatch(c,c->ctr); } // 801F5DC4
  c->lr=0x801F5DCCu; f_80056B5C(c); // 801F5DC8
  c->r[27]=c->r[3]|c->r[3]; // 801F5DCC
  c->lr=0x801F5DD4u; f_801F1340(c); // 801F5DD0
  c->lr=0x801F5DD8u; f_80056B54(c); // 801F5DD4
  c->r[3]=R32(c->r[29]+0x000000E4u); // 801F5DD8
  cmps(c,0,(int32_t)c->r[3],0); // 801F5DDC
  if (crb(c,2)) { goto L_801F5DF8; } // 801F5DE0
  c->r[4]=0u+0x00000001u; // 801F5DE4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5DE8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5DEC
  c->ctr=c->r[12]; // 801F5DF0
  if (true) { c->lr=0x801F5DF8u; dispatch(c,c->ctr); } // 801F5DF4
L_801F5DF8:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5DF8
  c->lr=0x801F5E00u; f_80056B54(c); // 801F5DFC
  W32(c->r[29]+0x000000E4u,c->r[30]); // 801F5E00
L_801F5E04:;
  c->r[29]=c->r[29]+0x00000004u; // 801F5E04
  c->r[28]=c->r[28]+0x00000001u; // 801F5E08
  cmps(c,0,(int32_t)c->r[28],9); // 801F5E0C
  if (crb(c,0)) { IRQCHK(c); goto L_801F5DAC; } // 801F5E10
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801F5E14
  cmps(c,0,(int32_t)c->r[3],0); // 801F5E18
  if (crb(c,2)) { goto L_801F5E70; } // 801F5E1C
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5E20
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F5E24
  c->ctr=c->r[12]; // 801F5E28
  if (true) { c->lr=0x801F5E30u; dispatch(c,c->ctr); } // 801F5E2C
  c->lr=0x801F5E34u; f_80056B5C(c); // 801F5E30
  c->r[27]=c->r[3]|c->r[3]; // 801F5E34
  c->lr=0x801F5E3Cu; f_801F1340(c); // 801F5E38
  c->lr=0x801F5E40u; f_80056B54(c); // 801F5E3C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801F5E40
  cmps(c,0,(int32_t)c->r[3],0); // 801F5E44
  if (crb(c,2)) { goto L_801F5E60; } // 801F5E48
  c->r[4]=0u+0x00000001u; // 801F5E4C
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5E50
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5E54
  c->ctr=c->r[12]; // 801F5E58
  if (true) { c->lr=0x801F5E60u; dispatch(c,c->ctr); } // 801F5E5C
L_801F5E60:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5E60
  c->lr=0x801F5E68u; f_80056B54(c); // 801F5E64
  c->r[0]=0u+0x00000000u; // 801F5E68
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801F5E6C
L_801F5E70:;
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801F5E70
  cmps(c,0,(int32_t)c->r[3],0); // 801F5E74
  if (crb(c,2)) { goto L_801F5ECC; } // 801F5E78
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5E7C
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F5E80
  c->ctr=c->r[12]; // 801F5E84
  if (true) { c->lr=0x801F5E8Cu; dispatch(c,c->ctr); } // 801F5E88
  c->lr=0x801F5E90u; f_80056B5C(c); // 801F5E8C
  c->r[27]=c->r[3]|c->r[3]; // 801F5E90
  c->lr=0x801F5E98u; f_801F1340(c); // 801F5E94
  c->lr=0x801F5E9Cu; f_80056B54(c); // 801F5E98
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801F5E9C
  cmps(c,0,(int32_t)c->r[3],0); // 801F5EA0
  if (crb(c,2)) { goto L_801F5EBC; } // 801F5EA4
  c->r[4]=0u+0x00000001u; // 801F5EA8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5EAC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5EB0
  c->ctr=c->r[12]; // 801F5EB4
  if (true) { c->lr=0x801F5EBCu; dispatch(c,c->ctr); } // 801F5EB8
L_801F5EBC:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5EBC
  c->lr=0x801F5EC4u; f_80056B54(c); // 801F5EC0
  c->r[0]=0u+0x00000000u; // 801F5EC4
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801F5EC8
L_801F5ECC:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801F5ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801F5ED0
  if (crb(c,2)) { goto L_801F5F28; } // 801F5ED4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5ED8
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F5EDC
  c->ctr=c->r[12]; // 801F5EE0
  if (true) { c->lr=0x801F5EE8u; dispatch(c,c->ctr); } // 801F5EE4
  c->lr=0x801F5EECu; f_80056B5C(c); // 801F5EE8
  c->r[27]=c->r[3]|c->r[3]; // 801F5EEC
  c->lr=0x801F5EF4u; f_801F1340(c); // 801F5EF0
  c->lr=0x801F5EF8u; f_80056B54(c); // 801F5EF4
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801F5EF8
  cmps(c,0,(int32_t)c->r[3],0); // 801F5EFC
  if (crb(c,2)) { goto L_801F5F18; } // 801F5F00
  c->r[4]=0u+0x00000001u; // 801F5F04
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F5F08
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5F0C
  c->ctr=c->r[12]; // 801F5F10
  if (true) { c->lr=0x801F5F18u; dispatch(c,c->ctr); } // 801F5F14
L_801F5F18:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5F18
  c->lr=0x801F5F20u; f_80056B54(c); // 801F5F1C
  c->r[0]=0u+0x00000000u; // 801F5F20
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801F5F24
L_801F5F28:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801F5F28
  cmps(c,0,(int32_t)c->r[3],0); // 801F5F2C
  if (crb(c,2)) { goto L_801F5F78; } // 801F5F30
  c->lr=0x801F5F38u; f_801F5690(c); // 801F5F34
  c->lr=0x801F5F3Cu; f_80056B5C(c); // 801F5F38
  c->r[27]=c->r[3]|c->r[3]; // 801F5F3C
  c->lr=0x801F5F44u; f_801F1340(c); // 801F5F40
  c->lr=0x801F5F48u; f_80056B54(c); // 801F5F44
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801F5F48
  cmps(c,0,(int32_t)c->r[3],0); // 801F5F4C
  if (crb(c,2)) { goto L_801F5F68; } // 801F5F50
  c->r[4]=0u+0x00000001u; // 801F5F54
  c->r[12]=R32(c->r[3]+0x00000058u); // 801F5F58
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5F5C
  c->ctr=c->r[12]; // 801F5F60
  if (true) { c->lr=0x801F5F68u; dispatch(c,c->ctr); } // 801F5F64
L_801F5F68:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5F68
  c->lr=0x801F5F70u; f_80056B54(c); // 801F5F6C
  c->r[0]=0u+0x00000000u; // 801F5F70
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F5F74
L_801F5F78:;
  c->r[29]=R32(c->r[31]+0x000000D0u); // 801F5F78
  cmps(c,0,(int32_t)c->r[29],0); // 801F5F7C
  if (crb(c,2)) { goto L_801F5FE4; } // 801F5F80
  c->lr=0x801F5F88u; f_8019CEB8(c); // 801F5F84
  c->r[4]=c->r[29]|c->r[29]; // 801F5F88
  c->lr=0x801F5F90u; f_8019D248(c); // 801F5F8C
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801F5F90
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F5F94
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F5F98
  c->ctr=c->r[12]; // 801F5F9C
  if (true) { c->lr=0x801F5FA4u; dispatch(c,c->ctr); } // 801F5FA0
  c->lr=0x801F5FA8u; f_80056B5C(c); // 801F5FA4
  c->r[27]=c->r[3]|c->r[3]; // 801F5FA8
  c->lr=0x801F5FB0u; f_801F1340(c); // 801F5FAC
  c->lr=0x801F5FB4u; f_80056B54(c); // 801F5FB0
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801F5FB4
  cmps(c,0,(int32_t)c->r[3],0); // 801F5FB8
  if (crb(c,2)) { goto L_801F5FD4; } // 801F5FBC
  c->r[4]=0u+0x00000001u; // 801F5FC0
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F5FC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F5FC8
  c->ctr=c->r[12]; // 801F5FCC
  if (true) { c->lr=0x801F5FD4u; dispatch(c,c->ctr); } // 801F5FD0
L_801F5FD4:;
  c->r[3]=c->r[27]|c->r[27]; // 801F5FD4
  c->lr=0x801F5FDCu; f_80056B54(c); // 801F5FD8
  c->r[0]=0u+0x00000000u; // 801F5FDC
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801F5FE0
L_801F5FE4:;
  c->r[11]=c->r[1]+0x00000020u; // 801F5FE4
  c->lr=0x801F5FECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F5FE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F5FEC
  c->lr=c->r[0]; // 801F5FF0
  c->r[1]=c->r[1]+0x00000020u; // 801F5FF4
  return; // 801F5FF8
}

// fn_801F5FFC
void f_801F5FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F5FFC
  c->r[0]=c->lr; // 801F6000
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6008
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F600C
  c->r[30]=c->r[3]|c->r[3]; // 801F6010
  c->r[31]=c->r[4]|c->r[4]; // 801F6014
  cmps(c,0,(int32_t)c->r[3],0); // 801F6018
  if (crb(c,2)) { goto L_801F6058; } // 801F601C
  c->r[3]=c->r[3]+0x00003370u; // 801F6020
  c->r[4]=0u+0xFFFFFFFFu; // 801F6024
  c->lr=0x801F602Cu; f_80110504(c); // 801F6028
  c->r[3]=c->r[30]+0x00003340u; // 801F602C
  c->r[4]=0u+0xFFFFFFFFu; // 801F6030
  c->lr=0x801F6038u; f_8011DE40(c); // 801F6034
  c->r[3]=c->r[30]|c->r[30]; // 801F6038
  c->r[4]=0u+0x00000000u; // 801F603C
  c->lr=0x801F6044u; f_8019C808(c); // 801F6040
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F6044
  cmps(c,0,(int32_t)c->r[0],0); // 801F6048
  if (!crb(c,1)) { goto L_801F6058; } // 801F604C
  c->r[3]=c->r[30]|c->r[30]; // 801F6050
  c->lr=0x801F6058u; f_80047B20(c); // 801F6054
L_801F6058:;
  c->r[3]=c->r[30]|c->r[30]; // 801F6058
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F605C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F6060
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6064
  c->lr=c->r[0]; // 801F6068
  c->r[1]=c->r[1]+0x00000010u; // 801F606C
  return; // 801F6070
}

// fn_801F6074
void f_801F6074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6074
  c->r[0]=c->lr; // 801F6078
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F607C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6080
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F6084
  c->r[30]=c->r[3]|c->r[3]; // 801F6088
  c->r[31]=c->r[4]|c->r[4]; // 801F608C
  cmps(c,0,(int32_t)c->r[3],0); // 801F6090
  if (crb(c,2)) { goto L_801F60B4; } // 801F6094
  c->r[4]=0u+0x00000000u; // 801F6098
  c->lr=0x801F60A0u; f_8012FB1C(c); // 801F609C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F60A0
  cmps(c,0,(int32_t)c->r[0],0); // 801F60A4
  if (!crb(c,1)) { goto L_801F60B4; } // 801F60A8
  c->r[3]=c->r[30]|c->r[30]; // 801F60AC
  c->lr=0x801F60B4u; f_80047B20(c); // 801F60B0
L_801F60B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801F60B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F60B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F60BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F60C0
  c->lr=c->r[0]; // 801F60C4
  c->r[1]=c->r[1]+0x00000010u; // 801F60C8
  return; // 801F60CC
}

// fn_801F60D0
void f_801F60D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F60D0
  c->r[0]=c->lr; // 801F60D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F60D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F60DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F60E0
  c->r[30]=c->r[3]|c->r[3]; // 801F60E4
  c->r[31]=c->r[4]|c->r[4]; // 801F60E8
  cmps(c,0,(int32_t)c->r[3],0); // 801F60EC
  if (crb(c,2)) { goto L_801F6110; } // 801F60F0
  c->r[4]=0u+0x00000000u; // 801F60F4
  c->lr=0x801F60FCu; f_8012F7F0(c); // 801F60F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F60FC
  cmps(c,0,(int32_t)c->r[0],0); // 801F6100
  if (!crb(c,1)) { goto L_801F6110; } // 801F6104
  c->r[3]=c->r[30]|c->r[30]; // 801F6108
  c->lr=0x801F6110u; f_80047B20(c); // 801F610C
L_801F6110:;
  c->r[3]=c->r[30]|c->r[30]; // 801F6110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6114
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F6118
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F611C
  c->lr=c->r[0]; // 801F6120
  c->r[1]=c->r[1]+0x00000010u; // 801F6124
  return; // 801F6128
}

// fn_801F612C
void f_801F612C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F612C
  c->r[0]=c->lr; // 801F6130
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6138
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F613C
  c->r[30]=c->r[3]|c->r[3]; // 801F6140
  c->r[31]=c->r[4]|c->r[4]; // 801F6144
  cmps(c,0,(int32_t)c->r[3],0); // 801F6148
  if (crb(c,2)) { goto L_801F616C; } // 801F614C
  c->r[4]=0u+0x00000000u; // 801F6150
  c->lr=0x801F6158u; f_8012F7F0(c); // 801F6154
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F6158
  cmps(c,0,(int32_t)c->r[0],0); // 801F615C
  if (!crb(c,1)) { goto L_801F616C; } // 801F6160
  c->r[3]=c->r[30]|c->r[30]; // 801F6164
  c->lr=0x801F616Cu; f_80047B20(c); // 801F6168
L_801F616C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F616C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6170
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F6174
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6178
  c->lr=c->r[0]; // 801F617C
  c->r[1]=c->r[1]+0x00000010u; // 801F6180
  return; // 801F6184
}

// fn_801F6188
void f_801F6188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6188
  c->r[0]=c->lr; // 801F618C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6194
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F6198
  c->r[30]=c->r[3]|c->r[3]; // 801F619C
  c->r[31]=c->r[4]|c->r[4]; // 801F61A0
  cmps(c,0,(int32_t)c->r[3],0); // 801F61A4
  if (crb(c,2)) { goto L_801F61C8; } // 801F61A8
  c->r[4]=0u+0x00000000u; // 801F61AC
  c->lr=0x801F61B4u; f_8012F7F0(c); // 801F61B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F61B4
  cmps(c,0,(int32_t)c->r[0],0); // 801F61B8
  if (!crb(c,1)) { goto L_801F61C8; } // 801F61BC
  c->r[3]=c->r[30]|c->r[30]; // 801F61C0
  c->lr=0x801F61C8u; f_80047B20(c); // 801F61C4
L_801F61C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801F61C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F61CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F61D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F61D4
  c->lr=c->r[0]; // 801F61D8
  c->r[1]=c->r[1]+0x00000010u; // 801F61DC
  return; // 801F61E0
}

// fn_801F61E4
void f_801F61E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F61E4
  c->r[0]=c->lr; // 801F61E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F61EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F61F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F61F4
  c->r[30]=c->r[3]|c->r[3]; // 801F61F8
  c->r[31]=c->r[4]|c->r[4]; // 801F61FC
  cmps(c,0,(int32_t)c->r[3],0); // 801F6200
  if (crb(c,2)) { goto L_801F6224; } // 801F6204
  c->r[4]=0u+0x00000000u; // 801F6208
  c->lr=0x801F6210u; f_8012F7F0(c); // 801F620C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F6210
  cmps(c,0,(int32_t)c->r[0],0); // 801F6214
  if (!crb(c,1)) { goto L_801F6224; } // 801F6218
  c->r[3]=c->r[30]|c->r[30]; // 801F621C
  c->lr=0x801F6224u; f_80047B20(c); // 801F6220
L_801F6224:;
  c->r[3]=c->r[30]|c->r[30]; // 801F6224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6228
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F622C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6230
  c->lr=c->r[0]; // 801F6234
  c->r[1]=c->r[1]+0x00000010u; // 801F6238
  return; // 801F623C
}

// fn_801F6240
void f_801F6240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6240
  c->r[0]=c->lr; // 801F6244
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F624C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F6250
  c->r[30]=c->r[3]|c->r[3]; // 801F6254
  c->r[31]=c->r[4]|c->r[4]; // 801F6258
  cmps(c,0,(int32_t)c->r[3],0); // 801F625C
  if (crb(c,2)) { goto L_801F6280; } // 801F6260
  c->r[4]=0u+0x00000000u; // 801F6264
  c->lr=0x801F626Cu; f_8012F7F0(c); // 801F6268
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F626C
  cmps(c,0,(int32_t)c->r[0],0); // 801F6270
  if (!crb(c,1)) { goto L_801F6280; } // 801F6274
  c->r[3]=c->r[30]|c->r[30]; // 801F6278
  c->lr=0x801F6280u; f_80047B20(c); // 801F627C
L_801F6280:;
  c->r[3]=c->r[30]|c->r[30]; // 801F6280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6284
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F6288
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F628C
  c->lr=c->r[0]; // 801F6290
  c->r[1]=c->r[1]+0x00000010u; // 801F6294
  return; // 801F6298
}

// fn_801F629C
void f_801F629C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F629C
  c->r[0]=c->lr; // 801F62A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F62A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F62A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F62AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F62B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F62B4
  c->r[28]=c->r[3]|c->r[3]; // 801F62B8
  c->r[29]=c->r[4]|c->r[4]; // 801F62BC
  c->r[30]=0u+0x00000000u; // 801F62C0
  c->r[31]=c->r[28]|c->r[28]; // 801F62C4
L_801F62C8:;
  c->lr=0x801F62CCu; f_801F99D4(c); // 801F62C8
  c->r[4]=c->r[30]|c->r[30]; // 801F62CC
  c->lr=0x801F62D4u; f_801F9CB0(c); // 801F62D0
  cmps(c,0,(int32_t)c->r[3],0); // 801F62D4
  if (crb(c,2)) { goto L_801F62EC; } // 801F62D8
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801F62DC
  c->r[4]=c->r[29]|c->r[29]; // 801F62E0
  c->lr=0x801F62E8u; f_8012F910(c); // 801F62E4
  goto L_801F62F8; // 801F62E8
L_801F62EC:;
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801F62EC
  c->r[4]=0u+0x00000000u; // 801F62F0
  c->lr=0x801F62F8u; f_8012F910(c); // 801F62F4
L_801F62F8:;
  c->r[31]=c->r[31]+0x00000004u; // 801F62F8
  c->r[30]=c->r[30]+0x00000001u; // 801F62FC
  cmps(c,0,(int32_t)c->r[30],4); // 801F6300
  if (crb(c,0)) { IRQCHK(c); goto L_801F62C8; } // 801F6304
  c->r[30]=0u+0x00000000u; // 801F6308
  c->r[31]=c->r[28]|c->r[28]; // 801F630C
L_801F6310:;
  c->lr=0x801F6314u; f_801F99D4(c); // 801F6310
  c->r[4]=c->r[30]|c->r[30]; // 801F6314
  c->lr=0x801F631Cu; f_801F9D04(c); // 801F6318
  cmps(c,0,(int32_t)c->r[3],0); // 801F631C
  if (crb(c,2)) { goto L_801F6334; } // 801F6320
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801F6324
  c->r[4]=c->r[29]|c->r[29]; // 801F6328
  c->lr=0x801F6330u; f_8012F910(c); // 801F632C
  goto L_801F6340; // 801F6330
L_801F6334:;
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801F6334
  c->r[4]=0u+0x00000000u; // 801F6338
  c->lr=0x801F6340u; f_8012F910(c); // 801F633C
L_801F6340:;
  c->r[31]=c->r[31]+0x00000004u; // 801F6340
  c->r[30]=c->r[30]+0x00000001u; // 801F6344
  cmps(c,0,(int32_t)c->r[30],9); // 801F6348
  if (crb(c,0)) { IRQCHK(c); goto L_801F6310; } // 801F634C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801F6350
  c->r[4]=c->r[29]|c->r[29]; // 801F6354
  c->lr=0x801F635Cu; f_8012F910(c); // 801F6358
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801F635C
  c->r[4]=c->r[29]|c->r[29]; // 801F6360
  c->lr=0x801F6368u; f_8012F910(c); // 801F6364
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F6368
  c->r[4]=c->r[29]|c->r[29]; // 801F636C
  c->lr=0x801F6374u; f_8012F910(c); // 801F6370
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F6374
  c->r[4]=c->r[29]|c->r[29]; // 801F6378
  c->lr=0x801F6380u; f_8019C940(c); // 801F637C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801F6380
  c->r[4]=c->r[29]|c->r[29]; // 801F6384
  c->lr=0x801F638Cu; f_801F5840(c); // 801F6388
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F638C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F6390
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F6394
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F6398
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F639C
  c->lr=c->r[0]; // 801F63A0
  c->r[1]=c->r[1]+0x00000020u; // 801F63A4
  return; // 801F63A8
}

// fn_801F63AC
void f_801F63AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F63AC
  c->r[0]=c->lr; // 801F63B0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801F63B4
  c->r[11]=c->r[1]+0x00000060u; // 801F63B8
  c->lr=0x801F63C0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801F63BC
  c->r[27]=c->r[3]|c->r[3]; // 801F63C0
  c->r[3]=c->r[1]+0x00000038u; // 801F63C4
  c->lr=0x801F63CCu; f_8004B0A4(c); // 801F63C8
  c->r[3]=c->r[1]+0x0000002Cu; // 801F63CC
  c->lr=0x801F63D4u; f_8004B0A4(c); // 801F63D0
  c->r[3]=c->r[1]+0x00000020u; // 801F63D4
  c->lr=0x801F63DCu; f_8004B0A4(c); // 801F63D8
  c->lr=0x801F63E0u; f_8011B41C(c); // 801F63DC
  c->r[4]=0u+0x00000016u; // 801F63E0
  c->lr=0x801F63E8u; f_8011B814(c); // 801F63E4
  c->r[28]=c->r[3]|c->r[3]; // 801F63E8
  c->lr=0x801F63F0u; f_801F99D4(c); // 801F63EC
  c->lr=0x801F63F4u; f_801F9C54(c); // 801F63F0
  c->r[30]=c->r[3]|c->r[3]; // 801F63F4
  c->lr=0x801F63FCu; f_801F99D4(c); // 801F63F8
  c->lr=0x801F6400u; f_801F9B9C(c); // 801F63FC
  c->r[29]=c->r[3]|c->r[3]; // 801F6400
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F6404
  if (!crb(c,2)) { goto L_801F6450; } // 801F6408
  c->r[3]=c->r[1]+0x00000014u; // 801F640C
  {uint32_t ea=c->r[2]+0xFFFF95C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6410
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F6414
  c->f[3]=c->f[2]; // 801F6418
  c->lr=0x801F6420u; f_8004E34C(c); // 801F641C
  c->r[4]=c->r[3]|c->r[3]; // 801F6420
  c->r[3]=c->r[1]+0x0000002Cu; // 801F6424
  c->lr=0x801F642Cu; f_8004A65C(c); // 801F6428
  c->r[3]=c->r[1]+0x00000008u; // 801F642C
  {uint32_t ea=c->r[2]+0xFFFF95CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6430
  {uint32_t ea=c->r[2]+0xFFFF959Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F6434
  c->f[3]=c->f[2]; // 801F6438
  c->lr=0x801F6440u; f_8004E34C(c); // 801F643C
  c->r[4]=c->r[3]|c->r[3]; // 801F6440
  c->r[3]=c->r[1]+0x00000020u; // 801F6444
  c->lr=0x801F644Cu; f_8004A65C(c); // 801F6448
  goto L_801F646C; // 801F644C
L_801F6450:;
  c->r[3]=c->r[1]+0x0000002Cu; // 801F6450
  c->r[31]=0u+0x804C0000u; // 801F6454
  c->r[4]=c->r[31]+0x000024A0u; // 801F6458
  c->lr=0x801F6460u; f_8004A65C(c); // 801F645C
  c->r[3]=c->r[1]+0x00000020u; // 801F6460
  c->r[4]=c->r[31]+0x000024A0u; // 801F6464
  c->lr=0x801F646Cu; f_8004A65C(c); // 801F6468
L_801F646C:;
  c->r[3]=c->r[28]|c->r[28]; // 801F646C
  c->r[4]=c->r[30]|c->r[30]; // 801F6470
  c->r[5]=c->r[1]+0x00000038u; // 801F6474
  c->lr=0x801F647Cu; f_801F98BC(c); // 801F6478
  c->r[3]=c->r[1]+0x00000038u; // 801F647C
  c->r[4]=c->r[1]+0x0000002Cu; // 801F6480
  c->lr=0x801F6488u; f_8009CB30(c); // 801F6484
  c->r[3]=R32(c->r[27]+0x000000C8u); // 801F6488
  c->r[4]=c->r[1]+0x00000038u; // 801F648C
  c->lr=0x801F6494u; f_8014CA74(c); // 801F6490
  c->r[3]=R32(c->r[27]+0x000000CCu); // 801F6494
  c->r[4]=c->r[30]|c->r[30]; // 801F6498
  c->r[5]=0u+0x00000003u; // 801F649C
  c->lr=0x801F64A4u; f_8012E640(c); // 801F64A0
  cmps(c,0,(int32_t)c->r[29],7); // 801F64A4
  if (!crb(c,2)) { goto L_801F64BC; } // 801F64A8
  c->r[3]=R32(c->r[27]+0x000000D0u); // 801F64AC
  c->r[4]=0u+0x00000000u; // 801F64B0
  c->lr=0x801F64B8u; f_8019C940(c); // 801F64B4
  goto L_801F6504; // 801F64B8
L_801F64BC:;
  c->r[3]=R32(c->r[27]+0x000000D0u); // 801F64BC
  c->r[4]=0u+0x00000001u; // 801F64C0
  c->lr=0x801F64C8u; f_8019C940(c); // 801F64C4
  c->r[3]=c->r[28]|c->r[28]; // 801F64C8
  c->r[4]=c->r[29]|c->r[29]; // 801F64CC
  c->r[5]=c->r[1]+0x00000038u; // 801F64D0
  c->lr=0x801F64D8u; f_801F98BC(c); // 801F64D4
  c->r[3]=c->r[1]+0x00000038u; // 801F64D8
  c->r[4]=c->r[1]+0x00000020u; // 801F64DC
  c->lr=0x801F64E4u; f_8009CB30(c); // 801F64E0
  c->r[3]=R32(c->r[27]+0x000000D0u); // 801F64E4
  c->r[4]=c->r[1]+0x00000038u; // 801F64E8
  c->lr=0x801F64F0u; f_801F68A4(c); // 801F64EC
  c->r[3]=R32(c->r[27]+0x000000D0u); // 801F64F0
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F64F4
  c->r[12]=R32(c->r[12]+0x00000020u); // 801F64F8
  c->ctr=c->r[12]; // 801F64FC
  if (true) { c->lr=0x801F6504u; dispatch(c,c->ctr); } // 801F6500
L_801F6504:;
  c->r[30]=0u+0x00000000u; // 801F6504
  c->r[31]=c->r[27]|c->r[27]; // 801F6508
L_801F650C:;
  c->r[3]=c->r[28]|c->r[28]; // 801F650C
  c->r[4]=c->r[30]|c->r[30]; // 801F6510
  c->r[5]=c->r[1]+0x00000038u; // 801F6514
  c->lr=0x801F651Cu; f_801F98E8(c); // 801F6518
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801F651C
  c->r[4]=c->r[1]+0x00000038u; // 801F6520
  c->lr=0x801F6528u; f_8014CA74(c); // 801F6524
  c->r[31]=c->r[31]+0x00000004u; // 801F6528
  c->r[30]=c->r[30]+0x00000001u; // 801F652C
  cmps(c,0,(int32_t)c->r[30],4); // 801F6530
  if (crb(c,0)) { IRQCHK(c); goto L_801F650C; } // 801F6534
  c->r[31]=0u+0x00000000u; // 801F6538
L_801F653C:;
  c->r[3]=c->r[28]|c->r[28]; // 801F653C
  c->r[4]=c->r[31]|c->r[31]; // 801F6540
  c->r[5]=c->r[1]+0x00000038u; // 801F6544
  c->lr=0x801F654Cu; f_801F9914(c); // 801F6548
  c->r[3]=R32(c->r[27]+0x000000E4u); // 801F654C
  c->r[4]=c->r[1]+0x00000038u; // 801F6550
  c->lr=0x801F6558u; f_8014CA74(c); // 801F6554
  c->r[27]=c->r[27]+0x00000004u; // 801F6558
  c->r[31]=c->r[31]+0x00000001u; // 801F655C
  cmps(c,0,(int32_t)c->r[31],9); // 801F6560
  if (crb(c,0)) { IRQCHK(c); goto L_801F653C; } // 801F6564
  c->r[11]=c->r[1]+0x00000060u; // 801F6568
  c->lr=0x801F6570u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801F656C
  c->r[0]=R32(c->r[1]+0x00000064u); // 801F6570
  c->lr=c->r[0]; // 801F6574
  c->r[1]=c->r[1]+0x00000060u; // 801F6578
  return; // 801F657C
}

// fn_801F6580
void f_801F6580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6580
  c->r[0]=c->lr; // 801F6584
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F658C
  c->r[31]=c->r[3]|c->r[3]; // 801F6590
  c->lr=0x801F6598u; f_801F63AC(c); // 801F6594
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801F6598
  c->lr=0x801F65A0u; f_801F5908(c); // 801F659C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F65A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F65A4
  c->lr=c->r[0]; // 801F65A8
  c->r[1]=c->r[1]+0x00000010u; // 801F65AC
  return; // 801F65B0
}

// fn_801F65B4
void f_801F65B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F65B4
  c->r[0]=c->lr; // 801F65B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F65BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F65C0
  c->r[31]=c->r[3]|c->r[3]; // 801F65C4
  c->lr=0x801F65CCu; f_8012FAAC(c); // 801F65C8
  c->r[3]=0u+0x80470000u; // 801F65CC
  c->r[0]=c->r[3]+0x00005880u; // 801F65D0
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F65D4
  c->r[0]=0u+0x00000000u; // 801F65D8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801F65DC
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F65E0
  c->r[3]=c->r[31]|c->r[31]; // 801F65E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F65E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F65EC
  c->lr=c->r[0]; // 801F65F0
  c->r[1]=c->r[1]+0x00000010u; // 801F65F4
  return; // 801F65F8
}

// fn_801F65FC
void f_801F65FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F65FC
  c->r[0]=c->lr; // 801F6600
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F6604
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F6608
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F660C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F6610
  c->r[29]=c->r[3]|c->r[3]; // 801F6614
  c->lr=0x801F661Cu; f_80056B5C(c); // 801F6618
  c->r[30]=c->r[3]|c->r[3]; // 801F661C
  c->lr=0x801F6624u; f_801F1340(c); // 801F6620
  c->lr=0x801F6628u; f_80056B54(c); // 801F6624
  c->r[3]=0u+0x00000B28u; // 801F6628
  c->lr=0x801F6630u; f_80047B64(c); // 801F662C
  c->r[31]=c->r[3]|c->r[3]; // 801F6630
  cmps(c,0,(int32_t)c->r[3],0); // 801F6634
  if (crb(c,2)) { goto L_801F6640; } // 801F6638
  c->lr=0x801F6640u; f_801F6AB4(c); // 801F663C
L_801F6640:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801F6640
  c->r[3]=c->r[30]|c->r[30]; // 801F6644
  c->lr=0x801F664Cu; f_80056B54(c); // 801F6648
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801F664C
  c->r[4]=0u+0x00000000u; // 801F6650
  c->lr=0x801F6658u; f_80114AE0(c); // 801F6654
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801F6658
  c->r[4]=0u+0x00000000u; // 801F665C
  c->lr=0x801F6664u; f_801169C8(c); // 801F6660
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801F6664
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F6668
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F666C
  c->ctr=c->r[12]; // 801F6670
  if (true) { c->lr=0x801F6678u; dispatch(c,c->ctr); } // 801F6674
  c->lr=0x801F667Cu; f_80056B5C(c); // 801F6678
  c->r[30]=c->r[3]|c->r[3]; // 801F667C
  c->lr=0x801F6684u; f_801F1340(c); // 801F6680
  c->lr=0x801F6688u; f_80056B54(c); // 801F6684
  c->r[3]=0u+0x00000B28u; // 801F6688
  c->lr=0x801F6690u; f_80047B64(c); // 801F668C
  c->r[31]=c->r[3]|c->r[3]; // 801F6690
  cmps(c,0,(int32_t)c->r[3],0); // 801F6694
  if (crb(c,2)) { goto L_801F66A0; } // 801F6698
  c->lr=0x801F66A0u; f_801F6A58(c); // 801F669C
L_801F66A0:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801F66A0
  c->r[3]=c->r[30]|c->r[30]; // 801F66A4
  c->lr=0x801F66ACu; f_80056B54(c); // 801F66A8
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801F66AC
  c->r[4]=0u+0x00000000u; // 801F66B0
  c->lr=0x801F66B8u; f_80114AE0(c); // 801F66B4
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801F66B8
  c->r[4]=0u+0x00000000u; // 801F66BC
  c->lr=0x801F66C4u; f_801169C8(c); // 801F66C0
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801F66C4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F66C8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801F66CC
  c->ctr=c->r[12]; // 801F66D0
  if (true) { c->lr=0x801F66D8u; dispatch(c,c->ctr); } // 801F66D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F66D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F66DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F66E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F66E4
  c->lr=c->r[0]; // 801F66E8
  c->r[1]=c->r[1]+0x00000020u; // 801F66EC
  return; // 801F66F0
}

// fn_801F66F4
void f_801F66F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F66F4
  c->r[0]=c->lr; // 801F66F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F66FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6700
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F6704
  c->r[30]=c->r[3]|c->r[3]; // 801F6708
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801F670C
  cmps(c,0,(int32_t)c->r[3],0); // 801F6710
  if (crb(c,2)) { goto L_801F6768; } // 801F6714
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F6718
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F671C
  c->ctr=c->r[12]; // 801F6720
  if (true) { c->lr=0x801F6728u; dispatch(c,c->ctr); } // 801F6724
  c->lr=0x801F672Cu; f_80056B5C(c); // 801F6728
  c->r[31]=c->r[3]|c->r[3]; // 801F672C
  c->lr=0x801F6734u; f_801F1340(c); // 801F6730
  c->lr=0x801F6738u; f_80056B54(c); // 801F6734
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801F6738
  cmps(c,0,(int32_t)c->r[3],0); // 801F673C
  if (crb(c,2)) { goto L_801F6758; } // 801F6740
  c->r[4]=0u+0x00000001u; // 801F6744
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F6748
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F674C
  c->ctr=c->r[12]; // 801F6750
  if (true) { c->lr=0x801F6758u; dispatch(c,c->ctr); } // 801F6754
L_801F6758:;
  c->r[3]=c->r[31]|c->r[31]; // 801F6758
  c->lr=0x801F6760u; f_80056B54(c); // 801F675C
  c->r[0]=0u+0x00000000u; // 801F6760
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801F6764
L_801F6768:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801F6768
  cmps(c,0,(int32_t)c->r[3],0); // 801F676C
  if (crb(c,2)) { goto L_801F67C4; } // 801F6770
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F6774
  c->r[12]=R32(c->r[12]+0x00000060u); // 801F6778
  c->ctr=c->r[12]; // 801F677C
  if (true) { c->lr=0x801F6784u; dispatch(c,c->ctr); } // 801F6780
  c->lr=0x801F6788u; f_80056B5C(c); // 801F6784
  c->r[31]=c->r[3]|c->r[3]; // 801F6788
  c->lr=0x801F6790u; f_801F1340(c); // 801F678C
  c->lr=0x801F6794u; f_80056B54(c); // 801F6790
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801F6794
  cmps(c,0,(int32_t)c->r[3],0); // 801F6798
  if (crb(c,2)) { goto L_801F67B4; } // 801F679C
  c->r[4]=0u+0x00000001u; // 801F67A0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801F67A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F67A8
  c->ctr=c->r[12]; // 801F67AC
  if (true) { c->lr=0x801F67B4u; dispatch(c,c->ctr); } // 801F67B0
L_801F67B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801F67B4
  c->lr=0x801F67BCu; f_80056B54(c); // 801F67B8
  c->r[0]=0u+0x00000000u; // 801F67BC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801F67C0
L_801F67C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F67C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F67C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F67CC
  c->lr=c->r[0]; // 801F67D0
  c->r[1]=c->r[1]+0x00000010u; // 801F67D4
  return; // 801F67D8
}

// fn_801F67DC
void f_801F67DC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801F67DC
  return; // 801F67E0
}

// fn_801F67E4
void f_801F67E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801F67E4
  return; // 801F67E8
}

// fn_801F67EC
void f_801F67EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F67EC
  c->r[0]=c->lr; // 801F67F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F67F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F67F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F67FC
  c->r[30]=c->r[3]|c->r[3]; // 801F6800
  c->r[31]=c->r[4]|c->r[4]; // 801F6804
  cmps(c,0,(int32_t)c->r[3],0); // 801F6808
  if (crb(c,2)) { goto L_801F682C; } // 801F680C
  c->r[4]=0u+0x00000000u; // 801F6810
  c->lr=0x801F6818u; f_8012FB1C(c); // 801F6814
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F6818
  cmps(c,0,(int32_t)c->r[0],0); // 801F681C
  if (!crb(c,1)) { goto L_801F682C; } // 801F6820
  c->r[3]=c->r[30]|c->r[30]; // 801F6824
  c->lr=0x801F682Cu; f_80047B20(c); // 801F6828
L_801F682C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F682C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6830
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F6834
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6838
  c->lr=c->r[0]; // 801F683C
  c->r[1]=c->r[1]+0x00000010u; // 801F6840
  return; // 801F6844
}

// fn_801F6848
void f_801F6848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6848
  c->r[0]=c->lr; // 801F684C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6854
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F6858
  c->r[30]=c->r[3]|c->r[3]; // 801F685C
  c->r[31]=c->r[4]|c->r[4]; // 801F6860
  cmps(c,0,(int32_t)c->r[3],0); // 801F6864
  if (crb(c,2)) { goto L_801F6888; } // 801F6868
  c->r[4]=0u+0x00000000u; // 801F686C
  c->lr=0x801F6874u; f_8012FB1C(c); // 801F6870
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F6874
  cmps(c,0,(int32_t)c->r[0],0); // 801F6878
  if (!crb(c,1)) { goto L_801F6888; } // 801F687C
  c->r[3]=c->r[30]|c->r[30]; // 801F6880
  c->lr=0x801F6888u; f_80047B20(c); // 801F6884
L_801F6888:;
  c->r[3]=c->r[30]|c->r[30]; // 801F6888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F688C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F6890
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6894
  c->lr=c->r[0]; // 801F6898
  c->r[1]=c->r[1]+0x00000010u; // 801F689C
  return; // 801F68A0
}

// fn_801F68A4
void f_801F68A4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000020Cu; // 801F68A4
  f_8004A65C(c); return; // 801F68A8
}

// fn_801F68AC
void f_801F68AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F68AC
  c->r[0]=c->lr; // 801F68B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F68B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F68B8
  c->r[31]=c->r[3]|c->r[3]; // 801F68BC
  c->lr=0x801F68C4u; f_80131A40(c); // 801F68C0
  c->r[3]=0u+0x80470000u; // 801F68C4
  c->r[0]=c->r[3]+0x000059D0u; // 801F68C8
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F68CC
  c->r[3]=c->r[31]|c->r[31]; // 801F68D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F68D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F68D8
  c->lr=c->r[0]; // 801F68DC
  c->r[1]=c->r[1]+0x00000010u; // 801F68E0
  return; // 801F68E4
}

// fn_801F68E8
void f_801F68E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F68E8
  c->r[0]=c->lr; // 801F68EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F68F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F68F4
  c->r[31]=c->r[3]|c->r[3]; // 801F68F8
  c->lr=0x801F6900u; f_8012F740(c); // 801F68FC
  c->r[3]=0u+0x80470000u; // 801F6900
  c->r[3]=c->r[3]+0x00005A5Cu; // 801F6904
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F6908
  c->r[0]=c->r[3]+0x0000000Cu; // 801F690C
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F6910
  c->r[0]=c->r[3]+0x00000018u; // 801F6914
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F6918
  c->r[0]=c->r[3]+0x00000024u; // 801F691C
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F6920
  c->r[0]=c->r[3]+0x00000030u; // 801F6924
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F6928
  c->r[3]=c->r[31]|c->r[31]; // 801F692C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6930
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6934
  c->lr=c->r[0]; // 801F6938
  c->r[1]=c->r[1]+0x00000010u; // 801F693C
  return; // 801F6940
}

// fn_801F6944
void f_801F6944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6944
  c->r[0]=c->lr; // 801F6948
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F694C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6950
  c->r[31]=c->r[3]|c->r[3]; // 801F6954
  c->lr=0x801F695Cu; f_8012F740(c); // 801F6958
  c->r[3]=0u+0x80470000u; // 801F695C
  c->r[3]=c->r[3]+0x00005DDCu; // 801F6960
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F6964
  c->r[0]=c->r[3]+0x0000000Cu; // 801F6968
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F696C
  c->r[0]=c->r[3]+0x00000018u; // 801F6970
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F6974
  c->r[0]=c->r[3]+0x00000024u; // 801F6978
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F697C
  c->r[0]=c->r[3]+0x00000030u; // 801F6980
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F6984
  c->r[3]=c->r[31]|c->r[31]; // 801F6988
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F698C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6990
  c->lr=c->r[0]; // 801F6994
  c->r[1]=c->r[1]+0x00000010u; // 801F6998
  return; // 801F699C
}

