#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801DE50C
void f_801DE50C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE50C
  c->r[0]=c->lr; // 801DE510
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE514
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE518
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE51C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE520
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DE524
  c->r[28]=c->r[3]|c->r[3]; // 801DE528
  c->r[29]=c->r[4]|c->r[4]; // 801DE52C
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801DE530
  c->r[12]=R32(c->r[3]+0x00000058u); // 801DE534
  c->r[12]=R32(c->r[12]+0x00000098u); // 801DE538
  c->ctr=c->r[12]; // 801DE53C
  if (true) { c->lr=0x801DE544u; dispatch(c,c->ctr); } // 801DE540
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801DE544
  c->lr=0x801DE54Cu; f_80147080(c); // 801DE548
  c->r[4]=c->r[3]|c->r[3]; // 801DE54C
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801DE550
  c->lr=0x801DE558u; f_8017C8AC(c); // 801DE554
  c->lr=0x801DE55Cu; f_80111CF0(c); // 801DE558
  cmps(c,0,(int32_t)c->r[3],0); // 801DE55C
  if (crb(c,2)) { goto L_801DE56C; } // 801DE560
  c->r[30]=0u+0x00000000u; // 801DE564
  goto L_801DE57C; // 801DE568
L_801DE56C:;
  c->lr=0x801DE570u; f_8007B524(c); // 801DE56C
  c->r[4]=c->r[29]|c->r[29]; // 801DE570
  c->lr=0x801DE578u; f_800A6B54(c); // 801DE574
  c->r[30]=c->r[3]|c->r[3]; // 801DE578
L_801DE57C:;
  c->lr=0x801DE580u; f_80111CF0(c); // 801DE57C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE580
  if (crb(c,2)) { goto L_801DE590; } // 801DE584
  c->r[31]=0u+0x00000000u; // 801DE588
  goto L_801DE5A0; // 801DE58C
L_801DE590:;
  c->lr=0x801DE594u; f_8007B524(c); // 801DE590
  c->r[4]=c->r[29]|c->r[29]; // 801DE594
  c->lr=0x801DE59Cu; f_800A68D4(c); // 801DE598
  c->r[31]=c->r[3]|c->r[3]; // 801DE59C
L_801DE5A0:;
  c->r[3]=c->r[28]|c->r[28]; // 801DE5A0
  c->r[4]=c->r[31]|c->r[31]; // 801DE5A4
  c->r[5]=c->r[30]|c->r[30]; // 801DE5A8
  c->r[6]=c->r[29]|c->r[29]; // 801DE5AC
  c->lr=0x801DE5B4u; f_801DE200(c); // 801DE5B0
  cmps(c,0,(int32_t)c->r[30],0); // 801DE5B4
  if (!crb(c,2)) { goto L_801DE5E8; } // 801DE5B8
  cmpu(c,0,c->r[31],0x00000001u); // 801DE5BC
  if (crb(c,1)) { goto L_801DE5E8; } // 801DE5C0
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801DE5C4
  c->r[4]=c->r[29]|c->r[29]; // 801DE5C8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801DE5CC
  c->r[12]=R32(c->r[12]+0x00000098u); // 801DE5D0
  c->ctr=c->r[12]; // 801DE5D4
  if (true) { c->lr=0x801DE5DCu; dispatch(c,c->ctr); } // 801DE5D8
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801DE5DC
  c->lr=0x801DE5E4u; f_80146F20(c); // 801DE5E0
  goto L_801DE5F4; // 801DE5E4
L_801DE5E8:;
  c->r[3]=c->r[28]|c->r[28]; // 801DE5E8
  c->r[4]=c->r[29]|c->r[29]; // 801DE5EC
  c->lr=0x801DE5F4u; f_801DE140(c); // 801DE5F0
L_801DE5F4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE5F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE5F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE5FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DE600
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE604
  c->lr=c->r[0]; // 801DE608
  c->r[1]=c->r[1]+0x00000020u; // 801DE60C
  return; // 801DE610
}

// fn_801DE614
void f_801DE614(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE614
  c->r[0]=c->lr; // 801DE618
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE61C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE620
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE624
  c->r[30]=c->r[3]|c->r[3]; // 801DE628
  c->r[31]=c->r[4]|c->r[4]; // 801DE62C
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801DE630
  c->r[12]=R32(c->r[3]+0x00000058u); // 801DE634
  c->r[12]=R32(c->r[12]+0x00000094u); // 801DE638
  c->ctr=c->r[12]; // 801DE63C
  if (true) { c->lr=0x801DE644u; dispatch(c,c->ctr); } // 801DE640
  c->r[3]=c->r[30]|c->r[30]; // 801DE644
  c->r[4]=c->r[31]|c->r[31]; // 801DE648
  c->lr=0x801DE650u; f_8017CB8C(c); // 801DE64C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE650
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE654
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE658
  c->lr=c->r[0]; // 801DE65C
  c->r[1]=c->r[1]+0x00000010u; // 801DE660
  return; // 801DE664
}

// fn_801DE668
void f_801DE668(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 801DE668
  return; // 801DE66C
}

// fn_801DE670
void f_801DE670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE670
  c->r[0]=c->lr; // 801DE674
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE67C
  c->r[31]=c->r[3]|c->r[3]; // 801DE680
  c->lr=0x801DE688u; f_8012FBEC(c); // 801DE684
  c->r[3]=0u+0x80470000u; // 801DE688
  c->r[0]=c->r[3]+0x000034B0u; // 801DE68C
  W32(c->r[31]+0x00000044u,c->r[0]); // 801DE690
  c->r[3]=c->r[31]+0x00000048u; // 801DE694
  c->lr=0x801DE69Cu; f_800592DC(c); // 801DE698
  c->r[3]=c->r[31]+0x00000050u; // 801DE69C
  c->lr=0x801DE6A4u; f_800592DC(c); // 801DE6A0
  c->r[3]=c->r[31]|c->r[31]; // 801DE6A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE6A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE6AC
  c->lr=c->r[0]; // 801DE6B0
  c->r[1]=c->r[1]+0x00000010u; // 801DE6B4
  return; // 801DE6B8
}

// fn_801DE6BC
void f_801DE6BC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801DE6BC
  f_800593A0(c); return; // 801DE6C0
}

// fn_801DE6C4
void f_801DE6C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DE6C4
  return; // 801DE6C8
}

// fn_801DE6CC
void f_801DE6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801DE6CC
  return; // 801DE6D0
}

// fn_801DE6D4
void f_801DE6D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000050u; // 801DE6D4
  f_800593A0(c); return; // 801DE6D8
}

// fn_801DE6DC
void f_801DE6DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DE6DC
  return; // 801DE6E0
}

// fn_801DE6E4
void f_801DE6E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 801DE6E4
  return; // 801DE6E8
}

// fn_801DE6EC
void f_801DE6EC(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801DE6EC
  c->r[3]=c->r[3]+0x00000EE0u; // 801DE6F0
  return; // 801DE6F4
}

// fn_801DE6F8
void f_801DE6F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE6F8
  c->r[0]=c->lr; // 801DE6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE704
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE708
  c->r[30]=c->r[3]|c->r[3]; // 801DE70C
  c->r[31]=c->r[4]|c->r[4]; // 801DE710
  cmps(c,0,(int32_t)c->r[3],0); // 801DE714
  if (crb(c,2)) { goto L_801DE738; } // 801DE718
  c->r[4]=0u+0x00000000u; // 801DE71C
  c->lr=0x801DE724u; f_801197A8(c); // 801DE720
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801DE724
  cmps(c,0,(int32_t)c->r[0],0); // 801DE728
  if (!crb(c,1)) { goto L_801DE738; } // 801DE72C
  c->r[3]=c->r[30]|c->r[30]; // 801DE730
  c->lr=0x801DE738u; f_80047B20(c); // 801DE734
L_801DE738:;
  c->r[3]=c->r[30]|c->r[30]; // 801DE738
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE73C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE740
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE744
  c->lr=c->r[0]; // 801DE748
  c->r[1]=c->r[1]+0x00000010u; // 801DE74C
  return; // 801DE750
}

// fn_801DE754
void f_801DE754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE754
  c->r[0]=c->lr; // 801DE758
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE75C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE760
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE764
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE768
  c->r[29]=c->r[3]|c->r[3]; // 801DE76C
  c->lr=0x801DE774u; f_80056B5C(c); // 801DE770
  c->r[30]=c->r[3]|c->r[3]; // 801DE774
  c->lr=0x801DE77Cu; f_8005DEE8(c); // 801DE778
  c->lr=0x801DE780u; f_80056B54(c); // 801DE77C
  c->r[3]=0u+0x00000058u; // 801DE780
  c->lr=0x801DE788u; f_80047B64(c); // 801DE784
  c->r[31]=c->r[3]|c->r[3]; // 801DE788
  cmps(c,0,(int32_t)c->r[3],0); // 801DE78C
  if (crb(c,2)) { goto L_801DE798; } // 801DE790
  c->lr=0x801DE798u; f_801DE670(c); // 801DE794
L_801DE798:;
  c->r[3]=c->r[30]|c->r[30]; // 801DE798
  c->lr=0x801DE7A0u; f_80056B54(c); // 801DE79C
  c->r[3]=c->r[31]|c->r[31]; // 801DE7A0
  c->r[4]=0u+0x00000007u; // 801DE7A4
  c->lr=0x801DE7ACu; f_8011A278(c); // 801DE7A8
  c->r[3]=c->r[29]|c->r[29]; // 801DE7AC
  c->r[4]=c->r[31]|c->r[31]; // 801DE7B0
  c->lr=0x801DE7B8u; f_8028CA70(c); // 801DE7B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE7B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE7BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE7C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE7C4
  c->lr=c->r[0]; // 801DE7C8
  c->r[1]=c->r[1]+0x00000020u; // 801DE7CC
  return; // 801DE7D0
}

// fn_801DE7D4
void f_801DE7D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE7D4
  c->r[0]=c->lr; // 801DE7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE7E0
  c->r[31]=c->r[4]|c->r[4]; // 801DE7E4
  c->r[4]=0u+0x00000007u; // 801DE7E8
  c->lr=0x801DE7F0u; f_8011B718(c); // 801DE7EC
  cmps(c,0,(int32_t)c->r[3],0); // 801DE7F0
  if (crb(c,2)) { goto L_801DE800; } // 801DE7F4
  c->r[4]=c->r[31]|c->r[31]; // 801DE7F8
  c->lr=0x801DE800u; f_801DE6BC(c); // 801DE7FC
L_801DE800:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE800
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE804
  c->lr=c->r[0]; // 801DE808
  c->r[1]=c->r[1]+0x00000010u; // 801DE80C
  return; // 801DE810
}

// fn_801DE814
void f_801DE814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE814
  c->r[0]=c->lr; // 801DE818
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE81C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE820
  c->r[31]=c->r[4]|c->r[4]; // 801DE824
  c->r[4]=0u+0x00000007u; // 801DE828
  c->lr=0x801DE830u; f_8011B718(c); // 801DE82C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE830
  if (crb(c,2)) { goto L_801DE840; } // 801DE834
  c->r[4]=c->r[31]|c->r[31]; // 801DE838
  c->lr=0x801DE840u; f_801DE6D4(c); // 801DE83C
L_801DE840:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE840
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE844
  c->lr=c->r[0]; // 801DE848
  c->r[1]=c->r[1]+0x00000010u; // 801DE84C
  return; // 801DE850
}

// fn_801DE854
void f_801DE854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE854
  c->r[0]=c->lr; // 801DE858
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE85C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE860
  c->r[31]=c->r[3]|c->r[3]; // 801DE864
  c->lr=0x801DE86Cu; f_8011B41C(c); // 801DE868
  c->r[4]=c->r[31]|c->r[31]; // 801DE86C
  c->lr=0x801DE874u; f_801DE7D4(c); // 801DE870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE874
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE878
  c->lr=c->r[0]; // 801DE87C
  c->r[1]=c->r[1]+0x00000010u; // 801DE880
  return; // 801DE884
}

// fn_801DE888
void f_801DE888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE888
  c->r[0]=c->lr; // 801DE88C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE894
  c->r[31]=c->r[3]|c->r[3]; // 801DE898
  c->lr=0x801DE8A0u; f_8011B41C(c); // 801DE89C
  c->r[4]=c->r[31]|c->r[31]; // 801DE8A0
  c->lr=0x801DE8A8u; f_801DE814(c); // 801DE8A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE8A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE8AC
  c->lr=c->r[0]; // 801DE8B0
  c->r[1]=c->r[1]+0x00000010u; // 801DE8B4
  return; // 801DE8B8
}

// fn_801DE8BC
void f_801DE8BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE8BC
  c->r[0]=c->lr; // 801DE8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE8C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE8C8
  c->r[31]=c->r[3]|c->r[3]; // 801DE8CC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DE8D0
  c->lr=0x801DE8D8u; f_801DA084(c); // 801DE8D4
  c->r[4]=c->r[3]|c->r[3]; // 801DE8D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DE8DC
  c->lr=0x801DE8E4u; f_801D752C(c); // 801DE8E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DE8E4
  c->lr=0x801DE8ECu; f_801D7524(c); // 801DE8E8
  c->r[4]=c->r[3]|c->r[3]; // 801DE8EC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DE8F0
  c->lr=0x801DE8F8u; f_801D8D0C(c); // 801DE8F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE8F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE8FC
  c->lr=c->r[0]; // 801DE900
  c->r[1]=c->r[1]+0x00000010u; // 801DE904
  return; // 801DE908
}

// fn_801DE90C
void f_801DE90C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE90C
  c->r[0]=c->lr; // 801DE910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE914
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE918
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE91C
  c->r[30]=c->r[3]|c->r[3]; // 801DE920
  c->r[31]=c->r[4]|c->r[4]; // 801DE924
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DE928
  c->lr=0x801DE930u; f_801D9D8C(c); // 801DE92C
  c->r[4]=c->r[3]|c->r[3]; // 801DE930
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DE934
  c->lr=0x801DE93Cu; f_801D7E80(c); // 801DE938
  cmps(c,0,(int32_t)c->r[31],0); // 801DE93C
  if (crb(c,2)) { goto L_801DE950; } // 801DE940
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DE944
  c->lr=0x801DE94Cu; f_801D7E88(c); // 801DE948
  goto L_801DE958; // 801DE94C
L_801DE950:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DE950
  c->lr=0x801DE958u; f_801D7F24(c); // 801DE954
L_801DE958:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE958
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE95C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE960
  c->lr=c->r[0]; // 801DE964
  c->r[1]=c->r[1]+0x00000010u; // 801DE968
  return; // 801DE96C
}

// fn_801DE970
void f_801DE970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE970
  c->r[0]=c->lr; // 801DE974
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE97C
  c->r[31]=c->r[3]|c->r[3]; // 801DE980
  c->lr=0x801DE988u; f_80130F14(c); // 801DE984
  c->r[3]=0u+0x80470000u; // 801DE988
  c->r[0]=c->r[3]+0x00003718u; // 801DE98C
  W32(c->r[31]+0x00000058u,c->r[0]); // 801DE990
  c->r[3]=c->r[31]|c->r[31]; // 801DE994
  c->r[4]=0u+0x80470000u; // 801DE998
  c->r[4]=c->r[4]+0x000034D8u; // 801DE99C
  c->lr=0x801DE9A4u; f_80131078(c); // 801DE9A0
  c->r[0]=0u+0x00000000u; // 801DE9A4
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801DE9A8
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801DE9AC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801DE9B0
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801DE9B4
  c->r[3]=c->r[31]|c->r[31]; // 801DE9B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE9BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE9C0
  c->lr=c->r[0]; // 801DE9C4
  c->r[1]=c->r[1]+0x00000010u; // 801DE9C8
  return; // 801DE9CC
}

// fn_801DE9D0
void f_801DE9D0(Ctx* __restrict c) {
  return; // 801DE9D0
}

// fn_801DE9D4
void f_801DE9D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE9D4
  c->r[0]=c->lr; // 801DE9D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE9DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE9E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE9E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE9E8
  c->r[29]=c->r[3]|c->r[3]; // 801DE9EC
  c->r[3]=0u+0x00000007u; // 801DE9F0
  c->lr=0x801DE9F8u; f_801F1364(c); // 801DE9F4
  c->r[3]=c->r[29]|c->r[29]; // 801DE9F8
  c->r[4]=0u+0x00000000u; // 801DE9FC
  c->lr=0x801DEA04u; f_80131168(c); // 801DEA00
  c->r[3]=c->r[29]|c->r[29]; // 801DEA04
  c->r[4]=0u+0x00000000u; // 801DEA08
  c->lr=0x801DEA10u; f_80131184(c); // 801DEA0C
  c->lr=0x801DEA14u; f_80056B5C(c); // 801DEA10
  c->r[30]=c->r[3]|c->r[3]; // 801DEA14
  c->lr=0x801DEA1Cu; f_801F1340(c); // 801DEA18
  c->lr=0x801DEA20u; f_80056B54(c); // 801DEA1C
  c->r[3]=0u+0x00000FE8u; // 801DEA20
  c->lr=0x801DEA28u; f_80047B64(c); // 801DEA24
  c->r[31]=c->r[3]|c->r[3]; // 801DEA28
  cmps(c,0,(int32_t)c->r[3],0); // 801DEA2C
  if (crb(c,2)) { goto L_801DEA38; } // 801DEA30
  c->lr=0x801DEA38u; f_801D6FAC(c); // 801DEA34
L_801DEA38:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801DEA38
  c->r[3]=c->r[30]|c->r[30]; // 801DEA3C
  c->lr=0x801DEA44u; f_80056B54(c); // 801DEA40
  c->lr=0x801DEA48u; f_80056B5C(c); // 801DEA44
  c->r[30]=c->r[3]|c->r[3]; // 801DEA48
  c->lr=0x801DEA50u; f_801F1340(c); // 801DEA4C
  c->lr=0x801DEA54u; f_80056B54(c); // 801DEA50
  c->r[3]=0u+0x000000F0u; // 801DEA54
  c->lr=0x801DEA5Cu; f_80047B64(c); // 801DEA58
  c->r[31]=c->r[3]|c->r[3]; // 801DEA5C
  cmps(c,0,(int32_t)c->r[3],0); // 801DEA60
  if (crb(c,2)) { goto L_801DEA6C; } // 801DEA64
  c->lr=0x801DEA6Cu; f_801D81C4(c); // 801DEA68
L_801DEA6C:;
  W32(c->r[29]+0x000000F4u,c->r[31]); // 801DEA6C
  c->r[3]=c->r[30]|c->r[30]; // 801DEA70
  c->lr=0x801DEA78u; f_80056B54(c); // 801DEA74
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801DEA78
  c->lr=0x801DEA80u; f_801D8234(c); // 801DEA7C
  c->r[3]=c->r[29]|c->r[29]; // 801DEA80
  c->r[4]=0u+0x00000001u; // 801DEA84
  c->lr=0x801DEA8Cu; f_801311BC(c); // 801DEA88
  c->r[3]=c->r[29]|c->r[29]; // 801DEA8C
  c->r[4]=0u+0x00000000u; // 801DEA90
  c->lr=0x801DEA98u; f_8013114C(c); // 801DEA94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEA98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEA9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEAA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEAA4
  c->lr=c->r[0]; // 801DEAA8
  c->r[1]=c->r[1]+0x00000020u; // 801DEAAC
  return; // 801DEAB0
}

// fn_801DEAB4
void f_801DEAB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEAB4
  c->r[0]=c->lr; // 801DEAB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEAC0
  c->r[31]=c->r[3]|c->r[3]; // 801DEAC4
  c->r[0]=0u+0x00000005u; // 801DEAC8
  W32(c->r[3]+0x000000ECu,c->r[0]); // 801DEACC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEAD0
  c->r[4]=0u+0x00000000u; // 801DEAD4
  c->lr=0x801DEADCu; f_801DA074(c); // 801DEAD8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEADC
  c->lr=0x801DEAE4u; f_801D8DE0(c); // 801DEAE0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEAE4
  c->lr=0x801DEAECu; f_801D901C(c); // 801DEAE8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEAEC
  c->lr=0x801DEAF4u; f_801D70B0(c); // 801DEAF0
  c->r[3]=c->r[31]|c->r[31]; // 801DEAF4
  c->r[4]=0u+0x00000005u; // 801DEAF8
  c->lr=0x801DEB00u; f_8013114C(c); // 801DEAFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEB00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEB04
  c->lr=c->r[0]; // 801DEB08
  c->r[1]=c->r[1]+0x00000010u; // 801DEB0C
  return; // 801DEB10
}

// fn_801DEB14
void f_801DEB14(Ctx* __restrict c) {
  c->r[4]=0u+0x00000028u; // 801DEB14
  f_8013114C(c); return; // 801DEB18
}

// fn_801DEB1C
void f_801DEB1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEB1C
  c->r[0]=c->lr; // 801DEB20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEB24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEB28
  c->r[31]=c->r[3]|c->r[3]; // 801DEB2C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEB30
  c->lr=0x801DEB38u; f_801D9028(c); // 801DEB34
  cmps(c,0,(int32_t)c->r[3],0); // 801DEB38
  if (crb(c,2)) { goto L_801DEB54; } // 801DEB3C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEB40
  c->lr=0x801DEB48u; f_801D902C(c); // 801DEB44
  c->r[3]=c->r[31]|c->r[31]; // 801DEB48
  c->r[4]=0u+0x00000028u; // 801DEB4C
  c->lr=0x801DEB54u; f_8013114C(c); // 801DEB50
L_801DEB54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEB54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEB58
  c->lr=c->r[0]; // 801DEB5C
  c->r[1]=c->r[1]+0x00000010u; // 801DEB60
  return; // 801DEB64
}

// fn_801DEB68
void f_801DEB68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEB68
  c->r[0]=c->lr; // 801DEB6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEB70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEB74
  c->r[31]=c->r[3]|c->r[3]; // 801DEB78
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEB7C
  c->r[4]=0u+0x00000001u; // 801DEB80
  c->lr=0x801DEB88u; f_801DA074(c); // 801DEB84
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEB88
  c->lr=0x801DEB90u; f_801D8DE0(c); // 801DEB8C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEB90
  c->lr=0x801DEB98u; f_801D9030(c); // 801DEB94
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEB98
  c->lr=0x801DEBA0u; f_801D80F0(c); // 801DEB9C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEBA0
  c->lr=0x801DEBA8u; f_801D72E0(c); // 801DEBA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEBA8
  c->lr=0x801DEBB0u; f_801D70B0(c); // 801DEBAC
  c->r[3]=c->r[31]|c->r[31]; // 801DEBB0
  c->lr=0x801DEBB8u; f_801DE8BC(c); // 801DEBB4
  c->r[3]=c->r[31]|c->r[31]; // 801DEBB8
  c->r[4]=0u+0x00000006u; // 801DEBBC
  c->lr=0x801DEBC4u; f_8013114C(c); // 801DEBC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEBC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEBC8
  c->lr=c->r[0]; // 801DEBCC
  c->r[1]=c->r[1]+0x00000010u; // 801DEBD0
  return; // 801DEBD4
}

// fn_801DEBD8
void f_801DEBD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEBD8
  c->r[0]=c->lr; // 801DEBDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEBE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEBE4
  c->r[31]=c->r[3]|c->r[3]; // 801DEBE8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEBEC
  c->lr=0x801DEBF4u; f_801D8FC8(c); // 801DEBF0
  cmps(c,0,(int32_t)c->r[3],0); // 801DEBF4
  if (crb(c,2)) { goto L_801DEC24; } // 801DEBF8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEBFC
  c->lr=0x801DEC04u; f_801D90A0(c); // 801DEC00
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEC04
  c->lr=0x801DEC0Cu; f_801D7524(c); // 801DEC08
  c->r[4]=c->r[3]|c->r[3]; // 801DEC0C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEC10
  c->lr=0x801DEC18u; f_801DA0D8(c); // 801DEC14
  c->r[3]=c->r[31]|c->r[31]; // 801DEC18
  c->r[4]=0u+0x00000009u; // 801DEC1C
  c->lr=0x801DEC24u; f_8013114C(c); // 801DEC20
L_801DEC24:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEC24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEC28
  c->lr=c->r[0]; // 801DEC2C
  c->r[1]=c->r[1]+0x00000010u; // 801DEC30
  return; // 801DEC34
}

// fn_801DEC38
void f_801DEC38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEC38
  c->r[0]=c->lr; // 801DEC3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEC40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEC44
  c->r[31]=c->r[3]|c->r[3]; // 801DEC48
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEC4C
  c->r[4]=0u+0x00000001u; // 801DEC50
  c->lr=0x801DEC58u; f_801DA074(c); // 801DEC54
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEC58
  c->r[4]=0u+0x00000000u; // 801DEC5C
  c->lr=0x801DEC64u; f_801DA11C(c); // 801DEC60
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEC64
  c->lr=0x801DEC6Cu; f_801D8DE0(c); // 801DEC68
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEC6C
  c->lr=0x801DEC74u; f_801D9068(c); // 801DEC70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEC74
  c->lr=0x801DEC7Cu; f_801D72E0(c); // 801DEC78
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEC7C
  c->lr=0x801DEC84u; f_801D70B0(c); // 801DEC80
  c->r[3]=c->r[31]|c->r[31]; // 801DEC84
  c->lr=0x801DEC8Cu; f_801DE8BC(c); // 801DEC88
  c->r[3]=c->r[31]|c->r[31]; // 801DEC8C
  c->r[4]=0u+0x00000008u; // 801DEC90
  c->lr=0x801DEC98u; f_8013114C(c); // 801DEC94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEC98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEC9C
  c->lr=c->r[0]; // 801DECA0
  c->r[1]=c->r[1]+0x00000010u; // 801DECA4
  return; // 801DECA8
}

// fn_801DECAC
void f_801DECAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DECAC
  c->r[0]=c->lr; // 801DECB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DECB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DECB8
  c->r[31]=c->r[3]|c->r[3]; // 801DECBC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DECC0
  c->lr=0x801DECC8u; f_801D8FC8(c); // 801DECC4
  cmps(c,0,(int32_t)c->r[3],0); // 801DECC8
  if (crb(c,2)) { goto L_801DECF8; } // 801DECCC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DECD0
  c->lr=0x801DECD8u; f_801D90A0(c); // 801DECD4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DECD8
  c->lr=0x801DECE0u; f_801D7524(c); // 801DECDC
  c->r[4]=c->r[3]|c->r[3]; // 801DECE0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DECE4
  c->lr=0x801DECECu; f_801DA0D8(c); // 801DECE8
  c->r[3]=c->r[31]|c->r[31]; // 801DECEC
  c->r[4]=0u+0x00000009u; // 801DECF0
  c->lr=0x801DECF8u; f_8013114C(c); // 801DECF4
L_801DECF8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DECF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DECFC
  c->lr=c->r[0]; // 801DED00
  c->r[1]=c->r[1]+0x00000010u; // 801DED04
  return; // 801DED08
}

// fn_801DED0C
void f_801DED0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DED0C
  c->r[0]=c->lr; // 801DED10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DED14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DED18
  c->r[31]=c->r[3]|c->r[3]; // 801DED1C
  c->r[3]=0u+0x00000001u; // 801DED20
  c->lr=0x801DED28u; f_8019CD1C(c); // 801DED24
  cmps(c,0,(int32_t)c->r[3],0); // 801DED28
  if (crb(c,2)) { goto L_801DED48; } // 801DED2C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DED30
  c->lr=0x801DED38u; f_801D70A8(c); // 801DED34
  c->r[3]=c->r[31]|c->r[31]; // 801DED38
  c->r[4]=0u+0x0000000Eu; // 801DED3C
  c->lr=0x801DED44u; f_8013114C(c); // 801DED40
  goto L_801DEDE4; // 801DED44
L_801DED48:;
  c->r[3]=0u+0x00000000u; // 801DED48
  c->lr=0x801DED50u; f_8019CD1C(c); // 801DED4C
  cmps(c,0,(int32_t)c->r[3],0); // 801DED50
  if (crb(c,2)) { goto L_801DED98; } // 801DED54
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DED58
  c->lr=0x801DED60u; f_801D7524(c); // 801DED5C
  c->r[4]=c->r[3]|c->r[3]; // 801DED60
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DED64
  c->lr=0x801DED6Cu; f_801DA08C(c); // 801DED68
  cmps(c,0,(int32_t)c->r[3],0); // 801DED6C
  if (crb(c,2)) { goto L_801DED80; } // 801DED70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DED74
  c->lr=0x801DED7Cu; f_801D73D4(c); // 801DED78
  goto L_801DEDE4; // 801DED7C
L_801DED80:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DED80
  c->lr=0x801DED88u; f_801D7348(c); // 801DED84
  c->r[3]=c->r[31]|c->r[31]; // 801DED88
  c->r[4]=0u+0x0000000Au; // 801DED8C
  c->lr=0x801DED94u; f_8013114C(c); // 801DED90
  goto L_801DEDE4; // 801DED94
L_801DED98:;
  c->r[3]=0u+0x00000003u; // 801DED98
  c->lr=0x801DEDA0u; f_8019CD1C(c); // 801DED9C
  cmps(c,0,(int32_t)c->r[3],0); // 801DEDA0
  if (crb(c,2)) { goto L_801DEDB0; } // 801DEDA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEDA8
  c->lr=0x801DEDB0u; f_801D74D8(c); // 801DEDAC
L_801DEDB0:;
  c->r[3]=0u+0x00000004u; // 801DEDB0
  c->lr=0x801DEDB8u; f_8019CD1C(c); // 801DEDB4
  cmps(c,0,(int32_t)c->r[3],0); // 801DEDB8
  if (crb(c,2)) { goto L_801DEDC8; } // 801DEDBC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEDC0
  c->lr=0x801DEDC8u; f_801D748C(c); // 801DEDC4
L_801DEDC8:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEDC8
  c->lr=0x801DEDD0u; f_801D90A0(c); // 801DEDCC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEDD0
  c->lr=0x801DEDD8u; f_801D7524(c); // 801DEDD4
  c->r[4]=c->r[3]|c->r[3]; // 801DEDD8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEDDC
  c->lr=0x801DEDE4u; f_801DA0D8(c); // 801DEDE0
L_801DEDE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEDE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEDE8
  c->lr=c->r[0]; // 801DEDEC
  c->r[1]=c->r[1]+0x00000010u; // 801DEDF0
  return; // 801DEDF4
}

// fn_801DEDF8
void f_801DEDF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEDF8
  c->r[0]=c->lr; // 801DEDFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEE00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEE04
  c->r[31]=c->r[3]|c->r[3]; // 801DEE08
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801DEE0C
  c->lr=0x801DEE14u; f_801D7524(c); // 801DEE10
  c->r[4]=c->r[3]|c->r[3]; // 801DEE14
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEE18
  c->lr=0x801DEE20u; f_801DA094(c); // 801DEE1C
  c->r[3]=c->r[31]|c->r[31]; // 801DEE20
  c->r[4]=0u+0x0000000Bu; // 801DEE24
  c->lr=0x801DEE2Cu; f_8013114C(c); // 801DEE28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEE2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEE30
  c->lr=c->r[0]; // 801DEE34
  c->r[1]=c->r[1]+0x00000010u; // 801DEE38
  return; // 801DEE3C
}

// fn_801DEE40
void f_801DEE40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEE40
  c->r[0]=c->lr; // 801DEE44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEE48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEE4C
  c->r[31]=c->r[3]|c->r[3]; // 801DEE50
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEE54
  c->lr=0x801DEE5Cu; f_801D8FC8(c); // 801DEE58
  cmps(c,0,(int32_t)c->r[3],0); // 801DEE5C
  if (crb(c,2)) { goto L_801DEE7C; } // 801DEE60
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEE64
  c->r[4]=0u+0x00000000u; // 801DEE68
  c->lr=0x801DEE70u; f_801D8B90(c); // 801DEE6C
  c->r[3]=c->r[31]|c->r[31]; // 801DEE70
  c->r[4]=0u+0x0000000Cu; // 801DEE74
  c->lr=0x801DEE7Cu; f_8013114C(c); // 801DEE78
L_801DEE7C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEE7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEE80
  c->lr=c->r[0]; // 801DEE84
  c->r[1]=c->r[1]+0x00000010u; // 801DEE88
  return; // 801DEE8C
}

// fn_801DEE90
void f_801DEE90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEE90
  c->r[0]=c->lr; // 801DEE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEE9C
  c->r[31]=c->r[3]|c->r[3]; // 801DEEA0
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEEA4
  c->r[4]=0u+0x00000000u; // 801DEEA8
  c->lr=0x801DEEB0u; f_801D8B90(c); // 801DEEAC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DEEB0
  c->lr=0x801DEEB8u; f_801D7314(c); // 801DEEB4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DEEB8
  c->lr=0x801DEEC0u; f_801D909C(c); // 801DEEBC
  c->r[3]=c->r[31]|c->r[31]; // 801DEEC0
  c->r[4]=0u+0x0000000Du; // 801DEEC4
  c->lr=0x801DEECCu; f_8013114C(c); // 801DEEC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DEECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DEED0
  c->lr=c->r[0]; // 801DEED4
  c->r[1]=c->r[1]+0x00000010u; // 801DEED8
  return; // 801DEEDC
}

// fn_801DEEE0
void f_801DEEE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEEE0
  c->r[0]=c->lr; // 801DEEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DEEE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DEEEC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DEEF0
  c->r[30]=c->r[3]|c->r[3]; // 801DEEF4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DEEF8
  c->lr=0x801DEF00u; f_801D8FC8(c); // 801DEEFC
  cmps(c,0,(int32_t)c->r[3],0); // 801DEF00
  if (crb(c,2)) { goto L_801DF004; } // 801DEF04
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DEF08
  c->r[4]=0u+0x00000000u; // 801DEF0C
  c->lr=0x801DEF14u; f_801D8B1C(c); // 801DEF10
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEF14
  c->lr=0x801DEF1Cu; f_801D7524(c); // 801DEF18
  cmps(c,0,(int32_t)c->r[3],1); // 801DEF1C
  if (crb(c,2)) { goto L_801DEF98; } // 801DEF20
  if (!crb(c,0)) { goto L_801DEF34; } // 801DEF24
  cmps(c,0,(int32_t)c->r[3],0); // 801DEF28
  if (!crb(c,0)) { goto L_801DEF40; } // 801DEF2C
  goto L_801DF004; // 801DEF30
L_801DEF34:;
  cmps(c,0,(int32_t)c->r[3],3); // 801DEF34
  if (!crb(c,0)) { goto L_801DF004; } // 801DEF38
  goto L_801DEFE4; // 801DEF3C
L_801DEF40:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEF40
  c->r[4]=0u+0x00000000u; // 801DEF44
  c->lr=0x801DEF4Cu; f_801D7E80(c); // 801DEF48
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEF4C
  c->r[4]=0u+0x00000002u; // 801DEF50
  c->lr=0x801DEF58u; f_801D7DB4(c); // 801DEF54
  c->r[31]=c->r[3]|c->r[3]; // 801DEF58
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEF5C
  c->r[4]=c->r[31]|c->r[31]; // 801DEF60
  c->lr=0x801DEF68u; f_801D7FD4(c); // 801DEF64
  cmpu(c,0,c->r[31],0x00000001u); // 801DEF68
  if (crb(c,1)) { goto L_801DEF88; } // 801DEF6C
  c->r[0]=0u+0x00000007u; // 801DEF70
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801DEF74
  c->r[3]=c->r[30]|c->r[30]; // 801DEF78
  c->r[4]=0u+0x00000003u; // 801DEF7C
  c->lr=0x801DEF84u; f_8013114C(c); // 801DEF80
  goto L_801DF004; // 801DEF84
L_801DEF88:;
  c->r[3]=c->r[30]|c->r[30]; // 801DEF88
  c->r[4]=0u+0x00000010u; // 801DEF8C
  c->lr=0x801DEF94u; f_8013114C(c); // 801DEF90
  goto L_801DF004; // 801DEF94
L_801DEF98:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEF98
  c->r[4]=0u+0x00000003u; // 801DEF9C
  c->lr=0x801DEFA4u; f_801D7DB4(c); // 801DEFA0
  c->r[31]=c->r[3]|c->r[3]; // 801DEFA4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEFA8
  c->r[4]=c->r[31]|c->r[31]; // 801DEFAC
  c->lr=0x801DEFB4u; f_801D7FD4(c); // 801DEFB0
  cmps(c,0,(int32_t)c->r[31],3); // 801DEFB4
  if (!crb(c,2)) { goto L_801DEFD4; } // 801DEFB8
  c->r[0]=0u+0x00000007u; // 801DEFBC
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801DEFC0
  c->r[3]=c->r[30]|c->r[30]; // 801DEFC4
  c->r[4]=0u+0x00000003u; // 801DEFC8
  c->lr=0x801DEFD0u; f_8013114C(c); // 801DEFCC
  goto L_801DF004; // 801DEFD0
L_801DEFD4:;
  c->r[3]=c->r[30]|c->r[30]; // 801DEFD4
  c->r[4]=0u+0x00000016u; // 801DEFD8
  c->lr=0x801DEFE0u; f_8013114C(c); // 801DEFDC
  goto L_801DF004; // 801DEFE0
L_801DEFE4:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DEFE4
  c->r[4]=0u+0x00000000u; // 801DEFE8
  c->lr=0x801DEFF0u; f_801D7FC0(c); // 801DEFEC
  c->r[0]=0u+0x00000000u; // 801DEFF0
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801DEFF4
  c->r[3]=c->r[30]|c->r[30]; // 801DEFF8
  c->r[4]=0u+0x00000003u; // 801DEFFC
  c->lr=0x801DF004u; f_8013114C(c); // 801DF000
L_801DF004:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF004
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DF008
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF00C
  c->lr=c->r[0]; // 801DF010
  c->r[1]=c->r[1]+0x00000010u; // 801DF014
  return; // 801DF018
}

// fn_801DF01C
void f_801DF01C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF01C
  c->r[0]=c->lr; // 801DF020
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF024
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF028
  c->r[31]=c->r[3]|c->r[3]; // 801DF02C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF030
  c->r[4]=0u+0x00000000u; // 801DF034
  c->lr=0x801DF03Cu; f_801D8B90(c); // 801DF038
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF03C
  c->lr=0x801DF044u; f_801D7314(c); // 801DF040
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF044
  c->lr=0x801DF04Cu; f_801D9064(c); // 801DF048
  c->r[3]=c->r[31]|c->r[31]; // 801DF04C
  c->r[4]=0u+0x0000000Fu; // 801DF050
  c->lr=0x801DF058u; f_8013114C(c); // 801DF054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF058
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF05C
  c->lr=c->r[0]; // 801DF060
  c->r[1]=c->r[1]+0x00000010u; // 801DF064
  return; // 801DF068
}

// fn_801DF06C
void f_801DF06C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF06C
  c->r[0]=c->lr; // 801DF070
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF078
  c->r[31]=c->r[3]|c->r[3]; // 801DF07C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF080
  c->lr=0x801DF088u; f_801D8FC8(c); // 801DF084
  cmps(c,0,(int32_t)c->r[3],0); // 801DF088
  if (crb(c,2)) { goto L_801DF0BC; } // 801DF08C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF090
  c->r[4]=0u+0x00000000u; // 801DF094
  c->lr=0x801DF09Cu; f_801D8B1C(c); // 801DF098
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF09C
  c->r[4]=0u+0x00000000u; // 801DF0A0
  c->lr=0x801DF0A8u; f_801D7FC0(c); // 801DF0A4
  c->r[0]=0u+0x00000000u; // 801DF0A8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801DF0AC
  c->r[3]=c->r[31]|c->r[31]; // 801DF0B0
  c->r[4]=0u+0x00000003u; // 801DF0B4
  c->lr=0x801DF0BCu; f_8013114C(c); // 801DF0B8
L_801DF0BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF0BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF0C0
  c->lr=c->r[0]; // 801DF0C4
  c->r[1]=c->r[1]+0x00000010u; // 801DF0C8
  return; // 801DF0CC
}

// fn_801DF0D0
void f_801DF0D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF0D0
  c->r[0]=c->lr; // 801DF0D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF0D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF0DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF0E0
  c->r[30]=c->r[3]|c->r[3]; // 801DF0E4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF0E8
  c->lr=0x801DF0F0u; f_801D9D8C(c); // 801DF0EC
  cmps(c,0,(int32_t)c->r[3],1); // 801DF0F0
  if (crb(c,0)) { goto L_801DF110; } // 801DF0F4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF0F8
  c->lr=0x801DF100u; f_801D9D8C(c); // 801DF0FC
  c->r[4]=c->r[3]|c->r[3]; // 801DF100
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF104
  c->lr=0x801DF10Cu; f_801D7E80(c); // 801DF108
  goto L_801DF11C; // 801DF10C
L_801DF110:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF110
  c->r[4]=0u+0x00000001u; // 801DF114
  c->lr=0x801DF11Cu; f_801D7E80(c); // 801DF118
L_801DF11C:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF11C
  c->lr=0x801DF124u; f_801DA07C(c); // 801DF120
  c->r[4]=c->r[3]|c->r[3]; // 801DF124
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF128
  c->lr=0x801DF130u; f_801D7DB4(c); // 801DF12C
  c->r[31]=c->r[3]|c->r[3]; // 801DF130
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF134
  c->r[4]=c->r[31]|c->r[31]; // 801DF138
  c->lr=0x801DF140u; f_801D7FD4(c); // 801DF13C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF140
  c->lr=0x801DF148u; f_801D70B8(c); // 801DF144
  cmps(c,0,(int32_t)c->r[3],0); // 801DF148
  if (!crb(c,2)) { goto L_801DF180; } // 801DF14C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF150
  c->lr=0x801DF158u; f_801D7B0C(c); // 801DF154
  cmps(c,0,(int32_t)c->r[3],0); // 801DF158
  if (!crb(c,2)) { goto L_801DF180; } // 801DF15C
  cmps(c,0,(int32_t)c->r[31],5); // 801DF160
  if (!crb(c,2)) { goto L_801DF174; } // 801DF164
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF168
  c->lr=0x801DF170u; f_801D80F0(c); // 801DF16C
  goto L_801DF188; // 801DF170
L_801DF174:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF174
  c->lr=0x801DF17Cu; f_801D8168(c); // 801DF178
  goto L_801DF188; // 801DF17C
L_801DF180:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF180
  c->lr=0x801DF188u; f_801D8168(c); // 801DF184
L_801DF188:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF188
  c->r[4]=0u+0x00000002u; // 801DF18C
  c->lr=0x801DF194u; f_801DA074(c); // 801DF190
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF194
  c->r[4]=0u+0x00000000u; // 801DF198
  c->lr=0x801DF1A0u; f_801DA11C(c); // 801DF19C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF1A0
  c->r[4]=0u+0x00000000u; // 801DF1A4
  c->lr=0x801DF1ACu; f_801D9384(c); // 801DF1A8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF1AC
  c->lr=0x801DF1B4u; f_801D8DE0(c); // 801DF1B0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF1B4
  c->lr=0x801DF1BCu; f_801D70B8(c); // 801DF1B8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF1BC
  if (crb(c,2)) { goto L_801DF1D4; } // 801DF1C0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF1C4
  c->lr=0x801DF1CCu; f_801D9D1C(c); // 801DF1C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF1CC
  if (crb(c,2)) { goto L_801DF1E0; } // 801DF1D0
L_801DF1D4:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF1D4
  c->lr=0x801DF1DCu; f_801D90E0(c); // 801DF1D8
  goto L_801DF1E8; // 801DF1DC
L_801DF1E0:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF1E0
  c->lr=0x801DF1E8u; f_801D9190(c); // 801DF1E4
L_801DF1E8:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF1E8
  c->lr=0x801DF1F0u; f_801D72E0(c); // 801DF1EC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF1F0
  c->lr=0x801DF1F8u; f_801D70B0(c); // 801DF1F4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF1F8
  c->lr=0x801DF200u; f_801D76DC(c); // 801DF1FC
  c->r[4]=c->r[3]|c->r[3]; // 801DF200
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF204
  c->lr=0x801DF20Cu; f_801D8D0C(c); // 801DF208
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF20C
  c->lr=0x801DF214u; f_801D76DC(c); // 801DF210
  c->r[4]=c->r[3]|c->r[3]; // 801DF214
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF218
  c->lr=0x801DF220u; f_801D9C94(c); // 801DF21C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF220
  c->lr=0x801DF228u; f_801D76DC(c); // 801DF224
  c->r[4]=c->r[3]|c->r[3]; // 801DF228
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF22C
  c->lr=0x801DF234u; f_801D9CD8(c); // 801DF230
  c->r[3]=c->r[30]|c->r[30]; // 801DF234
  c->r[4]=0u+0x00000011u; // 801DF238
  c->lr=0x801DF240u; f_8013114C(c); // 801DF23C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF240
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DF244
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF248
  c->lr=c->r[0]; // 801DF24C
  c->r[1]=c->r[1]+0x00000010u; // 801DF250
  return; // 801DF254
}

// fn_801DF258
void f_801DF258(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF258
  c->r[0]=c->lr; // 801DF25C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF264
  c->r[31]=c->r[3]|c->r[3]; // 801DF268
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF26C
  c->lr=0x801DF274u; f_801D9380(c); // 801DF270
  cmps(c,0,(int32_t)c->r[3],0); // 801DF274
  if (crb(c,2)) { goto L_801DF290; } // 801DF278
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF27C
  c->lr=0x801DF284u; f_801D92F0(c); // 801DF280
  c->r[3]=c->r[31]|c->r[31]; // 801DF284
  c->r[4]=0u+0x00000012u; // 801DF288
  c->lr=0x801DF290u; f_8013114C(c); // 801DF28C
L_801DF290:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF290
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF294
  c->lr=c->r[0]; // 801DF298
  c->r[1]=c->r[1]+0x00000010u; // 801DF29C
  return; // 801DF2A0
}

// fn_801DF2A4
void f_801DF2A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF2A4
  c->r[0]=c->lr; // 801DF2A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF2AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF2B0
  c->r[31]=c->r[3]|c->r[3]; // 801DF2B4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF2B8
  c->lr=0x801DF2C0u; f_801D9D9C(c); // 801DF2BC
  c->r[4]=c->r[3]|c->r[3]; // 801DF2C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF2C4
  c->lr=0x801DF2CCu; f_801D77CC(c); // 801DF2C8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF2CC
  c->lr=0x801DF2D4u; f_801D9D94(c); // 801DF2D0
  c->r[4]=c->r[3]|c->r[3]; // 801DF2D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF2D8
  c->lr=0x801DF2E0u; f_801D77D4(c); // 801DF2DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF2E0
  c->lr=0x801DF2E8u; f_801D7480(c); // 801DF2E4
  c->r[3]=c->r[31]|c->r[31]; // 801DF2E8
  c->r[4]=0u+0x00000013u; // 801DF2EC
  c->lr=0x801DF2F4u; f_8013114C(c); // 801DF2F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF2F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF2F8
  c->lr=c->r[0]; // 801DF2FC
  c->r[1]=c->r[1]+0x00000010u; // 801DF300
  return; // 801DF304
}

// fn_801DF308
void f_801DF308(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF308
  c->r[0]=c->lr; // 801DF30C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF310
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF314
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF318
  c->r[30]=c->r[3]|c->r[3]; // 801DF31C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF320
  c->lr=0x801DF328u; f_801D9D1C(c); // 801DF324
  cmps(c,0,(int32_t)c->r[3],0); // 801DF328
  if (!crb(c,2)) { goto L_801DF348; } // 801DF32C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF330
  c->lr=0x801DF338u; f_801D9D24(c); // 801DF334
  c->r[4]=c->r[3]|c->r[3]; // 801DF338
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF33C
  c->lr=0x801DF344u; f_801D7E68(c); // 801DF340
  goto L_801DF354; // 801DF344
L_801DF348:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF348
  c->r[4]=0u+0xFFFFFFFFu; // 801DF34C
  c->lr=0x801DF354u; f_801D7E68(c); // 801DF350
L_801DF354:;
  c->r[3]=0u+0x00000001u; // 801DF354
  c->lr=0x801DF35Cu; f_8019CD1C(c); // 801DF358
  cmps(c,0,(int32_t)c->r[3],0); // 801DF35C
  if (crb(c,2)) { goto L_801DF384; } // 801DF360
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF364
  c->lr=0x801DF36Cu; f_801D70A8(c); // 801DF368
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF36C
  c->lr=0x801DF374u; f_801D7480(c); // 801DF370
  c->r[3]=c->r[30]|c->r[30]; // 801DF374
  c->r[4]=0u+0x00000014u; // 801DF378
  c->lr=0x801DF380u; f_8013114C(c); // 801DF37C
  goto L_801DF614; // 801DF380
L_801DF384:;
  c->r[3]=0u+0x00000000u; // 801DF384
  c->lr=0x801DF38Cu; f_8019CD1C(c); // 801DF388
  cmps(c,0,(int32_t)c->r[3],0); // 801DF38C
  if (crb(c,2)) { goto L_801DF400; } // 801DF390
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF394
  c->lr=0x801DF39Cu; f_801D76DC(c); // 801DF398
  c->r[4]=c->r[3]|c->r[3]; // 801DF39C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF3A0
  c->lr=0x801DF3A8u; f_801D9C94(c); // 801DF3A4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF3A8
  c->lr=0x801DF3B0u; f_801D77C4(c); // 801DF3AC
  c->r[4]=c->r[3]|c->r[3]; // 801DF3B0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF3B4
  c->lr=0x801DF3BCu; f_801D9CD8(c); // 801DF3B8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF3BC
  c->lr=0x801DF3C4u; f_801D92F0(c); // 801DF3C0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF3C4
  c->lr=0x801DF3CCu; f_801D7C60(c); // 801DF3C8
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3CC
  if (!crb(c,2)) { goto L_801DF3E0; } // 801DF3D0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF3D4
  c->lr=0x801DF3DCu; f_801D73D4(c); // 801DF3D8
  goto L_801DF614; // 801DF3DC
L_801DF3E0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF3E0
  c->lr=0x801DF3E8u; f_801D7480(c); // 801DF3E4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF3E8
  c->lr=0x801DF3F0u; f_801D7348(c); // 801DF3EC
  c->r[3]=c->r[30]|c->r[30]; // 801DF3F0
  c->r[4]=0u+0x00000014u; // 801DF3F4
  c->lr=0x801DF3FCu; f_8013114C(c); // 801DF3F8
  goto L_801DF614; // 801DF3FC
L_801DF400:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF400
  c->lr=0x801DF408u; f_801D7240(c); // 801DF404
  cmps(c,0,(int32_t)c->r[3],0); // 801DF408
  if (!crb(c,2)) { goto L_801DF49C; } // 801DF40C
  c->r[3]=0u+0x00000008u; // 801DF410
  c->lr=0x801DF418u; f_8019CD1C(c); // 801DF414
  cmps(c,0,(int32_t)c->r[3],0); // 801DF418
  if (crb(c,2)) { goto L_801DF49C; } // 801DF41C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF420
  c->lr=0x801DF428u; f_801D941C(c); // 801DF424
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF428
  c->lr=0x801DF430u; f_801D76BC(c); // 801DF42C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF430
  c->lr=0x801DF438u; f_801D7720(c); // 801DF434
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF438
  c->lr=0x801DF440u; f_801D9D9C(c); // 801DF43C
  c->r[4]=c->r[3]|c->r[3]; // 801DF440
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF444
  c->lr=0x801DF44Cu; f_801D77CC(c); // 801DF448
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF44C
  c->lr=0x801DF454u; f_801D9D94(c); // 801DF450
  c->r[4]=c->r[3]|c->r[3]; // 801DF454
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF458
  c->lr=0x801DF460u; f_801D77D4(c); // 801DF45C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF460
  c->lr=0x801DF468u; f_801D737C(c); // 801DF464
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF468
  c->lr=0x801DF470u; f_801D76DC(c); // 801DF46C
  c->r[4]=c->r[3]|c->r[3]; // 801DF470
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF474
  c->lr=0x801DF47Cu; f_801D9C94(c); // 801DF478
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF47C
  c->lr=0x801DF484u; f_801D77C4(c); // 801DF480
  c->r[4]=c->r[3]|c->r[3]; // 801DF484
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF488
  c->lr=0x801DF490u; f_801D9CD8(c); // 801DF48C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF490
  c->lr=0x801DF498u; f_801D92F0(c); // 801DF494
  goto L_801DF614; // 801DF498
L_801DF49C:;
  c->r[3]=0u+0x00000007u; // 801DF49C
  c->lr=0x801DF4A4u; f_8019CD1C(c); // 801DF4A0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF4A4
  if (crb(c,2)) { goto L_801DF564; } // 801DF4A8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF4AC
  c->lr=0x801DF4B4u; f_801D9D8C(c); // 801DF4B0
  c->r[4]=c->r[3]|c->r[3]; // 801DF4B4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF4B8
  c->lr=0x801DF4C0u; f_801D7E80(c); // 801DF4BC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF4C0
  c->lr=0x801DF4C8u; f_801D9D24(c); // 801DF4C4
  c->r[4]=c->r[3]|c->r[3]; // 801DF4C8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF4CC
  c->lr=0x801DF4D4u; f_801D7E68(c); // 801DF4D0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF4D4
  c->r[4]=0u+0x00000002u; // 801DF4D8
  c->lr=0x801DF4E0u; f_801D7DB4(c); // 801DF4DC
  c->r[31]=c->r[3]|c->r[3]; // 801DF4E0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF4E4
  c->r[4]=c->r[31]|c->r[31]; // 801DF4E8
  c->lr=0x801DF4F0u; f_801D7FD4(c); // 801DF4EC
  cmps(c,0,(int32_t)c->r[31],2); // 801DF4F0
  if (!crb(c,2)) { goto L_801DF504; } // 801DF4F4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF4F8
  c->lr=0x801DF500u; f_801D73D4(c); // 801DF4FC
  goto L_801DF614; // 801DF500
L_801DF504:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF504
  c->lr=0x801DF50Cu; f_801D7408(c); // 801DF508
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF50C
  c->lr=0x801DF514u; f_801D9D2C(c); // 801DF510
  c->r[31]=c->r[3]|c->r[3]; // 801DF514
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF518
  c->r[4]=c->r[31]|c->r[31]; // 801DF51C
  c->lr=0x801DF524u; f_801D9D34(c); // 801DF520
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF524
  c->lr=0x801DF52Cu; f_801D9D84(c); // 801DF528
  cmps(c,0,(int32_t)c->r[3],0); // 801DF52C
  if (crb(c,2)) { goto L_801DF550; } // 801DF530
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF534
  c->lr=0x801DF53Cu; f_801D9D24(c); // 801DF538
  c->r[4]=c->r[3]|c->r[3]; // 801DF53C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF540
  c->r[5]=c->r[31]|c->r[31]; // 801DF544
  c->lr=0x801DF54Cu; f_801D7E70(c); // 801DF548
  goto L_801DF614; // 801DF54C
L_801DF550:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF550
  c->r[4]=0u+0xFFFFFFFFu; // 801DF554
  c->r[5]=c->r[31]|c->r[31]; // 801DF558
  c->lr=0x801DF560u; f_801D7E70(c); // 801DF55C
  goto L_801DF614; // 801DF560
L_801DF564:;
  c->r[3]=0u+0x00000003u; // 801DF564
  c->lr=0x801DF56Cu; f_8019CD1C(c); // 801DF568
  cmps(c,0,(int32_t)c->r[3],0); // 801DF56C
  if (crb(c,2)) { goto L_801DF57C; } // 801DF570
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF574
  c->lr=0x801DF57Cu; f_801D761C(c); // 801DF578
L_801DF57C:;
  c->r[3]=0u+0x00000004u; // 801DF57C
  c->lr=0x801DF584u; f_8019CD1C(c); // 801DF580
  cmps(c,0,(int32_t)c->r[3],0); // 801DF584
  if (crb(c,2)) { goto L_801DF594; } // 801DF588
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF58C
  c->lr=0x801DF594u; f_801D75BC(c); // 801DF590
L_801DF594:;
  c->r[3]=0u+0x00000006u; // 801DF594
  c->lr=0x801DF59Cu; f_8019CD1C(c); // 801DF598
  cmps(c,0,(int32_t)c->r[3],0); // 801DF59C
  if (crb(c,2)) { goto L_801DF5BC; } // 801DF5A0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF5A4
  c->lr=0x801DF5ACu; f_801DA124(c); // 801DF5A8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF5AC
  c->lr=0x801DF5B4u; f_801D7778(c); // 801DF5B0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF5B4
  c->lr=0x801DF5BCu; f_801D767C(c); // 801DF5B8
L_801DF5BC:;
  c->r[3]=0u+0x00000005u; // 801DF5BC
  c->lr=0x801DF5C4u; f_8019CD1C(c); // 801DF5C0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF5C4
  if (crb(c,2)) { goto L_801DF5E4; } // 801DF5C8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF5CC
  c->lr=0x801DF5D4u; f_801DA12C(c); // 801DF5D0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF5D4
  c->lr=0x801DF5DCu; f_801D772C(c); // 801DF5D8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF5DC
  c->lr=0x801DF5E4u; f_801D767C(c); // 801DF5E0
L_801DF5E4:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF5E4
  c->lr=0x801DF5ECu; f_801D76DC(c); // 801DF5E8
  c->r[4]=c->r[3]|c->r[3]; // 801DF5EC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF5F0
  c->lr=0x801DF5F8u; f_801D9C94(c); // 801DF5F4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF5F8
  c->lr=0x801DF600u; f_801D77C4(c); // 801DF5FC
  c->r[4]=c->r[3]|c->r[3]; // 801DF600
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF604
  c->lr=0x801DF60Cu; f_801D9CD8(c); // 801DF608
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF60C
  c->lr=0x801DF614u; f_801D92F0(c); // 801DF610
L_801DF614:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF614
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DF618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF61C
  c->lr=c->r[0]; // 801DF620
  c->r[1]=c->r[1]+0x00000010u; // 801DF624
  return; // 801DF628
}

// fn_801DF62C
void f_801DF62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF62C
  c->r[0]=c->lr; // 801DF630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF638
  c->r[31]=c->r[3]|c->r[3]; // 801DF63C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801DF640
  c->lr=0x801DF648u; f_801D7314(c); // 801DF644
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF648
  c->lr=0x801DF650u; f_801D70B8(c); // 801DF64C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF650
  if (!crb(c,2)) { goto L_801DF668; } // 801DF654
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF658
  c->lr=0x801DF660u; f_801D9D1C(c); // 801DF65C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF660
  if (crb(c,2)) { goto L_801DF674; } // 801DF664
L_801DF668:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF668
  c->lr=0x801DF670u; f_801D9238(c); // 801DF66C
  goto L_801DF67C; // 801DF670
L_801DF674:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF674
  c->lr=0x801DF67Cu; f_801D9298(c); // 801DF678
L_801DF67C:;
  c->r[3]=c->r[31]|c->r[31]; // 801DF67C
  c->r[4]=0u+0x00000015u; // 801DF680
  c->lr=0x801DF688u; f_8013114C(c); // 801DF684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF688
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF68C
  c->lr=c->r[0]; // 801DF690
  c->r[1]=c->r[1]+0x00000010u; // 801DF694
  return; // 801DF698
}

// fn_801DF69C
void f_801DF69C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF69C
  c->r[0]=c->lr; // 801DF6A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF6A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF6A8
  c->r[31]=c->r[3]|c->r[3]; // 801DF6AC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF6B0
  c->lr=0x801DF6B8u; f_801D9380(c); // 801DF6B4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF6B8
  if (crb(c,2)) { goto L_801DF700; } // 801DF6BC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF6C0
  c->r[4]=0u+0x00000000u; // 801DF6C4
  c->lr=0x801DF6CCu; f_801D8B24(c); // 801DF6C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF6CC
  c->lr=0x801DF6D4u; f_801D70B8(c); // 801DF6D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF6D4
  if (crb(c,2)) { goto L_801DF6EC; } // 801DF6D8
  c->r[3]=c->r[31]|c->r[31]; // 801DF6DC
  c->r[4]=0u+0x00000007u; // 801DF6E0
  c->lr=0x801DF6E8u; f_8013114C(c); // 801DF6E4
  goto L_801DF700; // 801DF6E8
L_801DF6EC:;
  c->r[0]=0u+0x00000010u; // 801DF6EC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801DF6F0
  c->r[3]=c->r[31]|c->r[31]; // 801DF6F4
  c->r[4]=0u+0x0000001Cu; // 801DF6F8
  c->lr=0x801DF700u; f_8013114C(c); // 801DF6FC
L_801DF700:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF700
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF704
  c->lr=c->r[0]; // 801DF708
  c->r[1]=c->r[1]+0x00000010u; // 801DF70C
  return; // 801DF710
}

// fn_801DF714
void f_801DF714(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF714
  c->r[0]=c->lr; // 801DF718
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF71C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF720
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF724
  c->r[30]=c->r[3]|c->r[3]; // 801DF728
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF72C
  c->lr=0x801DF734u; f_801D9D8C(c); // 801DF730
  cmps(c,0,(int32_t)c->r[3],1); // 801DF734
  if (crb(c,0)) { goto L_801DF754; } // 801DF738
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF73C
  c->lr=0x801DF744u; f_801D9D8C(c); // 801DF740
  c->r[4]=c->r[3]|c->r[3]; // 801DF744
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF748
  c->lr=0x801DF750u; f_801D7E80(c); // 801DF74C
  goto L_801DF760; // 801DF750
L_801DF754:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF754
  c->r[4]=0u+0x00000001u; // 801DF758
  c->lr=0x801DF760u; f_801D7E80(c); // 801DF75C
L_801DF760:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF760
  c->lr=0x801DF768u; f_801DA07C(c); // 801DF764
  c->r[4]=c->r[3]|c->r[3]; // 801DF768
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF76C
  c->lr=0x801DF774u; f_801D7DB4(c); // 801DF770
  c->r[31]=c->r[3]|c->r[3]; // 801DF774
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF778
  c->r[4]=c->r[31]|c->r[31]; // 801DF77C
  c->lr=0x801DF784u; f_801D7FD4(c); // 801DF780
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF784
  c->lr=0x801DF78Cu; f_801D70B8(c); // 801DF788
  cmps(c,0,(int32_t)c->r[3],0); // 801DF78C
  if (!crb(c,2)) { goto L_801DF7C4; } // 801DF790
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF794
  c->lr=0x801DF79Cu; f_801D7B0C(c); // 801DF798
  cmps(c,0,(int32_t)c->r[3],0); // 801DF79C
  if (!crb(c,2)) { goto L_801DF7C4; } // 801DF7A0
  cmps(c,0,(int32_t)c->r[31],5); // 801DF7A4
  if (!crb(c,2)) { goto L_801DF7B8; } // 801DF7A8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF7AC
  c->lr=0x801DF7B4u; f_801D80F0(c); // 801DF7B0
  goto L_801DF7CC; // 801DF7B4
L_801DF7B8:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF7B8
  c->lr=0x801DF7C0u; f_801D8168(c); // 801DF7BC
  goto L_801DF7CC; // 801DF7C0
L_801DF7C4:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF7C4
  c->lr=0x801DF7CCu; f_801D8168(c); // 801DF7C8
L_801DF7CC:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF7CC
  c->r[4]=0u+0x00000003u; // 801DF7D0
  c->lr=0x801DF7D8u; f_801DA074(c); // 801DF7D4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF7D8
  c->r[4]=0u+0x00000000u; // 801DF7DC
  c->lr=0x801DF7E4u; f_801DA11C(c); // 801DF7E0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF7E4
  c->r[4]=0u+0x00000000u; // 801DF7E8
  c->lr=0x801DF7F0u; f_801D93D0(c); // 801DF7EC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF7F0
  c->lr=0x801DF7F8u; f_801D8DE0(c); // 801DF7F4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF7F8
  c->lr=0x801DF800u; f_801D70B8(c); // 801DF7FC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF800
  if (crb(c,2)) { goto L_801DF818; } // 801DF804
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF808
  c->lr=0x801DF810u; f_801D9D1C(c); // 801DF80C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF810
  if (crb(c,2)) { goto L_801DF824; } // 801DF814
L_801DF818:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF818
  c->lr=0x801DF820u; f_801D90E0(c); // 801DF81C
  goto L_801DF82C; // 801DF820
L_801DF824:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF824
  c->lr=0x801DF82Cu; f_801D9190(c); // 801DF828
L_801DF82C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF82C
  c->lr=0x801DF834u; f_801D72E0(c); // 801DF830
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF834
  c->lr=0x801DF83Cu; f_801D70B0(c); // 801DF838
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF83C
  c->lr=0x801DF844u; f_801D798C(c); // 801DF840
  c->r[4]=c->r[3]|c->r[3]; // 801DF844
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF848
  c->lr=0x801DF850u; f_801D8D0C(c); // 801DF84C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF850
  c->lr=0x801DF858u; f_801D798C(c); // 801DF854
  c->r[4]=c->r[3]|c->r[3]; // 801DF858
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF85C
  c->lr=0x801DF864u; f_801D9C94(c); // 801DF860
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF864
  c->lr=0x801DF86Cu; f_801D7A38(c); // 801DF868
  c->r[4]=c->r[3]|c->r[3]; // 801DF86C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF870
  c->lr=0x801DF878u; f_801D9CD8(c); // 801DF874
  c->r[3]=c->r[30]|c->r[30]; // 801DF878
  c->r[4]=0u+0x00000017u; // 801DF87C
  c->lr=0x801DF884u; f_8013114C(c); // 801DF880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF884
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DF888
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF88C
  c->lr=c->r[0]; // 801DF890
  c->r[1]=c->r[1]+0x00000010u; // 801DF894
  return; // 801DF898
}

// fn_801DF89C
void f_801DF89C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF89C
  c->r[0]=c->lr; // 801DF8A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF8A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF8A8
  c->r[31]=c->r[3]|c->r[3]; // 801DF8AC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF8B0
  c->lr=0x801DF8B8u; f_801D9380(c); // 801DF8B4
  cmps(c,0,(int32_t)c->r[3],0); // 801DF8B8
  if (crb(c,2)) { goto L_801DF8D4; } // 801DF8BC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF8C0
  c->lr=0x801DF8C8u; f_801D92F0(c); // 801DF8C4
  c->r[3]=c->r[31]|c->r[31]; // 801DF8C8
  c->r[4]=0u+0x00000018u; // 801DF8CC
  c->lr=0x801DF8D4u; f_8013114C(c); // 801DF8D0
L_801DF8D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF8D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF8D8
  c->lr=c->r[0]; // 801DF8DC
  c->r[1]=c->r[1]+0x00000010u; // 801DF8E0
  return; // 801DF8E4
}

// fn_801DF8E8
void f_801DF8E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF8E8
  c->r[0]=c->lr; // 801DF8EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF8F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF8F4
  c->r[31]=c->r[3]|c->r[3]; // 801DF8F8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF8FC
  c->lr=0x801DF904u; f_801D9D9C(c); // 801DF900
  c->r[4]=c->r[3]|c->r[3]; // 801DF904
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF908
  c->lr=0x801DF910u; f_801D7A40(c); // 801DF90C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DF910
  c->lr=0x801DF918u; f_801D9D94(c); // 801DF914
  c->r[4]=c->r[3]|c->r[3]; // 801DF918
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF91C
  c->lr=0x801DF924u; f_801D7A48(c); // 801DF920
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DF924
  c->lr=0x801DF92Cu; f_801D7480(c); // 801DF928
  c->r[3]=c->r[31]|c->r[31]; // 801DF92C
  c->r[4]=0u+0x00000019u; // 801DF930
  c->lr=0x801DF938u; f_8013114C(c); // 801DF934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF938
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF93C
  c->lr=c->r[0]; // 801DF940
  c->r[1]=c->r[1]+0x00000010u; // 801DF944
  return; // 801DF948
}

// fn_801DF94C
void f_801DF94C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF94C
  c->r[0]=c->lr; // 801DF950
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF958
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF95C
  c->r[30]=c->r[3]|c->r[3]; // 801DF960
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DF964
  c->lr=0x801DF96Cu; f_801D9D1C(c); // 801DF968
  cmps(c,0,(int32_t)c->r[3],0); // 801DF96C
  if (!crb(c,2)) { goto L_801DF98C; } // 801DF970
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF974
  c->lr=0x801DF97Cu; f_801D9D24(c); // 801DF978
  c->r[4]=c->r[3]|c->r[3]; // 801DF97C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF980
  c->lr=0x801DF988u; f_801D7E68(c); // 801DF984
  goto L_801DF998; // 801DF988
L_801DF98C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF98C
  c->r[4]=0u+0xFFFFFFFFu; // 801DF990
  c->lr=0x801DF998u; f_801D7E68(c); // 801DF994
L_801DF998:;
  c->r[3]=0u+0x00000001u; // 801DF998
  c->lr=0x801DF9A0u; f_8019CD1C(c); // 801DF99C
  cmps(c,0,(int32_t)c->r[3],0); // 801DF9A0
  if (crb(c,2)) { goto L_801DF9C8; } // 801DF9A4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF9A8
  c->lr=0x801DF9B0u; f_801D70A8(c); // 801DF9AC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF9B0
  c->lr=0x801DF9B8u; f_801D7480(c); // 801DF9B4
  c->r[3]=c->r[30]|c->r[30]; // 801DF9B8
  c->r[4]=0u+0x0000001Au; // 801DF9BC
  c->lr=0x801DF9C4u; f_8013114C(c); // 801DF9C0
  goto L_801DFC00; // 801DF9C4
L_801DF9C8:;
  c->r[3]=0u+0x00000000u; // 801DF9C8
  c->lr=0x801DF9D0u; f_8019CD1C(c); // 801DF9CC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF9D0
  if (crb(c,2)) { goto L_801DFA44; } // 801DF9D4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF9D8
  c->lr=0x801DF9E0u; f_801D798C(c); // 801DF9DC
  c->r[4]=c->r[3]|c->r[3]; // 801DF9E0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF9E4
  c->lr=0x801DF9ECu; f_801D9C94(c); // 801DF9E8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DF9EC
  c->lr=0x801DF9F4u; f_801D7A38(c); // 801DF9F0
  c->r[4]=c->r[3]|c->r[3]; // 801DF9F4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DF9F8
  c->lr=0x801DFA00u; f_801D9CD8(c); // 801DF9FC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFA00
  c->lr=0x801DFA08u; f_801D92F0(c); // 801DFA04
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA08
  c->lr=0x801DFA10u; f_801D7D00(c); // 801DFA0C
  cmps(c,0,(int32_t)c->r[3],0); // 801DFA10
  if (!crb(c,2)) { goto L_801DFA24; } // 801DFA14
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA18
  c->lr=0x801DFA20u; f_801D73D4(c); // 801DFA1C
  goto L_801DFC00; // 801DFA20
L_801DFA24:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA24
  c->lr=0x801DFA2Cu; f_801D7480(c); // 801DFA28
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA2C
  c->lr=0x801DFA34u; f_801D7348(c); // 801DFA30
  c->r[3]=c->r[30]|c->r[30]; // 801DFA34
  c->r[4]=0u+0x0000001Au; // 801DFA38
  c->lr=0x801DFA40u; f_8013114C(c); // 801DFA3C
  goto L_801DFC00; // 801DFA40
L_801DFA44:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA44
  c->lr=0x801DFA4Cu; f_801D7240(c); // 801DFA48
  cmps(c,0,(int32_t)c->r[3],0); // 801DFA4C
  if (!crb(c,2)) { goto L_801DFAE0; } // 801DFA50
  c->r[3]=0u+0x00000008u; // 801DFA54
  c->lr=0x801DFA5Cu; f_8019CD1C(c); // 801DFA58
  cmps(c,0,(int32_t)c->r[3],0); // 801DFA5C
  if (crb(c,2)) { goto L_801DFAE0; } // 801DFA60
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFA64
  c->lr=0x801DFA6Cu; f_801D9490(c); // 801DFA68
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA6C
  c->lr=0x801DFA74u; f_801D796C(c); // 801DFA70
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA74
  c->lr=0x801DFA7Cu; f_801D7994(c); // 801DFA78
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFA7C
  c->lr=0x801DFA84u; f_801D9D9C(c); // 801DFA80
  c->r[4]=c->r[3]|c->r[3]; // 801DFA84
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA88
  c->lr=0x801DFA90u; f_801D7A40(c); // 801DFA8C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFA90
  c->lr=0x801DFA98u; f_801D9D94(c); // 801DFA94
  c->r[4]=c->r[3]|c->r[3]; // 801DFA98
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFA9C
  c->lr=0x801DFAA4u; f_801D7A48(c); // 801DFAA0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFAA4
  c->lr=0x801DFAACu; f_801D737C(c); // 801DFAA8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFAAC
  c->lr=0x801DFAB4u; f_801D798C(c); // 801DFAB0
  c->r[4]=c->r[3]|c->r[3]; // 801DFAB4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFAB8
  c->lr=0x801DFAC0u; f_801D9C94(c); // 801DFABC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFAC0
  c->lr=0x801DFAC8u; f_801D7A38(c); // 801DFAC4
  c->r[4]=c->r[3]|c->r[3]; // 801DFAC8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFACC
  c->lr=0x801DFAD4u; f_801D9CD8(c); // 801DFAD0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFAD4
  c->lr=0x801DFADCu; f_801D92F0(c); // 801DFAD8
  goto L_801DFC00; // 801DFADC
L_801DFAE0:;
  c->r[3]=0u+0x00000007u; // 801DFAE0
  c->lr=0x801DFAE8u; f_8019CD1C(c); // 801DFAE4
  cmps(c,0,(int32_t)c->r[3],0); // 801DFAE8
  if (crb(c,2)) { goto L_801DFB50; } // 801DFAEC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFAF0
  c->lr=0x801DFAF8u; f_801D7408(c); // 801DFAF4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFAF8
  c->lr=0x801DFB00u; f_801D9D2C(c); // 801DFAFC
  c->r[31]=c->r[3]|c->r[3]; // 801DFB00
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFB04
  c->r[4]=c->r[31]|c->r[31]; // 801DFB08
  c->lr=0x801DFB10u; f_801D9D34(c); // 801DFB0C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFB10
  c->lr=0x801DFB18u; f_801D9D84(c); // 801DFB14
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB18
  if (crb(c,2)) { goto L_801DFB3C; } // 801DFB1C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFB20
  c->lr=0x801DFB28u; f_801D9D24(c); // 801DFB24
  c->r[4]=c->r[3]|c->r[3]; // 801DFB28
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFB2C
  c->r[5]=c->r[31]|c->r[31]; // 801DFB30
  c->lr=0x801DFB38u; f_801D7E70(c); // 801DFB34
  goto L_801DFC00; // 801DFB38
L_801DFB3C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFB3C
  c->r[4]=0u+0xFFFFFFFFu; // 801DFB40
  c->r[5]=c->r[31]|c->r[31]; // 801DFB44
  c->lr=0x801DFB4Cu; f_801D7E70(c); // 801DFB48
  goto L_801DFC00; // 801DFB4C
L_801DFB50:;
  c->r[3]=0u+0x00000003u; // 801DFB50
  c->lr=0x801DFB58u; f_8019CD1C(c); // 801DFB54
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB58
  if (crb(c,2)) { goto L_801DFB68; } // 801DFB5C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFB60
  c->lr=0x801DFB68u; f_801D78CC(c); // 801DFB64
L_801DFB68:;
  c->r[3]=0u+0x00000004u; // 801DFB68
  c->lr=0x801DFB70u; f_8019CD1C(c); // 801DFB6C
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB70
  if (crb(c,2)) { goto L_801DFB80; } // 801DFB74
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFB78
  c->lr=0x801DFB80u; f_801D786C(c); // 801DFB7C
L_801DFB80:;
  c->r[3]=0u+0x00000006u; // 801DFB80
  c->lr=0x801DFB88u; f_8019CD1C(c); // 801DFB84
  cmps(c,0,(int32_t)c->r[3],0); // 801DFB88
  if (crb(c,2)) { goto L_801DFBA8; } // 801DFB8C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFB90
  c->lr=0x801DFB98u; f_801DA124(c); // 801DFB94
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFB98
  c->lr=0x801DFBA0u; f_801D79EC(c); // 801DFB9C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFBA0
  c->lr=0x801DFBA8u; f_801D792C(c); // 801DFBA4
L_801DFBA8:;
  c->r[3]=0u+0x00000005u; // 801DFBA8
  c->lr=0x801DFBB0u; f_8019CD1C(c); // 801DFBAC
  cmps(c,0,(int32_t)c->r[3],0); // 801DFBB0
  if (crb(c,2)) { goto L_801DFBD0; } // 801DFBB4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFBB8
  c->lr=0x801DFBC0u; f_801DA12C(c); // 801DFBBC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFBC0
  c->lr=0x801DFBC8u; f_801D79A0(c); // 801DFBC4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFBC8
  c->lr=0x801DFBD0u; f_801D792C(c); // 801DFBCC
L_801DFBD0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFBD0
  c->lr=0x801DFBD8u; f_801D798C(c); // 801DFBD4
  c->r[4]=c->r[3]|c->r[3]; // 801DFBD8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFBDC
  c->lr=0x801DFBE4u; f_801D9C94(c); // 801DFBE0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFBE4
  c->lr=0x801DFBECu; f_801D7A38(c); // 801DFBE8
  c->r[4]=c->r[3]|c->r[3]; // 801DFBEC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFBF0
  c->lr=0x801DFBF8u; f_801D9CD8(c); // 801DFBF4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFBF8
  c->lr=0x801DFC00u; f_801D92F0(c); // 801DFBFC
L_801DFC00:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFC00
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFC04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFC08
  c->lr=c->r[0]; // 801DFC0C
  c->r[1]=c->r[1]+0x00000010u; // 801DFC10
  return; // 801DFC14
}

// fn_801DFC18
void f_801DFC18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFC18
  c->r[0]=c->lr; // 801DFC1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFC20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFC24
  c->r[31]=c->r[3]|c->r[3]; // 801DFC28
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801DFC2C
  c->lr=0x801DFC34u; f_801D7314(c); // 801DFC30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFC34
  c->lr=0x801DFC3Cu; f_801D70B8(c); // 801DFC38
  cmps(c,0,(int32_t)c->r[3],0); // 801DFC3C
  if (!crb(c,2)) { goto L_801DFC54; } // 801DFC40
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFC44
  c->lr=0x801DFC4Cu; f_801D9D1C(c); // 801DFC48
  cmps(c,0,(int32_t)c->r[3],0); // 801DFC4C
  if (crb(c,2)) { goto L_801DFC60; } // 801DFC50
L_801DFC54:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFC54
  c->lr=0x801DFC5Cu; f_801D9238(c); // 801DFC58
  goto L_801DFC68; // 801DFC5C
L_801DFC60:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFC60
  c->lr=0x801DFC68u; f_801D9298(c); // 801DFC64
L_801DFC68:;
  c->r[3]=c->r[31]|c->r[31]; // 801DFC68
  c->r[4]=0u+0x0000001Bu; // 801DFC6C
  c->lr=0x801DFC74u; f_8013114C(c); // 801DFC70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFC74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFC78
  c->lr=c->r[0]; // 801DFC7C
  c->r[1]=c->r[1]+0x00000010u; // 801DFC80
  return; // 801DFC84
}

// fn_801DFC88
void f_801DFC88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFC88
  c->r[0]=c->lr; // 801DFC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFC90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFC94
  c->r[31]=c->r[3]|c->r[3]; // 801DFC98
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DFC9C
  c->lr=0x801DFCA4u; f_801D9380(c); // 801DFCA0
  cmps(c,0,(int32_t)c->r[3],0); // 801DFCA4
  if (crb(c,2)) { goto L_801DFCEC; } // 801DFCA8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFCAC
  c->r[4]=0u+0x00000000u; // 801DFCB0
  c->lr=0x801DFCB8u; f_801D8B24(c); // 801DFCB4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFCB8
  c->lr=0x801DFCC0u; f_801D70B8(c); // 801DFCBC
  cmps(c,0,(int32_t)c->r[3],0); // 801DFCC0
  if (crb(c,2)) { goto L_801DFCD8; } // 801DFCC4
  c->r[3]=c->r[31]|c->r[31]; // 801DFCC8
  c->r[4]=0u+0x00000007u; // 801DFCCC
  c->lr=0x801DFCD4u; f_8013114C(c); // 801DFCD0
  goto L_801DFCEC; // 801DFCD4
L_801DFCD8:;
  c->r[0]=0u+0x00000016u; // 801DFCD8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801DFCDC
  c->r[3]=c->r[31]|c->r[31]; // 801DFCE0
  c->r[4]=0u+0x0000001Cu; // 801DFCE4
  c->lr=0x801DFCECu; f_8013114C(c); // 801DFCE8
L_801DFCEC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFCEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFCF0
  c->lr=c->r[0]; // 801DFCF4
  c->r[1]=c->r[1]+0x00000010u; // 801DFCF8
  return; // 801DFCFC
}

// fn_801DFD00
void f_801DFD00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFD00
  c->r[0]=c->lr; // 801DFD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFD08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFD0C
  c->r[31]=c->r[3]|c->r[3]; // 801DFD10
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DFD14
  c->r[4]=0u+0x00000001u; // 801DFD18
  c->lr=0x801DFD20u; f_801DA11C(c); // 801DFD1C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFD20
  c->lr=0x801DFD28u; f_801D8DE0(c); // 801DFD24
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801DFD28
  cmps(c,0,(int32_t)c->r[0],0); // 801DFD2C
  if (crb(c,2)) { goto L_801DFD54; } // 801DFD30
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFD34
  c->lr=0x801DFD3Cu; f_801DA07C(c); // 801DFD38
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DFD3C
  c->r[0]=cntlz(c->r[0]); // 801DFD40
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DFD44
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFD48
  c->lr=0x801DFD50u; f_801D9548(c); // 801DFD4C
  goto L_801DFD5C; // 801DFD50
L_801DFD54:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFD54
  c->lr=0x801DFD5Cu; f_801D9504(c); // 801DFD58
L_801DFD5C:;
  c->r[0]=0u+0x00000000u; // 801DFD5C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801DFD60
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFD64
  c->lr=0x801DFD6Cu; f_801D72E0(c); // 801DFD68
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFD6C
  c->lr=0x801DFD74u; f_801D70B0(c); // 801DFD70
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFD74
  c->lr=0x801DFD7Cu; f_801DA084(c); // 801DFD78
  c->r[4]=c->r[3]|c->r[3]; // 801DFD7C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFD80
  c->lr=0x801DFD88u; f_801D7B14(c); // 801DFD84
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFD88
  c->lr=0x801DFD90u; f_801D7B00(c); // 801DFD8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801DFD90
  c->lr=0x801DFD98u; f_801D7B0C(c); // 801DFD94
  c->r[4]=c->r[3]|c->r[3]; // 801DFD98
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFD9C
  c->lr=0x801DFDA4u; f_801D8D0C(c); // 801DFDA0
  c->r[3]=c->r[31]|c->r[31]; // 801DFDA4
  c->r[4]=0u+0x0000001Du; // 801DFDA8
  c->lr=0x801DFDB0u; f_8013114C(c); // 801DFDAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFDB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFDB4
  c->lr=c->r[0]; // 801DFDB8
  c->r[1]=c->r[1]+0x00000010u; // 801DFDBC
  return; // 801DFDC0
}

// fn_801DFDC4
void f_801DFDC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFDC4
  c->r[0]=c->lr; // 801DFDC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFDCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFDD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DFDD4
  c->r[30]=c->r[3]|c->r[3]; // 801DFDD8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DFDDC
  c->lr=0x801DFDE4u; f_801D9744(c); // 801DFDE0
  cmps(c,0,(int32_t)c->r[3],0); // 801DFDE4
  if (crb(c,2)) { goto L_801DFE4C; } // 801DFDE8
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFDEC
  c->lr=0x801DFDF4u; f_801DA07C(c); // 801DFDF0
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DFDF4
  c->r[0]=cntlz(c->r[0]); // 801DFDF8
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DFDFC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFE00
  c->lr=0x801DFE08u; f_801D9D1C(c); // 801DFE04
  cmps(c,0,(int32_t)c->r[3],0); // 801DFE08
  if (crb(c,2)) { goto L_801DFE20; } // 801DFE0C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFE10
  c->r[4]=c->r[31]|c->r[31]; // 801DFE14
  c->lr=0x801DFE1Cu; f_801D96F4(c); // 801DFE18
  goto L_801DFE2C; // 801DFE1C
L_801DFE20:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFE20
  c->r[4]=c->r[31]|c->r[31]; // 801DFE24
  c->lr=0x801DFE2Cu; f_801D969C(c); // 801DFE28
L_801DFE2C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFE2C
  c->lr=0x801DFE34u; f_801D7B0C(c); // 801DFE30
  c->r[4]=c->r[3]|c->r[3]; // 801DFE34
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFE38
  c->lr=0x801DFE40u; f_801DA0D8(c); // 801DFE3C
  c->r[3]=c->r[30]|c->r[30]; // 801DFE40
  c->r[4]=0u+0x0000001Eu; // 801DFE44
  c->lr=0x801DFE4Cu; f_8013114C(c); // 801DFE48
L_801DFE4C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFE4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFE50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFE54
  c->lr=c->r[0]; // 801DFE58
  c->r[1]=c->r[1]+0x00000010u; // 801DFE5C
  return; // 801DFE60
}

// fn_801DFE64
void f_801DFE64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFE64
  c->r[0]=c->lr; // 801DFE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFE70
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DFE74
  c->r[30]=c->r[3]|c->r[3]; // 801DFE78
  c->r[3]=0u+0x00000001u; // 801DFE7C
  c->lr=0x801DFE84u; f_8019CD1C(c); // 801DFE80
  cmps(c,0,(int32_t)c->r[3],0); // 801DFE84
  if (crb(c,2)) { goto L_801DFEA4; } // 801DFE88
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFE8C
  c->lr=0x801DFE94u; f_801D70A8(c); // 801DFE90
  c->r[3]=c->r[30]|c->r[30]; // 801DFE94
  c->r[4]=0u+0x00000021u; // 801DFE98
  c->lr=0x801DFEA0u; f_8013114C(c); // 801DFE9C
  goto L_801DFF78; // 801DFEA0
L_801DFEA4:;
  c->r[3]=0u+0x00000000u; // 801DFEA4
  c->lr=0x801DFEACu; f_8019CD1C(c); // 801DFEA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DFEAC
  if (crb(c,2)) { goto L_801DFEF4; } // 801DFEB0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFEB4
  c->lr=0x801DFEBCu; f_801D7B0C(c); // 801DFEB8
  c->r[4]=c->r[3]|c->r[3]; // 801DFEBC
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFEC0
  c->lr=0x801DFEC8u; f_801DA08C(c); // 801DFEC4
  cmps(c,0,(int32_t)c->r[3],0); // 801DFEC8
  if (crb(c,2)) { goto L_801DFEDC; } // 801DFECC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFED0
  c->lr=0x801DFED8u; f_801D73D4(c); // 801DFED4
  goto L_801DFF78; // 801DFED8
L_801DFEDC:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFEDC
  c->lr=0x801DFEE4u; f_801D7348(c); // 801DFEE0
  c->r[3]=c->r[30]|c->r[30]; // 801DFEE4
  c->r[4]=0u+0x0000001Fu; // 801DFEE8
  c->lr=0x801DFEF0u; f_8013114C(c); // 801DFEEC
  goto L_801DFF78; // 801DFEF0
L_801DFEF4:;
  c->r[3]=0u+0x00000003u; // 801DFEF4
  c->lr=0x801DFEFCu; f_8019CD1C(c); // 801DFEF8
  cmps(c,0,(int32_t)c->r[3],0); // 801DFEFC
  if (crb(c,2)) { goto L_801DFF0C; } // 801DFF00
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFF04
  c->lr=0x801DFF0Cu; f_801D7AB4(c); // 801DFF08
L_801DFF0C:;
  c->r[3]=0u+0x00000004u; // 801DFF0C
  c->lr=0x801DFF14u; f_8019CD1C(c); // 801DFF10
  cmps(c,0,(int32_t)c->r[3],0); // 801DFF14
  if (crb(c,2)) { goto L_801DFF24; } // 801DFF18
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFF1C
  c->lr=0x801DFF24u; f_801D7A68(c); // 801DFF20
L_801DFF24:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFF24
  c->lr=0x801DFF2Cu; f_801DA07C(c); // 801DFF28
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DFF2C
  c->r[0]=cntlz(c->r[0]); // 801DFF30
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DFF34
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFF38
  c->lr=0x801DFF40u; f_801D9D1C(c); // 801DFF3C
  cmps(c,0,(int32_t)c->r[3],0); // 801DFF40
  if (crb(c,2)) { goto L_801DFF58; } // 801DFF44
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFF48
  c->r[4]=c->r[31]|c->r[31]; // 801DFF4C
  c->lr=0x801DFF54u; f_801D96F4(c); // 801DFF50
  goto L_801DFF64; // 801DFF54
L_801DFF58:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFF58
  c->r[4]=c->r[31]|c->r[31]; // 801DFF5C
  c->lr=0x801DFF64u; f_801D969C(c); // 801DFF60
L_801DFF64:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801DFF64
  c->lr=0x801DFF6Cu; f_801D7B0C(c); // 801DFF68
  c->r[4]=c->r[3]|c->r[3]; // 801DFF6C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801DFF70
  c->lr=0x801DFF78u; f_801DA0D8(c); // 801DFF74
L_801DFF78:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFF78
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFF7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFF80
  c->lr=c->r[0]; // 801DFF84
  c->r[1]=c->r[1]+0x00000010u; // 801DFF88
  return; // 801DFF8C
}

// fn_801DFF90
void f_801DFF90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFF90
  c->r[0]=c->lr; // 801DFF94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFF98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFF9C
  c->r[31]=c->r[3]|c->r[3]; // 801DFFA0
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801DFFA4
  c->lr=0x801DFFACu; f_801D7B0C(c); // 801DFFA8
  c->r[4]=c->r[3]|c->r[3]; // 801DFFAC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFFB0
  c->lr=0x801DFFB8u; f_801DA094(c); // 801DFFB4
  c->r[3]=c->r[31]|c->r[31]; // 801DFFB8
  c->r[4]=0u+0x00000020u; // 801DFFBC
  c->lr=0x801DFFC4u; f_8013114C(c); // 801DFFC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFFC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFFC8
  c->lr=c->r[0]; // 801DFFCC
  c->r[1]=c->r[1]+0x00000010u; // 801DFFD0
  return; // 801DFFD4
}

// fn_801DFFD8
void f_801DFFD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFFD8
  c->r[0]=c->lr; // 801DFFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFFE4
  c->r[31]=c->r[3]|c->r[3]; // 801DFFE8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801DFFEC
  c->lr=0x801DFFF4u; f_801D9744(c); // 801DFFF0
  cmps(c,0,(int32_t)c->r[3],0); // 801DFFF4
  if (crb(c,2)) { goto L_801E0014; } // 801DFFF8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801DFFFC
  c->r[4]=0u+0x00000000u; // 801E0000
  c->lr=0x801E0008u; f_801D8B90(c); // 801E0004
  c->r[3]=c->r[31]|c->r[31]; // 801E0008
  c->r[4]=0u+0x00000021u; // 801E000C
  c->lr=0x801E0014u; f_8013114C(c); // 801E0010
L_801E0014:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0014
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0018
  c->lr=c->r[0]; // 801E001C
  c->r[1]=c->r[1]+0x00000010u; // 801E0020
  return; // 801E0024
}

// fn_801E0028
void f_801E0028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0028
  c->r[0]=c->lr; // 801E002C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0034
  c->r[31]=c->r[3]|c->r[3]; // 801E0038
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801E003C
  c->r[4]=0u+0x00000000u; // 801E0040
  c->lr=0x801E0048u; f_801D8B90(c); // 801E0044
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0048
  c->lr=0x801E0050u; f_801D7314(c); // 801E004C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0050
  c->lr=0x801E0058u; f_801D70B8(c); // 801E0054
  cmps(c,0,(int32_t)c->r[3],0); // 801E0058
  if (crb(c,2)) { goto L_801E006C; } // 801E005C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E0060
  c->lr=0x801E0068u; f_801D959C(c); // 801E0064
  goto L_801E00BC; // 801E0068
L_801E006C:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E006C
  c->lr=0x801E0074u; f_801D9D1C(c); // 801E0070
  cmps(c,0,(int32_t)c->r[3],0); // 801E0074
  if (crb(c,2)) { goto L_801E0088; } // 801E0078
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E007C
  c->lr=0x801E0084u; f_801D9660(c); // 801E0080
  goto L_801E00BC; // 801E0084
L_801E0088:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0088
  c->lr=0x801E0090u; f_801D7B0C(c); // 801E008C
  cmps(c,0,(int32_t)c->r[3],1); // 801E0090
  if (!crb(c,2)) { goto L_801E00A4; } // 801E0094
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E0098
  c->lr=0x801E00A0u; f_801D9624(c); // 801E009C
  goto L_801E00BC; // 801E00A0
L_801E00A4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E00A4
  c->lr=0x801E00ACu; f_801D7B0C(c); // 801E00A8
  cmps(c,0,(int32_t)c->r[3],0); // 801E00AC
  if (!crb(c,2)) { goto L_801E00BC; } // 801E00B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E00B4
  c->lr=0x801E00BCu; f_801D95E0(c); // 801E00B8
L_801E00BC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E00BC
  c->r[4]=0u+0x00000022u; // 801E00C0
  c->lr=0x801E00C8u; f_8013114C(c); // 801E00C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E00C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E00CC
  c->lr=c->r[0]; // 801E00D0
  c->r[1]=c->r[1]+0x00000010u; // 801E00D4
  return; // 801E00D8
}

// fn_801E00DC
void f_801E00DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E00DC
  c->r[0]=c->lr; // 801E00E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E00E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E00E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E00EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E00F0
  c->r[29]=c->r[3]|c->r[3]; // 801E00F4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801E00F8
  c->lr=0x801E0100u; f_801D9744(c); // 801E00FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E0100
  if (crb(c,2)) { goto L_801E027C; } // 801E0104
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E0108
  c->lr=0x801E0110u; f_801D70B8(c); // 801E010C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0110
  if (crb(c,2)) { goto L_801E0134; } // 801E0114
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0118
  c->r[4]=0u+0x00000000u; // 801E011C
  c->lr=0x801E0124u; f_801D8B2C(c); // 801E0120
  c->r[3]=c->r[29]|c->r[29]; // 801E0124
  c->r[4]=R32(c->r[29]+0x000000ECu); // 801E0128
  c->lr=0x801E0130u; f_8013114C(c); // 801E012C
  goto L_801E027C; // 801E0130
L_801E0134:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0134
  c->lr=0x801E013Cu; f_801DA07C(c); // 801E0138
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E013C
  c->r[0]=cntlz(c->r[0]); // 801E0140
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E0144
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E0148
  c->lr=0x801E0150u; f_801D7B0C(c); // 801E014C
  cmps(c,0,(int32_t)c->r[3],1); // 801E0150
  if (crb(c,2)) { goto L_801E0264; } // 801E0154
  if (!crb(c,0)) { goto L_801E027C; } // 801E0158
  cmps(c,0,(int32_t)c->r[3],0); // 801E015C
  if (!crb(c,0)) { goto L_801E0168; } // 801E0160
  goto L_801E027C; // 801E0164
L_801E0168:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0168
  c->lr=0x801E0170u; f_801D9D8C(c); // 801E016C
  cmps(c,0,(int32_t)c->r[3],1); // 801E0170
  if (crb(c,0)) { goto L_801E0190; } // 801E0174
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0178
  c->lr=0x801E0180u; f_801D9D8C(c); // 801E017C
  c->r[4]=c->r[3]|c->r[3]; // 801E0180
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E0184
  c->lr=0x801E018Cu; f_801D7E80(c); // 801E0188
  goto L_801E019C; // 801E018C
L_801E0190:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E0190
  c->r[4]=0u+0x00000001u; // 801E0194
  c->lr=0x801E019Cu; f_801D7E80(c); // 801E0198
L_801E019C:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E019C
  c->lr=0x801E01A4u; f_801D9D1C(c); // 801E01A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E01A4
  if (!crb(c,2)) { goto L_801E01C4; } // 801E01A8
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E01AC
  c->lr=0x801E01B4u; f_801D9D24(c); // 801E01B0
  c->r[4]=c->r[3]|c->r[3]; // 801E01B4
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E01B8
  c->lr=0x801E01C0u; f_801D7E68(c); // 801E01BC
  goto L_801E01D0; // 801E01C0
L_801E01C4:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E01C4
  c->r[4]=0u+0xFFFFFFFFu; // 801E01C8
  c->lr=0x801E01D0u; f_801D7E68(c); // 801E01CC
L_801E01D0:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E01D0
  c->lr=0x801E01D8u; f_801DA07C(c); // 801E01D4
  c->r[4]=c->r[3]|c->r[3]; // 801E01D8
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E01DC
  c->lr=0x801E01E4u; f_801D7DB4(c); // 801E01E0
  c->r[30]=c->r[3]|c->r[3]; // 801E01E4
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E01E8
  c->r[4]=c->r[30]|c->r[30]; // 801E01EC
  c->lr=0x801E01F4u; f_801D7FD4(c); // 801E01F0
  cmps(c,0,(int32_t)c->r[30],5); // 801E01F4
  if (!crb(c,2)) { goto L_801E022C; } // 801E01F8
  c->r[3]=R32(c->r[29]+0x000000E8u); // 801E01FC
  c->lr=0x801E0204u; f_801D743C(c); // 801E0200
  c->r[3]=c->r[29]|c->r[29]; // 801E0204
  c->r[4]=c->r[31]|c->r[31]; // 801E0208
  c->lr=0x801E0210u; f_801DE90C(c); // 801E020C
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0210
  c->r[4]=0u+0x00000000u; // 801E0214
  c->lr=0x801E021Cu; f_801D8B2C(c); // 801E0218
  c->r[3]=c->r[29]|c->r[29]; // 801E021C
  c->r[4]=0u+0x00000007u; // 801E0220
  c->lr=0x801E0228u; f_8013114C(c); // 801E0224
  goto L_801E027C; // 801E0228
L_801E022C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E022C
  if (crb(c,2)) { goto L_801E0240; } // 801E0230
  c->r[0]=0u+0x00000010u; // 801E0234
  W32(c->r[29]+0x000000ECu,c->r[0]); // 801E0238
  goto L_801E0248; // 801E023C
L_801E0240:;
  c->r[0]=0u+0x00000016u; // 801E0240
  W32(c->r[29]+0x000000ECu,c->r[0]); // 801E0244
L_801E0248:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0248
  c->r[4]=0u+0x00000000u; // 801E024C
  c->lr=0x801E0254u; f_801D8B74(c); // 801E0250
  c->r[3]=c->r[29]|c->r[29]; // 801E0254
  c->r[4]=0u+0x00000028u; // 801E0258
  c->lr=0x801E0260u; f_8013114C(c); // 801E025C
  goto L_801E027C; // 801E0260
L_801E0264:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801E0264
  c->r[4]=0u+0x00000000u; // 801E0268
  c->lr=0x801E0270u; f_801D8B74(c); // 801E026C
  c->r[3]=c->r[29]|c->r[29]; // 801E0270
  c->r[4]=0u+0x00000023u; // 801E0274
  c->lr=0x801E027Cu; f_8013114C(c); // 801E0278
L_801E027C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E027C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0280
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0284
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0288
  c->lr=c->r[0]; // 801E028C
  c->r[1]=c->r[1]+0x00000020u; // 801E0290
  return; // 801E0294
}

// fn_801E0298
void f_801E0298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0298
  c->r[0]=c->lr; // 801E029C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E02A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E02A4
  c->r[31]=c->r[3]|c->r[3]; // 801E02A8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801E02AC
  c->lr=0x801E02B4u; f_801D9878(c); // 801E02B0
  c->r[4]=c->r[3]|c->r[3]; // 801E02B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E02B8
  c->lr=0x801E02C0u; f_801D7BC8(c); // 801E02BC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E02C0
  c->lr=0x801E02C8u; f_801D9748(c); // 801E02C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E02C8
  c->lr=0x801E02D0u; f_801D7BBC(c); // 801E02CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E02D0
  c->lr=0x801E02D8u; f_801D7BB4(c); // 801E02D4
  c->r[4]=c->r[3]|c->r[3]; // 801E02D8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E02DC
  c->lr=0x801E02E4u; f_801D8DD8(c); // 801E02E0
  c->r[3]=c->r[31]|c->r[31]; // 801E02E4
  c->r[4]=0u+0x00000024u; // 801E02E8
  c->lr=0x801E02F0u; f_8013114C(c); // 801E02EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E02F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E02F4
  c->lr=c->r[0]; // 801E02F8
  c->r[1]=c->r[1]+0x00000010u; // 801E02FC
  return; // 801E0300
}

// fn_801E0304
void f_801E0304(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0304
  c->r[0]=c->lr; // 801E0308
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E030C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0310
  c->r[31]=c->r[3]|c->r[3]; // 801E0314
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801E0318
  c->lr=0x801E0320u; f_801D9874(c); // 801E031C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0320
  if (crb(c,2)) { goto L_801E0348; } // 801E0324
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0328
  c->lr=0x801E0330u; f_801D7BB4(c); // 801E032C
  c->r[4]=c->r[3]|c->r[3]; // 801E0330
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E0334
  c->lr=0x801E033Cu; f_801D97C8(c); // 801E0338
  c->r[3]=c->r[31]|c->r[31]; // 801E033C
  c->r[4]=0u+0x00000025u; // 801E0340
  c->lr=0x801E0348u; f_8013114C(c); // 801E0344
L_801E0348:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0348
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E034C
  c->lr=c->r[0]; // 801E0350
  c->r[1]=c->r[1]+0x00000010u; // 801E0354
  return; // 801E0358
}

// fn_801E035C
void f_801E035C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E035C
  c->r[0]=c->lr; // 801E0360
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0368
  c->r[31]=c->r[3]|c->r[3]; // 801E036C
  c->r[3]=0u+0x00000001u; // 801E0370
  c->lr=0x801E0378u; f_8019CD1C(c); // 801E0374
  cmps(c,0,(int32_t)c->r[3],0); // 801E0378
  if (crb(c,2)) { goto L_801E0398; } // 801E037C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0380
  c->lr=0x801E0388u; f_801D70A8(c); // 801E0384
  c->r[3]=c->r[31]|c->r[31]; // 801E0388
  c->r[4]=0u+0x00000026u; // 801E038C
  c->lr=0x801E0394u; f_8013114C(c); // 801E0390
  goto L_801E03DC; // 801E0394
L_801E0398:;
  c->r[3]=0u+0x00000006u; // 801E0398
  c->lr=0x801E03A0u; f_8019CD1C(c); // 801E039C
  cmps(c,0,(int32_t)c->r[3],0); // 801E03A0
  if (crb(c,2)) { goto L_801E03B0; } // 801E03A4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E03A8
  c->lr=0x801E03B0u; f_801D7B68(c); // 801E03AC
L_801E03B0:;
  c->r[3]=0u+0x00000005u; // 801E03B0
  c->lr=0x801E03B8u; f_8019CD1C(c); // 801E03B4
  cmps(c,0,(int32_t)c->r[3],0); // 801E03B8
  if (crb(c,2)) { goto L_801E03C8; } // 801E03BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E03C0
  c->lr=0x801E03C8u; f_801D7B1C(c); // 801E03C4
L_801E03C8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E03C8
  c->lr=0x801E03D0u; f_801D7BB4(c); // 801E03CC
  c->r[4]=c->r[3]|c->r[3]; // 801E03D0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E03D4
  c->lr=0x801E03DCu; f_801D97C8(c); // 801E03D8
L_801E03DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E03DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E03E0
  c->lr=c->r[0]; // 801E03E4
  c->r[1]=c->r[1]+0x00000010u; // 801E03E8
  return; // 801E03EC
}

// fn_801E03F0
void f_801E03F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E03F0
  c->r[0]=c->lr; // 801E03F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E03F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E03FC
  c->r[31]=c->r[3]|c->r[3]; // 801E0400
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801E0404
  c->lr=0x801E040Cu; f_801D978C(c); // 801E0408
  c->r[3]=c->r[31]|c->r[31]; // 801E040C
  c->r[4]=0u+0x00000027u; // 801E0410
  c->lr=0x801E0418u; f_8013114C(c); // 801E0414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0418
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E041C
  c->lr=c->r[0]; // 801E0420
  c->r[1]=c->r[1]+0x00000010u; // 801E0424
  return; // 801E0428
}

// fn_801E042C
void f_801E042C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E042C
  c->r[0]=c->lr; // 801E0430
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0438
  c->r[31]=c->r[3]|c->r[3]; // 801E043C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801E0440
  c->lr=0x801E0448u; f_801D9874(c); // 801E0444
  cmps(c,0,(int32_t)c->r[3],0); // 801E0448
  if (crb(c,2)) { goto L_801E0470; } // 801E044C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E0450
  c->r[4]=0u+0x00000000u; // 801E0454
  c->lr=0x801E045Cu; f_801D8B7C(c); // 801E0458
  c->r[0]=0u+0x00000001u; // 801E045C
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801E0460
  c->r[3]=c->r[31]|c->r[31]; // 801E0464
  c->r[4]=0u+0x0000001Cu; // 801E0468
  c->lr=0x801E0470u; f_8013114C(c); // 801E046C
L_801E0470:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0470
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0474
  c->lr=c->r[0]; // 801E0478
  c->r[1]=c->r[1]+0x00000010u; // 801E047C
  return; // 801E0480
}

// fn_801E0484
void f_801E0484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0484
  c->r[0]=c->lr; // 801E0488
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E048C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0490
  c->r[31]=c->r[3]|c->r[3]; // 801E0494
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E0498
  c->r[4]=0u+0x00000002u; // 801E049C
  c->lr=0x801E04A4u; f_801D804C(c); // 801E04A0
  c->lr=0x801E04A8u; f_80156F98(c); // 801E04A4
  c->r[3]=0u+0x00000000u; // 801E04A8
  c->lr=0x801E04B0u; f_80157074(c); // 801E04AC
  c->r[3]=c->r[31]|c->r[31]; // 801E04B0
  c->r[4]=0u+0x00000029u; // 801E04B4
  c->lr=0x801E04BCu; f_8013114C(c); // 801E04B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E04BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E04C0
  c->lr=c->r[0]; // 801E04C4
  c->r[1]=c->r[1]+0x00000010u; // 801E04C8
  return; // 801E04CC
}

// fn_801E04D0
void f_801E04D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E04D0
  c->r[0]=c->lr; // 801E04D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E04D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E04DC
  c->r[31]=c->r[3]|c->r[3]; // 801E04E0
  c->lr=0x801E04E8u; f_80156FF0(c); // 801E04E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E04E8
  if (crb(c,2)) { goto L_801E0520; } // 801E04EC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E04F0
  c->lr=0x801E04F8u; f_801D8044(c); // 801E04F4
  c->r[4]=c->r[3]|c->r[3]; // 801E04F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E04FC
  c->lr=0x801E0504u; f_801D8080(c); // 801E0500
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0504
  c->lr=0x801E050Cu; f_801D8044(c); // 801E0508
  c->lr=0x801E0510u; f_80156434(c); // 801E050C
  c->lr=0x801E0514u; f_80156F40(c); // 801E0510
  c->r[3]=c->r[31]|c->r[31]; // 801E0514
  c->r[4]=0u+0x0000002Au; // 801E0518
  c->lr=0x801E0520u; f_8013114C(c); // 801E051C
L_801E0520:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0520
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0524
  c->lr=c->r[0]; // 801E0528
  c->r[1]=c->r[1]+0x00000010u; // 801E052C
  return; // 801E0530
}

// fn_801E0534
void f_801E0534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0534
  c->r[0]=c->lr; // 801E0538
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E053C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0540
  c->r[31]=c->r[3]|c->r[3]; // 801E0544
  c->lr=0x801E054Cu; f_80157048(c); // 801E0548
  cmps(c,0,(int32_t)c->r[3],0); // 801E054C
  if (crb(c,2)) { goto L_801E0568; } // 801E0550
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0554
  c->lr=0x801E055Cu; f_801D80C0(c); // 801E0558
  c->r[3]=c->r[31]|c->r[31]; // 801E055C
  c->r[4]=0u+0x0000002Bu; // 801E0560
  c->lr=0x801E0568u; f_8013114C(c); // 801E0564
L_801E0568:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0568
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E056C
  c->lr=c->r[0]; // 801E0570
  c->r[1]=c->r[1]+0x00000010u; // 801E0574
  return; // 801E0578
}

// fn_801E057C
void f_801E057C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E057C
  c->r[0]=c->lr; // 801E0580
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0584
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0588
  c->r[31]=c->r[3]|c->r[3]; // 801E058C
  c->lr=0x801E0594u; f_80156FC4(c); // 801E0590
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801E0594
  cmps(c,0,(int32_t)c->r[0],16); // 801E0598
  if (crb(c,2)) { goto L_801E05D0; } // 801E059C
  if (!crb(c,0)) { goto L_801E05B0; } // 801E05A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E05A4
  if (crb(c,2)) { goto L_801E05BC; } // 801E05A8
  goto L_801E05E0; // 801E05AC
L_801E05B0:;
  cmps(c,0,(int32_t)c->r[0],22); // 801E05B0
  if (crb(c,2)) { goto L_801E05D0; } // 801E05B4
  goto L_801E05E0; // 801E05B8
L_801E05BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E05BC
  c->lr=0x801E05C4u; f_801D7314(c); // 801E05C0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E05C4
  c->lr=0x801E05CCu; f_801D9020(c); // 801E05C8
  goto L_801E05E0; // 801E05CC
L_801E05D0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E05D0
  c->lr=0x801E05D8u; f_801D7314(c); // 801E05D4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E05D8
  c->lr=0x801E05E0u; f_801D9024(c); // 801E05DC
L_801E05E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E05E0
  c->r[4]=0u+0x0000002Cu; // 801E05E4
  c->lr=0x801E05ECu; f_8013114C(c); // 801E05E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E05EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E05F0
  c->lr=c->r[0]; // 801E05F4
  c->r[1]=c->r[1]+0x00000010u; // 801E05F8
  return; // 801E05FC
}

// fn_801E0600
void f_801E0600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0600
  c->r[0]=c->lr; // 801E0604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E060C
  c->r[31]=c->r[3]|c->r[3]; // 801E0610
  c->lr=0x801E0618u; f_80156FF0(c); // 801E0614
  cmps(c,0,(int32_t)c->r[3],0); // 801E0618
  if (crb(c,2)) { goto L_801E0658; } // 801E061C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0620
  c->r[4]=0u+0x00000000u; // 801E0624
  c->lr=0x801E062Cu; f_801D804C(c); // 801E0628
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801E062C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0630
  if (!crb(c,2)) { goto L_801E064C; } // 801E0634
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801E0638
  c->r[4]=0u+0x00000000u; // 801E063C
  c->lr=0x801E0644u; f_801D8B98(c); // 801E0640
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E0644
  c->lr=0x801E064Cu; f_801D7098(c); // 801E0648
L_801E064C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E064C
  c->r[4]=R32(c->r[31]+0x000000ECu); // 801E0650
  c->lr=0x801E0658u; f_8013114C(c); // 801E0654
L_801E0658:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0658
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E065C
  c->lr=c->r[0]; // 801E0660
  c->r[1]=c->r[1]+0x00000010u; // 801E0664
  return; // 801E0668
}

// fn_801E066C
void f_801E066C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E066C
  c->r[0]=c->lr; // 801E0670
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0678
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E067C
  c->r[30]=c->r[3]|c->r[3]; // 801E0680
  c->r[3]=0u+0x00000007u; // 801E0684
  c->lr=0x801E068Cu; f_801F1364(c); // 801E0688
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801E068C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0690
  if (crb(c,2)) { goto L_801E06C4; } // 801E0694
  c->lr=0x801E069Cu; f_80056B5C(c); // 801E0698
  c->r[31]=c->r[3]|c->r[3]; // 801E069C
  c->lr=0x801E06A4u; f_801F1340(c); // 801E06A0
  c->lr=0x801E06A8u; f_80056B54(c); // 801E06A4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801E06A8
  c->r[4]=0u+0x00000001u; // 801E06AC
  c->lr=0x801E06B4u; f_801D6FDC(c); // 801E06B0
  c->r[3]=c->r[31]|c->r[31]; // 801E06B4
  c->lr=0x801E06BCu; f_80056B54(c); // 801E06B8
  c->r[0]=0u+0x00000000u; // 801E06BC
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801E06C0
L_801E06C4:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801E06C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E06C8
  if (crb(c,2)) { goto L_801E0714; } // 801E06CC
  c->lr=0x801E06D4u; f_801D8580(c); // 801E06D0
  c->lr=0x801E06D8u; f_80056B5C(c); // 801E06D4
  c->r[31]=c->r[3]|c->r[3]; // 801E06D8
  c->lr=0x801E06E0u; f_801F1340(c); // 801E06DC
  c->lr=0x801E06E4u; f_80056B54(c); // 801E06E0
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801E06E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E06E8
  if (crb(c,2)) { goto L_801E0704; } // 801E06EC
  c->r[4]=0u+0x00000001u; // 801E06F0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E06F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E06F8
  c->ctr=c->r[12]; // 801E06FC
  if (true) { c->lr=0x801E0704u; dispatch(c,c->ctr); } // 801E0700
L_801E0704:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0704
  c->lr=0x801E070Cu; f_80056B54(c); // 801E0708
  c->r[0]=0u+0x00000000u; // 801E070C
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801E0710
L_801E0714:;
  c->r[3]=c->r[30]|c->r[30]; // 801E0714
  c->r[4]=0u+0x0000002Eu; // 801E0718
  c->lr=0x801E0720u; f_8013114C(c); // 801E071C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0720
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0724
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0728
  c->lr=c->r[0]; // 801E072C
  c->r[1]=c->r[1]+0x00000010u; // 801E0730
  return; // 801E0734
}

// fn_801E0738
void f_801E0738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0738
  c->r[0]=c->lr; // 801E073C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0744
  c->r[31]=c->r[3]|c->r[3]; // 801E0748
  c->r[4]=0u+0x00000001u; // 801E074C
  c->lr=0x801E0754u; f_80131168(c); // 801E0750
  c->r[3]=c->r[31]|c->r[31]; // 801E0754
  c->r[4]=0u+0x00000001u; // 801E0758
  c->lr=0x801E0760u; f_80131184(c); // 801E075C
  c->r[3]=c->r[31]|c->r[31]; // 801E0760
  c->r[4]=0u+0x00000000u; // 801E0764
  c->lr=0x801E076Cu; f_8013114C(c); // 801E0768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E076C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0770
  c->lr=c->r[0]; // 801E0774
  c->r[1]=c->r[1]+0x00000010u; // 801E0778
  return; // 801E077C
}

// fn_801E0780
void f_801E0780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0780
  c->r[0]=c->lr; // 801E0784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E078C
  c->r[31]=c->r[3]|c->r[3]; // 801E0790
  c->r[4]=0u+0x00000000u; // 801E0794
  c->lr=0x801E079Cu; f_801311BC(c); // 801E0798
  c->r[3]=c->r[31]|c->r[31]; // 801E079C
  c->r[4]=0u+0x00000001u; // 801E07A0
  c->lr=0x801E07A8u; f_8013114C(c); // 801E07A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E07A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E07AC
  c->lr=c->r[0]; // 801E07B0
  c->r[1]=c->r[1]+0x00000010u; // 801E07B4
  return; // 801E07B8
}

// fn_801E07BC
void f_801E07BC(Ctx* __restrict c) {
  c->r[4]=0u+0x0000002Du; // 801E07BC
  f_8013114C(c); return; // 801E07C0
}

// fn_801E07C4
void f_801E07C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E07C4
  c->r[0]=c->lr; // 801E07C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E07CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E07D0
  c->r[31]=c->r[3]|c->r[3]; // 801E07D4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E07D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E07DC
  if (crb(c,2)) { goto L_801E07E8; } // 801E07E0
  c->lr=0x801E07E8u; f_801D80F0(c); // 801E07E4
L_801E07E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E07E8
  c->r[4]=0u+0x00000002u; // 801E07EC
  c->lr=0x801E07F4u; f_8013114C(c); // 801E07F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E07F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E07F8
  c->lr=c->r[0]; // 801E07FC
  c->r[1]=c->r[1]+0x00000010u; // 801E0800
  return; // 801E0804
}

// fn_801E0808
void f_801E0808(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E0808
  cmps(c,0,(int32_t)c->r[3],0); // 801E080C
  if (crb(c,2)) { goto L_801E0818; } // 801E0810
  f_801D70A0(c); return; // 801E0814
L_801E0818:;
  c->r[3]=0u+0x00000001u; // 801E0818
  return; // 801E081C
}

// fn_801E0820
void f_801E0820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0820
  c->r[0]=c->lr; // 801E0824
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0828
  c->lr=0x801E0830u; f_8011C12C(c); // 801E082C
  c->r[4]=0u+0x00000007u; // 801E0830
  c->lr=0x801E0838u; f_8011CFF4(c); // 801E0834
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E0838
  c->r[12]=R32(c->r[12]+0x00000048u); // 801E083C
  c->ctr=c->r[12]; // 801E0840
  if (true) { c->lr=0x801E0848u; dispatch(c,c->ctr); } // 801E0844
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0848
  c->lr=c->r[0]; // 801E084C
  c->r[1]=c->r[1]+0x00000010u; // 801E0850
  return; // 801E0854
}

// fn_801E0858
void f_801E0858(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0858
  c->r[0]=c->lr; // 801E085C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0860
  c->lr=0x801E0868u; f_8011C12C(c); // 801E0864
  c->r[4]=0u+0x00000007u; // 801E0868
  c->lr=0x801E0870u; f_8011CFF4(c); // 801E086C
  c->lr=0x801E0874u; f_801E0808(c); // 801E0870
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0874
  c->lr=c->r[0]; // 801E0878
  c->r[1]=c->r[1]+0x00000010u; // 801E087C
  return; // 801E0880
}

// fn_801E0884
void f_801E0884(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801E0884
  c->r[5]=c->r[3]+0x000034D8u; // 801E0888
  c->r[3]=0u+0x80440000u; // 801E088C
  c->r[4]=c->r[3]+0xFFFFD898u; // 801E0890
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E0894
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E0898
  W32(c->r[5]+0x00000234u,c->r[3]); // 801E089C
  W32(c->r[5]+0x00000238u,c->r[0]); // 801E08A0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E08A4
  W32(c->r[5]+0x0000023Cu,c->r[0]); // 801E08A8
  return; // 801E08AC
}

// fn_801E08B0
void f_801E08B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E08B0
  c->r[0]=c->lr; // 801E08B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E08B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E08BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E08C0
  c->r[30]=c->r[3]|c->r[3]; // 801E08C4
  c->r[31]=c->r[4]|c->r[4]; // 801E08C8
  cmps(c,0,(int32_t)c->r[3],0); // 801E08CC
  if (crb(c,2)) { goto L_801E08F0; } // 801E08D0
  c->r[4]=0u+0x00000000u; // 801E08D4
  c->lr=0x801E08DCu; f_80130F88(c); // 801E08D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E08DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E08E0
  if (!crb(c,1)) { goto L_801E08F0; } // 801E08E4
  c->r[3]=c->r[30]|c->r[30]; // 801E08E8
  c->lr=0x801E08F0u; f_80047B20(c); // 801E08EC
L_801E08F0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E08F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E08F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E08F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E08FC
  c->lr=c->r[0]; // 801E0900
  c->r[1]=c->r[1]+0x00000010u; // 801E0904
  return; // 801E0908
}

// fn_801E090C
void f_801E090C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E090C
  c->r[0]=c->lr; // 801E0910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0914
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0918
  c->r[31]=c->r[3]|c->r[3]; // 801E091C
  c->r[3]=c->r[4]|c->r[4]; // 801E0920
  c->lr=0x801E0928u; f_80073580(c); // 801E0924
  c->r[4]=c->r[3]|c->r[3]; // 801E0928
  c->r[3]=c->r[31]|c->r[31]; // 801E092C
  c->lr=0x801E0934u; f_801E1330(c); // 801E0930
  c->r[3]=0u+0x00000000u; // 801E0934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0938
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E093C
  c->lr=c->r[0]; // 801E0940
  c->r[1]=c->r[1]+0x00000010u; // 801E0944
  return; // 801E0948
}

// fn_801E094C
void f_801E094C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E094C
  c->r[0]=c->lr; // 801E0950
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0954
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0958
  c->r[31]=c->r[3]|c->r[3]; // 801E095C
  c->r[3]=c->r[4]|c->r[4]; // 801E0960
  c->lr=0x801E0968u; f_80073580(c); // 801E0964
  c->r[4]=c->r[3]|c->r[3]; // 801E0968
  c->r[3]=c->r[31]|c->r[31]; // 801E096C
  c->lr=0x801E0974u; f_801E1000(c); // 801E0970
  c->r[3]=0u+0x00000000u; // 801E0974
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0978
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E097C
  c->lr=c->r[0]; // 801E0980
  c->r[1]=c->r[1]+0x00000010u; // 801E0984
  return; // 801E0988
}

// fn_801E098C
void f_801E098C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E098C
  c->r[0]=c->lr; // 801E0990
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0994
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0998
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E099C
  c->r[0]=R32(c->r[13]+0xFFFFBB08u); // 801E09A0
  cmps(c,0,(int32_t)c->r[0],0); // 801E09A4
  if (!crb(c,2)) { goto L_801E09E0; } // 801E09A8
  c->lr=0x801E09B0u; f_80056B5C(c); // 801E09AC
  c->r[30]=c->r[3]|c->r[3]; // 801E09B0
  c->lr=0x801E09B8u; f_8005DEE8(c); // 801E09B4
  c->lr=0x801E09BCu; f_80056B54(c); // 801E09B8
  c->r[3]=0u+0x00002F08u; // 801E09BC
  c->lr=0x801E09C4u; f_80047B64(c); // 801E09C0
  c->r[31]=c->r[3]|c->r[3]; // 801E09C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E09C8
  if (crb(c,2)) { goto L_801E09D4; } // 801E09CC
  c->lr=0x801E09D4u; f_801E09FC(c); // 801E09D0
L_801E09D4:;
  W32(c->r[13]+0xFFFFBB08u,c->r[31]); // 801E09D4
  c->r[3]=c->r[30]|c->r[30]; // 801E09D8
  c->lr=0x801E09E0u; f_80056B54(c); // 801E09DC
L_801E09E0:;
  c->r[3]=R32(c->r[13]+0xFFFFBB08u); // 801E09E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E09E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E09E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E09EC
  c->lr=c->r[0]; // 801E09F0
  c->r[1]=c->r[1]+0x00000010u; // 801E09F4
  return; // 801E09F8
}

// fn_801E09FC
void f_801E09FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E09FC
  c->r[0]=c->lr; // 801E0A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0A08
  c->r[31]=c->r[3]|c->r[3]; // 801E0A0C
  c->r[0]=0u+0x00000000u; // 801E0A10
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E0A14
  c->lr=0x801E0A1Cu; f_801E0BD4(c); // 801E0A18
  c->r[3]=c->r[31]|c->r[31]; // 801E0A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0A20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0A24
  c->lr=c->r[0]; // 801E0A28
  c->r[1]=c->r[1]+0x00000010u; // 801E0A2C
  return; // 801E0A30
}

// fn_801E0A34
void f_801E0A34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0A34
  c->r[0]=c->lr; // 801E0A38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0A3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0A40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0A44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0A48
  c->r[29]=c->r[3]|c->r[3]; // 801E0A4C
  c->lr=0x801E0A54u; f_801E0BD4(c); // 801E0A50
  c->lr=0x801E0A58u; f_80056B5C(c); // 801E0A54
  c->r[30]=c->r[3]|c->r[3]; // 801E0A58
  c->lr=0x801E0A60u; f_8005DEE8(c); // 801E0A5C
  c->lr=0x801E0A64u; f_80056B54(c); // 801E0A60
  c->r[3]=0u+0x00000038u; // 801E0A64
  c->lr=0x801E0A6Cu; f_80047B64(c); // 801E0A68
  c->r[31]=c->r[3]|c->r[3]; // 801E0A6C
  cmps(c,0,(int32_t)c->r[3],0); // 801E0A70
  if (crb(c,2)) { goto L_801E0A7C; } // 801E0A74
  c->lr=0x801E0A7Cu; f_8008E550(c); // 801E0A78
L_801E0A7C:;
  W32(c->r[29]+0x00000000u,c->r[31]); // 801E0A7C
  c->r[3]=c->r[30]|c->r[30]; // 801E0A80
  c->lr=0x801E0A88u; f_80056B54(c); // 801E0A84
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E0A88
  c->r[4]=0u+0x00000004u; // 801E0A8C
  c->lr=0x801E0A94u; f_801797EC(c); // 801E0A90
  c->r[3]=c->r[29]|c->r[29]; // 801E0A94
  c->lr=0x801E0A9Cu; f_801E0B40(c); // 801E0A98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0A9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0AA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0AA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0AA8
  c->lr=c->r[0]; // 801E0AAC
  c->r[1]=c->r[1]+0x00000020u; // 801E0AB0
  return; // 801E0AB4
}

// fn_801E0AB8
void f_801E0AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0AB8
  c->r[0]=c->lr; // 801E0ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0AC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0AC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0AC8
  c->r[30]=c->r[3]|c->r[3]; // 801E0ACC
  c->lr=0x801E0AD4u; f_801E0C9C(c); // 801E0AD0
  c->r[3]=c->r[30]|c->r[30]; // 801E0AD4
  c->lr=0x801E0ADCu; f_801E13E0(c); // 801E0AD8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E0ADC
  cmps(c,0,(int32_t)c->r[0],0); // 801E0AE0
  if (crb(c,2)) { goto L_801E0B28; } // 801E0AE4
  c->lr=0x801E0AECu; f_80056B5C(c); // 801E0AE8
  c->r[31]=c->r[3]|c->r[3]; // 801E0AEC
  c->lr=0x801E0AF4u; f_8005DEE8(c); // 801E0AF0
  c->lr=0x801E0AF8u; f_80056B54(c); // 801E0AF4
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E0AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801E0AFC
  if (crb(c,2)) { goto L_801E0B18; } // 801E0B00
  c->r[4]=0u+0x00000001u; // 801E0B04
  c->r[12]=R32(c->r[3]+0x00000034u); // 801E0B08
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E0B0C
  c->ctr=c->r[12]; // 801E0B10
  if (true) { c->lr=0x801E0B18u; dispatch(c,c->ctr); } // 801E0B14
L_801E0B18:;
  c->r[3]=c->r[31]|c->r[31]; // 801E0B18
  c->lr=0x801E0B20u; f_80056B54(c); // 801E0B1C
  c->r[0]=0u+0x00000000u; // 801E0B20
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E0B24
L_801E0B28:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0B28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0B2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0B30
  c->lr=c->r[0]; // 801E0B34
  c->r[1]=c->r[1]+0x00000010u; // 801E0B38
  return; // 801E0B3C
}

// fn_801E0B40
void f_801E0B40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0B40
  c->r[0]=c->lr; // 801E0B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0B48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E0B4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E0B50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E0B54
  c->r[29]=c->r[3]|c->r[3]; // 801E0B58
  c->r[0]=0u+0x00000020u; // 801E0B5C
  W32(c->r[3]+0x00002F00u,c->r[0]); // 801E0B60
  c->r[30]=0u+0x00000000u; // 801E0B64
  c->r[31]=0u+0x000003E7u; // 801E0B68
L_801E0B6C:;
  c->r[3]=c->r[29]|c->r[29]; // 801E0B6C
  c->r[4]=c->r[30]|c->r[30]; // 801E0B70
  c->lr=0x801E0B78u; f_801E0E0C(c); // 801E0B74
  cmps(c,0,(int32_t)c->r[3],0); // 801E0B78
  if (crb(c,2)) { goto L_801E0B9C; } // 801E0B7C
  c->r[3]=R32(c->r[29]+0x00002F00u); // 801E0B80
  c->r[0]=R32(c->r[29]+0x00002F04u); // 801E0B84
  c->r[0]=c->r[3]+c->r[0]; // 801E0B88
  W32(c->r[29]+0x00002F00u,c->r[0]); // 801E0B8C
  cmps(c,0,(int32_t)c->r[0],999); // 801E0B90
  if (crb(c,0)) { goto L_801E0B9C; } // 801E0B94
  W32(c->r[29]+0x00002F00u,c->r[31]); // 801E0B98
L_801E0B9C:;
  c->r[30]=c->r[30]+0x00000001u; // 801E0B9C
  cmps(c,0,(int32_t)c->r[30],124); // 801E0BA0
  if (crb(c,0)) { IRQCHK(c); goto L_801E0B6C; } // 801E0BA4
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E0BA8
  c->r[4]=0u+0x00000000u; // 801E0BAC
  c->r[5]=R32(c->r[29]+0x00002F00u); // 801E0BB0
  c->lr=0x801E0BB8u; f_80179858(c); // 801E0BB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0BB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0BBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E0BC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0BC4
  c->lr=c->r[0]; // 801E0BC8
  c->r[1]=c->r[1]+0x00000020u; // 801E0BCC
  return; // 801E0BD0
}

// fn_801E0BD4
void f_801E0BD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0BD4
  c->r[0]=c->lr; // 801E0BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0BE0
  c->r[31]=c->r[3]|c->r[3]; // 801E0BE4
  c->r[3]=c->r[3]+0x00000FA4u; // 801E0BE8
  c->r[4]=0u+0x00000000u; // 801E0BEC
  c->r[5]=0u+0x00000010u; // 801E0BF0
  c->lr=0x801E0BF8u; f_800060B8(c); // 801E0BF4
  c->r[3]=c->r[31]+0x00000004u; // 801E0BF8
  c->r[4]=0u+0xFFFFFFFFu; // 801E0BFC
  c->r[5]=0u+0x00000F9Cu; // 801E0C00
  c->lr=0x801E0C08u; f_800060B8(c); // 801E0C04
  c->r[3]=c->r[31]+0x00000FB4u; // 801E0C08
  c->r[4]=0u+0xFFFFFFFFu; // 801E0C0C
  c->r[5]=0u+0x00000F9Cu; // 801E0C10
  c->lr=0x801E0C18u; f_800060B8(c); // 801E0C14
  c->r[3]=c->r[31]+0x00001F58u; // 801E0C18
  c->r[4]=0u+0xFFFFFFFFu; // 801E0C1C
  c->r[5]=0u+0x00000F9Cu; // 801E0C20
  c->lr=0x801E0C28u; f_800060B8(c); // 801E0C24
  c->r[0]=0u+0x00000000u; // 801E0C28
  W32(c->r[31]+0x00000FA0u,c->r[0]); // 801E0C2C
  W32(c->r[31]+0x00002EFCu,c->r[0]); // 801E0C30
  W32(c->r[31]+0x00001F50u,c->r[0]); // 801E0C34
  W32(c->r[31]+0x00001F54u,c->r[0]); // 801E0C38
  W32(c->r[31]+0x00002EF4u,c->r[0]); // 801E0C3C
  W32(c->r[31]+0x00002EF8u,c->r[0]); // 801E0C40
  c->r[0]=0u+0x00000020u; // 801E0C44
  W32(c->r[31]+0x00002F00u,c->r[0]); // 801E0C48
  c->r[0]=0u+0x00000010u; // 801E0C4C
  W32(c->r[31]+0x00002F04u,c->r[0]); // 801E0C50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0C54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0C58
  c->lr=c->r[0]; // 801E0C5C
  c->r[1]=c->r[1]+0x00000010u; // 801E0C60
  return; // 801E0C64
}

// fn_801E0C68
void f_801E0C68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0C68
  c->r[0]=c->lr; // 801E0C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0C70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0C74
  c->r[31]=c->r[4]|c->r[4]; // 801E0C78
  c->lr=0x801E0C80u; f_80074E68(c); // 801E0C7C
  c->r[4]=c->r[31]|c->r[31]; // 801E0C80
  c->lr=0x801E0C88u; f_8017A3C0(c); // 801E0C84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0C88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0C8C
  c->lr=c->r[0]; // 801E0C90
  c->r[1]=c->r[1]+0x00000010u; // 801E0C94
  return; // 801E0C98
}

// fn_801E0C9C
void f_801E0C9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0C9C
  c->r[0]=c->lr; // 801E0CA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E0CA4
  c->r[11]=c->r[1]+0x00000020u; // 801E0CA8
  c->lr=0x801E0CB0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E0CAC
  c->r[27]=c->r[3]|c->r[3]; // 801E0CB0
  c->r[28]=0u+0x00000000u; // 801E0CB4
  c->r[30]=0u+0xFFFFFFFFu; // 801E0CB8
  c->r[31]=0u+0x0000006Fu; // 801E0CBC
  goto L_801E0DBC; // 801E0CC0
L_801E0CC4:;
  c->r[5]=0u+0x00000000u; // 801E0CC4
  c->r[4]=c->r[27]|c->r[27]; // 801E0CC8
  c->ctr=c->r[31]; // 801E0CCC
L_801E0CD0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E0CD0
  c->r[0]=c->r[3]+0x00010000u; // 801E0CD4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0CD8
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0CDC
  c->r[5]=c->r[5]+0x00000001u; // 801E0CE0
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E0CE4
  c->r[0]=c->r[3]+0x00010000u; // 801E0CE8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0CEC
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0CF0
  c->r[5]=c->r[5]+0x00000001u; // 801E0CF4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801E0CF8
  c->r[0]=c->r[3]+0x00010000u; // 801E0CFC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D00
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D04
  c->r[5]=c->r[5]+0x00000001u; // 801E0D08
  c->r[3]=R32(c->r[4]+0x00000010u); // 801E0D0C
  c->r[0]=c->r[3]+0x00010000u; // 801E0D10
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D14
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D18
  c->r[5]=c->r[5]+0x00000001u; // 801E0D1C
  c->r[3]=R32(c->r[4]+0x00000014u); // 801E0D20
  c->r[0]=c->r[3]+0x00010000u; // 801E0D24
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D28
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D2C
  c->r[5]=c->r[5]+0x00000001u; // 801E0D30
  c->r[3]=R32(c->r[4]+0x00000018u); // 801E0D34
  c->r[0]=c->r[3]+0x00010000u; // 801E0D38
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D3C
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D40
  c->r[5]=c->r[5]+0x00000001u; // 801E0D44
  c->r[3]=R32(c->r[4]+0x0000001Cu); // 801E0D48
  c->r[0]=c->r[3]+0x00010000u; // 801E0D4C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D50
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D54
  c->r[5]=c->r[5]+0x00000001u; // 801E0D58
  c->r[3]=R32(c->r[4]+0x00000020u); // 801E0D5C
  c->r[0]=c->r[3]+0x00010000u; // 801E0D60
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D64
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D68
  c->r[5]=c->r[5]+0x00000001u; // 801E0D6C
  c->r[3]=R32(c->r[4]+0x00000024u); // 801E0D70
  c->r[0]=c->r[3]+0x00010000u; // 801E0D74
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0D78
  if (!crb(c,2)) { goto L_801E0D8C; } // 801E0D7C
  c->r[4]=c->r[4]+0x00000024u; // 801E0D80
  c->r[5]=c->r[5]+0x00000001u; // 801E0D84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0CD0; } // 801E0D88
L_801E0D8C:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E0D8C
  c->r[29]=c->r[27]+c->r[0]; // 801E0D90
  c->r[3]=R32(c->r[27]+0x00000000u); // 801E0D94
  c->r[4]=R32(c->r[29]+0x00000004u); // 801E0D98
  c->lr=0x801E0DA0u; f_80179984(c); // 801E0D9C
  c->r[4]=c->r[3]|c->r[3]; // 801E0DA0
  cmps(c,0,(int32_t)c->r[3],0); // 801E0DA4
  if (crb(c,2)) { goto L_801E0DB4; } // 801E0DA8
  c->r[3]=c->r[27]|c->r[27]; // 801E0DAC
  c->lr=0x801E0DB4u; f_801E0C68(c); // 801E0DB0
L_801E0DB4:;
  W32(c->r[29]+0x00000004u,c->r[30]); // 801E0DB4
  c->r[28]=c->r[28]+0x00000001u; // 801E0DB8
L_801E0DBC:;
  c->r[3]=c->r[27]|c->r[27]; // 801E0DBC
  c->lr=0x801E0DC4u; f_801E0FE0(c); // 801E0DC0
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[3]); // 801E0DC4
  if (crb(c,0)) { IRQCHK(c); goto L_801E0CC4; } // 801E0DC8
  c->r[11]=c->r[1]+0x00000020u; // 801E0DCC
  c->lr=0x801E0DD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E0DD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0DD4
  c->lr=c->r[0]; // 801E0DD8
  c->r[1]=c->r[1]+0x00000020u; // 801E0DDC
  return; // 801E0DE0
}

// fn_801E0DE4
void f_801E0DE4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801E0DE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E0DE8
  c->r[6]=c->r[3]+c->r[0]; // 801E0DEC
  c->r[5]=R32(c->r[6]+0x00000FA4u); // 801E0DF0
  c->r[3]=0u+0x00000001u; // 801E0DF4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801E0DF8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801E0DFC
  c->r[0]=c->r[5]|c->r[0]; // 801E0E00
  W32(c->r[6]+0x00000FA4u,c->r[0]); // 801E0E04
  return; // 801E0E08
}

// fn_801E0E0C
void f_801E0E0C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801E0E0C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801E0E10
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801E0E14
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801E0E18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E0E1C
  c->r[3]=c->r[3]+c->r[0]; // 801E0E20
  c->r[0]=R32(c->r[3]+0x00000FA4u); // 801E0E24
  c->r[3]=c->r[5]&c->r[0]; // 801E0E28
  c->r[0]=0u-c->r[3]; // 801E0E2C
  c->r[0]=c->r[0]|c->r[3]; // 801E0E30
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0E34
  return; // 801E0E38
}

// fn_801E0E3C
void f_801E0E3C(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0x00010000u; // 801E0E3C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0E40
  if (!crb(c,2)) { goto L_801E0E50; } // 801E0E44
  c->r[3]=0u+0x00000000u; // 801E0E48
  return; // 801E0E4C
L_801E0E50:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0E50
  f_801799CC(c); return; // 801E0E54
  return; // 801E0E58
}

// fn_801E0E5C
void f_801E0E5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0E5C
  c->r[0]=c->lr; // 801E0E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0E64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0E68
  c->r[31]=c->r[3]|c->r[3]; // 801E0E6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0E70
  c->lr=0x801E0E78u; f_80179868(c); // 801E0E74
  c->r[0]=R32(c->r[31]+0x00000FA0u); // 801E0E78
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E0E7C
  c->r[4]=c->r[31]+c->r[0]; // 801E0E80
  W32(c->r[4]+0x00000004u,c->r[3]); // 801E0E84
  c->r[3]=R32(c->r[31]+0x00000FA0u); // 801E0E88
  c->r[4]=c->r[3]+0x00000001u; // 801E0E8C
  W32(c->r[31]+0x00000FA0u,c->r[4]); // 801E0E90
  c->r[3]=0u+0x83340000u; // 801E0E94
  c->r[0]=c->r[3]+0x00000521u; // 801E0E98
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 801E0E9C
  c->r[0]=c->r[0]+c->r[4]; // 801E0EA0
  c->r[0]=sraw(c,c->r[0],9); // 801E0EA4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E0EA8
  c->r[0]=c->r[0]+c->r[3]; // 801E0EAC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)999); // 801E0EB0
  c->r[0]=c->r[4]-c->r[0]; // 801E0EB4
  W32(c->r[31]+0x00000FA0u,c->r[0]); // 801E0EB8
  c->r[3]=R32(c->r[31]+0x00002EFCu); // 801E0EBC
  c->r[0]=c->r[3]+0x00000001u; // 801E0EC0
  W32(c->r[31]+0x00002EFCu,c->r[0]); // 801E0EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0EC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0ECC
  c->lr=c->r[0]; // 801E0ED0
  c->r[1]=c->r[1]+0x00000010u; // 801E0ED4
  return; // 801E0ED8
}

// fn_801E0EDC
void f_801E0EDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0EDC
  c->r[0]=c->lr; // 801E0EE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0EE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0EE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E0EEC
  c->r[30]=c->r[3]|c->r[3]; // 801E0EF0
  c->r[31]=c->r[4]|c->r[4]; // 801E0EF4
  c->r[0]=c->r[4]+0x00010000u; // 801E0EF8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E0EFC
  if (!crb(c,2)) { goto L_801E0F0C; } // 801E0F00
  c->r[3]=0u+0x00000000u; // 801E0F04
  goto L_801E0F6C; // 801E0F08
L_801E0F0C:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0F0C
  c->lr=0x801E0F14u; f_80179984(c); // 801E0F10
  c->r[6]=0u+0x00000000u; // 801E0F14
  c->r[4]=c->r[30]|c->r[30]; // 801E0F18
  c->r[0]=0u+0x000003E7u; // 801E0F1C
  c->ctr=c->r[0]; // 801E0F20
L_801E0F24:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E0F24
  cmpu(c,0,c->r[31],c->r[0]); // 801E0F28
  if (!crb(c,2)) { goto L_801E0F44; } // 801E0F2C
  c->r[5]=0u+0xFFFFFFFFu; // 801E0F30
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801E0F34
  c->r[4]=c->r[30]+c->r[0]; // 801E0F38
  W32(c->r[4]+0x00000004u,c->r[5]); // 801E0F3C
  goto L_801E0F50; // 801E0F40
L_801E0F44:;
  c->r[4]=c->r[4]+0x00000004u; // 801E0F44
  c->r[6]=c->r[6]+0x00000001u; // 801E0F48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0F24; } // 801E0F4C
L_801E0F50:;
  c->r[4]=R32(c->r[30]+0x00002EFCu); // 801E0F50
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E0F54
  W32(c->r[30]+0x00002EFCu,c->r[0]); // 801E0F58
  cmps(c,0,(int32_t)c->r[0],0); // 801E0F5C
  if (!crb(c,0)) { goto L_801E0F6C; } // 801E0F60
  c->r[0]=0u+0x00000000u; // 801E0F64
  W32(c->r[30]+0x00002EFCu,c->r[0]); // 801E0F68
L_801E0F6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0F6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E0F70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0F74
  c->lr=c->r[0]; // 801E0F78
  c->r[1]=c->r[1]+0x00000010u; // 801E0F7C
  return; // 801E0F80
}

// fn_801E0F84
void f_801E0F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E0F84
  c->r[0]=c->lr; // 801E0F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0F8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E0F90
  c->r[31]=c->r[3]|c->r[3]; // 801E0F94
  c->lr=0x801E0F9Cu; f_801E0FE0(c); // 801E0F98
  W32(c->r[31]+0x00002EFCu,c->r[3]); // 801E0F9C
  W32(c->r[31]+0x00000FA0u,c->r[3]); // 801E0FA0
  c->r[4]=0u+0x83340000u; // 801E0FA4
  c->r[0]=c->r[4]+0x00000521u; // 801E0FA8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 801E0FAC
  c->r[0]=c->r[0]+c->r[3]; // 801E0FB0
  c->r[0]=sraw(c,c->r[0],9); // 801E0FB4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E0FB8
  c->r[0]=c->r[0]+c->r[4]; // 801E0FBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)999); // 801E0FC0
  c->r[0]=c->r[3]-c->r[0]; // 801E0FC4
  W32(c->r[31]+0x00000FA0u,c->r[0]); // 801E0FC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E0FCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0FD0
  c->lr=c->r[0]; // 801E0FD4
  c->r[1]=c->r[1]+0x00000010u; // 801E0FD8
  return; // 801E0FDC
}

// fn_801E0FE0
void f_801E0FE0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0FE0
  c->r[4]=0u+0x00000000u; // 801E0FE4
  f_8008E560(c); return; // 801E0FE8
}

// fn_801E0FEC
void f_801E0FEC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0FEC
  c->r[4]=0u+0x00000000u; // 801E0FF0
  f_8008E58C(c); return; // 801E0FF4
}

// fn_801E0FF8
void f_801E0FF8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E0FF8
  return; // 801E0FFC
}

// fn_801E1000
void f_801E1000(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00001F54u); // 801E1000
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E1004
  c->r[5]=c->r[3]+c->r[0]; // 801E1008
  W32(c->r[5]+0x00000FB4u,c->r[4]); // 801E100C
  c->r[4]=R32(c->r[3]+0x00001F50u); // 801E1010
  c->r[0]=c->r[4]+0x00000001u; // 801E1014
  W32(c->r[3]+0x00001F50u,c->r[0]); // 801E1018
  c->r[4]=R32(c->r[3]+0x00001F54u); // 801E101C
  c->r[5]=c->r[4]+0x00000001u; // 801E1020
  W32(c->r[3]+0x00001F54u,c->r[5]); // 801E1024
  c->r[4]=0u+0x83340000u; // 801E1028
  c->r[0]=c->r[4]+0x00000521u; // 801E102C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801E1030
  c->r[0]=c->r[0]+c->r[5]; // 801E1034
  c->r[0]=sraw(c,c->r[0],9); // 801E1038
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E103C
  c->r[0]=c->r[0]+c->r[4]; // 801E1040
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)999); // 801E1044
  c->r[0]=c->r[5]-c->r[0]; // 801E1048
  W32(c->r[3]+0x00001F54u,c->r[0]); // 801E104C
  return; // 801E1050
}

// fn_801E1054
void f_801E1054(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00002EF8u); // 801E1054
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E1058
  c->r[5]=c->r[3]+c->r[0]; // 801E105C
  W32(c->r[5]+0x00001F58u,c->r[4]); // 801E1060
  c->r[4]=R32(c->r[3]+0x00002EF4u); // 801E1064
  c->r[0]=c->r[4]+0x00000001u; // 801E1068
  W32(c->r[3]+0x00002EF4u,c->r[0]); // 801E106C
  c->r[4]=R32(c->r[3]+0x00002EF8u); // 801E1070
  c->r[5]=c->r[4]+0x00000001u; // 801E1074
  W32(c->r[3]+0x00002EF8u,c->r[5]); // 801E1078
  c->r[4]=0u+0x83340000u; // 801E107C
  c->r[0]=c->r[4]+0x00000521u; // 801E1080
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801E1084
  c->r[0]=c->r[0]+c->r[5]; // 801E1088
  c->r[0]=sraw(c,c->r[0],9); // 801E108C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E1090
  c->r[0]=c->r[0]+c->r[4]; // 801E1094
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)999); // 801E1098
  c->r[0]=c->r[5]-c->r[0]; // 801E109C
  W32(c->r[3]+0x00002EF8u,c->r[0]); // 801E10A0
  return; // 801E10A4
}

// fn_801E10A8
void f_801E10A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E10A8
  c->r[0]=c->lr; // 801E10AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E10B0
  c->r[11]=c->r[1]+0x00000020u; // 801E10B4
  c->lr=0x801E10BCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E10B8
  c->r[27]=c->r[3]|c->r[3]; // 801E10BC
  c->lr=0x801E10C4u; f_8007B524(c); // 801E10C0
  c->lr=0x801E10C8u; f_800A3488(c); // 801E10C4
  c->r[29]=c->r[3]|c->r[3]; // 801E10C8
  c->r[28]=0u+0x00000000u; // 801E10CC
  c->r[31]=c->r[27]|c->r[27]; // 801E10D0
  goto L_801E113C; // 801E10D4
L_801E10D8:;
  c->r[30]=R32(c->r[31]+0x00000FB4u); // 801E10D8
  c->r[0]=c->r[30]+0x00010000u; // 801E10DC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E10E0
  if (crb(c,2)) { goto L_801E1134; } // 801E10E4
  c->lr=0x801E10ECu; f_8007B524(c); // 801E10E8
  c->r[4]=c->r[30]|c->r[30]; // 801E10EC
  c->lr=0x801E10F4u; f_800A3064(c); // 801E10F0
  cmps(c,0,(int32_t)c->r[3],0); // 801E10F4
  if (crb(c,2)) { goto L_801E1114; } // 801E10F8
  c->lr=0x801E1100u; f_8007B524(c); // 801E10FC
  c->r[4]=R32(c->r[31]+0x00000FB4u); // 801E1100
  c->r[5]=0u+0x00000000u; // 801E1104
  c->lr=0x801E110Cu; f_800A30DC(c); // 801E1108
  cmps(c,0,(int32_t)c->r[3],0); // 801E110C
  if (crb(c,2)) { goto L_801E1134; } // 801E1110
L_801E1114:;
  c->r[3]=c->r[29]|c->r[29]; // 801E1114
  c->r[4]=R32(c->r[31]+0x00000FB4u); // 801E1118
  c->lr=0x801E1120u; f_80179984(c); // 801E111C
  c->r[4]=c->r[3]|c->r[3]; // 801E1120
  cmps(c,0,(int32_t)c->r[3],0); // 801E1124
  if (crb(c,2)) { goto L_801E1134; } // 801E1128
  c->r[3]=c->r[27]|c->r[27]; // 801E112C
  c->lr=0x801E1134u; f_801E0E5C(c); // 801E1130
L_801E1134:;
  c->r[31]=c->r[31]+0x00000004u; // 801E1134
  c->r[28]=c->r[28]+0x00000001u; // 801E1138
L_801E113C:;
  c->r[0]=R32(c->r[27]+0x00001F50u); // 801E113C
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 801E1140
  if (crb(c,0)) { IRQCHK(c); goto L_801E10D8; } // 801E1144
  c->r[0]=0u+0x00000000u; // 801E1148
  W32(c->r[27]+0x00001F50u,c->r[0]); // 801E114C
  W32(c->r[27]+0x00001F54u,c->r[0]); // 801E1150
  c->r[3]=c->r[27]+0x00000FB4u; // 801E1154
  c->r[4]=0u+0xFFFFFFFFu; // 801E1158
  c->r[5]=0u+0x00000F9Cu; // 801E115C
  c->lr=0x801E1164u; f_800060B8(c); // 801E1160
  c->r[11]=c->r[1]+0x00000020u; // 801E1164
  c->lr=0x801E116Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E1168
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E116C
  c->lr=c->r[0]; // 801E1170
  c->r[1]=c->r[1]+0x00000020u; // 801E1174
  return; // 801E1178
}

// fn_801E117C
void f_801E117C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E117C
  c->r[0]=c->lr; // 801E1180
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1184
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1188
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E118C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1190
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E1194
  c->r[28]=c->r[3]|c->r[3]; // 801E1198
  c->lr=0x801E11A0u; f_8007B524(c); // 801E119C
  c->lr=0x801E11A4u; f_800A3488(c); // 801E11A0
  c->r[30]=c->r[3]|c->r[3]; // 801E11A4
  c->r[29]=0u+0x00000000u; // 801E11A8
  c->r[31]=c->r[28]|c->r[28]; // 801E11AC
  goto L_801E11E8; // 801E11B0
L_801E11B4:;
  c->r[4]=R32(c->r[31]+0x00001F58u); // 801E11B4
  c->r[0]=c->r[4]+0x00010000u; // 801E11B8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E11BC
  if (crb(c,2)) { goto L_801E11E0; } // 801E11C0
  c->r[3]=c->r[28]|c->r[28]; // 801E11C4
  c->lr=0x801E11CCu; f_801E0EDC(c); // 801E11C8
  c->r[4]=c->r[3]|c->r[3]; // 801E11CC
  cmps(c,0,(int32_t)c->r[3],0); // 801E11D0
  if (crb(c,2)) { goto L_801E11E0; } // 801E11D4
  c->r[3]=c->r[30]|c->r[30]; // 801E11D8
  c->lr=0x801E11E0u; f_80179868(c); // 801E11DC
L_801E11E0:;
  c->r[31]=c->r[31]+0x00000004u; // 801E11E0
  c->r[29]=c->r[29]+0x00000001u; // 801E11E4
L_801E11E8:;
  c->r[0]=R32(c->r[28]+0x00002EF4u); // 801E11E8
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801E11EC
  if (crb(c,0)) { IRQCHK(c); goto L_801E11B4; } // 801E11F0
  c->r[0]=0u+0x00000000u; // 801E11F4
  W32(c->r[28]+0x00002EF4u,c->r[0]); // 801E11F8
  W32(c->r[28]+0x00002EF8u,c->r[0]); // 801E11FC
  c->r[3]=c->r[28]+0x00001F58u; // 801E1200
  c->r[4]=0u+0xFFFFFFFFu; // 801E1204
  c->r[5]=0u+0x00000F9Cu; // 801E1208
  c->lr=0x801E1210u; f_800060B8(c); // 801E120C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1210
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1214
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1218
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E121C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1220
  c->lr=c->r[0]; // 801E1224
  c->r[1]=c->r[1]+0x00000020u; // 801E1228
  return; // 801E122C
}

// fn_801E1230
void f_801E1230(Ctx* __restrict c) {
  f_801E0B40(c); return; // 801E1230
}

// fn_801E1234
void f_801E1234(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000FA4u; // 801E1234
  return; // 801E1238
}

// fn_801E123C
void f_801E123C(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 801E123C
  c->r[5]=c->r[4]|c->r[4]; // 801E1240
  c->r[6]=c->r[3]|c->r[3]; // 801E1244
  c->r[0]=0u+0x0000000Fu; // 801E1248
  c->ctr=c->r[0]; // 801E124C
L_801E1250:;
  c->r[8]=R32(c->r[6]+0x00000FA4u); // 801E1250
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E1254
  c->r[0]=c->r[8]|c->r[0]; // 801E1258
  W32(c->r[6]+0x00000FA4u,c->r[0]); // 801E125C
  c->r[8]=R32(c->r[6]+0x00000FA8u); // 801E1260
  c->r[0]=R32(c->r[5]+0x00000004u); // 801E1264
  c->r[0]=c->r[8]|c->r[0]; // 801E1268
  W32(c->r[6]+0x00000FA8u,c->r[0]); // 801E126C
  c->r[8]=R32(c->r[6]+0x00000FACu); // 801E1270
  c->r[0]=R32(c->r[5]+0x00000008u); // 801E1274
  c->r[0]=c->r[8]|c->r[0]; // 801E1278
  W32(c->r[6]+0x00000FACu,c->r[0]); // 801E127C
  c->r[8]=R32(c->r[6]+0x00000FB0u); // 801E1280
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E1284
  c->r[0]=c->r[8]|c->r[0]; // 801E1288
  W32(c->r[6]+0x00000FB0u,c->r[0]); // 801E128C
  c->r[8]=R32(c->r[6]+0x00000FB4u); // 801E1290
  c->r[0]=R32(c->r[5]+0x00000010u); // 801E1294
  c->r[0]=c->r[8]|c->r[0]; // 801E1298
  W32(c->r[6]+0x00000FB4u,c->r[0]); // 801E129C
  c->r[8]=R32(c->r[6]+0x00000FB8u); // 801E12A0
  c->r[0]=R32(c->r[5]+0x00000014u); // 801E12A4
  c->r[0]=c->r[8]|c->r[0]; // 801E12A8
  W32(c->r[6]+0x00000FB8u,c->r[0]); // 801E12AC
  c->r[8]=R32(c->r[6]+0x00000FBCu); // 801E12B0
  c->r[0]=R32(c->r[5]+0x00000018u); // 801E12B4
  c->r[0]=c->r[8]|c->r[0]; // 801E12B8
  W32(c->r[6]+0x00000FBCu,c->r[0]); // 801E12BC
  c->r[8]=R32(c->r[6]+0x00000FC0u); // 801E12C0
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801E12C4
  c->r[0]=c->r[8]|c->r[0]; // 801E12C8
  W32(c->r[6]+0x00000FC0u,c->r[0]); // 801E12CC
  c->r[5]=c->r[5]+0x00000020u; // 801E12D0
  c->r[6]=c->r[6]+0x00000020u; // 801E12D4
  c->r[7]=c->r[7]+0x00000008u; // 801E12D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E1250; } // 801E12DC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801E12E0
  c->r[5]=c->r[4]+c->r[0]; // 801E12E4
  c->r[4]=c->r[3]+c->r[0]; // 801E12E8
  c->r[3]=R32(c->r[4]+0x00000FA4u); // 801E12EC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E12F0
  c->r[0]=c->r[3]|c->r[0]; // 801E12F4
  W32(c->r[4]+0x00000FA4u,c->r[0]); // 801E12F8
  c->r[3]=R32(c->r[4]+0x00000FA8u); // 801E12FC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801E1300
  c->r[0]=c->r[3]|c->r[0]; // 801E1304
  W32(c->r[4]+0x00000FA8u,c->r[0]); // 801E1308
  c->r[3]=R32(c->r[4]+0x00000FACu); // 801E130C
  c->r[0]=R32(c->r[5]+0x00000008u); // 801E1310
  c->r[0]=c->r[3]|c->r[0]; // 801E1314
  W32(c->r[4]+0x00000FACu,c->r[0]); // 801E1318
  c->r[3]=R32(c->r[4]+0x00000FB0u); // 801E131C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801E1320
  c->r[0]=c->r[3]|c->r[0]; // 801E1324
  W32(c->r[4]+0x00000FB0u,c->r[0]); // 801E1328
  return; // 801E132C
}

// fn_801E1330
void f_801E1330(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000FA0u); // 801E1330
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E1334
  c->r[5]=c->r[3]+c->r[0]; // 801E1338
  W32(c->r[5]+0x00000004u,c->r[4]); // 801E133C
  c->r[4]=R32(c->r[3]+0x00000FA0u); // 801E1340
  c->r[5]=c->r[4]+0x00000001u; // 801E1344
  W32(c->r[3]+0x00000FA0u,c->r[5]); // 801E1348
  c->r[4]=0u+0x83340000u; // 801E134C
  c->r[0]=c->r[4]+0x00000521u; // 801E1350
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 801E1354
  c->r[0]=c->r[0]+c->r[5]; // 801E1358
  c->r[0]=sraw(c,c->r[0],9); // 801E135C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E1360
  c->r[0]=c->r[0]+c->r[4]; // 801E1364
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)999); // 801E1368
  c->r[0]=c->r[5]-c->r[0]; // 801E136C
  W32(c->r[3]+0x00000FA0u,c->r[0]); // 801E1370
  c->r[4]=R32(c->r[3]+0x00002EFCu); // 801E1374
  c->r[0]=c->r[4]+0x00000001u; // 801E1378
  W32(c->r[3]+0x00002EFCu,c->r[0]); // 801E137C
  return; // 801E1380
}

// fn_801E1384
void f_801E1384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1384
  c->r[0]=c->lr; // 801E1388
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E138C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1390
  c->r[31]=c->r[3]|c->r[3]; // 801E1394
  c->r[3]=c->r[3]+0x00000004u; // 801E1398
  c->r[4]=0u+0xFFFFFFFFu; // 801E139C
  c->r[5]=0u+0x00000F9Cu; // 801E13A0
  c->lr=0x801E13A8u; f_800060B8(c); // 801E13A4
  c->r[0]=0u+0x00000000u; // 801E13A8
  W32(c->r[31]+0x00002EFCu,c->r[0]); // 801E13AC
  W32(c->r[31]+0x00000FA0u,c->r[0]); // 801E13B0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E13B4
  c->r[4]=0u+0x00000000u; // 801E13B8
  c->r[5]=c->r[31]|c->r[31]; // 801E13BC
  c->r[6]=0u+0x801E0000u; // 801E13C0
  c->r[6]=c->r[6]+0x0000090Cu; // 801E13C4
  c->lr=0x801E13CCu; f_80179BAC(c); // 801E13C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E13CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E13D0
  c->lr=c->r[0]; // 801E13D4
  c->r[1]=c->r[1]+0x00000010u; // 801E13D8
  return; // 801E13DC
}

// fn_801E13E0
void f_801E13E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E13E0
  c->r[0]=c->lr; // 801E13E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E13E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E13EC
  c->r[31]=c->r[3]|c->r[3]; // 801E13F0
  c->lr=0x801E13F8u; f_801E0BD4(c); // 801E13F4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E13F8
  c->r[4]=0u+0x00000004u; // 801E13FC
  c->lr=0x801E1404u; f_801797EC(c); // 801E1400
  c->r[3]=c->r[31]|c->r[31]; // 801E1404
  c->lr=0x801E140Cu; f_801E0B40(c); // 801E1408
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E140C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1410
  c->lr=c->r[0]; // 801E1414
  c->r[1]=c->r[1]+0x00000010u; // 801E1418
  return; // 801E141C
}

// fn_801E1420
void f_801E1420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1420
  c->r[0]=c->lr; // 801E1424
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1428
  c->r[11]=c->r[1]+0x00000020u; // 801E142C
  c->lr=0x801E1434u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E1430
  c->r[26]=c->r[3]|c->r[3]; // 801E1434
  c->lr=0x801E143Cu; f_8007B524(c); // 801E1438
  c->lr=0x801E1440u; f_800A3488(c); // 801E143C
  c->r[28]=c->r[3]|c->r[3]; // 801E1440
  c->r[0]=0u+0x00000000u; // 801E1444
  W32(c->r[26]+0x00001F50u,c->r[0]); // 801E1448
  W32(c->r[26]+0x00001F54u,c->r[0]); // 801E144C
  c->r[3]=c->r[26]+0x00000FB4u; // 801E1450
  c->r[4]=0u+0xFFFFFFFFu; // 801E1454
  c->r[5]=0u+0x00000F9Cu; // 801E1458
  c->lr=0x801E1460u; f_800060B8(c); // 801E145C
  c->r[3]=c->r[28]|c->r[28]; // 801E1460
  c->r[4]=0u+0x00000000u; // 801E1464
  c->r[5]=c->r[26]|c->r[26]; // 801E1468
  c->r[6]=0u+0x801E0000u; // 801E146C
  c->r[6]=c->r[6]+0x0000094Cu; // 801E1470
  c->lr=0x801E1478u; f_80179BAC(c); // 801E1474
  c->r[3]=c->r[28]|c->r[28]; // 801E1478
  c->r[4]=0u+0x00000000u; // 801E147C
  c->lr=0x801E1484u; f_8008E560(c); // 801E1480
  c->r[30]=c->r[3]|c->r[3]; // 801E1484
  c->r[27]=0u+0x00000000u; // 801E1488
  c->r[29]=c->r[26]|c->r[26]; // 801E148C
  goto L_801E1514; // 801E1490
L_801E1494:;
  c->r[3]=R32(c->r[29]+0x00000FB4u); // 801E1494
  c->r[0]=c->r[3]+0x00010000u; // 801E1498
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E149C
  if (crb(c,2)) { goto L_801E150C; } // 801E14A0
  c->r[3]=c->r[26]|c->r[26]; // 801E14A4
  c->lr=0x801E14ACu; f_801E0FEC(c); // 801E14A8
  c->r[31]=c->r[3]|c->r[3]; // 801E14AC
  c->r[3]=c->r[26]|c->r[26]; // 801E14B0
  c->lr=0x801E14B8u; f_801E0FE0(c); // 801E14B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 801E14B8
  if (crb(c,1)) { goto L_801E150C; } // 801E14BC
  c->lr=0x801E14C4u; f_8007B524(c); // 801E14C0
  c->r[4]=R32(c->r[29]+0x00000FB4u); // 801E14C4
  c->lr=0x801E14CCu; f_800A3064(c); // 801E14C8
  cmps(c,0,(int32_t)c->r[3],0); // 801E14CC
  if (crb(c,2)) { goto L_801E14EC; } // 801E14D0
  c->lr=0x801E14D8u; f_8007B524(c); // 801E14D4
  c->r[4]=R32(c->r[29]+0x00000FB4u); // 801E14D8
  c->r[5]=0u+0x00000000u; // 801E14DC
  c->lr=0x801E14E4u; f_800A30DC(c); // 801E14E0
  cmps(c,0,(int32_t)c->r[3],0); // 801E14E4
  if (crb(c,2)) { goto L_801E150C; } // 801E14E8
L_801E14EC:;
  c->r[3]=c->r[28]|c->r[28]; // 801E14EC
  c->r[4]=R32(c->r[29]+0x00000FB4u); // 801E14F0
  c->lr=0x801E14F8u; f_80179984(c); // 801E14F4
  c->r[4]=c->r[3]|c->r[3]; // 801E14F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E14FC
  if (crb(c,2)) { goto L_801E150C; } // 801E1500
  c->r[3]=c->r[26]|c->r[26]; // 801E1504
  c->lr=0x801E150Cu; f_801E0E5C(c); // 801E1508
L_801E150C:;
  c->r[29]=c->r[29]+0x00000004u; // 801E150C
  c->r[27]=c->r[27]+0x00000001u; // 801E1510
L_801E1514:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[30]); // 801E1514
  if (crb(c,0)) { IRQCHK(c); goto L_801E1494; } // 801E1518
  c->r[0]=0u+0x00000000u; // 801E151C
  W32(c->r[26]+0x00001F50u,c->r[0]); // 801E1520
  W32(c->r[26]+0x00001F54u,c->r[0]); // 801E1524
  c->r[3]=c->r[26]+0x00000FB4u; // 801E1528
  c->r[4]=0u+0xFFFFFFFFu; // 801E152C
  c->r[5]=0u+0x00000F9Cu; // 801E1530
  c->lr=0x801E1538u; f_800060B8(c); // 801E1534
  c->r[11]=c->r[1]+0x00000020u; // 801E1538
  c->lr=0x801E1540u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E153C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1540
  c->lr=c->r[0]; // 801E1544
  c->r[1]=c->r[1]+0x00000020u; // 801E1548
  return; // 801E154C
}

// fn_801E1550
void f_801E1550(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1550
  c->r[0]=c->lr; // 801E1554
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1558
  c->lr=0x801E1560u; f_801E098C(c); // 801E155C
  c->lr=0x801E1564u; f_801E0A34(c); // 801E1560
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1564
  c->lr=c->r[0]; // 801E1568
  c->r[1]=c->r[1]+0x00000010u; // 801E156C
  return; // 801E1570
}

// fn_801E1574
void f_801E1574(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1574
  c->r[0]=c->lr; // 801E1578
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E157C
  c->lr=0x801E1584u; f_801E098C(c); // 801E1580
  c->lr=0x801E1588u; f_801E0AB8(c); // 801E1584
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1588
  c->lr=c->r[0]; // 801E158C
  c->r[1]=c->r[1]+0x00000010u; // 801E1590
  return; // 801E1594
}

// fn_801E1598
void f_801E1598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1598
  c->r[0]=c->lr; // 801E159C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E15A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E15A4
  c->r[31]=c->r[3]|c->r[3]; // 801E15A8
  c->lr=0x801E15B0u; f_801E098C(c); // 801E15AC
  c->r[4]=c->r[31]|c->r[31]; // 801E15B0
  c->lr=0x801E15B8u; f_801E0DE4(c); // 801E15B4
  c->lr=0x801E15BCu; f_801E098C(c); // 801E15B8
  c->lr=0x801E15C0u; f_801E1230(c); // 801E15BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E15C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E15C4
  c->lr=c->r[0]; // 801E15C8
  c->r[1]=c->r[1]+0x00000010u; // 801E15CC
  return; // 801E15D0
}

// fn_801E15D4
void f_801E15D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E15D4
  c->r[0]=c->lr; // 801E15D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E15DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E15E0
  c->r[31]=c->r[3]|c->r[3]; // 801E15E4
  c->lr=0x801E15ECu; f_801E098C(c); // 801E15E8
  c->r[4]=c->r[31]|c->r[31]; // 801E15EC
  c->lr=0x801E15F4u; f_801E0E3C(c); // 801E15F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E15F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E15F8
  c->lr=c->r[0]; // 801E15FC
  c->r[1]=c->r[1]+0x00000010u; // 801E1600
  return; // 801E1604
}

// fn_801E1608
void f_801E1608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1608
  c->r[0]=c->lr; // 801E160C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1610
  c->lr=0x801E1618u; f_801E098C(c); // 801E1614
  c->lr=0x801E161Cu; f_801E0F84(c); // 801E1618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E161C
  c->lr=c->r[0]; // 801E1620
  c->r[1]=c->r[1]+0x00000010u; // 801E1624
  return; // 801E1628
}

// fn_801E162C
void f_801E162C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E162C
  c->r[0]=c->lr; // 801E1630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1634
  c->lr=0x801E163Cu; f_801E098C(c); // 801E1638
  c->lr=0x801E1640u; f_801E0FE0(c); // 801E163C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1640
  c->lr=c->r[0]; // 801E1644
  c->r[1]=c->r[1]+0x00000010u; // 801E1648
  return; // 801E164C
}

// fn_801E1650
void f_801E1650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1650
  c->r[0]=c->lr; // 801E1654
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1658
  c->lr=0x801E1660u; f_801E098C(c); // 801E165C
  c->lr=0x801E1664u; f_801E0FEC(c); // 801E1660
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1664
  c->lr=c->r[0]; // 801E1668
  c->r[1]=c->r[1]+0x00000010u; // 801E166C
  return; // 801E1670
}

// fn_801E1674
void f_801E1674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1674
  c->r[0]=c->lr; // 801E1678
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E167C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1680
  c->r[31]=c->r[3]|c->r[3]; // 801E1684
  c->lr=0x801E168Cu; f_801E098C(c); // 801E1688
  c->r[4]=c->r[31]|c->r[31]; // 801E168C
  c->lr=0x801E1694u; f_801E1000(c); // 801E1690
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1694
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1698
  c->lr=c->r[0]; // 801E169C
  c->r[1]=c->r[1]+0x00000010u; // 801E16A0
  return; // 801E16A4
}

// fn_801E16A8
void f_801E16A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E16A8
  c->r[0]=c->lr; // 801E16AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E16B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E16B4
  c->r[31]=c->r[3]|c->r[3]; // 801E16B8
  c->lr=0x801E16C0u; f_801E098C(c); // 801E16BC
  c->r[4]=c->r[31]|c->r[31]; // 801E16C0
  c->lr=0x801E16C8u; f_801E1054(c); // 801E16C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E16C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E16CC
  c->lr=c->r[0]; // 801E16D0
  c->r[1]=c->r[1]+0x00000010u; // 801E16D4
  return; // 801E16D8
}

// fn_801E16DC
void f_801E16DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E16DC
  c->r[0]=c->lr; // 801E16E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E16E4
  c->lr=0x801E16ECu; f_801E098C(c); // 801E16E8
  c->lr=0x801E16F0u; f_801E10A8(c); // 801E16EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E16F0
  c->lr=c->r[0]; // 801E16F4
  c->r[1]=c->r[1]+0x00000010u; // 801E16F8
  return; // 801E16FC
}

// fn_801E1700
void f_801E1700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1700
  c->r[0]=c->lr; // 801E1704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1708
  c->lr=0x801E1710u; f_801E098C(c); // 801E170C
  c->lr=0x801E1714u; f_801E117C(c); // 801E1710
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1714
  c->lr=c->r[0]; // 801E1718
  c->r[1]=c->r[1]+0x00000010u; // 801E171C
  return; // 801E1720
}

// fn_801E1724
void f_801E1724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1724
  c->r[0]=c->lr; // 801E1728
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E172C
  c->lr=0x801E1734u; f_801E098C(c); // 801E1730
  c->lr=0x801E1738u; f_801E0FF8(c); // 801E1734
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1738
  c->lr=c->r[0]; // 801E173C
  c->r[1]=c->r[1]+0x00000010u; // 801E1740
  return; // 801E1744
}

// fn_801E1748
void f_801E1748(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1748
  c->r[0]=c->lr; // 801E174C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1750
  c->lr=0x801E1758u; f_801E098C(c); // 801E1754
  c->lr=0x801E175Cu; f_801E1234(c); // 801E1758
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E175C
  c->lr=c->r[0]; // 801E1760
  c->r[1]=c->r[1]+0x00000010u; // 801E1764
  return; // 801E1768
}

// fn_801E176C
void f_801E176C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E176C
  c->r[0]=c->lr; // 801E1770
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1778
  c->r[31]=c->r[3]|c->r[3]; // 801E177C
  c->lr=0x801E1784u; f_801E098C(c); // 801E1780
  c->r[4]=c->r[31]|c->r[31]; // 801E1784
  c->lr=0x801E178Cu; f_801E123C(c); // 801E1788
  c->lr=0x801E1790u; f_801E098C(c); // 801E178C
  c->lr=0x801E1794u; f_801E1230(c); // 801E1790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1794
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1798
  c->lr=c->r[0]; // 801E179C
  c->r[1]=c->r[1]+0x00000010u; // 801E17A0
  return; // 801E17A4
}

// fn_801E17A8
void f_801E17A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E17A8
  c->r[0]=c->lr; // 801E17AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E17B0
  c->lr=0x801E17B8u; f_801E098C(c); // 801E17B4
  c->lr=0x801E17BCu; f_801E1384(c); // 801E17B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E17BC
  c->lr=c->r[0]; // 801E17C0
  c->r[1]=c->r[1]+0x00000010u; // 801E17C4
  return; // 801E17C8
}

// fn_801E17CC
void f_801E17CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E17CC
  c->r[0]=c->lr; // 801E17D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E17D4
  c->lr=0x801E17DCu; f_801E098C(c); // 801E17D8
  c->lr=0x801E17E0u; f_801E13E0(c); // 801E17DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E17E0
  c->lr=c->r[0]; // 801E17E4
  c->r[1]=c->r[1]+0x00000010u; // 801E17E8
  return; // 801E17EC
}

// fn_801E17F0
void f_801E17F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E17F0
  c->r[0]=c->lr; // 801E17F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E17F8
  c->lr=0x801E1800u; f_801E098C(c); // 801E17FC
  c->lr=0x801E1804u; f_801E1420(c); // 801E1800
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1804
  c->lr=c->r[0]; // 801E1808
  c->r[1]=c->r[1]+0x00000010u; // 801E180C
  return; // 801E1810
}

// fn_801E1814
void f_801E1814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1814
  c->r[0]=c->lr; // 801E1818
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E181C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1820
  c->r[31]=c->r[3]|c->r[3]; // 801E1824
  c->r[3]=c->r[4]|c->r[4]; // 801E1828
  c->lr=0x801E1830u; f_80355B14(c); // 801E182C
  c->r[4]=c->r[31]|c->r[31]; // 801E1830
  c->lr=0x801E1838u; f_801E2F38(c); // 801E1834
  c->r[0]=0u+0x00000002u; // 801E1838
  W32(c->r[13]+0xFFFFBB10u,c->r[0]); // 801E183C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1840
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1844
  c->lr=c->r[0]; // 801E1848
  c->r[1]=c->r[1]+0x00000010u; // 801E184C
  return; // 801E1850
}

// fn_801E1854
void f_801E1854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1854
  c->r[0]=c->lr; // 801E1858
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E185C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1860
  c->r[31]=c->r[3]|c->r[3]; // 801E1864
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801E1868
  cmps(c,0,(int32_t)c->r[0],4); // 801E186C
  if (crb(c,2)) { goto L_801E1968; } // 801E1870
  if (!crb(c,0)) { goto L_801E1890; } // 801E1874
  cmps(c,0,(int32_t)c->r[0],1); // 801E1878
  if (crb(c,2)) { goto L_801E18F0; } // 801E187C
  if (!crb(c,0)) { goto L_801E19C0; } // 801E1880
  cmps(c,0,(int32_t)c->r[0],0); // 801E1884
  if (!crb(c,0)) { goto L_801E189C; } // 801E1888
  goto L_801E19C0; // 801E188C
L_801E1890:;
  cmps(c,0,(int32_t)c->r[0],6); // 801E1890
  if (!crb(c,0)) { goto L_801E19C0; } // 801E1894
  goto L_801E1908; // 801E1898
L_801E189C:;
  c->r[0]=0u+0x00000000u; // 801E189C
  W32(c->r[13]+0xFFFFBB10u,c->r[0]); // 801E18A0
  c->r[0]=R32(c->r[3]+0x000000C4u); // 801E18A4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E18A8
  c->r[4]=0u+0x80470000u; // 801E18AC
  c->r[0]=c->r[4]+0x00003798u; // 801E18B0
  c->r[12]=c->r[0]+c->r[5]; // 801E18B4
  c->lr=0x801E18BCu; f_802F09D0(c); // 801E18B8
  c->r[0]=c->r[0]|0x00000000u; // 801E18BC
  c->r[3]=c->r[31]|c->r[31]; // 801E18C0
  c->lr=0x801E18C8u; f_801E2F94(c); // 801E18C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E18C8
  if (!crb(c,0)) { goto L_801E18E4; } // 801E18CC
  c->r[0]=0u+0x00000002u; // 801E18D0
  W32(c->r[13]+0xFFFFBB10u,c->r[0]); // 801E18D4
  c->r[3]=c->r[31]|c->r[31]; // 801E18D8
  c->lr=0x801E18E0u; f_801E2F88(c); // 801E18DC
  goto L_801E19C0; // 801E18E0
L_801E18E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E18E4
  c->lr=0x801E18ECu; f_801E2F7C(c); // 801E18E8
  goto L_801E19C0; // 801E18EC
L_801E18F0:;
  c->r[0]=R32(c->r[13]+0xFFFFBB10u); // 801E18F0
  cmpu(c,0,c->r[0],0x00000002u); // 801E18F4
  if (!crb(c,2)) { goto L_801E19C0; } // 801E18F8
  c->r[0]=0u+0x00000005u; // 801E18FC
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E1900
  goto L_801E19C0; // 801E1904
L_801E1908:;
  c->lr=0x801E190Cu; f_801E2F94(c); // 801E1908
  cmps(c,0,(int32_t)c->r[3],0); // 801E190C
  if (!crb(c,0)) { goto L_801E1920; } // 801E1910
  c->r[3]=c->r[31]|c->r[31]; // 801E1914
  c->lr=0x801E191Cu; f_801E2F88(c); // 801E1918
  goto L_801E19C0; // 801E191C
L_801E1920:;
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801E1920
  cmps(c,0,(int32_t)c->r[3],0); // 801E1924
  if (crb(c,2)) { goto L_801E195C; } // 801E1928
  c->r[0]=R32(c->r[31]+0x000000C4u); // 801E192C
  cmps(c,0,(int32_t)c->r[0],9); // 801E1930
  if (crb(c,2)) { goto L_801E1954; } // 801E1934
  if (!crb(c,0)) { goto L_801E195C; } // 801E1938
  cmps(c,0,(int32_t)c->r[0],8); // 801E193C
  if (!crb(c,0)) { goto L_801E1948; } // 801E1940
  goto L_801E195C; // 801E1944
L_801E1948:;
  c->r[4]=0u+0x00000004u; // 801E1948
  c->lr=0x801E1950u; f_801E2F6C(c); // 801E194C
  goto L_801E195C; // 801E1950
L_801E1954:;
  c->r[4]=0u+0x00000004u; // 801E1954
  c->lr=0x801E195Cu; f_801E2F58(c); // 801E1958
L_801E195C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E195C
  c->lr=0x801E1964u; f_801E2F4C(c); // 801E1960
  goto L_801E19C0; // 801E1964
L_801E1968:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E1968
  {uint32_t ea=c->r[2]+0xFFFF9410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E196C
  fcmp(c,0,c->f[1],c->f[0]); // 801E1970
  if (!crb(c,1)) { goto L_801E19C0; } // 801E1974
  c->r[3]=0u+0x00000001u; // 801E1978
  c->lr=0x801E1980u; f_8005D714(c); // 801E197C
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E1980
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801E1984
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[1]);} // 801E1988
  {uint32_t ea=c->r[2]+0xFFFF9410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E198C
  fcmp(c,0,c->f[1],c->f[0]); // 801E1990
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801E1994
  if (!crb(c,2)) { goto L_801E19C0; } // 801E1998
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[0]);} // 801E199C
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801E19A0
  c->r[0]=c->r[3]+0x00000001u; // 801E19A4
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801E19A8
  c->r[3]=c->r[31]|c->r[31]; // 801E19AC
  c->r[4]=0u+0x00000000u; // 801E19B0
  c->lr=0x801E19B8u; f_801E2F38(c); // 801E19B4
  c->r[3]=c->r[31]|c->r[31]; // 801E19B8
  c->lr=0x801E19C0u; f_801E2F40(c); // 801E19BC
L_801E19C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E19C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E19C4
  c->lr=c->r[0]; // 801E19C8
  c->r[1]=c->r[1]+0x00000010u; // 801E19CC
  return; // 801E19D0
}

// fn_801E19D4
void f_801E19D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E19D4
  c->r[0]=c->lr; // 801E19D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E19DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E19E0
  c->r[31]=c->r[3]|c->r[3]; // 801E19E4
  c->lr=0x801E19ECu; f_801E2F9C(c); // 801E19E8
  cmps(c,0,(int32_t)c->r[3],0); // 801E19EC
  if (crb(c,2)) { goto L_801E1A10; } // 801E19F0
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801E19F4
  c->r[4]=c->r[3]+0x00000004u; // 801E19F8
  c->r[5]=0u+0x801E0000u; // 801E19FC
  c->r[5]=c->r[5]+0x00001814u; // 801E1A00
  c->r[6]=c->r[31]+0x00000008u; // 801E1A04
  c->lr=0x801E1A0Cu; f_80355584(c); // 801E1A08
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1A0C
L_801E1A10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1A10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1A14
  c->lr=c->r[0]; // 801E1A18
  c->r[1]=c->r[1]+0x00000010u; // 801E1A1C
  return; // 801E1A20
}

// fn_801E1A24
void f_801E1A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1A24
  c->r[0]=c->lr; // 801E1A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1A30
  c->r[31]=c->r[3]|c->r[3]; // 801E1A34
  c->lr=0x801E1A3Cu; f_801E2F9C(c); // 801E1A38
  cmps(c,0,(int32_t)c->r[3],0); // 801E1A3C
  if (crb(c,2)) { goto L_801E1A68; } // 801E1A40
  c->r[5]=R32(c->r[31]+0x000000D8u); // 801E1A44
  c->r[3]=R32(c->r[5]+0x00000008u); // 801E1A48
  c->r[4]=R32(c->r[5]+0x0000000Cu); // 801E1A4C
  c->r[5]=c->r[5]+0x00000010u; // 801E1A50
  c->r[6]=0u+0x801E0000u; // 801E1A54
  c->r[6]=c->r[6]+0x00001814u; // 801E1A58
  c->r[7]=c->r[31]+0x00000008u; // 801E1A5C
  c->lr=0x801E1A64u; f_80357504(c); // 801E1A60
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1A64
L_801E1A68:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1A68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1A6C
  c->lr=c->r[0]; // 801E1A70
  c->r[1]=c->r[1]+0x00000010u; // 801E1A74
  return; // 801E1A78
}

// fn_801E1A7C
void f_801E1A7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1A7C
  c->r[0]=c->lr; // 801E1A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1A88
  c->r[31]=c->r[3]|c->r[3]; // 801E1A8C
  c->lr=0x801E1A94u; f_801E2F9C(c); // 801E1A90
  cmps(c,0,(int32_t)c->r[3],0); // 801E1A94
  if (crb(c,2)) { goto L_801E1AC0; } // 801E1A98
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801E1A9C
  c->lr=0x801E1AA4u; f_801E2FAC(c); // 801E1AA0
  c->r[4]=0u+0x0000003Fu; // 801E1AA4
  c->r[5]=0u+0x00000000u; // 801E1AA8
  c->r[6]=0u+0x801E0000u; // 801E1AAC
  c->r[6]=c->r[6]+0x00001814u; // 801E1AB0
  c->r[7]=c->r[31]+0x00000008u; // 801E1AB4
  c->lr=0x801E1ABCu; f_8035526C(c); // 801E1AB8
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1ABC
L_801E1AC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1AC4
  c->lr=c->r[0]; // 801E1AC8
  c->r[1]=c->r[1]+0x00000010u; // 801E1ACC
  return; // 801E1AD0
}

// fn_801E1AD4
void f_801E1AD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1AD4
  c->r[0]=c->lr; // 801E1AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1ADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1AE0
  c->r[31]=c->r[3]|c->r[3]; // 801E1AE4
  c->lr=0x801E1AECu; f_801E2F9C(c); // 801E1AE8
  cmps(c,0,(int32_t)c->r[3],0); // 801E1AEC
  if (crb(c,2)) { goto L_801E1B10; } // 801E1AF0
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801E1AF4
  c->lr=0x801E1AFCu; f_801E2FAC(c); // 801E1AF8
  c->r[4]=0u+0x801E0000u; // 801E1AFC
  c->r[4]=c->r[4]+0x00001814u; // 801E1B00
  c->r[5]=c->r[31]+0x00000008u; // 801E1B04
  c->lr=0x801E1B0Cu; f_80356B98(c); // 801E1B08
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1B0C
L_801E1B10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1B14
  c->lr=c->r[0]; // 801E1B18
  c->r[1]=c->r[1]+0x00000010u; // 801E1B1C
  return; // 801E1B20
}

// fn_801E1B24
void f_801E1B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1B24
  c->r[0]=c->lr; // 801E1B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1B30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E1B34
  c->r[30]=c->r[3]|c->r[3]; // 801E1B38
  c->lr=0x801E1B40u; f_801E2F9C(c); // 801E1B3C
  cmps(c,0,(int32_t)c->r[3],0); // 801E1B40
  if (crb(c,2)) { goto L_801E1B70; } // 801E1B44
  c->r[31]=R32(c->r[30]+0x000000DCu); // 801E1B48
  c->r[3]=c->r[31]|c->r[31]; // 801E1B4C
  c->lr=0x801E1B54u; f_801E2FAC(c); // 801E1B50
  c->r[4]=0u+0x00000000u; // 801E1B54
  c->r[5]=c->r[31]+0x00000064u; // 801E1B58
  c->r[6]=0u+0x801E0000u; // 801E1B5C
  c->r[6]=c->r[6]+0x00001814u; // 801E1B60
  c->r[7]=c->r[30]+0x00000008u; // 801E1B64
  c->lr=0x801E1B6Cu; f_80355060(c); // 801E1B68
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801E1B6C
L_801E1B70:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1B70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E1B74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1B78
  c->lr=c->r[0]; // 801E1B7C
  c->r[1]=c->r[1]+0x00000010u; // 801E1B80
  return; // 801E1B84
}

// fn_801E1B88
void f_801E1B88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1B88
  c->r[0]=c->lr; // 801E1B8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1B90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1B94
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1B98
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1B9C
  c->r[29]=c->r[3]|c->r[3]; // 801E1BA0
  c->lr=0x801E1BA8u; f_801E2F9C(c); // 801E1BA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E1BA8
  if (crb(c,2)) { goto L_801E1BFC; } // 801E1BAC
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1BB0
  c->r[30]=c->r[3]+0x00000064u; // 801E1BB4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801E1BB8
  cmps(c,0,(int32_t)c->r[0],0); // 801E1BBC
  if (!crb(c,2)) { goto L_801E1BD0; } // 801E1BC0
  c->r[0]=0u+0x00000002u; // 801E1BC4
  W32(c->r[13]+0xFFFFBB10u,c->r[0]); // 801E1BC8
  goto L_801E1BFC; // 801E1BCC
L_801E1BD0:;
  c->lr=0x801E1BD4u; f_801E2FB4(c); // 801E1BD0
  c->r[31]=c->r[3]|c->r[3]; // 801E1BD4
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1BD8
  c->lr=0x801E1BE0u; f_801E2FAC(c); // 801E1BDC
  c->r[4]=c->r[31]|c->r[31]; // 801E1BE0
  c->r[5]=c->r[30]|c->r[30]; // 801E1BE4
  c->r[6]=0u+0x801E0000u; // 801E1BE8
  c->r[6]=c->r[6]+0x00001814u; // 801E1BEC
  c->r[7]=c->r[29]+0x00000008u; // 801E1BF0
  c->lr=0x801E1BF8u; f_80355060(c); // 801E1BF4
  W32(c->r[29]+0x000000C8u,c->r[3]); // 801E1BF8
L_801E1BFC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1BFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1C00
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1C04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1C08
  c->lr=c->r[0]; // 801E1C0C
  c->r[1]=c->r[1]+0x00000020u; // 801E1C10
  return; // 801E1C14
}

// fn_801E1C18
void f_801E1C18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1C18
  c->r[0]=c->lr; // 801E1C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1C20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1C24
  c->r[31]=c->r[3]|c->r[3]; // 801E1C28
  c->lr=0x801E1C30u; f_801E2F9C(c); // 801E1C2C
  cmps(c,0,(int32_t)c->r[3],0); // 801E1C30
  if (crb(c,2)) { goto L_801E1C5C; } // 801E1C34
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801E1C38
  c->lr=0x801E1C40u; f_801E2FAC(c); // 801E1C3C
  c->r[4]=0u+0x0000003Fu; // 801E1C40
  c->r[5]=0u+0x00000000u; // 801E1C44
  c->r[6]=0u+0x801E0000u; // 801E1C48
  c->r[6]=c->r[6]+0x00001814u; // 801E1C4C
  c->r[7]=c->r[31]+0x00000008u; // 801E1C50
  c->lr=0x801E1C58u; f_80354AB8(c); // 801E1C54
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1C58
L_801E1C5C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1C5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1C60
  c->lr=c->r[0]; // 801E1C64
  c->r[1]=c->r[1]+0x00000010u; // 801E1C68
  return; // 801E1C6C
}

// fn_801E1C70
void f_801E1C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1C70
  c->r[0]=c->lr; // 801E1C74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1C78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1C7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1C80
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1C84
  c->r[29]=c->r[3]|c->r[3]; // 801E1C88
  c->lr=0x801E1C90u; f_801E2F9C(c); // 801E1C8C
  cmps(c,0,(int32_t)c->r[3],0); // 801E1C90
  if (crb(c,2)) { goto L_801E1CEC; } // 801E1C94
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1C98
  c->lr=0x801E1CA0u; f_801E2FD4(c); // 801E1C9C
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E1CA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E1CA4
  c->ctr=c->r[12]; // 801E1CA8
  if (true) { c->lr=0x801E1CB0u; dispatch(c,c->ctr); } // 801E1CAC
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1CB0
  c->lr=0x801E1CB8u; f_801E2FBC(c); // 801E1CB4
  c->r[30]=c->r[3]|c->r[3]; // 801E1CB8
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1CBC
  c->lr=0x801E1CC4u; f_801E2FD4(c); // 801E1CC0
  c->r[31]=c->r[3]|c->r[3]; // 801E1CC4
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1CC8
  c->lr=0x801E1CD0u; f_801E2FAC(c); // 801E1CCC
  c->r[4]=c->r[31]+0x00000008u; // 801E1CD0
  c->r[5]=rotl(c->r[30],0)&0x000000FFu; // 801E1CD4
  c->r[6]=0u+0x801E0000u; // 801E1CD8
  c->r[6]=c->r[6]+0x00001814u; // 801E1CDC
  c->r[7]=c->r[29]+0x00000008u; // 801E1CE0
  c->lr=0x801E1CE8u; f_80355D48(c); // 801E1CE4
  W32(c->r[29]+0x000000C8u,c->r[3]); // 801E1CE8
L_801E1CEC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1CEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1CF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1CF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1CF8
  c->lr=c->r[0]; // 801E1CFC
  c->r[1]=c->r[1]+0x00000020u; // 801E1D00
  return; // 801E1D04
}

// fn_801E1D08
void f_801E1D08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1D08
  c->r[0]=c->lr; // 801E1D0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1D10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1D14
  c->r[31]=c->r[3]|c->r[3]; // 801E1D18
  c->lr=0x801E1D20u; f_801E2F9C(c); // 801E1D1C
  cmps(c,0,(int32_t)c->r[3],0); // 801E1D20
  if (crb(c,2)) { goto L_801E1D48; } // 801E1D24
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801E1D28
  c->lr=0x801E1D30u; f_801E2FD4(c); // 801E1D2C
  c->r[3]=c->r[3]+0x00000008u; // 801E1D30
  c->r[4]=0u+0x801E0000u; // 801E1D34
  c->r[4]=c->r[4]+0x00001814u; // 801E1D38
  c->r[5]=c->r[31]+0x00000008u; // 801E1D3C
  c->lr=0x801E1D44u; f_80355F1C(c); // 801E1D40
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1D44
L_801E1D48:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1D48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1D4C
  c->lr=c->r[0]; // 801E1D50
  c->r[1]=c->r[1]+0x00000010u; // 801E1D54
  return; // 801E1D58
}

// fn_801E1D5C
void f_801E1D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1D5C
  c->r[0]=c->lr; // 801E1D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1D64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1D68
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E1D6C
  c->r[30]=c->r[3]|c->r[3]; // 801E1D70
  c->lr=0x801E1D78u; f_801E2F9C(c); // 801E1D74
  cmps(c,0,(int32_t)c->r[3],0); // 801E1D78
  if (crb(c,2)) { goto L_801E1DA8; } // 801E1D7C
  c->r[31]=R32(c->r[30]+0x000000DCu); // 801E1D80
  c->r[3]=c->r[31]|c->r[31]; // 801E1D84
  c->lr=0x801E1D8Cu; f_801E2FD4(c); // 801E1D88
  c->r[3]=c->r[3]+0x00000008u; // 801E1D8C
  c->r[4]=c->r[31]+0x00000064u; // 801E1D90
  c->r[5]=0u+0x801E0000u; // 801E1D94
  c->r[5]=c->r[5]+0x00001814u; // 801E1D98
  c->r[6]=c->r[30]+0x00000008u; // 801E1D9C
  c->lr=0x801E1DA4u; f_803556EC(c); // 801E1DA0
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801E1DA4
L_801E1DA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1DA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E1DAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1DB0
  c->lr=c->r[0]; // 801E1DB4
  c->r[1]=c->r[1]+0x00000010u; // 801E1DB8
  return; // 801E1DBC
}

// fn_801E1DC0
void f_801E1DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1DC0
  c->r[0]=c->lr; // 801E1DC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1DC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1DCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1DD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1DD4
  c->r[29]=c->r[3]|c->r[3]; // 801E1DD8
  c->lr=0x801E1DE0u; f_801E2F9C(c); // 801E1DDC
  cmps(c,0,(int32_t)c->r[3],0); // 801E1DE0
  if (crb(c,2)) { goto L_801E1E28; } // 801E1DE4
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1DE8
  c->lr=0x801E1DF0u; f_801E2FDC(c); // 801E1DEC
  c->r[30]=c->r[3]|c->r[3]; // 801E1DF0
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1DF4
  c->lr=0x801E1DFCu; f_801E2FB4(c); // 801E1DF8
  c->r[31]=c->r[3]|c->r[3]; // 801E1DFC
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1E00
  c->lr=0x801E1E08u; f_801E2FD4(c); // 801E1E04
  c->r[3]=c->r[3]+0x00000008u; // 801E1E08
  c->r[4]=c->r[31]|c->r[31]; // 801E1E0C
  c->r[5]=c->r[30]|c->r[30]; // 801E1E10
  c->r[6]=0u+0x801E0000u; // 801E1E14
  c->r[6]=c->r[6]+0x00001814u; // 801E1E18
  c->r[7]=c->r[29]+0x00000008u; // 801E1E1C
  c->lr=0x801E1E24u; f_80354E58(c); // 801E1E20
  W32(c->r[29]+0x000000C8u,c->r[3]); // 801E1E24
L_801E1E28:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1E28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1E2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1E30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1E34
  c->lr=c->r[0]; // 801E1E38
  c->r[1]=c->r[1]+0x00000020u; // 801E1E3C
  return; // 801E1E40
}

// fn_801E1E44
void f_801E1E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1E44
  c->r[0]=c->lr; // 801E1E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1E54
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1E58
  c->r[29]=c->r[3]|c->r[3]; // 801E1E5C
  c->lr=0x801E1E64u; f_801E2F9C(c); // 801E1E60
  cmps(c,0,(int32_t)c->r[3],0); // 801E1E64
  if (crb(c,2)) { goto L_801E1EAC; } // 801E1E68
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1E6C
  c->lr=0x801E1E74u; f_801E2FDC(c); // 801E1E70
  c->r[30]=c->r[3]|c->r[3]; // 801E1E74
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1E78
  c->lr=0x801E1E80u; f_801E2FB4(c); // 801E1E7C
  c->r[31]=c->r[3]|c->r[3]; // 801E1E80
  c->r[3]=R32(c->r[29]+0x000000DCu); // 801E1E84
  c->lr=0x801E1E8Cu; f_801E2FD4(c); // 801E1E88
  c->r[3]=c->r[3]+0x00000008u; // 801E1E8C
  c->r[4]=c->r[31]|c->r[31]; // 801E1E90
  c->r[5]=c->r[30]|c->r[30]; // 801E1E94
  c->r[6]=0u+0x801E0000u; // 801E1E98
  c->r[6]=c->r[6]+0x00001814u; // 801E1E9C
  c->r[7]=c->r[29]+0x00000008u; // 801E1EA0
  c->lr=0x801E1EA8u; f_80354F38(c); // 801E1EA4
  W32(c->r[29]+0x000000C8u,c->r[3]); // 801E1EA8
L_801E1EAC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E1EAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E1EB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E1EB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E1EB8
  c->lr=c->r[0]; // 801E1EBC
  c->r[1]=c->r[1]+0x00000020u; // 801E1EC0
  return; // 801E1EC4
}

// fn_801E1EC8
void f_801E1EC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1EC8
  c->r[0]=c->lr; // 801E1ECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1ED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1ED4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E1ED8
  c->r[30]=c->r[3]|c->r[3]; // 801E1EDC
  c->lr=0x801E1EE4u; f_801E2F9C(c); // 801E1EE0
  cmps(c,0,(int32_t)c->r[3],0); // 801E1EE4
  if (crb(c,2)) { goto L_801E1F18; } // 801E1EE8
  c->r[3]=R32(c->r[30]+0x000000E0u); // 801E1EEC
  c->lr=0x801E1EF4u; f_801E2FAC(c); // 801E1EF0
  c->r[31]=c->r[3]|c->r[3]; // 801E1EF4
  c->r[3]=R32(c->r[30]+0x000000DCu); // 801E1EF8
  c->lr=0x801E1F00u; f_801E2FAC(c); // 801E1EFC
  c->r[4]=c->r[31]|c->r[31]; // 801E1F00
  c->r[5]=0u+0x801E0000u; // 801E1F04
  c->r[5]=c->r[5]+0x00001814u; // 801E1F08
  c->r[6]=c->r[30]+0x00000008u; // 801E1F0C
  c->lr=0x801E1F14u; f_80355504(c); // 801E1F10
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801E1F14
L_801E1F18:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1F18
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E1F1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1F20
  c->lr=c->r[0]; // 801E1F24
  c->r[1]=c->r[1]+0x00000010u; // 801E1F28
  return; // 801E1F2C
}

// fn_801E1F30
void f_801E1F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1F30
  c->r[0]=c->lr; // 801E1F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E1F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E1F3C
  c->r[31]=c->r[3]|c->r[3]; // 801E1F40
  c->lr=0x801E1F48u; f_801E2F9C(c); // 801E1F44
  cmps(c,0,(int32_t)c->r[3],0); // 801E1F48
  if (crb(c,2)) { goto L_801E1F6C; } // 801E1F4C
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801E1F50
  c->lr=0x801E1F58u; f_801E2FAC(c); // 801E1F54
  c->r[4]=0u+0x801E0000u; // 801E1F58
  c->r[4]=c->r[4]+0x00001814u; // 801E1F5C
  c->r[5]=c->r[31]+0x00000008u; // 801E1F60
  c->lr=0x801E1F68u; f_80354C58(c); // 801E1F64
  W32(c->r[31]+0x000000C8u,c->r[3]); // 801E1F68
L_801E1F6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E1F6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E1F70
  c->lr=c->r[0]; // 801E1F74
  c->r[1]=c->r[1]+0x00000010u; // 801E1F78
  return; // 801E1F7C
}

// fn_801E1F80
void f_801E1F80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E1F80
  c->r[0]=c->lr; // 801E1F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E1F88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E1F8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E1F90
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E1F94
  c->r[29]=c->r[3]|c->r[3]; // 801E1F98
  c->r[30]=c->r[4]|c->r[4]; // 801E1F9C
  c->r[31]=c->r[5]|c->r[5]; // 801E1FA0
  c->lr=0x801E1FA8u; f_803565B8(c); // 801E1FA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E1FA8
  if (crb(c,2)) { goto L_801E1FB8; } // 801E1FAC
  c->r[3]=0u+0x00000000u; // 801E1FB0
  goto L_801E2004; // 801E1FB4
L_801E1FB8:;
  c->r[0]=0u+0x00000000u; // 801E1FB8
  W32(c->r[29]+0x00001E98u,c->r[0]); // 801E1FBC
  W32(c->r[29]+0x00001EE4u,c->r[0]); // 801E1FC0
  W32(c->r[29]+0x00001EE4u,c->r[30]); // 801E1FC4
  W32(c->r[29]+0x00001EE8u,c->r[31]); // 801E1FC8
  c->r[3]=c->r[29]+0x00001E9Cu; // 801E1FCC
  c->lr=0x801E1FD4u; f_80356DAC(c); // 801E1FD0
  cmps(c,0,(int32_t)c->r[3],0); // 801E1FD4
  if (crb(c,2)) { goto L_801E1FE4; } // 801E1FD8
  c->r[3]=0u+0x00000000u; // 801E1FDC
  goto L_801E2004; // 801E1FE0
L_801E1FE4:;
  c->r[3]=c->r[29]+0x00001E9Cu; // 801E1FE4
  c->r[4]=c->r[13]+0xFFFF9C90u; // 801E1FE8
  c->lr=0x801E1FF0u; f_802E964C(c); // 801E1FEC
  c->r[3]=c->r[29]|c->r[29]; // 801E1FF0
  c->r[4]=c->r[29]+0x00001E9Cu; // 801E1FF4
  c->lr=0x801E1FFCu; f_801E24BC(c); // 801E1FF8
  W32(c->r[29]+0x00001EE0u,c->r[3]); // 801E1FFC
  c->r[3]=0u+0x00000001u; // 801E2000
L_801E2004:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2004
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2008
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E200C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2010
  c->lr=c->r[0]; // 801E2014
  c->r[1]=c->r[1]+0x00000020u; // 801E2018
  return; // 801E201C
}

// fn_801E2020
void f_801E2020(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2020
  c->r[0]=c->lr; // 801E2024
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2028
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E202C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2030
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2034
  c->r[29]=c->r[3]|c->r[3]; // 801E2038
  c->r[30]=0u+0x00000000u; // 801E203C
  c->r[31]=c->r[3]+0x00000958u; // 801E2040
L_801E2044:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2044
  c->r[4]=c->r[31]|c->r[31]; // 801E2048
  c->lr=0x801E2050u; f_801E23B0(c); // 801E204C
  c->r[31]=c->r[31]+0x00000068u; // 801E2050
  c->r[30]=c->r[30]+0x00000001u; // 801E2054
  cmpu(c,0,c->r[30],0x00000010u); // 801E2058
  if (crb(c,0)) { IRQCHK(c); goto L_801E2044; } // 801E205C
  c->r[30]=0u+0x00000000u; // 801E2060
  c->r[31]=c->r[29]+0x00000FD8u; // 801E2064
L_801E2068:;
  c->r[3]=c->r[29]|c->r[29]; // 801E2068
  c->r[4]=c->r[31]|c->r[31]; // 801E206C
  c->lr=0x801E2074u; f_801E2188(c); // 801E2070
  c->r[31]=c->r[31]+0x000000ECu; // 801E2074
  c->r[30]=c->r[30]+0x00000001u; // 801E2078
  cmpu(c,0,c->r[30],0x00000010u); // 801E207C
  if (crb(c,0)) { IRQCHK(c); goto L_801E2068; } // 801E2080
  c->r[30]=0u+0x00000000u; // 801E2084
  c->r[31]=c->r[29]+0x00000018u; // 801E2088
L_801E208C:;
  c->r[3]=c->r[29]|c->r[29]; // 801E208C
  c->r[4]=c->r[31]|c->r[31]; // 801E2090
  c->lr=0x801E2098u; f_801E230C(c); // 801E2094
  c->r[31]=c->r[31]+0x00000094u; // 801E2098
  c->r[30]=c->r[30]+0x00000001u; // 801E209C
  cmpu(c,0,c->r[30],0x00000010u); // 801E20A0
  if (crb(c,0)) { IRQCHK(c); goto L_801E208C; } // 801E20A4
  c->r[31]=0u+0x00000000u; // 801E20A8
  W32(c->r[29]+0x00001E98u,c->r[31]); // 801E20AC
  c->r[3]=c->r[29]|c->r[29]; // 801E20B0
  c->lr=0x801E20B8u; f_801E2FE4(c); // 801E20B4
  W32(c->r[29]+0x00001EE4u,c->r[31]); // 801E20B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E20BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E20C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E20C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E20C8
  c->lr=c->r[0]; // 801E20CC
  c->r[1]=c->r[1]+0x00000020u; // 801E20D0
  return; // 801E20D4
}

// fn_801E20D8
void f_801E20D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E20D8
  c->r[0]=c->lr; // 801E20DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E20E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E20E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E20E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E20EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E20F0
  c->r[28]=c->r[3]|c->r[3]; // 801E20F4
  c->r[29]=c->r[4]|c->r[4]; // 801E20F8
  c->r[30]=0u+0x00000000u; // 801E20FC
  c->r[31]=c->r[3]+0x00000FD8u; // 801E2100
L_801E2104:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2104
  c->lr=0x801E210Cu; f_801E3078(c); // 801E2108
  cmps(c,0,(int32_t)c->r[3],0); // 801E210C
  if (crb(c,2)) { goto L_801E2154; } // 801E2110
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)236); // 801E2114
  c->r[3]=c->r[28]+c->r[0]; // 801E2118
  c->r[31]=c->r[3]+0x00000FD8u; // 801E211C
  c->r[3]=c->r[31]|c->r[31]; // 801E2120
  c->lr=0x801E2128u; f_801E306C(c); // 801E2124
  c->r[3]=c->r[31]|c->r[31]; // 801E2128
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E212C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E2130
  c->ctr=c->r[12]; // 801E2134
  if (true) { c->lr=0x801E213Cu; dispatch(c,c->ctr); } // 801E2138
  cmps(c,0,(int32_t)c->r[29],0); // 801E213C
  if (crb(c,2)) { goto L_801E214C; } // 801E2140
  c->r[0]=c->r[30]+0x00000001u; // 801E2144
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E2148
L_801E214C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E214C
  goto L_801E2168; // 801E2150
L_801E2154:;
  c->r[31]=c->r[31]+0x000000ECu; // 801E2154
  c->r[30]=c->r[30]+0x00000001u; // 801E2158
  cmpu(c,0,c->r[30],0x00000010u); // 801E215C
  if (crb(c,0)) { IRQCHK(c); goto L_801E2104; } // 801E2160
  c->r[3]=0u+0x00000000u; // 801E2164
L_801E2168:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2168
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E216C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2170
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2174
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2178
  c->lr=c->r[0]; // 801E217C
  c->r[1]=c->r[1]+0x00000020u; // 801E2180
  return; // 801E2184
}

// fn_801E2188
void f_801E2188(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2188
  c->r[0]=c->lr; // 801E218C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2190
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2194
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2198
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E219C
  c->r[29]=c->r[3]|c->r[3]; // 801E21A0
  c->r[30]=c->r[4]|c->r[4]; // 801E21A4
  c->r[3]=c->r[30]|c->r[30]; // 801E21A8
  c->lr=0x801E21B0u; f_801E30AC(c); // 801E21AC
  cmps(c,0,(int32_t)c->r[3],0); // 801E21B0
  if (crb(c,2)) { goto L_801E21D4; } // 801E21B4
  c->r[3]=c->r[30]|c->r[30]; // 801E21B8
  c->lr=0x801E21C0u; f_801E30A4(c); // 801E21BC
  c->r[31]=c->r[3]|c->r[3]; // 801E21C0
  c->r[3]=c->r[30]|c->r[30]; // 801E21C4
  c->lr=0x801E21CCu; f_801E30AC(c); // 801E21C8
  c->r[4]=c->r[31]|c->r[31]; // 801E21CC
  c->lr=0x801E21D4u; f_801E309C(c); // 801E21D0
L_801E21D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E21D4
  c->lr=0x801E21DCu; f_801E30A4(c); // 801E21D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E21DC
  if (crb(c,2)) { goto L_801E2200; } // 801E21E0
  c->r[3]=c->r[30]|c->r[30]; // 801E21E4
  c->lr=0x801E21ECu; f_801E30AC(c); // 801E21E8
  c->r[31]=c->r[3]|c->r[3]; // 801E21EC
  c->r[3]=c->r[30]|c->r[30]; // 801E21F0
  c->lr=0x801E21F8u; f_801E30A4(c); // 801E21F4
  c->r[4]=c->r[31]|c->r[31]; // 801E21F8
  c->lr=0x801E2200u; f_801E3094(c); // 801E21FC
L_801E2200:;
  c->r[3]=R32(c->r[29]+0x00001E98u); // 801E2200
  cmpu(c,0,c->r[3],c->r[30]); // 801E2204
  if (!crb(c,2)) { goto L_801E2224; } // 801E2208
  c->lr=0x801E2210u; f_801E30A4(c); // 801E220C
  W32(c->r[29]+0x00001E98u,c->r[3]); // 801E2210
  cmps(c,0,(int32_t)c->r[3],0); // 801E2214
  if (crb(c,2)) { goto L_801E2224; } // 801E2218
  c->r[4]=0u+0x00000000u; // 801E221C
  c->lr=0x801E2224u; f_801E3094(c); // 801E2220
L_801E2224:;
  c->r[3]=c->r[30]|c->r[30]; // 801E2224
  c->lr=0x801E222Cu; f_801E3088(c); // 801E2228
  c->r[3]=c->r[30]|c->r[30]; // 801E222C
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E2230
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E2234
  c->ctr=c->r[12]; // 801E2238
  if (true) { c->lr=0x801E2240u; dispatch(c,c->ctr); } // 801E223C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2240
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2244
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2248
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E224C
  c->lr=c->r[0]; // 801E2250
  c->r[1]=c->r[1]+0x00000020u; // 801E2254
  return; // 801E2258
}

// fn_801E225C
void f_801E225C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E225C
  c->r[0]=c->lr; // 801E2260
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2264
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2268
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E226C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2270
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2274
  c->r[28]=c->r[3]|c->r[3]; // 801E2278
  c->r[29]=c->r[4]|c->r[4]; // 801E227C
  c->r[30]=0u+0x00000000u; // 801E2280
  c->r[31]=c->r[3]+0x00000018u; // 801E2284
L_801E2288:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2288
  c->lr=0x801E2290u; f_801E3078(c); // 801E228C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2290
  if (crb(c,2)) { goto L_801E22D8; } // 801E2294
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)148); // 801E2298
  c->r[3]=c->r[28]+c->r[0]; // 801E229C
  c->r[31]=c->r[3]+0x00000018u; // 801E22A0
  c->r[3]=c->r[31]|c->r[31]; // 801E22A4
  c->lr=0x801E22ACu; f_801E306C(c); // 801E22A8
  c->r[3]=c->r[31]|c->r[31]; // 801E22AC
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E22B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E22B4
  c->ctr=c->r[12]; // 801E22B8
  if (true) { c->lr=0x801E22C0u; dispatch(c,c->ctr); } // 801E22BC
  cmps(c,0,(int32_t)c->r[29],0); // 801E22C0
  if (crb(c,2)) { goto L_801E22D0; } // 801E22C4
  c->r[0]=c->r[30]+0x00000001u; // 801E22C8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E22CC
L_801E22D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E22D0
  goto L_801E22EC; // 801E22D4
L_801E22D8:;
  c->r[31]=c->r[31]+0x00000094u; // 801E22D8
  c->r[30]=c->r[30]+0x00000001u; // 801E22DC
  cmpu(c,0,c->r[30],0x00000010u); // 801E22E0
  if (crb(c,0)) { IRQCHK(c); goto L_801E2288; } // 801E22E4
  c->r[3]=0u+0x00000000u; // 801E22E8
L_801E22EC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E22EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E22F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E22F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E22F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E22FC
  c->lr=c->r[0]; // 801E2300
  c->r[1]=c->r[1]+0x00000020u; // 801E2304
  return; // 801E2308
}

// fn_801E230C
void f_801E230C(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 801E230C
  f_801E3088(c); return; // 801E2310
}

// fn_801E2314
void f_801E2314(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2314
  c->r[0]=c->lr; // 801E2318
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E231C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2320
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2324
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2328
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E232C
  c->r[28]=c->r[3]|c->r[3]; // 801E2330
  c->r[29]=c->r[4]|c->r[4]; // 801E2334
  c->r[30]=0u+0x00000000u; // 801E2338
  c->r[31]=c->r[3]+0x00000958u; // 801E233C
L_801E2340:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2340
  c->lr=0x801E2348u; f_801E3078(c); // 801E2344
  cmps(c,0,(int32_t)c->r[3],0); // 801E2348
  if (crb(c,2)) { goto L_801E237C; } // 801E234C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)104); // 801E2350
  c->r[3]=c->r[28]+c->r[0]; // 801E2354
  c->r[31]=c->r[3]+0x00000958u; // 801E2358
  c->r[3]=c->r[31]|c->r[31]; // 801E235C
  c->lr=0x801E2364u; f_801E306C(c); // 801E2360
  cmps(c,0,(int32_t)c->r[29],0); // 801E2364
  if (crb(c,2)) { goto L_801E2374; } // 801E2368
  c->r[0]=c->r[30]+0x00000001u; // 801E236C
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E2370
L_801E2374:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2374
  goto L_801E2390; // 801E2378
L_801E237C:;
  c->r[31]=c->r[31]+0x00000068u; // 801E237C
  c->r[30]=c->r[30]+0x00000001u; // 801E2380
  cmpu(c,0,c->r[30],0x00000010u); // 801E2384
  if (crb(c,0)) { IRQCHK(c); goto L_801E2340; } // 801E2388
  c->r[3]=0u+0x00000000u; // 801E238C
L_801E2390:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2390
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2394
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2398
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E239C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E23A0
  c->lr=c->r[0]; // 801E23A4
  c->r[1]=c->r[1]+0x00000020u; // 801E23A8
  return; // 801E23AC
}

// fn_801E23B0
void f_801E23B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E23B0
  c->r[0]=c->lr; // 801E23B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E23B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E23BC
  c->r[31]=c->r[4]|c->r[4]; // 801E23C0
  cmps(c,0,(int32_t)c->r[4],0); // 801E23C4
  if (crb(c,2)) { goto L_801E240C; } // 801E23C8
  c->r[3]=c->r[31]|c->r[31]; // 801E23CC
  c->lr=0x801E23D4u; f_801E2FD4(c); // 801E23D0
  cmps(c,0,(int32_t)c->r[3],0); // 801E23D4
  if (crb(c,2)) { goto L_801E23E8; } // 801E23D8
  c->r[3]=c->r[31]|c->r[31]; // 801E23DC
  c->lr=0x801E23E4u; f_801E2FD4(c); // 801E23E0
  c->lr=0x801E23E8u; f_801E3088(c); // 801E23E4
L_801E23E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E23E8
  c->lr=0x801E23F0u; f_801E30F0(c); // 801E23EC
  c->r[3]=c->r[31]|c->r[31]; // 801E23F0
  c->lr=0x801E23F8u; f_801E3088(c); // 801E23F4
  c->r[3]=c->r[31]|c->r[31]; // 801E23F8
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E23FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E2400
  c->ctr=c->r[12]; // 801E2404
  if (true) { c->lr=0x801E240Cu; dispatch(c,c->ctr); } // 801E2408
L_801E240C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E240C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2410
  c->lr=c->r[0]; // 801E2414
  c->r[1]=c->r[1]+0x00000010u; // 801E2418
  return; // 801E241C
}

// fn_801E2420
void f_801E2420(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E2420
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)104); // 801E2424
  c->r[3]=c->r[3]+c->r[0]; // 801E2428
  c->r[3]=c->r[3]+0x00000958u; // 801E242C
  return; // 801E2430
}

// fn_801E2434
void f_801E2434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2434
  c->r[0]=c->lr; // 801E2438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E243C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2440
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2444
  c->r[30]=c->r[4]|c->r[4]; // 801E2448
  c->r[31]=R32(c->r[3]+0x00001E98u); // 801E244C
  cmps(c,0,(int32_t)c->r[31],0); // 801E2450
  if (!crb(c,2)) { goto L_801E249C; } // 801E2454
  W32(c->r[3]+0x00001E98u,c->r[4]); // 801E2458
  goto L_801E24A4; // 801E245C
  goto L_801E249C; // 801E2460
L_801E2464:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2464
  c->lr=0x801E246Cu; f_801E30A4(c); // 801E2468
  cmps(c,0,(int32_t)c->r[3],0); // 801E246C
  if (!crb(c,2)) { goto L_801E2490; } // 801E2470
  c->r[3]=c->r[31]|c->r[31]; // 801E2474
  c->r[4]=c->r[30]|c->r[30]; // 801E2478
  c->lr=0x801E2480u; f_801E309C(c); // 801E247C
  c->r[3]=c->r[30]|c->r[30]; // 801E2480
  c->r[4]=c->r[31]|c->r[31]; // 801E2484
  c->lr=0x801E248Cu; f_801E3094(c); // 801E2488
  goto L_801E24A4; // 801E248C
L_801E2490:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2490
  c->lr=0x801E2498u; f_801E30A4(c); // 801E2494
  c->r[31]=c->r[3]|c->r[3]; // 801E2498
L_801E249C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E249C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2464; } // 801E24A0
L_801E24A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E24A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E24A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E24AC
  c->lr=c->r[0]; // 801E24B0
  c->r[1]=c->r[1]+0x00000010u; // 801E24B4
  return; // 801E24B8
}

// fn_801E24BC
void f_801E24BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E24BC
  c->r[0]=c->lr; // 801E24C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E24C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E24C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E24CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E24D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E24D4
  c->r[28]=c->r[3]|c->r[3]; // 801E24D8
  c->r[29]=c->r[4]|c->r[4]; // 801E24DC
  c->r[3]=c->r[29]|c->r[29]; // 801E24E0
  c->lr=0x801E24E8u; f_802F0250(c); // 801E24E4
  c->r[31]=c->r[3]|c->r[3]; // 801E24E8
  c->r[3]=c->r[28]|c->r[28]; // 801E24EC
  c->r[4]=c->r[1]+0x00000008u; // 801E24F0
  c->lr=0x801E24F8u; f_801E2314(c); // 801E24F4
  c->r[30]=c->r[3]|c->r[3]; // 801E24F8
  c->r[4]=c->r[29]|c->r[29]; // 801E24FC
  c->lr=0x801E2504u; f_801E3110(c); // 801E2500
  c->r[3]=c->r[29]+c->r[31]; // 801E2504
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801E2508
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E250C
  cmps(c,0,(int32_t)c->r[0],47); // 801E2510
  if (!crb(c,2)) { goto L_801E2528; } // 801E2514
  c->r[3]=c->r[30]|c->r[30]; // 801E2518
  c->r[4]=0u+0x00000001u; // 801E251C
  c->lr=0x801E2524u; f_801E3108(c); // 801E2520
  goto L_801E254C; // 801E2524
L_801E2528:;
  c->r[3]=c->r[30]|c->r[30]; // 801E2528
  c->r[4]=0u+0x00000002u; // 801E252C
  c->lr=0x801E2534u; f_801E3108(c); // 801E2530
  c->r[3]=c->r[28]|c->r[28]; // 801E2534
  c->r[4]=0u+0x00000000u; // 801E2538
  c->lr=0x801E2540u; f_801E225C(c); // 801E253C
  c->r[4]=c->r[3]|c->r[3]; // 801E2540
  c->r[3]=c->r[30]|c->r[30]; // 801E2544
  c->lr=0x801E254Cu; f_801E3100(c); // 801E2548
L_801E254C:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 801E254C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2550
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2554
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2558
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E255C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2560
  c->lr=c->r[0]; // 801E2564
  c->r[1]=c->r[1]+0x00000020u; // 801E2568
  return; // 801E256C
}

// fn_801E2570
void f_801E2570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2570
  c->r[0]=c->lr; // 801E2574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E257C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2580
  c->r[30]=c->r[3]|c->r[3]; // 801E2584
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801E2588
  c->r[5]=rotl(c->r[4],18)&0x0003FFFFu; // 801E258C
  c->r[4]=rotl(c->r[4],0)&0x00003FFFu; // 801E2590
  c->r[0]=0u-c->r[4]; // 801E2594
  c->r[0]=c->r[0]|c->r[4]; // 801E2598
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801E259C
  c->r[0]=c->r[5]+c->r[0]; // 801E25A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E25A4
  c->r[4]=0u+0x00000000u; // 801E25A8
  c->lr=0x801E25B0u; f_801E20D8(c); // 801E25AC
  c->r[31]=c->r[3]|c->r[3]; // 801E25B0
  c->r[4]=0u+0x00000002u; // 801E25B4
  c->lr=0x801E25BCu; f_801E312C(c); // 801E25B8
  c->r[3]=c->r[31]|c->r[31]; // 801E25BC
  c->r[4]=c->r[30]|c->r[30]; // 801E25C0
  c->lr=0x801E25C8u; f_801E3124(c); // 801E25C4
  c->r[3]=c->r[30]|c->r[30]; // 801E25C8
  c->r[4]=c->r[31]|c->r[31]; // 801E25CC
  c->lr=0x801E25D4u; f_801E2434(c); // 801E25D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E25D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E25D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E25DC
  c->lr=c->r[0]; // 801E25E0
  c->r[1]=c->r[1]+0x00000010u; // 801E25E4
  return; // 801E25E8
}

// fn_801E25EC
void f_801E25EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E25EC
  c->r[0]=c->lr; // 801E25F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E25F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E25F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E25FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2600
  c->r[29]=c->r[3]|c->r[3]; // 801E2604
  c->lr=0x801E260Cu; f_801E2420(c); // 801E2608
  c->r[31]=c->r[3]|c->r[3]; // 801E260C
  c->r[3]=c->r[29]|c->r[29]; // 801E2610
  c->r[4]=0u+0x00000000u; // 801E2614
  c->lr=0x801E261Cu; f_801E20D8(c); // 801E2618
  c->r[30]=c->r[3]|c->r[3]; // 801E261C
  c->r[4]=0u+0x00000003u; // 801E2620
  c->lr=0x801E2628u; f_801E312C(c); // 801E2624
  c->r[3]=c->r[30]|c->r[30]; // 801E2628
  c->r[4]=c->r[31]|c->r[31]; // 801E262C
  c->lr=0x801E2634u; f_801E3134(c); // 801E2630
  c->r[3]=c->r[29]|c->r[29]; // 801E2634
  c->r[4]=c->r[30]|c->r[30]; // 801E2638
  c->lr=0x801E2640u; f_801E2434(c); // 801E263C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2640
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2644
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2648
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E264C
  c->lr=c->r[0]; // 801E2650
  c->r[1]=c->r[1]+0x00000020u; // 801E2654
  return; // 801E2658
}

// fn_801E265C
void f_801E265C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E265C
  c->r[0]=c->lr; // 801E2660
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2664
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2668
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E266C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2670
  c->r[29]=c->r[3]|c->r[3]; // 801E2674
  c->lr=0x801E267Cu; f_801E2420(c); // 801E2678
  c->r[31]=c->r[3]|c->r[3]; // 801E267C
  c->r[3]=c->r[29]|c->r[29]; // 801E2680
  c->r[4]=0u+0x00000000u; // 801E2684
  c->lr=0x801E268Cu; f_801E20D8(c); // 801E2688
  c->r[30]=c->r[3]|c->r[3]; // 801E268C
  c->r[4]=0u+0x00000004u; // 801E2690
  c->lr=0x801E2698u; f_801E312C(c); // 801E2694
  c->r[3]=c->r[30]|c->r[30]; // 801E2698
  c->r[4]=c->r[31]|c->r[31]; // 801E269C
  c->lr=0x801E26A4u; f_801E3134(c); // 801E26A0
  c->r[3]=c->r[29]|c->r[29]; // 801E26A4
  c->r[4]=c->r[30]|c->r[30]; // 801E26A8
  c->lr=0x801E26B0u; f_801E2434(c); // 801E26AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E26B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E26B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E26B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E26BC
  c->lr=c->r[0]; // 801E26C0
  c->r[1]=c->r[1]+0x00000020u; // 801E26C4
  return; // 801E26C8
}

// fn_801E26CC
void f_801E26CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E26CC
  c->r[0]=c->lr; // 801E26D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E26D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E26D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E26DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E26E0
  c->r[29]=c->r[3]|c->r[3]; // 801E26E4
  c->r[30]=c->r[5]|c->r[5]; // 801E26E8
  c->lr=0x801E26F0u; f_801E2420(c); // 801E26EC
  c->r[31]=c->r[3]|c->r[3]; // 801E26F0
  cmps(c,0,(int32_t)c->r[30],0); // 801E26F4
  if (!crb(c,2)) { goto L_801E2730; } // 801E26F8
  c->r[3]=c->r[29]|c->r[29]; // 801E26FC
  c->r[4]=0u+0x00000000u; // 801E2700
  c->lr=0x801E2708u; f_801E20D8(c); // 801E2704
  c->r[30]=c->r[3]|c->r[3]; // 801E2708
  c->r[4]=0u+0x00000006u; // 801E270C
  c->lr=0x801E2714u; f_801E312C(c); // 801E2710
  c->r[3]=c->r[30]|c->r[30]; // 801E2714
  c->r[4]=c->r[31]|c->r[31]; // 801E2718
  c->lr=0x801E2720u; f_801E3134(c); // 801E271C
  c->r[3]=c->r[29]|c->r[29]; // 801E2720
  c->r[4]=c->r[30]|c->r[30]; // 801E2724
  c->lr=0x801E272Cu; f_801E2434(c); // 801E2728
  goto L_801E2738; // 801E272C
L_801E2730:;
  c->r[0]=R32(c->r[3]+0x00000064u); // 801E2730
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E2734
L_801E2738:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2738
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E273C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2740
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2744
  c->lr=c->r[0]; // 801E2748
  c->r[1]=c->r[1]+0x00000020u; // 801E274C
  return; // 801E2750
}

// fn_801E2754
void f_801E2754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2754
  c->r[0]=c->lr; // 801E2758
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E275C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2760
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2764
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2768
  c->r[29]=c->r[3]|c->r[3]; // 801E276C
  c->lr=0x801E2774u; f_801E2420(c); // 801E2770
  c->r[31]=c->r[3]|c->r[3]; // 801E2774
  c->r[4]=R32(c->r[29]+0x00001EE4u); // 801E2778
  c->r[5]=R32(c->r[29]+0x00001EE8u); // 801E277C
  c->lr=0x801E2784u; f_801E313C(c); // 801E2780
  c->r[3]=c->r[29]|c->r[29]; // 801E2784
  c->r[4]=0u+0x00000000u; // 801E2788
  c->lr=0x801E2790u; f_801E20D8(c); // 801E278C
  c->r[30]=c->r[3]|c->r[3]; // 801E2790
  c->r[4]=0u+0x00000005u; // 801E2794
  c->lr=0x801E279Cu; f_801E312C(c); // 801E2798
  c->r[3]=c->r[30]|c->r[30]; // 801E279C
  c->r[4]=c->r[31]|c->r[31]; // 801E27A0
  c->lr=0x801E27A8u; f_801E3134(c); // 801E27A4
  c->r[3]=c->r[29]|c->r[29]; // 801E27A8
  c->r[4]=c->r[30]|c->r[30]; // 801E27AC
  c->lr=0x801E27B4u; f_801E2434(c); // 801E27B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E27B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E27B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E27BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E27C0
  c->lr=c->r[0]; // 801E27C4
  c->r[1]=c->r[1]+0x00000020u; // 801E27C8
  return; // 801E27CC
}

// fn_801E27D0
void f_801E27D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E27D0
  c->r[0]=c->lr; // 801E27D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E27D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E27DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E27E0
  c->r[30]=c->r[3]|c->r[3]; // 801E27E4
  c->r[31]=c->r[4]|c->r[4]; // 801E27E8
  c->r[5]=0u+0x00000000u; // 801E27EC
  c->lr=0x801E27F4u; f_801E26CC(c); // 801E27F0
  c->r[3]=c->r[30]|c->r[30]; // 801E27F4
  c->r[4]=c->r[31]|c->r[31]; // 801E27F8
  c->lr=0x801E2800u; f_801E2754(c); // 801E27FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2800
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2804
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2808
  c->lr=c->r[0]; // 801E280C
  c->r[1]=c->r[1]+0x00000010u; // 801E2810
  return; // 801E2814
}

// fn_801E2818
void f_801E2818(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2818
  c->r[0]=c->lr; // 801E281C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2820
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2824
  c->lr=0x801E282Cu; f_801E2420(c); // 801E2828
  c->r[31]=c->r[3]|c->r[3]; // 801E282C
  c->lr=0x801E2834u; f_801E3150(c); // 801E2830
  c->r[3]=c->r[31]|c->r[31]; // 801E2834
  c->lr=0x801E283Cu; f_801E3148(c); // 801E2838
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E283C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2840
  c->lr=c->r[0]; // 801E2844
  c->r[1]=c->r[1]+0x00000010u; // 801E2848
  return; // 801E284C
}

// fn_801E2850
void f_801E2850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2850
  c->r[0]=c->lr; // 801E2854
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E285C
  c->lr=0x801E2864u; f_801E2420(c); // 801E2860
  c->r[31]=c->r[3]|c->r[3]; // 801E2864
  c->lr=0x801E286Cu; f_801E3148(c); // 801E2868
  c->lr=0x801E2870u; f_802F0250(c); // 801E286C
  c->r[4]=c->r[3]|c->r[3]; // 801E2870
  c->r[3]=c->r[31]|c->r[31]; // 801E2874
  c->r[4]=c->r[4]+0x00000001u; // 801E2878
  c->lr=0x801E2880u; f_801E315C(c); // 801E287C
  c->r[3]=c->r[31]|c->r[31]; // 801E2880
  c->lr=0x801E2888u; f_801E3148(c); // 801E2884
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E2888
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E288C
  cmps(c,0,(int32_t)c->r[0],0); // 801E2890
  if (!crb(c,2)) { goto L_801E289C; } // 801E2894
  c->r[3]=0u+0x00000000u; // 801E2898
L_801E289C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E289C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E28A0
  c->lr=c->r[0]; // 801E28A4
  c->r[1]=c->r[1]+0x00000010u; // 801E28A8
  return; // 801E28AC
}

// fn_801E28B0
void f_801E28B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E28B0
  c->r[0]=c->lr; // 801E28B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E28B8
  c->lr=0x801E28C0u; f_801E2420(c); // 801E28BC
  c->lr=0x801E28C4u; f_801E2FAC(c); // 801E28C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E28C4
  c->lr=c->r[0]; // 801E28C8
  c->r[1]=c->r[1]+0x00000010u; // 801E28CC
  return; // 801E28D0
}

// fn_801E28D4
void f_801E28D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E28D4
  c->r[0]=c->lr; // 801E28D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E28DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E28E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E28E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E28E8
  c->r[29]=c->r[3]|c->r[3]; // 801E28EC
  c->r[30]=c->r[5]|c->r[5]; // 801E28F0
  c->lr=0x801E28F8u; f_801E2420(c); // 801E28F4
  c->r[31]=c->r[3]|c->r[3]; // 801E28F8
  cmps(c,0,(int32_t)c->r[30],0); // 801E28FC
  if (!crb(c,2)) { goto L_801E2938; } // 801E2900
  c->r[3]=c->r[29]|c->r[29]; // 801E2904
  c->r[4]=0u+0x00000000u; // 801E2908
  c->lr=0x801E2910u; f_801E20D8(c); // 801E290C
  c->r[30]=c->r[3]|c->r[3]; // 801E2910
  c->r[4]=0u+0x0000000Cu; // 801E2914
  c->lr=0x801E291Cu; f_801E312C(c); // 801E2918
  c->r[3]=c->r[30]|c->r[30]; // 801E291C
  c->r[4]=c->r[31]|c->r[31]; // 801E2920
  c->lr=0x801E2928u; f_801E3134(c); // 801E2924
  c->r[3]=c->r[29]|c->r[29]; // 801E2928
  c->r[4]=c->r[30]|c->r[30]; // 801E292C
  c->lr=0x801E2934u; f_801E2434(c); // 801E2930
  goto L_801E2940; // 801E2934
L_801E2938:;
  c->r[0]=R32(c->r[3]+0x00000064u); // 801E2938
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E293C
L_801E2940:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2940
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2944
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2948
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E294C
  c->lr=c->r[0]; // 801E2950
  c->r[1]=c->r[1]+0x00000020u; // 801E2954
  return; // 801E2958
}

// fn_801E295C
void f_801E295C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E295C
  c->r[0]=c->lr; // 801E2960
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2964
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2968
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E296C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2970
  c->r[29]=c->r[3]|c->r[3]; // 801E2974
  c->lr=0x801E297Cu; f_801E2420(c); // 801E2978
  c->r[31]=c->r[3]|c->r[3]; // 801E297C
  c->r[3]=c->r[29]|c->r[29]; // 801E2980
  c->r[4]=0u+0x00000000u; // 801E2984
  c->lr=0x801E298Cu; f_801E20D8(c); // 801E2988
  c->r[30]=c->r[3]|c->r[3]; // 801E298C
  c->r[4]=0u+0x00000007u; // 801E2990
  c->lr=0x801E2998u; f_801E312C(c); // 801E2994
  c->r[3]=c->r[30]|c->r[30]; // 801E2998
  c->r[4]=c->r[31]|c->r[31]; // 801E299C
  c->lr=0x801E29A4u; f_801E3134(c); // 801E29A0
  c->r[3]=c->r[29]|c->r[29]; // 801E29A4
  c->r[4]=c->r[30]|c->r[30]; // 801E29A8
  c->lr=0x801E29B0u; f_801E2434(c); // 801E29AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E29B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E29B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E29B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E29BC
  c->lr=c->r[0]; // 801E29C0
  c->r[1]=c->r[1]+0x00000020u; // 801E29C4
  return; // 801E29C8
}

// fn_801E29CC
void f_801E29CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E29CC
  c->r[0]=c->lr; // 801E29D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E29D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E29D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E29DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E29E0
  c->r[29]=c->r[3]|c->r[3]; // 801E29E4
  c->r[30]=c->r[5]|c->r[5]; // 801E29E8
  c->lr=0x801E29F0u; f_801E2420(c); // 801E29EC
  c->r[31]=c->r[3]|c->r[3]; // 801E29F0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801E29F4
  c->lr=0x801E29FCu; f_801E316C(c); // 801E29F8
  c->r[3]=c->r[29]|c->r[29]; // 801E29FC
  c->r[4]=0u+0x00000000u; // 801E2A00
  c->lr=0x801E2A08u; f_801E20D8(c); // 801E2A04
  c->r[30]=c->r[3]|c->r[3]; // 801E2A08
  c->r[4]=0u+0x00000008u; // 801E2A0C
  c->lr=0x801E2A14u; f_801E312C(c); // 801E2A10
  c->r[3]=c->r[30]|c->r[30]; // 801E2A14
  c->r[4]=c->r[31]|c->r[31]; // 801E2A18
  c->lr=0x801E2A20u; f_801E3134(c); // 801E2A1C
  c->r[3]=c->r[29]|c->r[29]; // 801E2A20
  c->r[4]=c->r[30]|c->r[30]; // 801E2A24
  c->lr=0x801E2A2Cu; f_801E2434(c); // 801E2A28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2A2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2A30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2A34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2A38
  c->lr=c->r[0]; // 801E2A3C
  c->r[1]=c->r[1]+0x00000020u; // 801E2A40
  return; // 801E2A44
}

// fn_801E2A48
void f_801E2A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2A48
  c->r[0]=c->lr; // 801E2A4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2A50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2A54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2A58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2A5C
  c->r[29]=c->r[3]|c->r[3]; // 801E2A60
  c->lr=0x801E2A68u; f_801E2420(c); // 801E2A64
  c->r[31]=c->r[3]|c->r[3]; // 801E2A68
  c->r[3]=c->r[29]|c->r[29]; // 801E2A6C
  c->r[4]=0u+0x00000000u; // 801E2A70
  c->lr=0x801E2A78u; f_801E20D8(c); // 801E2A74
  c->r[30]=c->r[3]|c->r[3]; // 801E2A78
  c->r[4]=0u+0x00000009u; // 801E2A7C
  c->lr=0x801E2A84u; f_801E312C(c); // 801E2A80
  c->r[3]=c->r[30]|c->r[30]; // 801E2A84
  c->r[4]=c->r[31]|c->r[31]; // 801E2A88
  c->lr=0x801E2A90u; f_801E3134(c); // 801E2A8C
  c->r[3]=c->r[29]|c->r[29]; // 801E2A90
  c->r[4]=c->r[30]|c->r[30]; // 801E2A94
  c->lr=0x801E2A9Cu; f_801E2434(c); // 801E2A98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2A9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2AA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2AA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2AA8
  c->lr=c->r[0]; // 801E2AAC
  c->r[1]=c->r[1]+0x00000020u; // 801E2AB0
  return; // 801E2AB4
}

// fn_801E2AB8
void f_801E2AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2AB8
  c->r[0]=c->lr; // 801E2ABC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2AC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2AC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2AC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2ACC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2AD0
  c->r[28]=c->r[3]|c->r[3]; // 801E2AD4
  c->r[29]=c->r[5]|c->r[5]; // 801E2AD8
  c->r[30]=c->r[6]|c->r[6]; // 801E2ADC
  c->lr=0x801E2AE4u; f_801E2420(c); // 801E2AE0
  c->r[31]=c->r[3]|c->r[3]; // 801E2AE4
  cmps(c,0,(int32_t)c->r[29],0); // 801E2AE8
  if (!crb(c,2)) { goto L_801E2AF8; } // 801E2AEC
  c->r[29]=R32(c->r[28]+0x00001EE4u); // 801E2AF0
  c->r[30]=R32(c->r[28]+0x00001EE8u); // 801E2AF4
L_801E2AF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2AF8
  c->r[4]=c->r[29]|c->r[29]; // 801E2AFC
  c->r[5]=c->r[30]|c->r[30]; // 801E2B00
  c->lr=0x801E2B08u; f_801E313C(c); // 801E2B04
  c->r[3]=c->r[28]|c->r[28]; // 801E2B08
  c->r[4]=0u+0x00000000u; // 801E2B0C
  c->lr=0x801E2B14u; f_801E20D8(c); // 801E2B10
  c->r[30]=c->r[3]|c->r[3]; // 801E2B14
  c->r[4]=0u+0x0000000Au; // 801E2B18
  c->lr=0x801E2B20u; f_801E312C(c); // 801E2B1C
  c->r[3]=c->r[30]|c->r[30]; // 801E2B20
  c->r[4]=c->r[31]|c->r[31]; // 801E2B24
  c->lr=0x801E2B2Cu; f_801E3134(c); // 801E2B28
  c->r[3]=c->r[28]|c->r[28]; // 801E2B2C
  c->r[4]=c->r[30]|c->r[30]; // 801E2B30
  c->lr=0x801E2B38u; f_801E2434(c); // 801E2B34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2B38
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2B3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2B40
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2B44
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2B48
  c->lr=c->r[0]; // 801E2B4C
  c->r[1]=c->r[1]+0x00000020u; // 801E2B50
  return; // 801E2B54
}

// fn_801E2B58
void f_801E2B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2B58
  c->r[0]=c->lr; // 801E2B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2B60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2B64
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2B68
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2B6C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2B70
  c->r[28]=c->r[3]|c->r[3]; // 801E2B74
  c->r[29]=c->r[5]|c->r[5]; // 801E2B78
  c->r[30]=c->r[6]|c->r[6]; // 801E2B7C
  c->lr=0x801E2B84u; f_801E2420(c); // 801E2B80
  c->r[31]=c->r[3]|c->r[3]; // 801E2B84
  cmps(c,0,(int32_t)c->r[29],0); // 801E2B88
  if (!crb(c,2)) { goto L_801E2B98; } // 801E2B8C
  c->r[29]=R32(c->r[28]+0x00001EE4u); // 801E2B90
  c->r[30]=R32(c->r[28]+0x00001EE8u); // 801E2B94
L_801E2B98:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2B98
  c->r[4]=c->r[29]|c->r[29]; // 801E2B9C
  c->r[5]=c->r[30]|c->r[30]; // 801E2BA0
  c->lr=0x801E2BA8u; f_801E313C(c); // 801E2BA4
  c->r[3]=c->r[28]|c->r[28]; // 801E2BA8
  c->r[4]=0u+0x00000000u; // 801E2BAC
  c->lr=0x801E2BB4u; f_801E20D8(c); // 801E2BB0
  c->r[30]=c->r[3]|c->r[3]; // 801E2BB4
  c->r[4]=0u+0x0000000Bu; // 801E2BB8
  c->lr=0x801E2BC0u; f_801E312C(c); // 801E2BBC
  c->r[3]=c->r[30]|c->r[30]; // 801E2BC0
  c->r[4]=c->r[31]|c->r[31]; // 801E2BC4
  c->lr=0x801E2BCCu; f_801E3134(c); // 801E2BC8
  c->r[3]=c->r[28]|c->r[28]; // 801E2BCC
  c->r[4]=c->r[30]|c->r[30]; // 801E2BD0
  c->lr=0x801E2BD8u; f_801E2434(c); // 801E2BD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2BD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2BDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2BE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2BE4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2BE8
  c->lr=c->r[0]; // 801E2BEC
  c->r[1]=c->r[1]+0x00000020u; // 801E2BF0
  return; // 801E2BF4
}

// fn_801E2BF8
void f_801E2BF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2BF8
  c->r[0]=c->lr; // 801E2BFC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2C00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2C04
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2C08
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2C0C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2C10
  c->r[28]=c->r[3]|c->r[3]; // 801E2C14
  c->r[29]=c->r[4]|c->r[4]; // 801E2C18
  c->r[30]=c->r[5]|c->r[5]; // 801E2C1C
  c->r[31]=c->r[6]|c->r[6]; // 801E2C20
  cmps(c,0,(int32_t)c->r[5],0); // 801E2C24
  if (!crb(c,2)) { goto L_801E2C50; } // 801E2C28
  c->r[5]=0u+0x00000001u; // 801E2C2C
  c->lr=0x801E2C34u; f_801E29CC(c); // 801E2C30
  c->r[3]=c->r[28]|c->r[28]; // 801E2C34
  c->r[4]=c->r[29]|c->r[29]; // 801E2C38
  c->r[5]=0u+0x00000000u; // 801E2C3C
  c->lr=0x801E2C44u; f_801E28D4(c); // 801E2C40
  c->r[3]=c->r[28]|c->r[28]; // 801E2C44
  c->r[4]=c->r[29]|c->r[29]; // 801E2C48
  c->lr=0x801E2C50u; f_801E2A48(c); // 801E2C4C
L_801E2C50:;
  c->r[3]=c->r[28]|c->r[28]; // 801E2C50
  c->r[4]=c->r[29]|c->r[29]; // 801E2C54
  c->r[5]=0u+0x00000001u; // 801E2C58
  c->lr=0x801E2C60u; f_801E29CC(c); // 801E2C5C
  c->r[3]=c->r[28]|c->r[28]; // 801E2C60
  c->r[4]=c->r[29]|c->r[29]; // 801E2C64
  c->r[5]=c->r[30]|c->r[30]; // 801E2C68
  c->r[6]=c->r[31]|c->r[31]; // 801E2C6C
  c->lr=0x801E2C74u; f_801E2AB8(c); // 801E2C70
  c->r[3]=c->r[28]|c->r[28]; // 801E2C74
  c->r[4]=c->r[29]|c->r[29]; // 801E2C78
  c->lr=0x801E2C80u; f_801E2A48(c); // 801E2C7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2C80
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2C84
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2C88
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2C8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2C90
  c->lr=c->r[0]; // 801E2C94
  c->r[1]=c->r[1]+0x00000020u; // 801E2C98
  return; // 801E2C9C
}

// fn_801E2CA0
void f_801E2CA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2CA0
  c->r[0]=c->lr; // 801E2CA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2CA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2CAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2CB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2CB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2CB8
  c->r[28]=c->r[3]|c->r[3]; // 801E2CBC
  c->r[29]=c->r[4]|c->r[4]; // 801E2CC0
  c->r[30]=c->r[5]|c->r[5]; // 801E2CC4
  c->r[31]=c->r[6]|c->r[6]; // 801E2CC8
  c->r[5]=0u+0x00000002u; // 801E2CCC
  c->lr=0x801E2CD4u; f_801E29CC(c); // 801E2CD0
  c->r[3]=c->r[28]|c->r[28]; // 801E2CD4
  c->r[4]=c->r[29]|c->r[29]; // 801E2CD8
  c->r[5]=c->r[30]|c->r[30]; // 801E2CDC
  c->r[6]=c->r[31]|c->r[31]; // 801E2CE0
  c->lr=0x801E2CE8u; f_801E2B58(c); // 801E2CE4
  c->r[3]=c->r[28]|c->r[28]; // 801E2CE8
  c->r[4]=c->r[29]|c->r[29]; // 801E2CEC
  c->lr=0x801E2CF4u; f_801E2A48(c); // 801E2CF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2CF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2CF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2CFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2D00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2D04
  c->lr=c->r[0]; // 801E2D08
  c->r[1]=c->r[1]+0x00000020u; // 801E2D0C
  return; // 801E2D10
}

// fn_801E2D14
void f_801E2D14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2D14
  c->r[0]=c->lr; // 801E2D18
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2D1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2D20
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2D24
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2D28
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E2D2C
  c->r[28]=c->r[3]|c->r[3]; // 801E2D30
  c->r[29]=c->r[5]|c->r[5]; // 801E2D34
  c->lr=0x801E2D3Cu; f_801E2420(c); // 801E2D38
  c->r[31]=c->r[3]|c->r[3]; // 801E2D3C
  c->r[3]=c->r[28]|c->r[28]; // 801E2D40
  c->r[4]=c->r[29]|c->r[29]; // 801E2D44
  c->lr=0x801E2D4Cu; f_801E2420(c); // 801E2D48
  c->r[30]=c->r[3]|c->r[3]; // 801E2D4C
  c->r[3]=c->r[28]|c->r[28]; // 801E2D50
  c->r[4]=0u+0x00000000u; // 801E2D54
  c->lr=0x801E2D5Cu; f_801E20D8(c); // 801E2D58
  c->r[29]=c->r[3]|c->r[3]; // 801E2D5C
  c->r[4]=0u+0x0000000Du; // 801E2D60
  c->lr=0x801E2D68u; f_801E312C(c); // 801E2D64
  c->r[3]=c->r[29]|c->r[29]; // 801E2D68
  c->r[4]=c->r[31]|c->r[31]; // 801E2D6C
  c->lr=0x801E2D74u; f_801E3134(c); // 801E2D70
  c->r[3]=c->r[29]|c->r[29]; // 801E2D74
  c->r[4]=c->r[30]|c->r[30]; // 801E2D78
  c->lr=0x801E2D80u; f_801E3174(c); // 801E2D7C
  c->r[3]=c->r[28]|c->r[28]; // 801E2D80
  c->r[4]=c->r[29]|c->r[29]; // 801E2D84
  c->lr=0x801E2D8Cu; f_801E2434(c); // 801E2D88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2D8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2D90
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2D94
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E2D98
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2D9C
  c->lr=c->r[0]; // 801E2DA0
  c->r[1]=c->r[1]+0x00000020u; // 801E2DA4
  return; // 801E2DA8
}

// fn_801E2DAC
void f_801E2DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2DAC
  c->r[0]=c->lr; // 801E2DB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2DB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2DB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2DBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2DC0
  c->r[29]=c->r[3]|c->r[3]; // 801E2DC4
  c->lr=0x801E2DCCu; f_801E2420(c); // 801E2DC8
  c->r[31]=c->r[3]|c->r[3]; // 801E2DCC
  c->r[3]=c->r[29]|c->r[29]; // 801E2DD0
  c->r[4]=0u+0x00000000u; // 801E2DD4
  c->lr=0x801E2DDCu; f_801E20D8(c); // 801E2DD8
  c->r[30]=c->r[3]|c->r[3]; // 801E2DDC
  c->r[4]=0u+0x0000000Eu; // 801E2DE0
  c->lr=0x801E2DE8u; f_801E312C(c); // 801E2DE4
  c->r[3]=c->r[30]|c->r[30]; // 801E2DE8
  c->r[4]=c->r[31]|c->r[31]; // 801E2DEC
  c->lr=0x801E2DF4u; f_801E3134(c); // 801E2DF0
  c->r[3]=c->r[29]|c->r[29]; // 801E2DF4
  c->r[4]=c->r[30]|c->r[30]; // 801E2DF8
  c->lr=0x801E2E00u; f_801E2434(c); // 801E2DFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2E00
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2E04
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2E08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2E0C
  c->lr=c->r[0]; // 801E2E10
  c->r[1]=c->r[1]+0x00000020u; // 801E2E14
  return; // 801E2E18
}

// fn_801E2E1C
void f_801E2E1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2E1C
  c->r[0]=c->lr; // 801E2E20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2E24
  c->lr=0x801E2E2Cu; f_801E2420(c); // 801E2E28
  c->lr=0x801E2E30u; f_801E2FB4(c); // 801E2E2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2E30
  c->lr=c->r[0]; // 801E2E34
  c->r[1]=c->r[1]+0x00000010u; // 801E2E38
  return; // 801E2E3C
}

// fn_801E2E40
void f_801E2E40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2E40
  c->r[0]=c->lr; // 801E2E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E2E4C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E2E50
  c->r[30]=c->r[3]|c->r[3]; // 801E2E54
  c->r[31]=R32(c->r[3]+0x00001E98u); // 801E2E58
  goto L_801E2E88; // 801E2E5C
L_801E2E60:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2E60
  c->lr=0x801E2E68u; f_801E1854(c); // 801E2E64
  c->r[3]=c->r[31]|c->r[31]; // 801E2E68
  c->lr=0x801E2E70u; f_801E317C(c); // 801E2E6C
  cmps(c,0,(int32_t)c->r[3],0); // 801E2E70
  if (crb(c,2)) { goto L_801E2E90; } // 801E2E74
  c->r[3]=c->r[30]|c->r[30]; // 801E2E78
  c->r[4]=c->r[31]|c->r[31]; // 801E2E7C
  c->lr=0x801E2E84u; f_801E2188(c); // 801E2E80
  goto L_801E2E90; // 801E2E84
L_801E2E88:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E2E88
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2E60; } // 801E2E8C
L_801E2E90:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E2E90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E2E94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E2E98
  c->lr=c->r[0]; // 801E2E9C
  c->r[1]=c->r[1]+0x00000010u; // 801E2EA0
  return; // 801E2EA4
}

// fn_801E2EA8
void f_801E2EA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2EA8
  c->r[0]=c->lr; // 801E2EAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E2EB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E2EB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E2EB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E2EBC
  c->r[29]=c->r[3]|c->r[3]; // 801E2EC0
  c->r[31]=R32(c->r[3]+0x00001E98u); // 801E2EC4
  goto L_801E2EE8; // 801E2EC8
L_801E2ECC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E2ECC
  c->lr=0x801E2ED4u; f_801E30A4(c); // 801E2ED0
  c->r[30]=c->r[3]|c->r[3]; // 801E2ED4
  c->r[3]=c->r[29]|c->r[29]; // 801E2ED8
  c->r[4]=c->r[31]|c->r[31]; // 801E2EDC
  c->lr=0x801E2EE4u; f_801E2188(c); // 801E2EE0
  c->r[31]=c->r[30]|c->r[30]; // 801E2EE4
L_801E2EE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E2EE8
  if (!crb(c,2)) { IRQCHK(c); goto L_801E2ECC; } // 801E2EEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E2EF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E2EF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E2EF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E2EFC
  c->lr=c->r[0]; // 801E2F00
  c->r[1]=c->r[1]+0x00000020u; // 801E2F04
  return; // 801E2F08
}

// fn_801E2F0C
void f_801E2F0C(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801E2F0C
  c->r[5]=c->r[3]+0x00003798u; // 801E2F10
  c->r[3]=0u+0x80440000u; // 801E2F14
  c->r[4]=c->r[3]+0xFFFFD898u; // 801E2F18
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E2F1C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E2F20
  W32(c->r[5]+0x00000000u,c->r[3]); // 801E2F24
  W32(c->r[5]+0x00000004u,c->r[0]); // 801E2F28
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E2F2C
  W32(c->r[5]+0x00000008u,c->r[0]); // 801E2F30
  return; // 801E2F34
}

// fn_801E2F38
void f_801E2F38(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801E2F38
  return; // 801E2F3C
}

// fn_801E2F40
void f_801E2F40(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E2F40
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E2F44
  return; // 801E2F48
}

// fn_801E2F4C
void f_801E2F4C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000002u; // 801E2F4C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E2F50
  return; // 801E2F54
}

// fn_801E2F58
void f_801E2F58(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000060u); // 801E2F58
  c->r[0]=c->r[0]&~c->r[4]; // 801E2F5C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E2F60
  W8(c->r[3]+0x00000060u,c->r[0]); // 801E2F64
  return; // 801E2F68
}

// fn_801E2F6C
void f_801E2F6C(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000060u); // 801E2F6C
  c->r[0]=c->r[0]|c->r[4]; // 801E2F70
  W8(c->r[3]+0x00000060u,c->r[0]); // 801E2F74
  return; // 801E2F78
}

// fn_801E2F7C
void f_801E2F7C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801E2F7C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E2F80
  return; // 801E2F84
}

// fn_801E2F88
void f_801E2F88(Ctx* __restrict c) {
  c->r[0]=0u+0x00000003u; // 801E2F88
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E2F8C
  return; // 801E2F90
}

// fn_801E2F94
void f_801E2F94(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801E2F94
  return; // 801E2F98
}

// fn_801E2F9C
void f_801E2F9C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801E2F9C
  c->r[0]=cntlz(c->r[0]); // 801E2FA0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E2FA4
  return; // 801E2FA8
}

// fn_801E2FAC
void f_801E2FAC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000010u; // 801E2FAC
  return; // 801E2FB0
}

// fn_801E2FB4
void f_801E2FB4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000054u); // 801E2FB4
  return; // 801E2FB8
}

// fn_801E2FBC
void f_801E2FBC(Ctx* __restrict c) {
  c->r[3]=R8(c->r[3]+0x00000062u); // 801E2FBC
  return; // 801E2FC0
}

// fn_801E2FC4
void f_801E2FC4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801E2FC4
  c->r[4]=0u+0x00000000u; // 801E2FC8
  c->r[5]=0u+0x0000008Cu; // 801E2FCC
  f_800060B8(c); return; // 801E2FD0
}

// fn_801E2FD4
void f_801E2FD4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E2FD4
  return; // 801E2FD8
}

// fn_801E2FDC
void f_801E2FDC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000058u); // 801E2FDC
  return; // 801E2FE0
}

// fn_801E2FE4
void f_801E2FE4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E2FE4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E2FE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E2FEC
  return; // 801E2FF0
}

// fn_801E2FF4
void f_801E2FF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E2FF4
  c->r[0]=c->lr; // 801E2FF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E2FFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3000
  c->r[31]=c->r[3]|c->r[3]; // 801E3004
  c->r[0]=0u+0x00000000u; // 801E3008
  W32(c->r[3]+0x000000E4u,c->r[0]); // 801E300C
  W32(c->r[3]+0x000000E8u,c->r[0]); // 801E3010
  W32(c->r[3]+0x000000C4u,c->r[0]); // 801E3014
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E3018
  W32(c->r[3]+0x000000D8u,c->r[0]); // 801E301C
  W32(c->r[3]+0x000000DCu,c->r[0]); // 801E3020
  W32(c->r[3]+0x000000E0u,c->r[0]); // 801E3024
  W32(c->r[3]+0x000000C8u,c->r[0]); // 801E3028
  {uint32_t ea=c->r[2]+0xFFFF9410u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E302C
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 801E3030
  W32(c->r[3]+0x000000D0u,c->r[0]); // 801E3034
  W32(c->r[3]+0x000000D4u,c->r[0]); // 801E3038
  c->r[3]=c->r[3]+0x00000008u; // 801E303C
  c->r[4]=0u+0x00000000u; // 801E3040
  c->r[5]=0u+0x000000B8u; // 801E3044
  c->lr=0x801E304Cu; f_800060B8(c); // 801E3048
  c->r[3]=c->r[31]+0x00000008u; // 801E304C
  c->r[4]=c->r[31]|c->r[31]; // 801E3050
  c->lr=0x801E3058u; f_80355B0C(c); // 801E3054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3058
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E305C
  c->lr=c->r[0]; // 801E3060
  c->r[1]=c->r[1]+0x00000010u; // 801E3064
  return; // 801E3068
}

// fn_801E306C
void f_801E306C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801E306C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E3070
  return; // 801E3074
}

// fn_801E3078
void f_801E3078(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E3078
  c->r[0]=cntlz(c->r[0]); // 801E307C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E3080
  return; // 801E3084
}

// fn_801E3088
void f_801E3088(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E3088
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E308C
  return; // 801E3090
}

// fn_801E3094
void f_801E3094(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E4u,c->r[4]); // 801E3094
  return; // 801E3098
}

// fn_801E309C
void f_801E309C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 801E309C
  return; // 801E30A0
}

// fn_801E30A4
void f_801E30A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E30A4
  return; // 801E30A8
}

// fn_801E30AC
void f_801E30AC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801E30AC
  return; // 801E30B0
}

// fn_801E30B4
void f_801E30B4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E30B4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E30B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E30BC
  W32(c->r[3]+0x00000054u,c->r[0]); // 801E30C0
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801E30C4
  W32(c->r[3]+0x00000058u,c->r[0]); // 801E30C8
  W8(c->r[3]+0x00000060u,c->r[0]); // 801E30CC
  W8(c->r[3]+0x00000061u,c->r[0]); // 801E30D0
  W8(c->r[3]+0x00000063u,c->r[0]); // 801E30D4
  W8(c->r[3]+0x00000062u,c->r[0]); // 801E30D8
  W32(c->r[3]+0x00000064u,c->r[0]); // 801E30DC
  c->r[3]=c->r[3]+0x00000010u; // 801E30E0
  c->r[4]=0u+0x00000000u; // 801E30E4
  c->r[5]=0u+0x00000041u; // 801E30E8
  f_800060B8(c); return; // 801E30EC
}

// fn_801E30F0
void f_801E30F0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E30F0
  W32(c->r[3]+0x00000054u,c->r[0]); // 801E30F4
  W32(c->r[3]+0x00000058u,c->r[0]); // 801E30F8
  return; // 801E30FC
}

// fn_801E3100
void f_801E3100(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 801E3100
  return; // 801E3104
}

// fn_801E3108
void f_801E3108(Ctx* __restrict c) {
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801E3108
  return; // 801E310C
}

// fn_801E3110
void f_801E3110(Ctx* __restrict c) {
  c->r[5]=c->r[4]|c->r[4]; // 801E3110
  c->r[3]=c->r[3]+0x00000010u; // 801E3114
  c->r[4]=c->r[13]+0xFFFF9C94u; // 801E3118
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E311C
  f_802E7CC4(c); return; // 801E3120
}

// fn_801E3124
void f_801E3124(Ctx* __restrict c) {
  W32(c->r[3]+0x000000D8u,c->r[4]); // 801E3124
  return; // 801E3128
}

// fn_801E312C
void f_801E312C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C4u,c->r[4]); // 801E312C
  return; // 801E3130
}

// fn_801E3134
void f_801E3134(Ctx* __restrict c) {
  W32(c->r[3]+0x000000DCu,c->r[4]); // 801E3134
  return; // 801E3138
}

// fn_801E313C
void f_801E313C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000054u,c->r[4]); // 801E313C
  W32(c->r[3]+0x00000058u,c->r[5]); // 801E3140
  return; // 801E3144
}

// fn_801E3148
void f_801E3148(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000005Cu); // 801E3148
  return; // 801E314C
}

// fn_801E3150
void f_801E3150(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000054u); // 801E3150
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801E3154
  return; // 801E3158
}

// fn_801E315C
void f_801E315C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801E315C
  c->r[0]=c->r[0]+c->r[4]; // 801E3160
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801E3164
  return; // 801E3168
}

// fn_801E316C
void f_801E316C(Ctx* __restrict c) {
  W8(c->r[3]+0x00000062u,c->r[4]); // 801E316C
  return; // 801E3170
}

// fn_801E3174
void f_801E3174(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E0u,c->r[4]); // 801E3174
  return; // 801E3178
}

// fn_801E317C
void f_801E317C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E317C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801E3180
  c->r[0]=cntlz(c->r[0]); // 801E3184
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E3188
  return; // 801E318C
}

// fn_801E3190
void f_801E3190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3190
  c->r[0]=c->lr; // 801E3194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E319C
  c->r[31]=c->r[3]|c->r[3]; // 801E31A0
  c->r[6]=0u+0x00000020u; // 801E31A4
  c->r[7]=0u+0x80470000u; // 801E31A8
  c->r[7]=c->r[7]+0x00003850u; // 801E31AC
  c->lr=0x801E31B4u; f_800569F4(c); // 801E31B0
  c->r[0]=0u+0x00000000u; // 801E31B4
  W32(c->r[31]+0x00000030u,c->r[0]); // 801E31B8
  W32(c->r[31]+0x0000013Cu,c->r[0]); // 801E31BC
  W32(c->r[31]+0x00000138u,c->r[0]); // 801E31C0
  c->r[3]=c->r[31]+0x000000B8u; // 801E31C4
  c->r[4]=0u+0x00000000u; // 801E31C8
  c->r[5]=0u+0x00000080u; // 801E31CC
  c->lr=0x801E31D4u; f_800060B8(c); // 801E31D0
  c->r[3]=c->r[31]+0x00000038u; // 801E31D4
  c->r[4]=0u+0x00000000u; // 801E31D8
  c->r[5]=0u+0x00000080u; // 801E31DC
  c->lr=0x801E31E4u; f_800060B8(c); // 801E31E0
  c->r[3]=c->r[31]|c->r[31]; // 801E31E4
  c->lr=0x801E31ECu; f_801E35D8(c); // 801E31E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E31EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E31F0
  c->lr=c->r[0]; // 801E31F4
  c->r[1]=c->r[1]+0x00000010u; // 801E31F8
  return; // 801E31FC
}

// fn_801E3200
void f_801E3200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3200
  c->r[0]=c->lr; // 801E3204
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E320C
  c->r[31]=c->r[3]|c->r[3]; // 801E3210
  c->lr=0x801E3218u; f_801E3234(c); // 801E3214
  c->r[3]=c->r[31]|c->r[31]; // 801E3218
  c->lr=0x801E3220u; f_80056A84(c); // 801E321C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3220
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3224
  c->lr=c->r[0]; // 801E3228
  c->r[1]=c->r[1]+0x00000010u; // 801E322C
  return; // 801E3230
}

// fn_801E3234
void f_801E3234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3234
  c->r[0]=c->lr; // 801E3238
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E323C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3240
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3244
  c->r[30]=c->r[3]|c->r[3]; // 801E3248
  c->r[4]=R32(c->r[3]+0x00000030u); // 801E324C
  goto L_801E3264; // 801E3250
L_801E3254:;
  c->r[31]=R32(c->r[4]+0x00000018u); // 801E3254
  c->r[3]=c->r[30]|c->r[30]; // 801E3258
  c->lr=0x801E3260u; f_801E3364(c); // 801E325C
  c->r[4]=c->r[31]|c->r[31]; // 801E3260
L_801E3264:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E3264
  if (!crb(c,2)) { IRQCHK(c); goto L_801E3254; } // 801E3268
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E326C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E3270
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3274
  c->lr=c->r[0]; // 801E3278
  c->r[1]=c->r[1]+0x00000010u; // 801E327C
  return; // 801E3280
}

// fn_801E3284
void f_801E3284(Ctx* __restrict c) {
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E3284
  c->r[4]=c->r[5]|c->r[5]; // 801E3288
  c->r[5]=c->r[6]|c->r[6]; // 801E328C
  f_802E53B8(c); return; // 801E3290
}

// fn_801E3294
void f_801E3294(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E3294
  cmpu(c,0,c->r[6],c->r[0]); // 801E3298
  if (!crb(c,1)) { goto L_801E32A4; } // 801E329C
  c->r[6]=c->r[0]|c->r[0]; // 801E32A0
L_801E32A4:;
  c->r[3]=c->r[5]|c->r[5]; // 801E32A4
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E32A8
  c->r[5]=c->r[6]|c->r[6]; // 801E32AC
  f_802E53B8(c); return; // 801E32B0
}

// fn_801E32B4
void f_801E32B4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E32B4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E32B8
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E32BC
  W32(c->r[4]+0x00000008u,c->r[0]); // 801E32C0
  W32(c->r[4]+0x00000010u,c->r[0]); // 801E32C4
  W32(c->r[4]+0x00000014u,c->r[0]); // 801E32C8
  W32(c->r[4]+0x00000018u,c->r[0]); // 801E32CC
  return; // 801E32D0
}

// fn_801E32D4
void f_801E32D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E32D4
  c->r[0]=c->lr; // 801E32D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E32DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E32E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E32E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E32E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E32EC
  c->r[28]=c->r[3]|c->r[3]; // 801E32F0
  c->r[29]=c->r[4]|c->r[4]; // 801E32F4
  c->r[30]=c->r[5]|c->r[5]; // 801E32F8
  c->r[31]=c->r[6]|c->r[6]; // 801E32FC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E3300
  cmps(c,0,(int32_t)c->r[0],0); // 801E3304
  if (!crb(c,2)) { goto L_801E3344; } // 801E3308
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; // 801E330C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3310
  c->r[4]=c->r[31]|c->r[31]; // 801E3314
  if (crb(c,2)) { goto L_801E3324; } // 801E3318
  c->r[4]=c->r[6]-c->r[0]; // 801E331C
  c->r[4]=c->r[4]+0x00000020u; // 801E3320
L_801E3324:;
  c->lr=0x801E3328u; f_80056AC0(c); // 801E3324
  W32(c->r[29]+0x00000004u,c->r[3]); // 801E3328
  W32(c->r[29]+0x00000008u,c->r[31]); // 801E332C
  c->r[3]=c->r[28]|c->r[28]; // 801E3330
  c->r[4]=c->r[29]|c->r[29]; // 801E3334
  c->r[5]=c->r[30]|c->r[30]; // 801E3338
  c->r[6]=c->r[31]|c->r[31]; // 801E333C
  c->lr=0x801E3344u; f_801E3284(c); // 801E3340
L_801E3344:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3344
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3348
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E334C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E3350
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3354
  c->lr=c->r[0]; // 801E3358
  c->r[1]=c->r[1]+0x00000020u; // 801E335C
  return; // 801E3360
}

// fn_801E3364
void f_801E3364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3364
  c->r[0]=c->lr; // 801E3368
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E336C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3370
  c->r[31]=c->r[4]|c->r[4]; // 801E3374
  c->r[4]=R32(c->r[4]+0x00000004u); // 801E3378
  cmps(c,0,(int32_t)c->r[4],0); // 801E337C
  if (crb(c,2)) { goto L_801E3390; } // 801E3380
  c->lr=0x801E3388u; f_80056B0C(c); // 801E3384
  c->r[0]=0u+0x00000000u; // 801E3388
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E338C
L_801E3390:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3390
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3394
  c->lr=c->r[0]; // 801E3398
  c->r[1]=c->r[1]+0x00000010u; // 801E339C
  return; // 801E33A0
}

// fn_801E33A4
void f_801E33A4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000030u); // 801E33A4
  cmps(c,0,(int32_t)c->r[5],0); // 801E33A8
  if (!crb(c,2)) { goto L_801E33D8; } // 801E33AC
  W32(c->r[3]+0x00000030u,c->r[4]); // 801E33B0
  return; // 801E33B4
  goto L_801E33D8; // 801E33B8
L_801E33BC:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 801E33BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E33C0
  if (!crb(c,2)) { goto L_801E33D4; } // 801E33C4
  W32(c->r[5]+0x00000018u,c->r[4]); // 801E33C8
  W32(c->r[4]+0x00000014u,c->r[5]); // 801E33CC
  return; // 801E33D0
L_801E33D4:;
  c->r[5]=c->r[0]|c->r[0]; // 801E33D4
L_801E33D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E33D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801E33BC; } // 801E33DC
  return; // 801E33E0
}

// fn_801E33E4
void f_801E33E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 801E33E4
  goto L_801E33FC; // 801E33E8
L_801E33EC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E33EC
  cmpu(c,0,c->r[0],c->r[4]); // 801E33F0
  if (crb(c,2)) return; // 801E33F4
  c->r[3]=R32(c->r[3]+0x00000018u); // 801E33F8
L_801E33FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E33FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801E33EC; } // 801E3400
  c->r[3]=0u+0x00000000u; // 801E3404
  return; // 801E3408
}

// fn_801E340C
void f_801E340C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E340C
  c->r[0]=c->lr; // 801E3410
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3414
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3418
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E341C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3420
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E3424
  c->r[31]=c->r[3]|c->r[3]; // 801E3428
  c->r[29]=c->r[4]|c->r[4]; // 801E342C
  c->r[28]=c->r[5]|c->r[5]; // 801E3430
  c->r[3]=c->r[1]+0x00000008u; // 801E3434
  c->r[4]=0u+0x0000005Fu; // 801E3438
  c->r[5]=0u+0x00000005u; // 801E343C
  c->lr=0x801E3444u; f_800060B8(c); // 801E3440
  c->r[3]=c->r[1]+0x00000008u; // 801E3444
  c->r[4]=c->r[13]+0xFFFF9C98u; // 801E3448
  c->r[5]=c->r[29]|c->r[29]; // 801E344C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E3450
  c->lr=0x801E3458u; f_802E7CC4(c); // 801E3454
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801E3458
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E345C
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801E3460
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3464
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E3468
  c->r[4]=c->r[3]|c->r[0]; // 801E346C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E3470
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3474
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 801E3478
  c->r[0]=R8(c->r[1]+0x00000009u); // 801E347C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3480
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801E3484
  c->r[0]=c->r[3]|c->r[0]; // 801E3488
  c->r[29]=c->r[4]|c->r[0]; // 801E348C
  c->r[3]=c->r[31]|c->r[31]; // 801E3490
  c->r[4]=c->r[29]|c->r[29]; // 801E3494
  c->lr=0x801E349Cu; f_801E33E4(c); // 801E3498
  c->r[3]=c->r[31]|c->r[31]; // 801E349C
  c->r[4]=0u+0x0000001Cu; // 801E34A0
  c->lr=0x801E34A8u; f_80056AC0(c); // 801E34A4
  c->r[30]=c->r[3]|c->r[3]; // 801E34A8
  c->r[3]=c->r[31]|c->r[31]; // 801E34AC
  c->r[4]=c->r[30]|c->r[30]; // 801E34B0
  c->lr=0x801E34B8u; f_801E32B4(c); // 801E34B4
  W32(c->r[30]+0x00000000u,c->r[29]); // 801E34B8
  W32(c->r[30]+0x0000000Cu,c->r[28]); // 801E34BC
  c->r[3]=c->r[31]|c->r[31]; // 801E34C0
  c->r[4]=c->r[30]|c->r[30]; // 801E34C4
  c->lr=0x801E34CCu; f_801E33A4(c); // 801E34C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E34CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E34D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E34D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E34D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E34DC
  c->lr=c->r[0]; // 801E34E0
  c->r[1]=c->r[1]+0x00000020u; // 801E34E4
  return; // 801E34E8
}

// fn_801E34EC
void f_801E34EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E34EC
  c->r[0]=c->lr; // 801E34F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E34F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E34F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E34FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3500
  c->r[29]=c->r[3]|c->r[3]; // 801E3504
  c->r[30]=c->r[4]|c->r[4]; // 801E3508
  c->r[31]=c->r[5]|c->r[5]; // 801E350C
  c->r[3]=c->r[1]+0x00000008u; // 801E3510
  c->r[4]=0u+0x0000005Fu; // 801E3514
  c->r[5]=0u+0x00000005u; // 801E3518
  c->lr=0x801E3520u; f_800060B8(c); // 801E351C
  c->r[3]=c->r[1]+0x00000008u; // 801E3520
  c->r[4]=c->r[13]+0xFFFF9C98u; // 801E3524
  c->r[5]=c->r[30]|c->r[30]; // 801E3528
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E352C
  c->lr=0x801E3534u; f_802E7CC4(c); // 801E3530
  c->r[3]=c->r[29]|c->r[29]; // 801E3534
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801E3538
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E353C
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801E3540
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3544
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E3548
  c->r[5]=c->r[4]|c->r[0]; // 801E354C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801E3550
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3554
  c->r[4]=rotl(c->r[0],24)&0xFF000000u; // 801E3558
  c->r[0]=R8(c->r[1]+0x00000009u); // 801E355C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3560
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801E3564
  c->r[0]=c->r[4]|c->r[0]; // 801E3568
  c->r[4]=c->r[5]|c->r[0]; // 801E356C
  c->lr=0x801E3574u; f_801E33E4(c); // 801E3570
  W32(c->r[3]+0x00000010u,c->r[31]); // 801E3574
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3578
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E357C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3580
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3584
  c->lr=c->r[0]; // 801E3588
  c->r[1]=c->r[1]+0x00000020u; // 801E358C
  return; // 801E3590
}

// fn_801E3594
void f_801E3594(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801E3594
  c->r[0]=R32(c->r[3]+0x00000138u); // 801E3598
  c->ctr=c->r[0]; // 801E359C
  cmpu(c,0,c->r[0],0x00000000u); // 801E35A0
  if (!crb(c,1)) { goto L_801E35BC; } // 801E35A4
L_801E35A8:;
  c->r[0]=R32(c->r[5]+0x00000038u); // 801E35A8
  cmpu(c,0,c->r[0],c->r[4]); // 801E35AC
  if (crb(c,2)) return; // 801E35B0
  c->r[5]=c->r[5]+0x00000004u; // 801E35B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E35A8; } // 801E35B8
L_801E35BC:;
  c->r[6]=R32(c->r[3]+0x00000138u); // 801E35BC
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801E35C0
  c->r[5]=c->r[3]+c->r[0]; // 801E35C4
  W32(c->r[5]+0x00000038u,c->r[4]); // 801E35C8
  c->r[0]=c->r[6]+0x00000001u; // 801E35CC
  W32(c->r[3]+0x00000138u,c->r[0]); // 801E35D0
  return; // 801E35D4
}

// fn_801E35D8
void f_801E35D8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E35D8
  W8(c->r[3]+0x00000034u,c->r[0]); // 801E35DC
  c->r[0]=0u+0x00000001u; // 801E35E0
  W8(c->r[3]+0x00000035u,c->r[0]); // 801E35E4
  return; // 801E35E8
}

// fn_801E35EC
void f_801E35EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E35EC
  c->r[0]=c->lr; // 801E35F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E35F4
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E35F8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E35FC
  c->r[0]=R8(c->r[4]+0x00000002u); // 801E3600
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3604
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E3608
  c->r[6]=c->r[5]|c->r[0]; // 801E360C
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E3610
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3614
  c->r[5]=rotl(c->r[0],24)&0xFF000000u; // 801E3618
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E361C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3620
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801E3624
  c->r[0]=c->r[5]|c->r[0]; // 801E3628
  c->r[4]=c->r[6]|c->r[0]; // 801E362C
  c->lr=0x801E3634u; f_801E33E4(c); // 801E3630
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E3634
  c->r[0]=cntlz(c->r[0]); // 801E3638
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E363C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3640
  c->lr=c->r[0]; // 801E3644
  c->r[1]=c->r[1]+0x00000010u; // 801E3648
  return; // 801E364C
}

// fn_801E3650
void f_801E3650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3650
  c->r[0]=c->lr; // 801E3654
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3658
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E365C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3660
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3664
  c->r[29]=c->r[3]|c->r[3]; // 801E3668
  c->r[30]=c->r[5]|c->r[5]; // 801E366C
  c->r[31]=c->r[6]|c->r[6]; // 801E3670
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3674
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3678
  c->r[0]=R8(c->r[4]+0x00000002u); // 801E367C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3680
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E3684
  c->r[6]=c->r[5]|c->r[0]; // 801E3688
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E368C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3690
  c->r[5]=rotl(c->r[0],24)&0xFF000000u; // 801E3694
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E3698
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E369C
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801E36A0
  c->r[0]=c->r[5]|c->r[0]; // 801E36A4
  c->r[4]=c->r[6]|c->r[0]; // 801E36A8
  c->lr=0x801E36B0u; f_801E33E4(c); // 801E36AC
  c->r[4]=c->r[3]|c->r[3]; // 801E36B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E36B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E36B8
  if (crb(c,2)) { goto L_801E36D0; } // 801E36BC
  c->r[3]=c->r[29]|c->r[29]; // 801E36C0
  c->r[5]=c->r[30]|c->r[30]; // 801E36C4
  c->r[6]=c->r[31]|c->r[31]; // 801E36C8
  c->lr=0x801E36D0u; f_801E3294(c); // 801E36CC
L_801E36D0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E36D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E36D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E36D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E36DC
  c->lr=c->r[0]; // 801E36E0
  c->r[1]=c->r[1]+0x00000020u; // 801E36E4
  return; // 801E36E8
}

// fn_801E36EC
void f_801E36EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E36EC
  c->r[0]=c->lr; // 801E36F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E36F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E36F8
  c->r[31]=c->r[3]|c->r[3]; // 801E36FC
  c->r[0]=R8(c->r[4]+0x00000003u); // 801E3700
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3704
  c->r[0]=R8(c->r[4]+0x00000002u); // 801E3708
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E370C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801E3710
  c->r[8]=c->r[7]|c->r[0]; // 801E3714
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E3718
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E371C
  c->r[7]=rotl(c->r[0],24)&0xFF000000u; // 801E3720
  c->r[0]=R8(c->r[4]+0x00000001u); // 801E3724
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801E3728
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 801E372C
  c->r[0]=c->r[7]|c->r[0]; // 801E3730
  c->r[4]=c->r[8]|c->r[0]; // 801E3734
  c->lr=0x801E373Cu; f_801E3758(c); // 801E3738
  c->r[0]=0u+0x00000001u; // 801E373C
  W8(c->r[31]+0x00000034u,c->r[0]); // 801E3740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3744
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3748
  c->lr=c->r[0]; // 801E374C
  c->r[1]=c->r[1]+0x00000010u; // 801E3750
  return; // 801E3754
}

// fn_801E3758
void f_801E3758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3758
  c->r[0]=c->lr; // 801E375C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3760
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3764
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3768
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E376C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E3770
  c->r[28]=c->r[3]|c->r[3]; // 801E3774
  c->r[29]=c->r[5]|c->r[5]; // 801E3778
  c->r[30]=c->r[6]|c->r[6]; // 801E377C
  c->lr=0x801E3784u; f_801E33E4(c); // 801E3780
  c->r[31]=c->r[3]|c->r[3]; // 801E3784
  cmps(c,0,(int32_t)c->r[3],0); // 801E3788
  if (crb(c,2)) { goto L_801E37E8; } // 801E378C
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E3790
  cmps(c,0,(int32_t)c->r[0],0); // 801E3794
  if (crb(c,2)) { goto L_801E37B4; } // 801E3798
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E379C
  cmpu(c,0,c->r[0],c->r[30]); // 801E37A0
  if (crb(c,2)) { goto L_801E37B4; } // 801E37A4
  c->r[3]=c->r[28]|c->r[28]; // 801E37A8
  c->r[4]=c->r[31]|c->r[31]; // 801E37AC
  c->lr=0x801E37B4u; f_801E3364(c); // 801E37B0
L_801E37B4:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801E37B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E37B8
  if (!crb(c,2)) { goto L_801E37D4; } // 801E37BC
  c->r[3]=c->r[28]|c->r[28]; // 801E37C0
  c->r[4]=c->r[31]|c->r[31]; // 801E37C4
  c->r[5]=c->r[29]|c->r[29]; // 801E37C8
  c->r[6]=c->r[30]|c->r[30]; // 801E37CC
  c->lr=0x801E37D4u; f_801E32D4(c); // 801E37D0
L_801E37D4:;
  c->r[3]=c->r[28]|c->r[28]; // 801E37D4
  c->r[4]=c->r[31]|c->r[31]; // 801E37D8
  c->r[5]=c->r[29]|c->r[29]; // 801E37DC
  c->r[6]=c->r[30]|c->r[30]; // 801E37E0
  c->lr=0x801E37E8u; f_801E3284(c); // 801E37E4
L_801E37E8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E37E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E37EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E37F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E37F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E37F8
  c->lr=c->r[0]; // 801E37FC
  c->r[1]=c->r[1]+0x00000020u; // 801E3800
  return; // 801E3804
}

// fn_801E3808
void f_801E3808(Ctx* __restrict c) {
  c->r[8]=0u+0x00000000u; // 801E3808
  c->r[9]=0u+0x00000000u; // 801E380C
  c->r[7]=R32(c->r[3]+0x00000030u); // 801E3810
  goto L_801E3860; // 801E3814
L_801E3818:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E3818
  if (crb(c,2)) { goto L_801E3828; } // 801E381C
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 801E3820
  goto L_801E3840; // 801E3824
L_801E3828:;
  c->r[0]=R32(c->r[7]+0x00000004u); // 801E3828
  cmps(c,0,(int32_t)c->r[0],0); // 801E382C
  if (crb(c,2)) { goto L_801E383C; } // 801E3830
  c->r[0]=R32(c->r[7]+0x00000008u); // 801E3834
  goto L_801E3840; // 801E3838
L_801E383C:;
  c->r[0]=0u+0x00000000u; // 801E383C
L_801E3840:;
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 801E3840
  cmps(c,0,(int32_t)c->r[3],0); // 801E3844
  if (crb(c,2)) { goto L_801E3854; } // 801E3848
  c->r[3]=c->r[0]-c->r[3]; // 801E384C
  c->r[0]=c->r[3]+0x00000020u; // 801E3850
L_801E3854:;
  c->r[9]=c->r[9]+c->r[0]; // 801E3854
  c->r[8]=c->r[8]+0x00000001u; // 801E3858
  c->r[7]=R32(c->r[7]+0x00000018u); // 801E385C
L_801E3860:;
  cmps(c,0,(int32_t)c->r[7],0); // 801E3860
  if (!crb(c,2)) { IRQCHK(c); goto L_801E3818; } // 801E3864
  c->r[3]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801E3868
  c->r[0]=c->r[3]+0x00000040u; // 801E386C
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 801E3870
  cmps(c,0,(int32_t)c->r[3],0); // 801E3874
  if (crb(c,2)) { goto L_801E3884; } // 801E3878
  c->r[3]=c->r[0]-c->r[3]; // 801E387C
  c->r[0]=c->r[3]+0x00000020u; // 801E3880
L_801E3884:;
  c->r[9]=c->r[9]+c->r[0]; // 801E3884
  cmps(c,0,(int32_t)c->r[4],0); // 801E3888
  if (crb(c,2)) { goto L_801E3894; } // 801E388C
  W32(c->r[4]+0x00000000u,c->r[8]); // 801E3890
L_801E3894:;
  cmps(c,0,(int32_t)c->r[5],0); // 801E3894
  if (crb(c,2)) { goto L_801E38A0; } // 801E3898
  W32(c->r[5]+0x00000000u,c->r[0]); // 801E389C
L_801E38A0:;
  c->r[3]=c->r[9]|c->r[9]; // 801E38A0
  return; // 801E38A4
}

// fn_801E38A8
void f_801E38A8(Ctx* __restrict c) {
  c->r[6]=c->r[4]|c->r[4]; // 801E38A8
  c->r[4]=0u+0x00000000u; // 801E38AC
  c->r[5]=0u+0x00000000u; // 801E38B0
  f_801E3808(c); return; // 801E38B4
}

// fn_801E38B8
void f_801E38B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E38B8
  c->r[0]=c->lr; // 801E38BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E38C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E38C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E38C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E38CC
  c->r[29]=c->r[3]|c->r[3]; // 801E38D0
  c->r[30]=0u+0x00000000u; // 801E38D4
  c->r[31]=c->r[29]|c->r[29]; // 801E38D8
  goto L_801E38FC; // 801E38DC
L_801E38E0:;
  c->r[12]=R32(c->r[31]+0x00000038u); // 801E38E0
  cmps(c,0,(int32_t)c->r[12],0); // 801E38E4
  if (crb(c,2)) { goto L_801E38F4; } // 801E38E8
  c->ctr=c->r[12]; // 801E38EC
  if (true) { c->lr=0x801E38F4u; dispatch(c,c->ctr); } // 801E38F0
L_801E38F4:;
  c->r[31]=c->r[31]+0x00000004u; // 801E38F4
  c->r[30]=c->r[30]+0x00000001u; // 801E38F8
L_801E38FC:;
  c->r[0]=R32(c->r[29]+0x00000138u); // 801E38FC
  cmpu(c,0,c->r[30],c->r[0]); // 801E3900
  if (crb(c,0)) { IRQCHK(c); goto L_801E38E0; } // 801E3904
  c->r[0]=R8(c->r[29]+0x00000035u); // 801E3908
  cmps(c,0,(int32_t)c->r[0],0); // 801E390C
  if (crb(c,2)) { goto L_801E393C; } // 801E3910
  c->r[30]=R32(c->r[29]+0x00000030u); // 801E3914
  goto L_801E3934; // 801E3918
L_801E391C:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801E391C
  cmps(c,0,(int32_t)c->r[12],0); // 801E3920
  if (crb(c,2)) { goto L_801E3930; } // 801E3924
  c->ctr=c->r[12]; // 801E3928
  if (true) { c->lr=0x801E3930u; dispatch(c,c->ctr); } // 801E392C
L_801E3930:;
  c->r[30]=R32(c->r[30]+0x00000018u); // 801E3930
L_801E3934:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E3934
  if (!crb(c,2)) { IRQCHK(c); goto L_801E391C; } // 801E3938
L_801E393C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E393C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3940
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3944
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3948
  c->lr=c->r[0]; // 801E394C
  c->r[1]=c->r[1]+0x00000020u; // 801E3950
  return; // 801E3954
}

// fn_801E3958
void f_801E3958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3958
  c->r[0]=c->lr; // 801E395C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3960
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3964
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3968
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E396C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E3970
  c->r[28]=c->r[3]|c->r[3]; // 801E3974
  c->r[29]=c->r[4]|c->r[4]; // 801E3978
  c->r[31]=c->r[6]|c->r[6]; // 801E397C
  c->r[30]=c->r[29]|c->r[29]; // 801E3980
  c->r[4]=c->r[1]+0x0000000Cu; // 801E3984
  c->r[5]=c->r[1]+0x00000008u; // 801E3988
  c->r[6]=0u+0x00000000u; // 801E398C
  c->lr=0x801E3994u; f_801E3808(c); // 801E3990
  c->r[3]=c->r[29]|c->r[29]; // 801E3994
  c->r[4]=0u+0x00000000u; // 801E3998
  c->r[5]=0u+0x00000040u; // 801E399C
  c->lr=0x801E39A4u; f_800060B8(c); // 801E39A0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801E39A4
  W32(c->r[29]+0x00000008u,c->r[0]); // 801E39A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E39AC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 801E39B0
  cmps(c,0,(int32_t)c->r[31],0); // 801E39B4
  if (!crb(c,2)) { goto L_801E39C8; } // 801E39B8
  c->r[0]=R8(c->r[28]+0x00000034u); // 801E39BC
  W8(c->r[29]+0x00000007u,c->r[0]); // 801E39C0
  goto L_801E39D0; // 801E39C4
L_801E39C8:;
  c->r[0]=0u+0x00000000u; // 801E39C8
  W8(c->r[29]+0x00000007u,c->r[0]); // 801E39CC
L_801E39D0:;
  c->r[29]=c->r[29]+0x00000040u; // 801E39D0
  c->r[4]=R32(c->r[28]+0x00000030u); // 801E39D4
  c->r[0]=0u+0x00000000u; // 801E39D8
  goto L_801E3A14; // 801E39DC
L_801E39E0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801E39E0
  cmps(c,0,(int32_t)c->r[3],0); // 801E39E4
  if (crb(c,2)) { goto L_801E3A0C; } // 801E39E8
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E39EC
  W32(c->r[29]+0x00000000u,c->r[3]); // 801E39F0
  cmps(c,0,(int32_t)c->r[31],0); // 801E39F4
  if (!crb(c,2)) { goto L_801E3A08; } // 801E39F8
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E39FC
  W32(c->r[29]+0x00000004u,c->r[3]); // 801E3A00
  goto L_801E3A0C; // 801E3A04
L_801E3A08:;
  W32(c->r[29]+0x00000004u,c->r[0]); // 801E3A08
L_801E3A0C:;
  c->r[29]=c->r[29]+0x00000008u; // 801E3A0C
  c->r[4]=R32(c->r[4]+0x00000018u); // 801E3A10
L_801E3A14:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E3A14
  if (!crb(c,2)) { IRQCHK(c); goto L_801E39E0; } // 801E3A18
  cmps(c,0,(int32_t)c->r[31],0); // 801E3A1C
  if (!crb(c,2)) { goto L_801E3A74; } // 801E3A20
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E3A24
  c->r[31]=c->r[30]+c->r[0]; // 801E3A28
  c->r[30]=R32(c->r[28]+0x00000030u); // 801E3A2C
  goto L_801E3A6C; // 801E3A30
L_801E3A34:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 801E3A34
  cmps(c,0,(int32_t)c->r[4],0); // 801E3A38
  if (crb(c,2)) { goto L_801E3A68; } // 801E3A3C
  c->r[3]=c->r[31]|c->r[31]; // 801E3A40
  c->r[5]=R32(c->r[30]+0x00000008u); // 801E3A44
  c->lr=0x801E3A4Cu; f_802E53B8(c); // 801E3A48
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E3A4C
  c->r[3]=rotl(c->r[0],0)&0x0000001Fu; // 801E3A50
  cmps(c,0,(int32_t)c->r[3],0); // 801E3A54
  if (crb(c,2)) { goto L_801E3A64; } // 801E3A58
  c->r[3]=c->r[0]-c->r[3]; // 801E3A5C
  c->r[0]=c->r[3]+0x00000020u; // 801E3A60
L_801E3A64:;
  c->r[31]=c->r[31]+c->r[0]; // 801E3A64
L_801E3A68:;
  c->r[30]=R32(c->r[30]+0x00000018u); // 801E3A68
L_801E3A6C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801E3A6C
  if (!crb(c,2)) { IRQCHK(c); goto L_801E3A34; } // 801E3A70
L_801E3A74:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3A74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3A78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3A7C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E3A80
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3A84
  c->lr=c->r[0]; // 801E3A88
  c->r[1]=c->r[1]+0x00000020u; // 801E3A8C
  return; // 801E3A90
}

// fn_801E3A94
void f_801E3A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3A94
  c->r[0]=c->lr; // 801E3A98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3A9C
  c->r[11]=c->r[1]+0x00000020u; // 801E3AA0
  c->lr=0x801E3AA8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E3AA4
  c->r[26]=c->r[3]|c->r[3]; // 801E3AA8
  c->r[27]=c->r[4]|c->r[4]; // 801E3AAC
  c->r[29]=c->r[4]+0x00000040u; // 801E3AB0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E3AB4
  c->r[28]=c->r[4]+c->r[0]; // 801E3AB8
  c->r[30]=0u+0x00000000u; // 801E3ABC
  goto L_801E3B04; // 801E3AC0
L_801E3AC4:;
  c->r[6]=R32(c->r[29]+0x00000004u); // 801E3AC4
  c->r[0]=rotl(c->r[6],0)&0x0000001Fu; // 801E3AC8
  cmps(c,0,(int32_t)c->r[0],0); // 801E3ACC
  c->r[31]=c->r[6]|c->r[6]; // 801E3AD0
  if (crb(c,2)) { goto L_801E3AE0; } // 801E3AD4
  c->r[3]=c->r[6]-c->r[0]; // 801E3AD8
  c->r[31]=c->r[3]+0x00000020u; // 801E3ADC
L_801E3AE0:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E3AE0
  if (crb(c,2)) { goto L_801E3AF8; } // 801E3AE4
  c->r[3]=c->r[26]|c->r[26]; // 801E3AE8
  c->r[4]=R32(c->r[29]+0x00000000u); // 801E3AEC
  c->r[5]=c->r[28]|c->r[28]; // 801E3AF0
  c->lr=0x801E3AF8u; f_801E3758(c); // 801E3AF4
L_801E3AF8:;
  c->r[29]=c->r[29]+0x00000008u; // 801E3AF8
  c->r[28]=c->r[28]+c->r[31]; // 801E3AFC
  c->r[30]=c->r[30]+0x00000001u; // 801E3B00
L_801E3B04:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 801E3B04
  cmpu(c,0,c->r[30],c->r[0]); // 801E3B08
  if (crb(c,0)) { IRQCHK(c); goto L_801E3AC4; } // 801E3B0C
  c->r[0]=R8(c->r[27]+0x00000007u); // 801E3B10
  W8(c->r[26]+0x00000034u,c->r[0]); // 801E3B14
  c->r[11]=c->r[1]+0x00000020u; // 801E3B18
  c->lr=0x801E3B20u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E3B1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3B20
  c->lr=c->r[0]; // 801E3B24
  c->r[1]=c->r[1]+0x00000020u; // 801E3B28
  return; // 801E3B2C
}

// fn_801E3B30
void f_801E3B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3B30
  c->r[0]=c->lr; // 801E3B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3B3C
  c->r[31]=c->r[3]|c->r[3]; // 801E3B40
  c->lr=0x801E3B48u; f_80074EB4(c); // 801E3B44
  c->r[3]=0u+0x80470000u; // 801E3B48
  c->r[0]=c->r[3]+0x00004110u; // 801E3B4C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E3B50
  c->r[3]=c->r[31]+0x00000008u; // 801E3B54
  c->lr=0x801E3B5Cu; f_801E3E1C(c); // 801E3B58
  c->r[0]=R32(c->r[13]+0xFFFFBB1Cu); // 801E3B5C
  cmps(c,0,(int32_t)c->r[0],0); // 801E3B60
  if (crb(c,2)) { goto L_801E3B70; } // 801E3B64
  c->r[3]=c->r[31]|c->r[31]; // 801E3B68
  goto L_801E3B84; // 801E3B6C
L_801E3B70:;
  c->r[0]=0u+0x00000000u; // 801E3B70
  W32(c->r[31]+0x00002414u,c->r[0]); // 801E3B74
  W32(c->r[31]+0x00002418u,c->r[0]); // 801E3B78
  W32(c->r[13]+0xFFFFBB1Cu,c->r[31]); // 801E3B7C
  c->r[3]=c->r[31]|c->r[31]; // 801E3B80
L_801E3B84:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3B84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3B88
  c->lr=c->r[0]; // 801E3B8C
  c->r[1]=c->r[1]+0x00000010u; // 801E3B90
  return; // 801E3B94
}

// dtor_801E3B98
void f_801E3B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3B98
  c->r[0]=c->lr; // 801E3B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3BA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3BA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3BAC
  c->r[29]=c->r[3]|c->r[3]; // 801E3BB0
  c->r[30]=c->r[4]|c->r[4]; // 801E3BB4
  cmps(c,0,(int32_t)c->r[3],0); // 801E3BB8
  if (crb(c,2)) { goto L_801E3C54; } // 801E3BBC
  c->r[4]=0u+0x80470000u; // 801E3BC0
  c->r[0]=c->r[4]+0x00004110u; // 801E3BC4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E3BC8
  c->r[0]=R32(c->r[13]+0xFFFFBB1Cu); // 801E3BCC
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BD0
  if (crb(c,2)) { goto L_801E3C28; } // 801E3BD4
  c->r[3]=c->r[3]+0x00000008u; // 801E3BD8
  c->lr=0x801E3BE0u; f_801E40F4(c); // 801E3BDC
  c->r[0]=R32(c->r[29]+0x00002414u); // 801E3BE0
  cmps(c,0,(int32_t)c->r[0],0); // 801E3BE4
  if (crb(c,2)) { goto L_801E3C20; } // 801E3BE8
  c->r[3]=c->r[29]+0x000023E4u; // 801E3BEC
  c->lr=0x801E3BF4u; f_80056A84(c); // 801E3BF0
  c->lr=0x801E3BF8u; f_80056B5C(c); // 801E3BF4
  c->r[31]=c->r[3]|c->r[3]; // 801E3BF8
  c->lr=0x801E3C00u; f_80056B64(c); // 801E3BFC
  c->lr=0x801E3C04u; f_80056B54(c); // 801E3C00
  c->r[3]=R32(c->r[29]+0x00002414u); // 801E3C04
  c->lr=0x801E3C0Cu; f_80047B20(c); // 801E3C08
  c->r[3]=c->r[31]|c->r[31]; // 801E3C0C
  c->lr=0x801E3C14u; f_80056B54(c); // 801E3C10
  c->r[0]=0u+0x00000000u; // 801E3C14
  W32(c->r[29]+0x00002414u,c->r[0]); // 801E3C18
  W32(c->r[29]+0x00002418u,c->r[0]); // 801E3C1C
L_801E3C20:;
  c->r[0]=0u+0x00000000u; // 801E3C20
  W32(c->r[13]+0xFFFFBB1Cu,c->r[0]); // 801E3C24
L_801E3C28:;
  c->r[3]=c->r[29]+0x00000008u; // 801E3C28
  c->r[4]=0u+0xFFFFFFFFu; // 801E3C2C
  c->lr=0x801E3C34u; f_801E3F14(c); // 801E3C30
  c->r[3]=c->r[29]|c->r[29]; // 801E3C34
  c->r[4]=0u+0x00000000u; // 801E3C38
  c->lr=0x801E3C40u; f_80074E70(c); // 801E3C3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801E3C40
  cmps(c,0,(int32_t)c->r[0],0); // 801E3C44
  if (!crb(c,1)) { goto L_801E3C54; } // 801E3C48
  c->r[3]=c->r[29]|c->r[29]; // 801E3C4C
  c->lr=0x801E3C54u; f_80047B20(c); // 801E3C50
L_801E3C54:;
  c->r[3]=c->r[29]|c->r[29]; // 801E3C54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3C58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3C5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3C60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3C64
  c->lr=c->r[0]; // 801E3C68
  c->r[1]=c->r[1]+0x00000020u; // 801E3C6C
  return; // 801E3C70
}

// fn_801E3C74
void f_801E3C74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3C74
  c->r[0]=c->lr; // 801E3C78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E3C7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E3C80
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E3C84
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E3C88
  c->r[29]=c->r[3]|c->r[3]; // 801E3C8C
  c->r[30]=c->r[4]|c->r[4]; // 801E3C90
  c->r[0]=0u+0x00080000u; // 801E3C94
  W32(c->r[3]+0x00002418u,c->r[0]); // 801E3C98
  c->lr=0x801E3CA0u; f_80056B5C(c); // 801E3C9C
  c->r[31]=c->r[3]|c->r[3]; // 801E3CA0
  c->lr=0x801E3CA8u; f_80056B64(c); // 801E3CA4
  c->lr=0x801E3CACu; f_80056B54(c); // 801E3CA8
  c->r[3]=0u+0x00080000u; // 801E3CAC
  c->lr=0x801E3CB4u; f_80054464(c); // 801E3CB0
  W32(c->r[29]+0x00002414u,c->r[3]); // 801E3CB4
  c->r[3]=c->r[31]|c->r[31]; // 801E3CB8
  c->lr=0x801E3CC0u; f_80056B54(c); // 801E3CBC
  c->r[3]=c->r[29]+0x000023E4u; // 801E3CC0
  c->r[4]=R32(c->r[29]+0x00002414u); // 801E3CC4
  c->r[5]=R32(c->r[29]+0x00002418u); // 801E3CC8
  c->r[6]=0u+0x00000020u; // 801E3CCC
  c->r[7]=c->r[13]+0xFFFF9CF0u; // 801E3CD0
  c->lr=0x801E3CD8u; f_800569F4(c); // 801E3CD4
  c->r[3]=c->r[29]+0x00000008u; // 801E3CD8
  c->r[4]=c->r[29]+0x000023E4u; // 801E3CDC
  c->lr=0x801E3CE4u; f_801E3FB4(c); // 801E3CE0
  c->r[3]=c->r[30]|c->r[30]; // 801E3CE4
  c->r[4]=0u+0x00010000u; // 801E3CE8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801E3CEC
  c->r[5]=0u+0x00000000u; // 801E3CF0
  c->lr=0x801E3CF8u; f_8005E190(c); // 801E3CF4
  c->r[3]=c->r[30]|c->r[30]; // 801E3CF8
  c->r[4]=0u+0x00000200u; // 801E3CFC
  c->r[5]=0u+0x00000001u; // 801E3D00
  c->lr=0x801E3D08u; f_8005E190(c); // 801E3D04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E3D08
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E3D0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E3D10
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E3D14
  c->lr=c->r[0]; // 801E3D18
  c->r[1]=c->r[1]+0x00000020u; // 801E3D1C
  return; // 801E3D20
}

// fn_801E3D24
void f_801E3D24(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801E3D24
  f_801E451C(c); return; // 801E3D28
}

// fn_801E3D2C
void f_801E3D2C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801E3D2C
  f_801E451C(c); return; // 801E3D30
}

// fn_801E3D34
void f_801E3D34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3D34
  c->r[0]=c->lr; // 801E3D38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3D3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3D40
  c->r[31]=c->r[3]|c->r[3]; // 801E3D44
  c->r[4]=0u+0x80470000u; // 801E3D48
  c->r[0]=c->r[4]+0x000040F4u; // 801E3D4C
  W32(c->r[3]+0x00002478u,c->r[0]); // 801E3D50
  c->lr=0x801E3D58u; f_8005DF58(c); // 801E3D54
  c->r[3]=c->r[31]+0x0000005Cu; // 801E3D58
  c->lr=0x801E3D60u; f_801E3B30(c); // 801E3D5C
  c->r[3]=c->r[31]|c->r[31]; // 801E3D60
  c->r[4]=c->r[31]+0x0000005Cu; // 801E3D64
  c->r[5]=0u+0x00010000u; // 801E3D68
  c->r[5]=c->r[5]+0xFFFF8000u; // 801E3D6C
  c->r[6]=0u+0x00000001u; // 801E3D70
  c->r[7]=0u+0x00000FFFu; // 801E3D74
  c->r[8]=0u+0x80470000u; // 801E3D78
  c->r[8]=c->r[8]+0x000040C8u; // 801E3D7C
  c->r[9]=0u+0x00000000u; // 801E3D80
  c->lr=0x801E3D88u; f_8005E01C(c); // 801E3D84
  c->r[3]=c->r[31]|c->r[31]; // 801E3D88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3D8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3D90
  c->lr=c->r[0]; // 801E3D94
  c->r[1]=c->r[1]+0x00000010u; // 801E3D98
  return; // 801E3D9C
}

// fn_801E3DA0
void f_801E3DA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3DA0
  c->r[0]=c->lr; // 801E3DA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3DA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3DAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3DB0
  c->r[30]=c->r[3]|c->r[3]; // 801E3DB4
  c->r[31]=c->r[4]|c->r[4]; // 801E3DB8
  cmps(c,0,(int32_t)c->r[3],0); // 801E3DBC
  if (crb(c,2)) { goto L_801E3E00; } // 801E3DC0
  c->r[4]=0u+0x80470000u; // 801E3DC4
  c->r[0]=c->r[4]+0x000040F4u; // 801E3DC8
  W32(c->r[3]+0x00002478u,c->r[0]); // 801E3DCC
  c->lr=0x801E3DD4u; f_8005E10C(c); // 801E3DD0
  c->r[3]=c->r[30]+0x0000005Cu; // 801E3DD4
  c->r[4]=0u+0xFFFFFFFFu; // 801E3DD8
  c->lr=0x801E3DE0u; f_801E3B98(c); // 801E3DDC
  c->r[3]=c->r[30]|c->r[30]; // 801E3DE0
  c->r[4]=0u+0xFFFFFFFFu; // 801E3DE4
  c->lr=0x801E3DECu; f_8005DF94(c); // 801E3DE8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E3DEC
  cmps(c,0,(int32_t)c->r[0],0); // 801E3DF0
  if (!crb(c,1)) { goto L_801E3E00; } // 801E3DF4
  c->r[3]=c->r[30]|c->r[30]; // 801E3DF8
  c->lr=0x801E3E00u; f_80047B20(c); // 801E3DFC
L_801E3E00:;
  c->r[3]=c->r[30]|c->r[30]; // 801E3E00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3E04
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E3E08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3E0C
  c->lr=c->r[0]; // 801E3E10
  c->r[1]=c->r[1]+0x00000010u; // 801E3E14
  return; // 801E3E18
}

// fn_801E3E1C
void f_801E3E1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3E1C
  c->r[0]=c->lr; // 801E3E20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3E24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3E28
  c->r[31]=c->r[3]|c->r[3]; // 801E3E2C
  c->r[4]=0u+0x80470000u; // 801E3E30
  c->r[0]=c->r[4]+0x00004150u; // 801E3E34
  W32(c->r[3]+0x000023D4u,c->r[0]); // 801E3E38
  c->r[3]=c->r[3]+0x0000002Cu; // 801E3E3C
  c->r[4]=0u+0x801E0000u; // 801E3E40
  c->r[4]=c->r[4]+0x00006EF0u; // 801E3E44
  c->r[5]=0u+0x801E0000u; // 801E3E48
  c->r[5]=c->r[5]+0x00006E8Cu; // 801E3E4C
  c->r[6]=0u+0x00000144u; // 801E3E50
  c->r[7]=0u+0x00000002u; // 801E3E54
  c->lr=0x801E3E5Cu; f_802F07B0(c); // 801E3E58
  c->r[3]=c->r[31]+0x0000048Cu; // 801E3E5C
  c->lr=0x801E3E64u; f_801E6A94(c); // 801E3E60
  c->r[3]=0u+0x00000000u; // 801E3E64
  W32(c->r[31]+0x00000018u,c->r[3]); // 801E3E68
  W32(c->r[31]+0x00002390u,c->r[3]); // 801E3E6C
  W32(c->r[31]+0x00002394u,c->r[3]); // 801E3E70
  W32(c->r[31]+0x0000239Cu,c->r[3]); // 801E3E74
  W32(c->r[31]+0x00002398u,c->r[3]); // 801E3E78
  W32(c->r[31]+0x00002384u,c->r[3]); // 801E3E7C
  W32(c->r[31]+0x000023A0u,c->r[3]); // 801E3E80
  W32(c->r[31]+0x00000004u,c->r[3]); // 801E3E84
  W32(c->r[31]+0x00000008u,c->r[3]); // 801E3E88
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801E3E8C
  W32(c->r[31]+0x00000010u,c->r[3]); // 801E3E90
  W32(c->r[31]+0x000023A4u,c->r[3]); // 801E3E94
  c->r[0]=0u+0xFFFFFFFFu; // 801E3E98
  W32(c->r[31]+0x000023ACu,c->r[0]); // 801E3E9C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801E3EA0
  W32(c->r[31]+0x000023C0u,c->r[3]); // 801E3EA4
  W32(c->r[31]+0x000023B4u,c->r[3]); // 801E3EA8
  W32(c->r[31]+0x000023C4u,c->r[3]); // 801E3EAC
  W32(c->r[31]+0x000023B0u,c->r[3]); // 801E3EB0
  W32(c->r[31]+0x00000480u,c->r[3]); // 801E3EB4
  W32(c->r[31]+0x00000484u,c->r[3]); // 801E3EB8
  W32(c->r[31]+0x00000488u,c->r[3]); // 801E3EBC
  c->r[0]=0u+0x00000700u; // 801E3EC0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E3EC4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801E3EC8
  W32(c->r[31]+0x00000020u,c->r[3]); // 801E3ECC
  W32(c->r[31]+0x00000024u,c->r[3]); // 801E3ED0
  W32(c->r[31]+0x00000028u,c->r[3]); // 801E3ED4
  W32(c->r[31]+0x000002B4u,c->r[3]); // 801E3ED8
  W32(c->r[31]+0x000002B8u,c->r[3]); // 801E3EDC
  W32(c->r[31]+0x000002BCu,c->r[3]); // 801E3EE0
  c->r[3]=c->r[31]|c->r[31]; // 801E3EE4
  c->lr=0x801E3EECu; f_801E6E10(c); // 801E3EE8
  c->r[3]=c->r[31]+0x000002C0u; // 801E3EEC
  c->r[4]=0u+0x00000000u; // 801E3EF0
  c->r[5]=0u+0x000001C0u; // 801E3EF4
  c->lr=0x801E3EFCu; f_800060B8(c); // 801E3EF8
  c->r[3]=c->r[31]|c->r[31]; // 801E3EFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3F00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3F04
  c->lr=c->r[0]; // 801E3F08
  c->r[1]=c->r[1]+0x00000010u; // 801E3F0C
  return; // 801E3F10
}

// fn_801E3F14
void f_801E3F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3F14
  c->r[0]=c->lr; // 801E3F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E3F20
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E3F24
  c->r[30]=c->r[3]|c->r[3]; // 801E3F28
  c->r[31]=c->r[4]|c->r[4]; // 801E3F2C
  cmps(c,0,(int32_t)c->r[3],0); // 801E3F30
  if (crb(c,2)) { goto L_801E3F98; } // 801E3F34
  c->r[4]=0u+0x80470000u; // 801E3F38
  c->r[0]=c->r[4]+0x00004150u; // 801E3F3C
  W32(c->r[3]+0x000023D4u,c->r[0]); // 801E3F40
  c->r[0]=R32(c->r[3]+0x000023A0u); // 801E3F44
  cmps(c,0,(int32_t)c->r[0],0); // 801E3F48
  if (crb(c,2)) { goto L_801E3F58; } // 801E3F4C
  c->r[0]=0u+0x00000000u; // 801E3F50
  W32(c->r[3]+0x000023A0u,c->r[0]); // 801E3F54
L_801E3F58:;
  c->r[3]=c->r[30]|c->r[30]; // 801E3F58
  c->lr=0x801E3F60u; f_801E40F4(c); // 801E3F5C
  c->r[3]=c->r[30]+0x0000048Cu; // 801E3F60
  c->r[4]=0u+0xFFFFFFFFu; // 801E3F64
  c->lr=0x801E3F6Cu; f_801E6840(c); // 801E3F68
  c->r[3]=c->r[30]+0x0000002Cu; // 801E3F6C
  c->r[4]=0u+0x801E0000u; // 801E3F70
  c->r[4]=c->r[4]+0x00006E8Cu; // 801E3F74
  c->r[5]=0u+0x00000144u; // 801E3F78
  c->r[6]=0u+0x00000002u; // 801E3F7C
  c->lr=0x801E3F84u; f_802F08A8(c); // 801E3F80
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E3F84
  cmps(c,0,(int32_t)c->r[0],0); // 801E3F88
  if (!crb(c,1)) { goto L_801E3F98; } // 801E3F8C
  c->r[3]=c->r[30]|c->r[30]; // 801E3F90
  c->lr=0x801E3F98u; f_80047B20(c); // 801E3F94
L_801E3F98:;
  c->r[3]=c->r[30]|c->r[30]; // 801E3F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E3F9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E3FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E3FA4
  c->lr=c->r[0]; // 801E3FA8
  c->r[1]=c->r[1]+0x00000010u; // 801E3FAC
  return; // 801E3FB0
}

// fn_801E3FB4
void f_801E3FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E3FB4
  c->r[0]=c->lr; // 801E3FB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E3FBC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E3FC0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801E3FC4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801E3FC8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801E3FCC
  c->r[28]=c->r[3]|c->r[3]; // 801E3FD0
  W32(c->r[3]+0x00000018u,c->r[4]); // 801E3FD4
  c->r[3]=0u+0x80430000u; // 801E3FD8
  c->r[4]=c->r[3]+0x000010E8u; // 801E3FDC
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E3FE0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E3FE4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E3FE8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E3FEC
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E3FF0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E3FF4
  W32(c->r[1]+0x00000010u,c->r[3]); // 801E3FF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E3FFC
  c->r[29]=0u+0x00000000u; // 801E4000
  c->r[31]=c->r[1]+0x00000008u; // 801E4004
  c->r[30]=c->r[28]|c->r[28]; // 801E4008
L_801E400C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E400C
  cmps(c,0,(int32_t)c->r[4],0); // 801E4010
  if (crb(c,2)) { goto L_801E4034; } // 801E4014
  c->r[3]=R32(c->r[28]+0x00000018u); // 801E4018
  c->lr=0x801E4020u; f_80056AC0(c); // 801E401C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 801E4020
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801E4024
  c->r[4]=0u+0x00000000u; // 801E4028
  c->r[5]=R32(c->r[31]+0x00000000u); // 801E402C
  c->lr=0x801E4034u; f_800060B8(c); // 801E4030
L_801E4034:;
  c->r[31]=c->r[31]+0x00000004u; // 801E4034
  c->r[30]=c->r[30]+0x00000004u; // 801E4038
  c->r[29]=c->r[29]+0x00000001u; // 801E403C
  cmpu(c,0,c->r[29],0x00000004u); // 801E4040
  if (crb(c,0)) { IRQCHK(c); goto L_801E400C; } // 801E4044
  c->r[3]=c->r[28]+0x0000048Cu; // 801E4048
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 801E404C
  c->r[5]=0u+0x00020000u; // 801E4050
  c->lr=0x801E4058u; f_801E1F80(c); // 801E4054
  c->r[3]=c->r[28]+0x0000002Cu; // 801E4058
  c->r[4]=R32(c->r[28]+0x00000024u); // 801E405C
  c->r[5]=0u+0x00020000u; // 801E4060
  c->lr=0x801E4068u; f_801E3190(c); // 801E4064
  c->r[3]=c->r[28]+0x00000170u; // 801E4068
  c->r[4]=R32(c->r[28]+0x00000028u); // 801E406C
  c->r[5]=0u+0x00010000u; // 801E4070
  c->lr=0x801E4078u; f_801E3190(c); // 801E4074
  c->r[3]=0u+0x80430000u; // 801E4078
  c->r[31]=c->r[3]+0x00000FF0u; // 801E407C
  goto L_801E4094; // 801E4080
L_801E4084:;
  c->r[3]=c->r[28]+0x0000002Cu; // 801E4084
  c->r[5]=R32(c->r[31]+0x00000004u); // 801E4088
  c->lr=0x801E4090u; f_801E340C(c); // 801E408C
  c->r[31]=c->r[31]+0x00000008u; // 801E4090
L_801E4094:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E4094
  cmps(c,0,(int32_t)c->r[4],0); // 801E4098
  if (!crb(c,2)) { IRQCHK(c); goto L_801E4084; } // 801E409C
  c->r[3]=0u+0x80430000u; // 801E40A0
  c->r[31]=c->r[3]+0x00001030u; // 801E40A4
  goto L_801E40BC; // 801E40A8
L_801E40AC:;
  c->r[3]=c->r[28]+0x00000170u; // 801E40AC
  c->r[5]=R32(c->r[31]+0x00000004u); // 801E40B0
  c->lr=0x801E40B8u; f_801E340C(c); // 801E40B4
  c->r[31]=c->r[31]+0x00000008u; // 801E40B8
L_801E40BC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 801E40BC
  cmps(c,0,(int32_t)c->r[4],0); // 801E40C0
  if (!crb(c,2)) { IRQCHK(c); goto L_801E40AC; } // 801E40C4
  c->r[3]=c->r[28]|c->r[28]; // 801E40C8
  c->r[4]=0u+0x00000000u; // 801E40CC
  c->lr=0x801E40D4u; f_801E6E20(c); // 801E40D0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E40D4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801E40D8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801E40DC
  c->r[28]=R32(c->r[1]+0x00000020u); // 801E40E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E40E4
  c->lr=c->r[0]; // 801E40E8
  c->r[1]=c->r[1]+0x00000030u; // 801E40EC
  return; // 801E40F0
}

// fn_801E40F4
void f_801E40F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E40F4
  c->r[0]=c->lr; // 801E40F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E40FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4100
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4104
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4108
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E410C
  c->r[28]=c->r[3]|c->r[3]; // 801E4110
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E4114
  cmps(c,0,(int32_t)c->r[0],0); // 801E4118
  if (crb(c,2)) { goto L_801E417C; } // 801E411C
  c->r[3]=c->r[3]+0x0000048Cu; // 801E4120
  c->lr=0x801E4128u; f_801E2020(c); // 801E4124
  c->r[3]=c->r[28]+0x0000002Cu; // 801E4128
  c->lr=0x801E4130u; f_801E3200(c); // 801E412C
  c->r[3]=c->r[28]+0x00000170u; // 801E4130
  c->lr=0x801E4138u; f_801E3200(c); // 801E4134
  c->r[29]=0u+0x00000000u; // 801E4138
  c->r[30]=c->r[28]|c->r[28]; // 801E413C
  c->r[31]=0u+0x00000000u; // 801E4140
L_801E4144:;
  cmpu(c,0,c->r[29],0x00000001u); // 801E4144
  if (crb(c,2)) { goto L_801E4164; } // 801E4148
  c->r[4]=R32(c->r[30]+0x0000001Cu); // 801E414C
  cmps(c,0,(int32_t)c->r[4],0); // 801E4150
  if (crb(c,2)) { goto L_801E4160; } // 801E4154
  c->r[3]=R32(c->r[28]+0x00000018u); // 801E4158
  c->lr=0x801E4160u; f_80056B0C(c); // 801E415C
L_801E4160:;
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801E4160
L_801E4164:;
  c->r[30]=c->r[30]+0x00000004u; // 801E4164
  c->r[29]=c->r[29]+0x00000001u; // 801E4168
  cmpu(c,0,c->r[29],0x00000004u); // 801E416C
  if (crb(c,0)) { IRQCHK(c); goto L_801E4144; } // 801E4170
  c->r[0]=0u+0x00000000u; // 801E4174
  W32(c->r[28]+0x00000018u,c->r[0]); // 801E4178
L_801E417C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E417C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4180
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4184
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E4188
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E418C
  c->lr=c->r[0]; // 801E4190
  c->r[1]=c->r[1]+0x00000020u; // 801E4194
  return; // 801E4198
}

// fn_801E419C
void f_801E419C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E419C
  c->r[0]=c->lr; // 801E41A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E41A4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E41A8
  c->r[0]=rotl(c->r[0],0)&0x0001FFFEu; // 801E41AC
  cmps(c,0,(int32_t)c->r[0],0); // 801E41B0
  if (crb(c,2)) { goto L_801E41C8; } // 801E41B4
  c->r[4]=0u+0x00000029u; // 801E41B8
  c->lr=0x801E41C0u; f_801E6E20(c); // 801E41BC
  c->r[3]=0u+0x00000001u; // 801E41C0
  goto L_801E41CC; // 801E41C4
L_801E41C8:;
  c->r[3]=0u+0x00000000u; // 801E41C8
L_801E41CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E41CC
  c->lr=c->r[0]; // 801E41D0
  c->r[1]=c->r[1]+0x00000010u; // 801E41D4
  return; // 801E41D8
}

// fn_801E41DC
void f_801E41DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E41DC
  c->r[0]=c->lr; // 801E41E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E41E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E41E8
  c->r[31]=c->r[3]|c->r[3]; // 801E41EC
  c->r[3]=c->r[3]+0x0000048Cu; // 801E41F0
  c->r[4]=c->r[1]+0x00000008u; // 801E41F4
  c->lr=0x801E41FCu; f_801E6D60(c); // 801E41F8
  c->r[3]=c->r[31]+0x000023CCu; // 801E41FC
  c->r[4]=c->r[1]+0x00000008u; // 801E4200
  c->lr=0x801E4208u; f_801E6D4C(c); // 801E4204
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4208
  c->lr=0x801E4210u; f_801E6D20(c); // 801E420C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4210
  if (crb(c,2)) { goto L_801E42DC; } // 801E4214
  c->r[5]=0u+0x00000000u; // 801E4218
  c->r[6]=0u+0x00000000u; // 801E421C
  c->r[3]=0u+0x80470000u; // 801E4220
  c->r[3]=c->r[3]+0x00003B90u; // 801E4224
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E4228
  c->r[0]=0u+0x00000011u; // 801E422C
  c->ctr=c->r[0]; // 801E4230
L_801E4234:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E4234
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E4238
  if (!crb(c,2)) { goto L_801E4248; } // 801E423C
  c->r[5]=c->r[6]|c->r[6]; // 801E4240
  goto L_801E4254; // 801E4244
L_801E4248:;
  c->r[3]=c->r[3]+0x00000004u; // 801E4248
  c->r[6]=c->r[6]+0x00000001u; // 801E424C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4234; } // 801E4250
L_801E4254:;
  cmpu(c,0,c->r[5],0x00000011u); // 801E4254
  if (!crb(c,0)) { goto L_801E42DC; } // 801E4258
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E425C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)68); // 801E4260
  c->r[3]=0u+0x80470000u; // 801E4264
  c->r[0]=c->r[3]+0x00003BD8u; // 801E4268
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801E426C
  c->r[0]=c->r[0]+c->r[4]; // 801E4270
  c->r[0]=R32(c->r[3]+c->r[0]); // 801E4274
  cmps(c,0,(int32_t)c->r[0],2); // 801E4278
  if (crb(c,2)) { goto L_801E4294; } // 801E427C
  if (!crb(c,0)) { goto L_801E4288; } // 801E4280
  goto L_801E42B0; // 801E4284
L_801E4288:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E4288
  if (!crb(c,0)) { goto L_801E42B0; } // 801E428C
  goto L_801E42A0; // 801E4290
L_801E4294:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4294
  c->lr=0x801E429Cu; f_801E6CCC(c); // 801E4298
  goto L_801E42DC; // 801E429C
L_801E42A0:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E42A0
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E42A4
  c->lr=0x801E42ACu; f_801E6C70(c); // 801E42A8
  goto L_801E42DC; // 801E42AC
L_801E42B0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801E42B0
  c->r[0]=0u+0x00000001u; // 801E42B4
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801E42B8
  c->r[0]=c->r[3]|c->r[0]; // 801E42BC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E42C0
  c->r[3]=c->r[31]|c->r[31]; // 801E42C4
  c->lr=0x801E42CCu; f_801E419C(c); // 801E42C8
  cmps(c,0,(int32_t)c->r[3],0); // 801E42CC
  if (crb(c,2)) { goto L_801E42DC; } // 801E42D0
  c->r[3]=0u+0x00000000u; // 801E42D4
  goto L_801E42E4; // 801E42D8
L_801E42DC:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E42DC
  c->lr=0x801E42E4u; f_801E6C60(c); // 801E42E0
L_801E42E4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E42E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E42E8
  c->lr=c->r[0]; // 801E42EC
  c->r[1]=c->r[1]+0x00000020u; // 801E42F0
  return; // 801E42F4
}

// fn_801E42F8
void f_801E42F8(Ctx* __restrict c) {
  W32(c->r[3]+0x000023A4u,c->r[4]); // 801E42F8
  W32(c->r[3]+0x0000239Cu,c->r[5]); // 801E42FC
  c->r[0]=0u+0xFFFFFFFFu; // 801E4300
  W32(c->r[3]+0x000023ACu,c->r[0]); // 801E4304
  c->r[4]=0u+0x0000003Fu; // 801E4308
  f_801E6E20(c); return; // 801E430C
}

// fn_801E4310
void f_801E4310(Ctx* __restrict c) {
  W32(c->r[3]+0x00002388u,c->r[4]); // 801E4310
  W32(c->r[3]+0x0000238Cu,c->r[5]); // 801E4314
  W32(c->r[3]+0x0000239Cu,c->r[6]); // 801E4318
  c->r[4]=0u+0x00000028u; // 801E431C
  f_801E6E20(c); return; // 801E4320
}

// fn_801E4324
void f_801E4324(Ctx* __restrict c) {
  c->r[6]=0u+0xFFFFFFFFu; // 801E4324
  c->r[8]=0u+0x00000000u; // 801E4328
  c->r[0]=0u+0x00000002u; // 801E432C
  goto L_801E4424; // 801E4330
L_801E4334:;
  c->r[7]=R8(c->r[4]+0x00000000u); // 801E4334
  c->r[7]=rotl(c->r[7],24)&0xFF000000u; // 801E4338
  c->r[9]=0u+0x00000000u; // 801E433C
  c->ctr=c->r[0]; // 801E4340
L_801E4344:;
  c->r[3]=rotl(c->r[6],0)&0x80000000u; // 801E4344
  cmps(c,0,(int32_t)c->r[3],0); // 801E4348
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801E434C
  if (crb(c,2)) { goto L_801E435C; } // 801E4350
  c->r[6]=c->r[6]^0x04C10000u; // 801E4354
  c->r[6]=c->r[6]^0x00001DB7u; // 801E4358
L_801E435C:;
  c->r[3]=rotl(c->r[7],0)&0x80000000u; // 801E435C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4360
  if (crb(c,2)) { goto L_801E4374; } // 801E4364
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E4368
  c->r[6]=c->r[6]^0x00000001u; // 801E436C
  goto L_801E4378; // 801E4370
L_801E4374:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E4374
L_801E4378:;
  c->r[3]=rotl(c->r[6],0)&0x80000000u; // 801E4378
  cmps(c,0,(int32_t)c->r[3],0); // 801E437C
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801E4380
  if (crb(c,2)) { goto L_801E4390; } // 801E4384
  c->r[6]=c->r[6]^0x04C10000u; // 801E4388
  c->r[6]=c->r[6]^0x00001DB7u; // 801E438C
L_801E4390:;
  c->r[3]=rotl(c->r[7],0)&0x80000000u; // 801E4390
  cmps(c,0,(int32_t)c->r[3],0); // 801E4394
  if (crb(c,2)) { goto L_801E43A8; } // 801E4398
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E439C
  c->r[6]=c->r[6]^0x00000001u; // 801E43A0
  goto L_801E43AC; // 801E43A4
L_801E43A8:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E43A8
L_801E43AC:;
  c->r[3]=rotl(c->r[6],0)&0x80000000u; // 801E43AC
  cmps(c,0,(int32_t)c->r[3],0); // 801E43B0
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801E43B4
  if (crb(c,2)) { goto L_801E43C4; } // 801E43B8
  c->r[6]=c->r[6]^0x04C10000u; // 801E43BC
  c->r[6]=c->r[6]^0x00001DB7u; // 801E43C0
L_801E43C4:;
  c->r[3]=rotl(c->r[7],0)&0x80000000u; // 801E43C4
  cmps(c,0,(int32_t)c->r[3],0); // 801E43C8
  if (crb(c,2)) { goto L_801E43DC; } // 801E43CC
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E43D0
  c->r[6]=c->r[6]^0x00000001u; // 801E43D4
  goto L_801E43E0; // 801E43D8
L_801E43DC:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E43DC
L_801E43E0:;
  c->r[3]=rotl(c->r[6],0)&0x80000000u; // 801E43E0
  cmps(c,0,(int32_t)c->r[3],0); // 801E43E4
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801E43E8
  if (crb(c,2)) { goto L_801E43F8; } // 801E43EC
  c->r[6]=c->r[6]^0x04C10000u; // 801E43F0
  c->r[6]=c->r[6]^0x00001DB7u; // 801E43F4
L_801E43F8:;
  c->r[3]=rotl(c->r[7],0)&0x80000000u; // 801E43F8
  cmps(c,0,(int32_t)c->r[3],0); // 801E43FC
  if (crb(c,2)) { goto L_801E4410; } // 801E4400
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E4404
  c->r[6]=c->r[6]^0x00000001u; // 801E4408
  goto L_801E4414; // 801E440C
L_801E4410:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801E4410
L_801E4414:;
  c->r[9]=c->r[9]+0x00000003u; // 801E4414
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E4344; } // 801E4418
  c->r[8]=c->r[8]+0x00000001u; // 801E441C
  c->r[4]=c->r[4]+0x00000001u; // 801E4420
L_801E4424:;
  cmpu(c,0,c->r[8],c->r[5]); // 801E4424
  if (crb(c,0)) { IRQCHK(c); goto L_801E4334; } // 801E4428
  c->r[0]=0u+0xFFFFFFFFu; // 801E442C
  c->r[3]=c->r[6]^c->r[0]; // 801E4430
  return; // 801E4434
}

// fn_801E4438
void f_801E4438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4438
  c->r[0]=c->lr; // 801E443C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4440
  c->lr=0x801E4448u; f_801E4324(c); // 801E4444
  c->r[0]=cntlz(c->r[3]); // 801E4448
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E444C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4450
  c->lr=c->r[0]; // 801E4454
  c->r[1]=c->r[1]+0x00000010u; // 801E4458
  return; // 801E445C
}

// fn_801E4460
void f_801E4460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4460
  c->r[0]=c->lr; // 801E4464
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E446C
  c->r[31]=c->r[4]+c->r[5]; // 801E4470
  c->r[0]=0u+0x00000000u; // 801E4474
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 801E4478
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 801E447C
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 801E4480
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 801E4484
  c->lr=0x801E448Cu; f_801E4324(c); // 801E4488
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 801E448C
  W8(c->r[31]+0xFFFFFFFCu,c->r[0]); // 801E4490
  c->r[0]=rotl(c->r[3],16)&0x000000FFu; // 801E4494
  W8(c->r[31]+0xFFFFFFFDu,c->r[0]); // 801E4498
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 801E449C
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 801E44A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801E44A4
  W8(c->r[31]+0xFFFFFFFFu,c->r[0]); // 801E44A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E44AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E44B0
  c->lr=c->r[0]; // 801E44B4
  c->r[1]=c->r[1]+0x00000010u; // 801E44B8
  return; // 801E44BC
}

// fn_801E44C0
void f_801E44C0(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 801E44C0
  c->r[7]=0u+0x00000000u; // 801E44C4
  c->r[5]=0u+0x80470000u; // 801E44C8
  c->r[5]=c->r[5]+0x00003B90u; // 801E44CC
  c->r[0]=0u+0x00000011u; // 801E44D0
  c->ctr=c->r[0]; // 801E44D4
L_801E44D8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801E44D8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E44DC
  if (!crb(c,2)) { goto L_801E44EC; } // 801E44E0
  c->r[6]=c->r[7]|c->r[7]; // 801E44E4
  goto L_801E44F8; // 801E44E8
L_801E44EC:;
  c->r[5]=c->r[5]+0x00000004u; // 801E44EC
  c->r[7]=c->r[7]+0x00000001u; // 801E44F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E44D8; } // 801E44F4
L_801E44F8:;
  cmpu(c,0,c->r[6],0x00000011u); // 801E44F8
  if (!crb(c,0)) return; // 801E44FC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801E4500
  c->r[0]=0u+0x00000001u; // 801E4504
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[0]<<((c->r[6])&31)); // 801E4508
  c->r[0]=c->r[4]|c->r[0]; // 801E450C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E4510
  f_801E419C(c); return; // 801E4514
  return; // 801E4518
}

// fn_801E451C
void f_801E451C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E451C
  c->r[0]=c->lr; // 801E4520
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4524
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4528
  c->r[31]=c->r[3]|c->r[3]; // 801E452C
  c->r[5]=R32(c->r[3]+0x00002390u); // 801E4530
  c->r[0]=R32(c->r[3]+0x00002394u); // 801E4534
  cmpu(c,0,c->r[5],c->r[0]); // 801E4538
  if (!crb(c,2)) { goto L_801E4550; } // 801E453C
  c->r[4]=R32(c->r[3]+0x00000000u); // 801E4540
  c->r[0]=rotl(c->r[4],0)&0x00000020u; // 801E4544
  cmps(c,0,(int32_t)c->r[0],0); // 801E4548
  if (crb(c,2)) { goto L_801E4574; } // 801E454C
L_801E4550:;
  W32(c->r[3]+0x00002398u,c->r[5]); // 801E4550
  c->r[0]=R32(c->r[3]+0x00002394u); // 801E4554
  W32(c->r[3]+0x00002390u,c->r[0]); // 801E4558
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E455C
  c->r[0]=c->r[0]|0x00000010u; // 801E4560
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E4564
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801E4568
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E456C
  goto L_801E457C; // 801E4570
L_801E4574:;
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFEFu; // 801E4574
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E4578
L_801E457C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E457C
  c->lr=0x801E4584u; f_801E6E28(c); // 801E4580
  cmps(c,0,(int32_t)c->r[3],0); // 801E4584
  if (crb(c,2)) { goto L_801E45AC; } // 801E4588
  c->lr=0x801E4590u; f_80047C9C(c); // 801E458C
  c->lr=0x801E4594u; f_80065710(c); // 801E4590
  cmps(c,0,(int32_t)c->r[3],0); // 801E4594
  if (crb(c,2)) { goto L_801E45C8; } // 801E4598
  c->lr=0x801E45A0u; f_80047C9C(c); // 801E459C
  c->r[4]=0u+0x00000000u; // 801E45A0
  c->lr=0x801E45A8u; f_800656E8(c); // 801E45A4
  goto L_801E45C8; // 801E45A8
L_801E45AC:;
  c->lr=0x801E45B0u; f_80047C9C(c); // 801E45AC
  c->lr=0x801E45B4u; f_80065710(c); // 801E45B0
  cmps(c,0,(int32_t)c->r[3],0); // 801E45B4
  if (!crb(c,2)) { goto L_801E45C8; } // 801E45B8
  c->lr=0x801E45C0u; f_80047C9C(c); // 801E45BC
  c->r[4]=0u+0x00000001u; // 801E45C0
  c->lr=0x801E45C8u; f_800656E8(c); // 801E45C4
L_801E45C8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E45C8
  c->r[0]=R32(c->r[31]+0x00002390u); // 801E45CC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E45D0
  c->r[4]=0u+0x80470000u; // 801E45D4
  c->r[0]=c->r[4]+0x00003860u; // 801E45D8
  c->r[12]=c->r[0]+c->r[5]; // 801E45DC
  c->lr=0x801E45E4u; f_802F09D0(c); // 801E45E0
  c->r[0]=c->r[0]|0x00000000u; // 801E45E4
  c->r[3]=c->r[31]+0x0000048Cu; // 801E45E8
  c->lr=0x801E45F0u; f_801E2E40(c); // 801E45EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E45F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E45F4
  c->lr=c->r[0]; // 801E45F8
  c->r[1]=c->r[1]+0x00000010u; // 801E45FC
  return; // 801E4600
}

// fn_801E4604
void f_801E4604(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4604
  c->r[0]=c->lr; // 801E4608
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E460C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4610
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E4614
  c->r[30]=c->r[3]|c->r[3]; // 801E4618
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801E461C
  c->r[31]=c->r[3]+c->r[0]; // 801E4620
  c->r[3]=c->r[3]+0x0000048Cu; // 801E4624
  c->r[0]=R32(c->r[31]+0x000002D4u); // 801E4628
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E462C
  c->r[4]=c->r[30]+c->r[0]; // 801E4630
  c->r[4]=R32(c->r[4]+0x000002B4u); // 801E4634
  c->lr=0x801E463Cu; f_801E265C(c); // 801E4638
  c->r[3]=c->r[30]+0x0000048Cu; // 801E463C
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E4640
  c->r[5]=0u+0x00000000u; // 801E4644
  c->r[6]=0u+0x00000000u; // 801E4648
  c->lr=0x801E4650u; f_801E2BF8(c); // 801E464C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4650
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4654
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4658
  c->lr=c->r[0]; // 801E465C
  c->r[1]=c->r[1]+0x00000010u; // 801E4660
  return; // 801E4664
}

// fn_801E4668
void f_801E4668(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4668
  c->r[0]=c->lr; // 801E466C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4670
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4674
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4678
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E467C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E4680
  c->r[31]=c->r[3]|c->r[3]; // 801E4684
  c->r[30]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801E4688
  c->r[4]=c->r[3]+c->r[30]; // 801E468C
  c->r[28]=R32(c->r[4]+0x000002C0u); // 801E4690
  c->r[29]=R32(c->r[4]+0x000002D8u); // 801E4694
  c->lr=0x801E469Cu; f_801E41DC(c); // 801E4698
  cmps(c,0,(int32_t)c->r[3],0); // 801E469C
  if (!crb(c,2)) { goto L_801E46AC; } // 801E46A0
  c->r[3]=0u+0x00000000u; // 801E46A4
  goto L_801E478C; // 801E46A8
L_801E46AC:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E46AC
  c->r[4]=c->r[28]|c->r[28]; // 801E46B0
  c->r[5]=c->r[1]+0x00000008u; // 801E46B4
  c->lr=0x801E46BCu; f_801E28D4(c); // 801E46B8
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E46BC
  c->r[3]=c->r[31]+c->r[30]; // 801E46C0
  c->r[0]=R32(c->r[3]+0x000002C4u); // 801E46C4
  cmpu(c,0,c->r[4],c->r[0]); // 801E46C8
  if (crb(c,2)) { goto L_801E46F0; } // 801E46CC
  c->r[0]=R32(c->r[3]+0x000002C8u); // 801E46D0
  c->r[0]=c->r[0]|0x00000002u; // 801E46D4
  W32(c->r[3]+0x000002C8u,c->r[0]); // 801E46D8
  c->r[3]=c->r[31]|c->r[31]; // 801E46DC
  c->r[4]=0u+0xFFFFFFFBu; // 801E46E0
  c->lr=0x801E46E8u; f_801E44C0(c); // 801E46E4
  c->r[3]=0u+0x00000000u; // 801E46E8
  goto L_801E478C; // 801E46EC
L_801E46F0:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E46F0
  c->r[4]=c->r[28]|c->r[28]; // 801E46F4
  c->lr=0x801E46FCu; f_801E2E1C(c); // 801E46F8
  c->r[28]=c->r[3]|c->r[3]; // 801E46FC
  c->r[3]=c->r[31]|c->r[31]; // 801E4700
  c->r[4]=c->r[28]|c->r[28]; // 801E4704
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E4708
  c->lr=0x801E4710u; f_801E4438(c); // 801E470C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4710
  if (!crb(c,2)) { goto L_801E473C; } // 801E4714
  c->r[3]=c->r[31]+c->r[30]; // 801E4718
  c->r[0]=R32(c->r[3]+0x000002C8u); // 801E471C
  c->r[0]=c->r[0]|0x00000002u; // 801E4720
  W32(c->r[3]+0x000002C8u,c->r[0]); // 801E4724
  c->r[3]=c->r[31]|c->r[31]; // 801E4728
  c->r[4]=0u+0xFFFFFFFBu; // 801E472C
  c->lr=0x801E4734u; f_801E44C0(c); // 801E4730
  c->r[3]=0u+0x00000000u; // 801E4734
  goto L_801E478C; // 801E4738
L_801E473C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)324); // 801E473C
  c->r[3]=c->r[31]+c->r[0]; // 801E4740
  c->r[29]=c->r[3]+0x0000002Cu; // 801E4744
  c->r[3]=c->r[29]|c->r[29]; // 801E4748
  c->lr=0x801E4750u; f_801E3234(c); // 801E474C
  c->r[3]=c->r[29]|c->r[29]; // 801E4750
  c->r[4]=c->r[28]|c->r[28]; // 801E4754
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E4758
  c->lr=0x801E4760u; f_801E3A94(c); // 801E475C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E4760
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 801E4764
  cmps(c,0,(int32_t)c->r[0],0); // 801E4768
  if (crb(c,2)) { goto L_801E4778; } // 801E476C
  c->r[0]=c->r[3]|0x00000004u; // 801E4770
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E4774
L_801E4778:;
  c->r[3]=c->r[31]+c->r[30]; // 801E4778
  c->r[0]=R32(c->r[3]+0x000002C8u); // 801E477C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801E4780
  W32(c->r[3]+0x000002C8u,c->r[0]); // 801E4784
  c->r[3]=0u+0x00000001u; // 801E4788
L_801E478C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E478C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E4790
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E4794
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E4798
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E479C
  c->lr=c->r[0]; // 801E47A0
  c->r[1]=c->r[1]+0x00000020u; // 801E47A4
  return; // 801E47A8
}

// fn_801E47AC
void f_801E47AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E47AC
  c->r[0]=c->lr; // 801E47B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E47B4
  c->r[11]=c->r[1]+0x00000030u; // 801E47B8
  c->lr=0x801E47C0u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E47BC
  c->r[31]=c->r[3]|c->r[3]; // 801E47C0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801E47C4
  c->r[5]=c->r[3]+c->r[0]; // 801E47C8
  c->r[29]=R32(c->r[3]+0x00000020u); // 801E47CC
  c->r[27]=R32(c->r[5]+0x000002C0u); // 801E47D0
  c->r[0]=R32(c->r[5]+0x000002D4u); // 801E47D4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E47D8
  c->r[4]=c->r[3]+c->r[0]; // 801E47DC
  c->r[26]=R32(c->r[4]+0x000002B4u); // 801E47E0
  c->r[25]=R32(c->r[3]+0x000002B8u); // 801E47E4
  c->r[24]=R32(c->r[3]+0x000002B4u); // 801E47E8
  c->r[0]=R32(c->r[5]+0x000002D8u); // 801E47EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)324); // 801E47F0
  c->r[3]=c->r[3]+c->r[0]; // 801E47F4
  c->r[30]=c->r[3]+0x0000002Cu; // 801E47F8
  c->r[3]=c->r[30]|c->r[30]; // 801E47FC
  c->r[4]=0u+0x00000000u; // 801E4800
  c->lr=0x801E4808u; f_801E38A8(c); // 801E4804
  c->r[23]=c->r[3]|c->r[3]; // 801E4808
  c->r[3]=c->r[30]|c->r[30]; // 801E480C
  c->r[4]=0u+0x00000001u; // 801E4810
  c->lr=0x801E4818u; f_801E38A8(c); // 801E4814
  cmpu(c,0,c->r[23],c->r[3]); // 801E4818
  if (!crb(c,1)) { goto L_801E4824; } // 801E481C
  c->r[3]=c->r[23]|c->r[23]; // 801E4820
L_801E4824:;
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801E4824
  c->r[0]=c->r[3]+0x00000001u; // 801E4828
  c->r[28]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801E482C
  c->r[3]=c->r[29]|c->r[29]; // 801E4830
  c->r[4]=0u+0x00000000u; // 801E4834
  c->r[5]=c->r[28]|c->r[28]; // 801E4838
  c->lr=0x801E4840u; f_800060B8(c); // 801E483C
  c->r[3]=c->r[30]|c->r[30]; // 801E4840
  c->r[4]=c->r[29]|c->r[29]; // 801E4844
  c->r[5]=c->r[23]|c->r[23]; // 801E4848
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E484C
  c->r[6]=rotl(c->r[0],0)&0x00100000u; // 801E4850
  c->lr=0x801E4858u; f_801E3958(c); // 801E4854
  c->r[3]=c->r[31]|c->r[31]; // 801E4858
  c->r[4]=c->r[29]|c->r[29]; // 801E485C
  c->r[5]=c->r[28]|c->r[28]; // 801E4860
  c->lr=0x801E4868u; f_801E4460(c); // 801E4864
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4868
  c->r[4]=c->r[24]|c->r[24]; // 801E486C
  c->lr=0x801E4874u; f_801E265C(c); // 801E4870
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4874
  c->r[4]=c->r[27]|c->r[27]; // 801E4878
  c->lr=0x801E4880u; f_801E2A48(c); // 801E487C
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4880
  c->r[4]=c->r[27]|c->r[27]; // 801E4884
  c->lr=0x801E488Cu; f_801E2DAC(c); // 801E4888
  c->r[3]=c->r[31]+0x0000048Cu; // 801E488C
  c->r[4]=c->r[27]|c->r[27]; // 801E4890
  c->lr=0x801E4898u; f_801E295C(c); // 801E4894
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4898
  c->r[4]=c->r[27]|c->r[27]; // 801E489C
  c->r[5]=c->r[29]|c->r[29]; // 801E48A0
  c->r[6]=c->r[28]|c->r[28]; // 801E48A4
  c->lr=0x801E48ACu; f_801E2CA0(c); // 801E48A8
  c->r[3]=c->r[31]+0x0000048Cu; // 801E48AC
  c->r[4]=c->r[27]|c->r[27]; // 801E48B0
  c->r[5]=c->r[26]|c->r[26]; // 801E48B4
  c->lr=0x801E48BCu; f_801E2D14(c); // 801E48B8
  c->r[3]=c->r[31]+0x0000048Cu; // 801E48BC
  c->r[4]=c->r[25]|c->r[25]; // 801E48C0
  c->lr=0x801E48C8u; f_801E265C(c); // 801E48C4
  c->r[11]=c->r[1]+0x00000030u; // 801E48C8
  c->lr=0x801E48D0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E48CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E48D0
  c->lr=c->r[0]; // 801E48D4
  c->r[1]=c->r[1]+0x00000030u; // 801E48D8
  return; // 801E48DC
}

// fn_801E48E0
void f_801E48E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E48E0
  c->r[0]=c->lr; // 801E48E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E48E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E48EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E48F0
  c->r[30]=c->r[3]|c->r[3]; // 801E48F4
  c->r[31]=c->r[4]|c->r[4]; // 801E48F8
  c->lr=0x801E4900u; f_801E41DC(c); // 801E48FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E4900
  if (!crb(c,2)) { goto L_801E4910; } // 801E4904
  c->r[3]=0u+0x00000000u; // 801E4908
  goto L_801E4940; // 801E490C
L_801E4910:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801E4910
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 801E4914
  cmps(c,0,(int32_t)c->r[0],0); // 801E4918
  if (crb(c,2)) { goto L_801E4928; } // 801E491C
  c->r[0]=c->r[3]|0x00000004u; // 801E4920
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E4924
L_801E4928:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)28); // 801E4928
  c->r[3]=c->r[30]+c->r[0]; // 801E492C
  c->r[0]=R32(c->r[3]+0x000002C8u); // 801E4930
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801E4934
  W32(c->r[3]+0x000002C8u,c->r[0]); // 801E4938
  c->r[3]=0u+0x00000001u; // 801E493C
L_801E4940:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4940
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E4944
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4948
  c->lr=c->r[0]; // 801E494C
  c->r[1]=c->r[1]+0x00000010u; // 801E4950
  return; // 801E4954
}

// fn_801E4958
void f_801E4958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4958
  c->r[0]=c->lr; // 801E495C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4960
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4964
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4968
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E496C
  c->r[29]=c->r[3]|c->r[3]; // 801E4970
  c->r[30]=c->r[4]|c->r[4]; // 801E4974
  c->r[3]=c->r[3]+0x0000048Cu; // 801E4978
  c->r[4]=R32(c->r[29]+0x000002B4u); // 801E497C
  c->lr=0x801E4984u; f_801E265C(c); // 801E4980
  c->r[30]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 801E4984
  c->r[31]=c->r[29]+c->r[30]; // 801E4988
  c->r[3]=c->r[29]+0x0000048Cu; // 801E498C
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E4990
  c->lr=0x801E4998u; f_801E2A48(c); // 801E4994
  c->r[3]=c->r[29]+0x0000048Cu; // 801E4998
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E499C
  c->lr=0x801E49A4u; f_801E2DAC(c); // 801E49A0
  c->r[3]=c->r[29]+0x0000048Cu; // 801E49A4
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E49A8
  c->lr=0x801E49B0u; f_801E295C(c); // 801E49AC
  c->r[3]=c->r[29]+0x0000048Cu; // 801E49B0
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E49B4
  c->r[5]=R32(c->r[29]+0x000023B0u); // 801E49B8
  c->r[6]=c->r[31]|c->r[31]; // 801E49BC
  c->r[6]=R32(c->r[6]+0x000002C4u); // 801E49C0
  c->lr=0x801E49C8u; f_801E2CA0(c); // 801E49C4
  c->r[3]=c->r[29]+0x0000048Cu; // 801E49C8
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E49CC
  c->r[5]=R32(c->r[29]+0x000002B8u); // 801E49D0
  c->lr=0x801E49D8u; f_801E2D14(c); // 801E49D4
  c->r[3]=c->r[29]+0x0000048Cu; // 801E49D8
  c->r[4]=R32(c->r[29]+0x000002B8u); // 801E49DC
  c->lr=0x801E49E4u; f_801E265C(c); // 801E49E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E49E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E49E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E49EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E49F0
  c->lr=c->r[0]; // 801E49F4
  c->r[1]=c->r[1]+0x00000020u; // 801E49F8
  return; // 801E49FC
}

// fn_801E4A00
void f_801E4A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4A00
  c->r[0]=c->lr; // 801E4A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4A0C
  c->r[31]=c->r[3]|c->r[3]; // 801E4A10
  c->lr=0x801E4A18u; f_801E6E10(c); // 801E4A14
  c->r[3]=R32(c->r[31]+0x00000000u); // 801E4A18
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801E4A1C
  cmps(c,0,(int32_t)c->r[0],0); // 801E4A20
  if (crb(c,2)) { goto L_801E4A30; } // 801E4A24
  c->r[0]=rotl(c->r[3],0)&0xFFFFFFFEu; // 801E4A28
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E4A2C
L_801E4A30:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4A30
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4A34
  c->lr=c->r[0]; // 801E4A38
  c->r[1]=c->r[1]+0x00000010u; // 801E4A3C
  return; // 801E4A40
}

// fn_801E4A44
void f_801E4A44(Ctx* __restrict c) {
  return; // 801E4A44
}

// fn_801E4A48
void f_801E4A48(Ctx* __restrict c) {
  return; // 801E4A48
}

// fn_801E4A4C
void f_801E4A4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4A4C
  c->r[0]=c->lr; // 801E4A50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4A54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4A58
  c->r[31]=c->r[3]|c->r[3]; // 801E4A5C
  c->r[4]=0u+0x00000000u; // 801E4A60
  c->r[5]=0u+0x00000004u; // 801E4A64
  c->lr=0x801E4A6Cu; f_801E42F8(c); // 801E4A68
  c->r[3]=c->r[31]|c->r[31]; // 801E4A6C
  c->lr=0x801E4A74u; f_801E6E30(c); // 801E4A70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4A74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4A78
  c->lr=c->r[0]; // 801E4A7C
  c->r[1]=c->r[1]+0x00000010u; // 801E4A80
  return; // 801E4A84
}

// fn_801E4A88
void f_801E4A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4A88
  c->r[0]=c->lr; // 801E4A8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E4A90
  c->r[11]=c->r[1]+0x00000030u; // 801E4A94
  c->lr=0x801E4A9Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4A98
  c->r[25]=c->r[3]|c->r[3]; // 801E4A9C
  c->r[0]=0u+0x00000002u; // 801E4AA0
  W32(c->r[3]+0x00000480u,c->r[0]); // 801E4AA4
  c->r[0]=0u+0x00000008u; // 801E4AA8
  W32(c->r[3]+0x00000484u,c->r[0]); // 801E4AAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E4AB0
  c->r[0]=c->r[0]|0x00000001u; // 801E4AB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E4AB8
  c->lr=0x801E4AC0u; f_800484B8(c); // 801E4ABC
  c->r[4]=0u+0x00000003u; // 801E4AC0
  c->r[5]=c->r[1]+0x00000008u; // 801E4AC4
  c->lr=0x801E4ACCu; f_800488B0(c); // 801E4AC8
  W32(c->r[25]+0x000023B0u,c->r[3]); // 801E4ACC
  c->r[3]=c->r[25]+0x0000002Cu; // 801E4AD0
  c->r[4]=0u+0x00000001u; // 801E4AD4
  c->lr=0x801E4ADCu; f_801E38A8(c); // 801E4AD8
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801E4ADC
  c->r[0]=c->r[3]+0x00000001u; // 801E4AE0
  c->r[28]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801E4AE4
  c->r[3]=c->r[25]+0x00000170u; // 801E4AE8
  c->r[4]=0u+0x00000001u; // 801E4AEC
  c->lr=0x801E4AF4u; f_801E38A8(c); // 801E4AF0
  c->r[3]=rotl(c->r[3],27)&0x07FFFFFFu; // 801E4AF4
  c->r[0]=c->r[3]+0x00000001u; // 801E4AF8
  c->r[27]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801E4AFC
  c->r[3]=c->r[25]+0x0000048Cu; // 801E4B00
  c->r[4]=c->r[13]+0xFFFF9CF8u; // 801E4B04
  c->lr=0x801E4B0Cu; f_801E24BC(c); // 801E4B08
  W32(c->r[25]+0x000002B4u,c->r[3]); // 801E4B0C
  c->r[3]=c->r[25]+0x0000048Cu; // 801E4B10
  c->lr=0x801E4B18u; f_801E6DCC(c); // 801E4B14
  W32(c->r[25]+0x000002B8u,c->r[3]); // 801E4B18
  c->r[26]=0u+0x00000000u; // 801E4B1C
  c->r[3]=0u+0x80470000u; // 801E4B20
  c->r[30]=c->r[3]+0x00004028u; // 801E4B24
  c->r[29]=c->r[25]|c->r[25]; // 801E4B28
  c->r[31]=0u+0x804C0000u; // 801E4B2C
  c->r[24]=0u+0x00000000u; // 801E4B30
  goto L_801E4C8C; // 801E4B34
L_801E4B38:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E4B38
  cmps(c,0,(int32_t)c->r[0],0); // 801E4B3C
  if (!crb(c,2)) { goto L_801E4BD0; } // 801E4B40
  c->r[3]=c->r[25]+0x0000048Cu; // 801E4B44
  c->r[4]=R32(c->r[25]+0x000002B8u); // 801E4B48
  c->lr=0x801E4B50u; f_801E28B0(c); // 801E4B4C
  c->r[5]=c->r[3]|c->r[3]; // 801E4B50
  c->r[3]=c->r[31]+0x00002650u; // 801E4B54
  c->r[4]=c->r[13]+0xFFFF9D00u; // 801E4B58
  c->r[6]=c->r[13]+0xFFFF9CE8u; // 801E4B5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4B60
  c->lr=0x801E4B68u; f_802E7CC4(c); // 801E4B64
  c->r[3]=c->r[25]+0x0000048Cu; // 801E4B68
  c->r[4]=c->r[31]+0x00002650u; // 801E4B6C
  c->lr=0x801E4B74u; f_801E24BC(c); // 801E4B70
  c->r[0]=R32(c->r[25]+0x00000480u); // 801E4B74
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4B78
  c->r[4]=c->r[25]+c->r[0]; // 801E4B7C
  W32(c->r[4]+0x000002B4u,c->r[3]); // 801E4B80
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E4B84
  W32(c->r[29]+0x000002CCu,c->r[0]); // 801E4B88
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E4B8C
  W32(c->r[29]+0x000002D4u,c->r[0]); // 801E4B90
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E4B94
  W32(c->r[29]+0x000002D8u,c->r[0]); // 801E4B98
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E4B9C
  W32(c->r[29]+0x000002D0u,c->r[0]); // 801E4BA0
  c->r[0]=R32(c->r[25]+0x00000480u); // 801E4BA4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4BA8
  c->r[3]=c->r[25]+c->r[0]; // 801E4BAC
  c->r[0]=R32(c->r[3]+0x000002B4u); // 801E4BB0
  W32(c->r[29]+0x000002C0u,c->r[0]); // 801E4BB4
  W32(c->r[29]+0x000002C4u,c->r[24]); // 801E4BB8
  W32(c->r[29]+0x000002C8u,c->r[24]); // 801E4BBC
  c->r[3]=R32(c->r[25]+0x00000480u); // 801E4BC0
  c->r[0]=c->r[3]+0x00000001u; // 801E4BC4
  W32(c->r[25]+0x00000480u,c->r[0]); // 801E4BC8
  goto L_801E4C80; // 801E4BCC
L_801E4BD0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E4BD0
  cmps(c,0,(int32_t)c->r[0],1); // 801E4BD4
  if (crb(c,2)) { goto L_801E4C14; } // 801E4BD8
  if (!crb(c,0)) { goto L_801E4BEC; } // 801E4BDC
  cmps(c,0,(int32_t)c->r[0],0); // 801E4BE0
  if (!crb(c,0)) { goto L_801E4BF8; } // 801E4BE4
  goto L_801E4C4C; // 801E4BE8
L_801E4BEC:;
  cmps(c,0,(int32_t)c->r[0],3); // 801E4BEC
  if (!crb(c,0)) { goto L_801E4C4C; } // 801E4BF0
  goto L_801E4C30; // 801E4BF4
L_801E4BF8:;
  c->r[3]=c->r[31]+0x00002650u; // 801E4BF8
  c->r[4]=c->r[13]+0xFFFF9D08u; // 801E4BFC
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E4C00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4C04
  c->lr=0x801E4C0Cu; f_802E7CC4(c); // 801E4C08
  W32(c->r[29]+0x000002C4u,c->r[28]); // 801E4C0C
  goto L_801E4C4C; // 801E4C10
L_801E4C14:;
  c->r[3]=c->r[31]+0x00002650u; // 801E4C14
  c->r[4]=c->r[13]+0xFFFF9D08u; // 801E4C18
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E4C1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4C20
  c->lr=0x801E4C28u; f_802E7CC4(c); // 801E4C24
  W32(c->r[29]+0x000002C4u,c->r[27]); // 801E4C28
  goto L_801E4C4C; // 801E4C2C
L_801E4C30:;
  c->r[3]=c->r[31]+0x00002650u; // 801E4C30
  c->r[4]=c->r[13]+0xFFFF9D08u; // 801E4C34
  c->r[5]=R32(c->r[30]+0x00000000u); // 801E4C38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801E4C3C
  c->lr=0x801E4C44u; f_802E7CC4(c); // 801E4C40
  c->r[0]=R32(c->r[1]+0x00000008u); // 801E4C44
  W32(c->r[29]+0x000002C4u,c->r[0]); // 801E4C48
L_801E4C4C:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 801E4C4C
  W32(c->r[29]+0x000002CCu,c->r[0]); // 801E4C50
  c->r[0]=R32(c->r[30]+0x00000004u); // 801E4C54
  W32(c->r[29]+0x000002D4u,c->r[0]); // 801E4C58
  c->r[0]=R32(c->r[30]+0x00000010u); // 801E4C5C
  W32(c->r[29]+0x000002D8u,c->r[0]); // 801E4C60
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801E4C64
  W32(c->r[29]+0x000002D0u,c->r[0]); // 801E4C68
  c->r[3]=c->r[25]+0x0000048Cu; // 801E4C6C
  c->r[4]=c->r[31]+0x00002650u; // 801E4C70
  c->lr=0x801E4C78u; f_801E24BC(c); // 801E4C74
  W32(c->r[29]+0x000002C0u,c->r[3]); // 801E4C78
  W32(c->r[29]+0x000002C8u,c->r[24]); // 801E4C7C
L_801E4C80:;
  c->r[30]=c->r[30]+0x00000014u; // 801E4C80
  c->r[29]=c->r[29]+0x0000001Cu; // 801E4C84
  c->r[26]=c->r[26]+0x00000001u; // 801E4C88
L_801E4C8C:;
  c->r[0]=R32(c->r[25]+0x00000484u); // 801E4C8C
  cmpu(c,0,c->r[26],c->r[0]); // 801E4C90
  if (crb(c,0)) { IRQCHK(c); goto L_801E4B38; } // 801E4C94
  c->r[5]=0u+0x00020000u; // 801E4C98
  W32(c->r[25]+0x000023C4u,c->r[5]); // 801E4C9C
  c->r[3]=R32(c->r[25]+0x0000001Cu); // 801E4CA0
  W32(c->r[25]+0x00000020u,c->r[3]); // 801E4CA4
  c->r[4]=0u+0x00000000u; // 801E4CA8
  c->lr=0x801E4CB0u; f_800060B8(c); // 801E4CAC
  c->r[3]=c->r[25]|c->r[25]; // 801E4CB0
  c->r[4]=0u+0x00000007u; // 801E4CB4
  c->lr=0x801E4CBCu; f_801E6E20(c); // 801E4CB8
  c->r[11]=c->r[1]+0x00000030u; // 801E4CBC
  c->lr=0x801E4CC4u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4CC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E4CC4
  c->lr=c->r[0]; // 801E4CC8
  c->r[1]=c->r[1]+0x00000030u; // 801E4CCC
  return; // 801E4CD0
}

// fn_801E4CD4
void f_801E4CD4(Ctx* __restrict c) {
  f_801E6E30(c); return; // 801E4CD4
}

// fn_801E4CD8
void f_801E4CD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4CD8
  c->r[0]=c->lr; // 801E4CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E4CE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E4CE4
  c->r[31]=c->r[3]|c->r[3]; // 801E4CE8
  c->lr=0x801E4CF0u; f_8007B524(c); // 801E4CEC
  c->lr=0x801E4CF4u; f_8023BC38(c); // 801E4CF0
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E4CF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801E4CF8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E4CFC
  c->r[3]=c->r[31]|c->r[31]; // 801E4D00
  c->r[4]=0u+0x00000000u; // 801E4D04
  c->lr=0x801E4D0Cu; f_801E6E20(c); // 801E4D08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E4D0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E4D10
  c->lr=c->r[0]; // 801E4D14
  c->r[1]=c->r[1]+0x00000010u; // 801E4D18
  return; // 801E4D1C
}

// fn_801E4D20
void f_801E4D20(Ctx* __restrict c) {
  c->r[6]=0u+0x00000000u; // 801E4D20
  c->r[5]=c->r[3]|c->r[3]; // 801E4D24
  c->r[4]=0u+0x00000000u; // 801E4D28
  goto L_801E4D3C; // 801E4D2C
L_801E4D30:;
  W32(c->r[5]+0x000002C8u,c->r[4]); // 801E4D30
  c->r[5]=c->r[5]+0x0000001Cu; // 801E4D34
  c->r[6]=c->r[6]+0x00000001u; // 801E4D38
L_801E4D3C:;
  c->r[0]=R32(c->r[3]+0x00000484u); // 801E4D3C
  cmpu(c,0,c->r[6],c->r[0]); // 801E4D40
  if (crb(c,0)) { IRQCHK(c); goto L_801E4D30; } // 801E4D44
  c->r[0]=0u+0x00000001u; // 801E4D48
  W32(c->r[3]+0x00002380u,c->r[0]); // 801E4D4C
  f_801E6E30(c); return; // 801E4D50
}

// fn_801E4D54
void f_801E4D54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4D54
  c->r[0]=c->lr; // 801E4D58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4D5C
  c->r[11]=c->r[1]+0x00000020u; // 801E4D60
  c->lr=0x801E4D68u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E4D64
  c->r[31]=c->r[3]|c->r[3]; // 801E4D68
  c->r[5]=R32(c->r[3]+0x000002C0u); // 801E4D6C
  c->r[0]=R32(c->r[3]+0x00002380u); // 801E4D70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4D74
  c->r[4]=c->r[3]+c->r[0]; // 801E4D78
  c->r[0]=R32(c->r[4]+0x000002B4u); // 801E4D7C
  cmpu(c,0,c->r[5],c->r[0]); // 801E4D80
  if (!crb(c,2)) { goto L_801E4DA0; } // 801E4D84
  c->r[0]=R32(c->r[3]+0x000002C8u); // 801E4D88
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E4D8C
  cmps(c,0,(int32_t)c->r[0],0); // 801E4D90
  if (!crb(c,2)) { goto L_801E4DA0; } // 801E4D94
  c->lr=0x801E4D9Cu; f_801E6E30(c); // 801E4D98
  goto L_801E4E78; // 801E4D9C
L_801E4DA0:;
  c->r[3]=c->r[31]|c->r[31]; // 801E4DA0
  c->lr=0x801E4DA8u; f_801E6E40(c); // 801E4DA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E4DA8
  if (crb(c,2)) { goto L_801E4DCC; } // 801E4DAC
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4DB0
  c->r[0]=R32(c->r[31]+0x00002380u); // 801E4DB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4DB8
  c->r[4]=c->r[31]+c->r[0]; // 801E4DBC
  c->r[4]=R32(c->r[4]+0x000002B4u); // 801E4DC0
  c->lr=0x801E4DC8u; f_801E27D0(c); // 801E4DC4
  goto L_801E4E78; // 801E4DC8
L_801E4DCC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E4DCC
  c->lr=0x801E4DD4u; f_801E41DC(c); // 801E4DD0
  cmps(c,0,(int32_t)c->r[3],0); // 801E4DD4
  if (crb(c,2)) { goto L_801E4E78; } // 801E4DD8
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4DDC
  c->r[0]=R32(c->r[31]+0x00002380u); // 801E4DE0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4DE4
  c->r[4]=c->r[31]+c->r[0]; // 801E4DE8
  c->r[4]=R32(c->r[4]+0x000002B4u); // 801E4DEC
  c->lr=0x801E4DF4u; f_801E2818(c); // 801E4DF0
  c->r[27]=c->r[3]|c->r[3]; // 801E4DF4
  c->r[30]=0u+0x80470000u; // 801E4DF8
  goto L_801E4E68; // 801E4DFC
L_801E4E00:;
  c->r[26]=0u+0x00000000u; // 801E4E00
  c->r[29]=c->r[30]+0x00004028u; // 801E4E04
  c->r[28]=R32(c->r[31]+0x00000484u); // 801E4E08
  goto L_801E4E44; // 801E4E0C
L_801E4E10:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 801E4E10
  c->r[4]=c->r[27]|c->r[27]; // 801E4E14
  c->lr=0x801E4E1Cu; f_802E96C4(c); // 801E4E18
  cmps(c,0,(int32_t)c->r[3],0); // 801E4E1C
  if (!crb(c,2)) { goto L_801E4E3C; } // 801E4E20
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)28); // 801E4E24
  c->r[3]=c->r[31]+c->r[0]; // 801E4E28
  c->r[0]=R32(c->r[3]+0x000002C8u); // 801E4E2C
  c->r[0]=c->r[0]|0x00000001u; // 801E4E30
  W32(c->r[3]+0x000002C8u,c->r[0]); // 801E4E34
  goto L_801E4E4C; // 801E4E38
L_801E4E3C:;
  c->r[29]=c->r[29]+0x00000014u; // 801E4E3C
  c->r[26]=c->r[26]+0x00000001u; // 801E4E40
L_801E4E44:;
  cmpu(c,0,c->r[26],c->r[28]); // 801E4E44
  if (crb(c,0)) { IRQCHK(c); goto L_801E4E10; } // 801E4E48
L_801E4E4C:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E4E4C
  c->r[0]=R32(c->r[31]+0x00002380u); // 801E4E50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4E54
  c->r[4]=c->r[31]+c->r[0]; // 801E4E58
  c->r[4]=R32(c->r[4]+0x000002B4u); // 801E4E5C
  c->lr=0x801E4E64u; f_801E2850(c); // 801E4E60
  c->r[27]=c->r[3]|c->r[3]; // 801E4E64
L_801E4E68:;
  cmps(c,0,(int32_t)c->r[27],0); // 801E4E68
  if (!crb(c,2)) { IRQCHK(c); goto L_801E4E00; } // 801E4E6C
  c->r[3]=c->r[31]|c->r[31]; // 801E4E70
  c->lr=0x801E4E78u; f_801E6E30(c); // 801E4E74
L_801E4E78:;
  c->r[11]=c->r[1]+0x00000020u; // 801E4E78
  c->lr=0x801E4E80u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E4E7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E4E80
  c->lr=c->r[0]; // 801E4E84
  c->r[1]=c->r[1]+0x00000020u; // 801E4E88
  return; // 801E4E8C
}

// fn_801E4E90
void f_801E4E90(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00002380u); // 801E4E90
  c->r[4]=c->r[4]+0x00000001u; // 801E4E94
  W32(c->r[3]+0x00002380u,c->r[4]); // 801E4E98
  c->r[0]=R32(c->r[3]+0x00000480u); // 801E4E9C
  cmpu(c,0,c->r[4],c->r[0]); // 801E4EA0
  if (crb(c,0)) { goto L_801E4EB0; } // 801E4EA4
  c->r[4]=0u+0x0000000Au; // 801E4EA8
  f_801E6E20(c); return; // 801E4EAC
L_801E4EB0:;
  c->r[4]=0u+0x00000008u; // 801E4EB0
  f_801E6E20(c); return; // 801E4EB4
}

// fn_801E4EB8
void f_801E4EB8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E4EB8
  W32(c->r[3]+0x00002384u,c->r[0]); // 801E4EBC
  f_801E6E30(c); return; // 801E4EC0
}

// fn_801E4EC4
void f_801E4EC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E4EC4
  c->r[0]=c->lr; // 801E4EC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E4ECC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E4ED0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E4ED4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E4ED8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E4EDC
  c->r[29]=c->r[3]|c->r[3]; // 801E4EE0
  c->r[0]=R32(c->r[3]+0x00002384u); // 801E4EE4
  c->r[30]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801E4EE8
  c->r[31]=c->r[3]+c->r[30]; // 801E4EEC
  c->r[4]=0u+0x00000000u; // 801E4EF0
  c->r[0]=R32(c->r[31]+0x000002CCu); // 801E4EF4
  cmps(c,0,(int32_t)c->r[0],0); // 801E4EF8
  if (!crb(c,2)) { goto L_801E4F04; } // 801E4EFC
  c->r[4]=0u+0x00000001u; // 801E4F00
L_801E4F04:;
  c->r[28]=c->r[3]+c->r[30]; // 801E4F04
  c->r[0]=R32(c->r[28]+0x000002C8u); // 801E4F08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E4F0C
  cmps(c,0,(int32_t)c->r[0],0); // 801E4F10
  if (!crb(c,2)) { goto L_801E4F1C; } // 801E4F14
  c->r[4]=0u+0x00000001u; // 801E4F18
L_801E4F1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E4F1C
  if (crb(c,2)) { goto L_801E4F30; } // 801E4F20
  c->r[3]=c->r[29]|c->r[29]; // 801E4F24
  c->lr=0x801E4F2Cu; f_801E6E30(c); // 801E4F28
  goto L_801E50B0; // 801E4F2C
L_801E4F30:;
  c->r[3]=c->r[29]|c->r[29]; // 801E4F30
  c->lr=0x801E4F38u; f_801E6E40(c); // 801E4F34
  cmps(c,0,(int32_t)c->r[3],0); // 801E4F38
  if (crb(c,2)) { goto L_801E4F88; } // 801E4F3C
  c->r[3]=c->r[29]|c->r[29]; // 801E4F40
  c->r[4]=0u+0x0000002Fu; // 801E4F44
  c->r[5]=0u+0x0000000Cu; // 801E4F48
  c->lr=0x801E4F50u; f_801E6E58(c); // 801E4F4C
  c->r[3]=c->r[29]+0x0000048Cu; // 801E4F50
  c->r[0]=R32(c->r[31]+0x000002D4u); // 801E4F54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E4F58
  c->r[4]=c->r[29]+c->r[0]; // 801E4F5C
  c->r[4]=R32(c->r[4]+0x000002B4u); // 801E4F60
  c->lr=0x801E4F68u; f_801E265C(c); // 801E4F64
  c->r[3]=c->r[29]+0x0000048Cu; // 801E4F68
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E4F6C
  c->r[5]=0u+0x00000001u; // 801E4F70
  c->lr=0x801E4F78u; f_801E29CC(c); // 801E4F74
  c->r[3]=c->r[29]+c->r[30]; // 801E4F78
  c->r[0]=R32(c->r[3]+0x000002C4u); // 801E4F7C
  W32(c->r[29]+0x000023C8u,c->r[0]); // 801E4F80
  goto L_801E50B0; // 801E4F84
L_801E4F88:;
  c->r[3]=c->r[29]|c->r[29]; // 801E4F88
  c->lr=0x801E4F90u; f_801E41DC(c); // 801E4F8C
  cmps(c,0,(int32_t)c->r[3],0); // 801E4F90
  if (crb(c,2)) { goto L_801E50B0; } // 801E4F94
  c->r[0]=R32(c->r[29]+0x000023C8u); // 801E4F98
  cmps(c,0,(int32_t)c->r[0],0); // 801E4F9C
  if (crb(c,2)) { goto L_801E5038; } // 801E4FA0
  c->r[6]=R32(c->r[29]+0x000023C4u); // 801E4FA4
  cmpu(c,0,c->r[0],c->r[6]); // 801E4FA8
  if (!crb(c,0)) { goto L_801E4FB4; } // 801E4FAC
  c->r[6]=c->r[0]|c->r[0]; // 801E4FB0
L_801E4FB4:;
  cmpu(c,0,c->r[0],c->r[6]); // 801E4FB4
  if (crb(c,1)) { goto L_801E4FC8; } // 801E4FB8
  c->r[0]=0u+0x00000000u; // 801E4FBC
  W32(c->r[29]+0x000023C8u,c->r[0]); // 801E4FC0
  goto L_801E4FD4; // 801E4FC4
L_801E4FC8:;
  c->r[0]=R32(c->r[29]+0x000023C8u); // 801E4FC8
  c->r[0]=c->r[0]-c->r[6]; // 801E4FCC
  W32(c->r[29]+0x000023C8u,c->r[0]); // 801E4FD0
L_801E4FD4:;
  cmps(c,0,(int32_t)c->r[6],0); // 801E4FD4
  if (crb(c,2)) { goto L_801E4FEC; } // 801E4FD8
  c->r[3]=c->r[29]+0x0000048Cu; // 801E4FDC
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E4FE0
  c->r[5]=R32(c->r[29]+0x00000020u); // 801E4FE4
  c->lr=0x801E4FECu; f_801E2AB8(c); // 801E4FE8
L_801E4FEC:;
  c->r[0]=R32(c->r[29]+0x000023C8u); // 801E4FEC
  cmps(c,0,(int32_t)c->r[0],0); // 801E4FF0
  if (!crb(c,2)) { goto L_801E50B0; } // 801E4FF4
  c->r[30]=c->r[29]+c->r[30]; // 801E4FF8
  c->r[3]=c->r[29]+0x0000048Cu; // 801E4FFC
  c->r[4]=R32(c->r[30]+0x000002C0u); // 801E5000
  c->lr=0x801E5008u; f_801E2A48(c); // 801E5004
  c->r[3]=c->r[29]+0x0000048Cu; // 801E5008
  c->r[4]=R32(c->r[30]+0x000002C0u); // 801E500C
  c->r[5]=0u+0x00000001u; // 801E5010
  c->lr=0x801E5018u; f_801E29CC(c); // 801E5014
  c->r[3]=c->r[29]+0x0000048Cu; // 801E5018
  c->r[4]=R32(c->r[30]+0x000002C0u); // 801E501C
  c->r[5]=0u+0x00000000u; // 801E5020
  c->lr=0x801E5028u; f_801E28D4(c); // 801E5024
  c->r[3]=c->r[29]+0x0000048Cu; // 801E5028
  c->r[4]=R32(c->r[30]+0x000002C0u); // 801E502C
  c->lr=0x801E5034u; f_801E2A48(c); // 801E5030
  goto L_801E50B0; // 801E5034
L_801E5038:;
  c->r[3]=c->r[29]+0x0000048Cu; // 801E5038
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E503C
  c->r[5]=c->r[1]+0x00000008u; // 801E5040
  c->lr=0x801E5048u; f_801E28D4(c); // 801E5044
  c->r[4]=R32(c->r[1]+0x00000008u); // 801E5048
  c->r[3]=c->r[29]+c->r[30]; // 801E504C
  c->r[0]=R32(c->r[3]+0x000002C4u); // 801E5050
  cmpu(c,0,c->r[4],c->r[0]); // 801E5054
  if (crb(c,2)) { goto L_801E5068; } // 801E5058
  c->r[0]=R32(c->r[28]+0x000002C8u); // 801E505C
  c->r[0]=c->r[0]|0x00000002u; // 801E5060
  W32(c->r[28]+0x000002C8u,c->r[0]); // 801E5064
L_801E5068:;
  c->r[3]=c->r[29]+c->r[30]; // 801E5068
  c->r[0]=R32(c->r[3]+0x000002D8u); // 801E506C
  cmpu(c,0,c->r[0],0x00000002u); // 801E5070
  if (crb(c,2)) { goto L_801E50A8; } // 801E5074
  c->r[3]=c->r[29]+0x0000048Cu; // 801E5078
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E507C
  c->lr=0x801E5084u; f_801E2E1C(c); // 801E5080
  c->r[4]=c->r[3]|c->r[3]; // 801E5084
  c->r[3]=c->r[29]|c->r[29]; // 801E5088
  c->r[5]=R32(c->r[1]+0x00000008u); // 801E508C
  c->lr=0x801E5094u; f_801E4438(c); // 801E5090
  cmps(c,0,(int32_t)c->r[3],0); // 801E5094
  if (!crb(c,2)) { goto L_801E50A8; } // 801E5098
  c->r[0]=R32(c->r[28]+0x000002C8u); // 801E509C
  c->r[0]=c->r[0]|0x00000002u; // 801E50A0
  W32(c->r[28]+0x000002C8u,c->r[0]); // 801E50A4
L_801E50A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801E50A8
  c->lr=0x801E50B0u; f_801E6E30(c); // 801E50AC
L_801E50B0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E50B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E50B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E50B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E50BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E50C0
  c->lr=c->r[0]; // 801E50C4
  c->r[1]=c->r[1]+0x00000020u; // 801E50C8
  return; // 801E50CC
}

// fn_801E50D0
void f_801E50D0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00002384u); // 801E50D0
  c->r[4]=c->r[4]+0x00000001u; // 801E50D4
  W32(c->r[3]+0x00002384u,c->r[4]); // 801E50D8
  c->r[0]=R32(c->r[3]+0x00000484u); // 801E50DC
  cmpu(c,0,c->r[4],c->r[0]); // 801E50E0
  if (crb(c,0)) { goto L_801E50F4; } // 801E50E4
  c->r[0]=0u+0x00000000u; // 801E50E8
  W32(c->r[3]+0x00002384u,c->r[0]); // 801E50EC
  f_801E6E30(c); return; // 801E50F0
L_801E50F4:;
  c->r[4]=0u+0x0000000Bu; // 801E50F4
  f_801E6E20(c); return; // 801E50F8
}

// fn_801E50FC
void f_801E50FC(Ctx* __restrict c) {
  c->r[9]=0u+0x00000000u; // 801E50FC
  c->r[5]=0u+0x00000000u; // 801E5100
  c->r[10]=0u+0x00000000u; // 801E5104
  c->r[8]=0u+0x00000000u; // 801E5108
  c->r[7]=c->r[3]|c->r[3]; // 801E510C
  goto L_801E5198; // 801E5110
L_801E5114:;
  c->r[0]=R32(c->r[7]+0x000002D0u); // 801E5114
  cmpu(c,0,c->r[0],0x00000002u); // 801E5118
  if (!crb(c,2)) { goto L_801E5148; } // 801E511C
  c->r[4]=R32(c->r[7]+0x000002C8u); // 801E5120
  c->r[0]=rotl(c->r[4],0)&0x00000002u; // 801E5124
  cmps(c,0,(int32_t)c->r[0],0); // 801E5128
  if (crb(c,2)) { goto L_801E515C; } // 801E512C
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFFEu; // 801E5130
  W32(c->r[7]+0x000002C8u,c->r[0]); // 801E5134
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E5138
  c->r[0]=c->r[0]|0x00002000u; // 801E513C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E5140
  goto L_801E515C; // 801E5144
L_801E5148:;
  c->r[0]=R32(c->r[7]+0x000002C8u); // 801E5148
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801E514C
  cmps(c,0,(int32_t)c->r[0],0); // 801E5150
  if (crb(c,2)) { goto L_801E515C; } // 801E5154
  c->r[10]=c->r[10]+0x00000001u; // 801E5158
L_801E515C:;
  c->r[0]=R32(c->r[7]+0x000002C8u); // 801E515C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5160
  cmps(c,0,(int32_t)c->r[0],0); // 801E5164
  if (!crb(c,2)) { goto L_801E5190; } // 801E5168
  c->r[0]=R32(c->r[7]+0x000002C4u); // 801E516C
  c->r[6]=rotl(c->r[0],18)&0x0003FFFFu; // 801E5170
  c->r[4]=rotl(c->r[0],0)&0x00003FFFu; // 801E5174
  c->r[0]=0u-c->r[4]; // 801E5178
  c->r[0]=c->r[0]|c->r[4]; // 801E517C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801E5180
  c->r[0]=c->r[9]+c->r[6]; // 801E5184
  c->r[9]=c->r[4]+c->r[0]; // 801E5188
  c->r[5]=c->r[5]+0x00000001u; // 801E518C
L_801E5190:;
  c->r[7]=c->r[7]+0x0000001Cu; // 801E5190
  c->r[8]=c->r[8]+0x00000001u; // 801E5194
L_801E5198:;
  c->r[0]=R32(c->r[3]+0x00000484u); // 801E5198
  cmpu(c,0,c->r[8],c->r[0]); // 801E519C
  if (crb(c,0)) { IRQCHK(c); goto L_801E5114; } // 801E51A0
  cmps(c,0,(int32_t)c->r[10],0); // 801E51A4
  if (crb(c,2)) { goto L_801E51B4; } // 801E51A8
  c->r[4]=0u+0x0000003Du; // 801E51AC
  f_801E6E20(c); return; // 801E51B0
L_801E51B4:;
  cmpu(c,0,c->r[5],0x00000008u); // 801E51B4
  if (!crb(c,0)) { goto L_801E51C8; } // 801E51B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E51BC
  c->r[0]=c->r[0]|0x00002000u; // 801E51C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E51C4
L_801E51C8:;
  W32(c->r[3]+0x0000238Cu,c->r[5]); // 801E51C8
  c->r[0]=rotl(c->r[9],14)&0xFFFFC000u; // 801E51CC
  W32(c->r[3]+0x00002388u,c->r[0]); // 801E51D0
  cmps(c,0,(int32_t)c->r[5],0); // 801E51D4
  if (!crb(c,2)) { goto L_801E51EC; } // 801E51D8
  cmps(c,0,(int32_t)c->r[0],0); // 801E51DC
  if (!crb(c,2)) { goto L_801E51EC; } // 801E51E0
  c->r[4]=0u+0x00000006u; // 801E51E4
  f_801E6E20(c); return; // 801E51E8
L_801E51EC:;
  c->r[4]=R32(c->r[3]+0x00002388u); // 801E51EC
  c->r[6]=0u+0x0000000Eu; // 801E51F0
  f_801E4310(c); return; // 801E51F4
}

// fn_801E51F8
void f_801E51F8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E51F8
  W32(c->r[3]+0x00002384u,c->r[0]); // 801E51FC
  f_801E6E30(c); return; // 801E5200
}

// fn_801E5204
void f_801E5204(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E5204
  W32(c->r[3]+0x00002384u,c->r[0]); // 801E5208
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E520C
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 801E5210
  cmps(c,0,(int32_t)c->r[0],0); // 801E5214
  if (crb(c,2)) { goto L_801E5224; } // 801E5218
  c->r[4]=0u+0x00000012u; // 801E521C
  f_801E6E20(c); return; // 801E5220
L_801E5224:;
  c->r[4]=0u+0x0000000Cu; // 801E5224
  c->r[5]=0u+0x00000012u; // 801E5228
  f_801E42F8(c); return; // 801E522C
}

// fn_801E5230
void f_801E5230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5230
  c->r[0]=c->lr; // 801E5234
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E523C
  c->r[31]=c->r[3]|c->r[3]; // 801E5240
  c->lr=0x801E5248u; f_8007B524(c); // 801E5244
  c->lr=0x801E524Cu; f_8023BC48(c); // 801E5248
  cmps(c,0,(int32_t)c->r[3],0); // 801E524C
  if (!crb(c,2)) { goto L_801E5268; } // 801E5250
  c->r[3]=c->r[31]|c->r[31]; // 801E5254
  c->r[4]=0u+0x0000000Cu; // 801E5258
  c->r[5]=0u+0x00000012u; // 801E525C
  c->lr=0x801E5264u; f_801E42F8(c); // 801E5260
  goto L_801E5278; // 801E5264
L_801E5268:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5268
  c->r[4]=0u+0x0000000Du; // 801E526C
  c->r[5]=0u+0x00000011u; // 801E5270
  c->lr=0x801E5278u; f_801E42F8(c); // 801E5274
L_801E5278:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5278
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E527C
  c->lr=c->r[0]; // 801E5280
  c->r[1]=c->r[1]+0x00000010u; // 801E5284
  return; // 801E5288
}

// fn_801E528C
void f_801E528C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E528C
  c->r[0]=c->lr; // 801E5290
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5294
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5298
  c->r[31]=c->r[3]|c->r[3]; // 801E529C
  c->lr=0x801E52A4u; f_8007B524(c); // 801E52A0
  c->lr=0x801E52A8u; f_8023BC48(c); // 801E52A4
  cmps(c,0,(int32_t)c->r[3],0); // 801E52A8
  if (!crb(c,2)) { goto L_801E52CC; } // 801E52AC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E52B0
  c->r[0]=c->r[0]|0x00004000u; // 801E52B4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E52B8
  c->r[3]=c->r[31]|c->r[31]; // 801E52BC
  c->r[4]=0u+0x00000000u; // 801E52C0
  c->lr=0x801E52C8u; f_801E6E20(c); // 801E52C4
  goto L_801E52D8; // 801E52C8
L_801E52CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E52CC
  c->r[4]=0u+0x0000000Fu; // 801E52D0
  c->lr=0x801E52D8u; f_801E6E20(c); // 801E52D4
L_801E52D8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E52D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E52DC
  c->lr=c->r[0]; // 801E52E0
  c->r[1]=c->r[1]+0x00000010u; // 801E52E4
  return; // 801E52E8
}

// fn_801E52EC
void f_801E52EC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00002384u); // 801E52EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801E52F0
  c->r[4]=c->r[3]+c->r[0]; // 801E52F4
  c->r[0]=R32(c->r[4]+0x000002C8u); // 801E52F8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E52FC
  cmps(c,0,(int32_t)c->r[0],0); // 801E5300
  if (crb(c,2)) { goto L_801E5310; } // 801E5304
  c->r[4]=0u+0x00000013u; // 801E5308
  f_801E6E20(c); return; // 801E530C
L_801E5310:;
  c->r[0]=0u+0x0000001Eu; // 801E5310
  W32(c->r[3]+0x000023C0u,c->r[0]); // 801E5314
  c->r[0]=R32(c->r[4]+0x000002CCu); // 801E5318
  cmps(c,0,(int32_t)c->r[0],1); // 801E531C
  if (crb(c,2)) { goto L_801E5340; } // 801E5320
  if (!crb(c,0)) return; // 801E5324
  cmps(c,0,(int32_t)c->r[0],0); // 801E5328
  if (crb(c,0)) return; // 801E532C
  c->r[4]=R32(c->r[4]+0x000002C4u); // 801E5330
  c->r[5]=0u+0x00000001u; // 801E5334
  c->r[6]=0u+0x00000015u; // 801E5338
  f_801E4310(c); return; // 801E533C
L_801E5340:;
  c->r[0]=R32(c->r[4]+0x000002D0u); // 801E5340
  cmps(c,0,(int32_t)c->r[0],2); // 801E5344
  if (crb(c,2)) { goto L_801E5370; } // 801E5348
  if (!crb(c,0)) { goto L_801E5360; } // 801E534C
  cmps(c,0,(int32_t)c->r[0],0); // 801E5350
  if (crb(c,2)) { goto L_801E5380; } // 801E5354
  if (!crb(c,0)) { goto L_801E5390; } // 801E5358
  return; // 801E535C
L_801E5360:;
  cmps(c,0,(int32_t)c->r[0],4); // 801E5360
  if (!crb(c,0)) return; // 801E5364
  c->r[4]=0u+0x00000013u; // 801E5368
  f_801E6E20(c); return; // 801E536C
L_801E5370:;
  c->r[4]=R32(c->r[4]+0x000002C4u); // 801E5370
  c->r[5]=0u+0x00000001u; // 801E5374
  c->r[6]=0u+0x00000018u; // 801E5378
  f_801E4310(c); return; // 801E537C
L_801E5380:;
  c->r[4]=R32(c->r[4]+0x000002C4u); // 801E5380
  c->r[5]=0u+0x00000001u; // 801E5384
  c->r[6]=0u+0x00000016u; // 801E5388
  f_801E4310(c); return; // 801E538C
L_801E5390:;
  c->r[4]=R32(c->r[4]+0x000002C4u); // 801E5390
  c->r[5]=0u+0x00000001u; // 801E5394
  c->r[6]=0u+0x00000017u; // 801E5398
  f_801E4310(c); return; // 801E539C
  return; // 801E53A0
}

// fn_801E53A4
void f_801E53A4(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00002384u); // 801E53A4
  c->r[4]=c->r[4]+0x00000001u; // 801E53A8
  W32(c->r[3]+0x00002384u,c->r[4]); // 801E53AC
  c->r[0]=R32(c->r[3]+0x00000484u); // 801E53B0
  cmpu(c,0,c->r[4],c->r[0]); // 801E53B4
  if (crb(c,0)) { goto L_801E53CC; } // 801E53B8
  c->r[0]=0u+0x00000000u; // 801E53BC
  W32(c->r[3]+0x00002384u,c->r[0]); // 801E53C0
  c->r[4]=0u+0x00000014u; // 801E53C4
  f_801E6E20(c); return; // 801E53C8
L_801E53CC:;
  c->r[4]=0u+0x00000012u; // 801E53CC
  f_801E6E20(c); return; // 801E53D0
}

// fn_801E53D4
void f_801E53D4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000006u; // 801E53D4
  f_801E6E20(c); return; // 801E53D8
}

// fn_801E53DC
void f_801E53DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E53DC
  c->r[0]=c->lr; // 801E53E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E53E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E53E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E53EC
  c->r[30]=c->r[3]|c->r[3]; // 801E53F0
  c->r[0]=R32(c->r[3]+0x00002384u); // 801E53F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801E53F8
  c->r[31]=c->r[3]+c->r[0]; // 801E53FC
  c->lr=0x801E5404u; f_801E6E40(c); // 801E5400
  cmps(c,0,(int32_t)c->r[3],0); // 801E5404
  if (crb(c,2)) { goto L_801E541C; } // 801E5408
  c->r[3]=c->r[30]+0x0000048Cu; // 801E540C
  c->r[4]=R32(c->r[31]+0x000002C0u); // 801E5410
  c->lr=0x801E5418u; f_801E25EC(c); // 801E5414
  goto L_801E5444; // 801E5418
L_801E541C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E541C
  c->lr=0x801E5424u; f_801E41DC(c); // 801E5420
  cmps(c,0,(int32_t)c->r[3],0); // 801E5424
  if (crb(c,2)) { goto L_801E5444; } // 801E5428
  c->r[0]=R32(c->r[31]+0x000002C8u); // 801E542C
  c->r[0]=c->r[0]|0x00000001u; // 801E5430
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801E5434
  c->r[3]=c->r[30]|c->r[30]; // 801E5438
  c->r[4]=0u+0x00000013u; // 801E543C
  c->lr=0x801E5444u; f_801E6E20(c); // 801E5440
L_801E5444:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5444
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E5448
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E544C
  c->lr=c->r[0]; // 801E5450
  c->r[1]=c->r[1]+0x00000010u; // 801E5454
  return; // 801E5458
}

// fn_801E545C
void f_801E545C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E545C
  c->r[0]=c->lr; // 801E5460
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5464
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5468
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E546C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5470
  c->r[29]=c->r[3]|c->r[3]; // 801E5474
  c->r[30]=R32(c->r[3]+0x00002384u); // 801E5478
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 801E547C
  c->r[31]=c->r[3]+c->r[0]; // 801E5480
  c->lr=0x801E5488u; f_801E6E40(c); // 801E5484
  cmps(c,0,(int32_t)c->r[3],0); // 801E5488
  if (crb(c,2)) { goto L_801E54B0; } // 801E548C
  c->r[3]=c->r[29]|c->r[29]; // 801E5490
  c->r[4]=0u+0x00000030u; // 801E5494
  c->r[5]=0u+0x00000013u; // 801E5498
  c->lr=0x801E54A0u; f_801E6E58(c); // 801E549C
  c->r[3]=c->r[29]|c->r[29]; // 801E54A0
  c->r[4]=c->r[30]|c->r[30]; // 801E54A4
  c->lr=0x801E54ACu; f_801E47AC(c); // 801E54A8
  goto L_801E54DC; // 801E54AC
L_801E54B0:;
  c->r[3]=c->r[29]|c->r[29]; // 801E54B0
  c->r[4]=c->r[30]|c->r[30]; // 801E54B4
  c->lr=0x801E54BCu; f_801E48E0(c); // 801E54B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E54BC
  if (crb(c,2)) { goto L_801E54DC; } // 801E54C0
  c->r[0]=R32(c->r[31]+0x000002C8u); // 801E54C4
  c->r[0]=c->r[0]|0x00000001u; // 801E54C8
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801E54CC
  c->r[3]=c->r[29]|c->r[29]; // 801E54D0
  c->r[4]=0u+0x00000013u; // 801E54D4
  c->lr=0x801E54DCu; f_801E6E20(c); // 801E54D8
L_801E54DC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E54DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E54E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E54E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E54E8
  c->lr=c->r[0]; // 801E54EC
  c->r[1]=c->r[1]+0x00000020u; // 801E54F0
  return; // 801E54F4
}

// fn_801E54F8
void f_801E54F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E54F8
  c->r[0]=c->lr; // 801E54FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5500
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5504
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5508
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E550C
  c->r[29]=c->r[3]|c->r[3]; // 801E5510
  c->r[30]=R32(c->r[3]+0x00002384u); // 801E5514
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 801E5518
  c->r[31]=c->r[3]+c->r[0]; // 801E551C
  c->lr=0x801E5524u; f_801E6E40(c); // 801E5520
  cmps(c,0,(int32_t)c->r[3],0); // 801E5524
  if (crb(c,2)) { goto L_801E554C; } // 801E5528
  c->r[3]=c->r[29]|c->r[29]; // 801E552C
  c->r[4]=0u+0x00000030u; // 801E5530
  c->r[5]=0u+0x00000013u; // 801E5534
  c->lr=0x801E553Cu; f_801E6E58(c); // 801E5538
  c->r[3]=c->r[29]|c->r[29]; // 801E553C
  c->r[4]=c->r[30]|c->r[30]; // 801E5540
  c->lr=0x801E5548u; f_801E47AC(c); // 801E5544
  goto L_801E5578; // 801E5548
L_801E554C:;
  c->r[3]=c->r[29]|c->r[29]; // 801E554C
  c->r[4]=c->r[30]|c->r[30]; // 801E5550
  c->lr=0x801E5558u; f_801E48E0(c); // 801E5554
  cmps(c,0,(int32_t)c->r[3],0); // 801E5558
  if (crb(c,2)) { goto L_801E5578; } // 801E555C
  c->r[0]=R32(c->r[31]+0x000002C8u); // 801E5560
  c->r[0]=c->r[0]|0x00000001u; // 801E5564
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801E5568
  c->r[3]=c->r[29]|c->r[29]; // 801E556C
  c->r[4]=0u+0x00000013u; // 801E5570
  c->lr=0x801E5578u; f_801E6E20(c); // 801E5574
L_801E5578:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5578
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E557C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5580
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5584
  c->lr=c->r[0]; // 801E5588
  c->r[1]=c->r[1]+0x00000020u; // 801E558C
  return; // 801E5590
}

// fn_801E5594
void f_801E5594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5594
  c->r[0]=c->lr; // 801E5598
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E559C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E55A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E55A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E55A8
  c->r[29]=c->r[3]|c->r[3]; // 801E55AC
  c->r[30]=R32(c->r[3]+0x00002384u); // 801E55B0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 801E55B4
  c->r[31]=c->r[3]+c->r[0]; // 801E55B8
  c->lr=0x801E55C0u; f_801E6E40(c); // 801E55BC
  cmps(c,0,(int32_t)c->r[3],0); // 801E55C0
  if (crb(c,2)) { goto L_801E55E8; } // 801E55C4
  c->r[3]=c->r[29]|c->r[29]; // 801E55C8
  c->r[4]=0u+0x00000030u; // 801E55CC
  c->r[5]=0u+0x00000013u; // 801E55D0
  c->lr=0x801E55D8u; f_801E6E58(c); // 801E55D4
  c->r[3]=c->r[29]|c->r[29]; // 801E55D8
  c->r[4]=c->r[30]|c->r[30]; // 801E55DC
  c->lr=0x801E55E4u; f_801E4958(c); // 801E55E0
  goto L_801E5628; // 801E55E4
L_801E55E8:;
  c->r[3]=c->r[29]|c->r[29]; // 801E55E8
  c->lr=0x801E55F0u; f_801E41DC(c); // 801E55EC
  cmps(c,0,(int32_t)c->r[3],0); // 801E55F0
  if (crb(c,2)) { goto L_801E5628; } // 801E55F4
  c->r[0]=R32(c->r[29]+0x00000000u); // 801E55F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 801E55FC
  W32(c->r[29]+0x00000000u,c->r[0]); // 801E5600
  c->r[0]=R32(c->r[31]+0x000002C8u); // 801E5604
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801E5608
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801E560C
  c->r[0]=R32(c->r[31]+0x000002C8u); // 801E5610
  c->r[0]=c->r[0]|0x00000001u; // 801E5614
  W32(c->r[31]+0x000002C8u,c->r[0]); // 801E5618
  c->r[3]=c->r[29]|c->r[29]; // 801E561C
  c->r[4]=0u+0x00000013u; // 801E5620
  c->lr=0x801E5628u; f_801E6E20(c); // 801E5624
L_801E5628:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5628
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E562C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5630
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5634
  c->lr=c->r[0]; // 801E5638
  c->r[1]=c->r[1]+0x00000020u; // 801E563C
  return; // 801E5640
}

// fn_801E5644
void f_801E5644(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E5644
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 801E5648
  cmps(c,0,(int32_t)c->r[0],0); // 801E564C
  if (crb(c,2)) { goto L_801E5660; } // 801E5650
  c->r[4]=0u+0x0000000Eu; // 801E5654
  c->r[5]=0u+0x00000000u; // 801E5658
  f_801E42F8(c); return; // 801E565C
L_801E5660:;
  c->r[4]=0u+0x00000003u; // 801E5660
  c->r[5]=0u+0x0000001Au; // 801E5664
  f_801E42F8(c); return; // 801E5668
}

// fn_801E566C
void f_801E566C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E566C
  c->r[0]=c->lr; // 801E5670
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5678
  c->r[31]=c->r[3]|c->r[3]; // 801E567C
  c->lr=0x801E5684u; f_801E6E40(c); // 801E5680
  cmps(c,0,(int32_t)c->r[3],0); // 801E5684
  if (crb(c,2)) { goto L_801E56D4; } // 801E5688
  c->r[0]=0u+0x0000001Eu; // 801E568C
  W32(c->r[31]+0x000023C0u,c->r[0]); // 801E5690
  c->r[3]=c->r[31]|c->r[31]; // 801E5694
  c->r[4]=0u+0x00000030u; // 801E5698
  c->r[5]=0u+0x0000001Au; // 801E569C
  c->lr=0x801E56A4u; f_801E6E58(c); // 801E56A0
  c->r[3]=c->r[31]|c->r[31]; // 801E56A4
  c->r[4]=0u+0x00000001u; // 801E56A8
  c->r[5]=R32(c->r[31]+0x0000237Cu); // 801E56AC
  c->lr=0x801E56B4u; f_801E6134(c); // 801E56B0
  c->r[4]=c->r[3]|c->r[3]; // 801E56B4
  W32(c->r[31]+0x00002384u,c->r[3]); // 801E56B8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E56BC
  c->r[0]=c->r[0]|0x00100000u; // 801E56C0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E56C4
  c->r[3]=c->r[31]|c->r[31]; // 801E56C8
  c->lr=0x801E56D0u; f_801E47AC(c); // 801E56CC
  goto L_801E56FC; // 801E56D0
L_801E56D4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E56D4
  c->r[4]=R32(c->r[31]+0x00002384u); // 801E56D8
  c->lr=0x801E56E0u; f_801E48E0(c); // 801E56DC
  cmps(c,0,(int32_t)c->r[3],0); // 801E56E0
  if (crb(c,2)) { goto L_801E56FC; } // 801E56E4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E56E8
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 801E56EC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E56F0
  c->r[3]=c->r[31]|c->r[31]; // 801E56F4
  c->lr=0x801E56FCu; f_801E6E30(c); // 801E56F8
L_801E56FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E56FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5700
  c->lr=c->r[0]; // 801E5704
  c->r[1]=c->r[1]+0x00000010u; // 801E5708
  return; // 801E570C
}

// fn_801E5710
void f_801E5710(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5710
  c->r[0]=c->lr; // 801E5714
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E571C
  c->r[31]=c->r[3]|c->r[3]; // 801E5720
  c->lr=0x801E5728u; f_801E6E40(c); // 801E5724
  cmps(c,0,(int32_t)c->r[3],0); // 801E5728
  if (crb(c,2)) { goto L_801E5778; } // 801E572C
  c->r[0]=0u+0x0000001Eu; // 801E5730
  W32(c->r[31]+0x000023C0u,c->r[0]); // 801E5734
  c->r[3]=c->r[31]|c->r[31]; // 801E5738
  c->r[4]=0u+0x00000030u; // 801E573C
  c->r[5]=0u+0x0000001Bu; // 801E5740
  c->lr=0x801E5748u; f_801E6E58(c); // 801E5744
  c->r[3]=c->r[31]|c->r[31]; // 801E5748
  c->r[4]=0u+0x00000000u; // 801E574C
  c->r[5]=R32(c->r[31]+0x0000237Cu); // 801E5750
  c->lr=0x801E5758u; f_801E6134(c); // 801E5754
  c->r[4]=c->r[3]|c->r[3]; // 801E5758
  W32(c->r[31]+0x00002384u,c->r[3]); // 801E575C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E5760
  c->r[0]=c->r[0]|0x00100000u; // 801E5764
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E5768
  c->r[3]=c->r[31]|c->r[31]; // 801E576C
  c->lr=0x801E5774u; f_801E47AC(c); // 801E5770
  goto L_801E57A0; // 801E5774
L_801E5778:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5778
  c->r[4]=R32(c->r[31]+0x00002384u); // 801E577C
  c->lr=0x801E5784u; f_801E48E0(c); // 801E5780
  cmps(c,0,(int32_t)c->r[3],0); // 801E5784
  if (crb(c,2)) { goto L_801E57A0; } // 801E5788
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E578C
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 801E5790
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E5794
  c->r[3]=c->r[31]|c->r[31]; // 801E5798
  c->lr=0x801E57A0u; f_801E6E30(c); // 801E579C
L_801E57A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E57A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E57A4
  c->lr=c->r[0]; // 801E57A8
  c->r[1]=c->r[1]+0x00000010u; // 801E57AC
  return; // 801E57B0
}

// fn_801E57B4
void f_801E57B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E57B4
  c->r[0]=c->lr; // 801E57B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E57BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E57C0
  c->r[31]=c->r[3]|c->r[3]; // 801E57C4
  c->lr=0x801E57CCu; f_8007B524(c); // 801E57C8
  c->lr=0x801E57D0u; f_8023BC38(c); // 801E57CC
  c->r[3]=c->r[31]|c->r[31]; // 801E57D0
  c->r[4]=0u+0x00000006u; // 801E57D4
  c->lr=0x801E57DCu; f_801E6E20(c); // 801E57D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E57DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E57E0
  c->lr=c->r[0]; // 801E57E4
  c->r[1]=c->r[1]+0x00000010u; // 801E57E8
  return; // 801E57EC
}

// fn_801E57F0
void f_801E57F0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E57F0
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 801E57F4
  cmps(c,0,(int32_t)c->r[0],0); // 801E57F8
  if (crb(c,2)) { goto L_801E5808; } // 801E57FC
  c->r[4]=0u+0x00000000u; // 801E5800
  f_801E6E20(c); return; // 801E5804
L_801E5808:;
  f_801E6E30(c); return; // 801E5808
}

// fn_801E580C
void f_801E580C(Ctx* __restrict c) {
  f_801E6E30(c); return; // 801E580C
}

// fn_801E5810
void f_801E5810(Ctx* __restrict c) {
  f_801E6E30(c); return; // 801E5810
}

// fn_801E5814
void f_801E5814(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5814
  c->r[0]=c->lr; // 801E5818
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E581C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5820
  c->r[31]=c->r[3]|c->r[3]; // 801E5824
  c->lr=0x801E582Cu; f_801E6E40(c); // 801E5828
  cmps(c,0,(int32_t)c->r[3],0); // 801E582C
  if (crb(c,2)) { goto L_801E584C; } // 801E5830
  c->r[3]=c->r[31]|c->r[31]; // 801E5834
  c->lr=0x801E583Cu; f_801E6E10(c); // 801E5838
  c->r[3]=c->r[31]|c->r[31]; // 801E583C
  c->r[4]=R32(c->r[31]+0x00002384u); // 801E5840
  c->lr=0x801E5848u; f_801E4604(c); // 801E5844
  goto L_801E5868; // 801E5848
L_801E584C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E584C
  c->r[4]=R32(c->r[31]+0x00002384u); // 801E5850
  c->lr=0x801E5858u; f_801E4668(c); // 801E5854
  cmps(c,0,(int32_t)c->r[3],0); // 801E5858
  if (crb(c,2)) { goto L_801E5868; } // 801E585C
  c->r[3]=c->r[31]|c->r[31]; // 801E5860
  c->lr=0x801E5868u; f_801E6E30(c); // 801E5864
L_801E5868:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5868
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E586C
  c->lr=c->r[0]; // 801E5870
  c->r[1]=c->r[1]+0x00000010u; // 801E5874
  return; // 801E5878
}

// fn_801E587C
void f_801E587C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801E587C
  f_801E6E20(c); return; // 801E5880
}

// fn_801E5884
void f_801E5884(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E5884
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 801E5888
  cmps(c,0,(int32_t)c->r[0],0); // 801E588C
  if (crb(c,2)) { goto L_801E58A0; } // 801E5890
  c->r[4]=0u+0x0000000Eu; // 801E5894
  c->r[5]=0u+0x00000000u; // 801E5898
  f_801E42F8(c); return; // 801E589C
L_801E58A0:;
  c->r[4]=0u+0x00000023u; // 801E58A0
  f_801E6E20(c); return; // 801E58A4
}

// fn_801E58A8
void f_801E58A8(Ctx* __restrict c) {
  f_801E6E30(c); return; // 801E58A8
}

// fn_801E58AC
void f_801E58AC(Ctx* __restrict c) {
  f_801E6E30(c); return; // 801E58AC
}

// fn_801E58B0
void f_801E58B0(Ctx* __restrict c) {
  c->r[0]=0u+0x0000001Eu; // 801E58B0
  W32(c->r[3]+0x000023C0u,c->r[0]); // 801E58B4
  c->r[4]=0u+0x00000008u; // 801E58B8
  c->r[5]=0u+0x00000026u; // 801E58BC
  f_801E42F8(c); return; // 801E58C0
}

// fn_801E58C4
void f_801E58C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E58C4
  c->r[0]=c->lr; // 801E58C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E58CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E58D0
  c->r[31]=c->r[3]|c->r[3]; // 801E58D4
  c->lr=0x801E58DCu; f_801E6E40(c); // 801E58D8
  cmps(c,0,(int32_t)c->r[3],0); // 801E58DC
  if (crb(c,2)) { goto L_801E5904; } // 801E58E0
  c->r[3]=c->r[31]|c->r[31]; // 801E58E4
  c->r[4]=0u+0x00000030u; // 801E58E8
  c->r[5]=0u+0x00000026u; // 801E58EC
  c->lr=0x801E58F4u; f_801E6E58(c); // 801E58F0
  c->r[3]=c->r[31]|c->r[31]; // 801E58F4
  c->r[4]=R32(c->r[31]+0x00002384u); // 801E58F8
  c->lr=0x801E5900u; f_801E47AC(c); // 801E58FC
  goto L_801E5920; // 801E5900
L_801E5904:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5904
  c->r[4]=R32(c->r[31]+0x00002384u); // 801E5908
  c->lr=0x801E5910u; f_801E48E0(c); // 801E590C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5910
  if (crb(c,2)) { goto L_801E5920; } // 801E5914
  c->r[3]=c->r[31]|c->r[31]; // 801E5918
  c->lr=0x801E5920u; f_801E6E30(c); // 801E591C
L_801E5920:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5920
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5924
  c->lr=c->r[0]; // 801E5928
  c->r[1]=c->r[1]+0x00000010u; // 801E592C
  return; // 801E5930
}

// fn_801E5934
void f_801E5934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5934
  c->r[0]=c->lr; // 801E5938
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E593C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5940
  c->r[31]=c->r[3]|c->r[3]; // 801E5944
  c->lr=0x801E594Cu; f_8007B524(c); // 801E5948
  c->lr=0x801E5950u; f_8023BC38(c); // 801E594C
  c->lr=0x801E5954u; f_8006592C(c); // 801E5950
  c->r[4]=0u+0x0000000Eu; // 801E5954
  c->r[5]=0u+0x00000000u; // 801E5958
  c->r[6]=0u+0xFFFFFFFFu; // 801E595C
  c->r[7]=0u+0xFFFFFFFFu; // 801E5960
  c->lr=0x801E5968u; f_80048F20(c); // 801E5964
  c->r[3]=c->r[31]|c->r[31]; // 801E5968
  c->r[4]=0u+0x00000000u; // 801E596C
  c->lr=0x801E5974u; f_801E6E20(c); // 801E5970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5974
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5978
  c->lr=c->r[0]; // 801E597C
  c->r[1]=c->r[1]+0x00000010u; // 801E5980
  return; // 801E5984
}

// fn_801E5988
void f_801E5988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5988
  c->r[0]=c->lr; // 801E598C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5994
  c->r[31]=c->r[3]|c->r[3]; // 801E5998
  c->lr=0x801E59A0u; f_8007B524(c); // 801E599C
  c->lr=0x801E59A4u; f_8023BC38(c); // 801E59A0
  c->r[3]=c->r[31]|c->r[31]; // 801E59A4
  c->lr=0x801E59ACu; f_801E6E30(c); // 801E59A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E59AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E59B0
  c->lr=c->r[0]; // 801E59B4
  c->r[1]=c->r[1]+0x00000010u; // 801E59B8
  return; // 801E59BC
}

