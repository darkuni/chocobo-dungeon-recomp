#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801F69A0
void f_801F69A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F69A0
  c->r[0]=c->lr; // 801F69A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F69A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F69AC
  c->r[31]=c->r[3]|c->r[3]; // 801F69B0
  c->lr=0x801F69B8u; f_8012F740(c); // 801F69B4
  c->r[3]=0u+0x80470000u; // 801F69B8
  c->r[3]=c->r[3]+0x00005B18u; // 801F69BC
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F69C0
  c->r[0]=c->r[3]+0x0000000Cu; // 801F69C4
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F69C8
  c->r[0]=c->r[3]+0x00000018u; // 801F69CC
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F69D0
  c->r[0]=c->r[3]+0x00000024u; // 801F69D4
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F69D8
  c->r[0]=c->r[3]+0x00000030u; // 801F69DC
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F69E0
  c->r[3]=c->r[31]|c->r[31]; // 801F69E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F69E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F69EC
  c->lr=c->r[0]; // 801F69F0
  c->r[1]=c->r[1]+0x00000010u; // 801F69F4
  return; // 801F69F8
}

// fn_801F69FC
void f_801F69FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F69FC
  c->r[0]=c->lr; // 801F6A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6A08
  c->r[31]=c->r[3]|c->r[3]; // 801F6A0C
  c->lr=0x801F6A14u; f_8012F740(c); // 801F6A10
  c->r[3]=0u+0x80470000u; // 801F6A14
  c->r[3]=c->r[3]+0x00005E98u; // 801F6A18
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F6A1C
  c->r[0]=c->r[3]+0x0000000Cu; // 801F6A20
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F6A24
  c->r[0]=c->r[3]+0x00000018u; // 801F6A28
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F6A2C
  c->r[0]=c->r[3]+0x00000024u; // 801F6A30
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F6A34
  c->r[0]=c->r[3]+0x00000030u; // 801F6A38
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F6A3C
  c->r[3]=c->r[31]|c->r[31]; // 801F6A40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6A44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6A48
  c->lr=c->r[0]; // 801F6A4C
  c->r[1]=c->r[1]+0x00000010u; // 801F6A50
  return; // 801F6A54
}

// fn_801F6A58
void f_801F6A58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6A58
  c->r[0]=c->lr; // 801F6A5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6A60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6A64
  c->r[31]=c->r[3]|c->r[3]; // 801F6A68
  c->lr=0x801F6A70u; f_8012F740(c); // 801F6A6C
  c->r[3]=0u+0x80470000u; // 801F6A70
  c->r[3]=c->r[3]+0x00005BD4u; // 801F6A74
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F6A78
  c->r[0]=c->r[3]+0x0000000Cu; // 801F6A7C
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F6A80
  c->r[0]=c->r[3]+0x00000018u; // 801F6A84
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F6A88
  c->r[0]=c->r[3]+0x00000024u; // 801F6A8C
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F6A90
  c->r[0]=c->r[3]+0x00000030u; // 801F6A94
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F6A98
  c->r[3]=c->r[31]|c->r[31]; // 801F6A9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6AA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6AA4
  c->lr=c->r[0]; // 801F6AA8
  c->r[1]=c->r[1]+0x00000010u; // 801F6AAC
  return; // 801F6AB0
}

// fn_801F6AB4
void f_801F6AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6AB4
  c->r[0]=c->lr; // 801F6AB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6ABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6AC0
  c->r[31]=c->r[3]|c->r[3]; // 801F6AC4
  c->lr=0x801F6ACCu; f_8012F740(c); // 801F6AC8
  c->r[3]=0u+0x80470000u; // 801F6ACC
  c->r[3]=c->r[3]+0x00005C90u; // 801F6AD0
  W32(c->r[31]+0x00000020u,c->r[3]); // 801F6AD4
  c->r[0]=c->r[3]+0x0000000Cu; // 801F6AD8
  W32(c->r[31]+0x00000288u,c->r[0]); // 801F6ADC
  c->r[0]=c->r[3]+0x00000018u; // 801F6AE0
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801F6AE4
  c->r[0]=c->r[3]+0x00000024u; // 801F6AE8
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801F6AEC
  c->r[0]=c->r[3]+0x00000030u; // 801F6AF0
  W32(c->r[31]+0x00000300u,c->r[0]); // 801F6AF4
  c->r[3]=c->r[31]|c->r[31]; // 801F6AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6B00
  c->lr=c->r[0]; // 801F6B04
  c->r[1]=c->r[1]+0x00000010u; // 801F6B08
  return; // 801F6B0C
}

// fn_801F6B10
void f_801F6B10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F6B10
  f_801F6188(c); return; // 801F6B14
}

// fn_801F6B18
void f_801F6B18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F6B18
  f_801F6188(c); return; // 801F6B1C
}

// fn_801F6B20
void f_801F6B20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F6B20
  f_801F6188(c); return; // 801F6B24
}

// fn_801F6B28
void f_801F6B28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F6B28
  f_801F6188(c); return; // 801F6B2C
}

// fn_801F6B30
void f_801F6B30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F6B30
  f_801F60D0(c); return; // 801F6B34
}

// fn_801F6B38
void f_801F6B38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F6B38
  f_801F60D0(c); return; // 801F6B3C
}

// fn_801F6B40
void f_801F6B40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F6B40
  f_801F60D0(c); return; // 801F6B44
}

// fn_801F6B48
void f_801F6B48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F6B48
  f_801F60D0(c); return; // 801F6B4C
}

// fn_801F6B50
void f_801F6B50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F6B50
  f_801F5FFC(c); return; // 801F6B54
}

// fn_801F6B58
void f_801F6B58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F6B58
  f_801F6240(c); return; // 801F6B5C
}

// fn_801F6B60
void f_801F6B60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F6B60
  f_801F6240(c); return; // 801F6B64
}

// fn_801F6B68
void f_801F6B68(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F6B68
  f_801F6240(c); return; // 801F6B6C
}

// fn_801F6B70
void f_801F6B70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F6B70
  f_801F6240(c); return; // 801F6B74
}

// fn_801F6B78
void f_801F6B78(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F6B78
  f_801F61E4(c); return; // 801F6B7C
}

// fn_801F6B80
void f_801F6B80(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F6B80
  f_801F61E4(c); return; // 801F6B84
}

// fn_801F6B88
void f_801F6B88(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F6B88
  f_801F61E4(c); return; // 801F6B8C
}

// fn_801F6B90
void f_801F6B90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F6B90
  f_801F61E4(c); return; // 801F6B94
}

// fn_801F6B98
void f_801F6B98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F6B98
  f_801F612C(c); return; // 801F6B9C
}

// fn_801F6BA0
void f_801F6BA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F6BA0
  f_801F612C(c); return; // 801F6BA4
}

// fn_801F6BA8
void f_801F6BA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F6BA8
  f_801F612C(c); return; // 801F6BAC
}

// fn_801F6BB0
void f_801F6BB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F6BB0
  f_801F612C(c); return; // 801F6BB4
}

// fn_801F6BB8
void f_801F6BB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801F6BB8
  f_801F57D4(c); return; // 801F6BBC
}

// fn_801F6BC0
void f_801F6BC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801F6BC0
  f_801F57D4(c); return; // 801F6BC4
}

// fn_801F6BC8
void f_801F6BC8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801F6BC8
  f_801F57D4(c); return; // 801F6BCC
}

// fn_801F6BD0
void f_801F6BD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801F6BD0
  f_801F57D4(c); return; // 801F6BD4
}

// fn_801F6BD8
void f_801F6BD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6BD8
  c->r[0]=c->lr; // 801F6BDC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F6BE0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F6BE4
  W32(c->r[1]+0x00000038u,c->r[30]); // 801F6BE8
  c->r[30]=c->r[3]|c->r[3]; // 801F6BEC
  c->r[31]=c->r[4]|c->r[4]; // 801F6BF0
  c->r[3]=c->r[1]+0x0000002Cu; // 801F6BF4
  c->lr=0x801F6BFCu; f_8004B0A4(c); // 801F6BF8
  c->r[3]=c->r[1]+0x00000020u; // 801F6BFC
  c->r[4]=c->r[31]|c->r[31]; // 801F6C00
  c->lr=0x801F6C08u; f_8006398C(c); // 801F6C04
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6C08
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6C0C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801F6C10
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801F6C14
  c->r[3]=c->r[1]+0x00000014u; // 801F6C18
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6C1C
  c->f[2]=c->f[1]; // 801F6C20
  c->f[3]=c->f[1]; // 801F6C24
  c->lr=0x801F6C2Cu; f_8004E34C(c); // 801F6C28
  c->r[3]=c->r[1]+0x00000008u; // 801F6C2C
  c->r[4]=c->r[1]+0x00000020u; // 801F6C30
  c->r[5]=c->r[1]+0x00000014u; // 801F6C34
  c->lr=0x801F6C3Cu; f_8009CB74(c); // 801F6C38
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6C3C
  {uint32_t ea=c->r[2]+0xFFFF95DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F6C40
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[3]); // 801F6C44
  {uint32_t ea=c->r[2]+0xFFFF95D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6C48
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F6C4C
  {uint32_t ea=c->r[2]+0xFFFF95D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F6C50
  c->f[4]=c->ps1[4]=S(c->f[2]+c->f[0]); // 801F6C54
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6C58
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[3]); // 801F6C5C
  {uint32_t ea=c->r[2]+0xFFFF95E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6C60
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F6C64
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801F6C68
  {uint32_t ea=c->r[2]+0xFFFF95E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6C6C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[4]); // 801F6C70
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801F6C74
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[2]); // 801F6C78
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801F6C7C
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6C80
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801F6C84
  c->r[3]=c->r[30]|c->r[30]; // 801F6C88
  c->r[4]=c->r[1]+0x0000002Cu; // 801F6C8C
  c->lr=0x801F6C94u; f_8004A65C(c); // 801F6C90
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F6C94
  c->r[30]=R32(c->r[1]+0x00000038u); // 801F6C98
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F6C9C
  c->lr=c->r[0]; // 801F6CA0
  c->r[1]=c->r[1]+0x00000040u; // 801F6CA4
  return; // 801F6CA8
}

// fn_801F6CAC
void f_801F6CAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6CAC
  c->r[0]=c->lr; // 801F6CB0
  W32(c->r[1]+0x00000064u,c->r[0]); // 801F6CB4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801F6CB8
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801F6CBC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801F6CC0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801F6CC4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F6CC8
  W32(c->r[1]+0x00000038u,c->r[30]); // 801F6CCC
  c->r[30]=c->r[3]|c->r[3]; // 801F6CD0
  c->r[31]=c->r[4]|c->r[4]; // 801F6CD4
  c->r[3]=c->r[1]+0x0000002Cu; // 801F6CD8
  c->lr=0x801F6CE0u; f_8004B0A4(c); // 801F6CDC
  c->r[3]=c->r[1]+0x00000020u; // 801F6CE0
  c->r[4]=c->r[31]|c->r[31]; // 801F6CE4
  c->lr=0x801F6CECu; f_8006398C(c); // 801F6CE8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6CEC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6CF0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801F6CF4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 801F6CF8
  c->r[3]=c->r[1]+0x00000014u; // 801F6CFC
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6D00
  c->f[2]=c->f[1]; // 801F6D04
  c->f[3]=c->f[1]; // 801F6D08
  c->lr=0x801F6D10u; f_8004E34C(c); // 801F6D0C
  c->r[3]=c->r[1]+0x00000008u; // 801F6D10
  c->r[4]=c->r[1]+0x00000020u; // 801F6D14
  c->r[5]=c->r[1]+0x00000014u; // 801F6D18
  c->lr=0x801F6D20u; f_8009CB74(c); // 801F6D1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6D20
  {uint32_t ea=c->r[2]+0xFFFF95DCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F6D24
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[3]); // 801F6D28
  {uint32_t ea=c->r[2]+0xFFFF95D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6D2C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F6D30
  {uint32_t ea=c->r[2]+0xFFFF95D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F6D34
  c->f[31]=c->ps1[31]=S(c->f[2]+c->f[0]); // 801F6D38
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6D3C
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[3]); // 801F6D40
  {uint32_t ea=c->r[2]+0xFFFF95E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6D44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F6D48
  c->f[30]=c->ps1[30]=S(c->f[2]+c->f[0]); // 801F6D4C
  c->lr=0x801F6D54u; f_8005D2E8(c); // 801F6D50
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[1]); // 801F6D54
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801F6D58
  c->lr=0x801F6D60u; f_8005D314(c); // 801F6D5C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[1]); // 801F6D60
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801F6D64
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6D68
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801F6D6C
  c->r[3]=c->r[30]|c->r[30]; // 801F6D70
  c->r[4]=c->r[1]+0x0000002Cu; // 801F6D74
  c->lr=0x801F6D7Cu; f_8004A65C(c); // 801F6D78
  c->r[0]=0u+0x00000058u; // 801F6D7C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F6D80
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801F6D84
  c->r[0]=0u+0x00000048u; // 801F6D88
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801F6D8C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801F6D90
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F6D94
  c->r[30]=R32(c->r[1]+0x00000038u); // 801F6D98
  c->r[0]=R32(c->r[1]+0x00000064u); // 801F6D9C
  c->lr=c->r[0]; // 801F6DA0
  c->r[1]=c->r[1]+0x00000060u; // 801F6DA4
  return; // 801F6DA8
}

// fn_801F6DAC
void f_801F6DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6DAC
  c->r[0]=c->lr; // 801F6DB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F6DB4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801F6DB8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801F6DBC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801F6DC0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801F6DC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F6DC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F6DCC
  c->r[30]=c->r[3]|c->r[3]; // 801F6DD0
  c->r[31]=c->r[4]|c->r[4]; // 801F6DD4
  c->f[30]=c->f[1]; // 801F6DD8
  c->f[31]=c->f[2]; // 801F6DDC
  c->r[3]=c->r[1]+0x00000008u; // 801F6DE0
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801F6DE4
  c->lr=0x801F6DECu; f_800639A8(c); // 801F6DE8
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6DEC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 801F6DF0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F6DF4
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6DF8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 801F6DFC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F6E00
  c->r[3]=c->r[30]|c->r[30]; // 801F6E04
  c->r[4]=c->r[1]+0x00000008u; // 801F6E08
  c->lr=0x801F6E10u; f_800593A0(c); // 801F6E0C
  c->r[0]=0u+0x00000038u; // 801F6E10
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F6E14
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801F6E18
  c->r[0]=0u+0x00000028u; // 801F6E1C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801F6E20
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801F6E24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F6E28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F6E2C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F6E30
  c->lr=c->r[0]; // 801F6E34
  c->r[1]=c->r[1]+0x00000040u; // 801F6E38
  return; // 801F6E3C
}

// fn_801F6E40
void f_801F6E40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6E40
  c->r[0]=c->lr; // 801F6E44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F6E48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F6E4C
  c->r[31]=c->r[3]|c->r[3]; // 801F6E50
  c->lr=0x801F6E58u; f_8019C77C(c); // 801F6E54
  c->r[3]=0u+0x80470000u; // 801F6E58
  c->r[3]=c->r[3]+0x000061E8u; // 801F6E5C
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801F6E60
  c->r[0]=c->r[3]+0x00000014u; // 801F6E64
  W32(c->r[31]+0x00000128u,c->r[0]); // 801F6E68
  c->r[3]=c->r[31]+0x00003340u; // 801F6E6C
  c->lr=0x801F6E74u; f_8011E990(c); // 801F6E70
  c->r[3]=c->r[31]+0x00003340u; // 801F6E74
  c->r[4]=0u+0x00000000u; // 801F6E78
  c->r[5]=0u+0x00000030u; // 801F6E7C
  c->lr=0x801F6E84u; f_800060B8(c); // 801F6E80
  c->r[3]=c->r[31]|c->r[31]; // 801F6E84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F6E88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F6E8C
  c->lr=c->r[0]; // 801F6E90
  c->r[1]=c->r[1]+0x00000010u; // 801F6E94
  return; // 801F6E98
}

// fn_801F6E9C
void f_801F6E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F6E9C
  c->r[0]=c->lr; // 801F6EA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F6EA4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801F6EA8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801F6EAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F6EB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F6EB4
  c->r[30]=c->r[3]|c->r[3]; // 801F6EB8
  c->lr=0x801F6EC0u; f_8011B41C(c); // 801F6EBC
  c->r[4]=0u+0x00000016u; // 801F6EC0
  c->lr=0x801F6EC8u; f_8011B814(c); // 801F6EC4
  c->r[31]=c->r[3]|c->r[3]; // 801F6EC8
  c->r[3]=c->r[1]+0x00000008u; // 801F6ECC
  c->lr=0x801F6ED4u; f_8004B0A4(c); // 801F6ED0
  c->r[3]=c->r[31]|c->r[31]; // 801F6ED4
  c->r[4]=c->r[1]+0x00000008u; // 801F6ED8
  c->lr=0x801F6EE0u; f_801F9898(c); // 801F6EDC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6EE0
  {uint32_t ea=c->r[2]+0xFFFF95E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6EE4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F6EE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F6EEC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6EF0
  {uint32_t ea=c->r[2]+0xFFFF95ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6EF4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F6EF8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F6EFC
  c->r[3]=c->r[31]|c->r[31]; // 801F6F00
  c->lr=0x801F6F08u; f_8012FCB8(c); // 801F6F04
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6F08
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F6F0C
  c->r[3]=c->r[31]|c->r[31]; // 801F6F10
  c->lr=0x801F6F18u; f_8012FCB0(c); // 801F6F14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6F18
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F6F1C
  c->r[3]=c->r[30]|c->r[30]; // 801F6F20
  c->f[2]=c->f[31]; // 801F6F24
  c->lr=0x801F6F2Cu; f_8019CAB4(c); // 801F6F28
  c->r[3]=c->r[31]|c->r[31]; // 801F6F2C
  c->lr=0x801F6F34u; f_8012FCD0(c); // 801F6F30
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6F34
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F6F38
  c->r[3]=c->r[31]|c->r[31]; // 801F6F3C
  c->lr=0x801F6F44u; f_8012FCC8(c); // 801F6F40
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F6F44
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F6F48
  c->r[3]=c->r[30]|c->r[30]; // 801F6F4C
  c->f[2]=c->f[31]; // 801F6F50
  c->lr=0x801F6F58u; f_8019CB34(c); // 801F6F54
  c->r[3]=c->r[30]|c->r[30]; // 801F6F58
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6F5C
  c->lr=0x801F6F64u; f_8019CA94(c); // 801F6F60
  c->r[3]=c->r[30]|c->r[30]; // 801F6F64
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6F68
  c->lr=0x801F6F70u; f_8019CA9C(c); // 801F6F6C
  c->r[3]=c->r[31]|c->r[31]; // 801F6F70
  c->lr=0x801F6F78u; f_8012FCE8(c); // 801F6F74
  c->r[3]=c->r[30]|c->r[30]; // 801F6F78
  c->lr=0x801F6F80u; f_8019CAA4(c); // 801F6F7C
  c->r[3]=c->r[31]|c->r[31]; // 801F6F80
  c->lr=0x801F6F88u; f_8012FCF0(c); // 801F6F84
  c->r[3]=c->r[30]|c->r[30]; // 801F6F88
  c->lr=0x801F6F90u; f_8019CAAC(c); // 801F6F8C
  c->r[3]=c->r[31]|c->r[31]; // 801F6F90
  c->lr=0x801F6F98u; f_8012FCE0(c); // 801F6F94
  c->r[4]=c->r[3]|c->r[3]; // 801F6F98
  c->r[3]=c->r[30]|c->r[30]; // 801F6F9C
  c->lr=0x801F6FA4u; f_8019C988(c); // 801F6FA0
  c->r[3]=c->r[31]|c->r[31]; // 801F6FA4
  c->lr=0x801F6FACu; f_8012FCF8(c); // 801F6FA8
  c->r[3]=c->r[30]+0x00003248u; // 801F6FAC
  c->lr=0x801F6FB4u; f_80110580(c); // 801F6FB0
  c->r[3]=c->r[31]|c->r[31]; // 801F6FB4
  c->lr=0x801F6FBCu; f_8012FD00(c); // 801F6FB8
  c->r[3]=c->r[30]+0x00003290u; // 801F6FBC
  c->lr=0x801F6FC4u; f_80110580(c); // 801F6FC0
  c->r[3]=c->r[30]+0x000032D8u; // 801F6FC4
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6FC8
  c->lr=0x801F6FD0u; f_80110580(c); // 801F6FCC
  c->r[3]=c->r[31]|c->r[31]; // 801F6FD0
  c->lr=0x801F6FD8u; f_8012FD08(c); // 801F6FD4
  c->r[3]=c->r[30]+0x00003248u; // 801F6FD8
  c->lr=0x801F6FE0u; f_80110588(c); // 801F6FDC
  c->r[3]=c->r[31]|c->r[31]; // 801F6FE0
  c->lr=0x801F6FE8u; f_8012FD10(c); // 801F6FE4
  c->r[3]=c->r[30]+0x00003290u; // 801F6FE8
  c->lr=0x801F6FF0u; f_80110588(c); // 801F6FEC
  c->r[3]=c->r[30]+0x000032D8u; // 801F6FF0
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F6FF4
  c->lr=0x801F6FFCu; f_80110588(c); // 801F6FF8
  c->r[3]=c->r[30]|c->r[30]; // 801F6FFC
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7000
  c->f[2]=c->f[1]; // 801F7004
  c->f[3]=c->f[1]; // 801F7008
  c->lr=0x801F7010u; f_8011E9F8(c); // 801F700C
  c->r[3]=c->r[30]|c->r[30]; // 801F7010
  {uint32_t ea=c->r[2]+0xFFFF95F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7014
  c->f[2]=c->f[1]; // 801F7018
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F701C
  c->lr=0x801F7024u; f_8011E9E8(c); // 801F7020
  c->r[3]=c->r[31]|c->r[31]; // 801F7024
  c->lr=0x801F702Cu; f_801F9960(c); // 801F7028
  {uint32_t ea=c->r[2]+0xFFFF95FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F702C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F7030
  {uint32_t ea=c->r[2]+0xFFFF95F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7034
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7038
  c->r[3]=c->r[30]|c->r[30]; // 801F703C
  c->lr=0x801F7044u; f_8011EA08(c); // 801F7040
  c->r[3]=c->r[30]|c->r[30]; // 801F7044
  c->r[4]=0u+0x00000000u; // 801F7048
  c->lr=0x801F7050u; f_8011EA10(c); // 801F704C
  c->r[3]=c->r[30]|c->r[30]; // 801F7050
  c->lr=0x801F7058u; f_801F70D4(c); // 801F7054
  c->r[3]=c->r[30]|c->r[30]; // 801F7058
  c->r[4]=c->r[30]+0x00003340u; // 801F705C
  c->r[5]=0u+0x00000001u; // 801F7060
  c->lr=0x801F7068u; f_8019C328(c); // 801F7064
  c->lr=0x801F706Cu; f_8011A9D8(c); // 801F7068
  c->r[4]=0u+0x00000000u; // 801F706C
  c->lr=0x801F7074u; f_8011AF74(c); // 801F7070
  c->r[31]=c->r[3]|c->r[3]; // 801F7074
  c->lr=0x801F707Cu; f_8011A6E8(c); // 801F7078
  c->r[4]=c->r[31]|c->r[31]; // 801F707C
  c->lr=0x801F7084u; f_8011A9B0(c); // 801F7080
  c->lr=0x801F7088u; f_8012DA20(c); // 801F7084
  c->r[4]=c->r[3]|c->r[3]; // 801F7088
  c->r[3]=c->r[30]|c->r[30]; // 801F708C
  c->lr=0x801F7094u; f_8011E988(c); // 801F7090
  c->r[3]=c->r[30]|c->r[30]; // 801F7094
  c->r[4]=0u+0x00000005u; // 801F7098
  c->lr=0x801F70A0u; f_8011E980(c); // 801F709C
  c->r[3]=c->r[30]|c->r[30]; // 801F70A0
  c->r[4]=0u+0x00000016u; // 801F70A4
  c->r[5]=0u+0x00000000u; // 801F70A8
  c->lr=0x801F70B0u; f_8019BEF0(c); // 801F70AC
  c->r[0]=0u+0x00000028u; // 801F70B0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F70B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801F70B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F70BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F70C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F70C4
  c->lr=c->r[0]; // 801F70C8
  c->r[1]=c->r[1]+0x00000030u; // 801F70CC
  return; // 801F70D0
}

// fn_801F70D4
void f_801F70D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F70D4
  c->r[0]=c->lr; // 801F70D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F70DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F70E0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801F70E4
  c->r[30]=c->r[3]|c->r[3]; // 801F70E8
  c->r[3]=c->r[1]+0x00000008u; // 801F70EC
  c->lr=0x801F70F4u; f_800592DC(c); // 801F70F0
  c->r[3]=c->r[1]+0x00000028u; // 801F70F4
  {uint32_t ea=c->r[2]+0xFFFF9600u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F70F8
  {uint32_t ea=c->r[2]+0xFFFF9604u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F70FC
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7100
  c->lr=0x801F7108u; f_8004E34C(c); // 801F7104
  c->r[3]=c->r[1]+0x0000001Cu; // 801F7108
  {uint32_t ea=c->r[2]+0xFFFF9608u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F710C
  {uint32_t ea=c->r[2]+0xFFFF960Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F7110
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7114
  c->lr=0x801F711Cu; f_8004E34C(c); // 801F7118
  c->lr=0x801F7120u; f_8011B41C(c); // 801F711C
  c->r[4]=0u+0x00000016u; // 801F7120
  c->lr=0x801F7128u; f_8011B814(c); // 801F7124
  c->r[31]=c->r[3]|c->r[3]; // 801F7128
  c->r[3]=c->r[1]+0x00000010u; // 801F712C
  c->lr=0x801F7134u; f_8004B0A4(c); // 801F7130
  c->r[3]=c->r[31]|c->r[31]; // 801F7134
  c->r[4]=c->r[1]+0x00000010u; // 801F7138
  c->lr=0x801F7140u; f_801F9898(c); // 801F713C
  c->r[3]=c->r[31]|c->r[31]; // 801F7140
  c->lr=0x801F7148u; f_8012FCC8(c); // 801F7144
  {uint32_t ea=c->r[2]+0xFFFF9610u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F7148
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F714C
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801F7150
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7154
  {uint32_t ea=c->r[30]+0x00003340u; WF32(ea,c->f[0]);} // 801F7158
  c->r[3]=c->r[31]|c->r[31]; // 801F715C
  c->lr=0x801F7164u; f_8012FCD0(c); // 801F7160
  {uint32_t ea=c->r[2]+0xFFFF9614u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F7164
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7168
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 801F716C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7170
  {uint32_t ea=c->r[30]+0x00003344u; WF32(ea,c->f[0]);} // 801F7174
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7178
  {uint32_t ea=c->r[30]+0x00003348u; WF32(ea,c->f[0]);} // 801F717C
  {uint32_t ea=c->r[2]+0xFFFF9618u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7180
  {uint32_t ea=c->r[30]+0x00003360u; WF32(ea,c->f[1]);} // 801F7184
  {uint32_t ea=c->r[2]+0xFFFF961Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7188
  {uint32_t ea=c->r[30]+0x00003364u; WF32(ea,c->f[0]);} // 801F718C
  {uint32_t ea=c->r[30]+0x00003368u; WF32(ea,c->f[1]);} // 801F7190
  {uint32_t ea=c->r[30]+0x0000336Cu; WF32(ea,c->f[0]);} // 801F7194
  c->r[0]=0u+0x000000FFu; // 801F7198
  W8(c->r[30]+0x0000334Cu,c->r[0]); // 801F719C
  W8(c->r[30]+0x0000334Du,c->r[0]); // 801F71A0
  W8(c->r[30]+0x0000334Eu,c->r[0]); // 801F71A4
  c->r[0]=0u+0x00000080u; // 801F71A8
  W8(c->r[30]+0x0000334Fu,c->r[0]); // 801F71AC
  c->r[3]=c->r[1]+0x00000008u; // 801F71B0
  c->r[4]=c->r[1]+0x00000028u; // 801F71B4
  {uint32_t ea=c->r[2]+0xFFFF9620u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F71B8
  c->f[2]=c->f[1]; // 801F71BC
  c->lr=0x801F71C4u; f_801F6DAC(c); // 801F71C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F71C4
  {uint32_t ea=c->r[30]+0x00003350u; WF32(ea,c->f[0]);} // 801F71C8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F71CC
  {uint32_t ea=c->r[30]+0x00003354u; WF32(ea,c->f[0]);} // 801F71D0
  c->r[3]=c->r[1]+0x00000008u; // 801F71D4
  c->r[4]=c->r[1]+0x0000001Cu; // 801F71D8
  {uint32_t ea=c->r[2]+0xFFFF9620u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F71DC
  c->f[2]=c->f[1]; // 801F71E0
  c->lr=0x801F71E8u; f_801F6DAC(c); // 801F71E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F71E8
  {uint32_t ea=c->r[30]+0x00003358u; WF32(ea,c->f[0]);} // 801F71EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F71F0
  {uint32_t ea=c->r[30]+0x0000335Cu; WF32(ea,c->f[0]);} // 801F71F4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F71F8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801F71FC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F7200
  c->lr=c->r[0]; // 801F7204
  c->r[1]=c->r[1]+0x00000040u; // 801F7208
  return; // 801F720C
}

// fn_801F7210
void f_801F7210(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7210
  c->r[0]=c->lr; // 801F7214
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F7218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F721C
  c->r[31]=c->r[3]|c->r[3]; // 801F7220
  c->lr=0x801F7228u; f_801F70D4(c); // 801F7224
  c->r[3]=c->r[31]|c->r[31]; // 801F7228
  c->r[4]=c->r[31]+0x00003340u; // 801F722C
  c->r[5]=0u+0x00000001u; // 801F7230
  c->lr=0x801F7238u; f_8019C328(c); // 801F7234
  c->r[3]=c->r[31]|c->r[31]; // 801F7238
  c->lr=0x801F7240u; f_8019C88C(c); // 801F723C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F7240
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F7244
  c->lr=c->r[0]; // 801F7248
  c->r[1]=c->r[1]+0x00000010u; // 801F724C
  return; // 801F7250
}

// fn_801F7254
void f_801F7254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7254
  c->r[0]=c->lr; // 801F7258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F725C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F7260
  c->r[31]=c->r[3]|c->r[3]; // 801F7264
  c->lr=0x801F726Cu; f_8019C77C(c); // 801F7268
  c->r[3]=0u+0x80470000u; // 801F726C
  c->r[3]=c->r[3]+0x00006160u; // 801F7270
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801F7274
  c->r[0]=c->r[3]+0x00000014u; // 801F7278
  W32(c->r[31]+0x00000128u,c->r[0]); // 801F727C
  c->r[3]=c->r[31]+0x00003340u; // 801F7280
  c->lr=0x801F7288u; f_8011E990(c); // 801F7284
  c->r[3]=c->r[31]+0x00003340u; // 801F7288
  c->r[4]=0u+0x00000000u; // 801F728C
  c->r[5]=0u+0x00000030u; // 801F7290
  c->lr=0x801F7298u; f_800060B8(c); // 801F7294
  c->r[3]=c->r[31]|c->r[31]; // 801F7298
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F729C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F72A0
  c->lr=c->r[0]; // 801F72A4
  c->r[1]=c->r[1]+0x00000010u; // 801F72A8
  return; // 801F72AC
}

// fn_801F72B0
void f_801F72B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F72B0
  c->r[0]=c->lr; // 801F72B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F72B8
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801F72BC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801F72C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F72C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F72C8
  c->r[30]=c->r[3]|c->r[3]; // 801F72CC
  c->lr=0x801F72D4u; f_8011B41C(c); // 801F72D0
  c->r[4]=0u+0x00000016u; // 801F72D4
  c->lr=0x801F72DCu; f_8011B814(c); // 801F72D8
  c->r[31]=c->r[3]|c->r[3]; // 801F72DC
  c->r[3]=c->r[1]+0x00000008u; // 801F72E0
  c->lr=0x801F72E8u; f_8004B0A4(c); // 801F72E4
  c->r[3]=c->r[31]|c->r[31]; // 801F72E8
  c->r[4]=c->r[1]+0x00000008u; // 801F72EC
  c->lr=0x801F72F4u; f_801F9898(c); // 801F72F0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F72F4
  {uint32_t ea=c->r[2]+0xFFFF95E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F72F8
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F72FC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F7300
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7304
  {uint32_t ea=c->r[2]+0xFFFF95ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7308
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F730C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F7310
  c->r[3]=c->r[31]|c->r[31]; // 801F7314
  c->lr=0x801F731Cu; f_8012FCB8(c); // 801F7318
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F731C
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F7320
  c->r[3]=c->r[31]|c->r[31]; // 801F7324
  c->lr=0x801F732Cu; f_8012FCB0(c); // 801F7328
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F732C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7330
  c->r[3]=c->r[30]|c->r[30]; // 801F7334
  c->f[2]=c->f[31]; // 801F7338
  c->lr=0x801F7340u; f_8019CAB4(c); // 801F733C
  c->r[3]=c->r[31]|c->r[31]; // 801F7340
  c->lr=0x801F7348u; f_8012FCD0(c); // 801F7344
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7348
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F734C
  c->r[3]=c->r[31]|c->r[31]; // 801F7350
  c->lr=0x801F7358u; f_8012FCC8(c); // 801F7354
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7358
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F735C
  c->r[3]=c->r[30]|c->r[30]; // 801F7360
  c->f[2]=c->f[31]; // 801F7364
  c->lr=0x801F736Cu; f_8019CB34(c); // 801F7368
  c->r[3]=c->r[30]|c->r[30]; // 801F736C
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7370
  c->lr=0x801F7378u; f_8019CA94(c); // 801F7374
  c->r[3]=c->r[30]|c->r[30]; // 801F7378
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F737C
  c->lr=0x801F7384u; f_8019CA9C(c); // 801F7380
  c->r[3]=c->r[31]|c->r[31]; // 801F7384
  c->lr=0x801F738Cu; f_8012FCE8(c); // 801F7388
  c->r[3]=c->r[30]|c->r[30]; // 801F738C
  c->lr=0x801F7394u; f_8019CAA4(c); // 801F7390
  c->r[3]=c->r[31]|c->r[31]; // 801F7394
  c->lr=0x801F739Cu; f_8012FCF0(c); // 801F7398
  c->r[3]=c->r[30]|c->r[30]; // 801F739C
  c->lr=0x801F73A4u; f_8019CAAC(c); // 801F73A0
  c->r[3]=c->r[31]|c->r[31]; // 801F73A4
  c->lr=0x801F73ACu; f_8012FCE0(c); // 801F73A8
  c->r[4]=c->r[3]|c->r[3]; // 801F73AC
  c->r[3]=c->r[30]|c->r[30]; // 801F73B0
  c->lr=0x801F73B8u; f_8019C988(c); // 801F73B4
  c->r[3]=c->r[31]|c->r[31]; // 801F73B8
  c->lr=0x801F73C0u; f_8012FCF8(c); // 801F73BC
  c->r[3]=c->r[30]+0x00003248u; // 801F73C0
  c->lr=0x801F73C8u; f_80110580(c); // 801F73C4
  c->r[3]=c->r[31]|c->r[31]; // 801F73C8
  c->lr=0x801F73D0u; f_8012FD00(c); // 801F73CC
  c->r[3]=c->r[30]+0x00003290u; // 801F73D0
  c->lr=0x801F73D8u; f_80110580(c); // 801F73D4
  c->r[3]=c->r[30]+0x000032D8u; // 801F73D8
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F73DC
  c->lr=0x801F73E4u; f_80110580(c); // 801F73E0
  c->r[3]=c->r[31]|c->r[31]; // 801F73E4
  c->lr=0x801F73ECu; f_8012FD08(c); // 801F73E8
  c->r[3]=c->r[30]+0x00003248u; // 801F73EC
  c->lr=0x801F73F4u; f_80110588(c); // 801F73F0
  c->r[3]=c->r[31]|c->r[31]; // 801F73F4
  c->lr=0x801F73FCu; f_8012FD10(c); // 801F73F8
  c->r[3]=c->r[30]+0x00003290u; // 801F73FC
  c->lr=0x801F7404u; f_80110588(c); // 801F7400
  c->r[3]=c->r[30]+0x000032D8u; // 801F7404
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7408
  c->lr=0x801F7410u; f_80110588(c); // 801F740C
  c->r[3]=c->r[30]|c->r[30]; // 801F7410
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7414
  c->f[2]=c->f[1]; // 801F7418
  c->f[3]=c->f[1]; // 801F741C
  c->lr=0x801F7424u; f_8011E9F8(c); // 801F7420
  c->r[3]=c->r[30]|c->r[30]; // 801F7424
  {uint32_t ea=c->r[2]+0xFFFF95F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7428
  c->f[2]=c->f[1]; // 801F742C
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7430
  c->lr=0x801F7438u; f_8011E9E8(c); // 801F7434
  c->r[3]=c->r[31]|c->r[31]; // 801F7438
  c->lr=0x801F7440u; f_801F9960(c); // 801F743C
  {uint32_t ea=c->r[2]+0xFFFF95FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7440
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F7444
  c->r[3]=c->r[30]|c->r[30]; // 801F7448
  c->lr=0x801F7450u; f_8011EA08(c); // 801F744C
  c->r[3]=c->r[30]|c->r[30]; // 801F7450
  c->r[4]=0u+0x00000000u; // 801F7454
  c->lr=0x801F745Cu; f_8011EA10(c); // 801F7458
  c->r[3]=c->r[30]|c->r[30]; // 801F745C
  c->lr=0x801F7464u; f_801F74E0(c); // 801F7460
  c->r[3]=c->r[30]|c->r[30]; // 801F7464
  c->r[4]=c->r[30]+0x00003340u; // 801F7468
  c->r[5]=0u+0x00000001u; // 801F746C
  c->lr=0x801F7474u; f_8019C328(c); // 801F7470
  c->lr=0x801F7478u; f_8011A9D8(c); // 801F7474
  c->r[4]=0u+0x00000000u; // 801F7478
  c->lr=0x801F7480u; f_8011AF74(c); // 801F747C
  c->r[31]=c->r[3]|c->r[3]; // 801F7480
  c->lr=0x801F7488u; f_8011A6E8(c); // 801F7484
  c->r[4]=c->r[31]|c->r[31]; // 801F7488
  c->lr=0x801F7490u; f_8011A9B0(c); // 801F748C
  c->lr=0x801F7494u; f_8012DA20(c); // 801F7490
  c->r[4]=c->r[3]|c->r[3]; // 801F7494
  c->r[3]=c->r[30]|c->r[30]; // 801F7498
  c->lr=0x801F74A0u; f_8011E988(c); // 801F749C
  c->r[3]=c->r[30]|c->r[30]; // 801F74A0
  c->r[4]=0u+0x00000000u; // 801F74A4
  c->lr=0x801F74ACu; f_8011E980(c); // 801F74A8
  c->r[3]=c->r[30]|c->r[30]; // 801F74AC
  c->r[4]=0u+0x00000016u; // 801F74B0
  c->r[5]=0u+0x00000000u; // 801F74B4
  c->lr=0x801F74BCu; f_8019BEF0(c); // 801F74B8
  c->r[0]=0u+0x00000028u; // 801F74BC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F74C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801F74C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F74C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F74CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F74D0
  c->lr=c->r[0]; // 801F74D4
  c->r[1]=c->r[1]+0x00000030u; // 801F74D8
  return; // 801F74DC
}

// fn_801F74E0
void f_801F74E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F74E0
  c->r[0]=c->lr; // 801F74E4
  W32(c->r[1]+0x00000074u,c->r[0]); // 801F74E8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 801F74EC
  W32(c->r[1]+0x00000068u,c->r[30]); // 801F74F0
  c->r[30]=c->r[3]|c->r[3]; // 801F74F4
  c->r[3]=c->r[1]+0x00000058u; // 801F74F8
  c->lr=0x801F7500u; f_8004B0A4(c); // 801F74FC
  c->r[3]=c->r[1]+0x0000004Cu; // 801F7500
  c->lr=0x801F7508u; f_8004B0A4(c); // 801F7504
  c->r[3]=c->r[1]+0x00000020u; // 801F7508
  c->lr=0x801F7510u; f_800592DC(c); // 801F750C
  c->r[3]=c->r[1]+0x00000018u; // 801F7510
  c->lr=0x801F7518u; f_800592DC(c); // 801F7514
  c->r[3]=c->r[1]+0x00000010u; // 801F7518
  c->lr=0x801F7520u; f_800592DC(c); // 801F751C
  c->r[3]=c->r[1]+0x00000008u; // 801F7520
  c->lr=0x801F7528u; f_800592DC(c); // 801F7524
  c->lr=0x801F752Cu; f_801F99D4(c); // 801F7528
  c->lr=0x801F7530u; f_801F9B3C(c); // 801F752C
  c->r[4]=c->r[3]|c->r[3]; // 801F7530
  c->r[3]=c->r[1]+0x00000058u; // 801F7534
  c->lr=0x801F753Cu; f_8004A65C(c); // 801F7538
  c->r[3]=c->r[1]+0x0000004Cu; // 801F753C
  c->r[4]=c->r[1]+0x00000058u; // 801F7540
  c->lr=0x801F7548u; f_801F6BD8(c); // 801F7544
  c->lr=0x801F754Cu; f_8005D2E8(c); // 801F7548
  {uint32_t ea=c->r[2]+0xFFFF9624u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F754C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801F7550
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F7554
  c->lr=0x801F755Cu; f_8005D314(c); // 801F7558
  {uint32_t ea=c->r[2]+0xFFFF9628u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F755C
  c->f[4]=c->ps1[4]=S(c->f[0]/c->f[1]); // 801F7560
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 801F7564
  {uint32_t ea=c->r[2]+0xFFFF95E4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7568
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F756C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801F7570
  {uint32_t ea=c->r[2]+0xFFFF95D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F7574
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 801F7578
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 801F757C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[4]); // 801F7580
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801F7584
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 801F7588
  c->r[3]=c->r[1]+0x00000034u; // 801F758C
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7590
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801F7594
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7598
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[2]); // 801F759C
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F75A0
  c->lr=0x801F75A8u; f_8004E34C(c); // 801F75A4
  c->r[4]=c->r[3]|c->r[3]; // 801F75A8
  c->r[3]=c->r[1]+0x00000058u; // 801F75AC
  c->lr=0x801F75B4u; f_8004A65C(c); // 801F75B0
  c->r[3]=c->r[1]+0x00000020u; // 801F75B4
  c->r[4]=c->r[1]+0x00000058u; // 801F75B8
  {uint32_t ea=c->r[2]+0xFFFF95E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F75BC
  c->f[2]=c->f[1]; // 801F75C0
  c->lr=0x801F75C8u; f_801F6DAC(c); // 801F75C4
  c->r[3]=c->r[1]+0x00000028u; // 801F75C8
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F75CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F75D0
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801F75D4
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F75D8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F75DC
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801F75E0
  {uint32_t ea=c->r[1]+0x00000054u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F75E4
  c->lr=0x801F75ECu; f_8004E34C(c); // 801F75E8
  c->r[4]=c->r[3]|c->r[3]; // 801F75EC
  c->r[3]=c->r[1]+0x00000058u; // 801F75F0
  c->lr=0x801F75F8u; f_8004A65C(c); // 801F75F4
  c->r[3]=c->r[1]+0x00000018u; // 801F75F8
  c->r[4]=c->r[1]+0x00000058u; // 801F75FC
  {uint32_t ea=c->r[2]+0xFFFF95E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7600
  c->f[2]=c->f[1]; // 801F7604
  c->lr=0x801F760Cu; f_801F6DAC(c); // 801F7608
  c->lr=0x801F7610u; f_8011B41C(c); // 801F760C
  c->r[4]=0u+0x00000016u; // 801F7610
  c->lr=0x801F7618u; f_8011B814(c); // 801F7614
  c->r[31]=c->r[3]|c->r[3]; // 801F7618
  c->r[3]=c->r[1]+0x00000040u; // 801F761C
  c->lr=0x801F7624u; f_8004B0A4(c); // 801F7620
  c->r[3]=c->r[31]|c->r[31]; // 801F7624
  c->r[4]=c->r[1]+0x00000040u; // 801F7628
  c->lr=0x801F7630u; f_801F9898(c); // 801F762C
  c->r[3]=c->r[31]|c->r[31]; // 801F7630
  c->lr=0x801F7638u; f_8012FCC8(c); // 801F7634
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7638
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F763C
  {uint32_t ea=c->r[30]+0x00003340u; WF32(ea,c->f[0]);} // 801F7640
  c->r[3]=c->r[31]|c->r[31]; // 801F7644
  c->lr=0x801F764Cu; f_8012FCD0(c); // 801F7648
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F764C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7650
  {uint32_t ea=c->r[30]+0x00003344u; WF32(ea,c->f[0]);} // 801F7654
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7658
  {uint32_t ea=c->r[30]+0x00003348u; WF32(ea,c->f[0]);} // 801F765C
  c->r[0]=0u+0x000000FFu; // 801F7660
  W8(c->r[30]+0x0000334Cu,c->r[0]); // 801F7664
  W8(c->r[30]+0x0000334Du,c->r[0]); // 801F7668
  W8(c->r[30]+0x0000334Eu,c->r[0]); // 801F766C
  c->r[0]=0u+0x0000008Cu; // 801F7670
  W8(c->r[30]+0x0000334Fu,c->r[0]); // 801F7674
  {uint32_t ea=c->r[2]+0xFFFF962Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7678
  {uint32_t ea=c->r[30]+0x00003360u; WF32(ea,c->f[1]);} // 801F767C
  {uint32_t ea=c->r[2]+0xFFFF9630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7680
  {uint32_t ea=c->r[30]+0x00003364u; WF32(ea,c->f[0]);} // 801F7684
  {uint32_t ea=c->r[30]+0x00003368u; WF32(ea,c->f[1]);} // 801F7688
  {uint32_t ea=c->r[30]+0x0000336Cu; WF32(ea,c->f[0]);} // 801F768C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7690
  {uint32_t ea=c->r[30]+0x00003350u; WF32(ea,c->f[0]);} // 801F7694
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7698
  {uint32_t ea=c->r[30]+0x00003354u; WF32(ea,c->f[0]);} // 801F769C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F76A0
  {uint32_t ea=c->r[30]+0x00003358u; WF32(ea,c->f[0]);} // 801F76A4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F76A8
  {uint32_t ea=c->r[30]+0x0000335Cu; WF32(ea,c->f[0]);} // 801F76AC
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 801F76B0
  c->r[30]=R32(c->r[1]+0x00000068u); // 801F76B4
  c->r[0]=R32(c->r[1]+0x00000074u); // 801F76B8
  c->lr=c->r[0]; // 801F76BC
  c->r[1]=c->r[1]+0x00000070u; // 801F76C0
  return; // 801F76C4
}

// fn_801F76C8
void f_801F76C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F76C8
  c->r[0]=c->lr; // 801F76CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F76D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F76D4
  c->r[31]=c->r[3]|c->r[3]; // 801F76D8
  c->lr=0x801F76E0u; f_801F74E0(c); // 801F76DC
  c->lr=0x801F76E4u; f_801F99D4(c); // 801F76E0
  c->lr=0x801F76E8u; f_801F9C44(c); // 801F76E4
  c->r[4]=c->r[3]|c->r[3]; // 801F76E8
  c->r[3]=c->r[31]|c->r[31]; // 801F76EC
  c->lr=0x801F76F4u; f_8011E980(c); // 801F76F0
  c->r[3]=c->r[31]|c->r[31]; // 801F76F4
  c->lr=0x801F76FCu; f_8019C024(c); // 801F76F8
  c->r[3]=c->r[31]|c->r[31]; // 801F76FC
  c->r[4]=c->r[31]+0x00003340u; // 801F7700
  c->r[5]=0u+0x00000001u; // 801F7704
  c->lr=0x801F770Cu; f_8019C328(c); // 801F7708
  c->r[3]=c->r[31]|c->r[31]; // 801F770C
  c->lr=0x801F7714u; f_8019C88C(c); // 801F7710
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F7714
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F7718
  c->lr=c->r[0]; // 801F771C
  c->r[1]=c->r[1]+0x00000010u; // 801F7720
  return; // 801F7724
}

// fn_801F7728
void f_801F7728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7728
  c->r[0]=c->lr; // 801F772C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F7730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F7734
  c->r[31]=c->r[3]|c->r[3]; // 801F7738
  c->lr=0x801F7740u; f_8019C77C(c); // 801F773C
  c->r[3]=0u+0x80470000u; // 801F7740
  c->r[3]=c->r[3]+0x000060D8u; // 801F7744
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801F7748
  c->r[0]=c->r[3]+0x00000014u; // 801F774C
  W32(c->r[31]+0x00000128u,c->r[0]); // 801F7750
  c->r[3]=c->r[31]+0x00003340u; // 801F7754
  c->lr=0x801F775Cu; f_8011E990(c); // 801F7758
  c->r[3]=c->r[31]+0x00003370u; // 801F775C
  c->lr=0x801F7764u; f_80110498(c); // 801F7760
  c->r[3]=c->r[31]+0x00003340u; // 801F7764
  c->r[4]=0u+0x00000000u; // 801F7768
  c->r[5]=0u+0x00000030u; // 801F776C
  c->lr=0x801F7774u; f_800060B8(c); // 801F7770
  c->r[3]=c->r[31]|c->r[31]; // 801F7774
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F7778
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F777C
  c->lr=c->r[0]; // 801F7780
  c->r[1]=c->r[1]+0x00000010u; // 801F7784
  return; // 801F7788
}

// fn_801F778C
void f_801F778C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F778C
  c->r[0]=c->lr; // 801F7790
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F7794
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801F7798
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801F779C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F77A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F77A4
  c->r[30]=c->r[3]|c->r[3]; // 801F77A8
  c->lr=0x801F77B0u; f_8011B41C(c); // 801F77AC
  c->r[4]=0u+0x00000016u; // 801F77B0
  c->lr=0x801F77B8u; f_8011B814(c); // 801F77B4
  c->r[31]=c->r[3]|c->r[3]; // 801F77B8
  c->r[3]=c->r[1]+0x00000008u; // 801F77BC
  c->lr=0x801F77C4u; f_8004B0A4(c); // 801F77C0
  c->r[3]=c->r[31]|c->r[31]; // 801F77C4
  c->r[4]=c->r[1]+0x00000008u; // 801F77C8
  c->lr=0x801F77D0u; f_801F9898(c); // 801F77CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F77D0
  {uint32_t ea=c->r[2]+0xFFFF95E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F77D4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F77D8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F77DC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F77E0
  {uint32_t ea=c->r[2]+0xFFFF95ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F77E4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F77E8
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F77EC
  c->r[3]=c->r[31]|c->r[31]; // 801F77F0
  c->lr=0x801F77F8u; f_8012FCB8(c); // 801F77F4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F77F8
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F77FC
  c->r[3]=c->r[31]|c->r[31]; // 801F7800
  c->lr=0x801F7808u; f_8012FCB0(c); // 801F7804
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7808
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F780C
  c->r[3]=c->r[30]|c->r[30]; // 801F7810
  c->f[2]=c->f[31]; // 801F7814
  c->lr=0x801F781Cu; f_8019CAB4(c); // 801F7818
  c->r[3]=c->r[31]|c->r[31]; // 801F781C
  c->lr=0x801F7824u; f_8012FCD0(c); // 801F7820
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7824
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F7828
  c->r[3]=c->r[31]|c->r[31]; // 801F782C
  c->lr=0x801F7834u; f_8012FCC8(c); // 801F7830
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7834
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7838
  c->r[3]=c->r[30]|c->r[30]; // 801F783C
  c->f[2]=c->f[31]; // 801F7840
  c->lr=0x801F7848u; f_8019CB34(c); // 801F7844
  c->r[3]=c->r[30]|c->r[30]; // 801F7848
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F784C
  c->lr=0x801F7854u; f_8019CA94(c); // 801F7850
  c->r[3]=c->r[30]|c->r[30]; // 801F7854
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7858
  c->lr=0x801F7860u; f_8019CA9C(c); // 801F785C
  c->r[3]=c->r[31]|c->r[31]; // 801F7860
  c->lr=0x801F7868u; f_8012FCE8(c); // 801F7864
  c->r[3]=c->r[30]|c->r[30]; // 801F7868
  c->lr=0x801F7870u; f_8019CAA4(c); // 801F786C
  c->r[3]=c->r[31]|c->r[31]; // 801F7870
  c->lr=0x801F7878u; f_8012FCF0(c); // 801F7874
  c->r[3]=c->r[30]|c->r[30]; // 801F7878
  c->lr=0x801F7880u; f_8019CAAC(c); // 801F787C
  c->r[3]=c->r[31]|c->r[31]; // 801F7880
  c->lr=0x801F7888u; f_8012FCE0(c); // 801F7884
  c->r[4]=c->r[3]|c->r[3]; // 801F7888
  c->r[3]=c->r[30]|c->r[30]; // 801F788C
  c->lr=0x801F7894u; f_8019C988(c); // 801F7890
  c->r[3]=c->r[31]|c->r[31]; // 801F7894
  c->lr=0x801F789Cu; f_8012FCF8(c); // 801F7898
  c->r[3]=c->r[30]+0x00003248u; // 801F789C
  c->lr=0x801F78A4u; f_80110580(c); // 801F78A0
  c->r[3]=c->r[31]|c->r[31]; // 801F78A4
  c->lr=0x801F78ACu; f_8012FD00(c); // 801F78A8
  c->r[3]=c->r[30]+0x00003290u; // 801F78AC
  c->lr=0x801F78B4u; f_80110580(c); // 801F78B0
  c->r[3]=c->r[30]+0x000032D8u; // 801F78B4
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F78B8
  c->lr=0x801F78C0u; f_80110580(c); // 801F78BC
  c->r[3]=c->r[31]|c->r[31]; // 801F78C0
  c->lr=0x801F78C8u; f_8012FD08(c); // 801F78C4
  c->r[3]=c->r[30]+0x00003248u; // 801F78C8
  c->lr=0x801F78D0u; f_80110588(c); // 801F78CC
  c->r[3]=c->r[31]|c->r[31]; // 801F78D0
  c->lr=0x801F78D8u; f_8012FD10(c); // 801F78D4
  c->r[3]=c->r[30]+0x00003290u; // 801F78D8
  c->lr=0x801F78E0u; f_80110588(c); // 801F78DC
  c->r[3]=c->r[30]+0x000032D8u; // 801F78E0
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F78E4
  c->lr=0x801F78ECu; f_80110588(c); // 801F78E8
  c->r[3]=c->r[30]|c->r[30]; // 801F78EC
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F78F0
  c->f[2]=c->f[1]; // 801F78F4
  c->f[3]=c->f[1]; // 801F78F8
  c->lr=0x801F7900u; f_8011E9F8(c); // 801F78FC
  c->r[3]=c->r[30]|c->r[30]; // 801F7900
  {uint32_t ea=c->r[2]+0xFFFF95F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7904
  c->f[2]=c->f[1]; // 801F7908
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F790C
  c->lr=0x801F7914u; f_8011E9E8(c); // 801F7910
  c->r[3]=c->r[31]|c->r[31]; // 801F7914
  c->lr=0x801F791Cu; f_801F9960(c); // 801F7918
  {uint32_t ea=c->r[2]+0xFFFF95FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F791C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F7920
  {uint32_t ea=c->r[2]+0xFFFF9634u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7924
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7928
  c->r[3]=c->r[30]|c->r[30]; // 801F792C
  c->lr=0x801F7934u; f_8011EA08(c); // 801F7930
  c->r[3]=c->r[30]|c->r[30]; // 801F7934
  c->r[4]=0u+0x00000000u; // 801F7938
  c->lr=0x801F7940u; f_8011EA10(c); // 801F793C
  c->r[3]=c->r[30]|c->r[30]; // 801F7940
  c->lr=0x801F7948u; f_801F79F4(c); // 801F7944
  c->r[3]=c->r[30]|c->r[30]; // 801F7948
  c->r[4]=c->r[30]+0x00003340u; // 801F794C
  c->r[5]=0u+0x00000001u; // 801F7950
  c->lr=0x801F7958u; f_8019C328(c); // 801F7954
  c->lr=0x801F795Cu; f_8011A9D8(c); // 801F7958
  c->r[4]=0u+0x00000000u; // 801F795C
  c->lr=0x801F7964u; f_8011AF74(c); // 801F7960
  c->r[31]=c->r[3]|c->r[3]; // 801F7964
  c->lr=0x801F796Cu; f_8011A6E8(c); // 801F7968
  c->r[4]=c->r[31]|c->r[31]; // 801F796C
  c->lr=0x801F7974u; f_8011A9B0(c); // 801F7970
  c->lr=0x801F7978u; f_8012DA20(c); // 801F7974
  c->r[4]=c->r[3]|c->r[3]; // 801F7978
  c->r[3]=c->r[30]|c->r[30]; // 801F797C
  c->lr=0x801F7984u; f_8011E988(c); // 801F7980
  c->r[3]=c->r[30]|c->r[30]; // 801F7984
  c->r[4]=0u+0x00000002u; // 801F7988
  c->lr=0x801F7990u; f_8011E980(c); // 801F798C
  c->r[3]=c->r[30]|c->r[30]; // 801F7990
  c->r[4]=0u+0x00000016u; // 801F7994
  c->r[5]=0u+0x00000000u; // 801F7998
  c->lr=0x801F79A0u; f_8019BEF0(c); // 801F799C
  c->r[3]=c->r[30]+0x00003370u; // 801F79A0
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F79A4
  c->lr=0x801F79ACu; f_80110560(c); // 801F79A8
  c->r[3]=c->r[30]+0x00003370u; // 801F79AC
  {uint32_t ea=c->r[2]+0xFFFF9638u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F79B0
  c->lr=0x801F79B8u; f_80110568(c); // 801F79B4
  c->r[3]=c->r[30]+0x00003370u; // 801F79B8
  c->r[4]=0u+0x00000000u; // 801F79BC
  c->lr=0x801F79C4u; f_80110578(c); // 801F79C0
  c->r[3]=c->r[30]+0x00003370u; // 801F79C4
  c->r[4]=0u+0x00000001u; // 801F79C8
  c->lr=0x801F79D0u; f_80110570(c); // 801F79CC
  c->r[0]=0u+0x00000028u; // 801F79D0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F79D4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801F79D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F79DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F79E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F79E4
  c->lr=c->r[0]; // 801F79E8
  c->r[1]=c->r[1]+0x00000030u; // 801F79EC
  return; // 801F79F0
}

// fn_801F79F4
void f_801F79F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F79F4
  c->r[0]=c->lr; // 801F79F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F79FC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801F7A00
  W32(c->r[1]+0x00000038u,c->r[30]); // 801F7A04
  c->r[30]=c->r[3]|c->r[3]; // 801F7A08
  c->r[3]=c->r[1]+0x0000002Cu; // 801F7A0C
  c->lr=0x801F7A14u; f_8004B0A4(c); // 801F7A10
  c->r[3]=c->r[1]+0x00000020u; // 801F7A14
  c->lr=0x801F7A1Cu; f_8004B0A4(c); // 801F7A18
  c->r[3]=c->r[1]+0x00000014u; // 801F7A1C
  c->lr=0x801F7A24u; f_8004B0A4(c); // 801F7A20
  c->lr=0x801F7A28u; f_801F99D4(c); // 801F7A24
  c->lr=0x801F7A2Cu; f_801F9B48(c); // 801F7A28
  c->r[4]=c->r[3]|c->r[3]; // 801F7A2C
  c->r[3]=c->r[1]+0x00000014u; // 801F7A30
  c->lr=0x801F7A38u; f_8004A65C(c); // 801F7A34
  c->r[3]=c->r[30]|c->r[30]; // 801F7A38
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7A3C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F7A40
  {uint32_t ea=c->r[1]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7A44
  c->lr=0x801F7A4Cu; f_801F9400(c); // 801F7A48
  c->lr=0x801F7A50u; f_8011B41C(c); // 801F7A4C
  c->r[4]=0u+0x00000016u; // 801F7A50
  c->lr=0x801F7A58u; f_8011B814(c); // 801F7A54
  c->r[31]=c->r[3]|c->r[3]; // 801F7A58
  c->r[3]=c->r[1]+0x00000008u; // 801F7A5C
  c->lr=0x801F7A64u; f_8004B0A4(c); // 801F7A60
  c->r[3]=c->r[31]|c->r[31]; // 801F7A64
  c->r[4]=c->r[1]+0x00000008u; // 801F7A68
  c->lr=0x801F7A70u; f_801F9898(c); // 801F7A6C
  c->r[3]=c->r[31]|c->r[31]; // 801F7A70
  c->lr=0x801F7A78u; f_8012FCC8(c); // 801F7A74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7A78
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7A7C
  {uint32_t ea=c->r[30]+0x00003340u; WF32(ea,c->f[0]);} // 801F7A80
  c->r[3]=c->r[31]|c->r[31]; // 801F7A84
  c->lr=0x801F7A8Cu; f_8012FCD0(c); // 801F7A88
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7A8C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7A90
  {uint32_t ea=c->r[30]+0x00003344u; WF32(ea,c->f[0]);} // 801F7A94
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7A98
  {uint32_t ea=c->r[30]+0x00003348u; WF32(ea,c->f[1]);} // 801F7A9C
  {uint32_t ea=c->r[2]+0xFFFF9608u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7AA0
  {uint32_t ea=c->r[30]+0x00003360u; WF32(ea,c->f[0]);} // 801F7AA4
  {uint32_t ea=c->r[30]+0x00003364u; WF32(ea,c->f[0]);} // 801F7AA8
  {uint32_t ea=c->r[30]+0x00003368u; WF32(ea,c->f[0]);} // 801F7AAC
  {uint32_t ea=c->r[30]+0x0000336Cu; WF32(ea,c->f[0]);} // 801F7AB0
  {uint32_t ea=c->r[30]+0x00003350u; WF32(ea,c->f[1]);} // 801F7AB4
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7AB8
  {uint32_t ea=c->r[30]+0x00003354u; WF32(ea,c->f[0]);} // 801F7ABC
  {uint32_t ea=c->r[30]+0x00003358u; WF32(ea,c->f[1]);} // 801F7AC0
  {uint32_t ea=c->r[30]+0x0000335Cu; WF32(ea,c->f[0]);} // 801F7AC4
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801F7AC8
  c->r[30]=R32(c->r[1]+0x00000038u); // 801F7ACC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F7AD0
  c->lr=c->r[0]; // 801F7AD4
  c->r[1]=c->r[1]+0x00000040u; // 801F7AD8
  return; // 801F7ADC
}

// fn_801F7AE0
void f_801F7AE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7AE0
  c->r[0]=c->lr; // 801F7AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F7AE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F7AEC
  c->r[31]=c->r[3]|c->r[3]; // 801F7AF0
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7AF4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F7AF8
  c->r[3]=c->r[3]+0x00003370u; // 801F7AFC
  c->lr=0x801F7B04u; f_801105F8(c); // 801F7B00
  cmps(c,0,(int32_t)c->r[3],0); // 801F7B04
  if (!crb(c,2)) { goto L_801F7B28; } // 801F7B08
  c->r[3]=c->r[31]+0x00003370u; // 801F7B0C
  c->r[4]=0u+0x00000001u; // 801F7B10
  c->lr=0x801F7B18u; f_80110570(c); // 801F7B14
  c->r[3]=c->r[31]+0x00003370u; // 801F7B18
  {uint32_t ea=c->r[2]+0xFFFF95D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7B1C
  c->lr=0x801F7B24u; f_80110590(c); // 801F7B20
  goto L_801F7B34; // 801F7B24
L_801F7B28:;
  c->r[3]=c->r[31]+0x00003370u; // 801F7B28
  c->r[4]=c->r[1]+0x00000008u; // 801F7B2C
  c->lr=0x801F7B34u; f_801108D8(c); // 801F7B30
L_801F7B34:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7B34
  {uint32_t ea=c->r[2]+0xFFFF963Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7B38
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801F7B3C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F7B40
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F7B44
  {uint32_t ea=c->r[2]+0xFFFF9640u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7B48
  c->lr=0x801F7B50u; f_800549D4(c); // 801F7B4C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F7B50
  c->r[0]=0u+0x000000FFu; // 801F7B54
  W8(c->r[31]+0x0000334Cu,c->r[0]); // 801F7B58
  W8(c->r[31]+0x0000334Du,c->r[0]); // 801F7B5C
  W8(c->r[31]+0x0000334Eu,c->r[0]); // 801F7B60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7B64
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801F7B68
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801F7B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F7B70
  W8(c->r[31]+0x0000334Fu,c->r[0]); // 801F7B74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F7B78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F7B7C
  c->lr=c->r[0]; // 801F7B80
  c->r[1]=c->r[1]+0x00000020u; // 801F7B84
  return; // 801F7B88
}

// fn_801F7B8C
void f_801F7B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7B8C
  c->r[0]=c->lr; // 801F7B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F7B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F7B98
  c->r[31]=c->r[3]|c->r[3]; // 801F7B9C
  c->lr=0x801F7BA4u; f_801F79F4(c); // 801F7BA0
  c->r[3]=c->r[31]|c->r[31]; // 801F7BA4
  c->lr=0x801F7BACu; f_801F7AE0(c); // 801F7BA8
  c->r[3]=c->r[31]|c->r[31]; // 801F7BAC
  c->r[4]=c->r[31]+0x00003340u; // 801F7BB0
  c->r[5]=0u+0x00000001u; // 801F7BB4
  c->lr=0x801F7BBCu; f_8019C328(c); // 801F7BB8
  c->r[3]=c->r[31]|c->r[31]; // 801F7BBC
  c->lr=0x801F7BC4u; f_8019C88C(c); // 801F7BC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F7BC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F7BC8
  c->lr=c->r[0]; // 801F7BCC
  c->r[1]=c->r[1]+0x00000010u; // 801F7BD0
  return; // 801F7BD4
}

// fn_801F7BD8
void f_801F7BD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7BD8
  c->r[0]=c->lr; // 801F7BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F7BE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F7BE4
  c->r[31]=c->r[3]|c->r[3]; // 801F7BE8
  c->lr=0x801F7BF0u; f_8019C77C(c); // 801F7BEC
  c->r[3]=0u+0x80470000u; // 801F7BF0
  c->r[3]=c->r[3]+0x00006050u; // 801F7BF4
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801F7BF8
  c->r[0]=c->r[3]+0x00000014u; // 801F7BFC
  W32(c->r[31]+0x00000128u,c->r[0]); // 801F7C00
  c->r[3]=c->r[31]+0x00003340u; // 801F7C04
  c->lr=0x801F7C0Cu; f_8011E990(c); // 801F7C08
  c->r[3]=c->r[31]+0x00003378u; // 801F7C0C
  c->lr=0x801F7C14u; f_80110498(c); // 801F7C10
  c->r[3]=c->r[31]+0x00003340u; // 801F7C14
  c->r[4]=0u+0x00000000u; // 801F7C18
  c->r[5]=0u+0x00000030u; // 801F7C1C
  c->lr=0x801F7C24u; f_800060B8(c); // 801F7C20
  c->r[3]=c->r[31]|c->r[31]; // 801F7C24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F7C28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F7C2C
  c->lr=c->r[0]; // 801F7C30
  c->r[1]=c->r[1]+0x00000010u; // 801F7C34
  return; // 801F7C38
}

// fn_801F7C3C
void f_801F7C3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7C3C
  c->r[0]=c->lr; // 801F7C40
  W32(c->r[1]+0x00000034u,c->r[0]); // 801F7C44
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801F7C48
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801F7C4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F7C50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F7C54
  c->r[30]=c->r[3]|c->r[3]; // 801F7C58
  c->lr=0x801F7C60u; f_8011B41C(c); // 801F7C5C
  c->r[4]=0u+0x00000016u; // 801F7C60
  c->lr=0x801F7C68u; f_8011B814(c); // 801F7C64
  c->r[31]=c->r[3]|c->r[3]; // 801F7C68
  c->r[3]=c->r[1]+0x00000008u; // 801F7C6C
  c->lr=0x801F7C74u; f_8004B0A4(c); // 801F7C70
  c->r[3]=c->r[31]|c->r[31]; // 801F7C74
  c->r[4]=c->r[1]+0x00000008u; // 801F7C78
  c->lr=0x801F7C80u; f_801F9898(c); // 801F7C7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7C80
  {uint32_t ea=c->r[2]+0xFFFF95E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7C84
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F7C88
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F7C8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7C90
  {uint32_t ea=c->r[2]+0xFFFF95ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7C94
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F7C98
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F7C9C
  c->r[3]=c->r[31]|c->r[31]; // 801F7CA0
  c->lr=0x801F7CA8u; f_8012FCB8(c); // 801F7CA4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7CA8
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F7CAC
  c->r[3]=c->r[31]|c->r[31]; // 801F7CB0
  c->lr=0x801F7CB8u; f_8012FCB0(c); // 801F7CB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7CB8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7CBC
  c->r[3]=c->r[30]|c->r[30]; // 801F7CC0
  c->f[2]=c->f[31]; // 801F7CC4
  c->lr=0x801F7CCCu; f_8019CAB4(c); // 801F7CC8
  c->r[3]=c->r[31]|c->r[31]; // 801F7CCC
  c->lr=0x801F7CD4u; f_8012FCD0(c); // 801F7CD0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7CD4
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F7CD8
  c->r[3]=c->r[31]|c->r[31]; // 801F7CDC
  c->lr=0x801F7CE4u; f_8012FCC8(c); // 801F7CE0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7CE4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7CE8
  c->r[3]=c->r[30]|c->r[30]; // 801F7CEC
  c->f[2]=c->f[31]; // 801F7CF0
  c->lr=0x801F7CF8u; f_8019CB34(c); // 801F7CF4
  c->r[3]=c->r[30]|c->r[30]; // 801F7CF8
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7CFC
  c->lr=0x801F7D04u; f_8019CA94(c); // 801F7D00
  c->r[3]=c->r[30]|c->r[30]; // 801F7D04
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7D08
  c->lr=0x801F7D10u; f_8019CA9C(c); // 801F7D0C
  c->r[3]=c->r[31]|c->r[31]; // 801F7D10
  c->lr=0x801F7D18u; f_8012FCE8(c); // 801F7D14
  c->r[3]=c->r[30]|c->r[30]; // 801F7D18
  c->lr=0x801F7D20u; f_8019CAA4(c); // 801F7D1C
  c->r[3]=c->r[31]|c->r[31]; // 801F7D20
  c->lr=0x801F7D28u; f_8012FCF0(c); // 801F7D24
  c->r[3]=c->r[30]|c->r[30]; // 801F7D28
  c->lr=0x801F7D30u; f_8019CAAC(c); // 801F7D2C
  c->r[3]=c->r[31]|c->r[31]; // 801F7D30
  c->lr=0x801F7D38u; f_8012FCE0(c); // 801F7D34
  c->r[4]=c->r[3]|c->r[3]; // 801F7D38
  c->r[3]=c->r[30]|c->r[30]; // 801F7D3C
  c->lr=0x801F7D44u; f_8019C988(c); // 801F7D40
  c->r[3]=c->r[31]|c->r[31]; // 801F7D44
  c->lr=0x801F7D4Cu; f_8012FCF8(c); // 801F7D48
  c->r[3]=c->r[30]+0x00003248u; // 801F7D4C
  c->lr=0x801F7D54u; f_80110580(c); // 801F7D50
  c->r[3]=c->r[31]|c->r[31]; // 801F7D54
  c->lr=0x801F7D5Cu; f_8012FD00(c); // 801F7D58
  c->r[3]=c->r[30]+0x00003290u; // 801F7D5C
  c->lr=0x801F7D64u; f_80110580(c); // 801F7D60
  c->r[3]=c->r[30]+0x000032D8u; // 801F7D64
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7D68
  c->lr=0x801F7D70u; f_80110580(c); // 801F7D6C
  c->r[3]=c->r[31]|c->r[31]; // 801F7D70
  c->lr=0x801F7D78u; f_8012FD08(c); // 801F7D74
  c->r[3]=c->r[30]+0x00003248u; // 801F7D78
  c->lr=0x801F7D80u; f_80110588(c); // 801F7D7C
  c->r[3]=c->r[31]|c->r[31]; // 801F7D80
  c->lr=0x801F7D88u; f_8012FD10(c); // 801F7D84
  c->r[3]=c->r[30]+0x00003290u; // 801F7D88
  c->lr=0x801F7D90u; f_80110588(c); // 801F7D8C
  c->r[3]=c->r[30]+0x000032D8u; // 801F7D90
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7D94
  c->lr=0x801F7D9Cu; f_80110588(c); // 801F7D98
  c->r[3]=c->r[30]|c->r[30]; // 801F7D9C
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7DA0
  c->f[2]=c->f[1]; // 801F7DA4
  c->f[3]=c->f[1]; // 801F7DA8
  c->lr=0x801F7DB0u; f_8011E9F8(c); // 801F7DAC
  c->r[3]=c->r[30]|c->r[30]; // 801F7DB0
  {uint32_t ea=c->r[2]+0xFFFF95F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7DB4
  c->f[2]=c->f[1]; // 801F7DB8
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7DBC
  c->lr=0x801F7DC4u; f_8011E9E8(c); // 801F7DC0
  c->r[3]=c->r[31]|c->r[31]; // 801F7DC4
  c->lr=0x801F7DCCu; f_801F9960(c); // 801F7DC8
  {uint32_t ea=c->r[2]+0xFFFF95FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7DCC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F7DD0
  {uint32_t ea=c->r[2]+0xFFFF9644u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7DD4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F7DD8
  c->r[3]=c->r[30]|c->r[30]; // 801F7DDC
  c->lr=0x801F7DE4u; f_8011EA08(c); // 801F7DE0
  c->r[3]=c->r[30]|c->r[30]; // 801F7DE4
  c->r[4]=0u+0x00000000u; // 801F7DE8
  c->lr=0x801F7DF0u; f_8011EA10(c); // 801F7DEC
  c->r[3]=c->r[30]|c->r[30]; // 801F7DF0
  c->lr=0x801F7DF8u; f_801F8120(c); // 801F7DF4
  c->r[3]=c->r[30]|c->r[30]; // 801F7DF8
  c->r[4]=c->r[30]+0x00003340u; // 801F7DFC
  c->r[5]=0u+0x00000001u; // 801F7E00
  c->lr=0x801F7E08u; f_8019C328(c); // 801F7E04
  c->lr=0x801F7E0Cu; f_8011A9D8(c); // 801F7E08
  c->r[4]=0u+0x00000000u; // 801F7E0C
  c->lr=0x801F7E14u; f_8011AF74(c); // 801F7E10
  c->r[31]=c->r[3]|c->r[3]; // 801F7E14
  c->lr=0x801F7E1Cu; f_8011A6E8(c); // 801F7E18
  c->r[4]=c->r[31]|c->r[31]; // 801F7E1C
  c->lr=0x801F7E24u; f_8011A9B0(c); // 801F7E20
  c->lr=0x801F7E28u; f_8012DA20(c); // 801F7E24
  c->r[4]=c->r[3]|c->r[3]; // 801F7E28
  c->r[3]=c->r[30]|c->r[30]; // 801F7E2C
  c->lr=0x801F7E34u; f_8011E988(c); // 801F7E30
  c->r[3]=c->r[30]|c->r[30]; // 801F7E34
  c->r[4]=0u+0x00000003u; // 801F7E38
  c->lr=0x801F7E40u; f_8011E980(c); // 801F7E3C
  c->r[3]=c->r[30]|c->r[30]; // 801F7E40
  c->r[4]=0u+0x00000016u; // 801F7E44
  c->r[5]=0u+0x00000000u; // 801F7E48
  c->lr=0x801F7E50u; f_8019BEF0(c); // 801F7E4C
  c->r[3]=c->r[30]+0x00003378u; // 801F7E50
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7E54
  c->lr=0x801F7E5Cu; f_80110560(c); // 801F7E58
  c->r[3]=c->r[30]+0x00003378u; // 801F7E5C
  {uint32_t ea=c->r[2]+0xFFFF9638u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7E60
  c->lr=0x801F7E68u; f_80110568(c); // 801F7E64
  c->r[3]=c->r[30]+0x00003378u; // 801F7E68
  c->r[4]=0u+0x00000000u; // 801F7E6C
  c->lr=0x801F7E74u; f_80110578(c); // 801F7E70
  c->r[3]=c->r[30]+0x00003378u; // 801F7E74
  c->r[4]=0u+0x00000001u; // 801F7E78
  c->lr=0x801F7E80u; f_80110570(c); // 801F7E7C
  c->r[0]=0u+0x00000028u; // 801F7E80
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F7E84
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801F7E88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F7E8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F7E90
  c->r[0]=R32(c->r[1]+0x00000034u); // 801F7E94
  c->lr=c->r[0]; // 801F7E98
  c->r[1]=c->r[1]+0x00000030u; // 801F7E9C
  return; // 801F7EA0
}

// fn_801F7EA4
void f_801F7EA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F7EA4
  c->r[0]=c->lr; // 801F7EA8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801F7EAC
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801F7EB0
  W32(c->r[1]+0x00000098u,c->r[30]); // 801F7EB4
  c->r[30]=c->r[3]|c->r[3]; // 801F7EB8
  c->r[3]=c->r[1]+0x00000088u; // 801F7EBC
  c->lr=0x801F7EC4u; f_8004B0A4(c); // 801F7EC0
  c->r[3]=c->r[1]+0x0000007Cu; // 801F7EC4
  c->lr=0x801F7ECCu; f_8004B0A4(c); // 801F7EC8
  c->r[3]=c->r[1]+0x00000070u; // 801F7ECC
  c->lr=0x801F7ED4u; f_8004B0A4(c); // 801F7ED0
  c->r[3]=c->r[1]+0x00000064u; // 801F7ED4
  c->lr=0x801F7EDCu; f_8004B0A4(c); // 801F7ED8
  c->r[3]=c->r[1]+0x00000058u; // 801F7EDC
  c->lr=0x801F7EE4u; f_8004B0A4(c); // 801F7EE0
  c->r[3]=c->r[1]+0x00000048u; // 801F7EE4
  c->lr=0x801F7EECu; f_80120304(c); // 801F7EE8
  c->r[3]=c->r[1]+0x00000038u; // 801F7EEC
  c->lr=0x801F7EF4u; f_80120304(c); // 801F7EF0
  c->lr=0x801F7EF8u; f_8011B41C(c); // 801F7EF4
  c->r[4]=0u+0x00000016u; // 801F7EF8
  c->lr=0x801F7F00u; f_8011B814(c); // 801F7EFC
  c->r[31]=c->r[3]|c->r[3]; // 801F7F00
  c->r[3]=c->r[1]+0x00000028u; // 801F7F04
  c->lr=0x801F7F0Cu; f_8004B0A4(c); // 801F7F08
  c->r[3]=c->r[31]|c->r[31]; // 801F7F0C
  c->r[4]=c->r[1]+0x00000028u; // 801F7F10
  c->lr=0x801F7F18u; f_801F9898(c); // 801F7F14
  c->r[3]=c->r[31]|c->r[31]; // 801F7F18
  c->lr=0x801F7F20u; f_8012FCC8(c); // 801F7F1C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7F20
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7F24
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 801F7F28
  c->r[3]=c->r[31]|c->r[31]; // 801F7F2C
  c->lr=0x801F7F34u; f_8012FCD0(c); // 801F7F30
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7F34
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7F38
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 801F7F3C
  c->lr=0x801F7F44u; f_801F99D4(c); // 801F7F40
  c->lr=0x801F7F48u; f_801F9B3C(c); // 801F7F44
  c->r[4]=c->r[3]|c->r[3]; // 801F7F48
  c->r[3]=c->r[1]+0x00000088u; // 801F7F4C
  c->lr=0x801F7F54u; f_8004A65C(c); // 801F7F50
  c->r[3]=c->r[1]+0x00000064u; // 801F7F54
  c->r[4]=c->r[1]+0x00000088u; // 801F7F58
  c->lr=0x801F7F60u; f_801F6CAC(c); // 801F7F5C
  c->lr=0x801F7F64u; f_801F99D4(c); // 801F7F60
  c->lr=0x801F7F68u; f_801F9B8C(c); // 801F7F64
  c->r[4]=c->r[3]|c->r[3]; // 801F7F68
  c->r[3]=c->r[1]+0x00000088u; // 801F7F6C
  c->lr=0x801F7F74u; f_8004A65C(c); // 801F7F70
  c->r[3]=c->r[1]+0x00000070u; // 801F7F74
  c->r[4]=c->r[1]+0x00000088u; // 801F7F78
  c->lr=0x801F7F80u; f_801F6CAC(c); // 801F7F7C
  c->r[3]=c->r[31]|c->r[31]; // 801F7F80
  c->lr=0x801F7F88u; f_8012FCC8(c); // 801F7F84
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7F88
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F7F8C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7F90
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7F94
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F7F98
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[2]); // 801F7F9C
  {uint32_t ea=c->r[2]+0xFFFF9648u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FA0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F7FA4
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 801F7FA8
  c->r[3]=c->r[31]|c->r[31]; // 801F7FAC
  c->lr=0x801F7FB4u; f_8012FCD0(c); // 801F7FB0
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FB4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F7FB8
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F7FBC
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FC0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F7FC4
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[2]); // 801F7FC8
  {uint32_t ea=c->r[2]+0xFFFF964Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FCC
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[1]); // 801F7FD0
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[4]);} // 801F7FD4
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FD8
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801F7FDC
  c->r[3]=c->r[1]+0x00000018u; // 801F7FE0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F7FE4
  {uint32_t ea=c->r[30]+0x00003360u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FE8
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[0]); // 801F7FEC
  {uint32_t ea=c->r[30]+0x00003364u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FF0
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[0]); // 801F7FF4
  {uint32_t ea=c->r[30]+0x00003368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F7FF8
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 801F7FFC
  {uint32_t ea=c->r[30]+0x0000336Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8000
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 801F8004
  c->lr=0x801F800Cu; f_80120288(c); // 801F8008
  c->r[3]=c->r[1]+0x00000048u; // 801F800C
  c->r[4]=c->r[1]+0x00000018u; // 801F8010
  c->lr=0x801F8018u; f_80120208(c); // 801F8014
  c->r[3]=c->r[1]+0x00000018u; // 801F8018
  c->r[4]=0u+0xFFFFFFFFu; // 801F801C
  c->lr=0x801F8024u; f_8012005C(c); // 801F8020
  c->r[3]=c->r[1]+0x00000008u; // 801F8024
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801F8028
  {uint32_t ea=c->r[2]+0xFFFF962Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F802C
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[3]); // 801F8030
  {uint32_t ea=c->r[1]+0x00000080u; c->f[4]=c->ps1[4]=RF32(ea);} // 801F8034
  {uint32_t ea=c->r[2]+0xFFFF9630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8038
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[0]); // 801F803C
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 801F8040
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[4]); // 801F8044
  c->lr=0x801F804Cu; f_80120288(c); // 801F8048
  c->r[3]=c->r[1]+0x00000038u; // 801F804C
  c->r[4]=c->r[1]+0x00000008u; // 801F8050
  c->lr=0x801F8058u; f_80120208(c); // 801F8054
  c->r[3]=c->r[1]+0x00000008u; // 801F8058
  c->r[4]=0u+0xFFFFFFFFu; // 801F805C
  c->lr=0x801F8064u; f_8012005C(c); // 801F8060
  c->r[3]=c->r[1]+0x00000048u; // 801F8064
  c->r[4]=c->r[1]+0x00000038u; // 801F8068
  c->lr=0x801F8070u; f_801200B8(c); // 801F806C
  c->r[0]=cntlz(c->r[3]); // 801F8070
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801F8074
  c->r[3]=c->r[1]+0x00000038u; // 801F8078
  c->r[4]=0u+0xFFFFFFFFu; // 801F807C
  c->lr=0x801F8084u; f_8012005C(c); // 801F8080
  c->r[3]=c->r[1]+0x00000048u; // 801F8084
  c->r[4]=0u+0xFFFFFFFFu; // 801F8088
  c->lr=0x801F8090u; f_8012005C(c); // 801F808C
  c->r[3]=c->r[31]|c->r[31]; // 801F8090
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801F8094
  c->r[30]=R32(c->r[1]+0x00000098u); // 801F8098
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801F809C
  c->lr=c->r[0]; // 801F80A0
  c->r[1]=c->r[1]+0x000000A0u; // 801F80A4
  return; // 801F80A8
}

// fn_801F80AC
void f_801F80AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F80AC
  c->r[0]=c->lr; // 801F80B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F80B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F80B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F80BC
  c->r[30]=c->r[3]|c->r[3]; // 801F80C0
  c->r[31]=c->r[4]|c->r[4]; // 801F80C4
  c->r[0]=R32(c->r[3]+0x00003370u); // 801F80C8
  cmps(c,0,(int32_t)c->r[0],0); // 801F80CC
  if (crb(c,2)) { goto L_801F80E0; } // 801F80D0
  c->r[4]=0u+0x00000000u; // 801F80D4
  c->lr=0x801F80DCu; f_8019C940(c); // 801F80D8
  goto L_801F8108; // 801F80DC
L_801F80E0:;
  c->lr=0x801F80E4u; f_801F7EA4(c); // 801F80E0
  cmps(c,0,(int32_t)c->r[3],0); // 801F80E4
  if (crb(c,2)) { goto L_801F80FC; } // 801F80E8
  c->r[3]=c->r[30]|c->r[30]; // 801F80EC
  c->r[4]=c->r[31]|c->r[31]; // 801F80F0
  c->lr=0x801F80F8u; f_8019C940(c); // 801F80F4
  goto L_801F8108; // 801F80F8
L_801F80FC:;
  c->r[3]=c->r[30]|c->r[30]; // 801F80FC
  c->r[4]=0u+0x00000000u; // 801F8100
  c->lr=0x801F8108u; f_8019C940(c); // 801F8104
L_801F8108:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F8108
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F810C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8110
  c->lr=c->r[0]; // 801F8114
  c->r[1]=c->r[1]+0x00000010u; // 801F8118
  return; // 801F811C
}

// fn_801F8120
void f_801F8120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8120
  c->r[0]=c->lr; // 801F8124
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F8128
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801F812C
  W32(c->r[1]+0x00000048u,c->r[30]); // 801F8130
  c->r[30]=c->r[3]|c->r[3]; // 801F8134
  c->r[3]=c->r[1]+0x00000038u; // 801F8138
  c->lr=0x801F8140u; f_8004B0A4(c); // 801F813C
  c->r[3]=c->r[1]+0x0000002Cu; // 801F8140
  c->lr=0x801F8148u; f_8004B0A4(c); // 801F8144
  c->r[3]=c->r[1]+0x00000020u; // 801F8148
  c->lr=0x801F8150u; f_8004B0A4(c); // 801F814C
  c->r[3]=c->r[1]+0x00000014u; // 801F8150
  c->lr=0x801F8158u; f_8004B0A4(c); // 801F8154
  c->lr=0x801F815Cu; f_801F99D4(c); // 801F8158
  c->lr=0x801F8160u; f_801F9B3C(c); // 801F815C
  c->r[4]=c->r[3]|c->r[3]; // 801F8160
  c->r[3]=c->r[1]+0x00000038u; // 801F8164
  c->lr=0x801F816Cu; f_8004A65C(c); // 801F8168
  c->r[3]=c->r[1]+0x0000002Cu; // 801F816C
  c->r[4]=c->r[1]+0x00000038u; // 801F8170
  c->lr=0x801F8178u; f_801F6CAC(c); // 801F8174
  c->lr=0x801F817Cu; f_801F99D4(c); // 801F8178
  c->lr=0x801F8180u; f_801F9B8C(c); // 801F817C
  c->r[4]=c->r[3]|c->r[3]; // 801F8180
  c->r[3]=c->r[1]+0x00000038u; // 801F8184
  c->lr=0x801F818Cu; f_8004A65C(c); // 801F8188
  c->r[3]=c->r[1]+0x00000020u; // 801F818C
  c->r[4]=c->r[1]+0x00000038u; // 801F8190
  c->lr=0x801F8198u; f_801F6CAC(c); // 801F8194
  c->lr=0x801F819Cu; f_8011B41C(c); // 801F8198
  c->r[4]=0u+0x00000016u; // 801F819C
  c->lr=0x801F81A4u; f_8011B814(c); // 801F81A0
  c->r[31]=c->r[3]|c->r[3]; // 801F81A4
  c->r[3]=c->r[1]+0x00000008u; // 801F81A8
  c->lr=0x801F81B0u; f_8004B0A4(c); // 801F81AC
  c->r[3]=c->r[31]|c->r[31]; // 801F81B0
  c->r[4]=c->r[1]+0x00000008u; // 801F81B4
  c->lr=0x801F81BCu; f_801F9898(c); // 801F81B8
  c->r[3]=c->r[31]|c->r[31]; // 801F81BC
  c->lr=0x801F81C4u; f_8012FCC8(c); // 801F81C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F81C4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F81C8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F81CC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F81D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F81D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801F81D8
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801F81DC
  c->r[3]=c->r[31]|c->r[31]; // 801F81E0
  c->lr=0x801F81E8u; f_8012FCD0(c); // 801F81E4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F81E8
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F81EC
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F81F0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F81F4
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F81F8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801F81FC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801F8200
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F8204
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[2]);} // 801F8208
  {uint32_t ea=c->r[2]+0xFFFF9648u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F820C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8210
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F8214
  {uint32_t ea=c->r[30]+0x00003340u; WF32(ea,c->f[0]);} // 801F8218
  {uint32_t ea=c->r[2]+0xFFFF964Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F821C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8220
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F8224
  {uint32_t ea=c->r[30]+0x00003344u; WF32(ea,c->f[0]);} // 801F8228
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F822C
  {uint32_t ea=c->r[30]+0x00003348u; WF32(ea,c->f[0]);} // 801F8230
  {uint32_t ea=c->r[2]+0xFFFF9608u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8234
  {uint32_t ea=c->r[30]+0x00003360u; WF32(ea,c->f[0]);} // 801F8238
  {uint32_t ea=c->r[30]+0x00003364u; WF32(ea,c->f[0]);} // 801F823C
  {uint32_t ea=c->r[30]+0x00003368u; WF32(ea,c->f[0]);} // 801F8240
  {uint32_t ea=c->r[30]+0x0000336Cu; WF32(ea,c->f[0]);} // 801F8244
  {uint32_t ea=c->r[30]+0x00003350u; WF32(ea,c->f[2]);} // 801F8248
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F824C
  {uint32_t ea=c->r[30]+0x00003354u; WF32(ea,c->f[0]);} // 801F8250
  {uint32_t ea=c->r[30]+0x00003358u; WF32(ea,c->f[2]);} // 801F8254
  {uint32_t ea=c->r[30]+0x0000335Cu; WF32(ea,c->f[0]);} // 801F8258
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801F825C
  c->r[30]=R32(c->r[1]+0x00000048u); // 801F8260
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F8264
  c->lr=c->r[0]; // 801F8268
  c->r[1]=c->r[1]+0x00000050u; // 801F826C
  return; // 801F8270
}

// fn_801F8274
void f_801F8274(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8274
  c->r[0]=c->lr; // 801F8278
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F827C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F8280
  c->r[31]=c->r[3]|c->r[3]; // 801F8284
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8288
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F828C
  c->r[3]=c->r[3]+0x00003378u; // 801F8290
  c->lr=0x801F8298u; f_801105F8(c); // 801F8294
  cmps(c,0,(int32_t)c->r[3],0); // 801F8298
  if (!crb(c,2)) { goto L_801F82BC; } // 801F829C
  c->r[3]=c->r[31]+0x00003378u; // 801F82A0
  c->r[4]=0u+0x00000001u; // 801F82A4
  c->lr=0x801F82ACu; f_80110570(c); // 801F82A8
  c->r[3]=c->r[31]+0x00003378u; // 801F82AC
  {uint32_t ea=c->r[2]+0xFFFF95D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F82B0
  c->lr=0x801F82B8u; f_80110590(c); // 801F82B4
  goto L_801F82C8; // 801F82B8
L_801F82BC:;
  c->r[3]=c->r[31]+0x00003378u; // 801F82BC
  c->r[4]=c->r[1]+0x00000008u; // 801F82C0
  c->lr=0x801F82C8u; f_801108D8(c); // 801F82C4
L_801F82C8:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F82C8
  {uint32_t ea=c->r[2]+0xFFFF963Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F82CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801F82D0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F82D4
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F82D8
  {uint32_t ea=c->r[2]+0xFFFF9640u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F82DC
  c->lr=0x801F82E4u; f_800549D4(c); // 801F82E0
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F82E4
  c->r[0]=0u+0x000000FFu; // 801F82E8
  W8(c->r[31]+0x0000334Cu,c->r[0]); // 801F82EC
  W8(c->r[31]+0x0000334Du,c->r[0]); // 801F82F0
  W8(c->r[31]+0x0000334Eu,c->r[0]); // 801F82F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F82F8
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801F82FC
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801F8300
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8304
  W8(c->r[31]+0x0000334Fu,c->r[0]); // 801F8308
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F830C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F8310
  c->lr=c->r[0]; // 801F8314
  c->r[1]=c->r[1]+0x00000020u; // 801F8318
  return; // 801F831C
}

// fn_801F8320
void f_801F8320(Ctx* __restrict c) {
  W32(c->r[3]+0x00003370u,c->r[4]); // 801F8320
  return; // 801F8324
}

// fn_801F8328
void f_801F8328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8328
  c->r[0]=c->lr; // 801F832C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F8334
  c->r[31]=c->r[3]|c->r[3]; // 801F8338
  c->lr=0x801F8340u; f_801F8120(c); // 801F833C
  c->r[3]=c->r[31]|c->r[31]; // 801F8340
  c->r[4]=0u+0x00000001u; // 801F8344
  c->lr=0x801F834Cu; f_801F80AC(c); // 801F8348
  c->r[3]=c->r[31]|c->r[31]; // 801F834C
  c->lr=0x801F8354u; f_801F8274(c); // 801F8350
  c->r[3]=c->r[31]|c->r[31]; // 801F8354
  c->r[4]=c->r[31]+0x00003340u; // 801F8358
  c->r[5]=0u+0x00000001u; // 801F835C
  c->lr=0x801F8364u; f_8019C328(c); // 801F8360
  c->r[3]=c->r[31]|c->r[31]; // 801F8364
  c->lr=0x801F836Cu; f_8019C88C(c); // 801F8368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F836C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8370
  c->lr=c->r[0]; // 801F8374
  c->r[1]=c->r[1]+0x00000010u; // 801F8378
  return; // 801F837C
}

// fn_801F8380
void f_801F8380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8380
  c->r[0]=c->lr; // 801F8384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F838C
  c->r[31]=c->r[3]|c->r[3]; // 801F8390
  c->lr=0x801F8398u; f_8019C77C(c); // 801F8394
  c->r[3]=0u+0x80470000u; // 801F8398
  c->r[3]=c->r[3]+0x00005FC8u; // 801F839C
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801F83A0
  c->r[0]=c->r[3]+0x00000014u; // 801F83A4
  W32(c->r[31]+0x00000128u,c->r[0]); // 801F83A8
  c->r[3]=c->r[31]+0x00003340u; // 801F83AC
  c->lr=0x801F83B4u; f_8011E990(c); // 801F83B0
  c->r[3]=c->r[31]+0x00003378u; // 801F83B4
  c->lr=0x801F83BCu; f_80110498(c); // 801F83B8
  c->r[3]=c->r[31]+0x00003340u; // 801F83BC
  c->r[4]=0u+0x00000000u; // 801F83C0
  c->r[5]=0u+0x00000030u; // 801F83C4
  c->lr=0x801F83CCu; f_800060B8(c); // 801F83C8
  c->r[0]=0u+0xFFFFFFFFu; // 801F83CC
  W32(c->r[31]+0x00003370u,c->r[0]); // 801F83D0
  c->r[0]=0u+0x00000001u; // 801F83D4
  W32(c->r[31]+0x00003374u,c->r[0]); // 801F83D8
  c->r[3]=c->r[31]|c->r[31]; // 801F83DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F83E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F83E4
  c->lr=c->r[0]; // 801F83E8
  c->r[1]=c->r[1]+0x00000010u; // 801F83EC
  return; // 801F83F0
}

// fn_801F83F4
void f_801F83F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F83F4
  c->r[0]=c->lr; // 801F83F8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801F83FC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801F8400
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801F8404
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801F8408
  W32(c->r[1]+0x00000028u,c->r[30]); // 801F840C
  c->r[30]=c->r[3]|c->r[3]; // 801F8410
  c->lr=0x801F8418u; f_8011B41C(c); // 801F8414
  c->r[4]=0u+0x00000016u; // 801F8418
  c->lr=0x801F8420u; f_8011B814(c); // 801F841C
  c->r[31]=c->r[3]|c->r[3]; // 801F8420
  c->r[3]=c->r[1]+0x00000008u; // 801F8424
  c->lr=0x801F842Cu; f_8004B0A4(c); // 801F8428
  c->r[3]=c->r[31]|c->r[31]; // 801F842C
  c->r[4]=c->r[1]+0x00000008u; // 801F8430
  c->lr=0x801F8438u; f_801F9898(c); // 801F8434
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8438
  {uint32_t ea=c->r[2]+0xFFFF95E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F843C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F8440
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F8444
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8448
  {uint32_t ea=c->r[2]+0xFFFF95ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F844C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 801F8450
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 801F8454
  c->r[3]=c->r[31]|c->r[31]; // 801F8458
  c->lr=0x801F8460u; f_8012FCB8(c); // 801F845C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8460
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F8464
  c->r[3]=c->r[31]|c->r[31]; // 801F8468
  c->lr=0x801F8470u; f_8012FCB0(c); // 801F846C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8470
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F8474
  c->r[3]=c->r[30]|c->r[30]; // 801F8478
  c->f[2]=c->f[31]; // 801F847C
  c->lr=0x801F8484u; f_8019CAB4(c); // 801F8480
  c->r[3]=c->r[31]|c->r[31]; // 801F8484
  c->lr=0x801F848Cu; f_8012FCD0(c); // 801F8488
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F848C
  c->f[31]=c->ps1[31]=S(c->f[0]+c->f[1]); // 801F8490
  c->r[3]=c->r[31]|c->r[31]; // 801F8494
  c->lr=0x801F849Cu; f_8012FCC8(c); // 801F8498
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F849C
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801F84A0
  c->r[3]=c->r[30]|c->r[30]; // 801F84A4
  c->f[2]=c->f[31]; // 801F84A8
  c->lr=0x801F84B0u; f_8019CB34(c); // 801F84AC
  c->r[3]=c->r[30]|c->r[30]; // 801F84B0
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F84B4
  c->lr=0x801F84BCu; f_8019CA94(c); // 801F84B8
  c->r[3]=c->r[30]|c->r[30]; // 801F84BC
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F84C0
  c->lr=0x801F84C8u; f_8019CA9C(c); // 801F84C4
  c->r[3]=c->r[31]|c->r[31]; // 801F84C8
  c->lr=0x801F84D0u; f_8012FCE8(c); // 801F84CC
  c->r[3]=c->r[30]|c->r[30]; // 801F84D0
  c->lr=0x801F84D8u; f_8019CAA4(c); // 801F84D4
  c->r[3]=c->r[31]|c->r[31]; // 801F84D8
  c->lr=0x801F84E0u; f_8012FCF0(c); // 801F84DC
  c->r[3]=c->r[30]|c->r[30]; // 801F84E0
  c->lr=0x801F84E8u; f_8019CAAC(c); // 801F84E4
  c->r[3]=c->r[31]|c->r[31]; // 801F84E8
  c->lr=0x801F84F0u; f_8012FCE0(c); // 801F84EC
  c->r[4]=c->r[3]|c->r[3]; // 801F84F0
  c->r[3]=c->r[30]|c->r[30]; // 801F84F4
  c->lr=0x801F84FCu; f_8019C988(c); // 801F84F8
  c->r[3]=c->r[31]|c->r[31]; // 801F84FC
  c->lr=0x801F8504u; f_8012FCF8(c); // 801F8500
  c->r[3]=c->r[30]+0x00003248u; // 801F8504
  c->lr=0x801F850Cu; f_80110580(c); // 801F8508
  c->r[3]=c->r[31]|c->r[31]; // 801F850C
  c->lr=0x801F8514u; f_8012FD00(c); // 801F8510
  c->r[3]=c->r[30]+0x00003290u; // 801F8514
  c->lr=0x801F851Cu; f_80110580(c); // 801F8518
  c->r[3]=c->r[30]+0x000032D8u; // 801F851C
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8520
  c->lr=0x801F8528u; f_80110580(c); // 801F8524
  c->r[3]=c->r[31]|c->r[31]; // 801F8528
  c->lr=0x801F8530u; f_8012FD08(c); // 801F852C
  c->r[3]=c->r[30]+0x00003248u; // 801F8530
  c->lr=0x801F8538u; f_80110588(c); // 801F8534
  c->r[3]=c->r[31]|c->r[31]; // 801F8538
  c->lr=0x801F8540u; f_8012FD10(c); // 801F853C
  c->r[3]=c->r[30]+0x00003290u; // 801F8540
  c->lr=0x801F8548u; f_80110588(c); // 801F8544
  c->r[3]=c->r[30]+0x000032D8u; // 801F8548
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F854C
  c->lr=0x801F8554u; f_80110588(c); // 801F8550
  c->r[3]=c->r[30]|c->r[30]; // 801F8554
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8558
  c->f[2]=c->f[1]; // 801F855C
  c->f[3]=c->f[1]; // 801F8560
  c->lr=0x801F8568u; f_8011E9F8(c); // 801F8564
  c->r[3]=c->r[30]|c->r[30]; // 801F8568
  {uint32_t ea=c->r[2]+0xFFFF95F4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F856C
  c->f[2]=c->f[1]; // 801F8570
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F8574
  c->lr=0x801F857Cu; f_8011E9E8(c); // 801F8578
  c->r[3]=c->r[31]|c->r[31]; // 801F857C
  c->lr=0x801F8584u; f_801F9960(c); // 801F8580
  {uint32_t ea=c->r[2]+0xFFFF95FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8584
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801F8588
  {uint32_t ea=c->r[2]+0xFFFF9654u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F858C
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F8590
  c->r[0]=R32(c->r[30]+0x00003370u); // 801F8594
  {uint32_t ea=c->r[2]+0xFFFF9658u; c->f[1]=RF64(ea);} // 801F8598
  c->r[0]=c->r[0]^0x80000000u; // 801F859C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801F85A0
  c->r[0]=0u+0x43300000u; // 801F85A4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801F85A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801F85AC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801F85B0
  {uint32_t ea=c->r[2]+0xFFFF9650u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F85B4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F85B8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[2]); // 801F85BC
  c->r[3]=c->r[30]|c->r[30]; // 801F85C0
  c->lr=0x801F85C8u; f_8011EA08(c); // 801F85C4
  c->r[3]=c->r[30]|c->r[30]; // 801F85C8
  c->r[4]=0u+0x00000000u; // 801F85CC
  c->lr=0x801F85D4u; f_8011EA10(c); // 801F85D0
  c->r[3]=c->r[30]|c->r[30]; // 801F85D4
  c->lr=0x801F85DCu; f_801F88F8(c); // 801F85D8
  c->r[3]=c->r[30]|c->r[30]; // 801F85DC
  c->r[4]=c->r[30]+0x00003340u; // 801F85E0
  c->r[5]=0u+0x00000001u; // 801F85E4
  c->lr=0x801F85ECu; f_8019C328(c); // 801F85E8
  c->lr=0x801F85F0u; f_8011A9D8(c); // 801F85EC
  c->r[4]=0u+0x00000000u; // 801F85F0
  c->lr=0x801F85F8u; f_8011AF74(c); // 801F85F4
  c->r[31]=c->r[3]|c->r[3]; // 801F85F8
  c->lr=0x801F8600u; f_8011A6E8(c); // 801F85FC
  c->r[4]=c->r[31]|c->r[31]; // 801F8600
  c->lr=0x801F8608u; f_8011A9B0(c); // 801F8604
  c->lr=0x801F860Cu; f_8012DA20(c); // 801F8608
  c->r[4]=c->r[3]|c->r[3]; // 801F860C
  c->r[3]=c->r[30]|c->r[30]; // 801F8610
  c->lr=0x801F8618u; f_8011E988(c); // 801F8614
  c->r[3]=c->r[30]|c->r[30]; // 801F8618
  c->r[4]=0u+0x00000004u; // 801F861C
  c->lr=0x801F8624u; f_8011E980(c); // 801F8620
  c->r[3]=c->r[30]|c->r[30]; // 801F8624
  c->r[4]=0u+0x00000016u; // 801F8628
  c->r[5]=0u+0x00000000u; // 801F862C
  c->lr=0x801F8634u; f_8019BEF0(c); // 801F8630
  c->r[3]=c->r[30]+0x00003378u; // 801F8634
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8638
  c->lr=0x801F8640u; f_80110560(c); // 801F863C
  c->r[3]=c->r[30]+0x00003378u; // 801F8640
  {uint32_t ea=c->r[2]+0xFFFF9638u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8644
  c->lr=0x801F864Cu; f_80110568(c); // 801F8648
  c->r[3]=c->r[30]+0x00003378u; // 801F864C
  c->r[4]=0u+0x00000000u; // 801F8650
  c->lr=0x801F8658u; f_80110578(c); // 801F8654
  c->r[3]=c->r[30]+0x00003378u; // 801F8658
  c->r[4]=0u+0x00000001u; // 801F865C
  c->lr=0x801F8664u; f_80110570(c); // 801F8660
  c->r[0]=0u+0x00000038u; // 801F8664
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F8668
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801F866C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801F8670
  c->r[30]=R32(c->r[1]+0x00000028u); // 801F8674
  c->r[0]=R32(c->r[1]+0x00000044u); // 801F8678
  c->lr=c->r[0]; // 801F867C
  c->r[1]=c->r[1]+0x00000040u; // 801F8680
  return; // 801F8684
}

// fn_801F8688
void f_801F8688(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8688
  c->r[0]=c->lr; // 801F868C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801F8690
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 801F8694
  W32(c->r[1]+0x00000098u,c->r[30]); // 801F8698
  c->r[30]=c->r[3]|c->r[3]; // 801F869C
  c->r[3]=c->r[1]+0x00000088u; // 801F86A0
  c->lr=0x801F86A8u; f_8004B0A4(c); // 801F86A4
  c->r[3]=c->r[1]+0x0000007Cu; // 801F86A8
  c->lr=0x801F86B0u; f_8004B0A4(c); // 801F86AC
  c->r[3]=c->r[1]+0x00000070u; // 801F86B0
  c->lr=0x801F86B8u; f_8004B0A4(c); // 801F86B4
  c->r[3]=c->r[1]+0x00000064u; // 801F86B8
  c->lr=0x801F86C0u; f_8004B0A4(c); // 801F86BC
  c->r[3]=c->r[1]+0x00000058u; // 801F86C0
  c->lr=0x801F86C8u; f_8004B0A4(c); // 801F86C4
  c->r[3]=c->r[1]+0x00000048u; // 801F86C8
  c->lr=0x801F86D0u; f_80120304(c); // 801F86CC
  c->r[3]=c->r[1]+0x00000038u; // 801F86D0
  c->lr=0x801F86D8u; f_80120304(c); // 801F86D4
  c->lr=0x801F86DCu; f_8011B41C(c); // 801F86D8
  c->r[4]=0u+0x00000016u; // 801F86DC
  c->lr=0x801F86E4u; f_8011B814(c); // 801F86E0
  c->r[31]=c->r[3]|c->r[3]; // 801F86E4
  c->r[3]=c->r[1]+0x00000028u; // 801F86E8
  c->lr=0x801F86F0u; f_8004B0A4(c); // 801F86EC
  c->r[3]=c->r[31]|c->r[31]; // 801F86F0
  c->r[4]=c->r[1]+0x00000028u; // 801F86F4
  c->lr=0x801F86FCu; f_801F9898(c); // 801F86F8
  c->r[3]=c->r[31]|c->r[31]; // 801F86FC
  c->lr=0x801F8704u; f_8012FCC8(c); // 801F8700
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8704
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F8708
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 801F870C
  c->r[3]=c->r[31]|c->r[31]; // 801F8710
  c->lr=0x801F8718u; f_8012FCD0(c); // 801F8714
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8718
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801F871C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 801F8720
  c->lr=0x801F8728u; f_801F99D4(c); // 801F8724
  c->lr=0x801F872Cu; f_801F9B3C(c); // 801F8728
  c->r[4]=c->r[3]|c->r[3]; // 801F872C
  c->r[3]=c->r[1]+0x00000088u; // 801F8730
  c->lr=0x801F8738u; f_8004A65C(c); // 801F8734
  c->r[3]=c->r[1]+0x00000064u; // 801F8738
  c->r[4]=c->r[1]+0x00000088u; // 801F873C
  c->lr=0x801F8744u; f_801F6CAC(c); // 801F8740
  c->lr=0x801F8748u; f_801F99D4(c); // 801F8744
  c->r[4]=R32(c->r[30]+0x00003370u); // 801F8748
  c->lr=0x801F8750u; f_801F9C04(c); // 801F874C
  c->r[4]=c->r[3]|c->r[3]; // 801F8750
  c->r[3]=c->r[1]+0x00000088u; // 801F8754
  c->lr=0x801F875Cu; f_8004A65C(c); // 801F8758
  c->r[3]=c->r[1]+0x00000070u; // 801F875C
  c->r[4]=c->r[1]+0x00000088u; // 801F8760
  c->lr=0x801F8768u; f_801F6CAC(c); // 801F8764
  c->r[3]=c->r[31]|c->r[31]; // 801F8768
  c->lr=0x801F8770u; f_8012FCC8(c); // 801F876C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8770
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F8774
  {uint32_t ea=c->r[1]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8778
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F877C
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F8780
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801F8784
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 801F8788
  c->r[3]=c->r[31]|c->r[31]; // 801F878C
  c->lr=0x801F8794u; f_8012FCD0(c); // 801F8790
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8794
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F8798
  {uint32_t ea=c->r[1]+0x00000074u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F879C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F87A0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F87A4
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[2]); // 801F87A8
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[4]);} // 801F87AC
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F87B0
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 801F87B4
  c->r[3]=c->r[1]+0x00000018u; // 801F87B8
  {uint32_t ea=c->r[1]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F87BC
  {uint32_t ea=c->r[30]+0x00003360u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F87C0
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[0]); // 801F87C4
  {uint32_t ea=c->r[30]+0x00003364u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F87C8
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[0]); // 801F87CC
  {uint32_t ea=c->r[30]+0x00003368u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F87D0
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[0]); // 801F87D4
  {uint32_t ea=c->r[30]+0x0000336Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F87D8
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[0]); // 801F87DC
  c->lr=0x801F87E4u; f_80120288(c); // 801F87E0
  c->r[3]=c->r[1]+0x00000048u; // 801F87E4
  c->r[4]=c->r[1]+0x00000018u; // 801F87E8
  c->lr=0x801F87F0u; f_80120208(c); // 801F87EC
  c->r[3]=c->r[1]+0x00000018u; // 801F87F0
  c->r[4]=0u+0xFFFFFFFFu; // 801F87F4
  c->lr=0x801F87FCu; f_8012005C(c); // 801F87F8
  c->r[3]=c->r[1]+0x00000008u; // 801F87FC
  {uint32_t ea=c->r[1]+0x0000007Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801F8800
  {uint32_t ea=c->r[2]+0xFFFF962Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801F8804
  c->f[1]=c->ps1[1]=S(c->f[5]-c->f[3]); // 801F8808
  {uint32_t ea=c->r[1]+0x00000080u; c->f[4]=c->ps1[4]=RF32(ea);} // 801F880C
  {uint32_t ea=c->r[2]+0xFFFF9630u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8810
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[0]); // 801F8814
  c->f[3]=c->ps1[3]=S(c->f[3]+c->f[5]); // 801F8818
  c->f[4]=c->ps1[4]=S(c->f[0]+c->f[4]); // 801F881C
  c->lr=0x801F8824u; f_80120288(c); // 801F8820
  c->r[3]=c->r[1]+0x00000038u; // 801F8824
  c->r[4]=c->r[1]+0x00000008u; // 801F8828
  c->lr=0x801F8830u; f_80120208(c); // 801F882C
  c->r[3]=c->r[1]+0x00000008u; // 801F8830
  c->r[4]=0u+0xFFFFFFFFu; // 801F8834
  c->lr=0x801F883Cu; f_8012005C(c); // 801F8838
  c->r[3]=c->r[1]+0x00000048u; // 801F883C
  c->r[4]=c->r[1]+0x00000038u; // 801F8840
  c->lr=0x801F8848u; f_801200B8(c); // 801F8844
  c->r[0]=cntlz(c->r[3]); // 801F8848
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801F884C
  c->r[3]=c->r[1]+0x00000038u; // 801F8850
  c->r[4]=0u+0xFFFFFFFFu; // 801F8854
  c->lr=0x801F885Cu; f_8012005C(c); // 801F8858
  c->r[3]=c->r[1]+0x00000048u; // 801F885C
  c->r[4]=0u+0xFFFFFFFFu; // 801F8860
  c->lr=0x801F8868u; f_8012005C(c); // 801F8864
  c->r[3]=c->r[31]|c->r[31]; // 801F8868
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 801F886C
  c->r[30]=R32(c->r[1]+0x00000098u); // 801F8870
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801F8874
  c->lr=c->r[0]; // 801F8878
  c->r[1]=c->r[1]+0x000000A0u; // 801F887C
  return; // 801F8880
}

// fn_801F8884
void f_801F8884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8884
  c->r[0]=c->lr; // 801F8888
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F888C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F8890
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F8894
  c->r[30]=c->r[3]|c->r[3]; // 801F8898
  c->r[31]=c->r[4]|c->r[4]; // 801F889C
  c->r[0]=R32(c->r[3]+0x00003374u); // 801F88A0
  cmps(c,0,(int32_t)c->r[0],0); // 801F88A4
  if (crb(c,2)) { goto L_801F88B8; } // 801F88A8
  c->r[4]=0u+0x00000000u; // 801F88AC
  c->lr=0x801F88B4u; f_8019C940(c); // 801F88B0
  goto L_801F88E0; // 801F88B4
L_801F88B8:;
  c->lr=0x801F88BCu; f_801F8688(c); // 801F88B8
  cmps(c,0,(int32_t)c->r[3],0); // 801F88BC
  if (crb(c,2)) { goto L_801F88D4; } // 801F88C0
  c->r[3]=c->r[30]|c->r[30]; // 801F88C4
  c->r[4]=c->r[31]|c->r[31]; // 801F88C8
  c->lr=0x801F88D0u; f_8019C940(c); // 801F88CC
  goto L_801F88E0; // 801F88D0
L_801F88D4:;
  c->r[3]=c->r[30]|c->r[30]; // 801F88D4
  c->r[4]=0u+0x00000000u; // 801F88D8
  c->lr=0x801F88E0u; f_8019C940(c); // 801F88DC
L_801F88E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F88E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F88E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F88E8
  c->lr=c->r[0]; // 801F88EC
  c->r[1]=c->r[1]+0x00000010u; // 801F88F0
  return; // 801F88F4
}

// fn_801F88F8
void f_801F88F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F88F8
  c->r[0]=c->lr; // 801F88FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 801F8900
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 801F8904
  W32(c->r[1]+0x00000048u,c->r[30]); // 801F8908
  c->r[30]=c->r[3]|c->r[3]; // 801F890C
  c->r[3]=c->r[1]+0x00000038u; // 801F8910
  c->lr=0x801F8918u; f_8004B0A4(c); // 801F8914
  c->r[3]=c->r[1]+0x0000002Cu; // 801F8918
  c->lr=0x801F8920u; f_8004B0A4(c); // 801F891C
  c->r[3]=c->r[1]+0x00000020u; // 801F8920
  c->lr=0x801F8928u; f_8004B0A4(c); // 801F8924
  c->r[3]=c->r[1]+0x00000014u; // 801F8928
  c->lr=0x801F8930u; f_8004B0A4(c); // 801F892C
  c->lr=0x801F8934u; f_801F99D4(c); // 801F8930
  c->lr=0x801F8938u; f_801F9B3C(c); // 801F8934
  c->r[4]=c->r[3]|c->r[3]; // 801F8938
  c->r[3]=c->r[1]+0x00000038u; // 801F893C
  c->lr=0x801F8944u; f_8004A65C(c); // 801F8940
  c->r[3]=c->r[1]+0x0000002Cu; // 801F8944
  c->r[4]=c->r[1]+0x00000038u; // 801F8948
  c->lr=0x801F8950u; f_801F6CAC(c); // 801F894C
  c->lr=0x801F8954u; f_801F99D4(c); // 801F8950
  c->r[4]=R32(c->r[30]+0x00003370u); // 801F8954
  c->lr=0x801F895Cu; f_801F9C04(c); // 801F8958
  c->r[4]=c->r[3]|c->r[3]; // 801F895C
  c->r[3]=c->r[1]+0x00000038u; // 801F8960
  c->lr=0x801F8968u; f_8004A65C(c); // 801F8964
  c->r[3]=c->r[1]+0x00000020u; // 801F8968
  c->r[4]=c->r[1]+0x00000038u; // 801F896C
  c->lr=0x801F8974u; f_801F6CAC(c); // 801F8970
  c->lr=0x801F8978u; f_8011B41C(c); // 801F8974
  c->r[4]=0u+0x00000016u; // 801F8978
  c->lr=0x801F8980u; f_8011B814(c); // 801F897C
  c->r[31]=c->r[3]|c->r[3]; // 801F8980
  c->r[3]=c->r[1]+0x00000008u; // 801F8984
  c->lr=0x801F898Cu; f_8004B0A4(c); // 801F8988
  c->r[3]=c->r[31]|c->r[31]; // 801F898C
  c->r[4]=c->r[1]+0x00000008u; // 801F8990
  c->lr=0x801F8998u; f_801F9898(c); // 801F8994
  c->r[3]=c->r[31]|c->r[31]; // 801F8998
  c->lr=0x801F89A0u; f_8012FCC8(c); // 801F899C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89A0
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F89A4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F89A8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89AC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F89B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801F89B4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 801F89B8
  c->r[3]=c->r[31]|c->r[31]; // 801F89BC
  c->lr=0x801F89C4u; f_8012FCD0(c); // 801F89C0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89C4
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[1]); // 801F89C8
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F89CC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89D0
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 801F89D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 801F89D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 801F89DC
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F89E0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[1]);} // 801F89E4
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89E8
  {uint32_t ea=c->r[30]+0x00003340u; WF32(ea,c->f[0]);} // 801F89EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89F0
  {uint32_t ea=c->r[30]+0x00003344u; WF32(ea,c->f[0]);} // 801F89F4
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F89F8
  {uint32_t ea=c->r[30]+0x00003348u; WF32(ea,c->f[0]);} // 801F89FC
  {uint32_t ea=c->r[2]+0xFFFF9648u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8A00
  {uint32_t ea=c->r[30]+0x00003360u; WF32(ea,c->f[0]);} // 801F8A04
  {uint32_t ea=c->r[30]+0x00003364u; WF32(ea,c->f[0]);} // 801F8A08
  {uint32_t ea=c->r[30]+0x00003368u; WF32(ea,c->f[0]);} // 801F8A0C
  {uint32_t ea=c->r[30]+0x0000336Cu; WF32(ea,c->f[0]);} // 801F8A10
  {uint32_t ea=c->r[30]+0x00003350u; WF32(ea,c->f[1]);} // 801F8A14
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8A18
  {uint32_t ea=c->r[30]+0x00003354u; WF32(ea,c->f[0]);} // 801F8A1C
  {uint32_t ea=c->r[30]+0x00003358u; WF32(ea,c->f[1]);} // 801F8A20
  {uint32_t ea=c->r[30]+0x0000335Cu; WF32(ea,c->f[0]);} // 801F8A24
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 801F8A28
  c->r[30]=R32(c->r[1]+0x00000048u); // 801F8A2C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801F8A30
  c->lr=c->r[0]; // 801F8A34
  c->r[1]=c->r[1]+0x00000050u; // 801F8A38
  return; // 801F8A3C
}

// fn_801F8A40
void f_801F8A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8A40
  c->r[0]=c->lr; // 801F8A44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F8A48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F8A4C
  c->r[31]=c->r[3]|c->r[3]; // 801F8A50
  {uint32_t ea=c->r[2]+0xFFFF95F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8A54
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801F8A58
  c->r[3]=c->r[3]+0x00003378u; // 801F8A5C
  c->lr=0x801F8A64u; f_801105F8(c); // 801F8A60
  cmps(c,0,(int32_t)c->r[3],0); // 801F8A64
  if (!crb(c,2)) { goto L_801F8A88; } // 801F8A68
  c->r[3]=c->r[31]+0x00003378u; // 801F8A6C
  c->r[4]=0u+0x00000001u; // 801F8A70
  c->lr=0x801F8A78u; f_80110570(c); // 801F8A74
  c->r[3]=c->r[31]+0x00003378u; // 801F8A78
  {uint32_t ea=c->r[2]+0xFFFF95D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8A7C
  c->lr=0x801F8A84u; f_80110590(c); // 801F8A80
  goto L_801F8A94; // 801F8A84
L_801F8A88:;
  c->r[3]=c->r[31]+0x00003378u; // 801F8A88
  c->r[4]=c->r[1]+0x00000008u; // 801F8A8C
  c->lr=0x801F8A94u; f_801108D8(c); // 801F8A90
L_801F8A94:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F8A94
  {uint32_t ea=c->r[2]+0xFFFF963Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8A98
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801F8A9C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F8AA0
  {uint32_t ea=c->r[2]+0xFFFF95D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F8AA4
  {uint32_t ea=c->r[2]+0xFFFF9640u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F8AA8
  c->lr=0x801F8AB0u; f_800549D4(c); // 801F8AAC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 801F8AB0
  c->r[0]=0u+0x000000FFu; // 801F8AB4
  W8(c->r[31]+0x0000334Cu,c->r[0]); // 801F8AB8
  W8(c->r[31]+0x0000334Du,c->r[0]); // 801F8ABC
  W8(c->r[31]+0x0000334Eu,c->r[0]); // 801F8AC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F8AC4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801F8AC8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801F8ACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8AD0
  W8(c->r[31]+0x0000334Fu,c->r[0]); // 801F8AD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F8AD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F8ADC
  c->lr=c->r[0]; // 801F8AE0
  c->r[1]=c->r[1]+0x00000020u; // 801F8AE4
  return; // 801F8AE8
}

// fn_801F8AEC
void f_801F8AEC(Ctx* __restrict c) {
  W32(c->r[3]+0x00003374u,c->r[4]); // 801F8AEC
  return; // 801F8AF0
}

// fn_801F8AF4
void f_801F8AF4(Ctx* __restrict c) {
  W32(c->r[3]+0x00003370u,c->r[4]); // 801F8AF4
  return; // 801F8AF8
}

// fn_801F8AFC
void f_801F8AFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8AFC
  c->r[0]=c->lr; // 801F8B00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8B04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F8B08
  c->r[31]=c->r[3]|c->r[3]; // 801F8B0C
  c->lr=0x801F8B14u; f_801F88F8(c); // 801F8B10
  c->r[3]=c->r[31]|c->r[31]; // 801F8B14
  c->lr=0x801F8B1Cu; f_801F8A40(c); // 801F8B18
  c->r[3]=c->r[31]|c->r[31]; // 801F8B1C
  c->r[4]=0u+0x00000001u; // 801F8B20
  c->lr=0x801F8B28u; f_801F8884(c); // 801F8B24
  c->r[3]=c->r[31]|c->r[31]; // 801F8B28
  c->r[4]=c->r[31]+0x00003340u; // 801F8B2C
  c->r[5]=0u+0x00000001u; // 801F8B30
  c->lr=0x801F8B38u; f_8019C328(c); // 801F8B34
  c->r[3]=c->r[31]|c->r[31]; // 801F8B38
  c->lr=0x801F8B40u; f_8019C88C(c); // 801F8B3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F8B40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8B44
  c->lr=c->r[0]; // 801F8B48
  c->r[1]=c->r[1]+0x00000010u; // 801F8B4C
  return; // 801F8B50
}

// fn_801F8B54
void f_801F8B54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8B54
  c->r[0]=c->lr; // 801F8B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8B5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F8B60
  c->r[31]=c->r[3]|c->r[3]; // 801F8B64
  c->lr=0x801F8B6Cu; f_8012FAAC(c); // 801F8B68
  c->r[3]=0u+0x80470000u; // 801F8B6C
  c->r[0]=c->r[3]+0x00005F58u; // 801F8B70
  W32(c->r[31]+0x00000058u,c->r[0]); // 801F8B74
  c->r[0]=0u+0x00000000u; // 801F8B78
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801F8B7C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801F8B80
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801F8B84
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801F8B88
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801F8B8C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801F8B90
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801F8B94
  W32(c->r[31]+0x000000DCu,c->r[0]); // 801F8B98
  W32(c->r[31]+0x000000E0u,c->r[0]); // 801F8B9C
  W32(c->r[31]+0x000000E4u,c->r[0]); // 801F8BA0
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801F8BA4
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801F8BA8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801F8BAC
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801F8BB0
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801F8BB4
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801F8BB8
  W32(c->r[31]+0x00000100u,c->r[0]); // 801F8BBC
  W32(c->r[31]+0x00000104u,c->r[0]); // 801F8BC0
  W32(c->r[31]+0x00000108u,c->r[0]); // 801F8BC4
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 801F8BC8
  c->r[3]=c->r[31]|c->r[31]; // 801F8BCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F8BD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8BD4
  c->lr=c->r[0]; // 801F8BD8
  c->r[1]=c->r[1]+0x00000010u; // 801F8BDC
  return; // 801F8BE0
}

// fn_801F8BE4
void f_801F8BE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8BE4
  c->r[0]=c->lr; // 801F8BE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F8BEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F8BF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F8BF4
  c->r[30]=c->r[3]|c->r[3]; // 801F8BF8
  c->r[31]=c->r[4]|c->r[4]; // 801F8BFC
  cmps(c,0,(int32_t)c->r[3],0); // 801F8C00
  if (crb(c,2)) { goto L_801F8C24; } // 801F8C04
  c->r[4]=0u+0x00000000u; // 801F8C08
  c->lr=0x801F8C10u; f_8012FB1C(c); // 801F8C0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F8C10
  cmps(c,0,(int32_t)c->r[0],0); // 801F8C14
  if (!crb(c,1)) { goto L_801F8C24; } // 801F8C18
  c->r[3]=c->r[30]|c->r[30]; // 801F8C1C
  c->lr=0x801F8C24u; f_80047B20(c); // 801F8C20
L_801F8C24:;
  c->r[3]=c->r[30]|c->r[30]; // 801F8C24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F8C28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F8C2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F8C30
  c->lr=c->r[0]; // 801F8C34
  c->r[1]=c->r[1]+0x00000010u; // 801F8C38
  return; // 801F8C3C
}

// fn_801F8C40
void f_801F8C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8C40
  c->r[0]=c->lr; // 801F8C44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F8C48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F8C4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F8C50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F8C54
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F8C58
  c->r[28]=c->r[3]|c->r[3]; // 801F8C5C
  c->lr=0x801F8C64u; f_80056B5C(c); // 801F8C60
  c->r[30]=c->r[3]|c->r[3]; // 801F8C64
  c->lr=0x801F8C6Cu; f_801F1340(c); // 801F8C68
  c->lr=0x801F8C70u; f_80056B54(c); // 801F8C6C
  c->r[3]=0u+0x00003370u; // 801F8C70
  c->lr=0x801F8C78u; f_80047B64(c); // 801F8C74
  c->r[31]=c->r[3]|c->r[3]; // 801F8C78
  cmps(c,0,(int32_t)c->r[3],0); // 801F8C7C
  if (crb(c,2)) { goto L_801F8C88; } // 801F8C80
  c->lr=0x801F8C88u; f_801F6E40(c); // 801F8C84
L_801F8C88:;
  W32(c->r[28]+0x000000C0u,c->r[31]); // 801F8C88
  c->r[3]=c->r[30]|c->r[30]; // 801F8C8C
  c->lr=0x801F8C94u; f_80056B54(c); // 801F8C90
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801F8C94
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8C98
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F8C9C
  c->ctr=c->r[12]; // 801F8CA0
  if (true) { c->lr=0x801F8CA8u; dispatch(c,c->ctr); } // 801F8CA4
  c->lr=0x801F8CACu; f_8019CEB8(c); // 801F8CA8
  c->r[4]=R32(c->r[28]+0x000000C0u); // 801F8CAC
  c->lr=0x801F8CB4u; f_8019D1D8(c); // 801F8CB0
  c->lr=0x801F8CB8u; f_80056B5C(c); // 801F8CB4
  c->r[30]=c->r[3]|c->r[3]; // 801F8CB8
  c->lr=0x801F8CC0u; f_801F1340(c); // 801F8CBC
  c->lr=0x801F8CC4u; f_80056B54(c); // 801F8CC0
  c->r[3]=0u+0x00003370u; // 801F8CC4
  c->lr=0x801F8CCCu; f_80047B64(c); // 801F8CC8
  c->r[31]=c->r[3]|c->r[3]; // 801F8CCC
  cmps(c,0,(int32_t)c->r[3],0); // 801F8CD0
  if (crb(c,2)) { goto L_801F8CDC; } // 801F8CD4
  c->lr=0x801F8CDCu; f_801F7254(c); // 801F8CD8
L_801F8CDC:;
  W32(c->r[28]+0x000000C4u,c->r[31]); // 801F8CDC
  c->r[3]=c->r[30]|c->r[30]; // 801F8CE0
  c->lr=0x801F8CE8u; f_80056B54(c); // 801F8CE4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801F8CE8
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8CEC
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F8CF0
  c->ctr=c->r[12]; // 801F8CF4
  if (true) { c->lr=0x801F8CFCu; dispatch(c,c->ctr); } // 801F8CF8
  c->lr=0x801F8D00u; f_8019CEB8(c); // 801F8CFC
  c->r[4]=R32(c->r[28]+0x000000C4u); // 801F8D00
  c->lr=0x801F8D08u; f_8019D1D8(c); // 801F8D04
  c->lr=0x801F8D0Cu; f_80056B5C(c); // 801F8D08
  c->r[30]=c->r[3]|c->r[3]; // 801F8D0C
  c->lr=0x801F8D14u; f_801F1340(c); // 801F8D10
  c->lr=0x801F8D18u; f_80056B54(c); // 801F8D14
  c->r[3]=0u+0x000033B8u; // 801F8D18
  c->lr=0x801F8D20u; f_80047B64(c); // 801F8D1C
  c->r[31]=c->r[3]|c->r[3]; // 801F8D20
  cmps(c,0,(int32_t)c->r[3],0); // 801F8D24
  if (crb(c,2)) { goto L_801F8D30; } // 801F8D28
  c->lr=0x801F8D30u; f_801F7728(c); // 801F8D2C
L_801F8D30:;
  W32(c->r[28]+0x000000C8u,c->r[31]); // 801F8D30
  c->r[3]=c->r[30]|c->r[30]; // 801F8D34
  c->lr=0x801F8D3Cu; f_80056B54(c); // 801F8D38
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801F8D3C
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8D40
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F8D44
  c->ctr=c->r[12]; // 801F8D48
  if (true) { c->lr=0x801F8D50u; dispatch(c,c->ctr); } // 801F8D4C
  c->lr=0x801F8D54u; f_8019CEB8(c); // 801F8D50
  c->r[4]=R32(c->r[28]+0x000000C8u); // 801F8D54
  c->lr=0x801F8D5Cu; f_8019D1D8(c); // 801F8D58
  c->lr=0x801F8D60u; f_80056B5C(c); // 801F8D5C
  c->r[30]=c->r[3]|c->r[3]; // 801F8D60
  c->lr=0x801F8D68u; f_801F1340(c); // 801F8D64
  c->lr=0x801F8D6Cu; f_80056B54(c); // 801F8D68
  c->r[3]=0u+0x000033C0u; // 801F8D6C
  c->lr=0x801F8D74u; f_80047B64(c); // 801F8D70
  c->r[31]=c->r[3]|c->r[3]; // 801F8D74
  cmps(c,0,(int32_t)c->r[3],0); // 801F8D78
  if (crb(c,2)) { goto L_801F8D84; } // 801F8D7C
  c->lr=0x801F8D84u; f_801F7BD8(c); // 801F8D80
L_801F8D84:;
  W32(c->r[28]+0x000000CCu,c->r[31]); // 801F8D84
  c->r[3]=c->r[30]|c->r[30]; // 801F8D88
  c->lr=0x801F8D90u; f_80056B54(c); // 801F8D8C
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F8D90
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8D94
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F8D98
  c->ctr=c->r[12]; // 801F8D9C
  if (true) { c->lr=0x801F8DA4u; dispatch(c,c->ctr); } // 801F8DA0
  c->lr=0x801F8DA8u; f_8019CEB8(c); // 801F8DA4
  c->r[4]=R32(c->r[28]+0x000000CCu); // 801F8DA8
  c->lr=0x801F8DB0u; f_8019D1D8(c); // 801F8DAC
  c->r[30]=0u+0x00000000u; // 801F8DB0
L_801F8DB4:;
  c->lr=0x801F8DB8u; f_80056B5C(c); // 801F8DB4
  c->r[29]=c->r[3]|c->r[3]; // 801F8DB8
  c->lr=0x801F8DC0u; f_801F1340(c); // 801F8DBC
  c->lr=0x801F8DC4u; f_80056B54(c); // 801F8DC0
  c->r[3]=0u+0x000033C0u; // 801F8DC4
  c->lr=0x801F8DCCu; f_80047B64(c); // 801F8DC8
  c->r[31]=c->r[3]|c->r[3]; // 801F8DCC
  cmps(c,0,(int32_t)c->r[3],0); // 801F8DD0
  if (crb(c,2)) { goto L_801F8DDC; } // 801F8DD4
  c->lr=0x801F8DDCu; f_801F8380(c); // 801F8DD8
L_801F8DDC:;
  W32(c->r[28]+0x000000D0u,c->r[31]); // 801F8DDC
  c->r[3]=c->r[29]|c->r[29]; // 801F8DE0
  c->lr=0x801F8DE8u; f_80056B54(c); // 801F8DE4
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F8DE8
  c->r[4]=c->r[30]|c->r[30]; // 801F8DEC
  c->lr=0x801F8DF4u; f_801F8AF4(c); // 801F8DF0
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F8DF4
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8DF8
  c->r[12]=R32(c->r[12]+0x00000028u); // 801F8DFC
  c->ctr=c->r[12]; // 801F8E00
  if (true) { c->lr=0x801F8E08u; dispatch(c,c->ctr); } // 801F8E04
  c->lr=0x801F8E0Cu; f_8019CEB8(c); // 801F8E08
  c->r[4]=R32(c->r[28]+0x000000D0u); // 801F8E0C
  c->lr=0x801F8E14u; f_8019D1D8(c); // 801F8E10
  c->r[28]=c->r[28]+0x00000004u; // 801F8E14
  c->r[30]=c->r[30]+0x00000001u; // 801F8E18
  cmps(c,0,(int32_t)c->r[30],16); // 801F8E1C
  if (crb(c,0)) { IRQCHK(c); goto L_801F8DB4; } // 801F8E20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F8E24
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F8E28
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F8E2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F8E30
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F8E34
  c->lr=c->r[0]; // 801F8E38
  c->r[1]=c->r[1]+0x00000020u; // 801F8E3C
  return; // 801F8E40
}

// fn_801F8E44
void f_801F8E44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F8E44
  c->r[0]=c->lr; // 801F8E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F8E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F8E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F8E54
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F8E58
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F8E5C
  c->r[28]=c->r[3]|c->r[3]; // 801F8E60
  c->r[31]=R32(c->r[3]+0x000000C0u); // 801F8E64
  cmps(c,0,(int32_t)c->r[31],0); // 801F8E68
  if (crb(c,2)) { goto L_801F8ED0; } // 801F8E6C
  c->lr=0x801F8E74u; f_8019CEB8(c); // 801F8E70
  c->r[4]=c->r[31]|c->r[31]; // 801F8E74
  c->lr=0x801F8E7Cu; f_8019D248(c); // 801F8E78
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801F8E7C
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8E80
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F8E84
  c->ctr=c->r[12]; // 801F8E88
  if (true) { c->lr=0x801F8E90u; dispatch(c,c->ctr); } // 801F8E8C
  c->lr=0x801F8E94u; f_80056B5C(c); // 801F8E90
  c->r[30]=c->r[3]|c->r[3]; // 801F8E94
  c->lr=0x801F8E9Cu; f_801F1340(c); // 801F8E98
  c->lr=0x801F8EA0u; f_80056B54(c); // 801F8E9C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801F8EA0
  cmps(c,0,(int32_t)c->r[3],0); // 801F8EA4
  if (crb(c,2)) { goto L_801F8EC0; } // 801F8EA8
  c->r[4]=0u+0x00000001u; // 801F8EAC
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8EB0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F8EB4
  c->ctr=c->r[12]; // 801F8EB8
  if (true) { c->lr=0x801F8EC0u; dispatch(c,c->ctr); } // 801F8EBC
L_801F8EC0:;
  c->r[3]=c->r[30]|c->r[30]; // 801F8EC0
  c->lr=0x801F8EC8u; f_80056B54(c); // 801F8EC4
  c->r[0]=0u+0x00000000u; // 801F8EC8
  W32(c->r[28]+0x000000C0u,c->r[0]); // 801F8ECC
L_801F8ED0:;
  c->r[31]=R32(c->r[28]+0x000000C4u); // 801F8ED0
  cmps(c,0,(int32_t)c->r[31],0); // 801F8ED4
  if (crb(c,2)) { goto L_801F8F3C; } // 801F8ED8
  c->lr=0x801F8EE0u; f_8019CEB8(c); // 801F8EDC
  c->r[4]=c->r[31]|c->r[31]; // 801F8EE0
  c->lr=0x801F8EE8u; f_8019D248(c); // 801F8EE4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801F8EE8
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8EEC
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F8EF0
  c->ctr=c->r[12]; // 801F8EF4
  if (true) { c->lr=0x801F8EFCu; dispatch(c,c->ctr); } // 801F8EF8
  c->lr=0x801F8F00u; f_80056B5C(c); // 801F8EFC
  c->r[30]=c->r[3]|c->r[3]; // 801F8F00
  c->lr=0x801F8F08u; f_801F1340(c); // 801F8F04
  c->lr=0x801F8F0Cu; f_80056B54(c); // 801F8F08
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801F8F0C
  cmps(c,0,(int32_t)c->r[3],0); // 801F8F10
  if (crb(c,2)) { goto L_801F8F2C; } // 801F8F14
  c->r[4]=0u+0x00000001u; // 801F8F18
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8F1C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F8F20
  c->ctr=c->r[12]; // 801F8F24
  if (true) { c->lr=0x801F8F2Cu; dispatch(c,c->ctr); } // 801F8F28
L_801F8F2C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F8F2C
  c->lr=0x801F8F34u; f_80056B54(c); // 801F8F30
  c->r[0]=0u+0x00000000u; // 801F8F34
  W32(c->r[28]+0x000000C4u,c->r[0]); // 801F8F38
L_801F8F3C:;
  c->r[31]=R32(c->r[28]+0x000000C8u); // 801F8F3C
  cmps(c,0,(int32_t)c->r[31],0); // 801F8F40
  if (crb(c,2)) { goto L_801F8FA8; } // 801F8F44
  c->lr=0x801F8F4Cu; f_8019CEB8(c); // 801F8F48
  c->r[4]=c->r[31]|c->r[31]; // 801F8F4C
  c->lr=0x801F8F54u; f_8019D248(c); // 801F8F50
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801F8F54
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8F58
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F8F5C
  c->ctr=c->r[12]; // 801F8F60
  if (true) { c->lr=0x801F8F68u; dispatch(c,c->ctr); } // 801F8F64
  c->lr=0x801F8F6Cu; f_80056B5C(c); // 801F8F68
  c->r[30]=c->r[3]|c->r[3]; // 801F8F6C
  c->lr=0x801F8F74u; f_801F1340(c); // 801F8F70
  c->lr=0x801F8F78u; f_80056B54(c); // 801F8F74
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801F8F78
  cmps(c,0,(int32_t)c->r[3],0); // 801F8F7C
  if (crb(c,2)) { goto L_801F8F98; } // 801F8F80
  c->r[4]=0u+0x00000001u; // 801F8F84
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8F88
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F8F8C
  c->ctr=c->r[12]; // 801F8F90
  if (true) { c->lr=0x801F8F98u; dispatch(c,c->ctr); } // 801F8F94
L_801F8F98:;
  c->r[3]=c->r[30]|c->r[30]; // 801F8F98
  c->lr=0x801F8FA0u; f_80056B54(c); // 801F8F9C
  c->r[0]=0u+0x00000000u; // 801F8FA0
  W32(c->r[28]+0x000000C8u,c->r[0]); // 801F8FA4
L_801F8FA8:;
  c->r[31]=R32(c->r[28]+0x000000CCu); // 801F8FA8
  cmps(c,0,(int32_t)c->r[31],0); // 801F8FAC
  if (crb(c,2)) { goto L_801F9014; } // 801F8FB0
  c->lr=0x801F8FB8u; f_8019CEB8(c); // 801F8FB4
  c->r[4]=c->r[31]|c->r[31]; // 801F8FB8
  c->lr=0x801F8FC0u; f_8019D248(c); // 801F8FBC
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F8FC0
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8FC4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F8FC8
  c->ctr=c->r[12]; // 801F8FCC
  if (true) { c->lr=0x801F8FD4u; dispatch(c,c->ctr); } // 801F8FD0
  c->lr=0x801F8FD8u; f_80056B5C(c); // 801F8FD4
  c->r[30]=c->r[3]|c->r[3]; // 801F8FD8
  c->lr=0x801F8FE0u; f_801F1340(c); // 801F8FDC
  c->lr=0x801F8FE4u; f_80056B54(c); // 801F8FE0
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F8FE4
  cmps(c,0,(int32_t)c->r[3],0); // 801F8FE8
  if (crb(c,2)) { goto L_801F9004; } // 801F8FEC
  c->r[4]=0u+0x00000001u; // 801F8FF0
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F8FF4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F8FF8
  c->ctr=c->r[12]; // 801F8FFC
  if (true) { c->lr=0x801F9004u; dispatch(c,c->ctr); } // 801F9000
L_801F9004:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9004
  c->lr=0x801F900Cu; f_80056B54(c); // 801F9008
  c->r[0]=0u+0x00000000u; // 801F900C
  W32(c->r[28]+0x000000CCu,c->r[0]); // 801F9010
L_801F9014:;
  c->r[29]=0u+0x00000000u; // 801F9014
  c->r[31]=0u+0x00000000u; // 801F9018
L_801F901C:;
  c->r[30]=R32(c->r[28]+0x000000D0u); // 801F901C
  cmps(c,0,(int32_t)c->r[30],0); // 801F9020
  if (crb(c,2)) { goto L_801F9084; } // 801F9024
  c->lr=0x801F902Cu; f_8019CEB8(c); // 801F9028
  c->r[4]=c->r[30]|c->r[30]; // 801F902C
  c->lr=0x801F9034u; f_8019D248(c); // 801F9030
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F9034
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F9038
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801F903C
  c->ctr=c->r[12]; // 801F9040
  if (true) { c->lr=0x801F9048u; dispatch(c,c->ctr); } // 801F9044
  c->lr=0x801F904Cu; f_80056B5C(c); // 801F9048
  c->r[30]=c->r[3]|c->r[3]; // 801F904C
  c->lr=0x801F9054u; f_801F1340(c); // 801F9050
  c->lr=0x801F9058u; f_80056B54(c); // 801F9054
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F9058
  cmps(c,0,(int32_t)c->r[3],0); // 801F905C
  if (crb(c,2)) { goto L_801F9078; } // 801F9060
  c->r[4]=0u+0x00000001u; // 801F9064
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 801F9068
  c->r[12]=R32(c->r[12]+0x00000008u); // 801F906C
  c->ctr=c->r[12]; // 801F9070
  if (true) { c->lr=0x801F9078u; dispatch(c,c->ctr); } // 801F9074
L_801F9078:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9078
  c->lr=0x801F9080u; f_80056B54(c); // 801F907C
  W32(c->r[28]+0x000000D0u,c->r[31]); // 801F9080
L_801F9084:;
  c->r[28]=c->r[28]+0x00000004u; // 801F9084
  c->r[29]=c->r[29]+0x00000001u; // 801F9088
  cmps(c,0,(int32_t)c->r[29],16); // 801F908C
  if (crb(c,0)) { IRQCHK(c); goto L_801F901C; } // 801F9090
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9094
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F9098
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F909C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F90A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F90A4
  c->lr=c->r[0]; // 801F90A8
  c->r[1]=c->r[1]+0x00000020u; // 801F90AC
  return; // 801F90B0
}

// fn_801F90B4
void f_801F90B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F90B4
  c->r[0]=c->lr; // 801F90B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F90BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F90C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F90C4
  c->r[30]=c->r[3]|c->r[3]; // 801F90C8
  c->r[31]=c->r[4]|c->r[4]; // 801F90CC
  cmps(c,0,(int32_t)c->r[3],0); // 801F90D0
  if (crb(c,2)) { goto L_801F9110; } // 801F90D4
  c->r[3]=c->r[3]+0x00003378u; // 801F90D8
  c->r[4]=0u+0xFFFFFFFFu; // 801F90DC
  c->lr=0x801F90E4u; f_80110504(c); // 801F90E0
  c->r[3]=c->r[30]+0x00003340u; // 801F90E4
  c->r[4]=0u+0xFFFFFFFFu; // 801F90E8
  c->lr=0x801F90F0u; f_8011DE40(c); // 801F90EC
  c->r[3]=c->r[30]|c->r[30]; // 801F90F0
  c->r[4]=0u+0x00000000u; // 801F90F4
  c->lr=0x801F90FCu; f_8019C808(c); // 801F90F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F90FC
  cmps(c,0,(int32_t)c->r[0],0); // 801F9100
  if (!crb(c,1)) { goto L_801F9110; } // 801F9104
  c->r[3]=c->r[30]|c->r[30]; // 801F9108
  c->lr=0x801F9110u; f_80047B20(c); // 801F910C
L_801F9110:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9110
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9114
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9118
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F911C
  c->lr=c->r[0]; // 801F9120
  c->r[1]=c->r[1]+0x00000010u; // 801F9124
  return; // 801F9128
}

// fn_801F912C
void f_801F912C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F912C
  c->r[0]=c->lr; // 801F9130
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9134
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9138
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F913C
  c->r[30]=c->r[3]|c->r[3]; // 801F9140
  c->r[31]=c->r[4]|c->r[4]; // 801F9144
  cmps(c,0,(int32_t)c->r[3],0); // 801F9148
  if (crb(c,2)) { goto L_801F9188; } // 801F914C
  c->r[3]=c->r[3]+0x00003378u; // 801F9150
  c->r[4]=0u+0xFFFFFFFFu; // 801F9154
  c->lr=0x801F915Cu; f_80110504(c); // 801F9158
  c->r[3]=c->r[30]+0x00003340u; // 801F915C
  c->r[4]=0u+0xFFFFFFFFu; // 801F9160
  c->lr=0x801F9168u; f_8011DE40(c); // 801F9164
  c->r[3]=c->r[30]|c->r[30]; // 801F9168
  c->r[4]=0u+0x00000000u; // 801F916C
  c->lr=0x801F9174u; f_8019C808(c); // 801F9170
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F9174
  cmps(c,0,(int32_t)c->r[0],0); // 801F9178
  if (!crb(c,1)) { goto L_801F9188; } // 801F917C
  c->r[3]=c->r[30]|c->r[30]; // 801F9180
  c->lr=0x801F9188u; f_80047B20(c); // 801F9184
L_801F9188:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9188
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F918C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9190
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9194
  c->lr=c->r[0]; // 801F9198
  c->r[1]=c->r[1]+0x00000010u; // 801F919C
  return; // 801F91A0
}

// fn_801F91A4
void f_801F91A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F91A4
  c->r[0]=c->lr; // 801F91A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F91AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F91B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F91B4
  c->r[30]=c->r[3]|c->r[3]; // 801F91B8
  c->r[31]=c->r[4]|c->r[4]; // 801F91BC
  cmps(c,0,(int32_t)c->r[3],0); // 801F91C0
  if (crb(c,2)) { goto L_801F9200; } // 801F91C4
  c->r[3]=c->r[3]+0x00003370u; // 801F91C8
  c->r[4]=0u+0xFFFFFFFFu; // 801F91CC
  c->lr=0x801F91D4u; f_80110504(c); // 801F91D0
  c->r[3]=c->r[30]+0x00003340u; // 801F91D4
  c->r[4]=0u+0xFFFFFFFFu; // 801F91D8
  c->lr=0x801F91E0u; f_8011DE40(c); // 801F91DC
  c->r[3]=c->r[30]|c->r[30]; // 801F91E0
  c->r[4]=0u+0x00000000u; // 801F91E4
  c->lr=0x801F91ECu; f_8019C808(c); // 801F91E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F91EC
  cmps(c,0,(int32_t)c->r[0],0); // 801F91F0
  if (!crb(c,1)) { goto L_801F9200; } // 801F91F4
  c->r[3]=c->r[30]|c->r[30]; // 801F91F8
  c->lr=0x801F9200u; f_80047B20(c); // 801F91FC
L_801F9200:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9204
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9208
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F920C
  c->lr=c->r[0]; // 801F9210
  c->r[1]=c->r[1]+0x00000010u; // 801F9214
  return; // 801F9218
}

// fn_801F921C
void f_801F921C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F921C
  c->r[0]=c->lr; // 801F9220
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9228
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F922C
  c->r[30]=c->r[3]|c->r[3]; // 801F9230
  c->r[31]=c->r[4]|c->r[4]; // 801F9234
  cmps(c,0,(int32_t)c->r[3],0); // 801F9238
  if (crb(c,2)) { goto L_801F926C; } // 801F923C
  c->r[3]=c->r[3]+0x00003340u; // 801F9240
  c->r[4]=0u+0xFFFFFFFFu; // 801F9244
  c->lr=0x801F924Cu; f_8011DE40(c); // 801F9248
  c->r[3]=c->r[30]|c->r[30]; // 801F924C
  c->r[4]=0u+0x00000000u; // 801F9250
  c->lr=0x801F9258u; f_8019C808(c); // 801F9254
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F9258
  cmps(c,0,(int32_t)c->r[0],0); // 801F925C
  if (!crb(c,1)) { goto L_801F926C; } // 801F9260
  c->r[3]=c->r[30]|c->r[30]; // 801F9264
  c->lr=0x801F926Cu; f_80047B20(c); // 801F9268
L_801F926C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F926C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9270
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9274
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9278
  c->lr=c->r[0]; // 801F927C
  c->r[1]=c->r[1]+0x00000010u; // 801F9280
  return; // 801F9284
}

// fn_801F9288
void f_801F9288(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9288
  c->r[0]=c->lr; // 801F928C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9290
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9294
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F9298
  c->r[30]=c->r[3]|c->r[3]; // 801F929C
  c->r[31]=c->r[4]|c->r[4]; // 801F92A0
  cmps(c,0,(int32_t)c->r[3],0); // 801F92A4
  if (crb(c,2)) { goto L_801F92D8; } // 801F92A8
  c->r[3]=c->r[3]+0x00003340u; // 801F92AC
  c->r[4]=0u+0xFFFFFFFFu; // 801F92B0
  c->lr=0x801F92B8u; f_8011DE40(c); // 801F92B4
  c->r[3]=c->r[30]|c->r[30]; // 801F92B8
  c->r[4]=0u+0x00000000u; // 801F92BC
  c->lr=0x801F92C4u; f_8019C808(c); // 801F92C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F92C4
  cmps(c,0,(int32_t)c->r[0],0); // 801F92C8
  if (!crb(c,1)) { goto L_801F92D8; } // 801F92CC
  c->r[3]=c->r[30]|c->r[30]; // 801F92D0
  c->lr=0x801F92D8u; f_80047B20(c); // 801F92D4
L_801F92D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801F92D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F92DC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F92E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F92E4
  c->lr=c->r[0]; // 801F92E8
  c->r[1]=c->r[1]+0x00000010u; // 801F92EC
  return; // 801F92F0
}

// fn_801F92F4
void f_801F92F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F92F4
  c->r[0]=c->lr; // 801F92F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F92FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F9300
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F9304
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F9308
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F930C
  c->r[28]=c->r[3]|c->r[3]; // 801F9310
  c->r[29]=c->r[4]|c->r[4]; // 801F9314
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801F9318
  c->lr=0x801F9320u; f_8019C940(c); // 801F931C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801F9320
  c->r[4]=c->r[29]|c->r[29]; // 801F9324
  c->lr=0x801F932Cu; f_8019C940(c); // 801F9328
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801F932C
  c->r[4]=c->r[29]|c->r[29]; // 801F9330
  c->lr=0x801F9338u; f_8019C940(c); // 801F9334
  c->lr=0x801F933Cu; f_801F99D4(c); // 801F9338
  c->lr=0x801F9340u; f_801F9B9C(c); // 801F933C
  cmps(c,0,(int32_t)c->r[3],7); // 801F9340
  if (!crb(c,2)) { goto L_801F9364; } // 801F9344
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F9348
  c->r[4]=0u+0x00000000u; // 801F934C
  c->lr=0x801F9354u; f_8019C940(c); // 801F9350
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F9354
  c->r[4]=0u+0x00000001u; // 801F9358
  c->lr=0x801F9360u; f_801F8320(c); // 801F935C
  goto L_801F9380; // 801F9360
L_801F9364:;
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F9364
  c->r[4]=c->r[29]|c->r[29]; // 801F9368
  c->lr=0x801F9370u; f_8019C940(c); // 801F936C
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801F9370
  c->r[0]=cntlz(c->r[29]); // 801F9374
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801F9378
  c->lr=0x801F9380u; f_801F8320(c); // 801F937C
L_801F9380:;
  c->r[30]=0u+0x00000000u; // 801F9380
  c->r[0]=cntlz(c->r[29]); // 801F9384
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801F9388
L_801F938C:;
  c->lr=0x801F9390u; f_801F99D4(c); // 801F938C
  c->lr=0x801F9394u; f_801F9C34(c); // 801F9390
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 801F9394
  if (!crb(c,0)) { goto L_801F93B8; } // 801F9398
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F939C
  c->r[4]=c->r[29]|c->r[29]; // 801F93A0
  c->lr=0x801F93A8u; f_8019C940(c); // 801F93A4
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F93A8
  c->r[4]=c->r[31]|c->r[31]; // 801F93AC
  c->lr=0x801F93B4u; f_801F8AEC(c); // 801F93B0
  goto L_801F93D0; // 801F93B4
L_801F93B8:;
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F93B8
  c->r[4]=0u+0x00000000u; // 801F93BC
  c->lr=0x801F93C4u; f_8019C940(c); // 801F93C0
  c->r[3]=R32(c->r[28]+0x000000D0u); // 801F93C4
  c->r[4]=0u+0x00000001u; // 801F93C8
  c->lr=0x801F93D0u; f_801F8AEC(c); // 801F93CC
L_801F93D0:;
  c->r[28]=c->r[28]+0x00000004u; // 801F93D0
  c->r[30]=c->r[30]+0x00000001u; // 801F93D4
  cmps(c,0,(int32_t)c->r[30],16); // 801F93D8
  if (crb(c,0)) { IRQCHK(c); goto L_801F938C; } // 801F93DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F93E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F93E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F93E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F93EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F93F0
  c->lr=c->r[0]; // 801F93F4
  c->r[1]=c->r[1]+0x00000020u; // 801F93F8
  return; // 801F93FC
}

// fn_801F9400
void f_801F9400(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000218u; WF32(ea,c->f[1]);} // 801F9400
  {uint32_t ea=c->r[3]+0x0000021Cu; WF32(ea,c->f[2]);} // 801F9404
  {uint32_t ea=c->r[3]+0x00000220u; WF32(ea,c->f[3]);} // 801F9408
  return; // 801F940C
}

// fn_801F9410
void f_801F9410(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F9410
  f_801F9288(c); return; // 801F9414
}

// fn_801F9418
void f_801F9418(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F9418
  f_801F921C(c); return; // 801F941C
}

// fn_801F9420
void f_801F9420(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F9420
  f_801F91A4(c); return; // 801F9424
}

// fn_801F9428
void f_801F9428(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F9428
  f_801F912C(c); return; // 801F942C
}

// fn_801F9430
void f_801F9430(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 801F9430
  f_801F90B4(c); return; // 801F9434
}

// fn_801F9438
void f_801F9438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9438
  c->r[0]=c->lr; // 801F943C
  W32(c->r[1]+0x00000134u,c->r[0]); // 801F9440
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[31]);} // 801F9444
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,31,ea,0,0);} // 801F9448
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[30]);} // 801F944C
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,30,ea,0,0);} // 801F9450
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[29]);} // 801F9454
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,29,ea,0,0);} // 801F9458
  W32(c->r[1]+0x000000FCu,c->r[31]); // 801F945C
  W32(c->r[1]+0x000000F8u,c->r[30]); // 801F9460
  W32(c->r[1]+0x000000F4u,c->r[29]); // 801F9464
  W32(c->r[1]+0x000000F0u,c->r[28]); // 801F9468
  c->r[31]=c->r[3]|c->r[3]; // 801F946C
  c->lr=0x801F9474u; f_8012FBEC(c); // 801F9470
  c->r[3]=0u+0x80470000u; // 801F9474
  c->r[0]=c->r[3]+0x00006270u; // 801F9478
  W32(c->r[31]+0x00000044u,c->r[0]); // 801F947C
  c->r[3]=c->r[31]+0x00000048u; // 801F9480
  c->lr=0x801F9488u; f_8004B0A4(c); // 801F9484
  c->r[30]=c->r[31]+0x00000054u; // 801F9488
  c->r[29]=c->r[31]+0x000000A8u; // 801F948C
L_801F9490:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9490
  c->lr=0x801F9498u; f_8004B0A4(c); // 801F9494
  c->r[30]=c->r[30]+0x0000000Cu; // 801F9498
  cmpu(c,0,c->r[30],c->r[29]); // 801F949C
  if (crb(c,0)) { IRQCHK(c); goto L_801F9490; } // 801F94A0
  c->r[30]=c->r[31]+0x000000D8u; // 801F94A4
L_801F94A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801F94A8
  c->lr=0x801F94B0u; f_8004B0A4(c); // 801F94AC
  c->r[29]=c->r[29]+0x0000000Cu; // 801F94B0
  cmpu(c,0,c->r[29],c->r[30]); // 801F94B4
  if (crb(c,0)) { IRQCHK(c); goto L_801F94A8; } // 801F94B8
  c->r[29]=c->r[31]+0x00000144u; // 801F94BC
L_801F94C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801F94C0
  c->lr=0x801F94C8u; f_8004B0A4(c); // 801F94C4
  c->r[30]=c->r[30]+0x0000000Cu; // 801F94C8
  cmpu(c,0,c->r[30],c->r[29]); // 801F94CC
  if (crb(c,0)) { IRQCHK(c); goto L_801F94C0; } // 801F94D0
  c->r[30]=c->r[31]+0x000005E8u; // 801F94D4
L_801F94D8:;
  c->r[3]=c->r[29]|c->r[29]; // 801F94D8
  c->lr=0x801F94E0u; f_8004B0A4(c); // 801F94DC
  c->r[29]=c->r[29]+0x0000000Cu; // 801F94E0
  cmpu(c,0,c->r[29],c->r[30]); // 801F94E4
  if (crb(c,0)) { IRQCHK(c); goto L_801F94D8; } // 801F94E8
  c->r[3]=c->r[30]|c->r[30]; // 801F94EC
  c->lr=0x801F94F4u; f_8004B0A4(c); // 801F94F0
  c->r[3]=c->r[31]+0x000005F4u; // 801F94F4
  c->lr=0x801F94FCu; f_800592DC(c); // 801F94F8
  c->r[3]=c->r[31]+0x000005FCu; // 801F94FC
  c->lr=0x801F9504u; f_800592DC(c); // 801F9500
  c->r[28]=0u+0x00000000u; // 801F9504
  c->r[29]=0u+0x00000000u; // 801F9508
  c->r[30]=0u+0x804C0000u; // 801F950C
L_801F9510:;
  c->r[3]=c->r[31]+c->r[29]; // 801F9510
  c->r[3]=c->r[3]+0x00000054u; // 801F9514
  c->r[4]=c->r[30]+0x000024A0u; // 801F9518
  c->lr=0x801F9520u; f_8004A65C(c); // 801F951C
  c->r[29]=c->r[29]+0x0000000Cu; // 801F9520
  c->r[28]=c->r[28]+0x00000001u; // 801F9524
  cmps(c,0,(int32_t)c->r[28],7); // 801F9528
  if (crb(c,0)) { IRQCHK(c); goto L_801F9510; } // 801F952C
  c->r[28]=0u+0x00000000u; // 801F9530
  c->r[29]=0u+0x00000000u; // 801F9534
  c->r[30]=0u+0x804C0000u; // 801F9538
L_801F953C:;
  c->r[3]=c->r[31]+c->r[29]; // 801F953C
  c->r[3]=c->r[3]+0x000000A8u; // 801F9540
  c->r[4]=c->r[30]+0x000024A0u; // 801F9544
  c->lr=0x801F954Cu; f_8004A65C(c); // 801F9548
  c->r[29]=c->r[29]+0x0000000Cu; // 801F954C
  c->r[28]=c->r[28]+0x00000001u; // 801F9550
  cmps(c,0,(int32_t)c->r[28],4); // 801F9554
  if (crb(c,0)) { IRQCHK(c); goto L_801F953C; } // 801F9558
  c->r[28]=0u+0x00000000u; // 801F955C
  c->r[29]=0u+0x00000000u; // 801F9560
  c->r[30]=0u+0x804C0000u; // 801F9564
L_801F9568:;
  c->r[3]=c->r[31]+c->r[29]; // 801F9568
  c->r[3]=c->r[3]+0x000000D8u; // 801F956C
  c->r[4]=c->r[30]+0x000024A0u; // 801F9570
  c->lr=0x801F9578u; f_8004A65C(c); // 801F9574
  c->r[29]=c->r[29]+0x0000000Cu; // 801F9578
  c->r[28]=c->r[28]+0x00000001u; // 801F957C
  cmps(c,0,(int32_t)c->r[28],9); // 801F9580
  if (crb(c,0)) { IRQCHK(c); goto L_801F9568; } // 801F9584
  c->r[3]=c->r[1]+0x000000E0u; // 801F9588
  {uint32_t ea=c->r[2]+0xFFFF9660u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F958C
  {uint32_t ea=c->r[2]+0xFFFF9664u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9590
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9594
  c->lr=0x801F959Cu; f_8004E34C(c); // 801F9598
  c->r[4]=c->r[3]|c->r[3]; // 801F959C
  c->r[3]=c->r[31]+0x00000054u; // 801F95A0
  c->lr=0x801F95A8u; f_8004A65C(c); // 801F95A4
  c->r[3]=c->r[1]+0x000000D4u; // 801F95A8
  {uint32_t ea=c->r[2]+0xFFFF966Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F95AC
  {uint32_t ea=c->r[2]+0xFFFF9670u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F95B0
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F95B4
  c->lr=0x801F95BCu; f_8004E34C(c); // 801F95B8
  c->r[4]=c->r[3]|c->r[3]; // 801F95BC
  c->r[3]=c->r[31]+0x00000060u; // 801F95C0
  c->lr=0x801F95C8u; f_8004A65C(c); // 801F95C4
  c->r[3]=c->r[1]+0x000000C8u; // 801F95C8
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F95CC
  c->f[2]=c->f[1]; // 801F95D0
  c->f[3]=c->f[1]; // 801F95D4
  c->lr=0x801F95DCu; f_8004E34C(c); // 801F95D8
  c->r[4]=c->r[3]|c->r[3]; // 801F95DC
  c->r[3]=c->r[31]+0x0000006Cu; // 801F95E0
  c->lr=0x801F95E8u; f_8004A65C(c); // 801F95E4
  c->r[3]=c->r[1]+0x000000BCu; // 801F95E8
  {uint32_t ea=c->r[2]+0xFFFF9670u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F95EC
  {uint32_t ea=c->r[2]+0xFFFF9674u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F95F0
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F95F4
  c->lr=0x801F95FCu; f_8004E34C(c); // 801F95F8
  c->r[4]=c->r[3]|c->r[3]; // 801F95FC
  c->r[3]=c->r[31]+0x00000078u; // 801F9600
  c->lr=0x801F9608u; f_8004A65C(c); // 801F9604
  c->r[3]=c->r[1]+0x000000B0u; // 801F9608
  {uint32_t ea=c->r[2]+0xFFFF9674u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F960C
  c->f[2]=c->f[1]; // 801F9610
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9614
  c->lr=0x801F961Cu; f_8004E34C(c); // 801F9618
  c->r[4]=c->r[3]|c->r[3]; // 801F961C
  c->r[3]=c->r[31]+0x00000084u; // 801F9620
  c->lr=0x801F9628u; f_8004A65C(c); // 801F9624
  c->r[3]=c->r[1]+0x000000A4u; // 801F9628
  {uint32_t ea=c->r[2]+0xFFFF9678u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F962C
  {uint32_t ea=c->r[2]+0xFFFF966Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9630
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9634
  c->lr=0x801F963Cu; f_8004E34C(c); // 801F9638
  c->r[4]=c->r[3]|c->r[3]; // 801F963C
  c->r[3]=c->r[31]+0x00000090u; // 801F9640
  c->lr=0x801F9648u; f_8004A65C(c); // 801F9644
  c->r[3]=c->r[1]+0x00000098u; // 801F9648
  {uint32_t ea=c->r[2]+0xFFFF967Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F964C
  {uint32_t ea=c->r[2]+0xFFFF9680u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9650
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9654
  c->lr=0x801F965Cu; f_8004E34C(c); // 801F9658
  c->r[4]=c->r[3]|c->r[3]; // 801F965C
  c->r[3]=c->r[31]+0x000000A8u; // 801F9660
  c->lr=0x801F9668u; f_8004A65C(c); // 801F9664
  c->r[3]=c->r[1]+0x0000008Cu; // 801F9668
  {uint32_t ea=c->r[2]+0xFFFF9684u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F966C
  {uint32_t ea=c->r[2]+0xFFFF9670u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9670
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9674
  c->lr=0x801F967Cu; f_8004E34C(c); // 801F9678
  c->r[4]=c->r[3]|c->r[3]; // 801F967C
  c->r[3]=c->r[31]+0x000000B4u; // 801F9680
  c->lr=0x801F9688u; f_8004A65C(c); // 801F9684
  c->r[3]=c->r[1]+0x00000080u; // 801F9688
  {uint32_t ea=c->r[2]+0xFFFF9688u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F968C
  {uint32_t ea=c->r[2]+0xFFFF968Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9690
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9694
  c->lr=0x801F969Cu; f_8004E34C(c); // 801F9698
  c->r[4]=c->r[3]|c->r[3]; // 801F969C
  c->r[3]=c->r[31]+0x000000C0u; // 801F96A0
  c->lr=0x801F96A8u; f_8004A65C(c); // 801F96A4
  c->r[3]=c->r[1]+0x00000074u; // 801F96A8
  {uint32_t ea=c->r[2]+0xFFFF9690u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F96AC
  {uint32_t ea=c->r[2]+0xFFFF9694u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F96B0
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F96B4
  c->lr=0x801F96BCu; f_8004E34C(c); // 801F96B8
  c->r[4]=c->r[3]|c->r[3]; // 801F96BC
  c->r[3]=c->r[31]+0x000000CCu; // 801F96C0
  c->lr=0x801F96C8u; f_8004A65C(c); // 801F96C4
  c->r[3]=c->r[1]+0x00000068u; // 801F96C8
  {uint32_t ea=c->r[2]+0xFFFF9698u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F96CC
  {uint32_t ea=c->r[2]+0xFFFF969Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F96D0
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F96D4
  c->lr=0x801F96DCu; f_8004E34C(c); // 801F96D8
  c->r[4]=c->r[3]|c->r[3]; // 801F96DC
  c->r[3]=c->r[31]+0x000000D8u; // 801F96E0
  c->lr=0x801F96E8u; f_8004A65C(c); // 801F96E4
  c->r[3]=c->r[1]+0x0000005Cu; // 801F96E8
  {uint32_t ea=c->r[2]+0xFFFF96A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F96EC
  {uint32_t ea=c->r[2]+0xFFFF96A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F96F0
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F96F4
  c->lr=0x801F96FCu; f_8004E34C(c); // 801F96F8
  c->r[4]=c->r[3]|c->r[3]; // 801F96FC
  c->r[3]=c->r[31]+0x000000E4u; // 801F9700
  c->lr=0x801F9708u; f_8004A65C(c); // 801F9704
  c->r[3]=c->r[1]+0x00000050u; // 801F9708
  {uint32_t ea=c->r[2]+0xFFFF96A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F970C
  {uint32_t ea=c->r[2]+0xFFFF967Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9710
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9714
  c->lr=0x801F971Cu; f_8004E34C(c); // 801F9718
  c->r[4]=c->r[3]|c->r[3]; // 801F971C
  c->r[3]=c->r[31]+0x000000F0u; // 801F9720
  c->lr=0x801F9728u; f_8004A65C(c); // 801F9724
  c->r[3]=c->r[1]+0x00000044u; // 801F9728
  {uint32_t ea=c->r[2]+0xFFFF9690u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F972C
  {uint32_t ea=c->r[2]+0xFFFF9688u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9730
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9734
  c->lr=0x801F973Cu; f_8004E34C(c); // 801F9738
  c->r[4]=c->r[3]|c->r[3]; // 801F973C
  c->r[3]=c->r[31]+0x000000FCu; // 801F9740
  c->lr=0x801F9748u; f_8004A65C(c); // 801F9744
  c->r[3]=c->r[1]+0x00000038u; // 801F9748
  {uint32_t ea=c->r[2]+0xFFFF96A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F974C
  {uint32_t ea=c->r[2]+0xFFFF96ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9750
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9754
  c->lr=0x801F975Cu; f_8004E34C(c); // 801F9758
  c->r[4]=c->r[3]|c->r[3]; // 801F975C
  c->r[3]=c->r[31]+0x00000108u; // 801F9760
  c->lr=0x801F9768u; f_8004A65C(c); // 801F9764
  c->r[3]=c->r[1]+0x0000002Cu; // 801F9768
  {uint32_t ea=c->r[2]+0xFFFF9674u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F976C
  c->f[2]=c->f[1]; // 801F9770
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9774
  c->lr=0x801F977Cu; f_8004E34C(c); // 801F9778
  c->r[4]=c->r[3]|c->r[3]; // 801F977C
  c->r[3]=c->r[31]+0x00000114u; // 801F9780
  c->lr=0x801F9788u; f_8004A65C(c); // 801F9784
  c->r[3]=c->r[1]+0x00000020u; // 801F9788
  {uint32_t ea=c->r[2]+0xFFFF9688u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F978C
  {uint32_t ea=c->r[2]+0xFFFF96ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801F9790
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F9794
  c->lr=0x801F979Cu; f_8004E34C(c); // 801F9798
  c->r[4]=c->r[3]|c->r[3]; // 801F979C
  c->r[3]=c->r[31]+0x00000120u; // 801F97A0
  c->lr=0x801F97A8u; f_8004A65C(c); // 801F97A4
  c->r[3]=c->r[1]+0x00000014u; // 801F97A8
  {uint32_t ea=c->r[2]+0xFFFF9678u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F97AC
  {uint32_t ea=c->r[2]+0xFFFF96B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801F97B0
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F97B4
  c->lr=0x801F97BCu; f_8004E34C(c); // 801F97B8
  c->r[4]=c->r[3]|c->r[3]; // 801F97BC
  c->r[3]=c->r[31]+0x0000012Cu; // 801F97C0
  c->lr=0x801F97C8u; f_8004A65C(c); // 801F97C4
  c->r[30]=0u+0x00000000u; // 801F97C8
  c->r[29]=0u+0x00000000u; // 801F97CC
  {uint32_t ea=c->r[2]+0xFFFF96B8u; c->f[29]=c->ps1[29]=RF32(ea);} // 801F97D0
  {uint32_t ea=c->r[2]+0xFFFF96B4u; c->f[31]=c->ps1[31]=RF32(ea);} // 801F97D4
L_801F97D8:;
  c->lr=0x801F97DCu; f_8005C5B0(c); // 801F97D8
  c->f[30]=c->ps1[30]=S(c->f[29]*c->f[1]); // 801F97DC
  c->lr=0x801F97E4u; f_8005C5B0(c); // 801F97E0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801F97E4
  c->r[3]=c->r[1]+0x00000008u; // 801F97E8
  c->f[2]=c->f[30]; // 801F97EC
  {uint32_t ea=c->r[2]+0xFFFF9668u; c->f[3]=c->ps1[3]=RF32(ea);} // 801F97F0
  c->lr=0x801F97F8u; f_8004E34C(c); // 801F97F4
  c->r[4]=c->r[3]|c->r[3]; // 801F97F8
  c->r[3]=c->r[31]+c->r[29]; // 801F97FC
  c->r[3]=c->r[3]+0x00000144u; // 801F9800
  c->lr=0x801F9808u; f_8004A65C(c); // 801F9804
  c->r[29]=c->r[29]+0x0000000Cu; // 801F9808
  c->r[30]=c->r[30]+0x00000001u; // 801F980C
  cmps(c,0,(int32_t)c->r[30],99); // 801F9810
  if (crb(c,0)) { IRQCHK(c); goto L_801F97D8; } // 801F9814
  {uint32_t ea=c->r[2]+0xFFFF96BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801F9818
  {uint32_t ea=c->r[31]+0x00000604u; WF32(ea,c->f[0]);} // 801F981C
  c->r[3]=c->r[31]+0x000005E8u; // 801F9820
  c->r[4]=0u+0x804C0000u; // 801F9824
  c->r[4]=c->r[4]+0x000024A0u; // 801F9828
  c->lr=0x801F9830u; f_8004A65C(c); // 801F982C
  c->r[3]=c->r[31]+0x000005F4u; // 801F9830
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801F9834
  c->lr=0x801F983Cu; f_800593A0(c); // 801F9838
  c->r[3]=c->r[31]+0x000005FCu; // 801F983C
  c->r[4]=c->r[13]+0xFFFFB7D8u; // 801F9840
  c->lr=0x801F9848u; f_800593A0(c); // 801F9844
  c->r[3]=c->r[31]|c->r[31]; // 801F9848
  c->r[0]=0u+0x00000128u; // 801F984C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801F9850
  {uint32_t ea=c->r[1]+0x00000120u; c->f[31]=RF64(ea);} // 801F9854
  c->r[0]=0u+0x00000118u; // 801F9858
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801F985C
  {uint32_t ea=c->r[1]+0x00000110u; c->f[30]=RF64(ea);} // 801F9860
  c->r[0]=0u+0x00000108u; // 801F9864
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801F9868
  {uint32_t ea=c->r[1]+0x00000100u; c->f[29]=RF64(ea);} // 801F986C
  c->r[31]=R32(c->r[1]+0x000000FCu); // 801F9870
  c->r[30]=R32(c->r[1]+0x000000F8u); // 801F9874
  c->r[29]=R32(c->r[1]+0x000000F4u); // 801F9878
  c->r[28]=R32(c->r[1]+0x000000F0u); // 801F987C
  c->r[0]=R32(c->r[1]+0x00000134u); // 801F9880
  c->lr=c->r[0]; // 801F9884
  c->r[1]=c->r[1]+0x00000130u; // 801F9888
  return; // 801F988C
}

// fn_801F9890
void f_801F9890(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801F9890
  f_8004A65C(c); return; // 801F9894
}

// fn_801F9898
void f_801F9898(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801F9898
  c->r[3]=c->r[4]|c->r[4]; // 801F989C
  c->r[4]=c->r[5]+0x00000048u; // 801F98A0
  f_8004A65C(c); return; // 801F98A4
}

// fn_801F98A8
void f_801F98A8(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F98A8
  c->r[3]=c->r[3]+c->r[0]; // 801F98AC
  c->r[3]=c->r[3]+0x00000054u; // 801F98B0
  c->r[4]=c->r[5]|c->r[5]; // 801F98B4
  f_8004A65C(c); return; // 801F98B8
}

// fn_801F98BC
void f_801F98BC(Ctx* __restrict c) {
  c->r[6]=c->r[3]|c->r[3]; // 801F98BC
  c->r[3]=c->r[5]|c->r[5]; // 801F98C0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F98C4
  c->r[4]=c->r[6]+c->r[0]; // 801F98C8
  c->r[4]=c->r[4]+0x00000054u; // 801F98CC
  f_8004A65C(c); return; // 801F98D0
}

// fn_801F98D4
void f_801F98D4(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F98D4
  c->r[3]=c->r[3]+c->r[0]; // 801F98D8
  c->r[3]=c->r[3]+0x000000A8u; // 801F98DC
  c->r[4]=c->r[5]|c->r[5]; // 801F98E0
  f_8004A65C(c); return; // 801F98E4
}

// fn_801F98E8
void f_801F98E8(Ctx* __restrict c) {
  c->r[6]=c->r[3]|c->r[3]; // 801F98E8
  c->r[3]=c->r[5]|c->r[5]; // 801F98EC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F98F0
  c->r[4]=c->r[6]+c->r[0]; // 801F98F4
  c->r[4]=c->r[4]+0x000000A8u; // 801F98F8
  f_8004A65C(c); return; // 801F98FC
}

// fn_801F9900
void f_801F9900(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F9900
  c->r[3]=c->r[3]+c->r[0]; // 801F9904
  c->r[3]=c->r[3]+0x000000D8u; // 801F9908
  c->r[4]=c->r[5]|c->r[5]; // 801F990C
  f_8004A65C(c); return; // 801F9910
}

// fn_801F9914
void f_801F9914(Ctx* __restrict c) {
  c->r[6]=c->r[3]|c->r[3]; // 801F9914
  c->r[3]=c->r[5]|c->r[5]; // 801F9918
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F991C
  c->r[4]=c->r[6]+c->r[0]; // 801F9920
  c->r[4]=c->r[4]+0x000000D8u; // 801F9924
  f_8004A65C(c); return; // 801F9928
}

// fn_801F992C
void f_801F992C(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F992C
  c->r[3]=c->r[3]+c->r[0]; // 801F9930
  c->r[3]=c->r[3]+0x00000144u; // 801F9934
  c->r[4]=c->r[5]|c->r[5]; // 801F9938
  f_8004A65C(c); return; // 801F993C
}

// fn_801F9940
void f_801F9940(Ctx* __restrict c) {
  c->r[6]=c->r[3]|c->r[3]; // 801F9940
  c->r[3]=c->r[5]|c->r[5]; // 801F9944
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F9948
  c->r[4]=c->r[6]+c->r[0]; // 801F994C
  c->r[4]=c->r[4]+0x00000144u; // 801F9950
  f_8004A65C(c); return; // 801F9954
}

// fn_801F9958
void f_801F9958(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000604u; WF32(ea,c->f[1]);} // 801F9958
  return; // 801F995C
}

// fn_801F9960
void f_801F9960(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000604u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F9960
  return; // 801F9964
}

// fn_801F9968
void f_801F9968(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9688u; c->f[0]=c->ps1[0]=RF32(ea);} // 801F9968
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801F996C
  {uint32_t ea=c->r[3]+0x00000608u; WF32(ea,c->f[0]);} // 801F9970
  return; // 801F9974
}

// fn_801F9978
void f_801F9978(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000608u; c->f[1]=c->ps1[1]=RF32(ea);} // 801F9978
  return; // 801F997C
}

// fn_801F9980
void f_801F9980(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000060Cu; WF32(ea,c->f[1]);} // 801F9980
  return; // 801F9984
}

// fn_801F9988
void f_801F9988(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000060Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801F9988
  return; // 801F998C
}

// fn_801F9990
void f_801F9990(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000005E8u; // 801F9990
  f_8004A65C(c); return; // 801F9994
}

// fn_801F9998
void f_801F9998(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801F9998
  c->r[3]=c->r[4]|c->r[4]; // 801F999C
  c->r[4]=c->r[5]+0x000005E8u; // 801F99A0
  f_8004A65C(c); return; // 801F99A4
}

// fn_801F99A8
void f_801F99A8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000005F4u; // 801F99A8
  f_800593A0(c); return; // 801F99AC
}

// fn_801F99B0
void f_801F99B0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000005FCu; // 801F99B0
  f_800593A0(c); return; // 801F99B4
}

// fn_801F99B8
void f_801F99B8(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801F99B8
  c->r[3]=c->r[4]|c->r[4]; // 801F99BC
  c->r[4]=c->r[5]+0x000005FCu; // 801F99C0
  f_800593A0(c); return; // 801F99C4
}

// fn_801F99C8
void f_801F99C8(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801F99C8
  c->r[3]=c->r[3]+0x00001EF8u; // 801F99CC
  return; // 801F99D0
}

// fn_801F99D4
void f_801F99D4(Ctx* __restrict c) {
  c->r[3]=0u+0x804E0000u; // 801F99D4
  c->r[3]=c->r[3]+0xFFFFA1D4u; // 801F99D8
  return; // 801F99DC
}

// fn_801F99E0
void f_801F99E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F99E0
  c->r[0]=c->lr; // 801F99E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F99E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F99EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F99F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F99F4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801F99F8
  c->r[28]=c->r[3]|c->r[3]; // 801F99FC
  c->lr=0x801F9A04u; f_8004B0A4(c); // 801F9A00
  c->r[3]=c->r[28]+0x0000000Cu; // 801F9A04
  c->lr=0x801F9A0Cu; f_8004B0A4(c); // 801F9A08
  c->r[3]=c->r[28]+0x00000018u; // 801F9A0C
  c->lr=0x801F9A14u; f_8004B0A4(c); // 801F9A10
  c->r[30]=c->r[28]+0x00000024u; // 801F9A14
  c->r[31]=c->r[28]+0x000000E4u; // 801F9A18
L_801F9A1C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9A1C
  c->lr=0x801F9A24u; f_8004B0A4(c); // 801F9A20
  c->r[30]=c->r[30]+0x0000000Cu; // 801F9A24
  cmpu(c,0,c->r[30],c->r[31]); // 801F9A28
  if (crb(c,0)) { IRQCHK(c); goto L_801F9A1C; } // 801F9A2C
  c->r[3]=c->r[28]|c->r[28]; // 801F9A30
  c->r[31]=0u+0x804C0000u; // 801F9A34
  c->r[4]=c->r[31]+0x000024A0u; // 801F9A38
  c->lr=0x801F9A40u; f_8004A65C(c); // 801F9A3C
  c->r[3]=c->r[28]+0x0000000Cu; // 801F9A40
  c->r[4]=c->r[31]+0x000024A0u; // 801F9A44
  c->lr=0x801F9A4Cu; f_8004A65C(c); // 801F9A48
  c->r[3]=c->r[28]+0x00000018u; // 801F9A4C
  c->r[4]=c->r[31]+0x000024A0u; // 801F9A50
  c->lr=0x801F9A58u; f_8004A65C(c); // 801F9A54
  c->r[0]=0u+0x00000000u; // 801F9A58
  W32(c->r[28]+0x000000E8u,c->r[0]); // 801F9A5C
  W32(c->r[28]+0x000000ECu,c->r[0]); // 801F9A60
  W32(c->r[28]+0x000000F0u,c->r[0]); // 801F9A64
  W32(c->r[28]+0x000000FCu,c->r[0]); // 801F9A68
  W32(c->r[28]+0x00000100u,c->r[0]); // 801F9A6C
  W32(c->r[28]+0x000000E4u,c->r[0]); // 801F9A70
  c->r[29]=0u+0x00000000u; // 801F9A74
  c->r[30]=c->r[28]+0x00000024u; // 801F9A78
L_801F9A7C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9A7C
  c->r[4]=c->r[31]+0x000024A0u; // 801F9A80
  c->lr=0x801F9A88u; f_8004A65C(c); // 801F9A84
  c->r[30]=c->r[30]+0x0000000Cu; // 801F9A88
  c->r[29]=c->r[29]+0x00000001u; // 801F9A8C
  cmps(c,0,(int32_t)c->r[29],16); // 801F9A90
  if (crb(c,0)) { IRQCHK(c); goto L_801F9A7C; } // 801F9A94
  c->r[3]=c->r[28]|c->r[28]; // 801F9A98
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9A9C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F9AA0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F9AA4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801F9AA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9AAC
  c->lr=c->r[0]; // 801F9AB0
  c->r[1]=c->r[1]+0x00000020u; // 801F9AB4
  return; // 801F9AB8
}

// fn_801F9ABC
void f_801F9ABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9ABC
  c->r[0]=c->lr; // 801F9AC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9AC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9AC8
  c->r[31]=c->r[3]|c->r[3]; // 801F9ACC
  cmps(c,0,(int32_t)c->r[3],0); // 801F9AD0
  if (crb(c,2)) { goto L_801F9AE8; } // 801F9AD4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801F9AD8
  cmps(c,0,(int32_t)c->r[0],0); // 801F9ADC
  if (!crb(c,1)) { goto L_801F9AE8; } // 801F9AE0
  c->lr=0x801F9AE8u; f_80047B20(c); // 801F9AE4
L_801F9AE8:;
  c->r[3]=c->r[31]|c->r[31]; // 801F9AE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9AF0
  c->lr=c->r[0]; // 801F9AF4
  c->r[1]=c->r[1]+0x00000010u; // 801F9AF8
  return; // 801F9AFC
}

// fn_801F9B00
void f_801F9B00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9B00
  c->r[0]=c->lr; // 801F9B04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F9B08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F9B0C
  c->r[31]=c->r[3]|c->r[3]; // 801F9B10
  c->r[3]=c->r[1]+0x00000008u; // 801F9B14
  c->lr=0x801F9B1Cu; f_8006398C(c); // 801F9B18
  c->r[3]=c->r[31]|c->r[31]; // 801F9B1C
  c->r[4]=c->r[1]+0x00000008u; // 801F9B20
  c->lr=0x801F9B28u; f_8004A65C(c); // 801F9B24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9B28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9B2C
  c->lr=c->r[0]; // 801F9B30
  c->r[1]=c->r[1]+0x00000020u; // 801F9B34
  return; // 801F9B38
}

// fn_801F9B3C
void f_801F9B3C(Ctx* __restrict c) {
  return; // 801F9B3C
}

// fn_801F9B40
void f_801F9B40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000000Cu; // 801F9B40
  f_8004A65C(c); return; // 801F9B44
}

// fn_801F9B48
void f_801F9B48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x0000000Cu; // 801F9B48
  return; // 801F9B4C
}

// fn_801F9B50
void f_801F9B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9B50
  c->r[0]=c->lr; // 801F9B54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F9B58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F9B5C
  c->r[31]=c->r[3]|c->r[3]; // 801F9B60
  c->r[3]=c->r[1]+0x00000008u; // 801F9B64
  c->lr=0x801F9B6Cu; f_8006398C(c); // 801F9B68
  c->r[3]=c->r[31]+0x00000018u; // 801F9B6C
  c->r[4]=c->r[1]+0x00000008u; // 801F9B70
  c->lr=0x801F9B78u; f_8004A65C(c); // 801F9B74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9B78
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9B7C
  c->lr=c->r[0]; // 801F9B80
  c->r[1]=c->r[1]+0x00000020u; // 801F9B84
  return; // 801F9B88
}

// fn_801F9B8C
void f_801F9B8C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000018u; // 801F9B8C
  return; // 801F9B90
}

// fn_801F9B94
void f_801F9B94(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F0u,c->r[4]); // 801F9B94
  return; // 801F9B98
}

// fn_801F9B9C
void f_801F9B9C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801F9B9C
  return; // 801F9BA0
}

// fn_801F9BA4
void f_801F9BA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9BA4
  c->r[0]=c->lr; // 801F9BA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F9BAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F9BB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F9BB4
  c->r[30]=c->r[3]|c->r[3]; // 801F9BB8
  c->r[31]=c->r[5]|c->r[5]; // 801F9BBC
  cmps(c,0,(int32_t)c->r[5],0); // 801F9BC0
  if (crb(c,0)) { goto L_801F9BEC; } // 801F9BC4
  cmps(c,0,(int32_t)c->r[5],16); // 801F9BC8
  if (!crb(c,0)) { goto L_801F9BEC; } // 801F9BCC
  c->r[3]=c->r[1]+0x00000008u; // 801F9BD0
  c->lr=0x801F9BD8u; f_8006398C(c); // 801F9BD4
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801F9BD8
  c->r[3]=c->r[30]+c->r[0]; // 801F9BDC
  c->r[3]=c->r[3]+0x00000024u; // 801F9BE0
  c->r[4]=c->r[1]+0x00000008u; // 801F9BE4
  c->lr=0x801F9BECu; f_8004A65C(c); // 801F9BE8
L_801F9BEC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9BEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F9BF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9BF4
  c->lr=c->r[0]; // 801F9BF8
  c->r[1]=c->r[1]+0x00000020u; // 801F9BFC
  return; // 801F9C00
}

// fn_801F9C04
void f_801F9C04(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801F9C04
  if (crb(c,0)) { goto L_801F9C24; } // 801F9C08
  cmps(c,0,(int32_t)c->r[4],16); // 801F9C0C
  if (!crb(c,0)) { goto L_801F9C24; } // 801F9C10
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801F9C14
  c->r[3]=c->r[3]+c->r[0]; // 801F9C18
  c->r[3]=c->r[3]+0x00000024u; // 801F9C1C
  return; // 801F9C20
L_801F9C24:;
  c->r[3]=0u+0x00000000u; // 801F9C24
  return; // 801F9C28
}

// fn_801F9C2C
void f_801F9C2C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E4u,c->r[4]); // 801F9C2C
  return; // 801F9C30
}

// fn_801F9C34
void f_801F9C34(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E4u); // 801F9C34
  return; // 801F9C38
}

// fn_801F9C3C
void f_801F9C3C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000E8u,c->r[4]); // 801F9C3C
  return; // 801F9C40
}

// fn_801F9C44
void f_801F9C44(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801F9C44
  return; // 801F9C48
}

// fn_801F9C4C
void f_801F9C4C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000ECu,c->r[4]); // 801F9C4C
  return; // 801F9C50
}

// fn_801F9C54
void f_801F9C54(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801F9C54
  return; // 801F9C58
}

// fn_801F9C5C
void f_801F9C5C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F4u,c->r[4]); // 801F9C5C
  return; // 801F9C60
}

// fn_801F9C64
void f_801F9C64(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801F9C64
  return; // 801F9C68
}

// fn_801F9C6C
void f_801F9C6C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F8u,c->r[4]); // 801F9C6C
  return; // 801F9C70
}

// fn_801F9C74
void f_801F9C74(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801F9C74
  return; // 801F9C78
}

// fn_801F9C7C
void f_801F9C7C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000FCu); // 801F9C7C
  c->r[0]=0u+0x00000001u; // 801F9C80
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801F9C84
  c->r[0]=c->r[5]|c->r[0]; // 801F9C88
  W32(c->r[3]+0x000000FCu,c->r[0]); // 801F9C8C
  return; // 801F9C90
}

// fn_801F9C94
void f_801F9C94(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x000000FCu); // 801F9C94
  c->r[0]=0u+0x00000001u; // 801F9C98
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801F9C9C
  c->r[0]=~(c->r[0]|c->r[0]); // 801F9CA0
  c->r[0]=c->r[5]&c->r[0]; // 801F9CA4
  W32(c->r[3]+0x000000FCu,c->r[0]); // 801F9CA8
  return; // 801F9CAC
}

// fn_801F9CB0
void f_801F9CB0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000FCu); // 801F9CB0
  c->r[0]=0u+0x00000001u; // 801F9CB4
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801F9CB8
  c->r[3]=c->r[3]&c->r[0]; // 801F9CBC
  c->r[0]=0u-c->r[3]; // 801F9CC0
  c->r[0]=c->r[0]|c->r[3]; // 801F9CC4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F9CC8
  return; // 801F9CCC
}

// fn_801F9CD0
void f_801F9CD0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000100u); // 801F9CD0
  c->r[0]=0u+0x00000001u; // 801F9CD4
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801F9CD8
  c->r[0]=c->r[5]|c->r[0]; // 801F9CDC
  W32(c->r[3]+0x00000100u,c->r[0]); // 801F9CE0
  return; // 801F9CE4
}

// fn_801F9CE8
void f_801F9CE8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000100u); // 801F9CE8
  c->r[0]=0u+0x00000001u; // 801F9CEC
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801F9CF0
  c->r[0]=~(c->r[0]|c->r[0]); // 801F9CF4
  c->r[0]=c->r[5]&c->r[0]; // 801F9CF8
  W32(c->r[3]+0x00000100u,c->r[0]); // 801F9CFC
  return; // 801F9D00
}

// fn_801F9D04
void f_801F9D04(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000100u); // 801F9D04
  c->r[0]=0u+0x00000001u; // 801F9D08
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 801F9D0C
  c->r[3]=c->r[3]&c->r[0]; // 801F9D10
  c->r[0]=0u-c->r[3]; // 801F9D14
  c->r[0]=c->r[0]|c->r[3]; // 801F9D18
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801F9D1C
  return; // 801F9D20
}

// fn_801F9D24
void f_801F9D24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9D24
  c->r[0]=c->lr; // 801F9D28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9D2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9D30
  c->r[31]=0u+0x804E0000u; // 801F9D34
  c->r[3]=c->r[31]+0xFFFFA1D4u; // 801F9D38
  c->lr=0x801F9D40u; f_801F99E0(c); // 801F9D3C
  c->r[3]=c->r[31]+0xFFFFA1D4u; // 801F9D40
  c->r[4]=0u+0x80200000u; // 801F9D44
  c->r[4]=c->r[4]+0xFFFF9ABCu; // 801F9D48
  c->r[5]=0u+0x804E0000u; // 801F9D4C
  c->r[5]=c->r[5]+0xFFFFA1C8u; // 801F9D50
  c->lr=0x801F9D58u; f_802F0334(c); // 801F9D54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9D5C
  c->lr=c->r[0]; // 801F9D60
  c->r[1]=c->r[1]+0x00000010u; // 801F9D64
  return; // 801F9D68
}

// fn_801F9D6C
void f_801F9D6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9D6C
  c->r[0]=c->lr; // 801F9D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9D74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9D78
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F9D7C
  c->r[30]=c->r[3]|c->r[3]; // 801F9D80
  c->r[31]=c->r[4]|c->r[4]; // 801F9D84
  cmps(c,0,(int32_t)c->r[3],0); // 801F9D88
  if (crb(c,2)) { goto L_801F9DAC; } // 801F9D8C
  c->r[4]=0u+0x00000000u; // 801F9D90
  c->lr=0x801F9D98u; f_801197A8(c); // 801F9D94
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801F9D98
  cmps(c,0,(int32_t)c->r[0],0); // 801F9D9C
  if (!crb(c,1)) { goto L_801F9DAC; } // 801F9DA0
  c->r[3]=c->r[30]|c->r[30]; // 801F9DA4
  c->lr=0x801F9DACu; f_80047B20(c); // 801F9DA8
L_801F9DAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9DAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9DB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9DB8
  c->lr=c->r[0]; // 801F9DBC
  c->r[1]=c->r[1]+0x00000010u; // 801F9DC0
  return; // 801F9DC4
}

// fn_801F9DC8
void f_801F9DC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9DC8
  c->r[0]=c->lr; // 801F9DCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801F9DD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801F9DD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801F9DD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801F9DDC
  c->r[29]=c->r[3]|c->r[3]; // 801F9DE0
  c->lr=0x801F9DE8u; f_80056B5C(c); // 801F9DE4
  c->r[30]=c->r[3]|c->r[3]; // 801F9DE8
  c->lr=0x801F9DF0u; f_8005DEE8(c); // 801F9DEC
  c->lr=0x801F9DF4u; f_80056B54(c); // 801F9DF0
  c->r[3]=0u+0x00000610u; // 801F9DF4
  c->lr=0x801F9DFCu; f_80047B64(c); // 801F9DF8
  c->r[31]=c->r[3]|c->r[3]; // 801F9DFC
  cmps(c,0,(int32_t)c->r[3],0); // 801F9E00
  if (crb(c,2)) { goto L_801F9E0C; } // 801F9E04
  c->lr=0x801F9E0Cu; f_801F9438(c); // 801F9E08
L_801F9E0C:;
  c->r[3]=c->r[30]|c->r[30]; // 801F9E0C
  c->lr=0x801F9E14u; f_80056B54(c); // 801F9E10
  c->r[3]=c->r[31]|c->r[31]; // 801F9E14
  c->r[4]=0u+0x00000016u; // 801F9E18
  c->lr=0x801F9E20u; f_8011A278(c); // 801F9E1C
  c->r[3]=c->r[29]|c->r[29]; // 801F9E20
  c->r[4]=c->r[31]|c->r[31]; // 801F9E24
  c->lr=0x801F9E2Cu; f_8028CA70(c); // 801F9E28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801F9E2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801F9E30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801F9E34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801F9E38
  c->lr=c->r[0]; // 801F9E3C
  c->r[1]=c->r[1]+0x00000020u; // 801F9E40
  return; // 801F9E44
}

// fn_801F9E48
void f_801F9E48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9E48
  c->r[0]=c->lr; // 801F9E4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9E50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9E54
  c->r[31]=c->r[4]|c->r[4]; // 801F9E58
  c->r[4]=0u+0x00000016u; // 801F9E5C
  c->lr=0x801F9E64u; f_8011B718(c); // 801F9E60
  cmps(c,0,(int32_t)c->r[3],0); // 801F9E64
  if (crb(c,2)) { goto L_801F9E74; } // 801F9E68
  c->r[4]=c->r[31]|c->r[31]; // 801F9E6C
  c->lr=0x801F9E74u; f_801F9890(c); // 801F9E70
L_801F9E74:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9E74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9E78
  c->lr=c->r[0]; // 801F9E7C
  c->r[1]=c->r[1]+0x00000010u; // 801F9E80
  return; // 801F9E84
}

// fn_801F9E88
void f_801F9E88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9E88
  c->r[0]=c->lr; // 801F9E8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9E90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9E94
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F9E98
  c->r[30]=c->r[4]|c->r[4]; // 801F9E9C
  c->r[31]=c->r[5]|c->r[5]; // 801F9EA0
  c->r[4]=0u+0x00000016u; // 801F9EA4
  c->lr=0x801F9EACu; f_8011B718(c); // 801F9EA8
  cmps(c,0,(int32_t)c->r[3],0); // 801F9EAC
  if (crb(c,2)) { goto L_801F9EC0; } // 801F9EB0
  c->r[4]=c->r[30]|c->r[30]; // 801F9EB4
  c->r[5]=c->r[31]|c->r[31]; // 801F9EB8
  c->lr=0x801F9EC0u; f_801F98A8(c); // 801F9EBC
L_801F9EC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9EC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9EC8
  c->lr=c->r[0]; // 801F9ECC
  c->r[1]=c->r[1]+0x00000010u; // 801F9ED0
  return; // 801F9ED4
}

// fn_801F9ED8
void f_801F9ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9ED8
  c->r[0]=c->lr; // 801F9EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9EE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9EE4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F9EE8
  c->r[30]=c->r[4]|c->r[4]; // 801F9EEC
  c->r[31]=c->r[5]|c->r[5]; // 801F9EF0
  c->r[4]=0u+0x00000016u; // 801F9EF4
  c->lr=0x801F9EFCu; f_8011B718(c); // 801F9EF8
  cmps(c,0,(int32_t)c->r[3],0); // 801F9EFC
  if (crb(c,2)) { goto L_801F9F10; } // 801F9F00
  c->r[4]=c->r[30]|c->r[30]; // 801F9F04
  c->r[5]=c->r[31]|c->r[31]; // 801F9F08
  c->lr=0x801F9F10u; f_801F98D4(c); // 801F9F0C
L_801F9F10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9F10
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9F14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9F18
  c->lr=c->r[0]; // 801F9F1C
  c->r[1]=c->r[1]+0x00000010u; // 801F9F20
  return; // 801F9F24
}

// fn_801F9F28
void f_801F9F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9F28
  c->r[0]=c->lr; // 801F9F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9F30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9F34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F9F38
  c->r[30]=c->r[4]|c->r[4]; // 801F9F3C
  c->r[31]=c->r[5]|c->r[5]; // 801F9F40
  c->r[4]=0u+0x00000016u; // 801F9F44
  c->lr=0x801F9F4Cu; f_8011B718(c); // 801F9F48
  cmps(c,0,(int32_t)c->r[3],0); // 801F9F4C
  if (crb(c,2)) { goto L_801F9F60; } // 801F9F50
  c->r[4]=c->r[30]|c->r[30]; // 801F9F54
  c->r[5]=c->r[31]|c->r[31]; // 801F9F58
  c->lr=0x801F9F60u; f_801F9900(c); // 801F9F5C
L_801F9F60:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9F60
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9F64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9F68
  c->lr=c->r[0]; // 801F9F6C
  c->r[1]=c->r[1]+0x00000010u; // 801F9F70
  return; // 801F9F74
}

// fn_801F9F78
void f_801F9F78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9F78
  c->r[0]=c->lr; // 801F9F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9F80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801F9F84
  W32(c->r[1]+0x00000008u,c->r[30]); // 801F9F88
  c->r[30]=c->r[4]|c->r[4]; // 801F9F8C
  c->r[31]=c->r[5]|c->r[5]; // 801F9F90
  c->r[4]=0u+0x00000016u; // 801F9F94
  c->lr=0x801F9F9Cu; f_8011B718(c); // 801F9F98
  cmps(c,0,(int32_t)c->r[3],0); // 801F9F9C
  if (crb(c,2)) { goto L_801F9FB0; } // 801F9FA0
  c->r[4]=c->r[30]|c->r[30]; // 801F9FA4
  c->r[5]=c->r[31]|c->r[31]; // 801F9FA8
  c->lr=0x801F9FB0u; f_801F992C(c); // 801F9FAC
L_801F9FB0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801F9FB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801F9FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9FB8
  c->lr=c->r[0]; // 801F9FBC
  c->r[1]=c->r[1]+0x00000010u; // 801F9FC0
  return; // 801F9FC4
}

// fn_801F9FC8
void f_801F9FC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801F9FC8
  c->r[0]=c->lr; // 801F9FCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801F9FD0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801F9FD4
  c->f[31]=c->f[1]; // 801F9FD8
  c->r[4]=0u+0x00000016u; // 801F9FDC
  c->lr=0x801F9FE4u; f_8011B718(c); // 801F9FE0
  cmps(c,0,(int32_t)c->r[3],0); // 801F9FE4
  if (crb(c,2)) { goto L_801F9FF4; } // 801F9FE8
  c->f[1]=c->f[31]; // 801F9FEC
  c->lr=0x801F9FF4u; f_801F9958(c); // 801F9FF0
L_801F9FF4:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801F9FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801F9FF8
  c->lr=c->r[0]; // 801F9FFC
  c->r[1]=c->r[1]+0x00000010u; // 801FA000
  return; // 801FA004
}

// fn_801FA008
void f_801FA008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA008
  c->r[0]=c->lr; // 801FA00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA010
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801FA014
  c->f[31]=c->f[1]; // 801FA018
  c->r[4]=0u+0x00000016u; // 801FA01C
  c->lr=0x801FA024u; f_8011B718(c); // 801FA020
  cmps(c,0,(int32_t)c->r[3],0); // 801FA024
  if (crb(c,2)) { goto L_801FA034; } // 801FA028
  c->f[1]=c->f[31]; // 801FA02C
  c->lr=0x801FA034u; f_801F9968(c); // 801FA030
L_801FA034:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801FA034
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA038
  c->lr=c->r[0]; // 801FA03C
  c->r[1]=c->r[1]+0x00000010u; // 801FA040
  return; // 801FA044
}

// fn_801FA048
void f_801FA048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA048
  c->r[0]=c->lr; // 801FA04C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA050
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801FA054
  c->f[31]=c->f[1]; // 801FA058
  c->r[4]=0u+0x00000016u; // 801FA05C
  c->lr=0x801FA064u; f_8011B718(c); // 801FA060
  cmps(c,0,(int32_t)c->r[3],0); // 801FA064
  if (crb(c,2)) { goto L_801FA074; } // 801FA068
  c->f[1]=c->f[31]; // 801FA06C
  c->lr=0x801FA074u; f_801F9980(c); // 801FA070
L_801FA074:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801FA074
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA078
  c->lr=c->r[0]; // 801FA07C
  c->r[1]=c->r[1]+0x00000010u; // 801FA080
  return; // 801FA084
}

// fn_801FA088
void f_801FA088(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA088
  c->r[0]=c->lr; // 801FA08C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA090
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA094
  c->r[31]=c->r[4]|c->r[4]; // 801FA098
  c->r[4]=0u+0x00000016u; // 801FA09C
  c->lr=0x801FA0A4u; f_8011B718(c); // 801FA0A0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA0A4
  if (crb(c,2)) { goto L_801FA0B4; } // 801FA0A8
  c->r[4]=c->r[31]|c->r[31]; // 801FA0AC
  c->lr=0x801FA0B4u; f_801F9990(c); // 801FA0B0
L_801FA0B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA0B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA0B8
  c->lr=c->r[0]; // 801FA0BC
  c->r[1]=c->r[1]+0x00000010u; // 801FA0C0
  return; // 801FA0C4
}

// fn_801FA0C8
void f_801FA0C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA0C8
  c->r[0]=c->lr; // 801FA0CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA0D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA0D4
  c->r[31]=c->r[4]|c->r[4]; // 801FA0D8
  c->r[4]=0u+0x00000016u; // 801FA0DC
  c->lr=0x801FA0E4u; f_8011B718(c); // 801FA0E0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA0E4
  if (crb(c,2)) { goto L_801FA0F4; } // 801FA0E8
  c->r[4]=c->r[31]|c->r[31]; // 801FA0EC
  c->lr=0x801FA0F4u; f_801F99A8(c); // 801FA0F0
L_801FA0F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA0F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA0F8
  c->lr=c->r[0]; // 801FA0FC
  c->r[1]=c->r[1]+0x00000010u; // 801FA100
  return; // 801FA104
}

// fn_801FA108
void f_801FA108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA108
  c->r[0]=c->lr; // 801FA10C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA110
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA114
  c->r[31]=c->r[4]|c->r[4]; // 801FA118
  c->r[4]=0u+0x00000016u; // 801FA11C
  c->lr=0x801FA124u; f_8011B718(c); // 801FA120
  cmps(c,0,(int32_t)c->r[3],0); // 801FA124
  if (crb(c,2)) { goto L_801FA134; } // 801FA128
  c->r[4]=c->r[31]|c->r[31]; // 801FA12C
  c->lr=0x801FA134u; f_801F99B0(c); // 801FA130
L_801FA134:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA134
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA138
  c->lr=c->r[0]; // 801FA13C
  c->r[1]=c->r[1]+0x00000010u; // 801FA140
  return; // 801FA144
}

// fn_801FA148
void f_801FA148(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA148
  c->r[0]=c->lr; // 801FA14C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA150
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA154
  c->r[31]=c->r[3]|c->r[3]; // 801FA158
  c->lr=0x801FA160u; f_8011B41C(c); // 801FA15C
  c->r[4]=c->r[31]|c->r[31]; // 801FA160
  c->lr=0x801FA168u; f_801F9E48(c); // 801FA164
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA168
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA16C
  c->lr=c->r[0]; // 801FA170
  c->r[1]=c->r[1]+0x00000010u; // 801FA174
  return; // 801FA178
}

// fn_801FA17C
void f_801FA17C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA17C
  c->r[0]=c->lr; // 801FA180
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA184
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA188
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FA18C
  c->r[30]=c->r[3]|c->r[3]; // 801FA190
  c->r[31]=c->r[4]|c->r[4]; // 801FA194
  c->lr=0x801FA19Cu; f_8011B41C(c); // 801FA198
  c->r[4]=c->r[30]|c->r[30]; // 801FA19C
  c->r[5]=c->r[31]|c->r[31]; // 801FA1A0
  c->lr=0x801FA1A8u; f_801F9E88(c); // 801FA1A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA1A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FA1AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA1B0
  c->lr=c->r[0]; // 801FA1B4
  c->r[1]=c->r[1]+0x00000010u; // 801FA1B8
  return; // 801FA1BC
}

// fn_801FA1C0
void f_801FA1C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA1C0
  c->r[0]=c->lr; // 801FA1C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA1C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA1CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FA1D0
  c->r[30]=c->r[3]|c->r[3]; // 801FA1D4
  c->r[31]=c->r[4]|c->r[4]; // 801FA1D8
  c->lr=0x801FA1E0u; f_8011B41C(c); // 801FA1DC
  c->r[4]=c->r[30]|c->r[30]; // 801FA1E0
  c->r[5]=c->r[31]|c->r[31]; // 801FA1E4
  c->lr=0x801FA1ECu; f_801F9ED8(c); // 801FA1E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA1EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FA1F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA1F4
  c->lr=c->r[0]; // 801FA1F8
  c->r[1]=c->r[1]+0x00000010u; // 801FA1FC
  return; // 801FA200
}

// fn_801FA204
void f_801FA204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA204
  c->r[0]=c->lr; // 801FA208
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA20C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA210
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FA214
  c->r[30]=c->r[3]|c->r[3]; // 801FA218
  c->r[31]=c->r[4]|c->r[4]; // 801FA21C
  c->lr=0x801FA224u; f_8011B41C(c); // 801FA220
  c->r[4]=c->r[30]|c->r[30]; // 801FA224
  c->r[5]=c->r[31]|c->r[31]; // 801FA228
  c->lr=0x801FA230u; f_801F9F28(c); // 801FA22C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA230
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FA234
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA238
  c->lr=c->r[0]; // 801FA23C
  c->r[1]=c->r[1]+0x00000010u; // 801FA240
  return; // 801FA244
}

// fn_801FA248
void f_801FA248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA248
  c->r[0]=c->lr; // 801FA24C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA250
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA254
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FA258
  c->r[30]=c->r[3]|c->r[3]; // 801FA25C
  c->r[31]=c->r[4]|c->r[4]; // 801FA260
  c->lr=0x801FA268u; f_8011B41C(c); // 801FA264
  c->r[4]=c->r[30]|c->r[30]; // 801FA268
  c->r[5]=c->r[31]|c->r[31]; // 801FA26C
  c->lr=0x801FA274u; f_801F9F78(c); // 801FA270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA274
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FA278
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA27C
  c->lr=c->r[0]; // 801FA280
  c->r[1]=c->r[1]+0x00000010u; // 801FA284
  return; // 801FA288
}

// fn_801FA28C
void f_801FA28C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA28C
  c->r[0]=c->lr; // 801FA290
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA294
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801FA298
  c->f[31]=c->f[1]; // 801FA29C
  c->lr=0x801FA2A4u; f_8011B41C(c); // 801FA2A0
  c->f[1]=c->f[31]; // 801FA2A4
  c->lr=0x801FA2ACu; f_801F9FC8(c); // 801FA2A8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801FA2AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA2B0
  c->lr=c->r[0]; // 801FA2B4
  c->r[1]=c->r[1]+0x00000010u; // 801FA2B8
  return; // 801FA2BC
}

// fn_801FA2C0
void f_801FA2C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA2C0
  c->r[0]=c->lr; // 801FA2C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA2C8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801FA2CC
  c->f[31]=c->f[1]; // 801FA2D0
  c->lr=0x801FA2D8u; f_8011B41C(c); // 801FA2D4
  c->f[1]=c->f[31]; // 801FA2D8
  c->lr=0x801FA2E0u; f_801FA008(c); // 801FA2DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801FA2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA2E4
  c->lr=c->r[0]; // 801FA2E8
  c->r[1]=c->r[1]+0x00000010u; // 801FA2EC
  return; // 801FA2F0
}

// fn_801FA2F4
void f_801FA2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA2F4
  c->r[0]=c->lr; // 801FA2F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA2FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801FA300
  c->f[31]=c->f[1]; // 801FA304
  c->lr=0x801FA30Cu; f_8011B41C(c); // 801FA308
  c->f[1]=c->f[31]; // 801FA30C
  c->lr=0x801FA314u; f_801FA048(c); // 801FA310
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801FA314
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA318
  c->lr=c->r[0]; // 801FA31C
  c->r[1]=c->r[1]+0x00000010u; // 801FA320
  return; // 801FA324
}

// fn_801FA328
void f_801FA328(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA328
  c->r[0]=c->lr; // 801FA32C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA330
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA334
  c->r[31]=c->r[3]|c->r[3]; // 801FA338
  c->lr=0x801FA340u; f_8011B41C(c); // 801FA33C
  c->r[4]=c->r[31]|c->r[31]; // 801FA340
  c->lr=0x801FA348u; f_801FA088(c); // 801FA344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA348
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA34C
  c->lr=c->r[0]; // 801FA350
  c->r[1]=c->r[1]+0x00000010u; // 801FA354
  return; // 801FA358
}

// fn_801FA35C
void f_801FA35C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA35C
  c->r[0]=c->lr; // 801FA360
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA364
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA368
  c->r[31]=c->r[3]|c->r[3]; // 801FA36C
  c->lr=0x801FA374u; f_8011B41C(c); // 801FA370
  c->r[4]=c->r[31]|c->r[31]; // 801FA374
  c->lr=0x801FA37Cu; f_801FA0C8(c); // 801FA378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA37C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA380
  c->lr=c->r[0]; // 801FA384
  c->r[1]=c->r[1]+0x00000010u; // 801FA388
  return; // 801FA38C
}

// fn_801FA390
void f_801FA390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA390
  c->r[0]=c->lr; // 801FA394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA39C
  c->r[31]=c->r[3]|c->r[3]; // 801FA3A0
  c->lr=0x801FA3A8u; f_8011B41C(c); // 801FA3A4
  c->r[4]=c->r[31]|c->r[31]; // 801FA3A8
  c->lr=0x801FA3B0u; f_801FA108(c); // 801FA3AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA3B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA3B4
  c->lr=c->r[0]; // 801FA3B8
  c->r[1]=c->r[1]+0x00000010u; // 801FA3BC
  return; // 801FA3C0
}

// fn_801FA3C4
void f_801FA3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA3C4
  c->r[0]=c->lr; // 801FA3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA3D0
  c->r[31]=c->r[3]|c->r[3]; // 801FA3D4
  c->lr=0x801FA3DCu; f_80130F14(c); // 801FA3D8
  c->r[3]=0u+0x80470000u; // 801FA3DC
  c->r[0]=c->r[3]+0x000062F8u; // 801FA3E0
  W32(c->r[31]+0x00000058u,c->r[0]); // 801FA3E4
  c->r[3]=c->r[31]|c->r[31]; // 801FA3E8
  c->r[4]=0u+0x80470000u; // 801FA3EC
  c->r[4]=c->r[4]+0x00006298u; // 801FA3F0
  c->lr=0x801FA3F8u; f_80131078(c); // 801FA3F4
  c->r[0]=0u+0x00000000u; // 801FA3F8
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801FA3FC
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801FA400
  W32(c->r[31]+0x000000F4u,c->r[0]); // 801FA404
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801FA408
  c->r[0]=0u+0x00000001u; // 801FA40C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801FA410
  c->r[3]=c->r[31]|c->r[31]; // 801FA414
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA418
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA41C
  c->lr=c->r[0]; // 801FA420
  c->r[1]=c->r[1]+0x00000010u; // 801FA424
  return; // 801FA428
}

// fn_801FA42C
void f_801FA42C(Ctx* __restrict c) {
  return; // 801FA42C
}

// fn_801FA430
void f_801FA430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA430
  c->r[0]=c->lr; // 801FA434
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FA438
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FA43C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FA440
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FA444
  c->r[29]=c->r[3]|c->r[3]; // 801FA448
  c->r[3]=0u+0x00000016u; // 801FA44C
  c->lr=0x801FA454u; f_801F1364(c); // 801FA450
  c->r[3]=c->r[29]|c->r[29]; // 801FA454
  c->r[4]=0u+0x00000000u; // 801FA458
  c->lr=0x801FA460u; f_80131168(c); // 801FA45C
  c->r[3]=c->r[29]|c->r[29]; // 801FA460
  c->r[4]=0u+0x00000000u; // 801FA464
  c->lr=0x801FA46Cu; f_80131184(c); // 801FA468
  c->lr=0x801FA470u; f_80056B5C(c); // 801FA46C
  c->r[30]=c->r[3]|c->r[3]; // 801FA470
  c->lr=0x801FA478u; f_801F1340(c); // 801FA474
  c->lr=0x801FA47Cu; f_80056B54(c); // 801FA478
  c->r[3]=0u+0x00000004u; // 801FA47C
  c->lr=0x801FA484u; f_80047B64(c); // 801FA480
  c->r[31]=c->r[3]|c->r[3]; // 801FA484
  cmps(c,0,(int32_t)c->r[3],0); // 801FA488
  if (crb(c,2)) { goto L_801FA494; } // 801FA48C
  c->lr=0x801FA494u; f_801F44AC(c); // 801FA490
L_801FA494:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801FA494
  c->r[3]=c->r[30]|c->r[30]; // 801FA498
  c->lr=0x801FA4A0u; f_80056B54(c); // 801FA49C
  c->lr=0x801FA4A4u; f_80056B5C(c); // 801FA4A0
  c->r[30]=c->r[3]|c->r[3]; // 801FA4A4
  c->lr=0x801FA4ACu; f_801F1340(c); // 801FA4A8
  c->lr=0x801FA4B0u; f_80056B54(c); // 801FA4AC
  c->r[3]=0u+0x000000C8u; // 801FA4B0
  c->lr=0x801FA4B8u; f_80047B64(c); // 801FA4B4
  c->r[31]=c->r[3]|c->r[3]; // 801FA4B8
  cmps(c,0,(int32_t)c->r[3],0); // 801FA4BC
  if (crb(c,2)) { goto L_801FA4C8; } // 801FA4C0
  c->lr=0x801FA4C8u; f_801F65B4(c); // 801FA4C4
L_801FA4C8:;
  W32(c->r[29]+0x000000F8u,c->r[31]); // 801FA4C8
  c->r[3]=c->r[30]|c->r[30]; // 801FA4CC
  c->lr=0x801FA4D4u; f_80056B54(c); // 801FA4D0
  c->lr=0x801FA4D8u; f_80056B5C(c); // 801FA4D4
  c->r[30]=c->r[3]|c->r[3]; // 801FA4D8
  c->lr=0x801FA4E0u; f_801F1340(c); // 801FA4DC
  c->lr=0x801FA4E4u; f_80056B54(c); // 801FA4E0
  c->r[3]=0u+0x00000110u; // 801FA4E4
  c->lr=0x801FA4ECu; f_80047B64(c); // 801FA4E8
  c->r[31]=c->r[3]|c->r[3]; // 801FA4EC
  cmps(c,0,(int32_t)c->r[3],0); // 801FA4F0
  if (crb(c,2)) { goto L_801FA4FC; } // 801FA4F4
  c->lr=0x801FA4FCu; f_801F8B54(c); // 801FA4F8
L_801FA4FC:;
  W32(c->r[29]+0x000000F0u,c->r[31]); // 801FA4FC
  c->r[3]=c->r[30]|c->r[30]; // 801FA500
  c->lr=0x801FA508u; f_80056B54(c); // 801FA504
  c->lr=0x801FA50Cu; f_80056B5C(c); // 801FA508
  c->r[30]=c->r[3]|c->r[3]; // 801FA50C
  c->lr=0x801FA514u; f_801F1340(c); // 801FA510
  c->lr=0x801FA518u; f_80056B54(c); // 801FA514
  c->r[3]=0u+0x00000108u; // 801FA518
  c->lr=0x801FA520u; f_80047B64(c); // 801FA51C
  c->r[31]=c->r[3]|c->r[3]; // 801FA520
  cmps(c,0,(int32_t)c->r[3],0); // 801FA524
  if (crb(c,2)) { goto L_801FA530; } // 801FA528
  c->lr=0x801FA530u; f_801F595C(c); // 801FA52C
L_801FA530:;
  W32(c->r[29]+0x000000F4u,c->r[31]); // 801FA530
  c->r[3]=c->r[30]|c->r[30]; // 801FA534
  c->lr=0x801FA53Cu; f_80056B54(c); // 801FA538
  c->r[3]=R32(c->r[29]+0x000000F8u); // 801FA53C
  c->lr=0x801FA544u; f_801F65FC(c); // 801FA540
  c->r[3]=R32(c->r[29]+0x000000F0u); // 801FA544
  c->lr=0x801FA54Cu; f_801F8C40(c); // 801FA548
  c->r[3]=R32(c->r[29]+0x000000F4u); // 801FA54C
  c->lr=0x801FA554u; f_801F59E4(c); // 801FA550
  c->r[3]=c->r[29]|c->r[29]; // 801FA554
  c->r[4]=0u+0x00000001u; // 801FA558
  c->lr=0x801FA560u; f_801311BC(c); // 801FA55C
  c->r[3]=c->r[29]|c->r[29]; // 801FA560
  c->r[4]=0u+0x00000000u; // 801FA564
  c->lr=0x801FA56Cu; f_8013114C(c); // 801FA568
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FA56C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FA570
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FA574
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FA578
  c->lr=c->r[0]; // 801FA57C
  c->r[1]=c->r[1]+0x00000020u; // 801FA580
  return; // 801FA584
}

// fn_801FA588
void f_801FA588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA588
  c->r[0]=c->lr; // 801FA58C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA594
  c->r[31]=c->r[3]|c->r[3]; // 801FA598
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801FA59C
  c->lr=0x801FA5A4u; f_801F45B0(c); // 801FA5A0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA5A4
  if (crb(c,2)) { goto L_801FA660; } // 801FA5A8
  c->r[3]=0u+0x00000007u; // 801FA5AC
  c->lr=0x801FA5B4u; f_8019CD1C(c); // 801FA5B0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA5B4
  if (crb(c,2)) { goto L_801FA620; } // 801FA5B8
  c->r[3]=R32(c->r[31]+0x000000ECu); // 801FA5BC
  c->r[0]=c->r[3]+0x00000001u; // 801FA5C0
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801FA5C4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801FA5C8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801FA5CC
  c->r[0]=c->r[0]^c->r[3]; // 801FA5D0
  c->r[0]=c->r[0]-c->r[3]; // 801FA5D4
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801FA5D8
  cmps(c,0,(int32_t)c->r[0],1); // 801FA5DC
  if (crb(c,2)) { goto L_801FA60C; } // 801FA5E0
  if (!crb(c,0)) { goto L_801FA620; } // 801FA5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801FA5E8
  if (!crb(c,0)) { goto L_801FA5F4; } // 801FA5EC
  goto L_801FA620; // 801FA5F0
L_801FA5F4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801FA5F4
  c->lr=0x801FA5FCu; f_801F4604(c); // 801FA5F8
  c->r[3]=c->r[31]|c->r[31]; // 801FA5FC
  c->r[4]=0u+0x00000003u; // 801FA600
  c->lr=0x801FA608u; f_8013114C(c); // 801FA604
  goto L_801FA620; // 801FA608
L_801FA60C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801FA60C
  c->lr=0x801FA614u; f_801F45D0(c); // 801FA610
  c->r[3]=c->r[31]|c->r[31]; // 801FA614
  c->r[4]=0u+0x00000004u; // 801FA618
  c->lr=0x801FA620u; f_8013114C(c); // 801FA61C
L_801FA620:;
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801FA620
  cmps(c,0,(int32_t)c->r[0],1); // 801FA624
  if (crb(c,2)) { goto L_801FA64C; } // 801FA628
  if (!crb(c,0)) { goto L_801FA658; } // 801FA62C
  cmps(c,0,(int32_t)c->r[0],0); // 801FA630
  if (!crb(c,0)) { goto L_801FA63C; } // 801FA634
  goto L_801FA658; // 801FA638
L_801FA63C:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801FA63C
  c->r[4]=0u+0x00000000u; // 801FA640
  c->lr=0x801FA648u; f_801F92F4(c); // 801FA644
  goto L_801FA658; // 801FA648
L_801FA64C:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801FA64C
  c->r[4]=0u+0x00000001u; // 801FA650
  c->lr=0x801FA658u; f_801F92F4(c); // 801FA654
L_801FA658:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA658
  c->lr=0x801FA660u; f_801FA8F4(c); // 801FA65C
L_801FA660:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA660
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA664
  c->lr=c->r[0]; // 801FA668
  c->r[1]=c->r[1]+0x00000010u; // 801FA66C
  return; // 801FA670
}

// fn_801FA674
void f_801FA674(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA674
  c->r[0]=c->lr; // 801FA678
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA67C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA680
  c->r[31]=c->r[3]|c->r[3]; // 801FA684
  c->lr=0x801FA68Cu; f_801FA8F4(c); // 801FA688
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801FA68C
  c->r[4]=0u+0x00000000u; // 801FA690
  c->lr=0x801FA698u; f_801F92F4(c); // 801FA694
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801FA698
  c->r[4]=0u+0x00000001u; // 801FA69C
  c->lr=0x801FA6A4u; f_801F629C(c); // 801FA6A0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801FA6A4
  c->lr=0x801FA6ACu; f_801F6580(c); // 801FA6A8
  c->r[3]=c->r[31]|c->r[31]; // 801FA6AC
  c->r[4]=0u+0x00000002u; // 801FA6B0
  c->lr=0x801FA6B8u; f_8013114C(c); // 801FA6B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA6B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA6BC
  c->lr=c->r[0]; // 801FA6C0
  c->r[1]=c->r[1]+0x00000010u; // 801FA6C4
  return; // 801FA6C8
}

// fn_801FA6CC
void f_801FA6CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA6CC
  c->r[0]=c->lr; // 801FA6D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA6D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA6D8
  c->r[31]=c->r[3]|c->r[3]; // 801FA6DC
  c->lr=0x801FA6E4u; f_801FA8F4(c); // 801FA6E0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801FA6E4
  c->r[4]=0u+0x00000001u; // 801FA6E8
  c->lr=0x801FA6F0u; f_801F92F4(c); // 801FA6EC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801FA6F0
  c->r[4]=0u+0x00000000u; // 801FA6F4
  c->lr=0x801FA6FCu; f_801F629C(c); // 801FA6F8
  c->r[3]=c->r[31]|c->r[31]; // 801FA6FC
  c->r[4]=0u+0x00000002u; // 801FA700
  c->lr=0x801FA708u; f_8013114C(c); // 801FA704
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA708
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA70C
  c->lr=c->r[0]; // 801FA710
  c->r[1]=c->r[1]+0x00000010u; // 801FA714
  return; // 801FA718
}

// fn_801FA71C
void f_801FA71C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA71C
  c->r[0]=c->lr; // 801FA720
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA724
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA728
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FA72C
  c->r[30]=c->r[3]|c->r[3]; // 801FA730
  c->r[3]=0u+0x00000016u; // 801FA734
  c->lr=0x801FA73Cu; f_801F1364(c); // 801FA738
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801FA73C
  cmps(c,0,(int32_t)c->r[3],0); // 801FA740
  if (crb(c,2)) { goto L_801FA74C; } // 801FA744
  c->lr=0x801FA74Cu; f_801F8E44(c); // 801FA748
L_801FA74C:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801FA74C
  cmps(c,0,(int32_t)c->r[3],0); // 801FA750
  if (crb(c,2)) { goto L_801FA75C; } // 801FA754
  c->lr=0x801FA75Cu; f_801F5D14(c); // 801FA758
L_801FA75C:;
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801FA75C
  cmps(c,0,(int32_t)c->r[3],0); // 801FA760
  if (crb(c,2)) { goto L_801FA76C; } // 801FA764
  c->lr=0x801FA76Cu; f_801F66F4(c); // 801FA768
L_801FA76C:;
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801FA76C
  cmps(c,0,(int32_t)c->r[0],0); // 801FA770
  if (crb(c,2)) { goto L_801FA7A4; } // 801FA774
  c->lr=0x801FA77Cu; f_80056B5C(c); // 801FA778
  c->r[31]=c->r[3]|c->r[3]; // 801FA77C
  c->lr=0x801FA784u; f_801F1340(c); // 801FA780
  c->lr=0x801FA788u; f_80056B54(c); // 801FA784
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801FA788
  c->r[4]=0u+0x00000001u; // 801FA78C
  c->lr=0x801FA794u; f_801F44E4(c); // 801FA790
  c->r[3]=c->r[31]|c->r[31]; // 801FA794
  c->lr=0x801FA79Cu; f_80056B54(c); // 801FA798
  c->r[0]=0u+0x00000000u; // 801FA79C
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801FA7A0
L_801FA7A4:;
  c->r[0]=R32(c->r[30]+0x000000F0u); // 801FA7A4
  cmps(c,0,(int32_t)c->r[0],0); // 801FA7A8
  if (crb(c,2)) { goto L_801FA7F0; } // 801FA7AC
  c->lr=0x801FA7B4u; f_80056B5C(c); // 801FA7B0
  c->r[31]=c->r[3]|c->r[3]; // 801FA7B4
  c->lr=0x801FA7BCu; f_801F1340(c); // 801FA7B8
  c->lr=0x801FA7C0u; f_80056B54(c); // 801FA7BC
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801FA7C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FA7C4
  if (crb(c,2)) { goto L_801FA7E0; } // 801FA7C8
  c->r[4]=0u+0x00000001u; // 801FA7CC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801FA7D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801FA7D4
  c->ctr=c->r[12]; // 801FA7D8
  if (true) { c->lr=0x801FA7E0u; dispatch(c,c->ctr); } // 801FA7DC
L_801FA7E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA7E0
  c->lr=0x801FA7E8u; f_80056B54(c); // 801FA7E4
  c->r[0]=0u+0x00000000u; // 801FA7E8
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801FA7EC
L_801FA7F0:;
  c->r[0]=R32(c->r[30]+0x000000F4u); // 801FA7F0
  cmps(c,0,(int32_t)c->r[0],0); // 801FA7F4
  if (crb(c,2)) { goto L_801FA83C; } // 801FA7F8
  c->lr=0x801FA800u; f_80056B5C(c); // 801FA7FC
  c->r[31]=c->r[3]|c->r[3]; // 801FA800
  c->lr=0x801FA808u; f_801F1340(c); // 801FA804
  c->lr=0x801FA80Cu; f_80056B54(c); // 801FA808
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801FA80C
  cmps(c,0,(int32_t)c->r[3],0); // 801FA810
  if (crb(c,2)) { goto L_801FA82C; } // 801FA814
  c->r[4]=0u+0x00000001u; // 801FA818
  c->r[12]=R32(c->r[3]+0x00000058u); // 801FA81C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801FA820
  c->ctr=c->r[12]; // 801FA824
  if (true) { c->lr=0x801FA82Cu; dispatch(c,c->ctr); } // 801FA828
L_801FA82C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA82C
  c->lr=0x801FA834u; f_80056B54(c); // 801FA830
  c->r[0]=0u+0x00000000u; // 801FA834
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801FA838
L_801FA83C:;
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801FA83C
  cmps(c,0,(int32_t)c->r[0],0); // 801FA840
  if (crb(c,2)) { goto L_801FA888; } // 801FA844
  c->lr=0x801FA84Cu; f_80056B5C(c); // 801FA848
  c->r[31]=c->r[3]|c->r[3]; // 801FA84C
  c->lr=0x801FA854u; f_801F1340(c); // 801FA850
  c->lr=0x801FA858u; f_80056B54(c); // 801FA854
  c->r[3]=R32(c->r[30]+0x000000F8u); // 801FA858
  cmps(c,0,(int32_t)c->r[3],0); // 801FA85C
  if (crb(c,2)) { goto L_801FA878; } // 801FA860
  c->r[4]=0u+0x00000001u; // 801FA864
  c->r[12]=R32(c->r[3]+0x00000058u); // 801FA868
  c->r[12]=R32(c->r[12]+0x00000008u); // 801FA86C
  c->ctr=c->r[12]; // 801FA870
  if (true) { c->lr=0x801FA878u; dispatch(c,c->ctr); } // 801FA874
L_801FA878:;
  c->r[3]=c->r[31]|c->r[31]; // 801FA878
  c->lr=0x801FA880u; f_80056B54(c); // 801FA87C
  c->r[0]=0u+0x00000000u; // 801FA880
  W32(c->r[30]+0x000000F8u,c->r[0]); // 801FA884
L_801FA888:;
  c->r[3]=c->r[30]|c->r[30]; // 801FA888
  c->r[4]=0u+0x00000006u; // 801FA88C
  c->lr=0x801FA894u; f_8013114C(c); // 801FA890
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA894
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FA898
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA89C
  c->lr=c->r[0]; // 801FA8A0
  c->r[1]=c->r[1]+0x00000010u; // 801FA8A4
  return; // 801FA8A8
}

// fn_801FA8AC
void f_801FA8AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA8AC
  c->r[0]=c->lr; // 801FA8B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FA8B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FA8B8
  c->r[31]=c->r[3]|c->r[3]; // 801FA8BC
  c->r[4]=0u+0x00000001u; // 801FA8C0
  c->lr=0x801FA8C8u; f_80131168(c); // 801FA8C4
  c->r[3]=c->r[31]|c->r[31]; // 801FA8C8
  c->r[4]=0u+0x00000001u; // 801FA8CC
  c->lr=0x801FA8D4u; f_80131184(c); // 801FA8D0
  c->r[3]=c->r[31]|c->r[31]; // 801FA8D4
  c->r[4]=0u+0x00000000u; // 801FA8D8
  c->lr=0x801FA8E0u; f_8013114C(c); // 801FA8DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FA8E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FA8E4
  c->lr=c->r[0]; // 801FA8E8
  c->r[1]=c->r[1]+0x00000010u; // 801FA8EC
  return; // 801FA8F0
}

// fn_801FA8F4
void f_801FA8F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FA8F4
  c->r[0]=c->lr; // 801FA8F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FA8FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801FA900
  c->lr=0x801FA908u; f_80111CF0(c); // 801FA904
  cmps(c,0,(int32_t)c->r[3],0); // 801FA908
  if (!crb(c,2)) { goto L_801FAB20; } // 801FA90C
  c->r[3]=c->r[1]+0x00000014u; // 801FA910
  c->lr=0x801FA918u; f_8004B0A4(c); // 801FA914
  c->r[3]=c->r[1]+0x00000008u; // 801FA918
  c->lr=0x801FA920u; f_8004B0A4(c); // 801FA91C
  c->lr=0x801FA924u; f_8007B524(c); // 801FA920
  c->r[4]=c->r[1]+0x00000014u; // 801FA924
  c->lr=0x801FA92Cu; f_800A4E0C(c); // 801FA928
  c->lr=0x801FA930u; f_801F99D4(c); // 801FA92C
  c->r[4]=c->r[1]+0x00000014u; // 801FA930
  c->lr=0x801FA938u; f_801F9B00(c); // 801FA934
  c->lr=0x801FA93Cu; f_8007B524(c); // 801FA938
  c->r[4]=c->r[1]+0x00000008u; // 801FA93C
  c->lr=0x801FA944u; f_800A4E68(c); // 801FA940
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801FA944
  {uint32_t ea=c->r[2]+0xFFFF96C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801FA948
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801FA94C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801FA950
  {uint32_t ea=c->r[2]+0xFFFF96C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801FA954
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801FA958
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801FA95C
  {uint32_t ea=c->r[2]+0xFFFF96C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801FA960
  fcmp(c,0,c->f[1],c->f[0]); // 801FA964
  if (!crb(c,1)) { goto L_801FA974; } // 801FA968
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801FA96C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801FA970
L_801FA974:;
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801FA974
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801FA978
  {uint32_t ea=c->r[2]+0xFFFF96CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801FA97C
  fcmp(c,0,c->f[1],c->f[0]); // 801FA980
  if (!crb(c,0)) { goto L_801FA994; } // 801FA984
  {uint32_t ea=c->r[2]+0xFFFF96C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801FA988
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801FA98C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801FA990
L_801FA994:;
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 801FA994
  c->lr=0x801FA99Cu; f_801F99D4(c); // 801FA998
  c->r[4]=c->r[1]+0x00000008u; // 801FA99C
  c->lr=0x801FA9A4u; f_801F9B40(c); // 801FA9A0
  c->lr=0x801FA9A8u; f_8007B524(c); // 801FA9A4
  c->lr=0x801FA9ACu; f_800A6DF4(c); // 801FA9A8
  c->r[31]=c->r[3]|c->r[3]; // 801FA9AC
  c->lr=0x801FA9B4u; f_801F99D4(c); // 801FA9B0
  c->r[4]=c->r[31]|c->r[31]; // 801FA9B4
  c->lr=0x801FA9BCu; f_801F9C4C(c); // 801FA9B8
  c->lr=0x801FA9C0u; f_8007B524(c); // 801FA9BC
  c->r[4]=c->r[1]+0x00000014u; // 801FA9C0
  c->lr=0x801FA9C8u; f_800A6D3C(c); // 801FA9C4
  c->lr=0x801FA9CCu; f_801F99D4(c); // 801FA9C8
  c->r[4]=c->r[1]+0x00000014u; // 801FA9CC
  c->lr=0x801FA9D4u; f_801F9B50(c); // 801FA9D0
  c->lr=0x801FA9D8u; f_8007B524(c); // 801FA9D4
  c->lr=0x801FA9DCu; f_800A6DF8(c); // 801FA9D8
  c->r[31]=c->r[3]|c->r[3]; // 801FA9DC
  c->lr=0x801FA9E4u; f_801F99D4(c); // 801FA9E0
  c->r[4]=c->r[31]|c->r[31]; // 801FA9E4
  c->lr=0x801FA9ECu; f_801F9B94(c); // 801FA9E8
  c->lr=0x801FA9F0u; f_8007B524(c); // 801FA9EC
  c->lr=0x801FA9F4u; f_800A6DFC(c); // 801FA9F0
  c->r[31]=c->r[3]|c->r[3]; // 801FA9F4
  c->lr=0x801FA9FCu; f_801F99D4(c); // 801FA9F8
  c->r[4]=c->r[31]|c->r[31]; // 801FA9FC
  c->lr=0x801FAA04u; f_801F9C3C(c); // 801FAA00
  c->lr=0x801FAA08u; f_8007B524(c); // 801FAA04
  c->lr=0x801FAA0Cu; f_800A20DC(c); // 801FAA08
  c->r[31]=c->r[3]|c->r[3]; // 801FAA0C
  c->lr=0x801FAA14u; f_801F99D4(c); // 801FAA10
  c->r[4]=c->r[31]|c->r[31]; // 801FAA14
  c->lr=0x801FAA1Cu; f_801F9C2C(c); // 801FAA18
  c->r[31]=0u+0x00000000u; // 801FAA1C
  goto L_801FAA48; // 801FAA20
L_801FAA24:;
  c->lr=0x801FAA28u; f_8007B524(c); // 801FAA24
  c->r[4]=c->r[1]+0x00000014u; // 801FAA28
  c->r[5]=c->r[31]|c->r[31]; // 801FAA2C
  c->lr=0x801FAA34u; f_800A6D90(c); // 801FAA30
  c->lr=0x801FAA38u; f_801F99D4(c); // 801FAA34
  c->r[4]=c->r[1]+0x00000014u; // 801FAA38
  c->r[5]=c->r[31]|c->r[31]; // 801FAA3C
  c->lr=0x801FAA44u; f_801F9BA4(c); // 801FAA40
  c->r[31]=c->r[31]+0x00000001u; // 801FAA44
L_801FAA48:;
  c->lr=0x801FAA4Cu; f_801F99D4(c); // 801FAA48
  c->lr=0x801FAA50u; f_801F9C34(c); // 801FAA4C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801FAA50
  if (crb(c,0)) { IRQCHK(c); goto L_801FAA24; } // 801FAA54
  c->lr=0x801FAA5Cu; f_8007B524(c); // 801FAA58
  c->lr=0x801FAA60u; f_800A6E28(c); // 801FAA5C
  c->r[31]=c->r[3]|c->r[3]; // 801FAA60
  c->lr=0x801FAA68u; f_801F99D4(c); // 801FAA64
  c->r[4]=c->r[31]|c->r[31]; // 801FAA68
  c->lr=0x801FAA70u; f_801F9C5C(c); // 801FAA6C
  c->lr=0x801FAA74u; f_8007B524(c); // 801FAA70
  c->lr=0x801FAA78u; f_800A6E2C(c); // 801FAA74
  c->r[31]=c->r[3]|c->r[3]; // 801FAA78
  c->lr=0x801FAA80u; f_801F99D4(c); // 801FAA7C
  c->r[4]=c->r[31]|c->r[31]; // 801FAA80
  c->lr=0x801FAA88u; f_801F9C6C(c); // 801FAA84
  c->r[31]=0u+0x00000000u; // 801FAA88
  goto L_801FAAC4; // 801FAA8C
L_801FAA90:;
  c->lr=0x801FAA94u; f_8007B524(c); // 801FAA90
  c->r[4]=c->r[31]|c->r[31]; // 801FAA94
  c->lr=0x801FAA9Cu; f_800A6E30(c); // 801FAA98
  cmps(c,0,(int32_t)c->r[3],0); // 801FAA9C
  if (crb(c,2)) { goto L_801FAAB4; } // 801FAAA0
  c->lr=0x801FAAA8u; f_801F99D4(c); // 801FAAA4
  c->r[4]=c->r[31]|c->r[31]; // 801FAAA8
  c->lr=0x801FAAB0u; f_801F9C7C(c); // 801FAAAC
  goto L_801FAAC0; // 801FAAB0
L_801FAAB4:;
  c->lr=0x801FAAB8u; f_801F99D4(c); // 801FAAB4
  c->r[4]=c->r[31]|c->r[31]; // 801FAAB8
  c->lr=0x801FAAC0u; f_801F9C94(c); // 801FAABC
L_801FAAC0:;
  c->r[31]=c->r[31]+0x00000001u; // 801FAAC0
L_801FAAC4:;
  c->lr=0x801FAAC8u; f_8007B524(c); // 801FAAC4
  c->lr=0x801FAACCu; f_800A207C(c); // 801FAAC8
  cmpu(c,0,c->r[31],c->r[3]); // 801FAACC
  if (crb(c,0)) { IRQCHK(c); goto L_801FAA90; } // 801FAAD0
  c->r[31]=0u+0x00000000u; // 801FAAD4
  goto L_801FAB10; // 801FAAD8
L_801FAADC:;
  c->lr=0x801FAAE0u; f_8007B524(c); // 801FAADC
  c->r[4]=c->r[31]|c->r[31]; // 801FAAE0
  c->lr=0x801FAAE8u; f_800A6E8C(c); // 801FAAE4
  cmps(c,0,(int32_t)c->r[3],0); // 801FAAE8
  if (crb(c,2)) { goto L_801FAB00; } // 801FAAEC
  c->lr=0x801FAAF4u; f_801F99D4(c); // 801FAAF0
  c->r[4]=c->r[31]|c->r[31]; // 801FAAF4
  c->lr=0x801FAAFCu; f_801F9CD0(c); // 801FAAF8
  goto L_801FAB0C; // 801FAAFC
L_801FAB00:;
  c->lr=0x801FAB04u; f_801F99D4(c); // 801FAB00
  c->r[4]=c->r[31]|c->r[31]; // 801FAB04
  c->lr=0x801FAB0Cu; f_801F9CE8(c); // 801FAB08
L_801FAB0C:;
  c->r[31]=c->r[31]+0x00000001u; // 801FAB0C
L_801FAB10:;
  c->lr=0x801FAB14u; f_8007B524(c); // 801FAB10
  c->lr=0x801FAB18u; f_800A201C(c); // 801FAB14
  cmpu(c,0,c->r[31],c->r[3]); // 801FAB18
  if (crb(c,0)) { IRQCHK(c); goto L_801FAADC; } // 801FAB1C
L_801FAB20:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801FAB20
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FAB24
  c->lr=c->r[0]; // 801FAB28
  c->r[1]=c->r[1]+0x00000030u; // 801FAB2C
  return; // 801FAB30
}

// fn_801FAB34
void f_801FAB34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAB34
  c->r[0]=c->lr; // 801FAB38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAB3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAB40
  c->r[31]=c->r[3]|c->r[3]; // 801FAB44
  c->r[4]=0u+0x00000000u; // 801FAB48
  c->lr=0x801FAB50u; f_801311BC(c); // 801FAB4C
  c->r[3]=c->r[31]|c->r[31]; // 801FAB50
  c->r[4]=0u+0x00000001u; // 801FAB54
  c->lr=0x801FAB5Cu; f_8013114C(c); // 801FAB58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAB5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAB60
  c->lr=c->r[0]; // 801FAB64
  c->r[1]=c->r[1]+0x00000010u; // 801FAB68
  return; // 801FAB6C
}

// fn_801FAB70
void f_801FAB70(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 801FAB70
  f_8013114C(c); return; // 801FAB74
}

// fn_801FAB78
void f_801FAB78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAB78
  c->r[0]=c->lr; // 801FAB7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAB80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAB84
  c->r[31]=c->r[3]|c->r[3]; // 801FAB88
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801FAB8C
  cmps(c,0,(int32_t)c->r[3],0); // 801FAB90
  if (crb(c,2)) { goto L_801FABAC; } // 801FAB94
  c->lr=0x801FAB9Cu; f_801F45C8(c); // 801FAB98
  cmps(c,0,(int32_t)c->r[3],0); // 801FAB9C
  if (!crb(c,2)) { goto L_801FABE4; } // 801FABA0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801FABA4
  c->lr=0x801FABACu; f_801F45A0(c); // 801FABA8
L_801FABAC:;
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801FABAC
  cmps(c,0,(int32_t)c->r[0],1); // 801FABB0
  if (crb(c,2)) { goto L_801FABD8; } // 801FABB4
  if (!crb(c,0)) { goto L_801FABE4; } // 801FABB8
  cmps(c,0,(int32_t)c->r[0],0); // 801FABBC
  if (!crb(c,0)) { goto L_801FABC8; } // 801FABC0
  goto L_801FABE4; // 801FABC4
L_801FABC8:;
  c->r[3]=c->r[31]|c->r[31]; // 801FABC8
  c->r[4]=0u+0x00000003u; // 801FABCC
  c->lr=0x801FABD4u; f_8013114C(c); // 801FABD0
  goto L_801FABE4; // 801FABD4
L_801FABD8:;
  c->r[3]=c->r[31]|c->r[31]; // 801FABD8
  c->r[4]=0u+0x00000004u; // 801FABDC
  c->lr=0x801FABE4u; f_8013114C(c); // 801FABE0
L_801FABE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FABE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FABE8
  c->lr=c->r[0]; // 801FABEC
  c->r[1]=c->r[1]+0x00000010u; // 801FABF0
  return; // 801FABF4
}

// fn_801FABF8
void f_801FABF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FABF8
  c->r[0]=c->lr; // 801FABFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAC00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAC04
  c->r[31]=c->r[3]|c->r[3]; // 801FAC08
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801FAC0C
  cmps(c,0,(int32_t)c->r[3],0); // 801FAC10
  if (crb(c,2)) { goto L_801FAC2C; } // 801FAC14
  c->lr=0x801FAC1Cu; f_801F45C8(c); // 801FAC18
  cmps(c,0,(int32_t)c->r[3],0); // 801FAC1C
  if (!crb(c,2)) { goto L_801FAC54; } // 801FAC20
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801FAC24
  c->lr=0x801FAC2Cu; f_801F45A8(c); // 801FAC28
L_801FAC2C:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801FAC2C
  cmps(c,0,(int32_t)c->r[3],0); // 801FAC30
  if (crb(c,2)) { goto L_801FAC40; } // 801FAC34
  c->r[4]=0u+0x00000000u; // 801FAC38
  c->lr=0x801FAC40u; f_801F92F4(c); // 801FAC3C
L_801FAC40:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801FAC40
  cmps(c,0,(int32_t)c->r[3],0); // 801FAC44
  if (crb(c,2)) { goto L_801FAC54; } // 801FAC48
  c->r[4]=0u+0x00000000u; // 801FAC4C
  c->lr=0x801FAC54u; f_801F629C(c); // 801FAC50
L_801FAC54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAC54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAC58
  c->lr=c->r[0]; // 801FAC5C
  c->r[1]=c->r[1]+0x00000010u; // 801FAC60
  return; // 801FAC64
}

// fn_801FAC68
void f_801FAC68(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801FAC68
  cmps(c,0,(int32_t)c->r[3],0); // 801FAC6C
  if (crb(c,2)) { goto L_801FAC78; } // 801FAC70
  f_801F45B0(c); return; // 801FAC74
L_801FAC78:;
  c->r[3]=0u+0x00000000u; // 801FAC78
  return; // 801FAC7C
}

// fn_801FAC80
void f_801FAC80(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801FAC80
  W32(c->r[3]+0x000000ECu,c->r[0]); // 801FAC84
  return; // 801FAC88
}

// fn_801FAC8C
void f_801FAC8C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000ECu); // 801FAC8C
  c->r[0]=cntlz(c->r[0]); // 801FAC90
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801FAC94
  return; // 801FAC98
}

// fn_801FAC9C
void f_801FAC9C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801FAC9C
  cmps(c,0,(int32_t)c->r[3],0); // 801FACA0
  if (crb(c,2)) return; // 801FACA4
  cmps(c,0,(int32_t)c->r[4],0); // 801FACA8
  if (crb(c,2)) { goto L_801FACB4; } // 801FACAC
  f_801F45B8(c); return; // 801FACB0
L_801FACB4:;
  f_801F45C0(c); return; // 801FACB4
  return; // 801FACB8
}

// fn_801FACBC
void f_801FACBC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F8u); // 801FACBC
  return; // 801FACC0
}

// fn_801FACC4
void f_801FACC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FACC4
  c->r[0]=c->lr; // 801FACC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FACCC
  c->lr=0x801FACD4u; f_8011C12C(c); // 801FACD0
  c->r[4]=0u+0x00000016u; // 801FACD4
  c->lr=0x801FACDCu; f_8011CFF4(c); // 801FACD8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801FACDC
  c->r[12]=R32(c->r[12]+0x00000048u); // 801FACE0
  c->ctr=c->r[12]; // 801FACE4
  if (true) { c->lr=0x801FACECu; dispatch(c,c->ctr); } // 801FACE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FACEC
  c->lr=c->r[0]; // 801FACF0
  c->r[1]=c->r[1]+0x00000010u; // 801FACF4
  return; // 801FACF8
}

// fn_801FACFC
void f_801FACFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FACFC
  c->r[0]=c->lr; // 801FAD00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAD04
  c->lr=0x801FAD0Cu; f_8011C12C(c); // 801FAD08
  c->r[4]=0u+0x00000016u; // 801FAD0C
  c->lr=0x801FAD14u; f_8011CFF4(c); // 801FAD10
  c->lr=0x801FAD18u; f_801FABF8(c); // 801FAD14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAD18
  c->lr=c->r[0]; // 801FAD1C
  c->r[1]=c->r[1]+0x00000010u; // 801FAD20
  return; // 801FAD24
}

// fn_801FAD28
void f_801FAD28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAD28
  c->r[0]=c->lr; // 801FAD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAD30
  c->lr=0x801FAD38u; f_8011C12C(c); // 801FAD34
  c->r[4]=0u+0x00000016u; // 801FAD38
  c->lr=0x801FAD40u; f_8011CFF4(c); // 801FAD3C
  c->lr=0x801FAD44u; f_801FAC68(c); // 801FAD40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAD44
  c->lr=c->r[0]; // 801FAD48
  c->r[1]=c->r[1]+0x00000010u; // 801FAD4C
  return; // 801FAD50
}

// fn_801FAD54
void f_801FAD54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAD54
  c->r[0]=c->lr; // 801FAD58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAD5C
  c->lr=0x801FAD64u; f_8011C12C(c); // 801FAD60
  c->r[4]=0u+0x00000016u; // 801FAD64
  c->lr=0x801FAD6Cu; f_8011CFF4(c); // 801FAD68
  c->lr=0x801FAD70u; f_801FAC80(c); // 801FAD6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAD70
  c->lr=c->r[0]; // 801FAD74
  c->r[1]=c->r[1]+0x00000010u; // 801FAD78
  return; // 801FAD7C
}

// fn_801FAD80
void f_801FAD80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAD80
  c->r[0]=c->lr; // 801FAD84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAD88
  c->lr=0x801FAD90u; f_8011C12C(c); // 801FAD8C
  c->r[4]=0u+0x00000016u; // 801FAD90
  c->lr=0x801FAD98u; f_8011CFF4(c); // 801FAD94
  c->lr=0x801FAD9Cu; f_801FAC8C(c); // 801FAD98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAD9C
  c->lr=c->r[0]; // 801FADA0
  c->r[1]=c->r[1]+0x00000010u; // 801FADA4
  return; // 801FADA8
}

// fn_801FADAC
void f_801FADAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FADAC
  c->r[0]=c->lr; // 801FADB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FADB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FADB8
  c->r[31]=c->r[3]|c->r[3]; // 801FADBC
  c->lr=0x801FADC4u; f_8011C12C(c); // 801FADC0
  c->r[4]=0u+0x00000016u; // 801FADC4
  c->lr=0x801FADCCu; f_8011CFF4(c); // 801FADC8
  c->r[4]=c->r[31]|c->r[31]; // 801FADCC
  c->lr=0x801FADD4u; f_801FAC9C(c); // 801FADD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FADD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FADD8
  c->lr=c->r[0]; // 801FADDC
  c->r[1]=c->r[1]+0x00000010u; // 801FADE0
  return; // 801FADE4
}

// fn_801FADE8
void f_801FADE8(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801FADE8
  c->r[5]=c->r[3]+0x00006298u; // 801FADEC
  c->r[3]=0u+0x80440000u; // 801FADF0
  c->r[4]=c->r[3]+0xFFFFD898u; // 801FADF4
  c->r[3]=R32(c->r[4]+0x00000000u); // 801FADF8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801FADFC
  W32(c->r[5]+0x00000054u,c->r[3]); // 801FAE00
  W32(c->r[5]+0x00000058u,c->r[0]); // 801FAE04
  c->r[0]=R32(c->r[4]+0x00000008u); // 801FAE08
  W32(c->r[5]+0x0000005Cu,c->r[0]); // 801FAE0C
  return; // 801FAE10
}

// fn_801FAE14
void f_801FAE14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAE14
  c->r[0]=c->lr; // 801FAE18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAE1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAE20
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FAE24
  c->r[30]=c->r[3]|c->r[3]; // 801FAE28
  c->r[31]=c->r[4]|c->r[4]; // 801FAE2C
  cmps(c,0,(int32_t)c->r[3],0); // 801FAE30
  if (crb(c,2)) { goto L_801FAE54; } // 801FAE34
  c->r[4]=0u+0x00000000u; // 801FAE38
  c->lr=0x801FAE40u; f_80130F88(c); // 801FAE3C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801FAE40
  cmps(c,0,(int32_t)c->r[0],0); // 801FAE44
  if (!crb(c,1)) { goto L_801FAE54; } // 801FAE48
  c->r[3]=c->r[30]|c->r[30]; // 801FAE4C
  c->lr=0x801FAE54u; f_80047B20(c); // 801FAE50
L_801FAE54:;
  c->r[3]=c->r[30]|c->r[30]; // 801FAE54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAE58
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FAE5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAE60
  c->lr=c->r[0]; // 801FAE64
  c->r[1]=c->r[1]+0x00000010u; // 801FAE68
  return; // 801FAE6C
}

// fn_801FAE70
void f_801FAE70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAE70
  c->r[0]=c->lr; // 801FAE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAE7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FAE80
  c->r[30]=c->r[4]|c->r[4]; // 801FAE84
  c->r[31]=0u+0x00000000u; // 801FAE88
  c->r[3]=0u+0x804E0000u; // 801FAE8C
  c->r[3]=c->r[3]+0xFFFFA2D8u; // 801FAE90
  c->lr=0x801FAE98u; f_8035F050(c); // 801FAE94
  cmps(c,0,(int32_t)c->r[30],0); // 801FAE98
  if (crb(c,2)) { goto L_801FAEAC; } // 801FAE9C
  c->r[3]=c->r[30]|c->r[30]; // 801FAEA0
  c->lr=0x801FAEA8u; f_800567BC(c); // 801FAEA4
  c->r[31]=c->r[3]|c->r[3]; // 801FAEA8
L_801FAEAC:;
  c->r[3]=0u+0x804E0000u; // 801FAEAC
  c->r[3]=c->r[3]+0xFFFFA2D8u; // 801FAEB0
  c->lr=0x801FAEB8u; f_8035F12C(c); // 801FAEB4
  c->r[3]=c->r[31]|c->r[31]; // 801FAEB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAEBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FAEC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAEC4
  c->lr=c->r[0]; // 801FAEC8
  c->r[1]=c->r[1]+0x00000010u; // 801FAECC
  return; // 801FAED0
}

// fn_801FAED4
void f_801FAED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAED4
  c->r[0]=c->lr; // 801FAED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAEDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAEE0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FAEE4
  c->r[30]=c->r[4]|c->r[4]; // 801FAEE8
  cmps(c,0,(int32_t)c->r[4],0); // 801FAEEC
  if (crb(c,2)) { goto L_801FAF10; } // 801FAEF0
  c->r[31]=0u+0x804E0000u; // 801FAEF4
  c->r[3]=c->r[31]+0xFFFFA2D8u; // 801FAEF8
  c->lr=0x801FAF00u; f_8035F050(c); // 801FAEFC
  c->r[3]=c->r[30]|c->r[30]; // 801FAF00
  c->lr=0x801FAF08u; f_800567C8(c); // 801FAF04
  c->r[3]=c->r[31]+0xFFFFA2D8u; // 801FAF08
  c->lr=0x801FAF10u; f_8035F12C(c); // 801FAF0C
L_801FAF10:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAF10
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FAF14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAF18
  c->lr=c->r[0]; // 801FAF1C
  c->r[1]=c->r[1]+0x00000010u; // 801FAF20
  return; // 801FAF24
}

// fn_801FAF28
void f_801FAF28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAF28
  c->r[0]=c->lr; // 801FAF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAF30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAF34
  c->lr=0x801FAF3Cu; f_801ECCEC(c); // 801FAF38
  c->lr=0x801FAF40u; f_801ECCE4(c); // 801FAF3C
  c->r[31]=c->r[3]|c->r[3]; // 801FAF40
  c->lr=0x801FAF48u; f_801E677C(c); // 801FAF44
  cmps(c,0,(int32_t)c->r[3],0); // 801FAF48
  if (crb(c,2)) { goto L_801FAF64; } // 801FAF4C
  c->r[3]=c->r[31]|c->r[31]; // 801FAF50
  c->r[4]=0u+0x00000000u; // 801FAF54
  c->r[5]=0u+0x00000468u; // 801FAF58
  c->lr=0x801FAF60u; f_800060B8(c); // 801FAF5C
  goto L_801FAFA4; // 801FAF60
L_801FAF64:;
  c->r[3]=c->r[13]+0xFFFF9F38u; // 801FAF64
  c->r[4]=c->r[31]|c->r[31]; // 801FAF68
  c->r[5]=0u+0x0000005Cu; // 801FAF6C
  c->lr=0x801FAF74u; f_801E66A0(c); // 801FAF70
  c->r[3]=c->r[13]+0xFFFF9F40u; // 801FAF74
  c->r[4]=c->r[31]+0x00000060u; // 801FAF78
  c->r[5]=0u+0x000002D0u; // 801FAF7C
  c->lr=0x801FAF84u; f_801E66A0(c); // 801FAF80
  c->r[3]=c->r[13]+0xFFFF9F48u; // 801FAF84
  c->r[4]=c->r[31]+0x00000330u; // 801FAF88
  c->r[5]=0u+0x00000112u; // 801FAF8C
  c->lr=0x801FAF94u; f_801E66A0(c); // 801FAF90
  c->r[3]=c->r[13]+0xFFFF9F50u; // 801FAF94
  c->r[4]=c->r[31]+0x00000442u; // 801FAF98
  c->r[5]=0u+0x00000022u; // 801FAF9C
  c->lr=0x801FAFA4u; f_801E66A0(c); // 801FAFA0
L_801FAFA4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FAFA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FAFA8
  c->lr=c->r[0]; // 801FAFAC
  c->r[1]=c->r[1]+0x00000010u; // 801FAFB0
  return; // 801FAFB4
}

// fn_801FAFB8
void f_801FAFB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FAFB8
  c->r[0]=c->lr; // 801FAFBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FAFC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FAFC4
  c->lr=0x801FAFCCu; f_801ECCEC(c); // 801FAFC8
  c->lr=0x801FAFD0u; f_801ECCE4(c); // 801FAFCC
  c->r[31]=c->r[3]|c->r[3]; // 801FAFD0
  c->r[3]=c->r[13]+0xFFFF9F38u; // 801FAFD4
  c->r[4]=c->r[31]|c->r[31]; // 801FAFD8
  c->r[5]=0u+0x0000005Cu; // 801FAFDC
  c->lr=0x801FAFE4u; f_801E6644(c); // 801FAFE0
  c->r[3]=c->r[13]+0xFFFF9F40u; // 801FAFE4
  c->r[4]=c->r[31]+0x00000060u; // 801FAFE8
  c->r[5]=0u+0x000002D0u; // 801FAFEC
  c->lr=0x801FAFF4u; f_801E6644(c); // 801FAFF0
  c->r[3]=c->r[13]+0xFFFF9F48u; // 801FAFF4
  c->r[4]=c->r[31]+0x00000330u; // 801FAFF8
  c->r[5]=0u+0x00000112u; // 801FAFFC
  c->lr=0x801FB004u; f_801E6644(c); // 801FB000
  c->r[3]=c->r[13]+0xFFFF9F50u; // 801FB004
  c->r[4]=c->r[31]+0x00000442u; // 801FB008
  c->r[5]=0u+0x00000022u; // 801FB00C
  c->lr=0x801FB014u; f_801E6644(c); // 801FB010
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB014
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB018
  c->lr=c->r[0]; // 801FB01C
  c->r[1]=c->r[1]+0x00000010u; // 801FB020
  return; // 801FB024
}

// fn_801FB028
void f_801FB028(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB028
  c->r[0]=c->lr; // 801FB02C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB034
  c->r[5]=c->r[3]|c->r[3]; // 801FB038
  c->r[31]=c->r[4]|c->r[4]; // 801FB03C
  c->r[3]=0u+0x00000001u; // 801FB040
  c->r[4]=0u+0x80470000u; // 801FB044
  c->r[4]=c->r[4]+0x00006708u; // 801FB048
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB04C
  c->lr=0x801FB054u; f_803D3760(c); // 801FB050
  c->lr=0x801FB058u; f_80208B40(c); // 801FB054
  c->r[3]=c->r[31]|c->r[31]; // 801FB058
  c->lr=0x801FB060u; f_803D01FC(c); // 801FB05C
  c->lr=0x801FB064u; f_80208B4C(c); // 801FB060
  c->lr=0x801FB068u; f_801E67A8(c); // 801FB064
  cmps(c,0,(int32_t)c->r[3],0); // 801FB068
  if (crb(c,2)) { goto L_801FB080; } // 801FB06C
  c->lr=0x801FB074u; f_801E65AC(c); // 801FB070
  cmps(c,0,(int32_t)c->r[3],0); // 801FB074
  if (crb(c,2)) { goto L_801FB080; } // 801FB078
  c->lr=0x801FB080u; f_801E6540(c); // 801FB07C
L_801FB080:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB080
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB084
  c->lr=c->r[0]; // 801FB088
  c->r[1]=c->r[1]+0x00000010u; // 801FB08C
  return; // 801FB090
}

// fn_801FB094
void f_801FB094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB094
  c->r[0]=c->lr; // 801FB098
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB09C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB0A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB0A4
  c->r[30]=c->r[3]|c->r[3]; // 801FB0A8
  c->lr=0x801FB0B0u; f_8020CEF4(c); // 801FB0AC
  c->r[3]=0u+0x80480000u; // 801FB0B0
  c->r[0]=c->r[3]+0xFFFF9CACu; // 801FB0B4
  W32(c->r[30]+0x00000028u,c->r[0]); // 801FB0B8
  c->r[3]=c->r[30]+0x00000504u; // 801FB0BC
  c->lr=0x801FB0C4u; f_8020C660(c); // 801FB0C0
  c->r[3]=c->r[30]+0x00000544u; // 801FB0C4
  c->lr=0x801FB0CCu; f_80208B58(c); // 801FB0C8
  c->r[3]=c->r[30]+0x000005F0u; // 801FB0CC
  c->lr=0x801FB0D4u; f_8020D1DC(c); // 801FB0D0
  c->r[3]=c->r[30]+0x00000658u; // 801FB0D4
  c->lr=0x801FB0DCu; f_8020A370(c); // 801FB0D8
  c->r[3]=c->r[30]+0x000006D4u; // 801FB0DC
  c->lr=0x801FB0E4u; f_8020BBE8(c); // 801FB0E0
  c->r[3]=c->r[30]+0x00000C28u; // 801FB0E4
  c->lr=0x801FB0ECu; f_8020849C(c); // 801FB0E8
  c->r[3]=0u+0x0000000Fu; // 801FB0EC
  c->lr=0x801FB0F4u; f_803D3758(c); // 801FB0F0
  c->r[3]=0u+0x804E0000u; // 801FB0F4
  c->r[3]=c->r[3]+0xFFFFA340u; // 801FB0F8
  c->lr=0x801FB100u; f_8035F018(c); // 801FB0FC
  W32(c->r[13]+0xFFFFBB48u,c->r[30]); // 801FB100
  c->r[31]=0u+0x00000000u; // 801FB104
  W32(c->r[30]+0x00000D38u,c->r[31]); // 801FB108
  W32(c->r[30]+0x00000070u,c->r[31]); // 801FB10C
  W32(c->r[30]+0x00000D08u,c->r[31]); // 801FB110
  W32(c->r[30]+0x00000D00u,c->r[31]); // 801FB114
  W32(c->r[30]+0x00000D04u,c->r[31]); // 801FB118
  W32(c->r[30]+0x00000D10u,c->r[31]); // 801FB11C
  W32(c->r[30]+0x00000D0Cu,c->r[31]); // 801FB120
  W32(c->r[13]+0xFFFFBB4Cu,c->r[31]); // 801FB124
  W32(c->r[30]+0x00000D68u,c->r[31]); // 801FB128
  W32(c->r[30]+0x00000050u,c->r[31]); // 801FB12C
  W32(c->r[30]+0x00000D40u,c->r[31]); // 801FB130
  W32(c->r[30]+0x00000D44u,c->r[31]); // 801FB134
  W32(c->r[30]+0x00000D48u,c->r[31]); // 801FB138
  W32(c->r[30]+0x00000D4Cu,c->r[31]); // 801FB13C
  W32(c->r[30]+0x00000D50u,c->r[31]); // 801FB140
  W32(c->r[30]+0x00000D54u,c->r[31]); // 801FB144
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801FB148
  W32(c->r[30]+0x00000030u,c->r[31]); // 801FB14C
  W32(c->r[30]+0x0000006Cu,c->r[31]); // 801FB150
  W32(c->r[30]+0x00000034u,c->r[31]); // 801FB154
  W32(c->r[30]+0x00000038u,c->r[31]); // 801FB158
  W32(c->r[30]+0x0000003Cu,c->r[31]); // 801FB15C
  W32(c->r[30]+0x0000005Cu,c->r[31]); // 801FB160
  W32(c->r[30]+0x00000064u,c->r[31]); // 801FB164
  W32(c->r[30]+0x00000060u,c->r[31]); // 801FB168
  W32(c->r[30]+0x00000068u,c->r[31]); // 801FB16C
  W32(c->r[30]+0x00000D18u,c->r[31]); // 801FB170
  c->r[0]=0u+0x00000400u; // 801FB174
  W32(c->r[30]+0x00000D1Cu,c->r[0]); // 801FB178
  c->r[3]=c->r[30]|c->r[30]; // 801FB17C
  c->r[4]=0u+0x00000400u; // 801FB180
  c->lr=0x801FB188u; f_801FB558(c); // 801FB184
  W32(c->r[30]+0x00000D20u,c->r[3]); // 801FB188
  c->lr=0x801FB190u; f_80361BF4(c); // 801FB18C
  W32(c->r[30]+0x0000004Cu,c->r[4]); // 801FB190
  W32(c->r[30]+0x00000048u,c->r[3]); // 801FB194
  c->r[3]=0u+0x80200000u; // 801FB198
  c->r[3]=c->r[3]+0xFFFFAFB8u; // 801FB19C
  c->lr=0x801FB1A4u; f_801E66FC(c); // 801FB1A0
  W32(c->r[30]+0x00000D3Cu,c->r[31]); // 801FB1A4
  c->r[3]=c->r[30]|c->r[30]; // 801FB1A8
  c->r[4]=0u+0x00000000u; // 801FB1AC
  c->lr=0x801FB1B4u; f_801FB330(c); // 801FB1B0
  c->r[3]=c->r[30]|c->r[30]; // 801FB1B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB1B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB1BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB1C0
  c->lr=c->r[0]; // 801FB1C4
  c->r[1]=c->r[1]+0x00000010u; // 801FB1C8
  return; // 801FB1CC
}

// fn_801FB1D0
void f_801FB1D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB1D0
  c->r[0]=c->lr; // 801FB1D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB1D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB1DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB1E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FB1E4
  c->r[29]=c->r[3]|c->r[3]; // 801FB1E8
  c->r[30]=c->r[4]|c->r[4]; // 801FB1EC
  cmps(c,0,(int32_t)c->r[3],0); // 801FB1F0
  if (crb(c,2)) { goto L_801FB2B4; } // 801FB1F4
  c->r[4]=0u+0x80480000u; // 801FB1F8
  c->r[0]=c->r[4]+0xFFFF9CACu; // 801FB1FC
  W32(c->r[3]+0x00000028u,c->r[0]); // 801FB200
  c->lr=0x801FB208u; f_801FB490(c); // 801FB204
  c->r[31]=0u+0x00000000u; // 801FB208
  W32(c->r[29]+0x00000030u,c->r[31]); // 801FB20C
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 801FB210
  W32(c->r[29]+0x00000034u,c->r[31]); // 801FB214
  c->r[3]=c->r[29]|c->r[29]; // 801FB218
  c->lr=0x801FB220u; f_801FB2D4(c); // 801FB21C
  c->r[4]=R32(c->r[29]+0x00000D20u); // 801FB220
  cmps(c,0,(int32_t)c->r[4],0); // 801FB224
  if (crb(c,2)) { goto L_801FB238; } // 801FB228
  c->r[3]=c->r[29]|c->r[29]; // 801FB22C
  c->lr=0x801FB234u; f_801FB568(c); // 801FB230
  W32(c->r[29]+0x00000D20u,c->r[31]); // 801FB234
L_801FB238:;
  c->r[0]=0u+0x00000000u; // 801FB238
  W32(c->r[13]+0xFFFFBB4Cu,c->r[0]); // 801FB23C
  c->r[3]=c->r[29]|c->r[29]; // 801FB240
  c->r[4]=0u+0x00000000u; // 801FB244
  c->lr=0x801FB24Cu; f_801FB330(c); // 801FB248
  c->r[3]=c->r[29]+0x00000C28u; // 801FB24C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB250
  c->lr=0x801FB258u; f_80208524(c); // 801FB254
  c->r[3]=c->r[29]+0x000006D4u; // 801FB258
  c->r[4]=0u+0xFFFFFFFFu; // 801FB25C
  c->lr=0x801FB264u; f_8020BCD8(c); // 801FB260
  c->r[3]=c->r[29]+0x00000658u; // 801FB264
  c->r[4]=0u+0xFFFFFFFFu; // 801FB268
  c->lr=0x801FB270u; f_8020A400(c); // 801FB26C
  c->r[3]=c->r[29]+0x000005F0u; // 801FB270
  c->r[4]=0u+0xFFFFFFFFu; // 801FB274
  c->lr=0x801FB27Cu; f_8020D250(c); // 801FB278
  c->r[3]=c->r[29]+0x00000544u; // 801FB27C
  c->r[4]=0u+0xFFFFFFFFu; // 801FB280
  c->lr=0x801FB288u; f_80208C10(c); // 801FB284
  c->r[3]=c->r[29]+0x00000504u; // 801FB288
  c->r[4]=0u+0xFFFFFFFFu; // 801FB28C
  c->lr=0x801FB294u; f_8020C6CC(c); // 801FB290
  c->r[3]=c->r[29]|c->r[29]; // 801FB294
  c->r[4]=0u+0x00000000u; // 801FB298
  c->lr=0x801FB2A0u; f_8020CF68(c); // 801FB29C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 801FB2A0
  cmps(c,0,(int32_t)c->r[0],0); // 801FB2A4
  if (!crb(c,1)) { goto L_801FB2B4; } // 801FB2A8
  c->r[3]=c->r[29]|c->r[29]; // 801FB2AC
  c->lr=0x801FB2B4u; f_80047B20(c); // 801FB2B0
L_801FB2B4:;
  c->r[3]=c->r[29]|c->r[29]; // 801FB2B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FB2B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FB2BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FB2C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB2C4
  c->lr=c->r[0]; // 801FB2C8
  c->r[1]=c->r[1]+0x00000020u; // 801FB2CC
  return; // 801FB2D0
}

// fn_801FB2D4
void f_801FB2D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB2D4
  c->r[0]=c->lr; // 801FB2D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB2DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB2E0
  c->r[31]=c->r[3]|c->r[3]; // 801FB2E4
  c->r[4]=R32(c->r[3]+0x00000D0Cu); // 801FB2E8
  cmps(c,0,(int32_t)c->r[4],0); // 801FB2EC
  if (crb(c,2)) { goto L_801FB300; } // 801FB2F0
  c->lr=0x801FB2F8u; f_801FB568(c); // 801FB2F4
  c->r[0]=0u+0x00000000u; // 801FB2F8
  W32(c->r[31]+0x00000D0Cu,c->r[0]); // 801FB2FC
L_801FB300:;
  c->r[4]=R32(c->r[31]+0x00000D10u); // 801FB300
  cmps(c,0,(int32_t)c->r[4],0); // 801FB304
  if (crb(c,2)) { goto L_801FB31C; } // 801FB308
  c->r[3]=c->r[31]|c->r[31]; // 801FB30C
  c->lr=0x801FB314u; f_801FB568(c); // 801FB310
  c->r[0]=0u+0x00000000u; // 801FB314
  W32(c->r[31]+0x00000D10u,c->r[0]); // 801FB318
L_801FB31C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB31C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB320
  c->lr=c->r[0]; // 801FB324
  c->r[1]=c->r[1]+0x00000010u; // 801FB328
  return; // 801FB32C
}

// fn_801FB330
void f_801FB330(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB330
  c->r[0]=c->lr; // 801FB334
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB33C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB340
  c->r[30]=c->r[3]|c->r[3]; // 801FB344
  c->r[31]=c->r[4]|c->r[4]; // 801FB348
  c->lr=0x801FB350u; f_801F1014(c); // 801FB34C
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[3]); // 801FB350
  if (crb(c,2)) { goto L_801FB360; } // 801FB354
  c->r[0]=0u+0x00000000u; // 801FB358
  W32(c->r[30]+0x00000D3Cu,c->r[0]); // 801FB35C
L_801FB360:;
  c->r[3]=c->r[30]|c->r[30]; // 801FB360
  c->r[4]=c->r[31]|c->r[31]; // 801FB364
  c->lr=0x801FB36Cu; f_8020D0A8(c); // 801FB368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB36C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB370
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB374
  c->lr=c->r[0]; // 801FB378
  c->r[1]=c->r[1]+0x00000010u; // 801FB37C
  return; // 801FB380
}

// fn_801FB384
void f_801FB384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB384
  c->r[0]=c->lr; // 801FB388
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB38C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB390
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB394
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FB398
  c->r[29]=c->r[3]|c->r[3]; // 801FB39C
  c->r[30]=c->r[4]|c->r[4]; // 801FB3A0
  c->lr=0x801FB3A8u; f_801FB490(c); // 801FB3A4
  W32(c->r[29]+0x00000070u,c->r[30]); // 801FB3A8
  c->lr=0x801FB3B0u; f_80056B5C(c); // 801FB3AC
  c->r[30]=c->r[3]|c->r[3]; // 801FB3B0
  c->r[3]=R32(c->r[29]+0x00000070u); // 801FB3B4
  c->lr=0x801FB3BCu; f_80056B54(c); // 801FB3B8
  c->r[3]=0u+0x0000000Cu; // 801FB3BC
  c->lr=0x801FB3C4u; f_80047B64(c); // 801FB3C0
  c->r[31]=c->r[3]|c->r[3]; // 801FB3C4
  cmps(c,0,(int32_t)c->r[3],0); // 801FB3C8
  if (crb(c,2)) { goto L_801FB3D4; } // 801FB3CC
  c->lr=0x801FB3D4u; f_80217FA0(c); // 801FB3D0
L_801FB3D4:;
  W32(c->r[29]+0x00000D00u,c->r[31]); // 801FB3D4
  c->r[3]=c->r[30]|c->r[30]; // 801FB3D8
  c->lr=0x801FB3E0u; f_80056B54(c); // 801FB3DC
  c->lr=0x801FB3E4u; f_80056B5C(c); // 801FB3E0
  c->r[30]=c->r[3]|c->r[3]; // 801FB3E4
  c->r[3]=R32(c->r[29]+0x00000070u); // 801FB3E8
  c->lr=0x801FB3F0u; f_80056B54(c); // 801FB3EC
  c->r[3]=0u+0x0000000Cu; // 801FB3F0
  c->lr=0x801FB3F8u; f_80047B64(c); // 801FB3F4
  c->r[31]=c->r[3]|c->r[3]; // 801FB3F8
  cmps(c,0,(int32_t)c->r[3],0); // 801FB3FC
  if (crb(c,2)) { goto L_801FB408; } // 801FB400
  c->lr=0x801FB408u; f_80218AD4(c); // 801FB404
L_801FB408:;
  W32(c->r[29]+0x00000D04u,c->r[31]); // 801FB408
  c->r[3]=c->r[30]|c->r[30]; // 801FB40C
  c->lr=0x801FB414u; f_80056B54(c); // 801FB410
  c->lr=0x801FB418u; f_8007B524(c); // 801FB414
  c->lr=0x801FB41Cu; f_800CA310(c); // 801FB418
  W32(c->r[29]+0x00000D38u,c->r[3]); // 801FB41C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FB420
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FB424
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FB428
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB42C
  c->lr=c->r[0]; // 801FB430
  c->r[1]=c->r[1]+0x00000020u; // 801FB434
  return; // 801FB438
}

// fn_801FB43C
void f_801FB43C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB43C
  c->r[0]=c->lr; // 801FB440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB448
  c->r[31]=c->r[3]|c->r[3]; // 801FB44C
  W32(c->r[3]+0x00000D08u,c->r[4]); // 801FB450
  c->r[3]=R32(c->r[3]+0x00000D00u); // 801FB454
  c->lr=0x801FB45Cu; f_80218078(c); // 801FB458
  c->r[3]=R32(c->r[31]+0x00000D04u); // 801FB45C
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FB460
  c->lr=0x801FB468u; f_802082CC(c); // 801FB464
  c->r[4]=R32(c->r[31]+0x00000D38u); // 801FB468
  cmps(c,0,(int32_t)c->r[4],0); // 801FB46C
  if (crb(c,2)) { goto L_801FB47C; } // 801FB470
  c->r[3]=R32(c->r[31]+0x00000D04u); // 801FB474
  c->lr=0x801FB47Cu; f_802082C4(c); // 801FB478
L_801FB47C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB47C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB480
  c->lr=c->r[0]; // 801FB484
  c->r[1]=c->r[1]+0x00000010u; // 801FB488
  return; // 801FB48C
}

// fn_801FB490
void f_801FB490(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB490
  c->r[0]=c->lr; // 801FB494
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB49C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB4A0
  c->r[30]=c->r[3]|c->r[3]; // 801FB4A4
  c->r[0]=R32(c->r[3]+0x00000D00u); // 801FB4A8
  cmps(c,0,(int32_t)c->r[0],0); // 801FB4AC
  if (crb(c,2)) { goto L_801FB4F4; } // 801FB4B0
  c->lr=0x801FB4B8u; f_80056B5C(c); // 801FB4B4
  c->r[31]=c->r[3]|c->r[3]; // 801FB4B8
  c->r[3]=R32(c->r[30]+0x00000070u); // 801FB4BC
  c->lr=0x801FB4C4u; f_80056B54(c); // 801FB4C0
  c->r[3]=R32(c->r[30]+0x00000D00u); // 801FB4C4
  cmps(c,0,(int32_t)c->r[3],0); // 801FB4C8
  if (crb(c,2)) { goto L_801FB4E4; } // 801FB4CC
  c->r[4]=0u+0x00000001u; // 801FB4D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801FB4D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801FB4D8
  c->ctr=c->r[12]; // 801FB4DC
  if (true) { c->lr=0x801FB4E4u; dispatch(c,c->ctr); } // 801FB4E0
L_801FB4E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801FB4E4
  c->lr=0x801FB4ECu; f_80056B54(c); // 801FB4E8
  c->r[0]=0u+0x00000000u; // 801FB4EC
  W32(c->r[30]+0x00000D00u,c->r[0]); // 801FB4F0
L_801FB4F4:;
  c->r[0]=R32(c->r[30]+0x00000D04u); // 801FB4F4
  cmps(c,0,(int32_t)c->r[0],0); // 801FB4F8
  if (crb(c,2)) { goto L_801FB540; } // 801FB4FC
  c->lr=0x801FB504u; f_80056B5C(c); // 801FB500
  c->r[31]=c->r[3]|c->r[3]; // 801FB504
  c->r[3]=R32(c->r[30]+0x00000070u); // 801FB508
  c->lr=0x801FB510u; f_80056B54(c); // 801FB50C
  c->r[3]=R32(c->r[30]+0x00000D04u); // 801FB510
  cmps(c,0,(int32_t)c->r[3],0); // 801FB514
  if (crb(c,2)) { goto L_801FB530; } // 801FB518
  c->r[4]=0u+0x00000001u; // 801FB51C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801FB520
  c->r[12]=R32(c->r[12]+0x00000008u); // 801FB524
  c->ctr=c->r[12]; // 801FB528
  if (true) { c->lr=0x801FB530u; dispatch(c,c->ctr); } // 801FB52C
L_801FB530:;
  c->r[3]=c->r[31]|c->r[31]; // 801FB530
  c->lr=0x801FB538u; f_80056B54(c); // 801FB534
  c->r[0]=0u+0x00000000u; // 801FB538
  W32(c->r[30]+0x00000D04u,c->r[0]); // 801FB53C
L_801FB540:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FB540
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FB544
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FB548
  c->lr=c->r[0]; // 801FB54C
  c->r[1]=c->r[1]+0x00000010u; // 801FB550
  return; // 801FB554
}

// fn_801FB558
void f_801FB558(Ctx* __restrict c) {
  c->r[3]=0u+0x64750000u; // 801FB558
  c->r[3]=c->r[3]+0x00006D79u; // 801FB55C
  c->r[5]=0u+0x00000020u; // 801FB560
  f_801FAE70(c); return; // 801FB564
}

// fn_801FB568
void f_801FB568(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801FB568
  if (crb(c,2)) return; // 801FB56C
  c->r[3]=0u+0x64750000u; // 801FB570
  c->r[3]=c->r[3]+0x00006D79u; // 801FB574
  c->r[5]=0u+0x00000000u; // 801FB578
  f_801FAED4(c); return; // 801FB57C
  return; // 801FB580
}

// fn_801FB584
void f_801FB584(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801FB584
  f_801FB330(c); return; // 801FB588
}

// fn_801FB58C
void f_801FB58C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801FB58C
  c->r[5]=R32(c->r[3]+0x00000D08u); // 801FB590
  W32(c->r[5]+0x00000020u,c->r[0]); // 801FB594
  c->r[0]=0u+0x000000FFu; // 801FB598
  c->r[5]=R32(c->r[3]+0x00000D08u); // 801FB59C
  W8(c->r[5]+0x00000030u,c->r[0]); // 801FB5A0
  c->r[5]=R32(c->r[3]+0x00000D08u); // 801FB5A4
  W8(c->r[5]+0x0000003Au,c->r[0]); // 801FB5A8
  c->r[0]=0u+0xFFFFFFFFu; // 801FB5AC
  c->r[5]=R32(c->r[3]+0x00000D08u); // 801FB5B0
  W16(c->r[5]+0x000006FCu,c->r[0]); // 801FB5B4
  c->r[3]=R32(c->r[3]+0x00000D08u); // 801FB5B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801FB5BC
  return; // 801FB5C0
}

// fn_801FB5C4
void f_801FB5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB5C4
  c->r[0]=c->lr; // 801FB5C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FB5CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FB5D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FB5D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FB5D8
  c->r[31]=c->r[3]|c->r[3]; // 801FB5DC
  c->r[0]=0u+0x00000000u; // 801FB5E0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB5E4
  W32(c->r[4]+0x00000004u,c->r[0]); // 801FB5E8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB5EC
  W32(c->r[4]+0x00000008u,c->r[0]); // 801FB5F0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB5F4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801FB5F8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB5FC
  W32(c->r[4]+0x00000010u,c->r[0]); // 801FB600
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB604
  W32(c->r[4]+0x00000014u,c->r[0]); // 801FB608
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB60C
  W16(c->r[4]+0x00000028u,c->r[0]); // 801FB610
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB614
  W32(c->r[4]+0x0000002Cu,c->r[0]); // 801FB618
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB61C
  W32(c->r[4]+0x00000034u,c->r[0]); // 801FB620
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB624
  W16(c->r[4]+0x00000038u,c->r[0]); // 801FB628
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB62C
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 801FB630
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB634
  W16(c->r[4]+0x00000040u,c->r[0]); // 801FB638
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB63C
  W16(c->r[4]+0x00000060u,c->r[0]); // 801FB640
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB644
  W16(c->r[4]+0x00000064u,c->r[0]); // 801FB648
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB64C
  W32(c->r[4]+0x00000068u,c->r[0]); // 801FB650
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB654
  W16(c->r[4]+0x00000062u,c->r[0]); // 801FB658
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB65C
  W16(c->r[4]+0x00000066u,c->r[0]); // 801FB660
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB664
  W32(c->r[4]+0x0000006Cu,c->r[0]); // 801FB668
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB66C
  W32(c->r[4]+0x00000074u,c->r[0]); // 801FB670
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB674
  W16(c->r[4]+0x00000070u,c->r[0]); // 801FB678
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB67C
  W32(c->r[4]+0x000006B0u,c->r[0]); // 801FB680
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB684
  W32(c->r[4]+0x000006B4u,c->r[0]); // 801FB688
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB68C
  W32(c->r[4]+0x00000080u,c->r[0]); // 801FB690
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB694
  W32(c->r[4]+0x00000084u,c->r[0]); // 801FB698
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB69C
  W32(c->r[4]+0x000006C8u,c->r[0]); // 801FB6A0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6A4
  W32(c->r[4]+0x000006D8u,c->r[0]); // 801FB6A8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6AC
  W32(c->r[4]+0x000006E8u,c->r[0]); // 801FB6B0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6B4
  W32(c->r[4]+0x0000020Cu,c->r[0]); // 801FB6B8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6BC
  W32(c->r[4]+0x00000210u,c->r[0]); // 801FB6C0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6C4
  W32(c->r[4]+0x000006CCu,c->r[0]); // 801FB6C8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6CC
  W32(c->r[4]+0x000006DCu,c->r[0]); // 801FB6D0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6D4
  W32(c->r[4]+0x000006ECu,c->r[0]); // 801FB6D8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6DC
  W32(c->r[4]+0x00000398u,c->r[0]); // 801FB6E0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6E4
  W32(c->r[4]+0x0000039Cu,c->r[0]); // 801FB6E8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6EC
  W32(c->r[4]+0x000006D0u,c->r[0]); // 801FB6F0
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6F4
  W32(c->r[4]+0x000006E0u,c->r[0]); // 801FB6F8
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB6FC
  W32(c->r[4]+0x000006F0u,c->r[0]); // 801FB700
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB704
  W32(c->r[4]+0x00000524u,c->r[0]); // 801FB708
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB70C
  W32(c->r[4]+0x00000528u,c->r[0]); // 801FB710
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB714
  W32(c->r[4]+0x000006D4u,c->r[0]); // 801FB718
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB71C
  W32(c->r[4]+0x000006E4u,c->r[0]); // 801FB720
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB724
  W32(c->r[4]+0x000006F4u,c->r[0]); // 801FB728
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB72C
  W32(c->r[4]+0x000006F8u,c->r[0]); // 801FB730
  c->r[5]=0u+0xFFFFFFFFu; // 801FB734
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB738
  W16(c->r[4]+0x000006FCu,c->r[5]); // 801FB73C
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB740
  W16(c->r[4]+0x000006FEu,c->r[5]); // 801FB744
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB748
  W32(c->r[4]+0x00000700u,c->r[0]); // 801FB74C
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB750
  W32(c->r[4]+0x00000704u,c->r[0]); // 801FB754
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB758
  W32(c->r[4]+0x00000708u,c->r[0]); // 801FB75C
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FB760
  W16(c->r[4]+0x0000070Cu,c->r[0]); // 801FB764
  c->r[3]=R32(c->r[3]+0x00000D08u); // 801FB768
  W16(c->r[3]+0x0000070Eu,c->r[0]); // 801FB76C
  c->r[29]=0u+0x00000000u; // 801FB770
  c->r[30]=0u+0x00000000u; // 801FB774
L_801FB778:;
  c->r[0]=R32(c->r[31]+0x00000D08u); // 801FB778
  c->r[3]=c->r[0]+c->r[30]; // 801FB77C
  c->r[3]=c->r[3]+0x00000710u; // 801FB780
  c->r[4]=0u+0x00000000u; // 801FB784
  c->r[5]=0u+0x00000038u; // 801FB788
  c->lr=0x801FB790u; f_800060B8(c); // 801FB78C
  c->r[30]=c->r[30]+0x00000038u; // 801FB790
  c->r[29]=c->r[29]+0x00000001u; // 801FB794
  cmps(c,0,(int32_t)c->r[29],32); // 801FB798
  if (crb(c,0)) { IRQCHK(c); goto L_801FB778; } // 801FB79C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7A0
  c->r[3]=c->r[3]+0x00000710u; // 801FB7A4
  c->r[4]=0u+0x00000000u; // 801FB7A8
  c->r[5]=0u+0x00000700u; // 801FB7AC
  c->lr=0x801FB7B4u; f_800060B8(c); // 801FB7B0
  c->r[0]=0u+0x00000000u; // 801FB7B4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7B8
  W32(c->r[3]+0x00000E10u,c->r[0]); // 801FB7BC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7C0
  W32(c->r[3]+0x00000E14u,c->r[0]); // 801FB7C4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7C8
  W16(c->r[3]+0x00000E44u,c->r[0]); // 801FB7CC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7D0
  W16(c->r[3]+0x00000E46u,c->r[0]); // 801FB7D4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7D8
  W16(c->r[3]+0x00000E48u,c->r[0]); // 801FB7DC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7E0
  W16(c->r[3]+0x00000E4Au,c->r[0]); // 801FB7E4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7E8
  W16(c->r[3]+0x00000E4Cu,c->r[0]); // 801FB7EC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7F0
  W16(c->r[3]+0x00000E50u,c->r[0]); // 801FB7F4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB7F8
  W16(c->r[3]+0x00000E52u,c->r[0]); // 801FB7FC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB800
  W32(c->r[3]+0x00000E54u,c->r[0]); // 801FB804
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB808
  W16(c->r[3]+0x00000E58u,c->r[0]); // 801FB80C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FB810
  c->r[30]=R32(c->r[1]+0x00000018u); // 801FB814
  c->r[29]=R32(c->r[1]+0x00000014u); // 801FB818
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FB81C
  c->lr=c->r[0]; // 801FB820
  c->r[1]=c->r[1]+0x00000020u; // 801FB824
  return; // 801FB828
}

// fn_801FB82C
void f_801FB82C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FB82C
  c->r[0]=c->lr; // 801FB830
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FB834
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FB838
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FB83C
  c->r[31]=c->r[3]|c->r[3]; // 801FB840
  c->r[6]=R32(c->r[3]+0x00000D08u); // 801FB844
  c->r[0]=R32(c->r[6]+0x00000EF8u); // 801FB848
  cmps(c,0,(int32_t)c->r[0],0); // 801FB84C
  if (!crb(c,2)) { goto L_801FBA04; } // 801FB850
  c->r[0]=R32(c->r[3]+0x00000D10u); // 801FB854
  cmps(c,0,(int32_t)c->r[0],0); // 801FB858
  if (!crb(c,2)) { goto L_801FB878; } // 801FB85C
  c->r[3]=0u+0x00000004u; // 801FB860
  c->r[4]=0u+0x80470000u; // 801FB864
  c->r[4]=c->r[4]+0x00006730u; // 801FB868
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB86C
  c->lr=0x801FB874u; f_803D3760(c); // 801FB870
  goto L_801FBA04; // 801FB874
L_801FB878:;
  c->r[0]=0u+0x00000000u; // 801FB878
  W32(c->r[3]+0x00000D14u,c->r[0]); // 801FB87C
  c->r[0]=R32(c->r[6]+0x00000EECu); // 801FB880
  cmps(c,0,(int32_t)c->r[0],0); // 801FB884
  if (!crb(c,2)) { goto L_801FB9D4; } // 801FB888
  c->r[0]=R32(c->r[6]+0x00000EF0u); // 801FB88C
  cmps(c,0,(int32_t)c->r[0],0); // 801FB890
  if (!crb(c,1)) { goto L_801FB9D4; } // 801FB894
  c->r[3]=0u+0x00000001u; // 801FB898
  c->r[4]=0u+0x80470000u; // 801FB89C
  c->r[4]=c->r[4]+0x0000675Cu; // 801FB8A0
  c->r[5]=R32(c->r[6]+0x00000018u); // 801FB8A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x000006FEu); // 801FB8A8
  c->r[5]=R8(c->r[5]+c->r[0]); // 801FB8AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB8B0
  c->lr=0x801FB8B8u; f_803D3760(c); // 801FB8B4
  c->r[5]=R32(c->r[31]+0x00000D08u); // 801FB8B8
  c->r[3]=c->r[31]+0x000006D4u; // 801FB8BC
  c->r[4]=R32(c->r[5]+0x00000018u); // 801FB8C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x000006FEu); // 801FB8C4
  c->r[4]=R8(c->r[4]+c->r[0]); // 801FB8C8
  c->lr=0x801FB8D0u; f_8020BF40(c); // 801FB8CC
  cmps(c,0,(int32_t)c->r[3],0); // 801FB8D0
  if (crb(c,2)) { goto L_801FB98C; } // 801FB8D4
  c->r[3]=0u+0x00000001u; // 801FB8D8
  c->r[4]=0u+0x80470000u; // 801FB8DC
  c->r[4]=c->r[4]+0x0000676Cu; // 801FB8E0
  c->r[5]=c->r[31]+0x00000D10u; // 801FB8E4
  c->r[6]=R32(c->r[31]+0x00000D08u); // 801FB8E8
  c->r[6]=R32(c->r[6]+0x00000EF0u); // 801FB8EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB8F0
  c->lr=0x801FB8F8u; f_803D3760(c); // 801FB8F4
  c->r[6]=R32(c->r[31]+0x00000D08u); // 801FB8F8
  c->r[3]=c->r[31]+0x000006D4u; // 801FB8FC
  c->r[4]=R32(c->r[6]+0x00000018u); // 801FB900
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x000006FEu); // 801FB904
  c->r[4]=R8(c->r[4]+c->r[0]); // 801FB908
  c->r[5]=R32(c->r[31]+0x00000D10u); // 801FB90C
  c->r[0]=R32(c->r[6]+0x00000EF0u); // 801FB910
  c->r[6]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FB914
  c->r[7]=0u+0x00000000u; // 801FB918
  c->lr=0x801FB920u; f_8020BFE0(c); // 801FB91C
  cmps(c,0,(int32_t)c->r[3],0); // 801FB920
  if (crb(c,2)) { goto L_801FB974; } // 801FB924
  c->r[5]=0u+0x00000001u; // 801FB928
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB92C
  W32(c->r[3]+0x00000EF8u,c->r[5]); // 801FB930
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FB934
  c->r[3]=R32(c->r[4]+0x00000EF0u); // 801FB938
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FB93C
  c->r[0]=c->r[3]-c->r[0]; // 801FB940
  W32(c->r[4]+0x00000EF0u,c->r[0]); // 801FB944
  W32(c->r[31]+0x00000D14u,c->r[5]); // 801FB948
  c->r[3]=0u+0x00000001u; // 801FB94C
  c->r[4]=0u+0x80470000u; // 801FB950
  c->r[4]=c->r[4]+0x0000678Cu; // 801FB954
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB958
  c->lr=0x801FB960u; f_803D3760(c); // 801FB95C
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FB960
  c->r[3]=R32(c->r[4]+0x00000EECu); // 801FB964
  c->r[0]=c->r[3]+0x00000001u; // 801FB968
  W32(c->r[4]+0x00000EECu,c->r[0]); // 801FB96C
  goto L_801FB9D4; // 801FB970
L_801FB974:;
  c->r[3]=0u+0x00000002u; // 801FB974
  c->r[4]=0u+0x80470000u; // 801FB978
  c->r[4]=c->r[4]+0x00006798u; // 801FB97C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB980
  c->lr=0x801FB988u; f_803D3760(c); // 801FB984
  goto L_801FB9D4; // 801FB988
L_801FB98C:;
  c->r[3]=0u+0x00000002u; // 801FB98C
  c->r[4]=0u+0x80470000u; // 801FB990
  c->r[4]=c->r[4]+0x000067A4u; // 801FB994
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FB998
  c->lr=0x801FB9A0u; f_803D3760(c); // 801FB99C
  c->lr=0x801FB9A4u; f_80208B40(c); // 801FB9A0
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FB9A4
  c->r[3]=R32(c->r[4]+0x00000018u); // 801FB9A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000006FEu); // 801FB9AC
  c->r[3]=R8(c->r[3]+c->r[0]); // 801FB9B0
  c->lr=0x801FB9B8u; f_803D8328(c); // 801FB9B4
  c->r[30]=c->r[3]|c->r[3]; // 801FB9B8
  c->lr=0x801FB9C0u; f_80208B4C(c); // 801FB9BC
  cmps(c,0,(int32_t)c->r[30],0); // 801FB9C0
  if (!crb(c,2)) { goto L_801FB9D4; } // 801FB9C4
  c->r[0]=0u+0x00000001u; // 801FB9C8
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB9CC
  W32(c->r[3]+0x00000E5Cu,c->r[0]); // 801FB9D0
L_801FB9D4:;
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FB9D4
  c->r[3]=R32(c->r[4]+0x00000EECu); // 801FB9D8
  cmps(c,0,(int32_t)c->r[3],0); // 801FB9DC
  if (!crb(c,1)) { goto L_801FBA04; } // 801FB9E0
  c->r[0]=c->r[3]+0x00000001u; // 801FB9E4
  W32(c->r[4]+0x00000EECu,c->r[0]); // 801FB9E8
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FB9EC
  c->r[0]=R32(c->r[3]+0x00000EECu); // 801FB9F0
  cmps(c,0,(int32_t)c->r[0],3); // 801FB9F4
  if (crb(c,0)) { goto L_801FBA04; } // 801FB9F8
  c->r[0]=0u+0x00000000u; // 801FB9FC
  W32(c->r[3]+0x00000EECu,c->r[0]); // 801FBA00
L_801FBA04:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBA04
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FBA08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBA0C
  c->lr=c->r[0]; // 801FBA10
  c->r[1]=c->r[1]+0x00000010u; // 801FBA14
  return; // 801FBA18
}

// fn_801FBA1C
void f_801FBA1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBA1C
  c->r[0]=c->lr; // 801FBA20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FBA24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FBA28
  c->r[31]=c->r[3]|c->r[3]; // 801FBA2C
  c->r[0]=R32(c->r[3]+0x00000D0Cu); // 801FBA30
  cmps(c,0,(int32_t)c->r[0],0); // 801FBA34
  if (!crb(c,2)) { goto L_801FBA54; } // 801FBA38
  c->r[3]=0u+0x00000004u; // 801FBA3C
  c->r[4]=0u+0x80470000u; // 801FBA40
  c->r[4]=c->r[4]+0x000067B0u; // 801FBA44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBA48
  c->lr=0x801FBA50u; f_803D3760(c); // 801FBA4C
  goto L_801FBB58; // 801FBA50
L_801FBA54:;
  c->r[5]=R32(c->r[3]+0x00000D08u); // 801FBA54
  c->r[4]=R32(c->r[5]+0x00000EFCu); // 801FBA58
  c->r[0]=c->r[4]+0x00000001u; // 801FBA5C
  W32(c->r[5]+0x00000EFCu,c->r[0]); // 801FBA60
  c->r[5]=R32(c->r[3]+0x00000D08u); // 801FBA64
  c->r[0]=R32(c->r[5]+0x00000000u); // 801FBA68
  cmps(c,0,(int32_t)c->r[0],2); // 801FBA6C
  if (crb(c,2)) { goto L_801FBA78; } // 801FBA70
  goto L_801FBB58; // 801FBA74
L_801FBA78:;
  c->r[3]=c->r[3]+0x000006D4u; // 801FBA78
  c->r[4]=R32(c->r[5]+0x00000018u); // 801FBA7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x000006FEu); // 801FBA80
  c->r[4]=R8(c->r[4]+c->r[0]); // 801FBA84
  c->r[5]=c->r[1]+0x00000008u; // 801FBA88
  c->r[6]=0u+0x00000000u; // 801FBA8C
  c->lr=0x801FBA94u; f_8020BD84(c); // 801FBA90
  c->r[4]=c->r[3]|c->r[3]; // 801FBA94
  cmps(c,0,(int32_t)c->r[3],0); // 801FBA98
  if (crb(c,2)) { goto L_801FBB38; } // 801FBA9C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801FBAA0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBAA4
  W32(c->r[3]+0x00000EF4u,c->r[5]); // 801FBAA8
  cmps(c,0,(int32_t)c->r[5],12); // 801FBAAC
  if (crb(c,2)) { goto L_801FBAD0; } // 801FBAB0
  if (!crb(c,0)) { goto L_801FBAC4; } // 801FBAB4
  cmps(c,0,(int32_t)c->r[5],2); // 801FBAB8
  if (crb(c,2)) { goto L_801FBAD0; } // 801FBABC
  goto L_801FBB20; // 801FBAC0
L_801FBAC4:;
  cmps(c,0,(int32_t)c->r[5],40); // 801FBAC4
  if (crb(c,2)) { goto L_801FBAD0; } // 801FBAC8
  goto L_801FBB20; // 801FBACC
L_801FBAD0:;
  c->r[3]=R32(c->r[31]+0x00000D0Cu); // 801FBAD0
  c->lr=0x801FBAD8u; f_802E53B8(c); // 801FBAD4
  c->r[6]=R32(c->r[31]+0x00000D08u); // 801FBAD8
  c->r[3]=c->r[31]+0x000006D4u; // 801FBADC
  c->r[4]=0u+0x00000001u; // 801FBAE0
  c->r[5]=R32(c->r[6]+0x00000018u); // 801FBAE4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x000006FEu); // 801FBAE8
  c->r[5]=R8(c->r[5]+c->r[0]); // 801FBAEC
  c->lr=0x801FBAF4u; f_8020C368(c); // 801FBAF0
  c->r[0]=0u+0x00000000u; // 801FBAF4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBAF8
  W32(c->r[3]+0x00000EF8u,c->r[0]); // 801FBAFC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBB00
  W32(c->r[3]+0x00000EFCu,c->r[0]); // 801FBB04
  c->r[3]=0u+0x00000001u; // 801FBB08
  c->r[4]=0u+0x80470000u; // 801FBB0C
  c->r[4]=c->r[4]+0x000067DCu; // 801FBB10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBB14
  c->lr=0x801FBB1Cu; f_803D3760(c); // 801FBB18
  goto L_801FBB58; // 801FBB1C
L_801FBB20:;
  c->r[3]=0u+0x00000002u; // 801FBB20
  c->r[4]=0u+0x80470000u; // 801FBB24
  c->r[4]=c->r[4]+0x000067E8u; // 801FBB28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBB2C
  c->lr=0x801FBB34u; f_803D3760(c); // 801FBB30
  goto L_801FBB58; // 801FBB34
L_801FBB38:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801FBB38
  cmps(c,0,(int32_t)c->r[5],0); // 801FBB3C
  if (!crb(c,1)) { goto L_801FBB58; } // 801FBB40
  c->r[3]=0u+0x00000001u; // 801FBB44
  c->r[4]=0u+0x80470000u; // 801FBB48
  c->r[4]=c->r[4]+0x00006808u; // 801FBB4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBB50
  c->lr=0x801FBB58u; f_803D3760(c); // 801FBB54
L_801FBB58:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801FBB58
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FBB5C
  c->lr=c->r[0]; // 801FBB60
  c->r[1]=c->r[1]+0x00000020u; // 801FBB64
  return; // 801FBB68
}

// fn_801FBB6C
void f_801FBB6C(Ctx* __restrict c) {
  return; // 801FBB6C
}

// fn_801FBB70
void f_801FBB70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBB70
  c->r[0]=c->lr; // 801FBB74
  W32(c->r[1]+0x00000174u,c->r[0]); // 801FBB78
  W32(c->r[1]+0x0000016Cu,c->r[31]); // 801FBB7C
  c->r[31]=c->r[3]|c->r[3]; // 801FBB80
  c->r[3]=0u+0x00000004u; // 801FBB84
  c->r[4]=0u+0x80470000u; // 801FBB88
  c->r[4]=c->r[4]+0x0000682Cu; // 801FBB8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBB90
  c->lr=0x801FBB98u; f_803D3760(c); // 801FBB94
  c->r[0]=0u+0x00000000u; // 801FBB98
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBB9C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801FBBA0
  c->r[0]=0u+0x000000FFu; // 801FBBA4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBBA8
  W8(c->r[3]+0x00000030u,c->r[0]); // 801FBBAC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBBB0
  W8(c->r[3]+0x0000003Au,c->r[0]); // 801FBBB4
  c->r[0]=0u+0xFFFFFFFFu; // 801FBBB8
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBBBC
  W16(c->r[3]+0x000006FCu,c->r[0]); // 801FBBC0
  c->lr=0x801FBBC8u; f_801FAF28(c); // 801FBBC4
  c->r[3]=c->r[13]+0xFFFF9F38u; // 801FBBC8
  c->lr=0x801FBBD0u; f_801E65E8(c); // 801FBBCC
  cmps(c,0,(int32_t)c->r[3],0); // 801FBBD0
  if (crb(c,2)) { goto L_801FBBF8; } // 801FBBD4
  c->r[3]=0u+0x00000001u; // 801FBBD8
  c->r[4]=0u+0x80470000u; // 801FBBDC
  c->r[4]=c->r[4]+0x00006854u; // 801FBBE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBBE4
  c->lr=0x801FBBECu; f_803D3760(c); // 801FBBE8
  c->r[3]=c->r[31]+0x00000544u; // 801FBBEC
  c->r[4]=c->r[31]+0x000000B8u; // 801FBBF0
  c->lr=0x801FBBF8u; f_80209584(c); // 801FBBF4
L_801FBBF8:;
  c->r[3]=c->r[1]+0x00000008u; // 801FBBF8
  c->lr=0x801FBC00u; f_803C62F8(c); // 801FBBFC
  c->r[0]=R8(c->r[1]+0x00000008u); // 801FBC00
  cmps(c,0,(int32_t)c->r[0],0); // 801FBC04
  if (!crb(c,2)) { goto L_801FBC2C; } // 801FBC08
  c->r[0]=0u+0x00000000u; // 801FBC0C
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 801FBC10
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801FBC14
  W32(c->r[31]+0x00000034u,c->r[0]); // 801FBC18
  c->r[3]=c->r[31]|c->r[31]; // 801FBC1C
  c->r[4]=0u+0x00000000u; // 801FBC20
  c->lr=0x801FBC28u; f_801FB330(c); // 801FBC24
  goto L_801FBD28; // 801FBC28
L_801FBC2C:;
  c->r[3]=c->r[31]+0x00000504u; // 801FBC2C
  c->lr=0x801FBC34u; f_8020C89C(c); // 801FBC30
  c->r[3]=c->r[31]+0x00000504u; // 801FBC34
  c->r[12]=R32(c->r[3]+0x00000028u); // 801FBC38
  c->r[12]=R32(c->r[12]+0x00000010u); // 801FBC3C
  c->ctr=c->r[12]; // 801FBC40
  if (true) { c->lr=0x801FBC48u; dispatch(c,c->ctr); } // 801FBC44
  cmps(c,0,(int32_t)c->r[3],0); // 801FBC48
  if (crb(c,2)) { goto L_801FBC74; } // 801FBC4C
  c->r[3]=0u+0x00000001u; // 801FBC50
  c->r[4]=0u+0x80470000u; // 801FBC54
  c->r[4]=c->r[4]+0x00006878u; // 801FBC58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBC5C
  c->lr=0x801FBC64u; f_803D3760(c); // 801FBC60
  c->r[3]=c->r[31]|c->r[31]; // 801FBC64
  c->r[4]=0u+0x0000001Fu; // 801FBC68
  c->lr=0x801FBC70u; f_801FB330(c); // 801FBC6C
  goto L_801FBD28; // 801FBC70
L_801FBC74:;
  c->r[3]=0u+0x00000004u; // 801FBC74
  c->r[4]=0u+0x80470000u; // 801FBC78
  c->r[4]=c->r[4]+0x0000689Cu; // 801FBC7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBC80
  c->lr=0x801FBC88u; f_803D3760(c); // 801FBC84
  c->r[3]=c->r[31]+0x00000C28u; // 801FBC88
  c->r[4]=c->r[31]+0x00000078u; // 801FBC8C
  c->lr=0x801FBC94u; f_80208568(c); // 801FBC90
  c->r[0]=R16(c->r[31]+0x000000C4u); // 801FBC94
  cmps(c,0,(int32_t)c->r[0],0); // 801FBC98
  if (!crb(c,2)) { goto L_801FBCB4; } // 801FBC9C
  c->r[3]=c->r[31]+0x00000544u; // 801FBCA0
  c->r[4]=c->r[13]+0xFFFF9F58u; // 801FBCA4
  c->r[5]=0u+0x00000008u; // 801FBCA8
  c->lr=0x801FBCB0u; f_80209504(c); // 801FBCAC
  goto L_801FBCC4; // 801FBCB0
L_801FBCB4:;
  c->r[3]=c->r[31]+0x00000544u; // 801FBCB4
  c->r[4]=c->r[31]+0x000000C4u; // 801FBCB8
  c->r[5]=0u+0x00000008u; // 801FBCBC
  c->lr=0x801FBCC4u; f_80209504(c); // 801FBCC0
L_801FBCC4:;
  c->r[3]=c->r[31]+0x00000544u; // 801FBCC4
  c->r[4]=c->r[31]+0x00000078u; // 801FBCC8
  c->lr=0x801FBCD0u; f_8020930C(c); // 801FBCCC
  c->r[3]=c->r[31]+0x00000544u; // 801FBCD0
  c->r[4]=c->r[31]+0x00000C28u; // 801FBCD4
  c->lr=0x801FBCDCu; f_80209624(c); // 801FBCD8
  c->r[3]=c->r[31]+0x00000658u; // 801FBCDC
  c->r[4]=c->r[31]+0x00000078u; // 801FBCE0
  c->lr=0x801FBCE8u; f_8020B8CC(c); // 801FBCE4
  c->r[3]=c->r[31]+0x00000658u; // 801FBCE8
  c->r[4]=c->r[31]+0x00000544u; // 801FBCEC
  c->lr=0x801FBCF4u; f_8020B888(c); // 801FBCF0
  c->r[3]=c->r[31]+0x00000658u; // 801FBCF4
  c->r[4]=c->r[31]+0x000005F0u; // 801FBCF8
  c->lr=0x801FBD00u; f_8020B8A8(c); // 801FBCFC
  c->r[3]=c->r[31]+0x00000658u; // 801FBD00
  c->r[4]=c->r[31]+0x000006D4u; // 801FBD04
  c->lr=0x801FBD0Cu; f_8020B8B0(c); // 801FBD08
  c->r[0]=0u+0x00000001u; // 801FBD0C
  W32(c->r[31]+0x0000006Cu,c->r[0]); // 801FBD10
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 801FBD14
  W32(c->r[31]+0x00000034u,c->r[0]); // 801FBD18
  c->r[3]=c->r[31]|c->r[31]; // 801FBD1C
  c->r[4]=0u+0x00000000u; // 801FBD20
  c->lr=0x801FBD28u; f_801FB330(c); // 801FBD24
L_801FBD28:;
  c->r[31]=R32(c->r[1]+0x0000016Cu); // 801FBD28
  c->r[0]=R32(c->r[1]+0x00000174u); // 801FBD2C
  c->lr=c->r[0]; // 801FBD30
  c->r[1]=c->r[1]+0x00000170u; // 801FBD34
  return; // 801FBD38
}

// fn_801FBD3C
void f_801FBD3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBD3C
  c->r[0]=c->lr; // 801FBD40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBD44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBD48
  c->r[31]=c->r[3]|c->r[3]; // 801FBD4C
  c->r[3]=c->r[3]+0x00000504u; // 801FBD50
  c->lr=0x801FBD58u; f_802082DC(c); // 801FBD54
  cmps(c,0,(int32_t)c->r[3],0); // 801FBD58
  if (crb(c,2)) { goto L_801FBD84; } // 801FBD5C
  c->r[3]=0u+0x00000001u; // 801FBD60
  c->r[4]=0u+0x80470000u; // 801FBD64
  c->r[4]=c->r[4]+0x000068C4u; // 801FBD68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBD6C
  c->lr=0x801FBD74u; f_803D3760(c); // 801FBD70
  c->r[3]=c->r[31]|c->r[31]; // 801FBD74
  c->r[4]=0u+0x00000003u; // 801FBD78
  c->lr=0x801FBD80u; f_801FB330(c); // 801FBD7C
  goto L_801FBDC0; // 801FBD80
L_801FBD84:;
  c->r[3]=c->r[31]+0x00000504u; // 801FBD84
  c->r[12]=R32(c->r[3]+0x00000028u); // 801FBD88
  c->r[12]=R32(c->r[12]+0x00000010u); // 801FBD8C
  c->ctr=c->r[12]; // 801FBD90
  if (true) { c->lr=0x801FBD98u; dispatch(c,c->ctr); } // 801FBD94
  cmps(c,0,(int32_t)c->r[3],0); // 801FBD98
  if (crb(c,2)) { goto L_801FBDC0; } // 801FBD9C
  c->r[3]=0u+0x00000001u; // 801FBDA0
  c->r[4]=0u+0x80470000u; // 801FBDA4
  c->r[4]=c->r[4]+0x000068D8u; // 801FBDA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBDAC
  c->lr=0x801FBDB4u; f_803D3760(c); // 801FBDB0
  c->r[3]=c->r[31]|c->r[31]; // 801FBDB4
  c->r[4]=0u+0x0000001Fu; // 801FBDB8
  c->lr=0x801FBDC0u; f_801FB330(c); // 801FBDBC
L_801FBDC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBDC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBDC4
  c->lr=c->r[0]; // 801FBDC8
  c->r[1]=c->r[1]+0x00000010u; // 801FBDCC
  return; // 801FBDD0
}

// fn_801FBDD4
void f_801FBDD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBDD4
  c->r[0]=c->lr; // 801FBDD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBDDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBDE0
  c->r[31]=c->r[3]|c->r[3]; // 801FBDE4
  c->r[3]=c->r[3]+0x00000544u; // 801FBDE8
  c->r[12]=R32(c->r[3]+0x00000028u); // 801FBDEC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801FBDF0
  c->ctr=c->r[12]; // 801FBDF4
  if (true) { c->lr=0x801FBDFCu; dispatch(c,c->ctr); } // 801FBDF8
  cmps(c,0,(int32_t)c->r[3],0); // 801FBDFC
  if (crb(c,2)) { goto L_801FBE98; } // 801FBE00
  c->r[3]=c->r[31]+0x00000544u; // 801FBE04
  c->r[4]=c->r[31]+0x00000504u; // 801FBE08
  c->lr=0x801FBE10u; f_80208CA4(c); // 801FBE0C
  c->r[3]=c->r[31]+0x00000544u; // 801FBE10
  c->r[4]=0u+0x00002BB5u; // 801FBE14
  c->r[5]=0u+0x80470000u; // 801FBE18
  c->r[5]=c->r[5]+0x00006904u; // 801FBE1C
  c->r[6]=c->r[13]+0xFFFF9F60u; // 801FBE20
  c->lr=0x801FBE28u; f_802095B8(c); // 801FBE24
  c->r[3]=c->r[31]+0x00000544u; // 801FBE28
  c->r[4]=0u+0x80200000u; // 801FBE2C
  c->r[4]=c->r[4]+0xFFFFB028u; // 801FBE30
  c->lr=0x801FBE38u; f_802082EC(c); // 801FBE34
  c->r[3]=c->r[31]+0x00000544u; // 801FBE38
  c->r[4]=0u+0x00000000u; // 801FBE3C
  c->lr=0x801FBE44u; f_8020998C(c); // 801FBE40
  cmps(c,0,(int32_t)c->r[3],0); // 801FBE44
  if (!crb(c,2)) { goto L_801FBE78; } // 801FBE48
  c->r[3]=0u+0x00000001u; // 801FBE4C
  c->r[4]=0u+0x80470000u; // 801FBE50
  c->r[4]=c->r[4]+0x00006918u; // 801FBE54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBE58
  c->lr=0x801FBE60u; f_803D3760(c); // 801FBE5C
  c->r[3]=c->r[31]+0x00000544u; // 801FBE60
  c->lr=0x801FBE68u; f_8020A014(c); // 801FBE64
  c->r[3]=c->r[31]|c->r[31]; // 801FBE68
  c->r[4]=0u+0x0000001Fu; // 801FBE6C
  c->lr=0x801FBE74u; f_801FB330(c); // 801FBE70
  goto L_801FBE98; // 801FBE74
L_801FBE78:;
  c->r[3]=0u+0x00000001u; // 801FBE78
  c->r[4]=0u+0x80470000u; // 801FBE7C
  c->r[4]=c->r[4]+0x00006938u; // 801FBE80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBE84
  c->lr=0x801FBE8Cu; f_803D3760(c); // 801FBE88
  c->r[3]=c->r[31]|c->r[31]; // 801FBE8C
  c->r[4]=0u+0x00000004u; // 801FBE90
  c->lr=0x801FBE98u; f_801FB330(c); // 801FBE94
L_801FBE98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FBE98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FBE9C
  c->lr=c->r[0]; // 801FBEA0
  c->r[1]=c->r[1]+0x00000010u; // 801FBEA4
  return; // 801FBEA8
}

// fn_801FBEAC
void f_801FBEAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FBEAC
  c->r[0]=c->lr; // 801FBEB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FBEB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FBEB8
  c->r[31]=c->r[3]|c->r[3]; // 801FBEBC
  c->lr=0x801FBEC4u; f_802082B4(c); // 801FBEC0
  cmps(c,0,(int32_t)c->r[3],1); // 801FBEC4
  if (crb(c,2)) { goto L_801FBEFC; } // 801FBEC8
  if (!crb(c,0)) { goto L_801FBF48; } // 801FBECC
  cmps(c,0,(int32_t)c->r[3],0); // 801FBED0
  if (!crb(c,0)) { goto L_801FBEDC; } // 801FBED4
  goto L_801FBF48; // 801FBED8
L_801FBEDC:;
  c->r[3]=c->r[31]+0x00000544u; // 801FBEDC
  c->lr=0x801FBEE4u; f_80209E00(c); // 801FBEE0
  cmps(c,0,(int32_t)c->r[3],0); // 801FBEE4
  if (!crb(c,2)) { goto L_801FC004; } // 801FBEE8
  c->r[3]=c->r[31]|c->r[31]; // 801FBEEC
  c->r[4]=0u+0x00000001u; // 801FBEF0
  c->lr=0x801FBEF8u; f_802082A0(c); // 801FBEF4
  goto L_801FC004; // 801FBEF8
L_801FBEFC:;
  c->r[3]=c->r[31]+0x00000544u; // 801FBEFC
  c->lr=0x801FBF04u; f_80209AEC(c); // 801FBF00
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF04
  if (!crb(c,2)) { goto L_801FBF30; } // 801FBF08
  c->r[3]=c->r[31]|c->r[31]; // 801FBF0C
  c->r[4]=0u+0x0000001Fu; // 801FBF10
  c->lr=0x801FBF18u; f_801FB330(c); // 801FBF14
  c->r[3]=0u+0x00000001u; // 801FBF18
  c->r[4]=0u+0x80470000u; // 801FBF1C
  c->r[4]=c->r[4]+0x00006964u; // 801FBF20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBF24
  c->lr=0x801FBF2Cu; f_803D3760(c); // 801FBF28
  goto L_801FC004; // 801FBF2C
L_801FBF30:;
  c->r[3]=c->r[31]+0x000006D4u; // 801FBF30
  c->lr=0x801FBF38u; f_8020C1D8(c); // 801FBF34
  c->r[3]=c->r[31]|c->r[31]; // 801FBF38
  c->r[4]=0u+0x00000001u; // 801FBF3C
  c->lr=0x801FBF44u; f_802082A0(c); // 801FBF40
  goto L_801FC004; // 801FBF44
L_801FBF48:;
  c->r[3]=c->r[31]+0x00000544u; // 801FBF48
  c->r[12]=R32(c->r[3]+0x00000028u); // 801FBF4C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801FBF50
  c->ctr=c->r[12]; // 801FBF54
  if (true) { c->lr=0x801FBF5Cu; dispatch(c,c->ctr); } // 801FBF58
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF5C
  if (crb(c,2)) { goto L_801FBFC8; } // 801FBF60
  c->r[3]=0u+0x00000001u; // 801FBF64
  c->r[4]=0u+0x80470000u; // 801FBF68
  c->r[4]=c->r[4]+0x0000697Cu; // 801FBF6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBF70
  c->lr=0x801FBF78u; f_803D3760(c); // 801FBF74
  c->r[3]=c->r[31]+0x000005F0u; // 801FBF78
  c->lr=0x801FBF80u; f_8020D308(c); // 801FBF7C
  cmps(c,0,(int32_t)c->r[3],0); // 801FBF80
  if (!crb(c,2)) { goto L_801FBFAC; } // 801FBF84
  c->r[3]=0u+0x00000002u; // 801FBF88
  c->r[4]=0u+0x80470000u; // 801FBF8C
  c->r[4]=c->r[4]+0x00006998u; // 801FBF90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBF94
  c->lr=0x801FBF9Cu; f_803D3760(c); // 801FBF98
  c->r[3]=c->r[31]|c->r[31]; // 801FBF9C
  c->r[4]=0u+0x0000001Fu; // 801FBFA0
  c->lr=0x801FBFA8u; f_801FB330(c); // 801FBFA4
  goto L_801FC004; // 801FBFA8
L_801FBFAC:;
  c->r[0]=0u+0x00000000u; // 801FBFAC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FBFB0
  W32(c->r[3]+0x00000024u,c->r[0]); // 801FBFB4
  c->r[3]=c->r[31]|c->r[31]; // 801FBFB8
  c->r[4]=0u+0x00000005u; // 801FBFBC
  c->lr=0x801FBFC4u; f_801FB330(c); // 801FBFC0
  goto L_801FC004; // 801FBFC4
L_801FBFC8:;
  c->r[3]=c->r[31]+0x00000544u; // 801FBFC8
  c->r[12]=R32(c->r[3]+0x00000028u); // 801FBFCC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801FBFD0
  c->ctr=c->r[12]; // 801FBFD4
  if (true) { c->lr=0x801FBFDCu; dispatch(c,c->ctr); } // 801FBFD8
  cmps(c,0,(int32_t)c->r[3],0); // 801FBFDC
  if (crb(c,2)) { goto L_801FC004; } // 801FBFE0
  c->r[3]=c->r[31]|c->r[31]; // 801FBFE4
  c->r[4]=0u+0x0000001Fu; // 801FBFE8
  c->lr=0x801FBFF0u; f_801FB330(c); // 801FBFEC
  c->r[3]=0u+0x00000001u; // 801FBFF0
  c->r[4]=0u+0x80470000u; // 801FBFF4
  c->r[4]=c->r[4]+0x000069B0u; // 801FBFF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FBFFC
  c->lr=0x801FC004u; f_803D3760(c); // 801FC000
L_801FC004:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC004
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC008
  c->lr=c->r[0]; // 801FC00C
  c->r[1]=c->r[1]+0x00000010u; // 801FC010
  return; // 801FC014
}

// fn_801FC018
void f_801FC018(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC018
  c->r[0]=c->lr; // 801FC01C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC020
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FC024
  c->r[31]=c->r[3]|c->r[3]; // 801FC028
  c->r[3]=c->r[3]+0x000005F0u; // 801FC02C
  c->lr=0x801FC034u; f_8020D4E0(c); // 801FC030
  cmps(c,0,(int32_t)c->r[3],0); // 801FC034
  if (!crb(c,2)) { goto L_801FC074; } // 801FC038
  c->r[3]=0u+0x00000001u; // 801FC03C
  c->r[4]=0u+0x80470000u; // 801FC040
  c->r[4]=c->r[4]+0x000069D4u; // 801FC044
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC048
  c->lr=0x801FC050u; f_803D3760(c); // 801FC04C
  c->r[3]=c->r[31]+0x00000544u; // 801FC050
  c->lr=0x801FC058u; f_8020A014(c); // 801FC054
  c->r[0]=0u+0x00000001u; // 801FC058
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FC05C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801FC060
  c->r[3]=c->r[31]|c->r[31]; // 801FC064
  c->r[4]=0u+0x0000001Fu; // 801FC068
  c->lr=0x801FC070u; f_801FB330(c); // 801FC06C
  goto L_801FC094; // 801FC070
L_801FC074:;
  c->r[3]=c->r[31]+0x000005F0u; // 801FC074
  c->lr=0x801FC07Cu; f_8020D330(c); // 801FC078
  c->r[0]=0u+0x00000002u; // 801FC07C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FC080
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FC084
  c->r[3]=c->r[31]|c->r[31]; // 801FC088
  c->r[4]=0u+0x00000006u; // 801FC08C
  c->lr=0x801FC094u; f_801FB330(c); // 801FC090
L_801FC094:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC094
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC098
  c->lr=c->r[0]; // 801FC09C
  c->r[1]=c->r[1]+0x00000010u; // 801FC0A0
  return; // 801FC0A4
}

// fn_801FC0A8
void f_801FC0A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC0A8
  c->r[0]=c->lr; // 801FC0AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC0B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FC0B4
  c->r[31]=c->r[3]|c->r[3]; // 801FC0B8
  c->r[3]=c->r[3]+0x000005F0u; // 801FC0BC
  c->lr=0x801FC0C4u; f_8020D660(c); // 801FC0C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FC0C4
  if (crb(c,2)) { goto L_801FC310; } // 801FC0C8
  c->r[3]=c->r[31]|c->r[31]; // 801FC0CC
  c->lr=0x801FC0D4u; f_802082B4(c); // 801FC0D0
  cmps(c,0,(int32_t)c->r[3],2); // 801FC0D4
  if (crb(c,2)) { goto L_801FC258; } // 801FC0D8
  if (!crb(c,0)) { goto L_801FC0F0; } // 801FC0DC
  cmps(c,0,(int32_t)c->r[3],0); // 801FC0E0
  if (crb(c,2)) { goto L_801FC0FC; } // 801FC0E4
  if (!crb(c,0)) { goto L_801FC170; } // 801FC0E8
  goto L_801FC340; // 801FC0EC
L_801FC0F0:;
  cmps(c,0,(int32_t)c->r[3],4); // 801FC0F0
  if (!crb(c,0)) { goto L_801FC340; } // 801FC0F4
  goto L_801FC2AC; // 801FC0F8
L_801FC0FC:;
  c->r[3]=0u+0x00000001u; // 801FC0FC
  c->r[4]=0u+0x80470000u; // 801FC100
  c->r[4]=c->r[4]+0x000069FCu; // 801FC104
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC108
  c->lr=0x801FC110u; f_803D3760(c); // 801FC10C
  c->r[3]=c->r[31]+0x00000D24u; // 801FC110
  c->r[4]=0u+0x00000000u; // 801FC114
  c->r[5]=0u+0x00000010u; // 801FC118
  c->lr=0x801FC120u; f_800060B8(c); // 801FC11C
  c->r[3]=c->r[31]+0x000005F0u; // 801FC120
  c->r[4]=0u+0x80470000u; // 801FC124
  c->r[4]=c->r[4]+0x00006A18u; // 801FC128
  c->r[5]=c->r[31]+0x00000D24u; // 801FC12C
  c->lr=0x801FC134u; f_8020D848(c); // 801FC130
  cmps(c,0,(int32_t)c->r[3],0); // 801FC134
  if (!crb(c,2)) { goto L_801FC160; } // 801FC138
  c->r[3]=0u+0x00000002u; // 801FC13C
  c->r[4]=0u+0x80470000u; // 801FC140
  c->r[4]=c->r[4]+0x00006A24u; // 801FC144
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC148
  c->lr=0x801FC150u; f_803D3760(c); // 801FC14C
  c->r[3]=c->r[31]|c->r[31]; // 801FC150
  c->r[4]=0u+0x0000001Fu; // 801FC154
  c->lr=0x801FC15Cu; f_801FB330(c); // 801FC158
  goto L_801FC340; // 801FC15C
L_801FC160:;
  c->r[3]=c->r[31]|c->r[31]; // 801FC160
  c->r[4]=0u+0x00000001u; // 801FC164
  c->lr=0x801FC16Cu; f_802082A0(c); // 801FC168
  goto L_801FC340; // 801FC16C
L_801FC170:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FC170
  c->r[0]=R32(c->r[3]+0x00000024u); // 801FC174
  cmps(c,0,(int32_t)c->r[0],0); // 801FC178
  if (!crb(c,2)) { goto L_801FC340; } // 801FC17C
  c->r[3]=c->r[31]+0x000005F0u; // 801FC180
  c->lr=0x801FC188u; f_80208328(c); // 801FC184
  cmps(c,0,(int32_t)c->r[3],0); // 801FC188
  if (!crb(c,2)) { goto L_801FC340; } // 801FC18C
  c->r[3]=c->r[31]+0x000005F0u; // 801FC190
  c->lr=0x801FC198u; f_8020D6B0(c); // 801FC194
  cmps(c,0,(int32_t)c->r[3],0); // 801FC198
  if (!crb(c,2)) { goto L_801FC1C4; } // 801FC19C
  c->r[3]=0u+0x00000002u; // 801FC1A0
  c->r[4]=0u+0x80470000u; // 801FC1A4
  c->r[4]=c->r[4]+0x00006A58u; // 801FC1A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC1AC
  c->lr=0x801FC1B4u; f_803D3760(c); // 801FC1B0
  c->r[3]=c->r[31]|c->r[31]; // 801FC1B4
  c->r[4]=0u+0x00000007u; // 801FC1B8
  c->lr=0x801FC1C0u; f_801FB330(c); // 801FC1BC
  goto L_801FC340; // 801FC1C0
L_801FC1C4:;
  c->r[0]=R8(c->r[31]+0x00000D24u); // 801FC1C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FC1C8
  cmps(c,0,(int32_t)c->r[0],0); // 801FC1CC
  if (!crb(c,2)) { goto L_801FC1F8; } // 801FC1D0
  c->r[3]=0u+0x00000002u; // 801FC1D4
  c->r[4]=0u+0x80470000u; // 801FC1D8
  c->r[4]=c->r[4]+0x00006A80u; // 801FC1DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC1E0
  c->lr=0x801FC1E8u; f_803D3760(c); // 801FC1E4
  c->r[3]=c->r[31]|c->r[31]; // 801FC1E8
  c->r[4]=0u+0x00000007u; // 801FC1EC
  c->lr=0x801FC1F4u; f_801FB330(c); // 801FC1F0
  goto L_801FC340; // 801FC1F4
L_801FC1F8:;
  c->r[3]=0u+0x00000002u; // 801FC1F8
  c->r[4]=0u+0x80470000u; // 801FC1FC
  c->r[4]=c->r[4]+0x00006AA0u; // 801FC200
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC204
  c->lr=0x801FC20Cu; f_803D3760(c); // 801FC208
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000C0u); // 801FC20C
  cmps(c,0,(int32_t)c->r[3],200); // 801FC210
  if (crb(c,0)) { goto L_801FC228; } // 801FC214
  c->r[0]=c->r[3]+0xFFFFFF38u; // 801FC218
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FC21C
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801FC220
  goto L_801FC230; // 801FC224
L_801FC228:;
  c->r[0]=0u+0x00000000u; // 801FC228
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801FC22C
L_801FC230:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000B8u); // 801FC230
  cmps(c,0,(int32_t)c->r[3],10000); // 801FC234
  if (!crb(c,0)) { goto L_801FC244; } // 801FC238
  c->r[0]=c->r[3]+0x00000001u; // 801FC23C
  W16(c->r[31]+0x000000B8u,c->r[0]); // 801FC240
L_801FC244:;
  c->lr=0x801FC248u; f_801E6540(c); // 801FC244
  c->r[3]=c->r[31]|c->r[31]; // 801FC248
  c->r[4]=0u+0x00000001u; // 801FC24C
  c->lr=0x801FC254u; f_802082A0(c); // 801FC250
  goto L_801FC340; // 801FC254
L_801FC258:;
  c->lr=0x801FC25Cu; f_801E65AC(c); // 801FC258
  cmps(c,0,(int32_t)c->r[3],0); // 801FC25C
  if (crb(c,2)) { goto L_801FC340; } // 801FC260
  c->r[0]=0u+0x00000000u; // 801FC264
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FC268
  W32(c->r[3]+0x00000024u,c->r[0]); // 801FC26C
  c->r[3]=c->r[31]+0x000005F0u; // 801FC270
  c->r[4]=0u+0x80470000u; // 801FC274
  c->r[4]=c->r[4]+0x00006AC4u; // 801FC278
  c->lr=0x801FC280u; f_8020D79C(c); // 801FC27C
  cmps(c,0,(int32_t)c->r[3],0); // 801FC280
  if (!crb(c,2)) { goto L_801FC294; } // 801FC284
  c->r[0]=0u+0x00000001u; // 801FC288
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FC28C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801FC290
L_801FC294:;
  c->r[3]=c->r[31]|c->r[31]; // 801FC294
  c->r[4]=0u+0x00000001u; // 801FC298
  c->lr=0x801FC2A0u; f_802082A0(c); // 801FC29C
  c->r[3]=c->r[31]+0x00000658u; // 801FC2A0
  c->lr=0x801FC2A8u; f_8020B19C(c); // 801FC2A4
  goto L_801FC340; // 801FC2A8
L_801FC2AC:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FC2AC
  c->r[0]=R32(c->r[3]+0x00000024u); // 801FC2B0
  cmps(c,0,(int32_t)c->r[0],0); // 801FC2B4
  if (!crb(c,2)) { goto L_801FC340; } // 801FC2B8
  c->r[3]=c->r[31]+0x000005F0u; // 801FC2BC
  c->lr=0x801FC2C4u; f_80208328(c); // 801FC2C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FC2C4
  if (!crb(c,2)) { goto L_801FC340; } // 801FC2C8
  c->r[3]=c->r[31]+0x000005F0u; // 801FC2CC
  c->lr=0x801FC2D4u; f_8020D72C(c); // 801FC2D0
  cmps(c,0,(int32_t)c->r[3],0); // 801FC2D4
  if (!crb(c,2)) { goto L_801FC300; } // 801FC2D8
  c->r[3]=0u+0x00000002u; // 801FC2DC
  c->r[4]=0u+0x80470000u; // 801FC2E0
  c->r[4]=c->r[4]+0x00006AD0u; // 801FC2E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC2E8
  c->lr=0x801FC2F0u; f_803D3760(c); // 801FC2EC
  c->r[3]=c->r[31]|c->r[31]; // 801FC2F0
  c->r[4]=0u+0x0000001Fu; // 801FC2F4
  c->lr=0x801FC2FCu; f_801FB330(c); // 801FC2F8
  goto L_801FC340; // 801FC2FC
L_801FC300:;
  c->r[3]=c->r[31]|c->r[31]; // 801FC300
  c->r[4]=0u+0x00000007u; // 801FC304
  c->lr=0x801FC30Cu; f_801FB330(c); // 801FC308
  goto L_801FC340; // 801FC30C
L_801FC310:;
  c->r[3]=c->r[31]+0x000005F0u; // 801FC310
  c->lr=0x801FC318u; f_80208314(c); // 801FC314
  cmps(c,0,(int32_t)c->r[3],0); // 801FC318
  if (crb(c,2)) { goto L_801FC340; } // 801FC31C
  c->r[3]=0u+0x00000001u; // 801FC320
  c->r[4]=0u+0x80470000u; // 801FC324
  c->r[4]=c->r[4]+0x00006B0Cu; // 801FC328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC32C
  c->lr=0x801FC334u; f_803D3760(c); // 801FC330
  c->r[3]=c->r[31]|c->r[31]; // 801FC334
  c->r[4]=0u+0x0000001Fu; // 801FC338
  c->lr=0x801FC340u; f_801FB330(c); // 801FC33C
L_801FC340:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC340
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC344
  c->lr=c->r[0]; // 801FC348
  c->r[1]=c->r[1]+0x00000010u; // 801FC34C
  return; // 801FC350
}

// fn_801FC354
void f_801FC354(Ctx* __restrict c) {
  f_80206CF8(c); return; // 801FC354
}

// fn_801FC358
void f_801FC358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC358
  c->r[0]=c->lr; // 801FC35C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FC364
  c->r[31]=c->r[3]|c->r[3]; // 801FC368
  c->r[3]=c->r[3]+0x00000658u; // 801FC36C
  c->lr=0x801FC374u; f_8020A9E4(c); // 801FC370
  cmps(c,0,(int32_t)c->r[3],3); // 801FC374
  if (crb(c,2)) { goto L_801FC3C4; } // 801FC378
  if (!crb(c,0)) { goto L_801FC3F0; } // 801FC37C
  cmps(c,0,(int32_t)c->r[3],2); // 801FC380
  if (!crb(c,0)) { goto L_801FC38C; } // 801FC384
  goto L_801FC3F0; // 801FC388
L_801FC38C:;
  c->r[3]=c->r[31]+0x00000658u; // 801FC38C
  c->lr=0x801FC394u; f_8020B858(c); // 801FC390
  c->r[5]=c->r[3]|c->r[3]; // 801FC394
  c->r[3]=0u+0x00000001u; // 801FC398
  c->r[4]=0u+0x80470000u; // 801FC39C
  c->r[4]=c->r[4]+0x00006B38u; // 801FC3A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC3A4
  c->lr=0x801FC3ACu; f_803D3760(c); // 801FC3A8
  c->r[3]=c->r[31]|c->r[31]; // 801FC3AC
  c->r[4]=0u+0x0000000Au; // 801FC3B0
  c->lr=0x801FC3B8u; f_801FB330(c); // 801FC3B4
  c->r[3]=c->r[31]|c->r[31]; // 801FC3B8
  c->lr=0x801FC3C0u; f_80206CF8(c); // 801FC3BC
  goto L_801FC3F0; // 801FC3C0
L_801FC3C4:;
  c->r[3]=c->r[31]+0x00000658u; // 801FC3C4
  c->lr=0x801FC3CCu; f_8020B858(c); // 801FC3C8
  c->r[5]=c->r[3]|c->r[3]; // 801FC3CC
  c->r[3]=0u+0x00000008u; // 801FC3D0
  c->r[4]=0u+0x80470000u; // 801FC3D4
  c->r[4]=c->r[4]+0x00006B50u; // 801FC3D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC3DC
  c->lr=0x801FC3E4u; f_803D3760(c); // 801FC3E0
  c->r[3]=c->r[31]|c->r[31]; // 801FC3E4
  c->r[4]=0u+0x00000009u; // 801FC3E8
  c->lr=0x801FC3F0u; f_801FB330(c); // 801FC3EC
L_801FC3F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC3F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC3F4
  c->lr=c->r[0]; // 801FC3F8
  c->r[1]=c->r[1]+0x00000010u; // 801FC3FC
  return; // 801FC400
}

// fn_801FC404
void f_801FC404(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC404
  c->r[0]=c->lr; // 801FC408
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC40C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FC410
  c->r[31]=c->r[3]|c->r[3]; // 801FC414
  c->r[3]=c->r[3]+0x00000544u; // 801FC418
  c->lr=0x801FC420u; f_802097E0(c); // 801FC41C
  cmps(c,0,(int32_t)c->r[3],0); // 801FC420
  if (crb(c,2)) { goto L_801FC478; } // 801FC424
  c->r[3]=c->r[31]|c->r[31]; // 801FC428
  c->lr=0x801FC430u; f_8020D00C(c); // 801FC42C
  cmps(c,0,(int32_t)c->r[3],30000); // 801FC430
  if (!crb(c,1)) { goto L_801FC530; } // 801FC434
  c->r[3]=c->r[31]+0x00000658u; // 801FC438
  c->lr=0x801FC440u; f_8020B858(c); // 801FC43C
  c->r[5]=c->r[3]|c->r[3]; // 801FC440
  c->r[3]=0u+0x00000008u; // 801FC444
  c->r[4]=0u+0x80470000u; // 801FC448
  c->r[4]=c->r[4]+0x00006B70u; // 801FC44C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC450
  c->lr=0x801FC458u; f_803D3760(c); // 801FC454
  c->r[3]=c->r[31]+0x00000658u; // 801FC458
  c->lr=0x801FC460u; f_8020B19C(c); // 801FC45C
  c->r[0]=0u+0x00000001u; // 801FC460
  W32(c->r[31]+0x00000064u,c->r[0]); // 801FC464
  c->r[3]=c->r[31]|c->r[31]; // 801FC468
  c->r[4]=0u+0x00000009u; // 801FC46C
  c->lr=0x801FC474u; f_801FB330(c); // 801FC470
  goto L_801FC530; // 801FC474
L_801FC478:;
  c->r[3]=c->r[31]+0x00000658u; // 801FC478
  c->lr=0x801FC480u; f_8020A9E4(c); // 801FC47C
  cmps(c,0,(int32_t)c->r[3],1); // 801FC480
  if (crb(c,2)) { goto L_801FC4D4; } // 801FC484
  if (!crb(c,0)) { goto L_801FC498; } // 801FC488
  cmps(c,0,(int32_t)c->r[3],0); // 801FC48C
  if (!crb(c,0)) { goto L_801FC4A4; } // 801FC490
  goto L_801FC530; // 801FC494
L_801FC498:;
  cmps(c,0,(int32_t)c->r[3],3); // 801FC498
  if (!crb(c,0)) { goto L_801FC530; } // 801FC49C
  goto L_801FC514; // 801FC4A0
L_801FC4A4:;
  c->r[3]=c->r[31]+0x00000658u; // 801FC4A4
  c->lr=0x801FC4ACu; f_8020B858(c); // 801FC4A8
  c->r[5]=c->r[3]|c->r[3]; // 801FC4AC
  c->r[3]=0u+0x00000008u; // 801FC4B0
  c->r[4]=0u+0x80470000u; // 801FC4B4
  c->r[4]=c->r[4]+0x00006BACu; // 801FC4B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC4BC
  c->lr=0x801FC4C4u; f_803D3760(c); // 801FC4C0
  c->r[3]=c->r[31]|c->r[31]; // 801FC4C4
  c->r[4]=0u+0x0000000Bu; // 801FC4C8
  c->lr=0x801FC4D0u; f_801FB330(c); // 801FC4CC
  goto L_801FC530; // 801FC4D0
L_801FC4D4:;
  c->r[3]=c->r[31]+0x00000658u; // 801FC4D4
  c->lr=0x801FC4DCu; f_8020B478(c); // 801FC4D8
  cmps(c,0,(int32_t)c->r[3],0); // 801FC4DC
  if (crb(c,2)) { goto L_801FC4FC; } // 801FC4E0
  c->r[3]=0u+0x00000008u; // 801FC4E4
  c->r[4]=0u+0x80470000u; // 801FC4E8
  c->r[4]=c->r[4]+0x00006BC8u; // 801FC4EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC4F0
  c->lr=0x801FC4F8u; f_803D3760(c); // 801FC4F4
  goto L_801FC530; // 801FC4F8
L_801FC4FC:;
  c->r[3]=0u+0x00000008u; // 801FC4FC
  c->r[4]=0u+0x80470000u; // 801FC500
  c->r[4]=c->r[4]+0x00006C10u; // 801FC504
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC508
  c->lr=0x801FC510u; f_803D3760(c); // 801FC50C
  goto L_801FC530; // 801FC510
L_801FC514:;
  c->r[3]=0u+0x00000008u; // 801FC514
  c->r[4]=0u+0x80470000u; // 801FC518
  c->r[4]=c->r[4]+0x00006C58u; // 801FC51C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC520
  c->lr=0x801FC528u; f_803D3760(c); // 801FC524
  c->r[3]=c->r[31]+0x00000658u; // 801FC528
  c->lr=0x801FC530u; f_8020B2D4(c); // 801FC52C
L_801FC530:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC530
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC534
  c->lr=c->r[0]; // 801FC538
  c->r[1]=c->r[1]+0x00000010u; // 801FC53C
  return; // 801FC540
}

// fn_801FC544
void f_801FC544(Ctx* __restrict c) {
  return; // 801FC544
}

// fn_801FC548
void f_801FC548(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC548
  c->r[0]=c->lr; // 801FC54C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FC550
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FC554
  c->r[31]=c->r[3]|c->r[3]; // 801FC558
  c->r[3]=c->r[3]+0x00000658u; // 801FC55C
  c->lr=0x801FC564u; f_80208344(c); // 801FC560
  cmps(c,0,(int32_t)c->r[3],0); // 801FC564
  if (crb(c,2)) { goto L_801FC5A8; } // 801FC568
  c->r[3]=c->r[31]+0x00000544u; // 801FC56C
  c->r[12]=R32(c->r[3]+0x00000028u); // 801FC570
  c->r[12]=R32(c->r[12]+0x00000010u); // 801FC574
  c->ctr=c->r[12]; // 801FC578
  if (true) { c->lr=0x801FC580u; dispatch(c,c->ctr); } // 801FC57C
  cmps(c,0,(int32_t)c->r[3],0); // 801FC580
  if (crb(c,2)) { goto L_801FC598; } // 801FC584
  c->r[3]=c->r[31]|c->r[31]; // 801FC588
  c->r[4]=0u+0x00000007u; // 801FC58C
  c->lr=0x801FC594u; f_801FB330(c); // 801FC590
  goto L_801FC5DC; // 801FC594
L_801FC598:;
  c->r[3]=c->r[31]|c->r[31]; // 801FC598
  c->r[4]=0u+0x0000001Du; // 801FC59C
  c->lr=0x801FC5A4u; f_801FB330(c); // 801FC5A0
  goto L_801FC5DC; // 801FC5A4
L_801FC5A8:;
  c->r[3]=c->r[31]+0x00000658u; // 801FC5A8
  c->lr=0x801FC5B0u; f_8020A9E4(c); // 801FC5AC
  cmps(c,0,(int32_t)c->r[3],0); // 801FC5B0
  if (crb(c,2)) { goto L_801FC5BC; } // 801FC5B4
  goto L_801FC5DC; // 801FC5B8
L_801FC5BC:;
  c->r[3]=0u+0x00000008u; // 801FC5BC
  c->r[4]=0u+0x80470000u; // 801FC5C0
  c->r[4]=c->r[4]+0x00006CA0u; // 801FC5C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC5C8
  c->lr=0x801FC5D0u; f_803D3760(c); // 801FC5CC
  c->r[3]=c->r[31]|c->r[31]; // 801FC5D0
  c->r[4]=0u+0x00000007u; // 801FC5D4
  c->lr=0x801FC5DCu; f_801FB330(c); // 801FC5D8
L_801FC5DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FC5DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FC5E0
  c->lr=c->r[0]; // 801FC5E4
  c->r[1]=c->r[1]+0x00000010u; // 801FC5E8
  return; // 801FC5EC
}

// fn_801FC5F0
void f_801FC5F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFCB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FC5F0
  c->r[0]=c->lr; // 801FC5F4
  W32(c->r[1]+0x00000354u,c->r[0]); // 801FC5F8
  W32(c->r[1]+0x0000034Cu,c->r[31]); // 801FC5FC
  W32(c->r[1]+0x00000348u,c->r[30]); // 801FC600
  W32(c->r[1]+0x00000344u,c->r[29]); // 801FC604
  c->r[30]=c->r[3]|c->r[3]; // 801FC608
  c->lr=0x801FC610u; f_802082B4(c); // 801FC60C
  cmps(c,0,(int32_t)c->r[3],3); // 801FC610
  if (crb(c,2)) { goto L_801FCDB0; } // 801FC614
  if (!crb(c,0)) { goto L_801FC634; } // 801FC618
  cmps(c,0,(int32_t)c->r[3],1); // 801FC61C
  if (crb(c,2)) { goto L_801FC800; } // 801FC620
  if (!crb(c,0)) { goto L_801FCB48; } // 801FC624
  cmps(c,0,(int32_t)c->r[3],0); // 801FC628
  if (!crb(c,0)) { goto L_801FC64C; } // 801FC62C
  goto L_801FD0A4; // 801FC630
L_801FC634:;
  cmps(c,0,(int32_t)c->r[3],99); // 801FC634
  if (crb(c,2)) { goto L_801FD084; } // 801FC638
  if (!crb(c,0)) { goto L_801FD0A4; } // 801FC63C
  cmps(c,0,(int32_t)c->r[3],5); // 801FC640
  if (!crb(c,0)) { goto L_801FD0A4; } // 801FC644
  goto L_801FD054; // 801FC648
L_801FC64C:;
  c->r[3]=0u+0x00000001u; // 801FC64C
  c->r[4]=0u+0x80470000u; // 801FC650
  c->r[4]=c->r[4]+0x00006CE0u; // 801FC654
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC658
  c->lr=0x801FC660u; f_803D3760(c); // 801FC65C
  c->lr=0x801FC664u; f_80361BF4(c); // 801FC660
  c->r[5]=0u+0x80000000u; // 801FC664
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FC668
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FC66C
  c->r[5]=0u+0x10620000u; // 801FC670
  c->r[5]=c->r[5]+0x00004DD3u; // 801FC674
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FC678
  c->r[6]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FC67C
  c->r[5]=0u+0x00010000u; // 801FC680
  c->r[0]=c->r[5]+0xFFFFEA60u; // 801FC684
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 801FC688
  c->r[29]=0u+0x00000000u; // 801FC68C
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FC690
  c->r[0]=addc(c,c->r[29],c->r[3],c->xer_ca); // 801FC694
  W32(c->r[30]+0x0000004Cu,c->r[4]); // 801FC698
  W32(c->r[30]+0x00000048u,c->r[0]); // 801FC69C
  c->lr=0x801FC6A4u; f_80208B40(c); // 801FC6A0
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FC6A4
  c->r[3]=c->r[3]+0x00000018u; // 801FC6A8
  c->lr=0x801FC6B0u; f_803D82E4(c); // 801FC6AC
  c->r[31]=c->r[3]|c->r[3]; // 801FC6B0
  c->lr=0x801FC6B8u; f_80208B4C(c); // 801FC6B4
  cmps(c,0,(int32_t)c->r[31],2); // 801FC6B8
  if (!crb(c,0)) { goto L_801FC6E4; } // 801FC6BC
  c->r[3]=0u+0x00000002u; // 801FC6C0
  c->r[4]=0u+0x80470000u; // 801FC6C4
  c->r[4]=c->r[4]+0x00006CF8u; // 801FC6C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC6CC
  c->lr=0x801FC6D4u; f_803D3760(c); // 801FC6D0
  c->r[3]=c->r[30]|c->r[30]; // 801FC6D4
  c->r[4]=0u+0x0000001Eu; // 801FC6D8
  c->lr=0x801FC6E0u; f_801FB330(c); // 801FC6DC
  goto L_801FD0A4; // 801FC6E0
L_801FC6E4:;
  c->lr=0x801FC6E8u; f_80208B40(c); // 801FC6E4
  c->r[0]=0u+0x000000FFu; // 801FC6E8
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FC6EC
  W8(c->r[3]+0x0000003Au,c->r[0]); // 801FC6F0
  c->lr=0x801FC6F8u; f_803D82C8(c); // 801FC6F4
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FC6F8
  W8(c->r[4]+0x00000030u,c->r[3]); // 801FC6FC
  c->lr=0x801FC704u; f_80208B4C(c); // 801FC700
  c->r[5]=R32(c->r[30]+0x00000D08u); // 801FC704
  c->r[4]=R8(c->r[5]+0x00000030u); // 801FC708
  c->r[3]=R32(c->r[5]+0x00000018u); // 801FC70C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FC710
  cmpu(c,0,c->r[4],c->r[0]); // 801FC714
  if (crb(c,2)) { goto L_801FC724; } // 801FC718
  W8(c->r[5]+0x0000003Au,c->r[29]); // 801FC71C
  goto L_801FC738; // 801FC720
L_801FC724:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801FC724
  cmpu(c,0,c->r[4],c->r[0]); // 801FC728
  if (crb(c,2)) { goto L_801FC738; } // 801FC72C
  c->r[0]=0u+0x00000001u; // 801FC730
  W8(c->r[5]+0x0000003Au,c->r[0]); // 801FC734
L_801FC738:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FC738
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FC73C
  cmpu(c,0,c->r[0],0x000000FFu); // 801FC740
  if (!crb(c,2)) { goto L_801FC758; } // 801FC744
  c->r[3]=c->r[30]|c->r[30]; // 801FC748
  c->r[4]=0u+0x0000001Eu; // 801FC74C
  c->lr=0x801FC754u; f_801FB330(c); // 801FC750
  goto L_801FD0A4; // 801FC754
L_801FC758:;
  c->r[3]=c->r[30]+0x000006D4u; // 801FC758
  c->lr=0x801FC760u; f_80208390(c); // 801FC75C
  c->r[31]=0u+0x00000000u; // 801FC760
  W32(c->r[13]+0xFFFFBB58u,c->r[31]); // 801FC764
  W32(c->r[13]+0xFFFFBB54u,c->r[31]); // 801FC768
  W8(c->r[13]+0xFFFFBB50u,c->r[31]); // 801FC76C
  W8(c->r[13]+0xFFFFBB51u,c->r[31]); // 801FC770
  c->lr=0x801FC778u; f_80361BF4(c); // 801FC774
  c->r[5]=0u+0x80000000u; // 801FC778
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FC77C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FC780
  c->r[5]=0u+0x10620000u; // 801FC784
  c->r[5]=c->r[5]+0x00004DD3u; // 801FC788
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FC78C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FC790
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801FC794
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FC798
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 801FC79C
  W32(c->r[13]+0xFFFFBB6Cu,c->r[4]); // 801FC7A0
  W32(c->r[13]+0xFFFFBB68u,c->r[0]); // 801FC7A4
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FC7A8
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FC7AC
  cmps(c,0,(int32_t)c->r[0],0); // 801FC7B0
  if (!crb(c,2)) { goto L_801FC7DC; } // 801FC7B4
  c->r[3]=0u+0x00000001u; // 801FC7B8
  c->r[4]=0u+0x80470000u; // 801FC7BC
  c->r[4]=c->r[4]+0x00006D28u; // 801FC7C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC7C4
  c->lr=0x801FC7CCu; f_803D3760(c); // 801FC7C8
  c->r[3]=c->r[30]|c->r[30]; // 801FC7CC
  c->r[4]=0u+0x00000001u; // 801FC7D0
  c->lr=0x801FC7D8u; f_802082BC(c); // 801FC7D4
  goto L_801FD0A4; // 801FC7D8
L_801FC7DC:;
  c->r[3]=0u+0x00000001u; // 801FC7DC
  c->r[4]=0u+0x80470000u; // 801FC7E0
  c->r[4]=c->r[4]+0x00006D48u; // 801FC7E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC7E8
  c->lr=0x801FC7F0u; f_803D3760(c); // 801FC7EC
  c->r[3]=c->r[30]|c->r[30]; // 801FC7F0
  c->r[4]=0u+0x00000003u; // 801FC7F4
  c->lr=0x801FC7FCu; f_802082BC(c); // 801FC7F8
  goto L_801FD0A4; // 801FC7FC
L_801FC800:;
  c->lr=0x801FC804u; f_80361BF4(c); // 801FC800
  c->r[0]=R32(c->r[30]+0x00000048u); // 801FC804
  c->r[6]=R32(c->r[30]+0x0000004Cu); // 801FC808
  c->r[0]=c->r[0]^0x80000000u; // 801FC80C
  c->r[5]=c->r[3]^0x80000000u; // 801FC810
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FC814
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FC818
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FC81C
  c->r[5]=0u-c->r[5]; // 801FC820
  cmps(c,0,(int32_t)c->r[5],0); // 801FC824
  if (crb(c,2)) { goto L_801FC83C; } // 801FC828
  c->r[3]=c->r[30]|c->r[30]; // 801FC82C
  c->r[4]=0u+0x00000063u; // 801FC830
  c->lr=0x801FC838u; f_802082BC(c); // 801FC834
  goto L_801FD0A4; // 801FC838
L_801FC83C:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FC83C
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FC840
  cmps(c,0,(int32_t)c->r[0],0); // 801FC844
  if (!crb(c,2)) { goto L_801FC9F4; } // 801FC848
  c->r[0]=R32(c->r[13]+0xFFFFBB58u); // 801FC84C
  cmps(c,0,(int32_t)c->r[0],0); // 801FC850
  if (crb(c,2)) { goto L_801FC88C; } // 801FC854
  c->r[0]=R8(c->r[13]+0xFFFFBB50u); // 801FC858
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801FC85C
  cmps(c,0,(int32_t)c->r[0],15); // 801FC860
  if (!crb(c,2)) { goto L_801FC8BC; } // 801FC864
  c->r[3]=0u+0x00000001u; // 801FC868
  c->r[4]=0u+0x80470000u; // 801FC86C
  c->r[4]=c->r[4]+0x00006D68u; // 801FC870
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC874
  c->lr=0x801FC87Cu; f_803D3760(c); // 801FC878
  c->r[3]=c->r[30]|c->r[30]; // 801FC87C
  c->r[4]=0u+0x00000004u; // 801FC880
  c->lr=0x801FC888u; f_802082BC(c); // 801FC884
  goto L_801FD0A4; // 801FC888
L_801FC88C:;
  c->r[0]=R8(c->r[13]+0xFFFFBB50u); // 801FC88C
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801FC890
  cmps(c,0,(int32_t)c->r[0],15); // 801FC894
  if (!crb(c,2)) { goto L_801FC8BC; } // 801FC898
  c->r[3]=0u+0x00000001u; // 801FC89C
  c->r[4]=0u+0x80470000u; // 801FC8A0
  c->r[4]=c->r[4]+0x00006D88u; // 801FC8A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FC8A8
  c->lr=0x801FC8B0u; f_803D3760(c); // 801FC8AC
  c->r[0]=0u+0x00000001u; // 801FC8B0
  W32(c->r[13]+0xFFFFBB54u,c->r[0]); // 801FC8B4
  W32(c->r[13]+0xFFFFBB58u,c->r[0]); // 801FC8B8
L_801FC8BC:;
  c->r[0]=R8(c->r[13]+0xFFFFBB51u); // 801FC8BC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 801FC8C0
  cmps(c,0,(int32_t)c->r[0],0); // 801FC8C4
  if (crb(c,2)) { goto L_801FC924; } // 801FC8C8
  c->r[3]=R8(c->r[13]+0xFFFFBB50u); // 801FC8CC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 801FC8D0
  cmps(c,0,(int32_t)c->r[0],0); // 801FC8D4
  if (!crb(c,2)) { goto L_801FC924; } // 801FC8D8
  c->r[0]=c->r[3]|0x00000002u; // 801FC8DC
  W8(c->r[13]+0xFFFFBB50u,c->r[0]); // 801FC8E0
  c->r[0]=0u+0x00000001u; // 801FC8E4
  W32(c->r[13]+0xFFFFBB54u,c->r[0]); // 801FC8E8
  c->lr=0x801FC8F0u; f_80361BF4(c); // 801FC8EC
  c->r[5]=0u+0x80000000u; // 801FC8F0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FC8F4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FC8F8
  c->r[5]=0u+0x10620000u; // 801FC8FC
  c->r[5]=c->r[5]+0x00004DD3u; // 801FC900
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FC904
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FC908
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801FC90C
  c->r[0]=0u+0x00000000u; // 801FC910
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FC914
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FC918
  W32(c->r[13]+0xFFFFBB64u,c->r[4]); // 801FC91C
  W32(c->r[13]+0xFFFFBB60u,c->r[0]); // 801FC920
L_801FC924:;
  c->r[0]=R8(c->r[13]+0xFFFFBB51u); // 801FC924
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801FC928
  cmps(c,0,(int32_t)c->r[0],7); // 801FC92C
  if (!crb(c,2)) { goto L_801FC96C; } // 801FC930
  c->r[3]=R8(c->r[13]+0xFFFFBB50u); // 801FC934
  c->r[0]=0u-c->r[3]; // 801FC938
  c->r[0]=c->r[0]|c->r[3]; // 801FC93C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FC940
  cmpu(c,0,c->r[0],0x00000001u); // 801FC944
  if (!crb(c,2)) { goto L_801FC96C; } // 801FC948
  c->r[0]=rotl(c->r[3],0)&0x0000000Cu; // 801FC94C
  cmps(c,0,(int32_t)c->r[0],0); // 801FC950
  if (!crb(c,2)) { goto L_801FCB1C; } // 801FC954
  c->r[0]=c->r[3]|0x0000000Cu; // 801FC958
  W8(c->r[13]+0xFFFFBB50u,c->r[0]); // 801FC95C
  c->r[0]=0u+0x00000001u; // 801FC960
  W32(c->r[13]+0xFFFFBB54u,c->r[0]); // 801FC964
  goto L_801FCB1C; // 801FC968
L_801FC96C:;
  c->r[3]=R8(c->r[13]+0xFFFFBB50u); // 801FC96C
  c->r[0]=0u-c->r[3]; // 801FC970
  c->r[0]=c->r[0]|c->r[3]; // 801FC974
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FC978
  cmpu(c,0,c->r[0],0x00000001u); // 801FC97C
  if (crb(c,2)) { goto L_801FCB1C; } // 801FC980
  c->lr=0x801FC988u; f_80361BF4(c); // 801FC984
  c->r[0]=R32(c->r[13]+0xFFFFBB60u); // 801FC988
  c->r[6]=R32(c->r[13]+0xFFFFBB64u); // 801FC98C
  c->r[0]=c->r[0]^0x80000000u; // 801FC990
  c->r[5]=c->r[3]^0x80000000u; // 801FC994
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FC998
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FC99C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FC9A0
  c->r[5]=0u-c->r[5]; // 801FC9A4
  cmps(c,0,(int32_t)c->r[5],0); // 801FC9A8
  if (crb(c,2)) { goto L_801FCB1C; } // 801FC9AC
  c->r[0]=0u+0x00000001u; // 801FC9B0
  W32(c->r[13]+0xFFFFBB54u,c->r[0]); // 801FC9B4
  c->lr=0x801FC9BCu; f_80361BF4(c); // 801FC9B8
  c->r[5]=0u+0x80000000u; // 801FC9BC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FC9C0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FC9C4
  c->r[5]=0u+0x10620000u; // 801FC9C8
  c->r[5]=c->r[5]+0x00004DD3u; // 801FC9CC
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FC9D0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FC9D4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801FC9D8
  c->r[0]=0u+0x00000000u; // 801FC9DC
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FC9E0
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FC9E4
  W32(c->r[13]+0xFFFFBB64u,c->r[4]); // 801FC9E8
  W32(c->r[13]+0xFFFFBB60u,c->r[0]); // 801FC9EC
  goto L_801FCB1C; // 801FC9F0
L_801FC9F4:;
  c->r[0]=R32(c->r[13]+0xFFFFBB58u); // 801FC9F4
  cmps(c,0,(int32_t)c->r[0],0); // 801FC9F8
  if (crb(c,2)) { goto L_801FCA50; } // 801FC9FC
  c->lr=0x801FCA04u; f_80361BF4(c); // 801FCA00
  c->r[0]=R32(c->r[13]+0xFFFFBB60u); // 801FCA04
  c->r[6]=R32(c->r[13]+0xFFFFBB64u); // 801FCA08
  c->r[0]=c->r[0]^0x80000000u; // 801FCA0C
  c->r[5]=c->r[3]^0x80000000u; // 801FCA10
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FCA14
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FCA18
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FCA1C
  c->r[5]=0u-c->r[5]; // 801FCA20
  cmps(c,0,(int32_t)c->r[5],0); // 801FCA24
  if (crb(c,2)) { goto L_801FCA50; } // 801FCA28
  c->r[3]=0u+0x00000001u; // 801FCA2C
  c->r[4]=0u+0x80470000u; // 801FCA30
  c->r[4]=c->r[4]+0x00006DB0u; // 801FCA34
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCA38
  c->lr=0x801FCA40u; f_803D3760(c); // 801FCA3C
  c->r[3]=c->r[30]|c->r[30]; // 801FCA40
  c->r[4]=0u+0x00000004u; // 801FCA44
  c->lr=0x801FCA4Cu; f_802082BC(c); // 801FCA48
  goto L_801FD0A4; // 801FCA4C
L_801FCA50:;
  c->r[0]=R8(c->r[13]+0xFFFFBB51u); // 801FCA50
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801FCA54
  cmps(c,0,(int32_t)c->r[0],15); // 801FCA58
  if (!crb(c,2)) { goto L_801FCAD8; } // 801FCA5C
  c->r[3]=R8(c->r[13]+0xFFFFBB50u); // 801FCA60
  c->r[0]=0u-c->r[3]; // 801FCA64
  c->r[0]=c->r[0]|c->r[3]; // 801FCA68
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FCA6C
  cmpu(c,0,c->r[0],0x00000001u); // 801FCA70
  if (!crb(c,2)) { goto L_801FCAD8; } // 801FCA74
  c->r[0]=R32(c->r[13]+0xFFFFBB58u); // 801FCA78
  cmps(c,0,(int32_t)c->r[0],0); // 801FCA7C
  if (!crb(c,2)) { goto L_801FCAD8; } // 801FCA80
  c->r[3]=0u+0x00000001u; // 801FCA84
  c->r[4]=0u+0x80470000u; // 801FCA88
  c->r[4]=c->r[4]+0x00006DD0u; // 801FCA8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCA90
  c->lr=0x801FCA98u; f_803D3760(c); // 801FCA94
  c->lr=0x801FCA9Cu; f_80361BF4(c); // 801FCA98
  c->r[5]=0u+0x80000000u; // 801FCA9C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FCAA0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FCAA4
  c->r[5]=0u+0x10620000u; // 801FCAA8
  c->r[5]=c->r[5]+0x00004DD3u; // 801FCAAC
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FCAB0
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FCAB4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)750); // 801FCAB8
  c->r[0]=0u+0x00000000u; // 801FCABC
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FCAC0
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FCAC4
  W32(c->r[13]+0xFFFFBB64u,c->r[4]); // 801FCAC8
  W32(c->r[13]+0xFFFFBB60u,c->r[0]); // 801FCACC
  c->r[0]=0u+0x00000001u; // 801FCAD0
  W32(c->r[13]+0xFFFFBB58u,c->r[0]); // 801FCAD4
L_801FCAD8:;
  c->r[0]=R8(c->r[13]+0xFFFFBB51u); // 801FCAD8
  c->r[0]=rotl(c->r[0],0)&0x0000000Fu; // 801FCADC
  cmps(c,0,(int32_t)c->r[0],3); // 801FCAE0
  if (!crb(c,2)) { goto L_801FCB1C; } // 801FCAE4
  c->r[3]=R8(c->r[13]+0xFFFFBB50u); // 801FCAE8
  c->r[0]=0u-c->r[3]; // 801FCAEC
  c->r[0]=c->r[0]|c->r[3]; // 801FCAF0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FCAF4
  cmpu(c,0,c->r[0],0x00000001u); // 801FCAF8
  if (!crb(c,2)) { goto L_801FCB1C; } // 801FCAFC
  c->r[0]=0u+0x00000001u; // 801FCB00
  W32(c->r[13]+0xFFFFBB54u,c->r[0]); // 801FCB04
  c->r[0]=rotl(c->r[3],0)&0x00000004u; // 801FCB08
  cmps(c,0,(int32_t)c->r[0],0); // 801FCB0C
  if (!crb(c,2)) { goto L_801FCB1C; } // 801FCB10
  c->r[0]=c->r[3]|0x00000004u; // 801FCB14
  W8(c->r[13]+0xFFFFBB50u,c->r[0]); // 801FCB18
L_801FCB1C:;
  c->r[0]=R32(c->r[13]+0xFFFFBB54u); // 801FCB1C
  cmps(c,0,(int32_t)c->r[0],0); // 801FCB20
  if (crb(c,2)) { goto L_801FCB38; } // 801FCB24
  c->r[3]=c->r[30]|c->r[30]; // 801FCB28
  c->r[4]=0u+0x00000002u; // 801FCB2C
  c->lr=0x801FCB34u; f_802082BC(c); // 801FCB30
  goto L_801FD0A4; // 801FCB34
L_801FCB38:;
  c->r[3]=c->r[30]|c->r[30]; // 801FCB38
  c->r[4]=0u+0x00000003u; // 801FCB3C
  c->lr=0x801FCB44u; f_802082BC(c); // 801FCB40
  goto L_801FD0A4; // 801FCB44
L_801FCB48:;
  c->r[0]=R32(c->r[13]+0xFFFFBB54u); // 801FCB48
  cmps(c,0,(int32_t)c->r[0],0); // 801FCB4C
  if (crb(c,2)) { goto L_801FCDA0; } // 801FCB50
  c->lr=0x801FCB58u; f_80361BF4(c); // 801FCB54
  c->r[0]=R32(c->r[13]+0xFFFFBB68u); // 801FCB58
  c->r[6]=R32(c->r[13]+0xFFFFBB6Cu); // 801FCB5C
  c->r[0]=c->r[0]^0x80000000u; // 801FCB60
  c->r[5]=c->r[3]^0x80000000u; // 801FCB64
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FCB68
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FCB6C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FCB70
  c->r[5]=0u-c->r[5]; // 801FCB74
  cmps(c,0,(int32_t)c->r[5],0); // 801FCB78
  if (crb(c,2)) { goto L_801FCDA0; } // 801FCB7C
  c->r[3]=0u+0x00000001u; // 801FCB80
  c->r[4]=0u+0x80470000u; // 801FCB84
  c->r[4]=c->r[4]+0x00006DF0u; // 801FCB88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCB8C
  c->lr=0x801FCB94u; f_803D3760(c); // 801FCB90
  c->r[3]=c->r[30]+0x000006D4u; // 801FCB94
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCB98
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FCB9C
  c->lr=0x801FCBA4u; f_8020BF40(c); // 801FCBA0
  cmps(c,0,(int32_t)c->r[3],0); // 801FCBA4
  if (crb(c,2)) { goto L_801FCD60; } // 801FCBA8
  c->r[0]=0u+0x00000100u; // 801FCBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FCBB0
  c->r[3]=c->r[1]+0x00000138u; // 801FCBB4
  c->r[4]=0u+0x00000000u; // 801FCBB8
  c->r[5]=0u+0x00000200u; // 801FCBBC
  c->lr=0x801FCBC4u; f_800060B8(c); // 801FCBC0
  c->r[3]=c->r[30]+0x00000544u; // 801FCBC4
  c->lr=0x801FCBCCu; f_8020957C(c); // 801FCBC8
  c->r[5]=c->r[3]|c->r[3]; // 801FCBCC
  c->r[3]=c->r[1]+0x00000138u; // 801FCBD0
  c->r[4]=c->r[1]+0x00000014u; // 801FCBD4
  c->r[6]=0u+0x00000000u; // 801FCBD8
  c->lr=0x801FCBE0u; f_8040C91C(c); // 801FCBDC
  c->r[31]=c->r[3]|c->r[3]; // 801FCBE0
  c->r[3]=c->r[1]+0x00000018u; // 801FCBE4
  c->r[4]=0u+0x00000000u; // 801FCBE8
  c->r[5]=0u+0x00000010u; // 801FCBEC
  c->lr=0x801FCBF4u; f_800060B8(c); // 801FCBF0
  cmps(c,0,(int32_t)c->r[31],0); // 801FCBF4
  if (crb(c,2)) { goto L_801FCC2C; } // 801FCBF8
  c->r[3]=0u+0x00000002u; // 801FCBFC
  c->r[4]=0u+0x80470000u; // 801FCC00
  c->r[4]=c->r[4]+0x00006E04u; // 801FCC04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCC08
  c->lr=0x801FCC10u; f_803D3760(c); // 801FCC0C
  c->r[3]=c->r[30]+0x00000544u; // 801FCC10
  c->lr=0x801FCC18u; f_8020957C(c); // 801FCC14
  c->r[4]=c->r[3]|c->r[3]; // 801FCC18
  c->r[3]=c->r[1]+0x00000018u; // 801FCC1C
  c->r[5]=0u+0x00000010u; // 801FCC20
  c->lr=0x801FCC28u; f_802EB9F4(c); // 801FCC24
  goto L_801FCC3C; // 801FCC28
L_801FCC2C:;
  c->r[3]=c->r[1]+0x00000018u; // 801FCC2C
  c->r[4]=c->r[1]+0x00000138u; // 801FCC30
  c->r[5]=0u+0x00000010u; // 801FCC34
  c->lr=0x801FCC3Cu; f_802E53B8(c); // 801FCC38
L_801FCC3C:;
  c->r[3]=c->r[1]+0x00000028u; // 801FCC3C
  c->r[4]=c->r[30]+0x000000B8u; // 801FCC40
  c->lr=0x801FCC48u; f_8020835C(c); // 801FCC44
  c->r[0]=0u+0x00000007u; // 801FCC48
  c->r[4]=R16(c->r[1]+0x00000032u); // 801FCC4C
  c->r[4]=(rotl(c->r[0],0)&0x00000FFFu)|(c->r[4]&~0x00000FFFu); // 801FCC50
  W16(c->r[1]+0x00000032u,c->r[4]); // 801FCC54
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCC58
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FCC5C
  cmps(c,0,(int32_t)c->r[0],0); // 801FCC60
  if (!crb(c,2)) { goto L_801FCC80; } // 801FCC64
  c->r[0]=R8(c->r[13]+0xFFFFBB50u); // 801FCC68
  c->r[3]=rotl(c->r[0],0)&0x0000000Fu; // 801FCC6C
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 801FCC70
  c->r[0]=(rotl(c->r[3],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 801FCC74
  W16(c->r[1]+0x00000032u,c->r[0]); // 801FCC78
  goto L_801FCC94; // 801FCC7C
L_801FCC80:;
  c->r[0]=R8(c->r[13]+0xFFFFBB50u); // 801FCC80
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 801FCC84
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 801FCC88
  c->r[0]=(rotl(c->r[3],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 801FCC8C
  W16(c->r[1]+0x00000032u,c->r[0]); // 801FCC90
L_801FCC94:;
  c->r[3]=c->r[30]+0x000006D4u; // 801FCC94
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCC98
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FCC9C
  c->r[5]=0u+0x00004650u; // 801FCCA0
  c->lr=0x801FCCA8u; f_8020834C(c); // 801FCCA4
  c->r[3]=c->r[30]+0x000006D4u; // 801FCCA8
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCCAC
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FCCB0
  c->r[5]=c->r[1]+0x00000018u; // 801FCCB4
  c->r[6]=0u+0x0000001Cu; // 801FCCB8
  c->r[7]=0u+0x00000000u; // 801FCCBC
  c->lr=0x801FCCC4u; f_8020BFE0(c); // 801FCCC0
  cmps(c,0,(int32_t)c->r[3],0); // 801FCCC4
  if (crb(c,2)) { goto L_801FCD34; } // 801FCCC8
  c->r[3]=0u+0x00000001u; // 801FCCCC
  c->r[4]=0u+0x80470000u; // 801FCCD0
  c->r[4]=c->r[4]+0x00006E38u; // 801FCCD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCCD8
  c->lr=0x801FCCE0u; f_803D3760(c); // 801FCCDC
  c->r[3]=0u+0x00000001u; // 801FCCE0
  c->r[4]=0u+0x80470000u; // 801FCCE4
  c->r[4]=c->r[4]+0x00006E50u; // 801FCCE8
  c->r[5]=R8(c->r[13]+0xFFFFBB50u); // 801FCCEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCCF0
  c->lr=0x801FCCF8u; f_803D3760(c); // 801FCCF4
  c->r[31]=0u+0x00000000u; // 801FCCF8
  W32(c->r[13]+0xFFFFBB54u,c->r[31]); // 801FCCFC
  c->lr=0x801FCD04u; f_80361BF4(c); // 801FCD00
  c->r[5]=0u+0x80000000u; // 801FCD04
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FCD08
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FCD0C
  c->r[5]=0u+0x10620000u; // 801FCD10
  c->r[5]=c->r[5]+0x00004DD3u; // 801FCD14
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FCD18
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FCD1C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1200); // 801FCD20
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FCD24
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 801FCD28
  W32(c->r[13]+0xFFFFBB6Cu,c->r[4]); // 801FCD2C
  W32(c->r[13]+0xFFFFBB68u,c->r[0]); // 801FCD30
L_801FCD34:;
  c->r[29]=R32(c->r[30]+0x00000D08u); // 801FCD34
  c->r[3]=c->r[30]+0x00000544u; // 801FCD38
  c->lr=0x801FCD40u; f_8020957C(c); // 801FCD3C
  c->r[4]=c->r[3]|c->r[3]; // 801FCD40
  c->r[0]=R8(c->r[29]+0x00000030u); // 801FCD44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 801FCD48
  c->r[3]=c->r[29]+c->r[0]; // 801FCD4C
  c->r[3]=c->r[3]+0x000000A0u; // 801FCD50
  c->r[5]=0u+0x00000008u; // 801FCD54
  c->lr=0x801FCD5Cu; f_8021E898(c); // 801FCD58
  goto L_801FCDA0; // 801FCD5C
L_801FCD60:;
  c->r[3]=0u+0x00000002u; // 801FCD60
  c->r[4]=0u+0x80470000u; // 801FCD64
  c->r[4]=c->r[4]+0x00006E6Cu; // 801FCD68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCD6C
  c->lr=0x801FCD74u; f_803D3760(c); // 801FCD70
  c->lr=0x801FCD78u; f_80208B40(c); // 801FCD74
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCD78
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FCD7C
  c->lr=0x801FCD84u; f_803D8328(c); // 801FCD80
  c->r[31]=c->r[3]|c->r[3]; // 801FCD84
  c->lr=0x801FCD8Cu; f_80208B4C(c); // 801FCD88
  cmps(c,0,(int32_t)c->r[31],0); // 801FCD8C
  if (!crb(c,2)) { goto L_801FCDA0; } // 801FCD90
  c->r[3]=c->r[30]|c->r[30]; // 801FCD94
  c->r[4]=0u+0x0000001Eu; // 801FCD98
  c->lr=0x801FCDA0u; f_801FB330(c); // 801FCD9C
L_801FCDA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801FCDA0
  c->r[4]=0u+0x00000003u; // 801FCDA4
  c->lr=0x801FCDACu; f_802082BC(c); // 801FCDA8
  goto L_801FD0A4; // 801FCDAC
L_801FCDB0:;
  c->lr=0x801FCDB4u; f_80208B40(c); // 801FCDB0
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCDB4
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FCDB8
  c->lr=0x801FCDC0u; f_803D8328(c); // 801FCDBC
  c->r[31]=c->r[3]|c->r[3]; // 801FCDC0
  c->lr=0x801FCDC8u; f_80208B4C(c); // 801FCDC4
  cmps(c,0,(int32_t)c->r[31],0); // 801FCDC8
  if (!crb(c,2)) { goto L_801FCDF0; } // 801FCDCC
  c->r[3]=0u+0x00000002u; // 801FCDD0
  c->r[4]=0u+0x80470000u; // 801FCDD4
  c->r[4]=c->r[4]+0x00006E98u; // 801FCDD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCDDC
  c->lr=0x801FCDE4u; f_803D3760(c); // 801FCDE0
  c->r[3]=c->r[30]|c->r[30]; // 801FCDE4
  c->r[4]=0u+0x0000001Eu; // 801FCDE8
  c->lr=0x801FCDF0u; f_801FB330(c); // 801FCDEC
L_801FCDF0:;
  c->r[3]=c->r[30]+0x000006D4u; // 801FCDF0
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCDF4
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FCDF8
  c->r[5]=c->r[1]+0x00000008u; // 801FCDFC
  c->r[6]=0u+0x00000000u; // 801FCE00
  c->lr=0x801FCE08u; f_8020BD84(c); // 801FCE04
  c->r[31]=c->r[3]|c->r[3]; // 801FCE08
  cmps(c,0,(int32_t)c->r[3],0); // 801FCE0C
  if (crb(c,2)) { goto L_801FCFE8; } // 801FCE10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801FCE14
  cmpu(c,0,c->r[0],0x0000001Cu); // 801FCE18
  if (!crb(c,2)) { goto L_801FCFE8; } // 801FCE1C
  c->r[3]=0u+0x00000001u; // 801FCE20
  c->r[4]=0u+0x80470000u; // 801FCE24
  c->r[4]=c->r[4]+0x00006EC8u; // 801FCE28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCE2C
  c->lr=0x801FCE34u; f_803D3760(c); // 801FCE30
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCE34
  c->r[3]=c->r[3]+0x00000042u; // 801FCE38
  c->r[4]=0u+0x00000000u; // 801FCE3C
  c->r[5]=0u+0x00000012u; // 801FCE40
  c->lr=0x801FCE48u; f_800060B8(c); // 801FCE44
  c->r[0]=R16(c->r[31]+0x0000001Au); // 801FCE48
  c->r[5]=rotl(c->r[0],20)&0x0000000Fu; // 801FCE4C
  W8(c->r[13]+0xFFFFBB51u,c->r[5]); // 801FCE50
  c->r[3]=0u+0x00000001u; // 801FCE54
  c->r[4]=0u+0x80470000u; // 801FCE58
  c->r[4]=c->r[4]+0x00006EDCu; // 801FCE5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCE60
  c->lr=0x801FCE68u; f_803D3760(c); // 801FCE64
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCE68
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FCE6C
  cmps(c,0,(int32_t)c->r[0],0); // 801FCE70
  c->r[3]=0u+0x00000003u; // 801FCE74
  if (!crb(c,2)) { goto L_801FCE80; } // 801FCE78
  c->r[3]=0u+0x00000001u; // 801FCE7C
L_801FCE80:;
  c->r[0]=R8(c->r[13]+0xFFFFBB50u); // 801FCE80
  c->r[0]=c->r[0]|c->r[3]; // 801FCE84
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801FCE88
  W8(c->r[13]+0xFFFFBB50u,c->r[0]); // 801FCE8C
  c->r[0]=R8(c->r[13]+0xFFFFBB51u); // 801FCE90
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801FCE94
  cmps(c,0,(int32_t)c->r[0],0); // 801FCE98
  if (!crb(c,2)) { goto L_801FCEA8; } // 801FCE9C
  c->r[0]=0u+0x00000001u; // 801FCEA0
  W32(c->r[13]+0xFFFFBB54u,c->r[0]); // 801FCEA4
L_801FCEA8:;
  c->r[0]=0u+0x00000100u; // 801FCEA8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FCEAC
  c->r[3]=c->r[1]+0x00000038u; // 801FCEB0
  c->r[4]=0u+0x00000000u; // 801FCEB4
  c->r[5]=0u+0x00000100u; // 801FCEB8
  c->lr=0x801FCEC0u; f_800060B8(c); // 801FCEBC
  c->r[0]=0u+0x00000010u; // 801FCEC0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801FCEC4
  c->r[3]=c->r[1]+0x00000038u; // 801FCEC8
  c->r[4]=c->r[1]+0x00000010u; // 801FCECC
  c->r[5]=c->r[31]|c->r[31]; // 801FCED0
  c->r[6]=c->r[1]+0x0000000Cu; // 801FCED4
  c->lr=0x801FCEDCu; f_8040C924(c); // 801FCED8
  cmps(c,0,(int32_t)c->r[3],0); // 801FCEDC
  if (crb(c,2)) { goto L_801FCF10; } // 801FCEE0
  c->r[3]=0u+0x00000002u; // 801FCEE4
  c->r[4]=0u+0x80470000u; // 801FCEE8
  c->r[4]=c->r[4]+0x00006E04u; // 801FCEEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCEF0
  c->lr=0x801FCEF8u; f_803D3760(c); // 801FCEF4
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCEF8
  c->r[3]=c->r[3]+0x00000042u; // 801FCEFC
  c->r[4]=c->r[31]|c->r[31]; // 801FCF00
  c->r[5]=0u+0x00000008u; // 801FCF04
  c->lr=0x801FCF0Cu; f_802EB9F4(c); // 801FCF08
  goto L_801FCF24; // 801FCF0C
L_801FCF10:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCF10
  c->r[3]=c->r[3]+0x00000042u; // 801FCF14
  c->r[4]=c->r[1]+0x00000038u; // 801FCF18
  c->r[5]=R32(c->r[1]+0x00000010u); // 801FCF1C
  c->lr=0x801FCF24u; f_802E53B8(c); // 801FCF20
L_801FCF24:;
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCF24
  c->r[0]=R8(c->r[4]+0x0000003Au); // 801FCF28
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 801FCF2C
  c->r[3]=c->r[4]+c->r[0]; // 801FCF30
  c->r[3]=c->r[3]+0x000000A0u; // 801FCF34
  c->r[4]=c->r[4]+0x00000042u; // 801FCF38
  c->r[5]=0u+0x00000008u; // 801FCF3C
  c->lr=0x801FCF44u; f_8021E898(c); // 801FCF40
  c->r[5]=R32(c->r[30]+0x00000D08u); // 801FCF44
  c->r[3]=0u+0x00000001u; // 801FCF48
  c->r[4]=0u+0x80470000u; // 801FCF4C
  c->r[4]=c->r[4]+0x00006EF8u; // 801FCF50
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FCF54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 801FCF58
  c->r[5]=c->r[5]+c->r[0]; // 801FCF5C
  c->r[5]=c->r[5]+0x000000A0u; // 801FCF60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCF64
  c->lr=0x801FCF6Cu; f_803D3760(c); // 801FCF68
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCF6C
  c->r[3]=c->r[3]+0x00000054u; // 801FCF70
  c->r[4]=c->r[31]+0x00000010u; // 801FCF74
  c->lr=0x801FCF7Cu; f_8020835C(c); // 801FCF78
  c->r[4]=0u+0x00000000u; // 801FCF7C
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FCF80
  c->r[0]=R16(c->r[3]+0x0000005Eu); // 801FCF84
  c->r[0]=(rotl(c->r[4],12)&0x0000F000u)|(c->r[0]&~0x0000F000u); // 801FCF88
  W16(c->r[3]+0x0000005Eu,c->r[0]); // 801FCF8C
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCF90
  c->r[3]=R16(c->r[4]+0x0000005Eu); // 801FCF94
  c->r[0]=rotl(c->r[3],0)&0x00000FFFu; // 801FCF98
  cmps(c,0,(int32_t)c->r[0],0); // 801FCF9C
  if (!crb(c,2)) { goto L_801FCFB0; } // 801FCFA0
  c->r[0]=0u+0x00000001u; // 801FCFA4
  c->r[3]=(rotl(c->r[0],0)&0x00000FFFu)|(c->r[3]&~0x00000FFFu); // 801FCFA8
  W16(c->r[4]+0x0000005Eu,c->r[3]); // 801FCFAC
L_801FCFB0:;
  c->r[3]=0u+0x00000001u; // 801FCFB0
  c->r[4]=0u+0x80470000u; // 801FCFB4
  c->r[4]=c->r[4]+0x00006F08u; // 801FCFB8
  c->r[5]=R32(c->r[30]+0x00000D08u); // 801FCFBC
  c->r[0]=R16(c->r[5]+0x0000005Eu); // 801FCFC0
  c->r[5]=rotl(c->r[0],0)&0x00000FFFu; // 801FCFC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FCFC8
  c->lr=0x801FCFD0u; f_803D3760(c); // 801FCFCC
  c->r[3]=c->r[30]+0x000006D4u; // 801FCFD0
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FCFD4
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FCFD8
  c->r[5]=0u+0x00001388u; // 801FCFDC
  c->lr=0x801FCFE4u; f_8020834C(c); // 801FCFE0
  goto L_801FD028; // 801FCFE4
L_801FCFE8:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801FCFE8
  cmps(c,0,(int32_t)c->r[5],0); // 801FCFEC
  if (!crb(c,1)) { goto L_801FD028; } // 801FCFF0
  c->r[3]=0u+0x00000001u; // 801FCFF4
  c->r[4]=0u+0x80470000u; // 801FCFF8
  c->r[4]=c->r[4]+0x00006F18u; // 801FCFFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD000
  c->lr=0x801FD008u; f_803D3760(c); // 801FD004
  c->r[0]=R16(c->r[31]+0x0000001Au); // 801FD008
  c->r[5]=rotl(c->r[0],20)&0x0000000Fu; // 801FD00C
  W8(c->r[13]+0xFFFFBB51u,c->r[5]); // 801FD010
  c->r[3]=0u+0x00000001u; // 801FD014
  c->r[4]=0u+0x80470000u; // 801FD018
  c->r[4]=c->r[4]+0x00006EDCu; // 801FD01C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD020
  c->lr=0x801FD028u; f_803D3760(c); // 801FD024
L_801FD028:;
  c->r[0]=R32(c->r[13]+0xFFFFBB54u); // 801FD028
  cmps(c,0,(int32_t)c->r[0],0); // 801FD02C
  if (crb(c,2)) { goto L_801FD044; } // 801FD030
  c->r[3]=c->r[30]|c->r[30]; // 801FD034
  c->r[4]=0u+0x00000002u; // 801FD038
  c->lr=0x801FD040u; f_802082BC(c); // 801FD03C
  goto L_801FD0A4; // 801FD040
L_801FD044:;
  c->r[3]=c->r[30]|c->r[30]; // 801FD044
  c->r[4]=0u+0x00000001u; // 801FD048
  c->lr=0x801FD050u; f_802082BC(c); // 801FD04C
  goto L_801FD0A4; // 801FD050
L_801FD054:;
  c->r[3]=0u+0x00000001u; // 801FD054
  c->r[4]=0u+0x80470000u; // 801FD058
  c->r[4]=c->r[4]+0x00006F3Cu; // 801FD05C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD060
  c->lr=0x801FD068u; f_803D3760(c); // 801FD064
  c->r[0]=0u+0x00000000u; // 801FD068
  W8(c->r[13]+0xFFFFBB50u,c->r[0]); // 801FD06C
  W8(c->r[13]+0xFFFFBB51u,c->r[0]); // 801FD070
  c->r[3]=c->r[30]|c->r[30]; // 801FD074
  c->r[4]=0u+0x0000000Du; // 801FD078
  c->lr=0x801FD080u; f_801FB330(c); // 801FD07C
  goto L_801FD0A4; // 801FD080
L_801FD084:;
  c->r[3]=0u+0x00000001u; // 801FD084
  c->r[4]=0u+0x80470000u; // 801FD088
  c->r[4]=c->r[4]+0x00006F70u; // 801FD08C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD090
  c->lr=0x801FD098u; f_803D3760(c); // 801FD094
  c->r[3]=c->r[30]|c->r[30]; // 801FD098
  c->r[4]=0u+0x0000001Eu; // 801FD09C
  c->lr=0x801FD0A4u; f_801FB330(c); // 801FD0A0
L_801FD0A4:;
  c->r[31]=R32(c->r[1]+0x0000034Cu); // 801FD0A4
  c->r[30]=R32(c->r[1]+0x00000348u); // 801FD0A8
  c->r[29]=R32(c->r[1]+0x00000344u); // 801FD0AC
  c->r[0]=R32(c->r[1]+0x00000354u); // 801FD0B0
  c->lr=c->r[0]; // 801FD0B4
  c->r[1]=c->r[1]+0x00000350u; // 801FD0B8
  return; // 801FD0BC
}

// fn_801FD0C0
void f_801FD0C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD0C0
  c->r[0]=c->lr; // 801FD0C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD0C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD0CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FD0D0
  c->r[30]=c->r[3]|c->r[3]; // 801FD0D4
  c->lr=0x801FD0DCu; f_802082B4(c); // 801FD0D8
  c->r[31]=c->r[3]|c->r[3]; // 801FD0DC
  cmps(c,0,(int32_t)c->r[3],0); // 801FD0E0
  if (crb(c,2)) { goto L_801FD0EC; } // 801FD0E4
  goto L_801FD148; // 801FD0E8
L_801FD0EC:;
  c->r[3]=0u+0x00000008u; // 801FD0EC
  c->r[4]=0u+0x80470000u; // 801FD0F0
  c->r[4]=c->r[4]+0x00006FB0u; // 801FD0F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD0F8
  c->lr=0x801FD100u; f_803D3760(c); // 801FD0FC
  c->r[31]=0u+0x00000001u; // 801FD100
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FD104
  W32(c->r[3]+0x00000020u,c->r[31]); // 801FD108
  c->r[0]=0u+0x00000000u; // 801FD10C
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FD110
  W32(c->r[3]+0x00000024u,c->r[0]); // 801FD114
  c->r[3]=c->r[30]+0x000005F0u; // 801FD118
  c->r[4]=0u+0x80470000u; // 801FD11C
  c->r[4]=c->r[4]+0x00006FD0u; // 801FD120
  c->lr=0x801FD128u; f_8020D79C(c); // 801FD124
  cmps(c,0,(int32_t)c->r[3],0); // 801FD128
  if (!crb(c,2)) { goto L_801FD138; } // 801FD12C
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FD130
  W32(c->r[3]+0x00000024u,c->r[31]); // 801FD134
L_801FD138:;
  c->r[3]=c->r[30]|c->r[30]; // 801FD138
  c->r[4]=0u+0x00000001u; // 801FD13C
  c->lr=0x801FD144u; f_802082A0(c); // 801FD140
  goto L_801FD1FC; // 801FD144
L_801FD148:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FD148
  c->r[0]=R32(c->r[3]+0x00000024u); // 801FD14C
  cmps(c,0,(int32_t)c->r[0],0); // 801FD150
  if (!crb(c,2)) { goto L_801FD19C; } // 801FD154
  c->r[3]=c->r[30]+0x000005F0u; // 801FD158
  c->lr=0x801FD160u; f_80208328(c); // 801FD15C
  cmps(c,0,(int32_t)c->r[3],0); // 801FD160
  if (!crb(c,2)) { goto L_801FD1FC; } // 801FD164
  c->r[3]=c->r[30]+0x000005F0u; // 801FD168
  c->lr=0x801FD170u; f_8020D72C(c); // 801FD16C
  cmps(c,0,(int32_t)c->r[3],0); // 801FD170
  if (!crb(c,2)) { goto L_801FD19C; } // 801FD174
  c->r[3]=0u+0x00000002u; // 801FD178
  c->r[4]=0u+0x80470000u; // 801FD17C
  c->r[4]=c->r[4]+0x00006FDCu; // 801FD180
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD184
  c->lr=0x801FD18Cu; f_803D3760(c); // 801FD188
  c->r[3]=c->r[30]|c->r[30]; // 801FD18C
  c->r[4]=0u+0x0000001Fu; // 801FD190
  c->lr=0x801FD198u; f_801FB330(c); // 801FD194
  goto L_801FD1FC; // 801FD198
L_801FD19C:;
  c->r[3]=c->r[30]|c->r[30]; // 801FD19C
  c->r[4]=0u+0x00000001u; // 801FD1A0
  c->lr=0x801FD1A8u; f_802082A0(c); // 801FD1A4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801FD1A8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801FD1AC
  cmps(c,0,(int32_t)c->r[0],128); // 801FD1B0
  if (crb(c,0)) { goto L_801FD1FC; } // 801FD1B4
  if (crb(c,2)) { goto L_801FD1FC; } // 801FD1B8
  c->r[3]=c->r[30]|c->r[30]; // 801FD1BC
  c->lr=0x801FD1C4u; f_80207A34(c); // 801FD1C0
  cmps(c,0,(int32_t)c->r[3],0); // 801FD1C4
  if (crb(c,2)) { goto L_801FD1DC; } // 801FD1C8
  c->r[3]=c->r[30]|c->r[30]; // 801FD1CC
  c->r[4]=0u+0x0000001Eu; // 801FD1D0
  c->lr=0x801FD1D8u; f_801FB330(c); // 801FD1D4
  goto L_801FD1FC; // 801FD1D8
L_801FD1DC:;
  c->r[3]=0u+0x00000001u; // 801FD1DC
  c->r[4]=0u+0x80470000u; // 801FD1E0
  c->r[4]=c->r[4]+0x00007018u; // 801FD1E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD1E8
  c->lr=0x801FD1F0u; f_803D3760(c); // 801FD1EC
  c->r[3]=c->r[30]|c->r[30]; // 801FD1F0
  c->r[4]=0u+0x0000000Eu; // 801FD1F4
  c->lr=0x801FD1FCu; f_801FB330(c); // 801FD1F8
L_801FD1FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD1FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FD200
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD204
  c->lr=c->r[0]; // 801FD208
  c->r[1]=c->r[1]+0x00000010u; // 801FD20C
  return; // 801FD210
}

// fn_801FD214
void f_801FD214(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD214
  c->r[0]=c->lr; // 801FD218
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FD21C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FD220
  c->r[31]=c->r[3]|c->r[3]; // 801FD224
  c->r[0]=R32(c->r[3]+0x00000D68u); // 801FD228
  cmps(c,0,(int32_t)c->r[0],0); // 801FD22C
  if (crb(c,2)) { goto L_801FD250; } // 801FD230
  c->r[3]=0u+0x00000008u; // 801FD234
  c->r[4]=0u+0x80470000u; // 801FD238
  c->r[4]=c->r[4]+0x00007038u; // 801FD23C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD240
  c->lr=0x801FD248u; f_803D3760(c); // 801FD244
  c->r[3]=c->r[31]|c->r[31]; // 801FD248
  c->lr=0x801FD250u; f_802080C4(c); // 801FD24C
L_801FD250:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FD250
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FD254
  c->lr=c->r[0]; // 801FD258
  c->r[1]=c->r[1]+0x00000010u; // 801FD25C
  return; // 801FD260
}

// fn_801FD264
void f_801FD264(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FD264
  c->r[0]=c->lr; // 801FD268
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FD26C
  c->r[11]=c->r[1]+0x00000030u; // 801FD270
  c->lr=0x801FD278u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FD274
  c->r[31]=c->r[3]|c->r[3]; // 801FD278
  c->r[0]=R8(c->r[13]+0xFFFFBB80u); // 801FD27C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FD280
  cmps(c,0,(int32_t)c->r[0],0); // 801FD284
  if (!crb(c,2)) { goto L_801FD2A0; } // 801FD288
  c->lr=0x801FD290u; f_80361BF4(c); // 801FD28C
  W32(c->r[13]+0xFFFFBB7Cu,c->r[4]); // 801FD290
  W32(c->r[13]+0xFFFFBB78u,c->r[3]); // 801FD294
  c->r[0]=0u+0x00000001u; // 801FD298
  W8(c->r[13]+0xFFFFBB80u,c->r[0]); // 801FD29C
L_801FD2A0:;
  c->r[0]=R8(c->r[13]+0xFFFFBB90u); // 801FD2A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FD2A4
  cmps(c,0,(int32_t)c->r[0],0); // 801FD2A8
  if (!crb(c,2)) { goto L_801FD2C4; } // 801FD2AC
  c->lr=0x801FD2B4u; f_80361BF4(c); // 801FD2B0
  W32(c->r[13]+0xFFFFBB8Cu,c->r[4]); // 801FD2B4
  W32(c->r[13]+0xFFFFBB88u,c->r[3]); // 801FD2B8
  c->r[0]=0u+0x00000001u; // 801FD2BC
  W8(c->r[13]+0xFFFFBB90u,c->r[0]); // 801FD2C0
L_801FD2C4:;
  c->r[0]=R8(c->r[13]+0xFFFFBBA0u); // 801FD2C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FD2C8
  cmps(c,0,(int32_t)c->r[0],0); // 801FD2CC
  if (!crb(c,2)) { goto L_801FD2EC; } // 801FD2D0
  c->r[0]=R32(c->r[13]+0xFFFFBB88u); // 801FD2D4
  c->r[3]=R32(c->r[13]+0xFFFFBB8Cu); // 801FD2D8
  W32(c->r[13]+0xFFFFBB9Cu,c->r[3]); // 801FD2DC
  W32(c->r[13]+0xFFFFBB98u,c->r[0]); // 801FD2E0
  c->r[0]=0u+0x00000001u; // 801FD2E4
  W8(c->r[13]+0xFFFFBBA0u,c->r[0]); // 801FD2E8
L_801FD2EC:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD2EC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FD2F0
  cmps(c,0,(int32_t)c->r[0],2); // 801FD2F4
  if (crb(c,2)) { goto L_801FD338; } // 801FD2F8
  c->r[3]=0u+0x00000002u; // 801FD2FC
  c->r[4]=0u+0x80470000u; // 801FD300
  c->r[4]=c->r[4]+0x00007054u; // 801FD304
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD308
  c->lr=0x801FD310u; f_803D3760(c); // 801FD30C
  c->r[0]=0u+0x00000000u; // 801FD310
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD314
  W8(c->r[3]+0x00000030u,c->r[0]); // 801FD318
  c->r[0]=0u+0x00000001u; // 801FD31C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD320
  W8(c->r[3]+0x0000003Au,c->r[0]); // 801FD324
  c->r[3]=c->r[31]|c->r[31]; // 801FD328
  c->r[4]=0u+0x00000010u; // 801FD32C
  c->lr=0x801FD334u; f_801FB330(c); // 801FD330
  goto L_801FDE98; // 801FD334
L_801FD338:;
  c->r[3]=c->r[31]|c->r[31]; // 801FD338
  c->lr=0x801FD340u; f_802082B4(c); // 801FD33C
  cmps(c,0,(int32_t)c->r[3],99); // 801FD340
  if (crb(c,2)) { goto L_801FD384; } // 801FD344
  if (!crb(c,0)) { goto L_801FD3A8; } // 801FD348
  cmps(c,0,(int32_t)c->r[3],0); // 801FD34C
  if (crb(c,2)) { goto L_801FD358; } // 801FD350
  goto L_801FD3A8; // 801FD354
L_801FD358:;
  c->lr=0x801FD35Cu; f_80361BF4(c); // 801FD358
  c->r[5]=0u+0x80000000u; // 801FD35C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FD360
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD364
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801FD368
  c->r[0]=0u+0x00000000u; // 801FD36C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FD370
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FD374
  W32(c->r[31]+0x0000004Cu,c->r[4]); // 801FD378
  W32(c->r[31]+0x00000048u,c->r[0]); // 801FD37C
  goto L_801FD3F0; // 801FD380
L_801FD384:;
  c->r[3]=0u+0x00000001u; // 801FD384
  c->r[4]=0u+0x80470000u; // 801FD388
  c->r[4]=c->r[4]+0x00007078u; // 801FD38C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD390
  c->lr=0x801FD398u; f_803D3760(c); // 801FD394
  c->r[3]=c->r[31]|c->r[31]; // 801FD398
  c->r[4]=0u+0x0000001Eu; // 801FD39C
  c->lr=0x801FD3A4u; f_801FB330(c); // 801FD3A0
  goto L_801FD3F0; // 801FD3A4
L_801FD3A8:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD3A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FD3AC
  cmps(c,0,(int32_t)c->r[0],2); // 801FD3B0
  if (!crb(c,2)) { goto L_801FD3F0; } // 801FD3B4
  c->lr=0x801FD3BCu; f_80361BF4(c); // 801FD3B8
  c->r[0]=R32(c->r[31]+0x00000048u); // 801FD3BC
  c->r[6]=R32(c->r[31]+0x0000004Cu); // 801FD3C0
  c->r[0]=c->r[0]^0x80000000u; // 801FD3C4
  c->r[5]=c->r[3]^0x80000000u; // 801FD3C8
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FD3CC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FD3D0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FD3D4
  c->r[5]=0u-c->r[5]; // 801FD3D8
  cmps(c,0,(int32_t)c->r[5],0); // 801FD3DC
  if (crb(c,2)) { goto L_801FD3F0; } // 801FD3E0
  c->r[3]=c->r[31]|c->r[31]; // 801FD3E4
  c->r[4]=0u+0x00000063u; // 801FD3E8
  c->lr=0x801FD3F0u; f_802082BC(c); // 801FD3EC
L_801FD3F0:;
  c->r[3]=c->r[31]|c->r[31]; // 801FD3F0
  c->lr=0x801FD3F8u; f_802082B4(c); // 801FD3F4
  cmpu(c,0,c->r[3],0x0000001Fu); // 801FD3F8
  if (crb(c,1)) { goto L_801FDE78; } // 801FD3FC
  c->r[4]=0u+0x80470000u; // 801FD400
  c->r[4]=c->r[4]+0x00007354u; // 801FD404
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801FD408
  c->r[4]=R32(c->r[4]+c->r[0]); // 801FD40C
  c->ctr=c->r[4]; // 801FD410
  if (true) { switch (c->ctr) { case 0x801FD418u: goto L_801FD418; case 0x801FD500u: goto L_801FD500; case 0x801FD6DCu: goto L_801FD6DC; case 0x801FD99Cu: goto L_801FD99C; case 0x801FDA90u: goto L_801FDA90; case 0x801FDC50u: goto L_801FDC50; case 0x801FDDD8u: goto L_801FDDD8; case 0x801FDE24u: goto L_801FDE24; case 0x801FDE78u: goto L_801FDE78; default: break; } dispatch(c,c->ctr); return; } // 801FD414
L_801FD418:;
  c->r[3]=0u+0x00000008u; // 801FD418
  c->r[4]=0u+0x80470000u; // 801FD41C
  c->r[4]=c->r[4]+0x000070C0u; // 801FD420
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD424
  c->lr=0x801FD42Cu; f_803D3760(c); // 801FD428
  c->r[29]=0u+0x00000000u; // 801FD42C
  W32(c->r[13]+0xFFFFBBA4u,c->r[29]); // 801FD430
  W32(c->r[13]+0xFFFFBBA8u,c->r[29]); // 801FD434
  c->r[0]=0u+0x00000002u; // 801FD438
  W32(c->r[13]+0xFFFFBBACu,c->r[0]); // 801FD43C
  W32(c->r[31]+0x00000D18u,c->r[29]); // 801FD440
  W8(c->r[13]+0xFFFFBBA1u,c->r[29]); // 801FD444
  c->r[0]=0u+0x000000FFu; // 801FD448
  W8(c->r[13]+0xFFFFBBA2u,c->r[0]); // 801FD44C
  c->lr=0x801FD454u; f_80361BF4(c); // 801FD450
  W32(c->r[13]+0xFFFFBB8Cu,c->r[4]); // 801FD454
  W32(c->r[13]+0xFFFFBB88u,c->r[3]); // 801FD458
  W32(c->r[13]+0xFFFFBB9Cu,c->r[4]); // 801FD45C
  W32(c->r[13]+0xFFFFBB98u,c->r[3]); // 801FD460
  c->r[0]=0u+0xFFFFFFFFu; // 801FD464
  W8(c->r[13]+0xFFFFBB70u,c->r[0]); // 801FD468
  c->r[4]=0u+0x804E0000u; // 801FD46C
  c->r[3]=c->r[4]+0xFFFFA2F0u; // 801FD470
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FD474
  W32(c->r[4]+0xFFFFA2F0u,c->r[0]); // 801FD478
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801FD47C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801FD480
  W32(c->r[3]+0x00000014u,c->r[0]); // 801FD484
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FD488
  c->lr=0x801FD490u; f_80361BF4(c); // 801FD48C
  c->r[28]=0u+0x80000000u; // 801FD490
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801FD494
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD498
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801FD49C
  c->r[0]=c->r[0]+c->r[5]; // 801FD4A0
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FD4A4
  c->r[0]=addc(c,c->r[29],c->r[3],c->xer_ca); // 801FD4A8
  W32(c->r[13]+0xFFFFBB7Cu,c->r[4]); // 801FD4AC
  W32(c->r[13]+0xFFFFBB78u,c->r[0]); // 801FD4B0
  c->lr=0x801FD4B8u; f_80361C0C(c); // 801FD4B4
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801FD4B8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD4BC
  c->r[4]=0u+0x10620000u; // 801FD4C0
  c->r[4]=c->r[4]+0x00004DD3u; // 801FD4C4
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FD4C8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FD4CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 801FD4D0
  c->r[6]=c->r[0]+c->r[3]; // 801FD4D4
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FD4D8
  c->r[3]=c->r[31]+0x000006D4u; // 801FD4DC
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FD4E0
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FD4E4
  c->r[5]=0u+0x00004650u; // 801FD4E8
  c->lr=0x801FD4F0u; f_8020834C(c); // 801FD4EC
  c->r[3]=c->r[31]|c->r[31]; // 801FD4F0
  c->r[4]=0u+0x00000001u; // 801FD4F4
  c->lr=0x801FD4FCu; f_802082A0(c); // 801FD4F8
  goto L_801FDE98; // 801FD4FC
L_801FD500:;
  c->r[5]=0u+0x00000000u; // 801FD500
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD504
  W16(c->r[3]+0x00000028u,c->r[5]); // 801FD508
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD50C
  W32(c->r[3]+0x00000074u,c->r[5]); // 801FD510
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD514
  W32(c->r[3]+0x00000068u,c->r[5]); // 801FD518
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD51C
  W32(c->r[3]+0x0000006Cu,c->r[5]); // 801FD520
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD524
  W16(c->r[3]+0x00000E48u,c->r[5]); // 801FD528
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD52C
  W32(c->r[3]+0x0000003Cu,c->r[5]); // 801FD530
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD534
  W32(c->r[3]+0x00000034u,c->r[5]); // 801FD538
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD53C
  W32(c->r[3]+0x000006B4u,c->r[5]); // 801FD540
  c->r[4]=0u+0xFFFFFFFFu; // 801FD544
  W32(c->r[31]+0x00000D60u,c->r[4]); // 801FD548
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD54C
  W16(c->r[3]+0x00000038u,c->r[4]); // 801FD550
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD554
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD558
  c->r[3]=c->r[3]+c->r[0]; // 801FD55C
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FD560
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD564
  W16(c->r[3]+0x00000040u,c->r[4]); // 801FD568
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FD56C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD570
  c->r[3]=c->r[3]+c->r[0]; // 801FD574
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FD578
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD57C
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD580
  cmps(c,0,(int32_t)c->r[0],0); // 801FD584
  if (!crb(c,2)) { goto L_801FD5D4; } // 801FD588
  W16(c->r[3]+0x00000070u,c->r[5]); // 801FD58C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD590
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD594
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD598
  c->r[3]=c->r[3]+c->r[0]; // 801FD59C
  W16(c->r[3]+0x00000060u,c->r[5]); // 801FD5A0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD5A4
  c->r[4]=0u+0x00000001u; // 801FD5A8
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FD5AC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD5B0
  c->r[3]=c->r[3]+c->r[0]; // 801FD5B4
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FD5B8
  c->r[3]=0u+0x00000001u; // 801FD5BC
  c->r[4]=0u+0x80470000u; // 801FD5C0
  c->r[4]=c->r[4]+0x000070E8u; // 801FD5C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD5C8
  c->lr=0x801FD5D0u; f_803D3760(c); // 801FD5CC
  goto L_801FD624; // 801FD5D0
L_801FD5D4:;
  c->r[4]=0u+0x00000001u; // 801FD5D4
  W16(c->r[3]+0x00000070u,c->r[4]); // 801FD5D8
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD5DC
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD5E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD5E4
  c->r[3]=c->r[3]+c->r[0]; // 801FD5E8
  W16(c->r[3]+0x00000060u,c->r[5]); // 801FD5EC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD5F0
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FD5F4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD5F8
  c->r[3]=c->r[3]+c->r[0]; // 801FD5FC
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FD600
  c->r[3]=c->r[31]|c->r[31]; // 801FD604
  c->r[4]=0u+0x00000001u; // 801FD608
  c->lr=0x801FD610u; f_802082A0(c); // 801FD60C
  c->r[3]=0u+0x00000001u; // 801FD610
  c->r[4]=0u+0x80470000u; // 801FD614
  c->r[4]=c->r[4]+0x000070FCu; // 801FD618
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD61C
  c->lr=0x801FD624u; f_803D3760(c); // 801FD620
L_801FD624:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD624
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD628
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD62C
  c->r[3]=c->r[3]+c->r[0]; // 801FD630
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FD634
  W16(c->r[3]+0x00000064u,c->r[0]); // 801FD638
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD63C
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FD640
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FD644
  c->r[3]=c->r[3]+c->r[0]; // 801FD648
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FD64C
  W16(c->r[3]+0x00000064u,c->r[0]); // 801FD650
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD654
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD658
  cmps(c,0,(int32_t)c->r[0],0); // 801FD65C
  if (!crb(c,2)) { goto L_801FD6B8; } // 801FD660
  c->r[3]=0u+0x00000001u; // 801FD664
  c->r[4]=0u+0x80470000u; // 801FD668
  c->r[4]=c->r[4]+0x00007110u; // 801FD66C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD670
  c->lr=0x801FD678u; f_803D3760(c); // 801FD674
  c->lr=0x801FD67Cu; f_80361C0C(c); // 801FD678
  c->r[4]=0u+0x80000000u; // 801FD67C
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801FD680
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD684
  c->r[4]=0u+0x10620000u; // 801FD688
  c->r[4]=c->r[4]+0x00004DD3u; // 801FD68C
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FD690
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FD694
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801FD698
  c->r[0]=c->r[0]+c->r[4]; // 801FD69C
  c->r[6]=c->r[0]+c->r[3]; // 801FD6A0
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FD6A4
  c->r[3]=c->r[31]|c->r[31]; // 801FD6A8
  c->r[4]=0u+0x00000004u; // 801FD6AC
  c->lr=0x801FD6B4u; f_802082BC(c); // 801FD6B0
  goto L_801FDE98; // 801FD6B4
L_801FD6B8:;
  c->r[3]=0u+0x00000001u; // 801FD6B8
  c->r[4]=0u+0x80470000u; // 801FD6BC
  c->r[4]=c->r[4]+0x00007120u; // 801FD6C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD6C4
  c->lr=0x801FD6CCu; f_803D3760(c); // 801FD6C8
  c->r[3]=c->r[31]|c->r[31]; // 801FD6CC
  c->r[4]=0u+0x00000001u; // 801FD6D0
  c->lr=0x801FD6D8u; f_802082A0(c); // 801FD6D4
  goto L_801FDE98; // 801FD6D8
L_801FD6DC:;
  c->lr=0x801FD6E0u; f_80208B40(c); // 801FD6DC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD6E0
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FD6E4
  c->lr=0x801FD6ECu; f_803D8328(c); // 801FD6E8
  c->r[28]=c->r[3]|c->r[3]; // 801FD6EC
  c->lr=0x801FD6F4u; f_80208B4C(c); // 801FD6F0
  cmps(c,0,(int32_t)c->r[28],0); // 801FD6F4
  if (!crb(c,2)) { goto L_801FD71C; } // 801FD6F8
  c->r[3]=0u+0x00000002u; // 801FD6FC
  c->r[4]=0u+0x80470000u; // 801FD700
  c->r[4]=c->r[4]+0x00007134u; // 801FD704
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD708
  c->lr=0x801FD710u; f_803D3760(c); // 801FD70C
  c->r[3]=c->r[31]|c->r[31]; // 801FD710
  c->r[4]=0u+0x0000001Eu; // 801FD714
  c->lr=0x801FD71Cu; f_801FB330(c); // 801FD718
L_801FD71C:;
  c->lr=0x801FD720u; f_80361BF4(c); // 801FD71C
  W32(c->r[13]+0xFFFFBB9Cu,c->r[4]); // 801FD720
  W32(c->r[13]+0xFFFFBB98u,c->r[3]); // 801FD724
  c->r[3]=c->r[31]+0x000006D4u; // 801FD728
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FD72C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FD730
  c->r[5]=c->r[1]+0x0000000Cu; // 801FD734
  c->r[6]=0u+0x00000000u; // 801FD738
  c->lr=0x801FD740u; f_8020BD84(c); // 801FD73C
  c->r[27]=c->r[3]|c->r[3]; // 801FD740
  cmps(c,0,(int32_t)c->r[3],0); // 801FD744
  if (crb(c,2)) { goto L_801FD88C; } // 801FD748
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FD74C
  cmpu(c,0,c->r[5],0x00000002u); // 801FD750
  if (!crb(c,2)) { goto L_801FD828; } // 801FD754
  c->r[0]=R16(c->r[3]+0x00000000u); // 801FD758
  c->r[5]=rotl(c->r[0],0)&0x00003FFFu; // 801FD75C
  cmpu(c,0,c->r[5],0x00003F14u); // 801FD760
  if (!crb(c,2)) { goto L_801FD810; } // 801FD764
  c->r[28]=rotl(c->r[0],18)&0x00000003u; // 801FD768
  c->r[3]=0u+0x00000001u; // 801FD76C
  c->r[4]=0u+0x80470000u; // 801FD770
  c->r[4]=c->r[4]+0x00007164u; // 801FD774
  c->r[5]=c->r[28]|c->r[28]; // 801FD778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD77C
  c->lr=0x801FD784u; f_803D3760(c); // 801FD780
  cmps(c,0,(int32_t)c->r[28],0); // 801FD784
  if (!crb(c,2)) { goto L_801FD798; } // 801FD788
  c->r[0]=R8(c->r[13]+0xFFFFBBA2u); // 801FD78C
  cmpu(c,0,c->r[0],0x000000FFu); // 801FD790
  if (!crb(c,2)) { goto L_801FD79C; } // 801FD794
L_801FD798:;
  W8(c->r[13]+0xFFFFBBA2u,c->r[28]); // 801FD798
L_801FD79C:;
  c->lr=0x801FD7A0u; f_80361C0C(c); // 801FD79C
  c->r[4]=0u+0x80000000u; // 801FD7A0
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801FD7A4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD7A8
  c->r[4]=0u+0x10620000u; // 801FD7AC
  c->r[4]=c->r[4]+0x00004DD3u; // 801FD7B0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FD7B4
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FD7B8
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801FD7BC
  c->r[0]=c->r[0]+c->r[4]; // 801FD7C0
  c->r[6]=c->r[0]+c->r[3]; // 801FD7C4
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FD7C8
  c->r[0]=R8(c->r[13]+0xFFFFBB70u); // 801FD7CC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FD7D0
  cmps(c,0,(int32_t)c->r[4],0); // 801FD7D4
  if (crb(c,0)) { goto L_801FD8C8; } // 801FD7D8
  cmps(c,0,(int32_t)c->r[4],3); // 801FD7DC
  if (!crb(c,0)) { goto L_801FD8C8; } // 801FD7E0
  c->r[3]=R32(c->r[13]+0xFFFFBB8Cu); // 801FD7E4
  c->r[0]=R32(c->r[13]+0xFFFFBB9Cu); // 801FD7E8
  c->r[6]=c->r[0]-c->r[3]; // 801FD7EC
  c->r[5]=sraw(c,c->r[6],31); // 801FD7F0
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801FD7F4
  c->r[3]=0u+0x804E0000u; // 801FD7F8
  c->r[0]=c->r[3]+0xFFFFA2F0u; // 801FD7FC
  c->r[3]=c->r[0]+c->r[4]; // 801FD800
  W32(c->r[3]+0x00000004u,c->r[6]); // 801FD804
  W32(c->r[3]+0x00000000u,c->r[5]); // 801FD808
  goto L_801FD8C8; // 801FD80C
L_801FD810:;
  c->r[3]=0u+0x00000001u; // 801FD810
  c->r[4]=0u+0x80470000u; // 801FD814
  c->r[4]=c->r[4]+0x00007188u; // 801FD818
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD81C
  c->lr=0x801FD824u; f_803D3760(c); // 801FD820
  goto L_801FD8C8; // 801FD824
L_801FD828:;
  cmpu(c,0,c->r[5],0x00000008u); // 801FD828
  if (!crb(c,2)) { goto L_801FD874; } // 801FD82C
  c->r[0]=R32(c->r[13]+0xFFFFBBA4u); // 801FD830
  cmps(c,0,(int32_t)c->r[0],0); // 801FD834
  if (crb(c,2)) { goto L_801FD874; } // 801FD838
  c->r[3]=0u+0x00000001u; // 801FD83C
  c->r[4]=0u+0x80470000u; // 801FD840
  c->r[4]=c->r[4]+0x000071A8u; // 801FD844
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD848
  c->lr=0x801FD850u; f_803D3760(c); // 801FD84C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FD850
  W32(c->r[31]+0x00000D18u,c->r[5]); // 801FD854
  c->r[3]=R32(c->r[31]+0x00000D20u); // 801FD858
  c->r[4]=c->r[27]|c->r[27]; // 801FD85C
  c->lr=0x801FD864u; f_802E53B8(c); // 801FD860
  c->r[3]=c->r[31]|c->r[31]; // 801FD864
  c->r[4]=0u+0x0000001Fu; // 801FD868
  c->lr=0x801FD870u; f_802082BC(c); // 801FD86C
  goto L_801FDE98; // 801FD870
L_801FD874:;
  c->r[3]=0u+0x00000001u; // 801FD874
  c->r[4]=0u+0x80470000u; // 801FD878
  c->r[4]=c->r[4]+0x000071D0u; // 801FD87C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD880
  c->lr=0x801FD888u; f_803D3760(c); // 801FD884
  goto L_801FD8C8; // 801FD888
L_801FD88C:;
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FD88C
  cmps(c,0,(int32_t)c->r[5],0); // 801FD890
  if (!crb(c,1)) { goto L_801FD8C8; } // 801FD894
  c->r[3]=0u+0x00000001u; // 801FD898
  c->r[4]=0u+0x80470000u; // 801FD89C
  c->r[4]=c->r[4]+0x00006F18u; // 801FD8A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD8A4
  c->lr=0x801FD8ACu; f_803D3760(c); // 801FD8A8
  c->r[3]=0u+0x00000001u; // 801FD8AC
  c->r[4]=0u+0x80470000u; // 801FD8B0
  c->r[4]=c->r[4]+0x00007164u; // 801FD8B4
  c->r[0]=R16(c->r[27]+0x00000000u); // 801FD8B8
  c->r[5]=rotl(c->r[0],18)&0x00000003u; // 801FD8BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD8C0
  c->lr=0x801FD8C8u; f_803D3760(c); // 801FD8C4
L_801FD8C8:;
  c->r[0]=R8(c->r[13]+0xFFFFBBA2u); // 801FD8C8
  cmpu(c,0,c->r[0],0x000000FFu); // 801FD8CC
  if (!crb(c,2)) { goto L_801FD98C; } // 801FD8D0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FD8D4
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FD8D8
  cmps(c,0,(int32_t)c->r[0],0); // 801FD8DC
  if (!crb(c,2)) { goto L_801FDE98; } // 801FD8E0
  c->lr=0x801FD8E8u; f_80361BF4(c); // 801FD8E4
  c->r[0]=R32(c->r[13]+0xFFFFBB78u); // 801FD8E8
  c->r[6]=R32(c->r[13]+0xFFFFBB7Cu); // 801FD8EC
  c->r[0]=c->r[0]^0x80000000u; // 801FD8F0
  c->r[5]=c->r[3]^0x80000000u; // 801FD8F4
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FD8F8
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FD8FC
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FD900
  c->r[5]=0u-c->r[5]; // 801FD904
  cmps(c,0,(int32_t)c->r[5],0); // 801FD908
  if (crb(c,2)) { goto L_801FDE98; } // 801FD90C
  c->r[3]=0u+0x00000001u; // 801FD910
  c->r[4]=0u+0x80470000u; // 801FD914
  c->r[4]=c->r[4]+0x000071FCu; // 801FD918
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FD91C
  c->lr=0x801FD924u; f_803D3760(c); // 801FD920
  c->lr=0x801FD928u; f_80361BF4(c); // 801FD924
  c->r[28]=0u+0x80000000u; // 801FD928
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801FD92C
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD930
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801FD934
  c->r[5]=c->r[0]-c->r[5]; // 801FD938
  c->r[0]=0u+0x00000000u; // 801FD93C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FD940
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FD944
  W32(c->r[13]+0xFFFFBB7Cu,c->r[4]); // 801FD948
  W32(c->r[13]+0xFFFFBB78u,c->r[0]); // 801FD94C
  c->lr=0x801FD954u; f_80361C0C(c); // 801FD950
  c->r[0]=R32(c->r[28]+0x000000F8u); // 801FD954
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FD958
  c->r[4]=0u+0x10620000u; // 801FD95C
  c->r[4]=c->r[4]+0x00004DD3u; // 801FD960
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FD964
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FD968
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801FD96C
  c->r[0]=c->r[0]+c->r[4]; // 801FD970
  c->r[6]=c->r[0]+c->r[3]; // 801FD974
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FD978
  c->r[3]=c->r[31]|c->r[31]; // 801FD97C
  c->r[4]=0u+0x00000004u; // 801FD980
  c->lr=0x801FD988u; f_802082BC(c); // 801FD984
  goto L_801FDE98; // 801FD988
L_801FD98C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FD98C
  c->r[4]=0u+0x00000001u; // 801FD990
  c->lr=0x801FD998u; f_802082A0(c); // 801FD994
  goto L_801FDE98; // 801FD998
L_801FD99C:;
  c->r[0]=R8(c->r[13]+0xFFFFBBA2u); // 801FD99C
  cmps(c,0,(int32_t)c->r[0],2); // 801FD9A0
  if (crb(c,2)) { goto L_801FD9E0; } // 801FD9A4
  if (!crb(c,0)) { goto L_801FD9BC; } // 801FD9A8
  cmps(c,0,(int32_t)c->r[0],0); // 801FD9AC
  if (crb(c,2)) { goto L_801FD9C8; } // 801FD9B0
  if (!crb(c,0)) { goto L_801FD9D4; } // 801FD9B4
  goto L_801FDA54; // 801FD9B8
L_801FD9BC:;
  cmps(c,0,(int32_t)c->r[0],4); // 801FD9BC
  if (!crb(c,0)) { goto L_801FDA54; } // 801FD9C0
  goto L_801FD9EC; // 801FD9C4
L_801FD9C8:;
  c->r[0]=0u+0x00000001u; // 801FD9C8
  W8(c->r[13]+0xFFFFBBA1u,c->r[0]); // 801FD9CC
  goto L_801FDA54; // 801FD9D0
L_801FD9D4:;
  c->r[0]=0u+0x00000002u; // 801FD9D4
  W8(c->r[13]+0xFFFFBBA1u,c->r[0]); // 801FD9D8
  goto L_801FDA54; // 801FD9DC
L_801FD9E0:;
  c->r[0]=0u+0x00000003u; // 801FD9E0
  W8(c->r[13]+0xFFFFBBA1u,c->r[0]); // 801FD9E4
  goto L_801FDA54; // 801FD9E8
L_801FD9EC:;
  c->r[0]=R8(c->r[13]+0xFFFFBBA1u); // 801FD9EC
  cmpu(c,0,c->r[0],0x00000003u); // 801FD9F0
  if (!crb(c,2)) { goto L_801FDA4C; } // 801FD9F4
  c->r[0]=R32(c->r[13]+0xFFFFBBA8u); // 801FD9F8
  cmps(c,0,(int32_t)c->r[0],0); // 801FD9FC
  if (crb(c,2)) { goto L_801FDA4C; } // 801FDA00
  c->r[0]=R32(c->r[13]+0xFFFFBBA4u); // 801FDA04
  cmps(c,0,(int32_t)c->r[0],0); // 801FDA08
  if (crb(c,2)) { goto L_801FDA20; } // 801FDA0C
  c->r[3]=c->r[31]|c->r[31]; // 801FDA10
  c->r[4]=0u+0x0000001Eu; // 801FDA14
  c->lr=0x801FDA1Cu; f_802082BC(c); // 801FDA18
  goto L_801FDE98; // 801FDA1C
L_801FDA20:;
  c->r[3]=0u+0x00000001u; // 801FDA20
  c->r[4]=0u+0x80470000u; // 801FDA24
  c->r[4]=c->r[4]+0x00007210u; // 801FDA28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDA2C
  c->lr=0x801FDA34u; f_803D3760(c); // 801FDA30
  c->r[3]=c->r[31]|c->r[31]; // 801FDA34
  c->r[4]=0u+0x0000001Du; // 801FDA38
  c->lr=0x801FDA40u; f_802082BC(c); // 801FDA3C
  c->r[0]=0u+0x00000001u; // 801FDA40
  W32(c->r[13]+0xFFFFBBA4u,c->r[0]); // 801FDA44
  goto L_801FDE98; // 801FDA48
L_801FDA4C:;
  c->r[0]=0u+0x00000003u; // 801FDA4C
  W8(c->r[13]+0xFFFFBBA1u,c->r[0]); // 801FDA50
L_801FDA54:;
  c->lr=0x801FDA58u; f_80361C0C(c); // 801FDA54
  c->r[0]=R32(c->r[13]+0xFFFFBB74u); // 801FDA58
  cmpu(c,0,c->r[3],c->r[0]); // 801FDA5C
  if (!crb(c,0)) { goto L_801FDA80; } // 801FDA60
  c->r[0]=R32(c->r[13]+0xFFFFBBA4u); // 801FDA64
  cmps(c,0,(int32_t)c->r[0],0); // 801FDA68
  if (!crb(c,2)) { goto L_801FDE98; } // 801FDA6C
  c->r[3]=c->r[31]|c->r[31]; // 801FDA70
  c->r[4]=0u+0x00000002u; // 801FDA74
  c->lr=0x801FDA7Cu; f_802082BC(c); // 801FDA78
  goto L_801FDE98; // 801FDA7C
L_801FDA80:;
  c->r[3]=c->r[31]|c->r[31]; // 801FDA80
  c->r[4]=0u+0x00000001u; // 801FDA84
  c->lr=0x801FDA8Cu; f_802082A0(c); // 801FDA88
  goto L_801FDE98; // 801FDA8C
L_801FDA90:;
  c->r[3]=0u+0x00000001u; // 801FDA90
  c->r[4]=0u+0x80470000u; // 801FDA94
  c->r[4]=c->r[4]+0x0000722Cu; // 801FDA98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDA9C
  c->lr=0x801FDAA4u; f_803D3760(c); // 801FDAA0
  c->r[3]=c->r[31]+0x000006D4u; // 801FDAA4
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FDAA8
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FDAAC
  c->lr=0x801FDAB4u; f_8020BF40(c); // 801FDAB0
  cmps(c,0,(int32_t)c->r[3],0); // 801FDAB4
  if (crb(c,2)) { goto L_801FDC00; } // 801FDAB8
  c->r[3]=R8(c->r[13]+0xFFFFBBA1u); // 801FDABC
  c->r[0]=R16(c->r[1]+0x00000008u); // 801FDAC0
  c->r[0]=(rotl(c->r[3],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 801FDAC4
  c->r[3]=0u+0x00003F14u; // 801FDAC8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801FDACC
  c->r[0]=(rotl(c->r[3],0)&0x00003FFFu)|(c->r[0]&~0x00003FFFu); // 801FDAD0
  W16(c->r[1]+0x00000008u,c->r[0]); // 801FDAD4
  c->r[3]=c->r[31]+0x000006D4u; // 801FDAD8
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FDADC
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FDAE0
  c->r[5]=0u+0x00004650u; // 801FDAE4
  c->lr=0x801FDAECu; f_8020834C(c); // 801FDAE8
  c->r[3]=c->r[31]+0x000006D4u; // 801FDAEC
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FDAF0
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FDAF4
  c->r[5]=c->r[1]+0x00000008u; // 801FDAF8
  c->r[6]=0u+0x00000002u; // 801FDAFC
  c->r[7]=0u+0x00000000u; // 801FDB00
  c->lr=0x801FDB08u; f_8020BFE0(c); // 801FDB04
  cmps(c,0,(int32_t)c->r[3],0); // 801FDB08
  if (crb(c,2)) { goto L_801FDC40; } // 801FDB0C
  c->r[3]=0u+0x00000001u; // 801FDB10
  c->r[4]=0u+0x80470000u; // 801FDB14
  c->r[4]=c->r[4]+0x00007248u; // 801FDB18
  c->r[5]=R8(c->r[13]+0xFFFFBBA1u); // 801FDB1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDB20
  c->lr=0x801FDB28u; f_803D3760(c); // 801FDB24
  c->r[0]=R32(c->r[13]+0xFFFFBBA8u); // 801FDB28
  cmps(c,0,(int32_t)c->r[0],0); // 801FDB2C
  if (!crb(c,2)) { goto L_801FDB5C; } // 801FDB30
  c->r[0]=R8(c->r[13]+0xFFFFBBA1u); // 801FDB34
  cmpu(c,0,c->r[0],0x00000003u); // 801FDB38
  if (!crb(c,2)) { goto L_801FDB5C; } // 801FDB3C
  c->r[3]=R32(c->r[13]+0xFFFFBBACu); // 801FDB40
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801FDB44
  W32(c->r[13]+0xFFFFBBACu,c->r[0]); // 801FDB48
  cmps(c,0,(int32_t)c->r[0],1); // 801FDB4C
  if (!crb(c,0)) { goto L_801FDB5C; } // 801FDB50
  c->r[0]=0u+0x00000001u; // 801FDB54
  W32(c->r[13]+0xFFFFBBA8u,c->r[0]); // 801FDB58
L_801FDB5C:;
  c->lr=0x801FDB60u; f_80361C0C(c); // 801FDB5C
  c->r[4]=0u+0x80000000u; // 801FDB60
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801FDB64
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDB68
  c->r[4]=0u+0x10620000u; // 801FDB6C
  c->r[4]=c->r[4]+0x00004DD3u; // 801FDB70
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FDB74
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FDB78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 801FDB7C
  c->r[6]=c->r[0]+c->r[3]; // 801FDB80
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FDB84
  c->lr=0x801FDB8Cu; f_80361BF4(c); // 801FDB88
  W32(c->r[13]+0xFFFFBB8Cu,c->r[4]); // 801FDB8C
  W32(c->r[13]+0xFFFFBB88u,c->r[3]); // 801FDB90
  c->r[6]=R8(c->r[13]+0xFFFFBB70u); // 801FDB94
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801FDB98
  cmps(c,0,(int32_t)c->r[0],0); // 801FDB9C
  if (!crb(c,0)) { goto L_801FDBB0; } // 801FDBA0
  c->r[0]=c->r[6]+0x00000001u; // 801FDBA4
  W8(c->r[13]+0xFFFFBB70u,c->r[0]); // 801FDBA8
  goto L_801FDC40; // 801FDBAC
L_801FDBB0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801FDBB0
  if (!crb(c,0)) { goto L_801FDC40; } // 801FDBB4
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801FDBB8
  c->r[3]=0u+0x804E0000u; // 801FDBBC
  c->r[0]=c->r[3]+0xFFFFA2F0u; // 801FDBC0
  c->r[3]=c->r[0]+c->r[4]; // 801FDBC4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FDBC8
  c->r[5]=R32(c->r[3]+0x00000004u); // 801FDBCC
  c->r[3]=0u+0x00000000u; // 801FDBD0
  c->r[0]=c->r[0]^0x80000000u; // 801FDBD4
  c->r[4]=c->r[3]^0x80000000u; // 801FDBD8
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 801FDBDC
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801FDBE0
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FDBE4
  c->r[4]=0u-c->r[4]; // 801FDBE8
  cmps(c,0,(int32_t)c->r[4],0); // 801FDBEC
  if (!crb(c,2)) { goto L_801FDC40; } // 801FDBF0
  c->r[0]=c->r[6]+0x00000001u; // 801FDBF4
  W8(c->r[13]+0xFFFFBB70u,c->r[0]); // 801FDBF8
  goto L_801FDC40; // 801FDBFC
L_801FDC00:;
  c->r[3]=0u+0x00000002u; // 801FDC00
  c->r[4]=0u+0x80470000u; // 801FDC04
  c->r[4]=c->r[4]+0x00007260u; // 801FDC08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDC0C
  c->lr=0x801FDC14u; f_803D3760(c); // 801FDC10
  c->lr=0x801FDC18u; f_80208B40(c); // 801FDC14
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FDC18
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FDC1C
  c->lr=0x801FDC24u; f_803D8328(c); // 801FDC20
  c->r[28]=c->r[3]|c->r[3]; // 801FDC24
  c->lr=0x801FDC2Cu; f_80208B4C(c); // 801FDC28
  cmps(c,0,(int32_t)c->r[28],0); // 801FDC2C
  if (!crb(c,2)) { goto L_801FDC40; } // 801FDC30
  c->r[3]=c->r[31]|c->r[31]; // 801FDC34
  c->r[4]=0u+0x0000001Eu; // 801FDC38
  c->lr=0x801FDC40u; f_801FB330(c); // 801FDC3C
L_801FDC40:;
  c->r[3]=c->r[31]|c->r[31]; // 801FDC40
  c->r[4]=0u+0x00000002u; // 801FDC44
  c->lr=0x801FDC4Cu; f_802082BC(c); // 801FDC48
  goto L_801FDE98; // 801FDC4C
L_801FDC50:;
  c->r[3]=0u+0x00000001u; // 801FDC50
  c->r[4]=0u+0x80470000u; // 801FDC54
  c->r[4]=c->r[4]+0x00007294u; // 801FDC58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDC5C
  c->lr=0x801FDC64u; f_803D3760(c); // 801FDC60
  c->r[6]=0u+0x00000000u; // 801FDC64
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FDC68
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 801FDC6C
  c->r[26]=0u+0x00000000u; // 801FDC70
  c->r[3]=0u+0x804E0000u; // 801FDC74
  c->r[27]=c->r[3]+0xFFFFA2F0u; // 801FDC78
  c->r[28]=0u+0x80470000u; // 801FDC7C
  c->r[30]=c->r[6]|c->r[6]; // 801FDC80
  c->r[29]=c->r[6]^0x80000000u; // 801FDC84
L_801FDC88:;
  c->r[3]=0u+0x00000001u; // 801FDC88
  c->r[4]=c->r[28]+0x000072C0u; // 801FDC8C
  c->r[5]=c->r[26]|c->r[26]; // 801FDC90
  c->r[6]=R32(c->r[27]+0x00000004u); // 801FDC94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDC98
  c->lr=0x801FDCA0u; f_803D3760(c); // 801FDC9C
  c->r[0]=R32(c->r[27]+0x00000000u); // 801FDCA0
  c->r[4]=R32(c->r[27]+0x00000004u); // 801FDCA4
  c->r[3]=c->r[0]^0x80000000u; // 801FDCA8
  c->r[0]=addc(c,~c->r[4],c->r[30],1); // 801FDCAC
  c->r[3]=addc(c,~c->r[3],c->r[29],c->xer_ca); // 801FDCB0
  c->r[3]=addc(c,~c->r[29],c->r[29],c->xer_ca); // 801FDCB4
  c->r[3]=0u-c->r[3]; // 801FDCB8
  cmps(c,0,(int32_t)c->r[3],0); // 801FDCBC
  if (crb(c,2)) { goto L_801FDCDC; } // 801FDCC0
  c->r[0]=R32(c->r[13]+0xFFFFBB74u); // 801FDCC4
  c->r[6]=c->r[0]+c->r[4]; // 801FDCC8
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FDCCC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FDCD0
  c->r[0]=c->r[3]+0x00000001u; // 801FDCD4
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801FDCD8
L_801FDCDC:;
  c->r[27]=c->r[27]+0x00000008u; // 801FDCDC
  c->r[26]=c->r[26]+0x00000001u; // 801FDCE0
  cmps(c,0,(int32_t)c->r[26],3); // 801FDCE4
  if (crb(c,0)) { IRQCHK(c); goto L_801FDC88; } // 801FDCE8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FDCEC
  cmps(c,0,(int32_t)c->r[0],0); // 801FDCF0
  if (!crb(c,1)) { goto L_801FDD08; } // 801FDCF4
  c->r[3]=R32(c->r[13]+0xFFFFBB74u); // 801FDCF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FDCFC
  c->r[6]=divwu(c->r[3],c->r[0]); // 801FDD00
  goto L_801FDD2C; // 801FDD04
L_801FDD08:;
  c->r[3]=0u+0x80000000u; // 801FDD08
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801FDD0C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDD10
  c->r[3]=0u+0x10620000u; // 801FDD14
  c->r[3]=c->r[3]+0x00004DD3u; // 801FDD18
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801FDD1C
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FDD20
  c->r[0]=rotl(c->r[3],6)&0xFFFFFFC0u; // 801FDD24
  c->r[6]=c->r[0]+c->r[3]; // 801FDD28
L_801FDD2C:;
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FDD2C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FDD30
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FDD34
  cmps(c,0,(int32_t)c->r[0],0); // 801FDD38
  if (crb(c,2)) { goto L_801FDD4C; } // 801FDD3C
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801FDD40
  c->r[6]=c->r[0]-c->r[6]; // 801FDD44
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FDD48
L_801FDD4C:;
  c->r[3]=0u+0x00000001u; // 801FDD4C
  c->r[4]=0u+0x80470000u; // 801FDD50
  c->r[4]=c->r[4]+0x000072D8u; // 801FDD54
  c->r[29]=0u+0x80000000u; // 801FDD58
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801FDD5C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDD60
  c->r[30]=0u+0x10620000u; // 801FDD64
  c->r[5]=c->r[30]+0x00004DD3u; // 801FDD68
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FDD6C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FDD70
  c->r[5]=divwu(c->r[6],c->r[0]); // 801FDD74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDD78
  c->lr=0x801FDD80u; f_803D3760(c); // 801FDD7C
  c->lr=0x801FDD84u; f_80361C0C(c); // 801FDD80
  c->r[0]=R32(c->r[13]+0xFFFFBB74u); // 801FDD84
  c->r[6]=c->r[0]+c->r[3]; // 801FDD88
  W32(c->r[13]+0xFFFFBB74u,c->r[6]); // 801FDD8C
  c->r[3]=0u+0x00000001u; // 801FDD90
  c->r[4]=0u+0x80470000u; // 801FDD94
  c->r[4]=c->r[4]+0x000072ECu; // 801FDD98
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801FDD9C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDDA0
  c->r[5]=c->r[30]+0x00004DD3u; // 801FDDA4
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FDDA8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FDDAC
  c->r[5]=divwu(c->r[6],c->r[0]); // 801FDDB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDDB4
  c->lr=0x801FDDBCu; f_803D3760(c); // 801FDDB8
  c->r[0]=0u+0x00000000u; // 801FDDBC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FDDC0
  W32(c->r[3]+0x00000EF4u,c->r[0]); // 801FDDC4
  c->r[3]=c->r[31]|c->r[31]; // 801FDDC8
  c->r[4]=0u+0x00000001u; // 801FDDCC
  c->lr=0x801FDDD4u; f_802082A0(c); // 801FDDD0
  goto L_801FDE98; // 801FDDD4
L_801FDDD8:;
  c->lr=0x801FDDDCu; f_80361C0C(c); // 801FDDD8
  c->r[0]=0u+0x00000000u; // 801FDDDC
  c->r[6]=R32(c->r[13]+0xFFFFBB74u); // 801FDDE0
  c->r[5]=0u+0x00000000u; // 801FDDE4
  c->r[0]=c->r[0]^0x80000000u; // 801FDDE8
  c->r[4]=c->r[5]^0x80000000u; // 801FDDEC
  c->r[3]=addc(c,~c->r[6],c->r[3],1); // 801FDDF0
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801FDDF4
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FDDF8
  c->r[4]=0u-c->r[4]; // 801FDDFC
  cmps(c,0,(int32_t)c->r[4],0); // 801FDE00
  if (crb(c,2)) { goto L_801FDE18; } // 801FDE04
  c->r[3]=c->r[31]|c->r[31]; // 801FDE08
  c->r[4]=0u+0x00000002u; // 801FDE0C
  c->lr=0x801FDE14u; f_802082BC(c); // 801FDE10
  goto L_801FDE98; // 801FDE14
L_801FDE18:;
  W8(c->r[13]+0xFFFFBBA1u,c->r[5]); // 801FDE18
  c->r[0]=0u+0x000000FFu; // 801FDE1C
  W8(c->r[13]+0xFFFFBBA2u,c->r[0]); // 801FDE20
L_801FDE24:;
  c->r[3]=c->r[31]|c->r[31]; // 801FDE24
  c->r[4]=0u+0x00000010u; // 801FDE28
  c->lr=0x801FDE30u; f_801FB330(c); // 801FDE2C
  c->lr=0x801FDE34u; f_80361C0C(c); // 801FDE30
  W32(c->r[31]+0x00000D34u,c->r[3]); // 801FDE34
  c->r[3]=R32(c->r[31]+0x00000D38u); // 801FDE38
  c->lr=0x801FDE40u; f_801EF3D4(c); // 801FDE3C
  cmps(c,0,(int32_t)c->r[3],0); // 801FDE40
  if (crb(c,2)) { goto L_801FDE4C; } // 801FDE44
  c->lr=0x801FDE4Cu; f_801EE630(c); // 801FDE48
L_801FDE4C:;
  c->r[3]=0u+0x00000001u; // 801FDE4C
  c->r[4]=0u+0x80470000u; // 801FDE50
  c->r[4]=c->r[4]+0x00007300u; // 801FDE54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDE58
  c->lr=0x801FDE60u; f_803D3760(c); // 801FDE5C
  c->lr=0x801FDE64u; f_80361BF4(c); // 801FDE60
  W32(c->r[31]+0x0000004Cu,c->r[4]); // 801FDE64
  W32(c->r[31]+0x00000048u,c->r[3]); // 801FDE68
  c->r[0]=0u+0x00000001u; // 801FDE6C
  W32(c->r[31]+0x00000D58u,c->r[0]); // 801FDE70
  goto L_801FDE98; // 801FDE74
L_801FDE78:;
  c->r[3]=c->r[31]|c->r[31]; // 801FDE78
  c->lr=0x801FDE80u; f_802082B4(c); // 801FDE7C
  c->r[5]=c->r[3]|c->r[3]; // 801FDE80
  c->r[3]=0u+0x00000001u; // 801FDE84
  c->r[4]=0u+0x80470000u; // 801FDE88
  c->r[4]=c->r[4]+0x00007324u; // 801FDE8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDE90
  c->lr=0x801FDE98u; f_803D3760(c); // 801FDE94
L_801FDE98:;
  c->r[11]=c->r[1]+0x00000030u; // 801FDE98
  c->lr=0x801FDEA0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FDE9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FDEA0
  c->lr=c->r[0]; // 801FDEA4
  c->r[1]=c->r[1]+0x00000030u; // 801FDEA8
  return; // 801FDEAC
}

// fn_801FDEB0
void f_801FDEB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FDEB0
  c->r[0]=c->lr; // 801FDEB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FDEB8
  c->r[11]=c->r[1]+0x00000030u; // 801FDEBC
  c->lr=0x801FDEC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FDEC0
  c->r[27]=c->r[3]|c->r[3]; // 801FDEC4
  c->r[29]=0u+0x00000000u; // 801FDEC8
  c->r[3]=R32(c->r[3]+0x00000D38u); // 801FDECC
  c->lr=0x801FDED4u; f_801EF3D4(c); // 801FDED0
  c->r[28]=c->r[3]|c->r[3]; // 801FDED4
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FDED8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FDEDC
  cmps(c,0,(int32_t)c->r[0],2); // 801FDEE0
  if (!crb(c,2)) { goto L_801FECC4; } // 801FDEE4
  c->r[3]=c->r[27]|c->r[27]; // 801FDEE8
  c->lr=0x801FDEF0u; f_80207A34(c); // 801FDEEC
  cmps(c,0,(int32_t)c->r[3],0); // 801FDEF0
  if (crb(c,2)) { goto L_801FDF1C; } // 801FDEF4
  c->r[3]=0u+0x00000002u; // 801FDEF8
  c->r[4]=0u+0x80470000u; // 801FDEFC
  c->r[4]=c->r[4]+0x000073D4u; // 801FDF00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDF04
  c->lr=0x801FDF0Cu; f_803D3760(c); // 801FDF08
  c->r[3]=c->r[27]|c->r[27]; // 801FDF0C
  c->r[4]=0u+0x0000001Eu; // 801FDF10
  c->lr=0x801FDF18u; f_801FB330(c); // 801FDF14
  goto L_801FECC4; // 801FDF18
L_801FDF1C:;
  c->r[3]=c->r[27]|c->r[27]; // 801FDF1C
  c->lr=0x801FDF24u; f_802082B4(c); // 801FDF20
  cmps(c,0,(int32_t)c->r[3],99); // 801FDF24
  if (crb(c,2)) { goto L_801FDFDC; } // 801FDF28
  if (!crb(c,0)) { goto L_801FE000; } // 801FDF2C
  cmps(c,0,(int32_t)c->r[3],0); // 801FDF30
  if (crb(c,2)) { goto L_801FDF3C; } // 801FDF34
  goto L_801FE000; // 801FDF38
L_801FDF3C:;
  c->r[0]=R32(c->r[27]+0x00000D58u); // 801FDF3C
  cmps(c,0,(int32_t)c->r[0],0); // 801FDF40
  if (crb(c,2)) { goto L_801FE048; } // 801FDF44
  c->lr=0x801FDF4Cu; f_80361BF4(c); // 801FDF48
  c->r[30]=0u+0x80000000u; // 801FDF4C
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801FDF50
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDF54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801FDF58
  c->r[31]=0u+0x00000000u; // 801FDF5C
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FDF60
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 801FDF64
  W32(c->r[27]+0x0000004Cu,c->r[4]); // 801FDF68
  W32(c->r[27]+0x00000048u,c->r[0]); // 801FDF6C
  c->lr=0x801FDF74u; f_80361BF4(c); // 801FDF70
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801FDF74
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDF78
  c->r[5]=0u+0x10620000u; // 801FDF7C
  c->r[5]=c->r[5]+0x00004DD3u; // 801FDF80
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FDF84
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FDF88
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801FDF8C
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FDF90
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 801FDF94
  W32(c->r[13]+0xFFFFBBC4u,c->r[4]); // 801FDF98
  W32(c->r[13]+0xFFFFBBC0u,c->r[0]); // 801FDF9C
  c->lr=0x801FDFA4u; f_80361BF4(c); // 801FDFA0
  c->r[0]=R32(c->r[30]+0x000000F8u); // 801FDFA4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FDFA8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)30); // 801FDFAC
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FDFB0
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 801FDFB4
  W32(c->r[13]+0xFFFFBBCCu,c->r[4]); // 801FDFB8
  W32(c->r[13]+0xFFFFBBC8u,c->r[0]); // 801FDFBC
  W32(c->r[13]+0xFFFFBBB8u,c->r[31]); // 801FDFC0
  W32(c->r[27]+0x00000D58u,c->r[31]); // 801FDFC4
  c->r[0]=0u+0x00000003u; // 801FDFC8
  W32(c->r[13]+0xFFFFBBD0u,c->r[0]); // 801FDFCC
  W32(c->r[13]+0xFFFFBBD4u,c->r[31]); // 801FDFD0
  W16(c->r[13]+0xFFFFBBD8u,c->r[31]); // 801FDFD4
  goto L_801FE048; // 801FDFD8
L_801FDFDC:;
  c->r[3]=0u+0x00000001u; // 801FDFDC
  c->r[4]=0u+0x80470000u; // 801FDFE0
  c->r[4]=c->r[4]+0x00007078u; // 801FDFE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FDFE8
  c->lr=0x801FDFF0u; f_803D3760(c); // 801FDFEC
  c->r[3]=c->r[27]|c->r[27]; // 801FDFF0
  c->r[4]=0u+0x0000001Eu; // 801FDFF4
  c->lr=0x801FDFFCu; f_801FB330(c); // 801FDFF8
  goto L_801FE048; // 801FDFFC
L_801FE000:;
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE000
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FE004
  cmps(c,0,(int32_t)c->r[0],2); // 801FE008
  if (!crb(c,2)) { goto L_801FE048; } // 801FE00C
  c->lr=0x801FE014u; f_80361BF4(c); // 801FE010
  c->r[0]=R32(c->r[27]+0x00000048u); // 801FE014
  c->r[6]=R32(c->r[27]+0x0000004Cu); // 801FE018
  c->r[0]=c->r[0]^0x80000000u; // 801FE01C
  c->r[5]=c->r[3]^0x80000000u; // 801FE020
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FE024
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FE028
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FE02C
  c->r[5]=0u-c->r[5]; // 801FE030
  cmps(c,0,(int32_t)c->r[5],0); // 801FE034
  if (crb(c,2)) { goto L_801FE048; } // 801FE038
  c->r[3]=c->r[27]|c->r[27]; // 801FE03C
  c->r[4]=0u+0x00000063u; // 801FE040
  c->lr=0x801FE048u; f_802082BC(c); // 801FE044
L_801FE048:;
  c->r[3]=c->r[27]|c->r[27]; // 801FE048
  c->lr=0x801FE050u; f_802082B4(c); // 801FE04C
  cmps(c,0,(int32_t)c->r[3],4); // 801FE050
  if (crb(c,2)) { goto L_801FEAA0; } // 801FE054
  if (!crb(c,0)) { goto L_801FE080; } // 801FE058
  cmps(c,0,(int32_t)c->r[3],1); // 801FE05C
  if (crb(c,2)) { goto L_801FE510; } // 801FE060
  if (!crb(c,0)) { goto L_801FE074; } // 801FE064
  cmps(c,0,(int32_t)c->r[3],0); // 801FE068
  if (!crb(c,0)) { goto L_801FE098; } // 801FE06C
  goto L_801FECC4; // 801FE070
L_801FE074:;
  cmps(c,0,(int32_t)c->r[3],3); // 801FE074
  if (!crb(c,0)) { goto L_801FE968; } // 801FE078
  goto L_801FE8FC; // 801FE07C
L_801FE080:;
  cmps(c,0,(int32_t)c->r[3],40); // 801FE080
  if (crb(c,2)) { goto L_801FEC40; } // 801FE084
  if (!crb(c,0)) { goto L_801FECC4; } // 801FE088
  cmps(c,0,(int32_t)c->r[3],39); // 801FE08C
  if (!crb(c,0)) { goto L_801FEC14; } // 801FE090
  goto L_801FECC4; // 801FE094
L_801FE098:;
  c->r[0]=R32(c->r[13]+0xFFFFBBB8u); // 801FE098
  cmps(c,0,(int32_t)c->r[0],0); // 801FE09C
  if (!crb(c,2)) { goto L_801FE120; } // 801FE0A0
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE0A4
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE0A8
  cmps(c,0,(int32_t)c->r[0],0); // 801FE0AC
  if (!crb(c,2)) { goto L_801FE120; } // 801FE0B0
  c->lr=0x801FE0B8u; f_80361BF4(c); // 801FE0B4
  c->r[0]=R32(c->r[13]+0xFFFFBBC0u); // 801FE0B8
  c->r[6]=R32(c->r[13]+0xFFFFBBC4u); // 801FE0BC
  c->r[0]=c->r[0]^0x80000000u; // 801FE0C0
  c->r[5]=c->r[3]^0x80000000u; // 801FE0C4
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FE0C8
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FE0CC
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FE0D0
  c->r[5]=0u-c->r[5]; // 801FE0D4
  cmps(c,0,(int32_t)c->r[5],0); // 801FE0D8
  if (crb(c,2)) { goto L_801FE120; } // 801FE0DC
  c->r[0]=0u+0x00000001u; // 801FE0E0
  W32(c->r[13]+0xFFFFBBB4u,c->r[0]); // 801FE0E4
  c->lr=0x801FE0ECu; f_80361BF4(c); // 801FE0E8
  c->r[5]=0u+0x80000000u; // 801FE0EC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FE0F0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FE0F4
  c->r[5]=0u+0x10620000u; // 801FE0F8
  c->r[5]=c->r[5]+0x00004DD3u; // 801FE0FC
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FE100
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FE104
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)2000); // 801FE108
  c->r[0]=0u+0x00000000u; // 801FE10C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FE110
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FE114
  W32(c->r[13]+0xFFFFBBC4u,c->r[4]); // 801FE118
  W32(c->r[13]+0xFFFFBBC0u,c->r[0]); // 801FE11C
L_801FE120:;
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE120
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000070u); // 801FE124
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000038u); // 801FE128
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FE12C
  if (!crb(c,2)) { goto L_801FE144; } // 801FE130
  c->r[3]=R32(c->r[4]+0x00000034u); // 801FE134
  c->r[0]=R32(c->r[4]+0x00000074u); // 801FE138
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 801FE13C
  if (crb(c,2)) { goto L_801FE14C; } // 801FE140
L_801FE144:;
  c->r[0]=0u+0x00000001u; // 801FE144
  W32(c->r[13]+0xFFFFBBB4u,c->r[0]); // 801FE148
L_801FE14C:;
  c->lr=0x801FE150u; f_80361BF4(c); // 801FE14C
  c->r[0]=R32(c->r[13]+0xFFFFBBC8u); // 801FE150
  c->r[6]=R32(c->r[13]+0xFFFFBBCCu); // 801FE154
  c->r[0]=c->r[0]^0x80000000u; // 801FE158
  c->r[5]=c->r[3]^0x80000000u; // 801FE15C
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FE160
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FE164
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FE168
  c->r[5]=0u-c->r[5]; // 801FE16C
  cmps(c,0,(int32_t)c->r[5],0); // 801FE170
  if (crb(c,2)) { goto L_801FE1B8; } // 801FE174
  c->r[0]=0u+0x00000001u; // 801FE178
  W32(c->r[13]+0xFFFFBBB4u,c->r[0]); // 801FE17C
  c->lr=0x801FE184u; f_80361BF4(c); // 801FE180
  c->r[5]=0u+0x80000000u; // 801FE184
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FE188
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FE18C
  c->r[5]=0u+0x10620000u; // 801FE190
  c->r[5]=c->r[5]+0x00004DD3u; // 801FE194
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FE198
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FE19C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1800); // 801FE1A0
  c->r[0]=0u+0x00000000u; // 801FE1A4
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FE1A8
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FE1AC
  W32(c->r[13]+0xFFFFBBCCu,c->r[4]); // 801FE1B0
  W32(c->r[13]+0xFFFFBBC8u,c->r[0]); // 801FE1B4
L_801FE1B8:;
  c->r[0]=R32(c->r[13]+0xFFFFBBB4u); // 801FE1B8
  cmps(c,0,(int32_t)c->r[0],0); // 801FE1BC
  if (crb(c,2)) { goto L_801FE1D4; } // 801FE1C0
  c->r[3]=c->r[1]+0x00000010u; // 801FE1C4
  c->r[4]=0u+0x00000000u; // 801FE1C8
  c->r[5]=0u+0x00000008u; // 801FE1CC
  c->lr=0x801FE1D4u; f_800060B8(c); // 801FE1D0
L_801FE1D4:;
  c->r[6]=R32(c->r[27]+0x00000D08u); // 801FE1D4
  c->r[3]=R8(c->r[6]+0x00000030u); // 801FE1D8
  cmps(c,0,(int32_t)c->r[3],0); // 801FE1DC
  if (!crb(c,2)) { goto L_801FE278; } // 801FE1E0
  c->r[5]=c->r[6]+0x00000060u; // 801FE1E4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000070u); // 801FE1E8
  c->r[0]=R8(c->r[6]+0x0000003Au); // 801FE1EC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE1F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[0]); // 801FE1F4
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801FE1F8
  if (crb(c,2)) { goto L_801FE22C; } // 801FE1FC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FE200
  W16(c->r[5]+c->r[0],c->r[4]); // 801FE204
  c->r[0]=R8(c->r[6]+0x00000030u); // 801FE208
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE20C
  c->r[3]=c->r[6]+c->r[0]; // 801FE210
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FE214
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE218
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000070u); // 801FE21C
  W16(c->r[3]+0x00000028u,c->r[0]); // 801FE220
  c->r[29]=0u+0x00000001u; // 801FE224
  goto L_801FE238; // 801FE228
L_801FE22C:;
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FE22C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[0]); // 801FE230
  W16(c->r[6]+0x00000070u,c->r[0]); // 801FE234
L_801FE238:;
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE238
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FE23C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE240
  c->r[3]=c->r[3]+c->r[0]; // 801FE244
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE248
  c->r[4]=R32(c->r[1]+0x00000010u); // 801FE24C
  c->r[4]=(rotl(c->r[0],23)&0x07800000u)|(c->r[4]&~0x07800000u); // 801FE250
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE254
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE258
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE25C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE260
  c->r[3]=c->r[3]+c->r[0]; // 801FE264
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE268
  c->r[4]=(rotl(c->r[0],27)&0x78000000u)|(c->r[4]&~0x78000000u); // 801FE26C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE270
  goto L_801FE2C4; // 801FE274
L_801FE278:;
  c->r[5]=c->r[6]+0x00000060u; // 801FE278
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000070u); // 801FE27C
  c->r[0]=R8(c->r[6]+0x0000003Au); // 801FE280
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE284
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+c->r[0]); // 801FE288
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801FE28C
  if (crb(c,2)) { goto L_801FE2C4; } // 801FE290
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FE294
  W16(c->r[5]+c->r[0],c->r[4]); // 801FE298
  c->r[0]=R8(c->r[6]+0x00000030u); // 801FE29C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE2A0
  c->r[3]=c->r[6]+c->r[0]; // 801FE2A4
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FE2A8
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE2AC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000070u); // 801FE2B0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE2B4
  c->r[0]=(rotl(c->r[3],23)&0x07800000u)|(c->r[0]&~0x07800000u); // 801FE2B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FE2BC
  c->r[29]=0u+0x00000001u; // 801FE2C0
L_801FE2C4:;
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE2C4
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801FE2C8
  cmps(c,0,(int32_t)c->r[0],0); // 801FE2CC
  if (crb(c,2)) { goto L_801FE2F0; } // 801FE2D0
  c->r[0]=R32(c->r[4]+0x00000034u); // 801FE2D4
  cmps(c,0,(int32_t)c->r[0],0); // 801FE2D8
  if (!crb(c,2)) { goto L_801FE2EC; } // 801FE2DC
  c->r[0]=R32(c->r[4]+0x00000074u); // 801FE2E0
  cmps(c,0,(int32_t)c->r[0],0); // 801FE2E4
  if (crb(c,2)) { goto L_801FE2F0; } // 801FE2E8
L_801FE2EC:;
  c->r[29]=0u+0x00000000u; // 801FE2EC
L_801FE2F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801FE2F0
  if (crb(c,2)) { goto L_801FE33C; } // 801FE2F4
  cmps(c,0,(int32_t)c->r[28],0); // 801FE2F8
  if (crb(c,2)) { goto L_801FE33C; } // 801FE2FC
  c->r[3]=c->r[28]|c->r[28]; // 801FE300
  c->r[0]=R8(c->r[4]+0x00000030u); // 801FE304
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE308
  c->r[4]=c->r[4]+c->r[0]; // 801FE30C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000064u); // 801FE310
  c->r[5]=0u+0x00000000u; // 801FE314
  c->lr=0x801FE31Cu; f_802156D4(c); // 801FE318
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE31C
  c->r[3]=c->r[28]|c->r[28]; // 801FE320
  c->r[0]=R8(c->r[4]+0x0000003Au); // 801FE324
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE328
  c->r[4]=c->r[4]+c->r[0]; // 801FE32C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000064u); // 801FE330
  c->r[5]=0u+0x00000001u; // 801FE334
  c->lr=0x801FE33Cu; f_802156D4(c); // 801FE338
L_801FE33C:;
  c->r[0]=R32(c->r[13]+0xFFFFBBB4u); // 801FE33C
  cmps(c,0,(int32_t)c->r[0],0); // 801FE340
  if (crb(c,2)) { goto L_801FE46C; } // 801FE344
  c->r[3]=c->r[27]+0x000006D4u; // 801FE348
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE34C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FE350
  c->lr=0x801FE358u; f_8020BF40(c); // 801FE354
  cmps(c,0,(int32_t)c->r[3],0); // 801FE358
  if (crb(c,2)) { goto L_801FE46C; } // 801FE35C
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE360
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000070u); // 801FE364
  W16(c->r[3]+0x00000038u,c->r[0]); // 801FE368
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE36C
  c->r[3]=R32(c->r[4]+0x00000074u); // 801FE370
  W32(c->r[4]+0x00000034u,c->r[3]); // 801FE374
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE378
  c->r[0]=(rotl(c->r[3],31)&0x80000000u)|(c->r[0]&~0x80000000u); // 801FE37C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FE380
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE384
  c->r[4]=R32(c->r[3]+0x00000034u); // 801FE388
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE38C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801FE390
  c->r[3]=c->r[3]+c->r[0]; // 801FE394
  W32(c->r[3]+0x00000068u,c->r[4]); // 801FE398
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE39C
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE3A0
  cmps(c,0,(int32_t)c->r[0],0); // 801FE3A4
  if (!crb(c,2)) { goto L_801FE3CC; } // 801FE3A8
  c->lr=0x801FE3B0u; f_8005C4C4(c); // 801FE3AC
  c->r[4]=rotl(c->r[3],0)&0x007FFFFFu; // 801FE3B0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE3B4
  c->r[0]=(rotl(c->r[4],0)&0x007FFFFFu)|(c->r[0]&~0x007FFFFFu); // 801FE3B8
  W32(c->r[1]+0x00000010u,c->r[0]); // 801FE3BC
  c->r[4]=rotl(c->r[0],0)&0x007FFFFFu; // 801FE3C0
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE3C4
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801FE3C8
L_801FE3CC:;
  c->r[3]=c->r[27]+0x000006D4u; // 801FE3CC
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE3D0
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FE3D4
  c->r[5]=c->r[1]+0x00000010u; // 801FE3D8
  c->r[6]=0u+0x00000008u; // 801FE3DC
  c->r[7]=0u+0x00000000u; // 801FE3E0
  c->lr=0x801FE3E8u; f_8020BFE0(c); // 801FE3E4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE3E8
  if (crb(c,2)) { goto L_801FE44C; } // 801FE3EC
  c->r[28]=0u+0x00000000u; // 801FE3F0
  W32(c->r[13]+0xFFFFBBB4u,c->r[28]); // 801FE3F4
  c->r[3]=0u+0x00000001u; // 801FE3F8
  c->r[4]=0u+0x80470000u; // 801FE3FC
  c->r[4]=c->r[4]+0x00007408u; // 801FE400
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE404
  c->r[5]=R8(c->r[5]+0x0000003Au); // 801FE408
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE40C
  c->lr=0x801FE414u; f_803D3760(c); // 801FE410
  c->lr=0x801FE418u; f_80361BF4(c); // 801FE414
  c->r[5]=0u+0x80000000u; // 801FE418
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FE41C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FE420
  c->r[5]=0u+0x10620000u; // 801FE424
  c->r[5]=c->r[5]+0x00004DD3u; // 801FE428
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FE42C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FE430
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)400); // 801FE434
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 801FE438
  c->r[0]=addc(c,c->r[28],c->r[3],c->xer_ca); // 801FE43C
  W32(c->r[13]+0xFFFFBBCCu,c->r[4]); // 801FE440
  W32(c->r[13]+0xFFFFBBC8u,c->r[0]); // 801FE444
  goto L_801FE4B8; // 801FE448
L_801FE44C:;
  c->r[3]=0u+0x00000002u; // 801FE44C
  c->r[4]=0u+0x80470000u; // 801FE450
  c->r[4]=c->r[4]+0x00007430u; // 801FE454
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE458
  c->r[5]=R8(c->r[5]+0x0000003Au); // 801FE45C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE460
  c->lr=0x801FE468u; f_803D3760(c); // 801FE464
  goto L_801FE4B8; // 801FE468
L_801FE46C:;
  c->lr=0x801FE470u; f_80208B40(c); // 801FE46C
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE470
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FE474
  c->lr=0x801FE47Cu; f_803D8328(c); // 801FE478
  c->r[28]=c->r[3]|c->r[3]; // 801FE47C
  c->lr=0x801FE484u; f_80208B4C(c); // 801FE480
  cmps(c,0,(int32_t)c->r[28],0); // 801FE484
  if (!crb(c,2)) { goto L_801FE4B8; } // 801FE488
  c->r[3]=0u+0x00000002u; // 801FE48C
  c->r[4]=0u+0x80470000u; // 801FE490
  c->r[4]=c->r[4]+0x00007460u; // 801FE494
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE498
  c->r[5]=R8(c->r[5]+0x0000003Au); // 801FE49C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE4A0
  c->lr=0x801FE4A8u; f_803D3760(c); // 801FE4A4
  c->r[3]=c->r[27]|c->r[27]; // 801FE4A8
  c->r[4]=0u+0x0000001Eu; // 801FE4AC
  c->lr=0x801FE4B4u; f_801FB330(c); // 801FE4B0
  goto L_801FECC4; // 801FE4B4
L_801FE4B8:;
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE4B8
  c->r[0]=R8(c->r[4]+0x00000030u); // 801FE4BC
  cmps(c,0,(int32_t)c->r[0],0); // 801FE4C0
  if (crb(c,2)) { goto L_801FE500; } // 801FE4C4
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801FE4C8
  cmps(c,0,(int32_t)c->r[0],0); // 801FE4CC
  if (crb(c,2)) { goto L_801FE500; } // 801FE4D0
  c->r[0]=R32(c->r[4]+0x00000034u); // 801FE4D4
  cmps(c,0,(int32_t)c->r[0],0); // 801FE4D8
  if (crb(c,2)) { goto L_801FE500; } // 801FE4DC
  c->r[3]=c->r[27]+0x000006D4u; // 801FE4E0
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FE4E4
  c->r[5]=0u+0x00001388u; // 801FE4E8
  c->lr=0x801FE4F0u; f_8020834C(c); // 801FE4EC
  c->r[3]=c->r[27]|c->r[27]; // 801FE4F0
  c->r[4]=0u+0x00000002u; // 801FE4F4
  c->lr=0x801FE4FCu; f_802082BC(c); // 801FE4F8
  goto L_801FECC4; // 801FE4FC
L_801FE500:;
  c->r[3]=c->r[27]|c->r[27]; // 801FE500
  c->r[4]=0u+0x00000001u; // 801FE504
  c->lr=0x801FE50Cu; f_802082BC(c); // 801FE508
  goto L_801FECC4; // 801FE50C
L_801FE510:;
  c->r[0]=R32(c->r[13]+0xFFFFBBD4u); // 801FE510
  cmps(c,0,(int32_t)c->r[0],0); // 801FE514
  if (!crb(c,2)) { goto L_801FE538; } // 801FE518
  c->r[3]=c->r[27]+0x000006D4u; // 801FE51C
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE520
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FE524
  c->r[5]=c->r[13]+0xFFFFBBD8u; // 801FE528
  c->r[6]=0u+0x00000000u; // 801FE52C
  c->lr=0x801FE534u; f_8020BD84(c); // 801FE530
  W32(c->r[13]+0xFFFFBBD4u,c->r[3]); // 801FE534
L_801FE538:;
  c->r[0]=R32(c->r[13]+0xFFFFBBD4u); // 801FE538
  cmps(c,0,(int32_t)c->r[0],0); // 801FE53C
  if (!crb(c,2)) { goto L_801FE5EC; } // 801FE540
  c->r[0]=R32(c->r[27]+0x00000D18u); // 801FE544
  cmpu(c,0,c->r[0],0x00000008u); // 801FE548
  if (!crb(c,2)) { goto L_801FE5EC; } // 801FE54C
  c->r[3]=0u+0x00000001u; // 801FE550
  c->r[4]=0u+0x80470000u; // 801FE554
  c->r[4]=c->r[4]+0x0000749Cu; // 801FE558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE55C
  c->lr=0x801FE564u; f_803D3760(c); // 801FE560
  c->r[0]=R32(c->r[27]+0x00000D20u); // 801FE564
  W32(c->r[13]+0xFFFFBBD4u,c->r[0]); // 801FE568
  c->r[0]=R32(c->r[27]+0x00000D18u); // 801FE56C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FE570
  W16(c->r[13]+0xFFFFBBD8u,c->r[0]); // 801FE574
  c->r[0]=0u+0x00000000u; // 801FE578
  W32(c->r[27]+0x00000D18u,c->r[0]); // 801FE57C
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE580
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE584
  cmps(c,0,(int32_t)c->r[0],0); // 801FE588
  if (crb(c,2)) { goto L_801FE5EC; } // 801FE58C
  c->r[0]=R32(c->r[13]+0xFFFFBBB8u); // 801FE590
  cmps(c,0,(int32_t)c->r[0],0); // 801FE594
  if (!crb(c,2)) { goto L_801FE5EC; } // 801FE598
  c->r[3]=0u+0x00000001u; // 801FE59C
  c->r[4]=0u+0x80470000u; // 801FE5A0
  c->r[4]=c->r[4]+0x000074C4u; // 801FE5A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE5A8
  c->lr=0x801FE5B0u; f_803D3760(c); // 801FE5AC
  c->r[0]=0u+0x00000001u; // 801FE5B0
  W32(c->r[13]+0xFFFFBBB8u,c->r[0]); // 801FE5B4
  c->r[3]=c->r[28]|c->r[28]; // 801FE5B8
  c->lr=0x801FE5C0u; f_802083D8(c); // 801FE5BC
  cmps(c,0,(int32_t)c->r[3],0); // 801FE5C0
  if (!crb(c,2)) { goto L_801FE5EC; } // 801FE5C4
  c->r[3]=c->r[28]|c->r[28]; // 801FE5C8
  c->r[4]=0u+0x00000001u; // 801FE5CC
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE5D0
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FE5D4
  cmps(c,0,(int32_t)c->r[0],0); // 801FE5D8
  c->r[5]=0u+0x00000320u; // 801FE5DC
  if (!crb(c,2)) { goto L_801FE5E8; } // 801FE5E0
  c->r[5]=0u+0x00000258u; // 801FE5E4
L_801FE5E8:;
  c->lr=0x801FE5ECu; f_80215A9C(c); // 801FE5E8
L_801FE5EC:;
  c->r[3]=c->r[1]+0x00000010u; // 801FE5EC
  c->r[4]=0u+0x00000000u; // 801FE5F0
  c->r[5]=0u+0x00000008u; // 801FE5F4
  c->lr=0x801FE5FCu; f_800060B8(c); // 801FE5F8
  c->r[0]=R32(c->r[13]+0xFFFFBBD4u); // 801FE5FC
  cmps(c,0,(int32_t)c->r[0],0); // 801FE600
  if (crb(c,2)) { goto L_801FE8A8; } // 801FE604
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[13]+0xFFFFBBD8u); // 801FE608
  cmpu(c,0,c->r[5],0x00000008u); // 801FE60C
  if (crb(c,2)) { goto L_801FE638; } // 801FE610
  c->r[3]=0u+0x00000001u; // 801FE614
  c->r[4]=0u+0x80470000u; // 801FE618
  c->r[4]=c->r[4]+0x000074ECu; // 801FE61C
  c->r[6]=0u+0x00000008u; // 801FE620
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE624
  c->lr=0x801FE62Cu; f_803D3760(c); // 801FE628
  c->r[0]=0u+0x00000000u; // 801FE62C
  W32(c->r[13]+0xFFFFBBD4u,c->r[0]); // 801FE630
  goto L_801FECC4; // 801FE634
L_801FE638:;
  c->r[0]=R32(c->r[13]+0xFFFFBBB8u); // 801FE638
  cmps(c,0,(int32_t)c->r[0],0); // 801FE63C
  if (!crb(c,2)) { goto L_801FE6AC; } // 801FE640
  c->r[3]=0u+0x00000001u; // 801FE644
  c->r[4]=0u+0x80470000u; // 801FE648
  c->r[4]=c->r[4]+0x00007514u; // 801FE64C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE650
  c->lr=0x801FE658u; f_803D3760(c); // 801FE654
  c->r[0]=0u+0x00000001u; // 801FE658
  W32(c->r[13]+0xFFFFBBB8u,c->r[0]); // 801FE65C
  c->r[3]=c->r[28]|c->r[28]; // 801FE660
  c->lr=0x801FE668u; f_802083D8(c); // 801FE664
  cmps(c,0,(int32_t)c->r[3],0); // 801FE668
  if (!crb(c,2)) { goto L_801FE694; } // 801FE66C
  c->r[3]=c->r[28]|c->r[28]; // 801FE670
  c->r[4]=0u+0x00000001u; // 801FE674
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE678
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FE67C
  cmps(c,0,(int32_t)c->r[0],0); // 801FE680
  c->r[5]=0u+0x00000320u; // 801FE684
  if (!crb(c,2)) { goto L_801FE690; } // 801FE688
  c->r[5]=0u+0x00000258u; // 801FE68C
L_801FE690:;
  c->lr=0x801FE694u; f_80215A9C(c); // 801FE690
L_801FE694:;
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE694
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE698
  cmps(c,0,(int32_t)c->r[0],0); // 801FE69C
  if (crb(c,2)) { goto L_801FE6AC; } // 801FE6A0
  c->r[0]=0u+0x00000001u; // 801FE6A4
  W32(c->r[13]+0xFFFFBBB4u,c->r[0]); // 801FE6A8
L_801FE6AC:;
  c->r[3]=c->r[1]+0x00000010u; // 801FE6AC
  c->r[4]=R32(c->r[13]+0xFFFFBBD4u); // 801FE6B0
  c->lr=0x801FE6B8u; f_801FECDC(c); // 801FE6B4
  c->r[0]=0u+0x00000000u; // 801FE6B8
  W32(c->r[13]+0xFFFFBBD4u,c->r[0]); // 801FE6BC
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE6C0
  c->r[3]=R8(c->r[5]+0x00000030u); // 801FE6C4
  cmps(c,0,(int32_t)c->r[3],0); // 801FE6C8
  if (!crb(c,2)) { goto L_801FE78C; } // 801FE6CC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000028u); // 801FE6D0
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE6D4
  c->r[0]=rotl(c->r[0],9)&0x0000000Fu; // 801FE6D8
  cmpu(c,0,c->r[0],c->r[4]); // 801FE6DC
  if (crb(c,2)) { goto L_801FE780; } // 801FE6E0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FE6E4
  c->r[3]=c->r[5]+c->r[0]; // 801FE6E8
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FE6EC
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FE6F0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE6F4
  c->r[3]=c->r[5]+c->r[0]; // 801FE6F8
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FE6FC
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE700
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE704
  c->r[0]=rotl(c->r[0],9)&0x0000000Fu; // 801FE708
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FE70C
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FE710
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE714
  c->r[3]=c->r[5]+c->r[0]; // 801FE718
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FE71C
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FE720
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE724
  c->r[3]=c->r[5]+c->r[0]; // 801FE728
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FE72C
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE730
  c->r[0]=R8(c->r[4]+0x00000030u); // 801FE734
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE738
  c->r[3]=c->r[4]+c->r[0]; // 801FE73C
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE740
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000070u); // 801FE744
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 801FE748
  if (crb(c,2)) { goto L_801FE764; } // 801FE74C
  c->r[3]=0u+0x00000001u; // 801FE750
  c->r[4]=0u+0x80470000u; // 801FE754
  c->r[4]=c->r[4]+0x00007538u; // 801FE758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE75C
  c->lr=0x801FE764u; f_803D3760(c); // 801FE760
L_801FE764:;
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE764
  c->r[0]=R8(c->r[4]+0x00000030u); // 801FE768
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE76C
  c->r[3]=c->r[4]+c->r[0]; // 801FE770
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE774
  W16(c->r[4]+0x00000070u,c->r[0]); // 801FE778
  goto L_801FE844; // 801FE77C
L_801FE780:;
  c->r[0]=0u+0x00000001u; // 801FE780
  W32(c->r[13]+0xFFFFBBB4u,c->r[0]); // 801FE784
  goto L_801FE844; // 801FE788
L_801FE78C:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE78C
  c->r[4]=rotl(c->r[0],9)&0x0000000Fu; // 801FE790
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000070u); // 801FE794
  cmpu(c,0,c->r[0],c->r[4]); // 801FE798
  if (crb(c,2)) { goto L_801FE804; } // 801FE79C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801FE7A0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801FE7A4
  c->r[3]=c->r[5]+c->r[0]; // 801FE7A8
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FE7AC
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FE7B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE7B4
  c->r[3]=c->r[5]+c->r[0]; // 801FE7B8
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FE7BC
  c->r[6]=R32(c->r[27]+0x00000D08u); // 801FE7C0
  c->r[3]=0u+0x00000001u; // 801FE7C4
  c->r[4]=0u+0x80470000u; // 801FE7C8
  c->r[4]=c->r[4]+0x00007564u; // 801FE7CC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000070u); // 801FE7D0
  c->r[0]=R8(c->r[6]+0x00000030u); // 801FE7D4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE7D8
  c->r[6]=c->r[6]+c->r[0]; // 801FE7DC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000060u); // 801FE7E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE7E4
  c->lr=0x801FE7ECu; f_803D3760(c); // 801FE7E8
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE7EC
  c->r[0]=R8(c->r[4]+0x00000030u); // 801FE7F0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE7F4
  c->r[3]=c->r[4]+c->r[0]; // 801FE7F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE7FC
  W16(c->r[4]+0x00000070u,c->r[0]); // 801FE800
L_801FE804:;
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FE804
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE808
  c->r[0]=rotl(c->r[0],5)&0x0000000Fu; // 801FE80C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FE810
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FE814
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE818
  c->r[3]=c->r[5]+c->r[0]; // 801FE81C
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FE820
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FE824
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE828
  c->r[3]=c->r[5]+c->r[0]; // 801FE82C
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FE830
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE834
  c->r[0]=rotl(c->r[0],0)&0x007FFFFFu; // 801FE838
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE83C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801FE840
L_801FE844:;
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE844
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801FE848
  cmps(c,0,(int32_t)c->r[0],0); // 801FE84C
  if (!crb(c,2)) { goto L_801FE8B4; } // 801FE850
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE854
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FE858
  cmps(c,0,(int32_t)c->r[0],0); // 801FE85C
  if (crb(c,2)) { goto L_801FE8B4; } // 801FE860
  c->r[3]=0u+0x00000001u; // 801FE864
  c->r[4]=0u+0x80470000u; // 801FE868
  c->r[4]=c->r[4]+0x00007590u; // 801FE86C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FE870
  c->lr=0x801FE878u; f_803D3760(c); // 801FE874
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FE878
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801FE87C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FE880
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE884
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801FE888
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE88C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 801FE890
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FE894
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801FE898
  c->r[3]=c->r[3]+c->r[0]; // 801FE89C
  W32(c->r[3]+0x00000068u,c->r[4]); // 801FE8A0
  goto L_801FE8B4; // 801FE8A4
L_801FE8A8:;
  c->r[3]=c->r[27]|c->r[27]; // 801FE8A8
  c->r[4]=0u+0x00000000u; // 801FE8AC
  c->lr=0x801FE8B4u; f_802082BC(c); // 801FE8B0
L_801FE8B4:;
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE8B4
  c->r[0]=R8(c->r[4]+0x00000030u); // 801FE8B8
  cmps(c,0,(int32_t)c->r[0],0); // 801FE8BC
  if (!crb(c,2)) { goto L_801FECC4; } // 801FE8C0
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 801FE8C4
  cmps(c,0,(int32_t)c->r[0],0); // 801FE8C8
  if (crb(c,2)) { goto L_801FECC4; } // 801FE8CC
  c->r[0]=R32(c->r[4]+0x00000034u); // 801FE8D0
  cmps(c,0,(int32_t)c->r[0],0); // 801FE8D4
  if (crb(c,2)) { goto L_801FECC4; } // 801FE8D8
  c->r[3]=c->r[27]+0x000006D4u; // 801FE8DC
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FE8E0
  c->r[5]=0u+0x00001388u; // 801FE8E4
  c->lr=0x801FE8ECu; f_8020834C(c); // 801FE8E8
  c->r[3]=c->r[27]|c->r[27]; // 801FE8EC
  c->r[4]=0u+0x00000002u; // 801FE8F0
  c->lr=0x801FE8F8u; f_802082BC(c); // 801FE8F4
  goto L_801FECC4; // 801FE8F8
L_801FE8FC:;
  c->r[3]=c->r[27]+0x000006D4u; // 801FE8FC
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FE900
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FE904
  c->r[5]=c->r[13]+0xFFFFBBD8u; // 801FE908
  c->r[6]=0u+0x00000000u; // 801FE90C
  c->lr=0x801FE914u; f_8020BD84(c); // 801FE910
  W32(c->r[13]+0xFFFFBBD4u,c->r[3]); // 801FE914
  c->r[3]=R32(c->r[13]+0xFFFFBBD0u); // 801FE918
  cmps(c,0,(int32_t)c->r[3],0); // 801FE91C
  if (!crb(c,1)) { goto L_801FE950; } // 801FE920
  c->r[0]=R32(c->r[13]+0xFFFFBBB4u); // 801FE924
  cmps(c,0,(int32_t)c->r[0],0); // 801FE928
  if (!crb(c,2)) { goto L_801FE950; } // 801FE92C
  c->r[0]=0u+0x00000001u; // 801FE930
  W32(c->r[13]+0xFFFFBBB4u,c->r[0]); // 801FE934
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801FE938
  W32(c->r[13]+0xFFFFBBD0u,c->r[0]); // 801FE93C
  c->r[3]=c->r[27]|c->r[27]; // 801FE940
  c->r[4]=0u+0x00000000u; // 801FE944
  c->lr=0x801FE94Cu; f_802082BC(c); // 801FE948
  goto L_801FECC4; // 801FE94C
L_801FE950:;
  c->r[3]=c->r[27]|c->r[27]; // 801FE950
  c->r[4]=0u+0x00000027u; // 801FE954
  c->lr=0x801FE95Cu; f_802082BC(c); // 801FE958
  c->r[0]=0u+0x00000000u; // 801FE95C
  W8(c->r[13]+0xFFFFBBB0u,c->r[0]); // 801FE960
  goto L_801FECC4; // 801FE964
L_801FE968:;
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE968
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FE96C
  cmps(c,0,(int32_t)c->r[0],0); // 801FE970
  if (!crb(c,2)) { goto L_801FE9B8; } // 801FE974
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE978
  c->r[3]=c->r[3]+c->r[0]; // 801FE97C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE980
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801FE984
  c->r[4]=R32(c->r[1]+0x00000010u); // 801FE988
  c->r[4]=(rotl(c->r[0],27)&0x78000000u)|(c->r[4]&~0x78000000u); // 801FE98C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE990
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE994
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FE998
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE99C
  c->r[3]=c->r[3]+c->r[0]; // 801FE9A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE9A4
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801FE9A8
  c->r[4]=(rotl(c->r[0],23)&0x07800000u)|(c->r[4]&~0x07800000u); // 801FE9AC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE9B0
  goto L_801FE9F4; // 801FE9B4
L_801FE9B8:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE9B8
  c->r[3]=c->r[3]+c->r[0]; // 801FE9BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE9C0
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801FE9C4
  c->r[4]=R32(c->r[1]+0x00000010u); // 801FE9C8
  c->r[4]=(rotl(c->r[0],23)&0x07800000u)|(c->r[4]&~0x07800000u); // 801FE9CC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE9D0
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE9D4
  c->r[0]=R8(c->r[3]+0x0000003Au); // 801FE9D8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FE9DC
  c->r[3]=c->r[3]+c->r[0]; // 801FE9E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FE9E4
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801FE9E8
  c->r[4]=(rotl(c->r[0],27)&0x78000000u)|(c->r[4]&~0x78000000u); // 801FE9EC
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FE9F0
L_801FE9F4:;
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FE9F4
  c->r[0]=R32(c->r[3]+0x00000034u); // 801FE9F8
  c->r[4]=R32(c->r[1]+0x00000010u); // 801FE9FC
  c->r[4]=(rotl(c->r[0],31)&0x80000000u)|(c->r[4]&~0x80000000u); // 801FEA00
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FEA04
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FEA08
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801FEA0C
  c->r[4]=(rotl(c->r[0],0)&0x007FFFFFu)|(c->r[4]&~0x007FFFFFu); // 801FEA10
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FEA14
  c->r[3]=R8(c->r[13]+0xFFFFBBB0u); // 801FEA18
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 801FEA1C
  cmps(c,0,(int32_t)c->r[0],0); // 801FEA20
  if (crb(c,2)) { goto L_801FEA38; } // 801FEA24
  c->r[0]=rotl(c->r[4],5)&0x0000000Fu; // 801FEA28
  c->r[0]=c->r[0]|0x00000008u; // 801FEA2C
  c->r[4]=(rotl(c->r[0],27)&0x78000000u)|(c->r[4]&~0x78000000u); // 801FEA30
  W32(c->r[1]+0x00000010u,c->r[4]); // 801FEA34
L_801FEA38:;
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801FEA38
  cmps(c,0,(int32_t)c->r[0],0); // 801FEA3C
  if (crb(c,2)) { goto L_801FEA58; } // 801FEA40
  c->r[3]=R32(c->r[1]+0x00000010u); // 801FEA44
  c->r[0]=rotl(c->r[3],9)&0x0000000Fu; // 801FEA48
  c->r[0]=c->r[0]|0x00000008u; // 801FEA4C
  c->r[3]=(rotl(c->r[0],23)&0x07800000u)|(c->r[3]&~0x07800000u); // 801FEA50
  W32(c->r[1]+0x00000010u,c->r[3]); // 801FEA54
L_801FEA58:;
  c->r[3]=c->r[27]+0x000006D4u; // 801FEA58
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FEA5C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FEA60
  c->r[5]=c->r[1]+0x00000010u; // 801FEA64
  c->r[6]=0u+0x00000008u; // 801FEA68
  c->r[7]=0u+0x00000000u; // 801FEA6C
  c->lr=0x801FEA74u; f_8020BFE0(c); // 801FEA70
  cmps(c,0,(int32_t)c->r[3],0); // 801FEA74
  if (!crb(c,2)) { goto L_801FEA90; } // 801FEA78
  c->r[3]=0u+0x00000001u; // 801FEA7C
  c->r[4]=0u+0x80470000u; // 801FEA80
  c->r[4]=c->r[4]+0x000075B0u; // 801FEA84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEA88
  c->lr=0x801FEA90u; f_803D3760(c); // 801FEA8C
L_801FEA90:;
  c->r[3]=c->r[27]|c->r[27]; // 801FEA90
  c->r[4]=0u+0x00000001u; // 801FEA94
  c->lr=0x801FEA9Cu; f_802082A0(c); // 801FEA98
  goto L_801FECC4; // 801FEA9C
L_801FEAA0:;
  c->r[3]=c->r[27]+0x000006D4u; // 801FEAA0
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FEAA4
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FEAA8
  c->r[5]=c->r[1]+0x00000008u; // 801FEAAC
  c->r[6]=0u+0x00000000u; // 801FEAB0
  c->lr=0x801FEAB8u; f_8020BD84(c); // 801FEAB4
  c->r[28]=c->r[3]|c->r[3]; // 801FEAB8
  c->r[3]=c->r[1]+0x00000010u; // 801FEABC
  c->r[4]=0u+0x00000000u; // 801FEAC0
  c->r[5]=0u+0x00000008u; // 801FEAC4
  c->lr=0x801FEACCu; f_800060B8(c); // 801FEAC8
  cmps(c,0,(int32_t)c->r[28],0); // 801FEACC
  if (crb(c,2)) { goto L_801FEB8C; } // 801FEAD0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 801FEAD4
  cmpu(c,0,c->r[5],0x00000008u); // 801FEAD8
  if (crb(c,2)) { goto L_801FEAFC; } // 801FEADC
  c->r[3]=0u+0x00000001u; // 801FEAE0
  c->r[4]=0u+0x80470000u; // 801FEAE4
  c->r[4]=c->r[4]+0x000075C8u; // 801FEAE8
  c->r[6]=0u+0x00000008u; // 801FEAEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEAF0
  c->lr=0x801FEAF8u; f_803D3760(c); // 801FEAF4
  goto L_801FECC4; // 801FEAF8
L_801FEAFC:;
  c->r[3]=c->r[1]+0x00000010u; // 801FEAFC
  c->r[4]=c->r[28]|c->r[28]; // 801FEB00
  c->lr=0x801FEB08u; f_801FECDC(c); // 801FEB04
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FEB08
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FEB0C
  cmps(c,0,(int32_t)c->r[0],0); // 801FEB10
  if (!crb(c,2)) { goto L_801FEB8C; } // 801FEB14
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FEB18
  c->r[0]=rotl(c->r[0],9)&0x0000000Fu; // 801FEB1C
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801FEB20
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FEB24
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FEB28
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FEB2C
  c->r[3]=c->r[5]+c->r[0]; // 801FEB30
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FEB34
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FEB38
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FEB3C
  c->r[3]=c->r[5]+c->r[0]; // 801FEB40
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FEB44
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FEB48
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FEB4C
  c->r[0]=rotl(c->r[0],5)&0x0000000Fu; // 801FEB50
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801FEB54
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FEB58
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FEB5C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FEB60
  c->r[3]=c->r[5]+c->r[0]; // 801FEB64
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FEB68
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FEB6C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FEB70
  c->r[3]=c->r[5]+c->r[0]; // 801FEB74
  W16(c->r[3]+0x00000064u,c->r[4]); // 801FEB78
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FEB7C
  c->r[0]=rotl(c->r[0],0)&0x007FFFFFu; // 801FEB80
  c->r[3]=R32(c->r[27]+0x00000D08u); // 801FEB84
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801FEB88
L_801FEB8C:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801FEB8C
  c->r[0]=rotl(c->r[3],9)&0x0000000Fu; // 801FEB90
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801FEB94
  cmps(c,0,(int32_t)c->r[0],0); // 801FEB98
  if (crb(c,2)) { goto L_801FEBD0; } // 801FEB9C
  c->r[0]=rotl(c->r[3],5)&0x0000000Fu; // 801FEBA0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801FEBA4
  cmps(c,0,(int32_t)c->r[0],0); // 801FEBA8
  if (crb(c,2)) { goto L_801FEBD0; } // 801FEBAC
  c->r[0]=R8(c->r[13]+0xFFFFBBB0u); // 801FEBB0
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 801FEBB4
  cmps(c,0,(int32_t)c->r[0],3); // 801FEBB8
  if (!crb(c,2)) { goto L_801FEBD0; } // 801FEBBC
  c->r[3]=c->r[27]|c->r[27]; // 801FEBC0
  c->r[4]=0u+0x00000027u; // 801FEBC4
  c->lr=0x801FEBCCu; f_802082BC(c); // 801FEBC8
  goto L_801FECC4; // 801FEBCC
L_801FEBD0:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801FEBD0
  c->r[0]=rotl(c->r[0],5)&0x0000000Fu; // 801FEBD4
  c->r[3]=rotl(c->r[0],0)&0x00000008u; // 801FEBD8
  cmps(c,0,(int32_t)c->r[3],0); // 801FEBDC
  if (crb(c,2)) { goto L_801FEBF0; } // 801FEBE0
  c->r[0]=R8(c->r[13]+0xFFFFBBB0u); // 801FEBE4
  c->r[0]=c->r[0]|0x00000001u; // 801FEBE8
  W8(c->r[13]+0xFFFFBBB0u,c->r[0]); // 801FEBEC
L_801FEBF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FEBF0
  if (crb(c,2)) { goto L_801FEC04; } // 801FEBF4
  c->r[0]=R8(c->r[13]+0xFFFFBBB0u); // 801FEBF8
  c->r[0]=c->r[0]|0x00000002u; // 801FEBFC
  W8(c->r[13]+0xFFFFBBB0u,c->r[0]); // 801FEC00
L_801FEC04:;
  c->r[3]=c->r[27]|c->r[27]; // 801FEC04
  c->r[4]=0u+0x00000003u; // 801FEC08
  c->lr=0x801FEC10u; f_802082BC(c); // 801FEC0C
  goto L_801FECC4; // 801FEC10
L_801FEC14:;
  c->r[3]=R32(c->r[13]+0xFFFFBBD4u); // 801FEC14
  goto L_801FEC38; // 801FEC18
L_801FEC1C:;
  c->r[3]=c->r[27]+0x000006D4u; // 801FEC1C
  c->r[4]=R32(c->r[27]+0x00000D08u); // 801FEC20
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FEC24
  c->r[5]=c->r[13]+0xFFFFBBD8u; // 801FEC28
  c->r[6]=0u+0x00000000u; // 801FEC2C
  c->lr=0x801FEC34u; f_8020BD84(c); // 801FEC30
  W32(c->r[13]+0xFFFFBBD4u,c->r[3]); // 801FEC34
L_801FEC38:;
  cmps(c,0,(int32_t)c->r[3],0); // 801FEC38
  if (!crb(c,2)) { IRQCHK(c); goto L_801FEC1C; } // 801FEC3C
L_801FEC40:;
  c->r[28]=0u+0x00000000u; // 801FEC40
  W32(c->r[13]+0xFFFFBBB8u,c->r[28]); // 801FEC44
  W8(c->r[13]+0xFFFFBBB0u,c->r[28]); // 801FEC48
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FEC4C
  c->r[3]=0u+0x00000001u; // 801FEC50
  c->r[4]=0u+0x80470000u; // 801FEC54
  c->r[4]=c->r[4]+0x000075F0u; // 801FEC58
  c->r[0]=R8(c->r[5]+0x00000030u); // 801FEC5C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FEC60
  c->r[5]=c->r[5]+c->r[0]; // 801FEC64
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000060u); // 801FEC68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEC6C
  c->lr=0x801FEC74u; f_803D3760(c); // 801FEC70
  c->r[5]=R32(c->r[27]+0x00000D08u); // 801FEC74
  c->r[3]=0u+0x00000001u; // 801FEC78
  c->r[4]=0u+0x80470000u; // 801FEC7C
  c->r[4]=c->r[4]+0x00007604u; // 801FEC80
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FEC84
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FEC88
  c->r[5]=c->r[5]+c->r[0]; // 801FEC8C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000060u); // 801FEC90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEC94
  c->lr=0x801FEC9Cu; f_803D3760(c); // 801FEC98
  W32(c->r[13]+0xFFFFBBB4u,c->r[28]); // 801FEC9C
  c->r[4]=R32(c->r[27]+0x00000D0Cu); // 801FECA0
  cmps(c,0,(int32_t)c->r[4],0); // 801FECA4
  if (crb(c,2)) { goto L_801FECB8; } // 801FECA8
  c->r[3]=c->r[27]|c->r[27]; // 801FECAC
  c->lr=0x801FECB4u; f_801FB568(c); // 801FECB0
  W32(c->r[27]+0x00000D0Cu,c->r[28]); // 801FECB4
L_801FECB8:;
  c->r[3]=c->r[27]|c->r[27]; // 801FECB8
  c->r[4]=0u+0x00000011u; // 801FECBC
  c->lr=0x801FECC4u; f_801FB330(c); // 801FECC0
L_801FECC4:;
  c->r[11]=c->r[1]+0x00000030u; // 801FECC4
  c->lr=0x801FECCCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FECC8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FECCC
  c->lr=c->r[0]; // 801FECD0
  c->r[1]=c->r[1]+0x00000030u; // 801FECD4
  return; // 801FECD8
}

// fn_801FECDC
void f_801FECDC(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 801FECDC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801FECE0
  c->r[0]=R16(c->r[4]+0x00000004u); // 801FECE4
  W16(c->r[3]+0x00000004u,c->r[0]); // 801FECE8
  return; // 801FECEC
}

// fn_801FECF0
void f_801FECF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FECF0
  c->r[0]=c->lr; // 801FECF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FECF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FECFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FED00
  c->r[31]=c->r[3]|c->r[3]; // 801FED04
  c->lr=0x801FED0Cu; f_802082B4(c); // 801FED08
  cmps(c,0,(int32_t)c->r[3],1); // 801FED0C
  if (crb(c,2)) { goto L_801FED40; } // 801FED10
  if (!crb(c,0)) { goto L_801FED24; } // 801FED14
  cmps(c,0,(int32_t)c->r[3],0); // 801FED18
  if (!crb(c,0)) { goto L_801FED30; } // 801FED1C
  goto L_801FEE4C; // 801FED20
L_801FED24:;
  cmps(c,0,(int32_t)c->r[3],3); // 801FED24
  if (!crb(c,0)) { goto L_801FEE4C; } // 801FED28
  goto L_801FED50; // 801FED2C
L_801FED30:;
  c->r[3]=c->r[31]|c->r[31]; // 801FED30
  c->r[4]=0u+0x00000001u; // 801FED34
  c->lr=0x801FED3Cu; f_802082A0(c); // 801FED38
  goto L_801FEE74; // 801FED3C
L_801FED40:;
  c->r[3]=c->r[31]|c->r[31]; // 801FED40
  c->r[4]=0u+0x00000001u; // 801FED44
  c->lr=0x801FED4Cu; f_802082A0(c); // 801FED48
  goto L_801FEE74; // 801FED4C
L_801FED50:;
  c->r[3]=0u+0x00000001u; // 801FED50
  c->r[4]=0u+0x80470000u; // 801FED54
  c->r[4]=c->r[4]+0x00007618u; // 801FED58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FED5C
  c->lr=0x801FED64u; f_803D3760(c); // 801FED60
  c->lr=0x801FED68u; f_80208B40(c); // 801FED64
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FED68
  c->r[3]=c->r[3]+0x00000018u; // 801FED6C
  c->lr=0x801FED74u; f_803D82E4(c); // 801FED70
  c->r[30]=c->r[3]|c->r[3]; // 801FED74
  c->lr=0x801FED7Cu; f_80208B4C(c); // 801FED78
  cmps(c,0,(int32_t)c->r[30],2); // 801FED7C
  if (crb(c,2)) { goto L_801FEDA8; } // 801FED80
  c->r[3]=0u+0x00000002u; // 801FED84
  c->r[4]=0u+0x80470000u; // 801FED88
  c->r[4]=c->r[4]+0x00007628u; // 801FED8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FED90
  c->lr=0x801FED98u; f_803D3760(c); // 801FED94
  c->r[3]=c->r[31]|c->r[31]; // 801FED98
  c->r[4]=0u+0x0000001Eu; // 801FED9C
  c->lr=0x801FEDA4u; f_801FB330(c); // 801FEDA0
  goto L_801FEE74; // 801FEDA4
L_801FEDA8:;
  c->r[3]=0u+0x00000001u; // 801FEDA8
  c->r[4]=0u+0x80470000u; // 801FEDAC
  c->r[4]=c->r[4]+0x00007658u; // 801FEDB0
  c->r[5]=R32(c->r[31]+0x00000D08u); // 801FEDB4
  c->r[5]=R32(c->r[5]+0x00000018u); // 801FEDB8
  c->r[5]=R8(c->r[5]+0x00000000u); // 801FEDBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEDC0
  c->lr=0x801FEDC8u; f_803D3760(c); // 801FEDC4
  c->r[3]=0u+0x00000001u; // 801FEDC8
  c->r[4]=0u+0x80470000u; // 801FEDCC
  c->r[4]=c->r[4]+0x00007664u; // 801FEDD0
  c->r[5]=R32(c->r[31]+0x00000D08u); // 801FEDD4
  c->r[5]=R32(c->r[5]+0x00000018u); // 801FEDD8
  c->r[5]=R8(c->r[5]+0x00000001u); // 801FEDDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEDE0
  c->lr=0x801FEDE8u; f_803D3760(c); // 801FEDE4
  c->lr=0x801FEDECu; f_80208B40(c); // 801FEDE8
  c->lr=0x801FEDF0u; f_803D82C8(c); // 801FEDEC
  c->r[30]=c->r[3]|c->r[3]; // 801FEDF0
  c->lr=0x801FEDF8u; f_80208B4C(c); // 801FEDF4
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FEDF8
  c->r[3]=R32(c->r[4]+0x00000018u); // 801FEDFC
  c->r[3]=R8(c->r[3]+0x00000000u); // 801FEE00
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801FEE04
  cmpu(c,0,c->r[3],c->r[0]); // 801FEE08
  if (!crb(c,2)) { goto L_801FEE28; } // 801FEE0C
  c->r[0]=0u+0x00000000u; // 801FEE10
  W16(c->r[4]+0x000006FCu,c->r[0]); // 801FEE14
  c->r[0]=0u+0x00000001u; // 801FEE18
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FEE1C
  W16(c->r[3]+0x000006FEu,c->r[0]); // 801FEE20
  goto L_801FEE3C; // 801FEE24
L_801FEE28:;
  c->r[0]=0u+0x00000001u; // 801FEE28
  W16(c->r[4]+0x000006FCu,c->r[0]); // 801FEE2C
  c->r[0]=0u+0x00000000u; // 801FEE30
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FEE34
  W16(c->r[3]+0x000006FEu,c->r[0]); // 801FEE38
L_801FEE3C:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEE3C
  c->r[4]=0u+0x00000001u; // 801FEE40
  c->lr=0x801FEE48u; f_802082A0(c); // 801FEE44
  goto L_801FEE74; // 801FEE48
L_801FEE4C:;
  c->r[0]=0u+0x00000000u; // 801FEE4C
  W32(c->r[31]+0x00000D40u,c->r[0]); // 801FEE50
  c->r[3]=c->r[31]+0x000006D4u; // 801FEE54
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FEE58
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FEE5C
  c->r[5]=0u+0x00001388u; // 801FEE60
  c->lr=0x801FEE68u; f_8020834C(c); // 801FEE64
  c->r[3]=c->r[31]|c->r[31]; // 801FEE68
  c->r[4]=0u+0x00000013u; // 801FEE6C
  c->lr=0x801FEE74u; f_801FB330(c); // 801FEE70
L_801FEE74:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FEE74
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FEE78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FEE7C
  c->lr=c->r[0]; // 801FEE80
  c->r[1]=c->r[1]+0x00000010u; // 801FEE84
  return; // 801FEE88
}

// fn_801FEE8C
void f_801FEE8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FEE8C
  c->r[0]=c->lr; // 801FEE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FEE94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FEE98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FEE9C
  c->r[31]=c->r[3]|c->r[3]; // 801FEEA0
  c->r[0]=R8(c->r[13]+0xFFFFBBE8u); // 801FEEA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FEEA8
  cmps(c,0,(int32_t)c->r[0],0); // 801FEEAC
  if (!crb(c,2)) { goto L_801FEEC8; } // 801FEEB0
  c->lr=0x801FEEB8u; f_80361BF4(c); // 801FEEB4
  W32(c->r[13]+0xFFFFBBE4u,c->r[4]); // 801FEEB8
  W32(c->r[13]+0xFFFFBBE0u,c->r[3]); // 801FEEBC
  c->r[0]=0u+0x00000001u; // 801FEEC0
  W8(c->r[13]+0xFFFFBBE8u,c->r[0]); // 801FEEC4
L_801FEEC8:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEEC8
  c->lr=0x801FEED0u; f_802082B4(c); // 801FEECC
  cmps(c,0,(int32_t)c->r[3],2); // 801FEED0
  if (crb(c,2)) { goto L_801FEF70; } // 801FEED4
  if (!crb(c,0)) { goto L_801FEEE8; } // 801FEED8
  cmps(c,0,(int32_t)c->r[3],0); // 801FEEDC
  if (crb(c,2)) { goto L_801FEEF4; } // 801FEEE0
  goto L_801FF050; // 801FEEE4
L_801FEEE8:;
  cmps(c,0,(int32_t)c->r[3],4); // 801FEEE8
  if (!crb(c,0)) { goto L_801FF050; } // 801FEEEC
  goto L_801FF004; // 801FEEF0
L_801FEEF4:;
  c->r[3]=0u+0x00000001u; // 801FEEF4
  c->r[4]=0u+0x80470000u; // 801FEEF8
  c->r[4]=c->r[4]+0x00007670u; // 801FEEFC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FEF00
  c->lr=0x801FEF08u; f_803D3760(c); // 801FEF04
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FEF08
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FEF0C
  cmps(c,0,(int32_t)c->r[0],2); // 801FEF10
  if (!crb(c,2)) { goto L_801FEF60; } // 801FEF14
  c->lr=0x801FEF1Cu; f_80361BF4(c); // 801FEF18
  c->r[5]=0u+0x80000000u; // 801FEF1C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FEF20
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FEF24
  c->r[5]=0u+0x10620000u; // 801FEF28
  c->r[5]=c->r[5]+0x00004DD3u; // 801FEF2C
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FEF30
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FEF34
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801FEF38
  c->r[0]=0u+0x00000000u; // 801FEF3C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FEF40
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FEF44
  W32(c->r[13]+0xFFFFBBE4u,c->r[4]); // 801FEF48
  W32(c->r[13]+0xFFFFBBE0u,c->r[0]); // 801FEF4C
  c->r[3]=c->r[31]|c->r[31]; // 801FEF50
  c->r[4]=0u+0x00000002u; // 801FEF54
  c->lr=0x801FEF5Cu; f_802082BC(c); // 801FEF58
  goto L_801FF050; // 801FEF5C
L_801FEF60:;
  c->r[3]=c->r[31]|c->r[31]; // 801FEF60
  c->r[4]=0u+0x00000001u; // 801FEF64
  c->lr=0x801FEF6Cu; f_802082A0(c); // 801FEF68
  goto L_801FF050; // 801FEF6C
L_801FEF70:;
  c->lr=0x801FEF74u; f_80361BF4(c); // 801FEF70
  c->r[5]=R32(c->r[13]+0xFFFFBBE0u); // 801FEF74
  c->r[6]=R32(c->r[13]+0xFFFFBBE4u); // 801FEF78
  c->r[0]=c->r[3]^0x80000000u; // 801FEF7C
  c->r[5]=c->r[5]^0x80000000u; // 801FEF80
  c->r[3]=addc(c,~c->r[6],c->r[4],1); // 801FEF84
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FEF88
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FEF8C
  c->r[5]=0u-c->r[5]; // 801FEF90
  cmps(c,0,(int32_t)c->r[5],0); // 801FEF94
  if (!crb(c,2)) { goto L_801FF050; } // 801FEF98
  c->r[3]=R32(c->r[31]+0x00000D38u); // 801FEF9C
  c->lr=0x801FEFA4u; f_801EF3D4(c); // 801FEFA0
  c->r[30]=c->r[3]|c->r[3]; // 801FEFA4
  cmps(c,0,(int32_t)c->r[3],0); // 801FEFA8
  if (crb(c,2)) { goto L_801FEFC8; } // 801FEFAC
  c->lr=0x801FEFB4u; f_802083F0(c); // 801FEFB0
  cmps(c,0,(int32_t)c->r[3],0); // 801FEFB4
  if (!crb(c,2)) { goto L_801FEFC8; } // 801FEFB8
  c->r[3]=c->r[30]|c->r[30]; // 801FEFBC
  c->r[4]=0u+0x00000001u; // 801FEFC0
  c->lr=0x801FEFC8u; f_802083E4(c); // 801FEFC4
L_801FEFC8:;
  c->lr=0x801FEFCCu; f_80361BF4(c); // 801FEFC8
  c->r[5]=0u+0x80000000u; // 801FEFCC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FEFD0
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FEFD4
  c->r[0]=rotl(c->r[5],6)&0xFFFFFFC0u; // 801FEFD8
  c->r[5]=c->r[0]+c->r[5]; // 801FEFDC
  c->r[0]=0u+0x00000000u; // 801FEFE0
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FEFE4
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FEFE8
  W32(c->r[13]+0xFFFFBBE4u,c->r[4]); // 801FEFEC
  W32(c->r[13]+0xFFFFBBE0u,c->r[0]); // 801FEFF0
  c->r[3]=c->r[31]|c->r[31]; // 801FEFF4
  c->r[4]=0u+0x00000001u; // 801FEFF8
  c->lr=0x801FF000u; f_802082A0(c); // 801FEFFC
  goto L_801FF050; // 801FF000
L_801FF004:;
  c->lr=0x801FF008u; f_80361BF4(c); // 801FF004
  c->r[0]=R32(c->r[13]+0xFFFFBBE0u); // 801FF008
  c->r[6]=R32(c->r[13]+0xFFFFBBE4u); // 801FF00C
  c->r[0]=c->r[0]^0x80000000u; // 801FF010
  c->r[5]=c->r[3]^0x80000000u; // 801FF014
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FF018
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FF01C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FF020
  c->r[5]=0u-c->r[5]; // 801FF024
  cmps(c,0,(int32_t)c->r[5],0); // 801FF028
  if (crb(c,2)) { goto L_801FF050; } // 801FF02C
  c->r[3]=0u+0x00000001u; // 801FF030
  c->r[4]=0u+0x80470000u; // 801FF034
  c->r[4]=c->r[4]+0x00007698u; // 801FF038
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF03C
  c->lr=0x801FF044u; f_803D3760(c); // 801FF040
  c->r[3]=c->r[31]|c->r[31]; // 801FF044
  c->r[4]=0u+0x0000001Eu; // 801FF048
  c->lr=0x801FF050u; f_801FB330(c); // 801FF04C
L_801FF050:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FF050
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FF054
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FF058
  c->lr=c->r[0]; // 801FF05C
  c->r[1]=c->r[1]+0x00000010u; // 801FF060
  return; // 801FF064
}

// fn_801FF068
void f_801FF068(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF068
  c->r[0]=c->lr; // 801FF06C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801FF070
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801FF074
  W32(c->r[1]+0x00000008u,c->r[30]); // 801FF078
  c->r[31]=c->r[3]|c->r[3]; // 801FF07C
  c->r[4]=R32(c->r[3]+0x00000D08u); // 801FF080
  c->r[0]=R32(c->r[4]+0x000006B0u); // 801FF084
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801FF088
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801FF08C
  c->r[3]=c->r[3]+c->r[0]; // 801FF090
  c->r[30]=c->r[3]+0x000003A8u; // 801FF094
  c->r[3]=0u+0x00000001u; // 801FF098
  c->r[4]=0u+0x80470000u; // 801FF09C
  c->r[4]=c->r[4]+0x000076E0u; // 801FF0A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF0A4
  c->lr=0x801FF0ACu; f_803D3760(c); // 801FF0A8
  c->r[5]=0u+0x00000000u; // 801FF0AC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FF0B0
  c->r[3]=R32(c->r[3]+0x00000700u); // 801FF0B4
  c->r[4]=c->r[3]+0x00000040u; // 801FF0B8
  c->r[0]=0u+0x00000003u; // 801FF0BC
  c->ctr=c->r[0]; // 801FF0C0
L_801FF0C4:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FF0C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006B8u); // 801FF0C8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF0CC
  if (!crb(c,2)) { goto L_801FF0E4; } // 801FF0D0
  c->r[3]=c->r[30]+c->r[5]; // 801FF0D4
  c->r[0]=R8(c->r[3]+0x00000010u); // 801FF0D8
  W32(c->r[4]+0x00000008u,c->r[0]); // 801FF0DC
  goto L_801FF0E8; // 801FF0E0
L_801FF0E4:;
  W32(c->r[4]+0x00000008u,c->r[0]); // 801FF0E4
L_801FF0E8:;
  c->r[5]=c->r[5]+0x00000001u; // 801FF0E8
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FF0EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006B8u); // 801FF0F0
  cmps(c,0,(int32_t)c->r[0],0); // 801FF0F4
  if (!crb(c,2)) { goto L_801FF10C; } // 801FF0F8
  c->r[3]=c->r[30]+c->r[5]; // 801FF0FC
  c->r[0]=R8(c->r[3]+0x00000010u); // 801FF100
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801FF104
  goto L_801FF110; // 801FF108
L_801FF10C:;
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801FF10C
L_801FF110:;
  c->r[5]=c->r[5]+0x00000001u; // 801FF110
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FF114
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006B8u); // 801FF118
  cmps(c,0,(int32_t)c->r[0],0); // 801FF11C
  if (!crb(c,2)) { goto L_801FF134; } // 801FF120
  c->r[3]=c->r[30]+c->r[5]; // 801FF124
  c->r[0]=R8(c->r[3]+0x00000010u); // 801FF128
  W32(c->r[4]+0x00000010u,c->r[0]); // 801FF12C
  goto L_801FF138; // 801FF130
L_801FF134:;
  W32(c->r[4]+0x00000010u,c->r[0]); // 801FF134
L_801FF138:;
  c->r[5]=c->r[5]+0x00000001u; // 801FF138
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FF13C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006B8u); // 801FF140
  cmps(c,0,(int32_t)c->r[0],0); // 801FF144
  if (!crb(c,2)) { goto L_801FF15C; } // 801FF148
  c->r[3]=c->r[30]+c->r[5]; // 801FF14C
  c->r[0]=R8(c->r[3]+0x00000010u); // 801FF150
  W32(c->r[4]+0x00000014u,c->r[0]); // 801FF154
  goto L_801FF160; // 801FF158
L_801FF15C:;
  W32(c->r[4]+0x00000014u,c->r[0]); // 801FF15C
L_801FF160:;
  c->r[5]=c->r[5]+0x00000001u; // 801FF160
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FF164
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006B8u); // 801FF168
  cmps(c,0,(int32_t)c->r[0],0); // 801FF16C
  if (!crb(c,2)) { goto L_801FF184; } // 801FF170
  c->r[3]=c->r[30]+c->r[5]; // 801FF174
  c->r[0]=R8(c->r[3]+0x00000010u); // 801FF178
  W32(c->r[4]+0x00000018u,c->r[0]); // 801FF17C
  goto L_801FF188; // 801FF180
L_801FF184:;
  W32(c->r[4]+0x00000018u,c->r[0]); // 801FF184
L_801FF188:;
  c->r[4]=c->r[4]+0x00000014u; // 801FF188
  c->r[5]=c->r[5]+0x00000001u; // 801FF18C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF0C4; } // 801FF190
  c->lr=0x801FF198u; f_802083FC(c); // 801FF194
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FF198
  c->r[4]=R32(c->r[4]+0x00000700u); // 801FF19C
  c->lr=0x801FF1A4u; f_80218164(c); // 801FF1A0
  c->lr=0x801FF1A8u; f_802083FC(c); // 801FF1A4
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FF1A8
  c->r[4]=R32(c->r[4]+0x00000700u); // 801FF1AC
  c->lr=0x801FF1B4u; f_80218208(c); // 801FF1B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801FF1B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801FF1B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801FF1BC
  c->lr=c->r[0]; // 801FF1C0
  c->r[1]=c->r[1]+0x00000010u; // 801FF1C4
  return; // 801FF1C8
}

// fn_801FF1CC
void f_801FF1CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF1CC
  c->r[0]=c->lr; // 801FF1D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FF1D4
  c->r[11]=c->r[1]+0x00000020u; // 801FF1D8
  c->lr=0x801FF1E0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF1DC
  c->r[28]=c->r[3]|c->r[3]; // 801FF1E0
  c->r[30]=R32(c->r[3]+0x00000D08u); // 801FF1E4
  c->r[0]=R8(c->r[30]+0x00000030u); // 801FF1E8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FF1EC
  c->r[3]=c->r[30]+c->r[0]; // 801FF1F0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801FF1F4
  c->r[31]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801FF1F8
  c->r[3]=c->r[30]+c->r[31]; // 801FF1FC
  c->r[29]=R32(c->r[3]+0x00000E24u); // 801FF200
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801FF204
  c->r[3]=0u+0x80470000u; // 801FF208
  c->r[0]=c->r[3]+0x00006378u; // 801FF20C
  c->r[3]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801FF210
  c->r[0]=c->r[0]+c->r[4]; // 801FF214
  c->r[27]=R32(c->r[3]+c->r[0]); // 801FF218
  c->r[3]=c->r[27]|c->r[27]; // 801FF21C
  c->lr=0x801FF224u; f_8021E91C(c); // 801FF220
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801FF224
  c->r[0]=R8(c->r[30]+0x0000003Au); // 801FF228
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FF22C
  c->r[3]=c->r[30]+c->r[0]; // 801FF230
  W16(c->r[3]+0x00000060u,c->r[4]); // 801FF234
  c->r[5]=R32(c->r[28]+0x00000D08u); // 801FF238
  c->r[30]=c->r[5]+0x00000208u; // 801FF23C
  c->r[3]=R32(c->r[28]+0x00000D38u); // 801FF240
  c->r[4]=0u+0x00000007u; // 801FF244
  c->r[0]=R8(c->r[5]+0x0000003Au); // 801FF248
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FF24C
  c->r[5]=c->r[5]+c->r[0]; // 801FF250
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000060u); // 801FF254
  c->r[5]=c->r[5]+0x00000006u; // 801FF258
  c->lr=0x801FF260u; f_801EF42C(c); // 801FF25C
  c->r[4]=c->r[3]|c->r[3]; // 801FF260
  c->r[3]=c->r[30]+0x00000024u; // 801FF264
  c->r[5]=0u+0x00000010u; // 801FF268
  c->lr=0x801FF270u; f_802E9608(c); // 801FF26C
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 801FF270
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)102); // 801FF274
  c->r[3]=0u+0x80470000u; // 801FF278
  c->r[4]=c->r[3]+0x000063D8u; // 801FF27C
  c->r[0]=c->r[4]+c->r[5]; // 801FF280
  c->r[3]=c->r[0]+c->r[6]; // 801FF284
  c->r[3]=R8(c->r[3]+0x0000001Fu); // 801FF288
  c->r[7]=0u+0x00000000u; // 801FF28C
  c->r[0]=c->r[6]+c->r[5]; // 801FF290
  c->r[4]=c->r[4]+c->r[0]; // 801FF294
  c->r[5]=c->r[30]|c->r[30]; // 801FF298
  c->ctr=c->r[3]; // 801FF29C
  cmps(c,0,(int32_t)c->r[3],0); // 801FF2A0
  if (!crb(c,1)) { goto L_801FF2D8; } // 801FF2A4
L_801FF2A8:;
  c->r[3]=R32(c->r[28]+0x00000D08u); // 801FF2A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006BAu); // 801FF2AC
  cmps(c,0,(int32_t)c->r[0],0); // 801FF2B0
  if (!crb(c,2)) { goto L_801FF2C4; } // 801FF2B4
  c->r[0]=R8(c->r[4]+0x00000010u); // 801FF2B8
  W32(c->r[5]+0x00000048u,c->r[0]); // 801FF2BC
  goto L_801FF2C8; // 801FF2C0
L_801FF2C4:;
  W32(c->r[5]+0x00000048u,c->r[0]); // 801FF2C4
L_801FF2C8:;
  c->r[4]=c->r[4]+0x00000001u; // 801FF2C8
  c->r[5]=c->r[5]+0x00000004u; // 801FF2CC
  c->r[7]=c->r[7]+0x00000001u; // 801FF2D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF2A8; } // 801FF2D4
L_801FF2D8:;
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801FF2D8
  c->r[5]=c->r[30]+c->r[0]; // 801FF2DC
  c->r[4]=0u+0xFFFFFFFFu; // 801FF2E0
  c->r[3]=addc(c,~c->r[7],0x0000000Fu,1); // 801FF2E4
  cmps(c,0,(int32_t)c->r[7],15); // 801FF2E8
  if (!crb(c,0)) { goto L_801FF340; } // 801FF2EC
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; // 801FF2F0
  cmpu(c,0,c->r[0],0x00000000u); // 801FF2F4
  c->ctr=c->r[0]; // 801FF2F8
  if (crb(c,2)) { goto L_801FF330; } // 801FF2FC
L_801FF300:;
  W32(c->r[5]+0x00000048u,c->r[4]); // 801FF300
  W32(c->r[5]+0x0000004Cu,c->r[4]); // 801FF304
  W32(c->r[5]+0x00000050u,c->r[4]); // 801FF308
  W32(c->r[5]+0x00000054u,c->r[4]); // 801FF30C
  W32(c->r[5]+0x00000058u,c->r[4]); // 801FF310
  W32(c->r[5]+0x0000005Cu,c->r[4]); // 801FF314
  W32(c->r[5]+0x00000060u,c->r[4]); // 801FF318
  W32(c->r[5]+0x00000064u,c->r[4]); // 801FF31C
  c->r[5]=c->r[5]+0x00000020u; // 801FF320
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF300; } // 801FF324
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801FF328
  if (crb(c,2)) { goto L_801FF340; } // 801FF32C
L_801FF330:;
  c->ctr=c->r[3]; // 801FF330
L_801FF334:;
  W32(c->r[5]+0x00000048u,c->r[4]); // 801FF334
  c->r[5]=c->r[5]+0x00000004u; // 801FF338
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801FF334; } // 801FF33C
L_801FF340:;
  c->r[0]=R32(c->r[28]+0x00000D08u); // 801FF340
  c->r[4]=c->r[0]+c->r[31]; // 801FF344
  c->r[3]=R32(c->r[4]+0x00000E24u); // 801FF348
  cmps(c,0,(int32_t)c->r[3],2); // 801FF34C
  if (!crb(c,0)) { goto L_801FF35C; } // 801FF350
  c->r[0]=c->r[3]+0x00000001u; // 801FF354
  W32(c->r[4]+0x00000E24u,c->r[0]); // 801FF358
L_801FF35C:;
  c->lr=0x801FF360u; f_802083FC(c); // 801FF35C
  c->r[4]=R32(c->r[28]+0x00000D08u); // 801FF360
  c->r[4]=R32(c->r[4]+0x00000704u); // 801FF364
  c->lr=0x801FF36Cu; f_80218164(c); // 801FF368
  c->r[11]=c->r[1]+0x00000020u; // 801FF36C
  c->lr=0x801FF374u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FF370
  c->r[0]=R32(c->r[1]+0x00000024u); // 801FF374
  c->lr=c->r[0]; // 801FF378
  c->r[1]=c->r[1]+0x00000020u; // 801FF37C
  return; // 801FF380
}

// fn_801FF384
void f_801FF384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FF384
  c->r[0]=c->lr; // 801FF388
  W32(c->r[1]+0x00000034u,c->r[0]); // 801FF38C
  c->r[11]=c->r[1]+0x00000030u; // 801FF390
  c->lr=0x801FF398u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801FF394
  c->r[30]=c->r[3]|c->r[3]; // 801FF398
  c->r[3]=R32(c->r[3]+0x00000D38u); // 801FF39C
  c->lr=0x801FF3A4u; f_801EF3D4(c); // 801FF3A0
  c->r[31]=c->r[3]|c->r[3]; // 801FF3A4
  c->r[0]=R8(c->r[13]+0xFFFFBC00u); // 801FF3A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF3AC
  cmps(c,0,(int32_t)c->r[0],0); // 801FF3B0
  if (!crb(c,2)) { goto L_801FF3CC; } // 801FF3B4
  c->lr=0x801FF3BCu; f_80361BF4(c); // 801FF3B8
  W32(c->r[13]+0xFFFFBBFCu,c->r[4]); // 801FF3BC
  W32(c->r[13]+0xFFFFBBF8u,c->r[3]); // 801FF3C0
  c->r[0]=0u+0x00000001u; // 801FF3C4
  W8(c->r[13]+0xFFFFBC00u,c->r[0]); // 801FF3C8
L_801FF3CC:;
  c->r[0]=R8(c->r[13]+0xFFFFBC10u); // 801FF3CC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF3D0
  cmps(c,0,(int32_t)c->r[0],0); // 801FF3D4
  if (!crb(c,2)) { goto L_801FF3F4; } // 801FF3D8
  c->r[0]=R32(c->r[13]+0xFFFFBBF8u); // 801FF3DC
  c->r[3]=R32(c->r[13]+0xFFFFBBFCu); // 801FF3E0
  W32(c->r[13]+0xFFFFBC0Cu,c->r[3]); // 801FF3E4
  W32(c->r[13]+0xFFFFBC08u,c->r[0]); // 801FF3E8
  c->r[0]=0u+0x00000001u; // 801FF3EC
  W8(c->r[13]+0xFFFFBC10u,c->r[0]); // 801FF3F0
L_801FF3F4:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FF3F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FF3F8
  cmps(c,0,(int32_t)c->r[0],2); // 801FF3FC
  if (crb(c,2)) { goto L_801FF428; } // 801FF400
  c->r[3]=0u+0x00000001u; // 801FF404
  c->r[4]=0u+0x80470000u; // 801FF408
  c->r[4]=c->r[4]+0x00007700u; // 801FF40C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF410
  c->lr=0x801FF418u; f_803D3760(c); // 801FF414
  c->r[3]=c->r[30]|c->r[30]; // 801FF418
  c->r[4]=0u+0x00000012u; // 801FF41C
  c->lr=0x801FF424u; f_801FB330(c); // 801FF420
  goto L_801FFDA0; // 801FF424
L_801FF428:;
  c->r[3]=c->r[30]|c->r[30]; // 801FF428
  c->lr=0x801FF430u; f_802082B4(c); // 801FF42C
  cmps(c,0,(int32_t)c->r[3],99); // 801FF430
  if (crb(c,2)) { goto L_801FF474; } // 801FF434
  if (!crb(c,0)) { goto L_801FF498; } // 801FF438
  cmps(c,0,(int32_t)c->r[3],0); // 801FF43C
  if (crb(c,2)) { goto L_801FF448; } // 801FF440
  goto L_801FF498; // 801FF444
L_801FF448:;
  c->lr=0x801FF44Cu; f_80361BF4(c); // 801FF448
  c->r[5]=0u+0x80000000u; // 801FF44C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FF450
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF454
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801FF458
  c->r[0]=0u+0x00000000u; // 801FF45C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FF460
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FF464
  W32(c->r[30]+0x0000004Cu,c->r[4]); // 801FF468
  W32(c->r[30]+0x00000048u,c->r[0]); // 801FF46C
  goto L_801FF4D0; // 801FF470
L_801FF474:;
  c->r[3]=0u+0x00000001u; // 801FF474
  c->r[4]=0u+0x80470000u; // 801FF478
  c->r[4]=c->r[4]+0x00007724u; // 801FF47C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF480
  c->lr=0x801FF488u; f_803D3760(c); // 801FF484
  c->r[3]=c->r[30]|c->r[30]; // 801FF488
  c->r[4]=0u+0x0000001Eu; // 801FF48C
  c->lr=0x801FF494u; f_801FB330(c); // 801FF490
  goto L_801FF4D0; // 801FF494
L_801FF498:;
  c->lr=0x801FF49Cu; f_80361BF4(c); // 801FF498
  c->r[0]=R32(c->r[30]+0x00000048u); // 801FF49C
  c->r[6]=R32(c->r[30]+0x0000004Cu); // 801FF4A0
  c->r[0]=c->r[0]^0x80000000u; // 801FF4A4
  c->r[5]=c->r[3]^0x80000000u; // 801FF4A8
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FF4AC
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FF4B0
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FF4B4
  c->r[5]=0u-c->r[5]; // 801FF4B8
  cmps(c,0,(int32_t)c->r[5],0); // 801FF4BC
  if (crb(c,2)) { goto L_801FF4D0; } // 801FF4C0
  c->r[3]=c->r[30]|c->r[30]; // 801FF4C4
  c->r[4]=0u+0x00000063u; // 801FF4C8
  c->lr=0x801FF4D0u; f_802082BC(c); // 801FF4CC
L_801FF4D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801FF4D0
  c->lr=0x801FF4D8u; f_802082B4(c); // 801FF4D4
  cmps(c,0,(int32_t)c->r[3],4); // 801FF4D8
  if (crb(c,2)) { goto L_801FF9D0; } // 801FF4DC
  if (!crb(c,0)) { goto L_801FF508; } // 801FF4E0
  cmps(c,0,(int32_t)c->r[3],1); // 801FF4E4
  if (crb(c,2)) { goto L_801FF618; } // 801FF4E8
  if (!crb(c,0)) { goto L_801FF4FC; } // 801FF4EC
  cmps(c,0,(int32_t)c->r[3],0); // 801FF4F0
  if (!crb(c,0)) { goto L_801FF520; } // 801FF4F4
  goto L_801FFDA0; // 801FF4F8
L_801FF4FC:;
  cmps(c,0,(int32_t)c->r[3],3); // 801FF4FC
  if (!crb(c,0)) { goto L_801FF8DC; } // 801FF500
  goto L_801FF700; // 801FF504
L_801FF508:;
  cmps(c,0,(int32_t)c->r[3],30); // 801FF508
  if (crb(c,2)) { goto L_801FFD08; } // 801FF50C
  if (!crb(c,0)) { goto L_801FFDA0; } // 801FF510
  cmps(c,0,(int32_t)c->r[3],29); // 801FF514
  if (!crb(c,0)) { goto L_801FFB90; } // 801FF518
  goto L_801FFDA0; // 801FF51C
L_801FF520:;
  c->r[0]=0u+0x00000000u; // 801FF520
  W32(c->r[13]+0xFFFFBC14u,c->r[0]); // 801FF524
  W32(c->r[13]+0xFFFFBC18u,c->r[0]); // 801FF528
  c->r[3]=0u+0x00000008u; // 801FF52C
  c->r[4]=0u+0x80470000u; // 801FF530
  c->r[4]=c->r[4]+0x0000776Cu; // 801FF534
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF538
  c->lr=0x801FF540u; f_803D3760(c); // 801FF53C
  cmps(c,0,(int32_t)c->r[31],0); // 801FF540
  if (crb(c,2)) { goto L_801FF56C; } // 801FF544
  c->r[3]=R32(c->r[30]+0x00000D38u); // 801FF548
  c->r[4]=0u+0x00000008u; // 801FF54C
  c->r[5]=0u+0x00000005u; // 801FF550
  c->lr=0x801FF558u; f_801EF42C(c); // 801FF554
  c->r[4]=c->r[3]|c->r[3]; // 801FF558
  c->r[3]=c->r[31]|c->r[31]; // 801FF55C
  {uint32_t ea=c->r[2]+0xFFFF96D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801FF560
  c->f[2]=c->f[1]; // 801FF564
  c->lr=0x801FF56Cu; f_801EE3D0(c); // 801FF568
L_801FF56C:;
  c->r[3]=0u+0x00000000u; // 801FF56C
  W8(c->r[13]+0xFFFFBC11u,c->r[3]); // 801FF570
  c->r[0]=0u+0x000000FFu; // 801FF574
  W8(c->r[13]+0xFFFFBC12u,c->r[0]); // 801FF578
  W32(c->r[13]+0xFFFFBBFCu,c->r[3]); // 801FF57C
  W32(c->r[13]+0xFFFFBBF8u,c->r[3]); // 801FF580
  W32(c->r[13]+0xFFFFBC0Cu,c->r[3]); // 801FF584
  W32(c->r[13]+0xFFFFBC08u,c->r[3]); // 801FF588
  c->r[0]=0u+0xFFFFFFFFu; // 801FF58C
  W8(c->r[13]+0xFFFFBBE9u,c->r[0]); // 801FF590
  c->r[4]=0u+0x804E0000u; // 801FF594
  c->r[3]=c->r[4]+0xFFFFA308u; // 801FF598
  W32(c->r[3]+0x00000004u,c->r[0]); // 801FF59C
  W32(c->r[4]+0xFFFFA308u,c->r[0]); // 801FF5A0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801FF5A4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801FF5A8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801FF5AC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FF5B0
  c->lr=0x801FF5B8u; f_80361C0C(c); // 801FF5B4
  c->r[4]=0u+0x80000000u; // 801FF5B8
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801FF5BC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF5C0
  c->r[4]=0u+0x10620000u; // 801FF5C4
  c->r[4]=c->r[4]+0x00004DD3u; // 801FF5C8
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FF5CC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FF5D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 801FF5D4
  c->r[0]=c->r[0]+c->r[3]; // 801FF5D8
  W32(c->r[13]+0xFFFFBBECu,c->r[0]); // 801FF5DC
  c->r[3]=c->r[30]+0x000006D4u; // 801FF5E0
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FF5E4
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FF5E8
  c->r[5]=0u+0x00004650u; // 801FF5EC
  c->lr=0x801FF5F4u; f_8020834C(c); // 801FF5F0
  c->lr=0x801FF5F8u; f_80361BF4(c); // 801FF5F4
  W32(c->r[13]+0xFFFFBBF4u,c->r[4]); // 801FF5F8
  W32(c->r[13]+0xFFFFBBF0u,c->r[3]); // 801FF5FC
  c->r[0]=0u+0x00000003u; // 801FF600
  W32(c->r[13]+0xFFFFBC20u,c->r[0]); // 801FF604
  c->r[3]=c->r[30]|c->r[30]; // 801FF608
  c->r[4]=0u+0x00000001u; // 801FF60C
  c->lr=0x801FF614u; f_802082A0(c); // 801FF610
  goto L_801FFDA0; // 801FF614
L_801FF618:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FF618
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FF61C
  cmps(c,0,(int32_t)c->r[0],0); // 801FF620
  if (!crb(c,2)) { goto L_801FF6B4; } // 801FF624
  c->r[3]=0u+0x00000001u; // 801FF628
  c->r[4]=0u+0x80470000u; // 801FF62C
  c->r[4]=c->r[4]+0x00007110u; // 801FF630
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF634
  c->lr=0x801FF63Cu; f_803D3760(c); // 801FF638
  c->lr=0x801FF640u; f_80361C0C(c); // 801FF63C
  c->r[29]=0u+0x80000000u; // 801FF640
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801FF644
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF648
  c->r[28]=0u+0x10620000u; // 801FF64C
  c->r[4]=c->r[28]+0x00004DD3u; // 801FF650
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FF654
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FF658
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801FF65C
  c->r[0]=c->r[0]+c->r[4]; // 801FF660
  c->r[0]=c->r[0]+c->r[3]; // 801FF664
  W32(c->r[13]+0xFFFFBBECu,c->r[0]); // 801FF668
  c->lr=0x801FF670u; f_80361BF4(c); // 801FF66C
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801FF670
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF674
  c->r[5]=c->r[28]+0x00004DD3u; // 801FF678
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FF67C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FF680
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)300); // 801FF684
  c->r[0]=0u+0x00000000u; // 801FF688
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FF68C
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FF690
  W32(c->r[13]+0xFFFFBBF4u,c->r[4]); // 801FF694
  W32(c->r[13]+0xFFFFBBF0u,c->r[0]); // 801FF698
  c->r[0]=0u+0x00000003u; // 801FF69C
  W32(c->r[13]+0xFFFFBC1Cu,c->r[0]); // 801FF6A0
  c->r[3]=c->r[30]|c->r[30]; // 801FF6A4
  c->r[4]=0u+0x00000004u; // 801FF6A8
  c->lr=0x801FF6B0u; f_802082BC(c); // 801FF6AC
  goto L_801FFDA0; // 801FF6B0
L_801FF6B4:;
  c->r[3]=0u+0x00000001u; // 801FF6B4
  c->r[4]=0u+0x80470000u; // 801FF6B8
  c->r[4]=c->r[4]+0x00007120u; // 801FF6BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF6C0
  c->lr=0x801FF6C8u; f_803D3760(c); // 801FF6C4
  c->lr=0x801FF6CCu; f_80361BF4(c); // 801FF6C8
  c->r[5]=0u+0x80000000u; // 801FF6CC
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FF6D0
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF6D4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 801FF6D8
  c->r[0]=0u+0x00000000u; // 801FF6DC
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FF6E0
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FF6E4
  W32(c->r[13]+0xFFFFBBF4u,c->r[4]); // 801FF6E8
  W32(c->r[13]+0xFFFFBBF0u,c->r[0]); // 801FF6EC
  c->r[3]=c->r[30]|c->r[30]; // 801FF6F0
  c->r[4]=0u+0x00000001u; // 801FF6F4
  c->lr=0x801FF6FCu; f_802082A0(c); // 801FF6F8
  goto L_801FFDA0; // 801FF6FC
L_801FF700:;
  c->lr=0x801FF704u; f_80208B40(c); // 801FF700
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FF704
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FF708
  c->lr=0x801FF710u; f_803D8328(c); // 801FF70C
  c->r[28]=c->r[3]|c->r[3]; // 801FF710
  c->lr=0x801FF718u; f_80208B4C(c); // 801FF714
  cmps(c,0,(int32_t)c->r[28],0); // 801FF718
  if (!crb(c,2)) { goto L_801FF740; } // 801FF71C
  c->r[3]=0u+0x00000002u; // 801FF720
  c->r[4]=0u+0x80470000u; // 801FF724
  c->r[4]=c->r[4]+0x00007798u; // 801FF728
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF72C
  c->lr=0x801FF734u; f_803D3760(c); // 801FF730
  c->r[3]=c->r[30]|c->r[30]; // 801FF734
  c->r[4]=0u+0x0000001Eu; // 801FF738
  c->lr=0x801FF740u; f_801FB330(c); // 801FF73C
L_801FF740:;
  c->lr=0x801FF744u; f_80361BF4(c); // 801FF740
  W32(c->r[13]+0xFFFFBC0Cu,c->r[4]); // 801FF744
  W32(c->r[13]+0xFFFFBC08u,c->r[3]); // 801FF748
  c->r[3]=c->r[30]+0x000006D4u; // 801FF74C
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FF750
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FF754
  c->r[5]=c->r[1]+0x0000000Cu; // 801FF758
  c->r[6]=0u+0x00000000u; // 801FF75C
  c->lr=0x801FF764u; f_8020BD84(c); // 801FF760
  cmps(c,0,(int32_t)c->r[3],0); // 801FF764
  if (crb(c,2)) { goto L_801FF82C; } // 801FF768
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FF76C
  cmpu(c,0,c->r[0],0x00000002u); // 801FF770
  if (!crb(c,2)) { goto L_801FF82C; } // 801FF774
  c->r[3]=R16(c->r[3]+0x00000000u); // 801FF778
  c->r[0]=rotl(c->r[3],0)&0x00003FFFu; // 801FF77C
  cmpu(c,0,c->r[0],0x00003A5Cu); // 801FF780
  if (!crb(c,2)) { goto L_801FF82C; } // 801FF784
  c->r[28]=rotl(c->r[3],18)&0x00000003u; // 801FF788
  c->r[3]=0u+0x00000001u; // 801FF78C
  c->r[4]=0u+0x80470000u; // 801FF790
  c->r[4]=c->r[4]+0x000077D4u; // 801FF794
  c->r[5]=c->r[28]|c->r[28]; // 801FF798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF79C
  c->lr=0x801FF7A4u; f_803D3760(c); // 801FF7A0
  cmps(c,0,(int32_t)c->r[28],0); // 801FF7A4
  if (!crb(c,2)) { goto L_801FF7B8; } // 801FF7A8
  c->r[0]=R8(c->r[13]+0xFFFFBC12u); // 801FF7AC
  cmpu(c,0,c->r[0],0x000000FFu); // 801FF7B0
  if (!crb(c,2)) { goto L_801FF7BC; } // 801FF7B4
L_801FF7B8:;
  W8(c->r[13]+0xFFFFBC12u,c->r[28]); // 801FF7B8
L_801FF7BC:;
  c->lr=0x801FF7C0u; f_80361C0C(c); // 801FF7BC
  c->r[4]=0u+0x80000000u; // 801FF7C0
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801FF7C4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF7C8
  c->r[4]=0u+0x10620000u; // 801FF7CC
  c->r[4]=c->r[4]+0x00004DD3u; // 801FF7D0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FF7D4
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FF7D8
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 801FF7DC
  c->r[0]=c->r[0]+c->r[4]; // 801FF7E0
  c->r[0]=c->r[0]+c->r[3]; // 801FF7E4
  W32(c->r[13]+0xFFFFBBECu,c->r[0]); // 801FF7E8
  c->r[0]=R8(c->r[13]+0xFFFFBBE9u); // 801FF7EC
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801FF7F0
  cmps(c,0,(int32_t)c->r[4],0); // 801FF7F4
  if (crb(c,0)) { goto L_801FF82C; } // 801FF7F8
  cmps(c,0,(int32_t)c->r[4],3); // 801FF7FC
  if (!crb(c,0)) { goto L_801FF82C; } // 801FF800
  c->r[3]=R32(c->r[13]+0xFFFFBBFCu); // 801FF804
  c->r[0]=R32(c->r[13]+0xFFFFBC0Cu); // 801FF808
  c->r[6]=c->r[0]-c->r[3]; // 801FF80C
  c->r[5]=sraw(c,c->r[6],31); // 801FF810
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801FF814
  c->r[3]=0u+0x804E0000u; // 801FF818
  c->r[0]=c->r[3]+0xFFFFA308u; // 801FF81C
  c->r[3]=c->r[0]+c->r[4]; // 801FF820
  W32(c->r[3]+0x00000004u,c->r[6]); // 801FF824
  W32(c->r[3]+0x00000000u,c->r[5]); // 801FF828
L_801FF82C:;
  c->r[0]=R8(c->r[13]+0xFFFFBC12u); // 801FF82C
  cmpu(c,0,c->r[0],0x000000FFu); // 801FF830
  if (!crb(c,2)) { goto L_801FF8C0; } // 801FF834
  c->r[0]=R32(c->r[13]+0xFFFFBC1Cu); // 801FF838
  cmps(c,0,(int32_t)c->r[0],0); // 801FF83C
  if (!crb(c,1)) { goto L_801FF8C0; } // 801FF840
  c->lr=0x801FF848u; f_80361BF4(c); // 801FF844
  c->r[0]=R32(c->r[13]+0xFFFFBBF0u); // 801FF848
  c->r[6]=R32(c->r[13]+0xFFFFBBF4u); // 801FF84C
  c->r[0]=c->r[0]^0x80000000u; // 801FF850
  c->r[5]=c->r[3]^0x80000000u; // 801FF854
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 801FF858
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 801FF85C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FF860
  c->r[5]=0u-c->r[5]; // 801FF864
  cmps(c,0,(int32_t)c->r[5],0); // 801FF868
  if (crb(c,2)) { goto L_801FF8C0; } // 801FF86C
  c->r[3]=R32(c->r[13]+0xFFFFBC1Cu); // 801FF870
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801FF874
  W32(c->r[13]+0xFFFFBC1Cu,c->r[0]); // 801FF878
  c->lr=0x801FF880u; f_80361BF4(c); // 801FF87C
  c->r[5]=0u+0x80000000u; // 801FF880
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801FF884
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FF888
  c->r[5]=0u+0x10620000u; // 801FF88C
  c->r[5]=c->r[5]+0x00004DD3u; // 801FF890
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FF894
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FF898
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)120); // 801FF89C
  c->r[0]=0u+0x00000000u; // 801FF8A0
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 801FF8A4
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 801FF8A8
  W32(c->r[13]+0xFFFFBBF4u,c->r[4]); // 801FF8AC
  W32(c->r[13]+0xFFFFBBF0u,c->r[0]); // 801FF8B0
  c->r[3]=c->r[30]|c->r[30]; // 801FF8B4
  c->r[4]=0u+0x00000004u; // 801FF8B8
  c->lr=0x801FF8C0u; f_802082BC(c); // 801FF8BC
L_801FF8C0:;
  c->r[0]=R8(c->r[13]+0xFFFFBC12u); // 801FF8C0
  cmpu(c,0,c->r[0],0x00000003u); // 801FF8C4
  if (crb(c,1)) { goto L_801FFDA0; } // 801FF8C8
  c->r[3]=c->r[30]|c->r[30]; // 801FF8CC
  c->r[4]=0u+0x00000001u; // 801FF8D0
  c->lr=0x801FF8D8u; f_802082A0(c); // 801FF8D4
  goto L_801FFDA0; // 801FF8D8
L_801FF8DC:;
  c->r[0]=R8(c->r[13]+0xFFFFBC12u); // 801FF8DC
  cmps(c,0,(int32_t)c->r[0],2); // 801FF8E0
  if (crb(c,2)) { goto L_801FF920; } // 801FF8E4
  if (!crb(c,0)) { goto L_801FF8FC; } // 801FF8E8
  cmps(c,0,(int32_t)c->r[0],0); // 801FF8EC
  if (crb(c,2)) { goto L_801FF908; } // 801FF8F0
  if (!crb(c,0)) { goto L_801FF914; } // 801FF8F4
  goto L_801FF994; // 801FF8F8
L_801FF8FC:;
  cmps(c,0,(int32_t)c->r[0],4); // 801FF8FC
  if (!crb(c,0)) { goto L_801FF994; } // 801FF900
  goto L_801FF92C; // 801FF904
L_801FF908:;
  c->r[0]=0u+0x00000001u; // 801FF908
  W8(c->r[13]+0xFFFFBC11u,c->r[0]); // 801FF90C
  goto L_801FF994; // 801FF910
L_801FF914:;
  c->r[0]=0u+0x00000002u; // 801FF914
  W8(c->r[13]+0xFFFFBC11u,c->r[0]); // 801FF918
  goto L_801FF994; // 801FF91C
L_801FF920:;
  c->r[0]=0u+0x00000003u; // 801FF920
  W8(c->r[13]+0xFFFFBC11u,c->r[0]); // 801FF924
  goto L_801FF994; // 801FF928
L_801FF92C:;
  c->r[0]=R8(c->r[13]+0xFFFFBC11u); // 801FF92C
  cmpu(c,0,c->r[0],0x00000003u); // 801FF930
  if (!crb(c,2)) { goto L_801FF98C; } // 801FF934
  c->r[0]=R32(c->r[13]+0xFFFFBC18u); // 801FF938
  cmps(c,0,(int32_t)c->r[0],0); // 801FF93C
  if (crb(c,2)) { goto L_801FF98C; } // 801FF940
  c->r[0]=R32(c->r[13]+0xFFFFBC14u); // 801FF944
  cmps(c,0,(int32_t)c->r[0],0); // 801FF948
  if (crb(c,2)) { goto L_801FF960; } // 801FF94C
  c->r[3]=c->r[30]|c->r[30]; // 801FF950
  c->r[4]=0u+0x0000001Eu; // 801FF954
  c->lr=0x801FF95Cu; f_802082BC(c); // 801FF958
  goto L_801FFDA0; // 801FF95C
L_801FF960:;
  c->r[3]=0u+0x00000001u; // 801FF960
  c->r[4]=0u+0x80470000u; // 801FF964
  c->r[4]=c->r[4]+0x00007210u; // 801FF968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF96C
  c->lr=0x801FF974u; f_803D3760(c); // 801FF970
  c->r[3]=c->r[30]|c->r[30]; // 801FF974
  c->r[4]=0u+0x0000001Du; // 801FF978
  c->lr=0x801FF980u; f_802082BC(c); // 801FF97C
  c->r[0]=0u+0x00000001u; // 801FF980
  W32(c->r[13]+0xFFFFBC14u,c->r[0]); // 801FF984
  goto L_801FFDA0; // 801FF988
L_801FF98C:;
  c->r[0]=0u+0x00000003u; // 801FF98C
  W8(c->r[13]+0xFFFFBC11u,c->r[0]); // 801FF990
L_801FF994:;
  c->lr=0x801FF998u; f_80361C0C(c); // 801FF994
  c->r[0]=R32(c->r[13]+0xFFFFBBECu); // 801FF998
  cmpu(c,0,c->r[3],c->r[0]); // 801FF99C
  if (!crb(c,0)) { goto L_801FF9C0; } // 801FF9A0
  c->r[0]=R32(c->r[13]+0xFFFFBC14u); // 801FF9A4
  cmps(c,0,(int32_t)c->r[0],0); // 801FF9A8
  if (!crb(c,2)) { goto L_801FFDA0; } // 801FF9AC
  c->r[3]=c->r[30]|c->r[30]; // 801FF9B0
  c->r[4]=0u+0x00000002u; // 801FF9B4
  c->lr=0x801FF9BCu; f_802082BC(c); // 801FF9B8
  goto L_801FFDA0; // 801FF9BC
L_801FF9C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801FF9C0
  c->r[4]=0u+0x00000001u; // 801FF9C4
  c->lr=0x801FF9CCu; f_802082A0(c); // 801FF9C8
  goto L_801FFDA0; // 801FF9CC
L_801FF9D0:;
  c->r[3]=0u+0x00000001u; // 801FF9D0
  c->r[4]=0u+0x80470000u; // 801FF9D4
  c->r[4]=c->r[4]+0x000077F8u; // 801FF9D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FF9DC
  c->lr=0x801FF9E4u; f_803D3760(c); // 801FF9E0
  c->r[3]=c->r[30]+0x000006D4u; // 801FF9E4
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FF9E8
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FF9EC
  c->lr=0x801FF9F4u; f_8020BF40(c); // 801FF9F0
  cmps(c,0,(int32_t)c->r[3],0); // 801FF9F4
  if (crb(c,2)) { goto L_801FFB40; } // 801FF9F8
  c->r[3]=R8(c->r[13]+0xFFFFBC11u); // 801FF9FC
  c->r[0]=R16(c->r[1]+0x00000008u); // 801FFA00
  c->r[0]=(rotl(c->r[3],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 801FFA04
  c->r[3]=0u+0x00003A5Cu; // 801FFA08
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801FFA0C
  c->r[0]=(rotl(c->r[3],0)&0x00003FFFu)|(c->r[0]&~0x00003FFFu); // 801FFA10
  W16(c->r[1]+0x00000008u,c->r[0]); // 801FFA14
  c->r[3]=c->r[30]+0x000006D4u; // 801FFA18
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FFA1C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FFA20
  c->r[5]=0u+0x00004650u; // 801FFA24
  c->lr=0x801FFA2Cu; f_8020834C(c); // 801FFA28
  c->r[3]=c->r[30]+0x000006D4u; // 801FFA2C
  c->r[4]=R32(c->r[30]+0x00000D08u); // 801FFA30
  c->r[4]=R8(c->r[4]+0x0000003Au); // 801FFA34
  c->r[5]=c->r[1]+0x00000008u; // 801FFA38
  c->r[6]=0u+0x00000002u; // 801FFA3C
  c->r[7]=0u+0x00000000u; // 801FFA40
  c->lr=0x801FFA48u; f_8020BFE0(c); // 801FFA44
  cmps(c,0,(int32_t)c->r[3],0); // 801FFA48
  if (crb(c,2)) { goto L_801FFB80; } // 801FFA4C
  c->r[3]=0u+0x00000001u; // 801FFA50
  c->r[4]=0u+0x80470000u; // 801FFA54
  c->r[4]=c->r[4]+0x00007248u; // 801FFA58
  c->r[5]=R8(c->r[13]+0xFFFFBC11u); // 801FFA5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFA60
  c->lr=0x801FFA68u; f_803D3760(c); // 801FFA64
  c->r[0]=R32(c->r[13]+0xFFFFBC18u); // 801FFA68
  cmps(c,0,(int32_t)c->r[0],0); // 801FFA6C
  if (!crb(c,2)) { goto L_801FFA9C; } // 801FFA70
  c->r[0]=R8(c->r[13]+0xFFFFBC11u); // 801FFA74
  cmpu(c,0,c->r[0],0x00000003u); // 801FFA78
  if (!crb(c,2)) { goto L_801FFA9C; } // 801FFA7C
  c->r[3]=R32(c->r[13]+0xFFFFBC20u); // 801FFA80
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801FFA84
  W32(c->r[13]+0xFFFFBC20u,c->r[0]); // 801FFA88
  cmps(c,0,(int32_t)c->r[0],1); // 801FFA8C
  if (!crb(c,0)) { goto L_801FFA9C; } // 801FFA90
  c->r[0]=0u+0x00000001u; // 801FFA94
  W32(c->r[13]+0xFFFFBC18u,c->r[0]); // 801FFA98
L_801FFA9C:;
  c->lr=0x801FFAA0u; f_80361C0C(c); // 801FFA9C
  c->r[4]=0u+0x80000000u; // 801FFAA0
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801FFAA4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FFAA8
  c->r[4]=0u+0x10620000u; // 801FFAAC
  c->r[4]=c->r[4]+0x00004DD3u; // 801FFAB0
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 801FFAB4
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FFAB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)720); // 801FFABC
  c->r[0]=c->r[0]+c->r[3]; // 801FFAC0
  W32(c->r[13]+0xFFFFBBECu,c->r[0]); // 801FFAC4
  c->lr=0x801FFACCu; f_80361BF4(c); // 801FFAC8
  W32(c->r[13]+0xFFFFBBFCu,c->r[4]); // 801FFACC
  W32(c->r[13]+0xFFFFBBF8u,c->r[3]); // 801FFAD0
  c->r[6]=R8(c->r[13]+0xFFFFBBE9u); // 801FFAD4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 801FFAD8
  cmps(c,0,(int32_t)c->r[0],0); // 801FFADC
  if (!crb(c,0)) { goto L_801FFAF0; } // 801FFAE0
  c->r[0]=c->r[6]+0x00000001u; // 801FFAE4
  W8(c->r[13]+0xFFFFBBE9u,c->r[0]); // 801FFAE8
  goto L_801FFB80; // 801FFAEC
L_801FFAF0:;
  cmps(c,0,(int32_t)c->r[0],2); // 801FFAF0
  if (!crb(c,0)) { goto L_801FFB80; } // 801FFAF4
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801FFAF8
  c->r[3]=0u+0x804E0000u; // 801FFAFC
  c->r[0]=c->r[3]+0xFFFFA308u; // 801FFB00
  c->r[3]=c->r[0]+c->r[4]; // 801FFB04
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FFB08
  c->r[5]=R32(c->r[3]+0x00000004u); // 801FFB0C
  c->r[3]=0u+0x00000000u; // 801FFB10
  c->r[0]=c->r[0]^0x80000000u; // 801FFB14
  c->r[4]=c->r[3]^0x80000000u; // 801FFB18
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 801FFB1C
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801FFB20
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FFB24
  c->r[4]=0u-c->r[4]; // 801FFB28
  cmps(c,0,(int32_t)c->r[4],0); // 801FFB2C
  if (!crb(c,2)) { goto L_801FFB80; } // 801FFB30
  c->r[0]=c->r[6]+0x00000001u; // 801FFB34
  W8(c->r[13]+0xFFFFBBE9u,c->r[0]); // 801FFB38
  goto L_801FFB80; // 801FFB3C
L_801FFB40:;
  c->r[3]=0u+0x00000002u; // 801FFB40
  c->r[4]=0u+0x80470000u; // 801FFB44
  c->r[4]=c->r[4]+0x00007818u; // 801FFB48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFB4C
  c->lr=0x801FFB54u; f_803D3760(c); // 801FFB50
  c->lr=0x801FFB58u; f_80208B40(c); // 801FFB54
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FFB58
  c->r[3]=R8(c->r[3]+0x0000003Au); // 801FFB5C
  c->lr=0x801FFB64u; f_803D8328(c); // 801FFB60
  c->r[28]=c->r[3]|c->r[3]; // 801FFB64
  c->lr=0x801FFB6Cu; f_80208B4C(c); // 801FFB68
  cmps(c,0,(int32_t)c->r[28],0); // 801FFB6C
  if (!crb(c,2)) { goto L_801FFB80; } // 801FFB70
  c->r[3]=c->r[30]|c->r[30]; // 801FFB74
  c->r[4]=0u+0x0000001Eu; // 801FFB78
  c->lr=0x801FFB80u; f_801FB330(c); // 801FFB7C
L_801FFB80:;
  c->r[3]=c->r[30]|c->r[30]; // 801FFB80
  c->r[4]=0u+0x00000002u; // 801FFB84
  c->lr=0x801FFB8Cu; f_802082BC(c); // 801FFB88
  goto L_801FFDA0; // 801FFB8C
L_801FFB90:;
  c->r[3]=0u+0x00000001u; // 801FFB90
  c->r[4]=0u+0x80470000u; // 801FFB94
  c->r[4]=c->r[4]+0x00007850u; // 801FFB98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFB9C
  c->lr=0x801FFBA4u; f_803D3760(c); // 801FFBA0
  c->r[28]=0u+0x00000000u; // 801FFBA4
  W32(c->r[13]+0xFFFFBBECu,c->r[28]); // 801FFBA8
  W16(c->r[1]+0x0000000Cu,c->r[28]); // 801FFBAC
  c->r[26]=0u+0x00000000u; // 801FFBB0
  c->r[3]=0u+0x804E0000u; // 801FFBB4
  c->r[27]=c->r[3]+0xFFFFA308u; // 801FFBB8
  c->r[31]=0u+0x80470000u; // 801FFBBC
  c->r[29]=c->r[28]^0x80000000u; // 801FFBC0
L_801FFBC4:;
  c->r[3]=0u+0x00000001u; // 801FFBC4
  c->r[4]=c->r[31]+0x000072C0u; // 801FFBC8
  c->r[5]=c->r[26]|c->r[26]; // 801FFBCC
  c->r[6]=R32(c->r[27]+0x00000004u); // 801FFBD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFBD4
  c->lr=0x801FFBDCu; f_803D3760(c); // 801FFBD8
  c->r[0]=R32(c->r[27]+0x00000000u); // 801FFBDC
  c->r[4]=R32(c->r[27]+0x00000004u); // 801FFBE0
  c->r[3]=c->r[0]^0x80000000u; // 801FFBE4
  c->r[0]=addc(c,~c->r[4],c->r[28],1); // 801FFBE8
  c->r[3]=addc(c,~c->r[3],c->r[29],c->xer_ca); // 801FFBEC
  c->r[3]=addc(c,~c->r[29],c->r[29],c->xer_ca); // 801FFBF0
  c->r[3]=0u-c->r[3]; // 801FFBF4
  cmps(c,0,(int32_t)c->r[3],0); // 801FFBF8
  if (crb(c,2)) { goto L_801FFC18; } // 801FFBFC
  c->r[0]=R32(c->r[13]+0xFFFFBBECu); // 801FFC00
  c->r[0]=c->r[0]+c->r[4]; // 801FFC04
  W32(c->r[13]+0xFFFFBBECu,c->r[0]); // 801FFC08
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FFC0C
  c->r[0]=c->r[3]+0x00000001u; // 801FFC10
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801FFC14
L_801FFC18:;
  c->r[27]=c->r[27]+0x00000008u; // 801FFC18
  c->r[26]=c->r[26]+0x00000001u; // 801FFC1C
  cmps(c,0,(int32_t)c->r[26],3); // 801FFC20
  if (crb(c,0)) { IRQCHK(c); goto L_801FFBC4; } // 801FFC24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x0000000Cu); // 801FFC28
  cmps(c,0,(int32_t)c->r[0],0); // 801FFC2C
  if (!crb(c,1)) { goto L_801FFC44; } // 801FFC30
  c->r[3]=R32(c->r[13]+0xFFFFBBECu); // 801FFC34
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801FFC38
  c->r[4]=divwu(c->r[3],c->r[0]); // 801FFC3C
  goto L_801FFC64; // 801FFC40
L_801FFC44:;
  c->r[3]=0u+0x80000000u; // 801FFC44
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801FFC48
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FFC4C
  c->r[3]=0u+0x10620000u; // 801FFC50
  c->r[3]=c->r[3]+0x00004DD3u; // 801FFC54
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801FFC58
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FFC5C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801FFC60
L_801FFC64:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FFC64
  c->r[0]=R8(c->r[3]+0x00000030u); // 801FFC68
  cmps(c,0,(int32_t)c->r[0],0); // 801FFC6C
  if (crb(c,2)) { goto L_801FFC80; } // 801FFC70
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801FFC74
  c->r[6]=c->r[0]-c->r[4]; // 801FFC78
  goto L_801FFC84; // 801FFC7C
L_801FFC80:;
  c->r[6]=rotl(c->r[4],1)&0xFFFFFFFEu; // 801FFC80
L_801FFC84:;
  W32(c->r[13]+0xFFFFBBECu,c->r[6]); // 801FFC84
  c->r[3]=0u+0x00000001u; // 801FFC88
  c->r[4]=0u+0x80470000u; // 801FFC8C
  c->r[4]=c->r[4]+0x000072D8u; // 801FFC90
  c->r[29]=0u+0x80000000u; // 801FFC94
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801FFC98
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FFC9C
  c->r[31]=0u+0x10620000u; // 801FFCA0
  c->r[5]=c->r[31]+0x00004DD3u; // 801FFCA4
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FFCA8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FFCAC
  c->r[5]=divwu(c->r[6],c->r[0]); // 801FFCB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFCB4
  c->lr=0x801FFCBCu; f_803D3760(c); // 801FFCB8
  c->lr=0x801FFCC0u; f_80361C0C(c); // 801FFCBC
  c->r[0]=R32(c->r[13]+0xFFFFBBECu); // 801FFCC0
  c->r[6]=c->r[0]+c->r[3]; // 801FFCC4
  W32(c->r[13]+0xFFFFBBECu,c->r[6]); // 801FFCC8
  c->r[3]=0u+0x00000001u; // 801FFCCC
  c->r[4]=0u+0x80470000u; // 801FFCD0
  c->r[4]=c->r[4]+0x000072ECu; // 801FFCD4
  c->r[0]=R32(c->r[29]+0x000000F8u); // 801FFCD8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801FFCDC
  c->r[5]=c->r[31]+0x00004DD3u; // 801FFCE0
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 801FFCE4
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 801FFCE8
  c->r[5]=divwu(c->r[6],c->r[0]); // 801FFCEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFCF0
  c->lr=0x801FFCF8u; f_803D3760(c); // 801FFCF4
  c->r[3]=c->r[30]|c->r[30]; // 801FFCF8
  c->r[4]=0u+0x00000001u; // 801FFCFC
  c->lr=0x801FFD04u; f_802082A0(c); // 801FFD00
  goto L_801FFDA0; // 801FFD04
L_801FFD08:;
  c->lr=0x801FFD0Cu; f_80361C0C(c); // 801FFD08
  c->r[0]=0u+0x00000000u; // 801FFD0C
  c->r[5]=R32(c->r[13]+0xFFFFBBECu); // 801FFD10
  c->r[4]=0u+0x00000000u; // 801FFD14
  c->r[0]=c->r[0]^0x80000000u; // 801FFD18
  c->r[4]=c->r[4]^0x80000000u; // 801FFD1C
  c->r[3]=addc(c,~c->r[5],c->r[3],1); // 801FFD20
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 801FFD24
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 801FFD28
  c->r[4]=0u-c->r[4]; // 801FFD2C
  cmps(c,0,(int32_t)c->r[4],0); // 801FFD30
  if (crb(c,2)) { goto L_801FFD48; } // 801FFD34
  c->r[3]=c->r[30]|c->r[30]; // 801FFD38
  c->r[4]=0u+0x00000002u; // 801FFD3C
  c->lr=0x801FFD44u; f_802082BC(c); // 801FFD40
  goto L_801FFDA0; // 801FFD44
L_801FFD48:;
  c->r[3]=0u+0x00000001u; // 801FFD48
  c->r[4]=0u+0x80470000u; // 801FFD4C
  c->r[4]=c->r[4]+0x00007880u; // 801FFD50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFD54
  c->lr=0x801FFD5Cu; f_803D3760(c); // 801FFD58
  cmps(c,0,(int32_t)c->r[31],0); // 801FFD5C
  if (crb(c,2)) { goto L_801FFD6C; } // 801FFD60
  c->r[3]=c->r[31]|c->r[31]; // 801FFD64
  c->lr=0x801FFD6Cu; f_801EE630(c); // 801FFD68
L_801FFD6C:;
  c->r[31]=0u+0x00000000u; // 801FFD6C
  W8(c->r[13]+0xFFFFBC11u,c->r[31]); // 801FFD70
  W8(c->r[13]+0xFFFFBC12u,c->r[31]); // 801FFD74
  c->r[3]=0u+0x00000001u; // 801FFD78
  c->r[4]=0u+0x80470000u; // 801FFD7C
  c->r[4]=c->r[4]+0x000078A4u; // 801FFD80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFD84
  c->lr=0x801FFD8Cu; f_803D3760(c); // 801FFD88
  c->r[3]=R32(c->r[30]+0x00000D08u); // 801FFD8C
  W32(c->r[3]+0x00000EF8u,c->r[31]); // 801FFD90
  c->r[3]=c->r[30]|c->r[30]; // 801FFD94
  c->r[4]=0u+0x00000012u; // 801FFD98
  c->lr=0x801FFDA0u; f_801FB330(c); // 801FFD9C
L_801FFDA0:;
  c->r[11]=c->r[1]+0x00000030u; // 801FFDA0
  c->lr=0x801FFDA8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801FFDA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801FFDA8
  c->lr=c->r[0]; // 801FFDAC
  c->r[1]=c->r[1]+0x00000030u; // 801FFDB0
  return; // 801FFDB4
}

// fn_801FFDB8
void f_801FFDB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801FFDB8
  c->r[0]=c->lr; // 801FFDBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801FFDC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801FFDC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801FFDC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801FFDCC
  c->r[31]=c->r[3]|c->r[3]; // 801FFDD0
  c->r[3]=0u+0x00000001u; // 801FFDD4
  c->r[4]=0u+0x80470000u; // 801FFDD8
  c->r[4]=c->r[4]+0x000078D4u; // 801FFDDC
  c->r[5]=R32(c->r[31]+0x00000D08u); // 801FFDE0
  c->r[5]=R32(c->r[5]+0x00000000u); // 801FFDE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFDE8
  c->lr=0x801FFDF0u; f_803D3760(c); // 801FFDEC
  c->r[0]=0u+0x0000001Eu; // 801FFDF0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFDF4
  W16(c->r[3]+0x00000E4Eu,c->r[0]); // 801FFDF8
  c->r[4]=0u+0x00000000u; // 801FFDFC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFE00
  W16(c->r[3]+0x00000E4Cu,c->r[4]); // 801FFE04
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFE08
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801FFE0C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFE10
  W32(c->r[3]+0x00000014u,c->r[4]); // 801FFE14
  c->r[6]=0u+0x00000000u; // 801FFE18
  c->r[5]=0u+0x00000000u; // 801FFE1C
  goto L_801FFE38; // 801FFE20
L_801FFE24:;
  c->r[3]=c->r[3]+c->r[5]; // 801FFE24
  W32(c->r[3]+0x00000080u,c->r[4]); // 801FFE28
  W32(c->r[3]+0x00000084u,c->r[4]); // 801FFE2C
  c->r[5]=c->r[5]+0x0000018Cu; // 801FFE30
  c->r[6]=c->r[6]+0x00000001u; // 801FFE34
L_801FFE38:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFE38
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000E44u); // 801FFE3C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 801FFE40
  if (crb(c,0)) { IRQCHK(c); goto L_801FFE24; } // 801FFE44
  c->r[0]=R32(c->r[3]+0x00000000u); // 801FFE48
  cmps(c,0,(int32_t)c->r[0],1); // 801FFE4C
  if (crb(c,2)) { goto L_801FFF54; } // 801FFE50
  if (!crb(c,0)) { goto L_801FFE64; } // 801FFE54
  cmps(c,0,(int32_t)c->r[0],0); // 801FFE58
  if (!crb(c,0)) { goto L_801FFE70; } // 801FFE5C
  goto L_801FFF54; // 801FFE60
L_801FFE64:;
  cmps(c,0,(int32_t)c->r[0],3); // 801FFE64
  if (!crb(c,0)) { goto L_801FFF54; } // 801FFE68
  goto L_801FFE88; // 801FFE6C
L_801FFE70:;
  c->r[0]=0u+0x00000000u; // 801FFE70
  W16(c->r[3]+0x000006FCu,c->r[0]); // 801FFE74
  c->r[0]=0u+0x00000001u; // 801FFE78
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFE7C
  W16(c->r[3]+0x000006FEu,c->r[0]); // 801FFE80
  goto L_801FFF54; // 801FFE84
L_801FFE88:;
  c->lr=0x801FFE8Cu; f_80208B40(c); // 801FFE88
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFE8C
  c->r[3]=c->r[3]+0x00000018u; // 801FFE90
  c->lr=0x801FFE98u; f_803D82E4(c); // 801FFE94
  c->r[30]=c->r[3]|c->r[3]; // 801FFE98
  c->lr=0x801FFEA0u; f_803D82C8(c); // 801FFE9C
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 801FFEA0
  c->lr=0x801FFEA8u; f_80208B4C(c); // 801FFEA4
  cmps(c,0,(int32_t)c->r[30],2); // 801FFEA8
  if (crb(c,2)) { goto L_801FFED4; } // 801FFEAC
  c->r[3]=0u+0x00000002u; // 801FFEB0
  c->r[4]=0u+0x80470000u; // 801FFEB4
  c->r[4]=c->r[4]+0x000078FCu; // 801FFEB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFEBC
  c->lr=0x801FFEC4u; f_803D3760(c); // 801FFEC0
  c->r[3]=c->r[31]|c->r[31]; // 801FFEC4
  c->r[4]=0u+0x0000001Eu; // 801FFEC8
  c->lr=0x801FFED0u; f_801FB330(c); // 801FFECC
  goto L_8020017C; // 801FFED0
L_801FFED4:;
  c->r[3]=0u+0x00000001u; // 801FFED4
  c->r[4]=0u+0x80470000u; // 801FFED8
  c->r[4]=c->r[4]+0x00007658u; // 801FFEDC
  c->r[5]=R32(c->r[31]+0x00000D08u); // 801FFEE0
  c->r[5]=R32(c->r[5]+0x00000018u); // 801FFEE4
  c->r[5]=R8(c->r[5]+0x00000000u); // 801FFEE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFEEC
  c->lr=0x801FFEF4u; f_803D3760(c); // 801FFEF0
  c->r[3]=0u+0x00000001u; // 801FFEF4
  c->r[4]=0u+0x80470000u; // 801FFEF8
  c->r[4]=c->r[4]+0x00007664u; // 801FFEFC
  c->r[5]=R32(c->r[31]+0x00000D08u); // 801FFF00
  c->r[5]=R32(c->r[5]+0x00000018u); // 801FFF04
  c->r[5]=R8(c->r[5]+0x00000001u); // 801FFF08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801FFF0C
  c->lr=0x801FFF14u; f_803D3760(c); // 801FFF10
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FFF14
  c->r[3]=R32(c->r[4]+0x00000018u); // 801FFF18
  c->r[0]=R8(c->r[3]+0x00000000u); // 801FFF1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801FFF20
  if (!crb(c,2)) { goto L_801FFF40; } // 801FFF24
  c->r[0]=0u+0x00000000u; // 801FFF28
  W16(c->r[4]+0x000006FCu,c->r[0]); // 801FFF2C
  c->r[0]=0u+0x00000001u; // 801FFF30
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFF34
  W16(c->r[3]+0x000006FEu,c->r[0]); // 801FFF38
  goto L_801FFF54; // 801FFF3C
L_801FFF40:;
  c->r[0]=0u+0x00000001u; // 801FFF40
  W16(c->r[4]+0x000006FCu,c->r[0]); // 801FFF44
  c->r[0]=0u+0x00000000u; // 801FFF48
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFF4C
  W16(c->r[3]+0x000006FEu,c->r[0]); // 801FFF50
L_801FFF54:;
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FFF54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000006FCu); // 801FFF58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 801FFF5C
  c->r[3]=c->r[4]+c->r[0]; // 801FFF60
  c->r[0]=c->r[3]+0x0000007Cu; // 801FFF64
  W32(c->r[4]+0x00000700u,c->r[0]); // 801FFF68
  c->r[4]=R32(c->r[31]+0x00000D08u); // 801FFF6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000006FEu); // 801FFF70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 801FFF74
  c->r[3]=c->r[4]+c->r[0]; // 801FFF78
  c->r[0]=c->r[3]+0x0000007Cu; // 801FFF7C
  W32(c->r[4]+0x00000704u,c->r[0]); // 801FFF80
  c->r[0]=0u+0x00000000u; // 801FFF84
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFF88
  c->r[3]=R32(c->r[3]+0x00000700u); // 801FFF8C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FFF90
  c->r[0]=0u+0x00000001u; // 801FFF94
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFF98
  c->r[3]=R32(c->r[3]+0x00000704u); // 801FFF9C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801FFFA0
  c->r[0]=0u+0x00000002u; // 801FFFA4
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFFA8
  W16(c->r[3]+0x00000E44u,c->r[0]); // 801FFFAC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 801FFFB0
  W16(c->r[3]+0x00000E46u,c->r[0]); // 801FFFB4
  c->r[7]=0u+0x00000000u; // 801FFFB8
  c->r[4]=0u+0x00000000u; // 801FFFBC
  c->r[5]=0u+0x00000000u; // 801FFFC0
  goto L_80200034; // 801FFFC4
L_801FFFC8:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 801FFFC8
  cmps(c,0,(int32_t)c->r[0],0); // 801FFFCC
  if (crb(c,2)) { goto L_801FFFE4; } // 801FFFD0
  if (crb(c,0)) { goto L_80200028; } // 801FFFD4
  cmps(c,0,(int32_t)c->r[0],3); // 801FFFD8
  if (!crb(c,0)) { goto L_80200028; } // 801FFFDC
  goto L_80200008; // 801FFFE0
L_801FFFE4:;
  c->r[3]=c->r[6]+c->r[4]; // 801FFFE4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006BCu); // 801FFFE8
  cmps(c,0,(int32_t)c->r[3],0); // 801FFFEC
  c->r[0]=0u+0x00000014u; // 801FFFF0
  if (crb(c,2)) { goto L_801FFFFC; } // 801FFFF4
  c->r[0]=c->r[3]|c->r[3]; // 801FFFF8
L_801FFFFC:;
  c->r[3]=c->r[6]+c->r[5]; // 801FFFFC
  W32(c->r[3]+0x00000E70u,c->r[0]); // 80200000
  goto L_80200028; // 80200004
L_80200008:;
  c->r[3]=c->r[6]+c->r[4]; // 80200008
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006BCu); // 8020000C
  cmps(c,0,(int32_t)c->r[3],0); // 80200010
  c->r[0]=0u+0x00000014u; // 80200014
  if (crb(c,2)) { goto L_80200020; } // 80200018
  c->r[0]=c->r[3]|c->r[3]; // 8020001C
L_80200020:;
  c->r[3]=c->r[6]+c->r[5]; // 80200020
  W32(c->r[3]+0x00000E70u,c->r[0]); // 80200024
L_80200028:;
  c->r[4]=c->r[4]+0x00000002u; // 80200028
  c->r[5]=c->r[5]+0x00000044u; // 8020002C
  c->r[7]=c->r[7]+0x00000001u; // 80200030
L_80200034:;
  c->r[6]=R32(c->r[31]+0x00000D08u); // 80200034
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000E44u); // 80200038
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8020003C
  if (crb(c,0)) { IRQCHK(c); goto L_801FFFC8; } // 80200040
  c->r[3]=c->r[31]|c->r[31]; // 80200044
  c->lr=0x8020004Cu; f_801FF068(c); // 80200048
  c->r[0]=0u+0x00000000u; // 8020004C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80200050
  W16(c->r[3]+0x00000E58u,c->r[0]); // 80200054
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80200058
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020005C
  cmps(c,0,(int32_t)c->r[0],3); // 80200060
  if (!crb(c,0)) { goto L_802000BC; } // 80200064
  cmps(c,0,(int32_t)c->r[0],1); // 80200068
  if (!crb(c,0)) { goto L_80200074; } // 8020006C
  goto L_802000BC; // 80200070
L_80200074:;
  c->r[3]=0u+0x66660000u; // 80200074
  c->r[30]=c->r[3]+0x00006667u; // 80200078
L_8020007C:;
  c->lr=0x80200080u; f_8005C538(c); // 8020007C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[3])>>32); // 80200080
  c->r[0]=sraw(c,c->r[0],2); // 80200084
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80200088
  c->r[0]=c->r[0]+c->r[4]; // 8020008C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 80200090
  c->r[0]=c->r[3]-c->r[0]; // 80200094
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80200098
  cmps(c,0,(int32_t)c->r[4],4); // 8020009C
  if (crb(c,2)) { IRQCHK(c); goto L_8020007C; } // 802000A0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 802000A4
  c->r[0]=R16(c->r[3]+0x00000E58u); // 802000A8
  c->r[0]=c->r[0]+c->r[4]; // 802000AC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 802000B0
  W16(c->r[3]+0x00000E58u,c->r[0]); // 802000B4
  goto L_802000F8; // 802000B8
L_802000BC:;
  c->r[3]=c->r[31]|c->r[31]; // 802000BC
  c->lr=0x802000C4u; f_801FF1CC(c); // 802000C0
  c->r[4]=R32(c->r[31]+0x00000D08u); // 802000C4
  c->r[0]=R8(c->r[4]+0x0000003Au); // 802000C8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802000CC
  c->r[3]=c->r[4]+c->r[0]; // 802000D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 802000D4
  cmps(c,0,(int32_t)c->r[0],4); // 802000D8
  c->r[3]=0u+0x00000009u; // 802000DC
  if (crb(c,2)) { goto L_802000E8; } // 802000E0
  c->r[3]=c->r[0]|c->r[0]; // 802000E4
L_802000E8:;
  c->r[0]=R16(c->r[4]+0x00000E58u); // 802000E8
  c->r[0]=c->r[0]+c->r[3]; // 802000EC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 802000F0
  W16(c->r[4]+0x00000E58u,c->r[0]); // 802000F4
L_802000F8:;
  c->r[3]=0u+0x00000001u; // 802000F8
  c->r[4]=0u+0x80470000u; // 802000FC
  c->r[4]=c->r[4]+0x00007930u; // 80200100
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200104
  c->lr=0x8020010Cu; f_803D3760(c); // 80200108
  c->r[7]=R32(c->r[31]+0x00000D08u); // 8020010C
  c->r[3]=0u+0x00000001u; // 80200110
  c->r[4]=0u+0x80470000u; // 80200114
  c->r[4]=c->r[4]+0x00007950u; // 80200118
  c->r[5]=R16(c->r[7]+0x00000E58u); // 8020011C
  c->r[6]=R32(c->r[7]+0x00000700u); // 80200120
  c->r[6]=R32(c->r[6]+0x00000018u); // 80200124
  c->r[7]=R32(c->r[7]+0x00000704u); // 80200128
  c->r[7]=R32(c->r[7]+0x00000018u); // 8020012C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200130
  c->lr=0x80200138u; f_803D3760(c); // 80200134
  c->r[7]=R32(c->r[31]+0x00000D08u); // 80200138
  c->r[8]=c->r[7]+0x00000060u; // 8020013C
  c->r[3]=0u+0x00000001u; // 80200140
  c->r[4]=0u+0x80470000u; // 80200144
  c->r[4]=c->r[4]+0x00007970u; // 80200148
  c->r[5]=R16(c->r[7]+0x00000E58u); // 8020014C
  c->r[0]=R8(c->r[7]+0x00000030u); // 80200150
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200154
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[0]); // 80200158
  c->r[0]=R8(c->r[7]+0x0000003Au); // 8020015C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200160
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[8]+c->r[0]); // 80200164
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200168
  c->lr=0x80200170u; f_803D3760(c); // 8020016C
  c->r[3]=c->r[31]|c->r[31]; // 80200170
  c->r[4]=0u+0x00000015u; // 80200174
  c->lr=0x8020017Cu; f_801FB330(c); // 80200178
L_8020017C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020017C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80200180
  c->r[29]=R32(c->r[1]+0x00000014u); // 80200184
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200188
  c->lr=c->r[0]; // 8020018C
  c->r[1]=c->r[1]+0x00000020u; // 80200190
  return; // 80200194
}

// fn_80200198
void f_80200198(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200198
  c->r[0]=c->lr; // 8020019C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802001A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802001A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802001A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802001AC
  c->r[31]=c->r[3]|c->r[3]; // 802001B0
  c->r[8]=R32(c->r[3]+0x00000D08u); // 802001B4
  c->r[0]=R32(c->r[8]+0x00000000u); // 802001B8
  cmps(c,0,(int32_t)c->r[0],2); // 802001BC
  if (crb(c,2)) { goto L_802001C8; } // 802001C0
  goto L_802001F8; // 802001C4
L_802001C8:;
  c->r[3]=0u+0x00000001u; // 802001C8
  c->r[4]=0u+0x80470000u; // 802001CC
  c->r[4]=c->r[4]+0x000078A4u; // 802001D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802001D4
  c->lr=0x802001DCu; f_803D3760(c); // 802001D8
  c->r[0]=0u+0x00000000u; // 802001DC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 802001E0
  W32(c->r[3]+0x00000EF8u,c->r[0]); // 802001E4
  c->r[3]=c->r[31]|c->r[31]; // 802001E8
  c->r[4]=0u+0x00000016u; // 802001EC
  c->lr=0x802001F4u; f_801FB330(c); // 802001F0
  goto L_8020028C; // 802001F4
L_802001F8:;
  c->r[7]=c->r[8]+0x00000060u; // 802001F8
  c->r[3]=0u+0x00000001u; // 802001FC
  c->r[4]=0u+0x80470000u; // 80200200
  c->r[4]=c->r[4]+0x00007990u; // 80200204
  c->r[5]=R16(c->r[8]+0x00000E58u); // 80200208
  c->r[0]=R8(c->r[8]+0x00000030u); // 8020020C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200210
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[0]); // 80200214
  c->r[0]=R8(c->r[8]+0x0000003Au); // 80200218
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8020021C
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+c->r[0]); // 80200220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200224
  c->lr=0x8020022Cu; f_803D3760(c); // 80200228
  c->r[30]=R32(c->r[31]+0x00000D08u); // 8020022C
  c->r[29]=c->r[30]+0x00000060u; // 80200230
  c->r[3]=R32(c->r[31]+0x00000D38u); // 80200234
  c->lr=0x8020023Cu; f_801EF7A8(c); // 80200238
  c->r[4]=R16(c->r[30]+0x00000E58u); // 8020023C
  c->r[0]=R8(c->r[30]+0x00000030u); // 80200240
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200244
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+c->r[0]); // 80200248
  c->r[0]=R8(c->r[30]+0x0000003Au); // 8020024C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200250
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+c->r[0]); // 80200254
  c->r[7]=0u+0x00000000u; // 80200258
  c->lr=0x80200260u; f_8025BF00(c); // 8020025C
  c->r[3]=0u+0x00000001u; // 80200260
  c->r[4]=0u+0x80470000u; // 80200264
  c->r[4]=c->r[4]+0x000079B0u; // 80200268
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020026C
  c->lr=0x80200274u; f_803D3760(c); // 80200270
  c->r[0]=0u+0x00000000u; // 80200274
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80200278
  W32(c->r[3]+0x00000010u,c->r[0]); // 8020027C
  c->r[3]=c->r[31]|c->r[31]; // 80200280
  c->r[4]=0u+0x00000017u; // 80200284
  c->lr=0x8020028Cu; f_801FB330(c); // 80200288
L_8020028C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020028C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80200290
  c->r[29]=R32(c->r[1]+0x00000014u); // 80200294
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200298
  c->lr=c->r[0]; // 8020029C
  c->r[1]=c->r[1]+0x00000020u; // 802002A0
  return; // 802002A4
}

// fn_802002A8
void f_802002A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802002A8
  c->r[0]=c->lr; // 802002AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802002B0
  c->r[11]=c->r[1]+0x00000020u; // 802002B4
  c->lr=0x802002BCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802002B8
  c->r[30]=c->r[3]|c->r[3]; // 802002BC
  c->lr=0x802002C4u; f_80207A34(c); // 802002C0
  cmps(c,0,(int32_t)c->r[3],0); // 802002C4
  if (crb(c,2)) { goto L_802002F8; } // 802002C8
  c->r[3]=0u+0x00000002u; // 802002CC
  c->r[4]=0u+0x80470000u; // 802002D0
  c->r[4]=c->r[4]+0x000079D0u; // 802002D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802002D8
  c->lr=0x802002E0u; f_803D3760(c); // 802002DC
  c->r[3]=c->r[30]|c->r[30]; // 802002E0
  c->lr=0x802002E8u; f_801FB2D4(c); // 802002E4
  c->r[3]=c->r[30]|c->r[30]; // 802002E8
  c->r[4]=0u+0x0000001Eu; // 802002EC
  c->lr=0x802002F4u; f_801FB330(c); // 802002F0
  goto L_80200838; // 802002F4
L_802002F8:;
  c->r[3]=c->r[30]|c->r[30]; // 802002F8
  c->lr=0x80200300u; f_801FBA1C(c); // 802002FC
  c->r[3]=c->r[30]|c->r[30]; // 80200300
  c->lr=0x80200308u; f_802082B4(c); // 80200304
  cmps(c,0,(int32_t)c->r[3],3); // 80200308
  if (crb(c,2)) { goto L_80200630; } // 8020030C
  if (!crb(c,0)) { goto L_8020032C; } // 80200310
  cmps(c,0,(int32_t)c->r[3],1); // 80200314
  if (crb(c,2)) { goto L_802003C0; } // 80200318
  if (!crb(c,0)) { goto L_802004EC; } // 8020031C
  cmps(c,0,(int32_t)c->r[3],0); // 80200320
  if (!crb(c,0)) { goto L_8020033C; } // 80200324
  goto L_80200830; // 80200328
L_8020032C:;
  cmps(c,0,(int32_t)c->r[3],5); // 8020032C
  if (crb(c,2)) { goto L_80200750; } // 80200330
  if (!crb(c,0)) { goto L_80200830; } // 80200334
  goto L_802006B4; // 80200338
L_8020033C:;
  c->r[0]=R32(c->r[30]+0x00000D10u); // 8020033C
  cmps(c,0,(int32_t)c->r[0],0); // 80200340
  if (!crb(c,2)) { goto L_80200358; } // 80200344
  c->r[3]=c->r[30]|c->r[30]; // 80200348
  c->r[4]=0u+0x00000028u; // 8020034C
  c->lr=0x80200354u; f_801FB558(c); // 80200350
  W32(c->r[30]+0x00000D10u,c->r[3]); // 80200354
L_80200358:;
  c->r[0]=R32(c->r[30]+0x00000D0Cu); // 80200358
  cmps(c,0,(int32_t)c->r[0],0); // 8020035C
  if (!crb(c,2)) { goto L_80200374; } // 80200360
  c->r[3]=c->r[30]|c->r[30]; // 80200364
  c->r[4]=0u+0x00000028u; // 80200368
  c->lr=0x80200370u; f_801FB558(c); // 8020036C
  W32(c->r[30]+0x00000D0Cu,c->r[3]); // 80200370
L_80200374:;
  c->r[3]=0u+0x00000001u; // 80200374
  c->r[4]=0u+0x80470000u; // 80200378
  c->r[4]=c->r[4]+0x00007A0Cu; // 8020037C
  c->r[5]=R32(c->r[30]+0x00000D10u); // 80200380
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200384
  c->lr=0x8020038Cu; f_803D3760(c); // 80200388
  c->r[3]=0u+0x00000001u; // 8020038C
  c->r[4]=0u+0x80470000u; // 80200390
  c->r[4]=c->r[4]+0x00007A20u; // 80200394
  c->r[5]=R32(c->r[30]+0x00000D0Cu); // 80200398
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020039C
  c->lr=0x802003A4u; f_803D3760(c); // 802003A0
  c->r[0]=0u+0x00000000u; // 802003A4
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802003A8
  W32(c->r[3]+0x000006B4u,c->r[0]); // 802003AC
  c->r[3]=c->r[30]|c->r[30]; // 802003B0
  c->r[4]=0u+0x00000001u; // 802003B4
  c->lr=0x802003BCu; f_802082BC(c); // 802003B8
  goto L_80200830; // 802003BC
L_802003C0:;
  c->r[3]=c->r[30]+0x000006D4u; // 802003C0
  c->r[4]=R32(c->r[30]+0x00000D08u); // 802003C4
  c->r[4]=R8(c->r[4]+0x0000003Au); // 802003C8
  c->r[5]=0u+0x00004650u; // 802003CC
  c->lr=0x802003D4u; f_8020834C(c); // 802003D0
  c->r[6]=R32(c->r[30]+0x00000D08u); // 802003D4
  c->r[3]=c->r[30]+0x000006D4u; // 802003D8
  c->r[4]=0u+0x00000001u; // 802003DC
  c->r[5]=R32(c->r[6]+0x00000018u); // 802003E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x000006FEu); // 802003E4
  c->r[5]=R8(c->r[5]+c->r[0]); // 802003E8
  c->lr=0x802003F0u; f_8020C368(c); // 802003EC
  c->r[0]=0u+0x00000028u; // 802003F0
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802003F4
  W32(c->r[3]+0x00000EF0u,c->r[0]); // 802003F8
  c->r[26]=R32(c->r[30]+0x00000D10u); // 802003FC
  c->r[0]=0u+0x00000100u; // 80200400
  W16(c->r[26]+0x00000000u,c->r[0]); // 80200404
  c->r[0]=0u+0x00000000u; // 80200408
  W32(c->r[26]+0x00000004u,c->r[0]); // 8020040C
  c->r[3]=0u+0x00000001u; // 80200410
  c->r[4]=0u+0x80470000u; // 80200414
  c->r[4]=c->r[4]+0x00007A34u; // 80200418
  c->r[5]=R32(c->r[30]+0x00000D08u); // 8020041C
  c->r[5]=R32(c->r[5]+0x000006B0u); // 80200420
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200424
  c->lr=0x8020042Cu; f_803D3760(c); // 80200428
  c->r[3]=0u+0x00000001u; // 8020042C
  c->r[4]=0u+0x80470000u; // 80200430
  c->r[4]=c->r[4]+0x00007A68u; // 80200434
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200438
  c->lr=0x80200440u; f_803D3760(c); // 8020043C
  c->r[31]=0u+0x00000000u; // 80200440
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200444
  c->r[3]=R32(c->r[3]+0x00000700u); // 80200448
  c->r[27]=c->r[3]+0x00000040u; // 8020044C
  c->r[28]=c->r[26]|c->r[26]; // 80200450
  c->r[29]=0u+0x80470000u; // 80200454
L_80200458:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80200458
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8020045C
  W16(c->r[28]+0x00000008u,c->r[0]); // 80200460
  c->r[3]=0u+0x00000001u; // 80200464
  c->r[4]=c->r[29]+0x00007A80u; // 80200468
  c->r[5]=c->r[31]|c->r[31]; // 8020046C
  c->r[6]=R16(c->r[28]+0x00000008u); // 80200470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200474
  c->lr=0x8020047Cu; f_803D3760(c); // 80200478
  c->r[27]=c->r[27]+0x00000004u; // 8020047C
  c->r[28]=c->r[28]+0x00000002u; // 80200480
  c->r[31]=c->r[31]+0x00000001u; // 80200484
  cmps(c,0,(int32_t)c->r[31],15); // 80200488
  if (crb(c,0)) { IRQCHK(c); goto L_80200458; } // 8020048C
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200490
  c->r[3]=R16(c->r[3]+0x00000E58u); // 80200494
  c->r[0]=R16(c->r[26]+0x00000026u); // 80200498
  c->r[0]=(rotl(c->r[3],4)&0x0000FFF0u)|(c->r[0]&~0x0000FFF0u); // 8020049C
  W16(c->r[26]+0x00000026u,c->r[0]); // 802004A0
  c->lr=0x802004A8u; f_80361BF4(c); // 802004A4
  c->r[5]=0u+0x80000000u; // 802004A8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802004AC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802004B0
  c->r[5]=0u+0x10620000u; // 802004B4
  c->r[5]=c->r[5]+0x00004DD3u; // 802004B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 802004BC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802004C0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 802004C4
  c->r[0]=0u+0x00000000u; // 802004C8
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 802004CC
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 802004D0
  W32(c->r[13]+0xFFFFBC2Cu,c->r[4]); // 802004D4
  W32(c->r[13]+0xFFFFBC28u,c->r[0]); // 802004D8
  c->r[3]=c->r[30]|c->r[30]; // 802004DC
  c->r[4]=0u+0x00000002u; // 802004E0
  c->lr=0x802004E8u; f_802082BC(c); // 802004E4
  goto L_80200830; // 802004E8
L_802004EC:;
  c->r[31]=R32(c->r[30]+0x00000D0Cu); // 802004EC
  c->r[0]=R16(c->r[31]+0x00000000u); // 802004F0
  cmpu(c,0,c->r[0],0x00000100u); // 802004F4
  if (!crb(c,2)) { goto L_80200830; } // 802004F8
  c->r[0]=0u+0x000000F4u; // 802004FC
  W16(c->r[31]+0x00000000u,c->r[0]); // 80200500
  c->r[3]=0u+0x00000001u; // 80200504
  c->r[4]=0u+0x80470000u; // 80200508
  c->r[4]=c->r[4]+0x00007A90u; // 8020050C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200510
  c->lr=0x80200518u; f_803D3760(c); // 80200514
  c->r[26]=0u+0x00000000u; // 80200518
  c->r[28]=c->r[31]|c->r[31]; // 8020051C
  c->r[27]=0u+0x00000000u; // 80200520
  c->r[29]=0u+0x80470000u; // 80200524
L_80200528:;
  c->r[4]=R16(c->r[28]+0x00000008u); // 80200528
  c->r[3]=R32(c->r[30]+0x00000D08u); // 8020052C
  c->r[0]=R32(c->r[3]+0x00000704u); // 80200530
  c->r[3]=c->r[0]+c->r[27]; // 80200534
  W32(c->r[3]+0x00000048u,c->r[4]); // 80200538
  c->r[3]=0u+0x00000001u; // 8020053C
  c->r[4]=c->r[29]+0x00007A80u; // 80200540
  c->r[5]=c->r[26]|c->r[26]; // 80200544
  c->r[6]=R16(c->r[28]+0x00000008u); // 80200548
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020054C
  c->lr=0x80200554u; f_803D3760(c); // 80200550
  c->r[0]=R16(c->r[28]+0x00000008u); // 80200554
  cmps(c,0,(int32_t)c->r[0],0); // 80200558
  if (!crb(c,2)) { goto L_80200570; } // 8020055C
  c->r[3]=c->r[30]|c->r[30]; // 80200560
  c->r[4]=0u+0x0000001Eu; // 80200564
  c->lr=0x8020056Cu; f_801FB330(c); // 80200568
  goto L_80200838; // 8020056C
L_80200570:;
  c->r[28]=c->r[28]+0x00000002u; // 80200570
  c->r[27]=c->r[27]+0x00000004u; // 80200574
  c->r[26]=c->r[26]+0x00000001u; // 80200578
  cmps(c,0,(int32_t)c->r[26],15); // 8020057C
  if (crb(c,0)) { IRQCHK(c); goto L_80200528; } // 80200580
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 80200584
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200588
  c->r[3]=R32(c->r[3]+0x00000704u); // 8020058C
  W16(c->r[3]+0x00000040u,c->r[0]); // 80200590
  c->r[3]=0u+0x00000001u; // 80200594
  c->r[4]=c->r[13]+0xFFFF9F68u; // 80200598
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020059C
  c->lr=0x802005A4u; f_803D3760(c); // 802005A0
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802005A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000006FCu); // 802005A8
  cmps(c,0,(int32_t)c->r[0],1); // 802005AC
  if (crb(c,2)) { goto L_802005BC; } // 802005B0
  if (!crb(c,0)) { goto L_802005C8; } // 802005B4
  goto L_802005C8; // 802005B8
L_802005BC:;
  c->r[0]=R16(c->r[31]+0x00000026u); // 802005BC
  c->r[0]=rotl(c->r[0],28)&0x00000FFFu; // 802005C0
  W16(c->r[3]+0x00000E58u,c->r[0]); // 802005C4
L_802005C8:;
  c->r[3]=0u+0x00000001u; // 802005C8
  c->r[4]=0u+0x80470000u; // 802005CC
  c->r[4]=c->r[4]+0x00007AA8u; // 802005D0
  c->r[5]=R32(c->r[30]+0x00000D08u); // 802005D4
  c->r[5]=R16(c->r[5]+0x00000E58u); // 802005D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802005DC
  c->lr=0x802005E4u; f_803D3760(c); // 802005E0
  c->r[27]=R32(c->r[30]+0x00000D08u); // 802005E4
  c->r[28]=c->r[27]+0x00000060u; // 802005E8
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802005EC
  c->lr=0x802005F4u; f_801EF7A8(c); // 802005F0
  c->r[4]=R16(c->r[27]+0x00000E58u); // 802005F4
  c->r[0]=R8(c->r[27]+0x00000030u); // 802005F8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802005FC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+c->r[0]); // 80200600
  c->r[0]=R8(c->r[27]+0x0000003Au); // 80200604
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200608
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+c->r[0]); // 8020060C
  c->r[7]=0u+0x00000000u; // 80200610
  c->lr=0x80200618u; f_8025BF00(c); // 80200614
  c->r[0]=0u+0x00000003u; // 80200618
  W32(c->r[13]+0xFFFFBC30u,c->r[0]); // 8020061C
  c->r[3]=c->r[30]|c->r[30]; // 80200620
  c->r[4]=0u+0x00000003u; // 80200624
  c->lr=0x8020062Cu; f_802082BC(c); // 80200628
  goto L_80200830; // 8020062C
L_80200630:;
  c->r[3]=0u+0x00000001u; // 80200630
  c->r[4]=0u+0x80470000u; // 80200634
  c->r[4]=c->r[4]+0x00007AB8u; // 80200638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020063C
  c->lr=0x80200644u; f_803D3760(c); // 80200640
  c->r[4]=0u+0x00000001u; // 80200644
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200648
  W32(c->r[3]+0x00000004u,c->r[4]); // 8020064C
  c->r[0]=0u+0x00000028u; // 80200650
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200654
  W32(c->r[3]+0x00000EF0u,c->r[0]); // 80200658
  c->r[3]=R32(c->r[30]+0x00000D10u); // 8020065C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80200660
  c->r[0]=0u+0x00000100u; // 80200664
  W16(c->r[3]+0x00000000u,c->r[0]); // 80200668
  c->r[3]=c->r[30]|c->r[30]; // 8020066C
  c->r[4]=0u+0x00000004u; // 80200670
  c->lr=0x80200678u; f_802082BC(c); // 80200674
  c->lr=0x8020067Cu; f_80361BF4(c); // 80200678
  c->r[5]=0u+0x80000000u; // 8020067C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80200680
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80200684
  c->r[5]=0u+0x10620000u; // 80200688
  c->r[5]=c->r[5]+0x00004DD3u; // 8020068C
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 80200690
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80200694
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 80200698
  c->r[0]=0u+0x00000000u; // 8020069C
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 802006A0
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 802006A4
  W32(c->r[13]+0xFFFFBC2Cu,c->r[4]); // 802006A8
  W32(c->r[13]+0xFFFFBC28u,c->r[0]); // 802006AC
  goto L_80200830; // 802006B0
L_802006B4:;
  c->r[3]=R32(c->r[30]+0x00000D0Cu); // 802006B4
  c->r[0]=R32(c->r[3]+0x00000004u); // 802006B8
  cmps(c,0,(int32_t)c->r[0],0); // 802006BC
  if (crb(c,2)) { goto L_80200700; } // 802006C0
  c->r[0]=0u+0x0000000Cu; // 802006C4
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802006C8
  W32(c->r[3]+0x00000EF0u,c->r[0]); // 802006CC
  c->r[3]=0u+0x00000001u; // 802006D0
  c->r[4]=0u+0x80470000u; // 802006D4
  c->r[4]=c->r[4]+0x00007ACCu; // 802006D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802006DC
  c->lr=0x802006E4u; f_803D3760(c); // 802006E0
  c->r[0]=0u+0x00000001u; // 802006E4
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802006E8
  W32(c->r[3]+0x000006B4u,c->r[0]); // 802006EC
  c->r[3]=c->r[30]|c->r[30]; // 802006F0
  c->r[4]=0u+0x00000005u; // 802006F4
  c->lr=0x802006FCu; f_802082BC(c); // 802006F8
  goto L_80200830; // 802006FC
L_80200700:;
  c->lr=0x80200704u; f_80361BF4(c); // 80200700
  c->r[0]=R32(c->r[13]+0xFFFFBC28u); // 80200704
  c->r[6]=R32(c->r[13]+0xFFFFBC2Cu); // 80200708
  c->r[0]=c->r[0]^0x80000000u; // 8020070C
  c->r[5]=c->r[3]^0x80000000u; // 80200710
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80200714
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80200718
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8020071C
  c->r[5]=0u-c->r[5]; // 80200720
  cmps(c,0,(int32_t)c->r[5],0); // 80200724
  if (crb(c,2)) { goto L_80200830; } // 80200728
  c->r[3]=R32(c->r[13]+0xFFFFBC30u); // 8020072C
  cmps(c,0,(int32_t)c->r[3],0); // 80200730
  if (!crb(c,1)) { goto L_80200830; } // 80200734
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80200738
  W32(c->r[13]+0xFFFFBC30u,c->r[0]); // 8020073C
  c->r[3]=c->r[30]|c->r[30]; // 80200740
  c->r[4]=0u+0x00000003u; // 80200744
  c->lr=0x8020074Cu; f_802082BC(c); // 80200748
  goto L_80200830; // 8020074C
L_80200750:;
  c->r[3]=c->r[30]|c->r[30]; // 80200750
  c->r[4]=0u+0x00000000u; // 80200754
  c->lr=0x8020075Cu; f_80204A7C(c); // 80200758
  cmps(c,0,(int32_t)c->r[3],0); // 8020075C
  if (crb(c,2)) { goto L_80200830; } // 80200760
  c->r[3]=c->r[30]+0x000006D4u; // 80200764
  c->r[4]=R32(c->r[30]+0x00000D08u); // 80200768
  c->r[4]=R8(c->r[4]+0x0000003Au); // 8020076C
  c->r[5]=0u+0x00003A98u; // 80200770
  c->lr=0x80200778u; f_8020834C(c); // 80200774
  c->r[31]=0u+0x00000000u; // 80200778
  c->r[3]=R32(c->r[30]+0x00000D08u); // 8020077C
  W32(c->r[3]+0x00000010u,c->r[31]); // 80200780
  c->r[3]=c->r[30]|c->r[30]; // 80200784
  c->r[4]=0u+0x00000017u; // 80200788
  c->lr=0x80200790u; f_801FB330(c); // 8020078C
  c->r[3]=0u+0x00000001u; // 80200790
  c->r[4]=0u+0x80470000u; // 80200794
  c->r[4]=c->r[4]+0x00007AF8u; // 80200798
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020079C
  c->lr=0x802007A4u; f_803D3760(c); // 802007A0
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802007A4
  c->r[0]=R8(c->r[3]+0x00000030u); // 802007A8
  cmps(c,0,(int32_t)c->r[0],0); // 802007AC
  if (!crb(c,2)) { goto L_802007DC; } // 802007B0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802007B4
  c->r[3]=c->r[3]+c->r[0]; // 802007B8
  W16(c->r[3]+0x00000060u,c->r[31]); // 802007BC
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802007C0
  c->r[4]=0u+0x00000001u; // 802007C4
  c->r[0]=R8(c->r[3]+0x0000003Au); // 802007C8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802007CC
  c->r[3]=c->r[3]+c->r[0]; // 802007D0
  W16(c->r[3]+0x00000060u,c->r[4]); // 802007D4
  goto L_80200800; // 802007D8
L_802007DC:;
  c->r[4]=0u+0x00000001u; // 802007DC
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802007E0
  c->r[3]=c->r[3]+c->r[0]; // 802007E4
  W16(c->r[3]+0x00000060u,c->r[4]); // 802007E8
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802007EC
  c->r[0]=R8(c->r[3]+0x0000003Au); // 802007F0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802007F4
  c->r[3]=c->r[3]+c->r[0]; // 802007F8
  W16(c->r[3]+0x00000060u,c->r[31]); // 802007FC
L_80200800:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200800
  c->r[0]=R8(c->r[3]+0x00000030u); // 80200804
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200808
  c->r[3]=c->r[3]+c->r[0]; // 8020080C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 80200810
  W16(c->r[3]+0x00000064u,c->r[0]); // 80200814
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200818
  c->r[0]=R8(c->r[3]+0x0000003Au); // 8020081C
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80200820
  c->r[3]=c->r[3]+c->r[0]; // 80200824
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 80200828
  W16(c->r[3]+0x00000064u,c->r[0]); // 8020082C
L_80200830:;
  c->r[3]=c->r[30]|c->r[30]; // 80200830
  c->lr=0x80200838u; f_801FB82C(c); // 80200834
L_80200838:;
  c->r[11]=c->r[1]+0x00000020u; // 80200838
  c->lr=0x80200840u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020083C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200840
  c->lr=c->r[0]; // 80200844
  c->r[1]=c->r[1]+0x00000020u; // 80200848
  return; // 8020084C
}

// fn_80200850
void f_80200850(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200850
  c->r[0]=c->lr; // 80200854
  W32(c->r[1]+0x00000014u,c->r[0]); // 80200858
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020085C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80200860
  c->r[30]=c->r[3]|c->r[3]; // 80200864
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80200868
  c->lr=0x80200870u; f_80207A34(c); // 8020086C
  cmps(c,0,(int32_t)c->r[3],0); // 80200870
  if (crb(c,2)) { goto L_802008A4; } // 80200874
  c->r[3]=0u+0x00000002u; // 80200878
  c->r[4]=0u+0x80470000u; // 8020087C
  c->r[4]=c->r[4]+0x00007B28u; // 80200880
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200884
  c->lr=0x8020088Cu; f_803D3760(c); // 80200888
  c->r[3]=c->r[30]|c->r[30]; // 8020088C
  c->lr=0x80200894u; f_801FB2D4(c); // 80200890
  c->r[3]=c->r[30]|c->r[30]; // 80200894
  c->r[4]=0u+0x0000001Eu; // 80200898
  c->lr=0x802008A0u; f_801FB330(c); // 8020089C
  goto L_802009D0; // 802008A0
L_802008A4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802008A4
  cmpu(c,0,c->r[0],0x0000000Eu); // 802008A8
  if (crb(c,1)) { goto L_802009B8; } // 802008AC
  c->r[3]=0u+0x80470000u; // 802008B0
  c->r[3]=c->r[3]+0x00007C48u; // 802008B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802008B8
  c->r[3]=R32(c->r[3]+c->r[0]); // 802008BC
  c->ctr=c->r[3]; // 802008C0
  if (true) { switch (c->ctr) { case 0x802008C8u: goto L_802008C8; case 0x802008D4u: goto L_802008D4; case 0x802008E0u: goto L_802008E0; case 0x802008ECu: goto L_802008EC; case 0x802008F8u: goto L_802008F8; case 0x80200904u: goto L_80200904; case 0x80200910u: goto L_80200910; case 0x8020091Cu: goto L_8020091C; case 0x80200928u: goto L_80200928; case 0x80200934u: goto L_80200934; case 0x8020094Cu: goto L_8020094C; case 0x80200958u: goto L_80200958; case 0x80200970u: goto L_80200970; case 0x8020097Cu: goto L_8020097C; default: break; } dispatch(c,c->ctr); return; } // 802008C4
L_802008C8:;
  c->r[3]=c->r[30]|c->r[30]; // 802008C8
  c->lr=0x802008D0u; f_802009E8(c); // 802008CC
  goto L_802009B8; // 802008D0
L_802008D4:;
  c->r[3]=c->r[30]|c->r[30]; // 802008D4
  c->lr=0x802008DCu; f_80200BE0(c); // 802008D8
  goto L_802009B8; // 802008DC
L_802008E0:;
  c->r[3]=c->r[30]|c->r[30]; // 802008E0
  c->lr=0x802008E8u; f_8020153C(c); // 802008E4
  goto L_802009B8; // 802008E8
L_802008EC:;
  c->r[3]=c->r[30]|c->r[30]; // 802008EC
  c->lr=0x802008F4u; f_8020289C(c); // 802008F0
  goto L_802009B8; // 802008F4
L_802008F8:;
  c->r[3]=c->r[30]|c->r[30]; // 802008F8
  c->lr=0x80200900u; f_80202C24(c); // 802008FC
  goto L_802009B8; // 80200900
L_80200904:;
  c->r[3]=c->r[30]|c->r[30]; // 80200904
  c->lr=0x8020090Cu; f_80202EA0(c); // 80200908
  goto L_802009B8; // 8020090C
L_80200910:;
  c->r[3]=c->r[30]|c->r[30]; // 80200910
  c->lr=0x80200918u; f_80203240(c); // 80200914
  goto L_802009B8; // 80200918
L_8020091C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020091C
  c->lr=0x80200924u; f_80203364(c); // 80200920
  goto L_802009B8; // 80200924
L_80200928:;
  c->r[3]=c->r[30]|c->r[30]; // 80200928
  c->lr=0x80200930u; f_80203A84(c); // 8020092C
  goto L_802009B8; // 80200930
L_80200934:;
  c->r[3]=0u+0x00000001u; // 80200934
  c->r[4]=0u+0x80470000u; // 80200938
  c->r[4]=c->r[4]+0x00007B64u; // 8020093C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200940
  c->lr=0x80200948u; f_803D3760(c); // 80200944
  goto L_802009B8; // 80200948
L_8020094C:;
  c->r[3]=c->r[30]|c->r[30]; // 8020094C
  c->lr=0x80200954u; f_80203E00(c); // 80200950
  goto L_802009B8; // 80200954
L_80200958:;
  c->r[3]=0u+0x00000001u; // 80200958
  c->r[4]=0u+0x80470000u; // 8020095C
  c->r[4]=c->r[4]+0x00007BACu; // 80200960
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200964
  c->lr=0x8020096Cu; f_803D3760(c); // 80200968
  goto L_802009B8; // 8020096C
L_80200970:;
  c->r[3]=c->r[30]|c->r[30]; // 80200970
  c->lr=0x80200978u; f_80204118(c); // 80200974
  goto L_802009B8; // 80200978
L_8020097C:;
  c->r[3]=0u+0x00000001u; // 8020097C
  c->r[4]=0u+0x80470000u; // 80200980
  c->r[4]=c->r[4]+0x00007BC4u; // 80200984
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200988
  c->lr=0x80200990u; f_803D3760(c); // 8020098C
  c->r[3]=0u+0x00000001u; // 80200990
  c->r[4]=0u+0x80470000u; // 80200994
  c->r[4]=c->r[4]+0x00007C10u; // 80200998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020099C
  c->lr=0x802009A4u; f_803D3760(c); // 802009A0
  c->r[3]=c->r[30]|c->r[30]; // 802009A4
  c->lr=0x802009ACu; f_802057BC(c); // 802009A8
  c->r[3]=c->r[30]|c->r[30]; // 802009AC
  c->r[4]=0u+0x00000018u; // 802009B0
  c->lr=0x802009B8u; f_801FB330(c); // 802009B4
L_802009B8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802009B8
  cmps(c,0,(int32_t)c->r[0],2); // 802009BC
  if (crb(c,2)) { goto L_802009C8; } // 802009C0
  goto L_802009D0; // 802009C4
L_802009C8:;
  c->r[3]=c->r[30]|c->r[30]; // 802009C8
  c->lr=0x802009D0u; f_801FB82C(c); // 802009CC
L_802009D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802009D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802009D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802009D8
  c->lr=c->r[0]; // 802009DC
  c->r[1]=c->r[1]+0x00000010u; // 802009E0
  return; // 802009E4
}

// fn_802009E8
void f_802009E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802009E8
  c->r[0]=c->lr; // 802009EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802009F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802009F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802009F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802009FC
  c->r[29]=c->r[3]|c->r[3]; // 80200A00
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80200A04
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80200A08
  c->lr=0x80200A10u; f_801EF3D4(c); // 80200A0C
  c->r[30]=c->r[3]|c->r[3]; // 80200A10
  c->r[3]=c->r[29]|c->r[29]; // 80200A14
  c->lr=0x80200A1Cu; f_802082B4(c); // 80200A18
  cmps(c,0,(int32_t)c->r[3],3); // 80200A1C
  if (crb(c,2)) { goto L_80200AC8; } // 80200A20
  if (!crb(c,0)) { goto L_80200A38; } // 80200A24
  cmps(c,0,(int32_t)c->r[3],1); // 80200A28
  if (crb(c,2)) { goto L_80200A44; } // 80200A2C
  if (!crb(c,0)) { goto L_80200A7C; } // 80200A30
  goto L_80200BB8; // 80200A34
L_80200A38:;
  cmps(c,0,(int32_t)c->r[3],45); // 80200A38
  if (crb(c,2)) { goto L_80200B30; } // 80200A3C
  goto L_80200BB8; // 80200A40
L_80200A44:;
  c->r[3]=0u+0x00000001u; // 80200A44
  c->r[4]=0u+0x80470000u; // 80200A48
  c->r[4]=c->r[4]+0x00007C84u; // 80200A4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200A50
  c->lr=0x80200A58u; f_803D3760(c); // 80200A54
  c->r[3]=c->r[29]|c->r[29]; // 80200A58
  c->lr=0x80200A60u; f_80207B5C(c); // 80200A5C
  c->r[3]=R32(c->r[29]+0x00000D04u); // 80200A60
  c->lr=0x80200A68u; f_80218B34(c); // 80200A64
  c->lr=0x80200A6Cu; f_802083FC(c); // 80200A68
  c->lr=0x80200A70u; f_802189C4(c); // 80200A6C
  c->r[3]=c->r[29]|c->r[29]; // 80200A70
  c->r[4]=0u+0x00000001u; // 80200A74
  c->lr=0x80200A7Cu; f_802082A0(c); // 80200A78
L_80200A7C:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80200A7C
  c->lr=0x80200A84u; f_801EF7A8(c); // 80200A80
  c->lr=0x80200A88u; f_8025BFB4(c); // 80200A84
  cmps(c,0,(int32_t)c->r[3],0); // 80200A88
  if (crb(c,2)) { goto L_80200BC4; } // 80200A8C
  c->r[3]=0u+0x00000001u; // 80200A90
  c->r[4]=0u+0x80470000u; // 80200A94
  c->r[4]=c->r[4]+0x00007CA8u; // 80200A98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200A9C
  c->lr=0x80200AA4u; f_803D3760(c); // 80200AA0
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80200AA4
  c->lr=0x80200AACu; f_801EF7B4(c); // 80200AA8
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80200AAC
  c->lr=0x80200AB4u; f_801EF7A8(c); // 80200AB0
  c->lr=0x80200AB8u; f_8025C030(c); // 80200AB4
  c->r[3]=c->r[29]|c->r[29]; // 80200AB8
  c->r[4]=0u+0x00000001u; // 80200ABC
  c->lr=0x80200AC4u; f_802082A0(c); // 80200AC0
  goto L_80200BC4; // 80200AC4
L_80200AC8:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80200AC8
  c->lr=0x80200AD0u; f_801EF7A8(c); // 80200ACC
  c->lr=0x80200AD4u; f_8025C13C(c); // 80200AD0
  cmps(c,0,(int32_t)c->r[3],0); // 80200AD4
  if (crb(c,2)) { goto L_80200BC4; } // 80200AD8
  c->r[3]=0u+0x00000001u; // 80200ADC
  c->r[4]=0u+0x80470000u; // 80200AE0
  c->r[4]=c->r[4]+0x00007CD4u; // 80200AE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200AE8
  c->lr=0x80200AF0u; f_803D3760(c); // 80200AEC
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80200AF0
  c->r[4]=0u+0x0000000Cu; // 80200AF4
  c->r[5]=0u+0x00000000u; // 80200AF8
  c->lr=0x80200B00u; f_801EF42C(c); // 80200AFC
  c->r[6]=c->r[3]|c->r[3]; // 80200B00
  c->r[3]=c->r[30]|c->r[30]; // 80200B04
  c->r[4]=0u+0x00000001u; // 80200B08
  c->r[5]=0u+0x00000001u; // 80200B0C
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80200B10
  c->lr=0x80200B18u; f_802303E8(c); // 80200B14
  cmps(c,0,(int32_t)c->r[3],0); // 80200B18
  if (crb(c,2)) { goto L_80200BC4; } // 80200B1C
  c->r[3]=c->r[29]|c->r[29]; // 80200B20
  c->r[4]=0u+0x00000001u; // 80200B24
  c->lr=0x80200B2Cu; f_802082A0(c); // 80200B28
  goto L_80200BC4; // 80200B2C
L_80200B30:;
  c->r[3]=c->r[30]|c->r[30]; // 80200B30
  c->lr=0x80200B38u; f_802304C0(c); // 80200B34
  cmps(c,0,(int32_t)c->r[3],0); // 80200B38
  if (crb(c,2)) { goto L_80200BC4; } // 80200B3C
  c->r[3]=c->r[29]|c->r[29]; // 80200B40
  c->lr=0x80200B48u; f_80208278(c); // 80200B44
  cmps(c,0,(int32_t)c->r[3],0); // 80200B48
  if (!crb(c,2)) { goto L_80200BC4; } // 80200B4C
  c->r[3]=0u+0x00000001u; // 80200B50
  c->r[4]=0u+0x80470000u; // 80200B54
  c->r[4]=c->r[4]+0x00007D00u; // 80200B58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200B5C
  c->lr=0x80200B64u; f_803D3760(c); // 80200B60
  c->r[3]=c->r[29]|c->r[29]; // 80200B64
  c->r[4]=0u+0x00000001u; // 80200B68
  c->lr=0x80200B70u; f_80208270(c); // 80200B6C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80200B70
  cmps(c,0,(int32_t)c->r[0],2); // 80200B74
  if (!crb(c,2)) { goto L_80200BAC; } // 80200B78
  c->r[3]=c->r[29]+0x000006D4u; // 80200B7C
  c->r[4]=R32(c->r[29]+0x00000D08u); // 80200B80
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80200B84
  c->r[5]=0u+0x00004650u; // 80200B88
  c->lr=0x80200B90u; f_8020834C(c); // 80200B8C
  c->r[6]=R32(c->r[29]+0x00000D08u); // 80200B90
  c->r[3]=c->r[29]+0x000006D4u; // 80200B94
  c->r[4]=0u+0x00000001u; // 80200B98
  c->r[5]=R32(c->r[6]+0x00000018u); // 80200B9C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x000006FEu); // 80200BA0
  c->r[5]=R8(c->r[5]+c->r[0]); // 80200BA4
  c->lr=0x80200BACu; f_8020C368(c); // 80200BA8
L_80200BAC:;
  c->r[0]=0u+0x00000000u; // 80200BAC
  W32(c->r[29]+0x00000D58u,c->r[0]); // 80200BB0
  goto L_80200BC4; // 80200BB4
L_80200BB8:;
  c->r[3]=c->r[29]|c->r[29]; // 80200BB8
  c->r[4]=0u+0x00000001u; // 80200BBC
  c->lr=0x80200BC4u; f_802082A0(c); // 80200BC0
L_80200BC4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80200BC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80200BC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80200BCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80200BD0
  c->lr=c->r[0]; // 80200BD4
  c->r[1]=c->r[1]+0x00000020u; // 80200BD8
  return; // 80200BDC
}

// fn_80200BE0
void f_80200BE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80200BE0
  c->r[0]=c->lr; // 80200BE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80200BE8
  c->r[11]=c->r[1]+0x00000030u; // 80200BEC
  c->lr=0x80200BF4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80200BF0
  c->r[30]=c->r[3]|c->r[3]; // 80200BF4
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80200BF8
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80200BFC
  c->lr=0x80200C04u; f_801EF3D4(c); // 80200C00
  c->r[0]=R8(c->r[13]+0xFFFFBC48u); // 80200C04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80200C08
  cmps(c,0,(int32_t)c->r[0],0); // 80200C0C
  if (!crb(c,2)) { goto L_80200C28; } // 80200C10
  c->lr=0x80200C18u; f_80361BF4(c); // 80200C14
  W32(c->r[13]+0xFFFFBC44u,c->r[4]); // 80200C18
  W32(c->r[13]+0xFFFFBC40u,c->r[3]); // 80200C1C
  c->r[0]=0u+0x00000001u; // 80200C20
  W8(c->r[13]+0xFFFFBC48u,c->r[0]); // 80200C24
L_80200C28:;
  c->r[0]=R8(c->r[13]+0xFFFFBC58u); // 80200C28
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80200C2C
  cmps(c,0,(int32_t)c->r[0],0); // 80200C30
  if (!crb(c,2)) { goto L_80200C50; } // 80200C34
  c->r[0]=R32(c->r[13]+0xFFFFBC40u); // 80200C38
  c->r[3]=R32(c->r[13]+0xFFFFBC44u); // 80200C3C
  W32(c->r[13]+0xFFFFBC54u,c->r[3]); // 80200C40
  W32(c->r[13]+0xFFFFBC50u,c->r[0]); // 80200C44
  c->r[0]=0u+0x00000001u; // 80200C48
  W8(c->r[13]+0xFFFFBC58u,c->r[0]); // 80200C4C
L_80200C50:;
  c->r[3]=c->r[30]|c->r[30]; // 80200C50
  c->lr=0x80200C58u; f_802082B4(c); // 80200C54
  cmps(c,0,(int32_t)c->r[3],99); // 80200C58
  if (crb(c,2)) { goto L_80200C9C; } // 80200C5C
  if (!crb(c,0)) { goto L_80200CC0; } // 80200C60
  cmps(c,0,(int32_t)c->r[3],0); // 80200C64
  if (crb(c,2)) { goto L_80200C70; } // 80200C68
  goto L_80200CC0; // 80200C6C
L_80200C70:;
  c->lr=0x80200C74u; f_80361BF4(c); // 80200C70
  c->r[5]=0u+0x80000000u; // 80200C74
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80200C78
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80200C7C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80200C80
  c->r[0]=0u+0x00000000u; // 80200C84
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 80200C88
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80200C8C
  W32(c->r[30]+0x0000004Cu,c->r[4]); // 80200C90
  W32(c->r[30]+0x00000048u,c->r[0]); // 80200C94
  goto L_80200D04; // 80200C98
L_80200C9C:;
  c->r[3]=0u+0x00000001u; // 80200C9C
  c->r[4]=0u+0x80470000u; // 80200CA0
  c->r[4]=c->r[4]+0x00007D24u; // 80200CA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200CA8
  c->lr=0x80200CB0u; f_803D3760(c); // 80200CAC
  c->r[3]=c->r[30]|c->r[30]; // 80200CB0
  c->r[4]=0u+0x0000001Eu; // 80200CB4
  c->lr=0x80200CBCu; f_801FB330(c); // 80200CB8
  goto L_80201524; // 80200CBC
L_80200CC0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80200CC0
  cmps(c,0,(int32_t)c->r[0],2); // 80200CC4
  if (!crb(c,2)) { goto L_80200D04; } // 80200CC8
  c->lr=0x80200CD0u; f_80361BF4(c); // 80200CCC
  c->r[0]=R32(c->r[30]+0x00000048u); // 80200CD0
  c->r[6]=R32(c->r[30]+0x0000004Cu); // 80200CD4
  c->r[0]=c->r[0]^0x80000000u; // 80200CD8
  c->r[5]=c->r[3]^0x80000000u; // 80200CDC
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80200CE0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80200CE4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80200CE8
  c->r[5]=0u-c->r[5]; // 80200CEC
  cmps(c,0,(int32_t)c->r[5],0); // 80200CF0
  if (crb(c,2)) { goto L_80200D04; } // 80200CF4
  c->r[3]=c->r[30]|c->r[30]; // 80200CF8
  c->r[4]=0u+0x00000063u; // 80200CFC
  c->lr=0x80200D04u; f_802082BC(c); // 80200D00
L_80200D04:;
  c->r[3]=c->r[30]|c->r[30]; // 80200D04
  c->lr=0x80200D0Cu; f_802082B4(c); // 80200D08
  cmps(c,0,(int32_t)c->r[3],29); // 80200D0C
  if (crb(c,2)) { goto L_802012F8; } // 80200D10
  if (!crb(c,0)) { goto L_80200D44; } // 80200D14
  cmps(c,0,(int32_t)c->r[3],2); // 80200D18
  if (crb(c,2)) { goto L_80200EC0; } // 80200D1C
  if (!crb(c,0)) { goto L_80200D34; } // 80200D20
  cmps(c,0,(int32_t)c->r[3],0); // 80200D24
  if (crb(c,2)) { goto L_80200D60; } // 80200D28
  if (!crb(c,0)) { goto L_80200DB4; } // 80200D2C
  goto L_80201518; // 80200D30
L_80200D34:;
  cmps(c,0,(int32_t)c->r[3],4); // 80200D34
  if (crb(c,2)) { goto L_80201134; } // 80200D38
  if (!crb(c,0)) { goto L_80201518; } // 80200D3C
  goto L_80201040; // 80200D40
L_80200D44:;
  cmps(c,0,(int32_t)c->r[3],46); // 80200D44
  if (crb(c,2)) { goto L_80201524; } // 80200D48
  if (!crb(c,0)) { goto L_80201518; } // 80200D4C
  cmps(c,0,(int32_t)c->r[3],31); // 80200D50
  if (crb(c,2)) { goto L_802014A8; } // 80200D54
  if (!crb(c,0)) { goto L_80201518; } // 80200D58
  goto L_80201468; // 80200D5C
L_80200D60:;
  c->r[3]=0u+0x00000001u; // 80200D60
  c->r[4]=0u+0x80470000u; // 80200D64
  c->r[4]=c->r[4]+0x00007D68u; // 80200D68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200D6C
  c->lr=0x80200D74u; f_803D3760(c); // 80200D70
  c->r[0]=0u+0x00000000u; // 80200D74
  W32(c->r[13]+0xFFFFBC5Cu,c->r[0]); // 80200D78
  W32(c->r[13]+0xFFFFBC60u,c->r[0]); // 80200D7C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80200D80
  cmps(c,0,(int32_t)c->r[0],2); // 80200D84
  if (crb(c,2)) { goto L_80200D9C; } // 80200D88
  c->r[3]=c->r[30]|c->r[30]; // 80200D8C
  c->r[4]=0u+0x0000001Fu; // 80200D90
  c->lr=0x80200D98u; f_802082BC(c); // 80200D94
  goto L_80201524; // 80200D98
L_80200D9C:;
  c->r[0]=0u+0x00000003u; // 80200D9C
  W32(c->r[13]+0xFFFFBC64u,c->r[0]); // 80200DA0
  c->r[3]=c->r[30]|c->r[30]; // 80200DA4
  c->r[4]=0u+0x00000001u; // 80200DA8
  c->lr=0x80200DB0u; f_802082A0(c); // 80200DAC
  goto L_80201524; // 80200DB0
L_80200DB4:;
  c->r[3]=0u+0x00000000u; // 80200DB4
  W32(c->r[13]+0xFFFFBC5Cu,c->r[3]); // 80200DB8
  W32(c->r[13]+0xFFFFBC60u,c->r[3]); // 80200DBC
  W8(c->r[13]+0xFFFFBC59u,c->r[3]); // 80200DC0
  c->r[0]=0u+0x000000FFu; // 80200DC4
  W8(c->r[13]+0xFFFFBC5Au,c->r[0]); // 80200DC8
  W32(c->r[13]+0xFFFFBC44u,c->r[3]); // 80200DCC
  W32(c->r[13]+0xFFFFBC40u,c->r[3]); // 80200DD0
  W32(c->r[13]+0xFFFFBC54u,c->r[3]); // 80200DD4
  W32(c->r[13]+0xFFFFBC50u,c->r[3]); // 80200DD8
  c->r[0]=0u+0xFFFFFFFFu; // 80200DDC
  W8(c->r[13]+0xFFFFBC34u,c->r[0]); // 80200DE0
  c->r[4]=0u+0x804E0000u; // 80200DE4
  c->r[3]=c->r[4]+0xFFFFA320u; // 80200DE8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80200DEC
  W32(c->r[4]+0xFFFFA320u,c->r[0]); // 80200DF0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80200DF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 80200DF8
  W32(c->r[3]+0x00000014u,c->r[0]); // 80200DFC
  W32(c->r[3]+0x00000010u,c->r[0]); // 80200E00
  c->lr=0x80200E08u; f_80361C0C(c); // 80200E04
  c->r[29]=0u+0x80000000u; // 80200E08
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80200E0C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80200E10
  c->r[28]=0u+0x10620000u; // 80200E14
  c->r[4]=c->r[28]+0x00004DD3u; // 80200E18
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80200E1C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80200E20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 80200E24
  c->r[6]=c->r[0]+c->r[3]; // 80200E28
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 80200E2C
  c->r[3]=c->r[30]+0x000006D4u; // 80200E30
  c->r[4]=R32(c->r[30]+0x00000D08u); // 80200E34
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80200E38
  c->r[5]=0u+0x00004650u; // 80200E3C
  c->lr=0x80200E44u; f_8020834C(c); // 80200E40
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200E44
  c->r[0]=R8(c->r[3]+0x00000030u); // 80200E48
  cmps(c,0,(int32_t)c->r[0],0); // 80200E4C
  if (!crb(c,2)) { goto L_80200E9C; } // 80200E50
  c->r[3]=0u+0x00000001u; // 80200E54
  c->r[4]=0u+0x80470000u; // 80200E58
  c->r[4]=c->r[4]+0x00007110u; // 80200E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200E60
  c->lr=0x80200E68u; f_803D3760(c); // 80200E64
  c->lr=0x80200E6Cu; f_80361C0C(c); // 80200E68
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80200E6C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80200E70
  c->r[4]=c->r[28]+0x00004DD3u; // 80200E74
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80200E78
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80200E7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 80200E80
  c->r[6]=c->r[0]+c->r[3]; // 80200E84
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 80200E88
  c->r[3]=c->r[30]|c->r[30]; // 80200E8C
  c->r[4]=0u+0x00000004u; // 80200E90
  c->lr=0x80200E98u; f_802082BC(c); // 80200E94
  goto L_80201524; // 80200E98
L_80200E9C:;
  c->r[3]=0u+0x00000001u; // 80200E9C
  c->r[4]=0u+0x80470000u; // 80200EA0
  c->r[4]=c->r[4]+0x00007120u; // 80200EA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200EA8
  c->lr=0x80200EB0u; f_803D3760(c); // 80200EAC
  c->r[3]=c->r[30]|c->r[30]; // 80200EB0
  c->r[4]=0u+0x00000001u; // 80200EB4
  c->lr=0x80200EBCu; f_802082A0(c); // 80200EB8
  goto L_80201524; // 80200EBC
L_80200EC0:;
  c->r[3]=c->r[30]|c->r[30]; // 80200EC0
  c->lr=0x80200EC8u; f_801FBA1C(c); // 80200EC4
  c->lr=0x80200ECCu; f_80208B40(c); // 80200EC8
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200ECC
  c->r[3]=R8(c->r[3]+0x0000003Au); // 80200ED0
  c->lr=0x80200ED8u; f_803D8328(c); // 80200ED4
  c->r[28]=c->r[3]|c->r[3]; // 80200ED8
  c->lr=0x80200EE0u; f_80208B4C(c); // 80200EDC
  cmps(c,0,(int32_t)c->r[28],0); // 80200EE0
  if (!crb(c,2)) { goto L_80200F08; } // 80200EE4
  c->r[3]=0u+0x00000002u; // 80200EE8
  c->r[4]=0u+0x80470000u; // 80200EEC
  c->r[4]=c->r[4]+0x00007D90u; // 80200EF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200EF4
  c->lr=0x80200EFCu; f_803D3760(c); // 80200EF8
  c->r[3]=c->r[30]|c->r[30]; // 80200EFC
  c->r[4]=0u+0x0000001Eu; // 80200F00
  c->lr=0x80200F08u; f_801FB330(c); // 80200F04
L_80200F08:;
  c->lr=0x80200F0Cu; f_80361BF4(c); // 80200F08
  W32(c->r[13]+0xFFFFBC54u,c->r[4]); // 80200F0C
  W32(c->r[13]+0xFFFFBC50u,c->r[3]); // 80200F10
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80200F14
  cmps(c,0,(int32_t)c->r[0],0); // 80200F18
  if (crb(c,2)) { goto L_80200F40; } // 80200F1C
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200F20
  c->r[0]=R32(c->r[3]+0x00000EF4u); // 80200F24
  cmpu(c,0,c->r[0],0x0000000Cu); // 80200F28
  if (!crb(c,2)) { goto L_80200F40; } // 80200F2C
  c->r[3]=c->r[30]|c->r[30]; // 80200F30
  c->r[4]=0u+0x0000001Fu; // 80200F34
  c->lr=0x80200F3Cu; f_802082BC(c); // 80200F38
  goto L_80201524; // 80200F3C
L_80200F40:;
  c->r[3]=R32(c->r[30]+0x00000D08u); // 80200F40
  c->r[0]=R32(c->r[3]+0x00000EF4u); // 80200F44
  cmpu(c,0,c->r[0],0x00000002u); // 80200F48
  if (!crb(c,2)) { goto L_80201024; } // 80200F4C
  c->r[0]=0u+0x00000000u; // 80200F50
  W32(c->r[3]+0x00000EF4u,c->r[0]); // 80200F54
  c->r[31]=R32(c->r[30]+0x00000D0Cu); // 80200F58
  c->r[3]=R16(c->r[31]+0x00000000u); // 80200F5C
  c->r[0]=rotl(c->r[3],0)&0x00003FFFu; // 80200F60
  cmpu(c,0,c->r[0],0x00003218u); // 80200F64
  if (!crb(c,2)) { goto L_80201524; } // 80200F68
  c->r[28]=rotl(c->r[3],18)&0x00000003u; // 80200F6C
  c->r[3]=0u+0x00000001u; // 80200F70
  c->r[4]=0u+0x80470000u; // 80200F74
  c->r[4]=c->r[4]+0x00007164u; // 80200F78
  c->r[5]=c->r[28]|c->r[28]; // 80200F7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80200F80
  c->lr=0x80200F88u; f_803D3760(c); // 80200F84
  cmps(c,0,(int32_t)c->r[28],0); // 80200F88
  if (!crb(c,2)) { goto L_80200F9C; } // 80200F8C
  c->r[0]=R8(c->r[13]+0xFFFFBC5Au); // 80200F90
  cmpu(c,0,c->r[0],0x000000FFu); // 80200F94
  if (!crb(c,2)) { goto L_80200FA0; } // 80200F98
L_80200F9C:;
  W8(c->r[13]+0xFFFFBC5Au,c->r[28]); // 80200F9C
L_80200FA0:;
  c->lr=0x80200FA4u; f_80361C0C(c); // 80200FA0
  c->r[4]=0u+0x80000000u; // 80200FA4
  c->r[0]=R32(c->r[4]+0x000000F8u); // 80200FA8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80200FAC
  c->r[4]=0u+0x10620000u; // 80200FB0
  c->r[4]=c->r[4]+0x00004DD3u; // 80200FB4
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 80200FB8
  c->r[4]=rotl(c->r[0],26)&0x03FFFFFFu; // 80200FBC
  c->r[0]=rotl(c->r[4],4)&0xFFFFFFF0u; // 80200FC0
  c->r[0]=c->r[0]+c->r[4]; // 80200FC4
  c->r[6]=c->r[0]+c->r[3]; // 80200FC8
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 80200FCC
  c->r[0]=R8(c->r[13]+0xFFFFBC34u); // 80200FD0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80200FD4
  cmps(c,0,(int32_t)c->r[4],0); // 80200FD8
  if (crb(c,0)) { goto L_80201010; } // 80200FDC
  cmps(c,0,(int32_t)c->r[4],3); // 80200FE0
  if (!crb(c,0)) { goto L_80201010; } // 80200FE4
  c->r[3]=R32(c->r[13]+0xFFFFBC44u); // 80200FE8
  c->r[0]=R32(c->r[13]+0xFFFFBC54u); // 80200FEC
  c->r[6]=c->r[0]-c->r[3]; // 80200FF0
  c->r[5]=sraw(c,c->r[6],31); // 80200FF4
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80200FF8
  c->r[3]=0u+0x804E0000u; // 80200FFC
  c->r[0]=c->r[3]+0xFFFFA320u; // 80201000
  c->r[3]=c->r[0]+c->r[4]; // 80201004
  W32(c->r[3]+0x00000004u,c->r[6]); // 80201008
  W32(c->r[3]+0x00000000u,c->r[5]); // 8020100C
L_80201010:;
  c->r[3]=0u+0x00000000u; // 80201010
  c->r[0]=R16(c->r[31]+0x00000000u); // 80201014
  c->r[0]=(rotl(c->r[3],0)&0x00003FFFu)|(c->r[0]&~0x00003FFFu); // 80201018
  W16(c->r[31]+0x00000000u,c->r[0]); // 8020101C
  goto L_80201524; // 80201020
L_80201024:;
  c->r[0]=R8(c->r[13]+0xFFFFBC5Au); // 80201024
  cmpu(c,0,c->r[0],0x00000003u); // 80201028
  if (crb(c,1)) { goto L_80201524; } // 8020102C
  c->r[3]=c->r[30]|c->r[30]; // 80201030
  c->r[4]=0u+0x00000001u; // 80201034
  c->lr=0x8020103Cu; f_802082A0(c); // 80201038
  goto L_80201524; // 8020103C
L_80201040:;
  c->r[0]=R8(c->r[13]+0xFFFFBC5Au); // 80201040
  cmps(c,0,(int32_t)c->r[0],2); // 80201044
  if (crb(c,2)) { goto L_80201084; } // 80201048
  if (!crb(c,0)) { goto L_80201060; } // 8020104C
  cmps(c,0,(int32_t)c->r[0],0); // 80201050
  if (crb(c,2)) { goto L_8020106C; } // 80201054
  if (!crb(c,0)) { goto L_80201078; } // 80201058
  goto L_802010F8; // 8020105C
L_80201060:;
  cmps(c,0,(int32_t)c->r[0],4); // 80201060
  if (!crb(c,0)) { goto L_802010F8; } // 80201064
  goto L_80201090; // 80201068
L_8020106C:;
  c->r[0]=0u+0x00000001u; // 8020106C
  W8(c->r[13]+0xFFFFBC59u,c->r[0]); // 80201070
  goto L_802010F8; // 80201074
L_80201078:;
  c->r[0]=0u+0x00000002u; // 80201078
  W8(c->r[13]+0xFFFFBC59u,c->r[0]); // 8020107C
  goto L_802010F8; // 80201080
L_80201084:;
  c->r[0]=0u+0x00000003u; // 80201084
  W8(c->r[13]+0xFFFFBC59u,c->r[0]); // 80201088
  goto L_802010F8; // 8020108C
L_80201090:;
  c->r[0]=R8(c->r[13]+0xFFFFBC59u); // 80201090
  cmpu(c,0,c->r[0],0x00000003u); // 80201094
  if (!crb(c,2)) { goto L_802010F0; } // 80201098
  c->r[0]=R32(c->r[13]+0xFFFFBC60u); // 8020109C
  cmps(c,0,(int32_t)c->r[0],0); // 802010A0
  if (crb(c,2)) { goto L_802010F0; } // 802010A4
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 802010A8
  cmps(c,0,(int32_t)c->r[0],0); // 802010AC
  if (crb(c,2)) { goto L_802010C4; } // 802010B0
  c->r[3]=c->r[30]|c->r[30]; // 802010B4
  c->r[4]=0u+0x0000001Eu; // 802010B8
  c->lr=0x802010C0u; f_802082BC(c); // 802010BC
  goto L_80201524; // 802010C0
L_802010C4:;
  c->r[3]=0u+0x00000001u; // 802010C4
  c->r[4]=0u+0x80470000u; // 802010C8
  c->r[4]=c->r[4]+0x00007210u; // 802010CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802010D0
  c->lr=0x802010D8u; f_803D3760(c); // 802010D4
  c->r[3]=c->r[30]|c->r[30]; // 802010D8
  c->r[4]=0u+0x0000001Du; // 802010DC
  c->lr=0x802010E4u; f_802082BC(c); // 802010E0
  c->r[0]=0u+0x00000001u; // 802010E4
  W32(c->r[13]+0xFFFFBC5Cu,c->r[0]); // 802010E8
  goto L_80201524; // 802010EC
L_802010F0:;
  c->r[0]=0u+0x00000003u; // 802010F0
  W8(c->r[13]+0xFFFFBC59u,c->r[0]); // 802010F4
L_802010F8:;
  c->lr=0x802010FCu; f_80361C0C(c); // 802010F8
  c->r[0]=R32(c->r[13]+0xFFFFBC38u); // 802010FC
  cmpu(c,0,c->r[3],c->r[0]); // 80201100
  if (!crb(c,0)) { goto L_80201124; } // 80201104
  c->r[0]=R32(c->r[13]+0xFFFFBC5Cu); // 80201108
  cmps(c,0,(int32_t)c->r[0],0); // 8020110C
  if (!crb(c,2)) { goto L_80201524; } // 80201110
  c->r[3]=c->r[30]|c->r[30]; // 80201114
  c->r[4]=0u+0x00000002u; // 80201118
  c->lr=0x80201120u; f_802082BC(c); // 8020111C
  goto L_80201524; // 80201120
L_80201124:;
  c->r[3]=c->r[30]|c->r[30]; // 80201124
  c->r[4]=0u+0x00000001u; // 80201128
  c->lr=0x80201130u; f_802082A0(c); // 8020112C
  goto L_80201524; // 80201130
L_80201134:;
  c->r[3]=0u+0x00000001u; // 80201134
  c->r[4]=0u+0x80470000u; // 80201138
  c->r[4]=c->r[4]+0x00007DC4u; // 8020113C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201140
  c->lr=0x80201148u; f_803D3760(c); // 80201144
  c->r[3]=c->r[30]+0x000006D4u; // 80201148
  c->r[4]=R32(c->r[30]+0x00000D08u); // 8020114C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80201150
  c->lr=0x80201158u; f_8020BF40(c); // 80201154
  cmps(c,0,(int32_t)c->r[3],0); // 80201158
  if (crb(c,2)) { goto L_802012A8; } // 8020115C
  c->r[3]=R8(c->r[13]+0xFFFFBC59u); // 80201160
  c->r[0]=R16(c->r[1]+0x00000008u); // 80201164
  c->r[0]=(rotl(c->r[3],14)&0x0000C000u)|(c->r[0]&~0x0000C000u); // 80201168
  c->r[3]=0u+0x00003218u; // 8020116C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80201170
  c->r[0]=(rotl(c->r[3],0)&0x00003FFFu)|(c->r[0]&~0x00003FFFu); // 80201174
  W16(c->r[1]+0x00000008u,c->r[0]); // 80201178
  c->r[3]=c->r[30]+0x000006D4u; // 8020117C
  c->r[4]=R32(c->r[30]+0x00000D08u); // 80201180
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80201184
  c->r[5]=0u+0x00004650u; // 80201188
  c->lr=0x80201190u; f_8020834C(c); // 8020118C
  c->r[3]=c->r[30]+0x000006D4u; // 80201190
  c->r[4]=R32(c->r[30]+0x00000D08u); // 80201194
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80201198
  c->r[5]=c->r[1]+0x00000008u; // 8020119C
  c->r[6]=0u+0x00000002u; // 802011A0
  c->r[7]=0u+0x00000000u; // 802011A4
  c->lr=0x802011ACu; f_8020BFE0(c); // 802011A8
  cmps(c,0,(int32_t)c->r[3],0); // 802011AC
  if (crb(c,2)) { goto L_802012E8; } // 802011B0
  c->r[3]=0u+0x00000001u; // 802011B4
  c->r[4]=0u+0x80470000u; // 802011B8
  c->r[4]=c->r[4]+0x00007248u; // 802011BC
  c->r[5]=R8(c->r[13]+0xFFFFBC59u); // 802011C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802011C4
  c->lr=0x802011CCu; f_803D3760(c); // 802011C8
  c->r[0]=R8(c->r[13]+0xFFFFBC59u); // 802011CC
  cmpu(c,0,c->r[0],0x00000003u); // 802011D0
  if (!crb(c,2)) { goto L_80201204; } // 802011D4
  c->r[3]=R32(c->r[13]+0xFFFFBC64u); // 802011D8
  cmps(c,0,(int32_t)c->r[3],0); // 802011DC
  if (!crb(c,1)) { goto L_802011F0; } // 802011E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802011E4
  W32(c->r[13]+0xFFFFBC64u,c->r[0]); // 802011E8
  goto L_80201204; // 802011EC
L_802011F0:;
  c->r[0]=R32(c->r[13]+0xFFFFBC60u); // 802011F0
  cmps(c,0,(int32_t)c->r[0],0); // 802011F4
  if (!crb(c,2)) { goto L_80201204; } // 802011F8
  c->r[0]=0u+0x00000001u; // 802011FC
  W32(c->r[13]+0xFFFFBC60u,c->r[0]); // 80201200
L_80201204:;
  c->lr=0x80201208u; f_80361C0C(c); // 80201204
  c->r[4]=0u+0x80000000u; // 80201208
  c->r[0]=R32(c->r[4]+0x000000F8u); // 8020120C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80201210
  c->r[4]=0u+0x10620000u; // 80201214
  c->r[4]=c->r[4]+0x00004DD3u; // 80201218
  c->r[0]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[0])>>32); // 8020121C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80201220
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)720); // 80201224
  c->r[6]=c->r[0]+c->r[3]; // 80201228
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 8020122C
  c->lr=0x80201234u; f_80361BF4(c); // 80201230
  W32(c->r[13]+0xFFFFBC44u,c->r[4]); // 80201234
  W32(c->r[13]+0xFFFFBC40u,c->r[3]); // 80201238
  c->r[6]=R8(c->r[13]+0xFFFFBC34u); // 8020123C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 80201240
  cmps(c,0,(int32_t)c->r[0],0); // 80201244
  if (!crb(c,0)) { goto L_80201258; } // 80201248
  c->r[0]=c->r[6]+0x00000001u; // 8020124C
  W8(c->r[13]+0xFFFFBC34u,c->r[0]); // 80201250
  goto L_802012E8; // 80201254
L_80201258:;
  cmps(c,0,(int32_t)c->r[0],2); // 80201258
  if (!crb(c,0)) { goto L_802012E8; } // 8020125C
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80201260
  c->r[3]=0u+0x804E0000u; // 80201264
  c->r[0]=c->r[3]+0xFFFFA320u; // 80201268
  c->r[3]=c->r[0]+c->r[4]; // 8020126C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80201270
  c->r[5]=R32(c->r[3]+0x00000004u); // 80201274
  c->r[3]=0u+0x00000000u; // 80201278
  c->r[0]=c->r[0]^0x80000000u; // 8020127C
  c->r[4]=c->r[3]^0x80000000u; // 80201280
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 80201284
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80201288
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8020128C
  c->r[4]=0u-c->r[4]; // 80201290
  cmps(c,0,(int32_t)c->r[4],0); // 80201294
  if (!crb(c,2)) { goto L_802012E8; } // 80201298
  c->r[0]=c->r[6]+0x00000001u; // 8020129C
  W8(c->r[13]+0xFFFFBC34u,c->r[0]); // 802012A0
  goto L_802012E8; // 802012A4
L_802012A8:;
  c->r[3]=0u+0x00000002u; // 802012A8
  c->r[4]=0u+0x80470000u; // 802012AC
  c->r[4]=c->r[4]+0x00007DE0u; // 802012B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802012B4
  c->lr=0x802012BCu; f_803D3760(c); // 802012B8
  c->lr=0x802012C0u; f_80208B40(c); // 802012BC
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802012C0
  c->r[3]=R8(c->r[3]+0x0000003Au); // 802012C4
  c->lr=0x802012CCu; f_803D8328(c); // 802012C8
  c->r[28]=c->r[3]|c->r[3]; // 802012CC
  c->lr=0x802012D4u; f_80208B4C(c); // 802012D0
  cmps(c,0,(int32_t)c->r[28],0); // 802012D4
  if (!crb(c,2)) { goto L_802012E8; } // 802012D8
  c->r[3]=c->r[30]|c->r[30]; // 802012DC
  c->r[4]=0u+0x0000001Eu; // 802012E0
  c->lr=0x802012E8u; f_801FB330(c); // 802012E4
L_802012E8:;
  c->r[3]=c->r[30]|c->r[30]; // 802012E8
  c->r[4]=0u+0x00000002u; // 802012EC
  c->lr=0x802012F4u; f_802082BC(c); // 802012F0
  goto L_80201524; // 802012F4
L_802012F8:;
  c->r[3]=0u+0x00000001u; // 802012F8
  c->r[4]=0u+0x80470000u; // 802012FC
  c->r[4]=c->r[4]+0x00007E10u; // 80201300
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201304
  c->lr=0x8020130Cu; f_803D3760(c); // 80201308
  c->r[6]=0u+0x00000000u; // 8020130C
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 80201310
  c->r[26]=0u+0x00000000u; // 80201314
  c->r[25]=0u+0x00000000u; // 80201318
  c->r[3]=0u+0x804E0000u; // 8020131C
  c->r[27]=c->r[3]+0xFFFFA320u; // 80201320
  c->r[28]=0u+0x80470000u; // 80201324
  c->r[31]=c->r[6]|c->r[6]; // 80201328
  c->r[29]=c->r[6]^0x80000000u; // 8020132C
L_80201330:;
  c->r[3]=0u+0x00000001u; // 80201330
  c->r[4]=c->r[28]+0x000072C0u; // 80201334
  c->r[5]=c->r[25]|c->r[25]; // 80201338
  c->r[6]=R32(c->r[27]+0x00000004u); // 8020133C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201340
  c->lr=0x80201348u; f_803D3760(c); // 80201344
  c->r[0]=R32(c->r[27]+0x00000000u); // 80201348
  c->r[4]=R32(c->r[27]+0x00000004u); // 8020134C
  c->r[3]=c->r[0]^0x80000000u; // 80201350
  c->r[0]=addc(c,~c->r[4],c->r[31],1); // 80201354
  c->r[3]=addc(c,~c->r[3],c->r[29],c->xer_ca); // 80201358
  c->r[3]=addc(c,~c->r[29],c->r[29],c->xer_ca); // 8020135C
  c->r[3]=0u-c->r[3]; // 80201360
  cmps(c,0,(int32_t)c->r[3],0); // 80201364
  if (crb(c,2)) { goto L_8020137C; } // 80201368
  c->r[0]=R32(c->r[13]+0xFFFFBC38u); // 8020136C
  c->r[6]=c->r[0]+c->r[4]; // 80201370
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 80201374
  c->r[26]=c->r[26]+0x00000001u; // 80201378
L_8020137C:;
  c->r[27]=c->r[27]+0x00000008u; // 8020137C
  c->r[25]=c->r[25]+0x00000001u; // 80201380
  cmps(c,0,(int32_t)c->r[25],3); // 80201384
  if (crb(c,0)) { IRQCHK(c); goto L_80201330; } // 80201388
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[26]; // 8020138C
  cmps(c,0,(int32_t)c->r[0],0); // 80201390
  if (!crb(c,1)) { goto L_802013A8; } // 80201394
  c->r[3]=R32(c->r[13]+0xFFFFBC38u); // 80201398
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8020139C
  c->r[6]=divwu(c->r[3],c->r[0]); // 802013A0
  goto L_802013C8; // 802013A4
L_802013A8:;
  c->r[3]=0u+0x80000000u; // 802013A8
  c->r[0]=R32(c->r[3]+0x000000F8u); // 802013AC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802013B0
  c->r[3]=0u+0x10620000u; // 802013B4
  c->r[3]=c->r[3]+0x00004DD3u; // 802013B8
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 802013BC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802013C0
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)30); // 802013C4
L_802013C8:;
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 802013C8
  c->r[3]=R32(c->r[30]+0x00000D08u); // 802013CC
  c->r[0]=R8(c->r[3]+0x00000030u); // 802013D0
  cmps(c,0,(int32_t)c->r[0],0); // 802013D4
  if (!crb(c,2)) { goto L_802013E8; } // 802013D8
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 802013DC
  c->r[6]=c->r[0]-c->r[6]; // 802013E0
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 802013E4
L_802013E8:;
  c->r[3]=0u+0x00000001u; // 802013E8
  c->r[4]=0u+0x80470000u; // 802013EC
  c->r[4]=c->r[4]+0x000072D8u; // 802013F0
  c->r[29]=0u+0x80000000u; // 802013F4
  c->r[0]=R32(c->r[29]+0x000000F8u); // 802013F8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802013FC
  c->r[31]=0u+0x10620000u; // 80201400
  c->r[5]=c->r[31]+0x00004DD3u; // 80201404
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 80201408
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8020140C
  c->r[5]=divwu(c->r[6],c->r[0]); // 80201410
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201414
  c->lr=0x8020141Cu; f_803D3760(c); // 80201418
  c->lr=0x80201420u; f_80361BF4(c); // 8020141C
  c->r[0]=R32(c->r[13]+0xFFFFBC38u); // 80201420
  c->r[6]=c->r[0]+c->r[4]; // 80201424
  W32(c->r[13]+0xFFFFBC38u,c->r[6]); // 80201428
  c->r[3]=0u+0x00000001u; // 8020142C
  c->r[4]=0u+0x80470000u; // 80201430
  c->r[4]=c->r[4]+0x000072ECu; // 80201434
  c->r[0]=R32(c->r[29]+0x000000F8u); // 80201438
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020143C
  c->r[5]=c->r[31]+0x00004DD3u; // 80201440
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 80201444
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80201448
  c->r[5]=divwu(c->r[6],c->r[0]); // 8020144C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201450
  c->lr=0x80201458u; f_803D3760(c); // 80201454
  c->r[3]=c->r[30]|c->r[30]; // 80201458
  c->r[4]=0u+0x00000001u; // 8020145C
  c->lr=0x80201464u; f_802082A0(c); // 80201460
  goto L_80201524; // 80201464
L_80201468:;
  c->lr=0x8020146Cu; f_80361C0C(c); // 80201468
  c->r[0]=0u+0x00000000u; // 8020146C
  c->r[5]=R32(c->r[13]+0xFFFFBC38u); // 80201470
  c->r[4]=0u+0x00000000u; // 80201474
  c->r[0]=c->r[0]^0x80000000u; // 80201478
  c->r[4]=c->r[4]^0x80000000u; // 8020147C
  c->r[3]=addc(c,~c->r[5],c->r[3],1); // 80201480
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80201484
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80201488
  c->r[4]=0u-c->r[4]; // 8020148C
  cmps(c,0,(int32_t)c->r[4],0); // 80201490
  if (crb(c,2)) { goto L_802014A8; } // 80201494
  c->r[3]=c->r[30]|c->r[30]; // 80201498
  c->r[4]=0u+0x00000002u; // 8020149C
  c->lr=0x802014A4u; f_802082BC(c); // 802014A0
  goto L_80201524; // 802014A4
L_802014A8:;
  c->r[3]=0u+0x00000001u; // 802014A8
  c->r[4]=0u+0x80470000u; // 802014AC
  c->r[4]=c->r[4]+0x00007E38u; // 802014B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802014B4
  c->lr=0x802014BCu; f_803D3760(c); // 802014B8
  c->r[0]=0u+0x00000000u; // 802014BC
  W8(c->r[13]+0xFFFFBC59u,c->r[0]); // 802014C0
  W8(c->r[13]+0xFFFFBC5Au,c->r[0]); // 802014C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 802014C8
  cmps(c,0,(int32_t)c->r[0],2); // 802014CC
  if (!crb(c,2)) { goto L_80201504; } // 802014D0
  c->r[3]=c->r[30]+0x000006D4u; // 802014D4
  c->r[4]=R32(c->r[30]+0x00000D08u); // 802014D8
  c->r[4]=R8(c->r[4]+0x0000003Au); // 802014DC
  c->r[5]=0u+0x00004650u; // 802014E0
  c->lr=0x802014E8u; f_8020834C(c); // 802014E4
  c->r[6]=R32(c->r[30]+0x00000D08u); // 802014E8
  c->r[3]=c->r[30]+0x000006D4u; // 802014EC
  c->r[4]=0u+0x00000001u; // 802014F0
  c->r[5]=R32(c->r[6]+0x00000018u); // 802014F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x000006FEu); // 802014F8
  c->r[5]=R8(c->r[5]+c->r[0]); // 802014FC
  c->lr=0x80201504u; f_8020C368(c); // 80201500
L_80201504:;
  c->r[0]=0u+0xFFFFFFFFu; // 80201504
  W32(c->r[31]+0x00000014u,c->r[0]); // 80201508
  c->r[0]=0u+0x00000002u; // 8020150C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80201510
  goto L_80201524; // 80201514
L_80201518:;
  c->r[3]=c->r[30]|c->r[30]; // 80201518
  c->r[4]=0u+0x00000001u; // 8020151C
  c->lr=0x80201524u; f_802082A0(c); // 80201520
L_80201524:;
  c->r[11]=c->r[1]+0x00000030u; // 80201524
  c->lr=0x8020152Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80201528
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020152C
  c->lr=c->r[0]; // 80201530
  c->r[1]=c->r[1]+0x00000030u; // 80201534
  return; // 80201538
}

// fn_8020153C
void f_8020153C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020153C
  c->r[0]=c->lr; // 80201540
  W32(c->r[1]+0x00000034u,c->r[0]); // 80201544
  c->r[11]=c->r[1]+0x00000030u; // 80201548
  c->lr=0x80201550u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020154C
  c->r[25]=c->r[3]|c->r[3]; // 80201550
  c->r[28]=R32(c->r[3]+0x00000D08u); // 80201554
  c->r[29]=0u+0x00000000u; // 80201558
  c->r[30]=R32(c->r[3]+0x00000D10u); // 8020155C
  c->lr=0x80201564u; f_802082D4(c); // 80201560
  c->r[27]=c->r[3]|c->r[3]; // 80201564
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80201568
  c->lr=0x80201570u; f_801EF3D4(c); // 8020156C
  c->r[26]=c->r[3]|c->r[3]; // 80201570
  c->r[4]=R32(c->r[25]+0x00000D08u); // 80201574
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000006FCu); // 80201578
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 8020157C
  c->r[3]=c->r[4]+c->r[0]; // 80201580
  c->r[0]=c->r[3]+0x0000007Cu; // 80201584
  W32(c->r[4]+0x00000700u,c->r[0]); // 80201588
  c->r[4]=R32(c->r[25]+0x00000D08u); // 8020158C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x000006FEu); // 80201590
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 80201594
  c->r[3]=c->r[4]+c->r[0]; // 80201598
  c->r[0]=c->r[3]+0x0000007Cu; // 8020159C
  W32(c->r[4]+0x00000704u,c->r[0]); // 802015A0
  c->r[3]=c->r[25]|c->r[25]; // 802015A4
  c->lr=0x802015ACu; f_802082B4(c); // 802015A8
  cmps(c,0,(int32_t)c->r[3],99); // 802015AC
  if (crb(c,2)) { goto L_802015F0; } // 802015B0
  if (!crb(c,0)) { goto L_80201614; } // 802015B4
  cmps(c,0,(int32_t)c->r[3],0); // 802015B8
  if (crb(c,2)) { goto L_802015C4; } // 802015BC
  goto L_80201614; // 802015C0
L_802015C4:;
  c->lr=0x802015C8u; f_80361BF4(c); // 802015C4
  c->r[5]=0u+0x80000000u; // 802015C8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802015CC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802015D0
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 802015D4
  c->r[0]=0u+0x00000000u; // 802015D8
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 802015DC
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 802015E0
  W32(c->r[25]+0x0000004Cu,c->r[4]); // 802015E4
  W32(c->r[25]+0x00000048u,c->r[0]); // 802015E8
  goto L_80201658; // 802015EC
L_802015F0:;
  c->r[3]=0u+0x00000001u; // 802015F0
  c->r[4]=0u+0x80470000u; // 802015F4
  c->r[4]=c->r[4]+0x00007E60u; // 802015F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802015FC
  c->lr=0x80201604u; f_803D3760(c); // 80201600
  c->r[3]=c->r[25]|c->r[25]; // 80201604
  c->r[4]=0u+0x0000001Eu; // 80201608
  c->lr=0x80201610u; f_801FB330(c); // 8020160C
  goto L_80202884; // 80201610
L_80201614:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80201614
  cmps(c,0,(int32_t)c->r[0],2); // 80201618
  if (!crb(c,2)) { goto L_80201658; } // 8020161C
  c->lr=0x80201624u; f_80361BF4(c); // 80201620
  c->r[0]=R32(c->r[25]+0x00000048u); // 80201624
  c->r[6]=R32(c->r[25]+0x0000004Cu); // 80201628
  c->r[0]=c->r[0]^0x80000000u; // 8020162C
  c->r[5]=c->r[3]^0x80000000u; // 80201630
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80201634
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80201638
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8020163C
  c->r[5]=0u-c->r[5]; // 80201640
  cmps(c,0,(int32_t)c->r[5],0); // 80201644
  if (crb(c,2)) { goto L_80201658; } // 80201648
  c->r[3]=c->r[25]|c->r[25]; // 8020164C
  c->r[4]=0u+0x00000063u; // 80201650
  c->lr=0x80201658u; f_802082BC(c); // 80201654
L_80201658:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 80201658
  c->r[0]=c->r[3]+0x00000001u; // 8020165C
  cmpu(c,0,c->r[0],0x00000006u); // 80201660
  if (crb(c,1)) { goto L_80202808; } // 80201664
  c->r[3]=0u+0x80480000u; // 80201668
  c->r[3]=c->r[3]+0xFFFF82E8u; // 8020166C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80201670
  c->r[3]=R32(c->r[3]+c->r[0]); // 80201674
  c->ctr=c->r[3]; // 80201678
  if (true) { switch (c->ctr) { case 0x80201680u: goto L_80201680; case 0x80201764u: goto L_80201764; case 0x80201B84u: goto L_80201B84; case 0x80201F44u: goto L_80201F44; case 0x80202634u: goto L_80202634; case 0x802026BCu: goto L_802026BC; case 0x80202704u: goto L_80202704; default: break; } dispatch(c,c->ctr); return; } // 8020167C
L_80201680:;
  c->r[3]=0u+0x00000001u; // 80201680
  c->r[4]=0u+0x80470000u; // 80201684
  c->r[4]=c->r[4]+0x00007EA8u; // 80201688
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020168C
  c->lr=0x80201694u; f_803D3760(c); // 80201690
  c->r[31]=0u+0x00000000u; // 80201694
  W32(c->r[13]+0xFFFFBC6Cu,c->r[31]); // 80201698
  W32(c->r[13]+0xFFFFBC74u,c->r[31]); // 8020169C
  W32(c->r[13]+0xFFFFBC7Cu,c->r[31]); // 802016A0
  W32(c->r[13]+0xFFFFBC78u,c->r[31]); // 802016A4
  W32(c->r[13]+0xFFFFBC70u,c->r[31]); // 802016A8
  W32(c->r[13]+0xFFFFBC80u,c->r[31]); // 802016AC
  W32(c->r[13]+0xFFFFBC84u,c->r[31]); // 802016B0
  W32(c->r[13]+0xFFFFBC88u,c->r[31]); // 802016B4
  c->r[0]=R32(c->r[28]+0x00000000u); // 802016B8
  cmps(c,0,(int32_t)c->r[0],2); // 802016BC
  if (crb(c,2)) { goto L_802016C8; } // 802016C0
  goto L_80201758; // 802016C4
L_802016C8:;
  c->r[3]=R32(c->r[25]+0x00000D10u); // 802016C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E4Cu); // 802016CC
  W16(c->r[3]+0x00000000u,c->r[0]); // 802016D0
  c->r[4]=0u+0xFFFFFFFFu; // 802016D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 802016D8
  c->r[0]=(rotl(c->r[4],4)&0x0000FFF0u)|(c->r[0]&~0x0000FFF0u); // 802016DC
  W16(c->r[3]+0x00000002u,c->r[0]); // 802016E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 802016E4
  c->r[0]=(rotl(c->r[4],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 802016E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 802016EC
  W32(c->r[3]+0x00000004u,c->r[4]); // 802016F0
  W16(c->r[3]+0x00000008u,c->r[4]); // 802016F4
  c->r[3]=R32(c->r[25]+0x00000D08u); // 802016F8
  c->r[0]=R8(c->r[3]+0x00000030u); // 802016FC
  cmps(c,0,(int32_t)c->r[0],0); // 80201700
  if (!crb(c,2)) { goto L_8020174C; } // 80201704
  c->r[0]=0u+0x0000000Cu; // 80201708
  W32(c->r[28]+0x00000EF0u,c->r[0]); // 8020170C
  W32(c->r[28]+0x00000EF8u,c->r[31]); // 80201710
  c->lr=0x80201718u; f_80361BF4(c); // 80201714
  c->r[5]=0u+0x80000000u; // 80201718
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8020171C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80201720
  c->r[5]=0u+0x10620000u; // 80201724
  c->r[5]=c->r[5]+0x00004DD3u; // 80201728
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 8020172C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80201730
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1500); // 80201734
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 80201738
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 8020173C
  W32(c->r[13]+0xFFFFBC7Cu,c->r[4]); // 80201740
  W32(c->r[13]+0xFFFFBC78u,c->r[0]); // 80201744
  goto L_80201758; // 80201748
L_8020174C:;
  W32(c->r[28]+0x00000EF0u,c->r[4]); // 8020174C
  c->r[0]=0u+0x00000001u; // 80201750
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 80201754
L_80201758:;
  c->r[0]=0u+0x00000000u; // 80201758
  W32(c->r[28]+0x00000014u,c->r[0]); // 8020175C
  goto L_80202808; // 80201760
L_80201764:;
  c->r[31]=0u+0x00000000u; // 80201764
  W8(c->r[13]+0xFFFFBC68u,c->r[31]); // 80201768
  c->r[0]=R32(c->r[28]+0x00000000u); // 8020176C
  cmps(c,0,(int32_t)c->r[0],2); // 80201770
  if (crb(c,2)) { goto L_8020177C; } // 80201774
  goto L_802019A4; // 80201778
L_8020177C:;
  c->r[3]=c->r[25]|c->r[25]; // 8020177C
  c->lr=0x80201784u; f_801FBA1C(c); // 80201780
  c->lr=0x80201788u; f_80361BF4(c); // 80201784
  c->r[0]=R32(c->r[13]+0xFFFFBC78u); // 80201788
  c->r[6]=R32(c->r[13]+0xFFFFBC7Cu); // 8020178C
  c->r[0]=c->r[0]^0x80000000u; // 80201790
  c->r[5]=c->r[3]^0x80000000u; // 80201794
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80201798
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 8020179C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802017A0
  c->r[5]=0u-c->r[5]; // 802017A4
  cmps(c,0,(int32_t)c->r[5],0); // 802017A8
  if (crb(c,2)) { goto L_80201804; } // 802017AC
  c->r[3]=0u+0x00000001u; // 802017B0
  c->r[4]=0u+0x80470000u; // 802017B4
  c->r[4]=c->r[4]+0x00007EC8u; // 802017B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802017BC
  c->lr=0x802017C4u; f_803D3760(c); // 802017C0
  c->r[0]=0u+0x0000000Cu; // 802017C4
  W32(c->r[28]+0x00000EF0u,c->r[0]); // 802017C8
  W32(c->r[28]+0x00000EF8u,c->r[31]); // 802017CC
  c->lr=0x802017D4u; f_80361BF4(c); // 802017D0
  c->r[5]=0u+0x80000000u; // 802017D4
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802017D8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802017DC
  c->r[5]=0u+0x10620000u; // 802017E0
  c->r[5]=c->r[5]+0x00004DD3u; // 802017E4
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 802017E8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802017EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2000); // 802017F0
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 802017F4
  c->r[0]=addc(c,c->r[31],c->r[3],c->xer_ca); // 802017F8
  W32(c->r[13]+0xFFFFBC7Cu,c->r[4]); // 802017FC
  W32(c->r[13]+0xFFFFBC78u,c->r[0]); // 80201800
L_80201804:;
  c->r[3]=R32(c->r[25]+0x00000D08u); // 80201804
  c->r[5]=R32(c->r[3]+0x00000EF4u); // 80201808
  cmpu(c,0,c->r[5],0x0000000Cu); // 8020180C
  if (!crb(c,2)) { goto L_80201824; } // 80201810
  c->r[29]=R32(c->r[25]+0x00000D0Cu); // 80201814
  c->r[0]=0u+0x00000000u; // 80201818
  W32(c->r[3]+0x00000EF4u,c->r[0]); // 8020181C
  goto L_80201840; // 80201820
L_80201824:;
  cmps(c,0,(int32_t)c->r[5],0); // 80201824
  if (!crb(c,1)) { goto L_80201840; } // 80201828
  c->r[3]=0u+0x00000001u; // 8020182C
  c->r[4]=0u+0x80470000u; // 80201830
  c->r[4]=c->r[4]+0x00007EE4u; // 80201834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201838
  c->lr=0x80201840u; f_803D3760(c); // 8020183C
L_80201840:;
  cmps(c,0,(int32_t)c->r[29],0); // 80201840
  if (crb(c,2)) { goto L_80201A38; } // 80201844
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000000u); // 80201848
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E4Cu); // 8020184C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80201850
  if (!crb(c,2)) { goto L_80201A38; } // 80201854
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 80201858
  c->r[0]=rotl(c->r[4],16)&0xFFF80000u; // 8020185C
  c->r[0]=sraw(c,c->r[0],20); // 80201860
  cmps(c,0,(int32_t)c->r[0],-1); // 80201864
  if (!crb(c,2)) { goto L_80201A38; } // 80201868
  c->r[0]=R32(c->r[29]+0x00000004u); // 8020186C
  cmps(c,0,(int32_t)c->r[0],-1); // 80201870
  if (!crb(c,2)) { goto L_80201A38; } // 80201874
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80201878
  cmps(c,0,(int32_t)c->r[0],-1); // 8020187C
  if (!crb(c,2)) { goto L_80201A38; } // 80201880
  c->r[3]=R32(c->r[25]+0x00000D08u); // 80201884
  c->r[0]=R8(c->r[3]+0x00000030u); // 80201888
  cmps(c,0,(int32_t)c->r[0],0); // 8020188C
  if (!crb(c,2)) { goto L_80201910; } // 80201890
  c->r[0]=rotl(c->r[4],28)&0xF8000000u; // 80201894
  c->r[0]=sraw(c,c->r[0],28); // 80201898
  cmps(c,0,(int32_t)c->r[0],-2); // 8020189C
  if (!crb(c,2)) { goto L_80201A38; } // 802018A0
  c->r[3]=0u+0x00000001u; // 802018A4
  c->r[4]=0u+0x80470000u; // 802018A8
  c->r[4]=c->r[4]+0x00007F0Cu; // 802018AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802018B0
  c->lr=0x802018B8u; f_803D3760(c); // 802018B4
  c->r[0]=0u+0x00000001u; // 802018B8
  W32(c->r[13]+0xFFFFBC6Cu,c->r[0]); // 802018BC
  c->r[3]=c->r[26]|c->r[26]; // 802018C0
  c->r[4]=0u+0x00000001u; // 802018C4
  c->lr=0x802018CCu; f_80208404(c); // 802018C8
  c->r[27]=0u+0x00000000u; // 802018CC
  W32(c->r[28]+0x00000EF8u,c->r[27]); // 802018D0
  c->lr=0x802018D8u; f_80361BF4(c); // 802018D4
  c->r[5]=0u+0x80000000u; // 802018D8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 802018DC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802018E0
  c->r[5]=0u+0x10620000u; // 802018E4
  c->r[5]=c->r[5]+0x00004DD3u; // 802018E8
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 802018EC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802018F0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1500); // 802018F4
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 802018F8
  c->r[0]=addc(c,c->r[27],c->r[3],c->xer_ca); // 802018FC
  W32(c->r[13]+0xFFFFBC7Cu,c->r[4]); // 80201900
  W32(c->r[13]+0xFFFFBC78u,c->r[0]); // 80201904
  W32(c->r[13]+0xFFFFBC70u,c->r[27]); // 80201908
  goto L_80201A38; // 8020190C
L_80201910:;
  c->r[0]=rotl(c->r[4],28)&0xF8000000u; // 80201910
  c->r[0]=sraw(c,c->r[0],28); // 80201914
  cmps(c,0,(int32_t)c->r[0],-1); // 80201918
  if (!crb(c,2)) { goto L_80201A38; } // 8020191C
  c->r[3]=0u+0x00000001u; // 80201920
  c->r[4]=0u+0x80470000u; // 80201924
  c->r[4]=c->r[4]+0x00007F3Cu; // 80201928
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020192C
  c->lr=0x80201934u; f_803D3760(c); // 80201930
  c->r[0]=0u+0x00000001u; // 80201934
  W32(c->r[13]+0xFFFFBC6Cu,c->r[0]); // 80201938
  c->r[3]=c->r[26]|c->r[26]; // 8020193C
  c->r[4]=0u+0x00000001u; // 80201940
  c->lr=0x80201948u; f_80208404(c); // 80201944
  c->r[3]=0u+0xFFFFFFFEu; // 80201948
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 8020194C
  c->r[0]=(rotl(c->r[3],0)&0x0000000Fu)|(c->r[0]&~0x0000000Fu); // 80201950
  W16(c->r[30]+0x00000002u,c->r[0]); // 80201954
  c->r[0]=0u+0x0000000Cu; // 80201958
  W32(c->r[28]+0x00000EF0u,c->r[0]); // 8020195C
  c->r[27]=0u+0x00000000u; // 80201960
  W32(c->r[28]+0x00000EF8u,c->r[27]); // 80201964
  c->lr=0x8020196Cu; f_80361BF4(c); // 80201968
  c->r[5]=0u+0x80000000u; // 8020196C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80201970
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80201974
  c->r[5]=0u+0x10620000u; // 80201978
  c->r[5]=c->r[5]+0x00004DD3u; // 8020197C
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 80201980
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80201984
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1500); // 80201988
  c->r[4]=addc(c,c->r[0],c->r[4],0); // 8020198C
  c->r[0]=addc(c,c->r[27],c->r[3],c->xer_ca); // 80201990
  W32(c->r[13]+0xFFFFBC7Cu,c->r[4]); // 80201994
  W32(c->r[13]+0xFFFFBC78u,c->r[0]); // 80201998
  W32(c->r[13]+0xFFFFBC70u,c->r[27]); // 8020199C
  goto L_80201A38; // 802019A0
L_802019A4:;
  c->lr=0x802019A8u; f_8005C5B0(c); // 802019A4
  {uint32_t ea=c->r[2]+0xFFFF96D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802019A8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802019AC
  {uint32_t ea=c->r[2]+0xFFFF96DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802019B0
  fcmp(c,0,c->f[1],c->f[0]); // 802019B4
  c->r[0]=c->cr; // 802019B8
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 802019BC
  W32(c->r[13]+0xFFFFBC74u,c->r[0]); // 802019C0
  c->lr=0x802019C8u; f_8005C5B0(c); // 802019C4
  {uint32_t ea=c->r[2]+0xFFFF96E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802019C8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802019CC
  {uint32_t ea=c->r[2]+0xFFFF96E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802019D0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802019D4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802019D8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 802019DC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 802019E0
  c->r[3]=0u+0x80000000u; // 802019E4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 802019E8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 802019EC
  c->r[3]=0u+0x10620000u; // 802019F0
  c->r[3]=c->r[3]+0x00004DD3u; // 802019F4
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 802019F8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 802019FC
  c->r[27]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 80201A00
  c->lr=0x80201A08u; f_80361BF4(c); // 80201A04
  c->r[4]=addc(c,c->r[4],c->r[27],0); // 80201A08
  c->r[0]=addc(c,c->r[3],c->r[31],c->xer_ca); // 80201A0C
  W32(c->r[13]+0xFFFFBC7Cu,c->r[4]); // 80201A10
  W32(c->r[13]+0xFFFFBC78u,c->r[0]); // 80201A14
  c->r[0]=0u+0x00000001u; // 80201A18
  W32(c->r[13]+0xFFFFBC6Cu,c->r[0]); // 80201A1C
  c->r[3]=0u+0x00000001u; // 80201A20
  c->r[4]=0u+0x80470000u; // 80201A24
  c->r[4]=c->r[4]+0x00007F6Cu; // 80201A28
  c->r[5]=R32(c->r[13]+0xFFFFBC74u); // 80201A2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201A30
  c->lr=0x80201A38u; f_803D3760(c); // 80201A34
L_80201A38:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80201A38
  cmps(c,0,(int32_t)c->r[0],2); // 80201A3C
  if (!crb(c,2)) { goto L_80201AA4; } // 80201A40
  c->r[0]=R32(c->r[28]+0x00000EF0u); // 80201A44
  cmps(c,0,(int32_t)c->r[0],0); // 80201A48
  if (!crb(c,1)) { goto L_80201AA4; } // 80201A4C
  c->r[3]=R32(c->r[13]+0xFFFFBC70u); // 80201A50
  c->r[0]=c->r[3]+0x00000001u; // 80201A54
  W32(c->r[13]+0xFFFFBC70u,c->r[0]); // 80201A58
  cmps(c,0,(int32_t)c->r[0],5); // 80201A5C
  if (!crb(c,1)) { goto L_80201A78; } // 80201A60
  c->r[3]=0u+0x00000001u; // 80201A64
  c->r[4]=0u+0x80470000u; // 80201A68
  c->r[4]=c->r[4]+0x00007F8Cu; // 80201A6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201A70
  c->lr=0x80201A78u; f_803D3760(c); // 80201A74
L_80201A78:;
  c->r[0]=R32(c->r[13]+0xFFFFBC70u); // 80201A78
  cmps(c,0,(int32_t)c->r[0],2); // 80201A7C
  if (!crb(c,1)) { goto L_80202808; } // 80201A80
  c->r[0]=0u+0x00000000u; // 80201A84
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 80201A88
  c->r[3]=0u+0x00000001u; // 80201A8C
  c->r[4]=0u+0x80470000u; // 80201A90
  c->r[4]=c->r[4]+0x00007FACu; // 80201A94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201A98
  c->lr=0x80201AA0u; f_803D3760(c); // 80201A9C
  goto L_80202808; // 80201AA0
L_80201AA4:;
  c->r[3]=c->r[25]|c->r[25]; // 80201AA4
  c->r[4]=0u+0x00000000u; // 80201AA8
  c->lr=0x80201AB0u; f_80204A7C(c); // 80201AAC
  cmps(c,0,(int32_t)c->r[3],0); // 80201AB0
  if (crb(c,2)) { goto L_80202808; } // 80201AB4
  c->r[0]=R32(c->r[13]+0xFFFFBC6Cu); // 80201AB8
  cmps(c,0,(int32_t)c->r[0],0); // 80201ABC
  if (crb(c,2)) { goto L_80202808; } // 80201AC0
  c->r[3]=c->r[26]|c->r[26]; // 80201AC4
  c->r[4]=0u+0x00000002u; // 80201AC8
  c->r[5]=0u+0x00000000u; // 80201ACC
  c->r[6]=0u+0x00000000u; // 80201AD0
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80201AD4
  c->lr=0x80201ADCu; f_802303E8(c); // 80201AD8
  c->r[3]=c->r[26]|c->r[26]; // 80201ADC
  c->r[4]=0u+0x00000001u; // 80201AE0
  c->lr=0x80201AE8u; f_802304DC(c); // 80201AE4
  c->r[3]=c->r[26]|c->r[26]; // 80201AE8
  c->lr=0x80201AF0u; f_8022E384(c); // 80201AEC
  c->r[3]=0u+0x00000001u; // 80201AF0
  c->r[4]=0u+0x80470000u; // 80201AF4
  c->r[4]=c->r[4]+0x00007FD4u; // 80201AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201AFC
  c->lr=0x80201B04u; f_803D3760(c); // 80201B00
  c->r[0]=0u+0x00000000u; // 80201B04
  W32(c->r[13]+0xFFFFBC70u,c->r[0]); // 80201B08
  c->r[3]=c->r[25]|c->r[25]; // 80201B0C
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80201B10
  c->lr=0x80201B18u; f_80204AB8(c); // 80201B14
  W32(c->r[28]+0x000006F8u,c->r[3]); // 80201B18
  c->r[0]=0u+0x00000001u; // 80201B1C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80201B20
  c->r[0]=R32(c->r[28]+0x00000000u); // 80201B24
  cmps(c,0,(int32_t)c->r[0],2); // 80201B28
  if (!crb(c,2)) { goto L_80201B6C; } // 80201B2C
  c->r[3]=0u+0x00000001u; // 80201B30
  c->r[4]=0u+0x80470000u; // 80201B34
  c->r[4]=c->r[4]+0x00007FE4u; // 80201B38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201B3C
  c->lr=0x80201B44u; f_803D3760(c); // 80201B40
  c->r[3]=c->r[25]+0x000006D4u; // 80201B44
  c->r[4]=R8(c->r[28]+0x0000003Au); // 80201B48
  c->r[5]=0u+0x00004650u; // 80201B4C
  c->lr=0x80201B54u; f_8020834C(c); // 80201B50
  c->r[3]=c->r[25]+0x000006D4u; // 80201B54
  c->r[4]=0u+0x00000001u; // 80201B58
  c->r[5]=R32(c->r[28]+0x00000018u); // 80201B5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x000006FEu); // 80201B60
  c->r[5]=R8(c->r[5]+c->r[0]); // 80201B64
  c->lr=0x80201B6Cu; f_8020C368(c); // 80201B68
L_80201B6C:;
  c->r[3]=0u+0x00000001u; // 80201B6C
  c->r[4]=0u+0x80480000u; // 80201B70
  c->r[4]=c->r[4]+0xFFFF800Cu; // 80201B74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201B78
  c->lr=0x80201B80u; f_803D3760(c); // 80201B7C
  goto L_80202808; // 80201B80
L_80201B84:;
  c->r[3]=c->r[25]|c->r[25]; // 80201B84
  c->lr=0x80201B8Cu; f_80204AB0(c); // 80201B88
  cmps(c,0,(int32_t)c->r[3],0); // 80201B8C
  if (crb(c,2)) { goto L_80201D5C; } // 80201B90
  c->r[0]=R32(c->r[28]+0x00000000u); // 80201B94
  cmps(c,0,(int32_t)c->r[0],1); // 80201B98
  if (crb(c,2)) { goto L_80201D3C; } // 80201B9C
  if (!crb(c,0)) { goto L_80201BB0; } // 80201BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80201BA4
  if (!crb(c,0)) { goto L_80201BBC; } // 80201BA8
  goto L_80201D3C; // 80201BAC
L_80201BB0:;
  cmps(c,0,(int32_t)c->r[0],3); // 80201BB0
  if (!crb(c,0)) { goto L_80201D3C; } // 80201BB4
  goto L_80201C50; // 80201BB8
L_80201BBC:;
  c->r[3]=c->r[26]|c->r[26]; // 80201BBC
  c->lr=0x80201BC4u; f_80230954(c); // 80201BC0
  cmps(c,0,(int32_t)c->r[3],0); // 80201BC4
  if (!crb(c,2)) { goto L_80201BD8; } // 80201BC8
  c->r[3]=c->r[26]|c->r[26]; // 80201BCC
  c->r[4]=R32(c->r[13]+0xFFFFBC74u); // 80201BD0
  c->lr=0x80201BD8u; f_802308C8(c); // 80201BD4
L_80201BD8:;
  c->r[31]=0u+0x00000000u; // 80201BD8
  c->r[29]=c->r[28]|c->r[28]; // 80201BDC
  c->r[30]=c->r[28]+0x0000007Cu; // 80201BE0
  c->r[27]=0u+0x0000001Eu; // 80201BE4
  c->r[26]=0u+0x80480000u; // 80201BE8
  goto L_80201C40; // 80201BEC
L_80201BF0:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x000006FCu); // 80201BF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x000000B0u); // 80201BF4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80201BF8
  if (crb(c,2)) { goto L_80201C34; } // 80201BFC
  c->r[0]=R32(c->r[29]+0x00000088u); // 80201C00
  cmps(c,0,(int32_t)c->r[0],1); // 80201C04
  if (!crb(c,2)) { goto L_80201C34; } // 80201C08
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x000000B8u); // 80201C0C
  cmps(c,0,(int32_t)c->r[0],0); // 80201C10
  if (!crb(c,1)) { goto L_80201C1C; } // 80201C14
  W16(c->r[29]+0x000000B8u,c->r[27]); // 80201C18
L_80201C1C:;
  W32(c->r[28]+0x00000704u,c->r[30]); // 80201C1C
  c->r[3]=0u+0x00000001u; // 80201C20
  c->r[4]=c->r[26]+0xFFFF8024u; // 80201C24
  c->r[5]=c->r[31]|c->r[31]; // 80201C28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201C2C
  c->lr=0x80201C34u; f_803D3760(c); // 80201C30
L_80201C34:;
  c->r[29]=c->r[29]+0x0000018Cu; // 80201C34
  c->r[30]=c->r[30]+0x0000018Cu; // 80201C38
  c->r[31]=c->r[31]+0x00000001u; // 80201C3C
L_80201C40:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E44u); // 80201C40
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 80201C44
  if (crb(c,0)) { IRQCHK(c); goto L_80201BF0; } // 80201C48
  goto L_80201D3C; // 80201C4C
L_80201C50:;
  c->r[3]=c->r[25]|c->r[25]; // 80201C50
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80201C54
  c->lr=0x80201C5Cu; f_80204AB8(c); // 80201C58
  W32(c->r[28]+0x000006F8u,c->r[3]); // 80201C5C
  c->r[29]=R32(c->r[25]+0x00000D10u); // 80201C60
  c->r[27]=0u+0x00000000u; // 80201C64
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 80201C68
  c->r[0]=(rotl(c->r[27],4)&0x0000FFF0u)|(c->r[0]&~0x0000FFF0u); // 80201C6C
  W16(c->r[29]+0x00000002u,c->r[0]); // 80201C70
  c->r[0]=R32(c->r[28]+0x000006F8u); // 80201C74
  W32(c->r[29]+0x00000004u,c->r[0]); // 80201C78
  c->r[3]=c->r[25]|c->r[25]; // 80201C7C
  c->lr=0x80201C84u; f_80204B08(c); // 80201C80
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80201C84
  W16(c->r[29]+0x00000008u,c->r[0]); // 80201C88
  c->r[0]=0u+0x0000000Cu; // 80201C8C
  W32(c->r[28]+0x00000EF0u,c->r[0]); // 80201C90
  W32(c->r[28]+0x00000EF8u,c->r[27]); // 80201C94
  W32(c->r[25]+0x00000D14u,c->r[27]); // 80201C98
  c->r[0]=0u+0x00000003u; // 80201C9C
  W32(c->r[13]+0xFFFFBC70u,c->r[0]); // 80201CA0
  c->r[3]=0u+0x00000001u; // 80201CA4
  c->r[4]=0u+0x80480000u; // 80201CA8
  c->r[4]=c->r[4]+0xFFFF8038u; // 80201CAC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80201CB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201CB4
  c->lr=0x80201CBCu; f_803D3760(c); // 80201CB8
  c->r[3]=0u+0x00000001u; // 80201CBC
  c->r[4]=0u+0x80480000u; // 80201CC0
  c->r[4]=c->r[4]+0xFFFF8054u; // 80201CC4
  c->r[5]=R32(c->r[29]+0x00000004u); // 80201CC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201CCC
  c->lr=0x80201CD4u; f_803D3760(c); // 80201CD0
  c->r[3]=0u+0x00000001u; // 80201CD4
  c->r[4]=c->r[13]+0xFFFF9F68u; // 80201CD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201CDC
  c->lr=0x80201CE4u; f_803D3760(c); // 80201CE0
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80201CE4
  c->r[0]=c->r[0]|0x00000004u; // 80201CE8
  W8(c->r[13]+0xFFFFBC68u,c->r[0]); // 80201CEC
  c->r[3]=R32(c->r[28]+0x00000704u); // 80201CF0
  c->r[0]=R32(c->r[3]+0x00000108u); // 80201CF4
  cmps(c,0,(int32_t)c->r[0],0); // 80201CF8
  if (crb(c,2)) { goto L_80201D3C; } // 80201CFC
  c->r[3]=c->r[25]|c->r[25]; // 80201D00
  c->lr=0x80201D08u; f_80204B08(c); // 80201D04
  c->r[27]=c->r[3]|c->r[3]; // 80201D08
  c->lr=0x80201D10u; f_802083FC(c); // 80201D0C
  c->r[4]=R32(c->r[28]+0x00000700u); // 80201D10
  c->r[5]=c->r[27]|c->r[27]; // 80201D14
  c->r[6]=0u+0x00000000u; // 80201D18
  c->lr=0x80201D20u; f_8021872C(c); // 80201D1C
  c->r[3]=c->r[26]|c->r[26]; // 80201D20
  c->lr=0x80201D28u; f_80230954(c); // 80201D24
  cmps(c,0,(int32_t)c->r[3],0); // 80201D28
  if (!crb(c,2)) { goto L_80201D3C; } // 80201D2C
  c->r[3]=c->r[26]|c->r[26]; // 80201D30
  c->r[4]=0u+0x00000001u; // 80201D34
  c->lr=0x80201D3Cu; f_802308C8(c); // 80201D38
L_80201D3C:;
  c->r[0]=0u+0x00000002u; // 80201D3C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80201D40
  c->r[3]=0u+0x00000001u; // 80201D44
  c->r[4]=0u+0x80480000u; // 80201D48
  c->r[4]=c->r[4]+0xFFFF8070u; // 80201D4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201D50
  c->lr=0x80201D58u; f_803D3760(c); // 80201D54
  goto L_80202808; // 80201D58
L_80201D5C:;
  c->r[3]=c->r[25]|c->r[25]; // 80201D5C
  c->r[4]=R32(c->r[28]+0x0000001Cu); // 80201D60
  c->lr=0x80201D68u; f_80204AB8(c); // 80201D64
  W32(c->r[28]+0x000006F8u,c->r[3]); // 80201D68
  c->r[0]=R32(c->r[28]+0x00000000u); // 80201D6C
  cmps(c,0,(int32_t)c->r[0],2); // 80201D70
  if (crb(c,2)) { goto L_80201DF0; } // 80201D74
  if (!crb(c,0)) { goto L_80202808; } // 80201D78
  cmps(c,0,(int32_t)c->r[0],0); // 80201D7C
  if (!crb(c,0)) { goto L_80201D88; } // 80201D80
  goto L_80202808; // 80201D84
L_80201D88:;
  c->r[3]=c->r[26]|c->r[26]; // 80201D88
  c->lr=0x80201D90u; f_80230954(c); // 80201D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80201D90
  if (!crb(c,2)) { goto L_80202808; } // 80201D94
  c->r[0]=R32(c->r[13]+0xFFFFBC74u); // 80201D98
  cmps(c,0,(int32_t)c->r[0],0); // 80201D9C
  if (crb(c,2)) { goto L_80202808; } // 80201DA0
  c->lr=0x80201DA8u; f_80361BF4(c); // 80201DA4
  c->r[0]=R32(c->r[13]+0xFFFFBC78u); // 80201DA8
  c->r[6]=R32(c->r[13]+0xFFFFBC7Cu); // 80201DAC
  c->r[0]=c->r[0]^0x80000000u; // 80201DB0
  c->r[5]=c->r[3]^0x80000000u; // 80201DB4
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80201DB8
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80201DBC
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80201DC0
  c->r[5]=0u-c->r[5]; // 80201DC4
  cmps(c,0,(int32_t)c->r[5],0); // 80201DC8
  if (crb(c,2)) { goto L_80202808; } // 80201DCC
  c->r[3]=c->r[26]|c->r[26]; // 80201DD0
  c->lr=0x80201DD8u; f_80230954(c); // 80201DD4
  cmps(c,0,(int32_t)c->r[3],0); // 80201DD8
  if (!crb(c,2)) { goto L_80202808; } // 80201DDC
  c->r[3]=c->r[26]|c->r[26]; // 80201DE0
  c->r[4]=0u+0x00000001u; // 80201DE4
  c->lr=0x80201DECu; f_802308C8(c); // 80201DE8
  goto L_80202808; // 80201DEC
L_80201DF0:;
  c->r[3]=c->r[25]|c->r[25]; // 80201DF0
  c->lr=0x80201DF8u; f_801FBA1C(c); // 80201DF4
  c->r[29]=R32(c->r[25]+0x00000D0Cu); // 80201DF8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80201DFC
  cmps(c,0,(int32_t)c->r[5],0); // 80201E00
  if (crb(c,0)) { goto L_80201E24; } // 80201E04
  cmps(c,0,(int32_t)c->r[5],2); // 80201E08
  if (crb(c,1)) { goto L_80201E24; } // 80201E0C
  c->r[3]=0u+0x00000001u; // 80201E10
  c->r[4]=0u+0x80480000u; // 80201E14
  c->r[4]=c->r[4]+0xFFFF8088u; // 80201E18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201E1C
  c->lr=0x80201E24u; f_803D3760(c); // 80201E20
L_80201E24:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000002u); // 80201E24
  c->r[0]=rotl(c->r[0],16)&0xFFF80000u; // 80201E28
  c->r[0]=sraw(c,c->r[0],20); // 80201E2C
  cmps(c,0,(int32_t)c->r[0],1); // 80201E30
  if (crb(c,2)) { goto L_80201E48; } // 80201E34
  if (!crb(c,0)) { goto L_80202808; } // 80201E38
  cmps(c,0,(int32_t)c->r[0],0); // 80201E3C
  if (!crb(c,0)) { goto L_80201E68; } // 80201E40
  goto L_80202808; // 80201E44
L_80201E48:;
  c->r[3]=0u+0x00000001u; // 80201E48
  c->r[4]=0u+0x80480000u; // 80201E4C
  c->r[4]=c->r[4]+0xFFFF80A0u; // 80201E50
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201E54
  c->lr=0x80201E5Cu; f_803D3760(c); // 80201E58
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80201E5C
  c->r[0]=c->r[0]|0x00000002u; // 80201E60
  W8(c->r[13]+0xFFFFBC68u,c->r[0]); // 80201E64
L_80201E68:;
  c->r[27]=R32(c->r[28]+0x00000704u); // 80201E68
  c->r[0]=R32(c->r[27]+0x00000108u); // 80201E6C
  cmps(c,0,(int32_t)c->r[0],0); // 80201E70
  if (crb(c,2)) { goto L_80201E90; } // 80201E74
  c->r[3]=0u+0x00000001u; // 80201E78
  c->r[4]=0u+0x80480000u; // 80201E7C
  c->r[4]=c->r[4]+0xFFFF80CCu; // 80201E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201E84
  c->lr=0x80201E8Cu; f_803D3760(c); // 80201E88
  goto L_80202808; // 80201E8C
L_80201E90:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80201E90
  c->r[0]=R32(c->r[28]+0x000006F8u); // 80201E94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80201E98
  if (!crb(c,0)) { goto L_80202808; } // 80201E9C
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80201EA0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80201EA4
  cmps(c,0,(int32_t)c->r[0],0); // 80201EA8
  if (!crb(c,2)) { goto L_80201F1C; } // 80201EAC
  c->lr=0x80201EB4u; f_802083FC(c); // 80201EB0
  c->r[4]=c->r[27]|c->r[27]; // 80201EB4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80201EB8
  c->r[6]=0u+0x00000001u; // 80201EBC
  c->lr=0x80201EC4u; f_8021872C(c); // 80201EC0
  c->r[3]=c->r[26]|c->r[26]; // 80201EC4
  c->r[4]=0u+0x00000002u; // 80201EC8
  c->r[5]=R32(c->r[28]+0x00000704u); // 80201ECC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80201ED0
  c->lr=0x80201ED8u; f_8022EB74(c); // 80201ED4
  c->r[3]=c->r[26]|c->r[26]; // 80201ED8
  c->lr=0x80201EE0u; f_80230954(c); // 80201EDC
  cmps(c,0,(int32_t)c->r[3],0); // 80201EE0
  if (!crb(c,2)) { goto L_80201EF4; } // 80201EE4
  c->r[3]=c->r[26]|c->r[26]; // 80201EE8
  c->r[4]=0u+0x00000001u; // 80201EEC
  c->lr=0x80201EF4u; f_802308C8(c); // 80201EF0
L_80201EF4:;
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80201EF4
  c->r[0]=c->r[0]|0x00000001u; // 80201EF8
  W8(c->r[13]+0xFFFFBC68u,c->r[0]); // 80201EFC
  c->r[4]=0u+0x00000001u; // 80201F00
  c->r[3]=R32(c->r[25]+0x00000D10u); // 80201F04
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 80201F08
  c->r[0]=(rotl(c->r[4],4)&0x0000FFF0u)|(c->r[0]&~0x0000FFF0u); // 80201F0C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80201F10
  c->r[0]=0u+0x0000000Cu; // 80201F14
  W32(c->r[28]+0x00000EF0u,c->r[0]); // 80201F18
L_80201F1C:;
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80201F1C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80201F20
  cmps(c,0,(int32_t)c->r[0],0); // 80201F24
  if (!crb(c,2)) { goto L_80201F38; } // 80201F28
  c->r[0]=0u+0x00000000u; // 80201F2C
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 80201F30
  goto L_80202808; // 80201F34
L_80201F38:;
  c->r[0]=0u+0x00000001u; // 80201F38
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 80201F3C
  goto L_80202808; // 80201F40
L_80201F44:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80201F44
  cmps(c,0,(int32_t)c->r[0],0); // 80201F48
  if (crb(c,2)) { goto L_80201F60; } // 80201F4C
  if (crb(c,0)) { goto L_80202578; } // 80201F50
  cmps(c,0,(int32_t)c->r[0],3); // 80201F54
  if (!crb(c,0)) { goto L_80202578; } // 80201F58
  goto L_802020CC; // 80201F5C
L_80201F60:;
  c->lr=0x80201F64u; f_8005C538(c); // 80201F60
  c->r[4]=0u+0x55550000u; // 80201F64
  c->r[0]=c->r[4]+0x00005556u; // 80201F68
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 80201F6C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80201F70
  c->r[0]=c->r[4]+c->r[0]; // 80201F74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80201F78
  c->r[30]=c->r[3]-c->r[0]; // 80201F7C
  c->r[3]=c->r[25]|c->r[25]; // 80201F80
  c->lr=0x80201F88u; f_80204B08(c); // 80201F84
  c->r[5]=c->r[3]|c->r[3]; // 80201F88
  c->r[3]=0u+0x00000001u; // 80201F8C
  c->r[4]=0u+0x80480000u; // 80201F90
  c->r[4]=c->r[4]+0xFFFF80F0u; // 80201F94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201F98
  c->lr=0x80201FA0u; f_803D3760(c); // 80201F9C
  c->r[3]=0u+0x00000001u; // 80201FA0
  c->r[4]=0u+0x80480000u; // 80201FA4
  c->r[4]=c->r[4]+0xFFFF8104u; // 80201FA8
  c->r[5]=c->r[30]|c->r[30]; // 80201FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201FB0
  c->lr=0x80201FB8u; f_803D3760(c); // 80201FB4
  c->r[0]=R32(c->r[13]+0xFFFFBC74u); // 80201FB8
  cmps(c,0,(int32_t)c->r[0],1); // 80201FBC
  if (crb(c,2)) { goto L_80202028; } // 80201FC0
  if (!crb(c,0)) { goto L_80202078; } // 80201FC4
  cmps(c,0,(int32_t)c->r[0],0); // 80201FC8
  if (!crb(c,0)) { goto L_80201FD4; } // 80201FCC
  goto L_80202078; // 80201FD0
L_80201FD4:;
  c->r[3]=0u+0x00000001u; // 80201FD4
  c->r[4]=0u+0x80480000u; // 80201FD8
  c->r[4]=c->r[4]+0xFFFF8118u; // 80201FDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80201FE0
  c->lr=0x80201FE8u; f_803D3760(c); // 80201FE4
  c->r[3]=c->r[25]|c->r[25]; // 80201FE8
  c->lr=0x80201FF0u; f_80204B08(c); // 80201FEC
  c->r[29]=c->r[3]|c->r[3]; // 80201FF0
  c->lr=0x80201FF8u; f_802083FC(c); // 80201FF4
  c->r[4]=R32(c->r[28]+0x00000700u); // 80201FF8
  c->r[5]=c->r[29]|c->r[29]; // 80201FFC
  c->r[6]=0u+0x00000001u; // 80202000
  c->lr=0x80202008u; f_8021872C(c); // 80202004
  c->lr=0x8020200Cu; f_802083FC(c); // 80202008
  c->r[4]=R32(c->r[28]+0x00000704u); // 8020200C
  c->r[5]=c->r[30]|c->r[30]; // 80202010
  c->r[6]=0u+0x00000001u; // 80202014
  c->lr=0x8020201Cu; f_8021872C(c); // 80202018
  c->r[0]=0u+0x00000000u; // 8020201C
  W32(c->r[13]+0xFFFFBC80u,c->r[0]); // 80202020
  goto L_80202078; // 80202024
L_80202028:;
  c->r[3]=0u+0x00000001u; // 80202028
  c->r[4]=0u+0x80480000u; // 8020202C
  c->r[4]=c->r[4]+0xFFFF8130u; // 80202030
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202034
  c->lr=0x8020203Cu; f_803D3760(c); // 80202038
  c->lr=0x80202040u; f_802083FC(c); // 8020203C
  c->r[4]=R32(c->r[28]+0x00000704u); // 80202040
  c->r[5]=c->r[30]|c->r[30]; // 80202044
  c->r[6]=0u+0x00000001u; // 80202048
  c->lr=0x80202050u; f_8021872C(c); // 8020204C
  c->r[3]=c->r[25]|c->r[25]; // 80202050
  c->lr=0x80202058u; f_80204B08(c); // 80202054
  c->r[29]=c->r[3]|c->r[3]; // 80202058
  c->lr=0x80202060u; f_802083FC(c); // 8020205C
  c->r[4]=R32(c->r[28]+0x00000700u); // 80202060
  c->r[5]=c->r[29]|c->r[29]; // 80202064
  c->r[6]=0u+0x00000001u; // 80202068
  c->lr=0x80202070u; f_8021872C(c); // 8020206C
  c->r[0]=0u+0x00000001u; // 80202070
  W32(c->r[13]+0xFFFFBC80u,c->r[0]); // 80202074
L_80202078:;
  c->r[3]=c->r[25]|c->r[25]; // 80202078
  c->lr=0x80202080u; f_80204B08(c); // 8020207C
  c->r[6]=c->r[3]|c->r[3]; // 80202080
  c->r[3]=c->r[26]|c->r[26]; // 80202084
  c->r[4]=0u+0x00000001u; // 80202088
  c->r[5]=R32(c->r[28]+0x00000700u); // 8020208C
  c->lr=0x80202094u; f_8022EB74(c); // 80202090
  c->r[3]=c->r[26]|c->r[26]; // 80202094
  c->r[4]=0u+0x00000002u; // 80202098
  c->r[5]=R32(c->r[28]+0x00000704u); // 8020209C
  c->r[6]=c->r[30]|c->r[30]; // 802020A0
  c->lr=0x802020A8u; f_8022EB74(c); // 802020A4
  c->r[3]=R32(c->r[28]+0x00000700u); // 802020A8
  c->r[3]=R32(c->r[3]+0x00000108u); // 802020AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 802020B0
  W32(c->r[13]+0xFFFFBC84u,c->r[0]); // 802020B4
  c->r[3]=R32(c->r[28]+0x00000704u); // 802020B8
  c->r[3]=R32(c->r[3]+0x00000108u); // 802020BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 802020C0
  W32(c->r[13]+0xFFFFBC88u,c->r[0]); // 802020C4
  goto L_80202578; // 802020C8
L_802020CC:;
  c->r[3]=c->r[25]|c->r[25]; // 802020CC
  c->lr=0x802020D4u; f_801FBA1C(c); // 802020D0
  c->r[29]=R32(c->r[25]+0x00000D0Cu); // 802020D4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 802020D8
  cmps(c,0,(int32_t)c->r[5],0); // 802020DC
  if (crb(c,0)) { goto L_802024E8; } // 802020E0
  cmps(c,0,(int32_t)c->r[5],2); // 802020E4
  if (crb(c,1)) { goto L_802024E8; } // 802020E8
  c->r[3]=0u+0x00000001u; // 802020EC
  c->r[4]=0u+0x80480000u; // 802020F0
  c->r[4]=c->r[4]+0xFFFF8088u; // 802020F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802020F8
  c->lr=0x80202100u; f_803D3760(c); // 802020FC
  c->r[3]=R8(c->r[13]+0xFFFFBC68u); // 80202100
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 80202104
  cmps(c,0,(int32_t)c->r[0],0); // 80202108
  if (!crb(c,2)) { goto L_80202130; } // 8020210C
  c->r[0]=c->r[3]|0x00000001u; // 80202110
  W8(c->r[13]+0xFFFFBC68u,c->r[0]); // 80202114
  c->r[3]=0u+0x00000001u; // 80202118
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000002u); // 8020211C
  c->r[0]=(rotl(c->r[3],4)&0x0000FFF0u)|(c->r[0]&~0x0000FFF0u); // 80202120
  W16(c->r[30]+0x00000002u,c->r[0]); // 80202124
  c->r[0]=0u+0x00000000u; // 80202128
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 8020212C
L_80202130:;
  c->r[0]=R32(c->r[13]+0xFFFFBC84u); // 80202130
  cmps(c,0,(int32_t)c->r[0],0); // 80202134
  if (!crb(c,1)) { goto L_80202170; } // 80202138
  c->r[0]=R32(c->r[13]+0xFFFFBC88u); // 8020213C
  cmps(c,0,(int32_t)c->r[0],2); // 80202140
  if (!crb(c,1)) { goto L_80202170; } // 80202144
  c->r[3]=R32(c->r[28]+0x00000704u); // 80202148
  c->r[0]=R32(c->r[3]+0x00000108u); // 8020214C
  cmps(c,0,(int32_t)c->r[0],0); // 80202150
  if (crb(c,2)) { goto L_80202170; } // 80202154
  c->r[3]=0u+0x00000001u; // 80202158
  c->r[4]=0u+0x80480000u; // 8020215C
  c->r[4]=c->r[4]+0xFFFF8144u; // 80202160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202164
  c->lr=0x8020216Cu; f_803D3760(c); // 80202168
  goto L_802024E8; // 8020216C
L_80202170:;
  c->r[5]=R32(c->r[29]+0x00000004u); // 80202170
  c->r[0]=R32(c->r[28]+0x000006F8u); // 80202174
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80202178
  if (!crb(c,2)) { goto L_802022FC; } // 8020217C
  c->r[3]=0u+0x00000001u; // 80202180
  c->r[4]=0u+0x80480000u; // 80202184
  c->r[4]=c->r[4]+0xFFFF8168u; // 80202188
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020218C
  c->lr=0x80202194u; f_803D3760(c); // 80202190
  c->r[29]=R32(c->r[25]+0x00000D0Cu); // 80202194
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x000006FCu); // 80202198
  cmps(c,0,(int32_t)c->r[0],1); // 8020219C
  if (crb(c,2)) { goto L_802021C8; } // 802021A0
  if (!crb(c,0)) { goto L_802021D8; } // 802021A4
  cmps(c,0,(int32_t)c->r[0],0); // 802021A8
  if (!crb(c,0)) { goto L_802021B4; } // 802021AC
  goto L_802021D8; // 802021B0
L_802021B4:;
  c->r[3]=c->r[25]|c->r[25]; // 802021B4
  c->lr=0x802021BCu; f_80204B08(c); // 802021B8
  c->r[31]=c->r[3]|c->r[3]; // 802021BC
  c->r[30]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 802021C0
  goto L_802021D8; // 802021C4
L_802021C8:;
  c->r[31]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 802021C8
  c->r[3]=c->r[25]|c->r[25]; // 802021CC
  c->lr=0x802021D4u; f_80204B08(c); // 802021D0
  c->r[30]=c->r[3]|c->r[3]; // 802021D4
L_802021D8:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 802021D8
  c->r[3]=c->r[28]+c->r[0]; // 802021DC
  c->r[3]=R32(c->r[3]+0x0000013Cu); // 802021E0
  c->lr=0x802021E8u; f_802E4958(c); // 802021E4
  c->r[31]=c->r[3]|c->r[3]; // 802021E8
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 802021EC
  c->r[3]=c->r[28]+c->r[0]; // 802021F0
  c->r[3]=R32(c->r[3]+0x000002C8u); // 802021F4
  c->lr=0x802021FCu; f_802E4958(c); // 802021F8
  c->r[3]=c->r[31]+c->r[3]; // 802021FC
  c->lr=0x80202204u; f_8005C2D0(c); // 80202200
  c->lr=0x80202208u; f_8005C5B0(c); // 80202204
  {uint32_t ea=c->r[2]+0xFFFF96D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80202208
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8020220C
  {uint32_t ea=c->r[2]+0xFFFF96DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80202210
  fcmp(c,0,c->f[1],c->f[0]); // 80202214
  c->r[3]=c->cr; // 80202218
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8020221C
  c->r[0]=R8(c->r[28]+0x00000030u); // 80202220
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 80202224
  if (!crb(c,2)) { goto L_8020226C; } // 80202228
  c->r[3]=c->r[25]|c->r[25]; // 8020222C
  c->lr=0x80202234u; f_80204B08(c); // 80202230
  c->r[30]=c->r[3]|c->r[3]; // 80202234
  c->lr=0x8020223Cu; f_802083FC(c); // 80202238
  c->r[4]=R32(c->r[25]+0x00000D08u); // 8020223C
  c->r[4]=R32(c->r[4]+0x00000700u); // 80202240
  c->r[5]=c->r[30]|c->r[30]; // 80202244
  c->r[6]=0u+0x00000001u; // 80202248
  c->lr=0x80202250u; f_8021872C(c); // 8020224C
  c->lr=0x80202254u; f_802083FC(c); // 80202250
  c->r[4]=R32(c->r[25]+0x00000D08u); // 80202254
  c->r[4]=R32(c->r[4]+0x00000704u); // 80202258
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 8020225C
  c->r[6]=0u+0x00000001u; // 80202260
  c->lr=0x80202268u; f_8021872C(c); // 80202264
  goto L_802022A8; // 80202268
L_8020226C:;
  c->lr=0x80202270u; f_802083FC(c); // 8020226C
  c->r[4]=R32(c->r[25]+0x00000D08u); // 80202270
  c->r[4]=R32(c->r[4]+0x00000704u); // 80202274
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80202278
  c->r[6]=0u+0x00000001u; // 8020227C
  c->lr=0x80202284u; f_8021872C(c); // 80202280
  c->r[3]=c->r[25]|c->r[25]; // 80202284
  c->lr=0x8020228Cu; f_80204B08(c); // 80202288
  c->r[30]=c->r[3]|c->r[3]; // 8020228C
  c->lr=0x80202294u; f_802083FC(c); // 80202290
  c->r[4]=R32(c->r[25]+0x00000D08u); // 80202294
  c->r[4]=R32(c->r[4]+0x00000700u); // 80202298
  c->r[5]=c->r[30]|c->r[30]; // 8020229C
  c->r[6]=0u+0x00000001u; // 802022A0
  c->lr=0x802022A8u; f_8021872C(c); // 802022A4
L_802022A8:;
  c->r[3]=c->r[25]|c->r[25]; // 802022A8
  c->lr=0x802022B0u; f_80204B08(c); // 802022AC
  c->r[6]=c->r[3]|c->r[3]; // 802022B0
  c->r[3]=c->r[26]|c->r[26]; // 802022B4
  c->r[4]=0u+0x00000001u; // 802022B8
  c->r[5]=R32(c->r[28]+0x00000700u); // 802022BC
  c->lr=0x802022C4u; f_8022EB74(c); // 802022C0
  c->r[3]=c->r[26]|c->r[26]; // 802022C4
  c->r[4]=0u+0x00000002u; // 802022C8
  c->r[5]=R32(c->r[28]+0x00000704u); // 802022CC
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 802022D0
  c->lr=0x802022D8u; f_8022EB74(c); // 802022D4
  c->r[3]=R32(c->r[28]+0x00000700u); // 802022D8
  c->r[3]=R32(c->r[3]+0x00000108u); // 802022DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 802022E0
  W32(c->r[13]+0xFFFFBC84u,c->r[0]); // 802022E4
  c->r[3]=R32(c->r[28]+0x00000704u); // 802022E8
  c->r[3]=R32(c->r[3]+0x00000108u); // 802022EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 802022F0
  W32(c->r[13]+0xFFFFBC88u,c->r[0]); // 802022F4
  goto L_802024BC; // 802022F8
L_802022FC:;
  c->r[3]=0u+0x00000001u; // 802022FC
  c->r[4]=0u+0x80480000u; // 80202300
  c->r[4]=c->r[4]+0xFFFF8054u; // 80202304
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202308
  c->lr=0x80202310u; f_803D3760(c); // 8020230C
  c->r[3]=0u+0x00000001u; // 80202310
  c->r[4]=0u+0x80480000u; // 80202314
  c->r[4]=c->r[4]+0xFFFF8174u; // 80202318
  c->r[5]=R32(c->r[28]+0x000006F8u); // 8020231C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202320
  c->lr=0x80202328u; f_803D3760(c); // 80202324
  c->r[3]=R32(c->r[29]+0x00000004u); // 80202328
  c->r[0]=R32(c->r[28]+0x000006F8u); // 8020232C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80202330
  if (!crb(c,0)) { goto L_802023D4; } // 80202334
  c->r[3]=0u+0x00000001u; // 80202338
  c->r[4]=0u+0x80480000u; // 8020233C
  c->r[4]=c->r[4]+0xFFFF8190u; // 80202340
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202344
  c->lr=0x8020234Cu; f_803D3760(c); // 80202348
  c->r[3]=0u+0x00000001u; // 8020234C
  c->r[4]=0u+0x80480000u; // 80202350
  c->r[4]=c->r[4]+0xFFFF819Cu; // 80202354
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80202358
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020235C
  c->lr=0x80202364u; f_803D3760(c); // 80202360
  c->r[3]=c->r[25]|c->r[25]; // 80202364
  c->lr=0x8020236Cu; f_80204B08(c); // 80202368
  c->r[5]=c->r[3]|c->r[3]; // 8020236C
  c->r[3]=0u+0x00000001u; // 80202370
  c->r[4]=0u+0x80480000u; // 80202374
  c->r[4]=c->r[4]+0xFFFF81B0u; // 80202378
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020237C
  c->lr=0x80202384u; f_803D3760(c); // 80202380
  c->r[3]=0u+0x00000001u; // 80202384
  c->r[4]=c->r[13]+0xFFFF9F68u; // 80202388
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020238C
  c->lr=0x80202394u; f_803D3760(c); // 80202390
  c->lr=0x80202398u; f_802083FC(c); // 80202394
  c->r[4]=R32(c->r[28]+0x00000704u); // 80202398
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 8020239C
  c->r[6]=0u+0x00000001u; // 802023A0
  c->lr=0x802023A8u; f_8021872C(c); // 802023A4
  c->r[3]=c->r[25]|c->r[25]; // 802023A8
  c->lr=0x802023B0u; f_80204B08(c); // 802023AC
  c->r[30]=c->r[3]|c->r[3]; // 802023B0
  c->lr=0x802023B8u; f_802083FC(c); // 802023B4
  c->r[4]=R32(c->r[28]+0x00000700u); // 802023B8
  c->r[5]=c->r[30]|c->r[30]; // 802023BC
  c->r[6]=0u+0x00000000u; // 802023C0
  c->lr=0x802023C8u; f_8021872C(c); // 802023C4
  c->r[0]=0u+0x00000001u; // 802023C8
  W32(c->r[13]+0xFFFFBC80u,c->r[0]); // 802023CC
  goto L_8020246C; // 802023D0
L_802023D4:;
  c->r[3]=0u+0x00000001u; // 802023D4
  c->r[4]=0u+0x80480000u; // 802023D8
  c->r[4]=c->r[4]+0xFFFF81C4u; // 802023DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802023E0
  c->lr=0x802023E8u; f_803D3760(c); // 802023E4
  c->r[3]=c->r[25]|c->r[25]; // 802023E8
  c->lr=0x802023F0u; f_80204B08(c); // 802023EC
  c->r[5]=c->r[3]|c->r[3]; // 802023F0
  c->r[3]=0u+0x00000001u; // 802023F4
  c->r[4]=0u+0x80480000u; // 802023F8
  c->r[4]=c->r[4]+0xFFFF81B0u; // 802023FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202400
  c->lr=0x80202408u; f_803D3760(c); // 80202404
  c->r[3]=0u+0x00000001u; // 80202408
  c->r[4]=0u+0x80480000u; // 8020240C
  c->r[4]=c->r[4]+0xFFFF819Cu; // 80202410
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80202414
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202418
  c->lr=0x80202420u; f_803D3760(c); // 8020241C
  c->r[3]=0u+0x00000001u; // 80202420
  c->r[4]=c->r[13]+0xFFFF9F68u; // 80202424
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202428
  c->lr=0x80202430u; f_803D3760(c); // 8020242C
  c->r[3]=c->r[25]|c->r[25]; // 80202430
  c->lr=0x80202438u; f_80204B08(c); // 80202434
  c->r[30]=c->r[3]|c->r[3]; // 80202438
  c->lr=0x80202440u; f_802083FC(c); // 8020243C
  c->r[4]=R32(c->r[28]+0x00000700u); // 80202440
  c->r[5]=c->r[30]|c->r[30]; // 80202444
  c->r[6]=0u+0x00000000u; // 80202448
  c->lr=0x80202450u; f_8021872C(c); // 8020244C
  c->lr=0x80202454u; f_802083FC(c); // 80202450
  c->r[4]=R32(c->r[28]+0x00000704u); // 80202454
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80202458
  c->r[6]=0u+0x00000001u; // 8020245C
  c->lr=0x80202464u; f_8021872C(c); // 80202460
  c->r[0]=0u+0x00000000u; // 80202464
  W32(c->r[13]+0xFFFFBC80u,c->r[0]); // 80202468
L_8020246C:;
  c->r[3]=c->r[25]|c->r[25]; // 8020246C
  c->lr=0x80202474u; f_80204B08(c); // 80202470
  c->r[6]=c->r[3]|c->r[3]; // 80202474
  c->r[3]=c->r[26]|c->r[26]; // 80202478
  c->r[4]=0u+0x00000001u; // 8020247C
  c->r[5]=R32(c->r[28]+0x00000700u); // 80202480
  c->lr=0x80202488u; f_8022EB74(c); // 80202484
  c->r[3]=c->r[26]|c->r[26]; // 80202488
  c->r[4]=0u+0x00000002u; // 8020248C
  c->r[5]=R32(c->r[28]+0x00000704u); // 80202490
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 80202494
  c->lr=0x8020249Cu; f_8022EB74(c); // 80202498
  c->r[3]=R32(c->r[28]+0x00000700u); // 8020249C
  c->r[3]=R32(c->r[3]+0x00000108u); // 802024A0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 802024A4
  W32(c->r[13]+0xFFFFBC84u,c->r[0]); // 802024A8
  c->r[3]=R32(c->r[28]+0x00000704u); // 802024AC
  c->r[3]=R32(c->r[3]+0x00000108u); // 802024B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 802024B4
  W32(c->r[13]+0xFFFFBC88u,c->r[0]); // 802024B8
L_802024BC:;
  c->r[3]=0u+0x00000001u; // 802024BC
  c->r[4]=0u+0x80480000u; // 802024C0
  c->r[4]=c->r[4]+0xFFFF81D0u; // 802024C4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 802024C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802024CC
  c->lr=0x802024D4u; f_803D3760(c); // 802024D0
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000008u); // 802024D4
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802024D8
  c->r[0]=c->r[3]-c->r[0]; // 802024DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 802024E0
  W16(c->r[29]+0x00000008u,c->r[0]); // 802024E4
L_802024E8:;
  c->r[3]=R32(c->r[25]+0x00000D0Cu); // 802024E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000002u); // 802024EC
  c->r[0]=rotl(c->r[0],16)&0xFFF80000u; // 802024F0
  c->r[0]=sraw(c,c->r[0],20); // 802024F4
  cmps(c,0,(int32_t)c->r[0],1); // 802024F8
  if (crb(c,2)) { goto L_80202504; } // 802024FC
  goto L_80202554; // 80202500
L_80202504:;
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80202504
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80202508
  cmps(c,0,(int32_t)c->r[0],0); // 8020250C
  if (!crb(c,2)) { goto L_80202554; } // 80202510
  c->r[3]=c->r[25]|c->r[25]; // 80202514
  c->lr=0x8020251Cu; f_80204B08(c); // 80202518
  c->r[29]=c->r[3]|c->r[3]; // 8020251C
  c->lr=0x80202524u; f_802083FC(c); // 80202520
  c->r[4]=R32(c->r[28]+0x00000700u); // 80202524
  c->r[5]=c->r[29]|c->r[29]; // 80202528
  c->r[6]=0u+0x00000000u; // 8020252C
  c->lr=0x80202534u; f_8021872C(c); // 80202530
  c->r[3]=0u+0x00000001u; // 80202534
  c->r[4]=0u+0x80480000u; // 80202538
  c->r[4]=c->r[4]+0xFFFF81F4u; // 8020253C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202540
  c->lr=0x80202548u; f_803D3760(c); // 80202544
  c->r[0]=R8(c->r[13]+0xFFFFBC68u); // 80202548
  c->r[0]=c->r[0]|0x00000002u; // 8020254C
  W8(c->r[13]+0xFFFFBC68u,c->r[0]); // 80202550
L_80202554:;
  c->r[3]=R8(c->r[13]+0xFFFFBC68u); // 80202554
  c->r[0]=rotl(c->r[3],0)&0x00000004u; // 80202558
  cmps(c,0,(int32_t)c->r[0],0); // 8020255C
  if (crb(c,2)) { goto L_80202578; } // 80202560
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 80202564
  cmps(c,0,(int32_t)c->r[0],0); // 80202568
  if (!crb(c,2)) { goto L_80202578; } // 8020256C
  c->r[0]=0u+0x00000000u; // 80202570
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 80202574
L_80202578:;
  c->r[3]=c->r[27]|c->r[27]; // 80202578
  c->lr=0x80202580u; f_8021AE2C(c); // 8020257C
  cmps(c,0,(int32_t)c->r[3],0); // 80202580
  if (crb(c,2)) { goto L_80202808; } // 80202584
  c->r[3]=c->r[27]|c->r[27]; // 80202588
  c->lr=0x80202590u; f_8021AE48(c); // 8020258C
  c->r[3]=R32(c->r[28]+0x000006C8u); // 80202590
  c->r[4]=R32(c->r[3]+0x00000010u); // 80202594
  W32(c->r[13]+0xFFFFBC80u,c->r[4]); // 80202598
  c->r[3]=c->r[26]|c->r[26]; // 8020259C
  c->r[4]=c->r[4]+0x00000001u; // 802025A0
  c->lr=0x802025A8u; f_80230180(c); // 802025A4
  c->r[3]=0u+0x00000001u; // 802025A8
  c->r[4]=0u+0x80480000u; // 802025AC
  c->r[4]=c->r[4]+0xFFFF8220u; // 802025B0
  c->r[5]=R32(c->r[13]+0xFFFFBC80u); // 802025B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802025B8
  c->lr=0x802025C0u; f_803D3760(c); // 802025BC
  c->r[3]=0u+0x00000001u; // 802025C0
  c->r[4]=0u+0x80480000u; // 802025C4
  c->r[4]=c->r[4]+0xFFFF823Cu; // 802025C8
  c->r[5]=R32(c->r[13]+0xFFFFBC84u); // 802025CC
  c->r[6]=R32(c->r[13]+0xFFFFBC88u); // 802025D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802025D4
  c->lr=0x802025DCu; f_803D3760(c); // 802025D8
  c->r[3]=R32(c->r[25]+0x00000D38u); // 802025DC
  c->lr=0x802025E4u; f_801EF7A8(c); // 802025E0
  c->r[4]=R32(c->r[13]+0xFFFFBC80u); // 802025E4
  c->r[5]=R32(c->r[13]+0xFFFFBC84u); // 802025E8
  c->r[6]=R32(c->r[13]+0xFFFFBC88u); // 802025EC
  c->lr=0x802025F4u; f_8025C194(c); // 802025F0
  c->r[3]=c->r[27]|c->r[27]; // 802025F4
  c->lr=0x802025FCu; f_80218C38(c); // 802025F8
  c->r[3]=c->r[25]|c->r[25]; // 802025FC
  c->lr=0x80202604u; f_80206CF8(c); // 80202600
  c->r[0]=0u+0x00000003u; // 80202604
  W32(c->r[28]+0x00000014u,c->r[0]); // 80202608
  c->r[26]=0u+0x00000000u; // 8020260C
  W16(c->r[28]+0x00000E50u,c->r[26]); // 80202610
  W16(c->r[28]+0x00000E52u,c->r[26]); // 80202614
  c->r[3]=0u+0x00000001u; // 80202618
  c->r[4]=0u+0x80480000u; // 8020261C
  c->r[4]=c->r[4]+0xFFFF8268u; // 80202620
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202624
  c->lr=0x8020262Cu; f_803D3760(c); // 80202628
  W8(c->r[13]+0xFFFFBC68u,c->r[26]); // 8020262C
  goto L_80202808; // 80202630
L_80202634:;
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80202634
  c->lr=0x8020263Cu; f_801EF7A8(c); // 80202638
  c->lr=0x80202640u; f_8025C26C(c); // 8020263C
  cmps(c,0,(int32_t)c->r[3],0); // 80202640
  if (crb(c,2)) { goto L_80202808; } // 80202644
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E52u); // 80202648
  c->r[0]=c->r[3]+0x00000001u; // 8020264C
  W16(c->r[28]+0x00000E52u,c->r[0]); // 80202650
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E52u); // 80202654
  cmps(c,0,(int32_t)c->r[0],1); // 80202658
  if (!crb(c,1)) { goto L_80202808; } // 8020265C
  c->r[0]=0u+0x00000000u; // 80202660
  W16(c->r[28]+0x00000E52u,c->r[0]); // 80202664
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E50u); // 80202668
  c->r[0]=c->r[3]+0x00000001u; // 8020266C
  W16(c->r[28]+0x00000E50u,c->r[0]); // 80202670
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E50u); // 80202674
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E44u); // 80202678
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8020267C
  if (crb(c,0)) { goto L_80202808; } // 80202680
  c->r[0]=0u+0x00000004u; // 80202684
  W32(c->r[28]+0x00000014u,c->r[0]); // 80202688
  c->r[0]=R32(c->r[28]+0x00000000u); // 8020268C
  cmps(c,0,(int32_t)c->r[0],2); // 80202690
  if (!crb(c,2)) { goto L_802026A4; } // 80202694
  c->r[3]=c->r[25]+0x000006D4u; // 80202698
  c->r[4]=0u+0x00000000u; // 8020269C
  c->lr=0x802026A4u; f_80208394(c); // 802026A0
L_802026A4:;
  c->r[3]=0u+0x00000001u; // 802026A4
  c->r[4]=0u+0x80480000u; // 802026A8
  c->r[4]=c->r[4]+0xFFFF8280u; // 802026AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802026B0
  c->lr=0x802026B8u; f_803D3760(c); // 802026B4
  goto L_80202808; // 802026B8
L_802026BC:;
  c->r[3]=c->r[25]|c->r[25]; // 802026BC
  c->lr=0x802026C4u; f_80205858(c); // 802026C0
  c->r[0]=R32(c->r[28]+0x00000E54u); // 802026C4
  cmps(c,0,(int32_t)c->r[0],40); // 802026C8
  if (crb(c,0)) { goto L_80202808; } // 802026CC
  c->r[0]=0u+0x00000000u; // 802026D0
  W32(c->r[28]+0x00000E54u,c->r[0]); // 802026D4
  c->r[0]=0u+0x00000005u; // 802026D8
  W32(c->r[28]+0x00000014u,c->r[0]); // 802026DC
  c->r[3]=0u+0x00000001u; // 802026E0
  c->r[4]=0u+0x80480000u; // 802026E4
  c->r[4]=c->r[4]+0xFFFF8298u; // 802026E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802026EC
  c->lr=0x802026F4u; f_803D3760(c); // 802026F0
  c->r[3]=R32(c->r[25]+0x00000D38u); // 802026F4
  c->lr=0x802026FCu; f_801EF7A8(c); // 802026F8
  c->lr=0x80202700u; f_8025C2D0(c); // 802026FC
  goto L_80202808; // 80202700
L_80202704:;
  c->r[3]=c->r[25]|c->r[25]; // 80202704
  c->lr=0x8020270Cu; f_80205858(c); // 80202708
  c->r[0]=R32(c->r[28]+0x00000E54u); // 8020270C
  cmps(c,0,(int32_t)c->r[0],40); // 80202710
  if (crb(c,0)) { goto L_80202808; } // 80202714
  c->r[31]=0u+0x00000000u; // 80202718
  W16(c->r[28]+0x00000E4Au,c->r[31]); // 8020271C
  c->r[3]=c->r[26]|c->r[26]; // 80202720
  c->r[4]=0u+0x00000000u; // 80202724
  c->lr=0x8020272Cu; f_8022D680(c); // 80202728
  W16(c->r[28]+0x0000070Eu,c->r[31]); // 8020272C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000070Eu); // 80202730
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80202734
  c->r[3]=c->r[28]+c->r[0]; // 80202738
  c->r[0]=c->r[3]+0x00000710u; // 8020273C
  W32(c->r[28]+0x00000E10u,c->r[0]); // 80202740
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000070Eu); // 80202744
  c->r[0]=c->r[3]+0x00000001u; // 80202748
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 8020274C
  c->r[3]=c->r[28]+c->r[0]; // 80202750
  c->r[0]=c->r[3]+0x00000710u; // 80202754
  W32(c->r[28]+0x00000E14u,c->r[0]); // 80202758
  c->lr=0x80202760u; f_802082D4(c); // 8020275C
  c->r[4]=0u+0x00000000u; // 80202760
  c->lr=0x80202768u; f_8021AD50(c); // 80202764
  c->lr=0x8020276Cu; f_802082D4(c); // 80202768
  c->lr=0x80202770u; f_8021AF60(c); // 8020276C
  c->lr=0x80202774u; f_802082D4(c); // 80202770
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000E4Au); // 80202774
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80202778
  c->r[4]=c->r[28]+c->r[0]; // 8020277C
  c->r[4]=R32(c->r[4]+0x000006C8u); // 80202780
  c->lr=0x80202788u; f_8021A1B0(c); // 80202784
  c->r[3]=c->r[25]|c->r[25]; // 80202788
  c->r[4]=0u+0x00000000u; // 8020278C
  c->lr=0x80202794u; f_802082BC(c); // 80202790
  c->r[0]=0u+0x00000003u; // 80202794
  W32(c->r[28]+0x00000010u,c->r[0]); // 80202798
  W32(c->r[28]+0x00000E54u,c->r[31]); // 8020279C
  W32(c->r[28]+0x00000014u,c->r[31]); // 802027A0
  c->r[3]=0u+0x00000001u; // 802027A4
  c->r[4]=0u+0x80480000u; // 802027A8
  c->r[4]=c->r[4]+0xFFFF82B0u; // 802027AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802027B0
  c->lr=0x802027B8u; f_803D3760(c); // 802027B4
  c->r[3]=0u+0x00000001u; // 802027B8
  c->r[4]=0u+0x80480000u; // 802027BC
  c->r[4]=c->r[4]+0xFFFF82CCu; // 802027C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802027C4
  c->lr=0x802027CCu; f_803D3760(c); // 802027C8
  W32(c->r[13]+0xFFFFBC6Cu,c->r[31]); // 802027CC
  c->r[0]=R32(c->r[28]+0x00000000u); // 802027D0
  cmps(c,0,(int32_t)c->r[0],2); // 802027D4
  if (!crb(c,2)) { goto L_80202808; } // 802027D8
  c->r[3]=c->r[25]+0x000006D4u; // 802027DC
  c->r[4]=R8(c->r[28]+0x0000003Au); // 802027E0
  c->r[5]=0u+0x00010000u; // 802027E4
  c->r[5]=c->r[5]+0xFFFFEA60u; // 802027E8
  c->lr=0x802027F0u; f_8020834C(c); // 802027EC
  c->r[3]=c->r[25]+0x000006D4u; // 802027F0
  c->r[4]=0u+0x00000001u; // 802027F4
  c->r[5]=R32(c->r[28]+0x00000018u); // 802027F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x000006FEu); // 802027FC
  c->r[5]=R8(c->r[5]+c->r[0]); // 80202800
  c->lr=0x80202808u; f_8020C368(c); // 80202804
L_80202808:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80202808
  cmps(c,0,(int32_t)c->r[0],2); // 8020280C
  if (!crb(c,2)) { goto L_80202884; } // 80202810
  c->r[0]=R32(c->r[28]+0x00000014u); // 80202814
  cmps(c,0,(int32_t)c->r[0],5); // 80202818
  if (crb(c,2)) { goto L_8020287C; } // 8020281C
  if (!crb(c,0)) { goto L_80202884; } // 80202820
  cmps(c,0,(int32_t)c->r[0],3); // 80202824
  if (!crb(c,0)) { goto L_80202838; } // 80202828
  cmps(c,0,(int32_t)c->r[0],1); // 8020282C
  if (!crb(c,0)) { goto L_80202840; } // 80202830
  goto L_80202884; // 80202834
L_80202838:;
  c->r[3]=c->r[25]|c->r[25]; // 80202838
  c->lr=0x80202840u; f_801FBA1C(c); // 8020283C
L_80202840:;
  c->r[3]=c->r[25]|c->r[25]; // 80202840
  c->lr=0x80202848u; f_801FBA1C(c); // 80202844
  c->r[3]=R32(c->r[13]+0xFFFFBC70u); // 80202848
  cmps(c,0,(int32_t)c->r[3],0); // 8020284C
  if (!crb(c,1)) { goto L_80202884; } // 80202850
  c->r[0]=R32(c->r[28]+0x00000EF0u); // 80202854
  cmps(c,0,(int32_t)c->r[0],0); // 80202858
  if (!crb(c,0)) { goto L_80202884; } // 8020285C
  c->r[0]=0u-c->r[0]; // 80202860
  W32(c->r[28]+0x00000EF0u,c->r[0]); // 80202864
  c->r[0]=0u+0x00000000u; // 80202868
  W32(c->r[28]+0x00000EF8u,c->r[0]); // 8020286C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80202870
  W32(c->r[13]+0xFFFFBC70u,c->r[0]); // 80202874
  goto L_80202884; // 80202878
L_8020287C:;
  c->r[3]=c->r[25]|c->r[25]; // 8020287C
  c->lr=0x80202884u; f_801FBA1C(c); // 80202880
L_80202884:;
  c->r[11]=c->r[1]+0x00000030u; // 80202884
  c->lr=0x8020288Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202888
  c->r[0]=R32(c->r[1]+0x00000034u); // 8020288C
  c->lr=c->r[0]; // 80202890
  c->r[1]=c->r[1]+0x00000030u; // 80202894
  return; // 80202898
}

// fn_8020289C
void f_8020289C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020289C
  c->r[0]=c->lr; // 802028A0
  W32(c->r[1]+0x00000124u,c->r[0]); // 802028A4
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 802028A8
  W32(c->r[1]+0x00000118u,c->r[30]); // 802028AC
  W32(c->r[1]+0x00000114u,c->r[29]); // 802028B0
  W32(c->r[1]+0x00000110u,c->r[28]); // 802028B4
  c->r[29]=c->r[3]|c->r[3]; // 802028B8
  c->r[31]=R32(c->r[3]+0x00000D08u); // 802028BC
  c->r[3]=R32(c->r[3]+0x00000D38u); // 802028C0
  c->lr=0x802028C8u; f_801EF3D4(c); // 802028C4
  c->r[30]=c->r[3]|c->r[3]; // 802028C8
  c->r[28]=R32(c->r[31]+0x00000E54u); // 802028CC
  c->r[3]=c->r[29]|c->r[29]; // 802028D0
  c->lr=0x802028D8u; f_802082B4(c); // 802028D4
  cmpu(c,0,c->r[28],0x00000007u); // 802028D8
  if (crb(c,1)) { goto L_80202C04; } // 802028DC
  c->r[3]=0u+0x80480000u; // 802028E0
  c->r[3]=c->r[3]+0xFFFF8394u; // 802028E4
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 802028E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 802028EC
  c->ctr=c->r[3]; // 802028F0
  if (true) { switch (c->ctr) { case 0x802028F8u: goto L_802028F8; case 0x802029B4u: goto L_802029B4; case 0x802029D4u: goto L_802029D4; case 0x80202A20u: goto L_80202A20; case 0x80202AD0u: goto L_80202AD0; case 0x80202AF0u: goto L_80202AF0; case 0x80202B40u: goto L_80202B40; case 0x80202B80u: goto L_80202B80; default: break; } dispatch(c,c->ctr); return; } // 802028F4
L_802028F8:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 802028F8
  c->lr=0x80202900u; f_801EF7A8(c); // 802028FC
  c->lr=0x80202904u; f_8025C3E0(c); // 80202900
  cmps(c,0,(int32_t)c->r[3],0); // 80202904
  if (crb(c,2)) { goto L_80202C04; } // 80202908
  c->r[3]=0u+0x00000001u; // 8020290C
  c->r[4]=0u+0x80480000u; // 80202910
  c->r[4]=c->r[4]+0xFFFF8304u; // 80202914
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202918
  c->lr=0x80202920u; f_803D3760(c); // 8020291C
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202920
  c->lr=0x80202928u; f_801EF7A8(c); // 80202924
  c->lr=0x8020292Cu; f_8025C444(c); // 80202928
  c->r[3]=R32(c->r[31]+0x000006C8u); // 8020292C
  c->r[28]=R32(c->r[3]+0x00000010u); // 80202930
  c->r[3]=c->r[30]|c->r[30]; // 80202934
  c->r[4]=c->r[28]+0x00000001u; // 80202938
  c->lr=0x80202940u; f_8022ECA0(c); // 8020293C
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 80202940
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202944
  c->lr=0x8020294Cu; f_801EF9D4(c); // 80202948
  c->r[31]=c->r[3]|c->r[3]; // 8020294C
  c->r[3]=c->r[30]|c->r[30]; // 80202950
  c->r[4]=0u+0x00000006u; // 80202954
  c->lr=0x8020295Cu; f_8022D8B0(c); // 80202958
  c->r[4]=c->r[3]|c->r[3]; // 8020295C
  c->r[3]=c->r[1]+0x00000008u; // 80202960
  c->r[5]=R32(c->r[29]+0x00000D08u); // 80202964
  c->r[5]=R32(c->r[5]+0x000006C8u); // 80202968
  c->r[5]=c->r[5]+0x00000024u; // 8020296C
  c->r[6]=c->r[31]|c->r[31]; // 80202970
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202974
  c->lr=0x8020297Cu; f_802E7CC4(c); // 80202978
  c->r[3]=c->r[30]|c->r[30]; // 8020297C
  c->r[4]=0u+0x00000006u; // 80202980
  c->r[5]=c->r[1]+0x00000008u; // 80202984
  c->lr=0x8020298Cu; f_8022D930(c); // 80202988
  c->r[3]=c->r[30]|c->r[30]; // 8020298C
  c->r[4]=c->r[28]+0x00000001u; // 80202990
  c->r[5]=0u+0x00000001u; // 80202994
  c->r[6]=0u+0x00000006u; // 80202998
  c->lr=0x802029A0u; f_8022FB0C(c); // 8020299C
  c->r[3]=c->r[30]|c->r[30]; // 802029A0
  c->lr=0x802029A8u; f_80230944(c); // 802029A4
  c->r[3]=c->r[29]|c->r[29]; // 802029A8
  c->lr=0x802029B0u; f_80205858(c); // 802029AC
  goto L_80202C04; // 802029B0
L_802029B4:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 802029B4
  c->lr=0x802029BCu; f_801EF7A8(c); // 802029B8
  c->lr=0x802029C0u; f_8025C50C(c); // 802029BC
  cmps(c,0,(int32_t)c->r[3],0); // 802029C0
  if (crb(c,2)) { goto L_80202C04; } // 802029C4
  c->r[3]=c->r[29]|c->r[29]; // 802029C8
  c->lr=0x802029D0u; f_80205858(c); // 802029CC
  goto L_80202C04; // 802029D0
L_802029D4:;
  c->r[3]=c->r[30]|c->r[30]; // 802029D4
  c->lr=0x802029DCu; f_8020843C(c); // 802029D8
  cmps(c,0,(int32_t)c->r[3],0); // 802029DC
  if (crb(c,2)) { goto L_80202C04; } // 802029E0
  c->r[3]=c->r[30]|c->r[30]; // 802029E4
  c->lr=0x802029ECu; f_8020841C(c); // 802029E8
  cmps(c,0,(int32_t)c->r[3],0); // 802029EC
  if (crb(c,2)) { goto L_80202C04; } // 802029F0
  c->r[3]=c->r[30]|c->r[30]; // 802029F4
  c->r[4]=R32(c->r[31]+0x000006C8u); // 802029F8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000034u); // 802029FC
  c->r[4]=c->r[4]+0x00000001u; // 80202A00
  c->r[5]=0u+0x00000000u; // 80202A04
  c->r[6]=0u+0xFFFFFFFFu; // 80202A08
  c->lr=0x80202A10u; f_8022F5EC(c); // 80202A0C
  c->r[0]=0u+0x00000000u; // 80202A10
  W32(c->r[29]+0x00000068u,c->r[0]); // 80202A14
  c->r[3]=c->r[29]|c->r[29]; // 80202A18
  c->lr=0x80202A20u; f_80205858(c); // 80202A1C
L_80202A20:;
  c->r[3]=c->r[30]|c->r[30]; // 80202A20
  c->lr=0x80202A28u; f_8020841C(c); // 80202A24
  cmps(c,0,(int32_t)c->r[3],0); // 80202A28
  if (crb(c,2)) { goto L_80202C04; } // 80202A2C
  c->r[3]=0u+0x00000001u; // 80202A30
  c->r[4]=0u+0x80480000u; // 80202A34
  c->r[4]=c->r[4]+0xFFFF832Cu; // 80202A38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202A3C
  c->lr=0x80202A44u; f_803D3760(c); // 80202A40
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202A44
  c->lr=0x80202A4Cu; f_801EF7A8(c); // 80202A48
  c->lr=0x80202A50u; f_8025C4A0(c); // 80202A4C
  c->r[3]=R32(c->r[31]+0x000006CCu); // 80202A50
  c->r[28]=R32(c->r[3]+0x00000010u); // 80202A54
  c->r[3]=c->r[30]|c->r[30]; // 80202A58
  c->r[4]=c->r[28]+0x00000001u; // 80202A5C
  c->lr=0x80202A64u; f_8022ECA0(c); // 80202A60
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 80202A64
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202A68
  c->lr=0x80202A70u; f_801EF9D4(c); // 80202A6C
  c->r[31]=c->r[3]|c->r[3]; // 80202A70
  c->r[3]=c->r[30]|c->r[30]; // 80202A74
  c->r[4]=0u+0x00000006u; // 80202A78
  c->lr=0x80202A80u; f_8022D8B0(c); // 80202A7C
  c->r[4]=c->r[3]|c->r[3]; // 80202A80
  c->r[3]=c->r[1]+0x00000008u; // 80202A84
  c->r[5]=R32(c->r[29]+0x00000D08u); // 80202A88
  c->r[5]=R32(c->r[5]+0x000006CCu); // 80202A8C
  c->r[5]=c->r[5]+0x00000024u; // 80202A90
  c->r[6]=c->r[31]|c->r[31]; // 80202A94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202A98
  c->lr=0x80202AA0u; f_802E7CC4(c); // 80202A9C
  c->r[3]=c->r[30]|c->r[30]; // 80202AA0
  c->r[4]=0u+0x00000006u; // 80202AA4
  c->r[5]=c->r[1]+0x00000008u; // 80202AA8
  c->lr=0x80202AB0u; f_8022D930(c); // 80202AAC
  c->r[3]=c->r[30]|c->r[30]; // 80202AB0
  c->r[4]=c->r[28]+0x00000001u; // 80202AB4
  c->r[5]=0u+0x00000001u; // 80202AB8
  c->r[6]=0u+0x00000006u; // 80202ABC
  c->lr=0x80202AC4u; f_8022FB0C(c); // 80202AC0
  c->r[3]=c->r[29]|c->r[29]; // 80202AC4
  c->lr=0x80202ACCu; f_80205858(c); // 80202AC8
  goto L_80202C04; // 80202ACC
L_80202AD0:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202AD0
  c->lr=0x80202AD8u; f_801EF7A8(c); // 80202AD4
  c->lr=0x80202ADCu; f_8025C50C(c); // 80202AD8
  cmps(c,0,(int32_t)c->r[3],0); // 80202ADC
  if (crb(c,2)) { goto L_80202C04; } // 80202AE0
  c->r[3]=c->r[29]|c->r[29]; // 80202AE4
  c->lr=0x80202AECu; f_80205858(c); // 80202AE8
  goto L_80202C04; // 80202AEC
L_80202AF0:;
  c->r[3]=c->r[30]|c->r[30]; // 80202AF0
  c->lr=0x80202AF8u; f_8020843C(c); // 80202AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80202AF8
  if (crb(c,2)) { goto L_80202C04; } // 80202AFC
  c->r[3]=c->r[30]|c->r[30]; // 80202B00
  c->lr=0x80202B08u; f_8020841C(c); // 80202B04
  cmps(c,0,(int32_t)c->r[3],0); // 80202B08
  if (crb(c,2)) { goto L_80202C04; } // 80202B0C
  c->r[3]=c->r[30]|c->r[30]; // 80202B10
  c->r[4]=R32(c->r[31]+0x000006CCu); // 80202B14
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000034u); // 80202B18
  c->r[4]=c->r[4]+0x00000001u; // 80202B1C
  c->r[5]=0u+0x00000000u; // 80202B20
  c->r[6]=0u+0xFFFFFFFFu; // 80202B24
  c->lr=0x80202B2Cu; f_8022F5EC(c); // 80202B28
  c->r[0]=0u+0x00000000u; // 80202B2C
  W32(c->r[29]+0x00000068u,c->r[0]); // 80202B30
  c->r[3]=c->r[29]|c->r[29]; // 80202B34
  c->lr=0x80202B3Cu; f_80205858(c); // 80202B38
  goto L_80202C04; // 80202B3C
L_80202B40:;
  c->r[3]=c->r[30]|c->r[30]; // 80202B40
  c->lr=0x80202B48u; f_8020841C(c); // 80202B44
  cmps(c,0,(int32_t)c->r[3],0); // 80202B48
  if (crb(c,2)) { goto L_80202C04; } // 80202B4C
  c->r[3]=c->r[30]|c->r[30]; // 80202B50
  c->r[4]=0u+0x00000001u; // 80202B54
  c->lr=0x80202B5Cu; f_80208410(c); // 80202B58
  c->r[3]=c->r[30]|c->r[30]; // 80202B5C
  c->r[4]=0u+0x00000001u; // 80202B60
  c->lr=0x80202B68u; f_80230728(c); // 80202B64
  c->r[3]=c->r[30]|c->r[30]; // 80202B68
  c->r[4]=0u+0x00000001u; // 80202B6C
  c->lr=0x80202B74u; f_802307F8(c); // 80202B70
  c->r[3]=c->r[29]|c->r[29]; // 80202B74
  c->lr=0x80202B7Cu; f_80205858(c); // 80202B78
  goto L_80202C04; // 80202B7C
L_80202B80:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202B80
  c->lr=0x80202B88u; f_801EF7A8(c); // 80202B84
  c->lr=0x80202B8Cu; f_8025C50C(c); // 80202B88
  cmps(c,0,(int32_t)c->r[3],0); // 80202B8C
  if (crb(c,2)) { goto L_80202C04; } // 80202B90
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000E4Au); // 80202B94
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000E44u); // 80202B98
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80202B9C
  if (crb(c,0)) { goto L_80202BCC; } // 80202BA0
  c->r[3]=0u+0x00000001u; // 80202BA4
  c->r[4]=0u+0x80480000u; // 80202BA8
  c->r[4]=c->r[4]+0xFFFF8358u; // 80202BAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202BB0
  c->lr=0x80202BB8u; f_803D3760(c); // 80202BB4
  c->r[0]=0u+0x00000000u; // 80202BB8
  W32(c->r[31]+0x00000E54u,c->r[0]); // 80202BBC
  c->r[3]=c->r[29]|c->r[29]; // 80202BC0
  c->lr=0x80202BC8u; f_80204E50(c); // 80202BC4
  goto L_80202C04; // 80202BC8
L_80202BCC:;
  c->r[3]=0u+0x00000001u; // 80202BCC
  c->r[4]=0u+0x80480000u; // 80202BD0
  c->r[4]=c->r[4]+0xFFFF8370u; // 80202BD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202BD8
  c->lr=0x80202BE0u; f_803D3760(c); // 80202BDC
  c->lr=0x80202BE4u; f_802082D4(c); // 80202BE0
  c->r[4]=0u+0x00000000u; // 80202BE4
  c->lr=0x80202BECu; f_8021AD50(c); // 80202BE8
  c->lr=0x80202BF0u; f_802082D4(c); // 80202BEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000E4Au); // 80202BF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80202BF4
  c->r[4]=c->r[31]+c->r[0]; // 80202BF8
  c->r[4]=R32(c->r[4]+0x000006C8u); // 80202BFC
  c->lr=0x80202C04u; f_8021A1B0(c); // 80202C00
L_80202C04:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80202C04
  c->r[30]=R32(c->r[1]+0x00000118u); // 80202C08
  c->r[29]=R32(c->r[1]+0x00000114u); // 80202C0C
  c->r[28]=R32(c->r[1]+0x00000110u); // 80202C10
  c->r[0]=R32(c->r[1]+0x00000124u); // 80202C14
  c->lr=c->r[0]; // 80202C18
  c->r[1]=c->r[1]+0x00000120u; // 80202C1C
  return; // 80202C20
}

// fn_80202C24
void f_80202C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202C24
  c->r[0]=c->lr; // 80202C28
  W32(c->r[1]+0x00000124u,c->r[0]); // 80202C2C
  c->r[11]=c->r[1]+0x00000120u; // 80202C30
  c->lr=0x80202C38u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202C34
  c->r[29]=c->r[3]|c->r[3]; // 80202C38
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80202C3C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80202C40
  c->lr=0x80202C48u; f_801EF3D4(c); // 80202C44
  c->r[30]=c->r[3]|c->r[3]; // 80202C48
  c->r[0]=R32(c->r[31]+0x00000014u); // 80202C4C
  cmps(c,0,(int32_t)c->r[0],1); // 80202C50
  if (crb(c,2)) { goto L_80202E28; } // 80202C54
  if (!crb(c,0)) { goto L_80202C68; } // 80202C58
  cmps(c,0,(int32_t)c->r[0],0); // 80202C5C
  if (!crb(c,0)) { goto L_80202C74; } // 80202C60
  goto L_80202E28; // 80202C64
L_80202C68:;
  cmps(c,0,(int32_t)c->r[0],3); // 80202C68
  if (!crb(c,0)) { goto L_80202E28; } // 80202C6C
  goto L_80202CB8; // 80202C70
L_80202C74:;
  c->r[3]=0u+0x00000001u; // 80202C74
  c->r[4]=0u+0x80480000u; // 80202C78
  c->r[4]=c->r[4]+0xFFFF83B4u; // 80202C7C
  c->r[5]=R32(c->r[31]+0x00000E54u); // 80202C80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202C84
  c->lr=0x80202C8Cu; f_803D3760(c); // 80202C88
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202C8C
  c->lr=0x80202C94u; f_801EF7A8(c); // 80202C90
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000070Eu); // 80202C94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80202C98
  c->r[4]=c->r[31]+c->r[0]; // 80202C9C
  c->r[4]=R32(c->r[4]+0x00000714u); // 80202CA0
  c->r[4]=R32(c->r[4]+0x00000010u); // 80202CA4
  c->lr=0x80202CACu; f_8025C58C(c); // 80202CA8
  c->r[0]=0u+0x00000001u; // 80202CAC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80202CB0
  goto L_80202E28; // 80202CB4
L_80202CB8:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202CB8
  c->lr=0x80202CC0u; f_801EF7A8(c); // 80202CBC
  c->lr=0x80202CC4u; f_8025C5E0(c); // 80202CC0
  cmps(c,0,(int32_t)c->r[3],0); // 80202CC4
  if (crb(c,2)) { goto L_80202E28; } // 80202CC8
  c->r[3]=0u+0x00000001u; // 80202CCC
  c->r[4]=0u+0x80480000u; // 80202CD0
  c->r[4]=c->r[4]+0xFFFF83D4u; // 80202CD4
  c->r[5]=R32(c->r[31]+0x00000E54u); // 80202CD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202CDC
  c->lr=0x80202CE4u; f_803D3760(c); // 80202CE0
  c->r[3]=c->r[29]|c->r[29]; // 80202CE4
  c->lr=0x80202CECu; f_80204E6C(c); // 80202CE8
  c->r[3]=c->r[30]|c->r[30]; // 80202CEC
  c->r[4]=0u+0x00000000u; // 80202CF0
  c->r[5]=0u+0x00000000u; // 80202CF4
  c->r[6]=0u+0x00000000u; // 80202CF8
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80202CFC
  c->lr=0x80202D04u; f_802303E8(c); // 80202D00
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000070Eu); // 80202D04
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80202D08
  c->r[27]=c->r[31]+c->r[0]; // 80202D0C
  c->r[4]=R32(c->r[27]+0x00000710u); // 80202D10
  c->r[0]=rotl(c->r[4],0)&0x00000020u; // 80202D14
  cmps(c,0,(int32_t)c->r[0],0); // 80202D18
  if (!crb(c,2)) { goto L_80202E28; } // 80202D1C
  c->r[3]=R32(c->r[27]+0x00000714u); // 80202D20
  c->r[28]=R32(c->r[3]+0x00000108u); // 80202D24
  c->r[0]=R32(c->r[27]+0x00000728u); // 80202D28
  cmps(c,0,(int32_t)c->r[0],0); // 80202D2C
  if (crb(c,2)) { goto L_80202DD4; } // 80202D30
  if (crb(c,0)) { goto L_80202E28; } // 80202D34
  cmps(c,0,(int32_t)c->r[0],3); // 80202D38
  if (!crb(c,0)) { goto L_80202E28; } // 80202D3C
  c->r[0]=rotl(c->r[4],0)&0x00000006u; // 80202D40
  cmps(c,0,(int32_t)c->r[0],0); // 80202D44
  if (!crb(c,2)) { goto L_80202E28; } // 80202D48
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202D4C
  c->r[4]=R16(c->r[28]+0x00000000u); // 80202D50
  c->lr=0x80202D58u; f_801EF9E4(c); // 80202D54
  c->r[6]=c->r[3]|c->r[3]; // 80202D58
  c->r[3]=0u+0x00000001u; // 80202D5C
  c->r[4]=0u+0x80480000u; // 80202D60
  c->r[4]=c->r[4]+0xFFFF83F8u; // 80202D64
  c->r[5]=R32(c->r[31]+0x00000E54u); // 80202D68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202D6C
  c->lr=0x80202D74u; f_803D3760(c); // 80202D70
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202D74
  c->r[4]=R16(c->r[28]+0x00000000u); // 80202D78
  c->lr=0x80202D80u; f_801EF9E4(c); // 80202D7C
  c->r[28]=c->r[3]|c->r[3]; // 80202D80
  c->r[3]=c->r[30]|c->r[30]; // 80202D84
  c->r[4]=0u+0x00000009u; // 80202D88
  c->lr=0x80202D90u; f_8022D8B0(c); // 80202D8C
  c->r[4]=c->r[3]|c->r[3]; // 80202D90
  c->r[3]=c->r[1]+0x00000008u; // 80202D94
  c->r[5]=R32(c->r[27]+0x00000714u); // 80202D98
  c->r[5]=c->r[5]+0x00000024u; // 80202D9C
  c->r[6]=c->r[28]|c->r[28]; // 80202DA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202DA4
  c->lr=0x80202DACu; f_802E7CC4(c); // 80202DA8
  c->r[3]=c->r[30]|c->r[30]; // 80202DAC
  c->r[4]=R32(c->r[27]+0x00000714u); // 80202DB0
  c->r[4]=R32(c->r[4]+0x00000010u); // 80202DB4
  c->r[4]=c->r[4]+0x00000001u; // 80202DB8
  c->r[5]=0u+0x00000001u; // 80202DBC
  c->r[6]=c->r[1]+0x00000008u; // 80202DC0
  c->lr=0x80202DC8u; f_8022F558(c); // 80202DC4
  c->r[0]=0u+0x00000001u; // 80202DC8
  W32(c->r[29]+0x00000068u,c->r[0]); // 80202DCC
  goto L_80202E28; // 80202DD0
L_80202DD4:;
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80202DD4
  c->r[4]=R16(c->r[28]+0x00000000u); // 80202DD8
  c->lr=0x80202DE0u; f_801EF9D4(c); // 80202DDC
  c->r[28]=c->r[3]|c->r[3]; // 80202DE0
  c->r[3]=c->r[30]|c->r[30]; // 80202DE4
  c->r[4]=0u+0x00000003u; // 80202DE8
  c->lr=0x80202DF0u; f_8022D8B0(c); // 80202DEC
  c->r[4]=c->r[3]|c->r[3]; // 80202DF0
  c->r[3]=c->r[1]+0x00000008u; // 80202DF4
  c->r[5]=c->r[28]|c->r[28]; // 80202DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202DFC
  c->lr=0x80202E04u; f_802E7CC4(c); // 80202E00
  c->r[3]=c->r[30]|c->r[30]; // 80202E04
  c->r[4]=R32(c->r[27]+0x00000714u); // 80202E08
  c->r[4]=R32(c->r[4]+0x00000010u); // 80202E0C
  c->r[4]=c->r[4]+0x00000001u; // 80202E10
  c->r[5]=0u+0x00000001u; // 80202E14
  c->r[6]=c->r[1]+0x00000008u; // 80202E18
  c->lr=0x80202E20u; f_8022F558(c); // 80202E1C
  c->r[0]=0u+0x00000001u; // 80202E20
  W32(c->r[29]+0x00000068u,c->r[0]); // 80202E24
L_80202E28:;
  c->r[5]=R32(c->r[31]+0x00000E54u); // 80202E28
  cmps(c,0,(int32_t)c->r[5],60); // 80202E2C
  if (crb(c,2)) { goto L_80202E78; } // 80202E30
  if (!crb(c,0)) { goto L_80202E80; } // 80202E34
  cmps(c,0,(int32_t)c->r[5],50); // 80202E38
  if (crb(c,2)) { goto L_80202E44; } // 80202E3C
  goto L_80202E80; // 80202E40
L_80202E44:;
  c->r[3]=0u+0x00000001u; // 80202E44
  c->r[4]=0u+0x80480000u; // 80202E48
  c->r[4]=c->r[4]+0xFFFF8418u; // 80202E4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202E50
  c->lr=0x80202E58u; f_803D3760(c); // 80202E54
  c->r[3]=c->r[30]|c->r[30]; // 80202E58
  c->r[4]=0u+0x00000000u; // 80202E5C
  c->r[5]=0u+0x00000000u; // 80202E60
  c->r[6]=0u+0xFFFFFFFFu; // 80202E64
  c->lr=0x80202E6Cu; f_8022F5EC(c); // 80202E68
  c->r[0]=0u+0x00000000u; // 80202E6C
  W32(c->r[29]+0x00000068u,c->r[0]); // 80202E70
  goto L_80202E80; // 80202E74
L_80202E78:;
  c->r[0]=0u+0x00000002u; // 80202E78
  W32(c->r[31]+0x00000014u,c->r[0]); // 80202E7C
L_80202E80:;
  c->r[3]=c->r[29]|c->r[29]; // 80202E80
  c->lr=0x80202E88u; f_80205858(c); // 80202E84
  c->r[11]=c->r[1]+0x00000120u; // 80202E88
  c->lr=0x80202E90u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80202E8C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80202E90
  c->lr=c->r[0]; // 80202E94
  c->r[1]=c->r[1]+0x00000120u; // 80202E98
  return; // 80202E9C
}

// fn_80202EA0
void f_80202EA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80202EA0
  c->r[0]=c->lr; // 80202EA4
  W32(c->r[1]+0x00000124u,c->r[0]); // 80202EA8
  c->r[11]=c->r[1]+0x00000120u; // 80202EAC
  c->lr=0x80202EB4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80202EB0
  c->r[27]=c->r[3]|c->r[3]; // 80202EB4
  c->r[30]=R32(c->r[3]+0x00000D08u); // 80202EB8
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80202EBC
  c->lr=0x80202EC4u; f_801EF3D4(c); // 80202EC0
  c->r[29]=c->r[3]|c->r[3]; // 80202EC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000070Eu); // 80202EC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80202ECC
  c->r[31]=c->r[30]+c->r[0]; // 80202ED0
  c->r[3]=R32(c->r[31]+0x00000714u); // 80202ED4
  c->r[3]=R32(c->r[3]+0x00000010u); // 80202ED8
  c->r[28]=c->r[3]+0x00000001u; // 80202EDC
  c->r[0]=R32(c->r[30]+0x00000014u); // 80202EE0
  cmps(c,0,(int32_t)c->r[0],1); // 80202EE4
  if (crb(c,2)) { goto L_80202F34; } // 80202EE8
  if (!crb(c,0)) { goto L_80202F34; } // 80202EEC
  cmps(c,0,(int32_t)c->r[0],0); // 80202EF0
  if (!crb(c,0)) { goto L_80202F00; } // 80202EF4
  goto L_80202F34; // 80202EF8
  goto L_80202F34; // 80202EFC
L_80202F00:;
  c->r[3]=0u+0x00000001u; // 80202F00
  c->r[4]=0u+0x80480000u; // 80202F04
  c->r[4]=c->r[4]+0xFFFF8438u; // 80202F08
  c->r[5]=R32(c->r[30]+0x00000E54u); // 80202F0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202F10
  c->lr=0x80202F18u; f_803D3760(c); // 80202F14
  c->r[3]=R32(c->r[27]+0x00000D38u); // 80202F18
  c->lr=0x80202F20u; f_801EF7A8(c); // 80202F1C
  c->r[4]=R32(c->r[31]+0x00000714u); // 80202F20
  c->r[4]=R32(c->r[4]+0x00000010u); // 80202F24
  c->lr=0x80202F2Cu; f_8025C5E4(c); // 80202F28
  c->r[0]=0u+0x00000002u; // 80202F2C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80202F30
L_80202F34:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80202F34
  c->r[3]=R32(c->r[3]+0x00000000u); // 80202F38
  c->r[0]=rotl(c->r[3],0)&0x00000006u; // 80202F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80202F40
  if (crb(c,2)) { goto L_80202FDC; } // 80202F44
  c->r[5]=R32(c->r[30]+0x00000E54u); // 80202F48
  cmps(c,0,(int32_t)c->r[5],30); // 80202F4C
  if (!crb(c,2)) { goto L_80202FDC; } // 80202F50
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 80202F54
  cmps(c,0,(int32_t)c->r[0],0); // 80202F58
  if (!crb(c,2)) { goto L_80202FDC; } // 80202F5C
  c->r[3]=0u+0x00000001u; // 80202F60
  c->r[4]=0u+0x80480000u; // 80202F64
  c->r[4]=c->r[4]+0xFFFF8464u; // 80202F68
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202F6C
  c->lr=0x80202F74u; f_803D3760(c); // 80202F70
  c->r[3]=R32(c->r[27]+0x00000D38u); // 80202F74
  c->r[4]=R32(c->r[30]+0x00000E10u); // 80202F78
  c->r[4]=R32(c->r[4]+0x00000004u); // 80202F7C
  c->r[4]=R32(c->r[4]+0x00000108u); // 80202F80
  c->r[4]=R16(c->r[4]+0x00000000u); // 80202F84
  c->lr=0x80202F8Cu; f_801EF9E4(c); // 80202F88
  c->r[26]=c->r[3]|c->r[3]; // 80202F8C
  c->r[3]=c->r[29]|c->r[29]; // 80202F90
  c->r[4]=0u+0x00000009u; // 80202F94
  c->lr=0x80202F9Cu; f_8022D8B0(c); // 80202F98
  c->r[4]=c->r[3]|c->r[3]; // 80202F9C
  c->r[3]=c->r[1]+0x00000008u; // 80202FA0
  c->r[5]=R32(c->r[31]+0x00000714u); // 80202FA4
  c->r[5]=c->r[5]+0x00000024u; // 80202FA8
  c->r[6]=c->r[26]|c->r[26]; // 80202FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80202FB0
  c->lr=0x80202FB8u; f_802E7CC4(c); // 80202FB4
  c->r[3]=c->r[29]|c->r[29]; // 80202FB8
  c->r[4]=R32(c->r[31]+0x00000714u); // 80202FBC
  c->r[4]=R32(c->r[4]+0x00000010u); // 80202FC0
  c->r[4]=c->r[4]+0x00000001u; // 80202FC4
  c->r[5]=0u+0x00000001u; // 80202FC8
  c->r[6]=c->r[1]+0x00000008u; // 80202FCC
  c->lr=0x80202FD4u; f_8022F558(c); // 80202FD0
  c->r[0]=0u+0x00000001u; // 80202FD4
  W32(c->r[27]+0x00000068u,c->r[0]); // 80202FD8
L_80202FDC:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80202FDC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80202FE0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80202FE4
  cmps(c,0,(int32_t)c->r[0],0); // 80202FE8
  if (!crb(c,2)) { goto L_80203068; } // 80202FEC
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80202FF0
  cmps(c,0,(int32_t)c->r[0],120); // 80202FF4
  if (!crb(c,2)) { goto L_80203030; } // 80202FF8
  c->r[3]=c->r[29]|c->r[29]; // 80202FFC
  c->r[4]=0u+0x00000000u; // 80203000
  c->r[5]=0u+0x00000000u; // 80203004
  c->r[6]=0u+0xFFFFFFFFu; // 80203008
  c->lr=0x80203010u; f_8022F5EC(c); // 8020300C
  c->r[0]=0u+0x00000000u; // 80203010
  W32(c->r[27]+0x00000068u,c->r[0]); // 80203014
  c->r[3]=0u+0x00000001u; // 80203018
  c->r[4]=0u+0x80480000u; // 8020301C
  c->r[4]=c->r[4]+0xFFFF8484u; // 80203020
  c->r[5]=R32(c->r[30]+0x00000E54u); // 80203024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203028
  c->lr=0x80203030u; f_803D3760(c); // 8020302C
L_80203030:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80203030
  c->r[0]=R32(c->r[3]+0x00000018u); // 80203034
  cmps(c,0,(int32_t)c->r[0],0); // 80203038
  if (crb(c,2)) { goto L_802030BC; } // 8020303C
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203040
  cmps(c,0,(int32_t)c->r[0],110); // 80203044
  if (crb(c,2)) { goto L_80203050; } // 80203048
  goto L_802030BC; // 8020304C
L_80203050:;
  c->r[3]=0u+0x00000001u; // 80203050
  c->r[4]=0u+0x80480000u; // 80203054
  c->r[4]=c->r[4]+0xFFFF84A8u; // 80203058
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020305C
  c->lr=0x80203064u; f_803D3760(c); // 80203060
  goto L_802030BC; // 80203064
L_80203068:;
  c->r[5]=R32(c->r[30]+0x00000E54u); // 80203068
  cmps(c,0,(int32_t)c->r[5],80); // 8020306C
  if (!crb(c,2)) { goto L_802030BC; } // 80203070
  c->r[3]=0u+0x00000001u; // 80203074
  c->r[4]=0u+0x80480000u; // 80203078
  c->r[4]=c->r[4]+0xFFFF84D8u; // 8020307C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203080
  c->lr=0x80203088u; f_803D3760(c); // 80203084
  c->r[3]=c->r[29]|c->r[29]; // 80203088
  c->r[4]=0u+0x00000000u; // 8020308C
  c->r[5]=0u+0x00000000u; // 80203090
  c->r[6]=0u+0xFFFFFFFFu; // 80203094
  c->lr=0x8020309Cu; f_8022F5EC(c); // 80203098
  c->r[3]=c->r[29]|c->r[29]; // 8020309C
  c->r[4]=c->r[28]|c->r[28]; // 802030A0
  c->r[5]=0u+0x00000000u; // 802030A4
  c->r[6]=0u+0x00000000u; // 802030A8
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802030AC
  c->lr=0x802030B4u; f_802303E8(c); // 802030B0
  c->r[0]=0u+0x00000000u; // 802030B4
  W32(c->r[27]+0x00000068u,c->r[0]); // 802030B8
L_802030BC:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 802030BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 802030C0
  cmps(c,0,(int32_t)c->r[0],0); // 802030C4
  if (crb(c,2)) { goto L_80203114; } // 802030C8
  c->r[0]=R32(c->r[30]+0x00000E54u); // 802030CC
  cmps(c,0,(int32_t)c->r[0],116); // 802030D0
  if (crb(c,2)) { goto L_80203100; } // 802030D4
  if (!crb(c,0)) { goto L_80203114; } // 802030D8
  cmps(c,0,(int32_t)c->r[0],100); // 802030DC
  if (crb(c,2)) { goto L_802030E8; } // 802030E0
  goto L_80203114; // 802030E4
L_802030E8:;
  c->r[3]=0u+0x00000001u; // 802030E8
  c->r[4]=0u+0x80480000u; // 802030EC
  c->r[4]=c->r[4]+0xFFFF84F8u; // 802030F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802030F4
  c->lr=0x802030FCu; f_803D3760(c); // 802030F8
  goto L_80203114; // 802030FC
L_80203100:;
  c->r[3]=0u+0x00000001u; // 80203100
  c->r[4]=0u+0x80480000u; // 80203104
  c->r[4]=c->r[4]+0xFFFF8510u; // 80203108
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020310C
  c->lr=0x80203114u; f_803D3760(c); // 80203110
L_80203114:;
  c->r[6]=R32(c->r[30]+0x00000E54u); // 80203114
  cmps(c,0,(int32_t)c->r[6],60); // 80203118
  if (!crb(c,2)) { goto L_80203158; } // 8020311C
  c->r[26]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000070Eu); // 80203120
  c->r[3]=0u+0x00000001u; // 80203124
  c->r[4]=0u+0x80480000u; // 80203128
  c->r[4]=c->r[4]+0xFFFF8530u; // 8020312C
  c->r[5]=c->r[26]|c->r[26]; // 80203130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203134
  c->lr=0x8020313Cu; f_803D3760(c); // 80203138
  c->r[3]=c->r[29]|c->r[29]; // 8020313C
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)56); // 80203140
  c->r[4]=c->r[30]+c->r[0]; // 80203144
  c->r[4]=R32(c->r[4]+0x00000714u); // 80203148
  c->r[4]=R32(c->r[4]+0x00000010u); // 8020314C
  c->r[4]=c->r[4]+0x00000001u; // 80203150
  c->lr=0x80203158u; f_8022FF68(c); // 80203154
L_80203158:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203158
  cmps(c,0,(int32_t)c->r[0],82); // 8020315C
  if (!crb(c,1)) { goto L_80203220; } // 80203160
  c->r[3]=R32(c->r[27]+0x00000D38u); // 80203164
  c->lr=0x8020316Cu; f_801EF7A8(c); // 80203168
  c->lr=0x80203170u; f_8025C6EC(c); // 8020316C
  cmps(c,0,(int32_t)c->r[3],0); // 80203170
  if (crb(c,2)) { goto L_80203220; } // 80203174
  c->r[3]=0u+0x00000001u; // 80203178
  c->r[4]=0u+0x80480000u; // 8020317C
  c->r[4]=c->r[4]+0xFFFF8550u; // 80203180
  c->r[5]=R32(c->r[30]+0x00000E54u); // 80203184
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203188
  c->lr=0x80203190u; f_803D3760(c); // 8020318C
  c->r[0]=0u+0x00000000u; // 80203190
  W32(c->r[30]+0x00000E54u,c->r[0]); // 80203194
  W32(c->r[30]+0x00000014u,c->r[0]); // 80203198
  c->r[3]=R32(c->r[30]+0x00000E10u); // 8020319C
  c->r[0]=R32(c->r[3]+0x00000018u); // 802031A0
  cmps(c,0,(int32_t)c->r[0],0); // 802031A4
  if (!crb(c,2)) { goto L_802031CC; } // 802031A8
  c->r[3]=0u+0x00000001u; // 802031AC
  c->r[4]=0u+0x80480000u; // 802031B0
  c->r[4]=c->r[4]+0xFFFF8574u; // 802031B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802031B8
  c->lr=0x802031C0u; f_803D3760(c); // 802031BC
  c->r[3]=c->r[27]|c->r[27]; // 802031C0
  c->lr=0x802031C8u; f_80205448(c); // 802031C4
  goto L_802031E8; // 802031C8
L_802031CC:;
  c->r[3]=0u+0x00000001u; // 802031CC
  c->r[4]=0u+0x80480000u; // 802031D0
  c->r[4]=c->r[4]+0xFFFF8598u; // 802031D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802031D8
  c->lr=0x802031E0u; f_803D3760(c); // 802031DC
  c->r[0]=0u+0x00000006u; // 802031E0
  W32(c->r[30]+0x00000010u,c->r[0]); // 802031E4
L_802031E8:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 802031E8
  cmps(c,0,(int32_t)c->r[0],2); // 802031EC
  if (!crb(c,2)) { goto L_80203220; } // 802031F0
  c->r[3]=c->r[27]+0x000006D4u; // 802031F4
  c->r[4]=R8(c->r[30]+0x0000003Au); // 802031F8
  c->r[5]=0u+0x00010000u; // 802031FC
  c->r[5]=c->r[5]+0xFFFFEA60u; // 80203200
  c->lr=0x80203208u; f_8020834C(c); // 80203204
  c->r[3]=c->r[27]+0x000006D4u; // 80203208
  c->r[4]=0u+0x00000001u; // 8020320C
  c->r[5]=R32(c->r[30]+0x00000018u); // 80203210
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000006FEu); // 80203214
  c->r[5]=R8(c->r[5]+c->r[0]); // 80203218
  c->lr=0x80203220u; f_8020C368(c); // 8020321C
L_80203220:;
  c->r[3]=c->r[27]|c->r[27]; // 80203220
  c->lr=0x80203228u; f_80205858(c); // 80203224
  c->r[11]=c->r[1]+0x00000120u; // 80203228
  c->lr=0x80203230u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8020322C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80203230
  c->lr=c->r[0]; // 80203234
  c->r[1]=c->r[1]+0x00000120u; // 80203238
  return; // 8020323C
}

// fn_80203240
void f_80203240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203240
  c->r[0]=c->lr; // 80203244
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8020324C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203250
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203254
  c->r[29]=c->r[3]|c->r[3]; // 80203258
  c->r[31]=R32(c->r[3]+0x00000D08u); // 8020325C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80203260
  c->lr=0x80203268u; f_801EF3D4(c); // 80203264
  c->r[30]=c->r[3]|c->r[3]; // 80203268
  c->r[0]=R32(c->r[31]+0x00000000u); // 8020326C
  cmps(c,0,(int32_t)c->r[0],2); // 80203270
  if (crb(c,2)) { goto L_8020327C; } // 80203274
  goto L_80203284; // 80203278
L_8020327C:;
  c->r[3]=c->r[29]|c->r[29]; // 8020327C
  c->lr=0x80203284u; f_801FBA1C(c); // 80203280
L_80203284:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80203284
  cmps(c,0,(int32_t)c->r[0],1); // 80203288
  if (crb(c,2)) { goto L_80203308; } // 8020328C
  if (!crb(c,0)) { goto L_80203340; } // 80203290
  cmps(c,0,(int32_t)c->r[0],0); // 80203294
  if (!crb(c,0)) { goto L_802032A0; } // 80203298
  goto L_80203340; // 8020329C
L_802032A0:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 802032A0
  cmps(c,0,(int32_t)c->r[0],30); // 802032A4
  if (!crb(c,2)) { goto L_80203340; } // 802032A8
  c->r[3]=R32(c->r[31]+0x00000E10u); // 802032AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802032B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802032B4
  cmps(c,0,(int32_t)c->r[0],0); // 802032B8
  if (crb(c,2)) { goto L_802032CC; } // 802032BC
  c->r[3]=c->r[29]|c->r[29]; // 802032C0
  c->lr=0x802032C8u; f_80205794(c); // 802032C4
  goto L_80203340; // 802032C8
L_802032CC:;
  c->r[3]=0u+0x00000001u; // 802032CC
  c->r[4]=0u+0x80480000u; // 802032D0
  c->r[4]=c->r[4]+0xFFFF85B8u; // 802032D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802032D8
  c->lr=0x802032E0u; f_803D3760(c); // 802032DC
  c->r[3]=c->r[30]|c->r[30]; // 802032E0
  c->r[4]=R32(c->r[31]+0x00000E10u); // 802032E4
  c->lr=0x802032ECu; f_80230A6C(c); // 802032E8
  c->r[4]=c->r[3]|c->r[3]; // 802032EC
  c->r[3]=c->r[29]|c->r[29]; // 802032F0
  c->r[5]=0u+0x00000000u; // 802032F4
  c->lr=0x802032FCu; f_80204468(c); // 802032F8
  c->r[0]=0u+0x00000001u; // 802032FC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203300
  goto L_80203340; // 80203304
L_80203308:;
  c->r[3]=c->r[30]|c->r[30]; // 80203308
  c->lr=0x80203310u; f_80230970(c); // 8020330C
  cmps(c,0,(int32_t)c->r[3],0); // 80203310
  if (crb(c,2)) { goto L_80203330; } // 80203314
  c->r[3]=R32(c->r[31]+0x00000E10u); // 80203318
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020331C
  cmps(c,0,(int32_t)c->r[0],0); // 80203320
  if (crb(c,2)) { goto L_80203330; } // 80203324
  c->r[3]=c->r[29]|c->r[29]; // 80203328
  c->lr=0x80203330u; f_80205794(c); // 8020332C
L_80203330:;
  c->r[3]=c->r[29]|c->r[29]; // 80203330
  c->r[4]=0u+0xFFFFFFFFu; // 80203334
  c->r[5]=0u+0xFFFFFFFFu; // 80203338
  c->lr=0x80203340u; f_80204468(c); // 8020333C
L_80203340:;
  c->r[3]=c->r[29]|c->r[29]; // 80203340
  c->lr=0x80203348u; f_80205858(c); // 80203344
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80203348
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020334C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80203350
  c->r[0]=R32(c->r[1]+0x00000024u); // 80203354
  c->lr=c->r[0]; // 80203358
  c->r[1]=c->r[1]+0x00000020u; // 8020335C
  return; // 80203360
}

// fn_80203364
void f_80203364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFBD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203364
  c->r[0]=c->lr; // 80203368
  W32(c->r[1]+0x00000434u,c->r[0]); // 8020336C
  c->r[11]=c->r[1]+0x00000430u; // 80203370
  c->lr=0x80203378u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203374
  c->r[25]=c->r[3]|c->r[3]; // 80203378
  c->r[30]=R32(c->r[3]+0x00000D08u); // 8020337C
  c->r[28]=0u+0x00000000u; // 80203380
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80203384
  c->lr=0x8020338Cu; f_801EF3D4(c); // 80203388
  c->r[27]=c->r[3]|c->r[3]; // 8020338C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000070Eu); // 80203390
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80203394
  c->r[31]=c->r[30]+c->r[0]; // 80203398
  c->r[3]=R32(c->r[31]+0x00000714u); // 8020339C
  c->r[3]=R32(c->r[3]+0x00000010u); // 802033A0
  c->r[26]=c->r[3]+0x00000001u; // 802033A4
  c->r[3]=R32(c->r[30]+0x00000E10u); // 802033A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 802033AC
  c->r[29]=R32(c->r[3]+0x00000108u); // 802033B0
  c->r[0]=R32(c->r[30]+0x00000014u); // 802033B4
  cmps(c,0,(int32_t)c->r[0],1); // 802033B8
  if (crb(c,2)) { goto L_80203414; } // 802033BC
  if (!crb(c,0)) { goto L_8020341C; } // 802033C0
  cmps(c,0,(int32_t)c->r[0],0); // 802033C4
  if (!crb(c,0)) { goto L_802033D0; } // 802033C8
  goto L_8020341C; // 802033CC
L_802033D0:;
  c->r[0]=0u+0x00000001u; // 802033D0
  W32(c->r[30]+0x00000014u,c->r[0]); // 802033D4
  c->r[0]=R32(c->r[30]+0x00000000u); // 802033D8
  cmps(c,0,(int32_t)c->r[0],2); // 802033DC
  if (!crb(c,2)) { goto L_8020341C; } // 802033E0
  c->r[3]=c->r[25]+0x000006D4u; // 802033E4
  c->r[4]=R8(c->r[30]+0x0000003Au); // 802033E8
  c->r[5]=0u+0x00020000u; // 802033EC
  c->r[5]=c->r[5]+0xFFFF86A0u; // 802033F0
  c->lr=0x802033F8u; f_8020834C(c); // 802033F4
  c->r[3]=c->r[25]+0x000006D4u; // 802033F8
  c->r[4]=0u+0x00000001u; // 802033FC
  c->r[5]=R32(c->r[30]+0x00000018u); // 80203400
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000006FEu); // 80203404
  c->r[5]=R8(c->r[5]+c->r[0]); // 80203408
  c->lr=0x80203410u; f_8020C368(c); // 8020340C
  goto L_8020341C; // 80203410
L_80203414:;
  c->r[0]=0u+0x00000002u; // 80203414
  W32(c->r[30]+0x00000014u,c->r[0]); // 80203418
L_8020341C:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 8020341C
  cmps(c,0,(int32_t)c->r[0],40); // 80203420
  if (!crb(c,2)) { goto L_8020364C; } // 80203424
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80203428
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020342C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 80203430
  cmps(c,0,(int32_t)c->r[0],0); // 80203434
  if (!crb(c,2)) { goto L_802035E0; } // 80203438
  c->r[0]=R32(c->r[3]+0x00000018u); // 8020343C
  cmps(c,0,(int32_t)c->r[0],2); // 80203440
  if (crb(c,2)) { goto L_802034AC; } // 80203444
  if (!crb(c,0)) { goto L_8020345C; } // 80203448
  cmps(c,0,(int32_t)c->r[0],0); // 8020344C
  if (crb(c,2)) { goto L_802034F0; } // 80203450
  if (!crb(c,0)) { goto L_80203468; } // 80203454
  goto L_802035AC; // 80203458
L_8020345C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8020345C
  if (crb(c,2)) { goto L_80203520; } // 80203460
  goto L_802035AC; // 80203464
L_80203468:;
  c->r[3]=0u+0x00000001u; // 80203468
  c->r[4]=0u+0x80480000u; // 8020346C
  c->r[4]=c->r[4]+0xFFFF85DCu; // 80203470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203474
  c->lr=0x8020347Cu; f_803D3760(c); // 80203478
  c->r[31]=R32(c->r[30]+0x00000E10u); // 8020347C
  c->lr=0x80203484u; f_802082D4(c); // 80203480
  c->r[4]=R32(c->r[31]+0x00000008u); // 80203484
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000001Cu); // 80203488
  c->r[6]=0u+0x00000000u; // 8020348C
  c->lr=0x80203494u; f_8021A010(c); // 80203490
  c->r[3]=0u+0x00000001u; // 80203494
  c->r[4]=0u+0x80480000u; // 80203498
  c->r[4]=c->r[4]+0xFFFF8608u; // 8020349C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802034A0
  c->lr=0x802034A8u; f_803D3760(c); // 802034A4
  goto L_802035AC; // 802034A8
L_802034AC:;
  c->r[3]=0u+0x00000001u; // 802034AC
  c->r[4]=0u+0x80480000u; // 802034B0
  c->r[4]=c->r[4]+0xFFFF863Cu; // 802034B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802034B8
  c->lr=0x802034C0u; f_803D3760(c); // 802034BC
  c->r[3]=R32(c->r[25]+0x00000D38u); // 802034C0
  c->lr=0x802034C8u; f_801EF7A8(c); // 802034C4
  c->r[4]=0u+0x00000004u; // 802034C8
  c->r[5]=0u+0x00000001u; // 802034CC
  c->r[6]=0u+0xFFFFFFFFu; // 802034D0
  c->lr=0x802034D8u; f_8025C6F0(c); // 802034D4
  c->r[3]=0u+0x00000001u; // 802034D8
  c->r[4]=0u+0x80480000u; // 802034DC
  c->r[4]=c->r[4]+0xFFFF8664u; // 802034E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802034E4
  c->lr=0x802034ECu; f_803D3760(c); // 802034E8
  goto L_802035AC; // 802034EC
L_802034F0:;
  c->r[3]=0u+0x00000001u; // 802034F0
  c->r[4]=0u+0x80480000u; // 802034F4
  c->r[4]=c->r[4]+0xFFFF869Cu; // 802034F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802034FC
  c->lr=0x80203504u; f_803D3760(c); // 80203500
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80203504
  c->lr=0x8020350Cu; f_801EF7A8(c); // 80203508
  c->r[4]=0u+0x00000006u; // 8020350C
  c->r[5]=0u+0x00000001u; // 80203510
  c->r[6]=0u+0xFFFFFFFFu; // 80203514
  c->lr=0x8020351Cu; f_8025C6F0(c); // 80203518
  goto L_802035AC; // 8020351C
L_80203520:;
  c->r[3]=0u+0x00000001u; // 80203520
  c->r[4]=0u+0x80480000u; // 80203524
  c->r[4]=c->r[4]+0xFFFF869Cu; // 80203528
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020352C
  c->lr=0x80203534u; f_803D3760(c); // 80203530
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80203534
  c->lr=0x8020353Cu; f_801EF7A8(c); // 80203538
  c->r[4]=0u+0x00000006u; // 8020353C
  c->r[5]=0u+0x00000001u; // 80203540
  c->r[6]=0u+0xFFFFFFFFu; // 80203544
  c->lr=0x8020354Cu; f_8025C6F0(c); // 80203548
  c->r[3]=0u+0x00000001u; // 8020354C
  c->r[4]=0u+0x80480000u; // 80203550
  c->r[4]=c->r[4]+0xFFFF86C4u; // 80203554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203558
  c->lr=0x80203560u; f_803D3760(c); // 8020355C
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80203560
  c->r[4]=R16(c->r[29]+0x00000000u); // 80203564
  c->lr=0x8020356Cu; f_801EF9D4(c); // 80203568
  c->r[31]=c->r[3]|c->r[3]; // 8020356C
  c->r[3]=c->r[27]|c->r[27]; // 80203570
  c->r[4]=0u+0x00000003u; // 80203574
  c->lr=0x8020357Cu; f_8022D8B0(c); // 80203578
  c->r[4]=c->r[3]|c->r[3]; // 8020357C
  c->r[3]=c->r[1]+0x00000308u; // 80203580
  c->r[5]=c->r[31]|c->r[31]; // 80203584
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203588
  c->lr=0x80203590u; f_802E7CC4(c); // 8020358C
  c->r[3]=c->r[27]|c->r[27]; // 80203590
  c->r[4]=c->r[26]|c->r[26]; // 80203594
  c->r[5]=0u+0x00000001u; // 80203598
  c->r[6]=c->r[1]+0x00000308u; // 8020359C
  c->lr=0x802035A4u; f_8022F558(c); // 802035A0
  c->r[0]=0u+0x00000001u; // 802035A4
  W32(c->r[25]+0x00000068u,c->r[0]); // 802035A8
L_802035AC:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 802035AC
  c->r[0]=R32(c->r[3]+0x00000018u); // 802035B0
  cmps(c,0,(int32_t)c->r[0],3); // 802035B4
  if (!crb(c,0)) { goto L_8020364C; } // 802035B8
  cmps(c,0,(int32_t)c->r[0],1); // 802035BC
  if (!crb(c,0)) { goto L_802035C8; } // 802035C0
  goto L_8020364C; // 802035C4
L_802035C8:;
  c->r[3]=0u+0x00000001u; // 802035C8
  c->r[4]=0u+0x80480000u; // 802035CC
  c->r[4]=c->r[4]+0xFFFF86E8u; // 802035D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802035D4
  c->lr=0x802035DCu; f_803D3760(c); // 802035D8
  goto L_8020364C; // 802035DC
L_802035E0:;
  c->r[3]=0u+0x00000001u; // 802035E0
  c->r[4]=0u+0x80480000u; // 802035E4
  c->r[4]=c->r[4]+0xFFFF8708u; // 802035E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802035EC
  c->lr=0x802035F4u; f_803D3760(c); // 802035F0
  c->r[3]=R32(c->r[30]+0x00000E10u); // 802035F4
  c->r[0]=R32(c->r[3]+0x00000018u); // 802035F8
  cmps(c,0,(int32_t)c->r[0],4); // 802035FC
  if (crb(c,2)) { goto L_80203614; } // 80203600
  if (!crb(c,0)) { goto L_8020364C; } // 80203604
  cmps(c,0,(int32_t)c->r[0],1); // 80203608
  if (crb(c,2)) { goto L_80203614; } // 8020360C
  goto L_8020364C; // 80203610
L_80203614:;
  c->r[3]=0u+0x00000001u; // 80203614
  c->r[4]=0u+0x80480000u; // 80203618
  c->r[4]=c->r[4]+0xFFFF869Cu; // 8020361C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203620
  c->lr=0x80203628u; f_803D3760(c); // 80203624
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80203628
  c->lr=0x80203630u; f_801EF7A8(c); // 8020362C
  c->r[4]=0u+0x00000000u; // 80203630
  c->r[0]=R32(c->r[31]+0x00000710u); // 80203634
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 80203638
  c->r[0]=cntlz(c->r[0]); // 8020363C
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 80203640
  c->r[6]=0u+0xFFFFFFFFu; // 80203644
  c->lr=0x8020364Cu; f_8025C6F0(c); // 80203648
L_8020364C:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 8020364C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80203650
  cmps(c,0,(int32_t)c->r[0],3); // 80203654
  if (crb(c,2)) { goto L_80203660; } // 80203658
  goto L_80203844; // 8020365C
L_80203660:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80203660
  cmps(c,0,(int32_t)c->r[0],3); // 80203664
  if (!crb(c,2)) { goto L_80203708; } // 80203668
  c->r[0]=R32(c->r[30]+0x00000E54u); // 8020366C
  cmps(c,0,(int32_t)c->r[0],5); // 80203670
  if (!crb(c,2)) { goto L_80203808; } // 80203674
  c->r[3]=0u+0x00000001u; // 80203678
  c->r[4]=0u+0x80480000u; // 8020367C
  c->r[4]=c->r[4]+0xFFFF869Cu; // 80203680
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203684
  c->lr=0x8020368Cu; f_803D3760(c); // 80203688
  c->r[3]=R32(c->r[25]+0x00000D38u); // 8020368C
  c->lr=0x80203694u; f_801EF7A8(c); // 80203690
  c->r[4]=0u+0x00000006u; // 80203694
  c->r[5]=0u+0x00000001u; // 80203698
  c->r[6]=0u+0xFFFFFFFFu; // 8020369C
  c->lr=0x802036A4u; f_8025C6F0(c); // 802036A0
  c->r[3]=0u+0x00000001u; // 802036A4
  c->r[4]=0u+0x80480000u; // 802036A8
  c->r[4]=c->r[4]+0xFFFF86C4u; // 802036AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802036B0
  c->lr=0x802036B8u; f_803D3760(c); // 802036B4
  c->r[3]=R32(c->r[25]+0x00000D38u); // 802036B8
  c->r[4]=R16(c->r[29]+0x00000000u); // 802036BC
  c->lr=0x802036C4u; f_801EF9D4(c); // 802036C0
  c->r[29]=c->r[3]|c->r[3]; // 802036C4
  c->r[3]=c->r[27]|c->r[27]; // 802036C8
  c->r[4]=0u+0x00000003u; // 802036CC
  c->lr=0x802036D4u; f_8022D8B0(c); // 802036D0
  c->r[4]=c->r[3]|c->r[3]; // 802036D4
  c->r[3]=c->r[1]+0x00000208u; // 802036D8
  c->r[5]=c->r[29]|c->r[29]; // 802036DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802036E0
  c->lr=0x802036E8u; f_802E7CC4(c); // 802036E4
  c->r[3]=c->r[27]|c->r[27]; // 802036E8
  c->r[4]=c->r[26]|c->r[26]; // 802036EC
  c->r[5]=0u+0x00000001u; // 802036F0
  c->r[6]=c->r[1]+0x00000208u; // 802036F4
  c->lr=0x802036FCu; f_8022F558(c); // 802036F8
  c->r[0]=0u+0x00000001u; // 802036FC
  W32(c->r[25]+0x00000068u,c->r[0]); // 80203700
  goto L_80203808; // 80203704
L_80203708:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203708
  cmps(c,0,(int32_t)c->r[0],5); // 8020370C
  if (!crb(c,2)) { goto L_80203808; } // 80203710
  c->r[0]=R32(c->r[3]+0x00000000u); // 80203714
  c->r[0]=rotl(c->r[0],0)&0x00000200u; // 80203718
  cmps(c,0,(int32_t)c->r[0],0); // 8020371C
  if (crb(c,2)) { goto L_8020378C; } // 80203720
  c->r[3]=0u+0x00000001u; // 80203724
  c->r[4]=0u+0x80480000u; // 80203728
  c->r[4]=c->r[4]+0xFFFF871Cu; // 8020372C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203730
  c->lr=0x80203738u; f_803D3760(c); // 80203734
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80203738
  c->r[4]=R16(c->r[29]+0x00000000u); // 8020373C
  c->lr=0x80203744u; f_801EF9D4(c); // 80203740
  c->r[29]=c->r[3]|c->r[3]; // 80203744
  c->r[3]=R32(c->r[25]+0x00000D38u); // 80203748
  c->r[4]=0u+0x0000000Cu; // 8020374C
  c->r[5]=0u+0x00000005u; // 80203750
  c->lr=0x80203758u; f_801EF42C(c); // 80203754
  c->r[4]=c->r[3]|c->r[3]; // 80203758
  c->r[3]=c->r[1]+0x00000108u; // 8020375C
  c->r[5]=c->r[29]|c->r[29]; // 80203760
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203764
  c->lr=0x8020376Cu; f_802E7CC4(c); // 80203768
  c->r[3]=c->r[27]|c->r[27]; // 8020376C
  c->r[4]=c->r[26]|c->r[26]; // 80203770
  c->r[5]=0u+0x00000001u; // 80203774
  c->r[6]=c->r[1]+0x00000108u; // 80203778
  c->lr=0x80203780u; f_8022F558(c); // 8020377C
  c->r[0]=0u+0x00000001u; // 80203780
  W32(c->r[25]+0x00000068u,c->r[0]); // 80203784
  goto L_802037DC; // 80203788
L_8020378C:;
  c->r[3]=R32(c->r[25]+0x00000D38u); // 8020378C
  c->r[4]=R16(c->r[29]+0x00000000u); // 80203790
  c->lr=0x80203798u; f_801EF9D4(c); // 80203794
  c->r[29]=c->r[3]|c->r[3]; // 80203798
  c->r[3]=R32(c->r[25]+0x00000D38u); // 8020379C
  c->r[4]=0u+0x0000000Cu; // 802037A0
  c->r[5]=0u+0x00000004u; // 802037A4
  c->lr=0x802037ACu; f_801EF42C(c); // 802037A8
  c->r[4]=c->r[3]|c->r[3]; // 802037AC
  c->r[3]=c->r[1]+0x00000008u; // 802037B0
  c->r[5]=c->r[29]|c->r[29]; // 802037B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802037B8
  c->lr=0x802037C0u; f_802E7CC4(c); // 802037BC
  c->r[3]=c->r[27]|c->r[27]; // 802037C0
  c->r[4]=c->r[26]|c->r[26]; // 802037C4
  c->r[5]=0u+0x00000001u; // 802037C8
  c->r[6]=c->r[1]+0x00000008u; // 802037CC
  c->lr=0x802037D4u; f_8022F558(c); // 802037D0
  c->r[0]=0u+0x00000001u; // 802037D4
  W32(c->r[25]+0x00000068u,c->r[0]); // 802037D8
L_802037DC:;
  c->r[3]=0u+0x00000001u; // 802037DC
  c->r[4]=0u+0x80480000u; // 802037E0
  c->r[4]=c->r[4]+0xFFFF8740u; // 802037E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802037E8
  c->lr=0x802037F0u; f_803D3760(c); // 802037EC
  c->r[3]=R32(c->r[25]+0x00000D38u); // 802037F0
  c->lr=0x802037F8u; f_801EF7A8(c); // 802037F4
  c->r[4]=0u+0x00000005u; // 802037F8
  c->r[5]=0u+0x00000001u; // 802037FC
  c->r[6]=0u+0xFFFFFFFFu; // 80203800
  c->lr=0x80203808u; f_8025C6F0(c); // 80203804
L_80203808:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203808
  cmps(c,0,(int32_t)c->r[0],80); // 8020380C
  if (!crb(c,2)) { goto L_80203844; } // 80203810
  c->r[3]=0u+0x00000001u; // 80203814
  c->r[4]=0u+0x80480000u; // 80203818
  c->r[4]=c->r[4]+0xFFFF8768u; // 8020381C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203820
  c->lr=0x80203828u; f_803D3760(c); // 80203824
  c->r[3]=c->r[27]|c->r[27]; // 80203828
  c->r[4]=0u+0x00000000u; // 8020382C
  c->r[5]=0u+0x00000000u; // 80203830
  c->r[6]=0u+0xFFFFFFFFu; // 80203834
  c->lr=0x8020383Cu; f_8022F5EC(c); // 80203838
  c->r[0]=0u+0x00000000u; // 8020383C
  W32(c->r[25]+0x00000068u,c->r[0]); // 80203840
L_80203844:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80203844
  c->r[0]=R32(c->r[3]+0x00000018u); // 80203848
  cmps(c,0,(int32_t)c->r[0],2); // 8020384C
  if (crb(c,2)) { goto L_80203858; } // 80203850
  goto L_802038BC; // 80203854
L_80203858:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203858
  cmps(c,0,(int32_t)c->r[0],30); // 8020385C
  if (!crb(c,2)) { goto L_80203880; } // 80203860
  c->r[3]=c->r[27]|c->r[27]; // 80203864
  c->r[4]=c->r[26]|c->r[26]; // 80203868
  c->r[5]=0u+0x00000001u; // 8020386C
  c->r[6]=c->r[13]+0xFFFF9F70u; // 80203870
  c->lr=0x80203878u; f_8022F558(c); // 80203874
  c->r[0]=0u+0x00000001u; // 80203878
  W32(c->r[25]+0x00000068u,c->r[0]); // 8020387C
L_80203880:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203880
  cmps(c,0,(int32_t)c->r[0],110); // 80203884
  if (!crb(c,2)) { goto L_802038BC; } // 80203888
  c->r[3]=0u+0x00000001u; // 8020388C
  c->r[4]=0u+0x80480000u; // 80203890
  c->r[4]=c->r[4]+0xFFFF8790u; // 80203894
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203898
  c->lr=0x802038A0u; f_803D3760(c); // 8020389C
  c->r[3]=c->r[27]|c->r[27]; // 802038A0
  c->r[4]=c->r[26]|c->r[26]; // 802038A4
  c->r[5]=0u+0x00000000u; // 802038A8
  c->r[6]=0u+0xFFFFFFFFu; // 802038AC
  c->lr=0x802038B4u; f_8022F5EC(c); // 802038B0
  c->r[0]=0u+0x00000000u; // 802038B4
  W32(c->r[25]+0x00000068u,c->r[0]); // 802038B8
L_802038BC:;
  c->r[3]=R32(c->r[30]+0x00000E14u); // 802038BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802038C0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802038C4
  cmps(c,0,(int32_t)c->r[0],0); // 802038C8
  if (!crb(c,2)) { goto L_802038F4; } // 802038CC
  c->r[0]=R32(c->r[30]+0x00000E54u); // 802038D0
  cmps(c,0,(int32_t)c->r[0],58); // 802038D4
  if (crb(c,2)) { goto L_802038E0; } // 802038D8
  goto L_802038F4; // 802038DC
L_802038E0:;
  c->r[3]=0u+0x00000001u; // 802038E0
  c->r[4]=0u+0x80480000u; // 802038E4
  c->r[4]=c->r[4]+0xFFFF87A8u; // 802038E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802038EC
  c->lr=0x802038F4u; f_803D3760(c); // 802038F0
L_802038F4:;
  c->r[4]=R32(c->r[30]+0x00000E10u); // 802038F4
  c->r[0]=R32(c->r[4]+0x00000018u); // 802038F8
  cmps(c,0,(int32_t)c->r[0],1); // 802038FC
  if (crb(c,2)) { goto L_80203908; } // 80203900
  goto L_80203954; // 80203904
L_80203908:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 80203908
  cmps(c,0,(int32_t)c->r[0],90); // 8020390C
  if (!crb(c,2)) { goto L_80203954; } // 80203910
  c->r[0]=R32(c->r[4]+0x00000000u); // 80203914
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80203918
  c->r[0]=rotl(c->r[0],0)&0x00000020u; // 8020391C
  cmps(c,0,(int32_t)c->r[0],0); // 80203920
  if (!crb(c,2)) { goto L_80203954; } // 80203924
  c->r[3]=c->r[27]|c->r[27]; // 80203928
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Cu); // 8020392C
  c->r[5]=0u+0x00000000u; // 80203930
  c->lr=0x80203938u; f_8022EDC8(c); // 80203934
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80203938
  c->r[5]=R32(c->r[3]+0x00000008u); // 8020393C
  c->r[3]=c->r[27]|c->r[27]; // 80203940
  c->r[4]=R32(c->r[5]+0x00000010u); // 80203944
  c->r[4]=c->r[4]+0x00000001u; // 80203948
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000038u); // 8020394C
  c->lr=0x80203954u; f_8022ECF4(c); // 80203950
L_80203954:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80203954
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80203958
  cmps(c,0,(int32_t)c->r[0],0); // 8020395C
  if (crb(c,2)) { goto L_8020398C; } // 80203960
  c->r[5]=R32(c->r[30]+0x00000E54u); // 80203964
  cmps(c,0,(int32_t)c->r[5],168); // 80203968
  if (crb(c,0)) { goto L_8020399C; } // 8020396C
  c->r[3]=0u+0x00000001u; // 80203970
  c->r[4]=0u+0x80480000u; // 80203974
  c->r[4]=c->r[4]+0xFFFF87C8u; // 80203978
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020397C
  c->lr=0x80203984u; f_803D3760(c); // 80203980
  c->r[28]=0u+0x00000001u; // 80203984
  goto L_8020399C; // 80203988
L_8020398C:;
  c->r[0]=R32(c->r[30]+0x00000E54u); // 8020398C
  cmps(c,0,(int32_t)c->r[0],65); // 80203990
  if (!crb(c,1)) { goto L_8020399C; } // 80203994
  c->r[28]=0u+0x00000001u; // 80203998
L_8020399C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8020399C
  if (crb(c,2)) { goto L_80203A54; } // 802039A0
  c->r[3]=c->r[27]|c->r[27]; // 802039A4
  c->lr=0x802039ACu; f_8020843C(c); // 802039A8
  cmps(c,0,(int32_t)c->r[3],0); // 802039AC
  if (crb(c,2)) { goto L_80203A54; } // 802039B0
  c->r[3]=c->r[27]|c->r[27]; // 802039B4
  c->lr=0x802039BCu; f_802309FC(c); // 802039B8
  cmps(c,0,(int32_t)c->r[3],0); // 802039BC
  if (crb(c,2)) { goto L_80203A54; } // 802039C0
  c->r[3]=R32(c->r[25]+0x00000D38u); // 802039C4
  c->lr=0x802039CCu; f_801EF7A8(c); // 802039C8
  c->lr=0x802039D0u; f_8025C784(c); // 802039CC
  cmps(c,0,(int32_t)c->r[3],0); // 802039D0
  if (crb(c,2)) { goto L_80203A54; } // 802039D4
  c->r[3]=c->r[27]|c->r[27]; // 802039D8
  c->lr=0x802039E0u; f_8020845C(c); // 802039DC
  cmps(c,0,(int32_t)c->r[3],0); // 802039E0
  if (crb(c,2)) { goto L_80203A54; } // 802039E4
  c->r[3]=0u+0x00000001u; // 802039E8
  c->r[4]=0u+0x80480000u; // 802039EC
  c->r[4]=c->r[4]+0xFFFF87E8u; // 802039F0
  c->r[5]=R32(c->r[30]+0x00000E54u); // 802039F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802039F8
  c->lr=0x80203A00u; f_803D3760(c); // 802039FC
  c->lr=0x80203A04u; f_802082D4(c); // 80203A00
  c->lr=0x80203A08u; f_8021A6A0(c); // 80203A04
  c->r[3]=c->r[25]|c->r[25]; // 80203A08
  c->lr=0x80203A10u; f_80205448(c); // 80203A0C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80203A10
  cmps(c,0,(int32_t)c->r[0],2); // 80203A14
  if (crb(c,2)) { goto L_80203A20; } // 80203A18
  goto L_80203A54; // 80203A1C
L_80203A20:;
  c->r[3]=c->r[25]|c->r[25]; // 80203A20
  c->lr=0x80203A28u; f_801FBA1C(c); // 80203A24
  c->r[3]=c->r[25]+0x000006D4u; // 80203A28
  c->r[4]=R8(c->r[30]+0x0000003Au); // 80203A2C
  c->r[5]=0u+0x00020000u; // 80203A30
  c->r[5]=c->r[5]+0xFFFF86A0u; // 80203A34
  c->lr=0x80203A3Cu; f_8020834C(c); // 80203A38
  c->r[3]=c->r[25]+0x000006D4u; // 80203A3C
  c->r[4]=0u+0x00000001u; // 80203A40
  c->r[5]=R32(c->r[30]+0x00000018u); // 80203A44
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000006FEu); // 80203A48
  c->r[5]=R8(c->r[5]+c->r[0]); // 80203A4C
  c->lr=0x80203A54u; f_8020C368(c); // 80203A50
L_80203A54:;
  c->r[3]=c->r[25]|c->r[25]; // 80203A54
  c->lr=0x80203A5Cu; f_80205858(c); // 80203A58
  c->r[3]=c->r[25]|c->r[25]; // 80203A5C
  c->r[4]=0u+0xFFFFFFFFu; // 80203A60
  c->r[5]=0u+0xFFFFFFFFu; // 80203A64
  c->lr=0x80203A6Cu; f_80204468(c); // 80203A68
  c->r[11]=c->r[1]+0x00000430u; // 80203A6C
  c->lr=0x80203A74u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203A70
  c->r[0]=R32(c->r[1]+0x00000434u); // 80203A74
  c->lr=c->r[0]; // 80203A78
  c->r[1]=c->r[1]+0x00000430u; // 80203A7C
  return; // 80203A80
}

// fn_80203A84
void f_80203A84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203A84
  c->r[0]=c->lr; // 80203A88
  W32(c->r[1]+0x00000034u,c->r[0]); // 80203A8C
  c->r[11]=c->r[1]+0x00000030u; // 80203A90
  c->lr=0x80203A98u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80203A94
  c->r[28]=c->r[3]|c->r[3]; // 80203A98
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80203A9C
  c->r[30]=0u+0x00000000u; // 80203AA0
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80203AA4
  c->lr=0x80203AACu; f_801EF3D4(c); // 80203AA8
  c->r[29]=c->r[3]|c->r[3]; // 80203AAC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x0000070Eu); // 80203AB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80203AB4
  c->r[3]=c->r[31]+c->r[0]; // 80203AB8
  c->r[3]=R32(c->r[3]+0x00000714u); // 80203ABC
  c->r[3]=R32(c->r[3]+0x00000010u); // 80203AC0
  c->r[26]=c->r[3]+0x00000001u; // 80203AC4
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203AC8
  cmps(c,0,(int32_t)c->r[0],10); // 80203ACC
  if (crb(c,2)) { goto L_80203B3C; } // 80203AD0
  if (!crb(c,0)) { goto L_80203AE4; } // 80203AD4
  cmps(c,0,(int32_t)c->r[0],1); // 80203AD8
  if (crb(c,2)) { goto L_80203AF0; } // 80203ADC
  goto L_80203CD4; // 80203AE0
L_80203AE4:;
  cmps(c,0,(int32_t)c->r[0],100); // 80203AE4
  if (crb(c,2)) { goto L_80203C88; } // 80203AE8
  goto L_80203CD4; // 80203AEC
L_80203AF0:;
  c->r[3]=0u+0x00000001u; // 80203AF0
  c->r[4]=0u+0x80480000u; // 80203AF4
  c->r[4]=c->r[4]+0xFFFF8804u; // 80203AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203AFC
  c->lr=0x80203B04u; f_803D3760(c); // 80203B00
  c->r[3]=R32(c->r[31]+0x00000E10u); // 80203B04
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Eu); // 80203B08
  cmps(c,0,(int32_t)c->r[4],0); // 80203B0C
  if (!crb(c,1)) { goto L_80203CD4; } // 80203B10
  c->r[3]=c->r[29]|c->r[29]; // 80203B14
  c->r[5]=0u+0x00000001u; // 80203B18
  c->lr=0x80203B20u; f_8022EDC8(c); // 80203B1C
  c->r[3]=c->r[29]|c->r[29]; // 80203B20
  c->r[4]=c->r[26]|c->r[26]; // 80203B24
  c->r[5]=R32(c->r[31]+0x00000E10u); // 80203B28
  c->r[5]=R32(c->r[5]+0x00000004u); // 80203B2C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000038u); // 80203B30
  c->lr=0x80203B38u; f_8022ECF4(c); // 80203B34
  goto L_80203CD4; // 80203B38
L_80203B3C:;
  c->r[3]=R32(c->r[31]+0x00000E10u); // 80203B3C
  c->r[0]=R32(c->r[3]+0x00000034u); // 80203B40
  cmps(c,0,(int32_t)c->r[0],10); // 80203B44
  if (crb(c,2)) { goto L_80203B5C; } // 80203B48
  if (!crb(c,0)) { goto L_80203BBC; } // 80203B4C
  cmps(c,0,(int32_t)c->r[0],7); // 80203B50
  if (crb(c,2)) { goto L_80203B5C; } // 80203B54
  goto L_80203BBC; // 80203B58
L_80203B5C:;
  c->r[25]=0u+0x00000000u; // 80203B5C
  c->r[27]=0u+0x00000000u; // 80203B60
L_80203B64:;
  c->r[24]=0u+0x00000000u; // 80203B64
  goto L_80203B84; // 80203B68
L_80203B6C:;
  c->lr=0x80203B70u; f_802082D4(c); // 80203B6C
  c->r[4]=R32(c->r[26]+0x00000004u); // 80203B70
  c->r[4]=c->r[4]+0x0000010Cu; // 80203B74
  c->r[5]=c->r[25]+0x00000001u; // 80203B78
  c->lr=0x80203B80u; f_8021A934(c); // 80203B7C
  c->r[24]=c->r[24]+0x00000001u; // 80203B80
L_80203B84:;
  c->r[26]=R32(c->r[31]+0x00000E10u); // 80203B84
  c->r[3]=c->r[27]+c->r[26]; // 80203B88
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000020u); // 80203B8C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80203B90
  if (crb(c,0)) { IRQCHK(c); goto L_80203B6C; } // 80203B94
  c->r[27]=c->r[27]+0x00000002u; // 80203B98
  c->r[25]=c->r[25]+0x00000001u; // 80203B9C
  cmps(c,0,(int32_t)c->r[25],4); // 80203BA0
  if (crb(c,0)) { IRQCHK(c); goto L_80203B64; } // 80203BA4
  c->r[3]=0u+0x00000001u; // 80203BA8
  c->r[4]=0u+0x80480000u; // 80203BAC
  c->r[4]=c->r[4]+0xFFFF882Cu; // 80203BB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203BB4
  c->lr=0x80203BBCu; f_803D3760(c); // 80203BB8
L_80203BBC:;
  c->r[3]=R32(c->r[31]+0x00000E10u); // 80203BBC
  c->r[0]=R32(c->r[3]+0x00000034u); // 80203BC0
  cmps(c,0,(int32_t)c->r[0],10); // 80203BC4
  if (crb(c,2)) { goto L_80203BDC; } // 80203BC8
  if (!crb(c,0)) { goto L_80203C10; } // 80203BCC
  cmps(c,0,(int32_t)c->r[0],6); // 80203BD0
  if (crb(c,2)) { goto L_80203BDC; } // 80203BD4
  goto L_80203C10; // 80203BD8
L_80203BDC:;
  c->r[24]=0u+0x00000000u; // 80203BDC
  c->r[27]=0u+0x00000000u; // 80203BE0
L_80203BE4:;
  c->r[26]=R32(c->r[31]+0x00000E10u); // 80203BE4
  c->lr=0x80203BECu; f_802082D4(c); // 80203BE8
  c->r[4]=R32(c->r[26]+0x00000008u); // 80203BEC
  c->r[5]=c->r[24]+0x00000001u; // 80203BF0
  c->r[6]=c->r[26]+c->r[27]; // 80203BF4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000020u); // 80203BF8
  c->lr=0x80203C00u; f_8021A1EC(c); // 80203BFC
  c->r[27]=c->r[27]+0x00000002u; // 80203C00
  c->r[24]=c->r[24]+0x00000001u; // 80203C04
  cmps(c,0,(int32_t)c->r[24],4); // 80203C08
  if (crb(c,0)) { IRQCHK(c); goto L_80203BE4; } // 80203C0C
L_80203C10:;
  c->r[26]=R32(c->r[31]+0x00000E10u); // 80203C10
  c->r[0]=R32(c->r[26]+0x00000034u); // 80203C14
  cmps(c,0,(int32_t)c->r[0],9); // 80203C18
  if (crb(c,2)) { goto L_80203C5C; } // 80203C1C
  if (!crb(c,0)) { goto L_80203CD4; } // 80203C20
  cmps(c,0,(int32_t)c->r[0],8); // 80203C24
  if (!crb(c,0)) { goto L_80203C30; } // 80203C28
  goto L_80203CD4; // 80203C2C
L_80203C30:;
  c->lr=0x80203C34u; f_802082D4(c); // 80203C30
  c->r[4]=R32(c->r[26]+0x00000004u); // 80203C34
  c->r[4]=c->r[4]+0x0000010Cu; // 80203C38
  c->r[5]=R32(c->r[26]+0x0000002Cu); // 80203C3C
  c->lr=0x80203C44u; f_8021AAFC(c); // 80203C40
  c->r[3]=0u+0x00000001u; // 80203C44
  c->r[4]=0u+0x80480000u; // 80203C48
  c->r[4]=c->r[4]+0xFFFF8854u; // 80203C4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C50
  c->lr=0x80203C58u; f_803D3760(c); // 80203C54
  goto L_80203CD4; // 80203C58
L_80203C5C:;
  c->lr=0x80203C60u; f_802082D4(c); // 80203C5C
  c->r[4]=R32(c->r[26]+0x00000008u); // 80203C60
  c->r[4]=c->r[4]+0x0000010Cu; // 80203C64
  c->r[5]=R32(c->r[26]+0x0000002Cu); // 80203C68
  c->lr=0x80203C70u; f_8021AAFC(c); // 80203C6C
  c->r[3]=0u+0x00000001u; // 80203C70
  c->r[4]=0u+0x80480000u; // 80203C74
  c->r[4]=c->r[4]+0xFFFF8888u; // 80203C78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C7C
  c->lr=0x80203C84u; f_803D3760(c); // 80203C80
  goto L_80203CD4; // 80203C84
L_80203C88:;
  c->r[3]=0u+0x00000001u; // 80203C88
  c->r[4]=0u+0x80480000u; // 80203C8C
  c->r[4]=c->r[4]+0xFFFF88BCu; // 80203C90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203C94
  c->lr=0x80203C9Cu; f_803D3760(c); // 80203C98
  c->r[3]=c->r[29]|c->r[29]; // 80203C9C
  c->r[4]=0u+0x00000000u; // 80203CA0
  c->r[5]=0u+0x00000000u; // 80203CA4
  c->r[6]=0u+0x00000000u; // 80203CA8
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80203CAC
  c->lr=0x80203CB4u; f_802303E8(c); // 80203CB0
  c->r[3]=c->r[29]|c->r[29]; // 80203CB4
  c->r[4]=0u+0x00000000u; // 80203CB8
  c->r[5]=0u+0x00000000u; // 80203CBC
  c->r[6]=0u+0x00000000u; // 80203CC0
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80203CC4
  c->lr=0x80203CCCu; f_802303E8(c); // 80203CC8
  c->r[0]=0u+0x00000000u; // 80203CCC
  W32(c->r[28]+0x00000068u,c->r[0]); // 80203CD0
L_80203CD4:;
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80203CD4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 80203CD8
  cmps(c,0,(int32_t)c->r[0],0); // 80203CDC
  if (crb(c,2)) { goto L_80203D24; } // 80203CE0
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203CE4
  cmps(c,0,(int32_t)c->r[0],168); // 80203CE8
  if (crb(c,0)) { goto L_80203D60; } // 80203CEC
  c->r[3]=c->r[29]|c->r[29]; // 80203CF0
  c->r[4]=0u+0x00000000u; // 80203CF4
  c->r[5]=0u+0x00000000u; // 80203CF8
  c->r[6]=0u+0x00000000u; // 80203CFC
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80203D00
  c->lr=0x80203D08u; f_802303E8(c); // 80203D04
  c->r[3]=c->r[29]|c->r[29]; // 80203D08
  c->r[4]=0u+0x00000000u; // 80203D0C
  c->r[5]=0u+0x00000000u; // 80203D10
  c->r[6]=0u+0xFFFFFFFFu; // 80203D14
  c->lr=0x80203D1Cu; f_8022F5EC(c); // 80203D18
  c->r[30]=0u+0x00000001u; // 80203D1C
  goto L_80203D60; // 80203D20
L_80203D24:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203D24
  cmps(c,0,(int32_t)c->r[0],125); // 80203D28
  if (!crb(c,1)) { goto L_80203D60; } // 80203D2C
  c->r[3]=c->r[29]|c->r[29]; // 80203D30
  c->r[4]=0u+0x00000000u; // 80203D34
  c->r[5]=0u+0x00000000u; // 80203D38
  c->r[6]=0u+0x00000000u; // 80203D3C
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80203D40
  c->lr=0x80203D48u; f_802303E8(c); // 80203D44
  c->r[3]=c->r[29]|c->r[29]; // 80203D48
  c->r[4]=0u+0x00000000u; // 80203D4C
  c->r[5]=0u+0x00000000u; // 80203D50
  c->r[6]=0u+0xFFFFFFFFu; // 80203D54
  c->lr=0x80203D5Cu; f_8022F5EC(c); // 80203D58
  c->r[30]=0u+0x00000001u; // 80203D5C
L_80203D60:;
  cmps(c,0,(int32_t)c->r[30],0); // 80203D60
  if (crb(c,2)) { goto L_80203DE0; } // 80203D64
  c->r[3]=c->r[29]|c->r[29]; // 80203D68
  c->lr=0x80203D70u; f_8020843C(c); // 80203D6C
  cmps(c,0,(int32_t)c->r[3],0); // 80203D70
  if (crb(c,2)) { goto L_80203DE0; } // 80203D74
  c->r[3]=c->r[29]|c->r[29]; // 80203D78
  c->lr=0x80203D80u; f_802309FC(c); // 80203D7C
  cmps(c,0,(int32_t)c->r[3],0); // 80203D80
  if (crb(c,2)) { goto L_80203DE0; } // 80203D84
  c->r[3]=c->r[29]|c->r[29]; // 80203D88
  c->lr=0x80203D90u; f_8020845C(c); // 80203D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80203D90
  if (crb(c,2)) { goto L_80203DE0; } // 80203D94
  c->r[3]=c->r[28]|c->r[28]; // 80203D98
  c->lr=0x80203DA0u; f_80205448(c); // 80203D9C
  c->lr=0x80203DA4u; f_802082D4(c); // 80203DA0
  c->lr=0x80203DA8u; f_8021A6A0(c); // 80203DA4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80203DA8
  cmps(c,0,(int32_t)c->r[0],2); // 80203DAC
  if (!crb(c,2)) { goto L_80203DE0; } // 80203DB0
  c->r[3]=c->r[28]+0x000006D4u; // 80203DB4
  c->r[4]=R8(c->r[31]+0x0000003Au); // 80203DB8
  c->r[5]=0u+0x00010000u; // 80203DBC
  c->r[5]=c->r[5]+0xFFFFEA60u; // 80203DC0
  c->lr=0x80203DC8u; f_8020834C(c); // 80203DC4
  c->r[3]=c->r[28]+0x000006D4u; // 80203DC8
  c->r[4]=0u+0x00000001u; // 80203DCC
  c->r[5]=R32(c->r[31]+0x00000018u); // 80203DD0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000006FEu); // 80203DD4
  c->r[5]=R8(c->r[5]+c->r[0]); // 80203DD8
  c->lr=0x80203DE0u; f_8020C368(c); // 80203DDC
L_80203DE0:;
  c->r[3]=c->r[28]|c->r[28]; // 80203DE0
  c->lr=0x80203DE8u; f_80205858(c); // 80203DE4
  c->r[11]=c->r[1]+0x00000030u; // 80203DE8
  c->lr=0x80203DF0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80203DEC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80203DF0
  c->lr=c->r[0]; // 80203DF4
  c->r[1]=c->r[1]+0x00000030u; // 80203DF8
  return; // 80203DFC
}

// fn_80203E00
void f_80203E00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80203E00
  c->r[0]=c->lr; // 80203E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80203E08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80203E0C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80203E10
  W32(c->r[1]+0x00000014u,c->r[29]); // 80203E14
  c->r[29]=c->r[3]|c->r[3]; // 80203E18
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80203E1C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80203E20
  c->lr=0x80203E28u; f_801EF3D4(c); // 80203E24
  c->r[30]=c->r[3]|c->r[3]; // 80203E28
  c->r[0]=R32(c->r[31]+0x00000010u); // 80203E2C
  cmps(c,0,(int32_t)c->r[0],10); // 80203E30
  if (crb(c,2)) { goto L_80203E3C; } // 80203E34
  goto L_80203E6C; // 80203E38
L_80203E3C:;
  c->r[4]=0u+0x00000000u; // 80203E3C
  c->lr=0x80203E44u; f_80208410(c); // 80203E40
  c->r[3]=c->r[30]|c->r[30]; // 80203E44
  c->r[4]=0u+0x00000003u; // 80203E48
  c->lr=0x80203E50u; f_80230728(c); // 80203E4C
  c->r[3]=c->r[30]|c->r[30]; // 80203E50
  c->r[4]=0u+0x00000003u; // 80203E54
  c->lr=0x80203E5Cu; f_802307F8(c); // 80203E58
  c->r[0]=0u+0x00000000u; // 80203E5C
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203E60
  c->r[0]=0u+0x0000000Bu; // 80203E64
  W32(c->r[31]+0x00000010u,c->r[0]); // 80203E68
L_80203E6C:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80203E6C
  cmps(c,0,(int32_t)c->r[0],3); // 80203E70
  if (crb(c,2)) { goto L_80203F7C; } // 80203E74
  if (!crb(c,0)) { goto L_80203E94; } // 80203E78
  cmps(c,0,(int32_t)c->r[0],1); // 80203E7C
  if (crb(c,2)) { goto L_80203ECC; } // 80203E80
  if (!crb(c,0)) { goto L_80203F1C; } // 80203E84
  cmps(c,0,(int32_t)c->r[0],0); // 80203E88
  if (!crb(c,0)) { goto L_80203EA4; } // 80203E8C
  goto L_80204048; // 80203E90
L_80203E94:;
  cmps(c,0,(int32_t)c->r[0],5); // 80203E94
  if (crb(c,2)) { goto L_80203FDC; } // 80203E98
  if (!crb(c,0)) { goto L_80204048; } // 80203E9C
  goto L_80203FAC; // 80203EA0
L_80203EA4:;
  c->r[3]=c->r[30]|c->r[30]; // 80203EA4
  c->r[4]=0u+0x00000000u; // 80203EA8
  c->r[5]=0u+0x00000000u; // 80203EAC
  c->r[6]=0u+0x00000000u; // 80203EB0
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80203EB4
  c->lr=0x80203EBCu; f_802303E8(c); // 80203EB8
  c->r[3]=R32(c->r[31]+0x00000014u); // 80203EBC
  c->r[0]=c->r[3]+0x00000001u; // 80203EC0
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203EC4
  goto L_80204048; // 80203EC8
L_80203ECC:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203ECC
  cmps(c,0,(int32_t)c->r[0],10); // 80203ED0
  if (crb(c,0)) { goto L_80204048; } // 80203ED4
  c->r[3]=0u+0x00000001u; // 80203ED8
  c->r[4]=0u+0x80480000u; // 80203EDC
  c->r[4]=c->r[4]+0xFFFF88E4u; // 80203EE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203EE4
  c->lr=0x80203EECu; f_803D3760(c); // 80203EE8
  c->r[3]=0u+0x00000001u; // 80203EEC
  c->r[4]=0u+0x80480000u; // 80203EF0
  c->r[4]=c->r[4]+0xFFFF8900u; // 80203EF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203EF8
  c->lr=0x80203F00u; f_803D3760(c); // 80203EFC
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80203F00
  c->lr=0x80203F08u; f_801EF7A8(c); // 80203F04
  c->lr=0x80203F0Cu; f_8025C7CC(c); // 80203F08
  c->r[3]=R32(c->r[31]+0x00000014u); // 80203F0C
  c->r[0]=c->r[3]+0x00000001u; // 80203F10
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203F14
  goto L_80204048; // 80203F18
L_80203F1C:;
  c->lr=0x80203F20u; f_802082D4(c); // 80203F1C
  c->lr=0x80203F24u; f_8021AF74(c); // 80203F20
  c->r[3]=0u+0x00000001u; // 80203F24
  c->r[4]=0u+0x80480000u; // 80203F28
  c->r[4]=c->r[4]+0xFFFF8920u; // 80203F2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203F30
  c->lr=0x80203F38u; f_803D3760(c); // 80203F34
  c->lr=0x80203F3Cu; f_802082D4(c); // 80203F38
  c->lr=0x80203F40u; f_8021A7C4(c); // 80203F3C
  c->r[3]=c->r[30]|c->r[30]; // 80203F40
  c->r[4]=R32(c->r[31]+0x00000700u); // 80203F44
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000042u); // 80203F48
  c->lr=0x80203F50u; f_8022EDAC(c); // 80203F4C
  c->r[3]=c->r[30]|c->r[30]; // 80203F50
  c->r[4]=0u+0x00000000u; // 80203F54
  c->r[5]=0u+0x00000001u; // 80203F58
  c->r[6]=0u+0x80480000u; // 80203F5C
  c->r[6]=c->r[6]+0xFFFF894Cu; // 80203F60
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80203F64
  c->lr=0x80203F6Cu; f_802303E8(c); // 80203F68
  c->r[3]=R32(c->r[31]+0x00000014u); // 80203F6C
  c->r[0]=c->r[3]+0x00000001u; // 80203F70
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203F74
  goto L_80204048; // 80203F78
L_80203F7C:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203F7C
  cmps(c,0,(int32_t)c->r[0],70); // 80203F80
  if (crb(c,0)) { goto L_80204048; } // 80203F84
  c->r[3]=0u+0x00000001u; // 80203F88
  c->r[4]=0u+0x80480000u; // 80203F8C
  c->r[4]=c->r[4]+0xFFFF8958u; // 80203F90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203F94
  c->lr=0x80203F9Cu; f_803D3760(c); // 80203F98
  c->r[3]=R32(c->r[31]+0x00000014u); // 80203F9C
  c->r[0]=c->r[3]+0x00000001u; // 80203FA0
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203FA4
  goto L_80204048; // 80203FA8
L_80203FAC:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203FAC
  cmps(c,0,(int32_t)c->r[0],66); // 80203FB0
  if (crb(c,0)) { goto L_80204048; } // 80203FB4
  c->r[3]=0u+0x00000001u; // 80203FB8
  c->r[4]=0u+0x80480000u; // 80203FBC
  c->r[4]=c->r[4]+0xFFFF8978u; // 80203FC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203FC4
  c->lr=0x80203FCCu; f_803D3760(c); // 80203FC8
  c->r[3]=R32(c->r[31]+0x00000014u); // 80203FCC
  c->r[0]=c->r[3]+0x00000001u; // 80203FD0
  W32(c->r[31]+0x00000014u,c->r[0]); // 80203FD4
  goto L_80204048; // 80203FD8
L_80203FDC:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80203FDC
  cmps(c,0,(int32_t)c->r[0],80); // 80203FE0
  if (crb(c,0)) { goto L_80204048; } // 80203FE4
  c->r[3]=0u+0x00000001u; // 80203FE8
  c->r[4]=0u+0x80480000u; // 80203FEC
  c->r[4]=c->r[4]+0xFFFF8990u; // 80203FF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80203FF4
  c->lr=0x80203FFCu; f_803D3760(c); // 80203FF8
  c->r[3]=c->r[30]|c->r[30]; // 80203FFC
  c->r[4]=0u+0x00000000u; // 80204000
  c->lr=0x80204008u; f_80208410(c); // 80204004
  c->r[3]=c->r[30]|c->r[30]; // 80204008
  c->r[4]=0u+0x00000003u; // 8020400C
  c->r[5]=0u+0x00000000u; // 80204010
  c->lr=0x80204018u; f_8022F234(c); // 80204014
  c->r[3]=c->r[30]|c->r[30]; // 80204018
  c->r[4]=0u+0x00000000u; // 8020401C
  c->lr=0x80204024u; f_802304DC(c); // 80204020
  c->r[3]=c->r[30]|c->r[30]; // 80204024
  c->r[4]=0u+0x00000003u; // 80204028
  c->lr=0x80204030u; f_80230728(c); // 8020402C
  c->r[3]=c->r[30]|c->r[30]; // 80204030
  c->r[4]=0u+0x00000003u; // 80204034
  c->lr=0x8020403Cu; f_802307F8(c); // 80204038
  c->r[3]=R32(c->r[31]+0x00000014u); // 8020403C
  c->r[0]=c->r[3]+0x00000001u; // 80204040
  W32(c->r[31]+0x00000014u,c->r[0]); // 80204044
L_80204048:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80204048
  cmps(c,0,(int32_t)c->r[0],90); // 8020404C
  if (!crb(c,1)) { goto L_802040F4; } // 80204050
  c->r[3]=c->r[30]|c->r[30]; // 80204054
  c->lr=0x8020405Cu; f_8020843C(c); // 80204058
  cmps(c,0,(int32_t)c->r[3],0); // 8020405C
  if (crb(c,2)) { goto L_802040F4; } // 80204060
  c->r[3]=c->r[30]|c->r[30]; // 80204064
  c->lr=0x8020406Cu; f_802304C0(c); // 80204068
  cmps(c,0,(int32_t)c->r[3],0); // 8020406C
  if (crb(c,2)) { goto L_802040F4; } // 80204070
  c->r[3]=R32(c->r[29]+0x00000D38u); // 80204074
  c->lr=0x8020407Cu; f_801EF7A8(c); // 80204078
  c->lr=0x80204080u; f_8025C818(c); // 8020407C
  cmps(c,0,(int32_t)c->r[3],0); // 80204080
  if (crb(c,2)) { goto L_802040F4; } // 80204084
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000E4Cu); // 80204088
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000E4Eu); // 8020408C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80204090
  if (crb(c,0)) { goto L_802040B8; } // 80204094
  c->r[0]=R32(c->r[31]+0x00000000u); // 80204098
  cmps(c,0,(int32_t)c->r[0],2); // 8020409C
  if (!crb(c,2)) { goto L_802040B8; } // 802040A0
  c->r[0]=0u+0x00000000u; // 802040A4
  W32(c->r[31]+0x00000014u,c->r[0]); // 802040A8
  c->r[3]=c->r[29]|c->r[29]; // 802040AC
  c->lr=0x802040B4u; f_80204DF8(c); // 802040B0
  goto L_802040C0; // 802040B4
L_802040B8:;
  c->r[3]=c->r[29]|c->r[29]; // 802040B8
  c->lr=0x802040C0u; f_80204B70(c); // 802040BC
L_802040C0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802040C0
  cmps(c,0,(int32_t)c->r[0],2); // 802040C4
  if (crb(c,2)) { goto L_802040D0; } // 802040C8
  goto L_802040F4; // 802040CC
L_802040D0:;
  c->r[3]=c->r[29]+0x000006D4u; // 802040D0
  c->r[4]=R8(c->r[31]+0x0000003Au); // 802040D4
  c->r[5]=0u+0x00004650u; // 802040D8
  c->lr=0x802040E0u; f_8020834C(c); // 802040DC
  c->r[3]=c->r[29]+0x000006D4u; // 802040E0
  c->r[4]=0u+0x00000001u; // 802040E4
  c->lr=0x802040ECu; f_80208394(c); // 802040E8
  c->r[3]=c->r[29]|c->r[29]; // 802040EC
  c->lr=0x802040F4u; f_801FBA1C(c); // 802040F0
L_802040F4:;
  c->r[3]=c->r[29]|c->r[29]; // 802040F4
  c->lr=0x802040FCu; f_80205858(c); // 802040F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802040FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80204100
  c->r[29]=R32(c->r[1]+0x00000014u); // 80204104
  c->r[0]=R32(c->r[1]+0x00000024u); // 80204108
  c->lr=c->r[0]; // 8020410C
  c->r[1]=c->r[1]+0x00000020u; // 80204110
  return; // 80204114
}

// fn_80204118
void f_80204118(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204118
  c->r[0]=c->lr; // 8020411C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80204120
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80204124
  W32(c->r[1]+0x00000018u,c->r[30]); // 80204128
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020412C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80204130
  c->r[28]=c->r[3]|c->r[3]; // 80204134
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80204138
  c->r[30]=0u+0x00000000u; // 8020413C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80204140
  c->lr=0x80204148u; f_801EF3D4(c); // 80204144
  c->r[29]=c->r[3]|c->r[3]; // 80204148
  c->r[0]=R32(c->r[31]+0x00000014u); // 8020414C
  cmps(c,0,(int32_t)c->r[0],0); // 80204150
  if (crb(c,2)) { goto L_8020415C; } // 80204154
  goto L_8020418C; // 80204158
L_8020415C:;
  c->r[4]=0u+0x00000000u; // 8020415C
  c->r[5]=0u+0x00000001u; // 80204160
  c->r[6]=0u+0x80480000u; // 80204164
  c->r[6]=c->r[6]+0xFFFF894Cu; // 80204168
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8020416C
  c->lr=0x80204174u; f_802303E8(c); // 80204170
  c->r[3]=R32(c->r[31]+0x00000014u); // 80204174
  c->r[0]=c->r[3]+0x00000001u; // 80204178
  W32(c->r[31]+0x00000014u,c->r[0]); // 8020417C
  c->r[3]=c->r[28]+0x000006D4u; // 80204180
  c->r[4]=0u+0x00000000u; // 80204184
  c->lr=0x8020418Cu; f_80208394(c); // 80204188
L_8020418C:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 8020418C
  cmps(c,0,(int32_t)c->r[0],300); // 80204190
  if (crb(c,2)) { goto L_80204364; } // 80204194
  if (!crb(c,0)) { goto L_802041B4; } // 80204198
  cmps(c,0,(int32_t)c->r[0],120); // 8020419C
  if (crb(c,2)) { goto L_80204250; } // 802041A0
  if (!crb(c,0)) { goto L_80204380; } // 802041A4
  cmps(c,0,(int32_t)c->r[0],60); // 802041A8
  if (crb(c,2)) { goto L_802041C0; } // 802041AC
  goto L_80204380; // 802041B0
L_802041B4:;
  cmps(c,0,(int32_t)c->r[0],4500); // 802041B4
  if (crb(c,2)) { goto L_80204334; } // 802041B8
  goto L_80204380; // 802041BC
L_802041C0:;
  c->r[3]=0u+0x00000001u; // 802041C0
  c->r[4]=0u+0x80480000u; // 802041C4
  c->r[4]=c->r[4]+0xFFFF89B8u; // 802041C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802041CC
  c->lr=0x802041D4u; f_803D3760(c); // 802041D0
  c->r[3]=R32(c->r[31]+0x00000708u); // 802041D4
  c->r[0]=R32(c->r[31]+0x00000700u); // 802041D8
  cmpu(c,0,c->r[3],c->r[0]); // 802041DC
  if (!crb(c,2)) { goto L_80204200; } // 802041E0
  c->lr=0x802041E8u; f_8006592C(c); // 802041E4
  c->r[4]=0u+0x00000049u; // 802041E8
  c->r[5]=0u+0x00000000u; // 802041EC
  c->r[6]=0u+0xFFFFFFFFu; // 802041F0
  c->r[7]=0u+0x00000000u; // 802041F4
  c->lr=0x802041FCu; f_80048F20(c); // 802041F8
  goto L_80204218; // 802041FC
L_80204200:;
  c->lr=0x80204204u; f_8006592C(c); // 80204200
  c->r[4]=0u+0x0000004Au; // 80204204
  c->r[5]=0u+0x00000000u; // 80204208
  c->r[6]=0u+0xFFFFFFFFu; // 8020420C
  c->r[7]=0u+0x00000000u; // 80204210
  c->lr=0x80204218u; f_80048F20(c); // 80204214
L_80204218:;
  W32(c->r[13]+0xFFFFBC8Cu,c->r[3]); // 80204218
  c->r[3]=c->r[29]|c->r[29]; // 8020421C
  c->r[4]=0u+0x00000000u; // 80204220
  c->lr=0x80204228u; f_80208410(c); // 80204224
  c->r[3]=c->r[29]|c->r[29]; // 80204228
  c->r[4]=0u+0x00000000u; // 8020422C
  c->lr=0x80204234u; f_802304DC(c); // 80204230
  c->r[3]=c->r[29]|c->r[29]; // 80204234
  c->r[4]=0u+0x00000003u; // 80204238
  c->lr=0x80204240u; f_80230728(c); // 8020423C
  c->r[3]=c->r[29]|c->r[29]; // 80204240
  c->r[4]=0u+0x00000003u; // 80204244
  c->lr=0x8020424Cu; f_802307F8(c); // 80204248
  goto L_80204380; // 8020424C
L_80204250:;
  c->r[3]=R32(c->r[31]+0x00000708u); // 80204250
  cmps(c,0,(int32_t)c->r[3],0); // 80204254
  if (crb(c,2)) { goto L_802042F0; } // 80204258
  c->r[0]=R32(c->r[31]+0x00000700u); // 8020425C
  cmpu(c,0,c->r[3],c->r[0]); // 80204260
  if (!crb(c,2)) { goto L_802042AC; } // 80204264
  c->r[3]=0u+0x00000001u; // 80204268
  c->r[4]=0u+0x80480000u; // 8020426C
  c->r[4]=c->r[4]+0xFFFF89D4u; // 80204270
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204274
  c->lr=0x8020427Cu; f_803D3760(c); // 80204278
  c->r[3]=c->r[29]|c->r[29]; // 8020427C
  c->r[4]=0u+0x00000001u; // 80204280
  c->r[5]=0u+0x00000001u; // 80204284
  c->r[6]=0u+0x80480000u; // 80204288
  c->r[6]=c->r[6]+0xFFFF89F0u; // 8020428C
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80204290
  c->lr=0x80204298u; f_802303E8(c); // 80204294
  c->r[3]=R32(c->r[28]+0x00000D38u); // 80204298
  c->lr=0x802042A0u; f_801EF7A8(c); // 8020429C
  c->r[4]=0u+0x00000001u; // 802042A0
  c->lr=0x802042A8u; f_8025C81C(c); // 802042A4
  goto L_80204380; // 802042A8
L_802042AC:;
  c->r[3]=0u+0x00000001u; // 802042AC
  c->r[4]=0u+0x80480000u; // 802042B0
  c->r[4]=c->r[4]+0xFFFF89FCu; // 802042B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802042B8
  c->lr=0x802042C0u; f_803D3760(c); // 802042BC
  c->r[3]=R32(c->r[28]+0x00000D38u); // 802042C0
  c->lr=0x802042C8u; f_801EF7A8(c); // 802042C4
  c->r[4]=0u+0x00000000u; // 802042C8
  c->lr=0x802042D0u; f_8025C81C(c); // 802042CC
  c->r[3]=c->r[29]|c->r[29]; // 802042D0
  c->r[4]=0u+0x00000001u; // 802042D4
  c->r[5]=0u+0x00000001u; // 802042D8
  c->r[6]=0u+0x80480000u; // 802042DC
  c->r[6]=c->r[6]+0xFFFF8A1Cu; // 802042E0
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802042E4
  c->lr=0x802042ECu; f_802303E8(c); // 802042E8
  goto L_80204380; // 802042EC
L_802042F0:;
  c->r[3]=0u+0x00000001u; // 802042F0
  c->r[4]=0u+0x80480000u; // 802042F4
  c->r[4]=c->r[4]+0xFFFF8A28u; // 802042F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802042FC
  c->lr=0x80204304u; f_803D3760(c); // 80204300
  c->r[3]=R32(c->r[28]+0x00000D38u); // 80204304
  c->lr=0x8020430Cu; f_801EF7A8(c); // 80204308
  c->r[4]=0u+0x00000000u; // 8020430C
  c->lr=0x80204314u; f_8025C81C(c); // 80204310
  c->r[3]=c->r[29]|c->r[29]; // 80204314
  c->r[4]=0u+0x00000001u; // 80204318
  c->r[5]=0u+0x00000001u; // 8020431C
  c->r[6]=0u+0x80480000u; // 80204320
  c->r[6]=c->r[6]+0xFFFF8A48u; // 80204324
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80204328
  c->lr=0x80204330u; f_802303E8(c); // 8020432C
  goto L_80204380; // 80204330
L_80204334:;
  c->r[3]=0u+0x00000001u; // 80204334
  c->r[4]=0u+0x80480000u; // 80204338
  c->r[4]=c->r[4]+0xFFFF8A54u; // 8020433C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204340
  c->lr=0x80204348u; f_803D3760(c); // 80204344
  c->r[3]=c->r[29]|c->r[29]; // 80204348
  c->r[4]=0u+0x00000000u; // 8020434C
  c->r[5]=0u+0x00000000u; // 80204350
  c->r[6]=0u+0x00000000u; // 80204354
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80204358
  c->lr=0x80204360u; f_802303E8(c); // 8020435C
  goto L_80204380; // 80204360
L_80204364:;
  c->r[3]=0u+0x00000001u; // 80204364
  c->r[4]=0u+0x80480000u; // 80204368
  c->r[4]=c->r[4]+0xFFFF8A70u; // 8020436C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204370
  c->lr=0x80204378u; f_803D3760(c); // 80204374
  c->r[3]=R32(c->r[28]+0x00000D38u); // 80204378
  c->lr=0x80204380u; f_801EF80C(c); // 8020437C
L_80204380:;
  c->r[0]=R32(c->r[31]+0x00000E54u); // 80204380
  cmps(c,0,(int32_t)c->r[0],360); // 80204384
  if (crb(c,0)) { goto L_802043EC; } // 80204388
  c->r[3]=R32(c->r[28]+0x00000D38u); // 8020438C
  c->lr=0x80204394u; f_801EF870(c); // 80204390
  cmps(c,0,(int32_t)c->r[3],0); // 80204394
  if (crb(c,2)) { goto L_802043EC; } // 80204398
  c->r[3]=c->r[29]|c->r[29]; // 8020439C
  c->lr=0x802043A4u; f_802304C0(c); // 802043A0
  cmps(c,0,(int32_t)c->r[3],0); // 802043A4
  if (crb(c,2)) { goto L_802043EC; } // 802043A8
  c->r[3]=0u+0x00000001u; // 802043AC
  c->r[4]=0u+0x80480000u; // 802043B0
  c->r[4]=c->r[4]+0xFFFF8A94u; // 802043B4
  c->r[5]=R32(c->r[31]+0x00000E54u); // 802043B8
  c->r[6]=0u+0x00000168u; // 802043BC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802043C0
  c->lr=0x802043C8u; f_803D3760(c); // 802043C4
  c->r[3]=R32(c->r[28]+0x00000D38u); // 802043C8
  c->lr=0x802043D0u; f_801EF7A8(c); // 802043CC
  c->lr=0x802043D4u; f_8025C938(c); // 802043D0
  c->r[3]=0u+0x00000001u; // 802043D4
  c->r[4]=0u+0x80480000u; // 802043D8
  c->r[4]=c->r[4]+0xFFFF8AA8u; // 802043DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802043E0
  c->lr=0x802043E8u; f_803D3760(c); // 802043E4
  c->r[30]=0u+0x00000001u; // 802043E8
L_802043EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 802043EC
  if (crb(c,2)) { goto L_80204440; } // 802043F0
  c->r[0]=0u+0x00000000u; // 802043F4
  W32(c->r[31]+0x00000E54u,c->r[0]); // 802043F8
  W32(c->r[31]+0x00000014u,c->r[0]); // 802043FC
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80204400
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 80204404
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80204408
  c->r[0]=0u+0x0000000Eu; // 8020440C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80204410
  c->r[3]=R32(c->r[13]+0xFFFFBC8Cu); // 80204414
  cmps(c,0,(int32_t)c->r[3],0); // 80204418
  if (crb(c,2)) { goto L_80204428; } // 8020441C
  c->r[4]=0u+0x00000000u; // 80204420
  c->lr=0x80204428u; f_8005A908(c); // 80204424
L_80204428:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80204428
  cmps(c,0,(int32_t)c->r[0],2); // 8020442C
  if (crb(c,2)) { goto L_80204438; } // 80204430
  goto L_80204440; // 80204434
L_80204438:;
  c->r[3]=c->r[28]|c->r[28]; // 80204438
  c->lr=0x80204440u; f_801FBA1C(c); // 8020443C
L_80204440:;
  c->r[3]=c->r[28]|c->r[28]; // 80204440
  c->lr=0x80204448u; f_80205858(c); // 80204444
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80204448
  c->r[30]=R32(c->r[1]+0x00000018u); // 8020444C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80204450
  c->r[28]=R32(c->r[1]+0x00000010u); // 80204454
  c->r[0]=R32(c->r[1]+0x00000024u); // 80204458
  c->lr=c->r[0]; // 8020445C
  c->r[1]=c->r[1]+0x00000020u; // 80204460
  return; // 80204464
}

// fn_80204468
void f_80204468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204468
  c->r[0]=c->lr; // 8020446C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80204470
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80204474
  W32(c->r[1]+0x00000018u,c->r[30]); // 80204478
  W32(c->r[1]+0x00000014u,c->r[29]); // 8020447C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80204480
  c->r[28]=c->r[4]|c->r[4]; // 80204484
  c->r[29]=c->r[5]|c->r[5]; // 80204488
  c->r[31]=R32(c->r[3]+0x00000D08u); // 8020448C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80204490
  c->lr=0x80204498u; f_801EF3D4(c); // 80204494
  c->r[30]=c->r[3]|c->r[3]; // 80204498
  c->lr=0x802044A0u; f_802309FC(c); // 8020449C
  cmps(c,0,(int32_t)c->r[3],0); // 802044A0
  if (!crb(c,2)) { goto L_80204A5C; } // 802044A4
  cmps(c,0,(int32_t)c->r[28],0); // 802044A8
  if (crb(c,0)) { goto L_802044B4; } // 802044AC
  W32(c->r[13]+0xFFFF9F78u,c->r[28]); // 802044B0
L_802044B4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802044B4
  if (crb(c,0)) { goto L_802044C0; } // 802044B8
  W32(c->r[13]+0xFFFFBC90u,c->r[29]); // 802044BC
L_802044C0:;
  c->r[3]=c->r[30]|c->r[30]; // 802044C0
  c->r[4]=R32(c->r[31]+0x00000E10u); // 802044C4
  c->r[5]=R32(c->r[13]+0xFFFF9F78u); // 802044C8
  c->lr=0x802044D0u; f_80230C70(c); // 802044CC
  c->r[0]=R32(c->r[13]+0xFFFF9F78u); // 802044D0
  cmpu(c,0,c->r[0],0x00000007u); // 802044D4
  if (crb(c,1)) { goto L_80204A5C; } // 802044D8
  c->r[3]=0u+0x80480000u; // 802044DC
  c->r[3]=c->r[3]+0xFFFF8AC4u; // 802044E0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802044E4
  c->r[3]=R32(c->r[3]+c->r[0]); // 802044E8
  c->ctr=c->r[3]; // 802044EC
  if (true) { switch (c->ctr) { case 0x802044F4u: goto L_802044F4; case 0x80204588u: goto L_80204588; case 0x80204660u: goto L_80204660; case 0x802046F4u: goto L_802046F4; case 0x802047CCu: goto L_802047CC; case 0x80204860u: goto L_80204860; case 0x802048F4u: goto L_802048F4; case 0x802049CCu: goto L_802049CC; default: break; } dispatch(c,c->ctr); return; } // 802044F0
L_802044F4:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 802044F4
  cmps(c,0,(int32_t)c->r[0],1); // 802044F8
  if (crb(c,2)) { goto L_80204548; } // 802044FC
  if (!crb(c,0)) { goto L_80204A5C; } // 80204500
  cmps(c,0,(int32_t)c->r[0],0); // 80204504
  if (!crb(c,0)) { goto L_80204510; } // 80204508
  goto L_80204A5C; // 8020450C
L_80204510:;
  {uint32_t ea=c->r[2]+0xFFFF96E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80204510
  fcmp(c,0,c->f[1],c->f[0]); // 80204514
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204518
  if (!crb(c,2)) { goto L_80204A5C; } // 8020451C
  c->lr=0x80204524u; f_8006592C(c); // 80204520
  c->r[4]=0u+0x00000230u; // 80204524
  c->r[5]=0u+0x00000000u; // 80204528
  c->r[6]=0u+0xFFFFFFFFu; // 8020452C
  c->r[7]=0u+0xFFFFFFFFu; // 80204530
  c->lr=0x80204538u; f_80048F20(c); // 80204534
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204538
  c->r[0]=c->r[3]+0x00000001u; // 8020453C
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204540
  goto L_80204A5C; // 80204544
L_80204548:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80204548
  fcmp(c,0,c->f[1],c->f[0]); // 8020454C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204550
  if (!crb(c,2)) { goto L_80204A5C; } // 80204554
  c->lr=0x8020455Cu; f_8006592C(c); // 80204558
  c->r[4]=0u+0x00000231u; // 8020455C
  c->r[5]=0u+0x00000000u; // 80204560
  c->r[6]=0u+0xFFFFFFFFu; // 80204564
  c->r[7]=0u+0xFFFFFFFFu; // 80204568
  c->lr=0x80204570u; f_80048F20(c); // 8020456C
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204570
  c->r[0]=c->r[3]+0x00000001u; // 80204574
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204578
  c->r[0]=0u+0xFFFFFFFFu; // 8020457C
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 80204580
  goto L_80204A5C; // 80204584
L_80204588:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 80204588
  cmps(c,0,(int32_t)c->r[0],1); // 8020458C
  if (crb(c,2)) { goto L_802045E8; } // 80204590
  if (!crb(c,0)) { goto L_802045A4; } // 80204594
  cmps(c,0,(int32_t)c->r[0],0); // 80204598
  if (!crb(c,0)) { goto L_802045B0; } // 8020459C
  goto L_80204A5C; // 802045A0
L_802045A4:;
  cmps(c,0,(int32_t)c->r[0],3); // 802045A4
  if (!crb(c,0)) { goto L_80204A5C; } // 802045A8
  goto L_80204620; // 802045AC
L_802045B0:;
  {uint32_t ea=c->r[2]+0xFFFF96E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802045B0
  fcmp(c,0,c->f[1],c->f[0]); // 802045B4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802045B8
  if (!crb(c,2)) { goto L_80204A5C; } // 802045BC
  c->lr=0x802045C4u; f_8006592C(c); // 802045C0
  c->r[4]=0u+0x00000230u; // 802045C4
  c->r[5]=0u+0x00000000u; // 802045C8
  c->r[6]=0u+0xFFFFFFFFu; // 802045CC
  c->r[7]=0u+0xFFFFFFFFu; // 802045D0
  c->lr=0x802045D8u; f_80048F20(c); // 802045D4
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802045D8
  c->r[0]=c->r[3]+0x00000001u; // 802045DC
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802045E0
  goto L_80204A5C; // 802045E4
L_802045E8:;
  {uint32_t ea=c->r[2]+0xFFFF96F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802045E8
  fcmp(c,0,c->f[1],c->f[0]); // 802045EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802045F0
  if (!crb(c,2)) { goto L_80204A5C; } // 802045F4
  c->lr=0x802045FCu; f_8006592C(c); // 802045F8
  c->r[4]=0u+0x00000232u; // 802045FC
  c->r[5]=0u+0x00000000u; // 80204600
  c->r[6]=0u+0xFFFFFFFFu; // 80204604
  c->r[7]=0u+0xFFFFFFFFu; // 80204608
  c->lr=0x80204610u; f_80048F20(c); // 8020460C
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204610
  c->r[0]=c->r[3]+0x00000001u; // 80204614
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204618
  goto L_80204A5C; // 8020461C
L_80204620:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80204620
  fcmp(c,0,c->f[1],c->f[0]); // 80204624
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204628
  if (!crb(c,2)) { goto L_80204A5C; } // 8020462C
  c->lr=0x80204634u; f_8006592C(c); // 80204630
  c->r[4]=0u+0x00000231u; // 80204634
  c->r[5]=0u+0x00000000u; // 80204638
  c->r[6]=0u+0xFFFFFFFFu; // 8020463C
  c->r[7]=0u+0xFFFFFFFFu; // 80204640
  c->lr=0x80204648u; f_80048F20(c); // 80204644
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204648
  c->r[0]=c->r[3]+0x00000001u; // 8020464C
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204650
  c->r[0]=0u+0xFFFFFFFFu; // 80204654
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 80204658
  goto L_80204A5C; // 8020465C
L_80204660:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 80204660
  cmps(c,0,(int32_t)c->r[0],1); // 80204664
  if (crb(c,2)) { goto L_802046B4; } // 80204668
  if (!crb(c,0)) { goto L_80204A5C; } // 8020466C
  cmps(c,0,(int32_t)c->r[0],0); // 80204670
  if (!crb(c,0)) { goto L_8020467C; } // 80204674
  goto L_80204A5C; // 80204678
L_8020467C:;
  {uint32_t ea=c->r[2]+0xFFFF96E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020467C
  fcmp(c,0,c->f[1],c->f[0]); // 80204680
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204684
  if (!crb(c,2)) { goto L_80204A5C; } // 80204688
  c->lr=0x80204690u; f_8006592C(c); // 8020468C
  c->r[4]=0u+0x00000230u; // 80204690
  c->r[5]=0u+0x00000000u; // 80204694
  c->r[6]=0u+0xFFFFFFFFu; // 80204698
  c->r[7]=0u+0xFFFFFFFFu; // 8020469C
  c->lr=0x802046A4u; f_80048F20(c); // 802046A0
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802046A4
  c->r[0]=c->r[3]+0x00000001u; // 802046A8
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802046AC
  goto L_80204A5C; // 802046B0
L_802046B4:;
  {uint32_t ea=c->r[2]+0xFFFF96F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802046B4
  fcmp(c,0,c->f[1],c->f[0]); // 802046B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802046BC
  if (!crb(c,2)) { goto L_80204A5C; } // 802046C0
  c->lr=0x802046C8u; f_8006592C(c); // 802046C4
  c->r[4]=0u+0x00000233u; // 802046C8
  c->r[5]=0u+0x00000000u; // 802046CC
  c->r[6]=0u+0xFFFFFFFFu; // 802046D0
  c->r[7]=0u+0xFFFFFFFFu; // 802046D4
  c->lr=0x802046DCu; f_80048F20(c); // 802046D8
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802046DC
  c->r[0]=c->r[3]+0x00000001u; // 802046E0
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802046E4
  c->r[0]=0u+0xFFFFFFFFu; // 802046E8
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 802046EC
  goto L_80204A5C; // 802046F0
L_802046F4:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 802046F4
  cmps(c,0,(int32_t)c->r[0],1); // 802046F8
  if (crb(c,2)) { goto L_80204754; } // 802046FC
  if (!crb(c,0)) { goto L_80204710; } // 80204700
  cmps(c,0,(int32_t)c->r[0],0); // 80204704
  if (!crb(c,0)) { goto L_8020471C; } // 80204708
  goto L_80204A5C; // 8020470C
L_80204710:;
  cmps(c,0,(int32_t)c->r[0],3); // 80204710
  if (!crb(c,0)) { goto L_80204A5C; } // 80204714
  goto L_8020478C; // 80204718
L_8020471C:;
  {uint32_t ea=c->r[2]+0xFFFF96E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020471C
  fcmp(c,0,c->f[1],c->f[0]); // 80204720
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204724
  if (!crb(c,2)) { goto L_80204A5C; } // 80204728
  c->lr=0x80204730u; f_8006592C(c); // 8020472C
  c->r[4]=0u+0x00000230u; // 80204730
  c->r[5]=0u+0x00000000u; // 80204734
  c->r[6]=0u+0xFFFFFFFFu; // 80204738
  c->r[7]=0u+0xFFFFFFFFu; // 8020473C
  c->lr=0x80204744u; f_80048F20(c); // 80204740
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204744
  c->r[0]=c->r[3]+0x00000001u; // 80204748
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 8020474C
  goto L_80204A5C; // 80204750
L_80204754:;
  {uint32_t ea=c->r[2]+0xFFFF96F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80204754
  fcmp(c,0,c->f[1],c->f[0]); // 80204758
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020475C
  if (!crb(c,2)) { goto L_80204A5C; } // 80204760
  c->lr=0x80204768u; f_8006592C(c); // 80204764
  c->r[4]=0u+0x00000232u; // 80204768
  c->r[5]=0u+0x00000000u; // 8020476C
  c->r[6]=0u+0xFFFFFFFFu; // 80204770
  c->r[7]=0u+0xFFFFFFFFu; // 80204774
  c->lr=0x8020477Cu; f_80048F20(c); // 80204778
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 8020477C
  c->r[0]=c->r[3]+0x00000001u; // 80204780
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204784
  goto L_80204A5C; // 80204788
L_8020478C:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020478C
  fcmp(c,0,c->f[1],c->f[0]); // 80204790
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204794
  if (!crb(c,2)) { goto L_80204A5C; } // 80204798
  c->lr=0x802047A0u; f_8006592C(c); // 8020479C
  c->r[4]=0u+0x00000231u; // 802047A0
  c->r[5]=0u+0x00000000u; // 802047A4
  c->r[6]=0u+0xFFFFFFFFu; // 802047A8
  c->r[7]=0u+0xFFFFFFFFu; // 802047AC
  c->lr=0x802047B4u; f_80048F20(c); // 802047B0
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802047B4
  c->r[0]=c->r[3]+0x00000001u; // 802047B8
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802047BC
  c->r[0]=0u+0xFFFFFFFFu; // 802047C0
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 802047C4
  goto L_80204A5C; // 802047C8
L_802047CC:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 802047CC
  cmps(c,0,(int32_t)c->r[0],1); // 802047D0
  if (crb(c,2)) { goto L_80204820; } // 802047D4
  if (!crb(c,0)) { goto L_80204A5C; } // 802047D8
  cmps(c,0,(int32_t)c->r[0],0); // 802047DC
  if (!crb(c,0)) { goto L_802047E8; } // 802047E0
  goto L_80204A5C; // 802047E4
L_802047E8:;
  {uint32_t ea=c->r[2]+0xFFFF96F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802047E8
  fcmp(c,0,c->f[1],c->f[0]); // 802047EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802047F0
  if (!crb(c,2)) { goto L_80204A5C; } // 802047F4
  c->lr=0x802047FCu; f_8006592C(c); // 802047F8
  c->r[4]=0u+0x00000231u; // 802047FC
  c->r[5]=0u+0x00000000u; // 80204800
  c->r[6]=0u+0xFFFFFFFFu; // 80204804
  c->r[7]=0u+0xFFFFFFFFu; // 80204808
  c->lr=0x80204810u; f_80048F20(c); // 8020480C
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204810
  c->r[0]=c->r[3]+0x00000001u; // 80204814
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204818
  goto L_80204A5C; // 8020481C
L_80204820:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80204820
  fcmp(c,0,c->f[1],c->f[0]); // 80204824
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204828
  if (!crb(c,2)) { goto L_80204A5C; } // 8020482C
  c->lr=0x80204834u; f_8006592C(c); // 80204830
  c->r[4]=0u+0x00000233u; // 80204834
  c->r[5]=0u+0x00000000u; // 80204838
  c->r[6]=0u+0xFFFFFFFFu; // 8020483C
  c->r[7]=0u+0xFFFFFFFFu; // 80204840
  c->lr=0x80204848u; f_80048F20(c); // 80204844
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204848
  c->r[0]=c->r[3]+0x00000001u; // 8020484C
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204850
  c->r[0]=0u+0xFFFFFFFFu; // 80204854
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 80204858
  goto L_80204A5C; // 8020485C
L_80204860:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 80204860
  cmps(c,0,(int32_t)c->r[0],1); // 80204864
  if (crb(c,2)) { goto L_802048B4; } // 80204868
  if (!crb(c,0)) { goto L_80204A5C; } // 8020486C
  cmps(c,0,(int32_t)c->r[0],0); // 80204870
  if (!crb(c,0)) { goto L_8020487C; } // 80204874
  goto L_80204A5C; // 80204878
L_8020487C:;
  {uint32_t ea=c->r[2]+0xFFFF96F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020487C
  fcmp(c,0,c->f[1],c->f[0]); // 80204880
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204884
  if (!crb(c,2)) { goto L_80204A5C; } // 80204888
  c->lr=0x80204890u; f_8006592C(c); // 8020488C
  c->r[4]=0u+0x00000231u; // 80204890
  c->r[5]=0u+0x00000000u; // 80204894
  c->r[6]=0u+0xFFFFFFFFu; // 80204898
  c->r[7]=0u+0xFFFFFFFFu; // 8020489C
  c->lr=0x802048A4u; f_80048F20(c); // 802048A0
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802048A4
  c->r[0]=c->r[3]+0x00000001u; // 802048A8
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802048AC
  goto L_80204A5C; // 802048B0
L_802048B4:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 802048B4
  fcmp(c,0,c->f[1],c->f[0]); // 802048B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802048BC
  if (!crb(c,2)) { goto L_80204A5C; } // 802048C0
  c->lr=0x802048C8u; f_8006592C(c); // 802048C4
  c->r[4]=0u+0x00000233u; // 802048C8
  c->r[5]=0u+0x00000000u; // 802048CC
  c->r[6]=0u+0xFFFFFFFFu; // 802048D0
  c->r[7]=0u+0xFFFFFFFFu; // 802048D4
  c->lr=0x802048DCu; f_80048F20(c); // 802048D8
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802048DC
  c->r[0]=c->r[3]+0x00000001u; // 802048E0
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802048E4
  c->r[0]=0u+0xFFFFFFFFu; // 802048E8
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 802048EC
  goto L_80204A5C; // 802048F0
L_802048F4:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 802048F4
  cmps(c,0,(int32_t)c->r[0],1); // 802048F8
  if (crb(c,2)) { goto L_80204954; } // 802048FC
  if (!crb(c,0)) { goto L_80204910; } // 80204900
  cmps(c,0,(int32_t)c->r[0],0); // 80204904
  if (!crb(c,0)) { goto L_8020491C; } // 80204908
  goto L_80204A5C; // 8020490C
L_80204910:;
  cmps(c,0,(int32_t)c->r[0],3); // 80204910
  if (!crb(c,0)) { goto L_80204A5C; } // 80204914
  goto L_8020498C; // 80204918
L_8020491C:;
  {uint32_t ea=c->r[2]+0xFFFF96F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8020491C
  fcmp(c,0,c->f[1],c->f[0]); // 80204920
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204924
  if (!crb(c,2)) { goto L_80204A5C; } // 80204928
  c->lr=0x80204930u; f_8006592C(c); // 8020492C
  c->r[4]=0u+0x00000231u; // 80204930
  c->r[5]=0u+0x00000000u; // 80204934
  c->r[6]=0u+0xFFFFFFFFu; // 80204938
  c->r[7]=0u+0xFFFFFFFFu; // 8020493C
  c->lr=0x80204944u; f_80048F20(c); // 80204940
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204944
  c->r[0]=c->r[3]+0x00000001u; // 80204948
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 8020494C
  goto L_80204A5C; // 80204950
L_80204954:;
  {uint32_t ea=c->r[2]+0xFFFF96F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80204954
  fcmp(c,0,c->f[1],c->f[0]); // 80204958
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8020495C
  if (!crb(c,2)) { goto L_80204A5C; } // 80204960
  c->lr=0x80204968u; f_8006592C(c); // 80204964
  c->r[4]=0u+0x00000232u; // 80204968
  c->r[5]=0u+0x00000000u; // 8020496C
  c->r[6]=0u+0xFFFFFFFFu; // 80204970
  c->r[7]=0u+0xFFFFFFFFu; // 80204974
  c->lr=0x8020497Cu; f_80048F20(c); // 80204978
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 8020497C
  c->r[0]=c->r[3]+0x00000001u; // 80204980
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204984
  goto L_80204A5C; // 80204988
L_8020498C:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8020498C
  fcmp(c,0,c->f[1],c->f[0]); // 80204990
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204994
  if (!crb(c,2)) { goto L_80204A5C; } // 80204998
  c->lr=0x802049A0u; f_8006592C(c); // 8020499C
  c->r[4]=0u+0x00000231u; // 802049A0
  c->r[5]=0u+0x00000000u; // 802049A4
  c->r[6]=0u+0xFFFFFFFFu; // 802049A8
  c->r[7]=0u+0xFFFFFFFFu; // 802049AC
  c->lr=0x802049B4u; f_80048F20(c); // 802049B0
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 802049B4
  c->r[0]=c->r[3]+0x00000001u; // 802049B8
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 802049BC
  c->r[0]=0u+0xFFFFFFFFu; // 802049C0
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 802049C4
  goto L_80204A5C; // 802049C8
L_802049CC:;
  c->r[0]=R32(c->r[13]+0xFFFFBC90u); // 802049CC
  cmps(c,0,(int32_t)c->r[0],1); // 802049D0
  if (crb(c,2)) { goto L_80204A20; } // 802049D4
  if (!crb(c,0)) { goto L_80204A5C; } // 802049D8
  cmps(c,0,(int32_t)c->r[0],0); // 802049DC
  if (!crb(c,0)) { goto L_802049E8; } // 802049E0
  goto L_80204A5C; // 802049E4
L_802049E8:;
  {uint32_t ea=c->r[2]+0xFFFF96F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802049E8
  fcmp(c,0,c->f[1],c->f[0]); // 802049EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802049F0
  if (!crb(c,2)) { goto L_80204A5C; } // 802049F4
  c->lr=0x802049FCu; f_8006592C(c); // 802049F8
  c->r[4]=0u+0x00000231u; // 802049FC
  c->r[5]=0u+0x00000000u; // 80204A00
  c->r[6]=0u+0xFFFFFFFFu; // 80204A04
  c->r[7]=0u+0xFFFFFFFFu; // 80204A08
  c->lr=0x80204A10u; f_80048F20(c); // 80204A0C
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204A10
  c->r[0]=c->r[3]+0x00000001u; // 80204A14
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204A18
  goto L_80204A5C; // 80204A1C
L_80204A20:;
  {uint32_t ea=c->r[2]+0xFFFF96ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 80204A20
  fcmp(c,0,c->f[1],c->f[0]); // 80204A24
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80204A28
  if (!crb(c,2)) { goto L_80204A5C; } // 80204A2C
  c->lr=0x80204A34u; f_8006592C(c); // 80204A30
  c->r[4]=0u+0x00000233u; // 80204A34
  c->r[5]=0u+0x00000000u; // 80204A38
  c->r[6]=0u+0xFFFFFFFFu; // 80204A3C
  c->r[7]=0u+0xFFFFFFFFu; // 80204A40
  c->lr=0x80204A48u; f_80048F20(c); // 80204A44
  c->r[3]=R32(c->r[13]+0xFFFFBC90u); // 80204A48
  c->r[0]=c->r[3]+0x00000001u; // 80204A4C
  W32(c->r[13]+0xFFFFBC90u,c->r[0]); // 80204A50
  c->r[0]=0u+0xFFFFFFFFu; // 80204A54
  W32(c->r[13]+0xFFFF9F78u,c->r[0]); // 80204A58
L_80204A5C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80204A5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80204A60
  c->r[29]=R32(c->r[1]+0x00000014u); // 80204A64
  c->r[28]=R32(c->r[1]+0x00000010u); // 80204A68
  c->r[0]=R32(c->r[1]+0x00000024u); // 80204A6C
  c->lr=c->r[0]; // 80204A70
  c->r[1]=c->r[1]+0x00000020u; // 80204A74
  return; // 80204A78
}

// fn_80204A7C
void f_80204A7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204A7C
  c->r[0]=c->lr; // 80204A80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204A84
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80204A88
  c->lr=0x80204A90u; f_801EF3D4(c); // 80204A8C
  c->lr=0x80204A94u; f_80208474(c); // 80204A90
  c->r[0]=0u-c->r[3]; // 80204A94
  c->r[0]=c->r[0]|c->r[3]; // 80204A98
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80204A9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204AA0
  c->lr=c->r[0]; // 80204AA4
  c->r[1]=c->r[1]+0x00000010u; // 80204AA8
  return; // 80204AAC
}

// fn_80204AB0
void f_80204AB0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D58u); // 80204AB0
  return; // 80204AB4
}

// fn_80204AB8
void f_80204AB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204AB8
  c->r[0]=c->lr; // 80204ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204AC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204AC4
  c->r[31]=c->r[4]|c->r[4]; // 80204AC8
  c->lr=0x80204AD0u; f_80361C0C(c); // 80204ACC
  c->r[4]=c->r[3]-c->r[31]; // 80204AD0
  c->r[3]=0u+0x80000000u; // 80204AD4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 80204AD8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80204ADC
  c->r[3]=0u+0x10620000u; // 80204AE0
  c->r[3]=c->r[3]+0x00004DD3u; // 80204AE4
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 80204AE8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 80204AEC
  c->r[3]=divwu(c->r[4],c->r[0]); // 80204AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204AF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204AF8
  c->lr=c->r[0]; // 80204AFC
  c->r[1]=c->r[1]+0x00000010u; // 80204B00
  return; // 80204B04
}

// fn_80204B08
void f_80204B08(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D5Cu); // 80204B08
  cmps(c,0,(int32_t)c->r[3],1); // 80204B0C
  if (crb(c,0)) { goto L_80204B1C; } // 80204B10
  cmps(c,0,(int32_t)c->r[3],3); // 80204B14
  if (!crb(c,1)) { goto L_80204B24; } // 80204B18
L_80204B1C:;
  c->r[3]=0u+0xFFFFFFFFu; // 80204B1C
  return; // 80204B20
L_80204B24:;
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80204B24
  return; // 80204B28
}

// fn_80204B2C
void f_80204B2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204B2C
  c->r[0]=c->lr; // 80204B30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204B34
  c->r[0]=0u+0x00000001u; // 80204B38
  c->r[4]=R32(c->r[3]+0x00000D08u); // 80204B3C
  W32(c->r[4]+0x00000010u,c->r[0]); // 80204B40
  c->r[4]=0u+0x00000000u; // 80204B44
  c->lr=0x80204B4Cu; f_802082BC(c); // 80204B48
  c->r[3]=0u+0x00000001u; // 80204B4C
  c->r[4]=0u+0x80480000u; // 80204B50
  c->r[4]=c->r[4]+0xFFFF8AE4u; // 80204B54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204B58
  c->lr=0x80204B60u; f_803D3760(c); // 80204B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204B60
  c->lr=c->r[0]; // 80204B64
  c->r[1]=c->r[1]+0x00000010u; // 80204B68
  return; // 80204B6C
}

// fn_80204B70
void f_80204B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204B70
  c->r[0]=c->lr; // 80204B74
  W32(c->r[1]+0x00000034u,c->r[0]); // 80204B78
  c->r[11]=c->r[1]+0x00000030u; // 80204B7C
  c->lr=0x80204B84u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204B80
  c->r[29]=c->r[3]|c->r[3]; // 80204B84
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80204B88
  c->lr=0x80204B90u; f_801EF3D4(c); // 80204B8C
  c->r[31]=c->r[3]|c->r[3]; // 80204B90
  c->r[30]=R32(c->r[29]+0x00000D08u); // 80204B94
  c->r[3]=0u+0x00000001u; // 80204B98
  c->r[4]=c->r[13]+0xFFFF9F68u; // 80204B9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204BA0
  c->lr=0x80204BA8u; f_803D3760(c); // 80204BA4
  c->r[3]=0u+0x00000001u; // 80204BA8
  c->r[4]=0u+0x80480000u; // 80204BAC
  c->r[4]=c->r[4]+0xFFFF8B08u; // 80204BB0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000E4Cu); // 80204BB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204BB8
  c->lr=0x80204BC0u; f_803D3760(c); // 80204BBC
  c->r[3]=0u+0x00000001u; // 80204BC0
  c->r[4]=c->r[13]+0xFFFF9F68u; // 80204BC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204BC8
  c->lr=0x80204BD0u; f_803D3760(c); // 80204BCC
  c->r[3]=c->r[29]|c->r[29]; // 80204BD0
  c->r[4]=0u+0x00000000u; // 80204BD4
  c->lr=0x80204BDCu; f_802082BC(c); // 80204BD8
  c->r[27]=0u+0x00000001u; // 80204BDC
  W32(c->r[30]+0x00000010u,c->r[27]); // 80204BE0
  c->r[28]=0u+0x00000000u; // 80204BE4
  W16(c->r[30]+0x00000E48u,c->r[28]); // 80204BE8
  W16(c->r[30]+0x0000070Eu,c->r[28]); // 80204BEC
  W32(c->r[30]+0x00000E54u,c->r[28]); // 80204BF0
  W32(c->r[30]+0x00000014u,c->r[28]); // 80204BF4
  W32(c->r[30]+0x000006C8u,c->r[28]); // 80204BF8
  W32(c->r[30]+0x000006D8u,c->r[28]); // 80204BFC
  W32(c->r[30]+0x000006E8u,c->r[28]); // 80204C00
  W32(c->r[30]+0x000006CCu,c->r[28]); // 80204C04
  W32(c->r[30]+0x000006DCu,c->r[28]); // 80204C08
  W32(c->r[30]+0x000006ECu,c->r[28]); // 80204C0C
  W32(c->r[30]+0x000006D0u,c->r[28]); // 80204C10
  W32(c->r[30]+0x000006E0u,c->r[28]); // 80204C14
  W32(c->r[30]+0x000006F0u,c->r[28]); // 80204C18
  W32(c->r[30]+0x000006D4u,c->r[28]); // 80204C1C
  W32(c->r[30]+0x000006E4u,c->r[28]); // 80204C20
  W32(c->r[30]+0x000006F4u,c->r[28]); // 80204C24
  c->r[3]=c->r[31]|c->r[31]; // 80204C28
  c->r[4]=0u+0x00000000u; // 80204C2C
  c->lr=0x80204C34u; f_802304DC(c); // 80204C30
  W32(c->r[29]+0x00000D58u,c->r[28]); // 80204C34
  c->r[24]=0u+0x00000000u; // 80204C38
  c->r[25]=c->r[30]+0x0000007Cu; // 80204C3C
  c->r[26]=c->r[25]|c->r[25]; // 80204C40
  goto L_80204C88; // 80204C44
L_80204C48:;
  W32(c->r[26]+0x00000014u,c->r[27]); // 80204C48
  c->r[0]=R32(c->r[30]+0x00000000u); // 80204C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80204C50
  if (crb(c,2)) { goto L_80204C5C; } // 80204C54
  goto L_80204C7C; // 80204C58
L_80204C5C:;
  c->lr=0x80204C60u; f_8005C4C4(c); // 80204C5C
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80204C60
  c->r[3]=c->r[0]-c->r[3]; // 80204C64
  c->r[0]=c->r[3]+0x00000003u; // 80204C68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)30); // 80204C6C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80204C70
  W16(c->r[26]+0x0000003Cu,c->r[0]); // 80204C74
  goto L_80204C80; // 80204C78
L_80204C7C:;
  W16(c->r[26]+0x0000003Cu,c->r[28]); // 80204C7C
L_80204C80:;
  c->r[26]=c->r[26]+0x0000018Cu; // 80204C80
  c->r[24]=c->r[24]+0x00000001u; // 80204C84
L_80204C88:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000E44u); // 80204C88
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 80204C8C
  if (crb(c,0)) { IRQCHK(c); goto L_80204C48; } // 80204C90
  c->lr=0x80204C98u; f_802083FC(c); // 80204C94
  c->lr=0x80204C9Cu; f_802189C4(c); // 80204C98
  c->lr=0x80204CA0u; f_802082D4(c); // 80204C9C
  c->lr=0x80204CA4u; f_8021AD4C(c); // 80204CA0
  c->r[26]=0u+0x00000000u; // 80204CA4
  goto L_80204CEC; // 80204CA8
L_80204CAC:;
  c->r[0]=R32(c->r[30]+0x00000700u); // 80204CAC
  cmpu(c,0,c->r[25],c->r[0]); // 80204CB0
  if (!crb(c,2)) { goto L_80204CD0; } // 80204CB4
  c->lr=0x80204CBCu; f_802082D4(c); // 80204CB8
  c->r[4]=c->r[25]|c->r[25]; // 80204CBC
  c->r[5]=0u+0x00000001u; // 80204CC0
  c->r[6]=0u+0x00000001u; // 80204CC4
  c->lr=0x80204CCCu; f_8021AD54(c); // 80204CC8
  goto L_80204CE4; // 80204CCC
L_80204CD0:;
  c->lr=0x80204CD4u; f_802082D4(c); // 80204CD0
  c->r[4]=c->r[25]|c->r[25]; // 80204CD4
  c->r[5]=0u+0x00000001u; // 80204CD8
  c->r[6]=0u+0x00000000u; // 80204CDC
  c->lr=0x80204CE4u; f_8021AD54(c); // 80204CE0
L_80204CE4:;
  c->r[25]=c->r[25]+0x0000018Cu; // 80204CE4
  c->r[26]=c->r[26]+0x00000001u; // 80204CE8
L_80204CEC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000E44u); // 80204CEC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80204CF0
  if (crb(c,0)) { IRQCHK(c); goto L_80204CAC; } // 80204CF4
  c->lr=0x80204CFCu; f_802082D4(c); // 80204CF8
  c->lr=0x80204D00u; f_80219FFC(c); // 80204CFC
  c->r[3]=c->r[29]|c->r[29]; // 80204D00
  c->r[4]=0u+0x00000000u; // 80204D04
  c->lr=0x80204D0Cu; f_80208288(c); // 80204D08
  c->r[3]=c->r[29]|c->r[29]; // 80204D0C
  c->r[4]=0u+0x00000000u; // 80204D10
  c->lr=0x80204D18u; f_80208280(c); // 80204D14
  c->r[3]=c->r[31]|c->r[31]; // 80204D18
  c->lr=0x80204D20u; f_80230CDC(c); // 80204D1C
  c->r[3]=0u+0x00000001u; // 80204D20
  c->r[4]=0u+0x80470000u; // 80204D24
  c->r[4]=c->r[4]+0x00007BACu; // 80204D28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204D2C
  c->lr=0x80204D34u; f_803D3760(c); // 80204D30
  c->r[0]=R32(c->r[30]+0x00000000u); // 80204D34
  cmps(c,0,(int32_t)c->r[0],2); // 80204D38
  if (!crb(c,2)) { goto L_80204D4C; } // 80204D3C
  c->r[3]=c->r[29]+0x000006D4u; // 80204D40
  c->r[4]=0u+0x00000001u; // 80204D44
  c->lr=0x80204D4Cu; f_80208394(c); // 80204D48
L_80204D4C:;
  c->r[11]=c->r[1]+0x00000030u; // 80204D4C
  c->lr=0x80204D54u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80204D50
  c->r[0]=R32(c->r[1]+0x00000034u); // 80204D54
  c->lr=c->r[0]; // 80204D58
  c->r[1]=c->r[1]+0x00000030u; // 80204D5C
  return; // 80204D60
}

// fn_80204D64
void f_80204D64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204D64
  c->r[0]=c->lr; // 80204D68
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204D6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204D70
  W32(c->r[1]+0x00000008u,c->r[30]); // 80204D74
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80204D78
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80204D7C
  c->lr=0x80204D84u; f_801EF3D4(c); // 80204D80
  c->r[30]=c->r[3]|c->r[3]; // 80204D84
  c->r[3]=0u+0x00000000u; // 80204D88
  W32(c->r[31]+0x00000E54u,c->r[3]); // 80204D8C
  c->r[0]=0u+0x0000000Au; // 80204D90
  W32(c->r[31]+0x00000010u,c->r[0]); // 80204D94
  W32(c->r[31]+0x00000014u,c->r[3]); // 80204D98
  c->lr=0x80204DA0u; f_802082D4(c); // 80204D9C
  c->lr=0x80204DA4u; f_8021A728(c); // 80204DA0
  c->lr=0x80204DA8u; f_802082D4(c); // 80204DA4
  c->lr=0x80204DACu; f_8021A6A0(c); // 80204DA8
  c->r[3]=c->r[30]|c->r[30]; // 80204DAC
  c->r[4]=0u+0x00000000u; // 80204DB0
  c->lr=0x80204DB8u; f_80208410(c); // 80204DB4
  c->r[3]=c->r[30]|c->r[30]; // 80204DB8
  c->r[4]=0u+0x00000003u; // 80204DBC
  c->r[5]=0u+0x00000000u; // 80204DC0
  c->lr=0x80204DC8u; f_8022F234(c); // 80204DC4
  c->r[3]=c->r[30]|c->r[30]; // 80204DC8
  c->r[4]=0u+0x00000003u; // 80204DCC
  c->lr=0x80204DD4u; f_80230728(c); // 80204DD0
  c->r[3]=c->r[30]|c->r[30]; // 80204DD4
  c->r[4]=0u+0x00000003u; // 80204DD8
  c->lr=0x80204DE0u; f_802307F8(c); // 80204DDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204DE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80204DE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204DE8
  c->lr=c->r[0]; // 80204DEC
  c->r[1]=c->r[1]+0x00000010u; // 80204DF0
  return; // 80204DF4
}

// fn_80204DF8
void f_80204DF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204DF8
  c->r[0]=c->lr; // 80204DFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80204E00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80204E04
  c->r[31]=R32(c->r[3]+0x00000D08u); // 80204E08
  c->r[3]=0u+0x00000001u; // 80204E0C
  c->r[4]=0u+0x80480000u; // 80204E10
  c->r[4]=c->r[4]+0xFFFF8B18u; // 80204E14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204E18
  c->lr=0x80204E20u; f_803D3760(c); // 80204E1C
  c->lr=0x80204E24u; f_802082D4(c); // 80204E20
  c->lr=0x80204E28u; f_8021ADBC(c); // 80204E24
  W32(c->r[31]+0x00000708u,c->r[3]); // 80204E28
  c->r[0]=0u+0x00000000u; // 80204E2C
  W32(c->r[31]+0x00000E54u,c->r[0]); // 80204E30
  c->r[0]=0u+0x0000000Du; // 80204E34
  W32(c->r[31]+0x00000010u,c->r[0]); // 80204E38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80204E3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80204E40
  c->lr=c->r[0]; // 80204E44
  c->r[1]=c->r[1]+0x00000010u; // 80204E48
  return; // 80204E4C
}

// fn_80204E50
void f_80204E50(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D08u); // 80204E50
  c->r[0]=0u+0x00000000u; // 80204E54
  W32(c->r[3]+0x00000E54u,c->r[0]); // 80204E58
  W32(c->r[3]+0x00000014u,c->r[0]); // 80204E5C
  c->r[0]=0u+0x00000004u; // 80204E60
  W32(c->r[3]+0x00000010u,c->r[0]); // 80204E64
  return; // 80204E68
}

// fn_80204E6C
void f_80204E6C(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000D08u); // 80204E6C
  c->r[3]=R32(c->r[4]+0x00000E10u); // 80204E70
  c->r[3]=R32(c->r[3]+0x00000004u); // 80204E74
  c->r[0]=R32(c->r[4]+0x00000700u); // 80204E78
  cmpu(c,0,c->r[3],c->r[0]); // 80204E7C
  if (!crb(c,2)) { goto L_80204EA0; } // 80204E80
  c->r[0]=0u+0x00000000u; // 80204E84
  W32(c->r[3]+0x00000010u,c->r[0]); // 80204E88
  c->r[0]=0u+0x00000001u; // 80204E8C
  c->r[3]=R32(c->r[4]+0x00000E10u); // 80204E90
  c->r[3]=R32(c->r[3]+0x00000008u); // 80204E94
  W32(c->r[3]+0x00000010u,c->r[0]); // 80204E98
  goto L_80204EB8; // 80204E9C
L_80204EA0:;
  c->r[0]=0u+0x00000001u; // 80204EA0
  W32(c->r[3]+0x00000010u,c->r[0]); // 80204EA4
  c->r[0]=0u+0x00000000u; // 80204EA8
  c->r[3]=R32(c->r[4]+0x00000E10u); // 80204EAC
  c->r[3]=R32(c->r[3]+0x00000008u); // 80204EB0
  W32(c->r[3]+0x00000010u,c->r[0]); // 80204EB4
L_80204EB8:;
  c->r[0]=0u+0x00000000u; // 80204EB8
  W32(c->r[4]+0x00000E54u,c->r[0]); // 80204EBC
  W32(c->r[4]+0x00000014u,c->r[0]); // 80204EC0
  c->r[0]=0u+0x00000005u; // 80204EC4
  W32(c->r[4]+0x00000010u,c->r[0]); // 80204EC8
  return; // 80204ECC
}

// fn_80204ED0
void f_80204ED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80204ED0
  c->r[0]=c->lr; // 80204ED4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80204ED8
  c->r[11]=c->r[1]+0x00000030u; // 80204EDC
  c->lr=0x80204EE4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80204EE0
  c->r[24]=c->r[3]|c->r[3]; // 80204EE4
  c->r[30]=R32(c->r[3]+0x00000D08u); // 80204EE8
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80204EEC
  c->lr=0x80204EF4u; f_801EF3D4(c); // 80204EF0
  c->r[25]=c->r[3]|c->r[3]; // 80204EF4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80204EF8
  c->r[0]=c->r[0]|0x00000002u; // 80204EFC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80204F00
  c->lr=0x80204F08u; f_802082D4(c); // 80204F04
  c->r[4]=0u+0x00000000u; // 80204F08
  c->lr=0x80204F10u; f_8021AD50(c); // 80204F0C
  c->r[4]=R32(c->r[30]+0x00000E10u); // 80204F10
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000020u); // 80204F14
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000022u); // 80204F18
  c->r[27]=c->r[3]+c->r[0]; // 80204F1C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000024u); // 80204F20
  c->r[27]=c->r[27]+c->r[0]; // 80204F24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000026u); // 80204F28
  c->r[27]=c->r[27]+c->r[0]; // 80204F2C
  c->r[0]=R32(c->r[4]+0x00000034u); // 80204F30
  cmpu(c,0,c->r[0],0x0000000Bu); // 80204F34
  if (crb(c,1)) { goto L_80204FD0; } // 80204F38
  c->r[3]=0u+0x80480000u; // 80204F3C
  c->r[3]=c->r[3]+0xFFFF8CE0u; // 80204F40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80204F44
  c->r[3]=R32(c->r[3]+c->r[0]); // 80204F48
  c->ctr=c->r[3]; // 80204F4C
  if (true) { switch (c->ctr) { case 0x80204F54u: goto L_80204F54; case 0x80204FB0u: goto L_80204FB0; case 0x80204FB8u: goto L_80204FB8; case 0x80204FCCu: goto L_80204FCC; case 0x80204FD0u: goto L_80204FD0; case 0x8020511Cu: goto L_8020511C; case 0x80205178u: goto L_80205178; case 0x802051D0u: goto L_802051D0; case 0x8020520Cu: goto L_8020520C; case 0x80205230u: goto L_80205230; case 0x8020524Cu: goto L_8020524C; case 0x80205268u: goto L_80205268; case 0x80205294u: goto L_80205294; case 0x802052F8u: goto L_802052F8; case 0x80205300u: goto L_80205300; case 0x80205308u: goto L_80205308; case 0x80205310u: goto L_80205310; case 0x80205358u: goto L_80205358; case 0x80205360u: goto L_80205360; case 0x80205368u: goto L_80205368; case 0x80205370u: goto L_80205370; case 0x80205378u: goto L_80205378; case 0x80205380u: goto L_80205380; case 0x80205388u: goto L_80205388; case 0x80205390u: goto L_80205390; case 0x802053ACu: goto L_802053AC; case 0x802053B4u: goto L_802053B4; case 0x802053BCu: goto L_802053BC; case 0x802053C4u: goto L_802053C4; case 0x802053CCu: goto L_802053CC; case 0x802053D0u: goto L_802053D0; default: break; } dispatch(c,c->ctr); return; } // 80204F50
L_80204F54:;
  c->r[3]=0u+0x00000001u; // 80204F54
  c->r[4]=0u+0x80480000u; // 80204F58
  c->r[4]=c->r[4]+0xFFFF8B38u; // 80204F5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80204F60
  c->lr=0x80204F68u; f_803D3760(c); // 80204F64
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80204F68
  c->r[22]=R32(c->r[3]+0x00000030u); // 80204F6C
  c->r[0]=R32(c->r[22]+0x00000000u); // 80204F70
  c->r[0]=rotl(c->r[0],0)&0x00000060u; // 80204F74
  cmps(c,0,(int32_t)c->r[0],0); // 80204F78
  if (crb(c,2)) { goto L_80204F88; } // 80204F7C
  c->r[29]=R32(c->r[3]+0x00000004u); // 80204F80
  goto L_80204F8C; // 80204F84
L_80204F88:;
  c->r[29]=R32(c->r[3]+0x00000008u); // 80204F88
L_80204F8C:;
  c->lr=0x80204F90u; f_802082D4(c); // 80204F8C
  c->r[4]=c->r[29]+0x00000008u; // 80204F90
  c->r[5]=c->r[22]|c->r[22]; // 80204F94
  c->lr=0x80204F9Cu; f_8021AF30(c); // 80204F98
  c->lr=0x80204FA0u; f_802082D4(c); // 80204F9C
  c->r[4]=c->r[29]+0x00000004u; // 80204FA0
  c->r[5]=c->r[29]+0x00000008u; // 80204FA4
  c->lr=0x80204FACu; f_8021AF30(c); // 80204FA8
  goto L_80204FD0; // 80204FAC
L_80204FB0:;
  c->r[29]=R32(c->r[4]+0x00000004u); // 80204FB0
  goto L_80204FD0; // 80204FB4
L_80204FB8:;
  c->r[29]=R32(c->r[4]+0x00000004u); // 80204FB8
  c->r[0]=0u+0x00000000u; // 80204FBC
  W32(c->r[29]+0x00000004u,c->r[0]); // 80204FC0
  W32(c->r[29]+0x00000008u,c->r[0]); // 80204FC4
  goto L_80204FD0; // 80204FC8
L_80204FCC:;
  c->r[29]=R32(c->r[4]+0x00000008u); // 80204FCC
L_80204FD0:;
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80204FD0
  c->r[0]=R32(c->r[3]+0x00000034u); // 80204FD4
  cmps(c,0,(int32_t)c->r[0],10); // 80204FD8
  if (crb(c,2)) { goto L_80204FF0; } // 80204FDC
  if (!crb(c,0)) { goto L_802050F4; } // 80204FE0
  cmps(c,0,(int32_t)c->r[0],7); // 80204FE4
  if (crb(c,2)) { goto L_80204FF0; } // 80204FE8
  goto L_802050F4; // 80204FEC
L_80204FF0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80204FF0
  c->r[26]=c->r[3]+0x0000010Cu; // 80204FF4
  c->r[28]=0u+0x00000000u; // 80204FF8
  c->r[31]=0u+0x00000000u; // 80204FFC
  c->r[23]=0u+0x00000000u; // 80205000
  c->r[22]=0u+0x80000000u; // 80205004
L_80205008:;
  c->r[0]=R32(c->r[30]+0x00000E10u); // 80205008
  c->r[3]=c->r[0]+c->r[31]; // 8020500C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000020u); // 80205010
  c->r[0]=R16(c->r[26]+0x00000000u); // 80205014
  c->r[0]=addc(c,~c->r[0],0x0000000Au,1); // 80205018
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 8020501C
  if (!crb(c,0)) { goto L_802050E4; } // 80205020
  c->r[6]=c->r[3]-c->r[0]; // 80205024
  c->r[5]=0u+0x00000000u; // 80205028
  cmps(c,1,(int32_t)c->r[6],0); // 8020502C
  if (!crb(c,5)) { goto L_802050CC; } // 80205030
  c->r[3]=c->r[6]+0xFFFFFFF8u; // 80205034
  cmps(c,0,(int32_t)c->r[6],8); // 80205038
  if (!crb(c,1)) { goto L_802050A4; } // 8020503C
  c->r[4]=0u+0x00000000u; // 80205040
  if (crb(c,4)) { goto L_80205058; } // 80205044
  c->r[0]=c->r[22]+0xFFFFFFFEu; // 80205048
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8020504C
  if (crb(c,1)) { goto L_80205058; } // 80205050
  c->r[4]=0u+0x00000001u; // 80205054
L_80205058:;
  cmps(c,0,(int32_t)c->r[4],0); // 80205058
  if (crb(c,2)) { goto L_802050A4; } // 8020505C
  c->r[4]=c->r[26]|c->r[26]; // 80205060
  c->r[0]=c->r[3]+0x00000007u; // 80205064
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80205068
  c->ctr=c->r[0]; // 8020506C
  cmps(c,0,(int32_t)c->r[3],0); // 80205070
  if (!crb(c,1)) { goto L_802050A4; } // 80205074
L_80205078:;
  W32(c->r[4]+0x0000000Cu,c->r[23]); // 80205078
  W32(c->r[4]+0x00000010u,c->r[23]); // 8020507C
  W32(c->r[4]+0x00000014u,c->r[23]); // 80205080
  W32(c->r[4]+0x00000018u,c->r[23]); // 80205084
  W32(c->r[4]+0x0000001Cu,c->r[23]); // 80205088
  W32(c->r[4]+0x00000020u,c->r[23]); // 8020508C
  W32(c->r[4]+0x00000024u,c->r[23]); // 80205090
  W32(c->r[4]+0x00000028u,c->r[23]); // 80205094
  c->r[4]=c->r[4]+0x00000020u; // 80205098
  c->r[5]=c->r[5]+0x00000008u; // 8020509C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80205078; } // 802050A0
L_802050A4:;
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802050A4
  c->r[3]=c->r[26]+c->r[0]; // 802050A8
  c->r[0]=c->r[6]-c->r[5]; // 802050AC
  c->ctr=c->r[0]; // 802050B0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[6]); // 802050B4
  if (!crb(c,0)) { goto L_802050CC; } // 802050B8
L_802050BC:;
  W32(c->r[3]+0x0000000Cu,c->r[23]); // 802050BC
  c->r[3]=c->r[3]+0x00000004u; // 802050C0
  c->r[5]=c->r[5]+0x00000001u; // 802050C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802050BC; } // 802050C8
L_802050CC:;
  c->lr=0x802050D0u; f_802082D4(c); // 802050CC
  c->r[4]=c->r[26]|c->r[26]; // 802050D0
  c->lr=0x802050D8u; f_8021A87C(c); // 802050D4
  c->lr=0x802050DCu; f_802082D4(c); // 802050D8
  c->r[4]=c->r[26]|c->r[26]; // 802050DC
  c->lr=0x802050E4u; f_8021A9FC(c); // 802050E0
L_802050E4:;
  c->r[31]=c->r[31]+0x00000002u; // 802050E4
  c->r[28]=c->r[28]+0x00000001u; // 802050E8
  cmps(c,0,(int32_t)c->r[28],4); // 802050EC
  if (crb(c,0)) { IRQCHK(c); goto L_80205008; } // 802050F0
L_802050F4:;
  c->r[22]=R32(c->r[30]+0x00000E10u); // 802050F4
  c->r[0]=R32(c->r[22]+0x00000034u); // 802050F8
  cmpu(c,0,c->r[0],0x0000000Bu); // 802050FC
  if (crb(c,1)) { goto L_80205294; } // 80205100
  c->r[3]=0u+0x80480000u; // 80205104
  c->r[3]=c->r[3]+0xFFFF8CB0u; // 80205108
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8020510C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80205110
  c->ctr=c->r[3]; // 80205114
  if (true) { switch (c->ctr) { case 0x80204F54u: goto L_80204F54; case 0x80204FB0u: goto L_80204FB0; case 0x80204FB8u: goto L_80204FB8; case 0x80204FCCu: goto L_80204FCC; case 0x80204FD0u: goto L_80204FD0; case 0x8020511Cu: goto L_8020511C; case 0x80205178u: goto L_80205178; case 0x802051D0u: goto L_802051D0; case 0x8020520Cu: goto L_8020520C; case 0x80205230u: goto L_80205230; case 0x8020524Cu: goto L_8020524C; case 0x80205268u: goto L_80205268; case 0x80205294u: goto L_80205294; case 0x802052F8u: goto L_802052F8; case 0x80205300u: goto L_80205300; case 0x80205308u: goto L_80205308; case 0x80205310u: goto L_80205310; case 0x80205358u: goto L_80205358; case 0x80205360u: goto L_80205360; case 0x80205368u: goto L_80205368; case 0x80205370u: goto L_80205370; case 0x80205378u: goto L_80205378; case 0x80205380u: goto L_80205380; case 0x80205388u: goto L_80205388; case 0x80205390u: goto L_80205390; case 0x802053ACu: goto L_802053AC; case 0x802053B4u: goto L_802053B4; case 0x802053BCu: goto L_802053BC; case 0x802053C4u: goto L_802053C4; case 0x802053CCu: goto L_802053CC; case 0x802053D0u: goto L_802053D0; default: break; } dispatch(c,c->ctr); return; } // 80205118
L_8020511C:;
  c->lr=0x80205120u; f_802082D4(c); // 8020511C
  c->r[4]=R32(c->r[22]+0x00000004u); // 80205120
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[22]+0x0000001Eu); // 80205124
  c->r[6]=0u+0x00000001u; // 80205128
  c->lr=0x80205130u; f_8021A010(c); // 8020512C
  c->r[3]=c->r[25]|c->r[25]; // 80205130
  c->r[4]=R32(c->r[30]+0x00000E10u); // 80205134
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Eu); // 80205138
  c->r[5]=0u+0x00000000u; // 8020513C
  c->lr=0x80205144u; f_8022EDC8(c); // 80205140
  c->r[3]=R32(c->r[30]+0x00000E10u); // 80205144
  c->r[5]=R32(c->r[3]+0x00000004u); // 80205148
  c->r[3]=c->r[25]|c->r[25]; // 8020514C
  c->r[4]=R32(c->r[5]+0x00000010u); // 80205150
  c->r[4]=c->r[4]+0x00000001u; // 80205154
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000038u); // 80205158
  c->lr=0x80205160u; f_8022ECF4(c); // 8020515C
  c->r[3]=0u+0x00000001u; // 80205160
  c->r[4]=0u+0x80480000u; // 80205164
  c->r[4]=c->r[4]+0xFFFF8B50u; // 80205168
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020516C
  c->lr=0x80205174u; f_803D3760(c); // 80205170
  goto L_80205294; // 80205174
L_80205178:;
  c->lr=0x8020517Cu; f_802082D4(c); // 80205178
  c->r[4]=R32(c->r[22]+0x00000004u); // 8020517C
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[22]+0x0000001Eu); // 80205180
  c->lr=0x80205188u; f_8021A37C(c); // 80205184
  c->r[3]=c->r[25]|c->r[25]; // 80205188
  c->r[4]=R32(c->r[30]+0x00000E10u); // 8020518C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Eu); // 80205190
  c->r[5]=0u+0x00000001u; // 80205194
  c->lr=0x8020519Cu; f_8022EDC8(c); // 80205198
  c->r[3]=R32(c->r[30]+0x00000E10u); // 8020519C
  c->r[5]=R32(c->r[3]+0x00000004u); // 802051A0
  c->r[3]=c->r[25]|c->r[25]; // 802051A4
  c->r[4]=R32(c->r[5]+0x00000010u); // 802051A8
  c->r[4]=c->r[4]+0x00000001u; // 802051AC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000038u); // 802051B0
  c->lr=0x802051B8u; f_8022ECF4(c); // 802051B4
  c->r[3]=0u+0x00000001u; // 802051B8
  c->r[4]=0u+0x80480000u; // 802051BC
  c->r[4]=c->r[4]+0xFFFF8B78u; // 802051C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802051C4
  c->lr=0x802051CCu; f_803D3760(c); // 802051C8
  goto L_80205294; // 802051CC
L_802051D0:;
  c->r[3]=R32(c->r[24]+0x00000D38u); // 802051D0
  c->lr=0x802051D8u; f_801EF7A8(c); // 802051D4
  c->r[4]=R32(c->r[22]+0x00000004u); // 802051D8
  c->r[4]=R32(c->r[4]+0x00000010u); // 802051DC
  c->r[5]=0u+0x00000009u; // 802051E0
  c->lr=0x802051E8u; f_8025C788(c); // 802051E4
  c->r[3]=c->r[25]|c->r[25]; // 802051E8
  c->r[4]=R32(c->r[29]+0x00000010u); // 802051EC
  c->lr=0x802051F4u; f_80230CC8(c); // 802051F0
  c->r[3]=0u+0x00000001u; // 802051F4
  c->r[4]=0u+0x80480000u; // 802051F8
  c->r[4]=c->r[4]+0xFFFF8B98u; // 802051FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205200
  c->lr=0x80205208u; f_803D3760(c); // 80205204
  goto L_80205294; // 80205208
L_8020520C:;
  c->lr=0x80205210u; f_802082D4(c); // 8020520C
  c->r[4]=c->r[29]|c->r[29]; // 80205210
  c->lr=0x80205218u; f_8021A3EC(c); // 80205214
  c->r[3]=0u+0x00000001u; // 80205218
  c->r[4]=0u+0x80480000u; // 8020521C
  c->r[4]=c->r[4]+0xFFFF8BD0u; // 80205220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205224
  c->lr=0x8020522Cu; f_803D3760(c); // 80205228
  goto L_80205294; // 8020522C
L_80205230:;
  c->r[3]=R32(c->r[24]+0x00000D38u); // 80205230
  c->lr=0x80205238u; f_801EF7A8(c); // 80205234
  c->r[4]=R32(c->r[22]+0x00000004u); // 80205238
  c->r[4]=R32(c->r[4]+0x00000010u); // 8020523C
  c->r[5]=0u+0x00000009u; // 80205240
  c->lr=0x80205248u; f_8025C788(c); // 80205244
  goto L_80205294; // 80205248
L_8020524C:;
  c->r[3]=R32(c->r[24]+0x00000D38u); // 8020524C
  c->lr=0x80205254u; f_801EF7A8(c); // 80205250
  c->r[4]=R32(c->r[22]+0x00000008u); // 80205254
  c->r[4]=R32(c->r[4]+0x00000010u); // 80205258
  c->r[5]=0u+0x00000009u; // 8020525C
  c->lr=0x80205264u; f_8025C788(c); // 80205260
  goto L_80205294; // 80205264
L_80205268:;
  c->r[3]=R32(c->r[24]+0x00000D38u); // 80205268
  c->lr=0x80205270u; f_801EF7A8(c); // 8020526C
  c->r[4]=R32(c->r[22]+0x00000008u); // 80205270
  c->r[4]=R32(c->r[4]+0x00000010u); // 80205274
  c->r[5]=0u+0x0000000Au; // 80205278
  c->lr=0x80205280u; f_8025C788(c); // 8020527C
  c->r[3]=0u+0x00000001u; // 80205280
  c->r[4]=0u+0x80480000u; // 80205284
  c->r[4]=c->r[4]+0xFFFF8BFCu; // 80205288
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020528C
  c->lr=0x80205294u; f_803D3760(c); // 80205290
L_80205294:;
  c->lr=0x80205298u; f_802082D4(c); // 80205294
  c->r[4]=c->r[29]|c->r[29]; // 80205298
  c->r[5]=0u+0x00000000u; // 8020529C
  c->r[6]=0u+0x00000001u; // 802052A0
  c->lr=0x802052A8u; f_8021AD54(c); // 802052A4
  c->lr=0x802052ACu; f_802082D4(c); // 802052A8
  c->r[4]=c->r[29]|c->r[29]; // 802052AC
  c->r[5]=0u+0x00000001u; // 802052B0
  c->r[6]=0u+0x00000001u; // 802052B4
  c->lr=0x802052BCu; f_8021AD54(c); // 802052B8
  c->r[0]=0u+0x00000000u; // 802052BC
  W32(c->r[30]+0x00000E54u,c->r[0]); // 802052C0
  W32(c->r[30]+0x00000014u,c->r[0]); // 802052C4
  c->r[0]=0u+0x00000008u; // 802052C8
  W32(c->r[30]+0x00000010u,c->r[0]); // 802052CC
  c->r[5]=R32(c->r[30]+0x00000E10u); // 802052D0
  c->r[7]=R32(c->r[5]+0x00000034u); // 802052D4
  cmpu(c,0,c->r[7],0x0000000Au); // 802052D8
  if (crb(c,1)) { goto L_802053D0; } // 802052DC
  c->r[3]=0u+0x80480000u; // 802052E0
  c->r[3]=c->r[3]+0xFFFF8C84u; // 802052E4
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 802052E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 802052EC
  c->ctr=c->r[3]; // 802052F0
  if (true) { switch (c->ctr) { case 0x80204F54u: goto L_80204F54; case 0x80204FB0u: goto L_80204FB0; case 0x80204FB8u: goto L_80204FB8; case 0x80204FCCu: goto L_80204FCC; case 0x80204FD0u: goto L_80204FD0; case 0x8020511Cu: goto L_8020511C; case 0x80205178u: goto L_80205178; case 0x802051D0u: goto L_802051D0; case 0x8020520Cu: goto L_8020520C; case 0x80205230u: goto L_80205230; case 0x8020524Cu: goto L_8020524C; case 0x80205268u: goto L_80205268; case 0x80205294u: goto L_80205294; case 0x802052F8u: goto L_802052F8; case 0x80205300u: goto L_80205300; case 0x80205308u: goto L_80205308; case 0x80205310u: goto L_80205310; case 0x80205358u: goto L_80205358; case 0x80205360u: goto L_80205360; case 0x80205368u: goto L_80205368; case 0x80205370u: goto L_80205370; case 0x80205378u: goto L_80205378; case 0x80205380u: goto L_80205380; case 0x80205388u: goto L_80205388; case 0x80205390u: goto L_80205390; case 0x802053ACu: goto L_802053AC; case 0x802053B4u: goto L_802053B4; case 0x802053BCu: goto L_802053BC; case 0x802053C4u: goto L_802053C4; case 0x802053CCu: goto L_802053CC; case 0x802053D0u: goto L_802053D0; default: break; } dispatch(c,c->ctr); return; } // 802052F4
L_802052F8:;
  c->r[30]=0u+0x00000000u; // 802052F8
  goto L_802053D0; // 802052FC
L_80205300:;
  c->r[30]=0u+0x00000001u; // 80205300
  goto L_802053D0; // 80205304
L_80205308:;
  c->r[30]=0u+0x0000000Fu; // 80205308
  goto L_802053D0; // 8020530C
L_80205310:;
  c->r[6]=0u+0x00000000u; // 80205310
  c->r[3]=0u+0x00000001u; // 80205314
  c->r[0]=0u+0x00000008u; // 80205318
  c->ctr=c->r[0]; // 8020531C
L_80205320:;
  c->r[4]=R32(c->r[5]+0x00000030u); // 80205320
  c->r[4]=R32(c->r[4]+0x00000000u); // 80205324
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[3]<<((c->r[6])&31)); // 80205328
  c->r[0]=c->r[4]&c->r[0]; // 8020532C
  cmps(c,0,(int32_t)c->r[0],0); // 80205330
  if (crb(c,2)) { goto L_802053A0; } // 80205334
  cmpu(c,0,c->r[6],0x00000007u); // 80205338
  if (crb(c,1)) { goto L_80205398; } // 8020533C
  c->r[3]=0u+0x80480000u; // 80205340
  c->r[3]=c->r[3]+0xFFFF8C64u; // 80205344
  c->r[0]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80205348
  c->r[3]=R32(c->r[3]+c->r[0]); // 8020534C
  c->ctr=c->r[3]; // 80205350
  if (true) { switch (c->ctr) { case 0x80204F54u: goto L_80204F54; case 0x80204FB0u: goto L_80204FB0; case 0x80204FB8u: goto L_80204FB8; case 0x80204FCCu: goto L_80204FCC; case 0x80204FD0u: goto L_80204FD0; case 0x8020511Cu: goto L_8020511C; case 0x80205178u: goto L_80205178; case 0x802051D0u: goto L_802051D0; case 0x8020520Cu: goto L_8020520C; case 0x80205230u: goto L_80205230; case 0x8020524Cu: goto L_8020524C; case 0x80205268u: goto L_80205268; case 0x80205294u: goto L_80205294; case 0x802052F8u: goto L_802052F8; case 0x80205300u: goto L_80205300; case 0x80205308u: goto L_80205308; case 0x80205310u: goto L_80205310; case 0x80205358u: goto L_80205358; case 0x80205360u: goto L_80205360; case 0x80205368u: goto L_80205368; case 0x80205370u: goto L_80205370; case 0x80205378u: goto L_80205378; case 0x80205380u: goto L_80205380; case 0x80205388u: goto L_80205388; case 0x80205390u: goto L_80205390; case 0x802053ACu: goto L_802053AC; case 0x802053B4u: goto L_802053B4; case 0x802053BCu: goto L_802053BC; case 0x802053C4u: goto L_802053C4; case 0x802053CCu: goto L_802053CC; case 0x802053D0u: goto L_802053D0; default: break; } dispatch(c,c->ctr); return; } // 80205354
L_80205358:;
  c->r[30]=0u+0x00000002u; // 80205358
  goto L_802053D0; // 8020535C
L_80205360:;
  c->r[30]=0u+0x00000003u; // 80205360
  goto L_802053D0; // 80205364
L_80205368:;
  c->r[30]=0u+0x00000004u; // 80205368
  goto L_802053D0; // 8020536C
L_80205370:;
  c->r[30]=0u+0x00000005u; // 80205370
  goto L_802053D0; // 80205374
L_80205378:;
  c->r[30]=0u+0x00000006u; // 80205378
  goto L_802053D0; // 8020537C
L_80205380:;
  c->r[30]=0u+0x00000007u; // 80205380
  goto L_802053D0; // 80205384
L_80205388:;
  c->r[30]=0u+0x00000008u; // 80205388
  goto L_802053D0; // 8020538C
L_80205390:;
  c->r[30]=0u+0x00000009u; // 80205390
  goto L_802053D0; // 80205394
L_80205398:;
  c->r[30]=0u+0x00000002u; // 80205398
  goto L_802053D0; // 8020539C
L_802053A0:;
  c->r[6]=c->r[6]+0x00000001u; // 802053A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80205320; } // 802053A4
  goto L_802053D0; // 802053A8
L_802053AC:;
  c->r[30]=0u+0x0000000Du; // 802053AC
  goto L_802053D0; // 802053B0
L_802053B4:;
  c->r[30]=0u+0x0000000Bu; // 802053B4
  goto L_802053D0; // 802053B8
L_802053BC:;
  c->r[30]=0u+0x0000000Cu; // 802053BC
  goto L_802053D0; // 802053C0
L_802053C4:;
  c->r[30]=0u+0x0000000Au; // 802053C4
  goto L_802053D0; // 802053C8
L_802053CC:;
  c->r[30]=0u+0x0000000Eu; // 802053CC
L_802053D0:;
  c->r[6]=0u+0x00000000u; // 802053D0
  cmps(c,0,(int32_t)c->r[7],3); // 802053D4
  if (crb(c,2)) { goto L_80205400; } // 802053D8
  if (!crb(c,0)) { goto L_802053EC; } // 802053DC
  cmps(c,0,(int32_t)c->r[7],1); // 802053E0
  if (crb(c,2)) { goto L_80205400; } // 802053E4
  goto L_8020540C; // 802053E8
L_802053EC:;
  cmps(c,0,(int32_t)c->r[7],11); // 802053EC
  if (!crb(c,0)) { goto L_8020540C; } // 802053F0
  cmps(c,0,(int32_t)c->r[7],6); // 802053F4
  if (!crb(c,0)) { goto L_80205408; } // 802053F8
  goto L_8020540C; // 802053FC
L_80205400:;
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000001Eu); // 80205400
  goto L_8020540C; // 80205404
L_80205408:;
  c->r[6]=c->r[27]|c->r[27]; // 80205408
L_8020540C:;
  c->r[3]=c->r[24]|c->r[24]; // 8020540C
  c->r[4]=R32(c->r[29]+0x00000010u); // 80205410
  c->r[5]=c->r[30]|c->r[30]; // 80205414
  c->lr=0x8020541Cu; f_8020586C(c); // 80205418
  c->r[3]=0u+0x00000001u; // 8020541C
  c->r[4]=0u+0x80480000u; // 80205420
  c->r[4]=c->r[4]+0xFFFF8C28u; // 80205424
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205428
  c->lr=0x80205430u; f_803D3760(c); // 8020542C
  c->r[11]=c->r[1]+0x00000030u; // 80205430
  c->lr=0x80205438u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80205434
  c->r[0]=R32(c->r[1]+0x00000034u); // 80205438
  c->lr=c->r[0]; // 8020543C
  c->r[1]=c->r[1]+0x00000030u; // 80205440
  return; // 80205444
}

// fn_80205448
void f_80205448(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205448
  c->r[0]=c->lr; // 8020544C
  W32(c->r[1]+0x00000124u,c->r[0]); // 80205450
  c->r[11]=c->r[1]+0x00000120u; // 80205454
  c->lr=0x8020545Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80205458
  c->r[26]=c->r[3]|c->r[3]; // 8020545C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80205460
  c->lr=0x80205468u; f_801EF3D4(c); // 80205464
  c->r[30]=c->r[3]|c->r[3]; // 80205468
  c->r[29]=R32(c->r[26]+0x00000D08u); // 8020546C
  c->r[28]=0u+0x00000000u; // 80205470
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000070Eu); // 80205474
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80205478
  c->r[31]=c->r[29]+c->r[0]; // 8020547C
  c->r[4]=R32(c->r[31]+0x00000714u); // 80205480
  c->r[4]=R32(c->r[4]+0x00000010u); // 80205484
  c->r[27]=c->r[4]+0x00000001u; // 80205488
  c->r[0]=R32(c->r[26]+0x00000068u); // 8020548C
  cmps(c,0,(int32_t)c->r[0],0); // 80205490
  if (crb(c,2)) { goto L_802054B0; } // 80205494
  c->r[4]=0u+0x00000000u; // 80205498
  c->r[5]=0u+0x00000000u; // 8020549C
  c->r[6]=0u+0xFFFFFFFFu; // 802054A0
  c->lr=0x802054A8u; f_8022F5EC(c); // 802054A4
  c->r[0]=0u+0x00000000u; // 802054A8
  W32(c->r[26]+0x00000068u,c->r[0]); // 802054AC
L_802054B0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000E46u); // 802054B0
  cmps(c,0,(int32_t)c->r[0],1); // 802054B4
  if (!crb(c,2)) { goto L_80205550; } // 802054B8
  c->r[3]=0u+0x00000001u; // 802054BC
  c->r[4]=0u+0x80480000u; // 802054C0
  c->r[4]=c->r[4]+0xFFFF8D10u; // 802054C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802054C8
  c->lr=0x802054D0u; f_803D3760(c); // 802054CC
  c->r[3]=0u+0x00000001u; // 802054D0
  c->r[4]=0u+0x80480000u; // 802054D4
  c->r[4]=c->r[4]+0xFFFF8D48u; // 802054D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802054DC
  c->lr=0x802054E4u; f_803D3760(c); // 802054E0
  c->r[3]=c->r[30]|c->r[30]; // 802054E4
  c->r[4]=0u+0x00000000u; // 802054E8
  c->lr=0x802054F0u; f_80208410(c); // 802054EC
  c->r[3]=c->r[30]|c->r[30]; // 802054F0
  c->r[4]=0u+0x00000003u; // 802054F4
  c->r[5]=0u+0x00000000u; // 802054F8
  c->lr=0x80205500u; f_8022F234(c); // 802054FC
  c->r[3]=c->r[30]|c->r[30]; // 80205500
  c->r[4]=0u+0x00000000u; // 80205504
  c->lr=0x8020550Cu; f_802304DC(c); // 80205508
  c->r[3]=c->r[30]|c->r[30]; // 8020550C
  c->r[4]=0u+0x00000003u; // 80205510
  c->lr=0x80205518u; f_80230728(c); // 80205514
  c->r[3]=c->r[30]|c->r[30]; // 80205518
  c->r[4]=0u+0x00000003u; // 8020551C
  c->lr=0x80205524u; f_802307F8(c); // 80205520
  c->r[3]=0u+0x00000001u; // 80205524
  c->r[4]=0u+0x80480000u; // 80205528
  c->r[4]=c->r[4]+0xFFFF8D68u; // 8020552C
  c->r[5]=R32(c->r[29]+0x00000014u); // 80205530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205534
  c->lr=0x8020553Cu; f_803D3760(c); // 80205538
  c->r[0]=0u+0x00000001u; // 8020553C
  W32(c->r[29]+0x00000014u,c->r[0]); // 80205540
  c->r[3]=c->r[26]|c->r[26]; // 80205544
  c->lr=0x8020554Cu; f_80204DF8(c); // 80205548
  goto L_80205760; // 8020554C
L_80205550:;
  c->r[3]=R32(c->r[29]+0x00000E10u); // 80205550
  c->r[0]=R32(c->r[3]+0x00000000u); // 80205554
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 80205558
  cmps(c,0,(int32_t)c->r[0],0); // 8020555C
  if (crb(c,2)) { goto L_80205598; } // 80205560
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80205564
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80205568
  cmps(c,0,(int32_t)c->r[0],0); // 8020556C
  if (!crb(c,2)) { goto L_80205598; } // 80205570
  c->r[3]=0u+0x00000001u; // 80205574
  c->r[4]=0u+0x80480000u; // 80205578
  c->r[4]=c->r[4]+0xFFFF8D90u; // 8020557C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205580
  c->lr=0x80205588u; f_803D3760(c); // 80205584
  c->r[3]=c->r[26]|c->r[26]; // 80205588
  c->lr=0x80205590u; f_80204ED0(c); // 8020558C
  c->r[28]=0u+0x00000001u; // 80205590
  goto L_8020574C; // 80205594
L_80205598:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000070Eu); // 80205598
  c->r[0]=c->r[3]+0x00000001u; // 8020559C
  W16(c->r[29]+0x0000070Eu,c->r[0]); // 802055A0
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 802055A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 802055A8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 802055AC
  c->r[3]=R32(c->r[29]+0x00000E14u); // 802055B0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802055B4
  cmps(c,0,(int32_t)c->r[0],0); // 802055B8
  if (!crb(c,2)) { goto L_8020563C; } // 802055BC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000E4Cu); // 802055C0
  c->r[0]=c->r[3]+0x00000001u; // 802055C4
  W16(c->r[29]+0x00000E4Cu,c->r[0]); // 802055C8
  c->lr=0x802055D0u; f_802082D4(c); // 802055CC
  c->lr=0x802055D4u; f_8021AD58(c); // 802055D0
  c->r[3]=0u+0x00000001u; // 802055D4
  c->r[4]=0u+0x80480000u; // 802055D8
  c->r[4]=c->r[4]+0xFFFF8DBCu; // 802055DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802055E0
  c->lr=0x802055E8u; f_803D3760(c); // 802055E4
  c->r[4]=R32(c->r[29]+0x00000E10u); // 802055E8
  c->r[0]=R32(c->r[4]+0x00000018u); // 802055EC
  cmps(c,0,(int32_t)c->r[0],0); // 802055F0
  if (!crb(c,2)) { goto L_8020561C; } // 802055F4
  c->r[3]=c->r[30]|c->r[30]; // 802055F8
  c->r[4]=R32(c->r[4]+0x00000004u); // 802055FC
  c->r[4]=R32(c->r[4]+0x00000010u); // 80205600
  c->r[4]=c->r[4]+0x00000001u; // 80205604
  c->r[5]=0u+0x00000000u; // 80205608
  c->r[6]=0u+0xFFFFFFFFu; // 8020560C
  c->lr=0x80205614u; f_8022F5EC(c); // 80205610
  c->r[0]=0u+0x00000000u; // 80205614
  W32(c->r[26]+0x00000068u,c->r[0]); // 80205618
L_8020561C:;
  c->r[3]=0u+0x00000001u; // 8020561C
  c->r[4]=0u+0x80480000u; // 80205620
  c->r[4]=c->r[4]+0xFFFF8DF8u; // 80205624
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205628
  c->lr=0x80205630u; f_803D3760(c); // 8020562C
  c->r[3]=c->r[26]|c->r[26]; // 80205630
  c->lr=0x80205638u; f_80204D64(c); // 80205634
  goto L_8020574C; // 80205638
L_8020563C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000070Eu); // 8020563C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80205640
  c->r[3]=c->r[29]+c->r[0]; // 80205644
  c->r[0]=c->r[3]+0x00000710u; // 80205648
  W32(c->r[29]+0x00000E10u,c->r[0]); // 8020564C
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000070Eu); // 80205650
  c->r[0]=c->r[3]+0x00000001u; // 80205654
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)56); // 80205658
  c->r[3]=c->r[29]+c->r[0]; // 8020565C
  c->r[0]=c->r[3]+0x00000710u; // 80205660
  W32(c->r[29]+0x00000E14u,c->r[0]); // 80205664
  c->r[3]=R32(c->r[29]+0x00000E10u); // 80205668
  c->r[0]=R32(c->r[3]+0x00000000u); // 8020566C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 80205670
  cmps(c,0,(int32_t)c->r[0],0); // 80205674
  if (crb(c,2)) { goto L_802056B8; } // 80205678
  c->r[3]=c->r[26]|c->r[26]; // 8020567C
  c->lr=0x80205684u; f_80204E50(c); // 80205680
  c->r[3]=0u+0x00000001u; // 80205684
  c->r[4]=0u+0x80480000u; // 80205688
  c->r[4]=c->r[4]+0xFFFF8E18u; // 8020568C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205690
  c->lr=0x80205698u; f_803D3760(c); // 80205694
  c->r[3]=c->r[30]|c->r[30]; // 80205698
  c->r[4]=c->r[27]|c->r[27]; // 8020569C
  c->r[5]=0u+0x00000001u; // 802056A0
  c->r[6]=0u+0x80480000u; // 802056A4
  c->r[6]=c->r[6]+0xFFFF8E30u; // 802056A8
  {uint32_t ea=c->r[2]+0xFFFF96D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802056AC
  c->lr=0x802056B4u; f_802303E8(c); // 802056B0
  goto L_8020574C; // 802056B4
L_802056B8:;
  c->r[3]=c->r[26]|c->r[26]; // 802056B8
  c->lr=0x802056C0u; f_80204E6C(c); // 802056BC
  c->r[3]=R32(c->r[29]+0x00000E10u); // 802056C0
  c->r[0]=R32(c->r[3]+0x00000000u); // 802056C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 802056C8
  cmps(c,0,(int32_t)c->r[0],0); // 802056CC
  if (crb(c,2)) { goto L_8020574C; } // 802056D0
  c->r[3]=0u+0x00000001u; // 802056D4
  c->r[4]=0u+0x80480000u; // 802056D8
  c->r[4]=c->r[4]+0xFFFF8E40u; // 802056DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802056E0
  c->lr=0x802056E8u; f_803D3760(c); // 802056E4
  c->r[4]=R32(c->r[31]+0x00000718u); // 802056E8
  c->r[3]=R32(c->r[4]+0x00000010u); // 802056EC
  c->r[29]=c->r[3]+0x00000001u; // 802056F0
  c->r[3]=R32(c->r[26]+0x00000D38u); // 802056F4
  c->r[4]=R32(c->r[4]+0x00000108u); // 802056F8
  c->r[4]=R16(c->r[4]+0x00000000u); // 802056FC
  c->lr=0x80205704u; f_801EF9E4(c); // 80205700
  c->r[27]=c->r[3]|c->r[3]; // 80205704
  c->r[3]=c->r[30]|c->r[30]; // 80205708
  c->r[4]=0u+0x00000009u; // 8020570C
  c->lr=0x80205714u; f_8022D8B0(c); // 80205710
  c->r[4]=c->r[3]|c->r[3]; // 80205714
  c->r[3]=c->r[1]+0x00000008u; // 80205718
  c->r[5]=R32(c->r[31]+0x00000718u); // 8020571C
  c->r[5]=c->r[5]+0x00000024u; // 80205720
  c->r[6]=c->r[27]|c->r[27]; // 80205724
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205728
  c->lr=0x80205730u; f_802E7CC4(c); // 8020572C
  c->r[3]=c->r[30]|c->r[30]; // 80205730
  c->r[4]=c->r[29]|c->r[29]; // 80205734
  c->r[5]=0u+0x00000001u; // 80205738
  c->r[6]=c->r[1]+0x00000008u; // 8020573C
  c->lr=0x80205744u; f_8022F558(c); // 80205740
  c->r[0]=0u+0x00000001u; // 80205744
  W32(c->r[26]+0x00000068u,c->r[0]); // 80205748
L_8020574C:;
  c->r[3]=0u+0x00000001u; // 8020574C
  c->r[4]=0u+0x80480000u; // 80205750
  c->r[4]=c->r[4]+0xFFFF8E68u; // 80205754
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205758
  c->lr=0x80205760u; f_803D3760(c); // 8020575C
L_80205760:;
  cmps(c,0,(int32_t)c->r[28],0); // 80205760
  if (!crb(c,2)) { goto L_8020577C; } // 80205764
  c->r[3]=0u+0x00000001u; // 80205768
  c->r[4]=0u+0x80480000u; // 8020576C
  c->r[4]=c->r[4]+0xFFFF8E90u; // 80205770
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205774
  c->lr=0x8020577Cu; f_803D3760(c); // 80205778
L_8020577C:;
  c->r[11]=c->r[1]+0x00000120u; // 8020577C
  c->lr=0x80205784u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80205780
  c->r[0]=R32(c->r[1]+0x00000124u); // 80205784
  c->lr=c->r[0]; // 80205788
  c->r[1]=c->r[1]+0x00000120u; // 8020578C
  return; // 80205790
}

// fn_80205794
void f_80205794(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D08u); // 80205794
  c->r[0]=0u+0x00000000u; // 80205798
  W32(c->r[3]+0x00000E54u,c->r[0]); // 8020579C
  W32(c->r[3]+0x00000014u,c->r[0]); // 802057A0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802057A4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 802057A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802057AC
  c->r[0]=0u+0x00000007u; // 802057B0
  W32(c->r[3]+0x00000010u,c->r[0]); // 802057B4
  return; // 802057B8
}

// fn_802057BC
void f_802057BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802057BC
  c->r[0]=c->lr; // 802057C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802057C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802057C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802057CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802057D0
  c->r[29]=c->r[3]|c->r[3]; // 802057D4
  c->r[31]=R32(c->r[3]+0x00000D08u); // 802057D8
  c->r[3]=R32(c->r[3]+0x00000D38u); // 802057DC
  c->lr=0x802057E4u; f_801EF3D4(c); // 802057E0
  c->r[30]=c->r[3]|c->r[3]; // 802057E4
  c->r[0]=0u+0xFFFFFFFFu; // 802057E8
  W32(c->r[29]+0x00000D60u,c->r[0]); // 802057EC
  W32(c->r[29]+0x00000D64u,c->r[0]); // 802057F0
  c->r[3]=R32(c->r[31]+0x00000700u); // 802057F4
  c->r[3]=c->r[3]+0x0000010Cu; // 802057F8
  c->r[4]=0u+0x00000000u; // 802057FC
  c->r[5]=0u+0x00000034u; // 80205800
  c->lr=0x80205808u; f_800060B8(c); // 80205804
  c->r[3]=R32(c->r[31]+0x00000704u); // 80205808
  c->r[3]=c->r[3]+0x0000010Cu; // 8020580C
  c->r[4]=0u+0x00000000u; // 80205810
  c->r[5]=0u+0x00000034u; // 80205814
  c->lr=0x8020581Cu; f_800060B8(c); // 80205818
  c->r[0]=0u+0x00000000u; // 8020581C
  W32(c->r[31]+0x00000E54u,c->r[0]); // 80205820
  W32(c->r[31]+0x00000010u,c->r[0]); // 80205824
  c->r[3]=c->r[29]|c->r[29]; // 80205828
  c->r[4]=0u+0x00000000u; // 8020582C
  c->lr=0x80205834u; f_802082BC(c); // 80205830
  c->r[3]=c->r[30]|c->r[30]; // 80205834
  c->lr=0x8020583Cu; f_8022E4BC(c); // 80205838
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020583C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80205840
  c->r[29]=R32(c->r[1]+0x00000014u); // 80205844
  c->r[0]=R32(c->r[1]+0x00000024u); // 80205848
  c->lr=c->r[0]; // 8020584C
  c->r[1]=c->r[1]+0x00000020u; // 80205850
  return; // 80205854
}

// fn_80205858
void f_80205858(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00000D08u); // 80205858
  c->r[3]=R32(c->r[4]+0x00000E54u); // 8020585C
  c->r[0]=c->r[3]+0x00000001u; // 80205860
  W32(c->r[4]+0x00000E54u,c->r[0]); // 80205864
  return; // 80205868
}

// fn_8020586C
void f_8020586C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020586C
  c->r[0]=c->lr; // 80205870
  W32(c->r[1]+0x00000124u,c->r[0]); // 80205874
  c->r[11]=c->r[1]+0x00000120u; // 80205878
  c->lr=0x80205880u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8020587C
  c->r[30]=c->r[3]|c->r[3]; // 80205880
  c->r[31]=c->r[4]|c->r[4]; // 80205884
  c->r[29]=c->r[5]|c->r[5]; // 80205888
  c->r[27]=c->r[6]|c->r[6]; // 8020588C
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80205890
  c->lr=0x80205898u; f_801EF3D4(c); // 80205894
  c->r[28]=c->r[3]|c->r[3]; // 80205898
  c->r[3]=R32(c->r[30]+0x00000D38u); // 8020589C
  c->r[4]=0u+0x0000000Cu; // 802058A0
  c->r[5]=c->r[29]+0x00000010u; // 802058A4
  c->lr=0x802058ACu; f_801EF42C(c); // 802058A8
  c->r[4]=c->r[3]|c->r[3]; // 802058AC
  c->r[5]=R32(c->r[30]+0x00000D08u); // 802058B0
  c->r[0]=R32(c->r[5]+0x0000008Cu); // 802058B4
  c->r[3]=c->r[31]-c->r[0]; // 802058B8
  c->r[0]=c->r[0]-c->r[31]; // 802058BC
  c->r[0]=c->r[3]|c->r[0]; // 802058C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802058C4
  cmps(c,0,(int32_t)c->r[29],13); // 802058C8
  if (!crb(c,0)) { goto L_802058E0; } // 802058CC
  cmps(c,0,(int32_t)c->r[29],10); // 802058D0
  if (crb(c,2)) { goto L_802058E8; } // 802058D4
  if (!crb(c,0)) { goto L_80205924; } // 802058D8
  goto L_8020595C; // 802058DC
L_802058E0:;
  cmps(c,0,(int32_t)c->r[29],15); // 802058E0
  if (!crb(c,0)) { goto L_8020595C; } // 802058E4
L_802058E8:;
  c->r[3]=c->r[1]+0x00000008u; // 802058E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 802058EC
  c->r[5]=c->r[5]+c->r[0]; // 802058F0
  c->r[5]=c->r[5]+0x000000A0u; // 802058F4
  c->r[6]=c->r[27]|c->r[27]; // 802058F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802058FC
  c->lr=0x80205904u; f_802E7CC4(c); // 80205900
  c->r[3]=c->r[28]|c->r[28]; // 80205904
  c->r[4]=c->r[31]+0x00000001u; // 80205908
  c->r[5]=0u+0x00000001u; // 8020590C
  c->r[6]=c->r[1]+0x00000008u; // 80205910
  c->lr=0x80205918u; f_8022F558(c); // 80205914
  c->r[0]=0u+0x00000001u; // 80205918
  W32(c->r[30]+0x00000068u,c->r[0]); // 8020591C
  goto L_802059C0; // 80205920
L_80205924:;
  c->r[3]=c->r[1]+0x00000008u; // 80205924
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 80205928
  c->r[5]=c->r[5]+c->r[0]; // 8020592C
  c->r[5]=c->r[5]+0x000000A0u; // 80205930
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205934
  c->lr=0x8020593Cu; f_802E7CC4(c); // 80205938
  c->r[3]=c->r[28]|c->r[28]; // 8020593C
  c->r[4]=c->r[31]+0x00000001u; // 80205940
  c->r[5]=0u+0x00000001u; // 80205944
  c->r[6]=c->r[1]+0x00000008u; // 80205948
  c->lr=0x80205950u; f_8022F558(c); // 8020594C
  c->r[0]=0u+0x00000001u; // 80205950
  W32(c->r[30]+0x00000068u,c->r[0]); // 80205954
  goto L_802059C0; // 80205958
L_8020595C:;
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 8020595C
  c->r[3]=c->r[1]+0x00000008u; // 80205960
  c->r[5]=c->r[5]+c->r[29]; // 80205964
  c->r[5]=c->r[5]+0x000000A0u; // 80205968
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020596C
  c->lr=0x80205974u; f_802E7CC4(c); // 80205970
  c->r[3]=c->r[28]|c->r[28]; // 80205974
  c->r[4]=c->r[31]+0x00000001u; // 80205978
  c->r[5]=0u+0x00000001u; // 8020597C
  c->r[6]=c->r[1]+0x00000008u; // 80205980
  c->lr=0x80205988u; f_8022F558(c); // 80205984
  c->r[0]=0u+0x00000001u; // 80205988
  W32(c->r[30]+0x00000068u,c->r[0]); // 8020598C
  cmps(c,0,(int32_t)c->r[27],0); // 80205990
  if (!crb(c,1)) { goto L_802059C0; } // 80205994
  c->r[3]=c->r[28]|c->r[28]; // 80205998
  c->r[4]=c->r[27]|c->r[27]; // 8020599C
  c->r[5]=0u+0x00000000u; // 802059A0
  c->lr=0x802059A8u; f_8022EDC8(c); // 802059A4
  c->r[3]=c->r[28]|c->r[28]; // 802059A8
  c->r[4]=c->r[31]+0x00000001u; // 802059AC
  c->r[0]=R32(c->r[30]+0x00000D08u); // 802059B0
  c->r[5]=c->r[0]+c->r[29]; // 802059B4
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x000000B4u); // 802059B8
  c->lr=0x802059C0u; f_8022ECF4(c); // 802059BC
L_802059C0:;
  c->r[11]=c->r[1]+0x00000120u; // 802059C0
  c->lr=0x802059C8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802059C4
  c->r[0]=R32(c->r[1]+0x00000124u); // 802059C8
  c->lr=c->r[0]; // 802059CC
  c->r[1]=c->r[1]+0x00000120u; // 802059D0
  return; // 802059D4
}

// fn_802059D8
void f_802059D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802059D8
  c->r[0]=c->lr; // 802059DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802059E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802059E4
  c->r[31]=c->r[3]|c->r[3]; // 802059E8
  c->lr=0x802059F0u; f_802082B4(c); // 802059EC
  cmps(c,0,(int32_t)c->r[3],2); // 802059F0
  if (crb(c,2)) { goto L_80205AA8; } // 802059F4
  if (!crb(c,0)) { goto L_80205A0C; } // 802059F8
  cmps(c,0,(int32_t)c->r[3],0); // 802059FC
  if (crb(c,2)) { goto L_80205A1C; } // 80205A00
  if (!crb(c,0)) { goto L_80205A4C; } // 80205A04
  goto L_80205B94; // 80205A08
L_80205A0C:;
  cmps(c,0,(int32_t)c->r[3],4); // 80205A0C
  if (crb(c,2)) { goto L_80205B20; } // 80205A10
  if (!crb(c,0)) { goto L_80205B94; } // 80205A14
  goto L_80205AD0; // 80205A18
L_80205A1C:;
  c->r[3]=0u+0x00000008u; // 80205A1C
  c->r[4]=0u+0x80480000u; // 80205A20
  c->r[4]=c->r[4]+0xFFFF8EB8u; // 80205A24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205A28
  c->lr=0x80205A30u; f_803D3760(c); // 80205A2C
  c->r[0]=0u+0xFFFFFFFFu; // 80205A30
  W32(c->r[31]+0x00000D60u,c->r[0]); // 80205A34
  W32(c->r[31]+0x00000D64u,c->r[0]); // 80205A38
  c->r[3]=c->r[31]|c->r[31]; // 80205A3C
  c->r[4]=0u+0x00000001u; // 80205A40
  c->lr=0x80205A48u; f_802082A0(c); // 80205A44
  goto L_80205B94; // 80205A48
L_80205A4C:;
  c->r[0]=R32(c->r[31]+0x00000D60u); // 80205A4C
  cmps(c,0,(int32_t)c->r[0],0); // 80205A50
  if (crb(c,0)) { goto L_80205B94; } // 80205A54
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80205A58
  c->r[0]=R32(c->r[3]+0x00000000u); // 80205A5C
  cmps(c,0,(int32_t)c->r[0],2); // 80205A60
  if (crb(c,2)) { goto L_80205A98; } // 80205A64
  c->r[3]=0u+0x00000008u; // 80205A68
  c->r[4]=0u+0x80480000u; // 80205A6C
  c->r[4]=c->r[4]+0xFFFF8EDCu; // 80205A70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205A74
  c->lr=0x80205A7Cu; f_803D3760(c); // 80205A78
  c->r[3]=c->r[31]|c->r[31]; // 80205A7C
  c->r[4]=0u+0x00000019u; // 80205A80
  c->lr=0x80205A88u; f_801FB330(c); // 80205A84
  c->r[3]=c->r[31]|c->r[31]; // 80205A88
  c->r[4]=0u+0x00000064u; // 80205A8C
  c->lr=0x80205A94u; f_802082BC(c); // 80205A90
  goto L_80205B94; // 80205A94
L_80205A98:;
  c->r[3]=c->r[31]|c->r[31]; // 80205A98
  c->r[4]=0u+0x00000001u; // 80205A9C
  c->lr=0x80205AA4u; f_802082A0(c); // 80205AA0
  goto L_80205B94; // 80205AA4
L_80205AA8:;
  c->r[3]=0u+0x00000008u; // 80205AA8
  c->r[4]=0u+0x80480000u; // 80205AAC
  c->r[4]=c->r[4]+0xFFFF8F00u; // 80205AB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205AB4
  c->lr=0x80205ABCu; f_803D3760(c); // 80205AB8
  c->lr=0x80205AC0u; f_801E6540(c); // 80205ABC
  c->r[3]=c->r[31]|c->r[31]; // 80205AC0
  c->r[4]=0u+0x00000001u; // 80205AC4
  c->lr=0x80205ACCu; f_802082A0(c); // 80205AC8
  goto L_80205B94; // 80205ACC
L_80205AD0:;
  c->lr=0x80205AD4u; f_801E65AC(c); // 80205AD0
  cmps(c,0,(int32_t)c->r[3],0); // 80205AD4
  if (crb(c,2)) { goto L_80205B94; } // 80205AD8
  c->r[3]=0u+0x00000008u; // 80205ADC
  c->r[4]=0u+0x80480000u; // 80205AE0
  c->r[4]=c->r[4]+0xFFFF8F20u; // 80205AE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205AE8
  c->lr=0x80205AF0u; f_803D3760(c); // 80205AEC
  c->r[3]=c->r[31]+0x000005F0u; // 80205AF0
  c->r[4]=0u+0x80470000u; // 80205AF4
  c->r[4]=c->r[4]+0x00006AC4u; // 80205AF8
  c->lr=0x80205B00u; f_8020D79C(c); // 80205AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80205B00
  if (!crb(c,2)) { goto L_80205B14; } // 80205B04
  c->r[0]=0u+0x00000001u; // 80205B08
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80205B0C
  W32(c->r[3]+0x00000024u,c->r[0]); // 80205B10
L_80205B14:;
  c->r[3]=c->r[31]|c->r[31]; // 80205B14
  c->r[4]=0u+0x00000001u; // 80205B18
  c->lr=0x80205B20u; f_802082A0(c); // 80205B1C
L_80205B20:;
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80205B20
  c->r[0]=R32(c->r[3]+0x00000024u); // 80205B24
  cmps(c,0,(int32_t)c->r[0],0); // 80205B28
  if (!crb(c,2)) { goto L_80205B94; } // 80205B2C
  c->r[3]=c->r[31]+0x000005F0u; // 80205B30
  c->lr=0x80205B38u; f_80208328(c); // 80205B34
  cmps(c,0,(int32_t)c->r[3],0); // 80205B38
  if (!crb(c,2)) { goto L_80205B94; } // 80205B3C
  c->r[3]=c->r[31]+0x000005F0u; // 80205B40
  c->lr=0x80205B48u; f_8020D72C(c); // 80205B44
  cmps(c,0,(int32_t)c->r[3],0); // 80205B48
  if (!crb(c,2)) { goto L_80205B74; } // 80205B4C
  c->r[3]=0u+0x00000002u; // 80205B50
  c->r[4]=0u+0x80470000u; // 80205B54
  c->r[4]=c->r[4]+0x00006AD0u; // 80205B58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205B5C
  c->lr=0x80205B64u; f_803D3760(c); // 80205B60
  c->r[3]=c->r[31]|c->r[31]; // 80205B64
  c->r[4]=0u+0x0000001Eu; // 80205B68
  c->lr=0x80205B70u; f_801FB330(c); // 80205B6C
  goto L_80205B94; // 80205B70
L_80205B74:;
  c->r[3]=0u+0x00000008u; // 80205B74
  c->r[4]=0u+0x80480000u; // 80205B78
  c->r[4]=c->r[4]+0xFFFF8F38u; // 80205B7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205B80
  c->lr=0x80205B88u; f_803D3760(c); // 80205B84
  c->r[3]=c->r[31]|c->r[31]; // 80205B88
  c->r[4]=0u+0x00000019u; // 80205B8C
  c->lr=0x80205B94u; f_801FB330(c); // 80205B90
L_80205B94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80205B94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80205B98
  c->lr=c->r[0]; // 80205B9C
  c->r[1]=c->r[1]+0x00000010u; // 80205BA0
  return; // 80205BA4
}

// fn_80205BA8
void f_80205BA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80205BA8
  c->r[0]=c->lr; // 80205BAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80205BB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80205BB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80205BB8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80205BBC
  c->r[29]=c->r[3]|c->r[3]; // 80205BC0
  c->r[3]=R32(c->r[3]+0x00000D38u); // 80205BC4
  c->lr=0x80205BCCu; f_801EF3D4(c); // 80205BC8
  c->r[30]=c->r[3]|c->r[3]; // 80205BCC
  c->r[3]=c->r[29]|c->r[29]; // 80205BD0
  c->lr=0x80205BD8u; f_802082B4(c); // 80205BD4
  c->r[31]=c->r[3]|c->r[3]; // 80205BD8
  cmps(c,0,(int32_t)c->r[3],99); // 80205BDC
  if (crb(c,2)) { goto L_80205C20; } // 80205BE0
  if (!crb(c,0)) { goto L_80205C44; } // 80205BE4
  cmps(c,0,(int32_t)c->r[3],0); // 80205BE8
  if (crb(c,2)) { goto L_80205BF4; } // 80205BEC
  goto L_80205C44; // 80205BF0
L_80205BF4:;
  c->lr=0x80205BF8u; f_80361BF4(c); // 80205BF4
  c->r[5]=0u+0x80000000u; // 80205BF8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80205BFC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80205C00
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80205C04
  c->r[0]=0u+0x00000000u; // 80205C08
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 80205C0C
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80205C10
  W32(c->r[29]+0x0000004Cu,c->r[4]); // 80205C14
  W32(c->r[29]+0x00000048u,c->r[0]); // 80205C18
  goto L_80205C9C; // 80205C1C
L_80205C20:;
  c->r[3]=0u+0x00000001u; // 80205C20
  c->r[4]=0u+0x80480000u; // 80205C24
  c->r[4]=c->r[4]+0xFFFF8F5Cu; // 80205C28
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205C2C
  c->lr=0x80205C34u; f_803D3760(c); // 80205C30
  c->r[3]=c->r[29]|c->r[29]; // 80205C34
  c->r[4]=0u+0x0000001Eu; // 80205C38
  c->lr=0x80205C40u; f_801FB330(c); // 80205C3C
  goto L_80205C9C; // 80205C40
L_80205C44:;
  cmps(c,0,(int32_t)c->r[3],100); // 80205C44
  if (!crb(c,0)) { goto L_80205C9C; } // 80205C48
  c->r[3]=R32(c->r[29]+0x00000D08u); // 80205C4C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80205C50
  cmps(c,0,(int32_t)c->r[0],2); // 80205C54
  if (!crb(c,2)) { goto L_80205C9C; } // 80205C58
  c->lr=0x80205C60u; f_80361BF4(c); // 80205C5C
  c->r[0]=R32(c->r[29]+0x00000048u); // 80205C60
  c->r[6]=R32(c->r[29]+0x0000004Cu); // 80205C64
  c->r[0]=c->r[0]^0x80000000u; // 80205C68
  c->r[5]=c->r[3]^0x80000000u; // 80205C6C
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80205C70
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80205C74
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80205C78
  c->r[5]=0u-c->r[5]; // 80205C7C
  cmps(c,0,(int32_t)c->r[5],0); // 80205C80
  if (crb(c,2)) { goto L_80205C9C; } // 80205C84
  c->r[0]=0u+0x00000004u; // 80205C88
  W32(c->r[29]+0x00000D64u,c->r[0]); // 80205C8C
  c->r[3]=c->r[29]|c->r[29]; // 80205C90
  c->r[4]=0u+0x00000063u; // 80205C94
  c->lr=0x80205C9Cu; f_802082BC(c); // 80205C98
L_80205C9C:;
  cmps(c,0,(int32_t)c->r[31],3); // 80205C9C
  if (crb(c,2)) { goto L_80205E34; } // 80205CA0
  if (!crb(c,0)) { goto L_80205CC0; } // 80205CA4
  cmps(c,0,(int32_t)c->r[31],1); // 80205CA8
  if (crb(c,2)) { goto L_80205CF8; } // 80205CAC
  if (!crb(c,0)) { goto L_80205D58; } // 80205CB0
  cmps(c,0,(int32_t)c->r[31],0); // 80205CB4
  if (!crb(c,0)) { goto L_80205CD8; } // 80205CB8
  goto L_80206200; // 80205CBC
L_80205CC0:;
  cmps(c,0,(int32_t)c->r[31],100); // 80205CC0
  if (crb(c,2)) { goto L_802061E4; } // 80205CC4
  if (!crb(c,0)) { goto L_80206200; } // 80205CC8
  cmps(c,0,(int32_t)c->r[31],5); // 80205CCC
  if (!crb(c,0)) { goto L_80206200; } // 80205CD0
  goto L_802060F0; // 80205CD4
L_80205CD8:;
  c->r[0]=0u+0x00000000u; // 80205CD8
  W8(c->r[13]+0xFFFFBC94u,c->r[0]); // 80205CDC
  c->r[3]=c->r[13]+0xFFFFBC94u; // 80205CE0
  W8(c->r[3]+0x00000001u,c->r[0]); // 80205CE4
  c->r[3]=c->r[29]|c->r[29]; // 80205CE8
  c->r[4]=0u+0x00000001u; // 80205CEC
  c->lr=0x80205CF4u; f_802082A0(c); // 80205CF0
  goto L_8020625C; // 80205CF4
L_80205CF8:;
  c->r[3]=c->r[29]+0x000006D4u; // 80205CF8
  c->r[4]=R32(c->r[29]+0x00000D08u); // 80205CFC
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80205D00
  c->r[5]=0u+0x00010000u; // 80205D04
  c->r[5]=c->r[5]+0xFFFFEA60u; // 80205D08
  c->lr=0x80205D10u; f_8020834C(c); // 80205D0C
  c->r[0]=R32(c->r[29]+0x00000D64u); // 80205D10
  cmps(c,0,(int32_t)c->r[0],0); // 80205D14
  if (crb(c,0)) { goto L_80205D48; } // 80205D18
  if (crb(c,2)) { goto L_80205D24; } // 80205D1C
  goto L_80205D30; // 80205D20
L_80205D24:;
  c->r[0]=0u+0x00000001u; // 80205D24
  W8(c->r[13]+0xFFFFBC94u,c->r[0]); // 80205D28
  goto L_80205D38; // 80205D2C
L_80205D30:;
  c->r[0]=0u+0xFFFFFFFFu; // 80205D30
  W8(c->r[13]+0xFFFFBC94u,c->r[0]); // 80205D34
L_80205D38:;
  c->r[3]=c->r[29]|c->r[29]; // 80205D38
  c->r[4]=0u+0x00000001u; // 80205D3C
  c->lr=0x80205D44u; f_802082A0(c); // 80205D40
  goto L_8020625C; // 80205D44
L_80205D48:;
  c->r[3]=c->r[29]|c->r[29]; // 80205D48
  c->r[4]=0u+0x00000003u; // 80205D4C
  c->lr=0x80205D54u; f_802082BC(c); // 80205D50
  goto L_8020625C; // 80205D54
L_80205D58:;
  c->r[3]=c->r[29]+0x000006D4u; // 80205D58
  c->r[4]=R32(c->r[29]+0x00000D08u); // 80205D5C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80205D60
  c->lr=0x80205D68u; f_8020BF40(c); // 80205D64
  cmps(c,0,(int32_t)c->r[3],0); // 80205D68
  if (crb(c,2)) { goto L_80205DF0; } // 80205D6C
  c->r[3]=c->r[29]+0x000006D4u; // 80205D70
  c->r[4]=R32(c->r[29]+0x00000D08u); // 80205D74
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80205D78
  c->r[5]=c->r[13]+0xFFFFBC94u; // 80205D7C
  c->r[6]=0u+0x00000002u; // 80205D80
  c->r[7]=0u+0x00000000u; // 80205D84
  c->lr=0x80205D8Cu; f_8020BFE0(c); // 80205D88
  cmps(c,0,(int32_t)c->r[3],0); // 80205D8C
  if (crb(c,2)) { goto L_80205DE0; } // 80205D90
  c->r[3]=0u+0x00000001u; // 80205D94
  c->r[4]=0u+0x80480000u; // 80205D98
  c->r[4]=c->r[4]+0xFFFF8FA0u; // 80205D9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205DA0
  c->lr=0x80205DA8u; f_803D3760(c); // 80205DA4
  c->r[3]=0u+0x00000001u; // 80205DA8
  c->r[4]=0u+0x80480000u; // 80205DAC
  c->r[4]=c->r[4]+0xFFFF8FBCu; // 80205DB0
  c->r[5]=R8(c->r[13]+0xFFFFBC94u); // 80205DB4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80205DB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205DBC
  c->lr=0x80205DC4u; f_803D3760(c); // 80205DC0
  c->r[3]=0u+0x00000001u; // 80205DC4
  c->r[4]=0u+0x80480000u; // 80205DC8
  c->r[4]=c->r[4]+0xFFFF8FD4u; // 80205DCC
  c->r[5]=c->r[13]+0xFFFFBC94u; // 80205DD0
  c->r[5]=R8(c->r[5]+0x00000001u); // 80205DD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205DD8
  c->lr=0x80205DE0u; f_803D3760(c); // 80205DDC
L_80205DE0:;
  c->r[3]=c->r[29]|c->r[29]; // 80205DE0
  c->r[4]=0u+0x00000001u; // 80205DE4
  c->lr=0x80205DECu; f_802082A0(c); // 80205DE8
  goto L_8020625C; // 80205DEC
L_80205DF0:;
  c->r[3]=0u+0x00000002u; // 80205DF0
  c->r[4]=0u+0x80480000u; // 80205DF4
  c->r[4]=c->r[4]+0xFFFF8FF0u; // 80205DF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205DFC
  c->lr=0x80205E04u; f_803D3760(c); // 80205E00
  c->lr=0x80205E08u; f_80208B40(c); // 80205E04
  c->r[3]=R32(c->r[29]+0x00000D08u); // 80205E08
  c->r[3]=R8(c->r[3]+0x0000003Au); // 80205E0C
  c->lr=0x80205E14u; f_803D8328(c); // 80205E10
  c->r[30]=c->r[3]|c->r[3]; // 80205E14
  c->lr=0x80205E1Cu; f_80208B4C(c); // 80205E18
  cmps(c,0,(int32_t)c->r[30],0); // 80205E1C
  if (!crb(c,2)) { goto L_8020625C; } // 80205E20
  c->r[3]=c->r[29]|c->r[29]; // 80205E24
  c->r[4]=0u+0x0000001Eu; // 80205E28
  c->lr=0x80205E30u; f_801FB330(c); // 80205E2C
  goto L_8020625C; // 80205E30
L_80205E34:;
  c->lr=0x80205E38u; f_80208B40(c); // 80205E34
  c->r[3]=R32(c->r[29]+0x00000D08u); // 80205E38
  c->r[3]=R8(c->r[3]+0x0000003Au); // 80205E3C
  c->lr=0x80205E44u; f_803D8328(c); // 80205E40
  c->r[31]=c->r[3]|c->r[3]; // 80205E44
  c->lr=0x80205E4Cu; f_80208B4C(c); // 80205E48
  cmps(c,0,(int32_t)c->r[31],0); // 80205E4C
  if (!crb(c,2)) { goto L_80205F38; } // 80205E50
  c->r[3]=0u+0x00000002u; // 80205E54
  c->r[4]=0u+0x80480000u; // 80205E58
  c->r[4]=c->r[4]+0xFFFF9020u; // 80205E5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205E60
  c->lr=0x80205E68u; f_803D3760(c); // 80205E64
  c->r[0]=R8(c->r[13]+0xFFFFBC94u); // 80205E68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80205E6C
  cmps(c,0,(int32_t)c->r[0],-1); // 80205E70
  if (!crb(c,2)) { goto L_80205EA4; } // 80205E74
  c->r[3]=0u+0x00000002u; // 80205E78
  c->r[4]=0u+0x80480000u; // 80205E7C
  c->r[4]=c->r[4]+0xFFFF9058u; // 80205E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205E84
  c->lr=0x80205E8Cu; f_803D3760(c); // 80205E88
  c->r[0]=0u+0x00000004u; // 80205E8C
  W32(c->r[29]+0x00000D64u,c->r[0]); // 80205E90
  c->r[3]=c->r[29]|c->r[29]; // 80205E94
  c->r[4]=0u+0x00000064u; // 80205E98
  c->lr=0x80205EA0u; f_802082BC(c); // 80205E9C
  goto L_8020625C; // 80205EA0
L_80205EA4:;
  cmps(c,0,(int32_t)c->r[0],1); // 80205EA4
  if (!crb(c,2)) { goto L_80205ED8; } // 80205EA8
  c->r[3]=0u+0x00000002u; // 80205EAC
  c->r[4]=0u+0x80480000u; // 80205EB0
  c->r[4]=c->r[4]+0xFFFF9090u; // 80205EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205EB8
  c->lr=0x80205EC0u; f_803D3760(c); // 80205EBC
  c->r[0]=0u+0x00000004u; // 80205EC0
  W32(c->r[29]+0x00000D64u,c->r[0]); // 80205EC4
  c->r[3]=c->r[29]|c->r[29]; // 80205EC8
  c->r[4]=0u+0x00000064u; // 80205ECC
  c->lr=0x80205ED4u; f_802082BC(c); // 80205ED0
  goto L_8020625C; // 80205ED4
L_80205ED8:;
  c->r[3]=0u+0x00000002u; // 80205ED8
  c->r[4]=0u+0x80480000u; // 80205EDC
  c->r[4]=c->r[4]+0xFFFF90C0u; // 80205EE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205EE4
  c->lr=0x80205EECu; f_803D3760(c); // 80205EE8
  c->r[3]=c->r[29]+0x00000544u; // 80205EEC
  c->lr=0x80205EF4u; f_802082F4(c); // 80205EF0
  cmps(c,0,(int32_t)c->r[3],0); // 80205EF4
  if (crb(c,2)) { goto L_80205F28; } // 80205EF8
  c->r[3]=0u+0x00000002u; // 80205EFC
  c->r[4]=0u+0x80480000u; // 80205F00
  c->r[4]=c->r[4]+0xFFFF90F4u; // 80205F04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205F08
  c->lr=0x80205F10u; f_803D3760(c); // 80205F0C
  c->r[0]=0u+0x00000004u; // 80205F10
  W32(c->r[29]+0x00000D64u,c->r[0]); // 80205F14
  c->r[3]=c->r[29]|c->r[29]; // 80205F18
  c->r[4]=0u+0x00000064u; // 80205F1C
  c->lr=0x80205F24u; f_802082BC(c); // 80205F20
  goto L_8020625C; // 80205F24
L_80205F28:;
  c->r[3]=c->r[29]|c->r[29]; // 80205F28
  c->r[4]=0u+0x0000001Eu; // 80205F2C
  c->lr=0x80205F34u; f_801FB330(c); // 80205F30
  goto L_8020625C; // 80205F34
L_80205F38:;
  c->r[3]=c->r[29]+0x000006D4u; // 80205F38
  c->r[4]=R32(c->r[29]+0x00000D08u); // 80205F3C
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80205F40
  c->r[5]=c->r[1]+0x00000008u; // 80205F44
  c->r[6]=0u+0x00000000u; // 80205F48
  c->lr=0x80205F50u; f_8020BD84(c); // 80205F4C
  c->r[31]=c->r[3]|c->r[3]; // 80205F50
  cmps(c,0,(int32_t)c->r[3],0); // 80205F54
  if (crb(c,2)) { goto L_80206054; } // 80205F58
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80205F5C
  cmpu(c,0,c->r[0],0x00000002u); // 80205F60
  if (!crb(c,2)) { goto L_80206054; } // 80205F64
  c->r[3]=0u+0x00000001u; // 80205F68
  c->r[4]=0u+0x80480000u; // 80205F6C
  c->r[4]=c->r[4]+0xFFFF9128u; // 80205F70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205F74
  c->lr=0x80205F7Cu; f_803D3760(c); // 80205F78
  c->r[3]=c->r[13]+0xFFFFBC98u; // 80205F7C
  c->r[4]=0u+0x00000000u; // 80205F80
  c->r[5]=0u+0x00000002u; // 80205F84
  c->lr=0x80205F8Cu; f_800060B8(c); // 80205F88
  c->r[3]=c->r[13]+0xFFFFBC98u; // 80205F8C
  c->r[4]=c->r[31]|c->r[31]; // 80205F90
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 80205F94
  c->lr=0x80205F9Cu; f_802E53B8(c); // 80205F98
  c->r[3]=0u+0x00000001u; // 80205F9C
  c->r[4]=0u+0x80480000u; // 80205FA0
  c->r[4]=c->r[4]+0xFFFF9144u; // 80205FA4
  c->r[5]=R8(c->r[13]+0xFFFFBC98u); // 80205FA8
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80205FAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205FB0
  c->lr=0x80205FB8u; f_803D3760(c); // 80205FB4
  c->r[3]=0u+0x00000001u; // 80205FB8
  c->r[4]=0u+0x80480000u; // 80205FBC
  c->r[4]=c->r[4]+0xFFFF915Cu; // 80205FC0
  c->r[31]=c->r[13]+0xFFFFBC98u; // 80205FC4
  c->r[5]=R8(c->r[31]+0x00000001u); // 80205FC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80205FCC
  c->lr=0x80205FD4u; f_803D3760(c); // 80205FD0
  c->r[3]=c->r[30]|c->r[30]; // 80205FD4
  c->r[4]=R8(c->r[13]+0xFFFFBC98u); // 80205FD8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80205FDC
  c->lr=0x80205FE4u; f_80251C28(c); // 80205FE0
  c->r[4]=c->r[13]+0xFFFFBC94u; // 80205FE4
  c->r[0]=R8(c->r[4]+0x00000001u); // 80205FE8
  c->r[3]=c->r[0]|0x00000002u; // 80205FEC
  W8(c->r[4]+0x00000001u,c->r[3]); // 80205FF0
  c->r[0]=R8(c->r[31]+0x00000001u); // 80205FF4
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 80205FF8
  cmps(c,0,(int32_t)c->r[0],0); // 80205FFC
  if (crb(c,2)) { goto L_80206038; } // 80206000
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 80206004
  cmps(c,0,(int32_t)c->r[0],0); // 80206008
  if (!crb(c,2)) { goto L_80206024; } // 8020600C
  c->r[3]=0u+0x00000001u; // 80206010
  c->r[4]=0u+0x80480000u; // 80206014
  c->r[4]=c->r[4]+0xFFFF9174u; // 80206018
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020601C
  c->lr=0x80206024u; f_803D3760(c); // 80206020
L_80206024:;
  c->r[3]=c->r[13]+0xFFFFBC94u; // 80206024
  c->r[0]=R8(c->r[3]+0x00000001u); // 80206028
  c->r[0]=c->r[0]|0x00000001u; // 8020602C
  W8(c->r[3]+0x00000001u,c->r[0]); // 80206030
  goto L_80206054; // 80206034
L_80206038:;
  c->r[3]=0u+0x00000001u; // 80206038
  c->r[4]=0u+0x80480000u; // 8020603C
  c->r[4]=c->r[4]+0xFFFF9198u; // 80206040
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206044
  c->lr=0x8020604Cu; f_803D3760(c); // 80206048
  c->r[0]=0u+0x00000000u; // 8020604C
  W8(c->r[13]+0xFFFFBC94u,c->r[0]); // 80206050
L_80206054:;
  c->r[0]=R8(c->r[13]+0xFFFFBC94u); // 80206054
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80206058
  cmps(c,0,(int32_t)c->r[0],0); // 8020605C
  if (!crb(c,2)) { goto L_80206074; } // 80206060
  c->r[3]=c->r[29]|c->r[29]; // 80206064
  c->r[4]=0u+0x00000001u; // 80206068
  c->lr=0x80206070u; f_802082BC(c); // 8020606C
  goto L_80206080; // 80206070
L_80206074:;
  c->r[3]=c->r[29]|c->r[29]; // 80206074
  c->r[4]=0u+0x00000001u; // 80206078
  c->lr=0x80206080u; f_802082A0(c); // 8020607C
L_80206080:;
  c->r[3]=c->r[29]+0x000006D4u; // 80206080
  c->lr=0x80206088u; f_802083AC(c); // 80206084
  cmps(c,0,(int32_t)c->r[3],0); // 80206088
  if (crb(c,2)) { goto L_8020625C; } // 8020608C
  c->r[3]=c->r[29]+0x000006D4u; // 80206090
  c->lr=0x80206098u; f_802083A4(c); // 80206094
  cmps(c,0,(int32_t)c->r[3],0); // 80206098
  if (crb(c,2)) { goto L_802060B8; } // 8020609C
  c->r[3]=0u+0x00000001u; // 802060A0
  c->r[4]=0u+0x80480000u; // 802060A4
  c->r[4]=c->r[4]+0xFFFF91C0u; // 802060A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802060AC
  c->lr=0x802060B4u; f_803D3760(c); // 802060B0
  goto L_802060D8; // 802060B4
L_802060B8:;
  c->r[3]=c->r[29]+0x000006D4u; // 802060B8
  c->lr=0x802060C0u; f_8020839C(c); // 802060BC
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 802060C0
  c->r[3]=0u+0x00000001u; // 802060C4
  c->r[4]=0u+0x80480000u; // 802060C8
  c->r[4]=c->r[4]+0xFFFF91E0u; // 802060CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802060D0
  c->lr=0x802060D8u; f_803D3760(c); // 802060D4
L_802060D8:;
  c->r[0]=0u+0x00000004u; // 802060D8
  W32(c->r[29]+0x00000D64u,c->r[0]); // 802060DC
  c->r[3]=c->r[29]|c->r[29]; // 802060E0
  c->r[4]=0u+0x00000064u; // 802060E4
  c->lr=0x802060ECu; f_802082BC(c); // 802060E8
  goto L_8020625C; // 802060EC
L_802060F0:;
  c->r[0]=R8(c->r[13]+0xFFFFBC98u); // 802060F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802060F4
  cmps(c,0,(int32_t)c->r[0],0); // 802060F8
  if (!crb(c,2)) { goto L_80206110; } // 802060FC
  c->r[3]=c->r[29]|c->r[29]; // 80206100
  c->r[4]=0u+0x00000003u; // 80206104
  c->lr=0x8020610Cu; f_802082BC(c); // 80206108
  goto L_8020625C; // 8020610C
L_80206110:;
  c->r[30]=c->r[13]+0xFFFFBC98u; // 80206110
  c->r[0]=R8(c->r[30]+0x00000001u); // 80206114
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 80206118
  cmps(c,0,(int32_t)c->r[0],3); // 8020611C
  if (crb(c,2)) { goto L_8020616C; } // 80206120
  c->r[3]=0u+0x00000001u; // 80206124
  c->r[4]=0u+0x80480000u; // 80206128
  c->r[4]=c->r[4]+0xFFFF920Cu; // 8020612C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206130
  c->lr=0x80206138u; f_803D3760(c); // 80206134
  c->r[3]=0u+0x00000001u; // 80206138
  c->r[4]=0u+0x80480000u; // 8020613C
  c->r[4]=c->r[4]+0xFFFF8FD4u; // 80206140
  c->r[5]=c->r[13]+0xFFFFBC94u; // 80206144
  c->r[5]=R8(c->r[5]+0x00000001u); // 80206148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020614C
  c->lr=0x80206154u; f_803D3760(c); // 80206150
  c->r[3]=0u+0x00000001u; // 80206154
  c->r[4]=0u+0x80480000u; // 80206158
  c->r[4]=c->r[4]+0xFFFF915Cu; // 8020615C
  c->r[5]=R8(c->r[30]+0x00000001u); // 80206160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206164
  c->lr=0x8020616Cu; f_803D3760(c); // 80206168
L_8020616C:;
  c->r[3]=c->r[29]+0x000006D4u; // 8020616C
  c->r[4]=0u+0x00000000u; // 80206170
  c->lr=0x80206178u; f_80208394(c); // 80206174
  c->r[0]=R8(c->r[13]+0xFFFFBC98u); // 80206178
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8020617C
  cmps(c,0,(int32_t)c->r[0],-1); // 80206180
  if (!crb(c,2)) { goto L_802061A8; } // 80206184
  c->r[3]=0u+0x00000002u; // 80206188
  c->r[4]=0u+0x80480000u; // 8020618C
  c->r[4]=c->r[4]+0xFFFF9090u; // 80206190
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206194
  c->lr=0x8020619Cu; f_803D3760(c); // 80206198
  c->r[0]=0u+0x00000004u; // 8020619C
  W32(c->r[29]+0x00000D64u,c->r[0]); // 802061A0
  goto L_802061D4; // 802061A4
L_802061A8:;
  c->r[0]=R8(c->r[13]+0xFFFFBC94u); // 802061A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802061AC
  cmps(c,0,(int32_t)c->r[0],-1); // 802061B0
  if (!crb(c,2)) { goto L_802061D4; } // 802061B4
  c->r[3]=0u+0x00000002u; // 802061B8
  c->r[4]=0u+0x80480000u; // 802061BC
  c->r[4]=c->r[4]+0xFFFF9228u; // 802061C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802061C4
  c->lr=0x802061CCu; f_803D3760(c); // 802061C8
  c->r[0]=0u+0x00000004u; // 802061CC
  W32(c->r[29]+0x00000D64u,c->r[0]); // 802061D0
L_802061D4:;
  c->r[3]=c->r[29]|c->r[29]; // 802061D4
  c->r[4]=0u+0x00000001u; // 802061D8
  c->lr=0x802061E0u; f_802082A0(c); // 802061DC
  goto L_8020625C; // 802061E0
L_802061E4:;
  c->r[0]=R32(c->r[29]+0x00000D64u); // 802061E4
  cmps(c,0,(int32_t)c->r[0],0); // 802061E8
  if (crb(c,0)) { goto L_8020625C; } // 802061EC
  c->r[3]=c->r[29]|c->r[29]; // 802061F0
  c->r[4]=0u+0x00000001u; // 802061F4
  c->lr=0x802061FCu; f_802082A0(c); // 802061F8
  goto L_8020625C; // 802061FC
L_80206200:;
  c->r[3]=0u+0x00000008u; // 80206200
  c->r[4]=0u+0x80480000u; // 80206204
  c->r[4]=c->r[4]+0xFFFF925Cu; // 80206208
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020620C
  c->lr=0x80206214u; f_803D3760(c); // 80206210
  c->r[0]=0u+0x000003E7u; // 80206214
  W32(c->r[29]+0x00000D60u,c->r[0]); // 80206218
  c->r[3]=c->r[29]+0x000006D4u; // 8020621C
  c->r[4]=R32(c->r[29]+0x00000D08u); // 80206220
  c->r[4]=R8(c->r[4]+0x0000003Au); // 80206224
  c->r[5]=0u+0x00004650u; // 80206228
  c->lr=0x80206230u; f_8020834C(c); // 8020622C
  c->r[3]=c->r[13]+0xFFFFBC94u; // 80206230
  c->r[4]=0u+0x00000000u; // 80206234
  c->r[5]=0u+0x00000002u; // 80206238
  c->lr=0x80206240u; f_800060B8(c); // 8020623C
  c->r[3]=c->r[13]+0xFFFFBC98u; // 80206240
  c->r[4]=0u+0x00000000u; // 80206244
  c->r[5]=0u+0x00000002u; // 80206248
  c->lr=0x80206250u; f_800060B8(c); // 8020624C
  c->r[3]=c->r[29]|c->r[29]; // 80206250
  c->r[4]=0u+0x0000001Au; // 80206254
  c->lr=0x8020625Cu; f_801FB330(c); // 80206258
L_8020625C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8020625C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80206260
  c->r[29]=R32(c->r[1]+0x00000014u); // 80206264
  c->r[0]=R32(c->r[1]+0x00000024u); // 80206268
  c->lr=c->r[0]; // 8020626C
  c->r[1]=c->r[1]+0x00000020u; // 80206270
  return; // 80206274
}

// fn_80206278
void f_80206278(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206278
  c->r[0]=c->lr; // 8020627C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206284
  c->r[31]=c->r[3]|c->r[3]; // 80206288
  c->r[3]=0u+0x00000008u; // 8020628C
  c->r[4]=0u+0x80480000u; // 80206290
  c->r[4]=c->r[4]+0xFFFF9280u; // 80206294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206298
  c->lr=0x802062A0u; f_803D3760(c); // 8020629C
  c->r[0]=R32(c->r[31]+0x00000D64u); // 802062A0
  cmps(c,0,(int32_t)c->r[0],2); // 802062A4
  if (crb(c,2)) { goto L_80206340; } // 802062A8
  if (!crb(c,0)) { goto L_802062C0; } // 802062AC
  cmps(c,0,(int32_t)c->r[0],0); // 802062B0
  if (crb(c,2)) { goto L_802062D0; } // 802062B4
  if (!crb(c,0)) { goto L_80206330; } // 802062B8
  goto L_80206370; // 802062BC
L_802062C0:;
  cmps(c,0,(int32_t)c->r[0],4); // 802062C0
  if (crb(c,2)) { goto L_80206360; } // 802062C4
  if (!crb(c,0)) { goto L_80206370; } // 802062C8
  goto L_80206350; // 802062CC
L_802062D0:;
  c->r[3]=c->r[31]|c->r[31]; // 802062D0
  c->r[4]=0u+0x00000000u; // 802062D4
  c->lr=0x802062DCu; f_802082BC(c); // 802062D8
  c->r[3]=R32(c->r[31]+0x00000D08u); // 802062DC
  c->r[0]=R32(c->r[3]+0x00000000u); // 802062E0
  cmps(c,0,(int32_t)c->r[0],2); // 802062E4
  if (!crb(c,2)) { goto L_80206320; } // 802062E8
  c->r[3]=c->r[31]|c->r[31]; // 802062EC
  c->lr=0x802062F4u; f_801FB5C4(c); // 802062F0
  c->r[3]=0u+0x00000008u; // 802062F4
  c->r[4]=0u+0x80480000u; // 802062F8
  c->r[4]=c->r[4]+0xFFFF92A4u; // 802062FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206300
  c->lr=0x80206308u; f_803D3760(c); // 80206304
  c->r[0]=0u+0x00000001u; // 80206308
  W32(c->r[31]+0x00000D68u,c->r[0]); // 8020630C
  c->r[3]=c->r[31]|c->r[31]; // 80206310
  c->r[4]=0u+0x0000000Du; // 80206314
  c->lr=0x8020631Cu; f_801FB330(c); // 80206318
  goto L_8020637C; // 8020631C
L_80206320:;
  c->r[3]=c->r[31]|c->r[31]; // 80206320
  c->r[4]=0u+0x0000000Fu; // 80206324
  c->lr=0x8020632Cu; f_801FB330(c); // 80206328
  goto L_8020637C; // 8020632C
L_80206330:;
  c->r[3]=c->r[31]|c->r[31]; // 80206330
  c->r[4]=0u+0x00000020u; // 80206334
  c->lr=0x8020633Cu; f_801FB330(c); // 80206338
  goto L_8020637C; // 8020633C
L_80206340:;
  c->r[3]=c->r[31]|c->r[31]; // 80206340
  c->r[4]=0u+0x00000014u; // 80206344
  c->lr=0x8020634Cu; f_801FB330(c); // 80206348
  goto L_8020637C; // 8020634C
L_80206350:;
  c->r[3]=c->r[31]|c->r[31]; // 80206350
  c->r[4]=0u+0x00000000u; // 80206354
  c->lr=0x8020635Cu; f_801FB330(c); // 80206358
  goto L_8020637C; // 8020635C
L_80206360:;
  c->r[3]=c->r[31]|c->r[31]; // 80206360
  c->r[4]=0u+0x00000021u; // 80206364
  c->lr=0x8020636Cu; f_801FB330(c); // 80206368
  goto L_8020637C; // 8020636C
L_80206370:;
  c->r[3]=c->r[31]|c->r[31]; // 80206370
  c->r[4]=0u+0x0000001Eu; // 80206374
  c->lr=0x8020637Cu; f_801FB330(c); // 80206378
L_8020637C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020637C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206380
  c->lr=c->r[0]; // 80206384
  c->r[1]=c->r[1]+0x00000010u; // 80206388
  return; // 8020638C
}

// fn_80206390
void f_80206390(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206390
  c->r[0]=c->lr; // 80206394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8020639C
  c->r[31]=c->r[3]|c->r[3]; // 802063A0
  c->lr=0x802063A8u; f_802082B4(c); // 802063A4
  cmps(c,0,(int32_t)c->r[3],2); // 802063A8
  if (crb(c,2)) { goto L_802064A8; } // 802063AC
  if (!crb(c,0)) { goto L_802063C4; } // 802063B0
  cmps(c,0,(int32_t)c->r[3],0); // 802063B4
  if (crb(c,2)) { goto L_802063D4; } // 802063B8
  if (!crb(c,0)) { goto L_8020647C; } // 802063BC
  goto L_80206584; // 802063C0
L_802063C4:;
  cmps(c,0,(int32_t)c->r[3],4); // 802063C4
  if (crb(c,2)) { goto L_80206528; } // 802063C8
  if (!crb(c,0)) { goto L_80206584; } // 802063CC
  goto L_802064D4; // 802063D0
L_802063D4:;
  c->r[3]=c->r[31]|c->r[31]; // 802063D4
  c->lr=0x802063DCu; f_8020D00C(c); // 802063D8
  cmps(c,0,(int32_t)c->r[3],5000); // 802063DC
  if (!crb(c,1)) { goto L_802063F4; } // 802063E0
  c->r[3]=c->r[31]|c->r[31]; // 802063E4
  c->r[4]=0u+0x00000001u; // 802063E8
  c->lr=0x802063F0u; f_802082BC(c); // 802063EC
  goto L_802065D0; // 802063F0
L_802063F4:;
  c->r[3]=c->r[31]+0x000005F0u; // 802063F4
  c->lr=0x802063FCu; f_80208314(c); // 802063F8
  cmps(c,0,(int32_t)c->r[3],0); // 802063FC
  if (crb(c,2)) { goto L_80206448; } // 80206400
  c->r[3]=0u+0x00000002u; // 80206404
  c->r[4]=0u+0x80480000u; // 80206408
  c->r[4]=c->r[4]+0xFFFF92C0u; // 8020640C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206410
  c->lr=0x80206418u; f_803D3760(c); // 80206414
  c->r[3]=c->r[31]+0x000005F0u; // 80206418
  c->lr=0x80206420u; f_80208330(c); // 8020641C
  c->r[5]=c->r[3]|c->r[3]; // 80206420
  c->r[3]=0u+0x00000002u; // 80206424
  c->r[4]=0u+0x80480000u; // 80206428
  c->r[4]=c->r[4]+0xFFFF9300u; // 8020642C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206430
  c->lr=0x80206438u; f_803D3760(c); // 80206434
  c->r[3]=c->r[31]|c->r[31]; // 80206438
  c->r[4]=0u+0x00000022u; // 8020643C
  c->lr=0x80206444u; f_801FB330(c); // 80206440
  goto L_802065D0; // 80206444
L_80206448:;
  c->r[3]=c->r[31]+0x000005F0u; // 80206448
  c->lr=0x80206450u; f_8020D5BC(c); // 8020644C
  cmps(c,0,(int32_t)c->r[3],0); // 80206450
  if (crb(c,2)) { goto L_802065D0; } // 80206454
  c->r[3]=c->r[31]|c->r[31]; // 80206458
  c->r[4]=0u+0x00000001u; // 8020645C
  c->lr=0x80206464u; f_802082A0(c); // 80206460
  c->r[3]=0u+0x00000008u; // 80206464
  c->r[4]=0u+0x80480000u; // 80206468
  c->r[4]=c->r[4]+0xFFFF9310u; // 8020646C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206470
  c->lr=0x80206478u; f_803D3760(c); // 80206474
  goto L_802065D0; // 80206478
L_8020647C:;
  c->r[3]=c->r[31]+0x00000544u; // 8020647C
  c->lr=0x80206484u; f_80209DD0(c); // 80206480
  cmps(c,0,(int32_t)c->r[3],0); // 80206484
  if (crb(c,2)) { goto L_80206498; } // 80206488
  c->lr=0x80206490u; f_80208B40(c); // 8020648C
  c->lr=0x80206494u; f_803D773C(c); // 80206490
  c->lr=0x80206498u; f_80208B4C(c); // 80206494
L_80206498:;
  c->r[3]=c->r[31]|c->r[31]; // 80206498
  c->r[4]=0u+0x00000001u; // 8020649C
  c->lr=0x802064A4u; f_802082A0(c); // 802064A0
  goto L_802065D0; // 802064A4
L_802064A8:;
  c->r[3]=c->r[31]+0x00000544u; // 802064A8
  c->lr=0x802064B0u; f_80209DD0(c); // 802064AC
  c->r[3]=0u+0x00000008u; // 802064B0
  c->r[4]=0u+0x80480000u; // 802064B4
  c->r[4]=c->r[4]+0xFFFF9350u; // 802064B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802064BC
  c->lr=0x802064C4u; f_803D3760(c); // 802064C0
  c->r[3]=c->r[31]|c->r[31]; // 802064C4
  c->r[4]=0u+0x00000001u; // 802064C8
  c->lr=0x802064D0u; f_802082A0(c); // 802064CC
  goto L_802065D0; // 802064D0
L_802064D4:;
  c->r[3]=c->r[31]|c->r[31]; // 802064D4
  c->r[4]=0u+0x00000001u; // 802064D8
  c->lr=0x802064E0u; f_802082A0(c); // 802064DC
  c->r[3]=c->r[31]+0x00000544u; // 802064E0
  c->lr=0x802064E8u; f_80209E10(c); // 802064E4
  cmps(c,0,(int32_t)c->r[3],0); // 802064E8
  if (!crb(c,2)) { goto L_80206508; } // 802064EC
  c->r[3]=0u+0x00000008u; // 802064F0
  c->r[4]=0u+0x80480000u; // 802064F4
  c->r[4]=c->r[4]+0xFFFF938Cu; // 802064F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802064FC
  c->lr=0x80206504u; f_803D3760(c); // 80206500
  goto L_802065D0; // 80206504
L_80206508:;
  c->r[3]=c->r[31]+0x00000544u; // 80206508
  c->lr=0x80206510u; f_80209E40(c); // 8020650C
  c->r[3]=0u+0x00000008u; // 80206510
  c->r[4]=0u+0x80480000u; // 80206514
  c->r[4]=c->r[4]+0xFFFF93ACu; // 80206518
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020651C
  c->lr=0x80206524u; f_803D3760(c); // 80206520
  goto L_802065D0; // 80206524
L_80206528:;
  c->r[3]=c->r[31]+0x00000544u; // 80206528
  c->lr=0x80206530u; f_80209E10(c); // 8020652C
  cmps(c,0,(int32_t)c->r[3],0); // 80206530
  if (!crb(c,2)) { goto L_80206578; } // 80206534
  c->r[3]=0u+0x00000008u; // 80206538
  c->r[4]=0u+0x80480000u; // 8020653C
  c->r[4]=c->r[4]+0xFFFF93F0u; // 80206540
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206544
  c->lr=0x8020654Cu; f_803D3760(c); // 80206548
  c->r[3]=0u+0x00000008u; // 8020654C
  c->r[4]=0u+0x80480000u; // 80206550
  c->r[4]=c->r[4]+0xFFFF9424u; // 80206554
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206558
  c->lr=0x80206560u; f_803D3760(c); // 8020655C
  c->r[3]=c->r[31]+0x00000544u; // 80206560
  c->lr=0x80206568u; f_80209E98(c); // 80206564
  c->r[3]=c->r[31]|c->r[31]; // 80206568
  c->r[4]=0u+0x00000001u; // 8020656C
  c->lr=0x80206574u; f_802082A0(c); // 80206570
  goto L_802065D0; // 80206574
L_80206578:;
  c->r[3]=c->r[31]+0x00000544u; // 80206578
  c->lr=0x80206580u; f_80209E40(c); // 8020657C
  goto L_802065D0; // 80206580
L_80206584:;
  c->r[3]=c->r[31]+0x00000544u; // 80206584
  c->r[12]=R32(c->r[3]+0x00000028u); // 80206588
  c->r[12]=R32(c->r[12]+0x00000010u); // 8020658C
  c->ctr=c->r[12]; // 80206590
  if (true) { c->lr=0x80206598u; dispatch(c,c->ctr); } // 80206594
  cmps(c,0,(int32_t)c->r[3],0); // 80206598
  if (crb(c,2)) { goto L_802065B8; } // 8020659C
  c->r[3]=0u+0x00000008u; // 802065A0
  c->r[4]=0u+0x80480000u; // 802065A4
  c->r[4]=c->r[4]+0xFFFF9458u; // 802065A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802065AC
  c->lr=0x802065B4u; f_803D3760(c); // 802065B0
  goto L_802065D0; // 802065B4
L_802065B8:;
  c->r[3]=c->r[31]|c->r[31]; // 802065B8
  c->r[4]=0u+0x0000001Cu; // 802065BC
  c->lr=0x802065C4u; f_801FB330(c); // 802065C0
  c->r[3]=c->r[31]|c->r[31]; // 802065C4
  c->r[4]=0u+0x00000001u; // 802065C8
  c->lr=0x802065D0u; f_802082A0(c); // 802065CC
L_802065D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802065D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802065D4
  c->lr=c->r[0]; // 802065D8
  c->r[1]=c->r[1]+0x00000010u; // 802065DC
  return; // 802065E0
}

// fn_802065E4
void f_802065E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802065E4
  c->r[0]=c->lr; // 802065E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802065EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802065F0
  c->r[31]=c->r[3]|c->r[3]; // 802065F4
  c->r[3]=c->r[3]+0x00000504u; // 802065F8
  c->lr=0x80206600u; f_8020CD28(c); // 802065FC
  cmps(c,0,(int32_t)c->r[3],0); // 80206600
  if (crb(c,2)) { goto L_80206640; } // 80206604
  c->r[3]=c->r[31]+0x00000504u; // 80206608
  c->lr=0x80206610u; f_802082DC(c); // 8020660C
  cmps(c,0,(int32_t)c->r[3],0); // 80206610
  if (crb(c,2)) { goto L_80206634; } // 80206614
  c->r[3]=0u+0x00000008u; // 80206618
  c->r[4]=0u+0x80480000u; // 8020661C
  c->r[4]=c->r[4]+0xFFFF9480u; // 80206620
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206624
  c->lr=0x8020662Cu; f_803D3760(c); // 80206628
  c->r[3]=c->r[31]+0x00000504u; // 8020662C
  c->lr=0x80206634u; f_8020CB00(c); // 80206630
L_80206634:;
  c->r[3]=c->r[31]|c->r[31]; // 80206634
  c->r[4]=0u+0x0000001Du; // 80206638
  c->lr=0x80206640u; f_801FB330(c); // 8020663C
L_80206640:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206640
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206644
  c->lr=c->r[0]; // 80206648
  c->r[1]=c->r[1]+0x00000010u; // 8020664C
  return; // 80206650
}

// fn_80206654
void f_80206654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206654
  c->r[0]=c->lr; // 80206658
  W32(c->r[1]+0x00000014u,c->r[0]); // 8020665C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206660
  c->r[31]=c->r[3]|c->r[3]; // 80206664
  c->r[3]=c->r[3]+0x00000504u; // 80206668
  c->lr=0x80206670u; f_802082DC(c); // 8020666C
  cmps(c,0,(int32_t)c->r[3],0); // 80206670
  if (crb(c,2)) { goto L_802066A0; } // 80206674
  c->r[3]=c->r[31]+0x00000504u; // 80206678
  c->lr=0x80206680u; f_8020CB00(c); // 8020667C
  cmps(c,0,(int32_t)c->r[3],0); // 80206680
  if (!crb(c,2)) { goto L_802066CC; } // 80206684
  c->r[3]=0u+0x00000008u; // 80206688
  c->r[4]=0u+0x80480000u; // 8020668C
  c->r[4]=c->r[4]+0xFFFF94A0u; // 80206690
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206694
  c->lr=0x8020669Cu; f_803D3760(c); // 80206698
  goto L_802066CC; // 8020669C
L_802066A0:;
  c->r[0]=0u+0x00000000u; // 802066A0
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 802066A4
  W32(c->r[31]+0x00000064u,c->r[0]); // 802066A8
  c->r[3]=0u+0x00000008u; // 802066AC
  c->r[4]=0u+0x80480000u; // 802066B0
  c->r[4]=c->r[4]+0xFFFF94C0u; // 802066B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802066B8
  c->lr=0x802066C0u; f_803D3760(c); // 802066BC
  c->r[3]=c->r[31]|c->r[31]; // 802066C0
  c->r[4]=0u+0x00000022u; // 802066C4
  c->lr=0x802066CCu; f_801FB330(c); // 802066C8
L_802066CC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802066CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802066D0
  c->lr=c->r[0]; // 802066D4
  c->r[1]=c->r[1]+0x00000010u; // 802066D8
  return; // 802066DC
}

// fn_802066E0
void f_802066E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802066E0
  c->r[0]=c->lr; // 802066E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802066E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802066EC
  c->r[31]=c->r[3]|c->r[3]; // 802066F0
  c->r[3]=R32(c->r[3]+0x00000D38u); // 802066F4
  c->lr=0x802066FCu; f_801EF7A8(c); // 802066F8
  c->lr=0x80206700u; f_8025C878(c); // 802066FC
  cmps(c,0,(int32_t)c->r[3],0); // 80206700
  if (crb(c,2)) { goto L_80206728; } // 80206704
  c->r[3]=R32(c->r[31]+0x00000D38u); // 80206708
  c->lr=0x80206710u; f_801EF7A8(c); // 8020670C
  c->lr=0x80206714u; f_8025C938(c); // 80206710
  c->r[3]=R32(c->r[31]+0x00000D38u); // 80206714
  c->lr=0x8020671Cu; f_801EF80C(c); // 80206718
  c->r[3]=c->r[31]|c->r[31]; // 8020671C
  c->r[4]=0u+0x0000001Fu; // 80206720
  c->lr=0x80206728u; f_801FB330(c); // 80206724
L_80206728:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206728
  c->r[0]=R32(c->r[1]+0x00000014u); // 8020672C
  c->lr=c->r[0]; // 80206730
  c->r[1]=c->r[1]+0x00000010u; // 80206734
  return; // 80206738
}

// fn_8020673C
void f_8020673C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8020673C
  c->r[0]=c->lr; // 80206740
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206748
  c->r[31]=c->r[3]|c->r[3]; // 8020674C
  c->r[0]=0u+0x00000001u; // 80206750
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 80206754
  c->lr=0x8020675Cu; f_801FB2D4(c); // 80206758
  c->r[0]=0u+0x00000000u; // 8020675C
  W32(c->r[31]+0x00000D0Cu,c->r[0]); // 80206760
  W32(c->r[31]+0x00000D10u,c->r[0]); // 80206764
  c->r[0]=R32(c->r[31]+0x00000064u); // 80206768
  cmps(c,0,(int32_t)c->r[0],0); // 8020676C
  if (crb(c,2)) { goto L_80206780; } // 80206770
  c->r[3]=c->r[31]+0x00000658u; // 80206774
  c->lr=0x8020677Cu; f_8020B20C(c); // 80206778
  goto L_80206798; // 8020677C
L_80206780:;
  c->r[3]=c->r[31]+0x00000658u; // 80206780
  c->lr=0x80206788u; f_8020A9E4(c); // 80206784
  cmps(c,0,(int32_t)c->r[3],0); // 80206788
  if (crb(c,2)) { goto L_80206798; } // 8020678C
  c->r[3]=c->r[31]+0x00000658u; // 80206790
  c->lr=0x80206798u; f_8020B2D4(c); // 80206794
L_80206798:;
  c->r[3]=c->r[31]|c->r[31]; // 80206798
  c->r[4]=0u+0x00000020u; // 8020679C
  c->lr=0x802067A4u; f_801FB330(c); // 802067A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802067A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802067A8
  c->lr=c->r[0]; // 802067AC
  c->r[1]=c->r[1]+0x00000010u; // 802067B0
  return; // 802067B4
}

// fn_802067B8
void f_802067B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802067B8
  c->r[0]=c->lr; // 802067BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802067C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802067C4
  c->r[31]=c->r[3]|c->r[3]; // 802067C8
  c->lr=0x802067D0u; f_802082B4(c); // 802067CC
  cmps(c,0,(int32_t)c->r[3],2); // 802067D0
  if (crb(c,2)) { goto L_8020698C; } // 802067D4
  if (!crb(c,0)) { goto L_802067EC; } // 802067D8
  cmps(c,0,(int32_t)c->r[3],0); // 802067DC
  if (crb(c,2)) { goto L_802067F8; } // 802067E0
  if (!crb(c,0)) { goto L_802068F4; } // 802067E4
  goto L_80206A2C; // 802067E8
L_802067EC:;
  cmps(c,0,(int32_t)c->r[3],4); // 802067EC
  if (!crb(c,0)) { goto L_80206A2C; } // 802067F0
  goto L_802069E8; // 802067F4
L_802067F8:;
  c->r[3]=c->r[31]+0x00000658u; // 802067F8
  c->lr=0x80206800u; f_8020B20C(c); // 802067FC
  c->lr=0x80206804u; f_80361BF4(c); // 80206800
  c->r[5]=0u+0x80000000u; // 80206804
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80206808
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8020680C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 80206810
  c->r[0]=0u+0x00000000u; // 80206814
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 80206818
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 8020681C
  W32(c->r[13]+0xFFFFBCA4u,c->r[4]); // 80206820
  W32(c->r[13]+0xFFFFBCA0u,c->r[0]); // 80206824
  c->r[0]=R32(c->r[31]+0x00000064u); // 80206828
  cmps(c,0,(int32_t)c->r[0],0); // 8020682C
  if (!crb(c,2)) { goto L_80206844; } // 80206830
  c->r[3]=c->r[31]+0x00000544u; // 80206834
  c->lr=0x8020683Cu; f_802097E0(c); // 80206838
  cmps(c,0,(int32_t)c->r[3],0); // 8020683C
  if (crb(c,2)) { goto L_80206854; } // 80206840
L_80206844:;
  c->r[3]=c->r[31]|c->r[31]; // 80206844
  c->r[4]=0u+0x00000002u; // 80206848
  c->lr=0x80206850u; f_802082BC(c); // 8020684C
  goto L_80206A2C; // 80206850
L_80206854:;
  c->r[3]=c->r[31]+0x000005F0u; // 80206854
  c->lr=0x8020685Cu; f_8020D660(c); // 80206858
  cmps(c,0,(int32_t)c->r[3],0); // 8020685C
  if (!crb(c,2)) { goto L_80206888; } // 80206860
  c->r[3]=0u+0x00000008u; // 80206864
  c->r[4]=0u+0x80480000u; // 80206868
  c->r[4]=c->r[4]+0xFFFF94F0u; // 8020686C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206870
  c->lr=0x80206878u; f_803D3760(c); // 80206874
  c->r[3]=c->r[31]|c->r[31]; // 80206878
  c->r[4]=0u+0x00000002u; // 8020687C
  c->lr=0x80206884u; f_802082BC(c); // 80206880
  goto L_80206A2C; // 80206884
L_80206888:;
  c->r[3]=c->r[31]+0x000005F0u; // 80206888
  c->r[4]=0u+0x80470000u; // 8020688C
  c->r[4]=c->r[4]+0x00006AC4u; // 80206890
  c->lr=0x80206898u; f_8020D79C(c); // 80206894
  cmps(c,0,(int32_t)c->r[3],0); // 80206898
  if (!crb(c,2)) { goto L_802068D0; } // 8020689C
  c->r[0]=0u+0x00000001u; // 802068A0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 802068A4
  W32(c->r[3]+0x00000024u,c->r[0]); // 802068A8
  c->r[3]=0u+0x00000008u; // 802068AC
  c->r[4]=0u+0x80480000u; // 802068B0
  c->r[4]=c->r[4]+0xFFFF9520u; // 802068B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802068B8
  c->lr=0x802068C0u; f_803D3760(c); // 802068BC
  c->r[3]=c->r[31]|c->r[31]; // 802068C0
  c->r[4]=0u+0x00000002u; // 802068C4
  c->lr=0x802068CCu; f_802082BC(c); // 802068C8
  goto L_80206A2C; // 802068CC
L_802068D0:;
  c->r[3]=0u+0x00000008u; // 802068D0
  c->r[4]=0u+0x80480000u; // 802068D4
  c->r[4]=c->r[4]+0xFFFF955Cu; // 802068D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802068DC
  c->lr=0x802068E4u; f_803D3760(c); // 802068E0
  c->r[3]=c->r[31]|c->r[31]; // 802068E4
  c->r[4]=0u+0x00000001u; // 802068E8
  c->lr=0x802068F0u; f_802082A0(c); // 802068EC
  goto L_80206A2C; // 802068F0
L_802068F4:;
  c->lr=0x802068F8u; f_80361BF4(c); // 802068F4
  c->r[0]=R32(c->r[13]+0xFFFFBCA0u); // 802068F8
  c->r[6]=R32(c->r[13]+0xFFFFBCA4u); // 802068FC
  c->r[0]=c->r[0]^0x80000000u; // 80206900
  c->r[5]=c->r[3]^0x80000000u; // 80206904
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 80206908
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 8020690C
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80206910
  c->r[5]=0u-c->r[5]; // 80206914
  cmps(c,0,(int32_t)c->r[5],0); // 80206918
  if (crb(c,2)) { goto L_80206930; } // 8020691C
  c->r[3]=c->r[31]|c->r[31]; // 80206920
  c->r[4]=0u+0x00000003u; // 80206924
  c->lr=0x8020692Cu; f_802082BC(c); // 80206928
  goto L_80206A2C; // 8020692C
L_80206930:;
  c->r[3]=c->r[31]|c->r[31]; // 80206930
  c->lr=0x80206938u; f_80208290(c); // 80206934
  cmps(c,0,(int32_t)c->r[3],0); // 80206938
  if (!crb(c,2)) { goto L_80206A2C; } // 8020693C
  c->r[3]=0u+0x00000008u; // 80206940
  c->r[4]=0u+0x80480000u; // 80206944
  c->r[4]=c->r[4]+0xFFFF9598u; // 80206948
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020694C
  c->lr=0x80206954u; f_803D3760(c); // 80206950
  c->lr=0x80206958u; f_80361BF4(c); // 80206954
  c->r[5]=0u+0x80000000u; // 80206958
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8020695C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80206960
  c->r[5]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80206964
  c->r[0]=0u+0x00000000u; // 80206968
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 8020696C
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80206970
  W32(c->r[13]+0xFFFFBCA4u,c->r[4]); // 80206974
  W32(c->r[13]+0xFFFFBCA0u,c->r[0]); // 80206978
  c->r[3]=c->r[31]|c->r[31]; // 8020697C
  c->r[4]=0u+0x00000001u; // 80206980
  c->lr=0x80206988u; f_802082A0(c); // 80206984
  goto L_80206A2C; // 80206988
L_8020698C:;
  c->lr=0x80206990u; f_80361BF4(c); // 8020698C
  c->r[0]=R32(c->r[13]+0xFFFFBCA0u); // 80206990
  c->r[6]=R32(c->r[13]+0xFFFFBCA4u); // 80206994
  c->r[0]=c->r[0]^0x80000000u; // 80206998
  c->r[5]=c->r[3]^0x80000000u; // 8020699C
  c->r[3]=addc(c,~c->r[4],c->r[6],1); // 802069A0
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 802069A4
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 802069A8
  c->r[5]=0u-c->r[5]; // 802069AC
  cmps(c,0,(int32_t)c->r[5],0); // 802069B0
  if (crb(c,2)) { goto L_802069C8; } // 802069B4
  c->r[3]=c->r[31]|c->r[31]; // 802069B8
  c->r[4]=0u+0x00000003u; // 802069BC
  c->lr=0x802069C4u; f_802082BC(c); // 802069C0
  goto L_80206A2C; // 802069C4
L_802069C8:;
  c->r[3]=c->r[31]+0x000005F0u; // 802069C8
  c->lr=0x802069D0u; f_8020D610(c); // 802069CC
  cmps(c,0,(int32_t)c->r[3],0); // 802069D0
  if (!crb(c,2)) { goto L_80206A2C; } // 802069D4
  c->r[3]=c->r[31]|c->r[31]; // 802069D8
  c->r[4]=0u+0x00000001u; // 802069DC
  c->lr=0x802069E4u; f_802082A0(c); // 802069E0
  goto L_80206A2C; // 802069E4
L_802069E8:;
  c->r[3]=c->r[31]+0x000005F0u; // 802069E8
  c->lr=0x802069F0u; f_8020D660(c); // 802069EC
  cmps(c,0,(int32_t)c->r[3],0); // 802069F0
  if (crb(c,2)) { goto L_80206A14; } // 802069F4
  c->r[3]=0u+0x00000008u; // 802069F8
  c->r[4]=0u+0x80480000u; // 802069FC
  c->r[4]=c->r[4]+0xFFFF95D4u; // 80206A00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206A04
  c->lr=0x80206A0Cu; f_803D3760(c); // 80206A08
  c->r[3]=c->r[31]+0x000005F0u; // 80206A0C
  c->lr=0x80206A14u; f_8020D534(c); // 80206A10
L_80206A14:;
  c->r[3]=c->r[31]|c->r[31]; // 80206A14
  c->r[4]=0u+0x00000001u; // 80206A18
  c->lr=0x80206A20u; f_802082A0(c); // 80206A1C
  c->r[3]=c->r[31]|c->r[31]; // 80206A20
  c->r[4]=0u+0x0000001Bu; // 80206A24
  c->lr=0x80206A2Cu; f_801FB330(c); // 80206A28
L_80206A2C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206A2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206A30
  c->lr=c->r[0]; // 80206A34
  c->r[1]=c->r[1]+0x00000010u; // 80206A38
  return; // 80206A3C
}

// fn_80206A40
void f_80206A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206A40
  c->r[0]=c->lr; // 80206A44
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206A48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206A4C
  c->r[31]=c->r[3]|c->r[3]; // 80206A50
  c->lr=0x80206A58u; f_802082B4(c); // 80206A54
  cmps(c,0,(int32_t)c->r[3],0); // 80206A58
  if (crb(c,2)) { goto L_80206A64; } // 80206A5C
  goto L_80206A7C; // 80206A60
L_80206A64:;
  c->r[3]=c->r[31]+0x00000658u; // 80206A64
  c->lr=0x80206A6Cu; f_8020A9E4(c); // 80206A68
  cmps(c,0,(int32_t)c->r[3],0); // 80206A6C
  if (crb(c,2)) { goto L_80206A7C; } // 80206A70
  c->r[3]=c->r[31]+0x00000658u; // 80206A74
  c->lr=0x80206A7Cu; f_8020B2D4(c); // 80206A78
L_80206A7C:;
  c->r[0]=0u+0x00000000u; // 80206A7C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80206A80
  W16(c->r[3]+0x00000E4Cu,c->r[0]); // 80206A84
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80206A88
  W32(c->r[3]+0x00000068u,c->r[0]); // 80206A8C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80206A90
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 80206A94
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80206A98
  W32(c->r[3]+0x00000074u,c->r[0]); // 80206A9C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80206AA0
  W32(c->r[3]+0x000006B4u,c->r[0]); // 80206AA4
  c->r[0]=0u+0xFFFFFFFFu; // 80206AA8
  W32(c->r[31]+0x00000D60u,c->r[0]); // 80206AAC
  c->r[3]=c->r[31]|c->r[31]; // 80206AB0
  c->r[4]=0u+0x00000007u; // 80206AB4
  c->lr=0x80206ABCu; f_801FB330(c); // 80206AB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206ABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206AC0
  c->lr=c->r[0]; // 80206AC4
  c->r[1]=c->r[1]+0x00000010u; // 80206AC8
  return; // 80206ACC
}

// fn_80206AD0
void f_80206AD0(Ctx* __restrict c) {
  return; // 80206AD0
}

// fn_80206AD4
void f_80206AD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206AD4
  c->r[0]=c->lr; // 80206AD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206ADC
  c->r[3]=c->r[1]+0x00000008u; // 80206AE0
  c->r[4]=0u+0x000000FFu; // 80206AE4
  c->r[5]=0u+0x000000C0u; // 80206AE8
  c->r[6]=0u+0x000000C0u; // 80206AEC
  c->r[7]=0u+0x000000FFu; // 80206AF0
  c->lr=0x80206AF8u; f_8004E248(c); // 80206AF4
  c->r[3]=0u+0x80480000u; // 80206AF8
  c->r[3]=c->r[3]+0xFFFF95F4u; // 80206AFC
  {uint32_t ea=c->r[2]+0xFFFF96F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80206B00
  {uint32_t ea=c->r[2]+0xFFFF96FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 80206B04
  c->r[4]=c->r[1]+0x00000008u; // 80206B08
  c->r[5]=0u+0x00000003u; // 80206B0C
  c->lr=0x80206B14u; f_80061424(c); // 80206B10
  c->r[3]=c->r[1]+0x00000008u; // 80206B14
  c->r[4]=0u+0xFFFFFFFFu; // 80206B18
  c->lr=0x80206B20u; f_80047BD4(c); // 80206B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206B20
  c->lr=c->r[0]; // 80206B24
  c->r[1]=c->r[1]+0x00000010u; // 80206B28
  return; // 80206B2C
}

// fn_80206B30
void f_80206B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206B30
  c->r[0]=c->lr; // 80206B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206B3C
  c->r[31]=c->r[3]|c->r[3]; // 80206B40
  c->r[3]=R32(c->r[3]+0x00000D08u); // 80206B44
  c->r[0]=R32(c->r[3]+0x00000000u); // 80206B48
  cmps(c,0,(int32_t)c->r[0],2); // 80206B4C
  if (!crb(c,2)) { goto L_80206B98; } // 80206B50
  c->lr=0x80206B58u; f_800483C4(c); // 80206B54
  c->r[0]=R32(c->r[31]+0x00000064u); // 80206B58
  cmps(c,0,(int32_t)c->r[0],0); // 80206B5C
  if (!crb(c,2)) { goto L_80206B98; } // 80206B60
  cmps(c,0,(int32_t)c->r[3],0); // 80206B64
  if (crb(c,2)) { goto L_80206B98; } // 80206B68
  c->r[3]=0u+0x00000002u; // 80206B6C
  c->r[4]=0u+0x80480000u; // 80206B70
  c->r[4]=c->r[4]+0xFFFF9600u; // 80206B74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206B78
  c->lr=0x80206B80u; f_803D3760(c); // 80206B7C
  c->r[0]=0u+0x00000001u; // 80206B80
  W32(c->r[31]+0x00000064u,c->r[0]); // 80206B84
  W32(c->r[31]+0x00000060u,c->r[0]); // 80206B88
  c->r[3]=c->r[31]|c->r[31]; // 80206B8C
  c->r[4]=0u+0x0000001Eu; // 80206B90
  c->lr=0x80206B98u; f_801FB330(c); // 80206B94
L_80206B98:;
  c->r[3]=c->r[31]|c->r[31]; // 80206B98
  c->lr=0x80206BA0u; f_8020D144(c); // 80206B9C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80206BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80206BA4
  if (crb(c,2)) { goto L_80206BBC; } // 80206BA8
  c->lr=0x80206BB0u; f_801E65AC(c); // 80206BAC
  c->r[0]=cntlz(c->r[3]); // 80206BB0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80206BB4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 80206BB8
L_80206BBC:;
  c->r[3]=c->r[31]+0x00000504u; // 80206BBC
  c->lr=0x80206BC4u; f_8020C778(c); // 80206BC0
  c->r[3]=c->r[31]+0x00000544u; // 80206BC4
  c->lr=0x80206BCCu; f_80208DAC(c); // 80206BC8
  c->r[3]=c->r[31]+0x00000658u; // 80206BCC
  c->lr=0x80206BD4u; f_8020A464(c); // 80206BD0
  c->r[3]=c->r[31]+0x000006D4u; // 80206BD4
  c->lr=0x80206BDCu; f_8020C12C(c); // 80206BD8
  c->r[3]=c->r[31]+0x000005F0u; // 80206BDC
  c->lr=0x80206BE4u; f_8020D144(c); // 80206BE0
  c->lr=0x80206BE8u; f_80361C0C(c); // 80206BE4
  W32(c->r[31]+0x00000058u,c->r[3]); // 80206BE8
  c->r[3]=c->r[31]|c->r[31]; // 80206BEC
  c->lr=0x80206BF4u; f_801F1014(c); // 80206BF0
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 80206BF4
  c->r[3]=0u+0x80430000u; // 80206BF8
  c->r[0]=c->r[3]+0x00002008u; // 80206BFC
  c->r[12]=c->r[0]+c->r[4]; // 80206C00
  c->r[3]=c->r[31]|c->r[31]; // 80206C04
  c->lr=0x80206C0Cu; f_802F09D0(c); // 80206C08
  c->r[0]=c->r[0]|0x00000000u; // 80206C0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206C14
  c->lr=c->r[0]; // 80206C18
  c->r[1]=c->r[1]+0x00000010u; // 80206C1C
  return; // 80206C20
}

// fn_80206C24
void f_80206C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206C24
  c->r[0]=c->lr; // 80206C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206C30
  c->r[31]=c->r[3]|c->r[3]; // 80206C34
  c->lr=0x80206C3Cu; f_80361BF4(c); // 80206C38
  c->r[5]=0u+0x80000000u; // 80206C3C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 80206C40
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 80206C44
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80206C48
  c->r[7]=0u+0x00000000u; // 80206C4C
  c->r[5]=0u+0x00000005u; // 80206C50
  c->r[0]=(uint32_t)(((uint64_t)c->r[6]*(uint64_t)c->r[5])>>32); // 80206C54
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[5]); // 80206C58
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)5); // 80206C5C
  c->r[0]=c->r[0]+c->r[5]; // 80206C60
  c->r[4]=addc(c,c->r[6],c->r[4],0); // 80206C64
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 80206C68
  W32(c->r[31]+0x00000044u,c->r[4]); // 80206C6C
  W32(c->r[31]+0x00000040u,c->r[0]); // 80206C70
  W32(c->r[31]+0x00000050u,c->r[7]); // 80206C74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206C78
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206C7C
  c->lr=c->r[0]; // 80206C80
  c->r[1]=c->r[1]+0x00000010u; // 80206C84
  return; // 80206C88
}

// fn_80206C8C
void f_80206C8C(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80206C8C
  W32(c->r[3]+0x00000050u,c->r[0]); // 80206C90
  return; // 80206C94
}

// fn_80206C98
void f_80206C98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206C98
  c->r[0]=c->lr; // 80206C9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206CA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206CA4
  c->r[31]=c->r[3]|c->r[3]; // 80206CA8
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 80206CAC
  cmps(c,0,(int32_t)c->r[0],0); // 80206CB0
  if (crb(c,2)) { goto L_80206CD4; } // 80206CB4
  c->r[3]=0u+0x00000001u; // 80206CB8
  c->r[4]=0u+0x80480000u; // 80206CBC
  c->r[4]=c->r[4]+0xFFFF9618u; // 80206CC0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206CC4
  c->lr=0x80206CCCu; f_803D3760(c); // 80206CC8
  c->r[3]=0u+0x00000000u; // 80206CCC
  goto L_80206CE4; // 80206CD0
L_80206CD4:;
  c->lr=0x80206CD8u; f_801E6540(c); // 80206CD4
  c->r[0]=0u+0x00000001u; // 80206CD8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 80206CDC
  c->r[3]=0u+0x00000001u; // 80206CE0
L_80206CE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206CE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206CE8
  c->lr=c->r[0]; // 80206CEC
  c->r[1]=c->r[1]+0x00000010u; // 80206CF0
  return; // 80206CF4
}

// fn_80206CF8
void f_80206CF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206CF8
  c->r[0]=c->lr; // 80206CFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206D04
  c->r[31]=c->r[3]|c->r[3]; // 80206D08
  c->r[3]=c->r[3]+0x00000C28u; // 80206D0C
  c->lr=0x80206D14u; f_80208494(c); // 80206D10
  cmps(c,0,(int32_t)c->r[3],0); // 80206D14
  if (crb(c,2)) { goto L_80206D40; } // 80206D18
  c->lr=0x80206D20u; f_801E67A8(c); // 80206D1C
  cmps(c,0,(int32_t)c->r[3],0); // 80206D20
  if (crb(c,2)) { goto L_80206D40; } // 80206D24
  c->lr=0x80206D2Cu; f_801E65AC(c); // 80206D28
  cmps(c,0,(int32_t)c->r[3],0); // 80206D2C
  if (crb(c,2)) { goto L_80206D40; } // 80206D30
  c->lr=0x80206D38u; f_801E6540(c); // 80206D34
  c->r[3]=c->r[31]+0x00000C28u; // 80206D38
  c->lr=0x80206D40u; f_80208488(c); // 80206D3C
L_80206D40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206D40
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206D44
  c->lr=c->r[0]; // 80206D48
  c->r[1]=c->r[1]+0x00000010u; // 80206D4C
  return; // 80206D50
}

// fn_80206D54
void f_80206D54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206D54
  c->r[0]=c->lr; // 80206D58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206D5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206D60
  c->r[31]=c->r[3]|c->r[3]; // 80206D64
  c->r[3]=c->r[3]+0x00000504u; // 80206D68
  c->r[12]=R32(c->r[3]+0x00000028u); // 80206D6C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80206D70
  c->ctr=c->r[12]; // 80206D74
  if (true) { c->lr=0x80206D7Cu; dispatch(c,c->ctr); } // 80206D78
  cmps(c,0,(int32_t)c->r[3],0); // 80206D7C
  if (crb(c,2)) { goto L_80206D94; } // 80206D80
  c->r[3]=c->r[31]+0x00000504u; // 80206D84
  c->lr=0x80206D8Cu; f_8020C89C(c); // 80206D88
  c->r[3]=0u+0x00000000u; // 80206D8C
  goto L_80206D98; // 80206D90
L_80206D94:;
  c->r[3]=0u+0x00000001u; // 80206D94
L_80206D98:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206D98
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206D9C
  c->lr=c->r[0]; // 80206DA0
  c->r[1]=c->r[1]+0x00000010u; // 80206DA4
  return; // 80206DA8
}

// fn_80206DAC
void f_80206DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206DAC
  c->r[0]=c->lr; // 80206DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206DB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206DB8
  c->r[31]=c->r[3]|c->r[3]; // 80206DBC
  c->r[3]=0u+0x00000004u; // 80206DC0
  c->r[4]=0u+0x80480000u; // 80206DC4
  c->r[4]=c->r[4]+0xFFFF9638u; // 80206DC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206DCC
  c->lr=0x80206DD4u; f_803D3760(c); // 80206DD0
  c->r[3]=c->r[31]|c->r[31]; // 80206DD4
  c->r[4]=0u+0x00000000u; // 80206DD8
  c->lr=0x80206DE0u; f_801FB58C(c); // 80206DDC
  c->r[3]=c->r[31]|c->r[31]; // 80206DE0
  c->lr=0x80206DE8u; f_801FB5C4(c); // 80206DE4
  c->r[0]=R32(c->r[31]+0x00000064u); // 80206DE8
  cmps(c,0,(int32_t)c->r[0],0); // 80206DEC
  if (crb(c,2)) { goto L_80206E10; } // 80206DF0
  c->r[0]=0u+0x00000000u; // 80206DF4
  W32(c->r[31]+0x00000064u,c->r[0]); // 80206DF8
  c->r[3]=0u+0x00000008u; // 80206DFC
  c->r[4]=0u+0x80480000u; // 80206E00
  c->r[4]=c->r[4]+0xFFFF9658u; // 80206E04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206E08
  c->lr=0x80206E10u; f_803D3760(c); // 80206E0C
L_80206E10:;
  c->r[3]=c->r[31]|c->r[31]; // 80206E10
  c->lr=0x80206E18u; f_801F1014(c); // 80206E14
  cmps(c,0,(int32_t)c->r[3],0); // 80206E18
  if (crb(c,2)) { goto L_80206E54; } // 80206E1C
  c->r[3]=c->r[31]|c->r[31]; // 80206E20
  c->lr=0x80206E28u; f_801F1014(c); // 80206E24
  cmps(c,0,(int32_t)c->r[3],34); // 80206E28
  if (crb(c,2)) { goto L_80206E54; } // 80206E2C
  c->r[3]=0u+0x00000008u; // 80206E30
  c->r[4]=0u+0x80480000u; // 80206E34
  c->r[4]=c->r[4]+0xFFFF9684u; // 80206E38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206E3C
  c->lr=0x80206E44u; f_803D3760(c); // 80206E40
  c->r[3]=c->r[31]+0x00000544u; // 80206E44
  c->lr=0x80206E4Cu; f_8020A014(c); // 80206E48
  c->r[3]=0u+0x00000000u; // 80206E4C
  goto L_80206F14; // 80206E50
L_80206E54:;
  c->r[3]=c->r[31]|c->r[31]; // 80206E54
  c->lr=0x80206E5Cu; f_802079DC(c); // 80206E58
  c->r[3]=c->r[31]+0x00000504u; // 80206E5C
  c->r[12]=R32(c->r[3]+0x00000028u); // 80206E60
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80206E64
  c->ctr=c->r[12]; // 80206E68
  if (true) { c->lr=0x80206E70u; dispatch(c,c->ctr); } // 80206E6C
  cmps(c,0,(int32_t)c->r[3],0); // 80206E70
  if (!crb(c,2)) { goto L_80206E94; } // 80206E74
  c->r[3]=0u+0x00000002u; // 80206E78
  c->r[4]=0u+0x80480000u; // 80206E7C
  c->r[4]=c->r[4]+0xFFFF96A0u; // 80206E80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206E84
  c->lr=0x80206E8Cu; f_803D3760(c); // 80206E88
  c->r[3]=c->r[31]+0x00000504u; // 80206E8C
  c->lr=0x80206E94u; f_8020C89C(c); // 80206E90
L_80206E94:;
  c->r[3]=c->r[31]+0x00000504u; // 80206E94
  c->r[4]=0u+0x00000000u; // 80206E98
  c->lr=0x80206EA0u; f_8020CA38(c); // 80206E9C
  cmps(c,0,(int32_t)c->r[3],0); // 80206EA0
  if (!crb(c,2)) { goto L_80206EE4; } // 80206EA4
  c->r[3]=0u+0x00000002u; // 80206EA8
  c->r[4]=0u+0x80480000u; // 80206EAC
  c->r[4]=c->r[4]+0xFFFF96CCu; // 80206EB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206EB4
  c->lr=0x80206EBCu; f_803D3760(c); // 80206EB8
  c->r[3]=c->r[31]+0x00000544u; // 80206EBC
  c->r[4]=c->r[31]+0x00000504u; // 80206EC0
  c->lr=0x80206EC8u; f_80208CA4(c); // 80206EC4
  c->r[3]=c->r[31]+0x00000544u; // 80206EC8
  c->lr=0x80206ED0u; f_8020A014(c); // 80206ECC
  c->r[3]=c->r[31]|c->r[31]; // 80206ED0
  c->r[4]=0u+0x0000001Fu; // 80206ED4
  c->lr=0x80206EDCu; f_801FB330(c); // 80206ED8
  c->r[3]=0u+0x00000000u; // 80206EDC
  goto L_80206F14; // 80206EE0
L_80206EE4:;
  c->r[3]=c->r[31]|c->r[31]; // 80206EE4
  c->r[4]=0u+0x00000002u; // 80206EE8
  c->lr=0x80206EF0u; f_801FB330(c); // 80206EEC
  c->r[0]=0u+0x00000002u; // 80206EF0
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80206EF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80206EF8
  c->r[3]=0u+0x00000004u; // 80206EFC
  c->r[4]=0u+0x80480000u; // 80206F00
  c->r[4]=c->r[4]+0xFFFF96F0u; // 80206F04
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206F08
  c->lr=0x80206F10u; f_803D3760(c); // 80206F0C
  c->r[3]=0u+0x00000001u; // 80206F10
L_80206F14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206F14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206F18
  c->lr=c->r[0]; // 80206F1C
  c->r[1]=c->r[1]+0x00000010u; // 80206F20
  return; // 80206F24
}

// fn_80206F28
void f_80206F28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206F28
  c->r[0]=c->lr; // 80206F2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206F30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206F34
  c->r[31]=c->r[3]|c->r[3]; // 80206F38
  c->r[3]=0u+0x00000004u; // 80206F3C
  c->r[4]=0u+0x80480000u; // 80206F40
  c->r[4]=c->r[4]+0xFFFF9714u; // 80206F44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206F48
  c->lr=0x80206F50u; f_803D3760(c); // 80206F4C
  c->r[3]=c->r[31]|c->r[31]; // 80206F50
  c->r[4]=0u+0x00000020u; // 80206F54
  c->lr=0x80206F5Cu; f_801FB330(c); // 80206F58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206F5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206F60
  c->lr=c->r[0]; // 80206F64
  c->r[1]=c->r[1]+0x00000010u; // 80206F68
  return; // 80206F6C
}

// fn_80206F70
void f_80206F70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206F70
  c->r[0]=c->lr; // 80206F74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206F78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206F7C
  c->r[31]=c->r[3]|c->r[3]; // 80206F80
  c->r[3]=0u+0x00000004u; // 80206F84
  c->r[4]=0u+0x80480000u; // 80206F88
  c->r[4]=c->r[4]+0xFFFF9734u; // 80206F8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206F90
  c->lr=0x80206F98u; f_803D3760(c); // 80206F94
  c->r[3]=c->r[31]|c->r[31]; // 80206F98
  c->r[4]=0u+0x0000001Eu; // 80206F9C
  c->lr=0x80206FA4u; f_801FB330(c); // 80206FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206FA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206FA8
  c->lr=c->r[0]; // 80206FAC
  c->r[1]=c->r[1]+0x00000010u; // 80206FB0
  return; // 80206FB4
}

// fn_80206FB8
void f_80206FB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80206FB8
  c->r[0]=c->lr; // 80206FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80206FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80206FC4
  c->r[31]=c->r[3]|c->r[3]; // 80206FC8
  c->r[3]=0u+0x00000004u; // 80206FCC
  c->r[4]=0u+0x80480000u; // 80206FD0
  c->r[4]=c->r[4]+0xFFFF97B4u; // 80206FD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80206FD8
  c->lr=0x80206FE0u; f_803D3760(c); // 80206FDC
  c->r[3]=c->r[31]|c->r[31]; // 80206FE0
  c->r[4]=0u+0x0000001Fu; // 80206FE4
  c->lr=0x80206FECu; f_801FB330(c); // 80206FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80206FEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80206FF0
  c->lr=c->r[0]; // 80206FF4
  c->r[1]=c->r[1]+0x00000010u; // 80206FF8
  return; // 80206FFC
}

// fn_80207000
void f_80207000(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFCF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207000
  c->r[0]=c->lr; // 80207004
  W32(c->r[1]+0x00000314u,c->r[0]); // 80207008
  c->r[11]=c->r[1]+0x00000310u; // 8020700C
  c->lr=0x80207014u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80207010
  c->r[30]=c->r[3]|c->r[3]; // 80207014
  c->r[31]=c->r[4]|c->r[4]; // 80207018
  cmps(c,0,(int32_t)c->r[4],0); // 8020701C
  if (!crb(c,2)) { goto L_80207040; } // 80207020
  c->r[3]=0u+0x00000004u; // 80207024
  c->r[4]=0u+0x80480000u; // 80207028
  c->r[4]=c->r[4]+0xFFFF97D4u; // 8020702C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207030
  c->lr=0x80207038u; f_803D3760(c); // 80207034
  c->r[3]=0u+0x00000000u; // 80207038
  goto L_802079C4; // 8020703C
L_80207040:;
  c->r[3]=c->r[3]+0x000006D4u; // 80207040
  c->lr=0x80207048u; f_802083AC(c); // 80207044
  c->r[28]=c->r[3]|c->r[3]; // 80207048
  c->r[3]=c->r[30]+0x000006D4u; // 8020704C
  c->lr=0x80207054u; f_8020839C(c); // 80207050
  c->r[27]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80207054
  c->r[3]=c->r[30]+0x00000504u; // 80207058
  c->lr=0x80207060u; f_802082E4(c); // 8020705C
  c->r[26]=c->r[3]|c->r[3]; // 80207060
  c->r[3]=c->r[30]+0x00000544u; // 80207064
  c->lr=0x8020706Cu; f_8020830C(c); // 80207068
  c->r[29]=c->r[3]|c->r[3]; // 8020706C
  c->r[3]=c->r[30]+0x00000544u; // 80207070
  c->lr=0x80207078u; f_80208304(c); // 80207074
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80207078
  c->r[3]=c->r[30]+0x00000544u; // 8020707C
  c->lr=0x80207084u; f_802082FC(c); // 80207080
  W32(c->r[1]+0x00000008u,c->r[3]); // 80207084
  c->r[25]=0u+0x00000000u; // 80207088
  c->r[3]=c->r[1]+0x00000190u; // 8020708C
  c->lr=0x80207094u; f_803C62F8(c); // 80207090
  c->r[0]=R8(c->r[1]+0x00000190u); // 80207094
  cmpu(c,0,c->r[0],0x00000002u); // 80207098
  if (!crb(c,2)) { goto L_802070A4; } // 8020709C
  c->r[25]=0u+0x00000001u; // 802070A0
L_802070A4:;
  cmps(c,0,(int32_t)c->r[26],0); // 802070A4
  if (crb(c,2)) { goto L_80207104; } // 802070A8
  c->r[3]=0u+0x00000004u; // 802070AC
  c->r[4]=0u+0x80480000u; // 802070B0
  c->r[4]=c->r[4]+0xFFFF9810u; // 802070B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802070B8
  c->lr=0x802070C0u; f_803D3760(c); // 802070BC
  c->r[3]=0u+0x00000004u; // 802070C0
  c->r[4]=0u+0x80480000u; // 802070C4
  c->r[4]=c->r[4]+0xFFFF9850u; // 802070C8
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 802070CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802070D0
  c->lr=0x802070D8u; f_803D3760(c); // 802070D4
  c->r[3]=c->r[26]|c->r[26]; // 802070D8
  c->lr=0x802070E0u; f_803C6DEC(c); // 802070DC
  c->r[5]=c->r[3]|c->r[3]; // 802070E0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802070E4
  c->r[3]=0u+0x00000004u; // 802070E8
  c->r[4]=0u+0x80480000u; // 802070EC
  c->r[4]=c->r[4]+0xFFFF9868u; // 802070F0
  c->r[6]=c->r[26]|c->r[26]; // 802070F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802070F8
  c->lr=0x80207100u; f_803D3760(c); // 802070FC
  goto L_80207180; // 80207100
L_80207104:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80207104
  cmps(c,0,(int32_t)c->r[0],0); // 80207108
  if (!crb(c,2)) { goto L_80207180; } // 8020710C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80207110
  cmps(c,0,(int32_t)c->r[0],0); // 80207114
  if (!crb(c,2)) { goto L_80207180; } // 80207118
  cmps(c,0,(int32_t)c->r[29],0); // 8020711C
  if (!crb(c,1)) { goto L_80207180; } // 80207120
  c->r[3]=0u+0x00000004u; // 80207124
  c->r[4]=0u+0x80480000u; // 80207128
  c->r[4]=c->r[4]+0xFFFF9898u; // 8020712C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207130
  c->lr=0x80207138u; f_803D3760(c); // 80207134
  c->r[3]=c->r[1]+0x0000000Cu; // 80207138
  c->r[4]=c->r[1]+0x00000008u; // 8020713C
  c->lr=0x80207144u; f_803D30A0(c); // 80207140
  c->r[26]=c->r[3]|c->r[3]; // 80207144
  c->r[0]=R32(c->r[1]+0x00000008u); // 80207148
  cmps(c,0,(int32_t)c->r[0],7); // 8020714C
  if (crb(c,2)) { goto L_80207160; } // 80207150
  c->lr=0x80207158u; f_80208B40(c); // 80207154
  c->lr=0x8020715Cu; f_803D3158(c); // 80207158
  c->lr=0x80207160u; f_80208B4C(c); // 8020715C
L_80207160:;
  c->r[3]=0u+0x00000004u; // 80207160
  c->r[4]=0u+0x80480000u; // 80207164
  c->r[4]=c->r[4]+0xFFFF98D8u; // 80207168
  c->r[5]=c->r[26]|c->r[26]; // 8020716C
  c->r[6]=R32(c->r[1]+0x00000008u); // 80207170
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 80207174
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207178
  c->lr=0x80207180u; f_803D3760(c); // 8020717C
L_80207180:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80207180
  cmps(c,0,(int32_t)c->r[0],0); // 80207184
  if (crb(c,2)) { goto L_80207718; } // 80207188
  c->r[5]=R32(c->r[1]+0x00000008u); // 8020718C
  cmps(c,0,(int32_t)c->r[5],6); // 80207190
  if (crb(c,2)) { goto L_802072A4; } // 80207194
  if (!crb(c,0)) { goto L_802071A8; } // 80207198
  cmps(c,0,(int32_t)c->r[5],3); // 8020719C
  if (crb(c,2)) { goto L_80207220; } // 802071A0
  goto L_80207328; // 802071A4
L_802071A8:;
  cmps(c,0,(int32_t)c->r[5],8); // 802071A8
  if (!crb(c,0)) { goto L_80207328; } // 802071AC
  c->r[0]=0u+0x00000001u; // 802071B0
  W32(c->r[13]+0xFFFFBB4Cu,c->r[0]); // 802071B4
  c->r[3]=0u+0x00000008u; // 802071B8
  c->r[4]=0u+0x80480000u; // 802071BC
  c->r[4]=c->r[4]+0xFFFF9900u; // 802071C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802071C4
  c->lr=0x802071CCu; f_803D3760(c); // 802071C8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802071CC
  c->lr=0x802071D4u; f_802E4958(c); // 802071D0
  c->r[29]=c->r[3]|c->r[3]; // 802071D4
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802071D8
  c->r[4]=0u+0x0000000Du; // 802071DC
  c->r[5]=0u+0x0000000Bu; // 802071E0
  c->lr=0x802071E8u; f_801EF42C(c); // 802071E4
  c->r[4]=c->r[3]|c->r[3]; // 802071E8
  c->r[3]=c->r[1]+0x00000010u; // 802071EC
  c->r[5]=c->r[29]|c->r[29]; // 802071F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802071F4
  c->lr=0x802071FCu; f_802E7CC4(c); // 802071F8
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802071FC
  c->r[4]=0u+0x0000000Du; // 80207200
  c->r[5]=0u+0x0000000Cu; // 80207204
  c->lr=0x8020720Cu; f_801EF42C(c); // 80207208
  c->r[4]=c->r[3]|c->r[3]; // 8020720C
  c->r[3]=c->r[1]+0x00000090u; // 80207210
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207214
  c->lr=0x8020721Cu; f_802E7CC4(c); // 80207218
  goto L_80207380; // 8020721C
L_80207220:;
  cmps(c,0,(int32_t)c->r[25],0); // 80207220
  if (crb(c,2)) { goto L_80207230; } // 80207224
  c->r[0]=0u+0x00000001u; // 80207228
  W32(c->r[13]+0xFFFFBB4Cu,c->r[0]); // 8020722C
L_80207230:;
  c->r[3]=c->r[30]|c->r[30]; // 80207230
  c->lr=0x80207238u; f_802079DC(c); // 80207234
  c->r[3]=0u+0x00000008u; // 80207238
  c->r[4]=0u+0x80480000u; // 8020723C
  c->r[4]=c->r[4]+0xFFFF9930u; // 80207240
  c->r[5]=R32(c->r[1]+0x00000008u); // 80207244
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207248
  c->lr=0x80207250u; f_803D3760(c); // 8020724C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80207250
  c->lr=0x80207258u; f_802E4958(c); // 80207254
  c->r[29]=c->r[3]|c->r[3]; // 80207258
  c->r[3]=R32(c->r[30]+0x00000D38u); // 8020725C
  c->r[4]=0u+0x0000000Du; // 80207260
  c->r[5]=0u+0x0000000Bu; // 80207264
  c->lr=0x8020726Cu; f_801EF42C(c); // 80207268
  c->r[4]=c->r[3]|c->r[3]; // 8020726C
  c->r[3]=c->r[1]+0x00000010u; // 80207270
  c->r[5]=c->r[29]|c->r[29]; // 80207274
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207278
  c->lr=0x80207280u; f_802E7CC4(c); // 8020727C
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207280
  c->r[4]=0u+0x0000000Du; // 80207284
  c->r[5]=0u+0x0000000Cu; // 80207288
  c->lr=0x80207290u; f_801EF42C(c); // 8020728C
  c->r[4]=c->r[3]|c->r[3]; // 80207290
  c->r[3]=c->r[1]+0x00000090u; // 80207294
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207298
  c->lr=0x802072A0u; f_802E7CC4(c); // 8020729C
  goto L_80207380; // 802072A0
L_802072A4:;
  cmps(c,0,(int32_t)c->r[25],0); // 802072A4
  if (crb(c,2)) { goto L_802072B4; } // 802072A8
  c->r[0]=0u+0x00000001u; // 802072AC
  W32(c->r[13]+0xFFFFBB4Cu,c->r[0]); // 802072B0
L_802072B4:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802072B4
  c->r[4]=0u+0x0000000Du; // 802072B8
  c->r[5]=0u+0x0000000Cu; // 802072BC
  c->lr=0x802072C4u; f_801EF42C(c); // 802072C0
  c->r[4]=c->r[3]|c->r[3]; // 802072C4
  c->r[3]=c->r[1]+0x00000090u; // 802072C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802072CC
  c->lr=0x802072D4u; f_802E7CC4(c); // 802072D0
  c->r[3]=c->r[30]|c->r[30]; // 802072D4
  c->lr=0x802072DCu; f_802079DC(c); // 802072D8
  c->r[3]=0u+0x00000008u; // 802072DC
  c->r[4]=0u+0x80480000u; // 802072E0
  c->r[4]=c->r[4]+0xFFFF9964u; // 802072E4
  c->r[5]=R32(c->r[1]+0x00000008u); // 802072E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802072EC
  c->lr=0x802072F4u; f_803D3760(c); // 802072F0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802072F4
  c->lr=0x802072FCu; f_802E4958(c); // 802072F8
  c->r[29]=c->r[3]|c->r[3]; // 802072FC
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207300
  c->r[4]=0u+0x0000000Du; // 80207304
  c->r[5]=0u+0x0000000Bu; // 80207308
  c->lr=0x80207310u; f_801EF42C(c); // 8020730C
  c->r[4]=c->r[3]|c->r[3]; // 80207310
  c->r[3]=c->r[1]+0x00000010u; // 80207314
  c->r[5]=c->r[29]|c->r[29]; // 80207318
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020731C
  c->lr=0x80207324u; f_802E7CC4(c); // 80207320
  goto L_80207380; // 80207324
L_80207328:;
  c->r[3]=c->r[30]|c->r[30]; // 80207328
  c->lr=0x80207330u; f_802079DC(c); // 8020732C
  c->r[3]=0u+0x00000008u; // 80207330
  c->r[4]=0u+0x80480000u; // 80207334
  c->r[4]=c->r[4]+0xFFFF9998u; // 80207338
  c->r[5]=R32(c->r[1]+0x00000008u); // 8020733C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207340
  c->lr=0x80207348u; f_803D3760(c); // 80207344
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80207348
  c->lr=0x80207350u; f_802E4958(c); // 8020734C
  c->r[29]=c->r[3]|c->r[3]; // 80207350
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207354
  c->r[4]=0u+0x0000000Du; // 80207358
  c->r[5]=0u+0x0000000Bu; // 8020735C
  c->lr=0x80207364u; f_801EF42C(c); // 80207360
  c->r[4]=c->r[3]|c->r[3]; // 80207364
  c->r[3]=c->r[1]+0x00000010u; // 80207368
  c->r[5]=c->r[29]|c->r[29]; // 8020736C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207370
  c->lr=0x80207378u; f_802E7CC4(c); // 80207374
  c->r[0]=0u+0x00000000u; // 80207378
  W8(c->r[1]+0x00000090u,c->r[0]); // 8020737C
L_80207380:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 80207380
  c->lr=0x80207388u; f_802E4958(c); // 80207384
  c->r[5]=c->r[3]|c->r[3]; // 80207388
  cmps(c,0,(int32_t)c->r[3],23503); // 8020738C
  if (crb(c,2)) { goto L_80207468; } // 80207390
  if (!crb(c,0)) { goto L_802073C4; } // 80207394
  cmps(c,0,(int32_t)c->r[3],20999); // 80207398
  if (crb(c,2)) { goto L_80207418; } // 8020739C
  if (!crb(c,0)) { goto L_802073B8; } // 802073A0
  cmps(c,0,(int32_t)c->r[3],20111); // 802073A4
  if (!crb(c,0)) { goto L_80207508; } // 802073A8
  cmps(c,0,(int32_t)c->r[3],20100); // 802073AC
  if (!crb(c,0)) { goto L_802073F0; } // 802073B0
  goto L_80207508; // 802073B4
L_802073B8:;
  cmps(c,0,(int32_t)c->r[3],23400); // 802073B8
  if (crb(c,2)) { goto L_80207440; } // 802073BC
  goto L_80207508; // 802073C0
L_802073C4:;
  cmps(c,0,(int32_t)c->r[3],29001); // 802073C4
  if (crb(c,2)) { goto L_802074B8; } // 802073C8
  if (!crb(c,0)) { goto L_802073DC; } // 802073CC
  cmps(c,0,(int32_t)c->r[3],29000); // 802073D0
  if (!crb(c,0)) { goto L_80207490; } // 802073D4
  goto L_80207508; // 802073D8
L_802073DC:;
  c->r[4]=0u+0x00010000u; // 802073DC
  c->r[0]=c->r[4]+0x00003A2Eu; // 802073E0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802073E4
  if (crb(c,2)) { goto L_802074E0; } // 802073E8
  goto L_80207508; // 802073EC
L_802073F0:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802073F0
  c->r[4]=0u+0x00000019u; // 802073F4
  c->r[5]=c->r[5]+0xFFFFB17Cu; // 802073F8
  c->lr=0x80207400u; f_801EF42C(c); // 802073FC
  c->r[4]=c->r[3]|c->r[3]; // 80207400
  c->r[3]=c->r[31]|c->r[31]; // 80207404
  c->r[5]=c->r[1]+0x00000010u; // 80207408
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020740C
  c->lr=0x80207414u; f_802E7CC4(c); // 80207410
  goto L_802079C0; // 80207414
L_80207418:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207418
  c->r[4]=0u+0x00000019u; // 8020741C
  c->r[5]=0u+0x0000000Bu; // 80207420
  c->lr=0x80207428u; f_801EF42C(c); // 80207424
  c->r[4]=c->r[3]|c->r[3]; // 80207428
  c->r[3]=c->r[31]|c->r[31]; // 8020742C
  c->r[5]=c->r[1]+0x00000010u; // 80207430
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207434
  c->lr=0x8020743Cu; f_802E7CC4(c); // 80207438
  goto L_802079C0; // 8020743C
L_80207440:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207440
  c->r[4]=0u+0x00000019u; // 80207444
  c->r[5]=0u+0x0000000Cu; // 80207448
  c->lr=0x80207450u; f_801EF42C(c); // 8020744C
  c->r[4]=c->r[3]|c->r[3]; // 80207450
  c->r[3]=c->r[31]|c->r[31]; // 80207454
  c->r[5]=c->r[1]+0x00000010u; // 80207458
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020745C
  c->lr=0x80207464u; f_802E7CC4(c); // 80207460
  goto L_802079C0; // 80207464
L_80207468:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207468
  c->r[4]=0u+0x00000019u; // 8020746C
  c->r[5]=0u+0x0000000Du; // 80207470
  c->lr=0x80207478u; f_801EF42C(c); // 80207474
  c->r[4]=c->r[3]|c->r[3]; // 80207478
  c->r[3]=c->r[31]|c->r[31]; // 8020747C
  c->r[5]=c->r[1]+0x00000010u; // 80207480
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207484
  c->lr=0x8020748Cu; f_802E7CC4(c); // 80207488
  goto L_802079C0; // 8020748C
L_80207490:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207490
  c->r[4]=0u+0x00000019u; // 80207494
  c->r[5]=0u+0x0000000Fu; // 80207498
  c->lr=0x802074A0u; f_801EF42C(c); // 8020749C
  c->r[4]=c->r[3]|c->r[3]; // 802074A0
  c->r[3]=c->r[31]|c->r[31]; // 802074A4
  c->r[5]=c->r[1]+0x00000010u; // 802074A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802074AC
  c->lr=0x802074B4u; f_802E7CC4(c); // 802074B0
  goto L_802079C0; // 802074B4
L_802074B8:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802074B8
  c->r[4]=0u+0x00000019u; // 802074BC
  c->r[5]=0u+0x00000010u; // 802074C0
  c->lr=0x802074C8u; f_801EF42C(c); // 802074C4
  c->r[4]=c->r[3]|c->r[3]; // 802074C8
  c->r[3]=c->r[31]|c->r[31]; // 802074CC
  c->r[5]=c->r[1]+0x00000010u; // 802074D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802074D4
  c->lr=0x802074DCu; f_802E7CC4(c); // 802074D8
  goto L_802079C0; // 802074DC
L_802074E0:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802074E0
  c->r[4]=0u+0x00000019u; // 802074E4
  c->r[5]=0u+0x00000013u; // 802074E8
  c->lr=0x802074F0u; f_801EF42C(c); // 802074EC
  c->r[4]=c->r[3]|c->r[3]; // 802074F0
  c->r[3]=c->r[31]|c->r[31]; // 802074F4
  c->r[5]=c->r[1]+0x00000010u; // 802074F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802074FC
  c->lr=0x80207504u; f_802E7CC4(c); // 80207500
  goto L_802079C0; // 80207504
L_80207508:;
  cmps(c,0,(int32_t)c->r[3],20111); // 80207508
  if (crb(c,0)) { goto L_80207540; } // 8020750C
  cmps(c,0,(int32_t)c->r[3],20999); // 80207510
  if (crb(c,1)) { goto L_80207540; } // 80207514
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207518
  c->r[4]=0u+0x00000019u; // 8020751C
  c->r[5]=0u+0x00000002u; // 80207520
  c->lr=0x80207528u; f_801EF42C(c); // 80207524
  c->r[4]=c->r[3]|c->r[3]; // 80207528
  c->r[3]=c->r[31]|c->r[31]; // 8020752C
  c->r[5]=c->r[1]+0x00000010u; // 80207530
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207534
  c->lr=0x8020753Cu; f_802E7CC4(c); // 80207538
  goto L_802079C0; // 8020753C
L_80207540:;
  cmps(c,0,(int32_t)c->r[3],20300); // 80207540
  if (crb(c,0)) { goto L_802075FC; } // 80207544
  c->r[4]=0u+0x00010000u; // 80207548
  c->r[0]=c->r[4]+0xFFFFEA5Fu; // 8020754C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80207550
  if (crb(c,1)) { goto L_802075FC; } // 80207554
  cmps(c,0,(int32_t)c->r[3],24000); // 80207558
  if (crb(c,0)) { goto L_80207568; } // 8020755C
  cmps(c,0,(int32_t)c->r[3],25999); // 80207560
  if (!crb(c,1)) { goto L_80207578; } // 80207564
L_80207568:;
  cmps(c,0,(int32_t)c->r[3],31000); // 80207568
  if (crb(c,0)) { goto L_802075D4; } // 8020756C
  cmps(c,0,(int32_t)c->r[3],31999); // 80207570
  if (crb(c,1)) { goto L_802075D4; } // 80207574
L_80207578:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80207578
  cmps(c,0,(int32_t)c->r[0],7); // 8020757C
  if (!crb(c,2)) { goto L_802075AC; } // 80207580
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207584
  c->r[4]=0u+0x00000019u; // 80207588
  c->r[5]=0u+0x00000014u; // 8020758C
  c->lr=0x80207594u; f_801EF42C(c); // 80207590
  c->r[4]=c->r[3]|c->r[3]; // 80207594
  c->r[3]=c->r[31]|c->r[31]; // 80207598
  c->r[5]=c->r[1]+0x00000010u; // 8020759C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802075A0
  c->lr=0x802075A8u; f_802E7CC4(c); // 802075A4
  goto L_802079C0; // 802075A8
L_802075AC:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802075AC
  c->r[4]=0u+0x00000019u; // 802075B0
  c->r[5]=0u+0x0000000Eu; // 802075B4
  c->lr=0x802075BCu; f_801EF42C(c); // 802075B8
  c->r[4]=c->r[3]|c->r[3]; // 802075BC
  c->r[3]=c->r[31]|c->r[31]; // 802075C0
  c->r[5]=c->r[1]+0x00000010u; // 802075C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802075C8
  c->lr=0x802075D0u; f_802E7CC4(c); // 802075CC
  goto L_802079C0; // 802075D0
L_802075D4:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802075D4
  c->r[4]=0u+0x00000019u; // 802075D8
  c->r[5]=0u+0x00000000u; // 802075DC
  c->lr=0x802075E4u; f_801EF42C(c); // 802075E0
  c->r[4]=c->r[3]|c->r[3]; // 802075E4
  c->r[3]=c->r[31]|c->r[31]; // 802075E8
  c->r[5]=c->r[1]+0x00000010u; // 802075EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802075F0
  c->lr=0x802075F8u; f_802E7CC4(c); // 802075F4
  goto L_802079C0; // 802075F8
L_802075FC:;
  c->r[4]=0u+0x00010000u; // 802075FC
  c->r[0]=c->r[4]+0xFFFFC350u; // 80207600
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80207604
  if (crb(c,0)) { goto L_80207640; } // 80207608
  c->r[0]=c->r[4]+0xFFFFEA5Fu; // 8020760C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80207610
  if (crb(c,1)) { goto L_80207640; } // 80207614
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207618
  c->r[4]=0u+0x00000019u; // 8020761C
  c->r[5]=0u+0x00000000u; // 80207620
  c->lr=0x80207628u; f_801EF42C(c); // 80207624
  c->r[4]=c->r[3]|c->r[3]; // 80207628
  c->r[3]=c->r[31]|c->r[31]; // 8020762C
  c->r[5]=c->r[1]+0x00000010u; // 80207630
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207634
  c->lr=0x8020763Cu; f_802E7CC4(c); // 80207638
  goto L_802079C0; // 8020763C
L_80207640:;
  c->r[4]=0u+0x00010000u; // 80207640
  c->r[0]=c->r[4]+0xFFFFEA60u; // 80207644
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80207648
  if (crb(c,0)) { goto L_802076BC; } // 8020764C
  c->r[4]=0u+0x00020000u; // 80207650
  c->r[0]=c->r[4]+0xFFFF869Fu; // 80207654
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80207658
  if (crb(c,1)) { goto L_802076BC; } // 8020765C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80207660
  cmps(c,0,(int32_t)c->r[0],7); // 80207664
  if (!crb(c,2)) { goto L_80207694; } // 80207668
  c->r[3]=R32(c->r[30]+0x00000D38u); // 8020766C
  c->r[4]=0u+0x00000019u; // 80207670
  c->r[5]=0u+0x00000014u; // 80207674
  c->lr=0x8020767Cu; f_801EF42C(c); // 80207678
  c->r[4]=c->r[3]|c->r[3]; // 8020767C
  c->r[3]=c->r[31]|c->r[31]; // 80207680
  c->r[5]=c->r[1]+0x00000010u; // 80207684
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207688
  c->lr=0x80207690u; f_802E7CC4(c); // 8020768C
  goto L_802079C0; // 80207690
L_80207694:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207694
  c->r[4]=0u+0x00000019u; // 80207698
  c->r[5]=0u+0x00000012u; // 8020769C
  c->lr=0x802076A4u; f_801EF42C(c); // 802076A0
  c->r[4]=c->r[3]|c->r[3]; // 802076A4
  c->r[3]=c->r[31]|c->r[31]; // 802076A8
  c->r[5]=c->r[1]+0x00000010u; // 802076AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802076B0
  c->lr=0x802076B8u; f_802E7CC4(c); // 802076B4
  goto L_802079C0; // 802076B8
L_802076BC:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 802076BC
  cmps(c,0,(int32_t)c->r[0],7); // 802076C0
  if (!crb(c,2)) { goto L_802076F0; } // 802076C4
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802076C8
  c->r[4]=0u+0x00000019u; // 802076CC
  c->r[5]=0u+0x00000014u; // 802076D0
  c->lr=0x802076D8u; f_801EF42C(c); // 802076D4
  c->r[4]=c->r[3]|c->r[3]; // 802076D8
  c->r[3]=c->r[31]|c->r[31]; // 802076DC
  c->r[5]=c->r[1]+0x00000010u; // 802076E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802076E4
  c->lr=0x802076ECu; f_802E7CC4(c); // 802076E8
  goto L_802079C0; // 802076EC
L_802076F0:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802076F0
  c->r[4]=0u+0x00000019u; // 802076F4
  c->r[5]=0u+0x00000015u; // 802076F8
  c->lr=0x80207700u; f_801EF42C(c); // 802076FC
  c->r[4]=c->r[3]|c->r[3]; // 80207700
  c->r[3]=c->r[31]|c->r[31]; // 80207704
  c->r[5]=c->r[1]+0x00000010u; // 80207708
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020770C
  c->lr=0x80207714u; f_802E7CC4(c); // 80207710
  goto L_802079C0; // 80207714
L_80207718:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207718
  c->r[4]=0u+0x0000000Du; // 8020771C
  c->r[5]=0u+0x0000000Du; // 80207720
  c->lr=0x80207728u; f_801EF42C(c); // 80207724
  c->r[4]=c->r[3]|c->r[3]; // 80207728
  c->r[3]=c->r[1]+0x00000010u; // 8020772C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207730
  c->lr=0x80207738u; f_802E7CC4(c); // 80207734
  cmps(c,0,(int32_t)c->r[29],0); // 80207738
  if (crb(c,2)) { goto L_80207840; } // 8020773C
  cmps(c,0,(int32_t)c->r[29],7); // 80207740
  if (crb(c,2)) { goto L_802077BC; } // 80207744
  if (!crb(c,0)) { goto L_80207758; } // 80207748
  cmps(c,0,(int32_t)c->r[29],5); // 8020774C
  if (crb(c,2)) { goto L_80207790; } // 80207750
  goto L_80207814; // 80207754
L_80207758:;
  cmps(c,0,(int32_t)c->r[29],11); // 80207758
  if (!crb(c,0)) { goto L_80207814; } // 8020775C
  cmps(c,0,(int32_t)c->r[29],9); // 80207760
  if (!crb(c,0)) { goto L_802077E8; } // 80207764
  c->r[3]=c->r[30]+0x00000544u; // 80207768
  c->lr=0x80207770u; f_8020957C(c); // 8020776C
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207770
  c->r[4]=0u+0x0000000Du; // 80207774
  c->r[5]=0u+0x00000002u; // 80207778
  c->lr=0x80207780u; f_801EF42C(c); // 8020777C
  c->r[4]=c->r[3]|c->r[3]; // 80207780
  c->r[3]=c->r[31]|c->r[31]; // 80207784
  c->lr=0x8020778Cu; f_802E9548(c); // 80207788
  goto L_802079C0; // 8020778C
L_80207790:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207790
  c->r[4]=0u+0x0000000Du; // 80207794
  c->r[5]=0u+0x00000004u; // 80207798
  c->lr=0x802077A0u; f_801EF42C(c); // 8020779C
  c->r[6]=c->r[3]|c->r[3]; // 802077A0
  c->r[3]=c->r[31]|c->r[31]; // 802077A4
  c->r[4]=c->r[13]+0xFFFF9F7Cu; // 802077A8
  c->r[5]=c->r[1]+0x00000010u; // 802077AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802077B0
  c->lr=0x802077B8u; f_802E7CC4(c); // 802077B4
  goto L_802079C0; // 802077B8
L_802077BC:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802077BC
  c->r[4]=0u+0x0000000Du; // 802077C0
  c->r[5]=0u+0x00000005u; // 802077C4
  c->lr=0x802077CCu; f_801EF42C(c); // 802077C8
  c->r[6]=c->r[3]|c->r[3]; // 802077CC
  c->r[3]=c->r[31]|c->r[31]; // 802077D0
  c->r[4]=c->r[13]+0xFFFF9F7Cu; // 802077D4
  c->r[5]=c->r[1]+0x00000010u; // 802077D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802077DC
  c->lr=0x802077E4u; f_802E7CC4(c); // 802077E0
  goto L_802079C0; // 802077E4
L_802077E8:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802077E8
  c->r[4]=0u+0x0000000Du; // 802077EC
  c->r[5]=0u+0x00000008u; // 802077F0
  c->lr=0x802077F8u; f_801EF42C(c); // 802077F4
  c->r[6]=c->r[3]|c->r[3]; // 802077F8
  c->r[3]=c->r[31]|c->r[31]; // 802077FC
  c->r[4]=c->r[13]+0xFFFF9F7Cu; // 80207800
  c->r[5]=c->r[1]+0x00000010u; // 80207804
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207808
  c->lr=0x80207810u; f_802E7CC4(c); // 8020780C
  goto L_802079C0; // 80207810
L_80207814:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207814
  c->r[4]=0u+0x0000000Du; // 80207818
  c->r[5]=0u+0x0000000Au; // 8020781C
  c->lr=0x80207824u; f_801EF42C(c); // 80207820
  c->r[6]=c->r[3]|c->r[3]; // 80207824
  c->r[3]=c->r[31]|c->r[31]; // 80207828
  c->r[4]=c->r[13]+0xFFFF9F7Cu; // 8020782C
  c->r[5]=c->r[1]+0x00000010u; // 80207830
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207834
  c->lr=0x8020783Cu; f_802E7CC4(c); // 80207838
  goto L_802079C0; // 8020783C
L_80207840:;
  cmps(c,0,(int32_t)c->r[28],0); // 80207840
  if (crb(c,2)) { goto L_80207968; } // 80207844
  cmps(c,0,(int32_t)c->r[27],6); // 80207848
  if (!crb(c,0)) { goto L_8020785C; } // 8020784C
  cmps(c,0,(int32_t)c->r[27],1); // 80207850
  if (!crb(c,0)) { goto L_80207868; } // 80207854
  goto L_8020792C; // 80207858
L_8020785C:;
  cmps(c,0,(int32_t)c->r[27],9); // 8020785C
  if (!crb(c,0)) { goto L_8020792C; } // 80207860
  goto L_802078A4; // 80207864
L_80207868:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207868
  c->r[4]=0u+0x0000000Du; // 8020786C
  c->r[5]=0u+0x00000008u; // 80207870
  c->lr=0x80207878u; f_801EF42C(c); // 80207874
  c->r[29]=c->r[3]|c->r[3]; // 80207878
  c->r[3]=R32(c->r[30]+0x00000D38u); // 8020787C
  c->r[4]=0u+0x0000000Du; // 80207880
  c->r[5]=0u+0x0000000Eu; // 80207884
  c->lr=0x8020788Cu; f_801EF42C(c); // 80207888
  c->r[4]=c->r[3]|c->r[3]; // 8020788C
  c->r[3]=c->r[31]|c->r[31]; // 80207890
  c->r[5]=c->r[29]|c->r[29]; // 80207894
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207898
  c->lr=0x802078A0u; f_802E7CC4(c); // 8020789C
  goto L_802079C0; // 802078A0
L_802078A4:;
  c->r[3]=c->r[30]+0x00000544u; // 802078A4
  c->lr=0x802078ACu; f_802082F4(c); // 802078A8
  cmps(c,0,(int32_t)c->r[3],0); // 802078AC
  if (crb(c,2)) { goto L_802078F0; } // 802078B0
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802078B4
  c->r[4]=0u+0x0000000Du; // 802078B8
  c->r[5]=0u+0x00000007u; // 802078BC
  c->lr=0x802078C4u; f_801EF42C(c); // 802078C0
  c->r[29]=c->r[3]|c->r[3]; // 802078C4
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802078C8
  c->r[4]=0u+0x0000000Du; // 802078CC
  c->r[5]=0u+0x0000000Fu; // 802078D0
  c->lr=0x802078D8u; f_801EF42C(c); // 802078D4
  c->r[4]=c->r[3]|c->r[3]; // 802078D8
  c->r[3]=c->r[31]|c->r[31]; // 802078DC
  c->r[5]=c->r[29]|c->r[29]; // 802078E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802078E4
  c->lr=0x802078ECu; f_802E7CC4(c); // 802078E8
  goto L_802079C0; // 802078EC
L_802078F0:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802078F0
  c->r[4]=0u+0x0000000Du; // 802078F4
  c->r[5]=0u+0x00000008u; // 802078F8
  c->lr=0x80207900u; f_801EF42C(c); // 802078FC
  c->r[29]=c->r[3]|c->r[3]; // 80207900
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207904
  c->r[4]=0u+0x0000000Du; // 80207908
  c->r[5]=0u+0x0000000Fu; // 8020790C
  c->lr=0x80207914u; f_801EF42C(c); // 80207910
  c->r[4]=c->r[3]|c->r[3]; // 80207914
  c->r[3]=c->r[31]|c->r[31]; // 80207918
  c->r[5]=c->r[29]|c->r[29]; // 8020791C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207920
  c->lr=0x80207928u; f_802E7CC4(c); // 80207924
  goto L_802079C0; // 80207928
L_8020792C:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 8020792C
  c->r[4]=0u+0x0000000Du; // 80207930
  c->r[5]=0u+0x0000000Au; // 80207934
  c->lr=0x8020793Cu; f_801EF42C(c); // 80207938
  c->r[29]=c->r[3]|c->r[3]; // 8020793C
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207940
  c->r[4]=0u+0x0000000Du; // 80207944
  c->r[5]=0u+0x00000010u; // 80207948
  c->lr=0x80207950u; f_801EF42C(c); // 8020794C
  c->r[4]=c->r[3]|c->r[3]; // 80207950
  c->r[3]=c->r[31]|c->r[31]; // 80207954
  c->r[5]=c->r[29]|c->r[29]; // 80207958
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020795C
  c->lr=0x80207964u; f_802E7CC4(c); // 80207960
  goto L_802079C0; // 80207964
L_80207968:;
  c->r[0]=R32(c->r[30]+0x00000060u); // 80207968
  cmps(c,0,(int32_t)c->r[0],0); // 8020796C
  if (crb(c,2)) { goto L_802079A0; } // 80207970
  c->r[3]=R32(c->r[30]+0x00000D38u); // 80207974
  c->r[4]=0u+0x0000000Du; // 80207978
  c->r[5]=0u+0x00000009u; // 8020797C
  c->lr=0x80207984u; f_801EF42C(c); // 80207980
  c->r[4]=c->r[3]|c->r[3]; // 80207984
  c->r[3]=c->r[31]|c->r[31]; // 80207988
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8020798C
  c->lr=0x80207994u; f_802E7CC4(c); // 80207990
  c->r[0]=0u+0x00000000u; // 80207994
  W32(c->r[30]+0x00000060u,c->r[0]); // 80207998
  goto L_802079C0; // 8020799C
L_802079A0:;
  c->r[3]=R32(c->r[30]+0x00000D38u); // 802079A0
  c->r[4]=0u+0x0000000Du; // 802079A4
  c->r[5]=0u+0x0000000Au; // 802079A8
  c->lr=0x802079B0u; f_801EF42C(c); // 802079AC
  c->r[4]=c->r[3]|c->r[3]; // 802079B0
  c->r[3]=c->r[31]|c->r[31]; // 802079B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802079B8
  c->lr=0x802079C0u; f_802E7CC4(c); // 802079BC
L_802079C0:;
  c->r[3]=c->r[31]|c->r[31]; // 802079C0
L_802079C4:;
  c->r[11]=c->r[1]+0x00000310u; // 802079C4
  c->lr=0x802079CCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802079C8
  c->r[0]=R32(c->r[1]+0x00000314u); // 802079CC
  c->lr=c->r[0]; // 802079D0
  c->r[1]=c->r[1]+0x00000310u; // 802079D4
  return; // 802079D8
}

// fn_802079DC
void f_802079DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802079DC
  c->r[0]=c->lr; // 802079E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802079E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802079E8
  c->r[31]=c->r[3]|c->r[3]; // 802079EC
  c->r[0]=0u+0x00000000u; // 802079F0
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 802079F4
  c->r[3]=c->r[3]+0x000006D4u; // 802079F8
  c->lr=0x80207A00u; f_802083CC(c); // 802079FC
  c->r[3]=c->r[31]+0x000006D4u; // 80207A00
  c->lr=0x80207A08u; f_802083C0(c); // 80207A04
  c->r[3]=c->r[31]+0x00000544u; // 80207A08
  c->lr=0x80207A10u; f_80208CAC(c); // 80207A0C
  c->r[3]=c->r[31]+0x00000504u; // 80207A10
  c->lr=0x80207A18u; f_8020C9CC(c); // 80207A14
  c->r[3]=c->r[31]+0x000005F0u; // 80207A18
  c->lr=0x80207A20u; f_80208338(c); // 80207A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207A20
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207A24
  c->lr=c->r[0]; // 80207A28
  c->r[1]=c->r[1]+0x00000010u; // 80207A2C
  return; // 80207A30
}

// fn_80207A34
void f_80207A34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207A34
  c->r[0]=c->lr; // 80207A38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207A3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207A40
  c->r[31]=c->r[3]|c->r[3]; // 80207A44
  c->r[3]=c->r[3]+0x00000504u; // 80207A48
  c->r[12]=R32(c->r[3]+0x00000028u); // 80207A4C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80207A50
  c->ctr=c->r[12]; // 80207A54
  if (true) { c->lr=0x80207A5Cu; dispatch(c,c->ctr); } // 80207A58
  cmps(c,0,(int32_t)c->r[3],0); // 80207A5C
  if (crb(c,2)) { goto L_80207A6C; } // 80207A60
  c->r[3]=0u+0x00000001u; // 80207A64
  goto L_80207B0C; // 80207A68
L_80207A6C:;
  c->r[3]=c->r[31]+0x00000544u; // 80207A6C
  c->r[12]=R32(c->r[3]+0x00000028u); // 80207A70
  c->r[12]=R32(c->r[12]+0x00000014u); // 80207A74
  c->ctr=c->r[12]; // 80207A78
  if (true) { c->lr=0x80207A80u; dispatch(c,c->ctr); } // 80207A7C
  cmps(c,0,(int32_t)c->r[3],0); // 80207A80
  if (crb(c,2)) { goto L_80207A90; } // 80207A84
  c->r[3]=0u+0x00000001u; // 80207A88
  goto L_80207B0C; // 80207A8C
L_80207A90:;
  c->r[3]=c->r[31]+0x00000544u; // 80207A90
  c->lr=0x80207A98u; f_8020830C(c); // 80207A94
  cmps(c,0,(int32_t)c->r[3],0); // 80207A98
  if (crb(c,2)) { goto L_80207AA8; } // 80207A9C
  c->r[3]=0u+0x00000001u; // 80207AA0
  goto L_80207B0C; // 80207AA4
L_80207AA8:;
  c->r[3]=c->r[31]+0x00000658u; // 80207AA8
  c->lr=0x80207AB0u; f_8020B62C(c); // 80207AAC
  cmps(c,0,(int32_t)c->r[3],0); // 80207AB0
  if (crb(c,2)) { goto L_80207AC0; } // 80207AB4
  c->r[3]=0u+0x00000001u; // 80207AB8
  goto L_80207B0C; // 80207ABC
L_80207AC0:;
  c->r[3]=c->r[31]+0x000006D4u; // 80207AC0
  c->lr=0x80207AC8u; f_802083AC(c); // 80207AC4
  cmps(c,0,(int32_t)c->r[3],0); // 80207AC8
  if (crb(c,2)) { goto L_80207AD8; } // 80207ACC
  c->r[3]=0u+0x00000001u; // 80207AD0
  goto L_80207B0C; // 80207AD4
L_80207AD8:;
  c->r[3]=c->r[31]+0x000005F0u; // 80207AD8
  c->lr=0x80207AE0u; f_80208314(c); // 80207ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80207AE0
  if (crb(c,2)) { goto L_80207AF0; } // 80207AE4
  c->r[3]=0u+0x00000001u; // 80207AE8
  goto L_80207B0C; // 80207AEC
L_80207AF0:;
  c->r[0]=R32(c->r[31]+0x00000064u); // 80207AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80207AF4
  if (crb(c,2)) { goto L_80207B04; } // 80207AF8
  c->r[3]=0u+0x00000001u; // 80207AFC
  goto L_80207B0C; // 80207B00
L_80207B04:;
  c->r[3]=c->r[31]|c->r[31]; // 80207B04
  c->lr=0x80207B0Cu; f_80208298(c); // 80207B08
L_80207B0C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207B0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207B10
  c->lr=c->r[0]; // 80207B14
  c->r[1]=c->r[1]+0x00000010u; // 80207B18
  return; // 80207B1C
}

// fn_80207B20
void f_80207B20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207B20
  c->r[0]=c->lr; // 80207B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207B28
  c->lr=0x80207B30u; f_801F1014(c); // 80207B2C
  c->r[0]=c->r[3]+0xFFFFFFDEu; // 80207B30
  c->r[0]=cntlz(c->r[0]); // 80207B34
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80207B38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207B3C
  c->lr=c->r[0]; // 80207B40
  c->r[1]=c->r[1]+0x00000010u; // 80207B44
  return; // 80207B48
}

// fn_80207B4C
void f_80207B4C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 80207B4C
  return; // 80207B50
}

// fn_80207B54
void f_80207B54(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFBB4Cu); // 80207B54
  return; // 80207B58
}

// fn_80207B5C
void f_80207B5C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D08u); // 80207B5C
  c->r[0]=0u+0x00000000u; // 80207B60
  W16(c->r[3]+0x00000E48u,c->r[0]); // 80207B64
  W32(c->r[3]+0x000006C8u,c->r[0]); // 80207B68
  W32(c->r[3]+0x000006D8u,c->r[0]); // 80207B6C
  W32(c->r[3]+0x000006E8u,c->r[0]); // 80207B70
  W32(c->r[3]+0x000006CCu,c->r[0]); // 80207B74
  W32(c->r[3]+0x000006DCu,c->r[0]); // 80207B78
  W32(c->r[3]+0x000006ECu,c->r[0]); // 80207B7C
  W32(c->r[3]+0x000006D0u,c->r[0]); // 80207B80
  W32(c->r[3]+0x000006E0u,c->r[0]); // 80207B84
  W32(c->r[3]+0x000006F0u,c->r[0]); // 80207B88
  W32(c->r[3]+0x000006D4u,c->r[0]); // 80207B8C
  W32(c->r[3]+0x000006E4u,c->r[0]); // 80207B90
  W32(c->r[3]+0x000006F4u,c->r[0]); // 80207B94
  return; // 80207B98
}

// fn_80207B9C
void f_80207B9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207B9C
  c->r[0]=c->lr; // 80207BA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207BA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207BA8
  c->r[31]=c->r[3]|c->r[3]; // 80207BAC
  c->r[3]=0u+0x00000001u; // 80207BB0
  c->r[4]=0u+0x80480000u; // 80207BB4
  c->r[4]=c->r[4]+0xFFFF99C4u; // 80207BB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207BBC
  c->lr=0x80207BC4u; f_803D3760(c); // 80207BC0
  c->r[3]=c->r[31]+0x00000658u; // 80207BC4
  c->lr=0x80207BCCu; f_8020A9E4(c); // 80207BC8
  cmps(c,0,(int32_t)c->r[3],0); // 80207BCC
  if (crb(c,2)) { goto L_80207BF0; } // 80207BD0
  c->r[3]=0u+0x00000008u; // 80207BD4
  c->r[4]=0u+0x80480000u; // 80207BD8
  c->r[4]=c->r[4]+0xFFFF99ECu; // 80207BDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207BE0
  c->lr=0x80207BE8u; f_803D3760(c); // 80207BE4
  c->r[3]=0u+0x00000000u; // 80207BE8
  goto L_80207C24; // 80207BEC
L_80207BF0:;
  c->r[3]=c->r[31]+0x000006D4u; // 80207BF0
  c->r[4]=0u+0x00000000u; // 80207BF4
  c->lr=0x80207BFCu; f_80208394(c); // 80207BF8
  c->r[3]=c->r[31]+0x00000658u; // 80207BFC
  c->lr=0x80207C04u; f_8020ABEC(c); // 80207C00
  cmps(c,0,(int32_t)c->r[3],0); // 80207C04
  if (!crb(c,2)) { goto L_80207C14; } // 80207C08
  c->r[3]=0u+0x00000000u; // 80207C0C
  goto L_80207C24; // 80207C10
L_80207C14:;
  c->r[3]=c->r[31]|c->r[31]; // 80207C14
  c->r[4]=0u+0x00000008u; // 80207C18
  c->lr=0x80207C20u; f_801FB330(c); // 80207C1C
  c->r[3]=0u+0x00000001u; // 80207C20
L_80207C24:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207C24
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207C28
  c->lr=c->r[0]; // 80207C2C
  c->r[1]=c->r[1]+0x00000010u; // 80207C30
  return; // 80207C34
}

// fn_80207C38
void f_80207C38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207C38
  c->r[0]=c->lr; // 80207C3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207C40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207C44
  c->r[31]=c->r[3]|c->r[3]; // 80207C48
  c->r[3]=0u+0x00000001u; // 80207C4C
  c->r[4]=0u+0x80480000u; // 80207C50
  c->r[4]=c->r[4]+0xFFFF9A10u; // 80207C54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207C58
  c->lr=0x80207C60u; f_803D3760(c); // 80207C5C
  c->r[3]=c->r[31]+0x00000658u; // 80207C60
  c->lr=0x80207C68u; f_8020A9E4(c); // 80207C64
  cmps(c,0,(int32_t)c->r[3],0); // 80207C68
  if (crb(c,2)) { goto L_80207C8C; } // 80207C6C
  c->r[3]=0u+0x00000008u; // 80207C70
  c->r[4]=0u+0x80480000u; // 80207C74
  c->r[4]=c->r[4]+0xFFFF99ECu; // 80207C78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207C7C
  c->lr=0x80207C84u; f_803D3760(c); // 80207C80
  c->r[3]=0u+0x00000000u; // 80207C84
  goto L_80207CC0; // 80207C88
L_80207C8C:;
  c->r[3]=c->r[31]+0x000006D4u; // 80207C8C
  c->r[4]=0u+0x00000000u; // 80207C90
  c->lr=0x80207C98u; f_80208394(c); // 80207C94
  c->r[3]=c->r[31]+0x00000658u; // 80207C98
  c->lr=0x80207CA0u; f_8020ADA8(c); // 80207C9C
  cmps(c,0,(int32_t)c->r[3],0); // 80207CA0
  if (!crb(c,2)) { goto L_80207CB0; } // 80207CA4
  c->r[3]=0u+0x00000000u; // 80207CA8
  goto L_80207CC0; // 80207CAC
L_80207CB0:;
  c->r[3]=c->r[31]|c->r[31]; // 80207CB0
  c->r[4]=0u+0x00000008u; // 80207CB4
  c->lr=0x80207CBCu; f_801FB330(c); // 80207CB8
  c->r[3]=0u+0x00000001u; // 80207CBC
L_80207CC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207CC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207CC4
  c->lr=c->r[0]; // 80207CC8
  c->r[1]=c->r[1]+0x00000010u; // 80207CCC
  return; // 80207CD0
}

// fn_80207CD4
void f_80207CD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207CD4
  c->r[0]=c->lr; // 80207CD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207CDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207CE0
  c->r[31]=c->r[3]|c->r[3]; // 80207CE4
  c->r[3]=0u+0x00000001u; // 80207CE8
  c->r[4]=0u+0x80480000u; // 80207CEC
  c->r[4]=c->r[4]+0xFFFF9A38u; // 80207CF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207CF4
  c->lr=0x80207CFCu; f_803D3760(c); // 80207CF8
  c->r[3]=c->r[31]+0x00000658u; // 80207CFC
  c->lr=0x80207D04u; f_8020A9E4(c); // 80207D00
  cmps(c,0,(int32_t)c->r[3],0); // 80207D04
  if (crb(c,2)) { goto L_80207D28; } // 80207D08
  c->r[3]=0u+0x00000008u; // 80207D0C
  c->r[4]=0u+0x80480000u; // 80207D10
  c->r[4]=c->r[4]+0xFFFF99ECu; // 80207D14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207D18
  c->lr=0x80207D20u; f_803D3760(c); // 80207D1C
  c->r[3]=0u+0x00000000u; // 80207D20
  goto L_80207D84; // 80207D24
L_80207D28:;
  c->r[3]=c->r[31]+0x000006D4u; // 80207D28
  c->r[4]=0u+0x00000000u; // 80207D2C
  c->lr=0x80207D34u; f_80208394(c); // 80207D30
  c->r[3]=c->r[31]+0x00000658u; // 80207D34
  c->lr=0x80207D3Cu; f_8020AF78(c); // 80207D38
  cmps(c,0,(int32_t)c->r[3],0); // 80207D3C
  if (!crb(c,2)) { goto L_80207D60; } // 80207D40
  c->r[3]=0u+0x00000001u; // 80207D44
  c->r[4]=0u+0x80480000u; // 80207D48
  c->r[4]=c->r[4]+0xFFFF9A60u; // 80207D4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207D50
  c->lr=0x80207D58u; f_803D3760(c); // 80207D54
  c->r[3]=0u+0x00000000u; // 80207D58
  goto L_80207D84; // 80207D5C
L_80207D60:;
  c->r[3]=c->r[31]|c->r[31]; // 80207D60
  c->r[4]=0u+0x00000008u; // 80207D64
  c->lr=0x80207D6Cu; f_801FB330(c); // 80207D68
  c->r[3]=0u+0x00000001u; // 80207D6C
  c->r[4]=0u+0x80480000u; // 80207D70
  c->r[4]=c->r[4]+0xFFFF9A90u; // 80207D74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207D78
  c->lr=0x80207D80u; f_803D3760(c); // 80207D7C
  c->r[3]=0u+0x00000001u; // 80207D80
L_80207D84:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207D84
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207D88
  c->lr=c->r[0]; // 80207D8C
  c->r[1]=c->r[1]+0x00000010u; // 80207D90
  return; // 80207D94
}

// fn_80207D98
void f_80207D98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207D98
  c->r[0]=c->lr; // 80207D9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207DA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207DA4
  c->r[31]=c->r[3]|c->r[3]; // 80207DA8
  c->r[3]=0u+0x00000001u; // 80207DAC
  c->r[4]=0u+0x80480000u; // 80207DB0
  c->r[4]=c->r[4]+0xFFFF9AC0u; // 80207DB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207DB8
  c->lr=0x80207DC0u; f_803D3760(c); // 80207DBC
  c->r[3]=c->r[31]+0x00000658u; // 80207DC0
  c->lr=0x80207DC8u; f_8020A9E4(c); // 80207DC4
  cmps(c,0,(int32_t)c->r[3],1); // 80207DC8
  if (!crb(c,2)) { goto L_80207DDC; } // 80207DCC
  c->r[3]=c->r[31]+0x00000658u; // 80207DD0
  c->lr=0x80207DD8u; f_8020B478(c); // 80207DD4
  goto L_80207E0C; // 80207DD8
L_80207DDC:;
  c->r[3]=c->r[31]+0x00000658u; // 80207DDC
  c->lr=0x80207DE4u; f_8020A9E4(c); // 80207DE0
  cmps(c,0,(int32_t)c->r[3],2); // 80207DE4
  if (!crb(c,2)) { goto L_80207E08; } // 80207DE8
  c->r[3]=0u+0x00000008u; // 80207DEC
  c->r[4]=0u+0x80480000u; // 80207DF0
  c->r[4]=c->r[4]+0xFFFF9AE4u; // 80207DF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207DF8
  c->lr=0x80207E00u; f_803D3760(c); // 80207DFC
  c->r[3]=0u+0x00000000u; // 80207E00
  goto L_80207E0C; // 80207E04
L_80207E08:;
  c->r[3]=0u+0x00000000u; // 80207E08
L_80207E0C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207E0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207E10
  c->lr=c->r[0]; // 80207E14
  c->r[1]=c->r[1]+0x00000010u; // 80207E18
  return; // 80207E1C
}

// fn_80207E20
void f_80207E20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207E20
  c->r[0]=c->lr; // 80207E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207E2C
  c->r[31]=c->r[3]|c->r[3]; // 80207E30
  c->r[3]=0u+0x00000001u; // 80207E34
  c->r[4]=0u+0x80480000u; // 80207E38
  c->r[4]=c->r[4]+0xFFFF9AF8u; // 80207E3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207E40
  c->lr=0x80207E48u; f_803D3760(c); // 80207E44
  c->r[3]=c->r[31]+0x00000658u; // 80207E48
  c->lr=0x80207E50u; f_8020A9E4(c); // 80207E4C
  cmps(c,0,(int32_t)c->r[3],0); // 80207E50
  if (!crb(c,2)) { goto L_80207E74; } // 80207E54
  c->r[3]=0u+0x00000008u; // 80207E58
  c->r[4]=0u+0x80480000u; // 80207E5C
  c->r[4]=c->r[4]+0xFFFF9B18u; // 80207E60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207E64
  c->lr=0x80207E6Cu; f_803D3760(c); // 80207E68
  c->r[3]=0u+0x00000000u; // 80207E6C
  goto L_80207E80; // 80207E70
L_80207E74:;
  c->r[3]=c->r[31]+0x00000658u; // 80207E74
  c->lr=0x80207E7Cu; f_8020B2D4(c); // 80207E78
  c->r[3]=0u+0x00000001u; // 80207E7C
L_80207E80:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207E80
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207E84
  c->lr=c->r[0]; // 80207E88
  c->r[1]=c->r[1]+0x00000010u; // 80207E8C
  return; // 80207E90
}

// fn_80207E94
void f_80207E94(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000544u; // 80207E94
  f_80209504(c); return; // 80207E98
}

// fn_80207E9C
void f_80207E9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207E9C
  c->r[0]=c->lr; // 80207EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207EA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207EA8
  c->r[31]=c->r[3]|c->r[3]; // 80207EAC
  c->r[3]=c->r[3]+0x00000544u; // 80207EB0
  c->r[12]=R32(c->r[3]+0x00000028u); // 80207EB4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80207EB8
  c->ctr=c->r[12]; // 80207EBC
  if (true) { c->lr=0x80207EC4u; dispatch(c,c->ctr); } // 80207EC0
  cmps(c,0,(int32_t)c->r[3],0); // 80207EC4
  if (!crb(c,2)) { goto L_80207EE8; } // 80207EC8
  c->r[3]=0u+0x00000001u; // 80207ECC
  c->r[4]=0u+0x80480000u; // 80207ED0
  c->r[4]=c->r[4]+0xFFFF9B3Cu; // 80207ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207ED8
  c->lr=0x80207EE0u; f_803D3760(c); // 80207EDC
  c->r[3]=0u+0x00000000u; // 80207EE0
  goto L_80207F70; // 80207EE4
L_80207EE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80207EE8
  c->lr=0x80207EF0u; f_801F1014(c); // 80207EEC
  cmps(c,0,(int32_t)c->r[3],10); // 80207EF0
  if (crb(c,2)) { goto L_80207F14; } // 80207EF4
  c->r[3]=0u+0x00000001u; // 80207EF8
  c->r[4]=0u+0x80480000u; // 80207EFC
  c->r[4]=c->r[4]+0xFFFF9B60u; // 80207F00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207F04
  c->lr=0x80207F0Cu; f_803D3760(c); // 80207F08
  c->r[3]=0u+0x00000000u; // 80207F0C
  goto L_80207F70; // 80207F10
L_80207F14:;
  c->r[4]=0u+0x00000000u; // 80207F14
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80207F18
  W16(c->r[3]+0x00000E4Cu,c->r[4]); // 80207F1C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80207F20
  W32(c->r[3]+0x00000068u,c->r[4]); // 80207F24
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80207F28
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 80207F2C
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80207F30
  W32(c->r[3]+0x00000074u,c->r[4]); // 80207F34
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80207F38
  W32(c->r[3]+0x000006B4u,c->r[4]); // 80207F3C
  c->r[0]=0u+0xFFFFFFFFu; // 80207F40
  W32(c->r[31]+0x00000D60u,c->r[0]); // 80207F44
  W32(c->r[31]+0x00000D40u,c->r[4]); // 80207F48
  c->r[3]=0u+0x00000001u; // 80207F4C
  c->r[4]=0u+0x80480000u; // 80207F50
  c->r[4]=c->r[4]+0xFFFF9B8Cu; // 80207F54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207F58
  c->lr=0x80207F60u; f_803D3760(c); // 80207F5C
  c->r[3]=c->r[31]|c->r[31]; // 80207F60
  c->r[4]=0u+0x0000000Cu; // 80207F64
  c->lr=0x80207F6Cu; f_801FB330(c); // 80207F68
  c->r[3]=0u+0x00000001u; // 80207F6C
L_80207F70:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80207F70
  c->r[0]=R32(c->r[1]+0x00000014u); // 80207F74
  c->lr=c->r[0]; // 80207F78
  c->r[1]=c->r[1]+0x00000010u; // 80207F7C
  return; // 80207F80
}

// fn_80207F84
void f_80207F84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D08u); // 80207F84
  c->r[3]=c->r[3]+0x00000E18u; // 80207F88
  c->r[4]=0u+0x00000000u; // 80207F8C
  c->r[5]=0u+0x0000002Cu; // 80207F90
  f_800060B8(c); return; // 80207F94
}

// fn_80207F98
void f_80207F98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80207F98
  c->r[0]=c->lr; // 80207F9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80207FA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80207FA4
  c->r[31]=c->r[3]|c->r[3]; // 80207FA8
  c->r[3]=0u+0x00000001u; // 80207FAC
  c->r[4]=0u+0x80480000u; // 80207FB0
  c->r[4]=c->r[4]+0xFFFF9BB8u; // 80207FB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80207FB8
  c->lr=0x80207FC0u; f_803D3760(c); // 80207FBC
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80207FC0
  c->r[0]=R8(c->r[3]+0x00000030u); // 80207FC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)396); // 80207FC8
  c->r[3]=c->r[3]+c->r[0]; // 80207FCC
  c->r[3]=c->r[3]+0x000000A0u; // 80207FD0
  c->r[4]=c->r[31]+0x000000C4u; // 80207FD4
  c->r[5]=0u+0x00000008u; // 80207FD8
  c->lr=0x80207FE0u; f_8021E898(c); // 80207FDC
  c->r[5]=R32(c->r[31]+0x00000D08u); // 80207FE0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000070u); // 80207FE4
  c->r[0]=R8(c->r[5]+0x00000030u); // 80207FE8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80207FEC
  c->r[3]=c->r[5]+c->r[0]; // 80207FF0
  W16(c->r[3]+0x00000064u,c->r[4]); // 80207FF4
  c->r[0]=R8(c->r[5]+0x00000030u); // 80207FF8
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80207FFC
  c->r[3]=c->r[5]+c->r[0]; // 80208000
  W16(c->r[3]+0x00000060u,c->r[4]); // 80208004
  c->r[0]=0u+0xFFFFFFFFu; // 80208008
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020800C
  W32(c->r[3]+0x000000C4u,c->r[0]); // 80208010
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208014
  W32(c->r[3]+0x000000C8u,c->r[0]); // 80208018
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020801C
  W32(c->r[3]+0x000000CCu,c->r[0]); // 80208020
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208024
  W32(c->r[3]+0x000000D0u,c->r[0]); // 80208028
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020802C
  W32(c->r[3]+0x000000D4u,c->r[0]); // 80208030
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208034
  W32(c->r[3]+0x000000D8u,c->r[0]); // 80208038
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020803C
  W32(c->r[3]+0x000000DCu,c->r[0]); // 80208040
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208044
  W32(c->r[3]+0x000000E0u,c->r[0]); // 80208048
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020804C
  W32(c->r[3]+0x000000E4u,c->r[0]); // 80208050
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208054
  W32(c->r[3]+0x000000E8u,c->r[0]); // 80208058
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020805C
  W32(c->r[3]+0x000000ECu,c->r[0]); // 80208060
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208064
  W32(c->r[3]+0x000000F0u,c->r[0]); // 80208068
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020806C
  W32(c->r[3]+0x000000F4u,c->r[0]); // 80208070
  c->r[3]=R32(c->r[31]+0x00000D08u); // 80208074
  W32(c->r[3]+0x000000F8u,c->r[0]); // 80208078
  c->r[3]=R32(c->r[31]+0x00000D08u); // 8020807C
  W32(c->r[3]+0x000000FCu,c->r[0]); // 80208080
  c->r[3]=c->r[31]|c->r[31]; // 80208084
  c->lr=0x8020808Cu; f_802079DC(c); // 80208088
  c->r[3]=0u+0x00000001u; // 8020808C
  c->r[4]=0u+0x80470000u; // 80208090
  c->r[4]=c->r[4]+0x00007670u; // 80208094
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208098
  c->lr=0x802080A0u; f_803D3760(c); // 8020809C
  c->r[3]=c->r[31]|c->r[31]; // 802080A0
  c->r[4]=0u+0x00000012u; // 802080A4
  c->lr=0x802080ACu; f_801FB330(c); // 802080A8
  c->r[3]=0u+0x00000001u; // 802080AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802080B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802080B4
  c->lr=c->r[0]; // 802080B8
  c->r[1]=c->r[1]+0x00000010u; // 802080BC
  return; // 802080C0
}

// fn_802080C4
void f_802080C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802080C4
  c->r[0]=c->lr; // 802080C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802080CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802080D0
  c->r[31]=c->r[3]|c->r[3]; // 802080D4
  c->r[4]=R32(c->r[3]+0x00000D08u); // 802080D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 802080DC
  cmps(c,0,(int32_t)c->r[0],2); // 802080E0
  if (crb(c,2)) { goto L_802080EC; } // 802080E4
  goto L_80208150; // 802080E8
L_802080EC:;
  c->r[3]=c->r[3]+0x00000544u; // 802080EC
  c->r[12]=R32(c->r[3]+0x00000028u); // 802080F0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802080F4
  c->ctr=c->r[12]; // 802080F8
  if (true) { c->lr=0x80208100u; dispatch(c,c->ctr); } // 802080FC
  cmps(c,0,(int32_t)c->r[3],0); // 80208100
  if (!crb(c,2)) { goto L_80208124; } // 80208104
  c->r[3]=0u+0x00000001u; // 80208108
  c->r[4]=0u+0x80480000u; // 8020810C
  c->r[4]=c->r[4]+0xFFFF9BDCu; // 80208110
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208114
  c->lr=0x8020811Cu; f_803D3760(c); // 80208118
  c->r[3]=0u+0x00000000u; // 8020811C
  goto L_802081B8; // 80208120
L_80208124:;
  c->r[3]=c->r[31]|c->r[31]; // 80208124
  c->lr=0x8020812Cu; f_801F1014(c); // 80208128
  cmps(c,0,(int32_t)c->r[3],14); // 8020812C
  if (crb(c,2)) { goto L_8020818C; } // 80208130
  c->r[3]=0u+0x00000001u; // 80208134
  c->r[4]=0u+0x80480000u; // 80208138
  c->r[4]=c->r[4]+0xFFFF9BFCu; // 8020813C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208140
  c->lr=0x80208148u; f_803D3760(c); // 80208144
  c->r[3]=0u+0x00000000u; // 80208148
  goto L_802081B8; // 8020814C
L_80208150:;
  c->r[0]=R32(c->r[3]+0x00000064u); // 80208150
  cmps(c,0,(int32_t)c->r[0],0); // 80208154
  if (crb(c,2)) { goto L_80208178; } // 80208158
  c->r[0]=0u+0x00000000u; // 8020815C
  W32(c->r[3]+0x00000064u,c->r[0]); // 80208160
  c->r[3]=0u+0x00000008u; // 80208164
  c->r[4]=0u+0x80480000u; // 80208168
  c->r[4]=c->r[4]+0xFFFF9C28u; // 8020816C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208170
  c->lr=0x80208178u; f_803D3760(c); // 80208174
L_80208178:;
  c->r[3]=0u+0x00000001u; // 80208178
  c->r[4]=0u+0x80480000u; // 8020817C
  c->r[4]=c->r[4]+0xFFFF9C60u; // 80208180
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208184
  c->lr=0x8020818Cu; f_803D3760(c); // 80208188
L_8020818C:;
  c->r[3]=0u+0x00000001u; // 8020818C
  c->r[4]=0u+0x80480000u; // 80208190
  c->r[4]=c->r[4]+0xFFFF9C80u; // 80208194
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208198
  c->lr=0x802081A0u; f_803D3760(c); // 8020819C
  c->r[0]=0u+0x00000000u; // 802081A0
  W32(c->r[31]+0x00000D68u,c->r[0]); // 802081A4
  c->r[3]=c->r[31]|c->r[31]; // 802081A8
  c->r[4]=0u+0x0000000Fu; // 802081AC
  c->lr=0x802081B4u; f_801FB330(c); // 802081B0
  c->r[3]=0u+0x00000001u; // 802081B4
L_802081B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802081B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802081BC
  c->lr=c->r[0]; // 802081C0
  c->r[1]=c->r[1]+0x00000010u; // 802081C4
  return; // 802081C8
}

// fn_802081CC
void f_802081CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802081CC
  c->r[0]=c->lr; // 802081D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802081D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802081D8
  c->r[31]=c->r[3]|c->r[3]; // 802081DC
  c->r[3]=0u+0x00000001u; // 802081E0
  c->r[4]=0u+0x80470000u; // 802081E4
  c->r[4]=c->r[4]+0x000078A4u; // 802081E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802081EC
  c->lr=0x802081F4u; f_803D3760(c); // 802081F0
  c->r[3]=c->r[31]|c->r[31]; // 802081F4
  c->r[4]=0u+0x00000014u; // 802081F8
  c->lr=0x80208200u; f_801FB330(c); // 802081FC
  c->r[3]=0u+0x00000001u; // 80208200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80208204
  c->r[0]=R32(c->r[1]+0x00000014u); // 80208208
  c->lr=c->r[0]; // 8020820C
  c->r[1]=c->r[1]+0x00000010u; // 80208210
  return; // 80208214
}

// fn_80208218
void f_80208218(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80208218
  c->r[0]=c->lr; // 8020821C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80208220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80208224
  c->r[31]=c->r[3]|c->r[3]; // 80208228
  c->lr=0x80208230u; f_801F1014(c); // 8020822C
  cmps(c,0,(int32_t)c->r[3],18); // 80208230
  if (!crb(c,2)) { goto L_80208258; } // 80208234
  c->r[3]=0u+0x00000001u; // 80208238
  c->r[4]=0u+0x80470000u; // 8020823C
  c->r[4]=c->r[4]+0x000078A4u; // 80208240
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80208244
  c->lr=0x8020824Cu; f_803D3760(c); // 80208248
  c->r[3]=c->r[31]|c->r[31]; // 8020824C
  c->r[4]=0u+0x00000000u; // 80208250
  c->lr=0x80208258u; f_801FB330(c); // 80208254
L_80208258:;
  c->r[3]=0u+0x00000001u; // 80208258
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8020825C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80208260
  c->lr=c->r[0]; // 80208264
  c->r[1]=c->r[1]+0x00000010u; // 80208268
  return; // 8020826C
}

// fn_80208270
void f_80208270(Ctx* __restrict c) {
  W32(c->r[3]+0x00000D3Cu,c->r[4]); // 80208270
  return; // 80208274
}

// fn_80208278
void f_80208278(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000D3Cu); // 80208278
  return; // 8020827C
}

// fn_80208280
void f_80208280(Ctx* __restrict c) {
  W32(c->r[3]+0x00000D5Cu,c->r[4]); // 80208280
  return; // 80208284
}

// fn_80208288
void f_80208288(Ctx* __restrict c) {
  W32(c->r[3]+0x00000D58u,c->r[4]); // 80208288
  return; // 8020828C
}

