#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8010CB80
void f_8010CB80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CB80
  c->r[0]=c->lr; // 8010CB84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CB88
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CB8C
  c->lr=0x8010CB94u; f_801529E8(c); // 8010CB90
  c->r[3]=0u+0x00000000u; // 8010CB94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CB98
  c->lr=c->r[0]; // 8010CB9C
  c->r[1]=c->r[1]+0x00000010u; // 8010CBA0
  return; // 8010CBA4
}

// fn_8010CBA8
void f_8010CBA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CBA8
  c->r[0]=c->lr; // 8010CBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CBB0
  c->r[4]=c->r[3]|c->r[3]; // 8010CBB4
  c->r[3]=c->r[1]+0x00000008u; // 8010CBB8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CBBC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CBC0
  c->lr=0x8010CBC8u; f_8004E35C(c); // 8010CBC4
  c->r[3]=c->r[1]+0x00000008u; // 8010CBC8
  c->lr=0x8010CBD0u; f_80152A1C(c); // 8010CBCC
  c->r[3]=0u+0x00000000u; // 8010CBD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CBD4
  c->lr=c->r[0]; // 8010CBD8
  c->r[1]=c->r[1]+0x00000010u; // 8010CBDC
  return; // 8010CBE0
}

// fn_8010CBE4
void f_8010CBE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CBE4
  c->r[0]=c->lr; // 8010CBE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CBEC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CBF0
  c->lr=0x8010CBF8u; f_80152A50(c); // 8010CBF4
  c->r[3]=0u+0x00000000u; // 8010CBF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CBFC
  c->lr=c->r[0]; // 8010CC00
  c->r[1]=c->r[1]+0x00000010u; // 8010CC04
  return; // 8010CC08
}

// fn_8010CC0C
void f_8010CC0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CC0C
  c->r[0]=c->lr; // 8010CC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CC14
  c->r[4]=c->r[3]|c->r[3]; // 8010CC18
  c->r[3]=c->r[1]+0x00000008u; // 8010CC1C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CC20
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CC24
  c->lr=0x8010CC2Cu; f_8004E35C(c); // 8010CC28
  c->r[3]=c->r[1]+0x00000008u; // 8010CC2C
  c->lr=0x8010CC34u; f_80152A84(c); // 8010CC30
  c->r[3]=0u+0x00000000u; // 8010CC34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CC38
  c->lr=c->r[0]; // 8010CC3C
  c->r[1]=c->r[1]+0x00000010u; // 8010CC40
  return; // 8010CC44
}

// fn_8010CC48
void f_8010CC48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CC48
  c->r[0]=c->lr; // 8010CC4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CC50
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CC54
  c->lr=0x8010CC5Cu; f_80152AB8(c); // 8010CC58
  c->r[3]=0u+0x00000000u; // 8010CC5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CC60
  c->lr=c->r[0]; // 8010CC64
  c->r[1]=c->r[1]+0x00000010u; // 8010CC68
  return; // 8010CC6C
}

// fn_8010CC70
void f_8010CC70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CC70
  c->r[0]=c->lr; // 8010CC74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CC78
  c->r[4]=c->r[3]|c->r[3]; // 8010CC7C
  c->r[3]=c->r[1]+0x00000008u; // 8010CC80
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CC84
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CC88
  c->lr=0x8010CC90u; f_8004E35C(c); // 8010CC8C
  c->r[3]=c->r[1]+0x00000008u; // 8010CC90
  c->lr=0x8010CC98u; f_80152AEC(c); // 8010CC94
  c->r[3]=0u+0x00000000u; // 8010CC98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CC9C
  c->lr=c->r[0]; // 8010CCA0
  c->r[1]=c->r[1]+0x00000010u; // 8010CCA4
  return; // 8010CCA8
}

// fn_8010CCAC
void f_8010CCAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CCAC
  c->r[0]=c->lr; // 8010CCB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CCB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CCB8
  c->lr=0x8010CCC0u; f_80152B20(c); // 8010CCBC
  c->r[3]=0u+0x00000000u; // 8010CCC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CCC4
  c->lr=c->r[0]; // 8010CCC8
  c->r[1]=c->r[1]+0x00000010u; // 8010CCCC
  return; // 8010CCD0
}

// fn_8010CCD4
void f_8010CCD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CCD4
  c->r[0]=c->lr; // 8010CCD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CCDC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CCE0
  c->lr=0x8010CCE8u; f_80152B54(c); // 8010CCE4
  c->r[3]=0u+0x00000000u; // 8010CCE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CCEC
  c->lr=c->r[0]; // 8010CCF0
  c->r[1]=c->r[1]+0x00000010u; // 8010CCF4
  return; // 8010CCF8
}

// fn_8010CCFC
void f_8010CCFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CCFC
  c->r[0]=c->lr; // 8010CD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CD04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CD08
  c->lr=0x8010CD10u; f_80152B88(c); // 8010CD0C
  c->r[3]=0u+0x00000000u; // 8010CD10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CD14
  c->lr=c->r[0]; // 8010CD18
  c->r[1]=c->r[1]+0x00000010u; // 8010CD1C
  return; // 8010CD20
}

// fn_8010CD24
void f_8010CD24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CD24
  c->r[0]=c->lr; // 8010CD28
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010CD2C
  c->r[4]=c->r[3]|c->r[3]; // 8010CD30
  c->r[3]=c->r[1]+0x00000008u; // 8010CD34
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CD38
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CD3C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010CD40
  c->lr=0x8010CD48u; f_8004E34C(c); // 8010CD44
  c->r[3]=c->r[1]+0x00000008u; // 8010CD48
  c->lr=0x8010CD50u; f_80153034(c); // 8010CD4C
  c->r[3]=0u+0x00000000u; // 8010CD50
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010CD54
  c->lr=c->r[0]; // 8010CD58
  c->r[1]=c->r[1]+0x00000020u; // 8010CD5C
  return; // 8010CD60
}

// fn_8010CD64
void f_8010CD64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CD64
  c->r[0]=c->lr; // 8010CD68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CD6C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CD70
  c->lr=0x8010CD78u; f_80153068(c); // 8010CD74
  c->r[3]=0u+0x00000000u; // 8010CD78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CD7C
  c->lr=c->r[0]; // 8010CD80
  c->r[1]=c->r[1]+0x00000010u; // 8010CD84
  return; // 8010CD88
}

// fn_8010CD8C
void f_8010CD8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CD8C
  c->r[0]=c->lr; // 8010CD90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CD94
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CD98
  c->lr=0x8010CDA0u; f_80153000(c); // 8010CD9C
  c->r[3]=0u+0x00000000u; // 8010CDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CDA4
  c->lr=c->r[0]; // 8010CDA8
  c->r[1]=c->r[1]+0x00000010u; // 8010CDAC
  return; // 8010CDB0
}

// fn_8010CDB4
void f_8010CDB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CDB4
  c->r[0]=c->lr; // 8010CDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CDBC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CDC0
  c->lr=0x8010CDC8u; f_8015309C(c); // 8010CDC4
  c->r[3]=0u+0x00000000u; // 8010CDC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CDCC
  c->lr=c->r[0]; // 8010CDD0
  c->r[1]=c->r[1]+0x00000010u; // 8010CDD4
  return; // 8010CDD8
}

// fn_8010CDDC
void f_8010CDDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CDDC
  c->r[0]=c->lr; // 8010CDE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010CDE4
  c->r[4]=c->r[3]|c->r[3]; // 8010CDE8
  c->r[3]=c->r[1]+0x00000008u; // 8010CDEC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CDF0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CDF4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010CDF8
  c->lr=0x8010CE00u; f_8004E34C(c); // 8010CDFC
  c->r[3]=c->r[1]+0x00000008u; // 8010CE00
  c->lr=0x8010CE08u; f_801530D0(c); // 8010CE04
  c->r[3]=0u+0x00000000u; // 8010CE08
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010CE0C
  c->lr=c->r[0]; // 8010CE10
  c->r[1]=c->r[1]+0x00000020u; // 8010CE14
  return; // 8010CE18
}

// fn_8010CE1C
void f_8010CE1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CE1C
  c->r[0]=c->lr; // 8010CE20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CE24
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CE28
  c->lr=0x8010CE30u; f_80153104(c); // 8010CE2C
  c->r[3]=0u+0x00000000u; // 8010CE30
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CE34
  c->lr=c->r[0]; // 8010CE38
  c->r[1]=c->r[1]+0x00000010u; // 8010CE3C
  return; // 8010CE40
}

// fn_8010CE44
void f_8010CE44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CE44
  c->r[0]=c->lr; // 8010CE48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CE4C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CE50
  c->lr=0x8010CE58u; f_80153138(c); // 8010CE54
  c->r[3]=0u+0x00000000u; // 8010CE58
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CE5C
  c->lr=c->r[0]; // 8010CE60
  c->r[1]=c->r[1]+0x00000010u; // 8010CE64
  return; // 8010CE68
}

// fn_8010CE6C
void f_8010CE6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CE6C
  c->r[0]=c->lr; // 8010CE70
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010CE74
  c->r[4]=c->r[3]|c->r[3]; // 8010CE78
  c->r[3]=c->r[1]+0x00000008u; // 8010CE7C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CE80
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CE84
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010CE88
  c->lr=0x8010CE90u; f_8004E34C(c); // 8010CE8C
  c->r[3]=c->r[1]+0x00000008u; // 8010CE90
  c->lr=0x8010CE98u; f_8015316C(c); // 8010CE94
  c->r[3]=0u+0x00000000u; // 8010CE98
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010CE9C
  c->lr=c->r[0]; // 8010CEA0
  c->r[1]=c->r[1]+0x00000020u; // 8010CEA4
  return; // 8010CEA8
}

// fn_8010CEAC
void f_8010CEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CEAC
  c->r[0]=c->lr; // 8010CEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CEB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CEB8
  c->lr=0x8010CEC0u; f_801531A0(c); // 8010CEBC
  c->r[3]=0u+0x00000000u; // 8010CEC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CEC4
  c->lr=c->r[0]; // 8010CEC8
  c->r[1]=c->r[1]+0x00000010u; // 8010CECC
  return; // 8010CED0
}

// fn_8010CED4
void f_8010CED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CED4
  c->r[0]=c->lr; // 8010CED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CEDC
  c->r[4]=c->r[3]|c->r[3]; // 8010CEE0
  c->r[3]=c->r[1]+0x00000008u; // 8010CEE4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CEE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CEEC
  c->lr=0x8010CEF4u; f_8004E35C(c); // 8010CEF0
  c->r[3]=c->r[1]+0x00000008u; // 8010CEF4
  c->lr=0x8010CEFCu; f_801531D4(c); // 8010CEF8
  c->r[3]=0u+0x00000000u; // 8010CEFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CF00
  c->lr=c->r[0]; // 8010CF04
  c->r[1]=c->r[1]+0x00000010u; // 8010CF08
  return; // 8010CF0C
}

// fn_8010CF10
void f_8010CF10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CF10
  c->r[0]=c->lr; // 8010CF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CF18
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CF1C
  c->lr=0x8010CF24u; f_80153208(c); // 8010CF20
  c->r[3]=0u+0x00000000u; // 8010CF24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CF28
  c->lr=c->r[0]; // 8010CF2C
  c->r[1]=c->r[1]+0x00000010u; // 8010CF30
  return; // 8010CF34
}

// fn_8010CF38
void f_8010CF38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CF38
  c->r[0]=c->lr; // 8010CF3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010CF40
  c->r[4]=c->r[3]|c->r[3]; // 8010CF44
  c->r[3]=c->r[1]+0x00000008u; // 8010CF48
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CF4C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CF50
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010CF54
  c->lr=0x8010CF5Cu; f_8004E34C(c); // 8010CF58
  c->r[3]=c->r[1]+0x00000008u; // 8010CF5C
  c->lr=0x8010CF64u; f_80153270(c); // 8010CF60
  c->r[3]=0u+0x00000000u; // 8010CF64
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010CF68
  c->lr=c->r[0]; // 8010CF6C
  c->r[1]=c->r[1]+0x00000020u; // 8010CF70
  return; // 8010CF74
}

// fn_8010CF78
void f_8010CF78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CF78
  c->r[0]=c->lr; // 8010CF7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CF80
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CF84
  c->lr=0x8010CF8Cu; f_801532A4(c); // 8010CF88
  c->r[3]=0u+0x00000000u; // 8010CF8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CF90
  c->lr=c->r[0]; // 8010CF94
  c->r[1]=c->r[1]+0x00000010u; // 8010CF98
  return; // 8010CF9C
}

// fn_8010CFA0
void f_8010CFA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CFA0
  c->r[0]=c->lr; // 8010CFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CFA8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CFAC
  c->lr=0x8010CFB4u; f_8015323C(c); // 8010CFB0
  c->r[3]=0u+0x00000000u; // 8010CFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CFB8
  c->lr=c->r[0]; // 8010CFBC
  c->r[1]=c->r[1]+0x00000010u; // 8010CFC0
  return; // 8010CFC4
}

// fn_8010CFC8
void f_8010CFC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CFC8
  c->r[0]=c->lr; // 8010CFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CFD0
  c->r[4]=c->r[3]|c->r[3]; // 8010CFD4
  c->r[3]=c->r[1]+0x00000008u; // 8010CFD8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010CFDC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010CFE0
  c->lr=0x8010CFE8u; f_8004E35C(c); // 8010CFE4
  c->r[3]=c->r[1]+0x00000008u; // 8010CFE8
  c->lr=0x8010CFF0u; f_801532D8(c); // 8010CFEC
  c->r[3]=0u+0x00000000u; // 8010CFF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CFF4
  c->lr=c->r[0]; // 8010CFF8
  c->r[1]=c->r[1]+0x00000010u; // 8010CFFC
  return; // 8010D000
}

// fn_8010D004
void f_8010D004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D004
  c->r[0]=c->lr; // 8010D008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D00C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D010
  c->lr=0x8010D018u; f_8015330C(c); // 8010D014
  c->r[3]=0u+0x00000000u; // 8010D018
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D01C
  c->lr=c->r[0]; // 8010D020
  c->r[1]=c->r[1]+0x00000010u; // 8010D024
  return; // 8010D028
}

// fn_8010D02C
void f_8010D02C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D02C
  c->r[0]=c->lr; // 8010D030
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D034
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D038
  c->lr=0x8010D040u; f_80153340(c); // 8010D03C
  c->r[3]=0u+0x00000000u; // 8010D040
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D044
  c->lr=c->r[0]; // 8010D048
  c->r[1]=c->r[1]+0x00000010u; // 8010D04C
  return; // 8010D050
}

// fn_8010D054
void f_8010D054(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D054
  c->r[0]=c->lr; // 8010D058
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D05C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D060
  c->lr=0x8010D068u; f_80153374(c); // 8010D064
  c->r[3]=0u+0x00000000u; // 8010D068
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D06C
  c->lr=c->r[0]; // 8010D070
  c->r[1]=c->r[1]+0x00000010u; // 8010D074
  return; // 8010D078
}

// fn_8010D07C
void f_8010D07C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D07C
  c->r[0]=c->lr; // 8010D080
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D084
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D088
  c->lr=0x8010D090u; f_801533A8(c); // 8010D08C
  c->r[3]=0u+0x00000000u; // 8010D090
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D094
  c->lr=c->r[0]; // 8010D098
  c->r[1]=c->r[1]+0x00000010u; // 8010D09C
  return; // 8010D0A0
}

// fn_8010D0A4
void f_8010D0A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D0A4
  c->r[0]=c->lr; // 8010D0A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D0AC
  c->r[4]=c->r[3]|c->r[3]; // 8010D0B0
  c->r[3]=c->r[1]+0x00000008u; // 8010D0B4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D0B8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D0BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D0C0
  c->lr=0x8010D0C8u; f_8004E34C(c); // 8010D0C4
  c->r[3]=c->r[1]+0x00000008u; // 8010D0C8
  c->lr=0x8010D0D0u; f_801533DC(c); // 8010D0CC
  c->r[3]=0u+0x00000000u; // 8010D0D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D0D4
  c->lr=c->r[0]; // 8010D0D8
  c->r[1]=c->r[1]+0x00000020u; // 8010D0DC
  return; // 8010D0E0
}

// fn_8010D0E4
void f_8010D0E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D0E4
  c->r[0]=c->lr; // 8010D0E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D0EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D0F0
  c->lr=0x8010D0F8u; f_80153410(c); // 8010D0F4
  c->r[3]=0u+0x00000000u; // 8010D0F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D0FC
  c->lr=c->r[0]; // 8010D100
  c->r[1]=c->r[1]+0x00000010u; // 8010D104
  return; // 8010D108
}

// fn_8010D10C
void f_8010D10C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D10C
  c->r[0]=c->lr; // 8010D110
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D114
  c->r[4]=c->r[3]|c->r[3]; // 8010D118
  c->r[3]=c->r[1]+0x00000008u; // 8010D11C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D120
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D124
  c->lr=0x8010D12Cu; f_8004E35C(c); // 8010D128
  c->r[3]=c->r[1]+0x00000008u; // 8010D12C
  c->lr=0x8010D134u; f_80153444(c); // 8010D130
  c->r[3]=0u+0x00000000u; // 8010D134
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D138
  c->lr=c->r[0]; // 8010D13C
  c->r[1]=c->r[1]+0x00000010u; // 8010D140
  return; // 8010D144
}

// fn_8010D148
void f_8010D148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D148
  c->r[0]=c->lr; // 8010D14C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D150
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D154
  c->lr=0x8010D15Cu; f_80153478(c); // 8010D158
  c->r[3]=0u+0x00000000u; // 8010D15C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D160
  c->lr=c->r[0]; // 8010D164
  c->r[1]=c->r[1]+0x00000010u; // 8010D168
  return; // 8010D16C
}

// fn_8010D170
void f_8010D170(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D170
  c->r[0]=c->lr; // 8010D174
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D178
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D17C
  c->lr=0x8010D184u; f_801534AC(c); // 8010D180
  c->r[3]=0u+0x00000000u; // 8010D184
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D188
  c->lr=c->r[0]; // 8010D18C
  c->r[1]=c->r[1]+0x00000010u; // 8010D190
  return; // 8010D194
}

// fn_8010D198
void f_8010D198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D198
  c->r[0]=c->lr; // 8010D19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D1A0
  c->r[4]=c->r[3]|c->r[3]; // 8010D1A4
  c->r[3]=c->r[1]+0x00000008u; // 8010D1A8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D1AC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D1B0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D1B4
  c->lr=0x8010D1BCu; f_8004E34C(c); // 8010D1B8
  c->r[3]=c->r[1]+0x00000008u; // 8010D1BC
  c->lr=0x8010D1C4u; f_801534E0(c); // 8010D1C0
  c->r[3]=0u+0x00000000u; // 8010D1C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D1C8
  c->lr=c->r[0]; // 8010D1CC
  c->r[1]=c->r[1]+0x00000020u; // 8010D1D0
  return; // 8010D1D4
}

// fn_8010D1D8
void f_8010D1D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D1D8
  c->r[0]=c->lr; // 8010D1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D1E0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D1E4
  c->lr=0x8010D1ECu; f_80153514(c); // 8010D1E8
  c->r[3]=0u+0x00000000u; // 8010D1EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D1F0
  c->lr=c->r[0]; // 8010D1F4
  c->r[1]=c->r[1]+0x00000010u; // 8010D1F8
  return; // 8010D1FC
}

// fn_8010D200
void f_8010D200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D200
  c->r[0]=c->lr; // 8010D204
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D208
  c->r[4]=c->r[3]|c->r[3]; // 8010D20C
  c->r[3]=c->r[1]+0x00000008u; // 8010D210
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D214
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D218
  c->lr=0x8010D220u; f_8004E35C(c); // 8010D21C
  c->r[3]=c->r[1]+0x00000008u; // 8010D220
  c->lr=0x8010D228u; f_80153548(c); // 8010D224
  c->r[3]=0u+0x00000000u; // 8010D228
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D22C
  c->lr=c->r[0]; // 8010D230
  c->r[1]=c->r[1]+0x00000010u; // 8010D234
  return; // 8010D238
}

// fn_8010D23C
void f_8010D23C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D23C
  c->r[0]=c->lr; // 8010D240
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D244
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D248
  c->lr=0x8010D250u; f_8015357C(c); // 8010D24C
  c->r[3]=0u+0x00000000u; // 8010D250
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D254
  c->lr=c->r[0]; // 8010D258
  c->r[1]=c->r[1]+0x00000010u; // 8010D25C
  return; // 8010D260
}

// fn_8010D264
void f_8010D264(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D264
  c->r[0]=c->lr; // 8010D268
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D26C
  c->r[4]=c->r[3]|c->r[3]; // 8010D270
  c->r[3]=c->r[1]+0x00000008u; // 8010D274
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D278
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D27C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D280
  c->lr=0x8010D288u; f_8004E34C(c); // 8010D284
  c->r[3]=c->r[1]+0x00000008u; // 8010D288
  c->lr=0x8010D290u; f_801535E4(c); // 8010D28C
  c->r[3]=0u+0x00000000u; // 8010D290
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D294
  c->lr=c->r[0]; // 8010D298
  c->r[1]=c->r[1]+0x00000020u; // 8010D29C
  return; // 8010D2A0
}

