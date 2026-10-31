#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801E59C0
void f_801E59C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E59C0
  c->r[0]=c->lr; // 801E59C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E59C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E59CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E59D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E59D4
  c->r[29]=c->r[3]|c->r[3]; // 801E59D8
  c->r[0]=R32(c->r[3]+0x000023A4u); // 801E59DC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E59E0
  c->r[3]=0u+0x80430000u; // 801E59E4
  c->r[4]=c->r[3]+0x00001058u; // 801E59E8
  c->r[3]=c->r[4]+c->r[0]; // 801E59EC
  c->r[30]=R32(c->r[3]+0x00000004u); // 801E59F0
  c->r[3]=R32(c->r[4]+c->r[0]); // 801E59F4
  c->r[0]=0u-c->r[3]; // 801E59F8
  c->r[0]=c->r[0]|c->r[3]; // 801E59FC
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 801E5A00
  c->lr=0x801E5A08u; f_8007B524(c); // 801E5A04
  c->r[4]=c->r[30]|c->r[30]; // 801E5A08
  c->r[5]=c->r[31]|c->r[31]; // 801E5A0C
  c->lr=0x801E5A14u; f_8023BC30(c); // 801E5A10
  c->r[3]=c->r[29]|c->r[29]; // 801E5A14
  c->lr=0x801E5A1Cu; f_801E6E30(c); // 801E5A18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5A1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5A20
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5A24
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5A28
  c->lr=c->r[0]; // 801E5A2C
  c->r[1]=c->r[1]+0x00000020u; // 801E5A30
  return; // 801E5A34
}

// fn_801E5A38
void f_801E5A38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5A38
  c->r[0]=c->lr; // 801E5A3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5A40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5A44
  c->r[31]=c->r[3]|c->r[3]; // 801E5A48
  c->r[0]=R32(c->r[3]+0x000023A4u); // 801E5A4C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801E5A50
  c->r[4]=0u+0x80430000u; // 801E5A54
  c->r[4]=c->r[4]+0x00001058u; // 801E5A58
  c->r[0]=R32(c->r[4]+c->r[0]); // 801E5A5C
  cmps(c,0,(int32_t)c->r[0],0); // 801E5A60
  if (!crb(c,2)) { goto L_801E5A70; } // 801E5A64
  c->lr=0x801E5A6Cu; f_801E6E64(c); // 801E5A68
  goto L_801E5A88; // 801E5A6C
L_801E5A70:;
  c->lr=0x801E5A74u; f_8007B524(c); // 801E5A70
  c->lr=0x801E5A78u; f_8023BC40(c); // 801E5A74
  cmps(c,0,(int32_t)c->r[3],0); // 801E5A78
  if (crb(c,2)) { goto L_801E5A88; } // 801E5A7C
  c->r[3]=c->r[31]|c->r[31]; // 801E5A80
  c->lr=0x801E5A88u; f_801E6E30(c); // 801E5A84
L_801E5A88:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5A88
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5A8C
  c->lr=c->r[0]; // 801E5A90
  c->r[1]=c->r[1]+0x00000010u; // 801E5A94
  return; // 801E5A98
}

// fn_801E5A9C
void f_801E5A9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5A9C
  c->r[0]=c->lr; // 801E5AA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5AA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5AA8
  c->r[31]=c->r[3]|c->r[3]; // 801E5AAC
  c->lr=0x801E5AB4u; f_8007B524(c); // 801E5AB0
  c->lr=0x801E5AB8u; f_8023BC38(c); // 801E5AB4
  c->r[3]=c->r[31]|c->r[31]; // 801E5AB8
  c->lr=0x801E5AC0u; f_801E6E30(c); // 801E5ABC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5AC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5AC4
  c->lr=c->r[0]; // 801E5AC8
  c->r[1]=c->r[1]+0x00000010u; // 801E5ACC
  return; // 801E5AD0
}

// fn_801E5AD4
void f_801E5AD4(Ctx* __restrict c) {
  f_801E6E64(c); return; // 801E5AD4
}

// fn_801E5AD8
void f_801E5AD8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5AD8
  c->r[0]=c->lr; // 801E5ADC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E5AE0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E5AE4
  c->r[31]=c->r[3]|c->r[3]; // 801E5AE8
  c->r[3]=c->r[1]+0x00000008u; // 801E5AEC
  c->lr=0x801E5AF4u; f_801E6C24(c); // 801E5AF0
  c->r[3]=c->r[31]|c->r[31]; // 801E5AF4
  c->lr=0x801E5AFCu; f_801E6E40(c); // 801E5AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801E5AFC
  if (crb(c,2)) { goto L_801E5B18; } // 801E5B00
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5B04
  c->r[4]=R32(c->r[31]+0x00002388u); // 801E5B08
  c->r[5]=R32(c->r[31]+0x0000238Cu); // 801E5B0C
  c->lr=0x801E5B14u; f_801E2570(c); // 801E5B10
  goto L_801E5B70; // 801E5B14
L_801E5B18:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5B18
  c->lr=0x801E5B20u; f_801E41DC(c); // 801E5B1C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5B20
  if (!crb(c,2)) { goto L_801E5B38; } // 801E5B24
  c->r[3]=c->r[1]+0x00000008u; // 801E5B28
  c->r[4]=0u+0xFFFFFFFFu; // 801E5B2C
  c->lr=0x801E5B34u; f_801E68F8(c); // 801E5B30
  goto L_801E5B7C; // 801E5B34
L_801E5B38:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5B38
  c->r[4]=c->r[1]+0x00000008u; // 801E5B3C
  c->lr=0x801E5B44u; f_801E6DD4(c); // 801E5B40
  c->r[0]=R32(c->r[1]+0x00000018u); // 801E5B44
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E5B48
  cmps(c,0,(int32_t)c->r[0],0); // 801E5B4C
  if (crb(c,2)) { goto L_801E5B64; } // 801E5B50
  c->r[3]=c->r[31]|c->r[31]; // 801E5B54
  c->r[4]=0u+0x00000029u; // 801E5B58
  c->lr=0x801E5B60u; f_801E6E20(c); // 801E5B5C
  goto L_801E5B70; // 801E5B60
L_801E5B64:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5B64
  c->r[4]=R32(c->r[31]+0x0000239Cu); // 801E5B68
  c->lr=0x801E5B70u; f_801E6E20(c); // 801E5B6C
L_801E5B70:;
  c->r[3]=c->r[1]+0x00000008u; // 801E5B70
  c->r[4]=0u+0xFFFFFFFFu; // 801E5B74
  c->lr=0x801E5B7Cu; f_801E68F8(c); // 801E5B78
L_801E5B7C:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E5B7C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E5B80
  c->lr=c->r[0]; // 801E5B84
  c->r[1]=c->r[1]+0x00000030u; // 801E5B88
  return; // 801E5B8C
}

// fn_801E5B90
void f_801E5B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5B90
  c->r[0]=c->lr; // 801E5B94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E5B98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E5B9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E5BA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E5BA4
  c->r[31]=c->r[3]|c->r[3]; // 801E5BA8
  c->lr=0x801E5BB0u; f_801E6E40(c); // 801E5BAC
  cmps(c,0,(int32_t)c->r[3],0); // 801E5BB0
  if (crb(c,2)) { goto L_801E5C08; } // 801E5BB4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E5BB8
  c->r[0]=rotl(c->r[0],0)&0xFFEFFFFFu; // 801E5BBC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E5BC0
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5BC4
  c->lr=0x801E5BCCu; f_801E2EA8(c); // 801E5BC8
  c->r[29]=0u+0x00000000u; // 801E5BCC
  c->r[30]=c->r[31]|c->r[31]; // 801E5BD0
  goto L_801E5BF8; // 801E5BD4
L_801E5BD8:;
  c->r[0]=R32(c->r[30]+0x000002CCu); // 801E5BD8
  cmps(c,0,(int32_t)c->r[0],0); // 801E5BDC
  if (crb(c,2)) { goto L_801E5BF0; } // 801E5BE0
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5BE4
  c->r[4]=R32(c->r[30]+0x000002C0u); // 801E5BE8
  c->lr=0x801E5BF0u; f_801E2A48(c); // 801E5BEC
L_801E5BF0:;
  c->r[30]=c->r[30]+0x0000001Cu; // 801E5BF0
  c->r[29]=c->r[29]+0x00000001u; // 801E5BF4
L_801E5BF8:;
  c->r[0]=R32(c->r[31]+0x00000484u); // 801E5BF8
  cmpu(c,0,c->r[29],c->r[0]); // 801E5BFC
  if (crb(c,0)) { IRQCHK(c); goto L_801E5BD8; } // 801E5C00
  goto L_801E5D04; // 801E5C04
L_801E5C08:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5C08
  c->lr=0x801E5C10u; f_801E6D20(c); // 801E5C0C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5C10
  if (crb(c,2)) { goto L_801E5C24; } // 801E5C14
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5C18
  c->lr=0x801E5C20u; f_801E6CCC(c); // 801E5C1C
  goto L_801E5D04; // 801E5C20
L_801E5C24:;
  c->r[3]=c->r[31]+0x0000048Cu; // 801E5C24
  c->lr=0x801E5C2Cu; f_801E6C60(c); // 801E5C28
  cmps(c,0,(int32_t)c->r[3],0); // 801E5C2C
  if (crb(c,2)) { goto L_801E5D04; } // 801E5C30
  c->r[4]=R32(c->r[31]+0x00000004u); // 801E5C34
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801E5C38
  c->r[3]=R32(c->r[31]+0x00000008u); // 801E5C3C
  W32(c->r[31]+0x00000010u,c->r[3]); // 801E5C40
  c->r[0]=rotl(c->r[4],0)&0x00000010u; // 801E5C44
  cmps(c,0,(int32_t)c->r[0],0); // 801E5C48
  if (crb(c,2)) { goto L_801E5C58; } // 801E5C4C
  c->r[4]=0u+0x0000002Au; // 801E5C50
  goto L_801E5CD0; // 801E5C54
L_801E5C58:;
  c->r[0]=rotl(c->r[4],0)&0x00000020u; // 801E5C58
  cmps(c,0,(int32_t)c->r[0],0); // 801E5C5C
  if (crb(c,2)) { goto L_801E5C6C; } // 801E5C60
  c->r[4]=0u+0x0000002Du; // 801E5C64
  goto L_801E5CD0; // 801E5C68
L_801E5C6C:;
  c->r[0]=rotl(c->r[4],0)&0x00004000u; // 801E5C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801E5C70
  if (crb(c,2)) { goto L_801E5C80; } // 801E5C74
  c->r[4]=0u+0x0000002Du; // 801E5C78
  goto L_801E5CD0; // 801E5C7C
L_801E5C80:;
  c->r[0]=rotl(c->r[4],0)&0x00000100u; // 801E5C80
  cmps(c,0,(int32_t)c->r[0],0); // 801E5C84
  if (crb(c,2)) { goto L_801E5C94; } // 801E5C88
  c->r[4]=0u+0x00000034u; // 801E5C8C
  goto L_801E5CD0; // 801E5C90
L_801E5C94:;
  c->r[0]=rotl(c->r[4],0)&0x00000400u; // 801E5C94
  cmps(c,0,(int32_t)c->r[0],0); // 801E5C98
  if (crb(c,2)) { goto L_801E5CA8; } // 801E5C9C
  c->r[4]=0u+0x00000038u; // 801E5CA0
  goto L_801E5CD0; // 801E5CA4
L_801E5CA8:;
  c->r[0]=c->r[3]&0x00000005u; cr0(c,c->r[0]); // 801E5CA8
  cmps(c,0,(int32_t)c->r[0],0); // 801E5CAC
  if (crb(c,2)) { goto L_801E5CBC; } // 801E5CB0
  c->r[4]=0u+0x00000031u; // 801E5CB4
  goto L_801E5CD0; // 801E5CB8
L_801E5CBC:;
  c->r[0]=c->r[3]&0x0000000Au; cr0(c,c->r[0]); // 801E5CBC
  cmps(c,0,(int32_t)c->r[0],0); // 801E5CC0
  c->r[4]=0u+0x00000039u; // 801E5CC4
  if (crb(c,2)) { goto L_801E5CD0; } // 801E5CC8
  c->r[4]=0u+0x00000035u; // 801E5CCC
L_801E5CD0:;
  cmpu(c,0,c->r[4],0x0000002Du); // 801E5CD0
  if (!crb(c,2)) { goto L_801E5CF0; } // 801E5CD4
  c->r[0]=R32(c->r[31]+0x000023B8u); // 801E5CD8
  cmps(c,0,(int32_t)c->r[0],0); // 801E5CDC
  if (crb(c,2)) { goto L_801E5CF0; } // 801E5CE0
  c->r[4]=c->r[0]|c->r[0]; // 801E5CE4
  c->r[0]=0u+0x00000000u; // 801E5CE8
  W32(c->r[31]+0x000023B8u,c->r[0]); // 801E5CEC
L_801E5CF0:;
  c->r[0]=0u+0x00000000u; // 801E5CF0
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E5CF4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801E5CF8
  c->r[3]=c->r[31]|c->r[31]; // 801E5CFC
  c->lr=0x801E5D04u; f_801E6E20(c); // 801E5D00
L_801E5D04:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E5D04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E5D08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E5D0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E5D10
  c->lr=c->r[0]; // 801E5D14
  c->r[1]=c->r[1]+0x00000020u; // 801E5D18
  return; // 801E5D1C
}

// fn_801E5D20
void f_801E5D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5D20
  c->r[0]=c->lr; // 801E5D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5D28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5D2C
  c->r[31]=c->r[3]|c->r[3]; // 801E5D30
  c->r[3]=0u+0x00000000u; // 801E5D34
  c->lr=0x801E5D3Cu; f_800483E8(c); // 801E5D38
  c->r[3]=c->r[31]|c->r[31]; // 801E5D3C
  c->r[4]=0u+0x00000007u; // 801E5D40
  c->r[5]=0u+0x00000001u; // 801E5D44
  c->lr=0x801E5D4Cu; f_801E42F8(c); // 801E5D48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5D4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5D50
  c->lr=c->r[0]; // 801E5D54
  c->r[1]=c->r[1]+0x00000010u; // 801E5D58
  return; // 801E5D5C
}

// fn_801E5D60
void f_801E5D60(Ctx* __restrict c) {
  return; // 801E5D60
}

// fn_801E5D64
void f_801E5D64(Ctx* __restrict c) {
  return; // 801E5D64
}

// fn_801E5D68
void f_801E5D68(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00002384u); // 801E5D68
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801E5D6C
  c->r[4]=c->r[3]+c->r[0]; // 801E5D70
  c->r[0]=R32(c->r[4]+0x000002C8u); // 801E5D74
  c->r[0]=c->r[0]|0x00000002u; // 801E5D78
  W32(c->r[4]+0x000002C8u,c->r[0]); // 801E5D7C
  c->r[4]=0u+0x00000006u; // 801E5D80
  c->r[5]=0u+0x00000000u; // 801E5D84
  f_801E42F8(c); return; // 801E5D88
}

// fn_801E5D8C
void f_801E5D8C(Ctx* __restrict c) {
  return; // 801E5D8C
}

// fn_801E5D90
void f_801E5D90(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00002384u); // 801E5D90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)28); // 801E5D94
  c->r[4]=c->r[3]+c->r[0]; // 801E5D98
  c->r[0]=R32(c->r[4]+0x000002C8u); // 801E5D9C
  c->r[0]=c->r[0]|0x00000002u; // 801E5DA0
  W32(c->r[4]+0x000002C8u,c->r[0]); // 801E5DA4
  c->r[4]=R32(c->r[3]+0x000023BCu); // 801E5DA8
  f_801E6E20(c); return; // 801E5DAC
}

// fn_801E5DB0
void f_801E5DB0(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x000023C0u); // 801E5DB0
  cmps(c,0,(int32_t)c->r[4],0); // 801E5DB4
  if (crb(c,2)) { goto L_801E5DCC; } // 801E5DB8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801E5DBC
  W32(c->r[3]+0x000023C0u,c->r[0]); // 801E5DC0
  c->r[4]=R32(c->r[3]+0x000023BCu); // 801E5DC4
  f_801E6E20(c); return; // 801E5DC8
L_801E5DCC:;
  c->r[0]=0u+0x0000001Eu; // 801E5DCC
  W32(c->r[3]+0x000023C0u,c->r[0]); // 801E5DD0
  c->r[4]=0u+0x0000000Au; // 801E5DD4
  c->r[5]=0u+0x00000000u; // 801E5DD8
  f_801E42F8(c); return; // 801E5DDC
}

// fn_801E5DE0
void f_801E5DE0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801E5DE0
  c->r[0]=R32(c->r[3]+0x000002E4u); // 801E5DE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5DE8
  cmps(c,0,(int32_t)c->r[0],0); // 801E5DEC
  if (!crb(c,2)) { goto L_801E5DF8; } // 801E5DF0
  c->r[4]=0u+0x00000000u; // 801E5DF4
L_801E5DF8:;
  c->r[0]=R32(c->r[3]+0x00000300u); // 801E5DF8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5DFC
  cmps(c,0,(int32_t)c->r[0],0); // 801E5E00
  if (!crb(c,2)) { goto L_801E5E0C; } // 801E5E04
  c->r[4]=0u+0x00000000u; // 801E5E08
L_801E5E0C:;
  c->r[0]=R32(c->r[3]+0x0000031Cu); // 801E5E0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5E10
  cmps(c,0,(int32_t)c->r[0],0); // 801E5E14
  if (!crb(c,2)) { goto L_801E5E20; } // 801E5E18
  c->r[4]=0u+0x00000000u; // 801E5E1C
L_801E5E20:;
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801E5E20
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5E24
  cmps(c,0,(int32_t)c->r[0],0); // 801E5E28
  if (!crb(c,2)) { goto L_801E5E34; } // 801E5E2C
  c->r[4]=0u+0x00000000u; // 801E5E30
L_801E5E34:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E5E34
  if (!crb(c,2)) { goto L_801E5E48; } // 801E5E38
  c->r[4]=0u+0x00000001u; // 801E5E3C
  c->r[5]=0u+0x00000032u; // 801E5E40
  f_801E42F8(c); return; // 801E5E44
L_801E5E48:;
  c->r[4]=0u+0x00000010u; // 801E5E48
  c->r[5]=0u+0x00000032u; // 801E5E4C
  f_801E42F8(c); return; // 801E5E50
}

// fn_801E5E54
void f_801E5E54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5E54
  c->r[0]=c->lr; // 801E5E58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5E5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5E60
  c->r[31]=c->r[3]|c->r[3]; // 801E5E64
  c->lr=0x801E5E6Cu; f_8007B524(c); // 801E5E68
  c->lr=0x801E5E70u; f_8023BC48(c); // 801E5E6C
  cmps(c,0,(int32_t)c->r[3],0); // 801E5E70
  if (!crb(c,2)) { goto L_801E5E94; } // 801E5E74
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E5E78
  c->r[0]=c->r[0]|0x00000800u; // 801E5E7C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E5E80
  c->lr=0x801E5E88u; f_800483E0(c); // 801E5E84
  c->r[3]=c->r[31]|c->r[31]; // 801E5E88
  c->r[4]=0u+0x00000001u; // 801E5E8C
  c->lr=0x801E5E94u; f_801E6E20(c); // 801E5E90
L_801E5E94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5E94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5E98
  c->lr=c->r[0]; // 801E5E9C
  c->r[1]=c->r[1]+0x00000010u; // 801E5EA0
  return; // 801E5EA4
}

// fn_801E5EA8
void f_801E5EA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5EA8
  c->r[0]=c->lr; // 801E5EAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5EB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5EB4
  c->r[31]=c->r[3]|c->r[3]; // 801E5EB8
  c->lr=0x801E5EC0u; f_8007B524(c); // 801E5EBC
  c->lr=0x801E5EC4u; f_8023BC48(c); // 801E5EC0
  cmps(c,0,(int32_t)c->r[3],0); // 801E5EC4
  if (!crb(c,2)) { goto L_801E5EE8; } // 801E5EC8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E5ECC
  c->r[0]=c->r[0]|0x00004000u; // 801E5ED0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E5ED4
  c->r[3]=c->r[31]|c->r[31]; // 801E5ED8
  c->r[4]=0u+0x00000000u; // 801E5EDC
  c->lr=0x801E5EE4u; f_801E6E20(c); // 801E5EE0
  goto L_801E5EF4; // 801E5EE4
L_801E5EE8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E5EE8
  c->r[4]=0u+0x00000031u; // 801E5EEC
  c->lr=0x801E5EF4u; f_801E6E20(c); // 801E5EF0
L_801E5EF4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5EF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5EF8
  c->lr=c->r[0]; // 801E5EFC
  c->r[1]=c->r[1]+0x00000010u; // 801E5F00
  return; // 801E5F04
}

// fn_801E5F08
void f_801E5F08(Ctx* __restrict c) {
  c->r[4]=0u+0x00000004u; // 801E5F08
  c->r[5]=0u+0x00000001u; // 801E5F0C
  f_801E42F8(c); return; // 801E5F10
}

// fn_801E5F14
void f_801E5F14(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801E5F14
  c->r[0]=R32(c->r[3]+0x000002E4u); // 801E5F18
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5F1C
  cmps(c,0,(int32_t)c->r[0],0); // 801E5F20
  if (!crb(c,2)) { goto L_801E5F2C; } // 801E5F24
  c->r[4]=0u+0x00000000u; // 801E5F28
L_801E5F2C:;
  c->r[0]=R32(c->r[3]+0x00000300u); // 801E5F2C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5F30
  cmps(c,0,(int32_t)c->r[0],0); // 801E5F34
  if (!crb(c,2)) { goto L_801E5F40; } // 801E5F38
  c->r[4]=0u+0x00000000u; // 801E5F3C
L_801E5F40:;
  c->r[0]=R32(c->r[3]+0x0000031Cu); // 801E5F40
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5F44
  cmps(c,0,(int32_t)c->r[0],0); // 801E5F48
  if (!crb(c,2)) { goto L_801E5F54; } // 801E5F4C
  c->r[4]=0u+0x00000000u; // 801E5F50
L_801E5F54:;
  c->r[0]=R32(c->r[3]+0x0000038Cu); // 801E5F54
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801E5F58
  cmps(c,0,(int32_t)c->r[0],0); // 801E5F5C
  if (!crb(c,2)) { goto L_801E5F68; } // 801E5F60
  c->r[4]=0u+0x00000000u; // 801E5F64
L_801E5F68:;
  cmps(c,0,(int32_t)c->r[4],0); // 801E5F68
  if (!crb(c,2)) { goto L_801E5F7C; } // 801E5F6C
  c->r[4]=0u+0x00000002u; // 801E5F70
  c->r[5]=0u+0x00000036u; // 801E5F74
  f_801E42F8(c); return; // 801E5F78
L_801E5F7C:;
  c->r[4]=0u+0x00000011u; // 801E5F7C
  c->r[5]=0u+0x00000036u; // 801E5F80
  f_801E42F8(c); return; // 801E5F84
}

// fn_801E5F88
void f_801E5F88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5F88
  c->r[0]=c->lr; // 801E5F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5F94
  c->r[31]=c->r[3]|c->r[3]; // 801E5F98
  c->lr=0x801E5FA0u; f_8007B524(c); // 801E5F9C
  c->lr=0x801E5FA4u; f_8023BC48(c); // 801E5FA0
  cmps(c,0,(int32_t)c->r[3],0); // 801E5FA4
  if (!crb(c,2)) { goto L_801E5FC8; } // 801E5FA8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E5FAC
  c->r[0]=c->r[0]|0x00000800u; // 801E5FB0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E5FB4
  c->lr=0x801E5FBCu; f_800483E0(c); // 801E5FB8
  c->r[3]=c->r[31]|c->r[31]; // 801E5FBC
  c->r[4]=0u+0x00000001u; // 801E5FC0
  c->lr=0x801E5FC8u; f_801E6E20(c); // 801E5FC4
L_801E5FC8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E5FC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E5FCC
  c->lr=c->r[0]; // 801E5FD0
  c->r[1]=c->r[1]+0x00000010u; // 801E5FD4
  return; // 801E5FD8
}

// fn_801E5FDC
void f_801E5FDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E5FDC
  c->r[0]=c->lr; // 801E5FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E5FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E5FE8
  c->r[31]=c->r[3]|c->r[3]; // 801E5FEC
  c->lr=0x801E5FF4u; f_8007B524(c); // 801E5FF0
  c->lr=0x801E5FF8u; f_8023BC48(c); // 801E5FF4
  cmps(c,0,(int32_t)c->r[3],0); // 801E5FF8
  if (!crb(c,2)) { goto L_801E601C; } // 801E5FFC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E6000
  c->r[0]=c->r[0]|0x00004000u; // 801E6004
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E6008
  c->r[3]=c->r[31]|c->r[31]; // 801E600C
  c->r[4]=0u+0x00000000u; // 801E6010
  c->lr=0x801E6018u; f_801E6E20(c); // 801E6014
  goto L_801E6028; // 801E6018
L_801E601C:;
  c->r[3]=c->r[31]|c->r[31]; // 801E601C
  c->r[4]=0u+0x00000035u; // 801E6020
  c->lr=0x801E6028u; f_801E6E20(c); // 801E6024
L_801E6028:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6028
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E602C
  c->lr=c->r[0]; // 801E6030
  c->r[1]=c->r[1]+0x00000010u; // 801E6034
  return; // 801E6038
}

// fn_801E603C
void f_801E603C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000005u; // 801E603C
  c->r[5]=0u+0x00000001u; // 801E6040
  f_801E42F8(c); return; // 801E6044
}

// fn_801E6048
void f_801E6048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6048
  c->r[0]=c->lr; // 801E604C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6054
  c->r[31]=c->r[3]|c->r[3]; // 801E6058
  c->lr=0x801E6060u; f_8007B524(c); // 801E605C
  c->lr=0x801E6064u; f_8023BC38(c); // 801E6060
  c->r[3]=c->r[31]|c->r[31]; // 801E6064
  c->r[4]=0u+0x00000000u; // 801E6068
  c->lr=0x801E6070u; f_801E6E20(c); // 801E606C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6070
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6074
  c->lr=c->r[0]; // 801E6078
  c->r[1]=c->r[1]+0x00000010u; // 801E607C
  return; // 801E6080
}

// fn_801E6084
void f_801E6084(Ctx* __restrict c) {
  return; // 801E6084
}

// fn_801E6088
void f_801E6088(Ctx* __restrict c) {
  return; // 801E6088
}

// fn_801E608C
void f_801E608C(Ctx* __restrict c) {
  c->r[4]=0u+0x0000000Eu; // 801E608C
  c->r[5]=0u+0x00000000u; // 801E6090
  f_801E42F8(c); return; // 801E6094
}

// fn_801E6098
void f_801E6098(Ctx* __restrict c) {
  c->r[4]=0u+0x0000000Fu; // 801E6098
  c->r[5]=0u+0x0000003Eu; // 801E609C
  f_801E42F8(c); return; // 801E60A0
}

// fn_801E60A4
void f_801E60A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E60A4
  c->r[0]=c->lr; // 801E60A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E60AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E60B0
  c->r[31]=c->r[3]|c->r[3]; // 801E60B4
  c->lr=0x801E60BCu; f_8007B524(c); // 801E60B8
  c->lr=0x801E60C0u; f_8023BC48(c); // 801E60BC
  cmps(c,0,(int32_t)c->r[3],0); // 801E60C0
  if (!crb(c,2)) { goto L_801E60E4; } // 801E60C4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E60C8
  c->r[0]=c->r[0]|0x00000800u; // 801E60CC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E60D0
  c->lr=0x801E60D8u; f_800483E0(c); // 801E60D4
  c->r[3]=c->r[31]|c->r[31]; // 801E60D8
  c->r[4]=0u+0x00000001u; // 801E60DC
  c->lr=0x801E60E4u; f_801E6E20(c); // 801E60E0
L_801E60E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E60E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E60E8
  c->lr=c->r[0]; // 801E60EC
  c->r[1]=c->r[1]+0x00000010u; // 801E60F0
  return; // 801E60F4
}

// fn_801E60F8
void f_801E60F8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000488u); // 801E60F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)324); // 801E60FC
  c->r[3]=c->r[3]+c->r[0]; // 801E6100
  c->r[3]=c->r[3]+0x0000002Cu; // 801E6104
  f_801E34EC(c); return; // 801E6108
}

// fn_801E610C
void f_801E610C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000488u); // 801E610C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)324); // 801E6110
  c->r[3]=c->r[3]+c->r[0]; // 801E6114
  c->r[3]=c->r[3]+0x0000002Cu; // 801E6118
  f_801E3594(c); return; // 801E611C
}

// fn_801E6120
void f_801E6120(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000488u); // 801E6120
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)324); // 801E6124
  c->r[3]=c->r[3]+c->r[0]; // 801E6128
  c->r[3]=c->r[3]+0x0000002Cu; // 801E612C
  f_801E35D8(c); return; // 801E6130
}

// fn_801E6134
void f_801E6134(Ctx* __restrict c) {
  c->r[7]=0u+0xFFFFFFFFu; // 801E6134
  c->r[6]=0u+0x00000000u; // 801E6138
  c->r[0]=R32(c->r[3]+0x00000484u); // 801E613C
  c->ctr=c->r[0]; // 801E6140
  cmpu(c,0,c->r[0],0x00000000u); // 801E6144
  if (!crb(c,1)) { goto L_801E6178; } // 801E6148
L_801E614C:;
  c->r[0]=R32(c->r[3]+0x000002D8u); // 801E614C
  cmpu(c,0,c->r[4],c->r[0]); // 801E6150
  if (!crb(c,2)) { goto L_801E616C; } // 801E6154
  c->r[7]=c->r[7]+0x00000001u; // 801E6158
  cmpu(c,0,c->r[7],c->r[5]); // 801E615C
  if (!crb(c,2)) { goto L_801E616C; } // 801E6160
  c->r[3]=c->r[6]|c->r[6]; // 801E6164
  return; // 801E6168
L_801E616C:;
  c->r[3]=c->r[3]+0x0000001Cu; // 801E616C
  c->r[6]=c->r[6]+0x00000001u; // 801E6170
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E614C; } // 801E6174
L_801E6178:;
  c->r[3]=0u+0xFFFFFFFFu; // 801E6178
  return; // 801E617C
}

// fn_801E6180
void f_801E6180(Ctx* __restrict c) {
  W32(c->r[3]+0x0000237Cu,c->r[4]); // 801E6180
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6184
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF9u; // 801E6188
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E618C
  c->r[0]=c->r[0]|0x00000002u; // 801E6190
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E6194
  c->r[4]=0u+0x00000019u; // 801E6198
  f_801E6E20(c); return; // 801E619C
}

// fn_801E61A0
void f_801E61A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E61A0
  c->r[0]=c->lr; // 801E61A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E61A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E61AC
  c->r[31]=c->r[3]|c->r[3]; // 801E61B0
  c->r[5]=c->r[4]|c->r[4]; // 801E61B4
  c->r[4]=R32(c->r[3]+0x00000488u); // 801E61B8
  c->lr=0x801E61C0u; f_801E6134(c); // 801E61BC
  c->r[0]=c->r[3]+0x00010000u; // 801E61C0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E61C4
  if (crb(c,2)) { goto L_801E61F0; } // 801E61C8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E61CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF9u; // 801E61D0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E61D4
  c->r[0]=c->r[0]|0x00000002u; // 801E61D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E61DC
  W32(c->r[31]+0x00002384u,c->r[3]); // 801E61E0
  c->r[3]=c->r[31]|c->r[31]; // 801E61E4
  c->r[4]=0u+0x00000022u; // 801E61E8
  c->lr=0x801E61F0u; f_801E6E20(c); // 801E61EC
L_801E61F0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E61F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E61F4
  c->lr=c->r[0]; // 801E61F8
  c->r[1]=c->r[1]+0x00000010u; // 801E61FC
  return; // 801E6200
}

// fn_801E6204
void f_801E6204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6204
  c->r[0]=c->lr; // 801E6208
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E620C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6210
  c->r[31]=c->r[3]|c->r[3]; // 801E6214
  c->r[5]=c->r[4]|c->r[4]; // 801E6218
  c->r[4]=R32(c->r[3]+0x00000488u); // 801E621C
  c->lr=0x801E6224u; f_801E6134(c); // 801E6220
  c->r[0]=c->r[3]+0x00010000u; // 801E6224
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801E6228
  if (crb(c,2)) { goto L_801E6254; } // 801E622C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801E6230
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF9u; // 801E6234
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E6238
  c->r[0]=c->r[0]|0x00000002u; // 801E623C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801E6240
  W32(c->r[31]+0x00002384u,c->r[3]); // 801E6244
  c->r[3]=c->r[31]|c->r[31]; // 801E6248
  c->r[4]=0u+0x0000001Du; // 801E624C
  c->lr=0x801E6254u; f_801E6E20(c); // 801E6250
L_801E6254:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6254
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6258
  c->lr=c->r[0]; // 801E625C
  c->r[1]=c->r[1]+0x00000010u; // 801E6260
  return; // 801E6264
}

// fn_801E6268
void f_801E6268(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6268
  c->r[0]=c->lr; // 801E626C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6270
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6274
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6278
  c->r[30]=c->r[3]|c->r[3]; // 801E627C
  cmpu(c,0,c->r[4],0x00000007u); // 801E6280
  if (crb(c,1)) { goto L_801E639C; } // 801E6284
  c->r[5]=0u+0x80470000u; // 801E6288
  c->r[5]=c->r[5]+0x000040D4u; // 801E628C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E6290
  c->r[5]=R32(c->r[5]+c->r[0]); // 801E6294
  c->ctr=c->r[5]; // 801E6298
  if (true) { switch (c->ctr) { case 0x801E62A0u: goto L_801E62A0; case 0x801E62B8u: goto L_801E62B8; case 0x801E62E4u: goto L_801E62E4; case 0x801E630Cu: goto L_801E630C; case 0x801E6324u: goto L_801E6324; case 0x801E633Cu: goto L_801E633C; case 0x801E6354u: goto L_801E6354; case 0x801E636Cu: goto L_801E636C; default: break; } dispatch(c,c->ctr); return; } // 801E629C
L_801E62A0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E62A0
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 801E62A4
  c->r[0]=0u-c->r[3]; // 801E62A8
  c->r[0]=c->r[0]|c->r[3]; // 801E62AC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E62B0
  goto L_801E63A0; // 801E62B4
L_801E62B8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 801E62B8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 801E62BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E62C0
  if (crb(c,2)) { goto L_801E62DC; } // 801E62C4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; // 801E62C8
  cmps(c,0,(int32_t)c->r[0],0); // 801E62CC
  if (!crb(c,2)) { goto L_801E62DC; } // 801E62D0
  c->r[3]=0u+0x00000001u; // 801E62D4
  goto L_801E63A0; // 801E62D8
L_801E62DC:;
  c->r[3]=0u+0x00000000u; // 801E62DC
  goto L_801E63A0; // 801E62E0
L_801E62E4:;
  c->r[31]=0u+0x00000000u; // 801E62E4
  c->lr=0x801E62ECu; f_801E6E28(c); // 801E62E8
  cmps(c,0,(int32_t)c->r[3],0); // 801E62EC
  if (!crb(c,2)) { goto L_801E6304; } // 801E62F0
  c->r[0]=R32(c->r[30]+0x00002394u); // 801E62F4
  cmps(c,0,(int32_t)c->r[0],0); // 801E62F8
  if (!crb(c,2)) { goto L_801E6304; } // 801E62FC
  c->r[31]=0u+0x00000001u; // 801E6300
L_801E6304:;
  c->r[3]=c->r[31]|c->r[31]; // 801E6304
  goto L_801E63A0; // 801E6308
L_801E630C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E630C
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 801E6310
  c->r[0]=0u-c->r[3]; // 801E6314
  c->r[0]=c->r[0]|c->r[3]; // 801E6318
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E631C
  goto L_801E63A0; // 801E6320
L_801E6324:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6324
  c->r[3]=rotl(c->r[0],0)&0x00001000u; // 801E6328
  c->r[0]=0u-c->r[3]; // 801E632C
  c->r[0]=c->r[0]|c->r[3]; // 801E6330
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E6334
  goto L_801E63A0; // 801E6338
L_801E633C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E633C
  c->r[3]=rotl(c->r[0],0)&0x00004000u; // 801E6340
  c->r[0]=0u-c->r[3]; // 801E6344
  c->r[0]=c->r[0]|c->r[3]; // 801E6348
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E634C
  goto L_801E63A0; // 801E6350
L_801E6354:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6354
  c->r[3]=rotl(c->r[0],0)&0x00008000u; // 801E6358
  c->r[0]=0u-c->r[3]; // 801E635C
  c->r[0]=c->r[0]|c->r[3]; // 801E6360
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E6364
  goto L_801E63A0; // 801E6368
L_801E636C:;
  c->r[3]=c->r[3]+0x0000048Cu; // 801E636C
  c->lr=0x801E6374u; f_801E6D20(c); // 801E6370
  cmps(c,0,(int32_t)c->r[3],0); // 801E6374
  if (crb(c,2)) { goto L_801E6384; } // 801E6378
  c->r[3]=0u+0x00000001u; // 801E637C
  goto L_801E63A0; // 801E6380
L_801E6384:;
  c->r[3]=c->r[30]+0x0000048Cu; // 801E6384
  c->lr=0x801E638Cu; f_801E6C60(c); // 801E6388
  c->r[0]=0u-c->r[3]; // 801E638C
  c->r[0]=c->r[0]|c->r[3]; // 801E6390
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E6394
  goto L_801E63A0; // 801E6398
L_801E639C:;
  c->r[3]=0u+0x00000000u; // 801E639C
L_801E63A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E63A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E63A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E63A8
  c->lr=c->r[0]; // 801E63AC
  c->r[1]=c->r[1]+0x00000010u; // 801E63B0
  return; // 801E63B4
}

// fn_801E63B8
void f_801E63B8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000003u; // 801E63B8
  f_801E6E20(c); return; // 801E63BC
}

// fn_801E63C0
void f_801E63C0(Ctx* __restrict c) {
  W32(c->r[3]+0x00000488u,c->r[4]); // 801E63C0
  return; // 801E63C4
}

// fn_801E63C8
void f_801E63C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E63C8
  c->r[0]=c->lr; // 801E63CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E63D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E63D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E63D8
  c->r[0]=R32(c->r[13]+0xFFFFBB18u); // 801E63DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E63E0
  if (!crb(c,2)) { goto L_801E641C; } // 801E63E4
  c->lr=0x801E63ECu; f_80056B5C(c); // 801E63E8
  c->r[30]=c->r[3]|c->r[3]; // 801E63EC
  c->lr=0x801E63F4u; f_8005DEE8(c); // 801E63F0
  c->lr=0x801E63F8u; f_80056B54(c); // 801E63F4
  c->r[3]=0u+0x0000247Cu; // 801E63F8
  c->lr=0x801E6400u; f_80047B64(c); // 801E63FC
  c->r[31]=c->r[3]|c->r[3]; // 801E6400
  cmps(c,0,(int32_t)c->r[3],0); // 801E6404
  if (crb(c,2)) { goto L_801E6410; } // 801E6408
  c->lr=0x801E6410u; f_801E3D34(c); // 801E640C
L_801E6410:;
  W32(c->r[13]+0xFFFFBB18u,c->r[31]); // 801E6410
  c->r[3]=c->r[30]|c->r[30]; // 801E6414
  c->lr=0x801E641Cu; f_80056B54(c); // 801E6418
L_801E641C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E641C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6420
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6424
  c->lr=c->r[0]; // 801E6428
  c->r[1]=c->r[1]+0x00000010u; // 801E642C
  return; // 801E6430
}

// fn_801E6434
void f_801E6434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6434
  c->r[0]=c->lr; // 801E6438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E643C
  c->r[0]=R32(c->r[13]+0xFFFFBB18u); // 801E6440
  cmps(c,0,(int32_t)c->r[0],0); // 801E6444
  if (crb(c,2)) { goto L_801E6458; } // 801E6448
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E644C
  c->lr=0x801E6454u; f_801E6468(c); // 801E6450
  c->lr=0x801E6458u; f_801E451C(c); // 801E6454
L_801E6458:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6458
  c->lr=c->r[0]; // 801E645C
  c->r[1]=c->r[1]+0x00000010u; // 801E6460
  return; // 801E6464
}

// fn_801E6468
void f_801E6468(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000008u; // 801E6468
  return; // 801E646C
}

// fn_801E6470
void f_801E6470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6470
  c->r[0]=c->lr; // 801E6474
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6478
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E647C
  c->lr=0x801E6484u; f_801E6468(c); // 801E6480
  c->lr=0x801E6488u; f_801E63B8(c); // 801E6484
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6488
  c->lr=c->r[0]; // 801E648C
  c->r[1]=c->r[1]+0x00000010u; // 801E6490
  return; // 801E6494
}

// fn_801E6498
void f_801E6498(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6498
  c->r[0]=c->lr; // 801E649C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E64A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E64A4
  c->r[31]=c->r[3]|c->r[3]; // 801E64A8
  c->lr=0x801E64B0u; f_80047C9C(c); // 801E64AC
  c->r[4]=0u+0x00000000u; // 801E64B0
  c->lr=0x801E64B8u; f_800656E8(c); // 801E64B4
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E64B8
  c->lr=0x801E64C0u; f_801E6468(c); // 801E64BC
  c->r[4]=c->r[31]|c->r[31]; // 801E64C0
  c->lr=0x801E64C8u; f_801E6180(c); // 801E64C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E64C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E64CC
  c->lr=c->r[0]; // 801E64D0
  c->r[1]=c->r[1]+0x00000010u; // 801E64D4
  return; // 801E64D8
}

// fn_801E64DC
void f_801E64DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E64DC
  c->r[0]=c->lr; // 801E64E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E64E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E64E8
  c->r[31]=c->r[3]|c->r[3]; // 801E64EC
  c->lr=0x801E64F4u; f_80047C9C(c); // 801E64F0
  c->r[4]=0u+0x00000000u; // 801E64F4
  c->lr=0x801E64FCu; f_800656E8(c); // 801E64F8
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E64FC
  c->r[4]=c->r[31]|c->r[31]; // 801E6500
  c->lr=0x801E6508u; f_801E6538(c); // 801E6504
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6508
  c->lr=0x801E6510u; f_801E6468(c); // 801E650C
  c->lr=0x801E6514u; f_801E6120(c); // 801E6510
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6514
  c->lr=0x801E651Cu; f_801E6468(c); // 801E6518
  c->r[4]=c->r[31]|c->r[31]; // 801E651C
  c->lr=0x801E6524u; f_801E6204(c); // 801E6520
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6524
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6528
  c->lr=c->r[0]; // 801E652C
  c->r[1]=c->r[1]+0x00000010u; // 801E6530
  return; // 801E6534
}

// fn_801E6538
void f_801E6538(Ctx* __restrict c) {
  W32(c->r[3]+0x000023E0u,c->r[4]); // 801E6538
  return; // 801E653C
}

// fn_801E6540
void f_801E6540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6540
  c->r[0]=c->lr; // 801E6544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E654C
  c->lr=0x801E6554u; f_80047C9C(c); // 801E6550
  c->r[4]=0u+0x00000000u; // 801E6554
  c->lr=0x801E655Cu; f_800656E8(c); // 801E6558
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E655C
  c->lr=0x801E6564u; f_801E6468(c); // 801E6560
  c->lr=0x801E6568u; f_801E6E78(c); // 801E6564
  c->lr=0x801E656Cu; f_801E38B8(c); // 801E6568
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E656C
  c->lr=0x801E6574u; f_801E659C(c); // 801E6570
  c->r[31]=c->r[3]|c->r[3]; // 801E6574
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6578
  c->lr=0x801E6580u; f_801E6468(c); // 801E657C
  c->r[4]=c->r[31]|c->r[31]; // 801E6580
  c->lr=0x801E6588u; f_801E61A0(c); // 801E6584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6588
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E658C
  c->lr=c->r[0]; // 801E6590
  c->r[1]=c->r[1]+0x00000010u; // 801E6594
  return; // 801E6598
}

// fn_801E659C
void f_801E659C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000023E0u); // 801E659C
  return; // 801E65A0
}

// fn_801E65A4
void f_801E65A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E65A4
  f_801E659C(c); return; // 801E65A8
}

// fn_801E65AC
void f_801E65AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E65AC
  c->r[0]=c->lr; // 801E65B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E65B4
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E65B8
  cmps(c,0,(int32_t)c->r[3],0); // 801E65BC
  if (crb(c,2)) { goto L_801E65D4; } // 801E65C0
  c->lr=0x801E65C8u; f_801E6468(c); // 801E65C4
  c->r[4]=0u+0x00000002u; // 801E65C8
  c->lr=0x801E65D0u; f_801E6268(c); // 801E65CC
  goto L_801E65D8; // 801E65D0
L_801E65D4:;
  c->r[3]=0u+0x00000001u; // 801E65D4
L_801E65D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E65D8
  c->lr=c->r[0]; // 801E65DC
  c->r[1]=c->r[1]+0x00000010u; // 801E65E0
  return; // 801E65E4
}

// fn_801E65E8
void f_801E65E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E65E8
  c->r[0]=c->lr; // 801E65EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E65F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E65F4
  c->r[31]=c->r[3]|c->r[3]; // 801E65F8
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E65FC
  c->lr=0x801E6604u; f_801E6468(c); // 801E6600
  c->r[4]=0u+0x00000005u; // 801E6604
  c->lr=0x801E660Cu; f_801E6268(c); // 801E6608
  cmps(c,0,(int32_t)c->r[3],0); // 801E660C
  if (crb(c,2)) { goto L_801E661C; } // 801E6610
  c->r[3]=0u+0x00000001u; // 801E6614
  goto L_801E6630; // 801E6618
L_801E661C:;
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E661C
  c->lr=0x801E6624u; f_801E6468(c); // 801E6620
  c->lr=0x801E6628u; f_801E6E78(c); // 801E6624
  c->r[4]=c->r[31]|c->r[31]; // 801E6628
  c->lr=0x801E6630u; f_801E35EC(c); // 801E662C
L_801E6630:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6630
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6634
  c->lr=c->r[0]; // 801E6638
  c->r[1]=c->r[1]+0x00000010u; // 801E663C
  return; // 801E6640
}

// fn_801E6644
void f_801E6644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6644
  c->r[0]=c->lr; // 801E6648
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E664C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E6650
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E6654
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E6658
  c->r[29]=c->r[3]|c->r[3]; // 801E665C
  c->r[30]=c->r[4]|c->r[4]; // 801E6660
  c->r[31]=c->r[5]|c->r[5]; // 801E6664
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6668
  c->lr=0x801E6670u; f_801E6468(c); // 801E666C
  c->lr=0x801E6674u; f_801E6E78(c); // 801E6670
  c->r[4]=c->r[29]|c->r[29]; // 801E6674
  c->r[5]=c->r[30]|c->r[30]; // 801E6678
  c->r[6]=c->r[31]|c->r[31]; // 801E667C
  c->lr=0x801E6684u; f_801E36EC(c); // 801E6680
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6684
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6688
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E668C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6690
  c->lr=c->r[0]; // 801E6694
  c->r[1]=c->r[1]+0x00000020u; // 801E6698
  return; // 801E669C
}

// fn_801E66A0
void f_801E66A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E66A0
  c->r[0]=c->lr; // 801E66A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E66A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E66AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E66B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E66B4
  c->r[29]=c->r[3]|c->r[3]; // 801E66B8
  c->r[30]=c->r[4]|c->r[4]; // 801E66BC
  c->r[31]=c->r[5]|c->r[5]; // 801E66C0
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E66C4
  c->lr=0x801E66CCu; f_801E6468(c); // 801E66C8
  c->lr=0x801E66D0u; f_801E6E78(c); // 801E66CC
  c->r[4]=c->r[29]|c->r[29]; // 801E66D0
  c->r[5]=c->r[30]|c->r[30]; // 801E66D4
  c->r[6]=c->r[31]|c->r[31]; // 801E66D8
  c->lr=0x801E66E0u; f_801E3650(c); // 801E66DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E66E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E66E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E66E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E66EC
  c->lr=c->r[0]; // 801E66F0
  c->r[1]=c->r[1]+0x00000020u; // 801E66F4
  return; // 801E66F8
}

// fn_801E66FC
void f_801E66FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E66FC
  c->r[0]=c->lr; // 801E6700
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6708
  c->r[31]=c->r[3]|c->r[3]; // 801E670C
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6710
  c->lr=0x801E6718u; f_801E6468(c); // 801E6714
  c->r[4]=c->r[31]|c->r[31]; // 801E6718
  c->lr=0x801E6720u; f_801E610C(c); // 801E671C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6720
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6724
  c->lr=c->r[0]; // 801E6728
  c->r[1]=c->r[1]+0x00000010u; // 801E672C
  return; // 801E6730
}

// fn_801E6734
void f_801E6734(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6734
  c->r[0]=c->lr; // 801E6738
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E673C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6740
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6744
  c->r[30]=c->r[3]|c->r[3]; // 801E6748
  c->r[31]=c->r[4]|c->r[4]; // 801E674C
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6750
  c->lr=0x801E6758u; f_801E6468(c); // 801E6754
  c->r[4]=c->r[30]|c->r[30]; // 801E6758
  c->r[5]=c->r[31]|c->r[31]; // 801E675C
  c->lr=0x801E6764u; f_801E60F8(c); // 801E6760
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6764
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6768
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E676C
  c->lr=c->r[0]; // 801E6770
  c->r[1]=c->r[1]+0x00000010u; // 801E6774
  return; // 801E6778
}

// fn_801E677C
void f_801E677C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E677C
  c->r[0]=c->lr; // 801E6780
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6784
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E6788
  c->lr=0x801E6790u; f_801E6468(c); // 801E678C
  c->lr=0x801E6794u; f_801E6E78(c); // 801E6790
  c->lr=0x801E6798u; f_801E6F00(c); // 801E6794
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6798
  c->lr=c->r[0]; // 801E679C
  c->r[1]=c->r[1]+0x00000010u; // 801E67A0
  return; // 801E67A4
}

// fn_801E67A8
void f_801E67A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E67A8
  c->r[0]=c->lr; // 801E67AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E67B0
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E67B4
  c->lr=0x801E67BCu; f_801E6468(c); // 801E67B8
  c->r[4]=0u+0x00000005u; // 801E67BC
  c->lr=0x801E67C4u; f_801E6268(c); // 801E67C0
  c->r[0]=cntlz(c->r[3]); // 801E67C4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E67C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E67CC
  c->lr=c->r[0]; // 801E67D0
  c->r[1]=c->r[1]+0x00000010u; // 801E67D4
  return; // 801E67D8
}

// fn_801E67DC
void f_801E67DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E67DC
  c->r[0]=c->lr; // 801E67E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E67E4
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E67E8
  c->lr=0x801E67F0u; f_801E6468(c); // 801E67EC
  c->r[4]=0u+0x00000001u; // 801E67F0
  c->lr=0x801E67F8u; f_801E6268(c); // 801E67F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E67F8
  c->lr=c->r[0]; // 801E67FC
  c->r[1]=c->r[1]+0x00000010u; // 801E6800
  return; // 801E6804
}

// fn_801E6808
void f_801E6808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6808
  c->r[0]=c->lr; // 801E680C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6810
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6814
  c->r[31]=c->r[3]|c->r[3]; // 801E6818
  c->r[3]=R32(c->r[13]+0xFFFFBB1Cu); // 801E681C
  c->lr=0x801E6824u; f_801E6468(c); // 801E6820
  c->r[4]=c->r[31]|c->r[31]; // 801E6824
  c->lr=0x801E682Cu; f_801E63C0(c); // 801E6828
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E682C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6830
  c->lr=c->r[0]; // 801E6834
  c->r[1]=c->r[1]+0x00000010u; // 801E6838
  return; // 801E683C
}

// fn_801E6840
void f_801E6840(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6840
  c->r[0]=c->lr; // 801E6844
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6848
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E684C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6850
  c->r[30]=c->r[3]|c->r[3]; // 801E6854
  c->r[31]=c->r[4]|c->r[4]; // 801E6858
  cmps(c,0,(int32_t)c->r[3],0); // 801E685C
  if (crb(c,2)) { goto L_801E68DC; } // 801E6860
  c->r[4]=0u+0x80470000u; // 801E6864
  c->r[0]=c->r[4]+0x00004180u; // 801E6868
  W32(c->r[3]+0x00001EECu,c->r[0]); // 801E686C
  c->lr=0x801E6874u; f_801E2020(c); // 801E6870
  c->r[3]=c->r[30]+0x00000FD8u; // 801E6874
  c->r[4]=0u+0x801E0000u; // 801E6878
  c->r[4]=c->r[4]+0x00006A38u; // 801E687C
  c->r[5]=0u+0x000000ECu; // 801E6880
  c->r[6]=0u+0x00000010u; // 801E6884
  c->lr=0x801E688Cu; f_802F08A8(c); // 801E6888
  c->r[3]=c->r[30]+0x00000958u; // 801E688C
  c->r[4]=0u+0x801E0000u; // 801E6890
  c->r[4]=c->r[4]+0x000069DCu; // 801E6894
  c->r[5]=0u+0x00000068u; // 801E6898
  c->r[6]=0u+0x00000010u; // 801E689C
  c->lr=0x801E68A4u; f_802F08A8(c); // 801E68A0
  c->r[3]=c->r[30]+0x00000018u; // 801E68A4
  c->r[4]=0u+0x801E0000u; // 801E68A8
  c->r[4]=c->r[4]+0x0000693Cu; // 801E68AC
  c->r[5]=0u+0x00000094u; // 801E68B0
  c->r[6]=0u+0x00000010u; // 801E68B4
  c->lr=0x801E68BCu; f_802F08A8(c); // 801E68B8
  c->r[3]=c->r[30]|c->r[30]; // 801E68BC
  c->r[4]=0u+0xFFFFFFFFu; // 801E68C0
  c->lr=0x801E68C8u; f_801E68F8(c); // 801E68C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E68C8
  cmps(c,0,(int32_t)c->r[0],0); // 801E68CC
  if (!crb(c,1)) { goto L_801E68DC; } // 801E68D0
  c->r[3]=c->r[30]|c->r[30]; // 801E68D4
  c->lr=0x801E68DCu; f_80047B20(c); // 801E68D8
L_801E68DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801E68DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E68E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E68E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E68E8
  c->lr=c->r[0]; // 801E68EC
  c->r[1]=c->r[1]+0x00000010u; // 801E68F0
  return; // 801E68F4
}

// dtor_801E68F8
void f_801E68F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E68F8
  c->r[0]=c->lr; // 801E68FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6900
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6904
  c->r[31]=c->r[3]|c->r[3]; // 801E6908
  cmps(c,0,(int32_t)c->r[3],0); // 801E690C
  if (crb(c,2)) { goto L_801E6924; } // 801E6910
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801E6914
  cmps(c,0,(int32_t)c->r[0],0); // 801E6918
  if (!crb(c,1)) { goto L_801E6924; } // 801E691C
  c->lr=0x801E6924u; f_80047B20(c); // 801E6920
L_801E6924:;
  c->r[3]=c->r[31]|c->r[31]; // 801E6924
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6928
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E692C
  c->lr=c->r[0]; // 801E6930
  c->r[1]=c->r[1]+0x00000010u; // 801E6934
  return; // 801E6938
}

// dtor_801E693C
void f_801E693C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E693C
  c->r[0]=c->lr; // 801E6940
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6944
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6948
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E694C
  c->r[30]=c->r[3]|c->r[3]; // 801E6950
  c->r[31]=c->r[4]|c->r[4]; // 801E6954
  cmps(c,0,(int32_t)c->r[3],0); // 801E6958
  if (crb(c,2)) { goto L_801E697C; } // 801E695C
  c->r[4]=0u+0x00000000u; // 801E6960
  c->lr=0x801E6968u; f_801E6998(c); // 801E6964
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E6968
  cmps(c,0,(int32_t)c->r[0],0); // 801E696C
  if (!crb(c,1)) { goto L_801E697C; } // 801E6970
  c->r[3]=c->r[30]|c->r[30]; // 801E6974
  c->lr=0x801E697Cu; f_80047B20(c); // 801E6978
L_801E697C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E697C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6980
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6984
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6988
  c->lr=c->r[0]; // 801E698C
  c->r[1]=c->r[1]+0x00000010u; // 801E6990
  return; // 801E6994
}

// dtor_801E6998
void f_801E6998(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6998
  c->r[0]=c->lr; // 801E699C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E69A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E69A4
  c->r[31]=c->r[3]|c->r[3]; // 801E69A8
  cmps(c,0,(int32_t)c->r[3],0); // 801E69AC
  if (crb(c,2)) { goto L_801E69C4; } // 801E69B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801E69B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E69B8
  if (!crb(c,1)) { goto L_801E69C4; } // 801E69BC
  c->lr=0x801E69C4u; f_80047B20(c); // 801E69C0
L_801E69C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E69C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E69C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E69CC
  c->lr=c->r[0]; // 801E69D0
  c->r[1]=c->r[1]+0x00000010u; // 801E69D4
  return; // 801E69D8
}

// dtor_801E69DC
void f_801E69DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E69DC
  c->r[0]=c->lr; // 801E69E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E69E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E69E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E69EC
  c->r[30]=c->r[3]|c->r[3]; // 801E69F0
  c->r[31]=c->r[4]|c->r[4]; // 801E69F4
  cmps(c,0,(int32_t)c->r[3],0); // 801E69F8
  if (crb(c,2)) { goto L_801E6A1C; } // 801E69FC
  c->r[4]=0u+0x00000000u; // 801E6A00
  c->lr=0x801E6A08u; f_801E6998(c); // 801E6A04
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E6A08
  cmps(c,0,(int32_t)c->r[0],0); // 801E6A0C
  if (!crb(c,1)) { goto L_801E6A1C; } // 801E6A10
  c->r[3]=c->r[30]|c->r[30]; // 801E6A14
  c->lr=0x801E6A1Cu; f_80047B20(c); // 801E6A18
L_801E6A1C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E6A1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6A20
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6A24
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6A28
  c->lr=c->r[0]; // 801E6A2C
  c->r[1]=c->r[1]+0x00000010u; // 801E6A30
  return; // 801E6A34
}

// fn_801E6A38
void f_801E6A38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6A38
  c->r[0]=c->lr; // 801E6A3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6A40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6A44
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6A48
  c->r[30]=c->r[3]|c->r[3]; // 801E6A4C
  c->r[31]=c->r[4]|c->r[4]; // 801E6A50
  cmps(c,0,(int32_t)c->r[3],0); // 801E6A54
  if (crb(c,2)) { goto L_801E6A78; } // 801E6A58
  c->r[4]=0u+0x00000000u; // 801E6A5C
  c->lr=0x801E6A64u; f_801E6998(c); // 801E6A60
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E6A64
  cmps(c,0,(int32_t)c->r[0],0); // 801E6A68
  if (!crb(c,1)) { goto L_801E6A78; } // 801E6A6C
  c->r[3]=c->r[30]|c->r[30]; // 801E6A70
  c->lr=0x801E6A78u; f_80047B20(c); // 801E6A74
L_801E6A78:;
  c->r[3]=c->r[30]|c->r[30]; // 801E6A78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6A7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6A80
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6A84
  c->lr=c->r[0]; // 801E6A88
  c->r[1]=c->r[1]+0x00000010u; // 801E6A8C
  return; // 801E6A90
}

// fn_801E6A94
void f_801E6A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6A94
  c->r[0]=c->lr; // 801E6A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6AA0
  c->r[31]=c->r[3]|c->r[3]; // 801E6AA4
  c->r[4]=0u+0x80470000u; // 801E6AA8
  c->r[0]=c->r[4]+0x00004180u; // 801E6AAC
  W32(c->r[3]+0x00001EECu,c->r[0]); // 801E6AB0
  c->lr=0x801E6AB8u; f_801E6C24(c); // 801E6AB4
  c->r[3]=c->r[31]+0x00000018u; // 801E6AB8
  c->r[4]=0u+0x801E0000u; // 801E6ABC
  c->r[4]=c->r[4]+0x00006BE8u; // 801E6AC0
  c->r[5]=0u+0x801E0000u; // 801E6AC4
  c->r[5]=c->r[5]+0x0000693Cu; // 801E6AC8
  c->r[6]=0u+0x00000094u; // 801E6ACC
  c->r[7]=0u+0x00000010u; // 801E6AD0
  c->lr=0x801E6AD8u; f_802F07B0(c); // 801E6AD4
  c->r[3]=c->r[31]+0x00000958u; // 801E6AD8
  c->r[4]=0u+0x801E0000u; // 801E6ADC
  c->r[4]=c->r[4]+0x00006B98u; // 801E6AE0
  c->r[5]=0u+0x801E0000u; // 801E6AE4
  c->r[5]=c->r[5]+0x000069DCu; // 801E6AE8
  c->r[6]=0u+0x00000068u; // 801E6AEC
  c->r[7]=0u+0x00000010u; // 801E6AF0
  c->lr=0x801E6AF8u; f_802F07B0(c); // 801E6AF4
  c->r[3]=c->r[31]+0x00000FD8u; // 801E6AF8
  c->r[4]=0u+0x801E0000u; // 801E6AFC
  c->r[4]=c->r[4]+0x00006B30u; // 801E6B00
  c->r[5]=0u+0x801E0000u; // 801E6B04
  c->r[5]=c->r[5]+0x00006A38u; // 801E6B08
  c->r[6]=0u+0x000000ECu; // 801E6B0C
  c->r[7]=0u+0x00000010u; // 801E6B10
  c->lr=0x801E6B18u; f_802F07B0(c); // 801E6B14
  c->r[3]=c->r[31]|c->r[31]; // 801E6B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6B20
  c->lr=c->r[0]; // 801E6B24
  c->r[1]=c->r[1]+0x00000010u; // 801E6B28
  return; // 801E6B2C
}

// fn_801E6B30
void f_801E6B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6B30
  c->r[0]=c->lr; // 801E6B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6B3C
  c->r[31]=c->r[3]|c->r[3]; // 801E6B40
  c->lr=0x801E6B48u; f_801E6B80(c); // 801E6B44
  c->r[3]=0u+0x80470000u; // 801E6B48
  c->r[0]=c->r[3]+0x00004198u; // 801E6B4C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E6B50
  c->r[3]=c->r[31]|c->r[31]; // 801E6B54
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E6B58
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E6B5C
  c->ctr=c->r[12]; // 801E6B60
  if (true) { c->lr=0x801E6B68u; dispatch(c,c->ctr); } // 801E6B64
  c->r[3]=c->r[31]|c->r[31]; // 801E6B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6B6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6B70
  c->lr=c->r[0]; // 801E6B74
  c->r[1]=c->r[1]+0x00000010u; // 801E6B78
  return; // 801E6B7C
}

// fn_801E6B80
void f_801E6B80(Ctx* __restrict c) {
  c->r[4]=0u+0x80470000u; // 801E6B80
  c->r[0]=c->r[4]+0x00004220u; // 801E6B84
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E6B88
  c->r[0]=0u+0x00000000u; // 801E6B8C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E6B90
  return; // 801E6B94
}

// fn_801E6B98
void f_801E6B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6B98
  c->r[0]=c->lr; // 801E6B9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6BA0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6BA4
  c->r[31]=c->r[3]|c->r[3]; // 801E6BA8
  c->lr=0x801E6BB0u; f_801E6B80(c); // 801E6BAC
  c->r[3]=0u+0x80470000u; // 801E6BB0
  c->r[0]=c->r[3]+0x000041C0u; // 801E6BB4
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E6BB8
  c->r[3]=c->r[31]|c->r[31]; // 801E6BBC
  c->r[12]=R32(c->r[3]+0x00000004u); // 801E6BC0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801E6BC4
  c->ctr=c->r[12]; // 801E6BC8
  if (true) { c->lr=0x801E6BD0u; dispatch(c,c->ctr); } // 801E6BCC
  c->r[3]=c->r[31]|c->r[31]; // 801E6BD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6BD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6BD8
  c->lr=c->r[0]; // 801E6BDC
  c->r[1]=c->r[1]+0x00000010u; // 801E6BE0
  return; // 801E6BE4
}

// fn_801E6BE8
void f_801E6BE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6BE8
  c->r[0]=c->lr; // 801E6BEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6BF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6BF4
  c->r[31]=c->r[3]|c->r[3]; // 801E6BF8
  c->lr=0x801E6C00u; f_801E6B80(c); // 801E6BFC
  c->r[3]=0u+0x80470000u; // 801E6C00
  c->r[0]=c->r[3]+0x000041F0u; // 801E6C04
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E6C08
  c->r[3]=c->r[31]|c->r[31]; // 801E6C0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6C14
  c->lr=c->r[0]; // 801E6C18
  c->r[1]=c->r[1]+0x00000010u; // 801E6C1C
  return; // 801E6C20
}

// fn_801E6C24
void f_801E6C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6C24
  c->r[0]=c->lr; // 801E6C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6C30
  c->r[31]=c->r[3]|c->r[3]; // 801E6C34
  c->r[4]=0u+0x80470000u; // 801E6C38
  c->r[0]=c->r[4]+0x00004240u; // 801E6C3C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801E6C40
  c->lr=0x801E6C48u; f_801E2FE4(c); // 801E6C44
  c->r[3]=c->r[31]|c->r[31]; // 801E6C48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6C4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6C50
  c->lr=c->r[0]; // 801E6C54
  c->r[1]=c->r[1]+0x00000010u; // 801E6C58
  return; // 801E6C5C
}

// fn_801E6C60
void f_801E6C60(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00001E98u); // 801E6C60
  c->r[0]=cntlz(c->r[0]); // 801E6C64
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E6C68
  return; // 801E6C6C
}

// fn_801E6C70
void f_801E6C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6C70
  c->r[0]=c->lr; // 801E6C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6C78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6C7C
  c->r[31]=c->r[3]|c->r[3]; // 801E6C80
  c->r[0]=R32(c->r[3]+0x00001E98u); // 801E6C84
  cmps(c,0,(int32_t)c->r[0],0); // 801E6C88
  if (crb(c,2)) { goto L_801E6CA8; } // 801E6C8C
  c->lr=0x801E6C94u; f_801E6D20(c); // 801E6C90
  cmps(c,0,(int32_t)c->r[3],0); // 801E6C94
  if (crb(c,2)) { goto L_801E6CA8; } // 801E6C98
  c->r[3]=R32(c->r[31]+0x00001E98u); // 801E6C9C
  {uint32_t ea=c->r[2]+0xFFFF9418u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E6CA0
  c->lr=0x801E6CA8u; f_801E6CBC(c); // 801E6CA4
L_801E6CA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6CA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6CAC
  c->lr=c->r[0]; // 801E6CB0
  c->r[1]=c->r[1]+0x00000010u; // 801E6CB4
  return; // 801E6CB8
}

// fn_801E6CBC
void f_801E6CBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 801E6CBC
  c->r[0]=0u+0x00000004u; // 801E6CC0
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801E6CC4
  return; // 801E6CC8
}

// fn_801E6CCC
void f_801E6CCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6CCC
  c->r[0]=c->lr; // 801E6CD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6CD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6CD8
  c->r[31]=c->r[3]|c->r[3]; // 801E6CDC
  c->r[0]=R32(c->r[3]+0x00001E98u); // 801E6CE0
  cmps(c,0,(int32_t)c->r[0],0); // 801E6CE4
  if (crb(c,2)) { goto L_801E6D0C; } // 801E6CE8
  c->lr=0x801E6CF0u; f_801E6D20(c); // 801E6CEC
  cmps(c,0,(int32_t)c->r[3],0); // 801E6CF0
  if (crb(c,2)) { goto L_801E6D0C; } // 801E6CF4
  c->r[3]=R32(c->r[31]+0x00001E98u); // 801E6CF8
  c->lr=0x801E6D00u; f_801E2F4C(c); // 801E6CFC
  c->r[3]=R32(c->r[31]+0x00001E98u); // 801E6D00
  c->r[4]=0u+0x00000000u; // 801E6D04
  c->lr=0x801E6D0Cu; f_801E2F38(c); // 801E6D08
L_801E6D0C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6D0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6D10
  c->lr=c->r[0]; // 801E6D14
  c->r[1]=c->r[1]+0x00000010u; // 801E6D18
  return; // 801E6D1C
}

// fn_801E6D20
void f_801E6D20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00001E98u); // 801E6D20
  cmps(c,0,(int32_t)c->r[3],0); // 801E6D24
  if (crb(c,2)) { goto L_801E6D30; } // 801E6D28
  goto L_801E6D38; // 801E6D2C
L_801E6D30:;
  c->r[3]=0u+0x00000000u; // 801E6D30
  return; // 801E6D34
L_801E6D38:;
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E6D38
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801E6D3C
  c->r[0]=cntlz(c->r[0]); // 801E6D40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E6D44
  return; // 801E6D48
}

// fn_801E6D4C
void f_801E6D4C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E6D4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E6D50
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E6D54
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E6D58
  return; // 801E6D5C
}

// fn_801E6D60
void f_801E6D60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6D60
  c->r[0]=c->lr; // 801E6D64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6D68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6D6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6D70
  c->r[30]=c->r[3]|c->r[3]; // 801E6D74
  c->r[31]=c->r[4]|c->r[4]; // 801E6D78
  c->r[3]=R32(c->r[3]+0x00001E98u); // 801E6D7C
  cmps(c,0,(int32_t)c->r[3],0); // 801E6D80
  if (!crb(c,2)) { goto L_801E6D98; } // 801E6D84
  c->r[0]=0u+0x00000000u; // 801E6D88
  W32(c->r[4]+0x00000000u,c->r[0]); // 801E6D8C
  W32(c->r[4]+0x00000004u,c->r[0]); // 801E6D90
  goto L_801E6DAC; // 801E6D94
L_801E6D98:;
  c->lr=0x801E6D9Cu; f_801E6DC4(c); // 801E6D98
  W32(c->r[31]+0x00000000u,c->r[3]); // 801E6D9C
  c->r[3]=R32(c->r[30]+0x00001E98u); // 801E6DA0
  c->lr=0x801E6DA8u; f_801E2F94(c); // 801E6DA4
  W32(c->r[31]+0x00000004u,c->r[3]); // 801E6DA8
L_801E6DAC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6DAC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6DB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6DB4
  c->lr=c->r[0]; // 801E6DB8
  c->r[1]=c->r[1]+0x00000010u; // 801E6DBC
  return; // 801E6DC0
}

// fn_801E6DC4
void f_801E6DC4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E6DC4
  return; // 801E6DC8
}

// fn_801E6DCC
void f_801E6DCC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00001EE0u); // 801E6DCC
  return; // 801E6DD0
}

// fn_801E6DD4
void f_801E6DD4(Ctx* __restrict c) {
  c->r[0]=c->r[3]|c->r[3]; // 801E6DD4
  c->r[3]=c->r[4]|c->r[4]; // 801E6DD8
  c->r[4]=c->r[0]|c->r[0]; // 801E6DDC
  goto L_801E6DE4; // 801E6DE0
L_801E6DE4:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801E6DE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801E6DE8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E6DEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801E6DF0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E6DF4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801E6DF8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E6DFC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801E6E00
  c->r[0]=R32(c->r[4]+0x00000010u); // 801E6E04
  W32(c->r[3]+0x00000010u,c->r[0]); // 801E6E08
  return; // 801E6E0C
}

// fn_801E6E10
void f_801E6E10(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E6E10
  W32(c->r[3]+0x000023B8u,c->r[0]); // 801E6E14
  W32(c->r[3]+0x000023BCu,c->r[0]); // 801E6E18
  return; // 801E6E1C
}

// fn_801E6E20
void f_801E6E20(Ctx* __restrict c) {
  W32(c->r[3]+0x00002394u,c->r[4]); // 801E6E20
  return; // 801E6E24
}

// fn_801E6E28
void f_801E6E28(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00002390u); // 801E6E28
  return; // 801E6E2C
}

// fn_801E6E30
void f_801E6E30(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x00002394u); // 801E6E30
  c->r[0]=c->r[4]+0x00000001u; // 801E6E34
  W32(c->r[3]+0x00002394u,c->r[0]); // 801E6E38
  return; // 801E6E3C
}

// fn_801E6E40
void f_801E6E40(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E6E40
  c->r[3]=rotl(c->r[0],0)&0x00000010u; // 801E6E44
  c->r[0]=0u-c->r[3]; // 801E6E48
  c->r[0]=c->r[0]|c->r[3]; // 801E6E4C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E6E50
  return; // 801E6E54
}

// fn_801E6E58
void f_801E6E58(Ctx* __restrict c) {
  W32(c->r[3]+0x000023B8u,c->r[4]); // 801E6E58
  W32(c->r[3]+0x000023BCu,c->r[5]); // 801E6E5C
  return; // 801E6E60
}

// fn_801E6E64
void f_801E6E64(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000239Cu); // 801E6E64
  W32(c->r[3]+0x00002394u,c->r[0]); // 801E6E68
  c->r[0]=0u+0x00000000u; // 801E6E6C
  W32(c->r[3]+0x0000239Cu,c->r[0]); // 801E6E70
  return; // 801E6E74
}

// fn_801E6E78
void f_801E6E78(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000488u); // 801E6E78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)324); // 801E6E7C
  c->r[3]=c->r[3]+c->r[0]; // 801E6E80
  c->r[3]=c->r[3]+0x0000002Cu; // 801E6E84
  return; // 801E6E88
}

// dtor_801E6E8C
void f_801E6E8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6E8C
  c->r[0]=c->lr; // 801E6E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E6E94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E6E98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E6E9C
  c->r[30]=c->r[3]|c->r[3]; // 801E6EA0
  c->r[31]=c->r[4]|c->r[4]; // 801E6EA4
  cmps(c,0,(int32_t)c->r[3],0); // 801E6EA8
  if (crb(c,2)) { goto L_801E6ED4; } // 801E6EAC
  c->r[4]=0u+0x80470000u; // 801E6EB0
  c->r[0]=c->r[4]+0x00004168u; // 801E6EB4
  W32(c->r[3]+0x00000140u,c->r[0]); // 801E6EB8
  c->lr=0x801E6EC0u; f_801E3200(c); // 801E6EBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E6EC0
  cmps(c,0,(int32_t)c->r[0],0); // 801E6EC4
  if (!crb(c,1)) { goto L_801E6ED4; } // 801E6EC8
  c->r[3]=c->r[30]|c->r[30]; // 801E6ECC
  c->lr=0x801E6ED4u; f_80047B20(c); // 801E6ED0
L_801E6ED4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E6ED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E6ED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E6EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E6EE0
  c->lr=c->r[0]; // 801E6EE4
  c->r[1]=c->r[1]+0x00000010u; // 801E6EE8
  return; // 801E6EEC
}

// fn_801E6EF0
void f_801E6EF0(Ctx* __restrict c) {
  c->r[4]=0u+0x80470000u; // 801E6EF0
  c->r[0]=c->r[4]+0x00004168u; // 801E6EF4
  W32(c->r[3]+0x00000140u,c->r[0]); // 801E6EF8
  return; // 801E6EFC
}

// fn_801E6F00
void f_801E6F00(Ctx* __restrict c) {
  c->r[0]=R8(c->r[3]+0x00000034u); // 801E6F00
  c->r[0]=cntlz(c->r[0]); // 801E6F04
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E6F08
  return; // 801E6F0C
}

// fn_801E6F10
void f_801E6F10(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801E6F10
  c->r[3]=c->r[3]+0x000010F8u; // 801E6F14
  return; // 801E6F18
}

// fn_801E6F1C
void f_801E6F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6F1C
  c->r[0]=c->lr; // 801E6F20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E6F24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E6F28
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E6F2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E6F30
  c->r[29]=c->r[3]|c->r[3]; // 801E6F34
  c->r[30]=0u+0x00000000u; // 801E6F38
  goto L_801E6F84; // 801E6F3C
L_801E6F40:;
  c->r[3]=c->r[29]|c->r[29]; // 801E6F40
  c->r[4]=c->r[30]|c->r[30]; // 801E6F44
  c->lr=0x801E6F4Cu; f_801E6FB4(c); // 801E6F48
  c->r[31]=c->r[3]|c->r[3]; // 801E6F4C
  c->r[3]=c->r[29]|c->r[29]; // 801E6F50
  c->r[4]=R32(c->r[31]+0x00000008u); // 801E6F54
  c->lr=0x801E6F5Cu; f_801E6FD0(c); // 801E6F58
  W32(c->r[31]+0x00000008u,c->r[3]); // 801E6F5C
  c->r[3]=c->r[29]|c->r[29]; // 801E6F60
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801E6F64
  c->lr=0x801E6F6Cu; f_801E6FD0(c); // 801E6F68
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801E6F6C
  c->r[3]=c->r[29]|c->r[29]; // 801E6F70
  c->r[4]=R32(c->r[31]+0x00000010u); // 801E6F74
  c->lr=0x801E6F7Cu; f_801E6FD0(c); // 801E6F78
  W32(c->r[31]+0x00000010u,c->r[3]); // 801E6F7C
  c->r[30]=c->r[30]+0x00000001u; // 801E6F80
L_801E6F84:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 801E6F84
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E6F88
  cmpu(c,0,c->r[30],c->r[0]); // 801E6F8C
  if (crb(c,0)) { IRQCHK(c); goto L_801E6F40; } // 801E6F90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E6F94
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E6F98
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E6F9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E6FA0
  c->lr=c->r[0]; // 801E6FA4
  c->r[1]=c->r[1]+0x00000020u; // 801E6FA8
  return; // 801E6FAC
}

// fn_801E6FB0
void f_801E6FB0(Ctx* __restrict c) {
  f_801E6FB4(c); return; // 801E6FB0
}

// fn_801E6FB4
void f_801E6FB4(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801E6FB4
  c->r[3]=R32(c->r[3]+0x00000034u); // 801E6FB8
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E6FBC
  c->r[0]=c->r[4]-c->r[0]; // 801E6FC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801E6FC4
  c->r[3]=c->r[5]+c->r[0]; // 801E6FC8
  return; // 801E6FCC
}

// fn_801E6FD0
void f_801E6FD0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801E6FD0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E6FD4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E6FD8
  c->r[3]=c->r[3]+c->r[0]; // 801E6FDC
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801E6FE0
  return; // 801E6FE4
}

// fn_801E6FE8
void f_801E6FE8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E6FE8
  c->r[3]=c->r[13]+0xFFFF9D68u; // 801E6FEC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E6FF0
  return; // 801E6FF4
}

// fn_801E6FF8
void f_801E6FF8(Ctx* __restrict c) {
  f_801E713C(c); return; // 801E6FF8
}

// fn_801E6FFC
void f_801E6FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E6FFC
  c->r[0]=c->lr; // 801E7000
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7004
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E7008
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E700C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7010
  c->r[29]=c->r[3]|c->r[3]; // 801E7014
  c->r[30]=c->r[5]|c->r[5]; // 801E7018
  c->lr=0x801E7020u; f_801E713C(c); // 801E701C
  c->r[31]=c->r[3]|c->r[3]; // 801E7020
  c->r[0]=R32(c->r[3]+0x00000000u); // 801E7024
  W32(c->r[30]+0x00000000u,c->r[0]); // 801E7028
  c->r[0]=R32(c->r[3]+0x00000004u); // 801E702C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801E7030
  c->r[0]=R32(c->r[3]+0x00000008u); // 801E7034
  W32(c->r[30]+0x00000008u,c->r[0]); // 801E7038
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801E703C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801E7040
  c->r[3]=c->r[29]|c->r[29]; // 801E7044
  c->r[4]=R32(c->r[31]+0x00000010u); // 801E7048
  c->lr=0x801E7050u; f_801E7158(c); // 801E704C
  W32(c->r[30]+0x00000010u,c->r[3]); // 801E7050
  c->r[3]=c->r[29]|c->r[29]; // 801E7054
  c->r[4]=R32(c->r[31]+0x00000014u); // 801E7058
  c->lr=0x801E7060u; f_801E7158(c); // 801E705C
  W32(c->r[30]+0x00000014u,c->r[3]); // 801E7060
  c->r[0]=R32(c->r[31]+0x00000018u); // 801E7064
  W32(c->r[30]+0x00000018u,c->r[0]); // 801E7068
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801E706C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801E7070
  c->r[0]=R32(c->r[31]+0x00000020u); // 801E7074
  W32(c->r[30]+0x00000020u,c->r[0]); // 801E7078
  c->r[0]=R32(c->r[31]+0x00000024u); // 801E707C
  W32(c->r[30]+0x00000024u,c->r[0]); // 801E7080
  c->r[0]=R32(c->r[31]+0x00000028u); // 801E7084
  W32(c->r[30]+0x00000028u,c->r[0]); // 801E7088
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801E708C
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801E7090
  c->r[0]=R32(c->r[31]+0x00000030u); // 801E7094
  W32(c->r[30]+0x00000030u,c->r[0]); // 801E7098
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E709C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E70A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E70A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E70A8
  c->lr=c->r[0]; // 801E70AC
  c->r[1]=c->r[1]+0x00000020u; // 801E70B0
  return; // 801E70B4
}

// fn_801E70B8
void f_801E70B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E70B8
  c->r[0]=c->lr; // 801E70BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E70C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E70C4
  c->r[31]=c->r[3]|c->r[3]; // 801E70C8
  c->lr=0x801E70D0u; f_801E713C(c); // 801E70CC
  c->r[4]=c->r[3]|c->r[3]; // 801E70D0
  c->r[3]=c->r[31]|c->r[31]; // 801E70D4
  c->r[4]=R32(c->r[4]+0x00000010u); // 801E70D8
  c->lr=0x801E70E0u; f_801E7158(c); // 801E70DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E70E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E70E4
  c->lr=c->r[0]; // 801E70E8
  c->r[1]=c->r[1]+0x00000010u; // 801E70EC
  return; // 801E70F0
}

// fn_801E70F4
void f_801E70F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E70F4
  c->r[0]=c->lr; // 801E70F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E70FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7100
  c->r[31]=c->r[3]|c->r[3]; // 801E7104
  c->lr=0x801E710Cu; f_801E713C(c); // 801E7108
  c->r[4]=c->r[3]|c->r[3]; // 801E710C
  c->r[3]=c->r[31]|c->r[31]; // 801E7110
  c->r[4]=R32(c->r[4]+0x00000014u); // 801E7114
  c->lr=0x801E711Cu; f_801E7158(c); // 801E7118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E711C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7120
  c->lr=c->r[0]; // 801E7124
  c->r[1]=c->r[1]+0x00000010u; // 801E7128
  return; // 801E712C
}

// fn_801E7130
void f_801E7130(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801E7130
  c->r[3]=R32(c->r[3]+0x00000008u); // 801E7134
  return; // 801E7138
}

// fn_801E713C
void f_801E713C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801E713C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801E7140
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E7144
  c->r[0]=c->r[4]-c->r[0]; // 801E7148
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 801E714C
  c->r[3]=c->r[5]+c->r[0]; // 801E7150
  return; // 801E7154
}

// fn_801E7158
void f_801E7158(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801E7158
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801E715C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801E7160
  c->r[3]=c->r[3]+c->r[0]; // 801E7164
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801E7168
  return; // 801E716C
}

// fn_801E7170
void f_801E7170(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801E7170
  c->r[3]=c->r[3]+0x00001108u; // 801E7174
  return; // 801E7178
}

// fn_801E717C
void f_801E717C(Ctx* __restrict c) {
  goto L_801E7180; // 801E717C
L_801E7180:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 801E7180
  c->r[3]=R32(c->r[3]+0x00000034u); // 801E7184
  c->r[0]=R32(c->r[3]+0x00000018u); // 801E7188
  c->r[0]=c->r[4]-c->r[0]; // 801E718C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)180); // 801E7190
  c->r[3]=c->r[5]+c->r[0]; // 801E7194
  return; // 801E7198
}

// fn_801E719C
void f_801E719C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E719C
  c->r[0]=c->lr; // 801E71A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E71A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E71A8
  c->r[31]=c->r[3]|c->r[3]; // 801E71AC
  c->lr=0x801E71B4u; f_8012FD20(c); // 801E71B0
  c->r[3]=0u+0x80470000u; // 801E71B4
  c->r[0]=c->r[3]+0x00004358u; // 801E71B8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E71BC
  c->r[3]=c->r[31]|c->r[31]; // 801E71C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E71C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E71C8
  c->lr=c->r[0]; // 801E71CC
  c->r[1]=c->r[1]+0x00000010u; // 801E71D0
  return; // 801E71D4
}

// fn_801E71D8
void f_801E71D8(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801E71D8
  c->r[3]=c->r[3]+0x00001118u; // 801E71DC
  return; // 801E71E0
}

// fn_801E71E4
void f_801E71E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E71E4
  c->r[0]=c->lr; // 801E71E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E71EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E71F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E71F4
  c->r[30]=c->r[3]|c->r[3]; // 801E71F8
  c->r[31]=c->r[4]|c->r[4]; // 801E71FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E7200
  if (crb(c,2)) { goto L_801E7224; } // 801E7204
  c->r[4]=0u+0x00000000u; // 801E7208
  c->lr=0x801E7210u; f_80111890(c); // 801E720C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E7210
  cmps(c,0,(int32_t)c->r[0],0); // 801E7214
  if (!crb(c,1)) { goto L_801E7224; } // 801E7218
  c->r[3]=c->r[30]|c->r[30]; // 801E721C
  c->lr=0x801E7224u; f_80047B20(c); // 801E7220
L_801E7224:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7224
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7228
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E722C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7230
  c->lr=c->r[0]; // 801E7234
  c->r[1]=c->r[1]+0x00000010u; // 801E7238
  return; // 801E723C
}

// fn_801E7240
void f_801E7240(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7240
  c->r[0]=c->lr; // 801E7244
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E724C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7250
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7254
  c->r[29]=c->r[3]|c->r[3]; // 801E7258
  c->lr=0x801E7260u; f_80056B5C(c); // 801E725C
  c->r[30]=c->r[3]|c->r[3]; // 801E7260
  c->lr=0x801E7268u; f_8005DEE8(c); // 801E7264
  c->lr=0x801E726Cu; f_80056B54(c); // 801E7268
  c->r[3]=0u+0x00000010u; // 801E726C
  c->lr=0x801E7274u; f_80047B64(c); // 801E7270
  c->r[31]=c->r[3]|c->r[3]; // 801E7274
  cmps(c,0,(int32_t)c->r[3],0); // 801E7278
  if (crb(c,2)) { goto L_801E7284; } // 801E727C
  c->lr=0x801E7284u; f_801E719C(c); // 801E7280
L_801E7284:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7284
  c->lr=0x801E728Cu; f_80056B54(c); // 801E7288
  c->r[3]=c->r[31]|c->r[31]; // 801E728C
  c->r[4]=0u+0x0000001Du; // 801E7290
  c->lr=0x801E7298u; f_801119B0(c); // 801E7294
  c->r[3]=c->r[29]+0x0000000Cu; // 801E7298
  c->r[4]=c->r[31]|c->r[31]; // 801E729C
  c->lr=0x801E72A4u; f_8028CA70(c); // 801E72A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E72A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E72A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E72AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E72B0
  c->lr=c->r[0]; // 801E72B4
  c->r[1]=c->r[1]+0x00000020u; // 801E72B8
  return; // 801E72BC
}

// fn_801E72C0
void f_801E72C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E72C0
  c->r[0]=c->lr; // 801E72C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E72C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E72CC
  c->lr=0x801E72D4u; f_8011C12C(c); // 801E72D0
  c->r[4]=0u+0x0000001Au; // 801E72D4
  c->lr=0x801E72DCu; f_8011CFF4(c); // 801E72D8
  c->r[31]=c->r[3]|c->r[3]; // 801E72DC
  c->r[4]=0u+0x00000003u; // 801E72E0
  c->lr=0x801E72E8u; f_80111C6C(c); // 801E72E4
  c->r[3]=c->r[31]|c->r[31]; // 801E72E8
  c->r[4]=0u+0x00000000u; // 801E72EC
  c->lr=0x801E72F4u; f_80111C74(c); // 801E72F0
  c->r[3]=c->r[31]|c->r[31]; // 801E72F4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E72F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E72FC
  c->ctr=c->r[12]; // 801E7300
  if (true) { c->lr=0x801E7308u; dispatch(c,c->ctr); } // 801E7304
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7308
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E730C
  c->lr=c->r[0]; // 801E7310
  c->r[1]=c->r[1]+0x00000010u; // 801E7314
  return; // 801E7318
}

// fn_801E731C
void f_801E731C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E731C
  c->r[0]=c->lr; // 801E7320
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7324
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7328
  c->r[31]=c->r[3]|c->r[3]; // 801E732C
  c->lr=0x801E7334u; f_8012FD20(c); // 801E7330
  c->r[3]=0u+0x80470000u; // 801E7334
  c->r[0]=c->r[3]+0x00004380u; // 801E7338
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E733C
  c->r[3]=c->r[31]|c->r[31]; // 801E7340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7344
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7348
  c->lr=c->r[0]; // 801E734C
  c->r[1]=c->r[1]+0x00000010u; // 801E7350
  return; // 801E7354
}

// fn_801E7358
void f_801E7358(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801E7358
  c->r[3]=c->r[3]+0x00001228u; // 801E735C
  return; // 801E7360
}

// fn_801E7364
void f_801E7364(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7364
  c->r[0]=c->lr; // 801E7368
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E736C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7370
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7374
  c->r[30]=c->r[3]|c->r[3]; // 801E7378
  c->r[31]=c->r[4]|c->r[4]; // 801E737C
  cmps(c,0,(int32_t)c->r[3],0); // 801E7380
  if (crb(c,2)) { goto L_801E73A4; } // 801E7384
  c->r[4]=0u+0x00000000u; // 801E7388
  c->lr=0x801E7390u; f_80111890(c); // 801E738C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E7390
  cmps(c,0,(int32_t)c->r[0],0); // 801E7394
  if (!crb(c,1)) { goto L_801E73A4; } // 801E7398
  c->r[3]=c->r[30]|c->r[30]; // 801E739C
  c->lr=0x801E73A4u; f_80047B20(c); // 801E73A0
L_801E73A4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E73A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E73A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E73AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E73B0
  c->lr=c->r[0]; // 801E73B4
  c->r[1]=c->r[1]+0x00000010u; // 801E73B8
  return; // 801E73BC
}

// fn_801E73C0
void f_801E73C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E73C0
  c->r[0]=c->lr; // 801E73C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E73C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E73CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E73D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E73D4
  c->r[29]=c->r[3]|c->r[3]; // 801E73D8
  c->lr=0x801E73E0u; f_80056B5C(c); // 801E73DC
  c->r[30]=c->r[3]|c->r[3]; // 801E73E0
  c->lr=0x801E73E8u; f_8005DEE8(c); // 801E73E4
  c->lr=0x801E73ECu; f_80056B54(c); // 801E73E8
  c->r[3]=0u+0x00000010u; // 801E73EC
  c->lr=0x801E73F4u; f_80047B64(c); // 801E73F0
  c->r[31]=c->r[3]|c->r[3]; // 801E73F4
  cmps(c,0,(int32_t)c->r[3],0); // 801E73F8
  if (crb(c,2)) { goto L_801E7404; } // 801E73FC
  c->lr=0x801E7404u; f_801E731C(c); // 801E7400
L_801E7404:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7404
  c->lr=0x801E740Cu; f_80056B54(c); // 801E7408
  c->r[3]=c->r[31]|c->r[31]; // 801E740C
  c->r[4]=0u+0x0000001Cu; // 801E7410
  c->lr=0x801E7418u; f_801119B0(c); // 801E7414
  c->r[3]=c->r[29]+0x0000000Cu; // 801E7418
  c->r[4]=c->r[31]|c->r[31]; // 801E741C
  c->lr=0x801E7424u; f_8028CA70(c); // 801E7420
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7424
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E7428
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E742C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7430
  c->lr=c->r[0]; // 801E7434
  c->r[1]=c->r[1]+0x00000020u; // 801E7438
  return; // 801E743C
}

// fn_801E7440
void f_801E7440(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7440
  c->r[0]=c->lr; // 801E7444
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E744C
  c->lr=0x801E7454u; f_8011C12C(c); // 801E7450
  c->r[4]=0u+0x0000001Au; // 801E7454
  c->lr=0x801E745Cu; f_8011CFF4(c); // 801E7458
  c->r[31]=c->r[3]|c->r[3]; // 801E745C
  c->r[4]=0u+0x00000002u; // 801E7460
  c->lr=0x801E7468u; f_80111C6C(c); // 801E7464
  c->r[3]=c->r[31]|c->r[31]; // 801E7468
  c->r[4]=0u+0x00000000u; // 801E746C
  c->lr=0x801E7474u; f_80111C74(c); // 801E7470
  c->r[3]=c->r[31]|c->r[31]; // 801E7474
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E7478
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E747C
  c->ctr=c->r[12]; // 801E7480
  if (true) { c->lr=0x801E7488u; dispatch(c,c->ctr); } // 801E7484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7488
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E748C
  c->lr=c->r[0]; // 801E7490
  c->r[1]=c->r[1]+0x00000010u; // 801E7494
  return; // 801E7498
}

// fn_801E749C
void f_801E749C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E749C
  c->r[0]=c->lr; // 801E74A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E74A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E74A8
  c->r[31]=c->r[3]|c->r[3]; // 801E74AC
  c->lr=0x801E74B4u; f_8012FD20(c); // 801E74B0
  c->r[3]=0u+0x80470000u; // 801E74B4
  c->r[0]=c->r[3]+0x000043A8u; // 801E74B8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801E74BC
  c->r[3]=c->r[31]|c->r[31]; // 801E74C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E74C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E74C8
  c->lr=c->r[0]; // 801E74CC
  c->r[1]=c->r[1]+0x00000010u; // 801E74D0
  return; // 801E74D4
}

// fn_801E74D8
void f_801E74D8(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801E74D8
  c->r[3]=c->r[3]+0x00001338u; // 801E74DC
  return; // 801E74E0
}

// fn_801E74E4
void f_801E74E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E74E4
  c->r[0]=c->lr; // 801E74E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E74EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E74F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E74F4
  c->r[30]=c->r[3]|c->r[3]; // 801E74F8
  c->r[31]=c->r[4]|c->r[4]; // 801E74FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E7500
  if (crb(c,2)) { goto L_801E7524; } // 801E7504
  c->r[4]=0u+0x00000000u; // 801E7508
  c->lr=0x801E7510u; f_80111890(c); // 801E750C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E7510
  cmps(c,0,(int32_t)c->r[0],0); // 801E7514
  if (!crb(c,1)) { goto L_801E7524; } // 801E7518
  c->r[3]=c->r[30]|c->r[30]; // 801E751C
  c->lr=0x801E7524u; f_80047B20(c); // 801E7520
L_801E7524:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7528
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E752C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7530
  c->lr=c->r[0]; // 801E7534
  c->r[1]=c->r[1]+0x00000010u; // 801E7538
  return; // 801E753C
}

// fn_801E7540
void f_801E7540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7540
  c->r[0]=c->lr; // 801E7544
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E754C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E7550
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7554
  c->r[29]=c->r[3]|c->r[3]; // 801E7558
  c->lr=0x801E7560u; f_80056B5C(c); // 801E755C
  c->r[30]=c->r[3]|c->r[3]; // 801E7560
  c->lr=0x801E7568u; f_8005DEE8(c); // 801E7564
  c->lr=0x801E756Cu; f_80056B54(c); // 801E7568
  c->r[3]=0u+0x00000010u; // 801E756C
  c->lr=0x801E7574u; f_80047B64(c); // 801E7570
  c->r[31]=c->r[3]|c->r[3]; // 801E7574
  cmps(c,0,(int32_t)c->r[3],0); // 801E7578
  if (crb(c,2)) { goto L_801E7584; } // 801E757C
  c->lr=0x801E7584u; f_801E749C(c); // 801E7580
L_801E7584:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7584
  c->lr=0x801E758Cu; f_80056B54(c); // 801E7588
  c->r[3]=c->r[31]|c->r[31]; // 801E758C
  c->r[4]=0u+0x0000001Eu; // 801E7590
  c->lr=0x801E7598u; f_801119B0(c); // 801E7594
  c->r[3]=c->r[29]+0x0000000Cu; // 801E7598
  c->r[4]=c->r[31]|c->r[31]; // 801E759C
  c->lr=0x801E75A4u; f_8028CA70(c); // 801E75A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E75A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E75A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E75AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E75B0
  c->lr=c->r[0]; // 801E75B4
  c->r[1]=c->r[1]+0x00000020u; // 801E75B8
  return; // 801E75BC
}

// fn_801E75C0
void f_801E75C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E75C0
  c->r[0]=c->lr; // 801E75C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E75C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E75CC
  c->lr=0x801E75D4u; f_8011C12C(c); // 801E75D0
  c->r[4]=0u+0x0000001Au; // 801E75D4
  c->lr=0x801E75DCu; f_8011CFF4(c); // 801E75D8
  c->r[31]=c->r[3]|c->r[3]; // 801E75DC
  c->r[4]=0u+0x00000004u; // 801E75E0
  c->lr=0x801E75E8u; f_80111C6C(c); // 801E75E4
  c->r[3]=c->r[31]|c->r[31]; // 801E75E8
  c->r[4]=0u+0x00000000u; // 801E75EC
  c->lr=0x801E75F4u; f_80111C74(c); // 801E75F0
  c->r[3]=c->r[31]|c->r[31]; // 801E75F4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E75F8
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E75FC
  c->ctr=c->r[12]; // 801E7600
  if (true) { c->lr=0x801E7608u; dispatch(c,c->ctr); } // 801E7604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7608
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E760C
  c->lr=c->r[0]; // 801E7610
  c->r[1]=c->r[1]+0x00000010u; // 801E7614
  return; // 801E7618
}

// fn_801E761C
void f_801E761C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E761C
  c->r[0]=c->lr; // 801E7620
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7628
  c->r[31]=c->r[3]|c->r[3]; // 801E762C
  c->r[4]=0u+0x00000000u; // 801E7630
  c->r[5]=0u+0x00000004u; // 801E7634
  c->lr=0x801E763Cu; f_800060B8(c); // 801E7638
  c->r[3]=c->r[31]|c->r[31]; // 801E763C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7640
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7644
  c->lr=c->r[0]; // 801E7648
  c->r[1]=c->r[1]+0x00000010u; // 801E764C
  return; // 801E7650
}

// fn_801E7654
void f_801E7654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7654
  c->r[0]=c->lr; // 801E7658
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E765C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7660
  c->r[31]=c->r[3]|c->r[3]; // 801E7664
  cmps(c,0,(int32_t)c->r[3],0); // 801E7668
  if (crb(c,2)) { goto L_801E7680; } // 801E766C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801E7670
  cmps(c,0,(int32_t)c->r[0],0); // 801E7674
  if (!crb(c,1)) { goto L_801E7680; } // 801E7678
  c->lr=0x801E7680u; f_80047B20(c); // 801E767C
L_801E7680:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7680
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7684
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7688
  c->lr=c->r[0]; // 801E768C
  c->r[1]=c->r[1]+0x00000010u; // 801E7690
  return; // 801E7694
}

// fn_801E7698
void f_801E7698(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801E7698
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E769C
  c->r[6]=R32(c->r[3]+c->r[7]); // 801E76A0
  c->r[5]=0u+0x00000001u; // 801E76A4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801E76A8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801E76AC
  c->r[0]=c->r[6]|c->r[0]; // 801E76B0
  W32(c->r[3]+c->r[7],c->r[0]); // 801E76B4
  return; // 801E76B8
}

// fn_801E76BC
void f_801E76BC(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801E76BC
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801E76C0
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801E76C4
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801E76C8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E76CC
  c->r[0]=R32(c->r[3]+c->r[0]); // 801E76D0
  c->r[3]=c->r[5]&c->r[0]; // 801E76D4
  c->r[0]=0u-c->r[3]; // 801E76D8
  c->r[0]=c->r[0]|c->r[3]; // 801E76DC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E76E0
  return; // 801E76E4
}

// fn_801E76E8
void f_801E76E8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801E76E8
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E76EC
  c->r[6]=R32(c->r[3]+c->r[7]); // 801E76F0
  c->r[5]=0u+0x00000001u; // 801E76F4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801E76F8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801E76FC
  c->r[0]=~(c->r[0]|c->r[0]); // 801E7700
  c->r[0]=c->r[6]&c->r[0]; // 801E7704
  W32(c->r[3]+c->r[7],c->r[0]); // 801E7708
  return; // 801E770C
}

// fn_801E7710
void f_801E7710(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801E7710
  f_801E7698(c); return; // 801E7714
}

// fn_801E7718
void f_801E7718(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801E7718
  f_801E76BC(c); return; // 801E771C
}

// fn_801E7720
void f_801E7720(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801E7720
  f_801E76E8(c); return; // 801E7724
}

// fn_801E7728
void f_801E7728(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7728
  c->r[0]=c->lr; // 801E772C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7734
  c->r[31]=c->r[3]|c->r[3]; // 801E7738
  c->lr=0x801E7740u; f_8012FAAC(c); // 801E773C
  c->r[3]=0u+0x80470000u; // 801E7740
  c->r[0]=c->r[3]+0x00004530u; // 801E7744
  W32(c->r[31]+0x00000058u,c->r[0]); // 801E7748
  c->r[0]=0u+0x00000000u; // 801E774C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801E7750
  c->r[3]=c->r[31]|c->r[31]; // 801E7754
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7758
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E775C
  c->lr=c->r[0]; // 801E7760
  c->r[1]=c->r[1]+0x00000010u; // 801E7764
  return; // 801E7768
}

// fn_801E776C
void f_801E776C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E776C
  c->r[0]=c->lr; // 801E7770
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7774
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E7778
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E777C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E7780
  c->r[29]=c->r[3]|c->r[3]; // 801E7784
  c->lr=0x801E778Cu; f_80056B5C(c); // 801E7788
  c->r[30]=c->r[3]|c->r[3]; // 801E778C
  c->lr=0x801E7794u; f_801F1340(c); // 801E7790
  c->lr=0x801E7798u; f_80056B54(c); // 801E7794
  c->r[3]=0u+0x00000B28u; // 801E7798
  c->lr=0x801E77A0u; f_80047B64(c); // 801E779C
  c->r[31]=c->r[3]|c->r[3]; // 801E77A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E77A4
  if (crb(c,2)) { goto L_801E77B0; } // 801E77A8
  c->lr=0x801E77B0u; f_801E8C80(c); // 801E77AC
L_801E77B0:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801E77B0
  c->r[3]=c->r[30]|c->r[30]; // 801E77B4
  c->lr=0x801E77BCu; f_80056B54(c); // 801E77B8
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E77BC
  c->r[4]=0u+0x00000000u; // 801E77C0
  c->lr=0x801E77C8u; f_80114AE0(c); // 801E77C4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E77C8
  c->r[4]=0u+0x00000000u; // 801E77CC
  c->lr=0x801E77D4u; f_801169C8(c); // 801E77D0
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E77D4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E77D8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801E77DC
  c->ctr=c->r[12]; // 801E77E0
  if (true) { c->lr=0x801E77E8u; dispatch(c,c->ctr); } // 801E77E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E77E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E77EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E77F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E77F4
  c->lr=c->r[0]; // 801E77F8
  c->r[1]=c->r[1]+0x00000020u; // 801E77FC
  return; // 801E7800
}

// fn_801E7804
void f_801E7804(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7804
  c->r[0]=c->lr; // 801E7808
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E780C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7810
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7814
  c->r[30]=c->r[3]|c->r[3]; // 801E7818
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E781C
  cmps(c,0,(int32_t)c->r[3],0); // 801E7820
  if (crb(c,2)) { goto L_801E7878; } // 801E7824
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E7828
  c->r[12]=R32(c->r[12]+0x00000060u); // 801E782C
  c->ctr=c->r[12]; // 801E7830
  if (true) { c->lr=0x801E7838u; dispatch(c,c->ctr); } // 801E7834
  c->lr=0x801E783Cu; f_80056B5C(c); // 801E7838
  c->r[31]=c->r[3]|c->r[3]; // 801E783C
  c->lr=0x801E7844u; f_801F1340(c); // 801E7840
  c->lr=0x801E7848u; f_80056B54(c); // 801E7844
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801E7848
  cmps(c,0,(int32_t)c->r[3],0); // 801E784C
  if (crb(c,2)) { goto L_801E7868; } // 801E7850
  c->r[4]=0u+0x00000001u; // 801E7854
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E7858
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E785C
  c->ctr=c->r[12]; // 801E7860
  if (true) { c->lr=0x801E7868u; dispatch(c,c->ctr); } // 801E7864
L_801E7868:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7868
  c->lr=0x801E7870u; f_80056B54(c); // 801E786C
  c->r[0]=0u+0x00000000u; // 801E7870
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801E7874
L_801E7878:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7878
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E787C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7880
  c->lr=c->r[0]; // 801E7884
  c->r[1]=c->r[1]+0x00000010u; // 801E7888
  return; // 801E788C
}

// fn_801E7890
void f_801E7890(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7890
  c->r[0]=c->lr; // 801E7894
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7898
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E789C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E78A0
  c->r[30]=c->r[3]|c->r[3]; // 801E78A4
  c->r[31]=c->r[4]|c->r[4]; // 801E78A8
  cmps(c,0,(int32_t)c->r[3],0); // 801E78AC
  if (crb(c,2)) { goto L_801E78D0; } // 801E78B0
  c->r[4]=0u+0x00000000u; // 801E78B4
  c->lr=0x801E78BCu; f_8012F7F0(c); // 801E78B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E78BC
  cmps(c,0,(int32_t)c->r[0],0); // 801E78C0
  if (!crb(c,1)) { goto L_801E78D0; } // 801E78C4
  c->r[3]=c->r[30]|c->r[30]; // 801E78C8
  c->lr=0x801E78D0u; f_80047B20(c); // 801E78CC
L_801E78D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E78D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E78D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E78D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E78DC
  c->lr=c->r[0]; // 801E78E0
  c->r[1]=c->r[1]+0x00000010u; // 801E78E4
  return; // 801E78E8
}

// fn_801E78EC
void f_801E78EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E78EC
  return; // 801E78F0
}

// fn_801E78F4
void f_801E78F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E78F4
  c->r[0]=c->lr; // 801E78F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E78FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7900
  c->r[31]=c->r[3]|c->r[3]; // 801E7904
  c->lr=0x801E790Cu; f_8012FAAC(c); // 801E7908
  c->r[3]=0u+0x80470000u; // 801E790C
  c->r[0]=c->r[3]+0x000044B8u; // 801E7910
  W32(c->r[31]+0x00000058u,c->r[0]); // 801E7914
  c->r[3]=c->r[31]+0x000000D8u; // 801E7918
  c->lr=0x801E7920u; f_80110498(c); // 801E791C
  c->r[3]=c->r[31]+0x00000120u; // 801E7920
  c->lr=0x801E7928u; f_80110498(c); // 801E7924
  c->r[3]=0u+0x00000000u; // 801E7928
  W32(c->r[31]+0x000000C0u,c->r[3]); // 801E792C
  W32(c->r[31]+0x000000C4u,c->r[3]); // 801E7930
  c->r[0]=0u+0xFFFFFFFFu; // 801E7934
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801E7938
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801E793C
  W32(c->r[31]+0x000000D0u,c->r[3]); // 801E7940
  W32(c->r[31]+0x000000D4u,c->r[3]); // 801E7944
  c->r[3]=c->r[31]|c->r[31]; // 801E7948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E794C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7950
  c->lr=c->r[0]; // 801E7954
  c->r[1]=c->r[1]+0x00000010u; // 801E7958
  return; // 801E795C
}

// fn_801E7960
void f_801E7960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7960
  c->r[0]=c->lr; // 801E7964
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7968
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E796C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7970
  c->r[30]=c->r[3]|c->r[3]; // 801E7974
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E7978
  cmps(c,0,(int32_t)c->r[3],0); // 801E797C
  if (crb(c,2)) { goto L_801E79D4; } // 801E7980
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E7984
  c->r[12]=R32(c->r[12]+0x00000060u); // 801E7988
  c->ctr=c->r[12]; // 801E798C
  if (true) { c->lr=0x801E7994u; dispatch(c,c->ctr); } // 801E7990
  c->lr=0x801E7998u; f_80056B5C(c); // 801E7994
  c->r[31]=c->r[3]|c->r[3]; // 801E7998
  c->lr=0x801E79A0u; f_801F1340(c); // 801E799C
  c->lr=0x801E79A4u; f_80056B54(c); // 801E79A0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801E79A4
  cmps(c,0,(int32_t)c->r[3],0); // 801E79A8
  if (crb(c,2)) { goto L_801E79C4; } // 801E79AC
  c->r[4]=0u+0x00000001u; // 801E79B0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E79B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E79B8
  c->ctr=c->r[12]; // 801E79BC
  if (true) { c->lr=0x801E79C4u; dispatch(c,c->ctr); } // 801E79C0
L_801E79C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E79C4
  c->lr=0x801E79CCu; f_80056B54(c); // 801E79C8
  c->r[0]=0u+0x00000000u; // 801E79CC
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801E79D0
L_801E79D4:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801E79D4
  cmps(c,0,(int32_t)c->r[3],0); // 801E79D8
  if (crb(c,2)) { goto L_801E7A30; } // 801E79DC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E79E0
  c->r[12]=R32(c->r[12]+0x00000060u); // 801E79E4
  c->ctr=c->r[12]; // 801E79E8
  if (true) { c->lr=0x801E79F0u; dispatch(c,c->ctr); } // 801E79EC
  c->lr=0x801E79F4u; f_80056B5C(c); // 801E79F0
  c->r[31]=c->r[3]|c->r[3]; // 801E79F4
  c->lr=0x801E79FCu; f_801F1340(c); // 801E79F8
  c->lr=0x801E7A00u; f_80056B54(c); // 801E79FC
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801E7A00
  cmps(c,0,(int32_t)c->r[3],0); // 801E7A04
  if (crb(c,2)) { goto L_801E7A20; } // 801E7A08
  c->r[4]=0u+0x00000001u; // 801E7A0C
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E7A10
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E7A14
  c->ctr=c->r[12]; // 801E7A18
  if (true) { c->lr=0x801E7A20u; dispatch(c,c->ctr); } // 801E7A1C
L_801E7A20:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7A20
  c->lr=0x801E7A28u; f_80056B54(c); // 801E7A24
  c->r[0]=0u+0x00000000u; // 801E7A28
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801E7A2C
L_801E7A30:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7A30
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7A34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7A38
  c->lr=c->r[0]; // 801E7A3C
  c->r[1]=c->r[1]+0x00000010u; // 801E7A40
  return; // 801E7A44
}

// fn_801E7A48
void f_801E7A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7A48
  c->r[0]=c->lr; // 801E7A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7A54
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7A58
  c->r[30]=c->r[3]|c->r[3]; // 801E7A5C
  c->r[31]=c->r[4]|c->r[4]; // 801E7A60
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E7A64
  cmps(c,0,(int32_t)c->r[3],0); // 801E7A68
  if (crb(c,2)) { goto L_801E7A74; } // 801E7A6C
  c->lr=0x801E7A74u; f_8012F910(c); // 801E7A70
L_801E7A74:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E7A74
  if (crb(c,2)) { goto L_801E7A90; } // 801E7A78
  c->r[0]=R32(c->r[30]+0x000000C8u); // 801E7A7C
  W32(c->r[30]+0x000000CCu,c->r[0]); // 801E7A80
  c->r[0]=0u+0x00000001u; // 801E7A84
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801E7A88
  goto L_801E7AA4; // 801E7A8C
L_801E7A90:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801E7A90
  cmps(c,0,(int32_t)c->r[3],0); // 801E7A94
  if (crb(c,2)) { goto L_801E7AA4; } // 801E7A98
  c->r[4]=c->r[31]|c->r[31]; // 801E7A9C
  c->lr=0x801E7AA4u; f_8012F910(c); // 801E7AA0
L_801E7AA4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7AA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7AA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7AAC
  c->lr=c->r[0]; // 801E7AB0
  c->r[1]=c->r[1]+0x00000010u; // 801E7AB4
  return; // 801E7AB8
}

// fn_801E7ABC
void f_801E7ABC(Ctx* __restrict c) {
  W32(c->r[3]+0x000000D4u,c->r[4]); // 801E7ABC
  return; // 801E7AC0
}

// fn_801E7AC4
void f_801E7AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7AC4
  c->r[0]=c->lr; // 801E7AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7AD0
  c->r[31]=c->r[3]|c->r[3]; // 801E7AD4
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E7AD8
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7ADC
  c->r[4]=0u+0x00000006u; // 801E7AE0
  c->lr=0x801E7AE8u; f_8012E920(c); // 801E7AE4
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E7AE8
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7AEC
  c->r[4]=0u+0x00000006u; // 801E7AF0
  c->lr=0x801E7AF8u; f_8012E920(c); // 801E7AF4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E7AF8
  cmps(c,0,(int32_t)c->r[3],0); // 801E7AFC
  if (crb(c,2)) { goto L_801E7B2C; } // 801E7B00
  c->r[4]=0u+0x00000001u; // 801E7B04
  c->lr=0x801E7B0Cu; f_8012F918(c); // 801E7B08
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E7B0C
  c->r[4]=0u+0x00000001u; // 801E7B10
  c->lr=0x801E7B18u; f_8012F910(c); // 801E7B14
  c->r[3]=c->r[31]|c->r[31]; // 801E7B18
  c->r[4]=R32(c->r[31]+0x000000C0u); // 801E7B1C
  {uint32_t ea=c->r[2]+0xFFFF9424u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7B20
  c->r[5]=0u+0x00000000u; // 801E7B24
  c->lr=0x801E7B2Cu; f_801E7F3C(c); // 801E7B28
L_801E7B2C:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E7B2C
  cmps(c,0,(int32_t)c->r[3],0); // 801E7B30
  if (crb(c,2)) { goto L_801E7B60; } // 801E7B34
  c->r[4]=0u+0x00000001u; // 801E7B38
  c->lr=0x801E7B40u; f_8012F918(c); // 801E7B3C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E7B40
  c->r[4]=0u+0x00000000u; // 801E7B44
  c->lr=0x801E7B4Cu; f_8012F910(c); // 801E7B48
  c->r[3]=c->r[31]|c->r[31]; // 801E7B4C
  c->r[4]=R32(c->r[31]+0x000000C4u); // 801E7B50
  {uint32_t ea=c->r[2]+0xFFFF9424u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7B54
  c->r[5]=0u+0x00000001u; // 801E7B58
  c->lr=0x801E7B60u; f_801E7F3C(c); // 801E7B5C
L_801E7B60:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7B60
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7B64
  c->lr=c->r[0]; // 801E7B68
  c->r[1]=c->r[1]+0x00000010u; // 801E7B6C
  return; // 801E7B70
}

// fn_801E7B74
void f_801E7B74(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801E7B74
  if (!crb(c,0)) { goto L_801E7B80; } // 801E7B78
  c->r[4]=0u+0x00000000u; // 801E7B7C
L_801E7B80:;
  c->r[0]=R32(c->r[3]+0x000000C8u); // 801E7B80
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801E7B84
  if (crb(c,2)) { goto L_801E7BA8; } // 801E7B88
  cmps(c,0,(int32_t)c->r[0],-1); // 801E7B8C
  if (crb(c,2)) { goto L_801E7B9C; } // 801E7B90
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801E7B94
  goto L_801E7BA0; // 801E7B98
L_801E7B9C:;
  W32(c->r[3]+0x000000CCu,c->r[4]); // 801E7B9C
L_801E7BA0:;
  c->r[0]=0u+0x00000001u; // 801E7BA0
  W32(c->r[3]+0x000000D0u,c->r[0]); // 801E7BA4
L_801E7BA8:;
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801E7BA8
  return; // 801E7BAC
}

// fn_801E7BB0
void f_801E7BB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7BB0
  c->r[0]=c->lr; // 801E7BB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7BB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7BBC
  c->r[31]=c->r[3]|c->r[3]; // 801E7BC0
  c->lr=0x801E7BC8u; f_8012FBA8(c); // 801E7BC4
  c->r[0]=R32(c->r[31]+0x000000D0u); // 801E7BC8
  cmps(c,0,(int32_t)c->r[0],0); // 801E7BCC
  if (crb(c,2)) { goto L_801E7BE4; } // 801E7BD0
  c->r[3]=c->r[31]|c->r[31]; // 801E7BD4
  c->lr=0x801E7BDCu; f_801E7C00(c); // 801E7BD8
  c->r[0]=0u+0x00000000u; // 801E7BDC
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801E7BE0
L_801E7BE4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7BE4
  c->lr=0x801E7BECu; f_801E7E34(c); // 801E7BE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E7BF0
  c->lr=c->r[0]; // 801E7BF4
  c->r[1]=c->r[1]+0x00000010u; // 801E7BF8
  return; // 801E7BFC
}

// fn_801E7C00
void f_801E7C00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7C00
  c->r[0]=c->lr; // 801E7C04
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E7C08
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801E7C0C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801E7C10
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801E7C14
  c->r[31]=c->r[3]|c->r[3]; // 801E7C18
  c->r[0]=0u+0x43300000u; // 801E7C1C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E7C20
  c->r[0]=0u+0x43300000u; // 801E7C24
  W32(c->r[1]+0x00000018u,c->r[0]); // 801E7C28
  c->r[4]=R32(c->r[3]+0x000000C8u); // 801E7C2C
  cmps(c,0,(int32_t)c->r[4],-1); // 801E7C30
  if (!crb(c,1)) { goto L_801E7E14; } // 801E7C34
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801E7C38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801E7C3C
  if (crb(c,0)) { goto L_801E7CEC; } // 801E7C40
  c->r[3]=c->r[3]+0x00000120u; // 801E7C44
  c->lr=0x801E7C4Cu; f_801105F8(c); // 801E7C48
  cmps(c,0,(int32_t)c->r[3],0); // 801E7C4C
  if (crb(c,2)) { goto L_801E7C64; } // 801E7C50
  c->r[3]=c->r[31]+0x00000120u; // 801E7C54
  c->r[4]=c->r[1]+0x00000008u; // 801E7C58
  c->lr=0x801E7C60u; f_801108D8(c); // 801E7C5C
  goto L_801E7C80; // 801E7C60
L_801E7C64:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801E7C64
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7C68
  c->r[0]=c->r[0]^0x80000000u; // 801E7C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7C70
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E7C74
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E7C78
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801E7C7C
L_801E7C80:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7C80
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7C84
  c->r[0]=c->r[0]^0x80000000u; // 801E7C88
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E7C8C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801E7C90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E7C94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7C98
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 801E7C9C
  c->r[3]=c->r[31]+0x00000120u; // 801E7CA0
  c->lr=0x801E7CA8u; f_80110560(c); // 801E7CA4
  c->r[3]=c->r[31]+0x00000120u; // 801E7CA8
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7CAC
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7CB0
  c->r[0]=c->r[0]^0x80000000u; // 801E7CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7CB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E7CBC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801E7CC0
  c->lr=0x801E7CC8u; f_80110568(c); // 801E7CC4
  c->r[3]=c->r[31]+0x00000120u; // 801E7CC8
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7CCC
  c->lr=0x801E7CD4u; f_80110580(c); // 801E7CD0
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E7CD4
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801E7CD8
  c->lr=0x801E7CE0u; f_802EBD7C(c); // 801E7CDC
  c->r[3]=c->r[31]+0x00000120u; // 801E7CE0
  c->lr=0x801E7CE8u; f_801105D4(c); // 801E7CE4
  goto L_801E7E14; // 801E7CE8
L_801E7CEC:;
  c->r[3]=c->r[3]+0x000000D8u; // 801E7CEC
  c->lr=0x801E7CF4u; f_801105F8(c); // 801E7CF0
  cmps(c,0,(int32_t)c->r[3],0); // 801E7CF4
  if (crb(c,2)) { goto L_801E7D0C; } // 801E7CF8
  c->r[3]=c->r[31]+0x000000D8u; // 801E7CFC
  c->r[4]=c->r[1]+0x00000008u; // 801E7D00
  c->lr=0x801E7D08u; f_801108D8(c); // 801E7D04
  goto L_801E7D28; // 801E7D08
L_801E7D0C:;
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801E7D0C
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7D10
  c->r[0]=c->r[0]^0x80000000u; // 801E7D14
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E7D18
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801E7D1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E7D20
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 801E7D24
L_801E7D28:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7D28
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7D2C
  c->r[0]=c->r[0]^0x80000000u; // 801E7D30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7D34
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E7D38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801E7D3C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7D40
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[0]); // 801E7D44
  c->r[3]=c->r[31]+0x000000D8u; // 801E7D48
  c->lr=0x801E7D50u; f_80110560(c); // 801E7D4C
  c->r[3]=c->r[31]+0x000000D8u; // 801E7D50
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7D54
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7D58
  c->r[0]=c->r[0]^0x80000000u; // 801E7D5C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E7D60
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801E7D64
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801E7D68
  c->lr=0x801E7D70u; f_80110568(c); // 801E7D6C
  c->r[3]=c->r[31]+0x000000D8u; // 801E7D70
  {uint32_t ea=c->r[2]+0xFFFF942Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7D74
  c->lr=0x801E7D7Cu; f_80110580(c); // 801E7D78
  {uint32_t ea=c->r[2]+0xFFFF9428u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E7D7C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801E7D80
  c->lr=0x801E7D88u; f_802EBD7C(c); // 801E7D84
  c->r[3]=c->r[31]+0x000000D8u; // 801E7D88
  c->lr=0x801E7D90u; f_801105D4(c); // 801E7D8C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E7D90
  c->r[4]=0u+0x00000001u; // 801E7D94
  c->lr=0x801E7D9Cu; f_8012F910(c); // 801E7D98
  c->r[3]=c->r[31]|c->r[31]; // 801E7D9C
  c->r[4]=R32(c->r[31]+0x000000C4u); // 801E7DA0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7DA4
  c->r[5]=0u+0x00000001u; // 801E7DA8
  c->lr=0x801E7DB0u; f_801E7F3C(c); // 801E7DAC
  c->r[3]=c->r[31]+0x00000120u; // 801E7DB0
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7DB4
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7DB8
  c->r[0]=c->r[0]^0x80000000u; // 801E7DBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7DC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E7DC4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801E7DC8
  c->lr=0x801E7DD0u; f_80110560(c); // 801E7DCC
  c->r[3]=c->r[31]+0x00000120u; // 801E7DD0
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7DD4
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7DD8
  c->r[0]=c->r[0]^0x80000000u; // 801E7DDC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E7DE0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801E7DE4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801E7DE8
  c->lr=0x801E7DF0u; f_80110568(c); // 801E7DEC
  c->r[3]=c->r[31]+0x00000120u; // 801E7DF0
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7DF4
  c->lr=0x801E7DFCu; f_80110580(c); // 801E7DF8
  c->r[3]=c->r[31]+0x00000120u; // 801E7DFC
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7E00
  c->lr=0x801E7E08u; f_80110590(c); // 801E7E04
  c->r[3]=c->r[31]+0x00000120u; // 801E7E08
  c->r[4]=0u+0x00000000u; // 801E7E0C
  c->lr=0x801E7E14u; f_801108D8(c); // 801E7E10
L_801E7E14:;
  c->r[0]=0u+0x00000038u; // 801E7E14
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801E7E18
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801E7E1C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801E7E20
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E7E24
  c->lr=c->r[0]; // 801E7E28
  c->r[1]=c->r[1]+0x00000040u; // 801E7E2C
  return; // 801E7E30
}

// fn_801E7E34
void f_801E7E34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7E34
  c->r[0]=c->lr; // 801E7E38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7E3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E7E40
  c->r[31]=c->r[3]|c->r[3]; // 801E7E44
  c->r[0]=R32(c->r[3]+0x000000D4u); // 801E7E48
  cmps(c,0,(int32_t)c->r[0],0); // 801E7E4C
  if (!crb(c,2)) { goto L_801E7F28; } // 801E7E50
  c->r[3]=c->r[3]+0x000000D8u; // 801E7E54
  c->lr=0x801E7E5Cu; f_801105F8(c); // 801E7E58
  cmps(c,0,(int32_t)c->r[3],0); // 801E7E5C
  if (crb(c,2)) { goto L_801E7E88; } // 801E7E60
  c->r[3]=c->r[31]+0x000000D8u; // 801E7E64
  c->r[4]=c->r[1]+0x00000008u; // 801E7E68
  c->lr=0x801E7E70u; f_801108D8(c); // 801E7E6C
  c->r[3]=c->r[31]|c->r[31]; // 801E7E70
  c->r[4]=R32(c->r[31]+0x000000C4u); // 801E7E74
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7E78
  c->r[5]=0u+0x00000001u; // 801E7E7C
  c->lr=0x801E7E84u; f_801E7F3C(c); // 801E7E80
  goto L_801E7E94; // 801E7E84
L_801E7E88:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E7E88
  c->r[4]=0u+0x00000000u; // 801E7E8C
  c->lr=0x801E7E94u; f_8012F910(c); // 801E7E90
L_801E7E94:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7E94
  cmps(c,0,(int32_t)c->r[0],0); // 801E7E98
  if (crb(c,1)) { goto L_801E7EB8; } // 801E7E9C
  c->r[0]=0u+0x00000000u; // 801E7EA0
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801E7EA4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E7EA8
  c->r[4]=0u+0x00000000u; // 801E7EAC
  c->lr=0x801E7EB4u; f_8012F910(c); // 801E7EB0
  goto L_801E7EC4; // 801E7EB4
L_801E7EB8:;
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E7EB8
  c->r[4]=0u+0x00000001u; // 801E7EBC
  c->lr=0x801E7EC4u; f_8012F910(c); // 801E7EC0
L_801E7EC4:;
  c->r[3]=c->r[31]+0x00000120u; // 801E7EC4
  c->lr=0x801E7ECCu; f_801105F8(c); // 801E7EC8
  cmps(c,0,(int32_t)c->r[3],0); // 801E7ECC
  if (crb(c,2)) { goto L_801E7EF8; } // 801E7ED0
  c->r[3]=c->r[31]+0x00000120u; // 801E7ED4
  c->r[4]=c->r[1]+0x00000008u; // 801E7ED8
  c->lr=0x801E7EE0u; f_801108D8(c); // 801E7EDC
  c->r[3]=c->r[31]|c->r[31]; // 801E7EE0
  c->r[4]=R32(c->r[31]+0x000000C0u); // 801E7EE4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7EE8
  c->r[5]=0u+0x00000000u; // 801E7EEC
  c->lr=0x801E7EF4u; f_801E7F3C(c); // 801E7EF0
  goto L_801E7F28; // 801E7EF4
L_801E7EF8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E7EF8
  c->r[4]=R32(c->r[31]+0x000000C0u); // 801E7EFC
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E7F00
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[1]=RF64(ea);} // 801E7F04
  c->r[0]=c->r[0]^0x80000000u; // 801E7F08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7F0C
  c->r[0]=0u+0x43300000u; // 801E7F10
  W32(c->r[1]+0x00000010u,c->r[0]); // 801E7F14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E7F18
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801E7F1C
  c->r[5]=0u+0x00000000u; // 801E7F20
  c->lr=0x801E7F28u; f_801E7F3C(c); // 801E7F24
L_801E7F28:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E7F28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7F2C
  c->lr=c->r[0]; // 801E7F30
  c->r[1]=c->r[1]+0x00000020u; // 801E7F34
  return; // 801E7F38
}

// fn_801E7F3C
void f_801E7F3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7F3C
  c->r[0]=c->lr; // 801E7F40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E7F44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801E7F48
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801E7F4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7F50
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E7F54
  c->r[30]=c->r[4]|c->r[4]; // 801E7F58
  c->r[31]=c->r[5]|c->r[5]; // 801E7F5C
  c->f[31]=c->f[1]; // 801E7F60
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E7F64
  fcmp(c,0,c->f[1],c->f[0]); // 801E7F68
  if (!crb(c,0)) { goto L_801E7F74; } // 801E7F6C
  c->f[31]=c->f[0]; // 801E7F70
L_801E7F74:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7F74
  c->f[1]=c->f[31]; // 801E7F78
  c->r[4]=0u+0x00000000u; // 801E7F7C
  c->lr=0x801E7F84u; f_8012EA0C(c); // 801E7F80
  cmps(c,0,(int32_t)c->r[31],0); // 801E7F84
  if (crb(c,2)) { goto L_801E7FA0; } // 801E7F88
  c->r[3]=c->r[30]|c->r[30]; // 801E7F8C
  {uint32_t ea=c->r[2]+0xFFFF9438u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E7F90
  c->r[4]=0u+0x00000002u; // 801E7F94
  c->lr=0x801E7F9Cu; f_8012EA0C(c); // 801E7F98
  goto L_801E7FB0; // 801E7F9C
L_801E7FA0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E7FA0
  c->f[1]=c->f[31]; // 801E7FA4
  c->r[4]=0u+0x00000002u; // 801E7FA8
  c->lr=0x801E7FB0u; f_8012EA0C(c); // 801E7FAC
L_801E7FB0:;
  c->r[0]=0u+0x00000018u; // 801E7FB0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801E7FB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801E7FB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E7FBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E7FC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E7FC4
  c->lr=c->r[0]; // 801E7FC8
  c->r[1]=c->r[1]+0x00000020u; // 801E7FCC
  return; // 801E7FD0
}

// fn_801E7FD4
void f_801E7FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E7FD4
  c->r[0]=c->lr; // 801E7FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E7FDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E7FE0
  c->r[31]=c->r[3]|c->r[3]; // 801E7FE4
  c->r[3]=c->r[3]+0x00000120u; // 801E7FE8
  c->lr=0x801E7FF0u; f_801105F8(c); // 801E7FEC
  cmps(c,0,(int32_t)c->r[3],0); // 801E7FF0
  if (!crb(c,2)) { goto L_801E8008; } // 801E7FF4
  c->r[3]=c->r[31]+0x000000D8u; // 801E7FF8
  c->lr=0x801E8000u; f_801105F8(c); // 801E7FFC
  cmps(c,0,(int32_t)c->r[3],0); // 801E8000
  if (crb(c,2)) { goto L_801E8010; } // 801E8004
L_801E8008:;
  c->r[3]=0u+0x00000001u; // 801E8008
  goto L_801E8014; // 801E800C
L_801E8010:;
  c->r[3]=0u+0x00000000u; // 801E8010
L_801E8014:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8014
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8018
  c->lr=c->r[0]; // 801E801C
  c->r[1]=c->r[1]+0x00000010u; // 801E8020
  return; // 801E8024
}

// fn_801E8028
void f_801E8028(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801E8028
  W32(c->r[3]+0x000000CCu,c->r[0]); // 801E802C
  W32(c->r[3]+0x000000C8u,c->r[0]); // 801E8030
  c->r[0]=0u+0x00000001u; // 801E8034
  W32(c->r[3]+0x000000D0u,c->r[0]); // 801E8038
  return; // 801E803C
}

// fn_801E8040
void f_801E8040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8040
  c->r[0]=c->lr; // 801E8044
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8048
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801E804C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801E8050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8054
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8058
  c->r[30]=c->r[3]|c->r[3]; // 801E805C
  c->lr=0x801E8064u; f_8011B41C(c); // 801E8060
  c->r[4]=0u+0x00000015u; // 801E8064
  c->lr=0x801E806Cu; f_8011B814(c); // 801E8068
  c->r[31]=c->r[3]|c->r[3]; // 801E806C
  c->lr=0x801E8074u; f_8012FCB8(c); // 801E8070
  c->f[31]=c->f[1]; // 801E8074
  c->r[3]=c->r[31]|c->r[31]; // 801E8078
  c->lr=0x801E8080u; f_8012FCB0(c); // 801E807C
  c->r[3]=c->r[30]|c->r[30]; // 801E8080
  c->f[2]=c->f[31]; // 801E8084
  c->lr=0x801E808Cu; f_8012FA24(c); // 801E8088
  c->r[3]=c->r[31]|c->r[31]; // 801E808C
  c->lr=0x801E8094u; f_8012FCD0(c); // 801E8090
  c->f[31]=c->f[1]; // 801E8094
  c->r[3]=c->r[31]|c->r[31]; // 801E8098
  c->lr=0x801E80A0u; f_8012FCC8(c); // 801E809C
  c->r[3]=c->r[30]|c->r[30]; // 801E80A0
  c->f[2]=c->f[31]; // 801E80A4
  c->lr=0x801E80ACu; f_8012FA40(c); // 801E80A8
  c->r[3]=c->r[31]|c->r[31]; // 801E80AC
  c->lr=0x801E80B4u; f_8012FCE8(c); // 801E80B0
  c->r[3]=c->r[30]|c->r[30]; // 801E80B4
  c->lr=0x801E80BCu; f_8012FA6C(c); // 801E80B8
  c->r[3]=c->r[31]|c->r[31]; // 801E80BC
  c->lr=0x801E80C4u; f_8012FCF0(c); // 801E80C0
  c->r[3]=c->r[30]|c->r[30]; // 801E80C4
  c->lr=0x801E80CCu; f_8012FA74(c); // 801E80C8
  c->r[3]=c->r[31]|c->r[31]; // 801E80CC
  c->lr=0x801E80D4u; f_8012FCE0(c); // 801E80D0
  c->r[4]=c->r[3]|c->r[3]; // 801E80D4
  c->r[3]=c->r[30]|c->r[30]; // 801E80D8
  c->lr=0x801E80E0u; f_8012F918(c); // 801E80DC
  c->r[3]=c->r[31]|c->r[31]; // 801E80E0
  c->lr=0x801E80E8u; f_801E8E88(c); // 801E80E4
  {uint32_t ea=c->r[2]+0xFFFF943Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E80E8
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801E80EC
  c->r[3]=c->r[30]|c->r[30]; // 801E80F0
  c->lr=0x801E80F8u; f_80117D04(c); // 801E80F4
  c->r[3]=c->r[31]|c->r[31]; // 801E80F8
  c->lr=0x801E8100u; f_801E8EA0(c); // 801E80FC
  c->f[31]=c->f[1]; // 801E8100
  c->r[3]=c->r[31]|c->r[31]; // 801E8104
  c->lr=0x801E810Cu; f_801E8EA0(c); // 801E8108
  c->r[3]=c->r[30]|c->r[30]; // 801E810C
  c->f[2]=c->f[31]; // 801E8110
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E8114
  c->lr=0x801E811Cu; f_80114AA8(c); // 801E8118
  c->lr=0x801E8120u; f_8011A9D8(c); // 801E811C
  c->r[4]=0u+0x00000000u; // 801E8120
  c->lr=0x801E8128u; f_8011AF74(c); // 801E8124
  c->r[31]=c->r[3]|c->r[3]; // 801E8128
  c->lr=0x801E8130u; f_8011A6E8(c); // 801E812C
  c->r[4]=c->r[31]|c->r[31]; // 801E8130
  c->lr=0x801E8138u; f_8011A9B0(c); // 801E8134
  c->lr=0x801E813Cu; f_8012DA20(c); // 801E8138
  c->r[4]=c->r[3]|c->r[3]; // 801E813C
  c->r[3]=c->r[30]|c->r[30]; // 801E8140
  c->lr=0x801E8148u; f_80114AA0(c); // 801E8144
  c->r[3]=c->r[30]|c->r[30]; // 801E8148
  c->r[4]=0u+0x00000015u; // 801E814C
  c->r[5]=0u+0x00000000u; // 801E8150
  c->r[6]=0u+0xFFFFFFFFu; // 801E8154
  c->lr=0x801E815Cu; f_8012DE5C(c); // 801E8158
  c->r[3]=c->r[30]|c->r[30]; // 801E815C
  c->lr=0x801E8164u; f_8012F448(c); // 801E8160
  c->r[3]=c->r[30]|c->r[30]; // 801E8164
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8168
  c->r[4]=0u+0x00000006u; // 801E816C
  c->lr=0x801E8174u; f_8012E920(c); // 801E8170
  c->r[3]=c->r[30]|c->r[30]; // 801E8174
  c->r[4]=0u+0x00000001u; // 801E8178
  c->lr=0x801E8180u; f_8012E1C0(c); // 801E817C
  c->r[3]=c->r[30]|c->r[30]; // 801E8180
  c->r[4]=0u+0x00000000u; // 801E8184
  c->lr=0x801E818Cu; f_8012F910(c); // 801E8188
  c->r[0]=0u+0x00000018u; // 801E818C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801E8190
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801E8194
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8198
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E819C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E81A0
  c->lr=c->r[0]; // 801E81A4
  c->r[1]=c->r[1]+0x00000020u; // 801E81A8
  return; // 801E81AC
}

// fn_801E81B0
void f_801E81B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E81B0
  c->r[0]=c->lr; // 801E81B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E81B8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801E81BC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801E81C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E81C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E81C8
  c->r[30]=c->r[3]|c->r[3]; // 801E81CC
  c->lr=0x801E81D4u; f_8011B41C(c); // 801E81D0
  c->r[4]=0u+0x00000015u; // 801E81D4
  c->lr=0x801E81DCu; f_8011B814(c); // 801E81D8
  c->r[31]=c->r[3]|c->r[3]; // 801E81DC
  c->lr=0x801E81E4u; f_8012FCB8(c); // 801E81E0
  c->f[31]=c->f[1]; // 801E81E4
  c->r[3]=c->r[31]|c->r[31]; // 801E81E8
  c->lr=0x801E81F0u; f_8012FCB0(c); // 801E81EC
  c->r[3]=c->r[30]|c->r[30]; // 801E81F0
  c->f[2]=c->f[31]; // 801E81F4
  c->lr=0x801E81FCu; f_8012FA24(c); // 801E81F8
  c->r[3]=c->r[31]|c->r[31]; // 801E81FC
  c->lr=0x801E8204u; f_8012FCD0(c); // 801E8200
  c->f[31]=c->f[1]; // 801E8204
  c->r[3]=c->r[31]|c->r[31]; // 801E8208
  c->lr=0x801E8210u; f_8012FCC8(c); // 801E820C
  c->r[3]=c->r[30]|c->r[30]; // 801E8210
  c->f[2]=c->f[31]; // 801E8214
  c->lr=0x801E821Cu; f_8012FA40(c); // 801E8218
  c->r[3]=c->r[30]|c->r[30]; // 801E821C
  c->r[4]=0u+0x00000001u; // 801E8220
  c->lr=0x801E8228u; f_8012F918(c); // 801E8224
  c->r[3]=c->r[30]|c->r[30]; // 801E8228
  c->r[4]=0u+0x00000001u; // 801E822C
  c->lr=0x801E8234u; f_8012F910(c); // 801E8230
  c->r[3]=c->r[30]|c->r[30]; // 801E8234
  {uint32_t ea=c->r[2]+0xFFFF9444u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8238
  c->f[2]=c->f[1]; // 801E823C
  c->f[3]=c->f[1]; // 801E8240
  c->r[4]=0u+0xFFFFFFFFu; // 801E8244
  c->lr=0x801E824Cu; f_8012ED7C(c); // 801E8248
  c->r[0]=0u+0x00000018u; // 801E824C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801E8250
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801E8254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8258
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E825C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8260
  c->lr=c->r[0]; // 801E8264
  c->r[1]=c->r[1]+0x00000020u; // 801E8268
  return; // 801E826C
}

// fn_801E8270
void f_801E8270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8270
  c->r[0]=c->lr; // 801E8274
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8278
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801E827C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801E8280
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8284
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8288
  c->r[30]=c->r[3]|c->r[3]; // 801E828C
  c->lr=0x801E8294u; f_8011B41C(c); // 801E8290
  c->r[4]=0u+0x00000015u; // 801E8294
  c->lr=0x801E829Cu; f_8011B814(c); // 801E8298
  c->r[31]=c->r[3]|c->r[3]; // 801E829C
  c->lr=0x801E82A4u; f_8012FCB8(c); // 801E82A0
  c->f[31]=c->f[1]; // 801E82A4
  c->r[3]=c->r[31]|c->r[31]; // 801E82A8
  c->lr=0x801E82B0u; f_8012FCB0(c); // 801E82AC
  c->r[3]=c->r[30]|c->r[30]; // 801E82B0
  c->f[2]=c->f[31]; // 801E82B4
  c->lr=0x801E82BCu; f_8012FA24(c); // 801E82B8
  c->r[3]=c->r[31]|c->r[31]; // 801E82BC
  c->lr=0x801E82C4u; f_8012FCD0(c); // 801E82C0
  c->f[31]=c->f[1]; // 801E82C4
  c->r[3]=c->r[31]|c->r[31]; // 801E82C8
  c->lr=0x801E82D0u; f_8012FCC8(c); // 801E82CC
  c->r[3]=c->r[30]|c->r[30]; // 801E82D0
  c->f[2]=c->f[31]; // 801E82D4
  c->lr=0x801E82DCu; f_8012FA40(c); // 801E82D8
  c->r[3]=c->r[31]|c->r[31]; // 801E82DC
  c->lr=0x801E82E4u; f_8012FCE8(c); // 801E82E0
  c->r[3]=c->r[30]|c->r[30]; // 801E82E4
  c->lr=0x801E82ECu; f_8012FA6C(c); // 801E82E8
  c->r[3]=c->r[31]|c->r[31]; // 801E82EC
  c->lr=0x801E82F4u; f_8012FCF0(c); // 801E82F0
  c->r[3]=c->r[30]|c->r[30]; // 801E82F4
  c->lr=0x801E82FCu; f_8012FA74(c); // 801E82F8
  c->r[3]=c->r[31]|c->r[31]; // 801E82FC
  c->lr=0x801E8304u; f_8012FCE0(c); // 801E8300
  c->r[4]=c->r[3]|c->r[3]; // 801E8304
  c->r[3]=c->r[30]|c->r[30]; // 801E8308
  c->lr=0x801E8310u; f_8012F918(c); // 801E830C
  c->r[3]=c->r[31]|c->r[31]; // 801E8310
  c->lr=0x801E8318u; f_801E8E88(c); // 801E8314
  c->r[3]=c->r[30]|c->r[30]; // 801E8318
  c->lr=0x801E8320u; f_80117D04(c); // 801E831C
  c->r[3]=c->r[31]|c->r[31]; // 801E8320
  c->lr=0x801E8328u; f_801E8EA0(c); // 801E8324
  c->f[31]=c->f[1]; // 801E8328
  c->r[3]=c->r[31]|c->r[31]; // 801E832C
  c->lr=0x801E8334u; f_801E8EA0(c); // 801E8330
  c->r[3]=c->r[30]|c->r[30]; // 801E8334
  c->f[2]=c->f[31]; // 801E8338
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[3]=c->ps1[3]=RF32(ea);} // 801E833C
  c->lr=0x801E8344u; f_80114AA8(c); // 801E8340
  c->lr=0x801E8348u; f_8011A9D8(c); // 801E8344
  c->r[4]=0u+0x00000000u; // 801E8348
  c->lr=0x801E8350u; f_8011AF74(c); // 801E834C
  c->r[31]=c->r[3]|c->r[3]; // 801E8350
  c->lr=0x801E8358u; f_8011A6E8(c); // 801E8354
  c->r[4]=c->r[31]|c->r[31]; // 801E8358
  c->lr=0x801E8360u; f_8011A9B0(c); // 801E835C
  c->lr=0x801E8364u; f_8012DA20(c); // 801E8360
  c->r[4]=c->r[3]|c->r[3]; // 801E8364
  c->r[3]=c->r[30]|c->r[30]; // 801E8368
  c->lr=0x801E8370u; f_80114AA0(c); // 801E836C
  c->r[0]=R32(c->r[30]+0x000009F8u); // 801E8370
  cmps(c,0,(int32_t)c->r[0],0); // 801E8374
  if (!crb(c,2)) { goto L_801E8388; } // 801E8378
  c->r[3]=c->r[30]|c->r[30]; // 801E837C
  c->r[4]=0u+0x00000003u; // 801E8380
  c->lr=0x801E8388u; f_8012F440(c); // 801E8384
L_801E8388:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8388
  c->r[4]=0u+0x00000015u; // 801E838C
  c->r[5]=0u+0x00000001u; // 801E8390
  c->r[6]=0u+0xFFFFFFFFu; // 801E8394
  c->lr=0x801E839Cu; f_8012DE5C(c); // 801E8398
  c->r[3]=c->r[30]|c->r[30]; // 801E839C
  c->lr=0x801E83A4u; f_8012F448(c); // 801E83A0
  c->r[3]=c->r[30]|c->r[30]; // 801E83A4
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E83A8
  c->r[4]=0u+0x00000006u; // 801E83AC
  c->lr=0x801E83B4u; f_8012E920(c); // 801E83B0
  c->r[3]=c->r[30]|c->r[30]; // 801E83B4
  c->r[4]=0u+0x00000001u; // 801E83B8
  c->lr=0x801E83C0u; f_8012E1C0(c); // 801E83BC
  c->r[3]=c->r[30]|c->r[30]; // 801E83C0
  c->r[4]=0u+0x00000000u; // 801E83C4
  c->lr=0x801E83CCu; f_8012F910(c); // 801E83C8
  c->r[0]=0u+0x00000018u; // 801E83CC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801E83D0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801E83D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E83D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E83DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E83E0
  c->lr=c->r[0]; // 801E83E4
  c->r[1]=c->r[1]+0x00000020u; // 801E83E8
  return; // 801E83EC
}

// fn_801E83F0
void f_801E83F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E83F0
  c->r[0]=c->lr; // 801E83F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E83F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E83FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E8400
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E8404
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E8408
  c->r[28]=c->r[3]|c->r[3]; // 801E840C
  c->lr=0x801E8414u; f_8011C12C(c); // 801E8410
  c->r[4]=0u+0x00000015u; // 801E8414
  c->lr=0x801E841Cu; f_8011CFF4(c); // 801E8418
  c->r[30]=c->r[3]|c->r[3]; // 801E841C
  c->lr=0x801E8424u; f_80056B5C(c); // 801E8420
  c->r[29]=c->r[3]|c->r[3]; // 801E8424
  c->lr=0x801E842Cu; f_801F1340(c); // 801E8428
  c->lr=0x801E8430u; f_80056B54(c); // 801E842C
  c->r[3]=0u+0x00000B28u; // 801E8430
  c->lr=0x801E8438u; f_80047B64(c); // 801E8434
  c->r[31]=c->r[3]|c->r[3]; // 801E8438
  cmps(c,0,(int32_t)c->r[3],0); // 801E843C
  if (crb(c,2)) { goto L_801E8448; } // 801E8440
  c->lr=0x801E8448u; f_801E8C80(c); // 801E8444
L_801E8448:;
  W32(c->r[28]+0x000000C0u,c->r[31]); // 801E8448
  c->r[3]=c->r[29]|c->r[29]; // 801E844C
  c->lr=0x801E8454u; f_80056B54(c); // 801E8450
  c->r[3]=c->r[30]|c->r[30]; // 801E8454
  c->lr=0x801E845Cu; f_801E9650(c); // 801E8458
  c->lr=0x801E8460u; f_80116A2C(c); // 801E845C
  c->r[4]=c->r[3]|c->r[3]; // 801E8460
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801E8464
  c->lr=0x801E846Cu; f_80114AE0(c); // 801E8468
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801E846C
  c->r[4]=0u+0x00000000u; // 801E8470
  c->lr=0x801E8478u; f_80114AD8(c); // 801E8474
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801E8478
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E847C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801E8480
  c->ctr=c->r[12]; // 801E8484
  if (true) { c->lr=0x801E848Cu; dispatch(c,c->ctr); } // 801E8488
  c->lr=0x801E8490u; f_80056B5C(c); // 801E848C
  c->r[29]=c->r[3]|c->r[3]; // 801E8490
  c->lr=0x801E8498u; f_801F1340(c); // 801E8494
  c->lr=0x801E849Cu; f_80056B54(c); // 801E8498
  c->r[3]=0u+0x00000B28u; // 801E849C
  c->lr=0x801E84A4u; f_80047B64(c); // 801E84A0
  c->r[31]=c->r[3]|c->r[3]; // 801E84A4
  cmps(c,0,(int32_t)c->r[3],0); // 801E84A8
  if (crb(c,2)) { goto L_801E84B4; } // 801E84AC
  c->lr=0x801E84B4u; f_801E8C80(c); // 801E84B0
L_801E84B4:;
  W32(c->r[28]+0x000000C4u,c->r[31]); // 801E84B4
  c->r[3]=c->r[29]|c->r[29]; // 801E84B8
  c->lr=0x801E84C0u; f_80056B54(c); // 801E84BC
  c->r[3]=c->r[30]|c->r[30]; // 801E84C0
  c->lr=0x801E84C8u; f_801E9650(c); // 801E84C4
  c->lr=0x801E84CCu; f_80116A2C(c); // 801E84C8
  c->r[4]=c->r[3]|c->r[3]; // 801E84CC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801E84D0
  c->lr=0x801E84D8u; f_80114AE0(c); // 801E84D4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801E84D8
  c->r[4]=0u+0x00000000u; // 801E84DC
  c->lr=0x801E84E4u; f_80114AD8(c); // 801E84E0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801E84E4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E84E8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801E84EC
  c->ctr=c->r[12]; // 801E84F0
  if (true) { c->lr=0x801E84F8u; dispatch(c,c->ctr); } // 801E84F4
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801E84F8
  c->lr=0x801E8500u; f_80128228(c); // 801E84FC
  {uint32_t ea=c->r[2]+0xFFFF9448u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8500
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801E8504
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801E8508
  c->lr=0x801E8510u; f_80117D04(c); // 801E850C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801E8510
  c->lr=0x801E8518u; f_80128228(c); // 801E8514
  {uint32_t ea=c->r[2]+0xFFFF944Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8518
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 801E851C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801E8520
  c->lr=0x801E8528u; f_80117D04(c); // 801E8524
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E8528
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E852C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E8530
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E8534
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8538
  c->lr=c->r[0]; // 801E853C
  c->r[1]=c->r[1]+0x00000020u; // 801E8540
  return; // 801E8544
}

// fn_801E8548
void f_801E8548(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8548
  c->r[0]=c->lr; // 801E854C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8550
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8554
  c->r[31]=c->r[3]|c->r[3]; // 801E8558
  c->lr=0x801E8560u; f_801E7FD4(c); // 801E855C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8560
  if (!crb(c,2)) { goto L_801E8588; } // 801E8564
  c->r[0]=R32(c->r[31]+0x000000C8u); // 801E8568
  cmps(c,0,(int32_t)c->r[0],0); // 801E856C
  if (crb(c,1)) { goto L_801E8588; } // 801E8570
  c->r[0]=R32(c->r[31]+0x000000CCu); // 801E8574
  cmps(c,0,(int32_t)c->r[0],0); // 801E8578
  if (crb(c,1)) { goto L_801E8588; } // 801E857C
  c->r[3]=0u+0x00000001u; // 801E8580
  goto L_801E858C; // 801E8584
L_801E8588:;
  c->r[3]=0u+0x00000000u; // 801E8588
L_801E858C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E858C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8590
  c->lr=c->r[0]; // 801E8594
  c->r[1]=c->r[1]+0x00000010u; // 801E8598
  return; // 801E859C
}

// fn_801E85A0
void f_801E85A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E85A0
  c->r[0]=c->lr; // 801E85A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E85A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E85AC
  c->r[31]=c->r[3]|c->r[3]; // 801E85B0
  c->lr=0x801E85B8u; f_8012FAAC(c); // 801E85B4
  c->r[3]=0u+0x80470000u; // 801E85B8
  c->r[0]=c->r[3]+0x000043D0u; // 801E85BC
  W32(c->r[31]+0x00000058u,c->r[0]); // 801E85C0
  c->r[0]=0u+0xFFFFFFFFu; // 801E85C4
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801E85C8
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801E85CC
  c->r[0]=0u+0x00000001u; // 801E85D0
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801E85D4
  c->r[0]=0u+0x00000000u; // 801E85D8
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801E85DC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801E85E0
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801E85E4
  c->r[3]=c->r[31]|c->r[31]; // 801E85E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E85EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E85F0
  c->lr=c->r[0]; // 801E85F4
  c->r[1]=c->r[1]+0x00000010u; // 801E85F8
  return; // 801E85FC
}

// fn_801E8600
void f_801E8600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8600
  c->r[0]=c->lr; // 801E8604
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8608
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E860C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E8610
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E8614
  c->r[29]=c->r[3]|c->r[3]; // 801E8618
  c->lr=0x801E8620u; f_8011C12C(c); // 801E861C
  c->r[4]=0u+0x00000015u; // 801E8620
  c->lr=0x801E8628u; f_8011CFF4(c); // 801E8624
  c->lr=0x801E862Cu; f_80056B5C(c); // 801E8628
  c->r[30]=c->r[3]|c->r[3]; // 801E862C
  c->lr=0x801E8634u; f_801F1340(c); // 801E8630
  c->lr=0x801E8638u; f_80056B54(c); // 801E8634
  c->r[3]=0u+0x00000B28u; // 801E8638
  c->lr=0x801E8640u; f_80047B64(c); // 801E863C
  c->r[31]=c->r[3]|c->r[3]; // 801E8640
  cmps(c,0,(int32_t)c->r[3],0); // 801E8644
  if (crb(c,2)) { goto L_801E8650; } // 801E8648
  c->lr=0x801E8650u; f_801E8D90(c); // 801E864C
L_801E8650:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801E8650
  c->r[3]=c->r[30]|c->r[30]; // 801E8654
  c->lr=0x801E865Cu; f_80056B54(c); // 801E8658
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E865C
  c->r[4]=0u+0x00000000u; // 801E8660
  c->lr=0x801E8668u; f_80114AE0(c); // 801E8664
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E8668
  c->r[4]=0u+0x00000000u; // 801E866C
  c->lr=0x801E8674u; f_801169C8(c); // 801E8670
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801E8674
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E8678
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801E867C
  c->ctr=c->r[12]; // 801E8680
  if (true) { c->lr=0x801E8688u; dispatch(c,c->ctr); } // 801E8684
  c->lr=0x801E868Cu; f_80056B5C(c); // 801E8688
  c->r[30]=c->r[3]|c->r[3]; // 801E868C
  c->lr=0x801E8694u; f_801F1340(c); // 801E8690
  c->lr=0x801E8698u; f_80056B54(c); // 801E8694
  c->r[3]=0u+0x00000168u; // 801E8698
  c->lr=0x801E86A0u; f_80047B64(c); // 801E869C
  c->r[31]=c->r[3]|c->r[3]; // 801E86A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E86A4
  if (crb(c,2)) { goto L_801E86B0; } // 801E86A8
  c->lr=0x801E86B0u; f_801E8CDC(c); // 801E86AC
L_801E86B0:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801E86B0
  c->r[3]=c->r[30]|c->r[30]; // 801E86B4
  c->lr=0x801E86BCu; f_80056B54(c); // 801E86B8
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801E86BC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E86C0
  c->r[12]=R32(c->r[12]+0x00000040u); // 801E86C4
  c->ctr=c->r[12]; // 801E86C8
  if (true) { c->lr=0x801E86D0u; dispatch(c,c->ctr); } // 801E86CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E86D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E86D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E86D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E86DC
  c->lr=c->r[0]; // 801E86E0
  c->r[1]=c->r[1]+0x00000020u; // 801E86E4
  return; // 801E86E8
}

// fn_801E86EC
void f_801E86EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E86EC
  c->r[0]=c->lr; // 801E86F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E86F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E86F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E86FC
  c->r[30]=c->r[3]|c->r[3]; // 801E8700
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E8704
  c->lr=0x801E870Cu; f_801E7960(c); // 801E8708
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801E870C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8710
  if (crb(c,2)) { goto L_801E8768; } // 801E8714
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E8718
  c->r[12]=R32(c->r[12]+0x00000060u); // 801E871C
  c->ctr=c->r[12]; // 801E8720
  if (true) { c->lr=0x801E8728u; dispatch(c,c->ctr); } // 801E8724
  c->lr=0x801E872Cu; f_80056B5C(c); // 801E8728
  c->r[31]=c->r[3]|c->r[3]; // 801E872C
  c->lr=0x801E8734u; f_801F1340(c); // 801E8730
  c->lr=0x801E8738u; f_80056B54(c); // 801E8734
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801E8738
  cmps(c,0,(int32_t)c->r[3],0); // 801E873C
  if (crb(c,2)) { goto L_801E8758; } // 801E8740
  c->r[4]=0u+0x00000001u; // 801E8744
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E8748
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E874C
  c->ctr=c->r[12]; // 801E8750
  if (true) { c->lr=0x801E8758u; dispatch(c,c->ctr); } // 801E8754
L_801E8758:;
  c->r[3]=c->r[31]|c->r[31]; // 801E8758
  c->lr=0x801E8760u; f_80056B54(c); // 801E875C
  c->r[0]=0u+0x00000000u; // 801E8760
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801E8764
L_801E8768:;
  c->r[0]=R32(c->r[30]+0x000000C4u); // 801E8768
  cmps(c,0,(int32_t)c->r[0],0); // 801E876C
  if (crb(c,2)) { goto L_801E87B4; } // 801E8770
  c->lr=0x801E8778u; f_80056B5C(c); // 801E8774
  c->r[31]=c->r[3]|c->r[3]; // 801E8778
  c->lr=0x801E8780u; f_801F1340(c); // 801E877C
  c->lr=0x801E8784u; f_80056B54(c); // 801E8780
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801E8784
  cmps(c,0,(int32_t)c->r[3],0); // 801E8788
  if (crb(c,2)) { goto L_801E87A4; } // 801E878C
  c->r[4]=0u+0x00000001u; // 801E8790
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E8794
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E8798
  c->ctr=c->r[12]; // 801E879C
  if (true) { c->lr=0x801E87A4u; dispatch(c,c->ctr); } // 801E87A0
L_801E87A4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E87A4
  c->lr=0x801E87ACu; f_80056B54(c); // 801E87A8
  c->r[0]=0u+0x00000000u; // 801E87AC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801E87B0
L_801E87B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E87B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E87B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E87BC
  c->lr=c->r[0]; // 801E87C0
  c->r[1]=c->r[1]+0x00000010u; // 801E87C4
  return; // 801E87C8
}

// fn_801E87CC
void f_801E87CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E87CC
  c->r[0]=c->lr; // 801E87D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E87D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E87D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E87DC
  c->r[30]=c->r[3]|c->r[3]; // 801E87E0
  c->r[31]=c->r[4]|c->r[4]; // 801E87E4
  cmps(c,0,(int32_t)c->r[3],0); // 801E87E8
  if (crb(c,2)) { goto L_801E880C; } // 801E87EC
  c->r[4]=0u+0x00000000u; // 801E87F0
  c->lr=0x801E87F8u; f_801E8D18(c); // 801E87F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E87F8
  cmps(c,0,(int32_t)c->r[0],0); // 801E87FC
  if (!crb(c,1)) { goto L_801E880C; } // 801E8800
  c->r[3]=c->r[30]|c->r[30]; // 801E8804
  c->lr=0x801E880Cu; f_80047B20(c); // 801E8808
L_801E880C:;
  c->r[3]=c->r[30]|c->r[30]; // 801E880C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8810
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E8814
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8818
  c->lr=c->r[0]; // 801E881C
  c->r[1]=c->r[1]+0x00000010u; // 801E8820
  return; // 801E8824
}

// fn_801E8828
void f_801E8828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8828
  c->r[0]=c->lr; // 801E882C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8834
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8838
  c->r[30]=c->r[3]|c->r[3]; // 801E883C
  c->r[31]=c->r[4]|c->r[4]; // 801E8840
  cmps(c,0,(int32_t)c->r[3],0); // 801E8844
  if (crb(c,2)) { goto L_801E8868; } // 801E8848
  c->r[4]=0u+0x00000000u; // 801E884C
  c->lr=0x801E8854u; f_8012F7F0(c); // 801E8850
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E8854
  cmps(c,0,(int32_t)c->r[0],0); // 801E8858
  if (!crb(c,1)) { goto L_801E8868; } // 801E885C
  c->r[3]=c->r[30]|c->r[30]; // 801E8860
  c->lr=0x801E8868u; f_80047B20(c); // 801E8864
L_801E8868:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E886C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E8870
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8874
  c->lr=c->r[0]; // 801E8878
  c->r[1]=c->r[1]+0x00000010u; // 801E887C
  return; // 801E8880
}

// fn_801E8884
void f_801E8884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8884
  c->r[0]=c->lr; // 801E8888
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E888C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8890
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8894
  c->r[30]=c->r[3]|c->r[3]; // 801E8898
  c->r[31]=c->r[4]|c->r[4]; // 801E889C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E88A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E88A4
  if (crb(c,2)) { goto L_801E88B0; } // 801E88A8
  c->lr=0x801E88B0u; f_8012F910(c); // 801E88AC
L_801E88B0:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801E88B0
  cmps(c,0,(int32_t)c->r[3],0); // 801E88B4
  if (crb(c,2)) { goto L_801E88C4; } // 801E88B8
  c->r[4]=c->r[31]|c->r[31]; // 801E88BC
  c->lr=0x801E88C4u; f_801E7A48(c); // 801E88C0
L_801E88C4:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801E88C4
  c->r[0]=cntlz(c->r[31]); // 801E88C8
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E88CC
  c->lr=0x801E88D4u; f_801E7ABC(c); // 801E88D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E88D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E88D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E88DC
  c->lr=c->r[0]; // 801E88E0
  c->r[1]=c->r[1]+0x00000010u; // 801E88E4
  return; // 801E88E8
}

// fn_801E88EC
void f_801E88EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E88EC
  c->r[0]=c->lr; // 801E88F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E88F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E88F8
  c->r[31]=c->r[3]|c->r[3]; // 801E88FC
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E8900
  c->r[4]=0u+0x00000000u; // 801E8904
  c->lr=0x801E890Cu; f_801E7A48(c); // 801E8908
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E890C
  c->r[4]=0u+0x00000001u; // 801E8910
  c->lr=0x801E8918u; f_801E7ABC(c); // 801E8914
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E8918
  c->r[4]=0u+0x00000001u; // 801E891C
  c->lr=0x801E8924u; f_8012F910(c); // 801E8920
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E8924
  c->r[4]=0u+0x00000000u; // 801E8928
  c->r[5]=0u+0x00000006u; // 801E892C
  c->lr=0x801E8934u; f_8012E640(c); // 801E8930
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8934
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8938
  c->lr=c->r[0]; // 801E893C
  c->r[1]=c->r[1]+0x00000010u; // 801E8940
  return; // 801E8944
}

// fn_801E8948
void f_801E8948(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8948
  c->r[0]=c->lr; // 801E894C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8954
  c->r[31]=c->r[3]|c->r[3]; // 801E8958
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E895C
  c->r[4]=0u+0x00000000u; // 801E8960
  c->lr=0x801E8968u; f_801E7A48(c); // 801E8964
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E8968
  c->r[4]=0u+0x00000001u; // 801E896C
  c->lr=0x801E8974u; f_801E7ABC(c); // 801E8970
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E8974
  c->r[4]=0u+0x00000001u; // 801E8978
  c->lr=0x801E8980u; f_8012F910(c); // 801E897C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E8980
  c->r[4]=0u+0x00000002u; // 801E8984
  c->r[5]=0u+0x00000006u; // 801E8988
  c->lr=0x801E8990u; f_8012E640(c); // 801E898C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8990
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8994
  c->lr=c->r[0]; // 801E8998
  c->r[1]=c->r[1]+0x00000010u; // 801E899C
  return; // 801E89A0
}

// fn_801E89A4
void f_801E89A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E89A4
  c->r[0]=c->lr; // 801E89A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E89AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E89B0
  c->r[31]=c->r[3]|c->r[3]; // 801E89B4
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E89B8
  c->r[4]=0u+0x00000001u; // 801E89BC
  c->lr=0x801E89C4u; f_801E7A48(c); // 801E89C0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E89C4
  c->r[4]=0u+0x00000000u; // 801E89C8
  c->lr=0x801E89D0u; f_801E7ABC(c); // 801E89CC
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E89D0
  c->r[4]=0u+0x00000001u; // 801E89D4
  c->r[5]=0u+0x00000006u; // 801E89D8
  c->lr=0x801E89E0u; f_8012E640(c); // 801E89DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E89E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E89E4
  c->lr=c->r[0]; // 801E89E8
  c->r[1]=c->r[1]+0x00000010u; // 801E89EC
  return; // 801E89F0
}

// fn_801E89F4
void f_801E89F4(Ctx* __restrict c) {
  c->r[0]=0u+0x00000001u; // 801E89F4
  W32(c->r[3]+0x000000D4u,c->r[0]); // 801E89F8
  W32(c->r[3]+0x000000D0u,c->r[0]); // 801E89FC
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E8A00
  f_801E8028(c); return; // 801E8A04
}

// fn_801E8A08
void f_801E8A08(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801E8A08
  c->r[4]=0u+0x00000000u; // 801E8A0C
  f_8012ECA4(c); return; // 801E8A10
}

// fn_801E8A14
void f_801E8A14(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E8A14
  f_801E8548(c); return; // 801E8A18
}

// fn_801E8A1C
void f_801E8A1C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E8A1C
  f_801E7FD4(c); return; // 801E8A20
}

// fn_801E8A24
void f_801E8A24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8A24
  c->r[0]=c->lr; // 801E8A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8A2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8A30
  c->r[31]=c->r[3]|c->r[3]; // 801E8A34
  c->lr=0x801E8A3Cu; f_8012FBA8(c); // 801E8A38
  c->r[0]=R32(c->r[31]+0x000000D4u); // 801E8A3C
  cmps(c,0,(int32_t)c->r[0],0); // 801E8A40
  if (crb(c,2)) { goto L_801E8A74; } // 801E8A44
  c->r[0]=R32(c->r[31]+0x000000D0u); // 801E8A48
  cmps(c,0,(int32_t)c->r[0],0); // 801E8A4C
  if (crb(c,2)) { goto L_801E8A6C; } // 801E8A50
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801E8A54
  c->lr=0x801E8A5Cu; f_801E81B0(c); // 801E8A58
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801E8A5C
  c->lr=0x801E8A64u; f_801E7AC4(c); // 801E8A60
  c->r[0]=0u+0x00000000u; // 801E8A64
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801E8A68
L_801E8A6C:;
  c->r[0]=0u+0x00000000u; // 801E8A6C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801E8A70
L_801E8A74:;
  c->r[3]=c->r[31]|c->r[31]; // 801E8A74
  c->lr=0x801E8A7Cu; f_801E8AC4(c); // 801E8A78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8A7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8A80
  c->lr=c->r[0]; // 801E8A84
  c->r[1]=c->r[1]+0x00000010u; // 801E8A88
  return; // 801E8A8C
}

// fn_801E8A90
void f_801E8A90(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x000000C8u); // 801E8A90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801E8A94
  if (crb(c,2)) { goto L_801E8AA4; } // 801E8A98
  c->r[0]=0u+0x00000001u; // 801E8A9C
  W32(c->r[3]+0x000000D4u,c->r[0]); // 801E8AA0
L_801E8AA4:;
  c->r[0]=R32(c->r[3]+0x000000CCu); // 801E8AA4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801E8AA8
  if (crb(c,2)) { goto L_801E8AB8; } // 801E8AAC
  c->r[0]=0u+0x00000001u; // 801E8AB0
  W32(c->r[3]+0x000000D4u,c->r[0]); // 801E8AB4
L_801E8AB8:;
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801E8AB8
  W32(c->r[3]+0x000000CCu,c->r[5]); // 801E8ABC
  return; // 801E8AC0
}

// fn_801E8AC4
void f_801E8AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8AC4
  c->r[0]=c->lr; // 801E8AC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E8ACC
  c->r[6]=R32(c->r[3]+0x000000C8u); // 801E8AD0
  cmps(c,0,(int32_t)c->r[6],-1); // 801E8AD4
  if (!crb(c,1)) { goto L_801E8B78; } // 801E8AD8
  c->r[5]=R32(c->r[3]+0x000000CCu); // 801E8ADC
  cmps(c,0,(int32_t)c->r[5],-1); // 801E8AE0
  if (crb(c,1)) { goto L_801E8AEC; } // 801E8AE4
  goto L_801E8B78; // 801E8AE8
L_801E8AEC:;
  {uint32_t ea=c->r[2]+0xFFFF9430u; c->f[2]=RF64(ea);} // 801E8AEC
  c->r[0]=c->r[6]^0x80000000u; // 801E8AF0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E8AF4
  c->r[4]=0u+0x43300000u; // 801E8AF8
  W32(c->r[1]+0x00000008u,c->r[4]); // 801E8AFC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801E8B00
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801E8B04
  c->r[0]=c->r[5]^0x80000000u; // 801E8B08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8B0C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801E8B10
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801E8B14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801E8B18
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801E8B1C
  {uint32_t ea=c->r[2]+0xFFFF9424u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8B20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E8B24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801E8B28
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 801E8B2C
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 801E8B30
  c->r[0]=c->r[0]^0x80000000u; // 801E8B34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8B38
  W32(c->r[1]+0x00000020u,c->r[4]); // 801E8B3C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 801E8B40
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 801E8B44
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8B48
  fcmp(c,0,c->f[1],c->f[0]); // 801E8B4C
  if (!crb(c,0)) { goto L_801E8B58; } // 801E8B50
  c->f[1]=c->f[0]; // 801E8B54
L_801E8B58:;
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8B58
  fcmp(c,0,c->f[1],c->f[0]); // 801E8B5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801E8B60
  if (!crb(c,2)) { goto L_801E8B74; } // 801E8B64
  cmps(c,0,(int32_t)c->r[6],0); // 801E8B68
  if (!crb(c,1)) { goto L_801E8B74; } // 801E8B6C
  {uint32_t ea=c->r[2]+0xFFFF9440u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8B70
L_801E8B74:;
  c->lr=0x801E8B78u; f_801E8B88(c); // 801E8B74
L_801E8B78:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801E8B78
  c->lr=c->r[0]; // 801E8B7C
  c->r[1]=c->r[1]+0x00000030u; // 801E8B80
  return; // 801E8B84
}

// fn_801E8B88
void f_801E8B88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8B88
  c->r[0]=c->lr; // 801E8B8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8B90
  {uint32_t ea=c->r[2]+0xFFFF9420u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8B94
  fcmp(c,0,c->f[1],c->f[0]); // 801E8B98
  if (!crb(c,0)) { goto L_801E8BA4; } // 801E8B9C
  c->f[1]=c->f[0]; // 801E8BA0
L_801E8BA4:;
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801E8BA4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 801E8BA8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 801E8BAC
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801E8BB0
  c->lr=0x801E8BB8u; f_801E7B74(c); // 801E8BB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8BB8
  c->lr=c->r[0]; // 801E8BBC
  c->r[1]=c->r[1]+0x00000010u; // 801E8BC0
  return; // 801E8BC4
}

// fn_801E8BC8
void f_801E8BC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8BC8
  c->r[0]=c->lr; // 801E8BCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8BD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8BD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8BD8
  c->r[30]=c->r[3]|c->r[3]; // 801E8BDC
  c->r[31]=c->r[4]|c->r[4]; // 801E8BE0
  cmps(c,0,(int32_t)c->r[3],0); // 801E8BE4
  if (crb(c,2)) { goto L_801E8C08; } // 801E8BE8
  c->r[4]=0u+0x00000000u; // 801E8BEC
  c->lr=0x801E8BF4u; f_8012FB1C(c); // 801E8BF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E8BF4
  cmps(c,0,(int32_t)c->r[0],0); // 801E8BF8
  if (!crb(c,1)) { goto L_801E8C08; } // 801E8BFC
  c->r[3]=c->r[30]|c->r[30]; // 801E8C00
  c->lr=0x801E8C08u; f_80047B20(c); // 801E8C04
L_801E8C08:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8C08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8C0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E8C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8C14
  c->lr=c->r[0]; // 801E8C18
  c->r[1]=c->r[1]+0x00000010u; // 801E8C1C
  return; // 801E8C20
}

// fn_801E8C24
void f_801E8C24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8C24
  c->r[0]=c->lr; // 801E8C28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8C2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8C30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8C34
  c->r[30]=c->r[3]|c->r[3]; // 801E8C38
  c->r[31]=c->r[4]|c->r[4]; // 801E8C3C
  cmps(c,0,(int32_t)c->r[3],0); // 801E8C40
  if (crb(c,2)) { goto L_801E8C64; } // 801E8C44
  c->r[4]=0u+0x00000000u; // 801E8C48
  c->lr=0x801E8C50u; f_8012FB1C(c); // 801E8C4C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E8C50
  cmps(c,0,(int32_t)c->r[0],0); // 801E8C54
  if (!crb(c,1)) { goto L_801E8C64; } // 801E8C58
  c->r[3]=c->r[30]|c->r[30]; // 801E8C5C
  c->lr=0x801E8C64u; f_80047B20(c); // 801E8C60
L_801E8C64:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8C64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8C68
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E8C6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8C70
  c->lr=c->r[0]; // 801E8C74
  c->r[1]=c->r[1]+0x00000010u; // 801E8C78
  return; // 801E8C7C
}

// fn_801E8C80
void f_801E8C80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8C80
  c->r[0]=c->lr; // 801E8C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8C88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8C8C
  c->r[31]=c->r[3]|c->r[3]; // 801E8C90
  c->lr=0x801E8C98u; f_8012F740(c); // 801E8C94
  c->r[3]=0u+0x80470000u; // 801E8C98
  c->r[3]=c->r[3]+0x0000459Cu; // 801E8C9C
  W32(c->r[31]+0x00000020u,c->r[3]); // 801E8CA0
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8CA4
  W32(c->r[31]+0x00000288u,c->r[0]); // 801E8CA8
  c->r[0]=c->r[3]+0x00000018u; // 801E8CAC
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801E8CB0
  c->r[0]=c->r[3]+0x00000024u; // 801E8CB4
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801E8CB8
  c->r[0]=c->r[3]+0x00000030u; // 801E8CBC
  W32(c->r[31]+0x00000300u,c->r[0]); // 801E8CC0
  c->r[3]=c->r[31]|c->r[31]; // 801E8CC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8CCC
  c->lr=c->r[0]; // 801E8CD0
  c->r[1]=c->r[1]+0x00000010u; // 801E8CD4
  return; // 801E8CD8
}

// fn_801E8CDC
void f_801E8CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8CDC
  c->r[0]=c->lr; // 801E8CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8CE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8CE8
  c->r[31]=c->r[3]|c->r[3]; // 801E8CEC
  c->lr=0x801E8CF4u; f_801E78F4(c); // 801E8CF0
  c->r[3]=0u+0x80470000u; // 801E8CF4
  c->r[0]=c->r[3]+0x0000443Cu; // 801E8CF8
  W32(c->r[31]+0x00000058u,c->r[0]); // 801E8CFC
  c->r[3]=c->r[31]|c->r[31]; // 801E8D00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8D04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8D08
  c->lr=c->r[0]; // 801E8D0C
  c->r[1]=c->r[1]+0x00000010u; // 801E8D10
  return; // 801E8D14
}

// fn_801E8D18
void f_801E8D18(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8D18
  c->r[0]=c->lr; // 801E8D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8D24
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8D28
  c->r[30]=c->r[3]|c->r[3]; // 801E8D2C
  c->r[31]=c->r[4]|c->r[4]; // 801E8D30
  cmps(c,0,(int32_t)c->r[3],0); // 801E8D34
  if (crb(c,2)) { goto L_801E8D74; } // 801E8D38
  c->r[3]=c->r[3]+0x00000120u; // 801E8D3C
  c->r[4]=0u+0xFFFFFFFFu; // 801E8D40
  c->lr=0x801E8D48u; f_80110504(c); // 801E8D44
  c->r[3]=c->r[30]+0x000000D8u; // 801E8D48
  c->r[4]=0u+0xFFFFFFFFu; // 801E8D4C
  c->lr=0x801E8D54u; f_80110504(c); // 801E8D50
  c->r[3]=c->r[30]|c->r[30]; // 801E8D54
  c->r[4]=0u+0x00000000u; // 801E8D58
  c->lr=0x801E8D60u; f_8012FB1C(c); // 801E8D5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E8D60
  cmps(c,0,(int32_t)c->r[0],0); // 801E8D64
  if (!crb(c,1)) { goto L_801E8D74; } // 801E8D68
  c->r[3]=c->r[30]|c->r[30]; // 801E8D6C
  c->lr=0x801E8D74u; f_80047B20(c); // 801E8D70
L_801E8D74:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8D78
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E8D7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8D80
  c->lr=c->r[0]; // 801E8D84
  c->r[1]=c->r[1]+0x00000010u; // 801E8D88
  return; // 801E8D8C
}

// fn_801E8D90
void f_801E8D90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8D90
  c->r[0]=c->lr; // 801E8D94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8D98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8D9C
  c->r[31]=c->r[3]|c->r[3]; // 801E8DA0
  c->lr=0x801E8DA8u; f_8012F740(c); // 801E8DA4
  c->r[3]=0u+0x80470000u; // 801E8DA8
  c->r[3]=c->r[3]+0x00004654u; // 801E8DAC
  W32(c->r[31]+0x00000020u,c->r[3]); // 801E8DB0
  c->r[0]=c->r[3]+0x0000000Cu; // 801E8DB4
  W32(c->r[31]+0x00000288u,c->r[0]); // 801E8DB8
  c->r[0]=c->r[3]+0x00000018u; // 801E8DBC
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801E8DC0
  c->r[0]=c->r[3]+0x00000024u; // 801E8DC4
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801E8DC8
  c->r[0]=c->r[3]+0x00000030u; // 801E8DCC
  W32(c->r[31]+0x00000300u,c->r[0]); // 801E8DD0
  c->r[3]=c->r[31]|c->r[31]; // 801E8DD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8DD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8DDC
  c->lr=c->r[0]; // 801E8DE0
  c->r[1]=c->r[1]+0x00000010u; // 801E8DE4
  return; // 801E8DE8
}

// fn_801E8DEC
void f_801E8DEC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801E8DEC
  f_801E8828(c); return; // 801E8DF0
}

// fn_801E8DF4
void f_801E8DF4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801E8DF4
  f_801E8828(c); return; // 801E8DF8
}

// fn_801E8DFC
void f_801E8DFC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801E8DFC
  f_801E8828(c); return; // 801E8E00
}

// fn_801E8E04
void f_801E8E04(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801E8E04
  f_801E8828(c); return; // 801E8E08
}

// fn_801E8E0C
void f_801E8E0C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801E8E0C
  f_801E7890(c); return; // 801E8E10
}

// fn_801E8E14
void f_801E8E14(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801E8E14
  f_801E7890(c); return; // 801E8E18
}

// fn_801E8E1C
void f_801E8E1C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801E8E1C
  f_801E7890(c); return; // 801E8E20
}

// fn_801E8E24
void f_801E8E24(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801E8E24
  f_801E7890(c); return; // 801E8E28
}

// fn_801E8E2C
void f_801E8E2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8E2C
  c->r[0]=c->lr; // 801E8E30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8E34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8E38
  c->r[31]=c->r[3]|c->r[3]; // 801E8E3C
  c->lr=0x801E8E44u; f_8012FBEC(c); // 801E8E40
  c->r[3]=0u+0x80470000u; // 801E8E44
  c->r[0]=c->r[3]+0x00004710u; // 801E8E48
  W32(c->r[31]+0x00000044u,c->r[0]); // 801E8E4C
  {uint32_t ea=c->r[2]+0xFFFF9450u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8E50
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 801E8E54
  {uint32_t ea=c->r[2]+0xFFFF9454u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8E58
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E8E5C
  c->r[3]=c->r[31]|c->r[31]; // 801E8E60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8E64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8E68
  c->lr=c->r[0]; // 801E8E6C
  c->r[1]=c->r[1]+0x00000010u; // 801E8E70
  return; // 801E8E74
}

// fn_801E8E78
void f_801E8E78(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9458u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8E78
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E8E7C
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 801E8E80
  return; // 801E8E84
}

// fn_801E8E88
void f_801E8E88(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8E88
  return; // 801E8E8C
}

// fn_801E8E90
void f_801E8E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9454u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E8E90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E8E94
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 801E8E98
  return; // 801E8E9C
}

// fn_801E8EA0
void f_801E8EA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801E8EA0
  return; // 801E8EA4
}

// fn_801E8EA8
void f_801E8EA8(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801E8EA8
  c->r[3]=c->r[3]+0x00001448u; // 801E8EAC
  return; // 801E8EB0
}

// fn_801E8EB4
void f_801E8EB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8EB4
  c->r[0]=c->lr; // 801E8EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E8EC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E8EC4
  c->r[30]=c->r[3]|c->r[3]; // 801E8EC8
  c->r[31]=c->r[4]|c->r[4]; // 801E8ECC
  cmps(c,0,(int32_t)c->r[3],0); // 801E8ED0
  if (crb(c,2)) { goto L_801E8EF4; } // 801E8ED4
  c->r[4]=0u+0x00000000u; // 801E8ED8
  c->lr=0x801E8EE0u; f_801197A8(c); // 801E8EDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E8EE0
  cmps(c,0,(int32_t)c->r[0],0); // 801E8EE4
  if (!crb(c,1)) { goto L_801E8EF4; } // 801E8EE8
  c->r[3]=c->r[30]|c->r[30]; // 801E8EEC
  c->lr=0x801E8EF4u; f_80047B20(c); // 801E8EF0
L_801E8EF4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8EF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E8EF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E8EFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8F00
  c->lr=c->r[0]; // 801E8F04
  c->r[1]=c->r[1]+0x00000010u; // 801E8F08
  return; // 801E8F0C
}

// fn_801E8F10
void f_801E8F10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8F10
  c->r[0]=c->lr; // 801E8F14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E8F18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E8F1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E8F20
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E8F24
  c->r[29]=c->r[3]|c->r[3]; // 801E8F28
  c->lr=0x801E8F30u; f_80056B5C(c); // 801E8F2C
  c->r[30]=c->r[3]|c->r[3]; // 801E8F30
  c->lr=0x801E8F38u; f_8005DEE8(c); // 801E8F34
  c->lr=0x801E8F3Cu; f_80056B54(c); // 801E8F38
  c->r[3]=0u+0x00000050u; // 801E8F3C
  c->lr=0x801E8F44u; f_80047B64(c); // 801E8F40
  c->r[31]=c->r[3]|c->r[3]; // 801E8F44
  cmps(c,0,(int32_t)c->r[3],0); // 801E8F48
  if (crb(c,2)) { goto L_801E8F54; } // 801E8F4C
  c->lr=0x801E8F54u; f_801E8E2C(c); // 801E8F50
L_801E8F54:;
  c->r[3]=c->r[30]|c->r[30]; // 801E8F54
  c->lr=0x801E8F5Cu; f_80056B54(c); // 801E8F58
  c->r[3]=c->r[31]|c->r[31]; // 801E8F5C
  c->r[4]=0u+0x00000015u; // 801E8F60
  c->lr=0x801E8F68u; f_8011A278(c); // 801E8F64
  c->r[3]=c->r[29]|c->r[29]; // 801E8F68
  c->r[4]=c->r[31]|c->r[31]; // 801E8F6C
  c->lr=0x801E8F74u; f_8028CA70(c); // 801E8F70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E8F74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E8F78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E8F7C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E8F80
  c->lr=c->r[0]; // 801E8F84
  c->r[1]=c->r[1]+0x00000020u; // 801E8F88
  return; // 801E8F8C
}

// fn_801E8F90
void f_801E8F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8F90
  c->r[0]=c->lr; // 801E8F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8F98
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801E8F9C
  c->f[31]=c->f[1]; // 801E8FA0
  c->r[4]=0u+0x00000015u; // 801E8FA4
  c->lr=0x801E8FACu; f_8011B718(c); // 801E8FA8
  cmps(c,0,(int32_t)c->r[3],0); // 801E8FAC
  if (crb(c,2)) { goto L_801E8FBC; } // 801E8FB0
  c->f[1]=c->f[31]; // 801E8FB4
  c->lr=0x801E8FBCu; f_801E8E78(c); // 801E8FB8
L_801E8FBC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801E8FBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E8FC0
  c->lr=c->r[0]; // 801E8FC4
  c->r[1]=c->r[1]+0x00000010u; // 801E8FC8
  return; // 801E8FCC
}

// fn_801E8FD0
void f_801E8FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E8FD0
  c->r[0]=c->lr; // 801E8FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E8FD8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801E8FDC
  c->f[31]=c->f[1]; // 801E8FE0
  c->r[4]=0u+0x00000015u; // 801E8FE4
  c->lr=0x801E8FECu; f_8011B718(c); // 801E8FE8
  cmps(c,0,(int32_t)c->r[3],0); // 801E8FEC
  if (crb(c,2)) { goto L_801E8FFC; } // 801E8FF0
  c->f[1]=c->f[31]; // 801E8FF4
  c->lr=0x801E8FFCu; f_801E8E90(c); // 801E8FF8
L_801E8FFC:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801E8FFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9000
  c->lr=c->r[0]; // 801E9004
  c->r[1]=c->r[1]+0x00000010u; // 801E9008
  return; // 801E900C
}

// fn_801E9010
void f_801E9010(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9010
  c->r[0]=c->lr; // 801E9014
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9018
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801E901C
  c->f[31]=c->f[1]; // 801E9020
  c->lr=0x801E9028u; f_8011B41C(c); // 801E9024
  c->f[1]=c->f[31]; // 801E9028
  c->lr=0x801E9030u; f_801E8F90(c); // 801E902C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801E9030
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9034
  c->lr=c->r[0]; // 801E9038
  c->r[1]=c->r[1]+0x00000010u; // 801E903C
  return; // 801E9040
}

// fn_801E9044
void f_801E9044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9044
  c->r[0]=c->lr; // 801E9048
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E904C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801E9050
  c->f[31]=c->f[1]; // 801E9054
  c->lr=0x801E905Cu; f_8011B41C(c); // 801E9058
  c->f[1]=c->f[31]; // 801E905C
  c->lr=0x801E9064u; f_801E8FD0(c); // 801E9060
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801E9064
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9068
  c->lr=c->r[0]; // 801E906C
  c->r[1]=c->r[1]+0x00000010u; // 801E9070
  return; // 801E9074
}

// fn_801E9078
void f_801E9078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9078
  c->r[0]=c->lr; // 801E907C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9084
  c->r[31]=c->r[3]|c->r[3]; // 801E9088
  c->lr=0x801E9090u; f_80130F14(c); // 801E908C
  c->r[3]=0u+0x80470000u; // 801E9090
  c->r[0]=c->r[3]+0x000047BCu; // 801E9094
  W32(c->r[31]+0x00000058u,c->r[0]); // 801E9098
  c->r[3]=c->r[31]|c->r[31]; // 801E909C
  c->r[4]=0u+0x80470000u; // 801E90A0
  c->r[4]=c->r[4]+0x00004738u; // 801E90A4
  c->lr=0x801E90ACu; f_80131078(c); // 801E90A8
  c->r[0]=0u+0x00000000u; // 801E90AC
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801E90B0
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801E90B4
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801E90B8
  c->r[0]=0u+0x00000064u; // 801E90BC
  W32(c->r[31]+0x000000F8u,c->r[0]); // 801E90C0
  W32(c->r[31]+0x000000FCu,c->r[0]); // 801E90C4
  c->r[3]=c->r[31]|c->r[31]; // 801E90C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E90CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E90D0
  c->lr=c->r[0]; // 801E90D4
  c->r[1]=c->r[1]+0x00000010u; // 801E90D8
  return; // 801E90DC
}

// fn_801E90E0
void f_801E90E0(Ctx* __restrict c) {
  return; // 801E90E0
}

// fn_801E90E4
void f_801E90E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E90E4
  c->r[0]=c->lr; // 801E90E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E90EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E90F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E90F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E90F8
  c->r[29]=c->r[3]|c->r[3]; // 801E90FC
  c->r[3]=0u+0x00000015u; // 801E9100
  c->lr=0x801E9108u; f_801F1364(c); // 801E9104
  c->r[3]=c->r[29]|c->r[29]; // 801E9108
  c->r[4]=0u+0x00000000u; // 801E910C
  c->lr=0x801E9114u; f_80131168(c); // 801E9110
  c->r[3]=c->r[29]|c->r[29]; // 801E9114
  c->r[4]=0u+0x00000000u; // 801E9118
  c->lr=0x801E9120u; f_80131184(c); // 801E911C
  c->lr=0x801E9124u; f_80056B5C(c); // 801E9120
  c->r[30]=c->r[3]|c->r[3]; // 801E9124
  c->lr=0x801E912Cu; f_801F1340(c); // 801E9128
  c->lr=0x801E9130u; f_80056B54(c); // 801E912C
  c->r[3]=0u+0x00000004u; // 801E9130
  c->lr=0x801E9138u; f_80047B64(c); // 801E9134
  c->r[31]=c->r[3]|c->r[3]; // 801E9138
  cmps(c,0,(int32_t)c->r[3],0); // 801E913C
  if (crb(c,2)) { goto L_801E9148; } // 801E9140
  c->lr=0x801E9148u; f_801E761C(c); // 801E9144
L_801E9148:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801E9148
  c->r[3]=c->r[30]|c->r[30]; // 801E914C
  c->lr=0x801E9154u; f_80056B54(c); // 801E9150
  c->lr=0x801E9158u; f_80056B5C(c); // 801E9154
  c->r[30]=c->r[3]|c->r[3]; // 801E9158
  c->lr=0x801E9160u; f_801F1340(c); // 801E915C
  c->lr=0x801E9164u; f_80056B54(c); // 801E9160
  c->r[3]=0u+0x000000C4u; // 801E9164
  c->lr=0x801E916Cu; f_80047B64(c); // 801E9168
  c->r[31]=c->r[3]|c->r[3]; // 801E916C
  cmps(c,0,(int32_t)c->r[3],0); // 801E9170
  if (crb(c,2)) { goto L_801E917C; } // 801E9174
  c->lr=0x801E917Cu; f_801E7728(c); // 801E9178
L_801E917C:;
  W32(c->r[29]+0x000000ECu,c->r[31]); // 801E917C
  c->r[3]=c->r[30]|c->r[30]; // 801E9180
  c->lr=0x801E9188u; f_80056B54(c); // 801E9184
  c->lr=0x801E918Cu; f_80056B5C(c); // 801E9188
  c->r[30]=c->r[3]|c->r[3]; // 801E918C
  c->lr=0x801E9194u; f_801F1340(c); // 801E9190
  c->lr=0x801E9198u; f_80056B54(c); // 801E9194
  c->r[3]=0u+0x000000D8u; // 801E9198
  c->lr=0x801E91A0u; f_80047B64(c); // 801E919C
  c->r[31]=c->r[3]|c->r[3]; // 801E91A0
  cmps(c,0,(int32_t)c->r[3],0); // 801E91A4
  if (crb(c,2)) { goto L_801E91B0; } // 801E91A8
  c->lr=0x801E91B0u; f_801E85A0(c); // 801E91AC
L_801E91B0:;
  W32(c->r[29]+0x000000F0u,c->r[31]); // 801E91B0
  c->r[3]=c->r[30]|c->r[30]; // 801E91B4
  c->lr=0x801E91BCu; f_80056B54(c); // 801E91B8
  c->r[3]=R32(c->r[29]+0x000000ECu); // 801E91BC
  c->lr=0x801E91C4u; f_801E776C(c); // 801E91C0
  c->r[3]=R32(c->r[29]+0x000000F0u); // 801E91C4
  c->lr=0x801E91CCu; f_801E8600(c); // 801E91C8
  c->r[3]=c->r[29]|c->r[29]; // 801E91CC
  c->r[4]=0u+0x00000001u; // 801E91D0
  c->lr=0x801E91D8u; f_801311BC(c); // 801E91D4
  c->r[3]=c->r[29]|c->r[29]; // 801E91D8
  c->r[4]=0u+0x00000000u; // 801E91DC
  c->lr=0x801E91E4u; f_8013114C(c); // 801E91E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E91E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E91E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E91EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E91F0
  c->lr=c->r[0]; // 801E91F4
  c->r[1]=c->r[1]+0x00000020u; // 801E91F8
  return; // 801E91FC
}

// fn_801E9200
void f_801E9200(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9200
  c->r[0]=c->lr; // 801E9204
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E920C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9210
  c->r[30]=c->r[3]|c->r[3]; // 801E9214
  c->r[3]=0u+0x00000015u; // 801E9218
  c->lr=0x801E9220u; f_801F1364(c); // 801E921C
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801E9220
  cmps(c,0,(int32_t)c->r[3],0); // 801E9224
  if (crb(c,2)) { goto L_801E9230; } // 801E9228
  c->lr=0x801E9230u; f_801E86EC(c); // 801E922C
L_801E9230:;
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801E9230
  cmps(c,0,(int32_t)c->r[3],0); // 801E9234
  if (crb(c,2)) { goto L_801E9240; } // 801E9238
  c->lr=0x801E9240u; f_801E7804(c); // 801E923C
L_801E9240:;
  c->r[0]=R32(c->r[30]+0x000000E8u); // 801E9240
  cmps(c,0,(int32_t)c->r[0],0); // 801E9244
  if (crb(c,2)) { goto L_801E9278; } // 801E9248
  c->lr=0x801E9250u; f_80056B5C(c); // 801E924C
  c->r[31]=c->r[3]|c->r[3]; // 801E9250
  c->lr=0x801E9258u; f_801F1340(c); // 801E9254
  c->lr=0x801E925Cu; f_80056B54(c); // 801E9258
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801E925C
  c->r[4]=0u+0x00000001u; // 801E9260
  c->lr=0x801E9268u; f_801E7654(c); // 801E9264
  c->r[3]=c->r[31]|c->r[31]; // 801E9268
  c->lr=0x801E9270u; f_80056B54(c); // 801E926C
  c->r[0]=0u+0x00000000u; // 801E9270
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801E9274
L_801E9278:;
  c->r[0]=R32(c->r[30]+0x000000F0u); // 801E9278
  cmps(c,0,(int32_t)c->r[0],0); // 801E927C
  if (crb(c,2)) { goto L_801E92C4; } // 801E9280
  c->lr=0x801E9288u; f_80056B5C(c); // 801E9284
  c->r[31]=c->r[3]|c->r[3]; // 801E9288
  c->lr=0x801E9290u; f_801F1340(c); // 801E928C
  c->lr=0x801E9294u; f_80056B54(c); // 801E9290
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801E9294
  cmps(c,0,(int32_t)c->r[3],0); // 801E9298
  if (crb(c,2)) { goto L_801E92B4; } // 801E929C
  c->r[4]=0u+0x00000001u; // 801E92A0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E92A4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E92A8
  c->ctr=c->r[12]; // 801E92AC
  if (true) { c->lr=0x801E92B4u; dispatch(c,c->ctr); } // 801E92B0
L_801E92B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801E92B4
  c->lr=0x801E92BCu; f_80056B54(c); // 801E92B8
  c->r[0]=0u+0x00000000u; // 801E92BC
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801E92C0
L_801E92C4:;
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801E92C4
  cmps(c,0,(int32_t)c->r[0],0); // 801E92C8
  if (crb(c,2)) { goto L_801E9310; } // 801E92CC
  c->lr=0x801E92D4u; f_80056B5C(c); // 801E92D0
  c->r[31]=c->r[3]|c->r[3]; // 801E92D4
  c->lr=0x801E92DCu; f_801F1340(c); // 801E92D8
  c->lr=0x801E92E0u; f_80056B54(c); // 801E92DC
  c->r[3]=R32(c->r[30]+0x000000ECu); // 801E92E0
  cmps(c,0,(int32_t)c->r[3],0); // 801E92E4
  if (crb(c,2)) { goto L_801E9300; } // 801E92E8
  c->r[4]=0u+0x00000001u; // 801E92EC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E92F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E92F4
  c->ctr=c->r[12]; // 801E92F8
  if (true) { c->lr=0x801E9300u; dispatch(c,c->ctr); } // 801E92FC
L_801E9300:;
  c->r[3]=c->r[31]|c->r[31]; // 801E9300
  c->lr=0x801E9308u; f_80056B54(c); // 801E9304
  c->r[0]=0u+0x00000000u; // 801E9308
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801E930C
L_801E9310:;
  c->r[3]=c->r[30]|c->r[30]; // 801E9310
  c->r[4]=0u+0x00000009u; // 801E9314
  c->lr=0x801E931Cu; f_8013114C(c); // 801E9318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E931C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9320
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9324
  c->lr=c->r[0]; // 801E9328
  c->r[1]=c->r[1]+0x00000010u; // 801E932C
  return; // 801E9330
}

// fn_801E9334
void f_801E9334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9334
  c->r[0]=c->lr; // 801E9338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E933C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9340
  c->r[31]=c->r[3]|c->r[3]; // 801E9344
  c->r[4]=0u+0x00000001u; // 801E9348
  c->lr=0x801E9350u; f_80131168(c); // 801E934C
  c->r[3]=c->r[31]|c->r[31]; // 801E9350
  c->r[4]=0u+0x00000001u; // 801E9354
  c->lr=0x801E935Cu; f_80131184(c); // 801E9358
  c->r[3]=c->r[31]|c->r[31]; // 801E935C
  c->r[4]=0u+0x00000000u; // 801E9360
  c->lr=0x801E9368u; f_8013114C(c); // 801E9364
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9368
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E936C
  c->lr=c->r[0]; // 801E9370
  c->r[1]=c->r[1]+0x00000010u; // 801E9374
  return; // 801E9378
}

// fn_801E937C
void f_801E937C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E937C
  c->r[0]=c->lr; // 801E9380
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9388
  c->r[31]=c->r[3]|c->r[3]; // 801E938C
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E9390
  c->lr=0x801E9398u; f_801E88EC(c); // 801E9394
  c->r[3]=c->r[31]|c->r[31]; // 801E9398
  c->r[4]=0u+0x00000003u; // 801E939C
  c->lr=0x801E93A4u; f_8013114C(c); // 801E93A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E93A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E93A8
  c->lr=c->r[0]; // 801E93AC
  c->r[1]=c->r[1]+0x00000010u; // 801E93B0
  return; // 801E93B4
}

// fn_801E93B8
void f_801E93B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E93B8
  c->r[0]=c->lr; // 801E93BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E93C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E93C4
  c->r[31]=c->r[3]|c->r[3]; // 801E93C8
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E93CC
  c->lr=0x801E93D4u; f_801E8A08(c); // 801E93D0
  cmps(c,0,(int32_t)c->r[3],0); // 801E93D4
  if (crb(c,2)) { goto L_801E93F8; } // 801E93D8
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801E93DC
  c->lr=0x801E93E4u; f_801E89F4(c); // 801E93E0
  c->r[3]=c->r[31]|c->r[31]; // 801E93E4
  c->lr=0x801E93ECu; f_801E9668(c); // 801E93E8
  c->r[3]=c->r[31]|c->r[31]; // 801E93EC
  c->r[4]=0u+0x00000004u; // 801E93F0
  c->lr=0x801E93F8u; f_8013114C(c); // 801E93F4
L_801E93F8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E93F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E93FC
  c->lr=c->r[0]; // 801E9400
  c->r[1]=c->r[1]+0x00000010u; // 801E9404
  return; // 801E9408
}

// fn_801E940C
void f_801E940C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E940C
  c->r[0]=c->lr; // 801E9410
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9418
  c->r[31]=c->r[3]|c->r[3]; // 801E941C
  c->lr=0x801E9424u; f_801E9668(c); // 801E9420
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801E9424
  c->lr=0x801E942Cu; f_801E8A1C(c); // 801E9428
  cmps(c,0,(int32_t)c->r[3],0); // 801E942C
  if (!crb(c,2)) { goto L_801E9448; } // 801E9430
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801E9434
  c->lr=0x801E943Cu; f_801E7710(c); // 801E9438
  c->r[3]=c->r[31]|c->r[31]; // 801E943C
  c->r[4]=0u+0x00000005u; // 801E9440
  c->lr=0x801E9448u; f_8013114C(c); // 801E9444
L_801E9448:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9448
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E944C
  c->lr=c->r[0]; // 801E9450
  c->r[1]=c->r[1]+0x00000010u; // 801E9454
  return; // 801E9458
}

// fn_801E945C
void f_801E945C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E945C
  c->r[0]=c->lr; // 801E9460
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9468
  c->r[31]=c->r[3]|c->r[3]; // 801E946C
  c->r[0]=R32(c->r[3]+0x000000E8u); // 801E9470
  cmps(c,0,(int32_t)c->r[0],0); // 801E9474
  if (crb(c,2)) { goto L_801E94A0; } // 801E9478
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E947C
  c->lr=0x801E9484u; f_801E8A14(c); // 801E9480
  cmps(c,0,(int32_t)c->r[3],0); // 801E9484
  if (crb(c,2)) { goto L_801E9498; } // 801E9488
  c->r[3]=c->r[31]|c->r[31]; // 801E948C
  c->r[4]=0u+0x00000006u; // 801E9490
  c->lr=0x801E9498u; f_8013114C(c); // 801E9494
L_801E9498:;
  c->r[3]=c->r[31]|c->r[31]; // 801E9498
  c->lr=0x801E94A0u; f_801E9668(c); // 801E949C
L_801E94A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E94A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E94A4
  c->lr=c->r[0]; // 801E94A8
  c->r[1]=c->r[1]+0x00000010u; // 801E94AC
  return; // 801E94B0
}

// fn_801E94B4
void f_801E94B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E94B4
  c->r[0]=c->lr; // 801E94B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E94BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E94C0
  c->r[31]=c->r[3]|c->r[3]; // 801E94C4
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E94C8
  c->lr=0x801E94D0u; f_801E8948(c); // 801E94CC
  c->r[3]=c->r[31]|c->r[31]; // 801E94D0
  c->r[4]=0u+0x00000007u; // 801E94D4
  c->lr=0x801E94DCu; f_8013114C(c); // 801E94D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E94DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E94E0
  c->lr=c->r[0]; // 801E94E4
  c->r[1]=c->r[1]+0x00000010u; // 801E94E8
  return; // 801E94EC
}

// fn_801E94F0
void f_801E94F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E94F0
  c->r[0]=c->lr; // 801E94F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E94F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E94FC
  c->r[31]=c->r[3]|c->r[3]; // 801E9500
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E9504
  c->lr=0x801E950Cu; f_801E8A08(c); // 801E9508
  cmps(c,0,(int32_t)c->r[3],0); // 801E950C
  if (crb(c,2)) { goto L_801E952C; } // 801E9510
  c->r[3]=c->r[31]|c->r[31]; // 801E9514
  c->r[4]=0u+0x00000000u; // 801E9518
  c->lr=0x801E9520u; f_801E9630(c); // 801E951C
  c->r[3]=c->r[31]|c->r[31]; // 801E9520
  c->r[4]=0u+0x00000000u; // 801E9524
  c->lr=0x801E952Cu; f_8013114C(c); // 801E9528
L_801E952C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E952C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9530
  c->lr=c->r[0]; // 801E9534
  c->r[1]=c->r[1]+0x00000010u; // 801E9538
  return; // 801E953C
}

// fn_801E9540
void f_801E9540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9540
  c->r[0]=c->lr; // 801E9544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E954C
  c->r[31]=c->r[3]|c->r[3]; // 801E9550
  c->r[4]=0u+0x00000000u; // 801E9554
  c->lr=0x801E955Cu; f_801311BC(c); // 801E9558
  c->r[3]=c->r[31]|c->r[31]; // 801E955C
  c->r[4]=0u+0x00000001u; // 801E9560
  c->lr=0x801E9568u; f_8013114C(c); // 801E9564
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9568
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E956C
  c->lr=c->r[0]; // 801E9570
  c->r[1]=c->r[1]+0x00000010u; // 801E9574
  return; // 801E9578
}

// fn_801E957C
void f_801E957C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000008u; // 801E957C
  f_8013114C(c); return; // 801E9580
}

// fn_801E9584
void f_801E9584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9584
  c->r[0]=c->lr; // 801E9588
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E958C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9590
  c->r[31]=c->r[3]|c->r[3]; // 801E9594
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E9598
  cmps(c,0,(int32_t)c->r[3],0); // 801E959C
  if (crb(c,2)) { goto L_801E95A8; } // 801E95A0
  c->lr=0x801E95A8u; f_801E7720(c); // 801E95A4
L_801E95A8:;
  c->r[3]=c->r[31]|c->r[31]; // 801E95A8
  c->r[4]=0u+0x00000002u; // 801E95AC
  c->lr=0x801E95B4u; f_8013114C(c); // 801E95B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E95B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E95B8
  c->lr=c->r[0]; // 801E95BC
  c->r[1]=c->r[1]+0x00000010u; // 801E95C0
  return; // 801E95C4
}

// fn_801E95C8
void f_801E95C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E95C8
  c->r[0]=c->lr; // 801E95CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E95D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E95D4
  c->r[31]=c->r[3]|c->r[3]; // 801E95D8
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E95DC
  cmps(c,0,(int32_t)c->r[3],0); // 801E95E0
  if (crb(c,2)) { goto L_801E95EC; } // 801E95E4
  c->lr=0x801E95ECu; f_801E7720(c); // 801E95E8
L_801E95EC:;
  c->r[3]=c->r[31]|c->r[31]; // 801E95EC
  c->r[4]=0u+0x00000000u; // 801E95F0
  c->lr=0x801E95F8u; f_801E9630(c); // 801E95F4
  c->r[3]=c->r[31]|c->r[31]; // 801E95F8
  c->r[4]=0u+0x00000000u; // 801E95FC
  c->lr=0x801E9604u; f_8013114C(c); // 801E9600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9604
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9608
  c->lr=c->r[0]; // 801E960C
  c->r[1]=c->r[1]+0x00000010u; // 801E9610
  return; // 801E9614
}

// fn_801E9618
void f_801E9618(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801E9618
  cmps(c,0,(int32_t)c->r[3],0); // 801E961C
  if (crb(c,2)) { goto L_801E9628; } // 801E9620
  f_801E7718(c); return; // 801E9624
L_801E9628:;
  c->r[3]=0u+0x00000001u; // 801E9628
  return; // 801E962C
}

// fn_801E9630
void f_801E9630(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E9630
  cmps(c,0,(int32_t)c->r[3],0); // 801E9634
  if (crb(c,2)) return; // 801E9638
  f_801E8884(c); return; // 801E963C
  return; // 801E9640
}

// fn_801E9644
void f_801E9644(Ctx* __restrict c) {
  W32(c->r[3]+0x000000F8u,c->r[4]); // 801E9644
  W32(c->r[3]+0x000000FCu,c->r[5]); // 801E9648
  return; // 801E964C
}

// fn_801E9650
void f_801E9650(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000ECu); // 801E9650
  cmps(c,0,(int32_t)c->r[3],0); // 801E9654
  if (crb(c,2)) { goto L_801E9660; } // 801E9658
  f_801E78EC(c); return; // 801E965C
L_801E9660:;
  c->r[3]=0u+0x00000000u; // 801E9660
  return; // 801E9664
}

// fn_801E9668
void f_801E9668(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9668
  c->r[0]=c->lr; // 801E966C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9670
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9674
  c->r[31]=c->r[3]|c->r[3]; // 801E9678
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801E967C
  c->r[4]=R32(c->r[31]+0x000000F8u); // 801E9680
  c->r[5]=R32(c->r[31]+0x000000FCu); // 801E9684
  c->lr=0x801E968Cu; f_801E8A90(c); // 801E9688
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801E968C
  c->lr=0x801E9694u; f_801E89A4(c); // 801E9690
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9694
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9698
  c->lr=c->r[0]; // 801E969C
  c->r[1]=c->r[1]+0x00000010u; // 801E96A0
  return; // 801E96A4
}

// fn_801E96A8
void f_801E96A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E96A8
  c->r[0]=c->lr; // 801E96AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E96B0
  c->lr=0x801E96B8u; f_8011C12C(c); // 801E96B4
  c->r[4]=0u+0x00000015u; // 801E96B8
  c->lr=0x801E96C0u; f_8011CFF4(c); // 801E96BC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E96C0
  c->r[12]=R32(c->r[12]+0x00000048u); // 801E96C4
  c->ctr=c->r[12]; // 801E96C8
  if (true) { c->lr=0x801E96D0u; dispatch(c,c->ctr); } // 801E96CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E96D0
  c->lr=c->r[0]; // 801E96D4
  c->r[1]=c->r[1]+0x00000010u; // 801E96D8
  return; // 801E96DC
}

// fn_801E96E0
void f_801E96E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E96E0
  c->r[0]=c->lr; // 801E96E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E96E8
  c->lr=0x801E96F0u; f_8011C12C(c); // 801E96EC
  c->r[4]=0u+0x00000015u; // 801E96F0
  c->lr=0x801E96F8u; f_8011CFF4(c); // 801E96F4
  c->lr=0x801E96FCu; f_801E95C8(c); // 801E96F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E96FC
  c->lr=c->r[0]; // 801E9700
  c->r[1]=c->r[1]+0x00000010u; // 801E9704
  return; // 801E9708
}

// fn_801E970C
void f_801E970C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E970C
  c->r[0]=c->lr; // 801E9710
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9714
  c->lr=0x801E971Cu; f_8011C12C(c); // 801E9718
  c->r[4]=0u+0x00000015u; // 801E971C
  c->lr=0x801E9724u; f_8011CFF4(c); // 801E9720
  c->lr=0x801E9728u; f_801E9618(c); // 801E9724
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9728
  c->lr=c->r[0]; // 801E972C
  c->r[1]=c->r[1]+0x00000010u; // 801E9730
  return; // 801E9734
}

// fn_801E9738
void f_801E9738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9738
  c->r[0]=c->lr; // 801E973C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9744
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9748
  c->r[30]=c->r[3]|c->r[3]; // 801E974C
  c->r[31]=c->r[4]|c->r[4]; // 801E9750
  c->lr=0x801E9758u; f_8011C12C(c); // 801E9754
  c->r[4]=0u+0x00000015u; // 801E9758
  c->lr=0x801E9760u; f_8011CFF4(c); // 801E975C
  c->r[4]=c->r[30]|c->r[30]; // 801E9760
  c->r[5]=c->r[31]|c->r[31]; // 801E9764
  c->lr=0x801E976Cu; f_801E9644(c); // 801E9768
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E976C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9770
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9774
  c->lr=c->r[0]; // 801E9778
  c->r[1]=c->r[1]+0x00000010u; // 801E977C
  return; // 801E9780
}

// fn_801E9784
void f_801E9784(Ctx* __restrict c) {
  c->r[3]=0u+0x80470000u; // 801E9784
  c->r[5]=c->r[3]+0x00004738u; // 801E9788
  c->r[3]=0u+0x80440000u; // 801E978C
  c->r[4]=c->r[3]+0xFFFFD898u; // 801E9790
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9794
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9798
  W32(c->r[5]+0x00000078u,c->r[3]); // 801E979C
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 801E97A0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801E97A4
  W32(c->r[5]+0x00000080u,c->r[0]); // 801E97A8
  return; // 801E97AC
}

// fn_801E97B0
void f_801E97B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E97B0
  c->r[0]=c->lr; // 801E97B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E97B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E97BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E97C0
  c->r[30]=c->r[3]|c->r[3]; // 801E97C4
  c->r[31]=c->r[4]|c->r[4]; // 801E97C8
  cmps(c,0,(int32_t)c->r[3],0); // 801E97CC
  if (crb(c,2)) { goto L_801E97F0; } // 801E97D0
  c->r[4]=0u+0x00000000u; // 801E97D4
  c->lr=0x801E97DCu; f_80130F88(c); // 801E97D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801E97DC
  cmps(c,0,(int32_t)c->r[0],0); // 801E97E0
  if (!crb(c,1)) { goto L_801E97F0; } // 801E97E4
  c->r[3]=c->r[30]|c->r[30]; // 801E97E8
  c->lr=0x801E97F0u; f_80047B20(c); // 801E97EC
L_801E97F0:;
  c->r[3]=c->r[30]|c->r[30]; // 801E97F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E97F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E97F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E97FC
  c->lr=c->r[0]; // 801E9800
  c->r[1]=c->r[1]+0x00000010u; // 801E9804
  return; // 801E9808
}

// fn_801E980C
void f_801E980C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E980C
  c->r[0]=c->lr; // 801E9810
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9814
  c->r[11]=c->r[1]+0x00000020u; // 801E9818
  c->lr=0x801E9820u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801E981C
  c->r[27]=c->r[3]|c->r[3]; // 801E9820
  c->lr=0x801E9828u; f_8005DF58(c); // 801E9824
  c->r[3]=c->r[27]+0x0000005Cu; // 801E9828
  c->lr=0x801E9830u; f_80074EB4(c); // 801E982C
  c->r[3]=0u+0x80470000u; // 801E9830
  c->r[3]=c->r[3]+0x00004888u; // 801E9834
  W32(c->r[27]+0x00000058u,c->r[3]); // 801E9838
  c->r[0]=c->r[3]+0x0000000Cu; // 801E983C
  W32(c->r[27]+0x0000005Cu,c->r[0]); // 801E9840
  c->r[3]=c->r[27]+0x00000060u; // 801E9844
  c->r[4]=0u+0x80050000u; // 801E9848
  c->r[4]=c->r[4]+0x000059A4u; // 801E984C
  c->r[5]=0u+0x80050000u; // 801E9850
  c->r[5]=c->r[5]+0x00005A10u; // 801E9854
  c->r[6]=0u+0x000000D0u; // 801E9858
  c->r[7]=0u+0x00000002u; // 801E985C
  c->lr=0x801E9864u; f_802F07B0(c); // 801E9860
  c->r[3]=c->r[27]+0x0000020Cu; // 801E9864
  c->r[28]=0u+0x80050000u; // 801E9868
  c->r[4]=c->r[28]+0x0000192Cu; // 801E986C
  c->r[29]=0u+0x80050000u; // 801E9870
  c->r[5]=c->r[29]+0x00001978u; // 801E9874
  c->r[6]=0u+0x00000024u; // 801E9878
  c->r[7]=0u+0x00000003u; // 801E987C
  c->lr=0x801E9884u; f_802F07B0(c); // 801E9880
  c->r[3]=c->r[27]+0x00000278u; // 801E9884
  c->r[30]=0u+0x80050000u; // 801E9888
  c->r[4]=c->r[30]+0x000029A4u; // 801E988C
  c->r[31]=0u+0x80050000u; // 801E9890
  c->r[5]=c->r[31]+0x00002A68u; // 801E9894
  c->r[6]=0u+0x00000518u; // 801E9898
  c->r[7]=0u+0x00000003u; // 801E989C
  c->lr=0x801E98A4u; f_802F07B0(c); // 801E98A0
  c->r[3]=c->r[27]+0x000011D8u; // 801E98A4
  c->r[4]=c->r[28]+0x0000192Cu; // 801E98A8
  c->r[5]=c->r[29]+0x00001978u; // 801E98AC
  c->r[6]=0u+0x00000024u; // 801E98B0
  c->r[7]=0u+0x00000003u; // 801E98B4
  c->lr=0x801E98BCu; f_802F07B0(c); // 801E98B8
  c->r[3]=c->r[27]+0x00001244u; // 801E98BC
  c->r[4]=c->r[30]+0x000029A4u; // 801E98C0
  c->r[5]=c->r[31]+0x00002A68u; // 801E98C4
  c->r[6]=0u+0x00000518u; // 801E98C8
  c->r[7]=0u+0x00000003u; // 801E98CC
  c->lr=0x801E98D4u; f_802F07B0(c); // 801E98D0
  c->r[3]=c->r[27]+0x0000218Cu; // 801E98D4
  c->r[4]=0u+0x80060000u; // 801E98D8
  c->r[4]=c->r[4]+0x000003DCu; // 801E98DC
  c->r[5]=0u+0x80060000u; // 801E98E0
  c->r[5]=c->r[5]+0x0000047Cu; // 801E98E4
  c->r[6]=0u+0x000000ACu; // 801E98E8
  c->r[7]=0u+0x00000003u; // 801E98EC
  c->lr=0x801E98F4u; f_802F07B0(c); // 801E98F0
  c->r[3]=c->r[27]+0x000024B4u; // 801E98F4
  c->lr=0x801E98FCu; f_8004B0A4(c); // 801E98F8
  c->r[3]=c->r[27]+0x000024C0u; // 801E98FC
  c->lr=0x801E9904u; f_801EB568(c); // 801E9900
  c->r[3]=c->r[27]+0x000024E4u; // 801E9904
  c->lr=0x801E990Cu; f_8023BC5C(c); // 801E9908
  c->r[3]=0u+0x00000000u; // 801E990C
  W32(c->r[27]+0x00002390u,c->r[3]); // 801E9910
  W32(c->r[27]+0x00002394u,c->r[3]); // 801E9914
  W32(c->r[27]+0x00002398u,c->r[3]); // 801E9918
  W32(c->r[27]+0x00000200u,c->r[3]); // 801E991C
  W32(c->r[27]+0x00000204u,c->r[3]); // 801E9920
  W32(c->r[27]+0x00000208u,c->r[3]); // 801E9924
  W32(c->r[27]+0x0000239Cu,c->r[3]); // 801E9928
  c->r[0]=0u+0x00000001u; // 801E992C
  W32(c->r[27]+0x000023A4u,c->r[0]); // 801E9930
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9934
  {uint32_t ea=c->r[27]+0x000023B0u; WF32(ea,c->f[0]);} // 801E9938
  W32(c->r[27]+0x000011C0u,c->r[3]); // 801E993C
  W32(c->r[27]+0x000011CCu,c->r[3]); // 801E9940
  W32(c->r[27]+0x000011C4u,c->r[3]); // 801E9944
  W32(c->r[27]+0x000011D0u,c->r[3]); // 801E9948
  W32(c->r[27]+0x000011C8u,c->r[3]); // 801E994C
  W32(c->r[27]+0x000011D4u,c->r[3]); // 801E9950
  c->lr=0x801E9958u; f_80056B64(c); // 801E9954
  c->r[31]=c->r[3]|c->r[3]; // 801E9958
  c->r[3]=c->r[27]+0x0000005Cu; // 801E995C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801E9960
  c->r[12]=R32(c->r[12]+0x00000024u); // 801E9964
  c->ctr=c->r[12]; // 801E9968
  if (true) { c->lr=0x801E9970u; dispatch(c,c->ctr); } // 801E996C
  c->r[4]=c->r[3]|c->r[3]; // 801E9970
  c->r[3]=c->r[27]|c->r[27]; // 801E9974
  c->r[5]=0u+0x00040000u; // 801E9978
  c->r[6]=0u+0x00000001u; // 801E997C
  c->r[7]=0u+0x00000008u; // 801E9980
  c->r[8]=0u+0x80470000u; // 801E9984
  c->r[8]=c->r[8]+0x00004838u; // 801E9988
  c->r[9]=c->r[31]|c->r[31]; // 801E998C
  c->lr=0x801E9994u; f_8005E01C(c); // 801E9990
  c->r[3]=c->r[27]|c->r[27]; // 801E9994
  c->r[4]=0u+0x00000002u; // 801E9998
  c->lr=0x801E99A0u; f_801EB5F4(c); // 801E999C
  c->r[3]=c->r[27]|c->r[27]; // 801E99A0
  c->r[11]=c->r[1]+0x00000020u; // 801E99A4
  c->lr=0x801E99ACu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801E99A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E99AC
  c->lr=c->r[0]; // 801E99B0
  c->r[1]=c->r[1]+0x00000020u; // 801E99B4
  return; // 801E99B8
}

// fn_801E99BC
void f_801E99BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E99BC
  c->r[0]=c->lr; // 801E99C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E99C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E99C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E99CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801E99D0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801E99D4
  c->r[28]=c->r[3]|c->r[3]; // 801E99D8
  c->r[29]=c->r[4]|c->r[4]; // 801E99DC
  cmps(c,0,(int32_t)c->r[3],0); // 801E99E0
  if (crb(c,2)) { goto L_801E9AF0; } // 801E99E4
  c->r[4]=0u+0x80470000u; // 801E99E8
  c->r[4]=c->r[4]+0x00004888u; // 801E99EC
  W32(c->r[3]+0x00000058u,c->r[4]); // 801E99F0
  c->r[0]=c->r[4]+0x0000000Cu; // 801E99F4
  W32(c->r[3]+0x0000005Cu,c->r[0]); // 801E99F8
  c->r[3]=R32(c->r[13]+0xFFFFBB20u); // 801E99FC
  cmps(c,0,(int32_t)c->r[3],0); // 801E9A00
  if (crb(c,2)) { goto L_801E9A1C; } // 801E9A04
  c->r[4]=0u+0x00000001u; // 801E9A08
  c->r[12]=R32(c->r[3]+0x00000058u); // 801E9A0C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801E9A10
  c->ctr=c->r[12]; // 801E9A14
  if (true) { c->lr=0x801E9A1Cu; dispatch(c,c->ctr); } // 801E9A18
L_801E9A1C:;
  c->r[0]=0u+0x00000000u; // 801E9A1C
  W32(c->r[13]+0xFFFFBB20u,c->r[0]); // 801E9A20
  c->r[3]=c->r[28]+0x000024E4u; // 801E9A24
  c->r[4]=0u+0xFFFFFFFFu; // 801E9A28
  c->lr=0x801E9A30u; f_8023BD48(c); // 801E9A2C
  c->r[3]=c->r[28]+0x000024C0u; // 801E9A30
  c->r[4]=0u+0xFFFFFFFFu; // 801E9A34
  c->lr=0x801E9A3Cu; f_8005C058(c); // 801E9A38
  c->r[3]=c->r[28]+0x0000218Cu; // 801E9A3C
  c->r[4]=0u+0x80060000u; // 801E9A40
  c->r[4]=c->r[4]+0x0000047Cu; // 801E9A44
  c->r[5]=0u+0x000000ACu; // 801E9A48
  c->r[6]=0u+0x00000003u; // 801E9A4C
  c->lr=0x801E9A54u; f_802F08A8(c); // 801E9A50
  c->r[3]=c->r[28]+0x00001244u; // 801E9A54
  c->r[30]=0u+0x80050000u; // 801E9A58
  c->r[4]=c->r[30]+0x00002A68u; // 801E9A5C
  c->r[5]=0u+0x00000518u; // 801E9A60
  c->r[6]=0u+0x00000003u; // 801E9A64
  c->lr=0x801E9A6Cu; f_802F08A8(c); // 801E9A68
  c->r[3]=c->r[28]+0x000011D8u; // 801E9A6C
  c->r[31]=0u+0x80050000u; // 801E9A70
  c->r[4]=c->r[31]+0x00001978u; // 801E9A74
  c->r[5]=0u+0x00000024u; // 801E9A78
  c->r[6]=0u+0x00000003u; // 801E9A7C
  c->lr=0x801E9A84u; f_802F08A8(c); // 801E9A80
  c->r[3]=c->r[28]+0x00000278u; // 801E9A84
  c->r[4]=c->r[30]+0x00002A68u; // 801E9A88
  c->r[5]=0u+0x00000518u; // 801E9A8C
  c->r[6]=0u+0x00000003u; // 801E9A90
  c->lr=0x801E9A98u; f_802F08A8(c); // 801E9A94
  c->r[3]=c->r[28]+0x0000020Cu; // 801E9A98
  c->r[4]=c->r[31]+0x00001978u; // 801E9A9C
  c->r[5]=0u+0x00000024u; // 801E9AA0
  c->r[6]=0u+0x00000003u; // 801E9AA4
  c->lr=0x801E9AACu; f_802F08A8(c); // 801E9AA8
  c->r[3]=c->r[28]+0x00000060u; // 801E9AAC
  c->r[4]=0u+0x80050000u; // 801E9AB0
  c->r[4]=c->r[4]+0x00005A10u; // 801E9AB4
  c->r[5]=0u+0x000000D0u; // 801E9AB8
  c->r[6]=0u+0x00000002u; // 801E9ABC
  c->lr=0x801E9AC4u; f_802F08A8(c); // 801E9AC0
  c->r[3]=c->r[28]+0x0000005Cu; // 801E9AC4
  c->r[4]=0u+0x00000000u; // 801E9AC8
  c->lr=0x801E9AD0u; f_80074E70(c); // 801E9ACC
  c->r[3]=c->r[28]|c->r[28]; // 801E9AD0
  c->r[4]=0u+0x00000000u; // 801E9AD4
  c->lr=0x801E9ADCu; f_8005DF94(c); // 801E9AD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 801E9ADC
  cmps(c,0,(int32_t)c->r[0],0); // 801E9AE0
  if (!crb(c,1)) { goto L_801E9AF0; } // 801E9AE4
  c->r[3]=c->r[28]|c->r[28]; // 801E9AE8
  c->lr=0x801E9AF0u; f_80047B20(c); // 801E9AEC
L_801E9AF0:;
  c->r[3]=c->r[28]|c->r[28]; // 801E9AF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E9AF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E9AF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E9AFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801E9B00
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E9B04
  c->lr=c->r[0]; // 801E9B08
  c->r[1]=c->r[1]+0x00000020u; // 801E9B0C
  return; // 801E9B10
}

// fn_801E9B14
void f_801E9B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9B14
  c->r[0]=c->lr; // 801E9B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9B20
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9B24
  c->r[0]=R32(c->r[13]+0xFFFFBB20u); // 801E9B28
  cmps(c,0,(int32_t)c->r[0],0); // 801E9B2C
  if (!crb(c,2)) { goto L_801E9B6C; } // 801E9B30
  c->lr=0x801E9B38u; f_80056B5C(c); // 801E9B34
  c->r[30]=c->r[3]|c->r[3]; // 801E9B38
  c->lr=0x801E9B40u; f_80056B64(c); // 801E9B3C
  c->lr=0x801E9B44u; f_80056B54(c); // 801E9B40
  c->r[3]=0u+0x00010000u; // 801E9B44
  c->r[3]=c->r[3]+0x00004908u; // 801E9B48
  c->lr=0x801E9B50u; f_80047B64(c); // 801E9B4C
  c->r[31]=c->r[3]|c->r[3]; // 801E9B50
  cmps(c,0,(int32_t)c->r[3],0); // 801E9B54
  if (crb(c,2)) { goto L_801E9B60; } // 801E9B58
  c->lr=0x801E9B60u; f_801E980C(c); // 801E9B5C
L_801E9B60:;
  W32(c->r[13]+0xFFFFBB20u,c->r[31]); // 801E9B60
  c->r[3]=c->r[30]|c->r[30]; // 801E9B64
  c->lr=0x801E9B6Cu; f_80056B54(c); // 801E9B68
L_801E9B6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9B70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9B74
  c->lr=c->r[0]; // 801E9B78
  c->r[1]=c->r[1]+0x00000010u; // 801E9B7C
  return; // 801E9B80
}

// fn_801E9B84
void f_801E9B84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9B84
  c->r[0]=c->lr; // 801E9B88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9B8C
  c->r[3]=R32(c->r[13]+0xFFFFBB20u); // 801E9B90
  cmps(c,0,(int32_t)c->r[3],0); // 801E9B94
  if (!crb(c,2)) { goto L_801E9BA4; } // 801E9B98
  c->r[3]=0u+0x00000000u; // 801E9B9C
  goto L_801E9BB4; // 801E9BA0
L_801E9BA4:;
  c->lr=0x801E9BA8u; f_801EB5C8(c); // 801E9BA4
  c->r[0]=c->r[3]+0xFFFFFE00u; // 801E9BA8
  c->r[0]=cntlz(c->r[0]); // 801E9BAC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E9BB0
L_801E9BB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9BB4
  c->lr=c->r[0]; // 801E9BB8
  c->r[1]=c->r[1]+0x00000010u; // 801E9BBC
  return; // 801E9BC0
}

// fn_801E9BC4
void f_801E9BC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9BC4
  c->r[0]=c->lr; // 801E9BC8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E9BCC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E9BD0
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E9BD4
  c->r[31]=c->r[3]|c->r[3]; // 801E9BD8
  c->r[3]=0u+0x80430000u; // 801E9BDC
  c->r[4]=c->r[3]+0x00001600u; // 801E9BE0
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9BE4
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9BE8
  W32(c->r[1]+0x00000020u,c->r[3]); // 801E9BEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9BF0
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E9BF4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E9BF8
  W32(c->r[1]+0x00000028u,c->r[3]); // 801E9BFC
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E9C00
  c->r[3]=R32(c->r[4]+0x00000010u); // 801E9C04
  c->r[0]=R32(c->r[4]+0x00000014u); // 801E9C08
  W32(c->r[1]+0x00000030u,c->r[3]); // 801E9C0C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9C10
  c->lr=0x801E9C18u; f_8005D2E8(c); // 801E9C14
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9C18
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9C1C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801E9C20
  c->lr=0x801E9C28u; f_8005D314(c); // 801E9C24
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9C28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9C2C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801E9C30
  c->lr=0x801E9C38u; f_8005D2E8(c); // 801E9C34
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9C38
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801E9C3C
  {uint32_t ea=c->r[2]+0xFFFF9468u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9C40
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9C44
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801E9C48
  c->lr=0x801E9C50u; f_8005D314(c); // 801E9C4C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9C50
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801E9C54
  {uint32_t ea=c->r[2]+0xFFFF946Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9C58
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9C5C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801E9C60
  c->r[3]=0u+0x80430000u; // 801E9C64
  c->r[4]=c->r[3]+0x00001618u; // 801E9C68
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9C6C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9C70
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E9C74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E9C78
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E9C7C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E9C80
  W32(c->r[1]+0x00000010u,c->r[3]); // 801E9C84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9C88
  c->r[3]=R32(c->r[4]+0x00000010u); // 801E9C8C
  c->r[0]=R32(c->r[4]+0x00000014u); // 801E9C90
  W32(c->r[1]+0x00000018u,c->r[3]); // 801E9C94
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E9C98
  c->r[0]=R32(c->r[31]+0x00002390u); // 801E9C9C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; // 801E9CA0
  c->r[0]=cntlz(c->r[0]); // 801E9CA4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801E9CA8
  c->r[30]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801E9CAC
  c->r[3]=c->r[31]+0x00000060u; // 801E9CB0
  c->r[4]=c->r[1]+0x00000020u; // 801E9CB4
  {uint32_t ea=c->r[4]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9CB8
  c->r[4]=c->r[1]+0x00000024u; // 801E9CBC
  {uint32_t ea=c->r[4]+c->r[30]; c->f[2]=c->ps1[2]=RF32(ea);} // 801E9CC0
  c->r[4]=c->r[1]+0x00000028u; // 801E9CC4
  {uint32_t ea=c->r[4]+c->r[30]; c->f[3]=c->ps1[3]=RF32(ea);} // 801E9CC8
  c->lr=0x801E9CD0u; f_801EB614(c); // 801E9CCC
  c->r[3]=c->r[31]+0x00000060u; // 801E9CD0
  c->r[4]=c->r[1]+0x00000008u; // 801E9CD4
  {uint32_t ea=c->r[4]+c->r[30]; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9CD8
  c->r[4]=c->r[1]+0x0000000Cu; // 801E9CDC
  {uint32_t ea=c->r[4]+c->r[30]; c->f[2]=c->ps1[2]=RF32(ea);} // 801E9CE0
  c->r[4]=c->r[1]+0x00000010u; // 801E9CE4
  {uint32_t ea=c->r[4]+c->r[30]; c->f[3]=c->ps1[3]=RF32(ea);} // 801E9CE8
  c->lr=0x801E9CF0u; f_801EB604(c); // 801E9CEC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E9CF0
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E9CF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E9CF8
  c->lr=c->r[0]; // 801E9CFC
  c->r[1]=c->r[1]+0x00000040u; // 801E9D00
  return; // 801E9D04
}

// fn_801E9D08
void f_801E9D08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9D08
  c->r[0]=c->lr; // 801E9D0C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801E9D10
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801E9D14
  W32(c->r[1]+0x00000038u,c->r[30]); // 801E9D18
  c->r[30]=c->r[3]|c->r[3]; // 801E9D1C
  c->r[31]=c->r[4]|c->r[4]; // 801E9D20
  c->r[3]=0u+0x80430000u; // 801E9D24
  c->r[4]=c->r[3]+0x00001630u; // 801E9D28
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9D2C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9D30
  W32(c->r[1]+0x00000020u,c->r[3]); // 801E9D34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E9D38
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E9D3C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E9D40
  W32(c->r[1]+0x00000028u,c->r[3]); // 801E9D44
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801E9D48
  c->r[3]=R32(c->r[4]+0x00000010u); // 801E9D4C
  c->r[0]=R32(c->r[4]+0x00000014u); // 801E9D50
  W32(c->r[1]+0x00000030u,c->r[3]); // 801E9D54
  W32(c->r[1]+0x00000034u,c->r[0]); // 801E9D58
  c->lr=0x801E9D60u; f_8005D2E8(c); // 801E9D5C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9D60
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9D64
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 801E9D68
  c->lr=0x801E9D70u; f_8005D314(c); // 801E9D6C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9D70
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9D74
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801E9D78
  c->lr=0x801E9D80u; f_8005D2E8(c); // 801E9D7C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9D80
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9D84
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801E9D88
  c->lr=0x801E9D90u; f_8005D314(c); // 801E9D8C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9D90
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801E9D94
  {uint32_t ea=c->r[2]+0xFFFF9470u; c->f[0]=c->ps1[0]=RF32(ea);} // 801E9D98
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801E9D9C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801E9DA0
  c->r[3]=0u+0x80430000u; // 801E9DA4
  c->r[4]=c->r[3]+0x00001648u; // 801E9DA8
  c->r[3]=R32(c->r[4]+0x00000000u); // 801E9DAC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801E9DB0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801E9DB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801E9DB8
  c->r[3]=R32(c->r[4]+0x00000008u); // 801E9DBC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801E9DC0
  W32(c->r[1]+0x00000010u,c->r[3]); // 801E9DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9DC8
  c->r[3]=R32(c->r[4]+0x00000010u); // 801E9DCC
  c->r[0]=R32(c->r[4]+0x00000014u); // 801E9DD0
  W32(c->r[1]+0x00000018u,c->r[3]); // 801E9DD4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801E9DD8
  c->r[31]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 801E9DDC
  c->r[3]=c->r[30]+0x00000130u; // 801E9DE0
  c->r[4]=c->r[1]+0x00000020u; // 801E9DE4
  {uint32_t ea=c->r[4]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9DE8
  c->r[4]=c->r[1]+0x00000024u; // 801E9DEC
  {uint32_t ea=c->r[4]+c->r[31]; c->f[2]=c->ps1[2]=RF32(ea);} // 801E9DF0
  c->r[4]=c->r[1]+0x00000028u; // 801E9DF4
  {uint32_t ea=c->r[4]+c->r[31]; c->f[3]=c->ps1[3]=RF32(ea);} // 801E9DF8
  c->lr=0x801E9E00u; f_801EB614(c); // 801E9DFC
  c->r[3]=c->r[30]+0x00000130u; // 801E9E00
  c->r[4]=c->r[1]+0x00000008u; // 801E9E04
  {uint32_t ea=c->r[4]+c->r[31]; c->f[1]=c->ps1[1]=RF32(ea);} // 801E9E08
  c->r[4]=c->r[1]+0x0000000Cu; // 801E9E0C
  {uint32_t ea=c->r[4]+c->r[31]; c->f[2]=c->ps1[2]=RF32(ea);} // 801E9E10
  c->r[4]=c->r[1]+0x00000010u; // 801E9E14
  {uint32_t ea=c->r[4]+c->r[31]; c->f[3]=c->ps1[3]=RF32(ea);} // 801E9E18
  c->lr=0x801E9E20u; f_801EB604(c); // 801E9E1C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801E9E20
  c->r[30]=R32(c->r[1]+0x00000038u); // 801E9E24
  c->r[0]=R32(c->r[1]+0x00000044u); // 801E9E28
  c->lr=c->r[0]; // 801E9E2C
  c->r[1]=c->r[1]+0x00000040u; // 801E9E30
  return; // 801E9E34
}

// fn_801E9E38
void f_801E9E38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9E38
  c->r[0]=c->lr; // 801E9E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E9E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E9E44
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E9E48
  c->r[30]=c->r[3]|c->r[3]; // 801E9E4C
  c->r[31]=c->r[5]|c->r[5]; // 801E9E50
  cmps(c,0,(int32_t)c->r[4],0); // 801E9E54
  if (crb(c,2)) { goto L_801E9E88; } // 801E9E58
  c->r[4]=R32(c->r[3]+0x00002390u); // 801E9E5C
  c->r[0]=c->r[4]&0x00000005u; cr0(c,c->r[0]); // 801E9E60
  cmps(c,0,(int32_t)c->r[0],0); // 801E9E64
  if (!crb(c,2)) { goto L_801E9EC4; } // 801E9E68
  c->r[0]=c->r[4]|0x00000005u; // 801E9E6C
  W32(c->r[3]+0x00002390u,c->r[0]); // 801E9E70
  c->lr=0x801E9E78u; f_80047C9C(c); // 801E9E74
  c->r[4]=0u+0x00000000u; // 801E9E78
  c->r[5]=0u+0x00000000u; // 801E9E7C
  c->lr=0x801E9E84u; f_80065690(c); // 801E9E80
  goto L_801E9EC4; // 801E9E84
L_801E9E88:;
  c->lr=0x801E9E8Cu; f_801E9EF0(c); // 801E9E88
  cmps(c,0,(int32_t)c->r[3],0); // 801E9E8C
  if (crb(c,2)) { goto L_801E9ED8; } // 801E9E90
  c->r[3]=R32(c->r[30]+0x00002390u); // 801E9E94
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 801E9E98
  cmps(c,0,(int32_t)c->r[0],0); // 801E9E9C
  if (!crb(c,2)) { goto L_801E9EC4; } // 801E9EA0
  c->r[0]=c->r[3]|0x00000006u; // 801E9EA4
  W32(c->r[30]+0x00002390u,c->r[0]); // 801E9EA8
  c->lr=0x801E9EB0u; f_80047C9C(c); // 801E9EAC
  c->r[4]=0u+0x00000001u; // 801E9EB0
  c->r[5]=0u+0x00000000u; // 801E9EB4
  c->lr=0x801E9EBCu; f_80065690(c); // 801E9EB8
  goto L_801E9EC4; // 801E9EBC
  goto L_801E9ED8; // 801E9EC0
L_801E9EC4:;
  c->r[3]=c->r[30]|c->r[30]; // 801E9EC4
  c->r[4]=c->r[31]|c->r[31]; // 801E9EC8
  c->lr=0x801E9ED0u; f_801EA574(c); // 801E9ECC
  c->r[3]=c->r[30]|c->r[30]; // 801E9ED0
  c->lr=0x801E9ED8u; f_801E9BC4(c); // 801E9ED4
L_801E9ED8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E9ED8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E9EDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9EE0
  c->lr=c->r[0]; // 801E9EE4
  c->r[1]=c->r[1]+0x00000010u; // 801E9EE8
  return; // 801E9EEC
}

// fn_801E9EF0
void f_801E9EF0(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00002390u); // 801E9EF0
  c->r[3]=rotl(c->r[0],0)&0x00000004u; // 801E9EF4
  c->r[0]=0u-c->r[3]; // 801E9EF8
  c->r[0]=c->r[0]|c->r[3]; // 801E9EFC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801E9F00
  return; // 801E9F04
}

// fn_801E9F08
void f_801E9F08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E9F08
  c->r[0]=c->lr; // 801E9F0C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801E9F10
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[31]);} // 801E9F14
  W32(c->r[1]+0x00000044u,c->r[31]); // 801E9F18
  W32(c->r[1]+0x00000040u,c->r[30]); // 801E9F1C
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 801E9F20
  c->r[29]=c->r[3]|c->r[3]; // 801E9F24
  c->r[30]=c->r[4]|c->r[4]; // 801E9F28
  c->r[31]=c->r[5]|c->r[5]; // 801E9F2C
  c->f[31]=c->f[1]; // 801E9F30
  c->lr=0x801E9F38u; f_800F4430(c); // 801E9F34
  cmps(c,0,(int32_t)c->r[3],0); // 801E9F38
  if (!crb(c,2)) { goto L_801E9F48; } // 801E9F3C
  c->r[3]=0u+0x00000000u; // 801E9F40
  goto L_801E9FF4; // 801E9F44
L_801E9F48:;
  c->lr=0x801E9F4Cu; f_800F4430(c); // 801E9F48
  c->lr=0x801E9F50u; f_800F475C(c); // 801E9F4C
  cmps(c,0,(int32_t)c->r[3],0); // 801E9F50
  if (!crb(c,2)) { goto L_801E9F60; } // 801E9F54
  c->r[3]=0u+0x00000000u; // 801E9F58
  goto L_801E9FF4; // 801E9F5C
L_801E9F60:;
  cmps(c,0,(int32_t)c->r[30],999); // 801E9F60
  if (!crb(c,2)) { goto L_801E9F80; } // 801E9F64
  c->r[0]=0u+0x00000009u; // 801E9F68
  W32(c->r[29]+0x000023ACu,c->r[0]); // 801E9F6C
  c->r[0]=R32(c->r[29]+0x0000239Cu); // 801E9F70
  c->r[0]=c->r[0]|0x00010000u; // 801E9F74
  W32(c->r[29]+0x0000239Cu,c->r[0]); // 801E9F78
  goto L_801E9F9C; // 801E9F7C
L_801E9F80:;
  c->lr=0x801E9F84u; f_800F4430(c); // 801E9F80
  c->r[3]=c->r[3]+0x000001DCu; // 801E9F84
  c->r[4]=c->r[30]|c->r[30]; // 801E9F88
  c->r[5]=c->r[1]+0x00000008u; // 801E9F8C
  c->lr=0x801E9F94u; f_801A1C60(c); // 801E9F90
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E9F94
  W32(c->r[29]+0x000023ACu,c->r[0]); // 801E9F98
L_801E9F9C:;
  W32(c->r[29]+0x000023A8u,c->r[30]); // 801E9F9C
  {uint32_t ea=c->r[29]+0x000023B0u; WF32(ea,c->f[31]);} // 801E9FA0
  cmps(c,0,(int32_t)c->r[31],0); // 801E9FA4
  if (crb(c,2)) { goto L_801E9FE4; } // 801E9FA8
  c->r[3]=c->r[29]+0x000023B4u; // 801E9FAC
  c->r[4]=0u+0x00000000u; // 801E9FB0
  c->r[5]=0u+0x00000100u; // 801E9FB4
  c->lr=0x801E9FBCu; f_800060B8(c); // 801E9FB8
  c->r[3]=c->r[29]+0x000023B4u; // 801E9FBC
  c->r[4]=c->r[31]|c->r[31]; // 801E9FC0
  c->r[5]=0u+0x00000100u; // 801E9FC4
  c->lr=0x801E9FCCu; f_802E9608(c); // 801E9FC8
  c->r[3]=c->r[29]+0x000024E4u; // 801E9FCC
  c->r[4]=0u+0x00000006u; // 801E9FD0
  c->lr=0x801E9FD8u; f_8023BDD0(c); // 801E9FD4
  c->r[0]=R32(c->r[29]+0x0000239Cu); // 801E9FD8
  c->r[0]=c->r[0]|0x00002000u; // 801E9FDC
  W32(c->r[29]+0x0000239Cu,c->r[0]); // 801E9FE0
L_801E9FE4:;
  c->r[0]=R32(c->r[29]+0x0000239Cu); // 801E9FE4
  c->r[0]=c->r[0]|0x00000001u; // 801E9FE8
  W32(c->r[29]+0x0000239Cu,c->r[0]); // 801E9FEC
  c->r[3]=0u+0x00000001u; // 801E9FF0
L_801E9FF4:;
  {uint32_t ea=c->r[1]+0x00000048u; c->f[31]=RF64(ea);} // 801E9FF4
  c->r[31]=R32(c->r[1]+0x00000044u); // 801E9FF8
  c->r[30]=R32(c->r[1]+0x00000040u); // 801E9FFC
  c->r[29]=R32(c->r[1]+0x0000003Cu); // 801EA000
  c->r[0]=R32(c->r[1]+0x00000054u); // 801EA004
  c->lr=c->r[0]; // 801EA008
  c->r[1]=c->r[1]+0x00000050u; // 801EA00C
  return; // 801EA010
}

// fn_801EA014
void f_801EA014(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000239Cu); // 801EA014
  c->r[3]=rotl(c->r[0],0)&0x00000004u; // 801EA018
  c->r[0]=0u-c->r[3]; // 801EA01C
  c->r[0]=c->r[0]|c->r[3]; // 801EA020
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801EA024
  return; // 801EA028
}

// fn_801EA02C
void f_801EA02C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000239Cu); // 801EA02C
  c->r[0]=c->r[0]|0x00000002u; // 801EA030
  W32(c->r[3]+0x0000239Cu,c->r[0]); // 801EA034
  c->r[3]=0u+0x00000001u; // 801EA038
  return; // 801EA03C
}

// fn_801EA040
void f_801EA040(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000239Cu); // 801EA040
  c->r[0]=cntlz(c->r[0]); // 801EA044
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801EA048
  return; // 801EA04C
}

// fn_801EA050
void f_801EA050(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA050
  c->r[0]=c->lr; // 801EA054
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA058
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA05C
  c->r[31]=c->r[3]|c->r[3]; // 801EA060
  c->lr=0x801EA068u; f_801EA52C(c); // 801EA064
  cmps(c,0,(int32_t)c->r[3],1); // 801EA068
  if (!crb(c,2)) { goto L_801EA07C; } // 801EA06C
  c->r[3]=c->r[31]|c->r[31]; // 801EA070
  c->r[4]=0u+0x00000200u; // 801EA074
  c->lr=0x801EA07Cu; f_8005E1C0(c); // 801EA078
L_801EA07C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA07C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA080
  c->lr=c->r[0]; // 801EA084
  c->r[1]=c->r[1]+0x00000010u; // 801EA088
  return; // 801EA08C
}

// fn_801EA090
void f_801EA090(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA090
  c->r[0]=c->lr; // 801EA094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA09C
  c->r[31]=c->r[3]|c->r[3]; // 801EA0A0
  c->lr=0x801EA0A8u; f_801EB2B0(c); // 801EA0A4
  c->r[3]=c->r[31]|c->r[31]; // 801EA0A8
  c->lr=0x801EA0B0u; f_801EA52C(c); // 801EA0AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA0B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA0B4
  c->lr=c->r[0]; // 801EA0B8
  c->r[1]=c->r[1]+0x00000010u; // 801EA0BC
  return; // 801EA0C0
}

// fn_801EA0C4
void f_801EA0C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA0C4
  c->r[0]=c->lr; // 801EA0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA0D0
  c->r[31]=c->r[3]|c->r[3]; // 801EA0D4
  c->lr=0x801EA0DCu; f_801EB2B0(c); // 801EA0D8
  c->r[3]=c->r[31]|c->r[31]; // 801EA0DC
  c->lr=0x801EA0E4u; f_801EA52C(c); // 801EA0E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA0E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA0E8
  c->lr=c->r[0]; // 801EA0EC
  c->r[1]=c->r[1]+0x00000010u; // 801EA0F0
  return; // 801EA0F4
}

// fn_801EA0F8
void f_801EA0F8(Ctx* __restrict c) {
  return; // 801EA0F8
}

// fn_801EA0FC
void f_801EA0FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA0FC
  c->r[0]=c->lr; // 801EA100
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EA104
  c->r[11]=c->r[1]+0x00000030u; // 801EA108
  c->lr=0x801EA110u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA10C
  c->r[31]=c->r[3]|c->r[3]; // 801EA110
  c->r[4]=R32(c->r[3]+0x00002390u); // 801EA114
  c->r[0]=rotl(c->r[4],0)&0x00000004u; // 801EA118
  cmps(c,0,(int32_t)c->r[0],0); // 801EA11C
  if (crb(c,2)) { goto L_801EA2A8; } // 801EA120
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 801EA124
  cmps(c,0,(int32_t)c->r[0],0); // 801EA128
  if (crb(c,2)) { goto L_801EA174; } // 801EA12C
  c->r[25]=0u+0x00000000u; // 801EA130
  c->r[29]=c->r[3]+0x00000278u; // 801EA134
L_801EA138:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA138
  c->r[4]=0u+0x00000002u; // 801EA13C
  c->r[5]=0u+0x00000001u; // 801EA140
  c->lr=0x801EA148u; f_80052E14(c); // 801EA144
  c->r[29]=c->r[29]+0x00000518u; // 801EA148
  c->r[25]=c->r[25]+0x00000001u; // 801EA14C
  cmps(c,0,(int32_t)c->r[25],3); // 801EA150
  if (crb(c,0)) { IRQCHK(c); goto L_801EA138; } // 801EA154
  c->r[3]=c->r[31]+0x00000060u; // 801EA158
  c->r[4]=0u+0x00000001u; // 801EA15C
  c->lr=0x801EA164u; f_8004C674(c); // 801EA160
  c->r[0]=R32(c->r[31]+0x00002390u); // 801EA164
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801EA168
  W32(c->r[31]+0x00002390u,c->r[0]); // 801EA16C
  goto L_801EA1B4; // 801EA170
L_801EA174:;
  c->r[0]=rotl(c->r[4],0)&0x00000002u; // 801EA174
  cmps(c,0,(int32_t)c->r[0],0); // 801EA178
  if (crb(c,2)) { goto L_801EA1B4; } // 801EA17C
  c->r[27]=0u+0x00000000u; // 801EA180
  c->r[29]=c->r[3]+0x00000278u; // 801EA184
L_801EA188:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA188
  c->r[4]=0u+0x00000002u; // 801EA18C
  c->r[5]=0u+0x00000002u; // 801EA190
  c->lr=0x801EA198u; f_80052E14(c); // 801EA194
  c->r[29]=c->r[29]+0x00000518u; // 801EA198
  c->r[27]=c->r[27]+0x00000001u; // 801EA19C
  cmps(c,0,(int32_t)c->r[27],3); // 801EA1A0
  if (crb(c,0)) { IRQCHK(c); goto L_801EA188; } // 801EA1A4
  c->r[0]=R32(c->r[31]+0x00002390u); // 801EA1A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801EA1AC
  W32(c->r[31]+0x00002390u,c->r[0]); // 801EA1B0
L_801EA1B4:;
  c->r[27]=0u+0x00000000u; // 801EA1B4
  c->r[28]=c->r[31]+0x00000278u; // 801EA1B8
  c->r[30]=c->r[28]|c->r[28]; // 801EA1BC
L_801EA1C0:;
  c->r[3]=c->r[30]|c->r[30]; // 801EA1C0
  c->r[4]=0u+0x00000002u; // 801EA1C4
  c->lr=0x801EA1CCu; f_800531D8(c); // 801EA1C8
  cmps(c,0,(int32_t)c->r[3],1); // 801EA1CC
  if (crb(c,2)) { goto L_801EA1E8; } // 801EA1D0
  if (!crb(c,0)) { goto L_801EA1DC; } // 801EA1D4
  goto L_801EA298; // 801EA1D8
L_801EA1DC:;
  cmps(c,0,(int32_t)c->r[3],3); // 801EA1DC
  if (!crb(c,0)) { goto L_801EA298; } // 801EA1E0
  goto L_801EA244; // 801EA1E4
L_801EA1E8:;
  c->r[26]=0u+0x00000000u; // 801EA1E8
  c->r[25]=0u+0x00000000u; // 801EA1EC
  c->r[29]=c->r[28]|c->r[28]; // 801EA1F0
L_801EA1F4:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA1F4
  c->r[4]=0u+0x00000002u; // 801EA1F8
  c->lr=0x801EA200u; f_800532BC(c); // 801EA1FC
  cmps(c,0,(int32_t)c->r[3],0); // 801EA200
  if (crb(c,2)) { goto L_801EA21C; } // 801EA204
  c->r[3]=c->r[29]|c->r[29]; // 801EA208
  c->r[4]=0u+0x00000002u; // 801EA20C
  c->r[5]=0u+0x00000000u; // 801EA210
  c->lr=0x801EA218u; f_80052E14(c); // 801EA214
  c->r[25]=c->r[25]+0x00000001u; // 801EA218
L_801EA21C:;
  c->r[29]=c->r[29]+0x00000518u; // 801EA21C
  c->r[26]=c->r[26]+0x00000001u; // 801EA220
  cmps(c,0,(int32_t)c->r[26],3); // 801EA224
  if (crb(c,0)) { IRQCHK(c); goto L_801EA1F4; } // 801EA228
  cmps(c,0,(int32_t)c->r[25],3); // 801EA22C
  if (!crb(c,2)) { goto L_801EA298; } // 801EA230
  c->r[0]=R32(c->r[31]+0x00002390u); // 801EA234
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801EA238
  W32(c->r[31]+0x00002390u,c->r[0]); // 801EA23C
  goto L_801EA298; // 801EA240
L_801EA244:;
  c->r[26]=0u+0x00000000u; // 801EA244
  c->r[25]=0u+0x00000000u; // 801EA248
  c->r[29]=c->r[28]|c->r[28]; // 801EA24C
L_801EA250:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA250
  c->r[4]=0u+0x00000002u; // 801EA254
  c->lr=0x801EA25Cu; f_800532BC(c); // 801EA258
  cmps(c,0,(int32_t)c->r[3],0); // 801EA25C
  if (crb(c,2)) { goto L_801EA268; } // 801EA260
  c->r[25]=c->r[25]+0x00000001u; // 801EA264
L_801EA268:;
  c->r[29]=c->r[29]+0x00000518u; // 801EA268
  c->r[26]=c->r[26]+0x00000001u; // 801EA26C
  cmps(c,0,(int32_t)c->r[26],3); // 801EA270
  if (crb(c,0)) { IRQCHK(c); goto L_801EA250; } // 801EA274
  cmps(c,0,(int32_t)c->r[25],3); // 801EA278
  if (!crb(c,2)) { goto L_801EA298; } // 801EA27C
  c->r[3]=c->r[31]+0x00000060u; // 801EA280
  c->r[4]=0u+0x00000000u; // 801EA284
  c->lr=0x801EA28Cu; f_8004C674(c); // 801EA288
  c->r[0]=R32(c->r[31]+0x00002390u); // 801EA28C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF8u; // 801EA290
  W32(c->r[31]+0x00002390u,c->r[0]); // 801EA294
L_801EA298:;
  c->r[30]=c->r[30]+0x00000518u; // 801EA298
  c->r[27]=c->r[27]+0x00000001u; // 801EA29C
  cmps(c,0,(int32_t)c->r[27],3); // 801EA2A0
  if (crb(c,0)) { IRQCHK(c); goto L_801EA1C0; } // 801EA2A4
L_801EA2A8:;
  c->r[3]=c->r[31]+0x00000060u; // 801EA2A8
  c->lr=0x801EA2B0u; f_80056400(c); // 801EA2AC
  c->r[28]=0u+0x00000000u; // 801EA2B0
  c->r[31]=c->r[31]+0x00000278u; // 801EA2B4
L_801EA2B8:;
  c->r[3]=c->r[31]|c->r[31]; // 801EA2B8
  c->lr=0x801EA2C0u; f_800534EC(c); // 801EA2BC
  c->r[31]=c->r[31]+0x00000518u; // 801EA2C0
  c->r[28]=c->r[28]+0x00000001u; // 801EA2C4
  cmps(c,0,(int32_t)c->r[28],3); // 801EA2C8
  if (crb(c,0)) { IRQCHK(c); goto L_801EA2B8; } // 801EA2CC
  c->r[11]=c->r[1]+0x00000030u; // 801EA2D0
  c->lr=0x801EA2D8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA2D4
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EA2D8
  c->lr=c->r[0]; // 801EA2DC
  c->r[1]=c->r[1]+0x00000030u; // 801EA2E0
  return; // 801EA2E4
}

// fn_801EA2E8
void f_801EA2E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA2E8
  c->r[0]=c->lr; // 801EA2EC
  W32(c->r[1]+0x00000074u,c->r[0]); // 801EA2F0
  c->r[11]=c->r[1]+0x00000070u; // 801EA2F4
  c->lr=0x801EA2FCu; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA2F8
  c->r[31]=c->r[3]|c->r[3]; // 801EA2FC
  c->r[4]=0u+0x80430000u; // 801EA300
  c->r[5]=c->r[4]+0x00001660u; // 801EA304
  c->r[4]=R32(c->r[5]+0x00000000u); // 801EA308
  c->r[0]=R32(c->r[5]+0x00000004u); // 801EA30C
  W32(c->r[1]+0x00000008u,c->r[4]); // 801EA310
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EA314
  c->r[4]=R32(c->r[5]+0x00000008u); // 801EA318
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801EA31C
  W32(c->r[1]+0x00000010u,c->r[4]); // 801EA320
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA324
  c->r[4]=R32(c->r[5]+0x00000010u); // 801EA328
  c->r[0]=R32(c->r[5]+0x00000014u); // 801EA32C
  W32(c->r[1]+0x00000018u,c->r[4]); // 801EA330
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801EA334
  c->r[4]=R32(c->r[5]+0x00000018u); // 801EA338
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801EA33C
  W32(c->r[1]+0x00000020u,c->r[4]); // 801EA340
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EA344
  c->r[0]=R32(c->r[5]+0x00000020u); // 801EA348
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EA34C
  c->lr=0x801EA354u; f_80074EC4(c); // 801EA350
  c->r[20]=c->r[3]|c->r[3]; // 801EA354
  c->r[3]=c->r[31]+0x00000060u; // 801EA358
  c->r[4]=0u+0x00000010u; // 801EA35C
  c->r[5]=0u+0x00000000u; // 801EA360
  c->r[6]=0u+0x00000000u; // 801EA364
  c->r[7]=0u+0x00000000u; // 801EA368
  c->lr=0x801EA370u; f_80055B14(c); // 801EA36C
  c->r[3]=c->r[31]+0x00000060u; // 801EA370
  c->r[4]=0u+0x00000001u; // 801EA374
  c->lr=0x801EA37Cu; f_80055FEC(c); // 801EA378
  c->r[3]=c->r[31]+0x00000060u; // 801EA37C
  c->r[4]=0u+0x00000003u; // 801EA380
  c->lr=0x801EA388u; f_80055FDC(c); // 801EA384
  c->r[3]=c->r[31]+0x00000060u; // 801EA388
  c->r[4]=0u+0x00000000u; // 801EA38C
  c->lr=0x801EA394u; f_8004C674(c); // 801EA390
  c->r[3]=c->r[31]+0x00000130u; // 801EA394
  c->r[4]=0u+0x00000010u; // 801EA398
  c->r[5]=0u+0x00000000u; // 801EA39C
  c->r[6]=0u+0x00000000u; // 801EA3A0
  c->r[7]=0u+0x00000000u; // 801EA3A4
  c->lr=0x801EA3ACu; f_80055B14(c); // 801EA3A8
  c->r[3]=c->r[31]+0x00000130u; // 801EA3AC
  c->r[4]=0u+0x00000001u; // 801EA3B0
  c->lr=0x801EA3B8u; f_80055FEC(c); // 801EA3B4
  c->r[3]=c->r[31]+0x00000130u; // 801EA3B8
  c->r[4]=0u+0x00000003u; // 801EA3BC
  c->lr=0x801EA3C4u; f_80055FDC(c); // 801EA3C0
  c->r[3]=c->r[31]+0x00000130u; // 801EA3C4
  c->r[4]=0u+0x00000000u; // 801EA3C8
  c->lr=0x801EA3D0u; f_8004C674(c); // 801EA3CC
  c->lr=0x801EA3D4u; f_800484B8(c); // 801EA3D0
  c->r[4]=0u+0x00000002u; // 801EA3D4
  c->r[5]=0u+0x00000000u; // 801EA3D8
  c->lr=0x801EA3E0u; f_800488B0(c); // 801EA3DC
  c->r[30]=c->r[3]|c->r[3]; // 801EA3E0
  c->lr=0x801EA3E8u; f_80065C04(c); // 801EA3E4
  c->r[22]=0u+0x00000000u; // 801EA3E8
  c->r[28]=0u+0x00000000u; // 801EA3EC
  c->r[27]=c->r[31]|c->r[31]; // 801EA3F0
  c->r[26]=c->r[31]+0x0000020Cu; // 801EA3F4
  c->r[25]=c->r[31]+0x00000278u; // 801EA3F8
  c->r[24]=c->r[1]+0x00000008u; // 801EA3FC
  c->r[23]=c->r[31]+0x00000508u; // 801EA400
L_801EA404:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 801EA404
  c->r[21]=R32(c->r[3]+c->r[28]); // 801EA408
  c->lr=0x801EA410u; f_80056B5C(c); // 801EA40C
  c->r[19]=c->r[3]|c->r[3]; // 801EA410
  c->r[3]=c->r[20]|c->r[20]; // 801EA414
  c->lr=0x801EA41Cu; f_80056B54(c); // 801EA418
  c->r[3]=0u+0x0000000Cu; // 801EA41C
  c->lr=0x801EA424u; f_80047B64(c); // 801EA420
  c->r[29]=c->r[3]|c->r[3]; // 801EA424
  cmps(c,0,(int32_t)c->r[3],0); // 801EA428
  if (crb(c,2)) { goto L_801EA43C; } // 801EA42C
  c->r[4]=0u+0x00000000u; // 801EA430
  c->r[5]=c->r[21]|c->r[21]; // 801EA434
  c->lr=0x801EA43Cu; f_80054F34(c); // 801EA438
L_801EA43C:;
  W32(c->r[27]+0x00000200u,c->r[29]); // 801EA43C
  c->r[3]=c->r[19]|c->r[19]; // 801EA440
  c->lr=0x801EA448u; f_80056B54(c); // 801EA444
  c->r[3]=c->r[26]|c->r[26]; // 801EA448
  c->r[4]=R32(c->r[27]+0x00000200u); // 801EA44C
  c->r[5]=0u+0x00000001u; // 801EA450
  c->r[6]=c->r[20]|c->r[20]; // 801EA454
  c->lr=0x801EA45Cu; f_80051C40(c); // 801EA458
  c->r[3]=c->r[25]|c->r[25]; // 801EA45C
  c->r[4]=c->r[26]|c->r[26]; // 801EA460
  c->r[5]=0u+0x00000001u; // 801EA464
  c->r[6]=c->r[20]|c->r[20]; // 801EA468
  c->r[7]=0u+0x0000734Fu; // 801EA46C
  c->lr=0x801EA474u; f_80052C44(c); // 801EA470
  c->r[3]=c->r[25]|c->r[25]; // 801EA474
  c->r[4]=0u+0x00000001u; // 801EA478
  c->lr=0x801EA480u; f_800534E4(c); // 801EA47C
  c->r[3]=c->r[25]|c->r[25]; // 801EA480
  c->r[4]=0u+0x00000001u; // 801EA484
  c->lr=0x801EA48Cu; f_80053434(c); // 801EA488
  c->r[3]=c->r[25]|c->r[25]; // 801EA48C
  {uint32_t ea=c->r[24]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA490
  {uint32_t ea=c->r[24]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA494
  {uint32_t ea=c->r[24]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA498
  c->lr=0x801EA4A0u; f_80074EEC(c); // 801EA49C
  c->r[3]=c->r[25]|c->r[25]; // 801EA4A0
  c->r[4]=0u+0x00000000u; // 801EA4A4
  c->r[5]=0u+0x00000000u; // 801EA4A8
  c->r[6]=0u+0x00000000u; // 801EA4AC
  c->lr=0x801EA4B4u; f_8005302C(c); // 801EA4B0
  c->r[3]=c->r[31]+0x00000060u; // 801EA4B4
  c->r[4]=c->r[23]|c->r[23]; // 801EA4B8
  c->lr=0x801EA4C0u; f_800560B0(c); // 801EA4BC
  c->r[28]=c->r[28]+0x00000004u; // 801EA4C0
  c->r[27]=c->r[27]+0x00000004u; // 801EA4C4
  c->r[26]=c->r[26]+0x00000024u; // 801EA4C8
  c->r[25]=c->r[25]+0x00000518u; // 801EA4CC
  c->r[24]=c->r[24]+0x0000000Cu; // 801EA4D0
  c->r[23]=c->r[23]+0x00000518u; // 801EA4D4
  c->r[22]=c->r[22]+0x00000001u; // 801EA4D8
  cmps(c,0,(int32_t)c->r[22],3); // 801EA4DC
  if (crb(c,0)) { IRQCHK(c); goto L_801EA404; } // 801EA4E0
  c->r[3]=c->r[31]|c->r[31]; // 801EA4E4
  c->r[4]=0u+0x00000000u; // 801EA4E8
  c->lr=0x801EA4F0u; f_801EA574(c); // 801EA4EC
  c->r[3]=c->r[31]|c->r[31]; // 801EA4F0
  c->lr=0x801EA4F8u; f_801E9BC4(c); // 801EA4F4
  c->r[3]=c->r[31]|c->r[31]; // 801EA4F8
  c->r[4]=0u+0x00000001u; // 801EA4FC
  c->lr=0x801EA504u; f_801EB5F4(c); // 801EA500
  c->r[11]=c->r[1]+0x00000070u; // 801EA504
  c->lr=0x801EA50Cu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EA508
  c->r[0]=R32(c->r[1]+0x00000074u); // 801EA50C
  c->lr=c->r[0]; // 801EA510
  c->r[1]=c->r[1]+0x00000070u; // 801EA514
  return; // 801EA518
}

// fn_801EA51C
void f_801EA51C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000004u; // 801EA51C
  f_801EB5F4(c); return; // 801EA520
}

// fn_801EA524
void f_801EA524(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801EA524
  f_801EB5F4(c); return; // 801EA528
}

// fn_801EA52C
void f_801EA52C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA52C
  c->r[0]=c->lr; // 801EA530
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EA534
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EA538
  c->r[31]=c->r[3]|c->r[3]; // 801EA53C
  c->r[0]=R32(c->r[3]+0x00002398u); // 801EA540
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801EA544
  c->r[4]=0u+0x80430000u; // 801EA548
  c->r[0]=c->r[4]+0x00001558u; // 801EA54C
  c->r[12]=c->r[0]+c->r[5]; // 801EA550
  c->lr=0x801EA558u; f_802F09D0(c); // 801EA554
  c->r[0]=c->r[0]|0x00000000u; // 801EA558
  c->r[3]=R32(c->r[31]+0x00002398u); // 801EA55C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EA560
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EA564
  c->lr=c->r[0]; // 801EA568
  c->r[1]=c->r[1]+0x00000010u; // 801EA56C
  return; // 801EA570
}

// fn_801EA574
void f_801EA574(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801EA574
  if (crb(c,2)) { goto L_801EA58C; } // 801EA578
  c->r[0]=R32(c->r[3]+0x00002390u); // 801EA57C
  c->r[0]=c->r[0]|0x00000008u; // 801EA580
  W32(c->r[3]+0x00002390u,c->r[0]); // 801EA584
  return; // 801EA588
L_801EA58C:;
  c->r[0]=R32(c->r[3]+0x00002390u); // 801EA58C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801EA590
  W32(c->r[3]+0x00002390u,c->r[0]); // 801EA594
  return; // 801EA598
}

// fn_801EA59C
void f_801EA59C(Ctx* __restrict c) {
  return; // 801EA59C
}

// fn_801EA5A0
void f_801EA5A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EA5A0
  c->r[0]=c->lr; // 801EA5A4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801EA5A8
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 801EA5AC
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 801EA5B0
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 801EA5B4
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 801EA5B8
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 801EA5BC
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 801EA5C0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 801EA5C4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 801EA5C8
  c->r[11]=c->r[1]+0x00000060u; // 801EA5CC
  c->lr=0x801EA5D4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EA5D0
  c->r[31]=c->r[3]|c->r[3]; // 801EA5D4
  c->r[4]=R32(c->r[3]+0x0000239Cu); // 801EA5D8
  c->r[0]=rotl(c->r[4],0)&0x00000010u; // 801EA5DC
  cmps(c,0,(int32_t)c->r[0],0); // 801EA5E0
  if (crb(c,2)) { goto L_801EABF8; } // 801EA5E4
  c->r[0]=rotl(c->r[4],0)&0x00000004u; // 801EA5E8
  cmps(c,0,(int32_t)c->r[0],0); // 801EA5EC
  if (crb(c,2)) { goto L_801EABEC; } // 801EA5F0
  c->r[0]=c->r[4]&0x00000102u; cr0(c,c->r[0]); // 801EA5F4
  cmps(c,0,(int32_t)c->r[0],2); // 801EA5F8
  if (!crb(c,2)) { goto L_801EA640; } // 801EA5FC
  c->r[26]=0u+0x00000000u; // 801EA600
  c->r[29]=c->r[3]+0x00001244u; // 801EA604
L_801EA608:;
  c->r[3]=c->r[29]|c->r[29]; // 801EA608
  c->r[4]=0u+0x00000002u; // 801EA60C
  c->r[5]=0u+0x00000000u; // 801EA610
  c->r[6]=0u+0x00000000u; // 801EA614
  c->lr=0x801EA61Cu; f_8005302C(c); // 801EA618
  c->r[29]=c->r[29]+0x00000518u; // 801EA61C
  c->r[26]=c->r[26]+0x00000001u; // 801EA620
  cmps(c,0,(int32_t)c->r[26],3); // 801EA624
  if (crb(c,0)) { IRQCHK(c); goto L_801EA608; } // 801EA628
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EA62C
  c->r[0]=c->r[0]|0x00000100u; // 801EA630
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EA634
  {uint32_t ea=c->r[2]+0xFFFF9474u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA638
  {uint32_t ea=c->r[31]+0x000023B0u; WF32(ea,c->f[0]);} // 801EA63C
L_801EA640:;
  c->r[3]=c->r[31]+0x00001C74u; // 801EA640
  c->r[4]=0u+0x00000002u; // 801EA644
  c->lr=0x801EA64Cu; f_800531D8(c); // 801EA648
  cmps(c,0,(int32_t)c->r[3],0); // 801EA64C
  if (crb(c,2)) { goto L_801EA65C; } // 801EA650
  if (crb(c,0)) { goto L_801EA670; } // 801EA654
  goto L_801EA670; // 801EA658
L_801EA65C:;
  c->r[3]=0u+0x00000001u; // 801EA65C
  c->lr=0x801EA664u; f_8005D714(c); // 801EA660
  {uint32_t ea=c->r[31]+0x000023B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA664
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EA668
  {uint32_t ea=c->r[31]+0x000023B0u; WF32(ea,c->f[0]);} // 801EA66C
L_801EA670:;
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EA670
  c->r[0]=rotl(c->r[0],0)&0x00008000u; // 801EA674
  cmps(c,0,(int32_t)c->r[0],0); // 801EA678
  if (!crb(c,2)) { goto L_801EA6D4; } // 801EA67C
  {uint32_t ea=c->r[31]+0x000023B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA680
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA684
  fcmp(c,0,c->f[1],c->f[0]); // 801EA688
  if (!crb(c,0)) { goto L_801EA6D4; } // 801EA68C
  c->r[3]=c->r[31]+0x000024C0u; // 801EA690
  {uint32_t ea=c->r[31]+0x000024E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA694
  c->lr=0x801EA69Cu; f_8005BB50(c); // 801EA698
  c->r[3]=c->r[31]+0x000024C0u; // 801EA69C
  c->lr=0x801EA6A4u; f_8005BB58(c); // 801EA6A0
  c->r[3]=c->r[31]+0x000024C0u; // 801EA6A4
  c->r[4]=R32(c->r[31]+0x000024D0u); // 801EA6A8
  c->r[5]=0u+0x00000000u; // 801EA6AC
  c->lr=0x801EA6B4u; f_801EB5AC(c); // 801EA6B0
  c->r[3]=c->r[31]+0x000024C0u; // 801EA6B4
  c->r[4]=0u+0x00000001u; // 801EA6B8
  c->lr=0x801EA6C0u; f_8005BBF0(c); // 801EA6BC
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EA6C0
  c->r[0]=c->r[0]|0x00008000u; // 801EA6C4
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EA6C8
  c->r[3]=c->r[31]|c->r[31]; // 801EA6CC
  c->lr=0x801EA6D4u; f_801EA02C(c); // 801EA6D0
L_801EA6D4:;
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EA6D4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 801EA6D8
  cmps(c,0,(int32_t)c->r[0],0); // 801EA6DC
  if (crb(c,2)) { goto L_801EAAAC; } // 801EA6E0
  c->r[3]=c->r[1]+0x00000024u; // 801EA6E4
  c->r[4]=0u+0x00000000u; // 801EA6E8
  c->r[5]=0u+0x000000FFu; // 801EA6EC
  c->r[6]=0u+0x00000000u; // 801EA6F0
  c->r[7]=0u+0x00000000u; // 801EA6F4
  c->lr=0x801EA6FCu; f_8004E248(c); // 801EA6F8
  c->r[3]=c->r[1]+0x00000020u; // 801EA6FC
  c->r[4]=0u+0x000000FFu; // 801EA700
  c->r[5]=0u+0x000000FFu; // 801EA704
  c->r[6]=0u+0x000000FFu; // 801EA708
  c->r[7]=0u+0x00000000u; // 801EA70C
  c->lr=0x801EA714u; f_8004E248(c); // 801EA710
  c->r[3]=c->r[1]+0x00000030u; // 801EA714
  c->lr=0x801EA71Cu; f_8004B0A4(c); // 801EA718
  c->r[3]=c->r[1]+0x00000028u; // 801EA71C
  {uint32_t ea=c->r[2]+0xFFFF9478u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA720
  c->f[2]=c->f[1]; // 801EA724
  c->lr=0x801EA72Cu; f_8004E35C(c); // 801EA728
  c->r[3]=c->r[1]+0x00000030u; // 801EA72C
  c->r[4]=c->r[31]+0x000024B4u; // 801EA730
  c->lr=0x801EA738u; f_8004A65C(c); // 801EA734
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EA738
  c->r[0]=rotl(c->r[0],0)&0x00004000u; // 801EA73C
  cmps(c,0,(int32_t)c->r[0],0); // 801EA740
  if (crb(c,2)) { goto L_801EAA94; } // 801EA744
  c->r[3]=c->r[31]+0x000024C0u; // 801EA748
  c->lr=0x801EA750u; f_801EB5A4(c); // 801EA74C
  c->r[29]=c->r[3]|c->r[3]; // 801EA750
  c->r[3]=c->r[31]+0x000024C0u; // 801EA754
  c->r[4]=0u+0x00000000u; // 801EA758
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA75C
  c->lr=0x801EA764u; f_8005BF2C(c); // 801EA760
  c->r[3]=0u+0x00000001u; // 801EA764
  c->lr=0x801EA76Cu; f_8005D714(c); // 801EA768
  c->r[3]=c->r[31]+0x000024C0u; // 801EA76C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801EA770
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801EA774
  c->ctr=c->r[12]; // 801EA778
  if (true) { c->lr=0x801EA780u; dispatch(c,c->ctr); } // 801EA77C
  c->r[3]=0u+0x55550000u; // 801EA780
  c->r[0]=c->r[3]+0x00005556u; // 801EA784
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[29])>>32); // 801EA788
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 801EA78C
  c->r[0]=c->r[3]+c->r[0]; // 801EA790
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801EA794
  W8(c->r[1]+0x00000027u,c->r[0]); // 801EA798
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801EA79C
  W8(c->r[1]+0x00000023u,c->r[0]); // 801EA7A0
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EA7A4
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 801EA7A8
  cmps(c,0,(int32_t)c->r[0],0); // 801EA7AC
  if (crb(c,2)) { goto L_801EA8E0; } // 801EA7B0
  c->r[29]=0u+0x804C0000u; // 801EA7B4
  c->r[3]=c->r[29]+0x00002650u; // 801EA7B8
  c->r[4]=c->r[31]+0x000023B4u; // 801EA7BC
  c->lr=0x801EA7C4u; f_802E9548(c); // 801EA7C0
  c->r[25]=c->r[29]+0x00002650u; // 801EA7C4
  c->r[26]=0u+0x00000000u; // 801EA7C8
  {uint32_t ea=c->r[2]+0xFFFF947Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 801EA7CC
  c->r[30]=0u+0x00000000u; // 801EA7D0
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[31]=c->ps1[31]=RF32(ea);} // 801EA7D4
L_801EA7D8:;
  c->r[3]=c->r[25]|c->r[25]; // 801EA7D8
  c->r[4]=0u+0x0000000Au; // 801EA7DC
  c->lr=0x801EA7E4u; f_800C2CF8(c); // 801EA7E0
  c->r[29]=c->r[3]|c->r[3]; // 801EA7E4
  cmps(c,0,(int32_t)c->r[3],0); // 801EA7E8
  if (crb(c,2)) { goto L_801EA7F4; } // 801EA7EC
  W8(c->r[3]+0x00000000u,c->r[30]); // 801EA7F0
L_801EA7F4:;
  c->r[3]=c->r[25]|c->r[25]; // 801EA7F4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA7F8
  c->r[4]=0u+0x00000003u; // 801EA7FC
  c->lr=0x801EA804u; f_800616C8(c); // 801EA800
  c->f[29]=c->f[1]; // 801EA804
  c->r[3]=c->r[25]|c->r[25]; // 801EA808
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA80C
  c->r[4]=0u+0x00000003u; // 801EA810
  c->lr=0x801EA818u; f_80061720(c); // 801EA814
  c->f[30]=c->f[1]; // 801EA818
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[29]); // 801EA81C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA820
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 801EA824
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801EA828
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 801EA82C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA830
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EA834
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801EA838
  c->r[3]=c->r[31]+0x000024E4u; // 801EA83C
  c->r[4]=0u+0x00000003u; // 801EA840
  c->r[5]=0u+0x00000006u; // 801EA844
  c->lr=0x801EA84Cu; f_8023C250(c); // 801EA848
  c->r[3]=c->r[1]+0x0000001Cu; // 801EA84C
  c->r[4]=c->r[1]+0x00000020u; // 801EA850
  c->lr=0x801EA858u; f_800549FC(c); // 801EA854
  c->r[3]=c->r[31]+0x000024E4u; // 801EA858
  c->r[4]=c->r[1]+0x0000001Cu; // 801EA85C
  c->r[5]=c->r[26]|c->r[26]; // 801EA860
  c->lr=0x801EA868u; f_8023C198(c); // 801EA864
  c->r[3]=c->r[1]+0x0000001Cu; // 801EA868
  c->r[4]=0u+0xFFFFFFFFu; // 801EA86C
  c->lr=0x801EA874u; f_80047BD4(c); // 801EA870
  c->r[3]=c->r[31]+0x000024E4u; // 801EA874
  c->r[4]=c->r[1]+0x00000030u; // 801EA878
  c->r[5]=c->r[26]|c->r[26]; // 801EA87C
  c->lr=0x801EA884u; f_8023C104(c); // 801EA880
  c->r[3]=c->r[31]+0x000024E4u; // 801EA884
  c->r[4]=c->r[1]+0x00000028u; // 801EA888
  c->r[5]=c->r[26]|c->r[26]; // 801EA88C
  c->lr=0x801EA894u; f_8023C3B4(c); // 801EA890
  c->r[3]=c->r[31]+0x000024E4u; // 801EA894
  c->r[4]=c->r[25]|c->r[25]; // 801EA898
  c->r[5]=c->r[26]|c->r[26]; // 801EA89C
  c->lr=0x801EA8A4u; f_8023C01C(c); // 801EA8A0
  c->r[3]=c->r[31]+0x000024E4u; // 801EA8A4
  c->r[4]=c->r[26]|c->r[26]; // 801EA8A8
  c->lr=0x801EA8B0u; f_8023BF08(c); // 801EA8AC
  cmps(c,0,(int32_t)c->r[29],0); // 801EA8B0
  if (crb(c,2)) { goto L_801EAA94; } // 801EA8B4
  {uint32_t ea=c->r[31]+0x000024B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA8B8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801EA8BC
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[28]); // 801EA8C0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA8C4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801EA8C8
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801EA8CC
  c->r[25]=c->r[29]+0x00000001u; // 801EA8D0
  c->r[26]=c->r[26]+0x00000001u; // 801EA8D4
  if (!crb(c,2)) { IRQCHK(c); goto L_801EA7D8; } // 801EA8D8
  goto L_801EAA94; // 801EA8DC
L_801EA8E0:;
  c->r[3]=c->r[31]+0x000023B4u; // 801EA8E0
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA8E4
  c->r[4]=0u+0x00000003u; // 801EA8E8
  c->lr=0x801EA8F0u; f_800616C8(c); // 801EA8EC
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA8F0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801EA8F4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA8F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801EA8FC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 801EA900
  c->r[3]=c->r[31]+0x000023B4u; // 801EA904
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA908
  c->r[4]=0u+0x00000003u; // 801EA90C
  c->lr=0x801EA914u; f_80061720(c); // 801EA910
  {uint32_t ea=c->r[2]+0xFFFF9484u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA914
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801EA918
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA91C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 801EA920
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801EA924
  c->r[3]=c->r[1]+0x00000018u; // 801EA928
  c->r[4]=c->r[1]+0x00000024u; // 801EA92C
  c->lr=0x801EA934u; f_800549FC(c); // 801EA930
  c->r[3]=c->r[31]+0x000023B4u; // 801EA934
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA938
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA93C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801EA940
  {uint32_t ea=c->r[2]+0xFFFF948Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA944
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA948
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801EA94C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA950
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EA954
  c->f[5]=c->f[4]; // 801EA958
  c->r[4]=c->r[1]+0x00000018u; // 801EA95C
  c->r[5]=0u+0x00000003u; // 801EA960
  c->lr=0x801EA968u; f_8006156C(c); // 801EA964
  c->r[3]=c->r[1]+0x00000018u; // 801EA968
  c->r[4]=0u+0xFFFFFFFFu; // 801EA96C
  c->lr=0x801EA974u; f_80047BD4(c); // 801EA970
  c->r[3]=c->r[1]+0x00000014u; // 801EA974
  c->r[4]=c->r[1]+0x00000024u; // 801EA978
  c->lr=0x801EA980u; f_800549FC(c); // 801EA97C
  c->r[3]=c->r[31]+0x000023B4u; // 801EA980
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA984
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA988
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801EA98C
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA990
  {uint32_t ea=c->r[2]+0xFFFF948Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA994
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801EA998
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA99C
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EA9A0
  c->f[5]=c->f[4]; // 801EA9A4
  c->r[4]=c->r[1]+0x00000014u; // 801EA9A8
  c->r[5]=0u+0x00000003u; // 801EA9AC
  c->lr=0x801EA9B4u; f_8006156C(c); // 801EA9B0
  c->r[3]=c->r[1]+0x00000014u; // 801EA9B4
  c->r[4]=0u+0xFFFFFFFFu; // 801EA9B8
  c->lr=0x801EA9C0u; f_80047BD4(c); // 801EA9BC
  c->r[3]=c->r[1]+0x00000010u; // 801EA9C0
  c->r[4]=c->r[1]+0x00000024u; // 801EA9C4
  c->lr=0x801EA9CCu; f_800549FC(c); // 801EA9C8
  c->r[3]=c->r[31]+0x000023B4u; // 801EA9CC
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EA9D0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA9D4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801EA9D8
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EA9DC
  {uint32_t ea=c->r[2]+0xFFFF948Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EA9E0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 801EA9E4
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EA9E8
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EA9EC
  c->f[5]=c->f[4]; // 801EA9F0
  c->r[4]=c->r[1]+0x00000010u; // 801EA9F4
  c->r[5]=0u+0x00000003u; // 801EA9F8
  c->lr=0x801EAA00u; f_8006156C(c); // 801EA9FC
  c->r[3]=c->r[1]+0x00000010u; // 801EAA00
  c->r[4]=0u+0xFFFFFFFFu; // 801EAA04
  c->lr=0x801EAA0Cu; f_80047BD4(c); // 801EAA08
  c->r[3]=c->r[1]+0x0000000Cu; // 801EAA0C
  c->r[4]=c->r[1]+0x00000024u; // 801EAA10
  c->lr=0x801EAA18u; f_800549FC(c); // 801EAA14
  c->r[3]=c->r[31]+0x000023B4u; // 801EAA18
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAA1C
  {uint32_t ea=c->r[2]+0xFFFF9488u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EAA20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801EAA24
  {uint32_t ea=c->r[2]+0xFFFF948Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801EAA28
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EAA2C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801EAA30
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EAA34
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EAA38
  c->f[5]=c->f[4]; // 801EAA3C
  c->r[4]=c->r[1]+0x0000000Cu; // 801EAA40
  c->r[5]=0u+0x00000003u; // 801EAA44
  c->lr=0x801EAA4Cu; f_8006156C(c); // 801EAA48
  c->r[3]=c->r[1]+0x0000000Cu; // 801EAA4C
  c->r[4]=0u+0xFFFFFFFFu; // 801EAA50
  c->lr=0x801EAA58u; f_80047BD4(c); // 801EAA54
  c->r[3]=c->r[1]+0x00000008u; // 801EAA58
  c->r[4]=c->r[1]+0x00000020u; // 801EAA5C
  c->lr=0x801EAA64u; f_800549FC(c); // 801EAA60
  c->r[3]=c->r[31]+0x000023B4u; // 801EAA64
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EAA68
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EAA6C
  {uint32_t ea=c->r[2]+0xFFFF9464u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EAA70
  {uint32_t ea=c->r[2]+0xFFFF9480u; c->f[4]=c->ps1[4]=RF32(ea);} // 801EAA74
  c->f[5]=c->f[4]; // 801EAA78
  c->r[4]=c->r[1]+0x00000008u; // 801EAA7C
  c->r[5]=0u+0x00000003u; // 801EAA80
  c->lr=0x801EAA88u; f_8006156C(c); // 801EAA84
  c->r[3]=c->r[1]+0x00000008u; // 801EAA88
  c->r[4]=0u+0xFFFFFFFFu; // 801EAA8C
  c->lr=0x801EAA94u; f_80047BD4(c); // 801EAA90
L_801EAA94:;
  c->r[3]=c->r[1]+0x00000020u; // 801EAA94
  c->r[4]=0u+0xFFFFFFFFu; // 801EAA98
  c->lr=0x801EAAA0u; f_80047BD4(c); // 801EAA9C
  c->r[3]=c->r[1]+0x00000024u; // 801EAAA0
  c->r[4]=0u+0xFFFFFFFFu; // 801EAAA4
  c->lr=0x801EAAACu; f_80047BD4(c); // 801EAAA8
L_801EAAAC:;
  c->r[27]=0u+0x00000000u; // 801EAAAC
  c->r[28]=c->r[31]+0x00001244u; // 801EAAB0
  c->r[29]=c->r[28]|c->r[28]; // 801EAAB4
L_801EAAB8:;
  c->r[3]=c->r[29]|c->r[29]; // 801EAAB8
  c->r[4]=0u+0x00000002u; // 801EAABC
  c->lr=0x801EAAC4u; f_800531D8(c); // 801EAAC0
  cmps(c,0,(int32_t)c->r[3],2); // 801EAAC4
  if (crb(c,2)) { goto L_801EAB2C; } // 801EAAC8
  if (!crb(c,0)) { goto L_801EAAE0; } // 801EAACC
  cmps(c,0,(int32_t)c->r[3],0); // 801EAAD0
  if (crb(c,2)) { goto L_801EABB4; } // 801EAAD4
  if (!crb(c,0)) { goto L_801EAAE8; } // 801EAAD8
  goto L_801EABB4; // 801EAADC
L_801EAAE0:;
  cmps(c,0,(int32_t)c->r[3],4); // 801EAAE0
  if (!crb(c,0)) { goto L_801EABB4; } // 801EAAE4
L_801EAAE8:;
  c->r[25]=0u+0x00000000u; // 801EAAE8
  c->r[30]=c->r[28]|c->r[28]; // 801EAAEC
L_801EAAF0:;
  c->r[3]=c->r[30]|c->r[30]; // 801EAAF0
  c->r[4]=0u+0x00000002u; // 801EAAF4
  c->lr=0x801EAAFCu; f_800532BC(c); // 801EAAF8
  cmps(c,0,(int32_t)c->r[3],0); // 801EAAFC
  if (crb(c,2)) { goto L_801EAB18; } // 801EAB00
  c->r[3]=c->r[30]|c->r[30]; // 801EAB04
  c->r[4]=0u+0x00000000u; // 801EAB08
  c->r[5]=0u+0x00000000u; // 801EAB0C
  c->r[6]=0u+0x00000000u; // 801EAB10
  c->lr=0x801EAB18u; f_8005302C(c); // 801EAB14
L_801EAB18:;
  c->r[30]=c->r[30]+0x00000518u; // 801EAB18
  c->r[25]=c->r[25]+0x00000001u; // 801EAB1C
  cmps(c,0,(int32_t)c->r[25],3); // 801EAB20
  if (crb(c,0)) { IRQCHK(c); goto L_801EAAF0; } // 801EAB24
  goto L_801EABB4; // 801EAB28
L_801EAB2C:;
  c->r[26]=0u+0x00000000u; // 801EAB2C
  c->r[25]=0u+0x00000000u; // 801EAB30
  c->r[30]=c->r[28]|c->r[28]; // 801EAB34
L_801EAB38:;
  c->r[3]=c->r[30]|c->r[30]; // 801EAB38
  c->r[4]=0u+0x00000002u; // 801EAB3C
  c->lr=0x801EAB44u; f_800532BC(c); // 801EAB40
  cmps(c,0,(int32_t)c->r[3],0); // 801EAB44
  if (crb(c,2)) { goto L_801EAB50; } // 801EAB48
  c->r[25]=c->r[25]+0x00000001u; // 801EAB4C
L_801EAB50:;
  c->r[30]=c->r[30]+0x00000518u; // 801EAB50
  c->r[26]=c->r[26]+0x00000001u; // 801EAB54
  cmps(c,0,(int32_t)c->r[26],3); // 801EAB58
  if (crb(c,0)) { IRQCHK(c); goto L_801EAB38; } // 801EAB5C
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EAB60
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 801EAB64
  cmps(c,0,(int32_t)c->r[0],0); // 801EAB68
  if (crb(c,2)) { goto L_801EAB94; } // 801EAB6C
  cmps(c,0,(int32_t)c->r[25],1); // 801EAB70
  if (!crb(c,2)) { goto L_801EABB4; } // 801EAB74
  c->r[3]=c->r[31]+0x00000130u; // 801EAB78
  c->r[4]=0u+0x00000000u; // 801EAB7C
  c->lr=0x801EAB84u; f_8004C674(c); // 801EAB80
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EAB84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801EAB88
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EAB8C
  goto L_801EABB4; // 801EAB90
L_801EAB94:;
  cmps(c,0,(int32_t)c->r[25],3); // 801EAB94
  if (!crb(c,2)) { goto L_801EABB4; } // 801EAB98
  c->r[3]=c->r[31]+0x00000130u; // 801EAB9C
  c->r[4]=0u+0x00000000u; // 801EABA0
  c->lr=0x801EABA8u; f_8004C674(c); // 801EABA4
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EABA8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801EABAC
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EABB0
L_801EABB4:;
  c->r[29]=c->r[29]+0x00000518u; // 801EABB4
  c->r[27]=c->r[27]+0x00000001u; // 801EABB8
  cmps(c,0,(int32_t)c->r[27],3); // 801EABBC
  if (crb(c,0)) { IRQCHK(c); goto L_801EAAB8; } // 801EABC0
  c->r[3]=c->r[31]+0x00000130u; // 801EABC4
  c->lr=0x801EABCCu; f_80056400(c); // 801EABC8
  c->r[29]=0u+0x00000000u; // 801EABCC
L_801EABD0:;
  c->r[3]=c->r[28]|c->r[28]; // 801EABD0
  c->lr=0x801EABD8u; f_800534EC(c); // 801EABD4
  c->r[28]=c->r[28]+0x00000518u; // 801EABD8
  c->r[29]=c->r[29]+0x00000001u; // 801EABDC
  cmps(c,0,(int32_t)c->r[29],3); // 801EABE0
  if (crb(c,0)) { IRQCHK(c); goto L_801EABD0; } // 801EABE4
  goto L_801EAC0C; // 801EABE8
L_801EABEC:;
  c->r[4]=0u+0x00000007u; // 801EABEC
  c->lr=0x801EABF4u; f_801EB5FC(c); // 801EABF0
  goto L_801EAC0C; // 801EABF4
L_801EABF8:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 801EABF8
  cmps(c,0,(int32_t)c->r[0],0); // 801EABFC
  if (crb(c,2)) { goto L_801EAC0C; } // 801EAC00
  c->r[4]=0u+0x00000002u; // 801EAC04
  c->lr=0x801EAC0Cu; f_801EB5FC(c); // 801EAC08
L_801EAC0C:;
  c->r[0]=0u+0x00000098u; // 801EAC0C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EAC10
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 801EAC14
  c->r[0]=0u+0x00000088u; // 801EAC18
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801EAC1C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 801EAC20
  c->r[0]=0u+0x00000078u; // 801EAC24
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801EAC28
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 801EAC2C
  c->r[0]=0u+0x00000068u; // 801EAC30
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 801EAC34
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 801EAC38
  c->r[11]=c->r[1]+0x00000060u; // 801EAC3C
  c->lr=0x801EAC44u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EAC40
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801EAC44
  c->lr=c->r[0]; // 801EAC48
  c->r[1]=c->r[1]+0x000000A0u; // 801EAC4C
  return; // 801EAC50
}

// fn_801EAC54
void f_801EAC54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAC54
  c->r[0]=c->lr; // 801EAC58
  W32(c->r[1]+0x00000064u,c->r[0]); // 801EAC5C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801EAC60
  W32(c->r[1]+0x00000058u,c->r[30]); // 801EAC64
  W32(c->r[1]+0x00000054u,c->r[29]); // 801EAC68
  c->r[29]=c->r[3]|c->r[3]; // 801EAC6C
  c->r[3]=c->r[1]+0x00000008u; // 801EAC70
  c->r[30]=0u+0x80470000u; // 801EAC74
  c->r[4]=c->r[30]+0x00004848u; // 801EAC78
  c->r[5]=c->r[13]+0xFFFF9DD8u; // 801EAC7C
  c->r[31]=0u+0x80470000u; // 801EAC80
  c->r[6]=c->r[31]+0x0000485Cu; // 801EAC84
  c->r[7]=R32(c->r[29]+0x000023ACu); // 801EAC88
  c->r[8]=0u+0x00000000u; // 801EAC8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAC90
  c->lr=0x801EAC98u; f_802E7CC4(c); // 801EAC94
  c->r[3]=0u+0x00000000u; // 801EAC98
  c->r[4]=c->r[1]+0x00000008u; // 801EAC9C
  c->lr=0x801EACA4u; f_800602CC(c); // 801EACA0
  c->r[4]=c->r[3]|c->r[3]; // 801EACA4
  c->r[3]=c->r[29]+0x0000218Cu; // 801EACA8
  c->lr=0x801EACB0u; f_80060534(c); // 801EACAC
  c->r[3]=c->r[1]+0x00000008u; // 801EACB0
  c->r[4]=c->r[30]+0x00004848u; // 801EACB4
  c->r[5]=c->r[13]+0xFFFF9DD8u; // 801EACB8
  c->r[6]=c->r[31]+0x0000485Cu; // 801EACBC
  c->r[7]=R32(c->r[29]+0x000023ACu); // 801EACC0
  c->r[8]=0u+0x00000001u; // 801EACC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EACC8
  c->lr=0x801EACD0u; f_802E7CC4(c); // 801EACCC
  c->r[3]=0u+0x00000000u; // 801EACD0
  c->r[4]=c->r[1]+0x00000008u; // 801EACD4
  c->lr=0x801EACDCu; f_800602CC(c); // 801EACD8
  c->r[4]=c->r[3]|c->r[3]; // 801EACDC
  c->r[3]=c->r[29]+0x00002238u; // 801EACE0
  c->lr=0x801EACE8u; f_80060534(c); // 801EACE4
  c->r[3]=c->r[1]+0x00000008u; // 801EACE8
  c->r[4]=0u+0x80470000u; // 801EACEC
  c->r[4]=c->r[4]+0x00004868u; // 801EACF0
  c->r[5]=c->r[13]+0xFFFF9DD8u; // 801EACF4
  c->r[6]=0u+0x80470000u; // 801EACF8
  c->r[6]=c->r[6]+0x0000487Cu; // 801EACFC
  c->r[7]=R32(c->r[29]+0x000023A8u); // 801EAD00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801EAD04
  c->lr=0x801EAD0Cu; f_802E7CC4(c); // 801EAD08
  c->r[3]=0u+0x00000000u; // 801EAD0C
  c->r[4]=c->r[1]+0x00000008u; // 801EAD10
  c->lr=0x801EAD18u; f_800602CC(c); // 801EAD14
  c->r[4]=c->r[3]|c->r[3]; // 801EAD18
  c->r[3]=c->r[29]+0x000022E4u; // 801EAD1C
  c->lr=0x801EAD24u; f_80060534(c); // 801EAD20
  c->r[3]=c->r[29]|c->r[29]; // 801EAD24
  c->r[4]=0u+0x00000003u; // 801EAD28
  c->lr=0x801EAD30u; f_801EB5FC(c); // 801EAD2C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801EAD30
  c->r[30]=R32(c->r[1]+0x00000058u); // 801EAD34
  c->r[29]=R32(c->r[1]+0x00000054u); // 801EAD38
  c->r[0]=R32(c->r[1]+0x00000064u); // 801EAD3C
  c->lr=c->r[0]; // 801EAD40
  c->r[1]=c->r[1]+0x00000060u; // 801EAD44
  return; // 801EAD48
}

// fn_801EAD4C
void f_801EAD4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAD4C
  c->r[0]=c->lr; // 801EAD50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EAD54
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EAD58
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EAD5C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EAD60
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EAD64
  c->r[28]=c->r[3]|c->r[3]; // 801EAD68
  c->r[29]=0u+0x00000000u; // 801EAD6C
  c->r[30]=0u+0x00000000u; // 801EAD70
  c->r[31]=c->r[3]+0x0000218Cu; // 801EAD74
L_801EAD78:;
  c->r[3]=c->r[31]|c->r[31]; // 801EAD78
  c->lr=0x801EAD80u; f_80060594(c); // 801EAD7C
  cmps(c,0,(int32_t)c->r[3],0); // 801EAD80
  if (crb(c,2)) { goto L_801EAD8C; } // 801EAD84
  c->r[29]=c->r[29]+0x00000001u; // 801EAD88
L_801EAD8C:;
  c->r[31]=c->r[31]+0x000000ACu; // 801EAD8C
  c->r[30]=c->r[30]+0x00000001u; // 801EAD90
  cmps(c,0,(int32_t)c->r[30],3); // 801EAD94
  if (crb(c,0)) { IRQCHK(c); goto L_801EAD78; } // 801EAD98
  cmps(c,0,(int32_t)c->r[29],3); // 801EAD9C
  if (crb(c,0)) { goto L_801EADB0; } // 801EADA0
  c->r[3]=c->r[28]|c->r[28]; // 801EADA4
  c->r[4]=0u+0x00000004u; // 801EADA8
  c->lr=0x801EADB0u; f_801EB5FC(c); // 801EADAC
L_801EADB0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EADB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EADB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EADB8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EADBC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EADC0
  c->lr=c->r[0]; // 801EADC4
  c->r[1]=c->r[1]+0x00000020u; // 801EADC8
  return; // 801EADCC
}

// fn_801EADD0
void f_801EADD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EADD0
  c->r[0]=c->lr; // 801EADD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EADD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EADDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EADE0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EADE4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EADE8
  c->r[28]=c->r[3]|c->r[3]; // 801EADEC
  c->r[29]=0u+0x00000000u; // 801EADF0
  c->r[31]=c->r[3]+0x0000218Cu; // 801EADF4
  c->r[30]=c->r[28]|c->r[28]; // 801EADF8
L_801EADFC:;
  c->r[3]=c->r[31]|c->r[31]; // 801EADFC
  c->lr=0x801EAE04u; f_800488E8(c); // 801EAE00
  c->r[4]=c->r[3]|c->r[3]; // 801EAE04
  c->r[3]=c->r[28]|c->r[28]; // 801EAE08
  c->lr=0x801EAE10u; f_8005E214(c); // 801EAE0C
  W32(c->r[30]+0x000011C0u,c->r[3]); // 801EAE10
  c->r[3]=c->r[31]|c->r[31]; // 801EAE14
  c->lr=0x801EAE1Cu; f_800488E8(c); // 801EAE18
  c->r[5]=c->r[3]|c->r[3]; // 801EAE1C
  c->r[3]=c->r[31]|c->r[31]; // 801EAE20
  c->r[4]=R32(c->r[30]+0x000011C0u); // 801EAE24
  c->lr=0x801EAE2Cu; f_80060698(c); // 801EAE28
  c->r[31]=c->r[31]+0x000000ACu; // 801EAE2C
  c->r[30]=c->r[30]+0x00000004u; // 801EAE30
  c->r[29]=c->r[29]+0x00000001u; // 801EAE34
  cmps(c,0,(int32_t)c->r[29],3); // 801EAE38
  if (crb(c,0)) { IRQCHK(c); goto L_801EADFC; } // 801EAE3C
  c->r[3]=c->r[28]|c->r[28]; // 801EAE40
  c->r[4]=0u+0x00000005u; // 801EAE44
  c->lr=0x801EAE4Cu; f_801EB5FC(c); // 801EAE48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EAE4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EAE50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EAE54
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EAE58
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EAE5C
  c->lr=c->r[0]; // 801EAE60
  c->r[1]=c->r[1]+0x00000020u; // 801EAE64
  return; // 801EAE68
}

// fn_801EAE6C
void f_801EAE6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAE6C
  c->r[0]=c->lr; // 801EAE70
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EAE74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EAE78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EAE7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EAE80
  W32(c->r[1]+0x00000010u,c->r[28]); // 801EAE84
  c->r[28]=c->r[3]|c->r[3]; // 801EAE88
  c->r[29]=0u+0x00000000u; // 801EAE8C
  c->r[30]=0u+0x00000000u; // 801EAE90
  c->r[31]=c->r[3]+0x0000218Cu; // 801EAE94
L_801EAE98:;
  c->r[3]=c->r[31]|c->r[31]; // 801EAE98
  c->lr=0x801EAEA0u; f_800605BC(c); // 801EAE9C
  cmps(c,0,(int32_t)c->r[3],0); // 801EAEA0
  if (crb(c,2)) { goto L_801EAEAC; } // 801EAEA4
  c->r[29]=c->r[29]+0x00000001u; // 801EAEA8
L_801EAEAC:;
  c->r[31]=c->r[31]+0x000000ACu; // 801EAEAC
  c->r[30]=c->r[30]+0x00000001u; // 801EAEB0
  cmps(c,0,(int32_t)c->r[30],3); // 801EAEB4
  if (crb(c,0)) { IRQCHK(c); goto L_801EAE98; } // 801EAEB8
  cmps(c,0,(int32_t)c->r[29],3); // 801EAEBC
  if (crb(c,0)) { goto L_801EAEF0; } // 801EAEC0
  c->r[30]=0u+0x00000000u; // 801EAEC4
  c->r[31]=c->r[28]+0x0000218Cu; // 801EAEC8
L_801EAECC:;
  c->r[3]=c->r[31]|c->r[31]; // 801EAECC
  c->lr=0x801EAED4u; f_80060598(c); // 801EAED0
  c->r[31]=c->r[31]+0x000000ACu; // 801EAED4
  c->r[30]=c->r[30]+0x00000001u; // 801EAED8
  cmps(c,0,(int32_t)c->r[30],3); // 801EAEDC
  if (crb(c,0)) { IRQCHK(c); goto L_801EAECC; } // 801EAEE0
  c->r[3]=c->r[28]|c->r[28]; // 801EAEE4
  c->r[4]=0u+0x00000006u; // 801EAEE8
  c->lr=0x801EAEF0u; f_801EB5FC(c); // 801EAEEC
L_801EAEF0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EAEF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EAEF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EAEF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801EAEFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EAF00
  c->lr=c->r[0]; // 801EAF04
  c->r[1]=c->r[1]+0x00000020u; // 801EAF08
  return; // 801EAF0C
}

// fn_801EAF10
void f_801EAF10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAF10
  c->r[0]=c->lr; // 801EAF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAF18
  c->lr=0x801EAF20u; f_801EB2F8(c); // 801EAF1C
  c->r[3]=0u+0x00000000u; // 801EAF20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EAF24
  c->lr=c->r[0]; // 801EAF28
  c->r[1]=c->r[1]+0x00000010u; // 801EAF2C
  return; // 801EAF30
}

// fn_801EAF34
void f_801EAF34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EAF34
  c->r[0]=c->lr; // 801EAF38
  W32(c->r[1]+0x00000064u,c->r[0]); // 801EAF3C
  c->r[11]=c->r[1]+0x00000060u; // 801EAF40
  c->lr=0x801EAF48u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EAF44
  c->r[31]=c->r[3]|c->r[3]; // 801EAF48
  c->r[4]=0u+0x80430000u; // 801EAF4C
  c->r[5]=c->r[4]+0x00001684u; // 801EAF50
  c->r[4]=R32(c->r[5]+0x00000000u); // 801EAF54
  c->r[0]=R32(c->r[5]+0x00000004u); // 801EAF58
  W32(c->r[1]+0x00000008u,c->r[4]); // 801EAF5C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801EAF60
  c->r[4]=R32(c->r[5]+0x00000008u); // 801EAF64
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801EAF68
  W32(c->r[1]+0x00000010u,c->r[4]); // 801EAF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EAF70
  c->r[4]=R32(c->r[5]+0x00000010u); // 801EAF74
  c->r[0]=R32(c->r[5]+0x00000014u); // 801EAF78
  W32(c->r[1]+0x00000018u,c->r[4]); // 801EAF7C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801EAF80
  c->r[4]=R32(c->r[5]+0x00000018u); // 801EAF84
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 801EAF88
  W32(c->r[1]+0x00000020u,c->r[4]); // 801EAF8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EAF90
  c->r[0]=R32(c->r[5]+0x00000020u); // 801EAF94
  W32(c->r[1]+0x00000028u,c->r[0]); // 801EAF98
  c->lr=0x801EAFA0u; f_80074EC4(c); // 801EAF9C
  c->r[23]=c->r[3]|c->r[3]; // 801EAFA0
  c->r[25]=0u+0x00000000u; // 801EAFA4
  c->r[29]=c->r[31]|c->r[31]; // 801EAFA8
  c->r[28]=c->r[31]+0x000011D8u; // 801EAFAC
  c->r[27]=c->r[31]+0x00001244u; // 801EAFB0
  c->r[26]=c->r[1]+0x00000008u; // 801EAFB4
L_801EAFB8:;
  c->r[24]=R32(c->r[29]+0x000011C0u); // 801EAFB8
  c->lr=0x801EAFC0u; f_80056B5C(c); // 801EAFBC
  c->r[22]=c->r[3]|c->r[3]; // 801EAFC0
  c->r[3]=c->r[23]|c->r[23]; // 801EAFC4
  c->lr=0x801EAFCCu; f_80056B54(c); // 801EAFC8
  c->r[3]=0u+0x0000000Cu; // 801EAFCC
  c->lr=0x801EAFD4u; f_80047B64(c); // 801EAFD0
  c->r[30]=c->r[3]|c->r[3]; // 801EAFD4
  cmps(c,0,(int32_t)c->r[3],0); // 801EAFD8
  if (crb(c,2)) { goto L_801EAFEC; } // 801EAFDC
  c->r[4]=0u+0x00000000u; // 801EAFE0
  c->r[5]=c->r[24]|c->r[24]; // 801EAFE4
  c->lr=0x801EAFECu; f_80054F34(c); // 801EAFE8
L_801EAFEC:;
  W32(c->r[29]+0x000011CCu,c->r[30]); // 801EAFEC
  c->r[3]=c->r[22]|c->r[22]; // 801EAFF0
  c->lr=0x801EAFF8u; f_80056B54(c); // 801EAFF4
  c->r[3]=c->r[28]|c->r[28]; // 801EAFF8
  c->r[4]=R32(c->r[29]+0x000011CCu); // 801EAFFC
  c->r[5]=0u+0x00000001u; // 801EB000
  c->r[6]=c->r[23]|c->r[23]; // 801EB004
  c->lr=0x801EB00Cu; f_80051C40(c); // 801EB008
  c->r[3]=c->r[27]|c->r[27]; // 801EB00C
  c->r[4]=c->r[28]|c->r[28]; // 801EB010
  c->r[5]=0u+0x00000001u; // 801EB014
  c->r[6]=c->r[23]|c->r[23]; // 801EB018
  c->r[7]=0u+0x0000734Fu; // 801EB01C
  c->lr=0x801EB024u; f_80052C44(c); // 801EB020
  c->r[3]=c->r[27]|c->r[27]; // 801EB024
  c->r[4]=0u+0x00000001u; // 801EB028
  c->lr=0x801EB030u; f_80053434(c); // 801EB02C
  c->r[3]=c->r[27]|c->r[27]; // 801EB030
  {uint32_t ea=c->r[26]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB034
  {uint32_t ea=c->r[26]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB038
  {uint32_t ea=c->r[26]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB03C
  c->lr=0x801EB044u; f_80074EEC(c); // 801EB040
  c->r[3]=c->r[27]|c->r[27]; // 801EB044
  c->r[4]=0u+0x00000001u; // 801EB048
  c->r[5]=0u+0x00000000u; // 801EB04C
  c->r[6]=0u+0x00000000u; // 801EB050
  c->lr=0x801EB058u; f_8005302C(c); // 801EB054
  c->r[29]=c->r[29]+0x00000004u; // 801EB058
  c->r[28]=c->r[28]+0x00000024u; // 801EB05C
  c->r[27]=c->r[27]+0x00000518u; // 801EB060
  c->r[26]=c->r[26]+0x0000000Cu; // 801EB064
  c->r[25]=c->r[25]+0x00000001u; // 801EB068
  cmps(c,0,(int32_t)c->r[25],3); // 801EB06C
  if (crb(c,0)) { IRQCHK(c); goto L_801EAFB8; } // 801EB070
  c->r[3]=c->r[31]+0x00001C74u; // 801EB074
  c->r[4]=0u+0x00000001u; // 801EB078
  c->lr=0x801EB080u; f_800534E4(c); // 801EB07C
  c->r[3]=c->r[31]+0x00000130u; // 801EB080
  c->r[4]=c->r[31]+0x00001F04u; // 801EB084
  c->lr=0x801EB08Cu; f_800560B0(c); // 801EB088
  c->r[3]=c->r[31]+0x00000130u; // 801EB08C
  c->r[4]=c->r[31]+0x000014D4u; // 801EB090
  c->lr=0x801EB098u; f_800560B0(c); // 801EB094
  c->r[3]=c->r[31]+0x00000130u; // 801EB098
  c->r[4]=c->r[31]+0x000019ECu; // 801EB09C
  c->lr=0x801EB0A4u; f_800560B0(c); // 801EB0A0
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EB0A4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; // 801EB0A8
  cmps(c,0,(int32_t)c->r[0],0); // 801EB0AC
  if (crb(c,2)) { goto L_801EB13C; } // 801EB0B0
  c->r[3]=c->r[31]+0x00001244u; // 801EB0B4
  c->r[4]=0u+0x00000000u; // 801EB0B8
  c->lr=0x801EB0C0u; f_800534E4(c); // 801EB0BC
  c->r[3]=c->r[31]+0x0000175Cu; // 801EB0C0
  c->r[4]=0u+0x00000000u; // 801EB0C4
  c->lr=0x801EB0CCu; f_800534E4(c); // 801EB0C8
  c->r[3]=c->r[31]+0x00001C74u; // 801EB0CC
  c->r[4]=0u+0x00000003u; // 801EB0D0
  c->r[5]=0u+0x00000000u; // 801EB0D4
  c->r[6]=0u+0x00000000u; // 801EB0D8
  c->lr=0x801EB0E0u; f_8005302C(c); // 801EB0DC
  c->r[3]=c->r[31]+0x00001C74u; // 801EB0E0
  c->r[4]=0u+0x00000002u; // 801EB0E4
  c->r[5]=0u+0x00000000u; // 801EB0E8
  c->r[6]=0u+0x00000000u; // 801EB0EC
  c->r[7]=c->r[31]+0x000024DCu; // 801EB0F0
  c->lr=0x801EB0F8u; f_800532A0(c); // 801EB0F4
  {uint32_t ea=c->r[2]+0xFFFF9490u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB0F8
  {uint32_t ea=c->r[31]+0x000024E0u; WF32(ea,c->f[0]);} // 801EB0FC
  c->r[3]=c->r[31]+0x000024C0u; // 801EB100
  {uint32_t ea=c->r[31]+0x000024DCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB104
  c->lr=0x801EB10Cu; f_8005BB40(c); // 801EB108
  c->r[3]=c->r[31]+0x000024C0u; // 801EB10C
  c->r[4]=0u+0x00000000u; // 801EB110
  c->r[5]=0u+0x00000000u; // 801EB114
  c->r[6]=0u+0x000000FFu; // 801EB118
  c->lr=0x801EB120u; f_801EB5B8(c); // 801EB11C
  c->r[3]=c->r[31]+0x000024C0u; // 801EB120
  c->r[4]=0u+0x00000001u; // 801EB124
  c->lr=0x801EB12Cu; f_8005BBF0(c); // 801EB128
  c->r[3]=c->r[31]|c->r[31]; // 801EB12C
  c->r[4]=0u+0x00000001u; // 801EB130
  c->lr=0x801EB138u; f_801E9D08(c); // 801EB134
  goto L_801EB160; // 801EB138
L_801EB13C:;
  c->r[3]=c->r[31]+0x00001244u; // 801EB13C
  c->r[4]=0u+0x00000001u; // 801EB140
  c->lr=0x801EB148u; f_800534E4(c); // 801EB144
  c->r[3]=c->r[31]+0x0000175Cu; // 801EB148
  c->r[4]=0u+0x00000001u; // 801EB14C
  c->lr=0x801EB154u; f_800534E4(c); // 801EB150
  c->r[3]=c->r[31]|c->r[31]; // 801EB154
  c->r[4]=0u+0x00000000u; // 801EB158
  c->lr=0x801EB160u; f_801E9D08(c); // 801EB15C
L_801EB160:;
  c->r[3]=c->r[31]+0x00001C74u; // 801EB160
  c->r[4]=0u+0x801F0000u; // 801EB164
  c->r[4]=c->r[4]+0xFFFFAF10u; // 801EB168
  c->r[5]=c->r[31]|c->r[31]; // 801EB16C
  c->r[6]=0u+0x00000004u; // 801EB170
  c->lr=0x801EB178u; f_80052C34(c); // 801EB174
  c->r[3]=c->r[31]+0x00001C74u; // 801EB178
  c->r[4]=0u+0x00000001u; // 801EB17C
  c->lr=0x801EB184u; f_80052BC0(c); // 801EB180
  c->r[3]=c->r[31]+0x00000130u; // 801EB184
  c->r[4]=0u+0x00000001u; // 801EB188
  c->lr=0x801EB190u; f_8004C674(c); // 801EB18C
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EB190
  c->r[0]=c->r[0]|0x00000014u; // 801EB194
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EB198
  c->r[3]=c->r[31]|c->r[31]; // 801EB19C
  c->r[4]=0u+0x00000001u; // 801EB1A0
  c->lr=0x801EB1A8u; f_801EB5FC(c); // 801EB1A4
  c->r[11]=c->r[1]+0x00000060u; // 801EB1A8
  c->lr=0x801EB1B0u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB1AC
  c->r[0]=R32(c->r[1]+0x00000064u); // 801EB1B0
  c->lr=c->r[0]; // 801EB1B4
  c->r[1]=c->r[1]+0x00000060u; // 801EB1B8
  return; // 801EB1BC
}

// fn_801EB1C0
void f_801EB1C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB1C0
  c->r[0]=c->lr; // 801EB1C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EB1C8
  c->r[11]=c->r[1]+0x00000030u; // 801EB1CC
  c->lr=0x801EB1D4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801EB1D0
  c->r[23]=c->r[3]|c->r[3]; // 801EB1D4
  c->lr=0x801EB1DCu; f_80074EC4(c); // 801EB1D8
  c->r[25]=c->r[3]|c->r[3]; // 801EB1DC
  c->r[26]=0u+0x00000002u; // 801EB1E0
  c->r[30]=c->r[23]+0x00001F04u; // 801EB1E4
  c->r[29]=c->r[23]+0x00001C74u; // 801EB1E8
  c->r[28]=c->r[23]+0x00001220u; // 801EB1EC
  c->r[27]=c->r[23]+0x00000008u; // 801EB1F0
  c->r[31]=0u+0x00000000u; // 801EB1F4
L_801EB1F8:;
  c->r[3]=c->r[23]+0x00000130u; // 801EB1F8
  c->r[4]=c->r[30]|c->r[30]; // 801EB1FC
  c->lr=0x801EB204u; f_800560C4(c); // 801EB200
  c->r[3]=c->r[29]|c->r[29]; // 801EB204
  c->lr=0x801EB20Cu; f_80052D08(c); // 801EB208
  c->r[3]=c->r[28]|c->r[28]; // 801EB20C
  c->lr=0x801EB214u; f_80051DC4(c); // 801EB210
  c->lr=0x801EB218u; f_80056B5C(c); // 801EB214
  c->r[24]=c->r[3]|c->r[3]; // 801EB218
  c->r[3]=c->r[25]|c->r[25]; // 801EB21C
  c->lr=0x801EB224u; f_80056B54(c); // 801EB220
  c->r[3]=R32(c->r[27]+0x000011CCu); // 801EB224
  cmps(c,0,(int32_t)c->r[3],0); // 801EB228
  if (crb(c,2)) { goto L_801EB244; } // 801EB22C
  c->r[4]=0u+0x00000001u; // 801EB230
  c->r[12]=R32(c->r[3]+0x00000008u); // 801EB234
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EB238
  c->ctr=c->r[12]; // 801EB23C
  if (true) { c->lr=0x801EB244u; dispatch(c,c->ctr); } // 801EB240
L_801EB244:;
  c->r[3]=c->r[24]|c->r[24]; // 801EB244
  c->lr=0x801EB24Cu; f_80056B54(c); // 801EB248
  c->r[3]=c->r[23]|c->r[23]; // 801EB24C
  c->r[4]=R32(c->r[27]+0x000011C0u); // 801EB250
  c->lr=0x801EB258u; f_8005E230(c); // 801EB254
  W32(c->r[27]+0x000011C0u,c->r[31]); // 801EB258
  W32(c->r[27]+0x000011CCu,c->r[31]); // 801EB25C
  c->r[30]=c->r[30]+0xFFFFFAE8u; // 801EB260
  c->r[29]=c->r[29]+0xFFFFFAE8u; // 801EB264
  c->r[28]=c->r[28]+0xFFFFFFDCu; // 801EB268
  c->r[27]=c->r[27]+0xFFFFFFFCu; // 801EB26C
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 801EB270
  cmps(c,0,(int32_t)c->r[26],0); // 801EB274
  if (!crb(c,0)) { IRQCHK(c); goto L_801EB1F8; } // 801EB278
  c->r[0]=0u+0x00000000u; // 801EB27C
  W32(c->r[23]+0x0000239Cu,c->r[0]); // 801EB280
  c->r[3]=c->r[23]|c->r[23]; // 801EB284
  c->r[4]=0u+0x00000008u; // 801EB288
  c->lr=0x801EB290u; f_801EB5FC(c); // 801EB28C
  c->r[11]=c->r[1]+0x00000030u; // 801EB290
  c->lr=0x801EB298u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801EB294
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EB298
  c->lr=c->r[0]; // 801EB29C
  c->r[1]=c->r[1]+0x00000030u; // 801EB2A0
  return; // 801EB2A4
}

// fn_801EB2A8
void f_801EB2A8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801EB2A8
  f_801EB5FC(c); return; // 801EB2AC
}

// fn_801EB2B0
void f_801EB2B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB2B0
  c->r[0]=c->lr; // 801EB2B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB2B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB2BC
  c->r[31]=c->r[3]|c->r[3]; // 801EB2C0
  c->r[0]=R32(c->r[3]+0x000023A4u); // 801EB2C4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801EB2C8
  c->r[4]=0u+0x80430000u; // 801EB2CC
  c->r[0]=c->r[4]+0x00001594u; // 801EB2D0
  c->r[12]=c->r[0]+c->r[5]; // 801EB2D4
  c->lr=0x801EB2DCu; f_802F09D0(c); // 801EB2D8
  c->r[0]=c->r[0]|0x00000000u; // 801EB2DC
  c->r[3]=R32(c->r[31]+0x000023A4u); // 801EB2E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB2E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB2E8
  c->lr=c->r[0]; // 801EB2EC
  c->r[1]=c->r[1]+0x00000010u; // 801EB2F0
  return; // 801EB2F4
}

// fn_801EB2F8
void f_801EB2F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB2F8
  c->r[0]=c->lr; // 801EB2FC
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801EB300
  W32(c->r[1]+0x000000ACu,c->r[31]); // 801EB304
  c->r[31]=c->r[3]|c->r[3]; // 801EB308
  c->r[3]=c->r[1]+0x00000078u; // 801EB30C
  c->lr=0x801EB314u; f_8004B0A0(c); // 801EB310
  c->r[3]=c->r[1]+0x00000044u; // 801EB314
  c->lr=0x801EB31Cu; f_8004B0A4(c); // 801EB318
  c->r[3]=c->r[1]+0x00000038u; // 801EB31C
  c->lr=0x801EB324u; f_8004B0A4(c); // 801EB320
  c->r[3]=c->r[1]+0x0000002Cu; // 801EB324
  c->lr=0x801EB32Cu; f_8004B0A4(c); // 801EB328
  c->r[3]=c->r[1]+0x00000020u; // 801EB32C
  c->lr=0x801EB334u; f_8004B0A4(c); // 801EB330
  c->r[3]=0u+0x80430000u; // 801EB334
  c->r[4]=c->r[3]+0x000016A8u; // 801EB338
  c->r[3]=R32(c->r[4]+0x00000000u); // 801EB33C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801EB340
  W32(c->r[1]+0x00000050u,c->r[3]); // 801EB344
  W32(c->r[1]+0x00000054u,c->r[0]); // 801EB348
  c->r[3]=R32(c->r[4]+0x00000008u); // 801EB34C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801EB350
  W32(c->r[1]+0x00000058u,c->r[3]); // 801EB354
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 801EB358
  c->r[3]=R32(c->r[4]+0x00000010u); // 801EB35C
  c->r[0]=R32(c->r[4]+0x00000014u); // 801EB360
  W32(c->r[1]+0x00000060u,c->r[3]); // 801EB364
  W32(c->r[1]+0x00000064u,c->r[0]); // 801EB368
  c->r[3]=R32(c->r[4]+0x00000018u); // 801EB36C
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 801EB370
  W32(c->r[1]+0x00000068u,c->r[3]); // 801EB374
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 801EB378
  c->r[0]=R32(c->r[4]+0x00000020u); // 801EB37C
  W32(c->r[1]+0x00000070u,c->r[0]); // 801EB380
  c->r[3]=R32(c->r[31]+0x0000239Cu); // 801EB384
  c->r[0]=rotl(c->r[3],0)&0x00001000u; // 801EB388
  cmps(c,0,(int32_t)c->r[0],0); // 801EB38C
  if (!crb(c,2)) { goto L_801EB3A0; } // 801EB390
  c->r[0]=c->r[3]|0x00001000u; // 801EB394
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EB398
  goto L_801EB554; // 801EB39C
L_801EB3A0:;
  c->r[3]=c->r[31]+0x00000130u; // 801EB3A0
  c->r[4]=c->r[1]+0x0000002Cu; // 801EB3A4
  c->lr=0x801EB3ACu; f_801EB634(c); // 801EB3A8
  c->r[3]=c->r[31]+0x00000130u; // 801EB3AC
  c->r[4]=c->r[1]+0x00000020u; // 801EB3B0
  c->lr=0x801EB3B8u; f_801EB624(c); // 801EB3B4
  c->r[3]=c->r[31]+0x00001C74u; // 801EB3B8
  c->r[4]=c->r[1]+0x00000078u; // 801EB3BC
  c->r[5]=c->r[13]+0xFFFF9DE0u; // 801EB3C0
  c->lr=0x801EB3C8u; f_800532CC(c); // 801EB3C4
  cmps(c,0,(int32_t)c->r[3],0); // 801EB3C8
  if (crb(c,2)) { goto L_801EB464; } // 801EB3CC
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB3D0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801EB3D4
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB3D8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801EB3DC
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB3E0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801EB3E4
  c->r[3]=c->r[1]+0x00000044u; // 801EB3E8
  c->r[4]=c->r[3]|c->r[3]; // 801EB3EC
  c->r[5]=c->r[1]+0x0000002Cu; // 801EB3F0
  c->lr=0x801EB3F8u; f_8006000C(c); // 801EB3F4
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB3F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB3FC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EB400
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801EB404
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB408
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB40C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EB410
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801EB414
  {uint32_t ea=c->r[2]+0xFFFF9460u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB418
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801EB41C
  c->r[3]=c->r[1]+0x00000014u; // 801EB420
  c->r[4]=c->r[1]+0x00000050u; // 801EB424
  c->lr=0x801EB42Cu; f_800C236C(c); // 801EB428
  c->r[4]=c->r[3]|c->r[3]; // 801EB42C
  c->r[3]=c->r[1]+0x00000038u; // 801EB430
  c->lr=0x801EB438u; f_8004A65C(c); // 801EB434
  c->r[3]=c->r[31]+0x00001244u; // 801EB438
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB43C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB440
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801EB444
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB448
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB44C
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801EB450
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB454
  c->lr=0x801EB45Cu; f_80074EEC(c); // 801EB458
  c->r[3]=c->r[31]+0x00001244u; // 801EB45C
  c->lr=0x801EB464u; f_800534EC(c); // 801EB460
L_801EB464:;
  c->r[3]=c->r[31]+0x00001C74u; // 801EB464
  c->r[4]=c->r[1]+0x00000078u; // 801EB468
  c->r[5]=c->r[13]+0xFFFF9DE4u; // 801EB46C
  c->lr=0x801EB474u; f_800532CC(c); // 801EB470
  cmps(c,0,(int32_t)c->r[3],0); // 801EB474
  if (crb(c,2)) { goto L_801EB518; } // 801EB478
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB47C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801EB480
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB484
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801EB488
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB48C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801EB490
  c->r[3]=c->r[1]+0x00000044u; // 801EB494
  c->r[4]=c->r[3]|c->r[3]; // 801EB498
  c->r[5]=c->r[1]+0x0000002Cu; // 801EB49C
  c->lr=0x801EB4A4u; f_8006000C(c); // 801EB4A0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB4A4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB4A8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EB4AC
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 801EB4B0
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB4B4
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB4B8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EB4BC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 801EB4C0
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB4C4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB4C8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801EB4CC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801EB4D0
  c->r[3]=c->r[1]+0x00000008u; // 801EB4D4
  c->r[4]=c->r[1]+0x0000005Cu; // 801EB4D8
  c->lr=0x801EB4E0u; f_800C236C(c); // 801EB4DC
  c->r[4]=c->r[3]|c->r[3]; // 801EB4E0
  c->r[3]=c->r[1]+0x00000038u; // 801EB4E4
  c->lr=0x801EB4ECu; f_8004A65C(c); // 801EB4E8
  c->r[3]=c->r[31]+0x0000175Cu; // 801EB4EC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB4F0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB4F4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801EB4F8
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB4FC
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB500
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[0]); // 801EB504
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB508
  c->lr=0x801EB510u; f_80074EEC(c); // 801EB50C
  c->r[3]=c->r[31]+0x0000175Cu; // 801EB510
  c->lr=0x801EB518u; f_800534EC(c); // 801EB514
L_801EB518:;
  c->r[3]=c->r[31]+0x00001C74u; // 801EB518
  c->r[4]=c->r[1]+0x00000078u; // 801EB51C
  c->r[5]=c->r[13]+0xFFFF9DE8u; // 801EB520
  c->lr=0x801EB528u; f_800532CC(c); // 801EB524
  cmps(c,0,(int32_t)c->r[3],0); // 801EB528
  if (crb(c,2)) { goto L_801EB548; } // 801EB52C
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB530
  {uint32_t ea=c->r[31]+0x000024B4u; WF32(ea,c->f[0]);} // 801EB534
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB538
  {uint32_t ea=c->r[31]+0x000024B8u; WF32(ea,c->f[0]);} // 801EB53C
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801EB540
  {uint32_t ea=c->r[31]+0x000024BCu; WF32(ea,c->f[0]);} // 801EB544
L_801EB548:;
  c->r[0]=R32(c->r[31]+0x0000239Cu); // 801EB548
  c->r[0]=c->r[0]|0x00004000u; // 801EB54C
  W32(c->r[31]+0x0000239Cu,c->r[0]); // 801EB550
L_801EB554:;
  c->r[31]=R32(c->r[1]+0x000000ACu); // 801EB554
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801EB558
  c->lr=c->r[0]; // 801EB55C
  c->r[1]=c->r[1]+0x000000B0u; // 801EB560
  return; // 801EB564
}

// fn_801EB568
void f_801EB568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB568
  c->r[0]=c->lr; // 801EB56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EB570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB574
  c->r[31]=c->r[3]|c->r[3]; // 801EB578
  c->lr=0x801EB580u; f_8005BABC(c); // 801EB57C
  c->r[3]=0u+0x80460000u; // 801EB580
  c->r[0]=c->r[3]+0xFFFFD110u; // 801EB584
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801EB588
  c->r[3]=c->r[31]|c->r[31]; // 801EB58C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB590
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EB594
  c->lr=c->r[0]; // 801EB598
  c->r[1]=c->r[1]+0x00000010u; // 801EB59C
  return; // 801EB5A0
}

// fn_801EB5A4
void f_801EB5A4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000010u); // 801EB5A4
  return; // 801EB5A8
}

// fn_801EB5AC
void f_801EB5AC(Ctx* __restrict c) {
  W32(c->r[3]+0x00000014u,c->r[4]); // 801EB5AC
  W32(c->r[3]+0x00000018u,c->r[5]); // 801EB5B0
  return; // 801EB5B4
}

// fn_801EB5B8
void f_801EB5B8(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 801EB5B8
  W32(c->r[3]+0x00000014u,c->r[5]); // 801EB5BC
  W32(c->r[3]+0x00000018u,c->r[6]); // 801EB5C0
  return; // 801EB5C4
}

// fn_801EB5C8
void f_801EB5C8(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000038u); // 801EB5C8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801EB5CC
  return; // 801EB5D0
}

// fn_801EB5D4
void f_801EB5D4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFA4u; // 801EB5D4
  f_801EA0C4(c); return; // 801EB5D8
}

// fn_801EB5DC
void f_801EB5DC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFA4u; // 801EB5DC
  f_801EA090(c); return; // 801EB5E0
}

// fn_801EB5E4
void f_801EB5E4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFA4u; // 801EB5E4
  f_801EA050(c); return; // 801EB5E8
}

// fn_801EB5EC
void f_801EB5EC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFA4u; // 801EB5EC
  f_801E99BC(c); return; // 801EB5F0
}

// fn_801EB5F4
void f_801EB5F4(Ctx* __restrict c) {
  W32(c->r[3]+0x00002398u,c->r[4]); // 801EB5F4
  return; // 801EB5F8
}

// fn_801EB5FC
void f_801EB5FC(Ctx* __restrict c) {
  W32(c->r[3]+0x000023A4u,c->r[4]); // 801EB5FC
  return; // 801EB600
}

// fn_801EB604
void f_801EB604(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[1]);} // 801EB604
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[2]);} // 801EB608
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[3]);} // 801EB60C
  return; // 801EB610
}

// fn_801EB614
void f_801EB614(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 801EB614
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[2]);} // 801EB618
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[3]);} // 801EB61C
  return; // 801EB620
}

// fn_801EB624
void f_801EB624(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801EB624
  c->r[3]=c->r[4]|c->r[4]; // 801EB628
  c->r[4]=c->r[5]+0x0000009Cu; // 801EB62C
  f_8004A65C(c); return; // 801EB630
}

// fn_801EB634
void f_801EB634(Ctx* __restrict c) {
  c->r[5]=c->r[3]|c->r[3]; // 801EB634
  c->r[3]=c->r[4]|c->r[4]; // 801EB638
  c->r[4]=c->r[5]+0x000000B4u; // 801EB63C
  f_8004A65C(c); return; // 801EB640
}

// fn_801EB644
void f_801EB644(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB644
  c->r[0]=c->lr; // 801EB648
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EB64C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801EB650
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801EB654
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801EB658
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801EB65C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EB660
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EB664
  c->r[30]=c->r[3]|c->r[3]; // 801EB668
  c->lr=0x801EB670u; f_8011B41C(c); // 801EB66C
  c->r[4]=0u+0x00000004u; // 801EB670
  c->lr=0x801EB678u; f_8011B814(c); // 801EB674
  c->r[31]=c->r[3]|c->r[3]; // 801EB678
  c->lr=0x801EB680u; f_8012FCB8(c); // 801EB67C
  c->f[30]=c->f[1]; // 801EB680
  c->r[3]=c->r[31]|c->r[31]; // 801EB684
  c->lr=0x801EB68Cu; f_8012FCB0(c); // 801EB688
  c->r[3]=c->r[30]|c->r[30]; // 801EB68C
  c->f[2]=c->f[30]; // 801EB690
  c->lr=0x801EB698u; f_8012FA24(c); // 801EB694
  c->r[3]=c->r[31]|c->r[31]; // 801EB698
  c->lr=0x801EB6A0u; f_8012FCD0(c); // 801EB69C
  c->f[30]=c->f[1]; // 801EB6A0
  c->r[3]=c->r[31]|c->r[31]; // 801EB6A4
  c->lr=0x801EB6ACu; f_8012FCC8(c); // 801EB6A8
  c->r[3]=c->r[30]|c->r[30]; // 801EB6AC
  c->f[2]=c->f[30]; // 801EB6B0
  c->lr=0x801EB6B8u; f_8012FA40(c); // 801EB6B4
  c->r[3]=c->r[31]|c->r[31]; // 801EB6B8
  c->lr=0x801EB6C0u; f_8012FCE8(c); // 801EB6BC
  c->r[3]=c->r[30]|c->r[30]; // 801EB6C0
  c->lr=0x801EB6C8u; f_8012FA6C(c); // 801EB6C4
  c->r[3]=c->r[31]|c->r[31]; // 801EB6C8
  c->lr=0x801EB6D0u; f_8012FCF0(c); // 801EB6CC
  c->r[3]=c->r[30]|c->r[30]; // 801EB6D0
  c->lr=0x801EB6D8u; f_8012FA74(c); // 801EB6D4
  c->r[3]=c->r[31]|c->r[31]; // 801EB6D8
  c->lr=0x801EB6E0u; f_8012FCE0(c); // 801EB6DC
  c->r[4]=c->r[3]|c->r[3]; // 801EB6E0
  c->r[3]=c->r[30]|c->r[30]; // 801EB6E4
  c->lr=0x801EB6ECu; f_8012F918(c); // 801EB6E8
  c->r[3]=c->r[31]|c->r[31]; // 801EB6EC
  c->lr=0x801EB6F4u; f_8018D67C(c); // 801EB6F0
  c->r[3]=c->r[30]|c->r[30]; // 801EB6F4
  c->lr=0x801EB6FCu; f_80117D04(c); // 801EB6F8
  c->r[3]=c->r[31]|c->r[31]; // 801EB6FC
  c->lr=0x801EB704u; f_8018D694(c); // 801EB700
  c->f[30]=c->f[1]; // 801EB704
  c->r[3]=c->r[31]|c->r[31]; // 801EB708
  c->lr=0x801EB710u; f_8018D68C(c); // 801EB70C
  c->f[31]=c->f[1]; // 801EB710
  c->r[3]=c->r[31]|c->r[31]; // 801EB714
  c->lr=0x801EB71Cu; f_8018D684(c); // 801EB718
  c->r[3]=c->r[30]|c->r[30]; // 801EB71C
  c->f[2]=c->f[31]; // 801EB720
  c->f[3]=c->f[30]; // 801EB724
  c->lr=0x801EB72Cu; f_80114AB8(c); // 801EB728
  c->r[3]=c->r[31]|c->r[31]; // 801EB72C
  c->lr=0x801EB734u; f_8018D69C(c); // 801EB730
  c->f[31]=c->f[1]; // 801EB734
  c->r[3]=c->r[31]|c->r[31]; // 801EB738
  c->lr=0x801EB740u; f_8018D69C(c); // 801EB73C
  c->r[3]=c->r[30]|c->r[30]; // 801EB740
  c->f[2]=c->f[31]; // 801EB744
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[3]=c->ps1[3]=RF32(ea);} // 801EB748
  c->lr=0x801EB750u; f_80114AA8(c); // 801EB74C
  c->r[3]=c->r[31]|c->r[31]; // 801EB750
  c->lr=0x801EB758u; f_8012FCF8(c); // 801EB754
  c->r[3]=c->r[30]+0x00000A30u; // 801EB758
  c->lr=0x801EB760u; f_80110580(c); // 801EB75C
  c->r[3]=c->r[31]|c->r[31]; // 801EB760
  c->lr=0x801EB768u; f_8012FD00(c); // 801EB764
  c->r[3]=c->r[30]+0x00000A78u; // 801EB768
  c->lr=0x801EB770u; f_80110580(c); // 801EB76C
  c->r[3]=c->r[31]|c->r[31]; // 801EB770
  c->lr=0x801EB778u; f_8012FD08(c); // 801EB774
  c->r[3]=c->r[30]+0x00000A30u; // 801EB778
  c->lr=0x801EB780u; f_80110588(c); // 801EB77C
  c->r[3]=c->r[31]|c->r[31]; // 801EB780
  c->lr=0x801EB788u; f_8012FD10(c); // 801EB784
  c->r[3]=c->r[30]+0x00000A78u; // 801EB788
  c->lr=0x801EB790u; f_80110588(c); // 801EB78C
  c->lr=0x801EB794u; f_8011A9D8(c); // 801EB790
  c->r[4]=0u+0x00000000u; // 801EB794
  c->lr=0x801EB79Cu; f_8011AF74(c); // 801EB798
  c->r[31]=c->r[3]|c->r[3]; // 801EB79C
  c->lr=0x801EB7A4u; f_8011A6E8(c); // 801EB7A0
  c->r[4]=c->r[31]|c->r[31]; // 801EB7A4
  c->lr=0x801EB7ACu; f_8011A9B0(c); // 801EB7A8
  c->lr=0x801EB7B0u; f_8012DA20(c); // 801EB7AC
  c->r[4]=c->r[3]|c->r[3]; // 801EB7B0
  c->r[3]=c->r[30]|c->r[30]; // 801EB7B4
  c->lr=0x801EB7BCu; f_80114AA0(c); // 801EB7B8
  c->r[3]=c->r[30]|c->r[30]; // 801EB7BC
  c->r[4]=0u+0x00000004u; // 801EB7C0
  c->r[5]=0u+0x00000000u; // 801EB7C4
  c->r[6]=0u+0xFFFFFFFFu; // 801EB7C8
  c->lr=0x801EB7D0u; f_8012DE5C(c); // 801EB7CC
  c->r[3]=c->r[30]|c->r[30]; // 801EB7D0
  c->lr=0x801EB7D8u; f_8012F448(c); // 801EB7D4
  c->r[3]=c->r[30]|c->r[30]; // 801EB7D8
  {uint32_t ea=c->r[2]+0xFFFF9498u; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB7DC
  c->r[4]=0u+0x00000006u; // 801EB7E0
  c->lr=0x801EB7E8u; f_8012E920(c); // 801EB7E4
  c->r[3]=c->r[30]|c->r[30]; // 801EB7E8
  c->r[4]=0u+0x00000001u; // 801EB7EC
  c->lr=0x801EB7F4u; f_8012E1C0(c); // 801EB7F0
  c->r[3]=c->r[30]|c->r[30]; // 801EB7F4
  c->r[4]=0u+0x00000000u; // 801EB7F8
  c->lr=0x801EB800u; f_8012F910(c); // 801EB7FC
  c->r[0]=0u+0x00000028u; // 801EB800
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EB804
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801EB808
  c->r[0]=0u+0x00000018u; // 801EB80C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801EB810
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801EB814
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EB818
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EB81C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EB820
  c->lr=c->r[0]; // 801EB824
  c->r[1]=c->r[1]+0x00000030u; // 801EB828
  return; // 801EB82C
}

// fn_801EB830
void f_801EB830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EB830
  c->r[0]=c->lr; // 801EB834
  W32(c->r[1]+0x00000034u,c->r[0]); // 801EB838
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801EB83C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801EB840
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EB844
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EB848
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EB84C
  c->r[29]=c->r[3]|c->r[3]; // 801EB850
  c->lr=0x801EB858u; f_8011B41C(c); // 801EB854
  c->r[4]=0u+0x00000004u; // 801EB858
  c->lr=0x801EB860u; f_8011B814(c); // 801EB85C
  c->r[31]=c->r[3]|c->r[3]; // 801EB860
  c->lr=0x801EB868u; f_8011B41C(c); // 801EB864
  c->r[4]=0u+0x00000019u; // 801EB868
  c->lr=0x801EB870u; f_8011B814(c); // 801EB86C
  c->r[30]=c->r[3]|c->r[3]; // 801EB870
  c->r[3]=c->r[31]|c->r[31]; // 801EB874
  c->lr=0x801EB87Cu; f_8012FCB8(c); // 801EB878
  c->f[31]=c->f[1]; // 801EB87C
  c->r[3]=c->r[31]|c->r[31]; // 801EB880
  c->lr=0x801EB888u; f_8012FCB0(c); // 801EB884
  c->r[3]=c->r[29]|c->r[29]; // 801EB888
  c->f[2]=c->f[31]; // 801EB88C
  c->lr=0x801EB894u; f_8012D7D0(c); // 801EB890
  c->r[3]=c->r[31]|c->r[31]; // 801EB894
  c->lr=0x801EB89Cu; f_8012FCD0(c); // 801EB898
  c->f[31]=c->f[1]; // 801EB89C
  c->r[3]=c->r[31]|c->r[31]; // 801EB8A0
  c->lr=0x801EB8A8u; f_8012FCC8(c); // 801EB8A4
  c->r[3]=c->r[29]|c->r[29]; // 801EB8A8
  c->f[2]=c->f[31]; // 801EB8AC
  c->lr=0x801EB8B4u; f_8012D7DC(c); // 801EB8B0
  c->r[3]=c->r[31]|c->r[31]; // 801EB8B4
  c->lr=0x801EB8BCu; f_8012FCE8(c); // 801EB8B8
  c->r[3]=c->r[29]|c->r[29]; // 801EB8BC
  c->lr=0x801EB8C4u; f_8012D7E8(c); // 801EB8C0
  c->r[3]=c->r[31]|c->r[31]; // 801EB8C4
  c->lr=0x801EB8CCu; f_8012FCF0(c); // 801EB8C8
  c->r[3]=c->r[29]|c->r[29]; // 801EB8CC
  c->lr=0x801EB8D4u; f_8012D7F0(c); // 801EB8D0
  c->r[3]=c->r[31]|c->r[31]; // 801EB8D4
  c->lr=0x801EB8DCu; f_8012FCE0(c); // 801EB8D8
  c->r[4]=c->r[3]|c->r[3]; // 801EB8DC
  c->r[3]=c->r[29]|c->r[29]; // 801EB8E0
  c->lr=0x801EB8E8u; f_8012D70C(c); // 801EB8E4
  c->r[3]=c->r[31]|c->r[31]; // 801EB8E8
  c->lr=0x801EB8F0u; f_8012FCF8(c); // 801EB8EC
  c->r[3]=c->r[29]+0x000061C8u; // 801EB8F0
  c->lr=0x801EB8F8u; f_80110580(c); // 801EB8F4
  c->r[3]=c->r[31]|c->r[31]; // 801EB8F8
  c->lr=0x801EB900u; f_8012FD00(c); // 801EB8FC
  c->r[3]=c->r[29]+0x00006210u; // 801EB900
  c->lr=0x801EB908u; f_80110580(c); // 801EB904
  c->r[3]=c->r[31]|c->r[31]; // 801EB908
  c->lr=0x801EB910u; f_8012FD08(c); // 801EB90C
  c->r[3]=c->r[29]+0x000061C8u; // 801EB910
  c->lr=0x801EB918u; f_80110588(c); // 801EB914
  c->r[3]=c->r[31]|c->r[31]; // 801EB918
  c->lr=0x801EB920u; f_8012FD10(c); // 801EB91C
  c->r[3]=c->r[29]+0x00006210u; // 801EB920
  c->lr=0x801EB928u; f_80110588(c); // 801EB924
  c->r[3]=c->r[31]|c->r[31]; // 801EB928
  c->lr=0x801EB930u; f_8018D6E4(c); // 801EB92C
  c->f[31]=c->f[1]; // 801EB930
  c->r[3]=c->r[31]|c->r[31]; // 801EB934
  c->lr=0x801EB93Cu; f_8018D6DC(c); // 801EB938
  c->r[3]=c->r[29]|c->r[29]; // 801EB93C
  c->f[2]=c->f[31]; // 801EB940
  c->lr=0x801EB948u; f_8012D56C(c); // 801EB944
  c->r[3]=c->r[31]|c->r[31]; // 801EB948
  c->lr=0x801EB950u; f_8018D6EC(c); // 801EB94C
  c->f[31]=c->f[1]; // 801EB950
  c->r[3]=c->r[31]|c->r[31]; // 801EB954
  c->lr=0x801EB95Cu; f_8018D6EC(c); // 801EB958
  c->r[3]=c->r[29]|c->r[29]; // 801EB95C
  c->f[2]=c->f[31]; // 801EB960
  c->lr=0x801EB968u; f_8012D578(c); // 801EB964
  c->r[3]=c->r[30]|c->r[30]; // 801EB968
  c->r[4]=0u+0x00000000u; // 801EB96C
  c->lr=0x801EB974u; f_8011961C(c); // 801EB970
  c->r[4]=c->r[3]|c->r[3]; // 801EB974
  c->r[3]=c->r[1]+0x00000008u; // 801EB978
  c->lr=0x801EB980u; f_800549FC(c); // 801EB97C
  c->r[3]=c->r[29]|c->r[29]; // 801EB980
  c->r[4]=c->r[1]+0x00000008u; // 801EB984
  c->lr=0x801EB98Cu; f_8012D598(c); // 801EB988
  c->r[3]=c->r[1]+0x00000008u; // 801EB98C
  c->r[4]=0u+0xFFFFFFFFu; // 801EB990
  c->lr=0x801EB998u; f_80047BD4(c); // 801EB994
  c->r[3]=c->r[31]|c->r[31]; // 801EB998
  c->lr=0x801EB9A0u; f_8018D6F4(c); // 801EB99C
  c->r[3]=c->r[29]|c->r[29]; // 801EB9A0
  c->lr=0x801EB9A8u; f_8012D55C(c); // 801EB9A4
  c->r[3]=c->r[31]|c->r[31]; // 801EB9A8
  c->lr=0x801EB9B0u; f_8018D6FC(c); // 801EB9AC
  c->r[3]=c->r[29]|c->r[29]; // 801EB9B0
  c->lr=0x801EB9B8u; f_8012D564(c); // 801EB9B4
  c->r[3]=c->r[31]|c->r[31]; // 801EB9B8
  c->lr=0x801EB9C0u; f_8018D704(c); // 801EB9BC
  c->r[3]=c->r[29]|c->r[29]; // 801EB9C0
  c->lr=0x801EB9C8u; f_8012D5A0(c); // 801EB9C4
  c->r[3]=c->r[31]|c->r[31]; // 801EB9C8
  c->lr=0x801EB9D0u; f_8018D70C(c); // 801EB9CC
  c->r[3]=c->r[29]|c->r[29]; // 801EB9D0
  c->lr=0x801EB9D8u; f_8012D5A8(c); // 801EB9D4
  c->r[3]=c->r[29]|c->r[29]; // 801EB9D8
  c->r[4]=0u+0x00000002u; // 801EB9DC
  c->lr=0x801EB9E4u; f_8012D5B0(c); // 801EB9E0
  c->r[3]=c->r[29]|c->r[29]; // 801EB9E4
  {uint32_t ea=c->r[2]+0xFFFF949Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801EB9E8
  {uint32_t ea=c->r[2]+0xFFFF94A0u; c->f[2]=c->ps1[2]=RF32(ea);} // 801EB9EC
  c->lr=0x801EB9F4u; f_8012D5C4(c); // 801EB9F0
  c->r[3]=c->r[29]|c->r[29]; // 801EB9F4
  c->lr=0x801EB9FCu; f_801EBE88(c); // 801EB9F8
  c->r[3]=c->r[29]|c->r[29]; // 801EB9FC
  c->r[4]=0u+0x00000001u; // 801EBA00
  c->lr=0x801EBA08u; f_8012D5D0(c); // 801EBA04
  c->r[3]=c->r[29]|c->r[29]; // 801EBA08
  c->r[4]=0u+0x00000000u; // 801EBA0C
  c->r[5]=0u+0x00000000u; // 801EBA10
  c->r[6]=0u+0x00000000u; // 801EBA14
  c->r[7]=0u+0x000000FFu; // 801EBA18
  c->lr=0x801EBA20u; f_8012D5D8(c); // 801EBA1C
  c->r[0]=0u+0x00000028u; // 801EBA20
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801EBA24
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801EBA28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EBA2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EBA30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EBA34
  c->r[0]=R32(c->r[1]+0x00000034u); // 801EBA38
  c->lr=c->r[0]; // 801EBA3C
  c->r[1]=c->r[1]+0x00000030u; // 801EBA40
  return; // 801EBA44
}

// fn_801EBA48
void f_801EBA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBA48
  c->r[0]=c->lr; // 801EBA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBA50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBA54
  c->r[31]=c->r[3]|c->r[3]; // 801EBA58
  c->lr=0x801EBA60u; f_8012FAAC(c); // 801EBA5C
  c->r[3]=0u+0x80470000u; // 801EBA60
  c->r[0]=c->r[3]+0x000048C8u; // 801EBA64
  W32(c->r[31]+0x00000058u,c->r[0]); // 801EBA68
  c->r[0]=0u+0x00000000u; // 801EBA6C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801EBA70
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801EBA74
  c->r[3]=c->r[31]|c->r[31]; // 801EBA78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBA7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBA80
  c->lr=c->r[0]; // 801EBA84
  c->r[1]=c->r[1]+0x00000010u; // 801EBA88
  return; // 801EBA8C
}

// fn_801EBA90
void f_801EBA90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBA90
  c->r[0]=c->lr; // 801EBA94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801EBA98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801EBA9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801EBAA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801EBAA4
  c->r[29]=c->r[3]|c->r[3]; // 801EBAA8
  c->lr=0x801EBAB0u; f_80056B5C(c); // 801EBAAC
  c->r[30]=c->r[3]|c->r[3]; // 801EBAB0
  c->lr=0x801EBAB8u; f_801F1340(c); // 801EBAB4
  c->lr=0x801EBABCu; f_80056B54(c); // 801EBAB8
  c->r[3]=0u+0x00000B28u; // 801EBABC
  c->lr=0x801EBAC4u; f_80047B64(c); // 801EBAC0
  c->r[31]=c->r[3]|c->r[3]; // 801EBAC4
  cmps(c,0,(int32_t)c->r[3],0); // 801EBAC8
  if (crb(c,2)) { goto L_801EBAD4; } // 801EBACC
  c->lr=0x801EBAD4u; f_801EBEC8(c); // 801EBAD0
L_801EBAD4:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801EBAD4
  c->r[3]=c->r[30]|c->r[30]; // 801EBAD8
  c->lr=0x801EBAE0u; f_80056B54(c); // 801EBADC
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801EBAE0
  c->r[4]=0u+0x00000000u; // 801EBAE4
  c->lr=0x801EBAECu; f_80114AE0(c); // 801EBAE8
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801EBAEC
  c->r[4]=0u+0x00000000u; // 801EBAF0
  c->lr=0x801EBAF8u; f_801169C8(c); // 801EBAF4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801EBAF8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801EBAFC
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801EBB00
  c->ctr=c->r[12]; // 801EBB04
  if (true) { c->lr=0x801EBB0Cu; dispatch(c,c->ctr); } // 801EBB08
  c->lr=0x801EBB10u; f_80056B5C(c); // 801EBB0C
  c->r[30]=c->r[3]|c->r[3]; // 801EBB10
  c->lr=0x801EBB18u; f_801F1340(c); // 801EBB14
  c->lr=0x801EBB1Cu; f_80056B54(c); // 801EBB18
  c->r[3]=0u+0x00006270u; // 801EBB1C
  c->lr=0x801EBB24u; f_80047B64(c); // 801EBB20
  c->r[31]=c->r[3]|c->r[3]; // 801EBB24
  cmps(c,0,(int32_t)c->r[3],0); // 801EBB28
  if (crb(c,2)) { goto L_801EBB34; } // 801EBB2C
  c->lr=0x801EBB34u; f_801EBE8C(c); // 801EBB30
L_801EBB34:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801EBB34
  c->r[3]=c->r[30]|c->r[30]; // 801EBB38
  c->lr=0x801EBB40u; f_80056B54(c); // 801EBB3C
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801EBB40
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EBB44
  c->r[12]=R32(c->r[12]+0x00000044u); // 801EBB48
  c->ctr=c->r[12]; // 801EBB4C
  if (true) { c->lr=0x801EBB54u; dispatch(c,c->ctr); } // 801EBB50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801EBB54
  c->r[30]=R32(c->r[1]+0x00000018u); // 801EBB58
  c->r[29]=R32(c->r[1]+0x00000014u); // 801EBB5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801EBB60
  c->lr=c->r[0]; // 801EBB64
  c->r[1]=c->r[1]+0x00000020u; // 801EBB68
  return; // 801EBB6C
}

// fn_801EBB70
void f_801EBB70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBB70
  c->r[0]=c->lr; // 801EBB74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBB78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBB7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBB80
  c->r[30]=c->r[3]|c->r[3]; // 801EBB84
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801EBB88
  cmps(c,0,(int32_t)c->r[3],0); // 801EBB8C
  if (crb(c,2)) { goto L_801EBBE4; } // 801EBB90
  c->r[12]=R32(c->r[3]+0x00000020u); // 801EBB94
  c->r[12]=R32(c->r[12]+0x00000060u); // 801EBB98
  c->ctr=c->r[12]; // 801EBB9C
  if (true) { c->lr=0x801EBBA4u; dispatch(c,c->ctr); } // 801EBBA0
  c->lr=0x801EBBA8u; f_80056B5C(c); // 801EBBA4
  c->r[31]=c->r[3]|c->r[3]; // 801EBBA8
  c->lr=0x801EBBB0u; f_801F1340(c); // 801EBBAC
  c->lr=0x801EBBB4u; f_80056B54(c); // 801EBBB0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801EBBB4
  cmps(c,0,(int32_t)c->r[3],0); // 801EBBB8
  if (crb(c,2)) { goto L_801EBBD4; } // 801EBBBC
  c->r[4]=0u+0x00000001u; // 801EBBC0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801EBBC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EBBC8
  c->ctr=c->r[12]; // 801EBBCC
  if (true) { c->lr=0x801EBBD4u; dispatch(c,c->ctr); } // 801EBBD0
L_801EBBD4:;
  c->r[3]=c->r[31]|c->r[31]; // 801EBBD4
  c->lr=0x801EBBDCu; f_80056B54(c); // 801EBBD8
  c->r[0]=0u+0x00000000u; // 801EBBDC
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801EBBE0
L_801EBBE4:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801EBBE4
  cmps(c,0,(int32_t)c->r[3],0); // 801EBBE8
  if (crb(c,2)) { goto L_801EBC40; } // 801EBBEC
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EBBF0
  c->r[12]=R32(c->r[12]+0x00000048u); // 801EBBF4
  c->ctr=c->r[12]; // 801EBBF8
  if (true) { c->lr=0x801EBC00u; dispatch(c,c->ctr); } // 801EBBFC
  c->lr=0x801EBC04u; f_80056B5C(c); // 801EBC00
  c->r[31]=c->r[3]|c->r[3]; // 801EBC04
  c->lr=0x801EBC0Cu; f_801F1340(c); // 801EBC08
  c->lr=0x801EBC10u; f_80056B54(c); // 801EBC0C
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801EBC10
  cmps(c,0,(int32_t)c->r[3],0); // 801EBC14
  if (crb(c,2)) { goto L_801EBC30; } // 801EBC18
  c->r[4]=0u+0x00000001u; // 801EBC1C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EBC20
  c->r[12]=R32(c->r[12]+0x00000008u); // 801EBC24
  c->ctr=c->r[12]; // 801EBC28
  if (true) { c->lr=0x801EBC30u; dispatch(c,c->ctr); } // 801EBC2C
L_801EBC30:;
  c->r[3]=c->r[31]|c->r[31]; // 801EBC30
  c->lr=0x801EBC38u; f_80056B54(c); // 801EBC34
  c->r[0]=0u+0x00000000u; // 801EBC38
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801EBC3C
L_801EBC40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBC40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EBC44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBC48
  c->lr=c->r[0]; // 801EBC4C
  c->r[1]=c->r[1]+0x00000010u; // 801EBC50
  return; // 801EBC54
}

// fn_801EBC58
void f_801EBC58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBC58
  c->r[0]=c->lr; // 801EBC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBC60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBC64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBC68
  c->r[30]=c->r[3]|c->r[3]; // 801EBC6C
  c->r[31]=c->r[4]|c->r[4]; // 801EBC70
  cmps(c,0,(int32_t)c->r[3],0); // 801EBC74
  if (crb(c,2)) { goto L_801EBC98; } // 801EBC78
  c->r[4]=0u+0x00000000u; // 801EBC7C
  c->lr=0x801EBC84u; f_8011EB48(c); // 801EBC80
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801EBC84
  cmps(c,0,(int32_t)c->r[0],0); // 801EBC88
  if (!crb(c,1)) { goto L_801EBC98; } // 801EBC8C
  c->r[3]=c->r[30]|c->r[30]; // 801EBC90
  c->lr=0x801EBC98u; f_80047B20(c); // 801EBC94
L_801EBC98:;
  c->r[3]=c->r[30]|c->r[30]; // 801EBC98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBC9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EBCA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBCA4
  c->lr=c->r[0]; // 801EBCA8
  c->r[1]=c->r[1]+0x00000010u; // 801EBCAC
  return; // 801EBCB0
}

// fn_801EBCB4
void f_801EBCB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBCB4
  c->r[0]=c->lr; // 801EBCB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBCBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBCC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBCC4
  c->r[30]=c->r[3]|c->r[3]; // 801EBCC8
  c->r[31]=c->r[4]|c->r[4]; // 801EBCCC
  cmps(c,0,(int32_t)c->r[3],0); // 801EBCD0
  if (crb(c,2)) { goto L_801EBCF4; } // 801EBCD4
  c->r[4]=0u+0x00000000u; // 801EBCD8
  c->lr=0x801EBCE0u; f_8012F7F0(c); // 801EBCDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801EBCE0
  cmps(c,0,(int32_t)c->r[0],0); // 801EBCE4
  if (!crb(c,1)) { goto L_801EBCF4; } // 801EBCE8
  c->r[3]=c->r[30]|c->r[30]; // 801EBCEC
  c->lr=0x801EBCF4u; f_80047B20(c); // 801EBCF0
L_801EBCF4:;
  c->r[3]=c->r[30]|c->r[30]; // 801EBCF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBCF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EBCFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBD00
  c->lr=c->r[0]; // 801EBD04
  c->r[1]=c->r[1]+0x00000010u; // 801EBD08
  return; // 801EBD0C
}

// fn_801EBD10
void f_801EBD10(Ctx* __restrict c) {
  f_8012FBA8(c); return; // 801EBD10
}

// fn_801EBD14
void f_801EBD14(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801EBD14
  f_8012F910(c); return; // 801EBD18
}

// fn_801EBD1C
void f_801EBD1C(Ctx* __restrict c) {
  f_801EBD14(c); return; // 801EBD1C
}

// fn_801EBD20
void f_801EBD20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801EBD20
  c->r[4]=0u+0x00000000u; // 801EBD24
  c->r[5]=0u+0x00000006u; // 801EBD28
  f_8012E640(c); return; // 801EBD2C
}

// fn_801EBD30
void f_801EBD30(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801EBD30
  c->r[4]=0u+0x00000002u; // 801EBD34
  c->r[5]=0u+0x00000006u; // 801EBD38
  f_8012E640(c); return; // 801EBD3C
}

// fn_801EBD40
void f_801EBD40(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801EBD40
  c->r[4]=0u+0x00000001u; // 801EBD44
  c->r[5]=0u+0x00000006u; // 801EBD48
  f_8012E640(c); return; // 801EBD4C
}

// fn_801EBD50
void f_801EBD50(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801EBD50
  c->r[4]=0u+0x00000000u; // 801EBD54
  f_8012ECA4(c); return; // 801EBD58
}

// fn_801EBD5C
void f_801EBD5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBD5C
  c->r[0]=c->lr; // 801EBD60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBD64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBD68
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBD6C
  c->r[30]=c->r[3]|c->r[3]; // 801EBD70
  c->lr=0x801EBD78u; f_8011B41C(c); // 801EBD74
  c->r[4]=0u+0x00000004u; // 801EBD78
  c->lr=0x801EBD80u; f_8011B814(c); // 801EBD7C
  c->lr=0x801EBD84u; f_8018D714(c); // 801EBD80
  c->r[31]=c->r[3]|c->r[3]; // 801EBD84
  c->lr=0x801EBD8Cu; f_8007B524(c); // 801EBD88
  c->r[4]=c->r[31]|c->r[31]; // 801EBD8C
  c->lr=0x801EBD94u; f_800A2EE8(c); // 801EBD90
  c->r[4]=c->r[3]|c->r[3]; // 801EBD94
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801EBD98
  c->lr=0x801EBDA0u; f_8012D4DC(c); // 801EBD9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBDA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EBDA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBDA8
  c->lr=c->r[0]; // 801EBDAC
  c->r[1]=c->r[1]+0x00000010u; // 801EBDB0
  return; // 801EBDB4
}

// fn_801EBDB8
void f_801EBDB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBDB8
  c->r[0]=c->lr; // 801EBDBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBDC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBDC4
  c->r[31]=c->r[3]|c->r[3]; // 801EBDC8
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801EBDCC
  c->lr=0x801EBDD4u; f_8012D1B0(c); // 801EBDD0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801EBDD4
  c->r[4]=0u+0x00000000u; // 801EBDD8
  c->lr=0x801EBDE0u; f_8012D2A4(c); // 801EBDDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBDE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBDE4
  c->lr=c->r[0]; // 801EBDE8
  c->r[1]=c->r[1]+0x00000010u; // 801EBDEC
  return; // 801EBDF0
}

// fn_801EBDF4
void f_801EBDF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBDF4
  c->r[0]=c->lr; // 801EBDF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBDFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBE00
  c->r[31]=c->r[3]|c->r[3]; // 801EBE04
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801EBE08
  c->r[4]=0u+0x00000000u; // 801EBE0C
  c->lr=0x801EBE14u; f_8012D0DC(c); // 801EBE10
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801EBE14
  c->r[4]=0u+0x00000001u; // 801EBE18
  c->lr=0x801EBE20u; f_8012D2A4(c); // 801EBE1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBE20
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBE24
  c->lr=c->r[0]; // 801EBE28
  c->r[1]=c->r[1]+0x00000010u; // 801EBE2C
  return; // 801EBE30
}

// fn_801EBE34
void f_801EBE34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBE34
  c->r[0]=c->lr; // 801EBE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBE3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBE40
  c->r[31]=c->r[3]|c->r[3]; // 801EBE44
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801EBE48
  c->lr=0x801EBE50u; f_8012D250(c); // 801EBE4C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801EBE50
  c->r[4]=0u+0x00000001u; // 801EBE54
  c->lr=0x801EBE5Cu; f_8012D2A4(c); // 801EBE58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBE5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBE60
  c->lr=c->r[0]; // 801EBE64
  c->r[1]=c->r[1]+0x00000010u; // 801EBE68
  return; // 801EBE6C
}

// fn_801EBE70
void f_801EBE70(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801EBE70
  f_8012D324(c); return; // 801EBE74
}

// fn_801EBE78
void f_801EBE78(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801EBE78
  f_8012D484(c); return; // 801EBE7C
}

// fn_801EBE80
void f_801EBE80(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801EBE80
  f_8012D37C(c); return; // 801EBE84
}

// fn_801EBE88
void f_801EBE88(Ctx* __restrict c) {
  f_8012D5B8(c); return; // 801EBE88
}

// fn_801EBE8C
void f_801EBE8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBE8C
  c->r[0]=c->lr; // 801EBE90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBE94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBE98
  c->r[31]=c->r[3]|c->r[3]; // 801EBE9C
  c->lr=0x801EBEA4u; f_8012D5EC(c); // 801EBEA0
  c->r[3]=0u+0x80470000u; // 801EBEA4
  c->r[0]=c->r[3]+0x00004934u; // 801EBEA8
  W32(c->r[31]+0x00000058u,c->r[0]); // 801EBEAC
  c->r[3]=c->r[31]|c->r[31]; // 801EBEB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBEB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBEB8
  c->lr=c->r[0]; // 801EBEBC
  c->r[1]=c->r[1]+0x00000010u; // 801EBEC0
  return; // 801EBEC4
}

// fn_801EBEC8
void f_801EBEC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBEC8
  c->r[0]=c->lr; // 801EBECC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBED0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBED4
  c->r[31]=c->r[3]|c->r[3]; // 801EBED8
  c->lr=0x801EBEE0u; f_8012F740(c); // 801EBEDC
  c->r[3]=0u+0x80470000u; // 801EBEE0
  c->r[3]=c->r[3]+0x000049BCu; // 801EBEE4
  W32(c->r[31]+0x00000020u,c->r[3]); // 801EBEE8
  c->r[0]=c->r[3]+0x0000000Cu; // 801EBEEC
  W32(c->r[31]+0x00000288u,c->r[0]); // 801EBEF0
  c->r[0]=c->r[3]+0x00000018u; // 801EBEF4
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801EBEF8
  c->r[0]=c->r[3]+0x00000024u; // 801EBEFC
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801EBF00
  c->r[0]=c->r[3]+0x00000030u; // 801EBF04
  W32(c->r[31]+0x00000300u,c->r[0]); // 801EBF08
  c->r[3]=c->r[31]|c->r[31]; // 801EBF0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBF10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBF14
  c->lr=c->r[0]; // 801EBF18
  c->r[1]=c->r[1]+0x00000010u; // 801EBF1C
  return; // 801EBF20
}

// fn_801EBF24
void f_801EBF24(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801EBF24
  f_801EBCB4(c); return; // 801EBF28
}

// fn_801EBF2C
void f_801EBF2C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801EBF2C
  f_801EBCB4(c); return; // 801EBF30
}

// fn_801EBF34
void f_801EBF34(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801EBF34
  f_801EBCB4(c); return; // 801EBF38
}

// fn_801EBF3C
void f_801EBF3C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801EBF3C
  f_801EBCB4(c); return; // 801EBF40
}

// fn_801EBF44
void f_801EBF44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBF44
  c->r[0]=c->lr; // 801EBF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBF50
  c->r[31]=c->r[3]|c->r[3]; // 801EBF54
  c->lr=0x801EBF5Cu; f_801ECD20(c); // 801EBF58
  c->r[3]=0u+0x80470000u; // 801EBF5C
  c->r[0]=c->r[3]+0x00004A78u; // 801EBF60
  W32(c->r[31]+0x00000058u,c->r[0]); // 801EBF64
  c->r[0]=0u+0x00000000u; // 801EBF68
  c->r[3]=c->r[31]+0x00010000u; // 801EBF6C
  W32(c->r[3]+0xFFFF8198u,c->r[0]); // 801EBF70
  W32(c->r[3]+0xFFFF8168u,c->r[0]); // 801EBF74
  W32(c->r[3]+0xFFFF8180u,c->r[0]); // 801EBF78
  W32(c->r[3]+0xFFFF816Cu,c->r[0]); // 801EBF7C
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 801EBF80
  W32(c->r[3]+0xFFFF8170u,c->r[0]); // 801EBF84
  W32(c->r[3]+0xFFFF8188u,c->r[0]); // 801EBF88
  W32(c->r[3]+0xFFFF8174u,c->r[0]); // 801EBF8C
  W32(c->r[3]+0xFFFF818Cu,c->r[0]); // 801EBF90
  W32(c->r[3]+0xFFFF8178u,c->r[0]); // 801EBF94
  W32(c->r[3]+0xFFFF8190u,c->r[0]); // 801EBF98
  W32(c->r[3]+0xFFFF817Cu,c->r[0]); // 801EBF9C
  W32(c->r[3]+0xFFFF8194u,c->r[0]); // 801EBFA0
  c->r[3]=c->r[31]|c->r[31]; // 801EBFA4
  c->r[4]=0u+0x00000000u; // 801EBFA8
  c->lr=0x801EBFB0u; f_801EDEE0(c); // 801EBFAC
  c->r[3]=c->r[31]|c->r[31]; // 801EBFB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EBFB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EBFB8
  c->lr=c->r[0]; // 801EBFBC
  c->r[1]=c->r[1]+0x00000010u; // 801EBFC0
  return; // 801EBFC4
}

// fn_801EBFC8
void f_801EBFC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EBFC8
  c->r[0]=c->lr; // 801EBFCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EBFD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EBFD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801EBFD8
  c->r[30]=c->r[3]|c->r[3]; // 801EBFDC
  c->r[31]=c->r[4]|c->r[4]; // 801EBFE0
  cmps(c,0,(int32_t)c->r[3],0); // 801EBFE4
  if (crb(c,2)) { goto L_801EC008; } // 801EBFE8
  c->r[4]=0u+0x00000000u; // 801EBFEC
  c->lr=0x801EBFF4u; f_801ECF20(c); // 801EBFF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801EBFF4
  cmps(c,0,(int32_t)c->r[0],0); // 801EBFF8
  if (!crb(c,1)) { goto L_801EC008; } // 801EBFFC
  c->r[3]=c->r[30]|c->r[30]; // 801EC000
  c->lr=0x801EC008u; f_80047B20(c); // 801EC004
L_801EC008:;
  c->r[3]=c->r[30]|c->r[30]; // 801EC008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC00C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801EC010
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC014
  c->lr=c->r[0]; // 801EC018
  c->r[1]=c->r[1]+0x00000010u; // 801EC01C
  return; // 801EC020
}

// fn_801EC024
void f_801EC024(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801EC024
  c->r[0]=c->lr; // 801EC028
  W32(c->r[1]+0x00000014u,c->r[0]); // 801EC02C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801EC030
  c->r[31]=c->r[3]|c->r[3]; // 801EC034
  c->r[0]=R32(c->r[3]+0x000000B0u); // 801EC038
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801EC03C
  c->r[4]=0u+0x80430000u; // 801EC040
  c->r[0]=c->r[4]+0x000016D0u; // 801EC044
  c->r[12]=c->r[0]+c->r[5]; // 801EC048
  c->lr=0x801EC050u; f_802F09D0(c); // 801EC04C
  c->r[0]=c->r[0]|0x00000000u; // 801EC050
  c->r[3]=c->r[31]|c->r[31]; // 801EC054
  c->lr=0x801EC05Cu; f_801ED0E4(c); // 801EC058
  c->r[3]=c->r[31]|c->r[31]; // 801EC05C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801EC060
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801EC064
  c->ctr=c->r[12]; // 801EC068
  if (true) { c->lr=0x801EC070u; dispatch(c,c->ctr); } // 801EC06C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801EC070
  c->r[0]=R32(c->r[1]+0x00000014u); // 801EC074
  c->lr=c->r[0]; // 801EC078
  c->r[1]=c->r[1]+0x00000010u; // 801EC07C
  return; // 801EC080
}

// fn_801EC084
void f_801EC084(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801EC084
  f_801EDEE0(c); return; // 801EC088
}

