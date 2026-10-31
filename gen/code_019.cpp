#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800EE838
void f_800EE838(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE838
  c->r[0]=c->lr; // 800EE83C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EE840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EE844
  c->r[31]=c->r[3]|c->r[3]; // 800EE848
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EE84C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800EE850
  cmps(c,0,(int32_t)c->r[0],0); // 800EE854
  if (crb(c,2)) { goto L_800EEA50; } // 800EE858
  c->lr=0x800EE860u; f_8007B524(c); // 800EE85C
  c->lr=0x800EE864u; f_80074E3C(c); // 800EE860
  c->lr=0x800EE868u; f_800EEE28(c); // 800EE864
  c->r[4]=0u+0x00000002u; // 800EE868
  c->lr=0x800EE870u; f_80228548(c); // 800EE86C
  cmps(c,0,(int32_t)c->r[3],0); // 800EE870
  if (crb(c,2)) { goto L_800EEA44; } // 800EE874
  c->lr=0x800EE87Cu; f_8007B524(c); // 800EE878
  c->lr=0x800EE880u; f_80074E3C(c); // 800EE87C
  c->lr=0x800EE884u; f_800EEE28(c); // 800EE880
  c->r[4]=0u+0x00000002u; // 800EE884
  c->lr=0x800EE88Cu; f_802285E4(c); // 800EE888
  cmps(c,0,(int32_t)c->r[3],0); // 800EE88C
  if (crb(c,2)) { goto L_800EEA50; } // 800EE890
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE894
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 800EE898
  cmps(c,0,(int32_t)c->r[0],0); // 800EE89C
  if (!crb(c,2)) { goto L_800EEA04; } // 800EE8A0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800EE8A4
  cmps(c,0,(int32_t)c->r[0],0); // 800EE8A8
  if (crb(c,0)) { goto L_800EE910; } // 800EE8AC
  c->lr=0x800EE8B4u; f_80047C90(c); // 800EE8B0
  c->r[4]=0u+0x00000000u; // 800EE8B4
  c->lr=0x800EE8BCu; f_80058EA4(c); // 800EE8B8
  c->r[4]=0u+0x0000000Au; // 800EE8BC
  c->lr=0x800EE8C4u; f_80057B44(c); // 800EE8C0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE8C4
  if (!crb(c,2)) { goto L_800EE8EC; } // 800EE8C8
  c->lr=0x800EE8D0u; f_80047C90(c); // 800EE8CC
  c->r[4]=0u+0x00000000u; // 800EE8D0
  c->lr=0x800EE8D8u; f_80058EA4(c); // 800EE8D4
  c->r[4]=0u+0x00100000u; // 800EE8D8
  c->r[4]=c->r[4]+0x00000001u; // 800EE8DC
  c->lr=0x800EE8E4u; f_80057B68(c); // 800EE8E0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE8E4
  if (crb(c,2)) { goto L_800EE910; } // 800EE8E8
L_800EE8EC:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EE8EC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800EE8F0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800EE8F4
  c->r[4]=0u+0x00000000u; // 800EE8F8
  c->r[5]=R32(c->r[31]+0x00000008u); // 800EE8FC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800EE900
  c->lr=0x800EE908u; f_800EEE08(c); // 800EE904
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800EE908
  goto L_800EE9CC; // 800EE90C
L_800EE910:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800EE910
  cmps(c,0,(int32_t)c->r[0],0); // 800EE914
  if (crb(c,0)) { goto L_800EE97C; } // 800EE918
  c->lr=0x800EE920u; f_80047C90(c); // 800EE91C
  c->r[4]=0u+0x00000000u; // 800EE920
  c->lr=0x800EE928u; f_80058EA4(c); // 800EE924
  c->r[4]=0u+0x00000005u; // 800EE928
  c->lr=0x800EE930u; f_80057B44(c); // 800EE92C
  cmps(c,0,(int32_t)c->r[3],0); // 800EE930
  if (!crb(c,2)) { goto L_800EE958; } // 800EE934
  c->lr=0x800EE93Cu; f_80047C90(c); // 800EE938
  c->r[4]=0u+0x00000000u; // 800EE93C
  c->lr=0x800EE944u; f_80058EA4(c); // 800EE940
  c->r[4]=0u+0x00200000u; // 800EE944
  c->r[4]=c->r[4]+0x00004000u; // 800EE948
  c->lr=0x800EE950u; f_80057B68(c); // 800EE94C
  cmps(c,0,(int32_t)c->r[3],0); // 800EE950
  if (crb(c,2)) { goto L_800EE97C; } // 800EE954
L_800EE958:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 800EE958
  c->r[3]=c->r[3]+0x00000001u; // 800EE95C
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800EE960
  c->r[4]=0u+0x00000000u; // 800EE964
  c->r[5]=R32(c->r[31]+0x00000008u); // 800EE968
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800EE96C
  c->lr=0x800EE974u; f_800EEE08(c); // 800EE970
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 800EE974
  goto L_800EE9CC; // 800EE978
L_800EE97C:;
  c->lr=0x800EE980u; f_80047C90(c); // 800EE97C
  c->r[4]=0u+0x00000000u; // 800EE980
  c->lr=0x800EE988u; f_80058EA4(c); // 800EE984
  c->r[4]=0u+0x00000900u; // 800EE988
  c->lr=0x800EE990u; f_80057B44(c); // 800EE98C
  cmps(c,0,(int32_t)c->r[3],0); // 800EE990
  if (!crb(c,2)) { goto L_800EE9B4; } // 800EE994
  c->lr=0x800EE99Cu; f_80047C90(c); // 800EE998
  c->r[4]=0u+0x00000000u; // 800EE99C
  c->lr=0x800EE9A4u; f_80058EA4(c); // 800EE9A0
  c->r[4]=0u+0x00000010u; // 800EE9A4
  c->lr=0x800EE9ACu; f_80057B68(c); // 800EE9A8
  cmps(c,0,(int32_t)c->r[3],0); // 800EE9AC
  if (crb(c,2)) { goto L_800EE9CC; } // 800EE9B0
L_800EE9B4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE9B4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 800EE9B8
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9BC
  if (crb(c,2)) { goto L_800EE9CC; } // 800EE9C0
  c->r[3]=c->r[31]|c->r[31]; // 800EE9C4
  c->lr=0x800EE9CCu; f_800EEDCC(c); // 800EE9C8
L_800EE9CC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE9CC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 800EE9D0
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9D4
  if (crb(c,2)) { goto L_800EEA04; } // 800EE9D8
  c->lr=0x800EE9E0u; f_8007B524(c); // 800EE9DC
  c->lr=0x800EE9E4u; f_80074E3C(c); // 800EE9E0
  c->lr=0x800EE9E8u; f_800EEE28(c); // 800EE9E4
  c->r[4]=0u+0x00000002u; // 800EE9E8
  c->r[5]=0u+0x00000000u; // 800EE9EC
  c->r[6]=0u+0x00000003u; // 800EE9F0
  c->lr=0x800EE9F8u; f_80228468(c); // 800EE9F4
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EE9F8
  c->r[0]=c->r[0]|0x00000002u; // 800EE9FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EEA00
L_800EEA04:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800EEA04
  cmps(c,0,(int32_t)c->r[0],0); // 800EEA08
  if (crb(c,0)) { goto L_800EEA50; } // 800EEA0C
  cmps(c,0,(int32_t)c->r[0],2); // 800EEA10
  if (!crb(c,0)) { goto L_800EEA50; } // 800EEA14
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800EEA18
  c->r[3]=c->r[13]+0xFFFF8D40u; // 800EEA1C
  c->r[4]=c->r[31]+c->r[0]; // 800EEA20
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EEA24
  {uint32_t ea=c->r[2]+0xFFFF8970u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EEA28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800EEA2C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EEA30
  c->r[4]=0u+0x00000000u; // 800EEA34
  c->r[5]=0u+0x00000003u; // 800EEA38
  c->lr=0x800EEA40u; f_80061368(c); // 800EEA3C
  goto L_800EEA50; // 800EEA40
L_800EEA44:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EEA44
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF00u; // 800EEA48
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EEA4C
L_800EEA50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEA50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEA54
  c->lr=c->r[0]; // 800EEA58
  c->r[1]=c->r[1]+0x00000010u; // 800EEA5C
  return; // 800EEA60
}

// fn_800EEA64
void f_800EEA64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEA64
  c->r[0]=c->lr; // 800EEA68
  W32(c->r[1]+0x00000074u,c->r[0]); // 800EEA6C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 800EEA70
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 800EEA74
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 800EEA78
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 800EEA7C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 800EEA80
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 800EEA84
  c->r[11]=c->r[1]+0x00000040u; // 800EEA88
  c->lr=0x800EEA90u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EEA8C
  c->r[30]=c->r[3]|c->r[3]; // 800EEA90
  c->r[27]=c->r[4]|c->r[4]; // 800EEA94
  c->r[26]=c->r[5]|c->r[5]; // 800EEA98
  c->r[3]=c->r[1]+0x00000018u; // 800EEA9C
  c->lr=0x800EEAA4u; f_800592DC(c); // 800EEAA0
  c->r[3]=c->r[1]+0x00000010u; // 800EEAA4
  c->lr=0x800EEAACu; f_800592DC(c); // 800EEAA8
  c->r[3]=c->r[1]+0x00000008u; // 800EEAAC
  c->lr=0x800EEAB4u; f_800592DC(c); // 800EEAB0
  c->r[31]=0u+0xFFFFFFFFu; // 800EEAB4
  c->r[0]=0u+0xFFFFFFFFu; // 800EEAB8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800EEABC
  c->r[0]=0u+0x00000015u; // 800EEAC0
  W32(c->r[30]+0x00000004u,c->r[0]); // 800EEAC4
  cmpu(c,0,c->r[27],0x00000013u); // 800EEAC8
  if (crb(c,1)) { goto L_800EEB84; } // 800EEACC
  c->r[3]=0u+0x80460000u; // 800EEAD0
  c->r[3]=c->r[3]+0x00001D28u; // 800EEAD4
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EEAD8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800EEADC
  c->ctr=c->r[3]; // 800EEAE0
  if (true) { switch (c->ctr) { case 0x800EEAE8u: goto L_800EEAE8; case 0x800EEAF0u: goto L_800EEAF0; case 0x800EEAF8u: goto L_800EEAF8; case 0x800EEB00u: goto L_800EEB00; case 0x800EEB08u: goto L_800EEB08; case 0x800EEB10u: goto L_800EEB10; case 0x800EEB18u: goto L_800EEB18; case 0x800EEB20u: goto L_800EEB20; case 0x800EEB28u: goto L_800EEB28; case 0x800EEB30u: goto L_800EEB30; case 0x800EEB38u: goto L_800EEB38; case 0x800EEB40u: goto L_800EEB40; case 0x800EEB48u: goto L_800EEB48; case 0x800EEB50u: goto L_800EEB50; case 0x800EEB58u: goto L_800EEB58; case 0x800EEB60u: goto L_800EEB60; case 0x800EEB68u: goto L_800EEB68; case 0x800EEB70u: goto L_800EEB70; case 0x800EEB78u: goto L_800EEB78; case 0x800EEB80u: goto L_800EEB80; default: break; } dispatch(c,c->ctr); return; } // 800EEAE4
L_800EEAE8:;
  c->r[31]=0u+0x00000000u; // 800EEAE8
  goto L_800EEB84; // 800EEAEC
L_800EEAF0:;
  c->r[31]=0u+0x00000003u; // 800EEAF0
  goto L_800EEB84; // 800EEAF4
L_800EEAF8:;
  c->r[31]=0u+0x00000009u; // 800EEAF8
  goto L_800EEB84; // 800EEAFC
L_800EEB00:;
  c->r[31]=0u+0x0000000Eu; // 800EEB00
  goto L_800EEB84; // 800EEB04
L_800EEB08:;
  c->r[31]=0u+0x0000000Fu; // 800EEB08
  goto L_800EEB84; // 800EEB0C
L_800EEB10:;
  c->r[31]=0u+0x00000012u; // 800EEB10
  goto L_800EEB84; // 800EEB14
L_800EEB18:;
  c->r[31]=0u+0x00000015u; // 800EEB18
  goto L_800EEB84; // 800EEB1C
L_800EEB20:;
  c->r[31]=0u+0x00000018u; // 800EEB20
  goto L_800EEB84; // 800EEB24
L_800EEB28:;
  c->r[31]=0u+0x0000001Au; // 800EEB28
  goto L_800EEB84; // 800EEB2C
L_800EEB30:;
  c->r[31]=0u+0x0000001Cu; // 800EEB30
  goto L_800EEB84; // 800EEB34
L_800EEB38:;
  c->r[31]=0u+0x0000001Eu; // 800EEB38
  goto L_800EEB84; // 800EEB3C
L_800EEB40:;
  c->r[31]=0u+0x00000020u; // 800EEB40
  goto L_800EEB84; // 800EEB44
L_800EEB48:;
  c->r[31]=0u+0x00000022u; // 800EEB48
  goto L_800EEB84; // 800EEB4C
L_800EEB50:;
  c->r[31]=0u+0x00000027u; // 800EEB50
  goto L_800EEB84; // 800EEB54
L_800EEB58:;
  c->r[31]=0u+0x0000002Bu; // 800EEB58
  goto L_800EEB84; // 800EEB5C
L_800EEB60:;
  c->r[31]=0u+0x0000002Du; // 800EEB60
  goto L_800EEB84; // 800EEB64
L_800EEB68:;
  c->r[31]=0u+0x0000002Fu; // 800EEB68
  goto L_800EEB84; // 800EEB6C
L_800EEB70:;
  c->r[31]=0u+0x00000032u; // 800EEB70
  goto L_800EEB84; // 800EEB74
L_800EEB78:;
  c->r[31]=0u+0x00000038u; // 800EEB78
  goto L_800EEB84; // 800EEB7C
L_800EEB80:;
  c->r[31]=0u+0x0000003Du; // 800EEB80
L_800EEB84:;
  c->r[0]=c->r[31]+0x00010000u; // 800EEB84
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800EEB88
  if (crb(c,2)) { goto L_800EED8C; } // 800EEB8C
  W32(c->r[30]+0x00000004u,c->r[27]); // 800EEB90
  c->r[0]=0u+0x00000001u; // 800EEB94
  W32(c->r[30]+0x00000000u,c->r[0]); // 800EEB98
  cmps(c,0,(int32_t)c->r[26],0); // 800EEB9C
  if (crb(c,2)) { goto L_800EEBAC; } // 800EEBA0
  c->r[0]=c->r[0]|0x00000004u; // 800EEBA4
  W32(c->r[30]+0x00000000u,c->r[0]); // 800EEBA8
L_800EEBAC:;
  c->lr=0x800EEBB0u; f_8007B524(c); // 800EEBAC
  c->lr=0x800EEBB4u; f_80074E3C(c); // 800EEBB0
  c->lr=0x800EEBB8u; f_800EEE28(c); // 800EEBB4
  c->r[4]=0u+0x00000002u; // 800EEBB8
  c->r[5]=0u+0x00000001u; // 800EEBBC
  c->r[6]=0u+0x00000003u; // 800EEBC0
  c->lr=0x800EEBC8u; f_80228468(c); // 800EEBC4
  c->lr=0x800EEBCCu; f_800F4430(c); // 800EEBC8
  c->r[3]=c->r[3]+0x000000A8u; // 800EEBCC
  c->r[4]=c->r[31]|c->r[31]; // 800EEBD0
  c->lr=0x800EEBD8u; f_8026B744(c); // 800EEBD4
  c->r[27]=c->r[3]|c->r[3]; // 800EEBD8
  c->r[26]=0u+0x00000000u; // 800EEBDC
  W32(c->r[30]+0x00000008u,c->r[26]); // 800EEBE0
  c->r[29]=0u+0x00000000u; // 800EEBE4
  {uint32_t ea=c->r[2]+0xFFFF8974u; c->f[29]=c->ps1[29]=RF32(ea);} // 800EEBE8
  {uint32_t ea=c->r[2]+0xFFFF8978u; c->f[30]=c->ps1[30]=RF32(ea);} // 800EEBEC
  {uint32_t ea=c->r[2]+0xFFFF8968u; c->f[31]=c->ps1[31]=RF32(ea);} // 800EEBF0
  goto L_800EECA4; // 800EEBF4
L_800EEBF8:;
  c->lr=0x800EEBFCu; f_800F4430(c); // 800EEBF8
  c->r[3]=c->r[3]+0x000000A8u; // 800EEBFC
  c->r[4]=c->r[31]+c->r[26]; // 800EEC00
  c->lr=0x800EEC08u; f_8026B744(c); // 800EEC04
  c->r[28]=c->r[3]|c->r[3]; // 800EEC08
  c->lr=0x800EEC10u; f_8007B524(c); // 800EEC0C
  c->lr=0x800EEC14u; f_80074E3C(c); // 800EEC10
  c->lr=0x800EEC18u; f_800EEE28(c); // 800EEC14
  c->r[4]=0u+0x00000002u; // 800EEC18
  c->r[5]=c->r[26]|c->r[26]; // 800EEC1C
  c->r[6]=R32(c->r[28]+0x00000004u); // 800EEC20
  c->lr=0x800EEC28u; f_80228448(c); // 800EEC24
  c->r[0]=R32(c->r[28]+0x00000008u); // 800EEC28
  cmps(c,0,(int32_t)c->r[0],-1); // 800EEC2C
  if (!crb(c,2)) { goto L_800EEC7C; } // 800EEC30
  W32(c->r[30]+0x0000000Cu,c->r[29]); // 800EEC34
  c->r[0]=R32(c->r[30]+0x00000008u); // 800EEC38
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EEC3C
  c->r[3]=c->r[30]+c->r[0]; // 800EEC40
  W32(c->r[3]+0x00000010u,c->r[26]); // 800EEC44
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[29]);} // 800EEC48
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 800EEC4C
  c->lr=0x800EEC54u; f_8007B524(c); // 800EEC50
  c->lr=0x800EEC58u; f_80074E3C(c); // 800EEC54
  c->lr=0x800EEC5Cu; f_800EEE28(c); // 800EEC58
  c->r[4]=0u+0x00000002u; // 800EEC5C
  c->r[5]=c->r[1]+0x00000008u; // 800EEC60
  c->r[6]=c->r[26]|c->r[26]; // 800EEC64
  c->lr=0x800EEC6Cu; f_802286E8(c); // 800EEC68
  c->r[3]=R32(c->r[30]+0x00000008u); // 800EEC6C
  c->r[0]=c->r[3]+0x00000001u; // 800EEC70
  W32(c->r[30]+0x00000008u,c->r[0]); // 800EEC74
  goto L_800EECA0; // 800EEC78
L_800EEC7C:;
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[31]);} // 800EEC7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[30]);} // 800EEC80
  c->lr=0x800EEC88u; f_8007B524(c); // 800EEC84
  c->lr=0x800EEC8Cu; f_80074E3C(c); // 800EEC88
  c->lr=0x800EEC90u; f_800EEE28(c); // 800EEC8C
  c->r[4]=0u+0x00000002u; // 800EEC90
  c->r[5]=c->r[1]+0x00000008u; // 800EEC94
  c->r[6]=c->r[26]|c->r[26]; // 800EEC98
  c->lr=0x800EECA0u; f_802286E8(c); // 800EEC9C
L_800EECA0:;
  c->r[26]=c->r[26]+0x00000001u; // 800EECA0
L_800EECA4:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 800EECA4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800EECA8
  if (crb(c,0)) { IRQCHK(c); goto L_800EEBF8; } // 800EECAC
  {uint32_t ea=c->r[2]+0xFFFF896Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800EECB0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[2]);} // 800EECB4
  c->r[3]=R32(c->r[27]+0x00000008u); // 800EECB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EECBC
  {uint32_t ea=c->r[2]+0xFFFF8988u; c->f[1]=RF64(ea);} // 800EECC0
  c->r[0]=c->r[0]^0x80000000u; // 800EECC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EECC8
  c->r[0]=0u+0x43300000u; // 800EECCC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800EECD0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800EECD4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800EECD8
  {uint32_t ea=c->r[2]+0xFFFF8980u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EECDC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800EECE0
  {uint32_t ea=c->r[2]+0xFFFF897Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EECE4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800EECE8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800EECEC
  {uint32_t ea=c->r[2]+0xFFFF8984u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EECF0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800EECF4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800EECF8
  c->lr=0x800EED00u; f_8007B524(c); // 800EECFC
  c->lr=0x800EED04u; f_80074E3C(c); // 800EED00
  c->lr=0x800EED08u; f_800EEE28(c); // 800EED04
  c->r[4]=0u+0x00000002u; // 800EED08
  c->r[5]=c->r[1]+0x00000018u; // 800EED0C
  c->lr=0x800EED14u; f_80228764(c); // 800EED10
  c->lr=0x800EED18u; f_8007B524(c); // 800EED14
  c->lr=0x800EED1Cu; f_80074E3C(c); // 800EED18
  c->lr=0x800EED20u; f_800EEE28(c); // 800EED1C
  c->r[4]=0u+0x00000002u; // 800EED20
  c->r[5]=c->r[1]+0x00000010u; // 800EED24
  c->lr=0x800EED2Cu; f_802287A8(c); // 800EED28
  c->lr=0x800EED30u; f_8007B524(c); // 800EED2C
  c->lr=0x800EED34u; f_80074E3C(c); // 800EED30
  c->lr=0x800EED38u; f_800EEE28(c); // 800EED34
  c->r[4]=0u+0x00000002u; // 800EED38
  c->lr=0x800EED40u; f_80228868(c); // 800EED3C
  c->r[29]=0u+0x00000000u; // 800EED40
  c->r[27]=c->r[30]+0x00000018u; // 800EED44
  c->r[28]=c->r[30]|c->r[30]; // 800EED48
  goto L_800EED78; // 800EED4C
L_800EED50:;
  c->lr=0x800EED54u; f_8007B524(c); // 800EED50
  c->lr=0x800EED58u; f_80074E3C(c); // 800EED54
  c->lr=0x800EED5Cu; f_800EEE28(c); // 800EED58
  c->r[4]=0u+0x00000002u; // 800EED5C
  c->r[5]=R32(c->r[28]+0x00000010u); // 800EED60
  c->r[6]=c->r[27]|c->r[27]; // 800EED64
  c->lr=0x800EED6Cu; f_802287EC(c); // 800EED68
  c->r[27]=c->r[27]+0x00000008u; // 800EED6C
  c->r[28]=c->r[28]+0x00000004u; // 800EED70
  c->r[29]=c->r[29]+0x00000001u; // 800EED74
L_800EED78:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 800EED78
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800EED7C
  if (crb(c,0)) { IRQCHK(c); goto L_800EED50; } // 800EED80
  c->r[3]=0u+0x00000001u; // 800EED84
  goto L_800EED90; // 800EED88
L_800EED8C:;
  c->r[3]=0u+0x00000000u; // 800EED8C
L_800EED90:;
  c->r[0]=0u+0x00000068u; // 800EED90
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800EED94
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 800EED98
  c->r[0]=0u+0x00000058u; // 800EED9C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800EEDA0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 800EEDA4
  c->r[0]=0u+0x00000048u; // 800EEDA8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 800EEDAC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 800EEDB0
  c->r[11]=c->r[1]+0x00000040u; // 800EEDB4
  c->lr=0x800EEDBCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EEDB8
  c->r[0]=R32(c->r[1]+0x00000074u); // 800EEDBC
  c->lr=c->r[0]; // 800EEDC0
  c->r[1]=c->r[1]+0x00000070u; // 800EEDC4
  return; // 800EEDC8
}

// fn_800EEDCC
void f_800EEDCC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EEDCC
  c->r[0]=c->r[0]|0x00000008u; // 800EEDD0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EEDD4
  return; // 800EEDD8
}

// fn_800EEDDC
void f_800EEDDC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EEDDC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800EEDE0
  c->r[0]=cntlz(c->r[0]); // 800EEDE4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800EEDE8
  return; // 800EEDEC
}

// fn_800EEDF0
void f_800EEDF0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800EEDF0
  return; // 800EEDF4
}

// fn_800EEDF8
void f_800EEDF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 800EEDF8
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[2]);} // 800EEDFC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[3]);} // 800EEE00
  return; // 800EEE04
}

// fn_800EEE08
void f_800EEE08(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[5]); // 800EEE08
  if (!crb(c,1)) { goto L_800EEE18; } // 800EEE0C
  c->r[3]=c->r[4]|c->r[4]; // 800EEE10
  return; // 800EEE14
L_800EEE18:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800EEE18
  if (!crb(c,0)) return; // 800EEE1C
  c->r[3]=c->r[5]|c->r[5]; // 800EEE20
  return; // 800EEE24
}

// fn_800EEE28
void f_800EEE28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800EEE28
  c->r[3]=c->r[3]+0xFFFF80E0u; // 800EEE2C
  return; // 800EEE30
}

// fn_800EEE34
void f_800EEE34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEE34
  c->r[0]=c->lr; // 800EEE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEE3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEE40
  c->r[31]=c->r[3]|c->r[3]; // 800EEE44
  c->lr=0x800EEE4Cu; f_80078F38(c); // 800EEE48
  c->r[3]=0u+0x80460000u; // 800EEE4C
  c->r[0]=c->r[3]+0x00001D78u; // 800EEE50
  W32(c->r[31]+0x00000058u,c->r[0]); // 800EEE54
  c->r[3]=c->r[31]+0x00010000u; // 800EEE58
  c->r[3]=c->r[3]+0xFFFF80D0u; // 800EEE5C
  c->r[4]=0u+0x00000000u; // 800EEE60
  c->r[5]=0u+0x00000004u; // 800EEE64
  c->lr=0x800EEE6Cu; f_800060B8(c); // 800EEE68
  c->r[0]=0u+0x00000001u; // 800EEE6C
  c->r[3]=c->r[31]+0x00010000u; // 800EEE70
  W32(c->r[3]+0xFFFF80D4u,c->r[0]); // 800EEE74
  c->r[3]=c->r[31]|c->r[31]; // 800EEE78
  c->r[4]=0u+0x00000000u; // 800EEE7C
  c->r[5]=0u+0x000000FFu; // 800EEE80
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EEE84
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EEE88
  c->ctr=c->r[12]; // 800EEE8C
  if (true) { c->lr=0x800EEE94u; dispatch(c,c->ctr); } // 800EEE90
  c->r[3]=c->r[31]|c->r[31]; // 800EEE94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEE98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEE9C
  c->lr=c->r[0]; // 800EEEA0
  c->r[1]=c->r[1]+0x00000010u; // 800EEEA4
  return; // 800EEEA8
}

// fn_800EEEAC
void f_800EEEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEEAC
  c->r[0]=c->lr; // 800EEEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEEB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EEEBC
  c->r[30]=c->r[3]|c->r[3]; // 800EEEC0
  c->r[31]=c->r[4]|c->r[4]; // 800EEEC4
  cmps(c,0,(int32_t)c->r[3],0); // 800EEEC8
  if (crb(c,2)) { goto L_800EEEEC; } // 800EEECC
  c->r[4]=0u+0x00000000u; // 800EEED0
  c->lr=0x800EEED8u; f_80078FA4(c); // 800EEED4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800EEED8
  cmps(c,0,(int32_t)c->r[0],0); // 800EEEDC
  if (!crb(c,1)) { goto L_800EEEEC; } // 800EEEE0
  c->r[3]=c->r[30]|c->r[30]; // 800EEEE4
  c->lr=0x800EEEECu; f_80047B20(c); // 800EEEE8
L_800EEEEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800EEEEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEEF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EEEF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEEF8
  c->lr=c->r[0]; // 800EEEFC
  c->r[1]=c->r[1]+0x00000010u; // 800EEF00
  return; // 800EEF04
}

// fn_800EEF08
void f_800EEF08(Ctx* __restrict c) {
  return; // 800EEF08
}

// fn_800EEF0C
void f_800EEF0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEF0C
  c->r[0]=c->lr; // 800EEF10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEF14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEF18
  c->r[31]=c->r[3]|c->r[3]; // 800EEF1C
  c->lr=0x800EEF24u; f_8007BC8C(c); // 800EEF20
  c->r[3]=0u+0x00000008u; // 800EEF24
  c->lr=0x800EEF2Cu; f_8007BD84(c); // 800EEF28
  c->lr=0x800EEF30u; f_8011AF84(c); // 800EEF2C
  c->lr=0x800EEF34u; f_801B1A00(c); // 800EEF30
  c->lr=0x800EEF38u; f_801C9614(c); // 800EEF34
  c->lr=0x800EEF3Cu; f_801E1550(c); // 800EEF38
  c->lr=0x800EEF40u; f_8021C22C(c); // 800EEF3C
  c->r[3]=c->r[31]|c->r[31]; // 800EEF40
  c->r[4]=0u+0x00000000u; // 800EEF44
  c->lr=0x800EEF4Cu; f_800EF18C(c); // 800EEF48
  c->r[3]=c->r[31]|c->r[31]; // 800EEF4C
  c->r[4]=0u+0x00000000u; // 800EEF50
  c->lr=0x800EEF58u; f_800EF21C(c); // 800EEF54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEF58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEF5C
  c->lr=c->r[0]; // 800EEF60
  c->r[1]=c->r[1]+0x00000010u; // 800EEF64
  return; // 800EEF68
}

// fn_800EEF6C
void f_800EEF6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEF6C
  c->r[0]=c->lr; // 800EEF70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EEF74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EEF78
  c->r[31]=c->r[3]|c->r[3]; // 800EEF7C
  c->r[3]=c->r[3]+0x00010000u; // 800EEF80
  c->r[0]=R32(c->r[3]+0xFFFF80D4u); // 800EEF84
  cmps(c,0,(int32_t)c->r[0],3); // 800EEF88
  if (crb(c,2)) { goto L_800EEFCC; } // 800EEF8C
  if (!crb(c,0)) { goto L_800EEFA4; } // 800EEF90
  cmps(c,0,(int32_t)c->r[0],1); // 800EEF94
  if (crb(c,2)) { goto L_800EEFB4; } // 800EEF98
  if (!crb(c,0)) { goto L_800EEFBC; } // 800EEF9C
  goto L_800EEFD8; // 800EEFA0
L_800EEFA4:;
  cmps(c,0,(int32_t)c->r[0],5); // 800EEFA4
  if (crb(c,2)) { goto L_800EEFC4; } // 800EEFA8
  if (!crb(c,0)) { goto L_800EEFD8; } // 800EEFAC
  goto L_800EEFD4; // 800EEFB0
L_800EEFB4:;
  c->lr=0x800EEFB8u; f_80154970(c); // 800EEFB4
  goto L_800EEFD8; // 800EEFB8
L_800EEFBC:;
  c->lr=0x800EEFC0u; f_801E7440(c); // 800EEFBC
  goto L_800EEFD8; // 800EEFC0
L_800EEFC4:;
  c->lr=0x800EEFC8u; f_8025B64C(c); // 800EEFC4
  goto L_800EEFD8; // 800EEFC8
L_800EEFCC:;
  c->lr=0x800EEFD0u; f_801E72C0(c); // 800EEFCC
  goto L_800EEFD8; // 800EEFD0
L_800EEFD4:;
  c->lr=0x800EEFD8u; f_801E75C0(c); // 800EEFD4
L_800EEFD8:;
  c->r[3]=c->r[31]|c->r[31]; // 800EEFD8
  c->r[4]=0u+0x00000003u; // 800EEFDC
  c->lr=0x800EEFE4u; f_800EF21C(c); // 800EEFE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EEFE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EEFE8
  c->lr=c->r[0]; // 800EEFEC
  c->r[1]=c->r[1]+0x00000010u; // 800EEFF0
  return; // 800EEFF4
}

// fn_800EEFF8
void f_800EEFF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEFF8
  c->r[0]=c->lr; // 800EEFFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF004
  c->r[31]=c->r[3]|c->r[3]; // 800EF008
  c->lr=0x800EF010u; f_80111CBC(c); // 800EF00C
  cmps(c,0,(int32_t)c->r[3],0); // 800EF010
  if (!crb(c,2)) { goto L_800EF030; } // 800EF014
  c->r[3]=c->r[31]|c->r[31]; // 800EF018
  c->r[4]=0u+0x00000001u; // 800EF01C
  c->lr=0x800EF024u; f_800EF18C(c); // 800EF020
  c->r[3]=c->r[31]|c->r[31]; // 800EF024
  c->r[4]=0u+0x00000000u; // 800EF028
  c->lr=0x800EF030u; f_800EF21C(c); // 800EF02C
L_800EF030:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF030
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF034
  c->lr=c->r[0]; // 800EF038
  c->r[1]=c->r[1]+0x00000010u; // 800EF03C
  return; // 800EF040
}

// fn_800EF044
void f_800EF044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF044
  c->r[0]=c->lr; // 800EF048
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF04C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF050
  c->r[31]=c->r[3]|c->r[3]; // 800EF054
  c->lr=0x800EF05Cu; f_80111C84(c); // 800EF058
  c->r[3]=c->r[31]|c->r[31]; // 800EF05C
  c->r[4]=0u+0x00000005u; // 800EF060
  c->lr=0x800EF068u; f_800EF21C(c); // 800EF064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF068
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF06C
  c->lr=c->r[0]; // 800EF070
  c->r[1]=c->r[1]+0x00000010u; // 800EF074
  return; // 800EF078
}

// fn_800EF07C
void f_800EF07C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF07C
  c->r[0]=c->lr; // 800EF080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF088
  c->r[31]=c->r[3]|c->r[3]; // 800EF08C
  c->lr=0x800EF094u; f_80111CE8(c); // 800EF090
  cmps(c,0,(int32_t)c->r[3],0); // 800EF094
  if (crb(c,2)) { goto L_800EF0C0; } // 800EF098
  c->r[3]=c->r[31]|c->r[31]; // 800EF09C
  c->r[4]=0u+0x00000001u; // 800EF0A0
  c->lr=0x800EF0A8u; f_800EF1EC(c); // 800EF0A4
  c->r[3]=c->r[31]|c->r[31]; // 800EF0A8
  c->r[4]=0u+0x00000002u; // 800EF0AC
  c->lr=0x800EF0B4u; f_800EF18C(c); // 800EF0B0
  c->r[3]=c->r[31]|c->r[31]; // 800EF0B4
  c->r[4]=0u+0x00000000u; // 800EF0B8
  c->lr=0x800EF0C0u; f_800EF21C(c); // 800EF0BC
L_800EF0C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF0C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF0C4
  c->lr=c->r[0]; // 800EF0C8
  c->r[1]=c->r[1]+0x00000010u; // 800EF0CC
  return; // 800EF0D0
}

// fn_800EF0D4
void f_800EF0D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF0D4
  c->r[0]=c->lr; // 800EF0D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF0DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF0E0
  c->r[31]=c->r[3]|c->r[3]; // 800EF0E4
  c->r[4]=0u+0x00000000u; // 800EF0E8
  c->lr=0x800EF0F0u; f_800EF1B8(c); // 800EF0EC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF0F0
  if (crb(c,2)) { goto L_800EF108; } // 800EF0F4
  c->lr=0x800EF0FCu; f_8011B014(c); // 800EF0F8
  c->r[3]=c->r[31]|c->r[31]; // 800EF0FC
  c->r[4]=0u+0x00000007u; // 800EF100
  c->lr=0x800EF108u; f_800EF21C(c); // 800EF104
L_800EF108:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF108
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF10C
  c->lr=c->r[0]; // 800EF110
  c->r[1]=c->r[1]+0x00000010u; // 800EF114
  return; // 800EF118
}

// fn_800EF11C
void f_800EF11C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF11C
  c->r[0]=c->lr; // 800EF120
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF124
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF128
  c->r[31]=c->r[3]|c->r[3]; // 800EF12C
  c->lr=0x800EF134u; f_8011AFF0(c); // 800EF130
  cmps(c,0,(int32_t)c->r[3],0); // 800EF134
  if (crb(c,2)) { goto L_800EF178; } // 800EF138
  c->lr=0x800EF140u; f_801B1A24(c); // 800EF13C
  c->lr=0x800EF144u; f_801C9638(c); // 800EF140
  c->lr=0x800EF148u; f_801E1574(c); // 800EF144
  c->lr=0x800EF14Cu; f_8021C250(c); // 800EF148
  c->lr=0x800EF150u; f_8011AFA8(c); // 800EF14C
  c->lr=0x800EF154u; f_8007BCD4(c); // 800EF150
  c->r[3]=c->r[31]|c->r[31]; // 800EF154
  c->r[4]=0u+0x00000000u; // 800EF158
  c->lr=0x800EF160u; f_800EF1EC(c); // 800EF15C
  c->r[3]=c->r[31]|c->r[31]; // 800EF160
  c->r[4]=0u+0x00000003u; // 800EF164
  c->lr=0x800EF16Cu; f_800EF18C(c); // 800EF168
  c->r[3]=c->r[31]|c->r[31]; // 800EF16C
  c->r[4]=0u+0x00000000u; // 800EF170
  c->lr=0x800EF178u; f_800EF21C(c); // 800EF174
L_800EF178:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF178
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF17C
  c->lr=c->r[0]; // 800EF180
  c->r[1]=c->r[1]+0x00000010u; // 800EF184
  return; // 800EF188
}

// fn_800EF18C
void f_800EF18C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800EF18C
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 800EF190
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF194
  c->r[6]=c->r[3]+c->r[0]; // 800EF198
  c->r[5]=R32(c->r[6]+0xFFFF80D0u); // 800EF19C
  c->r[3]=0u+0x00000001u; // 800EF1A0
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 800EF1A4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800EF1A8
  c->r[0]=c->r[5]|c->r[0]; // 800EF1AC
  W32(c->r[6]+0xFFFF80D0u,c->r[0]); // 800EF1B0
  return; // 800EF1B4
}

// fn_800EF1B8
void f_800EF1B8(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 800EF1B8
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 800EF1BC
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800EF1C0
  c->r[3]=c->r[3]+0x00010000u; // 800EF1C4
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 800EF1C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF1CC
  c->r[3]=c->r[3]+c->r[0]; // 800EF1D0
  c->r[0]=R32(c->r[3]+0xFFFF80D0u); // 800EF1D4
  c->r[3]=c->r[5]&c->r[0]; // 800EF1D8
  c->r[0]=0u-c->r[3]; // 800EF1DC
  c->r[0]=c->r[0]|c->r[3]; // 800EF1E0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800EF1E4
  return; // 800EF1E8
}

// fn_800EF1EC
void f_800EF1EC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800EF1EC
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 800EF1F0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF1F4
  c->r[6]=c->r[3]+c->r[0]; // 800EF1F8
  c->r[5]=R32(c->r[6]+0xFFFF80D0u); // 800EF1FC
  c->r[3]=0u+0x00000001u; // 800EF200
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 800EF204
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800EF208
  c->r[0]=~(c->r[0]|c->r[0]); // 800EF20C
  c->r[0]=c->r[5]&c->r[0]; // 800EF210
  W32(c->r[6]+0xFFFF80D0u,c->r[0]); // 800EF214
  return; // 800EF218
}

// fn_800EF21C
void f_800EF21C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 800EF21C
  return; // 800EF220
}

// fn_800EF224
void f_800EF224(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800EF224
  W32(c->r[3]+0xFFFF80D4u,c->r[4]); // 800EF228
  return; // 800EF22C
}

// fn_800EF230
void f_800EF230(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF230
  c->r[0]=c->lr; // 800EF234
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF23C
  c->r[31]=c->r[3]|c->r[3]; // 800EF240
  c->r[4]=0u+0x00000001u; // 800EF244
  c->lr=0x800EF24Cu; f_800EF1EC(c); // 800EF248
  c->r[3]=c->r[31]|c->r[31]; // 800EF24C
  c->r[4]=0u+0x00000002u; // 800EF250
  c->lr=0x800EF258u; f_800EF1EC(c); // 800EF254
  c->r[3]=c->r[31]|c->r[31]; // 800EF258
  c->r[4]=0u+0x00000002u; // 800EF25C
  c->lr=0x800EF264u; f_800EF21C(c); // 800EF260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF264
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF268
  c->lr=c->r[0]; // 800EF26C
  c->r[1]=c->r[1]+0x00000010u; // 800EF270
  return; // 800EF274
}

// fn_800EF278
void f_800EF278(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800EF278
  f_800EF1B8(c); return; // 800EF27C
}

// fn_800EF280
void f_800EF280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF280
  c->r[0]=c->lr; // 800EF284
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF288
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF28C
  c->r[31]=c->r[3]|c->r[3]; // 800EF290
  c->r[4]=0u+0x00000002u; // 800EF294
  c->lr=0x800EF29Cu; f_800EF1EC(c); // 800EF298
  c->r[3]=c->r[31]|c->r[31]; // 800EF29C
  c->r[4]=0u+0x00000004u; // 800EF2A0
  c->lr=0x800EF2A8u; f_800EF21C(c); // 800EF2A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF2A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF2AC
  c->lr=c->r[0]; // 800EF2B0
  c->r[1]=c->r[1]+0x00000010u; // 800EF2B4
  return; // 800EF2B8
}

// fn_800EF2BC
void f_800EF2BC(Ctx* __restrict c) {
  c->r[4]=0u+0x00000002u; // 800EF2BC
  f_800EF1B8(c); return; // 800EF2C0
}

// fn_800EF2C4
void f_800EF2C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF2C4
  c->r[0]=c->lr; // 800EF2C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF2CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF2D0
  c->r[31]=c->r[3]|c->r[3]; // 800EF2D4
  c->r[3]=c->r[3]+0x00010000u; // 800EF2D8
  c->r[3]=c->r[3]+0xFFFF80D0u; // 800EF2DC
  c->r[4]=0u+0x00000000u; // 800EF2E0
  c->r[5]=0u+0x00000004u; // 800EF2E4
  c->lr=0x800EF2ECu; f_800060B8(c); // 800EF2E8
  c->r[3]=c->r[31]|c->r[31]; // 800EF2EC
  c->r[4]=0u+0x00000001u; // 800EF2F0
  c->lr=0x800EF2F8u; f_800EF21C(c); // 800EF2F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF2F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF2FC
  c->lr=c->r[0]; // 800EF300
  c->r[1]=c->r[1]+0x00000010u; // 800EF304
  return; // 800EF308
}

// fn_800EF30C
void f_800EF30C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800EF30C
  f_800EF1B8(c); return; // 800EF310
}

// fn_800EF314
void f_800EF314(Ctx* __restrict c) {
  c->r[4]=0u+0x00000006u; // 800EF314
  f_800EF21C(c); return; // 800EF318
}

// fn_800EF31C
void f_800EF31C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000003u; // 800EF31C
  f_800EF1B8(c); return; // 800EF320
}

// fn_800EF324
void f_800EF324(Ctx* __restrict c) {
  c->r[4]=0u+0x00000006u; // 800EF324
  f_800EF21C(c); return; // 800EF328
}

// fn_800EF32C
void f_800EF32C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000003u; // 800EF32C
  f_800EF1B8(c); return; // 800EF330
}

// fn_800EF334
void f_800EF334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF334
  c->r[0]=c->lr; // 800EF338
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF340
  c->r[31]=c->r[3]|c->r[3]; // 800EF344
  c->lr=0x800EF34Cu; f_8011AFCC(c); // 800EF348
  c->lr=0x800EF350u; f_8007BCB0(c); // 800EF34C
  c->r[3]=c->r[31]|c->r[31]; // 800EF350
  c->r[0]=R32(c->r[31]+0x000000B0u); // 800EF354
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800EF358
  c->r[4]=0u+0x80430000u; // 800EF35C
  c->r[0]=c->r[4]+0xFFFFDE78u; // 800EF360
  c->r[12]=c->r[0]+c->r[5]; // 800EF364
  c->lr=0x800EF36Cu; f_802F09D0(c); // 800EF368
  c->r[0]=c->r[0]|0x00000000u; // 800EF36C
  c->r[3]=c->r[31]|c->r[31]; // 800EF370
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EF374
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800EF378
  c->ctr=c->r[12]; // 800EF37C
  if (true) { c->lr=0x800EF384u; dispatch(c,c->ctr); } // 800EF380
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF384
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF388
  c->lr=c->r[0]; // 800EF38C
  c->r[1]=c->r[1]+0x00000010u; // 800EF390
  return; // 800EF394
}

// fn_800EF398
void f_800EF398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF398
  c->r[0]=c->lr; // 800EF39C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EF3A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EF3A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EF3A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EF3AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800EF3B0
  c->r[28]=c->r[3]|c->r[3]; // 800EF3B4
  c->lr=0x800EF3BCu; f_80078B74(c); // 800EF3B8
  c->r[3]=0u+0x80460000u; // 800EF3BC
  c->r[0]=c->r[3]+0x00001EB4u; // 800EF3C0
  W32(c->r[28]+0x00000058u,c->r[0]); // 800EF3C4
  c->r[3]=c->r[28]+0x000000C0u; // 800EF3C8
  c->r[4]=0u+0x800F0000u; // 800EF3CC
  c->r[4]=c->r[4]+0x00001968u; // 800EF3D0
  c->r[5]=0u+0x800F0000u; // 800EF3D4
  c->r[5]=c->r[5]+0x00001908u; // 800EF3D8
  c->r[6]=0u+0x000008F8u; // 800EF3DC
  c->r[7]=0u+0x00000031u; // 800EF3E0
  c->lr=0x800EF3E8u; f_802F07B0(c); // 800EF3E4
  c->r[29]=c->r[28]+0x00020000u; // 800EF3E8
  c->r[29]=c->r[29]+0xFFFFB854u; // 800EF3EC
  c->r[30]=c->r[28]+0x00020000u; // 800EF3F0
  c->r[31]=c->r[30]+0xFFFFB8B4u; // 800EF3F4
L_800EF3F8:;
  c->r[3]=c->r[29]|c->r[29]; // 800EF3F8
  c->lr=0x800EF400u; f_800F18CC(c); // 800EF3FC
  c->r[29]=c->r[29]+0x00000018u; // 800EF400
  cmpu(c,0,c->r[29],c->r[31]); // 800EF404
  if (crb(c,0)) { IRQCHK(c); goto L_800EF3F8; } // 800EF408
  c->r[3]=c->r[30]|c->r[30]; // 800EF40C
  c->r[3]=c->r[3]+0xFFFFB8CCu; // 800EF410
  c->r[4]=0u+0x800F0000u; // 800EF414
  c->r[4]=c->r[4]+0x0000189Cu; // 800EF418
  c->r[5]=0u+0x800F0000u; // 800EF41C
  c->r[5]=c->r[5]+0x00001840u; // 800EF420
  c->r[6]=0u+0x000008C4u; // 800EF424
  c->r[7]=0u+0x0000000Eu; // 800EF428
  c->lr=0x800EF430u; f_802F07B0(c); // 800EF42C
  c->r[3]=c->r[28]+0x00020000u; // 800EF430
  c->r[3]=c->r[3]+0x00003384u; // 800EF434
  c->lr=0x800EF43Cu; f_800F1B48(c); // 800EF438
  c->r[3]=c->r[28]+0x00020000u; // 800EF43C
  c->r[3]=c->r[3]+0x00005120u; // 800EF440
  c->lr=0x800EF448u; f_8008E550(c); // 800EF444
  c->r[0]=0u+0x00000000u; // 800EF448
  W32(c->r[28]+0x000000B8u,c->r[0]); // 800EF44C
  c->r[3]=c->r[28]|c->r[28]; // 800EF450
  c->r[4]=0u+0x80460000u; // 800EF454
  c->r[4]=c->r[4]+0x00001DF0u; // 800EF458
  c->lr=0x800EF460u; f_80078E9C(c); // 800EF45C
  c->lr=0x800EF464u; f_8007B524(c); // 800EF460
  c->lr=0x800EF468u; f_8006E224(c); // 800EF464
  c->r[4]=c->r[3]|c->r[3]; // 800EF468
  c->r[3]=c->r[28]|c->r[28]; // 800EF46C
  c->r[5]=0u+0x00000000u; // 800EF470
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EF474
  c->r[12]=R32(c->r[12]+0x00000010u); // 800EF478
  c->ctr=c->r[12]; // 800EF47C
  if (true) { c->lr=0x800EF484u; dispatch(c,c->ctr); } // 800EF480
  c->r[3]=c->r[28]|c->r[28]; // 800EF484
  c->r[4]=0u+0x00000000u; // 800EF488
  c->lr=0x800EF490u; f_800F1900(c); // 800EF48C
  c->r[3]=c->r[28]|c->r[28]; // 800EF490
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EF494
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EF498
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EF49C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EF4A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EF4A4
  c->lr=c->r[0]; // 800EF4A8
  c->r[1]=c->r[1]+0x00000020u; // 800EF4AC
  return; // 800EF4B0
}

// fn_800EF4B4
void f_800EF4B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF4B4
  c->r[0]=c->lr; // 800EF4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF4BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF4C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800EF4C4
  c->r[30]=c->r[3]|c->r[3]; // 800EF4C8
  c->r[31]=c->r[4]|c->r[4]; // 800EF4CC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF4D0
  if (crb(c,2)) { goto L_800EF578; } // 800EF4D4
  c->r[4]=0u+0x80460000u; // 800EF4D8
  c->r[0]=c->r[4]+0x00001EB4u; // 800EF4DC
  W32(c->r[3]+0x00000058u,c->r[0]); // 800EF4E0
  c->lr=0x800EF4E8u; f_8007B524(c); // 800EF4E4
  c->lr=0x800EF4ECu; f_8006E224(c); // 800EF4E8
  c->r[4]=c->r[3]|c->r[3]; // 800EF4EC
  c->r[3]=c->r[30]|c->r[30]; // 800EF4F0
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EF4F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800EF4F8
  c->ctr=c->r[12]; // 800EF4FC
  if (true) { c->lr=0x800EF504u; dispatch(c,c->ctr); } // 800EF500
  c->r[3]=c->r[30]+0x00020000u; // 800EF504
  c->r[3]=c->r[3]+0x00005120u; // 800EF508
  c->r[4]=0u+0xFFFFFFFFu; // 800EF50C
  c->lr=0x800EF514u; f_8008E50C(c); // 800EF510
  c->r[3]=c->r[30]+0x00020000u; // 800EF514
  c->r[3]=c->r[3]+0x00003384u; // 800EF518
  c->r[4]=0u+0xFFFFFFFFu; // 800EF51C
  c->lr=0x800EF524u; f_800F1B94(c); // 800EF520
  c->r[3]=c->r[30]+0x00020000u; // 800EF524
  c->r[3]=c->r[3]+0xFFFFB8CCu; // 800EF528
  c->r[4]=0u+0x800F0000u; // 800EF52C
  c->r[4]=c->r[4]+0x00001840u; // 800EF530
  c->r[5]=0u+0x000008C4u; // 800EF534
  c->r[6]=0u+0x0000000Eu; // 800EF538
  c->lr=0x800EF540u; f_802F08A8(c); // 800EF53C
  c->r[3]=c->r[30]+0x000000C0u; // 800EF540
  c->r[4]=0u+0x800F0000u; // 800EF544
  c->r[4]=c->r[4]+0x00001908u; // 800EF548
  c->r[5]=0u+0x000008F8u; // 800EF54C
  c->r[6]=0u+0x00000031u; // 800EF550
  c->lr=0x800EF558u; f_802F08A8(c); // 800EF554
  c->r[3]=c->r[30]|c->r[30]; // 800EF558
  c->r[4]=0u+0x00000000u; // 800EF55C
  c->lr=0x800EF564u; f_80078BF0(c); // 800EF560
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800EF564
  cmps(c,0,(int32_t)c->r[0],0); // 800EF568
  if (!crb(c,1)) { goto L_800EF578; } // 800EF56C
  c->r[3]=c->r[30]|c->r[30]; // 800EF570
  c->lr=0x800EF578u; f_80047B20(c); // 800EF574
L_800EF578:;
  c->r[3]=c->r[30]|c->r[30]; // 800EF578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF57C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800EF580
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF584
  c->lr=c->r[0]; // 800EF588
  c->r[1]=c->r[1]+0x00000010u; // 800EF58C
  return; // 800EF590
}

// fn_800EF594
void f_800EF594(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 800EF594
  f_800F1900(c); return; // 800EF598
}

// fn_800EF59C
void f_800EF59C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800EF59C
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 800EF5A0
  c->r[0]=0u-c->r[3]; // 800EF5A4
  c->r[0]=c->r[0]|c->r[3]; // 800EF5A8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800EF5AC
  return; // 800EF5B0
}

// fn_800EF5B4
void f_800EF5B4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 800EF5B4
  f_800F1900(c); return; // 800EF5B8
}

// fn_800EF5BC
void f_800EF5BC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 800EF5BC
  return; // 800EF5C0
}

// fn_800EF5C4
void f_800EF5C4(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 800EF5C4
  f_800F1900(c); return; // 800EF5C8
}

// fn_800EF5CC
void f_800EF5CC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000B8u); // 800EF5CC
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 800EF5D0
  c->r[0]=0u-c->r[3]; // 800EF5D4
  c->r[0]=c->r[0]|c->r[3]; // 800EF5D8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800EF5DC
  return; // 800EF5E0
}

// fn_800EF5E4
void f_800EF5E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF5E4
  c->r[0]=c->lr; // 800EF5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF5EC
  c->r[0]=R32(c->r[3]+0x000000B0u); // 800EF5F0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800EF5F4
  c->r[4]=0u+0x80430000u; // 800EF5F8
  c->r[0]=c->r[4]+0xFFFFE020u; // 800EF5FC
  c->r[12]=c->r[0]+c->r[5]; // 800EF600
  c->lr=0x800EF608u; f_802F09D0(c); // 800EF604
  c->r[0]=c->r[0]|0x00000000u; // 800EF608
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF60C
  c->lr=c->r[0]; // 800EF610
  c->r[1]=c->r[1]+0x00000010u; // 800EF614
  return; // 800EF618
}

// fn_800EF61C
void f_800EF61C(Ctx* __restrict c) {
  return; // 800EF61C
}

// fn_800EF620
void f_800EF620(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF620
  c->r[0]=c->lr; // 800EF624
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF62C
  c->r[31]=c->r[3]|c->r[3]; // 800EF630
  c->lr=0x800EF638u; f_8007B524(c); // 800EF634
  c->lr=0x800EF63Cu; f_8006E224(c); // 800EF638
  c->lr=0x800EF640u; f_8006E3D0(c); // 800EF63C
  c->r[12]=R32(c->r[3]+0x00000058u); // 800EF640
  c->r[12]=R32(c->r[12]+0x00000020u); // 800EF644
  c->ctr=c->r[12]; // 800EF648
  if (true) { c->lr=0x800EF650u; dispatch(c,c->ctr); } // 800EF64C
  cmps(c,0,(int32_t)c->r[3],0); // 800EF650
  if (crb(c,2)) { goto L_800EF7BC; } // 800EF654
  c->r[4]=0u+0x00000000u; // 800EF658
  W32(c->r[31]+0x000000B8u,c->r[4]); // 800EF65C
  W32(c->r[31]+0x000000BCu,c->r[4]); // 800EF660
  c->r[6]=0u+0x00000000u; // 800EF664
  c->r[5]=c->r[31]+0x000000C0u; // 800EF668
  c->r[3]=0u+0xFFFFFFFFu; // 800EF66C
  c->r[0]=0u+0x00000007u; // 800EF670
  c->ctr=c->r[0]; // 800EF674
L_800EF678:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 800EF678
  W32(c->r[5]+0x00000004u,c->r[6]); // 800EF67C
  W32(c->r[5]+0x00000008u,c->r[3]); // 800EF680
  W32(c->r[5]+0x000008F0u,c->r[3]); // 800EF684
  W32(c->r[5]+0x000008F4u,c->r[4]); // 800EF688
  W32(c->r[5]+0x000008F8u,c->r[4]); // 800EF68C
  c->r[0]=c->r[6]+0x00000001u; // 800EF690
  W32(c->r[5]+0x000008FCu,c->r[0]); // 800EF694
  W32(c->r[5]+0x00000900u,c->r[3]); // 800EF698
  W32(c->r[5]+0x000011E8u,c->r[3]); // 800EF69C
  W32(c->r[5]+0x000011ECu,c->r[4]); // 800EF6A0
  W32(c->r[5]+0x000011F0u,c->r[4]); // 800EF6A4
  c->r[0]=c->r[6]+0x00000002u; // 800EF6A8
  W32(c->r[5]+0x000011F4u,c->r[0]); // 800EF6AC
  W32(c->r[5]+0x000011F8u,c->r[3]); // 800EF6B0
  W32(c->r[5]+0x00001AE0u,c->r[3]); // 800EF6B4
  W32(c->r[5]+0x00001AE4u,c->r[4]); // 800EF6B8
  W32(c->r[5]+0x00001AE8u,c->r[4]); // 800EF6BC
  c->r[0]=c->r[6]+0x00000003u; // 800EF6C0
  W32(c->r[5]+0x00001AECu,c->r[0]); // 800EF6C4
  W32(c->r[5]+0x00001AF0u,c->r[3]); // 800EF6C8
  W32(c->r[5]+0x000023D8u,c->r[3]); // 800EF6CC
  W32(c->r[5]+0x000023DCu,c->r[4]); // 800EF6D0
  W32(c->r[5]+0x000023E0u,c->r[4]); // 800EF6D4
  c->r[0]=c->r[6]+0x00000004u; // 800EF6D8
  W32(c->r[5]+0x000023E4u,c->r[0]); // 800EF6DC
  W32(c->r[5]+0x000023E8u,c->r[3]); // 800EF6E0
  W32(c->r[5]+0x00002CD0u,c->r[3]); // 800EF6E4
  W32(c->r[5]+0x00002CD4u,c->r[4]); // 800EF6E8
  W32(c->r[5]+0x00002CD8u,c->r[4]); // 800EF6EC
  c->r[0]=c->r[6]+0x00000005u; // 800EF6F0
  W32(c->r[5]+0x00002CDCu,c->r[0]); // 800EF6F4
  W32(c->r[5]+0x00002CE0u,c->r[3]); // 800EF6F8
  W32(c->r[5]+0x000035C8u,c->r[3]); // 800EF6FC
  W32(c->r[5]+0x000035CCu,c->r[4]); // 800EF700
  W32(c->r[5]+0x000035D0u,c->r[4]); // 800EF704
  c->r[0]=c->r[6]+0x00000006u; // 800EF708
  W32(c->r[5]+0x000035D4u,c->r[0]); // 800EF70C
  W32(c->r[5]+0x000035D8u,c->r[3]); // 800EF710
  W32(c->r[5]+0x00003EC0u,c->r[3]); // 800EF714
  W32(c->r[5]+0x00003EC4u,c->r[4]); // 800EF718
  c->r[5]=c->r[5]+0x00003EC8u; // 800EF71C
  c->r[6]=c->r[6]+0x00000007u; // 800EF720
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EF678; } // 800EF724
  c->r[0]=0u+0x00000000u; // 800EF728
  c->r[3]=c->r[31]+0x00020000u; // 800EF72C
  W32(c->r[3]+0xFFFFB848u,c->r[0]); // 800EF730
  c->r[3]=c->r[3]+0xFFFFB838u; // 800EF734
  c->r[4]=0u+0x000008D0u; // 800EF738
  c->lr=0x800EF740u; f_8028CA58(c); // 800EF73C
  c->r[3]=c->r[31]+0x00020000u; // 800EF740
  c->r[3]=c->r[3]+0x00005120u; // 800EF744
  c->r[4]=0u+0x00000002u; // 800EF748
  c->lr=0x800EF750u; f_801797EC(c); // 800EF74C
  c->r[3]=c->r[31]+0x00020000u; // 800EF750
  c->r[3]=c->r[3]+0x00005120u; // 800EF754
  c->r[4]=0u+0x00000000u; // 800EF758
  c->r[5]=0u+0x00000031u; // 800EF75C
  c->lr=0x800EF764u; f_80179858(c); // 800EF760
  c->r[3]=c->r[31]+0x00020000u; // 800EF764
  c->r[3]=c->r[3]+0x00005120u; // 800EF768
  c->r[4]=0u+0x00000001u; // 800EF76C
  c->r[5]=0u+0x00000031u; // 800EF770
  c->lr=0x800EF778u; f_80179858(c); // 800EF774
  c->r[3]=c->r[31]+0x00020000u; // 800EF778
  c->r[3]=c->r[3]+0x00005120u; // 800EF77C
  c->r[4]=0u+0x00000002u; // 800EF780
  c->r[5]=0u+0x00000031u; // 800EF784
  c->lr=0x800EF78Cu; f_80179858(c); // 800EF788
  c->lr=0x800EF790u; f_8007B524(c); // 800EF78C
  c->r[4]=0u+0x00000007u; // 800EF790
  c->lr=0x800EF798u; f_800A1B48(c); // 800EF794
  c->r[6]=c->r[3]|c->r[3]; // 800EF798
  c->r[3]=c->r[31]+0x00020000u; // 800EF79C
  c->r[3]=c->r[3]+0x00003384u; // 800EF7A0
  c->r[4]=0u+0x00000001u; // 800EF7A4
  c->r[5]=0u+0x00000000u; // 800EF7A8
  c->lr=0x800EF7B0u; f_800F1C00(c); // 800EF7AC
  c->r[3]=c->r[31]|c->r[31]; // 800EF7B0
  c->r[4]=0u+0x00000002u; // 800EF7B4
  c->lr=0x800EF7BCu; f_800F1900(c); // 800EF7B8
L_800EF7BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF7BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF7C0
  c->lr=c->r[0]; // 800EF7C4
  c->r[1]=c->r[1]+0x00000010u; // 800EF7C8
  return; // 800EF7CC
}

// fn_800EF7D0
void f_800EF7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF7D0
  c->r[0]=c->lr; // 800EF7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EF7D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800EF7DC
  c->r[31]=c->r[3]|c->r[3]; // 800EF7E0
  c->lr=0x800EF7E8u; f_800EFB30(c); // 800EF7E4
  c->r[3]=c->r[31]|c->r[31]; // 800EF7E8
  c->lr=0x800EF7F0u; f_800F07B8(c); // 800EF7EC
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800EF7F0
  c->r[0]=c->r[0]|0x00000001u; // 800EF7F4
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800EF7F8
  c->r[3]=c->r[31]|c->r[31]; // 800EF7FC
  c->r[4]=0u+0x00000003u; // 800EF800
  c->lr=0x800EF808u; f_800F1900(c); // 800EF804
  c->r[0]=0u+0x00000000u; // 800EF808
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800EF80C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800EF810
  c->r[0]=R32(c->r[1]+0x00000014u); // 800EF814
  c->lr=c->r[0]; // 800EF818
  c->r[1]=c->r[1]+0x00000010u; // 800EF81C
  return; // 800EF820
}

// fn_800EF824
void f_800EF824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF824
  c->r[0]=c->lr; // 800EF828
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EF82C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800EF830
  W32(c->r[1]+0x00000048u,c->r[30]); // 800EF834
  W32(c->r[1]+0x00000044u,c->r[29]); // 800EF838
  W32(c->r[1]+0x00000040u,c->r[28]); // 800EF83C
  c->r[31]=c->r[3]|c->r[3]; // 800EF840
  c->lr=0x800EF848u; f_8007B524(c); // 800EF844
  c->lr=0x800EF84Cu; f_8006E224(c); // 800EF848
  c->lr=0x800EF850u; f_800897A8(c); // 800EF84C
  c->r[3]=c->r[1]+0x00000028u; // 800EF850
  c->lr=0x800EF858u; f_8004B0A4(c); // 800EF854
  c->r[3]=c->r[1]+0x0000001Cu; // 800EF858
  c->lr=0x800EF860u; f_8004B0A4(c); // 800EF85C
  c->r[3]=c->r[31]+0x00020000u; // 800EF860
  c->r[0]=R32(c->r[3]+0xFFFFB848u); // 800EF864
  cmps(c,0,(int32_t)c->r[0],1); // 800EF868
  if (crb(c,2)) { goto L_800EF878; } // 800EF86C
  if (!crb(c,0)) { goto L_800EFA4C; } // 800EF870
  goto L_800EFA4C; // 800EF874
L_800EF878:;
  c->r[3]=c->r[1]+0x00000010u; // 800EF878
  c->lr=0x800EF880u; f_8004B0A4(c); // 800EF87C
  c->r[3]=c->r[31]+0x00020000u; // 800EF880
  c->r[4]=R32(c->r[3]+0xFFFFB84Cu); // 800EF884
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)24); // 800EF888
  c->r[28]=c->r[3]+c->r[0]; // 800EF88C
  c->r[0]=c->r[4]+0x00000001u; // 800EF890
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800EF894
  c->r[29]=c->r[3]+c->r[0]; // 800EF898
  c->r[3]=0u+0x00000001u; // 800EF89C
  c->lr=0x800EF8A4u; f_8005D714(c); // 800EF8A0
  c->r[3]=c->r[31]+0x00020000u; // 800EF8A4
  {uint32_t ea=c->r[3]+0xFFFFB8C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF8A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800EF8AC
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF8B0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 800EF8B4
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; WF32(ea,c->f[1]);} // 800EF8B8
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF8BC
  fcmp(c,0,c->f[1],c->f[0]); // 800EF8C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800EF8C4
  if (!crb(c,2)) { goto L_800EF8D0; } // 800EF8C8
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; WF32(ea,c->f[0]);} // 800EF8CC
L_800EF8D0:;
  c->r[30]=0u+0x804C0000u; // 800EF8D0
  c->r[3]=c->r[30]+0x000025D0u; // 800EF8D4
  c->r[4]=c->r[29]+0xFFFFB860u; // 800EF8D8
  c->r[5]=c->r[28]+0xFFFFB860u; // 800EF8DC
  c->lr=0x800EF8E4u; f_8006000C(c); // 800EF8E0
  c->r[3]=c->r[30]+0x000025D0u; // 800EF8E4
  c->r[4]=c->r[3]|c->r[3]; // 800EF8E8
  c->r[5]=c->r[31]+0x00020000u; // 800EF8EC
  {uint32_t ea=c->r[5]+0xFFFFB8C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF8F0
  c->lr=0x800EF8F8u; f_8004E330(c); // 800EF8F4
  c->r[3]=c->r[1]+0x00000010u; // 800EF8F8
  c->r[4]=c->r[28]+0xFFFFB860u; // 800EF8FC
  c->r[5]=c->r[30]+0x000025D0u; // 800EF900
  c->lr=0x800EF908u; f_8005C194(c); // 800EF904
  c->r[3]=c->r[31]+0x00020000u; // 800EF908
  {uint32_t ea=c->r[2]+0xFFFF8994u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF90C
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF910
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800EF914
  c->lr=0x800EF91Cu; f_800B4480(c); // 800EF918
  {uint32_t ea=c->r[29]+0xFFFFB854u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF91C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800EF920
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF924
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800EF928
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800EF92C
  c->r[3]=c->r[31]|c->r[31]; // 800EF930
  c->r[4]=c->r[31]+0x00020000u; // 800EF934
  c->r[4]=R32(c->r[4]+0xFFFFB844u); // 800EF938
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EF93C
  c->r[5]=c->r[1]+0x00000010u; // 800EF940
  c->lr=0x800EF948u; f_800F06E0(c); // 800EF944
  c->r[3]=c->r[31]+0x00020000u; // 800EF948
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800EF94C
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF950
  fcmp(c,0,c->f[1],c->f[0]); // 800EF954
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800EF958
  if (!crb(c,2)) { goto L_800EFA4C; } // 800EF95C
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF960
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; WF32(ea,c->f[0]);} // 800EF964
  {uint32_t ea=c->r[2]+0xFFFF899Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800EF968
  {uint32_t ea=c->r[3]+0xFFFFB8C4u; WF32(ea,c->f[0]);} // 800EF96C
  c->r[0]=R32(c->r[3]+0xFFFFB8BCu); // 800EF970
  cmps(c,0,(int32_t)c->r[0],0); // 800EF974
  if (!crb(c,2)) { goto L_800EF9AC; } // 800EF978
  c->lr=0x800EF980u; f_8006E5AC(c); // 800EF97C
  c->r[0]=0u+0x00000000u; // 800EF980
  W32(c->r[1]+0x00000008u,c->r[0]); // 800EF984
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800EF988
  c->r[4]=0u+0x00000003u; // 800EF98C
  c->r[5]=0u+0x00000001u; // 800EF990
  c->r[6]=c->r[1]+0x00000010u; // 800EF994
  c->r[7]=0u+0x00000000u; // 800EF998
  c->r[8]=0u+0x00000000u; // 800EF99C
  c->r[9]=0u+0x00000000u; // 800EF9A0
  c->r[10]=0u+0x00000000u; // 800EF9A4
  c->lr=0x800EF9ACu; f_8010AA7C(c); // 800EF9A8
L_800EF9AC:;
  c->r[5]=c->r[31]+0x00020000u; // 800EF9AC
  c->r[3]=R32(c->r[5]+0xFFFFB84Cu); // 800EF9B0
  c->r[4]=c->r[3]+0x00000001u; // 800EF9B4
  W32(c->r[5]+0xFFFFB84Cu,c->r[4]); // 800EF9B8
  c->r[3]=R32(c->r[5]+0xFFFFB850u); // 800EF9BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EF9C0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800EF9C4
  if (crb(c,0)) { goto L_800EFA4C; } // 800EF9C8
  c->r[0]=R32(c->r[5]+0xFFFFB8B8u); // 800EF9CC
  cmps(c,0,(int32_t)c->r[0],0); // 800EF9D0
  if (crb(c,2)) { goto L_800EFA18; } // 800EF9D4
  c->r[3]=0u+0x00000075u; // 800EF9D8
  c->lr=0x800EF9E0u; f_801930C4(c); // 800EF9DC
  c->r[3]=c->r[31]+0x00020000u; // 800EF9E0
  c->r[3]=R32(c->r[3]+0xFFFFB844u); // 800EF9E4
  c->r[3]=R32(c->r[3]+0x000008F4u); // 800EF9E8
  c->lr=0x800EF9F0u; f_80073580(c); // 800EF9EC
  c->r[4]=c->r[3]|c->r[3]; // 800EF9F0
  c->r[3]=0u+0x00000000u; // 800EF9F4
  c->lr=0x800EF9FCu; f_80193100(c); // 800EF9F8
  c->lr=0x800EFA00u; f_80193060(c); // 800EF9FC
  c->r[3]=c->r[31]|c->r[31]; // 800EFA00
  c->r[4]=c->r[31]+0x00020000u; // 800EFA04
  c->r[4]=R32(c->r[4]+0xFFFFB844u); // 800EFA08
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EFA0C
  c->lr=0x800EFA14u; f_800EFFE4(c); // 800EFA10
  goto L_800EFA40; // 800EFA14
L_800EFA18:;
  c->r[4]=R32(c->r[5]+0xFFFFB844u); // 800EFA18
  c->r[28]=R32(c->r[4]+0x000008F4u); // 800EFA1C
  c->r[3]=c->r[31]|c->r[31]; // 800EFA20
  c->r[4]=R32(c->r[4]+0x00000004u); // 800EFA24
  c->lr=0x800EFA2Cu; f_800EFFE4(c); // 800EFA28
  c->r[3]=c->r[31]|c->r[31]; // 800EFA2C
  c->r[4]=c->r[28]|c->r[28]; // 800EFA30
  c->r[5]=c->r[29]+0xFFFFB858u; // 800EFA34
  c->r[6]=0u+0x00000000u; // 800EFA38
  c->lr=0x800EFA40u; f_800F0630(c); // 800EFA3C
L_800EFA40:;
  c->r[0]=0u+0x00000000u; // 800EFA40
  c->r[3]=c->r[31]+0x00020000u; // 800EFA44
  W32(c->r[3]+0xFFFFB848u,c->r[0]); // 800EFA48
L_800EFA4C:;
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800EFA4C
  c->r[30]=R32(c->r[1]+0x00000048u); // 800EFA50
  c->r[29]=R32(c->r[1]+0x00000044u); // 800EFA54
  c->r[28]=R32(c->r[1]+0x00000040u); // 800EFA58
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EFA5C
  c->lr=c->r[0]; // 800EFA60
  c->r[1]=c->r[1]+0x00000050u; // 800EFA64
  return; // 800EFA68
}

// fn_800EFA6C
void f_800EFA6C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 800EFA6C
  f_800F1900(c); return; // 800EFA70
}

// fn_800EFA74
void f_800EFA74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFA74
  c->r[0]=c->lr; // 800EFA78
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFA7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EFA80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EFA84
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EFA88
  c->r[29]=c->r[3]|c->r[3]; // 800EFA8C
  c->r[3]=0u+0x00000003u; // 800EFA90
  c->lr=0x800EFA98u; f_8005D854(c); // 800EFA94
  c->r[3]=c->r[29]|c->r[29]; // 800EFA98
  c->lr=0x800EFAA0u; f_800F0104(c); // 800EFA9C
  c->r[30]=0u+0x00000000u; // 800EFAA0
  c->r[31]=c->r[29]+0x00020000u; // 800EFAA4
  c->r[31]=c->r[31]+0xFFFFB8CCu; // 800EFAA8
L_800EFAAC:;
  c->r[4]=c->r[31]|c->r[31]; // 800EFAAC
  cmps(c,0,(int32_t)c->r[31],0); // 800EFAB0
  if (crb(c,2)) { goto L_800EFABC; } // 800EFAB4
  c->r[4]=c->r[31]+0x000002B4u; // 800EFAB8
L_800EFABC:;
  c->r[3]=c->r[29]+0x00020000u; // 800EFABC
  c->r[3]=c->r[3]+0x00003384u; // 800EFAC0
  c->lr=0x800EFAC8u; f_800F1CF4(c); // 800EFAC4
  c->r[3]=c->r[31]|c->r[31]; // 800EFAC8
  c->lr=0x800EFAD0u; f_800780CC(c); // 800EFACC
  c->r[31]=c->r[31]+0x000008C4u; // 800EFAD0
  c->r[30]=c->r[30]+0x00000001u; // 800EFAD4
  cmps(c,0,(int32_t)c->r[30],14); // 800EFAD8
  if (crb(c,0)) { IRQCHK(c); goto L_800EFAAC; } // 800EFADC
  c->r[3]=0u+0x00000003u; // 800EFAE0
  c->lr=0x800EFAE8u; f_8005D8D8(c); // 800EFAE4
  c->r[3]=c->r[29]+0x00020000u; // 800EFAE8
  c->r[3]=c->r[3]+0x00003384u; // 800EFAEC
  c->lr=0x800EFAF4u; f_800F1D58(c); // 800EFAF0
  c->r[0]=R32(c->r[29]+0x000000B8u); // 800EFAF4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800EFAF8
  W32(c->r[29]+0x000000B8u,c->r[0]); // 800EFAFC
  c->r[0]=c->r[0]|0x00000002u; // 800EFB00
  W32(c->r[29]+0x000000B8u,c->r[0]); // 800EFB04
  c->r[3]=c->r[29]|c->r[29]; // 800EFB08
  c->r[4]=0u+0x00000000u; // 800EFB0C
  c->lr=0x800EFB14u; f_800F1900(c); // 800EFB10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EFB14
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EFB18
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EFB1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFB20
  c->lr=c->r[0]; // 800EFB24
  c->r[1]=c->r[1]+0x00000020u; // 800EFB28
  return; // 800EFB2C
}

// fn_800EFB30
void f_800EFB30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB30
  c->r[0]=c->lr; // 800EFB34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFB38
  c->r[11]=c->r[1]+0x00000020u; // 800EFB3C
  c->lr=0x800EFB44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EFB40
  c->r[26]=c->r[3]|c->r[3]; // 800EFB44
  c->lr=0x800EFB4Cu; f_8007B524(c); // 800EFB48
  c->lr=0x800EFB50u; f_8006E224(c); // 800EFB4C
  c->lr=0x800EFB54u; f_8006E3AC(c); // 800EFB50
  c->r[3]=c->r[3]+0x0000078Cu; // 800EFB54
  c->r[4]=0u+0x00000000u; // 800EFB58
  c->lr=0x800EFB60u; f_8006E53C(c); // 800EFB5C
  c->lr=0x800EFB64u; f_8006E4F4(c); // 800EFB60
  c->r[4]=0u+0x00000001u; // 800EFB64
  c->lr=0x800EFB6Cu; f_8006E4E4(c); // 800EFB68
  c->lr=0x800EFB70u; f_8006E4F4(c); // 800EFB6C
  c->r[28]=c->r[3]|c->r[3]; // 800EFB70
  c->r[3]=0u+0x00000003u; // 800EFB74
  c->lr=0x800EFB7Cu; f_8005D854(c); // 800EFB78
  c->r[27]=0u+0x00000000u; // 800EFB7C
  c->r[31]=c->r[26]+0x00020000u; // 800EFB80
  c->r[31]=c->r[31]+0xFFFFB8CCu; // 800EFB84
  c->r[3]=0u+0x80430000u; // 800EFB88
  c->r[30]=c->r[3]+0xFFFFDFE8u; // 800EFB8C
L_800EFB90:;
  c->r[3]=c->r[28]|c->r[28]; // 800EFB90
  c->r[4]=c->r[27]|c->r[27]; // 800EFB94
  c->lr=0x800EFB9Cu; f_8006E4E4(c); // 800EFB98
  c->r[29]=c->r[3]|c->r[3]; // 800EFB9C
  c->lr=0x800EFBA4u; f_8007B524(c); // 800EFBA0
  c->r[4]=0u+0x00000007u; // 800EFBA4
  c->lr=0x800EFBACu; f_800A1B48(c); // 800EFBA8
  c->r[4]=c->r[3]|c->r[3]; // 800EFBAC
  c->r[3]=c->r[31]|c->r[31]; // 800EFBB0
  c->lr=0x800EFBB8u; f_80077A90(c); // 800EFBB4
  c->r[3]=c->r[29]|c->r[29]; // 800EFBB8
  c->lr=0x800EFBC0u; f_8006E56C(c); // 800EFBBC
  c->r[4]=c->r[3]|c->r[3]; // 800EFBC0
  c->r[3]=c->r[31]|c->r[31]; // 800EFBC4
  c->r[5]=R32(c->r[30]+0x00000000u); // 800EFBC8
  c->r[6]=0u+0x00000000u; // 800EFBCC
  c->r[7]=0u+0x00000001u; // 800EFBD0
  c->r[8]=0u+0x00000000u; // 800EFBD4
  c->lr=0x800EFBDCu; f_80077B88(c); // 800EFBD8
  c->r[3]=c->r[31]|c->r[31]; // 800EFBDC
  c->lr=0x800EFBE4u; f_800F1A78(c); // 800EFBE0
  c->r[3]=c->r[31]+0x00000024u; // 800EFBE4
  c->r[4]=0u+0x00000000u; // 800EFBE8
  c->lr=0x800EFBF0u; f_800534E4(c); // 800EFBEC
  c->r[4]=c->r[31]|c->r[31]; // 800EFBF0
  cmps(c,0,(int32_t)c->r[31],0); // 800EFBF4
  if (crb(c,2)) { goto L_800EFC00; } // 800EFBF8
  c->r[4]=c->r[31]+0x000002B4u; // 800EFBFC
L_800EFC00:;
  c->r[3]=c->r[26]+0x00020000u; // 800EFC00
  c->r[3]=c->r[3]+0x00003384u; // 800EFC04
  c->lr=0x800EFC0Cu; f_800F1C90(c); // 800EFC08
  c->r[31]=c->r[31]+0x000008C4u; // 800EFC0C
  c->r[30]=c->r[30]+0x00000004u; // 800EFC10
  c->r[27]=c->r[27]+0x00000001u; // 800EFC14
  cmps(c,0,(int32_t)c->r[27],14); // 800EFC18
  if (crb(c,0)) { IRQCHK(c); goto L_800EFB90; } // 800EFC1C
  c->r[3]=0u+0x00000003u; // 800EFC20
  c->lr=0x800EFC28u; f_8005D8D8(c); // 800EFC24
  c->r[11]=c->r[1]+0x00000020u; // 800EFC28
  c->lr=0x800EFC30u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EFC2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFC30
  c->lr=c->r[0]; // 800EFC34
  c->r[1]=c->r[1]+0x00000020u; // 800EFC38
  return; // 800EFC3C
}

// fn_800EFC40
void f_800EFC40(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800EFC40
  if (crb(c,2)) { goto L_800EFC50; } // 800EFC44
  c->r[3]=c->r[3]+0x000000C0u; // 800EFC48
  return; // 800EFC4C
L_800EFC50:;
  c->r[5]=0u+0x00000001u; // 800EFC50
  c->r[4]=c->r[3]+0x000008F8u; // 800EFC54
  c->r[0]=0u+0x00000030u; // 800EFC58
  c->ctr=c->r[0]; // 800EFC5C
L_800EFC60:;
  c->r[0]=R32(c->r[4]+0x000000C0u); // 800EFC60
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800EFC64
  cmps(c,0,(int32_t)c->r[0],0); // 800EFC68
  if (!crb(c,2)) { goto L_800EFC80; } // 800EFC6C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)2296); // 800EFC70
  c->r[3]=c->r[3]+c->r[0]; // 800EFC74
  c->r[3]=c->r[3]+0x000000C0u; // 800EFC78
  return; // 800EFC7C
L_800EFC80:;
  c->r[4]=c->r[4]+0x000008F8u; // 800EFC80
  c->r[5]=c->r[5]+0x00000001u; // 800EFC84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EFC60; } // 800EFC88
  c->r[3]=0u+0x00000000u; // 800EFC8C
  return; // 800EFC90
}

// fn_800EFC94
void f_800EFC94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFC94
  c->r[0]=c->lr; // 800EFC98
  W32(c->r[1]+0x00000054u,c->r[0]); // 800EFC9C
  c->r[11]=c->r[1]+0x00000050u; // 800EFCA0
  c->lr=0x800EFCA8u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EFCA4
  c->r[22]=c->r[3]|c->r[3]; // 800EFCA8
  c->r[23]=c->r[4]|c->r[4]; // 800EFCAC
  c->r[24]=c->r[5]|c->r[5]; // 800EFCB0
  c->lr=0x800EFCB8u; f_8007B524(c); // 800EFCB4
  c->lr=0x800EFCBCu; f_8006E224(c); // 800EFCB8
  c->lr=0x800EFCC0u; f_800897A8(c); // 800EFCBC
  c->r[26]=c->r[3]|c->r[3]; // 800EFCC0
  c->r[3]=c->r[23]|c->r[23]; // 800EFCC4
  c->lr=0x800EFCCCu; f_80089E24(c); // 800EFCC8
  c->r[29]=c->r[3]|c->r[3]; // 800EFCCC
  c->r[3]=c->r[23]|c->r[23]; // 800EFCD0
  c->lr=0x800EFCD8u; f_80179098(c); // 800EFCD4
  c->r[30]=c->r[3]|c->r[3]; // 800EFCD8
  c->r[3]=c->r[22]|c->r[22]; // 800EFCDC
  c->r[4]=c->r[24]|c->r[24]; // 800EFCE0
  c->lr=0x800EFCE8u; f_800EFC40(c); // 800EFCE4
  c->r[31]=c->r[3]|c->r[3]; // 800EFCE8
  cmps(c,0,(int32_t)c->r[3],0); // 800EFCEC
  if (!crb(c,2)) { goto L_800EFCFC; } // 800EFCF0
  c->r[3]=0u+0xFFFFFFFFu; // 800EFCF4
  goto L_800EFF1C; // 800EFCF8
L_800EFCFC:;
  c->lr=0x800EFD00u; f_8007B524(c); // 800EFCFC
  c->lr=0x800EFD04u; f_8006E224(c); // 800EFD00
  c->lr=0x800EFD08u; f_8006E3AC(c); // 800EFD04
  c->r[3]=c->r[3]+0x0000078Cu; // 800EFD08
  c->r[4]=0u+0x00000000u; // 800EFD0C
  c->lr=0x800EFD14u; f_8006E53C(c); // 800EFD10
  c->lr=0x800EFD18u; f_8006E4F4(c); // 800EFD14
  c->r[4]=0u+0x00000001u; // 800EFD18
  c->lr=0x800EFD20u; f_8006E4E4(c); // 800EFD1C
  c->lr=0x800EFD24u; f_8006E4F4(c); // 800EFD20
  c->r[27]=c->r[3]|c->r[3]; // 800EFD24
  c->r[24]=0u+0xFFFFFFFFu; // 800EFD28
  c->r[25]=0u+0x00000000u; // 800EFD2C
L_800EFD30:;
  c->r[3]=c->r[27]|c->r[27]; // 800EFD30
  c->r[4]=c->r[25]|c->r[25]; // 800EFD34
  c->lr=0x800EFD3Cu; f_8006E4E4(c); // 800EFD38
  c->r[28]=c->r[3]|c->r[3]; // 800EFD3C
  c->r[3]=c->r[1]+0x00000008u; // 800EFD40
  c->r[4]=R32(c->r[30]+0x00000018u); // 800EFD44
  c->lr=0x800EFD4Cu; f_802E9548(c); // 800EFD48
  c->r[3]=c->r[1]+0x00000008u; // 800EFD4C
  c->r[4]=c->r[13]+0xFFFF8D50u; // 800EFD50
  c->lr=0x800EFD58u; f_802E964C(c); // 800EFD54
  c->r[3]=c->r[28]|c->r[28]; // 800EFD58
  c->lr=0x800EFD60u; f_800C2D04(c); // 800EFD5C
  c->r[4]=c->r[3]|c->r[3]; // 800EFD60
  c->r[3]=c->r[1]+0x00000008u; // 800EFD64
  c->lr=0x800EFD6Cu; f_802EBEB4(c); // 800EFD68
  cmps(c,0,(int32_t)c->r[3],0); // 800EFD6C
  if (!crb(c,2)) { goto L_800EFD7C; } // 800EFD70
  c->r[24]=c->r[25]|c->r[25]; // 800EFD74
  goto L_800EFD88; // 800EFD78
L_800EFD7C:;
  c->r[25]=c->r[25]+0x00000001u; // 800EFD7C
  cmps(c,0,(int32_t)c->r[25],14); // 800EFD80
  if (crb(c,0)) { IRQCHK(c); goto L_800EFD30; } // 800EFD84
L_800EFD88:;
  W32(c->r[31]+0x000008F4u,c->r[23]); // 800EFD88
  c->r[3]=c->r[22]+0x00020000u; // 800EFD8C
  c->r[3]=c->r[3]+0x00005120u; // 800EFD90
  c->r[4]=R32(c->r[31]+0x000008F4u); // 800EFD94
  c->lr=0x800EFD9Cu; f_80179868(c); // 800EFD98
  c->r[27]=c->r[31]+0x0000000Cu; // 800EFD9C
  c->lr=0x800EFDA4u; f_8007B524(c); // 800EFDA0
  c->r[4]=0u+0x00000007u; // 800EFDA4
  c->lr=0x800EFDACu; f_800A1B48(c); // 800EFDA8
  c->r[4]=c->r[3]|c->r[3]; // 800EFDAC
  c->r[3]=c->r[27]|c->r[27]; // 800EFDB0
  c->lr=0x800EFDB8u; f_80077A90(c); // 800EFDB4
  c->r[3]=c->r[27]|c->r[27]; // 800EFDB8
  c->r[4]=c->r[22]+0x00020000u; // 800EFDBC
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)2244); // 800EFDC0
  c->r[4]=c->r[4]+c->r[0]; // 800EFDC4
  c->r[4]=c->r[4]+0xFFFFB8CCu; // 800EFDC8
  c->lr=0x800EFDD0u; f_80078028(c); // 800EFDCC
  c->r[3]=c->r[27]|c->r[27]; // 800EFDD0
  c->r[4]=0u+0x00000000u; // 800EFDD4
  c->r[5]=0u+0x00000001u; // 800EFDD8
  c->r[6]=0u+0x00000000u; // 800EFDDC
  c->r[7]=0u+0x00000001u; // 800EFDE0
  c->r[8]=0u+0x00000000u; // 800EFDE4
  c->lr=0x800EFDECu; f_80077B88(c); // 800EFDE8
  c->r[3]=c->r[27]+0x00000024u; // 800EFDEC
  c->r[4]=0u+0x00000000u; // 800EFDF0
  c->r[5]=0u+0x00000000u; // 800EFDF4
  c->r[6]=0u+0x00000000u; // 800EFDF8
  c->lr=0x800EFE00u; f_8005302C(c); // 800EFDFC
  c->r[3]=c->r[27]|c->r[27]; // 800EFE00
  c->lr=0x800EFE08u; f_800F1A78(c); // 800EFE04
  c->r[3]=c->r[27]+0x000002B4u; // 800EFE08
  c->r[4]=0u+0x00000001u; // 800EFE0C
  c->lr=0x800EFE14u; f_8004C6D4(c); // 800EFE10
  c->r[4]=c->r[27]|c->r[27]; // 800EFE14
  cmps(c,0,(int32_t)c->r[27],0); // 800EFE18
  if (crb(c,2)) { goto L_800EFE24; } // 800EFE1C
  c->r[4]=c->r[27]+0x000002B4u; // 800EFE20
L_800EFE24:;
  c->r[3]=c->r[22]+0x00020000u; // 800EFE24
  c->r[3]=c->r[3]+0x00003384u; // 800EFE28
  c->lr=0x800EFE30u; f_800F1C90(c); // 800EFE2C
  c->r[3]=R32(c->r[30]+0x00000018u); // 800EFE30
  c->r[4]=0u+0x80460000u; // 800EFE34
  c->r[4]=c->r[4]+0x00001DFCu; // 800EFE38
  c->lr=0x800EFE40u; f_802EBEB4(c); // 800EFE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800EFE40
  if (!crb(c,2)) { goto L_800EFE70; } // 800EFE44
  c->r[3]=c->r[27]+0x00000024u; // 800EFE48
  c->r[4]=0u+0x80460000u; // 800EFE4C
  c->r[4]=c->r[4]+0x00001E08u; // 800EFE50
  c->r[5]=0u+0x00000000u; // 800EFE54
  c->r[6]=0u+0x00000000u; // 800EFE58
  c->lr=0x800EFE60u; f_80052F6C(c); // 800EFE5C
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFE60
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFE64
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EFE68
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EFE6C
L_800EFE70:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800EFE70
  c->r[4]=0u+0x80460000u; // 800EFE74
  c->r[4]=c->r[4]+0x00001E14u; // 800EFE78
  c->lr=0x800EFE80u; f_802EBEB4(c); // 800EFE7C
  cmps(c,0,(int32_t)c->r[3],0); // 800EFE80
  if (!crb(c,2)) { goto L_800EFE98; } // 800EFE84
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFE88
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFE8C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EFE90
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EFE94
L_800EFE98:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800EFE98
  c->r[4]=0u+0x80460000u; // 800EFE9C
  c->r[4]=c->r[4]+0x00001E20u; // 800EFEA0
  c->lr=0x800EFEA8u; f_802EBEB4(c); // 800EFEA4
  cmps(c,0,(int32_t)c->r[3],0); // 800EFEA8
  if (!crb(c,2)) { goto L_800EFEC0; } // 800EFEAC
  {uint32_t ea=c->r[29]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800EFEB0
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800EFEB4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800EFEB8
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 800EFEBC
L_800EFEC0:;
  c->r[3]=c->r[31]+0x000008E4u; // 800EFEC0
  c->r[4]=c->r[29]+0x00000008u; // 800EFEC4
  c->lr=0x800EFECCu; f_8004A65C(c); // 800EFEC8
  c->r[3]=c->r[31]+0x00000030u; // 800EFECC
  c->r[4]=c->r[31]+0x000008E4u; // 800EFED0
  c->lr=0x800EFED8u; f_8005658C(c); // 800EFED4
  c->lr=0x800EFEDCu; f_8007B524(c); // 800EFED8
  c->r[4]=0u+0x00000005u; // 800EFEDC
  c->r[5]=c->r[31]+0x000008E4u; // 800EFEE0
  c->lr=0x800EFEE8u; f_800A0984(c); // 800EFEE4
  W32(c->r[31]+0x000008F0u,c->r[3]); // 800EFEE8
  c->r[3]=c->r[26]|c->r[26]; // 800EFEEC
  c->r[4]=c->r[31]+0x000008DCu; // 800EFEF0
  c->r[5]=c->r[31]+0x000008E4u; // 800EFEF4
  c->lr=0x800EFEFCu; f_80068458(c); // 800EFEF8
  c->r[0]=R32(c->r[31]+0x00000000u); // 800EFEFC
  c->r[0]=c->r[0]|0x00000001u; // 800EFF00
  W32(c->r[31]+0x00000000u,c->r[0]); // 800EFF04
  c->lr=0x800EFF0Cu; f_8007B524(c); // 800EFF08
  c->r[4]=0u+0x00000007u; // 800EFF0C
  c->lr=0x800EFF14u; f_800A1B48(c); // 800EFF10
  c->lr=0x800EFF18u; f_80056828(c); // 800EFF14
  c->r[3]=R32(c->r[31]+0x00000004u); // 800EFF18
L_800EFF1C:;
  c->r[11]=c->r[1]+0x00000050u; // 800EFF1C
  c->lr=0x800EFF24u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EFF20
  c->r[0]=R32(c->r[1]+0x00000054u); // 800EFF24
  c->lr=c->r[0]; // 800EFF28
  c->r[1]=c->r[1]+0x00000050u; // 800EFF2C
  return; // 800EFF30
}

// fn_800EFF34
void f_800EFF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFF34
  c->r[0]=c->lr; // 800EFF38
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800EFF3C
  c->r[11]=c->r[1]+0x000000C0u; // 800EFF40
  c->lr=0x800EFF48u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EFF44
  c->r[27]=c->r[3]|c->r[3]; // 800EFF48
  c->r[29]=c->r[4]|c->r[4]; // 800EFF4C
  c->r[28]=c->r[5]|c->r[5]; // 800EFF50
  c->lr=0x800EFF58u; f_8007B524(c); // 800EFF54
  c->lr=0x800EFF5Cu; f_8006E224(c); // 800EFF58
  c->lr=0x800EFF60u; f_800897A8(c); // 800EFF5C
  c->r[30]=c->r[3]|c->r[3]; // 800EFF60
  c->lr=0x800EFF68u; f_800F4430(c); // 800EFF64
  c->r[3]=c->r[3]+0x00000960u; // 800EFF68
  c->r[4]=c->r[29]|c->r[29]; // 800EFF6C
  c->lr=0x800EFF74u; f_8017B6F0(c); // 800EFF70
  c->r[31]=c->r[3]|c->r[3]; // 800EFF74
  c->r[3]=c->r[1]+0x00000008u; // 800EFF78
  c->lr=0x800EFF80u; f_8008A590(c); // 800EFF7C
  c->lr=0x800EFF84u; f_80074E68(c); // 800EFF80
  c->lr=0x800EFF88u; f_8017A2D8(c); // 800EFF84
  c->r[29]=c->r[3]|c->r[3]; // 800EFF88
  c->r[3]=c->r[1]+0x00000008u; // 800EFF8C
  c->r[4]=R32(c->r[31]+0x00000004u); // 800EFF90
  c->lr=0x800EFF98u; f_80178974(c); // 800EFF94
  c->r[3]=c->r[30]|c->r[30]; // 800EFF98
  c->r[4]=c->r[1]+0x00000010u; // 800EFF9C
  c->r[5]=c->r[28]|c->r[28]; // 800EFFA0
  c->lr=0x800EFFA8u; f_8006838C(c); // 800EFFA4
  c->r[3]=c->r[29]|c->r[29]; // 800EFFA8
  c->r[4]=c->r[1]+0x00000008u; // 800EFFAC
  c->r[5]=0u+0x00000001u; // 800EFFB0
  c->lr=0x800EFFB8u; f_80178F64(c); // 800EFFB4
  c->r[3]=c->r[27]|c->r[27]; // 800EFFB8
  c->r[4]=c->r[29]|c->r[29]; // 800EFFBC
  c->r[5]=c->r[28]|c->r[28]; // 800EFFC0
  c->r[6]=0u+0x00000000u; // 800EFFC4
  c->lr=0x800EFFCCu; f_800F0630(c); // 800EFFC8
  c->r[11]=c->r[1]+0x000000C0u; // 800EFFCC
  c->lr=0x800EFFD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EFFD0
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800EFFD4
  c->lr=c->r[0]; // 800EFFD8
  c->r[1]=c->r[1]+0x000000C0u; // 800EFFDC
  return; // 800EFFE0
}

// fn_800EFFE4
void f_800EFFE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFFE4
  c->r[0]=c->lr; // 800EFFE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFFEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EFFF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EFFF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EFFF8
  c->r[29]=c->r[3]|c->r[3]; // 800EFFFC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)2296); // 800F0000
  c->r[31]=c->r[3]+c->r[0]; // 800F0004
  c->r[30]=R32(c->r[31]+0x000009B0u); // 800F0008
  c->r[0]=c->r[30]+0x00010000u; // 800F000C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F0010
  if (crb(c,2)) { goto L_800F002C; } // 800F0014
  c->lr=0x800F001Cu; f_8007B524(c); // 800F0018
  c->r[4]=c->r[30]|c->r[30]; // 800F001C
  c->lr=0x800F0024u; f_800A09CC(c); // 800F0020
  c->r[0]=0u+0xFFFFFFFFu; // 800F0024
  W32(c->r[31]+0x000009B0u,c->r[0]); // 800F0028
L_800F002C:;
  c->r[4]=R32(c->r[31]+0x000009B4u); // 800F002C
  cmps(c,0,(int32_t)c->r[4],0); // 800F0030
  if (crb(c,2)) { goto L_800F004C; } // 800F0034
  c->r[3]=c->r[29]+0x00020000u; // 800F0038
  c->r[3]=c->r[3]+0x00005120u; // 800F003C
  c->lr=0x800F0044u; f_80179914(c); // 800F0040
  c->r[0]=0u+0x00000000u; // 800F0044
  W32(c->r[31]+0x000009B4u,c->r[0]); // 800F0048
L_800F004C:;
  c->r[0]=R32(c->r[31]+0x000000C0u); // 800F004C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800F0050
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800F0054
  c->r[3]=c->r[29]+0x00020000u; // 800F0058
  c->r[3]=c->r[3]+0x00003384u; // 800F005C
  c->r[4]=c->r[31]+0x00000380u; // 800F0060
  c->lr=0x800F0068u; f_800F1CF4(c); // 800F0064
  c->r[3]=c->r[31]+0x000000CCu; // 800F0068
  c->lr=0x800F0070u; f_800780CC(c); // 800F006C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0070
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0074
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0078
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F007C
  c->lr=c->r[0]; // 800F0080
  c->r[1]=c->r[1]+0x00000020u; // 800F0084
  return; // 800F0088
}

// fn_800F008C
void f_800F008C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F008C
  c->r[0]=c->lr; // 800F0090
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0098
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F009C
  c->r[30]=c->r[3]|c->r[3]; // 800F00A0
  c->r[31]=c->r[4]|c->r[4]; // 800F00A4
  c->lr=0x800F00ACu; f_8007B524(c); // 800F00A8
  c->lr=0x800F00B0u; f_8006E224(c); // 800F00AC
  c->lr=0x800F00B4u; f_800897A8(c); // 800F00B0
  c->r[4]=c->r[31]|c->r[31]; // 800F00B4
  c->r[5]=0u+0x00000000u; // 800F00B8
  c->lr=0x800F00C0u; f_80067A38(c); // 800F00BC
  c->r[31]=c->r[3]|c->r[3]; // 800F00C0
  cmps(c,0,(int32_t)c->r[3],0); // 800F00C4
  if (crb(c,2)) { goto L_800F00EC; } // 800F00C8
  c->r[4]=R32(c->r[3]+0x00000030u); // 800F00CC
  c->r[0]=c->r[4]+0x00010000u; // 800F00D0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F00D4
  if (crb(c,2)) { goto L_800F00EC; } // 800F00D8
  c->r[3]=c->r[30]|c->r[30]; // 800F00DC
  c->lr=0x800F00E4u; f_800EFFE4(c); // 800F00E0
  c->r[0]=0u+0xFFFFFFFFu; // 800F00E4
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F00E8
L_800F00EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F00EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F00F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F00F4
  c->lr=c->r[0]; // 800F00F8
  c->r[1]=c->r[1]+0x00000010u; // 800F00FC
  return; // 800F0100
}

// fn_800F0104
void f_800F0104(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0104
  c->r[0]=c->lr; // 800F0108
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F010C
  c->r[11]=c->r[1]+0x00000020u; // 800F0110
  c->lr=0x800F0118u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0114
  c->r[27]=c->r[3]|c->r[3]; // 800F0118
  c->lr=0x800F0120u; f_8007B524(c); // 800F011C
  c->lr=0x800F0124u; f_8006E224(c); // 800F0120
  c->lr=0x800F0128u; f_800897A8(c); // 800F0124
  c->r[28]=c->r[3]|c->r[3]; // 800F0128
  c->r[29]=0u+0x00000000u; // 800F012C
  c->r[30]=c->r[27]+0x000000C0u; // 800F0130
  c->r[31]=0u+0xFFFFFFFFu; // 800F0134
L_800F0138:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F0138
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800F013C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0140
  if (crb(c,2)) { goto L_800F0168; } // 800F0144
  c->r[3]=c->r[27]|c->r[27]; // 800F0148
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F014C
  c->lr=0x800F0154u; f_800EFFE4(c); // 800F0150
  c->r[3]=c->r[28]|c->r[28]; // 800F0154
  c->r[4]=c->r[30]+0x000008DCu; // 800F0158
  c->r[5]=0u+0x00000000u; // 800F015C
  c->lr=0x800F0164u; f_80067A38(c); // 800F0160
  W32(c->r[3]+0x00000030u,c->r[31]); // 800F0164
L_800F0168:;
  c->r[30]=c->r[30]+0x000008F8u; // 800F0168
  c->r[29]=c->r[29]+0x00000001u; // 800F016C
  cmpu(c,0,c->r[29],0x00000031u); // 800F0170
  if (crb(c,0)) { IRQCHK(c); goto L_800F0138; } // 800F0174
  c->r[11]=c->r[1]+0x00000020u; // 800F0178
  c->lr=0x800F0180u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F017C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0180
  c->lr=c->r[0]; // 800F0184
  c->r[1]=c->r[1]+0x00000020u; // 800F0188
  return; // 800F018C
}

// fn_800F0190
void f_800F0190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0190
  c->r[0]=c->lr; // 800F0194
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F019C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F01A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F01A4
  c->r[29]=c->r[3]|c->r[3]; // 800F01A8
  c->r[30]=c->r[4]|c->r[4]; // 800F01AC
  c->r[31]=c->r[5]|c->r[5]; // 800F01B0
  c->lr=0x800F01B8u; f_8007B524(c); // 800F01B4
  c->lr=0x800F01BCu; f_8006E224(c); // 800F01B8
  c->lr=0x800F01C0u; f_800897A8(c); // 800F01BC
  c->r[4]=c->r[30]|c->r[30]; // 800F01C0
  c->r[5]=c->r[31]|c->r[31]; // 800F01C4
  c->lr=0x800F01CCu; f_80067A38(c); // 800F01C8
  c->r[0]=R32(c->r[3]+0x00000030u); // 800F01CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2296); // 800F01D0
  c->r[3]=c->r[29]+c->r[0]; // 800F01D4
  c->r[3]=R32(c->r[3]+0x000009B4u); // 800F01D8
  c->lr=0x800F01E0u; f_80073580(c); // 800F01DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F01E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F01E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F01E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F01EC
  c->lr=c->r[0]; // 800F01F0
  c->r[1]=c->r[1]+0x00000020u; // 800F01F4
  return; // 800F01F8
}

// fn_800F01FC
void f_800F01FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F01FC
  c->r[0]=c->lr; // 800F0200
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0204
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0208
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F020C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0210
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F0214
  c->r[28]=c->r[3]|c->r[3]; // 800F0218
  c->r[30]=c->r[4]|c->r[4]; // 800F021C
  c->r[29]=c->r[5]|c->r[5]; // 800F0220
  c->lr=0x800F0228u; f_8007B524(c); // 800F0224
  c->lr=0x800F022Cu; f_8006E224(c); // 800F0228
  c->lr=0x800F0230u; f_800897A8(c); // 800F022C
  c->r[4]=c->r[30]|c->r[30]; // 800F0230
  c->r[5]=c->r[29]|c->r[29]; // 800F0234
  c->lr=0x800F023Cu; f_80067A38(c); // 800F0238
  c->r[30]=c->r[3]|c->r[3]; // 800F023C
  c->r[0]=R32(c->r[3]+0x00000030u); // 800F0240
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2296); // 800F0244
  c->r[31]=c->r[28]+c->r[0]; // 800F0248
  c->r[3]=c->r[28]+0x00020000u; // 800F024C
  c->r[3]=c->r[3]+0x00005120u; // 800F0250
  c->r[4]=R32(c->r[31]+0x000009B4u); // 800F0254
  c->lr=0x800F025Cu; f_80179914(c); // 800F0258
  c->r[29]=c->r[3]|c->r[3]; // 800F025C
  c->r[0]=0u+0x00000000u; // 800F0260
  W32(c->r[31]+0x000009B4u,c->r[0]); // 800F0264
  c->r[3]=c->r[28]|c->r[28]; // 800F0268
  c->r[4]=R32(c->r[30]+0x00000030u); // 800F026C
  c->lr=0x800F0274u; f_800EFFE4(c); // 800F0270
  c->r[0]=0u+0xFFFFFFFFu; // 800F0274
  W32(c->r[30]+0x00000030u,c->r[0]); // 800F0278
  c->r[3]=c->r[29]|c->r[29]; // 800F027C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0280
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0284
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0288
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F028C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0290
  c->lr=c->r[0]; // 800F0294
  c->r[1]=c->r[1]+0x00000020u; // 800F0298
  return; // 800F029C
}

// fn_800F02A0
void f_800F02A0(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 800F02A0
  c->r[8]=0u+0x00000001u; // 800F02A4
  f_800F02AC(c); return; // 800F02A8
}

// fn_800F02AC
void f_800F02AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F02AC
  c->r[0]=c->lr; // 800F02B0
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800F02B4
  c->r[11]=c->r[1]+0x000000A0u; // 800F02B8
  c->lr=0x800F02C0u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F02BC
  c->r[24]=c->r[4]|c->r[4]; // 800F02C0
  c->r[31]=c->r[5]|c->r[5]; // 800F02C4
  c->r[30]=c->r[6]|c->r[6]; // 800F02C8
  c->r[25]=c->r[7]|c->r[7]; // 800F02CC
  c->r[22]=c->r[8]|c->r[8]; // 800F02D0
  c->lr=0x800F02D8u; f_8007B524(c); // 800F02D4
  c->lr=0x800F02DCu; f_8006E224(c); // 800F02D8
  c->lr=0x800F02E0u; f_800897A8(c); // 800F02DC
  c->r[26]=c->r[3]|c->r[3]; // 800F02E0
  c->r[0]=0u+0x00000001u; // 800F02E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800F02E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F02EC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800F02F0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800F02F4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800F02F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F02FC
  W32(c->r[1]+0x00000028u,c->r[0]); // 800F0300
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800F0304
  W32(c->r[1]+0x00000030u,c->r[0]); // 800F0308
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F030C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F0310
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800F0314
  W32(c->r[1]+0x00000040u,c->r[0]); // 800F0318
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F031C
  W32(c->r[1]+0x00000048u,c->r[0]); // 800F0320
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800F0324
  W32(c->r[1]+0x00000050u,c->r[0]); // 800F0328
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F032C
  W32(c->r[1]+0x00000058u,c->r[0]); // 800F0330
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 800F0334
  W32(c->r[1]+0x00000060u,c->r[0]); // 800F0338
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F033C
  W32(c->r[1]+0x00000068u,c->r[0]); // 800F0340
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 800F0344
  W32(c->r[1]+0x00000070u,c->r[0]); // 800F0348
  cmps(c,0,(int32_t)c->r[22],0); // 800F034C
  if (crb(c,2)) { goto L_800F045C; } // 800F0350
  c->r[23]=0u+0x00000001u; // 800F0354
  c->r[27]=0u+0x00000004u; // 800F0358
  c->r[28]=0u+0x00000000u; // 800F035C
  c->r[29]=0u+0x80460000u; // 800F0360
L_800F0364:;
  c->r[3]=c->r[1]+0x00000008u; // 800F0364
  c->r[4]=c->r[31]|c->r[31]; // 800F0368
  c->lr=0x800F0370u; f_800670A8(c); // 800F036C
  c->r[3]=c->r[26]|c->r[26]; // 800F0370
  c->r[4]=c->r[1]+0x00000008u; // 800F0374
  c->r[5]=c->r[23]|c->r[23]; // 800F0378
  c->lr=0x800F0380u; f_80067910(c); // 800F037C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0380
  if (crb(c,2)) { goto L_800F044C; } // 800F0384
  c->r[3]=c->r[26]|c->r[26]; // 800F0388
  c->r[4]=c->r[1]+0x00000008u; // 800F038C
  c->r[5]=0u+0x00000000u; // 800F0390
  c->lr=0x800F0398u; f_80067AC4(c); // 800F0394
  cmps(c,0,(int32_t)c->r[3],1); // 800F0398
  if (crb(c,2)) { goto L_800F044C; } // 800F039C
  if (!crb(c,0)) { goto L_800F03B0; } // 800F03A0
  cmps(c,0,(int32_t)c->r[3],0); // 800F03A4
  if (!crb(c,0)) { goto L_800F03B8; } // 800F03A8
  goto L_800F044C; // 800F03AC
L_800F03B0:;
  cmps(c,0,(int32_t)c->r[3],3); // 800F03B0
  if (!crb(c,0)) { goto L_800F044C; } // 800F03B4
L_800F03B8:;
  cmpu(c,0,c->r[23],0x00000008u); // 800F03B8
  if (crb(c,1)) { goto L_800F044C; } // 800F03BC
  c->r[3]=c->r[29]+0x00001E2Cu; // 800F03C0
  c->r[3]=R32(c->r[3]+c->r[27]); // 800F03C4
  c->ctr=c->r[3]; // 800F03C8
  if (true) { switch (c->ctr) { case 0x800F03D0u: goto L_800F03D0; case 0x800F03DCu: goto L_800F03DC; case 0x800F03F0u: goto L_800F03F0; case 0x800F03FCu: goto L_800F03FC; case 0x800F0410u: goto L_800F0410; case 0x800F041Cu: goto L_800F041C; case 0x800F0430u: goto L_800F0430; case 0x800F043Cu: goto L_800F043C; case 0x800F044Cu: goto L_800F044C; default: break; } dispatch(c,c->ctr); return; } // 800F03CC
L_800F03D0:;
  W32(c->r[1]+0x00000038u,c->r[28]); // 800F03D0
  W32(c->r[1]+0x0000003Cu,c->r[28]); // 800F03D4
  goto L_800F044C; // 800F03D8
L_800F03DC:;
  W32(c->r[1]+0x0000004Cu,c->r[28]); // 800F03DC
  W32(c->r[1]+0x00000060u,c->r[28]); // 800F03E0
  W32(c->r[1]+0x00000050u,c->r[28]); // 800F03E4
  W32(c->r[1]+0x00000064u,c->r[28]); // 800F03E8
  goto L_800F044C; // 800F03EC
L_800F03F0:;
  W32(c->r[1]+0x00000054u,c->r[28]); // 800F03F0
  W32(c->r[1]+0x00000068u,c->r[28]); // 800F03F4
  goto L_800F044C; // 800F03F8
L_800F03FC:;
  W32(c->r[1]+0x00000058u,c->r[28]); // 800F03FC
  W32(c->r[1]+0x0000006Cu,c->r[28]); // 800F0400
  W32(c->r[1]+0x0000005Cu,c->r[28]); // 800F0404
  W32(c->r[1]+0x00000070u,c->r[28]); // 800F0408
  goto L_800F044C; // 800F040C
L_800F0410:;
  W32(c->r[1]+0x00000044u,c->r[28]); // 800F0410
  W32(c->r[1]+0x00000048u,c->r[28]); // 800F0414
  goto L_800F044C; // 800F0418
L_800F041C:;
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 800F041C
  W32(c->r[1]+0x00000030u,c->r[28]); // 800F0420
  W32(c->r[1]+0x00000020u,c->r[28]); // 800F0424
  W32(c->r[1]+0x00000034u,c->r[28]); // 800F0428
  goto L_800F044C; // 800F042C
L_800F0430:;
  W32(c->r[1]+0x00000018u,c->r[28]); // 800F0430
  W32(c->r[1]+0x0000002Cu,c->r[28]); // 800F0434
  goto L_800F044C; // 800F0438
L_800F043C:;
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F043C
  W32(c->r[1]+0x00000024u,c->r[28]); // 800F0440
  W32(c->r[1]+0x00000014u,c->r[28]); // 800F0444
  W32(c->r[1]+0x00000028u,c->r[28]); // 800F0448
L_800F044C:;
  c->r[23]=c->r[23]+0x00000001u; // 800F044C
  c->r[27]=c->r[27]+0x00000004u; // 800F0450
  cmpu(c,0,c->r[23],0x00000009u); // 800F0454
  if (crb(c,0)) { IRQCHK(c); goto L_800F0364; } // 800F0458
L_800F045C:;
  c->r[3]=c->r[26]|c->r[26]; // 800F045C
  c->r[4]=c->r[31]|c->r[31]; // 800F0460
  c->r[5]=c->r[30]|c->r[30]; // 800F0464
  c->lr=0x800F046Cu; f_80067A38(c); // 800F0468
  c->r[29]=c->r[3]|c->r[3]; // 800F046C
  c->r[27]=0u+0x00000000u; // 800F0470
  c->r[3]=0u+0x80430000u; // 800F0474
  c->r[28]=c->r[3]+0xFFFFDED8u; // 800F0478
  c->r[31]=c->r[1]+0x00000010u; // 800F047C
L_800F0480:;
  c->r[3]=c->r[1]+0x00000008u; // 800F0480
  c->r[4]=c->r[29]+0x0000000Cu; // 800F0484
  c->lr=0x800F048Cu; f_800670A8(c); // 800F0488
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F048C
  c->r[0]=R32(c->r[28]+0x00000000u); // 800F0490
  c->r[0]=c->r[3]+c->r[0]; // 800F0494
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F0498
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800F049C
  c->r[0]=R32(c->r[28]+0x00000004u); // 800F04A0
  c->r[0]=c->r[3]+c->r[0]; // 800F04A4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F04A8
  c->r[3]=c->r[26]|c->r[26]; // 800F04AC
  c->r[4]=c->r[1]+0x00000008u; // 800F04B0
  c->r[5]=0u+0x00000000u; // 800F04B4
  c->lr=0x800F04BCu; f_80067A38(c); // 800F04B8
  c->r[30]=c->r[3]|c->r[3]; // 800F04BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F04C0
  if (crb(c,2)) { goto L_800F0580; } // 800F04C4
  c->r[0]=R32(c->r[28]+0x00000000u); // 800F04C8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800F04CC
  c->r[0]=R32(c->r[28]+0x00000004u); // 800F04D0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F04D4
  c->r[0]=c->r[31]+c->r[5]; // 800F04D8
  c->r[4]=c->r[4]+c->r[0]; // 800F04DC
  c->r[0]=R32(c->r[4]+0x00000030u); // 800F04E0
  cmps(c,0,(int32_t)c->r[0],0); // 800F04E4
  if (crb(c,2)) { goto L_800F0580; } // 800F04E8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F04EC
  cmps(c,0,(int32_t)c->r[0],1); // 800F04F0
  if (!crb(c,2)) { goto L_800F0580; } // 800F04F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F04F8
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 800F04FC
  cmps(c,0,(int32_t)c->r[0],0); // 800F0500
  if (!crb(c,2)) { goto L_800F0580; } // 800F0504
  c->r[4]=R32(c->r[3]+0x00000030u); // 800F0508
  c->r[0]=c->r[4]+0x00010000u; // 800F050C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F0510
  if (!crb(c,2)) { goto L_800F0580; } // 800F0514
  c->r[22]=0u+0x00000000u; // 800F0518
  c->r[23]=R32(c->r[3]+0x00000034u); // 800F051C
  c->r[0]=c->r[23]+0x00010000u; // 800F0520
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F0524
  if (!crb(c,2)) { goto L_800F0534; } // 800F0528
  c->r[22]=0u+0x00000001u; // 800F052C
  goto L_800F0568; // 800F0530
L_800F0534:;
  cmps(c,0,(int32_t)c->r[25],0); // 800F0534
  if (crb(c,2)) { goto L_800F0568; } // 800F0538
  c->lr=0x800F0540u; f_8007B524(c); // 800F053C
  c->lr=0x800F0544u; f_8006E224(c); // 800F0540
  c->lr=0x800F0548u; f_8006E3D0(c); // 800F0544
  c->r[4]=c->r[23]|c->r[23]; // 800F0548
  c->lr=0x800F0550u; f_80175D68(c); // 800F054C
  cmps(c,0,(int32_t)c->r[3],44); // 800F0550
  if (!crb(c,0)) { goto L_800F0568; } // 800F0554
  cmps(c,0,(int32_t)c->r[3],42); // 800F0558
  if (!crb(c,0)) { goto L_800F0564; } // 800F055C
  goto L_800F0568; // 800F0560
L_800F0564:;
  c->r[22]=0u+0x00000001u; // 800F0564
L_800F0568:;
  cmps(c,0,(int32_t)c->r[22],0); // 800F0568
  if (crb(c,2)) { goto L_800F0580; } // 800F056C
  c->r[3]=c->r[24]|c->r[24]; // 800F0570
  c->r[4]=c->r[30]+0x0000000Cu; // 800F0574
  c->lr=0x800F057Cu; f_800670A8(c); // 800F0578
  goto L_800F059C; // 800F057C
L_800F0580:;
  c->r[28]=c->r[28]+0x00000008u; // 800F0580
  c->r[27]=c->r[27]+0x00000001u; // 800F0584
  cmpu(c,0,c->r[27],0x00000019u); // 800F0588
  if (crb(c,0)) { IRQCHK(c); goto L_800F0480; } // 800F058C
  c->r[0]=0u+0xFFFFFFFFu; // 800F0590
  W32(c->r[24]+0x00000000u,c->r[0]); // 800F0594
  W32(c->r[24]+0x00000004u,c->r[0]); // 800F0598
L_800F059C:;
  c->r[11]=c->r[1]+0x000000A0u; // 800F059C
  c->lr=0x800F05A4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F05A0
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800F05A4
  c->lr=c->r[0]; // 800F05A8
  c->r[1]=c->r[1]+0x000000A0u; // 800F05AC
  return; // 800F05B0
}

// fn_800F05B4
void f_800F05B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F05B4
  c->r[0]=c->lr; // 800F05B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F05BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F05C0
  c->r[31]=c->r[3]|c->r[3]; // 800F05C4
  c->r[0]=c->r[4]|c->r[4]; // 800F05C8
  c->r[6]=c->r[5]|c->r[5]; // 800F05CC
  c->r[4]=c->r[1]+0x00000008u; // 800F05D0
  c->r[5]=c->r[0]|c->r[0]; // 800F05D4
  c->lr=0x800F05DCu; f_800F02A0(c); // 800F05D8
  c->r[0]=R32(c->r[1]+0x00000008u); // 800F05DC
  cmps(c,0,(int32_t)c->r[0],-1); // 800F05E0
  if (!crb(c,2)) { goto L_800F05FC; } // 800F05E4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800F05E8
  cmps(c,0,(int32_t)c->r[0],-1); // 800F05EC
  if (!crb(c,2)) { goto L_800F05FC; } // 800F05F0
  c->r[3]=0u+0x00000000u; // 800F05F4
  goto L_800F061C; // 800F05F8
L_800F05FC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F05FC
  c->r[4]=0u+0x00000000u; // 800F0600
  c->lr=0x800F0608u; f_800EFC40(c); // 800F0604
  cmps(c,0,(int32_t)c->r[3],0); // 800F0608
  if (crb(c,2)) { goto L_800F0618; } // 800F060C
  c->r[3]=0u+0x00000001u; // 800F0610
  goto L_800F061C; // 800F0614
L_800F0618:;
  c->r[3]=0u+0x00000000u; // 800F0618
L_800F061C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F061C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0620
  c->lr=c->r[0]; // 800F0624
  c->r[1]=c->r[1]+0x00000020u; // 800F0628
  return; // 800F062C
}

// fn_800F0630
void f_800F0630(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0630
  c->r[0]=c->lr; // 800F0634
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0638
  c->r[11]=c->r[1]+0x00000030u; // 800F063C
  c->lr=0x800F0644u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0640
  c->r[27]=c->r[3]|c->r[3]; // 800F0644
  c->r[28]=c->r[4]|c->r[4]; // 800F0648
  c->r[29]=c->r[5]|c->r[5]; // 800F064C
  c->r[31]=c->r[6]|c->r[6]; // 800F0650
  c->lr=0x800F0658u; f_8007B524(c); // 800F0654
  c->lr=0x800F065Cu; f_8006E224(c); // 800F0658
  c->lr=0x800F0660u; f_800897A8(c); // 800F065C
  c->r[30]=c->r[3]|c->r[3]; // 800F0660
  c->r[3]=c->r[27]|c->r[27]; // 800F0664
  c->r[4]=c->r[1]+0x00000008u; // 800F0668
  c->r[5]=c->r[29]|c->r[29]; // 800F066C
  c->r[6]=c->r[31]|c->r[31]; // 800F0670
  c->lr=0x800F0678u; f_800F02A0(c); // 800F0674
  c->r[3]=c->r[30]|c->r[30]; // 800F0678
  c->r[4]=c->r[1]+0x00000008u; // 800F067C
  c->r[5]=0u+0x00000000u; // 800F0680
  c->lr=0x800F0688u; f_80067A38(c); // 800F0684
  c->r[31]=c->r[3]|c->r[3]; // 800F0688
  c->r[3]=c->r[28]|c->r[28]; // 800F068C
  c->lr=0x800F0694u; f_80089E24(c); // 800F0690
  c->r[4]=c->r[3]|c->r[3]; // 800F0694
  c->r[3]=c->r[30]|c->r[30]; // 800F0698
  c->r[4]=c->r[4]+0x00000008u; // 800F069C
  c->r[5]=c->r[31]+0x0000000Cu; // 800F06A0
  c->lr=0x800F06A8u; f_8006838C(c); // 800F06A4
  c->r[3]=c->r[27]|c->r[27]; // 800F06A8
  c->r[4]=c->r[28]|c->r[28]; // 800F06AC
  c->r[5]=0u+0x00000000u; // 800F06B0
  c->lr=0x800F06B8u; f_800EFC94(c); // 800F06B4
  W32(c->r[31]+0x00000030u,c->r[3]); // 800F06B8
  c->r[3]=R32(c->r[31]+0x00000030u); // 800F06BC
  c->r[0]=c->r[3]+0x00010000u; // 800F06C0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F06C4
  c->r[11]=c->r[1]+0x00000030u; // 800F06C8
  c->lr=0x800F06D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F06CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F06D0
  c->lr=c->r[0]; // 800F06D4
  c->r[1]=c->r[1]+0x00000030u; // 800F06D8
  return; // 800F06DC
}

// fn_800F06E0
void f_800F06E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F06E0
  c->r[0]=c->lr; // 800F06E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F06E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F06EC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)2296); // 800F06F0
  c->r[31]=c->r[3]+c->r[0]; // 800F06F4
  c->r[3]=c->r[31]+0x000009A4u; // 800F06F8
  c->r[4]=c->r[5]|c->r[5]; // 800F06FC
  c->lr=0x800F0704u; f_8004A65C(c); // 800F0700
  c->r[3]=c->r[31]+0x000000F0u; // 800F0704
  c->r[4]=c->r[31]+0x000009A4u; // 800F0708
  c->lr=0x800F0710u; f_8005658C(c); // 800F070C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0710
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0714
  c->lr=c->r[0]; // 800F0718
  c->r[1]=c->r[1]+0x00000010u; // 800F071C
  return; // 800F0720
}

// fn_800F0724
void f_800F0724(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0724
  c->r[0]=c->lr; // 800F0728
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F072C
  c->r[11]=c->r[1]+0x00000020u; // 800F0730
  c->lr=0x800F0738u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0734
  c->r[28]=0u+0x00000000u; // 800F0738
  c->r[26]=0u+0x00000000u; // 800F073C
  c->r[27]=0u+0x00000000u; // 800F0740
  c->r[30]=c->r[3]|c->r[3]; // 800F0744
  c->r[29]=c->r[3]+0x00020000u; // 800F0748
  c->r[29]=c->r[29]+0x00003A14u; // 800F074C
  c->r[31]=c->r[3]+0x00020000u; // 800F0750
  goto L_800F0790; // 800F0754
L_800F0758:;
  c->lr=0x800F075Cu; f_8005C538(c); // 800F0758
  c->r[4]=c->r[30]+0x00020000u; // 800F075C
  c->r[4]=R32(c->r[4]+0x00003A18u); // 800F0760
  c->r[4]=c->r[4]+0x00000001u; // 800F0764
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800F0768
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800F076C
  c->r[0]=c->r[3]-c->r[0]; // 800F0770
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800F0774
  if (!crb(c,0)) { goto L_800F0784; } // 800F0778
  c->r[26]=c->r[0]|c->r[0]; // 800F077C
  c->r[28]=c->r[29]|c->r[29]; // 800F0780
L_800F0784:;
  c->r[30]=c->r[30]+0x00000008u; // 800F0784
  c->r[29]=c->r[29]+0x00000008u; // 800F0788
  c->r[27]=c->r[27]+0x00000001u; // 800F078C
L_800F0790:;
  c->r[0]=R32(c->r[31]+0x00003A10u); // 800F0790
  cmpu(c,0,c->r[27],c->r[0]); // 800F0794
  if (crb(c,0)) { IRQCHK(c); goto L_800F0758; } // 800F0798
  c->r[3]=c->r[28]|c->r[28]; // 800F079C
  c->r[11]=c->r[1]+0x00000020u; // 800F07A0
  c->lr=0x800F07A8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F07A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F07A8
  c->lr=c->r[0]; // 800F07AC
  c->r[1]=c->r[1]+0x00000020u; // 800F07B0
  return; // 800F07B4
}

// fn_800F07B8
void f_800F07B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F07B8
  c->r[0]=c->lr; // 800F07BC
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800F07C0
  c->r[11]=c->r[1]+0x000000E0u; // 800F07C4
  c->lr=0x800F07CCu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F07C8
  c->r[22]=c->r[3]|c->r[3]; // 800F07CC
  c->lr=0x800F07D4u; f_8007B524(c); // 800F07D0
  c->lr=0x800F07D8u; f_8006E224(c); // 800F07D4
  c->lr=0x800F07DCu; f_800897A8(c); // 800F07D8
  c->r[23]=c->r[3]|c->r[3]; // 800F07DC
  c->r[3]=c->r[1]+0x00000010u; // 800F07E0
  c->lr=0x800F07E8u; f_8008A590(c); // 800F07E4
  c->lr=0x800F07ECu; f_8007B524(c); // 800F07E8
  c->lr=0x800F07F0u; f_800A104C(c); // 800F07EC
  cmps(c,0,(int32_t)c->r[3],0); // 800F07F0
  if (crb(c,2)) { goto L_800F08E0; } // 800F07F4
  c->r[3]=R32(c->r[23]+0x000000D0u); // 800F07F8
  c->r[24]=R32(c->r[3]+0x0000004Cu); // 800F07FC
  c->r[27]=0u+0x00000000u; // 800F0800
  c->r[21]=c->r[24]+0x000021B8u; // 800F0804
  goto L_800F08D4; // 800F0808
L_800F080C:;
  c->r[25]=0u+0x00000000u; // 800F080C
L_800F0810:;
  c->lr=0x800F0814u; f_800F4430(c); // 800F0810
  c->r[3]=c->r[3]+0x00000960u; // 800F0814
  c->r[4]=c->r[25]|c->r[25]; // 800F0818
  c->lr=0x800F0820u; f_8017B6F0(c); // 800F081C
  c->r[26]=c->r[3]|c->r[3]; // 800F0820
  c->r[3]=R32(c->r[3]+0x00000034u); // 800F0824
  c->r[4]=c->r[21]|c->r[21]; // 800F0828
  c->lr=0x800F0830u; f_802EBEB4(c); // 800F082C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0830
  if (!crb(c,2)) { goto L_800F08C0; } // 800F0834
  c->r[3]=c->r[1]+0x00000008u; // 800F0838
  c->r[4]=c->r[21]+0x00000020u; // 800F083C
  c->lr=0x800F0844u; f_800670A8(c); // 800F0840
  c->r[3]=R32(c->r[1]+0x00000008u); // 800F0844
  c->r[0]=c->r[3]+0x00000001u; // 800F0848
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F084C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800F0850
  c->r[0]=c->r[3]+0x00000001u; // 800F0854
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800F0858
  c->r[3]=c->r[23]|c->r[23]; // 800F085C
  c->r[4]=c->r[1]+0x00000008u; // 800F0860
  c->r[5]=0u+0x00000000u; // 800F0864
  c->lr=0x800F086Cu; f_80067A38(c); // 800F0868
  c->r[25]=c->r[3]|c->r[3]; // 800F086C
  c->lr=0x800F0874u; f_80074E68(c); // 800F0870
  c->lr=0x800F0878u; f_8017A2D8(c); // 800F0874
  c->r[28]=c->r[3]|c->r[3]; // 800F0878
  c->r[3]=c->r[1]+0x00000010u; // 800F087C
  c->r[4]=R32(c->r[26]+0x00000004u); // 800F0880
  c->lr=0x800F0888u; f_80178974(c); // 800F0884
  c->r[3]=c->r[23]|c->r[23]; // 800F0888
  c->r[4]=c->r[1]+0x00000018u; // 800F088C
  c->r[5]=c->r[25]+0x0000000Cu; // 800F0890
  c->lr=0x800F0898u; f_8006838C(c); // 800F0894
  c->r[3]=c->r[28]|c->r[28]; // 800F0898
  c->r[4]=c->r[1]+0x00000010u; // 800F089C
  c->r[5]=0u+0x00000001u; // 800F08A0
  c->lr=0x800F08A8u; f_80178F64(c); // 800F08A4
  c->r[3]=c->r[22]|c->r[22]; // 800F08A8
  c->r[4]=c->r[28]|c->r[28]; // 800F08AC
  c->r[5]=0u+0x00000000u; // 800F08B0
  c->lr=0x800F08B8u; f_800EFC94(c); // 800F08B4
  W32(c->r[25]+0x00000030u,c->r[3]); // 800F08B8
  goto L_800F08CC; // 800F08BC
L_800F08C0:;
  c->r[25]=c->r[25]+0x00000001u; // 800F08C0
  cmpu(c,0,c->r[25],0x000001F8u); // 800F08C4
  if (crb(c,0)) { IRQCHK(c); goto L_800F0810; } // 800F08C8
L_800F08CC:;
  c->r[21]=c->r[21]+0x00000028u; // 800F08CC
  c->r[27]=c->r[27]+0x00000001u; // 800F08D0
L_800F08D4:;
  c->r[0]=R32(c->r[24]+0x000021B4u); // 800F08D4
  cmpu(c,0,c->r[27],c->r[0]); // 800F08D8
  if (crb(c,0)) { IRQCHK(c); goto L_800F080C; } // 800F08DC
L_800F08E0:;
  c->r[0]=0u+0x00000000u; // 800F08E0
  c->r[3]=c->r[22]+0x00020000u; // 800F08E4
  W32(c->r[3]+0x00003B24u,c->r[0]); // 800F08E8
  W32(c->r[3]+0x00003E48u,c->r[0]); // 800F08EC
  W32(c->r[3]+0x0000416Cu,c->r[0]); // 800F08F0
  W32(c->r[3]+0x00004490u,c->r[0]); // 800F08F4
  W32(c->r[3]+0x000047B4u,c->r[0]); // 800F08F8
  W32(c->r[3]+0x00004AD8u,c->r[0]); // 800F08FC
  W32(c->r[3]+0x00004DFCu,c->r[0]); // 800F0900
  c->lr=0x800F0908u; f_800F4430(c); // 800F0904
  c->r[3]=c->r[3]+0x00000384u; // 800F0908
  c->lr=0x800F0910u; f_801A1FC0(c); // 800F090C
  c->r[29]=c->r[3]|c->r[3]; // 800F0910
  c->r[27]=0u+0x00000000u; // 800F0914
  goto L_800F09B0; // 800F0918
L_800F091C:;
  c->lr=0x800F0920u; f_800F4430(c); // 800F091C
  c->r[3]=c->r[3]+0x00000384u; // 800F0920
  c->r[4]=c->r[27]|c->r[27]; // 800F0924
  c->lr=0x800F092Cu; f_801A1FBC(c); // 800F0928
  c->r[25]=c->r[3]|c->r[3]; // 800F092C
  c->lr=0x800F0934u; f_8007B524(c); // 800F0930
  c->lr=0x800F0938u; f_8006E224(c); // 800F0934
  c->r[3]=c->r[3]+0x00010000u; // 800F0938
  c->r[0]=R32(c->r[3]+0xFFFF819Cu); // 800F093C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F0940
  c->r[3]=c->r[25]+c->r[0]; // 800F0944
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0948
  cmps(c,0,(int32_t)c->r[0],0); // 800F094C
  if (crb(c,2)) { goto L_800F09AC; } // 800F0950
  c->lr=0x800F0958u; f_800F4430(c); // 800F0954
  c->r[3]=c->r[3]+0x00000960u; // 800F0958
  c->r[4]=R32(c->r[25]+0x00000000u); // 800F095C
  c->lr=0x800F0964u; f_8017B6F0(c); // 800F0960
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F0964
  cmps(c,0,(int32_t)c->r[0],7); // 800F0968
  if (!crb(c,0)) { goto L_800F09AC; } // 800F096C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0970
  if (!crb(c,0)) { goto L_800F097C; } // 800F0974
  goto L_800F09AC; // 800F0978
L_800F097C:;
  c->r[3]=c->r[22]+0x00020000u; // 800F097C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)804); // 800F0980
  c->r[3]=c->r[3]+c->r[0]; // 800F0984
  c->r[5]=c->r[3]+0x00003B24u; // 800F0988
  c->r[4]=R32(c->r[25]+0x00000000u); // 800F098C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800F0990
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800F0994
  c->r[3]=c->r[5]+c->r[0]; // 800F0998
  W32(c->r[3]+0x00000004u,c->r[4]); // 800F099C
  c->r[3]=R32(c->r[5]+0x00000000u); // 800F09A0
  c->r[0]=c->r[3]+0x00000001u; // 800F09A4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F09A8
L_800F09AC:;
  c->r[27]=c->r[27]+0x00000001u; // 800F09AC
L_800F09B0:;
  cmpu(c,0,c->r[27],c->r[29]); // 800F09B0
  if (crb(c,0)) { IRQCHK(c); goto L_800F091C; } // 800F09B4
  c->r[29]=0u+0x00000000u; // 800F09B8
  c->r[3]=c->r[22]+0x00020000u; // 800F09BC
  W32(c->r[3]+0x00003A10u,c->r[29]); // 800F09C0
  c->r[27]=0u+0x00000000u; // 800F09C4
  c->r[28]=c->r[3]+0x00003B24u; // 800F09C8
  c->r[30]=0u+0x80460000u; // 800F09CC
L_800F09D0:;
  cmpu(c,0,c->r[27],0x00000006u); // 800F09D0
  if (crb(c,1)) { goto L_800F0A1C; } // 800F09D4
  c->r[3]=c->r[30]+0x00001E50u; // 800F09D8
  c->r[3]=R32(c->r[3]+c->r[29]); // 800F09DC
  c->ctr=c->r[3]; // 800F09E0
  if (true) { switch (c->ctr) { case 0x800F09E8u: goto L_800F09E8; case 0x800F09F0u: goto L_800F09F0; case 0x800F09F8u: goto L_800F09F8; case 0x800F0A00u: goto L_800F0A00; case 0x800F0A08u: goto L_800F0A08; case 0x800F0A10u: goto L_800F0A10; case 0x800F0A18u: goto L_800F0A18; default: break; } dispatch(c,c->ctr); return; } // 800F09E4
L_800F09E8:;
  c->r[24]=0u+0x00000004u; // 800F09E8
  goto L_800F0A1C; // 800F09EC
L_800F09F0:;
  c->r[24]=0u+0x00000004u; // 800F09F0
  goto L_800F0A1C; // 800F09F4
L_800F09F8:;
  c->r[24]=0u+0x00000004u; // 800F09F8
  goto L_800F0A1C; // 800F09FC
L_800F0A00:;
  c->r[24]=0u+0x00000004u; // 800F0A00
  goto L_800F0A1C; // 800F0A04
L_800F0A08:;
  c->r[24]=0u+0x00000004u; // 800F0A08
  goto L_800F0A1C; // 800F0A0C
L_800F0A10:;
  c->r[24]=0u+0x00000006u; // 800F0A10
  goto L_800F0A1C; // 800F0A14
L_800F0A18:;
  c->r[24]=0u+0x00000008u; // 800F0A18
L_800F0A1C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800F0A1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[24]); // 800F0A20
  if (!crb(c,1)) { goto L_800F0B04; } // 800F0A24
  c->r[26]=0u+0x00000000u; // 800F0A28
  c->r[31]=c->r[22]+0x00020000u; // 800F0A2C
  goto L_800F0AF8; // 800F0A30
L_800F0A34:;
  c->r[20]=0u+0x00000000u; // 800F0A34
  c->r[25]=0u+0x00000000u; // 800F0A38
  c->r[21]=c->r[28]|c->r[28]; // 800F0A3C
  goto L_800F0A74; // 800F0A40
L_800F0A44:;
  c->lr=0x800F0A48u; f_8005C538(c); // 800F0A44
  c->r[4]=R32(c->r[21]+0x00000008u); // 800F0A48
  c->r[4]=c->r[4]+0x00000001u; // 800F0A4C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800F0A50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800F0A54
  c->r[0]=c->r[3]-c->r[0]; // 800F0A58
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[0]); // 800F0A5C
  if (!crb(c,0)) { goto L_800F0A6C; } // 800F0A60
  c->r[20]=c->r[0]|c->r[0]; // 800F0A64
  c->r[23]=c->r[25]|c->r[25]; // 800F0A68
L_800F0A6C:;
  c->r[21]=c->r[21]+0x00000008u; // 800F0A6C
  c->r[25]=c->r[25]+0x00000001u; // 800F0A70
L_800F0A74:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800F0A74
  cmpu(c,0,c->r[25],c->r[0]); // 800F0A78
  if (crb(c,0)) { IRQCHK(c); goto L_800F0A44; } // 800F0A7C
  c->r[0]=R32(c->r[31]+0x00003A10u); // 800F0A80
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800F0A84
  c->r[3]=c->r[31]+c->r[0]; // 800F0A88
  c->r[3]=c->r[3]+0x00003A14u; // 800F0A8C
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800F0A90
  c->r[4]=c->r[28]+c->r[0]; // 800F0A94
  c->r[4]=c->r[4]+0x00000004u; // 800F0A98
  c->lr=0x800F0AA0u; f_800F0BF0(c); // 800F0A9C
  c->r[3]=R32(c->r[31]+0x00003A10u); // 800F0AA0
  c->r[0]=c->r[3]+0x00000001u; // 800F0AA4
  W32(c->r[31]+0x00003A10u,c->r[0]); // 800F0AA8
  c->r[25]=c->r[23]|c->r[23]; // 800F0AAC
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800F0AB0
  c->r[3]=c->r[28]+c->r[0]; // 800F0AB4
  c->r[21]=c->r[3]+0x00000004u; // 800F0AB8
  goto L_800F0AE0; // 800F0ABC
L_800F0AC0:;
  c->r[3]=c->r[21]|c->r[21]; // 800F0AC0
  c->r[0]=c->r[25]+0x00000001u; // 800F0AC4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800F0AC8
  c->r[4]=c->r[28]+c->r[0]; // 800F0ACC
  c->r[4]=c->r[4]+0x00000004u; // 800F0AD0
  c->lr=0x800F0AD8u; f_800F0BF0(c); // 800F0AD4
  c->r[21]=c->r[21]+0x00000008u; // 800F0AD8
  c->r[25]=c->r[25]+0x00000001u; // 800F0ADC
L_800F0AE0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800F0AE0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F0AE4
  cmpu(c,0,c->r[25],c->r[0]); // 800F0AE8
  if (crb(c,0)) { IRQCHK(c); goto L_800F0AC0; } // 800F0AEC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800F0AF0
  c->r[26]=c->r[26]+0x00000001u; // 800F0AF4
L_800F0AF8:;
  cmpu(c,0,c->r[26],c->r[24]); // 800F0AF8
  if (crb(c,0)) { IRQCHK(c); goto L_800F0A34; } // 800F0AFC
  goto L_800F0B4C; // 800F0B00
L_800F0B04:;
  c->r[21]=0u+0x00000000u; // 800F0B04
  c->r[26]=c->r[28]+0x00000004u; // 800F0B08
  c->r[25]=c->r[22]+0x00020000u; // 800F0B0C
  goto L_800F0B40; // 800F0B10
L_800F0B14:;
  c->r[0]=R32(c->r[25]+0x00003A10u); // 800F0B14
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800F0B18
  c->r[3]=c->r[25]+c->r[0]; // 800F0B1C
  c->r[3]=c->r[3]+0x00003A14u; // 800F0B20
  c->r[4]=c->r[26]|c->r[26]; // 800F0B24
  c->lr=0x800F0B2Cu; f_800F0BF0(c); // 800F0B28
  c->r[3]=R32(c->r[25]+0x00003A10u); // 800F0B2C
  c->r[0]=c->r[3]+0x00000001u; // 800F0B30
  W32(c->r[25]+0x00003A10u,c->r[0]); // 800F0B34
  c->r[26]=c->r[26]+0x00000008u; // 800F0B38
  c->r[21]=c->r[21]+0x00000001u; // 800F0B3C
L_800F0B40:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800F0B40
  cmpu(c,0,c->r[21],c->r[0]); // 800F0B44
  if (crb(c,0)) { IRQCHK(c); goto L_800F0B14; } // 800F0B48
L_800F0B4C:;
  c->r[28]=c->r[28]+0x00000324u; // 800F0B4C
  c->r[27]=c->r[27]+0x00000001u; // 800F0B50
  c->r[29]=c->r[29]+0x00000004u; // 800F0B54
  cmpu(c,0,c->r[27],0x00000007u); // 800F0B58
  if (crb(c,0)) { IRQCHK(c); goto L_800F09D0; } // 800F0B5C
  c->r[3]=c->r[22]+0x00020000u; // 800F0B60
  c->r[0]=R32(c->r[3]+0x00003A10u); // 800F0B64
  cmps(c,0,(int32_t)c->r[0],0); // 800F0B68
  if (crb(c,2)) { goto L_800F0BD8; } // 800F0B6C
  c->lr=0x800F0B74u; f_8007B524(c); // 800F0B70
  c->lr=0x800F0B78u; f_8006E224(c); // 800F0B74
  c->r[3]=c->r[3]+0x00010000u; // 800F0B78
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 800F0B7C
  c->r[23]=R32(c->r[3]+0x00000058u); // 800F0B80
  c->lr=0x800F0B88u; f_8007B524(c); // 800F0B84
  c->lr=0x800F0B8Cu; f_8006E224(c); // 800F0B88
  c->r[3]=c->r[3]+0x00010000u; // 800F0B8C
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 800F0B90
  c->r[0]=R32(c->r[3]+0x00000054u); // 800F0B94
  c->r[3]=c->r[23]-c->r[0]; // 800F0B98
  c->r[23]=c->r[3]+0x00000001u; // 800F0B9C
  c->lr=0x800F0BA4u; f_8005C538(c); // 800F0BA0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[23]); // 800F0BA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[23]); // 800F0BA8
  c->r[23]=c->r[3]-c->r[0]; // 800F0BAC
  c->lr=0x800F0BB4u; f_8007B524(c); // 800F0BB0
  c->lr=0x800F0BB8u; f_8006E224(c); // 800F0BB4
  c->r[3]=c->r[3]+0x00010000u; // 800F0BB8
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 800F0BBC
  c->r[0]=R32(c->r[3]+0x00000054u); // 800F0BC0
  c->r[4]=c->r[0]+c->r[23]; // 800F0BC4
  c->r[3]=c->r[22]|c->r[22]; // 800F0BC8
  c->r[5]=0u+0xFFFFFFFFu; // 800F0BCC
  c->r[6]=0u+0x00000001u; // 800F0BD0
  c->lr=0x800F0BD8u; f_800F0C04(c); // 800F0BD4
L_800F0BD8:;
  c->r[11]=c->r[1]+0x000000E0u; // 800F0BD8
  c->lr=0x800F0BE0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F0BDC
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800F0BE0
  c->lr=c->r[0]; // 800F0BE4
  c->r[1]=c->r[1]+0x000000E0u; // 800F0BE8
  return; // 800F0BEC
}

// fn_800F0BF0
void f_800F0BF0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F0BF0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0BF4
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F0BF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F0BFC
  return; // 800F0C00
}

// fn_800F0C04
void f_800F0C04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0C04
  c->r[0]=c->lr; // 800F0C08
  W32(c->r[1]+0x00000114u,c->r[0]); // 800F0C0C
  c->r[11]=c->r[1]+0x00000110u; // 800F0C10
  c->lr=0x800F0C18u; f_802F0D94(c); // 800F0C14
  c->r[15]=c->r[3]|c->r[3]; // 800F0C18
  c->r[16]=c->r[4]|c->r[4]; // 800F0C1C
  c->r[19]=c->r[5]|c->r[5]; // 800F0C20
  c->r[17]=c->r[6]|c->r[6]; // 800F0C24
  c->lr=0x800F0C2Cu; f_8007B524(c); // 800F0C28
  c->lr=0x800F0C30u; f_8006E224(c); // 800F0C2C
  c->lr=0x800F0C34u; f_800897A8(c); // 800F0C30
  c->r[25]=c->r[3]|c->r[3]; // 800F0C34
  c->r[3]=c->r[1]+0x00000034u; // 800F0C38
  c->lr=0x800F0C40u; f_8008A590(c); // 800F0C3C
  c->r[3]=R32(c->r[25]+0x000000D0u); // 800F0C40
  c->r[21]=c->r[3]+0x001F0000u; // 800F0C44
  c->r[21]=c->r[21]+0x00005548u; // 800F0C48
  c->lr=0x800F0C50u; f_8007B524(c); // 800F0C4C
  c->lr=0x800F0C54u; f_8006E224(c); // 800F0C50
  c->r[14]=c->r[3]+0x00010000u; // 800F0C54
  c->lr=0x800F0C5Cu; f_800F4430(c); // 800F0C58
  c->r[3]=c->r[3]+0x000001DCu; // 800F0C5C
  c->r[4]=R32(c->r[14]+0xFFFF8188u); // 800F0C60
  c->r[5]=c->r[1]+0x00000008u; // 800F0C64
  c->lr=0x800F0C6Cu; f_801A1C60(c); // 800F0C68
  c->r[3]=c->r[25]|c->r[25]; // 800F0C6C
  c->lr=0x800F0C74u; f_80066C40(c); // 800F0C70
  c->r[3]=c->r[21]|c->r[21]; // 800F0C74
  c->lr=0x800F0C7Cu; f_8004B018(c); // 800F0C78
  c->r[14]=c->r[3]|c->r[3]; // 800F0C7C
  goto L_800F0D60; // 800F0C80
L_800F0C84:;
  c->r[3]=c->r[21]|c->r[21]; // 800F0C84
  c->r[4]=c->r[14]|c->r[14]; // 800F0C88
  c->lr=0x800F0C90u; f_8028CCD8(c); // 800F0C8C
  c->r[18]=c->r[3]|c->r[3]; // 800F0C90
  c->r[4]=0u+0x00000000u; // 800F0C94
  c->r[3]=R32(c->r[14]+0x00000038u); // 800F0C98
  c->r[0]=c->r[3]+0x00010000u; // 800F0C9C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F0CA0
  if (crb(c,2)) { goto L_800F0CAC; } // 800F0CA4
  c->r[4]=0u+0x00000001u; // 800F0CA8
L_800F0CAC:;
  c->r[3]=R32(c->r[14]+0x00000030u); // 800F0CAC
  c->r[0]=c->r[3]+0x00010000u; // 800F0CB0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F0CB4
  if (crb(c,2)) { goto L_800F0CC0; } // 800F0CB8
  c->r[4]=0u+0x00000001u; // 800F0CBC
L_800F0CC0:;
  c->r[3]=R32(c->r[14]+0x00000034u); // 800F0CC0
  c->r[0]=c->r[3]+0x00010000u; // 800F0CC4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F0CC8
  if (crb(c,2)) { goto L_800F0CD4; } // 800F0CCC
  c->r[4]=0u+0x00000001u; // 800F0CD0
L_800F0CD4:;
  cmps(c,0,(int32_t)c->r[19],-1); // 800F0CD4
  if (!crb(c,2)) { goto L_800F0CF0; } // 800F0CD8
  c->r[0]=R32(c->r[14]+0x00000008u); // 800F0CDC
  cmps(c,0,(int32_t)c->r[0],-1); // 800F0CE0
  if (!crb(c,2)) { goto L_800F0D00; } // 800F0CE4
  c->r[4]=0u+0x00000001u; // 800F0CE8
  goto L_800F0D00; // 800F0CEC
L_800F0CF0:;
  c->r[0]=R32(c->r[14]+0x00000008u); // 800F0CF0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[19]); // 800F0CF4
  if (crb(c,2)) { goto L_800F0D00; } // 800F0CF8
  c->r[4]=0u+0x00000001u; // 800F0CFC
L_800F0D00:;
  c->r[0]=R32(c->r[14]+0x00000004u); // 800F0D00
  cmps(c,0,(int32_t)c->r[0],1); // 800F0D04
  if (crb(c,2)) { goto L_800F0D10; } // 800F0D08
  c->r[4]=0u+0x00000001u; // 800F0D0C
L_800F0D10:;
  c->r[3]=R32(c->r[14]+0x00000000u); // 800F0D10
  c->r[0]=rotl(c->r[3],0)&0x00000040u; // 800F0D14
  cmps(c,0,(int32_t)c->r[0],0); // 800F0D18
  if (crb(c,2)) { goto L_800F0D24; } // 800F0D1C
  c->r[4]=0u+0x00000001u; // 800F0D20
L_800F0D24:;
  c->r[0]=rotl(c->r[3],0)&0x00004000u; // 800F0D24
  cmps(c,0,(int32_t)c->r[0],0); // 800F0D28
  if (crb(c,2)) { goto L_800F0D34; } // 800F0D2C
  c->r[4]=0u+0x00000001u; // 800F0D30
L_800F0D34:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F0D34
  if (crb(c,2)) { goto L_800F0D5C; } // 800F0D38
  c->r[3]=c->r[21]|c->r[21]; // 800F0D3C
  c->r[4]=c->r[14]|c->r[14]; // 800F0D40
  c->lr=0x800F0D48u; f_8028CC6C(c); // 800F0D44
  c->r[3]=R32(c->r[25]+0x000000D0u); // 800F0D48
  c->r[3]=c->r[3]+0x001F0000u; // 800F0D4C
  c->r[3]=c->r[3]+0x00005560u; // 800F0D50
  c->r[4]=c->r[14]|c->r[14]; // 800F0D54
  c->lr=0x800F0D5Cu; f_8028CA70(c); // 800F0D58
L_800F0D5C:;
  c->r[14]=c->r[18]|c->r[18]; // 800F0D5C
L_800F0D60:;
  cmps(c,0,(int32_t)c->r[14],0); // 800F0D60
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0C84; } // 800F0D64
  c->r[24]=0u+0x00000000u; // 800F0D68
  c->r[31]=0u+0x80430000u; // 800F0D6C
  c->r[14]=0u+0x00000001u; // 800F0D70
  goto L_800F10E8; // 800F0D74
L_800F0D78:;
  c->r[0]=R16(c->r[21]+0x00000008u); // 800F0D78
  cmps(c,0,(int32_t)c->r[0],0); // 800F0D7C
  if (crb(c,2)) { goto L_800F10F0; } // 800F0D80
  c->r[3]=c->r[15]|c->r[15]; // 800F0D84
  c->lr=0x800F0D8Cu; f_800F0724(c); // 800F0D88
  c->r[18]=c->r[3]|c->r[3]; // 800F0D8C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0D90
  if (crb(c,2)) { goto L_800F10E4; } // 800F0D94
  c->lr=0x800F0D9Cu; f_8005C538(c); // 800F0D98
  c->r[4]=R16(c->r[21]+0x00000008u); // 800F0D9C
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800F0DA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800F0DA4
  c->r[0]=c->r[3]-c->r[0]; // 800F0DA8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0DAC
  c->r[3]=c->r[21]|c->r[21]; // 800F0DB0
  c->lr=0x800F0DB8u; f_8028CD14(c); // 800F0DB4
  c->r[27]=c->r[3]|c->r[3]; // 800F0DB8
  c->lr=0x800F0DC0u; f_800F4430(c); // 800F0DBC
  c->r[3]=c->r[3]+0x00000960u; // 800F0DC0
  c->r[4]=R32(c->r[18]+0x00000000u); // 800F0DC4
  c->lr=0x800F0DCCu; f_8017B6F0(c); // 800F0DC8
  c->r[30]=c->r[3]|c->r[3]; // 800F0DCC
  c->lr=0x800F0DD4u; f_80074E68(c); // 800F0DD0
  c->lr=0x800F0DD8u; f_8017A2D8(c); // 800F0DD4
  c->r[22]=c->r[3]|c->r[3]; // 800F0DD8
  c->r[3]=c->r[1]+0x00000034u; // 800F0DDC
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F0DE0
  c->lr=0x800F0DE8u; f_80178974(c); // 800F0DE4
  c->r[20]=0u+0x00000000u; // 800F0DE8
  c->r[0]=R32(c->r[1]+0x00000020u); // 800F0DEC
  cmps(c,0,(int32_t)c->r[0],0); // 800F0DF0
  if (crb(c,2)) { goto L_800F0FF4; } // 800F0DF4
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F0DF8
  cmps(c,0,(int32_t)c->r[0],6); // 800F0DFC
  if (crb(c,2)) { goto L_800F0E1C; } // 800F0E00
  if (!crb(c,0)) { goto L_800F0FF4; } // 800F0E04
  cmps(c,0,(int32_t)c->r[0],3); // 800F0E08
  if (!crb(c,0)) { goto L_800F0FF4; } // 800F0E0C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0E10
  if (!crb(c,0)) { goto L_800F0E48; } // 800F0E14
  goto L_800F0FF4; // 800F0E18
L_800F0E1C:;
  c->lr=0x800F0E20u; f_8005C538(c); // 800F0E1C
  c->r[4]=0u+0x55550000u; // 800F0E20
  c->r[0]=c->r[4]+0x00005556u; // 800F0E24
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800F0E28
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 800F0E2C
  c->r[0]=c->r[4]+c->r[0]; // 800F0E30
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 800F0E34
  c->r[3]=c->r[3]-c->r[0]; // 800F0E38
  c->r[0]=c->r[3]+0x00000001u; // 800F0E3C
  W32(c->r[1]+0x00000038u,c->r[0]); // 800F0E40
  goto L_800F0FF4; // 800F0E44
L_800F0E48:;
  c->r[19]=0u+0x00000000u; // 800F0E48
  c->r[3]=c->r[31]+0xFFFFDFA0u; // 800F0E4C
  goto L_800F0E5C; // 800F0E50
L_800F0E54:;
  c->r[3]=c->r[3]+0x00000008u; // 800F0E54
  c->r[19]=c->r[19]+0x00000001u; // 800F0E58
L_800F0E5C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F0E5C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0E60
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0E54; } // 800F0E64
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F0E68
  cmps(c,0,(int32_t)c->r[0],0); // 800F0E6C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F0E54; } // 800F0E70
  c->r[26]=0u+0x00000000u; // 800F0E74
  c->r[18]=0u+0x00000000u; // 800F0E78
  c->r[23]=0u+0x00000000u; // 800F0E7C
  c->r[29]=c->r[31]+0xFFFFDFA0u; // 800F0E80
  c->r[28]=c->r[29]|c->r[29]; // 800F0E84
  goto L_800F0EC0; // 800F0E88
L_800F0E8C:;
  c->lr=0x800F0E90u; f_8005C538(c); // 800F0E8C
  c->r[4]=R32(c->r[29]+0x00000004u); // 800F0E90
  c->r[4]=c->r[4]+0x00000001u; // 800F0E94
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[4]); // 800F0E98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800F0E9C
  c->r[0]=c->r[3]-c->r[0]; // 800F0EA0
  cmpu(c,0,c->r[18],c->r[0]); // 800F0EA4
  if (!crb(c,0)) { goto L_800F0EB4; } // 800F0EA8
  c->r[18]=c->r[0]|c->r[0]; // 800F0EAC
  c->r[26]=c->r[28]|c->r[28]; // 800F0EB0
L_800F0EB4:;
  c->r[29]=c->r[29]+0x00000008u; // 800F0EB4
  c->r[28]=c->r[28]+0x00000008u; // 800F0EB8
  c->r[23]=c->r[23]+0x00000001u; // 800F0EBC
L_800F0EC0:;
  cmpu(c,0,c->r[23],c->r[19]); // 800F0EC0
  if (crb(c,0)) { IRQCHK(c); goto L_800F0E8C; } // 800F0EC4
  c->r[19]=R32(c->r[26]+0x00000000u); // 800F0EC8
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F0ECC
  cmps(c,0,(int32_t)c->r[0],2); // 800F0ED0
  if (crb(c,2)) { goto L_800F0F18; } // 800F0ED4
  if (!crb(c,0)) { goto L_800F0F64; } // 800F0ED8
  cmps(c,0,(int32_t)c->r[0],0); // 800F0EDC
  if (!crb(c,0)) { goto L_800F0EE8; } // 800F0EE0
  goto L_800F0F64; // 800F0EE4
L_800F0EE8:;
  cmps(c,0,(int32_t)c->r[19],0); // 800F0EE8
  if (!crb(c,0)) { goto L_800F0EF4; } // 800F0EEC
  c->r[20]=0u+0x00000001u; // 800F0EF0
L_800F0EF4:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F0EF4
  cmps(c,0,(int32_t)c->r[0],96); // 800F0EF8
  if (crb(c,2)) { goto L_800F0F10; } // 800F0EFC
  if (!crb(c,0)) { goto L_800F0F64; } // 800F0F00
  cmps(c,0,(int32_t)c->r[0],34); // 800F0F04
  if (crb(c,2)) { goto L_800F0F10; } // 800F0F08
  goto L_800F0F64; // 800F0F0C
L_800F0F10:;
  c->r[20]=0u+0x00000000u; // 800F0F10
  goto L_800F0F64; // 800F0F14
L_800F0F18:;
  c->lr=0x800F0F1Cu; f_800F4430(c); // 800F0F18
  c->r[3]=c->r[3]+0x0000099Cu; // 800F0F1C
  c->r[4]=R32(c->r[30]+0x00000008u); // 800F0F20
  c->lr=0x800F0F28u; f_8017B2E8(c); // 800F0F24
  c->r[18]=c->r[3]|c->r[3]; // 800F0F28
  c->lr=0x800F0F30u; f_8005C538(c); // 800F0F2C
  c->r[4]=0u+0x51EC0000u; // 800F0F30
  c->r[0]=c->r[4]+0xFFFF851Fu; // 800F0F34
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800F0F38
  c->r[0]=sraw(c,c->r[0],5); // 800F0F3C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800F0F40
  c->r[0]=c->r[0]+c->r[4]; // 800F0F44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800F0F48
  c->r[3]=c->r[3]-c->r[0]; // 800F0F4C
  c->r[0]=R32(c->r[18]+0x00000014u); // 800F0F50
  c->r[0]=addc(c,~c->r[0],0x00000064u,1); // 800F0F54
  cmpu(c,0,c->r[3],c->r[0]); // 800F0F58
  if (crb(c,0)) { goto L_800F0F64; } // 800F0F5C
  c->r[20]=0u+0x00000001u; // 800F0F60
L_800F0F64:;
  cmps(c,0,(int32_t)c->r[20],0); // 800F0F64
  if (crb(c,2)) { goto L_800F0FA4; } // 800F0F68
  c->r[3]=c->r[1]+0x00000034u; // 800F0F6C
  c->r[4]=0u+0x00000004u; // 800F0F70
  c->lr=0x800F0F78u; f_80178B20(c); // 800F0F74
  cmps(c,0,(int32_t)c->r[3],0); // 800F0F78
  if (!crb(c,2)) { goto L_800F0FA4; } // 800F0F7C
  c->r[3]=c->r[1]+0x00000034u; // 800F0F80
  c->r[4]=0u+0x00000000u; // 800F0F84
  c->r[5]=0u+0x00000000u; // 800F0F88
  c->lr=0x800F0F90u; f_80178BC4(c); // 800F0F8C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0F90
  if (crb(c,2)) { goto L_800F0FA4; } // 800F0F94
  c->r[0]=0u+0x00000004u; // 800F0F98
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F0F9C
  W32(c->r[3]+0x00000004u,c->r[14]); // 800F0FA0
L_800F0FA4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F0FA4
  cmps(c,0,(int32_t)c->r[0],2); // 800F0FA8
  if (crb(c,2)) { goto L_800F0FB4; } // 800F0FAC
  goto L_800F0FB8; // 800F0FB0
L_800F0FB4:;
  c->r[19]=0u+0x00000000u; // 800F0FB4
L_800F0FB8:;
  cmps(c,0,(int32_t)c->r[19],0); // 800F0FB8
  if (crb(c,2)) { goto L_800F0FF4; } // 800F0FBC
  c->r[3]=c->r[1]+0x00000034u; // 800F0FC0
  c->r[4]=0u+0x00000001u; // 800F0FC4
  c->lr=0x800F0FCCu; f_80178B20(c); // 800F0FC8
  cmps(c,0,(int32_t)c->r[3],0); // 800F0FCC
  if (!crb(c,2)) { goto L_800F0FF4; } // 800F0FD0
  c->r[3]=c->r[1]+0x00000034u; // 800F0FD4
  c->r[4]=0u+0x00000000u; // 800F0FD8
  c->r[5]=0u+0x00000000u; // 800F0FDC
  c->lr=0x800F0FE4u; f_80178BC4(c); // 800F0FE0
  cmps(c,0,(int32_t)c->r[3],0); // 800F0FE4
  if (crb(c,2)) { goto L_800F0FF4; } // 800F0FE8
  W32(c->r[3]+0x00000000u,c->r[14]); // 800F0FEC
  W32(c->r[3]+0x00000004u,c->r[19]); // 800F0FF0
L_800F0FF4:;
  c->r[3]=c->r[25]|c->r[25]; // 800F0FF4
  c->r[4]=c->r[1]+0x0000003Cu; // 800F0FF8
  c->r[5]=c->r[27]+0x0000000Cu; // 800F0FFC
  c->lr=0x800F1004u; f_8006838C(c); // 800F1000
  c->r[3]=c->r[22]|c->r[22]; // 800F1004
  c->r[4]=c->r[1]+0x00000034u; // 800F1008
  c->r[5]=0u+0x00000001u; // 800F100C
  c->lr=0x800F1014u; f_80178F64(c); // 800F1010
  c->r[3]=c->r[15]|c->r[15]; // 800F1014
  c->r[4]=c->r[22]|c->r[22]; // 800F1018
  c->r[5]=0u+0x00000000u; // 800F101C
  c->lr=0x800F1024u; f_800EFC94(c); // 800F1020
  W32(c->r[27]+0x00000030u,c->r[3]); // 800F1024
  c->r[3]=R32(c->r[27]+0x00000030u); // 800F1028
  c->r[0]=c->r[3]+0x00010000u; // 800F102C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800F1030
  if (crb(c,2)) { goto L_800F10F0; } // 800F1034
  c->r[3]=R32(c->r[25]+0x000000D0u); // 800F1038
  c->r[0]=R32(c->r[27]+0x00000008u); // 800F103C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 800F1040
  c->r[4]=c->r[3]+c->r[0]; // 800F1044
  c->r[3]=R32(c->r[4]+0x0000019Cu); // 800F1048
  c->r[0]=c->r[3]+0x00000001u; // 800F104C
  W32(c->r[4]+0x0000019Cu,c->r[0]); // 800F1050
  c->r[3]=c->r[21]|c->r[21]; // 800F1054
  c->r[4]=c->r[27]|c->r[27]; // 800F1058
  c->lr=0x800F1060u; f_8028CC6C(c); // 800F105C
  c->r[3]=R32(c->r[25]+0x000000D0u); // 800F1060
  c->r[3]=c->r[3]+0x001F0000u; // 800F1064
  c->r[3]=c->r[3]+0x00005560u; // 800F1068
  c->r[4]=c->r[27]|c->r[27]; // 800F106C
  c->lr=0x800F1074u; f_8028CA70(c); // 800F1070
  cmps(c,0,(int32_t)c->r[17],0); // 800F1074
  if (crb(c,2)) { goto L_800F10E4; } // 800F1078
  c->r[3]=c->r[21]|c->r[21]; // 800F107C
  c->lr=0x800F1084u; f_8004B018(c); // 800F1080
  c->r[18]=c->r[3]|c->r[3]; // 800F1084
  goto L_800F10DC; // 800F1088
L_800F108C:;
  c->r[3]=c->r[21]|c->r[21]; // 800F108C
  c->r[4]=c->r[18]|c->r[18]; // 800F1090
  c->lr=0x800F1098u; f_8028CCD8(c); // 800F1094
  c->r[19]=c->r[3]|c->r[3]; // 800F1098
  c->r[3]=R32(c->r[25]+0x000000D0u); // 800F109C
  c->r[0]=R32(c->r[18]+0x00000008u); // 800F10A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 800F10A4
  c->r[3]=c->r[3]+c->r[0]; // 800F10A8
  c->r[0]=R32(c->r[3]+0x0000019Cu); // 800F10AC
  cmps(c,0,(int32_t)c->r[0],2); // 800F10B0
  if (crb(c,0)) { goto L_800F10D8; } // 800F10B4
  c->r[3]=c->r[21]|c->r[21]; // 800F10B8
  c->r[4]=c->r[18]|c->r[18]; // 800F10BC
  c->lr=0x800F10C4u; f_8028CC6C(c); // 800F10C0
  c->r[3]=R32(c->r[25]+0x000000D0u); // 800F10C4
  c->r[3]=c->r[3]+0x001F0000u; // 800F10C8
  c->r[3]=c->r[3]+0x00005560u; // 800F10CC
  c->r[4]=c->r[18]|c->r[18]; // 800F10D0
  c->lr=0x800F10D8u; f_8028CA70(c); // 800F10D4
L_800F10D8:;
  c->r[18]=c->r[19]|c->r[19]; // 800F10D8
L_800F10DC:;
  cmps(c,0,(int32_t)c->r[18],0); // 800F10DC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F108C; } // 800F10E0
L_800F10E4:;
  c->r[24]=c->r[24]+0x00000001u; // 800F10E4
L_800F10E8:;
  cmpu(c,0,c->r[24],c->r[16]); // 800F10E8
  if (crb(c,0)) { IRQCHK(c); goto L_800F0D78; } // 800F10EC
L_800F10F0:;
  c->r[11]=c->r[1]+0x00000110u; // 800F10F0
  c->lr=0x800F10F8u; f_802F0DE0(c); // 800F10F4
  c->r[0]=R32(c->r[1]+0x00000114u); // 800F10F8
  c->lr=c->r[0]; // 800F10FC
  c->r[1]=c->r[1]+0x00000110u; // 800F1100
  return; // 800F1104
}

// fn_800F1108
void f_800F1108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1108
  c->r[0]=c->lr; // 800F110C
  W32(c->r[1]+0x00000094u,c->r[0]); // 800F1110
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 800F1114
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 800F1118
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 800F111C
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 800F1120
  c->r[11]=c->r[1]+0x00000070u; // 800F1124
  c->lr=0x800F112Cu; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1128
  c->r[27]=c->r[3]|c->r[3]; // 800F112C
  c->r[16]=c->r[4]|c->r[4]; // 800F1130
  c->r[15]=c->r[5]|c->r[5]; // 800F1134
  c->r[28]=c->r[6]|c->r[6]; // 800F1138
  c->r[29]=c->r[7]|c->r[7]; // 800F113C
  c->lr=0x800F1144u; f_8007B524(c); // 800F1140
  c->lr=0x800F1148u; f_8006E224(c); // 800F1144
  c->lr=0x800F114Cu; f_800897A8(c); // 800F1148
  c->r[30]=c->r[3]|c->r[3]; // 800F114C
  c->r[3]=c->r[27]|c->r[27]; // 800F1150
  c->r[4]=c->r[16]|c->r[16]; // 800F1154
  c->r[5]=0u+0x00000001u; // 800F1158
  c->lr=0x800F1160u; f_800EFC94(c); // 800F115C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2296); // 800F1160
  c->r[3]=c->r[27]+c->r[0]; // 800F1164
  c->r[0]=c->r[3]+0x000000C0u; // 800F1168
  c->r[3]=c->r[27]+0x00020000u; // 800F116C
  W32(c->r[3]+0xFFFFB844u,c->r[0]); // 800F1170
  c->r[17]=0u+0x00000000u; // 800F1174
  W32(c->r[3]+0xFFFFB850u,c->r[17]); // 800F1178
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)24); // 800F117C
  c->r[16]=c->r[3]+c->r[0]; // 800F1180
  c->r[3]=c->r[16]+0xFFFFB858u; // 800F1184
  c->r[4]=c->r[15]|c->r[15]; // 800F1188
  c->lr=0x800F1190u; f_800670A8(c); // 800F118C
  c->r[3]=c->r[30]|c->r[30]; // 800F1190
  c->r[4]=c->r[16]+0xFFFFB860u; // 800F1194
  c->r[5]=c->r[16]+0xFFFFB858u; // 800F1198
  c->lr=0x800F11A0u; f_8006838C(c); // 800F119C
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F11A0
  {uint32_t ea=c->r[16]+0xFFFFB864u; WF32(ea,c->f[0]);} // 800F11A4
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F11A8
  {uint32_t ea=c->r[16]+0xFFFFB854u; WF32(ea,c->f[0]);} // 800F11AC
  c->r[3]=c->r[27]|c->r[27]; // 800F11B0
  c->r[4]=c->r[27]+0x00020000u; // 800F11B4
  c->r[4]=R32(c->r[4]+0xFFFFB844u); // 800F11B8
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F11BC
  c->r[5]=c->r[16]+0xFFFFB860u; // 800F11C0
  c->lr=0x800F11C8u; f_800F06E0(c); // 800F11C4
  c->r[4]=c->r[27]+0x00020000u; // 800F11C8
  c->r[3]=R32(c->r[4]+0xFFFFB850u); // 800F11CC
  c->r[0]=c->r[3]+0x00000001u; // 800F11D0
  W32(c->r[4]+0xFFFFB850u,c->r[0]); // 800F11D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800F11D8
  c->r[18]=c->r[4]+c->r[0]; // 800F11DC
  c->r[3]=c->r[1]+0x00000018u; // 800F11E0
  c->r[4]=c->r[15]|c->r[15]; // 800F11E4
  c->lr=0x800F11ECu; f_800670A8(c); // 800F11E8
  cmps(c,0,(int32_t)c->r[28],0); // 800F11EC
  if (crb(c,2)) { goto L_800F15D8; } // 800F11F0
  c->r[3]=c->r[27]+0x00020000u; // 800F11F4
  W32(c->r[3]+0xFFFFB8B4u,c->r[17]); // 800F11F8
  W32(c->r[3]+0xFFFFB8BCu,c->r[17]); // 800F11FC
  W32(c->r[3]+0xFFFFB8B8u,c->r[17]); // 800F1200
  c->r[16]=0u+0x00000000u; // 800F1204
  c->r[3]=rotl(c->r[28],1)&0x00000001u; // 800F1208
  c->r[0]=rotl(c->r[28],0)&0x00000001u; // 800F120C
  c->r[0]=c->r[0]^c->r[3]; // 800F1210
  c->r[17]=c->r[0]-c->r[3]; // 800F1214
  c->r[20]=0u+0x51EC0000u; // 800F1218
  {uint32_t ea=c->r[2]+0xFFFF89C0u; c->f[30]=RF64(ea);} // 800F121C
  c->r[21]=0u+0x43300000u; // 800F1220
  {uint32_t ea=c->r[2]+0xFFFF89ACu; c->f[31]=c->ps1[31]=RF32(ea);} // 800F1224
  c->r[25]=0u+0x00000007u; // 800F1228
  c->r[26]=0u+0x00000001u; // 800F122C
  c->r[24]=0u+0x00000005u; // 800F1230
  c->r[23]=0u+0x00000003u; // 800F1234
  c->r[22]=0u+0x80460000u; // 800F1238
  goto L_800F1404; // 800F123C
L_800F1240:;
  c->r[31]=0u+0x00000000u; // 800F1240
  c->r[3]=c->r[1]+0x00000010u; // 800F1244
  c->r[4]=c->r[1]+0x00000018u; // 800F1248
  c->lr=0x800F1250u; f_800670A8(c); // 800F124C
  c->r[3]=c->r[30]|c->r[30]; // 800F1250
  c->r[4]=c->r[1]+0x00000018u; // 800F1254
  c->r[5]=c->r[28]|c->r[28]; // 800F1258
  c->lr=0x800F1260u; f_80067910(c); // 800F125C
  c->r[3]=c->r[30]|c->r[30]; // 800F1260
  c->r[4]=c->r[1]+0x00000018u; // 800F1264
  c->r[5]=0u+0x00000000u; // 800F1268
  c->lr=0x800F1270u; f_80067A38(c); // 800F126C
  c->r[19]=c->r[3]|c->r[3]; // 800F1270
  cmps(c,0,(int32_t)c->r[3],0); // 800F1274
  if (crb(c,2)) { goto L_800F140C; } // 800F1278
  c->lr=0x800F1280u; f_8007B524(c); // 800F127C
  c->r[4]=c->r[1]+0x00000018u; // 800F1280
  c->lr=0x800F1288u; f_8009E8FC(c); // 800F1284
  cmps(c,0,(int32_t)c->r[3],0); // 800F1288
  if (crb(c,2)) { goto L_800F131C; } // 800F128C
  c->lr=0x800F1294u; f_8005C538(c); // 800F1290
  c->r[0]=c->r[20]+0xFFFF851Fu; // 800F1294
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 800F1298
  c->r[0]=sraw(c,c->r[0],5); // 800F129C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800F12A0
  c->r[0]=c->r[0]+c->r[4]; // 800F12A4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 800F12A8
  c->r[0]=c->r[3]-c->r[0]; // 800F12AC
  c->r[0]=c->r[0]^0x80000000u; // 800F12B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F12B4
  W32(c->r[1]+0x00000020u,c->r[21]); // 800F12B8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800F12BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800F12C0
  fcmp(c,0,c->f[0],c->f[31]); // 800F12C4
  if (!crb(c,0)) { goto L_800F131C; } // 800F12C8
  c->r[15]=0u+0x00000001u; // 800F12CC
  c->r[3]=c->r[27]+0x00020000u; // 800F12D0
  W32(c->r[3]+0xFFFFB8BCu,c->r[15]); // 800F12D4
  c->r[3]=c->r[18]+0xFFFFB858u; // 800F12D8
  c->r[4]=c->r[1]+0x00000018u; // 800F12DC
  c->lr=0x800F12E4u; f_800670A8(c); // 800F12E0
  c->r[3]=c->r[30]|c->r[30]; // 800F12E4
  c->r[4]=c->r[18]+0xFFFFB860u; // 800F12E8
  c->r[5]=c->r[18]+0xFFFFB858u; // 800F12EC
  c->lr=0x800F12F4u; f_8006838C(c); // 800F12F0
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F12F4
  {uint32_t ea=c->r[18]+0xFFFFB864u; WF32(ea,c->f[0]);} // 800F12F8
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F12FC
  {uint32_t ea=c->r[18]+0xFFFFB854u; WF32(ea,c->f[0]);} // 800F1300
  c->r[4]=c->r[27]+0x00020000u; // 800F1304
  W32(c->r[4]+0xFFFFB8B8u,c->r[15]); // 800F1308
  c->r[3]=R32(c->r[4]+0xFFFFB850u); // 800F130C
  c->r[0]=c->r[3]+0x00000001u; // 800F1310
  W32(c->r[4]+0xFFFFB850u,c->r[0]); // 800F1314
  goto L_800F1710; // 800F1318
L_800F131C:;
  c->r[0]=R32(c->r[19]+0x00000004u); // 800F131C
  cmps(c,0,(int32_t)c->r[0],2); // 800F1320
  if (!crb(c,2)) { goto L_800F1344; } // 800F1324
  c->r[0]=0u+0x00000001u; // 800F1328
  c->r[3]=c->r[27]+0x00020000u; // 800F132C
  W32(c->r[3]+0xFFFFB8B4u,c->r[0]); // 800F1330
  c->r[3]=c->r[1]+0x00000018u; // 800F1334
  c->r[4]=c->r[1]+0x00000010u; // 800F1338
  c->lr=0x800F1340u; f_800670A8(c); // 800F133C
  goto L_800F140C; // 800F1340
L_800F1344:;
  cmps(c,0,(int32_t)c->r[17],0); // 800F1344
  if (!crb(c,2)) { goto L_800F13DC; } // 800F1348
  cmps(c,0,(int32_t)c->r[28],0); // 800F134C
  if (crb(c,2)) { goto L_800F13DC; } // 800F1350
  cmpu(c,0,c->r[28],0x00000008u); // 800F1354
  if (crb(c,1)) { goto L_800F139C; } // 800F1358
  c->r[3]=c->r[22]+0x00001E90u; // 800F135C
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800F1360
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F1364
  c->ctr=c->r[3]; // 800F1368
  if (true) { switch (c->ctr) { case 0x800F1370u: goto L_800F1370; case 0x800F137Cu: goto L_800F137C; case 0x800F1388u: goto L_800F1388; case 0x800F1394u: goto L_800F1394; case 0x800F139Cu: goto L_800F139C; case 0x800F1460u: goto L_800F1460; case 0x800F1480u: goto L_800F1480; case 0x800F14A4u: goto L_800F14A4; case 0x800F14C4u: goto L_800F14C4; case 0x800F14E4u: goto L_800F14E4; case 0x800F1504u: goto L_800F1504; case 0x800F1528u: goto L_800F1528; case 0x800F1548u: goto L_800F1548; case 0x800F1564u: goto L_800F1564; default: break; } dispatch(c,c->ctr); return; } // 800F136C
L_800F1370:;
  W32(c->r[1]+0x00000008u,c->r[26]); // 800F1370
  W32(c->r[1]+0x0000000Cu,c->r[23]); // 800F1374
  goto L_800F139C; // 800F1378
L_800F137C:;
  W32(c->r[1]+0x00000008u,c->r[23]); // 800F137C
  W32(c->r[1]+0x0000000Cu,c->r[24]); // 800F1380
  goto L_800F139C; // 800F1384
L_800F1388:;
  W32(c->r[1]+0x00000008u,c->r[24]); // 800F1388
  W32(c->r[1]+0x0000000Cu,c->r[25]); // 800F138C
  goto L_800F139C; // 800F1390
L_800F1394:;
  W32(c->r[1]+0x00000008u,c->r[25]); // 800F1394
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 800F1398
L_800F139C:;
  c->r[15]=0u+0x00000000u; // 800F139C
  c->r[19]=c->r[1]+0x00000008u; // 800F13A0
L_800F13A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F13A4
  c->r[4]=c->r[1]+0x00000018u; // 800F13A8
  c->r[5]=R32(c->r[19]+0x00000000u); // 800F13AC
  c->lr=0x800F13B4u; f_80067A38(c); // 800F13B0
  cmps(c,0,(int32_t)c->r[3],0); // 800F13B4
  if (crb(c,2)) { goto L_800F13CC; } // 800F13B8
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F13BC
  cmps(c,0,(int32_t)c->r[0],2); // 800F13C0
  if (!crb(c,2)) { goto L_800F13CC; } // 800F13C4
  c->r[31]=c->r[31]+0x00000001u; // 800F13C8
L_800F13CC:;
  c->r[19]=c->r[19]+0x00000004u; // 800F13CC
  c->r[15]=c->r[15]+0x00000001u; // 800F13D0
  cmpu(c,0,c->r[15],0x00000002u); // 800F13D4
  if (crb(c,0)) { IRQCHK(c); goto L_800F13A4; } // 800F13D8
L_800F13DC:;
  cmpu(c,0,c->r[31],0x00000002u); // 800F13DC
  if (!crb(c,2)) { goto L_800F1400; } // 800F13E0
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 800F13E4
  cmpu(c,0,c->r[16],c->r[0]); // 800F13E8
  if (!crb(c,0)) { goto L_800F140C; } // 800F13EC
  c->r[0]=0u+0x00000001u; // 800F13F0
  c->r[3]=c->r[27]+0x00020000u; // 800F13F4
  W32(c->r[3]+0xFFFFB8B4u,c->r[0]); // 800F13F8
  goto L_800F140C; // 800F13FC
L_800F1400:;
  c->r[16]=c->r[16]+0x00000001u; // 800F1400
L_800F1404:;
  cmpu(c,0,c->r[16],c->r[29]); // 800F1404
  if (crb(c,0)) { IRQCHK(c); goto L_800F1240; } // 800F1408
L_800F140C:;
  c->r[3]=c->r[18]+0xFFFFB858u; // 800F140C
  c->r[4]=c->r[1]+0x00000018u; // 800F1410
  c->lr=0x800F1418u; f_800670A8(c); // 800F1414
  {uint32_t ea=c->r[2]+0xFFFF89A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1418
  {uint32_t ea=c->r[18]+0xFFFFB854u; WF32(ea,c->f[0]);} // 800F141C
  c->r[3]=c->r[30]|c->r[30]; // 800F1420
  c->r[4]=c->r[18]+0xFFFFB860u; // 800F1424
  c->r[5]=c->r[18]+0xFFFFB858u; // 800F1428
  c->lr=0x800F1430u; f_8006838C(c); // 800F142C
  c->r[3]=c->r[27]+0x00020000u; // 800F1430
  c->r[0]=R32(c->r[3]+0xFFFFB8B4u); // 800F1434
  cmps(c,0,(int32_t)c->r[0],0); // 800F1438
  if (crb(c,2)) { goto L_800F15C8; } // 800F143C
  cmpu(c,0,c->r[28],0x00000008u); // 800F1440
  if (crb(c,1)) { goto L_800F1564; } // 800F1444
  c->r[3]=0u+0x80460000u; // 800F1448
  c->r[3]=c->r[3]+0x00001E6Cu; // 800F144C
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 800F1450
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F1454
  c->ctr=c->r[3]; // 800F1458
  if (true) { switch (c->ctr) { case 0x800F1370u: goto L_800F1370; case 0x800F137Cu: goto L_800F137C; case 0x800F1388u: goto L_800F1388; case 0x800F1394u: goto L_800F1394; case 0x800F139Cu: goto L_800F139C; case 0x800F1460u: goto L_800F1460; case 0x800F1480u: goto L_800F1480; case 0x800F14A4u: goto L_800F14A4; case 0x800F14C4u: goto L_800F14C4; case 0x800F14E4u: goto L_800F14E4; case 0x800F1504u: goto L_800F1504; case 0x800F1528u: goto L_800F1528; case 0x800F1548u: goto L_800F1548; case 0x800F1564u: goto L_800F1564; default: break; } dispatch(c,c->ctr); return; } // 800F145C
L_800F1460:;
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1460
  c->r[3]=0u+0x804C0000u; // 800F1464
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 800F1468
  c->r[3]=c->r[3]+0x000025D0u; // 800F146C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F1470
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1474
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800F1478
  goto L_800F1564; // 800F147C
L_800F1480:;
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1480
  c->r[3]=0u+0x804C0000u; // 800F1484
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 800F1488
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F148C
  c->r[3]=c->r[3]+0x000025D0u; // 800F1490
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F1494
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1498
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800F149C
  goto L_800F1564; // 800F14A0
L_800F14A4:;
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F14A4
  c->r[3]=0u+0x804C0000u; // 800F14A8
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 800F14AC
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F14B0
  c->r[3]=c->r[3]+0x000025D0u; // 800F14B4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F14B8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800F14BC
  goto L_800F1564; // 800F14C0
L_800F14C4:;
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F14C4
  c->r[3]=0u+0x804C0000u; // 800F14C8
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[1]);} // 800F14CC
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F14D0
  c->r[3]=c->r[3]+0x000025D0u; // 800F14D4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F14D8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800F14DC
  goto L_800F1564; // 800F14E0
L_800F14E4:;
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F14E4
  c->r[3]=0u+0x804C0000u; // 800F14E8
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 800F14EC
  c->r[3]=c->r[3]+0x000025D0u; // 800F14F0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F14F4
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F14F8
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800F14FC
  goto L_800F1564; // 800F1500
L_800F1504:;
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1504
  c->r[3]=0u+0x804C0000u; // 800F1508
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 800F150C
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1510
  c->r[3]=c->r[3]+0x000025D0u; // 800F1514
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F1518
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F151C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800F1520
  goto L_800F1564; // 800F1524
L_800F1528:;
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1528
  c->r[3]=0u+0x804C0000u; // 800F152C
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[0]);} // 800F1530
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1534
  c->r[3]=c->r[3]+0x000025D0u; // 800F1538
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F153C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 800F1540
  goto L_800F1564; // 800F1544
L_800F1548:;
  {uint32_t ea=c->r[2]+0xFFFF89B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F1548
  c->r[3]=0u+0x804C0000u; // 800F154C
  {uint32_t ea=c->r[3]+0x000025D0u; WF32(ea,c->f[1]);} // 800F1550
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1554
  c->r[3]=c->r[3]+0x000025D0u; // 800F1558
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F155C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 800F1560
L_800F1564:;
  c->r[15]=0u+0x804C0000u; // 800F1564
  c->r[3]=c->r[15]+0x000025D0u; // 800F1568
  c->r[4]=c->r[3]|c->r[3]; // 800F156C
  c->lr=0x800F1574u; f_8005C110(c); // 800F1570
  cmpu(c,0,c->r[31],0x00000002u); // 800F1574
  if (crb(c,2)) { goto L_800F1598; } // 800F1578
  cmps(c,0,(int32_t)c->r[17],0); // 800F157C
  if (!crb(c,2)) { goto L_800F1598; } // 800F1580
  c->r[3]=c->r[15]+0x000025D0u; // 800F1584
  c->r[4]=c->r[3]|c->r[3]; // 800F1588
  {uint32_t ea=c->r[2]+0xFFFF89B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F158C
  c->lr=0x800F1594u; f_8004E330(c); // 800F1590
  goto L_800F15AC; // 800F1594
L_800F1598:;
  c->r[3]=0u+0x804C0000u; // 800F1598
  c->r[3]=c->r[3]+0x000025D0u; // 800F159C
  c->r[4]=c->r[3]|c->r[3]; // 800F15A0
  {uint32_t ea=c->r[2]+0xFFFF89A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F15A4
  c->lr=0x800F15ACu; f_8004E330(c); // 800F15A8
L_800F15AC:;
  c->r[3]=c->r[18]+0xFFFFB860u; // 800F15AC
  c->r[4]=c->r[3]|c->r[3]; // 800F15B0
  c->r[5]=0u+0x804C0000u; // 800F15B4
  c->r[5]=c->r[5]+0x000025D0u; // 800F15B8
  c->lr=0x800F15C0u; f_8005C194(c); // 800F15BC
  {uint32_t ea=c->r[2]+0xFFFF89A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F15C0
  {uint32_t ea=c->r[18]+0xFFFFB864u; WF32(ea,c->f[0]);} // 800F15C4
L_800F15C8:;
  c->r[4]=c->r[27]+0x00020000u; // 800F15C8
  c->r[3]=R32(c->r[4]+0xFFFFB850u); // 800F15CC
  c->r[0]=c->r[3]+0x00000001u; // 800F15D0
  W32(c->r[4]+0xFFFFB850u,c->r[0]); // 800F15D4
L_800F15D8:;
  c->r[3]=c->r[27]+0x00020000u; // 800F15D8
  c->r[0]=R32(c->r[3]+0xFFFFB850u); // 800F15DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800F15E0
  c->r[15]=c->r[3]+c->r[0]; // 800F15E4
  c->r[3]=c->r[30]|c->r[30]; // 800F15E8
  c->r[4]=c->r[1]+0x00000018u; // 800F15EC
  c->r[5]=0u+0x00000000u; // 800F15F0
  c->lr=0x800F15F8u; f_80067A38(c); // 800F15F4
  cmps(c,0,(int32_t)c->r[3],0); // 800F15F8
  if (!crb(c,2)) { goto L_800F161C; } // 800F15FC
  c->r[3]=c->r[15]+0xFFFFB858u; // 800F1600
  c->r[4]=c->r[1]+0x00000018u; // 800F1604
  c->lr=0x800F160Cu; f_800670A8(c); // 800F1608
  c->r[0]=0u+0x00000001u; // 800F160C
  c->r[3]=c->r[27]+0x00020000u; // 800F1610
  W32(c->r[3]+0xFFFFB8B8u,c->r[0]); // 800F1614
  goto L_800F1710; // 800F1618
L_800F161C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F161C
  cmps(c,0,(int32_t)c->r[0],0); // 800F1620
  if (!crb(c,2)) { goto L_800F1644; } // 800F1624
  c->r[3]=c->r[15]+0xFFFFB858u; // 800F1628
  c->r[4]=c->r[1]+0x00000018u; // 800F162C
  c->lr=0x800F1634u; f_800670A8(c); // 800F1630
  c->r[0]=0u+0x00000001u; // 800F1634
  c->r[3]=c->r[27]+0x00020000u; // 800F1638
  W32(c->r[3]+0xFFFFB8B8u,c->r[0]); // 800F163C
  goto L_800F1710; // 800F1640
L_800F1644:;
  c->r[3]=c->r[27]|c->r[27]; // 800F1644
  c->r[4]=c->r[15]+0xFFFFB858u; // 800F1648
  c->r[5]=c->r[1]+0x00000018u; // 800F164C
  c->r[6]=0u+0x00000000u; // 800F1650
  c->r[7]=0u+0x00000000u; // 800F1654
  c->r[8]=0u+0x00000001u; // 800F1658
  c->lr=0x800F1660u; f_800F02AC(c); // 800F165C
  c->r[3]=c->r[27]+0x00020000u; // 800F1660
  c->r[0]=R32(c->r[3]+0xFFFFB8B4u); // 800F1664
  cmps(c,0,(int32_t)c->r[0],0); // 800F1668
  if (!crb(c,2)) { goto L_800F1690; } // 800F166C
  c->r[3]=R32(c->r[15]+0xFFFFB858u); // 800F1670
  c->r[0]=R32(c->r[1]+0x00000018u); // 800F1674
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800F1678
  if (!crb(c,2)) { goto L_800F1690; } // 800F167C
  c->r[3]=R32(c->r[15]+0xFFFFB85Cu); // 800F1680
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800F1684
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800F1688
  if (crb(c,2)) { goto L_800F1710; } // 800F168C
L_800F1690:;
  c->r[0]=R32(c->r[15]+0xFFFFB858u); // 800F1690
  cmps(c,0,(int32_t)c->r[0],-1); // 800F1694
  if (!crb(c,2)) { goto L_800F16C0; } // 800F1698
  c->r[0]=R32(c->r[15]+0xFFFFB85Cu); // 800F169C
  cmps(c,0,(int32_t)c->r[0],-1); // 800F16A0
  if (!crb(c,2)) { goto L_800F16C0; } // 800F16A4
  c->r[3]=c->r[15]+0xFFFFB858u; // 800F16A8
  c->r[4]=c->r[1]+0x00000018u; // 800F16AC
  c->lr=0x800F16B4u; f_800670A8(c); // 800F16B0
  c->r[0]=0u+0x00000001u; // 800F16B4
  c->r[3]=c->r[27]+0x00020000u; // 800F16B8
  W32(c->r[3]+0xFFFFB8B8u,c->r[0]); // 800F16BC
L_800F16C0:;
  {uint32_t ea=c->r[2]+0xFFFF89B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F16C0
  {uint32_t ea=c->r[15]+0xFFFFB854u; WF32(ea,c->f[0]);} // 800F16C4
  c->r[3]=c->r[30]|c->r[30]; // 800F16C8
  c->r[4]=c->r[15]+0xFFFFB860u; // 800F16CC
  c->r[5]=c->r[15]+0xFFFFB858u; // 800F16D0
  c->lr=0x800F16D8u; f_8006838C(c); // 800F16D4
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F16D8
  {uint32_t ea=c->r[15]+0xFFFFB864u; WF32(ea,c->f[0]);} // 800F16DC
  c->r[4]=c->r[27]+0x00020000u; // 800F16E0
  c->r[3]=R32(c->r[4]+0xFFFFB850u); // 800F16E4
  c->r[0]=c->r[3]+0x00000001u; // 800F16E8
  W32(c->r[4]+0xFFFFB850u,c->r[0]); // 800F16EC
  c->r[3]=c->r[27]|c->r[27]; // 800F16F0
  c->r[4]=0u+0x00000000u; // 800F16F4
  c->lr=0x800F16FCu; f_800EFC40(c); // 800F16F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F16FC
  if (!crb(c,2)) { goto L_800F1710; } // 800F1700
  c->r[0]=0u+0x00000001u; // 800F1704
  c->r[3]=c->r[27]+0x00020000u; // 800F1708
  W32(c->r[3]+0xFFFFB8B8u,c->r[0]); // 800F170C
L_800F1710:;
  c->r[15]=0u+0x804C0000u; // 800F1710
  c->r[3]=c->r[15]+0x000025D0u; // 800F1714
  c->r[4]=c->r[27]+0x00020000u; // 800F1718
  c->r[4]=c->r[4]+0xFFFFB878u; // 800F171C
  c->r[5]=c->r[27]+0x00020000u; // 800F1720
  c->r[5]=c->r[5]+0xFFFFB860u; // 800F1724
  c->lr=0x800F172Cu; f_8006000C(c); // 800F1728
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F172C
  c->r[3]=c->r[15]+0x000025D0u; // 800F1730
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800F1734
  c->lr=0x800F173Cu; f_8005C170(c); // 800F1738
  {uint32_t ea=c->r[13]+0xFFFFB848u; WF32(ea,c->f[1]);} // 800F173C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800F1740
  {uint32_t ea=c->r[2]+0xFFFF89BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1744
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800F1748
  {uint32_t ea=c->r[2]+0xFFFF8990u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F174C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800F1750
  c->r[3]=c->r[27]+0x00020000u; // 800F1754
  {uint32_t ea=c->r[3]+0xFFFFB8C4u; WF32(ea,c->f[0]);} // 800F1758
  cmps(c,0,(int32_t)c->r[28],0); // 800F175C
  if (!crb(c,2)) { goto L_800F1768; } // 800F1760
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; WF32(ea,c->f[1]);} // 800F1764
L_800F1768:;
  {uint32_t ea=c->r[2]+0xFFFF8998u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F1768
  c->r[3]=c->r[27]+0x00020000u; // 800F176C
  {uint32_t ea=c->r[3]+0xFFFFB8C0u; WF32(ea,c->f[0]);} // 800F1770
  c->r[0]=0u+0x00000001u; // 800F1774
  W32(c->r[3]+0xFFFFB848u,c->r[0]); // 800F1778
  c->r[0]=0u+0x00000000u; // 800F177C
  W32(c->r[3]+0xFFFFB84Cu,c->r[0]); // 800F1780
  c->r[0]=0u+0x00000088u; // 800F1784
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 800F1788
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 800F178C
  c->r[0]=0u+0x00000078u; // 800F1790
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 800F1794
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 800F1798
  c->r[11]=c->r[1]+0x00000070u; // 800F179C
  c->lr=0x800F17A4u; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F17A0
  c->r[0]=R32(c->r[1]+0x00000094u); // 800F17A4
  c->lr=c->r[0]; // 800F17A8
  c->r[1]=c->r[1]+0x00000090u; // 800F17AC
  return; // 800F17B0
}

// fn_800F17B4
void f_800F17B4(Ctx* __restrict c) {
  c->r[5]=c->r[3]+0x00020000u; // 800F17B4
  c->r[0]=R32(c->r[5]+0xFFFFB848u); // 800F17B8
  cmps(c,0,(int32_t)c->r[0],0); // 800F17BC
  if (!crb(c,2)) { goto L_800F17D0; } // 800F17C0
  c->r[0]=0u+0x00000001u; // 800F17C4
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F17C8
  goto L_800F17D8; // 800F17CC
L_800F17D0:;
  c->r[0]=0u+0x00000000u; // 800F17D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F17D4
L_800F17D8:;
  c->r[5]=c->r[3]+0x00020000u; // 800F17D8
  c->r[0]=R32(c->r[5]+0xFFFFB8BCu); // 800F17DC
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F17E0
  c->r[3]=c->r[4]+0x00000008u; // 800F17E4
  c->r[4]=R32(c->r[5]+0xFFFFB850u); // 800F17E8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F17EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800F17F0
  c->r[4]=c->r[5]+c->r[0]; // 800F17F4
  c->r[4]=c->r[4]+0xFFFFB858u; // 800F17F8
  f_800670A8(c); return; // 800F17FC
}

// fn_800F1800
void f_800F1800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1800
  c->r[0]=c->lr; // 800F1804
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1808
  c->lr=0x800F1810u; f_800F0724(c); // 800F180C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1810
  if (crb(c,2)) { goto L_800F1820; } // 800F1814
  c->r[3]=R32(c->r[3]+0x00000000u); // 800F1818
  goto L_800F1824; // 800F181C
L_800F1820:;
  c->r[3]=0u+0xFFFFFFFFu; // 800F1820
L_800F1824:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1824
  c->lr=c->r[0]; // 800F1828
  c->r[1]=c->r[1]+0x00000010u; // 800F182C
  return; // 800F1830
}

// fn_800F1834
void f_800F1834(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00020000u; // 800F1834
  c->r[3]=c->r[3]+0x00005120u; // 800F1838
  return; // 800F183C
}

// dtor_800F1840
void f_800F1840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1840
  c->r[0]=c->lr; // 800F1844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F184C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1850
  c->r[30]=c->r[3]|c->r[3]; // 800F1854
  c->r[31]=c->r[4]|c->r[4]; // 800F1858
  cmps(c,0,(int32_t)c->r[3],0); // 800F185C
  if (crb(c,2)) { goto L_800F1880; } // 800F1860
  c->r[4]=0u+0xFFFFFFFFu; // 800F1864
  c->lr=0x800F186Cu; f_800F1A14(c); // 800F1868
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F186C
  cmps(c,0,(int32_t)c->r[0],0); // 800F1870
  if (!crb(c,1)) { goto L_800F1880; } // 800F1874
  c->r[3]=c->r[30]|c->r[30]; // 800F1878
  c->lr=0x800F1880u; f_80047B20(c); // 800F187C
L_800F1880:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1884
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1888
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F188C
  c->lr=c->r[0]; // 800F1890
  c->r[1]=c->r[1]+0x00000010u; // 800F1894
  return; // 800F1898
}

// fn_800F189C
void f_800F189C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F189C
  c->r[0]=c->lr; // 800F18A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F18A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F18A8
  c->r[31]=c->r[3]|c->r[3]; // 800F18AC
  c->lr=0x800F18B4u; f_800F19A4(c); // 800F18B0
  c->r[3]=c->r[31]|c->r[31]; // 800F18B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F18B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F18BC
  c->lr=c->r[0]; // 800F18C0
  c->r[1]=c->r[1]+0x00000010u; // 800F18C4
  return; // 800F18C8
}

// fn_800F18CC
void f_800F18CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F18CC
  c->r[0]=c->lr; // 800F18D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F18D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F18D8
  c->r[31]=c->r[3]|c->r[3]; // 800F18DC
  c->r[3]=c->r[3]+0x0000000Cu; // 800F18E0
  c->lr=0x800F18E8u; f_8004B0A4(c); // 800F18E4
  c->r[3]=c->r[31]|c->r[31]; // 800F18E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F18EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F18F0
  c->lr=c->r[0]; // 800F18F4
  c->r[1]=c->r[1]+0x00000010u; // 800F18F8
  return; // 800F18FC
}

// fn_800F1900
void f_800F1900(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 800F1900
  return; // 800F1904
}

// dtor_800F1908
void f_800F1908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1908
  c->r[0]=c->lr; // 800F190C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1914
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1918
  c->r[30]=c->r[3]|c->r[3]; // 800F191C
  c->r[31]=c->r[4]|c->r[4]; // 800F1920
  cmps(c,0,(int32_t)c->r[3],0); // 800F1924
  if (crb(c,2)) { goto L_800F194C; } // 800F1928
  c->r[3]=c->r[3]+0x0000000Cu; // 800F192C
  c->r[4]=0u+0xFFFFFFFFu; // 800F1930
  c->lr=0x800F1938u; f_800F1A14(c); // 800F1934
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F1938
  cmps(c,0,(int32_t)c->r[0],0); // 800F193C
  if (!crb(c,1)) { goto L_800F194C; } // 800F1940
  c->r[3]=c->r[30]|c->r[30]; // 800F1944
  c->lr=0x800F194Cu; f_80047B20(c); // 800F1948
L_800F194C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F194C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1950
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1958
  c->lr=c->r[0]; // 800F195C
  c->r[1]=c->r[1]+0x00000010u; // 800F1960
  return; // 800F1964
}

// fn_800F1968
void f_800F1968(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1968
  c->r[0]=c->lr; // 800F196C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1970
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1974
  c->r[31]=c->r[3]|c->r[3]; // 800F1978
  c->r[3]=c->r[3]+0x0000000Cu; // 800F197C
  c->lr=0x800F1984u; f_800F19A4(c); // 800F1980
  c->r[3]=c->r[31]+0x000008E4u; // 800F1984
  c->lr=0x800F198Cu; f_8004B0A4(c); // 800F1988
  c->r[3]=c->r[31]|c->r[31]; // 800F198C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1990
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1994
  c->lr=c->r[0]; // 800F1998
  c->r[1]=c->r[1]+0x00000010u; // 800F199C
  return; // 800F19A0
}

// fn_800F19A4
void f_800F19A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F19A4
  c->r[0]=c->lr; // 800F19A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F19AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F19B0
  c->r[31]=c->r[3]|c->r[3]; // 800F19B4
  c->lr=0x800F19BCu; f_80077934(c); // 800F19B8
  c->r[3]=0u+0x80460000u; // 800F19BC
  c->r[3]=c->r[3]+0x00001F08u; // 800F19C0
  W32(c->r[31]+0x00000020u,c->r[3]); // 800F19C4
  c->r[0]=c->r[3]+0x0000000Cu; // 800F19C8
  W32(c->r[31]+0x00000288u,c->r[0]); // 800F19CC
  c->r[0]=c->r[3]+0x00000018u; // 800F19D0
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 800F19D4
  c->r[0]=c->r[3]+0x00000024u; // 800F19D8
  W32(c->r[31]+0x000002B0u,c->r[0]); // 800F19DC
  c->r[0]=c->r[3]+0x00000030u; // 800F19E0
  W32(c->r[31]+0x00000300u,c->r[0]); // 800F19E4
  c->r[0]=0u+0x00000000u; // 800F19E8
  W32(c->r[31]+0x000008B8u,c->r[0]); // 800F19EC
  {uint32_t ea=c->r[2]+0xFFFF89C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F19F0
  {uint32_t ea=c->r[31]+0x000008BCu; WF32(ea,c->f[0]);} // 800F19F4
  {uint32_t ea=c->r[31]+0x000008C0u; WF32(ea,c->f[0]);} // 800F19F8
  c->r[3]=c->r[31]|c->r[31]; // 800F19FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1A00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1A04
  c->lr=c->r[0]; // 800F1A08
  c->r[1]=c->r[1]+0x00000010u; // 800F1A0C
  return; // 800F1A10
}

// dtor_800F1A14
void f_800F1A14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1A14
  c->r[0]=c->lr; // 800F1A18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1A1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1A20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1A24
  c->r[30]=c->r[3]|c->r[3]; // 800F1A28
  c->r[31]=c->r[4]|c->r[4]; // 800F1A2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F1A30
  if (crb(c,2)) { goto L_800F1A54; } // 800F1A34
  c->r[4]=0u+0x00000000u; // 800F1A38
  c->lr=0x800F1A40u; f_800779D0(c); // 800F1A3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F1A40
  cmps(c,0,(int32_t)c->r[0],0); // 800F1A44
  if (!crb(c,1)) { goto L_800F1A54; } // 800F1A48
  c->r[3]=c->r[30]|c->r[30]; // 800F1A4C
  c->lr=0x800F1A54u; f_80047B20(c); // 800F1A50
L_800F1A54:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1A54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1A58
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1A5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1A60
  c->lr=c->r[0]; // 800F1A64
  c->r[1]=c->r[1]+0x00000010u; // 800F1A68
  return; // 800F1A6C
}

// fn_800F1A70
void f_800F1A70(Ctx* __restrict c) {
  W32(c->r[3]+0x000008B4u,c->r[4]); // 800F1A70
  return; // 800F1A74
}

// fn_800F1A78
void f_800F1A78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1A78
  c->r[0]=c->lr; // 800F1A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1A80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1A84
  c->r[31]=c->r[3]|c->r[3]; // 800F1A88
  c->r[4]=0u+0x00000000u; // 800F1A8C
  c->lr=0x800F1A94u; f_800F1A70(c); // 800F1A90
  c->r[3]=c->r[31]|c->r[31]; // 800F1A94
  c->r[4]=0u+0x00000001u; // 800F1A98
  c->lr=0x800F1AA0u; f_800F1B40(c); // 800F1A9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1AA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1AA4
  c->lr=c->r[0]; // 800F1AA8
  c->r[1]=c->r[1]+0x00000010u; // 800F1AAC
  return; // 800F1AB0
}

// fn_800F1AB4
void f_800F1AB4(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F1AB4
  c->r[12]=R32(c->r[12]+0x00000044u); // 800F1AB8
  c->ctr=c->r[12]; // 800F1ABC
  if (true) { dispatch(c,c->ctr); return; } // 800F1AC0
}

// fn_800F1AC4
void f_800F1AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1AC4
  c->r[0]=c->lr; // 800F1AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1AD0
  c->r[31]=c->r[3]|c->r[3]; // 800F1AD4
  c->r[0]=R32(c->r[3]+0x00000890u); // 800F1AD8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F1ADC
  c->r[4]=0u+0x80430000u; // 800F1AE0
  c->r[0]=c->r[4]+0xFFFFE068u; // 800F1AE4
  c->r[12]=c->r[0]+c->r[5]; // 800F1AE8
  c->lr=0x800F1AF0u; f_802F09D0(c); // 800F1AEC
  c->r[0]=c->r[0]|0x00000000u; // 800F1AF0
  c->r[3]=c->r[31]|c->r[31]; // 800F1AF4
  c->lr=0x800F1AFCu; f_800F1AB4(c); // 800F1AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1B00
  c->lr=c->r[0]; // 800F1B04
  c->r[1]=c->r[1]+0x00000010u; // 800F1B08
  return; // 800F1B0C
}

// fn_800F1B10
void f_800F1B10(Ctx* __restrict c) {
  return; // 800F1B10
}

// fn_800F1B14
void f_800F1B14(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 800F1B14
  f_800F1B40(c); return; // 800F1B18
}

// fn_800F1B1C
void f_800F1B1C(Ctx* __restrict c) {
  return; // 800F1B1C
}

// fn_800F1B20
void f_800F1B20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 800F1B20
  f_800F1A14(c); return; // 800F1B24
}

// fn_800F1B28
void f_800F1B28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 800F1B28
  f_800F1A14(c); return; // 800F1B2C
}

// fn_800F1B30
void f_800F1B30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 800F1B30
  f_800F1A14(c); return; // 800F1B34
}

// fn_800F1B38
void f_800F1B38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 800F1B38
  f_800F1A14(c); return; // 800F1B3C
}

// fn_800F1B40
void f_800F1B40(Ctx* __restrict c) {
  W32(c->r[3]+0x00000890u,c->r[4]); // 800F1B40
  return; // 800F1B44
}

// fn_800F1B48
void f_800F1B48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B48
  c->r[0]=c->lr; // 800F1B4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1B54
  c->r[31]=c->r[3]|c->r[3]; // 800F1B58
  c->r[3]=c->r[3]+0x0000000Cu; // 800F1B5C
  c->r[4]=0u+0x80050000u; // 800F1B60
  c->r[4]=c->r[4]+0x000059A4u; // 800F1B64
  c->r[5]=0u+0x80050000u; // 800F1B68
  c->r[5]=c->r[5]+0x00005A10u; // 800F1B6C
  c->r[6]=0u+0x000000D0u; // 800F1B70
  c->r[7]=0u+0x00000008u; // 800F1B74
  c->lr=0x800F1B7Cu; f_802F07B0(c); // 800F1B78
  c->r[3]=c->r[31]|c->r[31]; // 800F1B7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1B80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1B84
  c->lr=c->r[0]; // 800F1B88
  c->r[1]=c->r[1]+0x00000010u; // 800F1B8C
  return; // 800F1B90
}

// dtor_800F1B94
void f_800F1B94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B94
  c->r[0]=c->lr; // 800F1B98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1BA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1BA4
  c->r[30]=c->r[3]|c->r[3]; // 800F1BA8
  c->r[31]=c->r[4]|c->r[4]; // 800F1BAC
  cmps(c,0,(int32_t)c->r[3],0); // 800F1BB0
  if (crb(c,2)) { goto L_800F1BE4; } // 800F1BB4
  c->r[3]=c->r[3]+0x0000000Cu; // 800F1BB8
  c->r[4]=0u+0x80050000u; // 800F1BBC
  c->r[4]=c->r[4]+0x00005A10u; // 800F1BC0
  c->r[5]=0u+0x000000D0u; // 800F1BC4
  c->r[6]=0u+0x00000008u; // 800F1BC8
  c->lr=0x800F1BD0u; f_802F08A8(c); // 800F1BCC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F1BD0
  cmps(c,0,(int32_t)c->r[0],0); // 800F1BD4
  if (!crb(c,1)) { goto L_800F1BE4; } // 800F1BD8
  c->r[3]=c->r[30]|c->r[30]; // 800F1BDC
  c->lr=0x800F1BE4u; f_80047B20(c); // 800F1BE0
L_800F1BE4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F1BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1BE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1BF0
  c->lr=c->r[0]; // 800F1BF4
  c->r[1]=c->r[1]+0x00000010u; // 800F1BF8
  return; // 800F1BFC
}

// fn_800F1C00
void f_800F1C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1C00
  c->r[0]=c->lr; // 800F1C04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1C08
  c->r[11]=c->r[1]+0x00000020u; // 800F1C0C
  c->lr=0x800F1C14u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1C10
  c->r[27]=c->r[3]|c->r[3]; // 800F1C14
  c->r[28]=c->r[5]|c->r[5]; // 800F1C18
  c->r[29]=c->r[6]|c->r[6]; // 800F1C1C
  c->r[0]=0u+0x00000000u; // 800F1C20
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F1C24
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F1C28
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F1C2C
  c->r[30]=0u+0x00000000u; // 800F1C30
  c->r[31]=c->r[3]+0x0000000Cu; // 800F1C34
L_800F1C38:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1C38
  c->r[4]=0u+0x00000100u; // 800F1C3C
  c->r[5]=0u+0x00000000u; // 800F1C40
  c->r[6]=0u+0x00000000u; // 800F1C44
  c->r[7]=c->r[29]|c->r[29]; // 800F1C48
  c->lr=0x800F1C50u; f_80055B14(c); // 800F1C4C
  c->r[3]=c->r[31]|c->r[31]; // 800F1C50
  c->r[4]=c->r[28]|c->r[28]; // 800F1C54
  c->lr=0x800F1C5Cu; f_80055FEC(c); // 800F1C58
  c->r[3]=c->r[31]|c->r[31]; // 800F1C5C
  c->r[4]=R32(c->r[27]+0x00000000u); // 800F1C60
  c->lr=0x800F1C68u; f_80055FDC(c); // 800F1C64
  c->r[31]=c->r[31]+0x000000D0u; // 800F1C68
  c->r[30]=c->r[30]+0x00000001u; // 800F1C6C
  cmps(c,0,(int32_t)c->r[30],8); // 800F1C70
  if (crb(c,0)) { IRQCHK(c); goto L_800F1C38; } // 800F1C74
  c->r[11]=c->r[1]+0x00000020u; // 800F1C78
  c->lr=0x800F1C80u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1C7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1C80
  c->lr=c->r[0]; // 800F1C84
  c->r[1]=c->r[1]+0x00000020u; // 800F1C88
  return; // 800F1C8C
}

// fn_800F1C90
void f_800F1C90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1C90
  c->r[0]=c->lr; // 800F1C94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1C98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1C9C
  c->r[31]=c->r[3]|c->r[3]; // 800F1CA0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F1CA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)208); // 800F1CA8
  c->r[3]=c->r[3]+c->r[0]; // 800F1CAC
  c->r[3]=c->r[3]+0x0000000Cu; // 800F1CB0
  c->lr=0x800F1CB8u; f_800560B0(c); // 800F1CB4
  c->r[3]=R32(c->r[31]+0x00000008u); // 800F1CB8
  c->r[0]=c->r[3]+0x00000001u; // 800F1CBC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800F1CC0
  cmps(c,0,(int32_t)c->r[0],256); // 800F1CC4
  if (crb(c,0)) { goto L_800F1CE0; } // 800F1CC8
  c->r[0]=0u+0x00000000u; // 800F1CCC
  W32(c->r[31]+0x00000008u,c->r[0]); // 800F1CD0
  c->r[3]=R32(c->r[31]+0x00000004u); // 800F1CD4
  c->r[0]=c->r[3]+0x00000001u; // 800F1CD8
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1CDC
L_800F1CE0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1CE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1CE4
  c->lr=c->r[0]; // 800F1CE8
  c->r[1]=c->r[1]+0x00000010u; // 800F1CEC
  return; // 800F1CF0
}

// fn_800F1CF4
void f_800F1CF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1CF4
  c->r[0]=c->lr; // 800F1CF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1CFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1D00
  c->r[31]=c->r[3]|c->r[3]; // 800F1D04
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F1D08
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)208); // 800F1D0C
  c->r[3]=c->r[3]+c->r[0]; // 800F1D10
  c->r[3]=c->r[3]+0x0000000Cu; // 800F1D14
  c->lr=0x800F1D1Cu; f_800560C4(c); // 800F1D18
  c->r[3]=R32(c->r[31]+0x00000008u); // 800F1D1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F1D20
  W32(c->r[31]+0x00000008u,c->r[0]); // 800F1D24
  cmps(c,0,(int32_t)c->r[0],0); // 800F1D28
  if (!crb(c,0)) { goto L_800F1D44; } // 800F1D2C
  c->r[0]=0u+0x00000100u; // 800F1D30
  W32(c->r[31]+0x00000008u,c->r[0]); // 800F1D34
  c->r[3]=R32(c->r[31]+0x00000004u); // 800F1D38
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F1D3C
  W32(c->r[31]+0x00000004u,c->r[0]); // 800F1D40
L_800F1D44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1D44
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1D48
  c->lr=c->r[0]; // 800F1D4C
  c->r[1]=c->r[1]+0x00000010u; // 800F1D50
  return; // 800F1D54
}

// fn_800F1D58
void f_800F1D58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1D58
  c->r[0]=c->lr; // 800F1D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1D60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1D64
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1D6C
  c->r[29]=c->r[3]|c->r[3]; // 800F1D70
  c->r[30]=0u+0x00000000u; // 800F1D74
  c->r[31]=c->r[3]+0x0000000Cu; // 800F1D78
L_800F1D7C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1D7C
  c->r[4]=R32(c->r[29]+0x00000000u); // 800F1D80
  c->lr=0x800F1D88u; f_80055FE4(c); // 800F1D84
  c->r[3]=c->r[31]|c->r[31]; // 800F1D88
  c->lr=0x800F1D90u; f_80055ED8(c); // 800F1D8C
  c->r[31]=c->r[31]+0x000000D0u; // 800F1D90
  c->r[30]=c->r[30]+0x00000001u; // 800F1D94
  cmps(c,0,(int32_t)c->r[30],8); // 800F1D98
  if (crb(c,0)) { IRQCHK(c); goto L_800F1D7C; } // 800F1D9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1DA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1DA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1DA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1DAC
  c->lr=c->r[0]; // 800F1DB0
  c->r[1]=c->r[1]+0x00000020u; // 800F1DB4
  return; // 800F1DB8
}

// fn_800F1DBC
void f_800F1DBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1DBC
  c->r[0]=c->lr; // 800F1DC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1DC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1DC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1DCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1DD0
  c->r[29]=c->r[4]|c->r[4]; // 800F1DD4
  c->r[30]=0u+0x00000000u; // 800F1DD8
  c->r[31]=c->r[3]+0x0000000Cu; // 800F1DDC
L_800F1DE0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1DE0
  c->r[4]=c->r[29]|c->r[29]; // 800F1DE4
  c->lr=0x800F1DECu; f_800736AC(c); // 800F1DE8
  c->r[31]=c->r[31]+0x000000D0u; // 800F1DEC
  c->r[30]=c->r[30]+0x00000001u; // 800F1DF0
  cmpu(c,0,c->r[30],0x00000008u); // 800F1DF4
  if (crb(c,0)) { IRQCHK(c); goto L_800F1DE0; } // 800F1DF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1DFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1E00
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1E04
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1E08
  c->lr=c->r[0]; // 800F1E0C
  c->r[1]=c->r[1]+0x00000020u; // 800F1E10
  return; // 800F1E14
}

// fn_800F1E18
void f_800F1E18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1E18
  c->r[0]=c->lr; // 800F1E1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1E20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1E24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1E28
  c->r[5]=0u+0x804C0000u; // 800F1E2C
  c->r[30]=c->r[5]+0x00007C68u; // 800F1E30
  c->r[0]=0u+0x00000010u; // 800F1E34
  c->ctr=c->r[0]; // 800F1E38
L_800F1E3C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F1E3C
  if (crb(c,2)) { goto L_800F1E6C; } // 800F1E40
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1E44
  cmps(c,0,(int32_t)c->r[0],0); // 800F1E48
  if (!crb(c,2)) { goto L_800F1E98; } // 800F1E4C
  W32(c->r[30]+0x00000004u,c->r[3]); // 800F1E50
  c->lr=0x800F1E58u; f_802A17B8(c); // 800F1E54
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F1E58
  c->lr=0x800F1E60u; f_802A1BB8(c); // 800F1E5C
  W32(c->r[30]+0x00000000u,c->r[3]); // 800F1E60
  c->r[3]=0u+0x00000001u; // 800F1E64
  goto L_800F1EA4; // 800F1E68
L_800F1E6C:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1E6C
  cmpu(c,0,c->r[0],c->r[3]); // 800F1E70
  if (!crb(c,2)) { goto L_800F1E98; } // 800F1E74
  c->r[31]=0u+0x00000000u; // 800F1E78
  W32(c->r[30]+0x00000004u,c->r[31]); // 800F1E7C
  c->lr=0x800F1E84u; f_802A17B8(c); // 800F1E80
  c->r[4]=R32(c->r[30]+0x00000000u); // 800F1E84
  c->lr=0x800F1E8Cu; f_802A2174(c); // 800F1E88
  W32(c->r[30]+0x00000000u,c->r[31]); // 800F1E8C
  c->r[3]=0u+0x00000001u; // 800F1E90
  goto L_800F1EA4; // 800F1E94
L_800F1E98:;
  c->r[30]=c->r[30]+0x00000008u; // 800F1E98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1E3C; } // 800F1E9C
  c->r[3]=0u+0x00000000u; // 800F1EA0
L_800F1EA4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1EA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1EAC
  c->lr=c->r[0]; // 800F1EB0
  c->r[1]=c->r[1]+0x00000010u; // 800F1EB4
  return; // 800F1EB8
}

// fn_800F1EBC
void f_800F1EBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1EBC
  c->r[0]=c->lr; // 800F1EC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1EC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1EC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1ECC
  c->r[5]=0u+0x804C0000u; // 800F1ED0
  c->r[30]=c->r[5]+0x00007CE8u; // 800F1ED4
  c->r[0]=0u+0x00000010u; // 800F1ED8
  c->ctr=c->r[0]; // 800F1EDC
L_800F1EE0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F1EE0
  if (crb(c,2)) { goto L_800F1F10; } // 800F1EE4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1EE8
  cmps(c,0,(int32_t)c->r[0],0); // 800F1EEC
  if (!crb(c,2)) { goto L_800F1F3C; } // 800F1EF0
  W32(c->r[30]+0x00000004u,c->r[3]); // 800F1EF4
  c->lr=0x800F1EFCu; f_802A17B8(c); // 800F1EF8
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F1EFC
  c->lr=0x800F1F04u; f_802A1CD8(c); // 800F1F00
  W32(c->r[30]+0x00000000u,c->r[3]); // 800F1F04
  c->r[3]=0u+0x00000001u; // 800F1F08
  goto L_800F1F48; // 800F1F0C
L_800F1F10:;
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F1F10
  cmpu(c,0,c->r[0],c->r[3]); // 800F1F14
  if (!crb(c,2)) { goto L_800F1F3C; } // 800F1F18
  c->r[31]=0u+0x00000000u; // 800F1F1C
  W32(c->r[30]+0x00000004u,c->r[31]); // 800F1F20
  c->lr=0x800F1F28u; f_802A17B8(c); // 800F1F24
  c->r[4]=R32(c->r[30]+0x00000000u); // 800F1F28
  c->lr=0x800F1F30u; f_802A2214(c); // 800F1F2C
  W32(c->r[30]+0x00000000u,c->r[31]); // 800F1F30
  c->r[3]=0u+0x00000001u; // 800F1F34
  goto L_800F1F48; // 800F1F38
L_800F1F3C:;
  c->r[30]=c->r[30]+0x00000008u; // 800F1F3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1EE0; } // 800F1F40
  c->r[3]=0u+0x00000000u; // 800F1F44
L_800F1F48:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1F48
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1F4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1F50
  c->lr=c->r[0]; // 800F1F54
  c->r[1]=c->r[1]+0x00000010u; // 800F1F58
  return; // 800F1F5C
}

// fn_800F1F60
void f_800F1F60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1F60
  c->r[0]=c->lr; // 800F1F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1F68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1F6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1F70
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1F74
  c->r[4]=0u+0x00000020u; // 800F1F78
  c->r[5]=0u+0x00000001u; // 800F1F7C
  c->r[6]=c->r[13]+0xFFFF8D68u; // 800F1F80
  c->lr=0x800F1F88u; f_80056910(c); // 800F1F84
  W32(c->r[13]+0xFFFFB9E8u,c->r[3]); // 800F1F88
  c->r[3]=0u+0x00000032u; // 800F1F8C
  c->r[4]=0u+0x000001F4u; // 800F1F90
  c->r[5]=0u+0x000001F4u; // 800F1F94
  c->r[6]=0u+0x000005DCu; // 800F1F98
  c->r[7]=0u+0x00000004u; // 800F1F9C
  c->lr=0x800F1FA4u; f_800F33F4(c); // 800F1FA0
  c->r[30]=c->r[3]|c->r[3]; // 800F1FA4
  c->lr=0x800F1FACu; f_800F21B8(c); // 800F1FA8
  W32(c->r[13]+0xFFFFB9ECu,c->r[3]); // 800F1FAC
  c->lr=0x800F1FB4u; f_80056B5C(c); // 800F1FB0
  c->r[29]=c->r[3]|c->r[3]; // 800F1FB4
  c->r[3]=R32(c->r[13]+0xFFFFB9E8u); // 800F1FB8
  c->lr=0x800F1FC0u; f_80056B54(c); // 800F1FBC
  c->r[3]=0u+0x0000004Cu; // 800F1FC0
  c->lr=0x800F1FC8u; f_80047B64(c); // 800F1FC4
  c->r[31]=c->r[3]|c->r[3]; // 800F1FC8
  cmps(c,0,(int32_t)c->r[3],0); // 800F1FCC
  if (crb(c,2)) { goto L_800F1FF0; } // 800F1FD0
  c->r[4]=R32(c->r[13]+0xFFFFB9ECu); // 800F1FD4
  c->r[5]=c->r[30]|c->r[30]; // 800F1FD8
  c->r[6]=0u+0x00000032u; // 800F1FDC
  c->r[7]=0u+0x000001F4u; // 800F1FE0
  c->r[8]=0u+0x000001F4u; // 800F1FE4
  c->r[9]=0u+0x000005DCu; // 800F1FE8
  c->lr=0x800F1FF0u; f_800F2A0C(c); // 800F1FEC
L_800F1FF0:;
  W32(c->r[13]+0xFFFFB9F0u,c->r[31]); // 800F1FF0
  c->r[3]=c->r[29]|c->r[29]; // 800F1FF4
  c->lr=0x800F1FFCu; f_80056B54(c); // 800F1FF8
  c->lr=0x800F2000u; f_80293818(c); // 800F1FFC
  W32(c->r[13]+0xFFFFB9F4u,c->r[3]); // 800F2000
  c->r[4]=R32(c->r[13]+0xFFFFB9F0u); // 800F2004
  c->r[5]=0u+0x00000004u; // 800F2008
  c->lr=0x800F2010u; f_800F29DC(c); // 800F200C
  c->r[3]=0u+0x804C0000u; // 800F2010
  c->r[3]=c->r[3]+0x00007C68u; // 800F2014
  c->r[0]=0u+0x00000000u; // 800F2018
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F201C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2020
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2024
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F2028
  W32(c->r[3]+0x00000010u,c->r[0]); // 800F202C
  W32(c->r[3]+0x00000014u,c->r[0]); // 800F2030
  W32(c->r[3]+0x00000018u,c->r[0]); // 800F2034
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800F2038
  W32(c->r[3]+0x00000020u,c->r[0]); // 800F203C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800F2040
  W32(c->r[3]+0x00000028u,c->r[0]); // 800F2044
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800F2048
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F204C
  W32(c->r[3]+0x00000034u,c->r[0]); // 800F2050
  W32(c->r[3]+0x00000038u,c->r[0]); // 800F2054
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800F2058
  W32(c->r[3]+0x00000040u,c->r[0]); // 800F205C
  W32(c->r[3]+0x00000044u,c->r[0]); // 800F2060
  W32(c->r[3]+0x00000048u,c->r[0]); // 800F2064
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800F2068
  W32(c->r[3]+0x00000050u,c->r[0]); // 800F206C
  W32(c->r[3]+0x00000054u,c->r[0]); // 800F2070
  W32(c->r[3]+0x00000058u,c->r[0]); // 800F2074
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800F2078
  W32(c->r[3]+0x00000060u,c->r[0]); // 800F207C
  W32(c->r[3]+0x00000064u,c->r[0]); // 800F2080
  W32(c->r[3]+0x00000068u,c->r[0]); // 800F2084
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800F2088
  W32(c->r[3]+0x00000070u,c->r[0]); // 800F208C
  W32(c->r[3]+0x00000074u,c->r[0]); // 800F2090
  W32(c->r[3]+0x00000078u,c->r[0]); // 800F2094
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800F2098
  c->r[3]=0u+0x804C0000u; // 800F209C
  c->r[3]=c->r[3]+0x00007CE8u; // 800F20A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F20A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F20A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F20AC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800F20B0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800F20B4
  W32(c->r[3]+0x00000014u,c->r[0]); // 800F20B8
  W32(c->r[3]+0x00000018u,c->r[0]); // 800F20BC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800F20C0
  W32(c->r[3]+0x00000020u,c->r[0]); // 800F20C4
  W32(c->r[3]+0x00000024u,c->r[0]); // 800F20C8
  W32(c->r[3]+0x00000028u,c->r[0]); // 800F20CC
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800F20D0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F20D4
  W32(c->r[3]+0x00000034u,c->r[0]); // 800F20D8
  W32(c->r[3]+0x00000038u,c->r[0]); // 800F20DC
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800F20E0
  W32(c->r[3]+0x00000040u,c->r[0]); // 800F20E4
  W32(c->r[3]+0x00000044u,c->r[0]); // 800F20E8
  W32(c->r[3]+0x00000048u,c->r[0]); // 800F20EC
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800F20F0
  W32(c->r[3]+0x00000050u,c->r[0]); // 800F20F4
  W32(c->r[3]+0x00000054u,c->r[0]); // 800F20F8
  W32(c->r[3]+0x00000058u,c->r[0]); // 800F20FC
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 800F2100
  W32(c->r[3]+0x00000060u,c->r[0]); // 800F2104
  W32(c->r[3]+0x00000064u,c->r[0]); // 800F2108
  W32(c->r[3]+0x00000068u,c->r[0]); // 800F210C
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 800F2110
  W32(c->r[3]+0x00000070u,c->r[0]); // 800F2114
  W32(c->r[3]+0x00000074u,c->r[0]); // 800F2118
  W32(c->r[3]+0x00000078u,c->r[0]); // 800F211C
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800F2120
  c->r[3]=0u+0x804C0000u; // 800F2124
  c->r[3]=c->r[3]+0x00007D68u; // 800F2128
  c->r[4]=0u+0x000000C4u; // 800F212C
  c->lr=0x800F2134u; f_8028CA58(c); // 800F2130
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2134
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F2138
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F213C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2140
  c->lr=c->r[0]; // 800F2144
  c->r[1]=c->r[1]+0x00000020u; // 800F2148
  return; // 800F214C
}

// fn_800F2150
void f_800F2150(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2150
  c->r[0]=c->lr; // 800F2154
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F215C
  c->r[31]=c->r[3]|c->r[3]; // 800F2160
  c->lr=0x800F2168u; f_800F21A8(c); // 800F2164
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 800F2168
  if (crb(c,2)) { goto L_800F2194; } // 800F216C
  cmps(c,0,(int32_t)c->r[31],0); // 800F2170
  if (crb(c,2)) { goto L_800F2188; } // 800F2174
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F2178
  c->r[4]=0u+0x00000001u; // 800F217C
  c->lr=0x800F2184u; f_800F29F4(c); // 800F2180
  goto L_800F2194; // 800F2184
L_800F2188:;
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F2188
  c->r[4]=0u+0x00000000u; // 800F218C
  c->lr=0x800F2194u; f_800F29F4(c); // 800F2190
L_800F2194:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2194
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2198
  c->lr=c->r[0]; // 800F219C
  c->r[1]=c->r[1]+0x00000010u; // 800F21A0
  return; // 800F21A4
}

// fn_800F21A8
void f_800F21A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F21A8
  f_800F2A00(c); return; // 800F21AC
}

// fn_800F21B0
void f_800F21B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB9E8u); // 800F21B0
  return; // 800F21B4
}

// fn_800F21B8
void f_800F21B8(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800F21B8
  c->r[3]=R32(c->r[13]+0xFFFFB9E8u); // 800F21BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F21C0
  if (!crb(c,2)) { goto L_800F21D0; } // 800F21C4
  c->r[3]=0u+0x00000000u; // 800F21C8
  return; // 800F21CC
L_800F21D0:;
  f_80056AC0(c); return; // 800F21D0
  return; // 800F21D4
}

// fn_800F21D8
void f_800F21D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F21D8
  c->r[0]=c->lr; // 800F21DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F21E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F21E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F21E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F21EC
  c->r[29]=c->r[5]|c->r[5]; // 800F21F0
  c->r[31]=0u+0x00000000u; // 800F21F4
  c->r[30]=0u+0x00000000u; // 800F21F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F21FC
  if (crb(c,2)) { goto L_800F2210; } // 800F2200
  c->r[4]=0u+0x00000001u; // 800F2204
  c->lr=0x800F220Cu; f_800F1E18(c); // 800F2208
  c->r[31]=c->r[3]|c->r[3]; // 800F220C
L_800F2210:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F2210
  if (crb(c,2)) { goto L_800F2228; } // 800F2214
  c->r[3]=c->r[29]|c->r[29]; // 800F2218
  c->r[4]=0u+0x00000001u; // 800F221C
  c->lr=0x800F2224u; f_800F1EBC(c); // 800F2220
  c->r[30]=c->r[3]|c->r[3]; // 800F2224
L_800F2228:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F2228
  if (!crb(c,2)) { goto L_800F2238; } // 800F222C
  cmps(c,0,(int32_t)c->r[30],0); // 800F2230
  if (crb(c,2)) { goto L_800F2258; } // 800F2234
L_800F2238:;
  c->lr=0x800F223Cu; f_802A17B8(c); // 800F2238
  c->lr=0x800F2240u; f_802A1F70(c); // 800F223C
  cmps(c,0,(int32_t)c->r[31],0); // 800F2240
  if (crb(c,2)) { goto L_800F224C; } // 800F2244
  c->lr=0x800F224Cu; f_80344D70(c); // 800F2248
L_800F224C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F224C
  if (crb(c,2)) { goto L_800F2258; } // 800F2250
  c->lr=0x800F2258u; f_80347944(c); // 800F2254
L_800F2258:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2258
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F225C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F2260
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2264
  c->lr=c->r[0]; // 800F2268
  c->r[1]=c->r[1]+0x00000020u; // 800F226C
  return; // 800F2270
}

// fn_800F2274
void f_800F2274(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2274
  c->r[0]=c->lr; // 800F2278
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F227C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2280
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2284
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2288
  c->r[29]=c->r[4]|c->r[4]; // 800F228C
  c->r[31]=0u+0x00000000u; // 800F2290
  c->r[30]=0u+0x00000000u; // 800F2294
  cmps(c,0,(int32_t)c->r[3],0); // 800F2298
  if (crb(c,2)) { goto L_800F22AC; } // 800F229C
  c->r[4]=0u+0x00000000u; // 800F22A0
  c->lr=0x800F22A8u; f_800F1E18(c); // 800F22A4
  c->r[31]=c->r[3]|c->r[3]; // 800F22A8
L_800F22AC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F22AC
  if (crb(c,2)) { goto L_800F22C4; } // 800F22B0
  c->r[3]=c->r[29]|c->r[29]; // 800F22B4
  c->r[4]=0u+0x00000000u; // 800F22B8
  c->lr=0x800F22C0u; f_800F1EBC(c); // 800F22BC
  c->r[30]=c->r[3]|c->r[3]; // 800F22C0
L_800F22C4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F22C4
  if (!crb(c,2)) { goto L_800F22D4; } // 800F22C8
  cmps(c,0,(int32_t)c->r[30],0); // 800F22CC
  if (crb(c,2)) { goto L_800F22F4; } // 800F22D0
L_800F22D4:;
  c->lr=0x800F22D8u; f_802A17B8(c); // 800F22D4
  c->lr=0x800F22DCu; f_802A1F70(c); // 800F22D8
  cmps(c,0,(int32_t)c->r[31],0); // 800F22DC
  if (crb(c,2)) { goto L_800F22E8; } // 800F22E0
  c->lr=0x800F22E8u; f_80344D70(c); // 800F22E4
L_800F22E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F22E8
  if (crb(c,2)) { goto L_800F22F4; } // 800F22EC
  c->lr=0x800F22F4u; f_80347944(c); // 800F22F0
L_800F22F4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F22F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F22F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F22FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2300
  c->lr=c->r[0]; // 800F2304
  c->r[1]=c->r[1]+0x00000020u; // 800F2308
  return; // 800F230C
}

// fn_800F2310
void f_800F2310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2310
  c->r[0]=c->lr; // 800F2314
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2318
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F231C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2320
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2324
  c->r[29]=0u+0x00000000u; // 800F2328
  c->r[31]=0u+0x804C0000u; // 800F232C
  c->r[3]=c->r[31]+0x00007D68u; // 800F2330
  c->lr=0x800F2338u; f_8004B018(c); // 800F2334
  c->r[30]=c->r[3]|c->r[3]; // 800F2338
  goto L_800F236C; // 800F233C
L_800F2340:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F2340
  if (!crb(c,2)) { goto L_800F2354; } // 800F2344
  c->r[3]=c->r[30]|c->r[30]; // 800F2348
  c->lr=0x800F2350u; f_800F2980(c); // 800F234C
  c->r[29]=c->r[3]|c->r[3]; // 800F2350
L_800F2354:;
  c->r[3]=c->r[30]|c->r[30]; // 800F2354
  c->lr=0x800F235Cu; f_800F273C(c); // 800F2358
  c->r[3]=c->r[31]+0x00007D68u; // 800F235C
  c->r[4]=c->r[30]|c->r[30]; // 800F2360
  c->lr=0x800F2368u; f_8028CCD8(c); // 800F2364
  c->r[30]=c->r[3]|c->r[3]; // 800F2368
L_800F236C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F236C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2340; } // 800F2370
  c->r[3]=c->r[29]|c->r[29]; // 800F2374
  c->lr=0x800F237Cu; f_800F2150(c); // 800F2378
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F237C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F2380
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F2384
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2388
  c->lr=c->r[0]; // 800F238C
  c->r[1]=c->r[1]+0x00000020u; // 800F2390
  return; // 800F2394
}

// fn_800F2398
void f_800F2398(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2398
  c->r[0]=c->lr; // 800F239C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F23A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F23A4
  c->r[31]=c->r[3]|c->r[3]; // 800F23A8
  c->lr=0x800F23B0u; f_8005D778(c); // 800F23AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F23B0
  if (!crb(c,2)) { goto L_800F23E4; } // 800F23B4
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F23B8
  c->r[4]=c->r[31]|c->r[31]; // 800F23BC
  c->r[5]=0u+0x00000000u; // 800F23C0
  c->lr=0x800F23C8u; f_80293C90(c); // 800F23C4
  c->lr=0x800F23CCu; f_8005D7EC(c); // 800F23C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F23CC
  if (crb(c,2)) { goto L_800F23E4; } // 800F23D0
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F23D4
  c->r[4]=c->r[31]|c->r[31]; // 800F23D8
  c->r[5]=0u+0x00000000u; // 800F23DC
  c->lr=0x800F23E4u; f_80293C90(c); // 800F23E0
L_800F23E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F23E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F23E8
  c->lr=c->r[0]; // 800F23EC
  c->r[1]=c->r[1]+0x00000010u; // 800F23F0
  return; // 800F23F4
}

// fn_800F23F8
void f_800F23F8(Ctx* __restrict c) {
  return; // 800F23F8
}

// fn_800F23FC
void f_800F23FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F23FC
  c->r[0]=c->lr; // 800F2400
  W32(c->r[1]+0x00000144u,c->r[0]); // 800F2404
  W32(c->r[1]+0x0000013Cu,c->r[31]); // 800F2408
  W32(c->r[1]+0x00000138u,c->r[30]); // 800F240C
  c->r[30]=c->r[3]|c->r[3]; // 800F2410
  c->r[31]=c->r[4]|c->r[4]; // 800F2414
  c->r[3]=c->r[1]+0x00000090u; // 800F2418
  c->lr=0x800F2420u; f_800F4218(c); // 800F241C
  c->r[3]=c->r[1]+0x00000060u; // 800F2420
  c->lr=0x800F2428u; f_8004B0A0(c); // 800F2424
  c->r[3]=c->r[1]+0x00000020u; // 800F2428
  c->lr=0x800F2430u; f_8004B09C(c); // 800F242C
  c->r[3]=c->r[1]+0x00000010u; // 800F2430
  c->lr=0x800F2438u; f_8004B0A4(c); // 800F2434
  c->r[3]=c->r[31]|c->r[31]; // 800F2438
  c->r[4]=c->r[1]+0x00000060u; // 800F243C
  c->lr=0x800F2444u; f_8005F794(c); // 800F2440
  c->r[3]=c->r[31]|c->r[31]; // 800F2444
  c->r[4]=c->r[1]+0x0000000Cu; // 800F2448
  c->r[5]=c->r[1]+0x00000008u; // 800F244C
  c->lr=0x800F2454u; f_8006E3E8(c); // 800F2450
  c->r[3]=c->r[1]+0x00000090u; // 800F2454
  c->r[4]=c->r[1]+0x00000060u; // 800F2458
  c->lr=0x800F2460u; f_800F4214(c); // 800F245C
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2460
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800F2464
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2468
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F246C
  {uint32_t ea=c->r[1]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F2470
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800F2474
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F2478
  c->r[4]=c->r[1]+0x00000010u; // 800F247C
  c->r[5]=c->r[1]+0x00000060u; // 800F2480
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F2484
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F2488
  c->lr=0x800F2490u; f_80293DB4(c); // 800F248C
  c->r[3]=c->r[31]|c->r[31]; // 800F2490
  c->r[4]=c->r[1]+0x00000020u; // 800F2494
  c->lr=0x800F249Cu; f_8005F7D0(c); // 800F2498
  c->r[3]=c->r[1]+0x00000020u; // 800F249C
  c->lr=0x800F24A4u; f_8004B098(c); // 800F24A0
  c->r[4]=0u+0x00000000u; // 800F24A4
  c->lr=0x800F24ACu; f_803491E8(c); // 800F24A8
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F24AC
  c->r[4]=c->r[30]|c->r[30]; // 800F24B0
  c->r[5]=0u+0x00000001u; // 800F24B4
  c->lr=0x800F24BCu; f_80293C90(c); // 800F24B8
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F24BC
  c->r[4]=c->r[1]+0x00000090u; // 800F24C0
  c->r[5]=c->r[30]|c->r[30]; // 800F24C4
  c->lr=0x800F24CCu; f_80293D30(c); // 800F24C8
  c->r[3]=0u+0x00000000u; // 800F24CC
  c->lr=0x800F24D4u; f_80349650(c); // 800F24D0
  c->r[31]=R32(c->r[1]+0x0000013Cu); // 800F24D4
  c->r[30]=R32(c->r[1]+0x00000138u); // 800F24D8
  c->r[0]=R32(c->r[1]+0x00000144u); // 800F24DC
  c->lr=c->r[0]; // 800F24E0
  c->r[1]=c->r[1]+0x00000140u; // 800F24E4
  return; // 800F24E8
}

// fn_800F24EC
void f_800F24EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F24EC
  c->r[0]=c->lr; // 800F24F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F24F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F24F8
  c->r[31]=c->r[3]|c->r[3]; // 800F24FC
  c->lr=0x800F2504u; f_8004A4A8(c); // 800F2500
  c->r[3]=0u+0x80460000u; // 800F2504
  c->r[0]=c->r[3]+0x00002114u; // 800F2508
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 800F250C
  c->r[3]=c->r[31]+0x000000B4u; // 800F2510
  c->lr=0x800F2518u; f_800F42D0(c); // 800F2514
  c->r[0]=0u+0x00000004u; // 800F2518
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800F251C
  c->r[0]=0u+0x00000000u; // 800F2520
  W32(c->r[31]+0x000000C0u,c->r[0]); // 800F2524
  c->r[3]=c->r[31]|c->r[31]; // 800F2528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F252C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2530
  c->lr=c->r[0]; // 800F2534
  c->r[1]=c->r[1]+0x00000010u; // 800F2538
  return; // 800F253C
}

// fn_800F2540
void f_800F2540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2540
  c->r[0]=c->lr; // 800F2544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F254C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2550
  c->r[30]=c->r[3]|c->r[3]; // 800F2554
  c->r[31]=c->r[4]|c->r[4]; // 800F2558
  cmps(c,0,(int32_t)c->r[3],0); // 800F255C
  if (crb(c,2)) { goto L_800F2594; } // 800F2560
  c->r[4]=0u+0x80460000u; // 800F2564
  c->r[0]=c->r[4]+0x00002114u; // 800F2568
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 800F256C
  c->lr=0x800F2574u; f_800F2664(c); // 800F2570
  c->r[3]=c->r[30]|c->r[30]; // 800F2574
  c->r[4]=0u+0x00000000u; // 800F2578
  c->lr=0x800F2580u; f_8004A580(c); // 800F257C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F2580
  cmps(c,0,(int32_t)c->r[0],0); // 800F2584
  if (!crb(c,1)) { goto L_800F2594; } // 800F2588
  c->r[3]=c->r[30]|c->r[30]; // 800F258C
  c->lr=0x800F2594u; f_80047B20(c); // 800F2590
L_800F2594:;
  c->r[3]=c->r[30]|c->r[30]; // 800F2594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2598
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F259C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F25A0
  c->lr=c->r[0]; // 800F25A4
  c->r[1]=c->r[1]+0x00000010u; // 800F25A8
  return; // 800F25AC
}

// fn_800F25B0
void f_800F25B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F25B0
  c->r[0]=c->lr; // 800F25B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F25B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F25BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F25C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F25C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F25C8
  c->r[28]=c->r[3]|c->r[3]; // 800F25CC
  c->r[29]=c->r[4]|c->r[4]; // 800F25D0
  c->r[30]=c->r[5]|c->r[5]; // 800F25D4
  c->r[31]=c->r[6]|c->r[6]; // 800F25D8
  c->r[3]=c->r[3]+0x000000B4u; // 800F25DC
  c->lr=0x800F25E4u; f_802A2DE4(c); // 800F25E0
  cmps(c,0,(int32_t)c->r[3],0); // 800F25E4
  if (crb(c,2)) { goto L_800F25F4; } // 800F25E8
  c->r[3]=0u+0x00000000u; // 800F25EC
  goto L_800F2644; // 800F25F0
L_800F25F4:;
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F25F4
  c->r[4]=c->r[29]|c->r[29]; // 800F25F8
  c->r[5]=c->r[30]|c->r[30]; // 800F25FC
  c->r[6]=rotl(c->r[31],0)&0x0000FFFFu; // 800F2600
  c->lr=0x800F2608u; f_802939D8(c); // 800F2604
  c->r[4]=c->r[3]|c->r[3]; // 800F2608
  cmps(c,0,(int32_t)c->r[3],0); // 800F260C
  if (crb(c,2)) { goto L_800F2640; } // 800F2610
  c->r[0]=0u+0x00000000u; // 800F2614
  W32(c->r[28]+0x000000C0u,c->r[0]); // 800F2618
  W32(c->r[28]+0x000000BCu,c->r[30]); // 800F261C
  c->r[3]=c->r[28]+0x000000B4u; // 800F2620
  c->lr=0x800F2628u; f_800F4300(c); // 800F2624
  c->r[3]=0u+0x804C0000u; // 800F2628
  c->r[3]=c->r[3]+0x00007D68u; // 800F262C
  c->r[4]=c->r[28]|c->r[28]; // 800F2630
  c->lr=0x800F2638u; f_8028CA70(c); // 800F2634
  c->r[3]=0u+0x00000001u; // 800F2638
  goto L_800F2644; // 800F263C
L_800F2640:;
  c->r[3]=0u+0x00000000u; // 800F2640
L_800F2644:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F2644
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F2648
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F264C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F2650
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2654
  c->lr=c->r[0]; // 800F2658
  c->r[1]=c->r[1]+0x00000020u; // 800F265C
  return; // 800F2660
}

// fn_800F2664
void f_800F2664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2664
  c->r[0]=c->lr; // 800F2668
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F266C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2670
  c->r[31]=c->r[3]|c->r[3]; // 800F2674
  c->r[3]=c->r[3]+0x000000B4u; // 800F2678
  c->lr=0x800F2680u; f_802A2DE4(c); // 800F267C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2680
  if (crb(c,2)) { goto L_800F26E0; } // 800F2684
  c->r[3]=c->r[31]+0x000000B4u; // 800F2688
  c->lr=0x800F2690u; f_800F4330(c); // 800F268C
  c->lr=0x800F2694u; f_802931A0(c); // 800F2690
  c->r[3]=c->r[31]+0x000000B4u; // 800F2694
  c->lr=0x800F269Cu; f_800F4330(c); // 800F2698
  c->lr=0x800F26A0u; f_802930C8(c); // 800F269C
  c->r[3]=c->r[31]+0x000000B4u; // 800F26A0
  c->lr=0x800F26A8u; f_800F4330(c); // 800F26A4
  c->r[4]=c->r[3]|c->r[3]; // 800F26A8
  c->r[3]=R32(c->r[13]+0xFFFFB9F4u); // 800F26AC
  c->lr=0x800F26B4u; f_80293AFC(c); // 800F26B0
  c->r[3]=c->r[31]+0x000000B4u; // 800F26B4
  c->r[4]=0u+0x00000000u; // 800F26B8
  c->lr=0x800F26C0u; f_800F4300(c); // 800F26BC
  c->r[0]=0u+0x00000004u; // 800F26C0
  W32(c->r[31]+0x000000BCu,c->r[0]); // 800F26C4
  c->r[3]=0u+0x804C0000u; // 800F26C8
  c->r[3]=c->r[3]+0x00007D68u; // 800F26CC
  c->r[4]=c->r[31]|c->r[31]; // 800F26D0
  c->lr=0x800F26D8u; f_8028CC6C(c); // 800F26D4
  c->r[3]=c->r[31]|c->r[31]; // 800F26D8
  c->lr=0x800F26E0u; f_800F43A4(c); // 800F26DC
L_800F26E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F26E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F26E4
  c->lr=c->r[0]; // 800F26E8
  c->r[1]=c->r[1]+0x00000010u; // 800F26EC
  return; // 800F26F0
}

// fn_800F26F4
void f_800F26F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F26F4
  c->r[0]=c->lr; // 800F26F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F26FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2700
  c->r[31]=c->r[3]|c->r[3]; // 800F2704
  c->r[3]=c->r[3]+0x000000B4u; // 800F2708
  c->lr=0x800F2710u; f_802A2DE4(c); // 800F270C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2710
  if (crb(c,2)) { goto L_800F2724; } // 800F2714
  c->r[3]=c->r[31]+0x000000B4u; // 800F2718
  c->lr=0x800F2720u; f_800F4334(c); // 800F271C
  goto L_800F2728; // 800F2720
L_800F2724:;
  c->r[3]=0u+0x00000000u; // 800F2724
L_800F2728:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2728
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F272C
  c->lr=c->r[0]; // 800F2730
  c->r[1]=c->r[1]+0x00000010u; // 800F2734
  return; // 800F2738
}

// fn_800F273C
void f_800F273C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F273C
  c->r[0]=c->lr; // 800F2740
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2744
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800F2748
  c->r[31]=c->r[3]|c->r[3]; // 800F274C
  c->r[3]=c->r[1]+0x00000008u; // 800F2750
  c->lr=0x800F2758u; f_8004B0A0(c); // 800F2754
  c->r[3]=c->r[31]|c->r[31]; // 800F2758
  c->lr=0x800F2760u; f_800F26F4(c); // 800F275C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2760
  if (crb(c,2)) { goto L_800F27E4; } // 800F2764
  c->r[3]=c->r[31]|c->r[31]; // 800F2768
  c->lr=0x800F2770u; f_800F2868(c); // 800F276C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2770
  if (crb(c,2)) { goto L_800F27E4; } // 800F2774
  c->r[0]=R32(c->r[31]+0x00000050u); // 800F2778
  cmps(c,0,(int32_t)c->r[0],0); // 800F277C
  if (crb(c,2)) { goto L_800F2798; } // 800F2780
  c->r[3]=c->r[1]+0x00000008u; // 800F2784
  c->r[4]=c->r[31]+0x00000054u; // 800F2788
  c->r[5]=c->r[31]+0x00000084u; // 800F278C
  c->lr=0x800F2794u; f_8026CD9C(c); // 800F2790
  goto L_800F27D4; // 800F2794
L_800F2798:;
  c->r[3]=c->r[1]+0x00000008u; // 800F2798
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800F279C
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800F27A0
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800F27A4
  c->lr=0x800F27ACu; f_8004B0A8(c); // 800F27A8
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F27AC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 800F27B0
  {uint32_t ea=c->r[31]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 800F27B4
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800F27B8
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F27BC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 800F27C0
  c->r[3]=c->r[1]+0x00000008u; // 800F27C4
  c->r[4]=c->r[3]|c->r[3]; // 800F27C8
  c->r[5]=c->r[31]+0x00000090u; // 800F27CC
  c->lr=0x800F27D4u; f_8026CD9C(c); // 800F27D0
L_800F27D4:;
  c->r[3]=c->r[31]+0x000000B4u; // 800F27D4
  c->lr=0x800F27DCu; f_800F4330(c); // 800F27D8
  c->r[4]=c->r[1]+0x00000008u; // 800F27DC
  c->lr=0x800F27E4u; f_80293640(c); // 800F27E0
L_800F27E4:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800F27E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F27E8
  c->lr=c->r[0]; // 800F27EC
  c->r[1]=c->r[1]+0x00000040u; // 800F27F0
  return; // 800F27F4
}

// fn_800F27F8
void f_800F27F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F27F8
  c->r[0]=c->lr; // 800F27FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2804
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F2808
  c->r[30]=c->r[3]|c->r[3]; // 800F280C
  c->r[31]=c->r[4]|c->r[4]; // 800F2810
  c->r[3]=c->r[3]+0x000000B4u; // 800F2814
  c->lr=0x800F281Cu; f_802A2DE4(c); // 800F2818
  cmps(c,0,(int32_t)c->r[3],0); // 800F281C
  if (crb(c,2)) { goto L_800F2850; } // 800F2820
  cmps(c,0,(int32_t)c->r[31],0); // 800F2824
  if (crb(c,2)) { goto L_800F2840; } // 800F2828
  c->r[3]=c->r[30]+0x000000B4u; // 800F282C
  c->lr=0x800F2834u; f_800F4330(c); // 800F2830
  c->r[4]=0u+0x00000000u; // 800F2834
  c->lr=0x800F283Cu; f_800F43B8(c); // 800F2838
  goto L_800F2850; // 800F283C
L_800F2840:;
  c->r[3]=c->r[30]+0x000000B4u; // 800F2840
  c->lr=0x800F2848u; f_800F4330(c); // 800F2844
  c->r[4]=0u+0x00000001u; // 800F2848
  c->lr=0x800F2850u; f_800F43B8(c); // 800F284C
L_800F2850:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2850
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2854
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2858
  c->lr=c->r[0]; // 800F285C
  c->r[1]=c->r[1]+0x00000010u; // 800F2860
  return; // 800F2864
}

// fn_800F2868
void f_800F2868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2868
  c->r[0]=c->lr; // 800F286C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2870
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2874
  c->r[31]=c->r[3]|c->r[3]; // 800F2878
  c->r[3]=c->r[3]+0x000000B4u; // 800F287C
  c->lr=0x800F2884u; f_802A2DE4(c); // 800F2880
  cmps(c,0,(int32_t)c->r[3],0); // 800F2884
  if (!crb(c,2)) { goto L_800F2894; } // 800F2888
  c->r[3]=0u+0x00000000u; // 800F288C
  goto L_800F28A8; // 800F2890
L_800F2894:;
  c->r[3]=c->r[31]+0x000000B4u; // 800F2894
  c->lr=0x800F289Cu; f_800F4330(c); // 800F2898
  c->lr=0x800F28A0u; f_800F43E0(c); // 800F289C
  c->r[0]=cntlz(c->r[3]); // 800F28A0
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F28A4
L_800F28A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F28A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F28AC
  c->lr=c->r[0]; // 800F28B0
  c->r[1]=c->r[1]+0x00000010u; // 800F28B4
  return; // 800F28B8
}

// fn_800F28BC
void f_800F28BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F28BC
  c->r[0]=c->lr; // 800F28C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F28C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F28C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F28CC
  c->r[30]=c->r[3]|c->r[3]; // 800F28D0
  c->r[31]=c->r[4]|c->r[4]; // 800F28D4
  c->r[3]=c->r[3]+0x000000B4u; // 800F28D8
  c->lr=0x800F28E0u; f_802A2DE4(c); // 800F28DC
  cmps(c,0,(int32_t)c->r[3],0); // 800F28E0
  if (crb(c,2)) { goto L_800F2914; } // 800F28E4
  cmps(c,0,(int32_t)c->r[31],0); // 800F28E8
  if (crb(c,2)) { goto L_800F2904; } // 800F28EC
  c->r[3]=c->r[30]+0x000000B4u; // 800F28F0
  c->lr=0x800F28F8u; f_800F4330(c); // 800F28F4
  c->r[4]=0u+0x00000000u; // 800F28F8
  c->lr=0x800F2900u; f_800F43F8(c); // 800F28FC
  goto L_800F2914; // 800F2900
L_800F2904:;
  c->r[3]=c->r[30]+0x000000B4u; // 800F2904
  c->lr=0x800F290Cu; f_800F4330(c); // 800F2908
  c->r[4]=0u+0x00000001u; // 800F290C
  c->lr=0x800F2914u; f_800F43F8(c); // 800F2910
L_800F2914:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2914
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F2918
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F291C
  c->lr=c->r[0]; // 800F2920
  c->r[1]=c->r[1]+0x00000010u; // 800F2924
  return; // 800F2928
}

// fn_800F292C
void f_800F292C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F292C
  c->r[0]=c->lr; // 800F2930
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2934
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2938
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F293C
  c->r[30]=c->r[3]|c->r[3]; // 800F2940
  c->r[31]=c->r[4]|c->r[4]; // 800F2944
  c->r[3]=c->r[3]+0x000000B4u; // 800F2948
  c->lr=0x800F2950u; f_802A2DE4(c); // 800F294C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2950
  if (!crb(c,2)) { goto L_800F2964; } // 800F2954
  c->r[0]=0u+0x00000000u; // 800F2958
  W32(c->r[30]+0x000000C0u,c->r[0]); // 800F295C
  goto L_800F2968; // 800F2960
L_800F2964:;
  W32(c->r[30]+0x000000C0u,c->r[31]); // 800F2964
L_800F2968:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2968
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F296C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2970
  c->lr=c->r[0]; // 800F2974
  c->r[1]=c->r[1]+0x00000010u; // 800F2978
  return; // 800F297C
}

// fn_800F2980
void f_800F2980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2980
  c->r[0]=c->lr; // 800F2984
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F298C
  c->r[31]=c->r[3]|c->r[3]; // 800F2990
  c->r[3]=c->r[3]+0x000000B4u; // 800F2994
  c->lr=0x800F299Cu; f_802A2DE4(c); // 800F2998
  cmps(c,0,(int32_t)c->r[3],0); // 800F299C
  if (!crb(c,2)) { goto L_800F29AC; } // 800F29A0
  c->r[3]=0u+0x00000000u; // 800F29A4
  goto L_800F29C8; // 800F29A8
L_800F29AC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F29AC
  c->lr=0x800F29B4u; f_800F2868(c); // 800F29B0
  cmps(c,0,(int32_t)c->r[3],0); // 800F29B4
  if (crb(c,2)) { goto L_800F29C4; } // 800F29B8
  c->r[3]=R32(c->r[31]+0x000000C0u); // 800F29BC
  goto L_800F29C8; // 800F29C0
L_800F29C4:;
  c->r[3]=0u+0x00000000u; // 800F29C4
L_800F29C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F29C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F29CC
  c->lr=c->r[0]; // 800F29D0
  c->r[1]=c->r[1]+0x00000010u; // 800F29D4
  return; // 800F29D8
}

// fn_800F29DC
void f_800F29DC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F29DC
  cmps(c,0,(int32_t)c->r[4],0); // 800F29E0
  if (crb(c,2)) return; // 800F29E4
  c->r[4]=c->r[5]|c->r[5]; // 800F29E8
  f_80293824(c); return; // 800F29EC
  return; // 800F29F0
}

// fn_800F29F4
void f_800F29F4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800F29F4
  W8(c->r[3]+0xFFFFC064u,c->r[4]); // 800F29F8
  return; // 800F29FC
}

// fn_800F2A00
void f_800F2A00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 800F2A00
  c->r[3]=R8(c->r[3]+0xFFFFC064u); // 800F2A04
  return; // 800F2A08
}

// fn_800F2A0C
void f_800F2A0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2A0C
  c->r[0]=c->lr; // 800F2A10
  W32(c->r[1]+0x000000F4u,c->r[0]); // 800F2A14
  c->r[11]=c->r[1]+0x000000F0u; // 800F2A18
  c->lr=0x800F2A20u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2A1C
  c->r[31]=c->r[1]|c->r[1]; // 800F2A20
  c->r[25]=c->r[3]|c->r[3]; // 800F2A24
  c->r[23]=c->r[4]|c->r[4]; // 800F2A28
  c->r[24]=c->r[5]|c->r[5]; // 800F2A2C
  c->r[26]=c->r[6]|c->r[6]; // 800F2A30
  c->r[27]=c->r[7]|c->r[7]; // 800F2A34
  c->r[28]=c->r[8]|c->r[8]; // 800F2A38
  c->r[29]=c->r[9]|c->r[9]; // 800F2A3C
  c->lr=0x800F2A44u; f_800F41D4(c); // 800F2A40
  c->r[3]=0u+0x80460000u; // 800F2A44
  c->r[0]=c->r[3]+0x00001F90u; // 800F2A48
  W32(c->r[25]+0x00000000u,c->r[0]); // 800F2A4C
  c->r[0]=rotl(c->r[23],0)&0x0000001Fu; // 800F2A50
  cmps(c,0,(int32_t)c->r[0],0); // 800F2A54
  if (crb(c,2)) { goto L_800F2A7C; } // 800F2A58
  c->r[3]=0u+0x80460000u; // 800F2A5C
  c->r[3]=c->r[3]+0x000022D4u; // 800F2A60
  c->r[4]=0u+0x0000010Fu; // 800F2A64
  c->r[5]=0u+0x80460000u; // 800F2A68
  c->r[5]=c->r[5]+0x00002284u; // 800F2A6C
  c->r[6]=c->r[23]|c->r[23]; // 800F2A70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F2A74
  c->lr=0x800F2A7Cu; f_80292868(c); // 800F2A78
L_800F2A7C:;
  c->r[3]=0u+0x00000018u; // 800F2A7C
  c->r[4]=0u+0x00000020u; // 800F2A80
  c->lr=0x800F2A88u; f_800F41FC(c); // 800F2A84
  c->r[30]=c->r[3]|c->r[3]; // 800F2A88
  c->r[0]=0u+0x00000000u; // 800F2A8C
  W32(c->r[25]+0x00000004u,c->r[0]); // 800F2A90
  W32(c->r[25]+0x00000010u,c->r[0]); // 800F2A94
  W32(c->r[25]+0x0000001Cu,c->r[0]); // 800F2A98
  W32(c->r[25]+0x00000028u,c->r[0]); // 800F2A9C
  W32(c->r[25]+0x00000008u,c->r[0]); // 800F2AA0
  W32(c->r[25]+0x00000014u,c->r[0]); // 800F2AA4
  W32(c->r[25]+0x00000020u,c->r[0]); // 800F2AA8
  W32(c->r[25]+0x0000002Cu,c->r[0]); // 800F2AAC
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 800F2AB0
  W32(c->r[25]+0x00000018u,c->r[0]); // 800F2AB4
  W32(c->r[25]+0x00000024u,c->r[0]); // 800F2AB8
  W32(c->r[25]+0x00000030u,c->r[0]); // 800F2ABC
  W32(c->r[25]+0x0000003Cu,c->r[0]); // 800F2AC0
  W32(c->r[25]+0x00000040u,c->r[0]); // 800F2AC4
  W32(c->r[25]+0x00000044u,c->r[0]); // 800F2AC8
  W32(c->r[25]+0x00000048u,c->r[0]); // 800F2ACC
  c->r[0]=c->r[23]+c->r[24]; // 800F2AD0
  W32(c->r[25]+0x00000038u,c->r[0]); // 800F2AD4
  c->r[3]=c->r[23]|c->r[23]; // 800F2AD8
  c->r[4]=0u+0x00000020u; // 800F2ADC
  c->lr=0x800F2AE4u; f_800F41FC(c); // 800F2AE0
  W32(c->r[25]+0x00000034u,c->r[3]); // 800F2AE4
  c->r[4]=0u+0x00000000u; // 800F2AE8
  c->r[0]=R32(c->r[25]+0x00000038u); // 800F2AEC
  cmpu(c,0,c->r[3],c->r[0]); // 800F2AF0
  if (!crb(c,0)) { goto L_800F2B08; } // 800F2AF4
  c->r[0]=c->r[0]-c->r[3]; // 800F2AF8
  cmpu(c,0,c->r[0],c->r[30]); // 800F2AFC
  if (!crb(c,1)) { goto L_800F2B08; } // 800F2B00
  c->r[4]=0u+0x00000001u; // 800F2B04
L_800F2B08:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F2B08
  if (!crb(c,2)) { goto L_800F2B2C; } // 800F2B0C
  c->r[3]=0u+0x80460000u; // 800F2B10
  c->r[3]=c->r[3]+0x00002270u; // 800F2B14
  c->r[4]=0u+0x00000131u; // 800F2B18
  c->r[5]=0u+0x80460000u; // 800F2B1C
  c->r[5]=c->r[5]+0x000021E0u; // 800F2B20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F2B24
  c->lr=0x800F2B2Cu; f_80292868(c); // 800F2B28
L_800F2B2C:;
  W32(c->r[25]+0x00000004u,c->r[26]); // 800F2B2C
  W32(c->r[25]+0x00000010u,c->r[27]); // 800F2B30
  W32(c->r[25]+0x0000001Cu,c->r[28]); // 800F2B34
  W32(c->r[25]+0x00000028u,c->r[29]); // 800F2B38
  W32(c->r[25]+0x00000008u,c->r[26]); // 800F2B3C
  W32(c->r[25]+0x00000014u,c->r[27]); // 800F2B40
  W32(c->r[25]+0x00000020u,c->r[28]); // 800F2B44
  W32(c->r[25]+0x0000002Cu,c->r[29]); // 800F2B48
  c->r[3]=R32(c->r[25]+0x00000034u); // 800F2B4C
  W32(c->r[25]+0x00000040u,c->r[3]); // 800F2B50
  c->r[4]=0u+0x00000000u; // 800F2B54
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F2B58
  c->r[3]=R32(c->r[25]+0x00000040u); // 800F2B5C
  W32(c->r[3]+0x00000004u,c->r[4]); // 800F2B60
  c->r[3]=R32(c->r[25]+0x00000040u); // 800F2B64
  W32(c->r[3]+0x00000008u,c->r[4]); // 800F2B68
  c->r[3]=R32(c->r[25]+0x00000040u); // 800F2B6C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800F2B70
  c->r[3]=R32(c->r[25]+0x00000040u); // 800F2B74
  W8(c->r[3]+0x00000014u,c->r[4]); // 800F2B78
  c->r[3]=R32(c->r[25]+0x00000034u); // 800F2B7C
  c->r[0]=R32(c->r[25]+0x00000038u); // 800F2B80
  c->r[0]=c->r[0]-c->r[3]; // 800F2B84
  c->r[0]=c->r[0]-c->r[30]; // 800F2B88
  c->r[3]=R32(c->r[25]+0x00000040u); // 800F2B8C
  W32(c->r[3]+0x00000010u,c->r[0]); // 800F2B90
  c->r[0]=R32(c->r[25]+0x00000040u); // 800F2B94
  W32(c->r[25]+0x00000048u,c->r[0]); // 800F2B98
  W32(c->r[25]+0x0000003Cu,c->r[4]); // 800F2B9C
  c->r[28]=0u+0x00000000u; // 800F2BA0
  c->r[27]=R32(c->r[25]+0x00000004u); // 800F2BA4
  cmps(c,0,(int32_t)c->r[27],0); // 800F2BA8
  if (!crb(c,1)) { goto L_800F2C30; } // 800F2BAC
  c->r[3]=c->r[25]|c->r[25]; // 800F2BB0
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)160); // 800F2BB4
  c->r[4]=c->r[4]+0x00000020u; // 800F2BB8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2BBC
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2BC0
  c->ctr=c->r[12]; // 800F2BC4
  if (true) { c->lr=0x800F2BCCu; dispatch(c,c->ctr); } // 800F2BC8
  c->r[26]=c->r[3]|c->r[3]; // 800F2BCC
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)160); // 800F2BD0
  c->r[3]=c->r[3]+0x00000010u; // 800F2BD4
  c->r[4]=c->r[26]|c->r[26]; // 800F2BD8
  c->lr=0x800F2BE0u; f_800F41F4(c); // 800F2BDC
  c->r[28]=c->r[3]|c->r[3]; // 800F2BE0
  cmps(c,0,(int32_t)c->r[3],0); // 800F2BE4
  if (crb(c,2)) { goto L_800F2C30; } // 800F2BE8
  W32(c->r[31]+0x000000C4u,c->r[1]); // 800F2BEC
  c->r[4]=0u+0x80290000u; // 800F2BF0
  c->r[4]=c->r[4]+0x00002C54u; // 800F2BF4
  c->r[5]=0u+0x80290000u; // 800F2BF8
  c->r[5]=c->r[5]+0x00002CB8u; // 800F2BFC
  c->r[6]=0u+0x000000A0u; // 800F2C00
  c->r[7]=c->r[27]|c->r[27]; // 800F2C04
  c->lr=0x800F2C0Cu; f_802F05F0(c); // 800F2C08
  c->r[28]=c->r[3]|c->r[3]; // 800F2C0C
  goto L_800F2C30; // 800F2C10
  c->r[3]=c->r[28]|c->r[28]; // 800F2C14
  c->r[4]=c->r[26]|c->r[26]; // 800F2C18
  c->lr=0x800F2C20u; f_800F41F0(c); // 800F2C1C
  c->r[3]=0u+0x00000000u; // 800F2C20
  c->r[4]=0u+0x00000000u; // 800F2C24
  c->r[5]=0u+0x00000000u; // 800F2C28
  c->lr=0x800F2C30u; f_802F2B48(c); // 800F2C2C
L_800F2C30:;
  c->r[3]=c->r[25]|c->r[25]; // 800F2C30
  c->r[4]=0u+0x00000024u; // 800F2C34
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2C38
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2C3C
  c->ctr=c->r[12]; // 800F2C40
  if (true) { c->lr=0x800F2C48u; dispatch(c,c->ctr); } // 800F2C44
  c->r[27]=c->r[3]|c->r[3]; // 800F2C48
  c->r[3]=0u+0x00000024u; // 800F2C4C
  c->r[4]=c->r[27]|c->r[27]; // 800F2C50
  c->lr=0x800F2C58u; f_800F41E8(c); // 800F2C54
  c->r[26]=c->r[3]|c->r[3]; // 800F2C58
  cmps(c,0,(int32_t)c->r[26],0); // 800F2C5C
  if (crb(c,2)) { goto L_800F2C94; } // 800F2C60
  W32(c->r[31]+0x000000ACu,c->r[1]); // 800F2C64
  c->r[4]=R32(c->r[25]+0x00000004u); // 800F2C68
  c->r[5]=c->r[28]|c->r[28]; // 800F2C6C
  c->lr=0x800F2C74u; f_800F3190(c); // 800F2C70
  goto L_800F2C94; // 800F2C74
  c->r[3]=c->r[26]|c->r[26]; // 800F2C78
  c->r[4]=c->r[27]|c->r[27]; // 800F2C7C
  c->lr=0x800F2C84u; f_800F41E4(c); // 800F2C80
  c->r[3]=0u+0x00000000u; // 800F2C84
  c->r[4]=0u+0x00000000u; // 800F2C88
  c->r[5]=0u+0x00000000u; // 800F2C8C
  c->lr=0x800F2C94u; f_802F2B48(c); // 800F2C90
L_800F2C94:;
  W32(c->r[25]+0x0000000Cu,c->r[26]); // 800F2C94
  c->r[28]=0u+0x00000000u; // 800F2C98
  c->r[27]=R32(c->r[25]+0x00000010u); // 800F2C9C
  cmps(c,0,(int32_t)c->r[27],0); // 800F2CA0
  if (!crb(c,1)) { goto L_800F2D28; } // 800F2CA4
  c->r[3]=c->r[25]|c->r[25]; // 800F2CA8
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)312); // 800F2CAC
  c->r[4]=c->r[4]+0x00000020u; // 800F2CB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2CB4
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2CB8
  c->ctr=c->r[12]; // 800F2CBC
  if (true) { c->lr=0x800F2CC4u; dispatch(c,c->ctr); } // 800F2CC0
  c->r[26]=c->r[3]|c->r[3]; // 800F2CC4
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)312); // 800F2CC8
  c->r[3]=c->r[3]+0x00000010u; // 800F2CCC
  c->r[4]=c->r[26]|c->r[26]; // 800F2CD0
  c->lr=0x800F2CD8u; f_800F41F4(c); // 800F2CD4
  c->r[28]=c->r[3]|c->r[3]; // 800F2CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800F2CDC
  if (crb(c,2)) { goto L_800F2D28; } // 800F2CE0
  W32(c->r[31]+0x00000094u,c->r[1]); // 800F2CE4
  c->r[4]=0u+0x80290000u; // 800F2CE8
  c->r[4]=c->r[4]+0x00003F64u; // 800F2CEC
  c->r[5]=0u+0x80290000u; // 800F2CF0
  c->r[5]=c->r[5]+0x00003FBCu; // 800F2CF4
  c->r[6]=0u+0x00000138u; // 800F2CF8
  c->r[7]=c->r[27]|c->r[27]; // 800F2CFC
  c->lr=0x800F2D04u; f_802F05F0(c); // 800F2D00
  c->r[28]=c->r[3]|c->r[3]; // 800F2D04
  goto L_800F2D28; // 800F2D08
  c->r[3]=c->r[28]|c->r[28]; // 800F2D0C
  c->r[4]=c->r[26]|c->r[26]; // 800F2D10
  c->lr=0x800F2D18u; f_800F41F0(c); // 800F2D14
  c->r[3]=0u+0x00000000u; // 800F2D18
  c->r[4]=0u+0x00000000u; // 800F2D1C
  c->r[5]=0u+0x00000000u; // 800F2D20
  c->lr=0x800F2D28u; f_802F2B48(c); // 800F2D24
L_800F2D28:;
  c->r[3]=c->r[25]|c->r[25]; // 800F2D28
  c->r[4]=0u+0x00000024u; // 800F2D2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2D30
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2D34
  c->ctr=c->r[12]; // 800F2D38
  if (true) { c->lr=0x800F2D40u; dispatch(c,c->ctr); } // 800F2D3C
  c->r[27]=c->r[3]|c->r[3]; // 800F2D40
  c->r[3]=0u+0x00000024u; // 800F2D44
  c->r[4]=c->r[27]|c->r[27]; // 800F2D48
  c->lr=0x800F2D50u; f_800F41E8(c); // 800F2D4C
  c->r[26]=c->r[3]|c->r[3]; // 800F2D50
  cmps(c,0,(int32_t)c->r[26],0); // 800F2D54
  if (crb(c,2)) { goto L_800F2D8C; } // 800F2D58
  W32(c->r[31]+0x0000007Cu,c->r[1]); // 800F2D5C
  c->r[4]=R32(c->r[25]+0x00000010u); // 800F2D60
  c->r[5]=c->r[28]|c->r[28]; // 800F2D64
  c->lr=0x800F2D6Cu; f_800F30EC(c); // 800F2D68
  goto L_800F2D8C; // 800F2D6C
  c->r[3]=c->r[26]|c->r[26]; // 800F2D70
  c->r[4]=c->r[27]|c->r[27]; // 800F2D74
  c->lr=0x800F2D7Cu; f_800F41E4(c); // 800F2D78
  c->r[3]=0u+0x00000000u; // 800F2D7C
  c->r[4]=0u+0x00000000u; // 800F2D80
  c->r[5]=0u+0x00000000u; // 800F2D84
  c->lr=0x800F2D8Cu; f_802F2B48(c); // 800F2D88
L_800F2D8C:;
  W32(c->r[25]+0x00000018u,c->r[26]); // 800F2D8C
  c->r[28]=0u+0x00000000u; // 800F2D90
  c->r[27]=R32(c->r[25]+0x0000001Cu); // 800F2D94
  cmps(c,0,(int32_t)c->r[27],0); // 800F2D98
  if (!crb(c,1)) { goto L_800F2E20; } // 800F2D9C
  c->r[3]=c->r[25]|c->r[25]; // 800F2DA0
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)188); // 800F2DA4
  c->r[4]=c->r[4]+0x00000020u; // 800F2DA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2DAC
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2DB0
  c->ctr=c->r[12]; // 800F2DB4
  if (true) { c->lr=0x800F2DBCu; dispatch(c,c->ctr); } // 800F2DB8
  c->r[26]=c->r[3]|c->r[3]; // 800F2DBC
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)188); // 800F2DC0
  c->r[3]=c->r[3]+0x00000010u; // 800F2DC4
  c->r[4]=c->r[26]|c->r[26]; // 800F2DC8
  c->lr=0x800F2DD0u; f_800F41F4(c); // 800F2DCC
  c->r[28]=c->r[3]|c->r[3]; // 800F2DD0
  cmps(c,0,(int32_t)c->r[3],0); // 800F2DD4
  if (crb(c,2)) { goto L_800F2E20; } // 800F2DD8
  W32(c->r[31]+0x00000064u,c->r[1]); // 800F2DDC
  c->r[4]=0u+0x802A0000u; // 800F2DE0
  c->r[4]=c->r[4]+0xFFFFF770u; // 800F2DE4
  c->r[5]=0u+0x802A0000u; // 800F2DE8
  c->r[5]=c->r[5]+0xFFFFFA5Cu; // 800F2DEC
  c->r[6]=0u+0x000000BCu; // 800F2DF0
  c->r[7]=c->r[27]|c->r[27]; // 800F2DF4
  c->lr=0x800F2DFCu; f_802F05F0(c); // 800F2DF8
  c->r[28]=c->r[3]|c->r[3]; // 800F2DFC
  goto L_800F2E20; // 800F2E00
  c->r[3]=c->r[28]|c->r[28]; // 800F2E04
  c->r[4]=c->r[26]|c->r[26]; // 800F2E08
  c->lr=0x800F2E10u; f_800F41F0(c); // 800F2E0C
  c->r[3]=0u+0x00000000u; // 800F2E10
  c->r[4]=0u+0x00000000u; // 800F2E14
  c->r[5]=0u+0x00000000u; // 800F2E18
  c->lr=0x800F2E20u; f_802F2B48(c); // 800F2E1C
L_800F2E20:;
  c->r[3]=c->r[25]|c->r[25]; // 800F2E20
  c->r[4]=0u+0x00000024u; // 800F2E24
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2E28
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2E2C
  c->ctr=c->r[12]; // 800F2E30
  if (true) { c->lr=0x800F2E38u; dispatch(c,c->ctr); } // 800F2E34
  c->r[27]=c->r[3]|c->r[3]; // 800F2E38
  c->r[3]=0u+0x00000024u; // 800F2E3C
  c->r[4]=c->r[27]|c->r[27]; // 800F2E40
  c->lr=0x800F2E48u; f_800F41E8(c); // 800F2E44
  c->r[26]=c->r[3]|c->r[3]; // 800F2E48
  cmps(c,0,(int32_t)c->r[26],0); // 800F2E4C
  if (crb(c,2)) { goto L_800F2E84; } // 800F2E50
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 800F2E54
  c->r[4]=R32(c->r[25]+0x0000001Cu); // 800F2E58
  c->r[5]=c->r[28]|c->r[28]; // 800F2E5C
  c->lr=0x800F2E64u; f_800F3048(c); // 800F2E60
  goto L_800F2E84; // 800F2E64
  c->r[3]=c->r[26]|c->r[26]; // 800F2E68
  c->r[4]=c->r[27]|c->r[27]; // 800F2E6C
  c->lr=0x800F2E74u; f_800F41E4(c); // 800F2E70
  c->r[3]=0u+0x00000000u; // 800F2E74
  c->r[4]=0u+0x00000000u; // 800F2E78
  c->r[5]=0u+0x00000000u; // 800F2E7C
  c->lr=0x800F2E84u; f_802F2B48(c); // 800F2E80
L_800F2E84:;
  W32(c->r[25]+0x00000024u,c->r[26]); // 800F2E84
  c->r[28]=0u+0x00000000u; // 800F2E88
  c->r[27]=R32(c->r[25]+0x00000028u); // 800F2E8C
  cmps(c,0,(int32_t)c->r[27],0); // 800F2E90
  if (!crb(c,1)) { goto L_800F2F18; } // 800F2E94
  c->r[3]=c->r[25]|c->r[25]; // 800F2E98
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)228); // 800F2E9C
  c->r[4]=c->r[4]+0x00000020u; // 800F2EA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2EA4
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2EA8
  c->ctr=c->r[12]; // 800F2EAC
  if (true) { c->lr=0x800F2EB4u; dispatch(c,c->ctr); } // 800F2EB0
  c->r[26]=c->r[3]|c->r[3]; // 800F2EB4
  c->r[3]=(uint32_t)((int32_t)c->r[27]*(int32_t)228); // 800F2EB8
  c->r[3]=c->r[3]+0x00000010u; // 800F2EBC
  c->r[4]=c->r[26]|c->r[26]; // 800F2EC0
  c->lr=0x800F2EC8u; f_800F41F4(c); // 800F2EC4
  c->r[28]=c->r[3]|c->r[3]; // 800F2EC8
  cmps(c,0,(int32_t)c->r[3],0); // 800F2ECC
  if (crb(c,2)) { goto L_800F2F18; } // 800F2ED0
  W32(c->r[31]+0x00000034u,c->r[1]); // 800F2ED4
  c->r[4]=0u+0x802A0000u; // 800F2ED8
  c->r[4]=c->r[4]+0xFFFFE870u; // 800F2EDC
  c->r[5]=0u+0x802A0000u; // 800F2EE0
  c->r[5]=c->r[5]+0xFFFFE880u; // 800F2EE4
  c->r[6]=0u+0x000000E4u; // 800F2EE8
  c->r[7]=c->r[27]|c->r[27]; // 800F2EEC
  c->lr=0x800F2EF4u; f_802F05F0(c); // 800F2EF0
  c->r[28]=c->r[3]|c->r[3]; // 800F2EF4
  goto L_800F2F18; // 800F2EF8
  c->r[3]=c->r[28]|c->r[28]; // 800F2EFC
  c->r[4]=c->r[26]|c->r[26]; // 800F2F00
  c->lr=0x800F2F08u; f_800F41F0(c); // 800F2F04
  c->r[3]=0u+0x00000000u; // 800F2F08
  c->r[4]=0u+0x00000000u; // 800F2F0C
  c->r[5]=0u+0x00000000u; // 800F2F10
  c->lr=0x800F2F18u; f_802F2B48(c); // 800F2F14
L_800F2F18:;
  c->r[3]=c->r[25]|c->r[25]; // 800F2F18
  c->r[4]=0u+0x00000024u; // 800F2F1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F2F20
  c->r[12]=R32(c->r[12]+0x00000060u); // 800F2F24
  c->ctr=c->r[12]; // 800F2F28
  if (true) { c->lr=0x800F2F30u; dispatch(c,c->ctr); } // 800F2F2C
  c->r[27]=c->r[3]|c->r[3]; // 800F2F30
  c->r[3]=0u+0x00000024u; // 800F2F34
  c->r[4]=c->r[27]|c->r[27]; // 800F2F38
  c->lr=0x800F2F40u; f_800F41E8(c); // 800F2F3C
  c->r[26]=c->r[3]|c->r[3]; // 800F2F40
  cmps(c,0,(int32_t)c->r[26],0); // 800F2F44
  if (crb(c,2)) { goto L_800F2F7C; } // 800F2F48
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 800F2F4C
  c->r[4]=R32(c->r[25]+0x00000028u); // 800F2F50
  c->r[5]=c->r[28]|c->r[28]; // 800F2F54
  c->lr=0x800F2F5Cu; f_800F2FA4(c); // 800F2F58
  goto L_800F2F7C; // 800F2F5C
  c->r[3]=c->r[26]|c->r[26]; // 800F2F60
  c->r[4]=c->r[27]|c->r[27]; // 800F2F64
  c->lr=0x800F2F6Cu; f_800F41E4(c); // 800F2F68
  c->r[3]=0u+0x00000000u; // 800F2F6C
  c->r[4]=0u+0x00000000u; // 800F2F70
  c->r[5]=0u+0x00000000u; // 800F2F74
  c->lr=0x800F2F7Cu; f_802F2B48(c); // 800F2F78
L_800F2F7C:;
  W32(c->r[25]+0x00000030u,c->r[26]); // 800F2F7C
  c->r[3]=c->r[25]|c->r[25]; // 800F2F80
  c->r[10]=c->r[31]|c->r[31]; // 800F2F84
  c->r[11]=c->r[10]+0x000000F0u; // 800F2F88
  c->lr=0x800F2F90u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2F8C
  c->r[10]=R32(c->r[1]+0x00000000u); // 800F2F90
  c->r[0]=R32(c->r[10]+0x00000004u); // 800F2F94
  c->r[1]=c->r[10]|c->r[10]; // 800F2F98
  c->lr=c->r[0]; // 800F2F9C
  return; // 800F2FA0
}

// fn_800F2FA4
void f_800F2FA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2FA4
  c->r[0]=c->lr; // 800F2FA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2FAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2FB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2FB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2FB8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F2FBC
  c->r[28]=c->r[3]|c->r[3]; // 800F2FC0
  c->r[29]=c->r[4]|c->r[4]; // 800F2FC4
  c->r[30]=c->r[5]|c->r[5]; // 800F2FC8
  c->r[4]=0u+0x80460000u; // 800F2FCC
  c->r[0]=c->r[4]+0x0000201Cu; // 800F2FD0
  W32(c->r[3]+0x00000020u,c->r[0]); // 800F2FD4
  c->r[3]=c->r[3]+0x00000004u; // 800F2FD8
  c->r[4]=0u+0x00000000u; // 800F2FDC
  c->lr=0x800F2FE4u; f_8028CA58(c); // 800F2FE0
  c->r[3]=c->r[28]+0x00000010u; // 800F2FE4
  c->r[4]=0u+0x00000000u; // 800F2FE8
  c->lr=0x800F2FF0u; f_8028CA58(c); // 800F2FEC
  c->r[0]=0u+0x000000E4u; // 800F2FF0
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800F2FF4
  W32(c->r[28]+0x00000000u,c->r[30]); // 800F2FF8
  c->r[31]=0u+0x00000000u; // 800F2FFC
  goto L_800F301C; // 800F3000
L_800F3004:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 800F3004
  c->r[3]=c->r[28]+0x00000004u; // 800F3008
  c->r[4]=c->r[30]|c->r[30]; // 800F300C
  c->lr=0x800F3014u; f_8028CA70(c); // 800F3010
  c->r[30]=c->r[30]+0x000000E4u; // 800F3014
  c->r[31]=c->r[31]+0x00000001u; // 800F3018
L_800F301C:;
  cmpu(c,0,c->r[31],c->r[29]); // 800F301C
  if (crb(c,0)) { IRQCHK(c); goto L_800F3004; } // 800F3020
  c->r[3]=c->r[28]|c->r[28]; // 800F3024
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3028
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F302C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F3030
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F3034
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3038
  c->lr=c->r[0]; // 800F303C
  c->r[1]=c->r[1]+0x00000020u; // 800F3040
  return; // 800F3044
}

// fn_800F3048
void f_800F3048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3048
  c->r[0]=c->lr; // 800F304C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3054
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3058
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F305C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F3060
  c->r[28]=c->r[3]|c->r[3]; // 800F3064
  c->r[29]=c->r[4]|c->r[4]; // 800F3068
  c->r[30]=c->r[5]|c->r[5]; // 800F306C
  c->r[4]=0u+0x80460000u; // 800F3070
  c->r[0]=c->r[4]+0x00002058u; // 800F3074
  W32(c->r[3]+0x00000020u,c->r[0]); // 800F3078
  c->r[3]=c->r[3]+0x00000004u; // 800F307C
  c->r[4]=0u+0x00000000u; // 800F3080
  c->lr=0x800F3088u; f_8028CA58(c); // 800F3084
  c->r[3]=c->r[28]+0x00000010u; // 800F3088
  c->r[4]=0u+0x00000000u; // 800F308C
  c->lr=0x800F3094u; f_8028CA58(c); // 800F3090
  c->r[0]=0u+0x000000BCu; // 800F3094
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800F3098
  W32(c->r[28]+0x00000000u,c->r[30]); // 800F309C
  c->r[31]=0u+0x00000000u; // 800F30A0
  goto L_800F30C0; // 800F30A4
L_800F30A8:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 800F30A8
  c->r[3]=c->r[28]+0x00000004u; // 800F30AC
  c->r[4]=c->r[30]|c->r[30]; // 800F30B0
  c->lr=0x800F30B8u; f_8028CA70(c); // 800F30B4
  c->r[30]=c->r[30]+0x000000BCu; // 800F30B8
  c->r[31]=c->r[31]+0x00000001u; // 800F30BC
L_800F30C0:;
  cmpu(c,0,c->r[31],c->r[29]); // 800F30C0
  if (crb(c,0)) { IRQCHK(c); goto L_800F30A8; } // 800F30C4
  c->r[3]=c->r[28]|c->r[28]; // 800F30C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F30CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F30D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F30D4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F30D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F30DC
  c->lr=c->r[0]; // 800F30E0
  c->r[1]=c->r[1]+0x00000020u; // 800F30E4
  return; // 800F30E8
}

// fn_800F30EC
void f_800F30EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F30EC
  c->r[0]=c->lr; // 800F30F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F30F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F30F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F30FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3100
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F3104
  c->r[28]=c->r[3]|c->r[3]; // 800F3108
  c->r[29]=c->r[4]|c->r[4]; // 800F310C
  c->r[30]=c->r[5]|c->r[5]; // 800F3110
  c->r[4]=0u+0x80460000u; // 800F3114
  c->r[0]=c->r[4]+0x0000209Cu; // 800F3118
  W32(c->r[3]+0x00000020u,c->r[0]); // 800F311C
  c->r[3]=c->r[3]+0x00000004u; // 800F3120
  c->r[4]=0u+0x00000000u; // 800F3124
  c->lr=0x800F312Cu; f_8028CA58(c); // 800F3128
  c->r[3]=c->r[28]+0x00000010u; // 800F312C
  c->r[4]=0u+0x00000000u; // 800F3130
  c->lr=0x800F3138u; f_8028CA58(c); // 800F3134
  c->r[0]=0u+0x00000138u; // 800F3138
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800F313C
  W32(c->r[28]+0x00000000u,c->r[30]); // 800F3140
  c->r[31]=0u+0x00000000u; // 800F3144
  goto L_800F3164; // 800F3148
L_800F314C:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 800F314C
  c->r[3]=c->r[28]+0x00000004u; // 800F3150
  c->r[4]=c->r[30]|c->r[30]; // 800F3154
  c->lr=0x800F315Cu; f_8028CA70(c); // 800F3158
  c->r[30]=c->r[30]+0x00000138u; // 800F315C
  c->r[31]=c->r[31]+0x00000001u; // 800F3160
L_800F3164:;
  cmpu(c,0,c->r[31],c->r[29]); // 800F3164
  if (crb(c,0)) { IRQCHK(c); goto L_800F314C; } // 800F3168
  c->r[3]=c->r[28]|c->r[28]; // 800F316C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3170
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3174
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F3178
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F317C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3180
  c->lr=c->r[0]; // 800F3184
  c->r[1]=c->r[1]+0x00000020u; // 800F3188
  return; // 800F318C
}

// fn_800F3190
void f_800F3190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3190
  c->r[0]=c->lr; // 800F3194
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F319C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F31A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F31A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F31A8
  c->r[28]=c->r[3]|c->r[3]; // 800F31AC
  c->r[29]=c->r[4]|c->r[4]; // 800F31B0
  c->r[30]=c->r[5]|c->r[5]; // 800F31B4
  c->r[4]=0u+0x80460000u; // 800F31B8
  c->r[0]=c->r[4]+0x000020D8u; // 800F31BC
  W32(c->r[3]+0x00000020u,c->r[0]); // 800F31C0
  c->r[3]=c->r[3]+0x00000004u; // 800F31C4
  c->r[4]=0u+0x00000000u; // 800F31C8
  c->lr=0x800F31D0u; f_8028CA58(c); // 800F31CC
  c->r[3]=c->r[28]+0x00000010u; // 800F31D0
  c->r[4]=0u+0x00000000u; // 800F31D4
  c->lr=0x800F31DCu; f_8028CA58(c); // 800F31D8
  c->r[0]=0u+0x000000A0u; // 800F31DC
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800F31E0
  W32(c->r[28]+0x00000000u,c->r[30]); // 800F31E4
  c->r[31]=0u+0x00000000u; // 800F31E8
  goto L_800F3208; // 800F31EC
L_800F31F0:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 800F31F0
  c->r[3]=c->r[28]+0x00000004u; // 800F31F4
  c->r[4]=c->r[30]|c->r[30]; // 800F31F8
  c->lr=0x800F3200u; f_8028CA70(c); // 800F31FC
  c->r[30]=c->r[30]+0x000000A0u; // 800F3200
  c->r[31]=c->r[31]+0x00000001u; // 800F3204
L_800F3208:;
  cmpu(c,0,c->r[31],c->r[29]); // 800F3208
  if (crb(c,0)) { IRQCHK(c); goto L_800F31F0; } // 800F320C
  c->r[3]=c->r[28]|c->r[28]; // 800F3210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3214
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3218
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F321C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F3220
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3224
  c->lr=c->r[0]; // 800F3228
  c->r[1]=c->r[1]+0x00000020u; // 800F322C
  return; // 800F3230
}

// fn_800F3234
void f_800F3234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3234
  c->r[0]=c->lr; // 800F3238
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F323C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3240
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3244
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3248
  c->r[30]=c->r[3]|c->r[3]; // 800F324C
  c->r[29]=c->r[4]|c->r[4]; // 800F3250
  c->r[3]=0u+0x00000018u; // 800F3254
  c->r[4]=0u+0x00000020u; // 800F3258
  c->lr=0x800F3260u; f_800F41FC(c); // 800F325C
  c->r[31]=c->r[3]|c->r[3]; // 800F3260
  c->r[3]=c->r[29]|c->r[29]; // 800F3264
  c->r[4]=0u+0x00000020u; // 800F3268
  c->lr=0x800F3270u; f_800F41FC(c); // 800F326C
  c->r[4]=R32(c->r[30]+0x00000040u); // 800F3270
  goto L_800F33B0; // 800F3274
L_800F3278:;
  c->r[6]=R32(c->r[4]+0x00000010u); // 800F3278
  cmpu(c,0,c->r[6],c->r[3]); // 800F327C
  if (crb(c,0)) { goto L_800F33AC; } // 800F3280
  c->r[5]=c->r[3]+c->r[31]; // 800F3284
  c->r[0]=c->r[5]+0x00000020u; // 800F3288
  cmpu(c,0,c->r[6],c->r[0]); // 800F328C
  if (!crb(c,0)) { goto L_800F32F8; } // 800F3290
  c->r[3]=R32(c->r[4]+0x00000000u); // 800F3294
  cmps(c,0,(int32_t)c->r[3],0); // 800F3298
  if (crb(c,2)) { goto L_800F32AC; } // 800F329C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F32A0
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F32A4
  goto L_800F32B4; // 800F32A8
L_800F32AC:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F32AC
  W32(c->r[30]+0x00000040u,c->r[0]); // 800F32B0
L_800F32B4:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800F32B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F32B8
  if (crb(c,2)) { goto L_800F32C8; } // 800F32BC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F32C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F32C4
L_800F32C8:;
  c->r[3]=R32(c->r[30]+0x0000003Cu); // 800F32C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F32CC
  if (crb(c,2)) { goto L_800F32D8; } // 800F32D0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F32D4
L_800F32D8:;
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F32D8
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F32DC
  c->r[0]=0u+0x00000000u; // 800F32E0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F32E4
  c->r[0]=0u+0x00000001u; // 800F32E8
  W8(c->r[4]+0x00000014u,c->r[0]); // 800F32EC
  W32(c->r[30]+0x0000003Cu,c->r[4]); // 800F32F0
  goto L_800F33A4; // 800F32F4
L_800F32F8:;
  c->r[0]=c->r[4]+c->r[31]; // 800F32F8
  c->r[6]=c->r[3]+c->r[0]; // 800F32FC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F3300
  W32(c->r[6]+0x00000000u,c->r[0]); // 800F3304
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F3308
  W32(c->r[6]+0x00000004u,c->r[0]); // 800F330C
  c->r[0]=R32(c->r[4]+0x00000010u); // 800F3310
  c->r[0]=c->r[0]-c->r[3]; // 800F3314
  c->r[0]=c->r[0]-c->r[31]; // 800F3318
  W32(c->r[6]+0x00000010u,c->r[0]); // 800F331C
  c->r[0]=0u+0x00000000u; // 800F3320
  W8(c->r[6]+0x00000014u,c->r[0]); // 800F3324
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800F3328
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800F332C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800F3330
  cmps(c,0,(int32_t)c->r[5],0); // 800F3334
  if (crb(c,2)) { goto L_800F3340; } // 800F3338
  W32(c->r[5]+0x00000008u,c->r[6]); // 800F333C
L_800F3340:;
  W32(c->r[6]+0x00000008u,c->r[4]); // 800F3340
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 800F3344
  c->r[5]=R32(c->r[4]+0x00000000u); // 800F3348
  cmps(c,0,(int32_t)c->r[5],0); // 800F334C
  if (crb(c,2)) { goto L_800F335C; } // 800F3350
  W32(c->r[5]+0x00000004u,c->r[6]); // 800F3354
  goto L_800F3360; // 800F3358
L_800F335C:;
  W32(c->r[30]+0x00000040u,c->r[6]); // 800F335C
L_800F3360:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F3360
  cmps(c,0,(int32_t)c->r[0],0); // 800F3364
  if (crb(c,2)) { goto L_800F3374; } // 800F3368
  c->r[5]=R32(c->r[6]+0x00000004u); // 800F336C
  W32(c->r[5]+0x00000000u,c->r[6]); // 800F3370
L_800F3374:;
  c->r[5]=R32(c->r[30]+0x0000003Cu); // 800F3374
  cmps(c,0,(int32_t)c->r[5],0); // 800F3378
  if (crb(c,2)) { goto L_800F3384; } // 800F337C
  W32(c->r[5]+0x00000000u,c->r[4]); // 800F3380
L_800F3384:;
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 800F3384
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F3388
  c->r[0]=0u+0x00000000u; // 800F338C
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F3390
  W32(c->r[4]+0x00000010u,c->r[3]); // 800F3394
  c->r[0]=0u+0x00000001u; // 800F3398
  W8(c->r[4]+0x00000014u,c->r[0]); // 800F339C
  W32(c->r[30]+0x0000003Cu,c->r[4]); // 800F33A0
L_800F33A4:;
  c->r[3]=c->r[4]+c->r[31]; // 800F33A4
  goto L_800F33D8; // 800F33A8
L_800F33AC:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 800F33AC
L_800F33B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F33B0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3278; } // 800F33B4
  c->r[3]=0u+0x80460000u; // 800F33B8
  c->r[3]=c->r[3]+0x00002484u; // 800F33BC
  c->r[4]=0u+0x0000025Du; // 800F33C0
  c->r[5]=0u+0x80460000u; // 800F33C4
  c->r[5]=c->r[5]+0x00002468u; // 800F33C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F33CC
  c->lr=0x800F33D4u; f_80292868(c); // 800F33D0
  c->r[3]=0u+0x00000000u; // 800F33D4
L_800F33D8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F33D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F33DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F33E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F33E4
  c->lr=c->r[0]; // 800F33E8
  c->r[1]=c->r[1]+0x00000020u; // 800F33EC
  return; // 800F33F0
}

// fn_800F33F4
void f_800F33F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F33F4
  c->r[0]=c->lr; // 800F33F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F33FC
  c->r[11]=c->r[1]+0x00000020u; // 800F3400
  c->lr=0x800F3408u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F3404
  c->r[27]=c->r[3]|c->r[3]; // 800F3408
  c->r[28]=c->r[5]|c->r[5]; // 800F340C
  c->r[29]=c->r[6]|c->r[6]; // 800F3410
  c->r[30]=c->r[7]|c->r[7]; // 800F3414
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 800F3418
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)312); // 800F341C
  c->r[3]=c->r[3]+0x00000020u; // 800F3420
  c->r[4]=0u+0x00000020u; // 800F3424
  c->lr=0x800F342Cu; f_800F41FC(c); // 800F3428
  c->r[31]=c->r[3]|c->r[3]; // 800F342C
  c->r[0]=rotl(c->r[27],0)&0x0000FFFFu; // 800F3430
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)160); // 800F3434
  c->r[3]=c->r[3]+0x00000020u; // 800F3438
  c->r[4]=0u+0x00000020u; // 800F343C
  c->lr=0x800F3444u; f_800F41FC(c); // 800F3440
  c->r[31]=c->r[3]+c->r[31]; // 800F3444
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 800F3448
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)188); // 800F344C
  c->r[3]=c->r[3]+0x00000020u; // 800F3450
  c->r[4]=0u+0x00000020u; // 800F3454
  c->lr=0x800F345Cu; f_800F41FC(c); // 800F3458
  c->r[31]=c->r[31]+c->r[3]; // 800F345C
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 800F3460
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)228); // 800F3464
  c->r[3]=c->r[3]+0x00000020u; // 800F3468
  c->r[4]=0u+0x00000020u; // 800F346C
  c->lr=0x800F3474u; f_800F41FC(c); // 800F3470
  c->r[31]=c->r[31]+c->r[3]; // 800F3474
  c->r[3]=(uint32_t)((int32_t)c->r[30]*(int32_t)28); // 800F3478
  c->r[3]=c->r[3]+0x00000020u; // 800F347C
  c->r[4]=0u+0x00000020u; // 800F3480
  c->lr=0x800F3488u; f_800F41FC(c); // 800F3484
  c->r[3]=c->r[31]+c->r[3]; // 800F3488
  c->r[3]=c->r[3]+0x00000220u; // 800F348C
  c->r[11]=c->r[1]+0x00000020u; // 800F3490
  c->lr=0x800F3498u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F3494
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3498
  c->lr=c->r[0]; // 800F349C
  c->r[1]=c->r[1]+0x00000020u; // 800F34A0
  return; // 800F34A4
}

// fn_800F34A8
void f_800F34A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[4]+0x00000008u); // 800F34A8
  c->r[0]=c->r[3]+0x00010000u; // 800F34AC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F34B0
  return; // 800F34B4
}

// fn_800F34B8
void f_800F34B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[4]+0x00000008u); // 800F34B8
  c->r[0]=c->r[3]+0x00010000u; // 800F34BC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F34C0
  return; // 800F34C4
}

// fn_800F34C8
void f_800F34C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[4]+0x00000008u); // 800F34C8
  c->r[0]=c->r[3]+0x00010000u; // 800F34CC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F34D0
  return; // 800F34D4
}

// fn_800F34D8
void f_800F34D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[4]+0x00000008u); // 800F34D8
  c->r[0]=c->r[3]+0x00010000u; // 800F34DC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F34E0
  return; // 800F34E4
}

// fn_800F34E8
void f_800F34E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F34E8
  c->r[0]=c->lr; // 800F34EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F34F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F34F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F34F8
  c->r[30]=c->r[3]|c->r[3]; // 800F34FC
  c->r[31]=c->r[4]|c->r[4]; // 800F3500
  cmps(c,0,(int32_t)c->r[3],0); // 800F3504
  if (crb(c,2)) { goto L_800F3528; } // 800F3508
  c->r[4]=0u+0x00000000u; // 800F350C
  c->lr=0x800F3514u; f_800F4190(c); // 800F3510
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F3514
  cmps(c,0,(int32_t)c->r[0],0); // 800F3518
  if (!crb(c,1)) { goto L_800F3528; } // 800F351C
  c->r[3]=c->r[30]|c->r[30]; // 800F3520
  c->lr=0x800F3528u; f_80047B20(c); // 800F3524
L_800F3528:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3528
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F352C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3530
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3534
  c->lr=c->r[0]; // 800F3538
  c->r[1]=c->r[1]+0x00000010u; // 800F353C
  return; // 800F3540
}

// fn_800F3544
void f_800F3544(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3544
  c->r[0]=c->lr; // 800F3548
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F354C
  c->r[11]=c->r[1]+0x00000030u; // 800F3550
  c->lr=0x800F3558u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F3554
  c->r[22]=c->r[3]|c->r[3]; // 800F3558
  c->r[3]=R32(c->r[3]+0x00000024u); // 800F355C
  c->r[3]=c->r[3]+0x00000010u; // 800F3560
  c->lr=0x800F3568u; f_8004B018(c); // 800F3564
  c->r[26]=c->r[3]|c->r[3]; // 800F3568
  c->r[27]=0u+0x80460000u; // 800F356C
  c->r[28]=0u+0x80460000u; // 800F3570
  c->r[30]=0u+0x80460000u; // 800F3574
  c->r[31]=0u+0x80460000u; // 800F3578
  goto L_800F365C; // 800F357C
L_800F3580:;
  c->r[3]=R32(c->r[22]+0x00000024u); // 800F3580
  c->r[3]=c->r[3]+0x00000010u; // 800F3584
  c->r[4]=c->r[26]|c->r[26]; // 800F3588
  c->lr=0x800F3590u; f_8028CCD8(c); // 800F358C
  c->r[25]=c->r[3]|c->r[3]; // 800F3590
  c->r[24]=R32(c->r[26]+0x00000044u); // 800F3594
  goto L_800F3650; // 800F3598
L_800F359C:;
  c->r[0]=R16(c->r[26]+0x0000004Eu); // 800F359C
  c->r[3]=c->r[24]+c->r[0]; // 800F35A0
  c->r[23]=R32(c->r[3]+0x00000004u); // 800F35A4
  c->r[3]=c->r[24]|c->r[24]; // 800F35A8
  c->lr=0x800F35B0u; f_800F43B0(c); // 800F35AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F35B0
  if (crb(c,2)) { goto L_800F35CC; } // 800F35B4
  c->r[3]=c->r[27]+0x00002454u; // 800F35B8
  c->r[4]=0u+0x00000193u; // 800F35BC
  c->r[5]=c->r[28]+0x00002424u; // 800F35C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F35C4
  c->lr=0x800F35CCu; f_80292868(c); // 800F35C8
L_800F35CC:;
  c->r[29]=0u+0x00000000u; // 800F35CC
  c->r[3]=R32(c->r[24]+0x000000C8u); // 800F35D0
  c->lr=0x800F35D8u; f_800F43A8(c); // 800F35D4
  cmps(c,0,(int32_t)c->r[3],1); // 800F35D8
  if (crb(c,2)) { goto L_800F3600; } // 800F35DC
  c->r[3]=R32(c->r[24]+0x000000C8u); // 800F35E0
  c->lr=0x800F35E8u; f_800F43A8(c); // 800F35E4
  cmps(c,0,(int32_t)c->r[3],2); // 800F35E8
  if (crb(c,2)) { goto L_800F3600; } // 800F35EC
  c->r[3]=R32(c->r[24]+0x000000C8u); // 800F35F0
  c->lr=0x800F35F8u; f_800F43A8(c); // 800F35F4
  cmps(c,0,(int32_t)c->r[3],3); // 800F35F8
  if (!crb(c,2)) { goto L_800F3604; } // 800F35FC
L_800F3600:;
  c->r[29]=0u+0x00000001u; // 800F3600
L_800F3604:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F3604
  if (!crb(c,2)) { goto L_800F3620; } // 800F3608
  c->r[3]=c->r[30]+0x00002410u; // 800F360C
  c->r[4]=0u+0x00000196u; // 800F3610
  c->r[5]=c->r[31]+0x000022E8u; // 800F3614
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3618
  c->lr=0x800F3620u; f_80292868(c); // 800F361C
L_800F3620:;
  c->r[3]=R32(c->r[24]+0x000000C8u); // 800F3620
  c->r[4]=c->r[24]|c->r[24]; // 800F3624
  c->lr=0x800F362Cu; f_800F4428(c); // 800F3628
  c->r[3]=R32(c->r[22]+0x00000030u); // 800F362C
  c->r[3]=c->r[3]+0x00000010u; // 800F3630
  c->r[4]=c->r[24]|c->r[24]; // 800F3634
  c->lr=0x800F363Cu; f_8028CC6C(c); // 800F3638
  c->r[3]=R32(c->r[22]+0x00000030u); // 800F363C
  c->r[3]=c->r[3]+0x00000004u; // 800F3640
  c->r[4]=c->r[24]|c->r[24]; // 800F3644
  c->lr=0x800F364Cu; f_8028CA70(c); // 800F3648
  c->r[24]=c->r[23]|c->r[23]; // 800F364C
L_800F3650:;
  cmps(c,0,(int32_t)c->r[24],0); // 800F3650
  if (!crb(c,2)) { IRQCHK(c); goto L_800F359C; } // 800F3654
  c->r[26]=c->r[25]|c->r[25]; // 800F3658
L_800F365C:;
  cmps(c,0,(int32_t)c->r[26],0); // 800F365C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3580; } // 800F3660
  c->r[3]=R32(c->r[22]+0x00000024u); // 800F3664
  cmps(c,0,(int32_t)c->r[3],0); // 800F3668
  if (crb(c,2)) { goto L_800F3674; } // 800F366C
  c->lr=0x800F3674u; f_800F3844(c); // 800F3670
L_800F3674:;
  c->r[3]=R32(c->r[22]+0x00000018u); // 800F3674
  cmps(c,0,(int32_t)c->r[3],0); // 800F3678
  if (crb(c,2)) { goto L_800F3684; } // 800F367C
  c->lr=0x800F3684u; f_800F3780(c); // 800F3680
L_800F3684:;
  c->r[3]=R32(c->r[22]+0x0000000Cu); // 800F3684
  cmps(c,0,(int32_t)c->r[3],0); // 800F3688
  if (crb(c,2)) { goto L_800F3694; } // 800F368C
  c->lr=0x800F3694u; f_800F36AC(c); // 800F3690
L_800F3694:;
  c->r[11]=c->r[1]+0x00000030u; // 800F3694
  c->lr=0x800F369Cu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F3698
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F369C
  c->lr=c->r[0]; // 800F36A0
  c->r[1]=c->r[1]+0x00000030u; // 800F36A4
  return; // 800F36A8
}

// fn_800F36AC
void f_800F36AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F36AC
  c->r[0]=c->lr; // 800F36B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F36B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F36B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F36BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F36C0
  c->r[29]=c->r[3]|c->r[3]; // 800F36C4
  c->r[3]=c->r[3]+0x00000010u; // 800F36C8
  c->lr=0x800F36D0u; f_8004B018(c); // 800F36CC
  c->r[31]=c->r[3]|c->r[3]; // 800F36D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F36D4
  if (crb(c,2)) { goto L_800F3764; } // 800F36D8
  c->r[3]=c->r[29]+0x00000010u; // 800F36DC
  c->r[4]=c->r[31]|c->r[31]; // 800F36E0
  c->lr=0x800F36E8u; f_8028CCD8(c); // 800F36E4
  c->r[30]=c->r[3]|c->r[3]; // 800F36E8
  goto L_800F375C; // 800F36EC
L_800F36F0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F36F0
  c->lr=0x800F36F8u; f_800F43A8(c); // 800F36F4
  cmps(c,0,(int32_t)c->r[3],3); // 800F36F8
  if (!crb(c,2)) { goto L_800F3748; } // 800F36FC
  c->r[3]=c->r[31]|c->r[31]; // 800F3700
  c->lr=0x800F3708u; f_800F43B0(c); // 800F3704
  cmps(c,0,(int32_t)c->r[3],0); // 800F3708
  if (!crb(c,2)) { goto L_800F3748; } // 800F370C
  c->r[3]=R32(c->r[31]+0x00000020u); // 800F3710
  c->r[3]=c->r[3]+0x00010000u; // 800F3714
  c->r[3]=R32(c->r[3]+0xFFFFC018u); // 800F3718
  c->r[0]=R32(c->r[31]+0x00000040u); // 800F371C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 800F3720
  c->r[3]=c->r[3]+c->r[0]; // 800F3724
  c->r[4]=c->r[31]|c->r[31]; // 800F3728
  c->lr=0x800F3730u; f_800F4420(c); // 800F372C
  c->r[3]=c->r[29]+0x00000010u; // 800F3730
  c->r[4]=c->r[31]|c->r[31]; // 800F3734
  c->lr=0x800F373Cu; f_8028CC6C(c); // 800F3738
  c->r[3]=c->r[29]+0x00000004u; // 800F373C
  c->r[4]=c->r[31]|c->r[31]; // 800F3740
  c->lr=0x800F3748u; f_8028CA70(c); // 800F3744
L_800F3748:;
  c->r[31]=c->r[30]|c->r[30]; // 800F3748
  c->r[3]=c->r[29]+0x00000010u; // 800F374C
  c->r[4]=c->r[30]|c->r[30]; // 800F3750
  c->lr=0x800F3758u; f_8028CCD8(c); // 800F3754
  c->r[30]=c->r[3]|c->r[3]; // 800F3758
L_800F375C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F375C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F36F0; } // 800F3760
L_800F3764:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3764
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3768
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F376C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3770
  c->lr=c->r[0]; // 800F3774
  c->r[1]=c->r[1]+0x00000020u; // 800F3778
  return; // 800F377C
}

// fn_800F3780
void f_800F3780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3780
  c->r[0]=c->lr; // 800F3784
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3788
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F378C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3790
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3794
  c->r[29]=c->r[3]|c->r[3]; // 800F3798
  c->r[3]=c->r[3]+0x00000010u; // 800F379C
  c->lr=0x800F37A4u; f_8004B018(c); // 800F37A0
  c->r[31]=c->r[3]|c->r[3]; // 800F37A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F37A8
  if (crb(c,2)) { goto L_800F3828; } // 800F37AC
  c->r[3]=c->r[29]+0x00000010u; // 800F37B0
  c->r[4]=c->r[31]|c->r[31]; // 800F37B4
  c->lr=0x800F37BCu; f_8028CCD8(c); // 800F37B8
  c->r[30]=c->r[3]|c->r[3]; // 800F37BC
  goto L_800F3820; // 800F37C0
L_800F37C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800F37C4
  c->lr=0x800F37CCu; f_800F43A8(c); // 800F37C8
  cmps(c,0,(int32_t)c->r[3],3); // 800F37CC
  if (!crb(c,2)) { goto L_800F380C; } // 800F37D0
  c->r[3]=c->r[31]|c->r[31]; // 800F37D4
  c->lr=0x800F37DCu; f_800F43B0(c); // 800F37D8
  cmps(c,0,(int32_t)c->r[3],0); // 800F37DC
  if (!crb(c,2)) { goto L_800F380C; } // 800F37E0
  c->r[3]=R32(c->r[31]+0x000000BCu); // 800F37E4
  c->r[3]=c->r[3]+0x00000024u; // 800F37E8
  c->r[4]=c->r[31]|c->r[31]; // 800F37EC
  c->lr=0x800F37F4u; f_800F4420(c); // 800F37F0
  c->r[3]=c->r[29]+0x00000010u; // 800F37F4
  c->r[4]=c->r[31]|c->r[31]; // 800F37F8
  c->lr=0x800F3800u; f_8028CC6C(c); // 800F37FC
  c->r[3]=c->r[29]+0x00000004u; // 800F3800
  c->r[4]=c->r[31]|c->r[31]; // 800F3804
  c->lr=0x800F380Cu; f_8028CA70(c); // 800F3808
L_800F380C:;
  c->r[31]=c->r[30]|c->r[30]; // 800F380C
  c->r[3]=c->r[29]+0x00000010u; // 800F3810
  c->r[4]=c->r[30]|c->r[30]; // 800F3814
  c->lr=0x800F381Cu; f_8028CCD8(c); // 800F3818
  c->r[30]=c->r[3]|c->r[3]; // 800F381C
L_800F3820:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F3820
  if (!crb(c,2)) { IRQCHK(c); goto L_800F37C4; } // 800F3824
L_800F3828:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3828
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F382C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F3830
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3834
  c->lr=c->r[0]; // 800F3838
  c->r[1]=c->r[1]+0x00000020u; // 800F383C
  return; // 800F3840
}

// fn_800F3844
void f_800F3844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3844
  c->r[0]=c->lr; // 800F3848
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F384C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3850
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3854
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3858
  c->r[29]=c->r[3]|c->r[3]; // 800F385C
  c->r[3]=c->r[3]+0x00000010u; // 800F3860
  c->lr=0x800F3868u; f_8004B018(c); // 800F3864
  c->r[31]=c->r[3]|c->r[3]; // 800F3868
  cmps(c,0,(int32_t)c->r[3],0); // 800F386C
  if (crb(c,2)) { goto L_800F38EC; } // 800F3870
  c->r[3]=c->r[29]+0x00000010u; // 800F3874
  c->r[4]=c->r[31]|c->r[31]; // 800F3878
  c->lr=0x800F3880u; f_8028CCD8(c); // 800F387C
  c->r[30]=c->r[3]|c->r[3]; // 800F3880
  goto L_800F38E4; // 800F3884
L_800F3888:;
  c->r[3]=c->r[31]|c->r[31]; // 800F3888
  c->lr=0x800F3890u; f_800F43A8(c); // 800F388C
  cmps(c,0,(int32_t)c->r[3],3); // 800F3890
  if (!crb(c,2)) { goto L_800F38D0; } // 800F3894
  c->r[3]=c->r[31]|c->r[31]; // 800F3898
  c->lr=0x800F38A0u; f_800F43B0(c); // 800F389C
  cmps(c,0,(int32_t)c->r[3],0); // 800F38A0
  if (!crb(c,2)) { goto L_800F38D0; } // 800F38A4
  c->r[3]=R32(c->r[31]+0x00000020u); // 800F38A8
  c->r[3]=c->r[3]+0x000000C0u; // 800F38AC
  c->r[4]=c->r[31]|c->r[31]; // 800F38B0
  c->lr=0x800F38B8u; f_800F4420(c); // 800F38B4
  c->r[3]=c->r[29]+0x00000010u; // 800F38B8
  c->r[4]=c->r[31]|c->r[31]; // 800F38BC
  c->lr=0x800F38C4u; f_8028CC6C(c); // 800F38C0
  c->r[3]=c->r[29]+0x00000004u; // 800F38C4
  c->r[4]=c->r[31]|c->r[31]; // 800F38C8
  c->lr=0x800F38D0u; f_8028CA70(c); // 800F38CC
L_800F38D0:;
  c->r[31]=c->r[30]|c->r[30]; // 800F38D0
  c->r[3]=c->r[29]+0x00000010u; // 800F38D4
  c->r[4]=c->r[30]|c->r[30]; // 800F38D8
  c->lr=0x800F38E0u; f_8028CCD8(c); // 800F38DC
  c->r[30]=c->r[3]|c->r[3]; // 800F38E0
L_800F38E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F38E4
  if (!crb(c,2)) { IRQCHK(c); goto L_800F3888; } // 800F38E8
L_800F38EC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F38EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F38F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F38F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F38F8
  c->lr=c->r[0]; // 800F38FC
  c->r[1]=c->r[1]+0x00000020u; // 800F3900
  return; // 800F3904
}

// fn_800F3908
void f_800F3908(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800F3908
  cmps(c,0,(int32_t)c->r[3],0); // 800F390C
  if (!crb(c,2)) { goto L_800F391C; } // 800F3910
  c->r[3]=0u+0x00000000u; // 800F3914
  return; // 800F3918
L_800F391C:;
  f_800F3924(c); return; // 800F391C
  return; // 800F3920
}

// fn_800F3924
void f_800F3924(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3924
  c->r[0]=c->lr; // 800F3928
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F392C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3930
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3934
  c->r[30]=c->r[3]|c->r[3]; // 800F3938
  c->r[3]=c->r[3]+0x00000004u; // 800F393C
  c->lr=0x800F3944u; f_8004B018(c); // 800F3940
  c->r[31]=c->r[3]|c->r[3]; // 800F3944
  cmps(c,0,(int32_t)c->r[3],0); // 800F3948
  if (!crb(c,2)) { goto L_800F3958; } // 800F394C
  c->r[3]=0u+0x00000000u; // 800F3950
  goto L_800F398C; // 800F3954
L_800F3958:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3958
  c->r[4]=c->r[31]|c->r[31]; // 800F395C
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F3960
  c->r[12]=R32(c->r[12]+0x00000008u); // 800F3964
  c->ctr=c->r[12]; // 800F3968
  if (true) { c->lr=0x800F3970u; dispatch(c,c->ctr); } // 800F396C
  c->r[3]=c->r[30]+0x00000004u; // 800F3970
  c->r[4]=c->r[31]|c->r[31]; // 800F3974
  c->lr=0x800F397Cu; f_8028CC6C(c); // 800F3978
  c->r[3]=c->r[30]+0x00000010u; // 800F397C
  c->r[4]=c->r[31]|c->r[31]; // 800F3980
  c->lr=0x800F3988u; f_8028CA70(c); // 800F3984
  c->r[3]=c->r[31]|c->r[31]; // 800F3988
L_800F398C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F398C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3990
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3994
  c->lr=c->r[0]; // 800F3998
  c->r[1]=c->r[1]+0x00000010u; // 800F399C
  return; // 800F39A0
}

// fn_800F39A4
void f_800F39A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800F39A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F39A8
  if (crb(c,2)) return; // 800F39AC
  f_800F39B8(c); return; // 800F39B0
  return; // 800F39B4
}

// fn_800F39B8
void f_800F39B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F39B8
  c->r[0]=c->lr; // 800F39BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F39C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F39C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F39C8
  c->r[30]=c->r[3]|c->r[3]; // 800F39CC
  c->r[31]=c->r[4]|c->r[4]; // 800F39D0
  c->r[3]=c->r[3]+0x00000010u; // 800F39D4
  c->lr=0x800F39DCu; f_8028CC6C(c); // 800F39D8
  c->r[3]=c->r[30]+0x00000004u; // 800F39DC
  c->r[4]=c->r[31]|c->r[31]; // 800F39E0
  c->lr=0x800F39E8u; f_8028CA70(c); // 800F39E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F39E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F39EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F39F0
  c->lr=c->r[0]; // 800F39F4
  c->r[1]=c->r[1]+0x00000010u; // 800F39F8
  return; // 800F39FC
}

// fn_800F3A00
void f_800F3A00(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800F3A00
  cmps(c,0,(int32_t)c->r[3],0); // 800F3A04
  if (!crb(c,2)) { goto L_800F3A14; } // 800F3A08
  c->r[3]=0u+0x00000000u; // 800F3A0C
  return; // 800F3A10
L_800F3A14:;
  f_800F3A1C(c); return; // 800F3A14
  return; // 800F3A18
}

// fn_800F3A1C
void f_800F3A1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A1C
  c->r[0]=c->lr; // 800F3A20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3A24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3A28
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3A2C
  c->r[30]=c->r[3]|c->r[3]; // 800F3A30
  c->lr=0x800F3A38u; f_800F3A60(c); // 800F3A34
  c->r[31]=c->r[3]|c->r[3]; // 800F3A38
  c->r[3]=c->r[30]|c->r[30]; // 800F3A3C
  c->lr=0x800F3A44u; f_800F3A68(c); // 800F3A40
  c->r[3]=c->r[3]+c->r[31]; // 800F3A44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3A48
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3A4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3A50
  c->lr=c->r[0]; // 800F3A54
  c->r[1]=c->r[1]+0x00000010u; // 800F3A58
  return; // 800F3A5C
}

// fn_800F3A60
void f_800F3A60(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 800F3A60
  return; // 800F3A64
}

// fn_800F3A68
void f_800F3A68(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x00000018u); // 800F3A68
  return; // 800F3A6C
}

// fn_800F3A70
void f_800F3A70(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800F3A70
  cmps(c,0,(int32_t)c->r[3],0); // 800F3A74
  if (!crb(c,2)) { goto L_800F3A84; } // 800F3A78
  c->r[3]=0u+0x00000000u; // 800F3A7C
  return; // 800F3A80
L_800F3A84:;
  f_800F3A68(c); return; // 800F3A84
  return; // 800F3A88
}

// fn_800F3A8C
void f_800F3A8C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800F3A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3A90
  if (!crb(c,2)) { goto L_800F3AA0; } // 800F3A94
  c->r[3]=0u+0x00000000u; // 800F3A98
  return; // 800F3A9C
L_800F3AA0:;
  f_800F3A60(c); return; // 800F3AA0
  return; // 800F3AA4
}

// fn_800F3AA8
void f_800F3AA8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 800F3AA8
  cmps(c,0,(int32_t)c->r[3],0); // 800F3AAC
  if (!crb(c,2)) { goto L_800F3ABC; } // 800F3AB0
  c->r[3]=0u+0x00000000u; // 800F3AB4
  return; // 800F3AB8
L_800F3ABC:;
  f_800F3AC4(c); return; // 800F3ABC
  return; // 800F3AC0
}

// fn_800F3AC4
void f_800F3AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3AC4
  c->r[0]=c->lr; // 800F3AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3AD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3AD4
  c->r[30]=c->r[3]|c->r[3]; // 800F3AD8
  c->r[3]=c->r[3]+0x00000004u; // 800F3ADC
  c->lr=0x800F3AE4u; f_8004B018(c); // 800F3AE0
  c->r[31]=c->r[3]|c->r[3]; // 800F3AE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3AE8
  if (!crb(c,2)) { goto L_800F3AF8; } // 800F3AEC
  c->r[3]=0u+0x00000000u; // 800F3AF0
  goto L_800F3B2C; // 800F3AF4
L_800F3AF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3AF8
  c->r[4]=c->r[31]|c->r[31]; // 800F3AFC
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F3B00
  c->r[12]=R32(c->r[12]+0x00000008u); // 800F3B04
  c->ctr=c->r[12]; // 800F3B08
  if (true) { c->lr=0x800F3B10u; dispatch(c,c->ctr); } // 800F3B0C
  c->r[3]=c->r[30]+0x00000004u; // 800F3B10
  c->r[4]=c->r[31]|c->r[31]; // 800F3B14
  c->lr=0x800F3B1Cu; f_8028CC6C(c); // 800F3B18
  c->r[3]=c->r[30]+0x00000010u; // 800F3B1C
  c->r[4]=c->r[31]|c->r[31]; // 800F3B20
  c->lr=0x800F3B28u; f_8028CA70(c); // 800F3B24
  c->r[3]=c->r[31]|c->r[31]; // 800F3B28
L_800F3B2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3B2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3B30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3B34
  c->lr=c->r[0]; // 800F3B38
  c->r[1]=c->r[1]+0x00000010u; // 800F3B3C
  return; // 800F3B40
}

// fn_800F3B44
void f_800F3B44(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 800F3B44
  cmps(c,0,(int32_t)c->r[3],0); // 800F3B48
  if (crb(c,2)) return; // 800F3B4C
  f_800F3B58(c); return; // 800F3B50
  return; // 800F3B54
}

// fn_800F3B58
void f_800F3B58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3B58
  c->r[0]=c->lr; // 800F3B5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3B60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3B64
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3B68
  c->r[30]=c->r[3]|c->r[3]; // 800F3B6C
  c->r[31]=c->r[4]|c->r[4]; // 800F3B70
  c->r[3]=c->r[3]+0x00000010u; // 800F3B74
  c->lr=0x800F3B7Cu; f_8028CC6C(c); // 800F3B78
  c->r[3]=c->r[30]+0x00000004u; // 800F3B7C
  c->r[4]=c->r[31]|c->r[31]; // 800F3B80
  c->lr=0x800F3B88u; f_8028CA70(c); // 800F3B84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3B88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3B90
  c->lr=c->r[0]; // 800F3B94
  c->r[1]=c->r[1]+0x00000010u; // 800F3B98
  return; // 800F3B9C
}

// fn_800F3BA0
void f_800F3BA0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 800F3BA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3BA4
  if (!crb(c,2)) { goto L_800F3BB4; } // 800F3BA8
  c->r[3]=0u+0x00000000u; // 800F3BAC
  return; // 800F3BB0
L_800F3BB4:;
  f_800F3BBC(c); return; // 800F3BB4
  return; // 800F3BB8
}

// fn_800F3BBC
void f_800F3BBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3BBC
  c->r[0]=c->lr; // 800F3BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3BC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3BC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3BCC
  c->r[30]=c->r[3]|c->r[3]; // 800F3BD0
  c->lr=0x800F3BD8u; f_800F3C00(c); // 800F3BD4
  c->r[31]=c->r[3]|c->r[3]; // 800F3BD8
  c->r[3]=c->r[30]|c->r[30]; // 800F3BDC
  c->lr=0x800F3BE4u; f_800F3C08(c); // 800F3BE0
  c->r[3]=c->r[3]+c->r[31]; // 800F3BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3BE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3BF0
  c->lr=c->r[0]; // 800F3BF4
  c->r[1]=c->r[1]+0x00000010u; // 800F3BF8
  return; // 800F3BFC
}

// fn_800F3C00
void f_800F3C00(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 800F3C00
  return; // 800F3C04
}

// fn_800F3C08
void f_800F3C08(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x00000018u); // 800F3C08
  return; // 800F3C0C
}

// fn_800F3C10
void f_800F3C10(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 800F3C10
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C14
  if (!crb(c,2)) { goto L_800F3C24; } // 800F3C18
  c->r[3]=0u+0x00000000u; // 800F3C1C
  return; // 800F3C20
L_800F3C24:;
  f_800F3C08(c); return; // 800F3C24
  return; // 800F3C28
}

// fn_800F3C2C
void f_800F3C2C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000018u); // 800F3C2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C30
  if (!crb(c,2)) { goto L_800F3C40; } // 800F3C34
  c->r[3]=0u+0x00000000u; // 800F3C38
  return; // 800F3C3C
L_800F3C40:;
  f_800F3C00(c); return; // 800F3C40
  return; // 800F3C44
}

// fn_800F3C48
void f_800F3C48(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800F3C48
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C4C
  if (!crb(c,2)) { goto L_800F3C5C; } // 800F3C50
  c->r[3]=0u+0x00000000u; // 800F3C54
  return; // 800F3C58
L_800F3C5C:;
  f_800F3C64(c); return; // 800F3C5C
  return; // 800F3C60
}

// fn_800F3C64
void f_800F3C64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3C64
  c->r[0]=c->lr; // 800F3C68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3C6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3C70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3C74
  c->r[30]=c->r[3]|c->r[3]; // 800F3C78
  c->r[3]=c->r[3]+0x00000004u; // 800F3C7C
  c->lr=0x800F3C84u; f_8004B018(c); // 800F3C80
  c->r[31]=c->r[3]|c->r[3]; // 800F3C84
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C88
  if (!crb(c,2)) { goto L_800F3C98; } // 800F3C8C
  c->r[3]=0u+0x00000000u; // 800F3C90
  goto L_800F3CCC; // 800F3C94
L_800F3C98:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3C98
  c->r[4]=c->r[31]|c->r[31]; // 800F3C9C
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F3CA0
  c->r[12]=R32(c->r[12]+0x00000008u); // 800F3CA4
  c->ctr=c->r[12]; // 800F3CA8
  if (true) { c->lr=0x800F3CB0u; dispatch(c,c->ctr); } // 800F3CAC
  c->r[3]=c->r[30]+0x00000004u; // 800F3CB0
  c->r[4]=c->r[31]|c->r[31]; // 800F3CB4
  c->lr=0x800F3CBCu; f_8028CC6C(c); // 800F3CB8
  c->r[3]=c->r[30]+0x00000010u; // 800F3CBC
  c->r[4]=c->r[31]|c->r[31]; // 800F3CC0
  c->lr=0x800F3CC8u; f_8028CA70(c); // 800F3CC4
  c->r[3]=c->r[31]|c->r[31]; // 800F3CC8
L_800F3CCC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3CCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3CD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3CD4
  c->lr=c->r[0]; // 800F3CD8
  c->r[1]=c->r[1]+0x00000010u; // 800F3CDC
  return; // 800F3CE0
}

// fn_800F3CE4
void f_800F3CE4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800F3CE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3CE8
  if (crb(c,2)) return; // 800F3CEC
  f_800F3CF8(c); return; // 800F3CF0
  return; // 800F3CF4
}

// fn_800F3CF8
void f_800F3CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3CF8
  c->r[0]=c->lr; // 800F3CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3D04
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3D08
  c->r[30]=c->r[3]|c->r[3]; // 800F3D0C
  c->r[31]=c->r[4]|c->r[4]; // 800F3D10
  c->r[3]=c->r[3]+0x00000010u; // 800F3D14
  c->lr=0x800F3D1Cu; f_8028CC6C(c); // 800F3D18
  c->r[3]=c->r[30]+0x00000004u; // 800F3D1C
  c->r[4]=c->r[31]|c->r[31]; // 800F3D20
  c->lr=0x800F3D28u; f_8028CA70(c); // 800F3D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3D28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3D30
  c->lr=c->r[0]; // 800F3D34
  c->r[1]=c->r[1]+0x00000010u; // 800F3D38
  return; // 800F3D3C
}

// fn_800F3D40
void f_800F3D40(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800F3D40
  cmps(c,0,(int32_t)c->r[3],0); // 800F3D44
  if (!crb(c,2)) { goto L_800F3D54; } // 800F3D48
  c->r[3]=0u+0x00000000u; // 800F3D4C
  return; // 800F3D50
L_800F3D54:;
  f_800F3D5C(c); return; // 800F3D54
  return; // 800F3D58
}

// fn_800F3D5C
void f_800F3D5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3D5C
  c->r[0]=c->lr; // 800F3D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3D64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3D68
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3D6C
  c->r[30]=c->r[3]|c->r[3]; // 800F3D70
  c->lr=0x800F3D78u; f_800F3DA0(c); // 800F3D74
  c->r[31]=c->r[3]|c->r[3]; // 800F3D78
  c->r[3]=c->r[30]|c->r[30]; // 800F3D7C
  c->lr=0x800F3D84u; f_800F3DA8(c); // 800F3D80
  c->r[3]=c->r[3]+c->r[31]; // 800F3D84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3D88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3D8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3D90
  c->lr=c->r[0]; // 800F3D94
  c->r[1]=c->r[1]+0x00000010u; // 800F3D98
  return; // 800F3D9C
}

// fn_800F3DA0
void f_800F3DA0(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 800F3DA0
  return; // 800F3DA4
}

// fn_800F3DA8
void f_800F3DA8(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x00000018u); // 800F3DA8
  return; // 800F3DAC
}

// fn_800F3DB0
void f_800F3DB0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800F3DB0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3DB4
  if (!crb(c,2)) { goto L_800F3DC4; } // 800F3DB8
  c->r[3]=0u+0x00000000u; // 800F3DBC
  return; // 800F3DC0
L_800F3DC4:;
  f_800F3DA8(c); return; // 800F3DC4
  return; // 800F3DC8
}

// fn_800F3DCC
void f_800F3DCC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 800F3DCC
  cmps(c,0,(int32_t)c->r[3],0); // 800F3DD0
  if (!crb(c,2)) { goto L_800F3DE0; } // 800F3DD4
  c->r[3]=0u+0x00000000u; // 800F3DD8
  return; // 800F3DDC
L_800F3DE0:;
  f_800F3DA0(c); return; // 800F3DE0
  return; // 800F3DE4
}

// fn_800F3DE8
void f_800F3DE8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 800F3DE8
  cmps(c,0,(int32_t)c->r[3],0); // 800F3DEC
  if (!crb(c,2)) { goto L_800F3DFC; } // 800F3DF0
  c->r[3]=0u+0x00000000u; // 800F3DF4
  return; // 800F3DF8
L_800F3DFC:;
  f_800F3E04(c); return; // 800F3DFC
  return; // 800F3E00
}

// fn_800F3E04
void f_800F3E04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3E04
  c->r[0]=c->lr; // 800F3E08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3E0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3E10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3E14
  c->r[30]=c->r[3]|c->r[3]; // 800F3E18
  c->r[3]=c->r[3]+0x00000004u; // 800F3E1C
  c->lr=0x800F3E24u; f_8004B018(c); // 800F3E20
  c->r[31]=c->r[3]|c->r[3]; // 800F3E24
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E28
  if (!crb(c,2)) { goto L_800F3E38; } // 800F3E2C
  c->r[3]=0u+0x00000000u; // 800F3E30
  goto L_800F3E6C; // 800F3E34
L_800F3E38:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3E38
  c->r[4]=c->r[31]|c->r[31]; // 800F3E3C
  c->r[12]=R32(c->r[3]+0x00000020u); // 800F3E40
  c->r[12]=R32(c->r[12]+0x00000008u); // 800F3E44
  c->ctr=c->r[12]; // 800F3E48
  if (true) { c->lr=0x800F3E50u; dispatch(c,c->ctr); } // 800F3E4C
  c->r[3]=c->r[30]+0x00000004u; // 800F3E50
  c->r[4]=c->r[31]|c->r[31]; // 800F3E54
  c->lr=0x800F3E5Cu; f_8028CC6C(c); // 800F3E58
  c->r[3]=c->r[30]+0x00000010u; // 800F3E5C
  c->r[4]=c->r[31]|c->r[31]; // 800F3E60
  c->lr=0x800F3E68u; f_8028CA70(c); // 800F3E64
  c->r[3]=c->r[31]|c->r[31]; // 800F3E68
L_800F3E6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3E6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3E70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3E74
  c->lr=c->r[0]; // 800F3E78
  c->r[1]=c->r[1]+0x00000010u; // 800F3E7C
  return; // 800F3E80
}

// fn_800F3E84
void f_800F3E84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 800F3E84
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E88
  if (crb(c,2)) return; // 800F3E8C
  f_800F3E98(c); return; // 800F3E90
  return; // 800F3E94
}

// fn_800F3E98
void f_800F3E98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3E98
  c->r[0]=c->lr; // 800F3E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3EA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3EA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3EA8
  c->r[30]=c->r[3]|c->r[3]; // 800F3EAC
  c->r[31]=c->r[4]|c->r[4]; // 800F3EB0
  c->r[3]=c->r[3]+0x00000010u; // 800F3EB4
  c->lr=0x800F3EBCu; f_8028CC6C(c); // 800F3EB8
  c->r[3]=c->r[30]+0x00000004u; // 800F3EBC
  c->r[4]=c->r[31]|c->r[31]; // 800F3EC0
  c->lr=0x800F3EC8u; f_8028CA70(c); // 800F3EC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3EC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3ED0
  c->lr=c->r[0]; // 800F3ED4
  c->r[1]=c->r[1]+0x00000010u; // 800F3ED8
  return; // 800F3EDC
}

// fn_800F3EE0
void f_800F3EE0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 800F3EE0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3EE4
  if (!crb(c,2)) { goto L_800F3EF4; } // 800F3EE8
  c->r[3]=0u+0x00000000u; // 800F3EEC
  return; // 800F3EF0
L_800F3EF4:;
  f_800F3EFC(c); return; // 800F3EF4
  return; // 800F3EF8
}

// fn_800F3EFC
void f_800F3EFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3EFC
  c->r[0]=c->lr; // 800F3F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3F04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3F08
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3F0C
  c->r[30]=c->r[3]|c->r[3]; // 800F3F10
  c->lr=0x800F3F18u; f_800F3F40(c); // 800F3F14
  c->r[31]=c->r[3]|c->r[3]; // 800F3F18
  c->r[3]=c->r[30]|c->r[30]; // 800F3F1C
  c->lr=0x800F3F24u; f_800F3F48(c); // 800F3F20
  c->r[3]=c->r[3]+c->r[31]; // 800F3F24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3F28
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3F2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3F30
  c->lr=c->r[0]; // 800F3F34
  c->r[1]=c->r[1]+0x00000010u; // 800F3F38
  return; // 800F3F3C
}

// fn_800F3F40
void f_800F3F40(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x0000000Cu); // 800F3F40
  return; // 800F3F44
}

// fn_800F3F48
void f_800F3F48(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x00000018u); // 800F3F48
  return; // 800F3F4C
}

// fn_800F3F50
void f_800F3F50(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 800F3F50
  cmps(c,0,(int32_t)c->r[3],0); // 800F3F54
  if (!crb(c,2)) { goto L_800F3F64; } // 800F3F58
  c->r[3]=0u+0x00000000u; // 800F3F5C
  return; // 800F3F60
L_800F3F64:;
  f_800F3F48(c); return; // 800F3F64
  return; // 800F3F68
}

// fn_800F3F6C
void f_800F3F6C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000030u); // 800F3F6C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3F70
  if (!crb(c,2)) { goto L_800F3F80; } // 800F3F74
  c->r[3]=0u+0x00000000u; // 800F3F78
  return; // 800F3F7C
L_800F3F80:;
  f_800F3F40(c); return; // 800F3F80
  return; // 800F3F84
}

// fn_800F3F88
void f_800F3F88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3F88
  c->r[0]=c->lr; // 800F3F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3F94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3F98
  c->r[31]=c->r[3]|c->r[3]; // 800F3F9C
  c->r[30]=c->r[4]|c->r[4]; // 800F3FA0
  c->r[3]=0u+0x00000018u; // 800F3FA4
  c->r[4]=0u+0x00000020u; // 800F3FA8
  c->lr=0x800F3FB0u; f_800F41FC(c); // 800F3FAC
  c->r[4]=c->r[30]-c->r[3]; // 800F3FB0
  c->r[5]=R32(c->r[4]+0x00000000u); // 800F3FB4
  cmps(c,0,(int32_t)c->r[5],0); // 800F3FB8
  if (crb(c,2)) { goto L_800F3FCC; } // 800F3FBC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F3FC0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800F3FC4
  goto L_800F3FD4; // 800F3FC8
L_800F3FCC:;
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F3FCC
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800F3FD0
L_800F3FD4:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F3FD4
  cmps(c,0,(int32_t)c->r[5],0); // 800F3FD8
  if (crb(c,2)) { goto L_800F3FE8; } // 800F3FDC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F3FE0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F3FE4
L_800F3FE8:;
  c->r[5]=0u+0x00000000u; // 800F3FE8
  c->r[6]=R32(c->r[4]+0x00000008u); // 800F3FEC
  cmps(c,0,(int32_t)c->r[6],0); // 800F3FF0
  if (crb(c,2)) { goto L_800F4008; } // 800F3FF4
  c->r[0]=R8(c->r[6]+0x00000014u); // 800F3FF8
  cmps(c,0,(int32_t)c->r[0],0); // 800F3FFC
  if (!crb(c,2)) { goto L_800F4008; } // 800F4000
  c->r[5]=c->r[6]|c->r[6]; // 800F4004
L_800F4008:;
  c->r[6]=0u+0x00000000u; // 800F4008
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 800F400C
  cmps(c,0,(int32_t)c->r[7],0); // 800F4010
  if (crb(c,2)) { goto L_800F4028; } // 800F4014
  c->r[0]=R8(c->r[7]+0x00000014u); // 800F4018
  cmps(c,0,(int32_t)c->r[0],0); // 800F401C
  if (!crb(c,2)) { goto L_800F4028; } // 800F4020
  c->r[6]=c->r[7]|c->r[7]; // 800F4024
L_800F4028:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F4028
  if (crb(c,2)) { goto L_800F40D8; } // 800F402C
  cmps(c,0,(int32_t)c->r[6],0); // 800F4030
  if (crb(c,2)) { goto L_800F40A8; } // 800F4034
  c->r[7]=R32(c->r[6]+0x00000000u); // 800F4038
  cmps(c,0,(int32_t)c->r[7],0); // 800F403C
  if (crb(c,2)) { goto L_800F4050; } // 800F4040
  c->r[0]=R32(c->r[6]+0x00000004u); // 800F4044
  W32(c->r[7]+0x00000004u,c->r[0]); // 800F4048
  goto L_800F4058; // 800F404C
L_800F4050:;
  c->r[0]=R32(c->r[6]+0x00000004u); // 800F4050
  W32(c->r[31]+0x00000040u,c->r[0]); // 800F4054
L_800F4058:;
  c->r[7]=R32(c->r[6]+0x00000004u); // 800F4058
  cmps(c,0,(int32_t)c->r[7],0); // 800F405C
  if (crb(c,2)) { goto L_800F406C; } // 800F4060
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F4064
  W32(c->r[7]+0x00000000u,c->r[0]); // 800F4068
L_800F406C:;
  c->r[8]=R32(c->r[5]+0x00000010u); // 800F406C
  c->r[7]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800F4070
  c->r[3]=R32(c->r[4]+0x00000010u); // 800F4074
  c->r[0]=R32(c->r[6]+0x00000010u); // 800F4078
  c->r[3]=c->r[7]+c->r[3]; // 800F407C
  c->r[0]=c->r[8]+c->r[0]; // 800F4080
  c->r[0]=c->r[3]+c->r[0]; // 800F4084
  W32(c->r[5]+0x00000010u,c->r[0]); // 800F4088
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800F408C
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800F4090
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 800F4094
  cmps(c,0,(int32_t)c->r[3],0); // 800F4098
  if (crb(c,2)) { goto L_800F4178; } // 800F409C
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F40A0
  goto L_800F4178; // 800F40A4
L_800F40A8:;
  c->r[0]=R32(c->r[5]+0x00000010u); // 800F40A8
  c->r[6]=R32(c->r[4]+0x00000010u); // 800F40AC
  c->r[0]=c->r[0]+c->r[3]; // 800F40B0
  c->r[0]=c->r[6]+c->r[0]; // 800F40B4
  W32(c->r[5]+0x00000010u,c->r[0]); // 800F40B8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800F40BC
  W32(c->r[5]+0x0000000Cu,c->r[0]); // 800F40C0
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800F40C4
  cmps(c,0,(int32_t)c->r[3],0); // 800F40C8
  if (crb(c,2)) { goto L_800F4178; } // 800F40CC
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F40D0
  goto L_800F4178; // 800F40D4
L_800F40D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F40D8
  if (crb(c,2)) { goto L_800F4150; } // 800F40DC
  c->r[7]=R32(c->r[6]+0x00000000u); // 800F40E0
  cmps(c,0,(int32_t)c->r[7],0); // 800F40E4
  if (crb(c,2)) { goto L_800F40F4; } // 800F40E8
  W32(c->r[7]+0x00000004u,c->r[4]); // 800F40EC
  goto L_800F40F8; // 800F40F0
L_800F40F4:;
  W32(c->r[31]+0x00000040u,c->r[4]); // 800F40F4
L_800F40F8:;
  c->r[7]=R32(c->r[6]+0x00000004u); // 800F40F8
  cmps(c,0,(int32_t)c->r[7],0); // 800F40FC
  if (crb(c,2)) { goto L_800F4108; } // 800F4100
  W32(c->r[7]+0x00000000u,c->r[4]); // 800F4104
L_800F4108:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800F4108
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F410C
  c->r[0]=R32(c->r[6]+0x00000004u); // 800F4110
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4114
  c->r[0]=R32(c->r[4]+0x00000010u); // 800F4118
  c->r[7]=R32(c->r[6]+0x00000010u); // 800F411C
  c->r[0]=c->r[0]+c->r[3]; // 800F4120
  c->r[0]=c->r[7]+c->r[0]; // 800F4124
  W32(c->r[4]+0x00000010u,c->r[0]); // 800F4128
  c->r[0]=0u+0x00000000u; // 800F412C
  W8(c->r[4]+0x00000014u,c->r[0]); // 800F4130
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800F4134
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F4138
  c->r[3]=R32(c->r[6]+0x0000000Cu); // 800F413C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4140
  if (crb(c,2)) { goto L_800F4178; } // 800F4144
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F4148
  goto L_800F4178; // 800F414C
L_800F4150:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 800F4150
  cmps(c,0,(int32_t)c->r[3],0); // 800F4154
  if (crb(c,2)) { goto L_800F4160; } // 800F4158
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F415C
L_800F4160:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 800F4160
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F4164
  c->r[0]=0u+0x00000000u; // 800F4168
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F416C
  W8(c->r[4]+0x00000014u,c->r[0]); // 800F4170
  W32(c->r[31]+0x00000040u,c->r[4]); // 800F4174
L_800F4178:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4178
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F417C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4180
  c->lr=c->r[0]; // 800F4184
  c->r[1]=c->r[1]+0x00000010u; // 800F4188
  return; // 800F418C
}

// dtor_800F4190
void f_800F4190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4190
  c->r[0]=c->lr; // 800F4194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F419C
  c->r[31]=c->r[3]|c->r[3]; // 800F41A0
  cmps(c,0,(int32_t)c->r[3],0); // 800F41A4
  if (crb(c,2)) { goto L_800F41BC; } // 800F41A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800F41AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F41B0
  if (!crb(c,1)) { goto L_800F41BC; } // 800F41B4
  c->lr=0x800F41BCu; f_80047B20(c); // 800F41B8
L_800F41BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800F41BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F41C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F41C4
  c->lr=c->r[0]; // 800F41C8
  c->r[1]=c->r[1]+0x00000010u; // 800F41CC
  return; // 800F41D0
}

// fn_800F41D4
void f_800F41D4(Ctx* __restrict c) {
  c->r[4]=0u+0x80460000u; // 800F41D4
  c->r[0]=c->r[4]+0x00002158u; // 800F41D8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F41DC
  return; // 800F41E0
}

// fn_800F41E4
void f_800F41E4(Ctx* __restrict c) {
  return; // 800F41E4
}

// fn_800F41E8
void f_800F41E8(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 800F41E8
  return; // 800F41EC
}

// fn_800F41F0
void f_800F41F0(Ctx* __restrict c) {
  return; // 800F41F0
}

// fn_800F41F4
void f_800F41F4(Ctx* __restrict c) {
  c->r[3]=c->r[4]|c->r[4]; // 800F41F4
  return; // 800F41F8
}

// fn_800F41FC
void f_800F41FC(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F41FC
  c->r[5]=~(c->r[0]|c->r[0]); // 800F4200
  c->r[3]=c->r[4]+c->r[3]; // 800F4204
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F4208
  c->r[3]=c->r[5]&c->r[0]; // 800F420C
  return; // 800F4210
}

// fn_800F4214
void f_800F4214(Ctx* __restrict c) {
  f_80049FD4(c); return; // 800F4214
}

// fn_800F4218
void f_800F4218(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4218
  c->r[0]=c->lr; // 800F421C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4224
  c->r[31]=c->r[3]|c->r[3]; // 800F4228
  c->lr=0x800F4230u; f_8004B0A0(c); // 800F422C
  c->r[3]=c->r[31]+0x00000030u; // 800F4230
  c->lr=0x800F4238u; f_8004B0A0(c); // 800F4234
  c->r[3]=c->r[31]+0x0000008Cu; // 800F4238
  c->lr=0x800F4240u; f_8004B0A4(c); // 800F423C
  c->r[3]=c->r[31]|c->r[31]; // 800F4240
  c->lr=0x800F4248u; f_800C2260(c); // 800F4244
  c->r[3]=c->r[31]+0x00000030u; // 800F4248
  c->lr=0x800F4250u; f_800C2260(c); // 800F424C
  c->r[3]=0u+0x00000000u; // 800F4250
  W8(c->r[31]+0x00000060u,c->r[3]); // 800F4254
  W32(c->r[31]+0x00000064u,c->r[3]); // 800F4258
  W32(c->r[31]+0x00000068u,c->r[3]); // 800F425C
  c->r[0]=0u+0x00000001u; // 800F4260
  W8(c->r[31]+0x0000006Cu,c->r[0]); // 800F4264
  W32(c->r[31]+0x00000070u,c->r[3]); // 800F4268
  {uint32_t ea=c->r[2]+0xFFFF89D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800F426C
  {uint32_t ea=c->r[31]+0x00000074u; WF32(ea,c->f[1]);} // 800F4270
  {uint32_t ea=c->r[2]+0xFFFF89D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800F4274
  {uint32_t ea=c->r[31]+0x00000078u; WF32(ea,c->f[0]);} // 800F4278
  {uint32_t ea=c->r[31]+0x0000007Cu; WF32(ea,c->f[1]);} // 800F427C
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800F4280
  {uint32_t ea=c->r[31]+0x00000088u; WF32(ea,c->f[1]);} // 800F4284
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[1]);} // 800F4288
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[1]);} // 800F428C
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 800F4290
  c->r[0]=0u+0x000000FFu; // 800F4294
  W8(c->r[31]+0x0000009Au,c->r[0]); // 800F4298
  W8(c->r[31]+0x00000099u,c->r[0]); // 800F429C
  W8(c->r[31]+0x00000098u,c->r[0]); // 800F42A0
  W8(c->r[31]+0x0000009Bu,c->r[0]); // 800F42A4
  W8(c->r[31]+0x0000009Eu,c->r[3]); // 800F42A8
  W8(c->r[31]+0x0000009Du,c->r[3]); // 800F42AC
  W8(c->r[31]+0x0000009Cu,c->r[3]); // 800F42B0
  W8(c->r[31]+0x0000009Fu,c->r[0]); // 800F42B4
  c->r[3]=c->r[31]|c->r[31]; // 800F42B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F42BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F42C0
  c->lr=c->r[0]; // 800F42C4
  c->r[1]=c->r[1]+0x00000010u; // 800F42C8
  return; // 800F42CC
}

// fn_800F42D0
void f_800F42D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F42D0
  c->r[0]=c->lr; // 800F42D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F42D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F42DC
  c->r[31]=c->r[3]|c->r[3]; // 800F42E0
  c->lr=0x800F42E8u; f_802A2DAC(c); // 800F42E4
  c->r[3]=c->r[31]|c->r[31]; // 800F42E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F42EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F42F0
  c->lr=c->r[0]; // 800F42F4
  c->r[1]=c->r[1]+0x00000010u; // 800F42F8
  return; // 800F42FC
}

// fn_800F4300
void f_800F4300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4300
  c->r[0]=c->lr; // 800F4304
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F430C
  c->r[31]=c->r[3]|c->r[3]; // 800F4310
  c->lr=0x800F4318u; f_802A2DBC(c); // 800F4314
  c->r[3]=c->r[31]|c->r[31]; // 800F4318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F431C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4320
  c->lr=c->r[0]; // 800F4324
  c->r[1]=c->r[1]+0x00000010u; // 800F4328
  return; // 800F432C
}

// fn_800F4330
void f_800F4330(Ctx* __restrict c) {
  f_802A2E10(c); return; // 800F4330
}

// fn_800F4334
void f_800F4334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4334
  c->r[0]=c->lr; // 800F4338
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F433C
  c->lr=0x800F4344u; f_800F4370(c); // 800F4340
  c->r[0]=0u+0x00000000u; // 800F4344
  cmps(c,0,(int32_t)c->r[3],1); // 800F4348
  if (crb(c,2)) { goto L_800F4358; } // 800F434C
  cmps(c,0,(int32_t)c->r[3],2); // 800F4350
  if (!crb(c,2)) { goto L_800F435C; } // 800F4354
L_800F4358:;
  c->r[0]=0u+0x00000001u; // 800F4358
L_800F435C:;
  c->r[3]=c->r[0]|c->r[0]; // 800F435C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4360
  c->lr=c->r[0]; // 800F4364
  c->r[1]=c->r[1]+0x00000010u; // 800F4368
  return; // 800F436C
}

// fn_800F4370
void f_800F4370(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4370
  c->r[0]=c->lr; // 800F4374
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4378
  c->lr=0x800F4380u; f_802A2E10(c); // 800F437C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4380
  if (!crb(c,2)) { goto L_800F4390; } // 800F4384
  c->r[3]=0u+0x00000000u; // 800F4388
  goto L_800F4394; // 800F438C
L_800F4390:;
  c->lr=0x800F4394u; f_800F43A8(c); // 800F4390
L_800F4394:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4394
  c->lr=c->r[0]; // 800F4398
  c->r[1]=c->r[1]+0x00000010u; // 800F439C
  return; // 800F43A0
}

// fn_800F43A4
void f_800F43A4(Ctx* __restrict c) {
  f_8004A5DC(c); return; // 800F43A4
}

// fn_800F43A8
void f_800F43A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800F43A8
  return; // 800F43AC
}

// fn_800F43B0
void f_800F43B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 800F43B0
  return; // 800F43B4
}

// fn_800F43B8
void f_800F43B8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800F43B8
  if (crb(c,2)) { goto L_800F43D0; } // 800F43BC
  c->r[0]=R32(c->r[3]+0x00000050u); // 800F43C0
  c->r[0]=c->r[0]|0x00000002u; // 800F43C4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800F43C8
  return; // 800F43CC
L_800F43D0:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 800F43D0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 800F43D4
  W32(c->r[3]+0x00000050u,c->r[0]); // 800F43D8
  return; // 800F43DC
}

// fn_800F43E0
void f_800F43E0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000050u); // 800F43E0
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 800F43E4
  c->r[0]=0u-c->r[3]; // 800F43E8
  c->r[0]=c->r[0]|c->r[3]; // 800F43EC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800F43F0
  return; // 800F43F4
}

// fn_800F43F8
void f_800F43F8(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 800F43F8
  if (crb(c,2)) { goto L_800F4410; } // 800F43FC
  c->r[0]=R32(c->r[3]+0x00000050u); // 800F4400
  c->r[0]=c->r[0]|0x00000001u; // 800F4404
  W32(c->r[3]+0x00000050u,c->r[0]); // 800F4408
  return; // 800F440C
L_800F4410:;
  c->r[0]=R32(c->r[3]+0x00000050u); // 800F4410
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800F4414
  W32(c->r[3]+0x00000050u,c->r[0]); // 800F4418
  return; // 800F441C
}

// fn_800F4420
void f_800F4420(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000000Cu; // 800F4420
  f_8028CC6C(c); return; // 800F4424
}

// fn_800F4428
void f_800F4428(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000038u; // 800F4428
  f_800F4420(c); return; // 800F442C
}

// fn_800F4430
void f_800F4430(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFB9F8u); // 800F4430
  return; // 800F4434
}

// fn_800F4438
void f_800F4438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4438
  c->r[0]=c->lr; // 800F443C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4440
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4444
  c->r[0]=R32(c->r[13]+0xFFFFB9F8u); // 800F4448
  cmps(c,0,(int32_t)c->r[0],0); // 800F444C
  if (!crb(c,2)) { goto L_800F4480; } // 800F4450
  c->r[3]=0u+0x804C0000u; // 800F4454
  c->r[3]=c->r[3]+0x00007D78u; // 800F4458
  c->r[4]=0u+0x00000028u; // 800F445C
  c->lr=0x800F4464u; f_8028CA58(c); // 800F4460
  c->r[3]=0u+0x000010E4u; // 800F4464
  c->lr=0x800F446Cu; f_80047B64(c); // 800F4468
  c->r[31]=c->r[3]|c->r[3]; // 800F446C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4470
  if (crb(c,2)) { goto L_800F447C; } // 800F4474
  c->lr=0x800F447Cu; f_800F44B4(c); // 800F4478
L_800F447C:;
  W32(c->r[13]+0xFFFFB9F8u,c->r[31]); // 800F447C
L_800F4480:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4480
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4484
  c->lr=c->r[0]; // 800F4488
  c->r[1]=c->r[1]+0x00000010u; // 800F448C
  return; // 800F4490
}

// fn_800F4494
void f_800F4494(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800F4494
  c->r[3]=0u+0x804C0000u; // 800F4498
  c->r[3]=c->r[3]+0x00007D78u; // 800F449C
  f_8028CA70(c); return; // 800F44A0
}

// fn_800F44A4
void f_800F44A4(Ctx* __restrict c) {
  c->r[4]=c->r[3]|c->r[3]; // 800F44A4
  c->r[3]=0u+0x804C0000u; // 800F44A8
  c->r[3]=c->r[3]+0x00007D78u; // 800F44AC
  f_8028CC6C(c); return; // 800F44B0
}

// fn_800F44B4
void f_800F44B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F44B4
  c->r[0]=c->lr; // 800F44B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F44BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F44C0
  c->r[31]=c->r[3]|c->r[3]; // 800F44C4
  c->lr=0x800F44CCu; f_80076954(c); // 800F44C8
  c->r[3]=c->r[31]+0x0000006Cu; // 800F44CC
  c->lr=0x800F44D4u; f_801051EC(c); // 800F44D0
  c->r[3]=c->r[31]+0x000000A8u; // 800F44D4
  c->lr=0x800F44DCu; f_80105154(c); // 800F44D8
  c->r[3]=c->r[31]+0x000000E4u; // 800F44DC
  c->lr=0x800F44E4u; f_801050BC(c); // 800F44E0
  c->r[3]=c->r[31]+0x00000120u; // 800F44E4
  c->lr=0x800F44ECu; f_80105024(c); // 800F44E8
  c->r[3]=c->r[31]+0x0000015Cu; // 800F44EC
  c->lr=0x800F44F4u; f_80105228(c); // 800F44F0
  c->r[3]=c->r[31]+0x0000019Cu; // 800F44F4
  c->lr=0x800F44FCu; f_80260BE8(c); // 800F44F8
  c->r[3]=c->r[31]+0x000001DCu; // 800F44FC
  c->lr=0x800F4504u; f_80104ED4(c); // 800F4500
  c->r[3]=c->r[31]+0x00000218u; // 800F4504
  c->lr=0x800F450Cu; f_80104E3C(c); // 800F4508
  c->r[3]=c->r[31]+0x00000254u; // 800F450C
  c->lr=0x800F4514u; f_80104DA4(c); // 800F4510
  c->r[3]=c->r[31]+0x00000290u; // 800F4514
  c->lr=0x800F451Cu; f_80104D0C(c); // 800F4518
  c->r[3]=c->r[31]+0x000002CCu; // 800F451C
  c->lr=0x800F4524u; f_80104C74(c); // 800F4520
  c->r[3]=c->r[31]+0x00000308u; // 800F4524
  c->lr=0x800F452Cu; f_801A1A94(c); // 800F4528
  c->r[3]=c->r[31]+0x00000348u; // 800F452C
  c->lr=0x800F4534u; f_80104B80(c); // 800F4530
  c->r[3]=c->r[31]+0x00000384u; // 800F4534
  c->lr=0x800F453Cu; f_80104AE8(c); // 800F4538
  c->r[3]=c->r[31]+0x000003C0u; // 800F453C
  c->lr=0x800F4544u; f_80104A50(c); // 800F4540
  c->r[3]=c->r[31]+0x000003FCu; // 800F4544
  c->lr=0x800F454Cu; f_801049B8(c); // 800F4548
  c->r[3]=c->r[31]+0x00000438u; // 800F454C
  c->lr=0x800F4554u; f_80104920(c); // 800F4550
  c->r[3]=c->r[31]+0x00000474u; // 800F4554
  c->lr=0x800F455Cu; f_80104888(c); // 800F4558
  c->r[3]=c->r[31]+0x000004B0u; // 800F455C
  c->lr=0x800F4564u; f_801047F0(c); // 800F4560
  c->r[3]=c->r[31]+0x000004ECu; // 800F4564
  c->lr=0x800F456Cu; f_80104758(c); // 800F4568
  c->r[3]=c->r[31]+0x00000528u; // 800F456C
  c->lr=0x800F4574u; f_801046C0(c); // 800F4570
  c->r[3]=c->r[31]+0x00000564u; // 800F4574
  c->lr=0x800F457Cu; f_80104628(c); // 800F4578
  c->r[3]=c->r[31]+0x000005A0u; // 800F457C
  c->lr=0x800F4584u; f_80104590(c); // 800F4580
  c->r[3]=c->r[31]+0x000005DCu; // 800F4584
  c->lr=0x800F458Cu; f_801044F8(c); // 800F4588
  c->r[3]=c->r[31]+0x00000618u; // 800F458C
  c->lr=0x800F4594u; f_80104460(c); // 800F4590
  c->r[3]=c->r[31]+0x00000654u; // 800F4594
  c->lr=0x800F459Cu; f_801043C8(c); // 800F4598
  c->r[3]=c->r[31]+0x00000690u; // 800F459C
  c->lr=0x800F45A4u; f_80104330(c); // 800F45A0
  c->r[3]=c->r[31]+0x000006CCu; // 800F45A4
  c->lr=0x800F45ACu; f_80104298(c); // 800F45A8
  c->r[3]=c->r[31]+0x00000708u; // 800F45AC
  c->lr=0x800F45B4u; f_80104200(c); // 800F45B0
  c->r[3]=c->r[31]+0x00000744u; // 800F45B4
  c->lr=0x800F45BCu; f_80104168(c); // 800F45B8
  c->r[3]=c->r[31]+0x00000780u; // 800F45BC
  c->lr=0x800F45C4u; f_801040D0(c); // 800F45C0
  c->r[3]=c->r[31]+0x000007BCu; // 800F45C4
  c->lr=0x800F45CCu; f_80104038(c); // 800F45C8
  c->r[3]=c->r[31]+0x000007F8u; // 800F45CC
  c->lr=0x800F45D4u; f_80103FA0(c); // 800F45D0
  c->r[3]=c->r[31]+0x00000834u; // 800F45D4
  c->lr=0x800F45DCu; f_80103F08(c); // 800F45D8
  c->r[3]=c->r[31]+0x00000870u; // 800F45DC
  c->lr=0x800F45E4u; f_80103E70(c); // 800F45E0
  c->r[3]=c->r[31]+0x000008ACu; // 800F45E4
  c->lr=0x800F45ECu; f_80103DD8(c); // 800F45E8
  c->r[3]=c->r[31]+0x000008E8u; // 800F45EC
  c->lr=0x800F45F4u; f_80103D40(c); // 800F45F0
  c->r[3]=c->r[31]+0x00000924u; // 800F45F4
  c->lr=0x800F45FCu; f_80103CA8(c); // 800F45F8
  c->r[3]=c->r[31]+0x00000960u; // 800F45FC
  c->lr=0x800F4604u; f_80103C10(c); // 800F4600
  c->r[3]=c->r[31]+0x0000099Cu; // 800F4604
  c->lr=0x800F460Cu; f_80103B78(c); // 800F4608
  c->r[3]=c->r[31]+0x000009D8u; // 800F460C
  c->lr=0x800F4614u; f_80103AE0(c); // 800F4610
  c->r[3]=c->r[31]+0x00000A14u; // 800F4614
  c->lr=0x800F461Cu; f_80103A48(c); // 800F4618
  c->r[3]=c->r[31]+0x00000A50u; // 800F461C
  c->lr=0x800F4624u; f_801039B0(c); // 800F4620
  c->r[3]=c->r[31]+0x00000A8Cu; // 800F4624
  c->lr=0x800F462Cu; f_80103918(c); // 800F4628
  c->r[3]=c->r[31]+0x00000AC8u; // 800F462C
  c->lr=0x800F4634u; f_80103880(c); // 800F4630
  c->r[3]=c->r[31]+0x00000B04u; // 800F4634
  c->lr=0x800F463Cu; f_801037E8(c); // 800F4638
  c->r[3]=c->r[31]+0x00000B40u; // 800F463C
  c->lr=0x800F4644u; f_80103750(c); // 800F4640
  c->r[3]=c->r[31]+0x00000B7Cu; // 800F4644
  c->lr=0x800F464Cu; f_801036B8(c); // 800F4648
  c->r[3]=c->r[31]+0x00000BB8u; // 800F464C
  c->lr=0x800F4654u; f_80103620(c); // 800F4650
  c->r[3]=c->r[31]+0x00000BF4u; // 800F4654
  c->lr=0x800F465Cu; f_80103588(c); // 800F4658
  c->r[3]=c->r[31]+0x00000C30u; // 800F465C
  c->lr=0x800F4664u; f_801034F0(c); // 800F4660
  c->r[3]=c->r[31]+0x00000C6Cu; // 800F4664
  c->lr=0x800F466Cu; f_80103458(c); // 800F4668
  c->r[3]=c->r[31]+0x00000CA8u; // 800F466C
  c->lr=0x800F4674u; f_801033C0(c); // 800F4670
  c->r[3]=c->r[31]+0x00000CE4u; // 800F4674
  c->lr=0x800F467Cu; f_80103328(c); // 800F4678
  c->r[3]=c->r[31]+0x00000D20u; // 800F467C
  c->lr=0x800F4684u; f_80103290(c); // 800F4680
  c->r[3]=c->r[31]+0x00000D5Cu; // 800F4684
  c->lr=0x800F468Cu; f_801031F8(c); // 800F4688
  c->r[3]=c->r[31]+0x00000D98u; // 800F468C
  c->lr=0x800F4694u; f_80103160(c); // 800F4690
  c->r[3]=c->r[31]+0x00000DD4u; // 800F4694
  c->lr=0x800F469Cu; f_801030C8(c); // 800F4698
  c->r[3]=c->r[31]+0x00000E10u; // 800F469C
  c->lr=0x800F46A4u; f_80103030(c); // 800F46A0
  c->r[3]=c->r[31]+0x00000E4Cu; // 800F46A4
  c->lr=0x800F46ACu; f_80102F98(c); // 800F46A8
  c->r[3]=c->r[31]+0x00000E88u; // 800F46AC
  c->lr=0x800F46B4u; f_80102F00(c); // 800F46B0
  c->r[3]=c->r[31]+0x00000EC4u; // 800F46B4
  c->lr=0x800F46BCu; f_80102E68(c); // 800F46B8
  c->r[3]=c->r[31]+0x00000F00u; // 800F46BC
  c->lr=0x800F46C4u; f_801B09C4(c); // 800F46C0
  c->r[3]=c->r[31]+0x00000F40u; // 800F46C4
  c->lr=0x800F46CCu; f_80102D74(c); // 800F46C8
  c->r[3]=c->r[31]+0x00000F7Cu; // 800F46CC
  c->lr=0x800F46D4u; f_80102CDC(c); // 800F46D0
  c->r[3]=c->r[31]+0x00000FB8u; // 800F46D4
  c->lr=0x800F46DCu; f_80102C44(c); // 800F46D8
  c->r[3]=c->r[31]+0x00000FF4u; // 800F46DC
  c->lr=0x800F46E4u; f_80102BAC(c); // 800F46E0
  c->r[3]=c->r[31]+0x00001030u; // 800F46E4
  c->lr=0x800F46ECu; f_80102B14(c); // 800F46E8
  c->r[3]=c->r[31]+0x0000106Cu; // 800F46EC
  c->lr=0x800F46F4u; f_80102A7C(c); // 800F46F0
  c->r[3]=c->r[31]+0x000010A8u; // 800F46F4
  c->lr=0x800F46FCu; f_800F4900(c); // 800F46F8
  c->r[3]=c->r[31]|c->r[31]; // 800F46FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4700
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4704
  c->lr=c->r[0]; // 800F4708
  c->r[1]=c->r[1]+0x00000010u; // 800F470C
  return; // 800F4710
}

// fn_800F4714
void f_800F4714(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4714
  c->r[0]=c->lr; // 800F4718
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F471C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4720
  c->r[31]=c->r[3]|c->r[3]; // 800F4724
  c->lr=0x800F472Cu; f_80075AD8(c); // 800F4728
  cmps(c,0,(int32_t)c->r[3],0); // 800F472C
  if (!crb(c,2)) { goto L_800F4748; } // 800F4730
  c->r[3]=c->r[31]|c->r[31]; // 800F4734
  c->r[4]=0u+0x80430000u; // 800F4738
  c->r[4]=c->r[4]+0xFFFFE090u; // 800F473C
  c->r[5]=0u+0x00000001u; // 800F4740
  c->lr=0x800F4748u; f_80076D08(c); // 800F4744
L_800F4748:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4748
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F474C
  c->lr=c->r[0]; // 800F4750
  c->r[1]=c->r[1]+0x00000010u; // 800F4754
  return; // 800F4758
}

// fn_800F475C
void f_800F475C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F475C
  c->r[0]=c->lr; // 800F4760
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4764
  c->lr=0x800F476Cu; f_80075AF0(c); // 800F4768
  c->r[0]=0u-c->r[3]; // 800F476C
  c->r[0]=c->r[0]|c->r[3]; // 800F4770
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800F4774
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4778
  c->lr=c->r[0]; // 800F477C
  c->r[1]=c->r[1]+0x00000010u; // 800F4780
  return; // 800F4784
}

// fn_800F4788
void f_800F4788(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4788
  c->r[0]=c->lr; // 800F478C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F4790
  c->r[11]=c->r[1]+0x00000030u; // 800F4794
  c->lr=0x800F479Cu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F4798
  c->r[23]=c->r[3]|c->r[3]; // 800F479C
  c->lr=0x800F47A4u; f_80076D58(c); // 800F47A0
  c->r[28]=0u+0x804C0000u; // 800F47A4
  c->r[3]=c->r[28]+0x00007D78u; // 800F47A8
  c->lr=0x800F47B0u; f_8004B018(c); // 800F47AC
  c->r[25]=c->r[3]|c->r[3]; // 800F47B0
  c->r[31]=0u+0x80460000u; // 800F47B4
  c->r[29]=0u+0x80460000u; // 800F47B8
  goto L_800F4884; // 800F47BC
L_800F47C0:;
  c->r[3]=c->r[28]+0x00007D78u; // 800F47C0
  c->r[4]=c->r[25]|c->r[25]; // 800F47C4
  c->lr=0x800F47CCu; f_8028CCD8(c); // 800F47C8
  c->r[24]=c->r[3]|c->r[3]; // 800F47CC
  c->r[3]=c->r[29]+0x00002498u; // 800F47D0
  c->lr=0x800F47D8u; f_802F09A0(c); // 800F47D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F47D8
  if (crb(c,2)) { goto L_800F4880; } // 800F47DC
  c->r[3]=c->r[25]|c->r[25]; // 800F47E0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F47E4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800F47E8
  c->ctr=c->r[12]; // 800F47EC
  if (true) { c->lr=0x800F47F4u; dispatch(c,c->ctr); } // 800F47F0
  c->r[30]=c->r[3]|c->r[3]; // 800F47F4
  c->r[3]=c->r[25]|c->r[25]; // 800F47F8
  c->lr=0x800F4800u; f_80105408(c); // 800F47FC
  c->r[27]=0u+0x00000000u; // 800F4800
  goto L_800F4878; // 800F4804
L_800F4808:;
  c->r[3]=c->r[25]|c->r[25]; // 800F4808
  c->r[4]=c->r[27]|c->r[27]; // 800F480C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4810
  c->r[12]=R32(c->r[12]+0x00000018u); // 800F4814
  c->ctr=c->r[12]; // 800F4818
  if (true) { c->lr=0x800F4820u; dispatch(c,c->ctr); } // 800F481C
  c->r[4]=c->r[3]|c->r[3]; // 800F4820
  c->r[3]=c->r[23]|c->r[23]; // 800F4824
  c->r[5]=0u+0x00000000u; // 800F4828
  c->lr=0x800F4830u; f_80076E6C(c); // 800F482C
  cmps(c,0,(int32_t)c->r[3],1); // 800F4830
  if (!crb(c,2)) { goto L_800F4874; } // 800F4834
  c->r[3]=c->r[23]|c->r[23]; // 800F4838
  c->r[4]=0u+0x00000000u; // 800F483C
  c->lr=0x800F4844u; f_80076E60(c); // 800F4840
  c->r[26]=c->r[3]|c->r[3]; // 800F4844
  c->r[3]=c->r[31]+0x000024A4u; // 800F4848
  c->lr=0x800F4850u; f_802F09A0(c); // 800F484C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4850
  if (crb(c,2)) { goto L_800F4874; } // 800F4854
  c->r[3]=c->r[25]|c->r[25]; // 800F4858
  c->r[4]=c->r[26]|c->r[26]; // 800F485C
  c->r[5]=c->r[27]|c->r[27]; // 800F4860
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4864
  c->r[12]=R32(c->r[12]+0x00000010u); // 800F4868
  c->ctr=c->r[12]; // 800F486C
  if (true) { c->lr=0x800F4874u; dispatch(c,c->ctr); } // 800F4870
L_800F4874:;
  c->r[27]=c->r[27]+0x00000001u; // 800F4874
L_800F4878:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[30]); // 800F4878
  if (crb(c,0)) { IRQCHK(c); goto L_800F4808; } // 800F487C
L_800F4880:;
  c->r[25]=c->r[24]|c->r[24]; // 800F4880
L_800F4884:;
  cmps(c,0,(int32_t)c->r[25],0); // 800F4884
  if (!crb(c,2)) { IRQCHK(c); goto L_800F47C0; } // 800F4888
  c->r[11]=c->r[1]+0x00000030u; // 800F488C
  c->lr=0x800F4894u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F4890
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F4894
  c->lr=c->r[0]; // 800F4898
  c->r[1]=c->r[1]+0x00000030u; // 800F489C
  return; // 800F48A0
}

// fn_800F48A4
void f_800F48A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F48A4
  c->r[0]=c->lr; // 800F48A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F48AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F48B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F48B4
  c->r[30]=c->r[3]|c->r[3]; // 800F48B8
  c->r[31]=c->r[4]|c->r[4]; // 800F48BC
  cmps(c,0,(int32_t)c->r[3],0); // 800F48C0
  if (crb(c,2)) { goto L_800F48E4; } // 800F48C4
  c->r[4]=0u+0x00000000u; // 800F48C8
  c->lr=0x800F48D0u; f_800F493C(c); // 800F48CC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F48D0
  cmps(c,0,(int32_t)c->r[0],0); // 800F48D4
  if (!crb(c,1)) { goto L_800F48E4; } // 800F48D8
  c->r[3]=c->r[30]|c->r[30]; // 800F48DC
  c->lr=0x800F48E4u; f_80047B20(c); // 800F48E0
L_800F48E4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F48E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F48E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F48EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F48F0
  c->lr=c->r[0]; // 800F48F4
  c->r[1]=c->r[1]+0x00000010u; // 800F48F8
  return; // 800F48FC
}

// fn_800F4900
void f_800F4900(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4900
  c->r[0]=c->lr; // 800F4904
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4908
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F490C
  c->r[31]=c->r[3]|c->r[3]; // 800F4910
  c->lr=0x800F4918u; f_800F6B24(c); // 800F4914
  c->r[3]=0u+0x80480000u; // 800F4918
  c->r[0]=c->r[3]+0x00002E78u; // 800F491C
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F4920
  c->r[3]=c->r[31]|c->r[31]; // 800F4924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4928
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F492C
  c->lr=c->r[0]; // 800F4930
  c->r[1]=c->r[1]+0x00000010u; // 800F4934
  return; // 800F4938
}

// fn_800F493C
void f_800F493C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F493C
  c->r[0]=c->lr; // 800F4940
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4948
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F494C
  c->r[30]=c->r[3]|c->r[3]; // 800F4950
  c->r[31]=c->r[4]|c->r[4]; // 800F4954
  cmps(c,0,(int32_t)c->r[3],0); // 800F4958
  if (crb(c,2)) { goto L_800F499C; } // 800F495C
  c->r[4]=0u+0x80460000u; // 800F4960
  c->r[0]=c->r[4]+0x000024B0u; // 800F4964
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4968
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F496C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4970
  c->ctr=c->r[12]; // 800F4974
  if (true) { c->lr=0x800F497Cu; dispatch(c,c->ctr); } // 800F4978
  c->r[3]=c->r[30]|c->r[30]; // 800F497C
  c->r[4]=0u+0x00000000u; // 800F4980
  c->lr=0x800F4988u; f_8010539C(c); // 800F4984
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4988
  cmps(c,0,(int32_t)c->r[0],0); // 800F498C
  if (!crb(c,1)) { goto L_800F499C; } // 800F4990
  c->r[3]=c->r[30]|c->r[30]; // 800F4994
  c->lr=0x800F499Cu; f_80047B20(c); // 800F4998
L_800F499C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F499C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F49A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F49A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F49A8
  c->lr=c->r[0]; // 800F49AC
  c->r[1]=c->r[1]+0x00000010u; // 800F49B0
  return; // 800F49B4
}

// fn_800F49B8
void f_800F49B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F49B8
  c->r[0]=c->lr; // 800F49BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F49C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F49C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F49C8
  c->r[30]=c->r[3]|c->r[3]; // 800F49CC
  c->r[31]=c->r[4]|c->r[4]; // 800F49D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F49D4
  if (crb(c,2)) { goto L_800F4A18; } // 800F49D8
  c->r[4]=0u+0x80460000u; // 800F49DC
  c->r[0]=c->r[4]+0x00002500u; // 800F49E0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F49E4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F49E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F49EC
  c->ctr=c->r[12]; // 800F49F0
  if (true) { c->lr=0x800F49F8u; dispatch(c,c->ctr); } // 800F49F4
  c->r[3]=c->r[30]|c->r[30]; // 800F49F8
  c->r[4]=0u+0x00000000u; // 800F49FC
  c->lr=0x800F4A04u; f_8010539C(c); // 800F4A00
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4A04
  cmps(c,0,(int32_t)c->r[0],0); // 800F4A08
  if (!crb(c,1)) { goto L_800F4A18; } // 800F4A0C
  c->r[3]=c->r[30]|c->r[30]; // 800F4A10
  c->lr=0x800F4A18u; f_80047B20(c); // 800F4A14
L_800F4A18:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4A18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4A1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4A20
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4A24
  c->lr=c->r[0]; // 800F4A28
  c->r[1]=c->r[1]+0x00000010u; // 800F4A2C
  return; // 800F4A30
}

// fn_800F4A34
void f_800F4A34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4A34
  c->r[0]=c->lr; // 800F4A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4A40
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4A44
  c->r[30]=c->r[3]|c->r[3]; // 800F4A48
  c->r[31]=c->r[4]|c->r[4]; // 800F4A4C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4A50
  if (crb(c,2)) { goto L_800F4A94; } // 800F4A54
  c->r[4]=0u+0x80460000u; // 800F4A58
  c->r[0]=c->r[4]+0x00002550u; // 800F4A5C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4A60
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4A64
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4A68
  c->ctr=c->r[12]; // 800F4A6C
  if (true) { c->lr=0x800F4A74u; dispatch(c,c->ctr); } // 800F4A70
  c->r[3]=c->r[30]|c->r[30]; // 800F4A74
  c->r[4]=0u+0x00000000u; // 800F4A78
  c->lr=0x800F4A80u; f_8010539C(c); // 800F4A7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4A80
  cmps(c,0,(int32_t)c->r[0],0); // 800F4A84
  if (!crb(c,1)) { goto L_800F4A94; } // 800F4A88
  c->r[3]=c->r[30]|c->r[30]; // 800F4A8C
  c->lr=0x800F4A94u; f_80047B20(c); // 800F4A90
L_800F4A94:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4A94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4A98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4AA0
  c->lr=c->r[0]; // 800F4AA4
  c->r[1]=c->r[1]+0x00000010u; // 800F4AA8
  return; // 800F4AAC
}

// fn_800F4AB0
void f_800F4AB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4AB0
  c->r[0]=c->lr; // 800F4AB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4AB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4ABC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4AC0
  c->r[30]=c->r[3]|c->r[3]; // 800F4AC4
  c->r[31]=c->r[4]|c->r[4]; // 800F4AC8
  cmps(c,0,(int32_t)c->r[3],0); // 800F4ACC
  if (crb(c,2)) { goto L_800F4B10; } // 800F4AD0
  c->r[4]=0u+0x80460000u; // 800F4AD4
  c->r[0]=c->r[4]+0x0000259Cu; // 800F4AD8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4ADC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4AE0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4AE4
  c->ctr=c->r[12]; // 800F4AE8
  if (true) { c->lr=0x800F4AF0u; dispatch(c,c->ctr); } // 800F4AEC
  c->r[3]=c->r[30]|c->r[30]; // 800F4AF0
  c->r[4]=0u+0x00000000u; // 800F4AF4
  c->lr=0x800F4AFCu; f_8010539C(c); // 800F4AF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4AFC
  cmps(c,0,(int32_t)c->r[0],0); // 800F4B00
  if (!crb(c,1)) { goto L_800F4B10; } // 800F4B04
  c->r[3]=c->r[30]|c->r[30]; // 800F4B08
  c->lr=0x800F4B10u; f_80047B20(c); // 800F4B0C
L_800F4B10:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4B10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4B14
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4B18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4B1C
  c->lr=c->r[0]; // 800F4B20
  c->r[1]=c->r[1]+0x00000010u; // 800F4B24
  return; // 800F4B28
}

// fn_800F4B2C
void f_800F4B2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4B2C
  c->r[0]=c->lr; // 800F4B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4B34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4B38
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4B3C
  c->r[30]=c->r[3]|c->r[3]; // 800F4B40
  c->r[31]=c->r[4]|c->r[4]; // 800F4B44
  cmps(c,0,(int32_t)c->r[3],0); // 800F4B48
  if (crb(c,2)) { goto L_800F4B8C; } // 800F4B4C
  c->r[4]=0u+0x80460000u; // 800F4B50
  c->r[0]=c->r[4]+0x000025E8u; // 800F4B54
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4B58
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4B5C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4B60
  c->ctr=c->r[12]; // 800F4B64
  if (true) { c->lr=0x800F4B6Cu; dispatch(c,c->ctr); } // 800F4B68
  c->r[3]=c->r[30]|c->r[30]; // 800F4B6C
  c->r[4]=0u+0x00000000u; // 800F4B70
  c->lr=0x800F4B78u; f_8010539C(c); // 800F4B74
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4B78
  cmps(c,0,(int32_t)c->r[0],0); // 800F4B7C
  if (!crb(c,1)) { goto L_800F4B8C; } // 800F4B80
  c->r[3]=c->r[30]|c->r[30]; // 800F4B84
  c->lr=0x800F4B8Cu; f_80047B20(c); // 800F4B88
L_800F4B8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4B8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4B90
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4B94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4B98
  c->lr=c->r[0]; // 800F4B9C
  c->r[1]=c->r[1]+0x00000010u; // 800F4BA0
  return; // 800F4BA4
}

// fn_800F4BA8
void f_800F4BA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4BA8
  c->r[0]=c->lr; // 800F4BAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4BB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4BB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4BB8
  c->r[30]=c->r[3]|c->r[3]; // 800F4BBC
  c->r[31]=c->r[4]|c->r[4]; // 800F4BC0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4BC4
  if (crb(c,2)) { goto L_800F4C08; } // 800F4BC8
  c->r[4]=0u+0x80460000u; // 800F4BCC
  c->r[0]=c->r[4]+0x00002634u; // 800F4BD0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4BD4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4BD8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4BDC
  c->ctr=c->r[12]; // 800F4BE0
  if (true) { c->lr=0x800F4BE8u; dispatch(c,c->ctr); } // 800F4BE4
  c->r[3]=c->r[30]|c->r[30]; // 800F4BE8
  c->r[4]=0u+0x00000000u; // 800F4BEC
  c->lr=0x800F4BF4u; f_8010539C(c); // 800F4BF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4BF4
  cmps(c,0,(int32_t)c->r[0],0); // 800F4BF8
  if (!crb(c,1)) { goto L_800F4C08; } // 800F4BFC
  c->r[3]=c->r[30]|c->r[30]; // 800F4C00
  c->lr=0x800F4C08u; f_80047B20(c); // 800F4C04
L_800F4C08:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4C08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4C0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4C14
  c->lr=c->r[0]; // 800F4C18
  c->r[1]=c->r[1]+0x00000010u; // 800F4C1C
  return; // 800F4C20
}

// fn_800F4C24
void f_800F4C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4C24
  c->r[0]=c->lr; // 800F4C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4C30
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4C34
  c->r[30]=c->r[3]|c->r[3]; // 800F4C38
  c->r[31]=c->r[4]|c->r[4]; // 800F4C3C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4C40
  if (crb(c,2)) { goto L_800F4C84; } // 800F4C44
  c->r[4]=0u+0x80460000u; // 800F4C48
  c->r[0]=c->r[4]+0x00002680u; // 800F4C4C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4C50
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4C54
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4C58
  c->ctr=c->r[12]; // 800F4C5C
  if (true) { c->lr=0x800F4C64u; dispatch(c,c->ctr); } // 800F4C60
  c->r[3]=c->r[30]|c->r[30]; // 800F4C64
  c->r[4]=0u+0x00000000u; // 800F4C68
  c->lr=0x800F4C70u; f_8010539C(c); // 800F4C6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4C70
  cmps(c,0,(int32_t)c->r[0],0); // 800F4C74
  if (!crb(c,1)) { goto L_800F4C84; } // 800F4C78
  c->r[3]=c->r[30]|c->r[30]; // 800F4C7C
  c->lr=0x800F4C84u; f_80047B20(c); // 800F4C80
L_800F4C84:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4C84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4C88
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4C90
  c->lr=c->r[0]; // 800F4C94
  c->r[1]=c->r[1]+0x00000010u; // 800F4C98
  return; // 800F4C9C
}

// fn_800F4CA0
void f_800F4CA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4CA0
  c->r[0]=c->lr; // 800F4CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4CAC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4CB0
  c->r[30]=c->r[3]|c->r[3]; // 800F4CB4
  c->r[31]=c->r[4]|c->r[4]; // 800F4CB8
  cmps(c,0,(int32_t)c->r[3],0); // 800F4CBC
  if (crb(c,2)) { goto L_800F4D00; } // 800F4CC0
  c->r[4]=0u+0x80460000u; // 800F4CC4
  c->r[0]=c->r[4]+0x000026CCu; // 800F4CC8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4CCC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4CD0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4CD4
  c->ctr=c->r[12]; // 800F4CD8
  if (true) { c->lr=0x800F4CE0u; dispatch(c,c->ctr); } // 800F4CDC
  c->r[3]=c->r[30]|c->r[30]; // 800F4CE0
  c->r[4]=0u+0x00000000u; // 800F4CE4
  c->lr=0x800F4CECu; f_8010539C(c); // 800F4CE8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4CEC
  cmps(c,0,(int32_t)c->r[0],0); // 800F4CF0
  if (!crb(c,1)) { goto L_800F4D00; } // 800F4CF4
  c->r[3]=c->r[30]|c->r[30]; // 800F4CF8
  c->lr=0x800F4D00u; f_80047B20(c); // 800F4CFC
L_800F4D00:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4D00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4D04
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4D08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4D0C
  c->lr=c->r[0]; // 800F4D10
  c->r[1]=c->r[1]+0x00000010u; // 800F4D14
  return; // 800F4D18
}

// fn_800F4D1C
void f_800F4D1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4D1C
  c->r[0]=c->lr; // 800F4D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4D24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4D28
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4D2C
  c->r[30]=c->r[3]|c->r[3]; // 800F4D30
  c->r[31]=c->r[4]|c->r[4]; // 800F4D34
  cmps(c,0,(int32_t)c->r[3],0); // 800F4D38
  if (crb(c,2)) { goto L_800F4D7C; } // 800F4D3C
  c->r[4]=0u+0x80460000u; // 800F4D40
  c->r[0]=c->r[4]+0x00002764u; // 800F4D44
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4D48
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4D4C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4D50
  c->ctr=c->r[12]; // 800F4D54
  if (true) { c->lr=0x800F4D5Cu; dispatch(c,c->ctr); } // 800F4D58
  c->r[3]=c->r[30]|c->r[30]; // 800F4D5C
  c->r[4]=0u+0x00000000u; // 800F4D60
  c->lr=0x800F4D68u; f_8010539C(c); // 800F4D64
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4D68
  cmps(c,0,(int32_t)c->r[0],0); // 800F4D6C
  if (!crb(c,1)) { goto L_800F4D7C; } // 800F4D70
  c->r[3]=c->r[30]|c->r[30]; // 800F4D74
  c->lr=0x800F4D7Cu; f_80047B20(c); // 800F4D78
L_800F4D7C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4D7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4D80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4D84
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4D88
  c->lr=c->r[0]; // 800F4D8C
  c->r[1]=c->r[1]+0x00000010u; // 800F4D90
  return; // 800F4D94
}

// fn_800F4D98
void f_800F4D98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4D98
  c->r[0]=c->lr; // 800F4D9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4DA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4DA4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4DA8
  c->r[30]=c->r[3]|c->r[3]; // 800F4DAC
  c->r[31]=c->r[4]|c->r[4]; // 800F4DB0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4DB4
  if (crb(c,2)) { goto L_800F4DF8; } // 800F4DB8
  c->r[4]=0u+0x80460000u; // 800F4DBC
  c->r[0]=c->r[4]+0x000027B0u; // 800F4DC0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4DC4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4DC8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4DCC
  c->ctr=c->r[12]; // 800F4DD0
  if (true) { c->lr=0x800F4DD8u; dispatch(c,c->ctr); } // 800F4DD4
  c->r[3]=c->r[30]|c->r[30]; // 800F4DD8
  c->r[4]=0u+0x00000000u; // 800F4DDC
  c->lr=0x800F4DE4u; f_8010539C(c); // 800F4DE0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4DE4
  cmps(c,0,(int32_t)c->r[0],0); // 800F4DE8
  if (!crb(c,1)) { goto L_800F4DF8; } // 800F4DEC
  c->r[3]=c->r[30]|c->r[30]; // 800F4DF0
  c->lr=0x800F4DF8u; f_80047B20(c); // 800F4DF4
L_800F4DF8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4DF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4DFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4E04
  c->lr=c->r[0]; // 800F4E08
  c->r[1]=c->r[1]+0x00000010u; // 800F4E0C
  return; // 800F4E10
}

// fn_800F4E14
void f_800F4E14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4E14
  c->r[0]=c->lr; // 800F4E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4E20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4E24
  c->r[30]=c->r[3]|c->r[3]; // 800F4E28
  c->r[31]=c->r[4]|c->r[4]; // 800F4E2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F4E30
  if (crb(c,2)) { goto L_800F4E74; } // 800F4E34
  c->r[4]=0u+0x80460000u; // 800F4E38
  c->r[0]=c->r[4]+0x000027FCu; // 800F4E3C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4E40
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4E44
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4E48
  c->ctr=c->r[12]; // 800F4E4C
  if (true) { c->lr=0x800F4E54u; dispatch(c,c->ctr); } // 800F4E50
  c->r[3]=c->r[30]|c->r[30]; // 800F4E54
  c->r[4]=0u+0x00000000u; // 800F4E58
  c->lr=0x800F4E60u; f_8010539C(c); // 800F4E5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4E60
  cmps(c,0,(int32_t)c->r[0],0); // 800F4E64
  if (!crb(c,1)) { goto L_800F4E74; } // 800F4E68
  c->r[3]=c->r[30]|c->r[30]; // 800F4E6C
  c->lr=0x800F4E74u; f_80047B20(c); // 800F4E70
L_800F4E74:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4E74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4E78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4E7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4E80
  c->lr=c->r[0]; // 800F4E84
  c->r[1]=c->r[1]+0x00000010u; // 800F4E88
  return; // 800F4E8C
}

// fn_800F4E90
void f_800F4E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4E90
  c->r[0]=c->lr; // 800F4E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4E98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4E9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4EA0
  c->r[30]=c->r[3]|c->r[3]; // 800F4EA4
  c->r[31]=c->r[4]|c->r[4]; // 800F4EA8
  cmps(c,0,(int32_t)c->r[3],0); // 800F4EAC
  if (crb(c,2)) { goto L_800F4EF0; } // 800F4EB0
  c->r[4]=0u+0x80460000u; // 800F4EB4
  c->r[0]=c->r[4]+0x00002718u; // 800F4EB8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4EBC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4EC0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4EC4
  c->ctr=c->r[12]; // 800F4EC8
  if (true) { c->lr=0x800F4ED0u; dispatch(c,c->ctr); } // 800F4ECC
  c->r[3]=c->r[30]|c->r[30]; // 800F4ED0
  c->r[4]=0u+0x00000000u; // 800F4ED4
  c->lr=0x800F4EDCu; f_8010539C(c); // 800F4ED8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4EDC
  cmps(c,0,(int32_t)c->r[0],0); // 800F4EE0
  if (!crb(c,1)) { goto L_800F4EF0; } // 800F4EE4
  c->r[3]=c->r[30]|c->r[30]; // 800F4EE8
  c->lr=0x800F4EF0u; f_80047B20(c); // 800F4EEC
L_800F4EF0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4EF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4EF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4EF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4EFC
  c->lr=c->r[0]; // 800F4F00
  c->r[1]=c->r[1]+0x00000010u; // 800F4F04
  return; // 800F4F08
}

// fn_800F4F0C
void f_800F4F0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4F0C
  c->r[0]=c->lr; // 800F4F10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4F14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4F18
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4F1C
  c->r[30]=c->r[3]|c->r[3]; // 800F4F20
  c->r[31]=c->r[4]|c->r[4]; // 800F4F24
  cmps(c,0,(int32_t)c->r[3],0); // 800F4F28
  if (crb(c,2)) { goto L_800F4F6C; } // 800F4F2C
  c->r[4]=0u+0x80460000u; // 800F4F30
  c->r[0]=c->r[4]+0x00002848u; // 800F4F34
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4F38
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4F3C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4F40
  c->ctr=c->r[12]; // 800F4F44
  if (true) { c->lr=0x800F4F4Cu; dispatch(c,c->ctr); } // 800F4F48
  c->r[3]=c->r[30]|c->r[30]; // 800F4F4C
  c->r[4]=0u+0x00000000u; // 800F4F50
  c->lr=0x800F4F58u; f_8010539C(c); // 800F4F54
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4F58
  cmps(c,0,(int32_t)c->r[0],0); // 800F4F5C
  if (!crb(c,1)) { goto L_800F4F6C; } // 800F4F60
  c->r[3]=c->r[30]|c->r[30]; // 800F4F64
  c->lr=0x800F4F6Cu; f_80047B20(c); // 800F4F68
L_800F4F6C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4F6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4F70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4F74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4F78
  c->lr=c->r[0]; // 800F4F7C
  c->r[1]=c->r[1]+0x00000010u; // 800F4F80
  return; // 800F4F84
}

// fn_800F4F88
void f_800F4F88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4F88
  c->r[0]=c->lr; // 800F4F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4F94
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4F98
  c->r[30]=c->r[3]|c->r[3]; // 800F4F9C
  c->r[31]=c->r[4]|c->r[4]; // 800F4FA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4FA4
  if (crb(c,2)) { goto L_800F4FE8; } // 800F4FA8
  c->r[4]=0u+0x80460000u; // 800F4FAC
  c->r[0]=c->r[4]+0x00002894u; // 800F4FB0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F4FB4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F4FB8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F4FBC
  c->ctr=c->r[12]; // 800F4FC0
  if (true) { c->lr=0x800F4FC8u; dispatch(c,c->ctr); } // 800F4FC4
  c->r[3]=c->r[30]|c->r[30]; // 800F4FC8
  c->r[4]=0u+0x00000000u; // 800F4FCC
  c->lr=0x800F4FD4u; f_8010539C(c); // 800F4FD0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F4FD4
  cmps(c,0,(int32_t)c->r[0],0); // 800F4FD8
  if (!crb(c,1)) { goto L_800F4FE8; } // 800F4FDC
  c->r[3]=c->r[30]|c->r[30]; // 800F4FE0
  c->lr=0x800F4FE8u; f_80047B20(c); // 800F4FE4
L_800F4FE8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F4FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4FEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4FF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4FF4
  c->lr=c->r[0]; // 800F4FF8
  c->r[1]=c->r[1]+0x00000010u; // 800F4FFC
  return; // 800F5000
}

// fn_800F5004
void f_800F5004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5004
  c->r[0]=c->lr; // 800F5008
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F500C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5010
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5014
  c->r[30]=c->r[3]|c->r[3]; // 800F5018
  c->r[31]=c->r[4]|c->r[4]; // 800F501C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5020
  if (crb(c,2)) { goto L_800F5064; } // 800F5024
  c->r[4]=0u+0x80460000u; // 800F5028
  c->r[0]=c->r[4]+0x000028E0u; // 800F502C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5030
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5034
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5038
  c->ctr=c->r[12]; // 800F503C
  if (true) { c->lr=0x800F5044u; dispatch(c,c->ctr); } // 800F5040
  c->r[3]=c->r[30]|c->r[30]; // 800F5044
  c->r[4]=0u+0x00000000u; // 800F5048
  c->lr=0x800F5050u; f_8010539C(c); // 800F504C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5050
  cmps(c,0,(int32_t)c->r[0],0); // 800F5054
  if (!crb(c,1)) { goto L_800F5064; } // 800F5058
  c->r[3]=c->r[30]|c->r[30]; // 800F505C
  c->lr=0x800F5064u; f_80047B20(c); // 800F5060
L_800F5064:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5068
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F506C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5070
  c->lr=c->r[0]; // 800F5074
  c->r[1]=c->r[1]+0x00000010u; // 800F5078
  return; // 800F507C
}

// fn_800F5080
void f_800F5080(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5080
  c->r[0]=c->lr; // 800F5084
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5088
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F508C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5090
  c->r[30]=c->r[3]|c->r[3]; // 800F5094
  c->r[31]=c->r[4]|c->r[4]; // 800F5098
  cmps(c,0,(int32_t)c->r[3],0); // 800F509C
  if (crb(c,2)) { goto L_800F50E0; } // 800F50A0
  c->r[4]=0u+0x80460000u; // 800F50A4
  c->r[0]=c->r[4]+0x0000292Cu; // 800F50A8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F50AC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F50B0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F50B4
  c->ctr=c->r[12]; // 800F50B8
  if (true) { c->lr=0x800F50C0u; dispatch(c,c->ctr); } // 800F50BC
  c->r[3]=c->r[30]|c->r[30]; // 800F50C0
  c->r[4]=0u+0x00000000u; // 800F50C4
  c->lr=0x800F50CCu; f_8010539C(c); // 800F50C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F50CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F50D0
  if (!crb(c,1)) { goto L_800F50E0; } // 800F50D4
  c->r[3]=c->r[30]|c->r[30]; // 800F50D8
  c->lr=0x800F50E0u; f_80047B20(c); // 800F50DC
L_800F50E0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F50E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F50E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F50E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F50EC
  c->lr=c->r[0]; // 800F50F0
  c->r[1]=c->r[1]+0x00000010u; // 800F50F4
  return; // 800F50F8
}

// fn_800F50FC
void f_800F50FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F50FC
  c->r[0]=c->lr; // 800F5100
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5104
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5108
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F510C
  c->r[30]=c->r[3]|c->r[3]; // 800F5110
  c->r[31]=c->r[4]|c->r[4]; // 800F5114
  cmps(c,0,(int32_t)c->r[3],0); // 800F5118
  if (crb(c,2)) { goto L_800F515C; } // 800F511C
  c->r[4]=0u+0x80460000u; // 800F5120
  c->r[0]=c->r[4]+0x00002978u; // 800F5124
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5128
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F512C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5130
  c->ctr=c->r[12]; // 800F5134
  if (true) { c->lr=0x800F513Cu; dispatch(c,c->ctr); } // 800F5138
  c->r[3]=c->r[30]|c->r[30]; // 800F513C
  c->r[4]=0u+0x00000000u; // 800F5140
  c->lr=0x800F5148u; f_8010539C(c); // 800F5144
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5148
  cmps(c,0,(int32_t)c->r[0],0); // 800F514C
  if (!crb(c,1)) { goto L_800F515C; } // 800F5150
  c->r[3]=c->r[30]|c->r[30]; // 800F5154
  c->lr=0x800F515Cu; f_80047B20(c); // 800F5158
L_800F515C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F515C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5160
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5164
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5168
  c->lr=c->r[0]; // 800F516C
  c->r[1]=c->r[1]+0x00000010u; // 800F5170
  return; // 800F5174
}

// fn_800F5178
void f_800F5178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5178
  c->r[0]=c->lr; // 800F517C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5184
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5188
  c->r[30]=c->r[3]|c->r[3]; // 800F518C
  c->r[31]=c->r[4]|c->r[4]; // 800F5190
  cmps(c,0,(int32_t)c->r[3],0); // 800F5194
  if (crb(c,2)) { goto L_800F51D8; } // 800F5198
  c->r[4]=0u+0x80460000u; // 800F519C
  c->r[0]=c->r[4]+0x000029C4u; // 800F51A0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F51A4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F51A8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F51AC
  c->ctr=c->r[12]; // 800F51B0
  if (true) { c->lr=0x800F51B8u; dispatch(c,c->ctr); } // 800F51B4
  c->r[3]=c->r[30]|c->r[30]; // 800F51B8
  c->r[4]=0u+0x00000000u; // 800F51BC
  c->lr=0x800F51C4u; f_8010539C(c); // 800F51C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F51C4
  cmps(c,0,(int32_t)c->r[0],0); // 800F51C8
  if (!crb(c,1)) { goto L_800F51D8; } // 800F51CC
  c->r[3]=c->r[30]|c->r[30]; // 800F51D0
  c->lr=0x800F51D8u; f_80047B20(c); // 800F51D4
L_800F51D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F51D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F51DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F51E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F51E4
  c->lr=c->r[0]; // 800F51E8
  c->r[1]=c->r[1]+0x00000010u; // 800F51EC
  return; // 800F51F0
}

// fn_800F51F4
void f_800F51F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F51F4
  c->r[0]=c->lr; // 800F51F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F51FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5200
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5204
  c->r[30]=c->r[3]|c->r[3]; // 800F5208
  c->r[31]=c->r[4]|c->r[4]; // 800F520C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5210
  if (crb(c,2)) { goto L_800F5254; } // 800F5214
  c->r[4]=0u+0x80460000u; // 800F5218
  c->r[0]=c->r[4]+0x00002A10u; // 800F521C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5220
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5224
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5228
  c->ctr=c->r[12]; // 800F522C
  if (true) { c->lr=0x800F5234u; dispatch(c,c->ctr); } // 800F5230
  c->r[3]=c->r[30]|c->r[30]; // 800F5234
  c->r[4]=0u+0x00000000u; // 800F5238
  c->lr=0x800F5240u; f_8010539C(c); // 800F523C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5240
  cmps(c,0,(int32_t)c->r[0],0); // 800F5244
  if (!crb(c,1)) { goto L_800F5254; } // 800F5248
  c->r[3]=c->r[30]|c->r[30]; // 800F524C
  c->lr=0x800F5254u; f_80047B20(c); // 800F5250
L_800F5254:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5258
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F525C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5260
  c->lr=c->r[0]; // 800F5264
  c->r[1]=c->r[1]+0x00000010u; // 800F5268
  return; // 800F526C
}

// fn_800F5270
void f_800F5270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5270
  c->r[0]=c->lr; // 800F5274
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5278
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F527C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5280
  c->r[30]=c->r[3]|c->r[3]; // 800F5284
  c->r[31]=c->r[4]|c->r[4]; // 800F5288
  cmps(c,0,(int32_t)c->r[3],0); // 800F528C
  if (crb(c,2)) { goto L_800F52D0; } // 800F5290
  c->r[4]=0u+0x80460000u; // 800F5294
  c->r[0]=c->r[4]+0x00002A5Cu; // 800F5298
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F529C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F52A0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F52A4
  c->ctr=c->r[12]; // 800F52A8
  if (true) { c->lr=0x800F52B0u; dispatch(c,c->ctr); } // 800F52AC
  c->r[3]=c->r[30]|c->r[30]; // 800F52B0
  c->r[4]=0u+0x00000000u; // 800F52B4
  c->lr=0x800F52BCu; f_8010539C(c); // 800F52B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F52BC
  cmps(c,0,(int32_t)c->r[0],0); // 800F52C0
  if (!crb(c,1)) { goto L_800F52D0; } // 800F52C4
  c->r[3]=c->r[30]|c->r[30]; // 800F52C8
  c->lr=0x800F52D0u; f_80047B20(c); // 800F52CC
L_800F52D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F52D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F52D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F52D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F52DC
  c->lr=c->r[0]; // 800F52E0
  c->r[1]=c->r[1]+0x00000010u; // 800F52E4
  return; // 800F52E8
}

// fn_800F52EC
void f_800F52EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F52EC
  c->r[0]=c->lr; // 800F52F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F52F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F52F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F52FC
  c->r[30]=c->r[3]|c->r[3]; // 800F5300
  c->r[31]=c->r[4]|c->r[4]; // 800F5304
  cmps(c,0,(int32_t)c->r[3],0); // 800F5308
  if (crb(c,2)) { goto L_800F534C; } // 800F530C
  c->r[4]=0u+0x80460000u; // 800F5310
  c->r[0]=c->r[4]+0x00002AA8u; // 800F5314
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5318
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F531C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5320
  c->ctr=c->r[12]; // 800F5324
  if (true) { c->lr=0x800F532Cu; dispatch(c,c->ctr); } // 800F5328
  c->r[3]=c->r[30]|c->r[30]; // 800F532C
  c->r[4]=0u+0x00000000u; // 800F5330
  c->lr=0x800F5338u; f_8010539C(c); // 800F5334
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5338
  cmps(c,0,(int32_t)c->r[0],0); // 800F533C
  if (!crb(c,1)) { goto L_800F534C; } // 800F5340
  c->r[3]=c->r[30]|c->r[30]; // 800F5344
  c->lr=0x800F534Cu; f_80047B20(c); // 800F5348
L_800F534C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F534C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5350
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5354
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5358
  c->lr=c->r[0]; // 800F535C
  c->r[1]=c->r[1]+0x00000010u; // 800F5360
  return; // 800F5364
}

// fn_800F5368
void f_800F5368(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5368
  c->r[0]=c->lr; // 800F536C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5370
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5374
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5378
  c->r[30]=c->r[3]|c->r[3]; // 800F537C
  c->r[31]=c->r[4]|c->r[4]; // 800F5380
  cmps(c,0,(int32_t)c->r[3],0); // 800F5384
  if (crb(c,2)) { goto L_800F53C8; } // 800F5388
  c->r[4]=0u+0x80460000u; // 800F538C
  c->r[0]=c->r[4]+0x00002AF4u; // 800F5390
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5394
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5398
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F539C
  c->ctr=c->r[12]; // 800F53A0
  if (true) { c->lr=0x800F53A8u; dispatch(c,c->ctr); } // 800F53A4
  c->r[3]=c->r[30]|c->r[30]; // 800F53A8
  c->r[4]=0u+0x00000000u; // 800F53AC
  c->lr=0x800F53B4u; f_8010539C(c); // 800F53B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F53B4
  cmps(c,0,(int32_t)c->r[0],0); // 800F53B8
  if (!crb(c,1)) { goto L_800F53C8; } // 800F53BC
  c->r[3]=c->r[30]|c->r[30]; // 800F53C0
  c->lr=0x800F53C8u; f_80047B20(c); // 800F53C4
L_800F53C8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F53C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F53CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F53D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F53D4
  c->lr=c->r[0]; // 800F53D8
  c->r[1]=c->r[1]+0x00000010u; // 800F53DC
  return; // 800F53E0
}

// fn_800F53E4
void f_800F53E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F53E4
  c->r[0]=c->lr; // 800F53E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F53EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F53F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F53F4
  c->r[30]=c->r[3]|c->r[3]; // 800F53F8
  c->r[31]=c->r[4]|c->r[4]; // 800F53FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F5400
  if (crb(c,2)) { goto L_800F5444; } // 800F5404
  c->r[4]=0u+0x80460000u; // 800F5408
  c->r[0]=c->r[4]+0x00002B88u; // 800F540C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5410
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5414
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5418
  c->ctr=c->r[12]; // 800F541C
  if (true) { c->lr=0x800F5424u; dispatch(c,c->ctr); } // 800F5420
  c->r[3]=c->r[30]|c->r[30]; // 800F5424
  c->r[4]=0u+0x00000000u; // 800F5428
  c->lr=0x800F5430u; f_8010539C(c); // 800F542C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5430
  cmps(c,0,(int32_t)c->r[0],0); // 800F5434
  if (!crb(c,1)) { goto L_800F5444; } // 800F5438
  c->r[3]=c->r[30]|c->r[30]; // 800F543C
  c->lr=0x800F5444u; f_80047B20(c); // 800F5440
L_800F5444:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5444
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5448
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F544C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5450
  c->lr=c->r[0]; // 800F5454
  c->r[1]=c->r[1]+0x00000010u; // 800F5458
  return; // 800F545C
}

// fn_800F5460
void f_800F5460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5460
  c->r[0]=c->lr; // 800F5464
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F546C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5470
  c->r[30]=c->r[3]|c->r[3]; // 800F5474
  c->r[31]=c->r[4]|c->r[4]; // 800F5478
  cmps(c,0,(int32_t)c->r[3],0); // 800F547C
  if (crb(c,2)) { goto L_800F54C0; } // 800F5480
  c->r[4]=0u+0x80460000u; // 800F5484
  c->r[0]=c->r[4]+0x00002BD4u; // 800F5488
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F548C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5490
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5494
  c->ctr=c->r[12]; // 800F5498
  if (true) { c->lr=0x800F54A0u; dispatch(c,c->ctr); } // 800F549C
  c->r[3]=c->r[30]|c->r[30]; // 800F54A0
  c->r[4]=0u+0x00000000u; // 800F54A4
  c->lr=0x800F54ACu; f_8010539C(c); // 800F54A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F54AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F54B0
  if (!crb(c,1)) { goto L_800F54C0; } // 800F54B4
  c->r[3]=c->r[30]|c->r[30]; // 800F54B8
  c->lr=0x800F54C0u; f_80047B20(c); // 800F54BC
L_800F54C0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F54C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F54C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F54C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F54CC
  c->lr=c->r[0]; // 800F54D0
  c->r[1]=c->r[1]+0x00000010u; // 800F54D4
  return; // 800F54D8
}

// fn_800F54DC
void f_800F54DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F54DC
  c->r[0]=c->lr; // 800F54E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F54E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F54E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F54EC
  c->r[30]=c->r[3]|c->r[3]; // 800F54F0
  c->r[31]=c->r[4]|c->r[4]; // 800F54F4
  cmps(c,0,(int32_t)c->r[3],0); // 800F54F8
  if (crb(c,2)) { goto L_800F553C; } // 800F54FC
  c->r[4]=0u+0x80460000u; // 800F5500
  c->r[0]=c->r[4]+0x00002C20u; // 800F5504
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5508
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F550C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5510
  c->ctr=c->r[12]; // 800F5514
  if (true) { c->lr=0x800F551Cu; dispatch(c,c->ctr); } // 800F5518
  c->r[3]=c->r[30]|c->r[30]; // 800F551C
  c->r[4]=0u+0x00000000u; // 800F5520
  c->lr=0x800F5528u; f_8010539C(c); // 800F5524
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5528
  cmps(c,0,(int32_t)c->r[0],0); // 800F552C
  if (!crb(c,1)) { goto L_800F553C; } // 800F5530
  c->r[3]=c->r[30]|c->r[30]; // 800F5534
  c->lr=0x800F553Cu; f_80047B20(c); // 800F5538
L_800F553C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F553C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5540
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5544
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5548
  c->lr=c->r[0]; // 800F554C
  c->r[1]=c->r[1]+0x00000010u; // 800F5550
  return; // 800F5554
}

// fn_800F5558
void f_800F5558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5558
  c->r[0]=c->lr; // 800F555C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5564
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5568
  c->r[30]=c->r[3]|c->r[3]; // 800F556C
  c->r[31]=c->r[4]|c->r[4]; // 800F5570
  cmps(c,0,(int32_t)c->r[3],0); // 800F5574
  if (crb(c,2)) { goto L_800F55B8; } // 800F5578
  c->r[4]=0u+0x80460000u; // 800F557C
  c->r[0]=c->r[4]+0x00002C6Cu; // 800F5580
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5584
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5588
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F558C
  c->ctr=c->r[12]; // 800F5590
  if (true) { c->lr=0x800F5598u; dispatch(c,c->ctr); } // 800F5594
  c->r[3]=c->r[30]|c->r[30]; // 800F5598
  c->r[4]=0u+0x00000000u; // 800F559C
  c->lr=0x800F55A4u; f_8010539C(c); // 800F55A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F55A4
  cmps(c,0,(int32_t)c->r[0],0); // 800F55A8
  if (!crb(c,1)) { goto L_800F55B8; } // 800F55AC
  c->r[3]=c->r[30]|c->r[30]; // 800F55B0
  c->lr=0x800F55B8u; f_80047B20(c); // 800F55B4
L_800F55B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F55B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F55BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F55C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F55C4
  c->lr=c->r[0]; // 800F55C8
  c->r[1]=c->r[1]+0x00000010u; // 800F55CC
  return; // 800F55D0
}

// fn_800F55D4
void f_800F55D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F55D4
  c->r[0]=c->lr; // 800F55D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F55DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F55E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F55E4
  c->r[30]=c->r[3]|c->r[3]; // 800F55E8
  c->r[31]=c->r[4]|c->r[4]; // 800F55EC
  cmps(c,0,(int32_t)c->r[3],0); // 800F55F0
  if (crb(c,2)) { goto L_800F5634; } // 800F55F4
  c->r[4]=0u+0x80460000u; // 800F55F8
  c->r[0]=c->r[4]+0x00002CB8u; // 800F55FC
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5600
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5604
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5608
  c->ctr=c->r[12]; // 800F560C
  if (true) { c->lr=0x800F5614u; dispatch(c,c->ctr); } // 800F5610
  c->r[3]=c->r[30]|c->r[30]; // 800F5614
  c->r[4]=0u+0x00000000u; // 800F5618
  c->lr=0x800F5620u; f_8010539C(c); // 800F561C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5620
  cmps(c,0,(int32_t)c->r[0],0); // 800F5624
  if (!crb(c,1)) { goto L_800F5634; } // 800F5628
  c->r[3]=c->r[30]|c->r[30]; // 800F562C
  c->lr=0x800F5634u; f_80047B20(c); // 800F5630
L_800F5634:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5634
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5638
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F563C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5640
  c->lr=c->r[0]; // 800F5644
  c->r[1]=c->r[1]+0x00000010u; // 800F5648
  return; // 800F564C
}

// fn_800F5650
void f_800F5650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5650
  c->r[0]=c->lr; // 800F5654
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F565C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5660
  c->r[30]=c->r[3]|c->r[3]; // 800F5664
  c->r[31]=c->r[4]|c->r[4]; // 800F5668
  cmps(c,0,(int32_t)c->r[3],0); // 800F566C
  if (crb(c,2)) { goto L_800F56B0; } // 800F5670
  c->r[4]=0u+0x80460000u; // 800F5674
  c->r[0]=c->r[4]+0x00002D04u; // 800F5678
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F567C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5680
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5684
  c->ctr=c->r[12]; // 800F5688
  if (true) { c->lr=0x800F5690u; dispatch(c,c->ctr); } // 800F568C
  c->r[3]=c->r[30]|c->r[30]; // 800F5690
  c->r[4]=0u+0x00000000u; // 800F5694
  c->lr=0x800F569Cu; f_8010539C(c); // 800F5698
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F569C
  cmps(c,0,(int32_t)c->r[0],0); // 800F56A0
  if (!crb(c,1)) { goto L_800F56B0; } // 800F56A4
  c->r[3]=c->r[30]|c->r[30]; // 800F56A8
  c->lr=0x800F56B0u; f_80047B20(c); // 800F56AC
L_800F56B0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F56B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F56B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F56B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F56BC
  c->lr=c->r[0]; // 800F56C0
  c->r[1]=c->r[1]+0x00000010u; // 800F56C4
  return; // 800F56C8
}

// fn_800F56CC
void f_800F56CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F56CC
  c->r[0]=c->lr; // 800F56D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F56D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F56D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F56DC
  c->r[30]=c->r[3]|c->r[3]; // 800F56E0
  c->r[31]=c->r[4]|c->r[4]; // 800F56E4
  cmps(c,0,(int32_t)c->r[3],0); // 800F56E8
  if (crb(c,2)) { goto L_800F572C; } // 800F56EC
  c->r[4]=0u+0x80460000u; // 800F56F0
  c->r[0]=c->r[4]+0x00002D50u; // 800F56F4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F56F8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F56FC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5700
  c->ctr=c->r[12]; // 800F5704
  if (true) { c->lr=0x800F570Cu; dispatch(c,c->ctr); } // 800F5708
  c->r[3]=c->r[30]|c->r[30]; // 800F570C
  c->r[4]=0u+0x00000000u; // 800F5710
  c->lr=0x800F5718u; f_8010539C(c); // 800F5714
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5718
  cmps(c,0,(int32_t)c->r[0],0); // 800F571C
  if (!crb(c,1)) { goto L_800F572C; } // 800F5720
  c->r[3]=c->r[30]|c->r[30]; // 800F5724
  c->lr=0x800F572Cu; f_80047B20(c); // 800F5728
L_800F572C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F572C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5730
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5734
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5738
  c->lr=c->r[0]; // 800F573C
  c->r[1]=c->r[1]+0x00000010u; // 800F5740
  return; // 800F5744
}

// fn_800F5748
void f_800F5748(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5748
  c->r[0]=c->lr; // 800F574C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5754
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5758
  c->r[30]=c->r[3]|c->r[3]; // 800F575C
  c->r[31]=c->r[4]|c->r[4]; // 800F5760
  cmps(c,0,(int32_t)c->r[3],0); // 800F5764
  if (crb(c,2)) { goto L_800F57A8; } // 800F5768
  c->r[4]=0u+0x80460000u; // 800F576C
  c->r[0]=c->r[4]+0x00002D9Cu; // 800F5770
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5774
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5778
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F577C
  c->ctr=c->r[12]; // 800F5780
  if (true) { c->lr=0x800F5788u; dispatch(c,c->ctr); } // 800F5784
  c->r[3]=c->r[30]|c->r[30]; // 800F5788
  c->r[4]=0u+0x00000000u; // 800F578C
  c->lr=0x800F5794u; f_8010539C(c); // 800F5790
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5794
  cmps(c,0,(int32_t)c->r[0],0); // 800F5798
  if (!crb(c,1)) { goto L_800F57A8; } // 800F579C
  c->r[3]=c->r[30]|c->r[30]; // 800F57A0
  c->lr=0x800F57A8u; f_80047B20(c); // 800F57A4
L_800F57A8:;
  c->r[3]=c->r[30]|c->r[30]; // 800F57A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F57AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F57B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F57B4
  c->lr=c->r[0]; // 800F57B8
  c->r[1]=c->r[1]+0x00000010u; // 800F57BC
  return; // 800F57C0
}

// fn_800F57C4
void f_800F57C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F57C4
  c->r[0]=c->lr; // 800F57C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F57CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F57D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F57D4
  c->r[30]=c->r[3]|c->r[3]; // 800F57D8
  c->r[31]=c->r[4]|c->r[4]; // 800F57DC
  cmps(c,0,(int32_t)c->r[3],0); // 800F57E0
  if (crb(c,2)) { goto L_800F5824; } // 800F57E4
  c->r[4]=0u+0x80460000u; // 800F57E8
  c->r[0]=c->r[4]+0x00002DE8u; // 800F57EC
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F57F0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F57F4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F57F8
  c->ctr=c->r[12]; // 800F57FC
  if (true) { c->lr=0x800F5804u; dispatch(c,c->ctr); } // 800F5800
  c->r[3]=c->r[30]|c->r[30]; // 800F5804
  c->r[4]=0u+0x00000000u; // 800F5808
  c->lr=0x800F5810u; f_8010539C(c); // 800F580C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5810
  cmps(c,0,(int32_t)c->r[0],0); // 800F5814
  if (!crb(c,1)) { goto L_800F5824; } // 800F5818
  c->r[3]=c->r[30]|c->r[30]; // 800F581C
  c->lr=0x800F5824u; f_80047B20(c); // 800F5820
L_800F5824:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5824
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5828
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F582C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5830
  c->lr=c->r[0]; // 800F5834
  c->r[1]=c->r[1]+0x00000010u; // 800F5838
  return; // 800F583C
}

// fn_800F5840
void f_800F5840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5840
  c->r[0]=c->lr; // 800F5844
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F584C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5850
  c->r[30]=c->r[3]|c->r[3]; // 800F5854
  c->r[31]=c->r[4]|c->r[4]; // 800F5858
  cmps(c,0,(int32_t)c->r[3],0); // 800F585C
  if (crb(c,2)) { goto L_800F58A0; } // 800F5860
  c->r[4]=0u+0x80460000u; // 800F5864
  c->r[0]=c->r[4]+0x00002B3Cu; // 800F5868
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F586C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5870
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5874
  c->ctr=c->r[12]; // 800F5878
  if (true) { c->lr=0x800F5880u; dispatch(c,c->ctr); } // 800F587C
  c->r[3]=c->r[30]|c->r[30]; // 800F5880
  c->r[4]=0u+0x00000000u; // 800F5884
  c->lr=0x800F588Cu; f_8010539C(c); // 800F5888
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F588C
  cmps(c,0,(int32_t)c->r[0],0); // 800F5890
  if (!crb(c,1)) { goto L_800F58A0; } // 800F5894
  c->r[3]=c->r[30]|c->r[30]; // 800F5898
  c->lr=0x800F58A0u; f_80047B20(c); // 800F589C
L_800F58A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F58A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F58A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F58A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F58AC
  c->lr=c->r[0]; // 800F58B0
  c->r[1]=c->r[1]+0x00000010u; // 800F58B4
  return; // 800F58B8
}

// fn_800F58BC
void f_800F58BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F58BC
  c->r[0]=c->lr; // 800F58C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F58C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F58C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F58CC
  c->r[30]=c->r[3]|c->r[3]; // 800F58D0
  c->r[31]=c->r[4]|c->r[4]; // 800F58D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F58D8
  if (crb(c,2)) { goto L_800F591C; } // 800F58DC
  c->r[4]=0u+0x80460000u; // 800F58E0
  c->r[0]=c->r[4]+0x00002E34u; // 800F58E4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F58E8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F58EC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F58F0
  c->ctr=c->r[12]; // 800F58F4
  if (true) { c->lr=0x800F58FCu; dispatch(c,c->ctr); } // 800F58F8
  c->r[3]=c->r[30]|c->r[30]; // 800F58FC
  c->r[4]=0u+0x00000000u; // 800F5900
  c->lr=0x800F5908u; f_8010539C(c); // 800F5904
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5908
  cmps(c,0,(int32_t)c->r[0],0); // 800F590C
  if (!crb(c,1)) { goto L_800F591C; } // 800F5910
  c->r[3]=c->r[30]|c->r[30]; // 800F5914
  c->lr=0x800F591Cu; f_80047B20(c); // 800F5918
L_800F591C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F591C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5920
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5924
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5928
  c->lr=c->r[0]; // 800F592C
  c->r[1]=c->r[1]+0x00000010u; // 800F5930
  return; // 800F5934
}

// fn_800F5938
void f_800F5938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5938
  c->r[0]=c->lr; // 800F593C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5940
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5944
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5948
  c->r[30]=c->r[3]|c->r[3]; // 800F594C
  c->r[31]=c->r[4]|c->r[4]; // 800F5950
  cmps(c,0,(int32_t)c->r[3],0); // 800F5954
  if (crb(c,2)) { goto L_800F5998; } // 800F5958
  c->r[4]=0u+0x80460000u; // 800F595C
  c->r[0]=c->r[4]+0x00002E80u; // 800F5960
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5964
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5968
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F596C
  c->ctr=c->r[12]; // 800F5970
  if (true) { c->lr=0x800F5978u; dispatch(c,c->ctr); } // 800F5974
  c->r[3]=c->r[30]|c->r[30]; // 800F5978
  c->r[4]=0u+0x00000000u; // 800F597C
  c->lr=0x800F5984u; f_8010539C(c); // 800F5980
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5984
  cmps(c,0,(int32_t)c->r[0],0); // 800F5988
  if (!crb(c,1)) { goto L_800F5998; } // 800F598C
  c->r[3]=c->r[30]|c->r[30]; // 800F5990
  c->lr=0x800F5998u; f_80047B20(c); // 800F5994
L_800F5998:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5998
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F599C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F59A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F59A4
  c->lr=c->r[0]; // 800F59A8
  c->r[1]=c->r[1]+0x00000010u; // 800F59AC
  return; // 800F59B0
}

// fn_800F59B4
void f_800F59B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F59B4
  c->r[0]=c->lr; // 800F59B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F59BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F59C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F59C4
  c->r[30]=c->r[3]|c->r[3]; // 800F59C8
  c->r[31]=c->r[4]|c->r[4]; // 800F59CC
  cmps(c,0,(int32_t)c->r[3],0); // 800F59D0
  if (crb(c,2)) { goto L_800F5A14; } // 800F59D4
  c->r[4]=0u+0x80460000u; // 800F59D8
  c->r[0]=c->r[4]+0x00002EC8u; // 800F59DC
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F59E0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F59E4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F59E8
  c->ctr=c->r[12]; // 800F59EC
  if (true) { c->lr=0x800F59F4u; dispatch(c,c->ctr); } // 800F59F0
  c->r[3]=c->r[30]|c->r[30]; // 800F59F4
  c->r[4]=0u+0x00000000u; // 800F59F8
  c->lr=0x800F5A00u; f_8010539C(c); // 800F59FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5A00
  cmps(c,0,(int32_t)c->r[0],0); // 800F5A04
  if (!crb(c,1)) { goto L_800F5A14; } // 800F5A08
  c->r[3]=c->r[30]|c->r[30]; // 800F5A0C
  c->lr=0x800F5A14u; f_80047B20(c); // 800F5A10
L_800F5A14:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5A18
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5A1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5A20
  c->lr=c->r[0]; // 800F5A24
  c->r[1]=c->r[1]+0x00000010u; // 800F5A28
  return; // 800F5A2C
}

// fn_800F5A30
void f_800F5A30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5A30
  c->r[0]=c->lr; // 800F5A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5A3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5A40
  c->r[30]=c->r[3]|c->r[3]; // 800F5A44
  c->r[31]=c->r[4]|c->r[4]; // 800F5A48
  cmps(c,0,(int32_t)c->r[3],0); // 800F5A4C
  if (crb(c,2)) { goto L_800F5A90; } // 800F5A50
  c->r[4]=0u+0x80460000u; // 800F5A54
  c->r[0]=c->r[4]+0x00002F10u; // 800F5A58
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5A5C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5A60
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5A64
  c->ctr=c->r[12]; // 800F5A68
  if (true) { c->lr=0x800F5A70u; dispatch(c,c->ctr); } // 800F5A6C
  c->r[3]=c->r[30]|c->r[30]; // 800F5A70
  c->r[4]=0u+0x00000000u; // 800F5A74
  c->lr=0x800F5A7Cu; f_8010539C(c); // 800F5A78
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5A7C
  cmps(c,0,(int32_t)c->r[0],0); // 800F5A80
  if (!crb(c,1)) { goto L_800F5A90; } // 800F5A84
  c->r[3]=c->r[30]|c->r[30]; // 800F5A88
  c->lr=0x800F5A90u; f_80047B20(c); // 800F5A8C
L_800F5A90:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5A90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5A94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5A98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5A9C
  c->lr=c->r[0]; // 800F5AA0
  c->r[1]=c->r[1]+0x00000010u; // 800F5AA4
  return; // 800F5AA8
}

// fn_800F5AAC
void f_800F5AAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5AAC
  c->r[0]=c->lr; // 800F5AB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5AB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5AB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5ABC
  c->r[30]=c->r[3]|c->r[3]; // 800F5AC0
  c->r[31]=c->r[4]|c->r[4]; // 800F5AC4
  cmps(c,0,(int32_t)c->r[3],0); // 800F5AC8
  if (crb(c,2)) { goto L_800F5B0C; } // 800F5ACC
  c->r[4]=0u+0x80460000u; // 800F5AD0
  c->r[0]=c->r[4]+0x00002F58u; // 800F5AD4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5AD8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5ADC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5AE0
  c->ctr=c->r[12]; // 800F5AE4
  if (true) { c->lr=0x800F5AECu; dispatch(c,c->ctr); } // 800F5AE8
  c->r[3]=c->r[30]|c->r[30]; // 800F5AEC
  c->r[4]=0u+0x00000000u; // 800F5AF0
  c->lr=0x800F5AF8u; f_8010539C(c); // 800F5AF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5AF8
  cmps(c,0,(int32_t)c->r[0],0); // 800F5AFC
  if (!crb(c,1)) { goto L_800F5B0C; } // 800F5B00
  c->r[3]=c->r[30]|c->r[30]; // 800F5B04
  c->lr=0x800F5B0Cu; f_80047B20(c); // 800F5B08
L_800F5B0C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5B0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5B10
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5B14
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5B18
  c->lr=c->r[0]; // 800F5B1C
  c->r[1]=c->r[1]+0x00000010u; // 800F5B20
  return; // 800F5B24
}

// fn_800F5B28
void f_800F5B28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5B28
  c->r[0]=c->lr; // 800F5B2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5B30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5B34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5B38
  c->r[30]=c->r[3]|c->r[3]; // 800F5B3C
  c->r[31]=c->r[4]|c->r[4]; // 800F5B40
  cmps(c,0,(int32_t)c->r[3],0); // 800F5B44
  if (crb(c,2)) { goto L_800F5B88; } // 800F5B48
  c->r[4]=0u+0x80460000u; // 800F5B4C
  c->r[0]=c->r[4]+0x00002FA0u; // 800F5B50
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5B54
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5B58
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5B5C
  c->ctr=c->r[12]; // 800F5B60
  if (true) { c->lr=0x800F5B68u; dispatch(c,c->ctr); } // 800F5B64
  c->r[3]=c->r[30]|c->r[30]; // 800F5B68
  c->r[4]=0u+0x00000000u; // 800F5B6C
  c->lr=0x800F5B74u; f_8010539C(c); // 800F5B70
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5B74
  cmps(c,0,(int32_t)c->r[0],0); // 800F5B78
  if (!crb(c,1)) { goto L_800F5B88; } // 800F5B7C
  c->r[3]=c->r[30]|c->r[30]; // 800F5B80
  c->lr=0x800F5B88u; f_80047B20(c); // 800F5B84
L_800F5B88:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5B88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5B8C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5B90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5B94
  c->lr=c->r[0]; // 800F5B98
  c->r[1]=c->r[1]+0x00000010u; // 800F5B9C
  return; // 800F5BA0
}

// fn_800F5BA4
void f_800F5BA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5BA4
  c->r[0]=c->lr; // 800F5BA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5BAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5BB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5BB4
  c->r[30]=c->r[3]|c->r[3]; // 800F5BB8
  c->r[31]=c->r[4]|c->r[4]; // 800F5BBC
  cmps(c,0,(int32_t)c->r[3],0); // 800F5BC0
  if (crb(c,2)) { goto L_800F5C04; } // 800F5BC4
  c->r[4]=0u+0x80460000u; // 800F5BC8
  c->r[0]=c->r[4]+0x00002FECu; // 800F5BCC
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5BD0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5BD4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5BD8
  c->ctr=c->r[12]; // 800F5BDC
  if (true) { c->lr=0x800F5BE4u; dispatch(c,c->ctr); } // 800F5BE0
  c->r[3]=c->r[30]|c->r[30]; // 800F5BE4
  c->r[4]=0u+0x00000000u; // 800F5BE8
  c->lr=0x800F5BF0u; f_8010539C(c); // 800F5BEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5BF0
  cmps(c,0,(int32_t)c->r[0],0); // 800F5BF4
  if (!crb(c,1)) { goto L_800F5C04; } // 800F5BF8
  c->r[3]=c->r[30]|c->r[30]; // 800F5BFC
  c->lr=0x800F5C04u; f_80047B20(c); // 800F5C00
L_800F5C04:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5C08
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5C0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5C10
  c->lr=c->r[0]; // 800F5C14
  c->r[1]=c->r[1]+0x00000010u; // 800F5C18
  return; // 800F5C1C
}

// fn_800F5C20
void f_800F5C20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5C20
  c->r[0]=c->lr; // 800F5C24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5C2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5C30
  c->r[30]=c->r[3]|c->r[3]; // 800F5C34
  c->r[31]=c->r[4]|c->r[4]; // 800F5C38
  cmps(c,0,(int32_t)c->r[3],0); // 800F5C3C
  if (crb(c,2)) { goto L_800F5C80; } // 800F5C40
  c->r[4]=0u+0x80460000u; // 800F5C44
  c->r[0]=c->r[4]+0x00003034u; // 800F5C48
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5C4C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5C50
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5C54
  c->ctr=c->r[12]; // 800F5C58
  if (true) { c->lr=0x800F5C60u; dispatch(c,c->ctr); } // 800F5C5C
  c->r[3]=c->r[30]|c->r[30]; // 800F5C60
  c->r[4]=0u+0x00000000u; // 800F5C64
  c->lr=0x800F5C6Cu; f_8010539C(c); // 800F5C68
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5C6C
  cmps(c,0,(int32_t)c->r[0],0); // 800F5C70
  if (!crb(c,1)) { goto L_800F5C80; } // 800F5C74
  c->r[3]=c->r[30]|c->r[30]; // 800F5C78
  c->lr=0x800F5C80u; f_80047B20(c); // 800F5C7C
L_800F5C80:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5C80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5C84
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5C88
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5C8C
  c->lr=c->r[0]; // 800F5C90
  c->r[1]=c->r[1]+0x00000010u; // 800F5C94
  return; // 800F5C98
}

// fn_800F5C9C
void f_800F5C9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5C9C
  c->r[0]=c->lr; // 800F5CA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5CA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5CA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5CAC
  c->r[30]=c->r[3]|c->r[3]; // 800F5CB0
  c->r[31]=c->r[4]|c->r[4]; // 800F5CB4
  cmps(c,0,(int32_t)c->r[3],0); // 800F5CB8
  if (crb(c,2)) { goto L_800F5CFC; } // 800F5CBC
  c->r[4]=0u+0x80460000u; // 800F5CC0
  c->r[0]=c->r[4]+0x0000307Cu; // 800F5CC4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5CC8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5CCC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5CD0
  c->ctr=c->r[12]; // 800F5CD4
  if (true) { c->lr=0x800F5CDCu; dispatch(c,c->ctr); } // 800F5CD8
  c->r[3]=c->r[30]|c->r[30]; // 800F5CDC
  c->r[4]=0u+0x00000000u; // 800F5CE0
  c->lr=0x800F5CE8u; f_8010539C(c); // 800F5CE4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5CE8
  cmps(c,0,(int32_t)c->r[0],0); // 800F5CEC
  if (!crb(c,1)) { goto L_800F5CFC; } // 800F5CF0
  c->r[3]=c->r[30]|c->r[30]; // 800F5CF4
  c->lr=0x800F5CFCu; f_80047B20(c); // 800F5CF8
L_800F5CFC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5CFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5D00
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5D04
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5D08
  c->lr=c->r[0]; // 800F5D0C
  c->r[1]=c->r[1]+0x00000010u; // 800F5D10
  return; // 800F5D14
}

// fn_800F5D18
void f_800F5D18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5D18
  c->r[0]=c->lr; // 800F5D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5D24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5D28
  c->r[30]=c->r[3]|c->r[3]; // 800F5D2C
  c->r[31]=c->r[4]|c->r[4]; // 800F5D30
  cmps(c,0,(int32_t)c->r[3],0); // 800F5D34
  if (crb(c,2)) { goto L_800F5D78; } // 800F5D38
  c->r[4]=0u+0x80460000u; // 800F5D3C
  c->r[0]=c->r[4]+0x000030C8u; // 800F5D40
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5D44
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5D48
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5D4C
  c->ctr=c->r[12]; // 800F5D50
  if (true) { c->lr=0x800F5D58u; dispatch(c,c->ctr); } // 800F5D54
  c->r[3]=c->r[30]|c->r[30]; // 800F5D58
  c->r[4]=0u+0x00000000u; // 800F5D5C
  c->lr=0x800F5D64u; f_8010539C(c); // 800F5D60
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5D64
  cmps(c,0,(int32_t)c->r[0],0); // 800F5D68
  if (!crb(c,1)) { goto L_800F5D78; } // 800F5D6C
  c->r[3]=c->r[30]|c->r[30]; // 800F5D70
  c->lr=0x800F5D78u; f_80047B20(c); // 800F5D74
L_800F5D78:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5D78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5D7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5D80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5D84
  c->lr=c->r[0]; // 800F5D88
  c->r[1]=c->r[1]+0x00000010u; // 800F5D8C
  return; // 800F5D90
}

// fn_800F5D94
void f_800F5D94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5D94
  c->r[0]=c->lr; // 800F5D98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5D9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5DA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5DA4
  c->r[30]=c->r[3]|c->r[3]; // 800F5DA8
  c->r[31]=c->r[4]|c->r[4]; // 800F5DAC
  cmps(c,0,(int32_t)c->r[3],0); // 800F5DB0
  if (crb(c,2)) { goto L_800F5DF4; } // 800F5DB4
  c->r[4]=0u+0x80460000u; // 800F5DB8
  c->r[0]=c->r[4]+0x00003110u; // 800F5DBC
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5DC0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5DC4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5DC8
  c->ctr=c->r[12]; // 800F5DCC
  if (true) { c->lr=0x800F5DD4u; dispatch(c,c->ctr); } // 800F5DD0
  c->r[3]=c->r[30]|c->r[30]; // 800F5DD4
  c->r[4]=0u+0x00000000u; // 800F5DD8
  c->lr=0x800F5DE0u; f_8010539C(c); // 800F5DDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5DE0
  cmps(c,0,(int32_t)c->r[0],0); // 800F5DE4
  if (!crb(c,1)) { goto L_800F5DF4; } // 800F5DE8
  c->r[3]=c->r[30]|c->r[30]; // 800F5DEC
  c->lr=0x800F5DF4u; f_80047B20(c); // 800F5DF0
L_800F5DF4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5DF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5DF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5DFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5E00
  c->lr=c->r[0]; // 800F5E04
  c->r[1]=c->r[1]+0x00000010u; // 800F5E08
  return; // 800F5E0C
}

// fn_800F5E10
void f_800F5E10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5E10
  c->r[0]=c->lr; // 800F5E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5E1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5E20
  c->r[30]=c->r[3]|c->r[3]; // 800F5E24
  c->r[31]=c->r[4]|c->r[4]; // 800F5E28
  cmps(c,0,(int32_t)c->r[3],0); // 800F5E2C
  if (crb(c,2)) { goto L_800F5E70; } // 800F5E30
  c->r[4]=0u+0x80460000u; // 800F5E34
  c->r[0]=c->r[4]+0x0000315Cu; // 800F5E38
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5E3C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5E40
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5E44
  c->ctr=c->r[12]; // 800F5E48
  if (true) { c->lr=0x800F5E50u; dispatch(c,c->ctr); } // 800F5E4C
  c->r[3]=c->r[30]|c->r[30]; // 800F5E50
  c->r[4]=0u+0x00000000u; // 800F5E54
  c->lr=0x800F5E5Cu; f_8010539C(c); // 800F5E58
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5E5C
  cmps(c,0,(int32_t)c->r[0],0); // 800F5E60
  if (!crb(c,1)) { goto L_800F5E70; } // 800F5E64
  c->r[3]=c->r[30]|c->r[30]; // 800F5E68
  c->lr=0x800F5E70u; f_80047B20(c); // 800F5E6C
L_800F5E70:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5E70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5E74
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5E78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5E7C
  c->lr=c->r[0]; // 800F5E80
  c->r[1]=c->r[1]+0x00000010u; // 800F5E84
  return; // 800F5E88
}

// fn_800F5E8C
void f_800F5E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5E8C
  c->r[0]=c->lr; // 800F5E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5E94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5E98
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5E9C
  c->r[30]=c->r[3]|c->r[3]; // 800F5EA0
  c->r[31]=c->r[4]|c->r[4]; // 800F5EA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F5EA8
  if (crb(c,2)) { goto L_800F5EEC; } // 800F5EAC
  c->r[4]=0u+0x80460000u; // 800F5EB0
  c->r[0]=c->r[4]+0x000031A8u; // 800F5EB4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5EB8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5EBC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5EC0
  c->ctr=c->r[12]; // 800F5EC4
  if (true) { c->lr=0x800F5ECCu; dispatch(c,c->ctr); } // 800F5EC8
  c->r[3]=c->r[30]|c->r[30]; // 800F5ECC
  c->r[4]=0u+0x00000000u; // 800F5ED0
  c->lr=0x800F5ED8u; f_8010539C(c); // 800F5ED4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5ED8
  cmps(c,0,(int32_t)c->r[0],0); // 800F5EDC
  if (!crb(c,1)) { goto L_800F5EEC; } // 800F5EE0
  c->r[3]=c->r[30]|c->r[30]; // 800F5EE4
  c->lr=0x800F5EECu; f_80047B20(c); // 800F5EE8
L_800F5EEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5EF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5EF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5EF8
  c->lr=c->r[0]; // 800F5EFC
  c->r[1]=c->r[1]+0x00000010u; // 800F5F00
  return; // 800F5F04
}

// fn_800F5F08
void f_800F5F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5F08
  c->r[0]=c->lr; // 800F5F0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5F10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5F14
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5F18
  c->r[30]=c->r[3]|c->r[3]; // 800F5F1C
  c->r[31]=c->r[4]|c->r[4]; // 800F5F20
  cmps(c,0,(int32_t)c->r[3],0); // 800F5F24
  if (crb(c,2)) { goto L_800F5F68; } // 800F5F28
  c->r[4]=0u+0x80460000u; // 800F5F2C
  c->r[0]=c->r[4]+0x000031F4u; // 800F5F30
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5F34
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5F38
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5F3C
  c->ctr=c->r[12]; // 800F5F40
  if (true) { c->lr=0x800F5F48u; dispatch(c,c->ctr); } // 800F5F44
  c->r[3]=c->r[30]|c->r[30]; // 800F5F48
  c->r[4]=0u+0x00000000u; // 800F5F4C
  c->lr=0x800F5F54u; f_8010539C(c); // 800F5F50
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5F54
  cmps(c,0,(int32_t)c->r[0],0); // 800F5F58
  if (!crb(c,1)) { goto L_800F5F68; } // 800F5F5C
  c->r[3]=c->r[30]|c->r[30]; // 800F5F60
  c->lr=0x800F5F68u; f_80047B20(c); // 800F5F64
L_800F5F68:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5F6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5F70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5F74
  c->lr=c->r[0]; // 800F5F78
  c->r[1]=c->r[1]+0x00000010u; // 800F5F7C
  return; // 800F5F80
}

// fn_800F5F84
void f_800F5F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5F84
  c->r[0]=c->lr; // 800F5F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5F8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5F90
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5F94
  c->r[30]=c->r[3]|c->r[3]; // 800F5F98
  c->r[31]=c->r[4]|c->r[4]; // 800F5F9C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5FA0
  if (crb(c,2)) { goto L_800F5FE4; } // 800F5FA4
  c->r[4]=0u+0x80460000u; // 800F5FA8
  c->r[0]=c->r[4]+0x00003244u; // 800F5FAC
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F5FB0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F5FB4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F5FB8
  c->ctr=c->r[12]; // 800F5FBC
  if (true) { c->lr=0x800F5FC4u; dispatch(c,c->ctr); } // 800F5FC0
  c->r[3]=c->r[30]|c->r[30]; // 800F5FC4
  c->r[4]=0u+0x00000000u; // 800F5FC8
  c->lr=0x800F5FD0u; f_8010539C(c); // 800F5FCC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F5FD0
  cmps(c,0,(int32_t)c->r[0],0); // 800F5FD4
  if (!crb(c,1)) { goto L_800F5FE4; } // 800F5FD8
  c->r[3]=c->r[30]|c->r[30]; // 800F5FDC
  c->lr=0x800F5FE4u; f_80047B20(c); // 800F5FE0
L_800F5FE4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F5FE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5FE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5FEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5FF0
  c->lr=c->r[0]; // 800F5FF4
  c->r[1]=c->r[1]+0x00000010u; // 800F5FF8
  return; // 800F5FFC
}

// fn_800F6000
void f_800F6000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6000
  c->r[0]=c->lr; // 800F6004
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F600C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6010
  c->r[30]=c->r[3]|c->r[3]; // 800F6014
  c->r[31]=c->r[4]|c->r[4]; // 800F6018
  cmps(c,0,(int32_t)c->r[3],0); // 800F601C
  if (crb(c,2)) { goto L_800F6060; } // 800F6020
  c->r[4]=0u+0x80460000u; // 800F6024
  c->r[0]=c->r[4]+0x00003290u; // 800F6028
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F602C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6030
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6034
  c->ctr=c->r[12]; // 800F6038
  if (true) { c->lr=0x800F6040u; dispatch(c,c->ctr); } // 800F603C
  c->r[3]=c->r[30]|c->r[30]; // 800F6040
  c->r[4]=0u+0x00000000u; // 800F6044
  c->lr=0x800F604Cu; f_8010539C(c); // 800F6048
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F604C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6050
  if (!crb(c,1)) { goto L_800F6060; } // 800F6054
  c->r[3]=c->r[30]|c->r[30]; // 800F6058
  c->lr=0x800F6060u; f_80047B20(c); // 800F605C
L_800F6060:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6064
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6068
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F606C
  c->lr=c->r[0]; // 800F6070
  c->r[1]=c->r[1]+0x00000010u; // 800F6074
  return; // 800F6078
}

// fn_800F607C
void f_800F607C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F607C
  c->r[0]=c->lr; // 800F6080
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6088
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F608C
  c->r[30]=c->r[3]|c->r[3]; // 800F6090
  c->r[31]=c->r[4]|c->r[4]; // 800F6094
  cmps(c,0,(int32_t)c->r[3],0); // 800F6098
  if (crb(c,2)) { goto L_800F60DC; } // 800F609C
  c->r[4]=0u+0x80460000u; // 800F60A0
  c->r[0]=c->r[4]+0x000032E0u; // 800F60A4
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F60A8
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F60AC
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F60B0
  c->ctr=c->r[12]; // 800F60B4
  if (true) { c->lr=0x800F60BCu; dispatch(c,c->ctr); } // 800F60B8
  c->r[3]=c->r[30]|c->r[30]; // 800F60BC
  c->r[4]=0u+0x00000000u; // 800F60C0
  c->lr=0x800F60C8u; f_8010539C(c); // 800F60C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F60C8
  cmps(c,0,(int32_t)c->r[0],0); // 800F60CC
  if (!crb(c,1)) { goto L_800F60DC; } // 800F60D0
  c->r[3]=c->r[30]|c->r[30]; // 800F60D4
  c->lr=0x800F60DCu; f_80047B20(c); // 800F60D8
L_800F60DC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F60DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F60E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F60E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F60E8
  c->lr=c->r[0]; // 800F60EC
  c->r[1]=c->r[1]+0x00000010u; // 800F60F0
  return; // 800F60F4
}

// fn_800F60F8
void f_800F60F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F60F8
  c->r[0]=c->lr; // 800F60FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6100
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6104
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6108
  c->r[30]=c->r[3]|c->r[3]; // 800F610C
  c->r[31]=c->r[4]|c->r[4]; // 800F6110
  cmps(c,0,(int32_t)c->r[3],0); // 800F6114
  if (crb(c,2)) { goto L_800F6158; } // 800F6118
  c->r[4]=0u+0x80460000u; // 800F611C
  c->r[0]=c->r[4]+0x0000332Cu; // 800F6120
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6124
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6128
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F612C
  c->ctr=c->r[12]; // 800F6130
  if (true) { c->lr=0x800F6138u; dispatch(c,c->ctr); } // 800F6134
  c->r[3]=c->r[30]|c->r[30]; // 800F6138
  c->r[4]=0u+0x00000000u; // 800F613C
  c->lr=0x800F6144u; f_8010539C(c); // 800F6140
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6144
  cmps(c,0,(int32_t)c->r[0],0); // 800F6148
  if (!crb(c,1)) { goto L_800F6158; } // 800F614C
  c->r[3]=c->r[30]|c->r[30]; // 800F6150
  c->lr=0x800F6158u; f_80047B20(c); // 800F6154
L_800F6158:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6158
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F615C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6160
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6164
  c->lr=c->r[0]; // 800F6168
  c->r[1]=c->r[1]+0x00000010u; // 800F616C
  return; // 800F6170
}

// fn_800F6174
void f_800F6174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6174
  c->r[0]=c->lr; // 800F6178
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F617C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6180
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6184
  c->r[30]=c->r[3]|c->r[3]; // 800F6188
  c->r[31]=c->r[4]|c->r[4]; // 800F618C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6190
  if (crb(c,2)) { goto L_800F61D4; } // 800F6194
  c->r[4]=0u+0x80460000u; // 800F6198
  c->r[0]=c->r[4]+0x00003378u; // 800F619C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F61A0
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F61A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F61A8
  c->ctr=c->r[12]; // 800F61AC
  if (true) { c->lr=0x800F61B4u; dispatch(c,c->ctr); } // 800F61B0
  c->r[3]=c->r[30]|c->r[30]; // 800F61B4
  c->r[4]=0u+0x00000000u; // 800F61B8
  c->lr=0x800F61C0u; f_8010539C(c); // 800F61BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F61C0
  cmps(c,0,(int32_t)c->r[0],0); // 800F61C4
  if (!crb(c,1)) { goto L_800F61D4; } // 800F61C8
  c->r[3]=c->r[30]|c->r[30]; // 800F61CC
  c->lr=0x800F61D4u; f_80047B20(c); // 800F61D0
L_800F61D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F61D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F61D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F61DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F61E0
  c->lr=c->r[0]; // 800F61E4
  c->r[1]=c->r[1]+0x00000010u; // 800F61E8
  return; // 800F61EC
}

// fn_800F61F0
void f_800F61F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F61F0
  c->r[0]=c->lr; // 800F61F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F61F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F61FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6200
  c->r[30]=c->r[3]|c->r[3]; // 800F6204
  c->r[31]=c->r[4]|c->r[4]; // 800F6208
  cmps(c,0,(int32_t)c->r[3],0); // 800F620C
  if (crb(c,2)) { goto L_800F6250; } // 800F6210
  c->r[4]=0u+0x80460000u; // 800F6214
  c->r[0]=c->r[4]+0x000033C4u; // 800F6218
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F621C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6220
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6224
  c->ctr=c->r[12]; // 800F6228
  if (true) { c->lr=0x800F6230u; dispatch(c,c->ctr); } // 800F622C
  c->r[3]=c->r[30]|c->r[30]; // 800F6230
  c->r[4]=0u+0x00000000u; // 800F6234
  c->lr=0x800F623Cu; f_8010539C(c); // 800F6238
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F623C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6240
  if (!crb(c,1)) { goto L_800F6250; } // 800F6244
  c->r[3]=c->r[30]|c->r[30]; // 800F6248
  c->lr=0x800F6250u; f_80047B20(c); // 800F624C
L_800F6250:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6250
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6254
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6258
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F625C
  c->lr=c->r[0]; // 800F6260
  c->r[1]=c->r[1]+0x00000010u; // 800F6264
  return; // 800F6268
}

// fn_800F626C
void f_800F626C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F626C
  c->r[0]=c->lr; // 800F6270
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6274
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6278
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F627C
  c->r[30]=c->r[3]|c->r[3]; // 800F6280
  c->r[31]=c->r[4]|c->r[4]; // 800F6284
  cmps(c,0,(int32_t)c->r[3],0); // 800F6288
  if (crb(c,2)) { goto L_800F62CC; } // 800F628C
  c->r[4]=0u+0x80460000u; // 800F6290
  c->r[0]=c->r[4]+0x00003414u; // 800F6294
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6298
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F629C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F62A0
  c->ctr=c->r[12]; // 800F62A4
  if (true) { c->lr=0x800F62ACu; dispatch(c,c->ctr); } // 800F62A8
  c->r[3]=c->r[30]|c->r[30]; // 800F62AC
  c->r[4]=0u+0x00000000u; // 800F62B0
  c->lr=0x800F62B8u; f_8010539C(c); // 800F62B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F62B8
  cmps(c,0,(int32_t)c->r[0],0); // 800F62BC
  if (!crb(c,1)) { goto L_800F62CC; } // 800F62C0
  c->r[3]=c->r[30]|c->r[30]; // 800F62C4
  c->lr=0x800F62CCu; f_80047B20(c); // 800F62C8
L_800F62CC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F62CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F62D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F62D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F62D8
  c->lr=c->r[0]; // 800F62DC
  c->r[1]=c->r[1]+0x00000010u; // 800F62E0
  return; // 800F62E4
}

// fn_800F62E8
void f_800F62E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F62E8
  c->r[0]=c->lr; // 800F62EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F62F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F62F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F62F8
  c->r[30]=c->r[3]|c->r[3]; // 800F62FC
  c->r[31]=c->r[4]|c->r[4]; // 800F6300
  cmps(c,0,(int32_t)c->r[3],0); // 800F6304
  if (crb(c,2)) { goto L_800F6348; } // 800F6308
  c->r[4]=0u+0x80460000u; // 800F630C
  c->r[0]=c->r[4]+0x00003464u; // 800F6310
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6314
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6318
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F631C
  c->ctr=c->r[12]; // 800F6320
  if (true) { c->lr=0x800F6328u; dispatch(c,c->ctr); } // 800F6324
  c->r[3]=c->r[30]|c->r[30]; // 800F6328
  c->r[4]=0u+0x00000000u; // 800F632C
  c->lr=0x800F6334u; f_8010539C(c); // 800F6330
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6334
  cmps(c,0,(int32_t)c->r[0],0); // 800F6338
  if (!crb(c,1)) { goto L_800F6348; } // 800F633C
  c->r[3]=c->r[30]|c->r[30]; // 800F6340
  c->lr=0x800F6348u; f_80047B20(c); // 800F6344
L_800F6348:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F634C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6350
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6354
  c->lr=c->r[0]; // 800F6358
  c->r[1]=c->r[1]+0x00000010u; // 800F635C
  return; // 800F6360
}

// fn_800F6364
void f_800F6364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6364
  c->r[0]=c->lr; // 800F6368
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F636C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6370
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6374
  c->r[30]=c->r[3]|c->r[3]; // 800F6378
  c->r[31]=c->r[4]|c->r[4]; // 800F637C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6380
  if (crb(c,2)) { goto L_800F63C4; } // 800F6384
  c->r[4]=0u+0x80460000u; // 800F6388
  c->r[0]=c->r[4]+0x000034B4u; // 800F638C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6390
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6394
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6398
  c->ctr=c->r[12]; // 800F639C
  if (true) { c->lr=0x800F63A4u; dispatch(c,c->ctr); } // 800F63A0
  c->r[3]=c->r[30]|c->r[30]; // 800F63A4
  c->r[4]=0u+0x00000000u; // 800F63A8
  c->lr=0x800F63B0u; f_8010539C(c); // 800F63AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F63B0
  cmps(c,0,(int32_t)c->r[0],0); // 800F63B4
  if (!crb(c,1)) { goto L_800F63C4; } // 800F63B8
  c->r[3]=c->r[30]|c->r[30]; // 800F63BC
  c->lr=0x800F63C4u; f_80047B20(c); // 800F63C0
L_800F63C4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F63C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F63C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F63CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F63D0
  c->lr=c->r[0]; // 800F63D4
  c->r[1]=c->r[1]+0x00000010u; // 800F63D8
  return; // 800F63DC
}

// fn_800F63E0
void f_800F63E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F63E0
  c->r[0]=c->lr; // 800F63E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F63E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F63EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F63F0
  c->r[30]=c->r[3]|c->r[3]; // 800F63F4
  c->r[31]=c->r[4]|c->r[4]; // 800F63F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F63FC
  if (crb(c,2)) { goto L_800F6440; } // 800F6400
  c->r[4]=0u+0x80460000u; // 800F6404
  c->r[0]=c->r[4]+0x00003500u; // 800F6408
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F640C
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6410
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6414
  c->ctr=c->r[12]; // 800F6418
  if (true) { c->lr=0x800F6420u; dispatch(c,c->ctr); } // 800F641C
  c->r[3]=c->r[30]|c->r[30]; // 800F6420
  c->r[4]=0u+0x00000000u; // 800F6424
  c->lr=0x800F642Cu; f_8010539C(c); // 800F6428
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F642C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6430
  if (!crb(c,1)) { goto L_800F6440; } // 800F6434
  c->r[3]=c->r[30]|c->r[30]; // 800F6438
  c->lr=0x800F6440u; f_80047B20(c); // 800F643C
L_800F6440:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6444
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6448
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F644C
  c->lr=c->r[0]; // 800F6450
  c->r[1]=c->r[1]+0x00000010u; // 800F6454
  return; // 800F6458
}

// fn_800F645C
void f_800F645C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F645C
  c->r[0]=c->lr; // 800F6460
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6468
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F646C
  c->r[30]=c->r[3]|c->r[3]; // 800F6470
  c->r[31]=c->r[4]|c->r[4]; // 800F6474
  cmps(c,0,(int32_t)c->r[3],0); // 800F6478
  if (crb(c,2)) { goto L_800F64BC; } // 800F647C
  c->r[4]=0u+0x80460000u; // 800F6480
  c->r[0]=c->r[4]+0x0000354Cu; // 800F6484
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6488
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F648C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6490
  c->ctr=c->r[12]; // 800F6494
  if (true) { c->lr=0x800F649Cu; dispatch(c,c->ctr); } // 800F6498
  c->r[3]=c->r[30]|c->r[30]; // 800F649C
  c->r[4]=0u+0x00000000u; // 800F64A0
  c->lr=0x800F64A8u; f_8010539C(c); // 800F64A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F64A8
  cmps(c,0,(int32_t)c->r[0],0); // 800F64AC
  if (!crb(c,1)) { goto L_800F64BC; } // 800F64B0
  c->r[3]=c->r[30]|c->r[30]; // 800F64B4
  c->lr=0x800F64BCu; f_80047B20(c); // 800F64B8
L_800F64BC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F64BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F64C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F64C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F64C8
  c->lr=c->r[0]; // 800F64CC
  c->r[1]=c->r[1]+0x00000010u; // 800F64D0
  return; // 800F64D4
}

// fn_800F64D8
void f_800F64D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F64D8
  c->r[0]=c->lr; // 800F64DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F64E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F64E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F64E8
  c->r[30]=c->r[3]|c->r[3]; // 800F64EC
  c->r[31]=c->r[4]|c->r[4]; // 800F64F0
  cmps(c,0,(int32_t)c->r[3],0); // 800F64F4
  if (crb(c,2)) { goto L_800F6538; } // 800F64F8
  c->r[4]=0u+0x80460000u; // 800F64FC
  c->r[0]=c->r[4]+0x00003598u; // 800F6500
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6504
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6508
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F650C
  c->ctr=c->r[12]; // 800F6510
  if (true) { c->lr=0x800F6518u; dispatch(c,c->ctr); } // 800F6514
  c->r[3]=c->r[30]|c->r[30]; // 800F6518
  c->r[4]=0u+0x00000000u; // 800F651C
  c->lr=0x800F6524u; f_8010539C(c); // 800F6520
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6524
  cmps(c,0,(int32_t)c->r[0],0); // 800F6528
  if (!crb(c,1)) { goto L_800F6538; } // 800F652C
  c->r[3]=c->r[30]|c->r[30]; // 800F6530
  c->lr=0x800F6538u; f_80047B20(c); // 800F6534
L_800F6538:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F653C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6540
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6544
  c->lr=c->r[0]; // 800F6548
  c->r[1]=c->r[1]+0x00000010u; // 800F654C
  return; // 800F6550
}

// fn_800F6554
void f_800F6554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6554
  c->r[0]=c->lr; // 800F6558
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F655C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6560
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6564
  c->r[30]=c->r[3]|c->r[3]; // 800F6568
  c->r[31]=c->r[4]|c->r[4]; // 800F656C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6570
  if (crb(c,2)) { goto L_800F65B4; } // 800F6574
  c->r[4]=0u+0x80460000u; // 800F6578
  c->r[0]=c->r[4]+0x00003634u; // 800F657C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6580
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6584
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6588
  c->ctr=c->r[12]; // 800F658C
  if (true) { c->lr=0x800F6594u; dispatch(c,c->ctr); } // 800F6590
  c->r[3]=c->r[30]|c->r[30]; // 800F6594
  c->r[4]=0u+0x00000000u; // 800F6598
  c->lr=0x800F65A0u; f_8010539C(c); // 800F659C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F65A0
  cmps(c,0,(int32_t)c->r[0],0); // 800F65A4
  if (!crb(c,1)) { goto L_800F65B4; } // 800F65A8
  c->r[3]=c->r[30]|c->r[30]; // 800F65AC
  c->lr=0x800F65B4u; f_80047B20(c); // 800F65B0
L_800F65B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F65B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F65B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F65BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F65C0
  c->lr=c->r[0]; // 800F65C4
  c->r[1]=c->r[1]+0x00000010u; // 800F65C8
  return; // 800F65CC
}

// fn_800F65D0
void f_800F65D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F65D0
  c->r[0]=c->lr; // 800F65D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F65D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F65DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F65E0
  c->r[30]=c->r[3]|c->r[3]; // 800F65E4
  c->r[31]=c->r[4]|c->r[4]; // 800F65E8
  cmps(c,0,(int32_t)c->r[3],0); // 800F65EC
  if (crb(c,2)) { goto L_800F6630; } // 800F65F0
  c->r[4]=0u+0x80460000u; // 800F65F4
  c->r[0]=c->r[4]+0x0000367Cu; // 800F65F8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F65FC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6600
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6604
  c->ctr=c->r[12]; // 800F6608
  if (true) { c->lr=0x800F6610u; dispatch(c,c->ctr); } // 800F660C
  c->r[3]=c->r[30]|c->r[30]; // 800F6610
  c->r[4]=0u+0x00000000u; // 800F6614
  c->lr=0x800F661Cu; f_8010539C(c); // 800F6618
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F661C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6620
  if (!crb(c,1)) { goto L_800F6630; } // 800F6624
  c->r[3]=c->r[30]|c->r[30]; // 800F6628
  c->lr=0x800F6630u; f_80047B20(c); // 800F662C
L_800F6630:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6634
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6638
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F663C
  c->lr=c->r[0]; // 800F6640
  c->r[1]=c->r[1]+0x00000010u; // 800F6644
  return; // 800F6648
}

// fn_800F664C
void f_800F664C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F664C
  c->r[0]=c->lr; // 800F6650
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6654
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6658
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F665C
  c->r[30]=c->r[3]|c->r[3]; // 800F6660
  c->r[31]=c->r[4]|c->r[4]; // 800F6664
  cmps(c,0,(int32_t)c->r[3],0); // 800F6668
  if (crb(c,2)) { goto L_800F66AC; } // 800F666C
  c->r[4]=0u+0x80460000u; // 800F6670
  c->r[0]=c->r[4]+0x000036CCu; // 800F6674
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6678
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F667C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6680
  c->ctr=c->r[12]; // 800F6684
  if (true) { c->lr=0x800F668Cu; dispatch(c,c->ctr); } // 800F6688
  c->r[3]=c->r[30]|c->r[30]; // 800F668C
  c->r[4]=0u+0x00000000u; // 800F6690
  c->lr=0x800F6698u; f_8010539C(c); // 800F6694
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6698
  cmps(c,0,(int32_t)c->r[0],0); // 800F669C
  if (!crb(c,1)) { goto L_800F66AC; } // 800F66A0
  c->r[3]=c->r[30]|c->r[30]; // 800F66A4
  c->lr=0x800F66ACu; f_80047B20(c); // 800F66A8
L_800F66AC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F66AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F66B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F66B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F66B8
  c->lr=c->r[0]; // 800F66BC
  c->r[1]=c->r[1]+0x00000010u; // 800F66C0
  return; // 800F66C4
}

// fn_800F66C8
void f_800F66C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F66C8
  c->r[0]=c->lr; // 800F66CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F66D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F66D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F66D8
  c->r[30]=c->r[3]|c->r[3]; // 800F66DC
  c->r[31]=c->r[4]|c->r[4]; // 800F66E0
  cmps(c,0,(int32_t)c->r[3],0); // 800F66E4
  if (crb(c,2)) { goto L_800F6728; } // 800F66E8
  c->r[4]=0u+0x80460000u; // 800F66EC
  c->r[0]=c->r[4]+0x0000371Cu; // 800F66F0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F66F4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F66F8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F66FC
  c->ctr=c->r[12]; // 800F6700
  if (true) { c->lr=0x800F6708u; dispatch(c,c->ctr); } // 800F6704
  c->r[3]=c->r[30]|c->r[30]; // 800F6708
  c->r[4]=0u+0x00000000u; // 800F670C
  c->lr=0x800F6714u; f_8010539C(c); // 800F6710
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6714
  cmps(c,0,(int32_t)c->r[0],0); // 800F6718
  if (!crb(c,1)) { goto L_800F6728; } // 800F671C
  c->r[3]=c->r[30]|c->r[30]; // 800F6720
  c->lr=0x800F6728u; f_80047B20(c); // 800F6724
L_800F6728:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F672C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6730
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6734
  c->lr=c->r[0]; // 800F6738
  c->r[1]=c->r[1]+0x00000010u; // 800F673C
  return; // 800F6740
}

// fn_800F6744
void f_800F6744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6744
  c->r[0]=c->lr; // 800F6748
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F674C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6750
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6754
  c->r[30]=c->r[3]|c->r[3]; // 800F6758
  c->r[31]=c->r[4]|c->r[4]; // 800F675C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6760
  if (crb(c,2)) { goto L_800F67A4; } // 800F6764
  c->r[4]=0u+0x80460000u; // 800F6768
  c->r[0]=c->r[4]+0x000035E4u; // 800F676C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6770
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6774
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6778
  c->ctr=c->r[12]; // 800F677C
  if (true) { c->lr=0x800F6784u; dispatch(c,c->ctr); } // 800F6780
  c->r[3]=c->r[30]|c->r[30]; // 800F6784
  c->r[4]=0u+0x00000000u; // 800F6788
  c->lr=0x800F6790u; f_8010539C(c); // 800F678C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6790
  cmps(c,0,(int32_t)c->r[0],0); // 800F6794
  if (!crb(c,1)) { goto L_800F67A4; } // 800F6798
  c->r[3]=c->r[30]|c->r[30]; // 800F679C
  c->lr=0x800F67A4u; f_80047B20(c); // 800F67A0
L_800F67A4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F67A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F67A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F67AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F67B0
  c->lr=c->r[0]; // 800F67B4
  c->r[1]=c->r[1]+0x00000010u; // 800F67B8
  return; // 800F67BC
}

// fn_800F67C0
void f_800F67C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F67C0
  c->r[0]=c->lr; // 800F67C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F67C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F67CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F67D0
  c->r[30]=c->r[3]|c->r[3]; // 800F67D4
  c->r[31]=c->r[4]|c->r[4]; // 800F67D8
  cmps(c,0,(int32_t)c->r[3],0); // 800F67DC
  if (crb(c,2)) { goto L_800F6820; } // 800F67E0
  c->r[4]=0u+0x80460000u; // 800F67E4
  c->r[0]=c->r[4]+0x0000376Cu; // 800F67E8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F67EC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F67F0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F67F4
  c->ctr=c->r[12]; // 800F67F8
  if (true) { c->lr=0x800F6800u; dispatch(c,c->ctr); } // 800F67FC
  c->r[3]=c->r[30]|c->r[30]; // 800F6800
  c->r[4]=0u+0x00000000u; // 800F6804
  c->lr=0x800F680Cu; f_8010539C(c); // 800F6808
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F680C
  cmps(c,0,(int32_t)c->r[0],0); // 800F6810
  if (!crb(c,1)) { goto L_800F6820; } // 800F6814
  c->r[3]=c->r[30]|c->r[30]; // 800F6818
  c->lr=0x800F6820u; f_80047B20(c); // 800F681C
L_800F6820:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6824
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6828
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F682C
  c->lr=c->r[0]; // 800F6830
  c->r[1]=c->r[1]+0x00000010u; // 800F6834
  return; // 800F6838
}

// fn_800F683C
void f_800F683C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F683C
  c->r[0]=c->lr; // 800F6840
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6844
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6848
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F684C
  c->r[30]=c->r[3]|c->r[3]; // 800F6850
  c->r[31]=c->r[4]|c->r[4]; // 800F6854
  cmps(c,0,(int32_t)c->r[3],0); // 800F6858
  if (crb(c,2)) { goto L_800F689C; } // 800F685C
  c->r[4]=0u+0x80460000u; // 800F6860
  c->r[0]=c->r[4]+0x000037B8u; // 800F6864
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6868
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F686C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6870
  c->ctr=c->r[12]; // 800F6874
  if (true) { c->lr=0x800F687Cu; dispatch(c,c->ctr); } // 800F6878
  c->r[3]=c->r[30]|c->r[30]; // 800F687C
  c->r[4]=0u+0x00000000u; // 800F6880
  c->lr=0x800F6888u; f_8010539C(c); // 800F6884
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6888
  cmps(c,0,(int32_t)c->r[0],0); // 800F688C
  if (!crb(c,1)) { goto L_800F689C; } // 800F6890
  c->r[3]=c->r[30]|c->r[30]; // 800F6894
  c->lr=0x800F689Cu; f_80047B20(c); // 800F6898
L_800F689C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F689C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F68A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F68A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F68A8
  c->lr=c->r[0]; // 800F68AC
  c->r[1]=c->r[1]+0x00000010u; // 800F68B0
  return; // 800F68B4
}

// fn_800F68B8
void f_800F68B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F68B8
  c->r[0]=c->lr; // 800F68BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F68C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F68C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F68C8
  c->r[30]=c->r[3]|c->r[3]; // 800F68CC
  c->r[31]=c->r[4]|c->r[4]; // 800F68D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F68D4
  if (crb(c,2)) { goto L_800F6918; } // 800F68D8
  c->r[4]=0u+0x80460000u; // 800F68DC
  c->r[0]=c->r[4]+0x00003804u; // 800F68E0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F68E4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F68E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F68EC
  c->ctr=c->r[12]; // 800F68F0
  if (true) { c->lr=0x800F68F8u; dispatch(c,c->ctr); } // 800F68F4
  c->r[3]=c->r[30]|c->r[30]; // 800F68F8
  c->r[4]=0u+0x00000000u; // 800F68FC
  c->lr=0x800F6904u; f_8010539C(c); // 800F6900
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6904
  cmps(c,0,(int32_t)c->r[0],0); // 800F6908
  if (!crb(c,1)) { goto L_800F6918; } // 800F690C
  c->r[3]=c->r[30]|c->r[30]; // 800F6910
  c->lr=0x800F6918u; f_80047B20(c); // 800F6914
L_800F6918:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6918
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F691C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6920
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6924
  c->lr=c->r[0]; // 800F6928
  c->r[1]=c->r[1]+0x00000010u; // 800F692C
  return; // 800F6930
}

// fn_800F6934
void f_800F6934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6934
  c->r[0]=c->lr; // 800F6938
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F693C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6940
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6944
  c->r[30]=c->r[3]|c->r[3]; // 800F6948
  c->r[31]=c->r[4]|c->r[4]; // 800F694C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6950
  if (crb(c,2)) { goto L_800F6994; } // 800F6954
  c->r[4]=0u+0x80460000u; // 800F6958
  c->r[0]=c->r[4]+0x0000384Cu; // 800F695C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6960
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6964
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6968
  c->ctr=c->r[12]; // 800F696C
  if (true) { c->lr=0x800F6974u; dispatch(c,c->ctr); } // 800F6970
  c->r[3]=c->r[30]|c->r[30]; // 800F6974
  c->r[4]=0u+0x00000000u; // 800F6978
  c->lr=0x800F6980u; f_8010539C(c); // 800F697C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6980
  cmps(c,0,(int32_t)c->r[0],0); // 800F6984
  if (!crb(c,1)) { goto L_800F6994; } // 800F6988
  c->r[3]=c->r[30]|c->r[30]; // 800F698C
  c->lr=0x800F6994u; f_80047B20(c); // 800F6990
L_800F6994:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6994
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6998
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F699C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F69A0
  c->lr=c->r[0]; // 800F69A4
  c->r[1]=c->r[1]+0x00000010u; // 800F69A8
  return; // 800F69AC
}

// fn_800F69B0
void f_800F69B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F69B0
  c->r[0]=c->lr; // 800F69B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F69B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F69BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F69C0
  c->r[30]=c->r[3]|c->r[3]; // 800F69C4
  c->r[31]=c->r[4]|c->r[4]; // 800F69C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F69CC
  if (crb(c,2)) { goto L_800F6A10; } // 800F69D0
  c->r[4]=0u+0x80460000u; // 800F69D4
  c->r[0]=c->r[4]+0x00003898u; // 800F69D8
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F69DC
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F69E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F69E4
  c->ctr=c->r[12]; // 800F69E8
  if (true) { c->lr=0x800F69F0u; dispatch(c,c->ctr); } // 800F69EC
  c->r[3]=c->r[30]|c->r[30]; // 800F69F0
  c->r[4]=0u+0x00000000u; // 800F69F4
  c->lr=0x800F69FCu; f_8010539C(c); // 800F69F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F69FC
  cmps(c,0,(int32_t)c->r[0],0); // 800F6A00
  if (!crb(c,1)) { goto L_800F6A10; } // 800F6A04
  c->r[3]=c->r[30]|c->r[30]; // 800F6A08
  c->lr=0x800F6A10u; f_80047B20(c); // 800F6A0C
L_800F6A10:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6A10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6A14
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6A18
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6A1C
  c->lr=c->r[0]; // 800F6A20
  c->r[1]=c->r[1]+0x00000010u; // 800F6A24
  return; // 800F6A28
}

// fn_800F6A2C
void f_800F6A2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6A2C
  c->r[0]=c->lr; // 800F6A30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6A34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6A38
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6A3C
  c->r[30]=c->r[3]|c->r[3]; // 800F6A40
  c->r[31]=c->r[4]|c->r[4]; // 800F6A44
  cmps(c,0,(int32_t)c->r[3],0); // 800F6A48
  if (crb(c,2)) { goto L_800F6A8C; } // 800F6A4C
  c->r[4]=0u+0x80460000u; // 800F6A50
  c->r[0]=c->r[4]+0x000038E4u; // 800F6A54
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6A58
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6A5C
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6A60
  c->ctr=c->r[12]; // 800F6A64
  if (true) { c->lr=0x800F6A6Cu; dispatch(c,c->ctr); } // 800F6A68
  c->r[3]=c->r[30]|c->r[30]; // 800F6A6C
  c->r[4]=0u+0x00000000u; // 800F6A70
  c->lr=0x800F6A78u; f_8010539C(c); // 800F6A74
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6A78
  cmps(c,0,(int32_t)c->r[0],0); // 800F6A7C
  if (!crb(c,1)) { goto L_800F6A8C; } // 800F6A80
  c->r[3]=c->r[30]|c->r[30]; // 800F6A84
  c->lr=0x800F6A8Cu; f_80047B20(c); // 800F6A88
L_800F6A8C:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6A8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6A90
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6A94
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6A98
  c->lr=c->r[0]; // 800F6A9C
  c->r[1]=c->r[1]+0x00000010u; // 800F6AA0
  return; // 800F6AA4
}

// fn_800F6AA8
void f_800F6AA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6AA8
  c->r[0]=c->lr; // 800F6AAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6AB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6AB4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6AB8
  c->r[30]=c->r[3]|c->r[3]; // 800F6ABC
  c->r[31]=c->r[4]|c->r[4]; // 800F6AC0
  cmps(c,0,(int32_t)c->r[3],0); // 800F6AC4
  if (crb(c,2)) { goto L_800F6B08; } // 800F6AC8
  c->r[4]=0u+0x80460000u; // 800F6ACC
  c->r[0]=c->r[4]+0x0000392Cu; // 800F6AD0
  W32(c->r[3]+0x00000030u,c->r[0]); // 800F6AD4
  c->r[12]=R32(c->r[3]+0x00000030u); // 800F6AD8
  c->r[12]=R32(c->r[12]+0x00000014u); // 800F6ADC
  c->ctr=c->r[12]; // 800F6AE0
  if (true) { c->lr=0x800F6AE8u; dispatch(c,c->ctr); } // 800F6AE4
  c->r[3]=c->r[30]|c->r[30]; // 800F6AE8
  c->r[4]=0u+0x00000000u; // 800F6AEC
  c->lr=0x800F6AF4u; f_8010539C(c); // 800F6AF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 800F6AF4
  cmps(c,0,(int32_t)c->r[0],0); // 800F6AF8
  if (!crb(c,1)) { goto L_800F6B08; } // 800F6AFC
  c->r[3]=c->r[30]|c->r[30]; // 800F6B00
  c->lr=0x800F6B08u; f_80047B20(c); // 800F6B04
L_800F6B08:;
  c->r[3]=c->r[30]|c->r[30]; // 800F6B08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6B0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6B10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6B14
  c->lr=c->r[0]; // 800F6B18
  c->r[1]=c->r[1]+0x00000010u; // 800F6B1C
  return; // 800F6B20
}

// fn_800F6B24
void f_800F6B24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6B24
  c->r[0]=c->lr; // 800F6B28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6B30
  c->r[31]=c->r[3]|c->r[3]; // 800F6B34
  c->lr=0x800F6B3Cu; f_80105360(c); // 800F6B38
  c->r[3]=0u+0x80460000u; // 800F6B3C
  c->r[0]=c->r[3]+0x000024B0u; // 800F6B40
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6B44
  c->r[0]=0u+0x00000000u; // 800F6B48
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6B4C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6B50
  c->r[3]=c->r[31]|c->r[31]; // 800F6B54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6B58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6B5C
  c->lr=c->r[0]; // 800F6B60
  c->r[1]=c->r[1]+0x00000010u; // 800F6B64
  return; // 800F6B68
}

// fn_800F6B6C
void f_800F6B6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6B6C
  c->r[0]=c->lr; // 800F6B70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6B74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6B78
  c->r[31]=c->r[3]|c->r[3]; // 800F6B7C
  c->lr=0x800F6B84u; f_80105360(c); // 800F6B80
  c->r[3]=0u+0x80460000u; // 800F6B84
  c->r[0]=c->r[3]+0x00002500u; // 800F6B88
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6B8C
  c->r[0]=0u+0x00000000u; // 800F6B90
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6B94
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6B98
  c->r[3]=c->r[31]|c->r[31]; // 800F6B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6BA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6BA4
  c->lr=c->r[0]; // 800F6BA8
  c->r[1]=c->r[1]+0x00000010u; // 800F6BAC
  return; // 800F6BB0
}

// fn_800F6BB4
void f_800F6BB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6BB4
  c->r[0]=c->lr; // 800F6BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6BBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6BC0
  c->r[31]=c->r[3]|c->r[3]; // 800F6BC4
  c->lr=0x800F6BCCu; f_80105360(c); // 800F6BC8
  c->r[3]=0u+0x80460000u; // 800F6BCC
  c->r[0]=c->r[3]+0x00002550u; // 800F6BD0
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6BD4
  c->r[0]=0u+0x00000000u; // 800F6BD8
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6BDC
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6BE0
  c->r[3]=c->r[31]|c->r[31]; // 800F6BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6BE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6BEC
  c->lr=c->r[0]; // 800F6BF0
  c->r[1]=c->r[1]+0x00000010u; // 800F6BF4
  return; // 800F6BF8
}

// fn_800F6BFC
void f_800F6BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6BFC
  c->r[0]=c->lr; // 800F6C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6C04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6C08
  c->r[31]=c->r[3]|c->r[3]; // 800F6C0C
  c->lr=0x800F6C14u; f_80105360(c); // 800F6C10
  c->r[3]=0u+0x80460000u; // 800F6C14
  c->r[0]=c->r[3]+0x0000259Cu; // 800F6C18
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6C1C
  c->r[0]=0u+0x00000000u; // 800F6C20
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6C24
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6C28
  c->r[3]=c->r[31]|c->r[31]; // 800F6C2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6C30
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6C34
  c->lr=c->r[0]; // 800F6C38
  c->r[1]=c->r[1]+0x00000010u; // 800F6C3C
  return; // 800F6C40
}

// fn_800F6C44
void f_800F6C44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6C44
  c->r[0]=c->lr; // 800F6C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6C50
  c->r[31]=c->r[3]|c->r[3]; // 800F6C54
  c->lr=0x800F6C5Cu; f_80105360(c); // 800F6C58
  c->r[3]=0u+0x80460000u; // 800F6C5C
  c->r[0]=c->r[3]+0x000025E8u; // 800F6C60
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6C64
  c->r[0]=0u+0x00000000u; // 800F6C68
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6C6C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6C70
  c->r[3]=c->r[31]|c->r[31]; // 800F6C74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6C78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6C7C
  c->lr=c->r[0]; // 800F6C80
  c->r[1]=c->r[1]+0x00000010u; // 800F6C84
  return; // 800F6C88
}

// fn_800F6C8C
void f_800F6C8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6C8C
  c->r[0]=c->lr; // 800F6C90
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6C94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6C98
  c->r[31]=c->r[3]|c->r[3]; // 800F6C9C
  c->lr=0x800F6CA4u; f_80105360(c); // 800F6CA0
  c->r[3]=0u+0x80460000u; // 800F6CA4
  c->r[0]=c->r[3]+0x00002634u; // 800F6CA8
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6CAC
  c->r[0]=0u+0x00000000u; // 800F6CB0
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6CB4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6CB8
  c->r[3]=c->r[31]|c->r[31]; // 800F6CBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6CC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6CC4
  c->lr=c->r[0]; // 800F6CC8
  c->r[1]=c->r[1]+0x00000010u; // 800F6CCC
  return; // 800F6CD0
}

// fn_800F6CD4
void f_800F6CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6CD4
  c->r[0]=c->lr; // 800F6CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6CE0
  c->r[31]=c->r[3]|c->r[3]; // 800F6CE4
  c->lr=0x800F6CECu; f_80105360(c); // 800F6CE8
  c->r[3]=0u+0x80460000u; // 800F6CEC
  c->r[0]=c->r[3]+0x00002680u; // 800F6CF0
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6CF4
  c->r[0]=0u+0x00000000u; // 800F6CF8
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6CFC
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6D00
  c->r[3]=c->r[31]|c->r[31]; // 800F6D04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6D08
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6D0C
  c->lr=c->r[0]; // 800F6D10
  c->r[1]=c->r[1]+0x00000010u; // 800F6D14
  return; // 800F6D18
}

// fn_800F6D1C
void f_800F6D1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6D1C
  c->r[0]=c->lr; // 800F6D20
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6D24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6D28
  c->r[31]=c->r[3]|c->r[3]; // 800F6D2C
  c->lr=0x800F6D34u; f_80105360(c); // 800F6D30
  c->r[3]=0u+0x80460000u; // 800F6D34
  c->r[0]=c->r[3]+0x00002764u; // 800F6D38
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6D3C
  c->r[0]=0u+0x00000000u; // 800F6D40
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6D44
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6D48
  c->r[3]=c->r[31]|c->r[31]; // 800F6D4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6D50
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6D54
  c->lr=c->r[0]; // 800F6D58
  c->r[1]=c->r[1]+0x00000010u; // 800F6D5C
  return; // 800F6D60
}

// fn_800F6D64
void f_800F6D64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6D64
  c->r[0]=c->lr; // 800F6D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6D70
  c->r[31]=c->r[3]|c->r[3]; // 800F6D74
  c->lr=0x800F6D7Cu; f_80105360(c); // 800F6D78
  c->r[3]=0u+0x80460000u; // 800F6D7C
  c->r[0]=c->r[3]+0x000027B0u; // 800F6D80
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6D84
  c->r[0]=0u+0x00000000u; // 800F6D88
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6D8C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6D90
  c->r[3]=c->r[31]|c->r[31]; // 800F6D94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6D9C
  c->lr=c->r[0]; // 800F6DA0
  c->r[1]=c->r[1]+0x00000010u; // 800F6DA4
  return; // 800F6DA8
}

// fn_800F6DAC
void f_800F6DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6DAC
  c->r[0]=c->lr; // 800F6DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6DB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6DB8
  c->r[31]=c->r[3]|c->r[3]; // 800F6DBC
  c->lr=0x800F6DC4u; f_80105360(c); // 800F6DC0
  c->r[3]=0u+0x80460000u; // 800F6DC4
  c->r[0]=c->r[3]+0x000027FCu; // 800F6DC8
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6DCC
  c->r[0]=0u+0x00000000u; // 800F6DD0
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6DD4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6DD8
  c->r[3]=c->r[31]|c->r[31]; // 800F6DDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6DE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6DE4
  c->lr=c->r[0]; // 800F6DE8
  c->r[1]=c->r[1]+0x00000010u; // 800F6DEC
  return; // 800F6DF0
}

// fn_800F6DF4
void f_800F6DF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6DF4
  c->r[0]=c->lr; // 800F6DF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6DFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6E00
  c->r[31]=c->r[3]|c->r[3]; // 800F6E04
  c->lr=0x800F6E0Cu; f_80105360(c); // 800F6E08
  c->r[3]=0u+0x80460000u; // 800F6E0C
  c->r[0]=c->r[3]+0x00002718u; // 800F6E10
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6E14
  c->r[0]=0u+0x00000000u; // 800F6E18
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6E1C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6E20
  c->r[3]=c->r[31]|c->r[31]; // 800F6E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6E28
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6E2C
  c->lr=c->r[0]; // 800F6E30
  c->r[1]=c->r[1]+0x00000010u; // 800F6E34
  return; // 800F6E38
}

// fn_800F6E3C
void f_800F6E3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6E3C
  c->r[0]=c->lr; // 800F6E40
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6E44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6E48
  c->r[31]=c->r[3]|c->r[3]; // 800F6E4C
  c->lr=0x800F6E54u; f_80105360(c); // 800F6E50
  c->r[3]=0u+0x80460000u; // 800F6E54
  c->r[0]=c->r[3]+0x00002848u; // 800F6E58
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6E5C
  c->r[0]=0u+0x00000000u; // 800F6E60
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6E64
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6E68
  c->r[3]=c->r[31]|c->r[31]; // 800F6E6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6E70
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6E74
  c->lr=c->r[0]; // 800F6E78
  c->r[1]=c->r[1]+0x00000010u; // 800F6E7C
  return; // 800F6E80
}

// fn_800F6E84
void f_800F6E84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6E84
  c->r[0]=c->lr; // 800F6E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6E8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6E90
  c->r[31]=c->r[3]|c->r[3]; // 800F6E94
  c->lr=0x800F6E9Cu; f_80105360(c); // 800F6E98
  c->r[3]=0u+0x80460000u; // 800F6E9C
  c->r[0]=c->r[3]+0x00002894u; // 800F6EA0
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6EA4
  c->r[0]=0u+0x00000000u; // 800F6EA8
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6EAC
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6EB0
  c->r[3]=c->r[31]|c->r[31]; // 800F6EB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6EB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6EBC
  c->lr=c->r[0]; // 800F6EC0
  c->r[1]=c->r[1]+0x00000010u; // 800F6EC4
  return; // 800F6EC8
}

// fn_800F6ECC
void f_800F6ECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6ECC
  c->r[0]=c->lr; // 800F6ED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6ED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6ED8
  c->r[31]=c->r[3]|c->r[3]; // 800F6EDC
  c->lr=0x800F6EE4u; f_80105360(c); // 800F6EE0
  c->r[3]=0u+0x80460000u; // 800F6EE4
  c->r[0]=c->r[3]+0x000028E0u; // 800F6EE8
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6EEC
  c->r[0]=0u+0x00000000u; // 800F6EF0
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6EF4
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6EF8
  c->r[3]=c->r[31]|c->r[31]; // 800F6EFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6F00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6F04
  c->lr=c->r[0]; // 800F6F08
  c->r[1]=c->r[1]+0x00000010u; // 800F6F0C
  return; // 800F6F10
}

// fn_800F6F14
void f_800F6F14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6F14
  c->r[0]=c->lr; // 800F6F18
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6F1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6F20
  c->r[31]=c->r[3]|c->r[3]; // 800F6F24
  c->lr=0x800F6F2Cu; f_80105360(c); // 800F6F28
  c->r[3]=0u+0x80460000u; // 800F6F2C
  c->r[0]=c->r[3]+0x0000292Cu; // 800F6F30
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6F34
  c->r[0]=0u+0x00000000u; // 800F6F38
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6F3C
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6F40
  c->r[3]=c->r[31]|c->r[31]; // 800F6F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6F48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6F4C
  c->lr=c->r[0]; // 800F6F50
  c->r[1]=c->r[1]+0x00000010u; // 800F6F54
  return; // 800F6F58
}

// fn_800F6F5C
void f_800F6F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6F5C
  c->r[0]=c->lr; // 800F6F60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6F64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6F68
  c->r[31]=c->r[3]|c->r[3]; // 800F6F6C
  c->lr=0x800F6F74u; f_80105360(c); // 800F6F70
  c->r[3]=0u+0x80460000u; // 800F6F74
  c->r[0]=c->r[3]+0x00002978u; // 800F6F78
  W32(c->r[31]+0x00000030u,c->r[0]); // 800F6F7C
  c->r[0]=0u+0x00000000u; // 800F6F80
  W32(c->r[31]+0x00000034u,c->r[0]); // 800F6F84
  W32(c->r[31]+0x00000038u,c->r[0]); // 800F6F88
  c->r[3]=c->r[31]|c->r[31]; // 800F6F8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6F90
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6F94
  c->lr=c->r[0]; // 800F6F98
  c->r[1]=c->r[1]+0x00000010u; // 800F6F9C
  return; // 800F6FA0
}