// fn_8010D2A4
void f_8010D2A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D2A4
  c->r[0]=c->lr; // 8010D2A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D2AC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D2B0
  c->lr=0x8010D2B8u; f_80153618(c); // 8010D2B4
  c->r[3]=0u+0x00000000u; // 8010D2B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D2BC
  c->lr=c->r[0]; // 8010D2C0
  c->r[1]=c->r[1]+0x00000010u; // 8010D2C4
  return; // 8010D2C8
}

// fn_8010D2CC
void f_8010D2CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D2CC
  c->r[0]=c->lr; // 8010D2D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D2D4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D2D8
  c->lr=0x8010D2E0u; f_801535B0(c); // 8010D2DC
  c->r[3]=0u+0x00000000u; // 8010D2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D2E4
  c->lr=c->r[0]; // 8010D2E8
  c->r[1]=c->r[1]+0x00000010u; // 8010D2EC
  return; // 8010D2F0
}

// fn_8010D2F4
void f_8010D2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D2F4
  c->r[0]=c->lr; // 8010D2F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D2FC
  c->r[4]=c->r[3]|c->r[3]; // 8010D300
  c->r[3]=c->r[1]+0x00000008u; // 8010D304
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D308
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D30C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D310
  c->lr=0x8010D318u; f_8004E34C(c); // 8010D314
  c->r[3]=c->r[1]+0x00000008u; // 8010D318
  c->lr=0x8010D320u; f_80153680(c); // 8010D31C
  c->r[3]=0u+0x00000000u; // 8010D320
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D324
  c->lr=c->r[0]; // 8010D328
  c->r[1]=c->r[1]+0x00000020u; // 8010D32C
  return; // 8010D330
}

// fn_8010D334
void f_8010D334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D334
  c->r[0]=c->lr; // 8010D338
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D33C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D340
  c->lr=0x8010D348u; f_801536B4(c); // 8010D344
  c->r[3]=0u+0x00000000u; // 8010D348
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D34C
  c->lr=c->r[0]; // 8010D350
  c->r[1]=c->r[1]+0x00000010u; // 8010D354
  return; // 8010D358
}

// fn_8010D35C
void f_8010D35C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D35C
  c->r[0]=c->lr; // 8010D360
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D364
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D368
  c->lr=0x8010D370u; f_8015364C(c); // 8010D36C
  c->r[3]=0u+0x00000000u; // 8010D370
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D374
  c->lr=c->r[0]; // 8010D378
  c->r[1]=c->r[1]+0x00000010u; // 8010D37C
  return; // 8010D380
}

// fn_8010D384
void f_8010D384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D384
  c->r[0]=c->lr; // 8010D388
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D38C
  c->r[4]=c->r[3]|c->r[3]; // 8010D390
  c->r[3]=c->r[1]+0x00000008u; // 8010D394
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D398
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D39C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D3A0
  c->lr=0x8010D3A8u; f_8004E34C(c); // 8010D3A4
  c->r[3]=c->r[1]+0x00000008u; // 8010D3A8
  c->lr=0x8010D3B0u; f_8015371C(c); // 8010D3AC
  c->r[3]=0u+0x00000000u; // 8010D3B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D3B4
  c->lr=c->r[0]; // 8010D3B8
  c->r[1]=c->r[1]+0x00000020u; // 8010D3BC
  return; // 8010D3C0
}

// fn_8010D3C4
void f_8010D3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D3C4
  c->r[0]=c->lr; // 8010D3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D3CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D3D0
  c->lr=0x8010D3D8u; f_80153750(c); // 8010D3D4
  c->r[3]=0u+0x00000000u; // 8010D3D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D3DC
  c->lr=c->r[0]; // 8010D3E0
  c->r[1]=c->r[1]+0x00000010u; // 8010D3E4
  return; // 8010D3E8
}

// fn_8010D3EC
void f_8010D3EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D3EC
  c->r[0]=c->lr; // 8010D3F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D3F4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D3F8
  c->lr=0x8010D400u; f_801536E8(c); // 8010D3FC
  c->r[3]=0u+0x00000000u; // 8010D400
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D404
  c->lr=c->r[0]; // 8010D408
  c->r[1]=c->r[1]+0x00000010u; // 8010D40C
  return; // 8010D410
}

// fn_8010D414
void f_8010D414(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D414
  c->r[0]=c->lr; // 8010D418
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D41C
  c->r[4]=c->r[3]|c->r[3]; // 8010D420
  c->r[3]=c->r[1]+0x00000008u; // 8010D424
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D428
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D42C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D430
  c->lr=0x8010D438u; f_8004E34C(c); // 8010D434
  c->r[3]=c->r[1]+0x00000008u; // 8010D438
  c->lr=0x8010D440u; f_801537B8(c); // 8010D43C
  c->r[3]=0u+0x00000000u; // 8010D440
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D444
  c->lr=c->r[0]; // 8010D448
  c->r[1]=c->r[1]+0x00000020u; // 8010D44C
  return; // 8010D450
}

// fn_8010D454
void f_8010D454(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D454
  c->r[0]=c->lr; // 8010D458
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D45C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D460
  c->lr=0x8010D468u; f_801537EC(c); // 8010D464
  c->r[3]=0u+0x00000000u; // 8010D468
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D46C
  c->lr=c->r[0]; // 8010D470
  c->r[1]=c->r[1]+0x00000010u; // 8010D474
  return; // 8010D478
}

// fn_8010D47C
void f_8010D47C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D47C
  c->r[0]=c->lr; // 8010D480
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D484
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D488
  c->lr=0x8010D490u; f_80153784(c); // 8010D48C
  c->r[3]=0u+0x00000000u; // 8010D490
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D494
  c->lr=c->r[0]; // 8010D498
  c->r[1]=c->r[1]+0x00000010u; // 8010D49C
  return; // 8010D4A0
}

// fn_8010D4A4
void f_8010D4A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D4A4
  c->r[0]=c->lr; // 8010D4A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D4AC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D4B0
  c->lr=0x8010D4B8u; f_80153820(c); // 8010D4B4
  c->r[3]=0u+0x00000000u; // 8010D4B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D4BC
  c->lr=c->r[0]; // 8010D4C0
  c->r[1]=c->r[1]+0x00000010u; // 8010D4C4
  return; // 8010D4C8
}

// fn_8010D4CC
void f_8010D4CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D4CC
  c->r[0]=c->lr; // 8010D4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D4D4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D4D8
  c->lr=0x8010D4E0u; f_80153854(c); // 8010D4DC
  c->r[3]=0u+0x00000000u; // 8010D4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D4E4
  c->lr=c->r[0]; // 8010D4E8
  c->r[1]=c->r[1]+0x00000010u; // 8010D4EC
  return; // 8010D4F0
}

// fn_8010D4F4
void f_8010D4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D4F4
  c->r[0]=c->lr; // 8010D4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D4FC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D500
  c->lr=0x8010D508u; f_80153888(c); // 8010D504
  c->r[3]=0u+0x00000000u; // 8010D508
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D50C
  c->lr=c->r[0]; // 8010D510
  c->r[1]=c->r[1]+0x00000010u; // 8010D514
  return; // 8010D518
}

// fn_8010D51C
void f_8010D51C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D51C
  c->r[0]=c->lr; // 8010D520
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D524
  c->r[4]=c->r[3]|c->r[3]; // 8010D528
  c->r[3]=c->r[1]+0x00000008u; // 8010D52C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D530
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D534
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D538
  c->lr=0x8010D540u; f_8004E34C(c); // 8010D53C
  c->r[3]=c->r[1]+0x00000008u; // 8010D540
  c->lr=0x8010D548u; f_801538F0(c); // 8010D544
  c->r[3]=0u+0x00000000u; // 8010D548
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D54C
  c->lr=c->r[0]; // 8010D550
  c->r[1]=c->r[1]+0x00000020u; // 8010D554
  return; // 8010D558
}

// fn_8010D55C
void f_8010D55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D55C
  c->r[0]=c->lr; // 8010D560
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D564
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D568
  c->lr=0x8010D570u; f_80153924(c); // 8010D56C
  c->r[3]=0u+0x00000000u; // 8010D570
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D574
  c->lr=c->r[0]; // 8010D578
  c->r[1]=c->r[1]+0x00000010u; // 8010D57C
  return; // 8010D580
}

// fn_8010D584
void f_8010D584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D584
  c->r[0]=c->lr; // 8010D588
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D58C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D590
  c->lr=0x8010D598u; f_801538BC(c); // 8010D594
  c->r[3]=0u+0x00000000u; // 8010D598
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D59C
  c->lr=c->r[0]; // 8010D5A0
  c->r[1]=c->r[1]+0x00000010u; // 8010D5A4
  return; // 8010D5A8
}

// fn_8010D5AC
void f_8010D5AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D5AC
  c->r[0]=c->lr; // 8010D5B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D5B4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D5B8
  c->lr=0x8010D5C0u; f_80153958(c); // 8010D5BC
  c->r[3]=0u+0x00000000u; // 8010D5C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D5C4
  c->lr=c->r[0]; // 8010D5C8
  c->r[1]=c->r[1]+0x00000010u; // 8010D5CC
  return; // 8010D5D0
}

// fn_8010D5D4
void f_8010D5D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D5D4
  c->r[0]=c->lr; // 8010D5D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D5DC
  c->r[4]=c->r[3]|c->r[3]; // 8010D5E0
  c->r[3]=c->r[1]+0x00000008u; // 8010D5E4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D5E8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D5EC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D5F0
  c->lr=0x8010D5F8u; f_8004E34C(c); // 8010D5F4
  c->r[3]=c->r[1]+0x00000008u; // 8010D5F8
  c->lr=0x8010D600u; f_8015398C(c); // 8010D5FC
  c->r[3]=0u+0x00000000u; // 8010D600
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D604
  c->lr=c->r[0]; // 8010D608
  c->r[1]=c->r[1]+0x00000020u; // 8010D60C
  return; // 8010D610
}

// fn_8010D614
void f_8010D614(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D614
  c->r[0]=c->lr; // 8010D618
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D61C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D620
  c->lr=0x8010D628u; f_801539C0(c); // 8010D624
  c->r[3]=0u+0x00000000u; // 8010D628
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D62C
  c->lr=c->r[0]; // 8010D630
  c->r[1]=c->r[1]+0x00000010u; // 8010D634
  return; // 8010D638
}

// fn_8010D63C
void f_8010D63C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D63C
  c->r[0]=c->lr; // 8010D640
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D644
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D648
  c->lr=0x8010D650u; f_801539F4(c); // 8010D64C
  c->r[3]=0u+0x00000000u; // 8010D650
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D654
  c->lr=c->r[0]; // 8010D658
  c->r[1]=c->r[1]+0x00000010u; // 8010D65C
  return; // 8010D660
}

// fn_8010D664
void f_8010D664(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D664
  c->r[0]=c->lr; // 8010D668
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D66C
  c->r[4]=c->r[3]|c->r[3]; // 8010D670
  c->r[3]=c->r[1]+0x00000008u; // 8010D674
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D678
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D67C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D680
  c->lr=0x8010D688u; f_8004E34C(c); // 8010D684
  c->r[3]=c->r[1]+0x00000008u; // 8010D688
  c->lr=0x8010D690u; f_80153A28(c); // 8010D68C
  c->r[3]=0u+0x00000000u; // 8010D690
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D694
  c->lr=c->r[0]; // 8010D698
  c->r[1]=c->r[1]+0x00000020u; // 8010D69C
  return; // 8010D6A0
}

// fn_8010D6A4
void f_8010D6A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D6A4
  c->r[0]=c->lr; // 8010D6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D6AC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D6B0
  c->lr=0x8010D6B8u; f_80153A5C(c); // 8010D6B4
  c->r[3]=0u+0x00000000u; // 8010D6B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D6BC
  c->lr=c->r[0]; // 8010D6C0
  c->r[1]=c->r[1]+0x00000010u; // 8010D6C4
  return; // 8010D6C8
}

// fn_8010D6CC
void f_8010D6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D6CC
  c->r[0]=c->lr; // 8010D6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D6D4
  c->r[4]=c->r[3]|c->r[3]; // 8010D6D8
  c->r[3]=c->r[1]+0x00000008u; // 8010D6DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D6E0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D6E4
  c->lr=0x8010D6ECu; f_8004E35C(c); // 8010D6E8
  c->r[3]=c->r[1]+0x00000008u; // 8010D6EC
  c->lr=0x8010D6F4u; f_80153A90(c); // 8010D6F0
  c->r[3]=0u+0x00000000u; // 8010D6F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D6F8
  c->lr=c->r[0]; // 8010D6FC
  c->r[1]=c->r[1]+0x00000010u; // 8010D700
  return; // 8010D704
}

// fn_8010D708
void f_8010D708(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D708
  c->r[0]=c->lr; // 8010D70C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D710
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D714
  c->lr=0x8010D71Cu; f_80153AC4(c); // 8010D718
  c->r[3]=0u+0x00000000u; // 8010D71C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D720
  c->lr=c->r[0]; // 8010D724
  c->r[1]=c->r[1]+0x00000010u; // 8010D728
  return; // 8010D72C
}

// fn_8010D730
void f_8010D730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D730
  c->r[0]=c->lr; // 8010D734
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D738
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D73C
  c->lr=0x8010D744u; f_80153AF8(c); // 8010D740
  c->r[3]=0u+0x00000000u; // 8010D744
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D748
  c->lr=c->r[0]; // 8010D74C
  c->r[1]=c->r[1]+0x00000010u; // 8010D750
  return; // 8010D754
}

// fn_8010D758
void f_8010D758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D758
  c->r[0]=c->lr; // 8010D75C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D760
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D764
  c->lr=0x8010D76Cu; f_80153B2C(c); // 8010D768
  c->r[3]=0u+0x00000000u; // 8010D76C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D770
  c->lr=c->r[0]; // 8010D774
  c->r[1]=c->r[1]+0x00000010u; // 8010D778
  return; // 8010D77C
}

// fn_8010D780
void f_8010D780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D780
  c->r[0]=c->lr; // 8010D784
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D788
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D78C
  c->lr=0x8010D794u; f_80153B60(c); // 8010D790
  c->r[3]=0u+0x00000000u; // 8010D794
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D798
  c->lr=c->r[0]; // 8010D79C
  c->r[1]=c->r[1]+0x00000010u; // 8010D7A0
  return; // 8010D7A4
}

// fn_8010D7A8
void f_8010D7A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D7A8
  c->r[0]=c->lr; // 8010D7AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D7B0
  c->r[4]=c->r[3]|c->r[3]; // 8010D7B4
  c->r[3]=c->r[1]+0x00000008u; // 8010D7B8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D7BC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D7C0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D7C4
  c->lr=0x8010D7CCu; f_8004E34C(c); // 8010D7C8
  c->r[3]=c->r[1]+0x00000008u; // 8010D7CC
  c->lr=0x8010D7D4u; f_80153E38(c); // 8010D7D0
  c->r[3]=0u+0x00000000u; // 8010D7D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D7D8
  c->lr=c->r[0]; // 8010D7DC
  c->r[1]=c->r[1]+0x00000020u; // 8010D7E0
  return; // 8010D7E4
}

// fn_8010D7E8
void f_8010D7E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D7E8
  c->r[0]=c->lr; // 8010D7EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D7F0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D7F4
  c->lr=0x8010D7FCu; f_80153E6C(c); // 8010D7F8
  c->r[3]=0u+0x00000000u; // 8010D7FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D800
  c->lr=c->r[0]; // 8010D804
  c->r[1]=c->r[1]+0x00000010u; // 8010D808
  return; // 8010D80C
}

// fn_8010D810
void f_8010D810(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D810
  c->r[0]=c->lr; // 8010D814
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D818
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D81C
  c->lr=0x8010D824u; f_80153E04(c); // 8010D820
  c->r[3]=0u+0x00000000u; // 8010D824
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D828
  c->lr=c->r[0]; // 8010D82C
  c->r[1]=c->r[1]+0x00000010u; // 8010D830
  return; // 8010D834
}

// fn_8010D838
void f_8010D838(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D838
  c->r[0]=c->lr; // 8010D83C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D840
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D844
  c->lr=0x8010D84Cu; f_80153EA0(c); // 8010D848
  c->r[3]=0u+0x00000000u; // 8010D84C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D850
  c->lr=c->r[0]; // 8010D854
  c->r[1]=c->r[1]+0x00000010u; // 8010D858
  return; // 8010D85C
}

// fn_8010D860
void f_8010D860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D860
  c->r[0]=c->lr; // 8010D864
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D868
  c->r[4]=c->r[3]|c->r[3]; // 8010D86C
  c->r[3]=c->r[1]+0x00000008u; // 8010D870
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D874
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D878
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D87C
  c->lr=0x8010D884u; f_8004E34C(c); // 8010D880
  c->r[3]=c->r[1]+0x00000008u; // 8010D884
  c->lr=0x8010D88Cu; f_80153ED4(c); // 8010D888
  c->r[3]=0u+0x00000000u; // 8010D88C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D890
  c->lr=c->r[0]; // 8010D894
  c->r[1]=c->r[1]+0x00000020u; // 8010D898
  return; // 8010D89C
}

// fn_8010D8A0
void f_8010D8A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D8A0
  c->r[0]=c->lr; // 8010D8A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D8A8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D8AC
  c->lr=0x8010D8B4u; f_80153F08(c); // 8010D8B0
  c->r[3]=0u+0x00000000u; // 8010D8B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D8B8
  c->lr=c->r[0]; // 8010D8BC
  c->r[1]=c->r[1]+0x00000010u; // 8010D8C0
  return; // 8010D8C4
}

// fn_8010D8C8
void f_8010D8C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D8C8
  c->r[0]=c->lr; // 8010D8CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D8D0
  c->r[4]=c->r[3]|c->r[3]; // 8010D8D4
  c->r[3]=c->r[1]+0x00000008u; // 8010D8D8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D8DC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D8E0
  c->lr=0x8010D8E8u; f_8004E35C(c); // 8010D8E4
  c->r[3]=c->r[1]+0x00000008u; // 8010D8E8
  c->lr=0x8010D8F0u; f_80153F3C(c); // 8010D8EC
  c->r[3]=0u+0x00000000u; // 8010D8F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D8F4
  c->lr=c->r[0]; // 8010D8F8
  c->r[1]=c->r[1]+0x00000010u; // 8010D8FC
  return; // 8010D900
}

// fn_8010D904
void f_8010D904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D904
  c->r[0]=c->lr; // 8010D908
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D90C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D910
  c->lr=0x8010D918u; f_80153F70(c); // 8010D914
  c->r[3]=0u+0x00000000u; // 8010D918
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D91C
  c->lr=c->r[0]; // 8010D920
  c->r[1]=c->r[1]+0x00000010u; // 8010D924
  return; // 8010D928
}

// fn_8010D92C
void f_8010D92C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D92C
  c->r[0]=c->lr; // 8010D930
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D934
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D938
  c->lr=0x8010D940u; f_80153FA4(c); // 8010D93C
  c->r[3]=0u+0x00000000u; // 8010D940
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D944
  c->lr=c->r[0]; // 8010D948
  c->r[1]=c->r[1]+0x00000010u; // 8010D94C
  return; // 8010D950
}

// fn_8010D954
void f_8010D954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D954
  c->r[0]=c->lr; // 8010D958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D95C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D960
  c->lr=0x8010D968u; f_80153FD8(c); // 8010D964
  c->r[3]=0u+0x00000000u; // 8010D968
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D96C
  c->lr=c->r[0]; // 8010D970
  c->r[1]=c->r[1]+0x00000010u; // 8010D974
  return; // 8010D978
}

// fn_8010D97C
void f_8010D97C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D97C
  c->r[0]=c->lr; // 8010D980
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D984
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D988
  c->lr=0x8010D990u; f_8015400C(c); // 8010D98C
  c->r[3]=0u+0x00000000u; // 8010D990
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D994
  c->lr=c->r[0]; // 8010D998
  c->r[1]=c->r[1]+0x00000010u; // 8010D99C
  return; // 8010D9A0
}

// fn_8010D9A4
void f_8010D9A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D9A4
  c->r[0]=c->lr; // 8010D9A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D9AC
  c->r[4]=c->r[3]|c->r[3]; // 8010D9B0
  c->r[3]=c->r[1]+0x00000008u; // 8010D9B4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D9B8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010D9BC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010D9C0
  c->lr=0x8010D9C8u; f_8004E34C(c); // 8010D9C4
  c->r[3]=c->r[1]+0x00000008u; // 8010D9C8
  c->lr=0x8010D9D0u; f_80153BC8(c); // 8010D9CC
  c->r[3]=0u+0x00000000u; // 8010D9D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D9D4
  c->lr=c->r[0]; // 8010D9D8
  c->r[1]=c->r[1]+0x00000020u; // 8010D9DC
  return; // 8010D9E0
}

