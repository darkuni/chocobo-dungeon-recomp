#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801C99D4
void f_801C99D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C99D4
  c->r[0]=c->lr; // 801C99D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C99DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C99E0
  c->r[31]=c->r[3]|c->r[3]; // 801C99E4
  cmps(c,0,(int32_t)c->r[3],0); // 801C99E8
  if (crb(c,2)) { goto L_801C9A00; } // 801C99EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 801C99F0
  cmps(c,0,(int32_t)c->r[0],0); // 801C99F4
  if (!crb(c,1)) { goto L_801C9A00; } // 801C99F8
  c->lr=0x801C9A00u; f_80047B20(c); // 801C99FC
L_801C9A00:;
  c->r[3]=c->r[31]|c->r[31]; // 801C9A00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9A04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9A08
  c->lr=c->r[0]; // 801C9A0C
  c->r[1]=c->r[1]+0x00000010u; // 801C9A10
  return; // 801C9A14
}

// fn_801C9A18
void f_801C9A18(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801C9A18
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9A1C
  c->r[6]=R32(c->r[3]+c->r[7]); // 801C9A20
  c->r[5]=0u+0x00000001u; // 801C9A24
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801C9A28
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801C9A2C
  c->r[0]=c->r[6]|c->r[0]; // 801C9A30
  W32(c->r[3]+c->r[7],c->r[0]); // 801C9A34
  return; // 801C9A38
}

// fn_801C9A3C
void f_801C9A3C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 801C9A3C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801C9A40
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801C9A44
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801C9A48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9A4C
  c->r[0]=R32(c->r[3]+c->r[0]); // 801C9A50
  c->r[3]=c->r[5]&c->r[0]; // 801C9A54
  c->r[0]=0u-c->r[3]; // 801C9A58
  c->r[0]=c->r[0]|c->r[3]; // 801C9A5C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801C9A60
  return; // 801C9A64
}

// fn_801C9A68
void f_801C9A68(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 801C9A68
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9A6C
  c->r[6]=R32(c->r[3]+c->r[7]); // 801C9A70
  c->r[5]=0u+0x00000001u; // 801C9A74
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 801C9A78
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 801C9A7C
  c->r[0]=~(c->r[0]|c->r[0]); // 801C9A80
  c->r[0]=c->r[6]&c->r[0]; // 801C9A84
  W32(c->r[3]+c->r[7],c->r[0]); // 801C9A88
  return; // 801C9A8C
}

// fn_801C9A90
void f_801C9A90(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801C9A90
  f_801C9A18(c); return; // 801C9A94
}

// fn_801C9A98
void f_801C9A98(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801C9A98
  f_801C9A3C(c); return; // 801C9A9C
}

// fn_801C9AA0
void f_801C9AA0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801C9AA0
  f_801C9A18(c); return; // 801C9AA4
}

// fn_801C9AA8
void f_801C9AA8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801C9AA8
  f_801C9A68(c); return; // 801C9AAC
}

// fn_801C9AB0
void f_801C9AB0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 801C9AB0
  f_801C9A3C(c); return; // 801C9AB4
}

// fn_801C9AB8
void f_801C9AB8(Ctx* __restrict c) {
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 801C9AB8
  c->r[0]=R32(c->r[3]+0x00000024u); // 801C9ABC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 801C9AC0
  c->r[5]=c->r[4]+c->r[0]; // 801C9AC4
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801C9AC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 801C9ACC
  c->r[5]=c->r[5]+c->r[0]; // 801C9AD0
  c->r[0]=R32(c->r[3]+0x00000034u); // 801C9AD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801C9AD8
  c->r[5]=c->r[5]+c->r[0]; // 801C9ADC
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801C9AE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10000); // 801C9AE4
  c->r[5]=c->r[5]+c->r[0]; // 801C9AE8
  c->r[4]=R32(c->r[3]+0x00000044u); // 801C9AEC
  c->r[3]=0u+0x00020000u; // 801C9AF0
  c->r[0]=c->r[3]+0xFFFF86A0u; // 801C9AF4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 801C9AF8
  c->r[5]=c->r[5]+c->r[0]; // 801C9AFC
  c->r[3]=c->r[5]|c->r[5]; // 801C9B00
  return; // 801C9B04
}

// fn_801C9B08
void f_801C9B08(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B08
  c->r[0]=c->lr; // 801C9B0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9B10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9B14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9B18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9B1C
  c->r[29]=c->r[4]|c->r[4]; // 801C9B20
  c->r[30]=0u+0x00000000u; // 801C9B24
  c->r[31]=c->r[3]|c->r[3]; // 801C9B28
L_801C9B2C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C9B2C
  c->r[4]=c->r[30]|c->r[30]; // 801C9B30
  c->lr=0x801C9B38u; f_8011093C(c); // 801C9B34
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801C9B38
  c->r[31]=c->r[31]+0x00000008u; // 801C9B3C
  c->r[30]=c->r[30]+0x00000001u; // 801C9B40
  cmps(c,0,(int32_t)c->r[30],6); // 801C9B44
  if (crb(c,0)) { IRQCHK(c); goto L_801C9B2C; } // 801C9B48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9B4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9B50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9B54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9B58
  c->lr=c->r[0]; // 801C9B5C
  c->r[1]=c->r[1]+0x00000020u; // 801C9B60
  return; // 801C9B64
}

// fn_801C9B68
void f_801C9B68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B68
  c->r[0]=c->lr; // 801C9B6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C9B70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C9B74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C9B78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C9B7C
  c->r[29]=c->r[3]|c->r[3]; // 801C9B80
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C9B84
  cmps(c,0,(int32_t)c->r[0],0); // 801C9B88
  if (crb(c,2)) { goto L_801C9BD4; } // 801C9B8C
  c->lr=0x801C9B94u; f_80111CF0(c); // 801C9B90
  cmps(c,0,(int32_t)c->r[3],0); // 801C9B94
  if (crb(c,2)) { goto L_801C9BA4; } // 801C9B98
  c->r[3]=0u+0x00003A98u; // 801C9B9C
  goto L_801C9BAC; // 801C9BA0
L_801C9BA4:;
  c->lr=0x801C9BA8u; f_8007B524(c); // 801C9BA4
  c->lr=0x801C9BACu; f_800A49DC(c); // 801C9BA8
L_801C9BAC:;
  c->r[31]=c->r[3]|c->r[3]; // 801C9BAC
  c->lr=0x801C9BB4u; f_80111CF0(c); // 801C9BB0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9BB4
  if (crb(c,2)) { goto L_801C9BC4; } // 801C9BB8
  c->r[3]=0u+0x00003A98u; // 801C9BBC
  goto L_801C9BCC; // 801C9BC0
L_801C9BC4:;
  c->lr=0x801C9BC8u; f_8007B524(c); // 801C9BC4
  c->lr=0x801C9BCCu; f_800A6834(c); // 801C9BC8
L_801C9BCC:;
  c->r[30]=c->r[3]|c->r[3]; // 801C9BCC
  goto L_801C9C14; // 801C9BD0
L_801C9BD4:;
  c->lr=0x801C9BD8u; f_80111CF0(c); // 801C9BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801C9BD8
  if (crb(c,2)) { goto L_801C9BE8; } // 801C9BDC
  c->r[3]=0u+0x00003A98u; // 801C9BE0
  goto L_801C9BF0; // 801C9BE4
L_801C9BE8:;
  c->lr=0x801C9BECu; f_8007B524(c); // 801C9BE8
  c->lr=0x801C9BF0u; f_800A6834(c); // 801C9BEC
L_801C9BF0:;
  c->r[31]=c->r[3]|c->r[3]; // 801C9BF0
  c->lr=0x801C9BF8u; f_80111CF0(c); // 801C9BF4
  cmps(c,0,(int32_t)c->r[3],0); // 801C9BF8
  if (crb(c,2)) { goto L_801C9C08; } // 801C9BFC
  c->r[3]=0u+0x00003A98u; // 801C9C00
  goto L_801C9C10; // 801C9C04
L_801C9C08:;
  c->lr=0x801C9C0Cu; f_8007B524(c); // 801C9C08
  c->lr=0x801C9C10u; f_800A49DC(c); // 801C9C0C
L_801C9C10:;
  c->r[30]=c->r[3]|c->r[3]; // 801C9C10
L_801C9C14:;
  c->r[3]=0u+0x000E0000u; // 801C9C14
  c->r[0]=c->r[3]+0xFFFFBBA0u; // 801C9C18
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 801C9C1C
  if (crb(c,0)) { goto L_801C9CC8; } // 801C9C20
  c->r[0]=R32(c->r[29]+0x00000050u); // 801C9C24
  cmps(c,0,(int32_t)c->r[0],0); // 801C9C28
  if (crb(c,2)) { goto L_801C9C94; } // 801C9C2C
  c->r[0]=R32(c->r[29]+0x00000054u); // 801C9C30
  cmps(c,0,(int32_t)c->r[0],2); // 801C9C34
  if (crb(c,2)) { goto L_801C9C6C; } // 801C9C38
  if (!crb(c,0)) { goto L_801C9C88; } // 801C9C3C
  cmps(c,0,(int32_t)c->r[0],1); // 801C9C40
  if (!crb(c,0)) { goto L_801C9C4C; } // 801C9C44
  goto L_801C9C88; // 801C9C48
L_801C9C4C:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 801C9C4C
  cmps(c,0,(int32_t)c->r[0],9); // 801C9C50
  if (!crb(c,2)) { goto L_801C9C88; } // 801C9C54
  c->r[3]=c->r[29]|c->r[29]; // 801C9C58
  c->r[4]=c->r[31]|c->r[31]; // 801C9C5C
  c->lr=0x801C9C64u; f_801C9B08(c); // 801C9C60
  W32(c->r[29]+0x0000004Cu,c->r[31]); // 801C9C64
  goto L_801C9C88; // 801C9C68
L_801C9C6C:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 801C9C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801C9C70
  if (!crb(c,2)) { goto L_801C9C88; } // 801C9C74
  c->r[3]=c->r[29]|c->r[29]; // 801C9C78
  c->r[4]=c->r[31]|c->r[31]; // 801C9C7C
  c->lr=0x801C9C84u; f_801C9B08(c); // 801C9C80
  W32(c->r[29]+0x0000004Cu,c->r[31]); // 801C9C84
L_801C9C88:;
  c->r[0]=0u+0x00000000u; // 801C9C88
  W32(c->r[29]+0x00000050u,c->r[0]); // 801C9C8C
  goto L_801C9CC8; // 801C9C90
L_801C9C94:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 801C9C94
  cmps(c,0,(int32_t)c->r[0],0); // 801C9C98
  if (!crb(c,2)) { goto L_801C9CB0; } // 801C9C9C
  c->r[0]=0u+0x00000001u; // 801C9CA0
  W32(c->r[29]+0x00000054u,c->r[0]); // 801C9CA4
  W32(c->r[29]+0x00000050u,c->r[0]); // 801C9CA8
  goto L_801C9CC8; // 801C9CAC
L_801C9CB0:;
  cmps(c,0,(int32_t)c->r[0],9); // 801C9CB0
  if (!crb(c,2)) { goto L_801C9CC8; } // 801C9CB4
  c->r[0]=0u+0x00000002u; // 801C9CB8
  W32(c->r[29]+0x00000054u,c->r[0]); // 801C9CBC
  c->r[0]=0u+0x00000001u; // 801C9CC0
  W32(c->r[29]+0x00000050u,c->r[0]); // 801C9CC4
L_801C9CC8:;
  c->r[0]=R32(c->r[29]+0x0000004Cu); // 801C9CC8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801C9CCC
  if (crb(c,0)) { goto L_801C9D00; } // 801C9CD0
  c->r[4]=c->r[31]+c->r[30]; // 801C9CD4
  c->r[3]=0u+0x000F0000u; // 801C9CD8
  c->r[0]=c->r[3]+0x0000423Fu; // 801C9CDC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C9CE0
  if (!crb(c,1)) { goto L_801C9CEC; } // 801C9CE4
  c->r[31]=c->r[0]-c->r[30]; // 801C9CE8
L_801C9CEC:;
  c->r[3]=c->r[29]|c->r[29]; // 801C9CEC
  c->r[4]=c->r[31]|c->r[31]; // 801C9CF0
  c->lr=0x801C9CF8u; f_801C9B08(c); // 801C9CF4
  W32(c->r[29]+0x0000004Cu,c->r[31]); // 801C9CF8
  goto L_801C9D2C; // 801C9CFC
L_801C9D00:;
  if (!crb(c,0)) { goto L_801C9D2C; } // 801C9D00
  c->r[4]=c->r[0]+c->r[30]; // 801C9D04
  c->r[3]=0u+0x000F0000u; // 801C9D08
  c->r[0]=c->r[3]+0x0000423Fu; // 801C9D0C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C9D10
  if (!crb(c,1)) { goto L_801C9D2C; } // 801C9D14
  c->r[30]=c->r[0]-c->r[30]; // 801C9D18
  c->r[3]=c->r[29]|c->r[29]; // 801C9D1C
  c->r[4]=c->r[30]|c->r[30]; // 801C9D20
  c->lr=0x801C9D28u; f_801C9B08(c); // 801C9D24
  W32(c->r[29]+0x0000004Cu,c->r[30]); // 801C9D28
L_801C9D2C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9D2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9D30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9D34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9D38
  c->lr=c->r[0]; // 801C9D3C
  c->r[1]=c->r[1]+0x00000020u; // 801C9D40
  return; // 801C9D44
}

// fn_801C9D48
void f_801C9D48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9D48
  c->r[0]=c->lr; // 801C9D4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9D50
  c->lr=0x801C9D58u; f_8006592C(c); // 801C9D54
  c->r[4]=0u+0x00000006u; // 801C9D58
  c->r[5]=0u+0x00000000u; // 801C9D5C
  c->r[6]=0u+0xFFFFFFFFu; // 801C9D60
  c->r[7]=0u+0xFFFFFFFFu; // 801C9D64
  c->lr=0x801C9D6Cu; f_80048F20(c); // 801C9D68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9D6C
  c->lr=c->r[0]; // 801C9D70
  c->r[1]=c->r[1]+0x00000010u; // 801C9D74
  return; // 801C9D78
}

// fn_801C9D7C
void f_801C9D7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9D7C
  c->r[0]=c->lr; // 801C9D80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9D84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9D88
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9D8C
  c->r[30]=c->r[3]|c->r[3]; // 801C9D90
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C9D94
  cmps(c,0,(int32_t)c->r[0],0); // 801C9D98
  if (crb(c,2)) { goto L_801C9DE0; } // 801C9D9C
  c->lr=0x801C9DA4u; f_80111CF0(c); // 801C9DA0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9DA4
  if (crb(c,2)) { goto L_801C9DB4; } // 801C9DA8
  c->r[3]=0u+0x00003A98u; // 801C9DAC
  goto L_801C9DBC; // 801C9DB0
L_801C9DB4:;
  c->lr=0x801C9DB8u; f_8007B524(c); // 801C9DB4
  c->lr=0x801C9DBCu; f_800A49DC(c); // 801C9DB8
L_801C9DBC:;
  c->r[31]=c->r[3]|c->r[3]; // 801C9DBC
  c->lr=0x801C9DC4u; f_80111CF0(c); // 801C9DC0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9DC4
  if (crb(c,2)) { goto L_801C9DD4; } // 801C9DC8
  c->r[3]=0u+0x00003A98u; // 801C9DCC
  goto L_801C9E1C; // 801C9DD0
L_801C9DD4:;
  c->lr=0x801C9DD8u; f_8007B524(c); // 801C9DD4
  c->lr=0x801C9DDCu; f_800A6834(c); // 801C9DD8
  goto L_801C9E1C; // 801C9DDC
L_801C9DE0:;
  c->lr=0x801C9DE4u; f_80111CF0(c); // 801C9DE0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9DE4
  if (crb(c,2)) { goto L_801C9DF4; } // 801C9DE8
  c->r[3]=0u+0x00003A98u; // 801C9DEC
  goto L_801C9DFC; // 801C9DF0
L_801C9DF4:;
  c->lr=0x801C9DF8u; f_8007B524(c); // 801C9DF4
  c->lr=0x801C9DFCu; f_800A6834(c); // 801C9DF8
L_801C9DFC:;
  c->r[31]=c->r[3]|c->r[3]; // 801C9DFC
  c->lr=0x801C9E04u; f_80111CF0(c); // 801C9E00
  cmps(c,0,(int32_t)c->r[3],0); // 801C9E04
  if (crb(c,2)) { goto L_801C9E14; } // 801C9E08
  c->r[3]=0u+0x00003A98u; // 801C9E0C
  goto L_801C9E1C; // 801C9E10
L_801C9E14:;
  c->lr=0x801C9E18u; f_8007B524(c); // 801C9E14
  c->lr=0x801C9E1Cu; f_800A49DC(c); // 801C9E18
L_801C9E1C:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 801C9E1C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 801C9E20
  if (crb(c,1)) { goto L_801C9E44; } // 801C9E24
  c->r[4]=c->r[0]+c->r[3]; // 801C9E28
  c->r[3]=0u+0x000F0000u; // 801C9E2C
  c->r[0]=c->r[3]+0x0000423Fu; // 801C9E30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C9E34
  if (crb(c,1)) { goto L_801C9E44; } // 801C9E38
  c->r[3]=c->r[30]|c->r[30]; // 801C9E3C
  c->lr=0x801C9E44u; f_801C9D48(c); // 801C9E40
L_801C9E44:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9E44
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9E48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9E4C
  c->lr=c->r[0]; // 801C9E50
  c->r[1]=c->r[1]+0x00000010u; // 801C9E54
  return; // 801C9E58
}

// fn_801C9E5C
void f_801C9E5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9E5C
  c->r[0]=c->lr; // 801C9E60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9E64
  c->lr=0x801C9E6Cu; f_8006592C(c); // 801C9E68
  c->r[4]=0u+0x00000000u; // 801C9E6C
  c->r[5]=0u+0x00000000u; // 801C9E70
  c->r[6]=0u+0xFFFFFFFFu; // 801C9E74
  c->r[7]=0u+0xFFFFFFFFu; // 801C9E78
  c->lr=0x801C9E80u; f_80048F20(c); // 801C9E7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9E80
  c->lr=c->r[0]; // 801C9E84
  c->r[1]=c->r[1]+0x00000010u; // 801C9E88
  return; // 801C9E8C
}

// fn_801C9E90
void f_801C9E90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9E90
  c->r[0]=c->lr; // 801C9E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9E98
  c->lr=0x801C9EA0u; f_8006592C(c); // 801C9E9C
  c->r[4]=0u+0x00000001u; // 801C9EA0
  c->r[5]=0u+0x00000000u; // 801C9EA4
  c->r[6]=0u+0xFFFFFFFFu; // 801C9EA8
  c->r[7]=0u+0xFFFFFFFFu; // 801C9EAC
  c->lr=0x801C9EB4u; f_80048F20(c); // 801C9EB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9EB4
  c->lr=c->r[0]; // 801C9EB8
  c->r[1]=c->r[1]+0x00000010u; // 801C9EBC
  return; // 801C9EC0
}

// fn_801C9EC4
void f_801C9EC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9EC4
  c->r[0]=c->lr; // 801C9EC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9ECC
  c->lr=0x801C9ED4u; f_8006592C(c); // 801C9ED0
  c->r[4]=0u+0x00000004u; // 801C9ED4
  c->r[5]=0u+0x00000000u; // 801C9ED8
  c->r[6]=0u+0xFFFFFFFFu; // 801C9EDC
  c->r[7]=0u+0xFFFFFFFFu; // 801C9EE0
  c->lr=0x801C9EE8u; f_80048F20(c); // 801C9EE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9EE8
  c->lr=c->r[0]; // 801C9EEC
  c->r[1]=c->r[1]+0x00000010u; // 801C9EF0
  return; // 801C9EF4
}

// fn_801C9EF8
void f_801C9EF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9EF8
  c->r[0]=c->lr; // 801C9EFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9F00
  c->lr=0x801C9F08u; f_8006592C(c); // 801C9F04
  c->r[4]=0u+0x00000007u; // 801C9F08
  c->r[5]=0u+0x00000000u; // 801C9F0C
  c->r[6]=0u+0xFFFFFFFFu; // 801C9F10
  c->r[7]=0u+0xFFFFFFFFu; // 801C9F14
  c->lr=0x801C9F1Cu; f_80048F20(c); // 801C9F18
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9F1C
  c->lr=c->r[0]; // 801C9F20
  c->r[1]=c->r[1]+0x00000010u; // 801C9F24
  return; // 801C9F28
}

// fn_801C9F2C
void f_801C9F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9F2C
  c->r[0]=c->lr; // 801C9F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9F34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9F38
  c->lr=0x801C9F40u; f_8011B03C(c); // 801C9F3C
  c->r[31]=c->r[3]|c->r[3]; // 801C9F40
  c->lr=0x801C9F48u; f_8006592C(c); // 801C9F44
  c->r[4]=0u+0x00000009u; // 801C9F48
  c->r[5]=0u+0x00000000u; // 801C9F4C
  c->r[6]=c->r[31]|c->r[31]; // 801C9F50
  c->r[7]=0u+0xFFFFFFFFu; // 801C9F54
  c->lr=0x801C9F5Cu; f_80048F20(c); // 801C9F58
  c->lr=0x801C9F60u; f_8006592C(c); // 801C9F5C
  c->r[4]=0u+0x00000009u; // 801C9F60
  c->r[5]=0u+0x00000000u; // 801C9F64
  c->r[6]=0u+0xFFFFFFFFu; // 801C9F68
  c->r[7]=0u+0xFFFFFFFFu; // 801C9F6C
  c->lr=0x801C9F74u; f_80048F20(c); // 801C9F70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9F74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9F78
  c->lr=c->r[0]; // 801C9F7C
  c->r[1]=c->r[1]+0x00000010u; // 801C9F80
  return; // 801C9F84
}

// fn_801C9F88
void f_801C9F88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9F88
  c->r[0]=c->lr; // 801C9F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9F94
  c->r[31]=c->r[3]|c->r[3]; // 801C9F98
  c->lr=0x801C9FA0u; f_801C9D48(c); // 801C9F9C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801C9FA0
  c->r[3]=c->r[3]+0x00000001u; // 801C9FA4
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801C9FA8
  c->r[4]=0u+0x00000000u; // 801C9FAC
  c->r[5]=R32(c->r[31]+0x00000010u); // 801C9FB0
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C9FB4
  c->lr=0x801C9FBCu; f_800EEE08(c); // 801C9FB8
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801C9FBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9FC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9FC4
  c->lr=c->r[0]; // 801C9FC8
  c->r[1]=c->r[1]+0x00000010u; // 801C9FCC
  return; // 801C9FD0
}

// fn_801C9FD4
void f_801C9FD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9FD4
  c->r[0]=c->lr; // 801C9FD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9FDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9FE0
  c->r[31]=c->r[3]|c->r[3]; // 801C9FE4
  c->lr=0x801C9FECu; f_801C9D48(c); // 801C9FE8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801C9FEC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C9FF0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801C9FF4
  c->r[4]=0u+0x00000000u; // 801C9FF8
  c->r[5]=R32(c->r[31]+0x00000010u); // 801C9FFC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801CA000
  c->lr=0x801CA008u; f_800EEE08(c); // 801CA004
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801CA008
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA00C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA010
  c->lr=c->r[0]; // 801CA014
  c->r[1]=c->r[1]+0x00000010u; // 801CA018
  return; // 801CA01C
}

// fn_801CA020
void f_801CA020(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801CA020
  return; // 801CA024
}

// fn_801CA028
void f_801CA028(Ctx* __restrict c) {
  W32(c->r[3]+0x00000010u,c->r[4]); // 801CA028
  return; // 801CA02C
}

// fn_801CA030
void f_801CA030(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 801CA030
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801CA034
  W32(c->r[3]+0x00000010u,c->r[0]); // 801CA038
  return; // 801CA03C
}

// fn_801CA040
void f_801CA040(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA040
  c->r[0]=c->lr; // 801CA044
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA04C
  c->r[31]=c->r[3]|c->r[3]; // 801CA050
  c->lr=0x801CA058u; f_801C9D48(c); // 801CA054
  c->r[3]=R32(c->r[31]+0x00000014u); // 801CA058
  c->r[3]=c->r[3]+0x00000001u; // 801CA05C
  W32(c->r[31]+0x00000014u,c->r[3]); // 801CA060
  c->r[4]=0u+0x00000000u; // 801CA064
  c->r[5]=R32(c->r[31]+0x00000018u); // 801CA068
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801CA06C
  c->lr=0x801CA074u; f_800EEE08(c); // 801CA070
  W32(c->r[31]+0x00000014u,c->r[3]); // 801CA074
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA078
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA07C
  c->lr=c->r[0]; // 801CA080
  c->r[1]=c->r[1]+0x00000010u; // 801CA084
  return; // 801CA088
}

// fn_801CA08C
void f_801CA08C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA08C
  c->r[0]=c->lr; // 801CA090
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA098
  c->r[31]=c->r[3]|c->r[3]; // 801CA09C
  c->lr=0x801CA0A4u; f_801C9D48(c); // 801CA0A0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801CA0A4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801CA0A8
  W32(c->r[31]+0x00000014u,c->r[3]); // 801CA0AC
  c->r[4]=0u+0x00000000u; // 801CA0B0
  c->r[5]=R32(c->r[31]+0x00000018u); // 801CA0B4
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801CA0B8
  c->lr=0x801CA0C0u; f_800EEE08(c); // 801CA0BC
  W32(c->r[31]+0x00000014u,c->r[3]); // 801CA0C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA0C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA0C8
  c->lr=c->r[0]; // 801CA0CC
  c->r[1]=c->r[1]+0x00000010u; // 801CA0D0
  return; // 801CA0D4
}

// fn_801CA0D8
void f_801CA0D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA0D8
  c->r[0]=c->lr; // 801CA0DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA0E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA0E4
  c->r[31]=c->r[3]|c->r[3]; // 801CA0E8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CA0EC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CA0F0
  c->r[5]=c->r[3]+c->r[0]; // 801CA0F4
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801CA0F8
  c->r[0]=c->r[4]+0x00000001u; // 801CA0FC
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801CA100
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CA104
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CA108
  c->r[5]=c->r[3]+c->r[0]; // 801CA10C
  c->r[3]=R32(c->r[5]+0x0000001Cu); // 801CA110
  c->r[4]=0u+0x00000000u; // 801CA114
  c->r[5]=R32(c->r[5]+0x00000020u); // 801CA118
  c->lr=0x801CA120u; f_800EEE08(c); // 801CA11C
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CA120
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CA124
  c->r[4]=c->r[31]+c->r[0]; // 801CA128
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801CA12C
  c->r[3]=c->r[31]|c->r[31]; // 801CA130
  c->lr=0x801CA138u; f_801C9AB8(c); // 801CA134
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801CA138
  c->r[3]=c->r[31]|c->r[31]; // 801CA13C
  c->lr=0x801CA144u; f_801C9D7C(c); // 801CA140
  c->r[3]=c->r[31]|c->r[31]; // 801CA144
  c->lr=0x801CA14Cu; f_801C9B68(c); // 801CA148
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA14C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA150
  c->lr=c->r[0]; // 801CA154
  c->r[1]=c->r[1]+0x00000010u; // 801CA158
  return; // 801CA15C
}

// fn_801CA160
void f_801CA160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA160
  c->r[0]=c->lr; // 801CA164
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA16C
  c->r[31]=c->r[3]|c->r[3]; // 801CA170
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CA174
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CA178
  c->r[5]=c->r[3]+c->r[0]; // 801CA17C
  c->r[4]=R32(c->r[5]+0x0000001Cu); // 801CA180
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801CA184
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801CA188
  c->r[0]=R32(c->r[3]+0x00000014u); // 801CA18C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CA190
  c->r[5]=c->r[3]+c->r[0]; // 801CA194
  c->r[3]=R32(c->r[5]+0x0000001Cu); // 801CA198
  c->r[4]=0u+0x00000000u; // 801CA19C
  c->r[5]=R32(c->r[5]+0x00000020u); // 801CA1A0
  c->lr=0x801CA1A8u; f_800EEE08(c); // 801CA1A4
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CA1A8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801CA1AC
  c->r[4]=c->r[31]+c->r[0]; // 801CA1B0
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801CA1B4
  c->r[3]=c->r[31]|c->r[31]; // 801CA1B8
  c->lr=0x801CA1C0u; f_801C9AB8(c); // 801CA1BC
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 801CA1C0
  c->r[3]=c->r[31]|c->r[31]; // 801CA1C4
  c->lr=0x801CA1CCu; f_801C9D48(c); // 801CA1C8
  c->r[3]=c->r[31]|c->r[31]; // 801CA1CC
  c->lr=0x801CA1D4u; f_801C9B68(c); // 801CA1D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA1D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA1D8
  c->lr=c->r[0]; // 801CA1DC
  c->r[1]=c->r[1]+0x00000010u; // 801CA1E0
  return; // 801CA1E4
}

// fn_801CA1E8
void f_801CA1E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 801CA1E8
  return; // 801CA1EC
}

// fn_801CA1F0
void f_801CA1F0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 801CA1F0
  return; // 801CA1F4
}

// fn_801CA1F8
void f_801CA1F8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 801CA1F8
  W32(c->r[3]+0x00000014u,c->r[4]); // 801CA1FC
  c->r[0]=0u+0x00000006u; // 801CA200
  W32(c->r[3]+0x00000018u,c->r[0]); // 801CA204
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 801CA208
  c->r[0]=0u+0x00000009u; // 801CA20C
  W32(c->r[3]+0x00000020u,c->r[0]); // 801CA210
  W32(c->r[3]+0x00000024u,c->r[4]); // 801CA214
  W32(c->r[3]+0x00000028u,c->r[0]); // 801CA218
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 801CA21C
  W32(c->r[3]+0x00000030u,c->r[0]); // 801CA220
  W32(c->r[3]+0x00000034u,c->r[4]); // 801CA224
  W32(c->r[3]+0x00000038u,c->r[0]); // 801CA228
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801CA22C
  W32(c->r[3]+0x00000040u,c->r[0]); // 801CA230
  W32(c->r[3]+0x00000044u,c->r[4]); // 801CA234
  W32(c->r[3]+0x00000048u,c->r[0]); // 801CA238
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 801CA23C
  c->r[0]=0u+0x00000001u; // 801CA240
  W32(c->r[3]+0x00000050u,c->r[0]); // 801CA244
  W32(c->r[3]+0x00000054u,c->r[0]); // 801CA248
  return; // 801CA24C
}

// fn_801CA250
void f_801CA250(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA250
  c->r[0]=c->lr; // 801CA254
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA258
  c->lr=0x801CA260u; f_80111CF0(c); // 801CA25C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA260
  if (crb(c,2)) { goto L_801CA270; } // 801CA264
  c->r[3]=0u+0x00003A98u; // 801CA268
  goto L_801CA278; // 801CA26C
L_801CA270:;
  c->lr=0x801CA274u; f_8007B524(c); // 801CA270
  c->lr=0x801CA278u; f_800A49DC(c); // 801CA274
L_801CA278:;
  c->r[4]=0u+0x00000001u; // 801CA278
  c->r[0]=cntlz(c->r[3]); // 801CA27C
  c->r[3]=rotl(c->r[4],c->r[0]&31)&0x00000001u; // 801CA280
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA284
  c->lr=c->r[0]; // 801CA288
  c->r[1]=c->r[1]+0x00000010u; // 801CA28C
  return; // 801CA290
}

// fn_801CA294
void f_801CA294(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA294
  c->r[0]=c->lr; // 801CA298
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA29C
  c->lr=0x801CA2A4u; f_80111CF0(c); // 801CA2A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CA2A4
  if (crb(c,2)) { goto L_801CA2B4; } // 801CA2A8
  c->r[3]=0u+0x00003A98u; // 801CA2AC
  goto L_801CA2BC; // 801CA2B0
L_801CA2B4:;
  c->lr=0x801CA2B8u; f_8007B524(c); // 801CA2B4
  c->lr=0x801CA2BCu; f_800A6834(c); // 801CA2B8
L_801CA2BC:;
  c->r[4]=0u+0x000F0000u; // 801CA2BC
  c->r[0]=c->r[4]+0x0000423Fu; // 801CA2C0
  c->r[5]=sraw(c,c->r[3],31); // 801CA2C4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801CA2C8
  c->r[0]=addc(c,~c->r[0],c->r[3],1); // 801CA2CC
  c->r[3]=addc(c,c->r[5],c->r[4],c->xer_ca); // 801CA2D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA2D4
  c->lr=c->r[0]; // 801CA2D8
  c->r[1]=c->r[1]+0x00000010u; // 801CA2DC
  return; // 801CA2E0
}

// fn_801CA2E4
void f_801CA2E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA2E4
  c->r[0]=c->lr; // 801CA2E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA2EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA2F0
  c->r[31]=c->r[3]|c->r[3]; // 801CA2F4
  c->lr=0x801CA2FCu; f_80111CF0(c); // 801CA2F8
  cmps(c,0,(int32_t)c->r[3],0); // 801CA2FC
  if (crb(c,2)) { goto L_801CA30C; } // 801CA300
  c->r[3]=0u+0x00003A98u; // 801CA304
  goto L_801CA314; // 801CA308
L_801CA30C:;
  c->lr=0x801CA310u; f_8007B524(c); // 801CA30C
  c->lr=0x801CA314u; f_800A49DC(c); // 801CA310
L_801CA314:;
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 801CA314
  c->r[0]=c->r[4]^c->r[3]; // 801CA318
  c->r[3]=sraw(c,c->r[0],1); // 801CA31C
  c->r[0]=c->r[0]&c->r[4]; // 801CA320
  c->r[0]=c->r[3]-c->r[0]; // 801CA324
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801CA328
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA32C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA330
  c->lr=c->r[0]; // 801CA334
  c->r[1]=c->r[1]+0x00000010u; // 801CA338
  return; // 801CA33C
}

// fn_801CA340
void f_801CA340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA340
  c->r[0]=c->lr; // 801CA344
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA34C
  c->r[31]=c->r[3]|c->r[3]; // 801CA350
  c->lr=0x801CA358u; f_80111CF0(c); // 801CA354
  cmps(c,0,(int32_t)c->r[3],0); // 801CA358
  if (crb(c,2)) { goto L_801CA368; } // 801CA35C
  c->r[3]=0u+0x00000000u; // 801CA360
  goto L_801CA374; // 801CA364
L_801CA368:;
  c->lr=0x801CA36Cu; f_8007B524(c); // 801CA368
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 801CA36C
  c->lr=0x801CA374u; f_800A6824(c); // 801CA370
L_801CA374:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA374
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA378
  c->lr=c->r[0]; // 801CA37C
  c->r[1]=c->r[1]+0x00000010u; // 801CA380
  return; // 801CA384
}

// fn_801CA388
void f_801CA388(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA388
  c->r[0]=c->lr; // 801CA38C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA390
  c->lr=0x801CA398u; f_80111CF0(c); // 801CA394
  cmps(c,0,(int32_t)c->r[3],0); // 801CA398
  if (crb(c,2)) { goto L_801CA3A8; } // 801CA39C
  c->r[3]=0u+0x00003A98u; // 801CA3A0
  goto L_801CA3B0; // 801CA3A4
L_801CA3A8:;
  c->lr=0x801CA3ACu; f_8007B524(c); // 801CA3A8
  c->lr=0x801CA3B0u; f_800A49DC(c); // 801CA3AC
L_801CA3B0:;
  c->r[4]=0u+0x000F0000u; // 801CA3B0
  c->r[0]=c->r[4]+0x0000423Fu; // 801CA3B4
  c->r[5]=sraw(c,c->r[3],31); // 801CA3B8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801CA3BC
  c->r[0]=addc(c,~c->r[0],c->r[3],1); // 801CA3C0
  c->r[3]=addc(c,c->r[5],c->r[4],c->xer_ca); // 801CA3C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA3C8
  c->lr=c->r[0]; // 801CA3CC
  c->r[1]=c->r[1]+0x00000010u; // 801CA3D0
  return; // 801CA3D4
}

// fn_801CA3D8
void f_801CA3D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA3D8
  c->r[0]=c->lr; // 801CA3DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA3E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA3E4
  c->r[31]=c->r[3]|c->r[3]; // 801CA3E8
  c->lr=0x801CA3F0u; f_80111CF0(c); // 801CA3EC
  cmps(c,0,(int32_t)c->r[3],0); // 801CA3F0
  if (crb(c,2)) { goto L_801CA400; } // 801CA3F4
  c->r[3]=0u+0x00000000u; // 801CA3F8
  goto L_801CA40C; // 801CA3FC
L_801CA400:;
  c->lr=0x801CA404u; f_8007B524(c); // 801CA400
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 801CA404
  c->lr=0x801CA40Cu; f_800A682C(c); // 801CA408
L_801CA40C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA40C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA410
  c->lr=c->r[0]; // 801CA414
  c->r[1]=c->r[1]+0x00000010u; // 801CA418
  return; // 801CA41C
}

// fn_801CA420
void f_801CA420(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x0000004Cu); // 801CA420
  c->r[3]=0u+0x00000001u; // 801CA424
  c->r[0]=cntlz(c->r[0]); // 801CA428
  c->r[3]=rotl(c->r[3],c->r[0]&31)&0x00000001u; // 801CA42C
  return; // 801CA430
}

// fn_801CA434
void f_801CA434(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CA434
  return; // 801CA438
}

// fn_801CA43C
void f_801CA43C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA43C
  c->r[0]=c->lr; // 801CA440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA448
  c->r[31]=c->r[3]|c->r[3]; // 801CA44C
  c->lr=0x801CA454u; f_80111CF0(c); // 801CA450
  cmps(c,0,(int32_t)c->r[3],0); // 801CA454
  if (!crb(c,2)) { goto L_801CA4A0; } // 801CA458
  c->r[0]=R32(c->r[31]+0x00000004u); // 801CA45C
  cmps(c,0,(int32_t)c->r[0],0); // 801CA460
  if (crb(c,2)) { goto L_801CA488; } // 801CA464
  c->lr=0x801CA46Cu; f_8007B524(c); // 801CA468
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 801CA46C
  c->r[4]=0u-c->r[0]; // 801CA470
  c->lr=0x801CA478u; f_800A4A04(c); // 801CA474
  c->lr=0x801CA47Cu; f_8007B524(c); // 801CA478
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 801CA47C
  c->lr=0x801CA484u; f_800A67B4(c); // 801CA480
  goto L_801CA4A0; // 801CA484
L_801CA488:;
  c->lr=0x801CA48Cu; f_8007B524(c); // 801CA488
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 801CA48C
  c->lr=0x801CA494u; f_800A4A04(c); // 801CA490
  c->lr=0x801CA498u; f_8007B524(c); // 801CA494
  c->r[4]=R32(c->r[31]+0x0000004Cu); // 801CA498
  c->lr=0x801CA4A0u; f_800A67BC(c); // 801CA49C
L_801CA4A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA4A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA4A4
  c->lr=c->r[0]; // 801CA4A8
  c->r[1]=c->r[1]+0x00000010u; // 801CA4AC
  return; // 801CA4B0
}

// fn_801CA4B4
void f_801CA4B4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],1); // 801CA4B4
  if (crb(c,2)) { goto L_801CA4E4; } // 801CA4B8
  if (!crb(c,0)) { goto L_801CA4CC; } // 801CA4BC
  cmps(c,0,(int32_t)c->r[4],0); // 801CA4C0
  if (!crb(c,0)) { goto L_801CA4D8; } // 801CA4C4
  return; // 801CA4C8
L_801CA4CC:;
  cmps(c,0,(int32_t)c->r[4],3); // 801CA4CC
  if (!crb(c,0)) return; // 801CA4D0
  goto L_801CA4F0; // 801CA4D4
L_801CA4D8:;
  c->r[0]=0u+0x00000020u; // 801CA4D8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA4DC
  return; // 801CA4E0
L_801CA4E4:;
  c->r[0]=0u+0x00000022u; // 801CA4E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA4E8
  return; // 801CA4EC
L_801CA4F0:;
  c->r[0]=0u+0x00000023u; // 801CA4F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA4F4
  return; // 801CA4F8
}

// fn_801CA4FC
void f_801CA4FC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],2); // 801CA4FC
  if (crb(c,2)) { goto L_801CA53C; } // 801CA500
  if (!crb(c,0)) { goto L_801CA518; } // 801CA504
  cmps(c,0,(int32_t)c->r[4],0); // 801CA508
  if (crb(c,2)) { goto L_801CA524; } // 801CA50C
  if (!crb(c,0)) { goto L_801CA530; } // 801CA510
  return; // 801CA514
L_801CA518:;
  cmps(c,0,(int32_t)c->r[4],4); // 801CA518
  if (!crb(c,0)) return; // 801CA51C
  goto L_801CA548; // 801CA520
L_801CA524:;
  c->r[0]=0u+0x0000001Fu; // 801CA524
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA528
  return; // 801CA52C
L_801CA530:;
  c->r[0]=0u+0x00000021u; // 801CA530
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA534
  return; // 801CA538
L_801CA53C:;
  c->r[0]=0u+0x00000025u; // 801CA53C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA540
  return; // 801CA544
L_801CA548:;
  c->r[0]=0u+0x00000024u; // 801CA548
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CA54C
  return; // 801CA550
}

// fn_801CA554
void f_801CA554(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 801CA554
  return; // 801CA558
}

// fn_801CA55C
void f_801CA55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA55C
  c->r[0]=c->lr; // 801CA560
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA564
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA568
  c->r[31]=c->r[4]|c->r[4]; // 801CA56C
  c->lr=0x801CA574u; f_8007B524(c); // 801CA570
  c->r[4]=c->r[31]|c->r[31]; // 801CA574
  c->lr=0x801CA57Cu; f_800A2EEC(c); // 801CA578
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA580
  c->lr=c->r[0]; // 801CA584
  c->r[1]=c->r[1]+0x00000010u; // 801CA588
  return; // 801CA58C
}

// fn_801CA590
void f_801CA590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA590
  c->r[0]=c->lr; // 801CA594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA598
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA59C
  c->r[31]=c->r[4]|c->r[4]; // 801CA5A0
  c->lr=0x801CA5A8u; f_80111CF0(c); // 801CA5A4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA5A8
  if (!crb(c,2)) { goto L_801CA5BC; } // 801CA5AC
  c->lr=0x801CA5B4u; f_8007B524(c); // 801CA5B0
  c->r[4]=c->r[31]|c->r[31]; // 801CA5B4
  c->lr=0x801CA5BCu; f_800A6EE8(c); // 801CA5B8
L_801CA5BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA5BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA5C0
  c->lr=c->r[0]; // 801CA5C4
  c->r[1]=c->r[1]+0x00000010u; // 801CA5C8
  return; // 801CA5CC
}

// fn_801CA5D0
void f_801CA5D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA5D0
  c->r[0]=c->lr; // 801CA5D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA5D8
  c->lr=0x801CA5E0u; f_80111CF0(c); // 801CA5DC
  cmps(c,0,(int32_t)c->r[3],0); // 801CA5E0
  if (!crb(c,2)) { goto L_801CA5F0; } // 801CA5E4
  c->lr=0x801CA5ECu; f_8007B524(c); // 801CA5E8
  c->lr=0x801CA5F0u; f_800A6EEC(c); // 801CA5EC
L_801CA5F0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA5F0
  c->lr=c->r[0]; // 801CA5F4
  c->r[1]=c->r[1]+0x00000010u; // 801CA5F8
  return; // 801CA5FC
}

// fn_801CA600
void f_801CA600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA600
  c->r[0]=c->lr; // 801CA604
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA60C
  c->r[31]=c->r[3]|c->r[3]; // 801CA610
  c->r[4]=0u+0x00000000u; // 801CA614
  c->r[5]=0u+0x00000004u; // 801CA618
  c->lr=0x801CA620u; f_800060B8(c); // 801CA61C
  c->r[0]=0u+0x00000000u; // 801CA620
  W32(c->r[31]+0x00000008u,c->r[0]); // 801CA624
  c->r[0]=0u+0x00000001u; // 801CA628
  W32(c->r[31]+0x00000004u,c->r[0]); // 801CA62C
  c->r[3]=c->r[31]|c->r[31]; // 801CA630
  c->lr=0x801CA638u; f_801CA030(c); // 801CA634
  c->r[3]=c->r[31]|c->r[31]; // 801CA638
  c->lr=0x801CA640u; f_801CA1F8(c); // 801CA63C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA640
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA644
  c->lr=c->r[0]; // 801CA648
  c->r[1]=c->r[1]+0x00000010u; // 801CA64C
  return; // 801CA650
}

// fn_801CA654
void f_801CA654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA654
  c->r[0]=c->lr; // 801CA658
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA65C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA660
  c->r[31]=c->r[3]|c->r[3]; // 801CA664
  c->lr=0x801CA66Cu; f_8012FAAC(c); // 801CA668
  c->r[3]=0u+0x80470000u; // 801CA66C
  c->r[0]=c->r[3]+0x000021E0u; // 801CA670
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CA674
  c->r[0]=0u+0x00000000u; // 801CA678
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801CA67C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801CA680
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801CA684
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801CA688
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801CA68C
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801CA690
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801CA694
  c->r[3]=c->r[31]|c->r[31]; // 801CA698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA69C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA6A0
  c->lr=c->r[0]; // 801CA6A4
  c->r[1]=c->r[1]+0x00000010u; // 801CA6A8
  return; // 801CA6AC
}

// fn_801CA6B0
void f_801CA6B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA6B0
  c->r[0]=c->lr; // 801CA6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA6B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CA6BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CA6C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CA6C4
  c->r[29]=c->r[3]|c->r[3]; // 801CA6C8
  c->lr=0x801CA6D0u; f_80056B5C(c); // 801CA6CC
  c->r[30]=c->r[3]|c->r[3]; // 801CA6D0
  c->lr=0x801CA6D8u; f_801F1340(c); // 801CA6D4
  c->lr=0x801CA6DCu; f_80056B54(c); // 801CA6D8
  c->r[3]=0u+0x000000D4u; // 801CA6DC
  c->lr=0x801CA6E4u; f_80047B64(c); // 801CA6E0
  c->r[31]=c->r[3]|c->r[3]; // 801CA6E4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA6E8
  if (crb(c,2)) { goto L_801CA6F4; } // 801CA6EC
  c->lr=0x801CA6F4u; f_801CB62C(c); // 801CA6F0
L_801CA6F4:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801CA6F4
  c->r[3]=c->r[30]|c->r[30]; // 801CA6F8
  c->lr=0x801CA700u; f_80056B54(c); // 801CA6FC
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CA700
  c->r[4]=0u+0x000001FBu; // 801CA704
  c->lr=0x801CA70Cu; f_80118C88(c); // 801CA708
  c->lr=0x801CA710u; f_80056B5C(c); // 801CA70C
  c->r[30]=c->r[3]|c->r[3]; // 801CA710
  c->lr=0x801CA718u; f_801F1340(c); // 801CA714
  c->lr=0x801CA71Cu; f_80056B54(c); // 801CA718
  c->r[3]=0u+0x000000ECu; // 801CA71C
  c->lr=0x801CA724u; f_80047B64(c); // 801CA720
  c->r[31]=c->r[3]|c->r[3]; // 801CA724
  cmps(c,0,(int32_t)c->r[3],0); // 801CA728
  if (crb(c,2)) { goto L_801CA734; } // 801CA72C
  c->lr=0x801CA734u; f_801CD548(c); // 801CA730
L_801CA734:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801CA734
  c->r[3]=c->r[30]|c->r[30]; // 801CA738
  c->lr=0x801CA740u; f_80056B54(c); // 801CA73C
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CA740
  c->lr=0x801CA748u; f_801C6788(c); // 801CA744
  c->lr=0x801CA74Cu; f_80056B5C(c); // 801CA748
  c->r[30]=c->r[3]|c->r[3]; // 801CA74C
  c->lr=0x801CA754u; f_801F1340(c); // 801CA750
  c->lr=0x801CA758u; f_80056B54(c); // 801CA754
  c->r[3]=0u+0x000000C8u; // 801CA758
  c->lr=0x801CA760u; f_80047B64(c); // 801CA75C
  c->r[31]=c->r[3]|c->r[3]; // 801CA760
  cmps(c,0,(int32_t)c->r[3],0); // 801CA764
  if (crb(c,2)) { goto L_801CA770; } // 801CA768
  c->lr=0x801CA770u; f_801CC634(c); // 801CA76C
L_801CA770:;
  W32(c->r[29]+0x000000CCu,c->r[31]); // 801CA770
  c->r[3]=c->r[30]|c->r[30]; // 801CA774
  c->lr=0x801CA77Cu; f_80056B54(c); // 801CA778
  c->r[3]=R32(c->r[29]+0x000000CCu); // 801CA77C
  c->lr=0x801CA784u; f_801CC67C(c); // 801CA780
  c->lr=0x801CA788u; f_80056B5C(c); // 801CA784
  c->r[30]=c->r[3]|c->r[3]; // 801CA788
  c->lr=0x801CA790u; f_801F1340(c); // 801CA78C
  c->lr=0x801CA794u; f_80056B54(c); // 801CA790
  c->r[3]=0u+0x000000C8u; // 801CA794
  c->lr=0x801CA79Cu; f_80047B64(c); // 801CA798
  c->r[31]=c->r[3]|c->r[3]; // 801CA79C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA7A0
  if (crb(c,2)) { goto L_801CA7AC; } // 801CA7A4
  c->lr=0x801CA7ACu; f_801CBB20(c); // 801CA7A8
L_801CA7AC:;
  W32(c->r[29]+0x000000D0u,c->r[31]); // 801CA7AC
  c->r[3]=c->r[30]|c->r[30]; // 801CA7B0
  c->lr=0x801CA7B8u; f_80056B54(c); // 801CA7B4
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801CA7B8
  c->lr=0x801CA7C0u; f_801CBB68(c); // 801CA7BC
  c->lr=0x801CA7C4u; f_80056B5C(c); // 801CA7C0
  c->r[30]=c->r[3]|c->r[3]; // 801CA7C4
  c->lr=0x801CA7CCu; f_801F1340(c); // 801CA7C8
  c->lr=0x801CA7D0u; f_80056B54(c); // 801CA7CC
  c->r[3]=0u+0x00000B58u; // 801CA7D0
  c->lr=0x801CA7D8u; f_80047B64(c); // 801CA7D4
  c->r[31]=c->r[3]|c->r[3]; // 801CA7D8
  cmps(c,0,(int32_t)c->r[3],0); // 801CA7DC
  if (crb(c,2)) { goto L_801CA7E8; } // 801CA7E0
  c->lr=0x801CA7E8u; f_8013F974(c); // 801CA7E4
L_801CA7E8:;
  W32(c->r[29]+0x000000C8u,c->r[31]); // 801CA7E8
  c->r[3]=c->r[30]|c->r[30]; // 801CA7EC
  c->lr=0x801CA7F4u; f_80056B54(c); // 801CA7F0
  c->lr=0x801CA7F8u; f_80114E10(c); // 801CA7F4
  c->lr=0x801CA7FCu; f_801165B0(c); // 801CA7F8
  c->r[4]=c->r[3]|c->r[3]; // 801CA7FC
  c->r[3]=R32(c->r[29]+0x000000C8u); // 801CA800
  c->lr=0x801CA808u; f_80114AE0(c); // 801CA804
  c->r[3]=R32(c->r[29]+0x000000C8u); // 801CA808
  c->r[4]=0u+0x00000000u; // 801CA80C
  c->lr=0x801CA814u; f_80114AD8(c); // 801CA810
  c->r[3]=R32(c->r[29]+0x000000C8u); // 801CA814
  c->r[4]=0u+0x0000000Au; // 801CA818
  c->lr=0x801CA820u; f_80112704(c); // 801CA81C
  c->r[3]=R32(c->r[29]+0x000000C8u); // 801CA820
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CA824
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801CA828
  c->ctr=c->r[12]; // 801CA82C
  if (true) { c->lr=0x801CA834u; dispatch(c,c->ctr); } // 801CA830
  c->lr=0x801CA838u; f_80056B5C(c); // 801CA834
  c->r[30]=c->r[3]|c->r[3]; // 801CA838
  c->lr=0x801CA840u; f_801F1340(c); // 801CA83C
  c->lr=0x801CA844u; f_80056B54(c); // 801CA840
  c->r[3]=0u+0x00000B58u; // 801CA844
  c->lr=0x801CA84Cu; f_80047B64(c); // 801CA848
  c->r[31]=c->r[3]|c->r[3]; // 801CA84C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA850
  if (crb(c,2)) { goto L_801CA85C; } // 801CA854
  c->lr=0x801CA85Cu; f_801CB89C(c); // 801CA858
L_801CA85C:;
  W32(c->r[29]+0x000000D4u,c->r[31]); // 801CA85C
  c->r[3]=c->r[30]|c->r[30]; // 801CA860
  c->lr=0x801CA868u; f_80056B54(c); // 801CA864
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CA868
  c->r[4]=0u+0x00000000u; // 801CA86C
  c->lr=0x801CA874u; f_80114AE0(c); // 801CA870
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CA874
  c->r[4]=0u+0x00000000u; // 801CA878
  c->lr=0x801CA880u; f_801169C8(c); // 801CA87C
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CA880
  c->r[4]=0u+0x00000002u; // 801CA884
  c->lr=0x801CA88Cu; f_80112704(c); // 801CA888
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CA88C
  c->r[4]=0u+0x00000009u; // 801CA890
  c->lr=0x801CA898u; f_8011270C(c); // 801CA894
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CA898
  c->r[4]=0u+0x00000000u; // 801CA89C
  c->lr=0x801CA8A4u; f_80112724(c); // 801CA8A0
  c->r[3]=R32(c->r[29]+0x000000D4u); // 801CA8A4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CA8A8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801CA8AC
  c->ctr=c->r[12]; // 801CA8B0
  if (true) { c->lr=0x801CA8B8u; dispatch(c,c->ctr); } // 801CA8B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CA8B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CA8BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CA8C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA8C4
  c->lr=c->r[0]; // 801CA8C8
  c->r[1]=c->r[1]+0x00000020u; // 801CA8CC
  return; // 801CA8D0
}

// fn_801CA8D4
void f_801CA8D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA8D4
  c->r[0]=c->lr; // 801CA8D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA8DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA8E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA8E4
  c->r[30]=c->r[3]|c->r[3]; // 801CA8E8
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CA8EC
  cmps(c,0,(int32_t)c->r[3],0); // 801CA8F0
  if (crb(c,2)) { goto L_801CA93C; } // 801CA8F4
  c->lr=0x801CA8FCu; f_80118E58(c); // 801CA8F8
  c->lr=0x801CA900u; f_80056B5C(c); // 801CA8FC
  c->r[31]=c->r[3]|c->r[3]; // 801CA900
  c->lr=0x801CA908u; f_801F1340(c); // 801CA904
  c->lr=0x801CA90Cu; f_80056B54(c); // 801CA908
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CA90C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA910
  if (crb(c,2)) { goto L_801CA92C; } // 801CA914
  c->r[4]=0u+0x00000001u; // 801CA918
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CA91C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CA920
  c->ctr=c->r[12]; // 801CA924
  if (true) { c->lr=0x801CA92Cu; dispatch(c,c->ctr); } // 801CA928
L_801CA92C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA92C
  c->lr=0x801CA934u; f_80056B54(c); // 801CA930
  c->r[0]=0u+0x00000000u; // 801CA934
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801CA938
L_801CA93C:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CA93C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA940
  if (crb(c,2)) { goto L_801CA98C; } // 801CA944
  c->lr=0x801CA94Cu; f_801C68A0(c); // 801CA948
  c->lr=0x801CA950u; f_80056B5C(c); // 801CA94C
  c->r[31]=c->r[3]|c->r[3]; // 801CA950
  c->lr=0x801CA958u; f_801F1340(c); // 801CA954
  c->lr=0x801CA95Cu; f_80056B54(c); // 801CA958
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CA95C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA960
  if (crb(c,2)) { goto L_801CA97C; } // 801CA964
  c->r[4]=0u+0x00000001u; // 801CA968
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CA96C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CA970
  c->ctr=c->r[12]; // 801CA974
  if (true) { c->lr=0x801CA97Cu; dispatch(c,c->ctr); } // 801CA978
L_801CA97C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA97C
  c->lr=0x801CA984u; f_80056B54(c); // 801CA980
  c->r[0]=0u+0x00000000u; // 801CA984
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801CA988
L_801CA98C:;
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801CA98C
  cmps(c,0,(int32_t)c->r[3],0); // 801CA990
  if (crb(c,2)) { goto L_801CA9DC; } // 801CA994
  c->lr=0x801CA99Cu; f_801CC77C(c); // 801CA998
  c->lr=0x801CA9A0u; f_80056B5C(c); // 801CA99C
  c->r[31]=c->r[3]|c->r[3]; // 801CA9A0
  c->lr=0x801CA9A8u; f_801F1340(c); // 801CA9A4
  c->lr=0x801CA9ACu; f_80056B54(c); // 801CA9A8
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801CA9AC
  cmps(c,0,(int32_t)c->r[3],0); // 801CA9B0
  if (crb(c,2)) { goto L_801CA9CC; } // 801CA9B4
  c->r[4]=0u+0x00000001u; // 801CA9B8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CA9BC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CA9C0
  c->ctr=c->r[12]; // 801CA9C4
  if (true) { c->lr=0x801CA9CCu; dispatch(c,c->ctr); } // 801CA9C8
L_801CA9CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801CA9CC
  c->lr=0x801CA9D4u; f_80056B54(c); // 801CA9D0
  c->r[0]=0u+0x00000000u; // 801CA9D4
  W32(c->r[30]+0x000000CCu,c->r[0]); // 801CA9D8
L_801CA9DC:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801CA9DC
  cmps(c,0,(int32_t)c->r[3],0); // 801CA9E0
  if (crb(c,2)) { goto L_801CAA2C; } // 801CA9E4
  c->lr=0x801CA9ECu; f_801CBC68(c); // 801CA9E8
  c->lr=0x801CA9F0u; f_80056B5C(c); // 801CA9EC
  c->r[31]=c->r[3]|c->r[3]; // 801CA9F0
  c->lr=0x801CA9F8u; f_801F1340(c); // 801CA9F4
  c->lr=0x801CA9FCu; f_80056B54(c); // 801CA9F8
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801CA9FC
  cmps(c,0,(int32_t)c->r[3],0); // 801CAA00
  if (crb(c,2)) { goto L_801CAA1C; } // 801CAA04
  c->r[4]=0u+0x00000001u; // 801CAA08
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CAA0C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CAA10
  c->ctr=c->r[12]; // 801CAA14
  if (true) { c->lr=0x801CAA1Cu; dispatch(c,c->ctr); } // 801CAA18
L_801CAA1C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CAA1C
  c->lr=0x801CAA24u; f_80056B54(c); // 801CAA20
  c->r[0]=0u+0x00000000u; // 801CAA24
  W32(c->r[30]+0x000000D0u,c->r[0]); // 801CAA28
L_801CAA2C:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801CAA2C
  cmps(c,0,(int32_t)c->r[3],0); // 801CAA30
  if (crb(c,2)) { goto L_801CAA88; } // 801CAA34
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CAA38
  c->r[12]=R32(c->r[12]+0x00000060u); // 801CAA3C
  c->ctr=c->r[12]; // 801CAA40
  if (true) { c->lr=0x801CAA48u; dispatch(c,c->ctr); } // 801CAA44
  c->lr=0x801CAA4Cu; f_80056B5C(c); // 801CAA48
  c->r[31]=c->r[3]|c->r[3]; // 801CAA4C
  c->lr=0x801CAA54u; f_801F1340(c); // 801CAA50
  c->lr=0x801CAA58u; f_80056B54(c); // 801CAA54
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801CAA58
  cmps(c,0,(int32_t)c->r[3],0); // 801CAA5C
  if (crb(c,2)) { goto L_801CAA78; } // 801CAA60
  c->r[4]=0u+0x00000001u; // 801CAA64
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CAA68
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CAA6C
  c->ctr=c->r[12]; // 801CAA70
  if (true) { c->lr=0x801CAA78u; dispatch(c,c->ctr); } // 801CAA74
L_801CAA78:;
  c->r[3]=c->r[31]|c->r[31]; // 801CAA78
  c->lr=0x801CAA80u; f_80056B54(c); // 801CAA7C
  c->r[0]=0u+0x00000000u; // 801CAA80
  W32(c->r[30]+0x000000C8u,c->r[0]); // 801CAA84
L_801CAA88:;
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CAA88
  cmps(c,0,(int32_t)c->r[3],0); // 801CAA8C
  if (crb(c,2)) { goto L_801CAAE4; } // 801CAA90
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CAA94
  c->r[12]=R32(c->r[12]+0x00000060u); // 801CAA98
  c->ctr=c->r[12]; // 801CAA9C
  if (true) { c->lr=0x801CAAA4u; dispatch(c,c->ctr); } // 801CAAA0
  c->lr=0x801CAAA8u; f_80056B5C(c); // 801CAAA4
  c->r[31]=c->r[3]|c->r[3]; // 801CAAA8
  c->lr=0x801CAAB0u; f_801F1340(c); // 801CAAAC
  c->lr=0x801CAAB4u; f_80056B54(c); // 801CAAB0
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CAAB4
  cmps(c,0,(int32_t)c->r[3],0); // 801CAAB8
  if (crb(c,2)) { goto L_801CAAD4; } // 801CAABC
  c->r[4]=0u+0x00000001u; // 801CAAC0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CAAC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CAAC8
  c->ctr=c->r[12]; // 801CAACC
  if (true) { c->lr=0x801CAAD4u; dispatch(c,c->ctr); } // 801CAAD0
L_801CAAD4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CAAD4
  c->lr=0x801CAADCu; f_80056B54(c); // 801CAAD8
  c->r[0]=0u+0x00000000u; // 801CAADC
  W32(c->r[30]+0x000000D4u,c->r[0]); // 801CAAE0
L_801CAAE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAAE4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAAE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAAEC
  c->lr=c->r[0]; // 801CAAF0
  c->r[1]=c->r[1]+0x00000010u; // 801CAAF4
  return; // 801CAAF8
}

// fn_801CAAFC
void f_801CAAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAAFC
  c->r[0]=c->lr; // 801CAB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAB04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAB08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAB0C
  c->r[30]=c->r[3]|c->r[3]; // 801CAB10
  c->r[31]=c->r[4]|c->r[4]; // 801CAB14
  cmps(c,0,(int32_t)c->r[3],0); // 801CAB18
  if (crb(c,2)) { goto L_801CAB3C; } // 801CAB1C
  c->r[4]=0u+0x00000000u; // 801CAB20
  c->lr=0x801CAB28u; f_8011498C(c); // 801CAB24
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CAB28
  cmps(c,0,(int32_t)c->r[0],0); // 801CAB2C
  if (!crb(c,1)) { goto L_801CAB3C; } // 801CAB30
  c->r[3]=c->r[30]|c->r[30]; // 801CAB34
  c->lr=0x801CAB3Cu; f_80047B20(c); // 801CAB38
L_801CAB3C:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAB3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAB40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAB44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAB48
  c->lr=c->r[0]; // 801CAB4C
  c->r[1]=c->r[1]+0x00000010u; // 801CAB50
  return; // 801CAB54
}

// fn_801CAB58
void f_801CAB58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAB58
  c->r[0]=c->lr; // 801CAB5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAB60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAB64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAB68
  c->r[30]=c->r[3]|c->r[3]; // 801CAB6C
  c->r[31]=c->r[4]|c->r[4]; // 801CAB70
  cmps(c,0,(int32_t)c->r[3],0); // 801CAB74
  if (crb(c,2)) { goto L_801CAB98; } // 801CAB78
  c->r[4]=0u+0x00000000u; // 801CAB7C
  c->lr=0x801CAB84u; f_8012FB1C(c); // 801CAB80
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CAB84
  cmps(c,0,(int32_t)c->r[0],0); // 801CAB88
  if (!crb(c,1)) { goto L_801CAB98; } // 801CAB8C
  c->r[3]=c->r[30]|c->r[30]; // 801CAB90
  c->lr=0x801CAB98u; f_80047B20(c); // 801CAB94
L_801CAB98:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAB98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAB9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CABA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CABA4
  c->lr=c->r[0]; // 801CABA8
  c->r[1]=c->r[1]+0x00000010u; // 801CABAC
  return; // 801CABB0
}

// fn_801CABB4
void f_801CABB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CABB4
  c->r[0]=c->lr; // 801CABB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CABBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CABC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CABC4
  c->r[30]=c->r[3]|c->r[3]; // 801CABC8
  c->r[31]=c->r[4]|c->r[4]; // 801CABCC
  cmps(c,0,(int32_t)c->r[3],0); // 801CABD0
  if (crb(c,2)) { goto L_801CABF4; } // 801CABD4
  c->r[4]=0u+0x00000000u; // 801CABD8
  c->lr=0x801CABE0u; f_8012FB1C(c); // 801CABDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CABE0
  cmps(c,0,(int32_t)c->r[0],0); // 801CABE4
  if (!crb(c,1)) { goto L_801CABF4; } // 801CABE8
  c->r[3]=c->r[30]|c->r[30]; // 801CABEC
  c->lr=0x801CABF4u; f_80047B20(c); // 801CABF0
L_801CABF4:;
  c->r[3]=c->r[30]|c->r[30]; // 801CABF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CABF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CABFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAC00
  c->lr=c->r[0]; // 801CAC04
  c->r[1]=c->r[1]+0x00000010u; // 801CAC08
  return; // 801CAC0C
}

// fn_801CAC10
void f_801CAC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAC10
  c->r[0]=c->lr; // 801CAC14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAC18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAC1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAC20
  c->r[30]=c->r[3]|c->r[3]; // 801CAC24
  c->r[31]=c->r[4]|c->r[4]; // 801CAC28
  cmps(c,0,(int32_t)c->r[3],0); // 801CAC2C
  if (crb(c,2)) { goto L_801CAC50; } // 801CAC30
  c->r[4]=0u+0x00000000u; // 801CAC34
  c->lr=0x801CAC3Cu; f_8013CED0(c); // 801CAC38
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CAC3C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAC40
  if (!crb(c,1)) { goto L_801CAC50; } // 801CAC44
  c->r[3]=c->r[30]|c->r[30]; // 801CAC48
  c->lr=0x801CAC50u; f_80047B20(c); // 801CAC4C
L_801CAC50:;
  c->r[3]=c->r[30]|c->r[30]; // 801CAC50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAC54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAC58
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAC5C
  c->lr=c->r[0]; // 801CAC60
  c->r[1]=c->r[1]+0x00000010u; // 801CAC64
  return; // 801CAC68
}

// fn_801CAC6C
void f_801CAC6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAC6C
  c->r[0]=c->lr; // 801CAC70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAC74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAC78
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAC7C
  c->r[30]=c->r[3]|c->r[3]; // 801CAC80
  c->r[31]=c->r[4]|c->r[4]; // 801CAC84
  cmps(c,0,(int32_t)c->r[3],0); // 801CAC88
  if (crb(c,2)) { goto L_801CACAC; } // 801CAC8C
  c->r[4]=0u+0x00000000u; // 801CAC90
  c->lr=0x801CAC98u; f_80119214(c); // 801CAC94
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CAC98
  cmps(c,0,(int32_t)c->r[0],0); // 801CAC9C
  if (!crb(c,1)) { goto L_801CACAC; } // 801CACA0
  c->r[3]=c->r[30]|c->r[30]; // 801CACA4
  c->lr=0x801CACACu; f_80047B20(c); // 801CACA8
L_801CACAC:;
  c->r[3]=c->r[30]|c->r[30]; // 801CACAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CACB0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CACB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CACB8
  c->lr=c->r[0]; // 801CACBC
  c->r[1]=c->r[1]+0x00000010u; // 801CACC0
  return; // 801CACC4
}

// fn_801CACC8
void f_801CACC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CACC8
  c->r[0]=c->lr; // 801CACCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CACD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CACD4
  c->r[31]=c->r[3]|c->r[3]; // 801CACD8
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801CACDC
  c->lr=0x801CACE4u; f_8013F9D0(c); // 801CACE0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CACE4
  c->lr=0x801CACECu; f_801CD960(c); // 801CACE8
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801CACEC
  c->lr=0x801CACF4u; f_8013C6A8(c); // 801CACF0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CACF4
  c->lr=0x801CACFCu; f_801CD98C(c); // 801CACF8
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801CACFC
  c->lr=0x801CAD04u; f_8013C6A0(c); // 801CAD00
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801CAD04
  c->lr=0x801CAD0Cu; f_8013FBA4(c); // 801CAD08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAD10
  c->lr=c->r[0]; // 801CAD14
  c->r[1]=c->r[1]+0x00000010u; // 801CAD18
  return; // 801CAD1C
}

// fn_801CAD20
void f_801CAD20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAD20
  c->r[0]=c->lr; // 801CAD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAD28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAD2C
  c->r[31]=c->r[3]|c->r[3]; // 801CAD30
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801CAD34
  c->lr=0x801CAD3Cu; f_801CB8F8(c); // 801CAD38
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CAD3C
  c->lr=0x801CAD44u; f_801CC324(c); // 801CAD40
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801CAD44
  c->lr=0x801CAD4Cu; f_801CB678(c); // 801CAD48
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CAD4C
  c->lr=0x801CAD54u; f_801CC350(c); // 801CAD50
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801CAD54
  c->lr=0x801CAD5Cu; f_801CB670(c); // 801CAD58
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801CAD5C
  c->lr=0x801CAD64u; f_801CBAD4(c); // 801CAD60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAD64
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAD68
  c->lr=c->r[0]; // 801CAD6C
  c->r[1]=c->r[1]+0x00000010u; // 801CAD70
  return; // 801CAD74
}

// fn_801CAD78
void f_801CAD78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAD78
  c->r[0]=c->lr; // 801CAD7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAD80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAD84
  c->r[31]=c->r[3]|c->r[3]; // 801CAD88
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CAD8C
  c->r[4]=0u+0x00000000u; // 801CAD90
  c->lr=0x801CAD98u; f_8011918C(c); // 801CAD94
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801CAD98
  c->r[4]=0u+0x00000000u; // 801CAD9C
  c->lr=0x801CADA4u; f_80119184(c); // 801CADA0
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801CADA4
  c->r[4]=0u+0x00000001u; // 801CADA8
  c->lr=0x801CADB0u; f_8011917C(c); // 801CADAC
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801CADB0
  c->lr=0x801CADB8u; f_801191D4(c); // 801CADB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CADB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CADBC
  c->lr=c->r[0]; // 801CADC0
  c->r[1]=c->r[1]+0x00000010u; // 801CADC4
  return; // 801CADC8
}

// fn_801CADCC
void f_801CADCC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CADCC
  c->r[0]=c->lr; // 801CADD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CADD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CADD8
  c->r[31]=c->r[3]|c->r[3]; // 801CADDC
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CADE0
  c->r[4]=0u+0x00000000u; // 801CADE4
  c->lr=0x801CADECu; f_8011918C(c); // 801CADE8
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801CADEC
  c->r[4]=0u+0x00000000u; // 801CADF0
  c->lr=0x801CADF8u; f_80119184(c); // 801CADF4
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801CADF8
  c->r[4]=0u+0x00000001u; // 801CADFC
  c->lr=0x801CAE04u; f_8011917C(c); // 801CAE00
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801CAE04
  c->lr=0x801CAE0Cu; f_801191E4(c); // 801CAE08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAE0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAE10
  c->lr=c->r[0]; // 801CAE14
  c->r[1]=c->r[1]+0x00000010u; // 801CAE18
  return; // 801CAE1C
}

// fn_801CAE20
void f_801CAE20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAE20
  c->r[0]=c->lr; // 801CAE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAE28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAE2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAE30
  c->r[30]=c->r[3]|c->r[3]; // 801CAE34
  c->r[31]=c->r[4]|c->r[4]; // 801CAE38
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CAE3C
  c->r[4]=0u+0x00000001u; // 801CAE40
  c->lr=0x801CAE48u; f_8011918C(c); // 801CAE44
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CAE48
  c->r[4]=0u+0x00000001u; // 801CAE4C
  c->lr=0x801CAE54u; f_80119184(c); // 801CAE50
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CAE54
  c->r[4]=c->r[31]|c->r[31]; // 801CAE58
  c->lr=0x801CAE60u; f_801CD540(c); // 801CAE5C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CAE60
  c->lr=0x801CAE68u; f_801191F4(c); // 801CAE64
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CAE68
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CAE6C
  c->r[12]=R32(c->r[12]+0x00000040u); // 801CAE70
  c->ctr=c->r[12]; // 801CAE74
  if (true) { c->lr=0x801CAE7Cu; dispatch(c,c->ctr); } // 801CAE78
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CAE7C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CAE80
  c->r[12]=R32(c->r[12]+0x00000044u); // 801CAE84
  c->ctr=c->r[12]; // 801CAE88
  if (true) { c->lr=0x801CAE90u; dispatch(c,c->ctr); } // 801CAE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAE90
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAE94
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAE98
  c->lr=c->r[0]; // 801CAE9C
  c->r[1]=c->r[1]+0x00000010u; // 801CAEA0
  return; // 801CAEA4
}

// fn_801CAEA8
void f_801CAEA8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CAEA8
  f_80119204(c); return; // 801CAEAC
}

// fn_801CAEB0
void f_801CAEB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAEB0
  c->r[0]=c->lr; // 801CAEB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAEB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAEBC
  c->r[31]=c->r[3]|c->r[3]; // 801CAEC0
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAEC4
  c->r[4]=0u+0x00000000u; // 801CAEC8
  c->lr=0x801CAED0u; f_801C6A68(c); // 801CAECC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CAED0
  c->r[4]=0u+0x00000001u; // 801CAED4
  c->lr=0x801CAEDCu; f_801C69F8(c); // 801CAED8
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CAEDC
  c->lr=0x801CAEE4u; f_801C6AD8(c); // 801CAEE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAEE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAEE8
  c->lr=c->r[0]; // 801CAEEC
  c->r[1]=c->r[1]+0x00000010u; // 801CAEF0
  return; // 801CAEF4
}

// fn_801CAEF8
void f_801CAEF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAEF8
  c->r[0]=c->lr; // 801CAEFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAF00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAF04
  c->r[31]=c->r[3]|c->r[3]; // 801CAF08
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF0C
  c->r[4]=0u+0x00000000u; // 801CAF10
  c->lr=0x801CAF18u; f_801C6A68(c); // 801CAF14
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CAF18
  c->r[4]=0u+0x00000001u; // 801CAF1C
  c->lr=0x801CAF24u; f_801C69F8(c); // 801CAF20
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CAF24
  c->lr=0x801CAF2Cu; f_801C6B38(c); // 801CAF28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAF2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAF30
  c->lr=c->r[0]; // 801CAF34
  c->r[1]=c->r[1]+0x00000010u; // 801CAF38
  return; // 801CAF3C
}

// fn_801CAF40
void f_801CAF40(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF40
  f_801C6B98(c); return; // 801CAF44
}

// fn_801CAF48
void f_801CAF48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAF48
  c->r[0]=c->lr; // 801CAF4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAF50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAF54
  c->r[31]=c->r[3]|c->r[3]; // 801CAF58
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF5C
  c->r[4]=0u+0x00000001u; // 801CAF60
  c->lr=0x801CAF68u; f_801C6A68(c); // 801CAF64
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CAF68
  c->lr=0x801CAF70u; f_801C6C6C(c); // 801CAF6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAF70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAF74
  c->lr=c->r[0]; // 801CAF78
  c->r[1]=c->r[1]+0x00000010u; // 801CAF7C
  return; // 801CAF80
}

// fn_801CAF84
void f_801CAF84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF84
  f_801C6C20(c); return; // 801CAF88
}

// fn_801CAF8C
void f_801CAF8C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF8C
  f_801C6CD4(c); return; // 801CAF90
}

// fn_801CAF94
void f_801CAF94(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF94
  f_801C6DC8(c); return; // 801CAF98
}

// fn_801CAF9C
void f_801CAF9C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CAF9C
  f_801C6DB8(c); return; // 801CAFA0
}

// fn_801CAFA4
void f_801CAFA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAFA4
  c->r[0]=c->lr; // 801CAFA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAFAC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAFB0
  c->r[31]=c->r[3]|c->r[3]; // 801CAFB4
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801CAFB8
  c->r[4]=0u+0x00000000u; // 801CAFBC
  c->lr=0x801CAFC4u; f_801CC900(c); // 801CAFC0
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CAFC4
  c->r[4]=0u+0x00000001u; // 801CAFC8
  c->lr=0x801CAFD0u; f_801CC8F8(c); // 801CAFCC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CAFD0
  c->lr=0x801CAFD8u; f_801CC8C8(c); // 801CAFD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAFD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAFDC
  c->lr=c->r[0]; // 801CAFE0
  c->r[1]=c->r[1]+0x00000010u; // 801CAFE4
  return; // 801CAFE8
}

// fn_801CAFEC
void f_801CAFEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAFEC
  c->r[0]=c->lr; // 801CAFF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAFF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAFF8
  c->r[31]=c->r[3]|c->r[3]; // 801CAFFC
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801CB000
  c->r[4]=0u+0x00000000u; // 801CB004
  c->lr=0x801CB00Cu; f_801CC900(c); // 801CB008
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CB00C
  c->r[4]=0u+0x00000001u; // 801CB010
  c->lr=0x801CB018u; f_801CC8F8(c); // 801CB014
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CB018
  c->lr=0x801CB020u; f_801CC8D8(c); // 801CB01C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB020
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB024
  c->lr=c->r[0]; // 801CB028
  c->r[1]=c->r[1]+0x00000010u; // 801CB02C
  return; // 801CB030
}

// fn_801CB034
void f_801CB034(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB034
  c->r[0]=c->lr; // 801CB038
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB03C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB040
  c->r[31]=c->r[3]|c->r[3]; // 801CB044
  c->r[3]=R32(c->r[3]+0x000000CCu); // 801CB048
  c->r[4]=0u+0x00000001u; // 801CB04C
  c->lr=0x801CB054u; f_801CC900(c); // 801CB050
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CB054
  c->lr=0x801CB05Cu; f_801CC8E8(c); // 801CB058
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CB05C
  c->lr=0x801CB064u; f_801CCE1C(c); // 801CB060
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB064
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB068
  c->lr=c->r[0]; // 801CB06C
  c->r[1]=c->r[1]+0x00000010u; // 801CB070
  return; // 801CB074
}

// fn_801CB078
void f_801CB078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB078
  c->r[0]=c->lr; // 801CB07C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB084
  c->r[31]=c->r[3]|c->r[3]; // 801CB088
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801CB08C
  c->r[4]=0u+0x00000000u; // 801CB090
  c->lr=0x801CB098u; f_801CBDF8(c); // 801CB094
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CB098
  c->r[4]=0u+0x00000001u; // 801CB09C
  c->lr=0x801CB0A4u; f_801CBDF0(c); // 801CB0A0
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CB0A4
  c->lr=0x801CB0ACu; f_801CBDB4(c); // 801CB0A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB0AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB0B0
  c->lr=c->r[0]; // 801CB0B4
  c->r[1]=c->r[1]+0x00000010u; // 801CB0B8
  return; // 801CB0BC
}

// fn_801CB0C0
void f_801CB0C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB0C0
  c->r[0]=c->lr; // 801CB0C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB0C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB0CC
  c->r[31]=c->r[3]|c->r[3]; // 801CB0D0
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801CB0D4
  c->r[4]=0u+0x00000000u; // 801CB0D8
  c->lr=0x801CB0E0u; f_801CBDF8(c); // 801CB0DC
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CB0E0
  c->r[4]=0u+0x00000001u; // 801CB0E4
  c->lr=0x801CB0ECu; f_801CBDF0(c); // 801CB0E8
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CB0EC
  c->lr=0x801CB0F4u; f_801CBDC4(c); // 801CB0F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB0F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB0F8
  c->lr=c->r[0]; // 801CB0FC
  c->r[1]=c->r[1]+0x00000010u; // 801CB100
  return; // 801CB104
}

// fn_801CB108
void f_801CB108(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB108
  c->r[0]=c->lr; // 801CB10C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB110
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB114
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB118
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB11C
  c->r[29]=c->r[3]|c->r[3]; // 801CB120
  c->r[30]=c->r[4]|c->r[4]; // 801CB124
  c->r[31]=0u+0x00000001u; // 801CB128
  c->r[0]=R32(c->r[3]+0x000000D8u); // 801CB12C
  cmps(c,0,(int32_t)c->r[0],3); // 801CB130
  if (!crb(c,2)) { goto L_801CB13C; } // 801CB134
  c->r[31]=0u+0x00000000u; // 801CB138
L_801CB13C:;
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801CB13C
  c->r[4]=0u+0x00000001u; // 801CB140
  c->lr=0x801CB148u; f_801CBDF8(c); // 801CB144
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801CB148
  c->lr=0x801CB150u; f_801CBDD4(c); // 801CB14C
  c->r[3]=R32(c->r[29]+0x000000D0u); // 801CB150
  c->r[4]=c->r[30]|c->r[30]; // 801CB154
  c->r[5]=c->r[31]|c->r[31]; // 801CB158
  c->lr=0x801CB160u; f_801CC320(c); // 801CB15C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB160
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB164
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB168
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB16C
  c->lr=c->r[0]; // 801CB170
  c->r[1]=c->r[1]+0x00000020u; // 801CB174
  return; // 801CB178
}

// fn_801CB17C
void f_801CB17C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801CB17C
  f_801CBDE4(c); return; // 801CB180
}

// fn_801CB184
void f_801CB184(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801CB184
  f_8011271C(c); return; // 801CB188
}

// fn_801CB18C
void f_801CB18C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801CB18C
  f_80112714(c); return; // 801CB190
}

// fn_801CB194
void f_801CB194(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB194
  c->r[0]=c->lr; // 801CB198
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB19C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB1A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB1A4
  c->r[30]=c->r[3]|c->r[3]; // 801CB1A8
  c->r[31]=c->r[4]|c->r[4]; // 801CB1AC
  c->lr=0x801CB1B4u; f_801CB184(c); // 801CB1B0
  c->r[3]=c->r[30]|c->r[30]; // 801CB1B4
  c->r[4]=c->r[31]|c->r[31]; // 801CB1B8
  c->lr=0x801CB1C0u; f_801CAF8C(c); // 801CB1BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB1C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB1C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB1C8
  c->lr=c->r[0]; // 801CB1CC
  c->r[1]=c->r[1]+0x00000010u; // 801CB1D0
  return; // 801CB1D4
}

// fn_801CB1D8
void f_801CB1D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB1D8
  c->r[0]=c->lr; // 801CB1DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB1E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB1E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB1E8
  c->r[30]=c->r[3]|c->r[3]; // 801CB1EC
  c->r[31]=c->r[4]|c->r[4]; // 801CB1F0
  c->lr=0x801CB1F8u; f_801CB184(c); // 801CB1F4
  c->r[3]=c->r[30]|c->r[30]; // 801CB1F8
  c->r[4]=c->r[31]|c->r[31]; // 801CB1FC
  c->lr=0x801CB204u; f_801CAF84(c); // 801CB200
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB204
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB208
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB20C
  c->lr=c->r[0]; // 801CB210
  c->r[1]=c->r[1]+0x00000010u; // 801CB214
  return; // 801CB218
}

// fn_801CB21C
void f_801CB21C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB21C
  c->r[0]=c->lr; // 801CB220
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB228
  c->r[31]=c->r[3]|c->r[3]; // 801CB22C
  c->r[0]=R32(c->r[3]+0x000000D8u); // 801CB230
  cmps(c,0,(int32_t)c->r[0],2); // 801CB234
  if (crb(c,2)) { goto L_801CB280; } // 801CB238
  if (!crb(c,0)) { goto L_801CB250; } // 801CB23C
  cmps(c,0,(int32_t)c->r[0],0); // 801CB240
  if (crb(c,2)) { goto L_801CB25C; } // 801CB244
  if (!crb(c,0)) { goto L_801CB270; } // 801CB248
  goto L_801CB29C; // 801CB24C
L_801CB250:;
  cmps(c,0,(int32_t)c->r[0],4); // 801CB250
  if (!crb(c,0)) { goto L_801CB29C; } // 801CB254
  goto L_801CB290; // 801CB258
L_801CB25C:;
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CB25C
  c->lr=0x801CB264u; f_801CCF80(c); // 801CB260
  c->r[3]=R32(c->r[31]+0x000000CCu); // 801CB264
  c->lr=0x801CB26Cu; f_801CCE18(c); // 801CB268
  goto L_801CB29C; // 801CB26C
L_801CB270:;
  c->lr=0x801CB274u; f_801CACC8(c); // 801CB270
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CB274
  c->lr=0x801CB27Cu; f_801CD92C(c); // 801CB278
  goto L_801CB29C; // 801CB27C
L_801CB280:;
  c->lr=0x801CB284u; f_801CAD20(c); // 801CB280
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CB284
  c->lr=0x801CB28Cu; f_801CC31C(c); // 801CB288
  goto L_801CB29C; // 801CB28C
L_801CB290:;
  c->lr=0x801CB294u; f_801CAD20(c); // 801CB290
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801CB294
  c->lr=0x801CB29Cu; f_801CC31C(c); // 801CB298
L_801CB29C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB29C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB2A0
  c->lr=c->r[0]; // 801CB2A4
  c->r[1]=c->r[1]+0x00000010u; // 801CB2A8
  return; // 801CB2AC
}

// fn_801CB2B0
void f_801CB2B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CB2B0
  f_801C69F8(c); return; // 801CB2B4
}

// fn_801CB2B8
void f_801CB2B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D0u); // 801CB2B8
  f_801CBDF0(c); return; // 801CB2BC
}

// fn_801CB2C0
void f_801CB2C0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C8u); // 801CB2C0
  f_8012F910(c); return; // 801CB2C4
}

// fn_801CB2C8
void f_801CB2C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000D4u); // 801CB2C8
  f_8012F910(c); return; // 801CB2CC
}

// fn_801CB2D0
void f_801CB2D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB2D0
  c->r[0]=c->lr; // 801CB2D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB2D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB2DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB2E0
  c->r[30]=c->r[3]|c->r[3]; // 801CB2E4
  c->r[31]=c->r[4]|c->r[4]; // 801CB2E8
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CB2EC
  c->lr=0x801CB2F4u; f_8011917C(c); // 801CB2F0
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801CB2F4
  c->r[4]=c->r[31]|c->r[31]; // 801CB2F8
  c->lr=0x801CB300u; f_801CC8F8(c); // 801CB2FC
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801CB300
  c->r[4]=c->r[31]|c->r[31]; // 801CB304
  c->lr=0x801CB30Cu; f_801CBDF0(c); // 801CB308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB30C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB310
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB314
  c->lr=c->r[0]; // 801CB318
  c->r[1]=c->r[1]+0x00000010u; // 801CB31C
  return; // 801CB320
}

// fn_801CB324
void f_801CB324(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB324
  c->r[0]=c->lr; // 801CB328
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB32C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB330
  c->r[31]=c->r[3]|c->r[3]; // 801CB334
  c->lr=0x801CB33Cu; f_801CAFA4(c); // 801CB338
  c->r[3]=c->r[31]|c->r[31]; // 801CB33C
  c->lr=0x801CB344u; f_801CAD78(c); // 801CB340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB344
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB348
  c->lr=c->r[0]; // 801CB34C
  c->r[1]=c->r[1]+0x00000010u; // 801CB350
  return; // 801CB354
}

// fn_801CB358
void f_801CB358(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB358
  c->r[0]=c->lr; // 801CB35C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB360
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB364
  c->r[31]=c->r[3]|c->r[3]; // 801CB368
  c->lr=0x801CB370u; f_801CAFEC(c); // 801CB36C
  c->r[3]=c->r[31]|c->r[31]; // 801CB370
  c->lr=0x801CB378u; f_801CADCC(c); // 801CB374
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB378
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB37C
  c->lr=c->r[0]; // 801CB380
  c->r[1]=c->r[1]+0x00000010u; // 801CB384
  return; // 801CB388
}

// fn_801CB38C
void f_801CB38C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB38C
  c->r[0]=c->lr; // 801CB390
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB394
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB398
  c->r[31]=c->r[3]|c->r[3]; // 801CB39C
  c->lr=0x801CB3A4u; f_801CB034(c); // 801CB3A0
  c->r[3]=c->r[31]|c->r[31]; // 801CB3A4
  c->r[4]=0u+0x00000000u; // 801CB3A8
  c->lr=0x801CB3B0u; f_801CAE20(c); // 801CB3AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB3B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB3B4
  c->lr=c->r[0]; // 801CB3B8
  c->r[1]=c->r[1]+0x00000010u; // 801CB3BC
  return; // 801CB3C0
}

// fn_801CB3C4
void f_801CB3C4(Ctx* __restrict c) {
  f_801CAEA8(c); return; // 801CB3C4
}

// fn_801CB3C8
void f_801CB3C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB3C8
  c->r[0]=c->lr; // 801CB3CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB3D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB3D4
  c->r[31]=c->r[3]|c->r[3]; // 801CB3D8
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CB3DC
  c->lr=0x801CB3E4u; f_801CDC08(c); // 801CB3E0
  c->r[3]=c->r[31]|c->r[31]; // 801CB3E4
  c->lr=0x801CB3ECu; f_801CAEB0(c); // 801CB3E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB3EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB3F0
  c->lr=c->r[0]; // 801CB3F4
  c->r[1]=c->r[1]+0x00000010u; // 801CB3F8
  return; // 801CB3FC
}

// fn_801CB400
void f_801CB400(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB400
  c->r[0]=c->lr; // 801CB404
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB408
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB40C
  c->r[31]=c->r[3]|c->r[3]; // 801CB410
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CB414
  c->lr=0x801CB41Cu; f_801CDC08(c); // 801CB418
  c->r[3]=c->r[31]|c->r[31]; // 801CB41C
  c->lr=0x801CB424u; f_801CAEB0(c); // 801CB420
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB424
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB428
  c->lr=c->r[0]; // 801CB42C
  c->r[1]=c->r[1]+0x00000010u; // 801CB430
  return; // 801CB434
}

// fn_801CB438
void f_801CB438(Ctx* __restrict c) {
  f_801CAEF8(c); return; // 801CB438
}

// fn_801CB43C
void f_801CB43C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB43C
  c->r[0]=c->lr; // 801CB440
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB444
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB448
  c->r[31]=c->r[3]|c->r[3]; // 801CB44C
  c->lr=0x801CB454u; f_801CB034(c); // 801CB450
  c->r[3]=c->r[31]|c->r[31]; // 801CB454
  c->lr=0x801CB45Cu; f_801CAEF8(c); // 801CB458
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB45C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB460
  c->lr=c->r[0]; // 801CB464
  c->r[1]=c->r[1]+0x00000010u; // 801CB468
  return; // 801CB46C
}

// fn_801CB470
void f_801CB470(Ctx* __restrict c) {
  f_801CAF40(c); return; // 801CB470
}

// fn_801CB474
void f_801CB474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB474
  c->r[0]=c->lr; // 801CB478
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB480
  c->r[31]=c->r[3]|c->r[3]; // 801CB484
  c->lr=0x801CB48Cu; f_801CAF48(c); // 801CB488
  c->r[3]=c->r[31]|c->r[31]; // 801CB48C
  c->lr=0x801CB494u; f_801CB034(c); // 801CB490
  c->r[3]=c->r[31]|c->r[31]; // 801CB494
  c->r[4]=0u+0x00000000u; // 801CB498
  c->lr=0x801CB4A0u; f_801CAE20(c); // 801CB49C
  c->r[3]=c->r[31]|c->r[31]; // 801CB4A0
  c->r[4]=0u+0x00000001u; // 801CB4A4
  c->lr=0x801CB4ACu; f_801CB2C0(c); // 801CB4A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB4AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB4B0
  c->lr=c->r[0]; // 801CB4B4
  c->r[1]=c->r[1]+0x00000010u; // 801CB4B8
  return; // 801CB4BC
}

// fn_801CB4C0
void f_801CB4C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB4C0
  c->r[0]=c->lr; // 801CB4C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB4C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB4CC
  c->r[31]=c->r[3]|c->r[3]; // 801CB4D0
  c->r[4]=0u+0x00000000u; // 801CB4D4
  c->lr=0x801CB4DCu; f_801CB2C8(c); // 801CB4D8
  c->r[3]=c->r[31]|c->r[31]; // 801CB4DC
  c->lr=0x801CB4E4u; f_801CB078(c); // 801CB4E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB4E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB4E8
  c->lr=c->r[0]; // 801CB4EC
  c->r[1]=c->r[1]+0x00000010u; // 801CB4F0
  return; // 801CB4F4
}

// fn_801CB4F8
void f_801CB4F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB4F8
  c->r[0]=c->lr; // 801CB4FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB500
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB504
  c->r[31]=c->r[3]|c->r[3]; // 801CB508
  c->r[4]=0u+0x00000000u; // 801CB50C
  c->lr=0x801CB514u; f_801CB2C8(c); // 801CB510
  c->r[3]=c->r[31]|c->r[31]; // 801CB514
  c->lr=0x801CB51Cu; f_801CB0C0(c); // 801CB518
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB51C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB520
  c->lr=c->r[0]; // 801CB524
  c->r[1]=c->r[1]+0x00000010u; // 801CB528
  return; // 801CB52C
}

// fn_801CB530
void f_801CB530(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB530
  c->r[0]=c->lr; // 801CB534
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB538
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB53C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB540
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB544
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CB548
  c->r[28]=c->r[3]|c->r[3]; // 801CB54C
  c->r[29]=c->r[4]|c->r[4]; // 801CB550
  c->r[30]=c->r[5]|c->r[5]; // 801CB554
  c->r[5]=R32(c->r[3]+0x000000D8u); // 801CB558
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 801CB55C
  c->r[0]=addc(c,~c->r[5],0x00000002u,1); // 801CB560
  c->r[0]=~(c->r[4]|c->r[0]); // 801CB564
  c->r[4]=sraw(c,c->r[0],31); // 801CB568
  c->r[31]=c->r[4]+0x00000002u; // 801CB56C
  c->lr=0x801CB574u; f_801CB034(c); // 801CB570
  c->r[3]=c->r[28]|c->r[28]; // 801CB574
  c->r[4]=c->r[31]|c->r[31]; // 801CB578
  c->lr=0x801CB580u; f_801CAE20(c); // 801CB57C
  c->r[3]=c->r[28]|c->r[28]; // 801CB580
  c->r[4]=0u+0x00000001u; // 801CB584
  c->lr=0x801CB58Cu; f_801CB2C8(c); // 801CB588
  c->r[3]=c->r[28]|c->r[28]; // 801CB58C
  c->r[4]=c->r[30]|c->r[30]; // 801CB590
  c->lr=0x801CB598u; f_801CB18C(c); // 801CB594
  c->r[3]=c->r[28]|c->r[28]; // 801CB598
  c->r[4]=c->r[29]|c->r[29]; // 801CB59C
  c->lr=0x801CB5A4u; f_801CB108(c); // 801CB5A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB5A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB5A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB5AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CB5B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB5B4
  c->lr=c->r[0]; // 801CB5B8
  c->r[1]=c->r[1]+0x00000020u; // 801CB5BC
  return; // 801CB5C0
}

// fn_801CB5C4
void f_801CB5C4(Ctx* __restrict c) {
  f_801CB17C(c); return; // 801CB5C4
}

// fn_801CB5C8
void f_801CB5C8(Ctx* __restrict c) {
  W32(c->r[3]+0x000000D8u,c->r[4]); // 801CB5C8
  return; // 801CB5CC
}

// fn_801CB5D0
void f_801CB5D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB5D0
  c->r[0]=c->lr; // 801CB5D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB5D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB5DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB5E0
  c->r[30]=c->r[3]|c->r[3]; // 801CB5E4
  c->r[31]=c->r[4]|c->r[4]; // 801CB5E8
  cmps(c,0,(int32_t)c->r[3],0); // 801CB5EC
  if (crb(c,2)) { goto L_801CB610; } // 801CB5F0
  c->r[4]=0u+0x00000000u; // 801CB5F4
  c->lr=0x801CB5FCu; f_8012FB1C(c); // 801CB5F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CB5FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB600
  if (!crb(c,1)) { goto L_801CB610; } // 801CB604
  c->r[3]=c->r[30]|c->r[30]; // 801CB608
  c->lr=0x801CB610u; f_80047B20(c); // 801CB60C
L_801CB610:;
  c->r[3]=c->r[30]|c->r[30]; // 801CB610
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB614
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB61C
  c->lr=c->r[0]; // 801CB620
  c->r[1]=c->r[1]+0x00000010u; // 801CB624
  return; // 801CB628
}

// fn_801CB62C
void f_801CB62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB62C
  c->r[0]=c->lr; // 801CB630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB638
  c->r[31]=c->r[3]|c->r[3]; // 801CB63C
  c->lr=0x801CB644u; f_80118C38(c); // 801CB640
  c->r[3]=0u+0x80470000u; // 801CB644
  c->r[0]=c->r[3]+0x000025F8u; // 801CB648
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CB64C
  c->r[0]=0u+0x00000003u; // 801CB650
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801CB654
  c->r[3]=c->r[31]|c->r[31]; // 801CB658
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB65C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB660
  c->lr=c->r[0]; // 801CB664
  c->r[1]=c->r[1]+0x00000010u; // 801CB668
  return; // 801CB66C
}

// fn_801CB670
void f_801CB670(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B34u; WF32(ea,c->f[1]);} // 801CB670
  return; // 801CB674
}

// fn_801CB678
void f_801CB678(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000B30u; WF32(ea,c->f[1]);} // 801CB678
  return; // 801CB67C
}

// fn_801CB680
void f_801CB680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB680
  c->r[0]=c->lr; // 801CB684
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CB688
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CB68C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CB690
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801CB694
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801CB698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB69C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB6A0
  c->r[30]=c->r[3]|c->r[3]; // 801CB6A4
  c->lr=0x801CB6ACu; f_8011B41C(c); // 801CB6A8
  c->r[4]=0u+0x00000009u; // 801CB6AC
  c->lr=0x801CB6B4u; f_8011B814(c); // 801CB6B0
  c->r[31]=c->r[3]|c->r[3]; // 801CB6B4
  c->lr=0x801CB6BCu; f_801CDCB0(c); // 801CB6B8
  c->r[3]=c->r[30]|c->r[30]; // 801CB6BC
  c->lr=0x801CB6C4u; f_80117D04(c); // 801CB6C0
  c->r[3]=c->r[31]|c->r[31]; // 801CB6C4
  c->lr=0x801CB6CCu; f_801CDCC8(c); // 801CB6C8
  c->f[30]=c->f[1]; // 801CB6CC
  c->r[3]=c->r[31]|c->r[31]; // 801CB6D0
  c->lr=0x801CB6D8u; f_801CDCC0(c); // 801CB6D4
  c->f[31]=c->f[1]; // 801CB6D8
  c->r[3]=c->r[31]|c->r[31]; // 801CB6DC
  c->lr=0x801CB6E4u; f_801CDCB8(c); // 801CB6E0
  c->r[3]=c->r[30]|c->r[30]; // 801CB6E4
  c->f[2]=c->f[31]; // 801CB6E8
  c->f[3]=c->f[30]; // 801CB6EC
  c->lr=0x801CB6F4u; f_80114AB8(c); // 801CB6F0
  c->r[3]=c->r[31]|c->r[31]; // 801CB6F4
  c->lr=0x801CB6FCu; f_801CDCD0(c); // 801CB6F8
  c->f[31]=c->f[1]; // 801CB6FC
  c->r[3]=c->r[31]|c->r[31]; // 801CB700
  c->lr=0x801CB708u; f_801CDCD0(c); // 801CB704
  c->r[3]=c->r[30]|c->r[30]; // 801CB708
  c->f[2]=c->f[31]; // 801CB70C
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CB710
  c->lr=0x801CB718u; f_80114AA8(c); // 801CB714
  c->r[3]=c->r[31]|c->r[31]; // 801CB718
  c->lr=0x801CB720u; f_8012FCB0(c); // 801CB71C
  c->r[3]=c->r[30]|c->r[30]; // 801CB720
  c->lr=0x801CB728u; f_8012FA30(c); // 801CB724
  c->r[3]=c->r[31]|c->r[31]; // 801CB728
  c->lr=0x801CB730u; f_8012FCB8(c); // 801CB72C
  c->r[3]=c->r[30]|c->r[30]; // 801CB730
  c->lr=0x801CB738u; f_8012FA38(c); // 801CB734
  c->r[3]=c->r[31]|c->r[31]; // 801CB738
  c->lr=0x801CB740u; f_8012FCC8(c); // 801CB73C
  c->r[3]=c->r[30]|c->r[30]; // 801CB740
  c->lr=0x801CB748u; f_8012FA4C(c); // 801CB744
  c->r[3]=c->r[31]|c->r[31]; // 801CB748
  c->lr=0x801CB750u; f_8012FCD0(c); // 801CB74C
  c->r[3]=c->r[30]|c->r[30]; // 801CB750
  c->lr=0x801CB758u; f_8012FA54(c); // 801CB754
  c->r[3]=c->r[31]|c->r[31]; // 801CB758
  c->lr=0x801CB760u; f_8012FCE8(c); // 801CB75C
  c->r[3]=c->r[30]|c->r[30]; // 801CB760
  c->lr=0x801CB768u; f_8012FA6C(c); // 801CB764
  c->r[3]=c->r[31]|c->r[31]; // 801CB768
  c->lr=0x801CB770u; f_8012FCF0(c); // 801CB76C
  c->r[3]=c->r[30]|c->r[30]; // 801CB770
  c->lr=0x801CB778u; f_8012FA74(c); // 801CB774
  c->r[3]=c->r[31]|c->r[31]; // 801CB778
  c->lr=0x801CB780u; f_8012FCE0(c); // 801CB77C
  c->r[4]=c->r[3]|c->r[3]; // 801CB780
  c->r[3]=c->r[30]|c->r[30]; // 801CB784
  c->lr=0x801CB78Cu; f_8012F918(c); // 801CB788
  c->r[3]=c->r[31]|c->r[31]; // 801CB78C
  c->lr=0x801CB794u; f_8012FCF8(c); // 801CB790
  c->f[31]=c->f[1]; // 801CB794
  c->r[3]=c->r[30]|c->r[30]; // 801CB798
  c->lr=0x801CB7A0u; f_8012AA10(c); // 801CB79C
  c->f[1]=c->f[31]; // 801CB7A0
  c->lr=0x801CB7A8u; f_80110580(c); // 801CB7A4
  c->r[3]=c->r[31]|c->r[31]; // 801CB7A8
  c->lr=0x801CB7B0u; f_8012FD00(c); // 801CB7AC
  c->f[31]=c->f[1]; // 801CB7B0
  c->r[3]=c->r[30]|c->r[30]; // 801CB7B4
  c->lr=0x801CB7BCu; f_8012AA08(c); // 801CB7B8
  c->f[1]=c->f[31]; // 801CB7BC
  c->lr=0x801CB7C4u; f_80110580(c); // 801CB7C0
  c->r[3]=c->r[31]|c->r[31]; // 801CB7C4
  c->lr=0x801CB7CCu; f_8012FD08(c); // 801CB7C8
  c->f[31]=c->f[1]; // 801CB7CC
  c->r[3]=c->r[30]|c->r[30]; // 801CB7D0
  c->lr=0x801CB7D8u; f_8012AA10(c); // 801CB7D4
  c->f[1]=c->f[31]; // 801CB7D8
  c->lr=0x801CB7E0u; f_80110588(c); // 801CB7DC
  c->r[3]=c->r[31]|c->r[31]; // 801CB7E0
  c->lr=0x801CB7E8u; f_8012FD10(c); // 801CB7E4
  c->f[31]=c->f[1]; // 801CB7E8
  c->r[3]=c->r[30]|c->r[30]; // 801CB7EC
  c->lr=0x801CB7F4u; f_8012AA08(c); // 801CB7F0
  c->f[1]=c->f[31]; // 801CB7F4
  c->lr=0x801CB7FCu; f_80110588(c); // 801CB7F8
  c->lr=0x801CB800u; f_8011A9D8(c); // 801CB7FC
  c->r[4]=0u+0x00000000u; // 801CB800
  c->lr=0x801CB808u; f_8011AF74(c); // 801CB804
  c->r[31]=c->r[3]|c->r[3]; // 801CB808
  c->lr=0x801CB810u; f_8011A6E8(c); // 801CB80C
  c->r[4]=c->r[31]|c->r[31]; // 801CB810
  c->lr=0x801CB818u; f_8011A9B0(c); // 801CB814
  c->lr=0x801CB81Cu; f_8012DA20(c); // 801CB818
  c->r[4]=c->r[3]|c->r[3]; // 801CB81C
  c->r[3]=c->r[30]|c->r[30]; // 801CB820
  c->lr=0x801CB828u; f_80114AA0(c); // 801CB824
  c->r[3]=c->r[30]|c->r[30]; // 801CB828
  c->r[4]=0u+0x00000009u; // 801CB82C
  c->r[5]=0u+0x00000001u; // 801CB830
  c->r[6]=0u+0xFFFFFFFFu; // 801CB834
  c->lr=0x801CB83Cu; f_8012DE5C(c); // 801CB838
  c->r[3]=c->r[30]|c->r[30]; // 801CB83C
  c->lr=0x801CB844u; f_8012F448(c); // 801CB840
  c->r[3]=c->r[30]|c->r[30]; // 801CB844
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CB848
  c->r[4]=0u+0x00000006u; // 801CB84C
  c->lr=0x801CB854u; f_8012E920(c); // 801CB850
  c->r[3]=c->r[30]|c->r[30]; // 801CB854
  c->r[4]=0u+0x00000001u; // 801CB858
  c->lr=0x801CB860u; f_8012E1C0(c); // 801CB85C
  c->r[3]=c->r[30]|c->r[30]; // 801CB860
  c->r[4]=0u+0x00000000u; // 801CB864
  c->lr=0x801CB86Cu; f_8012F910(c); // 801CB868
  c->r[0]=0u+0x00000028u; // 801CB86C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CB870
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CB874
  c->r[0]=0u+0x00000018u; // 801CB878
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CB87C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801CB880
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB884
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB888
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CB88C
  c->lr=c->r[0]; // 801CB890
  c->r[1]=c->r[1]+0x00000030u; // 801CB894
  return; // 801CB898
}

// fn_801CB89C
void f_801CB89C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB89C
  c->r[0]=c->lr; // 801CB8A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB8A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB8A8
  c->r[31]=c->r[3]|c->r[3]; // 801CB8AC
  c->lr=0x801CB8B4u; f_8011243C(c); // 801CB8B0
  c->r[3]=0u+0x80470000u; // 801CB8B4
  c->r[3]=c->r[3]+0x000022D0u; // 801CB8B8
  W32(c->r[31]+0x00000020u,c->r[3]); // 801CB8BC
  c->r[0]=c->r[3]+0x0000000Cu; // 801CB8C0
  W32(c->r[31]+0x00000288u,c->r[0]); // 801CB8C4
  c->r[0]=c->r[3]+0x00000018u; // 801CB8C8
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801CB8CC
  c->r[0]=c->r[3]+0x00000024u; // 801CB8D0
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801CB8D4
  c->r[0]=c->r[3]+0x00000030u; // 801CB8D8
  W32(c->r[31]+0x00000300u,c->r[0]); // 801CB8DC
  c->r[3]=c->r[31]|c->r[31]; // 801CB8E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB8E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB8E8
  c->lr=c->r[0]; // 801CB8EC
  c->r[1]=c->r[1]+0x00000010u; // 801CB8F0
  return; // 801CB8F4
}

// fn_801CB8F8
void f_801CB8F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB8F8
  c->r[0]=c->lr; // 801CB8FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CB900
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CB904
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CB908
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801CB90C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801CB910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB914
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB918
  c->r[30]=c->r[3]|c->r[3]; // 801CB91C
  c->lr=0x801CB924u; f_8011B41C(c); // 801CB920
  c->r[4]=0u+0x00000009u; // 801CB924
  c->lr=0x801CB92Cu; f_8011B814(c); // 801CB928
  c->r[31]=c->r[3]|c->r[3]; // 801CB92C
  c->lr=0x801CB934u; f_801CDD60(c); // 801CB930
  {uint32_t ea=c->r[30]+0x00000B38u; WF32(ea,c->f[1]);} // 801CB934
  c->r[3]=c->r[31]|c->r[31]; // 801CB938
  c->lr=0x801CB940u; f_801CDD68(c); // 801CB93C
  {uint32_t ea=c->r[30]+0x00000B3Cu; WF32(ea,c->f[1]);} // 801CB940
  c->r[3]=c->r[31]|c->r[31]; // 801CB944
  c->lr=0x801CB94Cu; f_801CDD78(c); // 801CB948
  {uint32_t ea=c->r[30]+0x00000B40u; WF32(ea,c->f[1]);} // 801CB94C
  c->r[3]=c->r[31]|c->r[31]; // 801CB950
  c->lr=0x801CB958u; f_801CDD80(c); // 801CB954
  {uint32_t ea=c->r[30]+0x00000B44u; WF32(ea,c->f[1]);} // 801CB958
  c->r[3]=c->r[31]|c->r[31]; // 801CB95C
  c->lr=0x801CB964u; f_801CDDA0(c); // 801CB960
  c->r[3]=c->r[30]|c->r[30]; // 801CB964
  c->lr=0x801CB96Cu; f_80117D04(c); // 801CB968
  c->r[3]=c->r[31]|c->r[31]; // 801CB96C
  c->lr=0x801CB974u; f_801CDDB8(c); // 801CB970
  c->f[30]=c->f[1]; // 801CB974
  c->r[3]=c->r[31]|c->r[31]; // 801CB978
  c->lr=0x801CB980u; f_801CDDB0(c); // 801CB97C
  c->f[31]=c->f[1]; // 801CB980
  c->r[3]=c->r[31]|c->r[31]; // 801CB984
  c->lr=0x801CB98Cu; f_801CDDA8(c); // 801CB988
  c->r[3]=c->r[30]|c->r[30]; // 801CB98C
  c->f[2]=c->f[31]; // 801CB990
  c->f[3]=c->f[30]; // 801CB994
  c->lr=0x801CB99Cu; f_80114AB8(c); // 801CB998
  c->r[3]=c->r[31]|c->r[31]; // 801CB99C
  c->lr=0x801CB9A4u; f_801CDDC0(c); // 801CB9A0
  c->f[31]=c->f[1]; // 801CB9A4
  c->r[3]=c->r[31]|c->r[31]; // 801CB9A8
  c->lr=0x801CB9B0u; f_801CDDC0(c); // 801CB9AC
  c->r[3]=c->r[30]|c->r[30]; // 801CB9B0
  c->f[2]=c->f[31]; // 801CB9B4
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CB9B8
  c->lr=0x801CB9C0u; f_80114AA8(c); // 801CB9BC
  c->r[3]=c->r[31]|c->r[31]; // 801CB9C0
  c->lr=0x801CB9C8u; f_8012FCB0(c); // 801CB9C4
  c->r[3]=c->r[30]|c->r[30]; // 801CB9C8
  c->lr=0x801CB9D0u; f_8012FA30(c); // 801CB9CC
  c->r[3]=c->r[31]|c->r[31]; // 801CB9D0
  c->lr=0x801CB9D8u; f_8012FCB8(c); // 801CB9D4
  c->r[3]=c->r[30]|c->r[30]; // 801CB9D8
  c->lr=0x801CB9E0u; f_8012FA38(c); // 801CB9DC
  c->r[3]=c->r[31]|c->r[31]; // 801CB9E0
  c->lr=0x801CB9E8u; f_8012FCC8(c); // 801CB9E4
  c->r[3]=c->r[30]|c->r[30]; // 801CB9E8
  c->lr=0x801CB9F0u; f_8012FA4C(c); // 801CB9EC
  c->r[3]=c->r[31]|c->r[31]; // 801CB9F0
  c->lr=0x801CB9F8u; f_8012FCD0(c); // 801CB9F4
  c->r[3]=c->r[30]|c->r[30]; // 801CB9F8
  c->lr=0x801CBA00u; f_8012FA54(c); // 801CB9FC
  c->r[3]=c->r[31]|c->r[31]; // 801CBA00
  c->lr=0x801CBA08u; f_8012FCE8(c); // 801CBA04
  c->r[3]=c->r[30]|c->r[30]; // 801CBA08
  c->lr=0x801CBA10u; f_8012FA6C(c); // 801CBA0C
  c->r[3]=c->r[31]|c->r[31]; // 801CBA10
  c->lr=0x801CBA18u; f_8012FCD0(c); // 801CBA14
  c->r[3]=c->r[30]|c->r[30]; // 801CBA18
  c->lr=0x801CBA20u; f_8012FA74(c); // 801CBA1C
  c->r[3]=c->r[31]|c->r[31]; // 801CBA20
  c->lr=0x801CBA28u; f_8012FCE0(c); // 801CBA24
  c->r[4]=c->r[3]|c->r[3]; // 801CBA28
  c->r[3]=c->r[30]|c->r[30]; // 801CBA2C
  c->lr=0x801CBA34u; f_8012F918(c); // 801CBA30
  c->r[3]=c->r[31]|c->r[31]; // 801CBA34
  c->lr=0x801CBA3Cu; f_8012FCF8(c); // 801CBA38
  c->f[31]=c->f[1]; // 801CBA3C
  c->r[3]=c->r[30]|c->r[30]; // 801CBA40
  c->lr=0x801CBA48u; f_8012AA10(c); // 801CBA44
  c->f[1]=c->f[31]; // 801CBA48
  c->lr=0x801CBA50u; f_80110580(c); // 801CBA4C
  c->r[3]=c->r[31]|c->r[31]; // 801CBA50
  c->lr=0x801CBA58u; f_8012FD00(c); // 801CBA54
  c->f[31]=c->f[1]; // 801CBA58
  c->r[3]=c->r[30]|c->r[30]; // 801CBA5C
  c->lr=0x801CBA64u; f_8012AA08(c); // 801CBA60
  c->f[1]=c->f[31]; // 801CBA64
  c->lr=0x801CBA6Cu; f_80110580(c); // 801CBA68
  c->r[3]=c->r[31]|c->r[31]; // 801CBA6C
  c->lr=0x801CBA74u; f_8012FD08(c); // 801CBA70
  c->f[31]=c->f[1]; // 801CBA74
  c->r[3]=c->r[30]|c->r[30]; // 801CBA78
  c->lr=0x801CBA80u; f_8012AA10(c); // 801CBA7C
  c->f[1]=c->f[31]; // 801CBA80
  c->lr=0x801CBA88u; f_80110588(c); // 801CBA84
  c->r[3]=c->r[31]|c->r[31]; // 801CBA88
  c->lr=0x801CBA90u; f_8012FD10(c); // 801CBA8C
  c->f[31]=c->f[1]; // 801CBA90
  c->r[3]=c->r[30]|c->r[30]; // 801CBA94
  c->lr=0x801CBA9Cu; f_8012AA08(c); // 801CBA98
  c->f[1]=c->f[31]; // 801CBA9C
  c->lr=0x801CBAA4u; f_80110588(c); // 801CBAA0
  c->r[0]=0u+0x00000028u; // 801CBAA4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CBAA8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CBAAC
  c->r[0]=0u+0x00000018u; // 801CBAB0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CBAB4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801CBAB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBABC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBAC0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CBAC4
  c->lr=c->r[0]; // 801CBAC8
  c->r[1]=c->r[1]+0x00000030u; // 801CBACC
  return; // 801CBAD0
}

// fn_801CBAD4
void f_801CBAD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBAD4
  c->r[0]=c->lr; // 801CBAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBAE0
  c->r[31]=c->r[3]|c->r[3]; // 801CBAE4
  {uint32_t ea=c->r[3]+0x00000B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBAE8
  {uint32_t ea=c->r[3]+0x00000B38u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBAEC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CBAF0
  c->lr=0x801CBAF8u; f_80114AD0(c); // 801CBAF4
  c->r[3]=c->r[31]|c->r[31]; // 801CBAF8
  {uint32_t ea=c->r[31]+0x00000B34u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CBAFC
  {uint32_t ea=c->r[31]+0x00000B3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CBB00
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 801CBB04
  c->lr=0x801CBB0Cu; f_80114AC8(c); // 801CBB08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBB0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBB10
  c->lr=c->r[0]; // 801CBB14
  c->r[1]=c->r[1]+0x00000010u; // 801CBB18
  return; // 801CBB1C
}

// fn_801CBB20
void f_801CBB20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBB20
  c->r[0]=c->lr; // 801CBB24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBB28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBB2C
  c->r[31]=c->r[3]|c->r[3]; // 801CBB30
  c->lr=0x801CBB38u; f_8012FAAC(c); // 801CBB34
  c->r[3]=0u+0x80470000u; // 801CBB38
  c->r[0]=c->r[3]+0x00002260u; // 801CBB3C
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CBB40
  c->r[0]=0u+0x00000000u; // 801CBB44
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801CBB48
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801CBB4C
  c->r[3]=c->r[31]|c->r[31]; // 801CBB50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBB54
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBB58
  c->lr=c->r[0]; // 801CBB5C
  c->r[1]=c->r[1]+0x00000010u; // 801CBB60
  return; // 801CBB64
}

// fn_801CBB68
void f_801CBB68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBB68
  c->r[0]=c->lr; // 801CBB6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBB70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBB74
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBB78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBB7C
  c->r[29]=c->r[3]|c->r[3]; // 801CBB80
  c->lr=0x801CBB88u; f_80056B5C(c); // 801CBB84
  c->r[30]=c->r[3]|c->r[3]; // 801CBB88
  c->lr=0x801CBB90u; f_801F1340(c); // 801CBB8C
  c->lr=0x801CBB94u; f_80056B54(c); // 801CBB90
  c->r[3]=0u+0x00000B28u; // 801CBB94
  c->lr=0x801CBB9Cu; f_80047B64(c); // 801CBB98
  c->r[31]=c->r[3]|c->r[3]; // 801CBB9C
  cmps(c,0,(int32_t)c->r[3],0); // 801CBBA0
  if (crb(c,2)) { goto L_801CBBAC; } // 801CBBA4
  c->lr=0x801CBBACu; f_801CC37C(c); // 801CBBA8
L_801CBBAC:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801CBBAC
  c->r[3]=c->r[30]|c->r[30]; // 801CBBB0
  c->lr=0x801CBBB8u; f_80056B54(c); // 801CBBB4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CBBB8
  c->r[4]=0u+0x00000000u; // 801CBBBC
  c->lr=0x801CBBC4u; f_80114AE0(c); // 801CBBC0
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CBBC4
  c->r[4]=0u+0x00000000u; // 801CBBC8
  c->lr=0x801CBBD0u; f_801169C8(c); // 801CBBCC
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CBBD0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CBBD4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801CBBD8
  c->ctr=c->r[12]; // 801CBBDC
  if (true) { c->lr=0x801CBBE4u; dispatch(c,c->ctr); } // 801CBBE0
  c->lr=0x801CBBE8u; f_80056B5C(c); // 801CBBE4
  c->r[30]=c->r[3]|c->r[3]; // 801CBBE8
  c->lr=0x801CBBF0u; f_801F1340(c); // 801CBBEC
  c->lr=0x801CBBF4u; f_80056B54(c); // 801CBBF0
  c->r[3]=0u+0x000000C8u; // 801CBBF4
  c->lr=0x801CBBFCu; f_80047B64(c); // 801CBBF8
  c->r[31]=c->r[3]|c->r[3]; // 801CBBFC
  cmps(c,0,(int32_t)c->r[3],0); // 801CBC00
  if (crb(c,2)) { goto L_801CBC0C; } // 801CBC04
  c->lr=0x801CBC0Cu; f_8017B894(c); // 801CBC08
L_801CBC0C:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801CBC0C
  c->r[3]=c->r[30]|c->r[30]; // 801CBC10
  c->lr=0x801CBC18u; f_80056B54(c); // 801CBC14
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CBC18
  c->r[4]=0u+0x00000000u; // 801CBC1C
  c->lr=0x801CBC24u; f_8017B8DC(c); // 801CBC20
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CBC24
  c->lr=0x801CBC2Cu; f_80116A2C(c); // 801CBC28
  c->r[31]=c->r[3]|c->r[3]; // 801CBC2C
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CBC30
  c->lr=0x801CBC38u; f_8014CAB4(c); // 801CBC34
  c->r[4]=c->r[31]|c->r[31]; // 801CBC38
  c->r[5]=0u+0x80470000u; // 801CBC3C
  c->r[5]=c->r[5]+0x00002250u; // 801CBC40
  c->r[6]=0u+0x00000000u; // 801CBC44
  c->lr=0x801CBC4Cu; f_8012EE8C(c); // 801CBC48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CBC4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CBC50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CBC54
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBC58
  c->lr=c->r[0]; // 801CBC5C
  c->r[1]=c->r[1]+0x00000020u; // 801CBC60
  return; // 801CBC64
}

// fn_801CBC68
void f_801CBC68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBC68
  c->r[0]=c->lr; // 801CBC6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBC70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBC74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBC78
  c->r[30]=c->r[3]|c->r[3]; // 801CBC7C
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CBC80
  cmps(c,0,(int32_t)c->r[3],0); // 801CBC84
  if (crb(c,2)) { goto L_801CBC94; } // 801CBC88
  c->lr=0x801CBC90u; f_8014CAB4(c); // 801CBC8C
  c->lr=0x801CBC94u; f_8012F02C(c); // 801CBC90
L_801CBC94:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CBC94
  cmps(c,0,(int32_t)c->r[3],0); // 801CBC98
  if (crb(c,2)) { goto L_801CBCE4; } // 801CBC9C
  c->lr=0x801CBCA4u; f_8017B9D0(c); // 801CBCA0
  c->lr=0x801CBCA8u; f_80056B5C(c); // 801CBCA4
  c->r[31]=c->r[3]|c->r[3]; // 801CBCA8
  c->lr=0x801CBCB0u; f_801F1340(c); // 801CBCAC
  c->lr=0x801CBCB4u; f_80056B54(c); // 801CBCB0
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CBCB4
  cmps(c,0,(int32_t)c->r[3],0); // 801CBCB8
  if (crb(c,2)) { goto L_801CBCD4; } // 801CBCBC
  c->r[4]=0u+0x00000001u; // 801CBCC0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CBCC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CBCC8
  c->ctr=c->r[12]; // 801CBCCC
  if (true) { c->lr=0x801CBCD4u; dispatch(c,c->ctr); } // 801CBCD0
L_801CBCD4:;
  c->r[3]=c->r[31]|c->r[31]; // 801CBCD4
  c->lr=0x801CBCDCu; f_80056B54(c); // 801CBCD8
  c->r[0]=0u+0x00000000u; // 801CBCDC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801CBCE0
L_801CBCE4:;
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CBCE4
  cmps(c,0,(int32_t)c->r[3],0); // 801CBCE8
  if (crb(c,2)) { goto L_801CBD40; } // 801CBCEC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CBCF0
  c->r[12]=R32(c->r[12]+0x00000060u); // 801CBCF4
  c->ctr=c->r[12]; // 801CBCF8
  if (true) { c->lr=0x801CBD00u; dispatch(c,c->ctr); } // 801CBCFC
  c->lr=0x801CBD04u; f_80056B5C(c); // 801CBD00
  c->r[31]=c->r[3]|c->r[3]; // 801CBD04
  c->lr=0x801CBD0Cu; f_801F1340(c); // 801CBD08
  c->lr=0x801CBD10u; f_80056B54(c); // 801CBD0C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CBD10
  cmps(c,0,(int32_t)c->r[3],0); // 801CBD14
  if (crb(c,2)) { goto L_801CBD30; } // 801CBD18
  c->r[4]=0u+0x00000001u; // 801CBD1C
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CBD20
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CBD24
  c->ctr=c->r[12]; // 801CBD28
  if (true) { c->lr=0x801CBD30u; dispatch(c,c->ctr); } // 801CBD2C
L_801CBD30:;
  c->r[3]=c->r[31]|c->r[31]; // 801CBD30
  c->lr=0x801CBD38u; f_80056B54(c); // 801CBD34
  c->r[0]=0u+0x00000000u; // 801CBD38
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801CBD3C
L_801CBD40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBD40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBD44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBD48
  c->lr=c->r[0]; // 801CBD4C
  c->r[1]=c->r[1]+0x00000010u; // 801CBD50
  return; // 801CBD54
}

// fn_801CBD58
void f_801CBD58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBD58
  c->r[0]=c->lr; // 801CBD5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBD60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBD64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CBD68
  c->r[30]=c->r[3]|c->r[3]; // 801CBD6C
  c->r[31]=c->r[4]|c->r[4]; // 801CBD70
  cmps(c,0,(int32_t)c->r[3],0); // 801CBD74
  if (crb(c,2)) { goto L_801CBD98; } // 801CBD78
  c->r[4]=0u+0x00000000u; // 801CBD7C
  c->lr=0x801CBD84u; f_8012F7F0(c); // 801CBD80
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CBD84
  cmps(c,0,(int32_t)c->r[0],0); // 801CBD88
  if (!crb(c,1)) { goto L_801CBD98; } // 801CBD8C
  c->r[3]=c->r[30]|c->r[30]; // 801CBD90
  c->lr=0x801CBD98u; f_80047B20(c); // 801CBD94
L_801CBD98:;
  c->r[3]=c->r[30]|c->r[30]; // 801CBD98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBD9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CBDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBDA4
  c->lr=c->r[0]; // 801CBDA8
  c->r[1]=c->r[1]+0x00000010u; // 801CBDAC
  return; // 801CBDB0
}

// fn_801CBDB4
void f_801CBDB4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CBDB4
  c->r[4]=0u+0x00000000u; // 801CBDB8
  c->r[5]=0u+0x00000006u; // 801CBDBC
  f_8012E640(c); return; // 801CBDC0
}

// fn_801CBDC4
void f_801CBDC4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CBDC4
  c->r[4]=0u+0x00000002u; // 801CBDC8
  c->r[5]=0u+0x00000006u; // 801CBDCC
  f_8012E640(c); return; // 801CBDD0
}

// fn_801CBDD4
void f_801CBDD4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CBDD4
  c->r[4]=0u+0x00000001u; // 801CBDD8
  c->r[5]=0u+0x00000006u; // 801CBDDC
  f_8012E640(c); return; // 801CBDE0
}

// fn_801CBDE4
void f_801CBDE4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CBDE4
  c->r[4]=0u+0x00000000u; // 801CBDE8
  f_8012ECA4(c); return; // 801CBDEC
}

// fn_801CBDF0
void f_801CBDF0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CBDF0
  f_8012F910(c); return; // 801CBDF4
}

// fn_801CBDF8
void f_801CBDF8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CBDF8
  f_8017BB58(c); return; // 801CBDFC
}

// fn_801CBE00
void f_801CBE00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBE00
  c->r[0]=c->lr; // 801CBE04
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CBE08
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801CBE0C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801CBE10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801CBE14
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801CBE18
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801CBE1C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801CBE20
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CBE24
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CBE28
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CBE2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CBE30
  c->r[28]=c->r[3]|c->r[3]; // 801CBE34
  c->lr=0x801CBE3Cu; f_8011B41C(c); // 801CBE38
  c->r[4]=0u+0x00000019u; // 801CBE3C
  c->lr=0x801CBE44u; f_8011B814(c); // 801CBE40
  c->r[30]=c->r[3]|c->r[3]; // 801CBE44
  c->lr=0x801CBE4Cu; f_8011B41C(c); // 801CBE48
  c->r[4]=0u+0x00000009u; // 801CBE4C
  c->lr=0x801CBE54u; f_8011B814(c); // 801CBE50
  c->r[29]=c->r[3]|c->r[3]; // 801CBE54
  c->lr=0x801CBE5Cu; f_801CDCF0(c); // 801CBE58
  c->f[29]=c->f[1]; // 801CBE5C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBE60
  c->lr=0x801CBE68u; f_8014CAB4(c); // 801CBE64
  c->f[1]=c->f[29]; // 801CBE68
  c->lr=0x801CBE70u; f_80117D04(c); // 801CBE6C
  c->r[3]=c->r[29]|c->r[29]; // 801CBE70
  c->lr=0x801CBE78u; f_801CDD08(c); // 801CBE74
  c->f[29]=c->f[1]; // 801CBE78
  c->r[3]=c->r[29]|c->r[29]; // 801CBE7C
  c->lr=0x801CBE84u; f_801CDD00(c); // 801CBE80
  c->f[31]=c->f[1]; // 801CBE84
  c->r[3]=c->r[29]|c->r[29]; // 801CBE88
  c->lr=0x801CBE90u; f_801CDCF8(c); // 801CBE8C
  c->f[30]=c->f[1]; // 801CBE90
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBE94
  c->lr=0x801CBE9Cu; f_8014CAB4(c); // 801CBE98
  c->f[1]=c->f[30]; // 801CBE9C
  c->f[2]=c->f[31]; // 801CBEA0
  c->f[3]=c->f[29]; // 801CBEA4
  c->lr=0x801CBEACu; f_80114AB8(c); // 801CBEA8
  c->r[3]=c->r[29]|c->r[29]; // 801CBEAC
  c->lr=0x801CBEB4u; f_801CDD10(c); // 801CBEB0
  c->f[31]=c->f[1]; // 801CBEB4
  c->r[3]=c->r[29]|c->r[29]; // 801CBEB8
  c->lr=0x801CBEC0u; f_801CDD10(c); // 801CBEBC
  c->f[30]=c->f[1]; // 801CBEC0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBEC4
  c->lr=0x801CBECCu; f_8014CAB4(c); // 801CBEC8
  c->f[1]=c->f[30]; // 801CBECC
  c->f[2]=c->f[31]; // 801CBED0
  {uint32_t ea=c->r[2]+0xFFFF9378u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CBED4
  c->lr=0x801CBEDCu; f_80114AA8(c); // 801CBED8
  c->r[3]=c->r[29]|c->r[29]; // 801CBEDC
  c->lr=0x801CBEE4u; f_8012FCB0(c); // 801CBEE0
  c->f[30]=c->f[1]; // 801CBEE4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBEE8
  c->lr=0x801CBEF0u; f_8014CAB4(c); // 801CBEEC
  c->f[1]=c->f[30]; // 801CBEF0
  c->lr=0x801CBEF8u; f_8012FA30(c); // 801CBEF4
  c->r[3]=c->r[29]|c->r[29]; // 801CBEF8
  c->lr=0x801CBF00u; f_8012FCB8(c); // 801CBEFC
  c->f[30]=c->f[1]; // 801CBF00
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBF04
  c->lr=0x801CBF0Cu; f_8014CAB4(c); // 801CBF08
  c->f[1]=c->f[30]; // 801CBF0C
  c->lr=0x801CBF14u; f_8012FA38(c); // 801CBF10
  c->r[3]=c->r[29]|c->r[29]; // 801CBF14
  c->lr=0x801CBF1Cu; f_8012FCC8(c); // 801CBF18
  c->f[30]=c->f[1]; // 801CBF1C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBF20
  c->lr=0x801CBF28u; f_8014CAB4(c); // 801CBF24
  c->f[1]=c->f[30]; // 801CBF28
  c->lr=0x801CBF30u; f_8012FA4C(c); // 801CBF2C
  c->r[3]=c->r[29]|c->r[29]; // 801CBF30
  c->lr=0x801CBF38u; f_8012FCD0(c); // 801CBF34
  c->f[30]=c->f[1]; // 801CBF38
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBF3C
  c->lr=0x801CBF44u; f_8014CAB4(c); // 801CBF40
  c->f[1]=c->f[30]; // 801CBF44
  c->lr=0x801CBF4Cu; f_8012FA54(c); // 801CBF48
  c->r[3]=c->r[29]|c->r[29]; // 801CBF4C
  c->lr=0x801CBF54u; f_8012FCE8(c); // 801CBF50
  c->f[30]=c->f[1]; // 801CBF54
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBF58
  c->lr=0x801CBF60u; f_8014CAB4(c); // 801CBF5C
  c->f[1]=c->f[30]; // 801CBF60
  c->lr=0x801CBF68u; f_8012FA6C(c); // 801CBF64
  c->r[3]=c->r[29]|c->r[29]; // 801CBF68
  c->lr=0x801CBF70u; f_8012FCD0(c); // 801CBF6C
  c->f[30]=c->f[1]; // 801CBF70
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBF74
  c->lr=0x801CBF7Cu; f_8014CAB4(c); // 801CBF78
  c->f[1]=c->f[30]; // 801CBF7C
  c->lr=0x801CBF84u; f_8012FA74(c); // 801CBF80
  c->r[3]=c->r[29]|c->r[29]; // 801CBF84
  c->lr=0x801CBF8Cu; f_8012FCE0(c); // 801CBF88
  c->r[31]=c->r[3]|c->r[3]; // 801CBF8C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBF90
  c->lr=0x801CBF98u; f_8014CAB4(c); // 801CBF94
  c->r[4]=c->r[31]|c->r[31]; // 801CBF98
  c->lr=0x801CBFA0u; f_8012F918(c); // 801CBF9C
  c->r[3]=c->r[29]|c->r[29]; // 801CBFA0
  c->lr=0x801CBFA8u; f_8012FCF8(c); // 801CBFA4
  c->f[30]=c->f[1]; // 801CBFA8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBFAC
  c->lr=0x801CBFB4u; f_8014CAB4(c); // 801CBFB0
  c->lr=0x801CBFB8u; f_8012AA10(c); // 801CBFB4
  c->f[1]=c->f[30]; // 801CBFB8
  c->lr=0x801CBFC0u; f_80110580(c); // 801CBFBC
  c->r[3]=c->r[29]|c->r[29]; // 801CBFC0
  c->lr=0x801CBFC8u; f_8012FD00(c); // 801CBFC4
  c->f[30]=c->f[1]; // 801CBFC8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBFCC
  c->lr=0x801CBFD4u; f_8014CAB4(c); // 801CBFD0
  c->lr=0x801CBFD8u; f_8012AA08(c); // 801CBFD4
  c->f[1]=c->f[30]; // 801CBFD8
  c->lr=0x801CBFE0u; f_80110580(c); // 801CBFDC
  c->r[3]=c->r[29]|c->r[29]; // 801CBFE0
  c->lr=0x801CBFE8u; f_8012FD08(c); // 801CBFE4
  c->f[30]=c->f[1]; // 801CBFE8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CBFEC
  c->lr=0x801CBFF4u; f_8014CAB4(c); // 801CBFF0
  c->lr=0x801CBFF8u; f_8012AA10(c); // 801CBFF4
  c->f[1]=c->f[30]; // 801CBFF8
  c->lr=0x801CC000u; f_80110588(c); // 801CBFFC
  c->r[3]=c->r[29]|c->r[29]; // 801CC000
  c->lr=0x801CC008u; f_8012FD10(c); // 801CC004
  c->f[30]=c->f[1]; // 801CC008
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC00C
  c->lr=0x801CC014u; f_8014CAB4(c); // 801CC010
  c->lr=0x801CC018u; f_8012AA08(c); // 801CC014
  c->f[1]=c->f[30]; // 801CC018
  c->lr=0x801CC020u; f_80110588(c); // 801CC01C
  c->r[3]=c->r[29]|c->r[29]; // 801CC020
  c->lr=0x801CC028u; f_801CDD30(c); // 801CC024
  c->f[31]=c->f[1]; // 801CC028
  c->r[3]=c->r[29]|c->r[29]; // 801CC02C
  c->lr=0x801CC034u; f_801CDD28(c); // 801CC030
  c->f[30]=c->f[1]; // 801CC034
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC038
  c->lr=0x801CC040u; f_8014CAAC(c); // 801CC03C
  c->f[1]=c->f[30]; // 801CC040
  c->f[2]=c->f[31]; // 801CC044
  c->lr=0x801CC04Cu; f_801313A0(c); // 801CC048
  c->r[3]=c->r[29]|c->r[29]; // 801CC04C
  c->lr=0x801CC054u; f_801CDD38(c); // 801CC050
  c->f[30]=c->f[1]; // 801CC054
  c->r[3]=c->r[29]|c->r[29]; // 801CC058
  c->lr=0x801CC060u; f_801CDD38(c); // 801CC05C
  c->f[31]=c->f[1]; // 801CC060
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC064
  c->lr=0x801CC06Cu; f_8014CAAC(c); // 801CC068
  c->f[1]=c->f[31]; // 801CC06C
  c->f[2]=c->f[30]; // 801CC070
  c->lr=0x801CC078u; f_801313AC(c); // 801CC074
  c->r[3]=c->r[29]|c->r[29]; // 801CC078
  c->lr=0x801CC080u; f_8012FCB0(c); // 801CC07C
  c->f[31]=c->f[1]; // 801CC080
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC084
  c->lr=0x801CC08Cu; f_8014CAAC(c); // 801CC088
  c->f[1]=c->f[31]; // 801CC08C
  c->lr=0x801CC094u; f_80131C38(c); // 801CC090
  c->r[3]=c->r[29]|c->r[29]; // 801CC094
  c->lr=0x801CC09Cu; f_8012FCB8(c); // 801CC098
  c->f[31]=c->f[1]; // 801CC09C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC0A0
  c->lr=0x801CC0A8u; f_8014CAAC(c); // 801CC0A4
  c->f[1]=c->f[31]; // 801CC0A8
  c->lr=0x801CC0B0u; f_80131C40(c); // 801CC0AC
  c->r[3]=c->r[29]|c->r[29]; // 801CC0B0
  c->lr=0x801CC0B8u; f_8012FCC8(c); // 801CC0B4
  c->f[31]=c->f[1]; // 801CC0B8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC0BC
  c->lr=0x801CC0C4u; f_8014CAAC(c); // 801CC0C0
  c->f[1]=c->f[31]; // 801CC0C4
  c->lr=0x801CC0CCu; f_80131C54(c); // 801CC0C8
  c->r[3]=c->r[29]|c->r[29]; // 801CC0CC
  c->lr=0x801CC0D4u; f_8012FCD0(c); // 801CC0D0
  c->f[31]=c->f[1]; // 801CC0D4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC0D8
  c->lr=0x801CC0E0u; f_8014CAAC(c); // 801CC0DC
  c->f[1]=c->f[31]; // 801CC0E0
  c->lr=0x801CC0E8u; f_80131C5C(c); // 801CC0E4
  c->r[3]=c->r[29]|c->r[29]; // 801CC0E8
  c->lr=0x801CC0F0u; f_8012FCE8(c); // 801CC0EC
  c->f[31]=c->f[1]; // 801CC0F0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC0F4
  c->lr=0x801CC0FCu; f_8014CAAC(c); // 801CC0F8
  c->f[1]=c->f[31]; // 801CC0FC
  c->lr=0x801CC104u; f_80131C64(c); // 801CC100
  c->r[3]=c->r[29]|c->r[29]; // 801CC104
  c->lr=0x801CC10Cu; f_8012FCD0(c); // 801CC108
  c->f[31]=c->f[1]; // 801CC10C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC110
  c->lr=0x801CC118u; f_8014CAAC(c); // 801CC114
  c->f[1]=c->f[31]; // 801CC118
  c->lr=0x801CC120u; f_80131C6C(c); // 801CC11C
  c->r[3]=c->r[29]|c->r[29]; // 801CC120
  c->lr=0x801CC128u; f_8012FCE0(c); // 801CC124
  c->r[31]=c->r[3]|c->r[3]; // 801CC128
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC12C
  c->lr=0x801CC134u; f_8014CAAC(c); // 801CC130
  c->r[4]=c->r[31]|c->r[31]; // 801CC134
  c->lr=0x801CC13Cu; f_80131B68(c); // 801CC138
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC13C
  c->lr=0x801CC144u; f_8014CAAC(c); // 801CC140
  c->r[4]=c->r[13]+0xFFFF9B78u; // 801CC144
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC148
  c->lr=0x801CC150u; f_801313D4(c); // 801CC14C
  c->r[3]=c->r[30]|c->r[30]; // 801CC150
  c->r[4]=0u+0x00000004u; // 801CC154
  c->lr=0x801CC15Cu; f_8011961C(c); // 801CC158
  c->r[4]=c->r[3]|c->r[3]; // 801CC15C
  c->r[3]=c->r[1]+0x00000008u; // 801CC160
  c->lr=0x801CC168u; f_800549FC(c); // 801CC164
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC168
  c->lr=0x801CC170u; f_8014CAAC(c); // 801CC16C
  c->r[4]=c->r[1]+0x00000008u; // 801CC170
  c->lr=0x801CC178u; f_801313CC(c); // 801CC174
  c->r[3]=c->r[1]+0x00000008u; // 801CC178
  c->r[4]=0u+0xFFFFFFFFu; // 801CC17C
  c->lr=0x801CC184u; f_80047BD4(c); // 801CC180
  c->r[3]=c->r[29]|c->r[29]; // 801CC184
  c->lr=0x801CC18Cu; f_8012FCF8(c); // 801CC188
  c->f[31]=c->f[1]; // 801CC18C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC190
  c->lr=0x801CC198u; f_8014CAAC(c); // 801CC194
  c->lr=0x801CC19Cu; f_80137E4C(c); // 801CC198
  c->f[1]=c->f[31]; // 801CC19C
  c->lr=0x801CC1A4u; f_80110580(c); // 801CC1A0
  c->r[3]=c->r[29]|c->r[29]; // 801CC1A4
  c->lr=0x801CC1ACu; f_8012FD00(c); // 801CC1A8
  c->f[31]=c->f[1]; // 801CC1AC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC1B0
  c->lr=0x801CC1B8u; f_8014CAAC(c); // 801CC1B4
  c->lr=0x801CC1BCu; f_80137E44(c); // 801CC1B8
  c->f[1]=c->f[31]; // 801CC1BC
  c->lr=0x801CC1C4u; f_80110580(c); // 801CC1C0
  c->r[3]=c->r[29]|c->r[29]; // 801CC1C4
  c->lr=0x801CC1CCu; f_8012FD08(c); // 801CC1C8
  c->f[31]=c->f[1]; // 801CC1CC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC1D0
  c->lr=0x801CC1D8u; f_8014CAAC(c); // 801CC1D4
  c->lr=0x801CC1DCu; f_80137E4C(c); // 801CC1D8
  c->f[1]=c->f[31]; // 801CC1DC
  c->lr=0x801CC1E4u; f_80110588(c); // 801CC1E0
  c->r[3]=c->r[29]|c->r[29]; // 801CC1E4
  c->lr=0x801CC1ECu; f_8012FD10(c); // 801CC1E8
  c->f[31]=c->f[1]; // 801CC1EC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC1F0
  c->lr=0x801CC1F8u; f_8014CAAC(c); // 801CC1F4
  c->lr=0x801CC1FCu; f_80137E44(c); // 801CC1F8
  c->f[1]=c->f[31]; // 801CC1FC
  c->lr=0x801CC204u; f_80110588(c); // 801CC200
  c->r[0]=0u+0x00000048u; // 801CC204
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CC208
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801CC20C
  c->r[0]=0u+0x00000038u; // 801CC210
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CC214
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801CC218
  c->r[0]=0u+0x00000028u; // 801CC21C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801CC220
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801CC224
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC228
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC22C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC230
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CC234
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CC238
  c->lr=c->r[0]; // 801CC23C
  c->r[1]=c->r[1]+0x00000050u; // 801CC240
  return; // 801CC244
}

// fn_801CC248
void f_801CC248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC248
  c->r[0]=c->lr; // 801CC24C
  W32(c->r[1]+0x00000124u,c->r[0]); // 801CC250
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801CC254
  W32(c->r[1]+0x00000118u,c->r[30]); // 801CC258
  W32(c->r[1]+0x00000114u,c->r[29]); // 801CC25C
  W32(c->r[1]+0x00000110u,c->r[28]); // 801CC260
  c->r[28]=c->r[3]|c->r[3]; // 801CC264
  c->r[29]=c->r[4]|c->r[4]; // 801CC268
  c->r[31]=c->r[5]|c->r[5]; // 801CC26C
  c->r[4]=c->r[1]+0x00000004u; // 801CC270
  c->r[3]=0u+0x00000000u; // 801CC274
  c->r[0]=0u+0x00000020u; // 801CC278
  c->ctr=c->r[0]; // 801CC27C
L_801CC280:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CC280
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801CC284
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CC280; } // 801CC288
  c->lr=0x801CC290u; f_8007B524(c); // 801CC28C
  c->r[4]=0u+0x00000047u; // 801CC290
  c->lr=0x801CC298u; f_800A2EF0(c); // 801CC294
  c->r[30]=c->r[3]|c->r[3]; // 801CC298
  cmps(c,0,(int32_t)c->r[31],0); // 801CC29C
  c->r[31]=0u+0x00000007u; // 801CC2A0
  if (crb(c,2)) { goto L_801CC2AC; } // 801CC2A4
  c->r[31]=0u+0x00000006u; // 801CC2A8
L_801CC2AC:;
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC2AC
  c->lr=0x801CC2B4u; f_8014CAB4(c); // 801CC2B0
  c->r[4]=0u+0x00000001u; // 801CC2B4
  c->r[5]=0u+0x00000003u; // 801CC2B8
  c->lr=0x801CC2C0u; f_8012E640(c); // 801CC2BC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC2C0
  c->lr=0x801CC2C8u; f_8014CAB4(c); // 801CC2C4
  c->r[4]=c->r[31]|c->r[31]; // 801CC2C8
  c->r[5]=0u+0x00000004u; // 801CC2CC
  c->lr=0x801CC2D4u; f_8012E640(c); // 801CC2D0
  c->r[3]=c->r[1]+0x00000008u; // 801CC2D4
  c->r[4]=c->r[30]|c->r[30]; // 801CC2D8
  c->r[5]=c->r[29]|c->r[29]; // 801CC2DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC2E0
  c->lr=0x801CC2E8u; f_802E7CC4(c); // 801CC2E4
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC2E8
  c->lr=0x801CC2F0u; f_8014CAAC(c); // 801CC2EC
  c->r[4]=c->r[1]+0x00000008u; // 801CC2F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CC2F4
  c->lr=0x801CC2FCu; f_801313D4(c); // 801CC2F8
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801CC2FC
  c->r[30]=R32(c->r[1]+0x00000118u); // 801CC300
  c->r[29]=R32(c->r[1]+0x00000114u); // 801CC304
  c->r[28]=R32(c->r[1]+0x00000110u); // 801CC308
  c->r[0]=R32(c->r[1]+0x00000124u); // 801CC30C
  c->lr=c->r[0]; // 801CC310
  c->r[1]=c->r[1]+0x00000120u; // 801CC314
  return; // 801CC318
}

// fn_801CC31C
void f_801CC31C(Ctx* __restrict c) {
  f_801CBE00(c); return; // 801CC31C
}

// fn_801CC320
void f_801CC320(Ctx* __restrict c) {
  f_801CC248(c); return; // 801CC320
}

// fn_801CC324
void f_801CC324(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC324
  c->r[0]=c->lr; // 801CC328
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC32C
  c->lr=0x801CC334u; f_8011B41C(c); // 801CC330
  c->r[4]=0u+0x00000009u; // 801CC334
  c->lr=0x801CC33Cu; f_8011B814(c); // 801CC338
  c->lr=0x801CC340u; f_801CDD48(c); // 801CC33C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC340
  c->lr=c->r[0]; // 801CC344
  c->r[1]=c->r[1]+0x00000010u; // 801CC348
  return; // 801CC34C
}

// fn_801CC350
void f_801CC350(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC350
  c->r[0]=c->lr; // 801CC354
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC358
  c->lr=0x801CC360u; f_8011B41C(c); // 801CC35C
  c->r[4]=0u+0x00000009u; // 801CC360
  c->lr=0x801CC368u; f_8011B814(c); // 801CC364
  c->lr=0x801CC36Cu; f_801CDD50(c); // 801CC368
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC36C
  c->lr=c->r[0]; // 801CC370
  c->r[1]=c->r[1]+0x00000010u; // 801CC374
  return; // 801CC378
}

// fn_801CC37C
void f_801CC37C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC37C
  c->r[0]=c->lr; // 801CC380
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC388
  c->r[31]=c->r[3]|c->r[3]; // 801CC38C
  c->lr=0x801CC394u; f_8012F740(c); // 801CC390
  c->r[3]=0u+0x80470000u; // 801CC394
  c->r[3]=c->r[3]+0x00002390u; // 801CC398
  W32(c->r[31]+0x00000020u,c->r[3]); // 801CC39C
  c->r[0]=c->r[3]+0x0000000Cu; // 801CC3A0
  W32(c->r[31]+0x00000288u,c->r[0]); // 801CC3A4
  c->r[0]=c->r[3]+0x00000018u; // 801CC3A8
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801CC3AC
  c->r[0]=c->r[3]+0x00000024u; // 801CC3B0
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801CC3B4
  c->r[0]=c->r[3]+0x00000030u; // 801CC3B8
  W32(c->r[31]+0x00000300u,c->r[0]); // 801CC3BC
  c->r[3]=c->r[31]|c->r[31]; // 801CC3C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC3C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC3C8
  c->lr=c->r[0]; // 801CC3CC
  c->r[1]=c->r[1]+0x00000010u; // 801CC3D0
  return; // 801CC3D4
}

// fn_801CC3D8
void f_801CC3D8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801CC3D8
  f_801CBD58(c); return; // 801CC3DC
}

// fn_801CC3E0
void f_801CC3E0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801CC3E0
  f_801CBD58(c); return; // 801CC3E4
}

// fn_801CC3E8
void f_801CC3E8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801CC3E8
  f_801CBD58(c); return; // 801CC3EC
}

// fn_801CC3F0
void f_801CC3F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801CC3F0
  f_801CBD58(c); return; // 801CC3F4
}

// fn_801CC3F8
void f_801CC3F8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801CC3F8
  f_801CAAFC(c); return; // 801CC3FC
}

// fn_801CC400
void f_801CC400(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801CC400
  f_801CAAFC(c); return; // 801CC404
}

// fn_801CC408
void f_801CC408(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801CC408
  f_801CAAFC(c); return; // 801CC40C
}

// fn_801CC410
void f_801CC410(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801CC410
  f_801CAAFC(c); return; // 801CC414
}

// fn_801CC418
void f_801CC418(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC418
  c->r[0]=c->lr; // 801CC41C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CC420
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CC424
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CC428
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801CC42C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801CC430
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC434
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC438
  c->r[30]=c->r[3]|c->r[3]; // 801CC43C
  c->lr=0x801CC444u; f_8011B41C(c); // 801CC440
  c->r[4]=0u+0x00000009u; // 801CC444
  c->lr=0x801CC44Cu; f_8011B814(c); // 801CC448
  c->r[31]=c->r[3]|c->r[3]; // 801CC44C
  c->lr=0x801CC454u; f_801CDDE0(c); // 801CC450
  c->r[3]=c->r[30]|c->r[30]; // 801CC454
  c->lr=0x801CC45Cu; f_80117D04(c); // 801CC458
  c->r[3]=c->r[31]|c->r[31]; // 801CC45C
  c->lr=0x801CC464u; f_801CDDF8(c); // 801CC460
  c->f[30]=c->f[1]; // 801CC464
  c->r[3]=c->r[31]|c->r[31]; // 801CC468
  c->lr=0x801CC470u; f_801CDDF0(c); // 801CC46C
  c->f[31]=c->f[1]; // 801CC470
  c->r[3]=c->r[31]|c->r[31]; // 801CC474
  c->lr=0x801CC47Cu; f_801CDDE8(c); // 801CC478
  c->r[3]=c->r[30]|c->r[30]; // 801CC47C
  c->f[2]=c->f[31]; // 801CC480
  c->f[3]=c->f[30]; // 801CC484
  c->lr=0x801CC48Cu; f_80114AB8(c); // 801CC488
  c->r[3]=c->r[31]|c->r[31]; // 801CC48C
  c->lr=0x801CC494u; f_801CDE00(c); // 801CC490
  c->f[31]=c->f[1]; // 801CC494
  c->r[3]=c->r[31]|c->r[31]; // 801CC498
  c->lr=0x801CC4A0u; f_801CDE00(c); // 801CC49C
  c->r[3]=c->r[30]|c->r[30]; // 801CC4A0
  c->f[2]=c->f[31]; // 801CC4A4
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CC4A8
  c->lr=0x801CC4B0u; f_80114AA8(c); // 801CC4AC
  c->r[3]=c->r[31]|c->r[31]; // 801CC4B0
  c->lr=0x801CC4B8u; f_8012FCB0(c); // 801CC4B4
  c->r[3]=c->r[30]|c->r[30]; // 801CC4B8
  c->lr=0x801CC4C0u; f_8012FA30(c); // 801CC4BC
  c->r[3]=c->r[31]|c->r[31]; // 801CC4C0
  c->lr=0x801CC4C8u; f_8012FCB8(c); // 801CC4C4
  c->r[3]=c->r[30]|c->r[30]; // 801CC4C8
  c->lr=0x801CC4D0u; f_8012FA38(c); // 801CC4CC
  c->r[3]=c->r[31]|c->r[31]; // 801CC4D0
  c->lr=0x801CC4D8u; f_8012FCC8(c); // 801CC4D4
  c->r[3]=c->r[30]|c->r[30]; // 801CC4D8
  c->lr=0x801CC4E0u; f_8012FA4C(c); // 801CC4DC
  c->r[3]=c->r[31]|c->r[31]; // 801CC4E0
  c->lr=0x801CC4E8u; f_8012FCD0(c); // 801CC4E4
  c->r[3]=c->r[30]|c->r[30]; // 801CC4E8
  c->lr=0x801CC4F0u; f_8012FA54(c); // 801CC4EC
  c->r[3]=c->r[31]|c->r[31]; // 801CC4F0
  c->lr=0x801CC4F8u; f_8012FCE8(c); // 801CC4F4
  c->r[3]=c->r[30]|c->r[30]; // 801CC4F8
  c->lr=0x801CC500u; f_8012FA6C(c); // 801CC4FC
  c->r[3]=c->r[31]|c->r[31]; // 801CC500
  c->lr=0x801CC508u; f_8012FCF0(c); // 801CC504
  c->r[3]=c->r[30]|c->r[30]; // 801CC508
  c->lr=0x801CC510u; f_8012FA74(c); // 801CC50C
  c->r[3]=c->r[31]|c->r[31]; // 801CC510
  c->lr=0x801CC518u; f_8012FCE0(c); // 801CC514
  c->r[4]=c->r[3]|c->r[3]; // 801CC518
  c->r[3]=c->r[30]|c->r[30]; // 801CC51C
  c->lr=0x801CC524u; f_8012F918(c); // 801CC520
  c->r[3]=c->r[31]|c->r[31]; // 801CC524
  c->lr=0x801CC52Cu; f_8012FCF8(c); // 801CC528
  c->f[31]=c->f[1]; // 801CC52C
  c->r[3]=c->r[30]|c->r[30]; // 801CC530
  c->lr=0x801CC538u; f_8012AA10(c); // 801CC534
  c->f[1]=c->f[31]; // 801CC538
  c->lr=0x801CC540u; f_80110580(c); // 801CC53C
  c->r[3]=c->r[31]|c->r[31]; // 801CC540
  c->lr=0x801CC548u; f_8012FD00(c); // 801CC544
  c->f[31]=c->f[1]; // 801CC548
  c->r[3]=c->r[30]|c->r[30]; // 801CC54C
  c->lr=0x801CC554u; f_8012AA08(c); // 801CC550
  c->f[1]=c->f[31]; // 801CC554
  c->lr=0x801CC55Cu; f_80110580(c); // 801CC558
  c->r[3]=c->r[31]|c->r[31]; // 801CC55C
  c->lr=0x801CC564u; f_8012FD08(c); // 801CC560
  c->f[31]=c->f[1]; // 801CC564
  c->r[3]=c->r[30]|c->r[30]; // 801CC568
  c->lr=0x801CC570u; f_8012AA10(c); // 801CC56C
  c->f[1]=c->f[31]; // 801CC570
  c->lr=0x801CC578u; f_80110588(c); // 801CC574
  c->r[3]=c->r[31]|c->r[31]; // 801CC578
  c->lr=0x801CC580u; f_8012FD10(c); // 801CC57C
  c->f[31]=c->f[1]; // 801CC580
  c->r[3]=c->r[30]|c->r[30]; // 801CC584
  c->lr=0x801CC58Cu; f_8012AA08(c); // 801CC588
  c->f[1]=c->f[31]; // 801CC58C
  c->lr=0x801CC594u; f_80110588(c); // 801CC590
  c->lr=0x801CC598u; f_8011A9D8(c); // 801CC594
  c->r[4]=0u+0x00000000u; // 801CC598
  c->lr=0x801CC5A0u; f_8011AF74(c); // 801CC59C
  c->r[31]=c->r[3]|c->r[3]; // 801CC5A0
  c->lr=0x801CC5A8u; f_8011A6E8(c); // 801CC5A4
  c->r[4]=c->r[31]|c->r[31]; // 801CC5A8
  c->lr=0x801CC5B0u; f_8011A9B0(c); // 801CC5AC
  c->lr=0x801CC5B4u; f_8012DA20(c); // 801CC5B0
  c->r[4]=c->r[3]|c->r[3]; // 801CC5B4
  c->r[3]=c->r[30]|c->r[30]; // 801CC5B8
  c->lr=0x801CC5C0u; f_80114AA0(c); // 801CC5BC
  c->r[3]=c->r[30]|c->r[30]; // 801CC5C0
  c->r[4]=0u+0x00000009u; // 801CC5C4
  c->r[5]=0u+0x00000000u; // 801CC5C8
  c->r[6]=0u+0xFFFFFFFFu; // 801CC5CC
  c->lr=0x801CC5D4u; f_8012DE5C(c); // 801CC5D0
  c->r[3]=c->r[30]|c->r[30]; // 801CC5D4
  c->lr=0x801CC5DCu; f_8012F448(c); // 801CC5D8
  c->r[3]=c->r[30]|c->r[30]; // 801CC5DC
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CC5E0
  c->r[4]=0u+0x00000006u; // 801CC5E4
  c->lr=0x801CC5ECu; f_8012E920(c); // 801CC5E8
  c->r[3]=c->r[30]|c->r[30]; // 801CC5EC
  c->r[4]=0u+0x00000001u; // 801CC5F0
  c->lr=0x801CC5F8u; f_8012E1C0(c); // 801CC5F4
  c->r[3]=c->r[30]|c->r[30]; // 801CC5F8
  c->r[4]=0u+0x00000000u; // 801CC5FC
  c->lr=0x801CC604u; f_8012F910(c); // 801CC600
  c->r[0]=0u+0x00000028u; // 801CC604
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CC608
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CC60C
  c->r[0]=0u+0x00000018u; // 801CC610
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CC614
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801CC618
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC61C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC620
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CC624
  c->lr=c->r[0]; // 801CC628
  c->r[1]=c->r[1]+0x00000030u; // 801CC62C
  return; // 801CC630
}

// fn_801CC634
void f_801CC634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC634
  c->r[0]=c->lr; // 801CC638
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC63C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC640
  c->r[31]=c->r[3]|c->r[3]; // 801CC644
  c->lr=0x801CC64Cu; f_8012FAAC(c); // 801CC648
  c->r[3]=0u+0x80470000u; // 801CC64C
  c->r[0]=c->r[3]+0x00002458u; // 801CC650
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CC654
  c->r[0]=0u+0x00000000u; // 801CC658
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801CC65C
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801CC660
  c->r[3]=c->r[31]|c->r[31]; // 801CC664
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC668
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC66C
  c->lr=c->r[0]; // 801CC670
  c->r[1]=c->r[1]+0x00000010u; // 801CC674
  return; // 801CC678
}

// fn_801CC67C
void f_801CC67C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC67C
  c->r[0]=c->lr; // 801CC680
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC684
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC688
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC68C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC690
  c->r[29]=c->r[3]|c->r[3]; // 801CC694
  c->lr=0x801CC69Cu; f_80056B5C(c); // 801CC698
  c->r[30]=c->r[3]|c->r[3]; // 801CC69C
  c->lr=0x801CC6A4u; f_801F1340(c); // 801CC6A0
  c->lr=0x801CC6A8u; f_80056B54(c); // 801CC6A4
  c->r[3]=0u+0x00000B28u; // 801CC6A8
  c->lr=0x801CC6B0u; f_80047B64(c); // 801CC6AC
  c->r[31]=c->r[3]|c->r[3]; // 801CC6B0
  cmps(c,0,(int32_t)c->r[3],0); // 801CC6B4
  if (crb(c,2)) { goto L_801CC6C0; } // 801CC6B8
  c->lr=0x801CC6C0u; f_801CCE20(c); // 801CC6BC
L_801CC6C0:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801CC6C0
  c->r[3]=c->r[30]|c->r[30]; // 801CC6C4
  c->lr=0x801CC6CCu; f_80056B54(c); // 801CC6C8
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CC6CC
  c->r[4]=0u+0x00000000u; // 801CC6D0
  c->lr=0x801CC6D8u; f_80114AE0(c); // 801CC6D4
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CC6D8
  c->r[4]=0u+0x00000000u; // 801CC6DC
  c->lr=0x801CC6E4u; f_801169C8(c); // 801CC6E0
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CC6E4
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CC6E8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801CC6EC
  c->ctr=c->r[12]; // 801CC6F0
  if (true) { c->lr=0x801CC6F8u; dispatch(c,c->ctr); } // 801CC6F4
  c->lr=0x801CC6FCu; f_80056B5C(c); // 801CC6F8
  c->r[30]=c->r[3]|c->r[3]; // 801CC6FC
  c->lr=0x801CC704u; f_801F1340(c); // 801CC700
  c->lr=0x801CC708u; f_80056B54(c); // 801CC704
  c->r[3]=0u+0x000000C8u; // 801CC708
  c->lr=0x801CC710u; f_80047B64(c); // 801CC70C
  c->r[31]=c->r[3]|c->r[3]; // 801CC710
  cmps(c,0,(int32_t)c->r[3],0); // 801CC714
  if (crb(c,2)) { goto L_801CC720; } // 801CC718
  c->lr=0x801CC720u; f_8017B894(c); // 801CC71C
L_801CC720:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801CC720
  c->r[3]=c->r[30]|c->r[30]; // 801CC724
  c->lr=0x801CC72Cu; f_80056B54(c); // 801CC728
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CC72C
  c->r[4]=0u+0x00000000u; // 801CC730
  c->lr=0x801CC738u; f_8017B8DC(c); // 801CC734
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801CC738
  c->lr=0x801CC740u; f_80116A2C(c); // 801CC73C
  c->r[31]=c->r[3]|c->r[3]; // 801CC740
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801CC744
  c->lr=0x801CC74Cu; f_8014CAB4(c); // 801CC748
  c->r[4]=c->r[31]|c->r[31]; // 801CC74C
  c->r[5]=0u+0x80470000u; // 801CC750
  c->r[5]=c->r[5]+0x00002448u; // 801CC754
  c->r[6]=0u+0x00000000u; // 801CC758
  c->lr=0x801CC760u; f_8012EE8C(c); // 801CC75C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CC760
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CC764
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CC768
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CC76C
  c->lr=c->r[0]; // 801CC770
  c->r[1]=c->r[1]+0x00000020u; // 801CC774
  return; // 801CC778
}

// fn_801CC77C
void f_801CC77C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC77C
  c->r[0]=c->lr; // 801CC780
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC788
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC78C
  c->r[30]=c->r[3]|c->r[3]; // 801CC790
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CC794
  cmps(c,0,(int32_t)c->r[3],0); // 801CC798
  if (crb(c,2)) { goto L_801CC7A8; } // 801CC79C
  c->lr=0x801CC7A4u; f_8014CAB4(c); // 801CC7A0
  c->lr=0x801CC7A8u; f_8012F02C(c); // 801CC7A4
L_801CC7A8:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CC7A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC7AC
  if (crb(c,2)) { goto L_801CC7F8; } // 801CC7B0
  c->lr=0x801CC7B8u; f_8017B9D0(c); // 801CC7B4
  c->lr=0x801CC7BCu; f_80056B5C(c); // 801CC7B8
  c->r[31]=c->r[3]|c->r[3]; // 801CC7BC
  c->lr=0x801CC7C4u; f_801F1340(c); // 801CC7C0
  c->lr=0x801CC7C8u; f_80056B54(c); // 801CC7C4
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CC7C8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC7CC
  if (crb(c,2)) { goto L_801CC7E8; } // 801CC7D0
  c->r[4]=0u+0x00000001u; // 801CC7D4
  c->r[12]=R32(c->r[3]+0x00000058u); // 801CC7D8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CC7DC
  c->ctr=c->r[12]; // 801CC7E0
  if (true) { c->lr=0x801CC7E8u; dispatch(c,c->ctr); } // 801CC7E4
L_801CC7E8:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC7E8
  c->lr=0x801CC7F0u; f_80056B54(c); // 801CC7EC
  c->r[0]=0u+0x00000000u; // 801CC7F0
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801CC7F4
L_801CC7F8:;
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CC7F8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC7FC
  if (crb(c,2)) { goto L_801CC854; } // 801CC800
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CC804
  c->r[12]=R32(c->r[12]+0x00000060u); // 801CC808
  c->ctr=c->r[12]; // 801CC80C
  if (true) { c->lr=0x801CC814u; dispatch(c,c->ctr); } // 801CC810
  c->lr=0x801CC818u; f_80056B5C(c); // 801CC814
  c->r[31]=c->r[3]|c->r[3]; // 801CC818
  c->lr=0x801CC820u; f_801F1340(c); // 801CC81C
  c->lr=0x801CC824u; f_80056B54(c); // 801CC820
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CC824
  cmps(c,0,(int32_t)c->r[3],0); // 801CC828
  if (crb(c,2)) { goto L_801CC844; } // 801CC82C
  c->r[4]=0u+0x00000001u; // 801CC830
  c->r[12]=R32(c->r[3]+0x00000020u); // 801CC834
  c->r[12]=R32(c->r[12]+0x00000008u); // 801CC838
  c->ctr=c->r[12]; // 801CC83C
  if (true) { c->lr=0x801CC844u; dispatch(c,c->ctr); } // 801CC840
L_801CC844:;
  c->r[3]=c->r[31]|c->r[31]; // 801CC844
  c->lr=0x801CC84Cu; f_80056B54(c); // 801CC848
  c->r[0]=0u+0x00000000u; // 801CC84C
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801CC850
L_801CC854:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC854
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC858
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC85C
  c->lr=c->r[0]; // 801CC860
  c->r[1]=c->r[1]+0x00000010u; // 801CC864
  return; // 801CC868
}

// fn_801CC86C
void f_801CC86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC86C
  c->r[0]=c->lr; // 801CC870
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC878
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC87C
  c->r[30]=c->r[3]|c->r[3]; // 801CC880
  c->r[31]=c->r[4]|c->r[4]; // 801CC884
  cmps(c,0,(int32_t)c->r[3],0); // 801CC888
  if (crb(c,2)) { goto L_801CC8AC; } // 801CC88C
  c->r[4]=0u+0x00000000u; // 801CC890
  c->lr=0x801CC898u; f_8012F7F0(c); // 801CC894
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CC898
  cmps(c,0,(int32_t)c->r[0],0); // 801CC89C
  if (!crb(c,1)) { goto L_801CC8AC; } // 801CC8A0
  c->r[3]=c->r[30]|c->r[30]; // 801CC8A4
  c->lr=0x801CC8ACu; f_80047B20(c); // 801CC8A8
L_801CC8AC:;
  c->r[3]=c->r[30]|c->r[30]; // 801CC8AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC8B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC8B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC8B8
  c->lr=c->r[0]; // 801CC8BC
  c->r[1]=c->r[1]+0x00000010u; // 801CC8C0
  return; // 801CC8C4
}

// fn_801CC8C8
void f_801CC8C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CC8C8
  c->r[4]=0u+0x00000000u; // 801CC8CC
  c->r[5]=0u+0x00000006u; // 801CC8D0
  f_8012E640(c); return; // 801CC8D4
}

// fn_801CC8D8
void f_801CC8D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CC8D8
  c->r[4]=0u+0x00000002u; // 801CC8DC
  c->r[5]=0u+0x00000006u; // 801CC8E0
  f_8012E640(c); return; // 801CC8E4
}

// fn_801CC8E8
void f_801CC8E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CC8E8
  c->r[4]=0u+0x00000001u; // 801CC8EC
  c->r[5]=0u+0x00000006u; // 801CC8F0
  f_8012E640(c); return; // 801CC8F4
}

// fn_801CC8F8
void f_801CC8F8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801CC8F8
  f_8012F910(c); return; // 801CC8FC
}

// fn_801CC900
void f_801CC900(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801CC900
  f_8017BB58(c); return; // 801CC904
}

// fn_801CC908
void f_801CC908(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC908
  c->r[0]=c->lr; // 801CC90C
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CC910
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 801CC914
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 801CC918
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 801CC91C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 801CC920
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 801CC924
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 801CC928
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CC92C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CC930
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CC934
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CC938
  c->r[28]=c->r[3]|c->r[3]; // 801CC93C
  c->lr=0x801CC944u; f_8011B41C(c); // 801CC940
  c->r[4]=0u+0x00000019u; // 801CC944
  c->lr=0x801CC94Cu; f_8011B814(c); // 801CC948
  c->r[30]=c->r[3]|c->r[3]; // 801CC94C
  c->lr=0x801CC954u; f_8011B41C(c); // 801CC950
  c->r[4]=0u+0x00000009u; // 801CC954
  c->lr=0x801CC95Cu; f_8011B814(c); // 801CC958
  c->r[29]=c->r[3]|c->r[3]; // 801CC95C
  c->lr=0x801CC964u; f_801CDE20(c); // 801CC960
  c->f[29]=c->f[1]; // 801CC964
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC968
  c->lr=0x801CC970u; f_8014CAB4(c); // 801CC96C
  c->f[1]=c->f[29]; // 801CC970
  c->lr=0x801CC978u; f_80117D04(c); // 801CC974
  c->r[3]=c->r[29]|c->r[29]; // 801CC978
  c->lr=0x801CC980u; f_801CDE38(c); // 801CC97C
  c->f[29]=c->f[1]; // 801CC980
  c->r[3]=c->r[29]|c->r[29]; // 801CC984
  c->lr=0x801CC98Cu; f_801CDE30(c); // 801CC988
  c->f[31]=c->f[1]; // 801CC98C
  c->r[3]=c->r[29]|c->r[29]; // 801CC990
  c->lr=0x801CC998u; f_801CDE28(c); // 801CC994
  c->f[30]=c->f[1]; // 801CC998
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC99C
  c->lr=0x801CC9A4u; f_8014CAB4(c); // 801CC9A0
  c->f[1]=c->f[30]; // 801CC9A4
  c->f[2]=c->f[31]; // 801CC9A8
  c->f[3]=c->f[29]; // 801CC9AC
  c->lr=0x801CC9B4u; f_80114AB8(c); // 801CC9B0
  c->r[3]=c->r[29]|c->r[29]; // 801CC9B4
  c->lr=0x801CC9BCu; f_801CDE40(c); // 801CC9B8
  c->f[31]=c->f[1]; // 801CC9BC
  c->r[3]=c->r[29]|c->r[29]; // 801CC9C0
  c->lr=0x801CC9C8u; f_801CDE40(c); // 801CC9C4
  c->f[30]=c->f[1]; // 801CC9C8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC9CC
  c->lr=0x801CC9D4u; f_8014CAB4(c); // 801CC9D0
  c->f[1]=c->f[30]; // 801CC9D4
  c->f[2]=c->f[31]; // 801CC9D8
  {uint32_t ea=c->r[2]+0xFFFF9380u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CC9DC
  c->lr=0x801CC9E4u; f_80114AA8(c); // 801CC9E0
  c->r[3]=c->r[29]|c->r[29]; // 801CC9E4
  c->lr=0x801CC9ECu; f_8012FCB0(c); // 801CC9E8
  c->f[30]=c->f[1]; // 801CC9EC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CC9F0
  c->lr=0x801CC9F8u; f_8014CAB4(c); // 801CC9F4
  c->f[1]=c->f[30]; // 801CC9F8
  c->lr=0x801CCA00u; f_8012FA30(c); // 801CC9FC
  c->r[3]=c->r[29]|c->r[29]; // 801CCA00
  c->lr=0x801CCA08u; f_8012FCB8(c); // 801CCA04
  c->f[30]=c->f[1]; // 801CCA08
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCA0C
  c->lr=0x801CCA14u; f_8014CAB4(c); // 801CCA10
  c->f[1]=c->f[30]; // 801CCA14
  c->lr=0x801CCA1Cu; f_8012FA38(c); // 801CCA18
  c->r[3]=c->r[29]|c->r[29]; // 801CCA1C
  c->lr=0x801CCA24u; f_8012FCC8(c); // 801CCA20
  c->f[30]=c->f[1]; // 801CCA24
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCA28
  c->lr=0x801CCA30u; f_8014CAB4(c); // 801CCA2C
  c->f[1]=c->f[30]; // 801CCA30
  c->lr=0x801CCA38u; f_8012FA4C(c); // 801CCA34
  c->r[3]=c->r[29]|c->r[29]; // 801CCA38
  c->lr=0x801CCA40u; f_8012FCD0(c); // 801CCA3C
  c->f[30]=c->f[1]; // 801CCA40
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCA44
  c->lr=0x801CCA4Cu; f_8014CAB4(c); // 801CCA48
  c->f[1]=c->f[30]; // 801CCA4C
  c->lr=0x801CCA54u; f_8012FA54(c); // 801CCA50
  c->r[3]=c->r[29]|c->r[29]; // 801CCA54
  c->lr=0x801CCA5Cu; f_8012FCE8(c); // 801CCA58
  c->f[30]=c->f[1]; // 801CCA5C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCA60
  c->lr=0x801CCA68u; f_8014CAB4(c); // 801CCA64
  c->f[1]=c->f[30]; // 801CCA68
  c->lr=0x801CCA70u; f_8012FA6C(c); // 801CCA6C
  c->r[3]=c->r[29]|c->r[29]; // 801CCA70
  c->lr=0x801CCA78u; f_8012FCD0(c); // 801CCA74
  c->f[30]=c->f[1]; // 801CCA78
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCA7C
  c->lr=0x801CCA84u; f_8014CAB4(c); // 801CCA80
  c->f[1]=c->f[30]; // 801CCA84
  c->lr=0x801CCA8Cu; f_8012FA74(c); // 801CCA88
  c->r[3]=c->r[29]|c->r[29]; // 801CCA8C
  c->lr=0x801CCA94u; f_8012FCE0(c); // 801CCA90
  c->r[31]=c->r[3]|c->r[3]; // 801CCA94
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCA98
  c->lr=0x801CCAA0u; f_8014CAB4(c); // 801CCA9C
  c->r[4]=c->r[31]|c->r[31]; // 801CCAA0
  c->lr=0x801CCAA8u; f_8012F918(c); // 801CCAA4
  c->r[3]=c->r[29]|c->r[29]; // 801CCAA8
  c->lr=0x801CCAB0u; f_8012FCF8(c); // 801CCAAC
  c->f[30]=c->f[1]; // 801CCAB0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCAB4
  c->lr=0x801CCABCu; f_8014CAB4(c); // 801CCAB8
  c->lr=0x801CCAC0u; f_8012AA10(c); // 801CCABC
  c->f[1]=c->f[30]; // 801CCAC0
  c->lr=0x801CCAC8u; f_80110580(c); // 801CCAC4
  c->r[3]=c->r[29]|c->r[29]; // 801CCAC8
  c->lr=0x801CCAD0u; f_8012FD00(c); // 801CCACC
  c->f[30]=c->f[1]; // 801CCAD0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCAD4
  c->lr=0x801CCADCu; f_8014CAB4(c); // 801CCAD8
  c->lr=0x801CCAE0u; f_8012AA08(c); // 801CCADC
  c->f[1]=c->f[30]; // 801CCAE0
  c->lr=0x801CCAE8u; f_80110580(c); // 801CCAE4
  c->r[3]=c->r[29]|c->r[29]; // 801CCAE8
  c->lr=0x801CCAF0u; f_8012FD08(c); // 801CCAEC
  c->f[30]=c->f[1]; // 801CCAF0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCAF4
  c->lr=0x801CCAFCu; f_8014CAB4(c); // 801CCAF8
  c->lr=0x801CCB00u; f_8012AA10(c); // 801CCAFC
  c->f[1]=c->f[30]; // 801CCB00
  c->lr=0x801CCB08u; f_80110588(c); // 801CCB04
  c->r[3]=c->r[29]|c->r[29]; // 801CCB08
  c->lr=0x801CCB10u; f_8012FD10(c); // 801CCB0C
  c->f[30]=c->f[1]; // 801CCB10
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCB14
  c->lr=0x801CCB1Cu; f_8014CAB4(c); // 801CCB18
  c->lr=0x801CCB20u; f_8012AA08(c); // 801CCB1C
  c->f[1]=c->f[30]; // 801CCB20
  c->lr=0x801CCB28u; f_80110588(c); // 801CCB24
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCB28
  c->lr=0x801CCB30u; f_8014CAB4(c); // 801CCB2C
  c->r[4]=0u+0x00000000u; // 801CCB30
  c->r[5]=0u+0x00000003u; // 801CCB34
  c->lr=0x801CCB3Cu; f_8012E640(c); // 801CCB38
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCB3C
  c->lr=0x801CCB44u; f_8014CAB4(c); // 801CCB40
  c->r[4]=0u+0x00000000u; // 801CCB44
  c->r[5]=0u+0x00000004u; // 801CCB48
  c->lr=0x801CCB50u; f_8012E640(c); // 801CCB4C
  c->r[3]=c->r[29]|c->r[29]; // 801CCB50
  c->lr=0x801CCB58u; f_801CDE60(c); // 801CCB54
  c->f[31]=c->f[1]; // 801CCB58
  c->r[3]=c->r[29]|c->r[29]; // 801CCB5C
  c->lr=0x801CCB64u; f_801CDE58(c); // 801CCB60
  c->f[30]=c->f[1]; // 801CCB64
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCB68
  c->lr=0x801CCB70u; f_8014CAAC(c); // 801CCB6C
  c->f[1]=c->f[30]; // 801CCB70
  c->f[2]=c->f[31]; // 801CCB74
  c->lr=0x801CCB7Cu; f_801313A0(c); // 801CCB78
  c->r[3]=c->r[29]|c->r[29]; // 801CCB7C
  c->lr=0x801CCB84u; f_801CDE68(c); // 801CCB80
  c->f[30]=c->f[1]; // 801CCB84
  c->r[3]=c->r[29]|c->r[29]; // 801CCB88
  c->lr=0x801CCB90u; f_801CDE68(c); // 801CCB8C
  c->f[31]=c->f[1]; // 801CCB90
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCB94
  c->lr=0x801CCB9Cu; f_8014CAAC(c); // 801CCB98
  c->f[1]=c->f[31]; // 801CCB9C
  c->f[2]=c->f[30]; // 801CCBA0
  c->lr=0x801CCBA8u; f_801313AC(c); // 801CCBA4
  c->r[3]=c->r[29]|c->r[29]; // 801CCBA8
  c->lr=0x801CCBB0u; f_8012FCB0(c); // 801CCBAC
  c->f[31]=c->f[1]; // 801CCBB0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCBB4
  c->lr=0x801CCBBCu; f_8014CAAC(c); // 801CCBB8
  c->f[1]=c->f[31]; // 801CCBBC
  c->lr=0x801CCBC4u; f_80131C38(c); // 801CCBC0
  c->r[3]=c->r[29]|c->r[29]; // 801CCBC4
  c->lr=0x801CCBCCu; f_8012FCB8(c); // 801CCBC8
  c->f[31]=c->f[1]; // 801CCBCC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCBD0
  c->lr=0x801CCBD8u; f_8014CAAC(c); // 801CCBD4
  c->f[1]=c->f[31]; // 801CCBD8
  c->lr=0x801CCBE0u; f_80131C40(c); // 801CCBDC
  c->r[3]=c->r[29]|c->r[29]; // 801CCBE0
  c->lr=0x801CCBE8u; f_8012FCC8(c); // 801CCBE4
  c->f[31]=c->f[1]; // 801CCBE8
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCBEC
  c->lr=0x801CCBF4u; f_8014CAAC(c); // 801CCBF0
  c->f[1]=c->f[31]; // 801CCBF4
  c->lr=0x801CCBFCu; f_80131C54(c); // 801CCBF8
  c->r[3]=c->r[29]|c->r[29]; // 801CCBFC
  c->lr=0x801CCC04u; f_8012FCD0(c); // 801CCC00
  c->f[31]=c->f[1]; // 801CCC04
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCC08
  c->lr=0x801CCC10u; f_8014CAAC(c); // 801CCC0C
  c->f[1]=c->f[31]; // 801CCC10
  c->lr=0x801CCC18u; f_80131C5C(c); // 801CCC14
  c->r[3]=c->r[29]|c->r[29]; // 801CCC18
  c->lr=0x801CCC20u; f_8012FCE8(c); // 801CCC1C
  c->f[31]=c->f[1]; // 801CCC20
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCC24
  c->lr=0x801CCC2Cu; f_8014CAAC(c); // 801CCC28
  c->f[1]=c->f[31]; // 801CCC2C
  c->lr=0x801CCC34u; f_80131C64(c); // 801CCC30
  c->r[3]=c->r[29]|c->r[29]; // 801CCC34
  c->lr=0x801CCC3Cu; f_8012FCD0(c); // 801CCC38
  c->f[31]=c->f[1]; // 801CCC3C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCC40
  c->lr=0x801CCC48u; f_8014CAAC(c); // 801CCC44
  c->f[1]=c->f[31]; // 801CCC48
  c->lr=0x801CCC50u; f_80131C6C(c); // 801CCC4C
  c->r[3]=c->r[29]|c->r[29]; // 801CCC50
  c->lr=0x801CCC58u; f_8012FCE0(c); // 801CCC54
  c->r[31]=c->r[3]|c->r[3]; // 801CCC58
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCC5C
  c->lr=0x801CCC64u; f_8014CAAC(c); // 801CCC60
  c->r[4]=c->r[31]|c->r[31]; // 801CCC64
  c->lr=0x801CCC6Cu; f_80131B68(c); // 801CCC68
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCC6C
  c->lr=0x801CCC74u; f_8014CAAC(c); // 801CCC70
  c->r[4]=c->r[13]+0xFFFF9B98u; // 801CCC74
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCC78
  c->lr=0x801CCC80u; f_801313D4(c); // 801CCC7C
  c->r[3]=c->r[30]|c->r[30]; // 801CCC80
  c->r[4]=0u+0x00000004u; // 801CCC84
  c->lr=0x801CCC8Cu; f_8011961C(c); // 801CCC88
  c->r[4]=c->r[3]|c->r[3]; // 801CCC8C
  c->r[3]=c->r[1]+0x00000008u; // 801CCC90
  c->lr=0x801CCC98u; f_800549FC(c); // 801CCC94
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCC98
  c->lr=0x801CCCA0u; f_8014CAAC(c); // 801CCC9C
  c->r[4]=c->r[1]+0x00000008u; // 801CCCA0
  c->lr=0x801CCCA8u; f_801313CC(c); // 801CCCA4
  c->r[3]=c->r[1]+0x00000008u; // 801CCCA8
  c->r[4]=0u+0xFFFFFFFFu; // 801CCCAC
  c->lr=0x801CCCB4u; f_80047BD4(c); // 801CCCB0
  c->r[3]=c->r[29]|c->r[29]; // 801CCCB4
  c->lr=0x801CCCBCu; f_8012FCF8(c); // 801CCCB8
  c->f[31]=c->f[1]; // 801CCCBC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCCC0
  c->lr=0x801CCCC8u; f_8014CAAC(c); // 801CCCC4
  c->lr=0x801CCCCCu; f_80137E4C(c); // 801CCCC8
  c->f[1]=c->f[31]; // 801CCCCC
  c->lr=0x801CCCD4u; f_80110580(c); // 801CCCD0
  c->r[3]=c->r[29]|c->r[29]; // 801CCCD4
  c->lr=0x801CCCDCu; f_8012FD00(c); // 801CCCD8
  c->f[31]=c->f[1]; // 801CCCDC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCCE0
  c->lr=0x801CCCE8u; f_8014CAAC(c); // 801CCCE4
  c->lr=0x801CCCECu; f_80137E44(c); // 801CCCE8
  c->f[1]=c->f[31]; // 801CCCEC
  c->lr=0x801CCCF4u; f_80110580(c); // 801CCCF0
  c->r[3]=c->r[29]|c->r[29]; // 801CCCF4
  c->lr=0x801CCCFCu; f_8012FD08(c); // 801CCCF8
  c->f[31]=c->f[1]; // 801CCCFC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCD00
  c->lr=0x801CCD08u; f_8014CAAC(c); // 801CCD04
  c->lr=0x801CCD0Cu; f_80137E4C(c); // 801CCD08
  c->f[1]=c->f[31]; // 801CCD0C
  c->lr=0x801CCD14u; f_80110588(c); // 801CCD10
  c->r[3]=c->r[29]|c->r[29]; // 801CCD14
  c->lr=0x801CCD1Cu; f_8012FD10(c); // 801CCD18
  c->f[31]=c->f[1]; // 801CCD1C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CCD20
  c->lr=0x801CCD28u; f_8014CAAC(c); // 801CCD24
  c->lr=0x801CCD2Cu; f_80137E44(c); // 801CCD28
  c->f[1]=c->f[31]; // 801CCD2C
  c->lr=0x801CCD34u; f_80110588(c); // 801CCD30
  c->r[0]=0u+0x00000048u; // 801CCD34
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CCD38
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801CCD3C
  c->r[0]=0u+0x00000038u; // 801CCD40
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CCD44
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801CCD48
  c->r[0]=0u+0x00000028u; // 801CCD4C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801CCD50
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801CCD54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CCD58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CCD5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CCD60
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CCD64
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CCD68
  c->lr=c->r[0]; // 801CCD6C
  c->r[1]=c->r[1]+0x00000050u; // 801CCD70
  return; // 801CCD74
}

// fn_801CCD78
void f_801CCD78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCD78
  c->r[0]=c->lr; // 801CCD7C
  W32(c->r[1]+0x00000114u,c->r[0]); // 801CCD80
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801CCD84
  W32(c->r[1]+0x00000108u,c->r[30]); // 801CCD88
  c->r[30]=c->r[3]|c->r[3]; // 801CCD8C
  c->r[4]=c->r[1]+0x00000004u; // 801CCD90
  c->r[3]=0u+0x00000000u; // 801CCD94
  c->r[0]=0u+0x00000020u; // 801CCD98
  c->ctr=c->r[0]; // 801CCD9C
L_801CCDA0:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CCDA0
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801CCDA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CCDA0; } // 801CCDA8
  c->lr=0x801CCDB0u; f_8007B524(c); // 801CCDAC
  c->r[4]=0u+0x00000046u; // 801CCDB0
  c->lr=0x801CCDB8u; f_800A2EF0(c); // 801CCDB4
  c->r[31]=c->r[3]|c->r[3]; // 801CCDB8
  c->lr=0x801CCDC0u; f_80111CF0(c); // 801CCDBC
  cmps(c,0,(int32_t)c->r[3],0); // 801CCDC0
  if (crb(c,2)) { goto L_801CCDD0; } // 801CCDC4
  c->r[5]=0u+0x00003A98u; // 801CCDC8
  goto L_801CCDDC; // 801CCDCC
L_801CCDD0:;
  c->lr=0x801CCDD4u; f_8007B524(c); // 801CCDD0
  c->lr=0x801CCDD8u; f_800A6834(c); // 801CCDD4
  c->r[5]=c->r[3]|c->r[3]; // 801CCDD8
L_801CCDDC:;
  c->r[3]=c->r[1]+0x00000008u; // 801CCDDC
  c->r[4]=c->r[31]|c->r[31]; // 801CCDE0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCDE4
  c->lr=0x801CCDECu; f_802E7CC4(c); // 801CCDE8
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801CCDEC
  c->lr=0x801CCDF4u; f_8014CAAC(c); // 801CCDF0
  c->r[4]=c->r[1]+0x00000008u; // 801CCDF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCDF8
  c->lr=0x801CCE00u; f_801313D4(c); // 801CCDFC
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801CCE00
  c->r[30]=R32(c->r[1]+0x00000108u); // 801CCE04
  c->r[0]=R32(c->r[1]+0x00000114u); // 801CCE08
  c->lr=c->r[0]; // 801CCE0C
  c->r[1]=c->r[1]+0x00000110u; // 801CCE10
  return; // 801CCE14
}

// fn_801CCE18
void f_801CCE18(Ctx* __restrict c) {
  f_801CC908(c); return; // 801CCE18
}

// fn_801CCE1C
void f_801CCE1C(Ctx* __restrict c) {
  f_801CCD78(c); return; // 801CCE1C
}

// fn_801CCE20
void f_801CCE20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCE20
  c->r[0]=c->lr; // 801CCE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCE28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCE2C
  c->r[31]=c->r[3]|c->r[3]; // 801CCE30
  c->lr=0x801CCE38u; f_8012F740(c); // 801CCE34
  c->r[3]=0u+0x80470000u; // 801CCE38
  c->r[3]=c->r[3]+0x000024C4u; // 801CCE3C
  W32(c->r[31]+0x00000020u,c->r[3]); // 801CCE40
  c->r[0]=c->r[3]+0x0000000Cu; // 801CCE44
  W32(c->r[31]+0x00000288u,c->r[0]); // 801CCE48
  c->r[0]=c->r[3]+0x00000018u; // 801CCE4C
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 801CCE50
  c->r[0]=c->r[3]+0x00000024u; // 801CCE54
  W32(c->r[31]+0x000002B0u,c->r[0]); // 801CCE58
  c->r[0]=c->r[3]+0x00000030u; // 801CCE5C
  W32(c->r[31]+0x00000300u,c->r[0]); // 801CCE60
  c->r[3]=c->r[31]|c->r[31]; // 801CCE64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCE68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCE6C
  c->lr=c->r[0]; // 801CCE70
  c->r[1]=c->r[1]+0x00000010u; // 801CCE74
  return; // 801CCE78
}

// fn_801CCE7C
void f_801CCE7C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 801CCE7C
  f_801CC86C(c); return; // 801CCE80
}

// fn_801CCE84
void f_801CCE84(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 801CCE84
  f_801CC86C(c); return; // 801CCE88
}

// fn_801CCE8C
void f_801CCE8C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 801CCE8C
  f_801CC86C(c); return; // 801CCE90
}

// fn_801CCE94
void f_801CCE94(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 801CCE94
  f_801CC86C(c); return; // 801CCE98
}

// fn_801CCE9C
void f_801CCE9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCE9C
  c->r[0]=c->lr; // 801CCEA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCEA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CCEA8
  c->r[31]=c->r[3]|c->r[3]; // 801CCEAC
  c->lr=0x801CCEB4u; f_8007B524(c); // 801CCEB0
  c->r[4]=R32(c->r[31]+0x000000D0u); // 801CCEB4
  c->r[4]=c->r[4]+0x0000007Fu; // 801CCEB8
  c->lr=0x801CCEC0u; f_800A2EF0(c); // 801CCEBC
  c->r[4]=c->r[3]|c->r[3]; // 801CCEC0
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801CCEC4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCEC8
  c->lr=0x801CCED0u; f_801313D4(c); // 801CCECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CCED0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCED4
  c->lr=c->r[0]; // 801CCED8
  c->r[1]=c->r[1]+0x00000010u; // 801CCEDC
  return; // 801CCEE0
}

// fn_801CCEE4
void f_801CCEE4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCEE4
  c->r[0]=c->lr; // 801CCEE8
  W32(c->r[1]+0x00000114u,c->r[0]); // 801CCEEC
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 801CCEF0
  W32(c->r[1]+0x00000108u,c->r[30]); // 801CCEF4
  c->r[30]=c->r[3]|c->r[3]; // 801CCEF8
  c->lr=0x801CCF00u; f_80111CF0(c); // 801CCEFC
  cmps(c,0,(int32_t)c->r[3],0); // 801CCF00
  if (crb(c,2)) { goto L_801CCF10; } // 801CCF04
  c->r[3]=0u+0x00003A98u; // 801CCF08
  goto L_801CCF18; // 801CCF0C
L_801CCF10:;
  c->lr=0x801CCF14u; f_8007B524(c); // 801CCF10
  c->lr=0x801CCF18u; f_800A49DC(c); // 801CCF14
L_801CCF18:;
  c->r[31]=c->r[3]|c->r[3]; // 801CCF18
  c->r[4]=c->r[1]+0x00000004u; // 801CCF1C
  c->r[3]=0u+0x00000000u; // 801CCF20
  c->r[0]=0u+0x00000020u; // 801CCF24
  c->ctr=c->r[0]; // 801CCF28
L_801CCF2C:;
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CCF2C
  {uint32_t ea=c->r[4]+0x00000008u; W32(ea,c->r[3]); c->r[4]=ea;} // 801CCF30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CCF2C; } // 801CCF34
  c->lr=0x801CCF3Cu; f_8007B524(c); // 801CCF38
  c->r[4]=0u+0x00000000u; // 801CCF3C
  c->lr=0x801CCF44u; f_800A2EF0(c); // 801CCF40
  c->r[4]=c->r[3]|c->r[3]; // 801CCF44
  c->r[3]=c->r[1]+0x00000008u; // 801CCF48
  c->r[5]=c->r[31]|c->r[31]; // 801CCF4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCF50
  c->lr=0x801CCF58u; f_802E7CC4(c); // 801CCF54
  c->r[3]=R32(c->r[30]+0x000000CCu); // 801CCF58
  c->r[4]=c->r[1]+0x00000008u; // 801CCF5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CCF60
  c->lr=0x801CCF68u; f_801313D4(c); // 801CCF64
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 801CCF68
  c->r[30]=R32(c->r[1]+0x00000108u); // 801CCF6C
  c->r[0]=R32(c->r[1]+0x00000114u); // 801CCF70
  c->lr=c->r[0]; // 801CCF74
  c->r[1]=c->r[1]+0x00000110u; // 801CCF78
  return; // 801CCF7C
}

// fn_801CCF80
void f_801CCF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCF80
  c->r[0]=c->lr; // 801CCF84
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CCF88
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CCF8C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CCF90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CCF94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CCF98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCF9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCFA0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCFA4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CCFA8
  c->r[28]=c->r[3]|c->r[3]; // 801CCFAC
  c->lr=0x801CCFB4u; f_8011B41C(c); // 801CCFB0
  c->r[4]=0u+0x00000002u; // 801CCFB4
  c->lr=0x801CCFBCu; f_8011B814(c); // 801CCFB8
  c->r[31]=c->r[3]|c->r[3]; // 801CCFBC
  c->lr=0x801CCFC4u; f_8011B41C(c); // 801CCFC0
  c->r[4]=0u+0x00000009u; // 801CCFC4
  c->lr=0x801CCFCCu; f_8011B814(c); // 801CCFC8
  c->r[30]=c->r[3]|c->r[3]; // 801CCFCC
  c->lr=0x801CCFD4u; f_8011B41C(c); // 801CCFD0
  c->r[4]=0u+0x00000019u; // 801CCFD4
  c->lr=0x801CCFDCu; f_8011B814(c); // 801CCFD8
  c->r[29]=c->r[3]|c->r[3]; // 801CCFDC
  c->r[3]=c->r[31]|c->r[31]; // 801CCFE0
  c->lr=0x801CCFE8u; f_8014EC1C(c); // 801CCFE4
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CCFE8
  c->lr=0x801CCFF0u; f_80117D04(c); // 801CCFEC
  c->r[3]=c->r[31]|c->r[31]; // 801CCFF0
  c->lr=0x801CCFF8u; f_8014EC34(c); // 801CCFF4
  c->f[30]=c->f[1]; // 801CCFF8
  c->r[3]=c->r[31]|c->r[31]; // 801CCFFC
  c->lr=0x801CD004u; f_8014EC2C(c); // 801CD000
  c->f[31]=c->f[1]; // 801CD004
  c->r[3]=c->r[31]|c->r[31]; // 801CD008
  c->lr=0x801CD010u; f_8014EC24(c); // 801CD00C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD010
  c->f[2]=c->f[31]; // 801CD014
  c->f[3]=c->f[30]; // 801CD018
  c->lr=0x801CD020u; f_80114AB8(c); // 801CD01C
  c->r[3]=c->r[31]|c->r[31]; // 801CD020
  c->lr=0x801CD028u; f_8014EC3C(c); // 801CD024
  c->f[31]=c->f[1]; // 801CD028
  c->r[3]=c->r[31]|c->r[31]; // 801CD02C
  c->lr=0x801CD034u; f_8014EC3C(c); // 801CD030
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD034
  c->f[2]=c->f[31]; // 801CD038
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD03C
  c->lr=0x801CD044u; f_80114AA8(c); // 801CD040
  c->r[3]=c->r[30]|c->r[30]; // 801CD044
  c->lr=0x801CD04Cu; f_8012FCB0(c); // 801CD048
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD04C
  c->lr=0x801CD054u; f_8012FA30(c); // 801CD050
  c->r[3]=c->r[30]|c->r[30]; // 801CD054
  c->lr=0x801CD05Cu; f_8012FCB8(c); // 801CD058
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD05C
  c->lr=0x801CD064u; f_8012FA38(c); // 801CD060
  c->r[3]=c->r[30]|c->r[30]; // 801CD064
  c->lr=0x801CD06Cu; f_8012FCC8(c); // 801CD068
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD06C
  c->lr=0x801CD074u; f_8012FA4C(c); // 801CD070
  c->r[3]=c->r[30]|c->r[30]; // 801CD074
  c->lr=0x801CD07Cu; f_8012FCD0(c); // 801CD078
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD07C
  c->lr=0x801CD084u; f_8012FA54(c); // 801CD080
  c->r[3]=c->r[30]|c->r[30]; // 801CD084
  c->lr=0x801CD08Cu; f_8012FCE8(c); // 801CD088
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD08C
  c->lr=0x801CD094u; f_8012FA6C(c); // 801CD090
  c->r[3]=c->r[30]|c->r[30]; // 801CD094
  c->lr=0x801CD09Cu; f_8012FCD0(c); // 801CD098
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD09C
  c->lr=0x801CD0A4u; f_8012FA74(c); // 801CD0A0
  c->r[3]=c->r[30]|c->r[30]; // 801CD0A4
  c->lr=0x801CD0ACu; f_8012FCE0(c); // 801CD0A8
  c->r[4]=c->r[3]|c->r[3]; // 801CD0AC
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD0B0
  c->lr=0x801CD0B8u; f_8012F918(c); // 801CD0B4
  c->r[3]=c->r[30]|c->r[30]; // 801CD0B8
  c->lr=0x801CD0C0u; f_8012FCF8(c); // 801CD0BC
  c->f[31]=c->f[1]; // 801CD0C0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD0C4
  c->lr=0x801CD0CCu; f_8012AA10(c); // 801CD0C8
  c->f[1]=c->f[31]; // 801CD0CC
  c->lr=0x801CD0D4u; f_80110580(c); // 801CD0D0
  c->r[3]=c->r[30]|c->r[30]; // 801CD0D4
  c->lr=0x801CD0DCu; f_8012FD00(c); // 801CD0D8
  c->f[31]=c->f[1]; // 801CD0DC
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD0E0
  c->lr=0x801CD0E8u; f_8012AA08(c); // 801CD0E4
  c->f[1]=c->f[31]; // 801CD0E8
  c->lr=0x801CD0F0u; f_80110580(c); // 801CD0EC
  c->r[3]=c->r[30]|c->r[30]; // 801CD0F0
  c->lr=0x801CD0F8u; f_8012FD08(c); // 801CD0F4
  c->f[31]=c->f[1]; // 801CD0F8
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD0FC
  c->lr=0x801CD104u; f_8012AA10(c); // 801CD100
  c->f[1]=c->f[31]; // 801CD104
  c->lr=0x801CD10Cu; f_80110588(c); // 801CD108
  c->r[3]=c->r[30]|c->r[30]; // 801CD10C
  c->lr=0x801CD114u; f_8012FD10(c); // 801CD110
  c->f[31]=c->f[1]; // 801CD114
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD118
  c->lr=0x801CD120u; f_8012AA08(c); // 801CD11C
  c->f[1]=c->f[31]; // 801CD120
  c->lr=0x801CD128u; f_80110588(c); // 801CD124
  c->r[3]=c->r[31]|c->r[31]; // 801CD128
  c->lr=0x801CD130u; f_8014EC5C(c); // 801CD12C
  c->f[31]=c->f[1]; // 801CD130
  c->r[3]=c->r[31]|c->r[31]; // 801CD134
  c->lr=0x801CD13Cu; f_8014EC54(c); // 801CD138
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD13C
  c->f[2]=c->f[31]; // 801CD140
  c->lr=0x801CD148u; f_801313A0(c); // 801CD144
  c->r[3]=c->r[31]|c->r[31]; // 801CD148
  c->lr=0x801CD150u; f_8014EC64(c); // 801CD14C
  c->f[31]=c->f[1]; // 801CD150
  c->r[3]=c->r[31]|c->r[31]; // 801CD154
  c->lr=0x801CD15Cu; f_8014EC64(c); // 801CD158
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD15C
  c->f[2]=c->f[31]; // 801CD160
  c->lr=0x801CD168u; f_801313AC(c); // 801CD164
  c->r[3]=c->r[30]|c->r[30]; // 801CD168
  c->lr=0x801CD170u; f_8012FCB8(c); // 801CD16C
  c->f[31]=c->f[1]; // 801CD170
  c->r[3]=c->r[30]|c->r[30]; // 801CD174
  c->lr=0x801CD17Cu; f_8012FCB0(c); // 801CD178
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD17C
  c->f[2]=c->f[31]; // 801CD180
  c->lr=0x801CD188u; f_80131C2C(c); // 801CD184
  c->r[3]=c->r[30]|c->r[30]; // 801CD188
  c->lr=0x801CD190u; f_8012FCD0(c); // 801CD18C
  c->f[31]=c->f[1]; // 801CD190
  c->r[3]=c->r[30]|c->r[30]; // 801CD194
  c->lr=0x801CD19Cu; f_8012FCC8(c); // 801CD198
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD19C
  c->f[2]=c->f[31]; // 801CD1A0
  c->lr=0x801CD1A8u; f_80131C48(c); // 801CD1A4
  c->r[3]=c->r[30]|c->r[30]; // 801CD1A8
  c->lr=0x801CD1B0u; f_8012FCE8(c); // 801CD1AC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD1B0
  c->lr=0x801CD1B8u; f_80131C64(c); // 801CD1B4
  c->r[3]=c->r[30]|c->r[30]; // 801CD1B8
  c->lr=0x801CD1C0u; f_8012FCF0(c); // 801CD1BC
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD1C0
  c->lr=0x801CD1C8u; f_80131C6C(c); // 801CD1C4
  c->r[3]=c->r[30]|c->r[30]; // 801CD1C8
  c->lr=0x801CD1D0u; f_8012FCE0(c); // 801CD1CC
  c->r[4]=c->r[3]|c->r[3]; // 801CD1D0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD1D4
  c->lr=0x801CD1DCu; f_80131B68(c); // 801CD1D8
  c->r[3]=c->r[29]|c->r[29]; // 801CD1DC
  c->r[4]=0u+0x0000000Au; // 801CD1E0
  c->lr=0x801CD1E8u; f_8011961C(c); // 801CD1E4
  c->r[4]=c->r[3]|c->r[3]; // 801CD1E8
  c->r[3]=c->r[1]+0x0000000Cu; // 801CD1EC
  c->lr=0x801CD1F4u; f_800549FC(c); // 801CD1F0
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD1F4
  c->r[4]=c->r[1]+0x0000000Cu; // 801CD1F8
  c->lr=0x801CD200u; f_801313CC(c); // 801CD1FC
  c->r[3]=c->r[1]+0x0000000Cu; // 801CD200
  c->r[4]=0u+0xFFFFFFFFu; // 801CD204
  c->lr=0x801CD20Cu; f_80047BD4(c); // 801CD208
  c->r[3]=c->r[30]|c->r[30]; // 801CD20C
  c->lr=0x801CD214u; f_8012FCF8(c); // 801CD210
  c->f[31]=c->f[1]; // 801CD214
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD218
  c->lr=0x801CD220u; f_80137E4C(c); // 801CD21C
  c->f[1]=c->f[31]; // 801CD220
  c->lr=0x801CD228u; f_80110580(c); // 801CD224
  c->r[3]=c->r[30]|c->r[30]; // 801CD228
  c->lr=0x801CD230u; f_8012FD00(c); // 801CD22C
  c->f[31]=c->f[1]; // 801CD230
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD234
  c->lr=0x801CD23Cu; f_80137E44(c); // 801CD238
  c->f[1]=c->f[31]; // 801CD23C
  c->lr=0x801CD244u; f_80110580(c); // 801CD240
  c->r[3]=c->r[30]|c->r[30]; // 801CD244
  c->lr=0x801CD24Cu; f_8012FD08(c); // 801CD248
  c->f[31]=c->f[1]; // 801CD24C
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD250
  c->lr=0x801CD258u; f_80137E4C(c); // 801CD254
  c->f[1]=c->f[31]; // 801CD258
  c->lr=0x801CD260u; f_80110588(c); // 801CD25C
  c->r[3]=c->r[30]|c->r[30]; // 801CD260
  c->lr=0x801CD268u; f_8012FD10(c); // 801CD264
  c->f[31]=c->f[1]; // 801CD268
  c->r[3]=R32(c->r[28]+0x000000C4u); // 801CD26C
  c->lr=0x801CD274u; f_80137E44(c); // 801CD270
  c->f[1]=c->f[31]; // 801CD274
  c->lr=0x801CD27Cu; f_80110588(c); // 801CD278
  c->r[3]=c->r[31]|c->r[31]; // 801CD27C
  c->lr=0x801CD284u; f_8014EC84(c); // 801CD280
  c->f[31]=c->f[1]; // 801CD284
  c->r[3]=c->r[31]|c->r[31]; // 801CD288
  c->lr=0x801CD290u; f_8014EC7C(c); // 801CD28C
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD290
  c->f[2]=c->f[31]; // 801CD294
  c->lr=0x801CD29Cu; f_801313A0(c); // 801CD298
  c->r[3]=c->r[31]|c->r[31]; // 801CD29C
  c->lr=0x801CD2A4u; f_8014EC8C(c); // 801CD2A0
  c->f[31]=c->f[1]; // 801CD2A4
  c->r[3]=c->r[31]|c->r[31]; // 801CD2A8
  c->lr=0x801CD2B0u; f_8014EC8C(c); // 801CD2AC
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD2B0
  c->f[2]=c->f[31]; // 801CD2B4
  c->lr=0x801CD2BCu; f_801313AC(c); // 801CD2B8
  c->r[3]=c->r[29]|c->r[29]; // 801CD2BC
  c->r[4]=0u+0x00000004u; // 801CD2C0
  c->lr=0x801CD2C8u; f_8011961C(c); // 801CD2C4
  c->r[4]=c->r[3]|c->r[3]; // 801CD2C8
  c->r[3]=c->r[1]+0x00000008u; // 801CD2CC
  c->lr=0x801CD2D4u; f_800549FC(c); // 801CD2D0
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD2D4
  c->r[4]=c->r[1]+0x00000008u; // 801CD2D8
  c->lr=0x801CD2E0u; f_801313CC(c); // 801CD2DC
  c->r[3]=c->r[1]+0x00000008u; // 801CD2E0
  c->r[4]=0u+0xFFFFFFFFu; // 801CD2E4
  c->lr=0x801CD2ECu; f_80047BD4(c); // 801CD2E8
  c->r[3]=c->r[30]|c->r[30]; // 801CD2EC
  c->lr=0x801CD2F4u; f_8012FCB8(c); // 801CD2F0
  c->f[31]=c->f[1]; // 801CD2F4
  c->r[3]=c->r[30]|c->r[30]; // 801CD2F8
  c->lr=0x801CD300u; f_8012FCB0(c); // 801CD2FC
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD300
  c->f[2]=c->f[31]; // 801CD304
  c->lr=0x801CD30Cu; f_80131C2C(c); // 801CD308
  c->r[3]=c->r[30]|c->r[30]; // 801CD30C
  c->lr=0x801CD314u; f_8012FCD0(c); // 801CD310
  c->f[31]=c->f[1]; // 801CD314
  c->r[3]=c->r[30]|c->r[30]; // 801CD318
  c->lr=0x801CD320u; f_8012FCC8(c); // 801CD31C
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD320
  c->f[2]=c->f[31]; // 801CD324
  c->lr=0x801CD32Cu; f_80131C48(c); // 801CD328
  c->r[3]=c->r[30]|c->r[30]; // 801CD32C
  c->lr=0x801CD334u; f_8012FCE8(c); // 801CD330
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD334
  c->lr=0x801CD33Cu; f_80131C64(c); // 801CD338
  c->r[3]=c->r[30]|c->r[30]; // 801CD33C
  c->lr=0x801CD344u; f_8012FCF0(c); // 801CD340
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD344
  c->lr=0x801CD34Cu; f_80131C6C(c); // 801CD348
  c->r[3]=c->r[30]|c->r[30]; // 801CD34C
  c->lr=0x801CD354u; f_8012FCE0(c); // 801CD350
  c->r[4]=c->r[3]|c->r[3]; // 801CD354
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD358
  c->lr=0x801CD360u; f_80131B68(c); // 801CD35C
  c->r[3]=c->r[30]|c->r[30]; // 801CD360
  c->lr=0x801CD368u; f_8012FCF8(c); // 801CD364
  c->f[31]=c->f[1]; // 801CD368
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD36C
  c->lr=0x801CD374u; f_80137E4C(c); // 801CD370
  c->f[1]=c->f[31]; // 801CD374
  c->lr=0x801CD37Cu; f_80110580(c); // 801CD378
  c->r[3]=c->r[30]|c->r[30]; // 801CD37C
  c->lr=0x801CD384u; f_8012FD00(c); // 801CD380
  c->f[31]=c->f[1]; // 801CD384
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD388
  c->lr=0x801CD390u; f_80137E44(c); // 801CD38C
  c->f[1]=c->f[31]; // 801CD390
  c->lr=0x801CD398u; f_80110580(c); // 801CD394
  c->r[3]=c->r[30]|c->r[30]; // 801CD398
  c->lr=0x801CD3A0u; f_8012FD08(c); // 801CD39C
  c->f[31]=c->f[1]; // 801CD3A0
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD3A4
  c->lr=0x801CD3ACu; f_80137E4C(c); // 801CD3A8
  c->f[1]=c->f[31]; // 801CD3AC
  c->lr=0x801CD3B4u; f_80110588(c); // 801CD3B0
  c->r[3]=c->r[30]|c->r[30]; // 801CD3B4
  c->lr=0x801CD3BCu; f_8012FD10(c); // 801CD3B8
  c->f[31]=c->f[1]; // 801CD3BC
  c->r[3]=R32(c->r[28]+0x000000CCu); // 801CD3C0
  c->lr=0x801CD3C8u; f_80137E44(c); // 801CD3C4
  c->f[1]=c->f[31]; // 801CD3C8
  c->lr=0x801CD3D0u; f_80110588(c); // 801CD3CC
  c->r[3]=c->r[31]|c->r[31]; // 801CD3D0
  c->lr=0x801CD3D8u; f_8014EC9C(c); // 801CD3D4
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD3D8
  c->lr=0x801CD3E0u; f_80117D04(c); // 801CD3DC
  c->r[3]=c->r[31]|c->r[31]; // 801CD3E0
  c->lr=0x801CD3E8u; f_8014EC3C(c); // 801CD3E4
  c->f[31]=c->f[1]; // 801CD3E8
  c->r[3]=c->r[31]|c->r[31]; // 801CD3EC
  c->lr=0x801CD3F4u; f_8014EC3C(c); // 801CD3F0
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD3F4
  c->f[2]=c->f[31]; // 801CD3F8
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD3FC
  c->lr=0x801CD404u; f_80114AA8(c); // 801CD400
  c->r[3]=c->r[30]|c->r[30]; // 801CD404
  c->lr=0x801CD40Cu; f_8012FCB8(c); // 801CD408
  c->f[31]=c->f[1]; // 801CD40C
  c->r[3]=c->r[30]|c->r[30]; // 801CD410
  c->lr=0x801CD418u; f_8012FCB0(c); // 801CD414
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD418
  c->f[2]=c->f[31]; // 801CD41C
  c->lr=0x801CD424u; f_8012FA24(c); // 801CD420
  c->r[3]=c->r[30]|c->r[30]; // 801CD424
  c->lr=0x801CD42Cu; f_8012FCD0(c); // 801CD428
  c->f[31]=c->f[1]; // 801CD42C
  c->r[3]=c->r[30]|c->r[30]; // 801CD430
  c->lr=0x801CD438u; f_8012FCC8(c); // 801CD434
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD438
  c->f[2]=c->f[31]; // 801CD43C
  c->lr=0x801CD444u; f_8012FA40(c); // 801CD440
  c->r[3]=c->r[30]|c->r[30]; // 801CD444
  c->lr=0x801CD44Cu; f_8012FCE8(c); // 801CD448
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD44C
  c->lr=0x801CD454u; f_8012FA6C(c); // 801CD450
  c->r[3]=c->r[30]|c->r[30]; // 801CD454
  c->lr=0x801CD45Cu; f_8012FCF0(c); // 801CD458
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD45C
  c->lr=0x801CD464u; f_8012FA74(c); // 801CD460
  c->r[3]=c->r[30]|c->r[30]; // 801CD464
  c->lr=0x801CD46Cu; f_8012FCE0(c); // 801CD468
  c->r[4]=c->r[3]|c->r[3]; // 801CD46C
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD470
  c->lr=0x801CD478u; f_8012F918(c); // 801CD474
  c->r[3]=c->r[30]|c->r[30]; // 801CD478
  c->lr=0x801CD480u; f_8012FCF8(c); // 801CD47C
  c->f[31]=c->f[1]; // 801CD480
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD484
  c->lr=0x801CD48Cu; f_8012AA10(c); // 801CD488
  c->f[1]=c->f[31]; // 801CD48C
  c->lr=0x801CD494u; f_80110580(c); // 801CD490
  c->r[3]=c->r[30]|c->r[30]; // 801CD494
  c->lr=0x801CD49Cu; f_8012FD00(c); // 801CD498
  c->f[31]=c->f[1]; // 801CD49C
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD4A0
  c->lr=0x801CD4A8u; f_8012AA08(c); // 801CD4A4
  c->f[1]=c->f[31]; // 801CD4A8
  c->lr=0x801CD4B0u; f_80110580(c); // 801CD4AC
  c->r[3]=c->r[30]|c->r[30]; // 801CD4B0
  c->lr=0x801CD4B8u; f_8012FD08(c); // 801CD4B4
  c->f[31]=c->f[1]; // 801CD4B8
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD4BC
  c->lr=0x801CD4C4u; f_8012AA10(c); // 801CD4C0
  c->f[1]=c->f[31]; // 801CD4C4
  c->lr=0x801CD4CCu; f_80110588(c); // 801CD4C8
  c->r[3]=c->r[30]|c->r[30]; // 801CD4CC
  c->lr=0x801CD4D4u; f_8012FD10(c); // 801CD4D0
  c->f[31]=c->f[1]; // 801CD4D4
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD4D8
  c->lr=0x801CD4E0u; f_8012AA08(c); // 801CD4DC
  c->f[1]=c->f[31]; // 801CD4E0
  c->lr=0x801CD4E8u; f_80110588(c); // 801CD4E4
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD4E8
  c->r[4]=0u+0x00000000u; // 801CD4EC
  c->r[5]=0u+0x00000004u; // 801CD4F0
  c->lr=0x801CD4F8u; f_8012E640(c); // 801CD4F4
  c->r[3]=R32(c->r[28]+0x000000C8u); // 801CD4F8
  c->r[4]=0u+0x00000000u; // 801CD4FC
  c->r[5]=0u+0x00000003u; // 801CD500
  c->lr=0x801CD508u; f_8012E640(c); // 801CD504
  c->r[0]=0u+0x00000038u; // 801CD508
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CD50C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CD510
  c->r[0]=0u+0x00000028u; // 801CD514
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CD518
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CD51C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD520
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD524
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD528
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD52C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CD530
  c->lr=c->r[0]; // 801CD534
  c->r[1]=c->r[1]+0x00000040u; // 801CD538
  return; // 801CD53C
}

// fn_801CD540
void f_801CD540(Ctx* __restrict c) {
  W32(c->r[3]+0x000000D0u,c->r[4]); // 801CD540
  return; // 801CD544
}

// fn_801CD548
void f_801CD548(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD548
  c->r[0]=c->lr; // 801CD54C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD550
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD554
  c->r[31]=c->r[3]|c->r[3]; // 801CD558
  c->lr=0x801CD560u; f_801C671C(c); // 801CD55C
  c->r[3]=0u+0x80470000u; // 801CD560
  c->r[0]=c->r[3]+0x00002580u; // 801CD564
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CD568
  c->r[3]=c->r[31]|c->r[31]; // 801CD56C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD570
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD574
  c->lr=c->r[0]; // 801CD578
  c->r[1]=c->r[1]+0x00000010u; // 801CD57C
  return; // 801CD580
}

// fn_801CD584
void f_801CD584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD584
  c->r[0]=c->lr; // 801CD588
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CD58C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801CD590
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801CD594
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801CD598
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801CD59C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD5A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD5A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD5A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CD5AC
  c->r[28]=c->r[3]|c->r[3]; // 801CD5B0
  c->lr=0x801CD5B8u; f_8011B41C(c); // 801CD5B4
  c->r[4]=0u+0x00000002u; // 801CD5B8
  c->lr=0x801CD5C0u; f_8011B814(c); // 801CD5BC
  c->r[30]=c->r[3]|c->r[3]; // 801CD5C0
  c->lr=0x801CD5C8u; f_8011B41C(c); // 801CD5C4
  c->r[4]=0u+0x00000009u; // 801CD5C8
  c->lr=0x801CD5D0u; f_8011B814(c); // 801CD5CC
  c->r[29]=c->r[3]|c->r[3]; // 801CD5D0
  c->r[31]=0u+0x00000000u; // 801CD5D4
L_801CD5D8:;
  c->r[3]=c->r[30]|c->r[30]; // 801CD5D8
  c->lr=0x801CD5E0u; f_8014E9FC(c); // 801CD5DC
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD5E0
  c->lr=0x801CD5E8u; f_80117D04(c); // 801CD5E4
  c->r[3]=c->r[30]|c->r[30]; // 801CD5E8
  c->lr=0x801CD5F0u; f_8014EA14(c); // 801CD5EC
  c->f[30]=c->f[1]; // 801CD5F0
  c->r[3]=c->r[30]|c->r[30]; // 801CD5F4
  c->lr=0x801CD5FCu; f_8014EA0C(c); // 801CD5F8
  c->f[31]=c->f[1]; // 801CD5FC
  c->r[3]=c->r[30]|c->r[30]; // 801CD600
  c->lr=0x801CD608u; f_8014EA04(c); // 801CD604
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD608
  c->f[2]=c->f[31]; // 801CD60C
  c->f[3]=c->f[30]; // 801CD610
  c->lr=0x801CD618u; f_80114AB8(c); // 801CD614
  c->r[3]=c->r[30]|c->r[30]; // 801CD618
  c->lr=0x801CD620u; f_8014EA1C(c); // 801CD61C
  c->f[31]=c->f[1]; // 801CD620
  c->r[3]=c->r[30]|c->r[30]; // 801CD624
  c->lr=0x801CD62Cu; f_8014EA1C(c); // 801CD628
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD62C
  c->f[2]=c->f[31]; // 801CD630
  {uint32_t ea=c->r[2]+0xFFFF9388u; c->f[3]=c->ps1[3]=RF32(ea);} // 801CD634
  c->lr=0x801CD63Cu; f_80114AA8(c); // 801CD638
  c->r[3]=c->r[29]|c->r[29]; // 801CD63C
  c->lr=0x801CD644u; f_8012FCB0(c); // 801CD640
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD644
  c->lr=0x801CD64Cu; f_8012FA30(c); // 801CD648
  c->r[3]=c->r[29]|c->r[29]; // 801CD64C
  c->lr=0x801CD654u; f_8012FCB8(c); // 801CD650
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD654
  c->lr=0x801CD65Cu; f_8012FA38(c); // 801CD658
  c->r[3]=c->r[29]|c->r[29]; // 801CD65C
  c->lr=0x801CD664u; f_8012FCC8(c); // 801CD660
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD664
  c->lr=0x801CD66Cu; f_8012FA4C(c); // 801CD668
  c->r[3]=c->r[29]|c->r[29]; // 801CD66C
  c->lr=0x801CD674u; f_8012FCD0(c); // 801CD670
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD674
  c->lr=0x801CD67Cu; f_8012FA54(c); // 801CD678
  c->r[3]=c->r[29]|c->r[29]; // 801CD67C
  c->lr=0x801CD684u; f_8012FCE8(c); // 801CD680
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD684
  c->lr=0x801CD68Cu; f_8012FA6C(c); // 801CD688
  c->r[3]=c->r[29]|c->r[29]; // 801CD68C
  c->lr=0x801CD694u; f_8012FCD0(c); // 801CD690
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD694
  c->lr=0x801CD69Cu; f_8012FA74(c); // 801CD698
  c->r[3]=c->r[29]|c->r[29]; // 801CD69C
  c->lr=0x801CD6A4u; f_8012FCE0(c); // 801CD6A0
  c->r[4]=c->r[3]|c->r[3]; // 801CD6A4
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD6A8
  c->lr=0x801CD6B0u; f_8012F918(c); // 801CD6AC
  c->r[3]=c->r[29]|c->r[29]; // 801CD6B0
  c->lr=0x801CD6B8u; f_8012FCF8(c); // 801CD6B4
  c->f[31]=c->f[1]; // 801CD6B8
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD6BC
  c->lr=0x801CD6C4u; f_8012AA10(c); // 801CD6C0
  c->f[1]=c->f[31]; // 801CD6C4
  c->lr=0x801CD6CCu; f_80110580(c); // 801CD6C8
  c->r[3]=c->r[29]|c->r[29]; // 801CD6CC
  c->lr=0x801CD6D4u; f_8012FD00(c); // 801CD6D0
  c->f[31]=c->f[1]; // 801CD6D4
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD6D8
  c->lr=0x801CD6E0u; f_8012AA08(c); // 801CD6DC
  c->f[1]=c->f[31]; // 801CD6E0
  c->lr=0x801CD6E8u; f_80110580(c); // 801CD6E4
  c->r[3]=c->r[29]|c->r[29]; // 801CD6E8
  c->lr=0x801CD6F0u; f_8012FD08(c); // 801CD6EC
  c->f[31]=c->f[1]; // 801CD6F0
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD6F4
  c->lr=0x801CD6FCu; f_8012AA10(c); // 801CD6F8
  c->f[1]=c->f[31]; // 801CD6FC
  c->lr=0x801CD704u; f_80110588(c); // 801CD700
  c->r[3]=c->r[29]|c->r[29]; // 801CD704
  c->lr=0x801CD70Cu; f_8012FD10(c); // 801CD708
  c->f[31]=c->f[1]; // 801CD70C
  c->r[3]=R32(c->r[28]+0x000000C0u); // 801CD710
  c->lr=0x801CD718u; f_8012AA08(c); // 801CD714
  c->f[1]=c->f[31]; // 801CD718
  c->lr=0x801CD720u; f_80110588(c); // 801CD71C
  c->r[28]=c->r[28]+0x00000004u; // 801CD720
  c->r[31]=c->r[31]+0x00000001u; // 801CD724
  cmps(c,0,(int32_t)c->r[31],5); // 801CD728
  if (crb(c,0)) { IRQCHK(c); goto L_801CD5D8; } // 801CD72C
  c->r[0]=0u+0x00000038u; // 801CD730
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CD734
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 801CD738
  c->r[0]=0u+0x00000028u; // 801CD73C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CD740
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 801CD744
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD748
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD74C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD750
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD754
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CD758
  c->lr=c->r[0]; // 801CD75C
  c->r[1]=c->r[1]+0x00000040u; // 801CD760
  return; // 801CD764
}

// fn_801CD768
void f_801CD768(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD768
  c->r[0]=c->lr; // 801CD76C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD770
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801CD774
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801CD778
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD77C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD780
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD784
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CD788
  c->r[28]=c->r[3]|c->r[3]; // 801CD78C
  c->lr=0x801CD794u; f_8011B41C(c); // 801CD790
  c->r[4]=0u+0x00000002u; // 801CD794
  c->lr=0x801CD79Cu; f_8011B814(c); // 801CD798
  c->r[30]=c->r[3]|c->r[3]; // 801CD79C
  c->lr=0x801CD7A4u; f_8011B41C(c); // 801CD7A0
  c->r[4]=0u+0x00000009u; // 801CD7A4
  c->lr=0x801CD7ACu; f_8011B814(c); // 801CD7A8
  c->r[29]=c->r[3]|c->r[3]; // 801CD7AC
  c->r[31]=0u+0x00000000u; // 801CD7B0
L_801CD7B4:;
  c->r[3]=c->r[30]|c->r[30]; // 801CD7B4
  c->lr=0x801CD7BCu; f_8014EA3C(c); // 801CD7B8
  c->f[31]=c->f[1]; // 801CD7BC
  c->r[3]=c->r[30]|c->r[30]; // 801CD7C0
  c->lr=0x801CD7C8u; f_8014EA34(c); // 801CD7C4
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD7C8
  c->f[2]=c->f[31]; // 801CD7CC
  c->lr=0x801CD7D4u; f_801313A0(c); // 801CD7D0
  c->r[3]=c->r[30]|c->r[30]; // 801CD7D4
  c->lr=0x801CD7DCu; f_8014EA44(c); // 801CD7D8
  c->f[31]=c->f[1]; // 801CD7DC
  c->r[3]=c->r[30]|c->r[30]; // 801CD7E0
  c->lr=0x801CD7E8u; f_8014EA44(c); // 801CD7E4
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD7E8
  c->f[2]=c->f[31]; // 801CD7EC
  c->lr=0x801CD7F4u; f_801313AC(c); // 801CD7F0
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD7F4
  {uint32_t ea=c->r[2]+0xFFFF938Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CD7F8
  {uint32_t ea=c->r[2]+0xFFFF9390u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CD7FC
  c->lr=0x801CD804u; f_80131588(c); // 801CD800
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD804
  c->lr=0x801CD80Cu; f_8014CB20(c); // 801CD808
  c->r[3]=c->r[29]|c->r[29]; // 801CD80C
  c->lr=0x801CD814u; f_8012FCB0(c); // 801CD810
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD814
  c->lr=0x801CD81Cu; f_80131C38(c); // 801CD818
  c->r[3]=c->r[29]|c->r[29]; // 801CD81C
  c->lr=0x801CD824u; f_8012FCB8(c); // 801CD820
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD824
  c->lr=0x801CD82Cu; f_80131C40(c); // 801CD828
  c->r[3]=c->r[29]|c->r[29]; // 801CD82C
  c->lr=0x801CD834u; f_8012FCC8(c); // 801CD830
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD834
  c->lr=0x801CD83Cu; f_80131C54(c); // 801CD838
  c->r[3]=c->r[29]|c->r[29]; // 801CD83C
  c->lr=0x801CD844u; f_8012FCD0(c); // 801CD840
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD844
  c->lr=0x801CD84Cu; f_80131C5C(c); // 801CD848
  c->r[3]=c->r[29]|c->r[29]; // 801CD84C
  c->lr=0x801CD854u; f_8012FCE8(c); // 801CD850
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD854
  c->lr=0x801CD85Cu; f_80131C64(c); // 801CD858
  c->r[3]=c->r[29]|c->r[29]; // 801CD85C
  c->lr=0x801CD864u; f_8012FCD0(c); // 801CD860
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD864
  c->lr=0x801CD86Cu; f_80131C6C(c); // 801CD868
  c->r[3]=c->r[29]|c->r[29]; // 801CD86C
  c->lr=0x801CD874u; f_8012FCE0(c); // 801CD870
  c->r[4]=c->r[3]|c->r[3]; // 801CD874
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD878
  c->lr=0x801CD880u; f_80131B68(c); // 801CD87C
  c->r[3]=c->r[29]|c->r[29]; // 801CD880
  c->lr=0x801CD888u; f_8012FCF8(c); // 801CD884
  c->f[31]=c->f[1]; // 801CD888
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD88C
  c->lr=0x801CD894u; f_80137E4C(c); // 801CD890
  c->f[1]=c->f[31]; // 801CD894
  c->lr=0x801CD89Cu; f_80110580(c); // 801CD898
  c->r[3]=c->r[29]|c->r[29]; // 801CD89C
  c->lr=0x801CD8A4u; f_8012FD00(c); // 801CD8A0
  c->f[31]=c->f[1]; // 801CD8A4
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD8A8
  c->lr=0x801CD8B0u; f_80137E44(c); // 801CD8AC
  c->f[1]=c->f[31]; // 801CD8B0
  c->lr=0x801CD8B8u; f_80110580(c); // 801CD8B4
  c->r[3]=c->r[29]|c->r[29]; // 801CD8B8
  c->lr=0x801CD8C0u; f_8012FD08(c); // 801CD8BC
  c->f[31]=c->f[1]; // 801CD8C0
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD8C4
  c->lr=0x801CD8CCu; f_80137E4C(c); // 801CD8C8
  c->f[1]=c->f[31]; // 801CD8CC
  c->lr=0x801CD8D4u; f_80110588(c); // 801CD8D0
  c->r[3]=c->r[29]|c->r[29]; // 801CD8D4
  c->lr=0x801CD8DCu; f_8012FD10(c); // 801CD8D8
  c->f[31]=c->f[1]; // 801CD8DC
  c->r[3]=R32(c->r[28]+0x000000D4u); // 801CD8E0
  c->lr=0x801CD8E8u; f_80137E44(c); // 801CD8E4
  c->f[1]=c->f[31]; // 801CD8E8
  c->lr=0x801CD8F0u; f_80110588(c); // 801CD8EC
  c->r[28]=c->r[28]+0x00000004u; // 801CD8F0
  c->r[31]=c->r[31]+0x00000001u; // 801CD8F4
  cmps(c,0,(int32_t)c->r[31],5); // 801CD8F8
  if (crb(c,0)) { IRQCHK(c); goto L_801CD7B4; } // 801CD8FC
  c->r[0]=0u+0x00000028u; // 801CD900
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CD904
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801CD908
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD90C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD910
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD914
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD918
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD91C
  c->lr=c->r[0]; // 801CD920
  c->r[1]=c->r[1]+0x00000030u; // 801CD924
  return; // 801CD928
}

// fn_801CD92C
void f_801CD92C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD92C
  c->r[0]=c->lr; // 801CD930
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD934
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD938
  c->r[31]=c->r[3]|c->r[3]; // 801CD93C
  c->lr=0x801CD944u; f_801CD584(c); // 801CD940
  c->r[3]=c->r[31]|c->r[31]; // 801CD944
  c->lr=0x801CD94Cu; f_801CD768(c); // 801CD948
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD94C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD950
  c->lr=c->r[0]; // 801CD954
  c->r[1]=c->r[1]+0x00000010u; // 801CD958
  return; // 801CD95C
}

// fn_801CD960
void f_801CD960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD960
  c->r[0]=c->lr; // 801CD964
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD968
  c->lr=0x801CD970u; f_8011B41C(c); // 801CD96C
  c->r[4]=0u+0x00000002u; // 801CD970
  c->lr=0x801CD978u; f_8011B814(c); // 801CD974
  c->lr=0x801CD97Cu; f_8014EA5C(c); // 801CD978
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD97C
  c->lr=c->r[0]; // 801CD980
  c->r[1]=c->r[1]+0x00000010u; // 801CD984
  return; // 801CD988
}

// fn_801CD98C
void f_801CD98C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD98C
  c->r[0]=c->lr; // 801CD990
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD994
  c->lr=0x801CD99Cu; f_8011B41C(c); // 801CD998
  c->r[4]=0u+0x00000002u; // 801CD99C
  c->lr=0x801CD9A4u; f_8011B814(c); // 801CD9A0
  c->lr=0x801CD9A8u; f_8014EA64(c); // 801CD9A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD9A8
  c->lr=c->r[0]; // 801CD9AC
  c->r[1]=c->r[1]+0x00000010u; // 801CD9B0
  return; // 801CD9B4
}

// fn_801CD9B8
void f_801CD9B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD9B8
  c->r[0]=c->lr; // 801CD9BC
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CD9C0
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[31]);} // 801CD9C4
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,31,ea,0,0);} // 801CD9C8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[30]);} // 801CD9CC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,30,ea,0,0);} // 801CD9D0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[29]);} // 801CD9D4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,29,ea,0,0);} // 801CD9D8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[28]);} // 801CD9DC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,28,ea,0,0);} // 801CD9E0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[27]);} // 801CD9E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,27,ea,0,0);} // 801CD9E8
  c->r[11]=c->r[1]+0x00000030u; // 801CD9EC
  c->lr=0x801CD9F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801CD9F0
  c->r[26]=c->r[3]|c->r[3]; // 801CD9F4
  c->lr=0x801CD9FCu; f_8011B41C(c); // 801CD9F8
  c->r[4]=0u+0x00000002u; // 801CD9FC
  c->lr=0x801CDA04u; f_8011B814(c); // 801CDA00
  c->r[29]=c->r[3]|c->r[3]; // 801CDA04
  c->lr=0x801CDA0Cu; f_8011B41C(c); // 801CDA08
  c->r[4]=0u+0x00000009u; // 801CDA0C
  c->lr=0x801CDA14u; f_8011B814(c); // 801CDA10
  c->r[28]=c->r[3]|c->r[3]; // 801CDA14
  c->r[27]=0u+0x00000000u; // 801CDA18
  c->r[30]=c->r[26]|c->r[26]; // 801CDA1C
  {uint32_t ea=c->r[2]+0xFFFF9398u; c->f[30]=RF64(ea);} // 801CDA20
  c->r[31]=0u+0x43300000u; // 801CDA24
  goto L_801CDB1C; // 801CDA28
L_801CDA2C:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDA2C
  c->lr=0x801CDA34u; f_8012FCB0(c); // 801CDA30
  c->f[29]=c->f[1]; // 801CDA34
  c->r[3]=c->r[29]|c->r[29]; // 801CDA38
  c->lr=0x801CDA40u; f_8014E9DC(c); // 801CDA3C
  c->r[0]=c->r[27]^0x80000000u; // 801CDA40
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CDA44
  W32(c->r[1]+0x00000008u,c->r[31]); // 801CDA48
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CDA4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801CDA50
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801CDA54
  c->r[3]=c->r[28]|c->r[28]; // 801CDA58
  c->lr=0x801CDA60u; f_8012FCB8(c); // 801CDA5C
  c->f[28]=c->ps1[28]=S(c->f[1]+c->f[31]); // 801CDA60
  c->r[3]=c->r[28]|c->r[28]; // 801CDA64
  c->lr=0x801CDA6Cu; f_8012FCC8(c); // 801CDA68
  c->f[27]=c->f[1]; // 801CDA6C
  c->r[3]=c->r[29]|c->r[29]; // 801CDA70
  c->lr=0x801CDA78u; f_8014E9DC(c); // 801CDA74
  c->r[0]=c->r[27]^0x80000000u; // 801CDA78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDA7C
  W32(c->r[1]+0x00000010u,c->r[31]); // 801CDA80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801CDA84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 801CDA88
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801CDA8C
  c->r[3]=c->r[28]|c->r[28]; // 801CDA90
  c->lr=0x801CDA98u; f_8012FCD0(c); // 801CDA94
  c->f[31]=c->ps1[31]=S(c->f[1]+c->f[31]); // 801CDA98
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CDA9C
  c->f[1]=c->f[29]; // 801CDAA0
  c->lr=0x801CDAA8u; f_8012FA30(c); // 801CDAA4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CDAA8
  c->f[1]=c->f[28]; // 801CDAAC
  c->lr=0x801CDAB4u; f_8012FA38(c); // 801CDAB0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CDAB4
  c->f[1]=c->f[27]; // 801CDAB8
  c->lr=0x801CDAC0u; f_8012FA4C(c); // 801CDABC
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CDAC0
  c->f[1]=c->f[31]; // 801CDAC4
  c->lr=0x801CDACCu; f_8012FA54(c); // 801CDAC8
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801CDACC
  c->r[4]=0u+0x00000001u; // 801CDAD0
  c->lr=0x801CDAD8u; f_8012F918(c); // 801CDAD4
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CDAD8
  c->f[1]=c->f[29]; // 801CDADC
  c->lr=0x801CDAE4u; f_80131C38(c); // 801CDAE0
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CDAE4
  c->f[1]=c->f[28]; // 801CDAE8
  c->lr=0x801CDAF0u; f_80131C40(c); // 801CDAEC
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CDAF0
  c->f[1]=c->f[27]; // 801CDAF4
  c->lr=0x801CDAFCu; f_80131C54(c); // 801CDAF8
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CDAFC
  c->f[1]=c->f[31]; // 801CDB00
  c->lr=0x801CDB08u; f_80131C5C(c); // 801CDB04
  c->r[3]=R32(c->r[30]+0x000000D4u); // 801CDB08
  c->r[4]=0u+0x00000001u; // 801CDB0C
  c->lr=0x801CDB14u; f_80131B68(c); // 801CDB10
  c->r[30]=c->r[30]+0x00000004u; // 801CDB14
  c->r[27]=c->r[27]+0x00000001u; // 801CDB18
L_801CDB1C:;
  c->r[0]=R32(c->r[26]+0x000000E8u); // 801CDB1C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 801CDB20
  if (crb(c,0)) { IRQCHK(c); goto L_801CDA2C; } // 801CDB24
  c->r[0]=0u+0x00000078u; // 801CDB28
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801CDB2C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[31]=RF64(ea);} // 801CDB30
  c->r[0]=0u+0x00000068u; // 801CDB34
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801CDB38
  {uint32_t ea=c->r[1]+0x00000060u; c->f[30]=RF64(ea);} // 801CDB3C
  c->r[0]=0u+0x00000058u; // 801CDB40
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 801CDB44
  {uint32_t ea=c->r[1]+0x00000050u; c->f[29]=RF64(ea);} // 801CDB48
  c->r[0]=0u+0x00000048u; // 801CDB4C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,28,ea,0,0);} // 801CDB50
  {uint32_t ea=c->r[1]+0x00000040u; c->f[28]=RF64(ea);} // 801CDB54
  c->r[0]=0u+0x00000038u; // 801CDB58
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,27,ea,0,0);} // 801CDB5C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[27]=RF64(ea);} // 801CDB60
  c->r[11]=c->r[1]+0x00000030u; // 801CDB64
  c->lr=0x801CDB6Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801CDB68
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CDB6C
  c->lr=c->r[0]; // 801CDB70
  c->r[1]=c->r[1]+0x00000080u; // 801CDB74
  return; // 801CDB78
}

// fn_801CDB7C
void f_801CDB7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDB7C
  c->r[0]=c->lr; // 801CDB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDB84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDB88
  c->r[31]=c->r[3]|c->r[3]; // 801CDB8C
  c->lr=0x801CDB94u; f_8007B524(c); // 801CDB90
  c->r[4]=0u+0x0000003Du; // 801CDB94
  c->lr=0x801CDB9Cu; f_800A2EF0(c); // 801CDB98
  c->r[4]=c->r[3]|c->r[3]; // 801CDB9C
  c->r[3]=R32(c->r[31]+0x000000D4u); // 801CDBA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDBA4
  c->lr=0x801CDBACu; f_801313D4(c); // 801CDBA8
  c->lr=0x801CDBB0u; f_8007B524(c); // 801CDBAC
  c->r[4]=0u+0x0000003Eu; // 801CDBB0
  c->lr=0x801CDBB8u; f_800A2EF0(c); // 801CDBB4
  c->r[4]=c->r[3]|c->r[3]; // 801CDBB8
  c->r[3]=R32(c->r[31]+0x000000D8u); // 801CDBBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDBC0
  c->lr=0x801CDBC8u; f_801313D4(c); // 801CDBC4
  c->lr=0x801CDBCCu; f_8007B524(c); // 801CDBC8
  c->r[4]=0u+0x00000034u; // 801CDBCC
  c->lr=0x801CDBD4u; f_800A2EF0(c); // 801CDBD0
  c->r[4]=c->r[3]|c->r[3]; // 801CDBD4
  c->r[3]=R32(c->r[31]+0x000000DCu); // 801CDBD8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDBDC
  c->lr=0x801CDBE4u; f_801313D4(c); // 801CDBE0
  c->r[0]=0u+0x00000003u; // 801CDBE4
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801CDBE8
  c->r[3]=c->r[31]|c->r[31]; // 801CDBEC
  c->lr=0x801CDBF4u; f_801CD9B8(c); // 801CDBF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDBF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDBF8
  c->lr=c->r[0]; // 801CDBFC
  c->r[1]=c->r[1]+0x00000010u; // 801CDC00
  return; // 801CDC04
}

// fn_801CDC08
void f_801CDC08(Ctx* __restrict c) {
  f_801CDB7C(c); return; // 801CDC08
}

// fn_801CDC0C
void f_801CDC0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDC0C
  c->r[0]=c->lr; // 801CDC10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDC14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDC18
  c->r[31]=c->r[3]|c->r[3]; // 801CDC1C
  c->lr=0x801CDC24u; f_8012FBEC(c); // 801CDC20
  c->r[3]=0u+0x80470000u; // 801CDC24
  c->r[0]=c->r[3]+0x00002678u; // 801CDC28
  W32(c->r[31]+0x00000044u,c->r[0]); // 801CDC2C
  c->r[3]=c->r[31]+0x00000048u; // 801CDC30
  c->lr=0x801CDC38u; f_8011EFD8(c); // 801CDC34
  c->r[3]=c->r[31]+0x00000070u; // 801CDC38
  c->lr=0x801CDC40u; f_8011EFD8(c); // 801CDC3C
  c->r[3]=c->r[31]+0x00000098u; // 801CDC40
  c->lr=0x801CDC48u; f_8011EF4C(c); // 801CDC44
  c->r[3]=c->r[31]+0x000000B0u; // 801CDC48
  c->lr=0x801CDC50u; f_800592DC(c); // 801CDC4C
  c->r[3]=c->r[31]+0x000000B8u; // 801CDC50
  c->lr=0x801CDC58u; f_800592DC(c); // 801CDC54
  c->r[3]=c->r[31]+0x000000C0u; // 801CDC58
  c->lr=0x801CDC60u; f_800592DC(c); // 801CDC5C
  c->r[3]=c->r[31]+0x000000C8u; // 801CDC60
  c->lr=0x801CDC68u; f_8011EFD8(c); // 801CDC64
  c->r[3]=c->r[31]+0x000000F0u; // 801CDC68
  c->lr=0x801CDC70u; f_8011EFD8(c); // 801CDC6C
  c->r[3]=c->r[31]+0x00000118u; // 801CDC70
  c->lr=0x801CDC78u; f_8011EFD8(c); // 801CDC74
  c->r[3]=c->r[31]+0x00000140u; // 801CDC78
  c->lr=0x801CDC80u; f_8011EF4C(c); // 801CDC7C
  c->r[3]=c->r[31]|c->r[31]; // 801CDC80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDC84
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDC88
  c->lr=c->r[0]; // 801CDC8C
  c->r[1]=c->r[1]+0x00000010u; // 801CDC90
  return; // 801CDC94
}

// fn_801CDC98
void f_801CDC98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDC98
  f_8011F048(c); return; // 801CDC9C
}

// fn_801CDCA0
void f_801CDCA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCA0
  f_8011F058(c); return; // 801CDCA4
}

// fn_801CDCA8
void f_801CDCA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCA8
  f_8011F070(c); return; // 801CDCAC
}

// fn_801CDCB0
void f_801CDCB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCB0
  f_8011F09C(c); return; // 801CDCB4
}

// fn_801CDCB8
void f_801CDCB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCB8
  f_8011F0A4(c); return; // 801CDCBC
}

// fn_801CDCC0
void f_801CDCC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCC0
  f_8011F0AC(c); return; // 801CDCC4
}

// fn_801CDCC8
void f_801CDCC8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCC8
  f_8011F0B4(c); return; // 801CDCCC
}

// fn_801CDCD0
void f_801CDCD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000048u; // 801CDCD0
  f_8011F0BC(c); return; // 801CDCD4
}

// fn_801CDCD8
void f_801CDCD8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDCD8
  f_8011F048(c); return; // 801CDCDC
}

// fn_801CDCE0
void f_801CDCE0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDCE0
  f_8011F058(c); return; // 801CDCE4
}

// fn_801CDCE8
void f_801CDCE8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDCE8
  f_8011F070(c); return; // 801CDCEC
}

// fn_801CDCF0
void f_801CDCF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDCF0
  f_8011F09C(c); return; // 801CDCF4
}

// fn_801CDCF8
void f_801CDCF8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDCF8
  f_8011F0A4(c); return; // 801CDCFC
}

// fn_801CDD00
void f_801CDD00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDD00
  f_8011F0AC(c); return; // 801CDD04
}

// fn_801CDD08
void f_801CDD08(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDD08
  f_8011F0B4(c); return; // 801CDD0C
}

// fn_801CDD10
void f_801CDD10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000070u; // 801CDD10
  f_8011F0BC(c); return; // 801CDD14
}

// fn_801CDD18
void f_801CDD18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000098u; // 801CDD18
  f_8011F0C4(c); return; // 801CDD1C
}

// fn_801CDD20
void f_801CDD20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000098u; // 801CDD20
  f_8011F0D8(c); return; // 801CDD24
}

// fn_801CDD28
void f_801CDD28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000098u; // 801CDD28
  f_8011F10C(c); return; // 801CDD2C
}

// fn_801CDD30
void f_801CDD30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000098u; // 801CDD30
  f_8011F114(c); return; // 801CDD34
}

// fn_801CDD38
void f_801CDD38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000098u; // 801CDD38
  f_8011F11C(c); return; // 801CDD3C
}

// fn_801CDD40
void f_801CDD40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B0u; // 801CDD40
  f_800593A0(c); return; // 801CDD44
}

// fn_801CDD48
void f_801CDD48(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD48
  return; // 801CDD4C
}

// fn_801CDD50
void f_801CDD50(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD50
  return; // 801CDD54
}

// fn_801CDD58
void f_801CDD58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000B8u; // 801CDD58
  f_800593A0(c); return; // 801CDD5C
}

// fn_801CDD60
void f_801CDD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD60
  return; // 801CDD64
}

// fn_801CDD68
void f_801CDD68(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD68
  return; // 801CDD6C
}

// fn_801CDD70
void f_801CDD70(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C0u; // 801CDD70
  f_800593A0(c); return; // 801CDD74
}

// fn_801CDD78
void f_801CDD78(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD78
  return; // 801CDD7C
}

// fn_801CDD80
void f_801CDD80(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CDD80
  return; // 801CDD84
}

// fn_801CDD88
void f_801CDD88(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDD88
  f_8011F048(c); return; // 801CDD8C
}

// fn_801CDD90
void f_801CDD90(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDD90
  f_8011F058(c); return; // 801CDD94
}

// fn_801CDD98
void f_801CDD98(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDD98
  f_8011F070(c); return; // 801CDD9C
}

// fn_801CDDA0
void f_801CDDA0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDDA0
  f_8011F09C(c); return; // 801CDDA4
}

// fn_801CDDA8
void f_801CDDA8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDDA8
  f_8011F0A4(c); return; // 801CDDAC
}

// fn_801CDDB0
void f_801CDDB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDDB0
  f_8011F0AC(c); return; // 801CDDB4
}

// fn_801CDDB8
void f_801CDDB8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDDB8
  f_8011F0B4(c); return; // 801CDDBC
}

// fn_801CDDC0
void f_801CDDC0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000C8u; // 801CDDC0
  f_8011F0BC(c); return; // 801CDDC4
}

// fn_801CDDC8
void f_801CDDC8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDC8
  f_8011F048(c); return; // 801CDDCC
}

// fn_801CDDD0
void f_801CDDD0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDD0
  f_8011F058(c); return; // 801CDDD4
}

// fn_801CDDD8
void f_801CDDD8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDD8
  f_8011F070(c); return; // 801CDDDC
}

// fn_801CDDE0
void f_801CDDE0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDE0
  f_8011F09C(c); return; // 801CDDE4
}

// fn_801CDDE8
void f_801CDDE8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDE8
  f_8011F0A4(c); return; // 801CDDEC
}

// fn_801CDDF0
void f_801CDDF0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDF0
  f_8011F0AC(c); return; // 801CDDF4
}

// fn_801CDDF8
void f_801CDDF8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDDF8
  f_8011F0B4(c); return; // 801CDDFC
}

// fn_801CDE00
void f_801CDE00(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x000000F0u; // 801CDE00
  f_8011F0BC(c); return; // 801CDE04
}

// fn_801CDE08
void f_801CDE08(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE08
  f_8011F048(c); return; // 801CDE0C
}

// fn_801CDE10
void f_801CDE10(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE10
  f_8011F058(c); return; // 801CDE14
}

// fn_801CDE18
void f_801CDE18(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE18
  f_8011F070(c); return; // 801CDE1C
}

// fn_801CDE20
void f_801CDE20(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE20
  f_8011F09C(c); return; // 801CDE24
}

// fn_801CDE28
void f_801CDE28(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE28
  f_8011F0A4(c); return; // 801CDE2C
}

// fn_801CDE30
void f_801CDE30(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE30
  f_8011F0AC(c); return; // 801CDE34
}

// fn_801CDE38
void f_801CDE38(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE38
  f_8011F0B4(c); return; // 801CDE3C
}

// fn_801CDE40
void f_801CDE40(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000118u; // 801CDE40
  f_8011F0BC(c); return; // 801CDE44
}

// fn_801CDE48
void f_801CDE48(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000140u; // 801CDE48
  f_8011F0C4(c); return; // 801CDE4C
}

// fn_801CDE50
void f_801CDE50(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000140u; // 801CDE50
  f_8011F0D8(c); return; // 801CDE54
}

// fn_801CDE58
void f_801CDE58(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000140u; // 801CDE58
  f_8011F10C(c); return; // 801CDE5C
}

// fn_801CDE60
void f_801CDE60(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000140u; // 801CDE60
  f_8011F114(c); return; // 801CDE64
}

// fn_801CDE68
void f_801CDE68(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00000140u; // 801CDE68
  f_8011F11C(c); return; // 801CDE6C
}

// fn_801CDE70
void f_801CDE70(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801CDE70
  c->r[3]=c->r[3]+0x00000C68u; // 801CDE74
  return; // 801CDE78
}

// fn_801CDE7C
void f_801CDE7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDE7C
  c->r[0]=c->lr; // 801CDE80
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDE84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDE88
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CDE8C
  c->r[30]=c->r[3]|c->r[3]; // 801CDE90
  c->r[31]=c->r[4]|c->r[4]; // 801CDE94
  cmps(c,0,(int32_t)c->r[3],0); // 801CDE98
  if (crb(c,2)) { goto L_801CDED8; } // 801CDE9C
  c->r[3]=c->r[3]+0x00000140u; // 801CDEA0
  c->r[4]=0u+0xFFFFFFFFu; // 801CDEA4
  c->lr=0x801CDEACu; f_8011EE4C(c); // 801CDEA8
  c->r[3]=c->r[30]+0x00000098u; // 801CDEAC
  c->r[4]=0u+0xFFFFFFFFu; // 801CDEB0
  c->lr=0x801CDEB8u; f_8011EE4C(c); // 801CDEB4
  c->r[3]=c->r[30]|c->r[30]; // 801CDEB8
  c->r[4]=0u+0x00000000u; // 801CDEBC
  c->lr=0x801CDEC4u; f_801197A8(c); // 801CDEC0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801CDEC4
  cmps(c,0,(int32_t)c->r[0],0); // 801CDEC8
  if (!crb(c,1)) { goto L_801CDED8; } // 801CDECC
  c->r[3]=c->r[30]|c->r[30]; // 801CDED0
  c->lr=0x801CDED8u; f_80047B20(c); // 801CDED4
L_801CDED8:;
  c->r[3]=c->r[30]|c->r[30]; // 801CDED8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDEDC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CDEE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDEE4
  c->lr=c->r[0]; // 801CDEE8
  c->r[1]=c->r[1]+0x00000010u; // 801CDEEC
  return; // 801CDEF0
}

// fn_801CDEF4
void f_801CDEF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDEF4
  c->r[0]=c->lr; // 801CDEF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDEFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDF00
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CDF04
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CDF08
  c->r[29]=c->r[3]|c->r[3]; // 801CDF0C
  c->lr=0x801CDF14u; f_80056B5C(c); // 801CDF10
  c->r[30]=c->r[3]|c->r[3]; // 801CDF14
  c->lr=0x801CDF1Cu; f_8005DEE8(c); // 801CDF18
  c->lr=0x801CDF20u; f_80056B54(c); // 801CDF1C
  c->r[3]=0u+0x00000158u; // 801CDF20
  c->lr=0x801CDF28u; f_80047B64(c); // 801CDF24
  c->r[31]=c->r[3]|c->r[3]; // 801CDF28
  cmps(c,0,(int32_t)c->r[3],0); // 801CDF2C
  if (crb(c,2)) { goto L_801CDF38; } // 801CDF30
  c->lr=0x801CDF38u; f_801CDC0C(c); // 801CDF34
L_801CDF38:;
  c->r[3]=c->r[30]|c->r[30]; // 801CDF38
  c->lr=0x801CDF40u; f_80056B54(c); // 801CDF3C
  c->r[3]=c->r[31]|c->r[31]; // 801CDF40
  c->r[4]=0u+0x00000009u; // 801CDF44
  c->lr=0x801CDF4Cu; f_8011A278(c); // 801CDF48
  c->r[3]=c->r[29]|c->r[29]; // 801CDF4C
  c->r[4]=c->r[31]|c->r[31]; // 801CDF50
  c->lr=0x801CDF58u; f_8028CA70(c); // 801CDF54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CDF58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CDF5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CDF60
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CDF64
  c->lr=c->r[0]; // 801CDF68
  c->r[1]=c->r[1]+0x00000020u; // 801CDF6C
  return; // 801CDF70
}

// fn_801CDF74
void f_801CDF74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDF74
  c->r[0]=c->lr; // 801CDF78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDF7C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CDF80
  c->f[31]=c->f[1]; // 801CDF84
  c->r[4]=0u+0x00000009u; // 801CDF88
  c->lr=0x801CDF90u; f_8011B718(c); // 801CDF8C
  cmps(c,0,(int32_t)c->r[3],0); // 801CDF90
  if (crb(c,2)) { goto L_801CDFA0; } // 801CDF94
  c->f[1]=c->f[31]; // 801CDF98
  c->lr=0x801CDFA0u; f_801CDC98(c); // 801CDF9C
L_801CDFA0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CDFA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDFA4
  c->lr=c->r[0]; // 801CDFA8
  c->r[1]=c->r[1]+0x00000010u; // 801CDFAC
  return; // 801CDFB0
}

// fn_801CDFB4
void f_801CDFB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDFB4
  c->r[0]=c->lr; // 801CDFB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDFBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDFC0
  c->r[31]=c->r[4]|c->r[4]; // 801CDFC4
  c->r[4]=0u+0x00000009u; // 801CDFC8
  c->lr=0x801CDFD0u; f_8011B718(c); // 801CDFCC
  cmps(c,0,(int32_t)c->r[3],0); // 801CDFD0
  if (crb(c,2)) { goto L_801CDFE0; } // 801CDFD4
  c->r[4]=c->r[31]|c->r[31]; // 801CDFD8
  c->lr=0x801CDFE0u; f_801CDCA0(c); // 801CDFDC
L_801CDFE0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDFE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDFE4
  c->lr=c->r[0]; // 801CDFE8
  c->r[1]=c->r[1]+0x00000010u; // 801CDFEC
  return; // 801CDFF0
}

// fn_801CDFF4
void f_801CDFF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDFF4
  c->r[0]=c->lr; // 801CDFF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDFFC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE000
  c->f[31]=c->f[1]; // 801CE004
  c->r[4]=0u+0x00000009u; // 801CE008
  c->lr=0x801CE010u; f_8011B718(c); // 801CE00C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE010
  if (crb(c,2)) { goto L_801CE020; } // 801CE014
  c->f[1]=c->f[31]; // 801CE018
  c->lr=0x801CE020u; f_801CDCA8(c); // 801CE01C
L_801CE020:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE020
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE024
  c->lr=c->r[0]; // 801CE028
  c->r[1]=c->r[1]+0x00000010u; // 801CE02C
  return; // 801CE030
}

// fn_801CE034
void f_801CE034(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE034
  c->r[0]=c->lr; // 801CE038
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE03C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE040
  c->f[31]=c->f[1]; // 801CE044
  c->r[4]=0u+0x00000009u; // 801CE048
  c->lr=0x801CE050u; f_8011B718(c); // 801CE04C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE050
  if (crb(c,2)) { goto L_801CE060; } // 801CE054
  c->f[1]=c->f[31]; // 801CE058
  c->lr=0x801CE060u; f_801CDCD8(c); // 801CE05C
L_801CE060:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE060
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE064
  c->lr=c->r[0]; // 801CE068
  c->r[1]=c->r[1]+0x00000010u; // 801CE06C
  return; // 801CE070
}

// fn_801CE074
void f_801CE074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE074
  c->r[0]=c->lr; // 801CE078
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE07C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE080
  c->r[31]=c->r[4]|c->r[4]; // 801CE084
  c->r[4]=0u+0x00000009u; // 801CE088
  c->lr=0x801CE090u; f_8011B718(c); // 801CE08C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE090
  if (crb(c,2)) { goto L_801CE0A0; } // 801CE094
  c->r[4]=c->r[31]|c->r[31]; // 801CE098
  c->lr=0x801CE0A0u; f_801CDCE0(c); // 801CE09C
L_801CE0A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE0A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE0A4
  c->lr=c->r[0]; // 801CE0A8
  c->r[1]=c->r[1]+0x00000010u; // 801CE0AC
  return; // 801CE0B0
}

// fn_801CE0B4
void f_801CE0B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE0B4
  c->r[0]=c->lr; // 801CE0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE0BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE0C0
  c->f[31]=c->f[1]; // 801CE0C4
  c->r[4]=0u+0x00000009u; // 801CE0C8
  c->lr=0x801CE0D0u; f_8011B718(c); // 801CE0CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CE0D0
  if (crb(c,2)) { goto L_801CE0E0; } // 801CE0D4
  c->f[1]=c->f[31]; // 801CE0D8
  c->lr=0x801CE0E0u; f_801CDCE8(c); // 801CE0DC
L_801CE0E0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE0E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE0E4
  c->lr=c->r[0]; // 801CE0E8
  c->r[1]=c->r[1]+0x00000010u; // 801CE0EC
  return; // 801CE0F0
}

// fn_801CE0F4
void f_801CE0F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE0F4
  c->r[0]=c->lr; // 801CE0F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE0FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE100
  c->r[31]=c->r[4]|c->r[4]; // 801CE104
  c->r[4]=0u+0x00000009u; // 801CE108
  c->lr=0x801CE110u; f_8011B718(c); // 801CE10C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE110
  if (crb(c,2)) { goto L_801CE120; } // 801CE114
  c->r[4]=c->r[31]|c->r[31]; // 801CE118
  c->lr=0x801CE120u; f_801CDD18(c); // 801CE11C
L_801CE120:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE120
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE124
  c->lr=c->r[0]; // 801CE128
  c->r[1]=c->r[1]+0x00000010u; // 801CE12C
  return; // 801CE130
}

// fn_801CE134
void f_801CE134(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE134
  c->r[0]=c->lr; // 801CE138
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE13C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE140
  c->f[31]=c->f[1]; // 801CE144
  c->r[4]=0u+0x00000009u; // 801CE148
  c->lr=0x801CE150u; f_8011B718(c); // 801CE14C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE150
  if (crb(c,2)) { goto L_801CE160; } // 801CE154
  c->f[1]=c->f[31]; // 801CE158
  c->lr=0x801CE160u; f_801CDD20(c); // 801CE15C
L_801CE160:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE160
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE164
  c->lr=c->r[0]; // 801CE168
  c->r[1]=c->r[1]+0x00000010u; // 801CE16C
  return; // 801CE170
}

// fn_801CE174
void f_801CE174(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE174
  c->r[0]=c->lr; // 801CE178
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE17C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE180
  c->r[31]=c->r[4]|c->r[4]; // 801CE184
  c->r[4]=0u+0x00000009u; // 801CE188
  c->lr=0x801CE190u; f_8011B718(c); // 801CE18C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE190
  if (crb(c,2)) { goto L_801CE1A0; } // 801CE194
  c->r[4]=c->r[31]|c->r[31]; // 801CE198
  c->lr=0x801CE1A0u; f_801CDD40(c); // 801CE19C
L_801CE1A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE1A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE1A4
  c->lr=c->r[0]; // 801CE1A8
  c->r[1]=c->r[1]+0x00000010u; // 801CE1AC
  return; // 801CE1B0
}

// fn_801CE1B4
void f_801CE1B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE1B4
  c->r[0]=c->lr; // 801CE1B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE1BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE1C0
  c->r[31]=c->r[4]|c->r[4]; // 801CE1C4
  c->r[4]=0u+0x00000009u; // 801CE1C8
  c->lr=0x801CE1D0u; f_8011B718(c); // 801CE1CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CE1D0
  if (crb(c,2)) { goto L_801CE1E0; } // 801CE1D4
  c->r[4]=c->r[31]|c->r[31]; // 801CE1D8
  c->lr=0x801CE1E0u; f_801CDD58(c); // 801CE1DC
L_801CE1E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE1E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE1E4
  c->lr=c->r[0]; // 801CE1E8
  c->r[1]=c->r[1]+0x00000010u; // 801CE1EC
  return; // 801CE1F0
}

// fn_801CE1F4
void f_801CE1F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE1F4
  c->r[0]=c->lr; // 801CE1F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE1FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE200
  c->r[31]=c->r[4]|c->r[4]; // 801CE204
  c->r[4]=0u+0x00000009u; // 801CE208
  c->lr=0x801CE210u; f_8011B718(c); // 801CE20C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE210
  if (crb(c,2)) { goto L_801CE220; } // 801CE214
  c->r[4]=c->r[31]|c->r[31]; // 801CE218
  c->lr=0x801CE220u; f_801CDD70(c); // 801CE21C
L_801CE220:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE220
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE224
  c->lr=c->r[0]; // 801CE228
  c->r[1]=c->r[1]+0x00000010u; // 801CE22C
  return; // 801CE230
}

// fn_801CE234
void f_801CE234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE234
  c->r[0]=c->lr; // 801CE238
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE23C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE240
  c->f[31]=c->f[1]; // 801CE244
  c->r[4]=0u+0x00000009u; // 801CE248
  c->lr=0x801CE250u; f_8011B718(c); // 801CE24C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE250
  if (crb(c,2)) { goto L_801CE260; } // 801CE254
  c->f[1]=c->f[31]; // 801CE258
  c->lr=0x801CE260u; f_801CDD88(c); // 801CE25C
L_801CE260:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE260
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE264
  c->lr=c->r[0]; // 801CE268
  c->r[1]=c->r[1]+0x00000010u; // 801CE26C
  return; // 801CE270
}

// fn_801CE274
void f_801CE274(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE274
  c->r[0]=c->lr; // 801CE278
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE27C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE280
  c->r[31]=c->r[4]|c->r[4]; // 801CE284
  c->r[4]=0u+0x00000009u; // 801CE288
  c->lr=0x801CE290u; f_8011B718(c); // 801CE28C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE290
  if (crb(c,2)) { goto L_801CE2A0; } // 801CE294
  c->r[4]=c->r[31]|c->r[31]; // 801CE298
  c->lr=0x801CE2A0u; f_801CDD90(c); // 801CE29C
L_801CE2A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE2A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE2A4
  c->lr=c->r[0]; // 801CE2A8
  c->r[1]=c->r[1]+0x00000010u; // 801CE2AC
  return; // 801CE2B0
}

// fn_801CE2B4
void f_801CE2B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE2B4
  c->r[0]=c->lr; // 801CE2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE2BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE2C0
  c->f[31]=c->f[1]; // 801CE2C4
  c->r[4]=0u+0x00000009u; // 801CE2C8
  c->lr=0x801CE2D0u; f_8011B718(c); // 801CE2CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CE2D0
  if (crb(c,2)) { goto L_801CE2E0; } // 801CE2D4
  c->f[1]=c->f[31]; // 801CE2D8
  c->lr=0x801CE2E0u; f_801CDD98(c); // 801CE2DC
L_801CE2E0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE2E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE2E4
  c->lr=c->r[0]; // 801CE2E8
  c->r[1]=c->r[1]+0x00000010u; // 801CE2EC
  return; // 801CE2F0
}

// fn_801CE2F4
void f_801CE2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE2F4
  c->r[0]=c->lr; // 801CE2F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE2FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE300
  c->f[31]=c->f[1]; // 801CE304
  c->r[4]=0u+0x00000009u; // 801CE308
  c->lr=0x801CE310u; f_8011B718(c); // 801CE30C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE310
  if (crb(c,2)) { goto L_801CE320; } // 801CE314
  c->f[1]=c->f[31]; // 801CE318
  c->lr=0x801CE320u; f_801CDDC8(c); // 801CE31C
L_801CE320:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE320
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE324
  c->lr=c->r[0]; // 801CE328
  c->r[1]=c->r[1]+0x00000010u; // 801CE32C
  return; // 801CE330
}

// fn_801CE334
void f_801CE334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE334
  c->r[0]=c->lr; // 801CE338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE33C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE340
  c->r[31]=c->r[4]|c->r[4]; // 801CE344
  c->r[4]=0u+0x00000009u; // 801CE348
  c->lr=0x801CE350u; f_8011B718(c); // 801CE34C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE350
  if (crb(c,2)) { goto L_801CE360; } // 801CE354
  c->r[4]=c->r[31]|c->r[31]; // 801CE358
  c->lr=0x801CE360u; f_801CDDD0(c); // 801CE35C
L_801CE360:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE360
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE364
  c->lr=c->r[0]; // 801CE368
  c->r[1]=c->r[1]+0x00000010u; // 801CE36C
  return; // 801CE370
}

// fn_801CE374
void f_801CE374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE374
  c->r[0]=c->lr; // 801CE378
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE37C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE380
  c->f[31]=c->f[1]; // 801CE384
  c->r[4]=0u+0x00000009u; // 801CE388
  c->lr=0x801CE390u; f_8011B718(c); // 801CE38C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE390
  if (crb(c,2)) { goto L_801CE3A0; } // 801CE394
  c->f[1]=c->f[31]; // 801CE398
  c->lr=0x801CE3A0u; f_801CDDD8(c); // 801CE39C
L_801CE3A0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE3A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE3A4
  c->lr=c->r[0]; // 801CE3A8
  c->r[1]=c->r[1]+0x00000010u; // 801CE3AC
  return; // 801CE3B0
}

// fn_801CE3B4
void f_801CE3B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE3B4
  c->r[0]=c->lr; // 801CE3B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE3BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE3C0
  c->f[31]=c->f[1]; // 801CE3C4
  c->r[4]=0u+0x00000009u; // 801CE3C8
  c->lr=0x801CE3D0u; f_8011B718(c); // 801CE3CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CE3D0
  if (crb(c,2)) { goto L_801CE3E0; } // 801CE3D4
  c->f[1]=c->f[31]; // 801CE3D8
  c->lr=0x801CE3E0u; f_801CDE08(c); // 801CE3DC
L_801CE3E0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE3E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE3E4
  c->lr=c->r[0]; // 801CE3E8
  c->r[1]=c->r[1]+0x00000010u; // 801CE3EC
  return; // 801CE3F0
}

// fn_801CE3F4
void f_801CE3F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE3F4
  c->r[0]=c->lr; // 801CE3F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE3FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE400
  c->r[31]=c->r[4]|c->r[4]; // 801CE404
  c->r[4]=0u+0x00000009u; // 801CE408
  c->lr=0x801CE410u; f_8011B718(c); // 801CE40C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE410
  if (crb(c,2)) { goto L_801CE420; } // 801CE414
  c->r[4]=c->r[31]|c->r[31]; // 801CE418
  c->lr=0x801CE420u; f_801CDE10(c); // 801CE41C
L_801CE420:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE420
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE424
  c->lr=c->r[0]; // 801CE428
  c->r[1]=c->r[1]+0x00000010u; // 801CE42C
  return; // 801CE430
}

// fn_801CE434
void f_801CE434(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE434
  c->r[0]=c->lr; // 801CE438
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE43C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE440
  c->f[31]=c->f[1]; // 801CE444
  c->r[4]=0u+0x00000009u; // 801CE448
  c->lr=0x801CE450u; f_8011B718(c); // 801CE44C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE450
  if (crb(c,2)) { goto L_801CE460; } // 801CE454
  c->f[1]=c->f[31]; // 801CE458
  c->lr=0x801CE460u; f_801CDE18(c); // 801CE45C
L_801CE460:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE460
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE464
  c->lr=c->r[0]; // 801CE468
  c->r[1]=c->r[1]+0x00000010u; // 801CE46C
  return; // 801CE470
}

// fn_801CE474
void f_801CE474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE474
  c->r[0]=c->lr; // 801CE478
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE480
  c->r[31]=c->r[4]|c->r[4]; // 801CE484
  c->r[4]=0u+0x00000009u; // 801CE488
  c->lr=0x801CE490u; f_8011B718(c); // 801CE48C
  cmps(c,0,(int32_t)c->r[3],0); // 801CE490
  if (crb(c,2)) { goto L_801CE4A0; } // 801CE494
  c->r[4]=c->r[31]|c->r[31]; // 801CE498
  c->lr=0x801CE4A0u; f_801CDE48(c); // 801CE49C
L_801CE4A0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE4A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE4A4
  c->lr=c->r[0]; // 801CE4A8
  c->r[1]=c->r[1]+0x00000010u; // 801CE4AC
  return; // 801CE4B0
}

// fn_801CE4B4
void f_801CE4B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE4B4
  c->r[0]=c->lr; // 801CE4B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE4BC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE4C0
  c->f[31]=c->f[1]; // 801CE4C4
  c->r[4]=0u+0x00000009u; // 801CE4C8
  c->lr=0x801CE4D0u; f_8011B718(c); // 801CE4CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CE4D0
  if (crb(c,2)) { goto L_801CE4E0; } // 801CE4D4
  c->f[1]=c->f[31]; // 801CE4D8
  c->lr=0x801CE4E0u; f_801CDE50(c); // 801CE4DC
L_801CE4E0:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE4E4
  c->lr=c->r[0]; // 801CE4E8
  c->r[1]=c->r[1]+0x00000010u; // 801CE4EC
  return; // 801CE4F0
}

// fn_801CE4F4
void f_801CE4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE4F4
  c->r[0]=c->lr; // 801CE4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE4FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE500
  c->f[31]=c->f[1]; // 801CE504
  c->lr=0x801CE50Cu; f_8011B41C(c); // 801CE508
  c->f[1]=c->f[31]; // 801CE50C
  c->lr=0x801CE514u; f_801CDF74(c); // 801CE510
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE514
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE518
  c->lr=c->r[0]; // 801CE51C
  c->r[1]=c->r[1]+0x00000010u; // 801CE520
  return; // 801CE524
}

// fn_801CE528
void f_801CE528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE528
  c->r[0]=c->lr; // 801CE52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE530
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE534
  c->r[31]=c->r[3]|c->r[3]; // 801CE538
  c->lr=0x801CE540u; f_8011B41C(c); // 801CE53C
  c->r[4]=c->r[31]|c->r[31]; // 801CE540
  c->lr=0x801CE548u; f_801CDFB4(c); // 801CE544
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE548
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE54C
  c->lr=c->r[0]; // 801CE550
  c->r[1]=c->r[1]+0x00000010u; // 801CE554
  return; // 801CE558
}

// fn_801CE55C
void f_801CE55C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE55C
  c->r[0]=c->lr; // 801CE560
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE564
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE568
  c->f[31]=c->f[1]; // 801CE56C
  c->lr=0x801CE574u; f_8011B41C(c); // 801CE570
  c->f[1]=c->f[31]; // 801CE574
  c->lr=0x801CE57Cu; f_801CDFF4(c); // 801CE578
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE57C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE580
  c->lr=c->r[0]; // 801CE584
  c->r[1]=c->r[1]+0x00000010u; // 801CE588
  return; // 801CE58C
}

// fn_801CE590
void f_801CE590(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE590
  c->r[0]=c->lr; // 801CE594
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE598
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE59C
  c->f[31]=c->f[1]; // 801CE5A0
  c->lr=0x801CE5A8u; f_8011B41C(c); // 801CE5A4
  c->f[1]=c->f[31]; // 801CE5A8
  c->lr=0x801CE5B0u; f_801CE034(c); // 801CE5AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE5B4
  c->lr=c->r[0]; // 801CE5B8
  c->r[1]=c->r[1]+0x00000010u; // 801CE5BC
  return; // 801CE5C0
}

// fn_801CE5C4
void f_801CE5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE5C4
  c->r[0]=c->lr; // 801CE5C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE5CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE5D0
  c->r[31]=c->r[3]|c->r[3]; // 801CE5D4
  c->lr=0x801CE5DCu; f_8011B41C(c); // 801CE5D8
  c->r[4]=c->r[31]|c->r[31]; // 801CE5DC
  c->lr=0x801CE5E4u; f_801CE074(c); // 801CE5E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE5E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE5E8
  c->lr=c->r[0]; // 801CE5EC
  c->r[1]=c->r[1]+0x00000010u; // 801CE5F0
  return; // 801CE5F4
}

// fn_801CE5F8
void f_801CE5F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE5F8
  c->r[0]=c->lr; // 801CE5FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE600
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE604
  c->f[31]=c->f[1]; // 801CE608
  c->lr=0x801CE610u; f_8011B41C(c); // 801CE60C
  c->f[1]=c->f[31]; // 801CE610
  c->lr=0x801CE618u; f_801CE0B4(c); // 801CE614
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE618
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE61C
  c->lr=c->r[0]; // 801CE620
  c->r[1]=c->r[1]+0x00000010u; // 801CE624
  return; // 801CE628
}

// fn_801CE62C
void f_801CE62C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE62C
  c->r[0]=c->lr; // 801CE630
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE634
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE638
  c->r[31]=c->r[3]|c->r[3]; // 801CE63C
  c->lr=0x801CE644u; f_8011B41C(c); // 801CE640
  c->r[4]=c->r[31]|c->r[31]; // 801CE644
  c->lr=0x801CE64Cu; f_801CE0F4(c); // 801CE648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE64C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE650
  c->lr=c->r[0]; // 801CE654
  c->r[1]=c->r[1]+0x00000010u; // 801CE658
  return; // 801CE65C
}

// fn_801CE660
void f_801CE660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE660
  c->r[0]=c->lr; // 801CE664
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE668
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE66C
  c->f[31]=c->f[1]; // 801CE670
  c->lr=0x801CE678u; f_8011B41C(c); // 801CE674
  c->f[1]=c->f[31]; // 801CE678
  c->lr=0x801CE680u; f_801CE134(c); // 801CE67C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE680
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE684
  c->lr=c->r[0]; // 801CE688
  c->r[1]=c->r[1]+0x00000010u; // 801CE68C
  return; // 801CE690
}

// fn_801CE694
void f_801CE694(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE694
  c->r[0]=c->lr; // 801CE698
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE69C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE6A0
  c->r[31]=c->r[3]|c->r[3]; // 801CE6A4
  c->lr=0x801CE6ACu; f_8011B41C(c); // 801CE6A8
  c->r[4]=c->r[31]|c->r[31]; // 801CE6AC
  c->lr=0x801CE6B4u; f_801CE174(c); // 801CE6B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE6B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE6B8
  c->lr=c->r[0]; // 801CE6BC
  c->r[1]=c->r[1]+0x00000010u; // 801CE6C0
  return; // 801CE6C4
}

// fn_801CE6C8
void f_801CE6C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE6C8
  c->r[0]=c->lr; // 801CE6CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE6D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE6D4
  c->r[31]=c->r[3]|c->r[3]; // 801CE6D8
  c->lr=0x801CE6E0u; f_8011B41C(c); // 801CE6DC
  c->r[4]=c->r[31]|c->r[31]; // 801CE6E0
  c->lr=0x801CE6E8u; f_801CE1B4(c); // 801CE6E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE6E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE6EC
  c->lr=c->r[0]; // 801CE6F0
  c->r[1]=c->r[1]+0x00000010u; // 801CE6F4
  return; // 801CE6F8
}

// fn_801CE6FC
void f_801CE6FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE6FC
  c->r[0]=c->lr; // 801CE700
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE704
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE708
  c->r[31]=c->r[3]|c->r[3]; // 801CE70C
  c->lr=0x801CE714u; f_8011B41C(c); // 801CE710
  c->r[4]=c->r[31]|c->r[31]; // 801CE714
  c->lr=0x801CE71Cu; f_801CE1F4(c); // 801CE718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE71C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE720
  c->lr=c->r[0]; // 801CE724
  c->r[1]=c->r[1]+0x00000010u; // 801CE728
  return; // 801CE72C
}

// fn_801CE730
void f_801CE730(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE730
  c->r[0]=c->lr; // 801CE734
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE738
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE73C
  c->f[31]=c->f[1]; // 801CE740
  c->lr=0x801CE748u; f_8011B41C(c); // 801CE744
  c->f[1]=c->f[31]; // 801CE748
  c->lr=0x801CE750u; f_801CE234(c); // 801CE74C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE750
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE754
  c->lr=c->r[0]; // 801CE758
  c->r[1]=c->r[1]+0x00000010u; // 801CE75C
  return; // 801CE760
}

// fn_801CE764
void f_801CE764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE764
  c->r[0]=c->lr; // 801CE768
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE76C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE770
  c->r[31]=c->r[3]|c->r[3]; // 801CE774
  c->lr=0x801CE77Cu; f_8011B41C(c); // 801CE778
  c->r[4]=c->r[31]|c->r[31]; // 801CE77C
  c->lr=0x801CE784u; f_801CE274(c); // 801CE780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE784
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE788
  c->lr=c->r[0]; // 801CE78C
  c->r[1]=c->r[1]+0x00000010u; // 801CE790
  return; // 801CE794
}

// fn_801CE798
void f_801CE798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE798
  c->r[0]=c->lr; // 801CE79C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE7A0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE7A4
  c->f[31]=c->f[1]; // 801CE7A8
  c->lr=0x801CE7B0u; f_8011B41C(c); // 801CE7AC
  c->f[1]=c->f[31]; // 801CE7B0
  c->lr=0x801CE7B8u; f_801CE2B4(c); // 801CE7B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE7B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE7BC
  c->lr=c->r[0]; // 801CE7C0
  c->r[1]=c->r[1]+0x00000010u; // 801CE7C4
  return; // 801CE7C8
}

// fn_801CE7CC
void f_801CE7CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE7CC
  c->r[0]=c->lr; // 801CE7D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE7D4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE7D8
  c->f[31]=c->f[1]; // 801CE7DC
  c->lr=0x801CE7E4u; f_8011B41C(c); // 801CE7E0
  c->f[1]=c->f[31]; // 801CE7E4
  c->lr=0x801CE7ECu; f_801CE2F4(c); // 801CE7E8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE7EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE7F0
  c->lr=c->r[0]; // 801CE7F4
  c->r[1]=c->r[1]+0x00000010u; // 801CE7F8
  return; // 801CE7FC
}

// fn_801CE800
void f_801CE800(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE800
  c->r[0]=c->lr; // 801CE804
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE808
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE80C
  c->r[31]=c->r[3]|c->r[3]; // 801CE810
  c->lr=0x801CE818u; f_8011B41C(c); // 801CE814
  c->r[4]=c->r[31]|c->r[31]; // 801CE818
  c->lr=0x801CE820u; f_801CE334(c); // 801CE81C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE820
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE824
  c->lr=c->r[0]; // 801CE828
  c->r[1]=c->r[1]+0x00000010u; // 801CE82C
  return; // 801CE830
}

// fn_801CE834
void f_801CE834(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE834
  c->r[0]=c->lr; // 801CE838
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE83C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE840
  c->f[31]=c->f[1]; // 801CE844
  c->lr=0x801CE84Cu; f_8011B41C(c); // 801CE848
  c->f[1]=c->f[31]; // 801CE84C
  c->lr=0x801CE854u; f_801CE374(c); // 801CE850
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE854
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE858
  c->lr=c->r[0]; // 801CE85C
  c->r[1]=c->r[1]+0x00000010u; // 801CE860
  return; // 801CE864
}

// fn_801CE868
void f_801CE868(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE868
  c->r[0]=c->lr; // 801CE86C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE870
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE874
  c->f[31]=c->f[1]; // 801CE878
  c->lr=0x801CE880u; f_8011B41C(c); // 801CE87C
  c->f[1]=c->f[31]; // 801CE880
  c->lr=0x801CE888u; f_801CE3B4(c); // 801CE884
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE888
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE88C
  c->lr=c->r[0]; // 801CE890
  c->r[1]=c->r[1]+0x00000010u; // 801CE894
  return; // 801CE898
}

// fn_801CE89C
void f_801CE89C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE89C
  c->r[0]=c->lr; // 801CE8A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE8A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE8A8
  c->r[31]=c->r[3]|c->r[3]; // 801CE8AC
  c->lr=0x801CE8B4u; f_8011B41C(c); // 801CE8B0
  c->r[4]=c->r[31]|c->r[31]; // 801CE8B4
  c->lr=0x801CE8BCu; f_801CE3F4(c); // 801CE8B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE8BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE8C0
  c->lr=c->r[0]; // 801CE8C4
  c->r[1]=c->r[1]+0x00000010u; // 801CE8C8
  return; // 801CE8CC
}

// fn_801CE8D0
void f_801CE8D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE8D0
  c->r[0]=c->lr; // 801CE8D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE8D8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE8DC
  c->f[31]=c->f[1]; // 801CE8E0
  c->lr=0x801CE8E8u; f_8011B41C(c); // 801CE8E4
  c->f[1]=c->f[31]; // 801CE8E8
  c->lr=0x801CE8F0u; f_801CE434(c); // 801CE8EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE8F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE8F4
  c->lr=c->r[0]; // 801CE8F8
  c->r[1]=c->r[1]+0x00000010u; // 801CE8FC
  return; // 801CE900
}

// fn_801CE904
void f_801CE904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE904
  c->r[0]=c->lr; // 801CE908
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE90C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE910
  c->r[31]=c->r[3]|c->r[3]; // 801CE914
  c->lr=0x801CE91Cu; f_8011B41C(c); // 801CE918
  c->r[4]=c->r[31]|c->r[31]; // 801CE91C
  c->lr=0x801CE924u; f_801CE474(c); // 801CE920
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE924
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE928
  c->lr=c->r[0]; // 801CE92C
  c->r[1]=c->r[1]+0x00000010u; // 801CE930
  return; // 801CE934
}

// fn_801CE938
void f_801CE938(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE938
  c->r[0]=c->lr; // 801CE93C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE940
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CE944
  c->f[31]=c->f[1]; // 801CE948
  c->lr=0x801CE950u; f_8011B41C(c); // 801CE94C
  c->f[1]=c->f[31]; // 801CE950
  c->lr=0x801CE958u; f_801CE4B4(c); // 801CE954
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CE958
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE95C
  c->lr=c->r[0]; // 801CE960
  c->r[1]=c->r[1]+0x00000010u; // 801CE964
  return; // 801CE968
}

// fn_801CE96C
void f_801CE96C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE96C
  c->r[0]=c->lr; // 801CE970
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE974
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE978
  c->r[31]=c->r[3]|c->r[3]; // 801CE97C
  c->lr=0x801CE984u; f_80130F14(c); // 801CE980
  c->r[3]=0u+0x80470000u; // 801CE984
  c->r[0]=c->r[3]+0x000027FCu; // 801CE988
  W32(c->r[31]+0x00000058u,c->r[0]); // 801CE98C
  c->r[3]=c->r[31]|c->r[31]; // 801CE990
  c->r[4]=0u+0x80470000u; // 801CE994
  c->r[4]=c->r[4]+0x000026A0u; // 801CE998
  c->lr=0x801CE9A0u; f_80131078(c); // 801CE99C
  c->r[0]=0u+0x00000000u; // 801CE9A0
  W32(c->r[31]+0x000000E8u,c->r[0]); // 801CE9A4
  W32(c->r[31]+0x000000F0u,c->r[0]); // 801CE9A8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CE9AC
  c->r[3]=c->r[31]|c->r[31]; // 801CE9B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE9B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE9B8
  c->lr=c->r[0]; // 801CE9BC
  c->r[1]=c->r[1]+0x00000010u; // 801CE9C0
  return; // 801CE9C4
}

// fn_801CE9C8
void f_801CE9C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE9C8
  c->r[0]=c->lr; // 801CE9CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE9D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE9D4
  c->r[31]=c->r[3]|c->r[3]; // 801CE9D8
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CE9DC
  c->lr=0x801CE9E4u; f_801CAF94(c); // 801CE9E0
  c->r[4]=c->r[3]|c->r[3]; // 801CE9E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CE9E8
  c->lr=0x801CE9F0u; f_801CA028(c); // 801CE9EC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CE9F0
  c->lr=0x801CE9F8u; f_801CA020(c); // 801CE9F4
  c->r[4]=c->r[3]|c->r[3]; // 801CE9F8
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CE9FC
  c->lr=0x801CEA04u; f_801CB184(c); // 801CEA00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEA04
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEA08
  c->lr=c->r[0]; // 801CEA0C
  c->r[1]=c->r[1]+0x00000010u; // 801CEA10
  return; // 801CEA14
}

// fn_801CEA18
void f_801CEA18(Ctx* __restrict c) {
  return; // 801CEA18
}

// fn_801CEA1C
void f_801CEA1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEA1C
  c->r[0]=c->lr; // 801CEA20
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEA24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CEA28
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CEA2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CEA30
  c->r[29]=c->r[3]|c->r[3]; // 801CEA34
  c->r[3]=0u+0x00000009u; // 801CEA38
  c->lr=0x801CEA40u; f_801F1364(c); // 801CEA3C
  c->r[3]=c->r[29]|c->r[29]; // 801CEA40
  c->r[4]=0u+0x00000000u; // 801CEA44
  c->lr=0x801CEA4Cu; f_80131168(c); // 801CEA48
  c->r[3]=c->r[29]|c->r[29]; // 801CEA4C
  c->r[4]=0u+0x00000000u; // 801CEA50
  c->lr=0x801CEA58u; f_80131184(c); // 801CEA54
  c->lr=0x801CEA5Cu; f_80056B5C(c); // 801CEA58
  c->r[30]=c->r[3]|c->r[3]; // 801CEA5C
  c->lr=0x801CEA64u; f_801F1340(c); // 801CEA60
  c->lr=0x801CEA68u; f_80056B54(c); // 801CEA64
  c->r[3]=0u+0x00000058u; // 801CEA68
  c->lr=0x801CEA70u; f_80047B64(c); // 801CEA6C
  c->r[31]=c->r[3]|c->r[3]; // 801CEA70
  cmps(c,0,(int32_t)c->r[3],0); // 801CEA74
  if (crb(c,2)) { goto L_801CEA80; } // 801CEA78
  c->lr=0x801CEA80u; f_801C9990(c); // 801CEA7C
L_801CEA80:;
  W32(c->r[29]+0x000000E8u,c->r[31]); // 801CEA80
  c->r[3]=c->r[30]|c->r[30]; // 801CEA84
  c->lr=0x801CEA8Cu; f_80056B54(c); // 801CEA88
  c->lr=0x801CEA90u; f_80056B5C(c); // 801CEA8C
  c->r[30]=c->r[3]|c->r[3]; // 801CEA90
  c->lr=0x801CEA98u; f_801F1340(c); // 801CEA94
  c->lr=0x801CEA9Cu; f_80056B54(c); // 801CEA98
  c->r[3]=0u+0x000000DCu; // 801CEA9C
  c->lr=0x801CEAA4u; f_80047B64(c); // 801CEAA0
  c->r[31]=c->r[3]|c->r[3]; // 801CEAA4
  cmps(c,0,(int32_t)c->r[3],0); // 801CEAA8
  if (crb(c,2)) { goto L_801CEAB4; } // 801CEAAC
  c->lr=0x801CEAB4u; f_801CA654(c); // 801CEAB0
L_801CEAB4:;
  W32(c->r[29]+0x000000F0u,c->r[31]); // 801CEAB4
  c->r[3]=c->r[30]|c->r[30]; // 801CEAB8
  c->lr=0x801CEAC0u; f_80056B54(c); // 801CEABC
  c->r[3]=R32(c->r[29]+0x000000F0u); // 801CEAC0
  c->lr=0x801CEAC8u; f_801CA6B0(c); // 801CEAC4
  c->r[3]=c->r[29]|c->r[29]; // 801CEAC8
  c->r[4]=0u+0x00000001u; // 801CEACC
  c->lr=0x801CEAD4u; f_801311BC(c); // 801CEAD0
  c->r[3]=c->r[29]|c->r[29]; // 801CEAD4
  c->r[4]=0u+0x00000000u; // 801CEAD8
  c->lr=0x801CEAE0u; f_8013114C(c); // 801CEADC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEAE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CEAE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CEAE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEAEC
  c->lr=c->r[0]; // 801CEAF0
  c->r[1]=c->r[1]+0x00000020u; // 801CEAF4
  return; // 801CEAF8
}

// fn_801CEAFC
void f_801CEAFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEAFC
  c->r[0]=c->lr; // 801CEB00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEB04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEB08
  c->r[31]=c->r[3]|c->r[3]; // 801CEB0C
  c->r[0]=0u+0x00000005u; // 801CEB10
  W32(c->r[3]+0x000000ECu,c->r[0]); // 801CEB14
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEB18
  c->r[4]=0u+0x00000000u; // 801CEB1C
  c->lr=0x801CEB24u; f_801CB5C8(c); // 801CEB20
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEB24
  c->lr=0x801CEB2Cu; f_801CB21C(c); // 801CEB28
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEB2C
  c->lr=0x801CEB34u; f_801CB324(c); // 801CEB30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEB34
  c->lr=0x801CEB3Cu; f_801C9AA8(c); // 801CEB38
  c->r[3]=c->r[31]|c->r[31]; // 801CEB3C
  c->r[4]=0u+0x00000005u; // 801CEB40
  c->lr=0x801CEB48u; f_8013114C(c); // 801CEB44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEB48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEB4C
  c->lr=c->r[0]; // 801CEB50
  c->r[1]=c->r[1]+0x00000010u; // 801CEB54
  return; // 801CEB58
}

// fn_801CEB5C
void f_801CEB5C(Ctx* __restrict c) {
  c->r[4]=0u+0x00000015u; // 801CEB5C
  f_8013114C(c); return; // 801CEB60
}

// fn_801CEB64
void f_801CEB64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEB64
  c->r[0]=c->lr; // 801CEB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEB6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEB70
  c->r[31]=c->r[3]|c->r[3]; // 801CEB74
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEB78
  c->lr=0x801CEB80u; f_801CB3C4(c); // 801CEB7C
  cmps(c,0,(int32_t)c->r[3],0); // 801CEB80
  if (crb(c,2)) { goto L_801CEB9C; } // 801CEB84
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEB88
  c->lr=0x801CEB90u; f_801CB38C(c); // 801CEB8C
  c->r[3]=c->r[31]|c->r[31]; // 801CEB90
  c->r[4]=0u+0x00000015u; // 801CEB94
  c->lr=0x801CEB9Cu; f_8013114C(c); // 801CEB98
L_801CEB9C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEB9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEBA0
  c->lr=c->r[0]; // 801CEBA4
  c->r[1]=c->r[1]+0x00000010u; // 801CEBA8
  return; // 801CEBAC
}

// fn_801CEBB0
void f_801CEBB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEBB0
  c->r[0]=c->lr; // 801CEBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEBB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEBBC
  c->r[31]=c->r[3]|c->r[3]; // 801CEBC0
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEBC4
  c->r[4]=0u+0x00000001u; // 801CEBC8
  c->lr=0x801CEBD0u; f_801CB5C8(c); // 801CEBCC
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEBD0
  c->lr=0x801CEBD8u; f_801CB21C(c); // 801CEBD4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEBD8
  c->lr=0x801CEBE0u; f_801CB3C8(c); // 801CEBDC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEBE0
  c->lr=0x801CEBE8u; f_801CA600(c); // 801CEBE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEBE8
  c->lr=0x801CEBF0u; f_801C9E5C(c); // 801CEBEC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEBF0
  c->lr=0x801CEBF8u; f_801C9AA8(c); // 801CEBF4
  c->r[3]=c->r[31]|c->r[31]; // 801CEBF8
  c->lr=0x801CEC00u; f_801CE9C8(c); // 801CEBFC
  c->r[3]=c->r[31]|c->r[31]; // 801CEC00
  c->r[4]=0u+0x00000006u; // 801CEC04
  c->lr=0x801CEC0Cu; f_8013114C(c); // 801CEC08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEC10
  c->lr=c->r[0]; // 801CEC14
  c->r[1]=c->r[1]+0x00000010u; // 801CEC18
  return; // 801CEC1C
}

// fn_801CEC20
void f_801CEC20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEC20
  c->r[0]=c->lr; // 801CEC24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEC28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEC2C
  c->r[31]=c->r[3]|c->r[3]; // 801CEC30
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEC34
  c->lr=0x801CEC3Cu; f_801CB470(c); // 801CEC38
  cmps(c,0,(int32_t)c->r[3],0); // 801CEC3C
  if (crb(c,2)) { goto L_801CEC6C; } // 801CEC40
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEC44
  c->lr=0x801CEC4Cu; f_801CB474(c); // 801CEC48
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEC4C
  c->lr=0x801CEC54u; f_801CA020(c); // 801CEC50
  c->r[4]=c->r[3]|c->r[3]; // 801CEC54
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEC58
  c->lr=0x801CEC60u; f_801CB1D8(c); // 801CEC5C
  c->r[3]=c->r[31]|c->r[31]; // 801CEC60
  c->r[4]=0u+0x00000009u; // 801CEC64
  c->lr=0x801CEC6Cu; f_8013114C(c); // 801CEC68
L_801CEC6C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEC6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEC70
  c->lr=c->r[0]; // 801CEC74
  c->r[1]=c->r[1]+0x00000010u; // 801CEC78
  return; // 801CEC7C
}

// fn_801CEC80
void f_801CEC80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEC80
  c->r[0]=c->lr; // 801CEC84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEC88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEC8C
  c->r[31]=c->r[3]|c->r[3]; // 801CEC90
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEC94
  c->r[4]=0u+0x00000001u; // 801CEC98
  c->lr=0x801CECA0u; f_801CB5C8(c); // 801CEC9C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CECA0
  c->lr=0x801CECA8u; f_801CB21C(c); // 801CECA4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CECA8
  c->lr=0x801CECB0u; f_801CB400(c); // 801CECAC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CECB0
  c->lr=0x801CECB8u; f_801CA1F8(c); // 801CECB4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CECB8
  c->lr=0x801CECC0u; f_801C9E5C(c); // 801CECBC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CECC0
  c->lr=0x801CECC8u; f_801C9AA8(c); // 801CECC4
  c->r[3]=c->r[31]|c->r[31]; // 801CECC8
  c->lr=0x801CECD0u; f_801CE9C8(c); // 801CECCC
  c->r[3]=c->r[31]|c->r[31]; // 801CECD0
  c->r[4]=0u+0x00000008u; // 801CECD4
  c->lr=0x801CECDCu; f_8013114C(c); // 801CECD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CECDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CECE0
  c->lr=c->r[0]; // 801CECE4
  c->r[1]=c->r[1]+0x00000010u; // 801CECE8
  return; // 801CECEC
}

// fn_801CECF0
void f_801CECF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CECF0
  c->r[0]=c->lr; // 801CECF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CECF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CECFC
  c->r[31]=c->r[3]|c->r[3]; // 801CED00
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CED04
  c->lr=0x801CED0Cu; f_801CB470(c); // 801CED08
  cmps(c,0,(int32_t)c->r[3],0); // 801CED0C
  if (crb(c,2)) { goto L_801CED3C; } // 801CED10
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CED14
  c->lr=0x801CED1Cu; f_801CB474(c); // 801CED18
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CED1C
  c->lr=0x801CED24u; f_801CA020(c); // 801CED20
  c->r[4]=c->r[3]|c->r[3]; // 801CED24
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CED28
  c->lr=0x801CED30u; f_801CB1D8(c); // 801CED2C
  c->r[3]=c->r[31]|c->r[31]; // 801CED30
  c->r[4]=0u+0x00000009u; // 801CED34
  c->lr=0x801CED3Cu; f_8013114C(c); // 801CED38
L_801CED3C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CED3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CED40
  c->lr=c->r[0]; // 801CED44
  c->r[1]=c->r[1]+0x00000010u; // 801CED48
  return; // 801CED4C
}

// fn_801CED50
void f_801CED50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED50
  c->r[0]=c->lr; // 801CED54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CED58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CED5C
  c->r[31]=c->r[3]|c->r[3]; // 801CED60
  c->r[3]=0u+0x00000001u; // 801CED64
  c->lr=0x801CED6Cu; f_8019CD1C(c); // 801CED68
  cmps(c,0,(int32_t)c->r[3],0); // 801CED6C
  if (crb(c,2)) { goto L_801CED8C; } // 801CED70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CED74
  c->lr=0x801CED7Cu; f_801C9AA0(c); // 801CED78
  c->r[3]=c->r[31]|c->r[31]; // 801CED7C
  c->r[4]=0u+0x0000000Eu; // 801CED80
  c->lr=0x801CED88u; f_8013114C(c); // 801CED84
  goto L_801CEE28; // 801CED88
L_801CED8C:;
  c->r[3]=0u+0x00000000u; // 801CED8C
  c->lr=0x801CED94u; f_8019CD1C(c); // 801CED90
  cmps(c,0,(int32_t)c->r[3],0); // 801CED94
  if (crb(c,2)) { goto L_801CEDDC; } // 801CED98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CED9C
  c->lr=0x801CEDA4u; f_801CA020(c); // 801CEDA0
  c->r[4]=c->r[3]|c->r[3]; // 801CEDA4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEDA8
  c->lr=0x801CEDB0u; f_801CAF9C(c); // 801CEDAC
  cmps(c,0,(int32_t)c->r[3],0); // 801CEDB0
  if (crb(c,2)) { goto L_801CEDC4; } // 801CEDB4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEDB8
  c->lr=0x801CEDC0u; f_801C9EF8(c); // 801CEDBC
  goto L_801CEE28; // 801CEDC0
L_801CEDC4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEDC4
  c->lr=0x801CEDCCu; f_801C9EC4(c); // 801CEDC8
  c->r[3]=c->r[31]|c->r[31]; // 801CEDCC
  c->r[4]=0u+0x0000000Au; // 801CEDD0
  c->lr=0x801CEDD8u; f_8013114C(c); // 801CEDD4
  goto L_801CEE28; // 801CEDD8
L_801CEDDC:;
  c->r[3]=0u+0x00000003u; // 801CEDDC
  c->lr=0x801CEDE4u; f_8019CD1C(c); // 801CEDE0
  cmps(c,0,(int32_t)c->r[3],0); // 801CEDE4
  if (crb(c,2)) { goto L_801CEDF4; } // 801CEDE8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEDEC
  c->lr=0x801CEDF4u; f_801C9FD4(c); // 801CEDF0
L_801CEDF4:;
  c->r[3]=0u+0x00000004u; // 801CEDF4
  c->lr=0x801CEDFCu; f_8019CD1C(c); // 801CEDF8
  cmps(c,0,(int32_t)c->r[3],0); // 801CEDFC
  if (crb(c,2)) { goto L_801CEE0C; } // 801CEE00
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEE04
  c->lr=0x801CEE0Cu; f_801C9F88(c); // 801CEE08
L_801CEE0C:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEE0C
  c->lr=0x801CEE14u; f_801CB474(c); // 801CEE10
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEE14
  c->lr=0x801CEE1Cu; f_801CA020(c); // 801CEE18
  c->r[4]=c->r[3]|c->r[3]; // 801CEE1C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEE20
  c->lr=0x801CEE28u; f_801CB1D8(c); // 801CEE24
L_801CEE28:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEE28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEE2C
  c->lr=c->r[0]; // 801CEE30
  c->r[1]=c->r[1]+0x00000010u; // 801CEE34
  return; // 801CEE38
}

// fn_801CEE3C
void f_801CEE3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEE3C
  c->r[0]=c->lr; // 801CEE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEE48
  c->r[31]=c->r[3]|c->r[3]; // 801CEE4C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CEE50
  c->lr=0x801CEE58u; f_801CA020(c); // 801CEE54
  c->r[4]=c->r[3]|c->r[3]; // 801CEE58
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEE5C
  c->lr=0x801CEE64u; f_801CB194(c); // 801CEE60
  c->r[3]=c->r[31]|c->r[31]; // 801CEE64
  c->r[4]=0u+0x0000000Bu; // 801CEE68
  c->lr=0x801CEE70u; f_8013114C(c); // 801CEE6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEE70
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEE74
  c->lr=c->r[0]; // 801CEE78
  c->r[1]=c->r[1]+0x00000010u; // 801CEE7C
  return; // 801CEE80
}

// fn_801CEE84
void f_801CEE84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEE84
  c->r[0]=c->lr; // 801CEE88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEE8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEE90
  c->r[31]=c->r[3]|c->r[3]; // 801CEE94
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEE98
  c->lr=0x801CEEA0u; f_801CB470(c); // 801CEE9C
  cmps(c,0,(int32_t)c->r[3],0); // 801CEEA0
  if (crb(c,2)) { goto L_801CEEC0; } // 801CEEA4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEEA8
  c->r[4]=0u+0x00000000u; // 801CEEAC
  c->lr=0x801CEEB4u; f_801CB2C0(c); // 801CEEB0
  c->r[3]=c->r[31]|c->r[31]; // 801CEEB4
  c->r[4]=0u+0x0000000Cu; // 801CEEB8
  c->lr=0x801CEEC0u; f_8013114C(c); // 801CEEBC
L_801CEEC0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEEC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEEC4
  c->lr=c->r[0]; // 801CEEC8
  c->r[1]=c->r[1]+0x00000010u; // 801CEECC
  return; // 801CEED0
}

// fn_801CEED4
void f_801CEED4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEED4
  c->r[0]=c->lr; // 801CEED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEEDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEEE0
  c->r[31]=c->r[3]|c->r[3]; // 801CEEE4
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEEE8
  c->r[4]=0u+0x00000000u; // 801CEEEC
  c->lr=0x801CEEF4u; f_801CB2C0(c); // 801CEEF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEEF4
  c->lr=0x801CEEFCu; f_801C9E90(c); // 801CEEF8
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEEFC
  c->lr=0x801CEF04u; f_801CB43C(c); // 801CEF00
  c->r[3]=c->r[31]|c->r[31]; // 801CEF04
  c->r[4]=0u+0x0000000Du; // 801CEF08
  c->lr=0x801CEF10u; f_8013114C(c); // 801CEF0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEF10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEF14
  c->lr=c->r[0]; // 801CEF18
  c->r[1]=c->r[1]+0x00000010u; // 801CEF1C
  return; // 801CEF20
}

// fn_801CEF24
void f_801CEF24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEF24
  c->r[0]=c->lr; // 801CEF28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEF2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEF30
  c->r[31]=c->r[3]|c->r[3]; // 801CEF34
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CEF38
  c->lr=0x801CEF40u; f_801CB470(c); // 801CEF3C
  cmps(c,0,(int32_t)c->r[3],0); // 801CEF40
  if (crb(c,2)) { goto L_801CF0B8; } // 801CEF44
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CEF48
  c->r[4]=0u+0x00000000u; // 801CEF4C
  c->lr=0x801CEF54u; f_801CB2B0(c); // 801CEF50
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEF54
  c->lr=0x801CEF5Cu; f_801CA020(c); // 801CEF58
  cmps(c,0,(int32_t)c->r[3],1); // 801CEF5C
  if (crb(c,2)) { goto L_801CF00C; } // 801CEF60
  if (!crb(c,0)) { goto L_801CEF74; } // 801CEF64
  cmps(c,0,(int32_t)c->r[3],0); // 801CEF68
  if (!crb(c,0)) { goto L_801CEF80; } // 801CEF6C
  goto L_801CF0B8; // 801CEF70
L_801CEF74:;
  cmps(c,0,(int32_t)c->r[3],3); // 801CEF74
  if (!crb(c,0)) { goto L_801CF0B8; } // 801CEF78
  goto L_801CF098; // 801CEF7C
L_801CEF80:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEF80
  c->lr=0x801CEF88u; f_801CA250(c); // 801CEF84
  cmps(c,0,(int32_t)c->r[3],0); // 801CEF88
  if (crb(c,2)) { goto L_801CEFB4; } // 801CEF8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEF90
  c->r[4]=0u+0x00000000u; // 801CEF94
  c->lr=0x801CEF9Cu; f_801CA4FC(c); // 801CEF98
  c->r[0]=0u+0x00000005u; // 801CEF9C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CEFA0
  c->r[3]=c->r[31]|c->r[31]; // 801CEFA4
  c->r[4]=0u+0x00000015u; // 801CEFA8
  c->lr=0x801CEFB0u; f_8013114C(c); // 801CEFAC
  goto L_801CF0B8; // 801CEFB0
L_801CEFB4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEFB4
  c->lr=0x801CEFBCu; f_801CA294(c); // 801CEFB8
  cmps(c,0,(int32_t)c->r[3],0); // 801CEFBC
  if (crb(c,2)) { goto L_801CEFE8; } // 801CEFC0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEFC4
  c->r[4]=0u+0x00000002u; // 801CEFC8
  c->lr=0x801CEFD0u; f_801CA4FC(c); // 801CEFCC
  c->r[0]=0u+0x00000005u; // 801CEFD0
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CEFD4
  c->r[3]=c->r[31]|c->r[31]; // 801CEFD8
  c->r[4]=0u+0x00000015u; // 801CEFDC
  c->lr=0x801CEFE4u; f_8013114C(c); // 801CEFE0
  goto L_801CF0B8; // 801CEFE4
L_801CEFE8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CEFE8
  c->r[4]=0u+0x00000000u; // 801CEFEC
  c->lr=0x801CEFF4u; f_801CA4B4(c); // 801CEFF0
  c->r[0]=0u+0x00000010u; // 801CEFF4
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CEFF8
  c->r[3]=c->r[31]|c->r[31]; // 801CEFFC
  c->r[4]=0u+0x00000015u; // 801CF000
  c->lr=0x801CF008u; f_8013114C(c); // 801CF004
  goto L_801CF0B8; // 801CF008
L_801CF00C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF00C
  c->lr=0x801CF014u; f_801CA340(c); // 801CF010
  cmps(c,0,(int32_t)c->r[3],0); // 801CF014
  if (crb(c,2)) { goto L_801CF040; } // 801CF018
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF01C
  c->r[4]=0u+0x00000001u; // 801CF020
  c->lr=0x801CF028u; f_801CA4FC(c); // 801CF024
  c->r[0]=0u+0x00000005u; // 801CF028
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CF02C
  c->r[3]=c->r[31]|c->r[31]; // 801CF030
  c->r[4]=0u+0x00000015u; // 801CF034
  c->lr=0x801CF03Cu; f_8013114C(c); // 801CF038
  goto L_801CF0B8; // 801CF03C
L_801CF040:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF040
  c->lr=0x801CF048u; f_801CA388(c); // 801CF044
  cmps(c,0,(int32_t)c->r[3],0); // 801CF048
  if (crb(c,2)) { goto L_801CF074; } // 801CF04C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF050
  c->r[4]=0u+0x00000003u; // 801CF054
  c->lr=0x801CF05Cu; f_801CA4FC(c); // 801CF058
  c->r[0]=0u+0x00000005u; // 801CF05C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CF060
  c->r[3]=c->r[31]|c->r[31]; // 801CF064
  c->r[4]=0u+0x00000015u; // 801CF068
  c->lr=0x801CF070u; f_8013114C(c); // 801CF06C
  goto L_801CF0B8; // 801CF070
L_801CF074:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF074
  c->r[4]=0u+0x00000001u; // 801CF078
  c->lr=0x801CF080u; f_801CA4B4(c); // 801CF07C
  c->r[0]=0u+0x00000010u; // 801CF080
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CF084
  c->r[3]=c->r[31]|c->r[31]; // 801CF088
  c->r[4]=0u+0x00000015u; // 801CF08C
  c->lr=0x801CF094u; f_8013114C(c); // 801CF090
  goto L_801CF0B8; // 801CF094
L_801CF098:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF098
  c->r[4]=0u+0x00000002u; // 801CF09C
  c->lr=0x801CF0A4u; f_801CA4B4(c); // 801CF0A0
  c->r[0]=0u+0x00000000u; // 801CF0A4
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CF0A8
  c->r[3]=c->r[31]|c->r[31]; // 801CF0AC
  c->r[4]=0u+0x00000003u; // 801CF0B0
  c->lr=0x801CF0B8u; f_8013114C(c); // 801CF0B4
L_801CF0B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF0B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF0BC
  c->lr=c->r[0]; // 801CF0C0
  c->r[1]=c->r[1]+0x00000010u; // 801CF0C4
  return; // 801CF0C8
}

// fn_801CF0CC
void f_801CF0CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF0CC
  c->r[0]=c->lr; // 801CF0D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF0D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF0D8
  c->r[31]=c->r[3]|c->r[3]; // 801CF0DC
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CF0E0
  c->r[4]=0u+0x00000000u; // 801CF0E4
  c->lr=0x801CF0ECu; f_801CB2C0(c); // 801CF0E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF0EC
  c->lr=0x801CF0F4u; f_801C9E90(c); // 801CF0F0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF0F4
  c->lr=0x801CF0FCu; f_801CB438(c); // 801CF0F8
  c->r[3]=c->r[31]|c->r[31]; // 801CF0FC
  c->r[4]=0u+0x0000000Fu; // 801CF100
  c->lr=0x801CF108u; f_8013114C(c); // 801CF104
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF108
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF10C
  c->lr=c->r[0]; // 801CF110
  c->r[1]=c->r[1]+0x00000010u; // 801CF114
  return; // 801CF118
}

// fn_801CF11C
void f_801CF11C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF11C
  c->r[0]=c->lr; // 801CF120
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF124
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF128
  c->r[31]=c->r[3]|c->r[3]; // 801CF12C
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CF130
  c->lr=0x801CF138u; f_801CB470(c); // 801CF134
  cmps(c,0,(int32_t)c->r[3],0); // 801CF138
  if (crb(c,2)) { goto L_801CF16C; } // 801CF13C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF140
  c->r[4]=0u+0x00000000u; // 801CF144
  c->lr=0x801CF14Cu; f_801CB2B0(c); // 801CF148
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF14C
  c->r[4]=0u+0x00000002u; // 801CF150
  c->lr=0x801CF158u; f_801CA4B4(c); // 801CF154
  c->r[0]=0u+0x00000000u; // 801CF158
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801CF15C
  c->r[3]=c->r[31]|c->r[31]; // 801CF160
  c->r[4]=0u+0x00000003u; // 801CF164
  c->lr=0x801CF16Cu; f_8013114C(c); // 801CF168
L_801CF16C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF16C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF170
  c->lr=c->r[0]; // 801CF174
  c->r[1]=c->r[1]+0x00000010u; // 801CF178
  return; // 801CF17C
}

// fn_801CF180
void f_801CF180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF180
  c->r[0]=c->lr; // 801CF184
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF18C
  c->r[31]=c->r[3]|c->r[3]; // 801CF190
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CF194
  c->lr=0x801CF19Cu; f_801CA1F8(c); // 801CF198
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF19C
  c->lr=0x801CF1A4u; f_801CA020(c); // 801CF1A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF1A4
  if (!crb(c,2)) { goto L_801CF1C8; } // 801CF1A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF1AC
  c->r[4]=0u+0x00000001u; // 801CF1B0
  c->lr=0x801CF1B8u; f_801CA434(c); // 801CF1B4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF1B8
  c->r[4]=0u+0x00000002u; // 801CF1BC
  c->lr=0x801CF1C4u; f_801CB5C8(c); // 801CF1C0
  goto L_801CF1E0; // 801CF1C4
L_801CF1C8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF1C8
  c->r[4]=0u+0x00000000u; // 801CF1CC
  c->lr=0x801CF1D4u; f_801CA434(c); // 801CF1D0
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF1D4
  c->r[4]=0u+0x00000003u; // 801CF1D8
  c->lr=0x801CF1E0u; f_801CB5C8(c); // 801CF1DC
L_801CF1E0:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF1E0
  c->lr=0x801CF1E8u; f_801CB21C(c); // 801CF1E4
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF1E8
  c->lr=0x801CF1F0u; f_801CB4C0(c); // 801CF1EC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF1F0
  c->lr=0x801CF1F8u; f_801C9E5C(c); // 801CF1F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF1F8
  c->lr=0x801CF200u; f_801C9AA8(c); // 801CF1FC
  c->r[3]=c->r[31]|c->r[31]; // 801CF200
  c->lr=0x801CF208u; f_801CE9C8(c); // 801CF204
  c->r[3]=c->r[31]|c->r[31]; // 801CF208
  c->r[4]=0u+0x00000011u; // 801CF20C
  c->lr=0x801CF214u; f_8013114C(c); // 801CF210
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF214
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF218
  c->lr=c->r[0]; // 801CF21C
  c->r[1]=c->r[1]+0x00000010u; // 801CF220
  return; // 801CF224
}

// fn_801CF228
void f_801CF228(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF228
  c->r[0]=c->lr; // 801CF22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF234
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF238
  c->r[30]=c->r[3]|c->r[3]; // 801CF23C
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CF240
  c->lr=0x801CF248u; f_801CB5C4(c); // 801CF244
  cmps(c,0,(int32_t)c->r[3],0); // 801CF248
  if (crb(c,2)) { goto L_801CF280; } // 801CF24C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF250
  c->lr=0x801CF258u; f_801CA1E8(c); // 801CF254
  c->r[31]=c->r[3]|c->r[3]; // 801CF258
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF25C
  c->lr=0x801CF264u; f_801CA1F0(c); // 801CF260
  c->r[4]=c->r[3]|c->r[3]; // 801CF264
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801CF268
  c->r[5]=c->r[31]|c->r[31]; // 801CF26C
  c->lr=0x801CF274u; f_801CB530(c); // 801CF270
  c->r[3]=c->r[30]|c->r[30]; // 801CF274
  c->r[4]=0u+0x00000012u; // 801CF278
  c->lr=0x801CF280u; f_8013114C(c); // 801CF27C
L_801CF280:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF280
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF284
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF288
  c->lr=c->r[0]; // 801CF28C
  c->r[1]=c->r[1]+0x00000010u; // 801CF290
  return; // 801CF294
}

// fn_801CF298
void f_801CF298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF298
  c->r[0]=c->lr; // 801CF29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF2A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF2A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF2A8
  c->r[30]=c->r[3]|c->r[3]; // 801CF2AC
  c->r[3]=0u+0x00000001u; // 801CF2B0
  c->lr=0x801CF2B8u; f_8019CD1C(c); // 801CF2B4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF2B8
  if (crb(c,2)) { goto L_801CF2D8; } // 801CF2BC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF2C0
  c->lr=0x801CF2C8u; f_801C9AA0(c); // 801CF2C4
  c->r[3]=c->r[30]|c->r[30]; // 801CF2C8
  c->r[4]=0u+0x00000013u; // 801CF2CC
  c->lr=0x801CF2D4u; f_8013114C(c); // 801CF2D0
  goto L_801CF404; // 801CF2D4
L_801CF2D8:;
  c->r[3]=0u+0x00000000u; // 801CF2D8
  c->lr=0x801CF2E0u; f_8019CD1C(c); // 801CF2DC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF2E0
  if (crb(c,2)) { goto L_801CF380; } // 801CF2E4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF2E8
  c->lr=0x801CF2F0u; f_801CA020(c); // 801CF2EC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF2F0
  if (!crb(c,2)) { goto L_801CF33C; } // 801CF2F4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF2F8
  c->lr=0x801CF300u; f_801CA2E4(c); // 801CF2FC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF300
  if (!crb(c,2)) { goto L_801CF318; } // 801CF304
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF308
  c->lr=0x801CF310u; f_801CA420(c); // 801CF30C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF310
  if (crb(c,2)) { goto L_801CF324; } // 801CF314
L_801CF318:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF318
  c->lr=0x801CF320u; f_801C9EF8(c); // 801CF31C
  goto L_801CF404; // 801CF320
L_801CF324:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF324
  c->lr=0x801CF32Cu; f_801C9EC4(c); // 801CF328
  c->r[3]=c->r[30]|c->r[30]; // 801CF32C
  c->r[4]=0u+0x00000013u; // 801CF330
  c->lr=0x801CF338u; f_8013114C(c); // 801CF334
  goto L_801CF404; // 801CF338
L_801CF33C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF33C
  c->lr=0x801CF344u; f_801CA3D8(c); // 801CF340
  cmps(c,0,(int32_t)c->r[3],0); // 801CF344
  if (!crb(c,2)) { goto L_801CF35C; } // 801CF348
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF34C
  c->lr=0x801CF354u; f_801CA420(c); // 801CF350
  cmps(c,0,(int32_t)c->r[3],0); // 801CF354
  if (crb(c,2)) { goto L_801CF368; } // 801CF358
L_801CF35C:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF35C
  c->lr=0x801CF364u; f_801C9EF8(c); // 801CF360
  goto L_801CF404; // 801CF364
L_801CF368:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF368
  c->lr=0x801CF370u; f_801C9EC4(c); // 801CF36C
  c->r[3]=c->r[30]|c->r[30]; // 801CF370
  c->r[4]=0u+0x00000013u; // 801CF374
  c->lr=0x801CF37Cu; f_8013114C(c); // 801CF378
  goto L_801CF404; // 801CF37C
L_801CF380:;
  c->r[3]=0u+0x00000003u; // 801CF380
  c->lr=0x801CF388u; f_8019CD1C(c); // 801CF384
  cmps(c,0,(int32_t)c->r[3],0); // 801CF388
  if (crb(c,2)) { goto L_801CF398; } // 801CF38C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF390
  c->lr=0x801CF398u; f_801CA0D8(c); // 801CF394
L_801CF398:;
  c->r[3]=0u+0x00000004u; // 801CF398
  c->lr=0x801CF3A0u; f_8019CD1C(c); // 801CF39C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF3A0
  if (crb(c,2)) { goto L_801CF3B0; } // 801CF3A4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF3A8
  c->lr=0x801CF3B0u; f_801CA160(c); // 801CF3AC
L_801CF3B0:;
  c->r[3]=0u+0x00000006u; // 801CF3B0
  c->lr=0x801CF3B8u; f_8019CD1C(c); // 801CF3B4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF3B8
  if (crb(c,2)) { goto L_801CF3C8; } // 801CF3BC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF3C0
  c->lr=0x801CF3C8u; f_801CA040(c); // 801CF3C4
L_801CF3C8:;
  c->r[3]=0u+0x00000005u; // 801CF3C8
  c->lr=0x801CF3D0u; f_8019CD1C(c); // 801CF3CC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF3D0
  if (crb(c,2)) { goto L_801CF3E0; } // 801CF3D4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF3D8
  c->lr=0x801CF3E0u; f_801CA08C(c); // 801CF3DC
L_801CF3E0:;
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF3E0
  c->lr=0x801CF3E8u; f_801CA1E8(c); // 801CF3E4
  c->r[31]=c->r[3]|c->r[3]; // 801CF3E8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 801CF3EC
  c->lr=0x801CF3F4u; f_801CA1F0(c); // 801CF3F0
  c->r[4]=c->r[3]|c->r[3]; // 801CF3F4
  c->r[3]=R32(c->r[30]+0x000000F0u); // 801CF3F8
  c->r[5]=c->r[31]|c->r[31]; // 801CF3FC
  c->lr=0x801CF404u; f_801CB530(c); // 801CF400
L_801CF404:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF404
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CF408
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF40C
  c->lr=c->r[0]; // 801CF410
  c->r[1]=c->r[1]+0x00000010u; // 801CF414
  return; // 801CF418
}

// fn_801CF41C
void f_801CF41C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF41C
  c->r[0]=c->lr; // 801CF420
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF424
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF428
  c->r[31]=c->r[3]|c->r[3]; // 801CF42C
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CF430
  c->r[4]=0u+0x00000000u; // 801CF434
  c->lr=0x801CF43Cu; f_801CB2C8(c); // 801CF438
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF43C
  c->lr=0x801CF444u; f_801C9E90(c); // 801CF440
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF444
  c->lr=0x801CF44Cu; f_801CB4F8(c); // 801CF448
  c->r[3]=c->r[31]|c->r[31]; // 801CF44C
  c->r[4]=0u+0x00000014u; // 801CF450
  c->lr=0x801CF458u; f_8013114C(c); // 801CF454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF458
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF45C
  c->lr=c->r[0]; // 801CF460
  c->r[1]=c->r[1]+0x00000010u; // 801CF464
  return; // 801CF468
}

// fn_801CF46C
void f_801CF46C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF46C
  c->r[0]=c->lr; // 801CF470
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF478
  c->r[31]=c->r[3]|c->r[3]; // 801CF47C
  c->r[3]=R32(c->r[3]+0x000000F0u); // 801CF480
  c->lr=0x801CF488u; f_801CB470(c); // 801CF484
  cmps(c,0,(int32_t)c->r[3],0); // 801CF488
  if (crb(c,2)) { goto L_801CF4D8; } // 801CF48C
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF490
  c->r[4]=0u+0x00000000u; // 801CF494
  c->lr=0x801CF49Cu; f_801CB2B8(c); // 801CF498
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF49C
  c->lr=0x801CF4A4u; f_801C9AB0(c); // 801CF4A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF4A4
  if (crb(c,2)) { goto L_801CF4BC; } // 801CF4A8
  c->r[3]=c->r[31]|c->r[31]; // 801CF4AC
  c->r[4]=0u+0x00000007u; // 801CF4B0
  c->lr=0x801CF4B8u; f_8013114C(c); // 801CF4B4
  goto L_801CF4D8; // 801CF4B8
L_801CF4BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF4BC
  c->lr=0x801CF4C4u; f_801C9F2C(c); // 801CF4C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF4C4
  c->lr=0x801CF4CCu; f_801CA43C(c); // 801CF4C8
  c->r[3]=c->r[31]|c->r[31]; // 801CF4CC
  c->r[4]=0u+0x00000007u; // 801CF4D0
  c->lr=0x801CF4D8u; f_8013114C(c); // 801CF4D4
L_801CF4D8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF4D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF4DC
  c->lr=c->r[0]; // 801CF4E0
  c->r[1]=c->r[1]+0x00000010u; // 801CF4E4
  return; // 801CF4E8
}

// fn_801CF4EC
void f_801CF4EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF4EC
  c->r[0]=c->lr; // 801CF4F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF4F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF4F8
  c->r[31]=c->r[3]|c->r[3]; // 801CF4FC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801CF500
  c->r[4]=0u+0x00000002u; // 801CF504
  c->lr=0x801CF50Cu; f_801CA55C(c); // 801CF508
  c->lr=0x801CF510u; f_80156F98(c); // 801CF50C
  c->r[3]=0u+0x00000000u; // 801CF510
  c->lr=0x801CF518u; f_80157074(c); // 801CF514
  c->r[3]=c->r[31]|c->r[31]; // 801CF518
  c->r[4]=0u+0x00000016u; // 801CF51C
  c->lr=0x801CF524u; f_8013114C(c); // 801CF520
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF524
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF528
  c->lr=c->r[0]; // 801CF52C
  c->r[1]=c->r[1]+0x00000010u; // 801CF530
  return; // 801CF534
}

// fn_801CF538
void f_801CF538(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF538
  c->r[0]=c->lr; // 801CF53C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF544
  c->r[31]=c->r[3]|c->r[3]; // 801CF548
  c->lr=0x801CF550u; f_80156FF0(c); // 801CF54C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF550
  if (crb(c,2)) { goto L_801CF588; } // 801CF554
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF558
  c->lr=0x801CF560u; f_801CA554(c); // 801CF55C
  c->r[4]=c->r[3]|c->r[3]; // 801CF560
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF564
  c->lr=0x801CF56Cu; f_801CA590(c); // 801CF568
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF56C
  c->lr=0x801CF574u; f_801CA554(c); // 801CF570
  c->lr=0x801CF578u; f_80156434(c); // 801CF574
  c->lr=0x801CF57Cu; f_80156F40(c); // 801CF578
  c->r[3]=c->r[31]|c->r[31]; // 801CF57C
  c->r[4]=0u+0x00000017u; // 801CF580
  c->lr=0x801CF588u; f_8013114C(c); // 801CF584
L_801CF588:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF588
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF58C
  c->lr=c->r[0]; // 801CF590
  c->r[1]=c->r[1]+0x00000010u; // 801CF594
  return; // 801CF598
}

// fn_801CF59C
void f_801CF59C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF59C
  c->r[0]=c->lr; // 801CF5A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF5A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF5A8
  c->r[31]=c->r[3]|c->r[3]; // 801CF5AC
  c->lr=0x801CF5B4u; f_80157048(c); // 801CF5B0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF5B4
  if (crb(c,2)) { goto L_801CF5D0; } // 801CF5B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF5BC
  c->lr=0x801CF5C4u; f_801CA5D0(c); // 801CF5C0
  c->r[3]=c->r[31]|c->r[31]; // 801CF5C4
  c->r[4]=0u+0x00000018u; // 801CF5C8
  c->lr=0x801CF5D0u; f_8013114C(c); // 801CF5CC
L_801CF5D0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF5D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF5D4
  c->lr=c->r[0]; // 801CF5D8
  c->r[1]=c->r[1]+0x00000010u; // 801CF5DC
  return; // 801CF5E0
}

// fn_801CF5E4
void f_801CF5E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF5E4
  c->r[0]=c->lr; // 801CF5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF5EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF5F0
  c->r[31]=c->r[3]|c->r[3]; // 801CF5F4
  c->lr=0x801CF5FCu; f_80156FC4(c); // 801CF5F8
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801CF5FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CF600
  if (crb(c,2)) { goto L_801CF60C; } // 801CF604
  goto L_801CF61C; // 801CF608
L_801CF60C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801CF60C
  c->lr=0x801CF614u; f_801C9E90(c); // 801CF610
  c->r[3]=R32(c->r[31]+0x000000F0u); // 801CF614
  c->lr=0x801CF61Cu; f_801CB358(c); // 801CF618
L_801CF61C:;
  c->r[3]=c->r[31]|c->r[31]; // 801CF61C
  c->r[4]=0u+0x00000019u; // 801CF620
  c->lr=0x801CF628u; f_8013114C(c); // 801CF624
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF628
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF62C
  c->lr=c->r[0]; // 801CF630
  c->r[1]=c->r[1]+0x00000010u; // 801CF634
  return; // 801CF638
}

