#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8012AD28
void f_8012AD28(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AD28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AD2C
  c->r[3]=c->r[3]+c->r[0]; // 8012AD30
  c->r[3]=c->r[3]+0x00000088u; // 8012AD34
  f_8011F048(c); return; // 8012AD38
}

// fn_8012AD3C
void f_8012AD3C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AD3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AD40
  c->r[3]=c->r[3]+c->r[0]; // 8012AD44
  c->r[3]=c->r[3]+0x00000088u; // 8012AD48
  f_8011F070(c); return; // 8012AD4C
}

// fn_8012AD50
void f_8012AD50(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AD50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AD54
  c->r[3]=c->r[3]+c->r[0]; // 8012AD58
  c->r[3]=c->r[3]+0x00000088u; // 8012AD5C
  f_8011F060(c); return; // 8012AD60
}

// fn_8012AD64
void f_8012AD64(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AD64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AD68
  c->r[3]=c->r[3]+c->r[0]; // 8012AD6C
  c->r[3]=c->r[3]+0x00000088u; // 8012AD70
  f_8011F068(c); return; // 8012AD74
}

// fn_8012AD78
void f_8012AD78(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AD78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012AD7C
  c->r[3]=c->r[3]+c->r[0]; // 8012AD80
  c->r[3]=c->r[3]+0x00000150u; // 8012AD84
  f_8011F0D8(c); return; // 8012AD88
}

// fn_8012AD8C
void f_8012AD8C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AD8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012AD90
  c->r[3]=c->r[3]+c->r[0]; // 8012AD94
  c->r[3]=c->r[3]+0x00000150u; // 8012AD98
  c->r[4]=c->r[5]|c->r[5]; // 8012AD9C
  f_8011F0C4(c); return; // 8012ADA0
}

// fn_8012ADA4
void f_8012ADA4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012ADA4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012ADA8
  c->r[3]=c->r[3]+c->r[0]; // 8012ADAC
  c->r[3]=c->r[3]+0x00000150u; // 8012ADB0
  f_8011F0C8(c); return; // 8012ADB4
}

// fn_8012ADB8
void f_8012ADB8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012ADB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012ADBC
  c->r[3]=c->r[3]+c->r[0]; // 8012ADC0
  c->r[3]=c->r[3]+0x00000150u; // 8012ADC4
  f_8011F0D0(c); return; // 8012ADC8
}

// fn_8012ADCC
void f_8012ADCC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 8012ADCC
  f_8011F09C(c); return; // 8012ADD0
}

// fn_8012ADD4
void f_8012ADD4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 8012ADD4
  f_8011F0BC(c); return; // 8012ADD8
}

// fn_8012ADDC
void f_8012ADDC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 8012ADDC
  f_8011F11C(c); return; // 8012ADE0
}

// fn_8012ADE4
void f_8012ADE4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 8012ADE4
  f_8011F10C(c); return; // 8012ADE8
}

// fn_8012ADEC
void f_8012ADEC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 8012ADEC
  f_8011F114(c); return; // 8012ADF0
}

// fn_8012ADF4
void f_8012ADF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000001C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012ADF4
  return; // 8012ADF8
}

// fn_8012ADFC
void f_8012ADFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000001CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012ADFC
  return; // 8012AE00
}

// fn_8012AE04
void f_8012AE04(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000001D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012AE04
  return; // 8012AE08
}

// fn_8012AE0C
void f_8012AE0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000001D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012AE0C
  return; // 8012AE10
}

// fn_8012AE14
void f_8012AE14(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE14
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AE18
  c->r[3]=c->r[3]+c->r[0]; // 8012AE1C
  c->r[3]=c->r[3]+0x00000088u; // 8012AE20
  f_8011F09C(c); return; // 8012AE24
}

// fn_8012AE28
void f_8012AE28(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AE2C
  c->r[3]=c->r[3]+c->r[0]; // 8012AE30
  c->r[3]=c->r[3]+0x00000088u; // 8012AE34
  f_8011F0BC(c); return; // 8012AE38
}

// fn_8012AE3C
void f_8012AE3C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AE40
  c->r[3]=c->r[3]+c->r[0]; // 8012AE44
  c->r[3]=c->r[3]+0x00000088u; // 8012AE48
  f_8011F0A4(c); return; // 8012AE4C
}

// fn_8012AE50
void f_8012AE50(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8012AE54
  c->r[3]=c->r[3]+c->r[0]; // 8012AE58
  c->r[3]=c->r[3]+0x00000088u; // 8012AE5C
  f_8011F0AC(c); return; // 8012AE60
}

// fn_8012AE64
void f_8012AE64(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE64
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012AE68
  c->r[3]=c->r[3]+c->r[0]; // 8012AE6C
  c->r[3]=c->r[3]+0x00000150u; // 8012AE70
  f_8011F11C(c); return; // 8012AE74
}

// fn_8012AE78
void f_8012AE78(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012AE7C
  c->r[3]=c->r[3]+c->r[0]; // 8012AE80
  c->r[3]=c->r[3]+0x00000150u; // 8012AE84
  f_8011F10C(c); return; // 8012AE88
}

// fn_8012AE8C
void f_8012AE8C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8012AE8C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8012AE90
  c->r[3]=c->r[3]+c->r[0]; // 8012AE94
  c->r[3]=c->r[3]+0x00000150u; // 8012AE98
  f_8011F114(c); return; // 8012AE9C
}

// fn_8012AEA0
void f_8012AEA0(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 8012AEA0
  c->r[3]=c->r[3]+0xFFFFE860u; // 8012AEA4
  return; // 8012AEA8
}

// fn_8012AEAC
void f_8012AEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012AEAC
  c->r[0]=c->lr; // 8012AEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012AEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012AEB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012AEBC
  c->r[30]=c->r[3]|c->r[3]; // 8012AEC0
  c->r[31]=c->r[4]|c->r[4]; // 8012AEC4
  cmps(c,0,(int32_t)c->r[3],0); // 8012AEC8
  if (crb(c,2)) { goto L_8012AF14; } // 8012AECC
  c->r[3]=c->r[3]+0x00000150u; // 8012AED0
  c->r[4]=0u+0x80120000u; // 8012AED4
  c->r[4]=c->r[4]+0xFFFFEE4Cu; // 8012AED8
  c->r[5]=0u+0x00000018u; // 8012AEDC
  c->r[6]=0u+0x00000005u; // 8012AEE0
  c->lr=0x8012AEE8u; f_802F08A8(c); // 8012AEE4
  c->r[3]=c->r[30]+0x00000070u; // 8012AEE8
  c->r[4]=0u+0xFFFFFFFFu; // 8012AEEC
  c->lr=0x8012AEF4u; f_8011EE4C(c); // 8012AEF0
  c->r[3]=c->r[30]|c->r[30]; // 8012AEF4
  c->r[4]=0u+0x00000000u; // 8012AEF8
  c->lr=0x8012AF00u; f_801197A8(c); // 8012AEFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012AF00
  cmps(c,0,(int32_t)c->r[0],0); // 8012AF04
  if (!crb(c,1)) { goto L_8012AF14; } // 8012AF08
  c->r[3]=c->r[30]|c->r[30]; // 8012AF0C
  c->lr=0x8012AF14u; f_80047B20(c); // 8012AF10
L_8012AF14:;
  c->r[3]=c->r[30]|c->r[30]; // 8012AF14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012AF18
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012AF1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012AF20
  c->lr=c->r[0]; // 8012AF24
  c->r[1]=c->r[1]+0x00000010u; // 8012AF28
  return; // 8012AF2C
}

// fn_8012AF30
void f_8012AF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012AF30
  c->r[0]=c->lr; // 8012AF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012AF38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012AF3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012AF40
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012AF44
  c->r[29]=c->r[3]|c->r[3]; // 8012AF48
  c->lr=0x8012AF50u; f_80056B5C(c); // 8012AF4C
  c->r[30]=c->r[3]|c->r[3]; // 8012AF50
  c->lr=0x8012AF58u; f_8005DEE8(c); // 8012AF54
  c->lr=0x8012AF5Cu; f_80056B54(c); // 8012AF58
  c->r[3]=0u+0x000001D8u; // 8012AF5C
  c->lr=0x8012AF64u; f_80047B64(c); // 8012AF60
  c->r[31]=c->r[3]|c->r[3]; // 8012AF64
  cmps(c,0,(int32_t)c->r[3],0); // 8012AF68
  if (crb(c,2)) { goto L_8012AF74; } // 8012AF6C
  c->lr=0x8012AF74u; f_8012AAF0(c); // 8012AF70
L_8012AF74:;
  c->r[3]=c->r[30]|c->r[30]; // 8012AF74
  c->lr=0x8012AF7Cu; f_80056B54(c); // 8012AF78
  c->r[3]=c->r[31]|c->r[31]; // 8012AF7C
  c->r[4]=0u+0x00000003u; // 8012AF80
  c->lr=0x8012AF88u; f_8011A278(c); // 8012AF84
  c->r[3]=c->r[29]|c->r[29]; // 8012AF88
  c->r[4]=c->r[31]|c->r[31]; // 8012AF8C
  c->lr=0x8012AF94u; f_8028CA70(c); // 8012AF90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012AF94
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012AF98
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012AF9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012AFA0
  c->lr=c->r[0]; // 8012AFA4
  c->r[1]=c->r[1]+0x00000020u; // 8012AFA8
  return; // 8012AFAC
}

// fn_8012AFB0
void f_8012AFB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012AFB0
  c->r[0]=c->lr; // 8012AFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012AFB8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012AFBC
  c->f[31]=c->f[1]; // 8012AFC0
  c->r[4]=0u+0x00000003u; // 8012AFC4
  c->lr=0x8012AFCCu; f_8011B718(c); // 8012AFC8
  cmps(c,0,(int32_t)c->r[3],0); // 8012AFCC
  if (crb(c,2)) { goto L_8012AFDC; } // 8012AFD0
  c->f[1]=c->f[31]; // 8012AFD4
  c->lr=0x8012AFDCu; f_8012ACD8(c); // 8012AFD8
L_8012AFDC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012AFDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012AFE0
  c->lr=c->r[0]; // 8012AFE4
  c->r[1]=c->r[1]+0x00000010u; // 8012AFE8
  return; // 8012AFEC
}

// fn_8012AFF0
void f_8012AFF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012AFF0
  c->r[0]=c->lr; // 8012AFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012AFF8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012AFFC
  c->f[31]=c->f[1]; // 8012B000
  c->r[4]=0u+0x00000003u; // 8012B004
  c->lr=0x8012B00Cu; f_8011B718(c); // 8012B008
  cmps(c,0,(int32_t)c->r[3],0); // 8012B00C
  if (crb(c,2)) { goto L_8012B01C; } // 8012B010
  c->f[1]=c->f[31]; // 8012B014
  c->lr=0x8012B01Cu; f_8012ACE0(c); // 8012B018
L_8012B01C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B01C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B020
  c->lr=c->r[0]; // 8012B024
  c->r[1]=c->r[1]+0x00000010u; // 8012B028
  return; // 8012B02C
}

// fn_8012B030
void f_8012B030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B030
  c->r[0]=c->lr; // 8012B034
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B038
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B03C
  c->f[31]=c->f[1]; // 8012B040
  c->r[4]=0u+0x00000003u; // 8012B044
  c->lr=0x8012B04Cu; f_8011B718(c); // 8012B048
  cmps(c,0,(int32_t)c->r[3],0); // 8012B04C
  if (crb(c,2)) { goto L_8012B05C; } // 8012B050
  c->f[1]=c->f[31]; // 8012B054
  c->lr=0x8012B05Cu; f_8012ACE8(c); // 8012B058
L_8012B05C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B05C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B060
  c->lr=c->r[0]; // 8012B064
  c->r[1]=c->r[1]+0x00000010u; // 8012B068
  return; // 8012B06C
}

// fn_8012B070
void f_8012B070(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B070
  c->r[0]=c->lr; // 8012B074
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012B07C
  c->r[31]=c->r[4]|c->r[4]; // 8012B080
  c->r[4]=0u+0x00000003u; // 8012B084
  c->lr=0x8012B08Cu; f_8011B718(c); // 8012B088
  cmps(c,0,(int32_t)c->r[3],0); // 8012B08C
  if (crb(c,2)) { goto L_8012B09C; } // 8012B090
  c->r[4]=c->r[31]|c->r[31]; // 8012B094
  c->lr=0x8012B09Cu; f_8012ACF0(c); // 8012B098
L_8012B09C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012B09C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B0A0
  c->lr=c->r[0]; // 8012B0A4
  c->r[1]=c->r[1]+0x00000010u; // 8012B0A8
  return; // 8012B0AC
}

// fn_8012B0B0
void f_8012B0B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B0B0
  c->r[0]=c->lr; // 8012B0B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B0B8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B0BC
  c->f[31]=c->f[1]; // 8012B0C0
  c->r[4]=0u+0x00000003u; // 8012B0C4
  c->lr=0x8012B0CCu; f_8011B718(c); // 8012B0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8012B0CC
  if (crb(c,2)) { goto L_8012B0DC; } // 8012B0D0
  c->f[1]=c->f[31]; // 8012B0D4
  c->lr=0x8012B0DCu; f_8012ACF8(c); // 8012B0D8
L_8012B0DC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B0DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B0E0
  c->lr=c->r[0]; // 8012B0E4
  c->r[1]=c->r[1]+0x00000010u; // 8012B0E8
  return; // 8012B0EC
}

// fn_8012B0F0
void f_8012B0F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B0F0
  c->r[0]=c->lr; // 8012B0F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B0F8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B0FC
  c->f[31]=c->f[1]; // 8012B100
  c->r[4]=0u+0x00000003u; // 8012B104
  c->lr=0x8012B10Cu; f_8011B718(c); // 8012B108
  cmps(c,0,(int32_t)c->r[3],0); // 8012B10C
  if (crb(c,2)) { goto L_8012B11C; } // 8012B110
  c->f[1]=c->f[31]; // 8012B114
  c->lr=0x8012B11Cu; f_8012AD00(c); // 8012B118
L_8012B11C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B11C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B120
  c->lr=c->r[0]; // 8012B124
  c->r[1]=c->r[1]+0x00000010u; // 8012B128
  return; // 8012B12C
}

// fn_8012B130
void f_8012B130(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B130
  c->r[0]=c->lr; // 8012B134
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B138
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B13C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B140
  c->r[31]=c->r[4]|c->r[4]; // 8012B144
  c->f[31]=c->f[1]; // 8012B148
  c->r[4]=0u+0x00000003u; // 8012B14C
  c->lr=0x8012B154u; f_8011B718(c); // 8012B150
  cmps(c,0,(int32_t)c->r[3],0); // 8012B154
  if (crb(c,2)) { goto L_8012B168; } // 8012B158
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B15C
  c->f[1]=c->f[31]; // 8012B160
  c->lr=0x8012B168u; f_8012AD28(c); // 8012B164
L_8012B168:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B168
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B16C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B170
  c->lr=c->r[0]; // 8012B174
  c->r[1]=c->r[1]+0x00000020u; // 8012B178
  return; // 8012B17C
}

// fn_8012B180
void f_8012B180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B180
  c->r[0]=c->lr; // 8012B184
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B188
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B18C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B190
  c->r[31]=c->r[4]|c->r[4]; // 8012B194
  c->f[31]=c->f[1]; // 8012B198
  c->r[4]=0u+0x00000003u; // 8012B19C
  c->lr=0x8012B1A4u; f_8011B718(c); // 8012B1A0
  cmps(c,0,(int32_t)c->r[3],0); // 8012B1A4
  if (crb(c,2)) { goto L_8012B1B8; } // 8012B1A8
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B1AC
  c->f[1]=c->f[31]; // 8012B1B0
  c->lr=0x8012B1B8u; f_8012AD3C(c); // 8012B1B4
L_8012B1B8:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B1B8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B1BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B1C0
  c->lr=c->r[0]; // 8012B1C4
  c->r[1]=c->r[1]+0x00000020u; // 8012B1C8
  return; // 8012B1CC
}

// fn_8012B1D0
void f_8012B1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B1D0
  c->r[0]=c->lr; // 8012B1D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B1D8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B1DC
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B1E0
  c->r[31]=c->r[4]|c->r[4]; // 8012B1E4
  c->f[31]=c->f[1]; // 8012B1E8
  c->r[4]=0u+0x00000003u; // 8012B1EC
  c->lr=0x8012B1F4u; f_8011B718(c); // 8012B1F0
  cmps(c,0,(int32_t)c->r[3],0); // 8012B1F4
  if (crb(c,2)) { goto L_8012B208; } // 8012B1F8
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B1FC
  c->f[1]=c->f[31]; // 8012B200
  c->lr=0x8012B208u; f_8012AD50(c); // 8012B204
L_8012B208:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B208
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B20C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B210
  c->lr=c->r[0]; // 8012B214
  c->r[1]=c->r[1]+0x00000020u; // 8012B218
  return; // 8012B21C
}

// fn_8012B220
void f_8012B220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B220
  c->r[0]=c->lr; // 8012B224
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B228
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B22C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B230
  c->r[31]=c->r[4]|c->r[4]; // 8012B234
  c->f[31]=c->f[1]; // 8012B238
  c->r[4]=0u+0x00000003u; // 8012B23C
  c->lr=0x8012B244u; f_8011B718(c); // 8012B240
  cmps(c,0,(int32_t)c->r[3],0); // 8012B244
  if (crb(c,2)) { goto L_8012B258; } // 8012B248
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B24C
  c->f[1]=c->f[31]; // 8012B250
  c->lr=0x8012B258u; f_8012AD64(c); // 8012B254
L_8012B258:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B258
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B25C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B260
  c->lr=c->r[0]; // 8012B264
  c->r[1]=c->r[1]+0x00000020u; // 8012B268
  return; // 8012B26C
}

// fn_8012B270
void f_8012B270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B270
  c->r[0]=c->lr; // 8012B274
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B278
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B27C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B280
  c->r[31]=c->r[4]|c->r[4]; // 8012B284
  c->f[31]=c->f[1]; // 8012B288
  c->r[4]=0u+0x00000003u; // 8012B28C
  c->lr=0x8012B294u; f_8011B718(c); // 8012B290
  cmps(c,0,(int32_t)c->r[3],0); // 8012B294
  if (crb(c,2)) { goto L_8012B2A8; } // 8012B298
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B29C
  c->f[1]=c->f[31]; // 8012B2A0
  c->lr=0x8012B2A8u; f_8012AD78(c); // 8012B2A4
L_8012B2A8:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B2A8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B2AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B2B0
  c->lr=c->r[0]; // 8012B2B4
  c->r[1]=c->r[1]+0x00000020u; // 8012B2B8
  return; // 8012B2BC
}

// fn_8012B2C0
void f_8012B2C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B2C0
  c->r[0]=c->lr; // 8012B2C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B2C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012B2CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012B2D0
  c->r[30]=c->r[4]|c->r[4]; // 8012B2D4
  c->r[31]=c->r[5]|c->r[5]; // 8012B2D8
  c->r[4]=0u+0x00000003u; // 8012B2DC
  c->lr=0x8012B2E4u; f_8011B718(c); // 8012B2E0
  cmps(c,0,(int32_t)c->r[3],0); // 8012B2E4
  if (crb(c,2)) { goto L_8012B2F8; } // 8012B2E8
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 8012B2EC
  c->r[5]=c->r[31]|c->r[31]; // 8012B2F0
  c->lr=0x8012B2F8u; f_8012AD8C(c); // 8012B2F4
L_8012B2F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012B2F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012B2FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B300
  c->lr=c->r[0]; // 8012B304
  c->r[1]=c->r[1]+0x00000010u; // 8012B308
  return; // 8012B30C
}

// fn_8012B310
void f_8012B310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B310
  c->r[0]=c->lr; // 8012B314
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B318
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B31C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B320
  c->r[31]=c->r[4]|c->r[4]; // 8012B324
  c->f[31]=c->f[1]; // 8012B328
  c->r[4]=0u+0x00000003u; // 8012B32C
  c->lr=0x8012B334u; f_8011B718(c); // 8012B330
  cmps(c,0,(int32_t)c->r[3],0); // 8012B334
  if (crb(c,2)) { goto L_8012B348; } // 8012B338
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B33C
  c->f[1]=c->f[31]; // 8012B340
  c->lr=0x8012B348u; f_8012ADA4(c); // 8012B344
L_8012B348:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B348
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B34C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B350
  c->lr=c->r[0]; // 8012B354
  c->r[1]=c->r[1]+0x00000020u; // 8012B358
  return; // 8012B35C
}

// fn_8012B360
void f_8012B360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B360
  c->r[0]=c->lr; // 8012B364
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B368
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B36C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B370
  c->r[31]=c->r[4]|c->r[4]; // 8012B374
  c->f[31]=c->f[1]; // 8012B378
  c->r[4]=0u+0x00000003u; // 8012B37C
  c->lr=0x8012B384u; f_8011B718(c); // 8012B380
  cmps(c,0,(int32_t)c->r[3],0); // 8012B384
  if (crb(c,2)) { goto L_8012B398; } // 8012B388
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B38C
  c->f[1]=c->f[31]; // 8012B390
  c->lr=0x8012B398u; f_8012ADB8(c); // 8012B394
L_8012B398:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B398
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B39C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B3A0
  c->lr=c->r[0]; // 8012B3A4
  c->r[1]=c->r[1]+0x00000020u; // 8012B3A8
  return; // 8012B3AC
}

// fn_8012B3B0
void f_8012B3B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B3B0
  c->r[0]=c->lr; // 8012B3B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B3B8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B3BC
  c->f[31]=c->f[1]; // 8012B3C0
  c->r[4]=0u+0x00000003u; // 8012B3C4
  c->lr=0x8012B3CCu; f_8011B718(c); // 8012B3C8
  cmps(c,0,(int32_t)c->r[3],0); // 8012B3CC
  if (crb(c,2)) { goto L_8012B3DC; } // 8012B3D0
  c->f[1]=c->f[31]; // 8012B3D4
  c->lr=0x8012B3DCu; f_8012AD08(c); // 8012B3D8
L_8012B3DC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B3DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B3E0
  c->lr=c->r[0]; // 8012B3E4
  c->r[1]=c->r[1]+0x00000010u; // 8012B3E8
  return; // 8012B3EC
}

// fn_8012B3F0
void f_8012B3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B3F0
  c->r[0]=c->lr; // 8012B3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B3F8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B3FC
  c->f[31]=c->f[1]; // 8012B400
  c->r[4]=0u+0x00000003u; // 8012B404
  c->lr=0x8012B40Cu; f_8011B718(c); // 8012B408
  cmps(c,0,(int32_t)c->r[3],0); // 8012B40C
  if (crb(c,2)) { goto L_8012B41C; } // 8012B410
  c->f[1]=c->f[31]; // 8012B414
  c->lr=0x8012B41Cu; f_8012AD10(c); // 8012B418
L_8012B41C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B41C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B420
  c->lr=c->r[0]; // 8012B424
  c->r[1]=c->r[1]+0x00000010u; // 8012B428
  return; // 8012B42C
}

// fn_8012B430
void f_8012B430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B430
  c->r[0]=c->lr; // 8012B434
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B438
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B43C
  c->f[31]=c->f[1]; // 8012B440
  c->r[4]=0u+0x00000003u; // 8012B444
  c->lr=0x8012B44Cu; f_8011B718(c); // 8012B448
  cmps(c,0,(int32_t)c->r[3],0); // 8012B44C
  if (crb(c,2)) { goto L_8012B45C; } // 8012B450
  c->f[1]=c->f[31]; // 8012B454
  c->lr=0x8012B45Cu; f_8012AD18(c); // 8012B458
L_8012B45C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B45C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B460
  c->lr=c->r[0]; // 8012B464
  c->r[1]=c->r[1]+0x00000010u; // 8012B468
  return; // 8012B46C
}

// fn_8012B470
void f_8012B470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B470
  c->r[0]=c->lr; // 8012B474
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B478
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B47C
  c->f[31]=c->f[1]; // 8012B480
  c->r[4]=0u+0x00000003u; // 8012B484
  c->lr=0x8012B48Cu; f_8011B718(c); // 8012B488
  cmps(c,0,(int32_t)c->r[3],0); // 8012B48C
  if (crb(c,2)) { goto L_8012B49C; } // 8012B490
  c->f[1]=c->f[31]; // 8012B494
  c->lr=0x8012B49Cu; f_8012AD20(c); // 8012B498
L_8012B49C:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B49C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B4A0
  c->lr=c->r[0]; // 8012B4A4
  c->r[1]=c->r[1]+0x00000010u; // 8012B4A8
  return; // 8012B4AC
}

// fn_8012B4B0
void f_8012B4B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B4B0
  c->r[0]=c->lr; // 8012B4B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B4B8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B4BC
  c->f[31]=c->f[1]; // 8012B4C0
  c->lr=0x8012B4C8u; f_8011B41C(c); // 8012B4C4
  c->f[1]=c->f[31]; // 8012B4C8
  c->lr=0x8012B4D0u; f_8012AFB0(c); // 8012B4CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B4D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B4D4
  c->lr=c->r[0]; // 8012B4D8
  c->r[1]=c->r[1]+0x00000010u; // 8012B4DC
  return; // 8012B4E0
}

// fn_8012B4E4
void f_8012B4E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B4E4
  c->r[0]=c->lr; // 8012B4E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B4EC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B4F0
  c->f[31]=c->f[1]; // 8012B4F4
  c->lr=0x8012B4FCu; f_8011B41C(c); // 8012B4F8
  c->f[1]=c->f[31]; // 8012B4FC
  c->lr=0x8012B504u; f_8012AFF0(c); // 8012B500
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B504
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B508
  c->lr=c->r[0]; // 8012B50C
  c->r[1]=c->r[1]+0x00000010u; // 8012B510
  return; // 8012B514
}

// fn_8012B518
void f_8012B518(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B518
  c->r[0]=c->lr; // 8012B51C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B520
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B524
  c->f[31]=c->f[1]; // 8012B528
  c->lr=0x8012B530u; f_8011B41C(c); // 8012B52C
  c->f[1]=c->f[31]; // 8012B530
  c->lr=0x8012B538u; f_8012B030(c); // 8012B534
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B538
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B53C
  c->lr=c->r[0]; // 8012B540
  c->r[1]=c->r[1]+0x00000010u; // 8012B544
  return; // 8012B548
}

// fn_8012B54C
void f_8012B54C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B54C
  c->r[0]=c->lr; // 8012B550
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B554
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012B558
  c->r[31]=c->r[3]|c->r[3]; // 8012B55C
  c->lr=0x8012B564u; f_8011B41C(c); // 8012B560
  c->r[4]=c->r[31]|c->r[31]; // 8012B564
  c->lr=0x8012B56Cu; f_8012B070(c); // 8012B568
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012B56C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B570
  c->lr=c->r[0]; // 8012B574
  c->r[1]=c->r[1]+0x00000010u; // 8012B578
  return; // 8012B57C
}

// fn_8012B580
void f_8012B580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B580
  c->r[0]=c->lr; // 8012B584
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B588
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B58C
  c->f[31]=c->f[1]; // 8012B590
  c->lr=0x8012B598u; f_8011B41C(c); // 8012B594
  c->f[1]=c->f[31]; // 8012B598
  c->lr=0x8012B5A0u; f_8012B0B0(c); // 8012B59C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B5A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B5A4
  c->lr=c->r[0]; // 8012B5A8
  c->r[1]=c->r[1]+0x00000010u; // 8012B5AC
  return; // 8012B5B0
}

// fn_8012B5B4
void f_8012B5B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B5B4
  c->r[0]=c->lr; // 8012B5B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B5BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B5C0
  c->f[31]=c->f[1]; // 8012B5C4
  c->lr=0x8012B5CCu; f_8011B41C(c); // 8012B5C8
  c->f[1]=c->f[31]; // 8012B5CC
  c->lr=0x8012B5D4u; f_8012B0F0(c); // 8012B5D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B5D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B5D8
  c->lr=c->r[0]; // 8012B5DC
  c->r[1]=c->r[1]+0x00000010u; // 8012B5E0
  return; // 8012B5E4
}

// fn_8012B5E8
void f_8012B5E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B5E8
  c->r[0]=c->lr; // 8012B5EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B5F0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B5F4
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B5F8
  c->r[31]=c->r[3]|c->r[3]; // 8012B5FC
  c->f[31]=c->f[1]; // 8012B600
  c->lr=0x8012B608u; f_8011B41C(c); // 8012B604
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B608
  c->f[1]=c->f[31]; // 8012B60C
  c->lr=0x8012B614u; f_8012B130(c); // 8012B610
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B614
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B618
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B61C
  c->lr=c->r[0]; // 8012B620
  c->r[1]=c->r[1]+0x00000020u; // 8012B624
  return; // 8012B628
}

// fn_8012B62C
void f_8012B62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B62C
  c->r[0]=c->lr; // 8012B630
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B634
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B638
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B63C
  c->r[31]=c->r[3]|c->r[3]; // 8012B640
  c->f[31]=c->f[1]; // 8012B644
  c->lr=0x8012B64Cu; f_8011B41C(c); // 8012B648
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B64C
  c->f[1]=c->f[31]; // 8012B650
  c->lr=0x8012B658u; f_8012B180(c); // 8012B654
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B658
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B660
  c->lr=c->r[0]; // 8012B664
  c->r[1]=c->r[1]+0x00000020u; // 8012B668
  return; // 8012B66C
}

// fn_8012B670
void f_8012B670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B670
  c->r[0]=c->lr; // 8012B674
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B678
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B67C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B680
  c->r[31]=c->r[3]|c->r[3]; // 8012B684
  c->f[31]=c->f[1]; // 8012B688
  c->lr=0x8012B690u; f_8011B41C(c); // 8012B68C
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B690
  c->f[1]=c->f[31]; // 8012B694
  c->lr=0x8012B69Cu; f_8012B1D0(c); // 8012B698
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B69C
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B6A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B6A4
  c->lr=c->r[0]; // 8012B6A8
  c->r[1]=c->r[1]+0x00000020u; // 8012B6AC
  return; // 8012B6B0
}

// fn_8012B6B4
void f_8012B6B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B6B4
  c->r[0]=c->lr; // 8012B6B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B6BC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B6C0
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B6C4
  c->r[31]=c->r[3]|c->r[3]; // 8012B6C8
  c->f[31]=c->f[1]; // 8012B6CC
  c->lr=0x8012B6D4u; f_8011B41C(c); // 8012B6D0
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B6D4
  c->f[1]=c->f[31]; // 8012B6D8
  c->lr=0x8012B6E0u; f_8012B220(c); // 8012B6DC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B6E0
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B6E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B6E8
  c->lr=c->r[0]; // 8012B6EC
  c->r[1]=c->r[1]+0x00000020u; // 8012B6F0
  return; // 8012B6F4
}

// fn_8012B6F8
void f_8012B6F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B6F8
  c->r[0]=c->lr; // 8012B6FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B700
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B704
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B708
  c->r[31]=c->r[3]|c->r[3]; // 8012B70C
  c->f[31]=c->f[1]; // 8012B710
  c->lr=0x8012B718u; f_8011B41C(c); // 8012B714
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B718
  c->f[1]=c->f[31]; // 8012B71C
  c->lr=0x8012B724u; f_8012B270(c); // 8012B720
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B724
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B728
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B72C
  c->lr=c->r[0]; // 8012B730
  c->r[1]=c->r[1]+0x00000020u; // 8012B734
  return; // 8012B738
}

// fn_8012B73C
void f_8012B73C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B73C
  c->r[0]=c->lr; // 8012B740
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012B748
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012B74C
  c->r[30]=c->r[3]|c->r[3]; // 8012B750
  c->r[31]=c->r[4]|c->r[4]; // 8012B754
  c->lr=0x8012B75Cu; f_8011B41C(c); // 8012B758
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 8012B75C
  c->r[5]=c->r[31]|c->r[31]; // 8012B760
  c->lr=0x8012B768u; f_8012B2C0(c); // 8012B764
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012B768
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012B76C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B770
  c->lr=c->r[0]; // 8012B774
  c->r[1]=c->r[1]+0x00000010u; // 8012B778
  return; // 8012B77C
}

// fn_8012B780
void f_8012B780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B780
  c->r[0]=c->lr; // 8012B784
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B788
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B78C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B790
  c->r[31]=c->r[3]|c->r[3]; // 8012B794
  c->f[31]=c->f[1]; // 8012B798
  c->lr=0x8012B7A0u; f_8011B41C(c); // 8012B79C
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B7A0
  c->f[1]=c->f[31]; // 8012B7A4
  c->lr=0x8012B7ACu; f_8012B310(c); // 8012B7A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B7AC
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B7B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B7B4
  c->lr=c->r[0]; // 8012B7B8
  c->r[1]=c->r[1]+0x00000020u; // 8012B7BC
  return; // 8012B7C0
}

// fn_8012B7C4
void f_8012B7C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B7C4
  c->r[0]=c->lr; // 8012B7C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B7CC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012B7D0
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012B7D4
  c->r[31]=c->r[3]|c->r[3]; // 8012B7D8
  c->f[31]=c->f[1]; // 8012B7DC
  c->lr=0x8012B7E4u; f_8011B41C(c); // 8012B7E0
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8012B7E4
  c->f[1]=c->f[31]; // 8012B7E8
  c->lr=0x8012B7F0u; f_8012B360(c); // 8012B7EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012B7F0
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012B7F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012B7F8
  c->lr=c->r[0]; // 8012B7FC
  c->r[1]=c->r[1]+0x00000020u; // 8012B800
  return; // 8012B804
}

// fn_8012B808
void f_8012B808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B808
  c->r[0]=c->lr; // 8012B80C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B810
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B814
  c->f[31]=c->f[1]; // 8012B818
  c->lr=0x8012B820u; f_8011B41C(c); // 8012B81C
  c->f[1]=c->f[31]; // 8012B820
  c->lr=0x8012B828u; f_8012B3B0(c); // 8012B824
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B828
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B82C
  c->lr=c->r[0]; // 8012B830
  c->r[1]=c->r[1]+0x00000010u; // 8012B834
  return; // 8012B838
}

// fn_8012B83C
void f_8012B83C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B83C
  c->r[0]=c->lr; // 8012B840
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B844
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B848
  c->f[31]=c->f[1]; // 8012B84C
  c->lr=0x8012B854u; f_8011B41C(c); // 8012B850
  c->f[1]=c->f[31]; // 8012B854
  c->lr=0x8012B85Cu; f_8012B3F0(c); // 8012B858
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B85C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B860
  c->lr=c->r[0]; // 8012B864
  c->r[1]=c->r[1]+0x00000010u; // 8012B868
  return; // 8012B86C
}

// fn_8012B870
void f_8012B870(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B870
  c->r[0]=c->lr; // 8012B874
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B878
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B87C
  c->f[31]=c->f[1]; // 8012B880
  c->lr=0x8012B888u; f_8011B41C(c); // 8012B884
  c->f[1]=c->f[31]; // 8012B888
  c->lr=0x8012B890u; f_8012B430(c); // 8012B88C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B890
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B894
  c->lr=c->r[0]; // 8012B898
  c->r[1]=c->r[1]+0x00000010u; // 8012B89C
  return; // 8012B8A0
}

// fn_8012B8A4
void f_8012B8A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B8A4
  c->r[0]=c->lr; // 8012B8A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B8AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 8012B8B0
  c->f[31]=c->f[1]; // 8012B8B4
  c->lr=0x8012B8BCu; f_8011B41C(c); // 8012B8B8
  c->f[1]=c->f[31]; // 8012B8BC
  c->lr=0x8012B8C4u; f_8012B470(c); // 8012B8C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 8012B8C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B8C8
  c->lr=c->r[0]; // 8012B8CC
  c->r[1]=c->r[1]+0x00000010u; // 8012B8D0
  return; // 8012B8D4
}

// fn_8012B8D8
void f_8012B8D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B8D8
  c->r[0]=c->lr; // 8012B8DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012B8E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012B8E4
  c->r[31]=c->r[3]|c->r[3]; // 8012B8E8
  c->lr=0x8012B8F0u; f_80130F14(c); // 8012B8EC
  c->r[3]=0u+0x80460000u; // 8012B8F0
  c->r[0]=c->r[3]+0x00007FF0u; // 8012B8F4
  W32(c->r[31]+0x00000058u,c->r[0]); // 8012B8F8
  c->r[3]=c->r[31]|c->r[31]; // 8012B8FC
  c->r[4]=0u+0x80460000u; // 8012B900
  c->r[4]=c->r[4]+0x00007F78u; // 8012B904
  c->lr=0x8012B90Cu; f_80131078(c); // 8012B908
  c->r[0]=0u+0xFFFFFFFFu; // 8012B90C
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8012B910
  c->r[3]=0u+0x00000000u; // 8012B914
  W32(c->r[31]+0x00000100u,c->r[3]); // 8012B918
  W32(c->r[31]+0x000000FCu,c->r[3]); // 8012B91C
  c->r[0]=0u+0x00000001u; // 8012B920
  W32(c->r[31]+0x00000104u,c->r[0]); // 8012B924
  W32(c->r[31]+0x00000108u,c->r[3]); // 8012B928
  W32(c->r[31]+0x0000010Cu,c->r[3]); // 8012B92C
  W32(c->r[31]+0x000000E8u,c->r[3]); // 8012B930
  W32(c->r[31]+0x000000F0u,c->r[3]); // 8012B934
  W32(c->r[31]+0x000000F4u,c->r[3]); // 8012B938
  c->r[3]=c->r[31]|c->r[31]; // 8012B93C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012B940
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012B944
  c->lr=c->r[0]; // 8012B948
  c->r[1]=c->r[1]+0x00000010u; // 8012B94C
  return; // 8012B950
}

// fn_8012B954
void f_8012B954(Ctx* __restrict c) {
  return; // 8012B954
}

// fn_8012B958
void f_8012B958(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012B958
  c->r[0]=c->lr; // 8012B95C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012B960
  c->r[11]=c->r[1]+0x00000020u; // 8012B964
  c->lr=0x8012B96Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8012B968
  c->r[31]=c->r[3]|c->r[3]; // 8012B96C
  c->r[3]=0u+0x00000003u; // 8012B970
  c->lr=0x8012B978u; f_801F1364(c); // 8012B974
  c->r[3]=c->r[31]|c->r[31]; // 8012B978
  c->r[4]=0u+0x00000000u; // 8012B97C
  c->lr=0x8012B984u; f_80131168(c); // 8012B980
  c->r[3]=c->r[31]|c->r[31]; // 8012B984
  c->r[4]=0u+0x00000000u; // 8012B988
  c->lr=0x8012B990u; f_80131184(c); // 8012B98C
  c->lr=0x8012B994u; f_80056B5C(c); // 8012B990
  c->r[28]=c->r[3]|c->r[3]; // 8012B994
  c->lr=0x8012B99Cu; f_801F1340(c); // 8012B998
  c->lr=0x8012B9A0u; f_80056B54(c); // 8012B99C
  c->r[3]=0u+0x00000014u; // 8012B9A0
  c->lr=0x8012B9A8u; f_80054464(c); // 8012B9A4
  W32(c->r[31]+0x000000F4u,c->r[3]); // 8012B9A8
  c->r[3]=c->r[28]|c->r[28]; // 8012B9AC
  c->lr=0x8012B9B4u; f_80056B54(c); // 8012B9B0
  c->r[0]=0u+0x00000000u; // 8012B9B4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012B9B8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8012B9BC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012B9C0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8012B9C4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012B9C8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8012B9CC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012B9D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8012B9D4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012B9D8
  W32(c->r[3]+0x00000010u,c->r[0]); // 8012B9DC
  W32(c->r[31]+0x00000108u,c->r[0]); // 8012B9E0
  c->r[0]=0u+0xFFFFFFFFu; // 8012B9E4
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8012B9E8
  c->lr=0x8012B9F0u; f_80056B5C(c); // 8012B9EC
  c->r[28]=c->r[3]|c->r[3]; // 8012B9F0
  c->lr=0x8012B9F8u; f_801F1340(c); // 8012B9F4
  c->lr=0x8012B9FCu; f_80056B54(c); // 8012B9F8
  c->r[3]=0u+0x0000000Cu; // 8012B9FC
  c->lr=0x8012BA04u; f_80047B64(c); // 8012BA00
  c->r[30]=c->r[3]|c->r[3]; // 8012BA04
  cmps(c,0,(int32_t)c->r[3],0); // 8012BA08
  if (crb(c,2)) { goto L_8012BA14; } // 8012BA0C
  c->lr=0x8012BA14u; f_80129B0C(c); // 8012BA10
L_8012BA14:;
  W32(c->r[31]+0x000000E8u,c->r[30]); // 8012BA14
  c->r[3]=c->r[28]|c->r[28]; // 8012BA18
  c->lr=0x8012BA20u; f_80056B54(c); // 8012BA1C
  c->lr=0x8012BA24u; f_80056B5C(c); // 8012BA20
  c->r[28]=c->r[3]|c->r[3]; // 8012BA24
  c->lr=0x8012BA2Cu; f_801F1340(c); // 8012BA28
  c->lr=0x8012BA30u; f_80056B54(c); // 8012BA2C
  c->r[3]=0u+0x000001D8u; // 8012BA30
  c->lr=0x8012BA38u; f_80047B64(c); // 8012BA34
  c->r[30]=c->r[3]|c->r[3]; // 8012BA38
  cmps(c,0,(int32_t)c->r[3],0); // 8012BA3C
  if (crb(c,2)) { goto L_8012BA48; } // 8012BA40
  c->lr=0x8012BA48u; f_8012A2B4(c); // 8012BA44
L_8012BA48:;
  W32(c->r[31]+0x000000F0u,c->r[30]); // 8012BA48
  c->r[3]=c->r[28]|c->r[28]; // 8012BA4C
  c->lr=0x8012BA54u; f_80056B54(c); // 8012BA50
  c->r[28]=0u+0x00000000u; // 8012BA54
  c->r[29]=0u+0x00000000u; // 8012BA58
L_8012BA5C:;
  c->lr=0x8012BA60u; f_80056B5C(c); // 8012BA5C
  c->r[27]=c->r[3]|c->r[3]; // 8012BA60
  c->lr=0x8012BA68u; f_801F1340(c); // 8012BA64
  c->lr=0x8012BA6Cu; f_80056B54(c); // 8012BA68
  c->r[3]=0u+0x000001DCu; // 8012BA6C
  c->lr=0x8012BA74u; f_80047B64(c); // 8012BA70
  c->r[30]=c->r[3]|c->r[3]; // 8012BA74
  cmps(c,0,(int32_t)c->r[3],0); // 8012BA78
  if (crb(c,2)) { goto L_8012BA84; } // 8012BA7C
  c->lr=0x8012BA84u; f_80190834(c); // 8012BA80
L_8012BA84:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BA84
  W32(c->r[3]+c->r[29],c->r[30]); // 8012BA88
  c->r[3]=c->r[27]|c->r[27]; // 8012BA8C
  c->lr=0x8012BA94u; f_80056B54(c); // 8012BA90
  c->r[29]=c->r[29]+0x00000004u; // 8012BA94
  c->r[28]=c->r[28]+0x00000001u; // 8012BA98
  cmps(c,0,(int32_t)c->r[28],5); // 8012BA9C
  if (crb(c,0)) { IRQCHK(c); goto L_8012BA5C; } // 8012BAA0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BAA4
  c->lr=0x8012BAACu; f_8012A308(c); // 8012BAA8
  c->r[29]=0u+0x00000000u; // 8012BAAC
  c->r[30]=0u+0x00000000u; // 8012BAB0
L_8012BAB4:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BAB4
  c->r[3]=R32(c->r[3]+c->r[30]); // 8012BAB8
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 8012BABC
  c->lr=0x8012BAC4u; f_80190894(c); // 8012BAC0
  c->r[30]=c->r[30]+0x00000004u; // 8012BAC4
  c->r[29]=c->r[29]+0x00000001u; // 8012BAC8
  cmps(c,0,(int32_t)c->r[29],5); // 8012BACC
  if (crb(c,0)) { IRQCHK(c); goto L_8012BAB4; } // 8012BAD0
  c->r[3]=c->r[31]|c->r[31]; // 8012BAD4
  c->r[4]=0u+0x00000001u; // 8012BAD8
  c->lr=0x8012BAE0u; f_801311BC(c); // 8012BADC
  c->r[3]=c->r[31]|c->r[31]; // 8012BAE0
  c->r[4]=0u+0x00000000u; // 8012BAE4
  c->lr=0x8012BAECu; f_8013114C(c); // 8012BAE8
  c->r[11]=c->r[1]+0x00000020u; // 8012BAEC
  c->lr=0x8012BAF4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8012BAF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012BAF4
  c->lr=c->r[0]; // 8012BAF8
  c->r[1]=c->r[1]+0x00000020u; // 8012BAFC
  return; // 8012BB00
}

// fn_8012BB04
void f_8012BB04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BB04
  c->r[0]=c->lr; // 8012BB08
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012BB0C
  c->r[11]=c->r[1]+0x00000020u; // 8012BB10
  c->lr=0x8012BB18u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8012BB14
  c->r[31]=c->r[3]|c->r[3]; // 8012BB18
  c->r[3]=0u+0x00000003u; // 8012BB1C
  c->lr=0x8012BB24u; f_801F1364(c); // 8012BB20
  c->r[0]=R32(c->r[31]+0x000000F4u); // 8012BB24
  cmps(c,0,(int32_t)c->r[0],0); // 8012BB28
  if (crb(c,2)) { goto L_8012BB5C; } // 8012BB2C
  c->r[28]=0u+0x00000000u; // 8012BB30
  c->r[29]=0u+0x00000000u; // 8012BB34
L_8012BB38:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BB38
  c->r[3]=R32(c->r[3]+c->r[29]); // 8012BB3C
  cmps(c,0,(int32_t)c->r[3],0); // 8012BB40
  if (crb(c,2)) { goto L_8012BB4C; } // 8012BB44
  c->lr=0x8012BB4Cu; f_80190974(c); // 8012BB48
L_8012BB4C:;
  c->r[29]=c->r[29]+0x00000004u; // 8012BB4C
  c->r[28]=c->r[28]+0x00000001u; // 8012BB50
  cmps(c,0,(int32_t)c->r[28],5); // 8012BB54
  if (crb(c,0)) { IRQCHK(c); goto L_8012BB38; } // 8012BB58
L_8012BB5C:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BB5C
  cmps(c,0,(int32_t)c->r[3],0); // 8012BB60
  if (crb(c,2)) { goto L_8012BB6C; } // 8012BB64
  c->lr=0x8012BB6Cu; f_8012A450(c); // 8012BB68
L_8012BB6C:;
  c->r[0]=R32(c->r[31]+0x000000E8u); // 8012BB6C
  cmps(c,0,(int32_t)c->r[0],0); // 8012BB70
  if (crb(c,2)) { goto L_8012BBA4; } // 8012BB74
  c->lr=0x8012BB7Cu; f_80056B5C(c); // 8012BB78
  c->r[28]=c->r[3]|c->r[3]; // 8012BB7C
  c->lr=0x8012BB84u; f_801F1340(c); // 8012BB80
  c->lr=0x8012BB88u; f_80056B54(c); // 8012BB84
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BB88
  c->r[4]=0u+0x00000001u; // 8012BB8C
  c->lr=0x8012BB94u; f_80129B50(c); // 8012BB90
  c->r[3]=c->r[28]|c->r[28]; // 8012BB94
  c->lr=0x8012BB9Cu; f_80056B54(c); // 8012BB98
  c->r[0]=0u+0x00000000u; // 8012BB9C
  W32(c->r[31]+0x000000E8u,c->r[0]); // 8012BBA0
L_8012BBA4:;
  c->r[0]=R32(c->r[31]+0x000000F0u); // 8012BBA4
  cmps(c,0,(int32_t)c->r[0],0); // 8012BBA8
  if (crb(c,2)) { goto L_8012BBF0; } // 8012BBAC
  c->lr=0x8012BBB4u; f_80056B5C(c); // 8012BBB0
  c->r[28]=c->r[3]|c->r[3]; // 8012BBB4
  c->lr=0x8012BBBCu; f_801F1340(c); // 8012BBB8
  c->lr=0x8012BBC0u; f_80056B54(c); // 8012BBBC
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BBC0
  cmps(c,0,(int32_t)c->r[3],0); // 8012BBC4
  if (crb(c,2)) { goto L_8012BBE0; } // 8012BBC8
  c->r[4]=0u+0x00000001u; // 8012BBCC
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012BBD0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8012BBD4
  c->ctr=c->r[12]; // 8012BBD8
  if (true) { c->lr=0x8012BBE0u; dispatch(c,c->ctr); } // 8012BBDC
L_8012BBE0:;
  c->r[3]=c->r[28]|c->r[28]; // 8012BBE0
  c->lr=0x8012BBE8u; f_80056B54(c); // 8012BBE4
  c->r[0]=0u+0x00000000u; // 8012BBE8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8012BBEC
L_8012BBF0:;
  c->r[0]=R32(c->r[31]+0x000000F4u); // 8012BBF0
  cmps(c,0,(int32_t)c->r[0],0); // 8012BBF4
  if (crb(c,2)) { goto L_8012BC6C; } // 8012BBF8
  c->r[28]=0u+0x00000000u; // 8012BBFC
  c->r[29]=0u+0x00000000u; // 8012BC00
  c->r[30]=0u+0x00000000u; // 8012BC04
L_8012BC08:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BC08
  c->r[0]=R32(c->r[3]+c->r[29]); // 8012BC0C
  cmps(c,0,(int32_t)c->r[0],0); // 8012BC10
  if (crb(c,2)) { goto L_8012BC5C; } // 8012BC14
  c->lr=0x8012BC1Cu; f_80056B5C(c); // 8012BC18
  c->r[27]=c->r[3]|c->r[3]; // 8012BC1C
  c->lr=0x8012BC24u; f_801F1340(c); // 8012BC20
  c->lr=0x8012BC28u; f_80056B54(c); // 8012BC24
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BC28
  c->r[3]=R32(c->r[3]+c->r[29]); // 8012BC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8012BC30
  if (crb(c,2)) { goto L_8012BC4C; } // 8012BC34
  c->r[4]=0u+0x00000001u; // 8012BC38
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012BC3C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8012BC40
  c->ctr=c->r[12]; // 8012BC44
  if (true) { c->lr=0x8012BC4Cu; dispatch(c,c->ctr); } // 8012BC48
L_8012BC4C:;
  c->r[3]=c->r[27]|c->r[27]; // 8012BC4C
  c->lr=0x8012BC54u; f_80056B54(c); // 8012BC50
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BC54
  W32(c->r[3]+c->r[29],c->r[30]); // 8012BC58
L_8012BC5C:;
  c->r[29]=c->r[29]+0x00000004u; // 8012BC5C
  c->r[28]=c->r[28]+0x00000001u; // 8012BC60
  cmps(c,0,(int32_t)c->r[28],5); // 8012BC64
  if (crb(c,0)) { IRQCHK(c); goto L_8012BC08; } // 8012BC68
L_8012BC6C:;
  c->r[0]=R32(c->r[31]+0x000000F4u); // 8012BC6C
  cmps(c,0,(int32_t)c->r[0],0); // 8012BC70
  if (crb(c,2)) { goto L_8012BC98; } // 8012BC74
  c->lr=0x8012BC7Cu; f_80056B5C(c); // 8012BC78
  c->r[27]=c->r[3]|c->r[3]; // 8012BC7C
  c->lr=0x8012BC84u; f_801F1340(c); // 8012BC80
  c->lr=0x8012BC88u; f_80056B54(c); // 8012BC84
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BC88
  c->lr=0x8012BC90u; f_80054420(c); // 8012BC8C
  c->r[3]=c->r[27]|c->r[27]; // 8012BC90
  c->lr=0x8012BC98u; f_80056B54(c); // 8012BC94
L_8012BC98:;
  c->r[0]=0u+0x00000000u; // 8012BC98
  W32(c->r[31]+0x000000F4u,c->r[0]); // 8012BC9C
  c->r[3]=c->r[31]|c->r[31]; // 8012BCA0
  c->r[4]=0u+0x00000008u; // 8012BCA4
  c->lr=0x8012BCACu; f_8013114C(c); // 8012BCA8
  c->r[11]=c->r[1]+0x00000020u; // 8012BCAC
  c->lr=0x8012BCB4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8012BCB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012BCB4
  c->lr=c->r[0]; // 8012BCB8
  c->r[1]=c->r[1]+0x00000020u; // 8012BCBC
  return; // 8012BCC0
}

// fn_8012BCC4
void f_8012BCC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BCC4
  c->r[0]=c->lr; // 8012BCC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012BCCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012BCD0
  c->r[31]=c->r[3]|c->r[3]; // 8012BCD4
  c->r[4]=0u+0x00000001u; // 8012BCD8
  c->lr=0x8012BCE0u; f_80131168(c); // 8012BCDC
  c->r[3]=c->r[31]|c->r[31]; // 8012BCE0
  c->r[4]=0u+0x00000001u; // 8012BCE4
  c->lr=0x8012BCECu; f_80131184(c); // 8012BCE8
  c->r[3]=c->r[31]|c->r[31]; // 8012BCEC
  c->r[4]=0u+0x00000000u; // 8012BCF0
  c->lr=0x8012BCF8u; f_8013114C(c); // 8012BCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012BCF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012BCFC
  c->lr=c->r[0]; // 8012BD00
  c->r[1]=c->r[1]+0x00000010u; // 8012BD04
  return; // 8012BD08
}

// fn_8012BD0C
void f_8012BD0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BD0C
  c->r[0]=c->lr; // 8012BD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012BD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012BD18
  c->r[31]=c->r[3]|c->r[3]; // 8012BD1C
  c->r[4]=0u+0x00000000u; // 8012BD20
  c->lr=0x8012BD28u; f_801311BC(c); // 8012BD24
  c->r[3]=c->r[31]|c->r[31]; // 8012BD28
  c->r[4]=0u+0x00000001u; // 8012BD2C
  c->lr=0x8012BD34u; f_8013114C(c); // 8012BD30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012BD34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012BD38
  c->lr=c->r[0]; // 8012BD3C
  c->r[1]=c->r[1]+0x00000010u; // 8012BD40
  return; // 8012BD44
}

// fn_8012BD48
void f_8012BD48(Ctx* __restrict c) {
  c->r[4]=0u+0x00000007u; // 8012BD48
  f_8013114C(c); return; // 8012BD4C
}

// fn_8012BD50
void f_8012BD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BD50
  c->r[0]=c->lr; // 8012BD54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012BD58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012BD5C
  c->r[31]=c->r[3]|c->r[3]; // 8012BD60
  c->r[3]=R32(c->r[3]+0x000000F0u); // 8012BD64
  c->lr=0x8012BD6Cu; f_8012A864(c); // 8012BD68
  cmps(c,0,(int32_t)c->r[3],0); // 8012BD6C
  if (crb(c,2)) { goto L_8012BD9C; } // 8012BD70
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BD74
  c->lr=0x8012BD7Cu; f_8012A800(c); // 8012BD78
  c->r[0]=0u+0x00000000u; // 8012BD7C
  W32(c->r[31]+0x000000FCu,c->r[0]); // 8012BD80
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BD84
  c->r[3]=R32(c->r[3]+0x00000000u); // 8012BD88
  c->lr=0x8012BD90u; f_80190B8C(c); // 8012BD8C
  c->r[3]=c->r[31]|c->r[31]; // 8012BD90
  c->r[4]=0u+0x00000003u; // 8012BD94
  c->lr=0x8012BD9Cu; f_8013114C(c); // 8012BD98
L_8012BD9C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012BD9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012BDA0
  c->lr=c->r[0]; // 8012BDA4
  c->r[1]=c->r[1]+0x00000010u; // 8012BDA8
  return; // 8012BDAC
}

// fn_8012BDB0
void f_8012BDB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BDB0
  c->r[0]=c->lr; // 8012BDB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012BDB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012BDBC
  c->r[31]=c->r[3]|c->r[3]; // 8012BDC0
  c->r[4]=R32(c->r[3]+0x000000F4u); // 8012BDC4
  c->r[0]=R32(c->r[3]+0x000000FCu); // 8012BDC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8012BDCC
  c->r[3]=R32(c->r[4]+c->r[0]); // 8012BDD0
  c->lr=0x8012BDD8u; f_80190CD4(c); // 8012BDD4
  cmps(c,0,(int32_t)c->r[3],0); // 8012BDD8
  if (crb(c,2)) { goto L_8012BE44; } // 8012BDDC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BDE0
  c->r[0]=R32(c->r[31]+0x000000FCu); // 8012BDE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8012BDE8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BDEC
  c->lr=0x8012BDF4u; f_80190C70(c); // 8012BDF0
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8012BDF4
  c->r[4]=c->r[3]+0x00000001u; // 8012BDF8
  W32(c->r[31]+0x000000FCu,c->r[4]); // 8012BDFC
  c->r[0]=R32(c->r[31]+0x000000F8u); // 8012BE00
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8012BE04
  if (crb(c,0)) { goto L_8012BE34; } // 8012BE08
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BE0C
  c->r[4]=R32(c->r[31]+0x00000100u); // 8012BE10
  c->lr=0x8012BE18u; f_80129BC0(c); // 8012BE14
  c->r[4]=c->r[3]|c->r[3]; // 8012BE18
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BE1C
  c->lr=0x8012BE24u; f_8012A948(c); // 8012BE20
  c->r[3]=c->r[31]|c->r[31]; // 8012BE24
  c->r[4]=0u+0x00000004u; // 8012BE28
  c->lr=0x8012BE30u; f_8013114C(c); // 8012BE2C
  goto L_8012BE44; // 8012BE30
L_8012BE34:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BE34
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8012BE38
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BE3C
  c->lr=0x8012BE44u; f_80190B8C(c); // 8012BE40
L_8012BE44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012BE44
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012BE48
  c->lr=c->r[0]; // 8012BE4C
  c->r[1]=c->r[1]+0x00000010u; // 8012BE50
  return; // 8012BE54
}

// fn_8012BE58
void f_8012BE58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BE58
  c->r[0]=c->lr; // 8012BE5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012BE60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012BE64
  c->r[31]=c->r[3]|c->r[3]; // 8012BE68
  c->r[3]=0u+0x00000003u; // 8012BE6C
  c->lr=0x8012BE74u; f_8019CD1C(c); // 8012BE70
  cmps(c,0,(int32_t)c->r[3],0); // 8012BE74
  if (crb(c,2)) { goto L_8012BE8C; } // 8012BE78
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BE7C
  c->lr=0x8012BE84u; f_80129DAC(c); // 8012BE80
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BE84
  c->lr=0x8012BE8Cu; f_80129C94(c); // 8012BE88
L_8012BE8C:;
  c->r[3]=0u+0x00000004u; // 8012BE8C
  c->lr=0x8012BE94u; f_8019CD1C(c); // 8012BE90
  cmps(c,0,(int32_t)c->r[3],0); // 8012BE94
  if (crb(c,2)) { goto L_8012BEAC; } // 8012BE98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BE9C
  c->lr=0x8012BEA4u; f_80129DAC(c); // 8012BEA0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BEA4
  c->lr=0x8012BEACu; f_80129C28(c); // 8012BEA8
L_8012BEAC:;
  c->r[3]=0u+0x00000000u; // 8012BEAC
  c->lr=0x8012BEB4u; f_8019CD1C(c); // 8012BEB0
  cmps(c,0,(int32_t)c->r[3],0); // 8012BEB4
  if (crb(c,2)) { goto L_8012BEEC; } // 8012BEB8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BEBC
  c->lr=0x8012BEC4u; f_80129D78(c); // 8012BEC0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BEC4
  c->lr=0x8012BECCu; f_80129D00(c); // 8012BEC8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8012BECC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BED0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BED4
  c->lr=0x8012BEDCu; f_80190B20(c); // 8012BED8
  c->r[3]=c->r[31]|c->r[31]; // 8012BEDC
  c->r[4]=0u+0x00000005u; // 8012BEE0
  c->lr=0x8012BEE8u; f_8013114C(c); // 8012BEE4
  goto L_8012BFBC; // 8012BEE8
L_8012BEEC:;
  c->r[3]=0u+0x00000001u; // 8012BEEC
  c->lr=0x8012BEF4u; f_8019CD1C(c); // 8012BEF0
  cmps(c,0,(int32_t)c->r[3],0); // 8012BEF4
  if (crb(c,2)) { goto L_8012BF90; } // 8012BEF8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BEFC
  c->lr=0x8012BF04u; f_80129D44(c); // 8012BF00
  c->r[0]=0u+0x00000001u; // 8012BF04
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 8012BF08
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BF0C
  c->r[4]=R32(c->r[31]+0x00000104u); // 8012BF10
  c->lr=0x8012BF18u; f_80129BC0(c); // 8012BF14
  c->r[4]=c->r[3]|c->r[3]; // 8012BF18
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BF1C
  c->lr=0x8012BF24u; f_8012A948(c); // 8012BF20
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BF24
  c->lr=0x8012BF2Cu; f_80129D00(c); // 8012BF28
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8012BF2C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BF30
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BF34
  c->lr=0x8012BF3Cu; f_80190B14(c); // 8012BF38
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BF3C
  c->lr=0x8012BF44u; f_80129D00(c); // 8012BF40
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8012BF44
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BF48
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BF4C
  c->lr=0x8012BF54u; f_80190B20(c); // 8012BF50
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BF54
  c->lr=0x8012BF5Cu; f_80129D00(c); // 8012BF58
  c->r[4]=c->r[3]|c->r[3]; // 8012BF5C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BF60
  c->lr=0x8012BF68u; f_8012A99C(c); // 8012BF64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BF68
  c->lr=0x8012BF70u; f_80129D00(c); // 8012BF6C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8012BF70
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BF74
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BF78
  c->lr=0x8012BF80u; f_80190D8C(c); // 8012BF7C
  c->r[3]=c->r[31]|c->r[31]; // 8012BF80
  c->r[4]=0u+0x00000005u; // 8012BF84
  c->lr=0x8012BF8Cu; f_8013114C(c); // 8012BF88
  goto L_8012BFBC; // 8012BF8C
L_8012BF90:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BF90
  c->lr=0x8012BF98u; f_80129D00(c); // 8012BF94
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8012BF98
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BF9C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BFA0
  c->lr=0x8012BFA8u; f_80190B14(c); // 8012BFA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012BFA8
  c->lr=0x8012BFB0u; f_80129D00(c); // 8012BFAC
  c->r[4]=c->r[3]|c->r[3]; // 8012BFB0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012BFB4
  c->lr=0x8012BFBCu; f_8012A99C(c); // 8012BFB8
L_8012BFBC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012BFBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012BFC0
  c->lr=c->r[0]; // 8012BFC4
  c->r[1]=c->r[1]+0x00000010u; // 8012BFC8
  return; // 8012BFCC
}

// fn_8012BFD0
void f_8012BFD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012BFD0
  c->r[0]=c->lr; // 8012BFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012BFD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012BFDC
  c->r[31]=c->r[3]|c->r[3]; // 8012BFE0
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8012BFE4
  c->lr=0x8012BFECu; f_80129D00(c); // 8012BFE8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8012BFEC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012BFF0
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012BFF4
  c->lr=0x8012BFFCu; f_80190B30(c); // 8012BFF8
  cmps(c,0,(int32_t)c->r[3],0); // 8012BFFC
  if (crb(c,2)) { goto L_8012C058; } // 8012C000
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8012C004
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8012C008
  W32(c->r[31]+0x000000FCu,c->r[0]); // 8012C00C
  c->r[0]=R32(c->r[31]+0x0000010Cu); // 8012C010
  cmps(c,0,(int32_t)c->r[0],0); // 8012C014
  if (!crb(c,2)) { goto L_8012C024; } // 8012C018
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012C01C
  c->lr=0x8012C024u; f_80129D44(c); // 8012C020
L_8012C024:;
  c->r[0]=0u+0x00000000u; // 8012C024
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 8012C028
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012C02C
  c->r[0]=R32(c->r[31]+0x000000FCu); // 8012C030
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8012C034
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012C038
  c->lr=0x8012C040u; f_80190BD0(c); // 8012C03C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012C040
  c->r[4]=0u+0x00000000u; // 8012C044
  c->lr=0x8012C04Cu; f_8012A9A4(c); // 8012C048
  c->r[3]=c->r[31]|c->r[31]; // 8012C04C
  c->r[4]=0u+0x00000006u; // 8012C050
  c->lr=0x8012C058u; f_8013114C(c); // 8012C054
L_8012C058:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C058
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C05C
  c->lr=c->r[0]; // 8012C060
  c->r[1]=c->r[1]+0x00000010u; // 8012C064
  return; // 8012C068
}

// fn_8012C06C
void f_8012C06C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C06C
  c->r[0]=c->lr; // 8012C070
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C078
  c->r[31]=c->r[3]|c->r[3]; // 8012C07C
  c->r[0]=R32(c->r[3]+0x000000FCu); // 8012C080
  cmps(c,0,(int32_t)c->r[0],0); // 8012C084
  if (crb(c,0)) { goto L_8012C0D8; } // 8012C088
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8012C08C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8012C090
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012C094
  c->lr=0x8012C09Cu; f_80190D30(c); // 8012C098
  cmps(c,0,(int32_t)c->r[3],0); // 8012C09C
  if (crb(c,2)) { goto L_8012C10C; } // 8012C0A0
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8012C0A4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8012C0A8
  W32(c->r[31]+0x000000FCu,c->r[0]); // 8012C0AC
  cmps(c,0,(int32_t)c->r[0],0); // 8012C0B0
  if (!crb(c,0)) { goto L_8012C0C4; } // 8012C0B4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012C0B8
  c->lr=0x8012C0C0u; f_8012A6F8(c); // 8012C0BC
  goto L_8012C10C; // 8012C0C0
L_8012C0C4:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8012C0C4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8012C0C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012C0CC
  c->lr=0x8012C0D4u; f_80190BD0(c); // 8012C0D0
  goto L_8012C10C; // 8012C0D4
L_8012C0D8:;
  c->r[3]=R32(c->r[3]+0x000000F0u); // 8012C0D8
  c->lr=0x8012C0E0u; f_8012A8D4(c); // 8012C0DC
  cmps(c,0,(int32_t)c->r[3],0); // 8012C0E0
  if (crb(c,2)) { goto L_8012C10C; } // 8012C0E4
  c->r[3]=c->r[31]|c->r[31]; // 8012C0E8
  c->lr=0x8012C0F0u; f_8012C178(c); // 8012C0EC
  c->r[0]=0u+0xFFFFFFFFu; // 8012C0F0
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8012C0F4
  c->r[0]=0u+0x00000001u; // 8012C0F8
  W32(c->r[31]+0x00000108u,c->r[0]); // 8012C0FC
  c->r[3]=c->r[31]|c->r[31]; // 8012C100
  c->r[4]=0u+0x00000000u; // 8012C104
  c->lr=0x8012C10Cu; f_8013114C(c); // 8012C108
L_8012C10C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C10C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C110
  c->lr=c->r[0]; // 8012C114
  c->r[1]=c->r[1]+0x00000010u; // 8012C118
  return; // 8012C11C
}

// fn_8012C120
void f_8012C120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C120
  c->r[0]=c->lr; // 8012C124
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C12C
  c->r[31]=c->r[3]|c->r[3]; // 8012C130
  c->r[0]=0u+0x00000000u; // 8012C134
  W32(c->r[3]+0x00000108u,c->r[0]); // 8012C138
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8012C13C
  c->r[4]=R32(c->r[31]+0x000000F8u); // 8012C140
  c->lr=0x8012C148u; f_80129D08(c); // 8012C144
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8012C148
  c->lr=0x8012C150u; f_80129D10(c); // 8012C14C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 8012C150
  c->lr=0x8012C158u; f_8012A6A8(c); // 8012C154
  c->r[3]=c->r[31]|c->r[31]; // 8012C158
  c->r[4]=0u+0x00000002u; // 8012C15C
  c->lr=0x8012C164u; f_8013114C(c); // 8012C160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C164
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C168
  c->lr=c->r[0]; // 8012C16C
  c->r[1]=c->r[1]+0x00000010u; // 8012C170
  return; // 8012C174
}

// fn_8012C178
void f_8012C178(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C178
  c->r[0]=c->lr; // 8012C17C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012C180
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012C184
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012C188
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012C18C
  c->r[29]=c->r[3]|c->r[3]; // 8012C190
  c->r[3]=R32(c->r[3]+0x000000F0u); // 8012C194
  c->lr=0x8012C19Cu; f_8012A74C(c); // 8012C198
  c->r[30]=0u+0x00000000u; // 8012C19C
  c->r[31]=0u+0x00000000u; // 8012C1A0
L_8012C1A4:;
  c->r[3]=R32(c->r[29]+0x000000F4u); // 8012C1A4
  c->r[3]=R32(c->r[3]+c->r[31]); // 8012C1A8
  cmps(c,0,(int32_t)c->r[3],0); // 8012C1AC
  if (crb(c,2)) { goto L_8012C1B8; } // 8012C1B0
  c->lr=0x8012C1B8u; f_80190C24(c); // 8012C1B4
L_8012C1B8:;
  c->r[31]=c->r[31]+0x00000004u; // 8012C1B8
  c->r[30]=c->r[30]+0x00000001u; // 8012C1BC
  cmps(c,0,(int32_t)c->r[30],5); // 8012C1C0
  if (crb(c,0)) { IRQCHK(c); goto L_8012C1A4; } // 8012C1C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012C1C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012C1CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012C1D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012C1D4
  c->lr=c->r[0]; // 8012C1D8
  c->r[1]=c->r[1]+0x00000020u; // 8012C1DC
  return; // 8012C1E0
}

// fn_8012C1E4
void f_8012C1E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C1E4
  c->r[0]=c->lr; // 8012C1E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C1EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C1F0
  c->r[31]=c->r[3]|c->r[3]; // 8012C1F4
  c->r[6]=R32(c->r[3]+0x000000F8u); // 8012C1F8
  c->r[0]=c->r[6]+0x00010000u; // 8012C1FC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8012C200
  if (!crb(c,2)) { goto L_8012C21C; } // 8012C204
  c->r[3]=R32(c->r[3]+0x000000F0u); // 8012C208
  c->lr=0x8012C210u; f_8012A794(c); // 8012C20C
  c->r[0]=0u+0x00000000u; // 8012C210
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8012C214
  goto L_8012C238; // 8012C218
L_8012C21C:;
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8012C21C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8012C220
  c->r[3]=R32(c->r[3]+c->r[0]); // 8012C224
  c->lr=0x8012C22Cu; f_80190C64(c); // 8012C228
  c->r[3]=R32(c->r[31]+0x000000F8u); // 8012C22C
  c->r[0]=c->r[3]+0x00000001u; // 8012C230
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8012C234
L_8012C238:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C238
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C23C
  c->lr=c->r[0]; // 8012C240
  c->r[1]=c->r[1]+0x00000010u; // 8012C244
  return; // 8012C248
}

// fn_8012C24C
void f_8012C24C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000108u); // 8012C24C
  return; // 8012C250
}

// fn_8012C254
void f_8012C254(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000108u); // 8012C254
  cmps(c,0,(int32_t)c->r[0],0); // 8012C258
  if (crb(c,2)) { goto L_8012C268; } // 8012C25C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8012C260
  f_80129D00(c); return; // 8012C264
L_8012C268:;
  c->r[3]=0u+0xFFFFFFFFu; // 8012C268
  return; // 8012C26C
}

// fn_8012C270
void f_8012C270(Ctx* __restrict c) {
  W32(c->r[3]+0x00000100u,c->r[4]); // 8012C270
  return; // 8012C274
}

// fn_8012C278
void f_8012C278(Ctx* __restrict c) {
  W32(c->r[3]+0x00000104u,c->r[4]); // 8012C278
  return; // 8012C27C
}

// fn_8012C280
void f_8012C280(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C280
  c->r[0]=c->lr; // 8012C284
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C288
  c->lr=0x8012C290u; f_8011C12C(c); // 8012C28C
  c->r[4]=0u+0x00000003u; // 8012C290
  c->lr=0x8012C298u; f_8011CFF4(c); // 8012C294
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012C298
  c->r[12]=R32(c->r[12]+0x00000048u); // 8012C29C
  c->ctr=c->r[12]; // 8012C2A0
  if (true) { c->lr=0x8012C2A8u; dispatch(c,c->ctr); } // 8012C2A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C2A8
  c->lr=c->r[0]; // 8012C2AC
  c->r[1]=c->r[1]+0x00000010u; // 8012C2B0
  return; // 8012C2B4
}

// fn_8012C2B8
void f_8012C2B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C2B8
  c->r[0]=c->lr; // 8012C2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C2C0
  c->lr=0x8012C2C8u; f_8011C12C(c); // 8012C2C4
  c->r[4]=0u+0x00000003u; // 8012C2C8
  c->lr=0x8012C2D0u; f_8011CFF4(c); // 8012C2CC
  c->lr=0x8012C2D4u; f_8012C24C(c); // 8012C2D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C2D4
  c->lr=c->r[0]; // 8012C2D8
  c->r[1]=c->r[1]+0x00000010u; // 8012C2DC
  return; // 8012C2E0
}

// fn_8012C2E4
void f_8012C2E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C2E4
  c->r[0]=c->lr; // 8012C2E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C2EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C2F0
  c->lr=0x8012C2F8u; f_8011C12C(c); // 8012C2F4
  c->r[4]=0u+0x00000003u; // 8012C2F8
  c->lr=0x8012C300u; f_8011CFF4(c); // 8012C2FC
  c->r[31]=c->r[3]|c->r[3]; // 8012C300
  c->lr=0x8012C308u; f_8012C24C(c); // 8012C304
  cmps(c,0,(int32_t)c->r[3],0); // 8012C308
  if (!crb(c,2)) { goto L_8012C318; } // 8012C30C
  c->r[3]=0u+0xFFFFFFFFu; // 8012C310
  goto L_8012C320; // 8012C314
L_8012C318:;
  c->r[3]=c->r[31]|c->r[31]; // 8012C318
  c->lr=0x8012C320u; f_8012C254(c); // 8012C31C
L_8012C320:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C320
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C324
  c->lr=c->r[0]; // 8012C328
  c->r[1]=c->r[1]+0x00000010u; // 8012C32C
  return; // 8012C330
}

// fn_8012C334
void f_8012C334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C334
  c->r[0]=c->lr; // 8012C338
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C340
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012C344
  c->r[30]=c->r[3]|c->r[3]; // 8012C348
  c->r[31]=c->r[4]|c->r[4]; // 8012C34C
  c->lr=0x8012C354u; f_8011C12C(c); // 8012C350
  c->r[4]=0u+0x00000003u; // 8012C354
  c->lr=0x8012C35Cu; f_8011CFF4(c); // 8012C358
  c->r[4]=c->r[30]|c->r[30]; // 8012C35C
  c->r[5]=c->r[31]|c->r[31]; // 8012C360
  c->lr=0x8012C368u; f_8012C1E4(c); // 8012C364
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C368
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012C36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C370
  c->lr=c->r[0]; // 8012C374
  c->r[1]=c->r[1]+0x00000010u; // 8012C378
  return; // 8012C37C
}

// fn_8012C380
void f_8012C380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C380
  c->r[0]=c->lr; // 8012C384
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C38C
  c->r[31]=c->r[3]|c->r[3]; // 8012C390
  c->lr=0x8012C398u; f_8011C12C(c); // 8012C394
  c->r[4]=0u+0x00000003u; // 8012C398
  c->lr=0x8012C3A0u; f_8011CFF4(c); // 8012C39C
  c->r[4]=c->r[31]|c->r[31]; // 8012C3A0
  c->lr=0x8012C3A8u; f_8012C278(c); // 8012C3A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C3A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C3AC
  c->lr=c->r[0]; // 8012C3B0
  c->r[1]=c->r[1]+0x00000010u; // 8012C3B4
  return; // 8012C3B8
}

// fn_8012C3BC
void f_8012C3BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C3BC
  c->r[0]=c->lr; // 8012C3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C3C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C3C8
  c->r[31]=c->r[3]|c->r[3]; // 8012C3CC
  c->lr=0x8012C3D4u; f_8011C12C(c); // 8012C3D0
  c->r[4]=0u+0x00000003u; // 8012C3D4
  c->lr=0x8012C3DCu; f_8011CFF4(c); // 8012C3D8
  c->r[4]=c->r[31]|c->r[31]; // 8012C3DC
  c->lr=0x8012C3E4u; f_8012C270(c); // 8012C3E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C3E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C3E8
  c->lr=c->r[0]; // 8012C3EC
  c->r[1]=c->r[1]+0x00000010u; // 8012C3F0
  return; // 8012C3F4
}

// fn_8012C3F8
void f_8012C3F8(Ctx* __restrict c) {
  c->r[3]=0u+0x80460000u; // 8012C3F8
  c->r[5]=c->r[3]+0x00007F78u; // 8012C3FC
  c->r[3]=0u+0x80440000u; // 8012C400
  c->r[4]=c->r[3]+0xFFFFD898u; // 8012C404
  c->r[3]=R32(c->r[4]+0x00000000u); // 8012C408
  c->r[0]=R32(c->r[4]+0x00000004u); // 8012C40C
  W32(c->r[5]+0x0000006Cu,c->r[3]); // 8012C410
  W32(c->r[5]+0x00000070u,c->r[0]); // 8012C414
  c->r[0]=R32(c->r[4]+0x00000008u); // 8012C418
  W32(c->r[5]+0x00000074u,c->r[0]); // 8012C41C
  return; // 8012C420
}

// fn_8012C424
void f_8012C424(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C424
  c->r[0]=c->lr; // 8012C428
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C42C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C430
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012C434
  c->r[30]=c->r[3]|c->r[3]; // 8012C438
  c->r[31]=c->r[4]|c->r[4]; // 8012C43C
  cmps(c,0,(int32_t)c->r[3],0); // 8012C440
  if (crb(c,2)) { goto L_8012C464; } // 8012C444
  c->r[4]=0u+0x00000000u; // 8012C448
  c->lr=0x8012C450u; f_8012FB1C(c); // 8012C44C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012C450
  cmps(c,0,(int32_t)c->r[0],0); // 8012C454
  if (!crb(c,1)) { goto L_8012C464; } // 8012C458
  c->r[3]=c->r[30]|c->r[30]; // 8012C45C
  c->lr=0x8012C464u; f_80047B20(c); // 8012C460
L_8012C464:;
  c->r[3]=c->r[30]|c->r[30]; // 8012C464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C468
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012C46C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C470
  c->lr=c->r[0]; // 8012C474
  c->r[1]=c->r[1]+0x00000010u; // 8012C478
  return; // 8012C47C
}

// fn_8012C480
void f_8012C480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C480
  c->r[0]=c->lr; // 8012C484
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C488
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C48C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012C490
  c->r[30]=c->r[3]|c->r[3]; // 8012C494
  c->r[31]=c->r[4]|c->r[4]; // 8012C498
  cmps(c,0,(int32_t)c->r[3],0); // 8012C49C
  if (crb(c,2)) { goto L_8012C4C0; } // 8012C4A0
  c->r[4]=0u+0x00000000u; // 8012C4A4
  c->lr=0x8012C4ACu; f_80130F88(c); // 8012C4A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012C4AC
  cmps(c,0,(int32_t)c->r[0],0); // 8012C4B0
  if (!crb(c,1)) { goto L_8012C4C0; } // 8012C4B4
  c->r[3]=c->r[30]|c->r[30]; // 8012C4B8
  c->lr=0x8012C4C0u; f_80047B20(c); // 8012C4BC
L_8012C4C0:;
  c->r[3]=c->r[30]|c->r[30]; // 8012C4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C4C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012C4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C4CC
  c->lr=c->r[0]; // 8012C4D0
  c->r[1]=c->r[1]+0x00000010u; // 8012C4D4
  return; // 8012C4D8
}

// fn_8012C4DC
void f_8012C4DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C4DC
  c->r[0]=c->lr; // 8012C4E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C4E8
  c->r[31]=c->r[3]|c->r[3]; // 8012C4EC
  c->lr=0x8012C4F4u; f_8012FAAC(c); // 8012C4F0
  c->r[3]=0u+0x80470000u; // 8012C4F4
  c->r[0]=c->r[3]+0xFFFF80C8u; // 8012C4F8
  W32(c->r[31]+0x00000058u,c->r[0]); // 8012C4FC
  c->r[3]=c->r[31]+0x000000ECu; // 8012C500
  c->lr=0x8012C508u; f_80047C5C(c); // 8012C504
  c->r[3]=c->r[31]+0x0000312Cu; // 8012C508
  c->lr=0x8012C510u; f_80110BF4(c); // 8012C50C
  c->r[3]=c->r[31]+0x00006140u; // 8012C510
  c->lr=0x8012C518u; f_80111530(c); // 8012C514
  c->r[3]=c->r[31]+0x000061C4u; // 8012C518
  c->lr=0x8012C520u; f_80047C5C(c); // 8012C51C
  c->r[0]=0u+0x00000000u; // 8012C520
  W32(c->r[31]+0x000061B4u,c->r[0]); // 8012C524
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C528
  {uint32_t ea=c->r[31]+0x000061B8u; WF32(ea,c->f[0]);} // 8012C52C
  {uint32_t ea=c->r[31]+0x000061BCu; WF32(ea,c->f[0]);} // 8012C530
  c->r[3]=c->r[31]|c->r[31]; // 8012C534
  c->lr=0x8012C53Cu; f_8012C5E4(c); // 8012C538
  c->r[3]=c->r[31]|c->r[31]; // 8012C53C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C540
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C544
  c->lr=c->r[0]; // 8012C548
  c->r[1]=c->r[1]+0x00000010u; // 8012C54C
  return; // 8012C550
}

// dtor_8012C554
void f_8012C554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C554
  c->r[0]=c->lr; // 8012C558
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012C55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012C560
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012C564
  c->r[30]=c->r[3]|c->r[3]; // 8012C568
  c->r[31]=c->r[4]|c->r[4]; // 8012C56C
  cmps(c,0,(int32_t)c->r[3],0); // 8012C570
  if (crb(c,2)) { goto L_8012C5C8; } // 8012C574
  c->r[3]=c->r[3]+0x000061C4u; // 8012C578
  c->r[4]=0u+0xFFFFFFFFu; // 8012C57C
  c->lr=0x8012C584u; f_80047BD4(c); // 8012C580
  c->r[3]=c->r[30]+0x00006140u; // 8012C584
  c->r[4]=0u+0xFFFFFFFFu; // 8012C588
  c->lr=0x8012C590u; f_801115A0(c); // 8012C58C
  c->r[3]=c->r[30]+0x0000312Cu; // 8012C590
  c->r[4]=0u+0xFFFFFFFFu; // 8012C594
  c->lr=0x8012C59Cu; f_80110C30(c); // 8012C598
  c->r[3]=c->r[30]+0x000000ECu; // 8012C59C
  c->r[4]=0u+0xFFFFFFFFu; // 8012C5A0
  c->lr=0x8012C5A8u; f_80047BD4(c); // 8012C5A4
  c->r[3]=c->r[30]|c->r[30]; // 8012C5A8
  c->r[4]=0u+0x00000000u; // 8012C5AC
  c->lr=0x8012C5B4u; f_8012FB1C(c); // 8012C5B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012C5B4
  cmps(c,0,(int32_t)c->r[0],0); // 8012C5B8
  if (!crb(c,1)) { goto L_8012C5C8; } // 8012C5BC
  c->r[3]=c->r[30]|c->r[30]; // 8012C5C0
  c->lr=0x8012C5C8u; f_80047B20(c); // 8012C5C4
L_8012C5C8:;
  c->r[3]=c->r[30]|c->r[30]; // 8012C5C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012C5CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012C5D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012C5D4
  c->lr=c->r[0]; // 8012C5D8
  c->r[1]=c->r[1]+0x00000010u; // 8012C5DC
  return; // 8012C5E0
}

// fn_8012C5E4
void f_8012C5E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C5E4
  c->r[0]=c->lr; // 8012C5E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012C5EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012C5F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012C5F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012C5F8
  c->r[29]=c->r[3]|c->r[3]; // 8012C5FC
  c->r[30]=0u+0x00000000u; // 8012C600
  W32(c->r[3]+0x000000C0u,c->r[30]); // 8012C604
  {uint32_t ea=c->r[2]+0xFFFF8C04u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C608
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 8012C60C
  {uint32_t ea=c->r[2]+0xFFFF8C08u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C610
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8012C614
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[1]);} // 8012C618
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 8012C61C
  W32(c->r[3]+0x00000110u,c->r[30]); // 8012C620
  W32(c->r[3]+0x000000C4u,c->r[30]); // 8012C624
  c->r[0]=0u+0x00000003u; // 8012C628
  W32(c->r[3]+0x000000C8u,c->r[0]); // 8012C62C
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C630
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 8012C634
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[1]);} // 8012C638
  {uint32_t ea=c->r[2]+0xFFFF8C0Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C63C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8012C640
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8012C644
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 8012C648
  {uint32_t ea=c->r[2]+0xFFFF8C10u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C64C
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 8012C650
  W32(c->r[3]+0x00000100u,c->r[0]); // 8012C654
  W32(c->r[3]+0x00003120u,c->r[30]); // 8012C658
  W32(c->r[3]+0x00003124u,c->r[30]); // 8012C65C
  W32(c->r[3]+0x0000311Cu,c->r[30]); // 8012C660
  c->r[3]=c->r[3]+0x000000ECu; // 8012C664
  c->r[4]=0u+0x80460000u; // 8012C668
  c->r[31]=c->r[4]+0xFFFFD188u; // 8012C66C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8012C670
  c->lr=0x8012C678u; f_8005D48C(c); // 8012C674
  W32(c->r[29]+0x000061C0u,c->r[30]); // 8012C678
  c->r[3]=c->r[29]+0x000000ECu; // 8012C67C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8012C680
  c->lr=0x8012C688u; f_8005D48C(c); // 8012C684
  c->r[3]=c->r[29]|c->r[29]; // 8012C688
  c->r[4]=0u+0x00000001u; // 8012C68C
  c->lr=0x8012C694u; f_8012D1B0(c); // 8012C690
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012C694
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012C698
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012C69C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012C6A0
  c->lr=c->r[0]; // 8012C6A4
  c->r[1]=c->r[1]+0x00000020u; // 8012C6A8
  return; // 8012C6AC
}

// fn_8012C6B0
void f_8012C6B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C6B0
  c->r[0]=c->lr; // 8012C6B4
  W32(c->r[1]+0x00000064u,c->r[0]); // 8012C6B8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8012C6BC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8012C6C0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8012C6C4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8012C6C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 8012C6CC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 8012C6D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[28]);} // 8012C6D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,28,ea,0,0);} // 8012C6D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012C6DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012C6E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012C6E4
  c->r[29]=c->r[3]|c->r[3]; // 8012C6E8
  c->f[28]=c->f[1]; // 8012C6EC
  c->f[29]=c->f[2]; // 8012C6F0
  c->r[30]=c->r[4]|c->r[4]; // 8012C6F4
  c->r[31]=c->r[5]|c->r[5]; // 8012C6F8
  {uint32_t ea=c->r[3]+0x000000DCu; c->f[31]=c->ps1[31]=RF32(ea);} // 8012C6FC
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8012C700
  {uint32_t ea=c->r[3]+0x000061B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C704
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C708
  fcmp(c,0,c->f[1],c->f[0]); // 8012C70C
  if (!crb(c,1)) { goto L_8012C758; } // 8012C710
  c->r[3]=c->r[31]|c->r[31]; // 8012C714
  c->f[1]=c->f[31]; // 8012C718
  c->r[4]=R32(c->r[29]+0x000000C8u); // 8012C71C
  c->lr=0x8012C724u; f_800616C8(c); // 8012C720
  c->r[0]=R32(c->r[29]+0x000061B4u); // 8012C724
  cmpu(c,0,c->r[0],0x00000001u); // 8012C728
  if (!crb(c,2)) { goto L_8012C744; } // 8012C72C
  {uint32_t ea=c->r[29]+0x000061B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C730
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[1]); // 8012C734
  {uint32_t ea=c->r[2]+0xFFFF8C14u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C738
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 8012C73C
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 8012C740
L_8012C744:;
  cmpu(c,0,c->r[0],0x00000002u); // 8012C744
  if (!crb(c,2)) { goto L_8012C758; } // 8012C748
  {uint32_t ea=c->r[29]+0x000061B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C74C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8012C750
  c->f[28]=c->ps1[28]=S(c->f[28]+c->f[0]); // 8012C754
L_8012C758:;
  c->f[1]=c->f[28]; // 8012C758
  c->f[2]=c->f[29]; // 8012C75C
  {uint32_t ea=c->r[2]+0xFFFF8C18u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012C760
  c->r[3]=R32(c->r[29]+0x000000C8u); // 8012C764
  c->lr=0x8012C76Cu; f_8006117C(c); // 8012C768
  c->r[3]=c->r[1]+0x00000008u; // 8012C76C
  c->r[4]=c->r[30]|c->r[30]; // 8012C770
  c->lr=0x8012C778u; f_800549FC(c); // 8012C774
  c->r[3]=c->r[1]+0x00000008u; // 8012C778
  c->r[4]=R32(c->r[29]+0x000000C8u); // 8012C77C
  c->lr=0x8012C784u; f_800610D4(c); // 8012C780
  c->r[3]=c->r[1]+0x00000008u; // 8012C784
  c->r[4]=0u+0xFFFFFFFFu; // 8012C788
  c->lr=0x8012C790u; f_80047BD4(c); // 8012C78C
  c->f[1]=c->f[31]; // 8012C790
  c->f[2]=c->f[30]; // 8012C794
  c->r[3]=R32(c->r[29]+0x000000C8u); // 8012C798
  c->lr=0x8012C7A0u; f_800610F0(c); // 8012C79C
  c->r[3]=c->r[31]|c->r[31]; // 8012C7A0
  c->r[4]=R32(c->r[29]+0x000000C8u); // 8012C7A4
  c->lr=0x8012C7ACu; f_80060FD0(c); // 8012C7A8
  c->r[0]=0u+0x00000058u; // 8012C7AC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8012C7B0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8012C7B4
  c->r[0]=0u+0x00000048u; // 8012C7B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8012C7BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8012C7C0
  c->r[0]=0u+0x00000038u; // 8012C7C4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 8012C7C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 8012C7CC
  c->r[0]=0u+0x00000028u; // 8012C7D0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 8012C7D4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[28]=RF64(ea);} // 8012C7D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012C7DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012C7E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012C7E4
  c->r[0]=R32(c->r[1]+0x00000064u); // 8012C7E8
  c->lr=c->r[0]; // 8012C7EC
  c->r[1]=c->r[1]+0x00000060u; // 8012C7F0
  return; // 8012C7F4
}

// fn_8012C7F8
void f_8012C7F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012C7F8
  c->r[0]=c->lr; // 8012C7FC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8012C800
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8012C804
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8012C808
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8012C80C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8012C810
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 8012C814
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 8012C818
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8012C81C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8012C820
  W32(c->r[1]+0x00000024u,c->r[29]); // 8012C824
  c->r[29]=c->r[3]|c->r[3]; // 8012C828
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 8012C82C
  cmps(c,0,(int32_t)c->r[0],0); // 8012C830
  if (crb(c,0)) { goto L_8012C994; } // 8012C834
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C838
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C83C
  c->f[29]=c->ps1[29]=S(c->f[1]+c->f[0]); // 8012C840
  c->r[3]=R32(c->r[3]+0x000000C8u); // 8012C844
  {uint32_t ea=c->r[29]+0x000000E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C848
  c->lr=0x8012C850u; f_80060CAC(c); // 8012C84C
  c->r[30]=0u+0x00000000u; // 8012C850
  c->r[31]=c->r[29]+0x0000011Cu; // 8012C854
  {uint32_t ea=c->r[2]+0xFFFF8C04u; c->f[31]=c->ps1[31]=RF32(ea);} // 8012C858
L_8012C85C:;
  {uint32_t ea=c->r[29]+0x000000CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C85C
  {uint32_t ea=c->r[29]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C860
  c->f[30]=c->ps1[30]=S(c->f[1]+c->f[0]); // 8012C864
  c->r[0]=R32(c->r[29]+0x000061C0u); // 8012C868
  cmps(c,0,(int32_t)c->r[0],0); // 8012C86C
  if (crb(c,2)) { goto L_8012C934; } // 8012C870
  c->r[3]=c->r[1]+0x00000018u; // 8012C874
  c->r[4]=c->r[29]+0x000061C4u; // 8012C878
  c->lr=0x8012C880u; f_800549FC(c); // 8012C87C
  c->r[3]=c->r[29]|c->r[29]; // 8012C880
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[31]); // 8012C884
  c->f[2]=c->ps1[2]=S(c->f[29]-c->f[31]); // 8012C888
  c->r[4]=c->r[1]+0x00000018u; // 8012C88C
  c->r[5]=c->r[31]|c->r[31]; // 8012C890
  c->lr=0x8012C898u; f_8012C6B0(c); // 8012C894
  c->r[3]=c->r[1]+0x00000018u; // 8012C898
  c->r[4]=0u+0xFFFFFFFFu; // 8012C89C
  c->lr=0x8012C8A4u; f_80047BD4(c); // 8012C8A0
  c->r[3]=c->r[1]+0x00000014u; // 8012C8A4
  c->r[4]=c->r[29]+0x000061C4u; // 8012C8A8
  c->lr=0x8012C8B0u; f_800549FC(c); // 8012C8AC
  c->r[3]=c->r[29]|c->r[29]; // 8012C8B0
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[31]); // 8012C8B4
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[29]); // 8012C8B8
  c->r[4]=c->r[1]+0x00000014u; // 8012C8BC
  c->r[5]=c->r[31]|c->r[31]; // 8012C8C0
  c->lr=0x8012C8C8u; f_8012C6B0(c); // 8012C8C4
  c->r[3]=c->r[1]+0x00000014u; // 8012C8C8
  c->r[4]=0u+0xFFFFFFFFu; // 8012C8CC
  c->lr=0x8012C8D4u; f_80047BD4(c); // 8012C8D0
  c->r[3]=c->r[1]+0x00000010u; // 8012C8D4
  c->r[4]=c->r[29]+0x000061C4u; // 8012C8D8
  c->lr=0x8012C8E0u; f_800549FC(c); // 8012C8DC
  c->r[3]=c->r[29]|c->r[29]; // 8012C8E0
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[30]); // 8012C8E4
  c->f[2]=c->ps1[2]=S(c->f[29]-c->f[31]); // 8012C8E8
  c->r[4]=c->r[1]+0x00000010u; // 8012C8EC
  c->r[5]=c->r[31]|c->r[31]; // 8012C8F0
  c->lr=0x8012C8F8u; f_8012C6B0(c); // 8012C8F4
  c->r[3]=c->r[1]+0x00000010u; // 8012C8F8
  c->r[4]=0u+0xFFFFFFFFu; // 8012C8FC
  c->lr=0x8012C904u; f_80047BD4(c); // 8012C900
  c->r[3]=c->r[1]+0x0000000Cu; // 8012C904
  c->r[4]=c->r[29]+0x000061C4u; // 8012C908
  c->lr=0x8012C910u; f_800549FC(c); // 8012C90C
  c->r[3]=c->r[29]|c->r[29]; // 8012C910
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[30]); // 8012C914
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[29]); // 8012C918
  c->r[4]=c->r[1]+0x0000000Cu; // 8012C91C
  c->r[5]=c->r[31]|c->r[31]; // 8012C920
  c->lr=0x8012C928u; f_8012C6B0(c); // 8012C924
  c->r[3]=c->r[1]+0x0000000Cu; // 8012C928
  c->r[4]=0u+0xFFFFFFFFu; // 8012C92C
  c->lr=0x8012C934u; f_80047BD4(c); // 8012C930
L_8012C934:;
  c->r[3]=c->r[1]+0x00000008u; // 8012C934
  c->r[4]=c->r[29]+0x000000ECu; // 8012C938
  c->lr=0x8012C940u; f_800549FC(c); // 8012C93C
  c->r[3]=c->r[29]|c->r[29]; // 8012C940
  c->f[1]=c->f[30]; // 8012C944
  c->f[2]=c->f[29]; // 8012C948
  c->r[4]=c->r[1]+0x00000008u; // 8012C94C
  c->r[5]=c->r[31]|c->r[31]; // 8012C950
  c->lr=0x8012C958u; f_8012C6B0(c); // 8012C954
  c->r[3]=c->r[1]+0x00000008u; // 8012C958
  c->r[4]=0u+0xFFFFFFFFu; // 8012C95C
  c->lr=0x8012C964u; f_80047BD4(c); // 8012C960
  c->r[3]=c->r[31]|c->r[31]; // 8012C964
  {uint32_t ea=c->r[29]+0x000000E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012C968
  c->r[4]=R32(c->r[29]+0x000000C8u); // 8012C96C
  c->lr=0x8012C974u; f_80061720(c); // 8012C970
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[1]); // 8012C974
  {uint32_t ea=c->r[29]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012C978
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8012C97C
  c->f[29]=c->ps1[29]=S(c->f[29]+c->f[0]); // 8012C980
  c->r[31]=c->r[31]+0x00001000u; // 8012C984
  c->r[30]=c->r[30]+0x00000001u; // 8012C988
  cmpu(c,0,c->r[30],0x00000003u); // 8012C98C
  if (crb(c,0)) { IRQCHK(c); goto L_8012C85C; } // 8012C990
L_8012C994:;
  c->r[0]=0u+0x00000058u; // 8012C994
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8012C998
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8012C99C
  c->r[0]=0u+0x00000048u; // 8012C9A0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8012C9A4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8012C9A8
  c->r[0]=0u+0x00000038u; // 8012C9AC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 8012C9B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 8012C9B4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8012C9B8
  c->r[30]=R32(c->r[1]+0x00000028u); // 8012C9BC
  c->r[29]=R32(c->r[1]+0x00000024u); // 8012C9C0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8012C9C4
  c->lr=c->r[0]; // 8012C9C8
  c->r[1]=c->r[1]+0x00000060u; // 8012C9CC
  return; // 8012C9D0
}

// fn_8012C9D4
void f_8012C9D4(Ctx* __restrict c) {
  c->r[3]=R8(c->r[4]+0x00000000u); // 8012C9D4
  c->r[0]=c->r[3]+0xFFFFFFD0u; // 8012C9D8
  c->r[3]=R8(c->r[4]+0x00000001u); // 8012C9DC
  c->r[5]=c->r[3]+0xFFFFFFD0u; // 8012C9E0
  c->r[3]=R8(c->r[4]+0x00000002u); // 8012C9E4
  c->r[4]=c->r[3]+0xFFFFFFD0u; // 8012C9E8
  cmps(c,0,(int32_t)c->r[0],0); // 8012C9EC
  if (crb(c,0)) { goto L_8012C9FC; } // 8012C9F0
  cmps(c,0,(int32_t)c->r[0],10); // 8012C9F4
  if (crb(c,0)) { goto L_8012CA04; } // 8012C9F8
L_8012C9FC:;
  c->r[3]=0u+0xFFFFFFFFu; // 8012C9FC
  return; // 8012CA00
L_8012CA04:;
  cmps(c,0,(int32_t)c->r[5],0); // 8012CA04
  if (crb(c,0)) { goto L_8012CA14; } // 8012CA08
  cmps(c,0,(int32_t)c->r[5],10); // 8012CA0C
  if (crb(c,0)) { goto L_8012CA1C; } // 8012CA10
L_8012CA14:;
  c->r[3]=0u+0xFFFFFFFFu; // 8012CA14
  return; // 8012CA18
L_8012CA1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8012CA1C
  if (crb(c,0)) { goto L_8012CA2C; } // 8012CA20
  cmps(c,0,(int32_t)c->r[4],10); // 8012CA24
  if (crb(c,0)) { goto L_8012CA34; } // 8012CA28
L_8012CA2C:;
  c->r[3]=0u+0xFFFFFFFFu; // 8012CA2C
  return; // 8012CA30
L_8012CA34:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 8012CA34
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)10); // 8012CA38
  c->r[0]=c->r[4]+c->r[0]; // 8012CA3C
  c->r[3]=c->r[3]+c->r[0]; // 8012CA40
  return; // 8012CA44
}

// fn_8012CA48
void f_8012CA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012CA48
  c->r[0]=c->lr; // 8012CA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012CA50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012CA54
  c->r[31]=c->r[3]|c->r[3]; // 8012CA58
  c->r[4]=0u+0x00000003u; // 8012CA5C
  c->lr=0x8012CA64u; f_8012D0B0(c); // 8012CA60
  cmps(c,0,(int32_t)c->r[3],0); // 8012CA64
  if (!crb(c,2)) { goto L_8012CA74; } // 8012CA68
  c->r[3]=0u+0x00000000u; // 8012CA6C
  goto L_8012CAD8; // 8012CA70
L_8012CA74:;
  c->r[3]=0u+0x00000001u; // 8012CA74
  c->lr=0x8012CA7Cu; f_8005D714(c); // 8012CA78
  {uint32_t ea=c->r[31]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CA7C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8012CA80
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[1]);} // 8012CA84
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CA88
  fcmp(c,0,c->f[1],c->f[0]); // 8012CA8C
  if (!crb(c,0)) { goto L_8012CAD4; } // 8012CA90
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[0]);} // 8012CA94
  c->r[3]=c->r[31]|c->r[31]; // 8012CA98
  c->r[4]=0u+0x00000001u; // 8012CA9C
  c->lr=0x8012CAA4u; f_8012D0B0(c); // 8012CAA0
  cmps(c,0,(int32_t)c->r[3],0); // 8012CAA4
  if (crb(c,2)) { goto L_8012CAC8; } // 8012CAA8
  {uint32_t ea=c->r[31]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CAAC
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 8012CAB0
  c->r[3]=c->r[31]|c->r[31]; // 8012CAB4
  c->r[4]=0u+0x00000001u; // 8012CAB8
  c->lr=0x8012CAC0u; f_8012D1B0(c); // 8012CABC
  {uint32_t ea=c->r[31]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CAC0
  {uint32_t ea=c->r[31]+0x000000F0u; WF32(ea,c->f[0]);} // 8012CAC4
L_8012CAC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8012CAC8
  c->r[4]=0u+0x00000003u; // 8012CACC
  c->lr=0x8012CAD4u; f_8012D094(c); // 8012CAD0
L_8012CAD4:;
  c->r[3]=0u+0x00000001u; // 8012CAD4
L_8012CAD8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012CAD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012CADC
  c->lr=c->r[0]; // 8012CAE0
  c->r[1]=c->r[1]+0x00000010u; // 8012CAE4
  return; // 8012CAE8
}

// fn_8012CAEC
void f_8012CAEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012CAEC
  c->r[0]=c->lr; // 8012CAF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012CAF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012CAF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012CAFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012CB00
  c->r[29]=c->r[3]|c->r[3]; // 8012CB04
  c->r[4]=0u+0x00000005u; // 8012CB08
  c->lr=0x8012CB10u; f_8012D0B0(c); // 8012CB0C
  cmps(c,0,(int32_t)c->r[3],0); // 8012CB10
  if (crb(c,2)) { goto L_8012CBA8; } // 8012CB14
  c->r[3]=R32(c->r[29]+0x00000104u); // 8012CB18
  c->r[3]=c->r[3]+0x00000001u; // 8012CB1C
  W32(c->r[29]+0x00000104u,c->r[3]); // 8012CB20
  c->r[0]=0u+0x00000000u; // 8012CB24
  W32(c->r[29]+0x00000108u,c->r[0]); // 8012CB28
  c->r[0]=R32(c->r[29]+0x00000100u); // 8012CB2C
  cmpu(c,0,c->r[3],c->r[0]); // 8012CB30
  if (crb(c,0)) { goto L_8012CB9C; } // 8012CB34
  c->r[30]=0u+0x00000000u; // 8012CB38
  c->r[31]=c->r[29]+0x0000011Cu; // 8012CB3C
L_8012CB40:;
  c->r[3]=c->r[31]|c->r[31]; // 8012CB40
  c->r[0]=c->r[30]+0x00000001u; // 8012CB44
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CB48
  c->r[4]=c->r[29]+c->r[0]; // 8012CB4C
  c->r[4]=c->r[4]+0x0000011Cu; // 8012CB50
  c->r[5]=0u+0x00001000u; // 8012CB54
  c->lr=0x8012CB5Cu; f_80005FB4(c); // 8012CB58
  c->r[3]=c->r[31]|c->r[31]; // 8012CB5C
  c->r[4]=0u+0x00001000u; // 8012CB60
  c->lr=0x8012CB68u; f_80359BCC(c); // 8012CB64
  c->r[31]=c->r[31]+0x00001000u; // 8012CB68
  c->r[30]=c->r[30]+0x00000001u; // 8012CB6C
  cmpu(c,0,c->r[30],0x00000002u); // 8012CB70
  if (crb(c,0)) { IRQCHK(c); goto L_8012CB40; } // 8012CB74
  c->r[0]=rotl(c->r[30],12)&0xFFFFF000u; // 8012CB78
  c->r[3]=c->r[29]+c->r[0]; // 8012CB7C
  c->r[3]=c->r[3]+0x0000011Cu; // 8012CB80
  c->r[4]=0u+0x00000000u; // 8012CB84
  c->r[5]=0u+0x00001000u; // 8012CB88
  c->lr=0x8012CB90u; f_800060B8(c); // 8012CB8C
  c->r[3]=R32(c->r[29]+0x00000104u); // 8012CB90
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8012CB94
  W32(c->r[29]+0x00000104u,c->r[0]); // 8012CB98
L_8012CB9C:;
  c->r[3]=c->r[29]|c->r[29]; // 8012CB9C
  c->r[4]=0u+0x00000005u; // 8012CBA0
  c->lr=0x8012CBA8u; f_8012D094(c); // 8012CBA4
L_8012CBA8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012CBA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012CBAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012CBB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012CBB4
  c->lr=c->r[0]; // 8012CBB8
  c->r[1]=c->r[1]+0x00000020u; // 8012CBBC
  return; // 8012CBC0
}

// fn_8012CBC4
void f_8012CBC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012CBC4
  c->r[0]=c->lr; // 8012CBC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012CBCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012CBD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012CBD4
  c->r[30]=c->r[3]|c->r[3]; // 8012CBD8
  c->r[31]=R32(c->r[4]+0x00000000u); // 8012CBDC
  c->r[0]=R32(c->r[3]+0x00000104u); // 8012CBE0
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CBE4
  c->r[4]=c->r[3]+c->r[0]; // 8012CBE8
  c->r[0]=R32(c->r[3]+0x00000108u); // 8012CBEC
  c->r[3]=c->r[4]+c->r[0]; // 8012CBF0
  c->r[3]=c->r[3]+0x0000011Cu; // 8012CBF4
  c->r[4]=c->r[31]|c->r[31]; // 8012CBF8
  c->lr=0x8012CC00u; f_80060EA0(c); // 8012CBFC
  cmps(c,0,(int32_t)c->r[3],0); // 8012CC00
  if (!crb(c,2)) { goto L_8012CC90; } // 8012CC04
  c->r[0]=R8(c->r[31]+0x00000000u); // 8012CC08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8012CC0C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8012CC10
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 8012CC14
  c->r[0]=R8(c->r[31]+0x00000001u); // 8012CC18
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8012CC1C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8012CC20
  c->r[0]=c->r[3]|c->r[0]; // 8012CC24
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8012CC28
  c->lr=0x8012CC30u; f_80110BD8(c); // 8012CC2C
  W32(c->r[30]+0x00000110u,c->r[3]); // 8012CC30
  c->r[5]=0u+0x00000000u; // 8012CC34
  goto L_8012CC68; // 8012CC38
L_8012CC3C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8012CC3C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8012CC40
  c->r[0]=R32(c->r[30]+0x00000104u); // 8012CC44
  c->r[3]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CC48
  c->r[0]=R32(c->r[30]+0x00000108u); // 8012CC4C
  c->r[3]=c->r[30]+c->r[3]; // 8012CC50
  c->r[0]=c->r[5]+c->r[0]; // 8012CC54
  c->r[3]=c->r[3]+c->r[0]; // 8012CC58
  W8(c->r[3]+0x0000011Cu,c->r[4]); // 8012CC5C
  c->r[5]=c->r[5]+0x00000001u; // 8012CC60
  c->r[31]=c->r[31]+0x00000001u; // 8012CC64
L_8012CC68:;
  c->r[3]=R32(c->r[30]+0x00000110u); // 8012CC68
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[3]); // 8012CC6C
  if (crb(c,0)) { IRQCHK(c); goto L_8012CC3C; } // 8012CC70
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8012CC74
  c->r[0]=c->r[0]+c->r[3]; // 8012CC78
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 8012CC7C
  c->r[0]=R32(c->r[30]+0x00000108u); // 8012CC80
  c->r[0]=c->r[0]+c->r[3]; // 8012CC84
  W32(c->r[30]+0x00000108u,c->r[0]); // 8012CC88
  goto L_8012CCA8; // 8012CC8C
L_8012CC90:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 8012CC90
  c->r[0]=c->r[0]+c->r[3]; // 8012CC94
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 8012CC98
  c->r[0]=R32(c->r[30]+0x00000108u); // 8012CC9C
  c->r[0]=c->r[0]+c->r[3]; // 8012CCA0
  W32(c->r[30]+0x00000108u,c->r[0]); // 8012CCA4
L_8012CCA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012CCA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012CCAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012CCB0
  c->lr=c->r[0]; // 8012CCB4
  c->r[1]=c->r[1]+0x00000010u; // 8012CCB8
  return; // 8012CCBC
}

// fn_8012CCC0
void f_8012CCC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012CCC0
  c->r[0]=c->lr; // 8012CCC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012CCC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012CCCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012CCD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012CCD4
  c->r[29]=c->r[3]|c->r[3]; // 8012CCD8
  c->r[30]=c->r[4]|c->r[4]; // 8012CCDC
  c->r[31]=R32(c->r[4]+0x00000000u); // 8012CCE0
  c->r[0]=R8(c->r[31]+0x00000000u); // 8012CCE4
  cmps(c,0,(int32_t)c->r[0],37); // 8012CCE8
  if (crb(c,2)) { goto L_8012CD0C; } // 8012CCEC
  if (!crb(c,0)) { goto L_8012CE8C; } // 8012CCF0
  cmps(c,0,(int32_t)c->r[0],10); // 8012CCF4
  if (crb(c,2)) { goto L_8012CD00; } // 8012CCF8
  goto L_8012CE8C; // 8012CCFC
L_8012CD00:;
  c->r[4]=0u+0x00000005u; // 8012CD00
  c->lr=0x8012CD08u; f_8012D07C(c); // 8012CD04
  goto L_8012CE8C; // 8012CD08
L_8012CD0C:;
  c->r[4]=R8(c->r[31]+0x00000001u); // 8012CD0C
  c->r[0]=c->r[4]+0xFFFFFF9Eu; // 8012CD10
  cmpu(c,0,c->r[0],0x00000015u); // 8012CD14
  if (crb(c,1)) { goto L_8012CE8C; } // 8012CD18
  c->r[4]=0u+0x80470000u; // 8012CD1C
  c->r[4]=c->r[4]+0xFFFF8070u; // 8012CD20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8012CD24
  c->r[4]=R32(c->r[4]+c->r[0]); // 8012CD28
  c->ctr=c->r[4]; // 8012CD2C
  if (true) { switch (c->ctr) { case 0x8012CD34u: goto L_8012CD34; case 0x8012CD7Cu: goto L_8012CD7C; case 0x8012CDC4u: goto L_8012CDC4; case 0x8012CE0Cu: goto L_8012CE0C; case 0x8012CE8Cu: goto L_8012CE8C; default: break; } dispatch(c,c->ctr); return; } // 8012CD30
L_8012CD34:;
  c->r[31]=c->r[31]+0x00000002u; // 8012CD34
  c->r[5]=R32(c->r[3]+0x0000010Cu); // 8012CD38
  c->r[4]=R32(c->r[3]+0x00000110u); // 8012CD3C
  c->r[0]=addc(c,~c->r[4],0x00000002u,1); // 8012CD40
  c->r[0]=c->r[5]+c->r[0]; // 8012CD44
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 8012CD48
  c->r[0]=R32(c->r[3]+0x00000108u); // 8012CD4C
  c->r[4]=c->r[0]-c->r[4]; // 8012CD50
  W32(c->r[3]+0x00000108u,c->r[4]); // 8012CD54
  c->r[5]=0u+0x00000000u; // 8012CD58
  c->r[0]=R32(c->r[3]+0x00000104u); // 8012CD5C
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CD60
  c->r[0]=c->r[3]+c->r[0]; // 8012CD64
  c->r[4]=c->r[0]+c->r[4]; // 8012CD68
  W8(c->r[4]+0x0000011Cu,c->r[5]); // 8012CD6C
  c->r[4]=0u+0x00000006u; // 8012CD70
  c->lr=0x8012CD78u; f_8012D07C(c); // 8012CD74
  goto L_8012CE8C; // 8012CD78
L_8012CD7C:;
  c->r[31]=c->r[31]+0x00000002u; // 8012CD7C
  c->r[5]=R32(c->r[3]+0x0000010Cu); // 8012CD80
  c->r[4]=R32(c->r[3]+0x00000110u); // 8012CD84
  c->r[0]=addc(c,~c->r[4],0x00000002u,1); // 8012CD88
  c->r[0]=c->r[5]+c->r[0]; // 8012CD8C
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 8012CD90
  c->r[0]=R32(c->r[3]+0x00000108u); // 8012CD94
  c->r[4]=c->r[0]-c->r[4]; // 8012CD98
  W32(c->r[3]+0x00000108u,c->r[4]); // 8012CD9C
  c->r[5]=0u+0x00000000u; // 8012CDA0
  c->r[0]=R32(c->r[3]+0x00000104u); // 8012CDA4
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CDA8
  c->r[0]=c->r[3]+c->r[0]; // 8012CDAC
  c->r[4]=c->r[0]+c->r[4]; // 8012CDB0
  W8(c->r[4]+0x0000011Cu,c->r[5]); // 8012CDB4
  c->r[4]=0u+0x00000007u; // 8012CDB8
  c->lr=0x8012CDC0u; f_8012D07C(c); // 8012CDBC
  goto L_8012CE8C; // 8012CDC0
L_8012CDC4:;
  c->r[31]=c->r[31]+0x00000002u; // 8012CDC4
  c->r[5]=R32(c->r[3]+0x0000010Cu); // 8012CDC8
  c->r[4]=R32(c->r[3]+0x00000110u); // 8012CDCC
  c->r[0]=addc(c,~c->r[4],0x00000002u,1); // 8012CDD0
  c->r[0]=c->r[5]+c->r[0]; // 8012CDD4
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 8012CDD8
  c->r[0]=R32(c->r[3]+0x00000108u); // 8012CDDC
  c->r[4]=c->r[0]-c->r[4]; // 8012CDE0
  W32(c->r[3]+0x00000108u,c->r[4]); // 8012CDE4
  c->r[5]=0u+0x00000000u; // 8012CDE8
  c->r[0]=R32(c->r[3]+0x00000104u); // 8012CDEC
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CDF0
  c->r[0]=c->r[3]+c->r[0]; // 8012CDF4
  c->r[4]=c->r[0]+c->r[4]; // 8012CDF8
  W8(c->r[4]+0x0000011Cu,c->r[5]); // 8012CDFC
  c->r[4]=0u+0x00000002u; // 8012CE00
  c->lr=0x8012CE08u; f_8012D07C(c); // 8012CE04
  goto L_8012CE8C; // 8012CE08
L_8012CE0C:;
  c->r[4]=c->r[31]+0x00000002u; // 8012CE0C
  c->lr=0x8012CE14u; f_8012C9D4(c); // 8012CE10
  cmps(c,0,(int32_t)c->r[3],-1); // 8012CE14
  if (!crb(c,1)) { goto L_8012CE3C; } // 8012CE18
  {uint32_t ea=c->r[2]+0xFFFF8C20u; c->f[1]=RF64(ea);} // 8012CE1C
  c->r[0]=c->r[3]^0x80000000u; // 8012CE20
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8012CE24
  c->r[0]=0u+0x43300000u; // 8012CE28
  W32(c->r[1]+0x00000008u,c->r[0]); // 8012CE2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8012CE30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8012CE34
  {uint32_t ea=c->r[29]+0x000000F4u; WF32(ea,c->f[0]);} // 8012CE38
L_8012CE3C:;
  {uint32_t ea=c->r[29]+0x000000F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CE3C
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 8012CE40
  c->r[31]=c->r[31]+0x00000005u; // 8012CE44
  c->r[4]=R32(c->r[29]+0x0000010Cu); // 8012CE48
  c->r[3]=R32(c->r[29]+0x00000110u); // 8012CE4C
  c->r[0]=addc(c,~c->r[3],0x00000005u,1); // 8012CE50
  c->r[0]=c->r[4]+c->r[0]; // 8012CE54
  W32(c->r[29]+0x0000010Cu,c->r[0]); // 8012CE58
  c->r[0]=R32(c->r[29]+0x00000108u); // 8012CE5C
  c->r[3]=c->r[0]-c->r[3]; // 8012CE60
  W32(c->r[29]+0x00000108u,c->r[3]); // 8012CE64
  c->r[4]=0u+0x00000000u; // 8012CE68
  c->r[0]=R32(c->r[29]+0x00000104u); // 8012CE6C
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012CE70
  c->r[0]=c->r[29]+c->r[0]; // 8012CE74
  c->r[3]=c->r[0]+c->r[3]; // 8012CE78
  W8(c->r[3]+0x0000011Cu,c->r[4]); // 8012CE7C
  c->r[3]=c->r[29]|c->r[29]; // 8012CE80
  c->r[4]=0u+0x00000003u; // 8012CE84
  c->lr=0x8012CE8Cu; f_8012D07C(c); // 8012CE88
L_8012CE8C:;
  c->r[3]=0u+0x00000001u; // 8012CE8C
  c->lr=0x8012CE94u; f_8005D714(c); // 8012CE90
  {uint32_t ea=c->r[29]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CE94
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8012CE98
  {uint32_t ea=c->r[29]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CE9C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8012CEA0
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[0]);} // 8012CEA4
  W32(c->r[30]+0x00000000u,c->r[31]); // 8012CEA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012CEAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012CEB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012CEB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012CEB8
  c->lr=c->r[0]; // 8012CEBC
  c->r[1]=c->r[1]+0x00000020u; // 8012CEC0
  return; // 8012CEC4
}

// fn_8012CEC8
void f_8012CEC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012CEC8
  c->r[0]=c->lr; // 8012CECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012CED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012CED4
  c->r[31]=c->r[3]|c->r[3]; // 8012CED8
  c->r[0]=R8(c->r[4]+0x00000000u); // 8012CEDC
  cmps(c,0,(int32_t)c->r[0],0); // 8012CEE0
  if (crb(c,2)) { goto L_8012CEF4; } // 8012CEE4
  c->r[0]=R32(c->r[3]+0x0000010Cu); // 8012CEE8
  cmpu(c,0,c->r[0],0x00001000u); // 8012CEEC
  if (crb(c,0)) { goto L_8012CF1C; } // 8012CEF0
L_8012CEF4:;
  c->r[3]=c->r[31]|c->r[31]; // 8012CEF4
  c->r[4]=0u+0x00000008u; // 8012CEF8
  c->lr=0x8012CF00u; f_8012D07C(c); // 8012CEFC
  c->r[0]=R32(c->r[31]+0x0000010Cu); // 8012CF00
  c->r[3]=R32(c->r[31]+0x00000110u); // 8012CF04
  c->r[0]=c->r[0]+c->r[3]; // 8012CF08
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 8012CF0C
  c->r[0]=R32(c->r[31]+0x00000108u); // 8012CF10
  c->r[0]=c->r[0]+c->r[3]; // 8012CF14
  W32(c->r[31]+0x00000108u,c->r[0]); // 8012CF18
L_8012CF1C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012CF1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012CF20
  c->lr=c->r[0]; // 8012CF24
  c->r[1]=c->r[1]+0x00000010u; // 8012CF28
  return; // 8012CF2C
}

// fn_8012CF30
void f_8012CF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012CF30
  c->r[0]=c->lr; // 8012CF34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012CF38
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8012CF3C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8012CF40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012CF44
  c->r[31]=c->r[3]|c->r[3]; // 8012CF48
  c->lr=0x8012CF50u; f_8012FBA8(c); // 8012CF4C
  c->r[0]=R32(c->r[31]+0x00003124u); // 8012CF50
  cmps(c,0,(int32_t)c->r[0],0); // 8012CF54
  if (crb(c,2)) { goto L_8012D05C; } // 8012CF58
  c->r[0]=R32(c->r[31]+0x000000C4u); // 8012CF5C
  cmps(c,0,(int32_t)c->r[0],0); // 8012CF60
  if (crb(c,2)) { goto L_8012D05C; } // 8012CF64
  c->r[3]=c->r[31]|c->r[31]; // 8012CF68
  c->r[4]=0u+0x00000000u; // 8012CF6C
  c->lr=0x8012CF74u; f_8012D0B0(c); // 8012CF70
  cmps(c,0,(int32_t)c->r[3],0); // 8012CF74
  if (crb(c,2)) { goto L_8012D05C; } // 8012CF78
  c->r[3]=c->r[31]|c->r[31]; // 8012CF7C
  c->lr=0x8012CF84u; f_8012C7F8(c); // 8012CF80
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[31]=c->ps1[31]=RF32(ea);} // 8012CF84
L_8012CF88:;
  c->r[3]=c->r[31]|c->r[31]; // 8012CF88
  c->lr=0x8012CF90u; f_8012CA48(c); // 8012CF8C
  cmps(c,0,(int32_t)c->r[3],0); // 8012CF90
  if (!crb(c,2)) { goto L_8012D05C; } // 8012CF94
  c->r[3]=c->r[31]|c->r[31]; // 8012CF98
  c->r[4]=0u+0x00000008u; // 8012CF9C
  c->lr=0x8012CFA4u; f_8012D0B0(c); // 8012CFA0
  cmps(c,0,(int32_t)c->r[3],0); // 8012CFA4
  if (!crb(c,2)) { goto L_8012D05C; } // 8012CFA8
  c->r[3]=c->r[31]|c->r[31]; // 8012CFAC
  c->r[4]=0u+0x00000006u; // 8012CFB0
  c->lr=0x8012CFB8u; f_8012D0B0(c); // 8012CFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8012CFB8
  if (!crb(c,2)) { goto L_8012D05C; } // 8012CFBC
  c->r[3]=c->r[31]|c->r[31]; // 8012CFC0
  c->r[4]=0u+0x00000007u; // 8012CFC4
  c->lr=0x8012CFCCu; f_8012D0B0(c); // 8012CFC8
  cmps(c,0,(int32_t)c->r[3],0); // 8012CFCC
  if (!crb(c,2)) { goto L_8012D05C; } // 8012CFD0
  c->r[3]=c->r[31]|c->r[31]; // 8012CFD4
  c->r[4]=0u+0x00000002u; // 8012CFD8
  c->lr=0x8012CFE0u; f_8012D0B0(c); // 8012CFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8012CFE0
  if (crb(c,2)) { goto L_8012CFEC; } // 8012CFE4
  goto L_8012D05C; // 8012CFE8
L_8012CFEC:;
  c->r[3]=c->r[31]|c->r[31]; // 8012CFEC
  c->lr=0x8012CFF4u; f_8012CAEC(c); // 8012CFF0
  c->r[3]=0u+0x00000001u; // 8012CFF4
  c->lr=0x8012CFFCu; f_8005D714(c); // 8012CFF8
  {uint32_t ea=c->r[31]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012CFFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8012D000
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 8012D004
  fcmp(c,0,c->f[0],c->f[31]); // 8012D008
  if (!crb(c,0)) { goto L_8012D048; } // 8012D00C
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[31]);} // 8012D010
  c->r[3]=R32(c->r[31]+0x00003124u); // 8012D014
  c->r[0]=R32(c->r[31]+0x0000010Cu); // 8012D018
  c->r[0]=c->r[3]+c->r[0]; // 8012D01C
  W32(c->r[31]+0x0000311Cu,c->r[0]); // 8012D020
  c->r[3]=c->r[31]|c->r[31]; // 8012D024
  c->r[4]=c->r[31]+0x0000311Cu; // 8012D028
  c->lr=0x8012D030u; f_8012CBC4(c); // 8012D02C
  c->r[3]=c->r[31]|c->r[31]; // 8012D030
  c->r[4]=c->r[31]+0x0000311Cu; // 8012D034
  c->lr=0x8012D03Cu; f_8012CCC0(c); // 8012D038
  c->r[3]=c->r[31]|c->r[31]; // 8012D03C
  c->r[4]=R32(c->r[31]+0x0000311Cu); // 8012D040
  c->lr=0x8012D048u; f_8012CEC8(c); // 8012D044
L_8012D048:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D048
  c->r[4]=0u+0x00000004u; // 8012D04C
  c->lr=0x8012D054u; f_8012D0B0(c); // 8012D050
  cmps(c,0,(int32_t)c->r[3],0); // 8012D054
  if (!crb(c,2)) { IRQCHK(c); goto L_8012CF88; } // 8012D058
L_8012D05C:;
  c->r[0]=0u+0x00000018u; // 8012D05C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8012D060
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8012D064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D068
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012D06C
  c->lr=c->r[0]; // 8012D070
  c->r[1]=c->r[1]+0x00000020u; // 8012D074
  return; // 8012D078
}

// fn_8012D07C
void f_8012D07C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000C0u); // 8012D07C
  c->r[0]=0u+0x00000001u; // 8012D080
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012D084
  c->r[0]=c->r[5]|c->r[0]; // 8012D088
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8012D08C
  return; // 8012D090
}

// fn_8012D094
void f_8012D094(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000C0u); // 8012D094
  c->r[0]=0u+0x00000001u; // 8012D098
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012D09C
  c->r[0]=~(c->r[0]|c->r[0]); // 8012D0A0
  c->r[0]=c->r[5]&c->r[0]; // 8012D0A4
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8012D0A8
  return; // 8012D0AC
}

// fn_8012D0B0
void f_8012D0B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 8012D0B0
  c->r[0]=0u+0x00000001u; // 8012D0B4
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012D0B8
  c->r[3]=c->r[3]&c->r[0]; // 8012D0BC
  c->r[0]=0u-c->r[3]; // 8012D0C0
  c->r[0]=c->r[0]|c->r[3]; // 8012D0C4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012D0C8
  return; // 8012D0CC
}

// fn_8012D0D0
void f_8012D0D0(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8012D0D0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 8012D0D4
  return; // 8012D0D8
}

// fn_8012D0DC
void f_8012D0DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D0DC
  c->r[0]=c->lr; // 8012D0E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D0E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D0E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012D0EC
  c->r[30]=c->r[3]|c->r[3]; // 8012D0F0
  c->r[31]=c->r[4]|c->r[4]; // 8012D0F4
  c->lr=0x8012D0FCu; f_8012D0D0(c); // 8012D0F8
  c->r[3]=c->r[30]|c->r[30]; // 8012D0FC
  c->r[4]=0u+0x00000000u; // 8012D100
  c->lr=0x8012D108u; f_8012D07C(c); // 8012D104
  c->r[0]=R32(c->r[30]+0x00003120u); // 8012D108
  W32(c->r[30]+0x00003124u,c->r[0]); // 8012D10C
  c->r[3]=0u+0x00000001u; // 8012D110
  W32(c->r[30]+0x000000C4u,c->r[3]); // 8012D114
  cmps(c,0,(int32_t)c->r[31],0); // 8012D118
  if (crb(c,2)) { goto L_8012D198; } // 8012D11C
  c->r[0]=0u+0x00000000u; // 8012D120
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 8012D124
  W32(c->r[30]+0x00000108u,c->r[0]); // 8012D128
  c->r[0]=R32(c->r[30]+0x00003128u); // 8012D12C
  cmps(c,0,(int32_t)c->r[0],0); // 8012D130
  if (crb(c,2)) { goto L_8012D194; } // 8012D134
  c->r[0]=R32(c->r[30]+0x00000104u); // 8012D138
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012D13C
  c->r[3]=c->r[30]+c->r[0]; // 8012D140
  c->r[31]=c->r[3]+0x0000011Cu; // 8012D144
  c->r[3]=c->r[31]|c->r[31]; // 8012D148
  c->lr=0x8012D150u; f_802F0250(c); // 8012D14C
  cmpu(c,0,c->r[3],0x00000FFFu); // 8012D150
  if (crb(c,0)) { goto L_8012D15C; } // 8012D154
  c->r[3]=0u+0x00000FFEu; // 8012D158
L_8012D15C:;
  c->r[0]=0u+0x0000000Au; // 8012D15C
  W8(c->r[31]+c->r[3],c->r[0]); // 8012D160
  c->r[4]=0u+0x00000000u; // 8012D164
  c->r[0]=R32(c->r[30]+0x00000104u); // 8012D168
  c->r[0]=rotl(c->r[0],12)&0xFFFFF000u; // 8012D16C
  c->r[0]=c->r[30]+c->r[0]; // 8012D170
  c->r[3]=c->r[0]+c->r[3]; // 8012D174
  W8(c->r[3]+0x0000011Du,c->r[4]); // 8012D178
  c->r[3]=c->r[30]|c->r[30]; // 8012D17C
  c->r[4]=0u+0x00000005u; // 8012D180
  c->lr=0x8012D188u; f_8012D07C(c); // 8012D184
  c->r[3]=c->r[30]|c->r[30]; // 8012D188
  c->lr=0x8012D190u; f_8012CAEC(c); // 8012D18C
  goto L_8012D198; // 8012D190
L_8012D194:;
  W32(c->r[30]+0x00003128u,c->r[3]); // 8012D194
L_8012D198:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D198
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012D19C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D1A0
  c->lr=c->r[0]; // 8012D1A4
  c->r[1]=c->r[1]+0x00000010u; // 8012D1A8
  return; // 8012D1AC
}

// fn_8012D1B0
void f_8012D1B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D1B0
  c->r[0]=c->lr; // 8012D1B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012D1B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012D1BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012D1C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012D1C4
  c->r[29]=c->r[3]|c->r[3]; // 8012D1C8
  cmps(c,0,(int32_t)c->r[4],0); // 8012D1CC
  if (crb(c,2)) { goto L_8012D1E4; } // 8012D1D0
  c->r[0]=0u+0x00000000u; // 8012D1D4
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 8012D1D8
  c->r[4]=0u+0x00000000u; // 8012D1DC
  c->lr=0x8012D1E4u; f_8012D094(c); // 8012D1E0
L_8012D1E4:;
  c->r[0]=0u+0x00000000u; // 8012D1E4
  W32(c->r[29]+0x00000108u,c->r[0]); // 8012D1E8
  W32(c->r[29]+0x00000104u,c->r[0]); // 8012D1EC
  {uint32_t ea=c->r[2]+0xFFFF8C28u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D1F0
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[0]);} // 8012D1F4
  {uint32_t ea=c->r[29]+0x00000118u; WF32(ea,c->f[0]);} // 8012D1F8
  W32(c->r[29]+0x00003128u,c->r[0]); // 8012D1FC
  c->r[30]=0u+0x00000000u; // 8012D200
  c->r[31]=c->r[29]+0x0000011Cu; // 8012D204
L_8012D208:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D208
  c->r[4]=0u+0x00000000u; // 8012D20C
  c->r[5]=0u+0x00001000u; // 8012D210
  c->lr=0x8012D218u; f_800060B8(c); // 8012D214
  c->r[31]=c->r[31]+0x00001000u; // 8012D218
  c->r[30]=c->r[30]+0x00000001u; // 8012D21C
  cmpu(c,0,c->r[30],0x00000003u); // 8012D220
  if (crb(c,0)) { IRQCHK(c); goto L_8012D208; } // 8012D224
  c->r[3]=c->r[29]|c->r[29]; // 8012D228
  c->r[4]=0u+0x00000001u; // 8012D22C
  c->lr=0x8012D234u; f_8012D094(c); // 8012D230
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012D234
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012D238
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012D23C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012D240
  c->lr=c->r[0]; // 8012D244
  c->r[1]=c->r[1]+0x00000020u; // 8012D248
  return; // 8012D24C
}

// fn_8012D250
void f_8012D250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D250
  c->r[0]=c->lr; // 8012D254
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D25C
  c->r[31]=c->r[3]|c->r[3]; // 8012D260
  c->r[4]=0u+0x00000008u; // 8012D264
  c->lr=0x8012D26Cu; f_8012D094(c); // 8012D268
  c->r[3]=c->r[31]|c->r[31]; // 8012D26C
  c->r[4]=0u+0x00000006u; // 8012D270
  c->lr=0x8012D278u; f_8012D094(c); // 8012D274
  c->r[3]=c->r[31]|c->r[31]; // 8012D278
  c->r[4]=0u+0x00000007u; // 8012D27C
  c->lr=0x8012D284u; f_8012D094(c); // 8012D280
  c->r[3]=c->r[31]|c->r[31]; // 8012D284
  c->r[4]=0u+0x00000002u; // 8012D288
  c->lr=0x8012D290u; f_8012D094(c); // 8012D28C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D290
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D294
  c->lr=c->r[0]; // 8012D298
  c->r[1]=c->r[1]+0x00000010u; // 8012D29C
  return; // 8012D2A0
}

// fn_8012D2A4
void f_8012D2A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D2A4
  c->r[0]=c->lr; // 8012D2A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D2AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D2B0
  c->r[31]=c->r[3]|c->r[3]; // 8012D2B4
  cmps(c,0,(int32_t)c->r[4],0); // 8012D2B8
  if (crb(c,2)) { goto L_8012D2E0; } // 8012D2BC
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D2C0
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 8012D2C4
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8012D2C8
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 8012D2CC
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 8012D2D0
  c->r[4]=0u+0x00000004u; // 8012D2D4
  c->lr=0x8012D2DCu; f_8012D07C(c); // 8012D2D8
  goto L_8012D310; // 8012D2DC
L_8012D2E0:;
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D2E0
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 8012D2E4
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D2E8
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8012D2EC
  {uint32_t ea=c->r[2]+0xFFFF8C00u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D2F0
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 8012D2F4
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[0]);} // 8012D2F8
  c->r[4]=0u+0x00000004u; // 8012D2FC
  c->lr=0x8012D304u; f_8012D094(c); // 8012D300
  c->r[3]=c->r[31]|c->r[31]; // 8012D304
  c->r[4]=0u+0x00000006u; // 8012D308
  c->lr=0x8012D310u; f_8012D094(c); // 8012D30C
L_8012D310:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D310
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D314
  c->lr=c->r[0]; // 8012D318
  c->r[1]=c->r[1]+0x00000010u; // 8012D31C
  return; // 8012D320
}

// fn_8012D324
void f_8012D324(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D324
  c->r[0]=c->lr; // 8012D328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D32C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D330
  c->r[31]=c->r[3]|c->r[3]; // 8012D334
  c->r[4]=0u+0x00000000u; // 8012D338
  c->lr=0x8012D340u; f_8012D0B0(c); // 8012D33C
  cmps(c,0,(int32_t)c->r[3],0); // 8012D340
  if (!crb(c,2)) { goto L_8012D350; } // 8012D344
  c->r[3]=0u+0x00000001u; // 8012D348
  goto L_8012D368; // 8012D34C
L_8012D350:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D350
  c->r[4]=0u+0x00000008u; // 8012D354
  c->lr=0x8012D35Cu; f_8012D0B0(c); // 8012D358
  c->r[0]=0u-c->r[3]; // 8012D35C
  c->r[0]=c->r[0]|c->r[3]; // 8012D360
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012D364
L_8012D368:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D368
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D36C
  c->lr=c->r[0]; // 8012D370
  c->r[1]=c->r[1]+0x00000010u; // 8012D374
  return; // 8012D378
}

// fn_8012D37C
void f_8012D37C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D37C
  c->r[0]=c->lr; // 8012D380
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D388
  c->r[31]=c->r[3]|c->r[3]; // 8012D38C
  c->r[4]=0u+0x00000000u; // 8012D390
  c->lr=0x8012D398u; f_8012D0B0(c); // 8012D394
  cmps(c,0,(int32_t)c->r[3],0); // 8012D398
  if (!crb(c,2)) { goto L_8012D3A8; } // 8012D39C
  c->r[3]=0u+0x00000001u; // 8012D3A0
  goto L_8012D3C0; // 8012D3A4
L_8012D3A8:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D3A8
  c->r[4]=0u+0x00000002u; // 8012D3AC
  c->lr=0x8012D3B4u; f_8012D0B0(c); // 8012D3B0
  c->r[0]=0u-c->r[3]; // 8012D3B4
  c->r[0]=c->r[0]|c->r[3]; // 8012D3B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012D3BC
L_8012D3C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D3C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D3C4
  c->lr=c->r[0]; // 8012D3C8
  c->r[1]=c->r[1]+0x00000010u; // 8012D3CC
  return; // 8012D3D0
}

// fn_8012D3D4
void f_8012D3D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D3D4
  c->r[0]=c->lr; // 8012D3D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D3DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D3E0
  c->r[31]=c->r[3]|c->r[3]; // 8012D3E4
  c->r[4]=0u+0x00000000u; // 8012D3E8
  c->lr=0x8012D3F0u; f_8012D0B0(c); // 8012D3EC
  cmps(c,0,(int32_t)c->r[3],0); // 8012D3F0
  if (!crb(c,2)) { goto L_8012D400; } // 8012D3F4
  c->r[3]=0u+0x00000001u; // 8012D3F8
  goto L_8012D418; // 8012D3FC
L_8012D400:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D400
  c->r[4]=0u+0x00000006u; // 8012D404
  c->lr=0x8012D40Cu; f_8012D0B0(c); // 8012D408
  c->r[0]=0u-c->r[3]; // 8012D40C
  c->r[0]=c->r[0]|c->r[3]; // 8012D410
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012D414
L_8012D418:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D418
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D41C
  c->lr=c->r[0]; // 8012D420
  c->r[1]=c->r[1]+0x00000010u; // 8012D424
  return; // 8012D428
}

// fn_8012D42C
void f_8012D42C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D42C
  c->r[0]=c->lr; // 8012D430
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D438
  c->r[31]=c->r[3]|c->r[3]; // 8012D43C
  c->r[4]=0u+0x00000000u; // 8012D440
  c->lr=0x8012D448u; f_8012D0B0(c); // 8012D444
  cmps(c,0,(int32_t)c->r[3],0); // 8012D448
  if (!crb(c,2)) { goto L_8012D458; } // 8012D44C
  c->r[3]=0u+0x00000001u; // 8012D450
  goto L_8012D470; // 8012D454
L_8012D458:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D458
  c->r[4]=0u+0x00000007u; // 8012D45C
  c->lr=0x8012D464u; f_8012D0B0(c); // 8012D460
  c->r[0]=0u-c->r[3]; // 8012D464
  c->r[0]=c->r[0]|c->r[3]; // 8012D468
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012D46C
L_8012D470:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D470
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D474
  c->lr=c->r[0]; // 8012D478
  c->r[1]=c->r[1]+0x00000010u; // 8012D47C
  return; // 8012D480
}

// fn_8012D484
void f_8012D484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D484
  c->r[0]=c->lr; // 8012D488
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D48C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D490
  c->r[31]=c->r[3]|c->r[3]; // 8012D494
  c->r[4]=0u+0x00000000u; // 8012D498
  c->lr=0x8012D4A0u; f_8012D0B0(c); // 8012D49C
  cmps(c,0,(int32_t)c->r[3],0); // 8012D4A0
  if (!crb(c,2)) { goto L_8012D4B0; } // 8012D4A4
  c->r[3]=0u+0x00000001u; // 8012D4A8
  goto L_8012D4C8; // 8012D4AC
L_8012D4B0:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D4B0
  c->r[4]=0u+0x00000003u; // 8012D4B4
  c->lr=0x8012D4BCu; f_8012D0B0(c); // 8012D4B8
  c->r[0]=0u-c->r[3]; // 8012D4BC
  c->r[0]=c->r[0]|c->r[3]; // 8012D4C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012D4C4
L_8012D4C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D4C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D4CC
  c->lr=c->r[0]; // 8012D4D0
  c->r[1]=c->r[1]+0x00000010u; // 8012D4D4
  return; // 8012D4D8
}

// fn_8012D4DC
void f_8012D4DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D4DC
  c->r[0]=c->lr; // 8012D4E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012D4E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012D4E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012D4EC
  c->r[30]=c->r[3]|c->r[3]; // 8012D4F0
  c->r[31]=c->r[4]|c->r[4]; // 8012D4F4
  c->r[3]=c->r[31]|c->r[31]; // 8012D4F8
  c->lr=0x8012D500u; f_802F0250(c); // 8012D4FC
  c->r[3]=c->r[1]+0x00000008u; // 8012D500
  c->r[4]=c->r[30]+0x000000ECu; // 8012D504
  c->lr=0x8012D50Cu; f_800549FC(c); // 8012D508
  c->r[3]=c->r[30]+0x0000312Cu; // 8012D50C
  c->r[4]=c->r[1]+0x00000008u; // 8012D510
  c->lr=0x8012D518u; f_80110D34(c); // 8012D514
  c->r[3]=c->r[1]+0x00000008u; // 8012D518
  c->r[4]=0u+0xFFFFFFFFu; // 8012D51C
  c->lr=0x8012D524u; f_80047BD4(c); // 8012D520
  c->r[3]=c->r[30]+0x0000312Cu; // 8012D524
  c->r[4]=c->r[31]|c->r[31]; // 8012D528
  c->lr=0x8012D530u; f_801114EC(c); // 8012D52C
  c->r[3]=c->r[30]+0x0000312Cu; // 8012D530
  c->lr=0x8012D538u; f_80111464(c); // 8012D534
  W32(c->r[30]+0x00003120u,c->r[3]); // 8012D538
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012D53C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012D540
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012D544
  c->lr=c->r[0]; // 8012D548
  c->r[1]=c->r[1]+0x00000020u; // 8012D54C
  return; // 8012D550
}

// fn_8012D554
void f_8012D554(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C8u,c->r[4]); // 8012D554
  return; // 8012D558
}

// fn_8012D55C
void f_8012D55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[1]);} // 8012D55C
  return; // 8012D560
}

// fn_8012D564
void f_8012D564(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[1]);} // 8012D564
  return; // 8012D568
}

// fn_8012D56C
void f_8012D56C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 8012D56C
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[2]);} // 8012D570
  return; // 8012D574
}

// fn_8012D578
void f_8012D578(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[1]);} // 8012D578
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[2]);} // 8012D57C
  return; // 8012D580
}

// fn_8012D584
void f_8012D584(Ctx* __restrict c) {
  W8(c->r[3]+0x000000ECu,c->r[4]); // 8012D584
  W8(c->r[3]+0x000000EDu,c->r[5]); // 8012D588
  W8(c->r[3]+0x000000EEu,c->r[6]); // 8012D58C
  W8(c->r[3]+0x000000EFu,c->r[7]); // 8012D590
  return; // 8012D594
}

// fn_8012D598
void f_8012D598(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000ECu; // 8012D598
  f_8005D48C(c); return; // 8012D59C
}

// fn_8012D5A0
void f_8012D5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[1]);} // 8012D5A0
  return; // 8012D5A4
}

// fn_8012D5A8
void f_8012D5A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[1]);} // 8012D5A8
  return; // 8012D5AC
}

// fn_8012D5B0
void f_8012D5B0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000100u,c->r[4]); // 8012D5B0
  return; // 8012D5B4
}

// fn_8012D5B8
void f_8012D5B8(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 8012D5B8
  W32(c->r[3]+0x000061B4u,c->r[0]); // 8012D5BC
  return; // 8012D5C0
}

// fn_8012D5C4
void f_8012D5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000061B8u; WF32(ea,c->f[1]);} // 8012D5C4
  {uint32_t ea=c->r[3]+0x000061BCu; WF32(ea,c->f[2]);} // 8012D5C8
  return; // 8012D5CC
}

// fn_8012D5D0
void f_8012D5D0(Ctx* __restrict c) {
  W32(c->r[3]+0x000061C0u,c->r[4]); // 8012D5D0
  return; // 8012D5D4
}

// fn_8012D5D8
void f_8012D5D8(Ctx* __restrict c) {
  W8(c->r[3]+0x000061C4u,c->r[4]); // 8012D5D8
  W8(c->r[3]+0x000061C5u,c->r[5]); // 8012D5DC
  W8(c->r[3]+0x000061C6u,c->r[6]); // 8012D5E0
  W8(c->r[3]+0x000061C7u,c->r[7]); // 8012D5E4
  return; // 8012D5E8
}

// fn_8012D5EC
void f_8012D5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D5EC
  c->r[0]=c->lr; // 8012D5F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D5F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D5F8
  c->r[31]=c->r[3]|c->r[3]; // 8012D5FC
  c->lr=0x8012D604u; f_8012C4DC(c); // 8012D600
  c->r[3]=0u+0x80470000u; // 8012D604
  c->r[0]=c->r[3]+0xFFFF8108u; // 8012D608
  W32(c->r[31]+0x00000058u,c->r[0]); // 8012D60C
  c->r[3]=c->r[31]+0x000061C8u; // 8012D610
  c->lr=0x8012D618u; f_80110498(c); // 8012D614
  c->r[3]=c->r[31]+0x00006210u; // 8012D618
  c->lr=0x8012D620u; f_80110498(c); // 8012D61C
  {uint32_t ea=c->r[2]+0xFFFF8C30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D620
  {uint32_t ea=c->r[31]+0x00006258u; WF32(ea,c->f[1]);} // 8012D624
  {uint32_t ea=c->r[2]+0xFFFF8C34u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D628
  {uint32_t ea=c->r[31]+0x0000625Cu; WF32(ea,c->f[0]);} // 8012D62C
  {uint32_t ea=c->r[31]+0x00006260u; WF32(ea,c->f[1]);} // 8012D630
  {uint32_t ea=c->r[31]+0x00006264u; WF32(ea,c->f[0]);} // 8012D634
  {uint32_t ea=c->r[2]+0xFFFF8C38u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012D638
  {uint32_t ea=c->r[31]+0x00006268u; WF32(ea,c->f[0]);} // 8012D63C
  {uint32_t ea=c->r[31]+0x0000626Cu; WF32(ea,c->f[0]);} // 8012D640
  c->r[3]=c->r[31]|c->r[31]; // 8012D644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D648
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D64C
  c->lr=c->r[0]; // 8012D650
  c->r[1]=c->r[1]+0x00000010u; // 8012D654
  return; // 8012D658
}

// fn_8012D65C
void f_8012D65C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D65C
  c->r[0]=c->lr; // 8012D660
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D668
  c->r[31]=c->r[3]|c->r[3]; // 8012D66C
  c->r[4]=0u+0x00000003u; // 8012D670
  c->lr=0x8012D678u; f_8012D554(c); // 8012D674
  c->r[3]=c->r[31]|c->r[31]; // 8012D678
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012D67C
  c->r[12]=R32(c->r[12]+0x00000040u); // 8012D680
  c->ctr=c->r[12]; // 8012D684
  if (true) { c->lr=0x8012D68Cu; dispatch(c,c->ctr); } // 8012D688
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D68C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D690
  c->lr=c->r[0]; // 8012D694
  c->r[1]=c->r[1]+0x00000010u; // 8012D698
  return; // 8012D69C
}

// fn_8012D6A0
void f_8012D6A0(Ctx* __restrict c) {
  return; // 8012D6A0
}

// fn_8012D6A4
void f_8012D6A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D6A4
  c->r[0]=c->lr; // 8012D6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D6AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D6B0
  c->r[31]=c->r[3]|c->r[3]; // 8012D6B4
  c->r[3]=c->r[3]+0x000061C8u; // 8012D6B8
  c->lr=0x8012D6C0u; f_801105F8(c); // 8012D6BC
  cmps(c,0,(int32_t)c->r[3],0); // 8012D6C0
  if (crb(c,2)) { goto L_8012D6D4; } // 8012D6C4
  c->r[3]=c->r[31]+0x000061C8u; // 8012D6C8
  c->r[4]=c->r[31]+0x000000CCu; // 8012D6CC
  c->lr=0x8012D6D4u; f_801108D8(c); // 8012D6D0
L_8012D6D4:;
  c->r[3]=c->r[31]+0x00006210u; // 8012D6D4
  c->lr=0x8012D6DCu; f_801105F8(c); // 8012D6D8
  cmps(c,0,(int32_t)c->r[3],0); // 8012D6DC
  if (crb(c,2)) { goto L_8012D6F0; } // 8012D6E0
  c->r[3]=c->r[31]+0x00006210u; // 8012D6E4
  c->r[4]=c->r[31]+0x000000D0u; // 8012D6E8
  c->lr=0x8012D6F0u; f_801108D8(c); // 8012D6EC
L_8012D6F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D6F0
  c->lr=0x8012D6F8u; f_8012CF30(c); // 8012D6F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D6F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D6FC
  c->lr=c->r[0]; // 8012D700
  c->r[1]=c->r[1]+0x00000010u; // 8012D704
  return; // 8012D708
}

// fn_8012D70C
void f_8012D70C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D70C
  c->r[0]=c->lr; // 8012D710
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D714
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D718
  c->r[31]=c->r[3]|c->r[3]; // 8012D71C
  cmps(c,0,(int32_t)c->r[4],0); // 8012D720
  if (crb(c,2)) { goto L_8012D774; } // 8012D724
  c->r[3]=c->r[3]+0x000061C8u; // 8012D728
  {uint32_t ea=c->r[31]+0x00006258u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D72C
  c->lr=0x8012D734u; f_80110560(c); // 8012D730
  c->r[3]=c->r[31]+0x000061C8u; // 8012D734
  {uint32_t ea=c->r[31]+0x00006260u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D738
  c->lr=0x8012D740u; f_80110568(c); // 8012D73C
  c->r[3]=c->r[31]+0x000061C8u; // 8012D740
  {uint32_t ea=c->r[31]+0x00006268u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D744
  c->lr=0x8012D74Cu; f_80110590(c); // 8012D748
  c->r[3]=c->r[31]+0x00006210u; // 8012D74C
  {uint32_t ea=c->r[31]+0x0000625Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D750
  c->lr=0x8012D758u; f_80110560(c); // 8012D754
  c->r[3]=c->r[31]+0x00006210u; // 8012D758
  {uint32_t ea=c->r[31]+0x00006264u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D75C
  c->lr=0x8012D764u; f_80110568(c); // 8012D760
  c->r[3]=c->r[31]+0x00006210u; // 8012D764
  {uint32_t ea=c->r[31]+0x00006268u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D768
  c->lr=0x8012D770u; f_80110590(c); // 8012D76C
  goto L_8012D7BC; // 8012D770
L_8012D774:;
  c->r[3]=c->r[3]+0x000061C8u; // 8012D774
  {uint32_t ea=c->r[31]+0x00006260u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D778
  c->lr=0x8012D780u; f_80110560(c); // 8012D77C
  c->r[3]=c->r[31]+0x000061C8u; // 8012D780
  {uint32_t ea=c->r[31]+0x00006258u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D784
  c->lr=0x8012D78Cu; f_80110568(c); // 8012D788
  c->r[3]=c->r[31]+0x000061C8u; // 8012D78C
  {uint32_t ea=c->r[31]+0x0000626Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D790
  c->lr=0x8012D798u; f_80110590(c); // 8012D794
  c->r[3]=c->r[31]+0x00006210u; // 8012D798
  {uint32_t ea=c->r[31]+0x00006264u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D79C
  c->lr=0x8012D7A4u; f_80110560(c); // 8012D7A0
  c->r[3]=c->r[31]+0x00006210u; // 8012D7A4
  {uint32_t ea=c->r[31]+0x0000625Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D7A8
  c->lr=0x8012D7B0u; f_80110568(c); // 8012D7AC
  c->r[3]=c->r[31]+0x00006210u; // 8012D7B0
  {uint32_t ea=c->r[31]+0x0000626Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012D7B4
  c->lr=0x8012D7BCu; f_80110590(c); // 8012D7B8
L_8012D7BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D7BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D7C0
  c->lr=c->r[0]; // 8012D7C4
  c->r[1]=c->r[1]+0x00000010u; // 8012D7C8
  return; // 8012D7CC
}

// fn_8012D7D0
void f_8012D7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00006258u; WF32(ea,c->f[1]);} // 8012D7D0
  {uint32_t ea=c->r[3]+0x0000625Cu; WF32(ea,c->f[2]);} // 8012D7D4
  return; // 8012D7D8
}

// fn_8012D7DC
void f_8012D7DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00006260u; WF32(ea,c->f[1]);} // 8012D7DC
  {uint32_t ea=c->r[3]+0x00006264u; WF32(ea,c->f[2]);} // 8012D7E0
  return; // 8012D7E4
}

// fn_8012D7E8
void f_8012D7E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00006268u; WF32(ea,c->f[1]);} // 8012D7E8
  return; // 8012D7EC
}

// fn_8012D7F0
void f_8012D7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000626Cu; WF32(ea,c->f[1]);} // 8012D7F0
  return; // 8012D7F4
}

// fn_8012D7F8
void f_8012D7F8(Ctx* __restrict c) {
  return; // 8012D7F8
}

// fn_8012D7FC
void f_8012D7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D7FC
  c->r[0]=c->lr; // 8012D800
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D808
  c->r[31]=c->r[3]|c->r[3]; // 8012D80C
  c->lr=0x8012D814u; f_8012FAAC(c); // 8012D810
  c->r[3]=0u+0x80470000u; // 8012D814
  c->r[0]=c->r[3]+0xFFFF8158u; // 8012D818
  W32(c->r[31]+0x00000058u,c->r[0]); // 8012D81C
  c->r[3]=c->r[31]|c->r[31]; // 8012D820
  c->r[4]=0u+0x00000004u; // 8012D824
  c->lr=0x8012D82Cu; f_8012FBCC(c); // 8012D828
  c->r[0]=0u+0xFFFFFFFFu; // 8012D82C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 8012D830
  c->r[0]=0u+0x00000003u; // 8012D834
  W32(c->r[31]+0x000000C8u,c->r[0]); // 8012D838
  c->r[0]=0u+0x00000000u; // 8012D83C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8012D840
  c->r[3]=c->r[31]|c->r[31]; // 8012D844
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D848
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D84C
  c->lr=c->r[0]; // 8012D850
  c->r[1]=c->r[1]+0x00000010u; // 8012D854
  return; // 8012D858
}

// fn_8012D85C
void f_8012D85C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D85C
  c->r[0]=c->lr; // 8012D860
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D864
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D868
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012D86C
  c->r[30]=c->r[3]|c->r[3]; // 8012D870
  c->r[31]=c->r[4]|c->r[4]; // 8012D874
  cmps(c,0,(int32_t)c->r[3],0); // 8012D878
  if (crb(c,2)) { goto L_8012D89C; } // 8012D87C
  c->r[4]=0u+0x00000000u; // 8012D880
  c->lr=0x8012D888u; f_8012FB1C(c); // 8012D884
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012D888
  cmps(c,0,(int32_t)c->r[0],0); // 8012D88C
  if (!crb(c,1)) { goto L_8012D89C; } // 8012D890
  c->r[3]=c->r[30]|c->r[30]; // 8012D894
  c->lr=0x8012D89Cu; f_80047B20(c); // 8012D898
L_8012D89C:;
  c->r[3]=c->r[30]|c->r[30]; // 8012D89C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D8A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012D8A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D8A8
  c->lr=c->r[0]; // 8012D8AC
  c->r[1]=c->r[1]+0x00000010u; // 8012D8B0
  return; // 8012D8B4
}

// fn_8012D8B8
void f_8012D8B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D8B8
  c->r[0]=c->lr; // 8012D8BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012D8C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012D8C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012D8C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012D8CC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8012D8D0
  c->r[28]=c->r[3]|c->r[3]; // 8012D8D4
  c->r[29]=c->r[4]|c->r[4]; // 8012D8D8
  c->lr=0x8012D8E0u; f_80056B5C(c); // 8012D8DC
  c->r[30]=c->r[3]|c->r[3]; // 8012D8E0
  c->lr=0x8012D8E8u; f_8005DEE8(c); // 8012D8E4
  c->lr=0x8012D8ECu; f_80056B54(c); // 8012D8E8
  c->r[3]=0u+0x000000D0u; // 8012D8EC
  c->lr=0x8012D8F4u; f_80047B64(c); // 8012D8F0
  c->r[31]=c->r[3]|c->r[3]; // 8012D8F4
  cmps(c,0,(int32_t)c->r[3],0); // 8012D8F8
  if (crb(c,2)) { goto L_8012D904; } // 8012D8FC
  c->lr=0x8012D904u; f_800559A4(c); // 8012D900
L_8012D904:;
  W32(c->r[28]+0x000000C0u,c->r[31]); // 8012D904
  c->r[3]=c->r[30]|c->r[30]; // 8012D908
  c->lr=0x8012D910u; f_80056B54(c); // 8012D90C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 8012D910
  c->r[4]=c->r[29]|c->r[29]; // 8012D914
  c->r[5]=0u+0x00000000u; // 8012D918
  c->r[6]=0u+0x00000000u; // 8012D91C
  c->r[7]=0u+0x00000000u; // 8012D920
  c->lr=0x8012D928u; f_80055B14(c); // 8012D924
  c->r[3]=R32(c->r[28]+0x000000C0u); // 8012D928
  c->r[4]=R32(c->r[28]+0x000000C8u); // 8012D92C
  c->lr=0x8012D934u; f_80055FE4(c); // 8012D930
  c->r[3]=R32(c->r[28]+0x000000C0u); // 8012D934
  c->r[4]=R32(c->r[28]+0x000000C8u); // 8012D938
  c->lr=0x8012D940u; f_80055FDC(c); // 8012D93C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012D940
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012D944
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012D948
  c->r[28]=R32(c->r[1]+0x00000010u); // 8012D94C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012D950
  c->lr=c->r[0]; // 8012D954
  c->r[1]=c->r[1]+0x00000020u; // 8012D958
  return; // 8012D95C
}

// fn_8012D960
void f_8012D960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012D960
  c->r[0]=c->lr; // 8012D964
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012D968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012D96C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012D970
  c->r[30]=c->r[3]|c->r[3]; // 8012D974
  c->r[3]=R32(c->r[3]+0x000000C0u); // 8012D978
  cmps(c,0,(int32_t)c->r[3],0); // 8012D97C
  if (crb(c,2)) { goto L_8012D9D4; } // 8012D980
  c->r[4]=R32(c->r[30]+0x000000C8u); // 8012D984
  c->lr=0x8012D98Cu; f_80055FE4(c); // 8012D988
  c->r[3]=R32(c->r[30]+0x000000C0u); // 8012D98C
  c->lr=0x8012D994u; f_80055ED8(c); // 8012D990
  c->lr=0x8012D998u; f_80056B5C(c); // 8012D994
  c->r[31]=c->r[3]|c->r[3]; // 8012D998
  c->lr=0x8012D9A0u; f_8005DEE8(c); // 8012D99C
  c->lr=0x8012D9A4u; f_80056B54(c); // 8012D9A0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 8012D9A4
  cmps(c,0,(int32_t)c->r[3],0); // 8012D9A8
  if (crb(c,2)) { goto L_8012D9C4; } // 8012D9AC
  c->r[4]=0u+0x00000001u; // 8012D9B0
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 8012D9B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 8012D9B8
  c->ctr=c->r[12]; // 8012D9BC
  if (true) { c->lr=0x8012D9C4u; dispatch(c,c->ctr); } // 8012D9C0
L_8012D9C4:;
  c->r[3]=c->r[31]|c->r[31]; // 8012D9C4
  c->lr=0x8012D9CCu; f_80056B54(c); // 8012D9C8
  c->r[0]=0u+0x00000000u; // 8012D9CC
  W32(c->r[30]+0x000000C0u,c->r[0]); // 8012D9D0
L_8012D9D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012D9D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012D9D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012D9DC
  c->lr=c->r[0]; // 8012D9E0
  c->r[1]=c->r[1]+0x00000010u; // 8012D9E4
  return; // 8012D9E8
}

// fn_8012D9EC
void f_8012D9EC(Ctx* __restrict c) {
  f_8012FBA8(c); return; // 8012D9EC
}

// fn_8012D9F0
void f_8012D9F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 8012D9F0
  cmps(c,0,(int32_t)c->r[3],0); // 8012D9F4
  if (crb(c,2)) return; // 8012D9F8
  f_80055FEC(c); return; // 8012D9FC
  return; // 8012DA00
}

// fn_8012DA04
void f_8012DA04(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 8012DA04
  cmps(c,0,(int32_t)c->r[3],0); // 8012DA08
  if (crb(c,2)) return; // 8012DA0C
  f_800736AC(c); return; // 8012DA10
  return; // 8012DA14
}

// fn_8012DA18
void f_8012DA18(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C4u,c->r[4]); // 8012DA18
  return; // 8012DA1C
}

// fn_8012DA20
void f_8012DA20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 8012DA20
  return; // 8012DA24
}

// fn_8012DA28
void f_8012DA28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DA28
  c->r[0]=c->lr; // 8012DA2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012DA30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012DA34
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012DA38
  c->r[30]=c->r[3]|c->r[3]; // 8012DA3C
  c->r[3]=c->r[3]+0x00000A1Cu; // 8012DA40
  c->lr=0x8012DA48u; f_8004B018(c); // 8012DA44
  c->r[31]=c->r[3]|c->r[3]; // 8012DA48
  goto L_8012DA68; // 8012DA4C
L_8012DA50:;
  c->r[3]=c->r[31]|c->r[31]; // 8012DA50
  c->lr=0x8012DA58u; f_8012F108(c); // 8012DA54
  c->r[3]=c->r[30]+0x00000A1Cu; // 8012DA58
  c->r[4]=c->r[31]|c->r[31]; // 8012DA5C
  c->lr=0x8012DA64u; f_8028CCD8(c); // 8012DA60
  c->r[31]=c->r[3]|c->r[3]; // 8012DA64
L_8012DA68:;
  cmps(c,0,(int32_t)c->r[31],0); // 8012DA68
  if (!crb(c,2)) { IRQCHK(c); goto L_8012DA50; } // 8012DA6C
  c->r[3]=0u+0x00000000u; // 8012DA70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012DA74
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012DA78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012DA7C
  c->lr=c->r[0]; // 8012DA80
  c->r[1]=c->r[1]+0x00000010u; // 8012DA84
  return; // 8012DA88
}

// fn_8012DA8C
void f_8012DA8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DA8C
  c->r[0]=c->lr; // 8012DA90
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012DA94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012DA98
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012DA9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012DAA0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8012DAA4
  c->r[28]=c->r[3]|c->r[3]; // 8012DAA8
  c->lr=0x8012DAB0u; f_80077934(c); // 8012DAAC
  c->r[3]=0u+0x80470000u; // 8012DAB0
  c->r[3]=c->r[3]+0xFFFF81D0u; // 8012DAB4
  W32(c->r[28]+0x00000020u,c->r[3]); // 8012DAB8
  c->r[0]=c->r[3]+0x0000000Cu; // 8012DABC
  W32(c->r[28]+0x00000288u,c->r[0]); // 8012DAC0
  c->r[0]=c->r[3]+0x00000018u; // 8012DAC4
  W32(c->r[28]+0x0000029Cu,c->r[0]); // 8012DAC8
  c->r[0]=c->r[3]+0x00000024u; // 8012DACC
  W32(c->r[28]+0x000002B0u,c->r[0]); // 8012DAD0
  c->r[0]=c->r[3]+0x00000030u; // 8012DAD4
  W32(c->r[28]+0x00000300u,c->r[0]); // 8012DAD8
  c->r[30]=c->r[28]+0x000008CCu; // 8012DADC
  c->r[29]=c->r[28]+0x00000944u; // 8012DAE0
L_8012DAE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8012DAE4
  c->lr=0x8012DAECu; f_8012F45C(c); // 8012DAE8
  c->r[30]=c->r[30]+0x00000014u; // 8012DAEC
  cmpu(c,0,c->r[30],c->r[29]); // 8012DAF0
  if (crb(c,0)) { IRQCHK(c); goto L_8012DAE4; } // 8012DAF4
  c->r[3]=c->r[29]|c->r[29]; // 8012DAF8
  c->lr=0x8012DB00u; f_8004B0A4(c); // 8012DAFC
  c->r[3]=c->r[28]+0x00000950u; // 8012DB00
  c->lr=0x8012DB08u; f_8004B0A4(c); // 8012DB04
  c->r[3]=c->r[28]+0x0000095Cu; // 8012DB08
  c->lr=0x8012DB10u; f_8004B0A4(c); // 8012DB0C
  c->r[3]=c->r[28]+0x00000968u; // 8012DB10
  c->lr=0x8012DB18u; f_8004B0A4(c); // 8012DB14
  c->r[3]=c->r[28]+0x00000974u; // 8012DB18
  c->lr=0x8012DB20u; f_8004B0A4(c); // 8012DB1C
  c->r[3]=c->r[28]+0x00000998u; // 8012DB20
  c->lr=0x8012DB28u; f_8004B0A0(c); // 8012DB24
  c->r[3]=c->r[28]+0x000009C8u; // 8012DB28
  c->lr=0x8012DB30u; f_8004B0A0(c); // 8012DB2C
  c->r[29]=0u+0xFFFFFFFFu; // 8012DB30
  W32(c->r[28]+0x000008B4u,c->r[29]); // 8012DB34
  c->r[0]=0u+0x00000003u; // 8012DB38
  W32(c->r[28]+0x000008B8u,c->r[0]); // 8012DB3C
  c->r[30]=0u+0x00000000u; // 8012DB40
  W32(c->r[28]+0x000008C0u,c->r[30]); // 8012DB44
  W32(c->r[28]+0x000008C4u,c->r[30]); // 8012DB48
  W32(c->r[28]+0x000008C8u,c->r[30]); // 8012DB4C
  c->r[3]=c->r[28]+0x00000944u; // 8012DB50
  c->r[31]=0u+0x804C0000u; // 8012DB54
  c->r[4]=c->r[31]+0x000024A0u; // 8012DB58
  c->lr=0x8012DB60u; f_8004A65C(c); // 8012DB5C
  c->r[3]=c->r[28]+0x00000950u; // 8012DB60
  c->r[4]=c->r[31]+0x000024A0u; // 8012DB64
  c->lr=0x8012DB6Cu; f_8004A65C(c); // 8012DB68
  c->r[3]=c->r[28]+0x0000095Cu; // 8012DB6C
  c->r[4]=c->r[31]+0x000024A0u; // 8012DB70
  c->lr=0x8012DB78u; f_8004A65C(c); // 8012DB74
  c->r[3]=c->r[28]+0x00000968u; // 8012DB78
  c->r[4]=c->r[31]+0x000024A0u; // 8012DB7C
  c->lr=0x8012DB84u; f_8004A65C(c); // 8012DB80
  c->r[3]=c->r[28]+0x00000974u; // 8012DB84
  c->r[4]=0u+0x804C0000u; // 8012DB88
  c->r[4]=c->r[4]+0x000024ACu; // 8012DB8C
  c->lr=0x8012DB94u; f_8004A65C(c); // 8012DB90
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012DB94
  {uint32_t ea=c->r[28]+0x00000980u; WF32(ea,c->f[0]);} // 8012DB98
  {uint32_t ea=c->r[28]+0x00000984u; WF32(ea,c->f[0]);} // 8012DB9C
  {uint32_t ea=c->r[28]+0x00000988u; WF32(ea,c->f[0]);} // 8012DBA0
  {uint32_t ea=c->r[28]+0x0000098Cu; WF32(ea,c->f[0]);} // 8012DBA4
  W32(c->r[28]+0x000009F8u,c->r[30]); // 8012DBA8
  W32(c->r[28]+0x000009FCu,c->r[29]); // 8012DBAC
  W32(c->r[28]+0x00000A00u,c->r[29]); // 8012DBB0
  W32(c->r[28]+0x00000990u,c->r[30]); // 8012DBB4
  W32(c->r[28]+0x00000994u,c->r[30]); // 8012DBB8
  c->r[3]=c->r[28]+0x00000998u; // 8012DBBC
  c->r[4]=0u+0x804C0000u; // 8012DBC0
  c->r[4]=c->r[4]+0x000024B8u; // 8012DBC4
  c->lr=0x8012DBCCu; f_80049FD4(c); // 8012DBC8
  c->r[0]=0u+0x00000001u; // 8012DBCC
  W32(c->r[28]+0x00000A04u,c->r[0]); // 8012DBD0
  W32(c->r[28]+0x00000A08u,c->r[30]); // 8012DBD4
  W32(c->r[28]+0x00000A0Cu,c->r[0]); // 8012DBD8
  W32(c->r[28]+0x00000A10u,c->r[30]); // 8012DBDC
  W32(c->r[28]+0x00000A14u,c->r[30]); // 8012DBE0
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012DBE4
  {uint32_t ea=c->r[28]+0x00000A18u; WF32(ea,c->f[0]);} // 8012DBE8
  W32(c->r[28]+0x000008BCu,c->r[30]); // 8012DBEC
  c->r[3]=c->r[28]+0x00000A1Cu; // 8012DBF0
  c->r[4]=0u+0x00000A28u; // 8012DBF4
  c->lr=0x8012DBFCu; f_8028CA58(c); // 8012DBF8
  c->r[3]=c->r[28]|c->r[28]; // 8012DBFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012DC00
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012DC04
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012DC08
  c->r[28]=R32(c->r[1]+0x00000010u); // 8012DC0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012DC10
  c->lr=c->r[0]; // 8012DC14
  c->r[1]=c->r[1]+0x00000020u; // 8012DC18
  return; // 8012DC1C
}

// fn_8012DC20
void f_8012DC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DC20
  c->r[0]=c->lr; // 8012DC24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012DC28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012DC2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012DC30
  c->r[30]=c->r[3]|c->r[3]; // 8012DC34
  c->r[31]=c->r[4]|c->r[4]; // 8012DC38
  cmps(c,0,(int32_t)c->r[3],0); // 8012DC3C
  if (crb(c,2)) { goto L_8012DC60; } // 8012DC40
  c->r[4]=0u+0x00000000u; // 8012DC44
  c->lr=0x8012DC4Cu; f_800779D0(c); // 8012DC48
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012DC4C
  cmps(c,0,(int32_t)c->r[0],0); // 8012DC50
  if (!crb(c,1)) { goto L_8012DC60; } // 8012DC54
  c->r[3]=c->r[30]|c->r[30]; // 8012DC58
  c->lr=0x8012DC60u; f_80047B20(c); // 8012DC5C
L_8012DC60:;
  c->r[3]=c->r[30]|c->r[30]; // 8012DC60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012DC64
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012DC68
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012DC6C
  c->lr=c->r[0]; // 8012DC70
  c->r[1]=c->r[1]+0x00000010u; // 8012DC74
  return; // 8012DC78
}

// fn_8012DC7C
void f_8012DC7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DC7C
  c->r[0]=c->lr; // 8012DC80
  W32(c->r[1]+0x00000114u,c->r[0]); // 8012DC84
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 8012DC88
  c->r[31]=c->r[3]|c->r[3]; // 8012DC8C
  c->r[10]=c->r[4]|c->r[4]; // 8012DC90
  c->r[9]=c->r[5]|c->r[5]; // 8012DC94
  c->r[8]=c->r[6]|c->r[6]; // 8012DC98
  c->r[4]=c->r[1]+0x00000004u; // 8012DC9C
  c->r[3]=0u+0x00000000u; // 8012DCA0
  c->r[0]=0u+0x00000020u; // 8012DCA4
  c->ctr=c->r[0]; // 8012DCA8
L_8012DCAC:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 8012DCAC
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 8012DCB0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8012DCAC; } // 8012DCB4
  cmps(c,0,(int32_t)c->r[7],0); // 8012DCB8
  if (crb(c,2)) { goto L_8012DCE8; } // 8012DCBC
  c->r[3]=c->r[1]+0x00000008u; // 8012DCC0
  c->r[4]=0u+0x80470000u; // 8012DCC4
  c->r[4]=c->r[4]+0xFFFF81B8u; // 8012DCC8
  c->r[5]=c->r[13]+0xFFFF9428u; // 8012DCCC
  c->r[6]=c->r[10]|c->r[10]; // 8012DCD0
  c->r[7]=c->r[9]|c->r[9]; // 8012DCD4
  c->r[9]=c->r[13]+0xFFFF942Cu; // 8012DCD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8012DCDC
  c->lr=0x8012DCE4u; f_802E7CC4(c); // 8012DCE0
  goto L_8012DD0C; // 8012DCE4
L_8012DCE8:;
  c->r[3]=c->r[1]+0x00000008u; // 8012DCE8
  c->r[4]=0u+0x80470000u; // 8012DCEC
  c->r[4]=c->r[4]+0xFFFF81B8u; // 8012DCF0
  c->r[5]=c->r[13]+0xFFFF9428u; // 8012DCF4
  c->r[6]=c->r[10]|c->r[10]; // 8012DCF8
  c->r[7]=c->r[9]|c->r[9]; // 8012DCFC
  c->r[9]=c->r[13]+0xFFFF9434u; // 8012DD00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8012DD04
  c->lr=0x8012DD0Cu; f_802E7CC4(c); // 8012DD08
L_8012DD0C:;
  c->r[3]=c->r[31]|c->r[31]; // 8012DD0C
  c->r[4]=c->r[1]+0x00000008u; // 8012DD10
  c->lr=0x8012DD18u; f_80078168(c); // 8012DD14
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 8012DD18
  c->r[0]=R32(c->r[1]+0x00000114u); // 8012DD1C
  c->lr=c->r[0]; // 8012DD20
  c->r[1]=c->r[1]+0x00000110u; // 8012DD24
  return; // 8012DD28
}

// fn_8012DD2C
void f_8012DD2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DD2C
  c->r[0]=c->lr; // 8012DD30
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012DD34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012DD38
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012DD3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012DD40
  W32(c->r[1]+0x00000010u,c->r[28]); // 8012DD44
  c->r[28]=c->r[3]|c->r[3]; // 8012DD48
  c->r[29]=c->r[4]|c->r[4]; // 8012DD4C
  c->r[30]=c->r[5]|c->r[5]; // 8012DD50
  c->r[31]=c->r[6]|c->r[6]; // 8012DD54
  c->lr=0x8012DD5Cu; f_801F1340(c); // 8012DD58
  c->r[4]=c->r[3]|c->r[3]; // 8012DD5C
  c->r[3]=c->r[28]|c->r[28]; // 8012DD60
  c->lr=0x8012DD68u; f_80077A90(c); // 8012DD64
  cmps(c,0,(int32_t)c->r[30],0); // 8012DD68
  if (crb(c,2)) { goto L_8012DD7C; } // 8012DD6C
  c->r[3]=c->r[28]|c->r[28]; // 8012DD70
  c->r[4]=c->r[30]|c->r[30]; // 8012DD74
  c->lr=0x8012DD7Cu; f_80078028(c); // 8012DD78
L_8012DD7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8012DD7C
  if (crb(c,2)) { goto L_8012DD90; } // 8012DD80
  c->r[3]=c->r[28]|c->r[28]; // 8012DD84
  c->r[4]=c->r[31]|c->r[31]; // 8012DD88
  c->lr=0x8012DD90u; f_80077AE0(c); // 8012DD8C
L_8012DD90:;
  c->r[3]=c->r[28]|c->r[28]; // 8012DD90
  c->r[4]=c->r[29]|c->r[29]; // 8012DD94
  c->r[5]=R32(c->r[28]+0x00000A04u); // 8012DD98
  c->r[6]=R32(c->r[28]+0x00000A08u); // 8012DD9C
  c->r[7]=R32(c->r[28]+0x00000A0Cu); // 8012DDA0
  c->r[8]=R32(c->r[28]+0x00000A10u); // 8012DDA4
  c->r[9]=0u+0x0000030Fu; // 8012DDA8
  c->lr=0x8012DDB0u; f_80077BFC(c); // 8012DDAC
  c->r[3]=c->r[28]|c->r[28]; // 8012DDB0
  c->r[4]=0u+0x00000001u; // 8012DDB4
  c->lr=0x8012DDBCu; f_8012E2A8(c); // 8012DDB8
  cmps(c,0,(int32_t)c->r[3],0); // 8012DDBC
  if (crb(c,2)) { goto L_8012DDCC; } // 8012DDC0
  c->r[3]=c->r[28]+0x00000024u; // 8012DDC4
  c->lr=0x8012DDCCu; f_80053AD4(c); // 8012DDC8
L_8012DDCC:;
  c->r[3]=c->r[28]+0x00000024u; // 8012DDCC
  c->r[4]=R32(c->r[28]+0x000008C8u); // 8012DDD0
  c->lr=0x8012DDD8u; f_800534E4(c); // 8012DDD4
  c->r[3]=c->r[28]+0x00000024u; // 8012DDD8
  {uint32_t ea=c->r[28]+0x00000944u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012DDDC
  {uint32_t ea=c->r[28]+0x00000948u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012DDE0
  {uint32_t ea=c->r[28]+0x0000094Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8012DDE4
  c->lr=0x8012DDECu; f_80074EEC(c); // 8012DDE8
  c->r[3]=R32(c->r[28]+0x000008BCu); // 8012DDEC
  cmps(c,0,(int32_t)c->r[3],0); // 8012DDF0
  if (!crb(c,2)) { goto L_8012DE14; } // 8012DDF4
  c->r[3]=c->r[28]+0x00000024u; // 8012DDF8
  c->r[4]=R32(c->r[28]+0x000008B8u); // 8012DDFC
  c->lr=0x8012DE04u; f_800536FC(c); // 8012DE00
  c->r[3]=c->r[28]+0x00000024u; // 8012DE04
  c->r[4]=R32(c->r[28]+0x000008B8u); // 8012DE08
  c->lr=0x8012DE10u; f_800536E8(c); // 8012DE0C
  goto L_8012DE28; // 8012DE10
L_8012DE14:;
  c->r[4]=c->r[28]|c->r[28]; // 8012DE14
  cmps(c,0,(int32_t)c->r[28],0); // 8012DE18
  if (crb(c,2)) { goto L_8012DE24; } // 8012DE1C
  c->r[4]=c->r[28]+0x000002B4u; // 8012DE20
L_8012DE24:;
  c->lr=0x8012DE28u; f_800560B0(c); // 8012DE24
L_8012DE28:;
  c->r[3]=c->r[28]|c->r[28]; // 8012DE28
  c->r[12]=R32(c->r[3]+0x00000020u); // 8012DE2C
  c->r[12]=R32(c->r[12]+0x00000044u); // 8012DE30
  c->ctr=c->r[12]; // 8012DE34
  if (true) { c->lr=0x8012DE3Cu; dispatch(c,c->ctr); } // 8012DE38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012DE3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012DE40
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012DE44
  c->r[28]=R32(c->r[1]+0x00000010u); // 8012DE48
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012DE4C
  c->lr=c->r[0]; // 8012DE50
  c->r[1]=c->r[1]+0x00000020u; // 8012DE54
  return; // 8012DE58
}

// fn_8012DE5C
void f_8012DE5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DE5C
  c->r[0]=c->lr; // 8012DE60
  W32(c->r[1]+0x00000034u,c->r[0]); // 8012DE64
  c->r[11]=c->r[1]+0x00000030u; // 8012DE68
  c->lr=0x8012DE70u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8012DE6C
  c->r[25]=c->r[3]|c->r[3]; // 8012DE70
  c->r[26]=c->r[4]|c->r[4]; // 8012DE74
  c->r[27]=c->r[5]|c->r[5]; // 8012DE78
  c->r[31]=c->r[6]|c->r[6]; // 8012DE7C
  c->r[30]=0u+0x00000000u; // 8012DE80
  c->r[29]=0u+0x00000000u; // 8012DE84
  c->r[28]=0u+0x00000000u; // 8012DE88
  c->lr=0x8012DE90u; f_8011B41C(c); // 8012DE8C
  c->r[4]=c->r[26]|c->r[26]; // 8012DE90
  c->lr=0x8012DE98u; f_8011B814(c); // 8012DE94
  c->lr=0x8012DE9Cu; f_8012FD18(c); // 8012DE98
  cmps(c,0,(int32_t)c->r[3],0); // 8012DE9C
  if (crb(c,2)) { goto L_8012DEB0; } // 8012DEA0
  c->r[3]=c->r[25]|c->r[25]; // 8012DEA4
  c->r[4]=0u+0x00000001u; // 8012DEA8
  c->lr=0x8012DEB0u; f_8012E274(c); // 8012DEAC
L_8012DEB0:;
  c->r[0]=R32(c->r[25]+0x000009F8u); // 8012DEB0
  cmps(c,0,(int32_t)c->r[0],0); // 8012DEB4
  if (!crb(c,2)) { goto L_8012DED0; } // 8012DEB8
  c->lr=0x8012DEC0u; f_8011B828(c); // 8012DEBC
  c->r[4]=c->r[26]|c->r[26]; // 8012DEC0
  c->r[5]=c->r[27]|c->r[27]; // 8012DEC4
  c->lr=0x8012DECCu; f_8011BF7C(c); // 8012DEC8
  c->r[30]=c->r[3]|c->r[3]; // 8012DECC
L_8012DED0:;
  c->r[0]=c->r[31]+0x00010000u; // 8012DED0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8012DED4
  if (crb(c,2)) { goto L_8012DEF0; } // 8012DED8
  c->lr=0x8012DEE0u; f_8011B828(c); // 8012DEDC
  c->r[4]=c->r[26]|c->r[26]; // 8012DEE0
  c->r[5]=c->r[31]|c->r[31]; // 8012DEE4
  c->lr=0x8012DEECu; f_8011BF7C(c); // 8012DEE8
  c->r[29]=c->r[3]|c->r[3]; // 8012DEEC
L_8012DEF0:;
  c->r[31]=R32(c->r[25]+0x000009F8u); // 8012DEF0
  cmps(c,0,(int32_t)c->r[31],0); // 8012DEF4
  if (crb(c,2)) { goto L_8012DF14; } // 8012DEF8
  c->lr=0x8012DF00u; f_8006E268(c); // 8012DEFC
  c->r[3]=c->r[3]+0x00010000u; // 8012DF00
  c->r[3]=c->r[3]+0xFFFF8A78u; // 8012DF04
  c->r[4]=c->r[31]|c->r[31]; // 8012DF08
  c->lr=0x8012DF10u; f_80077688(c); // 8012DF0C
  c->r[28]=c->r[3]|c->r[3]; // 8012DF10
L_8012DF14:;
  c->r[0]=R32(c->r[25]+0x000009F8u); // 8012DF14
  cmps(c,0,(int32_t)c->r[0],0); // 8012DF18
  if (!crb(c,2)) { goto L_8012DF3C; } // 8012DF1C
  c->r[3]=c->r[25]|c->r[25]; // 8012DF20
  c->r[4]=c->r[26]|c->r[26]; // 8012DF24
  c->r[5]=c->r[27]|c->r[27]; // 8012DF28
  c->r[6]=R32(c->r[25]+0x000009FCu); // 8012DF2C
  c->r[7]=0u+0x00000001u; // 8012DF30
  c->lr=0x8012DF38u; f_8012DC7C(c); // 8012DF34
  goto L_8012DF54; // 8012DF38
L_8012DF3C:;
  c->r[3]=c->r[25]|c->r[25]; // 8012DF3C
  c->r[4]=c->r[26]|c->r[26]; // 8012DF40
  c->r[5]=c->r[27]|c->r[27]; // 8012DF44
  c->r[6]=R32(c->r[25]+0x00000A00u); // 8012DF48
  c->r[7]=0u+0x00000000u; // 8012DF4C
  c->lr=0x8012DF54u; f_8012DC7C(c); // 8012DF50
L_8012DF54:;
  c->r[3]=c->r[25]|c->r[25]; // 8012DF54
  c->r[4]=c->r[30]|c->r[30]; // 8012DF58
  c->r[5]=c->r[28]|c->r[28]; // 8012DF5C
  c->r[6]=c->r[29]|c->r[29]; // 8012DF60
  c->lr=0x8012DF68u; f_8012DD2C(c); // 8012DF64
  c->r[11]=c->r[1]+0x00000030u; // 8012DF68
  c->lr=0x8012DF70u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8012DF6C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8012DF70
  c->lr=c->r[0]; // 8012DF74
  c->r[1]=c->r[1]+0x00000030u; // 8012DF78
  return; // 8012DF7C
}

// fn_8012DF80
void f_8012DF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012DF80
  c->r[0]=c->lr; // 8012DF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012DF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012DF8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012DF90
  c->r[30]=c->r[3]|c->r[3]; // 8012DF94
  c->r[0]=R32(c->r[3]+0x00000990u); // 8012DF98
  cmps(c,0,(int32_t)c->r[0],0); // 8012DF9C
  if (crb(c,2)) { goto L_8012DFCC; } // 8012DFA0
  c->lr=0x8012DFA8u; f_80056B5C(c); // 8012DFA4
  c->r[31]=c->r[3]|c->r[3]; // 8012DFA8
  c->lr=0x8012DFB0u; f_8005DEE8(c); // 8012DFAC
  c->lr=0x8012DFB4u; f_80056B54(c); // 8012DFB0
  c->r[3]=R32(c->r[30]+0x00000990u); // 8012DFB4
  c->lr=0x8012DFBCu; f_80047B20(c); // 8012DFB8
  c->r[3]=c->r[31]|c->r[31]; // 8012DFBC
  c->lr=0x8012DFC4u; f_80056B54(c); // 8012DFC0
  c->r[0]=0u+0x00000000u; // 8012DFC4
  W32(c->r[30]+0x00000990u,c->r[0]); // 8012DFC8
L_8012DFCC:;
  c->r[0]=R32(c->r[30]+0x00000994u); // 8012DFCC
  cmps(c,0,(int32_t)c->r[0],0); // 8012DFD0
  if (crb(c,2)) { goto L_8012E000; } // 8012DFD4
  c->lr=0x8012DFDCu; f_80056B5C(c); // 8012DFD8
  c->r[31]=c->r[3]|c->r[3]; // 8012DFDC
  c->lr=0x8012DFE4u; f_8005DEE8(c); // 8012DFE0
  c->lr=0x8012DFE8u; f_80056B54(c); // 8012DFE4
  c->r[3]=R32(c->r[30]+0x00000994u); // 8012DFE8
  c->lr=0x8012DFF0u; f_80047B20(c); // 8012DFEC
  c->r[3]=c->r[31]|c->r[31]; // 8012DFF0
  c->lr=0x8012DFF8u; f_80056B54(c); // 8012DFF4
  c->r[0]=0u+0x00000000u; // 8012DFF8
  W32(c->r[30]+0x00000994u,c->r[0]); // 8012DFFC
L_8012E000:;
  c->r[3]=R32(c->r[30]+0x000008BCu); // 8012E000
  cmps(c,0,(int32_t)c->r[3],0); // 8012E004
  if (!crb(c,2)) { goto L_8012E01C; } // 8012E008
  c->r[3]=c->r[30]+0x00000024u; // 8012E00C
  c->r[4]=R32(c->r[30]+0x000008B8u); // 8012E010
  c->lr=0x8012E018u; f_800536FC(c); // 8012E014
  goto L_8012E030; // 8012E018
L_8012E01C:;
  c->r[4]=c->r[30]|c->r[30]; // 8012E01C
  cmps(c,0,(int32_t)c->r[30],0); // 8012E020
  if (crb(c,2)) { goto L_8012E02C; } // 8012E024
  c->r[4]=c->r[30]+0x000002B4u; // 8012E028
L_8012E02C:;
  c->lr=0x8012E030u; f_800560C4(c); // 8012E02C
L_8012E030:;
  c->r[3]=c->r[30]|c->r[30]; // 8012E030
  c->r[4]=0u+0x00000001u; // 8012E034
  c->lr=0x8012E03Cu; f_8012E2A8(c); // 8012E038
  cmps(c,0,(int32_t)c->r[3],0); // 8012E03C
  if (crb(c,2)) { goto L_8012E04C; } // 8012E040
  c->r[3]=c->r[30]+0x00000024u; // 8012E044
  c->lr=0x8012E04Cu; f_80053B1C(c); // 8012E048
L_8012E04C:;
  c->r[3]=c->r[30]|c->r[30]; // 8012E04C
  c->r[4]=0u+0x00000001u; // 8012E050
  c->lr=0x8012E058u; f_8012E28C(c); // 8012E054
  c->r[3]=c->r[30]|c->r[30]; // 8012E058
  c->lr=0x8012E060u; f_80077E90(c); // 8012E05C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E060
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012E064
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E068
  c->lr=c->r[0]; // 8012E06C
  c->r[1]=c->r[1]+0x00000010u; // 8012E070
  return; // 8012E074
}

// fn_8012E078
void f_8012E078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E078
  c->r[0]=c->lr; // 8012E07C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012E084
  c->r[31]=c->r[3]|c->r[3]; // 8012E088
  c->r[3]=c->r[3]+0x00000024u; // 8012E08C
  c->r[4]=R32(c->r[31]+0x000008C8u); // 8012E090
  c->lr=0x8012E098u; f_800534E4(c); // 8012E094
  c->r[0]=R32(c->r[31]+0x000008C8u); // 8012E098
  cmps(c,0,(int32_t)c->r[0],0); // 8012E09C
  if (crb(c,2)) { goto L_8012E0E8; } // 8012E0A0
  c->r[3]=c->r[31]|c->r[31]; // 8012E0A4
  c->r[4]=0u+0x00000004u; // 8012E0A8
  c->lr=0x8012E0B0u; f_8012E2A8(c); // 8012E0AC
  cmps(c,0,(int32_t)c->r[3],0); // 8012E0B0
  if (!crb(c,2)) { goto L_8012E0D4; } // 8012E0B4
  c->r[3]=c->r[31]|c->r[31]; // 8012E0B8
  c->r[4]=0u+0x00000005u; // 8012E0BC
  c->lr=0x8012E0C4u; f_8012E2A8(c); // 8012E0C0
  cmps(c,0,(int32_t)c->r[3],0); // 8012E0C4
  if (!crb(c,2)) { goto L_8012E0D4; } // 8012E0C8
  c->r[3]=c->r[31]|c->r[31]; // 8012E0CC
  c->lr=0x8012E0D4u; f_8012E0FC(c); // 8012E0D0
L_8012E0D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8012E0D4
  c->r[12]=R32(c->r[3]+0x00000020u); // 8012E0D8
  c->r[12]=R32(c->r[12]+0x00000044u); // 8012E0DC
  c->ctr=c->r[12]; // 8012E0E0
  if (true) { c->lr=0x8012E0E8u; dispatch(c,c->ctr); } // 8012E0E4
L_8012E0E8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E0E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E0EC
  c->lr=c->r[0]; // 8012E0F0
  c->r[1]=c->r[1]+0x00000010u; // 8012E0F4
  return; // 8012E0F8
}

// fn_8012E0FC
void f_8012E0FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E0FC
  c->r[0]=c->lr; // 8012E100
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012E104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012E108
  c->r[31]=c->r[3]|c->r[3]; // 8012E10C
  c->r[3]=c->r[1]+0x00000008u; // 8012E110
  c->lr=0x8012E118u; f_8004B0A4(c); // 8012E114
  c->r[0]=R32(c->r[31]+0x00000990u); // 8012E118
  cmps(c,0,(int32_t)c->r[0],0); // 8012E11C
  if (crb(c,2)) { goto L_8012E144; } // 8012E120
  c->r[3]=c->r[31]|c->r[31]; // 8012E124
  c->r[4]=0u+0x00000007u; // 8012E128
  c->lr=0x8012E130u; f_8012E2A8(c); // 8012E12C
  cmps(c,0,(int32_t)c->r[3],0); // 8012E130
  if (crb(c,2)) { goto L_8012E1AC; } // 8012E134
  c->r[3]=c->r[31]|c->r[31]; // 8012E138
  c->lr=0x8012E140u; f_8012F108(c); // 8012E13C
  goto L_8012E1AC; // 8012E140
L_8012E144:;
  c->r[3]=c->r[1]+0x00000008u; // 8012E144
  c->r[4]=c->r[31]+0x00000944u; // 8012E148
  c->r[5]=c->r[31]+0x00000950u; // 8012E14C
  c->lr=0x8012E154u; f_8005C194(c); // 8012E150
  c->r[3]=c->r[1]+0x00000008u; // 8012E154
  c->r[4]=c->r[3]|c->r[3]; // 8012E158
  c->r[5]=c->r[31]+0x0000095Cu; // 8012E15C
  c->lr=0x8012E164u; f_8005C194(c); // 8012E160
  c->r[3]=c->r[31]+0x00000024u; // 8012E164
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012E168
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8012E16C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012E170
  c->lr=0x8012E178u; f_80074EEC(c); // 8012E174
  c->r[3]=c->r[31]+0x00000024u; // 8012E178
  {uint32_t ea=c->r[31]+0x00000968u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012E17C
  {uint32_t ea=c->r[31]+0x0000096Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8012E180
  {uint32_t ea=c->r[31]+0x00000970u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012E184
  c->lr=0x8012E18Cu; f_80074EDC(c); // 8012E188
  c->r[3]=c->r[31]+0x00000024u; // 8012E18C
  {uint32_t ea=c->r[31]+0x00000974u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012E190
  {uint32_t ea=c->r[31]+0x00000978u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012E194
  {uint32_t ea=c->r[31]+0x0000097Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8012E198
  c->lr=0x8012E1A0u; f_80074ECC(c); // 8012E19C
  c->r[3]=c->r[31]|c->r[31]; // 8012E1A0
  c->r[4]=0u+0x00000005u; // 8012E1A4
  c->lr=0x8012E1ACu; f_8012E274(c); // 8012E1A8
L_8012E1AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012E1AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012E1B0
  c->lr=c->r[0]; // 8012E1B4
  c->r[1]=c->r[1]+0x00000020u; // 8012E1B8
  return; // 8012E1BC
}

// fn_8012E1C0
void f_8012E1C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000024u; // 8012E1C0
  f_80053434(c); return; // 8012E1C4
}

// fn_8012E1C8
void f_8012E1C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E1C8
  c->r[0]=c->lr; // 8012E1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E1D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012E1D4
  c->r[31]=c->r[3]|c->r[3]; // 8012E1D8
  c->r[4]=0u+0x00000000u; // 8012E1DC
  c->lr=0x8012E1E4u; f_8012E28C(c); // 8012E1E0
  c->r[3]=c->r[31]|c->r[31]; // 8012E1E4
  c->r[4]=0u+0x00000000u; // 8012E1E8
  c->lr=0x8012E1F0u; f_8012ED5C(c); // 8012E1EC
  cmps(c,0,(int32_t)c->r[3],0); // 8012E1F0
  if (!crb(c,2)) { goto L_8012E210; } // 8012E1F4
  c->r[3]=c->r[31]|c->r[31]; // 8012E1F8
  c->r[4]=0u+0x00000006u; // 8012E1FC
  c->lr=0x8012E204u; f_8012EB2C(c); // 8012E200
  c->r[3]=c->r[31]|c->r[31]; // 8012E204
  c->r[4]=0u+0x00000000u; // 8012E208
  c->lr=0x8012E210u; f_8012E274(c); // 8012E20C
L_8012E210:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E210
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E214
  c->lr=c->r[0]; // 8012E218
  c->r[1]=c->r[1]+0x00000010u; // 8012E21C
  return; // 8012E220
}

// fn_8012E224
void f_8012E224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E224
  c->r[0]=c->lr; // 8012E228
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E22C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012E230
  c->r[31]=c->r[3]|c->r[3]; // 8012E234
  c->r[4]=0u+0x00000000u; // 8012E238
  c->lr=0x8012E240u; f_8012E2A8(c); // 8012E23C
  cmps(c,0,(int32_t)c->r[3],0); // 8012E240
  if (crb(c,2)) { goto L_8012E260; } // 8012E244
  c->r[3]=c->r[31]|c->r[31]; // 8012E248
  c->r[4]=0u+0x00000006u; // 8012E24C
  c->lr=0x8012E254u; f_8012EBE0(c); // 8012E250
  c->r[3]=c->r[31]|c->r[31]; // 8012E254
  c->r[4]=0u+0x00000000u; // 8012E258
  c->lr=0x8012E260u; f_8012E28C(c); // 8012E25C
L_8012E260:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E260
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E264
  c->lr=c->r[0]; // 8012E268
  c->r[1]=c->r[1]+0x00000010u; // 8012E26C
  return; // 8012E270
}

// fn_8012E274
void f_8012E274(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000A14u); // 8012E274
  c->r[0]=0u+0x00000001u; // 8012E278
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012E27C
  c->r[0]=c->r[5]|c->r[0]; // 8012E280
  W32(c->r[3]+0x00000A14u,c->r[0]); // 8012E284
  return; // 8012E288
}

// fn_8012E28C
void f_8012E28C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000A14u); // 8012E28C
  c->r[0]=0u+0x00000001u; // 8012E290
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012E294
  c->r[0]=~(c->r[0]|c->r[0]); // 8012E298
  c->r[0]=c->r[5]&c->r[0]; // 8012E29C
  W32(c->r[3]+0x00000A14u,c->r[0]); // 8012E2A0
  return; // 8012E2A4
}

// fn_8012E2A8
void f_8012E2A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000A14u); // 8012E2A8
  c->r[0]=0u+0x00000001u; // 8012E2AC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012E2B0
  c->r[3]=c->r[3]&c->r[0]; // 8012E2B4
  c->r[0]=0u-c->r[3]; // 8012E2B8
  c->r[0]=c->r[0]|c->r[3]; // 8012E2BC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012E2C0
  return; // 8012E2C4
}

// fn_8012E2C8
void f_8012E2C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E2C8
  c->r[0]=c->lr; // 8012E2CC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8012E2D0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8012E2D4
  W32(c->r[1]+0x00000048u,c->r[30]); // 8012E2D8
  W32(c->r[1]+0x00000044u,c->r[29]); // 8012E2DC
  c->r[29]=c->r[3]|c->r[3]; // 8012E2E0
  c->r[30]=c->r[4]|c->r[4]; // 8012E2E4
  c->r[0]=0u+0x43300000u; // 8012E2E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8012E2EC
  c->r[0]=0u+0x43300000u; // 8012E2F0
  W32(c->r[1]+0x00000018u,c->r[0]); // 8012E2F4
  c->r[3]=c->r[1]+0x0000000Cu; // 8012E2F8
  c->lr=0x8012E300u; f_80047C5C(c); // 8012E2FC
  c->r[3]=0u+0x00000000u; // 8012E300
  c->r[31]=R32(c->r[29]+0x000009F8u); // 8012E304
  cmps(c,0,(int32_t)c->r[31],0); // 8012E308
  if (crb(c,2)) { goto L_8012E324; } // 8012E30C
  c->lr=0x8012E314u; f_8006E268(c); // 8012E310
  c->r[3]=c->r[3]+0x00010000u; // 8012E314
  c->r[3]=c->r[3]+0xFFFF8A78u; // 8012E318
  c->r[4]=c->r[31]|c->r[31]; // 8012E31C
  c->lr=0x8012E324u; f_80077688(c); // 8012E320
L_8012E324:;
  c->r[0]=R32(c->r[29]+0x000009F8u); // 8012E324
  cmps(c,0,(int32_t)c->r[0],0); // 8012E328
  if (crb(c,2)) { goto L_8012E348; } // 8012E32C
  c->r[4]=c->r[1]+0x0000000Cu; // 8012E330
  c->r[5]=c->r[30]|c->r[30]; // 8012E334
  c->r[6]=0u+0x00000001u; // 8012E338
  c->r[7]=0u+0x00000000u; // 8012E33C
  c->lr=0x8012E344u; f_80052648(c); // 8012E340
  goto L_8012E360; // 8012E344
L_8012E348:;
  c->r[3]=c->r[29]|c->r[29]; // 8012E348
  c->r[4]=c->r[1]+0x0000000Cu; // 8012E34C
  c->r[5]=c->r[30]|c->r[30]; // 8012E350
  c->r[6]=0u+0x00000001u; // 8012E354
  c->r[7]=0u+0x00000000u; // 8012E358
  c->lr=0x8012E360u; f_80052648(c); // 8012E35C
L_8012E360:;
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8012E360
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=RF64(ea);} // 8012E364
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E368
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8012E36C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8012E370
  {uint32_t ea=c->r[29]+0x00000980u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E374
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8012E378
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E37C
  fcmp(c,0,c->f[1],c->f[0]); // 8012E380
  if (!crb(c,1)) { goto L_8012E38C; } // 8012E384
  c->f[1]=c->f[0]; // 8012E388
L_8012E38C:;
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E38C
  fcmp(c,0,c->f[1],c->f[0]); // 8012E390
  if (!crb(c,0)) { goto L_8012E39C; } // 8012E394
  c->f[1]=c->f[0]; // 8012E398
L_8012E39C:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8012E39C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 8012E3A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012E3A4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8012E3A8
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8012E3AC
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=RF64(ea);} // 8012E3B0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8012E3B4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8012E3B8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8012E3BC
  {uint32_t ea=c->r[29]+0x00000984u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E3C0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8012E3C4
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E3C8
  fcmp(c,0,c->f[1],c->f[0]); // 8012E3CC
  if (!crb(c,1)) { goto L_8012E3D8; } // 8012E3D0
  c->f[1]=c->f[0]; // 8012E3D4
L_8012E3D8:;
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E3D8
  fcmp(c,0,c->f[1],c->f[0]); // 8012E3DC
  if (!crb(c,0)) { goto L_8012E3E8; } // 8012E3E0
  c->f[1]=c->f[0]; // 8012E3E4
L_8012E3E8:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8012E3E8
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 8012E3EC
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8012E3F0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8012E3F4
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 8012E3F8
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=RF64(ea);} // 8012E3FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E400
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8012E404
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8012E408
  {uint32_t ea=c->r[29]+0x00000988u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E40C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8012E410
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E414
  fcmp(c,0,c->f[1],c->f[0]); // 8012E418
  if (!crb(c,1)) { goto L_8012E424; } // 8012E41C
  c->f[1]=c->f[0]; // 8012E420
L_8012E424:;
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E424
  fcmp(c,0,c->f[1],c->f[0]); // 8012E428
  if (!crb(c,0)) { goto L_8012E434; } // 8012E42C
  c->f[1]=c->f[0]; // 8012E430
L_8012E434:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8012E434
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 8012E438
  c->r[0]=R32(c->r[1]+0x00000034u); // 8012E43C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8012E440
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8012E444
  {uint32_t ea=c->r[2]+0xFFFF8C50u; c->f[1]=RF64(ea);} // 8012E448
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8012E44C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8012E450
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8012E454
  {uint32_t ea=c->r[29]+0x0000098Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E458
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8012E45C
  {uint32_t ea=c->r[2]+0xFFFF8C48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E460
  fcmp(c,0,c->f[1],c->f[0]); // 8012E464
  if (!crb(c,1)) { goto L_8012E470; } // 8012E468
  c->f[1]=c->f[0]; // 8012E46C
L_8012E470:;
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012E470
  fcmp(c,0,c->f[1],c->f[0]); // 8012E474
  if (!crb(c,0)) { goto L_8012E480; } // 8012E478
  c->f[1]=c->f[0]; // 8012E47C
L_8012E480:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 8012E480
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 8012E484
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 8012E488
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8012E48C
  c->r[3]=c->r[1]+0x00000008u; // 8012E490
  c->r[4]=c->r[1]+0x0000000Cu; // 8012E494
  c->lr=0x8012E49Cu; f_800549FC(c); // 8012E498
  c->r[3]=c->r[29]+0x00000024u; // 8012E49C
  c->r[4]=c->r[1]+0x00000008u; // 8012E4A0
  c->r[5]=c->r[30]|c->r[30]; // 8012E4A4
  c->r[6]=0u+0x00000000u; // 8012E4A8
  c->lr=0x8012E4B0u; f_80053B24(c); // 8012E4AC
  c->r[3]=c->r[1]+0x00000008u; // 8012E4B0
  c->r[4]=0u+0xFFFFFFFFu; // 8012E4B4
  c->lr=0x8012E4BCu; f_80047BD4(c); // 8012E4B8
  c->r[3]=c->r[1]+0x0000000Cu; // 8012E4BC
  c->r[4]=0u+0xFFFFFFFFu; // 8012E4C0
  c->lr=0x8012E4C8u; f_80047BD4(c); // 8012E4C4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8012E4C8
  c->r[30]=R32(c->r[1]+0x00000048u); // 8012E4CC
  c->r[29]=R32(c->r[1]+0x00000044u); // 8012E4D0
  c->r[0]=R32(c->r[1]+0x00000054u); // 8012E4D4
  c->lr=c->r[0]; // 8012E4D8
  c->r[1]=c->r[1]+0x00000050u; // 8012E4DC
  return; // 8012E4E0
}

// fn_8012E4E4
void f_8012E4E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E4E4
  c->r[0]=c->lr; // 8012E4E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012E4EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012E4F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012E4F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012E4F8
  c->r[29]=c->r[3]|c->r[3]; // 8012E4FC
  c->r[4]=0u+0x00000000u; // 8012E500
  c->r[31]=R32(c->r[3]+0x000009F8u); // 8012E504
  cmps(c,0,(int32_t)c->r[31],0); // 8012E508
  if (crb(c,2)) { goto L_8012E528; } // 8012E50C
  c->lr=0x8012E514u; f_8006E268(c); // 8012E510
  c->r[3]=c->r[3]+0x00010000u; // 8012E514
  c->r[3]=c->r[3]+0xFFFF8A78u; // 8012E518
  c->r[4]=c->r[31]|c->r[31]; // 8012E51C
  c->lr=0x8012E524u; f_80077688(c); // 8012E520
  c->r[4]=c->r[3]|c->r[3]; // 8012E524
L_8012E528:;
  c->r[0]=R32(c->r[29]+0x000009F8u); // 8012E528
  cmps(c,0,(int32_t)c->r[0],0); // 8012E52C
  if (crb(c,2)) { goto L_8012E544; } // 8012E530
  c->r[3]=c->r[4]|c->r[4]; // 8012E534
  c->lr=0x8012E53Cu; f_80052640(c); // 8012E538
  c->r[31]=c->r[3]|c->r[3]; // 8012E53C
  goto L_8012E550; // 8012E540
L_8012E544:;
  c->r[3]=c->r[29]|c->r[29]; // 8012E544
  c->lr=0x8012E54Cu; f_80052640(c); // 8012E548
  c->r[31]=c->r[3]|c->r[3]; // 8012E54C
L_8012E550:;
  c->r[30]=0u+0x00000000u; // 8012E550
  goto L_8012E568; // 8012E554
L_8012E558:;
  c->r[3]=c->r[29]|c->r[29]; // 8012E558
  c->r[4]=c->r[30]|c->r[30]; // 8012E55C
  c->lr=0x8012E564u; f_8012E2C8(c); // 8012E560
  c->r[30]=c->r[30]+0x00000001u; // 8012E564
L_8012E568:;
  cmpu(c,0,c->r[30],c->r[31]); // 8012E568
  if (crb(c,0)) { IRQCHK(c); goto L_8012E558; } // 8012E56C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012E570
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012E574
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012E578
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012E57C
  c->lr=c->r[0]; // 8012E580
  c->r[1]=c->r[1]+0x00000020u; // 8012E584
  return; // 8012E588
}

// fn_8012E58C
void f_8012E58C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E58C
  c->r[0]=c->lr; // 8012E590
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012E598
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012E59C
  c->r[30]=c->r[3]|c->r[3]; // 8012E5A0
  c->r[31]=c->r[4]|c->r[4]; // 8012E5A4
  c->r[3]=c->r[3]+0x00000024u; // 8012E5A8
  c->r[4]=0u+0x00000001u; // 8012E5AC
  c->lr=0x8012E5B4u; f_80052BC0(c); // 8012E5B0
  c->r[3]=c->r[30]+0x00000024u; // 8012E5B4
  c->r[4]=0u+0x80130000u; // 8012E5B8
  c->r[4]=c->r[4]+0xFFFFDA28u; // 8012E5BC
  c->r[5]=c->r[30]|c->r[30]; // 8012E5C0
  c->r[6]=0u+0x00000004u; // 8012E5C4
  c->lr=0x8012E5CCu; f_80052C34(c); // 8012E5C8
  c->r[3]=c->r[30]+0x00000A1Cu; // 8012E5CC
  c->r[4]=c->r[31]|c->r[31]; // 8012E5D0
  c->lr=0x8012E5D8u; f_8028CA70(c); // 8012E5D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E5D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012E5DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E5E0
  c->lr=c->r[0]; // 8012E5E4
  c->r[1]=c->r[1]+0x00000010u; // 8012E5E8
  return; // 8012E5EC
}

// fn_8012E5F0
void f_8012E5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E5F0
  c->r[0]=c->lr; // 8012E5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E5F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012E5FC
  c->r[31]=c->r[3]|c->r[3]; // 8012E600
  c->r[3]=c->r[3]+0x00000A1Cu; // 8012E604
  c->lr=0x8012E60Cu; f_8028CC6C(c); // 8012E608
  c->r[3]=c->r[31]+0x00000A1Cu; // 8012E60C
  c->lr=0x8012E614u; f_8005C00C(c); // 8012E610
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8012E614
  cmps(c,0,(int32_t)c->r[0],0); // 8012E618
  if (!crb(c,2)) { goto L_8012E62C; } // 8012E61C
  c->r[3]=c->r[31]+0x00000024u; // 8012E620
  c->r[4]=0u+0x00000000u; // 8012E624
  c->lr=0x8012E62Cu; f_80052BC0(c); // 8012E628
L_8012E62C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E62C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E630
  c->lr=c->r[0]; // 8012E634
  c->r[1]=c->r[1]+0x00000010u; // 8012E638
  return; // 8012E63C
}

// fn_8012E640
void f_8012E640(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E640
  c->r[0]=c->lr; // 8012E644
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012E648
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012E64C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012E650
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012E654
  W32(c->r[1]+0x00000010u,c->r[28]); // 8012E658
  c->r[28]=c->r[3]|c->r[3]; // 8012E65C
  c->r[29]=c->r[4]|c->r[4]; // 8012E660
  c->r[30]=c->r[5]|c->r[5]; // 8012E664
  cmps(c,0,(int32_t)c->r[5],6); // 8012E668
  if (!crb(c,2)) { goto L_8012E694; } // 8012E66C
  c->r[31]=0u+0x00000000u; // 8012E670
L_8012E674:;
  c->r[3]=c->r[28]|c->r[28]; // 8012E674
  c->r[4]=c->r[29]|c->r[29]; // 8012E678
  c->r[5]=c->r[31]|c->r[31]; // 8012E67C
  c->lr=0x8012E684u; f_8012E640(c); // 8012E680
  c->r[31]=c->r[31]+0x00000001u; // 8012E684
  cmps(c,0,(int32_t)c->r[31],6); // 8012E688
  if (crb(c,0)) { IRQCHK(c); goto L_8012E674; } // 8012E68C
  goto L_8012E754; // 8012E690
L_8012E694:;
  c->r[31]=(uint32_t)((int32_t)c->r[5]*(int32_t)20); // 8012E694
  c->r[6]=c->r[3]+c->r[31]; // 8012E698
  c->r[0]=R32(c->r[6]+0x000008CCu); // 8012E69C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8012E6A0
  if (crb(c,2)) { goto L_8012E754; } // 8012E6A4
  W32(c->r[6]+0x000008CCu,c->r[4]); // 8012E6A8
  cmps(c,0,(int32_t)c->r[5],0); // 8012E6AC
  if (!crb(c,2)) { goto L_8012E6C4; } // 8012E6B0
  c->r[4]=0u+0x00000003u; // 8012E6B4
  c->lr=0x8012E6BCu; f_8012E2A8(c); // 8012E6B8
  cmps(c,0,(int32_t)c->r[3],0); // 8012E6BC
  if (!crb(c,2)) { goto L_8012E708; } // 8012E6C0
L_8012E6C4:;
  c->r[3]=c->r[28]+0x00000024u; // 8012E6C4
  c->r[4]=c->r[30]|c->r[30]; // 8012E6C8
  c->r[5]=c->r[29]|c->r[29]; // 8012E6CC
  c->lr=0x8012E6D4u; f_80052E14(c); // 8012E6D0
  c->r[6]=c->r[28]+c->r[31]; // 8012E6D4
  c->r[31]=c->r[6]+0x000008D8u; // 8012E6D8
  c->r[3]=c->r[28]+0x00000024u; // 8012E6DC
  c->r[4]=c->r[30]|c->r[30]; // 8012E6E0
  c->r[5]=c->r[31]|c->r[31]; // 8012E6E4
  c->r[6]=c->r[6]+0x000008DCu; // 8012E6E8
  c->r[7]=0u+0x00000000u; // 8012E6EC
  c->lr=0x8012E6F4u; f_800532A0(c); // 8012E6F0
  c->r[3]=c->r[28]+0x00000024u; // 8012E6F4
  c->r[4]=c->r[30]|c->r[30]; // 8012E6F8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012E6FC
  c->lr=0x8012E704u; f_800530EC(c); // 8012E700
  goto L_8012E754; // 8012E704
L_8012E708:;
  {uint32_t ea=c->r[28]+0x00000A18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012E708
  c->r[3]=c->r[28]+0x00000024u; // 8012E70C
  c->r[4]=c->r[29]|c->r[29]; // 8012E710
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012E714
  c->r[5]=0u+0x00000000u; // 8012E718
  c->lr=0x8012E720u; f_80053798(c); // 8012E71C
  c->r[3]=c->r[28]+0x00000024u; // 8012E720
  c->lr=0x8012E728u; f_800537A4(c); // 8012E724
  c->r[31]=c->r[3]|c->r[3]; // 8012E728
  c->r[3]=c->r[28]+0x00000024u; // 8012E72C
  c->r[4]=c->r[31]|c->r[31]; // 8012E730
  c->r[5]=c->r[28]+0x000008D8u; // 8012E734
  c->r[6]=c->r[28]+0x000008DCu; // 8012E738
  c->r[7]=0u+0x00000000u; // 8012E73C
  c->lr=0x8012E744u; f_800539B0(c); // 8012E740
  c->r[3]=c->r[28]+0x00000024u; // 8012E744
  c->r[4]=c->r[31]|c->r[31]; // 8012E748
  {uint32_t ea=c->r[28]+0x000008D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012E74C
  c->lr=0x8012E754u; f_800538B0(c); // 8012E750
L_8012E754:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012E754
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012E758
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012E75C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8012E760
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012E764
  c->lr=c->r[0]; // 8012E768
  c->r[1]=c->r[1]+0x00000020u; // 8012E76C
  return; // 8012E770
}

// fn_8012E774
void f_8012E774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E774
  c->r[0]=c->lr; // 8012E778
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012E77C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012E780
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012E784
  c->r[30]=c->r[3]|c->r[3]; // 8012E788
  c->r[31]=c->r[4]|c->r[4]; // 8012E78C
  c->r[4]=0u+0x00000003u; // 8012E790
  c->lr=0x8012E798u; f_8012E2A8(c); // 8012E794
  cmps(c,0,(int32_t)c->r[3],0); // 8012E798
  if (!crb(c,2)) { goto L_8012E7B0; } // 8012E79C
  c->r[3]=c->r[30]+0x00000024u; // 8012E7A0
  c->r[4]=c->r[31]|c->r[31]; // 8012E7A4
  c->lr=0x8012E7ACu; f_800531D8(c); // 8012E7A8
  goto L_8012E7C4; // 8012E7AC
L_8012E7B0:;
  c->r[3]=c->r[30]+0x00000024u; // 8012E7B0
  c->lr=0x8012E7B8u; f_800537A4(c); // 8012E7B4
  c->r[4]=c->r[3]|c->r[3]; // 8012E7B8
  c->r[3]=c->r[30]+0x00000024u; // 8012E7BC
  c->lr=0x8012E7C4u; f_80053A90(c); // 8012E7C0
L_8012E7C4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012E7C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012E7C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012E7CC
  c->lr=c->r[0]; // 8012E7D0
  c->r[1]=c->r[1]+0x00000010u; // 8012E7D4
  return; // 8012E7D8
}

// fn_8012E7DC
void f_8012E7DC(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 8012E7DC
  W32(c->r[3]+0x000008CCu,c->r[0]); // 8012E7E0
  W32(c->r[3]+0x000008E0u,c->r[0]); // 8012E7E4
  W32(c->r[3]+0x000008F4u,c->r[0]); // 8012E7E8
  W32(c->r[3]+0x00000908u,c->r[0]); // 8012E7EC
  W32(c->r[3]+0x0000091Cu,c->r[0]); // 8012E7F0
  W32(c->r[3]+0x00000930u,c->r[0]); // 8012E7F4
  return; // 8012E7F8
}

// fn_8012E7FC
void f_8012E7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E7FC
  c->r[0]=c->lr; // 8012E800
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012E804
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012E808
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012E80C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012E810
  c->r[29]=c->r[3]|c->r[3]; // 8012E814
  c->r[30]=c->r[4]|c->r[4]; // 8012E818
  c->r[31]=c->r[5]|c->r[5]; // 8012E81C
  cmps(c,0,(int32_t)c->r[5],6); // 8012E820
  if (!crb(c,2)) { goto L_8012E84C; } // 8012E824
  c->r[31]=0u+0x00000000u; // 8012E828
L_8012E82C:;
  c->r[3]=c->r[29]|c->r[29]; // 8012E82C
  c->r[4]=c->r[30]|c->r[30]; // 8012E830
  c->r[5]=c->r[31]|c->r[31]; // 8012E834
  c->lr=0x8012E83Cu; f_8012E7FC(c); // 8012E838
  c->r[31]=c->r[31]+0x00000001u; // 8012E83C
  cmps(c,0,(int32_t)c->r[31],6); // 8012E840
  if (crb(c,0)) { IRQCHK(c); goto L_8012E82C; } // 8012E844
  goto L_8012E904; // 8012E848
L_8012E84C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8012E84C
  if (!crb(c,2)) { goto L_8012E864; } // 8012E850
  c->r[4]=0u+0x00000003u; // 8012E854
  c->lr=0x8012E85Cu; f_8012E2A8(c); // 8012E858
  cmps(c,0,(int32_t)c->r[3],0); // 8012E85C
  if (!crb(c,2)) { goto L_8012E8BC; } // 8012E860
L_8012E864:;
  cmps(c,0,(int32_t)c->r[30],0); // 8012E864
  if (crb(c,2)) { goto L_8012E894; } // 8012E868
  c->r[3]=c->r[29]+0x00000024u; // 8012E86C
  c->r[4]=c->r[31]|c->r[31]; // 8012E870
  c->r[5]=0u+0x00000001u; // 8012E874
  c->lr=0x8012E87Cu; f_80053168(c); // 8012E878
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 8012E87C
  c->r[3]=c->r[29]+c->r[0]; // 8012E880
  c->r[0]=R32(c->r[3]+0x000008D0u); // 8012E884
  c->r[0]=c->r[0]|0x00000002u; // 8012E888
  W32(c->r[3]+0x000008D0u,c->r[0]); // 8012E88C
  goto L_8012E904; // 8012E890
L_8012E894:;
  c->r[3]=c->r[29]+0x00000024u; // 8012E894
  c->r[4]=c->r[31]|c->r[31]; // 8012E898
  c->r[5]=0u+0x00000000u; // 8012E89C
  c->lr=0x8012E8A4u; f_80053168(c); // 8012E8A0
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 8012E8A4
  c->r[3]=c->r[29]+c->r[0]; // 8012E8A8
  c->r[0]=R32(c->r[3]+0x000008D0u); // 8012E8AC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8012E8B0
  W32(c->r[3]+0x000008D0u,c->r[0]); // 8012E8B4
  goto L_8012E904; // 8012E8B8
L_8012E8BC:;
  c->r[3]=c->r[29]+0x00000024u; // 8012E8BC
  c->lr=0x8012E8C4u; f_800537A4(c); // 8012E8C0
  c->r[4]=c->r[3]|c->r[3]; // 8012E8C4
  cmps(c,0,(int32_t)c->r[30],0); // 8012E8C8
  if (crb(c,2)) { goto L_8012E8EC; } // 8012E8CC
  c->r[3]=c->r[29]+0x00000024u; // 8012E8D0
  c->r[5]=0u+0x00000001u; // 8012E8D4
  c->lr=0x8012E8DCu; f_8005382C(c); // 8012E8D8
  c->r[0]=R32(c->r[29]+0x000008D0u); // 8012E8DC
  c->r[0]=c->r[0]|0x00000002u; // 8012E8E0
  W32(c->r[29]+0x000008D0u,c->r[0]); // 8012E8E4
  goto L_8012E904; // 8012E8E8
L_8012E8EC:;
  c->r[3]=c->r[29]+0x00000024u; // 8012E8EC
  c->r[5]=0u+0x00000000u; // 8012E8F0
  c->lr=0x8012E8F8u; f_8005382C(c); // 8012E8F4
  c->r[0]=R32(c->r[29]+0x000008D0u); // 8012E8F8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 8012E8FC
  W32(c->r[29]+0x000008D0u,c->r[0]); // 8012E900
L_8012E904:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012E904
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012E908
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012E90C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012E910
  c->lr=c->r[0]; // 8012E914
  c->r[1]=c->r[1]+0x00000020u; // 8012E918
  return; // 8012E91C
}

// fn_8012E920
void f_8012E920(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012E920
  c->r[0]=c->lr; // 8012E924
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012E928
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012E92C
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012E930
  W32(c->r[1]+0x00000010u,c->r[30]); // 8012E934
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 8012E938
  c->r[29]=c->r[3]|c->r[3]; // 8012E93C
  c->f[31]=c->f[1]; // 8012E940
  c->r[30]=c->r[4]|c->r[4]; // 8012E944
  cmps(c,0,(int32_t)c->r[4],6); // 8012E948
  if (!crb(c,2)) { goto L_8012E974; } // 8012E94C
  c->r[31]=0u+0x00000000u; // 8012E950
L_8012E954:;
  c->r[3]=c->r[29]|c->r[29]; // 8012E954
  c->f[1]=c->f[31]; // 8012E958
  c->r[4]=c->r[31]|c->r[31]; // 8012E95C
  c->lr=0x8012E964u; f_8012E920(c); // 8012E960
  c->r[31]=c->r[31]+0x00000001u; // 8012E964
  cmps(c,0,(int32_t)c->r[31],6); // 8012E968
  if (crb(c,0)) { IRQCHK(c); goto L_8012E954; } // 8012E96C
  goto L_8012E9EC; // 8012E970
L_8012E974:;
  cmps(c,0,(int32_t)c->r[4],0); // 8012E974
  if (!crb(c,2)) { goto L_8012E98C; } // 8012E978
  c->r[4]=0u+0x00000003u; // 8012E97C
  c->lr=0x8012E984u; f_8012E2A8(c); // 8012E980
  cmps(c,0,(int32_t)c->r[3],0); // 8012E984
  if (!crb(c,2)) { goto L_8012E9C0; } // 8012E988
L_8012E98C:;
  c->r[31]=(uint32_t)((int32_t)c->r[30]*(int32_t)20); // 8012E98C
  c->r[3]=c->r[29]+c->r[31]; // 8012E990
  c->r[0]=R32(c->r[3]+0x000008D0u); // 8012E994
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8012E998
  cmps(c,0,(int32_t)c->r[0],0); // 8012E99C
  if (!crb(c,2)) { goto L_8012E9B4; } // 8012E9A0
  c->r[3]=c->r[29]+0x00000024u; // 8012E9A4
  c->r[4]=c->r[30]|c->r[30]; // 8012E9A8
  c->f[1]=c->f[31]; // 8012E9AC
  c->lr=0x8012E9B4u; f_800530FC(c); // 8012E9B0
L_8012E9B4:;
  c->r[3]=c->r[29]+c->r[31]; // 8012E9B4
  {uint32_t ea=c->r[3]+0x000008D4u; WF32(ea,c->f[31]);} // 8012E9B8
  goto L_8012E9EC; // 8012E9BC
L_8012E9C0:;
  c->r[3]=c->r[29]+0x00000024u; // 8012E9C0
  c->lr=0x8012E9C8u; f_800537A4(c); // 8012E9C4
  c->r[4]=c->r[3]|c->r[3]; // 8012E9C8
  c->r[0]=R32(c->r[29]+0x000008D0u); // 8012E9CC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8012E9D0
  cmps(c,0,(int32_t)c->r[0],0); // 8012E9D4
  if (!crb(c,2)) { goto L_8012E9E8; } // 8012E9D8
  c->r[3]=c->r[29]+0x00000024u; // 8012E9DC
  c->f[1]=c->f[31]; // 8012E9E0
  c->lr=0x8012E9E8u; f_800537A8(c); // 8012E9E4
L_8012E9E8:;
  {uint32_t ea=c->r[29]+0x000008D4u; WF32(ea,c->f[31]);} // 8012E9E8
L_8012E9EC:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012E9EC
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012E9F0
  c->r[30]=R32(c->r[1]+0x00000010u); // 8012E9F4
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 8012E9F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012E9FC
  c->lr=c->r[0]; // 8012EA00
  c->r[1]=c->r[1]+0x00000020u; // 8012EA04
  return; // 8012EA08
}

// fn_8012EA0C
void f_8012EA0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012EA0C
  c->r[0]=c->lr; // 8012EA10
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012EA14
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012EA18
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012EA1C
  W32(c->r[1]+0x00000010u,c->r[30]); // 8012EA20
  c->r[30]=c->r[3]|c->r[3]; // 8012EA24
  c->f[31]=c->f[1]; // 8012EA28
  c->r[31]=c->r[4]|c->r[4]; // 8012EA2C
  cmps(c,0,(int32_t)c->r[4],6); // 8012EA30
  if (!crb(c,2)) { goto L_8012EA5C; } // 8012EA34
  c->r[31]=0u+0x00000000u; // 8012EA38
L_8012EA3C:;
  c->r[3]=c->r[30]|c->r[30]; // 8012EA3C
  c->f[1]=c->f[31]; // 8012EA40
  c->r[4]=c->r[31]|c->r[31]; // 8012EA44
  c->lr=0x8012EA4Cu; f_8012EA0C(c); // 8012EA48
  c->r[31]=c->r[31]+0x00000001u; // 8012EA4C
  cmps(c,0,(int32_t)c->r[31],6); // 8012EA50
  if (crb(c,0)) { IRQCHK(c); goto L_8012EA3C; } // 8012EA54
  goto L_8012EAA0; // 8012EA58
L_8012EA5C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8012EA5C
  if (!crb(c,2)) { goto L_8012EA74; } // 8012EA60
  c->r[4]=0u+0x00000003u; // 8012EA64
  c->lr=0x8012EA6Cu; f_8012E2A8(c); // 8012EA68
  cmps(c,0,(int32_t)c->r[3],0); // 8012EA6C
  if (!crb(c,2)) { goto L_8012EA88; } // 8012EA70
L_8012EA74:;
  c->r[3]=c->r[30]+0x00000024u; // 8012EA74
  c->r[4]=c->r[31]|c->r[31]; // 8012EA78
  c->f[1]=c->f[31]; // 8012EA7C
  c->lr=0x8012EA84u; f_800530EC(c); // 8012EA80
  goto L_8012EAA0; // 8012EA84
L_8012EA88:;
  c->r[3]=c->r[30]+0x00000024u; // 8012EA88
  c->lr=0x8012EA90u; f_800537A4(c); // 8012EA8C
  c->r[4]=c->r[3]|c->r[3]; // 8012EA90
  c->r[3]=c->r[30]+0x00000024u; // 8012EA94
  c->f[1]=c->f[31]; // 8012EA98
  c->lr=0x8012EAA0u; f_800538B0(c); // 8012EA9C
L_8012EAA0:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012EAA0
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012EAA4
  c->r[30]=R32(c->r[1]+0x00000010u); // 8012EAA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012EAAC
  c->lr=c->r[0]; // 8012EAB0
  c->r[1]=c->r[1]+0x00000020u; // 8012EAB4
  return; // 8012EAB8
}

// fn_8012EABC
void f_8012EABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012EABC
  c->r[0]=c->lr; // 8012EAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012EAC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012EAC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012EACC
  c->r[30]=c->r[3]|c->r[3]; // 8012EAD0
  c->r[31]=c->r[4]|c->r[4]; // 8012EAD4
  cmps(c,0,(int32_t)c->r[4],0); // 8012EAD8
  if (!crb(c,2)) { goto L_8012EAF0; } // 8012EADC
  c->r[4]=0u+0x00000003u; // 8012EAE0
  c->lr=0x8012EAE8u; f_8012E2A8(c); // 8012EAE4
  cmps(c,0,(int32_t)c->r[3],0); // 8012EAE8
  if (!crb(c,2)) { goto L_8012EB00; } // 8012EAEC
L_8012EAF0:;
  c->r[3]=c->r[30]+0x00000024u; // 8012EAF0
  c->r[4]=c->r[31]|c->r[31]; // 8012EAF4
  c->lr=0x8012EAFCu; f_80053280(c); // 8012EAF8
  goto L_8012EB14; // 8012EAFC
L_8012EB00:;
  c->r[3]=c->r[30]+0x00000024u; // 8012EB00
  c->lr=0x8012EB08u; f_800537A4(c); // 8012EB04
  c->r[4]=c->r[3]|c->r[3]; // 8012EB08
  c->r[3]=c->r[30]+0x00000024u; // 8012EB0C
  c->lr=0x8012EB14u; f_80053940(c); // 8012EB10
L_8012EB14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012EB14
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012EB18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012EB1C
  c->lr=c->r[0]; // 8012EB20
  c->r[1]=c->r[1]+0x00000010u; // 8012EB24
  return; // 8012EB28
}

// fn_8012EB2C
void f_8012EB2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012EB2C
  c->r[0]=c->lr; // 8012EB30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012EB34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012EB38
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012EB3C
  c->r[30]=c->r[3]|c->r[3]; // 8012EB40
  c->r[31]=c->r[4]|c->r[4]; // 8012EB44
  cmps(c,0,(int32_t)c->r[4],6); // 8012EB48
  if (!crb(c,2)) { goto L_8012EB70; } // 8012EB4C
  c->r[31]=0u+0x00000000u; // 8012EB50
L_8012EB54:;
  c->r[3]=c->r[30]|c->r[30]; // 8012EB54
  c->r[4]=c->r[31]|c->r[31]; // 8012EB58
  c->lr=0x8012EB60u; f_8012EB2C(c); // 8012EB5C
  c->r[31]=c->r[31]+0x00000001u; // 8012EB60
  cmps(c,0,(int32_t)c->r[31],6); // 8012EB64
  if (crb(c,0)) { IRQCHK(c); goto L_8012EB54; } // 8012EB68
  goto L_8012EBC8; // 8012EB6C
L_8012EB70:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8012EB70
  c->r[5]=c->r[3]+c->r[0]; // 8012EB74
  c->r[0]=R32(c->r[5]+0x000008D0u); // 8012EB78
  c->r[0]=c->r[0]|0x00000001u; // 8012EB7C
  W32(c->r[5]+0x000008D0u,c->r[0]); // 8012EB80
  cmps(c,0,(int32_t)c->r[4],0); // 8012EB84
  if (!crb(c,2)) { goto L_8012EB9C; } // 8012EB88
  c->r[4]=0u+0x00000003u; // 8012EB8C
  c->lr=0x8012EB94u; f_8012E2A8(c); // 8012EB90
  cmps(c,0,(int32_t)c->r[3],0); // 8012EB94
  if (!crb(c,2)) { goto L_8012EBB0; } // 8012EB98
L_8012EB9C:;
  c->r[3]=c->r[30]+0x00000024u; // 8012EB9C
  c->r[4]=c->r[31]|c->r[31]; // 8012EBA0
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012EBA4
  c->lr=0x8012EBACu; f_800530FC(c); // 8012EBA8
  goto L_8012EBC8; // 8012EBAC
L_8012EBB0:;
  c->r[3]=c->r[30]+0x00000024u; // 8012EBB0
  c->lr=0x8012EBB8u; f_800537A4(c); // 8012EBB4
  c->r[4]=c->r[3]|c->r[3]; // 8012EBB8
  c->r[3]=c->r[30]+0x00000024u; // 8012EBBC
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012EBC0
  c->lr=0x8012EBC8u; f_800537A8(c); // 8012EBC4
L_8012EBC8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012EBC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012EBCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012EBD0
  c->lr=c->r[0]; // 8012EBD4
  c->r[1]=c->r[1]+0x00000010u; // 8012EBD8
  return; // 8012EBDC
}

// fn_8012EBE0
void f_8012EBE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012EBE0
  c->r[0]=c->lr; // 8012EBE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012EBE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012EBEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012EBF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012EBF4
  c->r[29]=c->r[3]|c->r[3]; // 8012EBF8
  c->r[30]=c->r[4]|c->r[4]; // 8012EBFC
  cmps(c,0,(int32_t)c->r[4],6); // 8012EC00
  if (!crb(c,2)) { goto L_8012EC28; } // 8012EC04
  c->r[31]=0u+0x00000000u; // 8012EC08
L_8012EC0C:;
  c->r[3]=c->r[29]|c->r[29]; // 8012EC0C
  c->r[4]=c->r[31]|c->r[31]; // 8012EC10
  c->lr=0x8012EC18u; f_8012EBE0(c); // 8012EC14
  c->r[31]=c->r[31]+0x00000001u; // 8012EC18
  cmps(c,0,(int32_t)c->r[31],6); // 8012EC1C
  if (crb(c,0)) { IRQCHK(c); goto L_8012EC0C; } // 8012EC20
  goto L_8012EC88; // 8012EC24
L_8012EC28:;
  c->r[31]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8012EC28
  c->r[5]=c->r[3]+c->r[31]; // 8012EC2C
  c->r[0]=R32(c->r[5]+0x000008D0u); // 8012EC30
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 8012EC34
  W32(c->r[5]+0x000008D0u,c->r[0]); // 8012EC38
  cmps(c,0,(int32_t)c->r[4],0); // 8012EC3C
  if (!crb(c,2)) { goto L_8012EC54; } // 8012EC40
  c->r[4]=0u+0x00000003u; // 8012EC44
  c->lr=0x8012EC4Cu; f_8012E2A8(c); // 8012EC48
  cmps(c,0,(int32_t)c->r[3],0); // 8012EC4C
  if (!crb(c,2)) { goto L_8012EC6C; } // 8012EC50
L_8012EC54:;
  c->r[3]=c->r[29]+0x00000024u; // 8012EC54
  c->r[4]=c->r[30]|c->r[30]; // 8012EC58
  c->r[5]=c->r[29]+c->r[31]; // 8012EC5C
  {uint32_t ea=c->r[5]+0x000008D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012EC60
  c->lr=0x8012EC68u; f_800530FC(c); // 8012EC64
  goto L_8012EC88; // 8012EC68
L_8012EC6C:;
  c->r[3]=c->r[29]+0x00000024u; // 8012EC6C
  c->lr=0x8012EC74u; f_800537A4(c); // 8012EC70
  c->r[4]=c->r[3]|c->r[3]; // 8012EC74
  c->r[3]=c->r[29]+0x00000024u; // 8012EC78
  c->r[5]=c->r[29]+c->r[31]; // 8012EC7C
  {uint32_t ea=c->r[5]+0x000008D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012EC80
  c->lr=0x8012EC88u; f_800537A8(c); // 8012EC84
L_8012EC88:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012EC88
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012EC8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012EC90
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012EC94
  c->lr=c->r[0]; // 8012EC98
  c->r[1]=c->r[1]+0x00000020u; // 8012EC9C
  return; // 8012ECA0
}

// fn_8012ECA4
void f_8012ECA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012ECA4
  c->r[0]=c->lr; // 8012ECA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012ECAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012ECB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012ECB4
  c->r[30]=c->r[3]|c->r[3]; // 8012ECB8
  c->r[31]=c->r[4]|c->r[4]; // 8012ECBC
  cmps(c,0,(int32_t)c->r[4],0); // 8012ECC0
  if (!crb(c,2)) { goto L_8012ECD8; } // 8012ECC4
  c->r[4]=0u+0x00000003u; // 8012ECC8
  c->lr=0x8012ECD0u; f_8012E2A8(c); // 8012ECCC
  cmps(c,0,(int32_t)c->r[3],0); // 8012ECD0
  if (!crb(c,2)) { goto L_8012ECE8; } // 8012ECD4
L_8012ECD8:;
  c->r[3]=c->r[30]+0x00000024u; // 8012ECD8
  c->r[4]=c->r[31]|c->r[31]; // 8012ECDC
  c->lr=0x8012ECE4u; f_80053280(c); // 8012ECE0
  goto L_8012ECFC; // 8012ECE4
L_8012ECE8:;
  c->r[3]=c->r[30]+0x00000024u; // 8012ECE8
  c->lr=0x8012ECF0u; f_800537A4(c); // 8012ECEC
  c->r[4]=c->r[3]|c->r[3]; // 8012ECF0
  c->r[3]=c->r[30]+0x00000024u; // 8012ECF4
  c->lr=0x8012ECFCu; f_80053940(c); // 8012ECF8
L_8012ECFC:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)20); // 8012ECFC
  c->r[3]=c->r[30]+c->r[0]; // 8012ED00
  {uint32_t ea=c->r[3]+0x000008D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012ED04
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012ED08
  fcmp(c,0,c->f[2],c->f[0]); // 8012ED0C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8012ED10
  if (!crb(c,2)) { goto L_8012ED30; } // 8012ED14
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8012ED18
  {uint32_t ea=c->r[3]+0x000008DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012ED1C
  fcmp(c,0,c->f[1],c->f[0]); // 8012ED20
  c->r[3]=c->cr; // 8012ED24
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8012ED28
  goto L_8012ED44; // 8012ED2C
L_8012ED30:;
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8012ED30
  {uint32_t ea=c->r[3]+0x000008D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012ED34
  fcmp(c,0,c->f[1],c->f[0]); // 8012ED38
  c->r[3]=c->cr; // 8012ED3C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8012ED40
L_8012ED44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012ED44
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012ED48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012ED4C
  c->lr=c->r[0]; // 8012ED50
  c->r[1]=c->r[1]+0x00000010u; // 8012ED54
  return; // 8012ED58
}

// fn_8012ED5C
void f_8012ED5C(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)20); // 8012ED5C
  c->r[3]=c->r[3]+c->r[0]; // 8012ED60
  c->r[0]=R32(c->r[3]+0x000008D0u); // 8012ED64
  c->r[3]=rotl(c->r[0],0)&0x00000001u; // 8012ED68
  c->r[0]=0u-c->r[3]; // 8012ED6C
  c->r[0]=c->r[0]|c->r[3]; // 8012ED70
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8012ED74
  return; // 8012ED78
}

// fn_8012ED7C
void f_8012ED7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012ED7C
  c->r[0]=c->lr; // 8012ED80
  W32(c->r[1]+0x00000034u,c->r[0]); // 8012ED84
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 8012ED88
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8012ED8C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[29]);} // 8012ED90
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012ED94
  W32(c->r[1]+0x00000010u,c->r[30]); // 8012ED98
  c->r[30]=c->r[3]|c->r[3]; // 8012ED9C
  c->f[29]=c->f[1]; // 8012EDA0
  c->f[30]=c->f[2]; // 8012EDA4
  c->f[31]=c->f[3]; // 8012EDA8
  c->r[31]=c->r[4]|c->r[4]; // 8012EDAC
  c->r[4]=0u+0x00000001u; // 8012EDB0
  c->lr=0x8012EDB8u; f_8012E2A8(c); // 8012EDB4
  cmps(c,0,(int32_t)c->r[3],0); // 8012EDB8
  if (crb(c,2)) { goto L_8012EDF0; } // 8012EDBC
  {uint32_t ea=c->r[30]+0x00000980u; WF32(ea,c->f[29]);} // 8012EDC0
  {uint32_t ea=c->r[30]+0x00000984u; WF32(ea,c->f[30]);} // 8012EDC4
  {uint32_t ea=c->r[30]+0x00000988u; WF32(ea,c->f[31]);} // 8012EDC8
  c->r[0]=c->r[31]+0x00010000u; // 8012EDCC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8012EDD0
  if (!crb(c,2)) { goto L_8012EDE4; } // 8012EDD4
  c->r[3]=c->r[30]|c->r[30]; // 8012EDD8
  c->lr=0x8012EDE0u; f_8012E4E4(c); // 8012EDDC
  goto L_8012EDF0; // 8012EDE0
L_8012EDE4:;
  c->r[3]=c->r[30]|c->r[30]; // 8012EDE4
  c->r[4]=c->r[31]|c->r[31]; // 8012EDE8
  c->lr=0x8012EDF0u; f_8012E2C8(c); // 8012EDEC
L_8012EDF0:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 8012EDF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8012EDF4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[29]=RF64(ea);} // 8012EDF8
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012EDFC
  c->r[30]=R32(c->r[1]+0x00000010u); // 8012EE00
  c->r[0]=R32(c->r[1]+0x00000034u); // 8012EE04
  c->lr=c->r[0]; // 8012EE08
  c->r[1]=c->r[1]+0x00000030u; // 8012EE0C
  return; // 8012EE10
}

// fn_8012EE14
void f_8012EE14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012EE14
  c->r[0]=c->lr; // 8012EE18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012EE1C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8012EE20
  W32(c->r[1]+0x00000014u,c->r[31]); // 8012EE24
  W32(c->r[1]+0x00000010u,c->r[30]); // 8012EE28
  c->r[30]=c->r[3]|c->r[3]; // 8012EE2C
  c->f[31]=c->f[1]; // 8012EE30
  c->r[31]=c->r[4]|c->r[4]; // 8012EE34
  c->r[4]=0u+0x00000001u; // 8012EE38
  c->lr=0x8012EE40u; f_8012E2A8(c); // 8012EE3C
  cmps(c,0,(int32_t)c->r[3],0); // 8012EE40
  if (crb(c,2)) { goto L_8012EE70; } // 8012EE44
  {uint32_t ea=c->r[30]+0x0000098Cu; WF32(ea,c->f[31]);} // 8012EE48
  c->r[0]=c->r[31]+0x00010000u; // 8012EE4C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8012EE50
  if (!crb(c,2)) { goto L_8012EE64; } // 8012EE54
  c->r[3]=c->r[30]|c->r[30]; // 8012EE58
  c->lr=0x8012EE60u; f_8012E4E4(c); // 8012EE5C
  goto L_8012EE70; // 8012EE60
L_8012EE64:;
  c->r[3]=c->r[30]|c->r[30]; // 8012EE64
  c->r[4]=c->r[31]|c->r[31]; // 8012EE68
  c->lr=0x8012EE70u; f_8012E2C8(c); // 8012EE6C
L_8012EE70:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8012EE70
  c->r[31]=R32(c->r[1]+0x00000014u); // 8012EE74
  c->r[30]=R32(c->r[1]+0x00000010u); // 8012EE78
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012EE7C
  c->lr=c->r[0]; // 8012EE80
  c->r[1]=c->r[1]+0x00000020u; // 8012EE84
  return; // 8012EE88
}

// fn_8012EE8C
void f_8012EE8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012EE8C
  c->r[0]=c->lr; // 8012EE90
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012EE94
  c->r[11]=c->r[1]+0x00000020u; // 8012EE98
  c->lr=0x8012EEA0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8012EE9C
  c->r[31]=c->r[3]|c->r[3]; // 8012EEA0
  c->r[26]=c->r[4]|c->r[4]; // 8012EEA4
  c->r[27]=c->r[5]|c->r[5]; // 8012EEA8
  c->r[28]=c->r[6]|c->r[6]; // 8012EEAC
  c->r[0]=R32(c->r[3]+0x00000990u); // 8012EEB0
  cmps(c,0,(int32_t)c->r[0],0); // 8012EEB4
  if (crb(c,2)) { goto L_8012EEE4; } // 8012EEB8
  c->lr=0x8012EEC0u; f_80056B5C(c); // 8012EEBC
  c->r[30]=c->r[3]|c->r[3]; // 8012EEC0
  c->lr=0x8012EEC8u; f_8005DEE8(c); // 8012EEC4
  c->lr=0x8012EECCu; f_80056B54(c); // 8012EEC8
  c->r[3]=R32(c->r[31]+0x00000990u); // 8012EECC
  c->lr=0x8012EED4u; f_80047B20(c); // 8012EED0
  c->r[3]=c->r[30]|c->r[30]; // 8012EED4
  c->lr=0x8012EEDCu; f_80056B54(c); // 8012EED8
  c->r[0]=0u+0x00000000u; // 8012EEDC
  W32(c->r[31]+0x00000990u,c->r[0]); // 8012EEE0
L_8012EEE4:;
  c->r[0]=R32(c->r[31]+0x00000994u); // 8012EEE4
  cmps(c,0,(int32_t)c->r[0],0); // 8012EEE8
  if (crb(c,2)) { goto L_8012EF18; } // 8012EEEC
  c->lr=0x8012EEF4u; f_80056B5C(c); // 8012EEF0
  c->r[30]=c->r[3]|c->r[3]; // 8012EEF4
  c->lr=0x8012EEFCu; f_8005DEE8(c); // 8012EEF8
  c->lr=0x8012EF00u; f_80056B54(c); // 8012EEFC
  c->r[3]=R32(c->r[31]+0x00000994u); // 8012EF00
  c->lr=0x8012EF08u; f_80047B20(c); // 8012EF04
  c->r[3]=c->r[30]|c->r[30]; // 8012EF08
  c->lr=0x8012EF10u; f_80056B54(c); // 8012EF0C
  c->r[0]=0u+0x00000000u; // 8012EF10
  W32(c->r[31]+0x00000994u,c->r[0]); // 8012EF14
L_8012EF18:;
  c->lr=0x8012EF1Cu; f_8006E268(c); // 8012EF18
  c->r[3]=c->r[3]+0x00010000u; // 8012EF1C
  c->r[3]=c->r[3]+0xFFFF8A78u; // 8012EF20
  c->r[4]=c->r[26]|c->r[26]; // 8012EF24
  c->lr=0x8012EF2Cu; f_80077688(c); // 8012EF28
  c->r[30]=c->r[3]|c->r[3]; // 8012EF2C
  c->r[3]=c->r[3]+0x00000024u; // 8012EF30
  c->r[4]=c->r[31]+0x000009C8u; // 8012EF34
  c->r[5]=c->r[27]|c->r[27]; // 8012EF38
  c->lr=0x8012EF40u; f_800532CC(c); // 8012EF3C
  cmps(c,0,(int32_t)c->r[26],0); // 8012EF40
  if (crb(c,2)) { goto L_8012EF88; } // 8012EF44
  c->lr=0x8012EF4Cu; f_80056B5C(c); // 8012EF48
  c->r[29]=c->r[3]|c->r[3]; // 8012EF4C
  c->lr=0x8012EF54u; f_8005DEE8(c); // 8012EF50
  c->lr=0x8012EF58u; f_80056B54(c); // 8012EF54
  c->r[3]=c->r[26]|c->r[26]; // 8012EF58
  c->lr=0x8012EF60u; f_802F0250(c); // 8012EF5C
  c->r[3]=c->r[3]+0x00000001u; // 8012EF60
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8012EF64
  c->r[3]=c->r[0]-c->r[3]; // 8012EF68
  c->lr=0x8012EF70u; f_80054464(c); // 8012EF6C
  W32(c->r[31]+0x00000990u,c->r[3]); // 8012EF70
  c->r[3]=c->r[29]|c->r[29]; // 8012EF74
  c->lr=0x8012EF7Cu; f_80056B54(c); // 8012EF78
  c->r[3]=R32(c->r[31]+0x00000990u); // 8012EF7C
  c->r[4]=c->r[26]|c->r[26]; // 8012EF80
  c->lr=0x8012EF88u; f_802E9548(c); // 8012EF84
L_8012EF88:;
  cmps(c,0,(int32_t)c->r[27],0); // 8012EF88
  if (crb(c,2)) { goto L_8012EFD0; } // 8012EF8C
  c->lr=0x8012EF94u; f_80056B5C(c); // 8012EF90
  c->r[29]=c->r[3]|c->r[3]; // 8012EF94
  c->lr=0x8012EF9Cu; f_8005DEE8(c); // 8012EF98
  c->lr=0x8012EFA0u; f_80056B54(c); // 8012EF9C
  c->r[3]=c->r[27]|c->r[27]; // 8012EFA0
  c->lr=0x8012EFA8u; f_802F0250(c); // 8012EFA4
  c->r[3]=c->r[3]+0x00000001u; // 8012EFA8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8012EFAC
  c->r[3]=c->r[0]-c->r[3]; // 8012EFB0
  c->lr=0x8012EFB8u; f_80054464(c); // 8012EFB4
  W32(c->r[31]+0x00000994u,c->r[3]); // 8012EFB8
  c->r[3]=c->r[29]|c->r[29]; // 8012EFBC
  c->lr=0x8012EFC4u; f_80056B54(c); // 8012EFC0
  c->r[3]=R32(c->r[31]+0x00000994u); // 8012EFC4
  c->r[4]=c->r[27]|c->r[27]; // 8012EFC8
  c->lr=0x8012EFD0u; f_802E9548(c); // 8012EFCC
L_8012EFD0:;
  cmps(c,0,(int32_t)c->r[28],0); // 8012EFD0
  if (crb(c,2)) { goto L_8012EFE8; } // 8012EFD4
  c->r[3]=c->r[31]|c->r[31]; // 8012EFD8
  c->r[4]=0u+0x00000007u; // 8012EFDC
  c->lr=0x8012EFE4u; f_8012E274(c); // 8012EFE0
  goto L_8012EFF4; // 8012EFE4
L_8012EFE8:;
  c->r[3]=c->r[31]|c->r[31]; // 8012EFE8
  c->r[4]=0u+0x00000007u; // 8012EFEC
  c->lr=0x8012EFF4u; f_8012E28C(c); // 8012EFF0
L_8012EFF4:;
  cmps(c,0,(int32_t)c->r[28],0); // 8012EFF4
  if (!crb(c,2)) { goto L_8012F008; } // 8012EFF8
  c->r[3]=c->r[30]|c->r[30]; // 8012EFFC
  c->r[4]=c->r[31]|c->r[31]; // 8012F000
  c->lr=0x8012F008u; f_8012E58C(c); // 8012F004
L_8012F008:;
  c->r[3]=c->r[31]|c->r[31]; // 8012F008
  c->r[4]=0u+0x00000006u; // 8012F00C
  c->lr=0x8012F014u; f_8012E274(c); // 8012F010
  c->r[11]=c->r[1]+0x00000020u; // 8012F014
  c->lr=0x8012F01Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8012F018
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012F01C
  c->lr=c->r[0]; // 8012F020
  c->r[1]=c->r[1]+0x00000020u; // 8012F024
  return; // 8012F028
}

// fn_8012F02C
void f_8012F02C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F02C
  c->r[0]=c->lr; // 8012F030
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F034
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F038
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012F03C
  c->r[30]=c->r[3]|c->r[3]; // 8012F040
  c->r[31]=R32(c->r[3]+0x00000990u); // 8012F044
  cmps(c,0,(int32_t)c->r[31],0); // 8012F048
  if (crb(c,2)) { goto L_8012F0F0; } // 8012F04C
  c->lr=0x8012F054u; f_8006E268(c); // 8012F050
  c->r[3]=c->r[3]+0x00010000u; // 8012F054
  c->r[3]=c->r[3]+0xFFFF8A78u; // 8012F058
  c->r[4]=c->r[31]|c->r[31]; // 8012F05C
  c->lr=0x8012F064u; f_80077688(c); // 8012F060
  c->r[31]=c->r[3]|c->r[3]; // 8012F064
  c->r[3]=c->r[30]|c->r[30]; // 8012F068
  c->r[4]=0u+0x00000007u; // 8012F06C
  c->lr=0x8012F074u; f_8012E2A8(c); // 8012F070
  cmps(c,0,(int32_t)c->r[3],0); // 8012F074
  if (!crb(c,2)) { goto L_8012F088; } // 8012F078
  c->r[3]=c->r[31]|c->r[31]; // 8012F07C
  c->r[4]=c->r[30]|c->r[30]; // 8012F080
  c->lr=0x8012F088u; f_8012E5F0(c); // 8012F084
L_8012F088:;
  c->r[0]=R32(c->r[30]+0x00000990u); // 8012F088
  cmps(c,0,(int32_t)c->r[0],0); // 8012F08C
  if (crb(c,2)) { goto L_8012F0BC; } // 8012F090
  c->lr=0x8012F098u; f_80056B5C(c); // 8012F094
  c->r[31]=c->r[3]|c->r[3]; // 8012F098
  c->lr=0x8012F0A0u; f_8005DEE8(c); // 8012F09C
  c->lr=0x8012F0A4u; f_80056B54(c); // 8012F0A0
  c->r[3]=R32(c->r[30]+0x00000990u); // 8012F0A4
  c->lr=0x8012F0ACu; f_80047B20(c); // 8012F0A8
  c->r[3]=c->r[31]|c->r[31]; // 8012F0AC
  c->lr=0x8012F0B4u; f_80056B54(c); // 8012F0B0
  c->r[0]=0u+0x00000000u; // 8012F0B4
  W32(c->r[30]+0x00000990u,c->r[0]); // 8012F0B8
L_8012F0BC:;
  c->r[0]=R32(c->r[30]+0x00000994u); // 8012F0BC
  cmps(c,0,(int32_t)c->r[0],0); // 8012F0C0
  if (crb(c,2)) { goto L_8012F0F0; } // 8012F0C4
  c->lr=0x8012F0CCu; f_80056B5C(c); // 8012F0C8
  c->r[31]=c->r[3]|c->r[3]; // 8012F0CC
  c->lr=0x8012F0D4u; f_8005DEE8(c); // 8012F0D0
  c->lr=0x8012F0D8u; f_80056B54(c); // 8012F0D4
  c->r[3]=R32(c->r[30]+0x00000994u); // 8012F0D8
  c->lr=0x8012F0E0u; f_80047B20(c); // 8012F0DC
  c->r[3]=c->r[31]|c->r[31]; // 8012F0E0
  c->lr=0x8012F0E8u; f_80056B54(c); // 8012F0E4
  c->r[0]=0u+0x00000000u; // 8012F0E8
  W32(c->r[30]+0x00000994u,c->r[0]); // 8012F0EC
L_8012F0F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F0F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012F0F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F0F8
  c->lr=c->r[0]; // 8012F0FC
  c->r[1]=c->r[1]+0x00000010u; // 8012F100
  return; // 8012F104
}

// fn_8012F108
void f_8012F108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F108
  c->r[0]=c->lr; // 8012F10C
  W32(c->r[1]+0x00000124u,c->r[0]); // 8012F110
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 8012F114
  c->r[31]=c->r[3]|c->r[3]; // 8012F118
  c->r[3]=c->r[1]+0x000000E0u; // 8012F11C
  c->lr=0x8012F124u; f_8004B0A0(c); // 8012F120
  c->r[3]=c->r[1]+0x000000B0u; // 8012F124
  c->lr=0x8012F12Cu; f_8004B0A0(c); // 8012F128
  c->r[3]=c->r[1]+0x00000080u; // 8012F12C
  c->lr=0x8012F134u; f_8004B0A0(c); // 8012F130
  c->r[3]=c->r[1]+0x00000050u; // 8012F134
  c->lr=0x8012F13Cu; f_8004B0A0(c); // 8012F138
  c->r[3]=c->r[1]+0x00000020u; // 8012F13C
  c->lr=0x8012F144u; f_8004B0A0(c); // 8012F140
  c->r[3]=c->r[1]+0x00000014u; // 8012F144
  c->lr=0x8012F14Cu; f_8004B0A4(c); // 8012F148
  c->r[3]=c->r[1]+0x00000008u; // 8012F14C
  c->lr=0x8012F154u; f_8004B0A4(c); // 8012F150
  c->r[0]=R32(c->r[31]+0x000008C8u); // 8012F154
  cmps(c,0,(int32_t)c->r[0],0); // 8012F158
  if (crb(c,2)) { goto L_8012F42C; } // 8012F15C
  c->r[0]=R32(c->r[31]+0x00000990u); // 8012F160
  cmps(c,0,(int32_t)c->r[0],0); // 8012F164
  if (crb(c,2)) { goto L_8012F42C; } // 8012F168
  c->r[3]=c->r[31]|c->r[31]; // 8012F16C
  c->r[4]=0u+0x00000004u; // 8012F170
  c->lr=0x8012F178u; f_8012E2A8(c); // 8012F174
  cmps(c,0,(int32_t)c->r[3],0); // 8012F178
  if (crb(c,2)) { goto L_8012F194; } // 8012F17C
  c->r[3]=c->r[31]|c->r[31]; // 8012F180
  c->r[4]=0u+0x00000005u; // 8012F184
  c->lr=0x8012F18Cu; f_8012E2A8(c); // 8012F188
  cmps(c,0,(int32_t)c->r[3],0); // 8012F18C
  if (!crb(c,2)) { goto L_8012F42C; } // 8012F190
L_8012F194:;
  c->r[3]=c->r[31]|c->r[31]; // 8012F194
  c->r[4]=0u+0x00000007u; // 8012F198
  c->lr=0x8012F1A0u; f_8012E2A8(c); // 8012F19C
  cmps(c,0,(int32_t)c->r[3],0); // 8012F1A0
  if (crb(c,2)) { goto L_8012F1E4; } // 8012F1A4
  c->r[3]=c->r[1]+0x000000E0u; // 8012F1A8
  c->r[4]=c->r[31]+0x000009C8u; // 8012F1AC
  c->lr=0x8012F1B4u; f_80049FD4(c); // 8012F1B0
  c->r[3]=c->r[31]+0x00000024u; // 8012F1B4
  c->lr=0x8012F1BCu; f_800549B4(c); // 8012F1B8
  cmps(c,0,(int32_t)c->r[3],0); // 8012F1BC
  if (crb(c,2)) { goto L_8012F248; } // 8012F1C0
  {uint32_t ea=c->r[1]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F1C4
  {uint32_t ea=c->r[2]+0xFFFF8C58u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F1C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8012F1CC
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8012F1D0
  {uint32_t ea=c->r[1]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F1D4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8012F1D8
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8012F1DC
  goto L_8012F248; // 8012F1E0
L_8012F1E4:;
  c->lr=0x8012F1E8u; f_8006E268(c); // 8012F1E4
  c->r[3]=c->r[3]+0x00010000u; // 8012F1E8
  c->r[3]=c->r[3]+0xFFFF8A78u; // 8012F1EC
  c->r[4]=R32(c->r[31]+0x00000990u); // 8012F1F0
  c->lr=0x8012F1F8u; f_80077688(c); // 8012F1F4
  c->r[3]=c->r[3]+0x00000024u; // 8012F1F8
  c->r[4]=c->r[1]+0x000000E0u; // 8012F1FC
  c->r[5]=R32(c->r[31]+0x00000994u); // 8012F200
  c->lr=0x8012F208u; f_800532CC(c); // 8012F204
  c->r[3]=c->r[31]|c->r[31]; // 8012F208
  c->r[4]=0u+0x00000006u; // 8012F20C
  c->lr=0x8012F214u; f_8012E2A8(c); // 8012F210
  cmps(c,0,(int32_t)c->r[3],0); // 8012F214
  if (!crb(c,2)) { goto L_8012F248; } // 8012F218
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F21C
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 8012F220
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F224
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8012F228
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8012F22C
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8012F230
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[1]);} // 8012F234
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8012F238
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8012F23C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8012F240
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 8012F244
L_8012F248:;
  c->r[3]=c->r[31]+0x00000024u; // 8012F248
  c->lr=0x8012F250u; f_800549B4(c); // 8012F24C
  cmps(c,0,(int32_t)c->r[3],0); // 8012F250
  if (crb(c,2)) { goto L_8012F3A4; } // 8012F254
  c->r[3]=c->r[31]|c->r[31]; // 8012F258
  c->r[4]=0u+0x00000008u; // 8012F25C
  c->lr=0x8012F264u; f_8012E2A8(c); // 8012F260
  cmps(c,0,(int32_t)c->r[3],0); // 8012F264
  if (crb(c,2)) { goto L_8012F274; } // 8012F268
  {uint32_t ea=c->r[31]+0x0000094Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F26C
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8012F270
L_8012F274:;
  c->r[3]=c->r[31]|c->r[31]; // 8012F274
  c->r[4]=0u+0x00000007u; // 8012F278
  c->lr=0x8012F280u; f_8012E2A8(c); // 8012F27C
  cmps(c,0,(int32_t)c->r[3],0); // 8012F280
  if (!crb(c,2)) { goto L_8012F29C; } // 8012F284
  c->r[3]=c->r[31]|c->r[31]; // 8012F288
  c->r[4]=0u+0x00000006u; // 8012F28C
  c->lr=0x8012F294u; f_8012E2A8(c); // 8012F290
  cmps(c,0,(int32_t)c->r[3],0); // 8012F294
  if (!crb(c,2)) { goto L_8012F394; } // 8012F298
L_8012F29C:;
  c->r[3]=c->r[1]+0x00000008u; // 8012F29C
  c->r[4]=c->r[31]+0x00000974u; // 8012F2A0
  c->lr=0x8012F2A8u; f_8004A65C(c); // 8012F2A4
  c->r[3]=c->r[1]+0x000000B0u; // 8012F2A8
  c->r[4]=c->r[1]+0x00000008u; // 8012F2AC
  c->r[5]=0u+0x804C0000u; // 8012F2B0
  c->r[5]=c->r[5]+0x000024B8u; // 8012F2B4
  c->lr=0x8012F2BCu; f_800548CC(c); // 8012F2B8
  c->r[3]=c->r[31]|c->r[31]; // 8012F2BC
  c->r[4]=0u+0x00000007u; // 8012F2C0
  c->lr=0x8012F2C8u; f_8012E2A8(c); // 8012F2C4
  cmps(c,0,(int32_t)c->r[3],0); // 8012F2C8
  if (crb(c,2)) { goto L_8012F2E8; } // 8012F2CC
  c->r[3]=c->r[1]+0x00000080u; // 8012F2D0
  {uint32_t ea=c->r[31]+0x00000968u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F2D4
  {uint32_t ea=c->r[31]+0x0000096Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8012F2D8
  {uint32_t ea=c->r[31]+0x00000970u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012F2DC
  c->lr=0x8012F2E4u; f_8004B0A8(c); // 8012F2E0
  goto L_8012F308; // 8012F2E4
L_8012F2E8:;
  c->r[3]=c->r[1]+0x00000080u; // 8012F2E8
  {uint32_t ea=c->r[31]+0x00000968u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F2EC
  {uint32_t ea=c->r[2]+0xFFFF8C5Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8012F2F0
  {uint32_t ea=c->r[31]+0x0000096Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F2F4
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[0]); // 8012F2F8
  {uint32_t ea=c->r[31]+0x00000970u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F2FC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 8012F300
  c->lr=0x8012F308u; f_8004B0A8(c); // 8012F304
L_8012F308:;
  c->r[3]=c->r[1]+0x00000050u; // 8012F308
  c->r[4]=c->r[1]+0x000000B0u; // 8012F30C
  c->r[5]=c->r[1]+0x00000080u; // 8012F310
  c->lr=0x8012F318u; f_80054854(c); // 8012F314
  c->r[3]=c->r[1]+0x00000020u; // 8012F318
  c->r[4]=c->r[1]+0x000000E0u; // 8012F31C
  c->r[5]=c->r[1]+0x00000050u; // 8012F320
  c->lr=0x8012F328u; f_80054854(c); // 8012F324
  c->r[3]=c->r[31]|c->r[31]; // 8012F328
  c->r[4]=0u+0x00000007u; // 8012F32C
  c->lr=0x8012F334u; f_8012E2A8(c); // 8012F330
  cmps(c,0,(int32_t)c->r[3],0); // 8012F334
  if (crb(c,2)) { goto L_8012F360; } // 8012F338
  c->r[3]=c->r[1]+0x00000014u; // 8012F33C
  c->r[4]=c->r[31]+0x00000944u; // 8012F340
  c->r[5]=c->r[31]+0x00000950u; // 8012F344
  c->lr=0x8012F34Cu; f_8005C194(c); // 8012F348
  c->r[3]=c->r[1]+0x00000014u; // 8012F34C
  c->r[4]=c->r[3]|c->r[3]; // 8012F350
  c->r[5]=c->r[31]+0x0000095Cu; // 8012F354
  c->lr=0x8012F35Cu; f_8005C194(c); // 8012F358
  goto L_8012F380; // 8012F35C
L_8012F360:;
  c->r[3]=c->r[1]+0x00000014u; // 8012F360
  c->r[4]=c->r[31]+0x00000950u; // 8012F364
  c->r[5]=c->r[31]+0x0000095Cu; // 8012F368
  c->lr=0x8012F370u; f_8005C194(c); // 8012F36C
  c->r[3]=c->r[31]+0x00000998u; // 8012F370
  c->r[4]=c->r[1]+0x00000014u; // 8012F374
  c->r[5]=c->r[1]+0x00000020u; // 8012F378
  c->lr=0x8012F380u; f_800B4404(c); // 8012F37C
L_8012F380:;
  c->r[3]=c->r[31]+0x00000998u; // 8012F380
  c->r[4]=c->r[1]+0x00000014u; // 8012F384
  c->r[5]=c->r[1]+0x00000020u; // 8012F388
  c->lr=0x8012F390u; f_800B4404(c); // 8012F38C
  goto L_8012F40C; // 8012F390
L_8012F394:;
  c->r[3]=c->r[31]+0x00000998u; // 8012F394
  c->r[4]=c->r[1]+0x000000E0u; // 8012F398
  c->lr=0x8012F3A0u; f_80049FD4(c); // 8012F39C
  goto L_8012F40C; // 8012F3A0
L_8012F3A4:;
  c->r[3]=c->r[1]+0x000000B0u; // 8012F3A4
  c->r[4]=c->r[31]+0x00000974u; // 8012F3A8
  c->r[5]=0u+0x804C0000u; // 8012F3AC
  c->r[5]=c->r[5]+0x000024B8u; // 8012F3B0
  c->lr=0x8012F3B8u; f_800548CC(c); // 8012F3B4
  c->r[3]=c->r[1]+0x00000080u; // 8012F3B8
  {uint32_t ea=c->r[31]+0x00000968u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F3BC
  {uint32_t ea=c->r[31]+0x0000096Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8012F3C0
  {uint32_t ea=c->r[31]+0x00000970u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012F3C4
  c->lr=0x8012F3CCu; f_8004B0A8(c); // 8012F3C8
  c->r[3]=c->r[1]+0x00000050u; // 8012F3CC
  c->r[4]=c->r[1]+0x000000B0u; // 8012F3D0
  c->r[5]=c->r[1]+0x00000080u; // 8012F3D4
  c->lr=0x8012F3DCu; f_80054854(c); // 8012F3D8
  c->r[3]=c->r[1]+0x00000020u; // 8012F3DC
  c->r[4]=c->r[1]+0x000000E0u; // 8012F3E0
  c->r[5]=c->r[1]+0x00000050u; // 8012F3E4
  c->lr=0x8012F3ECu; f_80054854(c); // 8012F3E8
  c->r[3]=c->r[1]+0x00000014u; // 8012F3EC
  c->r[4]=c->r[31]+0x00000950u; // 8012F3F0
  c->r[5]=c->r[31]+0x0000095Cu; // 8012F3F4
  c->lr=0x8012F3FCu; f_8005C194(c); // 8012F3F8
  c->r[3]=c->r[31]+0x00000998u; // 8012F3FC
  c->r[4]=c->r[1]+0x00000014u; // 8012F400
  c->r[5]=c->r[1]+0x00000020u; // 8012F404
  c->lr=0x8012F40Cu; f_800B4404(c); // 8012F408
L_8012F40C:;
  c->r[3]=c->r[31]+0x00000024u; // 8012F40C
  c->r[4]=c->r[31]+0x00000998u; // 8012F410
  c->lr=0x8012F418u; f_800CA0AC(c); // 8012F414
  c->r[3]=c->r[31]+0x00000024u; // 8012F418
  c->lr=0x8012F420u; f_80053674(c); // 8012F41C
  c->r[3]=c->r[31]|c->r[31]; // 8012F420
  c->r[4]=0u+0x00000005u; // 8012F424
  c->lr=0x8012F42Cu; f_8012E274(c); // 8012F428
L_8012F42C:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 8012F42C
  c->r[0]=R32(c->r[1]+0x00000124u); // 8012F430
  c->lr=c->r[0]; // 8012F434
  c->r[1]=c->r[1]+0x00000120u; // 8012F438
  return; // 8012F43C
}

// fn_8012F440
void f_8012F440(Ctx* __restrict c) {
  W32(c->r[3]+0x00000A04u,c->r[4]); // 8012F440
  return; // 8012F444
}

// fn_8012F448
void f_8012F448(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000024u; // 8012F448
  c->r[4]=0u+0x00000000u; // 8012F44C
  c->r[5]=0u+0x00000000u; // 8012F450
  c->r[6]=0u+0x00000000u; // 8012F454
  f_8005302C(c); return; // 8012F458
}

// fn_8012F45C
void f_8012F45C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8012F45C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8012F460
  {uint32_t ea=c->r[2]+0xFFFF8C40u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F464
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8012F468
  {uint32_t ea=c->r[2]+0xFFFF8C44u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F46C
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 8012F470
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8012F474
  return; // 8012F478
}

// fn_8012F47C
void f_8012F47C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8012F47C
  f_8012DC20(c); return; // 8012F480
}

// fn_8012F484
void f_8012F484(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 8012F484
  f_8012DC20(c); return; // 8012F488
}

// fn_8012F48C
void f_8012F48C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8012F48C
  f_8012DC20(c); return; // 8012F490
}

// fn_8012F494
void f_8012F494(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 8012F494
  f_8012DC20(c); return; // 8012F498
}

// fn_8012F49C
void f_8012F49C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F49C
  c->r[0]=c->lr; // 8012F4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F4A8
  c->r[31]=c->r[3]|c->r[3]; // 8012F4AC
  c->lr=0x8012F4B4u; f_8012DA8C(c); // 8012F4B0
  c->r[3]=0u+0x80470000u; // 8012F4B4
  c->r[3]=c->r[3]+0xFFFF8228u; // 8012F4B8
  W32(c->r[31]+0x00000020u,c->r[3]); // 8012F4BC
  c->r[0]=c->r[3]+0x0000000Cu; // 8012F4C0
  W32(c->r[31]+0x00000288u,c->r[0]); // 8012F4C4
  c->r[0]=c->r[3]+0x00000018u; // 8012F4C8
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 8012F4CC
  c->r[0]=c->r[3]+0x00000024u; // 8012F4D0
  W32(c->r[31]+0x000002B0u,c->r[0]); // 8012F4D4
  c->r[0]=c->r[3]+0x00000030u; // 8012F4D8
  W32(c->r[31]+0x00000300u,c->r[0]); // 8012F4DC
  c->r[3]=c->r[31]|c->r[31]; // 8012F4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F4E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F4E8
  c->lr=c->r[0]; // 8012F4EC
  c->r[1]=c->r[1]+0x00000010u; // 8012F4F0
  return; // 8012F4F4
}

// dtor_8012F4F8
void f_8012F4F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F4F8
  c->r[0]=c->lr; // 8012F4FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F504
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012F508
  c->r[30]=c->r[3]|c->r[3]; // 8012F50C
  c->r[31]=c->r[4]|c->r[4]; // 8012F510
  cmps(c,0,(int32_t)c->r[3],0); // 8012F514
  if (crb(c,2)) { goto L_8012F538; } // 8012F518
  c->r[4]=0u+0x00000000u; // 8012F51C
  c->lr=0x8012F524u; f_8012DC20(c); // 8012F520
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012F524
  cmps(c,0,(int32_t)c->r[0],0); // 8012F528
  if (!crb(c,1)) { goto L_8012F538; } // 8012F52C
  c->r[3]=c->r[30]|c->r[30]; // 8012F530
  c->lr=0x8012F538u; f_80047B20(c); // 8012F534
L_8012F538:;
  c->r[3]=c->r[30]|c->r[30]; // 8012F538
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F53C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012F540
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F544
  c->lr=c->r[0]; // 8012F548
  c->r[1]=c->r[1]+0x00000010u; // 8012F54C
  return; // 8012F550
}

// fn_8012F554
void f_8012F554(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F554
  c->r[0]=c->lr; // 8012F558
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F55C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F560
  c->r[31]=c->r[3]|c->r[3]; // 8012F564
  c->r[4]=0u+0x00000004u; // 8012F568
  c->lr=0x8012F570u; f_8012E2A8(c); // 8012F56C
  cmps(c,0,(int32_t)c->r[3],0); // 8012F570
  if (!crb(c,2)) { goto L_8012F5F4; } // 8012F574
  c->r[3]=c->r[31]|c->r[31]; // 8012F578
  c->r[4]=0u+0x00000005u; // 8012F57C
  c->lr=0x8012F584u; f_8012E2A8(c); // 8012F580
  cmps(c,0,(int32_t)c->r[3],0); // 8012F584
  if (!crb(c,2)) { goto L_8012F5F4; } // 8012F588
  c->r[3]=c->r[31]+0x00000024u; // 8012F58C
  {uint32_t ea=c->r[31]+0x00000944u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F590
  {uint32_t ea=c->r[31]+0x00000950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F594
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8012F598
  {uint32_t ea=c->r[31]+0x00000948u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012F59C
  {uint32_t ea=c->r[31]+0x00000954u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F5A0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 8012F5A4
  {uint32_t ea=c->r[31]+0x0000094Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8012F5A8
  {uint32_t ea=c->r[31]+0x00000958u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F5AC
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 8012F5B0
  c->lr=0x8012F5B8u; f_80074EEC(c); // 8012F5B4
  c->r[3]=c->r[31]+0x00000024u; // 8012F5B8
  {uint32_t ea=c->r[31]+0x00000968u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F5BC
  {uint32_t ea=c->r[31]+0x0000096Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8012F5C0
  {uint32_t ea=c->r[31]+0x00000970u; c->f[3]=c->ps1[3]=RF32(ea);} // 8012F5C4
  c->lr=0x8012F5CCu; f_80074EDC(c); // 8012F5C8
  c->r[3]=c->r[31]+0x00000024u; // 8012F5CC
  {uint32_t ea=c->r[31]+0x00000974u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F5D0
  {uint32_t ea=c->r[31]+0x00000978u; c->f[2]=c->ps1[2]=RF32(ea);} // 8012F5D4
  {uint32_t ea=c->r[31]+0x0000097Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8012F5D8
  c->lr=0x8012F5E0u; f_80074ECC(c); // 8012F5DC
  c->r[3]=c->r[31]|c->r[31]; // 8012F5E0
  c->r[12]=R32(c->r[3]+0x00000020u); // 8012F5E4
  c->r[12]=R32(c->r[12]+0x00000044u); // 8012F5E8
  c->ctr=c->r[12]; // 8012F5EC
  if (true) { c->lr=0x8012F5F4u; dispatch(c,c->ctr); } // 8012F5F0
L_8012F5F4:;
  c->r[3]=c->r[31]|c->r[31]; // 8012F5F4
  c->lr=0x8012F5FCu; f_8012F108(c); // 8012F5F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F5FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F600
  c->lr=c->r[0]; // 8012F604
  c->r[1]=c->r[1]+0x00000010u; // 8012F608
  return; // 8012F60C
}

// fn_8012F610
void f_8012F610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F610
  c->r[0]=c->lr; // 8012F614
  W32(c->r[1]+0x00000024u,c->r[0]); // 8012F618
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8012F61C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8012F620
  W32(c->r[1]+0x00000014u,c->r[29]); // 8012F624
  c->r[29]=c->r[3]|c->r[3]; // 8012F628
  c->r[30]=0u+0x00000000u; // 8012F62C
  c->r[31]=c->r[29]|c->r[29]; // 8012F630
L_8012F634:;
  c->r[3]=R32(c->r[31]+0x000008D0u); // 8012F634
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 8012F638
  cmps(c,0,(int32_t)c->r[0],0); // 8012F63C
  if (crb(c,2)) { goto L_8012F66C; } // 8012F640
  c->r[0]=rotl(c->r[3],0)&0x00000004u; // 8012F644
  cmps(c,0,(int32_t)c->r[0],0); // 8012F648
  if (crb(c,2)) { goto L_8012F66C; } // 8012F64C
  c->r[3]=c->r[29]|c->r[29]; // 8012F650
  {uint32_t ea=c->r[31]+0x000008D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F654
  c->r[4]=c->r[30]|c->r[30]; // 8012F658
  c->lr=0x8012F660u; f_8012EA0C(c); // 8012F65C
  c->r[0]=R32(c->r[31]+0x000008D0u); // 8012F660
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8012F664
  W32(c->r[31]+0x000008D0u,c->r[0]); // 8012F668
L_8012F66C:;
  c->r[3]=c->r[29]|c->r[29]; // 8012F66C
  c->r[4]=c->r[30]|c->r[30]; // 8012F670
  c->lr=0x8012F678u; f_8012EABC(c); // 8012F674
  {uint32_t ea=c->r[31]+0x000008DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F678
  fcmp(c,0,c->f[1],c->f[0]); // 8012F67C
  if (!crb(c,2)) { goto L_8012F690; } // 8012F680
  c->r[0]=R32(c->r[31]+0x000008D0u); // 8012F684
  c->r[0]=c->r[0]|0x00000004u; // 8012F688
  W32(c->r[31]+0x000008D0u,c->r[0]); // 8012F68C
L_8012F690:;
  c->r[31]=c->r[31]+0x00000014u; // 8012F690
  c->r[30]=c->r[30]+0x00000001u; // 8012F694
  cmps(c,0,(int32_t)c->r[30],6); // 8012F698
  if (crb(c,0)) { IRQCHK(c); goto L_8012F634; } // 8012F69C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8012F6A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8012F6A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8012F6A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8012F6AC
  c->lr=c->r[0]; // 8012F6B0
  c->r[1]=c->r[1]+0x00000020u; // 8012F6B4
  return; // 8012F6B8
}

// fn_8012F6BC
void f_8012F6BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F6BC
  c->r[0]=c->lr; // 8012F6C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F6C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F6C8
  c->r[31]=c->r[3]|c->r[3]; // 8012F6CC
  c->r[3]=c->r[3]+0x00000024u; // 8012F6D0
  c->r[4]=R32(c->r[31]+0x000008C8u); // 8012F6D4
  c->lr=0x8012F6DCu; f_800534E4(c); // 8012F6D8
  c->r[0]=R32(c->r[31]+0x000008C8u); // 8012F6DC
  cmps(c,0,(int32_t)c->r[0],0); // 8012F6E0
  if (crb(c,2)) { goto L_8012F70C; } // 8012F6E4
  c->r[3]=c->r[31]|c->r[31]; // 8012F6E8
  c->r[12]=R32(c->r[3]+0x00000020u); // 8012F6EC
  c->r[12]=R32(c->r[12]+0x00000058u); // 8012F6F0
  c->ctr=c->r[12]; // 8012F6F4
  if (true) { c->lr=0x8012F6FCu; dispatch(c,c->ctr); } // 8012F6F8
  c->r[3]=c->r[31]|c->r[31]; // 8012F6FC
  c->lr=0x8012F704u; f_8012F554(c); // 8012F700
  c->r[3]=c->r[31]|c->r[31]; // 8012F704
  c->lr=0x8012F70Cu; f_8012F610(c); // 8012F708
L_8012F70C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F70C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F710
  c->lr=c->r[0]; // 8012F714
  c->r[1]=c->r[1]+0x00000010u; // 8012F718
  return; // 8012F71C
}

// fn_8012F720
void f_8012F720(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8012F720
  f_8012F4F8(c); return; // 8012F724
}

// fn_8012F728
void f_8012F728(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 8012F728
  f_8012F4F8(c); return; // 8012F72C
}

// fn_8012F730
void f_8012F730(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8012F730
  f_8012F4F8(c); return; // 8012F734
}

// fn_8012F738
void f_8012F738(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 8012F738
  f_8012F4F8(c); return; // 8012F73C
}

// fn_8012F740
void f_8012F740(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F740
  c->r[0]=c->lr; // 8012F744
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F74C
  c->r[31]=c->r[3]|c->r[3]; // 8012F750
  c->lr=0x8012F758u; f_8012F49C(c); // 8012F754
  c->r[3]=0u+0x80470000u; // 8012F758
  c->r[3]=c->r[3]+0xFFFF8288u; // 8012F75C
  W32(c->r[31]+0x00000020u,c->r[3]); // 8012F760
  c->r[0]=c->r[3]+0x0000000Cu; // 8012F764
  W32(c->r[31]+0x00000288u,c->r[0]); // 8012F768
  c->r[0]=c->r[3]+0x00000018u; // 8012F76C
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 8012F770
  c->r[0]=c->r[3]+0x00000024u; // 8012F774
  W32(c->r[31]+0x000002B0u,c->r[0]); // 8012F778
  c->r[0]=c->r[3]+0x00000030u; // 8012F77C
  W32(c->r[31]+0x00000300u,c->r[0]); // 8012F780
  c->r[3]=c->r[31]+0x00000A30u; // 8012F784
  c->lr=0x8012F78Cu; f_80110498(c); // 8012F788
  c->r[3]=c->r[31]+0x00000A78u; // 8012F78C
  c->lr=0x8012F794u; f_80110498(c); // 8012F790
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F794
  c->lr=0x8012F79Cu; f_80110498(c); // 8012F798
  {uint32_t ea=c->r[2]+0xFFFF8C60u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F79C
  {uint32_t ea=c->r[31]+0x00000B08u; WF32(ea,c->f[1]);} // 8012F7A0
  {uint32_t ea=c->r[2]+0xFFFF8C64u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F7A4
  {uint32_t ea=c->r[31]+0x00000B0Cu; WF32(ea,c->f[0]);} // 8012F7A8
  {uint32_t ea=c->r[31]+0x00000B10u; WF32(ea,c->f[1]);} // 8012F7AC
  {uint32_t ea=c->r[31]+0x00000B14u; WF32(ea,c->f[0]);} // 8012F7B0
  {uint32_t ea=c->r[2]+0xFFFF8C68u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F7B4
  {uint32_t ea=c->r[31]+0x00000B18u; WF32(ea,c->f[0]);} // 8012F7B8
  {uint32_t ea=c->r[31]+0x00000B1Cu; WF32(ea,c->f[0]);} // 8012F7BC
  {uint32_t ea=c->r[2]+0xFFFF8C6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8012F7C0
  {uint32_t ea=c->r[31]+0x00000B20u; WF32(ea,c->f[0]);} // 8012F7C4
  {uint32_t ea=c->r[31]+0x00000B24u; WF32(ea,c->f[0]);} // 8012F7C8
  c->r[3]=c->r[31]|c->r[31]; // 8012F7CC
  c->r[4]=0u+0x00000008u; // 8012F7D0
  c->lr=0x8012F7D8u; f_8012E274(c); // 8012F7D4
  c->r[3]=c->r[31]|c->r[31]; // 8012F7D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F7DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F7E0
  c->lr=c->r[0]; // 8012F7E4
  c->r[1]=c->r[1]+0x00000010u; // 8012F7E8
  return; // 8012F7EC
}

// dtor_8012F7F0
void f_8012F7F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F7F0
  c->r[0]=c->lr; // 8012F7F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F7F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F7FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012F800
  c->r[30]=c->r[3]|c->r[3]; // 8012F804
  c->r[31]=c->r[4]|c->r[4]; // 8012F808
  cmps(c,0,(int32_t)c->r[3],0); // 8012F80C
  if (crb(c,2)) { goto L_8012F858; } // 8012F810
  c->r[3]=c->r[3]+0x00000AC0u; // 8012F814
  c->r[4]=0u+0xFFFFFFFFu; // 8012F818
  c->lr=0x8012F820u; f_80110504(c); // 8012F81C
  c->r[3]=c->r[30]+0x00000A78u; // 8012F820
  c->r[4]=0u+0xFFFFFFFFu; // 8012F824
  c->lr=0x8012F82Cu; f_80110504(c); // 8012F828
  c->r[3]=c->r[30]+0x00000A30u; // 8012F82C
  c->r[4]=0u+0xFFFFFFFFu; // 8012F830
  c->lr=0x8012F838u; f_80110504(c); // 8012F834
  c->r[3]=c->r[30]|c->r[30]; // 8012F838
  c->r[4]=0u+0x00000000u; // 8012F83C
  c->lr=0x8012F844u; f_8012F4F8(c); // 8012F840
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012F844
  cmps(c,0,(int32_t)c->r[0],0); // 8012F848
  if (!crb(c,1)) { goto L_8012F858; } // 8012F84C
  c->r[3]=c->r[30]|c->r[30]; // 8012F850
  c->lr=0x8012F858u; f_80047B20(c); // 8012F854
L_8012F858:;
  c->r[3]=c->r[30]|c->r[30]; // 8012F858
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F85C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012F860
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F864
  c->lr=c->r[0]; // 8012F868
  c->r[1]=c->r[1]+0x00000010u; // 8012F86C
  return; // 8012F870
}

// fn_8012F874
void f_8012F874(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F874
  c->r[0]=c->lr; // 8012F878
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F87C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F880
  c->r[31]=c->r[3]|c->r[3]; // 8012F884
  c->r[3]=c->r[3]+0x00000A30u; // 8012F888
  c->lr=0x8012F890u; f_801105F8(c); // 8012F88C
  cmps(c,0,(int32_t)c->r[3],0); // 8012F890
  if (crb(c,2)) { goto L_8012F8A4; } // 8012F894
  c->r[3]=c->r[31]+0x00000A30u; // 8012F898
  c->r[4]=c->r[31]+0x00000944u; // 8012F89C
  c->lr=0x8012F8A4u; f_801108D8(c); // 8012F8A0
L_8012F8A4:;
  c->r[3]=c->r[31]+0x00000A78u; // 8012F8A4
  c->lr=0x8012F8ACu; f_801105F8(c); // 8012F8A8
  cmps(c,0,(int32_t)c->r[3],0); // 8012F8AC
  if (crb(c,2)) { goto L_8012F8C0; } // 8012F8B0
  c->r[3]=c->r[31]+0x00000A78u; // 8012F8B4
  c->r[4]=c->r[31]+0x00000948u; // 8012F8B8
  c->lr=0x8012F8C0u; f_801108D8(c); // 8012F8BC
L_8012F8C0:;
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F8C0
  c->lr=0x8012F8C8u; f_801105F8(c); // 8012F8C4
  cmps(c,0,(int32_t)c->r[3],0); // 8012F8C8
  if (crb(c,2)) { goto L_8012F8EC; } // 8012F8CC
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F8D0
  c->r[4]=c->r[31]+0x0000098Cu; // 8012F8D4
  c->lr=0x8012F8DCu; f_801108D8(c); // 8012F8D8
  c->r[3]=c->r[31]|c->r[31]; // 8012F8DC
  {uint32_t ea=c->r[31]+0x0000098Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F8E0
  c->r[4]=0u+0xFFFFFFFFu; // 8012F8E4
  c->lr=0x8012F8ECu; f_8012EE14(c); // 8012F8E8
L_8012F8EC:;
  c->r[3]=c->r[31]|c->r[31]; // 8012F8EC
  c->lr=0x8012F8F4u; f_8012F6BC(c); // 8012F8F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012F8F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012F8F8
  c->lr=c->r[0]; // 8012F8FC
  c->r[1]=c->r[1]+0x00000010u; // 8012F900
  return; // 8012F904
}

// fn_8012F908
void f_8012F908(Ctx* __restrict c) {
  return; // 8012F908
}

// fn_8012F90C
void f_8012F90C(Ctx* __restrict c) {
  f_8012DF80(c); return; // 8012F90C
}

// fn_8012F910
void f_8012F910(Ctx* __restrict c) {
  f_8012FA7C(c); return; // 8012F910
}

// fn_8012F914
void f_8012F914(Ctx* __restrict c) {
  f_8012FA84(c); return; // 8012F914
}

// fn_8012F918
void f_8012F918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012F918
  c->r[0]=c->lr; // 8012F91C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012F920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012F924
  c->r[31]=c->r[3]|c->r[3]; // 8012F928
  cmps(c,0,(int32_t)c->r[4],0); // 8012F92C
  if (crb(c,2)) { goto L_8012F9A4; } // 8012F930
  c->r[3]=c->r[3]+0x00000A30u; // 8012F934
  {uint32_t ea=c->r[31]+0x00000B08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F938
  c->lr=0x8012F940u; f_80110560(c); // 8012F93C
  c->r[3]=c->r[31]+0x00000A30u; // 8012F940
  {uint32_t ea=c->r[31]+0x00000B10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F944
  c->lr=0x8012F94Cu; f_80110568(c); // 8012F948
  c->r[3]=c->r[31]+0x00000A30u; // 8012F94C
  {uint32_t ea=c->r[31]+0x00000B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F950
  c->lr=0x8012F958u; f_80110590(c); // 8012F954
  c->r[3]=c->r[31]+0x00000A78u; // 8012F958
  {uint32_t ea=c->r[31]+0x00000B0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F95C
  c->lr=0x8012F964u; f_80110560(c); // 8012F960
  c->r[3]=c->r[31]+0x00000A78u; // 8012F964
  {uint32_t ea=c->r[31]+0x00000B14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F968
  c->lr=0x8012F970u; f_80110568(c); // 8012F96C
  c->r[3]=c->r[31]+0x00000A78u; // 8012F970
  {uint32_t ea=c->r[31]+0x00000B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F974
  c->lr=0x8012F97Cu; f_80110590(c); // 8012F978
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F97C
  {uint32_t ea=c->r[31]+0x00000B18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F980
  c->lr=0x8012F988u; f_80110560(c); // 8012F984
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F988
  {uint32_t ea=c->r[31]+0x00000B1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F98C
  c->lr=0x8012F994u; f_80110568(c); // 8012F990
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F994
  {uint32_t ea=c->r[31]+0x00000B20u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F998
  c->lr=0x8012F9A0u; f_80110590(c); // 8012F99C
  goto L_8012FA10; // 8012F9A0
L_8012F9A4:;
  c->r[3]=c->r[3]+0x00000A30u; // 8012F9A4
  {uint32_t ea=c->r[31]+0x00000B10u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9A8
  c->lr=0x8012F9B0u; f_80110560(c); // 8012F9AC
  c->r[3]=c->r[31]+0x00000A30u; // 8012F9B0
  {uint32_t ea=c->r[31]+0x00000B08u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9B4
  c->lr=0x8012F9BCu; f_80110568(c); // 8012F9B8
  c->r[3]=c->r[31]+0x00000A30u; // 8012F9BC
  {uint32_t ea=c->r[31]+0x00000B24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9C0
  c->lr=0x8012F9C8u; f_80110590(c); // 8012F9C4
  c->r[3]=c->r[31]+0x00000A78u; // 8012F9C8
  {uint32_t ea=c->r[31]+0x00000B14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9CC
  c->lr=0x8012F9D4u; f_80110560(c); // 8012F9D0
  c->r[3]=c->r[31]+0x00000A78u; // 8012F9D4
  {uint32_t ea=c->r[31]+0x00000B0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9D8
  c->lr=0x8012F9E0u; f_80110568(c); // 8012F9DC
  c->r[3]=c->r[31]+0x00000A78u; // 8012F9E0
  {uint32_t ea=c->r[31]+0x00000B24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9E4
  c->lr=0x8012F9ECu; f_80110590(c); // 8012F9E8
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F9EC
  {uint32_t ea=c->r[31]+0x00000B1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9F0
  c->lr=0x8012F9F8u; f_80110560(c); // 8012F9F4
  c->r[3]=c->r[31]+0x00000AC0u; // 8012F9F8
  {uint32_t ea=c->r[31]+0x00000B18u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012F9FC
  c->lr=0x8012FA04u; f_80110568(c); // 8012FA00
  c->r[3]=c->r[31]+0x00000AC0u; // 8012FA04
  {uint32_t ea=c->r[31]+0x00000B24u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FA08
  c->lr=0x8012FA10u; f_80110590(c); // 8012FA0C
L_8012FA10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FA10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FA14
  c->lr=c->r[0]; // 8012FA18
  c->r[1]=c->r[1]+0x00000010u; // 8012FA1C
  return; // 8012FA20
}

// fn_8012FA24
void f_8012FA24(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B08u; WF32(ea,c->f[1]);} // 8012FA24
  {uint32_t ea=c->r[3]+0x00000B0Cu; WF32(ea,c->f[2]);} // 8012FA28
  return; // 8012FA2C
}

// fn_8012FA30
void f_8012FA30(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B08u; WF32(ea,c->f[1]);} // 8012FA30
  return; // 8012FA34
}

// fn_8012FA38
void f_8012FA38(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B0Cu; WF32(ea,c->f[1]);} // 8012FA38
  return; // 8012FA3C
}

// fn_8012FA40
void f_8012FA40(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B10u; WF32(ea,c->f[1]);} // 8012FA40
  {uint32_t ea=c->r[3]+0x00000B14u; WF32(ea,c->f[2]);} // 8012FA44
  return; // 8012FA48
}

// fn_8012FA4C
void f_8012FA4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B10u; WF32(ea,c->f[1]);} // 8012FA4C
  return; // 8012FA50
}

// fn_8012FA54
void f_8012FA54(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B14u; WF32(ea,c->f[1]);} // 8012FA54
  return; // 8012FA58
}

// fn_8012FA5C
void f_8012FA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B18u; WF32(ea,c->f[1]);} // 8012FA5C
  return; // 8012FA60
}

// fn_8012FA64
void f_8012FA64(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B1Cu; WF32(ea,c->f[1]);} // 8012FA64
  return; // 8012FA68
}

// fn_8012FA6C
void f_8012FA6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B20u; WF32(ea,c->f[1]);} // 8012FA6C
  return; // 8012FA70
}

// fn_8012FA74
void f_8012FA74(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B24u; WF32(ea,c->f[1]);} // 8012FA74
  return; // 8012FA78
}

// fn_8012FA7C
void f_8012FA7C(Ctx* __restrict c) {
  W32(c->r[3]+0x000008C8u,c->r[4]); // 8012FA7C
  return; // 8012FA80
}

// fn_8012FA84
void f_8012FA84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000008C8u); // 8012FA84
  return; // 8012FA88
}

// fn_8012FA8C
void f_8012FA8C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8012FA8C
  f_8012F7F0(c); return; // 8012FA90
}

// fn_8012FA94
void f_8012FA94(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 8012FA94
  f_8012F7F0(c); return; // 8012FA98
}

// fn_8012FA9C
void f_8012FA9C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8012FA9C
  f_8012F7F0(c); return; // 8012FAA0
}

// fn_8012FAA4
void f_8012FAA4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 8012FAA4
  f_8012F7F0(c); return; // 8012FAA8
}

// fn_8012FAAC
void f_8012FAAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FAAC
  c->r[0]=c->lr; // 8012FAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FAB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FAB8
  c->r[31]=c->r[3]|c->r[3]; // 8012FABC
  c->lr=0x8012FAC4u; f_80078B74(c); // 8012FAC0
  c->r[3]=0u+0x80470000u; // 8012FAC4
  c->r[0]=c->r[3]+0xFFFF82F0u; // 8012FAC8
  W32(c->r[31]+0x00000058u,c->r[0]); // 8012FACC
  c->r[0]=0u+0x00000000u; // 8012FAD0
  W32(c->r[31]+0x000000B8u,c->r[0]); // 8012FAD4
  c->r[0]=0u+0xFFFFFFFFu; // 8012FAD8
  W32(c->r[31]+0x000000BCu,c->r[0]); // 8012FADC
  c->lr=0x8012FAE4u; f_8007B524(c); // 8012FAE0
  c->lr=0x8012FAE8u; f_8012FBE4(c); // 8012FAE4
  c->r[4]=c->r[3]|c->r[3]; // 8012FAE8
  c->r[3]=c->r[31]|c->r[31]; // 8012FAEC
  c->r[5]=0u+0x000000FFu; // 8012FAF0
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012FAF4
  c->r[12]=R32(c->r[12]+0x00000010u); // 8012FAF8
  c->ctr=c->r[12]; // 8012FAFC
  if (true) { c->lr=0x8012FB04u; dispatch(c,c->ctr); } // 8012FB00
  c->r[3]=c->r[31]|c->r[31]; // 8012FB04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FB08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FB0C
  c->lr=c->r[0]; // 8012FB10
  c->r[1]=c->r[1]+0x00000010u; // 8012FB14
  return; // 8012FB18
}

// dtor_8012FB1C
void f_8012FB1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FB1C
  c->r[0]=c->lr; // 8012FB20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FB24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FB28
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FB2C
  c->r[30]=c->r[3]|c->r[3]; // 8012FB30
  c->r[31]=c->r[4]|c->r[4]; // 8012FB34
  cmps(c,0,(int32_t)c->r[3],0); // 8012FB38
  if (crb(c,2)) { goto L_8012FB8C; } // 8012FB3C
  c->r[4]=0u+0x80470000u; // 8012FB40
  c->r[0]=c->r[4]+0xFFFF82F0u; // 8012FB44
  W32(c->r[3]+0x00000058u,c->r[0]); // 8012FB48
  c->lr=0x8012FB50u; f_8007B524(c); // 8012FB4C
  c->lr=0x8012FB54u; f_8012FBE4(c); // 8012FB50
  c->r[4]=c->r[3]|c->r[3]; // 8012FB54
  c->r[3]=c->r[30]|c->r[30]; // 8012FB58
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012FB5C
  c->r[12]=R32(c->r[12]+0x00000014u); // 8012FB60
  c->ctr=c->r[12]; // 8012FB64
  if (true) { c->lr=0x8012FB6Cu; dispatch(c,c->ctr); } // 8012FB68
  c->r[3]=c->r[30]|c->r[30]; // 8012FB6C
  c->r[4]=0u+0x00000000u; // 8012FB70
  c->lr=0x8012FB78u; f_80078BF0(c); // 8012FB74
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012FB78
  cmps(c,0,(int32_t)c->r[0],0); // 8012FB7C
  if (!crb(c,1)) { goto L_8012FB8C; } // 8012FB80
  c->r[3]=c->r[30]|c->r[30]; // 8012FB84
  c->lr=0x8012FB8Cu; f_80047B20(c); // 8012FB88
L_8012FB8C:;
  c->r[3]=c->r[30]|c->r[30]; // 8012FB8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FB90
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012FB94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FB98
  c->lr=c->r[0]; // 8012FB9C
  c->r[1]=c->r[1]+0x00000010u; // 8012FBA0
  return; // 8012FBA4
}

// fn_8012FBA8
void f_8012FBA8(Ctx* __restrict c) {
  return; // 8012FBA8
}

// fn_8012FBAC
void f_8012FBAC(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000058u); // 8012FBAC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8012FBB0
  c->ctr=c->r[12]; // 8012FBB4
  if (true) { dispatch(c,c->ctr); return; } // 8012FBB8
}

// fn_8012FBBC
void f_8012FBBC(Ctx* __restrict c) {
  W32(c->r[3]+0x000000BCu,c->r[4]); // 8012FBBC
  return; // 8012FBC0
}

// fn_8012FBC4
void f_8012FBC4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000BCu); // 8012FBC4
  return; // 8012FBC8
}

// fn_8012FBCC
void f_8012FBCC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000B8u); // 8012FBCC
  c->r[0]=0u+0x00000001u; // 8012FBD0
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 8012FBD4
  c->r[0]=c->r[5]|c->r[0]; // 8012FBD8
  W32(c->r[3]+0x000000B8u,c->r[0]); // 8012FBDC
  return; // 8012FBE0
}

// fn_8012FBE4
void f_8012FBE4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8012FBE4
  return; // 8012FBE8
}

// fn_8012FBEC
void f_8012FBEC(Ctx* __restrict c) {
  c->r[4]=0u+0x80470000u; // 8012FBEC
  c->r[0]=c->r[4]+0xFFFF8340u; // 8012FBF0
  W32(c->r[3]+0x00000044u,c->r[0]); // 8012FBF4
  c->r[0]=0u+0xFFFFFFFFu; // 8012FBF8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8012FBFC
  {uint32_t ea=c->r[2]+0xFFFF8C70u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FC00
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8012FC04
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8012FC08
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8012FC0C
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 8012FC10
  {uint32_t ea=c->r[2]+0xFFFF8C74u; c->f[0]=c->ps1[0]=RF32(ea);} // 8012FC14
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 8012FC18
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8012FC1C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 8012FC20
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8012FC24
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 8012FC28
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8012FC2C
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8012FC30
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8012FC34
  c->r[0]=0u+0x00000000u; // 8012FC38
  W32(c->r[3]+0x00000024u,c->r[0]); // 8012FC3C
  W32(c->r[3]+0x00000038u,c->r[0]); // 8012FC40
  return; // 8012FC44
}

// fn_8012FC48
void f_8012FC48(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 8012FC48
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[2]);} // 8012FC4C
  return; // 8012FC50
}

// fn_8012FC54
void f_8012FC54(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 8012FC54
  return; // 8012FC58
}

// fn_8012FC5C
void f_8012FC5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[1]);} // 8012FC5C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[2]);} // 8012FC60
  return; // 8012FC64
}

// fn_8012FC68
void f_8012FC68(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 8012FC68
  return; // 8012FC6C
}

// fn_8012FC70
void f_8012FC70(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8012FC70
  return; // 8012FC74
}

// fn_8012FC78
void f_8012FC78(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8012FC78
  return; // 8012FC7C
}

// fn_8012FC80
void f_8012FC80(Ctx* __restrict c) {
  W32(c->r[3]+0x00000024u,c->r[4]); // 8012FC80
  return; // 8012FC84
}

// fn_8012FC88
void f_8012FC88(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[1]);} // 8012FC88
  return; // 8012FC8C
}

// fn_8012FC90
void f_8012FC90(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[1]);} // 8012FC90
  return; // 8012FC94
}

// fn_8012FC98
void f_8012FC98(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[1]);} // 8012FC98
  return; // 8012FC9C
}

// fn_8012FCA0
void f_8012FCA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 8012FCA0
  return; // 8012FCA4
}

// fn_8012FCA8
void f_8012FCA8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000038u,c->r[4]); // 8012FCA8
  return; // 8012FCAC
}

// fn_8012FCB0
void f_8012FCB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCB0
  return; // 8012FCB4
}

// fn_8012FCB8
void f_8012FCB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCB8
  return; // 8012FCBC
}

// fn_8012FCC0
void f_8012FCC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCC0
  return; // 8012FCC4
}

// fn_8012FCC8
void f_8012FCC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCC8
  return; // 8012FCCC
}

// fn_8012FCD0
void f_8012FCD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCD0
  return; // 8012FCD4
}

// fn_8012FCD8
void f_8012FCD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCD8
  return; // 8012FCDC
}

// fn_8012FCE0
void f_8012FCE0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000024u); // 8012FCE0
  return; // 8012FCE4
}

// fn_8012FCE8
void f_8012FCE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCE8
  return; // 8012FCEC
}

// fn_8012FCF0
void f_8012FCF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCF0
  return; // 8012FCF4
}

// fn_8012FCF8
void f_8012FCF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FCF8
  return; // 8012FCFC
}

// fn_8012FD00
void f_8012FD00(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FD00
  return; // 8012FD04
}

// fn_8012FD08
void f_8012FD08(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FD08
  return; // 8012FD0C
}

// fn_8012FD10
void f_8012FD10(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 8012FD10
  return; // 8012FD14
}

// fn_8012FD18
void f_8012FD18(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000038u); // 8012FD18
  return; // 8012FD1C
}

// fn_8012FD20
void f_8012FD20(Ctx* __restrict c) {
  c->r[4]=0u+0x80470000u; // 8012FD20
  c->r[0]=c->r[4]+0xFFFF8330u; // 8012FD24
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8012FD28
  c->r[0]=0u+0xFFFFFFFFu; // 8012FD2C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8012FD30
  return; // 8012FD34
}

// fn_8012FD38
void f_8012FD38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FD38
  c->r[0]=c->lr; // 8012FD3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FD40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FD44
  c->r[31]=c->r[3]|c->r[3]; // 8012FD48
  c->lr=0x8012FD50u; f_8013099C(c); // 8012FD4C
  c->r[3]=0u+0x80470000u; // 8012FD50
  c->r[0]=c->r[3]+0xFFFF8420u; // 8012FD54
  W32(c->r[31]+0x00000018u,c->r[0]); // 8012FD58
  c->r[3]=c->r[31]|c->r[31]; // 8012FD5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FD60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FD64
  c->lr=c->r[0]; // 8012FD68
  c->r[1]=c->r[1]+0x00000010u; // 8012FD6C
  return; // 8012FD70
}

// fn_8012FD74
void f_8012FD74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FD74
  c->r[0]=c->lr; // 8012FD78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FD7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FD80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FD84
  c->r[30]=c->r[3]|c->r[3]; // 8012FD88
  c->r[31]=c->r[4]|c->r[4]; // 8012FD8C
  cmps(c,0,(int32_t)c->r[3],0); // 8012FD90
  if (crb(c,2)) { goto L_8012FDB4; } // 8012FD94
  c->r[4]=0u+0x00000000u; // 8012FD98
  c->lr=0x8012FDA0u; f_801309F0(c); // 8012FD9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012FDA0
  cmps(c,0,(int32_t)c->r[0],0); // 8012FDA4
  if (!crb(c,1)) { goto L_8012FDB4; } // 8012FDA8
  c->r[3]=c->r[30]|c->r[30]; // 8012FDAC
  c->lr=0x8012FDB4u; f_80047B20(c); // 8012FDB0
L_8012FDB4:;
  c->r[3]=c->r[30]|c->r[30]; // 8012FDB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FDB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012FDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FDC0
  c->lr=c->r[0]; // 8012FDC4
  c->r[1]=c->r[1]+0x00000010u; // 8012FDC8
  return; // 8012FDCC
}

// fn_8012FDD0
void f_8012FDD0(Ctx* __restrict c) {
  f_80130A34(c); return; // 8012FDD0
}

// fn_8012FDD4
void f_8012FDD4(Ctx* __restrict c) {
  f_80130AE4(c); return; // 8012FDD4
}

// fn_8012FDD8
void f_8012FDD8(Ctx* __restrict c) {
  f_80130B3C(c); return; // 8012FDD8
}

// fn_8012FDDC
void f_8012FDDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FDDC
  c->r[0]=c->lr; // 8012FDE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FDE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FDE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FDEC
  c->r[30]=c->r[3]|c->r[3]; // 8012FDF0
  c->r[31]=c->r[4]|c->r[4]; // 8012FDF4
  c->r[3]=c->r[31]|c->r[31]; // 8012FDF8
  c->lr=0x8012FE00u; f_8011D6BC(c); // 8012FDFC
  c->r[5]=c->r[3]|c->r[3]; // 8012FE00
  c->r[3]=c->r[30]|c->r[30]; // 8012FE04
  c->r[4]=c->r[31]|c->r[31]; // 8012FE08
  c->r[5]=R32(c->r[5]+0x00000004u); // 8012FE0C
  c->lr=0x8012FE14u; f_80130BA4(c); // 8012FE10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FE14
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012FE18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FE1C
  c->lr=c->r[0]; // 8012FE20
  c->r[1]=c->r[1]+0x00000010u; // 8012FE24
  return; // 8012FE28
}

// fn_8012FE2C
void f_8012FE2C(Ctx* __restrict c) {
  f_80130BF4(c); return; // 8012FE2C
}

// fn_8012FE30
void f_8012FE30(Ctx* __restrict c) {
  f_80130C4C(c); return; // 8012FE30
}

// fn_8012FE34
void f_8012FE34(Ctx* __restrict c) {
  f_80130C58(c); return; // 8012FE34
}

// fn_8012FE38
void f_8012FE38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FE38
  c->r[0]=c->lr; // 8012FE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FE40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FE44
  c->r[31]=c->r[3]|c->r[3]; // 8012FE48
  c->lr=0x8012FE50u; f_801306CC(c); // 8012FE4C
  c->r[3]=0u+0x80470000u; // 8012FE50
  c->r[0]=c->r[3]+0xFFFF83E0u; // 8012FE54
  W32(c->r[31]+0x00000018u,c->r[0]); // 8012FE58
  c->r[3]=c->r[31]|c->r[31]; // 8012FE5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FE60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FE64
  c->lr=c->r[0]; // 8012FE68
  c->r[1]=c->r[1]+0x00000010u; // 8012FE6C
  return; // 8012FE70
}

// fn_8012FE74
void f_8012FE74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FE74
  c->r[0]=c->lr; // 8012FE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FE7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FE80
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FE84
  c->r[30]=c->r[3]|c->r[3]; // 8012FE88
  c->r[31]=c->r[4]|c->r[4]; // 8012FE8C
  cmps(c,0,(int32_t)c->r[3],0); // 8012FE90
  if (crb(c,2)) { goto L_8012FEB4; } // 8012FE94
  c->r[4]=0u+0x00000000u; // 8012FE98
  c->lr=0x8012FEA0u; f_80130720(c); // 8012FE9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012FEA0
  cmps(c,0,(int32_t)c->r[0],0); // 8012FEA4
  if (!crb(c,1)) { goto L_8012FEB4; } // 8012FEA8
  c->r[3]=c->r[30]|c->r[30]; // 8012FEAC
  c->lr=0x8012FEB4u; f_80047B20(c); // 8012FEB0
L_8012FEB4:;
  c->r[3]=c->r[30]|c->r[30]; // 8012FEB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FEB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012FEBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FEC0
  c->lr=c->r[0]; // 8012FEC4
  c->r[1]=c->r[1]+0x00000010u; // 8012FEC8
  return; // 8012FECC
}

// fn_8012FED0
void f_8012FED0(Ctx* __restrict c) {
  f_80130764(c); return; // 8012FED0
}

// fn_8012FED4
void f_8012FED4(Ctx* __restrict c) {
  f_80130814(c); return; // 8012FED4
}

// fn_8012FED8
void f_8012FED8(Ctx* __restrict c) {
  f_8013086C(c); return; // 8012FED8
}

// fn_8012FEDC
void f_8012FEDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FEDC
  c->r[0]=c->lr; // 8012FEE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FEE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FEE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FEEC
  c->r[30]=c->r[3]|c->r[3]; // 8012FEF0
  c->r[31]=c->r[4]|c->r[4]; // 8012FEF4
  c->r[3]=c->r[31]|c->r[31]; // 8012FEF8
  c->lr=0x8012FF00u; f_8012FBC4(c); // 8012FEFC
  c->r[5]=c->r[3]|c->r[3]; // 8012FF00
  c->r[3]=c->r[30]|c->r[30]; // 8012FF04
  c->r[4]=c->r[31]|c->r[31]; // 8012FF08
  c->lr=0x8012FF10u; f_801308D4(c); // 8012FF0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FF10
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012FF14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FF18
  c->lr=c->r[0]; // 8012FF1C
  c->r[1]=c->r[1]+0x00000010u; // 8012FF20
  return; // 8012FF24
}

// fn_8012FF28
void f_8012FF28(Ctx* __restrict c) {
  f_80130924(c); return; // 8012FF28
}

// fn_8012FF2C
void f_8012FF2C(Ctx* __restrict c) {
  f_8013097C(c); return; // 8012FF2C
}

// fn_8012FF30
void f_8012FF30(Ctx* __restrict c) {
  f_80130988(c); return; // 8012FF30
}

// fn_8012FF34
void f_8012FF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FF34
  c->r[0]=c->lr; // 8012FF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FF3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FF40
  c->r[31]=c->r[3]|c->r[3]; // 8012FF44
  c->lr=0x8012FF4Cu; f_801303FC(c); // 8012FF48
  c->r[3]=0u+0x80470000u; // 8012FF4C
  c->r[0]=c->r[3]+0xFFFF8398u; // 8012FF50
  W32(c->r[31]+0x00000018u,c->r[0]); // 8012FF54
  c->r[3]=c->r[31]|c->r[31]; // 8012FF58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FF5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FF60
  c->lr=c->r[0]; // 8012FF64
  c->r[1]=c->r[1]+0x00000010u; // 8012FF68
  return; // 8012FF6C
}

// fn_8012FF70
void f_8012FF70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FF70
  c->r[0]=c->lr; // 8012FF74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FF78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FF7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FF80
  c->r[30]=c->r[3]|c->r[3]; // 8012FF84
  c->r[31]=c->r[4]|c->r[4]; // 8012FF88
  cmps(c,0,(int32_t)c->r[3],0); // 8012FF8C
  if (crb(c,2)) { goto L_8012FFB0; } // 8012FF90
  c->r[4]=0u+0x00000000u; // 8012FF94
  c->lr=0x8012FF9Cu; f_80130450(c); // 8012FF98
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8012FF9C
  cmps(c,0,(int32_t)c->r[0],0); // 8012FFA0
  if (!crb(c,1)) { goto L_8012FFB0; } // 8012FFA4
  c->r[3]=c->r[30]|c->r[30]; // 8012FFA8
  c->lr=0x8012FFB0u; f_80047B20(c); // 8012FFAC
L_8012FFB0:;
  c->r[3]=c->r[30]|c->r[30]; // 8012FFB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8012FFB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8012FFB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8012FFBC
  c->lr=c->r[0]; // 8012FFC0
  c->r[1]=c->r[1]+0x00000010u; // 8012FFC4
  return; // 8012FFC8
}

// fn_8012FFCC
void f_8012FFCC(Ctx* __restrict c) {
  f_80130494(c); return; // 8012FFCC
}

// fn_8012FFD0
void f_8012FFD0(Ctx* __restrict c) {
  f_80130544(c); return; // 8012FFD0
}

// fn_8012FFD4
void f_8012FFD4(Ctx* __restrict c) {
  f_8013059C(c); return; // 8012FFD4
}

// fn_8012FFD8
void f_8012FFD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8012FFD8
  c->r[0]=c->lr; // 8012FFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8012FFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8012FFE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8012FFE8
  c->r[30]=c->r[3]|c->r[3]; // 8012FFEC
  c->r[31]=c->r[4]|c->r[4]; // 8012FFF0
  c->r[3]=c->r[31]|c->r[31]; // 8012FFF4
  c->lr=0x8012FFFCu; f_8011B414(c); // 8012FFF8
  c->r[5]=c->r[3]|c->r[3]; // 8012FFFC
  c->r[3]=c->r[30]|c->r[30]; // 80130000
  c->r[4]=c->r[31]|c->r[31]; // 80130004
  c->lr=0x8013000Cu; f_80130604(c); // 80130008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8013000C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80130010
  c->r[0]=R32(c->r[1]+0x00000014u); // 80130014
  c->lr=c->r[0]; // 80130018
  c->r[1]=c->r[1]+0x00000010u; // 8013001C
  return; // 80130020
}

// fn_80130024
void f_80130024(Ctx* __restrict c) {
  f_80130654(c); return; // 80130024
}

// fn_80130028
void f_80130028(Ctx* __restrict c) {
  f_801306AC(c); return; // 80130028
}

// fn_8013002C
void f_8013002C(Ctx* __restrict c) {
  f_801306B8(c); return; // 8013002C
}

// fn_80130030
void f_80130030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80130030
  c->r[0]=c->lr; // 80130034
  W32(c->r[1]+0x00000014u,c->r[0]); // 80130038
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8013003C
  c->r[31]=c->r[3]|c->r[3]; // 80130040
  c->lr=0x80130048u; f_8013012C(c); // 80130044
  c->r[3]=0u+0x80470000u; // 80130048
  c->r[0]=c->r[3]+0xFFFF8350u; // 8013004C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80130050
  c->r[3]=c->r[31]|c->r[31]; // 80130054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80130058
  c->r[0]=R32(c->r[1]+0x00000014u); // 8013005C
  c->lr=c->r[0]; // 80130060
  c->r[1]=c->r[1]+0x00000010u; // 80130064
  return; // 80130068
}

// fn_8013006C
void f_8013006C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013006C
  c->r[0]=c->lr; // 80130070
  W32(c->r[1]+0x00000014u,c->r[0]); // 80130074
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80130078
  W32(c->r[1]+0x00000008u,c->r[30]); // 8013007C
  c->r[30]=c->r[3]|c->r[3]; // 80130080
  c->r[31]=c->r[4]|c->r[4]; // 80130084
  cmps(c,0,(int32_t)c->r[3],0); // 80130088
  if (crb(c,2)) { goto L_801300AC; } // 8013008C
  c->r[4]=0u+0x00000000u; // 80130090
  c->lr=0x80130098u; f_80130180(c); // 80130094
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80130098
  cmps(c,0,(int32_t)c->r[0],0); // 8013009C
  if (!crb(c,1)) { goto L_801300AC; } // 801300A0
  c->r[3]=c->r[30]|c->r[30]; // 801300A4
  c->lr=0x801300ACu; f_80047B20(c); // 801300A8
L_801300AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801300AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801300B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801300B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801300B8
  c->lr=c->r[0]; // 801300BC
  c->r[1]=c->r[1]+0x00000010u; // 801300C0
  return; // 801300C4
}

// fn_801300C8
void f_801300C8(Ctx* __restrict c) {
  f_801301C4(c); return; // 801300C8
}

// fn_801300CC
void f_801300CC(Ctx* __restrict c) {
  f_80130274(c); return; // 801300CC
}

// fn_801300D0
void f_801300D0(Ctx* __restrict c) {
  f_801302CC(c); return; // 801300D0
}

// fn_801300D4
void f_801300D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801300D4
  c->r[0]=c->lr; // 801300D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801300DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801300E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801300E4
  c->r[30]=c->r[3]|c->r[3]; // 801300E8
  c->r[31]=c->r[4]|c->r[4]; // 801300EC
  c->r[3]=c->r[31]|c->r[31]; // 801300F0
  c->lr=0x801300F8u; f_80130F0C(c); // 801300F4
  c->r[5]=c->r[3]|c->r[3]; // 801300F8
  c->r[3]=c->r[30]|c->r[30]; // 801300FC
  c->r[4]=c->r[31]|c->r[31]; // 80130100
  c->lr=0x80130108u; f_80130334(c); // 80130104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80130108
  c->r[30]=R32(c->r[1]+0x00000008u); // 8013010C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80130110
  c->lr=c->r[0]; // 80130114
  c->r[1]=c->r[1]+0x00000010u; // 80130118
  return; // 8013011C
}

// fn_80130120
void f_80130120(Ctx* __restrict c) {
  f_80130384(c); return; // 80130120
}

// fn_80130124
void f_80130124(Ctx* __restrict c) {
  f_801303DC(c); return; // 80130124
}

// fn_80130128
void f_80130128(Ctx* __restrict c) {
  f_801303E8(c); return; // 80130128
}

// fn_8013012C
void f_8013012C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8013012C
  c->r[0]=c->lr; // 80130130
  W32(c->r[1]+0x00000014u,c->r[0]); // 80130134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80130138
  c->r[31]=c->r[3]|c->r[3]; // 8013013C
  c->r[4]=0u+0x80470000u; // 80130140
  c->r[0]=c->r[4]+0xFFFF8460u; // 80130144
  W32(c->r[3]+0x00000018u,c->r[0]); // 80130148
  c->r[3]=c->r[3]+0x00000004u; // 8013014C
  c->r[4]=0u+0x0000000Cu; // 80130150
  c->lr=0x80130158u; f_8028CA58(c); // 80130154
  c->r[0]=0u+0x00000000u; // 80130158
  W32(c->r[31]+0x00000010u,c->r[0]); // 8013015C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80130160
  W32(c->r[31]+0x00000000u,c->r[0]); // 80130164
  c->r[3]=c->r[31]|c->r[31]; // 80130168
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8013016C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80130170
  c->lr=c->r[0]; // 80130174
  c->r[1]=c->r[1]+0x00000010u; // 80130178
  return; // 8013017C
}

// fn_80130180
void f_80130180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80130180
  c->r[0]=c->lr; // 80130184
  W32(c->r[1]+0x00000014u,c->r[0]); // 80130188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8013018C
  c->r[31]=c->r[3]|c->r[3]; // 80130190
  cmps(c,0,(int32_t)c->r[3],0); // 80130194
  if (crb(c,2)) { goto L_801301AC; } // 80130198
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 8013019C
  cmps(c,0,(int32_t)c->r[0],0); // 801301A0
  if (!crb(c,1)) { goto L_801301AC; } // 801301A4
  c->lr=0x801301ACu; f_80047B20(c); // 801301A8
L_801301AC:;
  c->r[3]=c->r[31]|c->r[31]; // 801301AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801301B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801301B4
  c->lr=c->r[0]; // 801301B8
  c->r[1]=c->r[1]+0x00000010u; // 801301BC
  return; // 801301C0
}

// fn_801301C4
void f_801301C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801301C4
  c->r[0]=c->lr; // 801301C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801301CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801301D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801301D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801301D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801301DC
  c->r[28]=c->r[3]|c->r[3]; // 801301E0
  c->r[29]=c->r[4]|c->r[4]; // 801301E4
  W32(c->r[3]+0x00000014u,c->r[4]); // 801301E8
  c->lr=0x801301F0u; f_80056B5C(c); // 801301EC
  c->r[31]=c->r[3]|c->r[3]; // 801301F0
  c->lr=0x801301F8u; f_8005DEE8(c); // 801301F4
  c->lr=0x801301FCu; f_80056B54(c); // 801301F8
  c->r[3]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 801301FC
  c->lr=0x80130204u; f_80054464(c); // 80130200
  W32(c->r[28]+0x00000000u,c->r[3]); // 80130204
  c->r[3]=c->r[31]|c->r[31]; // 80130208
  c->lr=0x80130210u; f_80056B54(c); // 8013020C
  c->r[3]=R32(c->r[28]+0x00000000u); // 80130210
  c->r[4]=0u+0x00000000u; // 80130214
  c->r[5]=(uint32_t)((int32_t)c->r[29]*(int32_t)20); // 80130218
  c->lr=0x80130220u; f_800060B8(c); // 8013021C
  c->r[30]=0u+0x00000000u; // 80130220
  c->r[31]=0u+0x00000000u; // 80130224
  goto L_8013024C; // 80130228
L_8013022C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8013022C
  W32(c->r[3]+c->r[31],c->r[30]); // 80130230
  c->r[3]=c->r[28]+0x00000004u; // 80130234
  c->r[0]=R32(c->r[28]+0x00000000u); // 80130238
  c->r[4]=c->r[0]+c->r[31]; // 8013023C
  c->lr=0x80130244u; f_8028CA70(c); // 80130240
  c->r[31]=c->r[31]+0x00000014u; // 80130244
  c->r[30]=c->r[30]+0x00000001u; // 80130248
L_8013024C:;
  cmpu(c,0,c->r[30],c->r[29]); // 8013024C
  if (crb(c,0)) { IRQCHK(c); goto L_8013022C; } // 80130250
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80130254
  c->r[30]=R32(c->r[1]+0x00000018u); // 80130258
  c->r[29]=R32(c->r[1]+0x00000014u); // 8013025C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80130260
  c->r[0]=R32(c->r[1]+0x00000024u); // 80130264
  c->lr=c->r[0]; // 80130268
  c->r[1]=c->r[1]+0x00000020u; // 8013026C
  return; // 80130270
}