// fn_8010D9E4
void f_8010D9E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D9E4
  c->r[0]=c->lr; // 8010D9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D9EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010D9F0
  c->lr=0x8010D9F8u; f_80153BFC(c); // 8010D9F4
  c->r[3]=0u+0x00000000u; // 8010D9F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D9FC
  c->lr=c->r[0]; // 8010DA00
  c->r[1]=c->r[1]+0x00000010u; // 8010DA04
  return; // 8010DA08
}

// fn_8010DA0C
void f_8010DA0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DA0C
  c->r[0]=c->lr; // 8010DA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DA14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DA18
  c->lr=0x8010DA20u; f_80153B94(c); // 8010DA1C
  c->r[3]=0u+0x00000000u; // 8010DA20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DA24
  c->lr=c->r[0]; // 8010DA28
  c->r[1]=c->r[1]+0x00000010u; // 8010DA2C
  return; // 8010DA30
}

// fn_8010DA34
void f_8010DA34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DA34
  c->r[0]=c->lr; // 8010DA38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DA3C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DA40
  c->lr=0x8010DA48u; f_80153C30(c); // 8010DA44
  c->r[3]=0u+0x00000000u; // 8010DA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DA4C
  c->lr=c->r[0]; // 8010DA50
  c->r[1]=c->r[1]+0x00000010u; // 8010DA54
  return; // 8010DA58
}

// fn_8010DA5C
void f_8010DA5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DA5C
  c->r[0]=c->lr; // 8010DA60
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010DA64
  c->r[4]=c->r[3]|c->r[3]; // 8010DA68
  c->r[3]=c->r[1]+0x00000008u; // 8010DA6C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DA70
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DA74
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010DA78
  c->lr=0x8010DA80u; f_8004E34C(c); // 8010DA7C
  c->r[3]=c->r[1]+0x00000008u; // 8010DA80
  c->lr=0x8010DA88u; f_80153C64(c); // 8010DA84
  c->r[3]=0u+0x00000000u; // 8010DA88
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010DA8C
  c->lr=c->r[0]; // 8010DA90
  c->r[1]=c->r[1]+0x00000020u; // 8010DA94
  return; // 8010DA98
}

// fn_8010DA9C
void f_8010DA9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DA9C
  c->r[0]=c->lr; // 8010DAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DAA4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DAA8
  c->lr=0x8010DAB0u; f_80153C98(c); // 8010DAAC
  c->r[3]=0u+0x00000000u; // 8010DAB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DAB4
  c->lr=c->r[0]; // 8010DAB8
  c->r[1]=c->r[1]+0x00000010u; // 8010DABC
  return; // 8010DAC0
}

// fn_8010DAC4
void f_8010DAC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DAC4
  c->r[0]=c->lr; // 8010DAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DACC
  c->r[4]=c->r[3]|c->r[3]; // 8010DAD0
  c->r[3]=c->r[1]+0x00000008u; // 8010DAD4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DAD8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DADC
  c->lr=0x8010DAE4u; f_8004E35C(c); // 8010DAE0
  c->r[3]=c->r[1]+0x00000008u; // 8010DAE4
  c->lr=0x8010DAECu; f_80153CCC(c); // 8010DAE8
  c->r[3]=0u+0x00000000u; // 8010DAEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DAF0
  c->lr=c->r[0]; // 8010DAF4
  c->r[1]=c->r[1]+0x00000010u; // 8010DAF8
  return; // 8010DAFC
}

// fn_8010DB00
void f_8010DB00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DB00
  c->r[0]=c->lr; // 8010DB04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DB08
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DB0C
  c->lr=0x8010DB14u; f_80153D00(c); // 8010DB10
  c->r[3]=0u+0x00000000u; // 8010DB14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DB18
  c->lr=c->r[0]; // 8010DB1C
  c->r[1]=c->r[1]+0x00000010u; // 8010DB20
  return; // 8010DB24
}

// fn_8010DB28
void f_8010DB28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DB28
  c->r[0]=c->lr; // 8010DB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DB30
  c->r[4]=c->r[3]|c->r[3]; // 8010DB34
  c->r[3]=c->r[1]+0x00000008u; // 8010DB38
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DB3C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DB40
  c->lr=0x8010DB48u; f_8004E35C(c); // 8010DB44
  c->r[3]=c->r[1]+0x00000008u; // 8010DB48
  c->lr=0x8010DB50u; f_80153D34(c); // 8010DB4C
  c->r[3]=0u+0x00000000u; // 8010DB50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DB54
  c->lr=c->r[0]; // 8010DB58
  c->r[1]=c->r[1]+0x00000010u; // 8010DB5C
  return; // 8010DB60
}

// fn_8010DB64
void f_8010DB64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DB64
  c->r[0]=c->lr; // 8010DB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DB6C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DB70
  c->lr=0x8010DB78u; f_80153D68(c); // 8010DB74
  c->r[3]=0u+0x00000000u; // 8010DB78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DB7C
  c->lr=c->r[0]; // 8010DB80
  c->r[1]=c->r[1]+0x00000010u; // 8010DB84
  return; // 8010DB88
}

// fn_8010DB8C
void f_8010DB8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DB8C
  c->r[0]=c->lr; // 8010DB90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DB94
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DB98
  c->lr=0x8010DBA0u; f_80153D9C(c); // 8010DB9C
  c->r[3]=0u+0x00000000u; // 8010DBA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DBA4
  c->lr=c->r[0]; // 8010DBA8
  c->r[1]=c->r[1]+0x00000010u; // 8010DBAC
  return; // 8010DBB0
}

// fn_8010DBB4
void f_8010DBB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DBB4
  c->r[0]=c->lr; // 8010DBB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DBBC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DBC0
  c->lr=0x8010DBC8u; f_80153DD0(c); // 8010DBC4
  c->r[3]=0u+0x00000000u; // 8010DBC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DBCC
  c->lr=c->r[0]; // 8010DBD0
  c->r[1]=c->r[1]+0x00000010u; // 8010DBD4
  return; // 8010DBD8
}

// fn_8010DBDC
void f_8010DBDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DBDC
  c->r[0]=c->lr; // 8010DBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DBE4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DBE8
  c->lr=0x8010DBF0u; f_8012B4B0(c); // 8010DBEC
  c->r[3]=0u+0x00000000u; // 8010DBF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DBF4
  c->lr=c->r[0]; // 8010DBF8
  c->r[1]=c->r[1]+0x00000010u; // 8010DBFC
  return; // 8010DC00
}

// fn_8010DC04
void f_8010DC04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DC04
  c->r[0]=c->lr; // 8010DC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DC0C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DC10
  c->lr=0x8010DC18u; f_8012B4E4(c); // 8010DC14
  c->r[3]=0u+0x00000000u; // 8010DC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DC1C
  c->lr=c->r[0]; // 8010DC20
  c->r[1]=c->r[1]+0x00000010u; // 8010DC24
  return; // 8010DC28
}

// fn_8010DC2C
void f_8010DC2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DC2C
  c->r[0]=c->lr; // 8010DC30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DC34
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DC38
  c->lr=0x8010DC40u; f_8012B518(c); // 8010DC3C
  c->r[3]=0u+0x00000000u; // 8010DC40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DC44
  c->lr=c->r[0]; // 8010DC48
  c->r[1]=c->r[1]+0x00000010u; // 8010DC4C
  return; // 8010DC50
}

// fn_8010DC54
void f_8010DC54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DC54
  c->r[0]=c->lr; // 8010DC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DC5C
  c->r[4]=c->r[3]|c->r[3]; // 8010DC60
  c->r[3]=c->r[1]+0x00000008u; // 8010DC64
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DC68
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DC6C
  c->lr=0x8010DC74u; f_8004E35C(c); // 8010DC70
  c->r[3]=c->r[1]+0x00000008u; // 8010DC74
  c->lr=0x8010DC7Cu; f_8012B54C(c); // 8010DC78
  c->r[3]=0u+0x00000000u; // 8010DC7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DC80
  c->lr=c->r[0]; // 8010DC84
  c->r[1]=c->r[1]+0x00000010u; // 8010DC88
  return; // 8010DC8C
}

// fn_8010DC90
void f_8010DC90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DC90
  c->r[0]=c->lr; // 8010DC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DC98
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DC9C
  c->lr=0x8010DCA4u; f_8012B580(c); // 8010DCA0
  c->r[3]=0u+0x00000000u; // 8010DCA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DCA8
  c->lr=c->r[0]; // 8010DCAC
  c->r[1]=c->r[1]+0x00000010u; // 8010DCB0
  return; // 8010DCB4
}

// fn_8010DCB8
void f_8010DCB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DCB8
  c->r[0]=c->lr; // 8010DCBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DCC0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DCC4
  c->lr=0x8010DCCCu; f_8012B5B4(c); // 8010DCC8
  c->r[3]=0u+0x00000000u; // 8010DCCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DCD0
  c->lr=c->r[0]; // 8010DCD4
  c->r[1]=c->r[1]+0x00000010u; // 8010DCD8
  return; // 8010DCDC
}

// fn_8010DCE0
void f_8010DCE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DCE0
  c->r[0]=c->lr; // 8010DCE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DCE8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DCEC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DCF0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DCF4
  c->lr=0x8010DCFCu; f_8012B5E8(c); // 8010DCF8
  c->r[3]=0u+0x00000000u; // 8010DCFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DD00
  c->lr=c->r[0]; // 8010DD04
  c->r[1]=c->r[1]+0x00000010u; // 8010DD08
  return; // 8010DD0C
}

// fn_8010DD10
void f_8010DD10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DD10
  c->r[0]=c->lr; // 8010DD14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DD18
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DD1C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DD20
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DD24
  c->lr=0x8010DD2Cu; f_8012B62C(c); // 8010DD28
  c->r[3]=0u+0x00000000u; // 8010DD2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DD30
  c->lr=c->r[0]; // 8010DD34
  c->r[1]=c->r[1]+0x00000010u; // 8010DD38
  return; // 8010DD3C
}

// fn_8010DD40
void f_8010DD40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DD40
  c->r[0]=c->lr; // 8010DD44
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DD48
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DD4C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DD50
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DD54
  c->lr=0x8010DD5Cu; f_8012B670(c); // 8010DD58
  c->r[3]=0u+0x00000000u; // 8010DD5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DD60
  c->lr=c->r[0]; // 8010DD64
  c->r[1]=c->r[1]+0x00000010u; // 8010DD68
  return; // 8010DD6C
}

// fn_8010DD70
void f_8010DD70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DD70
  c->r[0]=c->lr; // 8010DD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DD78
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DD7C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DD80
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DD84
  c->lr=0x8010DD8Cu; f_8012B6B4(c); // 8010DD88
  c->r[3]=0u+0x00000000u; // 8010DD8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DD90
  c->lr=c->r[0]; // 8010DD94
  c->r[1]=c->r[1]+0x00000010u; // 8010DD98
  return; // 8010DD9C
}

// fn_8010DDA0
void f_8010DDA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DDA0
  c->r[0]=c->lr; // 8010DDA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DDA8
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DDAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DDB0
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DDB4
  c->lr=0x8010DDBCu; f_8012B6F8(c); // 8010DDB8
  c->r[3]=0u+0x00000000u; // 8010DDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DDC0
  c->lr=c->r[0]; // 8010DDC4
  c->r[1]=c->r[1]+0x00000010u; // 8010DDC8
  return; // 8010DDCC
}

// fn_8010DDD0
void f_8010DDD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DDD0
  c->r[0]=c->lr; // 8010DDD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010DDD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010DDDC
  c->r[4]=c->r[3]|c->r[3]; // 8010DDE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DDE4
  c->r[31]=rotl(c->r[0],0)&0x000000FFu; // 8010DDE8
  c->r[3]=c->r[1]+0x00000008u; // 8010DDEC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DDF0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DDF4
  c->lr=0x8010DDFCu; f_8004E35C(c); // 8010DDF8
  c->r[3]=c->r[31]|c->r[31]; // 8010DDFC
  c->r[4]=c->r[1]+0x00000008u; // 8010DE00
  c->lr=0x8010DE08u; f_8012B73C(c); // 8010DE04
  c->r[3]=0u+0x00000000u; // 8010DE08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010DE0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010DE10
  c->lr=c->r[0]; // 8010DE14
  c->r[1]=c->r[1]+0x00000020u; // 8010DE18
  return; // 8010DE1C
}

// fn_8010DE20
void f_8010DE20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DE20
  c->r[0]=c->lr; // 8010DE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DE28
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DE2C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DE30
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DE34
  c->lr=0x8010DE3Cu; f_8012B780(c); // 8010DE38
  c->r[3]=0u+0x00000000u; // 8010DE3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DE40
  c->lr=c->r[0]; // 8010DE44
  c->r[1]=c->r[1]+0x00000010u; // 8010DE48
  return; // 8010DE4C
}

// fn_8010DE50
void f_8010DE50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DE50
  c->r[0]=c->lr; // 8010DE54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DE58
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DE5C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8010DE60
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 8010DE64
  c->lr=0x8010DE6Cu; f_8012B7C4(c); // 8010DE68
  c->r[3]=0u+0x00000000u; // 8010DE6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DE70
  c->lr=c->r[0]; // 8010DE74
  c->r[1]=c->r[1]+0x00000010u; // 8010DE78
  return; // 8010DE7C
}

// fn_8010DE80
void f_8010DE80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DE80
  c->r[0]=c->lr; // 8010DE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DE88
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DE8C
  c->lr=0x8010DE94u; f_8012B808(c); // 8010DE90
  c->r[3]=0u+0x00000000u; // 8010DE94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DE98
  c->lr=c->r[0]; // 8010DE9C
  c->r[1]=c->r[1]+0x00000010u; // 8010DEA0
  return; // 8010DEA4
}

// fn_8010DEA8
void f_8010DEA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DEA8
  c->r[0]=c->lr; // 8010DEAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DEB0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DEB4
  c->lr=0x8010DEBCu; f_8012B83C(c); // 8010DEB8
  c->r[3]=0u+0x00000000u; // 8010DEBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DEC0
  c->lr=c->r[0]; // 8010DEC4
  c->r[1]=c->r[1]+0x00000010u; // 8010DEC8
  return; // 8010DECC
}

// fn_8010DED0
void f_8010DED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DED0
  c->r[0]=c->lr; // 8010DED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DED8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DEDC
  c->lr=0x8010DEE4u; f_8012B870(c); // 8010DEE0
  c->r[3]=0u+0x00000000u; // 8010DEE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DEE8
  c->lr=c->r[0]; // 8010DEEC
  c->r[1]=c->r[1]+0x00000010u; // 8010DEF0
  return; // 8010DEF4
}

// fn_8010DEF8
void f_8010DEF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DEF8
  c->r[0]=c->lr; // 8010DEFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DF00
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DF04
  c->lr=0x8010DF0Cu; f_8012B8A4(c); // 8010DF08
  c->r[3]=0u+0x00000000u; // 8010DF0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DF10
  c->lr=c->r[0]; // 8010DF14
  c->r[1]=c->r[1]+0x00000010u; // 8010DF18
  return; // 8010DF1C
}

// fn_8010DF20
void f_8010DF20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DF20
  c->r[0]=c->lr; // 8010DF24
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010DF28
  c->r[4]=c->r[3]|c->r[3]; // 8010DF2C
  c->r[3]=c->r[1]+0x00000008u; // 8010DF30
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DF34
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DF38
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010DF3C
  c->lr=0x8010DF44u; f_8004E34C(c); // 8010DF40
  c->r[3]=c->r[1]+0x00000008u; // 8010DF44
  c->lr=0x8010DF4Cu; f_8018DACC(c); // 8010DF48
  c->r[3]=0u+0x00000000u; // 8010DF4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010DF50
  c->lr=c->r[0]; // 8010DF54
  c->r[1]=c->r[1]+0x00000020u; // 8010DF58
  return; // 8010DF5C
}

// fn_8010DF60
void f_8010DF60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DF60
  c->r[0]=c->lr; // 8010DF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DF68
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DF6C
  c->lr=0x8010DF74u; f_8018DB00(c); // 8010DF70
  c->r[3]=0u+0x00000000u; // 8010DF74
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DF78
  c->lr=c->r[0]; // 8010DF7C
  c->r[1]=c->r[1]+0x00000010u; // 8010DF80
  return; // 8010DF84
}

// fn_8010DF88
void f_8010DF88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DF88
  c->r[0]=c->lr; // 8010DF8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DF90
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DF94
  c->lr=0x8010DF9Cu; f_8018DB34(c); // 8010DF98
  c->r[3]=0u+0x00000000u; // 8010DF9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DFA0
  c->lr=c->r[0]; // 8010DFA4
  c->r[1]=c->r[1]+0x00000010u; // 8010DFA8
  return; // 8010DFAC
}

// fn_8010DFB0
void f_8010DFB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DFB0
  c->r[0]=c->lr; // 8010DFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DFB8
  c->r[4]=c->r[3]|c->r[3]; // 8010DFBC
  c->r[3]=c->r[1]+0x00000008u; // 8010DFC0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DFC4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010DFC8
  c->lr=0x8010DFD0u; f_8004E35C(c); // 8010DFCC
  c->r[3]=c->r[1]+0x00000008u; // 8010DFD0
  c->lr=0x8010DFD8u; f_8018DB68(c); // 8010DFD4
  c->r[3]=0u+0x00000000u; // 8010DFD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DFDC
  c->lr=c->r[0]; // 8010DFE0
  c->r[1]=c->r[1]+0x00000010u; // 8010DFE4
  return; // 8010DFE8
}

// fn_8010DFEC
void f_8010DFEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DFEC
  c->r[0]=c->lr; // 8010DFF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DFF4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010DFF8
  c->lr=0x8010E000u; f_8018DB9C(c); // 8010DFFC
  c->r[3]=0u+0x00000000u; // 8010E000
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E004
  c->lr=c->r[0]; // 8010E008
  c->r[1]=c->r[1]+0x00000010u; // 8010E00C
  return; // 8010E010
}

// fn_8010E014
void f_8010E014(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E014
  c->r[0]=c->lr; // 8010E018
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E01C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E020
  c->lr=0x8010E028u; f_8018DBD0(c); // 8010E024
  c->r[3]=0u+0x00000000u; // 8010E028
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E02C
  c->lr=c->r[0]; // 8010E030
  c->r[1]=c->r[1]+0x00000010u; // 8010E034
  return; // 8010E038
}

// fn_8010E03C
void f_8010E03C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E03C
  c->r[0]=c->lr; // 8010E040
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E044
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E048
  c->lr=0x8010E050u; f_8018DC04(c); // 8010E04C
  c->r[3]=0u+0x00000000u; // 8010E050
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E054
  c->lr=c->r[0]; // 8010E058
  c->r[1]=c->r[1]+0x00000010u; // 8010E05C
  return; // 8010E060
}

// fn_8010E064
void f_8010E064(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E064
  c->r[0]=c->lr; // 8010E068
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E06C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E070
  c->lr=0x8010E078u; f_8018DC38(c); // 8010E074
  c->r[3]=0u+0x00000000u; // 8010E078
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E07C
  c->lr=c->r[0]; // 8010E080
  c->r[1]=c->r[1]+0x00000010u; // 8010E084
  return; // 8010E088
}

// fn_8010E08C
void f_8010E08C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E08C
  c->r[0]=c->lr; // 8010E090
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E094
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E098
  c->lr=0x8010E0A0u; f_8018DC6C(c); // 8010E09C
  c->r[3]=0u+0x00000000u; // 8010E0A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E0A4
  c->lr=c->r[0]; // 8010E0A8
  c->r[1]=c->r[1]+0x00000010u; // 8010E0AC
  return; // 8010E0B0
}

// fn_8010E0B4
void f_8010E0B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E0B4
  c->r[0]=c->lr; // 8010E0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E0BC
  c->r[3]=R32(c->r[3]+0x00000000u); // 8010E0C0
  c->lr=0x8010E0C8u; f_8018DCA0(c); // 8010E0C4
  c->r[3]=0u+0x00000000u; // 8010E0C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E0CC
  c->lr=c->r[0]; // 8010E0D0
  c->r[1]=c->r[1]+0x00000010u; // 8010E0D4
  return; // 8010E0D8
}

// fn_8010E0DC
void f_8010E0DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E0DC
  c->r[0]=c->lr; // 8010E0E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E0E4
  c->r[4]=c->r[3]|c->r[3]; // 8010E0E8
  c->r[3]=c->r[1]+0x00000008u; // 8010E0EC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E0F0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E0F4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E0F8
  c->lr=0x8010E100u; f_8004E34C(c); // 8010E0FC
  c->r[3]=c->r[1]+0x00000008u; // 8010E100
  c->lr=0x8010E108u; f_80192A4C(c); // 8010E104
  c->r[3]=0u+0x00000000u; // 8010E108
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E10C
  c->lr=c->r[0]; // 8010E110
  c->r[1]=c->r[1]+0x00000020u; // 8010E114
  return; // 8010E118
}

