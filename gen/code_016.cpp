#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800DC158
void f_800DC158(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC158
  c->r[0]=c->lr; // 800DC15C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC160
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC164
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC168
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC16C
  c->r[31]=c->r[3]|c->r[3]; // 800DC170
  c->r[0]=R32(c->r[3]+0x00001EB0u); // 800DC174
  cmps(c,0,(int32_t)c->r[0],2); // 800DC178
  if (crb(c,2)) { goto L_800DC258; } // 800DC17C
  if (!crb(c,0)) { goto L_800DC194; } // 800DC180
  cmps(c,0,(int32_t)c->r[0],0); // 800DC184
  if (crb(c,2)) { goto L_800DC1A4; } // 800DC188
  if (!crb(c,0)) { goto L_800DC200; } // 800DC18C
  goto L_800DC404; // 800DC190
L_800DC194:;
  cmps(c,0,(int32_t)c->r[0],4); // 800DC194
  if (crb(c,2)) { goto L_800DC3B0; } // 800DC198
  if (!crb(c,0)) { goto L_800DC404; } // 800DC19C
  goto L_800DC30C; // 800DC1A0
L_800DC1A4:;
  c->r[0]=R32(c->r[3]+0x00001EB4u); // 800DC1A4
  cmps(c,0,(int32_t)c->r[0],0); // 800DC1A8
  if (crb(c,0)) { goto L_800DC404; } // 800DC1AC
  c->lr=0x800DC1B4u; f_800A23BC(c); // 800DC1B0
  c->lr=0x800DC1B8u; f_800BB828(c); // 800DC1B4
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800DC1B8
  c->lr=0x800DC1C0u; f_800BB9DC(c); // 800DC1BC
  c->r[30]=c->r[3]|c->r[3]; // 800DC1C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC1C4
  if (crb(c,2)) { goto L_800DC1F4; } // 800DC1C8
  c->lr=0x800DC1D0u; f_800A23BC(c); // 800DC1CC
  c->lr=0x800DC1D4u; f_800BB828(c); // 800DC1D0
  c->r[4]=c->r[30]|c->r[30]; // 800DC1D4
  c->lr=0x800DC1DCu; f_800BB99C(c); // 800DC1D8
  c->lr=0x800DC1E0u; f_800CFA64(c); // 800DC1DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC1E0
  if (crb(c,2)) { goto L_800DC404; } // 800DC1E4
  c->r[0]=0u+0xFFFFFFFFu; // 800DC1E8
  W32(c->r[31]+0x00001EB4u,c->r[0]); // 800DC1EC
  goto L_800DC404; // 800DC1F0
L_800DC1F4:;
  c->r[0]=0u+0xFFFFFFFFu; // 800DC1F4
  W32(c->r[31]+0x00001EB4u,c->r[0]); // 800DC1F8
  goto L_800DC404; // 800DC1FC
L_800DC200:;
  c->lr=0x800DC204u; f_800A23BC(c); // 800DC200
  c->lr=0x800DC208u; f_800BB828(c); // 800DC204
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800DC208
  c->lr=0x800DC210u; f_800BB9DC(c); // 800DC20C
  c->r[30]=c->r[3]|c->r[3]; // 800DC210
  cmps(c,0,(int32_t)c->r[3],0); // 800DC214
  if (crb(c,2)) { goto L_800DC24C; } // 800DC218
  c->lr=0x800DC220u; f_800A23BC(c); // 800DC21C
  c->lr=0x800DC224u; f_800BB828(c); // 800DC220
  c->r[4]=c->r[30]|c->r[30]; // 800DC224
  c->lr=0x800DC22Cu; f_800BB99C(c); // 800DC228
  {uint32_t ea=c->r[2]+0xFFFF8924u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC22C
  c->lr=0x800DC234u; f_800E18FC(c); // 800DC230
  c->lr=0x800DC238u; f_800A23BC(c); // 800DC234
  c->lr=0x800DC23Cu; f_800BB828(c); // 800DC238
  c->r[4]=c->r[30]|c->r[30]; // 800DC23C
  c->lr=0x800DC244u; f_800BB99C(c); // 800DC240
  {uint32_t ea=c->r[31]+0x00001EC0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC244
  c->lr=0x800DC24Cu; f_800E190C(c); // 800DC248
L_800DC24C:;
  c->r[0]=0u+0x00000002u; // 800DC24C
  W32(c->r[31]+0x00001EB0u,c->r[0]); // 800DC250
  goto L_800DC404; // 800DC254
L_800DC258:;
  c->lr=0x800DC25Cu; f_800A23BC(c); // 800DC258
  c->lr=0x800DC260u; f_800BB828(c); // 800DC25C
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800DC260
  c->lr=0x800DC268u; f_800BB9DC(c); // 800DC264
  c->r[30]=c->r[3]|c->r[3]; // 800DC268
  cmps(c,0,(int32_t)c->r[3],0); // 800DC26C
  if (crb(c,2)) { goto L_800DC2E8; } // 800DC270
  c->r[29]=0u+0x00000000u; // 800DC274
  c->lr=0x800DC27Cu; f_800A23BC(c); // 800DC278
  c->lr=0x800DC280u; f_800BB828(c); // 800DC27C
  c->r[4]=c->r[30]|c->r[30]; // 800DC280
  c->lr=0x800DC288u; f_800BB99C(c); // 800DC284
  c->lr=0x800DC28Cu; f_800CFA64(c); // 800DC288
  cmps(c,0,(int32_t)c->r[3],0); // 800DC28C
  if (crb(c,2)) { goto L_800DC298; } // 800DC290
  c->r[29]=0u+0x00000001u; // 800DC294
L_800DC298:;
  c->lr=0x800DC29Cu; f_800A23BC(c); // 800DC298
  c->lr=0x800DC2A0u; f_800BB828(c); // 800DC29C
  c->r[4]=c->r[30]|c->r[30]; // 800DC2A0
  c->lr=0x800DC2A8u; f_800BB99C(c); // 800DC2A4
  c->lr=0x800DC2ACu; f_800CFA90(c); // 800DC2A8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC2AC
  if (crb(c,2)) { goto L_800DC2B8; } // 800DC2B0
  c->r[29]=0u+0x00000001u; // 800DC2B4
L_800DC2B8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DC2B8
  if (crb(c,2)) { goto L_800DC404; } // 800DC2BC
  c->lr=0x800DC2C4u; f_800A23BC(c); // 800DC2C0
  c->lr=0x800DC2C8u; f_800BB828(c); // 800DC2C4
  c->r[4]=c->r[30]|c->r[30]; // 800DC2C8
  c->lr=0x800DC2D0u; f_800BB99C(c); // 800DC2CC
  c->r[4]=0u+0x00000000u; // 800DC2D0
  c->lr=0x800DC2D8u; f_800BE370(c); // 800DC2D4
  c->lr=0x800DC2DCu; f_800A23BC(c); // 800DC2D8
  c->lr=0x800DC2E0u; f_800BB828(c); // 800DC2DC
  c->r[4]=c->r[30]|c->r[30]; // 800DC2E0
  c->lr=0x800DC2E8u; f_800E1BF4(c); // 800DC2E4
L_800DC2E8:;
  c->r[0]=R32(c->r[31]+0x00001EB4u); // 800DC2E8
  cmps(c,0,(int32_t)c->r[0],0); // 800DC2EC
  if (crb(c,0)) { goto L_800DC300; } // 800DC2F0
  c->r[0]=0u+0x00000003u; // 800DC2F4
  W32(c->r[31]+0x00001EB0u,c->r[0]); // 800DC2F8
  goto L_800DC404; // 800DC2FC
L_800DC300:;
  c->r[0]=0u+0x00000000u; // 800DC300
  W32(c->r[31]+0x00001EB0u,c->r[0]); // 800DC304
  goto L_800DC404; // 800DC308
L_800DC30C:;
  c->lr=0x800DC310u; f_800A23BC(c); // 800DC30C
  c->lr=0x800DC314u; f_800A23C8(c); // 800DC310
  c->lr=0x800DC318u; f_800CDEF0(c); // 800DC314
  cmps(c,0,(int32_t)c->r[3],0); // 800DC318
  if (!crb(c,2)) { goto L_800DC330; } // 800DC31C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DC320
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 800DC324
  cmps(c,0,(int32_t)c->r[0],0); // 800DC328
  if (!crb(c,2)) { goto L_800DC404; } // 800DC32C
L_800DC330:;
  c->r[30]=R32(c->r[31]+0x00001EB4u); // 800DC330
  cmps(c,0,(int32_t)c->r[30],0); // 800DC334
  if (!crb(c,0)) { goto L_800DC348; } // 800DC338
  c->r[0]=0u+0x00000000u; // 800DC33C
  W32(c->r[31]+0x00001EB0u,c->r[0]); // 800DC340
  goto L_800DC404; // 800DC344
L_800DC348:;
  c->lr=0x800DC34Cu; f_800A23BC(c); // 800DC348
  c->lr=0x800DC350u; f_800BB828(c); // 800DC34C
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800DC350
  c->r[5]=c->r[30]|c->r[30]; // 800DC354
  c->r[6]=0u+0x00000000u; // 800DC358
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC35C
  c->lr=0x800DC364u; f_800E1ABC(c); // 800DC360
  c->r[30]=c->r[3]|c->r[3]; // 800DC364
  cmps(c,0,(int32_t)c->r[3],0); // 800DC368
  if (crb(c,2)) { goto L_800DC3A8; } // 800DC36C
  c->lr=0x800DC374u; f_800A23BC(c); // 800DC370
  c->lr=0x800DC378u; f_800BB828(c); // 800DC374
  c->r[4]=c->r[30]|c->r[30]; // 800DC378
  c->lr=0x800DC380u; f_800BB99C(c); // 800DC37C
  c->r[4]=0u+0x00000001u; // 800DC380
  c->lr=0x800DC388u; f_800BE370(c); // 800DC384
  c->lr=0x800DC38Cu; f_800A23BC(c); // 800DC388
  c->lr=0x800DC390u; f_800BB828(c); // 800DC38C
  c->r[4]=c->r[30]|c->r[30]; // 800DC390
  c->lr=0x800DC398u; f_800BB99C(c); // 800DC394
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC398
  c->lr=0x800DC3A0u; f_800E18E8(c); // 800DC39C
  c->r[0]=0u+0xFFFFFFFFu; // 800DC3A0
  W32(c->r[31]+0x00001EB4u,c->r[0]); // 800DC3A4
L_800DC3A8:;
  c->r[0]=0u+0x00000004u; // 800DC3A8
  W32(c->r[31]+0x00001EB0u,c->r[0]); // 800DC3AC
L_800DC3B0:;
  c->lr=0x800DC3B4u; f_800A23BC(c); // 800DC3B0
  c->lr=0x800DC3B8u; f_800BB828(c); // 800DC3B4
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800DC3B8
  c->lr=0x800DC3C0u; f_800BB9DC(c); // 800DC3BC
  c->r[30]=c->r[3]|c->r[3]; // 800DC3C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC3C4
  if (crb(c,2)) { goto L_800DC3FC; } // 800DC3C8
  c->lr=0x800DC3D0u; f_800A23BC(c); // 800DC3CC
  c->lr=0x800DC3D4u; f_800BB828(c); // 800DC3D0
  c->r[4]=c->r[30]|c->r[30]; // 800DC3D4
  c->lr=0x800DC3DCu; f_800BB99C(c); // 800DC3D8
  {uint32_t ea=c->r[31]+0x00001EB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC3DC
  c->lr=0x800DC3E4u; f_800E18FC(c); // 800DC3E0
  c->lr=0x800DC3E8u; f_800A23BC(c); // 800DC3E4
  c->lr=0x800DC3ECu; f_800BB828(c); // 800DC3E8
  c->r[4]=c->r[30]|c->r[30]; // 800DC3EC
  c->lr=0x800DC3F4u; f_800BB99C(c); // 800DC3F0
  {uint32_t ea=c->r[31]+0x00001EBCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC3F4
  c->lr=0x800DC3FCu; f_800E190C(c); // 800DC3F8
L_800DC3FC:;
  c->r[0]=0u+0x00000000u; // 800DC3FC
  W32(c->r[31]+0x00001EB0u,c->r[0]); // 800DC400
L_800DC404:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC404
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DC408
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DC40C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC410
  c->lr=c->r[0]; // 800DC414
  c->r[1]=c->r[1]+0x00000020u; // 800DC418
  return; // 800DC41C
}

// fn_800DC420
void f_800DC420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC420
  c->r[0]=c->lr; // 800DC424
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DC428
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DC42C
  W32(c->r[1]+0x00000048u,c->r[30]); // 800DC430
  cmps(c,0,(int32_t)c->r[4],1); // 800DC434
  if (crb(c,2)) { goto L_800DC5F8; } // 800DC438
  if (!crb(c,0)) { goto L_800DC44C; } // 800DC43C
  cmps(c,0,(int32_t)c->r[4],0); // 800DC440
  if (!crb(c,0)) { goto L_800DC458; } // 800DC444
  goto L_800DC678; // 800DC448
L_800DC44C:;
  cmps(c,0,(int32_t)c->r[4],3); // 800DC44C
  if (!crb(c,0)) { goto L_800DC678; } // 800DC450
  goto L_800DC620; // 800DC454
L_800DC458:;
  c->r[3]=c->r[1]+0x00000030u; // 800DC458
  c->lr=0x800DC460u; f_8004B0A4(c); // 800DC45C
  c->r[3]=c->r[1]+0x00000024u; // 800DC460
  c->lr=0x800DC468u; f_8004B0A4(c); // 800DC464
  c->r[3]=c->r[1]+0x00000018u; // 800DC468
  c->lr=0x800DC470u; f_8004B0A4(c); // 800DC46C
  c->r[3]=c->r[1]+0x0000000Cu; // 800DC470
  c->lr=0x800DC478u; f_8004B0A4(c); // 800DC474
  c->lr=0x800DC47Cu; f_800A23BC(c); // 800DC478
  c->lr=0x800DC480u; f_800BB700(c); // 800DC47C
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DC480
  c->lr=0x800DC488u; f_800BBEA4(c); // 800DC484
  c->r[30]=c->r[3]|c->r[3]; // 800DC488
  c->lr=0x800DC490u; f_800A23BC(c); // 800DC48C
  c->lr=0x800DC494u; f_800BB700(c); // 800DC490
  c->r[4]=c->r[30]|c->r[30]; // 800DC494
  c->lr=0x800DC49Cu; f_800BBE64(c); // 800DC498
  c->lr=0x800DC4A0u; f_800CA330(c); // 800DC49C
  c->r[31]=c->r[3]|c->r[3]; // 800DC4A0
  c->r[4]=c->r[1]+0x00000018u; // 800DC4A4
  c->r[5]=c->r[1]+0x0000000Cu; // 800DC4A8
  c->r[6]=c->r[1]+0x00000008u; // 800DC4AC
  c->lr=0x800DC4B4u; f_8006E40C(c); // 800DC4B0
  c->r[3]=c->r[31]|c->r[31]; // 800DC4B4
  c->lr=0x800DC4BCu; f_800CFB60(c); // 800DC4B8
  c->r[3]=c->r[1]+0x00000030u; // 800DC4BC
  c->r[4]=c->r[1]+0x0000000Cu; // 800DC4C0
  c->lr=0x800DC4C8u; f_8004A65C(c); // 800DC4C4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC4C8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800DC4CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC4D0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 800DC4D4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC4D8
  {uint32_t ea=c->r[2]+0xFFFF8858u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC4DC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800DC4E0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DC4E4
  c->r[3]=c->r[31]|c->r[31]; // 800DC4E8
  c->r[4]=0u+0x00000040u; // 800DC4EC
  c->lr=0x800DC4F4u; f_8005EE5C(c); // 800DC4F0
  c->lr=0x800DC4F8u; f_800A23BC(c); // 800DC4F4
  c->lr=0x800DC4FCu; f_800BB700(c); // 800DC4F8
  c->r[4]=c->r[30]|c->r[30]; // 800DC4FC
  c->lr=0x800DC504u; f_800BBE64(c); // 800DC500
  c->r[4]=0u+0x00000000u; // 800DC504
  c->lr=0x800DC50Cu; f_800D2748(c); // 800DC508
  c->lr=0x800DC510u; f_800A23BC(c); // 800DC50C
  c->lr=0x800DC514u; f_800BB700(c); // 800DC510
  c->r[4]=c->r[30]|c->r[30]; // 800DC514
  c->lr=0x800DC51Cu; f_800BBE64(c); // 800DC518
  c->r[4]=c->r[1]+0x00000018u; // 800DC51C
  c->lr=0x800DC524u; f_800BB27C(c); // 800DC520
  c->lr=0x800DC528u; f_800A23BC(c); // 800DC524
  c->lr=0x800DC52Cu; f_800BB700(c); // 800DC528
  c->r[4]=c->r[30]|c->r[30]; // 800DC52C
  c->lr=0x800DC534u; f_800BBE64(c); // 800DC530
  c->r[4]=c->r[1]+0x00000030u; // 800DC534
  c->lr=0x800DC53Cu; f_800BB528(c); // 800DC538
  c->lr=0x800DC540u; f_800A23BC(c); // 800DC53C
  c->lr=0x800DC544u; f_800BB700(c); // 800DC540
  c->r[4]=c->r[30]|c->r[30]; // 800DC544
  c->lr=0x800DC54Cu; f_800BBE64(c); // 800DC548
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC54C
  c->lr=0x800DC554u; f_800BB5B0(c); // 800DC550
  c->lr=0x800DC558u; f_800A23BC(c); // 800DC554
  c->lr=0x800DC55Cu; f_800BB700(c); // 800DC558
  c->r[4]=c->r[30]|c->r[30]; // 800DC55C
  c->lr=0x800DC564u; f_800BBE64(c); // 800DC560
  c->r[4]=c->r[1]+0x00000024u; // 800DC564
  c->lr=0x800DC56Cu; f_800BB56C(c); // 800DC568
  c->lr=0x800DC570u; f_800A23BC(c); // 800DC56C
  c->lr=0x800DC574u; f_800BB700(c); // 800DC570
  c->r[4]=c->r[30]|c->r[30]; // 800DC574
  c->lr=0x800DC57Cu; f_800BBE64(c); // 800DC578
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC57C
  c->lr=0x800DC584u; f_800D2488(c); // 800DC580
  c->lr=0x800DC588u; f_8007B524(c); // 800DC584
  c->lr=0x800DC58Cu; f_800A104C(c); // 800DC588
  cmps(c,0,(int32_t)c->r[3],0); // 800DC58C
  if (crb(c,2)) { goto L_800DC5C4; } // 800DC590
  c->lr=0x800DC598u; f_8007B524(c); // 800DC594
  c->lr=0x800DC59Cu; f_800A105C(c); // 800DC598
  cmps(c,0,(int32_t)c->r[3],0); // 800DC59C
  if (!crb(c,2)) { goto L_800DC5B4; } // 800DC5A0
  c->lr=0x800DC5A8u; f_800A23BC(c); // 800DC5A4
  c->r[4]=0u+0x00000004u; // 800DC5A8
  c->lr=0x800DC5B0u; f_800E2ED0(c); // 800DC5AC
  goto L_800DC5D0; // 800DC5B0
L_800DC5B4:;
  c->lr=0x800DC5B8u; f_800A23BC(c); // 800DC5B4
  c->r[4]=0u+0x00000002u; // 800DC5B8
  c->lr=0x800DC5C0u; f_800E2ED0(c); // 800DC5BC
  goto L_800DC5D0; // 800DC5C0
L_800DC5C4:;
  c->lr=0x800DC5C8u; f_800A23BC(c); // 800DC5C4
  c->r[4]=0u+0x00000002u; // 800DC5C8
  c->lr=0x800DC5D0u; f_800E2ED0(c); // 800DC5CC
L_800DC5D0:;
  c->lr=0x800DC5D4u; f_800A23BC(c); // 800DC5D0
  c->lr=0x800DC5D8u; f_800A23C8(c); // 800DC5D4
  c->r[4]=0u+0x00000007u; // 800DC5D8
  c->lr=0x800DC5E0u; f_800CA898(c); // 800DC5DC
  c->lr=0x800DC5E4u; f_800A23BC(c); // 800DC5E0
  c->lr=0x800DC5E8u; f_800A23C8(c); // 800DC5E4
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DC5E8
  c->r[5]=0u+0x00000000u; // 800DC5EC
  c->lr=0x800DC5F4u; f_800CE664(c); // 800DC5F0
  goto L_800DC678; // 800DC5F4
L_800DC5F8:;
  c->lr=0x800DC5FCu; f_800A23BC(c); // 800DC5F8
  c->lr=0x800DC600u; f_800A23C8(c); // 800DC5FC
  c->r[4]=0u+0x00000006u; // 800DC600
  c->lr=0x800DC608u; f_800CA898(c); // 800DC604
  c->lr=0x800DC60Cu; f_800A23BC(c); // 800DC608
  c->lr=0x800DC610u; f_800A23C8(c); // 800DC60C
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DC610
  c->r[5]=0u+0x00000000u; // 800DC614
  c->lr=0x800DC61Cu; f_800CE664(c); // 800DC618
  goto L_800DC678; // 800DC61C
L_800DC620:;
  c->lr=0x800DC624u; f_8007B524(c); // 800DC620
  c->lr=0x800DC628u; f_8009DA54(c); // 800DC624
  cmps(c,0,(int32_t)c->r[3],0); // 800DC628
  if (crb(c,2)) { goto L_800DC644; } // 800DC62C
  c->lr=0x800DC634u; f_8007B524(c); // 800DC630
  c->lr=0x800DC638u; f_8009D9FC(c); // 800DC634
  cmps(c,0,(int32_t)c->r[3],0); // 800DC638
  if (crb(c,2)) { goto L_800DC654; } // 800DC63C
  goto L_800DC678; // 800DC640
L_800DC644:;
  c->lr=0x800DC648u; f_8007B524(c); // 800DC644
  c->lr=0x800DC64Cu; f_8009D1CC(c); // 800DC648
  cmps(c,0,(int32_t)c->r[3],0); // 800DC64C
  if (!crb(c,2)) { goto L_800DC678; } // 800DC650
L_800DC654:;
  c->lr=0x800DC658u; f_800A23BC(c); // 800DC654
  c->lr=0x800DC65Cu; f_800A23C8(c); // 800DC658
  c->r[4]=0u+0x0000000Du; // 800DC65C
  c->lr=0x800DC664u; f_800CA898(c); // 800DC660
  c->lr=0x800DC668u; f_800A23BC(c); // 800DC664
  c->lr=0x800DC66Cu; f_800A23C8(c); // 800DC668
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DC66C
  c->r[5]=0u+0x00000000u; // 800DC670
  c->lr=0x800DC678u; f_800CE664(c); // 800DC674
L_800DC678:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DC678
  c->r[30]=R32(c->r[1]+0x00000048u); // 800DC67C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DC680
  c->lr=c->r[0]; // 800DC684
  c->r[1]=c->r[1]+0x00000050u; // 800DC688
  return; // 800DC68C
}

// fn_800DC690
void f_800DC690(Ctx* __restrict c) {
  return; // 800DC690
}

// fn_800DC694
void f_800DC694(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC694
  c->r[0]=c->lr; // 800DC698
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC69C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC6A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC6A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC6A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DC6AC
  c->r[28]=c->r[3]|c->r[3]; // 800DC6B0
  c->r[29]=c->r[4]|c->r[4]; // 800DC6B4
  c->r[30]=c->r[5]|c->r[5]; // 800DC6B8
  c->r[31]=c->r[6]|c->r[6]; // 800DC6BC
  c->lr=0x800DC6C4u; f_800DC878(c); // 800DC6C0
  c->r[3]=c->r[28]|c->r[28]; // 800DC6C4
  c->r[4]=c->r[29]|c->r[29]; // 800DC6C8
  c->r[5]=c->r[30]|c->r[30]; // 800DC6CC
  c->r[6]=c->r[31]|c->r[31]; // 800DC6D0
  c->lr=0x800DC6D8u; f_800BEB6C(c); // 800DC6D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC6D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DC6DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DC6E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DC6E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC6E8
  c->lr=c->r[0]; // 800DC6EC
  c->r[1]=c->r[1]+0x00000020u; // 800DC6F0
  return; // 800DC6F4
}

// fn_800DC6F8
void f_800DC6F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC6F8
  c->r[0]=c->lr; // 800DC6FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC700
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC704
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC708
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC70C
  c->r[31]=c->r[3]|c->r[3]; // 800DC710
  c->r[29]=0u+0x00000000u; // 800DC714
  c->r[30]=c->r[3]+0x00000170u; // 800DC718
L_800DC71C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC71C
  c->lr=0x800DC724u; f_800D68E8(c); // 800DC720
  c->r[30]=c->r[30]+0x00000040u; // 800DC724
  c->r[29]=c->r[29]+0x00000001u; // 800DC728
  cmpu(c,0,c->r[29],0x00000010u); // 800DC72C
  if (crb(c,0)) { IRQCHK(c); goto L_800DC71C; } // 800DC730
  c->r[29]=0u+0x00000000u; // 800DC734
  c->r[30]=c->r[31]+0x0000057Cu; // 800DC738
L_800DC73C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC73C
  c->lr=0x800DC744u; f_800D5FA8(c); // 800DC740
  c->r[30]=c->r[30]+0x0000004Cu; // 800DC744
  c->r[29]=c->r[29]+0x00000001u; // 800DC748
  cmpu(c,0,c->r[29],0x00000020u); // 800DC74C
  if (crb(c,0)) { IRQCHK(c); goto L_800DC73C; } // 800DC750
  c->r[29]=0u+0x00000000u; // 800DC754
  c->r[30]=c->r[31]+0x00000F50u; // 800DC758
L_800DC75C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC75C
  c->lr=0x800DC764u; f_800CF67C(c); // 800DC760
  c->r[30]=c->r[30]+0x00000014u; // 800DC764
  c->r[29]=c->r[29]+0x00000001u; // 800DC768
  cmpu(c,0,c->r[29],0x00000010u); // 800DC76C
  if (crb(c,0)) { IRQCHK(c); goto L_800DC75C; } // 800DC770
  c->r[3]=c->r[31]+0x00001094u; // 800DC774
  c->lr=0x800DC77Cu; f_800CF670(c); // 800DC778
  c->r[29]=0u+0x00000000u; // 800DC77C
  c->r[30]=c->r[31]+0x000010C0u; // 800DC780
L_800DC784:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC784
  c->lr=0x800DC78Cu; f_800CF660(c); // 800DC788
  c->r[30]=c->r[30]+0x00000008u; // 800DC78C
  c->r[29]=c->r[29]+0x00000001u; // 800DC790
  cmpu(c,0,c->r[29],0x00000009u); // 800DC794
  if (crb(c,0)) { IRQCHK(c); goto L_800DC784; } // 800DC798
  c->r[29]=0u+0x00000000u; // 800DC79C
  c->r[30]=c->r[31]+0x0000110Cu; // 800DC7A0
L_800DC7A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC7A4
  c->lr=0x800DC7ACu; f_800CF650(c); // 800DC7A8
  c->r[30]=c->r[30]+0x00000008u; // 800DC7AC
  c->r[29]=c->r[29]+0x00000001u; // 800DC7B0
  cmpu(c,0,c->r[29],0x00000005u); // 800DC7B4
  if (crb(c,0)) { IRQCHK(c); goto L_800DC7A4; } // 800DC7B8
  c->r[29]=0u+0x00000000u; // 800DC7BC
  c->r[30]=c->r[31]+0x00001138u; // 800DC7C0
L_800DC7C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC7C4
  c->lr=0x800DC7CCu; f_800CF638(c); // 800DC7C8
  c->r[30]=c->r[30]+0x00000010u; // 800DC7CC
  c->r[29]=c->r[29]+0x00000001u; // 800DC7D0
  cmpu(c,0,c->r[29],0x00000040u); // 800DC7D4
  if (crb(c,0)) { IRQCHK(c); goto L_800DC7C4; } // 800DC7D8
  c->r[29]=0u+0x00000000u; // 800DC7DC
  c->r[30]=c->r[31]+0x0000153Cu; // 800DC7E0
L_800DC7E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC7E4
  c->lr=0x800DC7ECu; f_800D43CC(c); // 800DC7E8
  c->r[30]=c->r[30]+0x00000048u; // 800DC7EC
  c->r[29]=c->r[29]+0x00000001u; // 800DC7F0
  cmpu(c,0,c->r[29],0x00000008u); // 800DC7F4
  if (crb(c,0)) { IRQCHK(c); goto L_800DC7E4; } // 800DC7F8
  c->r[29]=0u+0x00000000u; // 800DC7FC
  c->r[30]=c->r[31]+0x0000177Cu; // 800DC800
L_800DC804:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC804
  c->lr=0x800DC80Cu; f_800D4934(c); // 800DC808
  c->r[30]=c->r[30]+0x00000034u; // 800DC80C
  c->r[29]=c->r[29]+0x00000001u; // 800DC810
  cmpu(c,0,c->r[29],0x00000008u); // 800DC814
  if (crb(c,0)) { IRQCHK(c); goto L_800DC804; } // 800DC818
  c->r[29]=0u+0x00000000u; // 800DC81C
  c->r[30]=c->r[31]+0x0000199Cu; // 800DC820
L_800DC824:;
  c->r[3]=c->r[30]|c->r[30]; // 800DC824
  c->lr=0x800DC82Cu; f_800D57F0(c); // 800DC828
  c->r[30]=c->r[30]+0x00000050u; // 800DC82C
  c->r[29]=c->r[29]+0x00000001u; // 800DC830
  cmpu(c,0,c->r[29],0x00000010u); // 800DC834
  if (crb(c,0)) { IRQCHK(c); goto L_800DC824; } // 800DC838
  c->r[3]=c->r[31]+0x00001964u; // 800DC83C
  c->lr=0x800DC844u; f_800D53C0(c); // 800DC840
  c->r[3]=c->r[31]+0x00001934u; // 800DC844
  c->lr=0x800DC84Cu; f_800D3D90(c); // 800DC848
  c->r[3]=c->r[31]|c->r[31]; // 800DC84C
  c->lr=0x800DC854u; f_800BEC48(c); // 800DC850
  c->r[3]=c->r[31]|c->r[31]; // 800DC854
  c->lr=0x800DC85Cu; f_800DC878(c); // 800DC858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DC85C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DC860
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DC864
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DC868
  c->lr=c->r[0]; // 800DC86C
  c->r[1]=c->r[1]+0x00000020u; // 800DC870
  return; // 800DC874
}

// fn_800DC878
void f_800DC878(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC878
  c->r[0]=c->lr; // 800DC87C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DC880
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DC884
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DC888
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DC88C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800DC890
  c->r[28]=c->r[3]|c->r[3]; // 800DC894
  c->r[29]=0u+0x00000000u; // 800DC898
  W32(c->r[3]+0x00000094u,c->r[29]); // 800DC89C
  W32(c->r[3]+0x00000028u,c->r[29]); // 800DC8A0
  W32(c->r[3]+0x00000038u,c->r[29]); // 800DC8A4
  W32(c->r[3]+0x00000570u,c->r[29]); // 800DC8A8
  W32(c->r[3]+0x0000191Cu,c->r[29]); // 800DC8AC
  W32(c->r[3]+0x0000195Cu,c->r[29]); // 800DC8B0
  W32(c->r[3]+0x00001E9Cu,c->r[29]); // 800DC8B4
  W32(c->r[3]+0x00001538u,c->r[29]); // 800DC8B8
  W32(c->r[3]+0x0000016Cu,c->r[29]); // 800DC8BC
  W32(c->r[3]+0x00000F48u,c->r[29]); // 800DC8C0
  W32(c->r[3]+0x00000F4Cu,c->r[29]); // 800DC8C4
  W32(c->r[3]+0x00001108u,c->r[29]); // 800DC8C8
  W32(c->r[3]+0x00001134u,c->r[29]); // 800DC8CC
  c->r[30]=0u+0xFFFFFFFFu; // 800DC8D0
  W32(c->r[3]+0x00000574u,c->r[30]); // 800DC8D4
  W32(c->r[3]+0x00000578u,c->r[29]); // 800DC8D8
  W32(c->r[3]+0x00001920u,c->r[29]); // 800DC8DC
  W32(c->r[3]+0x00001958u,c->r[29]); // 800DC8E0
  W32(c->r[3]+0x00000040u,c->r[29]); // 800DC8E4
  W32(c->r[3]+0x00000044u,c->r[29]); // 800DC8E8
  c->r[0]=0u+0x00000002u; // 800DC8EC
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800DC8F0
  W32(c->r[3]+0x00000048u,c->r[0]); // 800DC8F4
  W32(c->r[3]+0x00000054u,c->r[29]); // 800DC8F8
  W32(c->r[3]+0x00000050u,c->r[29]); // 800DC8FC
  W32(c->r[3]+0x0000004Cu,c->r[29]); // 800DC900
  W32(c->r[3]+0x000010BCu,c->r[29]); // 800DC904
  c->r[3]=c->r[3]+0x00001F14u; // 800DC908
  c->r[31]=0u+0x804C0000u; // 800DC90C
  c->r[4]=c->r[31]+0x000024A0u; // 800DC910
  c->lr=0x800DC918u; f_8004A65C(c); // 800DC914
  c->r[3]=c->r[28]+0x00001F20u; // 800DC918
  c->r[4]=c->r[31]+0x000024A0u; // 800DC91C
  c->lr=0x800DC924u; f_8004A65C(c); // 800DC920
  c->r[3]=c->r[28]+0x00001F2Cu; // 800DC924
  c->r[4]=c->r[31]+0x000024A0u; // 800DC928
  c->lr=0x800DC930u; f_8004A65C(c); // 800DC92C
  c->r[3]=c->r[28]+0x00001F38u; // 800DC930
  c->r[4]=c->r[31]+0x000024A0u; // 800DC934
  c->lr=0x800DC93Cu; f_8004A65C(c); // 800DC938
  c->r[3]=c->r[28]+0x00001F08u; // 800DC93C
  c->r[4]=c->r[31]+0x000024A0u; // 800DC940
  c->lr=0x800DC948u; f_8004A65C(c); // 800DC944
  W32(c->r[28]+0x00001EF4u,c->r[29]); // 800DC948
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DC94C
  {uint32_t ea=c->r[28]+0x00000058u; WF32(ea,c->f[1]);} // 800DC950
  {uint32_t ea=c->r[28]+0x0000005Cu; WF32(ea,c->f[1]);} // 800DC954
  W32(c->r[28]+0x00000060u,c->r[29]); // 800DC958
  {uint32_t ea=c->r[28]+0x00000084u; WF32(ea,c->f[1]);} // 800DC95C
  W32(c->r[28]+0x00000088u,c->r[29]); // 800DC960
  W32(c->r[28]+0x0000008Cu,c->r[30]); // 800DC964
  W32(c->r[28]+0x00000090u,c->r[30]); // 800DC968
  W32(c->r[28]+0x00001EB4u,c->r[30]); // 800DC96C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC970
  {uint32_t ea=c->r[28]+0x00001EB8u; WF32(ea,c->f[0]);} // 800DC974
  {uint32_t ea=c->r[28]+0x00001EBCu; WF32(ea,c->f[1]);} // 800DC978
  {uint32_t ea=c->r[28]+0x00001EC0u; WF32(ea,c->f[1]);} // 800DC97C
  W32(c->r[28]+0x00001EB0u,c->r[29]); // 800DC980
  W32(c->r[28]+0x00001EF0u,c->r[30]); // 800DC984
  W32(c->r[28]+0x00001EFCu,c->r[29]); // 800DC988
  W32(c->r[28]+0x00001F00u,c->r[29]); // 800DC98C
  W32(c->r[28]+0x00001EF8u,c->r[29]); // 800DC990
  {uint32_t ea=c->r[28]+0x00001EACu; WF32(ea,c->f[1]);} // 800DC994
  {uint32_t ea=c->r[28]+0x00001ED4u; WF32(ea,c->f[1]);} // 800DC998
  {uint32_t ea=c->r[28]+0x00001ED8u; WF32(ea,c->f[1]);} // 800DC99C
  W32(c->r[28]+0x00001EDCu,c->r[29]); // 800DC9A0
  W32(c->r[28]+0x00001EE0u,c->r[29]); // 800DC9A4
  W32(c->r[28]+0x00001EE4u,c->r[29]); // 800DC9A8
  W32(c->r[28]+0x00001EE8u,c->r[29]); // 800DC9AC
  W32(c->r[28]+0x00001EECu,c->r[30]); // 800DC9B0
  c->r[0]=0u+0x00000006u; // 800DC9B4
  W32(c->r[28]+0x00001F04u,c->r[0]); // 800DC9B8
  c->r[3]=c->r[28]+0x00000098u; // 800DC9BC
  c->r[4]=0u+0x00000000u; // 800DC9C0
  c->r[5]=0u+0x00000008u; // 800DC9C4
  c->lr=0x800DC9CCu; f_800060B8(c); // 800DC9C8
  W32(c->r[28]+0x00000098u,c->r[30]); // 800DC9CC
  W32(c->r[28]+0x0000009Cu,c->r[30]); // 800DC9D0
  c->r[3]=c->r[28]+0x00001EA0u; // 800DC9D4
  c->r[4]=c->r[31]+0x000024A0u; // 800DC9D8
  c->lr=0x800DC9E0u; f_8004A65C(c); // 800DC9DC
  W32(c->r[28]+0x000010C0u,c->r[30]); // 800DC9E0
  W32(c->r[28]+0x000010C8u,c->r[30]); // 800DC9E4
  W32(c->r[28]+0x000010D0u,c->r[30]); // 800DC9E8
  W32(c->r[28]+0x000010D8u,c->r[30]); // 800DC9EC
  W32(c->r[28]+0x000010E0u,c->r[30]); // 800DC9F0
  W32(c->r[28]+0x000010E8u,c->r[30]); // 800DC9F4
  W32(c->r[28]+0x000010F0u,c->r[30]); // 800DC9F8
  W32(c->r[28]+0x000010F8u,c->r[30]); // 800DC9FC
  W32(c->r[28]+0x00001100u,c->r[30]); // 800DCA00
  W32(c->r[28]+0x0000110Cu,c->r[30]); // 800DCA04
  W32(c->r[28]+0x00001114u,c->r[30]); // 800DCA08
  W32(c->r[28]+0x0000111Cu,c->r[30]); // 800DCA0C
  W32(c->r[28]+0x00001124u,c->r[30]); // 800DCA10
  W32(c->r[28]+0x0000112Cu,c->r[30]); // 800DCA14
  c->r[3]=c->r[28]+0x0000002Cu; // 800DCA18
  c->lr=0x800DCA20u; f_800BB8D0(c); // 800DCA1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCA20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DCA24
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DCA28
  c->r[28]=R32(c->r[1]+0x00000010u); // 800DCA2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCA30
  c->lr=c->r[0]; // 800DCA34
  c->r[1]=c->r[1]+0x00000020u; // 800DCA38
  return; // 800DCA3C
}

// fn_800DCA40
void f_800DCA40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA40
  c->r[0]=c->lr; // 800DCA44
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DCA48
  c->r[11]=c->r[1]+0x00000030u; // 800DCA4C
  c->lr=0x800DCA54u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DCA50
  c->r[23]=c->r[3]|c->r[3]; // 800DCA54
  c->r[24]=c->r[4]|c->r[4]; // 800DCA58
  c->r[25]=c->r[5]|c->r[5]; // 800DCA5C
  c->r[26]=c->r[6]|c->r[6]; // 800DCA60
  c->r[27]=c->r[7]|c->r[7]; // 800DCA64
  c->r[28]=c->r[8]|c->r[8]; // 800DCA68
  c->r[29]=c->r[9]|c->r[9]; // 800DCA6C
  c->lr=0x800DCA74u; f_800A23BC(c); // 800DCA70
  c->lr=0x800DCA78u; f_800A23B4(c); // 800DCA74
  c->r[4]=c->r[24]|c->r[24]; // 800DCA78
  c->lr=0x800DCA80u; f_800BEDE0(c); // 800DCA7C
  c->r[30]=c->r[3]|c->r[3]; // 800DCA80
  cmps(c,0,(int32_t)c->r[3],0); // 800DCA84
  if (!crb(c,2)) { goto L_800DCB14; } // 800DCA88
  c->r[3]=c->r[23]|c->r[23]; // 800DCA8C
  c->r[4]=0u+0x00000000u; // 800DCA90
  c->lr=0x800DCA98u; f_800BECD4(c); // 800DCA94
  c->r[30]=c->r[3]|c->r[3]; // 800DCA98
  c->r[3]=c->r[23]|c->r[23]; // 800DCA9C
  c->r[4]=c->r[30]|c->r[30]; // 800DCAA0
  c->lr=0x800DCAA8u; f_800BEDA0(c); // 800DCAA4
  c->r[31]=c->r[3]|c->r[3]; // 800DCAA8
  c->r[4]=c->r[25]|c->r[25]; // 800DCAAC
  c->lr=0x800DCAB4u; f_800DAC64(c); // 800DCAB0
  c->r[3]=c->r[31]|c->r[31]; // 800DCAB4
  c->r[4]=c->r[26]|c->r[26]; // 800DCAB8
  c->lr=0x800DCAC0u; f_800CF6A8(c); // 800DCABC
  c->r[3]=c->r[31]|c->r[31]; // 800DCAC0
  c->r[4]=c->r[27]|c->r[27]; // 800DCAC4
  c->lr=0x800DCACCu; f_800CF6A0(c); // 800DCAC8
  c->r[3]=c->r[31]|c->r[31]; // 800DCACC
  c->r[4]=c->r[28]|c->r[28]; // 800DCAD0
  c->lr=0x800DCAD8u; f_800CF698(c); // 800DCAD4
  c->r[3]=c->r[31]|c->r[31]; // 800DCAD8
  c->r[4]=c->r[29]|c->r[29]; // 800DCADC
  c->lr=0x800DCAE4u; f_800DACC4(c); // 800DCAE0
  cmps(c,0,(int32_t)c->r[29],0); // 800DCAE4
  if (crb(c,2)) { goto L_800DCB08; } // 800DCAE8
  c->r[3]=c->r[29]|c->r[29]; // 800DCAEC
  c->lr=0x800DCAF4u; f_802F0250(c); // 800DCAF0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCAF4
  if (crb(c,2)) { goto L_800DCB08; } // 800DCAF8
  c->r[3]=R32(c->r[23]+0x00000F4Cu); // 800DCAFC
  c->r[0]=c->r[3]+0x00000001u; // 800DCB00
  W32(c->r[23]+0x00000F4Cu,c->r[0]); // 800DCB04
L_800DCB08:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCB08
  c->r[4]=c->r[24]|c->r[24]; // 800DCB0C
  c->lr=0x800DCB14u; f_800BDEBC(c); // 800DCB10
L_800DCB14:;
  c->r[3]=c->r[23]|c->r[23]; // 800DCB14
  c->r[4]=c->r[30]|c->r[30]; // 800DCB18
  c->lr=0x800DCB20u; f_800BEDA0(c); // 800DCB1C
  c->lr=0x800DCB24u; f_800BE0EC(c); // 800DCB20
  c->r[3]=c->r[30]|c->r[30]; // 800DCB24
  c->r[11]=c->r[1]+0x00000030u; // 800DCB28
  c->lr=0x800DCB30u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DCB2C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DCB30
  c->lr=c->r[0]; // 800DCB34
  c->r[1]=c->r[1]+0x00000030u; // 800DCB38
  return; // 800DCB3C
}

// fn_800DCB40
void f_800DCB40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCB40
  c->r[0]=c->lr; // 800DCB44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCB48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCB4C
  c->r[31]=c->r[3]|c->r[3]; // 800DCB50
  c->lr=0x800DCB58u; f_80154714(c); // 800DCB54
  cmps(c,0,(int32_t)c->r[3],0); // 800DCB58
  if (crb(c,2)) { goto L_800DCB94; } // 800DCB5C
  c->lr=0x800DCB64u; f_8006E268(c); // 800DCB60
  c->lr=0x800DCB68u; f_80073690(c); // 800DCB64
  cmps(c,0,(int32_t)c->r[3],5); // 800DCB68
  if (crb(c,2)) { goto L_800DCB8C; } // 800DCB6C
  if (!crb(c,0)) { goto L_800DCB94; } // 800DCB70
  cmps(c,0,(int32_t)c->r[3],4); // 800DCB74
  if (!crb(c,0)) { goto L_800DCB80; } // 800DCB78
  goto L_800DCB94; // 800DCB7C
L_800DCB80:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCB80
  c->lr=0x800DCB88u; f_800DBE70(c); // 800DCB84
  goto L_800DCB94; // 800DCB88
L_800DCB8C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCB8C
  c->lr=0x800DCB94u; f_800DC690(c); // 800DCB90
L_800DCB94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCB94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCB98
  c->lr=c->r[0]; // 800DCB9C
  c->r[1]=c->r[1]+0x00000010u; // 800DCBA0
  return; // 800DCBA4
}

// fn_800DCBA8
void f_800DCBA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCBA8
  c->r[0]=c->lr; // 800DCBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCBB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCBB4
  c->r[31]=c->r[3]|c->r[3]; // 800DCBB8
  c->r[5]=R32(c->r[3]+0x00000028u); // 800DCBBC
  c->r[4]=0u+0xFFFC0000u; // 800DCBC0
  c->r[0]=c->r[4]+0xFFFF9FFFu; // 800DCBC4
  c->r[0]=c->r[5]&c->r[0]; // 800DCBC8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DCBCC
  c->lr=0x800DCBD4u; f_800A23BC(c); // 800DCBD0
  c->lr=0x800DCBD8u; f_800A23C4(c); // 800DCBD4
  c->r[4]=0u+0x00000003u; // 800DCBD8
  c->lr=0x800DCBE0u; f_800D88CC(c); // 800DCBDC
  c->r[3]=c->r[31]|c->r[31]; // 800DCBE0
  c->r[4]=0u+0x00000000u; // 800DCBE4
  c->lr=0x800DCBECu; f_800DB448(c); // 800DCBE8
  c->r[4]=c->r[3]|c->r[3]; // 800DCBEC
  c->r[3]=c->r[31]|c->r[31]; // 800DCBF0
  c->r[5]=0u+0x00000000u; // 800DCBF4
  c->lr=0x800DCBFCu; f_800DB5BC(c); // 800DCBF8
  c->r[3]=c->r[31]|c->r[31]; // 800DCBFC
  c->r[4]=0u+0x00000001u; // 800DCC00
  c->lr=0x800DCC08u; f_800DB448(c); // 800DCC04
  c->r[4]=c->r[3]|c->r[3]; // 800DCC08
  c->r[3]=c->r[31]|c->r[31]; // 800DCC0C
  c->r[5]=0u+0x00000001u; // 800DCC10
  c->lr=0x800DCC18u; f_800DB5BC(c); // 800DCC14
  c->r[3]=c->r[31]+0x0000002Cu; // 800DCC18
  c->r[4]=0u+0x00000000u; // 800DCC1C
  c->lr=0x800DCC24u; f_800BB8E4(c); // 800DCC20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCC24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCC28
  c->lr=c->r[0]; // 800DCC2C
  c->r[1]=c->r[1]+0x00000010u; // 800DCC30
  return; // 800DCC34
}

// fn_800DCC38
void f_800DCC38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCC38
  c->r[0]=c->lr; // 800DCC3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCC40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCC44
  c->r[31]=c->r[3]|c->r[3]; // 800DCC48
  c->r[3]=c->r[3]+0x0000002Cu; // 800DCC4C
  c->lr=0x800DCC54u; f_800BB8EC(c); // 800DCC50
  cmps(c,0,(int32_t)c->r[3],0); // 800DCC54
  if (crb(c,2)) { goto L_800DCC84; } // 800DCC58
  c->r[0]=0u+0x00000000u; // 800DCC5C
  W32(c->r[31]+0x00000F4Cu,c->r[0]); // 800DCC60
  c->lr=0x800DCC68u; f_800A23BC(c); // 800DCC64
  c->lr=0x800DCC6Cu; f_800BB7F0(c); // 800DCC68
  c->r[4]=0u+0x80460000u; // 800DCC6C
  c->r[4]=c->r[4]+0x000008D4u; // 800DCC70
  c->r[5]=0u+0x00000006u; // 800DCC74
  c->r[6]=0u+0x00000001u; // 800DCC78
  c->lr=0x800DCC80u; f_800C29FC(c); // 800DCC7C
  goto L_800DCCA4; // 800DCC80
L_800DCC84:;
  c->lr=0x800DCC88u; f_800A23BC(c); // 800DCC84
  c->lr=0x800DCC8Cu; f_800BB7F0(c); // 800DCC88
  c->lr=0x800DCC90u; f_800C2B94(c); // 800DCC8C
  cmps(c,0,(int32_t)c->r[3],0); // 800DCC90
  if (crb(c,2)) { goto L_800DCCA4; } // 800DCC94
  c->r[3]=c->r[31]+0x0000002Cu; // 800DCC98
  c->r[4]=0u+0x00000003u; // 800DCC9C
  c->lr=0x800DCCA4u; f_800BB8E4(c); // 800DCCA0
L_800DCCA4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCCA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCCA8
  c->lr=c->r[0]; // 800DCCAC
  c->r[1]=c->r[1]+0x00000010u; // 800DCCB0
  return; // 800DCCB4
}

// fn_800DCCB8
void f_800DCCB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCCB8
  c->r[0]=c->lr; // 800DCCBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DCCC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DCCC4
  c->r[31]=c->r[3]|c->r[3]; // 800DCCC8
  c->r[3]=c->r[3]+0x0000002Cu; // 800DCCCC
  c->lr=0x800DCCD4u; f_800BB8EC(c); // 800DCCD0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCCD4
  if (crb(c,2)) { goto L_800DCD14; } // 800DCCD8
  c->lr=0x800DCCE0u; f_800A23BC(c); // 800DCCDC
  c->lr=0x800DCCE4u; f_800BB7F0(c); // 800DCCE0
  c->r[4]=0u+0x80460000u; // 800DCCE4
  c->r[4]=c->r[4]+0x000008E8u; // 800DCCE8
  c->r[5]=c->r[1]+0x00000008u; // 800DCCEC
  c->lr=0x800DCCF4u; f_800C2C24(c); // 800DCCF0
  c->r[3]=R32(c->r[1]+0x00000008u); // 800DCCF4
  c->lr=0x800DCCFCu; f_8006E4DC(c); // 800DCCF8
  c->r[31]=c->r[3]|c->r[3]; // 800DCCFC
  c->lr=0x800DCD04u; f_800A23BC(c); // 800DCD00
  c->lr=0x800DCD08u; f_800A23C8(c); // 800DCD04
  c->r[4]=c->r[31]|c->r[31]; // 800DCD08
  c->lr=0x800DCD10u; f_800CE5C0(c); // 800DCD0C
  goto L_800DCD4C; // 800DCD10
L_800DCD14:;
  c->lr=0x800DCD18u; f_800A23BC(c); // 800DCD14
  c->lr=0x800DCD1Cu; f_800A23C8(c); // 800DCD18
  c->lr=0x800DCD20u; f_800CDEF0(c); // 800DCD1C
  cmps(c,0,(int32_t)c->r[3],0); // 800DCD20
  if (!crb(c,2)) { goto L_800DCD4C; } // 800DCD24
  c->r[0]=R32(c->r[31]+0x00000048u); // 800DCD28
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800DCD2C
  W32(c->r[31]+0x00000040u,c->r[0]); // 800DCD30
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DCD34
  c->r[0]=c->r[0]|0x00000001u; // 800DCD38
  W32(c->r[31]+0x00000028u,c->r[0]); // 800DCD3C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DCD40
  c->r[4]=0u+0x00000000u; // 800DCD44
  c->lr=0x800DCD4Cu; f_800BB8E4(c); // 800DCD48
L_800DCD4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DCD4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DCD50
  c->lr=c->r[0]; // 800DCD54
  c->r[1]=c->r[1]+0x00000020u; // 800DCD58
  return; // 800DCD5C
}

// fn_800DCD60
void f_800DCD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD60
  c->r[0]=c->lr; // 800DCD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCD68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCD6C
  c->r[31]=c->r[3]|c->r[3]; // 800DCD70
  c->lr=0x800DCD78u; f_800A23BC(c); // 800DCD74
  c->lr=0x800DCD7Cu; f_800A23C4(c); // 800DCD78
  c->lr=0x800DCD80u; f_800BBF6C(c); // 800DCD7C
  cmps(c,0,(int32_t)c->r[3],0); // 800DCD80
  if (crb(c,2)) { goto L_800DCD9C; } // 800DCD84
  c->lr=0x800DCD8Cu; f_8006E268(c); // 800DCD88
  c->lr=0x800DCD90u; f_80073690(c); // 800DCD8C
  cmps(c,0,(int32_t)c->r[3],4); // 800DCD90
  if (!crb(c,2)) { goto L_800DCD9C; } // 800DCD94
  c->lr=0x800DCD9Cu; f_801FAD54(c); // 800DCD98
L_800DCD9C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DCD9C
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 800DCDA0
  c->r[5]=0u+0x00000001u; // 800DCDA4
  c->lr=0x800DCDACu; f_800DE884(c); // 800DCDA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCDAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCDB0
  c->lr=c->r[0]; // 800DCDB4
  c->r[1]=c->r[1]+0x00000010u; // 800DCDB8
  return; // 800DCDBC
}

// fn_800DCDC0
void f_800DCDC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCDC0
  c->r[0]=c->lr; // 800DCDC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCDC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCDCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCDD0
  c->r[30]=c->r[3]|c->r[3]; // 800DCDD4
  c->lr=0x800DCDDCu; f_800A23BC(c); // 800DCDD8
  c->lr=0x800DCDE0u; f_800A23C8(c); // 800DCDDC
  c->lr=0x800DCDE4u; f_800CA888(c); // 800DCDE0
  c->lr=0x800DCDE8u; f_80154798(c); // 800DCDE4
  c->r[3]=c->r[30]|c->r[30]; // 800DCDE8
  c->r[4]=0u+0x00000000u; // 800DCDEC
  c->r[5]=0u+0x00000000u; // 800DCDF0
  c->lr=0x800DCDF8u; f_800DB5BC(c); // 800DCDF4
  c->r[3]=c->r[30]|c->r[30]; // 800DCDF8
  c->r[4]=0u+0x00000000u; // 800DCDFC
  c->r[5]=0u+0x00000001u; // 800DCE00
  c->lr=0x800DCE08u; f_800DB5BC(c); // 800DCE04
  c->r[3]=c->r[30]|c->r[30]; // 800DCE08
  c->r[4]=0u+0x00000001u; // 800DCE0C
  c->lr=0x800DCE14u; f_800E10E4(c); // 800DCE10
  c->r[3]=c->r[30]|c->r[30]; // 800DCE14
  c->lr=0x800DCE1Cu; f_800CF6D8(c); // 800DCE18
  c->r[3]=c->r[30]|c->r[30]; // 800DCE1C
  c->r[4]=0u+0x00000000u; // 800DCE20
  c->lr=0x800DCE28u; f_800CF6B0(c); // 800DCE24
  c->lr=0x800DCE2Cu; f_800A23BC(c); // 800DCE28
  c->lr=0x800DCE30u; f_800A23C4(c); // 800DCE2C
  c->lr=0x800DCE34u; f_800BBF6C(c); // 800DCE30
  c->r[31]=c->r[3]|c->r[3]; // 800DCE34
  cmps(c,0,(int32_t)c->r[3],0); // 800DCE38
  if (crb(c,2)) { goto L_800DCE6C; } // 800DCE3C
  c->lr=0x800DCE44u; f_800A23BC(c); // 800DCE40
  c->lr=0x800DCE48u; f_800BB800(c); // 800DCE44
  c->r[4]=c->r[31]|c->r[31]; // 800DCE48
  c->lr=0x800DCE50u; f_800BBD58(c); // 800DCE4C
  c->r[4]=0u+0x00000001u; // 800DCE50
  c->r[5]=0u+0x00000000u; // 800DCE54
  c->lr=0x800DCE5Cu; f_800C7B08(c); // 800DCE58
  c->lr=0x800DCE60u; f_800A23BC(c); // 800DCE5C
  c->lr=0x800DCE64u; f_800A23C4(c); // 800DCE60
  c->r[4]=0u+0x00000003u; // 800DCE64
  c->lr=0x800DCE6Cu; f_800D8804(c); // 800DCE68
L_800DCE6C:;
  c->r[0]=R32(c->r[30]+0x00000028u); // 800DCE6C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 800DCE70
  cmps(c,0,(int32_t)c->r[0],0); // 800DCE74
  if (!crb(c,2)) { goto L_800DCE88; } // 800DCE78
  c->lr=0x800DCE80u; f_800A23BC(c); // 800DCE7C
  c->lr=0x800DCE84u; f_800A23C4(c); // 800DCE80
  c->lr=0x800DCE88u; f_800CA210(c); // 800DCE84
L_800DCE88:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DCE88
  c->r[4]=0u+0x00000006u; // 800DCE8C
  c->lr=0x800DCE94u; f_800BB8E4(c); // 800DCE90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCE94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCE98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCE9C
  c->lr=c->r[0]; // 800DCEA0
  c->r[1]=c->r[1]+0x00000010u; // 800DCEA4
  return; // 800DCEA8
}

// fn_800DCEAC
void f_800DCEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCEAC
  c->r[0]=c->lr; // 800DCEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCEB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCEBC
  c->r[30]=c->r[3]|c->r[3]; // 800DCEC0
  c->r[3]=c->r[3]+0x0000002Cu; // 800DCEC4
  c->lr=0x800DCECCu; f_800BB8EC(c); // 800DCEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCECC
  if (crb(c,2)) { goto L_800DCEEC; } // 800DCED0
  c->r[3]=0u+0x00000000u; // 800DCED4
  c->r[4]=0u+0x00000000u; // 800DCED8
  c->r[5]=0u+0x00000000u; // 800DCEDC
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCEE0
  c->lr=0x800DCEE8u; f_800B8440(c); // 800DCEE4
  goto L_800DCF54; // 800DCEE8
L_800DCEEC:;
  c->lr=0x800DCEF0u; f_800B8578(c); // 800DCEEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCEF0
  if (crb(c,2)) { goto L_800DCF54; } // 800DCEF4
  c->lr=0x800DCEFCu; f_800A23BC(c); // 800DCEF8
  c->lr=0x800DCF00u; f_800BB800(c); // 800DCEFC
  c->lr=0x800DCF04u; f_800C9C38(c); // 800DCF00
  cmps(c,0,(int32_t)c->r[3],0); // 800DCF04
  if (crb(c,2)) { goto L_800DCF54; } // 800DCF08
  c->r[31]=R32(c->r[30]+0x00000088u); // 800DCF0C
  cmps(c,0,(int32_t)c->r[31],0); // 800DCF10
  if (crb(c,2)) { goto L_800DCF48; } // 800DCF14
  c->lr=0x800DCF1Cu; f_800A23BC(c); // 800DCF18
  c->lr=0x800DCF20u; f_800BB808(c); // 800DCF1C
  c->r[4]=c->r[31]|c->r[31]; // 800DCF20
  c->lr=0x800DCF28u; f_800C0D08(c); // 800DCF24
  cmps(c,0,(int32_t)c->r[3],0); // 800DCF28
  if (crb(c,2)) { goto L_800DCF40; } // 800DCF2C
  c->lr=0x800DCF34u; f_800A23BC(c); // 800DCF30
  c->lr=0x800DCF38u; f_800BB808(c); // 800DCF34
  c->r[4]=R32(c->r[30]+0x00000088u); // 800DCF38
  c->lr=0x800DCF40u; f_800CB00C(c); // 800DCF3C
L_800DCF40:;
  c->r[0]=0u+0x00000000u; // 800DCF40
  W32(c->r[30]+0x00000088u,c->r[0]); // 800DCF44
L_800DCF48:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DCF48
  c->r[4]=0u+0x00000007u; // 800DCF4C
  c->lr=0x800DCF54u; f_800BB8E4(c); // 800DCF50
L_800DCF54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DCF54
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DCF58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DCF5C
  c->lr=c->r[0]; // 800DCF60
  c->r[1]=c->r[1]+0x00000010u; // 800DCF64
  return; // 800DCF68
}

// fn_800DCF6C
void f_800DCF6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCF6C
  c->r[0]=c->lr; // 800DCF70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCF74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DCF78
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DCF7C
  c->r[30]=c->r[3]|c->r[3]; // 800DCF80
  c->r[3]=c->r[3]+0x0000002Cu; // 800DCF84
  c->lr=0x800DCF8Cu; f_800BB8EC(c); // 800DCF88
  cmps(c,0,(int32_t)c->r[3],0); // 800DCF8C
  if (crb(c,2)) { goto L_800DCFA4; } // 800DCF90
  c->r[3]=c->r[30]|c->r[30]; // 800DCF94
  c->r[4]=0u+0x00000000u; // 800DCF98
  c->lr=0x800DCFA0u; f_800DAFDC(c); // 800DCF9C
  goto L_800DD0C8; // 800DCFA0
L_800DCFA4:;
  c->lr=0x800DCFA8u; f_800A23BC(c); // 800DCFA4
  c->lr=0x800DCFACu; f_800A23B4(c); // 800DCFA8
  c->r[4]=R32(c->r[30]+0x0000003Cu); // 800DCFAC
  c->lr=0x800DCFB4u; f_800BEDE0(c); // 800DCFB0
  c->r[31]=c->r[3]|c->r[3]; // 800DCFB4
  c->lr=0x800DCFBCu; f_800A23BC(c); // 800DCFB8
  c->lr=0x800DCFC0u; f_800A23B4(c); // 800DCFBC
  c->r[4]=c->r[31]|c->r[31]; // 800DCFC0
  c->lr=0x800DCFC8u; f_800BEDA0(c); // 800DCFC4
  c->lr=0x800DCFCCu; f_800CF580(c); // 800DCFC8
  cmps(c,0,(int32_t)c->r[3],3); // 800DCFCC
  if (!crb(c,0)) { goto L_800DCFE0; } // 800DCFD0
  cmps(c,0,(int32_t)c->r[3],1); // 800DCFD4
  if (!crb(c,0)) { goto L_800DCFEC; } // 800DCFD8
  goto L_800DD004; // 800DCFDC
L_800DCFE0:;
  cmps(c,0,(int32_t)c->r[3],6); // 800DCFE0
  if (!crb(c,0)) { goto L_800DD004; } // 800DCFE4
  goto L_800DCFF8; // 800DCFE8
L_800DCFEC:;
  c->r[0]=R32(c->r[30]+0x00000044u); // 800DCFEC
  W32(c->r[30]+0x00000048u,c->r[0]); // 800DCFF0
  goto L_800DD004; // 800DCFF4
L_800DCFF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800DCFF8
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCFFC
  c->lr=0x800DD004u; f_800DE82C(c); // 800DD000
L_800DD004:;
  c->lr=0x800DD008u; f_800A23BC(c); // 800DD004
  c->lr=0x800DD00Cu; f_800A23B4(c); // 800DD008
  c->r[4]=R32(c->r[30]+0x00000040u); // 800DD00C
  c->lr=0x800DD014u; f_800BEDE0(c); // 800DD010
  c->r[31]=c->r[3]|c->r[3]; // 800DD014
  c->lr=0x800DD01Cu; f_800A23BC(c); // 800DD018
  c->lr=0x800DD020u; f_800A23B4(c); // 800DD01C
  c->r[4]=c->r[31]|c->r[31]; // 800DD020
  c->lr=0x800DD028u; f_800BEDA0(c); // 800DD024
  c->lr=0x800DD02Cu; f_800CF580(c); // 800DD028
  c->r[31]=c->r[3]|c->r[3]; // 800DD02C
  cmps(c,0,(int32_t)c->r[3],6); // 800DD030
  if (!crb(c,0)) { goto L_800DD050; } // 800DD034
  cmps(c,0,(int32_t)c->r[3],4); // 800DD038
  if (!crb(c,0)) { goto L_800DD044; } // 800DD03C
  goto L_800DD050; // 800DD040
L_800DD044:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD044
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD048
  c->lr=0x800DD050u; f_800DE82C(c); // 800DD04C
L_800DD050:;
  cmps(c,0,(int32_t)c->r[31],3); // 800DD050
  if (crb(c,2)) { goto L_800DD09C; } // 800DD054
  if (!crb(c,0)) { goto L_800DD06C; } // 800DD058
  cmps(c,0,(int32_t)c->r[31],1); // 800DD05C
  if (crb(c,2)) { goto L_800DD07C; } // 800DD060
  if (!crb(c,0)) { goto L_800DD08C; } // 800DD064
  goto L_800DD0C8; // 800DD068
L_800DD06C:;
  cmps(c,0,(int32_t)c->r[31],5); // 800DD06C
  if (crb(c,2)) { goto L_800DD0BC; } // 800DD070
  if (!crb(c,0)) { goto L_800DD0C8; } // 800DD074
  goto L_800DD0AC; // 800DD078
L_800DD07C:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD07C
  c->r[4]=0u+0x00000008u; // 800DD080
  c->lr=0x800DD088u; f_800BB8E4(c); // 800DD084
  goto L_800DD0C8; // 800DD088
L_800DD08C:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD08C
  c->r[4]=0u+0x00000008u; // 800DD090
  c->lr=0x800DD098u; f_800BB8E4(c); // 800DD094
  goto L_800DD0C8; // 800DD098
L_800DD09C:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD09C
  c->r[4]=0u+0x00000008u; // 800DD0A0
  c->lr=0x800DD0A8u; f_800BB8E4(c); // 800DD0A4
  goto L_800DD0C8; // 800DD0A8
L_800DD0AC:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD0AC
  c->r[4]=0u+0x00000010u; // 800DD0B0
  c->lr=0x800DD0B8u; f_800BB8E4(c); // 800DD0B4
  goto L_800DD0C8; // 800DD0B8
L_800DD0BC:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD0BC
  c->r[4]=0u+0x00000015u; // 800DD0C0
  c->lr=0x800DD0C8u; f_800BB8E4(c); // 800DD0C4
L_800DD0C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD0C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD0CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD0D0
  c->lr=c->r[0]; // 800DD0D4
  c->r[1]=c->r[1]+0x00000010u; // 800DD0D8
  return; // 800DD0DC
}

// fn_800DD0E0
void f_800DD0E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD0E0
  c->r[0]=c->lr; // 800DD0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD0E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD0EC
  c->r[31]=c->r[3]|c->r[3]; // 800DD0F0
  c->lr=0x800DD0F8u; f_800A23BC(c); // 800DD0F4
  c->lr=0x800DD0FCu; f_800C23F4(c); // 800DD0F8
  c->lr=0x800DD100u; f_800E2008(c); // 800DD0FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD100
  if (crb(c,2)) { goto L_800DD158; } // 800DD104
  c->lr=0x800DD10Cu; f_8006E268(c); // 800DD108
  c->lr=0x800DD110u; f_80073690(c); // 800DD10C
  cmps(c,0,(int32_t)c->r[3],4); // 800DD110
  if (!crb(c,2)) { goto L_800DD158; } // 800DD114
  c->lr=0x800DD11Cu; f_800A23BC(c); // 800DD118
  c->lr=0x800DD120u; f_800BB800(c); // 800DD11C
  c->lr=0x800DD124u; f_800C9D00(c); // 800DD120
  cmps(c,0,(int32_t)c->r[3],0); // 800DD124
  if (crb(c,2)) { goto L_800DD158; } // 800DD128
  c->lr=0x800DD130u; f_800A23BC(c); // 800DD12C
  c->r[4]=0u+0x00000001u; // 800DD130
  c->lr=0x800DD138u; f_800E2ED0(c); // 800DD134
  c->r[3]=c->r[31]|c->r[31]; // 800DD138
  c->r[4]=0u+0x00000000u; // 800DD13C
  c->lr=0x800DD144u; f_800CF6F4(c); // 800DD140
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD144
  {uint32_t ea=c->r[31]+0x00001EACu; WF32(ea,c->f[0]);} // 800DD148
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD14C
  c->r[4]=0u+0x00000009u; // 800DD150
  c->lr=0x800DD158u; f_800BB8E4(c); // 800DD154
L_800DD158:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD158
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD15C
  c->lr=c->r[0]; // 800DD160
  c->r[1]=c->r[1]+0x00000010u; // 800DD164
  return; // 800DD168
}

// fn_800DD16C
void f_800DD16C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD16C
  c->r[0]=c->lr; // 800DD170
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD178
  c->r[31]=c->r[3]|c->r[3]; // 800DD17C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD180
  c->lr=0x800DD188u; f_800BB8EC(c); // 800DD184
  cmps(c,0,(int32_t)c->r[3],0); // 800DD188
  if (crb(c,2)) { goto L_800DD1A0; } // 800DD18C
  c->r[3]=c->r[31]|c->r[31]; // 800DD190
  c->r[4]=R32(c->r[31]+0x00000040u); // 800DD194
  c->lr=0x800DD19Cu; f_800DAEC0(c); // 800DD198
  goto L_800DD1BC; // 800DD19C
L_800DD1A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD1A0
  c->lr=0x800DD1A8u; f_800DAFB4(c); // 800DD1A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DD1A8
  if (crb(c,2)) { goto L_800DD1BC; } // 800DD1AC
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD1B0
  c->r[4]=0u+0x0000000Au; // 800DD1B4
  c->lr=0x800DD1BCu; f_800BB8E4(c); // 800DD1B8
L_800DD1BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD1BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD1C0
  c->lr=c->r[0]; // 800DD1C4
  c->r[1]=c->r[1]+0x00000010u; // 800DD1C8
  return; // 800DD1CC
}

// fn_800DD1D0
void f_800DD1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD1D0
  c->r[0]=c->lr; // 800DD1D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD1D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD1DC
  c->r[31]=c->r[3]|c->r[3]; // 800DD1E0
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD1E4
  c->lr=0x800DD1ECu; f_800BB8EC(c); // 800DD1E8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD1EC
  if (crb(c,2)) { goto L_800DD21C; } // 800DD1F0
  c->lr=0x800DD1F8u; f_800A23BC(c); // 800DD1F4
  c->lr=0x800DD1FCu; f_800A23C8(c); // 800DD1F8
  c->r[4]=0u+0x0000000Eu; // 800DD1FC
  c->lr=0x800DD204u; f_800CA898(c); // 800DD200
  c->lr=0x800DD208u; f_800A23BC(c); // 800DD204
  c->lr=0x800DD20Cu; f_800A23C8(c); // 800DD208
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DD20C
  c->r[5]=0u+0x00000000u; // 800DD210
  c->lr=0x800DD218u; f_800CE664(c); // 800DD214
  goto L_800DD23C; // 800DD218
L_800DD21C:;
  c->lr=0x800DD220u; f_800A23BC(c); // 800DD21C
  c->lr=0x800DD224u; f_800A23C8(c); // 800DD220
  c->lr=0x800DD228u; f_800CDEF0(c); // 800DD224
  cmps(c,0,(int32_t)c->r[3],0); // 800DD228
  if (!crb(c,2)) { goto L_800DD23C; } // 800DD22C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD230
  c->r[4]=0u+0x0000000Bu; // 800DD234
  c->lr=0x800DD23Cu; f_800BB8E4(c); // 800DD238
L_800DD23C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD23C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD240
  c->lr=c->r[0]; // 800DD244
  c->r[1]=c->r[1]+0x00000010u; // 800DD248
  return; // 800DD24C
}

// fn_800DD250
void f_800DD250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD250
  c->r[0]=c->lr; // 800DD254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD25C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD260
  c->r[30]=c->r[3]|c->r[3]; // 800DD264
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD268
  c->lr=0x800DD270u; f_800BB8EC(c); // 800DD26C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD270
  if (crb(c,2)) { goto L_800DD290; } // 800DD274
  c->lr=0x800DD27Cu; f_800A23BC(c); // 800DD278
  c->lr=0x800DD280u; f_800A23C4(c); // 800DD27C
  c->lr=0x800DD284u; f_800D85F4(c); // 800DD280
  c->r[3]=c->r[30]|c->r[30]; // 800DD284
  c->lr=0x800DD28Cu; f_800DB3D0(c); // 800DD288
  goto L_800DD310; // 800DD28C
L_800DD290:;
  c->lr=0x800DD294u; f_8007B524(c); // 800DD290
  c->lr=0x800DD298u; f_800A1DE4(c); // 800DD294
  c->r[31]=c->r[3]|c->r[3]; // 800DD298
  c->lr=0x800DD2A0u; f_800A23BC(c); // 800DD29C
  c->lr=0x800DD2A4u; f_800A23C8(c); // 800DD2A0
  c->lr=0x800DD2A8u; f_800CDEF0(c); // 800DD2A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DD2A8
  if (crb(c,2)) { goto L_800DD2DC; } // 800DD2AC
  c->lr=0x800DD2B4u; f_800A23BC(c); // 800DD2B0
  c->lr=0x800DD2B8u; f_800C23F4(c); // 800DD2B4
  c->lr=0x800DD2BCu; f_800E2034(c); // 800DD2B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD2BC
  if (crb(c,2)) { goto L_800DD310; } // 800DD2C0
  cmps(c,0,(int32_t)c->r[31],0); // 800DD2C4
  if (crb(c,2)) { goto L_800DD310; } // 800DD2C8
  c->r[3]=c->r[31]+0x00000024u; // 800DD2CC
  c->r[4]=0u+0x00000000u; // 800DD2D0
  c->lr=0x800DD2D8u; f_800534E4(c); // 800DD2D4
  goto L_800DD310; // 800DD2D8
L_800DD2DC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD2DC
  if (crb(c,2)) { goto L_800DD2F0; } // 800DD2E0
  c->r[3]=c->r[31]+0x00000024u; // 800DD2E4
  c->r[4]=0u+0x00000001u; // 800DD2E8
  c->lr=0x800DD2F0u; f_800534E4(c); // 800DD2EC
L_800DD2F0:;
  c->lr=0x800DD2F4u; f_800A23BC(c); // 800DD2F0
  c->lr=0x800DD2F8u; f_800A23C4(c); // 800DD2F4
  c->lr=0x800DD2FCu; f_800CA218(c); // 800DD2F8
  c->r[3]=c->r[30]|c->r[30]; // 800DD2FC
  c->lr=0x800DD304u; f_800DB6E8(c); // 800DD300
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD304
  c->r[4]=0u+0x0000000Cu; // 800DD308
  c->lr=0x800DD310u; f_800BB8E4(c); // 800DD30C
L_800DD310:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD310
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD314
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD318
  c->lr=c->r[0]; // 800DD31C
  c->r[1]=c->r[1]+0x00000010u; // 800DD320
  return; // 800DD324
}

// fn_800DD328
void f_800DD328(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000028u); // 800DD328
  c->r[0]=rotl(c->r[4],0)&0x00001000u; // 800DD32C
  cmps(c,0,(int32_t)c->r[0],0); // 800DD330
  if (crb(c,2)) return; // 800DD334
  c->r[0]=rotl(c->r[4],0)&0xFFFFEFFFu; // 800DD338
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DD33C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD340
  c->r[4]=0u+0x0000000Du; // 800DD344
  f_800BB8E4(c); return; // 800DD348
  return; // 800DD34C
}

// fn_800DD350
void f_800DD350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD350
  c->r[0]=c->lr; // 800DD354
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD358
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD35C
  c->r[31]=c->r[3]|c->r[3]; // 800DD360
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD364
  c->lr=0x800DD36Cu; f_800BB8EC(c); // 800DD368
  cmps(c,0,(int32_t)c->r[3],0); // 800DD36C
  if (crb(c,2)) { goto L_800DD390; } // 800DD370
  c->lr=0x800DD378u; f_800A23BC(c); // 800DD374
  c->lr=0x800DD37Cu; f_800A23C4(c); // 800DD378
  c->lr=0x800DD380u; f_800D70F4(c); // 800DD37C
  c->lr=0x800DD384u; f_800A23BC(c); // 800DD380
  c->lr=0x800DD388u; f_800BB800(c); // 800DD384
  c->lr=0x800DD38Cu; f_800C9B9C(c); // 800DD388
  goto L_800DD3B0; // 800DD38C
L_800DD390:;
  c->lr=0x800DD394u; f_800A23BC(c); // 800DD390
  c->lr=0x800DD398u; f_800BB800(c); // 800DD394
  c->lr=0x800DD39Cu; f_800C9C38(c); // 800DD398
  cmps(c,0,(int32_t)c->r[3],0); // 800DD39C
  if (crb(c,2)) { goto L_800DD3B0; } // 800DD3A0
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD3A4
  c->r[4]=0u+0x0000000Eu; // 800DD3A8
  c->lr=0x800DD3B0u; f_800BB8E4(c); // 800DD3AC
L_800DD3B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD3B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD3B4
  c->lr=c->r[0]; // 800DD3B8
  c->r[1]=c->r[1]+0x00000010u; // 800DD3BC
  return; // 800DD3C0
}

// fn_800DD3C4
void f_800DD3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD3C4
  c->r[0]=c->lr; // 800DD3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD3D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD3D4
  c->r[31]=c->r[3]|c->r[3]; // 800DD3D8
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD3DC
  c->lr=0x800DD3E4u; f_800BB8EC(c); // 800DD3E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD3E4
  if (crb(c,2)) { goto L_800DD508; } // 800DD3E8
  c->r[0]=R32(c->r[31]+0x00000040u); // 800DD3EC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800DD3F0
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DD3F4
  c->r[0]=c->r[0]|0x00100000u; // 800DD3F8
  W32(c->r[31]+0x00000028u,c->r[0]); // 800DD3FC
  c->lr=0x800DD404u; f_800A23BC(c); // 800DD400
  c->lr=0x800DD408u; f_800BB800(c); // 800DD404
  c->r[4]=0u+0x00000001u; // 800DD408
  c->lr=0x800DD410u; f_800C985C(c); // 800DD40C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DD410
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 800DD414
  cmps(c,0,(int32_t)c->r[0],0); // 800DD418
  if (!crb(c,2)) { goto L_800DD434; } // 800DD41C
  c->r[3]=0u+0x00000000u; // 800DD420
  c->r[4]=0u+0x00000000u; // 800DD424
  c->r[5]=0u+0x00000000u; // 800DD428
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD42C
  c->lr=0x800DD434u; f_800B8308(c); // 800DD430
L_800DD434:;
  c->r[3]=0u+0x00000002u; // 800DD434
  c->r[4]=0u+0x0000003Fu; // 800DD438
  c->lr=0x800DD440u; f_800BABD0(c); // 800DD43C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD440
  if (crb(c,2)) { goto L_800DD4E0; } // 800DD444
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800DD448
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800DD44C
  cmpu(c,0,c->r[3],c->r[0]); // 800DD450
  if (!crb(c,2)) { goto L_800DD4E0; } // 800DD454
  c->r[3]=c->r[31]|c->r[31]; // 800DD458
  c->lr=0x800DD460u; f_800CF628(c); // 800DD45C
  c->r[4]=c->r[3]|c->r[3]; // 800DD460
  c->r[3]=c->r[31]|c->r[31]; // 800DD464
  c->lr=0x800DD46Cu; f_800DFD54(c); // 800DD468
  c->r[30]=c->r[3]|c->r[3]; // 800DD46C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD470
  if (crb(c,2)) { goto L_800DD4B0; } // 800DD474
  c->r[3]=c->r[31]|c->r[31]; // 800DD478
  c->lr=0x800DD480u; f_800CF628(c); // 800DD47C
  c->r[4]=c->r[3]|c->r[3]; // 800DD480
  c->r[3]=c->r[31]|c->r[31]; // 800DD484
  c->r[5]=c->r[30]|c->r[30]; // 800DD488
  c->r[6]=0u+0x00000000u; // 800DD48C
  c->r[7]=0u+0x00000001u; // 800DD490
  c->lr=0x800DD498u; f_800E04F8(c); // 800DD494
  c->r[3]=c->r[31]|c->r[31]; // 800DD498
  c->r[4]=c->r[30]|c->r[30]; // 800DD49C
  c->lr=0x800DD4A4u; f_800E0578(c); // 800DD4A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4A4
  if (crb(c,2)) { goto L_800DD4B0; } // 800DD4A8
  c->lr=0x800DD4B0u; f_800D6580(c); // 800DD4AC
L_800DD4B0:;
  c->lr=0x800DD4B4u; f_800A23BC(c); // 800DD4B0
  c->lr=0x800DD4B8u; f_800A23C4(c); // 800DD4B4
  c->lr=0x800DD4BCu; f_800BBF6C(c); // 800DD4B8
  c->r[30]=c->r[3]|c->r[3]; // 800DD4BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4C0
  if (crb(c,2)) { goto L_800DD4E0; } // 800DD4C4
  c->lr=0x800DD4CCu; f_800A23BC(c); // 800DD4C8
  c->lr=0x800DD4D0u; f_800BB800(c); // 800DD4CC
  c->r[4]=c->r[30]|c->r[30]; // 800DD4D0
  c->lr=0x800DD4D8u; f_800BBD58(c); // 800DD4D4
  c->r[4]=0u+0x00000000u; // 800DD4D8
  c->lr=0x800DD4E0u; f_800BB958(c); // 800DD4DC
L_800DD4E0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD4E0
  c->r[4]=R32(c->r[31]+0x00000060u); // 800DD4E4
  c->r[5]=R32(c->r[31]+0x00000040u); // 800DD4E8
  c->lr=0x800DD4F0u; f_800E0C28(c); // 800DD4EC
  c->r[3]=c->r[31]|c->r[31]; // 800DD4F0
  c->r[4]=0u+0x00000001u; // 800DD4F4
  c->lr=0x800DD4FCu; f_800CF6F4(c); // 800DD4F8
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD4FC
  {uint32_t ea=c->r[31]+0x00001EACu; WF32(ea,c->f[0]);} // 800DD500
  goto L_800DD594; // 800DD504
L_800DD508:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DD508
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 800DD50C
  cmps(c,0,(int32_t)c->r[0],0); // 800DD510
  if (!crb(c,2)) { goto L_800DD524; } // 800DD514
  c->lr=0x800DD51Cu; f_800B8578(c); // 800DD518
  cmps(c,0,(int32_t)c->r[3],0); // 800DD51C
  if (crb(c,2)) { goto L_800DD594; } // 800DD520
L_800DD524:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD524
  {uint32_t ea=c->r[31]+0x00001ED4u; WF32(ea,c->f[0]);} // 800DD528
  {uint32_t ea=c->r[31]+0x00001ED8u; WF32(ea,c->f[0]);} // 800DD52C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 800DD530
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800DD534
  cmpu(c,0,c->r[3],c->r[0]); // 800DD538
  if (!crb(c,2)) { goto L_800DD570; } // 800DD53C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DD540
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 800DD544
  cmps(c,0,(int32_t)c->r[0],0); // 800DD548
  if (!crb(c,2)) { goto L_800DD560; } // 800DD54C
  c->lr=0x800DD554u; f_800A23BC(c); // 800DD550
  c->lr=0x800DD558u; f_800A23C4(c); // 800DD554
  c->lr=0x800DD55Cu; f_800CA228(c); // 800DD558
  goto L_800DD57C; // 800DD55C
L_800DD560:;
  c->lr=0x800DD564u; f_800A23BC(c); // 800DD560
  c->lr=0x800DD568u; f_800A23C4(c); // 800DD564
  c->lr=0x800DD56Cu; f_800CA220(c); // 800DD568
  goto L_800DD57C; // 800DD56C
L_800DD570:;
  c->lr=0x800DD574u; f_800A23BC(c); // 800DD570
  c->lr=0x800DD578u; f_800A23C4(c); // 800DD574
  c->lr=0x800DD57Cu; f_800CA220(c); // 800DD578
L_800DD57C:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DD57C
  c->r[0]=rotl(c->r[0],0)&0xFFFEFFFFu; // 800DD580
  W32(c->r[31]+0x00000028u,c->r[0]); // 800DD584
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD588
  c->r[4]=0u+0x0000000Fu; // 800DD58C
  c->lr=0x800DD594u; f_800BB8E4(c); // 800DD590
L_800DD594:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD594
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD598
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD59C
  c->lr=c->r[0]; // 800DD5A0
  c->r[1]=c->r[1]+0x00000010u; // 800DD5A4
  return; // 800DD5A8
}

// fn_800DD5AC
void f_800DD5AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD5AC
  c->r[0]=c->lr; // 800DD5B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD5B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD5B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD5BC
  c->r[30]=c->r[3]|c->r[3]; // 800DD5C0
  c->lr=0x800DD5C8u; f_800A23BC(c); // 800DD5C4
  c->lr=0x800DD5CCu; f_800A23C4(c); // 800DD5C8
  c->lr=0x800DD5D0u; f_800D8284(c); // 800DD5CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD5D0
  if (crb(c,2)) { goto L_800DD69C; } // 800DD5D4
  c->lr=0x800DD5DCu; f_800A23BC(c); // 800DD5D8
  c->lr=0x800DD5E0u; f_800A23C8(c); // 800DD5DC
  c->lr=0x800DD5E4u; f_800CA8B8(c); // 800DD5E0
  c->lr=0x800DD5E8u; f_800A23BC(c); // 800DD5E4
  c->lr=0x800DD5ECu; f_800A23C8(c); // 800DD5E8
  c->lr=0x800DD5F0u; f_800CA8A8(c); // 800DD5EC
  c->lr=0x800DD5F4u; f_800A23BC(c); // 800DD5F0
  c->lr=0x800DD5F8u; f_800A23C8(c); // 800DD5F4
  c->r[4]=0u+0x00000000u; // 800DD5F8
  c->lr=0x800DD600u; f_800CE76C(c); // 800DD5FC
  c->lr=0x800DD604u; f_800A23BC(c); // 800DD600
  c->lr=0x800DD608u; f_800A23C4(c); // 800DD604
  c->r[4]=0u+0x00000002u; // 800DD608
  c->lr=0x800DD610u; f_800D88CC(c); // 800DD60C
  c->lr=0x800DD614u; f_800A23BC(c); // 800DD610
  c->lr=0x800DD618u; f_800A23B4(c); // 800DD614
  c->r[4]=R32(c->r[30]+0x0000003Cu); // 800DD618
  c->lr=0x800DD620u; f_800BEDE0(c); // 800DD61C
  c->r[31]=c->r[3]|c->r[3]; // 800DD620
  c->lr=0x800DD628u; f_800A23BC(c); // 800DD624
  c->lr=0x800DD62Cu; f_800A23B4(c); // 800DD628
  c->r[4]=c->r[31]|c->r[31]; // 800DD62C
  c->lr=0x800DD634u; f_800BEDA0(c); // 800DD630
  c->lr=0x800DD638u; f_800CF580(c); // 800DD634
  c->r[4]=R32(c->r[30]+0x0000003Cu); // 800DD638
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 800DD63C
  cmpu(c,0,c->r[4],c->r[0]); // 800DD640
  if (!crb(c,2)) { goto L_800DD664; } // 800DD644
  c->r[0]=0u+0x00000000u; // 800DD648
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800DD64C
  W32(c->r[30]+0x00000050u,c->r[0]); // 800DD650
  c->r[3]=0u+0x00000002u; // 800DD654
  c->r[4]=0u+0x0000003Fu; // 800DD658
  c->lr=0x800DD660u; f_800BAB88(c); // 800DD65C
  goto L_800DD684; // 800DD660
L_800DD664:;
  cmps(c,0,(int32_t)c->r[3],3); // 800DD664
  if (crb(c,2)) { goto L_800DD684; } // 800DD668
  c->r[0]=0u+0x00000000u; // 800DD66C
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 800DD670
  W32(c->r[30]+0x00000050u,c->r[0]); // 800DD674
  c->r[3]=0u+0x00000002u; // 800DD678
  c->r[4]=0u+0x0000003Fu; // 800DD67C
  c->lr=0x800DD684u; f_800BAB88(c); // 800DD680
L_800DD684:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD684
  c->r[4]=0u+0x00000001u; // 800DD688
  c->lr=0x800DD690u; f_800CF6B0(c); // 800DD68C
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD690
  c->r[4]=0u+0x00000001u; // 800DD694
  c->lr=0x800DD69Cu; f_800BB8E4(c); // 800DD698
L_800DD69C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD69C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD6A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD6A4
  c->lr=c->r[0]; // 800DD6A8
  c->r[1]=c->r[1]+0x00000010u; // 800DD6AC
  return; // 800DD6B0
}

// fn_800DD6B4
void f_800DD6B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD6B4
  c->r[0]=c->lr; // 800DD6B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD6BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD6C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD6C4
  c->r[30]=c->r[3]|c->r[3]; // 800DD6C8
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD6CC
  c->lr=0x800DD6D4u; f_800BB8EC(c); // 800DD6D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD6D4
  if (crb(c,2)) { goto L_800DD70C; } // 800DD6D8
  c->lr=0x800DD6E0u; f_800A23BC(c); // 800DD6DC
  c->lr=0x800DD6E4u; f_800BB700(c); // 800DD6E0
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DD6E4
  c->lr=0x800DD6ECu; f_800BBEA4(c); // 800DD6E8
  c->r[31]=c->r[3]|c->r[3]; // 800DD6EC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD6F0
  if (crb(c,2)) { goto L_800DD70C; } // 800DD6F4
  c->lr=0x800DD6FCu; f_800A23BC(c); // 800DD6F8
  c->lr=0x800DD700u; f_800BB700(c); // 800DD6FC
  c->r[4]=c->r[31]|c->r[31]; // 800DD700
  c->lr=0x800DD708u; f_800BBE64(c); // 800DD704
  c->lr=0x800DD70Cu; f_800CA598(c); // 800DD708
L_800DD70C:;
  c->lr=0x800DD710u; f_8006E268(c); // 800DD70C
  c->lr=0x800DD714u; f_80073690(c); // 800DD710
  cmps(c,0,(int32_t)c->r[3],4); // 800DD714
  if (!crb(c,2)) { goto L_800DD734; } // 800DD718
  c->lr=0x800DD720u; f_800A23BC(c); // 800DD71C
  c->r[4]=0u+0x00000002u; // 800DD720
  c->lr=0x800DD728u; f_800E2ED0(c); // 800DD724
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD728
  c->r[4]=0u+0x00000011u; // 800DD72C
  c->lr=0x800DD734u; f_800BB8E4(c); // 800DD730
L_800DD734:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD734
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD738
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD73C
  c->lr=c->r[0]; // 800DD740
  c->r[1]=c->r[1]+0x00000010u; // 800DD744
  return; // 800DD748
}

// fn_800DD74C
void f_800DD74C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD74C
  c->r[0]=c->lr; // 800DD750
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD754
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD758
  c->r[31]=c->r[3]|c->r[3]; // 800DD75C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD760
  c->lr=0x800DD768u; f_800BB8EC(c); // 800DD764
  cmps(c,0,(int32_t)c->r[3],0); // 800DD768
  if (crb(c,2)) { goto L_800DD780; } // 800DD76C
  c->r[3]=c->r[31]|c->r[31]; // 800DD770
  c->r[4]=R32(c->r[31]+0x00000040u); // 800DD774
  c->lr=0x800DD77Cu; f_800DAEC0(c); // 800DD778
  goto L_800DD79C; // 800DD77C
L_800DD780:;
  c->r[3]=c->r[31]|c->r[31]; // 800DD780
  c->lr=0x800DD788u; f_800DAFB4(c); // 800DD784
  cmps(c,0,(int32_t)c->r[3],0); // 800DD788
  if (crb(c,2)) { goto L_800DD79C; } // 800DD78C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DD790
  c->r[4]=0u+0x00000012u; // 800DD794
  c->lr=0x800DD79Cu; f_800BB8E4(c); // 800DD798
L_800DD79C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD79C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD7A0
  c->lr=c->r[0]; // 800DD7A4
  c->r[1]=c->r[1]+0x00000010u; // 800DD7A8
  return; // 800DD7AC
}

// fn_800DD7B0
void f_800DD7B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD7B0
  c->r[0]=c->lr; // 800DD7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD7BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD7C0
  c->r[30]=c->r[3]|c->r[3]; // 800DD7C4
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD7C8
  c->lr=0x800DD7D0u; f_800BB8EC(c); // 800DD7CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD7D0
  if (crb(c,2)) { goto L_800DD7EC; } // 800DD7D4
  c->lr=0x800DD7DCu; f_8007B524(c); // 800DD7D8
  c->lr=0x800DD7E0u; f_800A1578(c); // 800DD7DC
  c->r[3]=c->r[30]|c->r[30]; // 800DD7E0
  c->lr=0x800DD7E8u; f_800DB3D0(c); // 800DD7E4
  goto L_800DD860; // 800DD7E8
L_800DD7EC:;
  c->lr=0x800DD7F0u; f_8007B524(c); // 800DD7EC
  c->lr=0x800DD7F4u; f_800A1DE4(c); // 800DD7F0
  c->r[31]=c->r[3]|c->r[3]; // 800DD7F4
  c->lr=0x800DD7FCu; f_800A23BC(c); // 800DD7F8
  c->lr=0x800DD800u; f_800A23C8(c); // 800DD7FC
  c->lr=0x800DD804u; f_800CDEF0(c); // 800DD800
  cmps(c,0,(int32_t)c->r[3],0); // 800DD804
  if (crb(c,2)) { goto L_800DD838; } // 800DD808
  c->lr=0x800DD810u; f_800A23BC(c); // 800DD80C
  c->lr=0x800DD814u; f_800C23F4(c); // 800DD810
  c->lr=0x800DD818u; f_800E2034(c); // 800DD814
  cmps(c,0,(int32_t)c->r[3],0); // 800DD818
  if (crb(c,2)) { goto L_800DD860; } // 800DD81C
  cmps(c,0,(int32_t)c->r[31],0); // 800DD820
  if (crb(c,2)) { goto L_800DD860; } // 800DD824
  c->r[3]=c->r[31]+0x00000024u; // 800DD828
  c->r[4]=0u+0x00000000u; // 800DD82C
  c->lr=0x800DD834u; f_800534E4(c); // 800DD830
  goto L_800DD860; // 800DD834
L_800DD838:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DD838
  if (crb(c,2)) { goto L_800DD84C; } // 800DD83C
  c->r[3]=c->r[31]+0x00000024u; // 800DD840
  c->r[4]=0u+0x00000001u; // 800DD844
  c->lr=0x800DD84Cu; f_800534E4(c); // 800DD848
L_800DD84C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DD84C
  c->lr=0x800DD854u; f_800DBBA8(c); // 800DD850
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD854
  c->r[4]=0u+0x00000013u; // 800DD858
  c->lr=0x800DD860u; f_800BB8E4(c); // 800DD85C
L_800DD860:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD860
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD864
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD868
  c->lr=c->r[0]; // 800DD86C
  c->r[1]=c->r[1]+0x00000010u; // 800DD870
  return; // 800DD874
}

// fn_800DD878
void f_800DD878(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000028u); // 800DD878
  c->r[0]=rotl(c->r[4],0)&0x00001000u; // 800DD87C
  cmps(c,0,(int32_t)c->r[0],0); // 800DD880
  if (crb(c,2)) return; // 800DD884
  c->r[0]=rotl(c->r[4],0)&0xFFFFEFFFu; // 800DD888
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DD88C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD890
  c->r[4]=0u+0x00000014u; // 800DD894
  f_800BB8E4(c); return; // 800DD898
  return; // 800DD89C
}

// fn_800DD8A0
void f_800DD8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD8A0
  c->r[0]=c->lr; // 800DD8A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD8A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DD8AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DD8B0
  c->r[30]=c->r[3]|c->r[3]; // 800DD8B4
  c->r[3]=c->r[3]+0x0000002Cu; // 800DD8B8
  c->lr=0x800DD8C0u; f_800BB8EC(c); // 800DD8BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD8C0
  if (crb(c,2)) { goto L_800DD998; } // 800DD8C4
  c->lr=0x800DD8CCu; f_800A23BC(c); // 800DD8C8
  c->lr=0x800DD8D0u; f_800A23C4(c); // 800DD8CC
  c->lr=0x800DD8D4u; f_800D70F4(c); // 800DD8D0
  c->lr=0x800DD8D8u; f_800A23BC(c); // 800DD8D4
  c->lr=0x800DD8DCu; f_800BB700(c); // 800DD8D8
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DD8DC
  c->lr=0x800DD8E4u; f_800BBEA4(c); // 800DD8E0
  c->r[31]=c->r[3]|c->r[3]; // 800DD8E4
  c->lr=0x800DD8ECu; f_800A23BC(c); // 800DD8E8
  c->lr=0x800DD8F0u; f_800BB700(c); // 800DD8EC
  c->r[4]=c->r[31]|c->r[31]; // 800DD8F0
  c->lr=0x800DD8F8u; f_800BBE64(c); // 800DD8F4
  c->r[4]=0u+0x00000000u; // 800DD8F8
  c->lr=0x800DD900u; f_800D2BA8(c); // 800DD8FC
  c->lr=0x800DD904u; f_800A23BC(c); // 800DD900
  c->lr=0x800DD908u; f_800BB700(c); // 800DD904
  c->r[4]=c->r[31]|c->r[31]; // 800DD908
  c->lr=0x800DD910u; f_800BBE64(c); // 800DD90C
  c->r[4]=0u+0x00000000u; // 800DD910
  c->r[5]=0u+0x00000000u; // 800DD914
  c->lr=0x800DD91Cu; f_800D2C24(c); // 800DD918
  c->lr=0x800DD920u; f_800A23BC(c); // 800DD91C
  c->lr=0x800DD924u; f_800BB700(c); // 800DD920
  c->r[4]=c->r[31]|c->r[31]; // 800DD924
  c->lr=0x800DD92Cu; f_800BBE64(c); // 800DD928
  c->r[4]=0u+0x00000000u; // 800DD92C
  c->lr=0x800DD934u; f_800D2D18(c); // 800DD930
  c->r[0]=0u+0xFFFFFFFFu; // 800DD934
  W32(c->r[30]+0x00001EFCu,c->r[0]); // 800DD938
  c->r[3]=c->r[30]+0x00001F14u; // 800DD93C
  c->r[4]=c->r[30]+0x00001F2Cu; // 800DD940
  c->lr=0x800DD948u; f_8004A65C(c); // 800DD944
  c->r[3]=c->r[30]+0x00001F20u; // 800DD948
  c->r[4]=c->r[30]+0x00001F38u; // 800DD94C
  c->lr=0x800DD954u; f_8004A65C(c); // 800DD950
  c->r[3]=c->r[30]|c->r[30]; // 800DD954
  c->r[4]=0u+0x00000000u; // 800DD958
  c->r[5]=0u+0x00000000u; // 800DD95C
  c->lr=0x800DD964u; f_800DB5BC(c); // 800DD960
  c->r[3]=c->r[30]|c->r[30]; // 800DD964
  c->r[4]=0u+0x00000000u; // 800DD968
  c->r[5]=0u+0x00000001u; // 800DD96C
  c->lr=0x800DD974u; f_800DB5BC(c); // 800DD970
  c->r[0]=R32(c->r[30]+0x00000040u); // 800DD974
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800DD978
  c->lr=0x800DD980u; f_800A23BC(c); // 800DD97C
  c->lr=0x800DD984u; f_800A23C4(c); // 800DD980
  c->r[4]=0u+0x00000007u; // 800DD984
  c->lr=0x800DD98Cu; f_800D88CC(c); // 800DD988
  c->lr=0x800DD990u; f_800A23BC(c); // 800DD98C
  c->lr=0x800DD994u; f_800C23FC(c); // 800DD990
  goto L_800DD9F8; // 800DD994
L_800DD998:;
  c->lr=0x800DD99Cu; f_8006E268(c); // 800DD998
  c->lr=0x800DD9A0u; f_80073690(c); // 800DD99C
  cmps(c,0,(int32_t)c->r[3],5); // 800DD9A0
  if (!crb(c,2)) { goto L_800DD9F8; } // 800DD9A4
  c->lr=0x800DD9ACu; f_800A23BC(c); // 800DD9A8
  c->lr=0x800DD9B0u; f_800BB800(c); // 800DD9AC
  c->lr=0x800DD9B4u; f_800C9D00(c); // 800DD9B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD9B4
  if (crb(c,2)) { goto L_800DD9F8; } // 800DD9B8
  c->lr=0x800DD9C0u; f_800A23BC(c); // 800DD9BC
  c->r[4]=0u+0x00000002u; // 800DD9C0
  c->lr=0x800DD9C8u; f_800E2ED0(c); // 800DD9C4
  c->lr=0x800DD9CCu; f_800A23BC(c); // 800DD9C8
  c->lr=0x800DD9D0u; f_800A23C4(c); // 800DD9CC
  c->lr=0x800DD9D4u; f_800D85F4(c); // 800DD9D0
  c->lr=0x800DD9D8u; f_800A23BC(c); // 800DD9D4
  c->lr=0x800DD9DCu; f_800A23C4(c); // 800DD9D8
  c->lr=0x800DD9E0u; f_800CA218(c); // 800DD9DC
  c->lr=0x800DD9E4u; f_800A23BC(c); // 800DD9E0
  c->lr=0x800DD9E8u; f_800A23C8(c); // 800DD9E4
  c->lr=0x800DD9ECu; f_800CA8B8(c); // 800DD9E8
  c->r[3]=c->r[30]+0x0000002Cu; // 800DD9EC
  c->r[4]=0u+0x00000001u; // 800DD9F0
  c->lr=0x800DD9F8u; f_800BB8E4(c); // 800DD9F4
L_800DD9F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DD9F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DD9FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDA00
  c->lr=c->r[0]; // 800DDA04
  c->r[1]=c->r[1]+0x00000010u; // 800DDA08
  return; // 800DDA0C
}

// fn_800DDA10
void f_800DDA10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA10
  c->r[0]=c->lr; // 800DDA14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDA1C
  c->r[31]=c->r[3]|c->r[3]; // 800DDA20
  c->lr=0x800DDA28u; f_8006E268(c); // 800DDA24
  c->lr=0x800DDA2Cu; f_80073690(c); // 800DDA28
  cmps(c,0,(int32_t)c->r[3],4); // 800DDA2C
  if (!crb(c,2)) { goto L_800DDA4C; } // 800DDA30
  c->lr=0x800DDA38u; f_800A23BC(c); // 800DDA34
  c->r[4]=0u+0x00000003u; // 800DDA38
  c->lr=0x800DDA40u; f_800E2ED0(c); // 800DDA3C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DDA40
  c->r[4]=0u+0x00000016u; // 800DDA44
  c->lr=0x800DDA4Cu; f_800BB8E4(c); // 800DDA48
L_800DDA4C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDA4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDA50
  c->lr=c->r[0]; // 800DDA54
  c->r[1]=c->r[1]+0x00000010u; // 800DDA58
  return; // 800DDA5C
}

// fn_800DDA60
void f_800DDA60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA60
  c->r[0]=c->lr; // 800DDA64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDA68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDA6C
  c->r[31]=c->r[3]|c->r[3]; // 800DDA70
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDA74
  c->lr=0x800DDA7Cu; f_800BB8EC(c); // 800DDA78
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA7C
  if (crb(c,2)) { goto L_800DDA94; } // 800DDA80
  c->r[3]=c->r[31]|c->r[31]; // 800DDA84
  c->r[4]=R32(c->r[31]+0x00000040u); // 800DDA88
  c->lr=0x800DDA90u; f_800DAEC0(c); // 800DDA8C
  goto L_800DDAB0; // 800DDA90
L_800DDA94:;
  c->r[3]=c->r[31]|c->r[31]; // 800DDA94
  c->lr=0x800DDA9Cu; f_800DAFB4(c); // 800DDA98
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA9C
  if (crb(c,2)) { goto L_800DDAB0; } // 800DDAA0
  c->r[3]=c->r[31]+0x0000002Cu; // 800DDAA4
  c->r[4]=0u+0x00000017u; // 800DDAA8
  c->lr=0x800DDAB0u; f_800BB8E4(c); // 800DDAAC
L_800DDAB0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDAB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDAB4
  c->lr=c->r[0]; // 800DDAB8
  c->r[1]=c->r[1]+0x00000010u; // 800DDABC
  return; // 800DDAC0
}

// fn_800DDAC4
void f_800DDAC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDAC4
  c->r[0]=c->lr; // 800DDAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDAD0
  c->r[31]=c->r[3]|c->r[3]; // 800DDAD4
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDAD8
  c->lr=0x800DDAE0u; f_800BB8EC(c); // 800DDADC
  cmps(c,0,(int32_t)c->r[3],0); // 800DDAE0
  if (crb(c,2)) { goto L_800DDB08; } // 800DDAE4
  c->lr=0x800DDAECu; f_800A23BC(c); // 800DDAE8
  c->lr=0x800DDAF0u; f_800BB700(c); // 800DDAEC
  c->r[4]=0u+0x00000000u; // 800DDAF0
  c->r[5]=0u+0x00000001u; // 800DDAF4
  c->lr=0x800DDAFCu; f_800C1F38(c); // 800DDAF8
  c->r[3]=c->r[31]|c->r[31]; // 800DDAFC
  c->lr=0x800DDB04u; f_800DB3D0(c); // 800DDB00
  goto L_800DDB30; // 800DDB04
L_800DDB08:;
  c->lr=0x800DDB0Cu; f_800A23BC(c); // 800DDB08
  c->lr=0x800DDB10u; f_800A23C8(c); // 800DDB0C
  c->lr=0x800DDB14u; f_800CDEF0(c); // 800DDB10
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB14
  if (!crb(c,2)) { goto L_800DDB30; } // 800DDB18
  c->r[3]=c->r[31]|c->r[31]; // 800DDB1C
  c->lr=0x800DDB24u; f_800DBC14(c); // 800DDB20
  c->r[3]=c->r[31]+0x0000002Cu; // 800DDB24
  c->r[4]=0u+0x00000018u; // 800DDB28
  c->lr=0x800DDB30u; f_800BB8E4(c); // 800DDB2C
L_800DDB30:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDB30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDB34
  c->lr=c->r[0]; // 800DDB38
  c->r[1]=c->r[1]+0x00000010u; // 800DDB3C
  return; // 800DDB40
}

// fn_800DDB44
void f_800DDB44(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000028u); // 800DDB44
  c->r[0]=rotl(c->r[4],0)&0x00001000u; // 800DDB48
  cmps(c,0,(int32_t)c->r[0],0); // 800DDB4C
  if (crb(c,2)) return; // 800DDB50
  c->r[0]=rotl(c->r[4],0)&0xFFFFEFFFu; // 800DDB54
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DDB58
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDB5C
  c->r[4]=0u+0x00000019u; // 800DDB60
  f_800BB8E4(c); return; // 800DDB64
  return; // 800DDB68
}

// fn_800DDB6C
void f_800DDB6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDB6C
  c->r[0]=c->lr; // 800DDB70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDB74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDB78
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DDB7C
  c->r[30]=c->r[3]|c->r[3]; // 800DDB80
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDB84
  c->lr=0x800DDB8Cu; f_800BB8EC(c); // 800DDB88
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB8C
  if (crb(c,2)) { goto L_800DDBFC; } // 800DDB90
  c->lr=0x800DDB98u; f_800A23BC(c); // 800DDB94
  c->lr=0x800DDB9Cu; f_800A23C4(c); // 800DDB98
  c->lr=0x800DDBA0u; f_800D71CC(c); // 800DDB9C
  c->r[3]=c->r[30]+0x00001F14u; // 800DDBA0
  c->r[4]=c->r[30]+0x00001F2Cu; // 800DDBA4
  c->lr=0x800DDBACu; f_8004A65C(c); // 800DDBA8
  c->r[3]=c->r[30]+0x00001F20u; // 800DDBAC
  c->r[4]=c->r[30]+0x00001F38u; // 800DDBB0
  c->lr=0x800DDBB8u; f_8004A65C(c); // 800DDBB4
  c->r[3]=c->r[30]|c->r[30]; // 800DDBB8
  c->r[4]=0u+0x00000000u; // 800DDBBC
  c->r[5]=0u+0x00000000u; // 800DDBC0
  c->lr=0x800DDBC8u; f_800DB5BC(c); // 800DDBC4
  c->r[3]=c->r[30]|c->r[30]; // 800DDBC8
  c->r[4]=0u+0x00000000u; // 800DDBCC
  c->r[5]=0u+0x00000001u; // 800DDBD0
  c->lr=0x800DDBD8u; f_800DB5BC(c); // 800DDBD4
  c->r[0]=R32(c->r[30]+0x00000040u); // 800DDBD8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 800DDBDC
  c->lr=0x800DDBE4u; f_800A23BC(c); // 800DDBE0
  c->lr=0x800DDBE8u; f_800A23C4(c); // 800DDBE4
  c->r[4]=0u+0x00000007u; // 800DDBE8
  c->lr=0x800DDBF0u; f_800D88CC(c); // 800DDBEC
  c->lr=0x800DDBF4u; f_800A23BC(c); // 800DDBF0
  c->lr=0x800DDBF8u; f_800C23FC(c); // 800DDBF4
  goto L_800DDC74; // 800DDBF8
L_800DDBFC:;
  c->lr=0x800DDC00u; f_800A23BC(c); // 800DDBFC
  c->lr=0x800DDC04u; f_800A23B4(c); // 800DDC00
  c->r[4]=R32(c->r[30]+0x0000003Cu); // 800DDC04
  c->lr=0x800DDC0Cu; f_800BEDE0(c); // 800DDC08
  c->r[31]=c->r[3]|c->r[3]; // 800DDC0C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC10
  if (crb(c,2)) { goto L_800DDC5C; } // 800DDC14
  c->lr=0x800DDC1Cu; f_800A23BC(c); // 800DDC18
  c->lr=0x800DDC20u; f_800A23B4(c); // 800DDC1C
  c->r[4]=c->r[31]|c->r[31]; // 800DDC20
  c->lr=0x800DDC28u; f_800BEDA0(c); // 800DDC24
  c->lr=0x800DDC2Cu; f_800CF5EC(c); // 800DDC28
  cmps(c,0,(int32_t)c->r[3],4); // 800DDC2C
  if (!crb(c,2)) { goto L_800DDC5C; } // 800DDC30
  c->lr=0x800DDC38u; f_8007B524(c); // 800DDC34
  c->lr=0x800DDC3Cu; f_800CA310(c); // 800DDC38
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC3C
  if (crb(c,2)) { goto L_800DDC74; } // 800DDC40
  c->r[12]=R32(c->r[3]+0x00000058u); // 800DDC44
  c->r[12]=R32(c->r[12]+0x00000020u); // 800DDC48
  c->ctr=c->r[12]; // 800DDC4C
  if (true) { c->lr=0x800DDC54u; dispatch(c,c->ctr); } // 800DDC50
  cmps(c,0,(int32_t)c->r[3],0); // 800DDC54
  if (crb(c,2)) { goto L_800DDC74; } // 800DDC58
L_800DDC5C:;
  c->lr=0x800DDC60u; f_800A23BC(c); // 800DDC5C
  c->lr=0x800DDC64u; f_800A23C8(c); // 800DDC60
  c->lr=0x800DDC68u; f_800CA8B8(c); // 800DDC64
  c->r[3]=c->r[30]+0x0000002Cu; // 800DDC68
  c->r[4]=0u+0x00000001u; // 800DDC6C
  c->lr=0x800DDC74u; f_800BB8E4(c); // 800DDC70
L_800DDC74:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDC74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DDC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDC7C
  c->lr=c->r[0]; // 800DDC80
  c->r[1]=c->r[1]+0x00000010u; // 800DDC84
  return; // 800DDC88
}

// fn_800DDC8C
void f_800DDC8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDC8C
  c->r[0]=c->lr; // 800DDC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDC98
  c->r[31]=c->r[3]|c->r[3]; // 800DDC9C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDCA0
  c->lr=0x800DDCA8u; f_800BB8EC(c); // 800DDCA4
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCA8
  if (crb(c,2)) { goto L_800DDCE4; } // 800DDCAC
  c->lr=0x800DDCB4u; f_800A23BC(c); // 800DDCB0
  c->lr=0x800DDCB8u; f_800A23C8(c); // 800DDCB4
  c->lr=0x800DDCBCu; f_800CA888(c); // 800DDCB8
  c->lr=0x800DDCC0u; f_800A23BC(c); // 800DDCBC
  c->lr=0x800DDCC4u; f_800A23C4(c); // 800DDCC0
  c->r[4]=0u+0x00000003u; // 800DDCC4
  c->lr=0x800DDCCCu; f_800D8804(c); // 800DDCC8
  c->r[3]=0u+0x00000000u; // 800DDCCC
  c->r[4]=0u+0x00000000u; // 800DDCD0
  c->r[5]=0u+0x00000000u; // 800DDCD4
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDCD8
  c->lr=0x800DDCE0u; f_800B8440(c); // 800DDCDC
  goto L_800DDD1C; // 800DDCE0
L_800DDCE4:;
  c->lr=0x800DDCE8u; f_800B8578(c); // 800DDCE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCE8
  if (crb(c,2)) { goto L_800DDD1C; } // 800DDCEC
  c->lr=0x800DDCF4u; f_800A23BC(c); // 800DDCF0
  c->lr=0x800DDCF8u; f_800A23C8(c); // 800DDCF4
  c->lr=0x800DDCFCu; f_800CDEF0(c); // 800DDCF8
  cmps(c,0,(int32_t)c->r[3],0); // 800DDCFC
  if (!crb(c,2)) { goto L_800DDD1C; } // 800DDD00
  c->r[3]=c->r[31]|c->r[31]; // 800DDD04
  c->r[4]=0u+0x00000001u; // 800DDD08
  c->lr=0x800DDD10u; f_800DAFDC(c); // 800DDD0C
  c->r[3]=c->r[31]+0x0000002Cu; // 800DDD10
  c->r[4]=0u+0x0000001Bu; // 800DDD14
  c->lr=0x800DDD1Cu; f_800BB8E4(c); // 800DDD18
L_800DDD1C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDD1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDD20
  c->lr=c->r[0]; // 800DDD24
  c->r[1]=c->r[1]+0x00000010u; // 800DDD28
  return; // 800DDD2C
}

// fn_800DDD30
void f_800DDD30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDD30
  c->r[4]=0u+0x0000001Cu; // 800DDD34
  f_800BB8E4(c); return; // 800DDD38
}

// fn_800DDD3C
void f_800DDD3C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDD3C
  c->r[4]=0u+0x0000001Du; // 800DDD40
  f_800BB8E4(c); return; // 800DDD44
}

// fn_800DDD48
void f_800DDD48(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000028u); // 800DDD48
  c->r[0]=rotl(c->r[4],0)&0x00001000u; // 800DDD4C
  cmps(c,0,(int32_t)c->r[0],0); // 800DDD50
  if (crb(c,2)) return; // 800DDD54
  c->r[0]=rotl(c->r[4],0)&0xFFFFEFFFu; // 800DDD58
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DDD5C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDD60
  c->r[4]=0u+0x0000001Eu; // 800DDD64
  f_800BB8E4(c); return; // 800DDD68
  return; // 800DDD6C
}

// fn_800DDD70
void f_800DDD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDD70
  c->r[0]=c->lr; // 800DDD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDD78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDD7C
  c->r[31]=c->r[3]|c->r[3]; // 800DDD80
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDD84
  c->lr=0x800DDD8Cu; f_800BB8EC(c); // 800DDD88
  cmps(c,0,(int32_t)c->r[3],0); // 800DDD8C
  if (crb(c,2)) { goto L_800DDDB8; } // 800DDD90
  c->lr=0x800DDD98u; f_800A23BC(c); // 800DDD94
  c->lr=0x800DDD9Cu; f_800A23C8(c); // 800DDD98
  c->lr=0x800DDDA0u; f_800CA8B8(c); // 800DDD9C
  c->r[3]=0u+0x00000000u; // 800DDDA0
  c->r[4]=0u+0x00000000u; // 800DDDA4
  c->r[5]=0u+0x00000000u; // 800DDDA8
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDDAC
  c->lr=0x800DDDB4u; f_800B8308(c); // 800DDDB0
  goto L_800DDDE0; // 800DDDB4
L_800DDDB8:;
  c->lr=0x800DDDBCu; f_800B8578(c); // 800DDDB8
  cmps(c,0,(int32_t)c->r[3],0); // 800DDDBC
  if (crb(c,2)) { goto L_800DDDE0; } // 800DDDC0
  c->lr=0x800DDDC8u; f_800A23BC(c); // 800DDDC4
  c->lr=0x800DDDCCu; f_800A23C4(c); // 800DDDC8
  c->r[4]=0u+0x00000007u; // 800DDDCC
  c->lr=0x800DDDD4u; f_800D88CC(c); // 800DDDD0
  c->r[3]=c->r[31]+0x0000002Cu; // 800DDDD4
  c->r[4]=0u+0x00000001u; // 800DDDD8
  c->lr=0x800DDDE0u; f_800BB8E4(c); // 800DDDDC
L_800DDDE0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDDE4
  c->lr=c->r[0]; // 800DDDE8
  c->r[1]=c->r[1]+0x00000010u; // 800DDDEC
  return; // 800DDDF0
}

// fn_800DDDF4
void f_800DDDF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDDF4
  c->r[0]=c->lr; // 800DDDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDDFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDE00
  c->r[31]=c->r[3]|c->r[3]; // 800DDE04
  c->r[3]=c->r[3]+0x0000002Cu; // 800DDE08
  c->lr=0x800DDE10u; f_800BB8EC(c); // 800DDE0C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDE10
  if (crb(c,2)) { goto L_800DDE5C; } // 800DDE14
  c->r[3]=c->r[31]|c->r[31]; // 800DDE18
  c->lr=0x800DDE20u; f_800E1108(c); // 800DDE1C
  c->lr=0x800DDE24u; f_80154798(c); // 800DDE20
  c->r[3]=c->r[31]|c->r[31]; // 800DDE24
  c->r[4]=0u+0x00000000u; // 800DDE28
  c->r[5]=0u+0x00000000u; // 800DDE2C
  c->lr=0x800DDE34u; f_800DB5BC(c); // 800DDE30
  c->r[3]=c->r[31]|c->r[31]; // 800DDE34
  c->r[4]=0u+0x00000000u; // 800DDE38
  c->r[5]=0u+0x00000001u; // 800DDE3C
  c->lr=0x800DDE44u; f_800DB5BC(c); // 800DDE40
  c->r[3]=0u+0x00000000u; // 800DDE44
  c->r[4]=0u+0x00000000u; // 800DDE48
  c->r[5]=0u+0x00000000u; // 800DDE4C
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDE50
  c->lr=0x800DDE58u; f_800B8440(c); // 800DDE54
  goto L_800DDECC; // 800DDE58
L_800DDE5C:;
  c->lr=0x800DDE60u; f_800B8578(c); // 800DDE5C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDE60
  if (crb(c,2)) { goto L_800DDECC; } // 800DDE64
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DDE68
  cmps(c,0,(int32_t)c->r[0],0); // 800DDE6C
  if (!crb(c,2)) { goto L_800DDE9C; } // 800DDE70
  c->lr=0x800DDE78u; f_800A23BC(c); // 800DDE74
  c->lr=0x800DDE7Cu; f_800A23C8(c); // 800DDE78
  c->r[4]=0u+0x00000002u; // 800DDE7C
  c->lr=0x800DDE84u; f_800CA898(c); // 800DDE80
  c->lr=0x800DDE88u; f_800A23BC(c); // 800DDE84
  c->lr=0x800DDE8Cu; f_800A23C8(c); // 800DDE88
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DDE8C
  c->r[5]=0u+0x00000000u; // 800DDE90
  c->lr=0x800DDE98u; f_800CE664(c); // 800DDE94
  goto L_800DDEC0; // 800DDE98
L_800DDE9C:;
  c->lr=0x800DDEA0u; f_800A23BC(c); // 800DDE9C
  c->lr=0x800DDEA4u; f_800A23C8(c); // 800DDEA0
  c->r[4]=0u+0x00000001u; // 800DDEA4
  c->lr=0x800DDEACu; f_800CA898(c); // 800DDEA8
  c->lr=0x800DDEB0u; f_800A23BC(c); // 800DDEAC
  c->lr=0x800DDEB4u; f_800A23C8(c); // 800DDEB0
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DDEB4
  c->r[5]=0u+0x00000000u; // 800DDEB8
  c->lr=0x800DDEC0u; f_800CE664(c); // 800DDEBC
L_800DDEC0:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800DDEC0
  c->r[4]=0u+0x00000020u; // 800DDEC4
  c->lr=0x800DDECCu; f_800BB8E4(c); // 800DDEC8
L_800DDECC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DDECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDED0
  c->lr=c->r[0]; // 800DDED4
  c->r[1]=c->r[1]+0x00000010u; // 800DDED8
  return; // 800DDEDC
}

// fn_800DDEE0
void f_800DDEE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDEE0
  c->r[0]=c->lr; // 800DDEE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DDEE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DDEEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DDEF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DDEF4
  c->r[29]=c->r[3]|c->r[3]; // 800DDEF8
  c->lr=0x800DDF00u; f_800A23BC(c); // 800DDEFC
  c->lr=0x800DDF04u; f_800A23C8(c); // 800DDF00
  c->lr=0x800DDF08u; f_800CDEF0(c); // 800DDF04
  cmps(c,0,(int32_t)c->r[3],0); // 800DDF08
  if (!crb(c,2)) { goto L_800DDFE0; } // 800DDF0C
  c->r[3]=R32(c->r[29]+0x00000060u); // 800DDF10
  c->r[0]=c->r[3]+0x00000001u; // 800DDF14
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800DDF18
  W32(c->r[29]+0x00000060u,c->r[0]); // 800DDF1C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DDF20
  c->r[3]=c->r[29]+c->r[0]; // 800DDF24
  c->r[31]=R32(c->r[3]+0x00000064u); // 800DDF28
  c->lr=0x800DDF30u; f_800A23BC(c); // 800DDF2C
  c->lr=0x800DDF34u; f_800BB700(c); // 800DDF30
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DDF34
  c->lr=0x800DDF3Cu; f_800BBEA4(c); // 800DDF38
  c->r[30]=c->r[3]|c->r[3]; // 800DDF3C
  c->lr=0x800DDF44u; f_800A23BC(c); // 800DDF40
  c->lr=0x800DDF48u; f_800BB700(c); // 800DDF44
  c->r[4]=c->r[30]|c->r[30]; // 800DDF48
  c->lr=0x800DDF50u; f_800BBE64(c); // 800DDF4C
  c->lr=0x800DDF54u; f_800CA598(c); // 800DDF50
  c->lr=0x800DDF58u; f_800A23BC(c); // 800DDF54
  c->lr=0x800DDF5Cu; f_800BB700(c); // 800DDF58
  c->r[4]=c->r[30]|c->r[30]; // 800DDF5C
  c->lr=0x800DDF64u; f_800BBE64(c); // 800DDF60
  c->r[4]=0u+0x00000000u; // 800DDF64
  c->lr=0x800DDF6Cu; f_800D2CA0(c); // 800DDF68
  c->lr=0x800DDF70u; f_800A23BC(c); // 800DDF6C
  c->lr=0x800DDF74u; f_800BB700(c); // 800DDF70
  c->r[4]=c->r[30]|c->r[30]; // 800DDF74
  c->lr=0x800DDF7Cu; f_800BBE64(c); // 800DDF78
  c->r[4]=0u+0x00000002u; // 800DDF7C
  c->lr=0x800DDF84u; f_800D2748(c); // 800DDF80
  c->lr=0x800DDF88u; f_800A23BC(c); // 800DDF84
  c->lr=0x800DDF8Cu; f_800BB818(c); // 800DDF88
  c->r[4]=0u+0x00000001u; // 800DDF8C
  c->lr=0x800DDF94u; f_800BBF74(c); // 800DDF90
  c->lr=0x800DDF98u; f_800CF4C4(c); // 800DDF94
  c->r[30]=c->r[3]|c->r[3]; // 800DDF98
  c->lr=0x800DDFA0u; f_800A23BC(c); // 800DDF9C
  c->lr=0x800DDFA4u; f_800BB818(c); // 800DDFA0
  c->r[4]=0u+0x00000002u; // 800DDFA4
  c->lr=0x800DDFACu; f_800BBF74(c); // 800DDFA8
  c->r[4]=c->r[30]|c->r[30]; // 800DDFAC
  c->r[5]=0u+0x00000001u; // 800DDFB0
  c->lr=0x800DDFB8u; f_800D348C(c); // 800DDFB4
  c->lr=0x800DDFBCu; f_800A23BC(c); // 800DDFB8
  c->lr=0x800DDFC0u; f_800BB818(c); // 800DDFBC
  c->r[4]=0u+0x00000002u; // 800DDFC0
  c->lr=0x800DDFC8u; f_800BBF74(c); // 800DDFC4
  c->r[4]=c->r[31]|c->r[31]; // 800DDFC8
  c->r[5]=0u+0x00000000u; // 800DDFCC
  c->lr=0x800DDFD4u; f_800D3578(c); // 800DDFD0
  c->r[3]=c->r[29]+0x0000002Cu; // 800DDFD4
  c->r[4]=0u+0x00000021u; // 800DDFD8
  c->lr=0x800DDFE0u; f_800BB8E4(c); // 800DDFDC
L_800DDFE0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DDFE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DDFE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DDFE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDFEC
  c->lr=c->r[0]; // 800DDFF0
  c->r[1]=c->r[1]+0x00000020u; // 800DDFF4
  return; // 800DDFF8
}

// fn_800DDFFC
void f_800DDFFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDFFC
  c->r[0]=c->lr; // 800DE000
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE008
  c->r[31]=c->r[3]|c->r[3]; // 800DE00C
  c->r[3]=c->r[3]+0x0000002Cu; // 800DE010
  c->lr=0x800DE018u; f_800BB8EC(c); // 800DE014
  cmps(c,0,(int32_t)c->r[3],0); // 800DE018
  if (!crb(c,2)) { goto L_800DE040; } // 800DE01C
  c->lr=0x800DE024u; f_800A23BC(c); // 800DE020
  c->lr=0x800DE028u; f_800BB800(c); // 800DE024
  c->lr=0x800DE02Cu; f_800C9C38(c); // 800DE028
  cmps(c,0,(int32_t)c->r[3],0); // 800DE02C
  if (crb(c,2)) { goto L_800DE040; } // 800DE030
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE034
  c->r[4]=0u+0x00000022u; // 800DE038
  c->lr=0x800DE040u; f_800BB8E4(c); // 800DE03C
L_800DE040:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE040
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE044
  c->lr=c->r[0]; // 800DE048
  c->r[1]=c->r[1]+0x00000010u; // 800DE04C
  return; // 800DE050
}

// fn_800DE054
void f_800DE054(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE054
  c->r[0]=c->lr; // 800DE058
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE05C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE060
  c->r[31]=c->r[3]|c->r[3]; // 800DE064
  c->r[3]=c->r[3]+0x0000002Cu; // 800DE068
  c->lr=0x800DE070u; f_800BB8EC(c); // 800DE06C
  cmps(c,0,(int32_t)c->r[3],0); // 800DE070
  if (crb(c,2)) { goto L_800DE0B8; } // 800DE074
  c->r[3]=0u+0x00000000u; // 800DE078
  c->r[4]=0u+0x00000000u; // 800DE07C
  c->r[5]=0u+0x00000000u; // 800DE080
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE084
  c->lr=0x800DE08Cu; f_800B8308(c); // 800DE088
  c->lr=0x800DE090u; f_800A23BC(c); // 800DE08C
  c->lr=0x800DE094u; f_800BB818(c); // 800DE090
  c->r[4]=0u+0x00000001u; // 800DE094
  c->lr=0x800DE09Cu; f_800BBF74(c); // 800DE098
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DE09C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DE0A0
  c->r[4]=c->r[31]+c->r[0]; // 800DE0A4
  c->r[4]=R32(c->r[4]+0x00000064u); // 800DE0A8
  c->r[5]=0u+0x00000000u; // 800DE0AC
  c->lr=0x800DE0B4u; f_800D3578(c); // 800DE0B0
  goto L_800DE120; // 800DE0B4
L_800DE0B8:;
  c->lr=0x800DE0BCu; f_800A23BC(c); // 800DE0B8
  c->lr=0x800DE0C0u; f_800BB818(c); // 800DE0BC
  c->r[4]=0u+0x00000001u; // 800DE0C0
  c->lr=0x800DE0C8u; f_800BBF74(c); // 800DE0C4
  c->lr=0x800DE0CCu; f_800D3688(c); // 800DE0C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DE0CC
  if (crb(c,2)) { goto L_800DE120; } // 800DE0D0
  c->r[3]=R32(c->r[31]+0x00000060u); // 800DE0D4
  c->r[0]=c->r[3]+0x00000001u; // 800DE0D8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800DE0DC
  W32(c->r[31]+0x00000060u,c->r[0]); // 800DE0E0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE0E4
  {uint32_t ea=c->r[31]+0x00000058u; WF32(ea,c->f[0]);} // 800DE0E8
  c->lr=0x800DE0F0u; f_800A23BC(c); // 800DE0EC
  c->lr=0x800DE0F4u; f_800BB818(c); // 800DE0F0
  c->r[4]=0u+0x00000001u; // 800DE0F4
  c->lr=0x800DE0FCu; f_800BBF74(c); // 800DE0F8
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DE0FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DE100
  c->r[4]=c->r[31]+c->r[0]; // 800DE104
  c->r[4]=R32(c->r[4]+0x00000064u); // 800DE108
  c->r[5]=0u+0x00000000u; // 800DE10C
  c->lr=0x800DE114u; f_800D3578(c); // 800DE110
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE114
  c->r[4]=0u+0x00000023u; // 800DE118
  c->lr=0x800DE120u; f_800BB8E4(c); // 800DE11C
L_800DE120:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE120
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE124
  c->lr=c->r[0]; // 800DE128
  c->r[1]=c->r[1]+0x00000010u; // 800DE12C
  return; // 800DE130
}

// fn_800DE134
void f_800DE134(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE134
  c->r[0]=c->lr; // 800DE138
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE13C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE140
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE144
  c->r[30]=c->r[3]|c->r[3]; // 800DE148
  c->r[3]=c->r[3]+0x0000002Cu; // 800DE14C
  c->lr=0x800DE154u; f_800BB8EC(c); // 800DE150
  cmps(c,0,(int32_t)c->r[3],0); // 800DE154
  if (crb(c,2)) { goto L_800DE174; } // 800DE158
  c->r[3]=0u+0x00000000u; // 800DE15C
  c->r[4]=0u+0x00000000u; // 800DE160
  c->r[5]=0u+0x00000000u; // 800DE164
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE168
  c->lr=0x800DE170u; f_800B8440(c); // 800DE16C
  goto L_800DE224; // 800DE170
L_800DE174:;
  c->lr=0x800DE178u; f_800B8578(c); // 800DE174
  cmps(c,0,(int32_t)c->r[3],0); // 800DE178
  if (crb(c,2)) { goto L_800DE224; } // 800DE17C
  c->lr=0x800DE184u; f_800A23BC(c); // 800DE180
  c->lr=0x800DE188u; f_800BB700(c); // 800DE184
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DE188
  c->lr=0x800DE190u; f_800BBEA4(c); // 800DE18C
  c->r[31]=c->r[3]|c->r[3]; // 800DE190
  c->lr=0x800DE198u; f_800A23BC(c); // 800DE194
  c->lr=0x800DE19Cu; f_800BB700(c); // 800DE198
  c->r[4]=c->r[31]|c->r[31]; // 800DE19C
  c->lr=0x800DE1A4u; f_800BBE64(c); // 800DE1A0
  c->r[4]=0u+0x00000000u; // 800DE1A4
  c->lr=0x800DE1ACu; f_800D2748(c); // 800DE1A8
  c->lr=0x800DE1B0u; f_800A23BC(c); // 800DE1AC
  c->lr=0x800DE1B4u; f_800BB700(c); // 800DE1B0
  c->r[4]=c->r[31]|c->r[31]; // 800DE1B4
  c->lr=0x800DE1BCu; f_800BBE64(c); // 800DE1B8
  c->lr=0x800DE1C0u; f_800CA338(c); // 800DE1BC
  c->r[0]=R32(c->r[30]+0x00000060u); // 800DE1C0
  cmps(c,0,(int32_t)c->r[0],0); // 800DE1C4
  if (!crb(c,2)) { goto L_800DE1F4; } // 800DE1C8
  c->lr=0x800DE1D0u; f_800A23BC(c); // 800DE1CC
  c->lr=0x800DE1D4u; f_800A23C8(c); // 800DE1D0
  c->r[4]=0u+0x00000003u; // 800DE1D4
  c->lr=0x800DE1DCu; f_800CA898(c); // 800DE1D8
  c->lr=0x800DE1E0u; f_800A23BC(c); // 800DE1DC
  c->lr=0x800DE1E4u; f_800A23C8(c); // 800DE1E0
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DE1E4
  c->r[5]=0u+0x00000000u; // 800DE1E8
  c->lr=0x800DE1F0u; f_800CE664(c); // 800DE1EC
  goto L_800DE218; // 800DE1F0
L_800DE1F4:;
  c->lr=0x800DE1F8u; f_800A23BC(c); // 800DE1F4
  c->lr=0x800DE1FCu; f_800A23C8(c); // 800DE1F8
  c->r[4]=0u+0x00000004u; // 800DE1FC
  c->lr=0x800DE204u; f_800CA898(c); // 800DE200
  c->lr=0x800DE208u; f_800A23BC(c); // 800DE204
  c->lr=0x800DE20Cu; f_800A23C8(c); // 800DE208
  c->r[4]=c->r[13]+0xFFFF8968u; // 800DE20C
  c->r[5]=0u+0x00000000u; // 800DE210
  c->lr=0x800DE218u; f_800CE664(c); // 800DE214
L_800DE218:;
  c->r[3]=c->r[30]+0x0000002Cu; // 800DE218
  c->r[4]=0u+0x00000024u; // 800DE21C
  c->lr=0x800DE224u; f_800BB8E4(c); // 800DE220
L_800DE224:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE224
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE228
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE22C
  c->lr=c->r[0]; // 800DE230
  c->r[1]=c->r[1]+0x00000010u; // 800DE234
  return; // 800DE238
}

// fn_800DE23C
void f_800DE23C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE23C
  c->r[0]=c->lr; // 800DE240
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE244
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE248
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE24C
  c->r[30]=c->r[3]|c->r[3]; // 800DE250
  c->lr=0x800DE258u; f_800A23BC(c); // 800DE254
  c->lr=0x800DE25Cu; f_800A23C8(c); // 800DE258
  c->lr=0x800DE260u; f_800CDEF0(c); // 800DE25C
  cmps(c,0,(int32_t)c->r[3],0); // 800DE260
  if (!crb(c,2)) { goto L_800DE2D4; } // 800DE264
  c->lr=0x800DE26Cu; f_800A23BC(c); // 800DE268
  c->lr=0x800DE270u; f_800BB800(c); // 800DE26C
  c->lr=0x800DE274u; f_800C9C38(c); // 800DE270
  cmps(c,0,(int32_t)c->r[3],0); // 800DE274
  if (crb(c,2)) { goto L_800DE2D4; } // 800DE278
  c->lr=0x800DE280u; f_800A23BC(c); // 800DE27C
  c->lr=0x800DE284u; f_800A23C8(c); // 800DE280
  c->lr=0x800DE288u; f_800CA8B8(c); // 800DE284
  c->lr=0x800DE28Cu; f_800A23BC(c); // 800DE288
  c->lr=0x800DE290u; f_800BB700(c); // 800DE28C
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800DE290
  c->lr=0x800DE298u; f_800BBEA4(c); // 800DE294
  c->r[31]=c->r[3]|c->r[3]; // 800DE298
  c->lr=0x800DE2A0u; f_800A23BC(c); // 800DE29C
  c->lr=0x800DE2A4u; f_800BB700(c); // 800DE2A0
  c->r[4]=c->r[31]|c->r[31]; // 800DE2A4
  c->lr=0x800DE2ACu; f_800BBE64(c); // 800DE2A8
  c->r[4]=0u+0x00000001u; // 800DE2AC
  c->lr=0x800DE2B4u; f_800D2CA0(c); // 800DE2B0
  c->r[3]=0u+0x00000000u; // 800DE2B4
  c->r[4]=0u+0x00000000u; // 800DE2B8
  c->r[5]=0u+0x00000000u; // 800DE2BC
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE2C0
  c->lr=0x800DE2C8u; f_800B8308(c); // 800DE2C4
  c->r[3]=c->r[30]+0x0000002Cu; // 800DE2C8
  c->r[4]=0u+0x00000025u; // 800DE2CC
  c->lr=0x800DE2D4u; f_800BB8E4(c); // 800DE2D0
L_800DE2D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE2D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE2D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE2DC
  c->lr=c->r[0]; // 800DE2E0
  c->r[1]=c->r[1]+0x00000010u; // 800DE2E4
  return; // 800DE2E8
}

// fn_800DE2EC
void f_800DE2EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE2EC
  c->r[0]=c->lr; // 800DE2F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE2F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE2F8
  c->r[31]=c->r[3]|c->r[3]; // 800DE2FC
  c->lr=0x800DE304u; f_800B8578(c); // 800DE300
  cmps(c,0,(int32_t)c->r[3],0); // 800DE304
  if (crb(c,2)) { goto L_800DE360; } // 800DE308
  c->r[3]=c->r[31]|c->r[31]; // 800DE30C
  c->r[4]=0u+0x00000000u; // 800DE310
  c->lr=0x800DE318u; f_800DB448(c); // 800DE314
  c->r[4]=c->r[3]|c->r[3]; // 800DE318
  c->r[3]=c->r[31]|c->r[31]; // 800DE31C
  c->r[5]=0u+0x00000000u; // 800DE320
  c->lr=0x800DE328u; f_800DB5BC(c); // 800DE324
  c->r[3]=c->r[31]|c->r[31]; // 800DE328
  c->r[4]=0u+0x00000001u; // 800DE32C
  c->lr=0x800DE334u; f_800DB448(c); // 800DE330
  c->r[4]=c->r[3]|c->r[3]; // 800DE334
  c->r[3]=c->r[31]|c->r[31]; // 800DE338
  c->r[5]=0u+0x00000001u; // 800DE33C
  c->lr=0x800DE344u; f_800DB5BC(c); // 800DE340
  c->lr=0x800DE348u; f_800A23BC(c); // 800DE344
  c->lr=0x800DE34Cu; f_800A23C4(c); // 800DE348
  c->r[4]=0u+0x00000007u; // 800DE34C
  c->lr=0x800DE354u; f_800D88CC(c); // 800DE350
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE354
  c->r[4]=0u+0x00000001u; // 800DE358
  c->lr=0x800DE360u; f_800BB8E4(c); // 800DE35C
L_800DE360:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE360
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE364
  c->lr=c->r[0]; // 800DE368
  c->r[1]=c->r[1]+0x00000010u; // 800DE36C
  return; // 800DE370
}

// fn_800DE374
void f_800DE374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE374
  c->r[0]=c->lr; // 800DE378
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE37C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE380
  c->r[31]=c->r[3]|c->r[3]; // 800DE384
  c->r[3]=c->r[3]+0x0000002Cu; // 800DE388
  c->lr=0x800DE390u; f_800BB8EC(c); // 800DE38C
  cmps(c,0,(int32_t)c->r[3],0); // 800DE390
  if (crb(c,2)) { goto L_800DE3CC; } // 800DE394
  c->lr=0x800DE39Cu; f_800A23BC(c); // 800DE398
  c->lr=0x800DE3A0u; f_800A23C8(c); // 800DE39C
  c->lr=0x800DE3A4u; f_800CA888(c); // 800DE3A0
  c->lr=0x800DE3A8u; f_800A23BC(c); // 800DE3A4
  c->lr=0x800DE3ACu; f_800A23C4(c); // 800DE3A8
  c->r[4]=0u+0x00000003u; // 800DE3AC
  c->lr=0x800DE3B4u; f_800D8804(c); // 800DE3B0
  c->r[3]=0u+0x00000000u; // 800DE3B4
  c->r[4]=0u+0x00000000u; // 800DE3B8
  c->r[5]=0u+0x00000000u; // 800DE3BC
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE3C0
  c->lr=0x800DE3C8u; f_800B8440(c); // 800DE3C4
  goto L_800DE424; // 800DE3C8
L_800DE3CC:;
  c->lr=0x800DE3D0u; f_800B8578(c); // 800DE3CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE3D0
  if (crb(c,2)) { goto L_800DE424; } // 800DE3D4
  c->r[3]=c->r[31]|c->r[31]; // 800DE3D8
  c->r[4]=0u+0x00000000u; // 800DE3DC
  c->r[5]=0u+0x00000000u; // 800DE3E0
  c->lr=0x800DE3E8u; f_800DB5BC(c); // 800DE3E4
  c->r[3]=c->r[31]|c->r[31]; // 800DE3E8
  c->r[4]=0u+0x00000000u; // 800DE3EC
  c->r[5]=0u+0x00000001u; // 800DE3F0
  c->lr=0x800DE3F8u; f_800DB5BC(c); // 800DE3F4
  c->lr=0x800DE3FCu; f_800A23BC(c); // 800DE3F8
  c->lr=0x800DE400u; f_800A23C8(c); // 800DE3FC
  c->lr=0x800DE404u; f_800CDEF0(c); // 800DE400
  cmps(c,0,(int32_t)c->r[3],0); // 800DE404
  if (!crb(c,2)) { goto L_800DE424; } // 800DE408
  c->r[3]=c->r[31]|c->r[31]; // 800DE40C
  c->r[4]=0u+0x00000001u; // 800DE410
  c->lr=0x800DE418u; f_800DAFDC(c); // 800DE414
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE418
  c->r[4]=0u+0x00000027u; // 800DE41C
  c->lr=0x800DE424u; f_800BB8E4(c); // 800DE420
L_800DE424:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE424
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE428
  c->lr=c->r[0]; // 800DE42C
  c->r[1]=c->r[1]+0x00000010u; // 800DE430
  return; // 800DE434
}

// fn_800DE438
void f_800DE438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE438
  c->r[0]=c->lr; // 800DE43C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE444
  c->r[31]=c->r[3]|c->r[3]; // 800DE448
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800DE44C
  W32(c->r[3]+0x00000044u,c->r[0]); // 800DE450
  c->lr=0x800DE458u; f_800A23BC(c); // 800DE454
  c->lr=0x800DE45Cu; f_800A23C4(c); // 800DE458
  c->r[4]=0u+0x00000007u; // 800DE45C
  c->lr=0x800DE464u; f_800D88CC(c); // 800DE460
  c->lr=0x800DE468u; f_800A23BC(c); // 800DE464
  c->lr=0x800DE46Cu; f_800C23FC(c); // 800DE468
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE46C
  c->r[4]=0u+0x00000001u; // 800DE470
  c->lr=0x800DE478u; f_800BB8E4(c); // 800DE474
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE478
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE47C
  c->lr=c->r[0]; // 800DE480
  c->r[1]=c->r[1]+0x00000010u; // 800DE484
  return; // 800DE488
}

// fn_800DE48C
void f_800DE48C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE48C
  c->r[0]=c->lr; // 800DE490
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DE494
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800DE498
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800DE49C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800DE4A0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800DE4A4
  W32(c->r[1]+0x00000034u,c->r[29]); // 800DE4A8
  W32(c->r[1]+0x00000030u,c->r[28]); // 800DE4AC
  c->r[31]=c->r[3]|c->r[3]; // 800DE4B0
  c->r[3]=c->r[1]+0x00000020u; // 800DE4B4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE4B8
  c->f[2]=c->f[1]; // 800DE4BC
  c->f[3]=c->f[1]; // 800DE4C0
  c->lr=0x800DE4C8u; f_8004E34C(c); // 800DE4C4
  c->r[3]=c->r[1]+0x00000014u; // 800DE4C8
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE4CC
  c->f[2]=c->f[1]; // 800DE4D0
  c->f[3]=c->f[1]; // 800DE4D4
  c->lr=0x800DE4DCu; f_8004E34C(c); // 800DE4D8
  c->r[3]=c->r[1]+0x00000008u; // 800DE4DC
  c->lr=0x800DE4E4u; f_8004B0A4(c); // 800DE4E0
  c->lr=0x800DE4E8u; f_800A23BC(c); // 800DE4E4
  c->lr=0x800DE4ECu; f_800A23C4(c); // 800DE4E8
  c->lr=0x800DE4F0u; f_800BBF6C(c); // 800DE4EC
  c->r[28]=c->r[3]|c->r[3]; // 800DE4F0
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE4F4
  c->lr=0x800DE4FCu; f_800BB910(c); // 800DE4F8
  c->r[3]=c->r[31]+0x0000002Cu; // 800DE4FC
  c->lr=0x800DE504u; f_800BB904(c); // 800DE500
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800DE504
  c->r[3]=0u+0x80460000u; // 800DE508
  c->r[0]=c->r[3]+0x000006E8u; // 800DE50C
  c->r[12]=c->r[0]+c->r[4]; // 800DE510
  c->r[3]=c->r[31]|c->r[31]; // 800DE514
  c->lr=0x800DE51Cu; f_802F09D0(c); // 800DE518
  c->r[0]=c->r[0]|0x00000000u; // 800DE51C
  c->r[0]=R32(c->r[31]+0x00000028u); // 800DE520
  c->r[0]=rotl(c->r[0],0)&0x00100000u; // 800DE524
  cmps(c,0,(int32_t)c->r[0],0); // 800DE528
  if (crb(c,2)) { goto L_800DE62C; } // 800DE52C
  c->r[29]=0u+0x00000000u; // 800DE530
  c->r[30]=c->r[31]+0x0000057Cu; // 800DE534
  goto L_800DE54C; // 800DE538
L_800DE53C:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE53C
  c->lr=0x800DE544u; f_800D60C4(c); // 800DE540
  c->r[30]=c->r[30]+0x0000004Cu; // 800DE544
  c->r[29]=c->r[29]+0x00000001u; // 800DE548
L_800DE54C:;
  c->r[0]=R32(c->r[31]+0x00000F48u); // 800DE54C
  cmpu(c,0,c->r[29],c->r[0]); // 800DE550
  if (crb(c,0)) { IRQCHK(c); goto L_800DE53C; } // 800DE554
  c->r[29]=0u+0x00000000u; // 800DE558
  c->r[30]=c->r[31]+0x00000170u; // 800DE55C
  goto L_800DE574; // 800DE560
L_800DE564:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE564
  c->lr=0x800DE56Cu; f_800D6AE4(c); // 800DE568
  c->r[30]=c->r[30]+0x00000040u; // 800DE56C
  c->r[29]=c->r[29]+0x00000001u; // 800DE570
L_800DE574:;
  c->r[0]=R32(c->r[31]+0x00000570u); // 800DE574
  cmpu(c,0,c->r[29],c->r[0]); // 800DE578
  if (crb(c,0)) { IRQCHK(c); goto L_800DE564; } // 800DE57C
  {uint32_t ea=c->r[31]+0x00001EACu; c->f[31]=c->ps1[31]=RF32(ea);} // 800DE580
  cmps(c,0,(int32_t)c->r[28],0); // 800DE584
  if (!crb(c,2)) { goto L_800DE594; } // 800DE588
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DE58C
  goto L_800DE5C8; // 800DE590
L_800DE594:;
  c->lr=0x800DE598u; f_800A23BC(c); // 800DE594
  c->lr=0x800DE59Cu; f_800BB800(c); // 800DE598
  c->r[4]=c->r[28]|c->r[28]; // 800DE59C
  c->lr=0x800DE5A4u; f_800BBD58(c); // 800DE5A0
  c->lr=0x800DE5A8u; f_800BE11C(c); // 800DE5A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DE5A8
  if (!crb(c,2)) { goto L_800DE5B8; } // 800DE5AC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DE5B0
  goto L_800DE5C8; // 800DE5B4
L_800DE5B8:;
  c->lr=0x800DE5BCu; f_800B85C4(c); // 800DE5B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DE5BC
  if (crb(c,2)) { goto L_800DE5C8; } // 800DE5C0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DE5C4
L_800DE5C8:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DE5C8
  c->r[0]=rotl(c->r[3],0)&0x00000020u; // 800DE5CC
  cmps(c,0,(int32_t)c->r[0],0); // 800DE5D0
  if (!crb(c,2)) { goto L_800DE62C; } // 800DE5D4
  c->r[0]=rotl(c->r[3],0)&0x00000010u; // 800DE5D8
  cmps(c,0,(int32_t)c->r[0],0); // 800DE5DC
  if (crb(c,2)) { goto L_800DE62C; } // 800DE5E0
  c->lr=0x800DE5E8u; f_800A23BC(c); // 800DE5E4
  c->lr=0x800DE5ECu; f_800BB800(c); // 800DE5E8
  c->r[4]=c->r[28]|c->r[28]; // 800DE5EC
  c->lr=0x800DE5F4u; f_800C1284(c); // 800DE5F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE5F4
  if (crb(c,2)) { goto L_800DE62C; } // 800DE5F8
  c->r[29]=0u+0x00000000u; // 800DE5FC
  c->r[30]=c->r[31]+0x0000199Cu; // 800DE600
  goto L_800DE620; // 800DE604
L_800DE608:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE608
  c->r[4]=c->r[31]+0x00001EA0u; // 800DE60C
  c->f[1]=c->f[31]; // 800DE610
  c->lr=0x800DE618u; f_800D5994(c); // 800DE614
  c->r[30]=c->r[30]+0x00000050u; // 800DE618
  c->r[29]=c->r[29]+0x00000001u; // 800DE61C
L_800DE620:;
  c->r[0]=R32(c->r[31]+0x00001E9Cu); // 800DE620
  cmpu(c,0,c->r[29],c->r[0]); // 800DE624
  if (crb(c,0)) { IRQCHK(c); goto L_800DE608; } // 800DE628
L_800DE62C:;
  c->r[3]=c->r[31]+0x00001964u; // 800DE62C
  c->lr=0x800DE634u; f_800D53E4(c); // 800DE630
  c->r[3]=c->r[31]+0x00001934u; // 800DE634
  c->lr=0x800DE63Cu; f_800D3E8C(c); // 800DE638
  c->r[29]=0u+0x00000000u; // 800DE63C
  c->r[30]=c->r[31]+0x0000153Cu; // 800DE640
L_800DE644:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE644
  c->lr=0x800DE64Cu; f_800D4048(c); // 800DE648
  c->r[30]=c->r[30]+0x00000048u; // 800DE64C
  c->r[29]=c->r[29]+0x00000001u; // 800DE650
  cmpu(c,0,c->r[29],0x00000008u); // 800DE654
  if (crb(c,0)) { IRQCHK(c); goto L_800DE644; } // 800DE658
  c->r[29]=0u+0x00000000u; // 800DE65C
  c->r[30]=c->r[31]+0x0000177Cu; // 800DE660
  goto L_800DE678; // 800DE664
L_800DE668:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE668
  c->lr=0x800DE670u; f_800D4CC0(c); // 800DE66C
  c->r[30]=c->r[30]+0x00000034u; // 800DE670
  c->r[29]=c->r[29]+0x00000001u; // 800DE674
L_800DE678:;
  c->r[0]=R32(c->r[31]+0x0000191Cu); // 800DE678
  cmpu(c,0,c->r[29],c->r[0]); // 800DE67C
  if (crb(c,0)) { IRQCHK(c); goto L_800DE668; } // 800DE680
  c->r[3]=c->r[31]|c->r[31]; // 800DE684
  c->lr=0x800DE68Cu; f_800DC158(c); // 800DE688
  c->r[0]=0u+0x00000048u; // 800DE68C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800DE690
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800DE694
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800DE698
  c->r[30]=R32(c->r[1]+0x00000038u); // 800DE69C
  c->r[29]=R32(c->r[1]+0x00000034u); // 800DE6A0
  c->r[28]=R32(c->r[1]+0x00000030u); // 800DE6A4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DE6A8
  c->lr=c->r[0]; // 800DE6AC
  c->r[1]=c->r[1]+0x00000050u; // 800DE6B0
  return; // 800DE6B4
}

// fn_800DE6B8
void f_800DE6B8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800DE6B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800DE6BC
  cmps(c,0,(int32_t)c->r[0],0); // 800DE6C0
  if (!crb(c,2)) return; // 800DE6C4
  c->r[3]=c->r[3]+0x0000002Cu; // 800DE6C8
  c->r[4]=0u+0x00000002u; // 800DE6CC
  f_800BB8E4(c); return; // 800DE6D0
  return; // 800DE6D4
}

// fn_800DE6D8
void f_800DE6D8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000002Cu; // 800DE6D8
  c->r[4]=0u+0x00000004u; // 800DE6DC
  f_800BB8E4(c); return; // 800DE6E0
}

// fn_800DE6E4
void f_800DE6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE6E4
  c->r[0]=c->lr; // 800DE6E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE6EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE6F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DE6F4
  c->r[30]=c->r[3]|c->r[3]; // 800DE6F8
  c->r[31]=R32(c->r[3]+0x00000054u); // 800DE6FC
  c->r[0]=0u+0x00000000u; // 800DE700
  W32(c->r[3]+0x00000054u,c->r[0]); // 800DE704
  c->lr=0x800DE70Cu; f_800A23BC(c); // 800DE708
  c->lr=0x800DE710u; f_800A23B4(c); // 800DE70C
  c->lr=0x800DE714u; f_800CF620(c); // 800DE710
  cmps(c,0,(int32_t)c->r[3],5); // 800DE714
  if (!crb(c,2)) { goto L_800DE738; } // 800DE718
  cmps(c,0,(int32_t)c->r[31],0); // 800DE71C
  if (crb(c,2)) { goto L_800DE738; } // 800DE720
  c->r[3]=c->r[30]|c->r[30]; // 800DE724
  c->r[4]=c->r[31]|c->r[31]; // 800DE728
  c->r[5]=0u+0x00000000u; // 800DE72C
  c->lr=0x800DE734u; f_800DE884(c); // 800DE730
  goto L_800DE748; // 800DE734
L_800DE738:;
  c->r[3]=c->r[30]|c->r[30]; // 800DE738
  c->r[4]=R32(c->r[30]+0x00000048u); // 800DE73C
  c->r[5]=0u+0x00000000u; // 800DE740
  c->lr=0x800DE748u; f_800DE884(c); // 800DE744
L_800DE748:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE748
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DE74C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE750
  c->lr=c->r[0]; // 800DE754
  c->r[1]=c->r[1]+0x00000010u; // 800DE758
  return; // 800DE75C
}

// fn_800DE760
void f_800DE760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE760
  c->r[0]=c->lr; // 800DE764
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DE768
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DE76C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DE770
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE774
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DE778
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DE77C
  c->r[29]=c->r[3]|c->r[3]; // 800DE780
  c->r[30]=c->r[4]|c->r[4]; // 800DE784
  c->f[31]=c->f[1]; // 800DE788
  c->lr=0x800DE790u; f_800A23BC(c); // 800DE78C
  c->lr=0x800DE794u; f_800BB828(c); // 800DE790
  c->r[4]=c->r[13]+0xFFFF88A0u; // 800DE794
  c->lr=0x800DE79Cu; f_800BB9DC(c); // 800DE798
  c->r[31]=c->r[3]|c->r[3]; // 800DE79C
  {uint32_t ea=c->r[29]+0x00001EBCu; WF32(ea,c->f[31]);} // 800DE7A0
  W32(c->r[29]+0x00001EB4u,c->r[30]); // 800DE7A4
  c->r[0]=R32(c->r[29]+0x00001EB0u); // 800DE7A8
  cmps(c,0,(int32_t)c->r[0],0); // 800DE7AC
  if (!crb(c,2)) { goto L_800DE800; } // 800DE7B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE7B4
  if (crb(c,2)) { goto L_800DE7F8; } // 800DE7B8
  c->lr=0x800DE7C0u; f_800A23BC(c); // 800DE7BC
  c->lr=0x800DE7C4u; f_800BB828(c); // 800DE7C0
  c->r[4]=c->r[31]|c->r[31]; // 800DE7C4
  c->lr=0x800DE7CCu; f_800BB99C(c); // 800DE7C8
  c->lr=0x800DE7D0u; f_800CFA4C(c); // 800DE7CC
  cmpu(c,0,c->r[30],c->r[3]); // 800DE7D0
  if (!crb(c,2)) { goto L_800DE7E4; } // 800DE7D4
  c->r[0]=0u+0x00000004u; // 800DE7D8
  W32(c->r[29]+0x00001EB0u,c->r[0]); // 800DE7DC
  goto L_800DE800; // 800DE7E0
L_800DE7E4:;
  {uint32_t ea=c->r[2]+0xFFFF8888u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE7E4
  {uint32_t ea=c->r[29]+0x00001EC0u; WF32(ea,c->f[0]);} // 800DE7E8
  c->r[0]=0u+0x00000001u; // 800DE7EC
  W32(c->r[29]+0x00001EB0u,c->r[0]); // 800DE7F0
  goto L_800DE800; // 800DE7F4
L_800DE7F8:;
  c->r[0]=0u+0x00000003u; // 800DE7F8
  W32(c->r[29]+0x00001EB0u,c->r[0]); // 800DE7FC
L_800DE800:;
  c->r[3]=0u+0x00000000u; // 800DE800
  c->r[0]=0u+0x00000028u; // 800DE804
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800DE808
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DE80C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE810
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DE814
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DE818
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DE81C
  c->lr=c->r[0]; // 800DE820
  c->r[1]=c->r[1]+0x00000030u; // 800DE824
  return; // 800DE828
}

// fn_800DE82C
void f_800DE82C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00001EC0u; WF32(ea,c->f[1]);} // 800DE82C
  c->r[0]=0u+0x00000001u; // 800DE830
  W32(c->r[3]+0x00001EB0u,c->r[0]); // 800DE834
  c->r[0]=0u+0xFFFFFFFFu; // 800DE838
  W32(c->r[3]+0x00001EB4u,c->r[0]); // 800DE83C
  return; // 800DE840
}

// fn_800DE844
void f_800DE844(Ctx* __restrict c) {
  c->r[5]=0u+0x80430000u; // 800DE844
  c->r[5]=c->r[5]+0xFFFFD810u; // 800DE848
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 800DE84C
  c->r[5]=c->r[5]+c->r[0]; // 800DE850
  c->r[0]=R32(c->r[5]+0x00000004u); // 800DE854
  cmps(c,0,(int32_t)c->r[0],0); // 800DE858
  if (!crb(c,0)) { goto L_800DE86C; } // 800DE85C
  W32(c->r[3]+0x00001EDCu,c->r[4]); // 800DE860
  W32(c->r[3]+0x00001EE4u,c->r[4]); // 800DE864
  return; // 800DE868
L_800DE86C:;
  W32(c->r[3]+0x00001EE0u,c->r[4]); // 800DE86C
  W32(c->r[3]+0x00001EE8u,c->r[4]); // 800DE870
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800DE874
  W32(c->r[3]+0x00001EECu,c->r[0]); // 800DE878
  return; // 800DE87C
}

// fn_800DE880
void f_800DE880(Ctx* __restrict c) {
  return; // 800DE880
}

// fn_800DE884
void f_800DE884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE884
  c->r[0]=c->lr; // 800DE888
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DE88C
  c->r[11]=c->r[1]+0x000000A0u; // 800DE890
  c->lr=0x800DE898u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DE894
  c->r[29]=c->r[3]|c->r[3]; // 800DE898
  c->r[30]=c->r[4]|c->r[4]; // 800DE89C
  c->r[31]=c->r[5]|c->r[5]; // 800DE8A0
  c->r[0]=R32(c->r[3]+0x00000028u); // 800DE8A4
  c->r[0]=rotl(c->r[0],0)&0x00040000u; // 800DE8A8
  cmps(c,0,(int32_t)c->r[0],0); // 800DE8AC
  if (!crb(c,2)) { goto L_800DEB54; } // 800DE8B0
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800DE8B4
  c->lr=0x800DE8BCu; f_800BEDE0(c); // 800DE8B8
  c->r[25]=c->r[3]|c->r[3]; // 800DE8BC
  c->lr=0x800DE8C4u; f_800A23BC(c); // 800DE8C0
  c->lr=0x800DE8C8u; f_800A23B4(c); // 800DE8C4
  c->r[4]=c->r[25]|c->r[25]; // 800DE8C8
  c->lr=0x800DE8D0u; f_800BEDA0(c); // 800DE8CC
  c->lr=0x800DE8D4u; f_800CF580(c); // 800DE8D0
  c->r[25]=c->r[3]|c->r[3]; // 800DE8D4
  c->r[3]=c->r[29]|c->r[29]; // 800DE8D8
  c->r[4]=c->r[30]|c->r[30]; // 800DE8DC
  c->lr=0x800DE8E4u; f_800BEDE0(c); // 800DE8E0
  c->r[26]=c->r[3]|c->r[3]; // 800DE8E4
  c->lr=0x800DE8ECu; f_800A23BC(c); // 800DE8E8
  c->lr=0x800DE8F0u; f_800A23B4(c); // 800DE8EC
  c->r[4]=c->r[26]|c->r[26]; // 800DE8F0
  c->lr=0x800DE8F8u; f_800BEDA0(c); // 800DE8F4
  c->lr=0x800DE8FCu; f_800CF580(c); // 800DE8F8
  c->r[26]=c->r[3]|c->r[3]; // 800DE8FC
  c->r[24]=0u+0x00000000u; // 800DE900
  c->r[27]=0u+0x00000000u; // 800DE904
  cmps(c,0,(int32_t)c->r[25],1); // 800DE908
  if (crb(c,2)) { goto L_800DE91C; } // 800DE90C
  cmps(c,0,(int32_t)c->r[25],2); // 800DE910
  if (crb(c,2)) { goto L_800DE91C; } // 800DE914
  c->r[27]=0u+0x00000001u; // 800DE918
L_800DE91C:;
  c->r[28]=0u+0x00000000u; // 800DE91C
  cmps(c,0,(int32_t)c->r[3],1); // 800DE920
  if (crb(c,2)) { goto L_800DE934; } // 800DE924
  cmps(c,0,(int32_t)c->r[3],2); // 800DE928
  if (crb(c,2)) { goto L_800DE934; } // 800DE92C
  c->r[28]=0u+0x00000001u; // 800DE930
L_800DE934:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DE934
  if (!crb(c,2)) { goto L_800DE960; } // 800DE938
  cmps(c,0,(int32_t)c->r[28],0); // 800DE93C
  if (crb(c,2)) { goto L_800DE960; } // 800DE940
  c->r[0]=0u+0x00000006u; // 800DE944
  W32(c->r[29]+0x00001F04u,c->r[0]); // 800DE948
  c->lr=0x800DE950u; f_8007B524(c); // 800DE94C
  c->lr=0x800DE954u; f_8023BBE0(c); // 800DE950
  cmps(c,0,(int32_t)c->r[3],0); // 800DE954
  if (!crb(c,2)) { goto L_800DE960; } // 800DE958
  c->r[24]=0u+0x00000001u; // 800DE95C
L_800DE960:;
  cmps(c,0,(int32_t)c->r[27],0); // 800DE960
  if (!crb(c,2)) { goto L_800DE978; } // 800DE964
  cmps(c,0,(int32_t)c->r[28],0); // 800DE968
  if (!crb(c,2)) { goto L_800DE978; } // 800DE96C
  c->r[0]=0u+0x00000006u; // 800DE970
  W32(c->r[29]+0x00001F04u,c->r[0]); // 800DE974
L_800DE978:;
  c->r[0]=c->r[25]+0xFFFFFFFFu; // 800DE978
  cmpu(c,0,c->r[0],0x00000001u); // 800DE97C
  if (crb(c,1)) { goto L_800DE994; } // 800DE980
  cmps(c,0,(int32_t)c->r[26],4); // 800DE984
  if (!crb(c,2)) { goto L_800DE994; } // 800DE988
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 800DE98C
  W32(c->r[29]+0x0000004Cu,c->r[0]); // 800DE990
L_800DE994:;
  cmps(c,0,(int32_t)c->r[25],4); // 800DE994
  if (!crb(c,2)) { goto L_800DE9A4; } // 800DE998
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 800DE99C
  W32(c->r[29]+0x00000050u,c->r[0]); // 800DE9A0
L_800DE9A4:;
  c->lr=0x800DE9A8u; f_8006E268(c); // 800DE9A4
  c->lr=0x800DE9ACu; f_80073690(c); // 800DE9A8
  cmps(c,0,(int32_t)c->r[3],5); // 800DE9AC
  if (!crb(c,2)) { goto L_800DE9C0; } // 800DE9B0
  c->lr=0x800DE9B8u; f_8007B524(c); // 800DE9B4
  c->r[4]=R32(c->r[29]+0x00001F04u); // 800DE9B8
  c->lr=0x800DE9C0u; f_8009D828(c); // 800DE9BC
L_800DE9C0:;
  cmps(c,0,(int32_t)c->r[24],0); // 800DE9C0
  if (crb(c,2)) { goto L_800DEAE8; } // 800DE9C4
  c->r[3]=c->r[1]+0x00000048u; // 800DE9C8
  c->lr=0x800DE9D0u; f_8004B0A0(c); // 800DE9CC
  c->r[3]=c->r[1]+0x00000038u; // 800DE9D0
  c->lr=0x800DE9D8u; f_8004B0A4(c); // 800DE9D4
  c->r[3]=c->r[1]+0x0000002Cu; // 800DE9D8
  c->lr=0x800DE9E0u; f_8004B0A4(c); // 800DE9DC
  c->r[3]=c->r[1]+0x00000020u; // 800DE9E0
  c->lr=0x800DE9E8u; f_8004B0A4(c); // 800DE9E4
  c->r[3]=c->r[1]+0x00000014u; // 800DE9E8
  c->lr=0x800DE9F0u; f_8004B0A4(c); // 800DE9EC
  c->lr=0x800DE9F4u; f_8007B524(c); // 800DE9F0
  c->r[4]=c->r[1]+0x00000038u; // 800DE9F4
  c->lr=0x800DE9FCu; f_8009CDA0(c); // 800DE9F8
  c->lr=0x800DEA00u; f_8007B524(c); // 800DE9FC
  c->r[4]=c->r[1]+0x0000002Cu; // 800DEA00
  c->lr=0x800DEA08u; f_8009CDDC(c); // 800DEA04
  cmps(c,0,(int32_t)c->r[26],4); // 800DEA08
  if (crb(c,2)) { goto L_800DEA14; } // 800DEA0C
  goto L_800DEAD0; // 800DEA10
L_800DEA14:;
  c->r[0]=R32(c->r[29]+0x00000028u); // 800DEA14
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 800DEA18
  cmps(c,0,(int32_t)c->r[0],0); // 800DEA1C
  if (!crb(c,2)) { goto L_800DEAA4; } // 800DEA20
  c->r[3]=c->r[1]+0x00000008u; // 800DEA24
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA28
  c->f[2]=c->f[1]; // 800DEA2C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEA30
  c->lr=0x800DEA38u; f_8004E34C(c); // 800DEA34
  c->r[3]=c->r[1]+0x00000048u; // 800DEA38
  c->lr=0x800DEA40u; f_800C2260(c); // 800DEA3C
  c->r[3]=c->r[1]+0x00000048u; // 800DEA40
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA44
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEA48
  c->f[3]=c->f[1]; // 800DEA4C
  c->lr=0x800DEA54u; f_8004B0A8(c); // 800DEA50
  c->r[3]=c->r[1]+0x00000014u; // 800DEA54
  c->r[4]=c->r[1]+0x00000048u; // 800DEA58
  c->r[5]=c->r[1]+0x00000008u; // 800DEA5C
  c->lr=0x800DEA64u; f_8005FF94(c); // 800DEA60
  c->r[3]=c->r[1]+0x00000020u; // 800DEA64
  c->r[4]=c->r[1]+0x00000014u; // 800DEA68
  {uint32_t ea=c->r[2]+0xFFFF8884u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA6C
  c->lr=0x800DEA74u; f_8004E330(c); // 800DEA70
  c->r[3]=c->r[1]+0x00000020u; // 800DEA74
  c->r[4]=c->r[1]+0x00000014u; // 800DEA78
  {uint32_t ea=c->r[2]+0xFFFF8928u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEA7C
  c->lr=0x800DEA84u; f_8004E330(c); // 800DEA80
  c->r[3]=c->r[29]+0x00001F2Cu; // 800DEA84
  c->r[4]=c->r[1]+0x00000038u; // 800DEA88
  c->r[5]=c->r[1]+0x00000020u; // 800DEA8C
  c->lr=0x800DEA94u; f_8005C194(c); // 800DEA90
  c->r[3]=c->r[29]+0x00001F14u; // 800DEA94
  c->r[4]=c->r[29]+0x00001F2Cu; // 800DEA98
  c->lr=0x800DEAA0u; f_8004A65C(c); // 800DEA9C
  goto L_800DEAB0; // 800DEAA0
L_800DEAA4:;
  c->r[3]=c->r[29]+0x00001F2Cu; // 800DEAA4
  c->r[4]=c->r[1]+0x00000038u; // 800DEAA8
  c->lr=0x800DEAB0u; f_8004A65C(c); // 800DEAAC
L_800DEAB0:;
  c->r[3]=c->r[29]+0x00001F38u; // 800DEAB0
  c->r[4]=c->r[1]+0x0000002Cu; // 800DEAB4
  c->lr=0x800DEABCu; f_8004A65C(c); // 800DEAB8
  {uint32_t ea=c->r[29]+0x00001F3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEABC
  {uint32_t ea=c->r[2]+0xFFFF882Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DEAC0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DEAC4
  {uint32_t ea=c->r[29]+0x00001F3Cu; WF32(ea,c->f[0]);} // 800DEAC8
  goto L_800DEAE8; // 800DEACC
L_800DEAD0:;
  c->r[3]=c->r[29]+0x00001F2Cu; // 800DEAD0
  c->r[4]=c->r[1]+0x00000038u; // 800DEAD4
  c->lr=0x800DEADCu; f_8004A65C(c); // 800DEAD8
  c->r[3]=c->r[29]+0x00001F38u; // 800DEADC
  c->r[4]=c->r[1]+0x0000002Cu; // 800DEAE0
  c->lr=0x800DEAE8u; f_8004A65C(c); // 800DEAE4
L_800DEAE8:;
  c->r[0]=R32(c->r[29]+0x0000003Cu); // 800DEAE8
  W32(c->r[29]+0x00000044u,c->r[0]); // 800DEAEC
  W32(c->r[29]+0x00000040u,c->r[30]); // 800DEAF0
  c->r[0]=R32(c->r[29]+0x00000028u); // 800DEAF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFEFFFu; // 800DEAF8
  W32(c->r[29]+0x00000028u,c->r[0]); // 800DEAFC
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 800DEB00
  W32(c->r[29]+0x00000028u,c->r[0]); // 800DEB04
  c->r[0]=c->r[0]|0x00040000u; // 800DEB08
  W32(c->r[29]+0x00000028u,c->r[0]); // 800DEB0C
  c->lr=0x800DEB14u; f_80154798(c); // 800DEB10
  c->r[3]=c->r[29]|c->r[29]; // 800DEB14
  c->r[4]=0u+0x00000001u; // 800DEB18
  c->lr=0x800DEB20u; f_800E10E4(c); // 800DEB1C
  cmps(c,0,(int32_t)c->r[31],0); // 800DEB20
  if (!crb(c,2)) { goto L_800DEB38; } // 800DEB24
  c->lr=0x800DEB2Cu; f_800A23BC(c); // 800DEB28
  c->lr=0x800DEB30u; f_800BB76C(c); // 800DEB2C
  c->r[4]=0u+0x00000001u; // 800DEB30
  c->lr=0x800DEB38u; f_800D32F8(c); // 800DEB34
L_800DEB38:;
  c->lr=0x800DEB3Cu; f_800A23BC(c); // 800DEB38
  c->lr=0x800DEB40u; f_800A23C4(c); // 800DEB3C
  c->r[4]=0u+0x00000003u; // 800DEB40
  c->lr=0x800DEB48u; f_800D8804(c); // 800DEB44
  c->r[3]=c->r[29]+0x0000002Cu; // 800DEB48
  c->r[4]=0u+0x00000005u; // 800DEB4C
  c->lr=0x800DEB54u; f_800BB8E4(c); // 800DEB50
L_800DEB54:;
  c->r[11]=c->r[1]+0x000000A0u; // 800DEB54
  c->lr=0x800DEB5Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DEB58
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800DEB5C
  c->lr=c->r[0]; // 800DEB60
  c->r[1]=c->r[1]+0x000000A0u; // 800DEB64
  return; // 800DEB68
}

// fn_800DEB6C
void f_800DEB6C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800DEB6C
  c->r[0]=c->r[0]|0x00001000u; // 800DEB70
  W32(c->r[3]+0x00000028u,c->r[0]); // 800DEB74
  return; // 800DEB78
}

// fn_800DEB7C
void f_800DEB7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEB7C
  c->r[0]=c->lr; // 800DEB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEB84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEB88
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800DEB8C
  c->lr=0x800DEB94u; f_800BEDE0(c); // 800DEB90
  c->r[31]=c->r[3]|c->r[3]; // 800DEB94
  c->lr=0x800DEB9Cu; f_800A23BC(c); // 800DEB98
  c->lr=0x800DEBA0u; f_800A23B4(c); // 800DEB9C
  c->r[4]=c->r[31]|c->r[31]; // 800DEBA0
  c->lr=0x800DEBA8u; f_800BEDA0(c); // 800DEBA4
  c->lr=0x800DEBACu; f_800CF580(c); // 800DEBA8
  cmps(c,0,(int32_t)c->r[3],4); // 800DEBAC
  if (crb(c,2)) { goto L_800DEBBC; } // 800DEBB0
  c->r[3]=0u+0xFFFFFFFFu; // 800DEBB4
  goto L_800DEBD0; // 800DEBB8
L_800DEBBC:;
  c->lr=0x800DEBC0u; f_800A23BC(c); // 800DEBBC
  c->lr=0x800DEBC4u; f_800A23B4(c); // 800DEBC0
  c->r[4]=c->r[31]|c->r[31]; // 800DEBC4
  c->lr=0x800DEBCCu; f_800BEDA0(c); // 800DEBC8
  c->lr=0x800DEBD0u; f_800CF5EC(c); // 800DEBCC
L_800DEBD0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEBD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEBD4
  c->lr=c->r[0]; // 800DEBD8
  c->r[1]=c->r[1]+0x00000010u; // 800DEBDC
  return; // 800DEBE0
}

// fn_800DEBE4
void f_800DEBE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEBE4
  c->r[0]=c->lr; // 800DEBE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEBEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEBF0
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800DEBF4
  c->lr=0x800DEBFCu; f_800BEDE0(c); // 800DEBF8
  c->r[31]=c->r[3]|c->r[3]; // 800DEBFC
  c->lr=0x800DEC04u; f_800A23BC(c); // 800DEC00
  c->lr=0x800DEC08u; f_800A23B4(c); // 800DEC04
  c->r[4]=c->r[31]|c->r[31]; // 800DEC08
  c->lr=0x800DEC10u; f_800BEDA0(c); // 800DEC0C
  c->lr=0x800DEC14u; f_800CF580(c); // 800DEC10
  cmps(c,0,(int32_t)c->r[3],5); // 800DEC14
  if (crb(c,2)) { goto L_800DEC24; } // 800DEC18
  c->r[3]=0u+0xFFFFFFFFu; // 800DEC1C
  goto L_800DEC38; // 800DEC20
L_800DEC24:;
  c->lr=0x800DEC28u; f_800A23BC(c); // 800DEC24
  c->lr=0x800DEC2Cu; f_800A23B4(c); // 800DEC28
  c->r[4]=c->r[31]|c->r[31]; // 800DEC2C
  c->lr=0x800DEC34u; f_800BEDA0(c); // 800DEC30
  c->lr=0x800DEC38u; f_800CF5EC(c); // 800DEC34
L_800DEC38:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEC38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEC3C
  c->lr=c->r[0]; // 800DEC40
  c->r[1]=c->r[1]+0x00000010u; // 800DEC44
  return; // 800DEC48
}

// fn_800DEC4C
void f_800DEC4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEC4C
  c->r[0]=c->lr; // 800DEC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEC54
  c->r[3]=c->r[3]+0x0000002Cu; // 800DEC58
  c->lr=0x800DEC60u; f_800BB904(c); // 800DEC5C
  cmpu(c,0,c->r[3],0x00000005u); // 800DEC60
  if (crb(c,0)) { goto L_800DEC78; } // 800DEC64
  cmpu(c,0,c->r[3],0x00000007u); // 800DEC68
  if (crb(c,1)) { goto L_800DEC78; } // 800DEC6C
  c->r[3]=0u+0x00000001u; // 800DEC70
  goto L_800DECAC; // 800DEC74
L_800DEC78:;
  cmpu(c,0,c->r[3],0x00000008u); // 800DEC78
  if (crb(c,0)) { goto L_800DEC90; } // 800DEC7C
  cmpu(c,0,c->r[3],0x0000000Cu); // 800DEC80
  if (crb(c,1)) { goto L_800DEC90; } // 800DEC84
  c->r[3]=0u+0x00000001u; // 800DEC88
  goto L_800DECAC; // 800DEC8C
L_800DEC90:;
  cmpu(c,0,c->r[3],0x00000010u); // 800DEC90
  if (crb(c,0)) { goto L_800DECA8; } // 800DEC94
  cmpu(c,0,c->r[3],0x00000012u); // 800DEC98
  if (crb(c,1)) { goto L_800DECA8; } // 800DEC9C
  c->r[3]=0u+0x00000001u; // 800DECA0
  goto L_800DECAC; // 800DECA4
L_800DECA8:;
  c->r[3]=0u+0x00000000u; // 800DECA8
L_800DECAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DECAC
  c->lr=c->r[0]; // 800DECB0
  c->r[1]=c->r[1]+0x00000010u; // 800DECB4
  return; // 800DECB8
}

// fn_800DECBC
void f_800DECBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECBC
  c->r[0]=c->lr; // 800DECC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DECC4
  c->r[3]=c->r[3]+0x0000002Cu; // 800DECC8
  c->lr=0x800DECD0u; f_800BB904(c); // 800DECCC
  c->r[0]=cntlz(c->r[3]); // 800DECD0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DECD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DECD8
  c->lr=c->r[0]; // 800DECDC
  c->r[1]=c->r[1]+0x00000010u; // 800DECE0
  return; // 800DECE4
}

// fn_800DECE8
void f_800DECE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DECE8
  c->r[0]=c->lr; // 800DECEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DECF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DECF4
  c->r[31]=c->r[3]|c->r[3]; // 800DECF8
  c->r[3]=c->r[3]+0x0000002Cu; // 800DECFC
  c->lr=0x800DED04u; f_800BB904(c); // 800DED00
  cmpu(c,0,c->r[3],0x0000001Fu); // 800DED04
  if (!crb(c,0)) { goto L_800DED14; } // 800DED08
  c->r[3]=0u+0x00000000u; // 800DED0C
  goto L_800DED3C; // 800DED10
L_800DED14:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800DED14
  c->lr=0x800DED1Cu; f_800BB904(c); // 800DED18
  cmpu(c,0,c->r[3],0x00000025u); // 800DED1C
  if (!crb(c,1)) { goto L_800DED2C; } // 800DED20
  c->r[3]=0u+0x00000000u; // 800DED24
  goto L_800DED3C; // 800DED28
L_800DED2C:;
  c->r[3]=c->r[31]|c->r[31]; // 800DED2C
  c->lr=0x800DED34u; f_800DECBC(c); // 800DED30
  c->r[0]=cntlz(c->r[3]); // 800DED34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DED38
L_800DED3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DED3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DED40
  c->lr=c->r[0]; // 800DED44
  c->r[1]=c->r[1]+0x00000010u; // 800DED48
  return; // 800DED4C
}

// fn_800DED50
void f_800DED50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DED50
  c->r[0]=c->lr; // 800DED54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DED58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DED5C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DED60
  c->r[31]=c->r[3]|c->r[3]; // 800DED64
  c->r[0]=R32(c->r[3]+0x00000578u); // 800DED68
  cmps(c,0,(int32_t)c->r[0],2); // 800DED6C
  if (crb(c,2)) { goto L_800DEE2C; } // 800DED70
  if (!crb(c,0)) { goto L_800DED88; } // 800DED74
  cmps(c,0,(int32_t)c->r[0],0); // 800DED78
  if (crb(c,2)) { goto L_800DED94; } // 800DED7C
  if (!crb(c,0)) { goto L_800DEDF0; } // 800DED80
  goto L_800DEE9C; // 800DED84
L_800DED88:;
  cmps(c,0,(int32_t)c->r[0],4); // 800DED88
  if (!crb(c,0)) { goto L_800DEE9C; } // 800DED8C
  goto L_800DEE68; // 800DED90
L_800DED94:;
  c->lr=0x800DED98u; f_800A23BC(c); // 800DED94
  c->lr=0x800DED9Cu; f_800A23C8(c); // 800DED98
  c->lr=0x800DEDA0u; f_800CA8C8(c); // 800DED9C
  c->r[30]=c->r[3]|c->r[3]; // 800DEDA0
  c->lr=0x800DEDA8u; f_800A23BC(c); // 800DEDA4
  c->lr=0x800DEDACu; f_800A23C8(c); // 800DEDA8
  c->r[4]=c->r[30]|c->r[30]; // 800DEDAC
  c->lr=0x800DEDB4u; f_800BBBC0(c); // 800DEDB0
  c->lr=0x800DEDB8u; f_800CCB98(c); // 800DEDB4
  c->r[5]=0u+0x00000000u; // 800DEDB8
  c->r[4]=c->r[31]+0x00000170u; // 800DEDBC
  c->r[0]=R32(c->r[31]+0x00000570u); // 800DEDC0
  c->ctr=c->r[0]; // 800DEDC4
  cmpu(c,0,c->r[0],0x00000000u); // 800DEDC8
  if (!crb(c,1)) { goto L_800DEDF0; } // 800DEDCC
L_800DEDD0:;
  c->r[0]=R32(c->r[4]+0x00000014u); // 800DEDD0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800DEDD4
  if (!crb(c,2)) { goto L_800DEDE4; } // 800DEDD8
  W32(c->r[31]+0x00000574u,c->r[5]); // 800DEDDC
  goto L_800DEDF0; // 800DEDE0
L_800DEDE4:;
  c->r[4]=c->r[4]+0x00000040u; // 800DEDE4
  c->r[5]=c->r[5]+0x00000001u; // 800DEDE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DEDD0; } // 800DEDEC
L_800DEDF0:;
  c->r[3]=R32(c->r[31]+0x00000574u); // 800DEDF0
  c->r[0]=c->r[3]+0x00010000u; // 800DEDF4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800DEDF8
  if (!crb(c,2)) { goto L_800DEE10; } // 800DEDFC
  c->r[0]=0u+0x00000000u; // 800DEE00
  W32(c->r[31]+0x00000578u,c->r[0]); // 800DEE04
  c->r[3]=0u+0x00000000u; // 800DEE08
  goto L_800DEEA0; // 800DEE0C
L_800DEE10:;
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 800DEE10
  c->r[3]=c->r[31]+c->r[0]; // 800DEE14
  c->r[3]=c->r[3]+0x00000170u; // 800DEE18
  c->lr=0x800DEE20u; f_800D6EE4(c); // 800DEE1C
  c->r[0]=0u+0x00000003u; // 800DEE20
  W32(c->r[31]+0x00000578u,c->r[0]); // 800DEE24
  goto L_800DEE9C; // 800DEE28
L_800DEE2C:;
  c->r[4]=R32(c->r[3]+0x00000574u); // 800DEE2C
  c->r[0]=c->r[4]+0x00010000u; // 800DEE30
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800DEE34
  if (!crb(c,2)) { goto L_800DEE4C; } // 800DEE38
  c->r[0]=0u+0x00000000u; // 800DEE3C
  W32(c->r[3]+0x00000578u,c->r[0]); // 800DEE40
  c->r[3]=0u+0x00000000u; // 800DEE44
  goto L_800DEEA0; // 800DEE48
L_800DEE4C:;
  c->r[0]=rotl(c->r[4],6)&0xFFFFFFC0u; // 800DEE4C
  c->r[3]=c->r[3]+c->r[0]; // 800DEE50
  c->r[3]=c->r[3]+0x00000170u; // 800DEE54
  c->lr=0x800DEE5Cu; f_800D6F24(c); // 800DEE58
  c->r[0]=0u+0x00000003u; // 800DEE5C
  W32(c->r[31]+0x00000578u,c->r[0]); // 800DEE60
  goto L_800DEE9C; // 800DEE64
L_800DEE68:;
  c->r[0]=R32(c->r[3]+0x00000574u); // 800DEE68
  c->r[0]=rotl(c->r[0],6)&0xFFFFFFC0u; // 800DEE6C
  c->r[3]=c->r[3]+c->r[0]; // 800DEE70
  c->r[3]=c->r[3]+0x00000170u; // 800DEE74
  c->lr=0x800DEE7Cu; f_800E12B0(c); // 800DEE78
  cmps(c,0,(int32_t)c->r[3],0); // 800DEE7C
  if (crb(c,2)) { goto L_800DEE9C; } // 800DEE80
  c->r[0]=0u+0xFFFFFFFFu; // 800DEE84
  W32(c->r[31]+0x00000574u,c->r[0]); // 800DEE88
  c->r[0]=0u+0x00000000u; // 800DEE8C
  W32(c->r[31]+0x00000578u,c->r[0]); // 800DEE90
  c->r[3]=0u+0x00000000u; // 800DEE94
  goto L_800DEEA0; // 800DEE98
L_800DEE9C:;
  c->r[3]=0u+0x00000001u; // 800DEE9C
L_800DEEA0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEEA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEEA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEEA8
  c->lr=c->r[0]; // 800DEEAC
  c->r[1]=c->r[1]+0x00000010u; // 800DEEB0
  return; // 800DEEB4
}

// fn_800DEEB8
void f_800DEEB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEEB8
  c->r[0]=c->lr; // 800DEEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEEC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DEEC8
  c->r[30]=c->r[3]|c->r[3]; // 800DEECC
  c->lr=0x800DEED4u; f_800A23BC(c); // 800DEED0
  c->lr=0x800DEED8u; f_800A23C4(c); // 800DEED4
  c->lr=0x800DEEDCu; f_800CA230(c); // 800DEED8
  c->r[31]=c->r[30]+0x00000170u; // 800DEEDC
  c->r[0]=R32(c->r[30]+0x00000570u); // 800DEEE0
  c->ctr=c->r[0]; // 800DEEE4
  cmpu(c,0,c->r[0],0x00000000u); // 800DEEE8
  if (!crb(c,1)) { goto L_800DEF20; } // 800DEEEC
L_800DEEF0:;
  c->r[0]=R32(c->r[31]+0x00000018u); // 800DEEF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DEEF4
  if (!crb(c,2)) { goto L_800DEF18; } // 800DEEF8
  c->lr=0x800DEF00u; f_800A23BC(c); // 800DEEFC
  c->lr=0x800DEF04u; f_800A23B4(c); // 800DEF00
  c->r[4]=R32(c->r[31]+0x00000010u); // 800DEF04
  c->r[5]=0u+0x00000000u; // 800DEF08
  c->lr=0x800DEF10u; f_800DE884(c); // 800DEF0C
  c->r[3]=0u+0x00000000u; // 800DEF10
  goto L_800DEF68; // 800DEF14
L_800DEF18:;
  c->r[31]=c->r[31]+0x00000040u; // 800DEF18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DEEF0; } // 800DEF1C
L_800DEF20:;
  c->r[31]=c->r[30]+0x00000F50u; // 800DEF20
  c->r[0]=R32(c->r[30]+0x00001090u); // 800DEF24
  c->ctr=c->r[0]; // 800DEF28
  cmpu(c,0,c->r[0],0x00000000u); // 800DEF2C
  if (!crb(c,1)) { goto L_800DEF64; } // 800DEF30
L_800DEF34:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800DEF34
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800DEF38
  if (!crb(c,2)) { goto L_800DEF5C; } // 800DEF3C
  c->lr=0x800DEF44u; f_800A23BC(c); // 800DEF40
  c->lr=0x800DEF48u; f_800A23B4(c); // 800DEF44
  c->r[4]=R32(c->r[31]+0x00000004u); // 800DEF48
  c->r[5]=0u+0x00000000u; // 800DEF4C
  c->lr=0x800DEF54u; f_800DE884(c); // 800DEF50
  c->r[3]=0u+0x00000000u; // 800DEF54
  goto L_800DEF68; // 800DEF58
L_800DEF5C:;
  c->r[31]=c->r[31]+0x00000014u; // 800DEF5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DEF34; } // 800DEF60
L_800DEF64:;
  c->r[3]=0u+0x00000000u; // 800DEF64
L_800DEF68:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEF68
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DEF6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEF70
  c->lr=c->r[0]; // 800DEF74
  c->r[1]=c->r[1]+0x00000010u; // 800DEF78
  return; // 800DEF7C
}

// fn_800DEF80
void f_800DEF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEF80
  c->r[0]=c->lr; // 800DEF84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DEF88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DEF8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DEF90
  W32(c->r[1]+0x00000014u,c->r[29]); // 800DEF94
  c->r[29]=c->r[3]|c->r[3]; // 800DEF98
  c->r[30]=c->r[4]|c->r[4]; // 800DEF9C
  c->lr=0x800DEFA4u; f_800A23BC(c); // 800DEFA0
  c->lr=0x800DEFA8u; f_800A23C4(c); // 800DEFA4
  c->lr=0x800DEFACu; f_800BBF6C(c); // 800DEFA8
  c->r[31]=c->r[3]|c->r[3]; // 800DEFAC
  c->r[0]=R32(c->r[29]+0x00001924u); // 800DEFB0
  cmps(c,0,(int32_t)c->r[0],2); // 800DEFB4
  if (crb(c,2)) { goto L_800DF054; } // 800DEFB8
  if (!crb(c,0)) { goto L_800DEFD0; } // 800DEFBC
  cmps(c,0,(int32_t)c->r[0],0); // 800DEFC0
  if (crb(c,2)) { goto L_800DEFE0; } // 800DEFC4
  if (!crb(c,0)) { goto L_800DF024; } // 800DEFC8
  goto L_800DF118; // 800DEFCC
L_800DEFD0:;
  cmps(c,0,(int32_t)c->r[0],4); // 800DEFD0
  if (crb(c,2)) { goto L_800DF0D0; } // 800DEFD4
  if (!crb(c,0)) { goto L_800DF118; } // 800DEFD8
  goto L_800DF088; // 800DEFDC
L_800DEFE0:;
  c->r[3]=0u+0x00000000u; // 800DEFE0
  c->lr=0x800DEFE8u; f_8012C3BC(c); // 800DEFE4
  c->r[3]=0u+0x00000001u; // 800DEFE8
  c->lr=0x800DEFF0u; f_8012C380(c); // 800DEFEC
  c->r[3]=0u+0x00000189u; // 800DEFF0
  c->r[4]=0u+0x00000000u; // 800DEFF4
  c->lr=0x800DEFFCu; f_8012C334(c); // 800DEFF8
  c->r[3]=0u+0x00000064u; // 800DEFFC
  c->r[4]=0u+0x00000000u; // 800DF000
  c->lr=0x800DF008u; f_8012C334(c); // 800DF004
  c->r[3]=0u+0x00000065u; // 800DF008
  c->r[4]=0u+0x00000000u; // 800DF00C
  c->lr=0x800DF014u; f_8012C334(c); // 800DF010
  c->lr=0x800DF018u; f_8012C280(c); // 800DF014
  c->r[0]=0u+0x00000001u; // 800DF018
  W32(c->r[29]+0x00001924u,c->r[0]); // 800DF01C
  goto L_800DF118; // 800DF020
L_800DF024:;
  c->lr=0x800DF028u; f_8012C2B8(c); // 800DF024
  cmps(c,0,(int32_t)c->r[3],0); // 800DF028
  if (crb(c,2)) { goto L_800DF118; } // 800DF02C
  c->lr=0x800DF034u; f_8012C2E4(c); // 800DF030
  cmps(c,0,(int32_t)c->r[3],0); // 800DF034
  if (!crb(c,2)) { goto L_800DF048; } // 800DF038
  c->r[0]=0u+0x00000002u; // 800DF03C
  W32(c->r[29]+0x00001924u,c->r[0]); // 800DF040
  goto L_800DF118; // 800DF044
L_800DF048:;
  c->r[0]=0u+0x00000005u; // 800DF048
  W32(c->r[29]+0x00001924u,c->r[0]); // 800DF04C
  goto L_800DF118; // 800DF050
L_800DF054:;
  c->lr=0x800DF058u; f_800A23BC(c); // 800DF054
  c->lr=0x800DF05Cu; f_800BB800(c); // 800DF058
  c->r[4]=c->r[31]|c->r[31]; // 800DF05C
  c->lr=0x800DF064u; f_800BBD58(c); // 800DF060
  c->r[4]=0u+0x80460000u; // 800DF064
  c->r[4]=c->r[4]+0x000008F4u; // 800DF068
  c->r[5]=0u+0x00000006u; // 800DF06C
  c->lr=0x800DF074u; f_800C7E90(c); // 800DF070
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF074
  {uint32_t ea=c->r[29]+0x0000192Cu; WF32(ea,c->f[0]);} // 800DF078
  c->r[0]=0u+0x00000003u; // 800DF07C
  W32(c->r[29]+0x00001924u,c->r[0]); // 800DF080
  goto L_800DF118; // 800DF084
L_800DF088:;
  c->r[3]=0u+0x00000001u; // 800DF088
  c->lr=0x800DF090u; f_8005D714(c); // 800DF08C
  {uint32_t ea=c->r[29]+0x0000192Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF090
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800DF094
  {uint32_t ea=c->r[29]+0x0000192Cu; WF32(ea,c->f[1]);} // 800DF098
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF09C
  fcmp(c,0,c->f[1],c->f[0]); // 800DF0A0
  if (crb(c,1)) { goto L_800DF118; } // 800DF0A4
  c->lr=0x800DF0ACu; f_800A23BC(c); // 800DF0A8
  c->lr=0x800DF0B0u; f_800A23C4(c); // 800DF0AC
  c->r[4]=0u+0x00000000u; // 800DF0B0
  c->r[5]=0u+0x000000E4u; // 800DF0B4
  c->lr=0x800DF0BCu; f_800D8BC0(c); // 800DF0B8
  c->r[3]=c->r[30]|c->r[30]; // 800DF0BC
  c->lr=0x800DF0C4u; f_800D51EC(c); // 800DF0C0
  c->r[0]=0u+0x00000004u; // 800DF0C4
  W32(c->r[29]+0x00001924u,c->r[0]); // 800DF0C8
  goto L_800DF118; // 800DF0CC
L_800DF0D0:;
  c->lr=0x800DF0D4u; f_800A23BC(c); // 800DF0D0
  c->lr=0x800DF0D8u; f_800BB800(c); // 800DF0D4
  c->r[4]=c->r[31]|c->r[31]; // 800DF0D8
  c->lr=0x800DF0E0u; f_800BBD58(c); // 800DF0DC
  c->r[4]=0u+0x00000006u; // 800DF0E0
  c->lr=0x800DF0E8u; f_800C7308(c); // 800DF0E4
  cmps(c,0,(int32_t)c->r[3],0); // 800DF0E8
  if (crb(c,2)) { goto L_800DF118; } // 800DF0EC
  c->lr=0x800DF0F4u; f_800A23BC(c); // 800DF0F0
  c->lr=0x800DF0F8u; f_800BB800(c); // 800DF0F4
  c->r[4]=c->r[31]|c->r[31]; // 800DF0F8
  c->lr=0x800DF100u; f_800BBD58(c); // 800DF0FC
  c->r[4]=0u+0x80460000u; // 800DF100
  c->r[4]=c->r[4]+0x0000062Cu; // 800DF104
  c->r[5]=0u+0x00000006u; // 800DF108
  c->lr=0x800DF110u; f_800C7E90(c); // 800DF10C
  c->r[0]=0u+0x00000005u; // 800DF110
  W32(c->r[29]+0x00001924u,c->r[0]); // 800DF114
L_800DF118:;
  c->r[4]=R32(c->r[29]+0x00001924u); // 800DF118
  c->r[3]=addc(c,~c->r[4],0x00000005u,1); // 800DF11C
  c->r[0]=c->r[4]+0xFFFFFFFBu; // 800DF120
  c->r[0]=c->r[3]|c->r[0]; // 800DF124
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DF128
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DF12C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DF130
  c->r[29]=R32(c->r[1]+0x00000014u); // 800DF134
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DF138
  c->lr=c->r[0]; // 800DF13C
  c->r[1]=c->r[1]+0x00000020u; // 800DF140
  return; // 800DF144
}

// fn_800DF148
void f_800DF148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF148
  c->r[0]=c->lr; // 800DF14C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF154
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF158
  c->r[30]=c->r[3]|c->r[3]; // 800DF15C
  c->lr=0x800DF164u; f_800A23BC(c); // 800DF160
  c->lr=0x800DF168u; f_800A23C4(c); // 800DF164
  c->lr=0x800DF16Cu; f_800BBF6C(c); // 800DF168
  c->r[31]=c->r[3]|c->r[3]; // 800DF16C
  c->r[0]=R32(c->r[30]+0x00001924u); // 800DF170
  cmps(c,0,(int32_t)c->r[0],1); // 800DF174
  if (crb(c,2)) { goto L_800DF1B8; } // 800DF178
  if (!crb(c,0)) { goto L_800DF200; } // 800DF17C
  cmps(c,0,(int32_t)c->r[0],0); // 800DF180
  if (!crb(c,0)) { goto L_800DF18C; } // 800DF184
  goto L_800DF200; // 800DF188
L_800DF18C:;
  c->lr=0x800DF190u; f_800A23BC(c); // 800DF18C
  c->lr=0x800DF194u; f_800BB800(c); // 800DF190
  c->r[4]=c->r[31]|c->r[31]; // 800DF194
  c->lr=0x800DF19Cu; f_800BBD58(c); // 800DF198
  c->r[4]=0u+0x80460000u; // 800DF19C
  c->r[4]=c->r[4]+0x00000904u; // 800DF1A0
  c->r[5]=0u+0x00000006u; // 800DF1A4
  c->lr=0x800DF1ACu; f_800C7E90(c); // 800DF1A8
  c->r[0]=0u+0x00000001u; // 800DF1AC
  W32(c->r[30]+0x00001924u,c->r[0]); // 800DF1B0
  goto L_800DF200; // 800DF1B4
L_800DF1B8:;
  c->lr=0x800DF1BCu; f_800A23BC(c); // 800DF1B8
  c->lr=0x800DF1C0u; f_800BB800(c); // 800DF1BC
  c->r[4]=c->r[31]|c->r[31]; // 800DF1C0
  c->lr=0x800DF1C8u; f_800BBD58(c); // 800DF1C4
  c->r[4]=0u+0x00000006u; // 800DF1C8
  c->lr=0x800DF1D0u; f_800C7308(c); // 800DF1CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DF1D0
  if (crb(c,2)) { goto L_800DF200; } // 800DF1D4
  c->lr=0x800DF1DCu; f_800A23BC(c); // 800DF1D8
  c->lr=0x800DF1E0u; f_800BB800(c); // 800DF1DC
  c->r[4]=c->r[31]|c->r[31]; // 800DF1E0
  c->lr=0x800DF1E8u; f_800BBD58(c); // 800DF1E4
  c->r[4]=0u+0x80460000u; // 800DF1E8
  c->r[4]=c->r[4]+0x0000062Cu; // 800DF1EC
  c->r[5]=0u+0x00000006u; // 800DF1F0
  c->lr=0x800DF1F8u; f_800C7E90(c); // 800DF1F4
  c->r[0]=0u+0x00000000u; // 800DF1F8
  W32(c->r[30]+0x00001924u,c->r[0]); // 800DF1FC
L_800DF200:;
  c->r[3]=R32(c->r[30]+0x00001924u); // 800DF200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF204
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF208
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF20C
  c->lr=c->r[0]; // 800DF210
  c->r[1]=c->r[1]+0x00000010u; // 800DF214
  return; // 800DF218
}

// fn_800DF21C
void f_800DF21C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF21C
  c->r[0]=c->lr; // 800DF220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF228
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF22C
  c->r[30]=c->r[3]|c->r[3]; // 800DF230
  c->lr=0x800DF238u; f_800A23BC(c); // 800DF234
  c->lr=0x800DF23Cu; f_800A23C4(c); // 800DF238
  c->lr=0x800DF240u; f_800BBF6C(c); // 800DF23C
  c->r[31]=c->r[3]|c->r[3]; // 800DF240
  c->r[0]=R32(c->r[30]+0x00001924u); // 800DF244
  cmps(c,0,(int32_t)c->r[0],1); // 800DF248
  if (crb(c,2)) { goto L_800DF294; } // 800DF24C
  if (!crb(c,0)) { goto L_800DF2DC; } // 800DF250
  cmps(c,0,(int32_t)c->r[0],0); // 800DF254
  if (!crb(c,0)) { goto L_800DF260; } // 800DF258
  goto L_800DF2DC; // 800DF25C
L_800DF260:;
  c->lr=0x800DF264u; f_800A23BC(c); // 800DF260
  c->lr=0x800DF268u; f_800BB800(c); // 800DF264
  c->r[4]=c->r[31]|c->r[31]; // 800DF268
  c->lr=0x800DF270u; f_800BBD58(c); // 800DF26C
  c->r[4]=0u+0x80460000u; // 800DF270
  c->r[4]=c->r[4]+0x00000914u; // 800DF274
  c->r[5]=0u+0x00000006u; // 800DF278
  c->lr=0x800DF280u; f_800C7E90(c); // 800DF27C
  c->r[0]=0u+0x00000001u; // 800DF280
  W32(c->r[30]+0x00001924u,c->r[0]); // 800DF284
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF288
  {uint32_t ea=c->r[30]+0x0000192Cu; WF32(ea,c->f[0]);} // 800DF28C
  goto L_800DF2DC; // 800DF290
L_800DF294:;
  c->r[3]=0u+0x00000001u; // 800DF294
  c->lr=0x800DF29Cu; f_8005D714(c); // 800DF298
  {uint32_t ea=c->r[30]+0x0000192Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF29C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800DF2A0
  {uint32_t ea=c->r[30]+0x0000192Cu; WF32(ea,c->f[1]);} // 800DF2A4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF2A8
  fcmp(c,0,c->f[1],c->f[0]); // 800DF2AC
  if (crb(c,1)) { goto L_800DF2DC; } // 800DF2B0
  c->lr=0x800DF2B8u; f_800A23BC(c); // 800DF2B4
  c->lr=0x800DF2BCu; f_800BB800(c); // 800DF2B8
  c->r[4]=c->r[31]|c->r[31]; // 800DF2BC
  c->lr=0x800DF2C4u; f_800BBD58(c); // 800DF2C0
  c->r[4]=0u+0x80460000u; // 800DF2C4
  c->r[4]=c->r[4]+0x0000062Cu; // 800DF2C8
  c->r[5]=0u+0x00000006u; // 800DF2CC
  c->lr=0x800DF2D4u; f_800C7E90(c); // 800DF2D0
  c->r[0]=0u+0x00000000u; // 800DF2D4
  W32(c->r[30]+0x00001924u,c->r[0]); // 800DF2D8
L_800DF2DC:;
  c->r[3]=R32(c->r[30]+0x00001924u); // 800DF2DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF2E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF2E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF2E8
  c->lr=c->r[0]; // 800DF2EC
  c->r[1]=c->r[1]+0x00000010u; // 800DF2F0
  return; // 800DF2F4
}

// fn_800DF2F8
void f_800DF2F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF2F8
  c->r[0]=c->lr; // 800DF2FC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800DF300
  W32(c->r[1]+0x000000ACu,c->r[31]); // 800DF304
  W32(c->r[1]+0x000000A8u,c->r[30]); // 800DF308
  W32(c->r[1]+0x000000A4u,c->r[29]); // 800DF30C
  W32(c->r[1]+0x000000A0u,c->r[28]); // 800DF310
  c->r[31]=c->r[3]|c->r[3]; // 800DF314
  c->r[29]=c->r[4]|c->r[4]; // 800DF318
  c->lr=0x800DF320u; f_800A23BC(c); // 800DF31C
  c->lr=0x800DF324u; f_800A23C4(c); // 800DF320
  c->lr=0x800DF328u; f_800BBF6C(c); // 800DF324
  c->r[30]=c->r[3]|c->r[3]; // 800DF328
  c->r[0]=R32(c->r[31]+0x00001924u); // 800DF32C
  cmpu(c,0,c->r[0],0x0000000Du); // 800DF330
  if (crb(c,1)) { goto L_800DF5F0; } // 800DF334
  c->r[3]=0u+0x80460000u; // 800DF338
  c->r[3]=c->r[3]+0x00000924u; // 800DF33C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800DF340
  c->r[3]=R32(c->r[3]+c->r[0]); // 800DF344
  c->ctr=c->r[3]; // 800DF348
  if (true) { switch (c->ctr) { case 0x800DF350u: goto L_800DF350; case 0x800DF394u: goto L_800DF394; case 0x800DF3C4u: goto L_800DF3C4; case 0x800DF458u: goto L_800DF458; case 0x800DF4ACu: goto L_800DF4AC; case 0x800DF4E8u: goto L_800DF4E8; case 0x800DF4F8u: goto L_800DF4F8; case 0x800DF538u: goto L_800DF538; case 0x800DF55Cu: goto L_800DF55C; case 0x800DF574u: goto L_800DF574; case 0x800DF580u: goto L_800DF580; case 0x800DF590u: goto L_800DF590; case 0x800DF5B8u: goto L_800DF5B8; case 0x800DF5DCu: goto L_800DF5DC; default: break; } dispatch(c,c->ctr); return; } // 800DF34C
L_800DF350:;
  c->r[3]=0u+0x00000000u; // 800DF350
  c->lr=0x800DF358u; f_8012C3BC(c); // 800DF354
  c->r[3]=0u+0x00000001u; // 800DF358
  c->lr=0x800DF360u; f_8012C380(c); // 800DF35C
  c->r[3]=0u+0x0000018Au; // 800DF360
  c->r[4]=0u+0x00000000u; // 800DF364
  c->lr=0x800DF36Cu; f_8012C334(c); // 800DF368
  c->r[3]=0u+0x00000064u; // 800DF36C
  c->r[4]=0u+0x00000000u; // 800DF370
  c->lr=0x800DF378u; f_8012C334(c); // 800DF374
  c->r[3]=0u+0x00000065u; // 800DF378
  c->r[4]=0u+0x00000000u; // 800DF37C
  c->lr=0x800DF384u; f_8012C334(c); // 800DF380
  c->lr=0x800DF388u; f_8012C280(c); // 800DF384
  c->r[0]=0u+0x00000001u; // 800DF388
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF38C
  goto L_800DF5F0; // 800DF390
L_800DF394:;
  c->lr=0x800DF398u; f_8012C2B8(c); // 800DF394
  cmps(c,0,(int32_t)c->r[3],0); // 800DF398
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF39C
  c->lr=0x800DF3A4u; f_8012C2E4(c); // 800DF3A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF3A4
  if (!crb(c,2)) { goto L_800DF3B8; } // 800DF3A8
  c->r[0]=0u+0x00000002u; // 800DF3AC
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF3B0
  goto L_800DF5F0; // 800DF3B4
L_800DF3B8:;
  c->r[0]=0u+0x0000000Eu; // 800DF3B8
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF3BC
  goto L_800DF5F0; // 800DF3C0
L_800DF3C4:;
  c->r[3]=c->r[1]+0x00000008u; // 800DF3C4
  c->lr=0x800DF3CCu; f_8008A590(c); // 800DF3C8
  c->lr=0x800DF3D0u; f_8007B524(c); // 800DF3CC
  c->lr=0x800DF3D4u; f_8009DD48(c); // 800DF3D0
  c->r[28]=c->r[3]|c->r[3]; // 800DF3D4
  c->r[3]=c->r[29]|c->r[29]; // 800DF3D8
  c->lr=0x800DF3E0u; f_800D51DC(c); // 800DF3DC
  c->r[30]=c->r[3]|c->r[3]; // 800DF3E0
  c->lr=0x800DF3E8u; f_800F4430(c); // 800DF3E4
  c->r[3]=c->r[3]+0x00000960u; // 800DF3E8
  c->r[4]=c->r[30]+0x000000DCu; // 800DF3EC
  c->lr=0x800DF3F4u; f_8017B6F0(c); // 800DF3F0
  c->r[30]=c->r[3]|c->r[3]; // 800DF3F4
  c->lr=0x800DF3FCu; f_80074E68(c); // 800DF3F8
  c->lr=0x800DF400u; f_8017A2D8(c); // 800DF3FC
  c->r[29]=c->r[3]|c->r[3]; // 800DF400
  c->r[3]=c->r[1]+0x00000008u; // 800DF404
  c->r[4]=0u+0x000001F8u; // 800DF408
  c->lr=0x800DF410u; f_80178974(c); // 800DF40C
  c->r[0]=R32(c->r[30]+0x00000004u); // 800DF410
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DF414
  c->r[3]=c->r[29]|c->r[29]; // 800DF418
  c->r[4]=c->r[1]+0x00000008u; // 800DF41C
  c->r[5]=0u+0x00000001u; // 800DF420
  c->lr=0x800DF428u; f_80178F64(c); // 800DF424
  c->r[3]=c->r[28]|c->r[28]; // 800DF428
  c->r[4]=c->r[29]|c->r[29]; // 800DF42C
  c->lr=0x800DF434u; f_80179868(c); // 800DF430
  c->r[0]=c->r[3]+0x00010000u; // 800DF434
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800DF438
  if (!crb(c,2)) { goto L_800DF44C; } // 800DF43C
  c->r[0]=0u+0x0000000Au; // 800DF440
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF444
  goto L_800DF5F0; // 800DF448
L_800DF44C:;
  c->r[0]=0u+0x00000003u; // 800DF44C
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF450
  goto L_800DF5F0; // 800DF454
L_800DF458:;
  c->lr=0x800DF45Cu; f_800A23BC(c); // 800DF458
  c->lr=0x800DF460u; f_800BB800(c); // 800DF45C
  c->r[4]=c->r[30]|c->r[30]; // 800DF460
  c->lr=0x800DF468u; f_800BBD58(c); // 800DF464
  c->r[4]=0u+0x80460000u; // 800DF468
  c->r[4]=c->r[4]+0x000008F4u; // 800DF46C
  c->r[5]=0u+0x00000006u; // 800DF470
  c->lr=0x800DF478u; f_800C7E90(c); // 800DF474
  c->lr=0x800DF47Cu; f_800A23BC(c); // 800DF478
  c->lr=0x800DF480u; f_800BB800(c); // 800DF47C
  c->r[4]=c->r[30]|c->r[30]; // 800DF480
  c->lr=0x800DF488u; f_800BBD58(c); // 800DF484
  c->r[4]=0u+0x80460000u; // 800DF488
  c->r[4]=c->r[4]+0x0000062Cu; // 800DF48C
  c->r[5]=0u+0x00000006u; // 800DF490
  c->lr=0x800DF498u; f_800C7F10(c); // 800DF494
  {uint32_t ea=c->r[2]+0xFFFF8850u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF498
  {uint32_t ea=c->r[31]+0x0000192Cu; WF32(ea,c->f[0]);} // 800DF49C
  c->r[0]=0u+0x00000004u; // 800DF4A0
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF4A4
  goto L_800DF5F0; // 800DF4A8
L_800DF4AC:;
  c->r[3]=0u+0x00000001u; // 800DF4AC
  c->lr=0x800DF4B4u; f_8005D714(c); // 800DF4B0
  {uint32_t ea=c->r[31]+0x0000192Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF4B4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800DF4B8
  {uint32_t ea=c->r[31]+0x0000192Cu; WF32(ea,c->f[1]);} // 800DF4BC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF4C0
  fcmp(c,0,c->f[1],c->f[0]); // 800DF4C4
  if (crb(c,1)) { goto L_800DF5F0; } // 800DF4C8
  c->r[3]=c->r[31]+0x00001964u; // 800DF4CC
  c->lr=0x800DF4D4u; f_800D53BC(c); // 800DF4D0
  c->r[3]=c->r[29]|c->r[29]; // 800DF4D4
  c->lr=0x800DF4DCu; f_800D51F8(c); // 800DF4D8
  c->r[0]=0u+0x00000005u; // 800DF4DC
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF4E0
  goto L_800DF5F0; // 800DF4E4
L_800DF4E8:;
  c->lr=0x800DF4ECu; f_800BAC18(c); // 800DF4E8
  c->r[0]=0u+0x00000006u; // 800DF4EC
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF4F0
  goto L_800DF5F0; // 800DF4F4
L_800DF4F8:;
  c->lr=0x800DF4FCu; f_800BAC20(c); // 800DF4F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF4FC
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF500
  c->r[3]=c->r[29]|c->r[29]; // 800DF504
  c->lr=0x800DF50Cu; f_800D51DC(c); // 800DF508
  c->r[30]=c->r[3]|c->r[3]; // 800DF50C
  c->r[3]=0u+0x00000001u; // 800DF510
  c->lr=0x800DF518u; f_80157074(c); // 800DF514
  c->r[3]=0u+0x0000018Bu; // 800DF518
  c->lr=0x800DF520u; f_80156468(c); // 800DF51C
  c->r[3]=c->r[30]+0x00000194u; // 800DF520
  c->lr=0x800DF528u; f_80156434(c); // 800DF524
  c->lr=0x800DF52Cu; f_80156F40(c); // 800DF528
  c->r[0]=0u+0x00000007u; // 800DF52C
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF530
  goto L_800DF5F0; // 800DF534
L_800DF538:;
  c->lr=0x800DF53Cu; f_800BAC48(c); // 800DF538
  cmps(c,0,(int32_t)c->r[3],0); // 800DF53C
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF540
  c->r[3]=0u+0x00000000u; // 800DF544
  c->lr=0x800DF54Cu; f_80157074(c); // 800DF548
  c->lr=0x800DF550u; f_800BAC1C(c); // 800DF54C
  c->r[0]=0u+0x00000008u; // 800DF550
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF554
  goto L_800DF5F0; // 800DF558
L_800DF55C:;
  c->lr=0x800DF560u; f_800BAC20(c); // 800DF55C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF560
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF564
  c->r[0]=0u+0x00000009u; // 800DF568
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF56C
  goto L_800DF5F0; // 800DF570
L_800DF574:;
  c->r[0]=0u+0x0000000Eu; // 800DF574
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF578
  goto L_800DF5F0; // 800DF57C
L_800DF580:;
  c->lr=0x800DF584u; f_800BAC18(c); // 800DF580
  c->r[0]=0u+0x0000000Bu; // 800DF584
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF588
  goto L_800DF5F0; // 800DF58C
L_800DF590:;
  c->lr=0x800DF594u; f_800BAC20(c); // 800DF590
  cmps(c,0,(int32_t)c->r[3],0); // 800DF594
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF598
  c->r[3]=0u+0x00000001u; // 800DF59C
  c->lr=0x800DF5A4u; f_80157074(c); // 800DF5A0
  c->r[3]=0u+0x0000018Cu; // 800DF5A4
  c->lr=0x800DF5ACu; f_800BAC24(c); // 800DF5A8
  c->r[0]=0u+0x0000000Cu; // 800DF5AC
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF5B0
  goto L_800DF5F0; // 800DF5B4
L_800DF5B8:;
  c->lr=0x800DF5BCu; f_800BAC48(c); // 800DF5B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF5BC
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF5C0
  c->r[3]=0u+0x00000000u; // 800DF5C4
  c->lr=0x800DF5CCu; f_80157074(c); // 800DF5C8
  c->lr=0x800DF5D0u; f_800BAC1C(c); // 800DF5CC
  c->r[0]=0u+0x0000000Du; // 800DF5D0
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF5D4
  goto L_800DF5F0; // 800DF5D8
L_800DF5DC:;
  c->lr=0x800DF5E0u; f_800BAC20(c); // 800DF5DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DF5E0
  if (crb(c,2)) { goto L_800DF5F0; } // 800DF5E4
  c->r[0]=0u+0x0000000Eu; // 800DF5E8
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF5EC
L_800DF5F0:;
  c->r[4]=R32(c->r[31]+0x00001924u); // 800DF5F0
  c->r[3]=addc(c,~c->r[4],0x0000000Eu,1); // 800DF5F4
  c->r[0]=c->r[4]+0xFFFFFFF2u; // 800DF5F8
  c->r[0]=c->r[3]|c->r[0]; // 800DF5FC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DF600
  c->r[31]=R32(c->r[1]+0x000000ACu); // 800DF604
  c->r[30]=R32(c->r[1]+0x000000A8u); // 800DF608
  c->r[29]=R32(c->r[1]+0x000000A4u); // 800DF60C
  c->r[28]=R32(c->r[1]+0x000000A0u); // 800DF610
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800DF614
  c->lr=c->r[0]; // 800DF618
  c->r[1]=c->r[1]+0x000000B0u; // 800DF61C
  return; // 800DF620
}

// fn_800DF624
void f_800DF624(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF624
  c->r[0]=c->lr; // 800DF628
  W32(c->r[1]+0x00000064u,c->r[0]); // 800DF62C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 800DF630
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 800DF634
  c->r[11]=c->r[1]+0x00000050u; // 800DF638
  c->lr=0x800DF640u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800DF63C
  c->r[31]=c->r[3]|c->r[3]; // 800DF640
  c->r[3]=c->r[1]+0x0000002Cu; // 800DF644
  c->lr=0x800DF64Cu; f_8004B0A4(c); // 800DF648
  c->r[3]=c->r[1]+0x00000020u; // 800DF64C
  c->lr=0x800DF654u; f_8004B0A4(c); // 800DF650
  c->r[3]=c->r[1]+0x00000014u; // 800DF654
  c->lr=0x800DF65Cu; f_8004B0A4(c); // 800DF658
  c->r[3]=c->r[1]+0x00000008u; // 800DF65C
  c->lr=0x800DF664u; f_8004B0A4(c); // 800DF660
  c->lr=0x800DF668u; f_800A23BC(c); // 800DF664
  c->lr=0x800DF66Cu; f_800A23C8(c); // 800DF668
  c->lr=0x800DF670u; f_800CA8C8(c); // 800DF66C
  c->r[29]=c->r[3]|c->r[3]; // 800DF670
  c->lr=0x800DF678u; f_800A23BC(c); // 800DF674
  c->lr=0x800DF67Cu; f_800A23C8(c); // 800DF678
  c->r[4]=c->r[29]|c->r[29]; // 800DF67C
  c->lr=0x800DF684u; f_800BBBC0(c); // 800DF680
  c->lr=0x800DF688u; f_800A23BC(c); // 800DF684
  c->lr=0x800DF68Cu; f_800A23C8(c); // 800DF688
  c->r[4]=c->r[29]|c->r[29]; // 800DF68C
  c->lr=0x800DF694u; f_800BBBC0(c); // 800DF690
  c->lr=0x800DF698u; f_800CCAF4(c); // 800DF694
  c->r[28]=c->r[3]|c->r[3]; // 800DF698
  c->lr=0x800DF6A0u; f_800A23BC(c); // 800DF69C
  c->lr=0x800DF6A4u; f_800BB800(c); // 800DF6A0
  c->r[4]=c->r[28]|c->r[28]; // 800DF6A4
  c->lr=0x800DF6ACu; f_800C1284(c); // 800DF6A8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF6AC
  if (!crb(c,2)) { goto L_800DF6BC; } // 800DF6B0
  c->r[3]=0u+0x00000000u; // 800DF6B4
  goto L_800DFA34; // 800DF6B8
L_800DF6BC:;
  c->r[29]=0u+0x00000000u; // 800DF6BC
  c->r[27]=0u+0x00000000u; // 800DF6C0
  c->r[30]=c->r[31]+0x0000177Cu; // 800DF6C4
  goto L_800DF6F4; // 800DF6C8
L_800DF6CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800DF6CC
  c->lr=0x800DF6D4u; f_800D52C4(c); // 800DF6D0
  cmpu(c,0,c->r[28],c->r[3]); // 800DF6D4
  if (!crb(c,2)) { goto L_800DF6EC; } // 800DF6D8
  c->r[0]=(uint32_t)((int32_t)c->r[27]*(int32_t)72); // 800DF6DC
  c->r[3]=c->r[31]+c->r[0]; // 800DF6E0
  c->r[29]=c->r[3]+0x0000153Cu; // 800DF6E4
  goto L_800DF700; // 800DF6E8
L_800DF6EC:;
  c->r[30]=c->r[30]+0x00000034u; // 800DF6EC
  c->r[27]=c->r[27]+0x00000001u; // 800DF6F0
L_800DF6F4:;
  c->r[0]=R32(c->r[31]+0x0000191Cu); // 800DF6F4
  cmpu(c,0,c->r[27],c->r[0]); // 800DF6F8
  if (crb(c,0)) { IRQCHK(c); goto L_800DF6CC; } // 800DF6FC
L_800DF700:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DF700
  if (crb(c,2)) { goto L_800DFA30; } // 800DF704
  c->lr=0x800DF70Cu; f_800A23BC(c); // 800DF708
  c->lr=0x800DF710u; f_800A23C4(c); // 800DF70C
  c->lr=0x800DF714u; f_800BBF6C(c); // 800DF710
  c->r[27]=c->r[3]|c->r[3]; // 800DF714
  c->r[3]=0u+0x00000000u; // 800DF718
  c->r[0]=R32(c->r[31]+0x00001920u); // 800DF71C
  cmps(c,0,(int32_t)c->r[0],3); // 800DF720
  if (crb(c,2)) { goto L_800DF844; } // 800DF724
  if (!crb(c,0)) { goto L_800DF744; } // 800DF728
  cmps(c,0,(int32_t)c->r[0],1); // 800DF72C
  if (crb(c,2)) { goto L_800DF7D8; } // 800DF730
  if (!crb(c,0)) { goto L_800DF818; } // 800DF734
  cmps(c,0,(int32_t)c->r[0],0); // 800DF738
  if (!crb(c,0)) { goto L_800DF754; } // 800DF73C
  goto L_800DFA1C; // 800DF740
L_800DF744:;
  cmps(c,0,(int32_t)c->r[0],5); // 800DF744
  if (crb(c,2)) { goto L_800DF998; } // 800DF748
  if (!crb(c,0)) { goto L_800DFA1C; } // 800DF74C
  goto L_800DF94C; // 800DF750
L_800DF754:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF754
  c->lr=0x800DF75Cu; f_800D5294(c); // 800DF758
  cmps(c,0,(int32_t)c->r[3],0); // 800DF75C
  if (crb(c,2)) { goto L_800DF770; } // 800DF760
  c->r[0]=0u+0x00000000u; // 800DF764
  W32(c->r[31]+0x00001928u,c->r[0]); // 800DF768
  goto L_800DF7C0; // 800DF76C
L_800DF770:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF770
  c->lr=0x800DF778u; f_800D5264(c); // 800DF774
  cmps(c,0,(int32_t)c->r[3],0); // 800DF778
  if (crb(c,2)) { goto L_800DF78C; } // 800DF77C
  c->r[0]=0u+0x00000001u; // 800DF780
  W32(c->r[31]+0x00001928u,c->r[0]); // 800DF784
  goto L_800DF7C0; // 800DF788
L_800DF78C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF78C
  c->lr=0x800DF794u; f_800D5234(c); // 800DF790
  cmps(c,0,(int32_t)c->r[3],0); // 800DF794
  if (crb(c,2)) { goto L_800DF7A8; } // 800DF798
  c->r[0]=0u+0x00000002u; // 800DF79C
  W32(c->r[31]+0x00001928u,c->r[0]); // 800DF7A0
  goto L_800DF7C0; // 800DF7A4
L_800DF7A8:;
  c->r[3]=c->r[29]|c->r[29]; // 800DF7A8
  c->lr=0x800DF7B0u; f_800D5204(c); // 800DF7AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DF7B0
  if (crb(c,2)) { goto L_800DF7C0; } // 800DF7B4
  c->r[0]=0u+0x00000003u; // 800DF7B8
  W32(c->r[31]+0x00001928u,c->r[0]); // 800DF7BC
L_800DF7C0:;
  c->r[3]=R32(c->r[31]+0x00001920u); // 800DF7C0
  c->r[0]=c->r[3]+0x00000001u; // 800DF7C4
  W32(c->r[31]+0x00001920u,c->r[0]); // 800DF7C8
  c->r[0]=0u+0x00000000u; // 800DF7CC
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DF7D0
  goto L_800DFA1C; // 800DF7D4
L_800DF7D8:;
  c->lr=0x800DF7DCu; f_800A23BC(c); // 800DF7D8
  c->lr=0x800DF7E0u; f_800BB800(c); // 800DF7DC
  c->r[4]=c->r[28]|c->r[28]; // 800DF7E0
  c->lr=0x800DF7E8u; f_800BBD58(c); // 800DF7E4
  c->r[4]=c->r[1]+0x00000020u; // 800DF7E8
  c->lr=0x800DF7F0u; f_800BD664(c); // 800DF7EC
  c->lr=0x800DF7F4u; f_800A23BC(c); // 800DF7F0
  c->lr=0x800DF7F8u; f_800BB800(c); // 800DF7F4
  c->r[4]=c->r[27]|c->r[27]; // 800DF7F8
  c->lr=0x800DF800u; f_800BBD58(c); // 800DF7FC
  c->r[4]=c->r[1]+0x00000020u; // 800DF800
  c->lr=0x800DF808u; f_800C7988(c); // 800DF804
  c->r[3]=R32(c->r[31]+0x00001920u); // 800DF808
  c->r[0]=c->r[3]+0x00000001u; // 800DF80C
  W32(c->r[31]+0x00001920u,c->r[0]); // 800DF810
  goto L_800DFA1C; // 800DF814
L_800DF818:;
  c->lr=0x800DF81Cu; f_800A23BC(c); // 800DF818
  c->lr=0x800DF820u; f_800BB800(c); // 800DF81C
  c->r[4]=c->r[27]|c->r[27]; // 800DF820
  c->lr=0x800DF828u; f_800BBD58(c); // 800DF824
  c->lr=0x800DF82Cu; f_800BDC80(c); // 800DF828
  cmps(c,0,(int32_t)c->r[3],0); // 800DF82C
  if (crb(c,2)) { goto L_800DFA1C; } // 800DF830
  c->r[3]=R32(c->r[31]+0x00001920u); // 800DF834
  c->r[0]=c->r[3]+0x00000001u; // 800DF838
  W32(c->r[31]+0x00001920u,c->r[0]); // 800DF83C
  goto L_800DFA1C; // 800DF840
L_800DF844:;
  c->lr=0x800DF848u; f_800A23BC(c); // 800DF844
  c->lr=0x800DF84Cu; f_800BB800(c); // 800DF848
  c->r[4]=c->r[28]|c->r[28]; // 800DF84C
  c->lr=0x800DF854u; f_800BBD58(c); // 800DF850
  c->r[4]=c->r[1]+0x00000020u; // 800DF854
  c->lr=0x800DF85Cu; f_800BD664(c); // 800DF858
  c->lr=0x800DF860u; f_800A23BC(c); // 800DF85C
  c->lr=0x800DF864u; f_800BB800(c); // 800DF860
  c->r[4]=c->r[27]|c->r[27]; // 800DF864
  c->lr=0x800DF86Cu; f_800BBD58(c); // 800DF868
  c->r[4]=c->r[1]+0x0000002Cu; // 800DF86C
  c->lr=0x800DF874u; f_800BD664(c); // 800DF870
  c->r[3]=c->r[1]+0x00000014u; // 800DF874
  c->r[4]=c->r[1]+0x0000002Cu; // 800DF878
  c->r[5]=c->r[1]+0x00000020u; // 800DF87C
  c->lr=0x800DF884u; f_8006000C(c); // 800DF880
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF884
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DF888
  c->r[3]=c->r[1]+0x00000014u; // 800DF88C
  c->lr=0x800DF894u; f_8005C170(c); // 800DF890
  c->f[31]=c->f[1]; // 800DF894
  {uint32_t ea=c->r[2]+0xFFFF892Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF898
  fcmp(c,0,c->f[1],c->f[0]); // 800DF89C
  if (!crb(c,1)) { goto L_800DF8A8; } // 800DF8A0
  c->f[31]=c->f[0]; // 800DF8A4
L_800DF8A8:;
  c->r[3]=c->r[1]+0x00000008u; // 800DF8A8
  c->r[4]=c->r[1]+0x00000014u; // 800DF8AC
  c->lr=0x800DF8B4u; f_8005C110(c); // 800DF8B0
  c->r[3]=c->r[1]+0x00000014u; // 800DF8B4
  c->r[4]=c->r[1]+0x00000008u; // 800DF8B8
  c->f[1]=c->f[31]; // 800DF8BC
  c->lr=0x800DF8C4u; f_8004E330(c); // 800DF8C0
  c->r[3]=c->r[1]+0x00000020u; // 800DF8C4
  c->r[4]=c->r[3]|c->r[3]; // 800DF8C8
  c->r[5]=c->r[1]+0x00000014u; // 800DF8CC
  c->lr=0x800DF8D4u; f_8005C194(c); // 800DF8D0
  c->lr=0x800DF8D8u; f_800A23BC(c); // 800DF8D4
  c->lr=0x800DF8DCu; f_800BB800(c); // 800DF8D8
  c->r[4]=c->r[27]|c->r[27]; // 800DF8DC
  c->lr=0x800DF8E4u; f_800BBD58(c); // 800DF8E0
  c->r[4]=0u+0x80460000u; // 800DF8E4
  c->r[4]=c->r[4]+0x0000063Cu; // 800DF8E8
  c->r[5]=0u+0x00000006u; // 800DF8EC
  c->lr=0x800DF8F4u; f_800C7E90(c); // 800DF8F0
  c->lr=0x800DF8F8u; f_800A23BC(c); // 800DF8F4
  c->lr=0x800DF8FCu; f_800BB800(c); // 800DF8F8
  c->r[4]=c->r[27]|c->r[27]; // 800DF8FC
  c->lr=0x800DF904u; f_800BBD58(c); // 800DF900
  c->r[4]=c->r[1]+0x0000002Cu; // 800DF904
  c->lr=0x800DF90Cu; f_800BCDE8(c); // 800DF908
  c->lr=0x800DF910u; f_800A23BC(c); // 800DF90C
  c->lr=0x800DF914u; f_800BB800(c); // 800DF910
  c->r[4]=c->r[27]|c->r[27]; // 800DF914
  c->lr=0x800DF91Cu; f_800BBD58(c); // 800DF918
  c->r[4]=c->r[1]+0x00000020u; // 800DF91C
  c->lr=0x800DF924u; f_800BCF2C(c); // 800DF920
  c->lr=0x800DF928u; f_800A23BC(c); // 800DF924
  c->lr=0x800DF92Cu; f_800BB800(c); // 800DF928
  c->r[4]=c->r[27]|c->r[27]; // 800DF92C
  c->lr=0x800DF934u; f_800BBD58(c); // 800DF930
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF934
  c->lr=0x800DF93Cu; f_800BD730(c); // 800DF938
  c->r[3]=R32(c->r[31]+0x00001920u); // 800DF93C
  c->r[0]=c->r[3]+0x00000001u; // 800DF940
  W32(c->r[31]+0x00001920u,c->r[0]); // 800DF944
  goto L_800DFA1C; // 800DF948
L_800DF94C:;
  c->lr=0x800DF950u; f_800A23BC(c); // 800DF94C
  c->lr=0x800DF954u; f_800BB800(c); // 800DF950
  c->r[4]=c->r[27]|c->r[27]; // 800DF954
  c->lr=0x800DF95Cu; f_800BBD58(c); // 800DF958
  c->lr=0x800DF960u; f_800BDC10(c); // 800DF95C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF960
  if (crb(c,2)) { goto L_800DFA1C; } // 800DF964
  c->lr=0x800DF96Cu; f_800A23BC(c); // 800DF968
  c->lr=0x800DF970u; f_800BB800(c); // 800DF96C
  c->r[4]=c->r[27]|c->r[27]; // 800DF970
  c->lr=0x800DF978u; f_800BBD58(c); // 800DF974
  c->r[4]=0u+0x80460000u; // 800DF978
  c->r[4]=c->r[4]+0x0000062Cu; // 800DF97C
  c->r[5]=0u+0x00000006u; // 800DF980
  c->lr=0x800DF988u; f_800C7E90(c); // 800DF984
  c->r[3]=R32(c->r[31]+0x00001920u); // 800DF988
  c->r[0]=c->r[3]+0x00000001u; // 800DF98C
  W32(c->r[31]+0x00001920u,c->r[0]); // 800DF990
  goto L_800DFA1C; // 800DF994
L_800DF998:;
  c->r[0]=R32(c->r[31]+0x00001928u); // 800DF998
  cmps(c,0,(int32_t)c->r[0],2); // 800DF99C
  if (crb(c,2)) { goto L_800DF9E4; } // 800DF9A0
  if (!crb(c,0)) { goto L_800DF9B8; } // 800DF9A4
  cmps(c,0,(int32_t)c->r[0],0); // 800DF9A8
  if (crb(c,2)) { goto L_800DF9C4; } // 800DF9AC
  if (!crb(c,0)) { goto L_800DF9D4; } // 800DF9B0
  goto L_800DFA00; // 800DF9B4
L_800DF9B8:;
  cmps(c,0,(int32_t)c->r[0],4); // 800DF9B8
  if (!crb(c,0)) { goto L_800DFA00; } // 800DF9BC
  goto L_800DF9F4; // 800DF9C0
L_800DF9C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF9C4
  c->r[4]=c->r[29]|c->r[29]; // 800DF9C8
  c->lr=0x800DF9D0u; f_800DEF80(c); // 800DF9CC
  goto L_800DFA00; // 800DF9D0
L_800DF9D4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF9D4
  c->r[4]=c->r[29]|c->r[29]; // 800DF9D8
  c->lr=0x800DF9E0u; f_800DF148(c); // 800DF9DC
  goto L_800DFA00; // 800DF9E0
L_800DF9E4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF9E4
  c->r[4]=c->r[29]|c->r[29]; // 800DF9E8
  c->lr=0x800DF9F0u; f_800DF21C(c); // 800DF9EC
  goto L_800DFA00; // 800DF9F0
L_800DF9F4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DF9F4
  c->r[4]=c->r[29]|c->r[29]; // 800DF9F8
  c->lr=0x800DFA00u; f_800DF2F8(c); // 800DF9FC
L_800DFA00:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DFA00
  if (crb(c,2)) { goto L_800DFA10; } // 800DFA04
  c->r[3]=0u+0x00000001u; // 800DFA08
  goto L_800DFA34; // 800DFA0C
L_800DFA10:;
  c->r[0]=0u+0x00000000u; // 800DFA10
  W32(c->r[31]+0x00001920u,c->r[0]); // 800DFA14
  W32(c->r[31]+0x00001924u,c->r[0]); // 800DFA18
L_800DFA1C:;
  c->r[0]=R32(c->r[31]+0x00001920u); // 800DFA1C
  cmps(c,0,(int32_t)c->r[0],0); // 800DFA20
  if (crb(c,2)) { goto L_800DFA30; } // 800DFA24
  c->r[3]=0u+0x00000001u; // 800DFA28
  goto L_800DFA34; // 800DFA2C
L_800DFA30:;
  c->r[3]=0u+0x00000000u; // 800DFA30
L_800DFA34:;
  c->r[0]=0u+0x00000058u; // 800DFA34
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800DFA38
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 800DFA3C
  c->r[11]=c->r[1]+0x00000050u; // 800DFA40
  c->lr=0x800DFA48u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800DFA44
  c->r[0]=R32(c->r[1]+0x00000064u); // 800DFA48
  c->lr=c->r[0]; // 800DFA4C
  c->r[1]=c->r[1]+0x00000060u; // 800DFA50
  return; // 800DFA54
}

// fn_800DFA58
void f_800DFA58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFA58
  c->r[0]=c->lr; // 800DFA5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DFA60
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DFA64
  W32(c->r[1]+0x00000048u,c->r[30]); // 800DFA68
  W32(c->r[1]+0x00000044u,c->r[29]); // 800DFA6C
  c->r[31]=c->r[3]|c->r[3]; // 800DFA70
  c->r[3]=c->r[1]+0x0000002Cu; // 800DFA74
  c->lr=0x800DFA7Cu; f_8004B0A4(c); // 800DFA78
  c->r[3]=c->r[1]+0x00000020u; // 800DFA7C
  c->lr=0x800DFA84u; f_8004B0A4(c); // 800DFA80
  c->r[3]=c->r[1]+0x00000014u; // 800DFA84
  c->lr=0x800DFA8Cu; f_8004B0A4(c); // 800DFA88
  c->r[3]=c->r[1]+0x00000008u; // 800DFA8C
  c->lr=0x800DFA94u; f_8004B0A4(c); // 800DFA90
  c->lr=0x800DFA98u; f_800A23BC(c); // 800DFA94
  c->lr=0x800DFA9Cu; f_800A23C8(c); // 800DFA98
  c->lr=0x800DFAA0u; f_800CA8C8(c); // 800DFA9C
  c->r[30]=c->r[3]|c->r[3]; // 800DFAA0
  c->lr=0x800DFAA8u; f_800A23BC(c); // 800DFAA4
  c->lr=0x800DFAACu; f_800A23C8(c); // 800DFAA8
  c->r[4]=c->r[30]|c->r[30]; // 800DFAAC
  c->lr=0x800DFAB4u; f_800BBBC0(c); // 800DFAB0
  c->lr=0x800DFAB8u; f_800A23BC(c); // 800DFAB4
  c->lr=0x800DFABCu; f_800A23C8(c); // 800DFAB8
  c->r[4]=c->r[30]|c->r[30]; // 800DFABC
  c->lr=0x800DFAC4u; f_800BBBC0(c); // 800DFAC0
  c->lr=0x800DFAC8u; f_800CCAF4(c); // 800DFAC4
  c->r[30]=c->r[3]|c->r[3]; // 800DFAC8
  c->lr=0x800DFAD0u; f_800A23BC(c); // 800DFACC
  c->lr=0x800DFAD4u; f_800BB800(c); // 800DFAD0
  c->r[4]=c->r[30]|c->r[30]; // 800DFAD4
  c->lr=0x800DFADCu; f_800C1284(c); // 800DFAD8
  cmps(c,0,(int32_t)c->r[3],0); // 800DFADC
  if (!crb(c,2)) { goto L_800DFAEC; } // 800DFAE0
  c->r[3]=0u+0x00000000u; // 800DFAE4
  goto L_800DFD38; // 800DFAE8
L_800DFAEC:;
  c->lr=0x800DFAF0u; f_800A23BC(c); // 800DFAEC
  c->lr=0x800DFAF4u; f_800A23C4(c); // 800DFAF0
  c->lr=0x800DFAF8u; f_800BBF6C(c); // 800DFAF4
  c->r[29]=c->r[3]|c->r[3]; // 800DFAF8
  c->r[0]=R32(c->r[31]+0x00001958u); // 800DFAFC
  cmps(c,0,(int32_t)c->r[0],3); // 800DFB00
  if (crb(c,2)) { goto L_800DFC88; } // 800DFB04
  if (!crb(c,0)) { goto L_800DFB24; } // 800DFB08
  cmps(c,0,(int32_t)c->r[0],1); // 800DFB0C
  if (crb(c,2)) { goto L_800DFB74; } // 800DFB10
  if (!crb(c,0)) { goto L_800DFBA0; } // 800DFB14
  cmps(c,0,(int32_t)c->r[0],0); // 800DFB18
  if (!crb(c,0)) { goto L_800DFB34; } // 800DFB1C
  goto L_800DFD28; // 800DFB20
L_800DFB24:;
  cmps(c,0,(int32_t)c->r[0],5); // 800DFB24
  if (crb(c,2)) { goto L_800DFCE8; } // 800DFB28
  if (!crb(c,0)) { goto L_800DFD28; } // 800DFB2C
  goto L_800DFCD4; // 800DFB30
L_800DFB34:;
  c->lr=0x800DFB38u; f_800A23BC(c); // 800DFB34
  c->lr=0x800DFB3Cu; f_800BB800(c); // 800DFB38
  c->r[4]=c->r[30]|c->r[30]; // 800DFB3C
  c->lr=0x800DFB44u; f_800BBD58(c); // 800DFB40
  c->r[4]=c->r[1]+0x00000020u; // 800DFB44
  c->lr=0x800DFB4Cu; f_800BD664(c); // 800DFB48
  c->lr=0x800DFB50u; f_800A23BC(c); // 800DFB4C
  c->lr=0x800DFB54u; f_800BB800(c); // 800DFB50
  c->r[4]=c->r[29]|c->r[29]; // 800DFB54
  c->lr=0x800DFB5Cu; f_800BBD58(c); // 800DFB58
  c->r[4]=c->r[1]+0x00000020u; // 800DFB5C
  c->lr=0x800DFB64u; f_800C7988(c); // 800DFB60
  c->r[3]=R32(c->r[31]+0x00001958u); // 800DFB64
  c->r[0]=c->r[3]+0x00000001u; // 800DFB68
  W32(c->r[31]+0x00001958u,c->r[0]); // 800DFB6C
  goto L_800DFD28; // 800DFB70
L_800DFB74:;
  c->lr=0x800DFB78u; f_800A23BC(c); // 800DFB74
  c->lr=0x800DFB7Cu; f_800BB800(c); // 800DFB78
  c->r[4]=c->r[29]|c->r[29]; // 800DFB7C
  c->lr=0x800DFB84u; f_800BBD58(c); // 800DFB80
  c->lr=0x800DFB88u; f_800BDC80(c); // 800DFB84
  cmps(c,0,(int32_t)c->r[3],0); // 800DFB88
  if (crb(c,2)) { goto L_800DFD28; } // 800DFB8C
  c->r[3]=R32(c->r[31]+0x00001958u); // 800DFB90
  c->r[0]=c->r[3]+0x00000001u; // 800DFB94
  W32(c->r[31]+0x00001958u,c->r[0]); // 800DFB98
  goto L_800DFD28; // 800DFB9C
L_800DFBA0:;
  c->lr=0x800DFBA4u; f_800A23BC(c); // 800DFBA0
  c->lr=0x800DFBA8u; f_800BB800(c); // 800DFBA4
  c->r[4]=c->r[30]|c->r[30]; // 800DFBA8
  c->lr=0x800DFBB0u; f_800BBD58(c); // 800DFBAC
  c->r[4]=c->r[1]+0x00000020u; // 800DFBB0
  c->lr=0x800DFBB8u; f_800BD664(c); // 800DFBB4
  c->lr=0x800DFBBCu; f_800A23BC(c); // 800DFBB8
  c->lr=0x800DFBC0u; f_800BB800(c); // 800DFBBC
  c->r[4]=c->r[29]|c->r[29]; // 800DFBC0
  c->lr=0x800DFBC8u; f_800BBD58(c); // 800DFBC4
  c->r[4]=c->r[1]+0x0000002Cu; // 800DFBC8
  c->lr=0x800DFBD0u; f_800BD664(c); // 800DFBCC
  c->r[3]=c->r[1]+0x00000014u; // 800DFBD0
  c->r[4]=c->r[1]+0x0000002Cu; // 800DFBD4
  c->r[5]=c->r[1]+0x00000020u; // 800DFBD8
  c->lr=0x800DFBE0u; f_8006000C(c); // 800DFBDC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFBE0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DFBE4
  c->r[3]=c->r[1]+0x00000014u; // 800DFBE8
  c->lr=0x800DFBF0u; f_8005C170(c); // 800DFBEC
  {uint32_t ea=c->r[2]+0xFFFF892Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFBF0
  fcmp(c,0,c->f[1],c->f[0]); // 800DFBF4
  if (!crb(c,1)) { goto L_800DFC78; } // 800DFBF8
  c->r[3]=c->r[1]+0x00000008u; // 800DFBFC
  c->r[4]=c->r[1]+0x00000014u; // 800DFC00
  c->lr=0x800DFC08u; f_8005C110(c); // 800DFC04
  c->r[3]=c->r[1]+0x00000014u; // 800DFC08
  c->r[4]=c->r[1]+0x00000008u; // 800DFC0C
  {uint32_t ea=c->r[2]+0xFFFF892Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFC10
  c->lr=0x800DFC18u; f_8004E330(c); // 800DFC14
  c->r[3]=c->r[1]+0x00000020u; // 800DFC18
  c->r[4]=c->r[3]|c->r[3]; // 800DFC1C
  c->r[5]=c->r[1]+0x00000014u; // 800DFC20
  c->lr=0x800DFC28u; f_8005C194(c); // 800DFC24
  c->lr=0x800DFC2Cu; f_800A23BC(c); // 800DFC28
  c->lr=0x800DFC30u; f_800BB800(c); // 800DFC2C
  c->r[4]=c->r[29]|c->r[29]; // 800DFC30
  c->lr=0x800DFC38u; f_800BBD58(c); // 800DFC34
  c->r[4]=0u+0x80460000u; // 800DFC38
  c->r[4]=c->r[4]+0x0000063Cu; // 800DFC3C
  c->r[5]=0u+0x00000006u; // 800DFC40
  c->lr=0x800DFC48u; f_800C7E90(c); // 800DFC44
  c->lr=0x800DFC4Cu; f_800A23BC(c); // 800DFC48
  c->lr=0x800DFC50u; f_800BB800(c); // 800DFC4C
  c->r[4]=c->r[29]|c->r[29]; // 800DFC50
  c->lr=0x800DFC58u; f_800BBD58(c); // 800DFC54
  c->r[4]=c->r[1]+0x00000020u; // 800DFC58
  c->lr=0x800DFC60u; f_800BCF2C(c); // 800DFC5C
  c->lr=0x800DFC64u; f_800A23BC(c); // 800DFC60
  c->lr=0x800DFC68u; f_800BB800(c); // 800DFC64
  c->r[4]=c->r[29]|c->r[29]; // 800DFC68
  c->lr=0x800DFC70u; f_800BBD58(c); // 800DFC6C
  {uint32_t ea=c->r[2]+0xFFFF8828u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFC70
  c->lr=0x800DFC78u; f_800BD730(c); // 800DFC74
L_800DFC78:;
  c->r[3]=R32(c->r[31]+0x00001958u); // 800DFC78
  c->r[0]=c->r[3]+0x00000001u; // 800DFC7C
  W32(c->r[31]+0x00001958u,c->r[0]); // 800DFC80
  goto L_800DFD28; // 800DFC84
L_800DFC88:;
  c->lr=0x800DFC8Cu; f_800A23BC(c); // 800DFC88
  c->lr=0x800DFC90u; f_800BB800(c); // 800DFC8C
  c->r[4]=c->r[29]|c->r[29]; // 800DFC90
  c->lr=0x800DFC98u; f_800BBD58(c); // 800DFC94
  c->lr=0x800DFC9Cu; f_800BDC10(c); // 800DFC98
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC9C
  if (crb(c,2)) { goto L_800DFD28; } // 800DFCA0
  c->lr=0x800DFCA8u; f_800A23BC(c); // 800DFCA4
  c->lr=0x800DFCACu; f_800BB800(c); // 800DFCA8
  c->r[4]=c->r[29]|c->r[29]; // 800DFCAC
  c->lr=0x800DFCB4u; f_800BBD58(c); // 800DFCB0
  c->r[4]=0u+0x80460000u; // 800DFCB4
  c->r[4]=c->r[4]+0x0000062Cu; // 800DFCB8
  c->r[5]=0u+0x00000006u; // 800DFCBC
  c->lr=0x800DFCC4u; f_800C7E90(c); // 800DFCC0
  c->r[3]=R32(c->r[31]+0x00001958u); // 800DFCC4
  c->r[0]=c->r[3]+0x00000001u; // 800DFCC8
  W32(c->r[31]+0x00001958u,c->r[0]); // 800DFCCC
  goto L_800DFD28; // 800DFCD0
L_800DFCD4:;
  c->r[3]=c->r[31]+0x00001934u; // 800DFCD4
  c->lr=0x800DFCDCu; f_800E130C(c); // 800DFCD8
  c->r[0]=0u+0x00000005u; // 800DFCDC
  W32(c->r[31]+0x00001958u,c->r[0]); // 800DFCE0
  goto L_800DFD28; // 800DFCE4
L_800DFCE8:;
  c->r[3]=c->r[31]+0x00001934u; // 800DFCE8
  c->lr=0x800DFCF0u; f_800E12E4(c); // 800DFCEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFCF0
  if (crb(c,2)) { goto L_800DFD28; } // 800DFCF4
  c->r[29]=0u+0x00000000u; // 800DFCF8
  c->r[30]=c->r[31]+0x0000153Cu; // 800DFCFC
  goto L_800DFD14; // 800DFD00
L_800DFD04:;
  c->r[3]=c->r[30]|c->r[30]; // 800DFD04
  c->lr=0x800DFD0Cu; f_800D4348(c); // 800DFD08
  c->r[30]=c->r[30]+0x00000048u; // 800DFD0C
  c->r[29]=c->r[29]+0x00000001u; // 800DFD10
L_800DFD14:;
  c->r[0]=R32(c->r[31]+0x0000191Cu); // 800DFD14
  cmpu(c,0,c->r[29],c->r[0]); // 800DFD18
  if (crb(c,0)) { IRQCHK(c); goto L_800DFD04; } // 800DFD1C
  c->r[0]=0u+0x00000000u; // 800DFD20
  W32(c->r[31]+0x00001958u,c->r[0]); // 800DFD24
L_800DFD28:;
  c->r[3]=R32(c->r[31]+0x00001958u); // 800DFD28
  c->r[0]=0u-c->r[3]; // 800DFD2C
  c->r[0]=c->r[0]|c->r[3]; // 800DFD30
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800DFD34
L_800DFD38:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DFD38
  c->r[30]=R32(c->r[1]+0x00000048u); // 800DFD3C
  c->r[29]=R32(c->r[1]+0x00000044u); // 800DFD40
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DFD44
  c->lr=c->r[0]; // 800DFD48
  c->r[1]=c->r[1]+0x00000050u; // 800DFD4C
  return; // 800DFD50
}

// fn_800DFD54
void f_800DFD54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFD54
  c->r[0]=c->lr; // 800DFD58
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DFD5C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800DFD60
  W32(c->r[1]+0x00000028u,c->r[30]); // 800DFD64
  W32(c->r[1]+0x00000024u,c->r[29]); // 800DFD68
  W32(c->r[1]+0x00000020u,c->r[28]); // 800DFD6C
  c->r[28]=c->r[3]|c->r[3]; // 800DFD70
  c->r[29]=c->r[4]|c->r[4]; // 800DFD74
  c->r[3]=c->r[1]+0x00000014u; // 800DFD78
  c->lr=0x800DFD80u; f_8004B0A4(c); // 800DFD7C
  c->r[3]=c->r[1]+0x00000008u; // 800DFD80
  c->lr=0x800DFD88u; f_8004B0A4(c); // 800DFD84
  c->r[3]=c->r[28]|c->r[28]; // 800DFD88
  c->lr=0x800DFD90u; f_800BEE64(c); // 800DFD8C
  c->r[31]=c->r[3]|c->r[3]; // 800DFD90
  goto L_800DFDF4; // 800DFD94
L_800DFD98:;
  c->r[3]=c->r[28]|c->r[28]; // 800DFD98
  c->r[4]=c->r[31]|c->r[31]; // 800DFD9C
  c->lr=0x800DFDA4u; f_800BEDA0(c); // 800DFDA0
  c->r[30]=c->r[3]|c->r[3]; // 800DFDA4
  c->lr=0x800DFDACu; f_800CF580(c); // 800DFDA8
  cmps(c,0,(int32_t)c->r[3],4); // 800DFDAC
  if (!crb(c,2)) { goto L_800DFDE4; } // 800DFDB0
  c->r[3]=c->r[30]|c->r[30]; // 800DFDB4
  c->lr=0x800DFDBCu; f_800BDEC4(c); // 800DFDB8
  cmpu(c,0,c->r[29],c->r[3]); // 800DFDBC
  if (!crb(c,2)) { goto L_800DFDE4; } // 800DFDC0
  c->r[3]=c->r[30]|c->r[30]; // 800DFDC4
  c->lr=0x800DFDCCu; f_800CF71C(c); // 800DFDC8
  c->r[31]=c->r[3]|c->r[3]; // 800DFDCC
  c->lr=0x800DFDD4u; f_800A23BC(c); // 800DFDD0
  c->lr=0x800DFDD8u; f_800BB800(c); // 800DFDD4
  c->r[4]=c->r[31]|c->r[31]; // 800DFDD8
  c->lr=0x800DFDE0u; f_800BBD98(c); // 800DFDDC
  goto L_800DFE00; // 800DFDE0
L_800DFDE4:;
  c->r[3]=c->r[28]|c->r[28]; // 800DFDE4
  c->r[4]=c->r[31]|c->r[31]; // 800DFDE8
  c->lr=0x800DFDF0u; f_800BEE9C(c); // 800DFDEC
  c->r[31]=c->r[3]|c->r[3]; // 800DFDF0
L_800DFDF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DFDF4
  if (!crb(c,2)) { IRQCHK(c); goto L_800DFD98; } // 800DFDF8
  c->r[3]=0u+0x00000000u; // 800DFDFC
L_800DFE00:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800DFE00
  c->r[30]=R32(c->r[1]+0x00000028u); // 800DFE04
  c->r[29]=R32(c->r[1]+0x00000024u); // 800DFE08
  c->r[28]=R32(c->r[1]+0x00000020u); // 800DFE0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DFE10
  c->lr=c->r[0]; // 800DFE14
  c->r[1]=c->r[1]+0x00000030u; // 800DFE18
  return; // 800DFE1C
}

// fn_800DFE20
void f_800DFE20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFE20
  c->r[0]=c->lr; // 800DFE24
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DFE28
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800DFE2C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800DFE30
  W32(c->r[1]+0x00000024u,c->r[29]); // 800DFE34
  W32(c->r[1]+0x00000020u,c->r[28]); // 800DFE38
  c->r[28]=c->r[3]|c->r[3]; // 800DFE3C
  c->r[29]=c->r[4]|c->r[4]; // 800DFE40
  c->r[3]=c->r[1]+0x00000014u; // 800DFE44
  c->lr=0x800DFE4Cu; f_8004B0A4(c); // 800DFE48
  c->r[3]=c->r[1]+0x00000008u; // 800DFE4C
  c->lr=0x800DFE54u; f_8004B0A4(c); // 800DFE50
  c->lr=0x800DFE58u; f_800A23BC(c); // 800DFE54
  c->lr=0x800DFE5Cu; f_800BB800(c); // 800DFE58
  c->r[4]=c->r[29]|c->r[29]; // 800DFE5C
  c->lr=0x800DFE64u; f_800BBD58(c); // 800DFE60
  c->lr=0x800DFE68u; f_800BDEB4(c); // 800DFE64
  c->r[30]=c->r[3]|c->r[3]; // 800DFE68
  c->r[3]=c->r[28]|c->r[28]; // 800DFE6C
  c->lr=0x800DFE74u; f_800BEE64(c); // 800DFE70
  c->r[31]=c->r[3]|c->r[3]; // 800DFE74
  goto L_800DFED0; // 800DFE78
L_800DFE7C:;
  c->r[3]=c->r[28]|c->r[28]; // 800DFE7C
  c->r[4]=c->r[31]|c->r[31]; // 800DFE80
  c->lr=0x800DFE88u; f_800BEDA0(c); // 800DFE84
  c->r[29]=c->r[3]|c->r[3]; // 800DFE88
  c->lr=0x800DFE90u; f_800CF580(c); // 800DFE8C
  cmps(c,0,(int32_t)c->r[3],4); // 800DFE90
  if (!crb(c,2)) { goto L_800DFEC0; } // 800DFE94
  c->r[3]=c->r[29]|c->r[29]; // 800DFE98
  c->lr=0x800DFEA0u; f_800CF71C(c); // 800DFE9C
  c->r[4]=c->r[3]|c->r[3]; // 800DFEA0
  c->r[3]=c->r[30]|c->r[30]; // 800DFEA4
  c->lr=0x800DFEACu; f_802E96C4(c); // 800DFEA8
  cmps(c,0,(int32_t)c->r[3],0); // 800DFEAC
  if (!crb(c,2)) { goto L_800DFEC0; } // 800DFEB0
  c->r[3]=c->r[29]|c->r[29]; // 800DFEB4
  c->lr=0x800DFEBCu; f_800BDE68(c); // 800DFEB8
  goto L_800DFEDC; // 800DFEBC
L_800DFEC0:;
  c->r[3]=c->r[28]|c->r[28]; // 800DFEC0
  c->r[4]=c->r[31]|c->r[31]; // 800DFEC4
  c->lr=0x800DFECCu; f_800BEE9C(c); // 800DFEC8
  c->r[31]=c->r[3]|c->r[3]; // 800DFECC
L_800DFED0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DFED0
  if (!crb(c,2)) { IRQCHK(c); goto L_800DFE7C; } // 800DFED4
  c->r[3]=0u+0x00000000u; // 800DFED8
L_800DFEDC:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800DFEDC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800DFEE0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800DFEE4
  c->r[28]=R32(c->r[1]+0x00000020u); // 800DFEE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DFEEC
  c->lr=c->r[0]; // 800DFEF0
  c->r[1]=c->r[1]+0x00000030u; // 800DFEF4
  return; // 800DFEF8
}

// fn_800DFEFC
void f_800DFEFC(Ctx* __restrict c) {
  c->r[5]=0u+0x00000000u; // 800DFEFC
  c->r[0]=R32(c->r[3]+0x00000F48u); // 800DFF00
  c->ctr=c->r[0]; // 800DFF04
  cmpu(c,0,c->r[0],0x00000000u); // 800DFF08
  if (!crb(c,1)) { goto L_800DFF30; } // 800DFF0C
L_800DFF10:;
  c->r[0]=R32(c->r[3]+0x0000058Cu); // 800DFF10
  cmpu(c,0,c->r[0],c->r[4]); // 800DFF14
  if (!crb(c,2)) { goto L_800DFF24; } // 800DFF18
  c->r[3]=c->r[5]|c->r[5]; // 800DFF1C
  return; // 800DFF20
L_800DFF24:;
  c->r[3]=c->r[3]+0x0000004Cu; // 800DFF24
  c->r[5]=c->r[5]+0x00000001u; // 800DFF28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DFF10; } // 800DFF2C
L_800DFF30:;
  c->r[3]=0u+0xFFFFFFFFu; // 800DFF30
  return; // 800DFF34
}

// fn_800DFF38
void f_800DFF38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFF38
  c->r[0]=c->lr; // 800DFF3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFF40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFF44
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DFF48
  c->r[30]=c->r[3]|c->r[3]; // 800DFF4C
  c->lr=0x800DFF54u; f_800DFEFC(c); // 800DFF50
  c->r[31]=c->r[3]|c->r[3]; // 800DFF54
  cmps(c,0,(int32_t)c->r[3],0); // 800DFF58
  if (crb(c,0)) { goto L_800DFF8C; } // 800DFF5C
  c->r[3]=0u+0x00000002u; // 800DFF60
  c->r[4]=0u+0x0000003Fu; // 800DFF64
  c->lr=0x800DFF6Cu; f_800BAB40(c); // 800DFF68
  c->r[3]=c->r[30]|c->r[30]; // 800DFF6C
  c->lr=0x800DFF74u; f_800CF724(c); // 800DFF70
  c->r[3]=c->r[30]|c->r[30]; // 800DFF74
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)76); // 800DFF78
  c->r[4]=c->r[30]+c->r[0]; // 800DFF7C
  c->r[4]=R32(c->r[4]+0x00000588u); // 800DFF80
  c->r[5]=0u+0x00000000u; // 800DFF84
  c->lr=0x800DFF8Cu; f_800DE884(c); // 800DFF88
L_800DFF8C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DFF8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DFF90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFF94
  c->lr=c->r[0]; // 800DFF98
  c->r[1]=c->r[1]+0x00000010u; // 800DFF9C
  return; // 800DFFA0
}

// fn_800DFFA4
void f_800DFFA4(Ctx* __restrict c) {
  return; // 800DFFA4
}

// fn_800DFFA8
void f_800DFFA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFFA8
  c->r[0]=c->lr; // 800DFFAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFFB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DFFB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DFFB8
  c->r[30]=c->r[5]|c->r[5]; // 800DFFBC
  c->r[0]=R32(c->r[3]+0x00000F48u); // 800DFFC0
  cmpu(c,0,c->r[4],c->r[0]); // 800DFFC4
  if (crb(c,0)) { goto L_800DFFD4; } // 800DFFC8
  c->r[3]=0u+0x00000000u; // 800DFFCC
  goto L_800E0058; // 800DFFD0
L_800DFFD4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 800DFFD4
  c->r[31]=c->r[3]+c->r[0]; // 800DFFD8
  c->r[4]=R32(c->r[31]+0x00000590u); // 800DFFDC
  cmps(c,0,(int32_t)c->r[4],0); // 800DFFE0
  if (crb(c,2)) { goto L_800E0000; } // 800DFFE4
  c->r[3]=0u+0x00000000u; // 800DFFE8
  c->lr=0x800DFFF0u; f_800BABD0(c); // 800DFFEC
  cmps(c,0,(int32_t)c->r[3],0); // 800DFFF0
  if (!crb(c,2)) { goto L_800E0000; } // 800DFFF4
  c->r[3]=0u+0x00000000u; // 800DFFF8
  goto L_800E0058; // 800DFFFC
L_800E0000:;
  c->r[4]=R32(c->r[31]+0x00000594u); // 800E0000
  cmps(c,0,(int32_t)c->r[4],0); // 800E0004
  if (crb(c,2)) { goto L_800E0024; } // 800E0008
  c->r[3]=0u+0x00000002u; // 800E000C
  c->lr=0x800E0014u; f_800BABD0(c); // 800E0010
  cmps(c,0,(int32_t)c->r[3],0); // 800E0014
  if (crb(c,2)) { goto L_800E0024; } // 800E0018
  c->r[3]=0u+0x00000000u; // 800E001C
  goto L_800E0058; // 800E0020
L_800E0024:;
  c->lr=0x800E0028u; f_800A23BC(c); // 800E0024
  c->lr=0x800E002Cu; f_800BB800(c); // 800E0028
  c->r[4]=R32(c->r[31]+0x0000058Cu); // 800E002C
  c->lr=0x800E0034u; f_800C1284(c); // 800E0030
  cmps(c,0,(int32_t)c->r[3],0); // 800E0034
  if (crb(c,2)) { goto L_800E0054; } // 800E0038
  c->lr=0x800E0040u; f_800A23BC(c); // 800E003C
  c->lr=0x800E0044u; f_800BB800(c); // 800E0040
  c->r[4]=R32(c->r[31]+0x0000058Cu); // 800E0044
  c->lr=0x800E004Cu; f_800BBD58(c); // 800E0048
  c->r[4]=c->r[30]|c->r[30]; // 800E004C
  c->lr=0x800E0054u; f_800BD664(c); // 800E0050
L_800E0054:;
  c->r[3]=0u+0x00000001u; // 800E0054
L_800E0058:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0058
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E005C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0060
  c->lr=c->r[0]; // 800E0064
  c->r[1]=c->r[1]+0x00000010u; // 800E0068
  return; // 800E006C
}

// fn_800E0070
void f_800E0070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0070
  c->r[0]=c->lr; // 800E0074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E007C
  c->r[0]=R32(c->r[3]+0x00000F48u); // 800E0080
  cmpu(c,0,c->r[4],c->r[0]); // 800E0084
  if (crb(c,0)) { goto L_800E0094; } // 800E0088
  c->r[3]=0u+0x00000000u; // 800E008C
  goto L_800E00E8; // 800E0090
L_800E0094:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 800E0094
  c->r[31]=c->r[3]+c->r[0]; // 800E0098
  c->r[4]=R32(c->r[31]+0x00000590u); // 800E009C
  cmps(c,0,(int32_t)c->r[4],0); // 800E00A0
  if (crb(c,2)) { goto L_800E00C0; } // 800E00A4
  c->r[3]=0u+0x00000000u; // 800E00A8
  c->lr=0x800E00B0u; f_800BABD0(c); // 800E00AC
  cmps(c,0,(int32_t)c->r[3],0); // 800E00B0
  if (!crb(c,2)) { goto L_800E00C0; } // 800E00B4
  c->r[3]=0u+0x00000000u; // 800E00B8
  goto L_800E00E8; // 800E00BC
L_800E00C0:;
  c->r[4]=R32(c->r[31]+0x00000594u); // 800E00C0
  cmps(c,0,(int32_t)c->r[4],0); // 800E00C4
  if (crb(c,2)) { goto L_800E00E4; } // 800E00C8
  c->r[3]=0u+0x00000002u; // 800E00CC
  c->lr=0x800E00D4u; f_800BABD0(c); // 800E00D0
  cmps(c,0,(int32_t)c->r[3],0); // 800E00D4
  if (crb(c,2)) { goto L_800E00E4; } // 800E00D8
  c->r[3]=0u+0x00000001u; // 800E00DC
  goto L_800E00E8; // 800E00E0
L_800E00E4:;
  c->r[3]=0u+0x00000000u; // 800E00E4
L_800E00E8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E00E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E00EC
  c->lr=c->r[0]; // 800E00F0
  c->r[1]=c->r[1]+0x00000010u; // 800E00F4
  return; // 800E00F8
}

// fn_800E00FC
void f_800E00FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E00FC
  c->r[0]=c->lr; // 800E0100
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0108
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E010C
  c->r[30]=c->r[3]|c->r[3]; // 800E0110
  c->r[31]=0u+0x00000000u; // 800E0114
  c->r[5]=c->r[3]+0x00000170u; // 800E0118
  c->r[0]=R32(c->r[3]+0x00000570u); // 800E011C
  c->ctr=c->r[0]; // 800E0120
  cmpu(c,0,c->r[0],0x00000000u); // 800E0124
  if (!crb(c,1)) { goto L_800E0154; } // 800E0128
L_800E012C:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800E012C
  cmpu(c,0,c->r[0],c->r[4]); // 800E0130
  if (!crb(c,2)) { goto L_800E0148; } // 800E0134
  c->r[3]=c->r[5]|c->r[5]; // 800E0138
  c->lr=0x800E0140u; f_800D6EE4(c); // 800E013C
  W32(c->r[30]+0x00000574u,c->r[31]); // 800E0140
  goto L_800E0154; // 800E0144
L_800E0148:;
  c->r[5]=c->r[5]+0x00000040u; // 800E0148
  c->r[31]=c->r[31]+0x00000001u; // 800E014C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E012C; } // 800E0150
L_800E0154:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0154
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0158
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E015C
  c->lr=c->r[0]; // 800E0160
  c->r[1]=c->r[1]+0x00000010u; // 800E0164
  return; // 800E0168
}

// fn_800E016C
void f_800E016C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E016C
  c->r[0]=c->lr; // 800E0170
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0174
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0178
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E017C
  c->r[30]=c->r[3]|c->r[3]; // 800E0180
  c->r[0]=0u+0xFFFFFFFFu; // 800E0184
  W32(c->r[3]+0x00000574u,c->r[0]); // 800E0188
  c->r[31]=0u+0x00000000u; // 800E018C
  c->r[5]=c->r[3]+0x00000170u; // 800E0190
  c->r[0]=R32(c->r[3]+0x00000570u); // 800E0194
  c->ctr=c->r[0]; // 800E0198
  cmpu(c,0,c->r[0],0x00000000u); // 800E019C
  if (!crb(c,1)) { goto L_800E01CC; } // 800E01A0
L_800E01A4:;
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800E01A4
  cmpu(c,0,c->r[0],c->r[4]); // 800E01A8
  if (!crb(c,2)) { goto L_800E01C0; } // 800E01AC
  c->r[3]=c->r[5]|c->r[5]; // 800E01B0
  c->lr=0x800E01B8u; f_800D6F24(c); // 800E01B4
  W32(c->r[30]+0x00000574u,c->r[31]); // 800E01B8
  goto L_800E01CC; // 800E01BC
L_800E01C0:;
  c->r[5]=c->r[5]+0x00000040u; // 800E01C0
  c->r[31]=c->r[31]+0x00000001u; // 800E01C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E01A4; } // 800E01C8
L_800E01CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E01CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E01D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E01D4
  c->lr=c->r[0]; // 800E01D8
  c->r[1]=c->r[1]+0x00000010u; // 800E01DC
  return; // 800E01E0
}

// fn_800E01E4
void f_800E01E4(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000574u); // 800E01E4
  c->r[0]=c->r[4]+0x00010000u; // 800E01E8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800E01EC
  if (crb(c,2)) { goto L_800E0204; } // 800E01F0
  c->r[0]=rotl(c->r[4],6)&0xFFFFFFC0u; // 800E01F4
  c->r[3]=c->r[3]+c->r[0]; // 800E01F8
  c->r[3]=c->r[3]+0x00000170u; // 800E01FC
  f_800E12B0(c); return; // 800E0200
L_800E0204:;
  c->r[3]=0u+0x00000001u; // 800E0204
  return; // 800E0208
}

// fn_800E020C
void f_800E020C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E020C
  c->r[0]=c->lr; // 800E0210
  W32(c->r[1]+0x000000B4u,c->r[0]); // 800E0214
  c->r[11]=c->r[1]+0x000000B0u; // 800E0218
  c->lr=0x800E0220u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E021C
  c->r[31]=c->r[3]|c->r[3]; // 800E0220
  c->r[30]=c->r[4]|c->r[4]; // 800E0224
  c->r[29]=c->r[5]|c->r[5]; // 800E0228
  c->r[26]=c->r[6]|c->r[6]; // 800E022C
  c->r[27]=c->r[7]|c->r[7]; // 800E0230
  c->r[3]=c->r[1]+0x00000008u; // 800E0234
  c->lr=0x800E023Cu; f_8004B0A4(c); // 800E0238
  c->r[3]=c->r[31]+0x00000170u; // 800E023C
  c->r[4]=R32(c->r[31]+0x00000570u); // 800E0240
  c->ctr=c->r[4]; // 800E0244
  cmpu(c,0,c->r[4],0x00000000u); // 800E0248
  if (!crb(c,1)) { goto L_800E0264; } // 800E024C
L_800E0250:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800E0250
  cmpu(c,0,c->r[0],c->r[30]); // 800E0254
  if (crb(c,2)) { goto L_800E0470; } // 800E0258
  c->r[3]=c->r[3]+0x00000040u; // 800E025C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E0250; } // 800E0260
L_800E0264:;
  c->r[0]=rotl(c->r[4],6)&0xFFFFFFC0u; // 800E0264
  c->r[3]=c->r[31]+c->r[0]; // 800E0268
  c->r[28]=c->r[3]+0x00000170u; // 800E026C
  c->r[3]=c->r[28]|c->r[28]; // 800E0270
  c->r[4]=c->r[30]|c->r[30]; // 800E0274
  c->r[5]=c->r[29]|c->r[29]; // 800E0278
  c->r[6]=c->r[26]|c->r[26]; // 800E027C
  c->r[7]=c->r[27]|c->r[27]; // 800E0280
  c->lr=0x800E0288u; f_800D6958(c); // 800E0284
  c->r[3]=c->r[1]+0x00000058u; // 800E0288
  c->r[4]=0u+0x80460000u; // 800E028C
  c->r[4]=c->r[4]+0x0000043Cu; // 800E0290
  c->r[5]=c->r[30]|c->r[30]; // 800E0294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E0298
  c->lr=0x800E02A0u; f_802E7CC4(c); // 800E029C
  c->r[3]=c->r[1]+0x00000018u; // 800E02A0
  c->r[4]=0u+0x80460000u; // 800E02A4
  c->r[4]=c->r[4]+0x00000448u; // 800E02A8
  c->r[5]=c->r[30]|c->r[30]; // 800E02AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E02B0
  c->lr=0x800E02B8u; f_802E7CC4(c); // 800E02B4
  c->lr=0x800E02BCu; f_800A23BC(c); // 800E02B8
  c->lr=0x800E02C0u; f_800A23C8(c); // 800E02BC
  c->r[4]=c->r[1]+0x00000058u; // 800E02C0
  c->lr=0x800E02C8u; f_800CDE0C(c); // 800E02C4
  c->r[29]=c->r[3]|c->r[3]; // 800E02C8
  c->lr=0x800E02D0u; f_800A23BC(c); // 800E02CC
  c->lr=0x800E02D4u; f_800A23C8(c); // 800E02D0
  c->r[4]=c->r[29]|c->r[29]; // 800E02D4
  c->lr=0x800E02DCu; f_800BBBC0(c); // 800E02D8
  c->r[30]=c->r[3]|c->r[3]; // 800E02DC
  c->lr=0x800E02E4u; f_800CCEF8(c); // 800E02E0
  c->r[3]=0u+0x00000000u; // 800E02E4
  cmps(c,0,(int32_t)c->r[26],0); // 800E02E8
  if (crb(c,2)) { goto L_800E030C; } // 800E02EC
  c->r[0]=R32(c->r[28]+0x00000020u); // 800E02F0
  cmps(c,0,(int32_t)c->r[0],0); // 800E02F4
  if (crb(c,0)) { goto L_800E0304; } // 800E02F8
  c->r[3]=0u+0x00000001u; // 800E02FC
  goto L_800E031C; // 800E0300
L_800E0304:;
  c->r[3]=0u+0x00000000u; // 800E0304
  goto L_800E031C; // 800E0308
L_800E030C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 800E030C
  cmps(c,0,(int32_t)c->r[0],0); // 800E0310
  if (crb(c,0)) { goto L_800E031C; } // 800E0314
  c->r[3]=0u+0x00000000u; // 800E0318
L_800E031C:;
  cmps(c,0,(int32_t)c->r[3],1); // 800E031C
  if (crb(c,2)) { goto L_800E0370; } // 800E0320
  if (!crb(c,0)) { goto L_800E03E0; } // 800E0324
  cmps(c,0,(int32_t)c->r[3],0); // 800E0328
  if (!crb(c,0)) { goto L_800E0334; } // 800E032C
  goto L_800E03E0; // 800E0330
L_800E0334:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0334
  c->r[4]=R32(c->r[28]+0x00000014u); // 800E0338
  c->lr=0x800E0340u; f_800CD050(c); // 800E033C
  c->r[3]=c->r[30]|c->r[30]; // 800E0340
  c->lr=0x800E0348u; f_800CD0C0(c); // 800E0344
  c->r[3]=c->r[30]|c->r[30]; // 800E0348
  c->r[4]=c->r[27]|c->r[27]; // 800E034C
  c->lr=0x800E0354u; f_800CD06C(c); // 800E0350
  c->r[3]=c->r[30]|c->r[30]; // 800E0354
  c->lr=0x800E035Cu; f_800CD110(c); // 800E0358
  c->r[3]=c->r[30]|c->r[30]; // 800E035C
  c->r[4]=0u+0x800E0000u; // 800E0360
  c->r[4]=c->r[4]+0xFFFFAE20u; // 800E0364
  c->lr=0x800E036Cu; f_800CD200(c); // 800E0368
  goto L_800E03E0; // 800E036C
L_800E0370:;
  c->lr=0x800E0374u; f_800A23BC(c); // 800E0370
  c->lr=0x800E0378u; f_800BB800(c); // 800E0374
  c->r[4]=c->r[26]|c->r[26]; // 800E0378
  c->lr=0x800E0380u; f_800BBD58(c); // 800E037C
  c->r[4]=R32(c->r[28]+0x00000020u); // 800E0380
  c->r[5]=c->r[1]+0x00000008u; // 800E0384
  c->lr=0x800E038Cu; f_800C7030(c); // 800E0388
  c->r[3]=c->r[30]|c->r[30]; // 800E038C
  c->r[4]=R32(c->r[28]+0x00000014u); // 800E0390
  c->lr=0x800E0398u; f_800CD050(c); // 800E0394
  c->r[3]=c->r[30]|c->r[30]; // 800E0398
  c->lr=0x800E03A0u; f_800CD0C0(c); // 800E039C
  c->r[3]=c->r[30]|c->r[30]; // 800E03A0
  c->lr=0x800E03A8u; f_800CD0A0(c); // 800E03A4
  c->r[3]=c->r[30]|c->r[30]; // 800E03A8
  c->r[4]=c->r[27]|c->r[27]; // 800E03AC
  c->lr=0x800E03B4u; f_800CD06C(c); // 800E03B0
  c->r[3]=c->r[30]|c->r[30]; // 800E03B4
  c->lr=0x800E03BCu; f_800CD110(c); // 800E03B8
  c->r[3]=c->r[30]|c->r[30]; // 800E03BC
  c->lr=0x800E03C4u; f_800CD0E0(c); // 800E03C0
  c->r[3]=c->r[30]|c->r[30]; // 800E03C4
  c->r[4]=c->r[1]+0x00000008u; // 800E03C8
  c->lr=0x800E03D0u; f_800CD1C8(c); // 800E03CC
  c->r[3]=c->r[30]|c->r[30]; // 800E03D0
  c->r[4]=0u+0x800E0000u; // 800E03D4
  c->r[4]=c->r[4]+0xFFFFAE20u; // 800E03D8
  c->lr=0x800E03E0u; f_800CD200(c); // 800E03DC
L_800E03E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E03E0
  c->lr=0x800E03E8u; f_800CCFA0(c); // 800E03E4
  W32(c->r[28]+0x00000030u,c->r[29]); // 800E03E8
  c->lr=0x800E03F0u; f_800A23BC(c); // 800E03EC
  c->lr=0x800E03F4u; f_800A23C8(c); // 800E03F0
  c->r[4]=c->r[1]+0x00000018u; // 800E03F4
  c->lr=0x800E03FCu; f_800CDE0C(c); // 800E03F8
  c->r[30]=c->r[3]|c->r[3]; // 800E03FC
  c->lr=0x800E0404u; f_800A23BC(c); // 800E0400
  c->lr=0x800E0408u; f_800A23C8(c); // 800E0404
  c->r[4]=c->r[30]|c->r[30]; // 800E0408
  c->lr=0x800E0410u; f_800BBBC0(c); // 800E040C
  c->r[29]=c->r[3]|c->r[3]; // 800E0410
  c->lr=0x800E0418u; f_800CCEF8(c); // 800E0414
  c->r[3]=c->r[29]|c->r[29]; // 800E0418
  c->r[4]=R32(c->r[28]+0x00000018u); // 800E041C
  c->lr=0x800E0424u; f_800CD050(c); // 800E0420
  c->r[3]=c->r[29]|c->r[29]; // 800E0424
  c->lr=0x800E042Cu; f_800CD0C0(c); // 800E0428
  c->r[3]=c->r[29]|c->r[29]; // 800E042C
  c->lr=0x800E0434u; f_800CD0E0(c); // 800E0430
  c->r[3]=c->r[29]|c->r[29]; // 800E0434
  c->r[4]=c->r[1]+0x00000008u; // 800E0438
  c->lr=0x800E0440u; f_800CD1C8(c); // 800E043C
  c->r[3]=c->r[29]|c->r[29]; // 800E0440
  c->lr=0x800E0448u; f_800CD110(c); // 800E0444
  c->r[3]=c->r[29]|c->r[29]; // 800E0448
  c->r[4]=0u+0x800E0000u; // 800E044C
  c->r[4]=c->r[4]+0xFFFFAE48u; // 800E0450
  c->lr=0x800E0458u; f_800CD200(c); // 800E0454
  c->r[3]=c->r[29]|c->r[29]; // 800E0458
  c->lr=0x800E0460u; f_800CCFA0(c); // 800E045C
  W32(c->r[28]+0x00000034u,c->r[30]); // 800E0460
  c->r[3]=R32(c->r[31]+0x00000570u); // 800E0464
  c->r[0]=c->r[3]+0x00000001u; // 800E0468
  W32(c->r[31]+0x00000570u,c->r[0]); // 800E046C
L_800E0470:;
  c->r[11]=c->r[1]+0x000000B0u; // 800E0470
  c->lr=0x800E0478u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0474
  c->r[0]=R32(c->r[1]+0x000000B4u); // 800E0478
  c->lr=c->r[0]; // 800E047C
  c->r[1]=c->r[1]+0x000000B0u; // 800E0480
  return; // 800E0484
}

// fn_800E0488
void f_800E0488(Ctx* __restrict c) {
  c->r[6]=c->r[3]+0x00000170u; // 800E0488
  c->r[0]=R32(c->r[3]+0x00000570u); // 800E048C
  c->ctr=c->r[0]; // 800E0490
  cmpu(c,0,c->r[0],0x00000000u); // 800E0494
  if (!crb(c,1)) return; // 800E0498
L_800E049C:;
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800E049C
  cmpu(c,0,c->r[0],c->r[4]); // 800E04A0
  if (!crb(c,2)) { goto L_800E04B4; } // 800E04A4
  c->r[3]=c->r[6]|c->r[6]; // 800E04A8
  c->r[4]=c->r[5]|c->r[5]; // 800E04AC
  f_800D6B34(c); return; // 800E04B0
L_800E04B4:;
  c->r[6]=c->r[6]+0x00000040u; // 800E04B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E049C; } // 800E04B8
  return; // 800E04BC
}

// fn_800E04C0
void f_800E04C0(Ctx* __restrict c) {
  c->r[6]=c->r[3]+0x00000170u; // 800E04C0
  c->r[0]=R32(c->r[3]+0x00000570u); // 800E04C4
  c->ctr=c->r[0]; // 800E04C8
  cmpu(c,0,c->r[0],0x00000000u); // 800E04CC
  if (!crb(c,1)) return; // 800E04D0
L_800E04D4:;
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800E04D4
  cmpu(c,0,c->r[0],c->r[4]); // 800E04D8
  if (!crb(c,2)) { goto L_800E04EC; } // 800E04DC
  c->r[3]=c->r[6]|c->r[6]; // 800E04E0
  c->r[4]=c->r[5]|c->r[5]; // 800E04E4
  f_800E12DC(c); return; // 800E04E8
L_800E04EC:;
  c->r[6]=c->r[6]+0x00000040u; // 800E04EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E04D4; } // 800E04F0
  return; // 800E04F4
}

// fn_800E04F8
void f_800E04F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E04F8
  c->r[0]=c->lr; // 800E04FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0500
  c->r[11]=c->r[1]+0x00000020u; // 800E0504
  c->lr=0x800E050Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0508
  c->r[27]=c->r[3]|c->r[3]; // 800E050C
  c->r[28]=c->r[4]|c->r[4]; // 800E0510
  c->r[29]=c->r[5]|c->r[5]; // 800E0514
  c->r[30]=c->r[6]|c->r[6]; // 800E0518
  c->r[31]=c->r[7]|c->r[7]; // 800E051C
  c->r[4]=c->r[29]|c->r[29]; // 800E0520
  c->lr=0x800E0528u; f_800DFEFC(c); // 800E0524
  cmps(c,0,(int32_t)c->r[3],0); // 800E0528
  if (!crb(c,0)) { goto L_800E0560; } // 800E052C
  c->r[0]=R32(c->r[27]+0x00000F48u); // 800E0530
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)76); // 800E0534
  c->r[3]=c->r[27]+c->r[0]; // 800E0538
  c->r[3]=c->r[3]+0x0000057Cu; // 800E053C
  c->r[4]=c->r[28]|c->r[28]; // 800E0540
  c->r[5]=c->r[29]|c->r[29]; // 800E0544
  c->r[6]=c->r[30]|c->r[30]; // 800E0548
  c->r[7]=c->r[31]|c->r[31]; // 800E054C
  c->lr=0x800E0554u; f_800D6010(c); // 800E0550
  c->r[3]=R32(c->r[27]+0x00000F48u); // 800E0554
  c->r[0]=c->r[3]+0x00000001u; // 800E0558
  W32(c->r[27]+0x00000F48u,c->r[0]); // 800E055C
L_800E0560:;
  c->r[11]=c->r[1]+0x00000020u; // 800E0560
  c->lr=0x800E0568u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0564
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0568
  c->lr=c->r[0]; // 800E056C
  c->r[1]=c->r[1]+0x00000020u; // 800E0570
  return; // 800E0574
}

// fn_800E0578
void f_800E0578(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0578
  c->r[0]=c->lr; // 800E057C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0584
  c->r[31]=c->r[3]|c->r[3]; // 800E0588
  c->lr=0x800E0590u; f_800DFEFC(c); // 800E058C
  cmps(c,0,(int32_t)c->r[3],0); // 800E0590
  if (crb(c,0)) { goto L_800E05A8; } // 800E0594
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)76); // 800E0598
  c->r[3]=c->r[31]+c->r[0]; // 800E059C
  c->r[3]=c->r[3]+0x0000057Cu; // 800E05A0
  goto L_800E05AC; // 800E05A4
L_800E05A8:;
  c->r[3]=0u+0x00000000u; // 800E05A8
L_800E05AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E05AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E05B0
  c->lr=c->r[0]; // 800E05B4
  c->r[1]=c->r[1]+0x00000010u; // 800E05B8
  return; // 800E05BC
}

// fn_800E05C0
void f_800E05C0(Ctx* __restrict c) {
  return; // 800E05C0
}

// fn_800E05C4
void f_800E05C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E05C4
  c->r[0]=c->lr; // 800E05C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E05CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E05D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E05D4
  c->r[30]=c->r[3]|c->r[3]; // 800E05D8
  c->r[31]=c->r[4]|c->r[4]; // 800E05DC
  c->r[3]=c->r[1]+0x00000008u; // 800E05E0
  c->lr=0x800E05E8u; f_8004B0A4(c); // 800E05E4
  c->r[0]=R32(c->r[30]+0x00001098u); // 800E05E8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E05EC
  c->r[3]=c->r[30]+c->r[0]; // 800E05F0
  W32(c->r[3]+0x00001094u,c->r[31]); // 800E05F4
  c->r[3]=R32(c->r[30]+0x00001098u); // 800E05F8
  c->r[0]=c->r[3]+0x00000001u; // 800E05FC
  W32(c->r[30]+0x00001098u,c->r[0]); // 800E0600
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E0604
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E0608
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E060C
  c->lr=c->r[0]; // 800E0610
  c->r[1]=c->r[1]+0x00000020u; // 800E0614
  return; // 800E0618
}

// fn_800E061C
void f_800E061C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E061C
  c->r[0]=c->lr; // 800E0620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0628
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E062C
  c->r[30]=c->r[3]|c->r[3]; // 800E0630
  c->r[31]=c->r[4]|c->r[4]; // 800E0634
  c->r[5]=c->r[30]|c->r[30]; // 800E0638
  c->r[0]=R32(c->r[3]+0x0000016Cu); // 800E063C
  c->ctr=c->r[0]; // 800E0640
  cmpu(c,0,c->r[0],0x00000000u); // 800E0644
  if (!crb(c,1)) { goto L_800E0660; } // 800E0648
L_800E064C:;
  c->r[0]=R32(c->r[5]+0x000000ECu); // 800E064C
  cmpu(c,0,c->r[4],c->r[0]); // 800E0650
  if (crb(c,2)) { goto L_800E06A8; } // 800E0654
  c->r[5]=c->r[5]+0x00000008u; // 800E0658
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E064C; } // 800E065C
L_800E0660:;
  c->lr=0x800E0664u; f_800A23BC(c); // 800E0660
  c->lr=0x800E0668u; f_800BB7F0(c); // 800E0664
  c->r[4]=c->r[31]|c->r[31]; // 800E0668
  c->lr=0x800E0670u; f_800BBE24(c); // 800E066C
  c->r[4]=0u+0x00000001u; // 800E0670
  c->lr=0x800E0678u; f_800BE370(c); // 800E0674
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 800E0678
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800E067C
  c->r[3]=c->r[30]+c->r[0]; // 800E0680
  W32(c->r[3]+0x000000ECu,c->r[31]); // 800E0684
  c->r[4]=R32(c->r[30]+0x00000040u); // 800E0688
  c->r[0]=R32(c->r[30]+0x0000016Cu); // 800E068C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800E0690
  c->r[3]=c->r[30]+c->r[0]; // 800E0694
  W32(c->r[3]+0x000000F0u,c->r[4]); // 800E0698
  c->r[3]=R32(c->r[30]+0x0000016Cu); // 800E069C
  c->r[0]=c->r[3]+0x00000001u; // 800E06A0
  W32(c->r[30]+0x0000016Cu,c->r[0]); // 800E06A4
L_800E06A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E06A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E06AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E06B0
  c->lr=c->r[0]; // 800E06B4
  c->r[1]=c->r[1]+0x00000010u; // 800E06B8
  return; // 800E06BC
}

// fn_800E06C0
void f_800E06C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E06C0
  c->r[0]=c->lr; // 800E06C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E06C8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E06CC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E06D0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800E06D4
  c->r[29]=c->r[3]|c->r[3]; // 800E06D8
  c->r[30]=c->r[4]|c->r[4]; // 800E06DC
  c->r[31]=c->r[5]|c->r[5]; // 800E06E0
  c->r[3]=c->r[1]+0x00000008u; // 800E06E4
  c->lr=0x800E06ECu; f_8004B0A4(c); // 800E06E8
  c->r[3]=c->r[29]+0x000010C0u; // 800E06EC
  c->r[4]=R32(c->r[29]+0x00001108u); // 800E06F0
  c->ctr=c->r[4]; // 800E06F4
  cmpu(c,0,c->r[4],0x00000000u); // 800E06F8
  if (!crb(c,1)) { goto L_800E0714; } // 800E06FC
L_800E0700:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E0700
  cmpu(c,0,c->r[0],c->r[30]); // 800E0704
  if (crb(c,2)) { goto L_800E0730; } // 800E0708
  c->r[3]=c->r[3]+0x00000008u; // 800E070C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E0700; } // 800E0710
L_800E0714:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800E0714
  c->r[3]=c->r[29]+c->r[0]; // 800E0718
  W32(c->r[3]+0x000010C0u,c->r[30]); // 800E071C
  W32(c->r[3]+0x000010C4u,c->r[31]); // 800E0720
  c->r[3]=R32(c->r[29]+0x00001108u); // 800E0724
  c->r[0]=c->r[3]+0x00000001u; // 800E0728
  W32(c->r[29]+0x00001108u,c->r[0]); // 800E072C
L_800E0730:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E0730
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E0734
  c->r[29]=R32(c->r[1]+0x00000024u); // 800E0738
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E073C
  c->lr=c->r[0]; // 800E0740
  c->r[1]=c->r[1]+0x00000030u; // 800E0744
  return; // 800E0748
}

// fn_800E074C
void f_800E074C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E074C
  c->r[0]=c->lr; // 800E0750
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E0754
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E0758
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E075C
  W32(c->r[1]+0x00000024u,c->r[29]); // 800E0760
  c->r[29]=c->r[3]|c->r[3]; // 800E0764
  c->r[30]=c->r[4]|c->r[4]; // 800E0768
  c->r[31]=c->r[5]|c->r[5]; // 800E076C
  c->r[3]=c->r[1]+0x00000008u; // 800E0770
  c->lr=0x800E0778u; f_8004B0A4(c); // 800E0774
  c->r[3]=c->r[29]+0x0000110Cu; // 800E0778
  c->r[4]=R32(c->r[29]+0x00001134u); // 800E077C
  c->ctr=c->r[4]; // 800E0780
  cmpu(c,0,c->r[4],0x00000000u); // 800E0784
  if (!crb(c,1)) { goto L_800E07A0; } // 800E0788
L_800E078C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800E078C
  cmpu(c,0,c->r[0],c->r[30]); // 800E0790
  if (crb(c,2)) { goto L_800E07BC; } // 800E0794
  c->r[3]=c->r[3]+0x00000008u; // 800E0798
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E078C; } // 800E079C
L_800E07A0:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800E07A0
  c->r[3]=c->r[29]+c->r[0]; // 800E07A4
  W32(c->r[3]+0x0000110Cu,c->r[30]); // 800E07A8
  W32(c->r[3]+0x00001110u,c->r[31]); // 800E07AC
  c->r[3]=R32(c->r[29]+0x00001134u); // 800E07B0
  c->r[0]=c->r[3]+0x00000001u; // 800E07B4
  W32(c->r[29]+0x00001134u,c->r[0]); // 800E07B8
L_800E07BC:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E07BC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E07C0
  c->r[29]=R32(c->r[1]+0x00000024u); // 800E07C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E07C8
  c->lr=c->r[0]; // 800E07CC
  c->r[1]=c->r[1]+0x00000030u; // 800E07D0
  return; // 800E07D4
}

// fn_800E07D8
void f_800E07D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E07D8
  c->r[0]=c->lr; // 800E07DC
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E07E0
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800E07E4
  W32(c->r[1]+0x00000068u,c->r[30]); // 800E07E8
  W32(c->r[1]+0x00000064u,c->r[29]); // 800E07EC
  c->r[29]=c->r[3]|c->r[3]; // 800E07F0
  c->r[31]=c->r[4]|c->r[4]; // 800E07F4
  c->r[30]=c->r[5]|c->r[5]; // 800E07F8
  c->r[3]=c->r[1]+0x00000008u; // 800E07FC
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0800
  {uint32_t ea=c->r[2]+0xFFFF8834u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E0804
  c->f[3]=c->f[1]; // 800E0808
  c->lr=0x800E0810u; f_8004E34C(c); // 800E080C
  c->r[3]=c->r[29]+0x00001934u; // 800E0810
  c->r[4]=c->r[31]|c->r[31]; // 800E0814
  c->lr=0x800E081Cu; f_800D3DAC(c); // 800E0818
  c->r[3]=c->r[1]+0x00000018u; // 800E081C
  c->r[4]=c->r[13]+0xFFFF8970u; // 800E0820
  c->r[5]=R32(c->r[29]+0x0000195Cu); // 800E0824
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E0828
  c->lr=0x800E0830u; f_802E7CC4(c); // 800E082C
  c->lr=0x800E0834u; f_800A23BC(c); // 800E0830
  c->lr=0x800E0838u; f_800A23C8(c); // 800E0834
  c->r[4]=c->r[1]+0x00000018u; // 800E0838
  c->lr=0x800E0840u; f_800CDE0C(c); // 800E083C
  c->r[31]=c->r[3]|c->r[3]; // 800E0840
  c->lr=0x800E0848u; f_800A23BC(c); // 800E0844
  c->lr=0x800E084Cu; f_800A23C8(c); // 800E0848
  c->r[4]=c->r[31]|c->r[31]; // 800E084C
  c->lr=0x800E0854u; f_800BBBC0(c); // 800E0850
  c->r[31]=c->r[3]|c->r[3]; // 800E0854
  c->lr=0x800E085Cu; f_800CCEF8(c); // 800E0858
  c->r[3]=c->r[29]+0x00001934u; // 800E085C
  c->lr=0x800E0864u; f_800E1314(c); // 800E0860
  c->r[4]=c->r[3]|c->r[3]; // 800E0864
  c->r[3]=c->r[31]|c->r[31]; // 800E0868
  {uint32_t ea=c->r[2]+0xFFFF8930u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E086C
  c->lr=0x800E0874u; f_800CCFB0(c); // 800E0870
  c->r[3]=c->r[31]|c->r[31]; // 800E0874
  c->lr=0x800E087Cu; f_800CD0C0(c); // 800E0878
  c->r[3]=c->r[31]|c->r[31]; // 800E087C
  c->lr=0x800E0884u; f_800CD0A0(c); // 800E0880
  c->r[3]=c->r[31]|c->r[31]; // 800E0884
  c->r[4]=c->r[30]|c->r[30]; // 800E0888
  c->lr=0x800E0890u; f_800CD06C(c); // 800E088C
  c->r[3]=c->r[31]|c->r[31]; // 800E0890
  c->lr=0x800E0898u; f_800CD0E0(c); // 800E0894
  c->r[3]=c->r[31]|c->r[31]; // 800E0898
  c->r[4]=c->r[1]+0x00000008u; // 800E089C
  c->lr=0x800E08A4u; f_800CD1C8(c); // 800E08A0
  c->r[3]=c->r[31]|c->r[31]; // 800E08A4
  c->r[4]=0u+0x800E0000u; // 800E08A8
  c->r[4]=c->r[4]+0xFFFFAE98u; // 800E08AC
  c->lr=0x800E08B4u; f_800CD200(c); // 800E08B0
  c->r[3]=c->r[31]|c->r[31]; // 800E08B4
  c->lr=0x800E08BCu; f_800CCFA0(c); // 800E08B8
  c->r[3]=R32(c->r[29]+0x0000195Cu); // 800E08BC
  c->r[0]=c->r[3]+0x00000001u; // 800E08C0
  W32(c->r[29]+0x0000195Cu,c->r[0]); // 800E08C4
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800E08C8
  c->r[30]=R32(c->r[1]+0x00000068u); // 800E08CC
  c->r[29]=R32(c->r[1]+0x00000064u); // 800E08D0
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E08D4
  c->lr=c->r[0]; // 800E08D8
  c->r[1]=c->r[1]+0x00000070u; // 800E08DC
  return; // 800E08E0
}

// fn_800E08E4
void f_800E08E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E08E4
  c->r[0]=c->lr; // 800E08E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 800E08EC
  c->r[11]=c->r[1]+0x00000070u; // 800E08F0
  c->lr=0x800E08F8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E08F4
  c->r[27]=c->r[3]|c->r[3]; // 800E08F8
  c->r[29]=c->r[4]|c->r[4]; // 800E08FC
  c->r[28]=c->r[5]|c->r[5]; // 800E0900
  c->r[3]=c->r[1]+0x00000008u; // 800E0904
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0908
  {uint32_t ea=c->r[2]+0xFFFF8834u; c->f[2]=c->ps1[2]=RF32(ea);} // 800E090C
  c->f[3]=c->f[1]; // 800E0910
  c->lr=0x800E0918u; f_8004E34C(c); // 800E0914
  c->r[5]=R32(c->r[27]+0x0000191Cu); // 800E0918
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)52); // 800E091C
  c->r[3]=c->r[27]+c->r[0]; // 800E0920
  c->r[31]=c->r[3]+0x0000177Cu; // 800E0924
  c->r[3]=c->r[31]|c->r[31]; // 800E0928
  c->r[4]=c->r[29]|c->r[29]; // 800E092C
  c->lr=0x800E0934u; f_800D4970(c); // 800E0930
  c->r[3]=c->r[1]+0x00000018u; // 800E0934
  c->r[4]=c->r[13]+0xFFFF8978u; // 800E0938
  c->r[5]=R32(c->r[27]+0x0000191Cu); // 800E093C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E0940
  c->lr=0x800E0948u; f_802E7CC4(c); // 800E0944
  c->lr=0x800E094Cu; f_800A23BC(c); // 800E0948
  c->lr=0x800E0950u; f_800A23C8(c); // 800E094C
  c->r[4]=c->r[1]+0x00000018u; // 800E0950
  c->lr=0x800E0958u; f_800CDE0C(c); // 800E0954
  c->r[29]=c->r[3]|c->r[3]; // 800E0958
  c->lr=0x800E0960u; f_800A23BC(c); // 800E095C
  c->lr=0x800E0964u; f_800A23C8(c); // 800E0960
  c->r[4]=c->r[29]|c->r[29]; // 800E0964
  c->lr=0x800E096Cu; f_800BBBC0(c); // 800E0968
  c->r[30]=c->r[3]|c->r[3]; // 800E096C
  c->lr=0x800E0974u; f_800CCEF8(c); // 800E0970
  c->r[3]=c->r[31]|c->r[31]; // 800E0974
  c->lr=0x800E097Cu; f_800D52C4(c); // 800E0978
  c->r[4]=c->r[3]|c->r[3]; // 800E097C
  c->r[3]=c->r[30]|c->r[30]; // 800E0980
  {uint32_t ea=c->r[2]+0xFFFF8930u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E0984
  c->lr=0x800E098Cu; f_800CCFB0(c); // 800E0988
  c->r[3]=c->r[30]|c->r[30]; // 800E098C
  c->lr=0x800E0994u; f_800CD0C0(c); // 800E0990
  c->r[3]=c->r[30]|c->r[30]; // 800E0994
  c->lr=0x800E099Cu; f_800CD0A0(c); // 800E0998
  c->r[3]=c->r[30]|c->r[30]; // 800E099C
  c->r[4]=c->r[28]|c->r[28]; // 800E09A0
  c->lr=0x800E09A8u; f_800CD06C(c); // 800E09A4
  c->r[3]=c->r[30]|c->r[30]; // 800E09A8
  c->lr=0x800E09B0u; f_800CD0E0(c); // 800E09AC
  c->r[3]=c->r[30]|c->r[30]; // 800E09B0
  c->r[4]=c->r[1]+0x00000008u; // 800E09B4
  c->lr=0x800E09BCu; f_800CD1C8(c); // 800E09B8
  c->r[3]=c->r[30]|c->r[30]; // 800E09BC
  c->r[4]=0u+0x800E0000u; // 800E09C0
  c->r[4]=c->r[4]+0xFFFFAE70u; // 800E09C4
  c->lr=0x800E09CCu; f_800CD200(c); // 800E09C8
  c->r[3]=c->r[30]|c->r[30]; // 800E09CC
  c->lr=0x800E09D4u; f_800CCFA0(c); // 800E09D0
  c->r[3]=c->r[31]|c->r[31]; // 800E09D4
  c->r[4]=c->r[29]|c->r[29]; // 800E09D8
  c->lr=0x800E09E0u; f_800D52CC(c); // 800E09DC
  c->lr=0x800E09E4u; f_800A23BC(c); // 800E09E0
  c->lr=0x800E09E8u; f_800A23C4(c); // 800E09E4
  c->r[4]=0u+0x00000000u; // 800E09E8
  c->r[5]=0u+0x000000E4u; // 800E09EC
  c->lr=0x800E09F4u; f_800D8A64(c); // 800E09F0
  cmps(c,0,(int32_t)c->r[3],0); // 800E09F4
  if (!crb(c,2)) { goto L_800E0A08; } // 800E09F8
  c->r[3]=c->r[30]|c->r[30]; // 800E09FC
  c->r[4]=0u+0x00000001u; // 800E0A00
  c->lr=0x800E0A08u; f_800CCEC4(c); // 800E0A04
L_800E0A08:;
  c->r[3]=R32(c->r[27]+0x0000191Cu); // 800E0A08
  c->r[0]=c->r[3]+0x00000001u; // 800E0A0C
  W32(c->r[27]+0x0000191Cu,c->r[0]); // 800E0A10
  c->r[11]=c->r[1]+0x00000070u; // 800E0A14
  c->lr=0x800E0A1Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0A18
  c->r[0]=R32(c->r[1]+0x00000074u); // 800E0A1C
  c->lr=c->r[0]; // 800E0A20
  c->r[1]=c->r[1]+0x00000070u; // 800E0A24
  return; // 800E0A28
}

// fn_800E0A2C
void f_800E0A2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0A2C
  c->r[0]=c->lr; // 800E0A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0A34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0A38
  c->r[31]=c->r[3]|c->r[3]; // 800E0A3C
  c->r[6]=c->r[3]+0x0000199Cu; // 800E0A40
  c->r[7]=R32(c->r[3]+0x00001E9Cu); // 800E0A44
  c->ctr=c->r[7]; // 800E0A48
  cmpu(c,0,c->r[7],0x00000000u); // 800E0A4C
  if (!crb(c,1)) { goto L_800E0A68; } // 800E0A50
L_800E0A54:;
  c->r[0]=R32(c->r[6]+0x00000010u); // 800E0A54
  cmpu(c,0,c->r[0],c->r[4]); // 800E0A58
  if (crb(c,2)) { goto L_800E0A84; } // 800E0A5C
  c->r[6]=c->r[6]+0x00000050u; // 800E0A60
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E0A54; } // 800E0A64
L_800E0A68:;
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)80); // 800E0A68
  c->r[3]=c->r[3]+c->r[0]; // 800E0A6C
  c->r[3]=c->r[3]+0x0000199Cu; // 800E0A70
  c->lr=0x800E0A78u; f_800D5864(c); // 800E0A74
  c->r[3]=R32(c->r[31]+0x00001E9Cu); // 800E0A78
  c->r[0]=c->r[3]+0x00000001u; // 800E0A7C
  W32(c->r[31]+0x00001E9Cu,c->r[0]); // 800E0A80
L_800E0A84:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0A84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0A88
  c->lr=c->r[0]; // 800E0A8C
  c->r[1]=c->r[1]+0x00000010u; // 800E0A90
  return; // 800E0A94
}

// fn_800E0A98
void f_800E0A98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0A98
  c->r[0]=c->lr; // 800E0A9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E0AA0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800E0AA4
  c->r[11]=c->r[1]+0x00000028u; // 800E0AA8
  c->lr=0x800E0AB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0AAC
  c->r[27]=c->r[3]|c->r[3]; // 800E0AB0
  c->r[28]=c->r[4]|c->r[4]; // 800E0AB4
  c->r[29]=c->r[5]|c->r[5]; // 800E0AB8
  c->f[31]=c->f[1]; // 800E0ABC
  c->r[30]=0u+0x00000000u; // 800E0AC0
  c->r[31]=c->r[3]+0x0000199Cu; // 800E0AC4
  goto L_800E0AF8; // 800E0AC8
L_800E0ACC:;
  c->r[3]=c->r[31]|c->r[31]; // 800E0ACC
  c->lr=0x800E0AD4u; f_800E131C(c); // 800E0AD0
  cmpu(c,0,c->r[28],c->r[3]); // 800E0AD4
  if (!crb(c,2)) { goto L_800E0AF0; } // 800E0AD8
  c->r[3]=c->r[31]|c->r[31]; // 800E0ADC
  c->r[4]=c->r[29]|c->r[29]; // 800E0AE0
  c->f[1]=c->f[31]; // 800E0AE4
  c->lr=0x800E0AECu; f_800D5A00(c); // 800E0AE8
  goto L_800E0B04; // 800E0AEC
L_800E0AF0:;
  c->r[31]=c->r[31]+0x00000050u; // 800E0AF0
  c->r[30]=c->r[30]+0x00000001u; // 800E0AF4
L_800E0AF8:;
  c->r[0]=R32(c->r[27]+0x00001E9Cu); // 800E0AF8
  cmpu(c,0,c->r[30],c->r[0]); // 800E0AFC
  if (crb(c,0)) { IRQCHK(c); goto L_800E0ACC; } // 800E0B00
L_800E0B04:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800E0B04
  c->r[11]=c->r[1]+0x00000028u; // 800E0B08
  c->lr=0x800E0B10u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0B0C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E0B10
  c->lr=c->r[0]; // 800E0B14
  c->r[1]=c->r[1]+0x00000030u; // 800E0B18
  return; // 800E0B1C
}

// fn_800E0B20
void f_800E0B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0B20
  c->r[0]=c->lr; // 800E0B24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E0B28
  c->r[11]=c->r[1]+0x00000020u; // 800E0B2C
  c->lr=0x800E0B34u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E0B30
  c->r[27]=c->r[3]|c->r[3]; // 800E0B34
  c->r[28]=c->r[4]|c->r[4]; // 800E0B38
  c->r[29]=c->r[5]|c->r[5]; // 800E0B3C
  c->r[30]=0u+0x00000000u; // 800E0B40
  c->r[31]=c->r[3]+0x0000199Cu; // 800E0B44
  goto L_800E0B84; // 800E0B48
L_800E0B4C:;
  c->r[3]=c->r[31]|c->r[31]; // 800E0B4C
  c->lr=0x800E0B54u; f_800E1324(c); // 800E0B50
  cmps(c,0,(int32_t)c->r[3],0); // 800E0B54
  if (crb(c,2)) { goto L_800E0B7C; } // 800E0B58
  c->r[3]=c->r[31]|c->r[31]; // 800E0B5C
  c->lr=0x800E0B64u; f_800E131C(c); // 800E0B60
  cmpu(c,0,c->r[28],c->r[3]); // 800E0B64
  if (!crb(c,2)) { goto L_800E0B7C; } // 800E0B68
  c->r[3]=c->r[31]|c->r[31]; // 800E0B6C
  c->r[4]=c->r[29]|c->r[29]; // 800E0B70
  c->lr=0x800E0B78u; f_800D5940(c); // 800E0B74
  goto L_800E0B90; // 800E0B78
L_800E0B7C:;
  c->r[31]=c->r[31]+0x00000050u; // 800E0B7C
  c->r[30]=c->r[30]+0x00000001u; // 800E0B80
L_800E0B84:;
  c->r[0]=R32(c->r[27]+0x00001E9Cu); // 800E0B84
  cmpu(c,0,c->r[30],c->r[0]); // 800E0B88
  if (crb(c,0)) { IRQCHK(c); goto L_800E0B4C; } // 800E0B8C
L_800E0B90:;
  c->r[11]=c->r[1]+0x00000020u; // 800E0B90
  c->lr=0x800E0B98u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E0B94
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E0B98
  c->lr=c->r[0]; // 800E0B9C
  c->r[1]=c->r[1]+0x00000020u; // 800E0BA0
  return; // 800E0BA4
}

// fn_800E0BA8
void f_800E0BA8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800E0BA8
  c->r[0]=c->r[0]|0x00008000u; // 800E0BAC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E0BB0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0BB4
  {uint32_t ea=c->r[3]+0x00000058u; WF32(ea,c->f[0]);} // 800E0BB8
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 800E0BBC
  c->r[0]=0u+0x00000000u; // 800E0BC0
  W32(c->r[3]+0x00000060u,c->r[0]); // 800E0BC4
  W32(c->r[3]+0x00000064u,c->r[0]); // 800E0BC8
  W32(c->r[3]+0x00000068u,c->r[0]); // 800E0BCC
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800E0BD0
  W32(c->r[3]+0x00000070u,c->r[0]); // 800E0BD4
  c->r[0]=0u+0xFFFFFFFFu; // 800E0BD8
  W32(c->r[3]+0x00000074u,c->r[0]); // 800E0BDC
  W32(c->r[3]+0x00000078u,c->r[0]); // 800E0BE0
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800E0BE4
  W32(c->r[3]+0x00000080u,c->r[0]); // 800E0BE8
  return; // 800E0BEC
}

// fn_800E0BF0
void f_800E0BF0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800E0BF0
  c->r[0]=c->r[0]|0x00000800u; // 800E0BF4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E0BF8
  return; // 800E0BFC
}

// fn_800E0C00
void f_800E0C00(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800E0C00
  c->r[0]=rotl(c->r[0],0)&0xFFFFF7FFu; // 800E0C04
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E0C08
  return; // 800E0C0C
}

// fn_800E0C10
void f_800E0C10(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 800E0C10
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 800E0C14
  c->r[0]=0u-c->r[3]; // 800E0C18
  c->r[0]=c->r[0]|c->r[3]; // 800E0C1C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800E0C20
  return; // 800E0C24
}

// fn_800E0C28
void f_800E0C28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0C28
  c->r[0]=c->lr; // 800E0C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0C30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0C34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0C38
  c->r[30]=c->r[3]|c->r[3]; // 800E0C3C
  W32(c->r[3]+0x00000060u,c->r[4]); // 800E0C40
  cmps(c,0,(int32_t)c->r[5],0); // 800E0C44
  if (!crb(c,2)) { goto L_800E0C50; } // 800E0C48
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 800E0C4C
L_800E0C50:;
  c->r[3]=c->r[30]|c->r[30]; // 800E0C50
  c->r[4]=c->r[5]|c->r[5]; // 800E0C54
  c->lr=0x800E0C5Cu; f_800BEDE0(c); // 800E0C58
  c->r[31]=c->r[3]|c->r[3]; // 800E0C5C
  cmps(c,0,(int32_t)c->r[3],0); // 800E0C60
  if (crb(c,2)) { goto L_800E0D88; } // 800E0C64
  c->lr=0x800E0C6Cu; f_800A23BC(c); // 800E0C68
  c->lr=0x800E0C70u; f_800A23B4(c); // 800E0C6C
  c->r[4]=c->r[31]|c->r[31]; // 800E0C70
  c->lr=0x800E0C78u; f_800BEDA0(c); // 800E0C74
  c->lr=0x800E0C7Cu; f_800CF580(c); // 800E0C78
  cmps(c,0,(int32_t)c->r[3],2); // 800E0C7C
  if (crb(c,2)) { goto L_800E0CBC; } // 800E0C80
  if (!crb(c,0)) { goto L_800E0C94; } // 800E0C84
  cmps(c,0,(int32_t)c->r[3],1); // 800E0C88
  if (!crb(c,0)) { goto L_800E0CF4; } // 800E0C8C
  goto L_800E0D88; // 800E0C90
L_800E0C94:;
  cmps(c,0,(int32_t)c->r[3],4); // 800E0C94
  if (!crb(c,0)) { goto L_800E0D88; } // 800E0C98
  c->lr=0x800E0CA0u; f_800A23BC(c); // 800E0C9C
  c->lr=0x800E0CA4u; f_800BB818(c); // 800E0CA0
  c->r[4]=0u+0x00000001u; // 800E0CA4
  c->lr=0x800E0CACu; f_800BBF74(c); // 800E0CA8
  c->r[4]=0u+0x00000000u; // 800E0CAC
  c->r[5]=0u+0x00000000u; // 800E0CB0
  c->lr=0x800E0CB8u; f_800D3578(c); // 800E0CB4
  goto L_800E0D88; // 800E0CB8
L_800E0CBC:;
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0CBC
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 800E0CC0
  c->lr=0x800E0CC8u; f_800A23BC(c); // 800E0CC4
  c->lr=0x800E0CCCu; f_800BB818(c); // 800E0CC8
  c->r[4]=0u+0x00000001u; // 800E0CCC
  c->lr=0x800E0CD4u; f_800BBF74(c); // 800E0CD0
  c->r[0]=R32(c->r[30]+0x00000060u); // 800E0CD4
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 800E0CD8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0CDC
  c->r[4]=c->r[30]+c->r[0]; // 800E0CE0
  c->r[4]=R32(c->r[4]+0x00000064u); // 800E0CE4
  c->r[5]=0u+0x00000000u; // 800E0CE8
  c->lr=0x800E0CF0u; f_800D3578(c); // 800E0CEC
  goto L_800E0D88; // 800E0CF0
L_800E0CF4:;
  c->lr=0x800E0CF8u; f_800A23BC(c); // 800E0CF4
  c->lr=0x800E0CFCu; f_800A23B4(c); // 800E0CF8
  c->r[4]=c->r[31]|c->r[31]; // 800E0CFC
  c->lr=0x800E0D04u; f_800BEDA0(c); // 800E0D00
  c->lr=0x800E0D08u; f_800CF5E4(c); // 800E0D04
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0D08
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 800E0D0C
  c->r[3]=R32(c->r[30]+0x00000060u); // 800E0D10
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 800E0D14
  cmps(c,0,(int32_t)c->r[0],0); // 800E0D18
  if (crb(c,2)) { goto L_800E0D2C; } // 800E0D1C
  c->r[0]=c->r[3]+0x00000001u; // 800E0D20
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800E0D24
  W32(c->r[30]+0x00000060u,c->r[0]); // 800E0D28
L_800E0D2C:;
  c->r[0]=R32(c->r[30]+0x00000060u); // 800E0D2C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0D30
  c->r[3]=c->r[30]+c->r[0]; // 800E0D34
  c->r[31]=R32(c->r[3]+0x00000064u); // 800E0D38
  c->lr=0x800E0D40u; f_800A23BC(c); // 800E0D3C
  c->lr=0x800E0D44u; f_800BB818(c); // 800E0D40
  c->r[4]=0u+0x00000001u; // 800E0D44
  c->lr=0x800E0D4Cu; f_800BBF74(c); // 800E0D48
  c->lr=0x800E0D50u; f_800CF568(c); // 800E0D4C
  cmps(c,0,(int32_t)c->r[31],0); // 800E0D50
  if (!crb(c,0)) { goto L_800E0D60; } // 800E0D54
  c->r[31]=0u+0x00000000u; // 800E0D58
  goto L_800E0D6C; // 800E0D5C
L_800E0D60:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800E0D60
  if (crb(c,0)) { goto L_800E0D6C; } // 800E0D64
  c->r[31]=0u+0x00000000u; // 800E0D68
L_800E0D6C:;
  c->lr=0x800E0D70u; f_800A23BC(c); // 800E0D6C
  c->lr=0x800E0D74u; f_800BB818(c); // 800E0D70
  c->r[4]=0u+0x00000001u; // 800E0D74
  c->lr=0x800E0D7Cu; f_800BBF74(c); // 800E0D78
  c->r[4]=c->r[31]|c->r[31]; // 800E0D7C
  c->r[5]=0u+0x00000000u; // 800E0D80
  c->lr=0x800E0D88u; f_800D3578(c); // 800E0D84
L_800E0D88:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0D88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0D8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0D90
  c->lr=c->r[0]; // 800E0D94
  c->r[1]=c->r[1]+0x00000010u; // 800E0D98
  return; // 800E0D9C
}

// fn_800E0DA0
void f_800E0DA0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800E0DA0
  W32(c->r[3]+0x00000064u,c->r[0]); // 800E0DA4
  c->r[0]=0u+0x00000001u; // 800E0DA8
  W32(c->r[3]+0x00000068u,c->r[0]); // 800E0DAC
  c->r[0]=0u+0x00000002u; // 800E0DB0
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800E0DB4
  c->r[0]=0u+0x00000003u; // 800E0DB8
  W32(c->r[3]+0x00000070u,c->r[0]); // 800E0DBC
  return; // 800E0DC0
}

// fn_800E0DC4
void f_800E0DC4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E0DC4
  c->r[3]=c->r[3]+c->r[0]; // 800E0DC8
  W32(c->r[3]+0x00000064u,c->r[5]); // 800E0DCC
  return; // 800E0DD0
}

// fn_800E0DD4
void f_800E0DD4(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 800E0DD4
  W32(c->r[3]+0x00000074u,c->r[0]); // 800E0DD8
  W32(c->r[3]+0x00000078u,c->r[0]); // 800E0DDC
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800E0DE0
  W32(c->r[3]+0x00000080u,c->r[0]); // 800E0DE4
  return; // 800E0DE8
}

// fn_800E0DEC
void f_800E0DEC(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],31)&0x7FFFFFFFu; // 800E0DEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0DF0
  c->r[3]=c->r[3]+c->r[0]; // 800E0DF4
  W32(c->r[3]+0x00000074u,c->r[5]); // 800E0DF8
  W32(c->r[3]+0x00000078u,c->r[5]); // 800E0DFC
  return; // 800E0E00
}

// fn_800E0E04
void f_800E0E04(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E0E04
  c->r[3]=c->r[3]+c->r[0]; // 800E0E08
  c->r[3]=R32(c->r[3]+0x00000074u); // 800E0E0C
  return; // 800E0E10
}

// fn_800E0E14
void f_800E0E14(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000098u); // 800E0E14
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 800E0E18
  W32(c->r[3]+0x00000098u,c->r[4]); // 800E0E1C
  return; // 800E0E20
}

// fn_800E0E24
void f_800E0E24(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000098u); // 800E0E24
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 800E0E28
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800E0E2C
  if (crb(c,2)) { goto L_800E0E40; } // 800E0E30
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 800E0E34
  c->r[3]=c->r[4]|c->r[4]; // 800E0E38
  return; // 800E0E3C
L_800E0E40:;
  c->r[3]=0u+0xFFFFFFFFu; // 800E0E40
  return; // 800E0E44
}

// fn_800E0E48
void f_800E0E48(Ctx* __restrict c) {
  W32(c->r[3]+0x000000A4u,c->r[4]); // 800E0E48
  c->r[0]=0u+0x00000000u; // 800E0E4C
  W32(c->r[3]+0x000000E8u,c->r[0]); // 800E0E50
  W32(c->r[3]+0x000000A0u,c->r[0]); // 800E0E54
  return; // 800E0E58
}

// fn_800E0E5C
void f_800E0E5C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000E8u); // 800E0E5C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0E60
  c->r[5]=c->r[3]+c->r[0]; // 800E0E64
  W32(c->r[5]+0x000000A8u,c->r[4]); // 800E0E68
  c->r[4]=R32(c->r[3]+0x000000E8u); // 800E0E6C
  c->r[0]=c->r[4]+0x00000001u; // 800E0E70
  W32(c->r[3]+0x000000E8u,c->r[0]); // 800E0E74
  return; // 800E0E78
}

// fn_800E0E7C
void f_800E0E7C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800E0E7C
  W32(c->r[3]+0x000000A0u,c->r[0]); // 800E0E80
  c->r[3]=R32(c->r[3]+0x000000A4u); // 800E0E84
  return; // 800E0E88
}

// fn_800E0E8C
void f_800E0E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0E8C
  c->r[0]=c->lr; // 800E0E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0E94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0E98
  c->r[31]=c->r[3]|c->r[3]; // 800E0E9C
  c->r[0]=R32(c->r[3]+0x000000E8u); // 800E0EA0
  cmps(c,0,(int32_t)c->r[0],0); // 800E0EA4
  if (!crb(c,2)) { goto L_800E0EB4; } // 800E0EA8
  c->r[3]=0u+0xFFFFFFFFu; // 800E0EAC
  goto L_800E0EDC; // 800E0EB0
L_800E0EB4:;
  c->r[0]=0u+0x00000001u; // 800E0EB4
  W32(c->r[3]+0x000000A0u,c->r[0]); // 800E0EB8
  c->lr=0x800E0EC0u; f_8005C4C4(c); // 800E0EBC
  c->r[4]=R32(c->r[31]+0x000000E8u); // 800E0EC0
  c->r[0]=divwu(c->r[3],c->r[4]); // 800E0EC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800E0EC8
  c->r[0]=c->r[3]-c->r[0]; // 800E0ECC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E0ED0
  c->r[3]=c->r[31]+c->r[0]; // 800E0ED4
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800E0ED8
L_800E0EDC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0EE0
  c->lr=c->r[0]; // 800E0EE4
  c->r[1]=c->r[1]+0x00000010u; // 800E0EE8
  return; // 800E0EEC
}

// fn_800E0EF0
void f_800E0EF0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000A0u); // 800E0EF0
  return; // 800E0EF4
}

// fn_800E0EF8
void f_800E0EF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0EF8
  c->r[0]=c->lr; // 800E0EFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E0F00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E0F04
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E0F08
  c->r[30]=c->r[3]|c->r[3]; // 800E0F0C
  c->r[31]=c->r[4]|c->r[4]; // 800E0F10
  c->r[0]=R32(c->r[3]+0x00000040u); // 800E0F14
  W32(c->r[4]+0x00000004u,c->r[0]); // 800E0F18
  c->r[0]=R32(c->r[3]+0x00000044u); // 800E0F1C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800E0F20
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800E0F24
  W32(c->r[4]+0x00000008u,c->r[0]); // 800E0F28
  c->r[0]=R32(c->r[3]+0x00000048u); // 800E0F2C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800E0F30
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800E0F34
  W32(c->r[4]+0x00000010u,c->r[0]); // 800E0F38
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E0F3C
  W32(c->r[4]+0x00000014u,c->r[0]); // 800E0F40
  c->lr=0x800E0F48u; f_8007B524(c); // 800E0F44
  c->r[4]=c->r[31]+0x00000018u; // 800E0F48
  c->lr=0x800E0F50u; f_8009CDA0(c); // 800E0F4C
  c->lr=0x800E0F54u; f_8007B524(c); // 800E0F50
  c->r[4]=c->r[31]+0x00000024u; // 800E0F54
  c->lr=0x800E0F5Cu; f_8009CDDC(c); // 800E0F58
  c->r[3]=c->r[31]+0x00000030u; // 800E0F5C
  c->r[4]=c->r[30]+0x00001F2Cu; // 800E0F60
  c->lr=0x800E0F68u; f_8004A68C(c); // 800E0F64
  c->r[3]=c->r[31]+0x0000003Cu; // 800E0F68
  c->r[4]=c->r[30]+0x00001F38u; // 800E0F6C
  c->lr=0x800E0F74u; f_8004A68C(c); // 800E0F70
  {uint32_t ea=c->r[30]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E0F74
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 800E0F78
  c->r[0]=R32(c->r[30]+0x00000060u); // 800E0F7C
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800E0F80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E0F84
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E0F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E0F8C
  c->lr=c->r[0]; // 800E0F90
  c->r[1]=c->r[1]+0x00000010u; // 800E0F94
  return; // 800E0F98
}

// fn_800E0F9C
void f_800E0F9C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00001964u; // 800E0F9C
  f_800D555C(c); return; // 800E0FA0
}

// fn_800E0FA4
void f_800E0FA4(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)72); // 800E0FA4
  c->r[3]=c->r[3]+c->r[0]; // 800E0FA8
  c->r[3]=c->r[3]+0x0000153Cu; // 800E0FAC
  f_800D483C(c); return; // 800E0FB0
}

// fn_800E0FB4
void f_800E0FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E0FB4
  c->r[0]=c->lr; // 800E0FB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E0FBC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800E0FC0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800E0FC4
  c->r[30]=c->r[3]|c->r[3]; // 800E0FC8
  c->r[31]=c->r[4]|c->r[4]; // 800E0FCC
  c->r[0]=R32(c->r[3]+0x00000028u); // 800E0FD0
  c->r[0]=c->r[0]|0x00000002u; // 800E0FD4
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E0FD8
  c->r[0]=c->r[0]|0x00000004u; // 800E0FDC
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E0FE0
  c->r[0]=R32(c->r[4]+0x00000004u); // 800E0FE4
  W32(c->r[3]+0x00000040u,c->r[0]); // 800E0FE8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800E0FEC
  W32(c->r[3]+0x00000044u,c->r[0]); // 800E0FF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 800E0FF4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800E0FF8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800E0FFC
  W32(c->r[3]+0x00000048u,c->r[0]); // 800E1000
  c->r[0]=R32(c->r[4]+0x00000010u); // 800E1004
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800E1008
  c->r[0]=R32(c->r[4]+0x00000014u); // 800E100C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E1010
  c->r[3]=c->r[1]+0x0000002Cu; // 800E1014
  c->r[4]=c->r[4]+0x00000018u; // 800E1018
  c->lr=0x800E1020u; f_800C236C(c); // 800E101C
  c->r[4]=c->r[3]|c->r[3]; // 800E1020
  c->r[3]=c->r[30]+0x00001F14u; // 800E1024
  c->lr=0x800E102Cu; f_8004A65C(c); // 800E1028
  c->r[3]=c->r[1]+0x00000020u; // 800E102C
  c->r[4]=c->r[31]+0x00000024u; // 800E1030
  c->lr=0x800E1038u; f_800C236C(c); // 800E1034
  c->r[4]=c->r[3]|c->r[3]; // 800E1038
  c->r[3]=c->r[30]+0x00001F20u; // 800E103C
  c->lr=0x800E1044u; f_8004A65C(c); // 800E1040
  c->r[3]=c->r[1]+0x00000014u; // 800E1044
  c->r[4]=c->r[31]+0x00000030u; // 800E1048
  c->lr=0x800E1050u; f_800C236C(c); // 800E104C
  c->r[4]=c->r[3]|c->r[3]; // 800E1050
  c->r[3]=c->r[30]+0x00001F2Cu; // 800E1054
  c->lr=0x800E105Cu; f_8004A65C(c); // 800E1058
  c->r[3]=c->r[1]+0x00000008u; // 800E105C
  c->r[4]=c->r[31]+0x0000003Cu; // 800E1060
  c->lr=0x800E1068u; f_800C236C(c); // 800E1064
  c->r[4]=c->r[3]|c->r[3]; // 800E1068
  c->r[3]=c->r[30]+0x00001F38u; // 800E106C
  c->lr=0x800E1074u; f_8004A65C(c); // 800E1070
  {uint32_t ea=c->r[31]+0x00000048u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1074
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 800E1078
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800E107C
  W32(c->r[30]+0x00000060u,c->r[0]); // 800E1080
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800E1084
  c->r[30]=R32(c->r[1]+0x00000038u); // 800E1088
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E108C
  c->lr=c->r[0]; // 800E1090
  c->r[1]=c->r[1]+0x00000040u; // 800E1094
  return; // 800E1098
}

// fn_800E109C
void f_800E109C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00001964u; // 800E109C
  f_800D5540(c); return; // 800E10A0
}

// fn_800E10A4
void f_800E10A4(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)72); // 800E10A4
  c->r[3]=c->r[3]+c->r[0]; // 800E10A8
  c->r[3]=c->r[3]+0x0000153Cu; // 800E10AC
  f_800D476C(c); return; // 800E10B0
}

// fn_800E10B4
void f_800E10B4(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800E10B4
  c->r[3]=0u+0x00000000u; // 800E10B8
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800E10BC
  c->r[4]=c->r[5]+c->r[0]; // 800E10C0
  c->r[4]=R32(c->r[4]+0x000010C4u); // 800E10C4
  f_800BABD0(c); return; // 800E10C8
}

// fn_800E10CC
void f_800E10CC(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 800E10CC
  c->r[3]=0u+0x00000000u; // 800E10D0
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800E10D4
  c->r[4]=c->r[5]+c->r[0]; // 800E10D8
  c->r[4]=R32(c->r[4]+0x00001110u); // 800E10DC
  f_800BABD0(c); return; // 800E10E0
}

// fn_800E10E4
void f_800E10E4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800E10E4
  W32(c->r[3]+0x00001EDCu,c->r[0]); // 800E10E8
  W32(c->r[3]+0x00001EE0u,c->r[0]); // 800E10EC
  c->r[0]=0u+0xFFFFFFFFu; // 800E10F0
  W32(c->r[3]+0x00001EECu,c->r[0]); // 800E10F4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E10F8
  {uint32_t ea=c->r[3]+0x00001ED4u; WF32(ea,c->f[0]);} // 800E10FC
  {uint32_t ea=c->r[3]+0x00001ED8u; WF32(ea,c->f[0]);} // 800E1100
  f_8018F618(c); return; // 800E1104
}

// fn_800E1108
void f_800E1108(Ctx* __restrict c) {
  f_8018F618(c); return; // 800E1108
}

// fn_800E110C
void f_800E110C(Ctx* __restrict c) {
  W32(c->r[3]+0x00001EF0u,c->r[4]); // 800E110C
  return; // 800E1110
}

// fn_800E1114
void f_800E1114(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1114
  c->r[0]=c->lr; // 800E1118
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E111C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1120
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E1124
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E1128
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E112C
  c->r[28]=c->r[3]|c->r[3]; // 800E1130
  c->r[30]=0u+0x00000000u; // 800E1134
  c->lr=0x800E113Cu; f_800BEE64(c); // 800E1138
  c->r[31]=c->r[3]|c->r[3]; // 800E113C
  goto L_800E11B0; // 800E1140
L_800E1144:;
  c->r[3]=c->r[28]|c->r[28]; // 800E1144
  c->r[4]=c->r[31]|c->r[31]; // 800E1148
  c->lr=0x800E1150u; f_800BEDA0(c); // 800E114C
  c->r[29]=c->r[3]|c->r[3]; // 800E1150
  c->lr=0x800E1158u; f_800CF580(c); // 800E1154
  cmps(c,0,(int32_t)c->r[3],4); // 800E1158
  if (!crb(c,2)) { goto L_800E11A0; } // 800E115C
  c->r[3]=c->r[29]|c->r[29]; // 800E1160
  c->lr=0x800E1168u; f_800CF71C(c); // 800E1164
  c->lr=0x800E116Cu; f_802F0250(c); // 800E1168
  cmps(c,0,(int32_t)c->r[3],0); // 800E116C
  if (crb(c,2)) { goto L_800E11A0; } // 800E1170
  c->r[3]=c->r[29]|c->r[29]; // 800E1174
  c->lr=0x800E117Cu; f_800CF5EC(c); // 800E1178
  c->r[29]=c->r[3]|c->r[3]; // 800E117C
  c->lr=0x800E1184u; f_800A23BC(c); // 800E1180
  c->lr=0x800E1188u; f_800BB76C(c); // 800E1184
  c->r[4]=0u+0x00000002u; // 800E1188
  c->r[5]=c->r[29]|c->r[29]; // 800E118C
  c->lr=0x800E1194u; f_800D32B8(c); // 800E1190
  cmps(c,0,(int32_t)c->r[3],0); // 800E1194
  if (crb(c,2)) { goto L_800E11A0; } // 800E1198
  c->r[30]=c->r[30]+0x00000001u; // 800E119C
L_800E11A0:;
  c->r[3]=c->r[28]|c->r[28]; // 800E11A0
  c->r[4]=c->r[31]|c->r[31]; // 800E11A4
  c->lr=0x800E11ACu; f_800BEE9C(c); // 800E11A8
  c->r[31]=c->r[3]|c->r[3]; // 800E11AC
L_800E11B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800E11B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800E1144; } // 800E11B4
  c->r[3]=c->r[30]|c->r[30]; // 800E11B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E11BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E11C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E11C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E11C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E11CC
  c->lr=c->r[0]; // 800E11D0
  c->r[1]=c->r[1]+0x00000020u; // 800E11D4
  return; // 800E11D8
}

// fn_800E11DC
void f_800E11DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E11DC
  c->r[0]=c->lr; // 800E11E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E11E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E11E8
  c->r[31]=c->r[3]|c->r[3]; // 800E11EC
  c->r[6]=c->r[4]|c->r[4]; // 800E11F0
  cmps(c,0,(int32_t)c->r[5],0); // 800E11F4
  if (!crb(c,2)) { goto L_800E1208; } // 800E11F8
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 800E11FC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800E1200
  if (crb(c,2)) { goto L_800E1260; } // 800E1204
L_800E1208:;
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 800E1208
  c->r[3]=c->r[1]+0x00000008u; // 800E120C
  c->r[4]=0u+0x80460000u; // 800E1210
  c->r[4]=c->r[4]+0x0000095Cu; // 800E1214
  c->r[5]=c->r[6]|c->r[6]; // 800E1218
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E121C
  c->lr=0x800E1224u; f_802E7CC4(c); // 800E1220
  c->r[3]=c->r[1]+0x00000008u; // 800E1224
  c->lr=0x800E122Cu; f_8007BE8C(c); // 800E1228
  cmps(c,0,(int32_t)c->r[3],0); // 800E122C
  if (crb(c,2)) { goto L_800E123C; } // 800E1230
  c->r[3]=c->r[1]+0x00000008u; // 800E1234
  c->lr=0x800E123Cu; f_8007BE34(c); // 800E1238
L_800E123C:;
  c->r[0]=R32(c->r[31]+0x00001EDCu); // 800E123C
  cmps(c,0,(int32_t)c->r[0],0); // 800E1240
  if (!crb(c,2)) { goto L_800E1260; } // 800E1244
  c->r[0]=R32(c->r[31]+0x00001EE0u); // 800E1248
  cmps(c,0,(int32_t)c->r[0],0); // 800E124C
  if (!crb(c,2)) { goto L_800E1260; } // 800E1250
  c->r[3]=c->r[31]|c->r[31]; // 800E1254
  c->r[4]=0u+0x00000001u; // 800E1258
  c->lr=0x800E1260u; f_800E10E4(c); // 800E125C
L_800E1260:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E1260
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E1264
  c->lr=c->r[0]; // 800E1268
  c->r[1]=c->r[1]+0x00000030u; // 800E126C
  return; // 800E1270
}

// fn_800E1274
void f_800E1274(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1274
  c->r[0]=c->lr; // 800E1278
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E127C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1280
  c->r[31]=c->r[3]|c->r[3]; // 800E1284
  c->r[4]=0u+0x00000000u; // 800E1288
  c->lr=0x800E1290u; f_800DAFDC(c); // 800E128C
  c->r[3]=c->r[31]|c->r[31]; // 800E1290
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1294
  c->lr=0x800E129Cu; f_800DE82C(c); // 800E1298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E129C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E12A0
  c->lr=c->r[0]; // 800E12A4
  c->r[1]=c->r[1]+0x00000010u; // 800E12A8
  return; // 800E12AC
}

// fn_800E12B0
void f_800E12B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E12B0
  c->r[0]=c->lr; // 800E12B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E12B8
  c->lr=0x800E12C0u; f_800BB904(c); // 800E12BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E12C0
  c->r[0]=cntlz(c->r[0]); // 800E12C4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E12C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E12CC
  c->lr=c->r[0]; // 800E12D0
  c->r[1]=c->r[1]+0x00000010u; // 800E12D4
  return; // 800E12D8
}

// fn_800E12DC
void f_800E12DC(Ctx* __restrict c) {
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 800E12DC
  return; // 800E12E0
}

// fn_800E12E4
void f_800E12E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E12E4
  c->r[0]=c->lr; // 800E12E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E12EC
  c->lr=0x800E12F4u; f_800BB904(c); // 800E12F0
  c->r[0]=cntlz(c->r[3]); // 800E12F4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E12F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E12FC
  c->lr=c->r[0]; // 800E1300
  c->r[1]=c->r[1]+0x00000010u; // 800E1304
  return; // 800E1308
}

// fn_800E130C
void f_800E130C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800E130C
  f_800BB8E4(c); return; // 800E1310
}

// fn_800E1314
void f_800E1314(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 800E1314
  return; // 800E1318
}

// fn_800E131C
void f_800E131C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 800E131C
  return; // 800E1320
}

// fn_800E1324
void f_800E1324(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800E1324
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800E1328
  c->r[0]=0u-c->r[3]; // 800E132C
  c->r[0]=c->r[0]|c->r[3]; // 800E1330
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800E1334
  return; // 800E1338
}

// fn_800E133C
void f_800E133C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E133C
  c->r[0]=c->lr; // 800E1340
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1344
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1348
  c->r[31]=c->r[3]|c->r[3]; // 800E134C
  c->lr=0x800E1354u; f_800BDCD0(c); // 800E1350
  c->r[3]=0u+0x80460000u; // 800E1354
  c->r[0]=c->r[3]+0x00000A38u; // 800E1358
  W32(c->r[31]+0x00000048u,c->r[0]); // 800E135C
  c->r[3]=c->r[31]|c->r[31]; // 800E1360
  c->lr=0x800E1368u; f_800BDD88(c); // 800E1364
  c->r[3]=c->r[31]|c->r[31]; // 800E1368
  c->lr=0x800E1370u; f_800CFAA4(c); // 800E136C
  c->r[3]=c->r[31]|c->r[31]; // 800E1370
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1374
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1378
  c->lr=c->r[0]; // 800E137C
  c->r[1]=c->r[1]+0x00000010u; // 800E1380
  return; // 800E1384
}

// fn_800E1388
void f_800E1388(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1388
  c->r[0]=c->lr; // 800E138C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1390
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1394
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1398
  c->r[30]=c->r[3]|c->r[3]; // 800E139C
  c->r[31]=c->r[4]|c->r[4]; // 800E13A0
  cmps(c,0,(int32_t)c->r[3],0); // 800E13A4
  if (crb(c,2)) { goto L_800E13DC; } // 800E13A8
  c->r[4]=0u+0x80460000u; // 800E13AC
  c->r[0]=c->r[4]+0x00000A38u; // 800E13B0
  W32(c->r[3]+0x00000048u,c->r[0]); // 800E13B4
  c->lr=0x800E13BCu; f_800E1640(c); // 800E13B8
  c->r[3]=c->r[30]|c->r[30]; // 800E13BC
  c->r[4]=0u+0x00000000u; // 800E13C0
  c->lr=0x800E13C8u; f_800BDD24(c); // 800E13C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800E13C8
  cmps(c,0,(int32_t)c->r[0],0); // 800E13CC
  if (!crb(c,1)) { goto L_800E13DC; } // 800E13D0
  c->r[3]=c->r[30]|c->r[30]; // 800E13D4
  c->lr=0x800E13DCu; f_80047B20(c); // 800E13D8
L_800E13DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800E13DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E13E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E13E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E13E8
  c->lr=c->r[0]; // 800E13EC
  c->r[1]=c->r[1]+0x00000010u; // 800E13F0
  return; // 800E13F4
}

// fn_800E13F8
void f_800E13F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E13F8
  c->r[0]=c->lr; // 800E13FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1400
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1404
  c->r[31]=c->r[3]|c->r[3]; // 800E1408
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E140C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 800E1410
  cmps(c,0,(int32_t)c->r[0],0); // 800E1414
  if (crb(c,2)) { goto L_800E14A8; } // 800E1418
  c->r[3]=0u+0x00000001u; // 800E141C
  c->lr=0x800E1424u; f_8005D714(c); // 800E1420
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1424
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800E1428
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[1]);} // 800E142C
  {uint32_t ea=c->r[31]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1430
  fcmp(c,0,c->f[1],c->f[0]); // 800E1434
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E1438
  if (!crb(c,2)) { goto L_800E1444; } // 800E143C
  {uint32_t ea=c->r[31]+0x0000006Cu; WF32(ea,c->f[0]);} // 800E1440
L_800E1444:;
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1444
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1448
  fcmp(c,0,c->f[1],c->f[0]); // 800E144C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E1450
  if (!crb(c,2)) { goto L_800E1460; } // 800E1454
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1458
  goto L_800E1468; // 800E145C
L_800E1460:;
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1460
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 800E1464
L_800E1468:;
  {uint32_t ea=c->r[31]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1468
  {uint32_t ea=c->r[31]+0x00000064u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E146C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E1470
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800E1474
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E1478
  {uint32_t ea=c->r[31]+0x00000060u; WF32(ea,c->f[0]);} // 800E147C
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1480
  fcmp(c,0,c->f[2],c->f[0]); // 800E1484
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E1488
  if (!crb(c,2)) { goto L_800E149C; } // 800E148C
  c->r[0]=R32(c->r[31]+0x00000050u); // 800E1490
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 800E1494
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E1498
L_800E149C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800E149C
  c->r[0]=c->r[0]|0x00000004u; // 800E14A0
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E14A4
L_800E14A8:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 800E14A8
  c->r[0]=rotl(c->r[3],0)&0x00000004u; // 800E14AC
  cmps(c,0,(int32_t)c->r[0],0); // 800E14B0
  if (crb(c,2)) { goto L_800E14D0; } // 800E14B4
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFBu; // 800E14B8
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E14BC
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800E14C0
  {uint32_t ea=c->r[31]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E14C4
  c->r[4]=0u+0x00000000u; // 800E14C8
  c->lr=0x800E14D0u; f_8005AB88(c); // 800E14CC
L_800E14D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E14D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E14D4
  c->lr=c->r[0]; // 800E14D8
  c->r[1]=c->r[1]+0x00000010u; // 800E14DC
  return; // 800E14E0
}

// fn_800E14E4
void f_800E14E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E14E4
  c->r[0]=c->lr; // 800E14E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E14EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E14F0
  c->r[31]=c->r[3]|c->r[3]; // 800E14F4
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E14F8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 800E14FC
  cmps(c,0,(int32_t)c->r[0],0); // 800E1500
  if (crb(c,2)) { goto L_800E1594; } // 800E1504
  c->r[3]=0u+0x00000001u; // 800E1508
  c->lr=0x800E1510u; f_8005D714(c); // 800E150C
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1510
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800E1514
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[1]);} // 800E1518
  {uint32_t ea=c->r[31]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E151C
  fcmp(c,0,c->f[1],c->f[0]); // 800E1520
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E1524
  if (!crb(c,2)) { goto L_800E1530; } // 800E1528
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800E152C
L_800E1530:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1530
  {uint32_t ea=c->r[2]+0xFFFF883Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1534
  fcmp(c,0,c->f[1],c->f[0]); // 800E1538
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E153C
  if (!crb(c,2)) { goto L_800E154C; } // 800E1540
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E1544
  goto L_800E1554; // 800E1548
L_800E154C:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E154C
  c->f[2]=c->ps1[2]=S(c->f[0]/c->f[1]); // 800E1550
L_800E1554:;
  {uint32_t ea=c->r[31]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1554
  {uint32_t ea=c->r[31]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1558
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800E155C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800E1560
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800E1564
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[0]);} // 800E1568
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E156C
  fcmp(c,0,c->f[2],c->f[0]); // 800E1570
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800E1574
  if (!crb(c,2)) { goto L_800E1588; } // 800E1578
  c->r[0]=R32(c->r[31]+0x00000050u); // 800E157C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 800E1580
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E1584
L_800E1588:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800E1588
  c->r[0]=c->r[0]|0x00000008u; // 800E158C
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E1590
L_800E1594:;
  c->r[3]=R32(c->r[31]+0x00000050u); // 800E1594
  c->r[0]=rotl(c->r[3],0)&0x00000008u; // 800E1598
  cmps(c,0,(int32_t)c->r[0],0); // 800E159C
  if (crb(c,2)) { goto L_800E15B8; } // 800E15A0
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFF7u; // 800E15A4
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E15A8
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800E15AC
  {uint32_t ea=c->r[31]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E15B0
  c->lr=0x800E15B8u; f_8005AC90(c); // 800E15B4
L_800E15B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E15B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E15BC
  c->lr=c->r[0]; // 800E15C0
  c->r[1]=c->r[1]+0x00000010u; // 800E15C4
  return; // 800E15C8
}

// fn_800E15CC
void f_800E15CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E15CC
  c->r[0]=c->lr; // 800E15D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E15D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E15D8
  c->r[31]=c->r[3]|c->r[3]; // 800E15DC
  c->r[0]=0u+0x00000000u; // 800E15E0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E15E4
  W32(c->r[3]+0x00000058u,c->r[5]); // 800E15E8
  W32(c->r[3]+0x00000054u,c->r[4]); // 800E15EC
  {uint32_t ea=c->r[3]+0x0000005Cu; WF32(ea,c->f[1]);} // 800E15F0
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800E15F4
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E15F8
  fcmp(c,0,c->f[1],c->f[0]); // 800E15FC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E1600
  if (!crb(c,2)) { goto L_800E1614; } // 800E1604
  c->r[3]=0u+0x00000001u; // 800E1608
  c->lr=0x800E1610u; f_8005D714(c); // 800E160C
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[1]);} // 800E1610
L_800E1614:;
  c->lr=0x800E1618u; f_8006592C(c); // 800E1614
  c->lr=0x800E161Cu; f_80048E90(c); // 800E1618
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800E161C
  cmps(c,0,(int32_t)c->r[3],0); // 800E1620
  if (crb(c,2)) { goto L_800E162C; } // 800E1624
  c->lr=0x800E162Cu; f_8009CC48(c); // 800E1628
L_800E162C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E162C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1630
  c->lr=c->r[0]; // 800E1634
  c->r[1]=c->r[1]+0x00000010u; // 800E1638
  return; // 800E163C
}

// fn_800E1640
void f_800E1640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1640
  c->r[0]=c->lr; // 800E1644
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1648
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E164C
  c->r[31]=c->r[3]|c->r[3]; // 800E1650
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 800E1654
  cmps(c,0,(int32_t)c->r[0],0); // 800E1658
  if (crb(c,2)) { goto L_800E1690; } // 800E165C
  c->lr=0x800E1664u; f_800BDEB4(c); // 800E1660
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800E1664
  c->lr=0x800E166Cu; f_8009CC3C(c); // 800E1668
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800E166C
  c->r[4]=0u+0x00000000u; // 800E1670
  c->lr=0x800E1678u; f_8005A908(c); // 800E1674
  c->r[3]=R32(c->r[31]+0x0000004Cu); // 800E1678
  c->lr=0x800E1680u; f_8005ADF4(c); // 800E167C
  c->r[0]=0u+0x00000000u; // 800E1680
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800E1684
  W32(c->r[31]+0x00000054u,c->r[0]); // 800E1688
  W32(c->r[31]+0x00000050u,c->r[0]); // 800E168C
L_800E1690:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1690
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1694
  c->lr=c->r[0]; // 800E1698
  c->r[1]=c->r[1]+0x00000010u; // 800E169C
  return; // 800E16A0
}

// fn_800E16A4
void f_800E16A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E16A4
  c->r[0]=c->lr; // 800E16A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E16AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E16B0
  c->r[31]=c->r[3]|c->r[3]; // 800E16B4
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E16B8
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 800E16BC
  cmps(c,0,(int32_t)c->r[0],0); // 800E16C0
  if (crb(c,2)) { goto L_800E170C; } // 800E16C4
  c->lr=0x800E16CCu; f_800CFA64(c); // 800E16C8
  cmps(c,0,(int32_t)c->r[3],0); // 800E16CC
  if (crb(c,2)) { goto L_800E170C; } // 800E16D0
  c->r[3]=c->r[31]|c->r[31]; // 800E16D4
  c->lr=0x800E16DCu; f_800BDE68(c); // 800E16D8
  c->r[31]=c->r[3]|c->r[3]; // 800E16DC
  c->lr=0x800E16E4u; f_800A23BC(c); // 800E16E0
  c->lr=0x800E16E8u; f_800BB828(c); // 800E16E4
  c->r[4]=c->r[31]|c->r[31]; // 800E16E8
  c->lr=0x800E16F0u; f_800BB99C(c); // 800E16EC
  c->r[4]=0u+0x00000000u; // 800E16F0
  c->lr=0x800E16F8u; f_800BE370(c); // 800E16F4
  c->lr=0x800E16FCu; f_800A23BC(c); // 800E16F8
  c->lr=0x800E1700u; f_800BB828(c); // 800E16FC
  c->r[4]=c->r[31]|c->r[31]; // 800E1700
  c->lr=0x800E1708u; f_800E1BF4(c); // 800E1704
  goto L_800E1784; // 800E1708
L_800E170C:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 800E170C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800E1710
  cmps(c,0,(int32_t)c->r[0],0); // 800E1714
  if (!crb(c,2)) { goto L_800E1784; } // 800E1718
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800E171C
  cmps(c,0,(int32_t)c->r[0],0); // 800E1720
  if (crb(c,2)) { goto L_800E1768; } // 800E1724
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1728
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E172C
  fcmp(c,0,c->f[1],c->f[0]); // 800E1730
  if (!crb(c,1)) { goto L_800E1768; } // 800E1734
  c->r[3]=0u+0x00000001u; // 800E1738
  c->lr=0x800E1740u; f_8005D714(c); // 800E173C
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E1740
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800E1744
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[1]);} // 800E1748
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E174C
  fcmp(c,0,c->f[1],c->f[0]); // 800E1750
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800E1754
  if (!crb(c,2)) { goto L_800E1768; } // 800E1758
  {uint32_t ea=c->r[31]+0x0000005Cu; WF32(ea,c->f[0]);} // 800E175C
  c->r[3]=c->r[31]|c->r[31]; // 800E1760
  c->lr=0x800E1768u; f_800E1824(c); // 800E1764
L_800E1768:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 800E1768
  cmps(c,0,(int32_t)c->r[0],0); // 800E176C
  if (crb(c,2)) { goto L_800E1784; } // 800E1770
  c->r[3]=c->r[31]|c->r[31]; // 800E1774
  c->lr=0x800E177Cu; f_800E13F8(c); // 800E1778
  c->r[3]=c->r[31]|c->r[31]; // 800E177C
  c->lr=0x800E1784u; f_800E14E4(c); // 800E1780
L_800E1784:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1784
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1788
  c->lr=c->r[0]; // 800E178C
  c->r[1]=c->r[1]+0x00000010u; // 800E1790
  return; // 800E1794
}

// fn_800E1798
void f_800E1798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1798
  c->r[0]=c->lr; // 800E179C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E17A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E17A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E17A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E17AC
  c->r[29]=c->r[3]|c->r[3]; // 800E17B0
  c->r[4]=R32(c->r[3]+0x00000050u); // 800E17B4
  c->r[0]=rotl(c->r[4],0)&0x00000002u; // 800E17B8
  cmps(c,0,(int32_t)c->r[0],0); // 800E17BC
  if (!crb(c,2)) { goto L_800E1808; } // 800E17C0
  c->r[0]=c->r[4]|0x00000002u; // 800E17C4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E17C8
  c->r[30]=R32(c->r[3]+0x0000004Cu); // 800E17CC
  cmps(c,0,(int32_t)c->r[30],0); // 800E17D0
  if (crb(c,2)) { goto L_800E1808; } // 800E17D4
  c->r[31]=R32(c->r[3]+0x00000058u); // 800E17D8
  cmps(c,0,(int32_t)c->r[31],3); // 800E17DC
  if (!crb(c,0)) { goto L_800E1808; } // 800E17E0
  cmps(c,0,(int32_t)c->r[31],-1); // 800E17E4
  if (!crb(c,0)) { goto L_800E17F0; } // 800E17E8
  goto L_800E1808; // 800E17EC
L_800E17F0:;
  c->lr=0x800E17F4u; f_8006592C(c); // 800E17F0
  c->r[4]=R32(c->r[29]+0x00000054u); // 800E17F4
  c->r[5]=c->r[30]|c->r[30]; // 800E17F8
  c->r[6]=0u+0xFFFFFFFFu; // 800E17FC
  c->r[7]=c->r[31]|c->r[31]; // 800E1800
  c->lr=0x800E1808u; f_80048FC0(c); // 800E1804
L_800E1808:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E1808
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E180C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E1810
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1814
  c->lr=c->r[0]; // 800E1818
  c->r[1]=c->r[1]+0x00000020u; // 800E181C
  return; // 800E1820
}

// fn_800E1824
void f_800E1824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1824
  c->r[0]=c->lr; // 800E1828
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E182C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1830
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E1834
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E1838
  c->r[29]=c->r[3]|c->r[3]; // 800E183C
  c->r[4]=R32(c->r[3]+0x00000050u); // 800E1840
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 800E1844
  cmps(c,0,(int32_t)c->r[0],0); // 800E1848
  if (!crb(c,2)) { goto L_800E18B8; } // 800E184C
  c->r[0]=c->r[4]|0x00000001u; // 800E1850
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E1854
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800E1858
  cmps(c,0,(int32_t)c->r[0],0); // 800E185C
  if (crb(c,2)) { goto L_800E187C; } // 800E1860
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800E1864
  c->lr=0x800E186Cu; f_8005A8A8(c); // 800E1868
  c->r[0]=R32(c->r[29]+0x00000050u); // 800E186C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800E1870
  W32(c->r[29]+0x00000050u,c->r[0]); // 800E1874
  goto L_800E18B8; // 800E1878
L_800E187C:;
  c->r[30]=R32(c->r[3]+0x0000004Cu); // 800E187C
  cmps(c,0,(int32_t)c->r[30],0); // 800E1880
  if (crb(c,2)) { goto L_800E18B8; } // 800E1884
  c->r[31]=R32(c->r[3]+0x00000058u); // 800E1888
  cmps(c,0,(int32_t)c->r[31],3); // 800E188C
  if (!crb(c,0)) { goto L_800E18B8; } // 800E1890
  cmps(c,0,(int32_t)c->r[31],-1); // 800E1894
  if (!crb(c,0)) { goto L_800E18A0; } // 800E1898
  goto L_800E18B8; // 800E189C
L_800E18A0:;
  c->lr=0x800E18A4u; f_8006592C(c); // 800E18A0
  c->r[4]=R32(c->r[29]+0x00000054u); // 800E18A4
  c->r[5]=c->r[30]|c->r[30]; // 800E18A8
  c->r[6]=0u+0xFFFFFFFFu; // 800E18AC
  c->r[7]=c->r[31]|c->r[31]; // 800E18B0
  c->lr=0x800E18B8u; f_80048F20(c); // 800E18B4
L_800E18B8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E18B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E18BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E18C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E18C4
  c->lr=c->r[0]; // 800E18C8
  c->r[1]=c->r[1]+0x00000020u; // 800E18CC
  return; // 800E18D0
}

// fn_800E18D4
void f_800E18D4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 800E18D4
  cmps(c,0,(int32_t)c->r[3],0); // 800E18D8
  if (crb(c,2)) return; // 800E18DC
  f_8005A908(c); return; // 800E18E0
  return; // 800E18E4
}

// fn_800E18E8
void f_800E18E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000060u; WF32(ea,c->f[1]);} // 800E18E8
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E18EC
  c->r[0]=c->r[0]|0x00000004u; // 800E18F0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E18F4
  return; // 800E18F8
}

// fn_800E18FC
void f_800E18FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E18FC
  {uint32_t ea=c->r[3]+0x00000064u; WF32(ea,c->f[0]);} // 800E1900
  {uint32_t ea=c->r[3]+0x00000068u; WF32(ea,c->f[1]);} // 800E1904
  return; // 800E1908
}

// fn_800E190C
void f_800E190C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E190C
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[0]);} // 800E1910
  {uint32_t ea=c->r[3]+0x00000070u; WF32(ea,c->f[1]);} // 800E1914
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E1918
  c->r[0]=c->r[0]|0x00000010u; // 800E191C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E1920
  return; // 800E1924
}

// fn_800E1928
void f_800E1928(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; WF32(ea,c->f[1]);} // 800E1928
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E192C
  c->r[0]=c->r[0]|0x00000008u; // 800E1930
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E1934
  return; // 800E1938
}

// fn_800E193C
void f_800E193C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E193C
  {uint32_t ea=c->r[3]+0x00000078u; WF32(ea,c->f[0]);} // 800E1940
  {uint32_t ea=c->r[3]+0x0000007Cu; WF32(ea,c->f[1]);} // 800E1944
  return; // 800E1948
}

// fn_800E194C
void f_800E194C(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E194C
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 800E1950
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800E1954
  c->r[0]=R32(c->r[3]+0x00000050u); // 800E1958
  c->r[0]=c->r[0]|0x00000020u; // 800E195C
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E1960
  return; // 800E1964
}

// fn_800E1968
void f_800E1968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1968
  c->r[0]=c->lr; // 800E196C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1974
  c->r[31]=c->r[3]|c->r[3]; // 800E1978
  c->lr=0x800E1980u; f_800BE52C(c); // 800E197C
  c->r[3]=0u+0x80460000u; // 800E1980
  c->r[0]=c->r[3]+0x00000A00u; // 800E1984
  W32(c->r[31]+0x00000024u,c->r[0]); // 800E1988
  c->r[3]=c->r[31]+0x0000002Cu; // 800E198C
  c->lr=0x800E1994u; f_800BB894(c); // 800E1990
  c->r[3]=c->r[31]|c->r[31]; // 800E1994
  c->lr=0x800E199Cu; f_800E1A4C(c); // 800E1998
  c->r[3]=c->r[31]|c->r[31]; // 800E199C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E19A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E19A4
  c->lr=c->r[0]; // 800E19A8
  c->r[1]=c->r[1]+0x00000010u; // 800E19AC
  return; // 800E19B0
}

// fn_800E19B4
void f_800E19B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E19B4
  c->r[0]=c->lr; // 800E19B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E19BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E19C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E19C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E19C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E19CC
  c->r[28]=c->r[3]|c->r[3]; // 800E19D0
  c->r[29]=c->r[4]|c->r[4]; // 800E19D4
  c->r[30]=c->r[5]|c->r[5]; // 800E19D8
  c->r[31]=c->r[6]|c->r[6]; // 800E19DC
  c->lr=0x800E19E4u; f_800E1A4C(c); // 800E19E0
  c->r[3]=c->r[28]|c->r[28]; // 800E19E4
  c->r[4]=c->r[29]|c->r[29]; // 800E19E8
  c->r[5]=c->r[30]|c->r[30]; // 800E19EC
  c->r[6]=c->r[31]|c->r[31]; // 800E19F0
  c->lr=0x800E19F8u; f_800BE5F0(c); // 800E19F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E19F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E19FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E1A00
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E1A04
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1A08
  c->lr=c->r[0]; // 800E1A0C
  c->r[1]=c->r[1]+0x00000020u; // 800E1A10
  return; // 800E1A14
}

// fn_800E1A18
void f_800E1A18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1A18
  c->r[0]=c->lr; // 800E1A1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1A20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1A24
  c->r[31]=c->r[3]|c->r[3]; // 800E1A28
  c->lr=0x800E1A30u; f_800BE6CC(c); // 800E1A2C
  c->r[3]=c->r[31]|c->r[31]; // 800E1A30
  c->lr=0x800E1A38u; f_800E1A4C(c); // 800E1A34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1A3C
  c->lr=c->r[0]; // 800E1A40
  c->r[1]=c->r[1]+0x00000010u; // 800E1A44
  return; // 800E1A48
}

// fn_800E1A4C
void f_800E1A4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1A4C
  c->r[0]=c->lr; // 800E1A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1A58
  c->r[31]=c->r[3]|c->r[3]; // 800E1A5C
  c->r[0]=0u+0x00000000u; // 800E1A60
  W32(c->r[3]+0x00000038u,c->r[0]); // 800E1A64
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800E1A68
  W32(c->r[3]+0x00000040u,c->r[0]); // 800E1A6C
  W32(c->r[3]+0x00000044u,c->r[0]); // 800E1A70
  W32(c->r[3]+0x00000048u,c->r[0]); // 800E1A74
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800E1A78
  W32(c->r[3]+0x00000050u,c->r[0]); // 800E1A7C
  W32(c->r[3]+0x00000054u,c->r[0]); // 800E1A80
  W32(c->r[3]+0x00000028u,c->r[0]); // 800E1A84
  W32(c->r[3]+0x00000058u,c->r[0]); // 800E1A88
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800E1A8C
  c->r[3]=c->r[3]+0x00000060u; // 800E1A90
  c->r[4]=0u+0x00000000u; // 800E1A94
  c->r[5]=0u+0x00000010u; // 800E1A98
  c->lr=0x800E1AA0u; f_800060B8(c); // 800E1A9C
  c->r[3]=c->r[31]+0x0000002Cu; // 800E1AA0
  c->lr=0x800E1AA8u; f_800BB8D0(c); // 800E1AA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1AAC
  c->lr=c->r[0]; // 800E1AB0
  c->r[1]=c->r[1]+0x00000010u; // 800E1AB4
  return; // 800E1AB8
}

// fn_800E1ABC
void f_800E1ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1ABC
  c->r[0]=c->lr; // 800E1AC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E1AC4
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800E1AC8
  c->r[11]=c->r[1]+0x00000028u; // 800E1ACC
  c->lr=0x800E1AD4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E1AD0
  c->r[24]=c->r[3]|c->r[3]; // 800E1AD4
  c->r[25]=c->r[4]|c->r[4]; // 800E1AD8
  c->r[26]=c->r[5]|c->r[5]; // 800E1ADC
  c->r[27]=c->r[6]|c->r[6]; // 800E1AE0
  c->f[31]=c->f[1]; // 800E1AE4
  c->r[28]=0u+0x00000000u; // 800E1AE8
  c->lr=0x800E1AF0u; f_800A23BC(c); // 800E1AEC
  c->lr=0x800E1AF4u; f_800C23E4(c); // 800E1AF0
  c->r[29]=c->r[3]|c->r[3]; // 800E1AF4
  cmps(c,0,(int32_t)c->r[27],0); // 800E1AF8
  if (!crb(c,2)) { goto L_800E1B10; } // 800E1AFC
  c->lr=0x800E1B04u; f_800A23BC(c); // 800E1B00
  c->r[4]=0u+0x00000000u; // 800E1B04
  c->lr=0x800E1B0Cu; f_800C23EC(c); // 800E1B08
  c->r[28]=0u+0x00000001u; // 800E1B0C
L_800E1B10:;
  c->lr=0x800E1B14u; f_800A23BC(c); // 800E1B10
  c->lr=0x800E1B18u; f_800BB828(c); // 800E1B14
  c->r[4]=c->r[25]|c->r[25]; // 800E1B18
  c->lr=0x800E1B20u; f_800BB9DC(c); // 800E1B1C
  c->r[30]=c->r[3]|c->r[3]; // 800E1B20
  cmps(c,0,(int32_t)c->r[3],0); // 800E1B24
  if (crb(c,2)) { goto L_800E1B58; } // 800E1B28
  c->lr=0x800E1B30u; f_800A23BC(c); // 800E1B2C
  c->lr=0x800E1B34u; f_800BB828(c); // 800E1B30
  c->r[4]=c->r[30]|c->r[30]; // 800E1B34
  c->lr=0x800E1B3Cu; f_800BB99C(c); // 800E1B38
  c->r[30]=c->r[3]|c->r[3]; // 800E1B3C
  cmps(c,0,(int32_t)c->r[28],0); // 800E1B40
  if (crb(c,2)) { goto L_800E1B50; } // 800E1B44
  c->r[4]=0u+0x00000000u; // 800E1B48
  c->lr=0x800E1B50u; f_800BE370(c); // 800E1B4C
L_800E1B50:;
  c->r[3]=c->r[30]|c->r[30]; // 800E1B50
  c->lr=0x800E1B58u; f_800E1640(c); // 800E1B54
L_800E1B58:;
  c->r[3]=c->r[24]|c->r[24]; // 800E1B58
  c->r[4]=0u+0x00000000u; // 800E1B5C
  c->lr=0x800E1B64u; f_800BE7F4(c); // 800E1B60
  c->r[31]=c->r[3]|c->r[3]; // 800E1B64
  cmps(c,0,(int32_t)c->r[3],0); // 800E1B68
  if (crb(c,2)) { goto L_800E1BC8; } // 800E1B6C
  c->r[3]=c->r[24]|c->r[24]; // 800E1B70
  c->r[4]=c->r[31]|c->r[31]; // 800E1B74
  c->lr=0x800E1B7Cu; f_800BB99C(c); // 800E1B78
  c->r[30]=c->r[3]|c->r[3]; // 800E1B7C
  cmps(c,0,(int32_t)c->r[3],0); // 800E1B80
  if (crb(c,2)) { goto L_800E1BC8; } // 800E1B84
  c->r[4]=c->r[26]|c->r[26]; // 800E1B88
  c->r[5]=c->r[27]|c->r[27]; // 800E1B8C
  c->f[1]=c->f[31]; // 800E1B90
  c->lr=0x800E1B98u; f_800E15CC(c); // 800E1B94
  cmps(c,0,(int32_t)c->r[30],0); // 800E1B98
  if (crb(c,2)) { goto L_800E1BC8; } // 800E1B9C
  cmps(c,0,(int32_t)c->r[28],0); // 800E1BA0
  if (crb(c,2)) { goto L_800E1BB4; } // 800E1BA4
  c->r[3]=c->r[30]|c->r[30]; // 800E1BA8
  c->r[4]=0u+0x00000001u; // 800E1BAC
  c->lr=0x800E1BB4u; f_800BE370(c); // 800E1BB0
L_800E1BB4:;
  cmps(c,0,(int32_t)c->r[25],0); // 800E1BB4
  if (crb(c,2)) { goto L_800E1BC8; } // 800E1BB8
  c->r[3]=c->r[30]|c->r[30]; // 800E1BBC
  c->r[4]=c->r[25]|c->r[25]; // 800E1BC0
  c->lr=0x800E1BC8u; f_800BDE70(c); // 800E1BC4
L_800E1BC8:;
  c->lr=0x800E1BCCu; f_800A23BC(c); // 800E1BC8
  c->r[4]=c->r[29]|c->r[29]; // 800E1BCC
  c->lr=0x800E1BD4u; f_800C23EC(c); // 800E1BD0
  c->r[3]=c->r[31]|c->r[31]; // 800E1BD4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800E1BD8
  c->r[11]=c->r[1]+0x00000028u; // 800E1BDC
  c->lr=0x800E1BE4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E1BE0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E1BE4
  c->lr=c->r[0]; // 800E1BE8
  c->r[1]=c->r[1]+0x00000030u; // 800E1BEC
  return; // 800E1BF0
}

// fn_800E1BF4
void f_800E1BF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1BF4
  c->r[0]=c->lr; // 800E1BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1C00
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1C04
  c->r[30]=c->r[3]|c->r[3]; // 800E1C08
  c->r[31]=c->r[4]|c->r[4]; // 800E1C0C
  c->lr=0x800E1C14u; f_800BB99C(c); // 800E1C10
  cmps(c,0,(int32_t)c->r[3],0); // 800E1C14
  if (crb(c,2)) { goto L_800E1C28; } // 800E1C18
  c->r[3]=c->r[30]|c->r[30]; // 800E1C1C
  c->r[4]=c->r[31]|c->r[31]; // 800E1C20
  c->lr=0x800E1C28u; f_800BE8C0(c); // 800E1C24
L_800E1C28:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1C28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1C30
  c->lr=c->r[0]; // 800E1C34
  c->r[1]=c->r[1]+0x00000010u; // 800E1C38
  return; // 800E1C3C
}

// fn_800E1C40
void f_800E1C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1C40
  c->r[0]=c->lr; // 800E1C44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E1C48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E1C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E1C50
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E1C54
  c->r[29]=c->r[3]|c->r[3]; // 800E1C58
  c->r[3]=c->r[3]+0x0000002Cu; // 800E1C5C
  c->lr=0x800E1C64u; f_800BB910(c); // 800E1C60
  c->r[3]=c->r[29]+0x0000002Cu; // 800E1C64
  c->lr=0x800E1C6Cu; f_800BB904(c); // 800E1C68
  cmps(c,0,(int32_t)c->r[3],1); // 800E1C6C
  if (crb(c,2)) { goto L_800E1CA8; } // 800E1C70
  if (!crb(c,0)) { goto L_800E1C84; } // 800E1C74
  cmps(c,0,(int32_t)c->r[3],0); // 800E1C78
  if (!crb(c,0)) { goto L_800E1C90; } // 800E1C7C
  goto L_800E1D34; // 800E1C80
L_800E1C84:;
  cmps(c,0,(int32_t)c->r[3],3); // 800E1C84
  if (!crb(c,0)) { goto L_800E1D34; } // 800E1C88
  goto L_800E1CD4; // 800E1C8C
L_800E1C90:;
  c->r[0]=R32(c->r[29]+0x00000058u); // 800E1C90
  cmps(c,0,(int32_t)c->r[0],0); // 800E1C94
  if (crb(c,2)) { goto L_800E1D34; } // 800E1C98
  c->r[3]=c->r[29]+0x0000002Cu; // 800E1C9C
  c->r[4]=0u+0x00000001u; // 800E1CA0
  c->lr=0x800E1CA8u; f_800BB8E4(c); // 800E1CA4
L_800E1CA8:;
  c->lr=0x800E1CACu; f_8006592C(c); // 800E1CA8
  c->r[4]=R32(c->r[29]+0x00000038u); // 800E1CAC
  c->r[5]=0u+0xFFFFFFFFu; // 800E1CB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E1CB4
  c->lr=0x800E1CBCu; f_80048BF8(c); // 800E1CB8
  cmps(c,0,(int32_t)c->r[3],0); // 800E1CBC
  if (crb(c,2)) { goto L_800E1D34; } // 800E1CC0
  c->r[3]=c->r[29]+0x0000002Cu; // 800E1CC4
  c->r[4]=0u+0x00000002u; // 800E1CC8
  c->lr=0x800E1CD0u; f_800BB8E4(c); // 800E1CCC
  goto L_800E1D34; // 800E1CD0
L_800E1CD4:;
  c->lr=0x800E1CD8u; f_8006592C(c); // 800E1CD4
  c->r[4]=0u+0x00000004u; // 800E1CD8
  c->lr=0x800E1CE0u; f_80048D00(c); // 800E1CDC
  cmps(c,0,(int32_t)c->r[3],0); // 800E1CE0
  if (crb(c,2)) { goto L_800E1D34; } // 800E1CE4
  c->lr=0x800E1CECu; f_8006592C(c); // 800E1CE8
  c->lr=0x800E1CF0u; f_80048E0C(c); // 800E1CEC
  W32(c->r[29]+0x0000005Cu,c->r[3]); // 800E1CF0
  c->r[5]=R32(c->r[29]+0x00000058u); // 800E1CF4
  cmpu(c,0,c->r[5],0x00000001u); // 800E1CF8
  if (!crb(c,1)) { goto L_800E1D14; } // 800E1CFC
  c->r[3]=c->r[29]+0x00000038u; // 800E1D00
  c->r[4]=c->r[29]+0x0000003Cu; // 800E1D04
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800E1D08
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E1D0C
  c->lr=0x800E1D14u; f_802E53B8(c); // 800E1D10
L_800E1D14:;
  c->r[3]=R32(c->r[29]+0x00000058u); // 800E1D14
  cmps(c,0,(int32_t)c->r[3],0); // 800E1D18
  if (crb(c,2)) { goto L_800E1D28; } // 800E1D1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800E1D20
  W32(c->r[29]+0x00000058u,c->r[0]); // 800E1D24
L_800E1D28:;
  c->r[3]=c->r[29]+0x0000002Cu; // 800E1D28
  c->r[4]=0u+0x00000000u; // 800E1D2C
  c->lr=0x800E1D34u; f_800BB8E4(c); // 800E1D30
L_800E1D34:;
  c->r[3]=c->r[29]|c->r[29]; // 800E1D34
  c->lr=0x800E1D3Cu; f_800BEA14(c); // 800E1D38
  c->r[30]=c->r[3]|c->r[3]; // 800E1D3C
  goto L_800E1D6C; // 800E1D40
L_800E1D44:;
  c->r[3]=c->r[29]|c->r[29]; // 800E1D44
  c->r[4]=c->r[30]|c->r[30]; // 800E1D48
  c->lr=0x800E1D50u; f_800BB99C(c); // 800E1D4C
  c->r[31]=c->r[3]|c->r[3]; // 800E1D50
  c->r[3]=c->r[29]|c->r[29]; // 800E1D54
  c->r[4]=c->r[30]|c->r[30]; // 800E1D58
  c->lr=0x800E1D60u; f_800BEA4C(c); // 800E1D5C
  c->r[30]=c->r[3]|c->r[3]; // 800E1D60
  c->r[3]=c->r[31]|c->r[31]; // 800E1D64
  c->lr=0x800E1D6Cu; f_800E16A4(c); // 800E1D68
L_800E1D6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800E1D6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800E1D44; } // 800E1D70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E1D74
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E1D78
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E1D7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E1D80
  c->lr=c->r[0]; // 800E1D84
  c->r[1]=c->r[1]+0x00000020u; // 800E1D88
  return; // 800E1D8C
}

// fn_800E1D90
void f_800E1D90(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800E1D90
  W32(c->r[3]+0x00000060u,c->r[0]); // 800E1D94
  return; // 800E1D98
}

// fn_800E1D9C
void f_800E1D9C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800E1D9C
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800E1DA0
  c->r[0]=R32(c->r[3]+0x00000058u); // 800E1DA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E1DA8
  c->r[5]=c->r[3]+c->r[0]; // 800E1DAC
  W32(c->r[5]+0x00000038u,c->r[4]); // 800E1DB0
  c->r[4]=R32(c->r[3]+0x00000058u); // 800E1DB4
  c->r[0]=c->r[4]+0x00000001u; // 800E1DB8
  W32(c->r[3]+0x00000058u,c->r[0]); // 800E1DBC
  return; // 800E1DC0
}

// fn_800E1DC4
void f_800E1DC4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000058u); // 800E1DC4
  c->r[0]=cntlz(c->r[0]); // 800E1DC8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E1DCC
  return; // 800E1DD0
}

// fn_800E1DD4
void f_800E1DD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1DD4
  c->r[0]=c->lr; // 800E1DD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1DDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1DE0
  c->r[31]=c->r[4]|c->r[4]; // 800E1DE4
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 800E1DE8
  cmps(c,0,(int32_t)c->r[0],0); // 800E1DEC
  if (!crb(c,2)) { goto L_800E1E00; } // 800E1DF0
  c->lr=0x800E1DF8u; f_8006592C(c); // 800E1DF4
  c->r[4]=c->r[31]|c->r[31]; // 800E1DF8
  c->lr=0x800E1E00u; f_80048E5C(c); // 800E1DFC
L_800E1E00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1E04
  c->lr=c->r[0]; // 800E1E08
  c->r[1]=c->r[1]+0x00000010u; // 800E1E0C
  return; // 800E1E10
}

// fn_800E1E14
void f_800E1E14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E14
  c->r[0]=c->lr; // 800E1E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1E20
  c->r[31]=c->r[4]|c->r[4]; // 800E1E24
  c->lr=0x800E1E2Cu; f_8006592C(c); // 800E1E28
  c->r[4]=c->r[31]|c->r[31]; // 800E1E2C
  c->lr=0x800E1E34u; f_80048E5C(c); // 800E1E30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1E34
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1E38
  c->lr=c->r[0]; // 800E1E3C
  c->r[1]=c->r[1]+0x00000010u; // 800E1E40
  return; // 800E1E44
}

// fn_800E1E48
void f_800E1E48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E48
  c->r[0]=c->lr; // 800E1E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1E50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1E54
  c->r[31]=c->r[3]|c->r[3]; // 800E1E58
  c->r[4]=0u+0x80460000u; // 800E1E5C
  c->r[0]=c->r[4]+0x000009E8u; // 800E1E60
  W32(c->r[3]+0x00000868u,c->r[0]); // 800E1E64
  c->r[3]=c->r[3]+0x00000004u; // 800E1E68
  c->lr=0x800E1E70u; f_800BB894(c); // 800E1E6C
  c->r[3]=c->r[31]+0x00000010u; // 800E1E70
  c->lr=0x800E1E78u; f_801F3A28(c); // 800E1E74
  c->r[3]=c->r[31]|c->r[31]; // 800E1E78
  c->lr=0x800E1E80u; f_800E1F28(c); // 800E1E7C
  c->r[3]=c->r[31]|c->r[31]; // 800E1E80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1E88
  c->lr=c->r[0]; // 800E1E8C
  c->r[1]=c->r[1]+0x00000010u; // 800E1E90
  return; // 800E1E94
}

// dtor_800E1E98
void f_800E1E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1E98
  c->r[0]=c->lr; // 800E1E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1EA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1EA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E1EA8
  c->r[30]=c->r[3]|c->r[3]; // 800E1EAC
  c->r[31]=c->r[4]|c->r[4]; // 800E1EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800E1EB4
  if (crb(c,2)) { goto L_800E1F0C; } // 800E1EB8
  c->r[4]=0u+0x80460000u; // 800E1EBC
  c->r[0]=c->r[4]+0x000009E8u; // 800E1EC0
  W32(c->r[3]+0x00000868u,c->r[0]); // 800E1EC4
  c->r[3]=c->r[3]+0x00000010u; // 800E1EC8
  c->lr=0x800E1ED0u; f_801F3F18(c); // 800E1ECC
  cmps(c,0,(int32_t)c->r[3],0); // 800E1ED0
  if (crb(c,2)) { goto L_800E1EE0; } // 800E1ED4
  c->r[3]=c->r[30]+0x00000010u; // 800E1ED8
  c->lr=0x800E1EE0u; f_801F3BE4(c); // 800E1EDC
L_800E1EE0:;
  c->r[3]=c->r[30]+0x00000010u; // 800E1EE0
  c->r[4]=0u+0xFFFFFFFFu; // 800E1EE4
  c->lr=0x800E1EECu; f_801F3AB8(c); // 800E1EE8
  c->r[3]=c->r[30]+0x00000004u; // 800E1EEC
  c->r[4]=0u+0xFFFFFFFFu; // 800E1EF0
  c->lr=0x800E1EF8u; f_800BB850(c); // 800E1EF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800E1EF8
  cmps(c,0,(int32_t)c->r[0],0); // 800E1EFC
  if (!crb(c,1)) { goto L_800E1F0C; } // 800E1F00
  c->r[3]=c->r[30]|c->r[30]; // 800E1F04
  c->lr=0x800E1F0Cu; f_80047B20(c); // 800E1F08
L_800E1F0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E1F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1F10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E1F14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1F18
  c->lr=c->r[0]; // 800E1F1C
  c->r[1]=c->r[1]+0x00000010u; // 800E1F20
  return; // 800E1F24
}

// fn_800E1F28
void f_800E1F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1F28
  c->r[0]=c->lr; // 800E1F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1F30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1F34
  c->r[31]=c->r[3]|c->r[3]; // 800E1F38
  c->r[3]=c->r[3]+0x00000004u; // 800E1F3C
  c->lr=0x800E1F44u; f_800BB8D0(c); // 800E1F40
  c->r[3]=c->r[31]+0x00000848u; // 800E1F44
  c->r[4]=0u+0x00000000u; // 800E1F48
  c->r[5]=0u+0x00000020u; // 800E1F4C
  c->lr=0x800E1F54u; f_800060B8(c); // 800E1F50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1F58
  c->lr=c->r[0]; // 800E1F5C
  c->r[1]=c->r[1]+0x00000010u; // 800E1F60
  return; // 800E1F64
}

// fn_800E1F68
void f_800E1F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1F68
  c->r[0]=c->lr; // 800E1F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1F70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1F74
  c->r[31]=c->r[3]|c->r[3]; // 800E1F78
  c->r[3]=c->r[3]+0x00000848u; // 800E1F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E1F80
  c->lr=0x800E1F88u; f_802E7CC4(c); // 800E1F84
  c->r[3]=c->r[31]+0x00000004u; // 800E1F88
  c->r[4]=0u+0x00000001u; // 800E1F8C
  c->lr=0x800E1F94u; f_800BB8E4(c); // 800E1F90
  c->r[3]=c->r[31]+0x00000004u; // 800E1F94
  c->lr=0x800E1F9Cu; f_800BB910(c); // 800E1F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1FA0
  c->lr=c->r[0]; // 800E1FA4
  c->r[1]=c->r[1]+0x00000010u; // 800E1FA8
  return; // 800E1FAC
}

// fn_800E1FB0
void f_800E1FB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E1FB0
  c->r[0]=c->lr; // 800E1FB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E1FB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E1FBC
  c->r[31]=c->r[3]|c->r[3]; // 800E1FC0
  c->r[3]=c->r[3]+0x00000004u; // 800E1FC4
  c->lr=0x800E1FCCu; f_800BB904(c); // 800E1FC8
  cmpu(c,0,c->r[3],0x00000003u); // 800E1FCC
  if (!crb(c,2)) { goto L_800E1FF4; } // 800E1FD0
  c->r[3]=0u+0x00000000u; // 800E1FD4
  c->r[4]=0u+0x00000000u; // 800E1FD8
  c->r[5]=0u+0x00000000u; // 800E1FDC
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E1FE0
  c->lr=0x800E1FE8u; f_800B8440(c); // 800E1FE4
  c->r[3]=c->r[31]+0x00000004u; // 800E1FE8
  c->r[4]=0u+0x00000004u; // 800E1FEC
  c->lr=0x800E1FF4u; f_800BB8E4(c); // 800E1FF0
L_800E1FF4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E1FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E1FF8
  c->lr=c->r[0]; // 800E1FFC
  c->r[1]=c->r[1]+0x00000010u; // 800E2000
  return; // 800E2004
}

// fn_800E2008
void f_800E2008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2008
  c->r[0]=c->lr; // 800E200C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2010
  c->r[3]=c->r[3]+0x00000004u; // 800E2014
  c->lr=0x800E201Cu; f_800BB904(c); // 800E2018
  c->r[0]=cntlz(c->r[3]); // 800E201C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2020
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2024
  c->lr=c->r[0]; // 800E2028
  c->r[1]=c->r[1]+0x00000010u; // 800E202C
  return; // 800E2030
}

// fn_800E2034
void f_800E2034(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2034
  c->r[0]=c->lr; // 800E2038
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E203C
  c->r[3]=c->r[3]+0x00000004u; // 800E2040
  c->lr=0x800E2048u; f_800BB904(c); // 800E2044
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800E2048
  c->r[0]=cntlz(c->r[0]); // 800E204C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E2050
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2054
  c->lr=c->r[0]; // 800E2058
  c->r[1]=c->r[1]+0x00000010u; // 800E205C
  return; // 800E2060
}

// fn_800E2064
void f_800E2064(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2064
  c->r[0]=c->lr; // 800E2068
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E206C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2070
  c->r[31]=c->r[3]|c->r[3]; // 800E2074
  c->r[3]=c->r[3]+0x00000004u; // 800E2078
  c->lr=0x800E2080u; f_800BB910(c); // 800E207C
  c->r[3]=c->r[31]+0x00000004u; // 800E2080
  c->lr=0x800E2088u; f_800BB904(c); // 800E2084
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 800E2088
  c->r[3]=0u+0x80460000u; // 800E208C
  c->r[0]=c->r[3]+0x00000968u; // 800E2090
  c->r[12]=c->r[0]+c->r[4]; // 800E2094
  c->r[3]=c->r[31]|c->r[31]; // 800E2098
  c->lr=0x800E20A0u; f_802F09D0(c); // 800E209C
  c->r[0]=c->r[0]|0x00000000u; // 800E20A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E20A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E20A8
  c->lr=c->r[0]; // 800E20AC
  c->r[1]=c->r[1]+0x00000010u; // 800E20B0
  return; // 800E20B4
}

// fn_800E20B8
void f_800E20B8(Ctx* __restrict c) {
  return; // 800E20B8
}

// fn_800E20BC
void f_800E20BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E20BC
  c->r[0]=c->lr; // 800E20C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E20C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E20C8
  c->r[31]=c->r[3]|c->r[3]; // 800E20CC
  c->r[3]=c->r[3]+0x00000010u; // 800E20D0
  c->lr=0x800E20D8u; f_801F3F18(c); // 800E20D4
  cmps(c,0,(int32_t)c->r[3],0); // 800E20D8
  if (!crb(c,2)) { goto L_800E2100; } // 800E20DC
  c->r[3]=c->r[31]+0x00000010u; // 800E20E0
  c->r[4]=0u+0x00000280u; // 800E20E4
  c->r[5]=0u+0x000001E0u; // 800E20E8
  c->r[6]=0u+0x00000001u; // 800E20EC
  c->r[7]=0u+0x00000000u; // 800E20F0
  c->r[8]=0u+0x00000002u; // 800E20F4
  c->r[9]=0u+0x00000000u; // 800E20F8
  c->lr=0x800E2100u; f_801F3BD0(c); // 800E20FC
L_800E2100:;
  c->r[3]=c->r[31]+0x00000004u; // 800E2100
  c->r[4]=0u+0x00000002u; // 800E2104
  c->lr=0x800E210Cu; f_800BB8E4(c); // 800E2108
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E210C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2110
  c->lr=c->r[0]; // 800E2114
  c->r[1]=c->r[1]+0x00000010u; // 800E2118
  return; // 800E211C
}

// fn_800E2120
void f_800E2120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2120
  c->r[0]=c->lr; // 800E2124
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E212C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E2130
  c->r[30]=c->r[3]|c->r[3]; // 800E2134
  c->r[3]=c->r[3]+0x00000004u; // 800E2138
  c->lr=0x800E2140u; f_800BB8EC(c); // 800E213C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2140
  if (crb(c,2)) { goto L_800E2188; } // 800E2144
  c->r[31]=0u+0x804C0000u; // 800E2148
  c->r[3]=c->r[31]+0x00002650u; // 800E214C
  c->r[4]=0u+0x80460000u; // 800E2150
  c->r[4]=c->r[4]+0x000009A8u; // 800E2154
  c->r[5]=c->r[30]+0x00000848u; // 800E2158
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800E215C
  c->lr=0x800E2164u; f_802E7CC4(c); // 800E2160
  c->r[3]=c->r[30]+0x00000010u; // 800E2164
  c->r[4]=c->r[31]+0x00002650u; // 800E2168
  c->r[5]=0u+0x00000000u; // 800E216C
  c->r[6]=0u+0x00000001u; // 800E2170
  c->r[7]=0u+0x00000000u; // 800E2174
  c->r[8]=0u+0x0000003Cu; // 800E2178
  c->r[9]=0u+0x000000C8u; // 800E217C
  c->lr=0x800E2184u; f_801F3F1C(c); // 800E2180
  goto L_800E21AC; // 800E2184
L_800E2188:;
  c->r[3]=c->r[30]+0x00000010u; // 800E2188
  c->lr=0x800E2190u; f_801F3F14(c); // 800E218C
  cmps(c,0,(int32_t)c->r[3],2); // 800E2190
  if (!crb(c,2)) { goto L_800E21AC; } // 800E2194
  c->r[0]=0u+0x00000000u; // 800E2198
  W32(c->r[30]+0x00000000u,c->r[0]); // 800E219C
  c->r[3]=c->r[30]+0x00000004u; // 800E21A0
  c->r[4]=0u+0x00000003u; // 800E21A4
  c->lr=0x800E21ACu; f_800BB8E4(c); // 800E21A8
L_800E21AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E21AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E21B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E21B4
  c->lr=c->r[0]; // 800E21B8
  c->r[1]=c->r[1]+0x00000010u; // 800E21BC
  return; // 800E21C0
}

// fn_800E21C4
void f_800E21C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E21C4
  c->r[0]=c->lr; // 800E21C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E21CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E21D0
  c->r[31]=c->r[3]|c->r[3]; // 800E21D4
  c->r[3]=c->r[3]+0x00000010u; // 800E21D8
  c->lr=0x800E21E0u; f_801F3F14(c); // 800E21DC
  cmps(c,0,(int32_t)c->r[3],2); // 800E21E0
  if (crb(c,2)) { goto L_800E2224; } // 800E21E4
  if (!crb(c,0)) { goto L_800E21F8; } // 800E21E8
  cmps(c,0,(int32_t)c->r[3],0); // 800E21EC
  if (crb(c,2)) { goto L_800E2200; } // 800E21F0
  goto L_800E22BC; // 800E21F4
L_800E21F8:;
  cmps(c,0,(int32_t)c->r[3],5); // 800E21F8
  if (!crb(c,0)) { goto L_800E22BC; } // 800E21FC
L_800E2200:;
  c->r[3]=0u+0x00000000u; // 800E2200
  c->r[4]=0u+0x00000000u; // 800E2204
  c->r[5]=0u+0x00000000u; // 800E2208
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E220C
  c->lr=0x800E2214u; f_800B8440(c); // 800E2210
  c->r[3]=c->r[31]+0x00000004u; // 800E2214
  c->r[4]=0u+0x00000004u; // 800E2218
  c->lr=0x800E2220u; f_800BB8E4(c); // 800E221C
  goto L_800E22BC; // 800E2220
L_800E2224:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E2224
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800E2228
  cmps(c,0,(int32_t)c->r[0],0); // 800E222C
  if (!crb(c,2)) { goto L_800E2264; } // 800E2230
  c->lr=0x800E2238u; f_800A23BC(c); // 800E2234
  c->lr=0x800E223Cu; f_800A23C4(c); // 800E2238
  c->lr=0x800E2240u; f_800D8164(c); // 800E223C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2240
  if (crb(c,2)) { goto L_800E22BC; } // 800E2244
  c->r[3]=0u+0x000001A7u; // 800E2248
  c->lr=0x800E2250u; f_8026C63C(c); // 800E224C
  c->lr=0x800E2254u; f_8026C5AC(c); // 800E2250
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E2254
  c->r[0]=c->r[0]|0x00000001u; // 800E2258
  W32(c->r[31]+0x00000000u,c->r[0]); // 800E225C
  goto L_800E22BC; // 800E2260
L_800E2264:;
  c->lr=0x800E2268u; f_8026C610(c); // 800E2264
  cmps(c,0,(int32_t)c->r[3],0); // 800E2268
  if (crb(c,2)) { goto L_800E2284; } // 800E226C
  c->r[0]=R32(c->r[31]+0x00000000u); // 800E2270
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800E2274
  W32(c->r[31]+0x00000000u,c->r[0]); // 800E2278
  c->lr=0x800E2280u; f_8026C5E4(c); // 800E227C
  goto L_800E22BC; // 800E2280
L_800E2284:;
  c->lr=0x800E2288u; f_800A23BC(c); // 800E2284
  c->lr=0x800E228Cu; f_800A23C4(c); // 800E2288
  c->lr=0x800E2290u; f_800D8164(c); // 800E228C
  cmps(c,0,(int32_t)c->r[3],0); // 800E2290
  if (crb(c,2)) { goto L_800E22BC; } // 800E2294
  c->r[3]=0u+0x00000000u; // 800E2298
  c->r[4]=0u+0x00000000u; // 800E229C
  c->r[5]=0u+0x00000000u; // 800E22A0
  {uint32_t ea=c->r[2]+0xFFFF881Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E22A4
  c->lr=0x800E22ACu; f_800B8440(c); // 800E22A8
  c->lr=0x800E22B0u; f_8026C5E4(c); // 800E22AC
  c->r[3]=c->r[31]+0x00000004u; // 800E22B0
  c->r[4]=0u+0x00000004u; // 800E22B4
  c->lr=0x800E22BCu; f_800BB8E4(c); // 800E22B8
L_800E22BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E22BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E22C0
  c->lr=c->r[0]; // 800E22C4
  c->r[1]=c->r[1]+0x00000010u; // 800E22C8
  return; // 800E22CC
}

// fn_800E22D0
void f_800E22D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E22D0
  c->r[0]=c->lr; // 800E22D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E22D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E22DC
  c->r[31]=c->r[3]|c->r[3]; // 800E22E0
  c->lr=0x800E22E8u; f_800B8578(c); // 800E22E4
  cmps(c,0,(int32_t)c->r[3],0); // 800E22E8
  if (crb(c,2)) { goto L_800E2314; } // 800E22EC
  c->r[3]=c->r[31]+0x00000010u; // 800E22F0
  c->lr=0x800E22F8u; f_801F3F18(c); // 800E22F4
  cmps(c,0,(int32_t)c->r[3],0); // 800E22F8
  if (crb(c,2)) { goto L_800E2308; } // 800E22FC
  c->r[3]=c->r[31]+0x00000010u; // 800E2300
  c->lr=0x800E2308u; f_801F3BE4(c); // 800E2304
L_800E2308:;
  c->r[3]=c->r[31]+0x00000004u; // 800E2308
  c->r[4]=0u+0x00000000u; // 800E230C
  c->lr=0x800E2314u; f_800BB8E4(c); // 800E2310
L_800E2314:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2314
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2318
  c->lr=c->r[0]; // 800E231C
  c->r[1]=c->r[1]+0x00000010u; // 800E2320
  return; // 800E2324
}

// fn_800E2328
void f_800E2328(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00004F94u); // 800E2328
  return; // 800E232C
}

// fn_800E2330
void f_800E2330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2330
  c->r[0]=c->lr; // 800E2334
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2338
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E233C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E2340
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E2344
  c->r[31]=c->r[3]|c->r[3]; // 800E2348
  c->r[3]=c->r[3]+0x0000507Cu; // 800E234C
  c->r[4]=0u+0x00000003u; // 800E2350
  c->r[5]=0u+0x00000001u; // 800E2354
  c->r[6]=0u+0x00000000u; // 800E2358
  c->r[7]=0u+0x00000000u; // 800E235C
  c->r[8]=0u+0x00000000u; // 800E2360
  c->lr=0x800E2368u; f_8004CFB0(c); // 800E2364
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2368
  c->r[4]=0u+0x00000001u; // 800E236C
  c->lr=0x800E2374u; f_8004D750(c); // 800E2370
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2374
  c->r[4]=0u+0x00000000u; // 800E2378
  c->r[5]=0u+0x00000001u; // 800E237C
  c->lr=0x800E2384u; f_8004D6F8(c); // 800E2380
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2384
  c->r[4]=0u+0x00000000u; // 800E2388
  c->lr=0x800E2390u; f_8004D73C(c); // 800E238C
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2390
  c->r[4]=0u+0x00000003u; // 800E2394
  c->lr=0x800E239Cu; f_8004D740(c); // 800E2398
  c->r[3]=c->r[1]+0x00000008u; // 800E239C
  c->lr=0x800E23A4u; f_8004B0A4(c); // 800E23A0
  {uint32_t ea=c->r[2]+0xFFFF885Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 800E23A4
  {uint32_t ea=c->r[2]+0xFFFF8934u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E23A8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800E23AC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800E23B0
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E23B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[3]);} // 800E23B8
  c->r[3]=c->r[31]+0x0000507Cu; // 800E23BC
  c->r[4]=0u+0x00000000u; // 800E23C0
  c->r[5]=0u+0x00000000u; // 800E23C4
  c->f[2]=c->f[1]; // 800E23C8
  c->lr=0x800E23D0u; f_8004D4AC(c); // 800E23CC
  c->r[3]=c->r[31]+0x0000507Cu; // 800E23D0
  c->r[4]=0u+0x00000000u; // 800E23D4
  c->r[5]=0u+0x00000000u; // 800E23D8
  c->r[6]=0u+0x00000000u; // 800E23DC
  c->r[7]=0u+0x00000000u; // 800E23E0
  c->r[8]=0u+0x00000000u; // 800E23E4
  c->r[9]=0u+0x000000FFu; // 800E23E8
  c->lr=0x800E23F0u; f_8004D5D8(c); // 800E23EC
  c->r[3]=c->r[31]+0x0000507Cu; // 800E23F0
  c->r[4]=0u+0x00000000u; // 800E23F4
  c->r[5]=0u+0x00000001u; // 800E23F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E23FC
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 800E2400
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800E2404
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E2408
  c->lr=0x800E2410u; f_8004D4AC(c); // 800E240C
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2410
  c->r[4]=0u+0x00000000u; // 800E2414
  c->r[5]=0u+0x00000001u; // 800E2418
  c->r[6]=0u+0x00000000u; // 800E241C
  c->r[7]=0u+0x00000000u; // 800E2420
  c->r[8]=0u+0x00000000u; // 800E2424
  c->r[9]=0u+0x000000FFu; // 800E2428
  c->lr=0x800E2430u; f_8004D5D8(c); // 800E242C
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2430
  c->r[4]=0u+0x00000000u; // 800E2434
  c->r[5]=0u+0x00000002u; // 800E2438
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E243C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[31]); // 800E2440
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2444
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[31]); // 800E2448
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E244C
  c->lr=0x800E2454u; f_8004D4AC(c); // 800E2450
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2454
  c->r[4]=0u+0x00000000u; // 800E2458
  c->r[5]=0u+0x00000002u; // 800E245C
  c->r[6]=0u+0x00000000u; // 800E2460
  c->r[7]=0u+0x00000000u; // 800E2464
  c->r[8]=0u+0x00000000u; // 800E2468
  c->r[9]=0u+0x000000FFu; // 800E246C
  c->lr=0x800E2474u; f_8004D5D8(c); // 800E2470
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2474
  c->r[4]=0u+0x00000000u; // 800E2478
  c->r[5]=0u+0x00000003u; // 800E247C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2480
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2484
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[31]); // 800E2488
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 800E248C
  c->lr=0x800E2494u; f_8004D4AC(c); // 800E2490
  c->r[3]=c->r[31]+0x0000507Cu; // 800E2494
  c->r[4]=0u+0x00000000u; // 800E2498
  c->r[5]=0u+0x00000003u; // 800E249C
  c->r[6]=0u+0x00000000u; // 800E24A0
  c->r[7]=0u+0x00000000u; // 800E24A4
  c->r[8]=0u+0x00000000u; // 800E24A8
  c->r[9]=0u+0x000000FFu; // 800E24AC
  c->lr=0x800E24B4u; f_8004D5D8(c); // 800E24B0
  c->r[0]=0u+0x00000000u; // 800E24B4
  W32(c->r[31]+0x00004F94u,c->r[0]); // 800E24B8
  c->r[0]=0u+0x00000028u; // 800E24BC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E24C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E24C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E24C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E24CC
  c->lr=c->r[0]; // 800E24D0
  c->r[1]=c->r[1]+0x00000030u; // 800E24D4
  return; // 800E24D8
}

// fn_800E24DC
void f_800E24DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E24DC
  c->r[0]=c->lr; // 800E24E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E24E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E24E8
  c->r[31]=c->r[3]|c->r[3]; // 800E24EC
  c->r[3]=c->r[3]+0x0000507Cu; // 800E24F0
  c->lr=0x800E24F8u; f_8004D19C(c); // 800E24F4
  c->r[0]=0u+0x00000000u; // 800E24F8
  W32(c->r[31]+0x00004F94u,c->r[0]); // 800E24FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2500
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2504
  c->lr=c->r[0]; // 800E2508
  c->r[1]=c->r[1]+0x00000010u; // 800E250C
  return; // 800E2510
}

// fn_800E2514
void f_800E2514(Ctx* __restrict c) {
  W32(c->r[3]+0x00004F94u,c->r[4]); // 800E2514
  c->r[3]=c->r[3]+0x0000507Cu; // 800E2518
  f_8004D73C(c); return; // 800E251C
}

// fn_800E2520
void f_800E2520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2520
  c->r[0]=c->lr; // 800E2524
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E252C
  c->r[31]=c->r[3]|c->r[3]; // 800E2530
  c->r[4]=0u+0x80460000u; // 800E2534
  c->r[0]=c->r[4]+0x000009DCu; // 800E2538
  W32(c->r[3]+0x0000525Cu,c->r[0]); // 800E253C
  c->lr=0x800E2544u; f_800CA2A8(c); // 800E2540
  c->r[3]=c->r[31]+0x000000E4u; // 800E2544
  c->lr=0x800E254Cu; f_800D3A70(c); // 800E2548
  c->r[3]=c->r[31]+0x00000210u; // 800E254C
  c->lr=0x800E2554u; f_800D3108(c); // 800E2550
  c->r[3]=c->r[31]+0x0000049Cu; // 800E2554
  c->lr=0x800E255Cu; f_800C2D80(c); // 800E2558
  c->r[3]=c->r[31]+0x000004F8u; // 800E255C
  c->lr=0x800E2564u; f_800C33F0(c); // 800E2560
  c->r[3]=c->r[31]+0x00000520u; // 800E2564
  c->lr=0x800E256Cu; f_800C95B0(c); // 800E2568
  c->r[3]=c->r[31]+0x00000960u; // 800E256C
  c->lr=0x800E2574u; f_800CAE04(c); // 800E2570
  c->r[3]=c->r[31]+0x0000098Cu; // 800E2574
  c->lr=0x800E257Cu; f_800CA6B8(c); // 800E2578
  c->r[3]=c->r[31]+0x000009B8u; // 800E257C
  c->lr=0x800E2584u; f_800CB460(c); // 800E2580
  c->r[3]=c->r[31]+0x00000A08u; // 800E2584
  c->lr=0x800E258Cu; f_800CA93C(c); // 800E2588
  c->r[3]=c->r[31]+0x00000D20u; // 800E258C
  c->lr=0x800E2594u; f_800E329C(c); // 800E2590
  c->r[3]=c->r[31]+0x00000D48u; // 800E2594
  c->lr=0x800E259Cu; f_800E31FC(c); // 800E2598
  c->r[3]=c->r[31]+0x00000D70u; // 800E259C
  c->lr=0x800E25A4u; f_800D0E4C(c); // 800E25A0
  c->r[3]=c->r[31]+0x00002698u; // 800E25A4
  c->lr=0x800E25ACu; f_800CF844(c); // 800E25A8
  c->r[3]=c->r[31]+0x000045DCu; // 800E25AC
  c->lr=0x800E25B4u; f_800E1968(c); // 800E25B0
  c->r[3]=c->r[31]+0x00004650u; // 800E25B4
  c->lr=0x800E25BCu; f_800E1E48(c); // 800E25B8
  c->r[3]=c->r[31]+0x00004ED4u; // 800E25BC
  c->lr=0x800E25C4u; f_800BB894(c); // 800E25C0
  c->r[3]=c->r[31]+0x00004F5Cu; // 800E25C4
  c->lr=0x800E25CCu; f_8004B0A4(c); // 800E25C8
  c->r[3]=c->r[31]+0x00004F68u; // 800E25CC
  c->lr=0x800E25D4u; f_8004B0A4(c); // 800E25D0
  c->r[3]=c->r[31]+0x0000507Cu; // 800E25D4
  c->lr=0x800E25DCu; f_8004CDFC(c); // 800E25D8
  c->r[3]=c->r[31]|c->r[31]; // 800E25DC
  c->lr=0x800E25E4u; f_800E2728(c); // 800E25E0
  c->r[3]=c->r[31]|c->r[31]; // 800E25E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E25E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E25EC
  c->lr=c->r[0]; // 800E25F0
  c->r[1]=c->r[1]+0x00000010u; // 800E25F4
  return; // 800E25F8
}

// dtor_800E25FC
void f_800E25FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E25FC
  c->r[0]=c->lr; // 800E2600
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2604
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2608
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E260C
  c->r[30]=c->r[3]|c->r[3]; // 800E2610
  c->r[31]=c->r[4]|c->r[4]; // 800E2614
  cmps(c,0,(int32_t)c->r[3],0); // 800E2618
  if (crb(c,2)) { goto L_800E270C; } // 800E261C
  c->r[3]=c->r[3]+0x0000507Cu; // 800E2620
  c->r[4]=0u+0xFFFFFFFFu; // 800E2624
  c->lr=0x800E262Cu; f_8004CE58(c); // 800E2628
  c->r[3]=c->r[30]+0x00004ED4u; // 800E262C
  c->r[4]=0u+0xFFFFFFFFu; // 800E2630
  c->lr=0x800E2638u; f_800BB850(c); // 800E2634
  c->r[3]=c->r[30]+0x00004650u; // 800E2638
  c->r[4]=0u+0xFFFFFFFFu; // 800E263C
  c->lr=0x800E2644u; f_800E1E98(c); // 800E2640
  c->r[3]=c->r[30]+0x000045DCu; // 800E2644
  c->r[4]=0u+0xFFFFFFFFu; // 800E2648
  c->lr=0x800E2650u; f_800CFAF0(c); // 800E264C
  c->r[3]=c->r[30]+0x00002698u; // 800E2650
  c->r[4]=0u+0xFFFFFFFFu; // 800E2654
  c->lr=0x800E265Cu; f_800CF73C(c); // 800E2658
  c->r[3]=c->r[30]+0x00000D70u; // 800E265C
  c->r[4]=0u+0xFFFFFFFFu; // 800E2660
  c->lr=0x800E2668u; f_800D0DF0(c); // 800E2664
  c->r[3]=c->r[30]+0x00000D48u; // 800E2668
  c->r[4]=0u+0xFFFFFFFFu; // 800E266C
  c->lr=0x800E2674u; f_800E31A0(c); // 800E2670
  c->r[3]=c->r[30]+0x00000D20u; // 800E2674
  c->r[4]=0u+0xFFFFFFFFu; // 800E2678
  c->lr=0x800E2680u; f_800E3240(c); // 800E267C
  c->r[3]=c->r[30]+0x00000A08u; // 800E2680
  c->r[4]=0u+0xFFFFFFFFu; // 800E2684
  c->lr=0x800E268Cu; f_800CA8D0(c); // 800E2688
  c->r[3]=c->r[30]+0x000009B8u; // 800E268C
  c->r[4]=0u+0xFFFFFFFFu; // 800E2690
  c->lr=0x800E2698u; f_800C2410(c); // 800E2694
  c->r[3]=c->r[30]+0x0000098Cu; // 800E2698
  c->r[4]=0u+0xFFFFFFFFu; // 800E269C
  c->lr=0x800E26A4u; f_800CA65C(c); // 800E26A0
  c->r[3]=c->r[30]+0x00000960u; // 800E26A4
  c->r[4]=0u+0xFFFFFFFFu; // 800E26A8
  c->lr=0x800E26B0u; f_800CB118(c); // 800E26AC
  c->r[3]=c->r[30]+0x00000520u; // 800E26B0
  c->r[4]=0u+0xFFFFFFFFu; // 800E26B4
  c->lr=0x800E26BCu; f_800CA020(c); // 800E26B8
  c->r[3]=c->r[30]+0x000004F8u; // 800E26BC
  c->r[4]=0u+0xFFFFFFFFu; // 800E26C0
  c->lr=0x800E26C8u; f_800C3394(c); // 800E26C4
  c->r[3]=c->r[30]+0x0000049Cu; // 800E26C8
  c->r[4]=0u+0xFFFFFFFFu; // 800E26CC
  c->lr=0x800E26D4u; f_800C2D24(c); // 800E26D0
  c->r[3]=c->r[30]+0x00000210u; // 800E26D4
  c->r[4]=0u+0xFFFFFFFFu; // 800E26D8
  c->lr=0x800E26E0u; f_800D3144(c); // 800E26DC
  c->r[3]=c->r[30]+0x000000E4u; // 800E26E0
  c->r[4]=0u+0xFFFFFFFFu; // 800E26E4
  c->lr=0x800E26ECu; f_800D3B84(c); // 800E26E8
  c->r[3]=c->r[30]|c->r[30]; // 800E26EC
  c->r[4]=0u+0xFFFFFFFFu; // 800E26F0
  c->lr=0x800E26F8u; f_800CA24C(c); // 800E26F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800E26F8
  cmps(c,0,(int32_t)c->r[0],0); // 800E26FC
  if (!crb(c,1)) { goto L_800E270C; } // 800E2700
  c->r[3]=c->r[30]|c->r[30]; // 800E2704
  c->lr=0x800E270Cu; f_80047B20(c); // 800E2708
L_800E270C:;
  c->r[3]=c->r[30]|c->r[30]; // 800E270C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2710
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E2714
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2718
  c->lr=c->r[0]; // 800E271C
  c->r[1]=c->r[1]+0x00000010u; // 800E2720
  return; // 800E2724
}

// fn_800E2728
void f_800E2728(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 800E2728
  W32(c->r[3]+0x00004EC4u,c->r[0]); // 800E272C
  W32(c->r[3]+0x00004EC0u,c->r[0]); // 800E2730
  W32(c->r[3]+0x00004EE4u,c->r[0]); // 800E2734
  W32(c->r[3]+0x00004EE8u,c->r[0]); // 800E2738
  W32(c->r[3]+0x00004F58u,c->r[0]); // 800E273C
  W32(c->r[3]+0x00004F74u,c->r[0]); // 800E2740
  W32(c->r[3]+0x00004F78u,c->r[0]); // 800E2744
  W32(c->r[3]+0x00004F7Cu,c->r[0]); // 800E2748
  W32(c->r[3]+0x00004F80u,c->r[0]); // 800E274C
  W32(c->r[3]+0x00004F8Cu,c->r[0]); // 800E2750
  W32(c->r[3]+0x00004F94u,c->r[0]); // 800E2754
  W32(c->r[3]+0x00004F98u,c->r[0]); // 800E2758
  W32(c->r[3]+0x00004ECCu,c->r[0]); // 800E275C
  W32(c->r[3]+0x00004ED0u,c->r[0]); // 800E2760
  W32(c->r[3]+0x0000505Cu,c->r[0]); // 800E2764
  W32(c->r[3]+0x0000506Cu,c->r[0]); // 800E2768
  W32(c->r[3]+0x00005060u,c->r[0]); // 800E276C
  W32(c->r[3]+0x00005070u,c->r[0]); // 800E2770
  W32(c->r[3]+0x00005064u,c->r[0]); // 800E2774
  W32(c->r[3]+0x00005074u,c->r[0]); // 800E2778
  W32(c->r[3]+0x00005068u,c->r[0]); // 800E277C
  W32(c->r[3]+0x00005078u,c->r[0]); // 800E2780
  c->r[0]=0u+0xFFFFFFFFu; // 800E2784
  W32(c->r[3]+0x00004EECu,c->r[0]); // 800E2788
  W32(c->r[3]+0x00004EF0u,c->r[0]); // 800E278C
  W32(c->r[3]+0x00004EF4u,c->r[0]); // 800E2790
  W32(c->r[3]+0x00004EF8u,c->r[0]); // 800E2794
  W32(c->r[3]+0x00004EFCu,c->r[0]); // 800E2798
  W32(c->r[3]+0x00004F00u,c->r[0]); // 800E279C
  W32(c->r[3]+0x00004F04u,c->r[0]); // 800E27A0
  W32(c->r[3]+0x00004F08u,c->r[0]); // 800E27A4
  W32(c->r[3]+0x00004F0Cu,c->r[0]); // 800E27A8
  W32(c->r[3]+0x00004F10u,c->r[0]); // 800E27AC
  c->r[0]=0u+0x00000400u; // 800E27B0
  W32(c->r[3]+0x00004F14u,c->r[0]); // 800E27B4
  c->r[3]=c->r[3]+0x00004F18u; // 800E27B8
  c->r[4]=0u+0x00000000u; // 800E27BC
  c->r[5]=0u+0x00000040u; // 800E27C0
  f_800060B8(c); return; // 800E27C4
}

// fn_800E27C8
void f_800E27C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E27C8
  c->r[0]=c->lr; // 800E27CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E27D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E27D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E27D8
  c->r[30]=c->r[3]|c->r[3]; // 800E27DC
  c->r[31]=c->r[4]|c->r[4]; // 800E27E0
  c->r[0]=R32(c->r[13]+0xFFFFB9E4u); // 800E27E4
  cmps(c,0,(int32_t)c->r[0],0); // 800E27E8
  if (!crb(c,2)) { goto L_800E2920; } // 800E27EC
  W32(c->r[13]+0xFFFFB9E4u,c->r[3]); // 800E27F0
  W32(c->r[13]+0xFFFFB9E0u,c->r[4]); // 800E27F4
  c->lr=0x800E27FCu; f_800E2330(c); // 800E27F8
  c->r[3]=c->r[30]|c->r[30]; // 800E27FC
  c->lr=0x800E2804u; f_800D8540(c); // 800E2800
  c->r[3]=c->r[30]+0x000000E4u; // 800E2804
  c->lr=0x800E280Cu; f_800D3C18(c); // 800E2808
  c->r[3]=c->r[30]+0x00000520u; // 800E280C
  c->r[4]=0u+0x00000003u; // 800E2810
  c->r[5]=c->r[31]|c->r[31]; // 800E2814
  c->r[6]=0u+0x00000100u; // 800E2818
  c->lr=0x800E2820u; f_800C9628(c); // 800E281C
  c->r[3]=c->r[30]+0x000004F8u; // 800E2820
  c->r[4]=0u+0x00000001u; // 800E2824
  c->r[5]=c->r[31]|c->r[31]; // 800E2828
  c->r[6]=0u+0x00000100u; // 800E282C
  c->lr=0x800E2834u; f_800C3178(c); // 800E2830
  c->r[3]=c->r[30]+0x00000960u; // 800E2834
  c->r[4]=0u+0x00000006u; // 800E2838
  c->r[5]=c->r[31]|c->r[31]; // 800E283C
  c->r[6]=0u+0x00000080u; // 800E2840
  c->lr=0x800E2848u; f_800CAE48(c); // 800E2844
  c->r[3]=c->r[30]+0x0000098Cu; // 800E2848
  c->r[4]=0u+0x00000007u; // 800E284C
  c->r[5]=c->r[31]|c->r[31]; // 800E2850
  c->r[6]=0u+0x00000002u; // 800E2854
  c->lr=0x800E285Cu; f_800D2ED4(c); // 800E2858
  c->r[3]=c->r[30]+0x000009B8u; // 800E285C
  c->r[4]=0u+0x00000008u; // 800E2860
  c->r[5]=c->r[31]|c->r[31]; // 800E2864
  c->r[6]=0u+0x00000080u; // 800E2868
  c->lr=0x800E2870u; f_800CB4BC(c); // 800E286C
  c->r[3]=c->r[30]+0x00000A08u; // 800E2870
  c->r[4]=0u+0x00000009u; // 800E2874
  c->r[5]=c->r[31]|c->r[31]; // 800E2878
  c->r[6]=0u+0x00000100u; // 800E287C
  c->lr=0x800E2884u; f_800CD518(c); // 800E2880
  c->r[3]=c->r[30]+0x00000D20u; // 800E2884
  c->r[4]=0u+0x0000000Au; // 800E2888
  c->r[5]=c->r[31]|c->r[31]; // 800E288C
  c->r[6]=0u+0x00000100u; // 800E2890
  c->lr=0x800E2898u; f_800CFCA4(c); // 800E2894
  c->r[3]=c->r[30]+0x00000D48u; // 800E2898
  c->r[4]=0u+0x0000000Bu; // 800E289C
  c->r[5]=c->r[31]|c->r[31]; // 800E28A0
  c->r[6]=0u+0x00000040u; // 800E28A4
  c->lr=0x800E28ACu; f_800CFF58(c); // 800E28A8
  c->r[3]=c->r[30]+0x00000D70u; // 800E28AC
  c->r[4]=0u+0x0000000Cu; // 800E28B0
  c->r[5]=c->r[31]|c->r[31]; // 800E28B4
  c->r[6]=0u+0x00000040u; // 800E28B8
  c->lr=0x800E28C0u; f_800D0818(c); // 800E28BC
  c->r[3]=c->r[30]+0x0000049Cu; // 800E28C0
  c->r[4]=0u+0x00000000u; // 800E28C4
  c->r[5]=c->r[31]|c->r[31]; // 800E28C8
  c->r[6]=0u+0x00000100u; // 800E28CC
  c->lr=0x800E28D4u; f_800C2920(c); // 800E28D0
  c->r[3]=c->r[30]+0x000045DCu; // 800E28D4
  c->r[4]=0u+0x0000000Du; // 800E28D8
  c->r[5]=c->r[31]|c->r[31]; // 800E28DC
  c->r[6]=0u+0x00000080u; // 800E28E0
  c->lr=0x800E28E8u; f_800E19B4(c); // 800E28E4
  c->r[3]=c->r[30]+0x00002698u; // 800E28E8
  c->r[4]=0u+0x0000000Eu; // 800E28EC
  c->r[5]=c->r[31]|c->r[31]; // 800E28F0
  c->r[6]=0u+0x00000080u; // 800E28F4
  c->lr=0x800E28FCu; f_800DC694(c); // 800E28F8
  c->r[3]=c->r[30]+0x00000210u; // 800E28FC
  c->r[4]=0u+0x00000200u; // 800E2900
  c->lr=0x800E2908u; f_800D31F8(c); // 800E2904
  c->r[3]=c->r[30]+0x00000210u; // 800E2908
  c->r[4]=0u+0x000000C0u; // 800E290C
  c->lr=0x800E2914u; f_800D31F8(c); // 800E2910
  c->r[3]=c->r[30]+0x00000210u; // 800E2914
  c->r[4]=0u+0x00000040u; // 800E2918
  c->lr=0x800E2920u; f_800D31F8(c); // 800E291C
L_800E2920:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2920
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E2924
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2928
  c->lr=c->r[0]; // 800E292C
  c->r[1]=c->r[1]+0x00000010u; // 800E2930
  return; // 800E2934
}

// fn_800E2938
void f_800E2938(Ctx* __restrict c) {
  return; // 800E2938
}

// fn_800E293C
void f_800E293C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E293C
  c->r[0]=c->lr; // 800E2940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2948
  c->r[31]=c->r[3]|c->r[3]; // 800E294C
  c->r[0]=R32(c->r[13]+0xFFFFB9E4u); // 800E2950
  cmps(c,0,(int32_t)c->r[0],0); // 800E2954
  if (crb(c,2)) { goto L_800E29F0; } // 800E2958
  c->lr=0x800E2960u; f_800D8540(c); // 800E295C
  c->r[3]=c->r[31]+0x00000210u; // 800E2960
  c->lr=0x800E2968u; f_800D31A8(c); // 800E2964
  c->r[3]=c->r[31]+0x000000E4u; // 800E2968
  c->lr=0x800E2970u; f_800D3C3C(c); // 800E296C
  c->r[3]=c->r[31]+0x00000520u; // 800E2970
  c->lr=0x800E2978u; f_800C96CC(c); // 800E2974
  c->r[3]=c->r[31]+0x000004F8u; // 800E2978
  c->lr=0x800E2980u; f_800C31DC(c); // 800E297C
  c->r[3]=c->r[31]+0x00000960u; // 800E2980
  c->lr=0x800E2988u; f_800CAEAC(c); // 800E2984
  c->r[3]=c->r[31]+0x0000098Cu; // 800E2988
  c->lr=0x800E2990u; f_800D2F38(c); // 800E298C
  c->r[3]=c->r[31]+0x000009B8u; // 800E2990
  c->lr=0x800E2998u; f_800CB520(c); // 800E2994
  c->r[3]=c->r[31]+0x00000A08u; // 800E2998
  c->lr=0x800E29A0u; f_800CD57C(c); // 800E299C
  c->r[3]=c->r[31]+0x00000D20u; // 800E29A0
  c->lr=0x800E29A8u; f_800CFD08(c); // 800E29A4
  c->r[3]=c->r[31]+0x00000D48u; // 800E29A8
  c->lr=0x800E29B0u; f_800CFF5C(c); // 800E29AC
  c->r[3]=c->r[31]+0x00000D70u; // 800E29B0
  c->lr=0x800E29B8u; f_800D087C(c); // 800E29B4
  c->r[3]=c->r[31]+0x0000049Cu; // 800E29B8
  c->lr=0x800E29C0u; f_800C2984(c); // 800E29BC
  c->r[3]=c->r[31]+0x000045DCu; // 800E29C0
  c->lr=0x800E29C8u; f_800E1A18(c); // 800E29C4
  c->r[3]=c->r[31]+0x00002698u; // 800E29C8
  c->lr=0x800E29D0u; f_800DC6F8(c); // 800E29CC
  c->r[3]=c->r[31]|c->r[31]; // 800E29D0
  c->lr=0x800E29D8u; f_800E24DC(c); // 800E29D4
  c->r[3]=c->r[31]|c->r[31]; // 800E29D8
  c->r[4]=0u+0x00000000u; // 800E29DC
  c->lr=0x800E29E4u; f_800E2ED0(c); // 800E29E0
  c->r[0]=0u+0x00000000u; // 800E29E4
  W32(c->r[13]+0xFFFFB9E4u,c->r[0]); // 800E29E8
  W32(c->r[13]+0xFFFFB9E0u,c->r[0]); // 800E29EC
L_800E29F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E29F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E29F4
  c->lr=c->r[0]; // 800E29F8
  c->r[1]=c->r[1]+0x00000010u; // 800E29FC
  return; // 800E2A00
}

// fn_800E2A04
void f_800E2A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2A04
  c->r[0]=c->lr; // 800E2A08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E2A0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E2A10
  W32(c->r[1]+0x00000018u,c->r[30]); // 800E2A14
  W32(c->r[1]+0x00000014u,c->r[29]); // 800E2A18
  W32(c->r[1]+0x00000010u,c->r[28]); // 800E2A1C
  c->r[28]=c->r[3]|c->r[3]; // 800E2A20
  c->lr=0x800E2A28u; f_800484B8(c); // 800E2A24
  c->r[31]=c->r[3]|c->r[3]; // 800E2A28
  c->r[4]=0u+0x00000000u; // 800E2A2C
  c->lr=0x800E2A34u; f_80048624(c); // 800E2A30
  c->r[30]=c->r[3]|c->r[3]; // 800E2A34
  c->r[3]=c->r[31]|c->r[31]; // 800E2A38
  c->r[4]=0u+0x00000001u; // 800E2A3C
  c->lr=0x800E2A44u; f_80048624(c); // 800E2A40
  c->r[29]=c->r[3]|c->r[3]; // 800E2A44
  c->r[0]=0u+0x00000000u; // 800E2A48
  W32(c->r[28]+0x00004F78u,c->r[0]); // 800E2A4C
  c->lr=0x800E2A54u; f_800A23BC(c); // 800E2A50
  c->lr=0x800E2A58u; f_800BB700(c); // 800E2A54
  c->r[4]=0u+0x00000000u; // 800E2A58
  c->r[5]=0u+0x00000001u; // 800E2A5C
  c->lr=0x800E2A64u; f_800C1F38(c); // 800E2A60
  c->lr=0x800E2A68u; f_800A23BC(c); // 800E2A64
  c->lr=0x800E2A6Cu; f_800BB700(c); // 800E2A68
  c->r[4]=c->r[30]|c->r[30]; // 800E2A6C
  c->lr=0x800E2A74u; f_800D3000(c); // 800E2A70
  c->r[31]=c->r[3]|c->r[3]; // 800E2A74
  c->lr=0x800E2A7Cu; f_800A23BC(c); // 800E2A78
  c->lr=0x800E2A80u; f_800BB700(c); // 800E2A7C
  c->r[4]=c->r[31]|c->r[31]; // 800E2A80
  c->lr=0x800E2A88u; f_800BBE64(c); // 800E2A84
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800E2A88
  c->lr=0x800E2A90u; f_800BDE70(c); // 800E2A8C
  c->lr=0x800E2A94u; f_800A23BC(c); // 800E2A90
  c->lr=0x800E2A98u; f_800BB700(c); // 800E2A94
  c->r[4]=c->r[29]|c->r[29]; // 800E2A98
  c->lr=0x800E2AA0u; f_800D3000(c); // 800E2A9C
  c->r[31]=c->r[3]|c->r[3]; // 800E2AA0
  c->lr=0x800E2AA8u; f_800A23BC(c); // 800E2AA4
  c->lr=0x800E2AACu; f_800BB700(c); // 800E2AA8
  c->r[4]=c->r[31]|c->r[31]; // 800E2AAC
  c->lr=0x800E2AB4u; f_800BBE64(c); // 800E2AB0
  c->r[4]=c->r[13]+0xFFFF8980u; // 800E2AB4
  c->lr=0x800E2ABCu; f_800BDE70(c); // 800E2AB8
  c->r[3]=c->r[29]|c->r[29]; // 800E2ABC
  c->r[4]=0u+0x00000007u; // 800E2AC0
  c->lr=0x800E2AC8u; f_8005FE50(c); // 800E2AC4
  c->lr=0x800E2ACCu; f_800A23BC(c); // 800E2AC8
  c->lr=0x800E2AD0u; f_800BB700(c); // 800E2ACC
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800E2AD0
  c->lr=0x800E2AD8u; f_800BBEA4(c); // 800E2AD4
  c->r[29]=c->r[3]|c->r[3]; // 800E2AD8
  c->lr=0x800E2AE0u; f_800A23BC(c); // 800E2ADC
  c->lr=0x800E2AE4u; f_800BB700(c); // 800E2AE0
  c->r[4]=c->r[29]|c->r[29]; // 800E2AE4
  c->lr=0x800E2AECu; f_800D3078(c); // 800E2AE8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E2AEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800E2AF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800E2AF4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800E2AF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E2AFC
  c->lr=c->r[0]; // 800E2B00
  c->r[1]=c->r[1]+0x00000020u; // 800E2B04
  return; // 800E2B08
}

// fn_800E2B0C
void f_800E2B0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2B0C
  c->r[0]=c->lr; // 800E2B10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2B14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2B18
  c->r[31]=c->r[3]|c->r[3]; // 800E2B1C
  c->r[0]=R32(c->r[13]+0xFFFFB9E4u); // 800E2B20
  cmps(c,0,(int32_t)c->r[0],0); // 800E2B24
  if (crb(c,2)) { goto L_800E2BCC; } // 800E2B28
  c->r[0]=R32(c->r[3]+0x00004F80u); // 800E2B2C
  cmps(c,0,(int32_t)c->r[0],0); // 800E2B30
  if (crb(c,2)) { goto L_800E2B74; } // 800E2B34
  {uint32_t ea=c->r[3]+0x00004EE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2B38
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B3C
  fcmp(c,0,c->f[1],c->f[0]); // 800E2B40
  if (!crb(c,1)) { goto L_800E2B74; } // 800E2B44
  c->r[3]=0u+0x00000001u; // 800E2B48
  c->lr=0x800E2B50u; f_8005D714(c); // 800E2B4C
  {uint32_t ea=c->r[31]+0x00004EE0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B50
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800E2B54
  {uint32_t ea=c->r[31]+0x00004EE0u; WF32(ea,c->f[1]);} // 800E2B58
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2B5C
  fcmp(c,0,c->f[1],c->f[0]); // 800E2B60
  if (!crb(c,0)) { goto L_800E2B74; } // 800E2B64
  {uint32_t ea=c->r[31]+0x00004EE0u; WF32(ea,c->f[0]);} // 800E2B68
  c->r[0]=0u+0x00000000u; // 800E2B6C
  W32(c->r[31]+0x00004F80u,c->r[0]); // 800E2B70
L_800E2B74:;
  c->r[3]=c->r[31]+0x0000049Cu; // 800E2B74
  c->lr=0x800E2B7Cu; f_800C2BC0(c); // 800E2B78
  c->r[3]=c->r[31]+0x000045DCu; // 800E2B7C
  c->lr=0x800E2B84u; f_800E1C40(c); // 800E2B80
  c->r[3]=c->r[31]|c->r[31]; // 800E2B84
  c->lr=0x800E2B8Cu; f_800D8D10(c); // 800E2B88
  c->r[3]=c->r[31]+0x00000A08u; // 800E2B8C
  c->lr=0x800E2B94u; f_800CDDAC(c); // 800E2B90
  c->r[3]=c->r[31]+0x000000E4u; // 800E2B94
  c->lr=0x800E2B9Cu; f_800D3C90(c); // 800E2B98
  c->r[3]=c->r[31]+0x00002698u; // 800E2B9C
  c->lr=0x800E2BA4u; f_800DE48C(c); // 800E2BA0
  c->r[3]=c->r[31]|c->r[31]; // 800E2BA4
  c->lr=0x800E2BACu; f_800D9204(c); // 800E2BA8
  c->r[3]=c->r[31]+0x00000520u; // 800E2BAC
  c->lr=0x800E2BB4u; f_800C974C(c); // 800E2BB0
  c->r[3]=c->r[31]+0x00000960u; // 800E2BB4
  c->lr=0x800E2BBCu; f_800CAEEC(c); // 800E2BB8
  c->r[3]=c->r[31]+0x0000098Cu; // 800E2BBC
  c->lr=0x800E2BC4u; f_800D2F78(c); // 800E2BC0
  c->r[3]=c->r[31]+0x00004650u; // 800E2BC4
  c->lr=0x800E2BCCu; f_800E2064(c); // 800E2BC8
L_800E2BCC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2BCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2BD0
  c->lr=c->r[0]; // 800E2BD4
  c->r[1]=c->r[1]+0x00000010u; // 800E2BD8
  return; // 800E2BDC
}

// fn_800E2BE0
void f_800E2BE0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00004EE4u); // 800E2BE0
  c->r[0]=c->r[4]+0x00000001u; // 800E2BE4
  W32(c->r[3]+0x00004EE4u,c->r[0]); // 800E2BE8
  return; // 800E2BEC
}

// fn_800E2BF0
void f_800E2BF0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00004EE4u); // 800E2BF0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800E2BF4
  W32(c->r[3]+0x00004EE4u,c->r[0]); // 800E2BF8
  cmps(c,0,(int32_t)c->r[0],0); // 800E2BFC
  if (!crb(c,0)) return; // 800E2C00
  c->r[0]=0u+0x00000000u; // 800E2C04
  W32(c->r[3]+0x00004EE4u,c->r[0]); // 800E2C08
  return; // 800E2C0C
}

// fn_800E2C10
void f_800E2C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2C10
  c->r[0]=c->lr; // 800E2C14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2C18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800E2C1C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800E2C20
  c->r[3]=c->r[1]+0x00000014u; // 800E2C24
  c->lr=0x800E2C2Cu; f_8004B0A4(c); // 800E2C28
  c->r[3]=c->r[1]+0x00000008u; // 800E2C2C
  c->lr=0x800E2C34u; f_8004B0A4(c); // 800E2C30
  c->lr=0x800E2C38u; f_800A23BC(c); // 800E2C34
  c->lr=0x800E2C3Cu; f_800BB700(c); // 800E2C38
  c->r[4]=c->r[13]+0xFFFF886Cu; // 800E2C3C
  c->lr=0x800E2C44u; f_800BBEA4(c); // 800E2C40
  c->r[31]=c->r[3]|c->r[3]; // 800E2C44
  cmps(c,0,(int32_t)c->r[3],0); // 800E2C48
  if (crb(c,2)) { goto L_800E2D10; } // 800E2C4C
  {uint32_t ea=c->r[2]+0xFFFF8938u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2C50
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 800E2C54
  {uint32_t ea=c->r[2]+0xFFFF8818u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E2C58
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800E2C5C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800E2C60
  c->lr=0x800E2C68u; f_800A23BC(c); // 800E2C64
  c->lr=0x800E2C6Cu; f_800BB800(c); // 800E2C68
  c->r[4]=c->r[13]+0xFFFF8930u; // 800E2C6C
  c->lr=0x800E2C74u; f_800BBD98(c); // 800E2C70
  c->r[30]=c->r[3]|c->r[3]; // 800E2C74
  cmps(c,0,(int32_t)c->r[3],0); // 800E2C78
  if (crb(c,2)) { goto L_800E2D10; } // 800E2C7C
  c->lr=0x800E2C84u; f_800A23BC(c); // 800E2C80
  c->lr=0x800E2C88u; f_800BB800(c); // 800E2C84
  c->r[4]=c->r[30]|c->r[30]; // 800E2C88
  c->lr=0x800E2C90u; f_800BBD58(c); // 800E2C8C
  c->r[4]=c->r[1]+0x00000014u; // 800E2C90
  c->lr=0x800E2C98u; f_800BD664(c); // 800E2C94
  c->lr=0x800E2C9Cu; f_800A23BC(c); // 800E2C98
  c->lr=0x800E2CA0u; f_800BB700(c); // 800E2C9C
  c->r[4]=c->r[31]|c->r[31]; // 800E2CA0
  c->lr=0x800E2CA8u; f_800BBE64(c); // 800E2CA4
  c->r[4]=0u+0x00000000u; // 800E2CA8
  c->lr=0x800E2CB0u; f_800D2748(c); // 800E2CAC
  c->lr=0x800E2CB4u; f_800A23BC(c); // 800E2CB0
  c->lr=0x800E2CB8u; f_800BB700(c); // 800E2CB4
  c->r[4]=c->r[31]|c->r[31]; // 800E2CB8
  c->lr=0x800E2CC0u; f_800BBE64(c); // 800E2CBC
  c->r[4]=c->r[1]+0x00000014u; // 800E2CC0
  c->lr=0x800E2CC8u; f_800BB528(c); // 800E2CC4
  c->lr=0x800E2CCCu; f_800A23BC(c); // 800E2CC8
  c->lr=0x800E2CD0u; f_800BB700(c); // 800E2CCC
  c->r[4]=c->r[31]|c->r[31]; // 800E2CD0
  c->lr=0x800E2CD8u; f_800BBE64(c); // 800E2CD4
  c->r[4]=c->r[1]+0x00000008u; // 800E2CD8
  c->lr=0x800E2CE0u; f_800BB27C(c); // 800E2CDC
  c->lr=0x800E2CE4u; f_800A23BC(c); // 800E2CE0
  c->lr=0x800E2CE8u; f_800BB700(c); // 800E2CE4
  c->r[4]=c->r[31]|c->r[31]; // 800E2CE8
  c->lr=0x800E2CF0u; f_800BBE64(c); // 800E2CEC
  {uint32_t ea=c->r[2]+0xFFFF8900u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2CF0
  c->lr=0x800E2CF8u; f_800BB5B0(c); // 800E2CF4
  c->lr=0x800E2CFCu; f_800A23BC(c); // 800E2CF8
  c->lr=0x800E2D00u; f_800BB700(c); // 800E2CFC
  c->r[4]=c->r[31]|c->r[31]; // 800E2D00
  c->lr=0x800E2D08u; f_800BBE64(c); // 800E2D04
  {uint32_t ea=c->r[2]+0xFFFF88DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800E2D08
  c->lr=0x800E2D10u; f_800BB674(c); // 800E2D0C
L_800E2D10:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800E2D10
  c->r[30]=R32(c->r[1]+0x00000028u); // 800E2D14
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E2D18
  c->lr=c->r[0]; // 800E2D1C
  c->r[1]=c->r[1]+0x00000030u; // 800E2D20
  return; // 800E2D24
}

// fn_800E2D28
void f_800E2D28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2D28
  c->r[0]=c->lr; // 800E2D2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2D30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2D34
  c->r[31]=c->r[4]|c->r[4]; // 800E2D38
  c->lr=0x800E2D40u; f_800A23BC(c); // 800E2D3C
  c->lr=0x800E2D44u; f_800BB76C(c); // 800E2D40
  c->r[4]=0u+0x00000002u; // 800E2D44
  c->r[5]=c->r[31]|c->r[31]; // 800E2D48
  c->lr=0x800E2D50u; f_800D3244(c); // 800E2D4C
  c->lr=0x800E2D54u; f_800A23BC(c); // 800E2D50
  c->lr=0x800E2D58u; f_800A23B4(c); // 800E2D54
  c->lr=0x800E2D5Cu; f_800DE880(c); // 800E2D58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2D5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2D60
  c->lr=c->r[0]; // 800E2D64
  c->r[1]=c->r[1]+0x00000010u; // 800E2D68
  return; // 800E2D6C
}

// fn_800E2D70
void f_800E2D70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2D70
  c->r[0]=c->lr; // 800E2D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2D7C
  c->r[31]=c->r[4]|c->r[4]; // 800E2D80
  c->lr=0x800E2D88u; f_800A23BC(c); // 800E2D84
  c->lr=0x800E2D8Cu; f_800BB76C(c); // 800E2D88
  c->r[4]=0u+0x00000002u; // 800E2D8C
  c->r[5]=c->r[31]|c->r[31]; // 800E2D90
  c->lr=0x800E2D98u; f_800D32B8(c); // 800E2D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2D9C
  c->lr=c->r[0]; // 800E2DA0
  c->r[1]=c->r[1]+0x00000010u; // 800E2DA4
  return; // 800E2DA8
}

// fn_800E2DAC
void f_800E2DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2DAC
  c->r[0]=c->lr; // 800E2DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2DB4
  c->lr=0x800E2DBCu; f_800A23BC(c); // 800E2DB8
  cmps(c,0,(int32_t)c->r[3],0); // 800E2DBC
  if (crb(c,2)) { goto L_800E2DD8; } // 800E2DC0
  c->lr=0x800E2DC8u; f_800A23BC(c); // 800E2DC4
  c->lr=0x800E2DCCu; f_800A23C8(c); // 800E2DC8
  c->r[4]=0u+0x00000000u; // 800E2DCC
  c->lr=0x800E2DD4u; f_800CE76C(c); // 800E2DD0
  goto L_800E2DDC; // 800E2DD4
L_800E2DD8:;
  c->r[3]=0u+0x00000000u; // 800E2DD8
L_800E2DDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2DDC
  c->lr=c->r[0]; // 800E2DE0
  c->r[1]=c->r[1]+0x00000010u; // 800E2DE4
  return; // 800E2DE8
}

// fn_800E2DEC
void f_800E2DEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2DEC
  c->r[0]=c->lr; // 800E2DF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E2DF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E2DF8
  c->lr=0x800E2E00u; f_800A23BC(c); // 800E2DFC
  cmps(c,0,(int32_t)c->r[3],0); // 800E2E00
  if (crb(c,2)) { goto L_800E2E40; } // 800E2E04
  c->lr=0x800E2E0Cu; f_8007B524(c); // 800E2E08
  c->lr=0x800E2E10u; f_8009CF14(c); // 800E2E0C
  c->r[31]=c->r[3]|c->r[3]; // 800E2E10
  c->lr=0x800E2E18u; f_800A23BC(c); // 800E2E14
  c->lr=0x800E2E1Cu; f_800A23B4(c); // 800E2E18
  c->r[4]=c->r[31]|c->r[31]; // 800E2E1C
  c->lr=0x800E2E24u; f_800CF978(c); // 800E2E20
  c->lr=0x800E2E28u; f_800A23BC(c); // 800E2E24
  c->lr=0x800E2E2Cu; f_800A23C8(c); // 800E2E28
  c->lr=0x800E2E30u; f_800CE704(c); // 800E2E2C
  c->lr=0x800E2E34u; f_800A23BC(c); // 800E2E30
  c->lr=0x800E2E38u; f_800A23B4(c); // 800E2E34
  c->r[4]=0u+0x00000000u; // 800E2E38
  c->lr=0x800E2E40u; f_800E1274(c); // 800E2E3C
L_800E2E40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E2E40
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E2E44
  c->lr=c->r[0]; // 800E2E48
  c->r[1]=c->r[1]+0x00000010u; // 800E2E4C
  return; // 800E2E50
}

// fn_800E2E54
void f_800E2E54(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E2E54
  c->r[3]=c->r[3]+c->r[0]; // 800E2E58
  W32(c->r[3]+0x00004EECu,c->r[5]); // 800E2E5C
  return; // 800E2E60
}

// fn_800E2E64
void f_800E2E64(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E2E64
  c->r[3]=c->r[3]+c->r[0]; // 800E2E68
  c->r[3]=R32(c->r[3]+0x00004EECu); // 800E2E6C
  return; // 800E2E70
}

// fn_800E2E74
void f_800E2E74(Ctx* __restrict c) {
  c->r[6]=0u+0x0000000Au; // 800E2E74
  c->r[4]=c->r[3]+0x00000028u; // 800E2E78
  c->r[0]=0u+0x0000000Bu; // 800E2E7C
  c->ctr=c->r[0]; // 800E2E80
L_800E2E84:;
  c->r[5]=R32(c->r[4]+0x00004EECu); // 800E2E84
  cmps(c,0,(int32_t)c->r[5],0); // 800E2E88
  if (crb(c,0)) { goto L_800E2EBC; } // 800E2E8C
  c->r[0]=R32(c->r[3]+0x00004EE8u); // 800E2E90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800E2E94
  if (crb(c,0)) { goto L_800E2EBC; } // 800E2E98
  cmpu(c,0,c->r[6],0x00000009u); // 800E2E9C
  if (crb(c,0)) { goto L_800E2EA8; } // 800E2EA0
  c->r[6]=0u+0x00000009u; // 800E2EA4
L_800E2EA8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800E2EA8
  if (!crb(c,2)) { goto L_800E2EB4; } // 800E2EAC
  c->r[6]=0u+0x00000001u; // 800E2EB0
L_800E2EB4:;
  c->r[3]=c->r[6]|c->r[6]; // 800E2EB4
  return; // 800E2EB8
L_800E2EBC:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800E2EBC
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800E2EC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E2E84; } // 800E2EC4
  c->r[3]=0u+0x00000001u; // 800E2EC8
  return; // 800E2ECC
}

// fn_800E2ED0
void f_800E2ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E2ED0
  c->r[0]=c->lr; // 800E2ED4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E2ED8
  c->r[11]=c->r[1]+0x00000030u; // 800E2EDC
  c->lr=0x800E2EE4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E2EE0
  c->r[24]=c->r[3]|c->r[3]; // 800E2EE4
  c->r[26]=c->r[4]|c->r[4]; // 800E2EE8
  c->r[0]=R32(c->r[3]+0x00004F98u); // 800E2EEC
  cmpu(c,0,c->r[0],c->r[4]); // 800E2EF0
  if (crb(c,2)) { goto L_800E3038; } // 800E2EF4
  cmpu(c,0,c->r[0],0x00000001u); // 800E2EF8
  if (!crb(c,2)) { goto L_800E2F48; } // 800E2EFC
  c->r[25]=0u+0x00000000u; // 800E2F00
  c->r[29]=c->r[24]|c->r[24]; // 800E2F04
  c->r[30]=c->r[3]+0x00004F9Cu; // 800E2F08
  c->r[31]=0u+0x00000000u; // 800E2F0C
L_800E2F10:;
  c->r[0]=R32(c->r[29]+0x0000506Cu); // 800E2F10
  cmps(c,0,(int32_t)c->r[0],0); // 800E2F14
  if (crb(c,2)) { goto L_800E2F30; } // 800E2F18
  c->r[3]=c->r[30]|c->r[30]; // 800E2F1C
  c->lr=0x800E2F24u; f_80056A84(c); // 800E2F20
  c->r[3]=R32(c->r[29]+0x0000506Cu); // 800E2F24
  c->lr=0x800E2F2Cu; f_8004A0A4(c); // 800E2F28
  W32(c->r[29]+0x0000506Cu,c->r[31]); // 800E2F2C
L_800E2F30:;
  W32(c->r[29]+0x0000505Cu,c->r[31]); // 800E2F30
  c->r[29]=c->r[29]+0x00000004u; // 800E2F34
  c->r[30]=c->r[30]+0x00000030u; // 800E2F38
  c->r[25]=c->r[25]+0x00000001u; // 800E2F3C
  cmpu(c,0,c->r[25],0x00000004u); // 800E2F40
  if (crb(c,0)) { IRQCHK(c); goto L_800E2F10; } // 800E2F44
L_800E2F48:;
  W32(c->r[24]+0x00004F98u,c->r[26]); // 800E2F48
  cmps(c,0,(int32_t)c->r[26],4); // 800E2F4C
  if (crb(c,2)) { goto L_800E3010; } // 800E2F50
  if (!crb(c,0)) { goto L_800E3038; } // 800E2F54
  cmps(c,0,(int32_t)c->r[26],1); // 800E2F58
  if (crb(c,2)) { goto L_800E2F68; } // 800E2F5C
  if (!crb(c,0)) { goto L_800E2FEC; } // 800E2F60
  goto L_800E3038; // 800E2F64
L_800E2F68:;
  c->r[28]=0u+0x00000000u; // 800E2F68
  c->r[3]=0u+0x80430000u; // 800E2F6C
  c->r[31]=c->r[3]+0xFFFFD9D8u; // 800E2F70
  c->r[30]=c->r[24]+0x00004F9Cu; // 800E2F74
  c->r[29]=c->r[24]|c->r[24]; // 800E2F78
L_800E2F7C:;
  c->r[26]=R32(c->r[31]+0x00000004u); // 800E2F7C
  c->r[27]=R32(c->r[31]+0x00000000u); // 800E2F80
  cmps(c,0,(int32_t)c->r[26],0); // 800E2F84
  if (crb(c,2)) { goto L_800E2FB8; } // 800E2F88
  c->r[3]=c->r[26]|c->r[26]; // 800E2F8C
  c->lr=0x800E2F94u; f_8004A084(c); // 800E2F90
  c->r[25]=c->r[3]|c->r[3]; // 800E2F94
  c->r[3]=c->r[30]|c->r[30]; // 800E2F98
  c->r[4]=c->r[25]|c->r[25]; // 800E2F9C
  c->r[5]=c->r[26]|c->r[26]; // 800E2FA0
  c->r[6]=0u+0x00000020u; // 800E2FA4
  c->r[7]=c->r[27]|c->r[27]; // 800E2FA8
  c->lr=0x800E2FB0u; f_800569F4(c); // 800E2FAC
  W32(c->r[29]+0x0000505Cu,c->r[30]); // 800E2FB0
  W32(c->r[29]+0x0000506Cu,c->r[25]); // 800E2FB4
L_800E2FB8:;
  c->r[31]=c->r[31]+0x00000008u; // 800E2FB8
  c->r[30]=c->r[30]+0x00000030u; // 800E2FBC
  c->r[29]=c->r[29]+0x00000004u; // 800E2FC0
  c->r[28]=c->r[28]+0x00000001u; // 800E2FC4
  cmpu(c,0,c->r[28],0x00000004u); // 800E2FC8
  if (crb(c,0)) { IRQCHK(c); goto L_800E2F7C; } // 800E2FCC
  c->lr=0x800E2FD4u; f_8004A07C(c); // 800E2FD0
  W32(c->r[24]+0x0000505Cu,c->r[3]); // 800E2FD4
  c->r[0]=R32(c->r[24]+0x00005060u); // 800E2FD8
  W32(c->r[24]+0x00005064u,c->r[0]); // 800E2FDC
  c->lr=0x800E2FE4u; f_8004A07C(c); // 800E2FE0
  W32(c->r[24]+0x00005068u,c->r[3]); // 800E2FE4
  goto L_800E3038; // 800E2FE8
L_800E2FEC:;
  c->lr=0x800E2FF0u; f_8004A07C(c); // 800E2FEC
  W32(c->r[24]+0x0000505Cu,c->r[3]); // 800E2FF0
  c->lr=0x800E2FF8u; f_8004A07C(c); // 800E2FF4
  W32(c->r[24]+0x00005060u,c->r[3]); // 800E2FF8
  c->lr=0x800E3000u; f_8004A07C(c); // 800E2FFC
  W32(c->r[24]+0x00005064u,c->r[3]); // 800E3000
  c->lr=0x800E3008u; f_8004A07C(c); // 800E3004
  W32(c->r[24]+0x00005068u,c->r[3]); // 800E3008
  goto L_800E3038; // 800E300C
L_800E3010:;
  c->lr=0x800E3014u; f_8007B524(c); // 800E3010
  c->r[4]=0u+0x0000000Cu; // 800E3014
  c->lr=0x800E301Cu; f_800A1B48(c); // 800E3018
  W32(c->r[24]+0x0000505Cu,c->r[3]); // 800E301C
  c->lr=0x800E3024u; f_8004A07C(c); // 800E3020
  W32(c->r[24]+0x00005060u,c->r[3]); // 800E3024
  c->lr=0x800E302Cu; f_8004A07C(c); // 800E3028
  W32(c->r[24]+0x00005064u,c->r[3]); // 800E302C
  c->lr=0x800E3034u; f_8004A07C(c); // 800E3030
  W32(c->r[24]+0x00005068u,c->r[3]); // 800E3034
L_800E3038:;
  c->r[11]=c->r[1]+0x00000030u; // 800E3038
  c->lr=0x800E3040u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E303C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E3040
  c->lr=c->r[0]; // 800E3044
  c->r[1]=c->r[1]+0x00000030u; // 800E3048
  return; // 800E304C
}

// fn_800E3050
void f_800E3050(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800E3050
  c->r[3]=c->r[3]+c->r[0]; // 800E3054
  c->r[3]=R32(c->r[3]+0x0000505Cu); // 800E3058
  return; // 800E305C
}

// fn_800E3060
void f_800E3060(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 800E3060
  if (crb(c,2)) { goto L_800E3084; } // 800E3064
  c->r[5]=R32(c->r[3]+0x00004ECCu); // 800E3068
  c->r[0]=0u+0x00000001u; // 800E306C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800E3070
  c->r[0]=~(c->r[0]|c->r[0]); // 800E3074
  c->r[0]=c->r[5]&c->r[0]; // 800E3078
  W32(c->r[3]+0x00004ECCu,c->r[0]); // 800E307C
  goto L_800E3098; // 800E3080
L_800E3084:;
  c->r[5]=R32(c->r[3]+0x00004ECCu); // 800E3084
  c->r[0]=0u+0x00000001u; // 800E3088
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800E308C
  c->r[0]=c->r[5]|c->r[0]; // 800E3090
  W32(c->r[3]+0x00004ECCu,c->r[0]); // 800E3094
L_800E3098:;
  c->r[0]=R32(c->r[3]+0x00004ECCu); // 800E3098
  cmps(c,0,(int32_t)c->r[0],0); // 800E309C
  if (crb(c,2)) { goto L_800E30AC; } // 800E30A0
  c->r[3]=0u+0x00000000u; // 800E30A4
  f_800B8270(c); return; // 800E30A8
L_800E30AC:;
  c->r[3]=0u+0x00000001u; // 800E30AC
  f_800B8270(c); return; // 800E30B0
}

// fn_800E30B4
void f_800E30B4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[5],0); // 800E30B4
  if (crb(c,2)) { goto L_800E30D8; } // 800E30B8
  c->r[5]=R32(c->r[3]+0x00004ED0u); // 800E30BC
  c->r[0]=0u+0x00000001u; // 800E30C0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800E30C4
  c->r[0]=~(c->r[0]|c->r[0]); // 800E30C8
  c->r[0]=c->r[5]&c->r[0]; // 800E30CC
  W32(c->r[3]+0x00004ED0u,c->r[0]); // 800E30D0
  return; // 800E30D4
L_800E30D8:;
  c->r[5]=R32(c->r[3]+0x00004ED0u); // 800E30D8
  c->r[0]=0u+0x00000001u; // 800E30DC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 800E30E0
  c->r[0]=c->r[5]|c->r[0]; // 800E30E4
  W32(c->r[3]+0x00004ED0u,c->r[0]); // 800E30E8
  return; // 800E30EC
}

// dtor_800E30F0
void f_800E30F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E30F0
  c->r[0]=c->lr; // 800E30F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E30F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E30FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3100
  c->r[30]=c->r[3]|c->r[3]; // 800E3104
  c->r[31]=c->r[4]|c->r[4]; // 800E3108
  cmps(c,0,(int32_t)c->r[3],0); // 800E310C
  if (crb(c,2)) { goto L_800E3130; } // 800E3110
  c->r[4]=0u+0xFFFFFFFFu; // 800E3114
  c->lr=0x800E311Cu; f_800BB850(c); // 800E3118
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800E311C
  cmps(c,0,(int32_t)c->r[0],0); // 800E3120
  if (!crb(c,1)) { goto L_800E3130; } // 800E3124
  c->r[3]=c->r[30]|c->r[30]; // 800E3128
  c->lr=0x800E3130u; f_80047B20(c); // 800E312C
L_800E3130:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3130
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3134
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3138
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E313C
  c->lr=c->r[0]; // 800E3140
  c->r[1]=c->r[1]+0x00000010u; // 800E3144
  return; // 800E3148
}

// fn_800E314C
void f_800E314C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E314C
  c->r[0]=c->lr; // 800E3150
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3154
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3158
  c->r[31]=c->r[3]|c->r[3]; // 800E315C
  c->r[4]=0u+0x80460000u; // 800E3160
  c->r[0]=c->r[4]+0x00000AC4u; // 800E3164
  W32(c->r[3]+0x00000048u,c->r[0]); // 800E3168
  c->lr=0x800E3170u; f_800BB894(c); // 800E316C
  c->r[3]=c->r[31]+0x00000024u; // 800E3170
  c->lr=0x800E3178u; f_8004B0A4(c); // 800E3174
  c->r[3]=c->r[31]+0x00000030u; // 800E3178
  c->lr=0x800E3180u; f_8004B0A4(c); // 800E317C
  c->r[3]=c->r[31]|c->r[31]; // 800E3180
  c->lr=0x800E3188u; f_800D5FA8(c); // 800E3184
  c->r[3]=c->r[31]|c->r[31]; // 800E3188
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E318C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3190
  c->lr=c->r[0]; // 800E3194
  c->r[1]=c->r[1]+0x00000010u; // 800E3198
  return; // 800E319C
}

// dtor_800E31A0
void f_800E31A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E31A0
  c->r[0]=c->lr; // 800E31A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E31A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E31AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E31B0
  c->r[30]=c->r[3]|c->r[3]; // 800E31B4
  c->r[31]=c->r[4]|c->r[4]; // 800E31B8
  cmps(c,0,(int32_t)c->r[3],0); // 800E31BC
  if (crb(c,2)) { goto L_800E31E0; } // 800E31C0
  c->r[4]=0u+0x00000000u; // 800E31C4
  c->lr=0x800E31CCu; f_800BF3EC(c); // 800E31C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800E31CC
  cmps(c,0,(int32_t)c->r[0],0); // 800E31D0
  if (!crb(c,1)) { goto L_800E31E0; } // 800E31D4
  c->r[3]=c->r[30]|c->r[30]; // 800E31D8
  c->lr=0x800E31E0u; f_80047B20(c); // 800E31DC
L_800E31E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800E31E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E31E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E31E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E31EC
  c->lr=c->r[0]; // 800E31F0
  c->r[1]=c->r[1]+0x00000010u; // 800E31F4
  return; // 800E31F8
}

// fn_800E31FC
void f_800E31FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E31FC
  c->r[0]=c->lr; // 800E3200
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3204
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3208
  c->r[31]=c->r[3]|c->r[3]; // 800E320C
  c->lr=0x800E3214u; f_800BF3B0(c); // 800E3210
  c->r[3]=0u+0x80460000u; // 800E3214
  c->r[0]=c->r[3]+0x00000CA8u; // 800E3218
  W32(c->r[31]+0x00000024u,c->r[0]); // 800E321C
  c->r[3]=c->r[31]|c->r[31]; // 800E3220
  c->lr=0x800E3228u; f_800BF450(c); // 800E3224
  c->r[3]=c->r[31]|c->r[31]; // 800E3228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E322C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3230
  c->lr=c->r[0]; // 800E3234
  c->r[1]=c->r[1]+0x00000010u; // 800E3238
  return; // 800E323C
}

// dtor_800E3240
void f_800E3240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3240
  c->r[0]=c->lr; // 800E3244
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3248
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E324C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800E3250
  c->r[30]=c->r[3]|c->r[3]; // 800E3254
  c->r[31]=c->r[4]|c->r[4]; // 800E3258
  cmps(c,0,(int32_t)c->r[3],0); // 800E325C
  if (crb(c,2)) { goto L_800E3280; } // 800E3260
  c->r[4]=0u+0x00000000u; // 800E3264
  c->lr=0x800E326Cu; f_800BF864(c); // 800E3268
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800E326C
  cmps(c,0,(int32_t)c->r[0],0); // 800E3270
  if (!crb(c,1)) { goto L_800E3280; } // 800E3274
  c->r[3]=c->r[30]|c->r[30]; // 800E3278
  c->lr=0x800E3280u; f_80047B20(c); // 800E327C
L_800E3280:;
  c->r[3]=c->r[30]|c->r[30]; // 800E3280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3284
  c->r[30]=R32(c->r[1]+0x00000008u); // 800E3288
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E328C
  c->lr=c->r[0]; // 800E3290
  c->r[1]=c->r[1]+0x00000010u; // 800E3294
  return; // 800E3298
}

// fn_800E329C
void f_800E329C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E329C
  c->r[0]=c->lr; // 800E32A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E32A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E32A8
  c->r[31]=c->r[3]|c->r[3]; // 800E32AC
  c->lr=0x800E32B4u; f_800BF828(c); // 800E32B0
  c->r[3]=0u+0x80460000u; // 800E32B4
  c->r[0]=c->r[3]+0x00000D18u; // 800E32B8
  W32(c->r[31]+0x00000024u,c->r[0]); // 800E32BC
  c->r[3]=c->r[31]|c->r[31]; // 800E32C0
  c->lr=0x800E32C8u; f_800CFD3C(c); // 800E32C4
  c->r[3]=c->r[31]|c->r[31]; // 800E32C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E32CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E32D0
  c->lr=c->r[0]; // 800E32D4
  c->r[1]=c->r[1]+0x00000010u; // 800E32D8
  return; // 800E32DC
}

// fn_800E32E0
void f_800E32E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E32E0
  c->r[0]=c->lr; // 800E32E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E32E8
  c->lr=0x800E32F0u; f_801B08E0(c); // 800E32EC
  cmps(c,0,(int32_t)c->r[3],0); // 800E32F0
  if (crb(c,2)) { goto L_800E3304; } // 800E32F4
  c->lr=0x800E32FCu; f_801B1AB0(c); // 800E32F8
  c->r[3]=0u+0x00000001u; // 800E32FC
  goto L_800E3308; // 800E3300
L_800E3304:;
  c->r[3]=0u+0x00000000u; // 800E3304
L_800E3308:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3308
  c->lr=c->r[0]; // 800E330C
  c->r[1]=c->r[1]+0x00000010u; // 800E3310
  return; // 800E3314
}

// fn_800E3318
void f_800E3318(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000000u); // 800E3318
  cmpu(c,0,c->r[0],0x00000081u); // 800E331C
  if (crb(c,0)) { goto L_800E332C; } // 800E3320
  cmpu(c,0,c->r[0],0x0000009Fu); // 800E3324
  if (!crb(c,1)) { goto L_800E333C; } // 800E3328
L_800E332C:;
  cmpu(c,0,c->r[0],0x000000E0u); // 800E332C
  if (crb(c,0)) { goto L_800E3358; } // 800E3330
  cmpu(c,0,c->r[0],0x000000FCu); // 800E3334
  if (crb(c,1)) { goto L_800E3358; } // 800E3338
L_800E333C:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 800E333C
  cmpu(c,0,c->r[0],0x00000040u); // 800E3340
  if (crb(c,0)) { goto L_800E3358; } // 800E3344
  cmpu(c,0,c->r[0],0x000000FCu); // 800E3348
  if (crb(c,1)) { goto L_800E3358; } // 800E334C
  c->r[3]=0u+0x00000001u; // 800E3350
  return; // 800E3354
L_800E3358:;
  c->r[3]=0u+0x00000000u; // 800E3358
  return; // 800E335C
}

// fn_800E3360
void f_800E3360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE50u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3360
  c->r[0]=c->lr; // 800E3364
  W32(c->r[1]+0x000001B4u,c->r[0]); // 800E3368
  c->r[11]=c->r[1]+0x000001B0u; // 800E336C
  c->lr=0x800E3374u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800E3370
  c->r[27]=c->r[3]|c->r[3]; // 800E3374
  c->r[28]=c->r[5]|c->r[5]; // 800E3378
  c->r[29]=c->r[6]|c->r[6]; // 800E337C
  c->r[5]=c->r[1]+0x00000004u; // 800E3380
  c->r[3]=0u+0x80430000u; // 800E3384
  c->r[3]=c->r[3]+0xFFFFD9F8u; // 800E3388
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 800E338C
  c->r[0]=0u+0x0000002Fu; // 800E3390
  c->ctr=c->r[0]; // 800E3394
L_800E3398:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800E3398
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800E339C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800E33A0
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800E33A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800E3398; } // 800E33A8
  c->r[3]=c->r[28]|c->r[28]; // 800E33AC
  c->lr=0x800E33B4u; f_802F0250(c); // 800E33B0
  c->r[24]=c->r[3]|c->r[3]; // 800E33B4
  c->r[30]=0u+0x00000000u; // 800E33B8
  c->r[31]=0u+0x00000000u; // 800E33BC
  c->r[26]=0u+0x00000020u; // 800E33C0
  c->r[25]=c->r[1]+0x00000008u; // 800E33C4
  goto L_800E3458; // 800E33C8
L_800E33CC:;
  c->r[23]=c->r[28]+c->r[30]; // 800E33CC
  c->r[3]=c->r[23]|c->r[23]; // 800E33D0
  c->lr=0x800E33D8u; f_800E3318(c); // 800E33D4
  cmps(c,0,(int32_t)c->r[3],0); // 800E33D8
  if (crb(c,2)) { goto L_800E3400; } // 800E33DC
  c->r[3]=c->r[27]+c->r[31]; // 800E33E0
  c->r[0]=R8(c->r[23]+0x00000000u); // 800E33E4
  W8(c->r[3]+0x00000000u,c->r[0]); // 800E33E8
  c->r[0]=R8(c->r[23]+0x00000001u); // 800E33EC
  W8(c->r[3]+0x00000001u,c->r[0]); // 800E33F0
  c->r[31]=c->r[31]+0x00000002u; // 800E33F4
  c->r[30]=c->r[30]+0x00000002u; // 800E33F8
  goto L_800E3458; // 800E33FC
L_800E3400:;
  c->r[0]=R8(c->r[23]+0x00000000u); // 800E3400
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E3404
  cmps(c,0,(int32_t)c->r[3],32); // 800E3408
  if (crb(c,0)) { goto L_800E3444; } // 800E340C
  cmps(c,0,(int32_t)c->r[3],125); // 800E3410
  if (crb(c,1)) { goto L_800E3444; } // 800E3414
  c->r[0]=c->r[3]+0xFFFFFFE0u; // 800E3418
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800E341C
  c->r[3]=R32(c->r[25]+c->r[0]); // 800E3420
  c->r[4]=c->r[27]+c->r[31]; // 800E3424
  c->r[0]=R8(c->r[3]+0x00000000u); // 800E3428
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E342C
  W8(c->r[4]+0x00000000u,c->r[0]); // 800E3430
  c->r[0]=R8(c->r[3]+0x00000001u); // 800E3434
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800E3438
  W8(c->r[4]+0x00000001u,c->r[0]); // 800E343C
  goto L_800E3450; // 800E3440
L_800E3444:;
  c->r[3]=c->r[27]+c->r[31]; // 800E3444
  W8(c->r[3]+0x00000000u,c->r[26]); // 800E3448
  W8(c->r[3]+0x00000001u,c->r[26]); // 800E344C
L_800E3450:;
  c->r[31]=c->r[31]+0x00000002u; // 800E3450
  c->r[30]=c->r[30]+0x00000001u; // 800E3454
L_800E3458:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[24]); // 800E3458
  if (!crb(c,0)) { goto L_800E3468; } // 800E345C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[29]); // 800E3460
  if (crb(c,0)) { IRQCHK(c); goto L_800E33CC; } // 800E3464
L_800E3468:;
  c->r[0]=0u+0x00000000u; // 800E3468
  W8(c->r[27]+c->r[31],c->r[0]); // 800E346C
  c->r[3]=c->r[27]+c->r[31]; // 800E3470
  W8(c->r[3]+0x00000001u,c->r[0]); // 800E3474
  c->r[11]=c->r[1]+0x000001B0u; // 800E3478
  c->lr=0x800E3480u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800E347C
  c->r[0]=R32(c->r[1]+0x000001B4u); // 800E3480
  c->lr=c->r[0]; // 800E3484
  c->r[1]=c->r[1]+0x000001B0u; // 800E3488
  return; // 800E348C
}

// fn_800E3490
void f_800E3490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3490
  c->r[0]=c->lr; // 800E3494
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3498
  c->lr=0x800E34A0u; f_801E6540(c); // 800E349C
  c->r[3]=0u+0x00000000u; // 800E34A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E34A4
  c->lr=c->r[0]; // 800E34A8
  c->r[1]=c->r[1]+0x00000010u; // 800E34AC
  return; // 800E34B0
}

// fn_800E34B4
void f_800E34B4(Ctx* __restrict c) {
  f_801E65AC(c); return; // 800E34B4
}

// fn_800E34B8
void f_800E34B8(Ctx* __restrict c) {
  f_801E67DC(c); return; // 800E34B8
}

// fn_800E34BC
void f_800E34BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E34BC
  c->r[0]=c->lr; // 800E34C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E34C4
  c->lr=0x800E34CCu; f_800A23BC(c); // 800E34C8
  c->lr=0x800E34D0u; f_800ED070(c); // 800E34CC
  c->r[3]=0u+0x00000000u; // 800E34D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E34D4
  c->lr=c->r[0]; // 800E34D8
  c->r[1]=c->r[1]+0x00000010u; // 800E34DC
  return; // 800E34E0
}

// fn_800E34E4
void f_800E34E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E34E4
  c->r[0]=c->lr; // 800E34E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E34EC
  c->lr=0x800E34F4u; f_800A23BC(c); // 800E34F0
  c->lr=0x800E34F8u; f_800ED07C(c); // 800E34F4
  c->r[3]=0u+0x00000000u; // 800E34F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E34FC
  c->lr=c->r[0]; // 800E3500
  c->r[1]=c->r[1]+0x00000010u; // 800E3504
  return; // 800E3508
}

// fn_800E350C
void f_800E350C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E350C
  c->r[0]=c->lr; // 800E3510
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3514
  c->r[4]=c->r[3]|c->r[3]; // 800E3518
  c->r[3]=0u+0x00000000u; // 800E351C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800E3520
  c->lr=0x800E3528u; f_800BAB40(c); // 800E3524
  c->r[3]=0u+0x00000000u; // 800E3528
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E352C
  c->lr=c->r[0]; // 800E3530
  c->r[1]=c->r[1]+0x00000010u; // 800E3534
  return; // 800E3538
}

// fn_800E353C
void f_800E353C(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800E353C
  c->r[3]=0u+0x00000000u; // 800E3540
  c->r[4]=R32(c->r[4]+0x00000000u); // 800E3544
  f_800BABD0(c); return; // 800E3548
}

// fn_800E354C
void f_800E354C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E354C
  c->r[0]=c->lr; // 800E3550
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3554
  c->r[4]=c->r[3]|c->r[3]; // 800E3558
  c->r[3]=0u+0x00000000u; // 800E355C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800E3560
  c->lr=0x800E3568u; f_800BAB88(c); // 800E3564
  c->r[3]=0u+0x00000000u; // 800E3568
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E356C
  c->lr=c->r[0]; // 800E3570
  c->r[1]=c->r[1]+0x00000010u; // 800E3574
  return; // 800E3578
}

// fn_800E357C
void f_800E357C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E357C
  c->r[0]=c->lr; // 800E3580
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3584
  c->r[4]=c->r[3]|c->r[3]; // 800E3588
  c->r[3]=0u+0x00000001u; // 800E358C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800E3590
  c->lr=0x800E3598u; f_800BAB40(c); // 800E3594
  c->r[3]=0u+0x00000000u; // 800E3598
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E359C
  c->lr=c->r[0]; // 800E35A0
  c->r[1]=c->r[1]+0x00000010u; // 800E35A4
  return; // 800E35A8
}

// fn_800E35AC
void f_800E35AC(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800E35AC
  c->r[3]=0u+0x00000001u; // 800E35B0
  c->r[4]=R32(c->r[4]+0x00000000u); // 800E35B4
  f_800BABD0(c); return; // 800E35B8
}

// fn_800E35BC
void f_800E35BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E35BC
  c->r[0]=c->lr; // 800E35C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E35C4
  c->r[4]=c->r[3]|c->r[3]; // 800E35C8
  c->r[3]=0u+0x00000001u; // 800E35CC
  c->r[4]=R32(c->r[4]+0x00000000u); // 800E35D0
  c->lr=0x800E35D8u; f_800BAB88(c); // 800E35D4
  c->r[3]=0u+0x00000000u; // 800E35D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E35DC
  c->lr=c->r[0]; // 800E35E0
  c->r[1]=c->r[1]+0x00000010u; // 800E35E4
  return; // 800E35E8
}

// fn_800E35EC
void f_800E35EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E35EC
  c->r[0]=c->lr; // 800E35F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E35F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E35F8
  c->r[31]=c->r[3]|c->r[3]; // 800E35FC
  c->lr=0x800E3604u; f_800A23BC(c); // 800E3600
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3604
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E3608
  c->lr=0x800E3610u; f_800E2E54(c); // 800E360C
  c->r[3]=0u+0x00000000u; // 800E3610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3614
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3618
  c->lr=c->r[0]; // 800E361C
  c->r[1]=c->r[1]+0x00000010u; // 800E3620
  return; // 800E3624
}

// fn_800E3628
void f_800E3628(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3628
  c->r[0]=c->lr; // 800E362C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3630
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3634
  c->r[31]=c->r[3]|c->r[3]; // 800E3638
  c->lr=0x800E3640u; f_800A23BC(c); // 800E363C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3640
  c->lr=0x800E3648u; f_800E2E64(c); // 800E3644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3648
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E364C
  c->lr=c->r[0]; // 800E3650
  c->r[1]=c->r[1]+0x00000010u; // 800E3654
  return; // 800E3658
}

// fn_800E365C
void f_800E365C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E365C
  c->r[0]=c->lr; // 800E3660
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3664
  c->lr=0x800E366Cu; f_800A23BC(c); // 800E3668
  c->lr=0x800E3670u; f_800C23CC(c); // 800E366C
  c->r[3]=0u+0x00000000u; // 800E3670
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3674
  c->lr=c->r[0]; // 800E3678
  c->r[1]=c->r[1]+0x00000010u; // 800E367C
  return; // 800E3680
}

// fn_800E3684
void f_800E3684(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3684
  c->r[0]=c->lr; // 800E3688
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E368C
  c->lr=0x800E3694u; f_800A23BC(c); // 800E3690
  c->lr=0x800E3698u; f_800BB7E0(c); // 800E3694
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3698
  c->lr=c->r[0]; // 800E369C
  c->r[1]=c->r[1]+0x00000010u; // 800E36A0
  return; // 800E36A4
}

// fn_800E36A8
void f_800E36A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E36A8
  c->r[0]=c->lr; // 800E36AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E36B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E36B4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800E36B8
  c->lr=0x800E36C0u; f_800A23BC(c); // 800E36BC
  c->lr=0x800E36C4u; f_800BB7E0(c); // 800E36C0
  c->r[0]=c->r[3]-c->r[31]; // 800E36C4
  c->r[0]=cntlz(c->r[0]); // 800E36C8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E36CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E36D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E36D4
  c->lr=c->r[0]; // 800E36D8
  c->r[1]=c->r[1]+0x00000010u; // 800E36DC
  return; // 800E36E0
}

// fn_800E36E4
void f_800E36E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E36E4
  c->r[0]=c->lr; // 800E36E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E36EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E36F0
  c->r[31]=c->r[3]|c->r[3]; // 800E36F4
  c->lr=0x800E36FCu; f_800A23BC(c); // 800E36F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E36FC
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E3700
  c->lr=0x800E3708u; f_800ED088(c); // 800E3704
  c->r[3]=0u+0x00000000u; // 800E3708
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E370C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3710
  c->lr=c->r[0]; // 800E3714
  c->r[1]=c->r[1]+0x00000010u; // 800E3718
  return; // 800E371C
}

// fn_800E3720
void f_800E3720(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3720
  c->r[0]=c->lr; // 800E3724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E372C
  c->r[31]=c->r[3]|c->r[3]; // 800E3730
  c->lr=0x800E3738u; f_800A23BC(c); // 800E3734
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3738
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E373C
  c->lr=0x800E3744u; f_800ED0A0(c); // 800E3740
  c->r[3]=0u+0x00000000u; // 800E3744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3748
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E374C
  c->lr=c->r[0]; // 800E3750
  c->r[1]=c->r[1]+0x00000010u; // 800E3754
  return; // 800E3758
}

// fn_800E375C
void f_800E375C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E375C
  c->r[0]=c->lr; // 800E3760
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3764
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3768
  c->r[31]=c->r[3]|c->r[3]; // 800E376C
  c->lr=0x800E3774u; f_800A23BC(c); // 800E3770
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3774
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E3778
  c->lr=0x800E3780u; f_800ED0B8(c); // 800E377C
  c->r[3]=0u+0x00000000u; // 800E3780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3784
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3788
  c->lr=c->r[0]; // 800E378C
  c->r[1]=c->r[1]+0x00000010u; // 800E3790
  return; // 800E3794
}

// fn_800E3798
void f_800E3798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3798
  c->r[0]=c->lr; // 800E379C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E37A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E37A4
  c->r[31]=c->r[3]|c->r[3]; // 800E37A8
  c->lr=0x800E37B0u; f_800A23BC(c); // 800E37AC
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E37B0
  c->lr=0x800E37B8u; f_800ED0C8(c); // 800E37B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E37B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E37BC
  c->lr=c->r[0]; // 800E37C0
  c->r[1]=c->r[1]+0x00000010u; // 800E37C4
  return; // 800E37C8
}

// fn_800E37CC
void f_800E37CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E37CC
  c->r[0]=c->lr; // 800E37D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E37D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E37D8
  c->r[31]=c->r[3]|c->r[3]; // 800E37DC
  c->lr=0x800E37E4u; f_800A23BC(c); // 800E37E0
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E37E4
  c->lr=0x800E37ECu; f_800BB774(c); // 800E37E8
  c->r[3]=0u+0x00000000u; // 800E37EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E37F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E37F4
  c->lr=c->r[0]; // 800E37F8
  c->r[1]=c->r[1]+0x00000010u; // 800E37FC
  return; // 800E3800
}

// fn_800E3804
void f_800E3804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3804
  c->r[0]=c->lr; // 800E3808
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E380C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3810
  c->r[31]=c->r[3]|c->r[3]; // 800E3814
  c->lr=0x800E381Cu; f_8007B524(c); // 800E3818
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E381C
  c->lr=0x800E3824u; f_800A234C(c); // 800E3820
  c->r[3]=0u+0x00000000u; // 800E3824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3828
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E382C
  c->lr=c->r[0]; // 800E3830
  c->r[1]=c->r[1]+0x00000010u; // 800E3834
  return; // 800E3838
}

// fn_800E383C
void f_800E383C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E383C
  c->r[0]=c->lr; // 800E3840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3848
  c->r[31]=c->r[3]|c->r[3]; // 800E384C
  c->lr=0x800E3854u; f_8007B524(c); // 800E3850
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3854
  c->lr=0x800E385Cu; f_800A2380(c); // 800E3858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E385C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3860
  c->lr=c->r[0]; // 800E3864
  c->r[1]=c->r[1]+0x00000010u; // 800E3868
  return; // 800E386C
}

// fn_800E3870
void f_800E3870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3870
  c->r[0]=c->lr; // 800E3874
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3878
  c->r[3]=0u+0x00000001u; // 800E387C
  c->lr=0x800E3884u; f_8005D714(c); // 800E3880
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800E3884
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800E3888
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800E388C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3890
  c->lr=c->r[0]; // 800E3894
  c->r[1]=c->r[1]+0x00000010u; // 800E3898
  return; // 800E389C
}

// fn_800E38A0
void f_800E38A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38A0
  c->r[0]=c->lr; // 800E38A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E38A8
  c->lr=0x800E38B0u; f_8007B524(c); // 800E38AC
  c->r[4]=0u+0x00000000u; // 800E38B0
  c->lr=0x800E38B8u; f_8023BBB4(c); // 800E38B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E38B8
  c->lr=c->r[0]; // 800E38BC
  c->r[1]=c->r[1]+0x00000010u; // 800E38C0
  return; // 800E38C4
}

// fn_800E38C8
void f_800E38C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E38C8
  c->r[0]=c->lr; // 800E38CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E38D0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800E38D4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800E38D8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E38DC
  c->lr=0x800E38E4u; f_800A23BC(c); // 800E38E0
  c->f[1]=c->f[31]; // 800E38E4
  c->lr=0x800E38ECu; f_800ED0D8(c); // 800E38E8
  c->r[3]=0u+0x00000000u; // 800E38EC
  c->r[0]=0u+0x00000018u; // 800E38F0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E38F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800E38F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E38FC
  c->lr=c->r[0]; // 800E3900
  c->r[1]=c->r[1]+0x00000020u; // 800E3904
  return; // 800E3908
}

// fn_800E390C
void f_800E390C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E390C
  c->r[0]=c->lr; // 800E3910
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3914
  c->lr=0x800E391Cu; f_800A23BC(c); // 800E3918
  c->lr=0x800E3920u; f_800ED0E8(c); // 800E391C
  c->r[3]=0u+0x00000000u; // 800E3920
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3924
  c->lr=c->r[0]; // 800E3928
  c->r[1]=c->r[1]+0x00000010u; // 800E392C
  return; // 800E3930
}

// fn_800E3934
void f_800E3934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3934
  c->r[0]=c->lr; // 800E3938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E393C
  c->lr=0x800E3944u; f_800A23BC(c); // 800E3940
  c->lr=0x800E3948u; f_800ED0F4(c); // 800E3944
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3948
  c->lr=c->r[0]; // 800E394C
  c->r[1]=c->r[1]+0x00000010u; // 800E3950
  return; // 800E3954
}

// fn_800E3958
void f_800E3958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3958
  c->r[0]=c->lr; // 800E395C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3960
  c->r[3]=0u+0x00000001u; // 800E3964
  c->lr=0x800E396Cu; f_8005D9C8(c); // 800E3968
  c->lr=0x800E3970u; f_8007B524(c); // 800E396C
  c->lr=0x800E3974u; f_8009CE44(c); // 800E3970
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3974
  c->lr=c->r[0]; // 800E3978
  c->r[1]=c->r[1]+0x00000010u; // 800E397C
  return; // 800E3980
}

// fn_800E3984
void f_800E3984(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3984
  c->r[0]=c->lr; // 800E3988
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E398C
  c->r[3]=0u+0x00000001u; // 800E3990
  c->lr=0x800E3998u; f_8005D9C8(c); // 800E3994
  c->lr=0x800E399Cu; f_800A23BC(c); // 800E3998
  c->lr=0x800E39A0u; f_800A23C4(c); // 800E399C
  c->lr=0x800E39A4u; f_800D8164(c); // 800E39A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E39A4
  c->lr=c->r[0]; // 800E39A8
  c->r[1]=c->r[1]+0x00000010u; // 800E39AC
  return; // 800E39B0
}

// fn_800E39B4
void f_800E39B4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800E39B4
  return; // 800E39B8
}

// fn_800E39BC
void f_800E39BC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800E39BC
  return; // 800E39C0
}

// fn_800E39C4
void f_800E39C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E39C4
  c->r[0]=c->lr; // 800E39C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E39CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E39D0
  c->r[31]=c->r[3]|c->r[3]; // 800E39D4
  c->lr=0x800E39DCu; f_800A23BC(c); // 800E39D8
  c->lr=0x800E39E0u; f_800BB800(c); // 800E39DC
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E39E0
  c->lr=0x800E39E8u; f_800BBD98(c); // 800E39E4
  c->r[31]=c->r[3]|c->r[3]; // 800E39E8
  c->lr=0x800E39F0u; f_800A23BC(c); // 800E39EC
  c->lr=0x800E39F4u; f_800BB800(c); // 800E39F0
  c->r[4]=c->r[31]|c->r[31]; // 800E39F4
  c->lr=0x800E39FCu; f_800ED110(c); // 800E39F8
  c->r[3]=0u+0x00000000u; // 800E39FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3A00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A04
  c->lr=c->r[0]; // 800E3A08
  c->r[1]=c->r[1]+0x00000010u; // 800E3A0C
  return; // 800E3A10
}

// fn_800E3A14
void f_800E3A14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3A14
  c->r[0]=c->lr; // 800E3A18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3A1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3A20
  c->r[31]=c->r[3]|c->r[3]; // 800E3A24
  c->lr=0x800E3A2Cu; f_800A23BC(c); // 800E3A28
  c->lr=0x800E3A30u; f_800BB800(c); // 800E3A2C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3A30
  c->lr=0x800E3A38u; f_800ED118(c); // 800E3A34
  c->r[3]=0u+0x00000000u; // 800E3A38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3A3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A40
  c->lr=c->r[0]; // 800E3A44
  c->r[1]=c->r[1]+0x00000010u; // 800E3A48
  return; // 800E3A4C
}

// fn_800E3A50
void f_800E3A50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3A50
  c->r[0]=c->lr; // 800E3A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3A58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3A5C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800E3A60
  cmps(c,0,(int32_t)c->r[31],0); // 800E3A64
  if (!crb(c,0)) { goto L_800E3A74; } // 800E3A68
  c->r[31]=0u+0x00000000u; // 800E3A6C
  goto L_800E3A80; // 800E3A70
L_800E3A74:;
  cmps(c,0,(int32_t)c->r[31],1); // 800E3A74
  if (!crb(c,1)) { goto L_800E3A80; } // 800E3A78
  c->r[31]=0u+0x00000001u; // 800E3A7C
L_800E3A80:;
  c->lr=0x800E3A84u; f_800A23BC(c); // 800E3A80
  c->r[4]=c->r[31]|c->r[31]; // 800E3A84
  c->lr=0x800E3A8Cu; f_800C23DC(c); // 800E3A88
  c->r[3]=0u+0x00000000u; // 800E3A8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3A90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3A94
  c->lr=c->r[0]; // 800E3A98
  c->r[1]=c->r[1]+0x00000010u; // 800E3A9C
  return; // 800E3AA0
}

// fn_800E3AA4
void f_800E3AA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3AA4
  c->r[0]=c->lr; // 800E3AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3AAC
  c->lr=0x800E3AB4u; f_800A23BC(c); // 800E3AB0
  c->r[4]=0u+0x00000001u; // 800E3AB4
  c->r[5]=0u+0x00000001u; // 800E3AB8
  c->lr=0x800E3AC0u; f_800E3060(c); // 800E3ABC
  c->r[3]=0u+0x00000000u; // 800E3AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3AC4
  c->lr=c->r[0]; // 800E3AC8
  c->r[1]=c->r[1]+0x00000010u; // 800E3ACC
  return; // 800E3AD0
}

// fn_800E3AD4
void f_800E3AD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3AD4
  c->r[0]=c->lr; // 800E3AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3ADC
  c->lr=0x800E3AE4u; f_800A23BC(c); // 800E3AE0
  c->r[4]=0u+0x00000001u; // 800E3AE4
  c->r[5]=0u+0x00000000u; // 800E3AE8
  c->lr=0x800E3AF0u; f_800E3060(c); // 800E3AEC
  c->r[3]=0u+0x00000000u; // 800E3AF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3AF4
  c->lr=c->r[0]; // 800E3AF8
  c->r[1]=c->r[1]+0x00000010u; // 800E3AFC
  return; // 800E3B00
}

// fn_800E3B04
void f_800E3B04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3B04
  c->r[0]=c->lr; // 800E3B08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3B0C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800E3B10
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800E3B14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E3B18
  c->lr=0x800E3B20u; f_800A23BC(c); // 800E3B1C
  c->r[4]=0u+0x00000001u; // 800E3B20
  c->r[5]=0u+0x00000001u; // 800E3B24
  c->lr=0x800E3B2Cu; f_800E3060(c); // 800E3B28
  c->lr=0x800E3B30u; f_800A23BC(c); // 800E3B2C
  c->r[4]=0u+0x00000001u; // 800E3B30
  c->r[5]=0u+0x00000000u; // 800E3B34
  c->lr=0x800E3B3Cu; f_800E30B4(c); // 800E3B38
  c->r[3]=0u+0x00000000u; // 800E3B3C
  c->r[4]=0u+0x00000000u; // 800E3B40
  c->r[5]=0u+0x00000000u; // 800E3B44
  c->f[1]=c->f[31]; // 800E3B48
  c->lr=0x800E3B50u; f_800B8308(c); // 800E3B4C
  c->r[3]=0u+0x00000000u; // 800E3B50
  c->r[0]=0u+0x00000018u; // 800E3B54
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E3B58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800E3B5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3B60
  c->lr=c->r[0]; // 800E3B64
  c->r[1]=c->r[1]+0x00000020u; // 800E3B68
  return; // 800E3B6C
}

// fn_800E3B70
void f_800E3B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3B70
  c->r[0]=c->lr; // 800E3B74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3B78
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800E3B7C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800E3B80
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E3B84
  c->lr=0x800E3B8Cu; f_800A23BC(c); // 800E3B88
  c->r[4]=0u+0x00000001u; // 800E3B8C
  c->r[5]=0u+0x00000001u; // 800E3B90
  c->lr=0x800E3B98u; f_800E30B4(c); // 800E3B94
  c->r[3]=0u+0x00000000u; // 800E3B98
  c->r[4]=0u+0x00000000u; // 800E3B9C
  c->r[5]=0u+0x00000000u; // 800E3BA0
  c->f[1]=c->f[31]; // 800E3BA4
  c->lr=0x800E3BACu; f_800B8440(c); // 800E3BA8
  c->r[3]=0u+0x00000000u; // 800E3BAC
  c->r[0]=0u+0x00000018u; // 800E3BB0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E3BB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800E3BB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3BBC
  c->lr=c->r[0]; // 800E3BC0
  c->r[1]=c->r[1]+0x00000020u; // 800E3BC4
  return; // 800E3BC8
}

// fn_800E3BCC
void f_800E3BCC(Ctx* __restrict c) {
  f_800B8578(c); return; // 800E3BCC
}

// fn_800E3BD0
void f_800E3BD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3BD0
  c->r[0]=c->lr; // 800E3BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3BD8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3BDC
  c->r[3]=0u+0x000000FFu; // 800E3BE0
  c->r[4]=0u+0x000000FFu; // 800E3BE4
  c->r[5]=0u+0x000000FFu; // 800E3BE8
  c->lr=0x800E3BF0u; f_800B8308(c); // 800E3BEC
  c->r[3]=0u+0x00000000u; // 800E3BF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3BF4
  c->lr=c->r[0]; // 800E3BF8
  c->r[1]=c->r[1]+0x00000010u; // 800E3BFC
  return; // 800E3C00
}

// fn_800E3C04
void f_800E3C04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3C04
  c->r[0]=c->lr; // 800E3C08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3C0C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800E3C10
  c->r[3]=0u+0x000000FFu; // 800E3C14
  c->r[4]=0u+0x000000FFu; // 800E3C18
  c->r[5]=0u+0x000000FFu; // 800E3C1C
  c->lr=0x800E3C24u; f_800B8440(c); // 800E3C20
  c->r[3]=0u+0x00000000u; // 800E3C24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3C28
  c->lr=c->r[0]; // 800E3C2C
  c->r[1]=c->r[1]+0x00000010u; // 800E3C30
  return; // 800E3C34
}

// fn_800E3C38
void f_800E3C38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3C38
  c->r[0]=c->lr; // 800E3C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3C40
  c->lr=0x800E3C48u; f_800A23BC(c); // 800E3C44
  c->r[4]=0u+0x00000001u; // 800E3C48
  c->lr=0x800E3C50u; f_800E2514(c); // 800E3C4C
  c->r[3]=0u+0x00000000u; // 800E3C50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3C54
  c->lr=c->r[0]; // 800E3C58
  c->r[1]=c->r[1]+0x00000010u; // 800E3C5C
  return; // 800E3C60
}

// fn_800E3C64
void f_800E3C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3C64
  c->r[0]=c->lr; // 800E3C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3C6C
  c->lr=0x800E3C74u; f_800A23BC(c); // 800E3C70
  c->r[4]=0u+0x00000000u; // 800E3C74
  c->lr=0x800E3C7Cu; f_800E2514(c); // 800E3C78
  c->r[3]=0u+0x00000000u; // 800E3C7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3C80
  c->lr=c->r[0]; // 800E3C84
  c->r[1]=c->r[1]+0x00000010u; // 800E3C88
  return; // 800E3C8C
}

// fn_800E3C90
void f_800E3C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3C90
  c->r[0]=c->lr; // 800E3C94
  W32(c->r[1]+0x00000044u,c->r[0]); // 800E3C98
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800E3C9C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800E3CA0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800E3CA4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800E3CA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800E3CAC
  c->r[4]=c->r[3]|c->r[3]; // 800E3CB0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E3CB4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E3CB8
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 800E3CBC
  c->r[3]=c->r[1]+0x00000008u; // 800E3CC0
  c->r[4]=R32(c->r[4]+0x00000008u); // 800E3CC4
  c->lr=0x800E3CCCu; f_8004B068(c); // 800E3CC8
  c->r[3]=c->r[31]|c->r[31]; // 800E3CCC
  c->f[1]=c->f[31]; // 800E3CD0
  c->f[2]=c->f[30]; // 800E3CD4
  {uint32_t ea=c->r[2]+0xFFFF894Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800E3CD8
  c->f[4]=c->f[3]; // 800E3CDC
  c->r[4]=c->r[1]+0x00000008u; // 800E3CE0
  c->r[5]=0u+0x00000003u; // 800E3CE4
  c->lr=0x800E3CECu; f_800615FC(c); // 800E3CE8
  c->r[3]=c->r[1]+0x00000008u; // 800E3CEC
  c->r[4]=0u+0xFFFFFFFFu; // 800E3CF0
  c->lr=0x800E3CF8u; f_80047BD4(c); // 800E3CF4
  c->r[3]=0u+0x00000000u; // 800E3CF8
  c->r[0]=0u+0x00000038u; // 800E3CFC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E3D00
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800E3D04
  c->r[0]=0u+0x00000028u; // 800E3D08
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800E3D0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800E3D10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800E3D14
  c->r[0]=R32(c->r[1]+0x00000044u); // 800E3D18
  c->lr=c->r[0]; // 800E3D1C
  c->r[1]=c->r[1]+0x00000040u; // 800E3D20
  return; // 800E3D24
}

// fn_800E3D28
void f_800E3D28(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800E3D28
  return; // 800E3D2C
}

// fn_800E3D30
void f_800E3D30(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800E3D30
  return; // 800E3D34
}

// fn_800E3D38
void f_800E3D38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3D38
  c->r[0]=c->lr; // 800E3D3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3D40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3D44
  c->r[31]=c->r[3]|c->r[3]; // 800E3D48
  c->lr=0x800E3D50u; f_800A23BC(c); // 800E3D4C
  c->lr=0x800E3D54u; f_800C23F4(c); // 800E3D50
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E3D54
  c->lr=0x800E3D5Cu; f_800E1F68(c); // 800E3D58
  c->r[3]=0u+0x00000000u; // 800E3D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E3D60
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3D64
  c->lr=c->r[0]; // 800E3D68
  c->r[1]=c->r[1]+0x00000010u; // 800E3D6C
  return; // 800E3D70
}

// fn_800E3D74
void f_800E3D74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3D74
  c->r[0]=c->lr; // 800E3D78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3D7C
  c->lr=0x800E3D84u; f_800A23BC(c); // 800E3D80
  c->lr=0x800E3D88u; f_800C23F4(c); // 800E3D84
  c->lr=0x800E3D8Cu; f_800E1FB0(c); // 800E3D88
  c->r[3]=0u+0x00000000u; // 800E3D8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3D90
  c->lr=c->r[0]; // 800E3D94
  c->r[1]=c->r[1]+0x00000010u; // 800E3D98
  return; // 800E3D9C
}

// fn_800E3DA0
void f_800E3DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3DA0
  c->r[0]=c->lr; // 800E3DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3DA8
  c->lr=0x800E3DB0u; f_800A23BC(c); // 800E3DAC
  c->lr=0x800E3DB4u; f_800C23F4(c); // 800E3DB0
  c->lr=0x800E3DB8u; f_800E2034(c); // 800E3DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3DB8
  c->lr=c->r[0]; // 800E3DBC
  c->r[1]=c->r[1]+0x00000010u; // 800E3DC0
  return; // 800E3DC4
}

// fn_800E3DC8
void f_800E3DC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3DC8
  c->r[0]=c->lr; // 800E3DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3DD0
  c->lr=0x800E3DD8u; f_800A23BC(c); // 800E3DD4
  c->lr=0x800E3DDCu; f_800C23F4(c); // 800E3DD8
  c->lr=0x800E3DE0u; f_800E2008(c); // 800E3DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3DE0
  c->lr=c->r[0]; // 800E3DE4
  c->r[1]=c->r[1]+0x00000010u; // 800E3DE8
  return; // 800E3DEC
}

// fn_800E3DF0
void f_800E3DF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3DF0
  c->r[0]=c->lr; // 800E3DF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3DF8
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E3DFC
  c->lr=0x800E3E04u; f_800B96A4(c); // 800E3E00
  c->lr=0x800E3E08u; f_800A23BC(c); // 800E3E04
  c->lr=0x800E3E0Cu; f_800A23B4(c); // 800E3E08
  c->lr=0x800E3E10u; f_800E0DA0(c); // 800E3E0C
  c->lr=0x800E3E14u; f_800A23BC(c); // 800E3E10
  c->lr=0x800E3E18u; f_800A23B4(c); // 800E3E14
  c->lr=0x800E3E1Cu; f_800E0DD4(c); // 800E3E18
  c->r[3]=0u+0x00000000u; // 800E3E1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3E20
  c->lr=c->r[0]; // 800E3E24
  c->r[1]=c->r[1]+0x00000010u; // 800E3E28
  return; // 800E3E2C
}

// fn_800E3E30
void f_800E3E30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3E30
  c->r[0]=c->lr; // 800E3E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3E38
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E3E3C
  c->lr=0x800E3E44u; f_800B970C(c); // 800E3E40
  c->r[3]=0u+0x00000000u; // 800E3E44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3E48
  c->lr=c->r[0]; // 800E3E4C
  c->r[1]=c->r[1]+0x00000010u; // 800E3E50
  return; // 800E3E54
}

// fn_800E3E58
void f_800E3E58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3E58
  c->r[0]=c->lr; // 800E3E5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3E60
  c->lr=0x800E3E68u; f_800A23BC(c); // 800E3E64
  c->lr=0x800E3E6Cu; f_800BB818(c); // 800E3E68
  c->r[4]=0u+0x00000001u; // 800E3E6C
  c->lr=0x800E3E74u; f_800BBF74(c); // 800E3E70
  cmps(c,0,(int32_t)c->r[3],0); // 800E3E74
  if (crb(c,2)) { goto L_800E3E84; } // 800E3E78
  c->r[4]=0u+0x00000001u; // 800E3E7C
  c->lr=0x800E3E84u; f_800ED168(c); // 800E3E80
L_800E3E84:;
  c->r[3]=0u+0x00000000u; // 800E3E84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3E88
  c->lr=c->r[0]; // 800E3E8C
  c->r[1]=c->r[1]+0x00000010u; // 800E3E90
  return; // 800E3E94
}

// fn_800E3E98
void f_800E3E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3E98
  c->r[0]=c->lr; // 800E3E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3EA0
  c->lr=0x800E3EA8u; f_800A23BC(c); // 800E3EA4
  c->lr=0x800E3EACu; f_800BB818(c); // 800E3EA8
  c->r[4]=0u+0x00000001u; // 800E3EAC
  c->lr=0x800E3EB4u; f_800BBF74(c); // 800E3EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800E3EB4
  if (crb(c,2)) { goto L_800E3EC4; } // 800E3EB8
  c->r[4]=0u+0x00000000u; // 800E3EBC
  c->lr=0x800E3EC4u; f_800ED168(c); // 800E3EC0
L_800E3EC4:;
  c->r[3]=0u+0x00000000u; // 800E3EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3EC8
  c->lr=c->r[0]; // 800E3ECC
  c->r[1]=c->r[1]+0x00000010u; // 800E3ED0
  return; // 800E3ED4
}

// fn_800E3ED8
void f_800E3ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3ED8
  c->r[0]=c->lr; // 800E3EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3EE0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E3EE4
  c->lr=0x800E3EECu; f_800B9774(c); // 800E3EE8
  c->r[3]=0u+0x00000000u; // 800E3EEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3EF0
  c->lr=c->r[0]; // 800E3EF4
  c->r[1]=c->r[1]+0x00000010u; // 800E3EF8
  return; // 800E3EFC
}

// fn_800E3F00
void f_800E3F00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3F00
  c->r[0]=c->lr; // 800E3F04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3F08
  c->r[3]=R32(c->r[3]+0x00000000u); // 800E3F0C
  c->lr=0x800E3F14u; f_800B97B8(c); // 800E3F10
  c->r[3]=0u+0x00000000u; // 800E3F14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3F18
  c->lr=c->r[0]; // 800E3F1C
  c->r[1]=c->r[1]+0x00000010u; // 800E3F20
  return; // 800E3F24
}

// fn_800E3F28
void f_800E3F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3F28
  c->r[0]=c->lr; // 800E3F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3F30
  c->lr=0x800E3F38u; f_800A23BC(c); // 800E3F34
  c->lr=0x800E3F3Cu; f_800BB818(c); // 800E3F38
  c->r[4]=0u+0x00000001u; // 800E3F3C
  c->lr=0x800E3F44u; f_800BBF74(c); // 800E3F40
  cmps(c,0,(int32_t)c->r[3],0); // 800E3F44
  if (crb(c,2)) { goto L_800E3F54; } // 800E3F48
  c->lr=0x800E3F50u; f_800ED17C(c); // 800E3F4C
  goto L_800E3F58; // 800E3F50
L_800E3F54:;
  c->r[3]=0u+0x00000000u; // 800E3F54
L_800E3F58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3F58
  c->lr=c->r[0]; // 800E3F5C
  c->r[1]=c->r[1]+0x00000010u; // 800E3F60
  return; // 800E3F64
}

// fn_800E3F68
void f_800E3F68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3F68
  c->r[0]=c->lr; // 800E3F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3F70
  c->lr=0x800E3F78u; f_800A23BC(c); // 800E3F74
  c->lr=0x800E3F7Cu; f_800BB818(c); // 800E3F78
  c->r[4]=0u+0x00000001u; // 800E3F7C
  c->lr=0x800E3F84u; f_800BBF74(c); // 800E3F80
  cmps(c,0,(int32_t)c->r[3],0); // 800E3F84
  if (crb(c,2)) { goto L_800E3F94; } // 800E3F88
  c->lr=0x800E3F90u; f_800D3688(c); // 800E3F8C
  goto L_800E3F98; // 800E3F90
L_800E3F94:;
  c->r[3]=0u+0x00000001u; // 800E3F94
L_800E3F98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E3F98
  c->lr=c->r[0]; // 800E3F9C
  c->r[1]=c->r[1]+0x00000010u; // 800E3FA0
  return; // 800E3FA4
}

// fn_800E3FA8
void f_800E3FA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3FA8
  c->r[0]=c->lr; // 800E3FAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800E3FB0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800E3FB4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800E3FB8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E3FBC
  c->lr=0x800E3FC4u; f_800A23BC(c); // 800E3FC0
  c->lr=0x800E3FC8u; f_800A23B4(c); // 800E3FC4
  c->f[1]=c->f[31]; // 800E3FC8
  c->lr=0x800E3FD0u; f_800E0BA8(c); // 800E3FCC
  c->r[3]=0u+0x00000000u; // 800E3FD0
  c->r[0]=0u+0x00000018u; // 800E3FD4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E3FD8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800E3FDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800E3FE0
  c->lr=c->r[0]; // 800E3FE4
  c->r[1]=c->r[1]+0x00000020u; // 800E3FE8
  return; // 800E3FEC
}

// fn_800E3FF0
void f_800E3FF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E3FF0
  c->r[0]=c->lr; // 800E3FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E3FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E3FFC
  c->r[31]=c->r[3]|c->r[3]; // 800E4000
  c->lr=0x800E4008u; f_800A23BC(c); // 800E4004
  c->lr=0x800E400Cu; f_800A23B4(c); // 800E4008
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E400C
  c->r[5]=0u+0x00000000u; // 800E4010
  c->lr=0x800E4018u; f_800E0C28(c); // 800E4014
  c->r[3]=0u+0x00000000u; // 800E4018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E401C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4020
  c->lr=c->r[0]; // 800E4024
  c->r[1]=c->r[1]+0x00000010u; // 800E4028
  return; // 800E402C
}

// fn_800E4030
void f_800E4030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4030
  c->r[0]=c->lr; // 800E4034
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4038
  c->lr=0x800E4040u; f_800A23BC(c); // 800E403C
  c->lr=0x800E4044u; f_800A23B4(c); // 800E4040
  c->lr=0x800E4048u; f_800A2410(c); // 800E4044
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4048
  c->lr=c->r[0]; // 800E404C
  c->r[1]=c->r[1]+0x00000010u; // 800E4050
  return; // 800E4054
}

// fn_800E4058
void f_800E4058(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4058
  c->r[0]=c->lr; // 800E405C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4060
  c->lr=0x800E4068u; f_800A23BC(c); // 800E4064
  c->lr=0x800E406Cu; f_800A23B4(c); // 800E4068
  c->lr=0x800E4070u; f_800E0C00(c); // 800E406C
  c->r[3]=0u+0x00000000u; // 800E4070
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4074
  c->lr=c->r[0]; // 800E4078
  c->r[1]=c->r[1]+0x00000010u; // 800E407C
  return; // 800E4080
}

// fn_800E4084
void f_800E4084(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4084
  c->r[0]=c->lr; // 800E4088
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E408C
  c->lr=0x800E4094u; f_800A23BC(c); // 800E4090
  c->lr=0x800E4098u; f_800A23B4(c); // 800E4094
  c->lr=0x800E409Cu; f_800E0BF0(c); // 800E4098
  c->r[3]=0u+0x00000000u; // 800E409C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E40A0
  c->lr=c->r[0]; // 800E40A4
  c->r[1]=c->r[1]+0x00000010u; // 800E40A8
  return; // 800E40AC
}

// fn_800E40B0
void f_800E40B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E40B0
  c->r[0]=c->lr; // 800E40B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E40B8
  c->lr=0x800E40C0u; f_800A23BC(c); // 800E40BC
  c->lr=0x800E40C4u; f_800A23B4(c); // 800E40C0
  c->lr=0x800E40C8u; f_800E0C10(c); // 800E40C4
  c->r[0]=cntlz(c->r[3]); // 800E40C8
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800E40CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E40D0
  c->lr=c->r[0]; // 800E40D4
  c->r[1]=c->r[1]+0x00000010u; // 800E40D8
  return; // 800E40DC
}

// fn_800E40E0
void f_800E40E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E40E0
  c->r[0]=c->lr; // 800E40E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E40E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E40EC
  c->r[31]=c->r[3]|c->r[3]; // 800E40F0
  c->lr=0x800E40F8u; f_800A23BC(c); // 800E40F4
  c->lr=0x800E40FCu; f_800A23B4(c); // 800E40F8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E40FC
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E4100
  c->lr=0x800E4108u; f_800E0DC4(c); // 800E4104
  c->r[3]=0u+0x00000000u; // 800E4108
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E410C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4110
  c->lr=c->r[0]; // 800E4114
  c->r[1]=c->r[1]+0x00000010u; // 800E4118
  return; // 800E411C
}

// fn_800E4120
void f_800E4120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4120
  c->r[0]=c->lr; // 800E4124
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E412C
  c->r[31]=c->r[3]|c->r[3]; // 800E4130
  c->lr=0x800E4138u; f_800A23BC(c); // 800E4134
  c->lr=0x800E413Cu; f_800A23B4(c); // 800E4138
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E413C
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E4140
  c->lr=0x800E4148u; f_800E0DEC(c); // 800E4144
  c->r[3]=0u+0x00000000u; // 800E4148
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E414C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4150
  c->lr=c->r[0]; // 800E4154
  c->r[1]=c->r[1]+0x00000010u; // 800E4158
  return; // 800E415C
}

// fn_800E4160
void f_800E4160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4160
  c->r[0]=c->lr; // 800E4164
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E416C
  c->r[31]=c->r[3]|c->r[3]; // 800E4170
  c->lr=0x800E4178u; f_800A23BC(c); // 800E4174
  c->lr=0x800E417Cu; f_800A23B4(c); // 800E4178
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E417C
  c->lr=0x800E4184u; f_800E0E04(c); // 800E4180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4184
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4188
  c->lr=c->r[0]; // 800E418C
  c->r[1]=c->r[1]+0x00000010u; // 800E4190
  return; // 800E4194
}

// fn_800E4198
void f_800E4198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4198
  c->r[0]=c->lr; // 800E419C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E41A0
  c->lr=0x800E41A8u; f_800A23BC(c); // 800E41A4
  c->lr=0x800E41ACu; f_800A23C4(c); // 800E41A8
  c->r[4]=0u+0x00000001u; // 800E41AC
  c->lr=0x800E41B4u; f_800D8804(c); // 800E41B0
  c->r[3]=0u+0x00000000u; // 800E41B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E41B8
  c->lr=c->r[0]; // 800E41BC
  c->r[1]=c->r[1]+0x00000010u; // 800E41C0
  return; // 800E41C4
}

// fn_800E41C8
void f_800E41C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E41C8
  c->r[0]=c->lr; // 800E41CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E41D0
  c->lr=0x800E41D8u; f_800A23BC(c); // 800E41D4
  c->lr=0x800E41DCu; f_800A23C4(c); // 800E41D8
  c->r[4]=0u+0x00000001u; // 800E41DC
  c->lr=0x800E41E4u; f_800D88CC(c); // 800E41E0
  c->r[3]=0u+0x00000000u; // 800E41E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E41E8
  c->lr=c->r[0]; // 800E41EC
  c->r[1]=c->r[1]+0x00000010u; // 800E41F0
  return; // 800E41F4
}

// fn_800E41F8
void f_800E41F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E41F8
  c->r[0]=c->lr; // 800E41FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4200
  c->lr=0x800E4208u; f_8007B524(c); // 800E4204
  c->lr=0x800E420Cu; f_8009D9FC(c); // 800E4208
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E420C
  c->lr=c->r[0]; // 800E4210
  c->r[1]=c->r[1]+0x00000010u; // 800E4214
  return; // 800E4218
}

// fn_800E421C
void f_800E421C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E421C
  c->r[0]=c->lr; // 800E4220
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4224
  c->lr=0x800E422Cu; f_8007B524(c); // 800E4228
  c->r[4]=0u+0x00000001u; // 800E422C
  c->lr=0x800E4234u; f_8009DA5C(c); // 800E4230
  c->r[3]=0u+0x00000000u; // 800E4234
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4238
  c->lr=c->r[0]; // 800E423C
  c->r[1]=c->r[1]+0x00000010u; // 800E4240
  return; // 800E4244
}

// fn_800E4248
void f_800E4248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4248
  c->r[0]=c->lr; // 800E424C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4250
  c->lr=0x800E4258u; f_8007B524(c); // 800E4254
  c->r[4]=0u+0x00000000u; // 800E4258
  c->lr=0x800E4260u; f_8009DA5C(c); // 800E425C
  c->r[3]=0u+0x00000000u; // 800E4260
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4264
  c->lr=c->r[0]; // 800E4268
  c->r[1]=c->r[1]+0x00000010u; // 800E426C
  return; // 800E4270
}

// fn_800E4274
void f_800E4274(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 800E4274
  return; // 800E4278
}

// fn_800E427C
void f_800E427C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E427C
  c->r[0]=c->lr; // 800E4280
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4284
  c->lr=0x800E428Cu; f_8007B524(c); // 800E4288
  c->lr=0x800E4290u; f_8009D260(c); // 800E428C
  c->r[3]=0u+0x00000000u; // 800E4290
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4294
  c->lr=c->r[0]; // 800E4298
  c->r[1]=c->r[1]+0x00000010u; // 800E429C
  return; // 800E42A0
}

// fn_800E42A4
void f_800E42A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E42A4
  c->r[0]=c->lr; // 800E42A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E42AC
  c->lr=0x800E42B4u; f_8007B524(c); // 800E42B0
  c->lr=0x800E42B8u; f_8009DA28(c); // 800E42B4
  c->r[3]=0u+0x00000000u; // 800E42B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E42BC
  c->lr=c->r[0]; // 800E42C0
  c->r[1]=c->r[1]+0x00000010u; // 800E42C4
  return; // 800E42C8
}

// fn_800E42CC
void f_800E42CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E42CC
  c->r[0]=c->lr; // 800E42D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E42D4
  c->lr=0x800E42DCu; f_8007B524(c); // 800E42D8
  c->lr=0x800E42E0u; f_8009DEB4(c); // 800E42DC
  c->r[3]=0u+0x00000000u; // 800E42E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E42E4
  c->lr=c->r[0]; // 800E42E8
  c->r[1]=c->r[1]+0x00000010u; // 800E42EC
  return; // 800E42F0
}

// fn_800E42F4
void f_800E42F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E42F4
  c->r[0]=c->lr; // 800E42F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E42FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E4300
  c->r[31]=c->r[3]|c->r[3]; // 800E4304
  c->lr=0x800E430Cu; f_800A23BC(c); // 800E4308
  c->lr=0x800E4310u; f_800A23C4(c); // 800E430C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E4310
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E4314
  c->lr=0x800E431Cu; f_800D8A64(c); // 800E4318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E431C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4320
  c->lr=c->r[0]; // 800E4324
  c->r[1]=c->r[1]+0x00000010u; // 800E4328
  return; // 800E432C
}

// fn_800E4330
void f_800E4330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4330
  c->r[0]=c->lr; // 800E4334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E433C
  c->r[31]=c->r[3]|c->r[3]; // 800E4340
  c->lr=0x800E4348u; f_800A23BC(c); // 800E4344
  c->lr=0x800E434Cu; f_800A23C4(c); // 800E4348
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E434C
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E4350
  c->lr=0x800E4358u; f_800D8BC0(c); // 800E4354
  c->r[3]=0u+0x00000000u; // 800E4358
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E435C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4360
  c->lr=c->r[0]; // 800E4364
  c->r[1]=c->r[1]+0x00000010u; // 800E4368
  return; // 800E436C
}

// fn_800E4370
void f_800E4370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4370
  c->r[0]=c->lr; // 800E4374
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4378
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E437C
  c->r[31]=c->r[3]|c->r[3]; // 800E4380
  c->lr=0x800E4388u; f_800A23BC(c); // 800E4384
  c->lr=0x800E438Cu; f_800A23C4(c); // 800E4388
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E438C
  c->r[5]=R32(c->r[31]+0x00000004u); // 800E4390
  c->lr=0x800E4398u; f_800D8AF0(c); // 800E4394
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4398
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E439C
  c->lr=c->r[0]; // 800E43A0
  c->r[1]=c->r[1]+0x00000010u; // 800E43A4
  return; // 800E43A8
}

// fn_800E43AC
void f_800E43AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E43AC
  c->r[0]=c->lr; // 800E43B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E43B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E43B8
  c->r[31]=c->r[3]|c->r[3]; // 800E43BC
  c->lr=0x800E43C4u; f_800A23BC(c); // 800E43C0
  c->lr=0x800E43C8u; f_800A23C4(c); // 800E43C4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E43C8
  c->lr=0x800E43D0u; f_800D8C58(c); // 800E43CC
  c->r[3]=0u+0x00000000u; // 800E43D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E43D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E43D8
  c->lr=c->r[0]; // 800E43DC
  c->r[1]=c->r[1]+0x00000010u; // 800E43E0
  return; // 800E43E4
}

// fn_800E43E8
void f_800E43E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E43E8
  c->r[0]=c->lr; // 800E43EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E43F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E43F4
  c->r[31]=c->r[3]|c->r[3]; // 800E43F8
  c->lr=0x800E4400u; f_800A23BC(c); // 800E43FC
  c->lr=0x800E4404u; f_800A23C4(c); // 800E4400
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E4404
  c->lr=0x800E440Cu; f_800D8C98(c); // 800E4408
  c->r[3]=0u+0x00000000u; // 800E440C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E4410
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4414
  c->lr=c->r[0]; // 800E4418
  c->r[1]=c->r[1]+0x00000010u; // 800E441C
  return; // 800E4420
}

// fn_800E4424
void f_800E4424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4424
  c->r[0]=c->lr; // 800E4428
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E442C
  c->lr=0x800E4434u; f_800A23BC(c); // 800E4430
  c->lr=0x800E4438u; f_800A23C4(c); // 800E4434
  c->lr=0x800E443Cu; f_800D8CD8(c); // 800E4438
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E443C
  c->lr=c->r[0]; // 800E4440
  c->r[1]=c->r[1]+0x00000010u; // 800E4444
  return; // 800E4448
}

// fn_800E444C
void f_800E444C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E444C
  c->r[0]=c->lr; // 800E4450
  W32(c->r[1]+0x00000224u,c->r[0]); // 800E4454
  c->lr=0x800E445Cu; f_8007B524(c); // 800E4458
  c->r[4]=c->r[1]+0x00000008u; // 800E445C
  c->lr=0x800E4464u; f_8009DB58(c); // 800E4460
  c->r[3]=R32(c->r[1]+0x00000024u); // 800E4464
  c->r[0]=R32(c->r[1]+0x00000224u); // 800E4468
  c->lr=c->r[0]; // 800E446C
  c->r[1]=c->r[1]+0x00000220u; // 800E4470
  return; // 800E4474
}

// fn_800E4478
void f_800E4478(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4478
  c->r[0]=c->lr; // 800E447C
  W32(c->r[1]+0x00000224u,c->r[0]); // 800E4480
  c->lr=0x800E4488u; f_8007B524(c); // 800E4484
  c->r[4]=c->r[1]+0x00000008u; // 800E4488
  c->lr=0x800E4490u; f_8009DB58(c); // 800E448C
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800E4490
  c->r[0]=R32(c->r[1]+0x00000224u); // 800E4494
  c->lr=c->r[0]; // 800E4498
  c->r[1]=c->r[1]+0x00000220u; // 800E449C
  return; // 800E44A0
}

// fn_800E44A4
void f_800E44A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E44A4
  c->r[0]=c->lr; // 800E44A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E44AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800E44B0
  c->r[31]=c->r[3]|c->r[3]; // 800E44B4
  c->lr=0x800E44BCu; f_8007B524(c); // 800E44B8
  c->r[4]=R32(c->r[31]+0x00000000u); // 800E44BC
  c->lr=0x800E44C4u; f_8009E4A8(c); // 800E44C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800E44C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E44C8
  c->lr=c->r[0]; // 800E44CC
  c->r[1]=c->r[1]+0x00000010u; // 800E44D0
  return; // 800E44D4
}

// fn_800E44D8
void f_800E44D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E44D8
  c->r[0]=c->lr; // 800E44DC
  W32(c->r[1]+0x00000224u,c->r[0]); // 800E44E0
  c->lr=0x800E44E8u; f_8007B524(c); // 800E44E4
  c->r[4]=c->r[1]+0x00000008u; // 800E44E8
  c->lr=0x800E44F0u; f_8009DB58(c); // 800E44EC
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800E44F0
  c->r[0]=R32(c->r[1]+0x00000224u); // 800E44F4
  c->lr=c->r[0]; // 800E44F8
  c->r[1]=c->r[1]+0x00000220u; // 800E44FC
  return; // 800E4500
}

// fn_800E4504
void f_800E4504(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4504
  c->r[0]=c->lr; // 800E4508
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E450C
  c->lr=0x800E4514u; f_8007B524(c); // 800E4510
  c->lr=0x800E4518u; f_8009CF14(c); // 800E4514
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4518
  c->lr=c->r[0]; // 800E451C
  c->r[1]=c->r[1]+0x00000010u; // 800E4520
  return; // 800E4524
}

// fn_800E4528
void f_800E4528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4528
  c->r[0]=c->lr; // 800E452C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4530
  c->lr=0x800E4538u; f_800A23BC(c); // 800E4534
  c->lr=0x800E453Cu; f_800E2A04(c); // 800E4538
  c->lr=0x800E4540u; f_8007B524(c); // 800E453C
  c->r[4]=0u+0x00000001u; // 800E4540
  c->lr=0x800E4548u; f_8009E7D8(c); // 800E4544
  c->r[3]=0u+0x00000000u; // 800E4548
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E454C
  c->lr=c->r[0]; // 800E4550
  c->r[1]=c->r[1]+0x00000010u; // 800E4554
  return; // 800E4558
}

// fn_800E455C
void f_800E455C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E455C
  c->r[0]=c->lr; // 800E4560
  W32(c->r[1]+0x00000014u,c->r[0]); // 800E4564
  c->lr=0x800E456Cu; f_8007B524(c); // 800E4568
  c->r[4]=0u+0x00000000u; // 800E456C
  c->lr=0x800E4574u; f_8009E7D8(c); // 800E4570
  c->r[3]=0u+0x00000000u; // 800E4574
  c->r[0]=R32(c->r[1]+0x00000014u); // 800E4578
  c->lr=c->r[0]; // 800E457C
  c->r[1]=c->r[1]+0x00000010u; // 800E4580
  return; // 800E4584
}

// fn_800E4588
void f_800E4588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800E4588
  c->r[0]=c->lr; // 800E458C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800E4590
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800E4594
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800E4598
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800E459C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 800E45A0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 800E45A4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 800E45A8
  c->r[3]=0u+0x00000001u; // 800E45AC
  c->lr=0x800E45B4u; f_8005D9C8(c); // 800E45B0
  c->lr=0x800E45B8u; f_8007B524(c); // 800E45B4
  c->r[4]=0u+0x00000000u; // 800E45B8
  c->lr=0x800E45C0u; f_8023BBB4(c); // 800E45BC
  cmps(c,0,(int32_t)c->r[3],2); // 800E45C0
  if (crb(c,2)) { goto L_800E4610; } // 800E45C4
  c->lr=0x800E45CCu; f_80047C90(c); // 800E45C8
  c->r[4]=0u+0x00000000u; // 800E45CC
  c->lr=0x800E45D4u; f_80058EA4(c); // 800E45D0
  c->lr=0x800E45D8u; f_80057D24(c); // 800E45D4
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E45D8
  fcmp(c,0,c->f[0],c->f[31]); // 800E45DC
  if (!crb(c,0)) { goto L_800E45EC; } // 800E45E0
  c->r[3]=0u+0x00000000u; // 800E45E4
  goto L_800E4638; // 800E45E8
L_800E45EC:;
  c->lr=0x800E45F0u; f_80047C90(c); // 800E45EC
  c->r[4]=0u+0x00000000u; // 800E45F0
  c->lr=0x800E45F8u; f_80058EA4(c); // 800E45F4
  c->lr=0x800E45FCu; f_80057D24(c); // 800E45F8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800E45FC
  fcmp(c,0,c->f[0],c->f[30]); // 800E4600
  if (!crb(c,1)) { goto L_800E4634; } // 800E4604
  c->r[3]=0u+0x00000000u; // 800E4608
  goto L_800E4638; // 800E460C
L_800E4610:;
  c->lr=0x800E4614u; f_80047C90(c); // 800E4610
  c->r[4]=0u+0x00000000u; // 800E4614
  c->lr=0x800E461Cu; f_80058EA4(c); // 800E4618
  c->r[4]=0u+0x00000010u; // 800E461C
  c->lr=0x800E4624u; f_80057B68(c); // 800E4620
  cmps(c,0,(int32_t)c->r[3],0); // 800E4624
  if (!crb(c,2)) { goto L_800E4634; } // 800E4628
  c->r[3]=0u+0x00000000u; // 800E462C
  goto L_800E4638; // 800E4630
L_800E4634:;
  c->r[3]=0u+0x00000001u; // 800E4634
L_800E4638:;
  c->r[0]=0u+0x00000028u; // 800E4638
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800E463C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800E4640
  c->r[0]=0u+0x00000018u; // 800E4644
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800E4648
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800E464C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800E4650
  c->lr=c->r[0]; // 800E4654
  c->r[1]=c->r[1]+0x00000030u; // 800E4658
  return; // 800E465C
}