// fn_8010E11C
void f_8010E11C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E11C
  c->r[0]=c->lr; // 8010E120
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E124
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E128
  c->lr=0x8010E130u; f_80192A80(c); // 8010E12C
  c->r[3]=0u+0x00000000u; // 8010E130
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E134
  c->lr=c->r[0]; // 8010E138
  c->r[1]=c->r[1]+0x00000010u; // 8010E13C
  return; // 8010E140
}

// fn_8010E144
void f_8010E144(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E144
  c->r[0]=c->lr; // 8010E148
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E14C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E150
  c->lr=0x8010E158u; f_80192AB4(c); // 8010E154
  c->r[3]=0u+0x00000000u; // 8010E158
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E15C
  c->lr=c->r[0]; // 8010E160
  c->r[1]=c->r[1]+0x00000010u; // 8010E164
  return; // 8010E168
}

// fn_8010E16C
void f_8010E16C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E16C
  c->r[0]=c->lr; // 8010E170
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E174
  c->r[4]=c->r[3]|c->r[3]; // 8010E178
  c->r[3]=c->r[1]+0x00000008u; // 8010E17C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E180
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E184
  c->lr=0x8010E18Cu; f_8004E35C(c); // 8010E188
  c->r[3]=c->r[1]+0x00000008u; // 8010E18C
  c->lr=0x8010E194u; f_80192AE8(c); // 8010E190
  c->r[3]=0u+0x00000000u; // 8010E194
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E198
  c->lr=c->r[0]; // 8010E19C
  c->r[1]=c->r[1]+0x00000010u; // 8010E1A0
  return; // 8010E1A4
}

// fn_8010E1A8
void f_8010E1A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E1A8
  c->r[0]=c->lr; // 8010E1AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E1B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E1B4
  c->lr=0x8010E1BCu; f_80192B1C(c); // 8010E1B8
  c->r[3]=0u+0x00000000u; // 8010E1BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E1C0
  c->lr=c->r[0]; // 8010E1C4
  c->r[1]=c->r[1]+0x00000010u; // 8010E1C8
  return; // 8010E1CC
}

// fn_8010E1D0
void f_8010E1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E1D0
  c->r[0]=c->lr; // 8010E1D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E1D8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E1DC
  c->lr=0x8010E1E4u; f_80192B50(c); // 8010E1E0
  c->r[3]=0u+0x00000000u; // 8010E1E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E1E8
  c->lr=c->r[0]; // 8010E1EC
  c->r[1]=c->r[1]+0x00000010u; // 8010E1F0
  return; // 8010E1F4
}

// fn_8010E1F8
void f_8010E1F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E1F8
  c->r[0]=c->lr; // 8010E1FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E200
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E204
  c->lr=0x8010E20Cu; f_80192B84(c); // 8010E208
  c->r[3]=0u+0x00000000u; // 8010E20C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E210
  c->lr=c->r[0]; // 8010E214
  c->r[1]=c->r[1]+0x00000010u; // 8010E218
  return; // 8010E21C
}

// fn_8010E220
void f_8010E220(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E220
  c->r[0]=c->lr; // 8010E224
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E228
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E22C
  c->lr=0x8010E234u; f_80192BB8(c); // 8010E230
  c->r[3]=0u+0x00000000u; // 8010E234
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E238
  c->lr=c->r[0]; // 8010E23C
  c->r[1]=c->r[1]+0x00000010u; // 8010E240
  return; // 8010E244
}

// fn_8010E248
void f_8010E248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E248
  c->r[0]=c->lr; // 8010E24C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E250
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E254
  c->lr=0x8010E25Cu; f_80192BEC(c); // 8010E258
  c->r[3]=0u+0x00000000u; // 8010E25C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E260
  c->lr=c->r[0]; // 8010E264
  c->r[1]=c->r[1]+0x00000010u; // 8010E268
  return; // 8010E26C
}

// fn_8010E270
void f_8010E270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E270
  c->r[0]=c->lr; // 8010E274
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E278
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E27C
  c->lr=0x8010E284u; f_80192C20(c); // 8010E280
  c->r[3]=0u+0x00000000u; // 8010E284
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E288
  c->lr=c->r[0]; // 8010E28C
  c->r[1]=c->r[1]+0x00000010u; // 8010E290
  return; // 8010E294
}

// fn_8010E298
void f_8010E298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E298
  c->r[0]=c->lr; // 8010E29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E2A0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E2A4
  c->lr=0x8010E2ACu; f_80192C54(c); // 8010E2A8
  c->r[3]=0u+0x00000000u; // 8010E2AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E2B0
  c->lr=c->r[0]; // 8010E2B4
  c->r[1]=c->r[1]+0x00000010u; // 8010E2B8
  return; // 8010E2BC
}

// fn_8010E2C0
void f_8010E2C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E2C0
  c->r[0]=c->lr; // 8010E2C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E2C8
  c->r[4]=c->r[3]|c->r[3]; // 8010E2CC
  c->r[3]=c->r[1]+0x00000008u; // 8010E2D0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E2D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E2D8
  c->lr=0x8010E2E0u; f_8004E35C(c); // 8010E2DC
  c->r[3]=c->r[1]+0x00000008u; // 8010E2E0
  c->lr=0x8010E2E8u; f_801AE990(c); // 8010E2E4
  c->r[3]=0u+0x00000000u; // 8010E2E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E2EC
  c->lr=c->r[0]; // 8010E2F0
  c->r[1]=c->r[1]+0x00000010u; // 8010E2F4
  return; // 8010E2F8
}

// fn_8010E2FC
void f_8010E2FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E2FC
  c->r[0]=c->lr; // 8010E300
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E304
  c->r[4]=c->r[3]|c->r[3]; // 8010E308
  c->r[3]=c->r[1]+0x00000008u; // 8010E30C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E310
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E314
  c->lr=0x8010E31Cu; f_8004E35C(c); // 8010E318
  c->r[3]=c->r[1]+0x00000008u; // 8010E31C
  c->lr=0x8010E324u; f_801AE9C4(c); // 8010E320
  c->r[3]=0u+0x00000000u; // 8010E324
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E328
  c->lr=c->r[0]; // 8010E32C
  c->r[1]=c->r[1]+0x00000010u; // 8010E330
  return; // 8010E334
}

// fn_8010E338
void f_8010E338(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E338
  c->r[0]=c->lr; // 8010E33C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E340
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E344
  c->lr=0x8010E34Cu; f_801AE9F8(c); // 8010E348
  c->r[3]=0u+0x00000000u; // 8010E34C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E350
  c->lr=c->r[0]; // 8010E354
  c->r[1]=c->r[1]+0x00000010u; // 8010E358
  return; // 8010E35C
}

// fn_8010E360
void f_8010E360(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E360
  c->r[0]=c->lr; // 8010E364
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E368
  c->r[4]=c->r[3]|c->r[3]; // 8010E36C
  c->r[3]=c->r[1]+0x00000008u; // 8010E370
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E374
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E378
  c->lr=0x8010E380u; f_8004E35C(c); // 8010E37C
  c->r[3]=c->r[1]+0x00000008u; // 8010E380
  c->lr=0x8010E388u; f_801AEA2C(c); // 8010E384
  c->r[3]=0u+0x00000000u; // 8010E388
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E38C
  c->lr=c->r[0]; // 8010E390
  c->r[1]=c->r[1]+0x00000010u; // 8010E394
  return; // 8010E398
}

// fn_8010E39C
void f_8010E39C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E39C
  c->r[0]=c->lr; // 8010E3A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E3A4
  c->r[4]=c->r[3]|c->r[3]; // 8010E3A8
  c->r[3]=c->r[1]+0x00000008u; // 8010E3AC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E3B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E3B4
  c->lr=0x8010E3BCu; f_8004E35C(c); // 8010E3B8
  c->r[3]=c->r[1]+0x00000008u; // 8010E3BC
  c->lr=0x8010E3C4u; f_801AEA60(c); // 8010E3C0
  c->r[3]=0u+0x00000000u; // 8010E3C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E3C8
  c->lr=c->r[0]; // 8010E3CC
  c->r[1]=c->r[1]+0x00000010u; // 8010E3D0
  return; // 8010E3D4
}

// fn_8010E3D8
void f_8010E3D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E3D8
  c->r[0]=c->lr; // 8010E3DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E3E0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E3E4
  c->lr=0x8010E3ECu; f_801AEA94(c); // 8010E3E8
  c->r[3]=0u+0x00000000u; // 8010E3EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E3F0
  c->lr=c->r[0]; // 8010E3F4
  c->r[1]=c->r[1]+0x00000010u; // 8010E3F8
  return; // 8010E3FC
}

// fn_8010E400
void f_8010E400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E400
  c->r[0]=c->lr; // 8010E404
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E408
  c->r[4]=c->r[3]|c->r[3]; // 8010E40C
  c->r[3]=c->r[1]+0x00000008u; // 8010E410
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E414
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E418
  c->lr=0x8010E420u; f_8004E35C(c); // 8010E41C
  c->r[3]=c->r[1]+0x00000008u; // 8010E420
  c->lr=0x8010E428u; f_801AEAC8(c); // 8010E424
  c->r[3]=0u+0x00000000u; // 8010E428
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E42C
  c->lr=c->r[0]; // 8010E430
  c->r[1]=c->r[1]+0x00000010u; // 8010E434
  return; // 8010E438
}

// fn_8010E43C
void f_8010E43C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E43C
  c->r[0]=c->lr; // 8010E440
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E444
  c->r[4]=c->r[3]|c->r[3]; // 8010E448
  c->r[3]=c->r[1]+0x00000008u; // 8010E44C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E450
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E454
  c->lr=0x8010E45Cu; f_8004E35C(c); // 8010E458
  c->r[3]=c->r[1]+0x00000008u; // 8010E45C
  c->lr=0x8010E464u; f_801DE854(c); // 8010E460
  c->r[3]=0u+0x00000000u; // 8010E464
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E468
  c->lr=c->r[0]; // 8010E46C
  c->r[1]=c->r[1]+0x00000010u; // 8010E470
  return; // 8010E474
}

// fn_8010E478
void f_8010E478(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E478
  c->r[0]=c->lr; // 8010E47C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E480
  c->r[4]=c->r[3]|c->r[3]; // 8010E484
  c->r[3]=c->r[1]+0x00000008u; // 8010E488
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E48C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E490
  c->lr=0x8010E498u; f_8004E35C(c); // 8010E494
  c->r[3]=c->r[1]+0x00000008u; // 8010E498
  c->lr=0x8010E4A0u; f_801DE888(c); // 8010E49C
  c->r[3]=0u+0x00000000u; // 8010E4A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E4A4
  c->lr=c->r[0]; // 8010E4A8
  c->r[1]=c->r[1]+0x00000010u; // 8010E4AC
  return; // 8010E4B0
}

// fn_8010E4B4
void f_8010E4B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E4B4
  c->r[0]=c->lr; // 8010E4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E4BC
  c->r[4]=c->r[3]|c->r[3]; // 8010E4C0
  c->r[3]=c->r[1]+0x00000008u; // 8010E4C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E4C8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E4CC
  c->lr=0x8010E4D4u; f_8004E35C(c); // 8010E4D0
  c->r[3]=c->r[1]+0x00000008u; // 8010E4D4
  c->lr=0x8010E4DCu; f_801C1B24(c); // 8010E4D8
  c->r[3]=0u+0x00000000u; // 8010E4DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E4E0
  c->lr=c->r[0]; // 8010E4E4
  c->r[1]=c->r[1]+0x00000010u; // 8010E4E8
  return; // 8010E4EC
}

// fn_8010E4F0
void f_8010E4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E4F0
  c->r[0]=c->lr; // 8010E4F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E4F8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E4FC
  c->lr=0x8010E504u; f_801C1B58(c); // 8010E500
  c->r[3]=0u+0x00000000u; // 8010E504
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E508
  c->lr=c->r[0]; // 8010E50C
  c->r[1]=c->r[1]+0x00000010u; // 8010E510
  return; // 8010E514
}

// fn_8010E518
void f_8010E518(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E518
  c->r[0]=c->lr; // 8010E51C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E520
  c->r[4]=c->r[3]|c->r[3]; // 8010E524
  c->r[3]=c->r[1]+0x00000008u; // 8010E528
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E52C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E530
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E534
  c->lr=0x8010E53Cu; f_8004E34C(c); // 8010E538
  c->r[3]=c->r[1]+0x00000008u; // 8010E53C
  c->lr=0x8010E544u; f_801C1B8C(c); // 8010E540
  c->r[3]=0u+0x00000000u; // 8010E544
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E548
  c->lr=c->r[0]; // 8010E54C
  c->r[1]=c->r[1]+0x00000020u; // 8010E550
  return; // 8010E554
}

// fn_8010E558
void f_8010E558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E558
  c->r[0]=c->lr; // 8010E55C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E560
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E564
  c->lr=0x8010E56Cu; f_801C1BC0(c); // 8010E568
  c->r[3]=0u+0x00000000u; // 8010E56C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E570
  c->lr=c->r[0]; // 8010E574
  c->r[1]=c->r[1]+0x00000010u; // 8010E578
  return; // 8010E57C
}

// fn_8010E580
void f_8010E580(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E580
  c->r[0]=c->lr; // 8010E584
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E588
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E58C
  c->lr=0x8010E594u; f_801C1BF4(c); // 8010E590
  c->r[3]=0u+0x00000000u; // 8010E594
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E598
  c->lr=c->r[0]; // 8010E59C
  c->r[1]=c->r[1]+0x00000010u; // 8010E5A0
  return; // 8010E5A4
}

// fn_8010E5A8
void f_8010E5A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E5A8
  c->r[0]=c->lr; // 8010E5AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E5B0
  c->r[4]=c->r[3]|c->r[3]; // 8010E5B4
  c->r[3]=c->r[1]+0x00000008u; // 8010E5B8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E5BC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E5C0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E5C4
  c->lr=0x8010E5CCu; f_8004E34C(c); // 8010E5C8
  c->r[3]=c->r[1]+0x00000008u; // 8010E5CC
  c->lr=0x8010E5D4u; f_801C1C28(c); // 8010E5D0
  c->r[3]=0u+0x00000000u; // 8010E5D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E5D8
  c->lr=c->r[0]; // 8010E5DC
  c->r[1]=c->r[1]+0x00000020u; // 8010E5E0
  return; // 8010E5E4
}

// fn_8010E5E8
void f_8010E5E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E5E8
  c->r[0]=c->lr; // 8010E5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E5F0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E5F4
  c->lr=0x8010E5FCu; f_801C1C5C(c); // 8010E5F8
  c->r[3]=0u+0x00000000u; // 8010E5FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E600
  c->lr=c->r[0]; // 8010E604
  c->r[1]=c->r[1]+0x00000010u; // 8010E608
  return; // 8010E60C
}

// fn_8010E610
void f_8010E610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E610
  c->r[0]=c->lr; // 8010E614
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E618
  c->r[4]=c->r[3]|c->r[3]; // 8010E61C
  c->r[3]=c->r[1]+0x00000008u; // 8010E620
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E624
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E628
  c->lr=0x8010E630u; f_8004E35C(c); // 8010E62C
  c->r[3]=c->r[1]+0x00000008u; // 8010E630
  c->lr=0x8010E638u; f_801C1C90(c); // 8010E634
  c->r[3]=0u+0x00000000u; // 8010E638
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E63C
  c->lr=c->r[0]; // 8010E640
  c->r[1]=c->r[1]+0x00000010u; // 8010E644
  return; // 8010E648
}

// fn_8010E64C
void f_8010E64C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E64C
  c->r[0]=c->lr; // 8010E650
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E654
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E658
  c->lr=0x8010E660u; f_801C1CC4(c); // 8010E65C
  c->r[3]=0u+0x00000000u; // 8010E660
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E664
  c->lr=c->r[0]; // 8010E668
  c->r[1]=c->r[1]+0x00000010u; // 8010E66C
  return; // 8010E670
}

// fn_8010E674
void f_8010E674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E674
  c->r[0]=c->lr; // 8010E678
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E67C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E680
  c->lr=0x8010E688u; f_801C1CF8(c); // 8010E684
  c->r[3]=0u+0x00000000u; // 8010E688
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E68C
  c->lr=c->r[0]; // 8010E690
  c->r[1]=c->r[1]+0x00000010u; // 8010E694
  return; // 8010E698
}

// fn_8010E69C
void f_8010E69C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E69C
  c->r[0]=c->lr; // 8010E6A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E6A4
  c->r[4]=c->r[3]|c->r[3]; // 8010E6A8
  c->r[3]=c->r[1]+0x00000008u; // 8010E6AC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E6B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E6B4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E6B8
  c->lr=0x8010E6C0u; f_8004E34C(c); // 8010E6BC
  c->r[3]=c->r[1]+0x00000008u; // 8010E6C0
  c->lr=0x8010E6C8u; f_801C1D2C(c); // 8010E6C4
  c->r[3]=0u+0x00000000u; // 8010E6C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E6CC
  c->lr=c->r[0]; // 8010E6D0
  c->r[1]=c->r[1]+0x00000020u; // 8010E6D4
  return; // 8010E6D8
}

// fn_8010E6DC
void f_8010E6DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E6DC
  c->r[0]=c->lr; // 8010E6E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E6E4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E6E8
  c->lr=0x8010E6F0u; f_801C1D60(c); // 8010E6EC
  c->r[3]=0u+0x00000000u; // 8010E6F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E6F4
  c->lr=c->r[0]; // 8010E6F8
  c->r[1]=c->r[1]+0x00000010u; // 8010E6FC
  return; // 8010E700
}

// fn_8010E704
void f_8010E704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E704
  c->r[0]=c->lr; // 8010E708
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E70C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E710
  c->lr=0x8010E718u; f_801C1D94(c); // 8010E714
  c->r[3]=0u+0x00000000u; // 8010E718
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E71C
  c->lr=c->r[0]; // 8010E720
  c->r[1]=c->r[1]+0x00000010u; // 8010E724
  return; // 8010E728
}

// fn_8010E72C
void f_8010E72C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E72C
  c->r[0]=c->lr; // 8010E730
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E734
  c->r[4]=c->r[3]|c->r[3]; // 8010E738
  c->r[3]=c->r[1]+0x00000008u; // 8010E73C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E740
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E744
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E748
  c->lr=0x8010E750u; f_8004E34C(c); // 8010E74C
  c->r[3]=c->r[1]+0x00000008u; // 8010E750
  c->lr=0x8010E758u; f_801C1DC8(c); // 8010E754
  c->r[3]=0u+0x00000000u; // 8010E758
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E75C
  c->lr=c->r[0]; // 8010E760
  c->r[1]=c->r[1]+0x00000020u; // 8010E764
  return; // 8010E768
}

// fn_8010E76C
void f_8010E76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E76C
  c->r[0]=c->lr; // 8010E770
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E774
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E778
  c->lr=0x8010E780u; f_801C1DFC(c); // 8010E77C
  c->r[3]=0u+0x00000000u; // 8010E780
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E784
  c->lr=c->r[0]; // 8010E788
  c->r[1]=c->r[1]+0x00000010u; // 8010E78C
  return; // 8010E790
}

// fn_8010E794
void f_8010E794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E794
  c->r[0]=c->lr; // 8010E798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E79C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E7A0
  c->lr=0x8010E7A8u; f_801C1E30(c); // 8010E7A4
  c->r[3]=0u+0x00000000u; // 8010E7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E7AC
  c->lr=c->r[0]; // 8010E7B0
  c->r[1]=c->r[1]+0x00000010u; // 8010E7B4
  return; // 8010E7B8
}

// fn_8010E7BC
void f_8010E7BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E7BC
  c->r[0]=c->lr; // 8010E7C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E7C4
  c->r[4]=c->r[3]|c->r[3]; // 8010E7C8
  c->r[3]=c->r[1]+0x00000008u; // 8010E7CC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E7D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E7D4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E7D8
  c->lr=0x8010E7E0u; f_8004E34C(c); // 8010E7DC
  c->r[3]=c->r[1]+0x00000008u; // 8010E7E0
  c->lr=0x8010E7E8u; f_801C1E64(c); // 8010E7E4
  c->r[3]=0u+0x00000000u; // 8010E7E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E7EC
  c->lr=c->r[0]; // 8010E7F0
  c->r[1]=c->r[1]+0x00000020u; // 8010E7F4
  return; // 8010E7F8
}

// fn_8010E7FC
void f_8010E7FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E7FC
  c->r[0]=c->lr; // 8010E800
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E804
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E808
  c->lr=0x8010E810u; f_801C1E98(c); // 8010E80C
  c->r[3]=0u+0x00000000u; // 8010E810
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E814
  c->lr=c->r[0]; // 8010E818
  c->r[1]=c->r[1]+0x00000010u; // 8010E81C
  return; // 8010E820
}

// fn_8010E824
void f_8010E824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E824
  c->r[0]=c->lr; // 8010E828
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E82C
  c->r[4]=c->r[3]|c->r[3]; // 8010E830
  c->r[3]=c->r[1]+0x00000008u; // 8010E834
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E838
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E83C
  c->lr=0x8010E844u; f_8004E35C(c); // 8010E840
  c->r[3]=c->r[1]+0x00000008u; // 8010E844
  c->lr=0x8010E84Cu; f_801C1ECC(c); // 8010E848
  c->r[3]=0u+0x00000000u; // 8010E84C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E850
  c->lr=c->r[0]; // 8010E854
  c->r[1]=c->r[1]+0x00000010u; // 8010E858
  return; // 8010E85C
}

// fn_8010E860
void f_8010E860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E860
  c->r[0]=c->lr; // 8010E864
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E868
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E86C
  c->lr=0x8010E874u; f_801C1F00(c); // 8010E870
  c->r[3]=0u+0x00000000u; // 8010E874
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E878
  c->lr=c->r[0]; // 8010E87C
  c->r[1]=c->r[1]+0x00000010u; // 8010E880
  return; // 8010E884
}

// fn_8010E888
void f_8010E888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E888
  c->r[0]=c->lr; // 8010E88C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E890
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E894
  c->lr=0x8010E89Cu; f_801C1F34(c); // 8010E898
  c->r[3]=0u+0x00000000u; // 8010E89C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E8A0
  c->lr=c->r[0]; // 8010E8A4
  c->r[1]=c->r[1]+0x00000010u; // 8010E8A8
  return; // 8010E8AC
}

// fn_8010E8B0
void f_8010E8B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E8B0
  c->r[0]=c->lr; // 8010E8B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E8B8
  c->r[4]=c->r[3]|c->r[3]; // 8010E8BC
  c->r[3]=c->r[1]+0x00000008u; // 8010E8C0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E8C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E8C8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E8CC
  c->lr=0x8010E8D4u; f_8004E34C(c); // 8010E8D0
  c->r[3]=c->r[1]+0x00000008u; // 8010E8D4
  c->lr=0x8010E8DCu; f_801C1F68(c); // 8010E8D8
  c->r[3]=0u+0x00000000u; // 8010E8DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E8E0
  c->lr=c->r[0]; // 8010E8E4
  c->r[1]=c->r[1]+0x00000020u; // 8010E8E8
  return; // 8010E8EC
}

// fn_8010E8F0
void f_8010E8F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E8F0
  c->r[0]=c->lr; // 8010E8F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E8F8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E8FC
  c->lr=0x8010E904u; f_801C1F9C(c); // 8010E900
  c->r[3]=0u+0x00000000u; // 8010E904
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E908
  c->lr=c->r[0]; // 8010E90C
  c->r[1]=c->r[1]+0x00000010u; // 8010E910
  return; // 8010E914
}

// fn_8010E918
void f_8010E918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E918
  c->r[0]=c->lr; // 8010E91C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E920
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E924
  c->lr=0x8010E92Cu; f_801C1FD0(c); // 8010E928
  c->r[3]=0u+0x00000000u; // 8010E92C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E930
  c->lr=c->r[0]; // 8010E934
  c->r[1]=c->r[1]+0x00000010u; // 8010E938
  return; // 8010E93C
}

// fn_8010E940
void f_8010E940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E940
  c->r[0]=c->lr; // 8010E944
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E948
  c->r[4]=c->r[3]|c->r[3]; // 8010E94C
  c->r[3]=c->r[1]+0x00000008u; // 8010E950
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E954
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E958
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010E95C
  c->lr=0x8010E964u; f_8004E34C(c); // 8010E960
  c->r[3]=c->r[1]+0x00000008u; // 8010E964
  c->lr=0x8010E96Cu; f_801C2004(c); // 8010E968
  c->r[3]=0u+0x00000000u; // 8010E96C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E970
  c->lr=c->r[0]; // 8010E974
  c->r[1]=c->r[1]+0x00000020u; // 8010E978
  return; // 8010E97C
}

// fn_8010E980
void f_8010E980(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E980
  c->r[0]=c->lr; // 8010E984
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E988
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E98C
  c->lr=0x8010E994u; f_801C2038(c); // 8010E990
  c->r[3]=0u+0x00000000u; // 8010E994
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E998
  c->lr=c->r[0]; // 8010E99C
  c->r[1]=c->r[1]+0x00000010u; // 8010E9A0
  return; // 8010E9A4
}

// fn_8010E9A8
void f_8010E9A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E9A8
  c->r[0]=c->lr; // 8010E9AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E9B0
  c->r[4]=c->r[3]|c->r[3]; // 8010E9B4
  c->r[3]=c->r[1]+0x00000008u; // 8010E9B8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E9BC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010E9C0
  c->lr=0x8010E9C8u; f_8004E35C(c); // 8010E9C4
  c->r[3]=c->r[1]+0x00000008u; // 8010E9C8
  c->lr=0x8010E9D0u; f_801C206C(c); // 8010E9CC
  c->r[3]=0u+0x00000000u; // 8010E9D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E9D4
  c->lr=c->r[0]; // 8010E9D8
  c->r[1]=c->r[1]+0x00000010u; // 8010E9DC
  return; // 8010E9E0
}

// fn_8010E9E4
void f_8010E9E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E9E4
  c->r[0]=c->lr; // 8010E9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010E9EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010E9F0
  c->lr=0x8010E9F8u; f_801C20A0(c); // 8010E9F4
  c->r[3]=0u+0x00000000u; // 8010E9F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010E9FC
  c->lr=c->r[0]; // 8010EA00
  c->r[1]=c->r[1]+0x00000010u; // 8010EA04
  return; // 8010EA08
}

// fn_8010EA0C
void f_8010EA0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EA0C
  c->r[0]=c->lr; // 8010EA10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EA14
  c->r[4]=c->r[3]|c->r[3]; // 8010EA18
  c->r[3]=c->r[1]+0x00000008u; // 8010EA1C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EA20
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EA24
  c->lr=0x8010EA2Cu; f_8004E35C(c); // 8010EA28
  c->r[3]=c->r[1]+0x00000008u; // 8010EA2C
  c->lr=0x8010EA34u; f_801C20D4(c); // 8010EA30
  c->r[3]=0u+0x00000000u; // 8010EA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EA38
  c->lr=c->r[0]; // 8010EA3C
  c->r[1]=c->r[1]+0x00000010u; // 8010EA40
  return; // 8010EA44
}

// fn_8010EA48
void f_8010EA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EA48
  c->r[0]=c->lr; // 8010EA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EA50
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EA54
  c->lr=0x8010EA5Cu; f_801C2108(c); // 8010EA58
  c->r[3]=0u+0x00000000u; // 8010EA5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EA60
  c->lr=c->r[0]; // 8010EA64
  c->r[1]=c->r[1]+0x00000010u; // 8010EA68
  return; // 8010EA6C
}

// fn_8010EA70
void f_8010EA70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EA70
  c->r[0]=c->lr; // 8010EA74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EA78
  c->r[4]=c->r[3]|c->r[3]; // 8010EA7C
  c->r[3]=c->r[1]+0x00000008u; // 8010EA80
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EA84
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EA88
  c->lr=0x8010EA90u; f_8004E35C(c); // 8010EA8C
  c->r[3]=c->r[1]+0x00000008u; // 8010EA90
  c->lr=0x8010EA98u; f_801C213C(c); // 8010EA94
  c->r[3]=0u+0x00000000u; // 8010EA98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EA9C
  c->lr=c->r[0]; // 8010EAA0
  c->r[1]=c->r[1]+0x00000010u; // 8010EAA4
  return; // 8010EAA8
}

// fn_8010EAAC
void f_8010EAAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EAAC
  c->r[0]=c->lr; // 8010EAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EAB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EAB8
  c->lr=0x8010EAC0u; f_801C2170(c); // 8010EABC
  c->r[3]=0u+0x00000000u; // 8010EAC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EAC4
  c->lr=c->r[0]; // 8010EAC8
  c->r[1]=c->r[1]+0x00000010u; // 8010EACC
  return; // 8010EAD0
}

// fn_8010EAD4
void f_8010EAD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EAD4
  c->r[0]=c->lr; // 8010EAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EADC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EAE0
  c->lr=0x8010EAE8u; f_801C21A4(c); // 8010EAE4
  c->r[3]=0u+0x00000000u; // 8010EAE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EAEC
  c->lr=c->r[0]; // 8010EAF0
  c->r[1]=c->r[1]+0x00000010u; // 8010EAF4
  return; // 8010EAF8
}

// fn_8010EAFC
void f_8010EAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EAFC
  c->r[0]=c->lr; // 8010EB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EB04
  c->r[4]=c->r[3]|c->r[3]; // 8010EB08
  c->r[3]=c->r[1]+0x00000008u; // 8010EB0C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EB10
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EB14
  c->lr=0x8010EB1Cu; f_8004E35C(c); // 8010EB18
  c->r[3]=c->r[1]+0x00000008u; // 8010EB1C
  c->lr=0x8010EB24u; f_801C21D8(c); // 8010EB20
  c->r[3]=0u+0x00000000u; // 8010EB24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EB28
  c->lr=c->r[0]; // 8010EB2C
  c->r[1]=c->r[1]+0x00000010u; // 8010EB30
  return; // 8010EB34
}

// fn_8010EB38
void f_8010EB38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EB38
  c->r[0]=c->lr; // 8010EB3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EB40
  c->r[4]=c->r[3]|c->r[3]; // 8010EB44
  c->r[3]=c->r[1]+0x00000008u; // 8010EB48
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EB4C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EB50
  c->lr=0x8010EB58u; f_8004E35C(c); // 8010EB54
  c->r[3]=c->r[1]+0x00000008u; // 8010EB58
  c->lr=0x8010EB60u; f_801C220C(c); // 8010EB5C
  c->r[3]=0u+0x00000000u; // 8010EB60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EB64
  c->lr=c->r[0]; // 8010EB68
  c->r[1]=c->r[1]+0x00000010u; // 8010EB6C
  return; // 8010EB70
}

// fn_8010EB74
void f_8010EB74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EB74
  c->r[0]=c->lr; // 8010EB78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EB7C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EB80
  c->lr=0x8010EB88u; f_801CE4F4(c); // 8010EB84
  c->r[3]=0u+0x00000000u; // 8010EB88
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EB8C
  c->lr=c->r[0]; // 8010EB90
  c->r[1]=c->r[1]+0x00000010u; // 8010EB94
  return; // 8010EB98
}

// fn_8010EB9C
void f_8010EB9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EB9C
  c->r[0]=c->lr; // 8010EBA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010EBA4
  c->r[4]=c->r[3]|c->r[3]; // 8010EBA8
  c->r[3]=c->r[1]+0x00000008u; // 8010EBAC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EBB0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EBB4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010EBB8
  c->lr=0x8010EBC0u; f_8004E34C(c); // 8010EBBC
  c->r[3]=c->r[1]+0x00000008u; // 8010EBC0
  c->lr=0x8010EBC8u; f_801CE528(c); // 8010EBC4
  c->r[3]=0u+0x00000000u; // 8010EBC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010EBCC
  c->lr=c->r[0]; // 8010EBD0
  c->r[1]=c->r[1]+0x00000020u; // 8010EBD4
  return; // 8010EBD8
}

// fn_8010EBDC
void f_8010EBDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EBDC
  c->r[0]=c->lr; // 8010EBE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EBE4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EBE8
  c->lr=0x8010EBF0u; f_801CE55C(c); // 8010EBEC
  c->r[3]=0u+0x00000000u; // 8010EBF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EBF4
  c->lr=c->r[0]; // 8010EBF8
  c->r[1]=c->r[1]+0x00000010u; // 8010EBFC
  return; // 8010EC00
}

// fn_8010EC04
void f_8010EC04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EC04
  c->r[0]=c->lr; // 8010EC08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EC0C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EC10
  c->lr=0x8010EC18u; f_801CE590(c); // 8010EC14
  c->r[3]=0u+0x00000000u; // 8010EC18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EC1C
  c->lr=c->r[0]; // 8010EC20
  c->r[1]=c->r[1]+0x00000010u; // 8010EC24
  return; // 8010EC28
}

// fn_8010EC2C
void f_8010EC2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EC2C
  c->r[0]=c->lr; // 8010EC30
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010EC34
  c->r[4]=c->r[3]|c->r[3]; // 8010EC38
  c->r[3]=c->r[1]+0x00000008u; // 8010EC3C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EC40
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EC44
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010EC48
  c->lr=0x8010EC50u; f_8004E34C(c); // 8010EC4C
  c->r[3]=c->r[1]+0x00000008u; // 8010EC50
  c->lr=0x8010EC58u; f_801CE5C4(c); // 8010EC54
  c->r[3]=0u+0x00000000u; // 8010EC58
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010EC5C
  c->lr=c->r[0]; // 8010EC60
  c->r[1]=c->r[1]+0x00000020u; // 8010EC64
  return; // 8010EC68
}

// fn_8010EC6C
void f_8010EC6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EC6C
  c->r[0]=c->lr; // 8010EC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EC74
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EC78
  c->lr=0x8010EC80u; f_801CE5F8(c); // 8010EC7C
  c->r[3]=0u+0x00000000u; // 8010EC80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EC84
  c->lr=c->r[0]; // 8010EC88
  c->r[1]=c->r[1]+0x00000010u; // 8010EC8C
  return; // 8010EC90
}

// fn_8010EC94
void f_8010EC94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EC94
  c->r[0]=c->lr; // 8010EC98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EC9C
  c->r[4]=c->r[3]|c->r[3]; // 8010ECA0
  c->r[3]=c->r[1]+0x00000008u; // 8010ECA4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010ECA8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010ECAC
  c->lr=0x8010ECB4u; f_8004E35C(c); // 8010ECB0
  c->r[3]=c->r[1]+0x00000008u; // 8010ECB4
  c->lr=0x8010ECBCu; f_801CE62C(c); // 8010ECB8
  c->r[3]=0u+0x00000000u; // 8010ECBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ECC0
  c->lr=c->r[0]; // 8010ECC4
  c->r[1]=c->r[1]+0x00000010u; // 8010ECC8
  return; // 8010ECCC
}

// fn_8010ECD0
void f_8010ECD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ECD0
  c->r[0]=c->lr; // 8010ECD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010ECD8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010ECDC
  c->lr=0x8010ECE4u; f_801CE660(c); // 8010ECE0
  c->r[3]=0u+0x00000000u; // 8010ECE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ECE8
  c->lr=c->r[0]; // 8010ECEC
  c->r[1]=c->r[1]+0x00000010u; // 8010ECF0
  return; // 8010ECF4
}

// fn_8010ECF8
void f_8010ECF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ECF8
  c->r[0]=c->lr; // 8010ECFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010ED00
  c->r[4]=c->r[3]|c->r[3]; // 8010ED04
  c->r[3]=c->r[1]+0x00000008u; // 8010ED08
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010ED0C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010ED10
  c->lr=0x8010ED18u; f_8004E35C(c); // 8010ED14
  c->r[3]=c->r[1]+0x00000008u; // 8010ED18
  c->lr=0x8010ED20u; f_801CE694(c); // 8010ED1C
  c->r[3]=0u+0x00000000u; // 8010ED20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ED24
  c->lr=c->r[0]; // 8010ED28
  c->r[1]=c->r[1]+0x00000010u; // 8010ED2C
  return; // 8010ED30
}

// fn_8010ED34
void f_8010ED34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ED34
  c->r[0]=c->lr; // 8010ED38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010ED3C
  c->r[4]=c->r[3]|c->r[3]; // 8010ED40
  c->r[3]=c->r[1]+0x00000008u; // 8010ED44
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010ED48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010ED4C
  c->lr=0x8010ED54u; f_8004E35C(c); // 8010ED50
  c->r[3]=c->r[1]+0x00000008u; // 8010ED54
  c->lr=0x8010ED5Cu; f_801CE6C8(c); // 8010ED58
  c->r[3]=0u+0x00000000u; // 8010ED5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ED60
  c->lr=c->r[0]; // 8010ED64
  c->r[1]=c->r[1]+0x00000010u; // 8010ED68
  return; // 8010ED6C
}

// fn_8010ED70
void f_8010ED70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ED70
  c->r[0]=c->lr; // 8010ED74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010ED78
  c->r[4]=c->r[3]|c->r[3]; // 8010ED7C
  c->r[3]=c->r[1]+0x00000008u; // 8010ED80
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010ED84
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010ED88
  c->lr=0x8010ED90u; f_8004E35C(c); // 8010ED8C
  c->r[3]=c->r[1]+0x00000008u; // 8010ED90
  c->lr=0x8010ED98u; f_801CE6FC(c); // 8010ED94
  c->r[3]=0u+0x00000000u; // 8010ED98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ED9C
  c->lr=c->r[0]; // 8010EDA0
  c->r[1]=c->r[1]+0x00000010u; // 8010EDA4
  return; // 8010EDA8
}

// fn_8010EDAC
void f_8010EDAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EDAC
  c->r[0]=c->lr; // 8010EDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EDB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EDB8
  c->lr=0x8010EDC0u; f_801CE730(c); // 8010EDBC
  c->r[3]=0u+0x00000000u; // 8010EDC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EDC4
  c->lr=c->r[0]; // 8010EDC8
  c->r[1]=c->r[1]+0x00000010u; // 8010EDCC
  return; // 8010EDD0
}

// fn_8010EDD4
void f_8010EDD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EDD4
  c->r[0]=c->lr; // 8010EDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010EDDC
  c->r[4]=c->r[3]|c->r[3]; // 8010EDE0
  c->r[3]=c->r[1]+0x00000008u; // 8010EDE4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EDE8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EDEC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010EDF0
  c->lr=0x8010EDF8u; f_8004E34C(c); // 8010EDF4
  c->r[3]=c->r[1]+0x00000008u; // 8010EDF8
  c->lr=0x8010EE00u; f_801CE764(c); // 8010EDFC
  c->r[3]=0u+0x00000000u; // 8010EE00
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010EE04
  c->lr=c->r[0]; // 8010EE08
  c->r[1]=c->r[1]+0x00000020u; // 8010EE0C
  return; // 8010EE10
}

// fn_8010EE14
void f_8010EE14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EE14
  c->r[0]=c->lr; // 8010EE18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EE1C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EE20
  c->lr=0x8010EE28u; f_801CE798(c); // 8010EE24
  c->r[3]=0u+0x00000000u; // 8010EE28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EE2C
  c->lr=c->r[0]; // 8010EE30
  c->r[1]=c->r[1]+0x00000010u; // 8010EE34
  return; // 8010EE38
}

// fn_8010EE3C
void f_8010EE3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EE3C
  c->r[0]=c->lr; // 8010EE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EE44
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EE48
  c->lr=0x8010EE50u; f_801CE7CC(c); // 8010EE4C
  c->r[3]=0u+0x00000000u; // 8010EE50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EE54
  c->lr=c->r[0]; // 8010EE58
  c->r[1]=c->r[1]+0x00000010u; // 8010EE5C
  return; // 8010EE60
}

// fn_8010EE64
void f_8010EE64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EE64
  c->r[0]=c->lr; // 8010EE68
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010EE6C
  c->r[4]=c->r[3]|c->r[3]; // 8010EE70
  c->r[3]=c->r[1]+0x00000008u; // 8010EE74
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EE78
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EE7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010EE80
  c->lr=0x8010EE88u; f_8004E34C(c); // 8010EE84
  c->r[3]=c->r[1]+0x00000008u; // 8010EE88
  c->lr=0x8010EE90u; f_801CE800(c); // 8010EE8C
  c->r[3]=0u+0x00000000u; // 8010EE90
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010EE94
  c->lr=c->r[0]; // 8010EE98
  c->r[1]=c->r[1]+0x00000020u; // 8010EE9C
  return; // 8010EEA0
}

// fn_8010EEA4
void f_8010EEA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EEA4
  c->r[0]=c->lr; // 8010EEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EEAC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EEB0
  c->lr=0x8010EEB8u; f_801CE834(c); // 8010EEB4
  c->r[3]=0u+0x00000000u; // 8010EEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EEBC
  c->lr=c->r[0]; // 8010EEC0
  c->r[1]=c->r[1]+0x00000010u; // 8010EEC4
  return; // 8010EEC8
}

// fn_8010EECC
void f_8010EECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EECC
  c->r[0]=c->lr; // 8010EED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EED4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EED8
  c->lr=0x8010EEE0u; f_801CE868(c); // 8010EEDC
  c->r[3]=0u+0x00000000u; // 8010EEE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EEE4
  c->lr=c->r[0]; // 8010EEE8
  c->r[1]=c->r[1]+0x00000010u; // 8010EEEC
  return; // 8010EEF0
}

// fn_8010EEF4
void f_8010EEF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EEF4
  c->r[0]=c->lr; // 8010EEF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010EEFC
  c->r[4]=c->r[3]|c->r[3]; // 8010EF00
  c->r[3]=c->r[1]+0x00000008u; // 8010EF04
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EF08
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EF0C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010EF10
  c->lr=0x8010EF18u; f_8004E34C(c); // 8010EF14
  c->r[3]=c->r[1]+0x00000008u; // 8010EF18
  c->lr=0x8010EF20u; f_801CE89C(c); // 8010EF1C
  c->r[3]=0u+0x00000000u; // 8010EF20
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010EF24
  c->lr=c->r[0]; // 8010EF28
  c->r[1]=c->r[1]+0x00000020u; // 8010EF2C
  return; // 8010EF30
}

// fn_8010EF34
void f_8010EF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EF34
  c->r[0]=c->lr; // 8010EF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EF3C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EF40
  c->lr=0x8010EF48u; f_801CE8D0(c); // 8010EF44
  c->r[3]=0u+0x00000000u; // 8010EF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EF4C
  c->lr=c->r[0]; // 8010EF50
  c->r[1]=c->r[1]+0x00000010u; // 8010EF54
  return; // 8010EF58
}

// fn_8010EF5C
void f_8010EF5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EF5C
  c->r[0]=c->lr; // 8010EF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EF64
  c->r[4]=c->r[3]|c->r[3]; // 8010EF68
  c->r[3]=c->r[1]+0x00000008u; // 8010EF6C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EF70
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010EF74
  c->lr=0x8010EF7Cu; f_8004E35C(c); // 8010EF78
  c->r[3]=c->r[1]+0x00000008u; // 8010EF7C
  c->lr=0x8010EF84u; f_801CE904(c); // 8010EF80
  c->r[3]=0u+0x00000000u; // 8010EF84
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EF88
  c->lr=c->r[0]; // 8010EF8C
  c->r[1]=c->r[1]+0x00000010u; // 8010EF90
  return; // 8010EF94
}

// fn_8010EF98
void f_8010EF98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EF98
  c->r[0]=c->lr; // 8010EF9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EFA0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EFA4
  c->lr=0x8010EFACu; f_801CE938(c); // 8010EFA8
  c->r[3]=0u+0x00000000u; // 8010EFAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EFB0
  c->lr=c->r[0]; // 8010EFB4
  c->r[1]=c->r[1]+0x00000010u; // 8010EFB8
  return; // 8010EFBC
}

// fn_8010EFC0
void f_8010EFC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EFC0
  c->r[0]=c->lr; // 8010EFC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EFC8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EFCC
  c->lr=0x8010EFD4u; f_801D5418(c); // 8010EFD0
  c->r[3]=0u+0x00000000u; // 8010EFD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010EFD8
  c->lr=c->r[0]; // 8010EFDC
  c->r[1]=c->r[1]+0x00000010u; // 8010EFE0
  return; // 8010EFE4
}

// fn_8010EFE8
void f_8010EFE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EFE8
  c->r[0]=c->lr; // 8010EFEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010EFF0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010EFF4
  c->lr=0x8010EFFCu; f_801D544C(c); // 8010EFF8
  c->r[3]=0u+0x00000000u; // 8010EFFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F000
  c->lr=c->r[0]; // 8010F004
  c->r[1]=c->r[1]+0x00000010u; // 8010F008
  return; // 8010F00C
}

// fn_8010F010
void f_8010F010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F010
  c->r[0]=c->lr; // 8010F014
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F018
  c->r[4]=c->r[3]|c->r[3]; // 8010F01C
  c->r[3]=c->r[1]+0x00000008u; // 8010F020
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F024
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F028
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F02C
  c->lr=0x8010F034u; f_8004E34C(c); // 8010F030
  c->r[3]=c->r[1]+0x00000008u; // 8010F034
  c->lr=0x8010F03Cu; f_801D5480(c); // 8010F038
  c->r[3]=0u+0x00000000u; // 8010F03C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F040
  c->lr=c->r[0]; // 8010F044
  c->r[1]=c->r[1]+0x00000020u; // 8010F048
  return; // 8010F04C
}

// fn_8010F050
void f_8010F050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F050
  c->r[0]=c->lr; // 8010F054
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F058
  c->r[4]=c->r[3]|c->r[3]; // 8010F05C
  c->r[3]=c->r[1]+0x00000008u; // 8010F060
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F064
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F068
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F06C
  c->lr=0x8010F074u; f_8004E34C(c); // 8010F070
  c->r[3]=c->r[1]+0x00000008u; // 8010F074
  c->lr=0x8010F07Cu; f_801D54B4(c); // 8010F078
  c->r[3]=0u+0x00000000u; // 8010F07C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F080
  c->lr=c->r[0]; // 8010F084
  c->r[1]=c->r[1]+0x00000020u; // 8010F088
  return; // 8010F08C
}

// fn_8010F090
void f_8010F090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F090
  c->r[0]=c->lr; // 8010F094
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F098
  c->r[4]=c->r[3]|c->r[3]; // 8010F09C
  c->r[3]=c->r[1]+0x00000008u; // 8010F0A0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F0A4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F0A8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F0AC
  c->lr=0x8010F0B4u; f_8004E34C(c); // 8010F0B0
  c->r[3]=c->r[1]+0x00000008u; // 8010F0B4
  c->lr=0x8010F0BCu; f_801D54E8(c); // 8010F0B8
  c->r[3]=0u+0x00000000u; // 8010F0BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F0C0
  c->lr=c->r[0]; // 8010F0C4
  c->r[1]=c->r[1]+0x00000020u; // 8010F0C8
  return; // 8010F0CC
}

// fn_8010F0D0
void f_8010F0D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F0D0
  c->r[0]=c->lr; // 8010F0D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F0D8
  c->r[4]=c->r[3]|c->r[3]; // 8010F0DC
  c->r[3]=c->r[1]+0x00000008u; // 8010F0E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F0E4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F0E8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F0EC
  c->lr=0x8010F0F4u; f_8004E34C(c); // 8010F0F0
  c->r[3]=c->r[1]+0x00000008u; // 8010F0F4
  c->lr=0x8010F0FCu; f_802175AC(c); // 8010F0F8
  c->r[3]=0u+0x00000000u; // 8010F0FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F100
  c->lr=c->r[0]; // 8010F104
  c->r[1]=c->r[1]+0x00000020u; // 8010F108
  return; // 8010F10C
}

// fn_8010F110
void f_8010F110(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F110
  c->r[0]=c->lr; // 8010F114
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F118
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F11C
  c->lr=0x8010F124u; f_802175E0(c); // 8010F120
  c->r[3]=0u+0x00000000u; // 8010F124
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F128
  c->lr=c->r[0]; // 8010F12C
  c->r[1]=c->r[1]+0x00000010u; // 8010F130
  return; // 8010F134
}

// fn_8010F138
void f_8010F138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F138
  c->r[0]=c->lr; // 8010F13C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F140
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F144
  c->lr=0x8010F14Cu; f_80217614(c); // 8010F148
  c->r[3]=0u+0x00000000u; // 8010F14C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F150
  c->lr=c->r[0]; // 8010F154
  c->r[1]=c->r[1]+0x00000010u; // 8010F158
  return; // 8010F15C
}

// fn_8010F160
void f_8010F160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F160
  c->r[0]=c->lr; // 8010F164
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F168
  c->r[4]=c->r[3]|c->r[3]; // 8010F16C
  c->r[3]=c->r[1]+0x00000008u; // 8010F170
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F174
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F178
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F17C
  c->lr=0x8010F184u; f_8004E34C(c); // 8010F180
  c->r[3]=c->r[1]+0x00000008u; // 8010F184
  c->lr=0x8010F18Cu; f_80217648(c); // 8010F188
  c->r[3]=0u+0x00000000u; // 8010F18C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F190
  c->lr=c->r[0]; // 8010F194
  c->r[1]=c->r[1]+0x00000020u; // 8010F198
  return; // 8010F19C
}

// fn_8010F1A0
void f_8010F1A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F1A0
  c->r[0]=c->lr; // 8010F1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F1A8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F1AC
  c->lr=0x8010F1B4u; f_8021767C(c); // 8010F1B0
  c->r[3]=0u+0x00000000u; // 8010F1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F1B8
  c->lr=c->r[0]; // 8010F1BC
  c->r[1]=c->r[1]+0x00000010u; // 8010F1C0
  return; // 8010F1C4
}

// fn_8010F1C8
void f_8010F1C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F1C8
  c->r[0]=c->lr; // 8010F1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F1D0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F1D4
  c->lr=0x8010F1DCu; f_802176B0(c); // 8010F1D8
  c->r[3]=0u+0x00000000u; // 8010F1DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F1E0
  c->lr=c->r[0]; // 8010F1E4
  c->r[1]=c->r[1]+0x00000010u; // 8010F1E8
  return; // 8010F1EC
}

// fn_8010F1F0
void f_8010F1F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F1F0
  c->r[0]=c->lr; // 8010F1F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F1F8
  c->r[4]=c->r[3]|c->r[3]; // 8010F1FC
  c->r[3]=c->r[1]+0x00000008u; // 8010F200
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F204
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F208
  c->lr=0x8010F210u; f_8004E35C(c); // 8010F20C
  c->r[3]=c->r[1]+0x00000008u; // 8010F210
  c->lr=0x8010F218u; f_802176E4(c); // 8010F214
  c->r[3]=0u+0x00000000u; // 8010F218
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F21C
  c->lr=c->r[0]; // 8010F220
  c->r[1]=c->r[1]+0x00000010u; // 8010F224
  return; // 8010F228
}

// fn_8010F22C
void f_8010F22C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F22C
  c->r[0]=c->lr; // 8010F230
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F234
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F238
  c->lr=0x8010F240u; f_80217718(c); // 8010F23C
  c->r[3]=0u+0x00000000u; // 8010F240
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F244
  c->lr=c->r[0]; // 8010F248
  c->r[1]=c->r[1]+0x00000010u; // 8010F24C
  return; // 8010F250
}

// fn_8010F254
void f_8010F254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F254
  c->r[0]=c->lr; // 8010F258
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F25C
  c->r[4]=c->r[3]|c->r[3]; // 8010F260
  c->r[3]=c->r[1]+0x00000008u; // 8010F264
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F268
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F26C
  c->lr=0x8010F274u; f_8004E35C(c); // 8010F270
  c->r[3]=c->r[1]+0x00000008u; // 8010F274
  c->lr=0x8010F27Cu; f_8021774C(c); // 8010F278
  c->r[3]=0u+0x00000000u; // 8010F27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F280
  c->lr=c->r[0]; // 8010F284
  c->r[1]=c->r[1]+0x00000010u; // 8010F288
  return; // 8010F28C
}

// fn_8010F290
void f_8010F290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F290
  c->r[0]=c->lr; // 8010F294
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F298
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F29C
  c->lr=0x8010F2A4u; f_80217780(c); // 8010F2A0
  c->r[3]=0u+0x00000000u; // 8010F2A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F2A8
  c->lr=c->r[0]; // 8010F2AC
  c->r[1]=c->r[1]+0x00000010u; // 8010F2B0
  return; // 8010F2B4
}

// fn_8010F2B8
void f_8010F2B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F2B8
  c->r[0]=c->lr; // 8010F2BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F2C0
  c->r[4]=c->r[3]|c->r[3]; // 8010F2C4
  c->r[3]=c->r[1]+0x00000008u; // 8010F2C8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F2CC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F2D0
  c->lr=0x8010F2D8u; f_8004E35C(c); // 8010F2D4
  c->r[3]=c->r[1]+0x00000008u; // 8010F2D8
  c->lr=0x8010F2E0u; f_802177B4(c); // 8010F2DC
  c->r[3]=0u+0x00000000u; // 8010F2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F2E4
  c->lr=c->r[0]; // 8010F2E8
  c->r[1]=c->r[1]+0x00000010u; // 8010F2EC
  return; // 8010F2F0
}

// fn_8010F2F4
void f_8010F2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F2F4
  c->r[0]=c->lr; // 8010F2F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F2FC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F300
  c->lr=0x8010F308u; f_802177E8(c); // 8010F304
  c->r[3]=0u+0x00000000u; // 8010F308
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F30C
  c->lr=c->r[0]; // 8010F310
  c->r[1]=c->r[1]+0x00000010u; // 8010F314
  return; // 8010F318
}

// fn_8010F31C
void f_8010F31C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F31C
  c->r[0]=c->lr; // 8010F320
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F324
  c->r[4]=c->r[3]|c->r[3]; // 8010F328
  c->r[3]=c->r[1]+0x00000008u; // 8010F32C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F330
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F334
  c->lr=0x8010F33Cu; f_8004E35C(c); // 8010F338
  c->r[3]=c->r[1]+0x00000008u; // 8010F33C
  c->lr=0x8010F344u; f_8021781C(c); // 8010F340
  c->r[3]=0u+0x00000000u; // 8010F344
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F348
  c->lr=c->r[0]; // 8010F34C
  c->r[1]=c->r[1]+0x00000010u; // 8010F350
  return; // 8010F354
}

// fn_8010F358
void f_8010F358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F358
  c->r[0]=c->lr; // 8010F35C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F360
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F364
  c->lr=0x8010F36Cu; f_80217850(c); // 8010F368
  c->r[3]=0u+0x00000000u; // 8010F36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F370
  c->lr=c->r[0]; // 8010F374
  c->r[1]=c->r[1]+0x00000010u; // 8010F378
  return; // 8010F37C
}

// fn_8010F380
void f_8010F380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F380
  c->r[0]=c->lr; // 8010F384
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F388
  c->r[4]=c->r[3]|c->r[3]; // 8010F38C
  c->r[3]=c->r[1]+0x00000008u; // 8010F390
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F394
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F398
  c->lr=0x8010F3A0u; f_8004E35C(c); // 8010F39C
  c->r[3]=c->r[1]+0x00000008u; // 8010F3A0
  c->lr=0x8010F3A8u; f_80217884(c); // 8010F3A4
  c->r[3]=0u+0x00000000u; // 8010F3A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F3AC
  c->lr=c->r[0]; // 8010F3B0
  c->r[1]=c->r[1]+0x00000010u; // 8010F3B4
  return; // 8010F3B8
}

// fn_8010F3BC
void f_8010F3BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F3BC
  c->r[0]=c->lr; // 8010F3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F3C4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F3C8
  c->lr=0x8010F3D0u; f_802178B8(c); // 8010F3CC
  c->r[3]=0u+0x00000000u; // 8010F3D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F3D4
  c->lr=c->r[0]; // 8010F3D8
  c->r[1]=c->r[1]+0x00000010u; // 8010F3DC
  return; // 8010F3E0
}

// fn_8010F3E4
void f_8010F3E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F3E4
  c->r[0]=c->lr; // 8010F3E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F3EC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F3F0
  c->lr=0x8010F3F8u; f_80237180(c); // 8010F3F4
  c->r[3]=0u+0x00000000u; // 8010F3F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F3FC
  c->lr=c->r[0]; // 8010F400
  c->r[1]=c->r[1]+0x00000010u; // 8010F404
  return; // 8010F408
}

// fn_8010F40C
void f_8010F40C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F40C
  c->r[0]=c->lr; // 8010F410
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F414
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F418
  c->lr=0x8010F420u; f_802371B4(c); // 8010F41C
  c->r[3]=0u+0x00000000u; // 8010F420
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F424
  c->lr=c->r[0]; // 8010F428
  c->r[1]=c->r[1]+0x00000010u; // 8010F42C
  return; // 8010F430
}

// fn_8010F434
void f_8010F434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F434
  c->r[0]=c->lr; // 8010F438
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F43C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F440
  c->lr=0x8010F448u; f_802371E8(c); // 8010F444
  c->r[3]=0u+0x00000000u; // 8010F448
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F44C
  c->lr=c->r[0]; // 8010F450
  c->r[1]=c->r[1]+0x00000010u; // 8010F454
  return; // 8010F458
}

// fn_8010F45C
void f_8010F45C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F45C
  c->r[0]=c->lr; // 8010F460
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F464
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F468
  c->lr=0x8010F470u; f_8023721C(c); // 8010F46C
  c->r[3]=0u+0x00000000u; // 8010F470
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F474
  c->lr=c->r[0]; // 8010F478
  c->r[1]=c->r[1]+0x00000010u; // 8010F47C
  return; // 8010F480
}

// fn_8010F484
void f_8010F484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F484
  c->r[0]=c->lr; // 8010F488
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F48C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F490
  c->lr=0x8010F498u; f_80237250(c); // 8010F494
  c->r[3]=0u+0x00000000u; // 8010F498
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F49C
  c->lr=c->r[0]; // 8010F4A0
  c->r[1]=c->r[1]+0x00000010u; // 8010F4A4
  return; // 8010F4A8
}

// fn_8010F4AC
void f_8010F4AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F4AC
  c->r[0]=c->lr; // 8010F4B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F4B4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F4B8
  c->lr=0x8010F4C0u; f_80237284(c); // 8010F4BC
  c->r[3]=0u+0x00000000u; // 8010F4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F4C4
  c->lr=c->r[0]; // 8010F4C8
  c->r[1]=c->r[1]+0x00000010u; // 8010F4CC
  return; // 8010F4D0
}

// fn_8010F4D4
void f_8010F4D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F4D4
  c->r[0]=c->lr; // 8010F4D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F4DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F4E0
  c->r[4]=c->r[3]|c->r[3]; // 8010F4E4
  c->r[31]=R32(c->r[3]+0x00000000u); // 8010F4E8
  c->r[3]=c->r[1]+0x00000008u; // 8010F4EC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F4F0
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F4F4
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F4F8
  c->lr=0x8010F500u; f_8004E34C(c); // 8010F4FC
  c->r[3]=c->r[31]|c->r[31]; // 8010F500
  c->r[4]=c->r[1]+0x00000008u; // 8010F504
  c->lr=0x8010F50Cu; f_802372B8(c); // 8010F508
  c->r[3]=0u+0x00000000u; // 8010F50C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010F510
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F514
  c->lr=c->r[0]; // 8010F518
  c->r[1]=c->r[1]+0x00000020u; // 8010F51C
  return; // 8010F520
}

// fn_8010F524
void f_8010F524(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F524
  c->r[0]=c->lr; // 8010F528
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F52C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F530
  c->lr=0x8010F538u; f_802372FC(c); // 8010F534
  c->r[3]=0u+0x00000000u; // 8010F538
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F53C
  c->lr=c->r[0]; // 8010F540
  c->r[1]=c->r[1]+0x00000010u; // 8010F544
  return; // 8010F548
}

// fn_8010F54C
void f_8010F54C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F54C
  c->r[0]=c->lr; // 8010F550
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F554
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F558
  c->lr=0x8010F560u; f_80237330(c); // 8010F55C
  c->r[3]=0u+0x00000000u; // 8010F560
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F564
  c->lr=c->r[0]; // 8010F568
  c->r[1]=c->r[1]+0x00000010u; // 8010F56C
  return; // 8010F570
}

// fn_8010F574
void f_8010F574(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F574
  c->r[0]=c->lr; // 8010F578
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F57C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F580
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010F584
  c->r[4]=c->r[3]|c->r[3]; // 8010F588
  c->r[31]=R32(c->r[3]+0x00000000u); // 8010F58C
  c->r[30]=R32(c->r[3]+0x00000004u); // 8010F590
  c->r[3]=c->r[1]+0x00000008u; // 8010F594
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F598
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F59C
  {uint32_t ea=c->r[4]+0x00000010u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F5A0
  c->lr=0x8010F5A8u; f_8004E34C(c); // 8010F5A4
  c->r[3]=c->r[31]|c->r[31]; // 8010F5A8
  c->r[4]=c->r[30]|c->r[30]; // 8010F5AC
  c->r[5]=c->r[1]+0x00000008u; // 8010F5B0
  c->lr=0x8010F5B8u; f_80237364(c); // 8010F5B4
  c->r[3]=0u+0x00000000u; // 8010F5B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010F5BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010F5C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F5C4
  c->lr=c->r[0]; // 8010F5C8
  c->r[1]=c->r[1]+0x00000020u; // 8010F5CC
  return; // 8010F5D0
}

// fn_8010F5D4
void f_8010F5D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F5D4
  c->r[0]=c->lr; // 8010F5D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F5DC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F5E0
  c->lr=0x8010F5E8u; f_802373B8(c); // 8010F5E4
  c->r[3]=0u+0x00000000u; // 8010F5E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F5EC
  c->lr=c->r[0]; // 8010F5F0
  c->r[1]=c->r[1]+0x00000010u; // 8010F5F4
  return; // 8010F5F8
}

// fn_8010F5FC
void f_8010F5FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F5FC
  c->r[0]=c->lr; // 8010F600
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F604
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F608
  c->r[4]=c->r[3]|c->r[3]; // 8010F60C
  c->r[31]=R32(c->r[3]+0x00000000u); // 8010F610
  c->r[3]=c->r[1]+0x00000008u; // 8010F614
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F618
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F61C
  c->lr=0x8010F624u; f_8004E35C(c); // 8010F620
  c->r[3]=c->r[31]|c->r[31]; // 8010F624
  c->r[4]=c->r[1]+0x00000008u; // 8010F628
  c->lr=0x8010F630u; f_802373EC(c); // 8010F62C
  c->r[3]=0u+0x00000000u; // 8010F630
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010F634
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F638
  c->lr=c->r[0]; // 8010F63C
  c->r[1]=c->r[1]+0x00000020u; // 8010F640
  return; // 8010F644
}

// fn_8010F648
void f_8010F648(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F648
  c->r[0]=c->lr; // 8010F64C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F650
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F654
  c->lr=0x8010F65Cu; f_80237430(c); // 8010F658
  c->r[3]=0u+0x00000000u; // 8010F65C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F660
  c->lr=c->r[0]; // 8010F664
  c->r[1]=c->r[1]+0x00000010u; // 8010F668
  return; // 8010F66C
}

// fn_8010F670
void f_8010F670(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F670
  c->r[0]=c->lr; // 8010F674
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F678
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F67C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010F680
  c->r[4]=c->r[3]|c->r[3]; // 8010F684
  c->r[31]=R32(c->r[3]+0x00000000u); // 8010F688
  c->r[30]=R32(c->r[3]+0x00000004u); // 8010F68C
  c->r[3]=c->r[1]+0x00000008u; // 8010F690
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F694
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F698
  c->lr=0x8010F6A0u; f_8004E35C(c); // 8010F69C
  c->r[3]=c->r[31]|c->r[31]; // 8010F6A0
  c->r[4]=c->r[30]|c->r[30]; // 8010F6A4
  c->r[5]=c->r[1]+0x00000008u; // 8010F6A8
  c->lr=0x8010F6B0u; f_80237464(c); // 8010F6AC
  c->r[3]=0u+0x00000000u; // 8010F6B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010F6B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010F6B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F6BC
  c->lr=c->r[0]; // 8010F6C0
  c->r[1]=c->r[1]+0x00000020u; // 8010F6C4
  return; // 8010F6C8
}

// fn_8010F6CC
void f_8010F6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F6CC
  c->r[0]=c->lr; // 8010F6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F6D4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F6D8
  c->lr=0x8010F6E0u; f_80247930(c); // 8010F6DC
  c->r[3]=0u+0x00000000u; // 8010F6E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F6E4
  c->lr=c->r[0]; // 8010F6E8
  c->r[1]=c->r[1]+0x00000010u; // 8010F6EC
  return; // 8010F6F0
}

// fn_8010F6F4
void f_8010F6F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F6F4
  c->r[0]=c->lr; // 8010F6F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F6FC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F700
  c->lr=0x8010F708u; f_80247964(c); // 8010F704
  c->r[3]=0u+0x00000000u; // 8010F708
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F70C
  c->lr=c->r[0]; // 8010F710
  c->r[1]=c->r[1]+0x00000010u; // 8010F714
  return; // 8010F718
}

// fn_8010F71C
void f_8010F71C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F71C
  c->r[0]=c->lr; // 8010F720
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F724
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F728
  c->lr=0x8010F730u; f_80247998(c); // 8010F72C
  c->r[3]=0u+0x00000000u; // 8010F730
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F734
  c->lr=c->r[0]; // 8010F738
  c->r[1]=c->r[1]+0x00000010u; // 8010F73C
  return; // 8010F740
}

// fn_8010F744
void f_8010F744(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F744
  c->r[0]=c->lr; // 8010F748
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F74C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F750
  c->lr=0x8010F758u; f_802479CC(c); // 8010F754
  c->r[3]=0u+0x00000000u; // 8010F758
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F75C
  c->lr=c->r[0]; // 8010F760
  c->r[1]=c->r[1]+0x00000010u; // 8010F764
  return; // 8010F768
}

// fn_8010F76C
void f_8010F76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F76C
  c->r[0]=c->lr; // 8010F770
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F774
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F778
  c->lr=0x8010F780u; f_80247A00(c); // 8010F77C
  c->r[3]=0u+0x00000000u; // 8010F780
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F784
  c->lr=c->r[0]; // 8010F788
  c->r[1]=c->r[1]+0x00000010u; // 8010F78C
  return; // 8010F790
}

// fn_8010F794
void f_8010F794(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F794
  c->r[0]=c->lr; // 8010F798
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F79C
  c->r[4]=c->r[3]|c->r[3]; // 8010F7A0
  c->r[3]=c->r[1]+0x00000008u; // 8010F7A4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F7A8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F7AC
  c->lr=0x8010F7B4u; f_8004E35C(c); // 8010F7B0
  c->r[3]=c->r[1]+0x00000008u; // 8010F7B4
  c->lr=0x8010F7BCu; f_80247A34(c); // 8010F7B8
  c->r[3]=0u+0x00000000u; // 8010F7BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F7C0
  c->lr=c->r[0]; // 8010F7C4
  c->r[1]=c->r[1]+0x00000010u; // 8010F7C8
  return; // 8010F7CC
}

// fn_8010F7D0
void f_8010F7D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F7D0
  c->r[0]=c->lr; // 8010F7D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F7D8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F7DC
  c->lr=0x8010F7E4u; f_80247A68(c); // 8010F7E0
  c->r[3]=0u+0x00000000u; // 8010F7E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F7E8
  c->lr=c->r[0]; // 8010F7EC
  c->r[1]=c->r[1]+0x00000010u; // 8010F7F0
  return; // 8010F7F4
}

// fn_8010F7F8
void f_8010F7F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F7F8
  c->r[0]=c->lr; // 8010F7FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F800
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F804
  c->lr=0x8010F80Cu; f_80247A9C(c); // 8010F808
  c->r[3]=0u+0x00000000u; // 8010F80C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F810
  c->lr=c->r[0]; // 8010F814
  c->r[1]=c->r[1]+0x00000010u; // 8010F818
  return; // 8010F81C
}

// fn_8010F820
void f_8010F820(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F820
  c->r[0]=c->lr; // 8010F824
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F828
  c->r[4]=c->r[3]|c->r[3]; // 8010F82C
  c->r[3]=c->r[1]+0x00000008u; // 8010F830
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F834
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F838
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F83C
  c->lr=0x8010F844u; f_8004E34C(c); // 8010F840
  c->r[3]=c->r[1]+0x00000008u; // 8010F844
  c->lr=0x8010F84Cu; f_80247AD0(c); // 8010F848
  c->r[3]=0u+0x00000000u; // 8010F84C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F850
  c->lr=c->r[0]; // 8010F854
  c->r[1]=c->r[1]+0x00000020u; // 8010F858
  return; // 8010F85C
}

// fn_8010F860
void f_8010F860(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F860
  c->r[0]=c->lr; // 8010F864
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F868
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F86C
  c->lr=0x8010F874u; f_80247B04(c); // 8010F870
  c->r[3]=0u+0x00000000u; // 8010F874
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F878
  c->lr=c->r[0]; // 8010F87C
  c->r[1]=c->r[1]+0x00000010u; // 8010F880
  return; // 8010F884
}

// fn_8010F888
void f_8010F888(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F888
  c->r[0]=c->lr; // 8010F88C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F890
  c->r[4]=c->r[3]|c->r[3]; // 8010F894
  c->r[3]=c->r[1]+0x00000008u; // 8010F898
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F89C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F8A0
  c->lr=0x8010F8A8u; f_8004E35C(c); // 8010F8A4
  c->r[3]=c->r[1]+0x00000008u; // 8010F8A8
  c->lr=0x8010F8B0u; f_80247B38(c); // 8010F8AC
  c->r[3]=0u+0x00000000u; // 8010F8B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F8B4
  c->lr=c->r[0]; // 8010F8B8
  c->r[1]=c->r[1]+0x00000010u; // 8010F8BC
  return; // 8010F8C0
}

// fn_8010F8C4
void f_8010F8C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F8C4
  c->r[0]=c->lr; // 8010F8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F8CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F8D0
  c->lr=0x8010F8D8u; f_80247B6C(c); // 8010F8D4
  c->r[3]=0u+0x00000000u; // 8010F8D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F8DC
  c->lr=c->r[0]; // 8010F8E0
  c->r[1]=c->r[1]+0x00000010u; // 8010F8E4
  return; // 8010F8E8
}

// fn_8010F8EC
void f_8010F8EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F8EC
  c->r[0]=c->lr; // 8010F8F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F8F4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F8F8
  c->lr=0x8010F900u; f_80247BA0(c); // 8010F8FC
  c->r[3]=0u+0x00000000u; // 8010F900
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F904
  c->lr=c->r[0]; // 8010F908
  c->r[1]=c->r[1]+0x00000010u; // 8010F90C
  return; // 8010F910
}

// fn_8010F914
void f_8010F914(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F914
  c->r[0]=c->lr; // 8010F918
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F91C
  c->r[4]=c->r[3]|c->r[3]; // 8010F920
  c->r[3]=c->r[1]+0x00000008u; // 8010F924
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F928
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F92C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010F930
  c->lr=0x8010F938u; f_8004E34C(c); // 8010F934
  c->r[3]=c->r[1]+0x00000008u; // 8010F938
  c->lr=0x8010F940u; f_80247BD4(c); // 8010F93C
  c->r[3]=0u+0x00000000u; // 8010F940
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F944
  c->lr=c->r[0]; // 8010F948
  c->r[1]=c->r[1]+0x00000020u; // 8010F94C
  return; // 8010F950
}

// fn_8010F954
void f_8010F954(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F954
  c->r[0]=c->lr; // 8010F958
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F95C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F960
  c->lr=0x8010F968u; f_80247C08(c); // 8010F964
  c->r[3]=0u+0x00000000u; // 8010F968
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F96C
  c->lr=c->r[0]; // 8010F970
  c->r[1]=c->r[1]+0x00000010u; // 8010F974
  return; // 8010F978
}

// fn_8010F97C
void f_8010F97C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F97C
  c->r[0]=c->lr; // 8010F980
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F984
  c->r[4]=c->r[3]|c->r[3]; // 8010F988
  c->r[3]=c->r[1]+0x00000008u; // 8010F98C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F990
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010F994
  c->lr=0x8010F99Cu; f_8004E35C(c); // 8010F998
  c->r[3]=c->r[1]+0x00000008u; // 8010F99C
  c->lr=0x8010F9A4u; f_80247C3C(c); // 8010F9A0
  c->r[3]=0u+0x00000000u; // 8010F9A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F9A8
  c->lr=c->r[0]; // 8010F9AC
  c->r[1]=c->r[1]+0x00000010u; // 8010F9B0
  return; // 8010F9B4
}

// fn_8010F9B8
void f_8010F9B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F9B8
  c->r[0]=c->lr; // 8010F9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F9C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F9C4
  c->lr=0x8010F9CCu; f_80247C70(c); // 8010F9C8
  c->r[3]=0u+0x00000000u; // 8010F9CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F9D0
  c->lr=c->r[0]; // 8010F9D4
  c->r[1]=c->r[1]+0x00000010u; // 8010F9D8
  return; // 8010F9DC
}

// fn_8010F9E0
void f_8010F9E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F9E0
  c->r[0]=c->lr; // 8010F9E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F9E8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010F9EC
  c->lr=0x8010F9F4u; f_80247CA4(c); // 8010F9F0
  c->r[3]=0u+0x00000000u; // 8010F9F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F9F8
  c->lr=c->r[0]; // 8010F9FC
  c->r[1]=c->r[1]+0x00000010u; // 8010FA00
  return; // 8010FA04
}

// fn_8010FA08
void f_8010FA08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FA08
  c->r[0]=c->lr; // 8010FA0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FA10
  c->r[4]=c->r[3]|c->r[3]; // 8010FA14
  c->r[3]=c->r[1]+0x00000008u; // 8010FA18
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FA1C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FA20
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FA24
  c->lr=0x8010FA2Cu; f_8004E34C(c); // 8010FA28
  c->r[3]=c->r[1]+0x00000008u; // 8010FA2C
  c->lr=0x8010FA34u; f_80247CD8(c); // 8010FA30
  c->r[3]=0u+0x00000000u; // 8010FA34
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FA38
  c->lr=c->r[0]; // 8010FA3C
  c->r[1]=c->r[1]+0x00000020u; // 8010FA40
  return; // 8010FA44
}

// fn_8010FA48
void f_8010FA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FA48
  c->r[0]=c->lr; // 8010FA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FA50
  c->r[4]=c->r[3]|c->r[3]; // 8010FA54
  c->r[3]=c->r[1]+0x00000008u; // 8010FA58
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FA5C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FA60
  c->lr=0x8010FA68u; f_8004E35C(c); // 8010FA64
  c->r[3]=c->r[1]+0x00000008u; // 8010FA68
  c->lr=0x8010FA70u; f_8026C0E8(c); // 8010FA6C
  c->r[3]=0u+0x00000000u; // 8010FA70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FA74
  c->lr=c->r[0]; // 8010FA78
  c->r[1]=c->r[1]+0x00000010u; // 8010FA7C
  return; // 8010FA80
}

// fn_8010FA84
void f_8010FA84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FA84
  c->r[0]=c->lr; // 8010FA88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FA8C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FA90
  c->lr=0x8010FA98u; f_8026C11C(c); // 8010FA94
  c->r[3]=0u+0x00000000u; // 8010FA98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FA9C
  c->lr=c->r[0]; // 8010FAA0
  c->r[1]=c->r[1]+0x00000010u; // 8010FAA4
  return; // 8010FAA8
}

// fn_8010FAAC
void f_8010FAAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FAAC
  c->r[0]=c->lr; // 8010FAB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FAB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FAB8
  c->lr=0x8010FAC0u; f_8026C150(c); // 8010FABC
  c->r[3]=0u+0x00000000u; // 8010FAC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FAC4
  c->lr=c->r[0]; // 8010FAC8
  c->r[1]=c->r[1]+0x00000010u; // 8010FACC
  return; // 8010FAD0
}

// fn_8010FAD4
void f_8010FAD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FAD4
  c->r[0]=c->lr; // 8010FAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FADC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FAE0
  c->lr=0x8010FAE8u; f_80133820(c); // 8010FAE4
  c->r[3]=0u+0x00000000u; // 8010FAE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FAEC
  c->lr=c->r[0]; // 8010FAF0
  c->r[1]=c->r[1]+0x00000010u; // 8010FAF4
  return; // 8010FAF8
}

// fn_8010FAFC
void f_8010FAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FAFC
  c->r[0]=c->lr; // 8010FB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FB04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FB08
  c->lr=0x8010FB10u; f_801337EC(c); // 8010FB0C
  c->r[3]=0u+0x00000000u; // 8010FB10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FB14
  c->lr=c->r[0]; // 8010FB18
  c->r[1]=c->r[1]+0x00000010u; // 8010FB1C
  return; // 8010FB20
}

// fn_8010FB24
void f_8010FB24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FB24
  c->r[0]=c->lr; // 8010FB28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FB2C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FB30
  c->lr=0x8010FB38u; f_80133854(c); // 8010FB34
  c->r[3]=0u+0x00000000u; // 8010FB38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FB3C
  c->lr=c->r[0]; // 8010FB40
  c->r[1]=c->r[1]+0x00000010u; // 8010FB44
  return; // 8010FB48
}

// fn_8010FB4C
void f_8010FB4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FB4C
  c->r[0]=c->lr; // 8010FB50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FB54
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FB58
  c->lr=0x8010FB60u; f_80133888(c); // 8010FB5C
  c->r[3]=0u+0x00000000u; // 8010FB60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FB64
  c->lr=c->r[0]; // 8010FB68
  c->r[1]=c->r[1]+0x00000010u; // 8010FB6C
  return; // 8010FB70
}

// fn_8010FB74
void f_8010FB74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FB74
  c->r[0]=c->lr; // 8010FB78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FB7C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FB80
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FB84
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FB88
  {uint32_t ea=c->r[3]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 8010FB8C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8010FB90
  c->lr=0x8010FB98u; f_801338BC(c); // 8010FB94
  c->r[3]=0u+0x00000000u; // 8010FB98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FB9C
  c->lr=c->r[0]; // 8010FBA0
  c->r[1]=c->r[1]+0x00000010u; // 8010FBA4
  return; // 8010FBA8
}

// fn_8010FBAC
void f_8010FBAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FBAC
  c->r[0]=c->lr; // 8010FBB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FBB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FBB8
  c->lr=0x8010FBC0u; f_80158148(c); // 8010FBBC
  c->r[3]=0u+0x00000000u; // 8010FBC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FBC4
  c->lr=c->r[0]; // 8010FBC8
  c->r[1]=c->r[1]+0x00000010u; // 8010FBCC
  return; // 8010FBD0
}

// fn_8010FBD4
void f_8010FBD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FBD4
  c->r[0]=c->lr; // 8010FBD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FBDC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FBE0
  c->lr=0x8010FBE8u; f_80158114(c); // 8010FBE4
  c->r[3]=0u+0x00000000u; // 8010FBE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FBEC
  c->lr=c->r[0]; // 8010FBF0
  c->r[1]=c->r[1]+0x00000010u; // 8010FBF4
  return; // 8010FBF8
}

// fn_8010FBFC
void f_8010FBFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FBFC
  c->r[0]=c->lr; // 8010FC00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FC04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FC08
  c->lr=0x8010FC10u; f_8015817C(c); // 8010FC0C
  c->r[3]=0u+0x00000000u; // 8010FC10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FC14
  c->lr=c->r[0]; // 8010FC18
  c->r[1]=c->r[1]+0x00000010u; // 8010FC1C
  return; // 8010FC20
}

// fn_8010FC24
void f_8010FC24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FC24
  c->r[0]=c->lr; // 8010FC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FC2C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FC30
  c->lr=0x8010FC38u; f_801225E4(c); // 8010FC34
  c->r[3]=0u+0x00000000u; // 8010FC38
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FC3C
  c->lr=c->r[0]; // 8010FC40
  c->r[1]=c->r[1]+0x00000010u; // 8010FC44
  return; // 8010FC48
}

// fn_8010FC4C
void f_8010FC4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FC4C
  c->r[0]=c->lr; // 8010FC50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FC54
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FC58
  c->lr=0x8010FC60u; f_801225B0(c); // 8010FC5C
  c->r[3]=0u+0x00000000u; // 8010FC60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FC64
  c->lr=c->r[0]; // 8010FC68
  c->r[1]=c->r[1]+0x00000010u; // 8010FC6C
  return; // 8010FC70
}

// fn_8010FC74
void f_8010FC74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FC74
  c->r[0]=c->lr; // 8010FC78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FC7C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FC80
  c->lr=0x8010FC88u; f_80122618(c); // 8010FC84
  c->r[3]=0u+0x00000000u; // 8010FC88
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FC8C
  c->lr=c->r[0]; // 8010FC90
  c->r[1]=c->r[1]+0x00000010u; // 8010FC94
  return; // 8010FC98
}

// fn_8010FC9C
void f_8010FC9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FC9C
  c->r[0]=c->lr; // 8010FCA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FCA4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FCA8
  c->lr=0x8010FCB0u; f_80128D54(c); // 8010FCAC
  c->r[3]=0u+0x00000000u; // 8010FCB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FCB4
  c->lr=c->r[0]; // 8010FCB8
  c->r[1]=c->r[1]+0x00000010u; // 8010FCBC
  return; // 8010FCC0
}

// fn_8010FCC4
void f_8010FCC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FCC4
  c->r[0]=c->lr; // 8010FCC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FCCC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FCD0
  c->lr=0x8010FCD8u; f_80128D20(c); // 8010FCD4
  c->r[3]=0u+0x00000000u; // 8010FCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FCDC
  c->lr=c->r[0]; // 8010FCE0
  c->r[1]=c->r[1]+0x00000010u; // 8010FCE4
  return; // 8010FCE8
}

// fn_8010FCEC
void f_8010FCEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FCEC
  c->r[0]=c->lr; // 8010FCF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FCF4
  c->r[4]=c->r[3]|c->r[3]; // 8010FCF8
  c->r[3]=c->r[1]+0x00000008u; // 8010FCFC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FD00
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FD04
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FD08
  c->lr=0x8010FD10u; f_8004E34C(c); // 8010FD0C
  c->r[3]=c->r[1]+0x00000008u; // 8010FD10
  c->lr=0x8010FD18u; f_80128D88(c); // 8010FD14
  c->r[3]=0u+0x00000000u; // 8010FD18
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FD1C
  c->lr=c->r[0]; // 8010FD20
  c->r[1]=c->r[1]+0x00000020u; // 8010FD24
  return; // 8010FD28
}

// fn_8010FD2C
void f_8010FD2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FD2C
  c->r[0]=c->lr; // 8010FD30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FD34
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FD38
  c->lr=0x8010FD40u; f_80128DBC(c); // 8010FD3C
  c->r[3]=0u+0x00000000u; // 8010FD40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FD44
  c->lr=c->r[0]; // 8010FD48
  c->r[1]=c->r[1]+0x00000010u; // 8010FD4C
  return; // 8010FD50
}

// fn_8010FD54
void f_8010FD54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FD54
  c->r[0]=c->lr; // 8010FD58
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FD5C
  c->r[4]=c->r[3]|c->r[3]; // 8010FD60
  c->r[3]=c->r[1]+0x00000008u; // 8010FD64
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FD68
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FD6C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FD70
  c->lr=0x8010FD78u; f_8004E34C(c); // 8010FD74
  c->r[3]=c->r[1]+0x00000008u; // 8010FD78
  c->lr=0x8010FD80u; f_80128DF0(c); // 8010FD7C
  c->r[3]=0u+0x00000000u; // 8010FD80
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FD84
  c->lr=c->r[0]; // 8010FD88
  c->r[1]=c->r[1]+0x00000020u; // 8010FD8C
  return; // 8010FD90
}

// fn_8010FD94
void f_8010FD94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FD94
  c->r[0]=c->lr; // 8010FD98
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FD9C
  c->r[4]=c->r[3]|c->r[3]; // 8010FDA0
  c->r[3]=c->r[1]+0x00000008u; // 8010FDA4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FDA8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FDAC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FDB0
  c->lr=0x8010FDB8u; f_8004E34C(c); // 8010FDB4
  c->r[3]=c->r[1]+0x00000008u; // 8010FDB8
  c->lr=0x8010FDC0u; f_80128E24(c); // 8010FDBC
  c->r[3]=0u+0x00000000u; // 8010FDC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FDC4
  c->lr=c->r[0]; // 8010FDC8
  c->r[1]=c->r[1]+0x00000020u; // 8010FDCC
  return; // 8010FDD0
}

// fn_8010FDD4
void f_8010FDD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FDD4
  c->r[0]=c->lr; // 8010FDD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FDDC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FDE0
  c->lr=0x8010FDE8u; f_80128E58(c); // 8010FDE4
  c->r[3]=0u+0x00000000u; // 8010FDE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FDEC
  c->lr=c->r[0]; // 8010FDF0
  c->r[1]=c->r[1]+0x00000010u; // 8010FDF4
  return; // 8010FDF8
}

// fn_8010FDFC
void f_8010FDFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FDFC
  c->r[0]=c->lr; // 8010FE00
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FE04
  c->r[4]=c->r[3]|c->r[3]; // 8010FE08
  c->r[3]=c->r[1]+0x00000008u; // 8010FE0C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FE10
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FE14
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FE18
  c->lr=0x8010FE20u; f_8004E34C(c); // 8010FE1C
  c->r[3]=c->r[1]+0x00000008u; // 8010FE20
  c->lr=0x8010FE28u; f_80128E8C(c); // 8010FE24
  c->r[3]=0u+0x00000000u; // 8010FE28
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FE2C
  c->lr=c->r[0]; // 8010FE30
  c->r[1]=c->r[1]+0x00000020u; // 8010FE34
  return; // 8010FE38
}

// fn_8010FE3C
void f_8010FE3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FE3C
  c->r[0]=c->lr; // 8010FE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FE44
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FE48
  c->lr=0x8010FE50u; f_80128EC0(c); // 8010FE4C
  c->r[3]=0u+0x00000000u; // 8010FE50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FE54
  c->lr=c->r[0]; // 8010FE58
  c->r[1]=c->r[1]+0x00000010u; // 8010FE5C
  return; // 8010FE60
}

// fn_8010FE64
void f_8010FE64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FE64
  c->r[0]=c->lr; // 8010FE68
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FE6C
  c->r[4]=c->r[3]|c->r[3]; // 8010FE70
  c->r[3]=c->r[1]+0x00000008u; // 8010FE74
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FE78
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FE7C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FE80
  c->lr=0x8010FE88u; f_8004E34C(c); // 8010FE84
  c->r[3]=c->r[1]+0x00000008u; // 8010FE88
  c->lr=0x8010FE90u; f_80128EF4(c); // 8010FE8C
  c->r[3]=0u+0x00000000u; // 8010FE90
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FE94
  c->lr=c->r[0]; // 8010FE98
  c->r[1]=c->r[1]+0x00000020u; // 8010FE9C
  return; // 8010FEA0
}

// fn_8010FEA4
void f_8010FEA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FEA4
  c->r[0]=c->lr; // 8010FEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FEAC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FEB0
  c->lr=0x8010FEB8u; f_80128F28(c); // 8010FEB4
  c->r[3]=0u+0x00000000u; // 8010FEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FEBC
  c->lr=c->r[0]; // 8010FEC0
  c->r[1]=c->r[1]+0x00000010u; // 8010FEC4
  return; // 8010FEC8
}

// fn_8010FECC
void f_8010FECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FECC
  c->r[0]=c->lr; // 8010FED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FED4
  c->r[4]=c->r[3]|c->r[3]; // 8010FED8
  c->r[3]=c->r[1]+0x00000008u; // 8010FEDC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FEE0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FEE4
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FEE8
  c->lr=0x8010FEF0u; f_8004E34C(c); // 8010FEEC
  c->r[3]=c->r[1]+0x00000008u; // 8010FEF0
  c->lr=0x8010FEF8u; f_80128F5C(c); // 8010FEF4
  c->r[3]=0u+0x00000000u; // 8010FEF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FEFC
  c->lr=c->r[0]; // 8010FF00
  c->r[1]=c->r[1]+0x00000020u; // 8010FF04
  return; // 8010FF08
}

// fn_8010FF0C
void f_8010FF0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FF0C
  c->r[0]=c->lr; // 8010FF10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FF14
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FF18
  c->lr=0x8010FF20u; f_80128F90(c); // 8010FF1C
  c->r[3]=0u+0x00000000u; // 8010FF20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FF24
  c->lr=c->r[0]; // 8010FF28
  c->r[1]=c->r[1]+0x00000010u; // 8010FF2C
  return; // 8010FF30
}

// fn_8010FF34
void f_8010FF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FF34
  c->r[0]=c->lr; // 8010FF38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FF3C
  c->r[4]=c->r[3]|c->r[3]; // 8010FF40
  c->r[3]=c->r[1]+0x00000008u; // 8010FF44
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FF48
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FF4C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FF50
  c->lr=0x8010FF58u; f_8004E34C(c); // 8010FF54
  c->r[3]=c->r[1]+0x00000008u; // 8010FF58
  c->lr=0x8010FF60u; f_80128FC4(c); // 8010FF5C
  c->r[3]=0u+0x00000000u; // 8010FF60
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FF64
  c->lr=c->r[0]; // 8010FF68
  c->r[1]=c->r[1]+0x00000020u; // 8010FF6C
  return; // 8010FF70
}

// fn_8010FF74
void f_8010FF74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FF74
  c->r[0]=c->lr; // 8010FF78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FF7C
  c->r[4]=c->r[3]|c->r[3]; // 8010FF80
  c->r[3]=c->r[1]+0x00000008u; // 8010FF84
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FF88
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8010FF8C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 8010FF90
  c->lr=0x8010FF98u; f_8004E34C(c); // 8010FF94
  c->r[3]=c->r[1]+0x00000008u; // 8010FF98
  c->lr=0x8010FFA0u; f_80128FF8(c); // 8010FF9C
  c->r[3]=0u+0x00000000u; // 8010FFA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FFA4
  c->lr=c->r[0]; // 8010FFA8
  c->r[1]=c->r[1]+0x00000020u; // 8010FFAC
  return; // 8010FFB0
}

// fn_8010FFB4
void f_8010FFB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FFB4
  c->r[0]=c->lr; // 8010FFB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FFBC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FFC0
  c->lr=0x8010FFC8u; f_8012902C(c); // 8010FFC4
  c->r[3]=0u+0x00000000u; // 8010FFC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FFCC
  c->lr=c->r[0]; // 8010FFD0
  c->r[1]=c->r[1]+0x00000010u; // 8010FFD4
  return; // 8010FFD8
}

// fn_8010FFDC
void f_8010FFDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FFDC
  c->r[0]=c->lr; // 8010FFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FFE4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8010FFE8
  c->lr=0x8010FFF0u; f_8018E8B0(c); // 8010FFEC
  c->r[3]=0u+0x00000000u; // 8010FFF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FFF4
  c->lr=c->r[0]; // 8010FFF8
  c->r[1]=c->r[1]+0x00000010u; // 8010FFFC
  return; // 80110000
}

// fn_80110004
void f_80110004(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110004
  c->r[0]=c->lr; // 80110008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011000C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110010
  c->lr=0x80110018u; f_8018E87C(c); // 80110014
  c->r[3]=0u+0x00000000u; // 80110018
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011001C
  c->lr=c->r[0]; // 80110020
  c->r[1]=c->r[1]+0x00000010u; // 80110024
  return; // 80110028
}

// fn_8011002C
void f_8011002C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011002C
  c->r[0]=c->lr; // 80110030
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110034
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110038
  c->lr=0x80110040u; f_801E9044(c); // 8011003C
  c->r[3]=0u+0x00000000u; // 80110040
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110044
  c->lr=c->r[0]; // 80110048
  c->r[1]=c->r[1]+0x00000010u; // 8011004C
  return; // 80110050
}

// fn_80110054
void f_80110054(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110054
  c->r[0]=c->lr; // 80110058
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011005C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110060
  c->lr=0x80110068u; f_801E9010(c); // 80110064
  c->r[3]=0u+0x00000000u; // 80110068
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011006C
  c->lr=c->r[0]; // 80110070
  c->r[1]=c->r[1]+0x00000010u; // 80110074
  return; // 80110078
}

// fn_8011007C
void f_8011007C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011007C
  c->r[0]=c->lr; // 80110080
  W32(c->r[1]+0x00000024u,c->r[0]); // 80110084
  c->r[4]=c->r[3]|c->r[3]; // 80110088
  c->r[3]=c->r[1]+0x00000008u; // 8011008C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110090
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80110094
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80110098
  c->lr=0x801100A0u; f_8004E34C(c); // 8011009C
  c->r[3]=c->r[1]+0x00000008u; // 801100A0
  c->lr=0x801100A8u; f_801FA148(c); // 801100A4
  c->r[3]=0u+0x00000000u; // 801100A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801100AC
  c->lr=c->r[0]; // 801100B0
  c->r[1]=c->r[1]+0x00000020u; // 801100B4
  return; // 801100B8
}

// fn_801100BC
void f_801100BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801100BC
  c->r[0]=c->lr; // 801100C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801100C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801100C8
  c->r[4]=c->r[3]|c->r[3]; // 801100CC
  c->r[31]=R32(c->r[3]+0x00000000u); // 801100D0
  c->r[3]=c->r[1]+0x00000008u; // 801100D4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801100D8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801100DC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801100E0
  c->lr=0x801100E8u; f_8004E34C(c); // 801100E4
  c->r[3]=c->r[31]|c->r[31]; // 801100E8
  c->r[4]=c->r[1]+0x00000008u; // 801100EC
  c->lr=0x801100F4u; f_801FA17C(c); // 801100F0
  c->r[3]=0u+0x00000000u; // 801100F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801100F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801100FC
  c->lr=c->r[0]; // 80110100
  c->r[1]=c->r[1]+0x00000020u; // 80110104
  return; // 80110108
}

// fn_8011010C
void f_8011010C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011010C
  c->r[0]=c->lr; // 80110110
  W32(c->r[1]+0x00000024u,c->r[0]); // 80110114
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80110118
  c->r[4]=c->r[3]|c->r[3]; // 8011011C
  c->r[31]=R32(c->r[3]+0x00000000u); // 80110120
  c->r[3]=c->r[1]+0x00000008u; // 80110124
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110128
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011012C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80110130
  c->lr=0x80110138u; f_8004E34C(c); // 80110134
  c->r[3]=c->r[31]|c->r[31]; // 80110138
  c->r[4]=c->r[1]+0x00000008u; // 8011013C
  c->lr=0x80110144u; f_801FA1C0(c); // 80110140
  c->r[3]=0u+0x00000000u; // 80110144
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80110148
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011014C
  c->lr=c->r[0]; // 80110150
  c->r[1]=c->r[1]+0x00000020u; // 80110154
  return; // 80110158
}

// fn_8011015C
void f_8011015C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011015C
  c->r[0]=c->lr; // 80110160
  W32(c->r[1]+0x00000024u,c->r[0]); // 80110164
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80110168
  c->r[4]=c->r[3]|c->r[3]; // 8011016C
  c->r[31]=R32(c->r[3]+0x00000000u); // 80110170
  c->r[3]=c->r[1]+0x00000008u; // 80110174
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110178
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011017C
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80110180
  c->lr=0x80110188u; f_8004E34C(c); // 80110184
  c->r[3]=c->r[31]|c->r[31]; // 80110188
  c->r[4]=c->r[1]+0x00000008u; // 8011018C
  c->lr=0x80110194u; f_801FA204(c); // 80110190
  c->r[3]=0u+0x00000000u; // 80110194
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80110198
  c->r[0]=R32(c->r[1]+0x00000024u); // 8011019C
  c->lr=c->r[0]; // 801101A0
  c->r[1]=c->r[1]+0x00000020u; // 801101A4
  return; // 801101A8
}

// fn_801101AC
void f_801101AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801101AC
  c->r[0]=c->lr; // 801101B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801101B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801101B8
  c->r[4]=c->r[3]|c->r[3]; // 801101BC
  c->r[31]=R32(c->r[3]+0x00000000u); // 801101C0
  c->r[3]=c->r[1]+0x00000008u; // 801101C4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 801101C8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 801101CC
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801101D0
  c->lr=0x801101D8u; f_8004E34C(c); // 801101D4
  c->r[3]=c->r[31]|c->r[31]; // 801101D8
  c->r[4]=c->r[1]+0x00000008u; // 801101DC
  c->lr=0x801101E4u; f_801FA248(c); // 801101E0
  c->r[3]=0u+0x00000000u; // 801101E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801101E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801101EC
  c->lr=c->r[0]; // 801101F0
  c->r[1]=c->r[1]+0x00000020u; // 801101F4
  return; // 801101F8
}

// fn_801101FC
void f_801101FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801101FC
  c->r[0]=c->lr; // 80110200
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110204
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110208
  c->lr=0x80110210u; f_801FA28C(c); // 8011020C
  c->r[3]=0u+0x00000000u; // 80110210
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110214
  c->lr=c->r[0]; // 80110218
  c->r[1]=c->r[1]+0x00000010u; // 8011021C
  return; // 80110220
}

// fn_80110224
void f_80110224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110224
  c->r[0]=c->lr; // 80110228
  W32(c->r[1]+0x00000014u,c->r[0]); // 8011022C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110230
  c->lr=0x80110238u; f_801FA2C0(c); // 80110234
  c->r[3]=0u+0x00000000u; // 80110238
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011023C
  c->lr=c->r[0]; // 80110240
  c->r[1]=c->r[1]+0x00000010u; // 80110244
  return; // 80110248
}

// fn_8011024C
void f_8011024C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011024C
  c->r[0]=c->lr; // 80110250
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110254
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110258
  c->lr=0x80110260u; f_801FA2F4(c); // 8011025C
  c->r[3]=0u+0x00000000u; // 80110260
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110264
  c->lr=c->r[0]; // 80110268
  c->r[1]=c->r[1]+0x00000010u; // 8011026C
  return; // 80110270
}

// fn_80110274
void f_80110274(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110274
  c->r[0]=c->lr; // 80110278
  W32(c->r[1]+0x00000024u,c->r[0]); // 8011027C
  c->r[4]=c->r[3]|c->r[3]; // 80110280
  c->r[3]=c->r[1]+0x00000008u; // 80110284
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110288
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 8011028C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 80110290
  c->lr=0x80110298u; f_8004E34C(c); // 80110294
  c->r[3]=c->r[1]+0x00000008u; // 80110298
  c->lr=0x801102A0u; f_801FA328(c); // 8011029C
  c->r[3]=0u+0x00000000u; // 801102A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801102A4
  c->lr=c->r[0]; // 801102A8
  c->r[1]=c->r[1]+0x00000020u; // 801102AC
  return; // 801102B0
}

// fn_801102B4
void f_801102B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801102B4
  c->r[0]=c->lr; // 801102B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801102BC
  c->r[4]=c->r[3]|c->r[3]; // 801102C0
  c->r[3]=c->r[1]+0x00000008u; // 801102C4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801102C8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801102CC
  c->lr=0x801102D4u; f_8004E35C(c); // 801102D0
  c->r[3]=c->r[1]+0x00000008u; // 801102D4
  c->lr=0x801102DCu; f_801FA35C(c); // 801102D8
  c->r[3]=0u+0x00000000u; // 801102DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801102E0
  c->lr=c->r[0]; // 801102E4
  c->r[1]=c->r[1]+0x00000010u; // 801102E8
  return; // 801102EC
}

// fn_801102F0
void f_801102F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801102F0
  c->r[0]=c->lr; // 801102F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801102F8
  c->r[4]=c->r[3]|c->r[3]; // 801102FC
  c->r[3]=c->r[1]+0x00000008u; // 80110300
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110304
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80110308
  c->lr=0x80110310u; f_8004E35C(c); // 8011030C
  c->r[3]=c->r[1]+0x00000008u; // 80110310
  c->lr=0x80110318u; f_801FA390(c); // 80110314
  c->r[3]=0u+0x00000000u; // 80110318
  c->r[0]=R32(c->r[1]+0x00000014u); // 8011031C
  c->lr=c->r[0]; // 80110320
  c->r[1]=c->r[1]+0x00000010u; // 80110324
  return; // 80110328
}

// fn_8011032C
void f_8011032C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011032C
  c->r[0]=c->lr; // 80110330
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110334
  c->r[4]=c->r[3]|c->r[3]; // 80110338
  c->r[3]=c->r[1]+0x00000008u; // 8011033C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110340
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80110344
  c->lr=0x8011034Cu; f_8004E35C(c); // 80110348
  c->r[3]=c->r[1]+0x00000008u; // 8011034C
  c->lr=0x80110354u; f_80225A38(c); // 80110350
  c->r[3]=0u+0x00000000u; // 80110354
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110358
  c->lr=c->r[0]; // 8011035C
  c->r[1]=c->r[1]+0x00000010u; // 80110360
  return; // 80110364
}

// fn_80110368
void f_80110368(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110368
  c->r[0]=c->lr; // 8011036C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110370
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80110374
  c->lr=0x8011037Cu; f_80225A6C(c); // 80110378
  c->r[3]=0u+0x00000000u; // 8011037C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110380
  c->lr=c->r[0]; // 80110384
  c->r[1]=c->r[1]+0x00000010u; // 80110388
  return; // 8011038C
}

// fn_80110390
void f_80110390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110390
  c->r[0]=c->lr; // 80110394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110398
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011039C
  c->lr=0x801103A4u; f_80225AA0(c); // 801103A0
  c->r[3]=0u+0x00000000u; // 801103A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801103A8
  c->lr=c->r[0]; // 801103AC
  c->r[1]=c->r[1]+0x00000010u; // 801103B0
  return; // 801103B4
}

// fn_801103B8
void f_801103B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801103B8
  c->r[0]=c->lr; // 801103BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801103C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801103C4
  c->lr=0x801103CCu; f_80260230(c); // 801103C8
  c->r[3]=0u+0x00000000u; // 801103CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801103D0
  c->lr=c->r[0]; // 801103D4
  c->r[1]=c->r[1]+0x00000010u; // 801103D8
  return; // 801103DC
}

// fn_801103E0
void f_801103E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801103E0
  c->r[0]=c->lr; // 801103E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801103E8
  c->r[4]=c->r[3]|c->r[3]; // 801103EC
  c->r[3]=c->r[1]+0x00000008u; // 801103F0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801103F4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801103F8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801103FC
  c->lr=0x80110404u; f_8004E34C(c); // 80110400
  c->r[3]=c->r[1]+0x00000008u; // 80110404
  c->lr=0x8011040Cu; f_80260264(c); // 80110408
  c->r[3]=0u+0x00000000u; // 8011040C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80110410
  c->lr=c->r[0]; // 80110414
  c->r[1]=c->r[1]+0x00000020u; // 80110418
  return; // 8011041C
}

// fn_80110420
void f_80110420(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110420
  c->r[0]=c->lr; // 80110424
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110428
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8011042C
  c->lr=0x80110434u; f_80260298(c); // 80110430
  c->r[3]=0u+0x00000000u; // 80110434
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110438
  c->lr=c->r[0]; // 8011043C
  c->r[1]=c->r[1]+0x00000010u; // 80110440
  return; // 80110444
}

// fn_80110448
void f_80110448(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110448
  c->r[0]=c->lr; // 8011044C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110450
  c->r[3]=R32(c->r[3]+0x00000000u); // 80110454
  c->lr=0x8011045Cu; f_801F12D8(c); // 80110458
  c->r[3]=0u+0x00000000u; // 8011045C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110460
  c->lr=c->r[0]; // 80110464
  c->r[1]=c->r[1]+0x00000010u; // 80110468
  return; // 8011046C
}

