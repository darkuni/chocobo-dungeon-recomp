#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GetDrawOrder__Q34nw4r2ef24DrawSmoothStripeStrategyCFRCQ34nw4r2ef18EmitterDrawSetting
void f_802B38A0(Ctx* __restrict c) {
  trace_call(0x802B38A0u);
  c->r[0]=R16(c->r[4]+0x00000000u); // 802B38A0
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 802B38A4
  return; // 802B38A8
}

// GetStripeTexmapType__Q34nw4r2ef24DrawSmoothStripeStrategyCFRCQ34nw4r2ef18EmitterDrawSetting
void f_802B38AC(Ctx* __restrict c) {
  trace_call(0x802B38ACu);
  c->r[0]=R8(c->r[4]+0x000000B2u); // 802B38AC
  c->r[3]=rotl(c->r[0],0)&0x000000C0u; // 802B38B0
  return; // 802B38B4
}

// __ct__Q44nw4r2ef24DrawSmoothStripeStrategy6VertexFv
void f_802B38B8(Ctx* __restrict c) {
  trace_call(0x802B38B8u);
  return; // 802B38B8
}

// DrawSmoothStripe_BSpline_ConnectRing__Q34nw4r2ef24DrawSmoothStripeStrategyFPQ44nw4r2ef24DrawSmoothStripeStrategy18AheadContextStripeiiRCQ34nw4r4math4VEC3RCQ34nw4r4math4VEC3
void f_802B38BC(Ctx* __restrict c) {
  trace_call(0x802B38BCu);
  {uint32_t ea=c->r[1]+0xFFFFFEC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B38BC
  c->r[0]=c->lr; // 802B38C0
  W32(c->r[1]+0x00000144u,c->r[0]); // 802B38C4
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[31]);} // 802B38C8
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,31,ea,0,0);} // 802B38CC
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[30]);} // 802B38D0
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,30,ea,0,0);} // 802B38D4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[29]);} // 802B38D8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,29,ea,0,0);} // 802B38DC
  c->r[11]=c->r[1]+0x00000110u; // 802B38E0
  c->lr=0x802B38E8u; { W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B38E4
  c->r[22]=R32(c->r[4]+0x00000000u); // 802B38E8
  c->r[0]=0u+0x43300000u; // 802B38EC
  c->r[26]=c->r[3]|c->r[3]; // 802B38F0
  W32(c->r[1]+0x000000B8u,c->r[0]); // 802B38F4
  c->r[3]=R32(c->r[22]+0x00000024u); // 802B38F8
  c->r[27]=c->r[4]|c->r[4]; // 802B38FC
  W32(c->r[1]+0x000000C0u,c->r[0]); // 802B3900
  c->r[28]=c->r[5]|c->r[5]; // 802B3904
  c->r[29]=c->r[6]|c->r[6]; // 802B3908
  c->r[30]=c->r[7]|c->r[7]; // 802B390C
  c->r[31]=c->r[8]|c->r[8]; // 802B3910
  c->lr=0x802B3918u; f_802ABEC4(c); // 802B3914
  c->r[12]=R32(c->r[26]+0x00000000u); // 802B3918
  c->r[23]=c->r[3]|c->r[3]; // 802B391C
  c->r[3]=c->r[26]|c->r[26]; // 802B3920
  c->r[4]=c->r[22]|c->r[22]; // 802B3924
  c->r[12]=R32(c->r[12]+0x00000018u); // 802B3928
  c->ctr=c->r[12]; // 802B392C
  if (true) { c->lr=0x802B3934u; dispatch(c,c->ctr); } // 802B3930
  c->r[21]=c->r[3]|c->r[3]; // 802B3934
  c->r[3]=c->r[26]|c->r[26]; // 802B3938
  c->r[4]=c->r[23]|c->r[23]; // 802B393C
  c->lr=0x802B3944u; f_802B38A0(c); // 802B3940
  c->r[12]=R32(c->r[26]+0x00000000u); // 802B3944
  c->r[24]=c->r[3]|c->r[3]; // 802B3948
  c->r[3]=c->r[26]|c->r[26]; // 802B394C
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B3950
  c->r[4]=c->r[24]|c->r[24]; // 802B3954
  c->ctr=c->r[12]; // 802B3958
  if (true) { c->lr=0x802B3960u; dispatch(c,c->ctr); } // 802B395C
  c->r[12]=R32(c->r[26]+0x00000000u); // 802B3960
  c->r[20]=c->r[3]|c->r[3]; // 802B3964
  c->r[3]=c->r[26]|c->r[26]; // 802B3968
  c->r[4]=c->r[24]|c->r[24]; // 802B396C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802B3970
  c->ctr=c->r[12]; // 802B3974
  if (true) { c->lr=0x802B397Cu; dispatch(c,c->ctr); } // 802B3978
  c->r[19]=c->r[3]|c->r[3]; // 802B397C
  c->r[3]=c->r[26]|c->r[26]; // 802B3980
  c->r[4]=c->r[22]|c->r[22]; // 802B3984
  c->lr=0x802B398Cu; f_802AF4D4(c); // 802B3988
  c->r[0]=R8(c->r[23]+0x000000A9u); // 802B398C
  c->r[25]=c->r[3]|c->r[3]; // 802B3990
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B3994
  c->r[4]=(uint32_t)((int32_t)c->r[25]*(int32_t)c->r[28]); // 802B3998
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B399C
  {uint32_t ea=c->r[2]+0xFFFFAA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B39A0
  c->r[3]=0u+0x00000098u; // 802B39A4
  c->r[0]=c->r[0]^0x80000000u; // 802B39A8
  W32(c->r[1]+0x000000BCu,c->r[0]); // 802B39AC
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=RF64(ea);} // 802B39B0
  c->r[0]=c->r[4]+0x00000001u; // 802B39B4
  c->r[5]=rotl(c->r[0],1)&0x0000FFFEu; // 802B39B8
  c->r[4]=0u+0x00000000u; // 802B39BC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B39C0
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 802B39C4
  c->lr=0x802B39CCu; f_803459B0(c); // 802B39C8
  c->r[3]=c->r[26]|c->r[26]; // 802B39CC
  c->r[4]=c->r[23]|c->r[23]; // 802B39D0
  c->lr=0x802B39D8u; f_802B38AC(c); // 802B39D4
  cmps(c,0,(int32_t)c->r[3],64); // 802B39D8
  if (crb(c,2)) { goto L_802B3A08; } // 802B39DC
  if (!crb(c,0)) { goto L_802B39E8; } // 802B39E0
  cmps(c,0,(int32_t)c->r[3],0); // 802B39E4
L_802B39E8:;
  c->r[0]=c->r[25]^0x80000000u; // 802B39E8
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B39EC
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B39F0
  {uint32_t ea=c->r[2]+0xFFFFAA78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B39F4
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 802B39F8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B39FC
  c->f[29]=c->ps1[29]=S(c->f[0]/c->f[1]); // 802B3A00
  goto L_802B3A0C; // 802B3A04
L_802B3A08:;
  {uint32_t ea=c->r[2]+0xFFFFAA78u; c->f[29]=c->ps1[29]=RF32(ea);} // 802B3A08
L_802B3A0C:;
  cmps(c,0,(int32_t)c->r[24],0); // 802B3A0C
  c->r[18]=0u+0xFFFFFFFFu; // 802B3A10
  c->r[17]=0u+0x00000002u; // 802B3A14
  if (crb(c,2)) { goto L_802B3A28; } // 802B3A18
  c->r[3]=rotl(c->r[25],1)&0xFFFFFFFEu; // 802B3A1C
  c->r[17]=0u+0xFFFFFFFEu; // 802B3A20
  c->r[18]=c->r[3]+0x00000001u; // 802B3A24
L_802B3A28:;
  c->r[3]=c->r[1]+0x00000028u; // 802B3A28
  c->lr=0x802B3A30u; f_802B38B8(c); // 802B3A2C
  c->r[3]=c->r[1]+0x00000044u; // 802B3A30
  c->lr=0x802B3A38u; f_802B38B8(c); // 802B3A34
  c->r[3]=c->r[1]+0x00000060u; // 802B3A38
  c->lr=0x802B3A40u; f_802B38B8(c); // 802B3A3C
  c->r[3]=c->r[1]+0x0000007Cu; // 802B3A40
  c->lr=0x802B3A48u; f_802B38B8(c); // 802B3A44
  c->r[3]=c->r[1]+0x00000098u; // 802B3A48
  c->lr=0x802B3A50u; f_802B38B8(c); // 802B3A4C
  c->r[3]=c->r[1]+0x0000001Cu; // 802B3A50
  c->lr=0x802B3A58u; f_8004B0A4(c); // 802B3A54
  c->r[3]=c->r[1]+0x00000010u; // 802B3A58
  c->lr=0x802B3A60u; f_8004B0A4(c); // 802B3A5C
  c->r[12]=c->r[20]|c->r[20]; // 802B3A60
  c->r[3]=c->r[22]|c->r[22]; // 802B3A64
  c->ctr=c->r[12]; // 802B3A68
  if (true) { c->lr=0x802B3A70u; dispatch(c,c->ctr); } // 802B3A6C
  c->r[0]=c->r[18]^0x80000000u; // 802B3A70
  c->r[15]=c->r[3]|c->r[3]; // 802B3A74
  W32(c->r[1]+0x000000BCu,c->r[0]); // 802B3A78
  c->f[1]=c->f[30]; // 802B3A7C
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B3A80
  c->r[3]=c->r[26]|c->r[26]; // 802B3A84
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 802B3A88
  c->r[5]=c->r[27]|c->r[27]; // 802B3A8C
  W32(c->r[1]+0x00000008u,c->r[31]); // 802B3A90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802B3A94
  c->r[6]=c->r[29]|c->r[29]; // 802B3A98
  c->r[7]=c->r[15]|c->r[15]; // 802B3A9C
  c->r[8]=c->r[21]|c->r[21]; // 802B3AA0
  c->r[10]=c->r[30]|c->r[30]; // 802B3AA4
  c->r[4]=c->r[1]+0x0000007Cu; // 802B3AA8
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[0]); // 802B3AAC
  c->r[9]=c->r[15]+0x000000ACu; // 802B3AB0
  c->lr=0x802B3AB8u; f_802B1FF8(c); // 802B3AB4
  c->r[12]=c->r[19]|c->r[19]; // 802B3AB8
  c->r[3]=c->r[22]|c->r[22]; // 802B3ABC
  c->r[4]=c->r[15]|c->r[15]; // 802B3AC0
  c->ctr=c->r[12]; // 802B3AC4
  if (true) { c->lr=0x802B3ACCu; dispatch(c,c->ctr); } // 802B3AC8
  c->r[18]=c->r[18]+c->r[17]; // 802B3ACC
  c->r[15]=c->r[3]|c->r[3]; // 802B3AD0
  c->r[0]=c->r[18]^0x80000000u; // 802B3AD4
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B3AD8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B3ADC
  c->f[1]=c->f[30]; // 802B3AE0
  c->r[3]=c->r[26]|c->r[26]; // 802B3AE4
  c->r[5]=c->r[27]|c->r[27]; // 802B3AE8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 802B3AEC
  c->r[6]=c->r[29]|c->r[29]; // 802B3AF0
  W32(c->r[1]+0x00000008u,c->r[31]); // 802B3AF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802B3AF8
  c->r[7]=c->r[15]|c->r[15]; // 802B3AFC
  c->r[8]=c->r[21]|c->r[21]; // 802B3B00
  c->r[10]=c->r[30]|c->r[30]; // 802B3B04
  c->r[4]=c->r[1]+0x00000098u; // 802B3B08
  c->r[9]=c->r[15]+0x000000ACu; // 802B3B0C
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[0]); // 802B3B10
  c->lr=0x802B3B18u; f_802B1FF8(c); // 802B3B14
  c->r[12]=c->r[19]|c->r[19]; // 802B3B18
  c->r[3]=c->r[22]|c->r[22]; // 802B3B1C
  c->r[4]=c->r[15]|c->r[15]; // 802B3B20
  c->ctr=c->r[12]; // 802B3B24
  if (true) { c->lr=0x802B3B2Cu; dispatch(c,c->ctr); } // 802B3B28
  c->r[4]=0u+0x55550000u; // 802B3B2C
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[31]=RF64(ea);} // 802B3B30
  c->r[23]=c->r[3]|c->r[3]; // 802B3B34
  c->r[18]=c->r[18]+c->r[17]; // 802B3B38
  c->r[25]=c->r[4]+0x00005556u; // 802B3B3C
  c->r[16]=0u+0x00000003u; // 802B3B40
  c->r[15]=0u+0x00000004u; // 802B3B44
  goto L_802B3C00; // 802B3B48
L_802B3B4C:;
  c->r[4]=c->r[15]+0x00000001u; // 802B3B4C
  c->r[0]=c->r[18]^0x80000000u; // 802B3B50
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[25]*(int64_t)(int32_t)c->r[4])>>32); // 802B3B54
  W32(c->r[1]+0x000000BCu,c->r[0]); // 802B3B58
  c->r[20]=c->r[16]|c->r[16]; // 802B3B5C
  c->f[1]=c->f[30]; // 802B3B60
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 802B3B64
  c->r[16]=c->r[15]|c->r[15]; // 802B3B68
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802B3B6C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802B3B70
  c->r[0]=c->r[3]+c->r[0]; // 802B3B74
  c->r[24]=c->r[1]+0x00000028u; // 802B3B78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B3B7C
  W32(c->r[1]+0x00000008u,c->r[31]); // 802B3B80
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[0]); // 802B3B84
  c->r[3]=c->r[26]|c->r[26]; // 802B3B88
  c->r[15]=c->r[4]-c->r[0]; // 802B3B8C
  c->r[5]=c->r[27]|c->r[27]; // 802B3B90
  c->r[0]=(uint32_t)((int32_t)c->r[15]*(int32_t)28); // 802B3B94
  c->r[6]=c->r[29]|c->r[29]; // 802B3B98
  c->r[7]=c->r[23]|c->r[23]; // 802B3B9C
  c->r[8]=c->r[21]|c->r[21]; // 802B3BA0
  c->r[24]=c->r[24]+c->r[0]; // 802B3BA4
  c->r[10]=c->r[30]|c->r[30]; // 802B3BA8
  c->r[4]=c->r[24]|c->r[24]; // 802B3BAC
  c->r[9]=c->r[23]+0x000000ACu; // 802B3BB0
  c->lr=0x802B3BB8u; f_802B1FF8(c); // 802B3BB4
  c->r[9]=(uint32_t)((int32_t)c->r[20]*(int32_t)28); // 802B3BB8
  c->r[5]=c->r[1]+0x00000028u; // 802B3BBC
  c->r[3]=c->r[26]|c->r[26]; // 802B3BC0
  c->r[6]=c->r[5]|c->r[5]; // 802B3BC4
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)28); // 802B3BC8
  c->r[4]=c->r[28]|c->r[28]; // 802B3BCC
  c->r[7]=c->r[24]|c->r[24]; // 802B3BD0
  c->r[8]=c->r[29]|c->r[29]; // 802B3BD4
  c->r[5]=c->r[5]+c->r[9]; // 802B3BD8
  c->r[6]=c->r[6]+c->r[0]; // 802B3BDC
  c->lr=0x802B3BE4u; f_802B2810(c); // 802B3BE0
  c->r[12]=c->r[19]|c->r[19]; // 802B3BE4
  c->r[3]=c->r[22]|c->r[22]; // 802B3BE8
  c->r[4]=c->r[23]|c->r[23]; // 802B3BEC
  c->ctr=c->r[12]; // 802B3BF0
  if (true) { c->lr=0x802B3BF8u; dispatch(c,c->ctr); } // 802B3BF4
  c->r[23]=c->r[3]|c->r[3]; // 802B3BF8
  c->r[18]=c->r[18]+c->r[17]; // 802B3BFC
L_802B3C00:;
  cmps(c,0,(int32_t)c->r[23],0); // 802B3C00
  if (!crb(c,2)) { IRQCHK(c); goto L_802B3B4C; } // 802B3C04
  c->r[0]=c->r[18]^0x80000000u; // 802B3C08
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B3C0C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B3C10
  c->r[4]=(uint32_t)((int32_t)c->r[15]*(int32_t)28); // 802B3C14
  c->r[15]=c->r[1]+0x00000028u; // 802B3C18
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 802B3C1C
  c->r[3]=c->r[26]|c->r[26]; // 802B3C20
  c->r[5]=c->r[15]|c->r[15]; // 802B3C24
  c->r[8]=c->r[29]|c->r[29]; // 802B3C28
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B3C2C
  c->r[15]=c->r[15]+c->r[4]; // 802B3C30
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)28); // 802B3C34
  c->r[4]=c->r[28]|c->r[28]; // 802B3C38
  c->r[6]=c->r[15]|c->r[15]; // 802B3C3C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 802B3C40
  c->r[5]=c->r[5]+c->r[0]; // 802B3C44
  c->r[7]=c->r[1]+0x0000007Cu; // 802B3C48
  {uint32_t ea=c->r[1]+0x00000094u; WF32(ea,c->f[0]);} // 802B3C4C
  c->lr=0x802B3C54u; f_802B2810(c); // 802B3C50
  c->r[18]=c->r[18]+c->r[17]; // 802B3C54
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B3C58
  c->r[0]=c->r[18]^0x80000000u; // 802B3C5C
  c->r[3]=c->r[26]|c->r[26]; // 802B3C60
  W32(c->r[1]+0x000000BCu,c->r[0]); // 802B3C64
  c->r[4]=c->r[28]|c->r[28]; // 802B3C68
  c->r[5]=c->r[15]|c->r[15]; // 802B3C6C
  c->r[8]=c->r[29]|c->r[29]; // 802B3C70
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[0]=RF64(ea);} // 802B3C74
  c->r[6]=c->r[1]+0x0000007Cu; // 802B3C78
  c->r[7]=c->r[1]+0x00000098u; // 802B3C7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B3C80
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 802B3C84
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 802B3C88
  c->lr=0x802B3C90u; f_802B2810(c); // 802B3C8C
  c->r[3]=c->r[26]|c->r[26]; // 802B3C90
  c->r[4]=c->r[15]|c->r[15]; // 802B3C94
  c->r[7]=c->r[29]|c->r[29]; // 802B3C98
  c->r[5]=c->r[1]+0x0000007Cu; // 802B3C9C
  c->r[6]=c->r[1]+0x00000098u; // 802B3CA0
  c->lr=0x802B3CA8u; f_802B2A98(c); // 802B3CA4
  c->lr=0x802B3CACu; f_802B3550(c); // 802B3CA8
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,31,ea,0,0);} // 802B3CAC
  {uint32_t ea=c->r[1]+0x00000130u; c->f[31]=RF64(ea);} // 802B3CB0
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,30,ea,0,0);} // 802B3CB4
  {uint32_t ea=c->r[1]+0x00000120u; c->f[30]=RF64(ea);} // 802B3CB8
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,29,ea,0,0);} // 802B3CBC
  c->r[11]=c->r[1]+0x00000110u; // 802B3CC0
  {uint32_t ea=c->r[1]+0x00000110u; c->f[29]=RF64(ea);} // 802B3CC4
  c->lr=0x802B3CCCu; { c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B3CC8
  c->r[0]=R32(c->r[1]+0x00000144u); // 802B3CCC
  c->lr=c->r[0]; // 802B3CD0
  c->r[1]=c->r[1]+0x00000140u; // 802B3CD4
  return; // 802B3CD8
}

// DrawSmoothStripe_BSpline_ConnectEmitter__Q34nw4r2ef24DrawSmoothStripeStrategyFPQ44nw4r2ef24DrawSmoothStripeStrategy18AheadContextStripeiiRCQ34nw4r4math4VEC3RCQ34nw4r4math4VEC3
void f_802B3CDC(Ctx* __restrict c) {
  trace_call(0x802B3CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFEB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B3CDC
  c->r[0]=c->lr; // 802B3CE0
  W32(c->r[1]+0x00000154u,c->r[0]); // 802B3CE4
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[31]);} // 802B3CE8
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,31,ea,0,0);} // 802B3CEC
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[30]);} // 802B3CF0
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,30,ea,0,0);} // 802B3CF4
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[29]);} // 802B3CF8
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,29,ea,0,0);} // 802B3CFC
  c->r[11]=c->r[1]+0x00000120u; // 802B3D00
  c->lr=0x802B3D08u; f_802F0D94(c); // 802B3D04
  c->r[28]=R32(c->r[4]+0x00000000u); // 802B3D08
  c->r[0]=0u+0x43300000u; // 802B3D0C
  c->r[15]=c->r[3]|c->r[3]; // 802B3D10
  W32(c->r[1]+0x000000C0u,c->r[0]); // 802B3D14
  c->r[3]=R32(c->r[28]+0x00000024u); // 802B3D18
  c->r[16]=c->r[4]|c->r[4]; // 802B3D1C
  W32(c->r[1]+0x000000C8u,c->r[0]); // 802B3D20
  c->r[17]=c->r[5]|c->r[5]; // 802B3D24
  c->r[18]=c->r[6]|c->r[6]; // 802B3D28
  c->r[19]=c->r[7]|c->r[7]; // 802B3D2C
  c->r[20]=c->r[8]|c->r[8]; // 802B3D30
  c->lr=0x802B3D38u; f_802ABEC4(c); // 802B3D34
  c->r[12]=R32(c->r[15]+0x00000000u); // 802B3D38
  c->r[21]=c->r[3]|c->r[3]; // 802B3D3C
  c->r[3]=c->r[15]|c->r[15]; // 802B3D40
  c->r[4]=c->r[28]|c->r[28]; // 802B3D44
  c->r[12]=R32(c->r[12]+0x00000018u); // 802B3D48
  c->ctr=c->r[12]; // 802B3D4C
  if (true) { c->lr=0x802B3D54u; dispatch(c,c->ctr); } // 802B3D50
  c->r[27]=c->r[3]|c->r[3]; // 802B3D54
  c->r[3]=c->r[15]|c->r[15]; // 802B3D58
  c->r[4]=c->r[21]|c->r[21]; // 802B3D5C
  c->lr=0x802B3D64u; f_802B38A0(c); // 802B3D60
  c->r[12]=R32(c->r[15]+0x00000000u); // 802B3D64
  c->r[14]=c->r[3]|c->r[3]; // 802B3D68
  c->r[3]=c->r[15]|c->r[15]; // 802B3D6C
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B3D70
  c->r[4]=c->r[14]|c->r[14]; // 802B3D74
  c->ctr=c->r[12]; // 802B3D78
  if (true) { c->lr=0x802B3D80u; dispatch(c,c->ctr); } // 802B3D7C
  c->r[12]=R32(c->r[15]+0x00000000u); // 802B3D80
  c->r[23]=c->r[3]|c->r[3]; // 802B3D84
  c->r[3]=c->r[15]|c->r[15]; // 802B3D88
  c->r[4]=c->r[14]|c->r[14]; // 802B3D8C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802B3D90
  c->ctr=c->r[12]; // 802B3D94
  if (true) { c->lr=0x802B3D9Cu; dispatch(c,c->ctr); } // 802B3D98
  c->r[0]=R8(c->r[21]+0x000000A9u); // 802B3D9C
  c->r[26]=c->r[3]|c->r[3]; // 802B3DA0
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B3DA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B3DA8
  {uint32_t ea=c->r[2]+0xFFFFAA88u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B3DAC
  c->r[0]=c->r[0]^0x80000000u; // 802B3DB0
  c->r[3]=R32(c->r[16]+0x00000000u); // 802B3DB4
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B3DB8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[1]=RF64(ea);} // 802B3DBC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B3DC0
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[1]); // 802B3DC4
  c->lr=0x802B3DCCu; f_802B4180(c); // 802B3DC8
  c->r[5]=c->r[3]|c->r[3]; // 802B3DCC
  c->r[3]=c->r[1]+0x00000040u; // 802B3DD0
  c->r[4]=c->r[16]+0x000000A4u; // 802B3DD4
  c->r[5]=c->r[5]+0x000000ACu; // 802B3DD8
  c->lr=0x802B3DE0u; f_8009CB74(c); // 802B3DDC
  c->r[3]=c->r[15]|c->r[15]; // 802B3DE0
  c->r[4]=c->r[28]|c->r[28]; // 802B3DE4
  c->lr=0x802B3DECu; f_802AF4D4(c); // 802B3DE8
  c->r[22]=c->r[3]|c->r[3]; // 802B3DEC
  c->r[3]=0u+0x00000098u; // 802B3DF0
  c->r[0]=c->r[22]+0x00000001u; // 802B3DF4
  c->r[4]=0u+0x00000000u; // 802B3DF8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[17]); // 802B3DFC
  c->r[0]=c->r[5]+0x00000001u; // 802B3E00
  c->r[5]=rotl(c->r[0],1)&0x0000FFFEu; // 802B3E04
  c->lr=0x802B3E0Cu; f_803459B0(c); // 802B3E08
  c->r[3]=c->r[15]|c->r[15]; // 802B3E0C
  c->r[4]=c->r[21]|c->r[21]; // 802B3E10
  c->lr=0x802B3E18u; f_802B38AC(c); // 802B3E14
  cmps(c,0,(int32_t)c->r[3],64); // 802B3E18
  if (crb(c,2)) { goto L_802B3E48; } // 802B3E1C
  if (!crb(c,0)) { goto L_802B3E28; } // 802B3E20
  cmps(c,0,(int32_t)c->r[3],0); // 802B3E24
L_802B3E28:;
  c->r[0]=c->r[22]^0x80000000u; // 802B3E28
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B3E2C
  W32(c->r[1]+0x000000CCu,c->r[0]); // 802B3E30
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B3E34
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[1]=RF64(ea);} // 802B3E38
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B3E3C
  c->f[29]=c->ps1[29]=S(c->f[0]/c->f[1]); // 802B3E40
  goto L_802B3E4C; // 802B3E44
L_802B3E48:;
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[29]=c->ps1[29]=RF32(ea);} // 802B3E48
L_802B3E4C:;
  cmps(c,0,(int32_t)c->r[14],0); // 802B3E4C
  c->r[25]=0u+0x00000000u; // 802B3E50
  c->r[24]=0u+0x00000001u; // 802B3E54
  if (crb(c,2)) { goto L_802B3E64; } // 802B3E58
  c->r[25]=c->r[22]|c->r[22]; // 802B3E5C
  c->r[24]=0u+0xFFFFFFFFu; // 802B3E60
L_802B3E64:;
  c->r[3]=c->r[1]+0x00000068u; // 802B3E64
  c->lr=0x802B3E6Cu; f_802B38B8(c); // 802B3E68
  c->r[3]=c->r[1]+0x00000084u; // 802B3E6C
  c->lr=0x802B3E74u; f_802B38B8(c); // 802B3E70
  c->r[3]=c->r[1]+0x000000A0u; // 802B3E74
  c->lr=0x802B3E7Cu; f_802B38B8(c); // 802B3E78
  c->r[3]=c->r[1]+0x00000034u; // 802B3E7C
  c->r[22]=0u+0x00000000u; // 802B3E80
  c->r[21]=0u+0x00000000u; // 802B3E84
  c->lr=0x802B3E8Cu; f_8004B0A4(c); // 802B3E88
  c->r[3]=c->r[1]+0x00000028u; // 802B3E8C
  c->lr=0x802B3E94u; f_8004B0A4(c); // 802B3E90
  c->r[12]=c->r[23]|c->r[23]; // 802B3E94
  c->r[3]=c->r[28]|c->r[28]; // 802B3E98
  c->ctr=c->r[12]; // 802B3E9C
  if (true) { c->lr=0x802B3EA4u; dispatch(c,c->ctr); } // 802B3EA0
  c->r[0]=c->r[25]^0x80000000u; // 802B3EA4
  c->r[23]=c->r[3]|c->r[3]; // 802B3EA8
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B3EAC
  c->f[1]=c->f[30]; // 802B3EB0
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B3EB4
  c->r[3]=c->r[15]|c->r[15]; // 802B3EB8
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 802B3EBC
  c->r[5]=c->r[16]|c->r[16]; // 802B3EC0
  W32(c->r[1]+0x00000008u,c->r[20]); // 802B3EC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802B3EC8
  c->r[6]=c->r[18]|c->r[18]; // 802B3ECC
  c->r[7]=c->r[23]|c->r[23]; // 802B3ED0
  c->r[8]=c->r[27]|c->r[27]; // 802B3ED4
  c->r[10]=c->r[19]|c->r[19]; // 802B3ED8
  c->r[4]=c->r[1]+0x00000068u; // 802B3EDC
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[0]); // 802B3EE0
  c->r[9]=c->r[23]+0x000000ACu; // 802B3EE4
  c->lr=0x802B3EECu; f_802B1FF8(c); // 802B3EE8
  cmps(c,0,(int32_t)c->r[14],0); // 802B3EEC
  c->r[25]=c->r[25]+c->r[24]; // 802B3EF0
  if (!crb(c,2)) { goto L_802B3F5C; } // 802B3EF4
  c->r[3]=c->r[1]+0x00000084u; // 802B3EF8
  c->r[4]=c->r[1]+0x00000068u; // 802B3EFC
  c->r[21]=0u+0x00000001u; // 802B3F00
  c->lr=0x802B3F08u; f_802B4200(c); // 802B3F04
  c->r[0]=c->r[25]^0x80000000u; // 802B3F08
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B3F0C
  W32(c->r[1]+0x000000CCu,c->r[0]); // 802B3F10
  c->r[3]=c->r[1]+0x00000068u; // 802B3F14
  c->r[4]=c->r[1]+0x00000040u; // 802B3F18
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 802B3F1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B3F20
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 802B3F24
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 802B3F28
  c->lr=0x802B3F30u; f_8009CB30(c); // 802B3F2C
  c->r[3]=c->r[1]+0x00000074u; // 802B3F30
  c->r[4]=c->r[1]+0x00000040u; // 802B3F34
  c->lr=0x802B3F3Cu; f_8009CB30(c); // 802B3F38
  c->r[5]=c->r[1]+0x00000068u; // 802B3F3C
  c->r[3]=c->r[15]|c->r[15]; // 802B3F40
  c->r[4]=c->r[17]|c->r[17]; // 802B3F44
  c->r[8]=c->r[18]|c->r[18]; // 802B3F48
  c->r[6]=c->r[5]|c->r[5]; // 802B3F4C
  c->r[25]=c->r[25]+c->r[24]; // 802B3F50
  c->r[7]=c->r[1]+0x00000084u; // 802B3F54
  c->lr=0x802B3F5Cu; f_802B2810(c); // 802B3F58
L_802B3F5C:;
  c->r[12]=c->r[26]|c->r[26]; // 802B3F5C
  c->r[3]=c->r[28]|c->r[28]; // 802B3F60
  c->r[4]=c->r[23]|c->r[23]; // 802B3F64
  c->ctr=c->r[12]; // 802B3F68
  if (true) { c->lr=0x802B3F70u; dispatch(c,c->ctr); } // 802B3F6C
  c->r[4]=0u+0x55550000u; // 802B3F70
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[31]=RF64(ea);} // 802B3F74
  c->r[29]=c->r[3]|c->r[3]; // 802B3F78
  c->r[31]=c->r[4]+0x00005556u; // 802B3F7C
  goto L_802B4038; // 802B3F80
L_802B3F84:;
  c->r[4]=c->r[21]+0x00000001u; // 802B3F84
  c->r[0]=c->r[25]^0x80000000u; // 802B3F88
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[4])>>32); // 802B3F8C
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B3F90
  c->r[23]=c->r[22]|c->r[22]; // 802B3F94
  c->f[1]=c->f[30]; // 802B3F98
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[0]=RF64(ea);} // 802B3F9C
  c->r[22]=c->r[21]|c->r[21]; // 802B3FA0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802B3FA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802B3FA8
  c->r[0]=c->r[3]+c->r[0]; // 802B3FAC
  c->r[30]=c->r[1]+0x00000068u; // 802B3FB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B3FB4
  W32(c->r[1]+0x00000008u,c->r[20]); // 802B3FB8
  c->f[2]=c->ps1[2]=S(c->f[29]*c->f[0]); // 802B3FBC
  c->r[3]=c->r[15]|c->r[15]; // 802B3FC0
  c->r[21]=c->r[4]-c->r[0]; // 802B3FC4
  c->r[5]=c->r[16]|c->r[16]; // 802B3FC8
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 802B3FCC
  c->r[6]=c->r[18]|c->r[18]; // 802B3FD0
  c->r[7]=c->r[29]|c->r[29]; // 802B3FD4
  c->r[8]=c->r[27]|c->r[27]; // 802B3FD8
  c->r[30]=c->r[30]+c->r[0]; // 802B3FDC
  c->r[10]=c->r[19]|c->r[19]; // 802B3FE0
  c->r[4]=c->r[30]|c->r[30]; // 802B3FE4
  c->r[9]=c->r[29]+0x000000ACu; // 802B3FE8
  c->lr=0x802B3FF0u; f_802B1FF8(c); // 802B3FEC
  c->r[9]=(uint32_t)((int32_t)c->r[23]*(int32_t)28); // 802B3FF0
  c->r[5]=c->r[1]+0x00000068u; // 802B3FF4
  c->r[3]=c->r[15]|c->r[15]; // 802B3FF8
  c->r[6]=c->r[5]|c->r[5]; // 802B3FFC
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)28); // 802B4000
  c->r[4]=c->r[17]|c->r[17]; // 802B4004
  c->r[7]=c->r[30]|c->r[30]; // 802B4008
  c->r[8]=c->r[18]|c->r[18]; // 802B400C
  c->r[5]=c->r[5]+c->r[9]; // 802B4010
  c->r[6]=c->r[6]+c->r[0]; // 802B4014
  c->lr=0x802B401Cu; f_802B2810(c); // 802B4018
  c->r[12]=c->r[26]|c->r[26]; // 802B401C
  c->r[3]=c->r[28]|c->r[28]; // 802B4020
  c->r[4]=c->r[29]|c->r[29]; // 802B4024
  c->ctr=c->r[12]; // 802B4028
  if (true) { c->lr=0x802B4030u; dispatch(c,c->ctr); } // 802B402C
  c->r[29]=c->r[3]|c->r[3]; // 802B4030
  c->r[25]=c->r[25]+c->r[24]; // 802B4034
L_802B4038:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B4038
  if (!crb(c,2)) { IRQCHK(c); goto L_802B3F84; } // 802B403C
  cmps(c,0,(int32_t)c->r[14],0); // 802B4040
  if (crb(c,2)) { goto L_802B4100; } // 802B4044
  c->r[3]=0u+0x55550000u; // 802B4048
  c->r[19]=c->r[22]|c->r[22]; // 802B404C
  c->r[0]=c->r[3]+0x00005556u; // 802B4050
  c->r[6]=c->r[21]+0x00000001u; // 802B4054
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 802B4058
  c->r[14]=c->r[1]+0x00000068u; // 802B405C
  c->r[22]=c->r[21]|c->r[21]; // 802B4060
  c->r[16]=c->r[14]|c->r[14]; // 802B4064
  c->r[3]=c->r[1]+0x00000010u; // 802B4068
  c->r[5]=c->r[1]+0x00000040u; // 802B406C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802B4070
  c->r[0]=c->r[4]+c->r[0]; // 802B4074
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B4078
  c->r[21]=c->r[6]-c->r[0]; // 802B407C
  c->r[4]=(uint32_t)((int32_t)c->r[22]*(int32_t)28); // 802B4080
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 802B4084
  c->r[14]=c->r[14]+c->r[4]; // 802B4088
  c->r[16]=c->r[16]+c->r[0]; // 802B408C
  c->r[4]=c->r[14]+0x0000000Cu; // 802B4090
  c->lr=0x802B4098u; f_800B43B0(c); // 802B4094
  c->r[4]=c->r[14]|c->r[14]; // 802B4098
  c->r[3]=c->r[1]+0x0000001Cu; // 802B409C
  c->r[5]=c->r[1]+0x00000040u; // 802B40A0
  c->lr=0x802B40A8u; f_800B43B0(c); // 802B40A4
  c->r[0]=c->r[25]^0x80000000u; // 802B40A8
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B40AC
  W32(c->r[1]+0x000000CCu,c->r[0]); // 802B40B0
  c->r[3]=c->r[1]+0x0000004Cu; // 802B40B4
  c->r[4]=c->r[1]+0x0000001Cu; // 802B40B8
  c->r[5]=c->r[1]+0x00000010u; // 802B40BC
  {uint32_t ea=c->r[1]+0x000000C8u; c->f[0]=RF64(ea);} // 802B40C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B40C4
  c->f[1]=c->ps1[1]=S(c->f[29]*c->f[0]); // 802B40C8
  c->lr=0x802B40D0u; f_802B41C8(c); // 802B40CC
  c->r[4]=c->r[3]|c->r[3]; // 802B40D0
  c->r[3]=c->r[16]|c->r[16]; // 802B40D4
  c->lr=0x802B40DCu; f_802B4200(c); // 802B40D8
  c->r[0]=(uint32_t)((int32_t)c->r[19]*(int32_t)28); // 802B40DC
  c->r[5]=c->r[1]+0x00000068u; // 802B40E0
  c->r[3]=c->r[15]|c->r[15]; // 802B40E4
  c->r[4]=c->r[17]|c->r[17]; // 802B40E8
  c->r[6]=c->r[14]|c->r[14]; // 802B40EC
  c->r[7]=c->r[16]|c->r[16]; // 802B40F0
  c->r[8]=c->r[18]|c->r[18]; // 802B40F4
  c->r[5]=c->r[5]+c->r[0]; // 802B40F8
  c->lr=0x802B4100u; f_802B2810(c); // 802B40FC
L_802B4100:;
  c->r[0]=(uint32_t)((int32_t)c->r[21]*(int32_t)28); // 802B4100
  c->r[14]=c->r[1]+0x00000068u; // 802B4104
  c->r[3]=c->r[15]|c->r[15]; // 802B4108
  c->r[16]=c->r[14]|c->r[14]; // 802B410C
  c->r[14]=c->r[14]+c->r[0]; // 802B4110
  c->r[4]=c->r[17]|c->r[17]; // 802B4114
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)28); // 802B4118
  c->r[8]=c->r[18]|c->r[18]; // 802B411C
  c->r[6]=c->r[14]|c->r[14]; // 802B4120
  c->r[7]=c->r[14]|c->r[14]; // 802B4124
  c->r[16]=c->r[16]+c->r[0]; // 802B4128
  c->r[5]=c->r[16]|c->r[16]; // 802B412C
  c->lr=0x802B4134u; f_802B2810(c); // 802B4130
  c->r[3]=c->r[15]|c->r[15]; // 802B4134
  c->r[4]=c->r[16]|c->r[16]; // 802B4138
  c->r[5]=c->r[14]|c->r[14]; // 802B413C
  c->r[6]=c->r[14]|c->r[14]; // 802B4140
  c->r[7]=c->r[18]|c->r[18]; // 802B4144
  c->lr=0x802B414Cu; f_802B2A98(c); // 802B4148
  c->lr=0x802B4150u; f_802B3550(c); // 802B414C
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,31,ea,0,0);} // 802B4150
  {uint32_t ea=c->r[1]+0x00000140u; c->f[31]=RF64(ea);} // 802B4154
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,30,ea,0,0);} // 802B4158
  {uint32_t ea=c->r[1]+0x00000130u; c->f[30]=RF64(ea);} // 802B415C
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,29,ea,0,0);} // 802B4160
  c->r[11]=c->r[1]+0x00000120u; // 802B4164
  {uint32_t ea=c->r[1]+0x00000120u; c->f[29]=RF64(ea);} // 802B4168
  c->lr=0x802B4170u; f_802F0DE0(c); // 802B416C
  c->r[0]=R32(c->r[1]+0x00000154u); // 802B4170
  c->lr=c->r[0]; // 802B4174
  c->r[1]=c->r[1]+0x00000150u; // 802B4178
  return; // 802B417C
}

// GetYoungestDrawParticle__Q34nw4r2ef16DrawStrategyImplFPQ34nw4r2ef15ParticleManager
void f_802B4180(Ctx* __restrict c) {
  trace_call(0x802B4180u);
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 802B4180
  goto L_802B41AC; // 802B4184
L_802B4188:;
  c->r[4]=R16(c->r[3]+0x00000042u); // 802B4188
  c->r[5]=R32(c->r[5]+c->r[4]); // 802B418C
  goto L_802B4198; // 802B4190
L_802B4194:;
  c->r[5]=R32(c->r[5]+c->r[4]); // 802B4194
L_802B4198:;
  cmps(c,0,(int32_t)c->r[5],0); // 802B4198
  if (crb(c,2)) { goto L_802B41AC; } // 802B419C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802B41A0
  cmps(c,0,(int32_t)c->r[0],1); // 802B41A4
  if (!crb(c,2)) { IRQCHK(c); goto L_802B4194; } // 802B41A8
L_802B41AC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802B41AC
  if (crb(c,2)) { goto L_802B41C0; } // 802B41B0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 802B41B4
  cmps(c,0,(int32_t)c->r[0],1); // 802B41B8
  if (!crb(c,2)) { IRQCHK(c); goto L_802B4188; } // 802B41BC
L_802B41C0:;
  c->r[3]=c->r[5]|c->r[5]; // 802B41C0
  return; // 802B41C4
}

// __ct__Q44nw4r2ef24DrawSmoothStripeStrategy6VertexFRCQ34nw4r4math4VEC3RCQ34nw4r4math4VEC3f
void f_802B41C8(Ctx* __restrict c) {
  trace_call(0x802B41C8u);
  c->r[9]=R32(c->r[4]+0x00000000u); // 802B41C8
  c->r[8]=R32(c->r[4]+0x00000004u); // 802B41CC
  c->r[7]=R32(c->r[4]+0x00000008u); // 802B41D0
  c->r[6]=R32(c->r[5]+0x00000000u); // 802B41D4
  c->r[4]=R32(c->r[5]+0x00000004u); // 802B41D8
  c->r[0]=R32(c->r[5]+0x00000008u); // 802B41DC
  W32(c->r[3]+0x00000000u,c->r[9]); // 802B41E0
  W32(c->r[3]+0x00000004u,c->r[8]); // 802B41E4
  W32(c->r[3]+0x00000008u,c->r[7]); // 802B41E8
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 802B41EC
  W32(c->r[3]+0x00000010u,c->r[4]); // 802B41F0
  W32(c->r[3]+0x00000014u,c->r[0]); // 802B41F4
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 802B41F8
  return; // 802B41FC
}

// __as__Q44nw4r2ef24DrawSmoothStripeStrategy6VertexFRCQ44nw4r2ef24DrawSmoothStripeStrategy6Vertex
void f_802B4200(Ctx* __restrict c) {
  trace_call(0x802B4200u);
  c->r[9]=R32(c->r[4]+0x00000000u); // 802B4200
  c->r[8]=R32(c->r[4]+0x00000004u); // 802B4204
  c->r[7]=R32(c->r[4]+0x00000008u); // 802B4208
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 802B420C
  c->r[5]=R32(c->r[4]+0x00000010u); // 802B4210
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B4214
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B4218
  W32(c->r[3]+0x00000000u,c->r[9]); // 802B421C
  W32(c->r[3]+0x00000004u,c->r[8]); // 802B4220
  W32(c->r[3]+0x00000008u,c->r[7]); // 802B4224
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 802B4228
  W32(c->r[3]+0x00000010u,c->r[5]); // 802B422C
  W32(c->r[3]+0x00000014u,c->r[0]); // 802B4230
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 802B4234
  return; // 802B4238
}

// DrawSmoothStripeTube_BSpline_ConnectNone__Q34nw4r2ef24DrawSmoothStripeStrategyFPQ44nw4r2ef24DrawSmoothStripeStrategy18AheadContextStripeii
void f_802B423C(Ctx* __restrict c) {
  trace_call(0x802B423Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B423C
  c->r[0]=c->lr; // 802B4240
  W32(c->r[1]+0x00000114u,c->r[0]); // 802B4244
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[31]);} // 802B4248
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,31,ea,0,0);} // 802B424C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[30]);} // 802B4250
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,30,ea,0,0);} // 802B4254
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[29]);} // 802B4258
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,29,ea,0,0);} // 802B425C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[28]);} // 802B4260
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,28,ea,0,0);} // 802B4264
  c->r[11]=c->r[1]+0x000000D0u; // 802B4268
  c->lr=0x802B4270u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B426C
  c->r[12]=R32(c->r[3]+0x00000000u); // 802B4270
  c->r[0]=0u+0x43300000u; // 802B4274
  c->r[23]=R32(c->r[4]+0x00000000u); // 802B4278
  c->r[29]=c->r[4]|c->r[4]; // 802B427C
  c->r[12]=R32(c->r[12]+0x00000018u); // 802B4280
  c->r[28]=c->r[3]|c->r[3]; // 802B4284
  c->r[30]=c->r[5]|c->r[5]; // 802B4288
  c->r[31]=c->r[6]|c->r[6]; // 802B428C
  c->r[4]=c->r[23]|c->r[23]; // 802B4290
  W32(c->r[1]+0x00000080u,c->r[0]); // 802B4294
  c->r[26]=R32(c->r[23]+0x00000024u); // 802B4298
  W32(c->r[1]+0x00000088u,c->r[0]); // 802B429C
  c->ctr=c->r[12]; // 802B42A0
  if (true) { c->lr=0x802B42A8u; dispatch(c,c->ctr); } // 802B42A4
  c->r[12]=R32(c->r[28]+0x00000000u); // 802B42A8
  c->r[22]=c->r[3]|c->r[3]; // 802B42AC
  c->r[0]=R16(c->r[26]+0x0000009Cu); // 802B42B0
  c->r[3]=c->r[28]|c->r[28]; // 802B42B4
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B42B8
  c->r[27]=rotl(c->r[0],0)&0x00000800u; // 802B42BC
  c->r[4]=c->r[27]|c->r[27]; // 802B42C0
  c->ctr=c->r[12]; // 802B42C4
  if (true) { c->lr=0x802B42CCu; dispatch(c,c->ctr); } // 802B42C8
  c->r[12]=R32(c->r[28]+0x00000000u); // 802B42CC
  c->r[24]=c->r[3]|c->r[3]; // 802B42D0
  c->r[3]=c->r[28]|c->r[28]; // 802B42D4
  c->r[4]=c->r[27]|c->r[27]; // 802B42D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 802B42DC
  c->ctr=c->r[12]; // 802B42E0
  if (true) { c->lr=0x802B42E8u; dispatch(c,c->ctr); } // 802B42E4
  c->r[0]=R8(c->r[26]+0x00000145u); // 802B42E8
  c->r[21]=c->r[3]|c->r[3]; // 802B42EC
  c->r[3]=R8(c->r[26]+0x00000146u); // 802B42F0
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B42F4
  c->r[0]=R8(c->r[26]+0x0000014Eu); // 802B42F8
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802B42FC
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B4300
  c->r[4]=c->r[4]^0x80000000u; // 802B4304
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 802B4308
  c->r[3]=c->r[3]^0x80000000u; // 802B430C
  W32(c->r[1]+0x00000084u,c->r[4]); // 802B4310
  {uint32_t ea=c->r[2]+0xFFFFAA88u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B4314
  cmps(c,0,(int32_t)c->r[0],64); // 802B4318
  W32(c->r[1]+0x0000008Cu,c->r[3]); // 802B431C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[2]=RF64(ea);} // 802B4320
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 802B4324
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802B4328
  c->r[3]=R16(c->r[23]+0x00000050u); // 802B432C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B4330
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[2]); // 802B4334
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[0]); // 802B4338
  if (crb(c,2)) { goto L_802B436C; } // 802B433C
  if (!crb(c,0)) { goto L_802B4348; } // 802B4340
  cmps(c,0,(int32_t)c->r[0],0); // 802B4344
L_802B4348:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802B4348
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B434C
  c->r[0]=c->r[0]^0x80000000u; // 802B4350
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B4354
  W32(c->r[1]+0x00000084u,c->r[0]); // 802B4358
  {uint32_t ea=c->r[1]+0x00000080u; c->f[1]=RF64(ea);} // 802B435C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B4360
  c->f[28]=c->ps1[28]=S(c->f[0]/c->f[1]); // 802B4364
  goto L_802B4370; // 802B4368
L_802B436C:;
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[28]=c->ps1[28]=RF32(ea);} // 802B436C
L_802B4370:;
  cmps(c,0,(int32_t)c->r[27],0); // 802B4370
  c->r[20]=0u+0x00000000u; // 802B4374
  c->r[19]=0u+0x00000001u; // 802B4378
  if (crb(c,2)) { goto L_802B4388; } // 802B437C
  c->r[20]=c->r[3]+0xFFFFFFFFu; // 802B4380
  c->r[19]=0u+0xFFFFFFFFu; // 802B4384
L_802B4388:;
  c->r[12]=c->r[24]|c->r[24]; // 802B4388
  c->r[3]=c->r[23]|c->r[23]; // 802B438C
  c->r[17]=0u+0x00000000u; // 802B4390
  c->r[16]=0u+0x00000000u; // 802B4394
  c->ctr=c->r[12]; // 802B4398
  if (true) { c->lr=0x802B43A0u; dispatch(c,c->ctr); } // 802B439C
  c->r[0]=c->r[20]^0x80000000u; // 802B43A0
  c->r[18]=c->r[3]|c->r[3]; // 802B43A4
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 802B43A8
  c->f[1]=c->f[30]; // 802B43AC
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B43B0
  c->f[2]=c->f[29]; // 802B43B4
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=RF64(ea);} // 802B43B8
  c->r[3]=c->r[28]|c->r[28]; // 802B43BC
  c->r[5]=c->r[29]|c->r[29]; // 802B43C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B43C4
  c->r[6]=c->r[31]|c->r[31]; // 802B43C8
  c->r[7]=c->r[18]|c->r[18]; // 802B43CC
  c->r[8]=c->r[22]|c->r[22]; // 802B43D0
  c->r[4]=c->r[1]+0x00000008u; // 802B43D4
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[0]); // 802B43D8
  c->lr=0x802B43E0u; f_802B23A0(c); // 802B43DC
  c->r[12]=c->r[21]|c->r[21]; // 802B43E0
  c->r[3]=c->r[23]|c->r[23]; // 802B43E4
  c->r[4]=c->r[18]|c->r[18]; // 802B43E8
  c->r[20]=c->r[20]+c->r[19]; // 802B43EC
  c->ctr=c->r[12]; // 802B43F0
  if (true) { c->lr=0x802B43F8u; dispatch(c,c->ctr); } // 802B43F4
  c->r[4]=0u+0x55550000u; // 802B43F8
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[31]=RF64(ea);} // 802B43FC
  c->r[24]=c->r[3]|c->r[3]; // 802B4400
  c->r[27]=c->r[4]+0x00005556u; // 802B4404
  goto L_802B44C0; // 802B4408
L_802B440C:;
  c->r[4]=c->r[16]+0x00000001u; // 802B440C
  c->r[0]=c->r[20]^0x80000000u; // 802B4410
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[27]*(int64_t)(int32_t)c->r[4])>>32); // 802B4414
  W32(c->r[1]+0x00000084u,c->r[0]); // 802B4418
  c->r[18]=c->r[17]|c->r[17]; // 802B441C
  c->f[1]=c->f[30]; // 802B4420
  {uint32_t ea=c->r[1]+0x00000080u; c->f[0]=RF64(ea);} // 802B4424
  c->r[17]=c->r[16]|c->r[16]; // 802B4428
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802B442C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802B4430
  c->r[0]=c->r[3]+c->r[0]; // 802B4434
  c->f[2]=c->f[29]; // 802B4438
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B443C
  c->r[25]=c->r[1]+0x00000008u; // 802B4440
  c->f[3]=c->ps1[3]=S(c->f[28]*c->f[0]); // 802B4444
  c->r[3]=c->r[28]|c->r[28]; // 802B4448
  c->r[16]=c->r[4]-c->r[0]; // 802B444C
  c->r[5]=c->r[29]|c->r[29]; // 802B4450
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)40); // 802B4454
  c->r[6]=c->r[31]|c->r[31]; // 802B4458
  c->r[7]=c->r[24]|c->r[24]; // 802B445C
  c->r[8]=c->r[22]|c->r[22]; // 802B4460
  c->r[25]=c->r[25]+c->r[0]; // 802B4464
  c->r[4]=c->r[25]|c->r[25]; // 802B4468
  c->lr=0x802B4470u; f_802B23A0(c); // 802B446C
  c->r[11]=(uint32_t)((int32_t)c->r[18]*(int32_t)40); // 802B4470
  c->r[6]=c->r[1]+0x00000008u; // 802B4474
  c->r[5]=R8(c->r[26]+0x0000014Cu); // 802B4478
  c->r[3]=c->r[28]|c->r[28]; // 802B447C
  c->r[7]=c->r[6]|c->r[6]; // 802B4480
  c->r[10]=R32(c->r[29]+0x000000D4u); // 802B4484
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)40); // 802B4488
  c->r[4]=c->r[30]|c->r[30]; // 802B448C
  c->r[8]=c->r[25]|c->r[25]; // 802B4490
  c->r[9]=c->r[31]|c->r[31]; // 802B4494
  c->r[6]=c->r[6]+c->r[11]; // 802B4498
  c->r[7]=c->r[7]+c->r[0]; // 802B449C
  c->lr=0x802B44A4u; f_802B2C7C(c); // 802B44A0
  c->r[12]=c->r[21]|c->r[21]; // 802B44A4
  c->r[3]=c->r[23]|c->r[23]; // 802B44A8
  c->r[4]=c->r[24]|c->r[24]; // 802B44AC
  c->ctr=c->r[12]; // 802B44B0
  if (true) { c->lr=0x802B44B8u; dispatch(c,c->ctr); } // 802B44B4
  c->r[24]=c->r[3]|c->r[3]; // 802B44B8
  c->r[20]=c->r[20]+c->r[19]; // 802B44BC
L_802B44C0:;
  cmps(c,0,(int32_t)c->r[24],0); // 802B44C0
  if (!crb(c,2)) { IRQCHK(c); goto L_802B440C; } // 802B44C4
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)40); // 802B44C8
  c->r[7]=c->r[1]+0x00000008u; // 802B44CC
  c->r[5]=R8(c->r[26]+0x0000014Cu); // 802B44D0
  c->r[3]=c->r[28]|c->r[28]; // 802B44D4
  c->r[6]=c->r[7]|c->r[7]; // 802B44D8
  c->r[10]=R32(c->r[29]+0x000000D4u); // 802B44DC
  c->r[7]=c->r[7]+c->r[0]; // 802B44E0
  c->r[4]=c->r[30]|c->r[30]; // 802B44E4
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)40); // 802B44E8
  c->r[9]=c->r[31]|c->r[31]; // 802B44EC
  c->r[8]=c->r[7]|c->r[7]; // 802B44F0
  c->r[6]=c->r[6]+c->r[0]; // 802B44F4
  c->lr=0x802B44FCu; f_802B2C7C(c); // 802B44F8
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,31,ea,0,0);} // 802B44FC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[31]=RF64(ea);} // 802B4500
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,30,ea,0,0);} // 802B4504
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[30]=RF64(ea);} // 802B4508
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,29,ea,0,0);} // 802B450C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[29]=RF64(ea);} // 802B4510
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,28,ea,0,0);} // 802B4514
  c->r[11]=c->r[1]+0x000000D0u; // 802B4518
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[28]=RF64(ea);} // 802B451C
  c->lr=0x802B4524u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B4520
  c->r[0]=R32(c->r[1]+0x00000114u); // 802B4524
  c->lr=c->r[0]; // 802B4528
  c->r[1]=c->r[1]+0x00000110u; // 802B452C
  return; // 802B4530
}

// DrawSmoothStripeTube_BSpline_ConnectRing__Q34nw4r2ef24DrawSmoothStripeStrategyFPQ44nw4r2ef24DrawSmoothStripeStrategy18AheadContextStripeii
void f_802B4534(Ctx* __restrict c) {
  trace_call(0x802B4534u);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B4534
  c->r[0]=c->lr; // 802B4538
  W32(c->r[1]+0x00000164u,c->r[0]); // 802B453C
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 802B4540
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 802B4544
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 802B4548
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 802B454C
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 802B4550
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 802B4554
  {uint32_t ea=c->r[1]+0x00000120u; WF64(ea,c->f[28]);} // 802B4558
  {uint32_t ea=c->r[1]+0x00000128u; psq_store(c,28,ea,0,0);} // 802B455C
  c->r[11]=c->r[1]+0x00000120u; // 802B4560
  c->lr=0x802B4568u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B4564
  c->r[12]=R32(c->r[3]+0x00000000u); // 802B4568
  c->r[0]=0u+0x43300000u; // 802B456C
  c->r[23]=R32(c->r[4]+0x00000000u); // 802B4570
  c->r[29]=c->r[4]|c->r[4]; // 802B4574
  c->r[12]=R32(c->r[12]+0x00000018u); // 802B4578
  c->r[28]=c->r[3]|c->r[3]; // 802B457C
  c->r[30]=c->r[5]|c->r[5]; // 802B4580
  c->r[31]=c->r[6]|c->r[6]; // 802B4584
  c->r[4]=c->r[23]|c->r[23]; // 802B4588
  W32(c->r[1]+0x000000D0u,c->r[0]); // 802B458C
  c->r[26]=R32(c->r[23]+0x00000024u); // 802B4590
  W32(c->r[1]+0x000000D8u,c->r[0]); // 802B4594
  c->ctr=c->r[12]; // 802B4598
  if (true) { c->lr=0x802B45A0u; dispatch(c,c->ctr); } // 802B459C
  c->r[12]=R32(c->r[28]+0x00000000u); // 802B45A0
  c->r[22]=c->r[3]|c->r[3]; // 802B45A4
  c->r[0]=R16(c->r[26]+0x0000009Cu); // 802B45A8
  c->r[3]=c->r[28]|c->r[28]; // 802B45AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B45B0
  c->r[27]=rotl(c->r[0],0)&0x00000800u; // 802B45B4
  c->r[4]=c->r[27]|c->r[27]; // 802B45B8
  c->ctr=c->r[12]; // 802B45BC
  if (true) { c->lr=0x802B45C4u; dispatch(c,c->ctr); } // 802B45C0
  c->r[12]=R32(c->r[28]+0x00000000u); // 802B45C4
  c->r[24]=c->r[3]|c->r[3]; // 802B45C8
  c->r[3]=c->r[28]|c->r[28]; // 802B45CC
  c->r[4]=c->r[27]|c->r[27]; // 802B45D0
  c->r[12]=R32(c->r[12]+0x00000014u); // 802B45D4
  c->ctr=c->r[12]; // 802B45D8
  if (true) { c->lr=0x802B45E0u; dispatch(c,c->ctr); } // 802B45DC
  c->r[0]=R8(c->r[26]+0x00000145u); // 802B45E0
  c->r[21]=c->r[3]|c->r[3]; // 802B45E4
  c->r[3]=R8(c->r[26]+0x00000146u); // 802B45E8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B45EC
  c->r[0]=R8(c->r[26]+0x0000014Eu); // 802B45F0
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802B45F4
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B45F8
  c->r[4]=c->r[4]^0x80000000u; // 802B45FC
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 802B4600
  c->r[3]=c->r[3]^0x80000000u; // 802B4604
  W32(c->r[1]+0x000000D4u,c->r[4]); // 802B4608
  {uint32_t ea=c->r[2]+0xFFFFAA88u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B460C
  cmps(c,0,(int32_t)c->r[0],64); // 802B4610
  W32(c->r[1]+0x000000DCu,c->r[3]); // 802B4614
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[2]=RF64(ea);} // 802B4618
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 802B461C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802B4620
  c->r[3]=R16(c->r[23]+0x00000050u); // 802B4624
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B4628
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[2]); // 802B462C
  c->f[28]=c->ps1[28]=S(c->f[1]*c->f[0]); // 802B4630
  if (crb(c,2)) { goto L_802B4660; } // 802B4634
  if (!crb(c,0)) { goto L_802B4640; } // 802B4638
  cmps(c,0,(int32_t)c->r[0],0); // 802B463C
L_802B4640:;
  c->r[0]=c->r[3]^0x80000000u; // 802B4640
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B4644
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802B4648
  {uint32_t ea=c->r[2]+0xFFFFAA78u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B464C
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[1]=RF64(ea);} // 802B4650
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B4654
  c->f[31]=c->ps1[31]=S(c->f[0]/c->f[1]); // 802B4658
  goto L_802B4664; // 802B465C
L_802B4660:;
  {uint32_t ea=c->r[2]+0xFFFFAA78u; c->f[31]=c->ps1[31]=RF32(ea);} // 802B4660
L_802B4664:;
  cmps(c,0,(int32_t)c->r[27],0); // 802B4664
  c->r[20]=0u+0xFFFFFFFFu; // 802B4668
  c->r[19]=0u+0x00000002u; // 802B466C
  if (crb(c,2)) { goto L_802B4680; } // 802B4670
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802B4674
  c->r[19]=0u+0xFFFFFFFEu; // 802B4678
  c->r[20]=c->r[3]+0x00000001u; // 802B467C
L_802B4680:;
  c->r[12]=c->r[24]|c->r[24]; // 802B4680
  c->r[3]=c->r[23]|c->r[23]; // 802B4684
  c->ctr=c->r[12]; // 802B4688
  if (true) { c->lr=0x802B4690u; dispatch(c,c->ctr); } // 802B468C
  c->r[0]=c->r[20]^0x80000000u; // 802B4690
  c->r[16]=c->r[3]|c->r[3]; // 802B4694
  W32(c->r[1]+0x000000DCu,c->r[0]); // 802B4698
  c->f[1]=c->f[29]; // 802B469C
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B46A0
  c->f[2]=c->f[28]; // 802B46A4
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 802B46A8
  c->r[3]=c->r[28]|c->r[28]; // 802B46AC
  c->r[5]=c->r[29]|c->r[29]; // 802B46B0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B46B4
  c->r[6]=c->r[31]|c->r[31]; // 802B46B8
  c->r[7]=c->r[16]|c->r[16]; // 802B46BC
  c->r[8]=c->r[22]|c->r[22]; // 802B46C0
  c->r[4]=c->r[1]+0x00000080u; // 802B46C4
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[0]); // 802B46C8
  c->lr=0x802B46D0u; f_802B23A0(c); // 802B46CC
  c->r[12]=c->r[21]|c->r[21]; // 802B46D0
  c->r[3]=c->r[23]|c->r[23]; // 802B46D4
  c->r[4]=c->r[16]|c->r[16]; // 802B46D8
  c->ctr=c->r[12]; // 802B46DC
  if (true) { c->lr=0x802B46E4u; dispatch(c,c->ctr); } // 802B46E0
  c->r[20]=c->r[20]+c->r[19]; // 802B46E4
  c->r[16]=c->r[3]|c->r[3]; // 802B46E8
  c->r[0]=c->r[20]^0x80000000u; // 802B46EC
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B46F0
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802B46F4
  c->f[1]=c->f[29]; // 802B46F8
  c->f[2]=c->f[28]; // 802B46FC
  c->r[3]=c->r[28]|c->r[28]; // 802B4700
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 802B4704
  c->r[5]=c->r[29]|c->r[29]; // 802B4708
  c->r[6]=c->r[31]|c->r[31]; // 802B470C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B4710
  c->r[7]=c->r[16]|c->r[16]; // 802B4714
  c->r[8]=c->r[22]|c->r[22]; // 802B4718
  c->r[4]=c->r[1]+0x000000A8u; // 802B471C
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[0]); // 802B4720
  c->lr=0x802B4728u; f_802B23A0(c); // 802B4724
  c->r[12]=c->r[21]|c->r[21]; // 802B4728
  c->r[3]=c->r[23]|c->r[23]; // 802B472C
  c->r[4]=c->r[16]|c->r[16]; // 802B4730
  c->ctr=c->r[12]; // 802B4734
  if (true) { c->lr=0x802B473Cu; dispatch(c,c->ctr); } // 802B4738
  c->r[4]=0u+0x55550000u; // 802B473C
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[30]=RF64(ea);} // 802B4740
  c->r[24]=c->r[3]|c->r[3]; // 802B4744
  c->r[20]=c->r[20]+c->r[19]; // 802B4748
  c->r[27]=c->r[4]+0x00005556u; // 802B474C
  c->r[17]=0u+0x00000003u; // 802B4750
  c->r[16]=0u+0x00000004u; // 802B4754
  goto L_802B4810; // 802B4758
L_802B475C:;
  c->r[4]=c->r[16]+0x00000001u; // 802B475C
  c->r[0]=c->r[20]^0x80000000u; // 802B4760
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[27]*(int64_t)(int32_t)c->r[4])>>32); // 802B4764
  W32(c->r[1]+0x000000DCu,c->r[0]); // 802B4768
  c->r[18]=c->r[17]|c->r[17]; // 802B476C
  c->f[1]=c->f[29]; // 802B4770
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 802B4774
  c->r[17]=c->r[16]|c->r[16]; // 802B4778
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802B477C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 802B4780
  c->r[0]=c->r[3]+c->r[0]; // 802B4784
  c->f[2]=c->f[28]; // 802B4788
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B478C
  c->r[25]=c->r[1]+0x00000008u; // 802B4790
  c->f[3]=c->ps1[3]=S(c->f[31]*c->f[0]); // 802B4794
  c->r[3]=c->r[28]|c->r[28]; // 802B4798
  c->r[16]=c->r[4]-c->r[0]; // 802B479C
  c->r[5]=c->r[29]|c->r[29]; // 802B47A0
  c->r[0]=(uint32_t)((int32_t)c->r[16]*(int32_t)40); // 802B47A4
  c->r[6]=c->r[31]|c->r[31]; // 802B47A8
  c->r[7]=c->r[24]|c->r[24]; // 802B47AC
  c->r[8]=c->r[22]|c->r[22]; // 802B47B0
  c->r[25]=c->r[25]+c->r[0]; // 802B47B4
  c->r[4]=c->r[25]|c->r[25]; // 802B47B8
  c->lr=0x802B47C0u; f_802B23A0(c); // 802B47BC
  c->r[11]=(uint32_t)((int32_t)c->r[18]*(int32_t)40); // 802B47C0
  c->r[6]=c->r[1]+0x00000008u; // 802B47C4
  c->r[5]=R8(c->r[26]+0x0000014Cu); // 802B47C8
  c->r[3]=c->r[28]|c->r[28]; // 802B47CC
  c->r[7]=c->r[6]|c->r[6]; // 802B47D0
  c->r[10]=R32(c->r[29]+0x000000D4u); // 802B47D4
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)40); // 802B47D8
  c->r[4]=c->r[30]|c->r[30]; // 802B47DC
  c->r[8]=c->r[25]|c->r[25]; // 802B47E0
  c->r[9]=c->r[31]|c->r[31]; // 802B47E4
  c->r[6]=c->r[6]+c->r[11]; // 802B47E8
  c->r[7]=c->r[7]+c->r[0]; // 802B47EC
  c->lr=0x802B47F4u; f_802B2C7C(c); // 802B47F0
  c->r[12]=c->r[21]|c->r[21]; // 802B47F4
  c->r[3]=c->r[23]|c->r[23]; // 802B47F8
  c->r[4]=c->r[24]|c->r[24]; // 802B47FC
  c->ctr=c->r[12]; // 802B4800
  if (true) { c->lr=0x802B4808u; dispatch(c,c->ctr); } // 802B4804
  c->r[24]=c->r[3]|c->r[3]; // 802B4808
  c->r[20]=c->r[20]+c->r[19]; // 802B480C
L_802B4810:;
  cmps(c,0,(int32_t)c->r[24],0); // 802B4810
  if (!crb(c,2)) { IRQCHK(c); goto L_802B475C; } // 802B4814
  c->r[0]=c->r[20]^0x80000000u; // 802B4818
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B481C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 802B4820
  c->r[4]=(uint32_t)((int32_t)c->r[16]*(int32_t)40); // 802B4824
  c->r[16]=c->r[1]+0x00000008u; // 802B4828
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[0]=RF64(ea);} // 802B482C
  c->r[3]=c->r[28]|c->r[28]; // 802B4830
  c->r[6]=c->r[16]|c->r[16]; // 802B4834
  c->r[9]=c->r[31]|c->r[31]; // 802B4838
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B483C
  c->r[16]=c->r[16]+c->r[4]; // 802B4840
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)40); // 802B4844
  c->r[4]=c->r[30]|c->r[30]; // 802B4848
  c->r[7]=c->r[16]|c->r[16]; // 802B484C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 802B4850
  c->r[6]=c->r[6]+c->r[0]; // 802B4854
  c->r[8]=c->r[1]+0x00000080u; // 802B4858
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 802B485C
  c->r[5]=R8(c->r[26]+0x0000014Cu); // 802B4860
  c->r[10]=R32(c->r[29]+0x000000D4u); // 802B4864
  c->lr=0x802B486Cu; f_802B2C7C(c); // 802B4868
  c->r[20]=c->r[20]+c->r[19]; // 802B486C
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B4870
  c->r[0]=c->r[20]^0x80000000u; // 802B4874
  c->r[3]=c->r[28]|c->r[28]; // 802B4878
  W32(c->r[1]+0x000000DCu,c->r[0]); // 802B487C
  c->r[4]=c->r[30]|c->r[30]; // 802B4880
  c->r[6]=c->r[16]|c->r[16]; // 802B4884
  c->r[9]=c->r[31]|c->r[31]; // 802B4888
  {uint32_t ea=c->r[1]+0x000000D8u; c->f[0]=RF64(ea);} // 802B488C
  c->r[7]=c->r[1]+0x00000080u; // 802B4890
  c->r[8]=c->r[1]+0x000000A8u; // 802B4894
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B4898
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 802B489C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 802B48A0
  c->r[5]=R8(c->r[26]+0x0000014Cu); // 802B48A4
  c->r[10]=R32(c->r[29]+0x000000D4u); // 802B48A8
  c->lr=0x802B48B0u; f_802B2C7C(c); // 802B48AC
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,31,ea,0,0);} // 802B48B0
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 802B48B4
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,30,ea,0,0);} // 802B48B8
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 802B48BC
  {uint32_t ea=c->r[1]+0x00000138u; psq_load(c,29,ea,0,0);} // 802B48C0
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 802B48C4
  {uint32_t ea=c->r[1]+0x00000128u; psq_load(c,28,ea,0,0);} // 802B48C8
  c->r[11]=c->r[1]+0x00000120u; // 802B48CC
  {uint32_t ea=c->r[1]+0x00000120u; c->f[28]=RF64(ea);} // 802B48D0
  c->lr=0x802B48D8u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B48D4
  c->r[0]=R32(c->r[1]+0x00000164u); // 802B48D8
  c->lr=c->r[0]; // 802B48DC
  c->r[1]=c->r[1]+0x00000160u; // 802B48E0
  return; // 802B48E4
}

// DrawSmoothStripeTube_BSpline_ConnectEmitter__Q34nw4r2ef24DrawSmoothStripeStrategyFPQ44nw4r2ef24DrawSmoothStripeStrategy18AheadContextStripeii
void f_802B48E8(Ctx* __restrict c) {
  trace_call(0x802B48E8u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B48E8
  c->r[0]=c->lr; // 802B48EC
  W32(c->r[1]+0x00000184u,c->r[0]); // 802B48F0
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[31]);} // 802B48F4
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,31,ea,0,0);} // 802B48F8
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[30]);} // 802B48FC
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,30,ea,0,0);} // 802B4900
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[29]);} // 802B4904
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,29,ea,0,0);} // 802B4908
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[28]);} // 802B490C
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,28,ea,0,0);} // 802B4910
  c->r[11]=c->r[1]+0x00000140u; // 802B4914
  c->lr=0x802B491Cu; f_802F0D94(c); // 802B4918
  c->r[12]=R32(c->r[3]+0x00000000u); // 802B491C
  c->r[0]=0u+0x43300000u; // 802B4920
  c->r[29]=R32(c->r[4]+0x00000000u); // 802B4924
  c->r[20]=c->r[4]|c->r[4]; // 802B4928
  c->r[12]=R32(c->r[12]+0x00000018u); // 802B492C
  c->r[19]=c->r[3]|c->r[3]; // 802B4930
  c->r[21]=c->r[5]|c->r[5]; // 802B4934
  c->r[22]=c->r[6]|c->r[6]; // 802B4938
  c->r[4]=c->r[29]|c->r[29]; // 802B493C
  W32(c->r[1]+0x000000E8u,c->r[0]); // 802B4940
  c->r[31]=R32(c->r[29]+0x00000024u); // 802B4944
  W32(c->r[1]+0x000000F0u,c->r[0]); // 802B4948
  c->ctr=c->r[12]; // 802B494C
  if (true) { c->lr=0x802B4954u; dispatch(c,c->ctr); } // 802B4950
  c->r[12]=R32(c->r[19]+0x00000000u); // 802B4954
  c->r[28]=c->r[3]|c->r[3]; // 802B4958
  c->r[0]=R16(c->r[31]+0x0000009Cu); // 802B495C
  c->r[3]=c->r[19]|c->r[19]; // 802B4960
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B4964
  c->r[30]=rotl(c->r[0],0)&0x00000800u; // 802B4968
  c->r[4]=c->r[30]|c->r[30]; // 802B496C
  c->ctr=c->r[12]; // 802B4970
  if (true) { c->lr=0x802B4978u; dispatch(c,c->ctr); } // 802B4974
  c->r[12]=R32(c->r[19]+0x00000000u); // 802B4978
  c->r[14]=c->r[3]|c->r[3]; // 802B497C
  c->r[3]=c->r[19]|c->r[19]; // 802B4980
  c->r[4]=c->r[30]|c->r[30]; // 802B4984
  c->r[12]=R32(c->r[12]+0x00000014u); // 802B4988
  c->ctr=c->r[12]; // 802B498C
  if (true) { c->lr=0x802B4994u; dispatch(c,c->ctr); } // 802B4990
  c->r[0]=R8(c->r[31]+0x00000146u); // 802B4994
  c->r[27]=c->r[3]|c->r[3]; // 802B4998
  c->r[4]=R8(c->r[31]+0x00000145u); // 802B499C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B49A0
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B49A4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 802B49A8
  {uint32_t ea=c->r[2]+0xFFFFAA88u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B49AC
  c->r[3]=c->r[3]^0x80000000u; // 802B49B0
  c->r[0]=c->r[0]^0x80000000u; // 802B49B4
  W32(c->r[1]+0x000000ECu,c->r[3]); // 802B49B8
  c->r[4]=R32(c->r[20]+0x00000000u); // 802B49BC
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802B49C0
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[2]=RF64(ea);} // 802B49C4
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=RF64(ea);} // 802B49C8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802B49CC
  c->r[3]=R32(c->r[4]+0x0000003Cu); // 802B49D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B49D4
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[2]); // 802B49D8
  c->f[30]=c->ps1[30]=S(c->f[1]*c->f[0]); // 802B49DC
  goto L_802B4A08; // 802B49E0
L_802B49E4:;
  c->r[5]=R16(c->r[4]+0x00000042u); // 802B49E4
  c->r[3]=R32(c->r[3]+c->r[5]); // 802B49E8
  goto L_802B49F4; // 802B49EC
L_802B49F0:;
  c->r[3]=R32(c->r[3]+c->r[5]); // 802B49F0
L_802B49F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B49F4
  if (crb(c,2)) { goto L_802B4A08; } // 802B49F8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802B49FC
  cmps(c,0,(int32_t)c->r[0],1); // 802B4A00
  if (!crb(c,2)) { IRQCHK(c); goto L_802B49F0; } // 802B4A04
L_802B4A08:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B4A08
  if (crb(c,2)) { goto L_802B4A1C; } // 802B4A0C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802B4A10
  cmps(c,0,(int32_t)c->r[0],1); // 802B4A14
  if (!crb(c,2)) { IRQCHK(c); goto L_802B49E4; } // 802B4A18
L_802B4A1C:;
  {uint32_t ea=c->r[20]+0x000000A4u; psq_load(c,0,ea,0,0);} // 802B4A1C
  {uint32_t ea=c->r[3]+0x000000ACu; psq_load(c,1,ea,0,0);} // 802B4A20
  c->r[0]=R8(c->r[31]+0x0000014Eu); // 802B4A24
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802B4A28
  {uint32_t ea=c->r[3]+0x000000B4u; psq_load(c,1,ea,1,0);} // 802B4A2C
  {uint32_t ea=c->r[20]+0x000000ACu; psq_load(c,0,ea,1,0);} // 802B4A30
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 802B4A34
  cmps(c,0,(int32_t)c->r[0],64); // 802B4A38
  c->r[3]=R16(c->r[29]+0x00000050u); // 802B4A3C
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,2,ea,0,0);} // 802B4A40
  {double t0=S(c->f[0]-c->f[1]), t1=S(c->ps1[0]-c->ps1[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802B4A44
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,2,ea,1,0);} // 802B4A48
  if (crb(c,2)) { goto L_802B4A78; } // 802B4A4C
  if (!crb(c,0)) { goto L_802B4A58; } // 802B4A50
  cmps(c,0,(int32_t)c->r[0],0); // 802B4A54
L_802B4A58:;
  c->r[0]=c->r[3]^0x80000000u; // 802B4A58
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[2]=RF64(ea);} // 802B4A5C
  W32(c->r[1]+0x000000ECu,c->r[0]); // 802B4A60
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B4A64
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[1]=RF64(ea);} // 802B4A68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802B4A6C
  c->f[29]=c->ps1[29]=S(c->f[0]/c->f[1]); // 802B4A70
  goto L_802B4A7C; // 802B4A74
L_802B4A78:;
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[29]=c->ps1[29]=RF32(ea);} // 802B4A78
L_802B4A7C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802B4A7C
  c->r[26]=0u+0x00000000u; // 802B4A80
  c->r[25]=0u+0x00000001u; // 802B4A84
  if (crb(c,2)) { goto L_802B4A94; } // 802B4A88
  c->r[26]=c->r[3]|c->r[3]; // 802B4A8C
  c->r[25]=0u+0xFFFFFFFFu; // 802B4A90
L_802B4A94:;
  c->r[12]=c->r[14]|c->r[14]; // 802B4A94
  c->r[3]=c->r[29]|c->r[29]; // 802B4A98
  c->r[24]=0u+0x00000000u; // 802B4A9C
  c->r[23]=0u+0x00000000u; // 802B4AA0
  c->ctr=c->r[12]; // 802B4AA4
  if (true) { c->lr=0x802B4AACu; dispatch(c,c->ctr); } // 802B4AA8
  c->r[0]=c->r[26]^0x80000000u; // 802B4AAC
  c->r[14]=c->r[3]|c->r[3]; // 802B4AB0
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802B4AB4
  c->f[1]=c->f[31]; // 802B4AB8
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[3]=RF64(ea);} // 802B4ABC
  c->f[2]=c->f[30]; // 802B4AC0
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=RF64(ea);} // 802B4AC4
  c->r[3]=c->r[19]|c->r[19]; // 802B4AC8
  c->r[5]=c->r[20]|c->r[20]; // 802B4ACC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802B4AD0
  c->r[6]=c->r[22]|c->r[22]; // 802B4AD4
  c->r[7]=c->r[14]|c->r[14]; // 802B4AD8
  c->r[8]=c->r[28]|c->r[28]; // 802B4ADC
  c->r[4]=c->r[1]+0x00000070u; // 802B4AE0
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[0]); // 802B4AE4
  c->lr=0x802B4AECu; f_802B23A0(c); // 802B4AE8
  cmps(c,0,(int32_t)c->r[30],0); // 802B4AEC
  c->r[26]=c->r[26]+c->r[25]; // 802B4AF0
  if (!crb(c,2)) { goto L_802B4BD0; } // 802B4AF4
  c->r[0]=c->r[26]^0x80000000u; // 802B4AF8
  c->r[6]=c->r[1]+0x00000070u; // 802B4AFC
  W32(c->r[1]+0x000000ECu,c->r[0]); // 802B4B00
  c->r[3]=c->r[19]|c->r[19]; // 802B4B04
  c->r[5]=R32(c->r[1]+0x00000070u); // 802B4B08
  c->r[4]=c->r[21]|c->r[21]; // 802B4B0C
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B4B10
  c->r[7]=c->r[6]|c->r[6]; // 802B4B14
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=RF64(ea);} // 802B4B18
  c->r[9]=c->r[22]|c->r[22]; // 802B4B1C
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B4B20
  c->r[26]=c->r[26]+c->r[25]; // 802B4B24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B4B28
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,1,ea,0,0);} // 802B4B2C
  c->r[10]=R32(c->r[1]+0x00000074u); // 802B4B30
  c->r[8]=c->r[1]+0x00000098u; // 802B4B34
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 802B4B38
  {uint32_t ea=c->r[6]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B4B3C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 802B4B40
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,1,ea,1,0);} // 802B4B44
  c->r[15]=R32(c->r[1]+0x00000078u); // 802B4B48
  c->r[23]=0u+0x00000001u; // 802B4B4C
  c->r[16]=R32(c->r[1]+0x0000007Cu); // 802B4B50
  c->r[17]=R32(c->r[1]+0x00000080u); // 802B4B54
  c->r[18]=R32(c->r[1]+0x00000084u); // 802B4B58
  c->r[12]=R32(c->r[1]+0x00000088u); // 802B4B5C
  c->r[11]=R32(c->r[1]+0x0000008Cu); // 802B4B60
  c->r[0]=R32(c->r[1]+0x00000090u); // 802B4B64
  {uint32_t ea=c->r[6]+0x00000000u; psq_store(c,3,ea,0,0);} // 802B4B68
  {double t0=S(c->f[2]+c->f[1]), t1=S(c->ps1[2]+c->ps1[1]); c->f[3]=t0; c->ps1[3]=t1;} // 802B4B6C
  W32(c->r[1]+0x00000098u,c->r[5]); // 802B4B70
  W32(c->r[1]+0x0000009Cu,c->r[10]); // 802B4B74
  W32(c->r[1]+0x000000A0u,c->r[15]); // 802B4B78
  W32(c->r[1]+0x000000A4u,c->r[16]); // 802B4B7C
  W32(c->r[1]+0x000000A8u,c->r[17]); // 802B4B80
  W32(c->r[1]+0x000000ACu,c->r[18]); // 802B4B84
  W32(c->r[1]+0x000000B0u,c->r[12]); // 802B4B88
  W32(c->r[1]+0x000000B4u,c->r[11]); // 802B4B8C
  W32(c->r[1]+0x000000B8u,c->r[0]); // 802B4B90
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 802B4B94
  {uint32_t ea=c->r[6]+0x00000008u; psq_store(c,3,ea,1,0);} // 802B4B98
  W32(c->r[1]+0x00000048u,c->r[5]); // 802B4B9C
  c->r[5]=R8(c->r[31]+0x0000014Cu); // 802B4BA0
  W32(c->r[1]+0x0000004Cu,c->r[10]); // 802B4BA4
  c->r[10]=R32(c->r[20]+0x000000D4u); // 802B4BA8
  W32(c->r[1]+0x00000050u,c->r[15]); // 802B4BAC
  W32(c->r[1]+0x00000054u,c->r[16]); // 802B4BB0
  W32(c->r[1]+0x00000058u,c->r[17]); // 802B4BB4
  W32(c->r[1]+0x0000005Cu,c->r[18]); // 802B4BB8
  W32(c->r[1]+0x00000060u,c->r[12]); // 802B4BBC
  W32(c->r[1]+0x00000064u,c->r[11]); // 802B4BC0
  W32(c->r[1]+0x00000068u,c->r[0]); // 802B4BC4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 802B4BC8
  c->lr=0x802B4BD0u; f_802B2C7C(c); // 802B4BCC
L_802B4BD0:;
  c->r[12]=c->r[27]|c->r[27]; // 802B4BD0
  c->r[3]=c->r[29]|c->r[29]; // 802B4BD4
  c->r[4]=c->r[14]|c->r[14]; // 802B4BD8
  c->ctr=c->r[12]; // 802B4BDC
  if (true) { c->lr=0x802B4BE4u; dispatch(c,c->ctr); } // 802B4BE0
  c->r[4]=0u+0x55550000u; // 802B4BE4
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[28]=RF64(ea);} // 802B4BE8
  c->r[16]=c->r[3]|c->r[3]; // 802B4BEC
  c->r[14]=c->r[4]+0x00005556u; // 802B4BF0
  goto L_802B4CAC; // 802B4BF4
L_802B4BF8:;
  c->r[4]=c->r[23]+0x00000001u; // 802B4BF8
  c->r[0]=c->r[26]^0x80000000u; // 802B4BFC
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[14]*(int64_t)(int32_t)c->r[4])>>32); // 802B4C00
  W32(c->r[1]+0x000000F4u,c->r[0]); // 802B4C04
  c->r[17]=c->r[24]|c->r[24]; // 802B4C08
  c->f[1]=c->f[31]; // 802B4C0C
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[0]=RF64(ea);} // 802B4C10
  c->r[24]=c->r[23]|c->r[23]; // 802B4C14
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802B4C18
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[28]); // 802B4C1C
  c->r[0]=c->r[3]+c->r[0]; // 802B4C20
  c->f[2]=c->f[30]; // 802B4C24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B4C28
  c->r[15]=c->r[1]+0x00000070u; // 802B4C2C
  c->f[3]=c->ps1[3]=S(c->f[29]*c->f[0]); // 802B4C30
  c->r[3]=c->r[19]|c->r[19]; // 802B4C34
  c->r[23]=c->r[4]-c->r[0]; // 802B4C38
  c->r[5]=c->r[20]|c->r[20]; // 802B4C3C
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)40); // 802B4C40
  c->r[6]=c->r[22]|c->r[22]; // 802B4C44
  c->r[7]=c->r[16]|c->r[16]; // 802B4C48
  c->r[8]=c->r[28]|c->r[28]; // 802B4C4C
  c->r[15]=c->r[15]+c->r[0]; // 802B4C50
  c->r[4]=c->r[15]|c->r[15]; // 802B4C54
  c->lr=0x802B4C5Cu; f_802B23A0(c); // 802B4C58
  c->r[11]=(uint32_t)((int32_t)c->r[17]*(int32_t)40); // 802B4C5C
  c->r[6]=c->r[1]+0x00000070u; // 802B4C60
  c->r[5]=R8(c->r[31]+0x0000014Cu); // 802B4C64
  c->r[3]=c->r[19]|c->r[19]; // 802B4C68
  c->r[7]=c->r[6]|c->r[6]; // 802B4C6C
  c->r[10]=R32(c->r[20]+0x000000D4u); // 802B4C70
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)40); // 802B4C74
  c->r[4]=c->r[21]|c->r[21]; // 802B4C78
  c->r[8]=c->r[15]|c->r[15]; // 802B4C7C
  c->r[9]=c->r[22]|c->r[22]; // 802B4C80
  c->r[6]=c->r[6]+c->r[11]; // 802B4C84
  c->r[7]=c->r[7]+c->r[0]; // 802B4C88
  c->lr=0x802B4C90u; f_802B2C7C(c); // 802B4C8C
  c->r[12]=c->r[27]|c->r[27]; // 802B4C90
  c->r[3]=c->r[29]|c->r[29]; // 802B4C94
  c->r[4]=c->r[16]|c->r[16]; // 802B4C98
  c->ctr=c->r[12]; // 802B4C9C
  if (true) { c->lr=0x802B4CA4u; dispatch(c,c->ctr); } // 802B4CA0
  c->r[16]=c->r[3]|c->r[3]; // 802B4CA4
  c->r[26]=c->r[26]+c->r[25]; // 802B4CA8
L_802B4CAC:;
  cmps(c,0,(int32_t)c->r[16],0); // 802B4CAC
  if (!crb(c,2)) { IRQCHK(c); goto L_802B4BF8; } // 802B4CB0
  cmps(c,0,(int32_t)c->r[30],0); // 802B4CB4
  if (crb(c,2)) { goto L_802B4DE4; } // 802B4CB8
  c->r[4]=0u+0x55550000u; // 802B4CBC
  c->r[3]=c->r[24]|c->r[24]; // 802B4CC0
  c->r[5]=c->r[23]+0x00000001u; // 802B4CC4
  c->r[24]=c->r[23]|c->r[23]; // 802B4CC8
  c->r[4]=c->r[4]+0x00005556u; // 802B4CCC
  c->r[0]=c->r[26]^0x80000000u; // 802B4CD0
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[5])>>32); // 802B4CD4
  W32(c->r[1]+0x000000ECu,c->r[0]); // 802B4CD8
  c->r[7]=c->r[1]+0x00000070u; // 802B4CDC
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,0,0);} // 802B4CE0
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[1]=RF64(ea);} // 802B4CE4
  c->r[14]=c->r[1]+0x0000007Cu; // 802B4CE8
  c->r[8]=(uint32_t)((int32_t)c->r[24]*(int32_t)40); // 802B4CEC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 802B4CF0
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=RF64(ea);} // 802B4CF4
  c->r[6]=c->r[1]+0x00000088u; // 802B4CF8
  c->r[0]=c->r[4]+c->r[0]; // 802B4CFC
  c->r[7]=c->r[7]+c->r[8]; // 802B4D00
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802B4D04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B4D08
  c->r[4]=c->r[6]+c->r[8]; // 802B4D0C
  {uint32_t ea=c->r[7]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B4D10
  c->r[9]=c->r[14]+c->r[8]; // 802B4D14
  c->r[26]=R32(c->r[4]+0x00000000u); // 802B4D18
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802B4D1C
  c->r[23]=c->r[5]-c->r[0]; // 802B4D20
  c->r[10]=(uint32_t)((int32_t)c->r[23]*(int32_t)40); // 802B4D24
  c->r[12]=R32(c->r[9]+0x00000000u); // 802B4D28
  c->r[11]=R32(c->r[9]+0x00000004u); // 802B4D2C
  c->r[8]=c->r[1]+0x00000070u; // 802B4D30
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,0,0);} // 802B4D34
  c->r[17]=c->r[14]+c->r[10]; // 802B4D38
  c->r[0]=R32(c->r[9]+0x00000008u); // 802B4D3C
  c->r[14]=(uint32_t)((int32_t)c->r[3]*(int32_t)40); // 802B4D40
  c->r[5]=R32(c->r[1]+0x00000008u); // 802B4D44
  c->r[16]=c->r[6]+c->r[10]; // 802B4D48
  c->r[25]=R32(c->r[4]+0x00000004u); // 802B4D4C
  c->r[6]=c->r[1]+0x00000070u; // 802B4D50
  c->r[18]=R32(c->r[4]+0x00000008u); // 802B4D54
  {uint32_t ea=c->r[7]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B4D58
  c->r[6]=c->r[6]+c->r[14]; // 802B4D5C
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,3,ea,1,0);} // 802B4D60
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 802B4D64
  c->r[27]=R32(c->r[1]+0x0000000Cu); // 802B4D68
  c->r[15]=c->r[1]+0x00000094u; // 802B4D6C
  {double t0=S(c->f[2]+c->f[3]), t1=S(c->ps1[2]+c->ps1[3]); c->f[1]=t0; c->ps1[1]=t1;} // 802B4D70
  {uint32_t ea=c->r[8]+c->r[10]; W32(ea,c->r[5]); c->r[8]=ea;} // 802B4D74
  c->r[3]=c->r[19]|c->r[19]; // 802B4D78
  W32(c->r[8]+0x00000004u,c->r[27]); // 802B4D7C
  c->r[4]=c->r[21]|c->r[21]; // 802B4D80
  c->r[9]=c->r[22]|c->r[22]; // 802B4D84
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,1,ea,1,0);} // 802B4D88
  c->r[14]=R32(c->r[1]+0x00000010u); // 802B4D8C
  W32(c->r[1]+0x00000020u,c->r[5]); // 802B4D90
  W32(c->r[8]+0x00000008u,c->r[14]); // 802B4D94
  W32(c->r[17]+0x00000000u,c->r[12]); // 802B4D98
  W32(c->r[17]+0x00000004u,c->r[11]); // 802B4D9C
  W32(c->r[17]+0x00000008u,c->r[0]); // 802B4DA0
  W32(c->r[16]+0x00000000u,c->r[26]); // 802B4DA4
  W32(c->r[16]+0x00000004u,c->r[25]); // 802B4DA8
  W32(c->r[16]+0x00000008u,c->r[18]); // 802B4DAC
  {uint32_t ea=c->r[15]+c->r[10]; WF32(ea,c->f[0]);} // 802B4DB0
  W32(c->r[1]+0x00000024u,c->r[27]); // 802B4DB4
  c->r[5]=R8(c->r[31]+0x0000014Cu); // 802B4DB8
  W32(c->r[1]+0x00000028u,c->r[14]); // 802B4DBC
  c->r[10]=R32(c->r[20]+0x000000D4u); // 802B4DC0
  W32(c->r[1]+0x0000002Cu,c->r[12]); // 802B4DC4
  W32(c->r[1]+0x00000030u,c->r[11]); // 802B4DC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802B4DCC
  W32(c->r[1]+0x00000038u,c->r[26]); // 802B4DD0
  W32(c->r[1]+0x0000003Cu,c->r[25]); // 802B4DD4
  W32(c->r[1]+0x00000040u,c->r[18]); // 802B4DD8
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 802B4DDC
  c->lr=0x802B4DE4u; f_802B2C7C(c); // 802B4DE0
L_802B4DE4:;
  c->r[0]=(uint32_t)((int32_t)c->r[23]*(int32_t)40); // 802B4DE4
  c->r[7]=c->r[1]+0x00000070u; // 802B4DE8
  c->r[5]=R8(c->r[31]+0x0000014Cu); // 802B4DEC
  c->r[3]=c->r[19]|c->r[19]; // 802B4DF0
  c->r[6]=c->r[7]|c->r[7]; // 802B4DF4
  c->r[10]=R32(c->r[20]+0x000000D4u); // 802B4DF8
  c->r[7]=c->r[7]+c->r[0]; // 802B4DFC
  c->r[4]=c->r[21]|c->r[21]; // 802B4E00
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)40); // 802B4E04
  c->r[9]=c->r[22]|c->r[22]; // 802B4E08
  c->r[8]=c->r[7]|c->r[7]; // 802B4E0C
  c->r[6]=c->r[6]+c->r[0]; // 802B4E10
  c->lr=0x802B4E18u; f_802B2C7C(c); // 802B4E14
  {uint32_t ea=c->r[1]+0x00000178u; psq_load(c,31,ea,0,0);} // 802B4E18
  {uint32_t ea=c->r[1]+0x00000170u; c->f[31]=RF64(ea);} // 802B4E1C
  {uint32_t ea=c->r[1]+0x00000168u; psq_load(c,30,ea,0,0);} // 802B4E20
  {uint32_t ea=c->r[1]+0x00000160u; c->f[30]=RF64(ea);} // 802B4E24
  {uint32_t ea=c->r[1]+0x00000158u; psq_load(c,29,ea,0,0);} // 802B4E28
  {uint32_t ea=c->r[1]+0x00000150u; c->f[29]=RF64(ea);} // 802B4E2C
  {uint32_t ea=c->r[1]+0x00000148u; psq_load(c,28,ea,0,0);} // 802B4E30
  c->r[11]=c->r[1]+0x00000140u; // 802B4E34
  {uint32_t ea=c->r[1]+0x00000140u; c->f[28]=RF64(ea);} // 802B4E38
  c->lr=0x802B4E40u; f_802F0DE0(c); // 802B4E3C
  c->r[0]=R32(c->r[1]+0x00000184u); // 802B4E40
  c->lr=c->r[0]; // 802B4E44
  c->r[1]=c->r[1]+0x00000180u; // 802B4E48
  return; // 802B4E4C
}

// DrawSmoothStripeTube__Q34nw4r2ef24DrawSmoothStripeStrategyFPQ44nw4r2ef24DrawSmoothStripeStrategy18AheadContextStripeii
void f_802B4E50(Ctx* __restrict c) {
  trace_call(0x802B4E50u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B4E50
  c->r[0]=c->lr; // 802B4E54
  W32(c->r[1]+0x00000074u,c->r[0]); // 802B4E58
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802B4E5C
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802B4E60
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802B4E64
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802B4E68
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802B4E6C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802B4E70
  c->r[11]=c->r[1]+0x00000040u; // 802B4E74
  c->lr=0x802B4E7Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B4E78
  c->r[31]=c->r[1]|c->r[1]; // 802B4E7C
  c->r[7]=R32(c->r[4]+0x00000000u); // 802B4E80
  c->r[27]=c->r[3]|c->r[3]; // 802B4E84
  c->r[28]=c->r[4]|c->r[4]; // 802B4E88
  c->r[29]=c->r[5]|c->r[5]; // 802B4E8C
  c->r[25]=R32(c->r[7]+0x00000024u); // 802B4E90
  c->r[30]=c->r[6]|c->r[6]; // 802B4E94
  c->r[24]=R8(c->r[25]+0x0000014Cu); // 802B4E98
  cmps(c,0,(int32_t)c->r[24],3); // 802B4E9C
  if (crb(c,0)) { goto L_802B5030; } // 802B4EA0
  c->r[3]=c->r[24]+0x00000001u; // 802B4EA4
  c->r[0]=R32(c->r[1]+0x00000000u); // 802B4EA8
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 802B4EAC
  c->r[22]=0u-c->r[3]; // 802B4EB0
  c->r[22]=rotl(c->r[22],0)&0xFFFFFFF8u; // 802B4EB4
  {uint32_t ea=c->r[1]+c->r[22]; W32(ea,c->r[0]); c->r[1]=ea;} // 802B4EB8
  c->r[22]=addc(c,c->r[1],0x00000008u,0); cr0(c,c->r[22]); // 802B4EBC
  if (crb(c,2)) { goto L_802B5030; } // 802B4EC0
  c->r[0]=c->r[24]^0x80000000u; // 802B4EC4
  c->r[26]=0u+0x43300000u; // 802B4EC8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802B4ECC
  c->r[23]=c->r[22]+0x00000008u; // 802B4ED0
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B4ED4
  c->r[21]=0u+0x00000001u; // 802B4ED8
  W32(c->r[31]+0x00000008u,c->r[26]); // 802B4EDC
  {uint32_t ea=c->r[2]+0xFFFFAA80u; c->f[30]=RF64(ea);} // 802B4EE0
  {uint32_t ea=c->r[31]+0x00000008u; c->f[2]=RF64(ea);} // 802B4EE4
  {uint32_t ea=c->r[2]+0xFFFFAA8Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B4EE8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 802B4EEC
  {uint32_t ea=c->r[22]+0x00000000u; WF32(ea,c->f[0]);} // 802B4EF0
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B4EF4
  {uint32_t ea=c->r[2]+0xFFFFAA90u; c->f[31]=c->ps1[31]=RF32(ea);} // 802B4EF8
  c->f[29]=c->ps1[29]=S(c->f[1]/c->f[2]); // 802B4EFC
  {uint32_t ea=c->r[22]+0x00000004u; WF32(ea,c->f[0]);} // 802B4F00
  goto L_802B4F38; // 802B4F04
L_802B4F08:;
  c->r[0]=c->r[21]^0x80000000u; // 802B4F08
  W32(c->r[31]+0x00000008u,c->r[26]); // 802B4F0C
  c->r[4]=c->r[23]|c->r[23]; // 802B4F10
  c->r[3]=c->r[23]+0x00000004u; // 802B4F14
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 802B4F18
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=RF64(ea);} // 802B4F1C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 802B4F20
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[0]); // 802B4F24
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 802B4F28
  c->lr=0x802B4F30u; f_8026C998(c); // 802B4F2C
  c->r[23]=c->r[23]+0x00000008u; // 802B4F30
  c->r[21]=c->r[21]+0x00000001u; // 802B4F34
L_802B4F38:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[24]); // 802B4F38
  if (crb(c,0)) { IRQCHK(c); goto L_802B4F08; } // 802B4F3C
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B4F40
  c->r[0]=rotl(c->r[24],3)&0xFFFFFFF8u; // 802B4F44
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B4F48
  c->r[3]=c->r[22]+c->r[0]; // 802B4F4C
  {uint32_t ea=c->r[22]+c->r[0]; WF32(ea,c->f[1]);} // 802B4F50
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802B4F54
  W32(c->r[28]+0x000000D4u,c->r[22]); // 802B4F58
  c->r[0]=R8(c->r[25]+0x0000014Eu); // 802B4F5C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 802B4F60
  cmps(c,0,(int32_t)c->r[0],1); // 802B4F64
  if (crb(c,2)) { goto L_802B4FBC; } // 802B4F68
  if (!crb(c,0)) { goto L_802B4F74; } // 802B4F6C
  goto L_802B4F80; // 802B4F70
L_802B4F74:;
  cmps(c,0,(int32_t)c->r[0],3); // 802B4F74
  if (!crb(c,0)) { goto L_802B4F80; } // 802B4F78
  goto L_802B4FF8; // 802B4F7C
L_802B4F80:;
  c->r[3]=0u+0x00000001u; // 802B4F80
  c->lr=0x802B4F88u; f_80345C78(c); // 802B4F84
  c->r[3]=c->r[27]|c->r[27]; // 802B4F88
  c->r[4]=c->r[28]|c->r[28]; // 802B4F8C
  c->r[5]=c->r[29]|c->r[29]; // 802B4F90
  c->r[6]=c->r[30]|c->r[30]; // 802B4F94
  c->lr=0x802B4F9Cu; f_802B423C(c); // 802B4F98
  c->r[3]=0u+0x00000002u; // 802B4F9C
  c->lr=0x802B4FA4u; f_80345C78(c); // 802B4FA0
  c->r[3]=c->r[27]|c->r[27]; // 802B4FA4
  c->r[4]=c->r[28]|c->r[28]; // 802B4FA8
  c->r[5]=c->r[29]|c->r[29]; // 802B4FAC
  c->r[6]=c->r[30]|c->r[30]; // 802B4FB0
  c->lr=0x802B4FB8u; f_802B423C(c); // 802B4FB4
  goto L_802B5030; // 802B4FB8
L_802B4FBC:;
  c->r[3]=0u+0x00000001u; // 802B4FBC
  c->lr=0x802B4FC4u; f_80345C78(c); // 802B4FC0
  c->r[3]=c->r[27]|c->r[27]; // 802B4FC4
  c->r[4]=c->r[28]|c->r[28]; // 802B4FC8
  c->r[5]=c->r[29]|c->r[29]; // 802B4FCC
  c->r[6]=c->r[30]|c->r[30]; // 802B4FD0
  c->lr=0x802B4FD8u; f_802B4534(c); // 802B4FD4
  c->r[3]=0u+0x00000002u; // 802B4FD8
  c->lr=0x802B4FE0u; f_80345C78(c); // 802B4FDC
  c->r[3]=c->r[27]|c->r[27]; // 802B4FE0
  c->r[4]=c->r[28]|c->r[28]; // 802B4FE4
  c->r[5]=c->r[29]|c->r[29]; // 802B4FE8
  c->r[6]=c->r[30]|c->r[30]; // 802B4FEC
  c->lr=0x802B4FF4u; f_802B4534(c); // 802B4FF0
  goto L_802B5030; // 802B4FF4
L_802B4FF8:;
  c->r[3]=0u+0x00000001u; // 802B4FF8
  c->lr=0x802B5000u; f_80345C78(c); // 802B4FFC
  c->r[3]=c->r[27]|c->r[27]; // 802B5000
  c->r[4]=c->r[28]|c->r[28]; // 802B5004
  c->r[5]=c->r[29]|c->r[29]; // 802B5008
  c->r[6]=c->r[30]|c->r[30]; // 802B500C
  c->lr=0x802B5014u; f_802B48E8(c); // 802B5010
  c->r[3]=0u+0x00000002u; // 802B5014
  c->lr=0x802B501Cu; f_80345C78(c); // 802B5018
  c->r[3]=c->r[27]|c->r[27]; // 802B501C
  c->r[4]=c->r[28]|c->r[28]; // 802B5020
  c->r[5]=c->r[29]|c->r[29]; // 802B5024
  c->r[6]=c->r[30]|c->r[30]; // 802B5028
  c->lr=0x802B5030u; f_802B48E8(c); // 802B502C
L_802B5030:;
  c->r[10]=c->r[31]|c->r[31]; // 802B5030
  {uint32_t ea=c->r[10]+0x00000068u; psq_load(c,31,ea,0,0);} // 802B5034
  {uint32_t ea=c->r[31]+0x00000060u; c->f[31]=RF64(ea);} // 802B5038
  {uint32_t ea=c->r[10]+0x00000058u; psq_load(c,30,ea,0,0);} // 802B503C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[30]=RF64(ea);} // 802B5040
  {uint32_t ea=c->r[10]+0x00000048u; psq_load(c,29,ea,0,0);} // 802B5044
  c->r[11]=c->r[10]+0x00000040u; // 802B5048
  {uint32_t ea=c->r[31]+0x00000040u; c->f[29]=RF64(ea);} // 802B504C
  c->lr=0x802B5054u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B5050
  c->r[10]=R32(c->r[1]+0x00000000u); // 802B5054
  c->r[0]=R32(c->r[10]+0x00000004u); // 802B5058
  c->r[1]=c->r[10]|c->r[10]; // 802B505C
  c->lr=c->r[0]; // 802B5060
  return; // 802B5064
}

// fn_802B5068
void f_802B5068(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD80u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B5068
  c->r[0]=c->lr; // 802B506C
  W32(c->r[1]+0x00000284u,c->r[0]); // 802B5070
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[31]);} // 802B5074
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,31,ea,0,0);} // 802B5078
  c->r[11]=c->r[1]+0x00000270u; // 802B507C
  c->lr=0x802B5084u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B5080
  c->r[29]=R16(c->r[5]+0x00000050u); // 802B5084
  c->r[31]=0u+0x80510000u; // 802B5088
  c->r[6]=R32(c->r[5]+0x00000024u); // 802B508C
  c->r[25]=c->r[3]|c->r[3]; // 802B5090
  cmps(c,0,(int32_t)c->r[29],0); // 802B5094
  c->r[26]=c->r[4]|c->r[4]; // 802B5098
  c->r[27]=c->r[5]|c->r[5]; // 802B509C
  c->r[31]=c->r[31]+0xFFFFE358u; // 802B50A0
  c->r[30]=c->r[6]+0x0000009Cu; // 802B50A4
  if (crb(c,2)) { goto L_802B5A18; } // 802B50A8
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B50AC
  {uint32_t ea=c->r[4]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B50B0
  c->r[24]=R32(c->r[4]+0x00000000u); // 802B50B4
  c->r[28]=R32(c->r[4]+0x00000004u); // 802B50B8
  fcmp(c,0,c->f[1],c->f[0]); // 802B50BC
  c->r[12]=R32(c->r[4]+0x00000008u); // 802B50C0
  c->r[11]=R32(c->r[4]+0x0000000Cu); // 802B50C4
  c->r[10]=R32(c->r[4]+0x00000010u); // 802B50C8
  c->r[9]=R32(c->r[4]+0x00000014u); // 802B50CC
  c->r[8]=R32(c->r[4]+0x00000018u); // 802B50D0
  c->r[7]=R32(c->r[4]+0x0000001Cu); // 802B50D4
  c->r[6]=R32(c->r[4]+0x00000020u); // 802B50D8
  c->r[5]=R32(c->r[4]+0x00000024u); // 802B50DC
  c->r[3]=R32(c->r[4]+0x00000028u); // 802B50E0
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 802B50E4
  W32(c->r[1]+0x00000140u,c->r[24]); // 802B50E8
  W32(c->r[1]+0x00000144u,c->r[28]); // 802B50EC
  W32(c->r[1]+0x00000148u,c->r[12]); // 802B50F0
  W32(c->r[1]+0x0000014Cu,c->r[11]); // 802B50F4
  W32(c->r[1]+0x00000150u,c->r[10]); // 802B50F8
  W32(c->r[1]+0x00000154u,c->r[9]); // 802B50FC
  W32(c->r[1]+0x00000158u,c->r[8]); // 802B5100
  W32(c->r[1]+0x0000015Cu,c->r[7]); // 802B5104
  W32(c->r[1]+0x00000160u,c->r[6]); // 802B5108
  W32(c->r[1]+0x00000164u,c->r[5]); // 802B510C
  W32(c->r[1]+0x00000168u,c->r[3]); // 802B5110
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 802B5114
  if (crb(c,2)) { goto L_802B5228; } // 802B5118
  c->r[3]=c->r[1]+0x00000090u; // 802B511C
  c->lr=0x802B5124u; f_80349298(c); // 802B5120
  {uint32_t ea=c->r[1]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5124
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802B5128
  {uint32_t ea=c->r[1]+0x00000248u; WF64(ea,c->f[0]);} // 802B512C
  c->r[0]=R32(c->r[1]+0x0000024Cu); // 802B5130
  cmps(c,0,(int32_t)c->r[0],1); // 802B5134
  if (crb(c,2)) { goto L_802B5218; } // 802B5138
  if (!crb(c,0)) { goto L_802B5228; } // 802B513C
  cmps(c,0,(int32_t)c->r[0],0); // 802B5140
  if (!crb(c,0)) { goto L_802B514C; } // 802B5144
  goto L_802B5228; // 802B5148
L_802B514C:;
  c->r[3]=c->r[26]|c->r[26]; // 802B514C
  c->r[4]=c->r[26]+0x0000008Cu; // 802B5150
  c->r[5]=c->r[1]+0x00000038u; // 802B5154
  c->lr=0x802B515Cu; f_803541AC(c); // 802B5158
  c->r[3]=c->r[1]+0x00000038u; // 802B515C
  c->r[4]=c->r[3]|c->r[3]; // 802B5160
  c->lr=0x802B5168u; f_802A2D48(c); // 802B5164
  cmps(c,0,(int32_t)c->r[3],0); // 802B5168
  if (crb(c,2)) { goto L_802B5204; } // 802B516C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5170
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5174
  fcmp(c,0,c->f[1],c->f[0]); // 802B5178
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802B517C
  if (!crb(c,2)) { goto L_802B51C4; } // 802B5180
  {uint32_t ea=c->r[26]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 802B5184
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 802B5188
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B518C
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 802B5190
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[3]); // 802B5194
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5198
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 802B519C
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802B51A0
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B51A4
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 802B51A8
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802B51AC
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802B51B0
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[4]);} // 802B51B4
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[2]);} // 802B51B8
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 802B51BC
  goto L_802B5228; // 802B51C0
L_802B51C4:;
  {uint32_t ea=c->r[26]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 802B51C4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[4]=c->ps1[4]=RF32(ea);} // 802B51C8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B51CC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 802B51D0
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[3]); // 802B51D4
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B51D8
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 802B51DC
  {uint32_t ea=c->r[1]+0x0000014Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802B51E0
  {uint32_t ea=c->r[1]+0x0000015Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B51E4
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 802B51E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802B51EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B51F0
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[4]);} // 802B51F4
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[2]);} // 802B51F8
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 802B51FC
  goto L_802B5228; // 802B5200
L_802B5204:;
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5204
  {uint32_t ea=c->r[26]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5208
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802B520C
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 802B5210
  goto L_802B5228; // 802B5214
L_802B5218:;
  {uint32_t ea=c->r[1]+0x0000016Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5218
  {uint32_t ea=c->r[26]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B521C
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802B5220
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 802B5224
L_802B5228:;
  c->r[5]=c->r[27]|c->r[27]; // 802B5228
  c->r[3]=c->r[1]+0x00000170u; // 802B522C
  c->r[4]=c->r[1]+0x00000140u; // 802B5230
  c->lr=0x802B5238u; f_802A96D4(c); // 802B5234
  {uint32_t ea=c->r[1]+0x00000198u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5238
  c->r[3]=c->r[1]+0x0000022Cu; // 802B523C
  {uint32_t ea=c->r[1]+0x00000188u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5240
  c->r[4]=c->r[1]+0x000001D8u; // 802B5244
  {uint32_t ea=c->r[1]+0x00000178u; c->f[2]=c->ps1[2]=RF32(ea);} // 802B5248
  c->r[5]=c->r[1]+0x0000002Cu; // 802B524C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[1]);} // 802B5250
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 802B5254
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802B5258
  c->lr=0x802B5260u; f_8026CFE0(c); // 802B525C
  c->r[4]=c->r[25]|c->r[25]; // 802B5260
  c->r[5]=c->r[30]|c->r[30]; // 802B5264
  c->r[3]=c->r[1]+0x00000068u; // 802B5268
  c->r[6]=c->r[1]+0x00000170u; // 802B526C
  c->lr=0x802B5274u; f_802B5A38(c); // 802B5270
  c->r[3]=R32(c->r[27]+0x0000003Cu); // 802B5274
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5278
  goto L_802B52B0; // 802B527C
L_802B5280:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5280
  fcmp(c,0,c->f[0],c->f[1]); // 802B5284
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802B5288
  if (crb(c,2)) { goto L_802B52B8; } // 802B528C
  {uint32_t ea=c->r[1]+0x00000068u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5290
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 802B5294
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5298
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 802B529C
  {uint32_t ea=c->r[1]+0x00000070u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B52A0
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 802B52A4
  c->r[0]=R16(c->r[27]+0x00000042u); // 802B52A8
  c->r[3]=R32(c->r[3]+c->r[0]); // 802B52AC
L_802B52B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B52B0
  if (!crb(c,2)) { IRQCHK(c); goto L_802B5280; } // 802B52B4
L_802B52B8:;
  c->r[3]=R8(c->r[30]+0x000000ADu); // 802B52B8
  c->r[0]=R8(c->r[30]+0x000000B2u); // 802B52BC
  c->r[5]=R16(c->r[30]+0x00000000u); // 802B52C0
  c->r[4]=c->r[3]+0xFFFFFFFEu; // 802B52C4
  c->r[6]=rotl(c->r[0],0)&0x00000007u; // 802B52C8
  c->r[3]=addc(c,~c->r[3],0x00000002u,1); // 802B52CC
  c->r[0]=~(c->r[4]|c->r[3]); // 802B52D0
  c->r[24]=rotl(c->r[5],0)&0x00000800u; // 802B52D4
  c->r[3]=rotl(c->r[5],21)&0x00000001u; // 802B52D8
  cmps(c,0,(int32_t)c->r[6],1); // 802B52DC
  c->r[0]=sraw(c,c->r[0],31); // 802B52E0
  c->r[3]=0u-c->r[3]; // 802B52E4
  c->r[28]=rotl(c->r[0],0)&0x00000002u; // 802B52E8
  c->r[28]=(rotl(c->r[3],0)&0x00000004u)|(c->r[28]&~0x00000004u); // 802B52EC
  if (!crb(c,2)) { goto L_802B52FC; } // 802B52F0
  cmps(c,0,(int32_t)c->r[29],3); // 802B52F4
  if (crb(c,0)) { goto L_802B530C; } // 802B52F8
L_802B52FC:;
  cmps(c,0,(int32_t)c->r[6],0); // 802B52FC
  if (!crb(c,2)) { goto L_802B5518; } // 802B5300
  cmps(c,0,(int32_t)c->r[29],2); // 802B5304
  if (!crb(c,0)) { goto L_802B5518; } // 802B5308
L_802B530C:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 802B530C
  c->r[3]=c->r[25]|c->r[25]; // 802B5310
  c->r[4]=c->r[27]|c->r[27]; // 802B5314
  c->r[12]=R32(c->r[12]+0x00000018u); // 802B5318
  c->ctr=c->r[12]; // 802B531C
  if (true) { c->lr=0x802B5324u; dispatch(c,c->ctr); } // 802B5320
  c->r[12]=R32(c->r[25]+0x00000000u); // 802B5324
  c->r[26]=c->r[3]|c->r[3]; // 802B5328
  c->r[3]=c->r[25]|c->r[25]; // 802B532C
  c->r[4]=c->r[24]|c->r[24]; // 802B5330
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B5334
  c->ctr=c->r[12]; // 802B5338
  if (true) { c->lr=0x802B5340u; dispatch(c,c->ctr); } // 802B533C
  c->r[12]=R32(c->r[25]+0x00000000u); // 802B5340
  c->r[29]=c->r[3]|c->r[3]; // 802B5344
  c->r[3]=c->r[25]|c->r[25]; // 802B5348
  c->r[4]=c->r[24]|c->r[24]; // 802B534C
  c->r[12]=R32(c->r[12]+0x00000014u); // 802B5350
  c->ctr=c->r[12]; // 802B5354
  if (true) { c->lr=0x802B535Cu; dispatch(c,c->ctr); } // 802B5358
  c->r[12]=c->r[29]|c->r[29]; // 802B535C
  c->r[29]=c->r[3]|c->r[3]; // 802B5360
  c->r[3]=c->r[27]|c->r[27]; // 802B5364
  c->ctr=c->r[12]; // 802B5368
  if (true) { c->lr=0x802B5370u; dispatch(c,c->ctr); } // 802B536C
  cmps(c,0,(int32_t)c->r[3],0); // 802B5370
  c->r[30]=c->r[3]|c->r[3]; // 802B5374
  if (crb(c,2)) { goto L_802B5A18; } // 802B5378
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[31]=c->ps1[31]=RF32(ea);} // 802B537C
  c->r[24]=c->r[1]+0x0000005Cu; // 802B5380
  c->r[25]=rotl(c->r[28],0)&0x00000002u; // 802B5384
  goto L_802B550C; // 802B5388
L_802B538C:;
  c->r[12]=c->r[26]|c->r[26]; // 802B538C
  c->r[5]=c->r[30]|c->r[30]; // 802B5390
  c->r[3]=c->r[1]+0x0000005Cu; // 802B5394
  c->r[4]=c->r[1]+0x00000170u; // 802B5398
  c->ctr=c->r[12]; // 802B539C
  if (true) { c->lr=0x802B53A4u; dispatch(c,c->ctr); } // 802B53A0
  cmps(c,0,(int32_t)c->r[25],0); // 802B53A4
  if (!crb(c,2)) { goto L_802B53C0; } // 802B53A8
  c->r[3]=c->r[24]|c->r[24]; // 802B53AC
  c->r[4]=c->r[30]+0x000000CCu; // 802B53B0
  c->r[5]=c->r[1]+0x00000014u; // 802B53B4
  c->lr=0x802B53BCu; f_803544EC(c); // 802B53B8
  goto L_802B53D0; // 802B53BC
L_802B53C0:;
  c->r[3]=c->r[24]|c->r[24]; // 802B53C0
  c->r[4]=c->r[1]+0x00000238u; // 802B53C4
  c->r[5]=c->r[1]+0x00000014u; // 802B53C8
  c->lr=0x802B53D0u; f_803544EC(c); // 802B53CC
L_802B53D0:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,1,ea,0,0);} // 802B53D0
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,1,0);} // 802B53D4
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B53D8
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 802B53DC
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B53E0
  fcmp(c,0,c->f[1],c->f[31]); // 802B53E4
  if (!crb(c,0)) { goto L_802B53F4; } // 802B53E8
  c->r[0]=0u+0x00000000u; // 802B53EC
  goto L_802B5414; // 802B53F0
L_802B53F4:;
  c->lr=0x802B53F8u; f_8026C8AC(c); // 802B53F4
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,0,ea,0,0);} // 802B53F8
  c->r[0]=0u+0x00000001u; // 802B53FC
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802B5400
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,0,ea,1,0);} // 802B5404
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,2,ea,0,0);} // 802B5408
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802B540C
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,2,ea,1,0);} // 802B5410
L_802B5414:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B5414
  if (!crb(c,2)) { goto L_802B5434; } // 802B5418
  {uint32_t ea=c->r[1]+0x0000022Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B541C
  {uint32_t ea=c->r[1]+0x00000230u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5420
  {uint32_t ea=c->r[1]+0x00000234u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5424
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 802B5428
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[1]);} // 802B542C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802B5430
L_802B5434:;
  c->r[4]=c->r[24]|c->r[24]; // 802B5434
  c->r[3]=c->r[1]+0x00000014u; // 802B5438
  c->r[5]=c->r[1]+0x00000020u; // 802B543C
  c->lr=0x802B5444u; f_803544EC(c); // 802B5440
  {uint32_t ea=c->r[1]+0x00000024u; psq_load(c,1,ea,0,0);} // 802B5444
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,0,ea,1,0);} // 802B5448
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B544C
  {double t0=S(std::fma(c->f[0],c->f[0],c->f[1])), t1=S(std::fma(c->ps1[0],c->ps1[0],c->ps1[1])); c->f[0]=t0; c->ps1[0]=t1;} // 802B5450
  {double t0=S(c->f[0]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5454
  fcmp(c,0,c->f[1],c->f[31]); // 802B5458
  if (crb(c,0)) { goto L_802B547C; } // 802B545C
  c->lr=0x802B5464u; f_8026C8AC(c); // 802B5460
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,0,ea,0,0);} // 802B5464
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802B5468
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,0,ea,1,0);} // 802B546C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,2,ea,0,0);} // 802B5470
  {double t0=S(c->f[0]*c->f[1]), t1=S(c->ps1[0]*c->f[1]); c->f[2]=t0; c->ps1[2]=t1;} // 802B5474
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,2,ea,1,0);} // 802B5478
L_802B547C:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B547C
  c->r[12]=c->r[29]|c->r[29]; // 802B5480
  c->r[3]=c->r[27]|c->r[27]; // 802B5484
  c->r[4]=c->r[30]|c->r[30]; // 802B5488
  {uint32_t ea=c->r[30]+0x000000CCu; WF32(ea,c->f[0]);} // 802B548C
  {uint32_t ea=c->r[1]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5490
  {uint32_t ea=c->r[30]+0x000000D0u; WF32(ea,c->f[0]);} // 802B5494
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5498
  {uint32_t ea=c->r[30]+0x000000D4u; WF32(ea,c->f[0]);} // 802B549C
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B54A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B54A4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 802B54A8
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 802B54AC
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[4]=c->ps1[4]=RF32(ea);} // 802B54B0
  {uint32_t ea=c->r[1]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 802B54B4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 802B54B8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=c->ps1[7]=RF32(ea);} // 802B54BC
  {uint32_t ea=c->r[30]+0x000000ACu; c->f[8]=c->ps1[8]=RF32(ea);} // 802B54C0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 802B54C4
  {uint32_t ea=c->r[1]+0x0000005Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 802B54C8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[11]=c->ps1[11]=RF32(ea);} // 802B54CC
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[10]);} // 802B54D0
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[11]);} // 802B54D4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[9]);} // 802B54D8
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[8]);} // 802B54DC
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[7]);} // 802B54E0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[6]);} // 802B54E4
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[5]);} // 802B54E8
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[4]);} // 802B54EC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[3]);} // 802B54F0
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[2]);} // 802B54F4
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 802B54F8
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 802B54FC
  c->ctr=c->r[12]; // 802B5500
  if (true) { c->lr=0x802B5508u; dispatch(c,c->ctr); } // 802B5504
  c->r[30]=c->r[3]|c->r[3]; // 802B5508
L_802B550C:;
  cmps(c,0,(int32_t)c->r[30],0); // 802B550C
  if (!crb(c,2)) { IRQCHK(c); goto L_802B538C; } // 802B5510
  goto L_802B5A18; // 802B5514
L_802B5518:;
  c->r[4]=R32(c->r[27]+0x00000024u); // 802B5518
  c->r[3]=c->r[25]|c->r[25]; // 802B551C
  c->r[24]=c->r[4]+0x0000009Cu; // 802B5520
  c->r[4]=c->r[24]|c->r[24]; // 802B5524
  c->lr=0x802B552Cu; f_802A7E98(c); // 802B5528
  c->r[3]=c->r[25]|c->r[25]; // 802B552C
  c->r[4]=c->r[24]|c->r[24]; // 802B5530
  c->r[5]=c->r[26]|c->r[26]; // 802B5534
  c->lr=0x802B553Cu; f_802A7F08(c); // 802B5538
  c->r[3]=c->r[25]|c->r[25]; // 802B553C
  c->r[4]=c->r[27]|c->r[27]; // 802B5540
  c->r[5]=c->r[24]|c->r[24]; // 802B5544
  c->r[6]=c->r[26]|c->r[26]; // 802B5548
  c->lr=0x802B5550u; f_802A81F4(c); // 802B554C
  c->r[3]=0u+0x00000000u; // 802B5550
  c->r[4]=0u+0x00000001u; // 802B5554
  c->r[5]=0u+0x00000001u; // 802B5558
  c->lr=0x802B5560u; f_80345C3C(c); // 802B555C
  c->lr=0x802B5564u; f_803446AC(c); // 802B5560
  c->r[3]=0u+0x00000009u; // 802B5564
  c->r[4]=0u+0x00000001u; // 802B5568
  c->lr=0x802B5570u; f_803440B8(c); // 802B556C
  c->r[0]=R8(c->r[25]+0x000000BAu); // 802B5570
  cmps(c,0,(int32_t)c->r[0],0); // 802B5574
  if (crb(c,2)) { goto L_802B5588; } // 802B5578
  c->r[3]=0u+0x0000000Du; // 802B557C
  c->r[4]=0u+0x00000001u; // 802B5580
  c->lr=0x802B5588u; f_803440B8(c); // 802B5584
L_802B5588:;
  c->r[3]=0u+0x00000000u; // 802B5588
  c->r[4]=0u+0x00000009u; // 802B558C
  c->r[5]=0u+0x00000001u; // 802B5590
  c->r[6]=0u+0x00000004u; // 802B5594
  c->r[7]=0u+0x00000000u; // 802B5598
  c->lr=0x802B55A0u; f_803446E0(c); // 802B559C
  c->r[3]=0u+0x00000000u; // 802B55A0
  c->r[4]=0u+0x0000000Du; // 802B55A4
  c->r[5]=0u+0x00000001u; // 802B55A8
  c->r[6]=0u+0x00000004u; // 802B55AC
  c->r[7]=0u+0x00000000u; // 802B55B0
  c->lr=0x802B55B8u; f_803446E0(c); // 802B55B4
  c->r[3]=0u+0x00000000u; // 802B55B8
  c->lr=0x802B55C0u; f_803493E0(c); // 802B55BC
  c->r[3]=R8(c->r[25]+0x000000BAu); // 802B55C0
  c->r[29]=R32(c->r[26]+0x00000000u); // 802B55C4
  c->r[0]=0u-c->r[3]; // 802B55C8
  c->r[12]=R32(c->r[26]+0x00000004u); // 802B55CC
  c->r[0]=c->r[0]|c->r[3]; // 802B55D0
  c->r[11]=R32(c->r[26]+0x00000008u); // 802B55D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802B55D8
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B55DC
  {uint32_t ea=c->r[26]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B55E0
  c->r[28]=c->r[28]|c->r[0]; // 802B55E4
  c->r[10]=R32(c->r[26]+0x0000000Cu); // 802B55E8
  c->r[9]=R32(c->r[26]+0x00000010u); // 802B55EC
  fcmp(c,0,c->f[1],c->f[0]); // 802B55F0
  c->r[8]=R32(c->r[26]+0x00000014u); // 802B55F4
  c->r[7]=R32(c->r[26]+0x00000018u); // 802B55F8
  c->r[6]=R32(c->r[26]+0x0000001Cu); // 802B55FC
  c->r[5]=R32(c->r[26]+0x00000020u); // 802B5600
  c->r[4]=R32(c->r[26]+0x00000024u); // 802B5604
  c->r[3]=R32(c->r[26]+0x00000028u); // 802B5608
  c->r[0]=R32(c->r[26]+0x0000002Cu); // 802B560C
  W32(c->r[1]+0x00000110u,c->r[29]); // 802B5610
  W32(c->r[1]+0x00000114u,c->r[12]); // 802B5614
  W32(c->r[1]+0x00000118u,c->r[11]); // 802B5618
  W32(c->r[1]+0x0000011Cu,c->r[10]); // 802B561C
  W32(c->r[1]+0x00000120u,c->r[9]); // 802B5620
  W32(c->r[1]+0x00000124u,c->r[8]); // 802B5624
  W32(c->r[1]+0x00000128u,c->r[7]); // 802B5628
  W32(c->r[1]+0x0000012Cu,c->r[6]); // 802B562C
  W32(c->r[1]+0x00000130u,c->r[5]); // 802B5630
  W32(c->r[1]+0x00000134u,c->r[4]); // 802B5634
  W32(c->r[1]+0x00000138u,c->r[3]); // 802B5638
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 802B563C
  if (crb(c,2)) { goto L_802B5750; } // 802B5640
  c->r[3]=c->r[1]+0x00000074u; // 802B5644
  c->lr=0x802B564Cu; f_80349298(c); // 802B5648
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B564C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802B5650
  {uint32_t ea=c->r[1]+0x00000248u; WF64(ea,c->f[0]);} // 802B5654
  c->r[0]=R32(c->r[1]+0x0000024Cu); // 802B5658
  cmps(c,0,(int32_t)c->r[0],1); // 802B565C
  if (crb(c,2)) { goto L_802B5740; } // 802B5660
  if (!crb(c,0)) { goto L_802B5750; } // 802B5664
  cmps(c,0,(int32_t)c->r[0],0); // 802B5668
  if (!crb(c,0)) { goto L_802B5674; } // 802B566C
  goto L_802B5750; // 802B5670
L_802B5674:;
  c->r[3]=c->r[26]|c->r[26]; // 802B5674
  c->r[4]=c->r[26]+0x0000008Cu; // 802B5678
  c->r[5]=c->r[1]+0x00000008u; // 802B567C
  c->lr=0x802B5684u; f_803541AC(c); // 802B5680
  c->r[3]=c->r[1]+0x00000008u; // 802B5684
  c->r[4]=c->r[3]|c->r[3]; // 802B5688
  c->lr=0x802B5690u; f_802A2D48(c); // 802B568C
  cmps(c,0,(int32_t)c->r[3],0); // 802B5690
  if (crb(c,2)) { goto L_802B572C; } // 802B5694
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5698
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B569C
  fcmp(c,0,c->f[1],c->f[0]); // 802B56A0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 802B56A4
  if (!crb(c,2)) { goto L_802B56EC; } // 802B56A8
  {uint32_t ea=c->r[26]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 802B56AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802B56B0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B56B4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 802B56B8
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[3]); // 802B56BC
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B56C0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 802B56C4
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802B56C8
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B56CC
  c->f[4]=c->ps1[4]=S(c->f[4]+c->f[5]); // 802B56D0
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[3]); // 802B56D4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 802B56D8
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[4]);} // 802B56DC
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[2]);} // 802B56E0
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 802B56E4
  goto L_802B5750; // 802B56E8
L_802B56EC:;
  {uint32_t ea=c->r[26]+0x00000088u; c->f[3]=c->ps1[3]=RF32(ea);} // 802B56EC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 802B56F0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B56F4
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[3]); // 802B56F8
  c->f[5]=c->ps1[5]=S(c->f[4]*c->f[3]); // 802B56FC
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5700
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[3]); // 802B5704
  {uint32_t ea=c->r[1]+0x0000011Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802B5708
  {uint32_t ea=c->r[1]+0x0000012Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802B570C
  c->f[4]=c->ps1[4]=S(c->f[4]-c->f[5]); // 802B5710
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802B5714
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802B5718
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[4]);} // 802B571C
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[2]);} // 802B5720
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 802B5724
  goto L_802B5750; // 802B5728
L_802B572C:;
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B572C
  {uint32_t ea=c->r[26]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5730
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802B5734
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 802B5738
  goto L_802B5750; // 802B573C
L_802B5740:;
  {uint32_t ea=c->r[1]+0x0000013Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5740
  {uint32_t ea=c->r[26]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5744
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802B5748
  {uint32_t ea=c->r[1]+0x0000013Cu; WF32(ea,c->f[0]);} // 802B574C
L_802B5750:;
  c->r[3]=c->r[1]+0x00000110u; // 802B5750
  c->r[4]=c->r[1]+0x000001A8u; // 802B5754
  c->r[5]=c->r[3]|c->r[3]; // 802B5758
  c->lr=0x802B5760u; f_803535F4(c); // 802B575C
  c->r[3]=c->r[1]+0x00000110u; // 802B5760
  c->r[4]=0u+0x00000000u; // 802B5764
  c->lr=0x802B576Cu; f_803492D8(c); // 802B5768
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 802B576C
  if (crb(c,2)) { goto L_802B57D0; } // 802B5770
  c->r[3]=c->r[1]+0x00000110u; // 802B5774
  c->r[4]=c->r[1]+0x000000E0u; // 802B5778
  c->lr=0x802B5780u; f_80353858(c); // 802B577C
  cmps(c,0,(int32_t)c->r[3],0); // 802B5780
  if (crb(c,2)) { goto L_802B57B0; } // 802B5784
  {uint32_t ea=c->r[1]+0x00000108u; c->f[2]=c->ps1[2]=RF32(ea);} // 802B5788
  {uint32_t ea=c->r[1]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B578C
  {uint32_t ea=c->r[1]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5790
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[1]);} // 802B5794
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 802B5798
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[2]);} // 802B579C
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[0]);} // 802B57A0
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[1]);} // 802B57A4
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[2]);} // 802B57A8
  goto L_802B57D0; // 802B57AC
L_802B57B0:;
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B57B0
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B57B4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[1]);} // 802B57B8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 802B57BC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 802B57C0
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[1]);} // 802B57C4
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[1]);} // 802B57C8
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[0]);} // 802B57CC
L_802B57D0:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 802B57D0
  c->r[3]=c->r[25]|c->r[25]; // 802B57D4
  c->r[0]=R16(c->r[30]+0x00000000u); // 802B57D8
  c->r[12]=R32(c->r[12]+0x00000010u); // 802B57DC
  c->r[4]=rotl(c->r[0],0)&0x00000800u; // 802B57E0
  c->ctr=c->r[12]; // 802B57E4
  if (true) { c->lr=0x802B57ECu; dispatch(c,c->ctr); } // 802B57E8
  c->r[12]=c->r[3]|c->r[3]; // 802B57EC
  c->r[3]=c->r[27]|c->r[27]; // 802B57F0
  c->ctr=c->r[12]; // 802B57F4
  if (true) { c->lr=0x802B57FCu; dispatch(c,c->ctr); } // 802B57F8
  c->r[4]=c->r[3]|c->r[3]; // 802B57FC
  c->r[3]=c->r[25]|c->r[25]; // 802B5800
  c->r[5]=c->r[30]|c->r[30]; // 802B5804
  c->r[6]=c->r[26]|c->r[26]; // 802B5808
  c->r[7]=0u+0x00000001u; // 802B580C
  c->r[8]=0u+0x00000000u; // 802B5810
  c->lr=0x802B5818u; f_802A84F4(c); // 802B5814
  c->r[29]=R8(c->r[30]+0x000000B1u); // 802B5818
  cmps(c,0,(int32_t)c->r[29],0); // 802B581C
  if (!crb(c,2)) { goto L_802B5828; } // 802B5820
  c->r[29]=0u+0x00000001u; // 802B5824
L_802B5828:;
  c->r[0]=R8(c->r[13]+0xFFFFBE30u); // 802B5828
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802B582C
  if (!crb(c,2)) { goto L_802B5854; } // 802B5830
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5834
  c->r[0]=0u+0x00000001u; // 802B5838
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B583C
  c->r[3]=c->r[31]+0x00000000u; // 802B5840
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[1]);} // 802B5844
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802B5848
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802B584C
  W8(c->r[13]+0xFFFFBE30u,c->r[0]); // 802B5850
L_802B5854:;
  c->r[0]=R8(c->r[13]+0xFFFFBE31u); // 802B5854
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802B5858
  if (!crb(c,2)) { goto L_802B5880; } // 802B585C
  {uint32_t ea=c->r[2]+0xFFFFAA7Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5860
  c->r[0]=0u+0x00000001u; // 802B5864
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5868
  c->r[3]=c->r[31]+0x0000000Cu; // 802B586C
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802B5870
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802B5874
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802B5878
  W8(c->r[13]+0xFFFFBE31u,c->r[0]); // 802B587C
L_802B5880:;
  c->r[0]=R8(c->r[13]+0xFFFFBE32u); // 802B5880
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802B5884
  if (!crb(c,2)) { goto L_802B58AC; } // 802B5888
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B588C
  c->r[3]=c->r[31]+0x00000018u; // 802B5890
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5894
  c->r[0]=0u+0x00000001u; // 802B5898
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802B589C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 802B58A0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802B58A4
  W8(c->r[13]+0xFFFFBE32u,c->r[0]); // 802B58A8
L_802B58AC:;
  c->r[0]=R8(c->r[13]+0xFFFFBE33u); // 802B58AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 802B58B0
  if (!crb(c,2)) { goto L_802B58D8; } // 802B58B4
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[1]=c->ps1[1]=RF32(ea);} // 802B58B8
  c->r[3]=c->r[31]+0x00000024u; // 802B58BC
  {uint32_t ea=c->r[2]+0xFFFFAA7Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B58C0
  c->r[0]=0u+0x00000001u; // 802B58C4
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 802B58C8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 802B58CC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802B58D0
  W8(c->r[13]+0xFFFFBE33u,c->r[0]); // 802B58D4
L_802B58D8:;
  c->r[0]=R8(c->r[30]+0x000000ADu); // 802B58D8
  cmps(c,0,(int32_t)c->r[0],3); // 802B58DC
  if (crb(c,2)) { goto L_802B5A04; } // 802B58E0
  c->r[3]=R32(c->r[1]+0x00000170u); // 802B58E4
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B58E8
  c->r[0]=R8(c->r[3]+0x0000014Eu); // 802B58EC
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 802B58F0
  cmps(c,0,(int32_t)c->r[0],1); // 802B58F4
  if (crb(c,2)) { goto L_802B5930; } // 802B58F8
  if (!crb(c,0)) { goto L_802B5904; } // 802B58FC
  goto L_802B5910; // 802B5900
L_802B5904:;
  cmps(c,0,(int32_t)c->r[0],3); // 802B5904
  if (!crb(c,0)) { goto L_802B5910; } // 802B5908
  goto L_802B5950; // 802B590C
L_802B5910:;
  c->r[3]=c->r[25]|c->r[25]; // 802B5910
  c->r[5]=c->r[29]|c->r[29]; // 802B5914
  c->r[6]=c->r[28]|c->r[28]; // 802B5918
  c->r[4]=c->r[1]+0x00000170u; // 802B591C
  c->r[7]=c->r[31]+0x00000000u; // 802B5920
  c->r[8]=c->r[31]+0x0000000Cu; // 802B5924
  c->lr=0x802B592Cu; f_802B3554(c); // 802B5928
  goto L_802B596C; // 802B592C
L_802B5930:;
  c->r[3]=c->r[25]|c->r[25]; // 802B5930
  c->r[5]=c->r[29]|c->r[29]; // 802B5934
  c->r[6]=c->r[28]|c->r[28]; // 802B5938
  c->r[4]=c->r[1]+0x00000170u; // 802B593C
  c->r[7]=c->r[31]+0x00000000u; // 802B5940
  c->r[8]=c->r[31]+0x0000000Cu; // 802B5944
  c->lr=0x802B594Cu; f_802B38BC(c); // 802B5948
  goto L_802B596C; // 802B594C
L_802B5950:;
  c->r[3]=c->r[25]|c->r[25]; // 802B5950
  c->r[5]=c->r[29]|c->r[29]; // 802B5954
  c->r[6]=c->r[28]|c->r[28]; // 802B5958
  c->r[4]=c->r[1]+0x00000170u; // 802B595C
  c->r[7]=c->r[31]+0x00000000u; // 802B5960
  c->r[8]=c->r[31]+0x0000000Cu; // 802B5964
  c->lr=0x802B596Cu; f_802B3CDC(c); // 802B5968
L_802B596C:;
  c->r[0]=R8(c->r[30]+0x000000ADu); // 802B596C
  cmpu(c,0,c->r[0],0x00000001u); // 802B5970
  if (!crb(c,2)) { goto L_802B5A18; } // 802B5974
  c->r[3]=R32(c->r[1]+0x00000170u); // 802B5978
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B597C
  c->r[0]=R8(c->r[3]+0x0000014Eu); // 802B5980
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 802B5984
  cmps(c,0,(int32_t)c->r[0],1); // 802B5988
  if (crb(c,2)) { goto L_802B59C4; } // 802B598C
  if (!crb(c,0)) { goto L_802B5998; } // 802B5990
  goto L_802B59A4; // 802B5994
L_802B5998:;
  cmps(c,0,(int32_t)c->r[0],3); // 802B5998
  if (!crb(c,0)) { goto L_802B59A4; } // 802B599C
  goto L_802B59E4; // 802B59A0
L_802B59A4:;
  c->r[3]=c->r[25]|c->r[25]; // 802B59A4
  c->r[5]=c->r[29]|c->r[29]; // 802B59A8
  c->r[6]=c->r[28]|c->r[28]; // 802B59AC
  c->r[4]=c->r[1]+0x00000170u; // 802B59B0
  c->r[7]=c->r[31]+0x00000018u; // 802B59B4
  c->r[8]=c->r[31]+0x00000024u; // 802B59B8
  c->lr=0x802B59C0u; f_802B3554(c); // 802B59BC
  goto L_802B5A18; // 802B59C0
L_802B59C4:;
  c->r[3]=c->r[25]|c->r[25]; // 802B59C4
  c->r[5]=c->r[29]|c->r[29]; // 802B59C8
  c->r[6]=c->r[28]|c->r[28]; // 802B59CC
  c->r[4]=c->r[1]+0x00000170u; // 802B59D0
  c->r[7]=c->r[31]+0x00000018u; // 802B59D4
  c->r[8]=c->r[31]+0x00000024u; // 802B59D8
  c->lr=0x802B59E0u; f_802B38BC(c); // 802B59DC
  goto L_802B5A18; // 802B59E0
L_802B59E4:;
  c->r[3]=c->r[25]|c->r[25]; // 802B59E4
  c->r[5]=c->r[29]|c->r[29]; // 802B59E8
  c->r[6]=c->r[28]|c->r[28]; // 802B59EC
  c->r[4]=c->r[1]+0x00000170u; // 802B59F0
  c->r[7]=c->r[31]+0x00000018u; // 802B59F4
  c->r[8]=c->r[31]+0x00000024u; // 802B59F8
  c->lr=0x802B5A00u; f_802B3CDC(c); // 802B59FC
  goto L_802B5A18; // 802B5A00
L_802B5A04:;
  c->r[3]=c->r[25]|c->r[25]; // 802B5A04
  c->r[5]=c->r[29]|c->r[29]; // 802B5A08
  c->r[6]=c->r[28]|c->r[28]; // 802B5A0C
  c->r[4]=c->r[1]+0x00000170u; // 802B5A10
  c->lr=0x802B5A18u; f_802B4E50(c); // 802B5A14
L_802B5A18:;
  {uint32_t ea=c->r[1]+0x00000278u; psq_load(c,31,ea,0,0);} // 802B5A18
  c->r[11]=c->r[1]+0x00000270u; // 802B5A1C
  {uint32_t ea=c->r[1]+0x00000270u; c->f[31]=RF64(ea);} // 802B5A20
  c->lr=0x802B5A28u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B5A24
  c->r[0]=R32(c->r[1]+0x00000284u); // 802B5A28
  c->lr=c->r[0]; // 802B5A2C
  c->r[1]=c->r[1]+0x00000280u; // 802B5A30
  return; // 802B5A34
}

// fn_802B5A38
void f_802B5A38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B5A38
  c->r[0]=c->lr; // 802B5A3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B5A40
  c->r[0]=R8(c->r[5]+0x000000B2u); // 802B5A44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B5A48
  c->r[31]=c->r[6]|c->r[6]; // 802B5A4C
  c->r[0]=rotl(c->r[0],0)&0x00000038u; // 802B5A50
  W32(c->r[1]+0x00000018u,c->r[30]); // 802B5A54
  cmpu(c,0,c->r[0],0x00000018u); // 802B5A58
  c->r[30]=c->r[3]|c->r[3]; // 802B5A5C
  if (crb(c,1)) { goto L_802B5AA0; } // 802B5A60
  c->r[4]=0u+0x80480000u; // 802B5A64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802B5A68
  c->r[4]=c->r[4]+0x000067D8u; // 802B5A6C
  c->r[4]=R32(c->r[4]+c->r[0]); // 802B5A70
  c->ctr=c->r[4]; // 802B5A74
  if (true) { switch (c->ctr) { case 0x802B5A7Cu: goto L_802B5A7C; case 0x802B5AA0u: goto L_802B5AA0; case 0x802B5ABCu: goto L_802B5ABC; case 0x802B5AE0u: goto L_802B5AE0; default: break; } dispatch(c,c->ctr); return; } // 802B5A78
L_802B5A7C:;
  c->r[5]=0u+0x80510000u; // 802B5A7C
  c->r[4]=c->r[6]+0x00000008u; // 802B5A80
  c->r[5]=c->r[5]+0xFFFFE2F8u; // 802B5A84
  c->lr=0x802B5A8Cu; f_8026CFE0(c); // 802B5A88
  c->r[3]=c->r[30]|c->r[30]; // 802B5A8C
  c->r[5]=c->r[30]|c->r[30]; // 802B5A90
  c->r[4]=c->r[31]+0x00000068u; // 802B5A94
  c->lr=0x802B5A9Cu; f_8026CFE0(c); // 802B5A98
  goto L_802B5B0C; // 802B5A9C
L_802B5AA0:;
  {uint32_t ea=c->r[6]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 802B5AA0
  {uint32_t ea=c->r[6]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5AA4
  {uint32_t ea=c->r[6]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5AA8
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[2]);} // 802B5AAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 802B5AB0
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802B5AB4
  goto L_802B5B74; // 802B5AB8
L_802B5ABC:;
  c->r[5]=0u+0x80510000u; // 802B5ABC
  c->r[4]=c->r[6]+0x00000008u; // 802B5AC0
  c->r[5]=c->r[5]+0xFFFFE310u; // 802B5AC4
  c->lr=0x802B5ACCu; f_8026CFE0(c); // 802B5AC8
  c->r[3]=c->r[30]|c->r[30]; // 802B5ACC
  c->r[5]=c->r[30]|c->r[30]; // 802B5AD0
  c->r[4]=c->r[31]+0x00000068u; // 802B5AD4
  c->lr=0x802B5ADCu; f_8026CFE0(c); // 802B5AD8
  goto L_802B5B0C; // 802B5ADC
L_802B5AE0:;
  {uint32_t ea=c->r[2]+0xFFFFAA68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5AE0
  c->r[4]=c->r[6]+0x00000008u; // 802B5AE4
  c->r[5]=c->r[1]+0x00000008u; // 802B5AE8
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802B5AEC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802B5AF0
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802B5AF4
  c->lr=0x802B5AFCu; f_8026CFE0(c); // 802B5AF8
  c->r[3]=c->r[30]|c->r[30]; // 802B5AFC
  c->r[5]=c->r[30]|c->r[30]; // 802B5B00
  c->r[4]=c->r[31]+0x00000068u; // 802B5B04
  c->lr=0x802B5B0Cu; f_8026CFE0(c); // 802B5B08
L_802B5B0C:;
  {uint32_t ea=c->r[30]+0x00000004u; psq_load(c,1,ea,0,0);} // 802B5B0C
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,1,0);} // 802B5B10
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5B14
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5B18
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B5B1C
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5B20
  fcmp(c,0,c->f[1],c->f[0]); // 802B5B24
  if (!crb(c,0)) { goto L_802B5B34; } // 802B5B28
  c->r[0]=0u+0x00000000u; // 802B5B2C
  goto L_802B5B54; // 802B5B30
L_802B5B34:;
  c->lr=0x802B5B38u; f_8026C8AC(c); // 802B5B34
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B5B38
  c->r[0]=0u+0x00000001u; // 802B5B3C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5B40
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B5B44
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B5B48
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5B4C
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B5B50
L_802B5B54:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B5B54
  if (!crb(c,2)) { goto L_802B5B74; } // 802B5B58
  {uint32_t ea=c->r[31]+0x00000098u; c->f[2]=c->ps1[2]=RF32(ea);} // 802B5B5C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802B5B60
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5B64
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[2]);} // 802B5B68
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[1]);} // 802B5B6C
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 802B5B70
L_802B5B74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B5B74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B5B78
  c->r[30]=R32(c->r[1]+0x00000018u); // 802B5B7C
  c->lr=c->r[0]; // 802B5B80
  c->r[1]=c->r[1]+0x00000020u; // 802B5B84
  return; // 802B5B88
}

// fn_802B5B8C
void f_802B5B8C(Ctx* __restrict c) {
  c->r[4]=R32(c->r[4]+0x00000024u); // 802B5B8C
  c->r[0]=R8(c->r[4]+0x0000014Au); // 802B5B90
  cmpu(c,0,c->r[0],0x00000006u); // 802B5B94
  if (crb(c,1)) { goto L_802B5C34; } // 802B5B98
  c->r[3]=0u+0x80480000u; // 802B5B9C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802B5BA0
  c->r[3]=c->r[3]+0x0000683Cu; // 802B5BA4
  c->r[3]=R32(c->r[3]+c->r[0]); // 802B5BA8
  c->ctr=c->r[3]; // 802B5BAC
  if (true) { switch (c->ctr) { case 0x802B5BB4u: goto L_802B5BB4; case 0x802B5BC0u: goto L_802B5BC0; case 0x802B5BCCu: goto L_802B5BCC; case 0x802B5BD8u: goto L_802B5BD8; case 0x802B5BE4u: goto L_802B5BE4; case 0x802B5BF0u: goto L_802B5BF0; case 0x802B5C34u: goto L_802B5C34; default: break; } dispatch(c,c->ctr); return; } // 802B5BB0
L_802B5BB4:;
  c->r[3]=0u+0x802B0000u; // 802B5BB4
  c->r[3]=c->r[3]+0xFFFFB56Cu; // 802B5BB8
  return; // 802B5BBC
L_802B5BC0:;
  c->r[3]=0u+0x802B0000u; // 802B5BC0
  c->r[3]=c->r[3]+0xFFFFB640u; // 802B5BC4
  return; // 802B5BC8
L_802B5BCC:;
  c->r[3]=0u+0x802B0000u; // 802B5BCC
  c->r[3]=c->r[3]+0xFFFFB6FCu; // 802B5BD0
  return; // 802B5BD4
L_802B5BD8:;
  c->r[3]=0u+0x802B0000u; // 802B5BD8
  c->r[3]=c->r[3]+0x00005C40u; // 802B5BDC
  return; // 802B5BE0
L_802B5BE4:;
  c->r[3]=0u+0x802B0000u; // 802B5BE4
  c->r[3]=c->r[3]+0xFFFFDC84u; // 802B5BE8
  return; // 802B5BEC
L_802B5BF0:;
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 802B5BF0
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 802B5BF4
  cmps(c,0,(int32_t)c->r[0],2); // 802B5BF8
  if (crb(c,2)) { goto L_802B5C1C; } // 802B5BFC
  if (!crb(c,0)) { goto L_802B5C28; } // 802B5C00
  cmps(c,0,(int32_t)c->r[0],1); // 802B5C04
  if (!crb(c,0)) { goto L_802B5C10; } // 802B5C08
  goto L_802B5C28; // 802B5C0C
L_802B5C10:;
  c->r[3]=0u+0x802B0000u; // 802B5C10
  c->r[3]=c->r[3]+0x00005FC0u; // 802B5C14
  return; // 802B5C18
L_802B5C1C:;
  c->r[3]=0u+0x802B0000u; // 802B5C1C
  c->r[3]=c->r[3]+0x00006270u; // 802B5C20
  return; // 802B5C24
L_802B5C28:;
  c->r[3]=0u+0x802B0000u; // 802B5C28
  c->r[3]=c->r[3]+0x00005D58u; // 802B5C2C
  return; // 802B5C30
L_802B5C34:;
  c->r[3]=0u+0x802B0000u; // 802B5C34
  c->r[3]=c->r[3]+0xFFFFB56Cu; // 802B5C38
  return; // 802B5C3C
}

// fn_802B5C40
void f_802B5C40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B5C40
  c->r[0]=c->lr; // 802B5C44
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B5C48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B5C4C
  c->r[31]=c->r[4]|c->r[4]; // 802B5C50
  W32(c->r[1]+0x00000008u,c->r[30]); // 802B5C54
  c->r[30]=c->r[3]|c->r[3]; // 802B5C58
  c->r[6]=R32(c->r[4]+0x00000000u); // 802B5C5C
  c->r[7]=R16(c->r[6]+0x00000042u); // 802B5C60
  c->r[6]=c->r[5]+c->r[7]; // 802B5C64
  c->r[6]=R32(c->r[6]+0x00000004u); // 802B5C68
  goto L_802B5C78; // 802B5C6C
L_802B5C70:;
  c->r[6]=c->r[6]+c->r[7]; // 802B5C70
  c->r[6]=R32(c->r[6]+0x00000004u); // 802B5C74
L_802B5C78:;
  cmps(c,0,(int32_t)c->r[6],0); // 802B5C78
  if (crb(c,2)) { goto L_802B5C8C; } // 802B5C7C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 802B5C80
  cmps(c,0,(int32_t)c->r[0],1); // 802B5C84
  if (!crb(c,2)) { IRQCHK(c); goto L_802B5C70; } // 802B5C88
L_802B5C8C:;
  cmps(c,0,(int32_t)c->r[6],0); // 802B5C8C
  if (crb(c,2)) { goto L_802B5CB8; } // 802B5C90
  {uint32_t ea=c->r[5]+0x000000ACu; psq_load(c,1,ea,0,0);} // 802B5C94
  {uint32_t ea=c->r[6]+0x000000ACu; psq_load(c,0,ea,0,0);} // 802B5C98
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5C9C
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B5CA0
  {uint32_t ea=c->r[5]+0x000000B4u; psq_load(c,1,ea,1,0);} // 802B5CA4
  {uint32_t ea=c->r[6]+0x000000B4u; psq_load(c,0,ea,1,0);} // 802B5CA8
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5CAC
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B5CB0
  goto L_802B5CD8; // 802B5CB4
L_802B5CB8:;
  {uint32_t ea=c->r[5]+0x000000ACu; psq_load(c,1,ea,0,0);} // 802B5CB8
  {uint32_t ea=c->r[4]+0x000000A4u; psq_load(c,0,ea,0,0);} // 802B5CBC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5CC0
  {uint32_t ea=c->r[3]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B5CC4
  {uint32_t ea=c->r[5]+0x000000B4u; psq_load(c,1,ea,1,0);} // 802B5CC8
  {uint32_t ea=c->r[4]+0x000000ACu; psq_load(c,0,ea,1,0);} // 802B5CCC
  {double t0=S(c->f[1]-c->f[0]), t1=S(c->ps1[1]-c->ps1[0]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5CD0
  {uint32_t ea=c->r[3]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B5CD4
L_802B5CD8:;
  {uint32_t ea=c->r[3]+0x00000004u; psq_load(c,1,ea,0,0);} // 802B5CD8
  {uint32_t ea=c->r[3]+0x00000000u; psq_load(c,2,ea,1,0);} // 802B5CDC
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5CE0
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5CE4
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B5CE8
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5CEC
  fcmp(c,0,c->f[1],c->f[0]); // 802B5CF0
  if (!crb(c,0)) { goto L_802B5D00; } // 802B5CF4
  c->r[0]=0u+0x00000000u; // 802B5CF8
  goto L_802B5D20; // 802B5CFC
L_802B5D00:;
  c->lr=0x802B5D04u; f_8026C8AC(c); // 802B5D00
  {uint32_t ea=c->r[30]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B5D04
  c->r[0]=0u+0x00000001u; // 802B5D08
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5D0C
  {uint32_t ea=c->r[30]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B5D10
  {uint32_t ea=c->r[30]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B5D14
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5D18
  {uint32_t ea=c->r[30]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B5D1C
L_802B5D20:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B5D20
  if (!crb(c,2)) { goto L_802B5D40; } // 802B5D24
  {uint32_t ea=c->r[31]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5D28
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[0]);} // 802B5D2C
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5D30
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]);} // 802B5D34
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5D38
  {uint32_t ea=c->r[30]+0x00000008u; WF32(ea,c->f[0]);} // 802B5D3C
L_802B5D40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B5D40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B5D44
  c->r[30]=R32(c->r[1]+0x00000008u); // 802B5D48
  c->lr=c->r[0]; // 802B5D4C
  c->r[1]=c->r[1]+0x00000010u; // 802B5D50
  return; // 802B5D54
}

// fn_802B5D58
void f_802B5D58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B5D58
  c->r[0]=c->lr; // 802B5D5C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802B5D60
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802B5D64
  W32(c->r[1]+0x00000048u,c->r[30]); // 802B5D68
  c->r[30]=c->r[5]|c->r[5]; // 802B5D6C
  W32(c->r[1]+0x00000044u,c->r[29]); // 802B5D70
  c->r[29]=c->r[4]|c->r[4]; // 802B5D74
  W32(c->r[1]+0x00000040u,c->r[28]); // 802B5D78
  c->r[28]=c->r[3]|c->r[3]; // 802B5D7C
  c->r[6]=R32(c->r[4]+0x00000000u); // 802B5D80
  c->r[6]=R16(c->r[6]+0x00000042u); // 802B5D84
  c->r[4]=R32(c->r[5]+c->r[6]); // 802B5D88
  goto L_802B5D94; // 802B5D8C
L_802B5D90:;
  c->r[4]=R32(c->r[4]+c->r[6]); // 802B5D90
L_802B5D94:;
  cmps(c,0,(int32_t)c->r[4],0); // 802B5D94
  if (crb(c,2)) { goto L_802B5DA8; } // 802B5D98
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802B5D9C
  cmps(c,0,(int32_t)c->r[0],1); // 802B5DA0
  if (!crb(c,2)) { IRQCHK(c); goto L_802B5D90; } // 802B5DA4
L_802B5DA8:;
  c->r[3]=c->r[5]+c->r[6]; // 802B5DA8
  c->r[31]=R32(c->r[3]+0x00000004u); // 802B5DAC
  goto L_802B5DBC; // 802B5DB0
L_802B5DB4:;
  c->r[3]=c->r[31]+c->r[6]; // 802B5DB4
  c->r[31]=R32(c->r[3]+0x00000004u); // 802B5DB8
L_802B5DBC:;
  cmps(c,0,(int32_t)c->r[31],0); // 802B5DBC
  if (crb(c,2)) { goto L_802B5DD0; } // 802B5DC0
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802B5DC4
  cmps(c,0,(int32_t)c->r[0],1); // 802B5DC8
  if (!crb(c,2)) { IRQCHK(c); goto L_802B5DB4; } // 802B5DCC
L_802B5DD0:;
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5DD0
  cmps(c,0,(int32_t)c->r[4],0); // 802B5DD4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802B5DD8
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802B5DDC
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802B5DE0
  if (crb(c,2)) { goto L_802B5E74; } // 802B5DE4
  {uint32_t ea=c->r[4]+0x000000ACu; psq_load(c,3,ea,0,0);} // 802B5DE8
  {uint32_t ea=c->r[5]+0x000000ACu; psq_load(c,2,ea,0,0);} // 802B5DEC
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5DF0
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5DF4
  {uint32_t ea=c->r[4]+0x000000B4u; psq_load(c,3,ea,1,0);} // 802B5DF8
  {uint32_t ea=c->r[5]+0x000000B4u; psq_load(c,2,ea,1,0);} // 802B5DFC
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,1,ea,0,0);} // 802B5E00
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5E04
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,2,ea,1,0);} // 802B5E08
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,1,ea,1,0);} // 802B5E0C
  {uint32_t ea=c->r[1]+0x00000030u; psq_load(c,1,ea,0,0);} // 802B5E10
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5E14
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B5E18
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5E1C
  fcmp(c,0,c->f[1],c->f[0]); // 802B5E20
  if (!crb(c,0)) { goto L_802B5E30; } // 802B5E24
  c->r[0]=0u+0x00000000u; // 802B5E28
  goto L_802B5E50; // 802B5E2C
L_802B5E30:;
  c->lr=0x802B5E34u; f_8026C8AC(c); // 802B5E30
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,2,ea,0,0);} // 802B5E34
  c->r[0]=0u+0x00000001u; // 802B5E38
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5E3C
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,2,ea,1,0);} // 802B5E40
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,0,ea,0,0);} // 802B5E44
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5E48
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,0,ea,1,0);} // 802B5E4C
L_802B5E50:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B5E50
  if (!crb(c,2)) { goto L_802B5E74; } // 802B5E54
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5E58
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802B5E5C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 802B5E60
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802B5E64
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802B5E68
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802B5E6C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802B5E70
L_802B5E74:;
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5E74
  cmps(c,0,(int32_t)c->r[31],0); // 802B5E78
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 802B5E7C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 802B5E80
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 802B5E84
  if (crb(c,2)) { goto L_802B5F18; } // 802B5E88
  {uint32_t ea=c->r[31]+0x000000ACu; psq_load(c,3,ea,0,0);} // 802B5E8C
  {uint32_t ea=c->r[30]+0x000000ACu; psq_load(c,2,ea,0,0);} // 802B5E90
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5E94
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5E98
  {uint32_t ea=c->r[31]+0x000000B4u; psq_load(c,3,ea,1,0);} // 802B5E9C
  {uint32_t ea=c->r[30]+0x000000B4u; psq_load(c,2,ea,1,0);} // 802B5EA0
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 802B5EA4
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5EA8
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,1,0);} // 802B5EAC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,1,0);} // 802B5EB0
  {uint32_t ea=c->r[1]+0x00000024u; psq_load(c,1,ea,0,0);} // 802B5EB4
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5EB8
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B5EBC
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5EC0
  fcmp(c,0,c->f[1],c->f[0]); // 802B5EC4
  if (!crb(c,0)) { goto L_802B5ED4; } // 802B5EC8
  c->r[0]=0u+0x00000000u; // 802B5ECC
  goto L_802B5EF4; // 802B5ED0
L_802B5ED4:;
  c->lr=0x802B5ED8u; f_8026C8AC(c); // 802B5ED4
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 802B5ED8
  c->r[0]=0u+0x00000001u; // 802B5EDC
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5EE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,2,ea,1,0);} // 802B5EE4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 802B5EE8
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5EEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 802B5EF0
L_802B5EF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B5EF4
  if (!crb(c,2)) { goto L_802B5F18; } // 802B5EF8
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5EFC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802B5F00
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802B5F04
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802B5F08
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 802B5F0C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 802B5F10
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 802B5F14
L_802B5F18:;
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,3,ea,0,0);} // 802B5F18
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 802B5F1C
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5F20
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5F24
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,3,ea,1,0);} // 802B5F28
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,2,ea,1,0);} // 802B5F2C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,1,ea,0,0);} // 802B5F30
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5F34
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,2,ea,1,0);} // 802B5F38
  {uint32_t ea=c->r[28]+0x00000008u; psq_store(c,1,ea,1,0);} // 802B5F3C
  {uint32_t ea=c->r[28]+0x00000004u; psq_load(c,1,ea,0,0);} // 802B5F40
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5F44
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B5F48
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B5F4C
  fcmp(c,0,c->f[1],c->f[0]); // 802B5F50
  if (!crb(c,0)) { goto L_802B5F60; } // 802B5F54
  c->r[0]=0u+0x00000000u; // 802B5F58
  goto L_802B5F80; // 802B5F5C
L_802B5F60:;
  c->lr=0x802B5F64u; f_8026C8AC(c); // 802B5F60
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B5F64
  c->r[0]=0u+0x00000001u; // 802B5F68
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5F6C
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B5F70
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B5F74
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B5F78
  {uint32_t ea=c->r[28]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B5F7C
L_802B5F80:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B5F80
  if (!crb(c,2)) { goto L_802B5FA0; } // 802B5F84
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5F88
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802B5F8C
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5F90
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 802B5F94
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B5F98
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 802B5F9C
L_802B5FA0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 802B5FA0
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 802B5FA4
  c->r[30]=R32(c->r[1]+0x00000048u); // 802B5FA8
  c->r[29]=R32(c->r[1]+0x00000044u); // 802B5FAC
  c->r[28]=R32(c->r[1]+0x00000040u); // 802B5FB0
  c->lr=c->r[0]; // 802B5FB4
  c->r[1]=c->r[1]+0x00000050u; // 802B5FB8
  return; // 802B5FBC
}

// fn_802B5FC0
void f_802B5FC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B5FC0
  c->r[0]=c->lr; // 802B5FC4
  W32(c->r[1]+0x00000054u,c->r[0]); // 802B5FC8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802B5FCC
  c->r[31]=c->r[5]|c->r[5]; // 802B5FD0
  W32(c->r[1]+0x00000048u,c->r[30]); // 802B5FD4
  c->r[30]=c->r[4]|c->r[4]; // 802B5FD8
  W32(c->r[1]+0x00000044u,c->r[29]); // 802B5FDC
  c->r[29]=c->r[3]|c->r[3]; // 802B5FE0
  W32(c->r[1]+0x00000040u,c->r[28]); // 802B5FE4
  c->r[6]=R32(c->r[4]+0x00000000u); // 802B5FE8
  c->r[4]=R16(c->r[6]+0x00000042u); // 802B5FEC
  c->r[7]=R32(c->r[5]+c->r[4]); // 802B5FF0
  goto L_802B5FFC; // 802B5FF4
L_802B5FF8:;
  c->r[7]=R32(c->r[7]+c->r[4]); // 802B5FF8
L_802B5FFC:;
  cmps(c,0,(int32_t)c->r[7],0); // 802B5FFC
  if (crb(c,2)) { goto L_802B6010; } // 802B6000
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 802B6004
  cmps(c,0,(int32_t)c->r[0],1); // 802B6008
  if (!crb(c,2)) { IRQCHK(c); goto L_802B5FF8; } // 802B600C
L_802B6010:;
  cmps(c,0,(int32_t)c->r[7],0); // 802B6010
  if (!crb(c,2)) { goto L_802B6058; } // 802B6014
  c->r[7]=R32(c->r[6]+0x0000003Cu); // 802B6018
  goto L_802B6044; // 802B601C
L_802B6020:;
  c->r[3]=R16(c->r[6]+0x00000042u); // 802B6020
  c->r[7]=R32(c->r[7]+c->r[3]); // 802B6024
  goto L_802B6030; // 802B6028
L_802B602C:;
  c->r[7]=R32(c->r[7]+c->r[3]); // 802B602C
L_802B6030:;
  cmps(c,0,(int32_t)c->r[7],0); // 802B6030
  if (crb(c,2)) { goto L_802B6044; } // 802B6034
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 802B6038
  cmps(c,0,(int32_t)c->r[0],1); // 802B603C
  if (!crb(c,2)) { IRQCHK(c); goto L_802B602C; } // 802B6040
L_802B6044:;
  cmps(c,0,(int32_t)c->r[7],0); // 802B6044
  if (crb(c,2)) { goto L_802B6058; } // 802B6048
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 802B604C
  cmps(c,0,(int32_t)c->r[0],1); // 802B6050
  if (!crb(c,2)) { IRQCHK(c); goto L_802B6020; } // 802B6054
L_802B6058:;
  c->r[3]=c->r[5]+c->r[4]; // 802B6058
  c->r[28]=R32(c->r[3]+0x00000004u); // 802B605C
  goto L_802B606C; // 802B6060
L_802B6064:;
  c->r[3]=c->r[28]+c->r[4]; // 802B6064
  c->r[28]=R32(c->r[3]+0x00000004u); // 802B6068
L_802B606C:;
  cmps(c,0,(int32_t)c->r[28],0); // 802B606C
  if (crb(c,2)) { goto L_802B6080; } // 802B6070
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 802B6074
  cmps(c,0,(int32_t)c->r[0],1); // 802B6078
  if (!crb(c,2)) { IRQCHK(c); goto L_802B6064; } // 802B607C
L_802B6080:;
  cmps(c,0,(int32_t)c->r[28],0); // 802B6080
  if (!crb(c,2)) { goto L_802B60B0; } // 802B6084
  c->r[28]=R32(c->r[6]+0x00000038u); // 802B6088
  goto L_802B609C; // 802B608C
L_802B6090:;
  c->r[0]=R16(c->r[6]+0x00000042u); // 802B6090
  c->r[3]=c->r[28]+c->r[0]; // 802B6094
  c->r[28]=R32(c->r[3]+0x00000004u); // 802B6098
L_802B609C:;
  cmps(c,0,(int32_t)c->r[28],0); // 802B609C
  if (crb(c,2)) { goto L_802B60B0; } // 802B60A0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 802B60A4
  cmps(c,0,(int32_t)c->r[0],1); // 802B60A8
  if (!crb(c,2)) { IRQCHK(c); goto L_802B6090; } // 802B60AC
L_802B60B0:;
  {uint32_t ea=c->r[7]+0x000000ACu; psq_load(c,3,ea,0,0);} // 802B60B0
  {uint32_t ea=c->r[5]+0x000000ACu; psq_load(c,2,ea,0,0);} // 802B60B4
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B60B8
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B60BC
  {uint32_t ea=c->r[7]+0x000000B4u; psq_load(c,3,ea,1,0);} // 802B60C0
  {uint32_t ea=c->r[5]+0x000000B4u; psq_load(c,2,ea,1,0);} // 802B60C4
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,1,ea,0,0);} // 802B60C8
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B60CC
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,2,ea,1,0);} // 802B60D0
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,1,ea,1,0);} // 802B60D4
  {uint32_t ea=c->r[1]+0x00000030u; psq_load(c,1,ea,0,0);} // 802B60D8
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B60DC
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B60E0
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B60E4
  fcmp(c,0,c->f[1],c->f[0]); // 802B60E8
  if (!crb(c,0)) { goto L_802B60F8; } // 802B60EC
  c->r[0]=0u+0x00000000u; // 802B60F0
  goto L_802B6118; // 802B60F4
L_802B60F8:;
  c->lr=0x802B60FCu; f_8026C8AC(c); // 802B60F8
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,2,ea,0,0);} // 802B60FC
  c->r[0]=0u+0x00000001u; // 802B6100
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6104
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,2,ea,1,0);} // 802B6108
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_store(c,0,ea,0,0);} // 802B610C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6110
  {uint32_t ea=c->r[1]+0x00000034u; psq_store(c,0,ea,1,0);} // 802B6114
L_802B6118:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B6118
  if (!crb(c,2)) { goto L_802B613C; } // 802B611C
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6120
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802B6124
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 802B6128
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802B612C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 802B6130
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 802B6134
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 802B6138
L_802B613C:;
  {uint32_t ea=c->r[28]+0x000000ACu; psq_load(c,3,ea,0,0);} // 802B613C
  {uint32_t ea=c->r[31]+0x000000ACu; psq_load(c,2,ea,0,0);} // 802B6140
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6144
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6148
  {uint32_t ea=c->r[28]+0x000000B4u; psq_load(c,3,ea,1,0);} // 802B614C
  {uint32_t ea=c->r[31]+0x000000B4u; psq_load(c,2,ea,1,0);} // 802B6150
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,0,0);} // 802B6154
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6158
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,1,0);} // 802B615C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,1,ea,1,0);} // 802B6160
  {uint32_t ea=c->r[1]+0x00000024u; psq_load(c,1,ea,0,0);} // 802B6164
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6168
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B616C
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6170
  fcmp(c,0,c->f[1],c->f[0]); // 802B6174
  if (!crb(c,0)) { goto L_802B6184; } // 802B6178
  c->r[0]=0u+0x00000000u; // 802B617C
  goto L_802B61A4; // 802B6180
L_802B6184:;
  c->lr=0x802B6188u; f_8026C8AC(c); // 802B6184
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 802B6188
  c->r[0]=0u+0x00000001u; // 802B618C
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6190
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,2,ea,1,0);} // 802B6194
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,0,ea,0,0);} // 802B6198
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B619C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,0,ea,1,0);} // 802B61A0
L_802B61A4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B61A4
  if (!crb(c,2)) { goto L_802B61C8; } // 802B61A8
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B61AC
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 802B61B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 802B61B4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 802B61B8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 802B61BC
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 802B61C0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 802B61C4
L_802B61C8:;
  {uint32_t ea=c->r[1]+0x0000002Cu; psq_load(c,3,ea,0,0);} // 802B61C8
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,2,ea,0,0);} // 802B61CC
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B61D0
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B61D4
  {uint32_t ea=c->r[1]+0x00000034u; psq_load(c,3,ea,1,0);} // 802B61D8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,2,ea,1,0);} // 802B61DC
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,1,ea,0,0);} // 802B61E0
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B61E4
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,1,0);} // 802B61E8
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,1,ea,1,0);} // 802B61EC
  {uint32_t ea=c->r[29]+0x00000004u; psq_load(c,1,ea,0,0);} // 802B61F0
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B61F4
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B61F8
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B61FC
  fcmp(c,0,c->f[1],c->f[0]); // 802B6200
  if (!crb(c,0)) { goto L_802B6210; } // 802B6204
  c->r[0]=0u+0x00000000u; // 802B6208
  goto L_802B6230; // 802B620C
L_802B6210:;
  c->lr=0x802B6214u; f_8026C8AC(c); // 802B6210
  {uint32_t ea=c->r[29]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B6214
  c->r[0]=0u+0x00000001u; // 802B6218
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B621C
  {uint32_t ea=c->r[29]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B6220
  {uint32_t ea=c->r[29]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B6224
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6228
  {uint32_t ea=c->r[29]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B622C
L_802B6230:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B6230
  if (!crb(c,2)) { goto L_802B6250; } // 802B6234
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6238
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802B623C
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6240
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 802B6244
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6248
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 802B624C
L_802B6250:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 802B6250
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 802B6254
  c->r[30]=R32(c->r[1]+0x00000048u); // 802B6258
  c->r[29]=R32(c->r[1]+0x00000044u); // 802B625C
  c->r[28]=R32(c->r[1]+0x00000040u); // 802B6260
  c->lr=c->r[0]; // 802B6264
  c->r[1]=c->r[1]+0x00000050u; // 802B6268
  return; // 802B626C
}

// fn_802B6270
void f_802B6270(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6270
  c->r[0]=c->lr; // 802B6274
  W32(c->r[1]+0x00000034u,c->r[0]); // 802B6278
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802B627C
  W32(c->r[1]+0x00000028u,c->r[30]); // 802B6280
  c->r[30]=c->r[5]|c->r[5]; // 802B6284
  W32(c->r[1]+0x00000024u,c->r[29]); // 802B6288
  c->r[29]=c->r[4]|c->r[4]; // 802B628C
  W32(c->r[1]+0x00000020u,c->r[28]); // 802B6290
  c->r[28]=c->r[3]|c->r[3]; // 802B6294
  c->r[6]=R32(c->r[4]+0x00000000u); // 802B6298
  c->r[6]=R16(c->r[6]+0x00000042u); // 802B629C
  c->r[4]=R32(c->r[5]+c->r[6]); // 802B62A0
  goto L_802B62AC; // 802B62A4
L_802B62A8:;
  c->r[4]=R32(c->r[4]+c->r[6]); // 802B62A8
L_802B62AC:;
  cmps(c,0,(int32_t)c->r[4],0); // 802B62AC
  if (crb(c,2)) { goto L_802B62C0; } // 802B62B0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 802B62B4
  cmps(c,0,(int32_t)c->r[0],1); // 802B62B8
  if (!crb(c,2)) { IRQCHK(c); goto L_802B62A8; } // 802B62BC
L_802B62C0:;
  c->r[3]=c->r[5]+c->r[6]; // 802B62C0
  c->r[31]=R32(c->r[3]+0x00000004u); // 802B62C4
  goto L_802B62D4; // 802B62C8
L_802B62CC:;
  c->r[3]=c->r[31]+c->r[6]; // 802B62CC
  c->r[31]=R32(c->r[3]+0x00000004u); // 802B62D0
L_802B62D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 802B62D4
  if (crb(c,2)) { goto L_802B62E8; } // 802B62D8
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 802B62DC
  cmps(c,0,(int32_t)c->r[0],1); // 802B62E0
  if (!crb(c,2)) { IRQCHK(c); goto L_802B62CC; } // 802B62E4
L_802B62E8:;
  {uint32_t ea=c->r[2]+0xFFFFAA64u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B62E8
  cmps(c,0,(int32_t)c->r[4],0); // 802B62EC
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 802B62F0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 802B62F4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 802B62F8
  if (crb(c,2)) { goto L_802B635C; } // 802B62FC
  {uint32_t ea=c->r[4]+0x000000ACu; psq_load(c,3,ea,0,0);} // 802B6300
  {uint32_t ea=c->r[5]+0x000000ACu; psq_load(c,2,ea,0,0);} // 802B6304
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6308
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B630C
  {uint32_t ea=c->r[4]+0x000000B4u; psq_load(c,3,ea,1,0);} // 802B6310
  {uint32_t ea=c->r[5]+0x000000B4u; psq_load(c,2,ea,1,0);} // 802B6314
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,0,0);} // 802B6318
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B631C
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,2,ea,1,0);} // 802B6320
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,1,ea,1,0);} // 802B6324
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,1,ea,0,0);} // 802B6328
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B632C
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B6330
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6334
  fcmp(c,0,c->f[1],c->f[0]); // 802B6338
  if (crb(c,0)) { goto L_802B635C; } // 802B633C
  c->lr=0x802B6344u; f_8026C8AC(c); // 802B6340
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,2,ea,0,0);} // 802B6344
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6348
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,2,ea,1,0);} // 802B634C
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,0,ea,0,0);} // 802B6350
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6354
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,0);} // 802B6358
L_802B635C:;
  cmps(c,0,(int32_t)c->r[31],0); // 802B635C
  if (crb(c,2)) { goto L_802B6388; } // 802B6360
  {uint32_t ea=c->r[31]+0x000000ACu; psq_load(c,2,ea,0,0);} // 802B6364
  {uint32_t ea=c->r[30]+0x000000ACu; psq_load(c,1,ea,0,0);} // 802B6368
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B636C
  {uint32_t ea=c->r[31]+0x000000B4u; psq_load(c,2,ea,1,0);} // 802B6370
  {uint32_t ea=c->r[30]+0x000000B4u; psq_load(c,1,ea,1,0);} // 802B6374
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 802B6378
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B637C
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 802B6380
  goto L_802B63A8; // 802B6384
L_802B6388:;
  {uint32_t ea=c->r[29]+0x000000A4u; psq_load(c,2,ea,0,0);} // 802B6388
  {uint32_t ea=c->r[30]+0x000000ACu; psq_load(c,1,ea,0,0);} // 802B638C
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6390
  {uint32_t ea=c->r[29]+0x000000ACu; psq_load(c,2,ea,1,0);} // 802B6394
  {uint32_t ea=c->r[30]+0x000000B4u; psq_load(c,1,ea,1,0);} // 802B6398
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 802B639C
  {double t0=S(c->f[2]-c->f[1]), t1=S(c->ps1[2]-c->ps1[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B63A0
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 802B63A4
L_802B63A8:;
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,1,ea,0,0);} // 802B63A8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B63AC
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B63B0
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B63B4
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B63B8
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B63BC
  fcmp(c,0,c->f[1],c->f[0]); // 802B63C0
  if (crb(c,0)) { goto L_802B63E4; } // 802B63C4
  c->lr=0x802B63CCu; f_8026C8AC(c); // 802B63C8
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 802B63CC
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B63D0
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,2,ea,1,0);} // 802B63D4
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,0,0);} // 802B63D8
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B63DC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,0,ea,1,0);} // 802B63E0
L_802B63E4:;
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,3,ea,0,0);} // 802B63E4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,0,0);} // 802B63E8
  {uint32_t ea=c->r[2]+0xFFFFAA58u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B63EC
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B63F0
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_load(c,3,ea,1,0);} // 802B63F4
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,2,ea,1,0);} // 802B63F8
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,1,ea,0,0);} // 802B63FC
  {double t0=S(c->f[3]-c->f[2]), t1=S(c->ps1[3]-c->ps1[2]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6400
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,2,ea,1,0);} // 802B6404
  {uint32_t ea=c->r[28]+0x00000008u; psq_store(c,1,ea,1,0);} // 802B6408
  {uint32_t ea=c->r[28]+0x00000004u; psq_load(c,1,ea,0,0);} // 802B640C
  {double t0=S(c->f[1]*c->f[1]), t1=S(c->ps1[1]*c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6410
  {double t0=S(std::fma(c->f[2],c->f[2],c->f[1])), t1=S(std::fma(c->ps1[2],c->ps1[2],c->ps1[1])); c->f[2]=t0; c->ps1[2]=t1;} // 802B6414
  {double t0=S(c->f[2]+c->ps1[1]), t1=S(c->ps1[1]); c->f[1]=t0; c->ps1[1]=t1;} // 802B6418
  fcmp(c,0,c->f[1],c->f[0]); // 802B641C
  if (!crb(c,0)) { goto L_802B642C; } // 802B6420
  c->r[0]=0u+0x00000000u; // 802B6424
  goto L_802B644C; // 802B6428
L_802B642C:;
  c->lr=0x802B6430u; f_8026C8AC(c); // 802B642C
  {uint32_t ea=c->r[28]+0x00000000u; psq_load(c,2,ea,0,0);} // 802B6430
  c->r[0]=0u+0x00000001u; // 802B6434
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6438
  {uint32_t ea=c->r[28]+0x00000008u; psq_load(c,2,ea,1,0);} // 802B643C
  {uint32_t ea=c->r[28]+0x00000000u; psq_store(c,0,ea,0,0);} // 802B6440
  {double t0=S(c->f[2]*c->f[1]), t1=S(c->ps1[2]*c->f[1]); c->f[0]=t0; c->ps1[0]=t1;} // 802B6444
  {uint32_t ea=c->r[28]+0x00000008u; psq_store(c,0,ea,1,0);} // 802B6448
L_802B644C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B644C
  if (!crb(c,2)) { goto L_802B646C; } // 802B6450
  {uint32_t ea=c->r[29]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6454
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[0]);} // 802B6458
  {uint32_t ea=c->r[29]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802B645C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[0]);} // 802B6460
  {uint32_t ea=c->r[29]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802B6464
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[0]);} // 802B6468
L_802B646C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802B646C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802B6470
  c->r[30]=R32(c->r[1]+0x00000028u); // 802B6474
  c->r[29]=R32(c->r[1]+0x00000024u); // 802B6478
  c->r[28]=R32(c->r[1]+0x00000020u); // 802B647C
  c->lr=c->r[0]; // 802B6480
  c->r[1]=c->r[1]+0x00000030u; // 802B6484
  return; // 802B6488
}

// fn_802B648C
void f_802B648C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B648C
  c->r[0]=c->lr; // 802B6490
  c->r[4]=R32(c->r[4]+0x00000000u); // 802B6494
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6498
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B649C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802B64A0
  c->r[3]=R32(c->r[5]+0x00000000u); // 802B64A4
  cmpu(c,0,c->r[3],c->r[0]); // 802B64A8
  if (!crb(c,2)) { goto L_802B64C8; } // 802B64AC
  c->r[3]=c->r[5]+0x00000004u; // 802B64B0
  c->r[4]=c->r[4]+0x00000004u; // 802B64B4
  c->lr=0x802B64BCu; f_802E96C4(c); // 802B64B8
  c->r[0]=cntlz(c->r[3]); // 802B64BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802B64C0
  goto L_802B64CC; // 802B64C4
L_802B64C8:;
  c->r[3]=0u+0x00000000u; // 802B64C8
L_802B64CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B64CC
  c->lr=c->r[0]; // 802B64D0
  c->r[1]=c->r[1]+0x00000010u; // 802B64D4
  return; // 802B64D8
}

// fn_802B64DC
void f_802B64DC(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],8)&0x000000FFu; // 802B64DC
  c->r[5]=rotl(c->r[4],16)&0x000000FFu; // 802B64E0
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 802B64E4
  c->r[7]=0u+0x00000061u; // 802B64E8
  W8(c->r[3]+0x00000000u,c->r[7]); // 802B64EC
  W8(c->r[3]+0x00000001u,c->r[6]); // 802B64F0
  W8(c->r[3]+0x00000002u,c->r[5]); // 802B64F4
  W8(c->r[3]+0x00000003u,c->r[0]); // 802B64F8
  W8(c->r[3]+0x00000004u,c->r[4]); // 802B64FC
  return; // 802B6500
}

// fn_802B6504
void f_802B6504(Ctx* __restrict c) {
  c->r[7]=rotl(c->r[5],8)&0x000000FFu; // 802B6504
  c->r[6]=rotl(c->r[5],16)&0x000000FFu; // 802B6508
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 802B650C
  c->r[8]=0u+0x00000008u; // 802B6510
  W8(c->r[3]+0x00000000u,c->r[8]); // 802B6514
  W8(c->r[3]+0x00000001u,c->r[4]); // 802B6518
  W8(c->r[3]+0x00000002u,c->r[7]); // 802B651C
  W8(c->r[3]+0x00000003u,c->r[6]); // 802B6520
  W8(c->r[3]+0x00000004u,c->r[0]); // 802B6524
  W8(c->r[3]+0x00000005u,c->r[5]); // 802B6528
  return; // 802B652C
}

// fn_802B6530
void f_802B6530(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6530
  c->r[0]=c->lr; // 802B6534
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6538
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B653C
  c->r[8]=c->r[5]+0x00000008u; // 802B6540
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6544
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 802B6548
  c->r[3]=R32(c->r[4]+0x00000000u); // 802B654C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6550
  c->r[7]=c->r[3]+0x00000004u; // 802B6554
  c->r[6]=R32(c->r[3]+0x00000000u); // 802B6558
  c->r[3]=c->r[5]+c->r[0]; // 802B655C
  c->r[31]=c->r[3]+0x00000008u; // 802B6560
  goto L_802B65B4; // 802B6564
L_802B6568:;
  c->r[0]=rotl(c->r[3],29)&0x00001FFFu; // 802B6568
  c->r[8]=c->r[31]|c->r[31]; // 802B656C
  cmpu(c,0,c->r[0],c->r[6]); // 802B6570
  c->r[3]=rotl(c->r[3],0)&0x00000007u; // 802B6574
  if (!crb(c,0)) { goto L_802B65A4; } // 802B6578
  c->r[0]=R8(c->r[7]+c->r[0]); // 802B657C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B6580
  c->r[0]=sraw(c,c->r[0],(c->r[3])&63); // 802B6584
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802B6588
  if (crb(c,2)) { goto L_802B65A4; } // 802B658C
  c->r[0]=R16(c->r[31]+0x00000006u); // 802B6590
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6594
  c->r[3]=c->r[5]+c->r[0]; // 802B6598
  c->r[31]=c->r[3]+0x00000008u; // 802B659C
  goto L_802B65B4; // 802B65A0
L_802B65A4:;
  c->r[0]=R16(c->r[31]+0x00000004u); // 802B65A4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B65A8
  c->r[3]=c->r[5]+c->r[0]; // 802B65AC
  c->r[31]=c->r[3]+0x00000008u; // 802B65B0
L_802B65B4:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 802B65B4
  c->r[0]=R16(c->r[8]+0x00000000u); // 802B65B8
  cmpu(c,0,c->r[0],c->r[3]); // 802B65BC
  if (crb(c,1)) { IRQCHK(c); goto L_802B6568; } // 802B65C0
  c->r[0]=R32(c->r[31]+0x00000008u); // 802B65C4
  c->r[3]=c->r[4]|c->r[4]; // 802B65C8
  c->r[4]=c->r[1]+0x00000008u; // 802B65CC
  c->r[5]=c->r[5]+c->r[0]; // 802B65D0
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802B65D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B65D8
  c->lr=0x802B65E0u; f_802B648C(c); // 802B65DC
  cmps(c,0,(int32_t)c->r[3],0); // 802B65E0
  if (crb(c,2)) { goto L_802B65F0; } // 802B65E4
  c->r[3]=c->r[31]|c->r[31]; // 802B65E8
  goto L_802B65F4; // 802B65EC
L_802B65F0:;
  c->r[3]=0u+0x00000000u; // 802B65F0
L_802B65F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B65F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B65F8
  c->lr=c->r[0]; // 802B65FC
  c->r[1]=c->r[1]+0x00000020u; // 802B6600
  return; // 802B6604
}

// fn_802B6608
void f_802B6608(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6608
  c->r[0]=c->lr; // 802B660C
  c->r[6]=R32(c->r[3]+0x00000000u); // 802B6610
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6614
  c->r[7]=c->r[6]+0x00000008u; // 802B6618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B661C
  c->r[0]=R16(c->r[6]+0x0000000Cu); // 802B6620
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6624
  c->r[3]=c->r[6]+c->r[0]; // 802B6628
  c->r[31]=c->r[3]+0x00000008u; // 802B662C
  goto L_802B6680; // 802B6630
L_802B6634:;
  c->r[0]=rotl(c->r[3],29)&0x00001FFFu; // 802B6634
  c->r[7]=c->r[31]|c->r[31]; // 802B6638
  cmpu(c,0,c->r[0],c->r[5]); // 802B663C
  c->r[3]=rotl(c->r[3],0)&0x00000007u; // 802B6640
  if (!crb(c,0)) { goto L_802B6670; } // 802B6644
  c->r[0]=R8(c->r[4]+c->r[0]); // 802B6648
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802B664C
  c->r[0]=sraw(c,c->r[0],(c->r[3])&63); // 802B6650
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802B6654
  if (crb(c,2)) { goto L_802B6670; } // 802B6658
  c->r[0]=R16(c->r[31]+0x00000006u); // 802B665C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6660
  c->r[3]=c->r[6]+c->r[0]; // 802B6664
  c->r[31]=c->r[3]+0x00000008u; // 802B6668
  goto L_802B6680; // 802B666C
L_802B6670:;
  c->r[0]=R16(c->r[31]+0x00000004u); // 802B6670
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6674
  c->r[3]=c->r[6]+c->r[0]; // 802B6678
  c->r[31]=c->r[3]+0x00000008u; // 802B667C
L_802B6680:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 802B6680
  c->r[0]=R16(c->r[7]+0x00000000u); // 802B6684
  cmpu(c,0,c->r[0],c->r[3]); // 802B6688
  if (crb(c,1)) { IRQCHK(c); goto L_802B6634; } // 802B668C
  c->r[0]=R32(c->r[31]+0x00000008u); // 802B6690
  cmps(c,0,(int32_t)c->r[0],0); // 802B6694
  if (crb(c,2)) { goto L_802B66C4; } // 802B6698
  c->r[3]=c->r[4]|c->r[4]; // 802B669C
  if (crb(c,2)) { goto L_802B66AC; } // 802B66A0
  c->r[4]=c->r[6]+c->r[0]; // 802B66A4
  goto L_802B66B0; // 802B66A8
L_802B66AC:;
  c->r[4]=0u+0x00000000u; // 802B66AC
L_802B66B0:;
  c->lr=0x802B66B4u; f_802E96C4(c); // 802B66B0
  cmps(c,0,(int32_t)c->r[3],0); // 802B66B4
  if (!crb(c,2)) { goto L_802B66C4; } // 802B66B8
  c->r[3]=c->r[31]|c->r[31]; // 802B66BC
  goto L_802B66C8; // 802B66C0
L_802B66C4:;
  c->r[3]=0u+0x00000000u; // 802B66C4
L_802B66C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B66C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B66CC
  c->lr=c->r[0]; // 802B66D0
  c->r[1]=c->r[1]+0x00000010u; // 802B66D4
  return; // 802B66D8
}

// fn_802B66DC
void f_802B66DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B66DC
  c->r[0]=c->lr; // 802B66E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B66E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 802B66E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B66EC
  c->r[31]=c->r[4]|c->r[4]; // 802B66F0
  cmps(c,0,(int32_t)c->r[0],0); // 802B66F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802B66F8
  c->r[30]=c->r[3]|c->r[3]; // 802B66FC
  if (crb(c,2)) { goto L_802B673C; } // 802B6700
  cmps(c,0,(int32_t)c->r[4],0); // 802B6704
  if (crb(c,2)) { goto L_802B673C; } // 802B6708
  c->r[3]=c->r[31]|c->r[31]; // 802B670C
  c->lr=0x802B6714u; f_802F0250(c); // 802B6710
  c->r[5]=c->r[3]|c->r[3]; // 802B6714
  c->r[3]=c->r[30]|c->r[30]; // 802B6718
  c->r[4]=c->r[31]|c->r[31]; // 802B671C
  c->lr=0x802B6724u; f_802B6608(c); // 802B6720
  cmps(c,0,(int32_t)c->r[3],0); // 802B6724
  if (crb(c,2)) { goto L_802B673C; } // 802B6728
  c->r[4]=R32(c->r[30]+0x00000000u); // 802B672C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802B6730
  c->r[3]=c->r[4]+c->r[0]; // 802B6734
  goto L_802B6740; // 802B6738
L_802B673C:;
  c->r[3]=0u+0x00000000u; // 802B673C
L_802B6740:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B6740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B6744
  c->r[30]=R32(c->r[1]+0x00000008u); // 802B6748
  c->lr=c->r[0]; // 802B674C
  c->r[1]=c->r[1]+0x00000010u; // 802B6750
  return; // 802B6754
}

// fn_802B6758
void f_802B6758(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6758
  c->r[0]=c->lr; // 802B675C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6760
  c->r[0]=R32(c->r[3]+0x00000000u); // 802B6764
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6768
  c->r[31]=c->r[3]|c->r[3]; // 802B676C
  cmps(c,0,(int32_t)c->r[0],0); // 802B6770
  if (crb(c,2)) { goto L_802B67A8; } // 802B6774
  c->r[0]=R32(c->r[4]+0x00000000u); // 802B6778
  cmps(c,0,(int32_t)c->r[0],0); // 802B677C
  if (crb(c,2)) { goto L_802B67A8; } // 802B6780
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6784
  c->r[4]=c->r[1]+0x00000008u; // 802B6788
  c->lr=0x802B6790u; f_802B6530(c); // 802B678C
  cmps(c,0,(int32_t)c->r[3],0); // 802B6790
  if (crb(c,2)) { goto L_802B67A8; } // 802B6794
  c->r[4]=R32(c->r[31]+0x00000000u); // 802B6798
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802B679C
  c->r[3]=c->r[4]+c->r[0]; // 802B67A0
  goto L_802B67AC; // 802B67A4
L_802B67A8:;
  c->r[3]=0u+0x00000000u; // 802B67A8
L_802B67AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B67AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B67B0
  c->lr=c->r[0]; // 802B67B4
  c->r[1]=c->r[1]+0x00000020u; // 802B67B8
  return; // 802B67BC
}

// fn_802B67C0
void f_802B67C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B67C0
  c->r[0]=c->lr; // 802B67C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B67C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 802B67CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B67D0
  c->r[31]=c->r[3]|c->r[3]; // 802B67D4
  cmps(c,0,(int32_t)c->r[0],0); // 802B67D8
  if (crb(c,2)) { goto L_802B6818; } // 802B67DC
  c->r[0]=R32(c->r[4]+0x00000000u); // 802B67E0
  cmps(c,0,(int32_t)c->r[0],0); // 802B67E4
  if (crb(c,2)) { goto L_802B6818; } // 802B67E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B67EC
  c->r[4]=c->r[1]+0x00000008u; // 802B67F0
  c->lr=0x802B67F8u; f_802B6530(c); // 802B67F4
  cmps(c,0,(int32_t)c->r[3],0); // 802B67F8
  if (crb(c,2)) { goto L_802B6818; } // 802B67FC
  c->r[4]=R32(c->r[31]+0x00000000u); // 802B6800
  c->r[0]=c->r[4]+0x00000018u; // 802B6804
  c->r[0]=c->r[3]-c->r[0]; // 802B6808
  c->r[0]=sraw(c,c->r[0],4); // 802B680C
  c->r[3]=addc(c,c->r[0],0,c->xer_ca); // 802B6810
  goto L_802B681C; // 802B6814
L_802B6818:;
  c->r[3]=0u+0xFFFFFFFFu; // 802B6818
L_802B681C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B681C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6820
  c->lr=c->r[0]; // 802B6824
  c->r[1]=c->r[1]+0x00000020u; // 802B6828
  return; // 802B682C
}

// fn_802B6830
void f_802B6830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6830
  c->r[0]=c->lr; // 802B6834
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6838
  c->r[3]=0u+0x80480000u; // 802B683C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6840
  c->r[3]=c->r[3]+0x00006880u; // 802B6844
  c->r[0]=c->r[5]+0x00000018u; // 802B6848
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B684C
  c->r[31]=c->r[4]|c->r[4]; // 802B6850
  c->r[4]=c->r[1]+0x00000008u; // 802B6854
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6858
  c->r[3]=c->r[1]+0x0000000Cu; // 802B685C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6860
  c->lr=0x802B6868u; f_802B6758(c); // 802B6864
  cmps(c,0,(int32_t)c->r[3],0); // 802B6868
  if (crb(c,2)) { goto L_802B68B0; } // 802B686C
  c->r[0]=0u-c->r[3]; // 802B6870
  c->r[0]=c->r[0]|c->r[3]; // 802B6874
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6878
  if (crb(c,2)) { goto L_802B68A8; } // 802B687C
  c->r[0]=c->r[31]+0x00000001u; // 802B6880
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6884
  c->r[4]=c->r[3]+c->r[0]; // 802B6888
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B688C
  cmps(c,0,(int32_t)c->r[0],0); // 802B6890
  if (crb(c,2)) { goto L_802B68A0; } // 802B6894
  c->r[3]=c->r[3]+c->r[0]; // 802B6898
  goto L_802B68B4; // 802B689C
L_802B68A0:;
  c->r[3]=0u+0x00000000u; // 802B68A0
  goto L_802B68B4; // 802B68A4
L_802B68A8:;
  c->r[3]=0u+0x00000000u; // 802B68A8
  goto L_802B68B4; // 802B68AC
L_802B68B0:;
  c->r[3]=0u+0x00000000u; // 802B68B0
L_802B68B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B68B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B68B8
  c->lr=c->r[0]; // 802B68BC
  c->r[1]=c->r[1]+0x00000020u; // 802B68C0
  return; // 802B68C4
}

// fn_802B68C8
void f_802B68C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B68C8
  c->r[0]=c->lr; // 802B68CC
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B68D0
  c->r[3]=0u+0x80480000u; // 802B68D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B68D8
  c->r[3]=c->r[3]+0x00006880u; // 802B68DC
  c->r[0]=c->r[5]+0x00000018u; // 802B68E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B68E4
  c->r[31]=c->r[4]|c->r[4]; // 802B68E8
  c->r[4]=c->r[1]+0x0000000Cu; // 802B68EC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B68F0
  c->r[3]=c->r[1]+0x00000008u; // 802B68F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B68F8
  c->lr=0x802B6900u; f_802B6758(c); // 802B68FC
  cmps(c,0,(int32_t)c->r[3],0); // 802B6900
  if (crb(c,2)) { goto L_802B6948; } // 802B6904
  c->r[0]=0u-c->r[3]; // 802B6908
  c->r[0]=c->r[0]|c->r[3]; // 802B690C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6910
  if (crb(c,2)) { goto L_802B6940; } // 802B6914
  c->r[0]=c->r[31]+0x00000001u; // 802B6918
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B691C
  c->r[4]=c->r[3]+c->r[0]; // 802B6920
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B6924
  cmps(c,0,(int32_t)c->r[0],0); // 802B6928
  if (crb(c,2)) { goto L_802B6938; } // 802B692C
  c->r[3]=c->r[3]+c->r[0]; // 802B6930
  goto L_802B694C; // 802B6934
L_802B6938:;
  c->r[3]=0u+0x00000000u; // 802B6938
  goto L_802B694C; // 802B693C
L_802B6940:;
  c->r[3]=0u+0x00000000u; // 802B6940
  goto L_802B694C; // 802B6944
L_802B6948:;
  c->r[3]=0u+0x00000000u; // 802B6948
L_802B694C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B694C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6950
  c->lr=c->r[0]; // 802B6954
  c->r[1]=c->r[1]+0x00000020u; // 802B6958
  return; // 802B695C
}

// fn_802B6960
void f_802B6960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6960
  c->r[0]=c->lr; // 802B6964
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6968
  c->r[3]=0u+0x80480000u; // 802B696C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6970
  c->r[3]=c->r[3]+0x00006880u; // 802B6974
  c->r[0]=c->r[5]+0x00000018u; // 802B6978
  c->r[4]=c->r[1]+0x00000008u; // 802B697C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6980
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6984
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6988
  c->lr=0x802B6990u; f_802B6758(c); // 802B698C
  cmps(c,0,(int32_t)c->r[3],0); // 802B6990
  if (crb(c,2)) { goto L_802B69B8; } // 802B6994
  c->r[0]=0u-c->r[3]; // 802B6998
  c->r[0]=c->r[0]|c->r[3]; // 802B699C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B69A0
  if (crb(c,2)) { goto L_802B69B0; } // 802B69A4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B69A8
  goto L_802B69BC; // 802B69AC
L_802B69B0:;
  c->r[3]=0u+0x00000000u; // 802B69B0
  goto L_802B69BC; // 802B69B4
L_802B69B8:;
  c->r[3]=0u+0x00000000u; // 802B69B8
L_802B69BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B69BC
  c->lr=c->r[0]; // 802B69C0
  c->r[1]=c->r[1]+0x00000010u; // 802B69C4
  return; // 802B69C8
}

// fn_802B69CC
void f_802B69CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B69CC
  c->r[0]=c->lr; // 802B69D0
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B69D4
  c->r[3]=0u+0x80480000u; // 802B69D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B69DC
  c->r[3]=c->r[3]+0x000068A0u; // 802B69E0
  c->r[0]=c->r[5]+0x00000018u; // 802B69E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B69E8
  c->r[31]=c->r[4]|c->r[4]; // 802B69EC
  c->r[4]=c->r[1]+0x00000010u; // 802B69F0
  W32(c->r[1]+0x00000010u,c->r[3]); // 802B69F4
  c->r[3]=c->r[1]+0x00000014u; // 802B69F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B69FC
  c->lr=0x802B6A04u; f_802B6758(c); // 802B6A00
  cmps(c,0,(int32_t)c->r[3],0); // 802B6A04
  if (crb(c,2)) { goto L_802B6A28; } // 802B6A08
  c->r[0]=R32(c->r[31]+0x00000000u); // 802B6A0C
  c->r[4]=c->r[1]+0x00000008u; // 802B6A10
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6A14
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6A18
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6A1C
  c->lr=0x802B6A24u; f_802B6758(c); // 802B6A20
  goto L_802B6A2C; // 802B6A24
L_802B6A28:;
  c->r[3]=0u+0x00000000u; // 802B6A28
L_802B6A2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6A2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6A30
  c->lr=c->r[0]; // 802B6A34
  c->r[1]=c->r[1]+0x00000020u; // 802B6A38
  return; // 802B6A3C
}

// fn_802B6A40
void f_802B6A40(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6A40
  c->r[0]=c->lr; // 802B6A44
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6A48
  c->r[3]=0u+0x80480000u; // 802B6A4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6A50
  c->r[3]=c->r[3]+0x000068C0u; // 802B6A54
  c->r[0]=c->r[5]+0x00000018u; // 802B6A58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6A5C
  c->r[31]=c->r[4]|c->r[4]; // 802B6A60
  c->r[4]=c->r[1]+0x00000010u; // 802B6A64
  W32(c->r[1]+0x00000010u,c->r[3]); // 802B6A68
  c->r[3]=c->r[1]+0x00000014u; // 802B6A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6A70
  c->lr=0x802B6A78u; f_802B6758(c); // 802B6A74
  cmps(c,0,(int32_t)c->r[3],0); // 802B6A78
  if (crb(c,2)) { goto L_802B6A9C; } // 802B6A7C
  c->r[0]=R32(c->r[31]+0x00000000u); // 802B6A80
  c->r[4]=c->r[1]+0x00000008u; // 802B6A84
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6A88
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6A8C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6A90
  c->lr=0x802B6A98u; f_802B6758(c); // 802B6A94
  goto L_802B6AA0; // 802B6A98
L_802B6A9C:;
  c->r[3]=0u+0x00000000u; // 802B6A9C
L_802B6AA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6AA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6AA4
  c->lr=c->r[0]; // 802B6AA8
  c->r[1]=c->r[1]+0x00000020u; // 802B6AAC
  return; // 802B6AB0
}

// fn_802B6AB4
void f_802B6AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6AB4
  c->r[0]=c->lr; // 802B6AB8
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6ABC
  c->r[3]=0u+0x80480000u; // 802B6AC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6AC4
  c->r[3]=c->r[3]+0x000068E0u; // 802B6AC8
  c->r[0]=c->r[5]+0x00000018u; // 802B6ACC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6AD0
  c->r[31]=c->r[4]|c->r[4]; // 802B6AD4
  c->r[4]=c->r[1]+0x0000000Cu; // 802B6AD8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6ADC
  c->r[3]=c->r[1]+0x00000008u; // 802B6AE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6AE4
  c->lr=0x802B6AECu; f_802B6758(c); // 802B6AE8
  cmps(c,0,(int32_t)c->r[3],0); // 802B6AEC
  if (crb(c,2)) { goto L_802B6B34; } // 802B6AF0
  c->r[0]=0u-c->r[3]; // 802B6AF4
  c->r[0]=c->r[0]|c->r[3]; // 802B6AF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6AFC
  if (crb(c,2)) { goto L_802B6B2C; } // 802B6B00
  c->r[0]=c->r[31]+0x00000001u; // 802B6B04
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6B08
  c->r[4]=c->r[3]+c->r[0]; // 802B6B0C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B6B10
  cmps(c,0,(int32_t)c->r[0],0); // 802B6B14
  if (crb(c,2)) { goto L_802B6B24; } // 802B6B18
  c->r[3]=c->r[3]+c->r[0]; // 802B6B1C
  goto L_802B6B38; // 802B6B20
L_802B6B24:;
  c->r[3]=0u+0x00000000u; // 802B6B24
  goto L_802B6B38; // 802B6B28
L_802B6B2C:;
  c->r[3]=0u+0x00000000u; // 802B6B2C
  goto L_802B6B38; // 802B6B30
L_802B6B34:;
  c->r[3]=0u+0x00000000u; // 802B6B34
L_802B6B38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6B38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6B3C
  c->lr=c->r[0]; // 802B6B40
  c->r[1]=c->r[1]+0x00000020u; // 802B6B44
  return; // 802B6B48
}

// fn_802B6B4C
void f_802B6B4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6B4C
  c->r[0]=c->lr; // 802B6B50
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6B54
  c->r[3]=0u+0x80480000u; // 802B6B58
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6B5C
  c->r[3]=c->r[3]+0x000068E0u; // 802B6B60
  c->r[0]=c->r[5]+0x00000018u; // 802B6B64
  c->r[4]=c->r[1]+0x00000008u; // 802B6B68
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6B6C
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6B70
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6B74
  c->lr=0x802B6B7Cu; f_802B6758(c); // 802B6B78
  cmps(c,0,(int32_t)c->r[3],0); // 802B6B7C
  if (crb(c,2)) { goto L_802B6BA4; } // 802B6B80
  c->r[0]=0u-c->r[3]; // 802B6B84
  c->r[0]=c->r[0]|c->r[3]; // 802B6B88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6B8C
  if (crb(c,2)) { goto L_802B6B9C; } // 802B6B90
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B6B94
  goto L_802B6BA8; // 802B6B98
L_802B6B9C:;
  c->r[3]=0u+0x00000000u; // 802B6B9C
  goto L_802B6BA8; // 802B6BA0
L_802B6BA4:;
  c->r[3]=0u+0x00000000u; // 802B6BA4
L_802B6BA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B6BA8
  c->lr=c->r[0]; // 802B6BAC
  c->r[1]=c->r[1]+0x00000010u; // 802B6BB0
  return; // 802B6BB4
}

// fn_802B6BB8
void f_802B6BB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6BB8
  c->r[0]=c->lr; // 802B6BBC
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6BC0
  c->r[3]=0u+0x80480000u; // 802B6BC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6BC8
  c->r[3]=c->r[3]+0x00006900u; // 802B6BCC
  c->r[0]=c->r[5]+0x00000018u; // 802B6BD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6BD4
  c->r[31]=c->r[4]|c->r[4]; // 802B6BD8
  c->r[4]=c->r[1]+0x0000000Cu; // 802B6BDC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6BE0
  c->r[3]=c->r[1]+0x00000008u; // 802B6BE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6BE8
  c->lr=0x802B6BF0u; f_802B6758(c); // 802B6BEC
  cmps(c,0,(int32_t)c->r[3],0); // 802B6BF0
  if (crb(c,2)) { goto L_802B6C38; } // 802B6BF4
  c->r[0]=0u-c->r[3]; // 802B6BF8
  c->r[0]=c->r[0]|c->r[3]; // 802B6BFC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6C00
  if (crb(c,2)) { goto L_802B6C30; } // 802B6C04
  c->r[0]=c->r[31]+0x00000001u; // 802B6C08
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6C0C
  c->r[4]=c->r[3]+c->r[0]; // 802B6C10
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B6C14
  cmps(c,0,(int32_t)c->r[0],0); // 802B6C18
  if (crb(c,2)) { goto L_802B6C28; } // 802B6C1C
  c->r[3]=c->r[3]+c->r[0]; // 802B6C20
  goto L_802B6C3C; // 802B6C24
L_802B6C28:;
  c->r[3]=0u+0x00000000u; // 802B6C28
  goto L_802B6C3C; // 802B6C2C
L_802B6C30:;
  c->r[3]=0u+0x00000000u; // 802B6C30
  goto L_802B6C3C; // 802B6C34
L_802B6C38:;
  c->r[3]=0u+0x00000000u; // 802B6C38
L_802B6C3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6C3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6C40
  c->lr=c->r[0]; // 802B6C44
  c->r[1]=c->r[1]+0x00000020u; // 802B6C48
  return; // 802B6C4C
}

// fn_802B6C50
void f_802B6C50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6C50
  c->r[0]=c->lr; // 802B6C54
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6C58
  c->r[3]=0u+0x80480000u; // 802B6C5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6C60
  c->r[3]=c->r[3]+0x00006900u; // 802B6C64
  c->r[0]=c->r[5]+0x00000018u; // 802B6C68
  c->r[4]=c->r[1]+0x00000008u; // 802B6C6C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6C70
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6C74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6C78
  c->lr=0x802B6C80u; f_802B6758(c); // 802B6C7C
  cmps(c,0,(int32_t)c->r[3],0); // 802B6C80
  if (crb(c,2)) { goto L_802B6CA8; } // 802B6C84
  c->r[0]=0u-c->r[3]; // 802B6C88
  c->r[0]=c->r[0]|c->r[3]; // 802B6C8C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6C90
  if (crb(c,2)) { goto L_802B6CA0; } // 802B6C94
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B6C98
  goto L_802B6CAC; // 802B6C9C
L_802B6CA0:;
  c->r[3]=0u+0x00000000u; // 802B6CA0
  goto L_802B6CAC; // 802B6CA4
L_802B6CA8:;
  c->r[3]=0u+0x00000000u; // 802B6CA8
L_802B6CAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B6CAC
  c->lr=c->r[0]; // 802B6CB0
  c->r[1]=c->r[1]+0x00000010u; // 802B6CB4
  return; // 802B6CB8
}

// fn_802B6CBC
void f_802B6CBC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6CBC
  c->r[0]=c->lr; // 802B6CC0
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6CC4
  c->r[3]=0u+0x80480000u; // 802B6CC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6CCC
  c->r[3]=c->r[3]+0x00006920u; // 802B6CD0
  c->r[0]=c->r[5]+0x00000018u; // 802B6CD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6CD8
  c->r[31]=c->r[4]|c->r[4]; // 802B6CDC
  c->r[4]=c->r[1]+0x0000000Cu; // 802B6CE0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6CE4
  c->r[3]=c->r[1]+0x00000008u; // 802B6CE8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6CEC
  c->lr=0x802B6CF4u; f_802B6758(c); // 802B6CF0
  cmps(c,0,(int32_t)c->r[3],0); // 802B6CF4
  if (crb(c,2)) { goto L_802B6D3C; } // 802B6CF8
  c->r[0]=0u-c->r[3]; // 802B6CFC
  c->r[0]=c->r[0]|c->r[3]; // 802B6D00
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6D04
  if (crb(c,2)) { goto L_802B6D34; } // 802B6D08
  c->r[0]=c->r[31]+0x00000001u; // 802B6D0C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6D10
  c->r[4]=c->r[3]+c->r[0]; // 802B6D14
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B6D18
  cmps(c,0,(int32_t)c->r[0],0); // 802B6D1C
  if (crb(c,2)) { goto L_802B6D2C; } // 802B6D20
  c->r[3]=c->r[3]+c->r[0]; // 802B6D24
  goto L_802B6D40; // 802B6D28
L_802B6D2C:;
  c->r[3]=0u+0x00000000u; // 802B6D2C
  goto L_802B6D40; // 802B6D30
L_802B6D34:;
  c->r[3]=0u+0x00000000u; // 802B6D34
  goto L_802B6D40; // 802B6D38
L_802B6D3C:;
  c->r[3]=0u+0x00000000u; // 802B6D3C
L_802B6D40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6D40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6D44
  c->lr=c->r[0]; // 802B6D48
  c->r[1]=c->r[1]+0x00000020u; // 802B6D4C
  return; // 802B6D50
}

// fn_802B6D54
void f_802B6D54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6D54
  c->r[0]=c->lr; // 802B6D58
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6D5C
  c->r[3]=0u+0x80480000u; // 802B6D60
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6D64
  c->r[3]=c->r[3]+0x00006920u; // 802B6D68
  c->r[0]=c->r[5]+0x00000018u; // 802B6D6C
  c->r[4]=c->r[1]+0x00000008u; // 802B6D70
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6D74
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6D78
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6D7C
  c->lr=0x802B6D84u; f_802B6758(c); // 802B6D80
  cmps(c,0,(int32_t)c->r[3],0); // 802B6D84
  if (crb(c,2)) { goto L_802B6DAC; } // 802B6D88
  c->r[0]=0u-c->r[3]; // 802B6D8C
  c->r[0]=c->r[0]|c->r[3]; // 802B6D90
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6D94
  if (crb(c,2)) { goto L_802B6DA4; } // 802B6D98
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B6D9C
  goto L_802B6DB0; // 802B6DA0
L_802B6DA4:;
  c->r[3]=0u+0x00000000u; // 802B6DA4
  goto L_802B6DB0; // 802B6DA8
L_802B6DAC:;
  c->r[3]=0u+0x00000000u; // 802B6DAC
L_802B6DB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B6DB0
  c->lr=c->r[0]; // 802B6DB4
  c->r[1]=c->r[1]+0x00000010u; // 802B6DB8
  return; // 802B6DBC
}

// fn_802B6DC0
void f_802B6DC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6DC0
  c->r[0]=c->lr; // 802B6DC4
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6DC8
  c->r[3]=0u+0x80480000u; // 802B6DCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6DD0
  c->r[3]=c->r[3]+0x00006940u; // 802B6DD4
  c->r[0]=c->r[5]+0x00000018u; // 802B6DD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6DDC
  c->r[31]=c->r[4]|c->r[4]; // 802B6DE0
  c->r[4]=c->r[1]+0x0000000Cu; // 802B6DE4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6DE8
  c->r[3]=c->r[1]+0x00000008u; // 802B6DEC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6DF0
  c->lr=0x802B6DF8u; f_802B6758(c); // 802B6DF4
  cmps(c,0,(int32_t)c->r[3],0); // 802B6DF8
  if (crb(c,2)) { goto L_802B6E40; } // 802B6DFC
  c->r[0]=0u-c->r[3]; // 802B6E00
  c->r[0]=c->r[0]|c->r[3]; // 802B6E04
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6E08
  if (crb(c,2)) { goto L_802B6E38; } // 802B6E0C
  c->r[0]=c->r[31]+0x00000001u; // 802B6E10
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6E14
  c->r[4]=c->r[3]+c->r[0]; // 802B6E18
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B6E1C
  cmps(c,0,(int32_t)c->r[0],0); // 802B6E20
  if (crb(c,2)) { goto L_802B6E30; } // 802B6E24
  c->r[3]=c->r[3]+c->r[0]; // 802B6E28
  goto L_802B6E44; // 802B6E2C
L_802B6E30:;
  c->r[3]=0u+0x00000000u; // 802B6E30
  goto L_802B6E44; // 802B6E34
L_802B6E38:;
  c->r[3]=0u+0x00000000u; // 802B6E38
  goto L_802B6E44; // 802B6E3C
L_802B6E40:;
  c->r[3]=0u+0x00000000u; // 802B6E40
L_802B6E44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6E44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6E48
  c->lr=c->r[0]; // 802B6E4C
  c->r[1]=c->r[1]+0x00000020u; // 802B6E50
  return; // 802B6E54
}

// fn_802B6E58
void f_802B6E58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6E58
  c->r[0]=c->lr; // 802B6E5C
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6E60
  c->r[3]=0u+0x80480000u; // 802B6E64
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6E68
  c->r[3]=c->r[3]+0x00006940u; // 802B6E6C
  c->r[0]=c->r[5]+0x00000018u; // 802B6E70
  c->r[4]=c->r[1]+0x00000008u; // 802B6E74
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6E78
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6E7C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6E80
  c->lr=0x802B6E88u; f_802B6758(c); // 802B6E84
  cmps(c,0,(int32_t)c->r[3],0); // 802B6E88
  if (crb(c,2)) { goto L_802B6EB0; } // 802B6E8C
  c->r[0]=0u-c->r[3]; // 802B6E90
  c->r[0]=c->r[0]|c->r[3]; // 802B6E94
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6E98
  if (crb(c,2)) { goto L_802B6EA8; } // 802B6E9C
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B6EA0
  goto L_802B6EB4; // 802B6EA4
L_802B6EA8:;
  c->r[3]=0u+0x00000000u; // 802B6EA8
  goto L_802B6EB4; // 802B6EAC
L_802B6EB0:;
  c->r[3]=0u+0x00000000u; // 802B6EB0
L_802B6EB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B6EB4
  c->lr=c->r[0]; // 802B6EB8
  c->r[1]=c->r[1]+0x00000010u; // 802B6EBC
  return; // 802B6EC0
}

// fn_802B6EC4
void f_802B6EC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6EC4
  c->r[0]=c->lr; // 802B6EC8
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6ECC
  c->r[3]=0u+0x80480000u; // 802B6ED0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6ED4
  c->r[3]=c->r[3]+0x00006960u; // 802B6ED8
  c->r[0]=c->r[5]+0x00000018u; // 802B6EDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6EE0
  c->r[31]=c->r[4]|c->r[4]; // 802B6EE4
  c->r[4]=c->r[1]+0x0000000Cu; // 802B6EE8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6EEC
  c->r[3]=c->r[1]+0x00000008u; // 802B6EF0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6EF4
  c->lr=0x802B6EFCu; f_802B6758(c); // 802B6EF8
  cmps(c,0,(int32_t)c->r[3],0); // 802B6EFC
  if (crb(c,2)) { goto L_802B6F44; } // 802B6F00
  c->r[0]=0u-c->r[3]; // 802B6F04
  c->r[0]=c->r[0]|c->r[3]; // 802B6F08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6F0C
  if (crb(c,2)) { goto L_802B6F3C; } // 802B6F10
  c->r[0]=c->r[31]+0x00000001u; // 802B6F14
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B6F18
  c->r[4]=c->r[3]+c->r[0]; // 802B6F1C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B6F20
  cmps(c,0,(int32_t)c->r[0],0); // 802B6F24
  if (crb(c,2)) { goto L_802B6F34; } // 802B6F28
  c->r[3]=c->r[3]+c->r[0]; // 802B6F2C
  goto L_802B6F48; // 802B6F30
L_802B6F34:;
  c->r[3]=0u+0x00000000u; // 802B6F34
  goto L_802B6F48; // 802B6F38
L_802B6F3C:;
  c->r[3]=0u+0x00000000u; // 802B6F3C
  goto L_802B6F48; // 802B6F40
L_802B6F44:;
  c->r[3]=0u+0x00000000u; // 802B6F44
L_802B6F48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B6F48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B6F4C
  c->lr=c->r[0]; // 802B6F50
  c->r[1]=c->r[1]+0x00000020u; // 802B6F54
  return; // 802B6F58
}

// fn_802B6F5C
void f_802B6F5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6F5C
  c->r[0]=c->lr; // 802B6F60
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6F64
  c->r[3]=0u+0x80480000u; // 802B6F68
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B6F6C
  c->r[3]=c->r[3]+0x00006960u; // 802B6F70
  c->r[0]=c->r[5]+0x00000018u; // 802B6F74
  c->r[4]=c->r[1]+0x00000008u; // 802B6F78
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B6F7C
  c->r[3]=c->r[1]+0x0000000Cu; // 802B6F80
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B6F84
  c->lr=0x802B6F8Cu; f_802B6758(c); // 802B6F88
  cmps(c,0,(int32_t)c->r[3],0); // 802B6F8C
  if (crb(c,2)) { goto L_802B6FB4; } // 802B6F90
  c->r[0]=0u-c->r[3]; // 802B6F94
  c->r[0]=c->r[0]|c->r[3]; // 802B6F98
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B6F9C
  if (crb(c,2)) { goto L_802B6FAC; } // 802B6FA0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B6FA4
  goto L_802B6FB8; // 802B6FA8
L_802B6FAC:;
  c->r[3]=0u+0x00000000u; // 802B6FAC
  goto L_802B6FB8; // 802B6FB0
L_802B6FB4:;
  c->r[3]=0u+0x00000000u; // 802B6FB4
L_802B6FB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B6FB8
  c->lr=c->r[0]; // 802B6FBC
  c->r[1]=c->r[1]+0x00000010u; // 802B6FC0
  return; // 802B6FC4
}

// fn_802B6FC8
void f_802B6FC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B6FC8
  c->r[0]=c->lr; // 802B6FCC
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B6FD0
  c->r[3]=0u+0x80480000u; // 802B6FD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B6FD8
  c->r[3]=c->r[3]+0x00006980u; // 802B6FDC
  c->r[0]=c->r[5]+0x00000018u; // 802B6FE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B6FE4
  c->r[31]=c->r[4]|c->r[4]; // 802B6FE8
  c->r[4]=c->r[1]+0x0000000Cu; // 802B6FEC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B6FF0
  c->r[3]=c->r[1]+0x00000008u; // 802B6FF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B6FF8
  c->lr=0x802B7000u; f_802B6758(c); // 802B6FFC
  cmps(c,0,(int32_t)c->r[3],0); // 802B7000
  if (crb(c,2)) { goto L_802B7048; } // 802B7004
  c->r[0]=0u-c->r[3]; // 802B7008
  c->r[0]=c->r[0]|c->r[3]; // 802B700C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7010
  if (crb(c,2)) { goto L_802B7040; } // 802B7014
  c->r[0]=c->r[31]+0x00000001u; // 802B7018
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B701C
  c->r[4]=c->r[3]+c->r[0]; // 802B7020
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7024
  cmps(c,0,(int32_t)c->r[0],0); // 802B7028
  if (crb(c,2)) { goto L_802B7038; } // 802B702C
  c->r[3]=c->r[3]+c->r[0]; // 802B7030
  goto L_802B704C; // 802B7034
L_802B7038:;
  c->r[3]=0u+0x00000000u; // 802B7038
  goto L_802B704C; // 802B703C
L_802B7040:;
  c->r[3]=0u+0x00000000u; // 802B7040
  goto L_802B704C; // 802B7044
L_802B7048:;
  c->r[3]=0u+0x00000000u; // 802B7048
L_802B704C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B704C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B7050
  c->lr=c->r[0]; // 802B7054
  c->r[1]=c->r[1]+0x00000020u; // 802B7058
  return; // 802B705C
}

// fn_802B7060
void f_802B7060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B7060
  c->r[0]=c->lr; // 802B7064
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B7068
  c->r[3]=0u+0x80480000u; // 802B706C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B7070
  c->r[3]=c->r[3]+0x00006980u; // 802B7074
  c->r[0]=c->r[5]+0x00000018u; // 802B7078
  c->r[4]=c->r[1]+0x00000008u; // 802B707C
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B7080
  c->r[3]=c->r[1]+0x0000000Cu; // 802B7084
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B7088
  c->lr=0x802B7090u; f_802B6758(c); // 802B708C
  cmps(c,0,(int32_t)c->r[3],0); // 802B7090
  if (crb(c,2)) { goto L_802B70B8; } // 802B7094
  c->r[0]=0u-c->r[3]; // 802B7098
  c->r[0]=c->r[0]|c->r[3]; // 802B709C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B70A0
  if (crb(c,2)) { goto L_802B70B0; } // 802B70A4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B70A8
  goto L_802B70BC; // 802B70AC
L_802B70B0:;
  c->r[3]=0u+0x00000000u; // 802B70B0
  goto L_802B70BC; // 802B70B4
L_802B70B8:;
  c->r[3]=0u+0x00000000u; // 802B70B8
L_802B70BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B70BC
  c->lr=c->r[0]; // 802B70C0
  c->r[1]=c->r[1]+0x00000010u; // 802B70C4
  return; // 802B70C8
}

// fn_802B70CC
void f_802B70CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B70CC
  c->r[0]=c->lr; // 802B70D0
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B70D4
  c->r[3]=0u+0x80480000u; // 802B70D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B70DC
  c->r[3]=c->r[3]+0x000069A0u; // 802B70E0
  c->r[0]=c->r[5]+0x00000018u; // 802B70E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B70E8
  c->r[31]=c->r[4]|c->r[4]; // 802B70EC
  c->r[4]=c->r[1]+0x00000008u; // 802B70F0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B70F4
  c->r[3]=c->r[1]+0x0000000Cu; // 802B70F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B70FC
  c->lr=0x802B7104u; f_802B6758(c); // 802B7100
  cmps(c,0,(int32_t)c->r[3],0); // 802B7104
  if (crb(c,2)) { goto L_802B714C; } // 802B7108
  c->r[0]=0u-c->r[3]; // 802B710C
  c->r[0]=c->r[0]|c->r[3]; // 802B7110
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7114
  if (crb(c,2)) { goto L_802B7144; } // 802B7118
  c->r[0]=c->r[31]+0x00000001u; // 802B711C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7120
  c->r[4]=c->r[3]+c->r[0]; // 802B7124
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7128
  cmps(c,0,(int32_t)c->r[0],0); // 802B712C
  if (crb(c,2)) { goto L_802B713C; } // 802B7130
  c->r[3]=c->r[3]+c->r[0]; // 802B7134
  goto L_802B7150; // 802B7138
L_802B713C:;
  c->r[3]=0u+0x00000000u; // 802B713C
  goto L_802B7150; // 802B7140
L_802B7144:;
  c->r[3]=0u+0x00000000u; // 802B7144
  goto L_802B7150; // 802B7148
L_802B714C:;
  c->r[3]=0u+0x00000000u; // 802B714C
L_802B7150:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B7150
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B7154
  c->lr=c->r[0]; // 802B7158
  c->r[1]=c->r[1]+0x00000020u; // 802B715C
  return; // 802B7160
}

// GetResAnmScn__Q34nw4r3g3d7ResFileCFi
void f_802B7164(Ctx* __restrict c) {
  trace_call(0x802B7164u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B7164
  c->r[0]=c->lr; // 802B7168
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B716C
  c->r[3]=0u+0x80480000u; // 802B7170
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B7174
  c->r[3]=c->r[3]+0x000069A0u; // 802B7178
  c->r[0]=c->r[5]+0x00000018u; // 802B717C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B7180
  c->r[31]=c->r[4]|c->r[4]; // 802B7184
  c->r[4]=c->r[1]+0x0000000Cu; // 802B7188
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802B718C
  c->r[3]=c->r[1]+0x00000008u; // 802B7190
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B7194
  c->lr=0x802B719Cu; f_802B6758(c); // 802B7198
  cmps(c,0,(int32_t)c->r[3],0); // 802B719C
  if (crb(c,2)) { goto L_802B71E4; } // 802B71A0
  c->r[0]=0u-c->r[3]; // 802B71A4
  c->r[0]=c->r[0]|c->r[3]; // 802B71A8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B71AC
  if (crb(c,2)) { goto L_802B71DC; } // 802B71B0
  c->r[0]=c->r[31]+0x00000001u; // 802B71B4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B71B8
  c->r[4]=c->r[3]+c->r[0]; // 802B71BC
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B71C0
  cmps(c,0,(int32_t)c->r[0],0); // 802B71C4
  if (crb(c,2)) { goto L_802B71D4; } // 802B71C8
  c->r[3]=c->r[3]+c->r[0]; // 802B71CC
  goto L_802B71E8; // 802B71D0
L_802B71D4:;
  c->r[3]=0u+0x00000000u; // 802B71D4
  goto L_802B71E8; // 802B71D8
L_802B71DC:;
  c->r[3]=0u+0x00000000u; // 802B71DC
  goto L_802B71E8; // 802B71E0
L_802B71E4:;
  c->r[3]=0u+0x00000000u; // 802B71E4
L_802B71E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B71E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B71EC
  c->lr=c->r[0]; // 802B71F0
  c->r[1]=c->r[1]+0x00000020u; // 802B71F4
  return; // 802B71F8
}

// GetResAnmScnNumEntries__Q34nw4r3g3d7ResFileCFv
void f_802B71FC(Ctx* __restrict c) {
  trace_call(0x802B71FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B71FC
  c->r[0]=c->lr; // 802B7200
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B7204
  c->r[3]=0u+0x80480000u; // 802B7208
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B720C
  c->r[3]=c->r[3]+0x000069A0u; // 802B7210
  c->r[0]=c->r[5]+0x00000018u; // 802B7214
  c->r[4]=c->r[1]+0x00000008u; // 802B7218
  W32(c->r[1]+0x00000008u,c->r[3]); // 802B721C
  c->r[3]=c->r[1]+0x0000000Cu; // 802B7220
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B7224
  c->lr=0x802B722Cu; f_802B6758(c); // 802B7228
  cmps(c,0,(int32_t)c->r[3],0); // 802B722C
  if (crb(c,2)) { goto L_802B7254; } // 802B7230
  c->r[0]=0u-c->r[3]; // 802B7234
  c->r[0]=c->r[0]|c->r[3]; // 802B7238
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B723C
  if (crb(c,2)) { goto L_802B724C; } // 802B7240
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B7244
  goto L_802B7258; // 802B7248
L_802B724C:;
  c->r[3]=0u+0x00000000u; // 802B724C
  goto L_802B7258; // 802B7250
L_802B7254:;
  c->r[3]=0u+0x00000000u; // 802B7254
L_802B7258:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B7258
  c->lr=c->r[0]; // 802B725C
  c->r[1]=c->r[1]+0x00000010u; // 802B7260
  return; // 802B7264
}

// Bind__Q34nw4r3g3d7ResFileFQ34nw4r3g3d7ResFile
void f_802B7268(Ctx* __restrict c) {
  trace_call(0x802B7268u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B7268
  c->r[0]=c->lr; // 802B726C
  W32(c->r[1]+0x00000064u,c->r[0]); // 802B7270
  c->r[11]=c->r[1]+0x00000060u; // 802B7274
  c->lr=0x802B727Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B7278
  c->r[5]=0u+0x80480000u; // 802B727C
  c->r[29]=c->r[4]|c->r[4]; // 802B7280
  c->r[5]=c->r[5]+0x00006880u; // 802B7284
  c->r[28]=c->r[3]|c->r[3]; // 802B7288
  W32(c->r[1]+0x00000024u,c->r[5]); // 802B728C
  c->r[4]=c->r[1]+0x00000024u; // 802B7290
  c->r[30]=0u+0x00000001u; // 802B7294
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B7298
  c->r[3]=c->r[1]+0x00000020u; // 802B729C
  c->r[0]=c->r[5]+0x00000018u; // 802B72A0
  W32(c->r[1]+0x00000020u,c->r[0]); // 802B72A4
  c->lr=0x802B72ACu; f_802B6758(c); // 802B72A8
  cmps(c,0,(int32_t)c->r[3],0); // 802B72AC
  if (crb(c,2)) { goto L_802B72D4; } // 802B72B0
  c->r[0]=0u-c->r[3]; // 802B72B4
  c->r[0]=c->r[0]|c->r[3]; // 802B72B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B72BC
  if (crb(c,2)) { goto L_802B72CC; } // 802B72C0
  c->r[26]=R32(c->r[3]+0x00000004u); // 802B72C4
  goto L_802B72D8; // 802B72C8
L_802B72CC:;
  c->r[26]=0u+0x00000000u; // 802B72CC
  goto L_802B72D8; // 802B72D0
L_802B72D4:;
  c->r[26]=0u+0x00000000u; // 802B72D4
L_802B72D8:;
  c->r[27]=0u+0x80480000u; // 802B72D8
  c->r[31]=0u+0x00000000u; // 802B72DC
  c->r[27]=c->r[27]+0x00006880u; // 802B72E0
  goto L_802B7388; // 802B72E4
L_802B72E8:;
  W32(c->r[1]+0x00000018u,c->r[27]); // 802B72E8
  c->r[4]=c->r[1]+0x00000018u; // 802B72EC
  c->r[3]=c->r[1]+0x0000001Cu; // 802B72F0
  c->r[5]=R32(c->r[28]+0x00000000u); // 802B72F4
  c->r[0]=c->r[5]+0x00000018u; // 802B72F8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802B72FC
  c->lr=0x802B7304u; f_802B6758(c); // 802B7300
  cmps(c,0,(int32_t)c->r[3],0); // 802B7304
  if (crb(c,2)) { goto L_802B734C; } // 802B7308
  c->r[0]=0u-c->r[3]; // 802B730C
  c->r[0]=c->r[0]|c->r[3]; // 802B7310
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7314
  if (crb(c,2)) { goto L_802B7344; } // 802B7318
  c->r[0]=c->r[31]+0x00000001u; // 802B731C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7320
  c->r[4]=c->r[3]+c->r[0]; // 802B7324
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7328
  cmps(c,0,(int32_t)c->r[0],0); // 802B732C
  if (crb(c,2)) { goto L_802B733C; } // 802B7330
  c->r[3]=c->r[3]+c->r[0]; // 802B7334
  goto L_802B7350; // 802B7338
L_802B733C:;
  c->r[3]=0u+0x00000000u; // 802B733C
  goto L_802B7350; // 802B7340
L_802B7344:;
  c->r[3]=0u+0x00000000u; // 802B7344
  goto L_802B7350; // 802B7348
L_802B734C:;
  c->r[3]=0u+0x00000000u; // 802B734C
L_802B7350:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802B7350
  c->r[4]=c->r[1]+0x00000030u; // 802B7354
  W32(c->r[1]+0x00000034u,c->r[3]); // 802B7358
  c->r[3]=c->r[1]+0x00000034u; // 802B735C
  c->r[25]=0u+0x00000000u; // 802B7360
  W32(c->r[1]+0x00000030u,c->r[0]); // 802B7364
  c->lr=0x802B736Cu; f_802B8BB4(c); // 802B7368
  cmps(c,0,(int32_t)c->r[3],0); // 802B736C
  if (crb(c,2)) { goto L_802B7380; } // 802B7370
  cmps(c,0,(int32_t)c->r[30],0); // 802B7374
  if (crb(c,2)) { goto L_802B7380; } // 802B7378
  c->r[25]=0u+0x00000001u; // 802B737C
L_802B7380:;
  c->r[30]=c->r[25]|c->r[25]; // 802B7380
  c->r[31]=c->r[31]+0x00000001u; // 802B7384
L_802B7388:;
  cmpu(c,0,c->r[31],c->r[26]); // 802B7388
  if (crb(c,0)) { IRQCHK(c); goto L_802B72E8; } // 802B738C
  c->r[5]=0u+0x80480000u; // 802B7390
  c->r[4]=c->r[1]+0x00000014u; // 802B7394
  c->r[5]=c->r[5]+0x00006940u; // 802B7398
  c->r[3]=c->r[1]+0x00000010u; // 802B739C
  W32(c->r[1]+0x00000014u,c->r[5]); // 802B73A0
  c->r[5]=R32(c->r[28]+0x00000000u); // 802B73A4
  c->r[0]=c->r[5]+0x00000018u; // 802B73A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B73AC
  c->lr=0x802B73B4u; f_802B6758(c); // 802B73B0
  cmps(c,0,(int32_t)c->r[3],0); // 802B73B4
  if (crb(c,2)) { goto L_802B73DC; } // 802B73B8
  c->r[0]=0u-c->r[3]; // 802B73BC
  c->r[0]=c->r[0]|c->r[3]; // 802B73C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B73C4
  if (crb(c,2)) { goto L_802B73D4; } // 802B73C8
  c->r[26]=R32(c->r[3]+0x00000004u); // 802B73CC
  goto L_802B73E0; // 802B73D0
L_802B73D4:;
  c->r[26]=0u+0x00000000u; // 802B73D4
  goto L_802B73E0; // 802B73D8
L_802B73DC:;
  c->r[26]=0u+0x00000000u; // 802B73DC
L_802B73E0:;
  c->r[27]=0u+0x80480000u; // 802B73E0
  c->r[31]=0u+0x00000000u; // 802B73E4
  c->r[27]=c->r[27]+0x00006940u; // 802B73E8
  goto L_802B7478; // 802B73EC
L_802B73F0:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 802B73F0
  c->r[4]=c->r[1]+0x00000008u; // 802B73F4
  c->r[3]=c->r[1]+0x0000000Cu; // 802B73F8
  c->r[5]=R32(c->r[28]+0x00000000u); // 802B73FC
  c->r[0]=c->r[5]+0x00000018u; // 802B7400
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B7404
  c->lr=0x802B740Cu; f_802B6758(c); // 802B7408
  cmps(c,0,(int32_t)c->r[3],0); // 802B740C
  if (crb(c,2)) { goto L_802B7454; } // 802B7410
  c->r[0]=0u-c->r[3]; // 802B7414
  c->r[0]=c->r[0]|c->r[3]; // 802B7418
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B741C
  if (crb(c,2)) { goto L_802B744C; } // 802B7420
  c->r[0]=c->r[31]+0x00000001u; // 802B7424
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7428
  c->r[4]=c->r[3]+c->r[0]; // 802B742C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7430
  cmps(c,0,(int32_t)c->r[0],0); // 802B7434
  if (crb(c,2)) { goto L_802B7444; } // 802B7438
  c->r[3]=c->r[3]+c->r[0]; // 802B743C
  goto L_802B7458; // 802B7440
L_802B7444:;
  c->r[3]=0u+0x00000000u; // 802B7444
  goto L_802B7458; // 802B7448
L_802B744C:;
  c->r[3]=0u+0x00000000u; // 802B744C
  goto L_802B7458; // 802B7450
L_802B7454:;
  c->r[3]=0u+0x00000000u; // 802B7454
L_802B7458:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802B7458
  c->r[4]=c->r[1]+0x00000028u; // 802B745C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 802B7460
  c->r[3]=c->r[1]+0x0000002Cu; // 802B7464
  W32(c->r[1]+0x00000028u,c->r[0]); // 802B7468
  c->lr=0x802B7470u; f_802BC424(c); // 802B746C
  c->r[30]=c->r[3]|c->r[3]; // 802B7470
  c->r[31]=c->r[31]+0x00000001u; // 802B7474
L_802B7478:;
  cmpu(c,0,c->r[31],c->r[26]); // 802B7478
  if (crb(c,0)) { IRQCHK(c); goto L_802B73F0; } // 802B747C
  c->r[11]=c->r[1]+0x00000060u; // 802B7480
  c->r[3]=c->r[30]|c->r[30]; // 802B7484
  c->lr=0x802B748Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B7488
  c->r[0]=R32(c->r[1]+0x00000064u); // 802B748C
  c->lr=c->r[0]; // 802B7490
  c->r[1]=c->r[1]+0x00000060u; // 802B7494
  return; // 802B7498
}

// Release__Q34nw4r3g3d7ResFileFv
void f_802B749C(Ctx* __restrict c) {
  trace_call(0x802B749Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B749C
  c->r[0]=c->lr; // 802B74A0
  c->r[5]=0u+0x80480000u; // 802B74A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 802B74A8
  c->r[5]=c->r[5]+0x00006880u; // 802B74AC
  c->r[4]=c->r[1]+0x00000024u; // 802B74B0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802B74B4
  W32(c->r[1]+0x00000038u,c->r[30]); // 802B74B8
  c->r[30]=c->r[3]|c->r[3]; // 802B74BC
  W32(c->r[1]+0x00000034u,c->r[29]); // 802B74C0
  W32(c->r[1]+0x00000030u,c->r[28]); // 802B74C4
  W32(c->r[1]+0x00000024u,c->r[5]); // 802B74C8
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B74CC
  c->r[3]=c->r[1]+0x00000020u; // 802B74D0
  c->r[0]=c->r[5]+0x00000018u; // 802B74D4
  W32(c->r[1]+0x00000020u,c->r[0]); // 802B74D8
  c->lr=0x802B74E0u; f_802B6758(c); // 802B74DC
  cmps(c,0,(int32_t)c->r[3],0); // 802B74E0
  if (crb(c,2)) { goto L_802B7508; } // 802B74E4
  c->r[0]=0u-c->r[3]; // 802B74E8
  c->r[0]=c->r[0]|c->r[3]; // 802B74EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B74F0
  if (crb(c,2)) { goto L_802B7500; } // 802B74F4
  c->r[28]=R32(c->r[3]+0x00000004u); // 802B74F8
  goto L_802B750C; // 802B74FC
L_802B7500:;
  c->r[28]=0u+0x00000000u; // 802B7500
  goto L_802B750C; // 802B7504
L_802B7508:;
  c->r[28]=0u+0x00000000u; // 802B7508
L_802B750C:;
  c->r[29]=0u+0x80480000u; // 802B750C
  c->r[31]=0u+0x00000000u; // 802B7510
  c->r[29]=c->r[29]+0x00006880u; // 802B7514
  goto L_802B7594; // 802B7518
L_802B751C:;
  W32(c->r[1]+0x00000018u,c->r[29]); // 802B751C
  c->r[4]=c->r[1]+0x00000018u; // 802B7520
  c->r[3]=c->r[1]+0x0000001Cu; // 802B7524
  c->r[5]=R32(c->r[30]+0x00000000u); // 802B7528
  c->r[0]=c->r[5]+0x00000018u; // 802B752C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802B7530
  c->lr=0x802B7538u; f_802B6758(c); // 802B7534
  cmps(c,0,(int32_t)c->r[3],0); // 802B7538
  if (crb(c,2)) { goto L_802B7580; } // 802B753C
  c->r[0]=0u-c->r[3]; // 802B7540
  c->r[0]=c->r[0]|c->r[3]; // 802B7544
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7548
  if (crb(c,2)) { goto L_802B7578; } // 802B754C
  c->r[0]=c->r[31]+0x00000001u; // 802B7550
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7554
  c->r[4]=c->r[3]+c->r[0]; // 802B7558
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B755C
  cmps(c,0,(int32_t)c->r[0],0); // 802B7560
  if (crb(c,2)) { goto L_802B7570; } // 802B7564
  c->r[0]=c->r[3]+c->r[0]; // 802B7568
  goto L_802B7584; // 802B756C
L_802B7570:;
  c->r[0]=0u+0x00000000u; // 802B7570
  goto L_802B7584; // 802B7574
L_802B7578:;
  c->r[0]=0u+0x00000000u; // 802B7578
  goto L_802B7584; // 802B757C
L_802B7580:;
  c->r[0]=0u+0x00000000u; // 802B7580
L_802B7584:;
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802B7584
  c->r[3]=c->r[1]+0x0000002Cu; // 802B7588
  c->lr=0x802B7590u; f_802B8CC0(c); // 802B758C
  c->r[31]=c->r[31]+0x00000001u; // 802B7590
L_802B7594:;
  cmpu(c,0,c->r[31],c->r[28]); // 802B7594
  if (crb(c,0)) { IRQCHK(c); goto L_802B751C; } // 802B7598
  c->r[5]=0u+0x80480000u; // 802B759C
  c->r[4]=c->r[1]+0x00000014u; // 802B75A0
  c->r[5]=c->r[5]+0x00006940u; // 802B75A4
  c->r[3]=c->r[1]+0x00000010u; // 802B75A8
  W32(c->r[1]+0x00000014u,c->r[5]); // 802B75AC
  c->r[5]=R32(c->r[30]+0x00000000u); // 802B75B0
  c->r[0]=c->r[5]+0x00000018u; // 802B75B4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B75B8
  c->lr=0x802B75C0u; f_802B6758(c); // 802B75BC
  cmps(c,0,(int32_t)c->r[3],0); // 802B75C0
  if (crb(c,2)) { goto L_802B75E8; } // 802B75C4
  c->r[0]=0u-c->r[3]; // 802B75C8
  c->r[0]=c->r[0]|c->r[3]; // 802B75CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B75D0
  if (crb(c,2)) { goto L_802B75E0; } // 802B75D4
  c->r[28]=R32(c->r[3]+0x00000004u); // 802B75D8
  goto L_802B75EC; // 802B75DC
L_802B75E0:;
  c->r[28]=0u+0x00000000u; // 802B75E0
  goto L_802B75EC; // 802B75E4
L_802B75E8:;
  c->r[28]=0u+0x00000000u; // 802B75E8
L_802B75EC:;
  c->r[29]=0u+0x80480000u; // 802B75EC
  c->r[31]=0u+0x00000000u; // 802B75F0
  c->r[29]=c->r[29]+0x00006940u; // 802B75F4
  goto L_802B7674; // 802B75F8
L_802B75FC:;
  W32(c->r[1]+0x00000008u,c->r[29]); // 802B75FC
  c->r[4]=c->r[1]+0x00000008u; // 802B7600
  c->r[3]=c->r[1]+0x0000000Cu; // 802B7604
  c->r[5]=R32(c->r[30]+0x00000000u); // 802B7608
  c->r[0]=c->r[5]+0x00000018u; // 802B760C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B7610
  c->lr=0x802B7618u; f_802B6758(c); // 802B7614
  cmps(c,0,(int32_t)c->r[3],0); // 802B7618
  if (crb(c,2)) { goto L_802B7660; } // 802B761C
  c->r[0]=0u-c->r[3]; // 802B7620
  c->r[0]=c->r[0]|c->r[3]; // 802B7624
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7628
  if (crb(c,2)) { goto L_802B7658; } // 802B762C
  c->r[0]=c->r[31]+0x00000001u; // 802B7630
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7634
  c->r[4]=c->r[3]+c->r[0]; // 802B7638
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B763C
  cmps(c,0,(int32_t)c->r[0],0); // 802B7640
  if (crb(c,2)) { goto L_802B7650; } // 802B7644
  c->r[0]=c->r[3]+c->r[0]; // 802B7648
  goto L_802B7664; // 802B764C
L_802B7650:;
  c->r[0]=0u+0x00000000u; // 802B7650
  goto L_802B7664; // 802B7654
L_802B7658:;
  c->r[0]=0u+0x00000000u; // 802B7658
  goto L_802B7664; // 802B765C
L_802B7660:;
  c->r[0]=0u+0x00000000u; // 802B7660
L_802B7664:;
  W32(c->r[1]+0x00000028u,c->r[0]); // 802B7664
  c->r[3]=c->r[1]+0x00000028u; // 802B7668
  c->lr=0x802B7670u; f_802BC594(c); // 802B766C
  c->r[31]=c->r[31]+0x00000001u; // 802B7670
L_802B7674:;
  cmpu(c,0,c->r[31],c->r[28]); // 802B7674
  if (crb(c,0)) { IRQCHK(c); goto L_802B75FC; } // 802B7678
  c->r[0]=R32(c->r[1]+0x00000044u); // 802B767C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802B7680
  c->r[30]=R32(c->r[1]+0x00000038u); // 802B7684
  c->r[29]=R32(c->r[1]+0x00000034u); // 802B7688
  c->r[28]=R32(c->r[1]+0x00000030u); // 802B768C
  c->lr=c->r[0]; // 802B7690
  c->r[1]=c->r[1]+0x00000040u; // 802B7694
  return; // 802B7698
}

// Init__Q34nw4r3g3d7ResFileFv
void f_802B769C(Ctx* __restrict c) {
  trace_call(0x802B769Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B769C
  c->r[0]=c->lr; // 802B76A0
  W32(c->r[1]+0x00000064u,c->r[0]); // 802B76A4
  c->r[11]=c->r[1]+0x00000060u; // 802B76A8
  c->lr=0x802B76B0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B76AC
  c->r[31]=0u+0x80480000u; // 802B76B0
  c->r[29]=c->r[3]|c->r[3]; // 802B76B4
  c->r[31]=c->r[31]+0x00006880u; // 802B76B8
  c->r[4]=c->r[1]+0x00000034u; // 802B76BC
  c->r[0]=c->r[31]+0x00000000u; // 802B76C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802B76C4
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B76C8
  c->r[3]=c->r[1]+0x00000030u; // 802B76CC
  c->r[0]=c->r[5]+0x00000018u; // 802B76D0
  W32(c->r[1]+0x00000030u,c->r[0]); // 802B76D4
  c->lr=0x802B76DCu; f_802B6758(c); // 802B76D8
  cmps(c,0,(int32_t)c->r[3],0); // 802B76DC
  if (crb(c,2)) { goto L_802B7704; } // 802B76E0
  c->r[0]=0u-c->r[3]; // 802B76E4
  c->r[0]=c->r[0]|c->r[3]; // 802B76E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B76EC
  if (crb(c,2)) { goto L_802B76FC; } // 802B76F0
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B76F4
  goto L_802B7708; // 802B76F8
L_802B76FC:;
  c->r[27]=0u+0x00000000u; // 802B76FC
  goto L_802B7708; // 802B7700
L_802B7704:;
  c->r[27]=0u+0x00000000u; // 802B7704
L_802B7708:;
  c->r[28]=c->r[31]+0x00000000u; // 802B7708
  c->r[30]=0u+0x00000000u; // 802B770C
  goto L_802B778C; // 802B7710
L_802B7714:;
  W32(c->r[1]+0x00000028u,c->r[28]); // 802B7714
  c->r[4]=c->r[1]+0x00000028u; // 802B7718
  c->r[3]=c->r[1]+0x0000002Cu; // 802B771C
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7720
  c->r[0]=c->r[5]+0x00000018u; // 802B7724
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802B7728
  c->lr=0x802B7730u; f_802B6758(c); // 802B772C
  cmps(c,0,(int32_t)c->r[3],0); // 802B7730
  if (crb(c,2)) { goto L_802B7778; } // 802B7734
  c->r[0]=0u-c->r[3]; // 802B7738
  c->r[0]=c->r[0]|c->r[3]; // 802B773C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7740
  if (crb(c,2)) { goto L_802B7770; } // 802B7744
  c->r[0]=c->r[30]+0x00000001u; // 802B7748
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B774C
  c->r[4]=c->r[3]+c->r[0]; // 802B7750
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7754
  cmps(c,0,(int32_t)c->r[0],0); // 802B7758
  if (crb(c,2)) { goto L_802B7768; } // 802B775C
  c->r[0]=c->r[3]+c->r[0]; // 802B7760
  goto L_802B777C; // 802B7764
L_802B7768:;
  c->r[0]=0u+0x00000000u; // 802B7768
  goto L_802B777C; // 802B776C
L_802B7770:;
  c->r[0]=0u+0x00000000u; // 802B7770
  goto L_802B777C; // 802B7774
L_802B7778:;
  c->r[0]=0u+0x00000000u; // 802B7778
L_802B777C:;
  W32(c->r[1]+0x00000040u,c->r[0]); // 802B777C
  c->r[3]=c->r[1]+0x00000040u; // 802B7780
  c->lr=0x802B7788u; f_802B8DA8(c); // 802B7784
  c->r[30]=c->r[30]+0x00000001u; // 802B7788
L_802B778C:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B778C
  if (crb(c,0)) { IRQCHK(c); goto L_802B7714; } // 802B7790
  c->r[0]=c->r[31]+0x00000040u; // 802B7794
  c->r[4]=c->r[1]+0x00000024u; // 802B7798
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B779C
  c->r[3]=c->r[1]+0x00000020u; // 802B77A0
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B77A4
  c->r[0]=c->r[5]+0x00000018u; // 802B77A8
  W32(c->r[1]+0x00000020u,c->r[0]); // 802B77AC
  c->lr=0x802B77B4u; f_802B6758(c); // 802B77B0
  cmps(c,0,(int32_t)c->r[3],0); // 802B77B4
  if (crb(c,2)) { goto L_802B77DC; } // 802B77B8
  c->r[0]=0u-c->r[3]; // 802B77BC
  c->r[0]=c->r[0]|c->r[3]; // 802B77C0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B77C4
  if (crb(c,2)) { goto L_802B77D4; } // 802B77C8
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B77CC
  goto L_802B77E0; // 802B77D0
L_802B77D4:;
  c->r[27]=0u+0x00000000u; // 802B77D4
  goto L_802B77E0; // 802B77D8
L_802B77DC:;
  c->r[27]=0u+0x00000000u; // 802B77DC
L_802B77E0:;
  c->r[28]=c->r[31]+0x00000040u; // 802B77E0
  c->r[30]=0u+0x00000000u; // 802B77E4
  goto L_802B7864; // 802B77E8
L_802B77EC:;
  W32(c->r[1]+0x00000018u,c->r[28]); // 802B77EC
  c->r[4]=c->r[1]+0x00000018u; // 802B77F0
  c->r[3]=c->r[1]+0x0000001Cu; // 802B77F4
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B77F8
  c->r[0]=c->r[5]+0x00000018u; // 802B77FC
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802B7800
  c->lr=0x802B7808u; f_802B6758(c); // 802B7804
  cmps(c,0,(int32_t)c->r[3],0); // 802B7808
  if (crb(c,2)) { goto L_802B7850; } // 802B780C
  c->r[0]=0u-c->r[3]; // 802B7810
  c->r[0]=c->r[0]|c->r[3]; // 802B7814
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7818
  if (crb(c,2)) { goto L_802B7848; } // 802B781C
  c->r[0]=c->r[30]+0x00000001u; // 802B7820
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7824
  c->r[4]=c->r[3]+c->r[0]; // 802B7828
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B782C
  cmps(c,0,(int32_t)c->r[0],0); // 802B7830
  if (crb(c,2)) { goto L_802B7840; } // 802B7834
  c->r[0]=c->r[3]+c->r[0]; // 802B7838
  goto L_802B7854; // 802B783C
L_802B7840:;
  c->r[0]=0u+0x00000000u; // 802B7840
  goto L_802B7854; // 802B7844
L_802B7848:;
  c->r[0]=0u+0x00000000u; // 802B7848
  goto L_802B7854; // 802B784C
L_802B7850:;
  c->r[0]=0u+0x00000000u; // 802B7850
L_802B7854:;
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802B7854
  c->r[3]=c->r[1]+0x0000003Cu; // 802B7858
  c->lr=0x802B7860u; f_802BBA9C(c); // 802B785C
  c->r[30]=c->r[30]+0x00000001u; // 802B7860
L_802B7864:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7864
  if (crb(c,0)) { IRQCHK(c); goto L_802B77EC; } // 802B7868
  c->r[0]=c->r[31]+0x00000020u; // 802B786C
  c->r[4]=c->r[1]+0x00000014u; // 802B7870
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B7874
  c->r[3]=c->r[1]+0x00000010u; // 802B7878
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B787C
  c->r[0]=c->r[5]+0x00000018u; // 802B7880
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B7884
  c->lr=0x802B788Cu; f_802B6758(c); // 802B7888
  cmps(c,0,(int32_t)c->r[3],0); // 802B788C
  if (crb(c,2)) { goto L_802B78B4; } // 802B7890
  c->r[0]=0u-c->r[3]; // 802B7894
  c->r[0]=c->r[0]|c->r[3]; // 802B7898
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B789C
  if (crb(c,2)) { goto L_802B78AC; } // 802B78A0
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B78A4
  goto L_802B78B8; // 802B78A8
L_802B78AC:;
  c->r[27]=0u+0x00000000u; // 802B78AC
  goto L_802B78B8; // 802B78B0
L_802B78B4:;
  c->r[27]=0u+0x00000000u; // 802B78B4
L_802B78B8:;
  c->r[31]=c->r[31]+0x00000020u; // 802B78B8
  c->r[30]=0u+0x00000000u; // 802B78BC
  goto L_802B7940; // 802B78C0
L_802B78C4:;
  W32(c->r[1]+0x00000008u,c->r[31]); // 802B78C4
  c->r[4]=c->r[1]+0x00000008u; // 802B78C8
  c->r[3]=c->r[1]+0x0000000Cu; // 802B78CC
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B78D0
  c->r[0]=c->r[5]+0x00000018u; // 802B78D4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B78D8
  c->lr=0x802B78E0u; f_802B6758(c); // 802B78DC
  cmps(c,0,(int32_t)c->r[3],0); // 802B78E0
  if (crb(c,2)) { goto L_802B7928; } // 802B78E4
  c->r[0]=0u-c->r[3]; // 802B78E8
  c->r[0]=c->r[0]|c->r[3]; // 802B78EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B78F0
  if (crb(c,2)) { goto L_802B7920; } // 802B78F4
  c->r[0]=c->r[30]+0x00000001u; // 802B78F8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B78FC
  c->r[4]=c->r[3]+c->r[0]; // 802B7900
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7904
  cmps(c,0,(int32_t)c->r[0],0); // 802B7908
  if (crb(c,2)) { goto L_802B7918; } // 802B790C
  c->r[0]=c->r[3]+c->r[0]; // 802B7910
  goto L_802B792C; // 802B7914
L_802B7918:;
  c->r[0]=0u+0x00000000u; // 802B7918
  goto L_802B792C; // 802B791C
L_802B7920:;
  c->r[0]=0u+0x00000000u; // 802B7920
  goto L_802B792C; // 802B7924
L_802B7928:;
  c->r[0]=0u+0x00000000u; // 802B7928
L_802B792C:;
  W32(c->r[1]+0x00000038u,c->r[0]); // 802B792C
  c->r[3]=c->r[1]+0x00000038u; // 802B7930
  c->r[4]=0u+0x00000000u; // 802B7934
  c->lr=0x802B793Cu; f_802BB90C(c); // 802B7938
  c->r[30]=c->r[30]+0x00000001u; // 802B793C
L_802B7940:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7940
  if (crb(c,0)) { IRQCHK(c); goto L_802B78C4; } // 802B7944
  c->r[11]=c->r[1]+0x00000060u; // 802B7948
  c->lr=0x802B7950u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B794C
  c->r[0]=R32(c->r[1]+0x00000064u); // 802B7950
  c->lr=c->r[0]; // 802B7954
  c->r[1]=c->r[1]+0x00000060u; // 802B7958
  return; // 802B795C
}

// Terminate__Q34nw4r3g3d7ResFileFv
void f_802B7960(Ctx* __restrict c) {
  trace_call(0x802B7960u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B7960
  c->r[0]=c->lr; // 802B7964
  c->r[5]=0u+0x80480000u; // 802B7968
  W32(c->r[1]+0x00000034u,c->r[0]); // 802B796C
  c->r[5]=c->r[5]+0x00006880u; // 802B7970
  c->r[4]=c->r[1]+0x00000014u; // 802B7974
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802B7978
  c->r[31]=c->r[3]|c->r[3]; // 802B797C
  W32(c->r[1]+0x00000028u,c->r[30]); // 802B7980
  W32(c->r[1]+0x00000024u,c->r[29]); // 802B7984
  W32(c->r[1]+0x00000020u,c->r[28]); // 802B7988
  W32(c->r[1]+0x00000014u,c->r[5]); // 802B798C
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B7990
  c->r[3]=c->r[1]+0x00000010u; // 802B7994
  c->r[0]=c->r[5]+0x00000018u; // 802B7998
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B799C
  c->lr=0x802B79A4u; f_802B6758(c); // 802B79A0
  cmps(c,0,(int32_t)c->r[3],0); // 802B79A4
  if (crb(c,2)) { goto L_802B79CC; } // 802B79A8
  c->r[0]=0u-c->r[3]; // 802B79AC
  c->r[0]=c->r[0]|c->r[3]; // 802B79B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B79B4
  if (crb(c,2)) { goto L_802B79C4; } // 802B79B8
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B79BC
  goto L_802B79D0; // 802B79C0
L_802B79C4:;
  c->r[29]=0u+0x00000000u; // 802B79C4
  goto L_802B79D0; // 802B79C8
L_802B79CC:;
  c->r[29]=0u+0x00000000u; // 802B79CC
L_802B79D0:;
  c->r[30]=0u+0x80480000u; // 802B79D0
  c->r[28]=0u+0x00000000u; // 802B79D4
  c->r[30]=c->r[30]+0x00006880u; // 802B79D8
  goto L_802B7A58; // 802B79DC
L_802B79E0:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 802B79E0
  c->r[4]=c->r[1]+0x00000008u; // 802B79E4
  c->r[3]=c->r[1]+0x0000000Cu; // 802B79E8
  c->r[5]=R32(c->r[31]+0x00000000u); // 802B79EC
  c->r[0]=c->r[5]+0x00000018u; // 802B79F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B79F4
  c->lr=0x802B79FCu; f_802B6758(c); // 802B79F8
  cmps(c,0,(int32_t)c->r[3],0); // 802B79FC
  if (crb(c,2)) { goto L_802B7A44; } // 802B7A00
  c->r[0]=0u-c->r[3]; // 802B7A04
  c->r[0]=c->r[0]|c->r[3]; // 802B7A08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7A0C
  if (crb(c,2)) { goto L_802B7A3C; } // 802B7A10
  c->r[0]=c->r[28]+0x00000001u; // 802B7A14
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7A18
  c->r[4]=c->r[3]+c->r[0]; // 802B7A1C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7A20
  cmps(c,0,(int32_t)c->r[0],0); // 802B7A24
  if (crb(c,2)) { goto L_802B7A34; } // 802B7A28
  c->r[0]=c->r[3]+c->r[0]; // 802B7A2C
  goto L_802B7A48; // 802B7A30
L_802B7A34:;
  c->r[0]=0u+0x00000000u; // 802B7A34
  goto L_802B7A48; // 802B7A38
L_802B7A3C:;
  c->r[0]=0u+0x00000000u; // 802B7A3C
  goto L_802B7A48; // 802B7A40
L_802B7A44:;
  c->r[0]=0u+0x00000000u; // 802B7A44
L_802B7A48:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 802B7A48
  c->r[3]=c->r[1]+0x00000018u; // 802B7A4C
  c->lr=0x802B7A54u; f_802B9340(c); // 802B7A50
  c->r[28]=c->r[28]+0x00000001u; // 802B7A54
L_802B7A58:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B7A58
  if (crb(c,0)) { IRQCHK(c); goto L_802B79E0; } // 802B7A5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802B7A60
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802B7A64
  c->r[30]=R32(c->r[1]+0x00000028u); // 802B7A68
  c->r[29]=R32(c->r[1]+0x00000024u); // 802B7A6C
  c->r[28]=R32(c->r[1]+0x00000020u); // 802B7A70
  c->lr=c->r[0]; // 802B7A74
  c->r[1]=c->r[1]+0x00000030u; // 802B7A78
  return; // 802B7A7C
}

// CheckRevision__Q34nw4r3g3d7ResFileCFv
void f_802B7A80(Ctx* __restrict c) {
  trace_call(0x802B7A80u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B7A80
  c->r[0]=c->lr; // 802B7A84
  W32(c->r[1]+0x000000C4u,c->r[0]); // 802B7A88
  c->r[11]=c->r[1]+0x000000C0u; // 802B7A8C
  c->lr=0x802B7A94u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B7A90
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B7A94
  c->r[31]=0u+0x80480000u; // 802B7A98
  c->r[31]=c->r[31]+0x00006880u; // 802B7A9C
  c->r[29]=c->r[3]|c->r[3]; // 802B7AA0
  c->r[5]=c->r[4]+0x00000018u; // 802B7AA4
  c->r[4]=c->r[1]+0x000000A4u; // 802B7AA8
  c->r[0]=c->r[31]+0x00000000u; // 802B7AAC
  W32(c->r[1]+0x000000A0u,c->r[5]); // 802B7AB0
  c->r[3]=c->r[1]+0x000000A0u; // 802B7AB4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 802B7AB8
  c->lr=0x802B7AC0u; f_802B6758(c); // 802B7ABC
  cmps(c,0,(int32_t)c->r[3],0); // 802B7AC0
  if (crb(c,2)) { goto L_802B7AE8; } // 802B7AC4
  c->r[0]=0u-c->r[3]; // 802B7AC8
  c->r[0]=c->r[0]|c->r[3]; // 802B7ACC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7AD0
  if (crb(c,2)) { goto L_802B7AE0; } // 802B7AD4
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B7AD8
  goto L_802B7AEC; // 802B7ADC
L_802B7AE0:;
  c->r[27]=0u+0x00000000u; // 802B7AE0
  goto L_802B7AEC; // 802B7AE4
L_802B7AE8:;
  c->r[27]=0u+0x00000000u; // 802B7AE8
L_802B7AEC:;
  c->r[28]=c->r[31]+0x00000000u; // 802B7AEC
  c->r[30]=0u+0x00000000u; // 802B7AF0
  goto L_802B7B80; // 802B7AF4
L_802B7AF8:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7AF8
  c->r[4]=c->r[1]+0x00000098u; // 802B7AFC
  W32(c->r[1]+0x00000098u,c->r[28]); // 802B7B00
  c->r[3]=c->r[1]+0x0000009Cu; // 802B7B04
  c->r[0]=c->r[5]+0x00000018u; // 802B7B08
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 802B7B0C
  c->lr=0x802B7B14u; f_802B6758(c); // 802B7B10
  cmps(c,0,(int32_t)c->r[3],0); // 802B7B14
  if (crb(c,2)) { goto L_802B7B5C; } // 802B7B18
  c->r[0]=0u-c->r[3]; // 802B7B1C
  c->r[0]=c->r[0]|c->r[3]; // 802B7B20
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7B24
  if (crb(c,2)) { goto L_802B7B54; } // 802B7B28
  c->r[0]=c->r[30]+0x00000001u; // 802B7B2C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7B30
  c->r[4]=c->r[3]+c->r[0]; // 802B7B34
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7B38
  cmps(c,0,(int32_t)c->r[0],0); // 802B7B3C
  if (crb(c,2)) { goto L_802B7B4C; } // 802B7B40
  c->r[3]=c->r[3]+c->r[0]; // 802B7B44
  goto L_802B7B60; // 802B7B48
L_802B7B4C:;
  c->r[3]=0u+0x00000000u; // 802B7B4C
  goto L_802B7B60; // 802B7B50
L_802B7B54:;
  c->r[3]=0u+0x00000000u; // 802B7B54
  goto L_802B7B60; // 802B7B58
L_802B7B5C:;
  c->r[3]=0u+0x00000000u; // 802B7B5C
L_802B7B60:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B7B60
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 802B7B64
  c->r[0]=cntlz(c->r[0]); // 802B7B68
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B7B6C
  if (!crb(c,2)) { goto L_802B7B7C; } // 802B7B70
  c->r[3]=0u+0x00000000u; // 802B7B74
  goto L_802B83B4; // 802B7B78
L_802B7B7C:;
  c->r[30]=c->r[30]+0x00000001u; // 802B7B7C
L_802B7B80:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7B80
  if (crb(c,0)) { IRQCHK(c); goto L_802B7AF8; } // 802B7B84
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B7B88
  c->r[0]=c->r[31]+0x00000040u; // 802B7B8C
  W32(c->r[1]+0x00000094u,c->r[0]); // 802B7B90
  c->r[4]=c->r[1]+0x00000094u; // 802B7B94
  c->r[0]=c->r[3]+0x00000018u; // 802B7B98
  c->r[3]=c->r[1]+0x00000090u; // 802B7B9C
  W32(c->r[1]+0x00000090u,c->r[0]); // 802B7BA0
  c->lr=0x802B7BA8u; f_802B6758(c); // 802B7BA4
  cmps(c,0,(int32_t)c->r[3],0); // 802B7BA8
  if (crb(c,2)) { goto L_802B7BD0; } // 802B7BAC
  c->r[0]=0u-c->r[3]; // 802B7BB0
  c->r[0]=c->r[0]|c->r[3]; // 802B7BB4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7BB8
  if (crb(c,2)) { goto L_802B7BC8; } // 802B7BBC
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B7BC0
  goto L_802B7BD4; // 802B7BC4
L_802B7BC8:;
  c->r[27]=0u+0x00000000u; // 802B7BC8
  goto L_802B7BD4; // 802B7BCC
L_802B7BD0:;
  c->r[27]=0u+0x00000000u; // 802B7BD0
L_802B7BD4:;
  c->r[28]=c->r[31]+0x00000040u; // 802B7BD4
  c->r[30]=0u+0x00000000u; // 802B7BD8
  goto L_802B7C68; // 802B7BDC
L_802B7BE0:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7BE0
  c->r[4]=c->r[1]+0x00000088u; // 802B7BE4
  W32(c->r[1]+0x00000088u,c->r[28]); // 802B7BE8
  c->r[3]=c->r[1]+0x0000008Cu; // 802B7BEC
  c->r[0]=c->r[5]+0x00000018u; // 802B7BF0
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 802B7BF4
  c->lr=0x802B7BFCu; f_802B6758(c); // 802B7BF8
  cmps(c,0,(int32_t)c->r[3],0); // 802B7BFC
  if (crb(c,2)) { goto L_802B7C44; } // 802B7C00
  c->r[0]=0u-c->r[3]; // 802B7C04
  c->r[0]=c->r[0]|c->r[3]; // 802B7C08
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7C0C
  if (crb(c,2)) { goto L_802B7C3C; } // 802B7C10
  c->r[0]=c->r[30]+0x00000001u; // 802B7C14
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7C18
  c->r[4]=c->r[3]+c->r[0]; // 802B7C1C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7C20
  cmps(c,0,(int32_t)c->r[0],0); // 802B7C24
  if (crb(c,2)) { goto L_802B7C34; } // 802B7C28
  c->r[3]=c->r[3]+c->r[0]; // 802B7C2C
  goto L_802B7C48; // 802B7C30
L_802B7C34:;
  c->r[3]=0u+0x00000000u; // 802B7C34
  goto L_802B7C48; // 802B7C38
L_802B7C3C:;
  c->r[3]=0u+0x00000000u; // 802B7C3C
  goto L_802B7C48; // 802B7C40
L_802B7C44:;
  c->r[3]=0u+0x00000000u; // 802B7C44
L_802B7C48:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B7C48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802B7C4C
  c->r[0]=cntlz(c->r[0]); // 802B7C50
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B7C54
  if (!crb(c,2)) { goto L_802B7C64; } // 802B7C58
  c->r[3]=0u+0x00000000u; // 802B7C5C
  goto L_802B83B4; // 802B7C60
L_802B7C64:;
  c->r[30]=c->r[30]+0x00000001u; // 802B7C64
L_802B7C68:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7C68
  if (crb(c,0)) { IRQCHK(c); goto L_802B7BE0; } // 802B7C6C
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B7C70
  c->r[0]=c->r[31]+0x00000020u; // 802B7C74
  W32(c->r[1]+0x00000084u,c->r[0]); // 802B7C78
  c->r[4]=c->r[1]+0x00000084u; // 802B7C7C
  c->r[0]=c->r[3]+0x00000018u; // 802B7C80
  c->r[3]=c->r[1]+0x00000080u; // 802B7C84
  W32(c->r[1]+0x00000080u,c->r[0]); // 802B7C88
  c->lr=0x802B7C90u; f_802B6758(c); // 802B7C8C
  cmps(c,0,(int32_t)c->r[3],0); // 802B7C90
  if (crb(c,2)) { goto L_802B7CB8; } // 802B7C94
  c->r[0]=0u-c->r[3]; // 802B7C98
  c->r[0]=c->r[0]|c->r[3]; // 802B7C9C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7CA0
  if (crb(c,2)) { goto L_802B7CB0; } // 802B7CA4
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B7CA8
  goto L_802B7CBC; // 802B7CAC
L_802B7CB0:;
  c->r[27]=0u+0x00000000u; // 802B7CB0
  goto L_802B7CBC; // 802B7CB4
L_802B7CB8:;
  c->r[27]=0u+0x00000000u; // 802B7CB8
L_802B7CBC:;
  c->r[28]=c->r[31]+0x00000020u; // 802B7CBC
  c->r[30]=0u+0x00000000u; // 802B7CC0
  goto L_802B7D50; // 802B7CC4
L_802B7CC8:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7CC8
  c->r[4]=c->r[1]+0x00000078u; // 802B7CCC
  W32(c->r[1]+0x00000078u,c->r[28]); // 802B7CD0
  c->r[3]=c->r[1]+0x0000007Cu; // 802B7CD4
  c->r[0]=c->r[5]+0x00000018u; // 802B7CD8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802B7CDC
  c->lr=0x802B7CE4u; f_802B6758(c); // 802B7CE0
  cmps(c,0,(int32_t)c->r[3],0); // 802B7CE4
  if (crb(c,2)) { goto L_802B7D2C; } // 802B7CE8
  c->r[0]=0u-c->r[3]; // 802B7CEC
  c->r[0]=c->r[0]|c->r[3]; // 802B7CF0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7CF4
  if (crb(c,2)) { goto L_802B7D24; } // 802B7CF8
  c->r[0]=c->r[30]+0x00000001u; // 802B7CFC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7D00
  c->r[4]=c->r[3]+c->r[0]; // 802B7D04
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7D08
  cmps(c,0,(int32_t)c->r[0],0); // 802B7D0C
  if (crb(c,2)) { goto L_802B7D1C; } // 802B7D10
  c->r[3]=c->r[3]+c->r[0]; // 802B7D14
  goto L_802B7D30; // 802B7D18
L_802B7D1C:;
  c->r[3]=0u+0x00000000u; // 802B7D1C
  goto L_802B7D30; // 802B7D20
L_802B7D24:;
  c->r[3]=0u+0x00000000u; // 802B7D24
  goto L_802B7D30; // 802B7D28
L_802B7D2C:;
  c->r[3]=0u+0x00000000u; // 802B7D2C
L_802B7D30:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B7D30
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 802B7D34
  c->r[0]=cntlz(c->r[0]); // 802B7D38
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B7D3C
  if (!crb(c,2)) { goto L_802B7D4C; } // 802B7D40
  c->r[3]=0u+0x00000000u; // 802B7D44
  goto L_802B83B4; // 802B7D48
L_802B7D4C:;
  c->r[30]=c->r[30]+0x00000001u; // 802B7D4C
L_802B7D50:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7D50
  if (crb(c,0)) { IRQCHK(c); goto L_802B7CC8; } // 802B7D54
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B7D58
  c->r[0]=c->r[31]+0x00000060u; // 802B7D5C
  W32(c->r[1]+0x00000074u,c->r[0]); // 802B7D60
  c->r[4]=c->r[1]+0x00000074u; // 802B7D64
  c->r[0]=c->r[3]+0x00000018u; // 802B7D68
  c->r[3]=c->r[1]+0x00000070u; // 802B7D6C
  W32(c->r[1]+0x00000070u,c->r[0]); // 802B7D70
  c->lr=0x802B7D78u; f_802B6758(c); // 802B7D74
  cmps(c,0,(int32_t)c->r[3],0); // 802B7D78
  if (crb(c,2)) { goto L_802B7DA0; } // 802B7D7C
  c->r[0]=0u-c->r[3]; // 802B7D80
  c->r[0]=c->r[0]|c->r[3]; // 802B7D84
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7D88
  if (crb(c,2)) { goto L_802B7D98; } // 802B7D8C
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B7D90
  goto L_802B7DA4; // 802B7D94
L_802B7D98:;
  c->r[27]=0u+0x00000000u; // 802B7D98
  goto L_802B7DA4; // 802B7D9C
L_802B7DA0:;
  c->r[27]=0u+0x00000000u; // 802B7DA0
L_802B7DA4:;
  c->r[28]=c->r[31]+0x00000060u; // 802B7DA4
  c->r[30]=0u+0x00000000u; // 802B7DA8
  goto L_802B7E38; // 802B7DAC
L_802B7DB0:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7DB0
  c->r[4]=c->r[1]+0x00000068u; // 802B7DB4
  W32(c->r[1]+0x00000068u,c->r[28]); // 802B7DB8
  c->r[3]=c->r[1]+0x0000006Cu; // 802B7DBC
  c->r[0]=c->r[5]+0x00000018u; // 802B7DC0
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 802B7DC4
  c->lr=0x802B7DCCu; f_802B6758(c); // 802B7DC8
  cmps(c,0,(int32_t)c->r[3],0); // 802B7DCC
  if (crb(c,2)) { goto L_802B7E14; } // 802B7DD0
  c->r[0]=0u-c->r[3]; // 802B7DD4
  c->r[0]=c->r[0]|c->r[3]; // 802B7DD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7DDC
  if (crb(c,2)) { goto L_802B7E0C; } // 802B7DE0
  c->r[0]=c->r[30]+0x00000001u; // 802B7DE4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7DE8
  c->r[4]=c->r[3]+c->r[0]; // 802B7DEC
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7DF0
  cmps(c,0,(int32_t)c->r[0],0); // 802B7DF4
  if (crb(c,2)) { goto L_802B7E04; } // 802B7DF8
  c->r[3]=c->r[3]+c->r[0]; // 802B7DFC
  goto L_802B7E18; // 802B7E00
L_802B7E04:;
  c->r[3]=0u+0x00000000u; // 802B7E04
  goto L_802B7E18; // 802B7E08
L_802B7E0C:;
  c->r[3]=0u+0x00000000u; // 802B7E0C
  goto L_802B7E18; // 802B7E10
L_802B7E14:;
  c->r[3]=0u+0x00000000u; // 802B7E14
L_802B7E18:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B7E18
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802B7E1C
  c->r[0]=cntlz(c->r[0]); // 802B7E20
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B7E24
  if (!crb(c,2)) { goto L_802B7E34; } // 802B7E28
  c->r[3]=0u+0x00000000u; // 802B7E2C
  goto L_802B83B4; // 802B7E30
L_802B7E34:;
  c->r[30]=c->r[30]+0x00000001u; // 802B7E34
L_802B7E38:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7E38
  if (crb(c,0)) { IRQCHK(c); goto L_802B7DB0; } // 802B7E3C
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B7E40
  c->r[0]=c->r[31]+0x00000080u; // 802B7E44
  W32(c->r[1]+0x00000064u,c->r[0]); // 802B7E48
  c->r[4]=c->r[1]+0x00000064u; // 802B7E4C
  c->r[0]=c->r[3]+0x00000018u; // 802B7E50
  c->r[3]=c->r[1]+0x00000060u; // 802B7E54
  W32(c->r[1]+0x00000060u,c->r[0]); // 802B7E58
  c->lr=0x802B7E60u; f_802B6758(c); // 802B7E5C
  cmps(c,0,(int32_t)c->r[3],0); // 802B7E60
  if (crb(c,2)) { goto L_802B7E88; } // 802B7E64
  c->r[0]=0u-c->r[3]; // 802B7E68
  c->r[0]=c->r[0]|c->r[3]; // 802B7E6C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7E70
  if (crb(c,2)) { goto L_802B7E80; } // 802B7E74
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B7E78
  goto L_802B7E8C; // 802B7E7C
L_802B7E80:;
  c->r[27]=0u+0x00000000u; // 802B7E80
  goto L_802B7E8C; // 802B7E84
L_802B7E88:;
  c->r[27]=0u+0x00000000u; // 802B7E88
L_802B7E8C:;
  c->r[28]=c->r[31]+0x00000080u; // 802B7E8C
  c->r[30]=0u+0x00000000u; // 802B7E90
  goto L_802B7F20; // 802B7E94
L_802B7E98:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7E98
  c->r[4]=c->r[1]+0x00000058u; // 802B7E9C
  W32(c->r[1]+0x00000058u,c->r[28]); // 802B7EA0
  c->r[3]=c->r[1]+0x0000005Cu; // 802B7EA4
  c->r[0]=c->r[5]+0x00000018u; // 802B7EA8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 802B7EAC
  c->lr=0x802B7EB4u; f_802B6758(c); // 802B7EB0
  cmps(c,0,(int32_t)c->r[3],0); // 802B7EB4
  if (crb(c,2)) { goto L_802B7EFC; } // 802B7EB8
  c->r[0]=0u-c->r[3]; // 802B7EBC
  c->r[0]=c->r[0]|c->r[3]; // 802B7EC0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7EC4
  if (crb(c,2)) { goto L_802B7EF4; } // 802B7EC8
  c->r[0]=c->r[30]+0x00000001u; // 802B7ECC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7ED0
  c->r[4]=c->r[3]+c->r[0]; // 802B7ED4
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7ED8
  cmps(c,0,(int32_t)c->r[0],0); // 802B7EDC
  if (crb(c,2)) { goto L_802B7EEC; } // 802B7EE0
  c->r[3]=c->r[3]+c->r[0]; // 802B7EE4
  goto L_802B7F00; // 802B7EE8
L_802B7EEC:;
  c->r[3]=0u+0x00000000u; // 802B7EEC
  goto L_802B7F00; // 802B7EF0
L_802B7EF4:;
  c->r[3]=0u+0x00000000u; // 802B7EF4
  goto L_802B7F00; // 802B7EF8
L_802B7EFC:;
  c->r[3]=0u+0x00000000u; // 802B7EFC
L_802B7F00:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B7F00
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 802B7F04
  c->r[0]=cntlz(c->r[0]); // 802B7F08
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B7F0C
  if (!crb(c,2)) { goto L_802B7F1C; } // 802B7F10
  c->r[3]=0u+0x00000000u; // 802B7F14
  goto L_802B83B4; // 802B7F18
L_802B7F1C:;
  c->r[30]=c->r[30]+0x00000001u; // 802B7F1C
L_802B7F20:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B7F20
  if (crb(c,0)) { IRQCHK(c); goto L_802B7E98; } // 802B7F24
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B7F28
  c->r[0]=c->r[31]+0x000000A0u; // 802B7F2C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802B7F30
  c->r[4]=c->r[1]+0x00000054u; // 802B7F34
  c->r[0]=c->r[3]+0x00000018u; // 802B7F38
  c->r[3]=c->r[1]+0x00000050u; // 802B7F3C
  W32(c->r[1]+0x00000050u,c->r[0]); // 802B7F40
  c->lr=0x802B7F48u; f_802B6758(c); // 802B7F44
  cmps(c,0,(int32_t)c->r[3],0); // 802B7F48
  if (crb(c,2)) { goto L_802B7F70; } // 802B7F4C
  c->r[0]=0u-c->r[3]; // 802B7F50
  c->r[0]=c->r[0]|c->r[3]; // 802B7F54
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7F58
  if (crb(c,2)) { goto L_802B7F68; } // 802B7F5C
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B7F60
  goto L_802B7F74; // 802B7F64
L_802B7F68:;
  c->r[27]=0u+0x00000000u; // 802B7F68
  goto L_802B7F74; // 802B7F6C
L_802B7F70:;
  c->r[27]=0u+0x00000000u; // 802B7F70
L_802B7F74:;
  c->r[28]=c->r[31]+0x000000A0u; // 802B7F74
  c->r[30]=0u+0x00000000u; // 802B7F78
  goto L_802B8008; // 802B7F7C
L_802B7F80:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B7F80
  c->r[4]=c->r[1]+0x00000048u; // 802B7F84
  W32(c->r[1]+0x00000048u,c->r[28]); // 802B7F88
  c->r[3]=c->r[1]+0x0000004Cu; // 802B7F8C
  c->r[0]=c->r[5]+0x00000018u; // 802B7F90
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 802B7F94
  c->lr=0x802B7F9Cu; f_802B6758(c); // 802B7F98
  cmps(c,0,(int32_t)c->r[3],0); // 802B7F9C
  if (crb(c,2)) { goto L_802B7FE4; } // 802B7FA0
  c->r[0]=0u-c->r[3]; // 802B7FA4
  c->r[0]=c->r[0]|c->r[3]; // 802B7FA8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B7FAC
  if (crb(c,2)) { goto L_802B7FDC; } // 802B7FB0
  c->r[0]=c->r[30]+0x00000001u; // 802B7FB4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B7FB8
  c->r[4]=c->r[3]+c->r[0]; // 802B7FBC
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B7FC0
  cmps(c,0,(int32_t)c->r[0],0); // 802B7FC4
  if (crb(c,2)) { goto L_802B7FD4; } // 802B7FC8
  c->r[3]=c->r[3]+c->r[0]; // 802B7FCC
  goto L_802B7FE8; // 802B7FD0
L_802B7FD4:;
  c->r[3]=0u+0x00000000u; // 802B7FD4
  goto L_802B7FE8; // 802B7FD8
L_802B7FDC:;
  c->r[3]=0u+0x00000000u; // 802B7FDC
  goto L_802B7FE8; // 802B7FE0
L_802B7FE4:;
  c->r[3]=0u+0x00000000u; // 802B7FE4
L_802B7FE8:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B7FE8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 802B7FEC
  c->r[0]=cntlz(c->r[0]); // 802B7FF0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B7FF4
  if (!crb(c,2)) { goto L_802B8004; } // 802B7FF8
  c->r[3]=0u+0x00000000u; // 802B7FFC
  goto L_802B83B4; // 802B8000
L_802B8004:;
  c->r[30]=c->r[30]+0x00000001u; // 802B8004
L_802B8008:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B8008
  if (crb(c,0)) { IRQCHK(c); goto L_802B7F80; } // 802B800C
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B8010
  c->r[0]=c->r[31]+0x000000C0u; // 802B8014
  W32(c->r[1]+0x00000044u,c->r[0]); // 802B8018
  c->r[4]=c->r[1]+0x00000044u; // 802B801C
  c->r[0]=c->r[3]+0x00000018u; // 802B8020
  c->r[3]=c->r[1]+0x00000040u; // 802B8024
  W32(c->r[1]+0x00000040u,c->r[0]); // 802B8028
  c->lr=0x802B8030u; f_802B6758(c); // 802B802C
  cmps(c,0,(int32_t)c->r[3],0); // 802B8030
  if (crb(c,2)) { goto L_802B8058; } // 802B8034
  c->r[0]=0u-c->r[3]; // 802B8038
  c->r[0]=c->r[0]|c->r[3]; // 802B803C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B8040
  if (crb(c,2)) { goto L_802B8050; } // 802B8044
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B8048
  goto L_802B805C; // 802B804C
L_802B8050:;
  c->r[27]=0u+0x00000000u; // 802B8050
  goto L_802B805C; // 802B8054
L_802B8058:;
  c->r[27]=0u+0x00000000u; // 802B8058
L_802B805C:;
  c->r[28]=c->r[31]+0x000000C0u; // 802B805C
  c->r[30]=0u+0x00000000u; // 802B8060
  goto L_802B80F0; // 802B8064
L_802B8068:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B8068
  c->r[4]=c->r[1]+0x00000038u; // 802B806C
  W32(c->r[1]+0x00000038u,c->r[28]); // 802B8070
  c->r[3]=c->r[1]+0x0000003Cu; // 802B8074
  c->r[0]=c->r[5]+0x00000018u; // 802B8078
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802B807C
  c->lr=0x802B8084u; f_802B6758(c); // 802B8080
  cmps(c,0,(int32_t)c->r[3],0); // 802B8084
  if (crb(c,2)) { goto L_802B80CC; } // 802B8088
  c->r[0]=0u-c->r[3]; // 802B808C
  c->r[0]=c->r[0]|c->r[3]; // 802B8090
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B8094
  if (crb(c,2)) { goto L_802B80C4; } // 802B8098
  c->r[0]=c->r[30]+0x00000001u; // 802B809C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B80A0
  c->r[4]=c->r[3]+c->r[0]; // 802B80A4
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B80A8
  cmps(c,0,(int32_t)c->r[0],0); // 802B80AC
  if (crb(c,2)) { goto L_802B80BC; } // 802B80B0
  c->r[3]=c->r[3]+c->r[0]; // 802B80B4
  goto L_802B80D0; // 802B80B8
L_802B80BC:;
  c->r[3]=0u+0x00000000u; // 802B80BC
  goto L_802B80D0; // 802B80C0
L_802B80C4:;
  c->r[3]=0u+0x00000000u; // 802B80C4
  goto L_802B80D0; // 802B80C8
L_802B80CC:;
  c->r[3]=0u+0x00000000u; // 802B80CC
L_802B80D0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B80D0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 802B80D4
  c->r[0]=cntlz(c->r[0]); // 802B80D8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B80DC
  if (!crb(c,2)) { goto L_802B80EC; } // 802B80E0
  c->r[3]=0u+0x00000000u; // 802B80E4
  goto L_802B83B4; // 802B80E8
L_802B80EC:;
  c->r[30]=c->r[30]+0x00000001u; // 802B80EC
L_802B80F0:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B80F0
  if (crb(c,0)) { IRQCHK(c); goto L_802B8068; } // 802B80F4
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B80F8
  c->r[0]=c->r[31]+0x000000E0u; // 802B80FC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802B8100
  c->r[4]=c->r[1]+0x00000034u; // 802B8104
  c->r[0]=c->r[3]+0x00000018u; // 802B8108
  c->r[3]=c->r[1]+0x00000030u; // 802B810C
  W32(c->r[1]+0x00000030u,c->r[0]); // 802B8110
  c->lr=0x802B8118u; f_802B6758(c); // 802B8114
  cmps(c,0,(int32_t)c->r[3],0); // 802B8118
  if (crb(c,2)) { goto L_802B8140; } // 802B811C
  c->r[0]=0u-c->r[3]; // 802B8120
  c->r[0]=c->r[0]|c->r[3]; // 802B8124
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B8128
  if (crb(c,2)) { goto L_802B8138; } // 802B812C
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B8130
  goto L_802B8144; // 802B8134
L_802B8138:;
  c->r[27]=0u+0x00000000u; // 802B8138
  goto L_802B8144; // 802B813C
L_802B8140:;
  c->r[27]=0u+0x00000000u; // 802B8140
L_802B8144:;
  c->r[28]=c->r[31]+0x000000E0u; // 802B8144
  c->r[30]=0u+0x00000000u; // 802B8148
  goto L_802B81D8; // 802B814C
L_802B8150:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B8150
  c->r[4]=c->r[1]+0x00000028u; // 802B8154
  W32(c->r[1]+0x00000028u,c->r[28]); // 802B8158
  c->r[3]=c->r[1]+0x0000002Cu; // 802B815C
  c->r[0]=c->r[5]+0x00000018u; // 802B8160
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802B8164
  c->lr=0x802B816Cu; f_802B6758(c); // 802B8168
  cmps(c,0,(int32_t)c->r[3],0); // 802B816C
  if (crb(c,2)) { goto L_802B81B4; } // 802B8170
  c->r[0]=0u-c->r[3]; // 802B8174
  c->r[0]=c->r[0]|c->r[3]; // 802B8178
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B817C
  if (crb(c,2)) { goto L_802B81AC; } // 802B8180
  c->r[0]=c->r[30]+0x00000001u; // 802B8184
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B8188
  c->r[4]=c->r[3]+c->r[0]; // 802B818C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B8190
  cmps(c,0,(int32_t)c->r[0],0); // 802B8194
  if (crb(c,2)) { goto L_802B81A4; } // 802B8198
  c->r[3]=c->r[3]+c->r[0]; // 802B819C
  goto L_802B81B8; // 802B81A0
L_802B81A4:;
  c->r[3]=0u+0x00000000u; // 802B81A4
  goto L_802B81B8; // 802B81A8
L_802B81AC:;
  c->r[3]=0u+0x00000000u; // 802B81AC
  goto L_802B81B8; // 802B81B0
L_802B81B4:;
  c->r[3]=0u+0x00000000u; // 802B81B4
L_802B81B8:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B81B8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802B81BC
  c->r[0]=cntlz(c->r[0]); // 802B81C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B81C4
  if (!crb(c,2)) { goto L_802B81D4; } // 802B81C8
  c->r[3]=0u+0x00000000u; // 802B81CC
  goto L_802B83B4; // 802B81D0
L_802B81D4:;
  c->r[30]=c->r[30]+0x00000001u; // 802B81D4
L_802B81D8:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B81D8
  if (crb(c,0)) { IRQCHK(c); goto L_802B8150; } // 802B81DC
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B81E0
  c->r[0]=c->r[31]+0x00000100u; // 802B81E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B81E8
  c->r[4]=c->r[1]+0x00000024u; // 802B81EC
  c->r[0]=c->r[3]+0x00000018u; // 802B81F0
  c->r[3]=c->r[1]+0x00000020u; // 802B81F4
  W32(c->r[1]+0x00000020u,c->r[0]); // 802B81F8
  c->lr=0x802B8200u; f_802B6758(c); // 802B81FC
  cmps(c,0,(int32_t)c->r[3],0); // 802B8200
  if (crb(c,2)) { goto L_802B8228; } // 802B8204
  c->r[0]=0u-c->r[3]; // 802B8208
  c->r[0]=c->r[0]|c->r[3]; // 802B820C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B8210
  if (crb(c,2)) { goto L_802B8220; } // 802B8214
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B8218
  goto L_802B822C; // 802B821C
L_802B8220:;
  c->r[27]=0u+0x00000000u; // 802B8220
  goto L_802B822C; // 802B8224
L_802B8228:;
  c->r[27]=0u+0x00000000u; // 802B8228
L_802B822C:;
  c->r[28]=c->r[31]+0x00000100u; // 802B822C
  c->r[30]=0u+0x00000000u; // 802B8230
  goto L_802B82C0; // 802B8234
L_802B8238:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B8238
  c->r[4]=c->r[1]+0x00000018u; // 802B823C
  W32(c->r[1]+0x00000018u,c->r[28]); // 802B8240
  c->r[3]=c->r[1]+0x0000001Cu; // 802B8244
  c->r[0]=c->r[5]+0x00000018u; // 802B8248
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802B824C
  c->lr=0x802B8254u; f_802B6758(c); // 802B8250
  cmps(c,0,(int32_t)c->r[3],0); // 802B8254
  if (crb(c,2)) { goto L_802B829C; } // 802B8258
  c->r[0]=0u-c->r[3]; // 802B825C
  c->r[0]=c->r[0]|c->r[3]; // 802B8260
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B8264
  if (crb(c,2)) { goto L_802B8294; } // 802B8268
  c->r[0]=c->r[30]+0x00000001u; // 802B826C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B8270
  c->r[4]=c->r[3]+c->r[0]; // 802B8274
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B8278
  cmps(c,0,(int32_t)c->r[0],0); // 802B827C
  if (crb(c,2)) { goto L_802B828C; } // 802B8280
  c->r[3]=c->r[3]+c->r[0]; // 802B8284
  goto L_802B82A0; // 802B8288
L_802B828C:;
  c->r[3]=0u+0x00000000u; // 802B828C
  goto L_802B82A0; // 802B8290
L_802B8294:;
  c->r[3]=0u+0x00000000u; // 802B8294
  goto L_802B82A0; // 802B8298
L_802B829C:;
  c->r[3]=0u+0x00000000u; // 802B829C
L_802B82A0:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B82A0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 802B82A4
  c->r[0]=cntlz(c->r[0]); // 802B82A8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B82AC
  if (!crb(c,2)) { goto L_802B82BC; } // 802B82B0
  c->r[3]=0u+0x00000000u; // 802B82B4
  goto L_802B83B4; // 802B82B8
L_802B82BC:;
  c->r[30]=c->r[30]+0x00000001u; // 802B82BC
L_802B82C0:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B82C0
  if (crb(c,0)) { IRQCHK(c); goto L_802B8238; } // 802B82C4
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B82C8
  c->r[0]=c->r[31]+0x00000120u; // 802B82CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B82D0
  c->r[4]=c->r[1]+0x00000014u; // 802B82D4
  c->r[0]=c->r[3]+0x00000018u; // 802B82D8
  c->r[3]=c->r[1]+0x00000010u; // 802B82DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B82E0
  c->lr=0x802B82E8u; f_802B6758(c); // 802B82E4
  cmps(c,0,(int32_t)c->r[3],0); // 802B82E8
  if (crb(c,2)) { goto L_802B8310; } // 802B82EC
  c->r[0]=0u-c->r[3]; // 802B82F0
  c->r[0]=c->r[0]|c->r[3]; // 802B82F4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B82F8
  if (crb(c,2)) { goto L_802B8308; } // 802B82FC
  c->r[27]=R32(c->r[3]+0x00000004u); // 802B8300
  goto L_802B8314; // 802B8304
L_802B8308:;
  c->r[27]=0u+0x00000000u; // 802B8308
  goto L_802B8314; // 802B830C
L_802B8310:;
  c->r[27]=0u+0x00000000u; // 802B8310
L_802B8314:;
  c->r[31]=c->r[31]+0x00000120u; // 802B8314
  c->r[30]=0u+0x00000000u; // 802B8318
  goto L_802B83A8; // 802B831C
L_802B8320:;
  c->r[5]=R32(c->r[29]+0x00000000u); // 802B8320
  c->r[4]=c->r[1]+0x00000008u; // 802B8324
  W32(c->r[1]+0x00000008u,c->r[31]); // 802B8328
  c->r[3]=c->r[1]+0x0000000Cu; // 802B832C
  c->r[0]=c->r[5]+0x00000018u; // 802B8330
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B8334
  c->lr=0x802B833Cu; f_802B6758(c); // 802B8338
  cmps(c,0,(int32_t)c->r[3],0); // 802B833C
  if (crb(c,2)) { goto L_802B8384; } // 802B8340
  c->r[0]=0u-c->r[3]; // 802B8344
  c->r[0]=c->r[0]|c->r[3]; // 802B8348
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802B834C
  if (crb(c,2)) { goto L_802B837C; } // 802B8350
  c->r[0]=c->r[30]+0x00000001u; // 802B8354
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802B8358
  c->r[4]=c->r[3]+c->r[0]; // 802B835C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802B8360
  cmps(c,0,(int32_t)c->r[0],0); // 802B8364
  if (crb(c,2)) { goto L_802B8374; } // 802B8368
  c->r[3]=c->r[3]+c->r[0]; // 802B836C
  goto L_802B8388; // 802B8370
L_802B8374:;
  c->r[3]=0u+0x00000000u; // 802B8374
  goto L_802B8388; // 802B8378
L_802B837C:;
  c->r[3]=0u+0x00000000u; // 802B837C
  goto L_802B8388; // 802B8380
L_802B8384:;
  c->r[3]=0u+0x00000000u; // 802B8384
L_802B8388:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 802B8388
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802B838C
  c->r[0]=cntlz(c->r[0]); // 802B8390
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 802B8394
  if (!crb(c,2)) { goto L_802B83A4; } // 802B8398
  c->r[3]=0u+0x00000000u; // 802B839C
  goto L_802B83B4; // 802B83A0
L_802B83A4:;
  c->r[30]=c->r[30]+0x00000001u; // 802B83A4
L_802B83A8:;
  cmpu(c,0,c->r[30],c->r[27]); // 802B83A8
  if (crb(c,0)) { IRQCHK(c); goto L_802B8320; } // 802B83AC
  c->r[3]=0u+0x00000001u; // 802B83B0
L_802B83B4:;
  c->r[11]=c->r[1]+0x000000C0u; // 802B83B4
  c->lr=0x802B83BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B83B8
  c->r[0]=R32(c->r[1]+0x000000C4u); // 802B83BC
  c->lr=c->r[0]; // 802B83C0
  c->r[1]=c->r[1]+0x000000C0u; // 802B83C4
  return; // 802B83C8
}

// GetResByteCode__Q34nw4r3g3d6ResMdlCFPCc
void f_802B83CC(Ctx* __restrict c) {
  trace_call(0x802B83CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B83CC
  c->r[0]=c->lr; // 802B83D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B83D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B83D8
  c->r[0]=R32(c->r[3]+0x00000010u); // 802B83DC
  cmps(c,0,(int32_t)c->r[0],0); // 802B83E0
  if (crb(c,2)) { goto L_802B83F0; } // 802B83E4
  c->r[0]=c->r[3]+c->r[0]; // 802B83E8
  goto L_802B83F4; // 802B83EC
L_802B83F0:;
  c->r[0]=0u+0x00000000u; // 802B83F0
L_802B83F4:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B83F4
  c->r[3]=c->r[1]+0x00000008u; // 802B83F8
  c->lr=0x802B8400u; f_802B66DC(c); // 802B83FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B8400
  c->lr=c->r[0]; // 802B8404
  c->r[1]=c->r[1]+0x00000010u; // 802B8408
  return; // 802B840C
}

// GetResNode__Q34nw4r3g3d6ResMdlCFPCc
void f_802B8410(Ctx* __restrict c) {
  trace_call(0x802B8410u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B8410
  c->r[0]=c->lr; // 802B8414
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8418
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B841C
  c->r[0]=R32(c->r[3]+0x00000014u); // 802B8420
  cmps(c,0,(int32_t)c->r[0],0); // 802B8424
  if (crb(c,2)) { goto L_802B8434; } // 802B8428
  c->r[0]=c->r[3]+c->r[0]; // 802B842C
  goto L_802B8438; // 802B8430
L_802B8434:;
  c->r[0]=0u+0x00000000u; // 802B8434
L_802B8438:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B8438
  c->r[3]=c->r[1]+0x00000008u; // 802B843C
  c->lr=0x802B8444u; f_802B66DC(c); // 802B8440
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B8444
  c->lr=c->r[0]; // 802B8448
  c->r[1]=c->r[1]+0x00000010u; // 802B844C
  return; // 802B8450
}

// GetResNode__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
void f_802B8454(Ctx* __restrict c) {
  trace_call(0x802B8454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B8454
  c->r[0]=c->lr; // 802B8458
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B845C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B8460
  c->r[0]=R32(c->r[3]+0x00000014u); // 802B8464
  cmps(c,0,(int32_t)c->r[0],0); // 802B8468
  if (crb(c,2)) { goto L_802B8478; } // 802B846C
  c->r[0]=c->r[3]+c->r[0]; // 802B8470
  goto L_802B847C; // 802B8474
L_802B8478:;
  c->r[0]=0u+0x00000000u; // 802B8478
L_802B847C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802B847C
  c->r[3]=c->r[1]+0x0000000Cu; // 802B8480
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B8484
  c->r[4]=c->r[1]+0x00000008u; // 802B8488
  W32(c->r[1]+0x00000008u,c->r[5]); // 802B848C
  c->lr=0x802B8494u; f_802B6758(c); // 802B8490
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B8494
  c->lr=c->r[0]; // 802B8498
  c->r[1]=c->r[1]+0x00000010u; // 802B849C
  return; // 802B84A0
}

// GetResNode__Q34nw4r3g3d6ResMdlCFi
void f_802B84A4(Ctx* __restrict c) {
  trace_call(0x802B84A4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B84A4
  c->r[0]=R32(c->r[3]+0x00000014u); // 802B84A8
  cmps(c,0,(int32_t)c->r[0],0); // 802B84AC
  if (crb(c,2)) { goto L_802B84BC; } // 802B84B0
  c->r[0]=c->r[3]+c->r[0]; // 802B84B4
  goto L_802B84C0; // 802B84B8
L_802B84BC:;
  c->r[0]=0u+0x00000000u; // 802B84BC
L_802B84C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B84C0
  if (crb(c,2)) { goto L_802B84F0; } // 802B84C4
  c->r[3]=c->r[4]+0x00000001u; // 802B84C8
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B84CC
  c->r[3]=c->r[0]+c->r[3]; // 802B84D0
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B84D4
  cmps(c,0,(int32_t)c->r[3],0); // 802B84D8
  if (crb(c,2)) { goto L_802B84E8; } // 802B84DC
  c->r[3]=c->r[0]+c->r[3]; // 802B84E0
  return; // 802B84E4
L_802B84E8:;
  c->r[3]=0u+0x00000000u; // 802B84E8
  return; // 802B84EC
L_802B84F0:;
  c->r[3]=0u+0x00000000u; // 802B84F0
  return; // 802B84F4
}

// GetResNode__Q34nw4r3g3d6ResMdlCFUl
void f_802B84F8(Ctx* __restrict c) {
  trace_call(0x802B84F8u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B84F8
  c->r[0]=R32(c->r[3]+0x00000014u); // 802B84FC
  cmps(c,0,(int32_t)c->r[0],0); // 802B8500
  if (crb(c,2)) { goto L_802B8510; } // 802B8504
  c->r[0]=c->r[3]+c->r[0]; // 802B8508
  goto L_802B8514; // 802B850C
L_802B8510:;
  c->r[0]=0u+0x00000000u; // 802B8510
L_802B8514:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8514
  if (crb(c,2)) { goto L_802B8544; } // 802B8518
  c->r[3]=c->r[4]+0x00000001u; // 802B851C
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8520
  c->r[3]=c->r[0]+c->r[3]; // 802B8524
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8528
  cmps(c,0,(int32_t)c->r[3],0); // 802B852C
  if (crb(c,2)) { goto L_802B853C; } // 802B8530
  c->r[3]=c->r[0]+c->r[3]; // 802B8534
  return; // 802B8538
L_802B853C:;
  c->r[3]=0u+0x00000000u; // 802B853C
  return; // 802B8540
L_802B8544:;
  c->r[3]=0u+0x00000000u; // 802B8544
  return; // 802B8548
}

// GetResNodeNumEntries__Q34nw4r3g3d6ResMdlCFv
void f_802B854C(Ctx* __restrict c) {
  trace_call(0x802B854Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B854C
  c->r[0]=R32(c->r[3]+0x00000014u); // 802B8550
  cmps(c,0,(int32_t)c->r[0],0); // 802B8554
  if (crb(c,2)) { goto L_802B8564; } // 802B8558
  c->r[3]=c->r[3]+c->r[0]; // 802B855C
  goto L_802B8568; // 802B8560
L_802B8564:;
  c->r[3]=0u+0x00000000u; // 802B8564
L_802B8568:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8568
  if (crb(c,2)) { goto L_802B8578; } // 802B856C
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B8570
  return; // 802B8574
L_802B8578:;
  c->r[3]=0u+0x00000000u; // 802B8578
  return; // 802B857C
}

// GetResVtxPos__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
void f_802B8580(Ctx* __restrict c) {
  trace_call(0x802B8580u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B8580
  c->r[0]=c->lr; // 802B8584
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8588
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B858C
  c->r[0]=R32(c->r[3]+0x00000018u); // 802B8590
  cmps(c,0,(int32_t)c->r[0],0); // 802B8594
  if (crb(c,2)) { goto L_802B85A4; } // 802B8598
  c->r[0]=c->r[3]+c->r[0]; // 802B859C
  goto L_802B85A8; // 802B85A0
L_802B85A4:;
  c->r[0]=0u+0x00000000u; // 802B85A4
L_802B85A8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802B85A8
  c->r[3]=c->r[1]+0x0000000Cu; // 802B85AC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B85B0
  c->r[4]=c->r[1]+0x00000008u; // 802B85B4
  W32(c->r[1]+0x00000008u,c->r[5]); // 802B85B8
  c->lr=0x802B85C0u; f_802B6758(c); // 802B85BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B85C0
  c->lr=c->r[0]; // 802B85C4
  c->r[1]=c->r[1]+0x00000010u; // 802B85C8
  return; // 802B85CC
}

// GetResVtxPos__Q34nw4r3g3d6ResMdlCFi
void f_802B85D0(Ctx* __restrict c) {
  trace_call(0x802B85D0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B85D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 802B85D4
  cmps(c,0,(int32_t)c->r[0],0); // 802B85D8
  if (crb(c,2)) { goto L_802B85E8; } // 802B85DC
  c->r[0]=c->r[3]+c->r[0]; // 802B85E0
  goto L_802B85EC; // 802B85E4
L_802B85E8:;
  c->r[0]=0u+0x00000000u; // 802B85E8
L_802B85EC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B85EC
  if (crb(c,2)) { goto L_802B861C; } // 802B85F0
  c->r[3]=c->r[4]+0x00000001u; // 802B85F4
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B85F8
  c->r[3]=c->r[0]+c->r[3]; // 802B85FC
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8600
  cmps(c,0,(int32_t)c->r[3],0); // 802B8604
  if (crb(c,2)) { goto L_802B8614; } // 802B8608
  c->r[3]=c->r[0]+c->r[3]; // 802B860C
  return; // 802B8610
L_802B8614:;
  c->r[3]=0u+0x00000000u; // 802B8614
  return; // 802B8618
L_802B861C:;
  c->r[3]=0u+0x00000000u; // 802B861C
  return; // 802B8620
}

// GetResVtxPos__Q34nw4r3g3d6ResMdlCFUl
void f_802B8624(Ctx* __restrict c) {
  trace_call(0x802B8624u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8624
  c->r[0]=R32(c->r[3]+0x00000018u); // 802B8628
  cmps(c,0,(int32_t)c->r[0],0); // 802B862C
  if (crb(c,2)) { goto L_802B863C; } // 802B8630
  c->r[0]=c->r[3]+c->r[0]; // 802B8634
  goto L_802B8640; // 802B8638
L_802B863C:;
  c->r[0]=0u+0x00000000u; // 802B863C
L_802B8640:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8640
  if (crb(c,2)) { goto L_802B8670; } // 802B8644
  c->r[3]=c->r[4]+0x00000001u; // 802B8648
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B864C
  c->r[3]=c->r[0]+c->r[3]; // 802B8650
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8654
  cmps(c,0,(int32_t)c->r[3],0); // 802B8658
  if (crb(c,2)) { goto L_802B8668; } // 802B865C
  c->r[3]=c->r[0]+c->r[3]; // 802B8660
  return; // 802B8664
L_802B8668:;
  c->r[3]=0u+0x00000000u; // 802B8668
  return; // 802B866C
L_802B8670:;
  c->r[3]=0u+0x00000000u; // 802B8670
  return; // 802B8674
}

// GetResVtxPosNumEntries__Q34nw4r3g3d6ResMdlCFv
void f_802B8678(Ctx* __restrict c) {
  trace_call(0x802B8678u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8678
  c->r[0]=R32(c->r[3]+0x00000018u); // 802B867C
  cmps(c,0,(int32_t)c->r[0],0); // 802B8680
  if (crb(c,2)) { goto L_802B8690; } // 802B8684
  c->r[3]=c->r[3]+c->r[0]; // 802B8688
  goto L_802B8694; // 802B868C
L_802B8690:;
  c->r[3]=0u+0x00000000u; // 802B8690
L_802B8694:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8694
  if (crb(c,2)) { goto L_802B86A4; } // 802B8698
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B869C
  return; // 802B86A0
L_802B86A4:;
  c->r[3]=0u+0x00000000u; // 802B86A4
  return; // 802B86A8
}

// GetResVtxNrm__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
void f_802B86AC(Ctx* __restrict c) {
  trace_call(0x802B86ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B86AC
  c->r[0]=c->lr; // 802B86B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B86B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B86B8
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802B86BC
  cmps(c,0,(int32_t)c->r[0],0); // 802B86C0
  if (crb(c,2)) { goto L_802B86D0; } // 802B86C4
  c->r[0]=c->r[3]+c->r[0]; // 802B86C8
  goto L_802B86D4; // 802B86CC
L_802B86D0:;
  c->r[0]=0u+0x00000000u; // 802B86D0
L_802B86D4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802B86D4
  c->r[3]=c->r[1]+0x0000000Cu; // 802B86D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B86DC
  c->r[4]=c->r[1]+0x00000008u; // 802B86E0
  W32(c->r[1]+0x00000008u,c->r[5]); // 802B86E4
  c->lr=0x802B86ECu; f_802B6758(c); // 802B86E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B86EC
  c->lr=c->r[0]; // 802B86F0
  c->r[1]=c->r[1]+0x00000010u; // 802B86F4
  return; // 802B86F8
}

// GetResVtxNrm__Q34nw4r3g3d6ResMdlCFi
void f_802B86FC(Ctx* __restrict c) {
  trace_call(0x802B86FCu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B86FC
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802B8700
  cmps(c,0,(int32_t)c->r[0],0); // 802B8704
  if (crb(c,2)) { goto L_802B8714; } // 802B8708
  c->r[0]=c->r[3]+c->r[0]; // 802B870C
  goto L_802B8718; // 802B8710
L_802B8714:;
  c->r[0]=0u+0x00000000u; // 802B8714
L_802B8718:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8718
  if (crb(c,2)) { goto L_802B8748; } // 802B871C
  c->r[3]=c->r[4]+0x00000001u; // 802B8720
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8724
  c->r[3]=c->r[0]+c->r[3]; // 802B8728
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B872C
  cmps(c,0,(int32_t)c->r[3],0); // 802B8730
  if (crb(c,2)) { goto L_802B8740; } // 802B8734
  c->r[3]=c->r[0]+c->r[3]; // 802B8738
  return; // 802B873C
L_802B8740:;
  c->r[3]=0u+0x00000000u; // 802B8740
  return; // 802B8744
L_802B8748:;
  c->r[3]=0u+0x00000000u; // 802B8748
  return; // 802B874C
}

// GetResVtxNrm__Q34nw4r3g3d6ResMdlCFUl
void f_802B8750(Ctx* __restrict c) {
  trace_call(0x802B8750u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8750
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802B8754
  cmps(c,0,(int32_t)c->r[0],0); // 802B8758
  if (crb(c,2)) { goto L_802B8768; } // 802B875C
  c->r[0]=c->r[3]+c->r[0]; // 802B8760
  goto L_802B876C; // 802B8764
L_802B8768:;
  c->r[0]=0u+0x00000000u; // 802B8768
L_802B876C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B876C
  if (crb(c,2)) { goto L_802B879C; } // 802B8770
  c->r[3]=c->r[4]+0x00000001u; // 802B8774
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8778
  c->r[3]=c->r[0]+c->r[3]; // 802B877C
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8780
  cmps(c,0,(int32_t)c->r[3],0); // 802B8784
  if (crb(c,2)) { goto L_802B8794; } // 802B8788
  c->r[3]=c->r[0]+c->r[3]; // 802B878C
  return; // 802B8790
L_802B8794:;
  c->r[3]=0u+0x00000000u; // 802B8794
  return; // 802B8798
L_802B879C:;
  c->r[3]=0u+0x00000000u; // 802B879C
  return; // 802B87A0
}

// GetResVtxNrmNumEntries__Q34nw4r3g3d6ResMdlCFv
void f_802B87A4(Ctx* __restrict c) {
  trace_call(0x802B87A4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B87A4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802B87A8
  cmps(c,0,(int32_t)c->r[0],0); // 802B87AC
  if (crb(c,2)) { goto L_802B87BC; } // 802B87B0
  c->r[3]=c->r[3]+c->r[0]; // 802B87B4
  goto L_802B87C0; // 802B87B8
L_802B87BC:;
  c->r[3]=0u+0x00000000u; // 802B87BC
L_802B87C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B87C0
  if (crb(c,2)) { goto L_802B87D0; } // 802B87C4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B87C8
  return; // 802B87CC
L_802B87D0:;
  c->r[3]=0u+0x00000000u; // 802B87D0
  return; // 802B87D4
}

// GetResVtxClr__Q34nw4r3g3d6ResMdlCFQ34nw4r3g3d7ResName
void f_802B87D8(Ctx* __restrict c) {
  trace_call(0x802B87D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B87D8
  c->r[0]=c->lr; // 802B87DC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B87E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B87E4
  c->r[0]=R32(c->r[3]+0x00000020u); // 802B87E8
  cmps(c,0,(int32_t)c->r[0],0); // 802B87EC
  if (crb(c,2)) { goto L_802B87FC; } // 802B87F0
  c->r[0]=c->r[3]+c->r[0]; // 802B87F4
  goto L_802B8800; // 802B87F8
L_802B87FC:;
  c->r[0]=0u+0x00000000u; // 802B87FC
L_802B8800:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802B8800
  c->r[3]=c->r[1]+0x0000000Cu; // 802B8804
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B8808
  c->r[4]=c->r[1]+0x00000008u; // 802B880C
  W32(c->r[1]+0x00000008u,c->r[5]); // 802B8810
  c->lr=0x802B8818u; f_802B6758(c); // 802B8814
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B8818
  c->lr=c->r[0]; // 802B881C
  c->r[1]=c->r[1]+0x00000010u; // 802B8820
  return; // 802B8824
}

// GetResVtxClr__Q34nw4r3g3d6ResMdlCFi
void f_802B8828(Ctx* __restrict c) {
  trace_call(0x802B8828u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8828
  c->r[0]=R32(c->r[3]+0x00000020u); // 802B882C
  cmps(c,0,(int32_t)c->r[0],0); // 802B8830
  if (crb(c,2)) { goto L_802B8840; } // 802B8834
  c->r[0]=c->r[3]+c->r[0]; // 802B8838
  goto L_802B8844; // 802B883C
L_802B8840:;
  c->r[0]=0u+0x00000000u; // 802B8840
L_802B8844:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8844
  if (crb(c,2)) { goto L_802B8874; } // 802B8848
  c->r[3]=c->r[4]+0x00000001u; // 802B884C
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8850
  c->r[3]=c->r[0]+c->r[3]; // 802B8854
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8858
  cmps(c,0,(int32_t)c->r[3],0); // 802B885C
  if (crb(c,2)) { goto L_802B886C; } // 802B8860
  c->r[3]=c->r[0]+c->r[3]; // 802B8864
  return; // 802B8868
L_802B886C:;
  c->r[3]=0u+0x00000000u; // 802B886C
  return; // 802B8870
L_802B8874:;
  c->r[3]=0u+0x00000000u; // 802B8874
  return; // 802B8878
}

// GetResVtxClr__Q34nw4r3g3d6ResMdlCFUl
void f_802B887C(Ctx* __restrict c) {
  trace_call(0x802B887Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B887C
  c->r[0]=R32(c->r[3]+0x00000020u); // 802B8880
  cmps(c,0,(int32_t)c->r[0],0); // 802B8884
  if (crb(c,2)) { goto L_802B8894; } // 802B8888
  c->r[0]=c->r[3]+c->r[0]; // 802B888C
  goto L_802B8898; // 802B8890
L_802B8894:;
  c->r[0]=0u+0x00000000u; // 802B8894
L_802B8898:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8898
  if (crb(c,2)) { goto L_802B88C8; } // 802B889C
  c->r[3]=c->r[4]+0x00000001u; // 802B88A0
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B88A4
  c->r[3]=c->r[0]+c->r[3]; // 802B88A8
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B88AC
  cmps(c,0,(int32_t)c->r[3],0); // 802B88B0
  if (crb(c,2)) { goto L_802B88C0; } // 802B88B4
  c->r[3]=c->r[0]+c->r[3]; // 802B88B8
  return; // 802B88BC
L_802B88C0:;
  c->r[3]=0u+0x00000000u; // 802B88C0
  return; // 802B88C4
L_802B88C8:;
  c->r[3]=0u+0x00000000u; // 802B88C8
  return; // 802B88CC
}

// GetResVtxClrNumEntries__Q34nw4r3g3d6ResMdlCFv
void f_802B88D0(Ctx* __restrict c) {
  trace_call(0x802B88D0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B88D0
  c->r[0]=R32(c->r[3]+0x00000020u); // 802B88D4
  cmps(c,0,(int32_t)c->r[0],0); // 802B88D8
  if (crb(c,2)) { goto L_802B88E8; } // 802B88DC
  c->r[3]=c->r[3]+c->r[0]; // 802B88E0
  goto L_802B88EC; // 802B88E4
L_802B88E8:;
  c->r[3]=0u+0x00000000u; // 802B88E8
L_802B88EC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B88EC
  if (crb(c,2)) { goto L_802B88FC; } // 802B88F0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B88F4
  return; // 802B88F8
L_802B88FC:;
  c->r[3]=0u+0x00000000u; // 802B88FC
  return; // 802B8900
}

// GetResVtxTexCoord__Q34nw4r3g3d6ResMdlCFi
void f_802B8904(Ctx* __restrict c) {
  trace_call(0x802B8904u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8904
  c->r[0]=R32(c->r[3]+0x00000024u); // 802B8908
  cmps(c,0,(int32_t)c->r[0],0); // 802B890C
  if (crb(c,2)) { goto L_802B891C; } // 802B8910
  c->r[0]=c->r[3]+c->r[0]; // 802B8914
  goto L_802B8920; // 802B8918
L_802B891C:;
  c->r[0]=0u+0x00000000u; // 802B891C
L_802B8920:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8920
  if (crb(c,2)) { goto L_802B8950; } // 802B8924
  c->r[3]=c->r[4]+0x00000001u; // 802B8928
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B892C
  c->r[3]=c->r[0]+c->r[3]; // 802B8930
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8934
  cmps(c,0,(int32_t)c->r[3],0); // 802B8938
  if (crb(c,2)) { goto L_802B8948; } // 802B893C
  c->r[3]=c->r[0]+c->r[3]; // 802B8940
  return; // 802B8944
L_802B8948:;
  c->r[3]=0u+0x00000000u; // 802B8948
  return; // 802B894C
L_802B8950:;
  c->r[3]=0u+0x00000000u; // 802B8950
  return; // 802B8954
}

// GetResVtxFurPos__Q34nw4r3g3d6ResMdlCFi
void f_802B8958(Ctx* __restrict c) {
  trace_call(0x802B8958u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8958
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802B895C
  cmps(c,0,(int32_t)c->r[0],0); // 802B8960
  if (crb(c,2)) { goto L_802B8970; } // 802B8964
  c->r[0]=c->r[3]+c->r[0]; // 802B8968
  goto L_802B8974; // 802B896C
L_802B8970:;
  c->r[0]=0u+0x00000000u; // 802B8970
L_802B8974:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8974
  if (crb(c,2)) { goto L_802B89A4; } // 802B8978
  c->r[3]=c->r[4]+0x00000001u; // 802B897C
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8980
  c->r[3]=c->r[0]+c->r[3]; // 802B8984
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8988
  cmps(c,0,(int32_t)c->r[3],0); // 802B898C
  if (crb(c,2)) { goto L_802B899C; } // 802B8990
  c->r[3]=c->r[0]+c->r[3]; // 802B8994
  return; // 802B8998
L_802B899C:;
  c->r[3]=0u+0x00000000u; // 802B899C
  return; // 802B89A0
L_802B89A4:;
  c->r[3]=0u+0x00000000u; // 802B89A4
  return; // 802B89A8
}

// fn_802B89AC
void f_802B89AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B89AC
  c->r[0]=c->lr; // 802B89B0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B89B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B89B8
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B89BC
  cmps(c,0,(int32_t)c->r[0],0); // 802B89C0
  if (crb(c,2)) { goto L_802B89D0; } // 802B89C4
  c->r[0]=c->r[3]+c->r[0]; // 802B89C8
  goto L_802B89D4; // 802B89CC
L_802B89D0:;
  c->r[0]=0u+0x00000000u; // 802B89D0
L_802B89D4:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 802B89D4
  c->r[3]=c->r[1]+0x0000000Cu; // 802B89D8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B89DC
  c->r[4]=c->r[1]+0x00000008u; // 802B89E0
  W32(c->r[1]+0x00000008u,c->r[5]); // 802B89E4
  c->lr=0x802B89ECu; f_802B6758(c); // 802B89E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B89EC
  c->lr=c->r[0]; // 802B89F0
  c->r[1]=c->r[1]+0x00000010u; // 802B89F4
  return; // 802B89F8
}

// fn_802B89FC
void f_802B89FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B89FC
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B8A00
  cmps(c,0,(int32_t)c->r[0],0); // 802B8A04
  if (crb(c,2)) { goto L_802B8A14; } // 802B8A08
  c->r[0]=c->r[3]+c->r[0]; // 802B8A0C
  goto L_802B8A18; // 802B8A10
L_802B8A14:;
  c->r[0]=0u+0x00000000u; // 802B8A14
L_802B8A18:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8A18
  if (crb(c,2)) { goto L_802B8A48; } // 802B8A1C
  c->r[3]=c->r[4]+0x00000001u; // 802B8A20
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8A24
  c->r[3]=c->r[0]+c->r[3]; // 802B8A28
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8A2C
  cmps(c,0,(int32_t)c->r[3],0); // 802B8A30
  if (crb(c,2)) { goto L_802B8A40; } // 802B8A34
  c->r[3]=c->r[0]+c->r[3]; // 802B8A38
  return; // 802B8A3C
L_802B8A40:;
  c->r[3]=0u+0x00000000u; // 802B8A40
  return; // 802B8A44
L_802B8A48:;
  c->r[3]=0u+0x00000000u; // 802B8A48
  return; // 802B8A4C
}

// fn_802B8A50
void f_802B8A50(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8A50
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B8A54
  cmps(c,0,(int32_t)c->r[0],0); // 802B8A58
  if (crb(c,2)) { goto L_802B8A68; } // 802B8A5C
  c->r[0]=c->r[3]+c->r[0]; // 802B8A60
  goto L_802B8A6C; // 802B8A64
L_802B8A68:;
  c->r[0]=0u+0x00000000u; // 802B8A68
L_802B8A6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8A6C
  if (crb(c,2)) { goto L_802B8A9C; } // 802B8A70
  c->r[3]=c->r[4]+0x00000001u; // 802B8A74
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8A78
  c->r[3]=c->r[0]+c->r[3]; // 802B8A7C
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8A80
  cmps(c,0,(int32_t)c->r[3],0); // 802B8A84
  if (crb(c,2)) { goto L_802B8A94; } // 802B8A88
  c->r[3]=c->r[0]+c->r[3]; // 802B8A8C
  return; // 802B8A90
L_802B8A94:;
  c->r[3]=0u+0x00000000u; // 802B8A94
  return; // 802B8A98
L_802B8A9C:;
  c->r[3]=0u+0x00000000u; // 802B8A9C
  return; // 802B8AA0
}

// fn_802B8AA4
void f_802B8AA4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8AA4
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B8AA8
  cmps(c,0,(int32_t)c->r[0],0); // 802B8AAC
  if (crb(c,2)) { goto L_802B8ABC; } // 802B8AB0
  c->r[3]=c->r[3]+c->r[0]; // 802B8AB4
  goto L_802B8AC0; // 802B8AB8
L_802B8ABC:;
  c->r[3]=0u+0x00000000u; // 802B8ABC
L_802B8AC0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8AC0
  if (crb(c,2)) { goto L_802B8AD0; } // 802B8AC4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B8AC8
  return; // 802B8ACC
L_802B8AD0:;
  c->r[3]=0u+0x00000000u; // 802B8AD0
  return; // 802B8AD4
}

// fn_802B8AD8
void f_802B8AD8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8AD8
  c->r[0]=R32(c->r[3]+0x00000038u); // 802B8ADC
  cmps(c,0,(int32_t)c->r[0],0); // 802B8AE0
  if (crb(c,2)) { goto L_802B8AF0; } // 802B8AE4
  c->r[0]=c->r[3]+c->r[0]; // 802B8AE8
  goto L_802B8AF4; // 802B8AEC
L_802B8AF0:;
  c->r[0]=0u+0x00000000u; // 802B8AF0
L_802B8AF4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8AF4
  if (crb(c,2)) { goto L_802B8B24; } // 802B8AF8
  c->r[3]=c->r[4]+0x00000001u; // 802B8AFC
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8B00
  c->r[3]=c->r[0]+c->r[3]; // 802B8B04
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8B08
  cmps(c,0,(int32_t)c->r[3],0); // 802B8B0C
  if (crb(c,2)) { goto L_802B8B1C; } // 802B8B10
  c->r[3]=c->r[0]+c->r[3]; // 802B8B14
  return; // 802B8B18
L_802B8B1C:;
  c->r[3]=0u+0x00000000u; // 802B8B1C
  return; // 802B8B20
L_802B8B24:;
  c->r[3]=0u+0x00000000u; // 802B8B24
  return; // 802B8B28
}

// fn_802B8B2C
void f_802B8B2C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8B2C
  c->r[0]=R32(c->r[3]+0x00000038u); // 802B8B30
  cmps(c,0,(int32_t)c->r[0],0); // 802B8B34
  if (crb(c,2)) { goto L_802B8B44; } // 802B8B38
  c->r[0]=c->r[3]+c->r[0]; // 802B8B3C
  goto L_802B8B48; // 802B8B40
L_802B8B44:;
  c->r[0]=0u+0x00000000u; // 802B8B44
L_802B8B48:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8B48
  if (crb(c,2)) { goto L_802B8B78; } // 802B8B4C
  c->r[3]=c->r[4]+0x00000001u; // 802B8B50
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802B8B54
  c->r[3]=c->r[0]+c->r[3]; // 802B8B58
  c->r[3]=R32(c->r[3]+0x00000014u); // 802B8B5C
  cmps(c,0,(int32_t)c->r[3],0); // 802B8B60
  if (crb(c,2)) { goto L_802B8B70; } // 802B8B64
  c->r[3]=c->r[0]+c->r[3]; // 802B8B68
  return; // 802B8B6C
L_802B8B70:;
  c->r[3]=0u+0x00000000u; // 802B8B70
  return; // 802B8B74
L_802B8B78:;
  c->r[3]=0u+0x00000000u; // 802B8B78
  return; // 802B8B7C
}

// fn_802B8B80
void f_802B8B80(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B8B80
  c->r[0]=R32(c->r[3]+0x00000038u); // 802B8B84
  cmps(c,0,(int32_t)c->r[0],0); // 802B8B88
  if (crb(c,2)) { goto L_802B8B98; } // 802B8B8C
  c->r[3]=c->r[3]+c->r[0]; // 802B8B90
  goto L_802B8B9C; // 802B8B94
L_802B8B98:;
  c->r[3]=0u+0x00000000u; // 802B8B98
L_802B8B9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8B9C
  if (crb(c,2)) { goto L_802B8BAC; } // 802B8BA0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802B8BA4
  return; // 802B8BA8
L_802B8BAC:;
  c->r[3]=0u+0x00000000u; // 802B8BAC
  return; // 802B8BB0
}

// fn_802B8BB4
void f_802B8BB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B8BB4
  c->r[0]=c->lr; // 802B8BB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802B8BBC
  c->r[11]=c->r[1]+0x00000030u; // 802B8BC0
  c->lr=0x802B8BC8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B8BC4
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B8BC8
  c->r[25]=c->r[3]|c->r[3]; // 802B8BCC
  c->r[26]=c->r[4]|c->r[4]; // 802B8BD0
  c->r[27]=0u+0x00000001u; // 802B8BD4
  c->r[0]=R32(c->r[5]+0x00000030u); // 802B8BD8
  cmps(c,0,(int32_t)c->r[0],0); // 802B8BDC
  if (crb(c,2)) { goto L_802B8BEC; } // 802B8BE0
  c->r[3]=c->r[5]+c->r[0]; // 802B8BE4
  goto L_802B8BF0; // 802B8BE8
L_802B8BEC:;
  c->r[3]=0u+0x00000000u; // 802B8BEC
L_802B8BF0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8BF0
  if (crb(c,2)) { goto L_802B8C00; } // 802B8BF4
  c->r[30]=R32(c->r[3]+0x00000004u); // 802B8BF8
  goto L_802B8C04; // 802B8BFC
L_802B8C00:;
  c->r[30]=0u+0x00000000u; // 802B8C00
L_802B8C04:;
  cmps(c,0,(int32_t)c->r[30],0); // 802B8C04
  c->r[28]=0u+0x00000000u; // 802B8C08
  c->r[31]=0u+0x00000000u; // 802B8C0C
  if (crb(c,2)) { goto L_802B8CA4; } // 802B8C10
  goto L_802B8C9C; // 802B8C14
L_802B8C18:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 802B8C18
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B8C1C
  cmps(c,0,(int32_t)c->r[0],0); // 802B8C20
  if (crb(c,2)) { goto L_802B8C30; } // 802B8C24
  c->r[0]=c->r[3]+c->r[0]; // 802B8C28
  goto L_802B8C34; // 802B8C2C
L_802B8C30:;
  c->r[0]=0u+0x00000000u; // 802B8C30
L_802B8C34:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8C34
  if (crb(c,2)) { goto L_802B8C5C; } // 802B8C38
  c->r[3]=c->r[0]+c->r[31]; // 802B8C3C
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B8C40
  cmps(c,0,(int32_t)c->r[3],0); // 802B8C44
  if (crb(c,2)) { goto L_802B8C54; } // 802B8C48
  c->r[4]=c->r[0]+c->r[3]; // 802B8C4C
  goto L_802B8C60; // 802B8C50
L_802B8C54:;
  c->r[4]=0u+0x00000000u; // 802B8C54
  goto L_802B8C60; // 802B8C58
L_802B8C5C:;
  c->r[4]=0u+0x00000000u; // 802B8C5C
L_802B8C60:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 802B8C60
  c->r[3]=c->r[1]+0x0000000Cu; // 802B8C64
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802B8C68
  c->r[4]=c->r[1]+0x00000008u; // 802B8C6C
  c->r[29]=0u+0x00000000u; // 802B8C70
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B8C74
  c->lr=0x802B8C7Cu; f_802BB094(c); // 802B8C78
  cmps(c,0,(int32_t)c->r[3],0); // 802B8C7C
  if (crb(c,2)) { goto L_802B8C90; } // 802B8C80
  cmps(c,0,(int32_t)c->r[27],0); // 802B8C84
  if (crb(c,2)) { goto L_802B8C90; } // 802B8C88
  c->r[29]=0u+0x00000001u; // 802B8C8C
L_802B8C90:;
  c->r[27]=c->r[29]|c->r[29]; // 802B8C90
  c->r[28]=c->r[28]+0x00000001u; // 802B8C94
  c->r[31]=c->r[31]+0x00000010u; // 802B8C98
L_802B8C9C:;
  cmpu(c,0,c->r[28],c->r[30]); // 802B8C9C
  if (crb(c,0)) { IRQCHK(c); goto L_802B8C18; } // 802B8CA0
L_802B8CA4:;
  c->r[11]=c->r[1]+0x00000030u; // 802B8CA4
  c->r[3]=c->r[27]|c->r[27]; // 802B8CA8
  c->lr=0x802B8CB0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B8CAC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802B8CB0
  c->lr=c->r[0]; // 802B8CB4
  c->r[1]=c->r[1]+0x00000030u; // 802B8CB8
  return; // 802B8CBC
}

// fn_802B8CC0
void f_802B8CC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B8CC0
  c->r[0]=c->lr; // 802B8CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B8CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B8CCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802B8CD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802B8CD4
  W32(c->r[1]+0x00000010u,c->r[28]); // 802B8CD8
  c->r[28]=c->r[3]|c->r[3]; // 802B8CDC
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B8CE0
  c->r[0]=R32(c->r[4]+0x00000030u); // 802B8CE4
  cmps(c,0,(int32_t)c->r[0],0); // 802B8CE8
  if (crb(c,2)) { goto L_802B8CF8; } // 802B8CEC
  c->r[3]=c->r[4]+c->r[0]; // 802B8CF0
  goto L_802B8CFC; // 802B8CF4
L_802B8CF8:;
  c->r[3]=0u+0x00000000u; // 802B8CF8
L_802B8CFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8CFC
  if (crb(c,2)) { goto L_802B8D0C; } // 802B8D00
  c->r[30]=R32(c->r[3]+0x00000004u); // 802B8D04
  goto L_802B8D10; // 802B8D08
L_802B8D0C:;
  c->r[30]=0u+0x00000000u; // 802B8D0C
L_802B8D10:;
  cmps(c,0,(int32_t)c->r[30],0); // 802B8D10
  c->r[29]=0u+0x00000000u; // 802B8D14
  c->r[31]=0u+0x00000000u; // 802B8D18
  if (crb(c,2)) { goto L_802B8D88; } // 802B8D1C
  goto L_802B8D80; // 802B8D20
L_802B8D24:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802B8D24
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B8D28
  cmps(c,0,(int32_t)c->r[0],0); // 802B8D2C
  if (crb(c,2)) { goto L_802B8D3C; } // 802B8D30
  c->r[0]=c->r[3]+c->r[0]; // 802B8D34
  goto L_802B8D40; // 802B8D38
L_802B8D3C:;
  c->r[0]=0u+0x00000000u; // 802B8D3C
L_802B8D40:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8D40
  if (crb(c,2)) { goto L_802B8D68; } // 802B8D44
  c->r[3]=c->r[0]+c->r[31]; // 802B8D48
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B8D4C
  cmps(c,0,(int32_t)c->r[3],0); // 802B8D50
  if (crb(c,2)) { goto L_802B8D60; } // 802B8D54
  c->r[0]=c->r[0]+c->r[3]; // 802B8D58
  goto L_802B8D6C; // 802B8D5C
L_802B8D60:;
  c->r[0]=0u+0x00000000u; // 802B8D60
  goto L_802B8D6C; // 802B8D64
L_802B8D68:;
  c->r[0]=0u+0x00000000u; // 802B8D68
L_802B8D6C:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B8D6C
  c->r[3]=c->r[1]+0x00000008u; // 802B8D70
  c->lr=0x802B8D78u; f_802BB15C(c); // 802B8D74
  c->r[29]=c->r[29]+0x00000001u; // 802B8D78
  c->r[31]=c->r[31]+0x00000010u; // 802B8D7C
L_802B8D80:;
  cmpu(c,0,c->r[29],c->r[30]); // 802B8D80
  if (crb(c,0)) { IRQCHK(c); goto L_802B8D24; } // 802B8D84
L_802B8D88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B8D88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B8D8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802B8D90
  c->r[29]=R32(c->r[1]+0x00000014u); // 802B8D94
  c->r[28]=R32(c->r[1]+0x00000010u); // 802B8D98
  c->lr=c->r[0]; // 802B8D9C
  c->r[1]=c->r[1]+0x00000020u; // 802B8DA0
  return; // 802B8DA4
}

// fn_802B8DA8
void f_802B8DA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B8DA8
  c->r[0]=c->lr; // 802B8DAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 802B8DB0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 802B8DB4
  c->r[31]=c->r[3]|c->r[3]; // 802B8DB8
  W32(c->r[1]+0x00000038u,c->r[30]); // 802B8DBC
  W32(c->r[1]+0x00000034u,c->r[29]); // 802B8DC0
  W32(c->r[1]+0x00000030u,c->r[28]); // 802B8DC4
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B8DC8
  c->r[0]=R32(c->r[4]+0x00000030u); // 802B8DCC
  cmps(c,0,(int32_t)c->r[0],0); // 802B8DD0
  if (crb(c,2)) { goto L_802B8DE0; } // 802B8DD4
  c->r[3]=c->r[4]+c->r[0]; // 802B8DD8
  goto L_802B8DE4; // 802B8DDC
L_802B8DE0:;
  c->r[3]=0u+0x00000000u; // 802B8DE0
L_802B8DE4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8DE4
  if (crb(c,2)) { goto L_802B8DF4; } // 802B8DE8
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B8DEC
  goto L_802B8DF8; // 802B8DF0
L_802B8DF4:;
  c->r[29]=0u+0x00000000u; // 802B8DF4
L_802B8DF8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B8DF8
  c->r[28]=0u+0x00000000u; // 802B8DFC
  c->r[30]=0u+0x00000000u; // 802B8E00
  if (crb(c,2)) { goto L_802B8E70; } // 802B8E04
  goto L_802B8E68; // 802B8E08
L_802B8E0C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B8E0C
  c->r[0]=R32(c->r[3]+0x00000030u); // 802B8E10
  cmps(c,0,(int32_t)c->r[0],0); // 802B8E14
  if (crb(c,2)) { goto L_802B8E24; } // 802B8E18
  c->r[0]=c->r[3]+c->r[0]; // 802B8E1C
  goto L_802B8E28; // 802B8E20
L_802B8E24:;
  c->r[0]=0u+0x00000000u; // 802B8E24
L_802B8E28:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8E28
  if (crb(c,2)) { goto L_802B8E50; } // 802B8E2C
  c->r[3]=c->r[0]+c->r[30]; // 802B8E30
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B8E34
  cmps(c,0,(int32_t)c->r[3],0); // 802B8E38
  if (crb(c,2)) { goto L_802B8E48; } // 802B8E3C
  c->r[0]=c->r[0]+c->r[3]; // 802B8E40
  goto L_802B8E54; // 802B8E44
L_802B8E48:;
  c->r[0]=0u+0x00000000u; // 802B8E48
  goto L_802B8E54; // 802B8E4C
L_802B8E50:;
  c->r[0]=0u+0x00000000u; // 802B8E50
L_802B8E54:;
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B8E54
  c->r[3]=c->r[1]+0x00000024u; // 802B8E58
  c->lr=0x802B8E60u; f_802BB20C(c); // 802B8E5C
  c->r[28]=c->r[28]+0x00000001u; // 802B8E60
  c->r[30]=c->r[30]+0x00000010u; // 802B8E64
L_802B8E68:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B8E68
  if (crb(c,0)) { IRQCHK(c); goto L_802B8E0C; } // 802B8E6C
L_802B8E70:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B8E70
  c->r[0]=R32(c->r[3]+0x00000038u); // 802B8E74
  cmps(c,0,(int32_t)c->r[0],0); // 802B8E78
  if (crb(c,2)) { goto L_802B8E88; } // 802B8E7C
  c->r[3]=c->r[3]+c->r[0]; // 802B8E80
  goto L_802B8E8C; // 802B8E84
L_802B8E88:;
  c->r[3]=0u+0x00000000u; // 802B8E88
L_802B8E8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8E8C
  if (crb(c,2)) { goto L_802B8E9C; } // 802B8E90
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B8E94
  goto L_802B8EA0; // 802B8E98
L_802B8E9C:;
  c->r[29]=0u+0x00000000u; // 802B8E9C
L_802B8EA0:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B8EA0
  c->r[28]=0u+0x00000000u; // 802B8EA4
  c->r[30]=0u+0x00000000u; // 802B8EA8
  if (crb(c,2)) { goto L_802B8F18; } // 802B8EAC
  goto L_802B8F10; // 802B8EB0
L_802B8EB4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B8EB4
  c->r[0]=R32(c->r[3]+0x00000038u); // 802B8EB8
  cmps(c,0,(int32_t)c->r[0],0); // 802B8EBC
  if (crb(c,2)) { goto L_802B8ECC; } // 802B8EC0
  c->r[0]=c->r[3]+c->r[0]; // 802B8EC4
  goto L_802B8ED0; // 802B8EC8
L_802B8ECC:;
  c->r[0]=0u+0x00000000u; // 802B8ECC
L_802B8ED0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8ED0
  if (crb(c,2)) { goto L_802B8EF8; } // 802B8ED4
  c->r[3]=c->r[0]+c->r[30]; // 802B8ED8
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B8EDC
  cmps(c,0,(int32_t)c->r[3],0); // 802B8EE0
  if (crb(c,2)) { goto L_802B8EF0; } // 802B8EE4
  c->r[0]=c->r[0]+c->r[3]; // 802B8EE8
  goto L_802B8EFC; // 802B8EEC
L_802B8EF0:;
  c->r[0]=0u+0x00000000u; // 802B8EF0
  goto L_802B8EFC; // 802B8EF4
L_802B8EF8:;
  c->r[0]=0u+0x00000000u; // 802B8EF8
L_802B8EFC:;
  W32(c->r[1]+0x00000020u,c->r[0]); // 802B8EFC
  c->r[3]=c->r[1]+0x00000020u; // 802B8F00
  c->lr=0x802B8F08u; f_802B958C(c); // 802B8F04
  c->r[28]=c->r[28]+0x00000001u; // 802B8F08
  c->r[30]=c->r[30]+0x00000010u; // 802B8F0C
L_802B8F10:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B8F10
  if (crb(c,0)) { IRQCHK(c); goto L_802B8EB4; } // 802B8F14
L_802B8F18:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B8F18
  c->r[0]=R32(c->r[3]+0x00000018u); // 802B8F1C
  cmps(c,0,(int32_t)c->r[0],0); // 802B8F20
  if (crb(c,2)) { goto L_802B8F30; } // 802B8F24
  c->r[3]=c->r[3]+c->r[0]; // 802B8F28
  goto L_802B8F34; // 802B8F2C
L_802B8F30:;
  c->r[3]=0u+0x00000000u; // 802B8F30
L_802B8F34:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8F34
  if (crb(c,2)) { goto L_802B8F44; } // 802B8F38
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B8F3C
  goto L_802B8F48; // 802B8F40
L_802B8F44:;
  c->r[29]=0u+0x00000000u; // 802B8F44
L_802B8F48:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B8F48
  c->r[28]=0u+0x00000000u; // 802B8F4C
  c->r[30]=0u+0x00000000u; // 802B8F50
  if (crb(c,2)) { goto L_802B8FC4; } // 802B8F54
  goto L_802B8FBC; // 802B8F58
L_802B8F5C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B8F5C
  c->r[0]=R32(c->r[3]+0x00000018u); // 802B8F60
  cmps(c,0,(int32_t)c->r[0],0); // 802B8F64
  if (crb(c,2)) { goto L_802B8F74; } // 802B8F68
  c->r[0]=c->r[3]+c->r[0]; // 802B8F6C
  goto L_802B8F78; // 802B8F70
L_802B8F74:;
  c->r[0]=0u+0x00000000u; // 802B8F74
L_802B8F78:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B8F78
  if (crb(c,2)) { goto L_802B8FA0; } // 802B8F7C
  c->r[3]=c->r[0]+c->r[30]; // 802B8F80
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B8F84
  cmps(c,0,(int32_t)c->r[3],0); // 802B8F88
  if (crb(c,2)) { goto L_802B8F98; } // 802B8F8C
  c->r[0]=c->r[0]+c->r[3]; // 802B8F90
  goto L_802B8FA4; // 802B8F94
L_802B8F98:;
  c->r[0]=0u+0x00000000u; // 802B8F98
  goto L_802B8FA4; // 802B8F9C
L_802B8FA0:;
  c->r[0]=0u+0x00000000u; // 802B8FA0
L_802B8FA4:;
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 802B8FA4
  c->r[3]=c->r[1]+0x0000001Cu; // 802B8FA8
  c->r[4]=0u+0x00000000u; // 802B8FAC
  c->lr=0x802B8FB4u; f_802BB87C(c); // 802B8FB0
  c->r[28]=c->r[28]+0x00000001u; // 802B8FB4
  c->r[30]=c->r[30]+0x00000010u; // 802B8FB8
L_802B8FBC:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B8FBC
  if (crb(c,0)) { IRQCHK(c); goto L_802B8F5C; } // 802B8FC0
L_802B8FC4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B8FC4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802B8FC8
  cmps(c,0,(int32_t)c->r[0],0); // 802B8FCC
  if (crb(c,2)) { goto L_802B8FDC; } // 802B8FD0
  c->r[3]=c->r[3]+c->r[0]; // 802B8FD4
  goto L_802B8FE0; // 802B8FD8
L_802B8FDC:;
  c->r[3]=0u+0x00000000u; // 802B8FDC
L_802B8FE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B8FE0
  if (crb(c,2)) { goto L_802B8FF0; } // 802B8FE4
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B8FE8
  goto L_802B8FF4; // 802B8FEC
L_802B8FF0:;
  c->r[29]=0u+0x00000000u; // 802B8FF0
L_802B8FF4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B8FF4
  c->r[28]=0u+0x00000000u; // 802B8FF8
  c->r[30]=0u+0x00000000u; // 802B8FFC
  if (crb(c,2)) { goto L_802B9070; } // 802B9000
  goto L_802B9068; // 802B9004
L_802B9008:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9008
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802B900C
  cmps(c,0,(int32_t)c->r[0],0); // 802B9010
  if (crb(c,2)) { goto L_802B9020; } // 802B9014
  c->r[0]=c->r[3]+c->r[0]; // 802B9018
  goto L_802B9024; // 802B901C
L_802B9020:;
  c->r[0]=0u+0x00000000u; // 802B9020
L_802B9024:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B9024
  if (crb(c,2)) { goto L_802B904C; } // 802B9028
  c->r[3]=c->r[0]+c->r[30]; // 802B902C
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B9030
  cmps(c,0,(int32_t)c->r[3],0); // 802B9034
  if (crb(c,2)) { goto L_802B9044; } // 802B9038
  c->r[0]=c->r[0]+c->r[3]; // 802B903C
  goto L_802B9050; // 802B9040
L_802B9044:;
  c->r[0]=0u+0x00000000u; // 802B9044
  goto L_802B9050; // 802B9048
L_802B904C:;
  c->r[0]=0u+0x00000000u; // 802B904C
L_802B9050:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 802B9050
  c->r[3]=c->r[1]+0x00000018u; // 802B9054
  c->r[4]=0u+0x00000000u; // 802B9058
  c->lr=0x802B9060u; f_802BB894(c); // 802B905C
  c->r[28]=c->r[28]+0x00000001u; // 802B9060
  c->r[30]=c->r[30]+0x00000010u; // 802B9064
L_802B9068:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B9068
  if (crb(c,0)) { IRQCHK(c); goto L_802B9008; } // 802B906C
L_802B9070:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9070
  c->r[0]=R32(c->r[3]+0x00000020u); // 802B9074
  cmps(c,0,(int32_t)c->r[0],0); // 802B9078
  if (crb(c,2)) { goto L_802B9088; } // 802B907C
  c->r[3]=c->r[3]+c->r[0]; // 802B9080
  goto L_802B908C; // 802B9084
L_802B9088:;
  c->r[3]=0u+0x00000000u; // 802B9088
L_802B908C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B908C
  if (crb(c,2)) { goto L_802B909C; } // 802B9090
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B9094
  goto L_802B90A0; // 802B9098
L_802B909C:;
  c->r[29]=0u+0x00000000u; // 802B909C
L_802B90A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B90A0
  c->r[28]=0u+0x00000000u; // 802B90A4
  c->r[30]=0u+0x00000000u; // 802B90A8
  if (crb(c,2)) { goto L_802B911C; } // 802B90AC
  goto L_802B9114; // 802B90B0
L_802B90B4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B90B4
  c->r[0]=R32(c->r[3]+0x00000020u); // 802B90B8
  cmps(c,0,(int32_t)c->r[0],0); // 802B90BC
  if (crb(c,2)) { goto L_802B90CC; } // 802B90C0
  c->r[0]=c->r[3]+c->r[0]; // 802B90C4
  goto L_802B90D0; // 802B90C8
L_802B90CC:;
  c->r[0]=0u+0x00000000u; // 802B90CC
L_802B90D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B90D0
  if (crb(c,2)) { goto L_802B90F8; } // 802B90D4
  c->r[3]=c->r[0]+c->r[30]; // 802B90D8
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B90DC
  cmps(c,0,(int32_t)c->r[3],0); // 802B90E0
  if (crb(c,2)) { goto L_802B90F0; } // 802B90E4
  c->r[0]=c->r[0]+c->r[3]; // 802B90E8
  goto L_802B90FC; // 802B90EC
L_802B90F0:;
  c->r[0]=0u+0x00000000u; // 802B90F0
  goto L_802B90FC; // 802B90F4
L_802B90F8:;
  c->r[0]=0u+0x00000000u; // 802B90F8
L_802B90FC:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B90FC
  c->r[3]=c->r[1]+0x00000014u; // 802B9100
  c->r[4]=0u+0x00000000u; // 802B9104
  c->lr=0x802B910Cu; f_802BB8AC(c); // 802B9108
  c->r[28]=c->r[28]+0x00000001u; // 802B910C
  c->r[30]=c->r[30]+0x00000010u; // 802B9110
L_802B9114:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B9114
  if (crb(c,0)) { IRQCHK(c); goto L_802B90B4; } // 802B9118
L_802B911C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B911C
  c->r[0]=R32(c->r[3]+0x00000024u); // 802B9120
  cmps(c,0,(int32_t)c->r[0],0); // 802B9124
  if (crb(c,2)) { goto L_802B9134; } // 802B9128
  c->r[3]=c->r[3]+c->r[0]; // 802B912C
  goto L_802B9138; // 802B9130
L_802B9134:;
  c->r[3]=0u+0x00000000u; // 802B9134
L_802B9138:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B9138
  if (crb(c,2)) { goto L_802B9148; } // 802B913C
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B9140
  goto L_802B914C; // 802B9144
L_802B9148:;
  c->r[29]=0u+0x00000000u; // 802B9148
L_802B914C:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B914C
  c->r[28]=0u+0x00000000u; // 802B9150
  c->r[30]=0u+0x00000000u; // 802B9154
  if (crb(c,2)) { goto L_802B91C8; } // 802B9158
  goto L_802B91C0; // 802B915C
L_802B9160:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9160
  c->r[0]=R32(c->r[3]+0x00000024u); // 802B9164
  cmps(c,0,(int32_t)c->r[0],0); // 802B9168
  if (crb(c,2)) { goto L_802B9178; } // 802B916C
  c->r[0]=c->r[3]+c->r[0]; // 802B9170
  goto L_802B917C; // 802B9174
L_802B9178:;
  c->r[0]=0u+0x00000000u; // 802B9178
L_802B917C:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B917C
  if (crb(c,2)) { goto L_802B91A4; } // 802B9180
  c->r[3]=c->r[0]+c->r[30]; // 802B9184
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B9188
  cmps(c,0,(int32_t)c->r[3],0); // 802B918C
  if (crb(c,2)) { goto L_802B919C; } // 802B9190
  c->r[0]=c->r[0]+c->r[3]; // 802B9194
  goto L_802B91A8; // 802B9198
L_802B919C:;
  c->r[0]=0u+0x00000000u; // 802B919C
  goto L_802B91A8; // 802B91A0
L_802B91A4:;
  c->r[0]=0u+0x00000000u; // 802B91A4
L_802B91A8:;
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B91A8
  c->r[3]=c->r[1]+0x00000010u; // 802B91AC
  c->r[4]=0u+0x00000000u; // 802B91B0
  c->lr=0x802B91B8u; f_802BB8C4(c); // 802B91B4
  c->r[28]=c->r[28]+0x00000001u; // 802B91B8
  c->r[30]=c->r[30]+0x00000010u; // 802B91BC
L_802B91C0:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B91C0
  if (crb(c,0)) { IRQCHK(c); goto L_802B9160; } // 802B91C4
L_802B91C8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B91C8
  c->r[0]=R32(c->r[3]+0x00000028u); // 802B91CC
  cmps(c,0,(int32_t)c->r[0],0); // 802B91D0
  if (crb(c,2)) { goto L_802B91E0; } // 802B91D4
  c->r[3]=c->r[3]+c->r[0]; // 802B91D8
  goto L_802B91E4; // 802B91DC
L_802B91E0:;
  c->r[3]=0u+0x00000000u; // 802B91E0
L_802B91E4:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B91E4
  if (crb(c,2)) { goto L_802B91F4; } // 802B91E8
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B91EC
  goto L_802B91F8; // 802B91F0
L_802B91F4:;
  c->r[29]=0u+0x00000000u; // 802B91F4
L_802B91F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B91F8
  c->r[28]=0u+0x00000000u; // 802B91FC
  c->r[30]=0u+0x00000000u; // 802B9200
  if (crb(c,2)) { goto L_802B9274; } // 802B9204
  goto L_802B926C; // 802B9208
L_802B920C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B920C
  c->r[0]=R32(c->r[3]+0x00000028u); // 802B9210
  cmps(c,0,(int32_t)c->r[0],0); // 802B9214
  if (crb(c,2)) { goto L_802B9224; } // 802B9218
  c->r[0]=c->r[3]+c->r[0]; // 802B921C
  goto L_802B9228; // 802B9220
L_802B9224:;
  c->r[0]=0u+0x00000000u; // 802B9224
L_802B9228:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B9228
  if (crb(c,2)) { goto L_802B9250; } // 802B922C
  c->r[3]=c->r[0]+c->r[30]; // 802B9230
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B9234
  cmps(c,0,(int32_t)c->r[3],0); // 802B9238
  if (crb(c,2)) { goto L_802B9248; } // 802B923C
  c->r[0]=c->r[0]+c->r[3]; // 802B9240
  goto L_802B9254; // 802B9244
L_802B9248:;
  c->r[0]=0u+0x00000000u; // 802B9248
  goto L_802B9254; // 802B924C
L_802B9250:;
  c->r[0]=0u+0x00000000u; // 802B9250
L_802B9254:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B9254
  c->r[3]=c->r[1]+0x0000000Cu; // 802B9258
  c->r[4]=0u+0x00000000u; // 802B925C
  c->lr=0x802B9264u; f_802BB8DC(c); // 802B9260
  c->r[28]=c->r[28]+0x00000001u; // 802B9264
  c->r[30]=c->r[30]+0x00000010u; // 802B9268
L_802B926C:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B926C
  if (crb(c,0)) { IRQCHK(c); goto L_802B920C; } // 802B9270
L_802B9274:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9274
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802B9278
  cmps(c,0,(int32_t)c->r[0],0); // 802B927C
  if (crb(c,2)) { goto L_802B928C; } // 802B9280
  c->r[3]=c->r[3]+c->r[0]; // 802B9284
  goto L_802B9290; // 802B9288
L_802B928C:;
  c->r[3]=0u+0x00000000u; // 802B928C
L_802B9290:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B9290
  if (crb(c,2)) { goto L_802B92A0; } // 802B9294
  c->r[29]=R32(c->r[3]+0x00000004u); // 802B9298
  goto L_802B92A4; // 802B929C
L_802B92A0:;
  c->r[29]=0u+0x00000000u; // 802B92A0
L_802B92A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 802B92A4
  c->r[28]=0u+0x00000000u; // 802B92A8
  c->r[30]=0u+0x00000000u; // 802B92AC
  if (crb(c,2)) { goto L_802B9320; } // 802B92B0
  goto L_802B9318; // 802B92B4
L_802B92B8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B92B8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 802B92BC
  cmps(c,0,(int32_t)c->r[0],0); // 802B92C0
  if (crb(c,2)) { goto L_802B92D0; } // 802B92C4
  c->r[0]=c->r[3]+c->r[0]; // 802B92C8
  goto L_802B92D4; // 802B92CC
L_802B92D0:;
  c->r[0]=0u+0x00000000u; // 802B92D0
L_802B92D4:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B92D4
  if (crb(c,2)) { goto L_802B92FC; } // 802B92D8
  c->r[3]=c->r[0]+c->r[30]; // 802B92DC
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B92E0
  cmps(c,0,(int32_t)c->r[3],0); // 802B92E4
  if (crb(c,2)) { goto L_802B92F4; } // 802B92E8
  c->r[0]=c->r[0]+c->r[3]; // 802B92EC
  goto L_802B9300; // 802B92F0
L_802B92F4:;
  c->r[0]=0u+0x00000000u; // 802B92F4
  goto L_802B9300; // 802B92F8
L_802B92FC:;
  c->r[0]=0u+0x00000000u; // 802B92FC
L_802B9300:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B9300
  c->r[3]=c->r[1]+0x00000008u; // 802B9304
  c->r[4]=0u+0x00000000u; // 802B9308
  c->lr=0x802B9310u; f_802BB8F4(c); // 802B930C
  c->r[28]=c->r[28]+0x00000001u; // 802B9310
  c->r[30]=c->r[30]+0x00000010u; // 802B9314
L_802B9318:;
  cmpu(c,0,c->r[28],c->r[29]); // 802B9318
  if (crb(c,0)) { IRQCHK(c); goto L_802B92B8; } // 802B931C
L_802B9320:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 802B9320
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 802B9324
  c->r[30]=R32(c->r[1]+0x00000038u); // 802B9328
  c->r[29]=R32(c->r[1]+0x00000034u); // 802B932C
  c->r[28]=R32(c->r[1]+0x00000030u); // 802B9330
  c->lr=c->r[0]; // 802B9334
  c->r[1]=c->r[1]+0x00000040u; // 802B9338
  return; // 802B933C
}

// fn_802B9340
void f_802B9340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9340
  c->r[0]=c->lr; // 802B9344
  W32(c->r[1]+0x00000024u,c->r[0]); // 802B9348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802B934C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802B9350
  W32(c->r[1]+0x00000014u,c->r[29]); // 802B9354
  W32(c->r[1]+0x00000010u,c->r[28]); // 802B9358
  c->r[28]=c->r[3]|c->r[3]; // 802B935C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9360
  c->r[0]=R32(c->r[4]+0x00000038u); // 802B9364
  cmps(c,0,(int32_t)c->r[0],0); // 802B9368
  if (crb(c,2)) { goto L_802B9378; } // 802B936C
  c->r[3]=c->r[4]+c->r[0]; // 802B9370
  goto L_802B937C; // 802B9374
L_802B9378:;
  c->r[3]=0u+0x00000000u; // 802B9378
L_802B937C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B937C
  if (crb(c,2)) { goto L_802B938C; } // 802B9380
  c->r[30]=R32(c->r[3]+0x00000004u); // 802B9384
  goto L_802B9390; // 802B9388
L_802B938C:;
  c->r[30]=0u+0x00000000u; // 802B938C
L_802B9390:;
  cmps(c,0,(int32_t)c->r[30],0); // 802B9390
  c->r[29]=0u+0x00000000u; // 802B9394
  c->r[31]=0u+0x00000000u; // 802B9398
  if (crb(c,2)) { goto L_802B9408; } // 802B939C
  goto L_802B9400; // 802B93A0
L_802B93A4:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802B93A4
  c->r[0]=R32(c->r[3]+0x00000038u); // 802B93A8
  cmps(c,0,(int32_t)c->r[0],0); // 802B93AC
  if (crb(c,2)) { goto L_802B93BC; } // 802B93B0
  c->r[0]=c->r[3]+c->r[0]; // 802B93B4
  goto L_802B93C0; // 802B93B8
L_802B93BC:;
  c->r[0]=0u+0x00000000u; // 802B93BC
L_802B93C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802B93C0
  if (crb(c,2)) { goto L_802B93E8; } // 802B93C4
  c->r[3]=c->r[0]+c->r[31]; // 802B93C8
  c->r[3]=R32(c->r[3]+0x00000024u); // 802B93CC
  cmps(c,0,(int32_t)c->r[3],0); // 802B93D0
  if (crb(c,2)) { goto L_802B93E0; } // 802B93D4
  c->r[0]=c->r[0]+c->r[3]; // 802B93D8
  goto L_802B93EC; // 802B93DC
L_802B93E0:;
  c->r[0]=0u+0x00000000u; // 802B93E0
  goto L_802B93EC; // 802B93E4
L_802B93E8:;
  c->r[0]=0u+0x00000000u; // 802B93E8
L_802B93EC:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B93EC
  c->r[3]=c->r[1]+0x00000008u; // 802B93F0
  c->lr=0x802B93F8u; f_802B9918(c); // 802B93F4
  c->r[29]=c->r[29]+0x00000001u; // 802B93F8
  c->r[31]=c->r[31]+0x00000010u; // 802B93FC
L_802B9400:;
  cmpu(c,0,c->r[29],c->r[30]); // 802B9400
  if (crb(c,0)) { IRQCHK(c); goto L_802B93A4; } // 802B9404
L_802B9408:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802B9408
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802B940C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802B9410
  c->r[29]=R32(c->r[1]+0x00000014u); // 802B9414
  c->r[28]=R32(c->r[1]+0x00000010u); // 802B9418
  c->lr=c->r[0]; // 802B941C
  c->r[1]=c->r[1]+0x00000020u; // 802B9420
  return; // 802B9424
}

// fn_802B9428
void f_802B9428(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9428
  c->r[0]=c->lr; // 802B942C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9430
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9434
  c->r[0]=R32(c->r[4]+0x00000004u); // 802B9438
  cmps(c,0,(int32_t)c->r[0],0); // 802B943C
  if (crb(c,2)) { goto L_802B944C; } // 802B9440
  c->r[0]=c->r[4]+c->r[0]; // 802B9444
  goto L_802B9450; // 802B9448
L_802B944C:;
  c->r[0]=0u+0x00000000u; // 802B944C
L_802B9450:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B9450
  c->r[3]=c->r[1]+0x00000008u; // 802B9454
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000048u); // 802B9458
  c->lr=0x802B9460u; f_802B85D0(c); // 802B945C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9460
  c->lr=c->r[0]; // 802B9464
  c->r[1]=c->r[1]+0x00000010u; // 802B9468
  return; // 802B946C
}

// fn_802B9470
void f_802B9470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9470
  c->r[0]=c->lr; // 802B9474
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9478
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B947C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Au); // 802B9480
  cmps(c,0,(int32_t)c->r[0],-1); // 802B9484
  if (crb(c,2)) { goto L_802B94B8; } // 802B9488
  c->r[0]=R32(c->r[4]+0x00000004u); // 802B948C
  cmps(c,0,(int32_t)c->r[0],0); // 802B9490
  if (crb(c,2)) { goto L_802B94A0; } // 802B9494
  c->r[0]=c->r[4]+c->r[0]; // 802B9498
  goto L_802B94A4; // 802B949C
L_802B94A0:;
  c->r[0]=0u+0x00000000u; // 802B94A0
L_802B94A4:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B94A4
  c->r[3]=c->r[1]+0x00000008u; // 802B94A8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Au); // 802B94AC
  c->lr=0x802B94B4u; f_802B86FC(c); // 802B94B0
  goto L_802B94BC; // 802B94B4
L_802B94B8:;
  c->r[3]=0u+0x00000000u; // 802B94B8
L_802B94BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B94BC
  c->lr=c->r[0]; // 802B94C0
  c->r[1]=c->r[1]+0x00000010u; // 802B94C4
  return; // 802B94C8
}

// fn_802B94CC
void f_802B94CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B94CC
  c->r[0]=c->lr; // 802B94D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B94D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B94D8
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802B94DC
  c->r[4]=c->r[3]+c->r[0]; // 802B94E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Cu); // 802B94E4
  cmps(c,0,(int32_t)c->r[0],-1); // 802B94E8
  if (crb(c,2)) { goto L_802B951C; } // 802B94EC
  c->r[0]=R32(c->r[3]+0x00000004u); // 802B94F0
  cmps(c,0,(int32_t)c->r[0],0); // 802B94F4
  if (crb(c,2)) { goto L_802B9504; } // 802B94F8
  c->r[0]=c->r[3]+c->r[0]; // 802B94FC
  goto L_802B9508; // 802B9500
L_802B9504:;
  c->r[0]=0u+0x00000000u; // 802B9504
L_802B9508:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B9508
  c->r[3]=c->r[1]+0x00000008u; // 802B950C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Cu); // 802B9510
  c->lr=0x802B9518u; f_802B8828(c); // 802B9514
  goto L_802B9520; // 802B9518
L_802B951C:;
  c->r[3]=0u+0x00000000u; // 802B951C
L_802B9520:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9520
  c->lr=c->r[0]; // 802B9524
  c->r[1]=c->r[1]+0x00000010u; // 802B9528
  return; // 802B952C
}

// fn_802B9530
void f_802B9530(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9530
  c->r[0]=c->lr; // 802B9534
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9538
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B953C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000062u); // 802B9540
  cmps(c,0,(int32_t)c->r[0],-1); // 802B9544
  if (crb(c,2)) { goto L_802B9578; } // 802B9548
  c->r[0]=R32(c->r[4]+0x00000004u); // 802B954C
  cmps(c,0,(int32_t)c->r[0],0); // 802B9550
  if (crb(c,2)) { goto L_802B9560; } // 802B9554
  c->r[0]=c->r[4]+c->r[0]; // 802B9558
  goto L_802B9564; // 802B955C
L_802B9560:;
  c->r[0]=0u+0x00000000u; // 802B9560
L_802B9564:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 802B9564
  c->r[3]=c->r[1]+0x00000008u; // 802B9568
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000062u); // 802B956C
  c->lr=0x802B9574u; f_802B8958(c); // 802B9570
  goto L_802B957C; // 802B9574
L_802B9578:;
  c->r[3]=0u+0x00000000u; // 802B9578
L_802B957C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B957C
  c->lr=c->r[0]; // 802B9580
  c->r[1]=c->r[1]+0x00000010u; // 802B9584
  return; // 802B9588
}

// fn_802B958C
void f_802B958C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B958C
  c->r[0]=c->lr; // 802B9590
  W32(c->r[1]+0x00000054u,c->r[0]); // 802B9594
  c->r[11]=c->r[1]+0x00000050u; // 802B9598
  c->lr=0x802B95A0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802B959C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B95A0
  c->r[29]=c->r[3]|c->r[3]; // 802B95A4
  c->r[0]=R32(c->r[4]+0x00000004u); // 802B95A8
  cmps(c,0,(int32_t)c->r[0],0); // 802B95AC
  if (crb(c,2)) { goto L_802B95BC; } // 802B95B0
  c->r[0]=c->r[4]+c->r[0]; // 802B95B4
  goto L_802B95C0; // 802B95B8
L_802B95BC:;
  c->r[0]=0u+0x00000000u; // 802B95BC
L_802B95C0:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 802B95C0
  c->r[3]=c->r[1]+0x00000018u; // 802B95C4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000048u); // 802B95C8
  c->lr=0x802B95D0u; f_802B85D0(c); // 802B95CC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802B95D0
  c->r[3]=c->r[1]+0x0000001Cu; // 802B95D4
  c->r[4]=c->r[1]+0x0000002Cu; // 802B95D8
  c->r[5]=c->r[1]+0x00000008u; // 802B95DC
  c->lr=0x802B95E4u; f_802BB580(c); // 802B95E0
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B95E4
  c->r[28]=R8(c->r[1]+0x00000008u); // 802B95E8
  c->r[3]=c->r[3]+0x00000018u; // 802B95EC
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 802B95F0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B95F4
  cmps(c,0,(int32_t)c->r[0],0); // 802B95F8
  if (crb(c,2)) { goto L_802B9608; } // 802B95FC
  c->r[3]=c->r[3]+c->r[0]; // 802B9600
  goto L_802B960C; // 802B9604
L_802B9608:;
  c->r[3]=0u+0x00000000u; // 802B9608
L_802B960C:;
  c->r[30]=c->r[3]+0x00000032u; // 802B960C
  c->r[5]=c->r[4]+0x80000000u; // 802B9610
  c->r[3]=c->r[30]|c->r[30]; // 802B9614
  c->r[4]=0u+0x000000A0u; // 802B9618
  c->lr=0x802B9620u; f_802B6504(c); // 802B961C
  c->r[5]=c->r[28]|c->r[28]; // 802B9620
  c->r[3]=c->r[30]+0x00000006u; // 802B9624
  c->r[4]=0u+0x000000B0u; // 802B9628
  c->lr=0x802B9630u; f_802B6504(c); // 802B962C
  c->r[4]=R32(c->r[29]+0x00000000u); // 802B9630
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Au); // 802B9634
  cmps(c,0,(int32_t)c->r[0],-1); // 802B9638
  if (crb(c,2)) { goto L_802B966C; } // 802B963C
  c->r[0]=R32(c->r[4]+0x00000004u); // 802B9640
  cmps(c,0,(int32_t)c->r[0],0); // 802B9644
  if (crb(c,2)) { goto L_802B9654; } // 802B9648
  c->r[0]=c->r[4]+c->r[0]; // 802B964C
  goto L_802B9658; // 802B9650
L_802B9654:;
  c->r[0]=0u+0x00000000u; // 802B9654
L_802B9658:;
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9658
  c->r[3]=c->r[1]+0x00000014u; // 802B965C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Au); // 802B9660
  c->lr=0x802B9668u; f_802B86FC(c); // 802B9664
  goto L_802B9670; // 802B9668
L_802B966C:;
  c->r[3]=0u+0x00000000u; // 802B966C
L_802B9670:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B9670
  W32(c->r[1]+0x00000028u,c->r[3]); // 802B9674
  if (crb(c,2)) { goto L_802B96D8; } // 802B9678
  c->r[3]=c->r[1]+0x00000028u; // 802B967C
  c->r[4]=c->r[1]+0x0000002Cu; // 802B9680
  c->r[5]=c->r[1]+0x00000008u; // 802B9684
  c->lr=0x802B968Cu; f_802BB650(c); // 802B9688
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B968C
  c->r[28]=R8(c->r[1]+0x00000008u); // 802B9690
  c->r[3]=c->r[3]+0x00000018u; // 802B9694
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 802B9698
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B969C
  cmps(c,0,(int32_t)c->r[0],0); // 802B96A0
  if (crb(c,2)) { goto L_802B96B0; } // 802B96A4
  c->r[3]=c->r[3]+c->r[0]; // 802B96A8
  goto L_802B96B4; // 802B96AC
L_802B96B0:;
  c->r[3]=0u+0x00000000u; // 802B96B0
L_802B96B4:;
  c->r[30]=c->r[3]+0x0000003Eu; // 802B96B4
  c->r[5]=c->r[4]+0x80000000u; // 802B96B8
  c->r[3]=c->r[30]|c->r[30]; // 802B96BC
  c->r[4]=0u+0x000000A1u; // 802B96C0
  c->lr=0x802B96C8u; f_802B6504(c); // 802B96C4
  c->r[5]=c->r[28]|c->r[28]; // 802B96C8
  c->r[3]=c->r[30]+0x00000006u; // 802B96CC
  c->r[4]=0u+0x000000B1u; // 802B96D0
  c->lr=0x802B96D8u; f_802B6504(c); // 802B96D4
L_802B96D8:;
  c->r[30]=0u+0x00000000u; // 802B96D8
  c->r[31]=0u+0x00000000u; // 802B96DC
L_802B96E0:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B96E0
  c->r[4]=c->r[3]+c->r[31]; // 802B96E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Cu); // 802B96E8
  cmps(c,0,(int32_t)c->r[0],-1); // 802B96EC
  if (crb(c,2)) { goto L_802B9720; } // 802B96F0
  c->r[0]=R32(c->r[3]+0x00000004u); // 802B96F4
  cmps(c,0,(int32_t)c->r[0],0); // 802B96F8
  if (crb(c,2)) { goto L_802B9708; } // 802B96FC
  c->r[0]=c->r[3]+c->r[0]; // 802B9700
  goto L_802B970C; // 802B9704
L_802B9708:;
  c->r[0]=0u+0x00000000u; // 802B9708
L_802B970C:;
  W32(c->r[1]+0x00000010u,c->r[0]); // 802B970C
  c->r[3]=c->r[1]+0x00000010u; // 802B9710
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000004Cu); // 802B9714
  c->lr=0x802B971Cu; f_802B8828(c); // 802B9718
  goto L_802B9724; // 802B971C
L_802B9720:;
  c->r[3]=0u+0x00000000u; // 802B9720
L_802B9724:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B9724
  W32(c->r[1]+0x00000024u,c->r[3]); // 802B9728
  if (crb(c,2)) { goto L_802B97B4; } // 802B972C
  c->r[3]=c->r[1]+0x00000024u; // 802B9730
  c->r[4]=c->r[1]+0x0000002Cu; // 802B9734
  c->r[5]=c->r[1]+0x00000008u; // 802B9738
  c->lr=0x802B9740u; f_802BB72C(c); // 802B973C
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B9740
  c->r[27]=R8(c->r[1]+0x00000008u); // 802B9744
  c->r[3]=c->r[3]+0x00000018u; // 802B9748
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 802B974C
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9750
  cmps(c,0,(int32_t)c->r[0],0); // 802B9754
  if (crb(c,2)) { goto L_802B9764; } // 802B9758
  c->r[4]=c->r[3]+c->r[0]; // 802B975C
  goto L_802B9768; // 802B9760
L_802B9764:;
  c->r[4]=0u+0x00000000u; // 802B9764
L_802B9768:;
  c->r[6]=c->r[30]+0x00000002u; // 802B9768
  c->r[0]=c->r[30]+0x0000000Bu; // 802B976C
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 802B9770
  c->r[28]=0u+0x00000001u; // 802B9774
  cmps(c,0,(int32_t)c->r[0],25); // 802B9778
  c->r[3]=c->r[4]+c->r[3]; // 802B977C
  c->r[26]=c->r[3]+0x00000032u; // 802B9780
  if (crb(c,2)) { goto L_802B978C; } // 802B9784
  c->r[28]=c->r[6]|c->r[6]; // 802B9788
L_802B978C:;
  c->r[0]=c->r[28]+0x000000A0u; // 802B978C
  c->r[3]=c->r[26]|c->r[26]; // 802B9790
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 802B9794
  c->r[5]=c->r[5]+0x80000000u; // 802B9798
  c->lr=0x802B97A0u; f_802B6504(c); // 802B979C
  c->r[0]=c->r[28]+0x000000B0u; // 802B97A0
  c->r[5]=c->r[27]|c->r[27]; // 802B97A4
  c->r[3]=c->r[26]+0x00000006u; // 802B97A8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 802B97AC
  c->lr=0x802B97B4u; f_802B6504(c); // 802B97B0
L_802B97B4:;
  c->r[30]=c->r[30]+0x00000001u; // 802B97B4
  c->r[31]=c->r[31]+0x00000002u; // 802B97B8
  cmpu(c,0,c->r[30],0x00000002u); // 802B97BC
  if (crb(c,0)) { IRQCHK(c); goto L_802B96E0; } // 802B97C0
  c->r[30]=0u+0x00000000u; // 802B97C4
  c->r[31]=0u+0x00000000u; // 802B97C8
L_802B97CC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B97CC
  c->r[4]=c->r[3]+c->r[31]; // 802B97D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000050u); // 802B97D4
  cmps(c,0,(int32_t)c->r[0],-1); // 802B97D8
  if (crb(c,2)) { goto L_802B980C; } // 802B97DC
  c->r[0]=R32(c->r[3]+0x00000004u); // 802B97E0
  cmps(c,0,(int32_t)c->r[0],0); // 802B97E4
  if (crb(c,2)) { goto L_802B97F4; } // 802B97E8
  c->r[0]=c->r[3]+c->r[0]; // 802B97EC
  goto L_802B97F8; // 802B97F0
L_802B97F4:;
  c->r[0]=0u+0x00000000u; // 802B97F4
L_802B97F8:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802B97F8
  c->r[3]=c->r[1]+0x0000000Cu; // 802B97FC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000050u); // 802B9800
  c->lr=0x802B9808u; f_802B8904(c); // 802B9804
  goto L_802B9810; // 802B9808
L_802B980C:;
  c->r[3]=0u+0x00000000u; // 802B980C
L_802B9810:;
  cmps(c,0,(int32_t)c->r[3],0); // 802B9810
  W32(c->r[1]+0x00000020u,c->r[3]); // 802B9814
  if (crb(c,2)) { goto L_802B98A0; } // 802B9818
  c->r[3]=c->r[1]+0x00000020u; // 802B981C
  c->r[4]=c->r[1]+0x0000002Cu; // 802B9820
  c->r[5]=c->r[1]+0x00000008u; // 802B9824
  c->lr=0x802B982Cu; f_802BB7C8(c); // 802B9828
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B982C
  c->r[26]=R8(c->r[1]+0x00000008u); // 802B9830
  c->r[3]=c->r[3]+0x00000018u; // 802B9834
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 802B9838
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B983C
  cmps(c,0,(int32_t)c->r[0],0); // 802B9840
  if (crb(c,2)) { goto L_802B9850; } // 802B9844
  c->r[4]=c->r[3]+c->r[0]; // 802B9848
  goto L_802B9854; // 802B984C
L_802B9850:;
  c->r[4]=0u+0x00000000u; // 802B9850
L_802B9854:;
  c->r[6]=c->r[30]+0x00000004u; // 802B9854
  c->r[0]=c->r[30]+0x0000000Du; // 802B9858
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)12); // 802B985C
  c->r[28]=0u+0x00000001u; // 802B9860
  cmps(c,0,(int32_t)c->r[0],25); // 802B9864
  c->r[3]=c->r[4]+c->r[3]; // 802B9868
  c->r[27]=c->r[3]+0x00000032u; // 802B986C
  if (crb(c,2)) { goto L_802B9878; } // 802B9870
  c->r[28]=c->r[6]|c->r[6]; // 802B9874
L_802B9878:;
  c->r[0]=c->r[28]+0x000000A0u; // 802B9878
  c->r[3]=c->r[27]|c->r[27]; // 802B987C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 802B9880
  c->r[5]=c->r[5]+0x80000000u; // 802B9884
  c->lr=0x802B988Cu; f_802B6504(c); // 802B9888
  c->r[0]=c->r[28]+0x000000B0u; // 802B988C
  c->r[5]=c->r[26]|c->r[26]; // 802B9890
  c->r[3]=c->r[27]+0x00000006u; // 802B9894
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 802B9898
  c->lr=0x802B98A0u; f_802B6504(c); // 802B989C
L_802B98A0:;
  c->r[30]=c->r[30]+0x00000001u; // 802B98A0
  c->r[31]=c->r[31]+0x00000002u; // 802B98A4
  cmpu(c,0,c->r[30],0x00000008u); // 802B98A8
  if (crb(c,0)) { IRQCHK(c); goto L_802B97CC; } // 802B98AC
  c->r[3]=R32(c->r[29]+0x00000000u); // 802B98B0
  c->r[3]=c->r[3]+0x00000018u; // 802B98B4
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B98B8
  cmps(c,0,(int32_t)c->r[0],0); // 802B98BC
  if (crb(c,2)) { goto L_802B98CC; } // 802B98C0
  c->r[3]=c->r[3]+c->r[0]; // 802B98C4
  goto L_802B98D0; // 802B98C8
L_802B98CC:;
  c->r[3]=0u+0x00000000u; // 802B98CC
L_802B98D0:;
  c->r[4]=0u+0x000000E0u; // 802B98D0
  c->lr=0x802B98D8u; f_80359C58(c); // 802B98D4
  c->r[4]=R32(c->r[29]+0x00000000u); // 802B98D8
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 802B98DC
  c->r[3]=c->r[4]+0x00000024u; // 802B98E0
  cmps(c,0,(int32_t)c->r[0],0); // 802B98E4
  if (crb(c,2)) { goto L_802B98F4; } // 802B98E8
  c->r[3]=c->r[3]+c->r[0]; // 802B98EC
  goto L_802B98F8; // 802B98F0
L_802B98F4:;
  c->r[3]=0u+0x00000000u; // 802B98F4
L_802B98F8:;
  c->r[4]=R32(c->r[4]+0x00000024u); // 802B98F8
  c->lr=0x802B9900u; f_80359C58(c); // 802B98FC
  c->r[11]=c->r[1]+0x00000050u; // 802B9900
  c->lr=0x802B9908u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802B9904
  c->r[0]=R32(c->r[1]+0x00000054u); // 802B9908
  c->lr=c->r[0]; // 802B990C
  c->r[1]=c->r[1]+0x00000050u; // 802B9910
  return; // 802B9914
}

// fn_802B9918
void f_802B9918(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9918
  c->r[0]=c->lr; // 802B991C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9920
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9924
  c->r[31]=c->r[3]|c->r[3]; // 802B9928
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B992C
  c->r[0]=R32(c->r[4]+0x00000020u); // 802B9930
  c->r[3]=c->r[4]+0x00000018u; // 802B9934
  cmps(c,0,(int32_t)c->r[0],0); // 802B9938
  if (crb(c,2)) { goto L_802B9948; } // 802B993C
  c->r[3]=c->r[3]+c->r[0]; // 802B9940
  goto L_802B994C; // 802B9944
L_802B9948:;
  c->r[3]=0u+0x00000000u; // 802B9948
L_802B994C:;
  c->r[3]=c->r[3]+0x00000032u; // 802B994C
  c->r[4]=0u+0x00000000u; // 802B9950
  c->r[5]=0u+0x0000000Cu; // 802B9954
  c->lr=0x802B995Cu; f_800060B8(c); // 802B9958
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B995C
  c->r[3]=c->r[3]+0x00000018u; // 802B9960
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9964
  cmps(c,0,(int32_t)c->r[0],0); // 802B9968
  if (crb(c,2)) { goto L_802B9978; } // 802B996C
  c->r[3]=c->r[3]+c->r[0]; // 802B9970
  goto L_802B997C; // 802B9974
L_802B9978:;
  c->r[3]=0u+0x00000000u; // 802B9978
L_802B997C:;
  c->r[3]=c->r[3]+0x0000003Eu; // 802B997C
  c->r[4]=0u+0x00000000u; // 802B9980
  c->r[5]=0u+0x0000000Cu; // 802B9984
  c->lr=0x802B998Cu; f_800060B8(c); // 802B9988
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B998C
  c->r[3]=c->r[3]+0x00000018u; // 802B9990
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9994
  cmps(c,0,(int32_t)c->r[0],0); // 802B9998
  if (crb(c,2)) { goto L_802B99A8; } // 802B999C
  c->r[3]=c->r[3]+c->r[0]; // 802B99A0
  goto L_802B99AC; // 802B99A4
L_802B99A8:;
  c->r[3]=0u+0x00000000u; // 802B99A8
L_802B99AC:;
  c->r[3]=c->r[3]+0x0000004Au; // 802B99AC
  c->r[4]=0u+0x00000000u; // 802B99B0
  c->r[5]=0u+0x0000000Cu; // 802B99B4
  c->lr=0x802B99BCu; f_800060B8(c); // 802B99B8
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B99BC
  c->r[3]=c->r[3]+0x00000018u; // 802B99C0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B99C4
  cmps(c,0,(int32_t)c->r[0],0); // 802B99C8
  if (crb(c,2)) { goto L_802B99D8; } // 802B99CC
  c->r[3]=c->r[3]+c->r[0]; // 802B99D0
  goto L_802B99DC; // 802B99D4
L_802B99D8:;
  c->r[3]=0u+0x00000000u; // 802B99D8
L_802B99DC:;
  c->r[3]=c->r[3]+0x00000056u; // 802B99DC
  c->r[4]=0u+0x00000000u; // 802B99E0
  c->r[5]=0u+0x0000000Cu; // 802B99E4
  c->lr=0x802B99ECu; f_800060B8(c); // 802B99E8
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B99EC
  c->r[3]=c->r[3]+0x00000018u; // 802B99F0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B99F4
  cmps(c,0,(int32_t)c->r[0],0); // 802B99F8
  if (crb(c,2)) { goto L_802B9A08; } // 802B99FC
  c->r[3]=c->r[3]+c->r[0]; // 802B9A00
  goto L_802B9A0C; // 802B9A04
L_802B9A08:;
  c->r[3]=0u+0x00000000u; // 802B9A08
L_802B9A0C:;
  c->r[3]=c->r[3]+0x00000062u; // 802B9A0C
  c->r[4]=0u+0x00000000u; // 802B9A10
  c->r[5]=0u+0x0000000Cu; // 802B9A14
  c->lr=0x802B9A1Cu; f_800060B8(c); // 802B9A18
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9A1C
  c->r[3]=c->r[3]+0x00000018u; // 802B9A20
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9A24
  cmps(c,0,(int32_t)c->r[0],0); // 802B9A28
  if (crb(c,2)) { goto L_802B9A38; } // 802B9A2C
  c->r[3]=c->r[3]+c->r[0]; // 802B9A30
  goto L_802B9A3C; // 802B9A34
L_802B9A38:;
  c->r[3]=0u+0x00000000u; // 802B9A38
L_802B9A3C:;
  c->r[3]=c->r[3]+0x0000006Eu; // 802B9A3C
  c->r[4]=0u+0x00000000u; // 802B9A40
  c->r[5]=0u+0x0000000Cu; // 802B9A44
  c->lr=0x802B9A4Cu; f_800060B8(c); // 802B9A48
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9A4C
  c->r[3]=c->r[3]+0x00000018u; // 802B9A50
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9A54
  cmps(c,0,(int32_t)c->r[0],0); // 802B9A58
  if (crb(c,2)) { goto L_802B9A68; } // 802B9A5C
  c->r[3]=c->r[3]+c->r[0]; // 802B9A60
  goto L_802B9A6C; // 802B9A64
L_802B9A68:;
  c->r[3]=0u+0x00000000u; // 802B9A68
L_802B9A6C:;
  c->r[3]=c->r[3]+0x0000007Au; // 802B9A6C
  c->r[4]=0u+0x00000000u; // 802B9A70
  c->r[5]=0u+0x0000000Cu; // 802B9A74
  c->lr=0x802B9A7Cu; f_800060B8(c); // 802B9A78
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9A7C
  c->r[3]=c->r[3]+0x00000018u; // 802B9A80
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9A84
  cmps(c,0,(int32_t)c->r[0],0); // 802B9A88
  if (crb(c,2)) { goto L_802B9A98; } // 802B9A8C
  c->r[3]=c->r[3]+c->r[0]; // 802B9A90
  goto L_802B9A9C; // 802B9A94
L_802B9A98:;
  c->r[3]=0u+0x00000000u; // 802B9A98
L_802B9A9C:;
  c->r[3]=c->r[3]+0x00000086u; // 802B9A9C
  c->r[4]=0u+0x00000000u; // 802B9AA0
  c->r[5]=0u+0x0000000Cu; // 802B9AA4
  c->lr=0x802B9AACu; f_800060B8(c); // 802B9AA8
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9AAC
  c->r[3]=c->r[3]+0x00000018u; // 802B9AB0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9AB4
  cmps(c,0,(int32_t)c->r[0],0); // 802B9AB8
  if (crb(c,2)) { goto L_802B9AC8; } // 802B9ABC
  c->r[3]=c->r[3]+c->r[0]; // 802B9AC0
  goto L_802B9ACC; // 802B9AC4
L_802B9AC8:;
  c->r[3]=0u+0x00000000u; // 802B9AC8
L_802B9ACC:;
  c->r[3]=c->r[3]+0x00000092u; // 802B9ACC
  c->r[4]=0u+0x00000000u; // 802B9AD0
  c->r[5]=0u+0x0000000Cu; // 802B9AD4
  c->lr=0x802B9ADCu; f_800060B8(c); // 802B9AD8
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9ADC
  c->r[3]=c->r[3]+0x00000018u; // 802B9AE0
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9AE4
  cmps(c,0,(int32_t)c->r[0],0); // 802B9AE8
  if (crb(c,2)) { goto L_802B9AF8; } // 802B9AEC
  c->r[3]=c->r[3]+c->r[0]; // 802B9AF0
  goto L_802B9AFC; // 802B9AF4
L_802B9AF8:;
  c->r[3]=0u+0x00000000u; // 802B9AF8
L_802B9AFC:;
  c->r[3]=c->r[3]+0x0000009Eu; // 802B9AFC
  c->r[4]=0u+0x00000000u; // 802B9B00
  c->r[5]=0u+0x0000000Cu; // 802B9B04
  c->lr=0x802B9B0Cu; f_800060B8(c); // 802B9B08
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9B0C
  c->r[3]=c->r[3]+0x00000018u; // 802B9B10
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9B14
  cmps(c,0,(int32_t)c->r[0],0); // 802B9B18
  if (crb(c,2)) { goto L_802B9B28; } // 802B9B1C
  c->r[3]=c->r[3]+c->r[0]; // 802B9B20
  goto L_802B9B2C; // 802B9B24
L_802B9B28:;
  c->r[3]=0u+0x00000000u; // 802B9B28
L_802B9B2C:;
  c->r[3]=c->r[3]+0x000000AAu; // 802B9B2C
  c->r[4]=0u+0x00000000u; // 802B9B30
  c->r[5]=0u+0x0000000Cu; // 802B9B34
  c->lr=0x802B9B3Cu; f_800060B8(c); // 802B9B38
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9B3C
  c->r[3]=c->r[3]+0x00000018u; // 802B9B40
  c->r[0]=R32(c->r[3]+0x00000008u); // 802B9B44
  cmps(c,0,(int32_t)c->r[0],0); // 802B9B48
  if (crb(c,2)) { goto L_802B9B58; } // 802B9B4C
  c->r[3]=c->r[3]+c->r[0]; // 802B9B50
  goto L_802B9B5C; // 802B9B54
L_802B9B58:;
  c->r[3]=0u+0x00000000u; // 802B9B58
L_802B9B5C:;
  c->r[3]=c->r[3]+0x000000B6u; // 802B9B5C
  c->r[4]=0u+0x00000000u; // 802B9B60
  c->r[5]=0u+0x0000000Cu; // 802B9B64
  c->lr=0x802B9B6Cu; f_800060B8(c); // 802B9B68
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9B6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9B70
  c->lr=c->r[0]; // 802B9B74
  c->r[1]=c->r[1]+0x00000010u; // 802B9B78
  return; // 802B9B7C
}

// fn_802B9B80
void f_802B9B80(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9B80
  cmps(c,0,(int32_t)c->r[5],0); // 802B9B84
  c->r[5]=c->r[3]+0x00000018u; // 802B9B88
  if (crb(c,2)) { goto L_802B9BFC; } // 802B9B8C
  cmps(c,0,(int32_t)c->r[4],0); // 802B9B90
  if (crb(c,2)) { goto L_802B9BC0; } // 802B9B94
  c->r[0]=R32(c->r[5]+0x00000008u); // 802B9B98
  cmps(c,0,(int32_t)c->r[0],0); // 802B9B9C
  if (crb(c,2)) { goto L_802B9BAC; } // 802B9BA0
  c->r[3]=c->r[5]+c->r[0]; // 802B9BA4
  goto L_802B9BB0; // 802B9BA8
L_802B9BAC:;
  c->r[3]=0u+0x00000000u; // 802B9BAC
L_802B9BB0:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 802B9BB0
  c->r[3]=c->r[3]+0x00000020u; // 802B9BB4
  c->r[4]=c->r[4]+0xFFFFFFE0u; // 802B9BB8
  f_80349130(c); return; // 802B9BBC
L_802B9BC0:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802B9BC0
  cmps(c,0,(int32_t)c->r[0],0); // 802B9BC4
  if (crb(c,2)) { goto L_802B9BD4; } // 802B9BC8
  c->r[6]=c->r[5]+c->r[0]; // 802B9BCC
  goto L_802B9BD8; // 802B9BD0
L_802B9BD4:;
  c->r[6]=0u+0x00000000u; // 802B9BD4
L_802B9BD8:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 802B9BD8
  c->r[3]=0u+0xCC010000u; // 802B9BDC
  c->r[4]=0u+0x00000040u; // 802B9BE0
  c->r[0]=c->r[6]+0x00000020u; // 802B9BE4
  W8(c->r[3]+0xFFFF8000u,c->r[4]); // 802B9BE8
  c->r[4]=c->r[5]+0xFFFFFFE0u; // 802B9BEC
  W32(c->r[3]+0xFFFF8000u,c->r[0]); // 802B9BF0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 802B9BF4
  return; // 802B9BF8
L_802B9BFC:;
  cmps(c,0,(int32_t)c->r[4],0); // 802B9BFC
  if (crb(c,2)) { goto L_802B9C24; } // 802B9C00
  c->r[0]=R32(c->r[5]+0x00000008u); // 802B9C04
  cmps(c,0,(int32_t)c->r[0],0); // 802B9C08
  if (crb(c,2)) { goto L_802B9C18; } // 802B9C0C
  c->r[3]=c->r[5]+c->r[0]; // 802B9C10
  goto L_802B9C1C; // 802B9C14
L_802B9C18:;
  c->r[3]=0u+0x00000000u; // 802B9C18
L_802B9C1C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 802B9C1C
  f_80349130(c); return; // 802B9C20
L_802B9C24:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 802B9C24
  cmps(c,0,(int32_t)c->r[0],0); // 802B9C28
  if (crb(c,2)) { goto L_802B9C38; } // 802B9C2C
  c->r[4]=c->r[5]+c->r[0]; // 802B9C30
  goto L_802B9C3C; // 802B9C34
L_802B9C38:;
  c->r[4]=0u+0x00000000u; // 802B9C38
L_802B9C3C:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 802B9C3C
  c->r[3]=0u+0xCC010000u; // 802B9C40
  c->r[0]=0u+0x00000040u; // 802B9C44
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 802B9C48
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 802B9C4C
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 802B9C50
  return; // 802B9C54
}

// fn_802B9C58
void f_802B9C58(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9C58
  cmps(c,0,(int32_t)c->r[4],0); // 802B9C5C
  c->r[4]=c->r[3]+0x00000024u; // 802B9C60
  if (crb(c,2)) { goto L_802B9C88; } // 802B9C64
  c->r[0]=R32(c->r[4]+0x00000008u); // 802B9C68
  cmps(c,0,(int32_t)c->r[0],0); // 802B9C6C
  if (crb(c,2)) { goto L_802B9C7C; } // 802B9C70
  c->r[3]=c->r[4]+c->r[0]; // 802B9C74
  goto L_802B9C80; // 802B9C78
L_802B9C7C:;
  c->r[3]=0u+0x00000000u; // 802B9C7C
L_802B9C80:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 802B9C80
  f_80349130(c); return; // 802B9C84
L_802B9C88:;
  c->r[0]=R32(c->r[4]+0x00000008u); // 802B9C88
  cmps(c,0,(int32_t)c->r[0],0); // 802B9C8C
  if (crb(c,2)) { goto L_802B9C9C; } // 802B9C90
  c->r[5]=c->r[4]+c->r[0]; // 802B9C94
  goto L_802B9CA0; // 802B9C98
L_802B9C9C:;
  c->r[5]=0u+0x00000000u; // 802B9C9C
L_802B9CA0:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 802B9CA0
  c->r[3]=0u+0xCC010000u; // 802B9CA4
  c->r[0]=0u+0x00000040u; // 802B9CA8
  W8(c->r[3]+0xFFFF8000u,c->r[0]); // 802B9CAC
  W32(c->r[3]+0xFFFF8000u,c->r[5]); // 802B9CB0
  W32(c->r[3]+0xFFFF8000u,c->r[4]); // 802B9CB4
  return; // 802B9CB8
}

// CallDisplayList__Q34nw4r3g3d6ResTevCFb
void f_802B9CBC(Ctx* __restrict c) {
  trace_call(0x802B9CBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9CBC
  c->r[0]=c->lr; // 802B9CC0
  cmps(c,0,(int32_t)c->r[4],0); // 802B9CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9CC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9CCC
  c->r[31]=c->r[3]|c->r[3]; // 802B9CD0
  if (crb(c,2)) { goto L_802B9CDC; } // 802B9CD4
  c->lr=0x802B9CDCu; f_8030A778(c); // 802B9CD8
L_802B9CDC:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802B9CDC
  c->r[4]=0u+0x80440000u; // 802B9CE0
  c->r[4]=c->r[4]+0xFFFFC388u; // 802B9CE4
  c->r[5]=R8(c->r[3]+0x0000000Cu); // 802B9CE8
  c->r[3]=c->r[3]+0x00000020u; // 802B9CEC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 802B9CF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802B9CF4
  c->r[4]=R32(c->r[4]+c->r[0]); // 802B9CF8
  c->lr=0x802B9D00u; f_80349130(c); // 802B9CFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9D00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9D04
  c->lr=c->r[0]; // 802B9D08
  c->r[1]=c->r[1]+0x00000010u; // 802B9D0C
  return; // 802B9D10
}

// CopyTo__Q34nw4r3g3d6ResTevFPv
void f_802B9D14(Ctx* __restrict c) {
  trace_call(0x802B9D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9D14
  c->r[0]=c->lr; // 802B9D18
  c->r[5]=0u+0x00000200u; // 802B9D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9D24
  W32(c->r[1]+0x00000008u,c->r[30]); // 802B9D28
  c->r[30]=c->r[4]|c->r[4]; // 802B9D2C
  c->r[31]=R32(c->r[3]+0x00000000u); // 802B9D30
  c->r[3]=c->r[30]|c->r[30]; // 802B9D34
  c->r[4]=c->r[31]|c->r[31]; // 802B9D38
  c->lr=0x802B9D40u; f_802C68F4(c); // 802B9D3C
  c->r[0]=R32(c->r[30]+0x00000004u); // 802B9D40
  c->r[4]=c->r[30]-c->r[31]; // 802B9D44
  c->r[3]=c->r[30]|c->r[30]; // 802B9D48
  c->r[0]=c->r[0]-c->r[4]; // 802B9D4C
  W32(c->r[30]+0x00000004u,c->r[0]); // 802B9D50
  c->r[4]=R32(c->r[30]+0x00000000u); // 802B9D54
  c->lr=0x802B9D5Cu; f_80359C58(c); // 802B9D58
  c->r[3]=c->r[30]|c->r[30]; // 802B9D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9D60
  c->r[30]=R32(c->r[1]+0x00000008u); // 802B9D64
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9D68
  c->lr=c->r[0]; // 802B9D6C
  c->r[1]=c->r[1]+0x00000010u; // 802B9D70
  return; // 802B9D74
}

// DCStore__Q34nw4r3g3d6ResTevFb
void f_802B9D78(Ctx* __restrict c) {
  trace_call(0x802B9D78u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9D78
  cmps(c,0,(int32_t)c->r[4],0); // 802B9D7C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9D80
  if (crb(c,2)) { goto L_802B9D8C; } // 802B9D84
  f_80359BFC(c); return; // 802B9D88
L_802B9D8C:;
  f_80359C58(c); return; // 802B9D8C
}

// GetParent__Q34nw4r3g3d6ResMatFv
void f_802B9D90(Ctx* __restrict c) {
  trace_call(0x802B9D90u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9D90
  c->r[0]=R32(c->r[3]+0x00000004u); // 802B9D94
  cmps(c,0,(int32_t)c->r[0],0); // 802B9D98
  if (crb(c,2)) { goto L_802B9DA8; } // 802B9D9C
  c->r[3]=c->r[3]+c->r[0]; // 802B9DA0
  return; // 802B9DA4
L_802B9DA8:;
  c->r[3]=0u+0x00000000u; // 802B9DA8
  return; // 802B9DAC
}

// DCStore__Q34nw4r3g3d9ResMatPixFb
void f_802B9DB0(Ctx* __restrict c) {
  trace_call(0x802B9DB0u);
  cmps(c,0,(int32_t)c->r[4],0); // 802B9DB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9DB4
  if (crb(c,2)) { goto L_802B9DC4; } // 802B9DB8
  c->r[4]=0u+0x00000020u; // 802B9DBC
  f_80359BFC(c); return; // 802B9DC0
L_802B9DC4:;
  c->r[4]=0u+0x00000020u; // 802B9DC4
  f_80359C58(c); return; // 802B9DC8
}

// DCStore__Q34nw4r3g3d14ResMatTevColorFb
void f_802B9DCC(Ctx* __restrict c) {
  trace_call(0x802B9DCCu);
  cmps(c,0,(int32_t)c->r[4],0); // 802B9DCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9DD0
  if (crb(c,2)) { goto L_802B9DE0; } // 802B9DD4
  c->r[4]=0u+0x00000080u; // 802B9DD8
  f_80359BFC(c); return; // 802B9DDC
L_802B9DE0:;
  c->r[4]=0u+0x00000080u; // 802B9DE0
  f_80359C58(c); return; // 802B9DE4
}

// DCStore__Q34nw4r3g3d20ResMatIndMtxAndScaleFb
void f_802B9DE8(Ctx* __restrict c) {
  trace_call(0x802B9DE8u);
  cmps(c,0,(int32_t)c->r[4],0); // 802B9DE8
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9DEC
  if (crb(c,2)) { goto L_802B9DFC; } // 802B9DF0
  c->r[4]=0u+0x00000040u; // 802B9DF4
  f_80359BFC(c); return; // 802B9DF8
L_802B9DFC:;
  c->r[4]=0u+0x00000040u; // 802B9DFC
  f_80359C58(c); return; // 802B9E00
}

// DCStore__Q34nw4r3g3d17ResMatTexCoordGenFb
void f_802B9E04(Ctx* __restrict c) {
  trace_call(0x802B9E04u);
  cmps(c,0,(int32_t)c->r[4],0); // 802B9E04
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9E08
  if (crb(c,2)) { goto L_802B9E18; } // 802B9E0C
  c->r[4]=0u+0x000000A0u; // 802B9E10
  f_80359BFC(c); return; // 802B9E14
L_802B9E18:;
  c->r[4]=0u+0x000000A0u; // 802B9E18
  f_80359C58(c); return; // 802B9E1C
}

// CallDisplayList__Q34nw4r3g3d9ResMatPixCFb
void f_802B9E20(Ctx* __restrict c) {
  trace_call(0x802B9E20u);
  cmps(c,0,(int32_t)c->r[4],0); // 802B9E20
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9E24
  if (crb(c,2)) { goto L_802B9E34; } // 802B9E28
  c->r[4]=0u+0x00000020u; // 802B9E2C
  f_80349130(c); return; // 802B9E30
L_802B9E34:;
  c->r[4]=0u+0xCC010000u; // 802B9E34
  c->r[0]=0u+0x00000040u; // 802B9E38
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802B9E3C
  c->r[0]=0u+0x00000020u; // 802B9E40
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802B9E44
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802B9E48
  return; // 802B9E4C
}

// CallDisplayList__Q34nw4r3g3d14ResMatTevColorCFb
void f_802B9E50(Ctx* __restrict c) {
  trace_call(0x802B9E50u);
  cmps(c,0,(int32_t)c->r[4],0); // 802B9E50
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9E54
  if (crb(c,2)) { goto L_802B9E64; } // 802B9E58
  c->r[4]=0u+0x00000080u; // 802B9E5C
  f_80349130(c); return; // 802B9E60
L_802B9E64:;
  c->r[4]=0u+0xCC010000u; // 802B9E64
  c->r[0]=0u+0x00000040u; // 802B9E68
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802B9E6C
  c->r[0]=0u+0x00000080u; // 802B9E70
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802B9E74
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802B9E78
  return; // 802B9E7C
}

// CopyTo__Q34nw4r3g3d9ResMatPixCFPv
void f_802B9E80(Ctx* __restrict c) {
  trace_call(0x802B9E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9E80
  c->r[0]=c->lr; // 802B9E84
  c->r[5]=0u+0x00000020u; // 802B9E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9E8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9E90
  c->r[31]=c->r[4]|c->r[4]; // 802B9E94
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9E98
  c->r[3]=c->r[31]|c->r[31]; // 802B9E9C
  c->lr=0x802B9EA4u; f_802C68F4(c); // 802B9EA0
  c->r[3]=c->r[31]|c->r[31]; // 802B9EA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9EA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9EAC
  c->lr=c->r[0]; // 802B9EB0
  c->r[1]=c->r[1]+0x00000010u; // 802B9EB4
  return; // 802B9EB8
}

// CopyTo__Q34nw4r3g3d14ResMatTevColorCFPv
void f_802B9EBC(Ctx* __restrict c) {
  trace_call(0x802B9EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9EBC
  c->r[0]=c->lr; // 802B9EC0
  c->r[5]=0u+0x00000080u; // 802B9EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9ECC
  c->r[31]=c->r[4]|c->r[4]; // 802B9ED0
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9ED4
  c->r[3]=c->r[31]|c->r[31]; // 802B9ED8
  c->lr=0x802B9EE0u; f_802C68F4(c); // 802B9EDC
  c->r[3]=c->r[31]|c->r[31]; // 802B9EE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9EE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9EE8
  c->lr=c->r[0]; // 802B9EEC
  c->r[1]=c->r[1]+0x00000010u; // 802B9EF0
  return; // 802B9EF4
}

// CopyTo__Q34nw4r3g3d20ResMatIndMtxAndScaleCFPv
void f_802B9EF8(Ctx* __restrict c) {
  trace_call(0x802B9EF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9EF8
  c->r[0]=c->lr; // 802B9EFC
  c->r[5]=0u+0x00000040u; // 802B9F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9F04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9F08
  c->r[31]=c->r[4]|c->r[4]; // 802B9F0C
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9F10
  c->r[3]=c->r[31]|c->r[31]; // 802B9F14
  c->lr=0x802B9F1Cu; f_802C68F4(c); // 802B9F18
  c->r[3]=c->r[31]|c->r[31]; // 802B9F1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9F20
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9F24
  c->lr=c->r[0]; // 802B9F28
  c->r[1]=c->r[1]+0x00000010u; // 802B9F2C
  return; // 802B9F30
}

// CopyTo__Q34nw4r3g3d17ResMatTexCoordGenCFPv
void f_802B9F34(Ctx* __restrict c) {
  trace_call(0x802B9F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802B9F34
  c->r[0]=c->lr; // 802B9F38
  c->r[5]=0u+0x000000A0u; // 802B9F3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802B9F40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802B9F44
  c->r[31]=c->r[4]|c->r[4]; // 802B9F48
  c->r[4]=R32(c->r[3]+0x00000000u); // 802B9F4C
  c->r[3]=c->r[31]|c->r[31]; // 802B9F50
  c->lr=0x802B9F58u; f_802C68F4(c); // 802B9F54
  c->r[3]=c->r[31]|c->r[31]; // 802B9F58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802B9F5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802B9F60
  c->lr=c->r[0]; // 802B9F64
  c->r[1]=c->r[1]+0x00000010u; // 802B9F68
  return; // 802B9F6C
}

// GetTexObj__Q34nw4r3g3d9ResTexObjCF11_GXTexMapID
void f_802B9F70(Ctx* __restrict c) {
  trace_call(0x802B9F70u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9F70
  cmps(c,0,(int32_t)c->r[3],0); // 802B9F74
  if (crb(c,2)) { goto L_802B9F9C; } // 802B9F78
  cmps(c,0,(int32_t)c->r[4],0); // 802B9F7C
  if (crb(c,0)) { goto L_802B9F9C; } // 802B9F80
  cmps(c,0,(int32_t)c->r[4],7); // 802B9F84
  if (crb(c,1)) { goto L_802B9F9C; } // 802B9F88
  c->r[0]=rotl(c->r[4],5)&0xFFFFFFE0u; // 802B9F8C
  c->r[3]=c->r[3]+c->r[0]; // 802B9F90
  c->r[3]=c->r[3]+0x00000004u; // 802B9F94
  return; // 802B9F98
L_802B9F9C:;
  c->r[3]=0u+0x00000000u; // 802B9F9C
  return; // 802B9FA0
}

// GetTexObj__Q34nw4r3g3d9ResTexObjF11_GXTexMapID
void f_802B9FA4(Ctx* __restrict c) {
  trace_call(0x802B9FA4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802B9FA4
  cmps(c,0,(int32_t)c->r[3],0); // 802B9FA8
  if (crb(c,2)) { goto L_802B9FD0; } // 802B9FAC
  cmps(c,0,(int32_t)c->r[4],0); // 802B9FB0
  if (crb(c,0)) { goto L_802B9FD0; } // 802B9FB4
  cmps(c,0,(int32_t)c->r[4],7); // 802B9FB8
  if (crb(c,1)) { goto L_802B9FD0; } // 802B9FBC
  c->r[0]=rotl(c->r[4],5)&0xFFFFFFE0u; // 802B9FC0
  c->r[3]=c->r[3]+c->r[0]; // 802B9FC4
  c->r[3]=c->r[3]+0x00000004u; // 802B9FC8
  return; // 802B9FCC
L_802B9FD0:;
  c->r[3]=0u+0x00000000u; // 802B9FD0
  return; // 802B9FD4
}

// IsValidTexObj__Q34nw4r3g3d9ResTexObjCF11_GXTexMapID
void f_802B9FD8(Ctx* __restrict c) {
  trace_call(0x802B9FD8u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802B9FD8
  cmps(c,0,(int32_t)c->r[5],0); // 802B9FDC
  if (crb(c,2)) { goto L_802BA014; } // 802B9FE0
  cmps(c,0,(int32_t)c->r[4],0); // 802B9FE4
  if (crb(c,0)) { goto L_802BA014; } // 802B9FE8
  cmps(c,0,(int32_t)c->r[4],7); // 802B9FEC
  if (crb(c,1)) { goto L_802BA014; } // 802B9FF0
  c->r[3]=0u+0x00000001u; // 802B9FF4
  c->r[0]=R32(c->r[5]+0x00000000u); // 802B9FF8
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 802B9FFC
  c->r[3]=c->r[3]&c->r[0]; // 802BA000
  c->r[0]=0u-c->r[3]; // 802BA004
  c->r[0]=c->r[0]|c->r[3]; // 802BA008
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802BA00C
  return; // 802BA010
L_802BA014:;
  c->r[3]=0u+0x00000000u; // 802BA014
  return; // 802BA018
}

// CopyTo__Q34nw4r3g3d9ResTexObjCFPv
void f_802BA01C(Ctx* __restrict c) {
  trace_call(0x802BA01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA01C
  c->r[0]=c->lr; // 802BA020
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA024
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BA028
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BA02C
  c->r[31]=c->r[3]+0x00000004u; // 802BA030
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BA034
  c->r[30]=c->r[4]+0x00000004u; // 802BA038
  W32(c->r[1]+0x00000014u,c->r[29]); // 802BA03C
  c->r[29]=c->r[4]|c->r[4]; // 802BA040
  W32(c->r[1]+0x00000010u,c->r[28]); // 802BA044
  c->r[28]=R32(c->r[3]+0x00000000u); // 802BA048
  W32(c->r[4]+0x00000000u,c->r[28]); // 802BA04C
  goto L_802BA078; // 802BA050
L_802BA054:;
  c->r[0]=rotl(c->r[28],0)&0x00000001u; cr0(c,c->r[0]); // 802BA054
  if (crb(c,2)) { goto L_802BA06C; } // 802BA058
  c->r[3]=c->r[30]|c->r[30]; // 802BA05C
  c->r[4]=c->r[31]|c->r[31]; // 802BA060
  c->r[5]=0u+0x00000020u; // 802BA064
  c->lr=0x802BA06Cu; f_802C68F4(c); // 802BA068
L_802BA06C:;
  c->r[28]=rotl(c->r[28],31)&0x7FFFFFFFu; // 802BA06C
  c->r[31]=c->r[31]+0x00000020u; // 802BA070
  c->r[30]=c->r[30]+0x00000020u; // 802BA074
L_802BA078:;
  cmps(c,0,(int32_t)c->r[28],0); // 802BA078
  if (!crb(c,2)) { IRQCHK(c); goto L_802BA054; } // 802BA07C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BA080
  c->r[3]=c->r[29]|c->r[29]; // 802BA084
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BA088
  c->r[29]=R32(c->r[1]+0x00000014u); // 802BA08C
  c->r[28]=R32(c->r[1]+0x00000010u); // 802BA090
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BA094
  c->lr=c->r[0]; // 802BA098
  c->r[1]=c->r[1]+0x00000020u; // 802BA09C
  return; // 802BA0A0
}

// GetTlut__Q34nw4r3g3d10ResTlutObjCF7_GXTlut
void f_802BA0A4(Ctx* __restrict c) {
  trace_call(0x802BA0A4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA0A4
  cmps(c,0,(int32_t)c->r[3],0); // 802BA0A8
  if (crb(c,2)) { goto L_802BA0D0; } // 802BA0AC
  cmps(c,0,(int32_t)c->r[4],0); // 802BA0B0
  if (crb(c,0)) { goto L_802BA0D0; } // 802BA0B4
  cmps(c,0,(int32_t)c->r[4],7); // 802BA0B8
  if (crb(c,1)) { goto L_802BA0D0; } // 802BA0BC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802BA0C0
  c->r[3]=c->r[3]+c->r[0]; // 802BA0C4
  c->r[3]=c->r[3]+0x00000004u; // 802BA0C8
  return; // 802BA0CC
L_802BA0D0:;
  c->r[3]=0u+0x00000000u; // 802BA0D0
  return; // 802BA0D4
}

// GetTlut__Q34nw4r3g3d10ResTlutObjF7_GXTlut
void f_802BA0D8(Ctx* __restrict c) {
  trace_call(0x802BA0D8u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA0D8
  cmps(c,0,(int32_t)c->r[3],0); // 802BA0DC
  if (crb(c,2)) { goto L_802BA104; } // 802BA0E0
  cmps(c,0,(int32_t)c->r[4],0); // 802BA0E4
  if (crb(c,0)) { goto L_802BA104; } // 802BA0E8
  cmps(c,0,(int32_t)c->r[4],7); // 802BA0EC
  if (crb(c,1)) { goto L_802BA104; } // 802BA0F0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 802BA0F4
  c->r[3]=c->r[3]+c->r[0]; // 802BA0F8
  c->r[3]=c->r[3]+0x00000004u; // 802BA0FC
  return; // 802BA100
L_802BA104:;
  c->r[3]=0u+0x00000000u; // 802BA104
  return; // 802BA108
}

// IsValidTlut__Q34nw4r3g3d10ResTlutObjCF7_GXTlut
void f_802BA10C(Ctx* __restrict c) {
  trace_call(0x802BA10Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BA10C
  cmps(c,0,(int32_t)c->r[5],0); // 802BA110
  if (crb(c,2)) { goto L_802BA148; } // 802BA114
  cmps(c,0,(int32_t)c->r[4],0); // 802BA118
  if (crb(c,0)) { goto L_802BA148; } // 802BA11C
  cmps(c,0,(int32_t)c->r[4],7); // 802BA120
  if (crb(c,1)) { goto L_802BA148; } // 802BA124
  c->r[3]=0u+0x00000001u; // 802BA128
  c->r[0]=R32(c->r[5]+0x00000000u); // 802BA12C
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 802BA130
  c->r[3]=c->r[3]&c->r[0]; // 802BA134
  c->r[0]=0u-c->r[3]; // 802BA138
  c->r[0]=c->r[0]|c->r[3]; // 802BA13C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802BA140
  return; // 802BA144
L_802BA148:;
  c->r[3]=0u+0x00000000u; // 802BA148
  return; // 802BA14C
}

// CopyTo__Q34nw4r3g3d10ResTlutObjCFPv
void f_802BA150(Ctx* __restrict c) {
  trace_call(0x802BA150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA150
  c->r[0]=c->lr; // 802BA154
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BA158
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BA15C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BA160
  c->r[31]=c->r[4]|c->r[4]; // 802BA164
  c->r[3]=R32(c->r[5]+0x00000000u); // 802BA168
  cmps(c,0,(int32_t)c->r[3],0); // 802BA16C
  W32(c->r[4]+0x00000000u,c->r[3]); // 802BA170
  if (crb(c,2)) { goto L_802BA1C0; } // 802BA174
  c->r[0]=rotl(c->r[3],0)&0x000000FCu; cr0(c,c->r[0]); // 802BA178
  if (!crb(c,2)) { goto L_802BA194; } // 802BA17C
  c->r[3]=c->r[4]+0x00000004u; // 802BA180
  c->r[4]=c->r[5]+0x00000004u; // 802BA184
  c->r[5]=0u+0x00000020u; // 802BA188
  c->lr=0x802BA190u; f_802C68F4(c); // 802BA18C
  goto L_802BA1C0; // 802BA190
L_802BA194:;
  c->r[0]=rotl(c->r[3],0)&0x000000E0u; cr0(c,c->r[0]); // 802BA194
  if (!crb(c,2)) { goto L_802BA1B0; } // 802BA198
  c->r[3]=c->r[4]+0x00000004u; // 802BA19C
  c->r[4]=c->r[5]+0x00000004u; // 802BA1A0
  c->r[5]=0u+0x00000040u; // 802BA1A4
  c->lr=0x802BA1ACu; f_802C68F4(c); // 802BA1A8
  goto L_802BA1C0; // 802BA1AC
L_802BA1B0:;
  c->r[3]=c->r[4]+0x00000004u; // 802BA1B0
  c->r[4]=c->r[5]+0x00000004u; // 802BA1B4
  c->r[5]=0u+0x00000060u; // 802BA1B8
  c->lr=0x802BA1C0u; f_802C68F4(c); // 802BA1BC
L_802BA1C0:;
  c->r[3]=c->r[31]|c->r[31]; // 802BA1C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BA1C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BA1C8
  c->lr=c->r[0]; // 802BA1CC
  c->r[1]=c->r[1]+0x00000010u; // 802BA1D0
  return; // 802BA1D4
}

// CopyTo__Q34nw4r3g3d9ResTexSrtCFPv
void f_802BA1D8(Ctx* __restrict c) {
  trace_call(0x802BA1D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA1D8
  c->r[0]=c->lr; // 802BA1DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BA1E0
  c->r[11]=c->r[1]+0x00000020u; // 802BA1E4
  c->lr=0x802BA1ECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BA1E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA1EC
  c->r[27]=c->r[4]|c->r[4]; // 802BA1F0
  c->r[29]=c->r[4]+0x00000008u; // 802BA1F4
  c->r[28]=c->r[4]+0x000000A8u; // 802BA1F8
  c->r[26]=R32(c->r[3]+0x00000000u); // 802BA1FC
  c->r[31]=c->r[3]+0x00000008u; // 802BA200
  c->r[30]=c->r[3]+0x000000A8u; // 802BA204
  W32(c->r[4]+0x00000000u,c->r[26]); // 802BA208
  c->r[0]=R32(c->r[3]+0x00000004u); // 802BA20C
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BA210
  goto L_802BA288; // 802BA214
L_802BA218:;
  c->r[0]=rotl(c->r[26],0)&0x0000000Fu; cr0(c,c->r[0]); // 802BA218
  if (crb(c,2)) { goto L_802BA274; } // 802BA21C
  {uint32_t ea=c->r[31]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA220
  c->r[3]=c->r[30]+0x00000004u; // 802BA224
  c->r[4]=c->r[28]+0x00000004u; // 802BA228
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 802BA22C
  {uint32_t ea=c->r[31]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA230
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[0]);} // 802BA234
  {uint32_t ea=c->r[31]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA238
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[0]);} // 802BA23C
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA240
  {uint32_t ea=c->r[29]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BA244
  {uint32_t ea=c->r[31]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA248
  {uint32_t ea=c->r[29]+0x00000010u; WF32(ea,c->f[0]);} // 802BA24C
  c->r[0]=R8(c->r[30]+0x00000000u); // 802BA250
  W8(c->r[28]+0x00000000u,c->r[0]); // 802BA254
  c->r[0]=R8(c->r[30]+0x00000001u); // 802BA258
  W8(c->r[28]+0x00000001u,c->r[0]); // 802BA25C
  c->r[0]=R8(c->r[30]+0x00000002u); // 802BA260
  W8(c->r[28]+0x00000002u,c->r[0]); // 802BA264
  c->r[0]=R8(c->r[30]+0x00000003u); // 802BA268
  W8(c->r[28]+0x00000003u,c->r[0]); // 802BA26C
  c->lr=0x802BA274u; f_803535C0(c); // 802BA270
L_802BA274:;
  c->r[26]=rotl(c->r[26],28)&0x0FFFFFFFu; // 802BA274
  c->r[31]=c->r[31]+0x00000014u; // 802BA278
  c->r[30]=c->r[30]+0x00000034u; // 802BA27C
  c->r[29]=c->r[29]+0x00000014u; // 802BA280
  c->r[28]=c->r[28]+0x00000034u; // 802BA284
L_802BA288:;
  cmps(c,0,(int32_t)c->r[26],0); // 802BA288
  if (!crb(c,2)) { IRQCHK(c); goto L_802BA218; } // 802BA28C
  c->r[11]=c->r[1]+0x00000020u; // 802BA290
  c->r[3]=c->r[27]|c->r[27]; // 802BA294
  c->lr=0x802BA29Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BA298
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BA29C
  c->lr=c->r[0]; // 802BA2A0
  c->r[1]=c->r[1]+0x00000020u; // 802BA2A4
  return; // 802BA2A8
}

// fn_802BA2AC
void f_802BA2AC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BA2AC
  c->r[3]=c->r[4]|c->r[4]; // 802BA2B0
  c->r[0]=R8(c->r[5]+0x00000000u); // 802BA2B4
  W8(c->r[4]+0x00000000u,c->r[0]); // 802BA2B8
  c->r[0]=R8(c->r[5]+0x00000001u); // 802BA2BC
  W8(c->r[4]+0x00000001u,c->r[0]); // 802BA2C0
  c->r[0]=R8(c->r[5]+0x00000002u); // 802BA2C4
  W8(c->r[4]+0x00000002u,c->r[0]); // 802BA2C8
  c->r[0]=R8(c->r[5]+0x00000003u); // 802BA2CC
  W8(c->r[4]+0x00000003u,c->r[0]); // 802BA2D0
  c->r[0]=R32(c->r[5]+0x00000004u); // 802BA2D4
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BA2D8
  return; // 802BA2DC
}

// fn_802BA2E0
void f_802BA2E0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA2E0
  cmps(c,0,(int32_t)c->r[3],0); // 802BA2E4
  if (crb(c,2)) { goto L_802BA2F4; } // 802BA2E8
  c->r[3]=R8(c->r[3]+0x00000000u); // 802BA2EC
  return; // 802BA2F0
L_802BA2F4:;
  c->r[3]=0u+0x00000000u; // 802BA2F4
  return; // 802BA2F8
}

// fn_802BA2FC
void f_802BA2FC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA2FC
  cmps(c,0,(int32_t)c->r[3],0); // 802BA300
  if (crb(c,2)) { goto L_802BA314; } // 802BA304
  c->r[3]=R8(c->r[3]+0x00000001u); // 802BA308
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802BA30C
  return; // 802BA310
L_802BA314:;
  c->r[3]=0u+0xFFFFFFFFu; // 802BA314
  return; // 802BA318
}

// fn_802BA31C
void f_802BA31C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA31C
  cmps(c,0,(int32_t)c->r[3],0); // 802BA320
  if (crb(c,2)) { goto L_802BA334; } // 802BA324
  c->r[3]=R8(c->r[3]+0x00000002u); // 802BA328
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 802BA32C
  return; // 802BA330
L_802BA334:;
  c->r[3]=0u+0xFFFFFFFFu; // 802BA334
  return; // 802BA338
}

// fn_802BA33C
void f_802BA33C(Ctx* __restrict c) {
  c->r[7]=R32(c->r[3]+0x00000000u); // 802BA33C
  cmps(c,0,(int32_t)c->r[7],0); // 802BA340
  if (crb(c,2)) return; // 802BA344
  cmps(c,0,(int32_t)c->r[4],1); // 802BA348
  if (crb(c,0)) return; // 802BA34C
  cmps(c,0,(int32_t)c->r[4],3); // 802BA350
  if (crb(c,1)) return; // 802BA354
  cmps(c,0,(int32_t)c->r[5],0); // 802BA358
  if (crb(c,2)) { goto L_802BA36C; } // 802BA35C
  c->r[3]=c->r[4]+c->r[7]; // 802BA360
  c->r[0]=R8(c->r[3]+0x00000003u); // 802BA364
  W32(c->r[5]+0x00000000u,c->r[0]); // 802BA368
L_802BA36C:;
  cmps(c,0,(int32_t)c->r[6],0); // 802BA36C
  if (crb(c,2)) return; // 802BA370
  c->r[3]=c->r[4]+c->r[7]; // 802BA374
  c->r[0]=R8(c->r[3]+0x00000007u); // 802BA378
  W8(c->r[6]+0x00000000u,c->r[0]); // 802BA37C
  return; // 802BA380
}

// fn_802BA384
void f_802BA384(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BA384
  c->r[3]=c->r[4]|c->r[4]; // 802BA388
  c->r[0]=R8(c->r[5]+0x00000000u); // 802BA38C
  W8(c->r[4]+0x00000000u,c->r[0]); // 802BA390
  c->r[0]=R8(c->r[5]+0x00000001u); // 802BA394
  W8(c->r[4]+0x00000001u,c->r[0]); // 802BA398
  c->r[0]=R8(c->r[5]+0x00000002u); // 802BA39C
  W8(c->r[4]+0x00000002u,c->r[0]); // 802BA3A0
  c->r[0]=R8(c->r[5]+0x00000003u); // 802BA3A4
  W8(c->r[4]+0x00000003u,c->r[0]); // 802BA3A8
  c->r[0]=R8(c->r[5]+0x00000004u); // 802BA3AC
  W8(c->r[4]+0x00000004u,c->r[0]); // 802BA3B0
  c->r[0]=R8(c->r[5]+0x00000005u); // 802BA3B4
  W8(c->r[4]+0x00000005u,c->r[0]); // 802BA3B8
  c->r[0]=R8(c->r[5]+0x00000006u); // 802BA3BC
  W8(c->r[4]+0x00000006u,c->r[0]); // 802BA3C0
  c->r[0]=R8(c->r[5]+0x00000007u); // 802BA3C4
  W8(c->r[4]+0x00000007u,c->r[0]); // 802BA3C8
  c->r[0]=R8(c->r[5]+0x00000008u); // 802BA3CC
  W8(c->r[4]+0x00000008u,c->r[0]); // 802BA3D0
  c->r[0]=R8(c->r[5]+0x00000009u); // 802BA3D4
  W8(c->r[4]+0x00000009u,c->r[0]); // 802BA3D8
  c->r[0]=R8(c->r[5]+0x0000000Au); // 802BA3DC
  W8(c->r[4]+0x0000000Au,c->r[0]); // 802BA3E0
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 802BA3E4
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 802BA3E8
  return; // 802BA3EC
}

// fn_802BA3F0
void f_802BA3F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA3F0
  c->r[0]=c->lr; // 802BA3F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BA3FC
  c->r[0]=0u+0x43300000u; // 802BA400
  cmps(c,0,(int32_t)c->r[3],0); // 802BA404
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BA408
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BA40C
  if (crb(c,2)) { goto L_802BA498; } // 802BA410
  c->r[0]=R32(c->r[3]+0x00000008u); // 802BA414
  c->r[3]=R32(c->r[3]+0x00000004u); // 802BA418
  cmps(c,0,(int32_t)c->r[0],1); // 802BA41C
  if (crb(c,2)) { goto L_802BA45C; } // 802BA420
  if (!crb(c,0)) { goto L_802BA490; } // 802BA424
  cmps(c,0,(int32_t)c->r[0],0); // 802BA428
  if (!crb(c,0)) { goto L_802BA434; } // 802BA42C
  goto L_802BA490; // 802BA430
L_802BA434:;
  c->r[0]=c->r[4]+0x00000001u; // 802BA434
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BA438
  {uint32_t ea=c->r[2]+0xFFFFAAA8u; c->f[2]=RF64(ea);} // 802BA43C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BA440
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BA444
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802BA448
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BA44C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 802BA450
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 802BA454
  goto L_802BA49C; // 802BA458
L_802BA45C:;
  c->r[0]=c->r[4]+0x00000001u; // 802BA45C
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BA460
  {uint32_t ea=c->r[2]+0xFFFFAAA8u; c->f[3]=RF64(ea);} // 802BA464
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BA468
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BA46C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802BA470
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 802BA474
  {uint32_t ea=c->r[2]+0xFFFFAAA0u; c->f[2]=RF64(ea);} // 802BA478
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 802BA47C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 802BA480
  c->lr=0x802BA488u; f_802EFFFC(c); // 802BA484
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802BA488
  goto L_802BA49C; // 802BA48C
L_802BA490:;
  {uint32_t ea=c->r[2]+0xFFFFAA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BA490
  goto L_802BA49C; // 802BA494
L_802BA498:;
  {uint32_t ea=c->r[2]+0xFFFFAA98u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BA498
L_802BA49C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BA49C
  c->lr=c->r[0]; // 802BA4A0
  c->r[1]=c->r[1]+0x00000020u; // 802BA4A4
  return; // 802BA4A8
}

// fn_802BA4AC
void f_802BA4AC(Ctx* __restrict c) {
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802BA4AC
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA4B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802BA4B4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA4B8
  c->r[11]=c->r[3]+c->r[0]; // 802BA4BC
  c->r[0]=R8(c->r[3]+c->r[0]); // 802BA4C0
  cmps(c,0,(int32_t)c->r[0],0); // 802BA4C4
  if (!crb(c,2)) { goto L_802BA4D4; } // 802BA4C8
  c->r[3]=0u+0x00000000u; // 802BA4CC
  goto L_802BA560; // 802BA4D0
L_802BA4D4:;
  c->r[0]=R8(c->r[11]+0x00000003u); // 802BA4D4
  c->r[3]=0u+0x00000001u; // 802BA4D8
  c->r[6]=R8(c->r[11]+0x00000002u); // 802BA4DC
  c->r[4]=R8(c->r[11]+0x00000007u); // 802BA4E0
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BA4E4
  c->r[8]=R8(c->r[11]+0x00000001u); // 802BA4E8
  c->r[9]=rotl(c->r[6],16)&0xFFFF0000u; // 802BA4EC
  c->r[0]=R8(c->r[11]+0x00000008u); // 802BA4F0
  c->r[10]=rotl(c->r[4],16)&0xFFFF0000u; // 802BA4F4
  c->r[6]=R8(c->r[11]+0x00000006u); // 802BA4F8
  c->r[9]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 802BA4FC
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BA500
  c->r[0]=R8(c->r[11]+0x00000004u); // 802BA504
  c->r[9]=c->r[9]|c->r[7]; // 802BA508
  c->r[10]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 802BA50C
  c->r[9]=c->r[9]|c->r[0]; // 802BA510
  c->r[0]=R8(c->r[11]+0x00000009u); // 802BA514
  c->r[10]=c->r[10]|c->r[4]; // 802BA518
  W8(c->r[1]+0x00000008u,c->r[9]); // 802BA51C
  c->r[10]=c->r[10]|c->r[0]; // 802BA520
  c->r[0]=rotl(c->r[9],20)&0x000000FFu; // 802BA524
  c->r[4]=rotl(c->r[10],20)&0x000000FFu; // 802BA528
  W8(c->r[1]+0x0000000Au,c->r[10]); // 802BA52C
  W8(c->r[1]+0x00000009u,c->r[4]); // 802BA530
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802BA534
  c->r[0]=R32(c->r[1]+0x00000008u); // 802BA538
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BA53C
  c->r[7]=R8(c->r[1]+0x0000000Cu); // 802BA540
  c->r[6]=R8(c->r[1]+0x0000000Du); // 802BA544
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 802BA548
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 802BA54C
  W8(c->r[5]+0x00000000u,c->r[7]); // 802BA550
  W8(c->r[5]+0x00000001u,c->r[6]); // 802BA554
  W8(c->r[5]+0x00000002u,c->r[4]); // 802BA558
  W8(c->r[5]+0x00000003u,c->r[0]); // 802BA55C
L_802BA560:;
  c->r[1]=c->r[1]+0x00000010u; // 802BA560
  return; // 802BA564
}

// fn_802BA568
void f_802BA568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA568
  c->r[0]=c->lr; // 802BA56C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BA570
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 802BA574
  c->r[4]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802BA578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BA57C
  c->r[7]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802BA580
  c->r[0]=c->r[4]+0x000000E0u; // 802BA584
  W32(c->r[1]+0x00000008u,c->r[30]); // 802BA588
  c->r[6]=c->r[4]+0x000000E1u; // 802BA58C
  c->r[4]=R8(c->r[5]+0x00000000u); // 802BA590
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 802BA594
  c->r[8]=R32(c->r[3]+0x00000000u); // 802BA598
  c->r[3]=R8(c->r[5]+0x00000001u); // 802BA59C
  c->r[30]=R8(c->r[5]+0x00000002u); // 802BA5A0
  c->r[31]=c->r[8]+c->r[7]; // 802BA5A4
  c->r[30]=(rotl(c->r[3],12)&0x000FF000u)|(c->r[30]&~0x000FF000u); // 802BA5A8
  c->r[5]=R8(c->r[5]+0x00000003u); // 802BA5AC
  c->r[3]=c->r[31]|c->r[31]; // 802BA5B0
  c->r[30]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[30]&~0xFF000000u); // 802BA5B4
  c->r[4]=(rotl(c->r[5],12)&0x000FF000u)|(c->r[4]&~0x000FF000u); // 802BA5B8
  c->lr=0x802BA5C0u; f_802B64DC(c); // 802BA5BC
  c->r[4]=c->r[30]|c->r[30]; // 802BA5C0
  c->r[3]=c->r[31]+0x00000005u; // 802BA5C4
  c->lr=0x802BA5CCu; f_802B64DC(c); // 802BA5C8
  c->r[4]=c->r[30]|c->r[30]; // 802BA5CC
  c->r[3]=c->r[31]+0x0000000Au; // 802BA5D0
  c->lr=0x802BA5D8u; f_802B64DC(c); // 802BA5D4
  c->r[4]=c->r[30]|c->r[30]; // 802BA5D8
  c->r[3]=c->r[31]+0x0000000Fu; // 802BA5DC
  c->lr=0x802BA5E4u; f_802B64DC(c); // 802BA5E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BA5E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BA5E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802BA5EC
  c->lr=c->r[0]; // 802BA5F0
  c->r[1]=c->r[1]+0x00000010u; // 802BA5F4
  return; // 802BA5F8
}

// fn_802BA5FC
void f_802BA5FC(Ctx* __restrict c) {
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 802BA5FC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA600
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA604
  c->r[9]=c->r[3]+c->r[0]; // 802BA608
  c->r[0]=R8(c->r[9]+0x00000040u); // 802BA60C
  cmps(c,0,(int32_t)c->r[0],0); // 802BA610
  if (!crb(c,2)) { goto L_802BA620; } // 802BA614
  c->r[3]=0u+0x00000000u; // 802BA618
  goto L_802BA6AC; // 802BA61C
L_802BA620:;
  c->r[0]=R8(c->r[9]+0x00000043u); // 802BA620
  c->r[3]=0u+0x00000001u; // 802BA624
  c->r[6]=R8(c->r[9]+0x00000042u); // 802BA628
  c->r[4]=R8(c->r[9]+0x00000047u); // 802BA62C
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BA630
  c->r[8]=R8(c->r[9]+0x00000041u); // 802BA634
  c->r[10]=rotl(c->r[6],16)&0xFFFF0000u; // 802BA638
  c->r[0]=R8(c->r[9]+0x00000048u); // 802BA63C
  c->r[11]=rotl(c->r[4],16)&0xFFFF0000u; // 802BA640
  c->r[6]=R8(c->r[9]+0x00000046u); // 802BA644
  c->r[10]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 802BA648
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BA64C
  c->r[0]=R8(c->r[9]+0x00000044u); // 802BA650
  c->r[10]=c->r[10]|c->r[7]; // 802BA654
  c->r[11]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 802BA658
  c->r[10]=c->r[10]|c->r[0]; // 802BA65C
  c->r[0]=R8(c->r[9]+0x00000049u); // 802BA660
  c->r[11]=c->r[11]|c->r[4]; // 802BA664
  W8(c->r[1]+0x00000008u,c->r[10]); // 802BA668
  c->r[11]=c->r[11]|c->r[0]; // 802BA66C
  c->r[0]=rotl(c->r[10],20)&0x000000FFu; // 802BA670
  c->r[4]=rotl(c->r[11],20)&0x000000FFu; // 802BA674
  W8(c->r[1]+0x0000000Au,c->r[11]); // 802BA678
  W8(c->r[1]+0x00000009u,c->r[4]); // 802BA67C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 802BA680
  c->r[0]=R32(c->r[1]+0x00000008u); // 802BA684
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BA688
  c->r[7]=R8(c->r[1]+0x0000000Cu); // 802BA68C
  c->r[6]=R8(c->r[1]+0x0000000Du); // 802BA690
  c->r[4]=R8(c->r[1]+0x0000000Eu); // 802BA694
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 802BA698
  W8(c->r[5]+0x00000000u,c->r[7]); // 802BA69C
  W8(c->r[5]+0x00000001u,c->r[6]); // 802BA6A0
  W8(c->r[5]+0x00000002u,c->r[4]); // 802BA6A4
  W8(c->r[5]+0x00000003u,c->r[0]); // 802BA6A8
L_802BA6AC:;
  c->r[1]=c->r[1]+0x00000010u; // 802BA6AC
  return; // 802BA6B0
}

// fn_802BA6B4
void f_802BA6B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA6B4
  c->r[0]=c->lr; // 802BA6B8
  c->r[8]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802BA6BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BA6C0
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)10); // 802BA6C4
  c->r[0]=R8(c->r[5]+0x00000000u); // 802BA6C8
  c->r[6]=c->r[8]+0x000000E1u; // 802BA6CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BA6D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 802BA6D4
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BA6D8
  c->r[3]=R8(c->r[5]+0x00000002u); // 802BA6DC
  c->r[7]=c->r[4]+c->r[7]; // 802BA6E0
  c->r[4]=R8(c->r[5]+0x00000001u); // 802BA6E4
  c->r[30]=c->r[3]|0x00800000u; // 802BA6E8
  c->r[3]=R8(c->r[5]+0x00000003u); // 802BA6EC
  c->r[30]=(rotl(c->r[4],12)&0x000FF000u)|(c->r[30]&~0x000FF000u); // 802BA6F0
  c->r[4]=c->r[0]|0x00800000u; // 802BA6F4
  c->r[31]=c->r[7]+0x00000040u; // 802BA6F8
  c->r[0]=c->r[8]+0x000000E0u; // 802BA6FC
  c->r[4]=(rotl(c->r[3],12)&0x000FF000u)|(c->r[4]&~0x000FF000u); // 802BA700
  c->r[30]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[30]&~0xFF000000u); // 802BA704
  c->r[3]=c->r[31]|c->r[31]; // 802BA708
  c->r[4]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 802BA70C
  c->lr=0x802BA714u; f_802B64DC(c); // 802BA710
  c->r[4]=c->r[30]|c->r[30]; // 802BA714
  c->r[3]=c->r[31]+0x00000005u; // 802BA718
  c->lr=0x802BA720u; f_802B64DC(c); // 802BA71C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BA720
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BA724
  c->r[30]=R32(c->r[1]+0x00000008u); // 802BA728
  c->lr=c->r[0]; // 802BA72C
  c->r[1]=c->r[1]+0x00000010u; // 802BA730
  return; // 802BA734
}

// fn_802BA738
void f_802BA738(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 802BA738
  if (crb(c,2)) return; // 802BA73C
  cmps(c,0,(int32_t)c->r[5],0); // 802BA740
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA744
  if (crb(c,2)) { goto L_802BA754; } // 802BA748
  c->r[4]=0u+0x00000040u; // 802BA74C
  f_80349130(c); return; // 802BA750
L_802BA754:;
  c->r[4]=0u+0xCC010000u; // 802BA754
  c->r[0]=0u+0x00000040u; // 802BA758
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802BA75C
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802BA760
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802BA764
  return; // 802BA768
}

// fn_802BA76C
void f_802BA76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BA76C
  c->r[0]=0u+0x43300000u; // 802BA770
  cmps(c,0,(int32_t)c->r[4],2); // 802BA774
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BA778
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BA77C
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BA780
  if (crb(c,2)) { goto L_802BA7AC; } // 802BA784
  if (!crb(c,0)) { goto L_802BA798; } // 802BA788
  cmps(c,0,(int32_t)c->r[4],1); // 802BA78C
  if (!crb(c,0)) { goto L_802BA7A4; } // 802BA790
  goto L_802BA7BC; // 802BA794
L_802BA798:;
  cmps(c,0,(int32_t)c->r[4],4); // 802BA798
  if (!crb(c,0)) { goto L_802BA7BC; } // 802BA79C
  goto L_802BA7B4; // 802BA7A0
L_802BA7A4:;
  c->r[11]=c->r[3]+0x0000000Au; // 802BA7A4
  goto L_802BA7C4; // 802BA7A8
L_802BA7AC:;
  c->r[11]=c->r[3]+0x00000020u; // 802BA7AC
  goto L_802BA7C4; // 802BA7B0
L_802BA7B4:;
  c->r[11]=c->r[3]+0x0000002Fu; // 802BA7B4
  goto L_802BA7C4; // 802BA7B8
L_802BA7BC:;
  c->r[3]=0u+0x00000000u; // 802BA7BC
  goto L_802BAA24; // 802BA7C0
L_802BA7C4:;
  c->r[0]=R8(c->r[11]+0x00000000u); // 802BA7C4
  cmps(c,0,(int32_t)c->r[0],0); // 802BA7C8
  if (!crb(c,2)) { goto L_802BA7D8; } // 802BA7CC
  c->r[3]=0u+0x00000000u; // 802BA7D0
  goto L_802BAA24; // 802BA7D4
L_802BA7D8:;
  c->r[0]=R8(c->r[11]+0x00000002u); // 802BA7D8
  c->r[4]=R8(c->r[11]+0x00000003u); // 802BA7DC
  c->r[3]=R8(c->r[11]+0x00000007u); // 802BA7E0
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 802BA7E4
  c->r[8]=R8(c->r[11]+0x00000001u); // 802BA7E8
  c->r[10]=rotl(c->r[4],8)&0xFFFFFF00u; // 802BA7EC
  c->r[6]=R8(c->r[11]+0x00000008u); // 802BA7F0
  c->r[3]=rotl(c->r[3],16)&0xFFFF0000u; // 802BA7F4
  c->r[0]=(rotl(c->r[8],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 802BA7F8
  c->r[7]=R8(c->r[11]+0x00000006u); // 802BA7FC
  c->r[4]=R8(c->r[11]+0x0000000Cu); // 802BA800
  c->r[9]=rotl(c->r[6],8)&0xFFFFFF00u; // 802BA804
  c->r[3]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 802BA808
  c->r[6]=R8(c->r[11]+0x0000000Du); // 802BA80C
  c->r[7]=R8(c->r[11]+0x0000000Bu); // 802BA810
  c->r[4]=rotl(c->r[4],16)&0xFFFF0000u; // 802BA814
  c->r[8]=R8(c->r[11]+0x00000004u); // 802BA818
  c->r[0]=c->r[0]|c->r[10]; // 802BA81C
  c->r[4]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 802BA820
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 802BA824
  c->r[0]=c->r[0]|c->r[8]; // 802BA828
  c->r[8]=R8(c->r[11]+0x00000009u); // 802BA82C
  c->r[3]=c->r[3]|c->r[9]; // 802BA830
  c->r[4]=c->r[4]|c->r[6]; // 802BA834
  c->r[7]=R8(c->r[11]+0x0000000Eu); // 802BA838
  c->r[3]=c->r[3]|c->r[8]; // 802BA83C
  c->r[6]=rotl(c->r[0],10)&0x00000003u; // 802BA840
  {uint32_t ea=c->r[2]+0xFFFFAA9Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 802BA844
  c->r[4]=c->r[4]|c->r[7]; // 802BA848
  c->r[6]=(rotl(c->r[3],12)&0x0000000Cu)|(c->r[6]&~0x0000000Cu); // 802BA84C
  c->r[6]=(rotl(c->r[4],14)&0x00000030u)|(c->r[6]&~0x00000030u); // 802BA850
  c->r[6]=c->r[6]+0xFFFFFFEFu; // 802BA854
  c->r[8]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[8]); // 802BA858
  if (!crb(c,1)) { goto L_802BA8BC; } // 802BA85C
  {uint32_t ea=c->r[2]+0xFFFFAAB0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA860
  c->r[7]=c->r[8]|c->r[8]; // 802BA864
  if (crb(c,2)) { goto L_802BA918; } // 802BA868
  c->r[6]=rotl(c->r[8],29)&0x1FFFFFFFu; cr0(c,c->r[6]); // 802BA86C
  c->ctr=c->r[6]; // 802BA870
  if (crb(c,2)) { goto L_802BA8A8; } // 802BA874
L_802BA878:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA878
  c->r[8]=c->r[8]+0xFFFFFFF8u; // 802BA87C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA880
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA884
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA888
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA88C
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA890
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA894
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA898
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BA878; } // 802BA89C
  c->r[7]=c->r[7]&0x00000007u; cr0(c,c->r[7]); // 802BA8A0
  if (crb(c,2)) { goto L_802BA918; } // 802BA8A4
L_802BA8A8:;
  c->ctr=c->r[7]; // 802BA8A8
L_802BA8AC:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8AC
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 802BA8B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BA8AC; } // 802BA8B4
  goto L_802BA918; // 802BA8B8
L_802BA8BC:;
  if (!crb(c,0)) { goto L_802BA918; } // 802BA8BC
  {uint32_t ea=c->r[2]+0xFFFFAAB4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA8C0
  c->r[7]=0u-c->r[8]; // 802BA8C4
  if (crb(c,2)) { goto L_802BA918; } // 802BA8C8
  c->r[6]=rotl(c->r[7],29)&0x1FFFFFFFu; cr0(c,c->r[6]); // 802BA8CC
  c->ctr=c->r[6]; // 802BA8D0
  if (crb(c,2)) { goto L_802BA908; } // 802BA8D4
L_802BA8D8:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8D8
  c->r[8]=c->r[8]+0x00000008u; // 802BA8DC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8E0
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8E4
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8E8
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8EC
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8F0
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8F4
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA8F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BA8D8; } // 802BA8FC
  c->r[7]=c->r[7]&0x00000007u; cr0(c,c->r[7]); // 802BA900
  if (crb(c,2)) { goto L_802BA918; } // 802BA904
L_802BA908:;
  c->ctr=c->r[7]; // 802BA908
L_802BA90C:;
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[0]); // 802BA90C
  c->r[8]=c->r[8]+0x00000001u; // 802BA910
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BA90C; } // 802BA914
L_802BA918:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BA918
  if (crb(c,2)) { goto L_802BAA20; } // 802BA91C
  c->r[6]=rotl(c->r[0],21)&0xFFE00000u; // 802BA920
  {uint32_t ea=c->r[2]+0xFFFFAA98u; c->f[4]=c->ps1[4]=RF32(ea);} // 802BA924
  c->r[8]=sraw(c,c->r[6],21); // 802BA928
  {uint32_t ea=c->r[2]+0xFFFFAA9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BA92C
  c->r[6]=rotl(c->r[3],21)&0xFFE00000u; // 802BA930
  c->r[0]=rotl(c->r[0],10)&0xFFE00000u; // 802BA934
  c->r[7]=sraw(c,c->r[6],21); // 802BA938
  c->r[9]=c->r[8]^0x80000000u; // 802BA93C
  c->r[8]=c->r[7]^0x80000000u; // 802BA940
  c->r[6]=rotl(c->r[4],21)&0xFFE00000u; // 802BA944
  c->r[7]=sraw(c,c->r[6],21); // 802BA948
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 802BA94C
  c->r[6]=sraw(c,c->r[0],21); // 802BA950
  c->r[0]=rotl(c->r[3],10)&0xFFE00000u; // 802BA954
  W32(c->r[1]+0x00000014u,c->r[8]); // 802BA958
  c->r[7]=c->r[7]^0x80000000u; // 802BA95C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 802BA960
  c->r[6]=c->r[6]^0x80000000u; // 802BA964
  c->r[3]=sraw(c,c->r[0],21); // 802BA968
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 802BA96C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 802BA970
  c->r[0]=rotl(c->r[4],10)&0xFFE00000u; // 802BA974
  c->r[0]=sraw(c,c->r[0],21); // 802BA978
  c->r[3]=c->r[3]^0x80000000u; // 802BA97C
  {uint32_t ea=c->r[2]+0xFFFFAAC0u; c->f[9]=RF64(ea);} // 802BA980
  c->r[0]=c->r[0]^0x80000000u; // 802BA984
  W32(c->r[1]+0x00000014u,c->r[6]); // 802BA988
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802BA98C
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[9]); // 802BA990
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 802BA994
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[9]); // 802BA998
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BA99C
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[9]); // 802BA9A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[9]); // 802BA9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BA9A8
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[7]); // 802BA9AC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802BA9B0
  c->f[6]=c->ps1[6]=S(c->f[10]*c->f[6]); // 802BA9B4
  {uint32_t ea=c->r[2]+0xFFFFAAB8u; c->f[8]=c->ps1[8]=RF32(ea);} // 802BA9B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 802BA9BC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[9]); // 802BA9C0
  c->f[5]=c->ps1[5]=S(c->f[10]*c->f[5]); // 802BA9C4
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 802BA9C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[9]); // 802BA9CC
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[3]); // 802BA9D0
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 802BA9D4
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 802BA9D8
  c->f[1]=c->ps1[1]=S(c->f[10]*c->f[1]); // 802BA9DC
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[4]);} // 802BA9E0
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 802BA9E4
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[6]); // 802BA9E8
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[4]);} // 802BA9EC
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[5]); // 802BA9F0
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 802BA9F4
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[4]);} // 802BA9F8
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 802BA9FC
  c->f[0]=c->ps1[0]=S(c->f[8]*c->f[1]); // 802BAA00
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[4]);} // 802BAA04
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[7]);} // 802BAA08
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 802BAA0C
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 802BAA10
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 802BAA14
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 802BAA18
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[0]);} // 802BAA1C
L_802BAA20:;
  c->r[3]=0u+0x00000001u; // 802BAA20
L_802BAA24:;
  c->r[1]=c->r[1]+0x00000020u; // 802BAA24
  return; // 802BAA28
}

// fn_802BAA2C
void f_802BAA2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BAA2C
  c->r[0]=0u+0x43300000u; // 802BAA30
  cmps(c,0,(int32_t)c->r[4],2); // 802BAA34
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BAA38
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BAA3C
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BAA40
  if (crb(c,2)) { goto L_802BAA6C; } // 802BAA44
  if (!crb(c,0)) { goto L_802BAA58; } // 802BAA48
  cmps(c,0,(int32_t)c->r[4],1); // 802BAA4C
  if (!crb(c,0)) { goto L_802BAA64; } // 802BAA50
  goto L_802BAA7C; // 802BAA54
L_802BAA58:;
  cmps(c,0,(int32_t)c->r[4],4); // 802BAA58
  if (!crb(c,0)) { goto L_802BAA7C; } // 802BAA5C
  goto L_802BAA74; // 802BAA60
L_802BAA64:;
  c->r[12]=c->r[3]+0x0000000Au; // 802BAA64
  goto L_802BAA84; // 802BAA68
L_802BAA6C:;
  c->r[12]=c->r[3]+0x00000020u; // 802BAA6C
  goto L_802BAA84; // 802BAA70
L_802BAA74:;
  c->r[12]=c->r[3]+0x0000002Fu; // 802BAA74
  goto L_802BAA84; // 802BAA78
L_802BAA7C:;
  c->r[3]=0u+0x00000000u; // 802BAA7C
  goto L_802BAC14; // 802BAA80
L_802BAA84:;
  c->r[0]=R8(c->r[12]+0x00000000u); // 802BAA84
  cmps(c,0,(int32_t)c->r[0],0); // 802BAA88
  if (!crb(c,2)) { goto L_802BAA98; } // 802BAA8C
  c->r[3]=0u+0x00000000u; // 802BAA90
  goto L_802BAC14; // 802BAA94
L_802BAA98:;
  c->r[0]=R8(c->r[12]+0x00000003u); // 802BAA98
  cmps(c,0,(int32_t)c->r[6],0); // 802BAA9C
  c->r[4]=R8(c->r[12]+0x00000002u); // 802BAAA0
  c->r[3]=R8(c->r[12]+0x00000007u); // 802BAAA4
  c->r[8]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BAAA8
  c->r[7]=R8(c->r[12]+0x00000001u); // 802BAAAC
  c->r[9]=rotl(c->r[4],16)&0xFFFF0000u; // 802BAAB0
  c->r[10]=rotl(c->r[3],16)&0xFFFF0000u; // 802BAAB4
  c->r[4]=R8(c->r[12]+0x00000006u); // 802BAAB8
  c->r[9]=(rotl(c->r[7],24)&0xFF000000u)|(c->r[9]&~0xFF000000u); // 802BAABC
  c->r[0]=R8(c->r[12]+0x00000008u); // 802BAAC0
  c->r[3]=R8(c->r[12]+0x0000000Cu); // 802BAAC4
  c->r[10]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[10]&~0xFF000000u); // 802BAAC8
  c->r[7]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BAACC
  c->r[0]=R8(c->r[12]+0x0000000Du); // 802BAAD0
  c->r[11]=rotl(c->r[3],16)&0xFFFF0000u; // 802BAAD4
  c->r[4]=R8(c->r[12]+0x0000000Bu); // 802BAAD8
  c->r[3]=rotl(c->r[0],8)&0xFFFFFF00u; // 802BAADC
  c->r[0]=R8(c->r[12]+0x00000004u); // 802BAAE0
  c->r[11]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[11]&~0xFF000000u); // 802BAAE4
  c->r[9]=c->r[9]|c->r[8]; // 802BAAE8
  c->r[9]=c->r[9]|c->r[0]; // 802BAAEC
  c->r[4]=R8(c->r[12]+0x00000009u); // 802BAAF0
  c->r[10]=c->r[10]|c->r[7]; // 802BAAF4
  c->r[11]=c->r[11]|c->r[3]; // 802BAAF8
  c->r[0]=R8(c->r[12]+0x0000000Eu); // 802BAAFC
  c->r[10]=c->r[10]|c->r[4]; // 802BAB00
  c->r[3]=rotl(c->r[9],10)&0x00000003u; // 802BAB04
  c->r[11]=c->r[11]|c->r[0]; // 802BAB08
  c->r[3]=(rotl(c->r[10],12)&0x0000000Cu)|(c->r[3]&~0x0000000Cu); // 802BAB0C
  c->r[3]=(rotl(c->r[11],14)&0x00000030u)|(c->r[3]&~0x00000030u); // 802BAB10
  if (crb(c,2)) { goto L_802BAB20; } // 802BAB14
  c->r[0]=c->r[3]+0xFFFFFFEFu; // 802BAB18
  W8(c->r[6]+0x00000000u,c->r[0]); // 802BAB1C
L_802BAB20:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BAB20
  if (crb(c,2)) { goto L_802BAC10; } // 802BAB24
  c->r[0]=rotl(c->r[9],21)&0xFFE00000u; // 802BAB28
  {uint32_t ea=c->r[2]+0xFFFFAA98u; c->f[4]=c->ps1[4]=RF32(ea);} // 802BAB2C
  c->r[4]=sraw(c,c->r[0],21); // 802BAB30
  {uint32_t ea=c->r[2]+0xFFFFAA9Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BAB34
  c->r[0]=rotl(c->r[10],21)&0xFFE00000u; // 802BAB38
  {uint32_t ea=c->r[2]+0xFFFFAAC0u; c->f[9]=RF64(ea);} // 802BAB3C
  c->r[3]=sraw(c,c->r[0],21); // 802BAB40
  c->r[4]=c->r[4]^0x80000000u; // 802BAB44
  c->r[3]=c->r[3]^0x80000000u; // 802BAB48
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802BAB4C
  c->r[0]=rotl(c->r[11],21)&0xFFE00000u; // 802BAB50
  {uint32_t ea=c->r[2]+0xFFFFAAB8u; c->f[8]=c->ps1[8]=RF32(ea);} // 802BAB54
  c->r[4]=sraw(c,c->r[0],21); // 802BAB58
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BAB5C
  c->r[0]=rotl(c->r[9],10)&0xFFE00000u; // 802BAB60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[5]=RF64(ea);} // 802BAB64
  c->r[3]=sraw(c,c->r[0],21); // 802BAB68
  c->r[6]=c->r[4]^0x80000000u; // 802BAB6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 802BAB70
  c->r[4]=c->r[3]^0x80000000u; // 802BAB74
  c->r[0]=rotl(c->r[10],10)&0xFFE00000u; // 802BAB78
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 802BAB7C
  c->r[3]=sraw(c,c->r[0],21); // 802BAB80
  c->f[7]=c->ps1[7]=S(c->f[5]-c->f[9]); // 802BAB84
  W32(c->r[1]+0x00000014u,c->r[4]); // 802BAB88
  c->r[0]=rotl(c->r[11],10)&0xFFE00000u; // 802BAB8C
  c->r[0]=sraw(c,c->r[0],21); // 802BAB90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 802BAB94
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 802BAB98
  c->r[3]=c->r[3]^0x80000000u; // 802BAB9C
  c->r[0]=c->r[0]^0x80000000u; // 802BABA0
  c->f[6]=c->ps1[6]=S(c->f[2]-c->f[9]); // 802BABA4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BABA8
  c->f[5]=c->ps1[5]=S(c->f[1]-c->f[9]); // 802BABAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BABB0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[9]); // 802BABB4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802BABB8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 802BABBC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 802BABC0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[9]); // 802BABC4
  {uint32_t ea=c->r[5]+0x0000000Cu; WF32(ea,c->f[4]);} // 802BABC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[9]); // 802BABCC
  c->f[6]=c->ps1[6]=S(c->f[8]*c->f[6]); // 802BABD0
  {uint32_t ea=c->r[5]+0x0000001Cu; WF32(ea,c->f[4]);} // 802BABD4
  c->f[5]=c->ps1[5]=S(c->f[8]*c->f[5]); // 802BABD8
  c->f[3]=c->ps1[3]=S(c->f[8]*c->f[3]); // 802BABDC
  {uint32_t ea=c->r[5]+0x00000020u; WF32(ea,c->f[4]);} // 802BABE0
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 802BABE4
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[1]); // 802BABE8
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[7]);} // 802BABEC
  {uint32_t ea=c->r[5]+0x00000004u; WF32(ea,c->f[6]);} // 802BABF0
  {uint32_t ea=c->r[5]+0x00000008u; WF32(ea,c->f[5]);} // 802BABF4
  {uint32_t ea=c->r[5]+0x00000010u; WF32(ea,c->f[3]);} // 802BABF8
  {uint32_t ea=c->r[5]+0x00000014u; WF32(ea,c->f[2]);} // 802BABFC
  {uint32_t ea=c->r[5]+0x00000018u; WF32(ea,c->f[1]);} // 802BAC00
  {uint32_t ea=c->r[5]+0x00000024u; WF32(ea,c->f[4]);} // 802BAC04
  {uint32_t ea=c->r[5]+0x00000028u; WF32(ea,c->f[0]);} // 802BAC08
  {uint32_t ea=c->r[5]+0x0000002Cu; WF32(ea,c->f[4]);} // 802BAC0C
L_802BAC10:;
  c->r[3]=0u+0x00000001u; // 802BAC10
L_802BAC14:;
  c->r[1]=c->r[1]+0x00000020u; // 802BAC14
  return; // 802BAC18
}

// fn_802BAC1C
void f_802BAC1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BAC1C
  c->r[0]=c->lr; // 802BAC20
  cmps(c,0,(int32_t)c->r[4],2); // 802BAC24
  W32(c->r[1]+0x00000054u,c->r[0]); // 802BAC28
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 802BAC2C
  W32(c->r[1]+0x00000048u,c->r[30]); // 802BAC30
  W32(c->r[1]+0x00000044u,c->r[29]); // 802BAC34
  W32(c->r[1]+0x00000040u,c->r[28]); // 802BAC38
  c->r[28]=c->r[5]|c->r[5]; // 802BAC3C
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BAC40
  if (crb(c,2)) { goto L_802BAC70; } // 802BAC44
  if (!crb(c,0)) { goto L_802BAC58; } // 802BAC48
  cmps(c,0,(int32_t)c->r[4],1); // 802BAC4C
  if (!crb(c,0)) { goto L_802BAC64; } // 802BAC50
  goto L_802BAD70; // 802BAC54
L_802BAC58:;
  cmps(c,0,(int32_t)c->r[4],4); // 802BAC58
  if (!crb(c,0)) { goto L_802BAD70; } // 802BAC5C
  goto L_802BAC7C; // 802BAC60
L_802BAC64:;
  c->r[30]=c->r[3]+0x0000000Au; // 802BAC64
  c->r[31]=0u+0x00000000u; // 802BAC68
  goto L_802BAC8C; // 802BAC6C
L_802BAC70:;
  c->r[30]=c->r[3]+0x00000020u; // 802BAC70
  c->r[31]=0u+0x00000003u; // 802BAC74
  goto L_802BAC8C; // 802BAC78
L_802BAC7C:;
  c->r[30]=c->r[3]+0x0000002Fu; // 802BAC7C
  c->r[31]=0u+0x00000006u; // 802BAC80
  goto L_802BAC8C; // 802BAC84
  goto L_802BAD70; // 802BAC88
L_802BAC8C:;
  {uint32_t ea=c->r[2]+0xFFFFAAC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BAC8C
  c->r[29]=c->r[6]+0x00000011u; // 802BAC90
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BAC94
  c->r[6]=c->r[31]+0x00000006u; // 802BAC98
  {uint32_t ea=c->r[5]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BAC9C
  c->r[3]=c->r[30]|c->r[30]; // 802BACA0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802BACA4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802BACA8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802BACAC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802BACB0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 802BACB4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802BACB8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 802BACBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BACC0
  c->r[4]=rotl(c->r[4],0)&0x000007FFu; // 802BACC4
  c->r[4]=(rotl(c->r[29],22)&0x00C00000u)|(c->r[4]&~0x00C00000u); // 802BACC8
  c->r[4]=(rotl(c->r[0],11)&0x003FF800u)|(c->r[4]&~0x003FF800u); // 802BACCC
  c->r[4]=(rotl(c->r[6],24)&0xFF000000u)|(c->r[4]&~0xFF000000u); // 802BACD0
  c->lr=0x802BACD8u; f_802B64DC(c); // 802BACD4
  {uint32_t ea=c->r[2]+0xFFFFAAC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BACD8
  c->r[0]=c->r[31]+0x00000007u; // 802BACDC
  {uint32_t ea=c->r[28]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BACE0
  c->r[5]=rotl(c->r[29],20)&0x00C00000u; // 802BACE4
  {uint32_t ea=c->r[28]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BACE8
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 802BACEC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802BACF0
  c->r[3]=c->r[30]+0x00000005u; // 802BACF4
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802BACF8
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802BACFC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802BAD00
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 802BAD04
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 802BAD08
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 802BAD0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BAD10
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 802BAD14
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 802BAD18
  c->r[4]=c->r[5]|c->r[0]; // 802BAD1C
  c->lr=0x802BAD24u; f_802B64DC(c); // 802BAD20
  {uint32_t ea=c->r[2]+0xFFFFAAC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BAD24
  c->r[0]=c->r[31]+0x00000008u; // 802BAD28
  {uint32_t ea=c->r[28]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BAD2C
  c->r[5]=rotl(c->r[29],18)&0x00C00000u; // 802BAD30
  {uint32_t ea=c->r[28]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BAD34
  c->r[5]=(rotl(c->r[0],24)&0xFF000000u)|(c->r[5]&~0xFF000000u); // 802BAD38
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 802BAD3C
  c->r[3]=c->r[30]+0x0000000Au; // 802BAD40
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802BAD44
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 802BAD48
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802BAD4C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 802BAD50
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 802BAD54
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 802BAD58
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BAD5C
  c->r[0]=rotl(c->r[0],11)&0x003FF800u; // 802BAD60
  c->r[0]=(rotl(c->r[4],0)&0x000007FFu)|(c->r[0]&~0x000007FFu); // 802BAD64
  c->r[4]=c->r[5]|c->r[0]; // 802BAD68
  c->lr=0x802BAD70u; f_802B64DC(c); // 802BAD6C
L_802BAD70:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 802BAD70
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 802BAD74
  c->r[30]=R32(c->r[1]+0x00000048u); // 802BAD78
  c->r[29]=R32(c->r[1]+0x00000044u); // 802BAD7C
  c->r[28]=R32(c->r[1]+0x00000040u); // 802BAD80
  c->lr=c->r[0]; // 802BAD84
  c->r[1]=c->r[1]+0x00000050u; // 802BAD88
  return; // 802BAD8C
}

// fn_802BAD90
void f_802BAD90(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],0)&0x00000001u; // 802BAD90
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802BAD94
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 802BAD98
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BAD9C
  c->r[7]=c->r[3]+c->r[0]; // 802BADA0
  if (!crb(c,2)) { goto L_802BADD8; } // 802BADA4
  c->r[6]=R8(c->r[5]+0x00000000u); // 802BADA8
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 802BADAC
  cmpu(c,0,c->r[0],0x00000001u); // 802BADB0
  c->r[3]=R8(c->r[5]+0x00000001u); // 802BADB4
  W8(c->r[7]+0x00000004u,c->r[6]); // 802BADB8
  c->r[0]=R8(c->r[5]+0x00000002u); // 802BADBC
  W8(c->r[7]+0x00000005u,c->r[3]); // 802BADC0
  W8(c->r[7]+0x00000006u,c->r[0]); // 802BADC4
  if (crb(c,1)) return; // 802BADC8
  c->r[0]=R8(c->r[5]+0x00000003u); // 802BADCC
  W8(c->r[7]+0x00000007u,c->r[0]); // 802BADD0
  return; // 802BADD4
L_802BADD8:;
  c->r[0]=R8(c->r[5]+0x00000003u); // 802BADD8
  W8(c->r[7]+0x00000007u,c->r[0]); // 802BADDC
  return; // 802BADE0
}

// fn_802BADE4
void f_802BADE4(Ctx* __restrict c) {
  c->r[6]=rotl(c->r[4],0)&0x00000001u; // 802BADE4
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802BADE8
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)20); // 802BADEC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BADF0
  c->r[7]=c->r[3]+c->r[0]; // 802BADF4
  if (!crb(c,2)) { goto L_802BAE2C; } // 802BADF8
  c->r[6]=R8(c->r[5]+0x00000000u); // 802BADFC
  c->r[0]=c->r[4]+0xFFFFFFFCu; // 802BAE00
  cmpu(c,0,c->r[0],0x00000001u); // 802BAE04
  c->r[3]=R8(c->r[5]+0x00000001u); // 802BAE08
  W8(c->r[7]+0x00000008u,c->r[6]); // 802BAE0C
  c->r[0]=R8(c->r[5]+0x00000002u); // 802BAE10
  W8(c->r[7]+0x00000009u,c->r[3]); // 802BAE14
  W8(c->r[7]+0x0000000Au,c->r[0]); // 802BAE18
  if (crb(c,1)) return; // 802BAE1C
  c->r[0]=R8(c->r[5]+0x00000003u); // 802BAE20
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 802BAE24
  return; // 802BAE28
L_802BAE2C:;
  c->r[0]=R8(c->r[5]+0x00000003u); // 802BAE2C
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 802BAE30
  return; // 802BAE34
}

// fn_802BAE38
void f_802BAE38(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 802BAE38
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BAE3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802BAE40
  c->r[3]=0u+0x00000001u; // 802BAE44
  c->r[4]=c->r[4]+c->r[0]; // 802BAE48
  c->r[0]=R8(c->r[4]+0x00000004u); // 802BAE4C
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BAE50
  c->r[0]=R8(c->r[4]+0x00000005u); // 802BAE54
  W8(c->r[5]+0x00000001u,c->r[0]); // 802BAE58
  c->r[0]=R8(c->r[4]+0x00000006u); // 802BAE5C
  W8(c->r[5]+0x00000002u,c->r[0]); // 802BAE60
  c->r[0]=R8(c->r[4]+0x00000007u); // 802BAE64
  W8(c->r[5]+0x00000003u,c->r[0]); // 802BAE68
  return; // 802BAE6C
}

// fn_802BAE70
void f_802BAE70(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x00000001u; // 802BAE70
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BAE74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802BAE78
  c->r[3]=0u+0x00000001u; // 802BAE7C
  c->r[4]=c->r[4]+c->r[0]; // 802BAE80
  c->r[0]=R8(c->r[4]+0x00000008u); // 802BAE84
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BAE88
  c->r[0]=R8(c->r[4]+0x00000009u); // 802BAE8C
  W8(c->r[5]+0x00000001u,c->r[0]); // 802BAE90
  c->r[0]=R8(c->r[4]+0x0000000Au); // 802BAE94
  W8(c->r[5]+0x00000002u,c->r[0]); // 802BAE98
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 802BAE9C
  W8(c->r[5]+0x00000003u,c->r[0]); // 802BAEA0
  return; // 802BAEA4
}

// fn_802BAEA8
void f_802BAEA8(Ctx* __restrict c) {
  c->r[11]=rotl(c->r[4],0)&0x00000001u; // 802BAEA8
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802BAEAC
  c->r[0]=(uint32_t)((int32_t)c->r[11]*(int32_t)20); // 802BAEB0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BAEB4
  c->r[3]=c->r[3]+c->r[0]; // 802BAEB8
  if (!crb(c,2)) { goto L_802BAEC8; } // 802BAEBC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 802BAEC0
  goto L_802BAECC; // 802BAEC4
L_802BAEC8:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 802BAEC8
L_802BAECC:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BAECC
  if (crb(c,2)) { goto L_802BAEDC; } // 802BAED0
  c->r[0]=rotl(c->r[3],31)&0x00000001u; // 802BAED4
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BAED8
L_802BAEDC:;
  cmps(c,0,(int32_t)c->r[6],0); // 802BAEDC
  if (crb(c,2)) { goto L_802BAEEC; } // 802BAEE0
  c->r[0]=rotl(c->r[3],26)&0x00000001u; // 802BAEE4
  W32(c->r[6]+0x00000000u,c->r[0]); // 802BAEE8
L_802BAEEC:;
  cmps(c,0,(int32_t)c->r[7],0); // 802BAEEC
  if (crb(c,2)) { goto L_802BAEFC; } // 802BAEF0
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 802BAEF4
  W32(c->r[7]+0x00000000u,c->r[0]); // 802BAEF8
L_802BAEFC:;
  cmps(c,0,(int32_t)c->r[8],0); // 802BAEFC
  c->r[4]=rotl(c->r[3],30)&0x0000000Fu; // 802BAF00
  c->r[0]=rotl(c->r[3],21)&0x0000000Fu; // 802BAF04
  if (crb(c,2)) { goto L_802BAF18; } // 802BAF08
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BAF0C
  c->r[0]=c->r[4]|c->r[0]; // 802BAF10
  W32(c->r[8]+0x00000000u,c->r[0]); // 802BAF14
L_802BAF18:;
  c->r[0]=rotl(c->r[3],22)&0x00000001u; cr0(c,c->r[0]); // 802BAF18
  if (!crb(c,2)) { goto L_802BAF2C; } // 802BAF1C
  c->r[4]=0u+0x00000000u; // 802BAF20
  c->r[0]=0u+0x00000000u; // 802BAF24
  goto L_802BAF48; // 802BAF28
L_802BAF2C:;
  c->r[0]=rotl(c->r[3],23)&0x00000001u; cr0(c,c->r[0]); // 802BAF2C
  if (!crb(c,2)) { goto L_802BAF40; } // 802BAF30
  c->r[0]=rotl(c->r[3],25)&0x00000003u; // 802BAF34
  c->r[4]=0u+0x00000002u; // 802BAF38
  goto L_802BAF48; // 802BAF3C
L_802BAF40:;
  c->r[4]=0u+0x00000001u; // 802BAF40
  c->r[0]=rotl(c->r[3],25)&0x00000003u; // 802BAF44
L_802BAF48:;
  cmps(c,0,(int32_t)c->r[9],0); // 802BAF48
  if (crb(c,2)) { goto L_802BAF54; } // 802BAF4C
  W32(c->r[9]+0x00000000u,c->r[0]); // 802BAF50
L_802BAF54:;
  cmps(c,0,(int32_t)c->r[10],0); // 802BAF54
  if (crb(c,2)) { goto L_802BAF60; } // 802BAF58
  W32(c->r[10]+0x00000000u,c->r[4]); // 802BAF5C
L_802BAF60:;
  c->r[3]=0u+0x00000001u; // 802BAF60
  return; // 802BAF64
}

// fn_802BAF68
void f_802BAF68(Ctx* __restrict c) {
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BAF68
  c->r[3]=c->r[4]|c->r[4]; // 802BAF6C
  c->r[5]=R32(c->r[6]+0x00000000u); // 802BAF70
  c->r[0]=R32(c->r[6]+0x00000004u); // 802BAF74
  W32(c->r[4]+0x00000000u,c->r[5]); // 802BAF78
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BAF7C
  c->r[5]=R32(c->r[6]+0x00000008u); // 802BAF80
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 802BAF84
  W32(c->r[4]+0x00000008u,c->r[5]); // 802BAF88
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 802BAF8C
  c->r[5]=R32(c->r[6]+0x00000010u); // 802BAF90
  c->r[0]=R32(c->r[6]+0x00000014u); // 802BAF94
  W32(c->r[4]+0x00000010u,c->r[5]); // 802BAF98
  W32(c->r[4]+0x00000014u,c->r[0]); // 802BAF9C
  c->r[5]=R32(c->r[6]+0x00000018u); // 802BAFA0
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 802BAFA4
  W32(c->r[4]+0x00000018u,c->r[5]); // 802BAFA8
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 802BAFAC
  c->r[5]=R32(c->r[6]+0x00000020u); // 802BAFB0
  c->r[0]=R32(c->r[6]+0x00000024u); // 802BAFB4
  W32(c->r[4]+0x00000020u,c->r[5]); // 802BAFB8
  W32(c->r[4]+0x00000024u,c->r[0]); // 802BAFBC
  return; // 802BAFC0
}

// fn_802BAFC4
void f_802BAFC4(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 802BAFC4
  if (crb(c,2)) return; // 802BAFC8
  cmps(c,0,(int32_t)c->r[5],0); // 802BAFCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BAFD0
  if (crb(c,2)) { goto L_802BB010; } // 802BAFD4
  cmpu(c,0,c->r[4],0x00000002u); // 802BAFD8
  if (!crb(c,0)) { goto L_802BAFE8; } // 802BAFDC
  c->r[4]=0u+0x00000020u; // 802BAFE0
  f_80349130(c); return; // 802BAFE4
L_802BAFE8:;
  cmpu(c,0,c->r[4],0x00000004u); // 802BAFE8
  if (!crb(c,0)) { goto L_802BAFF8; } // 802BAFEC
  c->r[4]=0u+0x00000040u; // 802BAFF0
  f_80349130(c); return; // 802BAFF4
L_802BAFF8:;
  cmpu(c,0,c->r[4],0x00000008u); // 802BAFF8
  if (!crb(c,0)) { goto L_802BB008; } // 802BAFFC
  c->r[4]=0u+0x00000080u; // 802BB000
  f_80349130(c); return; // 802BB004
L_802BB008:;
  c->r[4]=0u+0x000000A0u; // 802BB008
  f_80349130(c); return; // 802BB00C
L_802BB010:;
  cmpu(c,0,c->r[4],0x00000002u); // 802BB010
  if (!crb(c,0)) { goto L_802BB034; } // 802BB014
  c->r[4]=0u+0xCC010000u; // 802BB018
  c->r[0]=0u+0x00000040u; // 802BB01C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB020
  c->r[0]=0u+0x00000020u; // 802BB024
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802BB028
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB02C
  return; // 802BB030
L_802BB034:;
  cmpu(c,0,c->r[4],0x00000004u); // 802BB034
  if (!crb(c,0)) { goto L_802BB054; } // 802BB038
  c->r[4]=0u+0xCC010000u; // 802BB03C
  c->r[0]=0u+0x00000040u; // 802BB040
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB044
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802BB048
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB04C
  return; // 802BB050
L_802BB054:;
  cmpu(c,0,c->r[4],0x00000008u); // 802BB054
  if (!crb(c,0)) { goto L_802BB078; } // 802BB058
  c->r[4]=0u+0xCC010000u; // 802BB05C
  c->r[0]=0u+0x00000040u; // 802BB060
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB064
  c->r[0]=0u+0x00000080u; // 802BB068
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802BB06C
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB070
  return; // 802BB074
L_802BB078:;
  c->r[4]=0u+0xCC010000u; // 802BB078
  c->r[0]=0u+0x00000040u; // 802BB07C
  W8(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB080
  c->r[0]=0u+0x000000A0u; // 802BB084
  W32(c->r[4]+0xFFFF8000u,c->r[3]); // 802BB088
  W32(c->r[4]+0xFFFF8000u,c->r[0]); // 802BB08C
  return; // 802BB090
}

// Bind__Q34nw4r3g3d6ResMatFQ34nw4r3g3d7ResFile
void f_802BB094(Ctx* __restrict c) {
  trace_call(0x802BB094u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BB094
  c->r[0]=c->lr; // 802BB098
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BB09C
  c->r[11]=c->r[1]+0x00000030u; // 802BB0A0
  c->lr=0x802BB0A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BB0A4
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB0A8
  c->r[26]=c->r[3]|c->r[3]; // 802BB0AC
  c->r[27]=c->r[4]|c->r[4]; // 802BB0B0
  c->r[28]=0u+0x00000000u; // 802BB0B4
  c->r[31]=R32(c->r[5]+0x0000002Cu); // 802BB0B8
  c->r[29]=0u+0x00000000u; // 802BB0BC
  c->r[30]=0u+0x00000000u; // 802BB0C0
  goto L_802BB130; // 802BB0C4
L_802BB0C8:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 802BB0C8
  c->r[0]=R32(c->r[3]+0x00000030u); // 802BB0CC
  cmps(c,0,(int32_t)c->r[0],0); // 802BB0D0
  if (crb(c,2)) { goto L_802BB0E0; } // 802BB0D4
  c->r[4]=c->r[3]+c->r[0]; // 802BB0D8
  goto L_802BB0E4; // 802BB0DC
L_802BB0E0:;
  c->r[4]=0u+0x00000000u; // 802BB0E0
L_802BB0E4:;
  c->r[3]=c->r[3]+0x00000144u; // 802BB0E4
  c->r[8]=c->r[4]+c->r[30]; // 802BB0E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BB0EC
  c->r[3]=c->r[1]+0x00000014u; // 802BB0F0
  c->r[0]=R32(c->r[27]+0x00000000u); // 802BB0F4
  c->r[4]=c->r[1]+0x00000010u; // 802BB0F8
  c->r[7]=R32(c->r[26]+0x00000000u); // 802BB0FC
  c->r[5]=c->r[1]+0x0000000Cu; // 802BB100
  c->r[6]=c->r[1]+0x00000008u; // 802BB104
  c->r[7]=c->r[7]+0x00000040u; // 802BB108
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BB10C
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 802BB110
  W32(c->r[1]+0x00000014u,c->r[8]); // 802BB114
  c->lr=0x802BB11Cu; f_802BB270(c); // 802BB118
  cmps(c,0,(int32_t)c->r[3],0); // 802BB11C
  if (crb(c,2)) { goto L_802BB128; } // 802BB120
  c->r[28]=c->r[28]+0x00000001u; // 802BB124
L_802BB128:;
  c->r[30]=c->r[30]+0x00000034u; // 802BB128
  c->r[29]=c->r[29]+0x00000001u; // 802BB12C
L_802BB130:;
  cmpu(c,0,c->r[29],c->r[31]); // 802BB130
  if (crb(c,0)) { IRQCHK(c); goto L_802BB0C8; } // 802BB134
  c->r[0]=c->r[31]-c->r[28]; // 802BB138
  c->r[11]=c->r[1]+0x00000030u; // 802BB13C
  c->r[0]=cntlz(c->r[0]); // 802BB140
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802BB144
  c->lr=0x802BB14Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BB148
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BB14C
  c->lr=c->r[0]; // 802BB150
  c->r[1]=c->r[1]+0x00000030u; // 802BB154
  return; // 802BB158
}

// Release__Q34nw4r3g3d6ResMatFv
void f_802BB15C(Ctx* __restrict c) {
  trace_call(0x802BB15Cu);
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB15C
  c->r[10]=0u+0x00000000u; // 802BB160
  c->r[5]=0u+0x00000001u; // 802BB164
  c->r[6]=0u+0x00000000u; // 802BB168
  c->r[0]=R32(c->r[4]+0x0000002Cu); // 802BB16C
  c->ctr=c->r[0]; // 802BB170
  cmpu(c,0,c->r[0],0x00000000u); // 802BB174
  if (!crb(c,1)) return; // 802BB178
L_802BB17C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB17C
  c->r[0]=R32(c->r[4]+0x00000030u); // 802BB180
  cmps(c,0,(int32_t)c->r[0],0); // 802BB184
  if (crb(c,2)) { goto L_802BB194; } // 802BB188
  c->r[0]=c->r[4]+c->r[0]; // 802BB18C
  goto L_802BB198; // 802BB190
L_802BB194:;
  c->r[0]=0u+0x00000000u; // 802BB194
L_802BB198:;
  c->r[9]=c->r[0]+c->r[10]; // 802BB198
  c->r[7]=addc(c,c->r[4],0x00000040u,0); cr0(c,c->r[7]); // 802BB19C
  W32(c->r[9]+0x00000008u,c->r[6]); // 802BB1A0
  c->r[8]=c->r[4]+0x00000144u; // 802BB1A4
  W32(c->r[9]+0x0000000Cu,c->r[6]); // 802BB1A8
  c->r[0]=R32(c->r[9]+0x00000010u); // 802BB1AC
  if (crb(c,2)) { goto L_802BB1D4; } // 802BB1B0
  cmps(c,0,(int32_t)c->r[0],0); // 802BB1B4
  if (crb(c,0)) { goto L_802BB1D4; } // 802BB1B8
  cmps(c,0,(int32_t)c->r[0],7); // 802BB1BC
  if (crb(c,1)) { goto L_802BB1D4; } // 802BB1C0
  c->r[4]=R32(c->r[7]+0x00000000u); // 802BB1C4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 802BB1C8
  c->r[0]=c->r[4]&~c->r[0]; // 802BB1CC
  W32(c->r[7]+0x00000000u,c->r[0]); // 802BB1D0
L_802BB1D4:;
  cmps(c,0,(int32_t)c->r[8],0); // 802BB1D4
  c->r[0]=R32(c->r[9]+0x00000010u); // 802BB1D8
  if (crb(c,2)) { goto L_802BB200; } // 802BB1DC
  cmps(c,0,(int32_t)c->r[0],0); // 802BB1E0
  if (crb(c,0)) { goto L_802BB200; } // 802BB1E4
  cmps(c,0,(int32_t)c->r[0],7); // 802BB1E8
  if (crb(c,1)) { goto L_802BB200; } // 802BB1EC
  c->r[4]=R32(c->r[8]+0x00000000u); // 802BB1F0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 802BB1F4
  c->r[0]=c->r[4]&~c->r[0]; // 802BB1F8
  W32(c->r[8]+0x00000000u,c->r[0]); // 802BB1FC
L_802BB200:;
  c->r[10]=c->r[10]+0x00000034u; // 802BB200
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BB17C; } // 802BB204
  return; // 802BB208
}

// Init__Q34nw4r3g3d6ResMatFv
void f_802BB20C(Ctx* __restrict c) {
  trace_call(0x802BB20Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB20C
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 802BB210
  cmps(c,0,(int32_t)c->r[0],0); // 802BB214
  if (crb(c,2)) { goto L_802BB224; } // 802BB218
  c->r[3]=c->r[3]+c->r[0]; // 802BB21C
  goto L_802BB228; // 802BB220
L_802BB224:;
  c->r[3]=0u+0x00000000u; // 802BB224
L_802BB228:;
  c->r[4]=0u+0x00000180u; // 802BB228
  f_80359C58(c); return; // 802BB22C
}

// GetResTev__Q34nw4r3g3d6ResMatFv
void f_802BB230(Ctx* __restrict c) {
  trace_call(0x802BB230u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB230
  c->r[0]=R32(c->r[3]+0x00000028u); // 802BB234
  cmps(c,0,(int32_t)c->r[0],0); // 802BB238
  if (crb(c,2)) { goto L_802BB248; } // 802BB23C
  c->r[3]=c->r[3]+c->r[0]; // 802BB240
  return; // 802BB244
L_802BB248:;
  c->r[3]=0u+0x00000000u; // 802BB248
  return; // 802BB24C
}

// GetResTev__Q34nw4r3g3d6ResMatCFv
void f_802BB250(Ctx* __restrict c) {
  trace_call(0x802BB250u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB250
  c->r[0]=R32(c->r[3]+0x00000034u); // 802BB254
  cmps(c,0,(int32_t)c->r[0],0); // 802BB258
  if (crb(c,2)) { goto L_802BB268; } // 802BB25C
  c->r[3]=c->r[3]+c->r[0]; // 802BB260
  return; // 802BB264
L_802BB268:;
  c->r[3]=0u+0x00000000u; // 802BB268
  return; // 802BB26C
}

// Bind__Q34nw4r3g3d14ResTexPlttInfoFQ34nw4r3g3d7ResFileQ34nw4r3g3d9ResTexObjQ34nw4r3g3d10ResTlutObj
void f_802BB270(Ctx* __restrict c) {
  trace_call(0x802BB270u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BB270
  c->r[0]=c->lr; // 802BB274
  W32(c->r[1]+0x00000064u,c->r[0]); // 802BB278
  c->r[11]=c->r[1]+0x00000060u; // 802BB27C
  c->lr=0x802BB284u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BB280
  c->r[7]=R32(c->r[3]+0x00000000u); // 802BB284
  c->r[28]=c->r[3]|c->r[3]; // 802BB288
  c->r[29]=c->r[4]|c->r[4]; // 802BB28C
  c->r[25]=c->r[5]|c->r[5]; // 802BB290
  c->r[0]=R32(c->r[7]+0x00000000u); // 802BB294
  c->r[30]=c->r[6]|c->r[6]; // 802BB298
  c->r[31]=0u+0x00000001u; // 802BB29C
  cmps(c,0,(int32_t)c->r[0],0); // 802BB2A0
  if (crb(c,2)) { goto L_802BB2B4; } // 802BB2A4
  c->r[3]=c->r[7]+c->r[0]; // 802BB2A8
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802BB2AC
  goto L_802BB2B8; // 802BB2B0
L_802BB2B4:;
  c->r[0]=0u+0x00000000u; // 802BB2B4
L_802BB2B8:;
  c->r[3]=R32(c->r[7]+0x00000008u); // 802BB2B8
  cmps(c,0,(int32_t)c->r[3],0); // 802BB2BC
  if (!crb(c,2)) { goto L_802BB444; } // 802BB2C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BB2C4
  c->r[3]=c->r[29]|c->r[29]; // 802BB2C8
  c->r[4]=c->r[1]+0x00000034u; // 802BB2CC
  c->lr=0x802BB2D4u; f_802B6A40(c); // 802BB2D0
  cmps(c,0,(int32_t)c->r[3],0); // 802BB2D4
  if (crb(c,2)) { goto L_802BB440; } // 802BB2D8
  c->r[4]=R32(c->r[28]+0x00000000u); // 802BB2DC
  c->r[0]=R32(c->r[4]+0x00000004u); // 802BB2E0
  cmps(c,0,(int32_t)c->r[0],0); // 802BB2E4
  if (crb(c,2)) { goto L_802BB2F8; } // 802BB2E8
  c->r[0]=R32(c->r[3]+0x00000018u); // 802BB2EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802BB2F0
  if (crb(c,2)) { goto L_802BB440; } // 802BB2F4
L_802BB2F8:;
  W32(c->r[1]+0x00000030u,c->r[3]); // 802BB2F8
  c->r[27]=R32(c->r[25]+0x00000000u); // 802BB2FC
  c->r[25]=R32(c->r[28]+0x00000000u); // 802BB300
  cmps(c,0,(int32_t)c->r[27],0); // 802BB304
  W32(c->r[25]+0x00000008u,c->r[3]); // 802BB308
  c->r[0]=R32(c->r[25]+0x00000010u); // 802BB30C
  if (crb(c,2)) { goto L_802BB334; } // 802BB310
  cmps(c,0,(int32_t)c->r[0],0); // 802BB314
  if (crb(c,0)) { goto L_802BB334; } // 802BB318
  cmps(c,0,(int32_t)c->r[0],7); // 802BB31C
  if (crb(c,1)) { goto L_802BB334; } // 802BB320
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 802BB324
  c->r[3]=c->r[27]+c->r[0]; // 802BB328
  c->r[26]=c->r[3]+0x00000004u; // 802BB32C
  goto L_802BB338; // 802BB330
L_802BB334:;
  c->r[26]=0u+0x00000000u; // 802BB334
L_802BB338:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802BB338
  c->r[0]=R32(c->r[3]+0x00000004u); // 802BB33C
  cmps(c,0,(int32_t)c->r[0],0); // 802BB340
  if (crb(c,2)) { goto L_802BB39C; } // 802BB344
  c->r[3]=c->r[1]+0x00000030u; // 802BB348
  c->r[4]=c->r[1]+0x00000018u; // 802BB34C
  c->r[5]=c->r[1]+0x00000012u; // 802BB350
  c->r[6]=c->r[1]+0x00000014u; // 802BB354
  c->r[7]=c->r[1]+0x00000024u; // 802BB358
  c->r[8]=c->r[1]+0x0000001Cu; // 802BB35C
  c->r[9]=c->r[1]+0x00000020u; // 802BB360
  c->r[10]=c->r[1]+0x00000010u; // 802BB364
  c->lr=0x802BB36Cu; f_802BB9E0(c); // 802BB368
  c->r[0]=R32(c->r[25]+0x00000014u); // 802BB36C
  c->r[3]=c->r[26]|c->r[26]; // 802BB370
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BB374
  c->r[4]=R32(c->r[1]+0x00000018u); // 802BB378
  c->r[5]=R16(c->r[1]+0x00000012u); // 802BB37C
  c->r[6]=R16(c->r[1]+0x00000014u); // 802BB380
  c->r[7]=R32(c->r[1]+0x00000024u); // 802BB384
  c->r[8]=R32(c->r[25]+0x00000018u); // 802BB388
  c->r[9]=R32(c->r[25]+0x0000001Cu); // 802BB38C
  c->r[10]=R8(c->r[1]+0x00000010u); // 802BB390
  c->lr=0x802BB398u; f_8034734C(c); // 802BB394
  goto L_802BB3E4; // 802BB398
L_802BB39C:;
  c->r[3]=c->r[1]+0x00000030u; // 802BB39C
  c->r[4]=c->r[1]+0x00000018u; // 802BB3A0
  c->r[5]=c->r[1]+0x00000012u; // 802BB3A4
  c->r[6]=c->r[1]+0x00000014u; // 802BB3A8
  c->r[7]=c->r[1]+0x00000028u; // 802BB3AC
  c->r[8]=c->r[1]+0x0000001Cu; // 802BB3B0
  c->r[9]=c->r[1]+0x00000020u; // 802BB3B4
  c->r[10]=c->r[1]+0x00000010u; // 802BB3B8
  c->lr=0x802BB3C0u; f_802BB924(c); // 802BB3BC
  c->r[4]=R32(c->r[1]+0x00000018u); // 802BB3C0
  c->r[3]=c->r[26]|c->r[26]; // 802BB3C4
  c->r[5]=R16(c->r[1]+0x00000012u); // 802BB3C8
  c->r[6]=R16(c->r[1]+0x00000014u); // 802BB3CC
  c->r[7]=R32(c->r[1]+0x00000028u); // 802BB3D0
  c->r[8]=R32(c->r[25]+0x00000018u); // 802BB3D4
  c->r[9]=R32(c->r[25]+0x0000001Cu); // 802BB3D8
  c->r[10]=R8(c->r[1]+0x00000010u); // 802BB3DC
  c->lr=0x802BB3E4u; f_80347140(c); // 802BB3E0
L_802BB3E4:;
  c->r[4]=R32(c->r[25]+0x00000020u); // 802BB3E4
  c->r[3]=c->r[26]|c->r[26]; // 802BB3E8
  c->r[5]=R32(c->r[25]+0x00000024u); // 802BB3EC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BB3F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BB3F4
  {uint32_t ea=c->r[25]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BB3F8
  c->r[6]=R8(c->r[25]+0x00000030u); // 802BB3FC
  c->r[7]=R8(c->r[25]+0x00000031u); // 802BB400
  c->r[8]=R32(c->r[25]+0x0000002Cu); // 802BB404
  c->lr=0x802BB40Cu; f_80347394(c); // 802BB408
  cmps(c,0,(int32_t)c->r[27],0); // 802BB40C
  c->r[4]=R32(c->r[25]+0x00000010u); // 802BB410
  if (crb(c,2)) { goto L_802BB444; } // 802BB414
  cmps(c,0,(int32_t)c->r[4],0); // 802BB418
  if (crb(c,0)) { goto L_802BB444; } // 802BB41C
  cmps(c,0,(int32_t)c->r[4],7); // 802BB420
  if (crb(c,1)) { goto L_802BB444; } // 802BB424
  c->r[0]=0u+0x00000001u; // 802BB428
  c->r[3]=R32(c->r[27]+0x00000000u); // 802BB42C
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 802BB430
  c->r[0]=c->r[3]|c->r[0]; // 802BB434
  W32(c->r[27]+0x00000000u,c->r[0]); // 802BB438
  goto L_802BB444; // 802BB43C
L_802BB440:;
  c->r[31]=0u+0x00000000u; // 802BB440
L_802BB444:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802BB444
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BB448
  cmps(c,0,(int32_t)c->r[0],0); // 802BB44C
  if (!crb(c,2)) { goto L_802BB530; } // 802BB450
  c->r[0]=R32(c->r[3]+0x00000004u); // 802BB454
  cmps(c,0,(int32_t)c->r[0],0); // 802BB458
  if (crb(c,2)) { goto L_802BB46C; } // 802BB45C
  c->r[3]=c->r[3]+c->r[0]; // 802BB460
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802BB464
  goto L_802BB470; // 802BB468
L_802BB46C:;
  c->r[0]=0u+0x00000000u; // 802BB46C
L_802BB470:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BB470
  if (crb(c,2)) { goto L_802BB530; } // 802BB474
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 802BB478
  c->r[3]=c->r[29]|c->r[29]; // 802BB47C
  c->r[4]=c->r[1]+0x0000002Cu; // 802BB480
  c->lr=0x802BB488u; f_802B69CC(c); // 802BB484
  cmps(c,0,(int32_t)c->r[3],0); // 802BB488
  c->r[7]=c->r[3]|c->r[3]; // 802BB48C
  if (crb(c,2)) { goto L_802BB52C; } // 802BB490
  c->r[25]=R32(c->r[28]+0x00000000u); // 802BB494
  c->r[28]=R32(c->r[30]+0x00000000u); // 802BB498
  W32(c->r[25]+0x0000000Cu,c->r[3]); // 802BB49C
  cmps(c,0,(int32_t)c->r[28],0); // 802BB4A0
  c->r[0]=R32(c->r[25]+0x00000010u); // 802BB4A4
  if (crb(c,2)) { goto L_802BB4CC; } // 802BB4A8
  cmps(c,0,(int32_t)c->r[0],0); // 802BB4AC
  if (crb(c,0)) { goto L_802BB4CC; } // 802BB4B0
  cmps(c,0,(int32_t)c->r[0],7); // 802BB4B4
  if (crb(c,1)) { goto L_802BB4CC; } // 802BB4B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802BB4BC
  c->r[4]=c->r[28]+c->r[0]; // 802BB4C0
  c->r[0]=c->r[4]+0x00000004u; // 802BB4C4
  goto L_802BB4D0; // 802BB4C8
L_802BB4CC:;
  c->r[0]=0u+0x00000000u; // 802BB4CC
L_802BB4D0:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 802BB4D0
  c->r[6]=R16(c->r[3]+0x0000001Cu); // 802BB4D4
  cmps(c,0,(int32_t)c->r[4],0); // 802BB4D8
  c->r[5]=R32(c->r[3]+0x00000018u); // 802BB4DC
  c->r[3]=c->r[0]|c->r[0]; // 802BB4E0
  if (crb(c,2)) { goto L_802BB4F0; } // 802BB4E4
  c->r[4]=c->r[7]+c->r[4]; // 802BB4E8
  goto L_802BB4F4; // 802BB4EC
L_802BB4F0:;
  c->r[4]=0u+0x00000000u; // 802BB4F0
L_802BB4F4:;
  c->lr=0x802BB4F8u; f_803477B4(c); // 802BB4F4
  cmps(c,0,(int32_t)c->r[28],0); // 802BB4F8
  c->r[4]=R32(c->r[25]+0x00000010u); // 802BB4FC
  if (crb(c,2)) { goto L_802BB530; } // 802BB500
  cmps(c,0,(int32_t)c->r[4],0); // 802BB504
  if (crb(c,0)) { goto L_802BB530; } // 802BB508
  cmps(c,0,(int32_t)c->r[4],7); // 802BB50C
  if (crb(c,1)) { goto L_802BB530; } // 802BB510
  c->r[0]=0u+0x00000001u; // 802BB514
  c->r[3]=R32(c->r[28]+0x00000000u); // 802BB518
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[0]<<((c->r[4])&31)); // 802BB51C
  c->r[0]=c->r[3]|c->r[0]; // 802BB520
  W32(c->r[28]+0x00000000u,c->r[0]); // 802BB524
  goto L_802BB530; // 802BB528
L_802BB52C:;
  c->r[31]=0u+0x00000000u; // 802BB52C
L_802BB530:;
  c->r[11]=c->r[1]+0x00000060u; // 802BB530
  c->r[3]=c->r[31]|c->r[31]; // 802BB534
  c->lr=0x802BB53Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BB538
  c->r[0]=R32(c->r[1]+0x00000064u); // 802BB53C
  c->lr=c->r[0]; // 802BB540
  c->r[1]=c->r[1]+0x00000060u; // 802BB544
  return; // 802BB548
}

// SetArray__Q34nw4r3g3d9ResVtxPosFv
void f_802BB54C(Ctx* __restrict c) {
  trace_call(0x802BB54Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB54C
  cmps(c,0,(int32_t)c->r[5],0); // 802BB550
  if (crb(c,2)) return; // 802BB554
  c->r[0]=R32(c->r[5]+0x00000008u); // 802BB558
  c->r[3]=0u+0x00000009u; // 802BB55C
  cmps(c,0,(int32_t)c->r[0],0); // 802BB560
  if (crb(c,2)) { goto L_802BB570; } // 802BB564
  c->r[4]=c->r[5]+c->r[0]; // 802BB568
  goto L_802BB574; // 802BB56C
L_802BB570:;
  c->r[4]=0u+0x00000000u; // 802BB570
L_802BB574:;
  c->r[5]=R8(c->r[5]+0x0000001Du); // 802BB574
  f_80344D30(c); return; // 802BB578
  return; // 802BB57C
}

// GetArray__Q34nw4r3g3d9ResVtxPosCFPPCvPUc
void f_802BB580(Ctx* __restrict c) {
  trace_call(0x802BB580u);
  cmps(c,0,(int32_t)c->r[4],0); // 802BB580
  if (crb(c,2)) { goto L_802BB5A8; } // 802BB584
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BB588
  c->r[0]=R32(c->r[6]+0x00000008u); // 802BB58C
  cmps(c,0,(int32_t)c->r[0],0); // 802BB590
  if (crb(c,2)) { goto L_802BB5A0; } // 802BB594
  c->r[0]=c->r[6]+c->r[0]; // 802BB598
  goto L_802BB5A4; // 802BB59C
L_802BB5A0:;
  c->r[0]=0u+0x00000000u; // 802BB5A0
L_802BB5A4:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BB5A4
L_802BB5A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BB5A8
  if (crb(c,2)) return; // 802BB5AC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB5B0
  c->r[0]=R8(c->r[3]+0x0000001Du); // 802BB5B4
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BB5B8
  return; // 802BB5BC
}

// CopyTo__Q34nw4r3g3d9ResVtxPosCFPv
void f_802BB5C0(Ctx* __restrict c) {
  trace_call(0x802BB5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BB5C0
  c->r[0]=c->lr; // 802BB5C4
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB5C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BB5CC
  cmps(c,0,(int32_t)c->r[5],0); // 802BB5D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BB5D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802BB5D8
  c->r[30]=c->r[4]|c->r[4]; // 802BB5DC
  if (crb(c,2)) { goto L_802BB604; } // 802BB5E0
  c->r[31]=R32(c->r[5]+0x00000000u); // 802BB5E4
  c->r[4]=c->r[5]|c->r[5]; // 802BB5E8
  c->r[3]=c->r[30]|c->r[30]; // 802BB5EC
  c->r[5]=c->r[31]|c->r[31]; // 802BB5F0
  c->lr=0x802BB5F8u; f_802C68F4(c); // 802BB5F4
  c->r[3]=c->r[30]|c->r[30]; // 802BB5F8
  c->r[4]=c->r[31]|c->r[31]; // 802BB5FC
  c->lr=0x802BB604u; f_80359BFC(c); // 802BB600
L_802BB604:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BB604
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BB608
  c->r[30]=R32(c->r[1]+0x00000008u); // 802BB60C
  c->lr=c->r[0]; // 802BB610
  c->r[1]=c->r[1]+0x00000010u; // 802BB614
  return; // 802BB618
}

// SetArray__Q34nw4r3g3d9ResVtxNrmFv
void f_802BB61C(Ctx* __restrict c) {
  trace_call(0x802BB61Cu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB61C
  cmps(c,0,(int32_t)c->r[5],0); // 802BB620
  if (crb(c,2)) return; // 802BB624
  c->r[0]=R32(c->r[5]+0x00000008u); // 802BB628
  c->r[3]=0u+0x0000000Au; // 802BB62C
  cmps(c,0,(int32_t)c->r[0],0); // 802BB630
  if (crb(c,2)) { goto L_802BB640; } // 802BB634
  c->r[4]=c->r[5]+c->r[0]; // 802BB638
  goto L_802BB644; // 802BB63C
L_802BB640:;
  c->r[4]=0u+0x00000000u; // 802BB640
L_802BB644:;
  c->r[5]=R8(c->r[5]+0x0000001Du); // 802BB644
  f_80344D30(c); return; // 802BB648
  return; // 802BB64C
}

// GetArray__Q34nw4r3g3d9ResVtxNrmCFPPCvPUc
void f_802BB650(Ctx* __restrict c) {
  trace_call(0x802BB650u);
  cmps(c,0,(int32_t)c->r[4],0); // 802BB650
  if (crb(c,2)) { goto L_802BB678; } // 802BB654
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BB658
  c->r[0]=R32(c->r[6]+0x00000008u); // 802BB65C
  cmps(c,0,(int32_t)c->r[0],0); // 802BB660
  if (crb(c,2)) { goto L_802BB670; } // 802BB664
  c->r[0]=c->r[6]+c->r[0]; // 802BB668
  goto L_802BB674; // 802BB66C
L_802BB670:;
  c->r[0]=0u+0x00000000u; // 802BB670
L_802BB674:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BB674
L_802BB678:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BB678
  if (crb(c,2)) return; // 802BB67C
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB680
  c->r[0]=R8(c->r[3]+0x0000001Du); // 802BB684
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BB688
  return; // 802BB68C
}

// CopyTo__Q34nw4r3g3d9ResVtxNrmCFPv
void f_802BB690(Ctx* __restrict c) {
  trace_call(0x802BB690u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BB690
  c->r[0]=c->lr; // 802BB694
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB698
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BB69C
  cmps(c,0,(int32_t)c->r[5],0); // 802BB6A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BB6A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802BB6A8
  c->r[30]=c->r[4]|c->r[4]; // 802BB6AC
  if (crb(c,2)) { goto L_802BB6D4; } // 802BB6B0
  c->r[31]=R32(c->r[5]+0x00000000u); // 802BB6B4
  c->r[4]=c->r[5]|c->r[5]; // 802BB6B8
  c->r[3]=c->r[30]|c->r[30]; // 802BB6BC
  c->r[5]=c->r[31]|c->r[31]; // 802BB6C0
  c->lr=0x802BB6C8u; f_802C68F4(c); // 802BB6C4
  c->r[3]=c->r[30]|c->r[30]; // 802BB6C8
  c->r[4]=c->r[31]|c->r[31]; // 802BB6CC
  c->lr=0x802BB6D4u; f_80359BFC(c); // 802BB6D0
L_802BB6D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BB6D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BB6D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802BB6DC
  c->lr=c->r[0]; // 802BB6E0
  c->r[1]=c->r[1]+0x00000010u; // 802BB6E4
  return; // 802BB6E8
}

// SetArray__Q34nw4r3g3d9ResVtxClrF7_GXAttr
void f_802BB6EC(Ctx* __restrict c) {
  trace_call(0x802BB6ECu);
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB6EC
  cmps(c,0,(int32_t)c->r[5],0); // 802BB6F0
  if (crb(c,2)) return; // 802BB6F4
  c->r[0]=c->r[4]+0xFFFFFFF5u; // 802BB6F8
  cmpu(c,0,c->r[0],0x00000001u); // 802BB6FC
  if (crb(c,1)) return; // 802BB700
  c->r[0]=R32(c->r[5]+0x00000008u); // 802BB704
  c->r[3]=c->r[4]|c->r[4]; // 802BB708
  cmps(c,0,(int32_t)c->r[0],0); // 802BB70C
  if (crb(c,2)) { goto L_802BB71C; } // 802BB710
  c->r[4]=c->r[5]+c->r[0]; // 802BB714
  goto L_802BB720; // 802BB718
L_802BB71C:;
  c->r[4]=0u+0x00000000u; // 802BB71C
L_802BB720:;
  c->r[5]=R8(c->r[5]+0x0000001Cu); // 802BB720
  f_80344D30(c); return; // 802BB724
  return; // 802BB728
}

// GetArray__Q34nw4r3g3d9ResVtxClrCFPPCvPUc
void f_802BB72C(Ctx* __restrict c) {
  trace_call(0x802BB72Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 802BB72C
  if (crb(c,2)) { goto L_802BB754; } // 802BB730
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BB734
  c->r[0]=R32(c->r[6]+0x00000008u); // 802BB738
  cmps(c,0,(int32_t)c->r[0],0); // 802BB73C
  if (crb(c,2)) { goto L_802BB74C; } // 802BB740
  c->r[0]=c->r[6]+c->r[0]; // 802BB744
  goto L_802BB750; // 802BB748
L_802BB74C:;
  c->r[0]=0u+0x00000000u; // 802BB74C
L_802BB750:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BB750
L_802BB754:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BB754
  if (crb(c,2)) return; // 802BB758
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB75C
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 802BB760
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BB764
  return; // 802BB768
}

// CopyTo__Q34nw4r3g3d9ResVtxClrCFPv
void f_802BB76C(Ctx* __restrict c) {
  trace_call(0x802BB76Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BB76C
  c->r[0]=c->lr; // 802BB770
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BB774
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BB778
  cmps(c,0,(int32_t)c->r[5],0); // 802BB77C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BB780
  W32(c->r[1]+0x00000008u,c->r[30]); // 802BB784
  c->r[30]=c->r[4]|c->r[4]; // 802BB788
  if (crb(c,2)) { goto L_802BB7B0; } // 802BB78C
  c->r[31]=R32(c->r[5]+0x00000000u); // 802BB790
  c->r[4]=c->r[5]|c->r[5]; // 802BB794
  c->r[3]=c->r[30]|c->r[30]; // 802BB798
  c->r[5]=c->r[31]|c->r[31]; // 802BB79C
  c->lr=0x802BB7A4u; f_802C68F4(c); // 802BB7A0
  c->r[3]=c->r[30]|c->r[30]; // 802BB7A4
  c->r[4]=c->r[31]|c->r[31]; // 802BB7A8
  c->lr=0x802BB7B0u; f_80359BFC(c); // 802BB7AC
L_802BB7B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BB7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BB7B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802BB7B8
  c->lr=c->r[0]; // 802BB7BC
  c->r[1]=c->r[1]+0x00000010u; // 802BB7C0
  return; // 802BB7C4
}

// GetArray__Q34nw4r3g3d14ResVtxTexCoordCFPPCvPUc
void f_802BB7C8(Ctx* __restrict c) {
  trace_call(0x802BB7C8u);
  cmps(c,0,(int32_t)c->r[4],0); // 802BB7C8
  if (crb(c,2)) { goto L_802BB7F0; } // 802BB7CC
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BB7D0
  c->r[0]=R32(c->r[6]+0x00000008u); // 802BB7D4
  cmps(c,0,(int32_t)c->r[0],0); // 802BB7D8
  if (crb(c,2)) { goto L_802BB7E8; } // 802BB7DC
  c->r[0]=c->r[6]+c->r[0]; // 802BB7E0
  goto L_802BB7EC; // 802BB7E4
L_802BB7E8:;
  c->r[0]=0u+0x00000000u; // 802BB7E8
L_802BB7EC:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BB7EC
L_802BB7F0:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BB7F0
  if (crb(c,2)) return; // 802BB7F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB7F8
  c->r[0]=R8(c->r[3]+0x0000001Du); // 802BB7FC
  W8(c->r[5]+0x00000000u,c->r[0]); // 802BB800
  return; // 802BB804
}

// SetArray__Q34nw4r3g3d12ResVtxFurPosFUs
void f_802BB808(Ctx* __restrict c) {
  trace_call(0x802BB808u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BB808
  cmps(c,0,(int32_t)c->r[6],0); // 802BB80C
  if (crb(c,2)) return; // 802BB810
  c->r[7]=R32(c->r[6]+0x00000008u); // 802BB814
  c->r[3]=0u+0x00000000u; // 802BB818
  c->r[5]=0u+0x00000000u; // 802BB81C
  cmps(c,0,(int32_t)c->r[7],0); // 802BB820
  if (crb(c,2)) { goto L_802BB838; } // 802BB824
  c->r[0]=R32(c->r[6]+0x00000020u); // 802BB828
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802BB82C
  if (!crb(c,0)) { goto L_802BB838; } // 802BB830
  c->r[5]=0u+0x00000001u; // 802BB834
L_802BB838:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BB838
  if (crb(c,2)) { goto L_802BB84C; } // 802BB83C
  cmps(c,0,(int32_t)c->r[4],0); // 802BB840
  if (crb(c,0)) { goto L_802BB84C; } // 802BB844
  c->r[3]=0u+0x00000001u; // 802BB848
L_802BB84C:;
  cmps(c,0,(int32_t)c->r[3],0); // 802BB84C
  c->r[3]=0u+0x00000009u; // 802BB850
  if (crb(c,2)) { goto L_802BB86C; } // 802BB854
  c->r[5]=R32(c->r[6]+0x00000024u); // 802BB858
  c->r[0]=c->r[6]+c->r[7]; // 802BB85C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[5]); // 802BB860
  c->r[4]=c->r[4]+c->r[0]; // 802BB864
  goto L_802BB870; // 802BB868
L_802BB86C:;
  c->r[4]=0u+0x00000000u; // 802BB86C
L_802BB870:;
  c->r[5]=R8(c->r[6]+0x0000001Du); // 802BB870
  f_80344D30(c); return; // 802BB874
  return; // 802BB878
}

// DCStore__Q34nw4r3g3d9ResVtxPosFb_802BB87C
void f_802BB87C(Ctx* __restrict c) {
  trace_call(0x802BB87Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB87C
  cmps(c,0,(int32_t)c->r[4],0); // 802BB880
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB884
  if (crb(c,2)) { goto L_802BB890; } // 802BB888
  f_80359BFC(c); return; // 802BB88C
L_802BB890:;
  f_80359C58(c); return; // 802BB890
}

// DCStore__Q34nw4r3g3d9ResVtxNrmFb_802BB894
void f_802BB894(Ctx* __restrict c) {
  trace_call(0x802BB894u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB894
  cmps(c,0,(int32_t)c->r[4],0); // 802BB898
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB89C
  if (crb(c,2)) { goto L_802BB8A8; } // 802BB8A0
  f_80359BFC(c); return; // 802BB8A4
L_802BB8A8:;
  f_80359C58(c); return; // 802BB8A8
}

// DCStore__Q34nw4r3g3d9ResVtxPosFb_802BB8AC
void f_802BB8AC(Ctx* __restrict c) {
  trace_call(0x802BB8ACu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB8AC
  cmps(c,0,(int32_t)c->r[4],0); // 802BB8B0
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB8B4
  if (crb(c,2)) { goto L_802BB8C0; } // 802BB8B8
  f_80359BFC(c); return; // 802BB8BC
L_802BB8C0:;
  f_80359C58(c); return; // 802BB8C0
}

// DCStore__Q34nw4r3g3d9ResVtxNrmFb_802BB8C4
void f_802BB8C4(Ctx* __restrict c) {
  trace_call(0x802BB8C4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB8C4
  cmps(c,0,(int32_t)c->r[4],0); // 802BB8C8
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB8CC
  if (crb(c,2)) { goto L_802BB8D8; } // 802BB8D0
  f_80359BFC(c); return; // 802BB8D4
L_802BB8D8:;
  f_80359C58(c); return; // 802BB8D8
}

// DCStore__Q34nw4r3g3d9ResVtxClrFb
void f_802BB8DC(Ctx* __restrict c) {
  trace_call(0x802BB8DCu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB8DC
  cmps(c,0,(int32_t)c->r[4],0); // 802BB8E0
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB8E4
  if (crb(c,2)) { goto L_802BB8F0; } // 802BB8E8
  f_80359BFC(c); return; // 802BB8EC
L_802BB8F0:;
  f_80359C58(c); return; // 802BB8F0
}

// DCStore__Q34nw4r3g3d14ResVtxTexCoordFb
void f_802BB8F4(Ctx* __restrict c) {
  trace_call(0x802BB8F4u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB8F4
  cmps(c,0,(int32_t)c->r[4],0); // 802BB8F8
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB8FC
  if (crb(c,2)) { goto L_802BB908; } // 802BB900
  f_80359BFC(c); return; // 802BB904
L_802BB908:;
  f_80359C58(c); return; // 802BB908
}

// DCStore__Q34nw4r3g3d7ResPlttFb
void f_802BB90C(Ctx* __restrict c) {
  trace_call(0x802BB90Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB90C
  cmps(c,0,(int32_t)c->r[4],0); // 802BB910
  c->r[4]=R32(c->r[3]+0x00000004u); // 802BB914
  if (crb(c,2)) { goto L_802BB920; } // 802BB918
  f_80359BFC(c); return; // 802BB91C
L_802BB920:;
  f_80359C58(c); return; // 802BB920
}

// GetTexObjParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP9_GXTexFmtPfPfPUc
void f_802BB924(Ctx* __restrict c) {
  trace_call(0x802BB924u);
  c->r[11]=R32(c->r[3]+0x00000000u); // 802BB924
  c->r[0]=R32(c->r[11]+0x00000018u); // 802BB928
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802BB92C
  if (crb(c,2)) { goto L_802BB93C; } // 802BB930
  c->r[3]=0u+0x00000000u; // 802BB934
  return; // 802BB938
L_802BB93C:;
  cmps(c,0,(int32_t)c->r[4],0); // 802BB93C
  if (crb(c,2)) { goto L_802BB960; } // 802BB940
  c->r[0]=R32(c->r[11]+0x00000010u); // 802BB944
  cmps(c,0,(int32_t)c->r[0],0); // 802BB948
  if (crb(c,2)) { goto L_802BB958; } // 802BB94C
  c->r[0]=c->r[11]+c->r[0]; // 802BB950
  goto L_802BB95C; // 802BB954
L_802BB958:;
  c->r[0]=0u+0x00000000u; // 802BB958
L_802BB95C:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BB95C
L_802BB960:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BB960
  if (crb(c,2)) { goto L_802BB974; } // 802BB964
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BB968
  c->r[0]=R16(c->r[4]+0x0000001Cu); // 802BB96C
  W16(c->r[5]+0x00000000u,c->r[0]); // 802BB970
L_802BB974:;
  cmps(c,0,(int32_t)c->r[6],0); // 802BB974
  if (crb(c,2)) { goto L_802BB988; } // 802BB978
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BB97C
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 802BB980
  W16(c->r[6]+0x00000000u,c->r[0]); // 802BB984
L_802BB988:;
  cmps(c,0,(int32_t)c->r[7],0); // 802BB988
  if (crb(c,2)) { goto L_802BB998; } // 802BB98C
  c->r[0]=R32(c->r[11]+0x00000020u); // 802BB990
  W32(c->r[7]+0x00000000u,c->r[0]); // 802BB994
L_802BB998:;
  cmps(c,0,(int32_t)c->r[8],0); // 802BB998
  if (crb(c,2)) { goto L_802BB9A8; } // 802BB99C
  {uint32_t ea=c->r[11]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BB9A0
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 802BB9A4
L_802BB9A8:;
  cmps(c,0,(int32_t)c->r[9],0); // 802BB9A8
  if (crb(c,2)) { goto L_802BB9B8; } // 802BB9AC
  {uint32_t ea=c->r[11]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BB9B0
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 802BB9B4
L_802BB9B8:;
  cmps(c,0,(int32_t)c->r[10],0); // 802BB9B8
  if (crb(c,2)) { goto L_802BB9D8; } // 802BB9BC
  c->r[3]=R32(c->r[11]+0x00000024u); // 802BB9C0
  c->r[0]=c->r[3]^0x00000001u; // 802BB9C4
  c->r[0]=cntlz(c->r[0]); // 802BB9C8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 802BB9CC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802BB9D0
  W8(c->r[10]+0x00000000u,c->r[0]); // 802BB9D4
L_802BB9D8:;
  c->r[3]=0u+0x00000001u; // 802BB9D8
  return; // 802BB9DC
}

// GetTexObjCIParam__Q34nw4r3g3d6ResTexCFPPvPUsPUsP11_GXCITexFmtPfPfPUc
void f_802BB9E0(Ctx* __restrict c) {
  trace_call(0x802BB9E0u);
  c->r[11]=R32(c->r[3]+0x00000000u); // 802BB9E0
  c->r[0]=R32(c->r[11]+0x00000018u); // 802BB9E4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802BB9E8
  if (!crb(c,2)) { goto L_802BB9F8; } // 802BB9EC
  c->r[3]=0u+0x00000000u; // 802BB9F0
  return; // 802BB9F4
L_802BB9F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802BB9F8
  if (crb(c,2)) { goto L_802BBA1C; } // 802BB9FC
  c->r[0]=R32(c->r[11]+0x00000010u); // 802BBA00
  cmps(c,0,(int32_t)c->r[0],0); // 802BBA04
  if (crb(c,2)) { goto L_802BBA14; } // 802BBA08
  c->r[0]=c->r[11]+c->r[0]; // 802BBA0C
  goto L_802BBA18; // 802BBA10
L_802BBA14:;
  c->r[0]=0u+0x00000000u; // 802BBA14
L_802BBA18:;
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BBA18
L_802BBA1C:;
  cmps(c,0,(int32_t)c->r[5],0); // 802BBA1C
  if (crb(c,2)) { goto L_802BBA30; } // 802BBA20
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BBA24
  c->r[0]=R16(c->r[4]+0x0000001Cu); // 802BBA28
  W16(c->r[5]+0x00000000u,c->r[0]); // 802BBA2C
L_802BBA30:;
  cmps(c,0,(int32_t)c->r[6],0); // 802BBA30
  if (crb(c,2)) { goto L_802BBA44; } // 802BBA34
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BBA38
  c->r[0]=R16(c->r[3]+0x0000001Eu); // 802BBA3C
  W16(c->r[6]+0x00000000u,c->r[0]); // 802BBA40
L_802BBA44:;
  cmps(c,0,(int32_t)c->r[7],0); // 802BBA44
  if (crb(c,2)) { goto L_802BBA54; } // 802BBA48
  c->r[0]=R32(c->r[11]+0x00000020u); // 802BBA4C
  W32(c->r[7]+0x00000000u,c->r[0]); // 802BBA50
L_802BBA54:;
  cmps(c,0,(int32_t)c->r[8],0); // 802BBA54
  if (crb(c,2)) { goto L_802BBA64; } // 802BBA58
  {uint32_t ea=c->r[11]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBA5C
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 802BBA60
L_802BBA64:;
  cmps(c,0,(int32_t)c->r[9],0); // 802BBA64
  if (crb(c,2)) { goto L_802BBA74; } // 802BBA68
  {uint32_t ea=c->r[11]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBA6C
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 802BBA70
L_802BBA74:;
  cmps(c,0,(int32_t)c->r[10],0); // 802BBA74
  if (crb(c,2)) { goto L_802BBA94; } // 802BBA78
  c->r[3]=R32(c->r[11]+0x00000024u); // 802BBA7C
  c->r[0]=c->r[3]^0x00000001u; // 802BBA80
  c->r[0]=cntlz(c->r[0]); // 802BBA84
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 802BBA88
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 802BBA8C
  W8(c->r[10]+0x00000000u,c->r[0]); // 802BBA90
L_802BBA94:;
  c->r[3]=0u+0x00000001u; // 802BBA94
  return; // 802BBA98
}

// Init__Q34nw4r3g3d6ResTexFv
void f_802BBA9C(Ctx* __restrict c) {
  trace_call(0x802BBA9Cu);
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BBA9C
  c->r[4]=R32(c->r[3]+0x00000004u); // 802BBAA0
  f_80359C2C(c); return; // 802BBAA4
}

// PatchChrAnmResult__Q34nw4r3g3d7ResNodeCFPQ34nw4r3g3d12ChrAnmResult
void f_802BBAA8(Ctx* __restrict c) {
  trace_call(0x802BBAA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BBAA8
  c->r[0]=c->lr; // 802BBAAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BBAB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BBAB4
  c->r[31]=R32(c->r[3]+0x00000000u); // 802BBAB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BBABC
  cmps(c,0,(int32_t)c->r[31],0); // 802BBAC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802BBAC4
  c->r[29]=c->r[4]|c->r[4]; // 802BBAC8
  if (crb(c,2)) { goto L_802BBBBC; } // 802BBACC
  c->r[30]=R32(c->r[4]+0x00000000u); // 802BBAD0
  c->r[0]=rotl(c->r[30],0)&0x00000080u; cr0(c,c->r[0]); // 802BBAD4
  if (crb(c,2)) { goto L_802BBB14; } // 802BBAD8
  c->r[3]=R32(c->r[31]+0x00000014u); // 802BBADC
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 802BBAE0
  if (crb(c,2)) { goto L_802BBAF0; } // 802BBAE4
  c->r[30]=c->r[30]|0x00000018u; // 802BBAE8
  goto L_802BBB14; // 802BBAEC
L_802BBAF0:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802BBAF0
  if (crb(c,2)) { goto L_802BBAFC; } // 802BBAF4
  c->r[30]=c->r[30]|0x00000010u; // 802BBAF8
L_802BBAFC:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBAFC
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802BBB00
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBB04
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802BBB08
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBB0C
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BBB10
L_802BBB14:;
  c->r[0]=rotl(c->r[30],0)&0x00000100u; cr0(c,c->r[0]); // 802BBB14
  if (crb(c,2)) { goto L_802BBB5C; } // 802BBB18
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BBB1C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802BBB20
  if (crb(c,2)) { goto L_802BBB30; } // 802BBB24
  c->r[30]=c->r[30]|0x00000020u; // 802BBB28
  goto L_802BBB58; // 802BBB2C
L_802BBB30:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BBB30
  c->r[3]=c->r[4]+0x0000001Cu; // 802BBB34
  {uint32_t ea=c->r[2]+0xFFFFAAD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBB38
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BBB3C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BBB40
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 802BBB44
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 802BBB48
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 802BBB4C
  c->lr=0x802BBB54u; f_8026CE94(c); // 802BBB50
  c->r[30]=rotl(c->r[30],0)&0xFFFFFFDFu; // 802BBB54
L_802BBB58:;
  c->r[30]=c->r[30]|0x80000000u; // 802BBB58
L_802BBB5C:;
  c->r[0]=rotl(c->r[30],0)&0x00000200u; cr0(c,c->r[0]); // 802BBB5C
  if (crb(c,2)) { goto L_802BBB94; } // 802BBB60
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BBB64
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802BBB68
  if (crb(c,2)) { goto L_802BBB78; } // 802BBB6C
  c->r[30]=c->r[30]|0x00000040u; // 802BBB70
  goto L_802BBB94; // 802BBB74
L_802BBB78:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBB78
  c->r[30]=rotl(c->r[30],0)&0xFFFFFFBFu; // 802BBB7C
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 802BBB80
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBB84
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 802BBB88
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBB8C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 802BBB90
L_802BBB94:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 802BBB94
  if (crb(c,2)) { goto L_802BBBB4; } // 802BBB98
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 802BBB9C
  if (crb(c,2)) { goto L_802BBBB4; } // 802BBBA0
  c->r[30]=c->r[30]|0x00000004u; // 802BBBA4
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 802BBBA8
  if (crb(c,2)) { goto L_802BBBB4; } // 802BBBAC
  c->r[30]=c->r[30]|0x00000002u; // 802BBBB0
L_802BBBB4:;
  c->r[0]=rotl(c->r[30],0)&0xFFFFFC7Fu; // 802BBBB4
  W32(c->r[29]+0x00000000u,c->r[0]); // 802BBBB8
L_802BBBBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BBBBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BBBC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BBBC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802BBBC8
  c->lr=c->r[0]; // 802BBBCC
  c->r[1]=c->r[1]+0x00000020u; // 802BBBD0
  return; // 802BBBD4
}

// CalcChrAnmResult__Q34nw4r3g3d7ResNodeCFPQ34nw4r3g3d12ChrAnmResult
void f_802BBBD8(Ctx* __restrict c) {
  trace_call(0x802BBBD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BBBD8
  c->r[0]=c->lr; // 802BBBDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BBBE0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802BBBE4
  c->r[31]=R32(c->r[3]+0x00000000u); // 802BBBE8
  W32(c->r[1]+0x00000028u,c->r[30]); // 802BBBEC
  cmps(c,0,(int32_t)c->r[31],0); // 802BBBF0
  W32(c->r[1]+0x00000024u,c->r[29]); // 802BBBF4
  c->r[29]=c->r[4]|c->r[4]; // 802BBBF8
  if (crb(c,2)) { goto L_802BBD24; } // 802BBBFC
  c->r[3]=R32(c->r[31]+0x00000014u); // 802BBC00
  c->r[30]=0u+0x00000000u; // 802BBC04
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 802BBC08
  if (crb(c,2)) { goto L_802BBC28; } // 802BBC0C
  {uint32_t ea=c->r[2]+0xFFFFAAD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBC10
  c->r[30]=c->r[30]|0x00000018u; // 802BBC14
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BBC18
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802BBC1C
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802BBC20
  goto L_802BBC4C; // 802BBC24
L_802BBC28:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802BBC28
  if (crb(c,2)) { goto L_802BBC34; } // 802BBC2C
  c->r[30]=c->r[30]|0x00000010u; // 802BBC30
L_802BBC34:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBC34
  {uint32_t ea=c->r[4]+0x00000004u; WF32(ea,c->f[0]);} // 802BBC38
  {uint32_t ea=c->r[31]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBC3C
  {uint32_t ea=c->r[4]+0x00000008u; WF32(ea,c->f[0]);} // 802BBC40
  {uint32_t ea=c->r[31]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBC44
  {uint32_t ea=c->r[4]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BBC48
L_802BBC4C:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BBC4C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802BBC50
  if (crb(c,2)) { goto L_802BBC68; } // 802BBC54
  c->r[3]=c->r[4]+0x0000001Cu; // 802BBC58
  c->lr=0x802BBC60u; f_80353594(c); // 802BBC5C
  c->r[30]=c->r[30]|0x00000020u; // 802BBC60
  goto L_802BBCB0; // 802BBC64
L_802BBC68:;
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BBC68
  c->r[3]=c->r[4]+0x0000001Cu; // 802BBC6C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 802BBC70
  {uint32_t ea=c->r[31]+0x00000034u; c->f[4]=c->ps1[4]=RF32(ea);} // 802BBC74
  {uint32_t ea=c->r[2]+0xFFFFAAD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBC78
  {uint32_t ea=c->r[4]+0x00000010u; WF32(ea,c->f[1]);} // 802BBC7C
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[5]);} // 802BBC80
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[4]);} // 802BBC84
  {uint32_t ea=c->r[31]+0x00000034u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BBC88
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BBC8C
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 802BBC90
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 802BBC94
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 802BBC98
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 802BBC9C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[6]); // 802BBCA0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[5]);} // 802BBCA4
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 802BBCA8
  c->lr=0x802BBCB0u; f_8026CE94(c); // 802BBCAC
L_802BBCB0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BBCB0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802BBCB4
  if (crb(c,2)) { goto L_802BBCC4; } // 802BBCB8
  c->r[30]=c->r[30]|0x00000040u; // 802BBCBC
  goto L_802BBCDC; // 802BBCC0
L_802BBCC4:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBCC4
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 802BBCC8
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBCCC
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 802BBCD0
  {uint32_t ea=c->r[31]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBCD4
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 802BBCD8
L_802BBCDC:;
  c->r[0]=rotl(c->r[30],0)&0x00000020u; cr0(c,c->r[0]); // 802BBCDC
  if (crb(c,2)) { goto L_802BBCFC; } // 802BBCE0
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 802BBCE4
  if (crb(c,2)) { goto L_802BBCFC; } // 802BBCE8
  c->r[30]=c->r[30]|0x00000004u; // 802BBCEC
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 802BBCF0
  if (crb(c,2)) { goto L_802BBCFC; } // 802BBCF4
  c->r[30]=c->r[30]|0x00000002u; // 802BBCF8
L_802BBCFC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802BBCFC
  c->r[30]=c->r[30]|0x80000000u; // 802BBD00
  c->r[30]=c->r[30]|0x00000001u; // 802BBD04
  c->r[0]=rotl(c->r[3],0)&0x00000020u; cr0(c,c->r[0]); // 802BBD08
  if (crb(c,2)) { goto L_802BBD14; } // 802BBD0C
  c->r[30]=c->r[30]|0x00000400u; // 802BBD10
L_802BBD14:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 802BBD14
  if (crb(c,2)) { goto L_802BBD20; } // 802BBD18
  c->r[30]=c->r[30]|0x00000800u; // 802BBD1C
L_802BBD20:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 802BBD20
L_802BBD24:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BBD24
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802BBD28
  c->r[30]=R32(c->r[1]+0x00000028u); // 802BBD2C
  c->r[29]=R32(c->r[1]+0x00000024u); // 802BBD30
  c->lr=c->r[0]; // 802BBD34
  c->r[1]=c->r[1]+0x00000030u; // 802BBD38
  return; // 802BBD3C
}

// GetResKeyFrameAnmResult__Q34nw4r3g3d6detailFPCQ34nw4r3g3d18ResKeyFrameAnmDataf
void f_802BBD40(Ctx* __restrict c) {
  trace_call(0x802BBD40u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 802BBD40
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BBD44
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 802BBD48
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BBD4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802BBD50
  fcmp(c,0,c->f[1],c->f[2]); // 802BBD54
  c->r[4]=c->r[3]+c->r[0]; // 802BBD58
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BBD5C
  if (!crb(c,2)) { goto L_802BBD6C; } // 802BBD60
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BBD64
  goto L_802BBE64; // 802BBD68
L_802BBD6C:;
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBD6C
  fcmp(c,0,c->f[0],c->f[1]); // 802BBD70
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BBD74
  if (!crb(c,2)) { goto L_802BBD84; } // 802BBD78
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BBD7C
  goto L_802BBE64; // 802BBD80
L_802BBD84:;
  W16(c->r[1]+0x00000008u,c->r[5]); // 802BBD84
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 802BBD88
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 802BBD8C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBD90
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802BBD94
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802BBD98
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 802BBD9C
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 802BBDA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802BBDA4
  c->r[3]=c->r[3]+c->r[0]; // 802BBDA8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802BBDAC
  fcmp(c,0,c->f[1],c->f[0]); // 802BBDB0
  if (!crb(c,0)) { goto L_802BBDC8; } // 802BBDB4
L_802BBDB8:;
  {uint32_t ea=c->r[3]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802BBDB8
  fcmp(c,0,c->f[1],c->f[0]); // 802BBDBC
  if (crb(c,0)) { IRQCHK(c); goto L_802BBDB8; } // 802BBDC0
  goto L_802BBDDC; // 802BBDC4
L_802BBDC8:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802BBDC8
  fcmp(c,0,c->f[0],c->f[1]); // 802BBDCC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BBDD0
  if (crb(c,2)) { IRQCHK(c); goto L_802BBDC8; } // 802BBDD4
  c->r[3]=c->r[3]+0xFFFFFFF4u; // 802BBDD8
L_802BBDDC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BBDDC
  fcmp(c,0,c->f[3],c->f[1]); // 802BBDE0
  if (!crb(c,2)) { goto L_802BBDF0; } // 802BBDE4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BBDE8
  goto L_802BBE64; // 802BBDEC
L_802BBDF0:;
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802BBDF0
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 802BBDF4
  {uint32_t ea=c->r[2]+0xFFFFAADCu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBDF8
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[3]); // 802BBDFC
  {uint32_t ea=c->r[3]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BBE00
  {uint32_t ea=c->r[3]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 802BBE04
  {uint32_t ea=c->r[2]+0xFFFFAAE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BBE08
  c->f[8]=c->ps1[8]=fres(c->f[11]); // 802BBE0C
  {uint32_t ea=c->r[2]+0xFFFFAAD8u; c->f[4]=c->ps1[4]=RF32(ea);} // 802BBE10
  {uint32_t ea=c->r[3]+0x00000014u; c->f[7]=c->ps1[7]=RF32(ea);} // 802BBE14
  {uint32_t ea=c->r[3]+0x00000008u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BBE18
  {double t0=S(c->f[8]+c->f[8]), t1=S(c->ps1[8]+c->ps1[8]); c->f[9]=t0; c->ps1[9]=t1;} // 802BBE1C
  {double t0=S(c->f[8]*c->f[8]), t1=S(c->ps1[8]*c->ps1[8]); c->f[8]=t0; c->ps1[8]=t1;} // 802BBE20
  c->f[3]=c->ps1[3]=S(c->f[5]-c->f[2]); // 802BBE24
  {double t0=S(-std::fma(c->f[11],c->f[8],-c->f[9])), t1=S(-std::fma(c->ps1[11],c->ps1[8],-c->ps1[9])); c->f[8]=t0; c->ps1[8]=t1;} // 802BBE28
  c->f[9]=c->ps1[9]=S(c->f[10]*c->f[8]); // 802BBE2C
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[9]); // 802BBE30
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[4]); // 802BBE34
  c->f[0]=c->ps1[0]=S(c->f[9]*c->f[7]); // 802BBE38
  c->f[4]=c->ps1[4]=S(c->f[2]-c->f[1]); // 802BBE3C
  c->f[1]=c->ps1[1]=S(c->f[8]*c->f[6]); // 802BBE40
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[8]); // 802BBE44
  c->f[3]=c->ps1[3]=S(c->f[4]*c->f[3]); // 802BBE48
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 802BBE4C
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[3]); // 802BBE50
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 802BBE54
  c->f[1]=c->ps1[1]=S(c->f[9]*c->f[1]); // 802BBE58
  c->f[1]=c->ps1[1]=S(c->f[5]+c->f[1]); // 802BBE5C
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 802BBE60
L_802BBE64:;
  c->r[1]=c->r[1]+0x00000010u; // 802BBE64
  return; // 802BBE68
}

// GetResColorAnmResult__Q34nw4r3g3d6detailFPCQ34nw4r3g3d21ResColorAnmFramesDataf
void f_802BBE6C(Ctx* __restrict c) {
  trace_call(0x802BBE6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BBE6C
  c->r[0]=c->lr; // 802BBE70
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BBE74
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802BBE78
  c->r[31]=c->r[3]|c->r[3]; // 802BBE7C
  c->r[3]=c->r[1]+0x00000018u; // 802BBE80
  c->lr=0x802BBE88u; f_802EFD98(c); // 802BBE84
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 802BBE88
  c->f[1]=c->ps1[1]=S(c->f[1]); // 802BBE8C
  {uint32_t ea=c->r[2]+0xFFFFAAE4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBE90
  c->f[2]=c->ps1[2]=S(c->f[2]); // 802BBE94
  fcmp(c,0,c->f[0],c->f[1]); // 802BBE98
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 802BBE9C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 802BBEA0
  c->r[3]=R32(c->r[1]+0x00000024u); // 802BBEA4
  if (!crb(c,2)) { goto L_802BBEB8; } // 802BBEA8
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802BBEAC
  c->r[3]=R32(c->r[31]+c->r[0]); // 802BBEB0
  goto L_802BBF58; // 802BBEB4
L_802BBEB8:;
  c->r[0]=c->r[3]+0x00000001u; // 802BBEB8
  {uint32_t ea=c->r[2]+0xFFFFAAE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBEBC
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802BBEC0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802BBEC4
  c->r[3]=R32(c->r[31]+c->r[3]); // 802BBEC8
  c->r[0]=R32(c->r[31]+c->r[0]); // 802BBECC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 802BBED0
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BBED4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BBED8
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,0,ea,1,5);} // 802BBEDC
  c->r[10]=R8(c->r[1]+0x00000014u); // 802BBEE0
  c->r[0]=R8(c->r[1]+0x00000010u); // 802BBEE4
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 802BBEE8
  c->r[3]=c->r[0]-c->r[10]; // 802BBEEC
  c->r[7]=R8(c->r[1]+0x00000015u); // 802BBEF0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 802BBEF4
  c->r[0]=R8(c->r[1]+0x00000011u); // 802BBEF8
  c->r[8]=R8(c->r[1]+0x00000016u); // 802BBEFC
  c->r[4]=c->r[0]-c->r[7]; // 802BBF00
  c->r[3]=R8(c->r[1]+0x00000012u); // 802BBF04
  c->r[9]=R8(c->r[1]+0x00000017u); // 802BBF08
  c->r[0]=R8(c->r[1]+0x00000013u); // 802BBF0C
  c->r[3]=c->r[3]-c->r[8]; // 802BBF10
  c->r[5]=sraw(c,c->r[5],15); // 802BBF14
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[4]); // 802BBF18
  c->r[0]=c->r[0]-c->r[9]; // 802BBF1C
  c->r[5]=c->r[10]+c->r[5]; // 802BBF20
  W8(c->r[1]+0x0000000Cu,c->r[5]); // 802BBF24
  c->r[4]=sraw(c,c->r[4],15); // 802BBF28
  c->r[3]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[3]); // 802BBF2C
  c->r[4]=c->r[7]+c->r[4]; // 802BBF30
  W8(c->r[1]+0x0000000Du,c->r[4]); // 802BBF34
  c->r[3]=sraw(c,c->r[3],15); // 802BBF38
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)c->r[0]); // 802BBF3C
  c->r[3]=c->r[8]+c->r[3]; // 802BBF40
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 802BBF44
  c->r[0]=sraw(c,c->r[0],15); // 802BBF48
  c->r[0]=c->r[9]+c->r[0]; // 802BBF4C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 802BBF50
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 802BBF54
L_802BBF58:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BBF58
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802BBF5C
  c->lr=c->r[0]; // 802BBF60
  c->r[1]=c->r[1]+0x00000030u; // 802BBF64
  return; // 802BBF68
}

// GetAnmResult__Q34nw4r3g3d9ResAnmVisCFUlf
void f_802BBF6C(Ctx* __restrict c) {
  trace_call(0x802BBF6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BBF6C
  c->r[0]=c->lr; // 802BBF70
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BBF74
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BBF78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BBF7C
  c->r[0]=R32(c->r[5]+0x00000010u); // 802BBF80
  cmps(c,0,(int32_t)c->r[0],0); // 802BBF84
  if (crb(c,2)) { goto L_802BBF94; } // 802BBF88
  c->r[0]=c->r[5]+c->r[0]; // 802BBF8C
  goto L_802BBF98; // 802BBF90
L_802BBF94:;
  c->r[0]=0u+0x00000000u; // 802BBF94
L_802BBF98:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BBF98
  if (crb(c,2)) { goto L_802BBFC8; } // 802BBF9C
  c->r[4]=c->r[4]+0x00000001u; // 802BBFA0
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 802BBFA4
  c->r[4]=c->r[0]+c->r[4]; // 802BBFA8
  c->r[4]=R32(c->r[4]+0x00000014u); // 802BBFAC
  cmps(c,0,(int32_t)c->r[4],0); // 802BBFB0
  if (crb(c,2)) { goto L_802BBFC0; } // 802BBFB4
  c->r[31]=c->r[0]+c->r[4]; // 802BBFB8
  goto L_802BBFCC; // 802BBFBC
L_802BBFC0:;
  c->r[31]=0u+0x00000000u; // 802BBFC0
  goto L_802BBFCC; // 802BBFC4
L_802BBFC8:;
  c->r[31]=0u+0x00000000u; // 802BBFC8
L_802BBFCC:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 802BBFCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BBFD0
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 802BBFD4
  if (crb(c,2)) { goto L_802BBFE4; } // 802BBFD8
  c->r[3]=rotl(c->r[4],0)&0x00000001u; // 802BBFDC
  goto L_802BC078; // 802BBFE0
L_802BBFE4:;
  {uint32_t ea=c->r[2]+0xFFFFAAF0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BBFE4
  fcmp(c,0,c->f[1],c->f[0]); // 802BBFE8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BBFEC
  if (!crb(c,2)) { goto L_802BBFF8; } // 802BBFF0
  goto L_802BC038; // 802BBFF4
L_802BBFF8:;
  c->r[3]=R16(c->r[3]+0x0000001Cu); // 802BBFF8
  c->r[0]=0u+0x43300000u; // 802BBFFC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BC000
  {uint32_t ea=c->r[2]+0xFFFFAAF8u; c->f[2]=RF64(ea);} // 802BC004
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BC008
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802BC00C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BC010
  fcmp(c,0,c->f[0],c->f[1]); // 802BC014
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BC018
  if (!crb(c,2)) { goto L_802BC034; } // 802BC01C
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BC020
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BC024
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BC028
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BC02C
  goto L_802BC038; // 802BC030
L_802BC034:;
  c->f[0]=c->f[1]; // 802BC034
L_802BC038:;
  c->f[1]=c->f[0]; // 802BC038
  c->lr=0x802BC040u; f_802EFA60(c); // 802BC03C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 802BC040
  c->r[3]=0u+0x80000000u; // 802BC044
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802BC048
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802BC04C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BC050
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 802BC054
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 802BC058
  c->r[4]=c->r[31]+c->r[4]; // 802BC05C
  c->r[4]=R32(c->r[4]+0x00000008u); // 802BC060
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 802BC064
  c->r[3]=c->r[4]&c->r[0]; // 802BC068
  c->r[0]=0u-c->r[3]; // 802BC06C
  c->r[0]=c->r[0]|c->r[3]; // 802BC070
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802BC074
L_802BC078:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BC078
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BC07C
  c->lr=c->r[0]; // 802BC080
  c->r[1]=c->r[1]+0x00000020u; // 802BC084
  return; // 802BC088
}

// GetAnmResult__Q34nw4r3g3d9ResAnmClrCFPQ34nw4r3g3d12ClrAnmResultUlf
void f_802BC08C(Ctx* __restrict c) {
  trace_call(0x802BC08Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BC08C
  c->r[0]=c->lr; // 802BC090
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BC094
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802BC098
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802BC09C
  c->r[11]=c->r[1]+0x00000030u; // 802BC0A0
  c->lr=0x802BC0A8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BC0A4
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BC0A8
  c->r[30]=c->r[4]|c->r[4]; // 802BC0AC
  c->r[0]=R32(c->r[6]+0x00000010u); // 802BC0B0
  cmps(c,0,(int32_t)c->r[0],0); // 802BC0B4
  if (crb(c,2)) { goto L_802BC0C4; } // 802BC0B8
  c->r[0]=c->r[6]+c->r[0]; // 802BC0BC
  goto L_802BC0C8; // 802BC0C0
L_802BC0C4:;
  c->r[0]=0u+0x00000000u; // 802BC0C4
L_802BC0C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BC0C8
  if (crb(c,2)) { goto L_802BC0F8; } // 802BC0CC
  c->r[5]=c->r[5]+0x00000001u; // 802BC0D0
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 802BC0D4
  c->r[5]=c->r[0]+c->r[5]; // 802BC0D8
  c->r[5]=R32(c->r[5]+0x00000014u); // 802BC0DC
  cmps(c,0,(int32_t)c->r[5],0); // 802BC0E0
  if (crb(c,2)) { goto L_802BC0F0; } // 802BC0E4
  c->r[5]=c->r[0]+c->r[5]; // 802BC0E8
  goto L_802BC0FC; // 802BC0EC
L_802BC0F0:;
  c->r[5]=0u+0x00000000u; // 802BC0F0
  goto L_802BC0FC; // 802BC0F4
L_802BC0F8:;
  c->r[5]=0u+0x00000000u; // 802BC0F8
L_802BC0FC:;
  c->r[31]=R32(c->r[5]+0x00000004u); // 802BC0FC
  c->r[0]=0u+0x00000000u; // 802BC100
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BC104
  c->r[27]=c->r[5]+0x00000008u; // 802BC108
  cmps(c,0,(int32_t)c->r[31],0); // 802BC10C
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BC110
  if (crb(c,2)) { goto L_802BC1D8; } // 802BC114
  {uint32_t ea=c->r[2]+0xFFFFAB00u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BC118
  fcmp(c,0,c->f[1],c->f[31]); // 802BC11C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BC120
  if (!crb(c,2)) { goto L_802BC12C; } // 802BC124
  goto L_802BC16C; // 802BC128
L_802BC12C:;
  c->r[3]=R16(c->r[3]+0x0000001Cu); // 802BC12C
  c->r[0]=0u+0x43300000u; // 802BC130
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BC134
  {uint32_t ea=c->r[2]+0xFFFFAB08u; c->f[2]=RF64(ea);} // 802BC138
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BC13C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802BC140
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BC144
  fcmp(c,0,c->f[0],c->f[1]); // 802BC148
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BC14C
  if (!crb(c,2)) { goto L_802BC168; } // 802BC150
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BC154
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BC158
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BC15C
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 802BC160
  goto L_802BC16C; // 802BC164
L_802BC168:;
  c->f[31]=c->f[1]; // 802BC168
L_802BC16C:;
  c->r[28]=c->r[30]|c->r[30]; // 802BC16C
  c->r[26]=0u+0x00000000u; // 802BC170
  c->r[29]=0u+0x00000001u; // 802BC174
L_802BC178:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 802BC178
  if (crb(c,2)) { goto L_802BC1C4; } // 802BC17C
  c->r[4]=R32(c->r[30]+0x00000000u); // 802BC180
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802BC184
  c->r[3]=((c->r[26])&0x20)?0u:(c->r[29]<<((c->r[26])&31)); // 802BC188
  c->r[0]=c->r[4]|c->r[3]; // 802BC18C
  W32(c->r[30]+0x00000000u,c->r[0]); // 802BC190
  c->r[0]=R32(c->r[27]+0x00000000u); // 802BC194
  W32(c->r[28]+0x00000030u,c->r[0]); // 802BC198
  if (crb(c,2)) { goto L_802BC1A8; } // 802BC19C
  c->r[3]=R32(c->r[27]+0x00000004u); // 802BC1A0
  goto L_802BC1BC; // 802BC1A4
L_802BC1A8:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 802BC1A8
  c->f[1]=c->f[31]; // 802BC1AC
  c->r[3]=c->r[27]+c->r[0]; // 802BC1B0
  c->r[3]=c->r[3]+0x00000004u; // 802BC1B4
  c->lr=0x802BC1BCu; f_802BBE6C(c); // 802BC1B8
L_802BC1BC:;
  W32(c->r[28]+0x00000004u,c->r[3]); // 802BC1BC
  c->r[27]=c->r[27]+0x00000008u; // 802BC1C0
L_802BC1C4:;
  c->r[26]=c->r[26]+0x00000001u; // 802BC1C4
  c->r[31]=rotl(c->r[31],30)&0x3FFFFFFFu; // 802BC1C8
  cmps(c,0,(int32_t)c->r[26],11); // 802BC1CC
  c->r[28]=c->r[28]+0x00000004u; // 802BC1D0
  if (crb(c,0)) { IRQCHK(c); goto L_802BC178; } // 802BC1D4
L_802BC1D8:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802BC1D8
  c->r[11]=c->r[1]+0x00000030u; // 802BC1DC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802BC1E0
  c->lr=0x802BC1E8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BC1E4
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BC1E8
  c->lr=c->r[0]; // 802BC1EC
  c->r[1]=c->r[1]+0x00000040u; // 802BC1F0
  return; // 802BC1F4
}

// SearchFrame__Q34nw4r3g3d30@unnamed@g3d_resanmtexpat_cpp@FPCQ34nw4r3g3d19ResAnmTexPatAnmDataf
void f_802BC1F8(Ctx* __restrict c) {
  trace_call(0x802BC1F8u);
  c->r[5]=R16(c->r[3]+0x00000000u); // 802BC1F8
  c->r[6]=c->r[3]+0x00000008u; // 802BC1FC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BC200
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 802BC204
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BC208
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802BC20C
  fcmp(c,0,c->f[1],c->f[2]); // 802BC210
  c->r[4]=c->r[3]+c->r[0]; // 802BC214
  c->r[4]=c->r[4]+0x00000008u; // 802BC218
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BC21C
  if (!crb(c,2)) { goto L_802BC22C; } // 802BC220
  c->r[3]=c->r[6]|c->r[6]; // 802BC224
  goto L_802BC29C; // 802BC228
L_802BC22C:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BC22C
  fcmp(c,0,c->f[0],c->f[1]); // 802BC230
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BC234
  if (!crb(c,2)) { goto L_802BC244; } // 802BC238
  c->r[3]=c->r[4]|c->r[4]; // 802BC23C
  goto L_802BC29C; // 802BC240
L_802BC244:;
  W16(c->r[1]+0x00000008u,c->r[5]); // 802BC244
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 802BC248
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 802BC24C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BC250
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802BC254
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802BC258
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 802BC25C
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 802BC260
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 802BC264
  c->r[3]=c->r[3]+c->r[0]; // 802BC268
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802BC26C
  fcmp(c,0,c->f[1],c->f[0]); // 802BC270
  if (!crb(c,0)) { goto L_802BC288; } // 802BC274
L_802BC278:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802BC278
  fcmp(c,0,c->f[1],c->f[0]); // 802BC27C
  if (crb(c,0)) { IRQCHK(c); goto L_802BC278; } // 802BC280
  goto L_802BC29C; // 802BC284
L_802BC288:;
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea); c->r[3]=ea;} // 802BC288
  fcmp(c,0,c->f[0],c->f[1]); // 802BC28C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BC290
  if (crb(c,2)) { IRQCHK(c); goto L_802BC288; } // 802BC294
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 802BC298
L_802BC29C:;
  c->r[1]=c->r[1]+0x00000010u; // 802BC29C
  return; // 802BC2A0
}

// GetAnmResult__Q34nw4r3g3d12ResAnmTexPatCFPQ34nw4r3g3d15TexPatAnmResultUlf
void f_802BC2A4(Ctx* __restrict c) {
  trace_call(0x802BC2A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BC2A4
  c->r[0]=c->lr; // 802BC2A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BC2AC
  c->r[11]=c->r[1]+0x00000038u; // 802BC2B0
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[31]);} // 802BC2B4
  c->lr=0x802BC2BCu; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BC2B8
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BC2BC
  c->f[31]=c->f[1]; // 802BC2C0
  c->r[24]=c->r[4]|c->r[4]; // 802BC2C4
  c->r[0]=R32(c->r[6]+0x00000010u); // 802BC2C8
  cmps(c,0,(int32_t)c->r[0],0); // 802BC2CC
  if (crb(c,2)) { goto L_802BC2DC; } // 802BC2D0
  c->r[0]=c->r[6]+c->r[0]; // 802BC2D4
  goto L_802BC2E0; // 802BC2D8
L_802BC2DC:;
  c->r[0]=0u+0x00000000u; // 802BC2DC
L_802BC2E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BC2E0
  if (crb(c,2)) { goto L_802BC310; } // 802BC2E4
  c->r[5]=c->r[5]+0x00000001u; // 802BC2E8
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 802BC2EC
  c->r[5]=c->r[0]+c->r[5]; // 802BC2F0
  c->r[5]=R32(c->r[5]+0x00000014u); // 802BC2F4
  cmps(c,0,(int32_t)c->r[5],0); // 802BC2F8
  if (crb(c,2)) { goto L_802BC308; } // 802BC2FC
  c->r[31]=c->r[0]+c->r[5]; // 802BC300
  goto L_802BC314; // 802BC304
L_802BC308:;
  c->r[31]=0u+0x00000000u; // 802BC308
  goto L_802BC314; // 802BC30C
L_802BC310:;
  c->r[31]=0u+0x00000000u; // 802BC310
L_802BC314:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BC314
  c->r[27]=c->r[31]+0x00000008u; // 802BC318
  c->r[26]=R32(c->r[31]+0x00000004u); // 802BC31C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802BC320
  cmps(c,0,(int32_t)c->r[0],0); // 802BC324
  if (crb(c,2)) { goto L_802BC334; } // 802BC328
  c->r[30]=c->r[3]+c->r[0]; // 802BC32C
  goto L_802BC338; // 802BC330
L_802BC334:;
  c->r[30]=0u+0x00000000u; // 802BC334
L_802BC338:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 802BC338
  cmps(c,0,(int32_t)c->r[0],0); // 802BC33C
  if (crb(c,2)) { goto L_802BC34C; } // 802BC340
  c->r[29]=c->r[3]+c->r[0]; // 802BC344
  goto L_802BC350; // 802BC348
L_802BC34C:;
  c->r[29]=0u+0x00000000u; // 802BC34C
L_802BC350:;
  c->r[0]=0u+0x00000000u; // 802BC350
  c->r[28]=c->r[24]|c->r[24]; // 802BC354
  W8(c->r[4]+0x00000000u,c->r[0]); // 802BC358
  c->r[25]=0u+0x00000000u; // 802BC35C
  c->r[23]=0u+0x00000001u; // 802BC360
  W8(c->r[4]+0x00000001u,c->r[0]); // 802BC364
L_802BC368:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 802BC368
  if (crb(c,2)) { goto L_802BC3F4; } // 802BC36C
  c->r[0]=rotl(c->r[26],0)&0x00000002u; cr0(c,c->r[0]); // 802BC370
  if (crb(c,2)) { goto L_802BC384; } // 802BC374
  c->r[4]=R16(c->r[27]+0x00000000u); // 802BC378
  c->r[3]=R16(c->r[27]+0x00000002u); // 802BC37C
  goto L_802BC39C; // 802BC380
L_802BC384:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802BC384
  c->f[1]=c->f[31]; // 802BC388
  c->r[3]=c->r[0]+c->r[31]; // 802BC38C
  c->lr=0x802BC394u; f_802BC1F8(c); // 802BC390
  c->r[4]=R16(c->r[3]+0x00000004u); // 802BC394
  c->r[3]=R16(c->r[3]+0x00000006u); // 802BC398
L_802BC39C:;
  c->r[0]=rotl(c->r[26],0)&0x00000004u; cr0(c,c->r[0]); // 802BC39C
  c->r[5]=((c->r[25])&0x20)?0u:(c->r[23]<<((c->r[25])&31)); // 802BC3A0
  if (crb(c,2)) { goto L_802BC3C8; } // 802BC3A4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 802BC3A8
  c->r[0]=R32(c->r[30]+c->r[0]); // 802BC3AC
  cmps(c,0,(int32_t)c->r[0],0); // 802BC3B0
  if (crb(c,2)) { goto L_802BC3C8; } // 802BC3B4
  W32(c->r[28]+0x00000004u,c->r[0]); // 802BC3B8
  c->r[0]=R8(c->r[24]+0x00000000u); // 802BC3BC
  c->r[0]=c->r[0]|c->r[5]; // 802BC3C0
  W8(c->r[24]+0x00000000u,c->r[0]); // 802BC3C4
L_802BC3C8:;
  c->r[0]=rotl(c->r[26],0)&0x00000008u; cr0(c,c->r[0]); // 802BC3C8
  if (crb(c,2)) { goto L_802BC3F0; } // 802BC3CC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 802BC3D0
  c->r[0]=R32(c->r[29]+c->r[0]); // 802BC3D4
  cmps(c,0,(int32_t)c->r[0],0); // 802BC3D8
  if (crb(c,2)) { goto L_802BC3F0; } // 802BC3DC
  W32(c->r[28]+0x00000024u,c->r[0]); // 802BC3E0
  c->r[0]=R8(c->r[24]+0x00000001u); // 802BC3E4
  c->r[0]=c->r[0]|c->r[5]; // 802BC3E8
  W8(c->r[24]+0x00000001u,c->r[0]); // 802BC3EC
L_802BC3F0:;
  c->r[27]=c->r[27]+0x00000004u; // 802BC3F0
L_802BC3F4:;
  c->r[25]=c->r[25]+0x00000001u; // 802BC3F4
  c->r[26]=rotl(c->r[26],28)&0x0FFFFFFFu; // 802BC3F8
  cmps(c,0,(int32_t)c->r[25],8); // 802BC3FC
  c->r[28]=c->r[28]+0x00000004u; // 802BC400
  if (crb(c,0)) { IRQCHK(c); goto L_802BC368; } // 802BC404
  c->r[11]=c->r[1]+0x00000038u; // 802BC408
  {uint32_t ea=c->r[1]+0x00000038u; c->f[31]=RF64(ea);} // 802BC40C
  c->lr=0x802BC414u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BC410
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BC414
  c->lr=c->r[0]; // 802BC418
  c->r[1]=c->r[1]+0x00000040u; // 802BC41C
  return; // 802BC420
}

// Bind__Q34nw4r3g3d12ResAnmTexPatFQ34nw4r3g3d7ResFile
void f_802BC424(Ctx* __restrict c) {
  trace_call(0x802BC424u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BC424
  c->r[0]=c->lr; // 802BC428
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BC42C
  c->r[11]=c->r[1]+0x00000040u; // 802BC430
  c->lr=0x802BC438u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BC434
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BC438
  c->r[28]=c->r[4]|c->r[4]; // 802BC43C
  c->r[0]=R32(c->r[3]+0x00000014u); // 802BC440
  c->r[31]=R16(c->r[3]+0x00000030u); // 802BC444
  cmps(c,0,(int32_t)c->r[0],0); // 802BC448
  c->r[30]=R16(c->r[3]+0x00000032u); // 802BC44C
  if (crb(c,2)) { goto L_802BC45C; } // 802BC450
  c->r[27]=c->r[3]+c->r[0]; // 802BC454
  goto L_802BC460; // 802BC458
L_802BC45C:;
  c->r[27]=0u+0x00000000u; // 802BC45C
L_802BC460:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 802BC460
  cmps(c,0,(int32_t)c->r[0],0); // 802BC464
  if (crb(c,2)) { goto L_802BC474; } // 802BC468
  c->r[26]=c->r[3]+c->r[0]; // 802BC46C
  goto L_802BC478; // 802BC470
L_802BC474:;
  c->r[26]=0u+0x00000000u; // 802BC474
L_802BC478:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802BC478
  cmps(c,0,(int32_t)c->r[0],0); // 802BC47C
  if (crb(c,2)) { goto L_802BC48C; } // 802BC480
  c->r[24]=c->r[3]+c->r[0]; // 802BC484
  goto L_802BC490; // 802BC488
L_802BC48C:;
  c->r[24]=0u+0x00000000u; // 802BC48C
L_802BC490:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 802BC490
  cmps(c,0,(int32_t)c->r[0],0); // 802BC494
  if (crb(c,2)) { goto L_802BC4A4; } // 802BC498
  c->r[25]=c->r[3]+c->r[0]; // 802BC49C
  goto L_802BC4A8; // 802BC4A0
L_802BC4A4:;
  c->r[25]=0u+0x00000000u; // 802BC4A4
L_802BC4A8:;
  c->r[23]=c->r[27]|c->r[27]; // 802BC4A8
  c->r[29]=0u+0x00000000u; // 802BC4AC
  c->r[22]=0u+0x00000000u; // 802BC4B0
  goto L_802BC504; // 802BC4B4
L_802BC4B8:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 802BC4B8
  cmps(c,0,(int32_t)c->r[0],0); // 802BC4BC
  if (crb(c,2)) { goto L_802BC4CC; } // 802BC4C0
  c->r[29]=c->r[29]+0x00000001u; // 802BC4C4
  goto L_802BC4F8; // 802BC4C8
L_802BC4CC:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 802BC4CC
  c->r[3]=c->r[28]|c->r[28]; // 802BC4D0
  c->r[4]=c->r[1]+0x0000000Cu; // 802BC4D4
  c->r[5]=c->r[27]+c->r[0]; // 802BC4D8
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802BC4DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BC4E0
  c->lr=0x802BC4E8u; f_802B6A40(c); // 802BC4E4
  cmps(c,0,(int32_t)c->r[3],0); // 802BC4E8
  if (crb(c,2)) { goto L_802BC4F8; } // 802BC4EC
  W32(c->r[24]+0x00000000u,c->r[3]); // 802BC4F0
  c->r[29]=c->r[29]+0x00000001u; // 802BC4F4
L_802BC4F8:;
  c->r[24]=c->r[24]+0x00000004u; // 802BC4F8
  c->r[23]=c->r[23]+0x00000004u; // 802BC4FC
  c->r[22]=c->r[22]+0x00000001u; // 802BC500
L_802BC504:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[31]); // 802BC504
  if (crb(c,0)) { IRQCHK(c); goto L_802BC4B8; } // 802BC508
  c->r[27]=c->r[26]|c->r[26]; // 802BC50C
  c->r[22]=0u+0x00000000u; // 802BC510
  goto L_802BC564; // 802BC514
L_802BC518:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 802BC518
  cmps(c,0,(int32_t)c->r[0],0); // 802BC51C
  if (crb(c,2)) { goto L_802BC52C; } // 802BC520
  c->r[29]=c->r[29]+0x00000001u; // 802BC524
  goto L_802BC558; // 802BC528
L_802BC52C:;
  c->r[0]=R32(c->r[27]+0x00000000u); // 802BC52C
  c->r[3]=c->r[28]|c->r[28]; // 802BC530
  c->r[4]=c->r[1]+0x00000008u; // 802BC534
  c->r[5]=c->r[26]+c->r[0]; // 802BC538
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802BC53C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BC540
  c->lr=0x802BC548u; f_802B69CC(c); // 802BC544
  cmps(c,0,(int32_t)c->r[3],0); // 802BC548
  if (crb(c,2)) { goto L_802BC558; } // 802BC54C
  W32(c->r[25]+0x00000000u,c->r[3]); // 802BC550
  c->r[29]=c->r[29]+0x00000001u; // 802BC554
L_802BC558:;
  c->r[25]=c->r[25]+0x00000004u; // 802BC558
  c->r[27]=c->r[27]+0x00000004u; // 802BC55C
  c->r[22]=c->r[22]+0x00000001u; // 802BC560
L_802BC564:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[30]); // 802BC564
  if (crb(c,0)) { IRQCHK(c); goto L_802BC518; } // 802BC568
  c->r[0]=c->r[31]+c->r[30]; // 802BC56C
  c->r[11]=c->r[1]+0x00000040u; // 802BC570
  c->r[0]=c->r[0]-c->r[29]; // 802BC574
  c->r[0]=cntlz(c->r[0]); // 802BC578
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802BC57C
  c->lr=0x802BC584u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BC580
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BC584
  c->lr=c->r[0]; // 802BC588
  c->r[1]=c->r[1]+0x00000040u; // 802BC58C
  return; // 802BC590
}

// Release__Q34nw4r3g3d12ResAnmTexPatFv
void f_802BC594(Ctx* __restrict c) {
  trace_call(0x802BC594u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BC594
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 802BC598
  c->r[9]=R16(c->r[4]+0x00000030u); // 802BC59C
  cmps(c,0,(int32_t)c->r[0],0); // 802BC5A0
  c->r[3]=R16(c->r[4]+0x00000032u); // 802BC5A4
  if (crb(c,2)) { goto L_802BC5B4; } // 802BC5A8
  c->r[5]=c->r[4]+c->r[0]; // 802BC5AC
  goto L_802BC5B8; // 802BC5B0
L_802BC5B4:;
  c->r[5]=0u+0x00000000u; // 802BC5B4
L_802BC5B8:;
  c->r[0]=R32(c->r[4]+0x00000020u); // 802BC5B8
  cmps(c,0,(int32_t)c->r[0],0); // 802BC5BC
  if (crb(c,2)) { goto L_802BC5CC; } // 802BC5C0
  c->r[6]=c->r[4]+c->r[0]; // 802BC5C4
  goto L_802BC5D0; // 802BC5C8
L_802BC5CC:;
  c->r[6]=0u+0x00000000u; // 802BC5CC
L_802BC5D0:;
  cmps(c,1,(int32_t)c->r[9],0); // 802BC5D0
  c->r[10]=0u+0x00000000u; // 802BC5D4
  if (!crb(c,5)) { goto L_802BC680; } // 802BC5D8
  if (!crb(c,5)) { goto L_802BC680; } // 802BC5DC
  cmps(c,0,(int32_t)c->r[9],8); // 802BC5E0
  c->r[7]=c->r[9]+0xFFFFFFF8u; // 802BC5E4
  if (!crb(c,1)) { goto L_802BC658; } // 802BC5E8
  c->r[8]=0u+0x00000000u; // 802BC5EC
  if (crb(c,4)) { goto L_802BC608; } // 802BC5F0
  c->r[4]=0u+0x80000000u; // 802BC5F4
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 802BC5F8
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 802BC5FC
  if (crb(c,1)) { goto L_802BC608; } // 802BC600
  c->r[8]=0u+0x00000001u; // 802BC604
L_802BC608:;
  cmps(c,0,(int32_t)c->r[8],0); // 802BC608
  if (crb(c,2)) { goto L_802BC658; } // 802BC60C
  c->r[0]=c->r[7]+0x00000007u; // 802BC610
  c->r[8]=c->r[5]|c->r[5]; // 802BC614
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802BC618
  c->r[4]=0u+0x00000000u; // 802BC61C
  c->ctr=c->r[0]; // 802BC620
  cmps(c,0,(int32_t)c->r[7],0); // 802BC624
  if (!crb(c,1)) { goto L_802BC658; } // 802BC628
L_802BC62C:;
  W32(c->r[8]+0x00000000u,c->r[4]); // 802BC62C
  c->r[10]=c->r[10]+0x00000008u; // 802BC630
  W32(c->r[8]+0x00000004u,c->r[4]); // 802BC634
  W32(c->r[8]+0x00000008u,c->r[4]); // 802BC638
  W32(c->r[8]+0x0000000Cu,c->r[4]); // 802BC63C
  W32(c->r[8]+0x00000010u,c->r[4]); // 802BC640
  W32(c->r[8]+0x00000014u,c->r[4]); // 802BC644
  W32(c->r[8]+0x00000018u,c->r[4]); // 802BC648
  W32(c->r[8]+0x0000001Cu,c->r[4]); // 802BC64C
  c->r[8]=c->r[8]+0x00000020u; // 802BC650
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BC62C; } // 802BC654
L_802BC658:;
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 802BC658
  c->r[0]=c->r[9]-c->r[10]; // 802BC65C
  c->r[5]=c->r[5]+c->r[4]; // 802BC660
  c->r[4]=0u+0x00000000u; // 802BC664
  c->ctr=c->r[0]; // 802BC668
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[9]); // 802BC66C
  if (!crb(c,0)) { goto L_802BC680; } // 802BC670
L_802BC674:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 802BC674
  c->r[5]=c->r[5]+0x00000004u; // 802BC678
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BC674; } // 802BC67C
L_802BC680:;
  cmps(c,1,(int32_t)c->r[3],0); // 802BC680
  c->r[8]=0u+0x00000000u; // 802BC684
  if (!crb(c,5)) return; // 802BC688
  if (!crb(c,5)) return; // 802BC68C
  cmps(c,0,(int32_t)c->r[3],8); // 802BC690
  c->r[5]=c->r[3]+0xFFFFFFF8u; // 802BC694
  if (!crb(c,1)) { goto L_802BC708; } // 802BC698
  c->r[7]=0u+0x00000000u; // 802BC69C
  if (crb(c,4)) { goto L_802BC6B8; } // 802BC6A0
  c->r[4]=0u+0x80000000u; // 802BC6A4
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 802BC6A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802BC6AC
  if (crb(c,1)) { goto L_802BC6B8; } // 802BC6B0
  c->r[7]=0u+0x00000001u; // 802BC6B4
L_802BC6B8:;
  cmps(c,0,(int32_t)c->r[7],0); // 802BC6B8
  if (crb(c,2)) { goto L_802BC708; } // 802BC6BC
  c->r[0]=c->r[5]+0x00000007u; // 802BC6C0
  c->r[7]=c->r[6]|c->r[6]; // 802BC6C4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 802BC6C8
  c->r[4]=0u+0x00000000u; // 802BC6CC
  c->ctr=c->r[0]; // 802BC6D0
  cmps(c,0,(int32_t)c->r[5],0); // 802BC6D4
  if (!crb(c,1)) { goto L_802BC708; } // 802BC6D8
L_802BC6DC:;
  W32(c->r[7]+0x00000000u,c->r[4]); // 802BC6DC
  c->r[8]=c->r[8]+0x00000008u; // 802BC6E0
  W32(c->r[7]+0x00000004u,c->r[4]); // 802BC6E4
  W32(c->r[7]+0x00000008u,c->r[4]); // 802BC6E8
  W32(c->r[7]+0x0000000Cu,c->r[4]); // 802BC6EC
  W32(c->r[7]+0x00000010u,c->r[4]); // 802BC6F0
  W32(c->r[7]+0x00000014u,c->r[4]); // 802BC6F4
  W32(c->r[7]+0x00000018u,c->r[4]); // 802BC6F8
  W32(c->r[7]+0x0000001Cu,c->r[4]); // 802BC6FC
  c->r[7]=c->r[7]+0x00000020u; // 802BC700
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BC6DC; } // 802BC704
L_802BC708:;
  c->r[4]=rotl(c->r[8],2)&0xFFFFFFFCu; // 802BC708
  c->r[0]=c->r[3]-c->r[8]; // 802BC70C
  c->r[5]=c->r[6]+c->r[4]; // 802BC710
  c->r[4]=0u+0x00000000u; // 802BC714
  c->ctr=c->r[0]; // 802BC718
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 802BC71C
  if (!crb(c,0)) return; // 802BC720
L_802BC724:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 802BC724
  c->r[5]=c->r[5]+0x00000004u; // 802BC728
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_802BC724; } // 802BC72C
  return; // 802BC730
}

// GetAnmResult__Q34nw4r3g3d12ResAnmTexSrtCFPQ34nw4r3g3d15TexSrtAnmResultUlf
void f_802BC734(Ctx* __restrict c) {
  trace_call(0x802BC734u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BC734
  c->r[0]=c->lr; // 802BC738
  W32(c->r[1]+0x00000074u,c->r[0]); // 802BC73C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 802BC740
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 802BC744
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 802BC748
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 802BC74C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 802BC750
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 802BC754
  c->r[11]=c->r[1]+0x00000040u; // 802BC758
  c->lr=0x802BC760u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BC75C
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BC760
  c->f[29]=c->f[1]; // 802BC764
  c->r[22]=c->r[4]|c->r[4]; // 802BC768
  c->r[0]=R32(c->r[6]+0x00000010u); // 802BC76C
  cmps(c,0,(int32_t)c->r[0],0); // 802BC770
  if (crb(c,2)) { goto L_802BC780; } // 802BC774
  c->r[0]=c->r[6]+c->r[0]; // 802BC778
  goto L_802BC784; // 802BC77C
L_802BC780:;
  c->r[0]=0u+0x00000000u; // 802BC780
L_802BC784:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BC784
  if (crb(c,2)) { goto L_802BC7B4; } // 802BC788
  c->r[5]=c->r[5]+0x00000001u; // 802BC78C
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 802BC790
  c->r[5]=c->r[0]+c->r[5]; // 802BC794
  c->r[5]=R32(c->r[5]+0x00000014u); // 802BC798
  cmps(c,0,(int32_t)c->r[5],0); // 802BC79C
  if (crb(c,2)) { goto L_802BC7AC; } // 802BC7A0
  c->r[30]=c->r[0]+c->r[5]; // 802BC7A4
  goto L_802BC7B8; // 802BC7A8
L_802BC7AC:;
  c->r[30]=0u+0x00000000u; // 802BC7AC
  goto L_802BC7B8; // 802BC7B0
L_802BC7B4:;
  c->r[30]=0u+0x00000000u; // 802BC7B4
L_802BC7B8:;
  c->r[26]=R32(c->r[30]+0x00000004u); // 802BC7B8
  c->r[0]=0u+0x00000000u; // 802BC7BC
  c->r[24]=R32(c->r[30]+0x00000008u); // 802BC7C0
  c->r[25]=c->r[30]+0x0000000Cu; // 802BC7C4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BC7C8
  c->r[27]=c->r[4]+0x0000000Cu; // 802BC7CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BC7D0
  c->r[28]=0u+0x00000000u; // 802BC7D4
  {uint32_t ea=c->r[2]+0xFFFFAB10u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BC7D8
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BC7DC
  {uint32_t ea=c->r[2]+0xFFFFAB14u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BC7E0
  c->r[0]=R32(c->r[3]+0x00000020u); // 802BC7E4
  W32(c->r[4]+0x00000008u,c->r[0]); // 802BC7E8
  goto L_802BC96C; // 802BC7EC
L_802BC7F0:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 802BC7F0
  if (crb(c,2)) { goto L_802BC960; } // 802BC7F4
  c->r[0]=R32(c->r[25]+0x00000000u); // 802BC7F8
  c->r[29]=0u+0x00000000u; // 802BC7FC
  c->r[25]=c->r[25]+0x00000004u; // 802BC800
  c->r[31]=R32(c->r[30]+c->r[0]); // 802BC804
  c->r[23]=c->r[0]+c->r[30]; // 802BC808
  c->r[0]=rotl(c->r[31],0)&0x00000002u; cr0(c,c->r[0]); // 802BC80C
  if (!crb(c,2)) { goto L_802BC884; } // 802BC810
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 802BC814
  c->r[3]=c->r[23]+0x00000004u; // 802BC818
  c->r[29]=0u+0x00000001u; // 802BC81C
  if (crb(c,2)) { goto L_802BC82C; } // 802BC820
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BC824
  goto L_802BC83C; // 802BC828
L_802BC82C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BC82C
  c->f[1]=c->f[29]; // 802BC830
  c->r[3]=c->r[3]+c->r[0]; // 802BC834
  c->lr=0x802BC83Cu; f_802BBD40(c); // 802BC838
L_802BC83C:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802BC83C
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[1]);} // 802BC840
  if (crb(c,2)) { goto L_802BC854; } // 802BC844
  {uint32_t ea=c->r[27]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BC848
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[0]);} // 802BC84C
  goto L_802BC88C; // 802BC850
L_802BC854:;
  c->r[0]=rotl(c->r[31],0)&0x00000040u; cr0(c,c->r[0]); // 802BC854
  c->r[3]=c->r[23]+0x00000008u; // 802BC858
  c->r[29]=0u+0x00000002u; // 802BC85C
  if (crb(c,2)) { goto L_802BC86C; } // 802BC860
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BC864
  goto L_802BC87C; // 802BC868
L_802BC86C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BC86C
  c->f[1]=c->f[29]; // 802BC870
  c->r[3]=c->r[3]+c->r[0]; // 802BC874
  c->lr=0x802BC87Cu; f_802BBD40(c); // 802BC878
L_802BC87C:;
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[1]);} // 802BC87C
  goto L_802BC88C; // 802BC880
L_802BC884:;
  {uint32_t ea=c->r[27]+0x00000000u; WF32(ea,c->f[31]);} // 802BC884
  {uint32_t ea=c->r[27]+0x00000004u; WF32(ea,c->f[31]);} // 802BC888
L_802BC88C:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 802BC88C
  if (!crb(c,2)) { goto L_802BC8CC; } // 802BC890
  c->r[0]=rotl(c->r[31],0)&0x00000080u; cr0(c,c->r[0]); // 802BC894
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802BC898
  c->r[29]=c->r[29]+0x00000001u; // 802BC89C
  c->r[3]=c->r[23]+c->r[0]; // 802BC8A0
  c->r[3]=c->r[3]+0x00000004u; // 802BC8A4
  if (crb(c,2)) { goto L_802BC8B4; } // 802BC8A8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BC8AC
  goto L_802BC8C4; // 802BC8B0
L_802BC8B4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BC8B4
  c->f[1]=c->f[29]; // 802BC8B8
  c->r[3]=c->r[3]+c->r[0]; // 802BC8BC
  c->lr=0x802BC8C4u; f_802BBD40(c); // 802BC8C0
L_802BC8C4:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 802BC8C4
  goto L_802BC8D0; // 802BC8C8
L_802BC8CC:;
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[30]);} // 802BC8CC
L_802BC8D0:;
  c->r[0]=rotl(c->r[31],0)&0x00000008u; cr0(c,c->r[0]); // 802BC8D0
  if (!crb(c,2)) { goto L_802BC944; } // 802BC8D4
  c->r[0]=rotl(c->r[31],0)&0x00000100u; cr0(c,c->r[0]); // 802BC8D8
  c->r[21]=rotl(c->r[31],23)&0x00000001u; // 802BC8DC
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802BC8E0
  c->r[29]=c->r[29]+0x00000001u; // 802BC8E4
  c->r[3]=c->r[23]+c->r[0]; // 802BC8E8
  c->r[3]=c->r[3]+0x00000004u; // 802BC8EC
  if (crb(c,2)) { goto L_802BC8FC; } // 802BC8F0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BC8F4
  goto L_802BC90C; // 802BC8F8
L_802BC8FC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BC8FC
  c->f[1]=c->f[29]; // 802BC900
  c->r[3]=c->r[3]+c->r[0]; // 802BC904
  c->lr=0x802BC90Cu; f_802BBD40(c); // 802BC908
L_802BC90C:;
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 802BC90C
  cmps(c,0,(int32_t)c->r[21],0); // 802BC910
  c->r[3]=c->r[23]+c->r[0]; // 802BC914
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 802BC918
  c->r[3]=c->r[3]+0x00000004u; // 802BC91C
  if (crb(c,2)) { goto L_802BC92C; } // 802BC920
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BC924
  goto L_802BC93C; // 802BC928
L_802BC92C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BC92C
  c->f[1]=c->f[29]; // 802BC930
  c->r[3]=c->r[3]+c->r[0]; // 802BC934
  c->lr=0x802BC93Cu; f_802BBD40(c); // 802BC938
L_802BC93C:;
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 802BC93C
  goto L_802BC94C; // 802BC940
L_802BC944:;
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[30]);} // 802BC944
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[30]);} // 802BC948
L_802BC94C:;
  c->r[0]=rotl(c->r[31],0)&0x0000000Fu; // 802BC94C
  c->r[3]=R32(c->r[22]+0x00000000u); // 802BC950
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[0]<<((c->r[28])&31)); // 802BC954
  c->r[0]=c->r[3]|c->r[0]; // 802BC958
  W32(c->r[22]+0x00000000u,c->r[0]); // 802BC95C
L_802BC960:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 802BC960
  c->r[27]=c->r[27]+0x00000014u; // 802BC964
  c->r[28]=c->r[28]+0x00000004u; // 802BC968
L_802BC96C:;
  cmps(c,0,(int32_t)c->r[26],0); // 802BC96C
  if (!crb(c,2)) { IRQCHK(c); goto L_802BC7F0; } // 802BC970
  {uint32_t ea=c->r[2]+0xFFFFAB10u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BC974
  c->r[26]=0u+0x00000000u; // 802BC978
  {uint32_t ea=c->r[2]+0xFFFFAB14u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BC97C
  c->r[27]=0u+0x00000000u; // 802BC980
  goto L_802BCB10; // 802BC984
L_802BC988:;
  c->r[0]=rotl(c->r[24],0)&0x00000001u; cr0(c,c->r[0]); // 802BC988
  if (crb(c,2)) { goto L_802BCB04; } // 802BC98C
  c->r[3]=R32(c->r[25]+0x00000000u); // 802BC990
  c->r[0]=c->r[26]+0x00000008u; // 802BC994
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 802BC998
  c->r[28]=0u+0x00000000u; // 802BC99C
  c->r[29]=R32(c->r[3]+c->r[30]); // 802BC9A0
  c->r[23]=c->r[3]+c->r[30]; // 802BC9A4
  c->r[25]=c->r[25]+0x00000004u; // 802BC9A8
  c->r[31]=c->r[22]+c->r[0]; // 802BC9AC
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 802BC9B0
  if (!crb(c,2)) { goto L_802BCA28; } // 802BC9B4
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 802BC9B8
  c->r[3]=c->r[23]+0x00000004u; // 802BC9BC
  c->r[28]=0u+0x00000001u; // 802BC9C0
  if (crb(c,2)) { goto L_802BC9D0; } // 802BC9C4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BC9C8
  goto L_802BC9E0; // 802BC9CC
L_802BC9D0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BC9D0
  c->f[1]=c->f[29]; // 802BC9D4
  c->r[3]=c->r[3]+c->r[0]; // 802BC9D8
  c->lr=0x802BC9E0u; f_802BBD40(c); // 802BC9DC
L_802BC9E0:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 802BC9E0
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[1]);} // 802BC9E4
  if (crb(c,2)) { goto L_802BC9F8; } // 802BC9E8
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BC9EC
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[0]);} // 802BC9F0
  goto L_802BCA30; // 802BC9F4
L_802BC9F8:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 802BC9F8
  c->r[3]=c->r[23]+0x00000008u; // 802BC9FC
  c->r[28]=0u+0x00000002u; // 802BCA00
  if (crb(c,2)) { goto L_802BCA10; } // 802BCA04
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCA08
  goto L_802BCA20; // 802BCA0C
L_802BCA10:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCA10
  c->f[1]=c->f[29]; // 802BCA14
  c->r[3]=c->r[3]+c->r[0]; // 802BCA18
  c->lr=0x802BCA20u; f_802BBD40(c); // 802BCA1C
L_802BCA20:;
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[1]);} // 802BCA20
  goto L_802BCA30; // 802BCA24
L_802BCA28:;
  {uint32_t ea=c->r[31]+0x0000000Cu; WF32(ea,c->f[30]);} // 802BCA28
  {uint32_t ea=c->r[31]+0x00000010u; WF32(ea,c->f[30]);} // 802BCA2C
L_802BCA30:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 802BCA30
  if (!crb(c,2)) { goto L_802BCA70; } // 802BCA34
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 802BCA38
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 802BCA3C
  c->r[28]=c->r[28]+0x00000001u; // 802BCA40
  c->r[3]=c->r[23]+c->r[0]; // 802BCA44
  c->r[3]=c->r[3]+0x00000004u; // 802BCA48
  if (crb(c,2)) { goto L_802BCA58; } // 802BCA4C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCA50
  goto L_802BCA68; // 802BCA54
L_802BCA58:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCA58
  c->f[1]=c->f[29]; // 802BCA5C
  c->r[3]=c->r[3]+c->r[0]; // 802BCA60
  c->lr=0x802BCA68u; f_802BBD40(c); // 802BCA64
L_802BCA68:;
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[1]);} // 802BCA68
  goto L_802BCA74; // 802BCA6C
L_802BCA70:;
  {uint32_t ea=c->r[31]+0x00000014u; WF32(ea,c->f[31]);} // 802BCA70
L_802BCA74:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 802BCA74
  if (!crb(c,2)) { goto L_802BCAE8; } // 802BCA78
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 802BCA7C
  c->r[21]=rotl(c->r[29],23)&0x00000001u; // 802BCA80
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 802BCA84
  c->r[28]=c->r[28]+0x00000001u; // 802BCA88
  c->r[3]=c->r[23]+c->r[0]; // 802BCA8C
  c->r[3]=c->r[3]+0x00000004u; // 802BCA90
  if (crb(c,2)) { goto L_802BCAA0; } // 802BCA94
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCA98
  goto L_802BCAB0; // 802BCA9C
L_802BCAA0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCAA0
  c->f[1]=c->f[29]; // 802BCAA4
  c->r[3]=c->r[3]+c->r[0]; // 802BCAA8
  c->lr=0x802BCAB0u; f_802BBD40(c); // 802BCAAC
L_802BCAB0:;
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 802BCAB0
  cmps(c,0,(int32_t)c->r[21],0); // 802BCAB4
  c->r[3]=c->r[23]+c->r[0]; // 802BCAB8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802BCABC
  c->r[3]=c->r[3]+0x00000004u; // 802BCAC0
  if (crb(c,2)) { goto L_802BCAD0; } // 802BCAC4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCAC8
  goto L_802BCAE0; // 802BCACC
L_802BCAD0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCAD0
  c->f[1]=c->f[29]; // 802BCAD4
  c->r[3]=c->r[3]+c->r[0]; // 802BCAD8
  c->lr=0x802BCAE0u; f_802BBD40(c); // 802BCADC
L_802BCAE0:;
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 802BCAE0
  goto L_802BCAF0; // 802BCAE4
L_802BCAE8:;
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[31]);} // 802BCAE8
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[31]);} // 802BCAEC
L_802BCAF0:;
  c->r[0]=rotl(c->r[29],0)&0x0000000Fu; // 802BCAF0
  c->r[3]=R32(c->r[22]+0x00000004u); // 802BCAF4
  c->r[0]=((c->r[27])&0x20)?0u:(c->r[0]<<((c->r[27])&31)); // 802BCAF8
  c->r[0]=c->r[3]|c->r[0]; // 802BCAFC
  W32(c->r[22]+0x00000004u,c->r[0]); // 802BCB00
L_802BCB04:;
  c->r[24]=rotl(c->r[24],31)&0x7FFFFFFFu; // 802BCB04
  c->r[27]=c->r[27]+0x00000004u; // 802BCB08
  c->r[26]=c->r[26]+0x00000001u; // 802BCB0C
L_802BCB10:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BCB10
  if (!crb(c,2)) { IRQCHK(c); goto L_802BC988; } // 802BCB14
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 802BCB18
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 802BCB1C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 802BCB20
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 802BCB24
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 802BCB28
  c->r[11]=c->r[1]+0x00000040u; // 802BCB2C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 802BCB30
  c->lr=0x802BCB38u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BCB34
  c->r[0]=R32(c->r[1]+0x00000074u); // 802BCB38
  c->lr=c->r[0]; // 802BCB3C
  c->r[1]=c->r[1]+0x00000070u; // 802BCB40
  return; // 802BCB44
}

// GetAnmScale__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_802BCB48(Ctx* __restrict c) {
  trace_call(0x802BCB48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BCB48
  c->r[0]=c->lr; // 802BCB4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 802BCB50
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802BCB54
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802BCB58
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802BCB5C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802BCB60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 802BCB64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 802BCB68
  c->r[0]=0u+0x04000000u; // 802BCB6C
  c->f[29]=c->f[1]; // 802BCB70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BCB74
  c->r[31]=R32(c->r[4]+0x00000004u); // 802BCB78
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BCB7C
  c->r[30]=c->r[5]|c->r[5]; // 802BCB80
  W32(c->r[1]+0x00000014u,c->r[29]); // 802BCB84
  c->r[29]=c->r[4]|c->r[4]; // 802BCB88
  W32(c->r[1]+0x00000010u,c->r[28]); // 802BCB8C
  c->r[28]=c->r[3]|c->r[3]; // 802BCB90
  c->r[3]=rotl(c->r[31],0)&0x06000000u; // 802BCB94
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802BCB98
  if (crb(c,2)) { goto L_802BCC8C; } // 802BCB9C
  if (!crb(c,0)) { goto L_802BCBC0; } // 802BCBA0
  c->r[0]=0u+0x02000000u; // 802BCBA4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802BCBA8
  if (crb(c,2)) { goto L_802BCBFC; } // 802BCBAC
  if (!crb(c,0)) { goto L_802BCDAC; } // 802BCBB0
  cmps(c,0,(int32_t)c->r[3],0); // 802BCBB4
  if (crb(c,2)) { goto L_802BCBD0; } // 802BCBB8
  goto L_802BCDAC; // 802BCBBC
L_802BCBC0:;
  c->r[0]=0u+0x06000000u; // 802BCBC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 802BCBC4
  if (crb(c,2)) { goto L_802BCD1C; } // 802BCBC8
  goto L_802BCDAC; // 802BCBCC
L_802BCBD0:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802BCBD0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BCBD4
  c->r[30]=c->r[5]+0x00000004u; // 802BCBD8
  if (crb(c,2)) { goto L_802BCBEC; } // 802BCBDC
  c->f[30]=c->f[31]; // 802BCBE0
  c->f[1]=c->f[31]; // 802BCBE4
  goto L_802BCDB8; // 802BCBE8
L_802BCBEC:;
  {uint32_t ea=c->r[30]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BCBEC
  {uint32_t ea=c->r[30]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCBF0
  c->r[30]=c->r[30]+0x00000008u; // 802BCBF4
  goto L_802BCDB8; // 802BCBF8
L_802BCBFC:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 802BCBFC
  c->r[3]=c->r[30]|c->r[30]; // 802BCC00
  c->r[30]=c->r[5]+0x00000004u; // 802BCC04
  if (crb(c,2)) { goto L_802BCC14; } // 802BCC08
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCC0C
  goto L_802BCC20; // 802BCC10
L_802BCC14:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCC14
  c->r[3]=c->r[0]+c->r[4]; // 802BCC18
  c->lr=0x802BCC20u; f_802BD09C(c); // 802BCC1C
L_802BCC20:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802BCC20
  c->f[31]=c->f[1]; // 802BCC24
  if (crb(c,2)) { goto L_802BCC34; } // 802BCC28
  c->f[30]=c->f[1]; // 802BCC2C
  goto L_802BCDB8; // 802BCC30
L_802BCC34:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 802BCC34
  c->r[3]=c->r[30]|c->r[30]; // 802BCC38
  c->r[30]=c->r[30]+0x00000004u; // 802BCC3C
  if (crb(c,2)) { goto L_802BCC4C; } // 802BCC40
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCC44
  goto L_802BCC5C; // 802BCC48
L_802BCC4C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCC4C
  c->f[1]=c->f[29]; // 802BCC50
  c->r[3]=c->r[0]+c->r[29]; // 802BCC54
  c->lr=0x802BCC5Cu; f_802BD09C(c); // 802BCC58
L_802BCC5C:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 802BCC5C
  c->f[30]=c->f[1]; // 802BCC60
  c->r[3]=c->r[30]|c->r[30]; // 802BCC64
  c->r[30]=c->r[30]+0x00000004u; // 802BCC68
  if (crb(c,2)) { goto L_802BCC78; } // 802BCC6C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCC70
  goto L_802BCDB8; // 802BCC74
L_802BCC78:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCC78
  c->f[1]=c->f[29]; // 802BCC7C
  c->r[3]=c->r[0]+c->r[29]; // 802BCC80
  c->lr=0x802BCC88u; f_802BD09C(c); // 802BCC84
  goto L_802BCDB8; // 802BCC88
L_802BCC8C:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 802BCC8C
  c->r[3]=c->r[30]|c->r[30]; // 802BCC90
  c->r[30]=c->r[5]+0x00000004u; // 802BCC94
  if (crb(c,2)) { goto L_802BCCA4; } // 802BCC98
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCC9C
  goto L_802BCCB0; // 802BCCA0
L_802BCCA4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCCA4
  c->r[3]=c->r[0]+c->r[4]; // 802BCCA8
  c->lr=0x802BCCB0u; f_802BCF2C(c); // 802BCCAC
L_802BCCB0:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802BCCB0
  c->f[31]=c->f[1]; // 802BCCB4
  if (crb(c,2)) { goto L_802BCCC4; } // 802BCCB8
  c->f[30]=c->f[1]; // 802BCCBC
  goto L_802BCDB8; // 802BCCC0
L_802BCCC4:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 802BCCC4
  c->r[3]=c->r[30]|c->r[30]; // 802BCCC8
  c->r[30]=c->r[30]+0x00000004u; // 802BCCCC
  if (crb(c,2)) { goto L_802BCCDC; } // 802BCCD0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCCD4
  goto L_802BCCEC; // 802BCCD8
L_802BCCDC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCCDC
  c->f[1]=c->f[29]; // 802BCCE0
  c->r[3]=c->r[0]+c->r[29]; // 802BCCE4
  c->lr=0x802BCCECu; f_802BCF2C(c); // 802BCCE8
L_802BCCEC:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 802BCCEC
  c->f[30]=c->f[1]; // 802BCCF0
  c->r[3]=c->r[30]|c->r[30]; // 802BCCF4
  c->r[30]=c->r[30]+0x00000004u; // 802BCCF8
  if (crb(c,2)) { goto L_802BCD08; } // 802BCCFC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCD00
  goto L_802BCDB8; // 802BCD04
L_802BCD08:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCD08
  c->f[1]=c->f[29]; // 802BCD0C
  c->r[3]=c->r[0]+c->r[29]; // 802BCD10
  c->lr=0x802BCD18u; f_802BCF2C(c); // 802BCD14
  goto L_802BCDB8; // 802BCD18
L_802BCD1C:;
  c->r[0]=rotl(c->r[31],0)&0x00002000u; cr0(c,c->r[0]); // 802BCD1C
  c->r[3]=c->r[30]|c->r[30]; // 802BCD20
  c->r[30]=c->r[5]+0x00000004u; // 802BCD24
  if (crb(c,2)) { goto L_802BCD34; } // 802BCD28
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCD2C
  goto L_802BCD40; // 802BCD30
L_802BCD34:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCD34
  c->r[3]=c->r[0]+c->r[4]; // 802BCD38
  c->lr=0x802BCD40u; f_802BCE00(c); // 802BCD3C
L_802BCD40:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 802BCD40
  c->f[31]=c->f[1]; // 802BCD44
  if (crb(c,2)) { goto L_802BCD54; } // 802BCD48
  c->f[30]=c->f[1]; // 802BCD4C
  goto L_802BCDB8; // 802BCD50
L_802BCD54:;
  c->r[0]=rotl(c->r[31],0)&0x00004000u; cr0(c,c->r[0]); // 802BCD54
  c->r[3]=c->r[30]|c->r[30]; // 802BCD58
  c->r[30]=c->r[30]+0x00000004u; // 802BCD5C
  if (crb(c,2)) { goto L_802BCD6C; } // 802BCD60
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCD64
  goto L_802BCD7C; // 802BCD68
L_802BCD6C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCD6C
  c->f[1]=c->f[29]; // 802BCD70
  c->r[3]=c->r[0]+c->r[29]; // 802BCD74
  c->lr=0x802BCD7Cu; f_802BCE00(c); // 802BCD78
L_802BCD7C:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 802BCD7C
  c->f[30]=c->f[1]; // 802BCD80
  c->r[3]=c->r[30]|c->r[30]; // 802BCD84
  c->r[30]=c->r[30]+0x00000004u; // 802BCD88
  if (crb(c,2)) { goto L_802BCD98; } // 802BCD8C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCD90
  goto L_802BCDB8; // 802BCD94
L_802BCD98:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BCD98
  c->f[1]=c->f[29]; // 802BCD9C
  c->r[3]=c->r[0]+c->r[29]; // 802BCDA0
  c->lr=0x802BCDA8u; f_802BCE00(c); // 802BCDA4
  goto L_802BCDB8; // 802BCDA8
L_802BCDAC:;
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BCDAC
  c->f[30]=c->f[31]; // 802BCDB0
  c->f[1]=c->f[31]; // 802BCDB4
L_802BCDB8:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 802BCDB8
  c->r[3]=c->r[30]|c->r[30]; // 802BCDBC
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 802BCDC0
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 802BCDC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802BCDC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802BCDCC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 802BCDD0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 802BCDD4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 802BCDD8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 802BCDDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BCDE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BCDE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802BCDE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 802BCDEC
  c->r[0]=R32(c->r[1]+0x00000054u); // 802BCDF0
  c->lr=c->r[0]; // 802BCDF4
  c->r[1]=c->r[1]+0x00000050u; // 802BCDF8
  return; // 802BCDFC
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS96Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_802BCE00(Ctx* __restrict c) {
  trace_call(0x802BCE00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BCE00
  c->r[5]=c->r[3]+0x00000008u; // 802BCE04
  c->r[6]=R16(c->r[3]+0x00000000u); // 802BCE08
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCE0C
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 802BCE10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802BCE14
  fcmp(c,0,c->f[1],c->f[0]); // 802BCE18
  c->r[4]=c->r[3]+c->r[0]; // 802BCE1C
  c->r[4]=c->r[4]+0x00000008u; // 802BCE20
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BCE24
  if (!crb(c,2)) { goto L_802BCE34; } // 802BCE28
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCE2C
  goto L_802BCF24; // 802BCE30
L_802BCE34:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCE34
  fcmp(c,0,c->f[0],c->f[1]); // 802BCE38
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BCE3C
  if (!crb(c,2)) { goto L_802BCE4C; } // 802BCE40
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCE44
  goto L_802BCF24; // 802BCE48
L_802BCE4C:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCE4C
  W16(c->r[1]+0x00000008u,c->r[6]); // 802BCE50
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 802BCE54
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,2,ea,1,3);} // 802BCE58
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCE5C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802BCE60
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802BCE64
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 802BCE68
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 802BCE6C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802BCE70
  c->r[3]=c->r[3]+c->r[0]; // 802BCE74
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCE78
  c->r[4]=c->r[3]+0x00000008u; // 802BCE7C
  fcmp(c,0,c->f[1],c->f[0]); // 802BCE80
  if (!crb(c,0)) { goto L_802BCE98; } // 802BCE84
L_802BCE88:;
  {uint32_t ea=c->r[4]+0xFFFFFFF4u; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 802BCE88
  fcmp(c,0,c->f[1],c->f[0]); // 802BCE8C
  if (crb(c,0)) { IRQCHK(c); goto L_802BCE88; } // 802BCE90
  goto L_802BCEAC; // 802BCE94
L_802BCE98:;
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea); c->r[4]=ea;} // 802BCE98
  fcmp(c,0,c->f[0],c->f[1]); // 802BCE9C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BCEA0
  if (crb(c,2)) { IRQCHK(c); goto L_802BCE98; } // 802BCEA4
  c->r[4]=c->r[4]+0xFFFFFFF4u; // 802BCEA8
L_802BCEAC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCEAC
  fcmp(c,0,c->f[1],c->f[0]); // 802BCEB0
  if (!crb(c,2)) { goto L_802BCEC0; } // 802BCEB4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCEB8
  goto L_802BCF24; // 802BCEBC
L_802BCEC0:;
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[0]); // 802BCEC0
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCEC4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[7]=c->ps1[7]=RF32(ea);} // 802BCEC8
  c->f[11]=c->ps1[11]=S(c->f[1]-c->f[0]); // 802BCECC
  {uint32_t ea=c->r[4]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCED0
  {uint32_t ea=c->r[2]+0xFFFFAB20u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BCED4
  {uint32_t ea=c->r[2]+0xFFFFAB24u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCED8
  c->f[0]=c->ps1[0]=S(c->f[7]-c->f[0]); // 802BCEDC
  c->f[6]=c->ps1[6]=fres(c->f[11]); // 802BCEE0
  {uint32_t ea=c->r[4]+0x00000014u; c->f[9]=c->ps1[9]=RF32(ea);} // 802BCEE4
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802BCEE8
  {uint32_t ea=c->r[4]+0x00000008u; c->f[8]=c->ps1[8]=RF32(ea);} // 802BCEEC
  {double t0=S(c->f[6]+c->f[6]), t1=S(c->ps1[6]+c->ps1[6]); c->f[5]=t0; c->ps1[5]=t1;} // 802BCEF0
  {double t0=S(c->f[6]*c->f[6]), t1=S(c->ps1[6]*c->ps1[6]); c->f[3]=t0; c->ps1[3]=t1;} // 802BCEF4
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[5])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[5])); c->f[6]=t0; c->ps1[6]=t1;} // 802BCEF8
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[6]); // 802BCEFC
  c->f[5]=c->ps1[5]=S(std::fma(c->f[10],c->f[6],-c->f[4])); // 802BCF00
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 802BCF04
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[9]); // 802BCF08
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[5]); // 802BCF0C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802BCF10
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[8],c->f[2])); // 802BCF14
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802BCF18
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[7])); // 802BCF1C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 802BCF20
L_802BCF24:;
  c->r[1]=c->r[1]+0x00000010u; // 802BCF24
  return; // 802BCF28
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS48Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_802BCF2C(Ctx* __restrict c) {
  trace_call(0x802BCF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BCF2C
  c->r[5]=c->r[3]+0x00000010u; // 802BCF30
  c->r[6]=R16(c->r[3]+0x00000000u); // 802BCF34
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 802BCF38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 802BCF3C
  c->r[4]=c->r[3]+c->r[0]; // 802BCF40
  c->r[4]=c->r[4]+0x00000010u; // 802BCF44
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 802BCF48
  fcmp(c,0,c->f[1],c->f[0]); // 802BCF4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BCF50
  if (!crb(c,2)) { goto L_802BCF6C; } // 802BCF54
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,2,ea,1,3);} // 802BCF58
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCF5C
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCF60
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BCF64
  goto L_802BD094; // 802BCF68
L_802BCF6C:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,6);} // 802BCF6C
  fcmp(c,0,c->f[0],c->f[1]); // 802BCF70
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BCF74
  if (!crb(c,2)) { goto L_802BCF90; } // 802BCF78
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,2,ea,1,3);} // 802BCF7C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BCF80
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCF84
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BCF88
  goto L_802BD094; // 802BCF8C
L_802BCF90:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 802BCF90
  W16(c->r[1]+0x0000000Au,c->r[6]); // 802BCF94
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 802BCF98
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,2,ea,1,3);} // 802BCF9C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BCFA0
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802BCFA4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802BCFA8
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,0,ea,1,3);} // 802BCFAC
  c->r[0]=R16(c->r[1]+0x0000000Cu); // 802BCFB0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 802BCFB4
  c->r[4]=c->r[3]+c->r[0]; // 802BCFB8
  c->r[5]=c->r[4]+0x00000010u; // 802BCFBC
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,1,6);} // 802BCFC0
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 802BCFC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x00000000u); // 802BCFC8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000008u); // 802BCFCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802BCFD0
  if (!crb(c,0)) { goto L_802BCFE8; } // 802BCFD4
L_802BCFD8:;
  {uint32_t ea=c->r[5]+0xFFFFFFFAu; c->r[0]=(uint32_t)(int32_t)(int16_t)R16(ea); c->r[5]=ea;} // 802BCFD8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802BCFDC
  if (crb(c,0)) { IRQCHK(c); goto L_802BCFD8; } // 802BCFE0
  goto L_802BCFF8; // 802BCFE4
L_802BCFE8:;
  {uint32_t ea=c->r[5]+0x00000006u; c->r[0]=(uint32_t)(int32_t)(int16_t)R16(ea); c->r[5]=ea;} // 802BCFE8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 802BCFEC
  if (!crb(c,1)) { IRQCHK(c); goto L_802BCFE8; } // 802BCFF0
  c->r[5]=c->r[5]+0xFFFFFFFAu; // 802BCFF4
L_802BCFF8:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,6);} // 802BCFF8
  fcmp(c,0,c->f[1],c->f[0]); // 802BCFFC
  if (!crb(c,2)) { goto L_802BD018; } // 802BD000
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,2,ea,1,3);} // 802BD004
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD008
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD00C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD010
  goto L_802BD094; // 802BD014
L_802BD018:;
  c->r[4]=c->r[5]+0x00000006u; // 802BD018
  {uint32_t ea=c->r[5]+0x00000002u; psq_load(c,3,ea,1,3);} // 802BD01C
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD020
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD024
  c->f[5]=c->ps1[5]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD028
  {uint32_t ea=c->r[5]+0x00000004u; psq_load(c,6,ea,1,7);} // 802BD02C
  {uint32_t ea=c->r[4]+0x00000002u; psq_load(c,3,ea,1,3);} // 802BD030
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD034
  {uint32_t ea=c->r[4]+0x00000004u; psq_load(c,7,ea,1,7);} // 802BD038
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,3,ea,1,6);} // 802BD03C
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,4,ea,1,6);} // 802BD040
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 802BD044
  {uint32_t ea=c->r[2]+0xFFFFAB20u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD048
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 802BD04C
  {uint32_t ea=c->r[2]+0xFFFFAB24u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD050
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 802BD054
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802BD058
  c->f[9]=c->ps1[9]=fres(c->f[11]); // 802BD05C
  {double t0=S(c->f[9]+c->f[9]), t1=S(c->ps1[9]+c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 802BD060
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[3]=t0; c->ps1[3]=t1;} // 802BD064
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[8])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 802BD068
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[9]); // 802BD06C
  c->f[8]=c->ps1[8]=S(std::fma(c->f[10],c->f[9],-c->f[4])); // 802BD070
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 802BD074
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 802BD078
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 802BD07C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802BD080
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[6],c->f[2])); // 802BD084
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802BD088
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[5])); // 802BD08C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 802BD090
L_802BD094:;
  c->r[1]=c->r[1]+0x00000010u; // 802BD094
  return; // 802BD098
}

// CalcAnimationFVS<Q44nw4r3g3d27@unnamed@g3d_resanmchr_cpp@46CAnmFmtTraits<Q34nw4r3g3d18ResAnmChrFVS32Data>>__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPCQ34nw4r3g3d16ResAnmChrFVSDataf_f
void f_802BD09C(Ctx* __restrict c) {
  trace_call(0x802BD09Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BD09C
  c->r[5]=c->r[3]+0x00000010u; // 802BD0A0
  c->r[6]=R16(c->r[3]+0x00000000u); // 802BD0A4
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 802BD0A8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802BD0AC
  c->r[4]=c->r[3]+c->r[0]; // 802BD0B0
  c->r[4]=c->r[4]+0x00000010u; // 802BD0B4
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,2);} // 802BD0B8
  fcmp(c,0,c->f[1],c->f[0]); // 802BD0BC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD0C0
  if (!crb(c,2)) { goto L_802BD0E8; } // 802BD0C4
  c->r[0]=R32(c->r[5]+0x00000000u); // 802BD0C8
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 802BD0CC
  W16(c->r[1]+0x00000016u,c->r[0]); // 802BD0D0
  {uint32_t ea=c->r[1]+0x00000016u; psq_load(c,2,ea,1,3);} // 802BD0D4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD0D8
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD0DC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD0E0
  goto L_802BD254; // 802BD0E4
L_802BD0E8:;
  {uint32_t ea=c->r[4]+0x00000000u; psq_load(c,0,ea,1,2);} // 802BD0E8
  fcmp(c,0,c->f[0],c->f[1]); // 802BD0EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD0F0
  if (!crb(c,2)) { goto L_802BD118; } // 802BD0F4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802BD0F8
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 802BD0FC
  W16(c->r[1]+0x00000014u,c->r[0]); // 802BD100
  {uint32_t ea=c->r[1]+0x00000014u; psq_load(c,2,ea,1,3);} // 802BD104
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD108
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD10C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD110
  goto L_802BD254; // 802BD114
L_802BD118:;
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,0,ea,1,2);} // 802BD118
  W16(c->r[1]+0x00000012u,c->r[6]); // 802BD11C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[0]); // 802BD120
  {uint32_t ea=c->r[1]+0x00000012u; psq_load(c,2,ea,1,3);} // 802BD124
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD128
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 802BD12C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 802BD130
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,0,ea,1,3);} // 802BD134
  c->r[0]=R16(c->r[1]+0x0000001Cu); // 802BD138
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802BD13C
  c->r[4]=c->r[3]+c->r[0]; // 802BD140
  c->r[6]=c->r[4]+0x00000010u; // 802BD144
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,1,2);} // 802BD148
  c->r[4]=R8(c->r[1]+0x00000018u); // 802BD14C
  c->r[0]=R8(c->r[6]+0x00000000u); // 802BD150
  cmpu(c,0,c->r[4],c->r[0]); // 802BD154
  if (!crb(c,0)) { goto L_802BD16C; } // 802BD158
L_802BD15C:;
  {uint32_t ea=c->r[6]+0xFFFFFFFCu; c->r[0]=R8(ea); c->r[6]=ea;} // 802BD15C
  cmpu(c,0,c->r[4],c->r[0]); // 802BD160
  if (crb(c,0)) { IRQCHK(c); goto L_802BD15C; } // 802BD164
  goto L_802BD17C; // 802BD168
L_802BD16C:;
  {uint32_t ea=c->r[6]+0x00000004u; c->r[0]=R8(ea); c->r[6]=ea;} // 802BD16C
  cmpu(c,0,c->r[0],c->r[4]); // 802BD170
  if (!crb(c,1)) { IRQCHK(c); goto L_802BD16C; } // 802BD174
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 802BD178
L_802BD17C:;
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,0,ea,1,2);} // 802BD17C
  fcmp(c,0,c->f[1],c->f[0]); // 802BD180
  if (!crb(c,2)) { goto L_802BD1A8; } // 802BD184
  c->r[0]=R32(c->r[6]+0x00000000u); // 802BD188
  c->r[0]=rotl(c->r[0],20)&0x00000FFFu; // 802BD18C
  W16(c->r[1]+0x00000010u,c->r[0]); // 802BD190
  {uint32_t ea=c->r[1]+0x00000010u; psq_load(c,2,ea,1,3);} // 802BD194
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD198
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD19C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD1A0
  goto L_802BD254; // 802BD1A4
L_802BD1A8:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 802BD1A8
  c->r[5]=c->r[6]+0x00000004u; // 802BD1AC
  c->r[0]=rotl(c->r[4],20)&0x00000FFFu; // 802BD1B0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 802BD1B4
  {uint32_t ea=c->r[1]+0x0000000Eu; psq_load(c,3,ea,1,3);} // 802BD1B8
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 802BD1BC
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD1C0
  c->r[0]=sraw(c,c->r[0],20); // 802BD1C4
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD1C8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 802BD1CC
  c->f[5]=c->ps1[5]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD1D0
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_load(c,6,ea,1,6);} // 802BD1D4
  c->r[3]=R32(c->r[6]+0x00000004u); // 802BD1D8
  c->r[0]=rotl(c->r[3],20)&0x00000FFFu; // 802BD1DC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 802BD1E0
  {uint32_t ea=c->r[1]+0x0000000Au; psq_load(c,3,ea,1,3);} // 802BD1E4
  c->r[0]=rotl(c->r[3],20)&0xFFF00000u; // 802BD1E8
  c->r[0]=sraw(c,c->r[0],20); // 802BD1EC
  W16(c->r[1]+0x00000008u,c->r[0]); // 802BD1F0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD1F4
  {uint32_t ea=c->r[1]+0x00000008u; psq_load(c,7,ea,1,6);} // 802BD1F8
  {uint32_t ea=c->r[6]+0x00000000u; psq_load(c,3,ea,1,2);} // 802BD1FC
  {uint32_t ea=c->r[5]+0x00000000u; psq_load(c,4,ea,1,2);} // 802BD200
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[0]); // 802BD204
  c->f[10]=c->ps1[10]=S(c->f[1]-c->f[3]); // 802BD208
  {uint32_t ea=c->r[2]+0xFFFFAB20u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD20C
  c->f[11]=c->ps1[11]=S(c->f[4]-c->f[3]); // 802BD210
  {uint32_t ea=c->r[2]+0xFFFFAB24u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD214
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 802BD218
  c->f[9]=c->ps1[9]=fres(c->f[11]); // 802BD21C
  {double t0=S(c->f[9]+c->f[9]), t1=S(c->ps1[9]+c->ps1[9]); c->f[8]=t0; c->ps1[8]=t1;} // 802BD220
  {double t0=S(c->f[9]*c->f[9]), t1=S(c->ps1[9]*c->ps1[9]); c->f[3]=t0; c->ps1[3]=t1;} // 802BD224
  {double t0=S(-std::fma(c->f[11],c->f[3],-c->f[8])), t1=S(-std::fma(c->ps1[11],c->ps1[3],-c->ps1[8])); c->f[9]=t0; c->ps1[9]=t1;} // 802BD228
  c->f[3]=c->ps1[3]=S(c->f[10]*c->f[9]); // 802BD22C
  c->f[8]=c->ps1[8]=S(std::fma(c->f[10],c->f[9],-c->f[4])); // 802BD230
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[3],-c->f[1])); // 802BD234
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[7]); // 802BD238
  c->f[4]=c->ps1[4]=S(c->f[10]*c->f[8]); // 802BD23C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 802BD240
  c->f[1]=c->ps1[1]=S(std::fma(c->f[8],c->f[6],c->f[2])); // 802BD244
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 802BD248
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[5])); // 802BD24C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 802BD250
L_802BD254:;
  c->r[1]=c->r[1]+0x00000020u; // 802BD254
  return; // 802BD258
}

// GetAnmRotation__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math5MTX34PQ34nw4r4math4VEC3RCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_802BD25C(Ctx* __restrict c) {
  trace_call(0x802BD25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BD25C
  c->r[0]=c->lr; // 802BD260
  W32(c->r[1]+0x00000094u,c->r[0]); // 802BD264
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 802BD268
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 802BD26C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 802BD270
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 802BD274
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 802BD278
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 802BD27C
  c->r[11]=c->r[1]+0x00000060u; // 802BD280
  c->lr=0x802BD288u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BD284
  c->r[31]=R32(c->r[6]+0x00000004u); // 802BD288
  c->r[9]=0u+0x43300000u; // 802BD28C
  c->r[0]=0u+0x18000000u; // 802BD290
  c->f[29]=c->f[1]; // 802BD294
  c->r[8]=rotl(c->r[31],0)&0x38000000u; // 802BD298
  W32(c->r[1]+0x00000030u,c->r[9]); // 802BD29C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 802BD2A0
  c->r[27]=c->r[3]|c->r[3]; // 802BD2A4
  W32(c->r[1]+0x00000038u,c->r[9]); // 802BD2A8
  c->r[28]=c->r[4]|c->r[4]; // 802BD2AC
  c->r[29]=c->r[6]|c->r[6]; // 802BD2B0
  c->r[30]=c->r[7]|c->r[7]; // 802BD2B4
  if (crb(c,2)) { goto L_802BD438; } // 802BD2B8
  if (!crb(c,0)) { goto L_802BD2EC; } // 802BD2BC
  c->r[0]=0u+0x08000000u; // 802BD2C0
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 802BD2C4
  if (crb(c,2)) { goto L_802BD330; } // 802BD2C8
  if (!crb(c,0)) { goto L_802BD2DC; } // 802BD2CC
  cmps(c,0,(int32_t)c->r[8],0); // 802BD2D0
  if (crb(c,2)) { goto L_802BD31C; } // 802BD2D4
  goto L_802BDC54; // 802BD2D8
L_802BD2DC:;
  c->r[0]=0u+0x10000000u; // 802BD2DC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 802BD2E0
  if (crb(c,2)) { goto L_802BD3B4; } // 802BD2E4
  goto L_802BDC54; // 802BD2E8
L_802BD2EC:;
  c->r[0]=0u+0x28000000u; // 802BD2EC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 802BD2F0
  if (crb(c,2)) { goto L_802BD7A0; } // 802BD2F4
  if (!crb(c,0)) { goto L_802BD30C; } // 802BD2F8
  c->r[0]=0u+0x20000000u; // 802BD2FC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 802BD300
  if (crb(c,2)) { goto L_802BD4BC; } // 802BD304
  goto L_802BDC54; // 802BD308
L_802BD30C:;
  c->r[0]=0u+0x30000000u; // 802BD30C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 802BD310
  if (crb(c,2)) { goto L_802BDA9C; } // 802BD314
  goto L_802BDC54; // 802BD318
L_802BD31C:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BD31C
  c->r[30]=c->r[7]+0x0000000Cu; // 802BD320
  {uint32_t ea=c->r[7]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BD324
  {uint32_t ea=c->r[7]+0x00000008u; c->f[29]=c->ps1[29]=RF32(ea);} // 802BD328
  goto L_802BDC60; // 802BD32C
L_802BD330:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 802BD330
  c->r[3]=c->r[30]|c->r[30]; // 802BD334
  c->r[30]=c->r[7]+0x00000004u; // 802BD338
  if (crb(c,2)) { goto L_802BD348; } // 802BD33C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD340
  goto L_802BD354; // 802BD344
L_802BD348:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD348
  c->r[3]=c->r[0]+c->r[6]; // 802BD34C
  c->lr=0x802BD354u; f_802BD09C(c); // 802BD350
L_802BD354:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 802BD354
  c->f[31]=c->f[1]; // 802BD358
  c->r[3]=c->r[30]|c->r[30]; // 802BD35C
  c->r[30]=c->r[30]+0x00000004u; // 802BD360
  if (crb(c,2)) { goto L_802BD370; } // 802BD364
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD368
  goto L_802BD380; // 802BD36C
L_802BD370:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD370
  c->f[1]=c->f[29]; // 802BD374
  c->r[3]=c->r[0]+c->r[29]; // 802BD378
  c->lr=0x802BD380u; f_802BD09C(c); // 802BD37C
L_802BD380:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 802BD380
  c->f[30]=c->f[1]; // 802BD384
  c->r[3]=c->r[30]|c->r[30]; // 802BD388
  c->r[30]=c->r[30]+0x00000004u; // 802BD38C
  if (crb(c,2)) { goto L_802BD39C; } // 802BD390
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD394
  goto L_802BD3AC; // 802BD398
L_802BD39C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD39C
  c->f[1]=c->f[29]; // 802BD3A0
  c->r[3]=c->r[0]+c->r[29]; // 802BD3A4
  c->lr=0x802BD3ACu; f_802BD09C(c); // 802BD3A8
L_802BD3AC:;
  c->f[29]=c->f[1]; // 802BD3AC
  goto L_802BDC60; // 802BD3B0
L_802BD3B4:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 802BD3B4
  c->r[3]=c->r[30]|c->r[30]; // 802BD3B8
  c->r[30]=c->r[7]+0x00000004u; // 802BD3BC
  if (crb(c,2)) { goto L_802BD3CC; } // 802BD3C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD3C4
  goto L_802BD3D8; // 802BD3C8
L_802BD3CC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD3CC
  c->r[3]=c->r[0]+c->r[6]; // 802BD3D0
  c->lr=0x802BD3D8u; f_802BCF2C(c); // 802BD3D4
L_802BD3D8:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 802BD3D8
  c->f[31]=c->f[1]; // 802BD3DC
  c->r[3]=c->r[30]|c->r[30]; // 802BD3E0
  c->r[30]=c->r[30]+0x00000004u; // 802BD3E4
  if (crb(c,2)) { goto L_802BD3F4; } // 802BD3E8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD3EC
  goto L_802BD404; // 802BD3F0
L_802BD3F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD3F4
  c->f[1]=c->f[29]; // 802BD3F8
  c->r[3]=c->r[0]+c->r[29]; // 802BD3FC
  c->lr=0x802BD404u; f_802BCF2C(c); // 802BD400
L_802BD404:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 802BD404
  c->f[30]=c->f[1]; // 802BD408
  c->r[3]=c->r[30]|c->r[30]; // 802BD40C
  c->r[30]=c->r[30]+0x00000004u; // 802BD410
  if (crb(c,2)) { goto L_802BD420; } // 802BD414
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD418
  goto L_802BD430; // 802BD41C
L_802BD420:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD420
  c->f[1]=c->f[29]; // 802BD424
  c->r[3]=c->r[0]+c->r[29]; // 802BD428
  c->lr=0x802BD430u; f_802BCF2C(c); // 802BD42C
L_802BD430:;
  c->f[29]=c->f[1]; // 802BD430
  goto L_802BDC60; // 802BD434
L_802BD438:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 802BD438
  c->r[3]=c->r[30]|c->r[30]; // 802BD43C
  c->r[30]=c->r[7]+0x00000004u; // 802BD440
  if (crb(c,2)) { goto L_802BD450; } // 802BD444
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD448
  goto L_802BD45C; // 802BD44C
L_802BD450:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD450
  c->r[3]=c->r[0]+c->r[6]; // 802BD454
  c->lr=0x802BD45Cu; f_802BCE00(c); // 802BD458
L_802BD45C:;
  c->r[0]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[0]); // 802BD45C
  c->f[31]=c->f[1]; // 802BD460
  c->r[3]=c->r[30]|c->r[30]; // 802BD464
  c->r[30]=c->r[30]+0x00000004u; // 802BD468
  if (crb(c,2)) { goto L_802BD478; } // 802BD46C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD470
  goto L_802BD488; // 802BD474
L_802BD478:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD478
  c->f[1]=c->f[29]; // 802BD47C
  c->r[3]=c->r[0]+c->r[29]; // 802BD480
  c->lr=0x802BD488u; f_802BCE00(c); // 802BD484
L_802BD488:;
  c->r[0]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[0]); // 802BD488
  c->f[30]=c->f[1]; // 802BD48C
  c->r[3]=c->r[30]|c->r[30]; // 802BD490
  c->r[30]=c->r[30]+0x00000004u; // 802BD494
  if (crb(c,2)) { goto L_802BD4A4; } // 802BD498
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD49C
  goto L_802BD4B4; // 802BD4A0
L_802BD4A4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BD4A4
  c->f[1]=c->f[29]; // 802BD4A8
  c->r[3]=c->r[0]+c->r[29]; // 802BD4AC
  c->lr=0x802BD4B4u; f_802BCE00(c); // 802BD4B0
L_802BD4B4:;
  c->f[29]=c->f[1]; // 802BD4B4
  goto L_802BDC60; // 802BD4B8
L_802BD4BC:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 802BD4BC
  c->r[3]=c->r[30]|c->r[30]; // 802BD4C0
  c->r[0]=R16(c->r[5]+0x00000000u); // 802BD4C4
  c->r[30]=c->r[7]+0x00000004u; // 802BD4C8
  if (crb(c,2)) { goto L_802BD4D8; } // 802BD4CC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BD4D0
  goto L_802BD5B4; // 802BD4D4
L_802BD4D8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BD4D8
  c->r[4]=c->r[3]+c->r[6]; // 802BD4DC
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,1,3);} // 802BD4E0
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BD4E4
  c->r[5]=R16(c->r[1]+0x00000028u); // 802BD4E8
  fcmp(c,0,c->f[29],c->f[6]); // 802BD4EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD4F0
  if (!crb(c,2)) { goto L_802BD51C; } // 802BD4F4
  c->r[3]=R8(c->r[4]+0x00000008u); // 802BD4F8
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD4FC
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD500
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD504
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 802BD508
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD50C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD510
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD514
  goto L_802BD5B4; // 802BD518
L_802BD51C:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BD51C
  if (crb(c,1)) { goto L_802BD54C; } // 802BD520
  c->r[3]=c->r[4]+c->r[0]; // 802BD524
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD528
  c->r[3]=R8(c->r[3]+0x00000008u); // 802BD52C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD530
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD534
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD538
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 802BD53C
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD540
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD544
  goto L_802BD5B4; // 802BD548
L_802BD54C:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 802BD54C
  c->r[3]=c->r[4]+c->r[5]; // 802BD550
  c->r[3]=R8(c->r[3]+0x00000008u); // 802BD554
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[5]=RF64(ea);} // 802BD558
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD55C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD560
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802BD564
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BD568
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD56C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD570
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[4]); // 802BD574
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD578
  fcmp(c,0,c->f[6],c->f[4]); // 802BD57C
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD580
  if (!crb(c,2)) { goto L_802BD58C; } // 802BD584
  goto L_802BD5B4; // 802BD588
L_802BD58C:;
  c->r[3]=c->r[5]+0x00000001u; // 802BD58C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 802BD590
  c->r[3]=c->r[4]+c->r[3]; // 802BD594
  c->r[3]=R8(c->r[3]+0x00000008u); // 802BD598
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD59C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD5A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD5A4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD5A8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802BD5AC
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[0],c->f[31])); // 802BD5B0
L_802BD5B4:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 802BD5B4
  c->r[3]=c->r[30]|c->r[30]; // 802BD5B8
  c->r[30]=c->r[30]+0x00000004u; // 802BD5BC
  if (crb(c,2)) { goto L_802BD5CC; } // 802BD5C0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BD5C4
  goto L_802BD6A8; // 802BD5C8
L_802BD5CC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BD5CC
  c->r[4]=c->r[3]+c->r[6]; // 802BD5D0
  {uint32_t ea=c->r[1]+0x00000024u; psq_store(c,1,ea,1,3);} // 802BD5D4
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BD5D8
  c->r[5]=R16(c->r[1]+0x00000024u); // 802BD5DC
  fcmp(c,0,c->f[1],c->f[6]); // 802BD5E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD5E4
  if (!crb(c,2)) { goto L_802BD610; } // 802BD5E8
  c->r[3]=R8(c->r[4]+0x00000008u); // 802BD5EC
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD5F0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD5F4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD5F8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 802BD5FC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD600
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD604
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD608
  goto L_802BD6A8; // 802BD60C
L_802BD610:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BD610
  if (crb(c,1)) { goto L_802BD640; } // 802BD614
  c->r[3]=c->r[4]+c->r[0]; // 802BD618
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD61C
  c->r[3]=R8(c->r[3]+0x00000008u); // 802BD620
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD624
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD628
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD62C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 802BD630
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD634
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD638
  goto L_802BD6A8; // 802BD63C
L_802BD640:;
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 802BD640
  c->r[3]=c->r[4]+c->r[5]; // 802BD644
  c->r[3]=R8(c->r[3]+0x00000008u); // 802BD648
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[5]=RF64(ea);} // 802BD64C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD650
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD654
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802BD658
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BD65C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD660
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD664
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 802BD668
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD66C
  fcmp(c,0,c->f[6],c->f[4]); // 802BD670
  c->f[30]=c->ps1[30]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD674
  if (!crb(c,2)) { goto L_802BD680; } // 802BD678
  goto L_802BD6A8; // 802BD67C
L_802BD680:;
  c->r[3]=c->r[5]+0x00000001u; // 802BD680
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 802BD684
  c->r[3]=c->r[4]+c->r[3]; // 802BD688
  c->r[3]=R8(c->r[3]+0x00000008u); // 802BD68C
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD690
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD694
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD698
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD69C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 802BD6A0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[0],c->f[30])); // 802BD6A4
L_802BD6A8:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 802BD6A8
  c->r[3]=c->r[30]|c->r[30]; // 802BD6AC
  c->r[30]=c->r[30]+0x00000004u; // 802BD6B0
  if (crb(c,2)) { goto L_802BD6C0; } // 802BD6B4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 802BD6B8
  goto L_802BDC60; // 802BD6BC
L_802BD6C0:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BD6C0
  c->r[4]=c->r[3]+c->r[6]; // 802BD6C4
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,1,ea,1,3);} // 802BD6C8
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BD6CC
  c->r[5]=R16(c->r[1]+0x00000020u); // 802BD6D0
  fcmp(c,0,c->f[1],c->f[6]); // 802BD6D4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD6D8
  if (!crb(c,2)) { goto L_802BD704; } // 802BD6DC
  c->r[0]=R8(c->r[4]+0x00000008u); // 802BD6E0
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[3]=RF64(ea);} // 802BD6E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BD6E8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD6EC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 802BD6F0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD6F4
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802BD6F8
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD6FC
  goto L_802BDC60; // 802BD700
L_802BD704:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BD704
  if (crb(c,1)) { goto L_802BD734; } // 802BD708
  c->r[3]=c->r[4]+c->r[0]; // 802BD70C
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[3]=RF64(ea);} // 802BD710
  c->r[0]=R8(c->r[3]+0x00000008u); // 802BD714
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD718
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802BD71C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD720
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 802BD724
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802BD728
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD72C
  goto L_802BDC60; // 802BD730
L_802BD734:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 802BD734
  c->r[3]=c->r[4]+c->r[5]; // 802BD738
  c->r[0]=R8(c->r[3]+0x00000008u); // 802BD73C
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[5]=RF64(ea);} // 802BD740
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD744
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802BD748
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802BD74C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BD750
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD754
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD758
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 802BD75C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD760
  fcmp(c,0,c->f[6],c->f[1]); // 802BD764
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD768
  if (!crb(c,2)) { goto L_802BD774; } // 802BD76C
  goto L_802BDC60; // 802BD770
L_802BD774:;
  c->r[0]=c->r[5]+0x00000001u; // 802BD774
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 802BD778
  c->r[3]=c->r[4]+c->r[0]; // 802BD77C
  c->r[0]=R8(c->r[3]+0x00000008u); // 802BD780
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BD784
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD788
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD78C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD790
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 802BD794
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 802BD798
  goto L_802BDC60; // 802BD79C
L_802BD7A0:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 802BD7A0
  c->r[3]=c->r[30]|c->r[30]; // 802BD7A4
  c->r[0]=R16(c->r[5]+0x00000000u); // 802BD7A8
  c->r[30]=c->r[7]+0x00000004u; // 802BD7AC
  if (crb(c,2)) { goto L_802BD7BC; } // 802BD7B0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BD7B4
  goto L_802BD8A0; // 802BD7B8
L_802BD7BC:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BD7BC
  c->r[4]=c->r[3]+c->r[6]; // 802BD7C0
  {uint32_t ea=c->r[1]+0x0000001Cu; psq_store(c,29,ea,1,3);} // 802BD7C4
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BD7C8
  c->r[5]=R16(c->r[1]+0x0000001Cu); // 802BD7CC
  fcmp(c,0,c->f[29],c->f[6]); // 802BD7D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD7D4
  if (!crb(c,2)) { goto L_802BD800; } // 802BD7D8
  c->r[3]=R16(c->r[4]+0x00000008u); // 802BD7DC
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD7E0
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD7E4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD7E8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 802BD7EC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD7F0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD7F4
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD7F8
  goto L_802BD8A0; // 802BD7FC
L_802BD800:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BD800
  if (crb(c,1)) { goto L_802BD834; } // 802BD804
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 802BD808
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD80C
  c->r[3]=c->r[4]+c->r[3]; // 802BD810
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD814
  c->r[3]=R16(c->r[3]+0x00000008u); // 802BD818
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD81C
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD820
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 802BD824
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD828
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD82C
  goto L_802BD8A0; // 802BD830
L_802BD834:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 802BD834
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 802BD838
  c->r[3]=c->r[4]+c->r[3]; // 802BD83C
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[5]=RF64(ea);} // 802BD840
  c->r[3]=R16(c->r[3]+0x00000008u); // 802BD844
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD848
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD84C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802BD850
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BD854
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD858
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD85C
  c->f[4]=c->ps1[4]=S(c->f[29]-c->f[4]); // 802BD860
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD864
  fcmp(c,0,c->f[6],c->f[4]); // 802BD868
  c->f[31]=c->ps1[31]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD86C
  if (!crb(c,2)) { goto L_802BD878; } // 802BD870
  goto L_802BD8A0; // 802BD874
L_802BD878:;
  c->r[3]=c->r[5]+0x00000001u; // 802BD878
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 802BD87C
  c->r[3]=c->r[4]+c->r[3]; // 802BD880
  c->r[3]=R16(c->r[3]+0x00000008u); // 802BD884
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD888
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD88C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD890
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD894
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802BD898
  c->f[31]=c->ps1[31]=S(std::fma(c->f[4],c->f[0],c->f[31])); // 802BD89C
L_802BD8A0:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 802BD8A0
  c->r[3]=c->r[30]|c->r[30]; // 802BD8A4
  c->r[30]=c->r[30]+0x00000004u; // 802BD8A8
  if (crb(c,2)) { goto L_802BD8B8; } // 802BD8AC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BD8B0
  goto L_802BD99C; // 802BD8B4
L_802BD8B8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BD8B8
  c->r[4]=c->r[3]+c->r[6]; // 802BD8BC
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,1,ea,1,3);} // 802BD8C0
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BD8C4
  c->r[5]=R16(c->r[1]+0x00000018u); // 802BD8C8
  fcmp(c,0,c->f[1],c->f[6]); // 802BD8CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD8D0
  if (!crb(c,2)) { goto L_802BD8FC; } // 802BD8D4
  c->r[3]=R16(c->r[4]+0x00000008u); // 802BD8D8
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD8DC
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD8E0
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD8E4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=RF64(ea);} // 802BD8E8
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD8EC
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD8F0
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD8F4
  goto L_802BD99C; // 802BD8F8
L_802BD8FC:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BD8FC
  if (crb(c,1)) { goto L_802BD930; } // 802BD900
  c->r[3]=rotl(c->r[0],1)&0x0001FFFEu; // 802BD904
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[4]=RF64(ea);} // 802BD908
  c->r[3]=c->r[4]+c->r[3]; // 802BD90C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD910
  c->r[3]=R16(c->r[3]+0x00000008u); // 802BD914
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD918
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD91C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 802BD920
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 802BD924
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 802BD928
  goto L_802BD99C; // 802BD92C
L_802BD930:;
  c->r[3]=rotl(c->r[5],1)&0x0001FFFEu; // 802BD930
  W32(c->r[1]+0x00000034u,c->r[5]); // 802BD934
  c->r[3]=c->r[4]+c->r[3]; // 802BD938
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[5]=RF64(ea);} // 802BD93C
  c->r[3]=R16(c->r[3]+0x00000008u); // 802BD940
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD944
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 802BD948
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802BD94C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BD950
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BD954
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BD958
  c->f[4]=c->ps1[4]=S(c->f[1]-c->f[4]); // 802BD95C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD960
  fcmp(c,0,c->f[6],c->f[4]); // 802BD964
  c->f[30]=c->ps1[30]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD968
  if (!crb(c,2)) { goto L_802BD974; } // 802BD96C
  goto L_802BD99C; // 802BD970
L_802BD974:;
  c->r[3]=c->r[5]+0x00000001u; // 802BD974
  c->r[3]=rotl(c->r[3],1)&0x0001FFFEu; // 802BD978
  c->r[3]=c->r[4]+c->r[3]; // 802BD97C
  c->r[3]=R16(c->r[3]+0x00000008u); // 802BD980
  W32(c->r[1]+0x00000034u,c->r[3]); // 802BD984
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BD988
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BD98C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BD990
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 802BD994
  c->f[30]=c->ps1[30]=S(std::fma(c->f[4],c->f[0],c->f[30])); // 802BD998
L_802BD99C:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 802BD99C
  c->r[3]=c->r[30]|c->r[30]; // 802BD9A0
  c->r[30]=c->r[30]+0x00000004u; // 802BD9A4
  if (crb(c,2)) { goto L_802BD9B4; } // 802BD9A8
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 802BD9AC
  goto L_802BDC60; // 802BD9B0
L_802BD9B4:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BD9B4
  c->r[4]=c->r[3]+c->r[6]; // 802BD9B8
  {uint32_t ea=c->r[1]+0x00000014u; psq_store(c,1,ea,1,3);} // 802BD9BC
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[6]=c->ps1[6]=RF32(ea);} // 802BD9C0
  c->r[5]=R16(c->r[1]+0x00000014u); // 802BD9C4
  fcmp(c,0,c->f[1],c->f[6]); // 802BD9C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BD9CC
  if (!crb(c,2)) { goto L_802BD9F8; } // 802BD9D0
  c->r[0]=R16(c->r[4]+0x00000008u); // 802BD9D4
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[3]=RF64(ea);} // 802BD9D8
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802BD9DC
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BD9E0
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 802BD9E4
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BD9E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802BD9EC
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BD9F0
  goto L_802BDC60; // 802BD9F4
L_802BD9F8:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BD9F8
  if (crb(c,1)) { goto L_802BDA2C; } // 802BD9FC
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 802BDA00
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[3]=RF64(ea);} // 802BDA04
  c->r[3]=c->r[4]+c->r[0]; // 802BDA08
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDA0C
  c->r[0]=R16(c->r[3]+0x00000008u); // 802BDA10
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDA14
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BDA18
  {uint32_t ea=c->r[1]+0x00000030u; c->f[2]=RF64(ea);} // 802BDA1C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 802BDA20
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[2],c->f[0])); // 802BDA24
  goto L_802BDC60; // 802BDA28
L_802BDA2C:;
  c->r[0]=rotl(c->r[5],1)&0x0001FFFEu; // 802BDA2C
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 802BDA30
  c->r[3]=c->r[4]+c->r[0]; // 802BDA34
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[5]=RF64(ea);} // 802BDA38
  c->r[0]=R16(c->r[3]+0x00000008u); // 802BDA3C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BDA40
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BDA44
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[5]); // 802BDA48
  {uint32_t ea=c->r[4]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BDA4C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BDA50
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BDA54
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 802BDA58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BDA5C
  fcmp(c,0,c->f[6],c->f[1]); // 802BDA60
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BDA64
  if (!crb(c,2)) { goto L_802BDA70; } // 802BDA68
  goto L_802BDC60; // 802BDA6C
L_802BDA70:;
  c->r[0]=c->r[5]+0x00000001u; // 802BDA70
  c->r[0]=rotl(c->r[0],1)&0x0001FFFEu; // 802BDA74
  c->r[3]=c->r[4]+c->r[0]; // 802BDA78
  c->r[0]=R16(c->r[3]+0x00000008u); // 802BDA7C
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802BDA80
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BDA84
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 802BDA88
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[2])); // 802BDA8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 802BDA90
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 802BDA94
  goto L_802BDC60; // 802BDA98
L_802BDA9C:;
  c->r[0]=rotl(c->r[31],0)&0x00010000u; cr0(c,c->r[0]); // 802BDA9C
  c->r[3]=c->r[30]|c->r[30]; // 802BDAA0
  c->r[0]=R16(c->r[5]+0x00000000u); // 802BDAA4
  c->r[30]=c->r[7]+0x00000004u; // 802BDAA8
  if (crb(c,2)) { goto L_802BDAB8; } // 802BDAAC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDAB0
  goto L_802BDB30; // 802BDAB4
L_802BDAB8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BDAB8
  c->r[4]=c->r[3]+c->r[6]; // 802BDABC
  {uint32_t ea=c->r[1]+0x00000010u; psq_store(c,29,ea,1,3);} // 802BDAC0
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BDAC4
  c->r[5]=R16(c->r[1]+0x00000010u); // 802BDAC8
  fcmp(c,0,c->f[29],c->f[3]); // 802BDACC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BDAD0
  if (!crb(c,2)) { goto L_802BDAE0; } // 802BDAD4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDAD8
  goto L_802BDB30; // 802BDADC
L_802BDAE0:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BDAE0
  if (crb(c,1)) { goto L_802BDAF4; } // 802BDAE4
  c->r[3]=rotl(c->r[0],2)&0x0003FFFCu; // 802BDAE8
  {uint32_t ea=c->r[4]+c->r[3]; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDAEC
  goto L_802BDB30; // 802BDAF0
L_802BDAF4:;
  W32(c->r[1]+0x00000034u,c->r[5]); // 802BDAF4
  c->r[3]=rotl(c->r[5],2)&0x0003FFFCu; // 802BDAF8
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[2]=RF64(ea);} // 802BDAFC
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BDB00
  {uint32_t ea=c->r[4]+c->r[3]; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDB04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BDB08
  c->f[2]=c->ps1[2]=S(c->f[29]-c->f[0]); // 802BDB0C
  fcmp(c,0,c->f[3],c->f[2]); // 802BDB10
  if (!crb(c,2)) { goto L_802BDB1C; } // 802BDB14
  goto L_802BDB30; // 802BDB18
L_802BDB1C:;
  c->r[3]=c->r[5]+0x00000001u; // 802BDB1C
  c->r[3]=rotl(c->r[3],2)&0x0003FFFCu; // 802BDB20
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDB24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 802BDB28
  c->f[31]=c->ps1[31]=S(std::fma(c->f[2],c->f[0],c->f[31])); // 802BDB2C
L_802BDB30:;
  c->r[3]=rotl(c->r[31],0)&0x00020000u; cr0(c,c->r[3]); // 802BDB30
  c->r[3]=c->r[30]|c->r[30]; // 802BDB34
  c->r[30]=c->r[30]+0x00000004u; // 802BDB38
  if (crb(c,2)) { goto L_802BDB48; } // 802BDB3C
  {uint32_t ea=c->r[3]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BDB40
  goto L_802BDBC0; // 802BDB44
L_802BDB48:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BDB48
  c->r[4]=c->r[3]+c->r[6]; // 802BDB4C
  {uint32_t ea=c->r[1]+0x0000000Cu; psq_store(c,1,ea,1,3);} // 802BDB50
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BDB54
  c->r[5]=R16(c->r[1]+0x0000000Cu); // 802BDB58
  fcmp(c,0,c->f[1],c->f[3]); // 802BDB5C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BDB60
  if (!crb(c,2)) { goto L_802BDB70; } // 802BDB64
  {uint32_t ea=c->r[4]+0x00000000u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BDB68
  goto L_802BDBC0; // 802BDB6C
L_802BDB70:;
  cmpu(c,0,c->r[0],c->r[5]); // 802BDB70
  if (crb(c,1)) { goto L_802BDB84; } // 802BDB74
  c->r[3]=rotl(c->r[0],2)&0x0003FFFCu; // 802BDB78
  {uint32_t ea=c->r[4]+c->r[3]; c->f[30]=c->ps1[30]=RF32(ea);} // 802BDB7C
  goto L_802BDBC0; // 802BDB80
L_802BDB84:;
  W32(c->r[1]+0x0000003Cu,c->r[5]); // 802BDB84
  c->r[3]=rotl(c->r[5],2)&0x0003FFFCu; // 802BDB88
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[2]=RF64(ea);} // 802BDB8C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 802BDB90
  {uint32_t ea=c->r[4]+c->r[3]; c->f[30]=c->ps1[30]=RF32(ea);} // 802BDB94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BDB98
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[0]); // 802BDB9C
  fcmp(c,0,c->f[3],c->f[2]); // 802BDBA0
  if (!crb(c,2)) { goto L_802BDBAC; } // 802BDBA4
  goto L_802BDBC0; // 802BDBA8
L_802BDBAC:;
  c->r[3]=c->r[5]+0x00000001u; // 802BDBAC
  c->r[3]=rotl(c->r[3],2)&0x0003FFFCu; // 802BDBB0
  {uint32_t ea=c->r[4]+c->r[3]; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDBB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 802BDBB8
  c->f[30]=c->ps1[30]=S(std::fma(c->f[2],c->f[0],c->f[30])); // 802BDBBC
L_802BDBC0:;
  c->r[3]=rotl(c->r[31],0)&0x00040000u; cr0(c,c->r[3]); // 802BDBC0
  c->r[3]=c->r[30]|c->r[30]; // 802BDBC4
  c->r[30]=c->r[30]+0x00000004u; // 802BDBC8
  if (crb(c,2)) { goto L_802BDBD8; } // 802BDBCC
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 802BDBD0
  goto L_802BDC60; // 802BDBD4
L_802BDBD8:;
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BDBD8
  c->r[3]=c->r[3]+c->r[6]; // 802BDBDC
  {uint32_t ea=c->r[1]+0x00000008u; psq_store(c,1,ea,1,3);} // 802BDBE0
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[3]=c->ps1[3]=RF32(ea);} // 802BDBE4
  c->r[4]=R16(c->r[1]+0x00000008u); // 802BDBE8
  fcmp(c,0,c->f[1],c->f[3]); // 802BDBEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BDBF0
  if (!crb(c,2)) { goto L_802BDC00; } // 802BDBF4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[29]=c->ps1[29]=RF32(ea);} // 802BDBF8
  goto L_802BDC60; // 802BDBFC
L_802BDC00:;
  cmpu(c,0,c->r[0],c->r[4]); // 802BDC00
  if (crb(c,1)) { goto L_802BDC14; } // 802BDC04
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 802BDC08
  {uint32_t ea=c->r[3]+c->r[0]; c->f[29]=c->ps1[29]=RF32(ea);} // 802BDC0C
  goto L_802BDC60; // 802BDC10
L_802BDC14:;
  W32(c->r[1]+0x00000034u,c->r[4]); // 802BDC14
  c->r[0]=rotl(c->r[4],2)&0x0003FFFCu; // 802BDC18
  {uint32_t ea=c->r[2]+0xFFFFAB30u; c->f[2]=RF64(ea);} // 802BDC1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 802BDC20
  {uint32_t ea=c->r[3]+c->r[0]; c->f[29]=c->ps1[29]=RF32(ea);} // 802BDC24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BDC28
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 802BDC2C
  fcmp(c,0,c->f[3],c->f[1]); // 802BDC30
  if (!crb(c,2)) { goto L_802BDC3C; } // 802BDC34
  goto L_802BDC60; // 802BDC38
L_802BDC3C:;
  c->r[0]=c->r[4]+0x00000001u; // 802BDC3C
  c->r[0]=rotl(c->r[0],2)&0x0003FFFCu; // 802BDC40
  {uint32_t ea=c->r[3]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDC44
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 802BDC48
  c->f[29]=c->ps1[29]=S(std::fma(c->f[1],c->f[0],c->f[29])); // 802BDC4C
  goto L_802BDC60; // 802BDC50
L_802BDC54:;
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDC54
  c->f[30]=c->f[31]; // 802BDC58
  c->f[29]=c->f[31]; // 802BDC5C
L_802BDC60:;
  {uint32_t ea=c->r[2]+0xFFFFAB28u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDC60
  c->r[3]=c->r[27]|c->r[27]; // 802BDC64
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 802BDC68
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[30]); // 802BDC6C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[29]); // 802BDC70
  c->lr=0x802BDC78u; f_8026CE94(c); // 802BDC74
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 802BDC78
  c->r[3]=c->r[30]|c->r[30]; // 802BDC7C
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 802BDC80
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[29]);} // 802BDC84
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 802BDC88
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 802BDC8C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 802BDC90
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 802BDC94
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 802BDC98
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 802BDC9C
  c->r[11]=c->r[1]+0x00000060u; // 802BDCA0
  c->lr=0x802BDCA8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BDCA4
  c->r[0]=R32(c->r[1]+0x00000094u); // 802BDCA8
  c->lr=c->r[0]; // 802BDCAC
  c->r[1]=c->r[1]+0x00000090u; // 802BDCB0
  return; // 802BDCB4
}

// GetAnmTranslation__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r4math4VEC3PCQ34nw4r3g3d17ResAnmChrNodeDataPCQ44nw4r3g3d17ResAnmChrNodeData7AnmDataf
void f_802BDCB8(Ctx* __restrict c) {
  trace_call(0x802BDCB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BDCB8
  c->r[0]=c->lr; // 802BDCBC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802BDCC0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802BDCC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802BDCC8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802BDCCC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802BDCD0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 802BDCD4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 802BDCD8
  c->f[29]=c->f[1]; // 802BDCDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BDCE0
  c->r[31]=R32(c->r[4]+0x00000004u); // 802BDCE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BDCE8
  c->r[30]=c->r[5]|c->r[5]; // 802BDCEC
  c->r[6]=rotl(c->r[31],0)&0xC0000000u; cr0(c,c->r[6]); // 802BDCF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802BDCF4
  c->r[29]=c->r[4]|c->r[4]; // 802BDCF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802BDCFC
  c->r[28]=c->r[3]|c->r[3]; // 802BDD00
  if (crb(c,2)) { goto L_802BDD40; } // 802BDD04
  if (!crb(c,0)) { goto L_802BDD30; } // 802BDD08
  c->r[0]=0u+0xC0000000u; // 802BDD0C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802BDD10
  if (crb(c,2)) { goto L_802BDE54; } // 802BDD14
  if (!crb(c,0)) { goto L_802BDED4; } // 802BDD18
  c->r[3]=0u+0x80000000u; // 802BDD1C
  c->r[0]=c->r[3]+0x00000001u; // 802BDD20
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802BDD24
  if (!crb(c,0)) { goto L_802BDED4; } // 802BDD28
  goto L_802BDDD4; // 802BDD2C
L_802BDD30:;
  c->r[0]=0u+0x40000000u; // 802BDD30
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 802BDD34
  if (crb(c,2)) { goto L_802BDD54; } // 802BDD38
  goto L_802BDED4; // 802BDD3C
L_802BDD40:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDD40
  c->r[30]=c->r[5]+0x0000000Cu; // 802BDD44
  {uint32_t ea=c->r[5]+0x00000004u; c->f[30]=c->ps1[30]=RF32(ea);} // 802BDD48
  {uint32_t ea=c->r[5]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDD4C
  goto L_802BDEE0; // 802BDD50
L_802BDD54:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 802BDD54
  c->r[3]=c->r[30]|c->r[30]; // 802BDD58
  c->r[30]=c->r[5]+0x00000004u; // 802BDD5C
  if (crb(c,2)) { goto L_802BDD6C; } // 802BDD60
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDD64
  goto L_802BDD78; // 802BDD68
L_802BDD6C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDD6C
  c->r[3]=c->r[0]+c->r[4]; // 802BDD70
  c->lr=0x802BDD78u; f_802BD09C(c); // 802BDD74
L_802BDD78:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 802BDD78
  c->f[31]=c->f[1]; // 802BDD7C
  c->r[3]=c->r[30]|c->r[30]; // 802BDD80
  c->r[30]=c->r[30]+0x00000004u; // 802BDD84
  if (crb(c,2)) { goto L_802BDD94; } // 802BDD88
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDD8C
  goto L_802BDDA4; // 802BDD90
L_802BDD94:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDD94
  c->f[1]=c->f[29]; // 802BDD98
  c->r[3]=c->r[0]+c->r[29]; // 802BDD9C
  c->lr=0x802BDDA4u; f_802BD09C(c); // 802BDDA0
L_802BDDA4:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 802BDDA4
  c->f[30]=c->f[1]; // 802BDDA8
  c->r[3]=c->r[30]|c->r[30]; // 802BDDAC
  c->r[30]=c->r[30]+0x00000004u; // 802BDDB0
  if (crb(c,2)) { goto L_802BDDC0; } // 802BDDB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDDB8
  goto L_802BDEE0; // 802BDDBC
L_802BDDC0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDDC0
  c->f[1]=c->f[29]; // 802BDDC4
  c->r[3]=c->r[0]+c->r[29]; // 802BDDC8
  c->lr=0x802BDDD0u; f_802BD09C(c); // 802BDDCC
  goto L_802BDEE0; // 802BDDD0
L_802BDDD4:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 802BDDD4
  c->r[3]=c->r[30]|c->r[30]; // 802BDDD8
  c->r[30]=c->r[5]+0x00000004u; // 802BDDDC
  if (crb(c,2)) { goto L_802BDDEC; } // 802BDDE0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDDE4
  goto L_802BDDF8; // 802BDDE8
L_802BDDEC:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDDEC
  c->r[3]=c->r[0]+c->r[4]; // 802BDDF0
  c->lr=0x802BDDF8u; f_802BCF2C(c); // 802BDDF4
L_802BDDF8:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 802BDDF8
  c->f[31]=c->f[1]; // 802BDDFC
  c->r[3]=c->r[30]|c->r[30]; // 802BDE00
  c->r[30]=c->r[30]+0x00000004u; // 802BDE04
  if (crb(c,2)) { goto L_802BDE14; } // 802BDE08
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDE0C
  goto L_802BDE24; // 802BDE10
L_802BDE14:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDE14
  c->f[1]=c->f[29]; // 802BDE18
  c->r[3]=c->r[0]+c->r[29]; // 802BDE1C
  c->lr=0x802BDE24u; f_802BCF2C(c); // 802BDE20
L_802BDE24:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 802BDE24
  c->f[30]=c->f[1]; // 802BDE28
  c->r[3]=c->r[30]|c->r[30]; // 802BDE2C
  c->r[30]=c->r[30]+0x00000004u; // 802BDE30
  if (crb(c,2)) { goto L_802BDE40; } // 802BDE34
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDE38
  goto L_802BDEE0; // 802BDE3C
L_802BDE40:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDE40
  c->f[1]=c->f[29]; // 802BDE44
  c->r[3]=c->r[0]+c->r[29]; // 802BDE48
  c->lr=0x802BDE50u; f_802BCF2C(c); // 802BDE4C
  goto L_802BDEE0; // 802BDE50
L_802BDE54:;
  c->r[0]=rotl(c->r[31],0)&0x00080000u; cr0(c,c->r[0]); // 802BDE54
  c->r[3]=c->r[30]|c->r[30]; // 802BDE58
  c->r[30]=c->r[5]+0x00000004u; // 802BDE5C
  if (crb(c,2)) { goto L_802BDE6C; } // 802BDE60
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDE64
  goto L_802BDE78; // 802BDE68
L_802BDE6C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDE6C
  c->r[3]=c->r[0]+c->r[4]; // 802BDE70
  c->lr=0x802BDE78u; f_802BCE00(c); // 802BDE74
L_802BDE78:;
  c->r[0]=rotl(c->r[31],0)&0x00100000u; cr0(c,c->r[0]); // 802BDE78
  c->f[31]=c->f[1]; // 802BDE7C
  c->r[3]=c->r[30]|c->r[30]; // 802BDE80
  c->r[30]=c->r[30]+0x00000004u; // 802BDE84
  if (crb(c,2)) { goto L_802BDE94; } // 802BDE88
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDE8C
  goto L_802BDEA4; // 802BDE90
L_802BDE94:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDE94
  c->f[1]=c->f[29]; // 802BDE98
  c->r[3]=c->r[0]+c->r[29]; // 802BDE9C
  c->lr=0x802BDEA4u; f_802BCE00(c); // 802BDEA0
L_802BDEA4:;
  c->r[0]=rotl(c->r[31],0)&0x00200000u; cr0(c,c->r[0]); // 802BDEA4
  c->f[30]=c->f[1]; // 802BDEA8
  c->r[3]=c->r[30]|c->r[30]; // 802BDEAC
  c->r[30]=c->r[30]+0x00000004u; // 802BDEB0
  if (crb(c,2)) { goto L_802BDEC0; } // 802BDEB4
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BDEB8
  goto L_802BDEE0; // 802BDEBC
L_802BDEC0:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 802BDEC0
  c->f[1]=c->f[29]; // 802BDEC4
  c->r[3]=c->r[0]+c->r[29]; // 802BDEC8
  c->lr=0x802BDED0u; f_802BCE00(c); // 802BDECC
  goto L_802BDEE0; // 802BDED0
L_802BDED4:;
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BDED4
  c->f[30]=c->f[31]; // 802BDED8
  c->f[1]=c->f[31]; // 802BDEDC
L_802BDEE0:;
  {uint32_t ea=c->r[28]+0x00000000u; WF32(ea,c->f[31]);} // 802BDEE0
  c->r[3]=c->r[30]|c->r[30]; // 802BDEE4
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[30]);} // 802BDEE8
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 802BDEEC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802BDEF0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802BDEF4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 802BDEF8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 802BDEFC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 802BDF00
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 802BDF04
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BDF08
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BDF0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802BDF10
  c->r[28]=R32(c->r[1]+0x00000010u); // 802BDF14
  c->r[0]=R32(c->r[1]+0x00000054u); // 802BDF18
  c->lr=c->r[0]; // 802BDF1C
  c->r[1]=c->r[1]+0x00000050u; // 802BDF20
  return; // 802BDF24
}

// GetAnmResult___Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BDF28(Ctx* __restrict c) {
  trace_call(0x802BDF28u);
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDF28
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802BDF2C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802BDF30
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BDF34
  c->r[3]=c->r[3]+0x0000001Cu; // 802BDF38
  f_80353594(c); return; // 802BDF3C
}

// GetAnmResult_T__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BDF40(Ctx* __restrict c) {
  trace_call(0x802BDF40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BDF40
  c->r[0]=c->lr; // 802BDF44
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BDF48
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802BDF4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802BDF50
  c->f[31]=c->f[1]; // 802BDF54
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDF58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BDF5C
  c->r[31]=c->r[5]|c->r[5]; // 802BDF60
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BDF64
  c->r[30]=c->r[3]|c->r[3]; // 802BDF68
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802BDF6C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802BDF70
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BDF74
  c->r[3]=c->r[3]+0x0000001Cu; // 802BDF78
  c->lr=0x802BDF80u; f_80353594(c); // 802BDF7C
  c->f[1]=c->f[31]; // 802BDF80
  c->r[4]=c->r[31]|c->r[31]; // 802BDF84
  c->r[3]=c->r[1]+0x00000008u; // 802BDF88
  c->r[5]=c->r[31]+0x00000008u; // 802BDF8C
  c->lr=0x802BDF94u; f_802BDCB8(c); // 802BDF90
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDF94
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 802BDF98
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDF9C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 802BDFA0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDFA4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 802BDFA8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802BDFAC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802BDFB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BDFB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BDFB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BDFBC
  c->lr=c->r[0]; // 802BDFC0
  c->r[1]=c->r[1]+0x00000030u; // 802BDFC4
  return; // 802BDFC8
}

// GetAnmResult_R__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BDFCC(Ctx* __restrict c) {
  trace_call(0x802BDFCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BDFCC
  c->r[0]=c->lr; // 802BDFD0
  c->r[6]=c->r[5]|c->r[5]; // 802BDFD4
  c->r[5]=c->r[4]|c->r[4]; // 802BDFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BDFDC
  c->r[4]=c->r[3]+0x00000010u; // 802BDFE0
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BDFE4
  c->r[7]=c->r[6]+0x00000008u; // 802BDFE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BDFEC
  c->r[31]=c->r[3]|c->r[3]; // 802BDFF0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802BDFF4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802BDFF8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BDFFC
  c->r[3]=c->r[3]+0x0000001Cu; // 802BE000
  c->lr=0x802BE008u; f_802BD25C(c); // 802BE004
  c->r[0]=R32(c->r[31]+0x00000000u); // 802BE008
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE00C
  c->r[0]=c->r[0]|0x80000000u; // 802BE010
  W32(c->r[31]+0x00000000u,c->r[0]); // 802BE014
  {uint32_t ea=c->r[31]+0x00000028u; WF32(ea,c->f[0]);} // 802BE018
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[0]);} // 802BE01C
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[0]);} // 802BE020
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BE024
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BE028
  c->lr=c->r[0]; // 802BE02C
  c->r[1]=c->r[1]+0x00000010u; // 802BE030
  return; // 802BE034
}

// GetAnmResult_S__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BE038(Ctx* __restrict c) {
  trace_call(0x802BE038u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE038
  c->r[0]=c->lr; // 802BE03C
  c->r[4]=c->r[5]|c->r[5]; // 802BE040
  c->r[5]=c->r[5]+0x00000008u; // 802BE044
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BE048
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BE04C
  c->r[31]=c->r[3]|c->r[3]; // 802BE050
  c->r[3]=c->r[3]+0x00000004u; // 802BE054
  c->lr=0x802BE05Cu; f_802BCB48(c); // 802BE058
  c->r[3]=c->r[31]+0x0000001Cu; // 802BE05C
  c->lr=0x802BE064u; f_80353594(c); // 802BE060
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BE064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BE068
  c->lr=c->r[0]; // 802BE06C
  c->r[1]=c->r[1]+0x00000010u; // 802BE070
  return; // 802BE074
}

// GetAnmResult_RT__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BE078(Ctx* __restrict c) {
  trace_call(0x802BE078u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE078
  c->r[0]=c->lr; // 802BE07C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BE080
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802BE084
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802BE088
  c->f[31]=c->f[1]; // 802BE08C
  {uint32_t ea=c->r[2]+0xFFFFAB1Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE090
  c->r[7]=c->r[5]+0x00000008u; // 802BE094
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BE098
  c->r[31]=c->r[5]|c->r[5]; // 802BE09C
  c->r[5]=c->r[4]|c->r[4]; // 802BE0A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BE0A4
  c->r[30]=c->r[3]|c->r[3]; // 802BE0A8
  c->r[6]=c->r[31]|c->r[31]; // 802BE0AC
  c->r[4]=c->r[3]+0x00000010u; // 802BE0B0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 802BE0B4
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 802BE0B8
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 802BE0BC
  c->r[3]=c->r[3]+0x0000001Cu; // 802BE0C0
  c->lr=0x802BE0C8u; f_802BD25C(c); // 802BE0C4
  c->r[0]=R32(c->r[30]+0x00000000u); // 802BE0C8
  c->r[5]=c->r[3]|c->r[3]; // 802BE0CC
  c->f[1]=c->f[31]; // 802BE0D0
  c->r[4]=c->r[31]|c->r[31]; // 802BE0D4
  c->r[0]=c->r[0]|0x80000000u; // 802BE0D8
  c->r[3]=c->r[1]+0x00000008u; // 802BE0DC
  W32(c->r[30]+0x00000000u,c->r[0]); // 802BE0E0
  c->lr=0x802BE0E8u; f_802BDCB8(c); // 802BE0E4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE0E8
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 802BE0EC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE0F0
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 802BE0F4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE0F8
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 802BE0FC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802BE100
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802BE104
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BE108
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BE10C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BE110
  c->lr=c->r[0]; // 802BE114
  c->r[1]=c->r[1]+0x00000030u; // 802BE118
  return; // 802BE11C
}

// GetAnmResult_SR__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BE120(Ctx* __restrict c) {
  trace_call(0x802BE120u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE120
  c->r[0]=c->lr; // 802BE124
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BE128
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802BE12C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802BE130
  c->f[31]=c->f[1]; // 802BE134
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BE138
  c->r[31]=c->r[5]|c->r[5]; // 802BE13C
  c->r[5]=c->r[5]+0x00000008u; // 802BE140
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BE144
  c->r[30]=c->r[4]|c->r[4]; // 802BE148
  c->r[4]=c->r[31]|c->r[31]; // 802BE14C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802BE150
  c->r[29]=c->r[3]|c->r[3]; // 802BE154
  c->r[3]=c->r[3]+0x00000004u; // 802BE158
  c->lr=0x802BE160u; f_802BCB48(c); // 802BE15C
  c->f[1]=c->f[31]; // 802BE160
  c->r[7]=c->r[3]|c->r[3]; // 802BE164
  c->r[5]=c->r[30]|c->r[30]; // 802BE168
  c->r[6]=c->r[31]|c->r[31]; // 802BE16C
  c->r[3]=c->r[29]+0x0000001Cu; // 802BE170
  c->r[4]=c->r[29]+0x00000010u; // 802BE174
  c->lr=0x802BE17Cu; f_802BD25C(c); // 802BE178
  c->r[0]=R32(c->r[29]+0x00000000u); // 802BE17C
  {uint32_t ea=c->r[2]+0xFFFFAB18u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE180
  c->r[0]=c->r[0]|0x80000000u; // 802BE184
  W32(c->r[29]+0x00000000u,c->r[0]); // 802BE188
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 802BE18C
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 802BE190
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 802BE194
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802BE198
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802BE19C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BE1A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BE1A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 802BE1A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BE1AC
  c->lr=c->r[0]; // 802BE1B0
  c->r[1]=c->r[1]+0x00000030u; // 802BE1B4
  return; // 802BE1B8
}

// GetAnmResult_ST__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BE1BC(Ctx* __restrict c) {
  trace_call(0x802BE1BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE1BC
  c->r[0]=c->lr; // 802BE1C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BE1C4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802BE1C8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802BE1CC
  c->f[31]=c->f[1]; // 802BE1D0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802BE1D4
  W32(c->r[1]+0x00000028u,c->r[30]); // 802BE1D8
  c->r[30]=c->r[5]|c->r[5]; // 802BE1DC
  c->r[4]=c->r[30]|c->r[30]; // 802BE1E0
  c->r[5]=c->r[5]+0x00000008u; // 802BE1E4
  W32(c->r[1]+0x00000024u,c->r[29]); // 802BE1E8
  c->r[29]=c->r[3]|c->r[3]; // 802BE1EC
  c->r[3]=c->r[3]+0x00000004u; // 802BE1F0
  c->lr=0x802BE1F8u; f_802BCB48(c); // 802BE1F4
  c->r[31]=c->r[3]|c->r[3]; // 802BE1F8
  c->r[3]=c->r[29]+0x0000001Cu; // 802BE1FC
  c->lr=0x802BE204u; f_80353594(c); // 802BE200
  c->f[1]=c->f[31]; // 802BE204
  c->r[4]=c->r[30]|c->r[30]; // 802BE208
  c->r[5]=c->r[31]|c->r[31]; // 802BE20C
  c->r[3]=c->r[1]+0x00000008u; // 802BE210
  c->lr=0x802BE218u; f_802BDCB8(c); // 802BE214
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE218
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 802BE21C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE220
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 802BE224
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE228
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 802BE22C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802BE230
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802BE234
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802BE238
  c->r[30]=R32(c->r[1]+0x00000028u); // 802BE23C
  c->r[29]=R32(c->r[1]+0x00000024u); // 802BE240
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BE244
  c->lr=c->r[0]; // 802BE248
  c->r[1]=c->r[1]+0x00000040u; // 802BE24C
  return; // 802BE250
}

// GetAnmResult_SRT__Q34nw4r3g3d27@unnamed@g3d_resanmchr_cpp@FPQ34nw4r3g3d12ChrAnmResultRCQ34nw4r3g3d17ResAnmChrInfoDataPCQ34nw4r3g3d17ResAnmChrNodeDataf
void f_802BE254(Ctx* __restrict c) {
  trace_call(0x802BE254u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE254
  c->r[0]=c->lr; // 802BE258
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BE25C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802BE260
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802BE264
  c->f[31]=c->f[1]; // 802BE268
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802BE26C
  c->r[31]=c->r[5]|c->r[5]; // 802BE270
  c->r[5]=c->r[5]+0x00000008u; // 802BE274
  W32(c->r[1]+0x00000028u,c->r[30]); // 802BE278
  c->r[30]=c->r[4]|c->r[4]; // 802BE27C
  c->r[4]=c->r[31]|c->r[31]; // 802BE280
  W32(c->r[1]+0x00000024u,c->r[29]); // 802BE284
  c->r[29]=c->r[3]|c->r[3]; // 802BE288
  c->r[3]=c->r[3]+0x00000004u; // 802BE28C
  c->lr=0x802BE294u; f_802BCB48(c); // 802BE290
  c->f[1]=c->f[31]; // 802BE294
  c->r[7]=c->r[3]|c->r[3]; // 802BE298
  c->r[5]=c->r[30]|c->r[30]; // 802BE29C
  c->r[6]=c->r[31]|c->r[31]; // 802BE2A0
  c->r[3]=c->r[29]+0x0000001Cu; // 802BE2A4
  c->r[4]=c->r[29]+0x00000010u; // 802BE2A8
  c->lr=0x802BE2B0u; f_802BD25C(c); // 802BE2AC
  c->f[1]=c->f[31]; // 802BE2B0
  c->r[5]=c->r[3]|c->r[3]; // 802BE2B4
  c->r[4]=c->r[31]|c->r[31]; // 802BE2B8
  c->r[3]=c->r[1]+0x00000008u; // 802BE2BC
  c->lr=0x802BE2C4u; f_802BDCB8(c); // 802BE2C0
  c->r[0]=R32(c->r[29]+0x00000000u); // 802BE2C4
  c->r[0]=c->r[0]|0x80000000u; // 802BE2C8
  W32(c->r[29]+0x00000000u,c->r[0]); // 802BE2CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE2D0
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 802BE2D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE2D8
  {uint32_t ea=c->r[29]+0x00000038u; WF32(ea,c->f[0]);} // 802BE2DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE2E0
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 802BE2E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802BE2E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802BE2EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802BE2F0
  c->r[30]=R32(c->r[1]+0x00000028u); // 802BE2F4
  c->r[29]=R32(c->r[1]+0x00000024u); // 802BE2F8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BE2FC
  c->lr=c->r[0]; // 802BE300
  c->r[1]=c->r[1]+0x00000040u; // 802BE304
  return; // 802BE308
}

// GetAnmResult__Q34nw4r3g3d9ResAnmChrCFPQ34nw4r3g3d12ChrAnmResultUlf
void f_802BE30C(Ctx* __restrict c) {
  trace_call(0x802BE30Cu);
  c->r[6]=R32(c->r[3]+0x00000000u); // 802BE30C
  c->r[0]=R32(c->r[6]+0x00000010u); // 802BE310
  cmps(c,0,(int32_t)c->r[0],0); // 802BE314
  if (crb(c,2)) { goto L_802BE324; } // 802BE318
  c->r[0]=c->r[6]+c->r[0]; // 802BE31C
  goto L_802BE328; // 802BE320
L_802BE324:;
  c->r[0]=0u+0x00000000u; // 802BE324
L_802BE328:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BE328
  if (crb(c,2)) { goto L_802BE358; } // 802BE32C
  c->r[5]=c->r[5]+0x00000001u; // 802BE330
  c->r[5]=rotl(c->r[5],4)&0xFFFFFFF0u; // 802BE334
  c->r[5]=c->r[0]+c->r[5]; // 802BE338
  c->r[5]=R32(c->r[5]+0x00000014u); // 802BE33C
  cmps(c,0,(int32_t)c->r[5],0); // 802BE340
  if (crb(c,2)) { goto L_802BE350; } // 802BE344
  c->r[5]=c->r[0]+c->r[5]; // 802BE348
  goto L_802BE35C; // 802BE34C
L_802BE350:;
  c->r[5]=0u+0x00000000u; // 802BE350
  goto L_802BE35C; // 802BE354
L_802BE358:;
  c->r[5]=0u+0x00000000u; // 802BE358
L_802BE35C:;
  c->r[8]=R32(c->r[5]+0x00000004u); // 802BE35C
  c->r[6]=0u+0x80440000u; // 802BE360
  c->r[7]=R32(c->r[3]+0x00000000u); // 802BE364
  c->r[6]=c->r[6]+0xFFFFC3C8u; // 802BE368
  c->r[0]=rotl(c->r[8],12)&0x0000001Cu; // 802BE36C
  c->r[3]=rotl(c->r[8],0)&0x00001FFFu; // 802BE370
  c->r[12]=R32(c->r[6]+c->r[0]); // 802BE374
  W32(c->r[4]+0x00000000u,c->r[3]); // 802BE378
  c->r[3]=c->r[4]|c->r[4]; // 802BE37C
  c->r[4]=c->r[7]+0x0000001Cu; // 802BE380
  c->ctr=c->r[12]; // 802BE384
  if (true) { dispatch(c,c->ctr); return; } // 802BE388
}

// fn_802BE38C
void f_802BE38C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE38C
  c->r[0]=c->lr; // 802BE390
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BE394
  c->r[11]=c->r[1]+0x00000030u; // 802BE398
  c->lr=0x802BE3A0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BE39C
  c->r[25]=R32(c->r[3]+0x00000000u); // 802BE3A0
  c->r[28]=c->r[3]|c->r[3]; // 802BE3A4
  c->r[29]=c->r[4]|c->r[4]; // 802BE3A8
  c->r[31]=0u+0x00000000u; // 802BE3AC
  c->r[0]=R32(c->r[25]+0x00000014u); // 802BE3B0
  c->r[30]=0u+0x00000000u; // 802BE3B4
  cmps(c,0,(int32_t)c->r[0],0); // 802BE3B8
  if (crb(c,2)) { goto L_802BE448; } // 802BE3BC
  c->r[3]=c->r[29]|c->r[29]; // 802BE3C0
  c->lr=0x802BE3C8u; f_802BEE70(c); // 802BE3C4
  cmps(c,0,(int32_t)c->r[3],0); // 802BE3C8
  if (crb(c,2)) { goto L_802BE448; } // 802BE3CC
  c->r[4]=R32(c->r[28]+0x00000000u); // 802BE3D0
  c->r[3]=0u+0x00000001u; // 802BE3D4
  c->r[31]=0u+0x00000001u; // 802BE3D8
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BE3DC
  cmps(c,0,(int32_t)c->r[0],0); // 802BE3E0
  if (crb(c,2)) { goto L_802BE3F8; } // 802BE3E4
  c->r[0]=R16(c->r[4]+0x00000018u); // 802BE3E8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802BE3EC
  if (!crb(c,2)) { goto L_802BE3F8; } // 802BE3F0
  c->r[3]=0u+0x00000000u; // 802BE3F4
L_802BE3F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802BE3F8
  if (!crb(c,2)) { goto L_802BE444; } // 802BE3FC
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BE400
  cmps(c,0,(int32_t)c->r[0],0); // 802BE404
  if (crb(c,2)) { goto L_802BE418; } // 802BE408
  c->r[3]=c->r[4]+c->r[0]; // 802BE40C
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 802BE410
  goto L_802BE41C; // 802BE414
L_802BE418:;
  c->r[0]=0u+0x00000000u; // 802BE418
L_802BE41C:;
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BE41C
  c->r[3]=c->r[29]|c->r[29]; // 802BE420
  c->r[4]=c->r[1]+0x0000000Cu; // 802BE424
  c->lr=0x802BE42Cu; f_802BEFB0(c); // 802BE428
  cmps(c,0,(int32_t)c->r[3],0); // 802BE42C
  if (crb(c,2)) { goto L_802BE448; } // 802BE430
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BE434
  c->r[30]=0u+0x00000001u; // 802BE438
  W16(c->r[25]+0x00000018u,c->r[0]); // 802BE43C
  goto L_802BE448; // 802BE440
L_802BE444:;
  c->r[30]=0u+0x00000001u; // 802BE444
L_802BE448:;
  c->r[3]=c->r[29]|c->r[29]; // 802BE448
  c->lr=0x802BE450u; f_802BEED0(c); // 802BE44C
  cmps(c,0,(int32_t)c->r[3],0); // 802BE450
  if (crb(c,2)) { goto L_802BE4D4; } // 802BE454
  c->r[3]=R32(c->r[28]+0x00000000u); // 802BE458
  c->r[26]=c->r[25]+0x0000003Cu; // 802BE45C
  c->r[24]=0u+0x00000000u; // 802BE460
  c->r[25]=0u+0x00000000u; // 802BE464
  c->r[27]=R8(c->r[3]+0x0000001Au); // 802BE468
  c->r[31]=c->r[31]+c->r[27]; // 802BE46C
  goto L_802BE4CC; // 802BE470
L_802BE474:;
  c->r[0]=R16(c->r[26]+0x00000000u); // 802BE474
  cmpu(c,0,c->r[0],0x0000FFFFu); // 802BE478
  if (crb(c,2)) { goto L_802BE488; } // 802BE47C
  c->r[30]=c->r[30]+0x00000001u; // 802BE480
  goto L_802BE4C0; // 802BE484
L_802BE488:;
  c->r[5]=R32(c->r[28]+0x00000000u); // 802BE488
  c->r[3]=c->r[29]|c->r[29]; // 802BE48C
  c->r[4]=c->r[1]+0x00000008u; // 802BE490
  c->r[5]=c->r[5]+0x0000001Cu; // 802BE494
  c->r[0]=R32(c->r[5]+c->r[25]); // 802BE498
  c->r[5]=c->r[5]+c->r[0]; // 802BE49C
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802BE4A0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BE4A4
  c->lr=0x802BE4ACu; f_802BF164(c); // 802BE4A8
  cmps(c,0,(int32_t)c->r[3],0); // 802BE4AC
  if (crb(c,2)) { goto L_802BE4C0; } // 802BE4B0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BE4B4
  c->r[30]=c->r[30]+0x00000001u; // 802BE4B8
  W16(c->r[26]+0x00000000u,c->r[0]); // 802BE4BC
L_802BE4C0:;
  c->r[26]=c->r[26]+0x00000002u; // 802BE4C0
  c->r[25]=c->r[25]+0x00000004u; // 802BE4C4
  c->r[24]=c->r[24]+0x00000001u; // 802BE4C8
L_802BE4CC:;
  cmpu(c,0,c->r[24],c->r[27]); // 802BE4CC
  if (crb(c,0)) { IRQCHK(c); goto L_802BE474; } // 802BE4D0
L_802BE4D4:;
  c->r[0]=c->r[31]-c->r[30]; // 802BE4D4
  c->r[11]=c->r[1]+0x00000030u; // 802BE4D8
  c->r[0]=cntlz(c->r[0]); // 802BE4DC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802BE4E0
  c->lr=0x802BE4E8u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BE4E4
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BE4E8
  c->lr=c->r[0]; // 802BE4EC
  c->r[1]=c->r[1]+0x00000030u; // 802BE4F0
  return; // 802BE4F4
}

// fn_802BE4F8
void f_802BE4F8(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 802BE4F8
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BE4FC
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 802BE500
  c->r[6]=0u+0x00000000u; // 802BE504
  W16(c->r[5]+0x00000018u,c->r[3]); // 802BE508
  c->r[4]=c->r[5]|c->r[5]; // 802BE50C
  goto L_802BE520; // 802BE510
L_802BE514:;
  W16(c->r[4]+0x0000003Cu,c->r[3]); // 802BE514
  c->r[4]=c->r[4]+0x00000002u; // 802BE518
  c->r[6]=c->r[6]+0x00000001u; // 802BE51C
L_802BE520:;
  c->r[0]=R8(c->r[5]+0x0000001Au); // 802BE520
  cmpu(c,0,c->r[6],c->r[0]); // 802BE524
  if (crb(c,0)) { IRQCHK(c); goto L_802BE514; } // 802BE528
  return; // 802BE52C
}

// GetAnmResult__Q34nw4r3g3d14ResAnmAmbLightCFPQ34nw4r3g3d17AmbLightAnmResultf
void f_802BE530(Ctx* __restrict c) {
  trace_call(0x802BE530u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE530
  c->r[0]=c->lr; // 802BE534
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BE538
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BE53C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BE540
  c->r[31]=c->r[4]|c->r[4]; // 802BE544
  c->r[0]=R32(c->r[5]+0x00000004u); // 802BE548
  c->r[6]=R32(c->r[5]+0x00000014u); // 802BE54C
  cmps(c,0,(int32_t)c->r[0],0); // 802BE550
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 802BE554
  if (crb(c,2)) { goto L_802BE564; } // 802BE558
  c->r[3]=c->r[5]+c->r[0]; // 802BE55C
  goto L_802BE568; // 802BE560
L_802BE564:;
  c->r[3]=0u+0x00000000u; // 802BE564
L_802BE568:;
  {uint32_t ea=c->r[2]+0xFFFFAB38u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BE568
  fcmp(c,0,c->f[1],c->f[0]); // 802BE56C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BE570
  if (!crb(c,2)) { goto L_802BE57C; } // 802BE574
  goto L_802BE5BC; // 802BE578
L_802BE57C:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 802BE57C
  c->r[0]=0u+0x43300000u; // 802BE580
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BE584
  {uint32_t ea=c->r[2]+0xFFFFAB40u; c->f[2]=RF64(ea);} // 802BE588
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BE58C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802BE590
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BE594
  fcmp(c,0,c->f[0],c->f[1]); // 802BE598
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BE59C
  if (!crb(c,2)) { goto L_802BE5B8; } // 802BE5A0
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BE5A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BE5A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BE5AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BE5B0
  goto L_802BE5BC; // 802BE5B4
L_802BE5B8:;
  c->f[0]=c->f[1]; // 802BE5B8
L_802BE5BC:;
  c->r[0]=rotl(c->r[6],0)&0x00000003u; // 802BE5BC
  cmps(c,0,(int32_t)c->r[7],0); // 802BE5C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BE5C4
  if (crb(c,2)) { goto L_802BE5D4; } // 802BE5C8
  c->r[3]=R32(c->r[5]+0x00000018u); // 802BE5CC
  goto L_802BE5E8; // 802BE5D0
L_802BE5D4:;
  c->r[0]=R32(c->r[5]+0x00000018u); // 802BE5D4
  c->f[1]=c->f[0]; // 802BE5D8
  c->r[3]=c->r[5]+c->r[0]; // 802BE5DC
  c->r[3]=c->r[3]+0x00000018u; // 802BE5E0
  c->lr=0x802BE5E8u; f_802BBE6C(c); // 802BE5E4
L_802BE5E8:;
  W32(c->r[31]+0x00000004u,c->r[3]); // 802BE5E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BE5EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BE5F0
  c->lr=c->r[0]; // 802BE5F4
  c->r[1]=c->r[1]+0x00000020u; // 802BE5F8
  return; // 802BE5FC
}

// GetAnmResult__Q34nw4r3g3d11ResAnmLightCFPQ34nw4r3g3d14LightAnmResultf
void f_802BE600(Ctx* __restrict c) {
  trace_call(0x802BE600u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE600
  c->r[0]=c->lr; // 802BE604
  W32(c->r[1]+0x00000064u,c->r[0]); // 802BE608
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 802BE60C
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 802BE610
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 802BE614
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 802BE618
  c->r[11]=c->r[1]+0x00000040u; // 802BE61C
  c->lr=0x802BE624u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BE620
  c->r[31]=R32(c->r[3]+0x00000000u); // 802BE624
  c->f[30]=c->f[1]; // 802BE628
  c->r[27]=c->r[4]|c->r[4]; // 802BE62C
  c->r[0]=R32(c->r[31]+0x00000004u); // 802BE630
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 802BE634
  cmps(c,0,(int32_t)c->r[0],0); // 802BE638
  if (crb(c,2)) { goto L_802BE648; } // 802BE63C
  c->r[3]=c->r[31]+c->r[0]; // 802BE640
  goto L_802BE64C; // 802BE644
L_802BE648:;
  c->r[3]=0u+0x00000000u; // 802BE648
L_802BE64C:;
  {uint32_t ea=c->r[2]+0xFFFFAB48u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BE64C
  fcmp(c,0,c->f[1],c->f[31]); // 802BE650
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BE654
  if (!crb(c,2)) { goto L_802BE660; } // 802BE658
  goto L_802BE6A0; // 802BE65C
L_802BE660:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 802BE660
  c->r[0]=0u+0x43300000u; // 802BE664
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BE668
  {uint32_t ea=c->r[2]+0xFFFFAB50u; c->f[2]=RF64(ea);} // 802BE66C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BE670
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802BE674
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BE678
  fcmp(c,0,c->f[0],c->f[1]); // 802BE67C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BE680
  if (!crb(c,2)) { goto L_802BE69C; } // 802BE684
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BE688
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BE68C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BE690
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 802BE694
  goto L_802BE6A0; // 802BE698
L_802BE69C:;
  c->f[31]=c->f[30]; // 802BE69C
L_802BE6A0:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 802BE6A0
  c->r[0]=rotl(c->r[30],0)&0x0000003Fu; // 802BE6A4
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BE6A8
  if (!crb(c,2)) { goto L_802BE6FC; } // 802BE6AC
  c->f[1]=c->f[31]; // 802BE6B0
  c->lr=0x802BE6B8u; f_802EFA60(c); // 802BE6B4
  c->f[0]=c->ps1[0]=S(c->f[1]); // 802BE6B8
  c->r[0]=R32(c->r[31]+0x00000020u); // 802BE6BC
  c->r[3]=0u+0x80000000u; // 802BE6C0
  c->r[5]=c->r[31]+c->r[0]; // 802BE6C4
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 802BE6C8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 802BE6CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BE6D0
  c->r[4]=rotl(c->r[0],29)&0x1FFFFFFCu; // 802BE6D4
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 802BE6D8
  c->r[4]=c->r[5]+c->r[4]; // 802BE6DC
  c->r[4]=R32(c->r[4]+0x00000020u); // 802BE6E0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 802BE6E4
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 802BE6E8
  if (crb(c,2)) { goto L_802BE6FC; } // 802BE6EC
  c->r[0]=R32(c->r[27]+0x00000004u); // 802BE6F0
  c->r[0]=c->r[0]|0x00000004u; // 802BE6F4
  W32(c->r[27]+0x00000004u,c->r[0]); // 802BE6F8
L_802BE6FC:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 802BE6FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802BE700
  if (crb(c,2)) { goto L_802BE9D0; } // 802BE704
  c->r[29]=rotl(c->r[30],0)&0x00000003u; cr0(c,c->r[29]); // 802BE708
  c->r[28]=rotl(c->r[30],29)&0x00000001u; // 802BE70C
  c->r[26]=0u+0x00000001u; // 802BE710
  if (!crb(c,2)) { goto L_802BE724; } // 802BE714
  cmps(c,0,(int32_t)c->r[28],0); // 802BE718
  if (!crb(c,2)) { goto L_802BE724; } // 802BE71C
  c->r[26]=0u+0x00000000u; // 802BE720
L_802BE724:;
  c->r[0]=rotl(c->r[30],0)&0x00080000u; cr0(c,c->r[0]); // 802BE724
  c->r[25]=rotl(c->r[30],12)&0x00000001u; // 802BE728
  c->r[24]=rotl(c->r[30],11)&0x00000001u; // 802BE72C
  c->r[23]=rotl(c->r[30],10)&0x00000001u; // 802BE730
  if (crb(c,2)) { goto L_802BE740; } // 802BE734
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE738
  goto L_802BE754; // 802BE73C
L_802BE740:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 802BE740
  c->f[1]=c->f[30]; // 802BE744
  c->r[3]=c->r[31]+c->r[0]; // 802BE748
  c->r[3]=c->r[3]+0x00000024u; // 802BE74C
  c->lr=0x802BE754u; f_802BBD40(c); // 802BE750
L_802BE754:;
  cmps(c,0,(int32_t)c->r[25],0); // 802BE754
  {uint32_t ea=c->r[27]+0x00000008u; WF32(ea,c->f[1]);} // 802BE758
  if (crb(c,2)) { goto L_802BE768; } // 802BE75C
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE760
  goto L_802BE77C; // 802BE764
L_802BE768:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 802BE768
  c->f[1]=c->f[30]; // 802BE76C
  c->r[3]=c->r[31]+c->r[0]; // 802BE770
  c->r[3]=c->r[3]+0x00000028u; // 802BE774
  c->lr=0x802BE77Cu; f_802BBD40(c); // 802BE778
L_802BE77C:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BE77C
  {uint32_t ea=c->r[27]+0x0000000Cu; WF32(ea,c->f[1]);} // 802BE780
  if (crb(c,2)) { goto L_802BE790; } // 802BE784
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE788
  goto L_802BE7A4; // 802BE78C
L_802BE790:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 802BE790
  c->f[1]=c->f[30]; // 802BE794
  c->r[3]=c->r[31]+c->r[0]; // 802BE798
  c->r[3]=c->r[3]+0x0000002Cu; // 802BE79C
  c->lr=0x802BE7A4u; f_802BBD40(c); // 802BE7A0
L_802BE7A4:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BE7A4
  {uint32_t ea=c->r[27]+0x00000010u; WF32(ea,c->f[1]);} // 802BE7A8
  if (crb(c,2)) { goto L_802BE7B8; } // 802BE7AC
  c->r[3]=R32(c->r[31]+0x00000030u); // 802BE7B0
  goto L_802BE7CC; // 802BE7B4
L_802BE7B8:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 802BE7B8
  c->f[1]=c->f[31]; // 802BE7BC
  c->r[3]=c->r[31]+c->r[0]; // 802BE7C0
  c->r[3]=c->r[3]+0x00000030u; // 802BE7C4
  c->lr=0x802BE7CCu; f_802BBE6C(c); // 802BE7C8
L_802BE7CC:;
  cmps(c,0,(int32_t)c->r[26],0); // 802BE7CC
  W32(c->r[27]+0x00000020u,c->r[3]); // 802BE7D0
  if (crb(c,2)) { goto L_802BE858; } // 802BE7D4
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 802BE7D8
  c->r[23]=rotl(c->r[30],7)&0x00000001u; // 802BE7DC
  c->r[24]=rotl(c->r[30],6)&0x00000001u; // 802BE7E0
  if (crb(c,2)) { goto L_802BE7F0; } // 802BE7E4
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE7E8
  goto L_802BE804; // 802BE7EC
L_802BE7F0:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 802BE7F0
  c->f[1]=c->f[30]; // 802BE7F4
  c->r[3]=c->r[31]+c->r[0]; // 802BE7F8
  c->r[3]=c->r[3]+0x00000034u; // 802BE7FC
  c->lr=0x802BE804u; f_802BBD40(c); // 802BE800
L_802BE804:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BE804
  {uint32_t ea=c->r[27]+0x00000014u; WF32(ea,c->f[1]);} // 802BE808
  if (crb(c,2)) { goto L_802BE818; } // 802BE80C
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE810
  goto L_802BE82C; // 802BE814
L_802BE818:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 802BE818
  c->f[1]=c->f[30]; // 802BE81C
  c->r[3]=c->r[31]+c->r[0]; // 802BE820
  c->r[3]=c->r[3]+0x00000038u; // 802BE824
  c->lr=0x802BE82Cu; f_802BBD40(c); // 802BE828
L_802BE82C:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BE82C
  {uint32_t ea=c->r[27]+0x00000018u; WF32(ea,c->f[1]);} // 802BE830
  if (crb(c,2)) { goto L_802BE840; } // 802BE834
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE838
  goto L_802BE854; // 802BE83C
L_802BE840:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 802BE840
  c->f[1]=c->f[30]; // 802BE844
  c->r[3]=c->r[31]+c->r[0]; // 802BE848
  c->r[3]=c->r[3]+0x0000003Cu; // 802BE84C
  c->lr=0x802BE854u; f_802BBD40(c); // 802BE850
L_802BE854:;
  {uint32_t ea=c->r[27]+0x0000001Cu; WF32(ea,c->f[1]);} // 802BE854
L_802BE858:;
  cmps(c,0,(int32_t)c->r[29],1); // 802BE858
  if (crb(c,2)) { goto L_802BE96C; } // 802BE85C
  if (!crb(c,0)) { goto L_802BE870; } // 802BE860
  cmps(c,0,(int32_t)c->r[29],0); // 802BE864
  if (!crb(c,0)) { goto L_802BE87C; } // 802BE868
  goto L_802BE96C; // 802BE86C
L_802BE870:;
  cmps(c,0,(int32_t)c->r[29],3); // 802BE870
  if (!crb(c,0)) { goto L_802BE96C; } // 802BE874
  goto L_802BE8DC; // 802BE878
L_802BE87C:;
  c->r[0]=rotl(c->r[30],0)&0x10000000u; cr0(c,c->r[0]); // 802BE87C
  c->r[0]=R32(c->r[31]+0x00000040u); // 802BE880
  c->r[23]=rotl(c->r[30],3)&0x00000001u; // 802BE884
  W32(c->r[27]+0x00000024u,c->r[0]); // 802BE888
  if (crb(c,2)) { goto L_802BE898; } // 802BE88C
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE890
  goto L_802BE8AC; // 802BE894
L_802BE898:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 802BE898
  c->f[1]=c->f[30]; // 802BE89C
  c->r[3]=c->r[31]+c->r[0]; // 802BE8A0
  c->r[3]=c->r[3]+0x00000044u; // 802BE8A4
  c->lr=0x802BE8ACu; f_802BBD40(c); // 802BE8A8
L_802BE8AC:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BE8AC
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 802BE8B0
  if (crb(c,2)) { goto L_802BE8C0; } // 802BE8B4
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE8B8
  goto L_802BE8D4; // 802BE8BC
L_802BE8C0:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 802BE8C0
  c->f[1]=c->f[30]; // 802BE8C4
  c->r[3]=c->r[31]+c->r[0]; // 802BE8C8
  c->r[3]=c->r[3]+0x00000048u; // 802BE8CC
  c->lr=0x802BE8D4u; f_802BBD40(c); // 802BE8D0
L_802BE8D4:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 802BE8D4
  goto L_802BE96C; // 802BE8D8
L_802BE8DC:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 802BE8DC
  c->r[0]=rotl(c->r[30],0)&0x08000000u; cr0(c,c->r[0]); // 802BE8E0
  c->r[23]=rotl(c->r[30],4)&0x00000001u; // 802BE8E4
  c->r[24]=rotl(c->r[30],3)&0x00000001u; // 802BE8E8
  W32(c->r[27]+0x00000024u,c->r[3]); // 802BE8EC
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 802BE8F0
  W32(c->r[27]+0x00000030u,c->r[0]); // 802BE8F4
  if (crb(c,2)) { goto L_802BE904; } // 802BE8F8
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE8FC
  goto L_802BE918; // 802BE900
L_802BE904:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 802BE904
  c->f[1]=c->f[30]; // 802BE908
  c->r[3]=c->r[31]+c->r[0]; // 802BE90C
  c->r[3]=c->r[3]+0x00000050u; // 802BE910
  c->lr=0x802BE918u; f_802BBD40(c); // 802BE914
L_802BE918:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BE918
  {uint32_t ea=c->r[27]+0x00000034u; WF32(ea,c->f[1]);} // 802BE91C
  if (crb(c,2)) { goto L_802BE92C; } // 802BE920
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE924
  goto L_802BE940; // 802BE928
L_802BE92C:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 802BE92C
  c->f[1]=c->f[30]; // 802BE930
  c->r[3]=c->r[31]+c->r[0]; // 802BE934
  c->r[3]=c->r[3]+0x00000044u; // 802BE938
  c->lr=0x802BE940u; f_802BBD40(c); // 802BE93C
L_802BE940:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BE940
  {uint32_t ea=c->r[27]+0x00000028u; WF32(ea,c->f[1]);} // 802BE944
  if (crb(c,2)) { goto L_802BE954; } // 802BE948
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE94C
  goto L_802BE968; // 802BE950
L_802BE954:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 802BE954
  c->f[1]=c->f[30]; // 802BE958
  c->r[3]=c->r[31]+c->r[0]; // 802BE95C
  c->r[3]=c->r[3]+0x00000048u; // 802BE960
  c->lr=0x802BE968u; f_802BBD40(c); // 802BE964
L_802BE968:;
  {uint32_t ea=c->r[27]+0x0000002Cu; WF32(ea,c->f[1]);} // 802BE968
L_802BE96C:;
  cmps(c,0,(int32_t)c->r[28],0); // 802BE96C
  if (crb(c,2)) { goto L_802BE9D0; } // 802BE970
  c->r[0]=rotl(c->r[30],0)&0x40000000u; cr0(c,c->r[0]); // 802BE974
  c->r[23]=rotl(c->r[30],1)&0x00000001u; // 802BE978
  if (crb(c,2)) { goto L_802BE988; } // 802BE97C
  c->r[3]=R32(c->r[31]+0x00000054u); // 802BE980
  goto L_802BE99C; // 802BE984
L_802BE988:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 802BE988
  c->f[1]=c->f[31]; // 802BE98C
  c->r[3]=c->r[31]+c->r[0]; // 802BE990
  c->r[3]=c->r[3]+0x00000054u; // 802BE994
  c->lr=0x802BE99Cu; f_802BBE6C(c); // 802BE998
L_802BE99C:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BE99C
  W32(c->r[27]+0x00000038u,c->r[3]); // 802BE9A0
  if (crb(c,2)) { goto L_802BE9B0; } // 802BE9A4
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BE9A8
  goto L_802BE9C4; // 802BE9AC
L_802BE9B0:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 802BE9B0
  c->f[1]=c->f[30]; // 802BE9B4
  c->r[3]=c->r[31]+c->r[0]; // 802BE9B8
  c->r[3]=c->r[3]+0x00000058u; // 802BE9BC
  c->lr=0x802BE9C4u; f_802BBD40(c); // 802BE9C0
L_802BE9C4:;
  {uint32_t ea=c->r[27]+0x0000003Cu; WF32(ea,c->f[1]);} // 802BE9C4
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BE9C8
  W32(c->r[27]+0x00000000u,c->r[0]); // 802BE9CC
L_802BE9D0:;
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 802BE9D0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 802BE9D4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 802BE9D8
  c->r[11]=c->r[1]+0x00000040u; // 802BE9DC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 802BE9E0
  c->lr=0x802BE9E8u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BE9E4
  c->r[0]=R32(c->r[1]+0x00000064u); // 802BE9E8
  c->lr=c->r[0]; // 802BE9EC
  c->r[1]=c->r[1]+0x00000060u; // 802BE9F0
  return; // 802BE9F4
}

// GetAnmResult__Q34nw4r3g3d9ResAnmFogCFPQ34nw4r3g3d12FogAnmResultf
void f_802BE9F8(Ctx* __restrict c) {
  trace_call(0x802BE9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BE9F8
  c->r[0]=c->lr; // 802BE9FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 802BEA00
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 802BEA04
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 802BEA08
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 802BEA0C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 802BEA10
  c->f[30]=c->f[1]; // 802BEA14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802BEA18
  c->r[31]=R32(c->r[3]+0x00000000u); // 802BEA1C
  W32(c->r[1]+0x00000028u,c->r[30]); // 802BEA20
  W32(c->r[1]+0x00000024u,c->r[29]); // 802BEA24
  W32(c->r[1]+0x00000020u,c->r[28]); // 802BEA28
  c->r[28]=c->r[4]|c->r[4]; // 802BEA2C
  c->r[0]=R32(c->r[31]+0x00000004u); // 802BEA30
  c->r[5]=R32(c->r[31]+0x00000014u); // 802BEA34
  cmps(c,0,(int32_t)c->r[0],0); // 802BEA38
  if (crb(c,2)) { goto L_802BEA48; } // 802BEA3C
  c->r[3]=c->r[31]+c->r[0]; // 802BEA40
  goto L_802BEA4C; // 802BEA44
L_802BEA48:;
  c->r[3]=0u+0x00000000u; // 802BEA48
L_802BEA4C:;
  {uint32_t ea=c->r[2]+0xFFFFAB58u; c->f[31]=c->ps1[31]=RF32(ea);} // 802BEA4C
  fcmp(c,0,c->f[1],c->f[31]); // 802BEA50
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BEA54
  if (!crb(c,2)) { goto L_802BEA60; } // 802BEA58
  goto L_802BEAA0; // 802BEA5C
L_802BEA60:;
  c->r[3]=R16(c->r[3]+0x00000030u); // 802BEA60
  c->r[0]=0u+0x43300000u; // 802BEA64
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BEA68
  {uint32_t ea=c->r[2]+0xFFFFAB60u; c->f[2]=RF64(ea);} // 802BEA6C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BEA70
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 802BEA74
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 802BEA78
  fcmp(c,0,c->f[0],c->f[1]); // 802BEA7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 802BEA80
  if (!crb(c,2)) { goto L_802BEA9C; } // 802BEA84
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BEA88
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BEA8C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 802BEA90
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[2]); // 802BEA94
  goto L_802BEAA0; // 802BEA98
L_802BEA9C:;
  c->f[31]=c->f[30]; // 802BEA9C
L_802BEAA0:;
  c->r[0]=rotl(c->r[5],0)&0x20000000u; cr0(c,c->r[0]); // 802BEAA0
  c->r[0]=R32(c->r[31]+0x00000018u); // 802BEAA4
  c->r[30]=rotl(c->r[5],2)&0x00000001u; // 802BEAA8
  c->r[29]=rotl(c->r[5],1)&0x00000001u; // 802BEAAC
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BEAB0
  if (crb(c,2)) { goto L_802BEAC0; } // 802BEAB4
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEAB8
  goto L_802BEAD4; // 802BEABC
L_802BEAC0:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 802BEAC0
  c->f[1]=c->f[30]; // 802BEAC4
  c->r[3]=c->r[31]+c->r[0]; // 802BEAC8
  c->r[3]=c->r[3]+0x0000001Cu; // 802BEACC
  c->lr=0x802BEAD4u; f_802BBD40(c); // 802BEAD0
L_802BEAD4:;
  cmps(c,0,(int32_t)c->r[30],0); // 802BEAD4
  {uint32_t ea=c->r[28]+0x00000004u; WF32(ea,c->f[1]);} // 802BEAD8
  if (crb(c,2)) { goto L_802BEAE8; } // 802BEADC
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEAE0
  goto L_802BEAFC; // 802BEAE4
L_802BEAE8:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 802BEAE8
  c->f[1]=c->f[30]; // 802BEAEC
  c->r[3]=c->r[31]+c->r[0]; // 802BEAF0
  c->r[3]=c->r[3]+0x00000020u; // 802BEAF4
  c->lr=0x802BEAFCu; f_802BBD40(c); // 802BEAF8
L_802BEAFC:;
  cmps(c,0,(int32_t)c->r[29],0); // 802BEAFC
  {uint32_t ea=c->r[28]+0x00000008u; WF32(ea,c->f[1]);} // 802BEB00
  if (crb(c,2)) { goto L_802BEB10; } // 802BEB04
  c->r[3]=R32(c->r[31]+0x00000024u); // 802BEB08
  goto L_802BEB24; // 802BEB0C
L_802BEB10:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 802BEB10
  c->f[1]=c->f[31]; // 802BEB14
  c->r[3]=c->r[31]+c->r[0]; // 802BEB18
  c->r[3]=c->r[3]+0x00000024u; // 802BEB1C
  c->lr=0x802BEB24u; f_802BBE6C(c); // 802BEB20
L_802BEB24:;
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 802BEB24
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 802BEB28
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 802BEB2C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 802BEB30
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 802BEB34
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802BEB38
  c->r[30]=R32(c->r[1]+0x00000028u); // 802BEB3C
  c->r[29]=R32(c->r[1]+0x00000024u); // 802BEB40
  c->r[28]=R32(c->r[1]+0x00000020u); // 802BEB44
  c->r[0]=R32(c->r[1]+0x00000054u); // 802BEB48
  c->lr=c->r[0]; // 802BEB4C
  c->r[1]=c->r[1]+0x00000050u; // 802BEB50
  return; // 802BEB54
}

// GetAnmResult__Q34nw4r3g3d12ResAnmCameraCFPQ34nw4r3g3d15CameraAnmResultf
void f_802BEB58(Ctx* __restrict c) {
  trace_call(0x802BEB58u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BEB58
  c->r[0]=c->lr; // 802BEB5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BEB60
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802BEB64
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802BEB68
  c->r[11]=c->r[1]+0x00000030u; // 802BEB6C
  c->lr=0x802BEB74u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BEB70
  c->r[31]=R32(c->r[3]+0x00000000u); // 802BEB74
  c->f[31]=c->f[1]; // 802BEB78
  c->r[26]=c->r[4]|c->r[4]; // 802BEB7C
  c->r[30]=R32(c->r[31]+0x00000018u); // 802BEB80
  c->r[3]=rotl(c->r[30],0)&0x00000003u; // 802BEB84
  c->r[0]=rotl(c->r[30],0)&0x00020000u; cr0(c,c->r[0]); // 802BEB88
  W32(c->r[4]+0x00000000u,c->r[3]); // 802BEB8C
  c->r[25]=rotl(c->r[30],14)&0x00000001u; // 802BEB90
  c->r[24]=rotl(c->r[30],13)&0x00000001u; // 802BEB94
  c->r[23]=rotl(c->r[30],12)&0x00000001u; // 802BEB98
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BEB9C
  c->r[29]=rotl(c->r[30],11)&0x00000001u; // 802BEBA0
  c->r[28]=rotl(c->r[30],10)&0x00000001u; // 802BEBA4
  c->r[27]=rotl(c->r[30],0)&0x00000001u; // 802BEBA8
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BEBAC
  if (crb(c,2)) { goto L_802BEBBC; } // 802BEBB0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEBB4
  goto L_802BEBCC; // 802BEBB8
L_802BEBBC:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 802BEBBC
  c->r[3]=c->r[31]+c->r[0]; // 802BEBC0
  c->r[3]=c->r[3]+0x00000020u; // 802BEBC4
  c->lr=0x802BEBCCu; f_802BBD40(c); // 802BEBC8
L_802BEBCC:;
  cmps(c,0,(int32_t)c->r[25],0); // 802BEBCC
  {uint32_t ea=c->r[26]+0x00000008u; WF32(ea,c->f[1]);} // 802BEBD0
  if (crb(c,2)) { goto L_802BEBE0; } // 802BEBD4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEBD8
  goto L_802BEBF4; // 802BEBDC
L_802BEBE0:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 802BEBE0
  c->f[1]=c->f[31]; // 802BEBE4
  c->r[3]=c->r[31]+c->r[0]; // 802BEBE8
  c->r[3]=c->r[3]+0x00000024u; // 802BEBEC
  c->lr=0x802BEBF4u; f_802BBD40(c); // 802BEBF0
L_802BEBF4:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BEBF4
  {uint32_t ea=c->r[26]+0x0000000Cu; WF32(ea,c->f[1]);} // 802BEBF8
  if (crb(c,2)) { goto L_802BEC08; } // 802BEBFC
  {uint32_t ea=c->r[31]+0x00000028u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEC00
  goto L_802BEC1C; // 802BEC04
L_802BEC08:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 802BEC08
  c->f[1]=c->f[31]; // 802BEC0C
  c->r[3]=c->r[31]+c->r[0]; // 802BEC10
  c->r[3]=c->r[3]+0x00000028u; // 802BEC14
  c->lr=0x802BEC1Cu; f_802BBD40(c); // 802BEC18
L_802BEC1C:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BEC1C
  {uint32_t ea=c->r[26]+0x00000010u; WF32(ea,c->f[1]);} // 802BEC20
  if (crb(c,2)) { goto L_802BEC30; } // 802BEC24
  {uint32_t ea=c->r[31]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEC28
  goto L_802BEC44; // 802BEC2C
L_802BEC30:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 802BEC30
  c->f[1]=c->f[31]; // 802BEC34
  c->r[3]=c->r[31]+c->r[0]; // 802BEC38
  c->r[3]=c->r[3]+0x0000002Cu; // 802BEC3C
  c->lr=0x802BEC44u; f_802BBD40(c); // 802BEC40
L_802BEC44:;
  cmps(c,0,(int32_t)c->r[29],0); // 802BEC44
  {uint32_t ea=c->r[26]+0x00000014u; WF32(ea,c->f[1]);} // 802BEC48
  if (crb(c,2)) { goto L_802BEC58; } // 802BEC4C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEC50
  goto L_802BEC6C; // 802BEC54
L_802BEC58:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 802BEC58
  c->f[1]=c->f[31]; // 802BEC5C
  c->r[3]=c->r[31]+c->r[0]; // 802BEC60
  c->r[3]=c->r[3]+0x00000030u; // 802BEC64
  c->lr=0x802BEC6Cu; f_802BBD40(c); // 802BEC68
L_802BEC6C:;
  cmps(c,0,(int32_t)c->r[28],0); // 802BEC6C
  {uint32_t ea=c->r[26]+0x00000018u; WF32(ea,c->f[1]);} // 802BEC70
  if (crb(c,2)) { goto L_802BEC80; } // 802BEC74
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEC78
  goto L_802BEC94; // 802BEC7C
L_802BEC80:;
  c->r[0]=R32(c->r[31]+0x00000034u); // 802BEC80
  c->f[1]=c->f[31]; // 802BEC84
  c->r[3]=c->r[31]+c->r[0]; // 802BEC88
  c->r[3]=c->r[3]+0x00000034u; // 802BEC8C
  c->lr=0x802BEC94u; f_802BBD40(c); // 802BEC90
L_802BEC94:;
  cmps(c,0,(int32_t)c->r[27],1); // 802BEC94
  {uint32_t ea=c->r[26]+0x0000001Cu; WF32(ea,c->f[1]);} // 802BEC98
  if (crb(c,2)) { goto L_802BED34; } // 802BEC9C
  if (!crb(c,0)) { goto L_802BEDE0; } // 802BECA0
  cmps(c,0,(int32_t)c->r[27],0); // 802BECA4
  if (!crb(c,0)) { goto L_802BECB0; } // 802BECA8
  goto L_802BEDE0; // 802BECAC
L_802BECB0:;
  c->r[0]=rotl(c->r[30],0)&0x20000000u; cr0(c,c->r[0]); // 802BECB0
  c->r[23]=rotl(c->r[30],2)&0x00000001u; // 802BECB4
  c->r[24]=rotl(c->r[30],1)&0x00000001u; // 802BECB8
  if (crb(c,2)) { goto L_802BECC8; } // 802BECBC
  {uint32_t ea=c->r[31]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BECC0
  goto L_802BECDC; // 802BECC4
L_802BECC8:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 802BECC8
  c->f[1]=c->f[31]; // 802BECCC
  c->r[3]=c->r[31]+c->r[0]; // 802BECD0
  c->r[3]=c->r[3]+0x00000038u; // 802BECD4
  c->lr=0x802BECDCu; f_802BBD40(c); // 802BECD8
L_802BECDC:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BECDC
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 802BECE0
  if (crb(c,2)) { goto L_802BECF0; } // 802BECE4
  {uint32_t ea=c->r[31]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BECE8
  goto L_802BED04; // 802BECEC
L_802BECF0:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 802BECF0
  c->f[1]=c->f[31]; // 802BECF4
  c->r[3]=c->r[31]+c->r[0]; // 802BECF8
  c->r[3]=c->r[3]+0x0000003Cu; // 802BECFC
  c->lr=0x802BED04u; f_802BBD40(c); // 802BED00
L_802BED04:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BED04
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 802BED08
  if (crb(c,2)) { goto L_802BED18; } // 802BED0C
  {uint32_t ea=c->r[31]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BED10
  goto L_802BED2C; // 802BED14
L_802BED18:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 802BED18
  c->f[1]=c->f[31]; // 802BED1C
  c->r[3]=c->r[31]+c->r[0]; // 802BED20
  c->r[3]=c->r[3]+0x00000040u; // 802BED24
  c->lr=0x802BED2Cu; f_802BBD40(c); // 802BED28
L_802BED2C:;
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 802BED2C
  goto L_802BEDE0; // 802BED30
L_802BED34:;
  c->r[0]=rotl(c->r[30],0)&0x02000000u; cr0(c,c->r[0]); // 802BED34
  c->r[23]=rotl(c->r[30],6)&0x00000001u; // 802BED38
  c->r[24]=rotl(c->r[30],5)&0x00000001u; // 802BED3C
  c->r[25]=rotl(c->r[30],4)&0x00000001u; // 802BED40
  if (crb(c,2)) { goto L_802BED50; } // 802BED44
  {uint32_t ea=c->r[31]+0x00000044u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BED48
  goto L_802BED64; // 802BED4C
L_802BED50:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 802BED50
  c->f[1]=c->f[31]; // 802BED54
  c->r[3]=c->r[31]+c->r[0]; // 802BED58
  c->r[3]=c->r[3]+0x00000044u; // 802BED5C
  c->lr=0x802BED64u; f_802BBD40(c); // 802BED60
L_802BED64:;
  cmps(c,0,(int32_t)c->r[23],0); // 802BED64
  {uint32_t ea=c->r[26]+0x00000020u; WF32(ea,c->f[1]);} // 802BED68
  if (crb(c,2)) { goto L_802BED78; } // 802BED6C
  {uint32_t ea=c->r[31]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BED70
  goto L_802BED8C; // 802BED74
L_802BED78:;
  c->r[0]=R32(c->r[31]+0x00000048u); // 802BED78
  c->f[1]=c->f[31]; // 802BED7C
  c->r[3]=c->r[31]+c->r[0]; // 802BED80
  c->r[3]=c->r[3]+0x00000048u; // 802BED84
  c->lr=0x802BED8Cu; f_802BBD40(c); // 802BED88
L_802BED8C:;
  cmps(c,0,(int32_t)c->r[24],0); // 802BED8C
  {uint32_t ea=c->r[26]+0x00000024u; WF32(ea,c->f[1]);} // 802BED90
  if (crb(c,2)) { goto L_802BEDA0; } // 802BED94
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BED98
  goto L_802BEDB4; // 802BED9C
L_802BEDA0:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 802BEDA0
  c->f[1]=c->f[31]; // 802BEDA4
  c->r[3]=c->r[31]+c->r[0]; // 802BEDA8
  c->r[3]=c->r[3]+0x0000004Cu; // 802BEDAC
  c->lr=0x802BEDB4u; f_802BBD40(c); // 802BEDB0
L_802BEDB4:;
  cmps(c,0,(int32_t)c->r[25],0); // 802BEDB4
  {uint32_t ea=c->r[26]+0x00000028u; WF32(ea,c->f[1]);} // 802BEDB8
  if (crb(c,2)) { goto L_802BEDC8; } // 802BEDBC
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEDC0
  goto L_802BEDDC; // 802BEDC4
L_802BEDC8:;
  c->r[0]=R32(c->r[31]+0x00000050u); // 802BEDC8
  c->f[1]=c->f[31]; // 802BEDCC
  c->r[3]=c->r[31]+c->r[0]; // 802BEDD0
  c->r[3]=c->r[3]+0x00000050u; // 802BEDD4
  c->lr=0x802BEDDCu; f_802BBD40(c); // 802BEDD8
L_802BEDDC:;
  {uint32_t ea=c->r[26]+0x0000002Cu; WF32(ea,c->f[1]);} // 802BEDDC
L_802BEDE0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 802BEDE0
  cmps(c,0,(int32_t)c->r[0],1); // 802BEDE4
  if (crb(c,2)) { goto L_802BEE28; } // 802BEDE8
  if (!crb(c,0)) { goto L_802BEE50; } // 802BEDEC
  cmps(c,0,(int32_t)c->r[0],0); // 802BEDF0
  if (!crb(c,0)) { goto L_802BEDFC; } // 802BEDF4
  goto L_802BEE50; // 802BEDF8
L_802BEDFC:;
  c->r[0]=rotl(c->r[30],0)&0x00800000u; cr0(c,c->r[0]); // 802BEDFC
  if (crb(c,2)) { goto L_802BEE0C; } // 802BEE00
  {uint32_t ea=c->r[31]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEE04
  goto L_802BEE20; // 802BEE08
L_802BEE0C:;
  c->r[0]=R32(c->r[31]+0x00000054u); // 802BEE0C
  c->f[1]=c->f[31]; // 802BEE10
  c->r[3]=c->r[31]+c->r[0]; // 802BEE14
  c->r[3]=c->r[3]+0x00000054u; // 802BEE18
  c->lr=0x802BEE20u; f_802BBD40(c); // 802BEE1C
L_802BEE20:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 802BEE20
  goto L_802BEE50; // 802BEE24
L_802BEE28:;
  c->r[0]=rotl(c->r[30],0)&0x01000000u; cr0(c,c->r[0]); // 802BEE28
  if (crb(c,2)) { goto L_802BEE38; } // 802BEE2C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BEE30
  goto L_802BEE4C; // 802BEE34
L_802BEE38:;
  c->r[0]=R32(c->r[31]+0x00000058u); // 802BEE38
  c->f[1]=c->f[31]; // 802BEE3C
  c->r[3]=c->r[31]+c->r[0]; // 802BEE40
  c->r[3]=c->r[3]+0x00000058u; // 802BEE44
  c->lr=0x802BEE4Cu; f_802BBD40(c); // 802BEE48
L_802BEE4C:;
  {uint32_t ea=c->r[26]+0x00000030u; WF32(ea,c->f[1]);} // 802BEE4C
L_802BEE50:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802BEE50
  c->r[11]=c->r[1]+0x00000030u; // 802BEE54
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802BEE58
  c->lr=0x802BEE60u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BEE5C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BEE60
  c->lr=c->r[0]; // 802BEE64
  c->r[1]=c->r[1]+0x00000040u; // 802BEE68
  return; // 802BEE6C
}

// fn_802BEE70
void f_802BEE70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BEE70
  c->r[0]=c->lr; // 802BEE74
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BEE78
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BEE7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BEE80
  cmps(c,0,(int32_t)c->r[0],0); // 802BEE84
  if (crb(c,2)) { goto L_802BEE94; } // 802BEE88
  c->r[0]=c->r[3]+c->r[0]; // 802BEE8C
  goto L_802BEE98; // 802BEE90
L_802BEE94:;
  c->r[0]=0u+0x00000000u; // 802BEE94
L_802BEE98:;
  c->r[3]=0u+0x80480000u; // 802BEE98
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BEE9C
  c->r[3]=c->r[3]+0x00006A00u; // 802BEEA0
  c->r[4]=c->r[1]+0x00000008u; // 802BEEA4
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BEEA8
  c->r[3]=c->r[1]+0x0000000Cu; // 802BEEAC
  c->lr=0x802BEEB4u; f_802B6758(c); // 802BEEB0
  c->r[0]=0u-c->r[3]; // 802BEEB4
  c->r[0]=c->r[0]|c->r[3]; // 802BEEB8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802BEEBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BEEC0
  c->lr=c->r[0]; // 802BEEC4
  c->r[1]=c->r[1]+0x00000010u; // 802BEEC8
  return; // 802BEECC
}

// fn_802BEED0
void f_802BEED0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BEED0
  c->r[0]=c->lr; // 802BEED4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BEED8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BEEDC
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BEEE0
  cmps(c,0,(int32_t)c->r[0],0); // 802BEEE4
  if (crb(c,2)) { goto L_802BEEF4; } // 802BEEE8
  c->r[0]=c->r[3]+c->r[0]; // 802BEEEC
  goto L_802BEEF8; // 802BEEF0
L_802BEEF4:;
  c->r[0]=0u+0x00000000u; // 802BEEF4
L_802BEEF8:;
  c->r[3]=0u+0x80480000u; // 802BEEF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BEEFC
  c->r[3]=c->r[3]+0x00006A20u; // 802BEF00
  c->r[4]=c->r[1]+0x00000008u; // 802BEF04
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BEF08
  c->r[3]=c->r[1]+0x0000000Cu; // 802BEF0C
  c->lr=0x802BEF14u; f_802B6758(c); // 802BEF10
  c->r[0]=0u-c->r[3]; // 802BEF14
  c->r[0]=c->r[0]|c->r[3]; // 802BEF18
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802BEF1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BEF20
  c->lr=c->r[0]; // 802BEF24
  c->r[1]=c->r[1]+0x00000010u; // 802BEF28
  return; // 802BEF2C
}

// fn_802BEF30
void f_802BEF30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BEF30
  c->r[0]=c->lr; // 802BEF34
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BEF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BEF3C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BEF40
  cmps(c,0,(int32_t)c->r[0],0); // 802BEF44
  if (crb(c,2)) { goto L_802BEF54; } // 802BEF48
  c->r[0]=c->r[3]+c->r[0]; // 802BEF4C
  goto L_802BEF58; // 802BEF50
L_802BEF54:;
  c->r[0]=0u+0x00000000u; // 802BEF54
L_802BEF58:;
  c->r[3]=0u+0x80480000u; // 802BEF58
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BEF5C
  c->r[3]=c->r[3]+0x000069E0u; // 802BEF60
  c->r[4]=c->r[1]+0x00000008u; // 802BEF64
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BEF68
  c->r[3]=c->r[1]+0x0000000Cu; // 802BEF6C
  c->lr=0x802BEF74u; f_802B6758(c); // 802BEF70
  cmps(c,0,(int32_t)c->r[3],0); // 802BEF74
  if (crb(c,2)) { goto L_802BEF9C; } // 802BEF78
  c->r[0]=0u-c->r[3]; // 802BEF7C
  c->r[0]=c->r[0]|c->r[3]; // 802BEF80
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BEF84
  if (crb(c,2)) { goto L_802BEF94; } // 802BEF88
  c->r[3]=R32(c->r[3]+0x00000004u); // 802BEF8C
  goto L_802BEFA0; // 802BEF90
L_802BEF94:;
  c->r[3]=0u+0x00000000u; // 802BEF94
  goto L_802BEFA0; // 802BEF98
L_802BEF9C:;
  c->r[3]=0u+0x00000000u; // 802BEF9C
L_802BEFA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BEFA0
  c->lr=c->r[0]; // 802BEFA4
  c->r[1]=c->r[1]+0x00000010u; // 802BEFA8
  return; // 802BEFAC
}

// fn_802BEFB0
void f_802BEFB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BEFB0
  c->r[0]=c->lr; // 802BEFB4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BEFB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BEFBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BEFC0
  c->r[31]=c->r[4]|c->r[4]; // 802BEFC4
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BEFC8
  cmps(c,0,(int32_t)c->r[0],0); // 802BEFCC
  if (crb(c,2)) { goto L_802BEFDC; } // 802BEFD0
  c->r[0]=c->r[3]+c->r[0]; // 802BEFD4
  goto L_802BEFE0; // 802BEFD8
L_802BEFDC:;
  c->r[0]=0u+0x00000000u; // 802BEFDC
L_802BEFE0:;
  c->r[3]=0u+0x80480000u; // 802BEFE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BEFE4
  c->r[3]=c->r[3]+0x00006A00u; // 802BEFE8
  c->r[4]=c->r[1]+0x00000010u; // 802BEFEC
  W32(c->r[1]+0x00000010u,c->r[3]); // 802BEFF0
  c->r[3]=c->r[1]+0x00000014u; // 802BEFF4
  c->lr=0x802BEFFCu; f_802B6758(c); // 802BEFF8
  cmps(c,0,(int32_t)c->r[3],0); // 802BEFFC
  if (crb(c,2)) { goto L_802BF020; } // 802BF000
  c->r[0]=R32(c->r[31]+0x00000000u); // 802BF004
  c->r[4]=c->r[1]+0x00000008u; // 802BF008
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BF00C
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF010
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BF014
  c->lr=0x802BF01Cu; f_802B6758(c); // 802BF018
  goto L_802BF024; // 802BF01C
L_802BF020:;
  c->r[3]=0u+0x00000000u; // 802BF020
L_802BF024:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF024
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF028
  c->lr=c->r[0]; // 802BF02C
  c->r[1]=c->r[1]+0x00000020u; // 802BF030
  return; // 802BF034
}

// fn_802BF038
void f_802BF038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF038
  c->r[0]=c->lr; // 802BF03C
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF040
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BF044
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BF048
  c->r[31]=c->r[4]|c->r[4]; // 802BF04C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF050
  cmps(c,0,(int32_t)c->r[0],0); // 802BF054
  if (crb(c,2)) { goto L_802BF064; } // 802BF058
  c->r[0]=c->r[3]+c->r[0]; // 802BF05C
  goto L_802BF068; // 802BF060
L_802BF064:;
  c->r[0]=0u+0x00000000u; // 802BF064
L_802BF068:;
  c->r[3]=0u+0x80480000u; // 802BF068
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BF06C
  c->r[3]=c->r[3]+0x00006A00u; // 802BF070
  c->r[4]=c->r[1]+0x0000000Cu; // 802BF074
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BF078
  c->r[3]=c->r[1]+0x00000008u; // 802BF07C
  c->lr=0x802BF084u; f_802B6758(c); // 802BF080
  cmps(c,0,(int32_t)c->r[3],0); // 802BF084
  if (crb(c,2)) { goto L_802BF0CC; } // 802BF088
  c->r[0]=0u-c->r[3]; // 802BF08C
  c->r[0]=c->r[0]|c->r[3]; // 802BF090
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF094
  if (crb(c,2)) { goto L_802BF0C4; } // 802BF098
  c->r[0]=c->r[31]+0x00000001u; // 802BF09C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF0A0
  c->r[4]=c->r[3]+c->r[0]; // 802BF0A4
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF0A8
  cmps(c,0,(int32_t)c->r[0],0); // 802BF0AC
  if (crb(c,2)) { goto L_802BF0BC; } // 802BF0B0
  c->r[3]=c->r[3]+c->r[0]; // 802BF0B4
  goto L_802BF0D0; // 802BF0B8
L_802BF0BC:;
  c->r[3]=0u+0x00000000u; // 802BF0BC
  goto L_802BF0D0; // 802BF0C0
L_802BF0C4:;
  c->r[3]=0u+0x00000000u; // 802BF0C4
  goto L_802BF0D0; // 802BF0C8
L_802BF0CC:;
  c->r[3]=0u+0x00000000u; // 802BF0CC
L_802BF0D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF0D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF0D4
  c->lr=c->r[0]; // 802BF0D8
  c->r[1]=c->r[1]+0x00000020u; // 802BF0DC
  return; // 802BF0E0
}

// fn_802BF0E4
void f_802BF0E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF0E4
  c->r[0]=c->lr; // 802BF0E8
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF0EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BF0F0
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF0F4
  cmps(c,0,(int32_t)c->r[0],0); // 802BF0F8
  if (crb(c,2)) { goto L_802BF108; } // 802BF0FC
  c->r[0]=c->r[3]+c->r[0]; // 802BF100
  goto L_802BF10C; // 802BF104
L_802BF108:;
  c->r[0]=0u+0x00000000u; // 802BF108
L_802BF10C:;
  c->r[3]=0u+0x80480000u; // 802BF10C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF110
  c->r[3]=c->r[3]+0x00006A00u; // 802BF114
  c->r[4]=c->r[1]+0x00000008u; // 802BF118
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BF11C
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF120
  c->lr=0x802BF128u; f_802B6758(c); // 802BF124
  cmps(c,0,(int32_t)c->r[3],0); // 802BF128
  if (crb(c,2)) { goto L_802BF150; } // 802BF12C
  c->r[0]=0u-c->r[3]; // 802BF130
  c->r[0]=c->r[0]|c->r[3]; // 802BF134
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF138
  if (crb(c,2)) { goto L_802BF148; } // 802BF13C
  c->r[3]=R32(c->r[3]+0x00000004u); // 802BF140
  goto L_802BF154; // 802BF144
L_802BF148:;
  c->r[3]=0u+0x00000000u; // 802BF148
  goto L_802BF154; // 802BF14C
L_802BF150:;
  c->r[3]=0u+0x00000000u; // 802BF150
L_802BF154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BF154
  c->lr=c->r[0]; // 802BF158
  c->r[1]=c->r[1]+0x00000010u; // 802BF15C
  return; // 802BF160
}

// fn_802BF164
void f_802BF164(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF164
  c->r[0]=c->lr; // 802BF168
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF16C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BF170
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BF174
  c->r[31]=c->r[4]|c->r[4]; // 802BF178
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF17C
  cmps(c,0,(int32_t)c->r[0],0); // 802BF180
  if (crb(c,2)) { goto L_802BF190; } // 802BF184
  c->r[0]=c->r[3]+c->r[0]; // 802BF188
  goto L_802BF194; // 802BF18C
L_802BF190:;
  c->r[0]=0u+0x00000000u; // 802BF190
L_802BF194:;
  c->r[3]=0u+0x80480000u; // 802BF194
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BF198
  c->r[3]=c->r[3]+0x00006A20u; // 802BF19C
  c->r[4]=c->r[1]+0x00000010u; // 802BF1A0
  W32(c->r[1]+0x00000010u,c->r[3]); // 802BF1A4
  c->r[3]=c->r[1]+0x00000014u; // 802BF1A8
  c->lr=0x802BF1B0u; f_802B6758(c); // 802BF1AC
  cmps(c,0,(int32_t)c->r[3],0); // 802BF1B0
  if (crb(c,2)) { goto L_802BF1D4; } // 802BF1B4
  c->r[0]=R32(c->r[31]+0x00000000u); // 802BF1B8
  c->r[4]=c->r[1]+0x00000008u; // 802BF1BC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BF1C0
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF1C4
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BF1C8
  c->lr=0x802BF1D0u; f_802B6758(c); // 802BF1CC
  goto L_802BF1D8; // 802BF1D0
L_802BF1D4:;
  c->r[3]=0u+0x00000000u; // 802BF1D4
L_802BF1D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF1D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF1DC
  c->lr=c->r[0]; // 802BF1E0
  c->r[1]=c->r[1]+0x00000020u; // 802BF1E4
  return; // 802BF1E8
}

// fn_802BF1EC
void f_802BF1EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF1EC
  c->r[0]=c->lr; // 802BF1F0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF1F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BF1F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BF1FC
  c->r[31]=c->r[4]|c->r[4]; // 802BF200
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF204
  cmps(c,0,(int32_t)c->r[0],0); // 802BF208
  if (crb(c,2)) { goto L_802BF218; } // 802BF20C
  c->r[0]=c->r[3]+c->r[0]; // 802BF210
  goto L_802BF21C; // 802BF214
L_802BF218:;
  c->r[0]=0u+0x00000000u; // 802BF218
L_802BF21C:;
  c->r[3]=0u+0x80480000u; // 802BF21C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BF220
  c->r[3]=c->r[3]+0x00006A20u; // 802BF224
  c->r[4]=c->r[1]+0x0000000Cu; // 802BF228
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BF22C
  c->r[3]=c->r[1]+0x00000008u; // 802BF230
  c->lr=0x802BF238u; f_802B6758(c); // 802BF234
  cmps(c,0,(int32_t)c->r[3],0); // 802BF238
  if (crb(c,2)) { goto L_802BF280; } // 802BF23C
  c->r[0]=0u-c->r[3]; // 802BF240
  c->r[0]=c->r[0]|c->r[3]; // 802BF244
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF248
  if (crb(c,2)) { goto L_802BF278; } // 802BF24C
  c->r[0]=c->r[31]+0x00000001u; // 802BF250
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF254
  c->r[4]=c->r[3]+c->r[0]; // 802BF258
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF25C
  cmps(c,0,(int32_t)c->r[0],0); // 802BF260
  if (crb(c,2)) { goto L_802BF270; } // 802BF264
  c->r[3]=c->r[3]+c->r[0]; // 802BF268
  goto L_802BF284; // 802BF26C
L_802BF270:;
  c->r[3]=0u+0x00000000u; // 802BF270
  goto L_802BF284; // 802BF274
L_802BF278:;
  c->r[3]=0u+0x00000000u; // 802BF278
  goto L_802BF284; // 802BF27C
L_802BF280:;
  c->r[3]=0u+0x00000000u; // 802BF280
L_802BF284:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF284
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF288
  c->lr=c->r[0]; // 802BF28C
  c->r[1]=c->r[1]+0x00000020u; // 802BF290
  return; // 802BF294
}

// fn_802BF298
void f_802BF298(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF298
  c->r[0]=c->lr; // 802BF29C
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF2A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BF2A4
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF2A8
  cmps(c,0,(int32_t)c->r[0],0); // 802BF2AC
  if (crb(c,2)) { goto L_802BF2BC; } // 802BF2B0
  c->r[0]=c->r[3]+c->r[0]; // 802BF2B4
  goto L_802BF2C0; // 802BF2B8
L_802BF2BC:;
  c->r[0]=0u+0x00000000u; // 802BF2BC
L_802BF2C0:;
  c->r[3]=0u+0x80480000u; // 802BF2C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF2C4
  c->r[3]=c->r[3]+0x00006A20u; // 802BF2C8
  c->r[4]=c->r[1]+0x00000008u; // 802BF2CC
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BF2D0
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF2D4
  c->lr=0x802BF2DCu; f_802B6758(c); // 802BF2D8
  cmps(c,0,(int32_t)c->r[3],0); // 802BF2DC
  if (crb(c,2)) { goto L_802BF304; } // 802BF2E0
  c->r[0]=0u-c->r[3]; // 802BF2E4
  c->r[0]=c->r[0]|c->r[3]; // 802BF2E8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF2EC
  if (crb(c,2)) { goto L_802BF2FC; } // 802BF2F0
  c->r[3]=R32(c->r[3]+0x00000004u); // 802BF2F4
  goto L_802BF308; // 802BF2F8
L_802BF2FC:;
  c->r[3]=0u+0x00000000u; // 802BF2FC
  goto L_802BF308; // 802BF300
L_802BF304:;
  c->r[3]=0u+0x00000000u; // 802BF304
L_802BF308:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BF308
  c->lr=c->r[0]; // 802BF30C
  c->r[1]=c->r[1]+0x00000010u; // 802BF310
  return; // 802BF314
}

// fn_802BF318
void f_802BF318(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF318
  c->r[0]=c->lr; // 802BF31C
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF320
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BF324
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BF328
  c->r[31]=c->r[4]|c->r[4]; // 802BF32C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF330
  cmps(c,0,(int32_t)c->r[0],0); // 802BF334
  if (crb(c,2)) { goto L_802BF344; } // 802BF338
  c->r[0]=c->r[3]+c->r[0]; // 802BF33C
  goto L_802BF348; // 802BF340
L_802BF344:;
  c->r[0]=0u+0x00000000u; // 802BF344
L_802BF348:;
  c->r[3]=0u+0x80480000u; // 802BF348
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BF34C
  c->r[3]=c->r[3]+0x00006A40u; // 802BF350
  c->r[4]=c->r[1]+0x0000000Cu; // 802BF354
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BF358
  c->r[3]=c->r[1]+0x00000008u; // 802BF35C
  c->lr=0x802BF364u; f_802B6758(c); // 802BF360
  cmps(c,0,(int32_t)c->r[3],0); // 802BF364
  if (crb(c,2)) { goto L_802BF3AC; } // 802BF368
  c->r[0]=0u-c->r[3]; // 802BF36C
  c->r[0]=c->r[0]|c->r[3]; // 802BF370
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF374
  if (crb(c,2)) { goto L_802BF3A4; } // 802BF378
  c->r[0]=c->r[31]+0x00000001u; // 802BF37C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF380
  c->r[4]=c->r[3]+c->r[0]; // 802BF384
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF388
  cmps(c,0,(int32_t)c->r[0],0); // 802BF38C
  if (crb(c,2)) { goto L_802BF39C; } // 802BF390
  c->r[3]=c->r[3]+c->r[0]; // 802BF394
  goto L_802BF3B0; // 802BF398
L_802BF39C:;
  c->r[3]=0u+0x00000000u; // 802BF39C
  goto L_802BF3B0; // 802BF3A0
L_802BF3A4:;
  c->r[3]=0u+0x00000000u; // 802BF3A4
  goto L_802BF3B0; // 802BF3A8
L_802BF3AC:;
  c->r[3]=0u+0x00000000u; // 802BF3AC
L_802BF3B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF3B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF3B4
  c->lr=c->r[0]; // 802BF3B8
  c->r[1]=c->r[1]+0x00000020u; // 802BF3BC
  return; // 802BF3C0
}

// fn_802BF3C4
void f_802BF3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF3C4
  c->r[0]=c->lr; // 802BF3C8
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF3CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BF3D0
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF3D4
  cmps(c,0,(int32_t)c->r[0],0); // 802BF3D8
  if (crb(c,2)) { goto L_802BF3E8; } // 802BF3DC
  c->r[0]=c->r[3]+c->r[0]; // 802BF3E0
  goto L_802BF3EC; // 802BF3E4
L_802BF3E8:;
  c->r[0]=0u+0x00000000u; // 802BF3E8
L_802BF3EC:;
  c->r[3]=0u+0x80480000u; // 802BF3EC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF3F0
  c->r[3]=c->r[3]+0x00006A40u; // 802BF3F4
  c->r[4]=c->r[1]+0x00000008u; // 802BF3F8
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BF3FC
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF400
  c->lr=0x802BF408u; f_802B6758(c); // 802BF404
  cmps(c,0,(int32_t)c->r[3],0); // 802BF408
  if (crb(c,2)) { goto L_802BF430; } // 802BF40C
  c->r[0]=0u-c->r[3]; // 802BF410
  c->r[0]=c->r[0]|c->r[3]; // 802BF414
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF418
  if (crb(c,2)) { goto L_802BF428; } // 802BF41C
  c->r[3]=R32(c->r[3]+0x00000004u); // 802BF420
  goto L_802BF434; // 802BF424
L_802BF428:;
  c->r[3]=0u+0x00000000u; // 802BF428
  goto L_802BF434; // 802BF42C
L_802BF430:;
  c->r[3]=0u+0x00000000u; // 802BF430
L_802BF434:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BF434
  c->lr=c->r[0]; // 802BF438
  c->r[1]=c->r[1]+0x00000010u; // 802BF43C
  return; // 802BF440
}

// fn_802BF444
void f_802BF444(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF444
  c->r[0]=c->lr; // 802BF448
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF44C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BF450
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BF454
  c->r[31]=c->r[4]|c->r[4]; // 802BF458
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF45C
  cmps(c,0,(int32_t)c->r[0],0); // 802BF460
  if (crb(c,2)) { goto L_802BF470; } // 802BF464
  c->r[0]=c->r[3]+c->r[0]; // 802BF468
  goto L_802BF474; // 802BF46C
L_802BF470:;
  c->r[0]=0u+0x00000000u; // 802BF470
L_802BF474:;
  c->r[3]=0u+0x80480000u; // 802BF474
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF478
  c->r[3]=c->r[3]+0x00006A60u; // 802BF47C
  c->r[4]=c->r[1]+0x00000008u; // 802BF480
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BF484
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF488
  c->lr=0x802BF490u; f_802B6758(c); // 802BF48C
  cmps(c,0,(int32_t)c->r[3],0); // 802BF490
  if (crb(c,2)) { goto L_802BF4D8; } // 802BF494
  c->r[0]=0u-c->r[3]; // 802BF498
  c->r[0]=c->r[0]|c->r[3]; // 802BF49C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF4A0
  if (crb(c,2)) { goto L_802BF4D0; } // 802BF4A4
  c->r[0]=c->r[31]+0x00000001u; // 802BF4A8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF4AC
  c->r[4]=c->r[3]+c->r[0]; // 802BF4B0
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF4B4
  cmps(c,0,(int32_t)c->r[0],0); // 802BF4B8
  if (crb(c,2)) { goto L_802BF4C8; } // 802BF4BC
  c->r[3]=c->r[3]+c->r[0]; // 802BF4C0
  goto L_802BF4DC; // 802BF4C4
L_802BF4C8:;
  c->r[3]=0u+0x00000000u; // 802BF4C8
  goto L_802BF4DC; // 802BF4CC
L_802BF4D0:;
  c->r[3]=0u+0x00000000u; // 802BF4D0
  goto L_802BF4DC; // 802BF4D4
L_802BF4D8:;
  c->r[3]=0u+0x00000000u; // 802BF4D8
L_802BF4DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF4DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF4E0
  c->lr=c->r[0]; // 802BF4E4
  c->r[1]=c->r[1]+0x00000020u; // 802BF4E8
  return; // 802BF4EC
}

// fn_802BF4F0
void f_802BF4F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF4F0
  c->r[0]=c->lr; // 802BF4F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF4F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BF4FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BF500
  c->r[31]=c->r[4]|c->r[4]; // 802BF504
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF508
  cmps(c,0,(int32_t)c->r[0],0); // 802BF50C
  if (crb(c,2)) { goto L_802BF51C; } // 802BF510
  c->r[0]=c->r[3]+c->r[0]; // 802BF514
  goto L_802BF520; // 802BF518
L_802BF51C:;
  c->r[0]=0u+0x00000000u; // 802BF51C
L_802BF520:;
  c->r[3]=0u+0x80480000u; // 802BF520
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BF524
  c->r[3]=c->r[3]+0x00006A60u; // 802BF528
  c->r[4]=c->r[1]+0x0000000Cu; // 802BF52C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 802BF530
  c->r[3]=c->r[1]+0x00000008u; // 802BF534
  c->lr=0x802BF53Cu; f_802B6758(c); // 802BF538
  cmps(c,0,(int32_t)c->r[3],0); // 802BF53C
  if (crb(c,2)) { goto L_802BF584; } // 802BF540
  c->r[0]=0u-c->r[3]; // 802BF544
  c->r[0]=c->r[0]|c->r[3]; // 802BF548
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF54C
  if (crb(c,2)) { goto L_802BF57C; } // 802BF550
  c->r[0]=c->r[31]+0x00000001u; // 802BF554
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF558
  c->r[4]=c->r[3]+c->r[0]; // 802BF55C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF560
  cmps(c,0,(int32_t)c->r[0],0); // 802BF564
  if (crb(c,2)) { goto L_802BF574; } // 802BF568
  c->r[3]=c->r[3]+c->r[0]; // 802BF56C
  goto L_802BF588; // 802BF570
L_802BF574:;
  c->r[3]=0u+0x00000000u; // 802BF574
  goto L_802BF588; // 802BF578
L_802BF57C:;
  c->r[3]=0u+0x00000000u; // 802BF57C
  goto L_802BF588; // 802BF580
L_802BF584:;
  c->r[3]=0u+0x00000000u; // 802BF584
L_802BF588:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BF588
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BF58C
  c->lr=c->r[0]; // 802BF590
  c->r[1]=c->r[1]+0x00000020u; // 802BF594
  return; // 802BF598
}

// fn_802BF59C
void f_802BF59C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF59C
  c->r[0]=c->lr; // 802BF5A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF5A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BF5A8
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF5AC
  cmps(c,0,(int32_t)c->r[0],0); // 802BF5B0
  if (crb(c,2)) { goto L_802BF5C0; } // 802BF5B4
  c->r[0]=c->r[3]+c->r[0]; // 802BF5B8
  goto L_802BF5C4; // 802BF5BC
L_802BF5C0:;
  c->r[0]=0u+0x00000000u; // 802BF5C0
L_802BF5C4:;
  c->r[3]=0u+0x80480000u; // 802BF5C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF5C8
  c->r[3]=c->r[3]+0x00006A60u; // 802BF5CC
  c->r[4]=c->r[1]+0x00000008u; // 802BF5D0
  W32(c->r[1]+0x00000008u,c->r[3]); // 802BF5D4
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF5D8
  c->lr=0x802BF5E0u; f_802B6758(c); // 802BF5DC
  cmps(c,0,(int32_t)c->r[3],0); // 802BF5E0
  if (crb(c,2)) { goto L_802BF608; } // 802BF5E4
  c->r[0]=0u-c->r[3]; // 802BF5E8
  c->r[0]=c->r[0]|c->r[3]; // 802BF5EC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF5F0
  if (crb(c,2)) { goto L_802BF600; } // 802BF5F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 802BF5F8
  goto L_802BF60C; // 802BF5FC
L_802BF600:;
  c->r[3]=0u+0x00000000u; // 802BF600
  goto L_802BF60C; // 802BF604
L_802BF608:;
  c->r[3]=0u+0x00000000u; // 802BF608
L_802BF60C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BF60C
  c->lr=c->r[0]; // 802BF610
  c->r[1]=c->r[1]+0x00000010u; // 802BF614
  return; // 802BF618
}

// fn_802BF61C
void f_802BF61C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF61C
  c->r[5]=R16(c->r[3]+0x00000038u); // 802BF620
  cmpu(c,0,c->r[5],c->r[4]); // 802BF624
  if (crb(c,1)) { goto L_802BF634; } // 802BF628
  c->r[3]=0u+0x00000000u; // 802BF62C
  return; // 802BF630
L_802BF634:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 802BF634
  cmps(c,0,(int32_t)c->r[0],0); // 802BF638
  if (crb(c,2)) { goto L_802BF648; } // 802BF63C
  c->r[3]=c->r[3]+c->r[0]; // 802BF640
  goto L_802BF64C; // 802BF644
L_802BF648:;
  c->r[3]=0u+0x00000000u; // 802BF648
L_802BF64C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)76); // 802BF64C
  c->r[3]=c->r[3]+c->r[0]; // 802BF650
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BF654
  cmpu(c,0,c->r[0],c->r[5]); // 802BF658
  if (crb(c,0)) return; // 802BF65C
  c->r[3]=0u+0x00000000u; // 802BF660
  return; // 802BF664
}

// fn_802BF668
void f_802BF668(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF668
  c->r[5]=R16(c->r[3]+0x0000003Au); // 802BF66C
  cmpu(c,0,c->r[5],c->r[4]); // 802BF670
  if (crb(c,1)) { goto L_802BF680; } // 802BF674
  c->r[3]=0u+0x00000000u; // 802BF678
  return; // 802BF67C
L_802BF680:;
  c->r[0]=R32(c->r[3]+0x00000018u); // 802BF680
  cmps(c,0,(int32_t)c->r[0],0); // 802BF684
  if (crb(c,2)) { goto L_802BF694; } // 802BF688
  c->r[3]=c->r[3]+c->r[0]; // 802BF68C
  goto L_802BF698; // 802BF690
L_802BF694:;
  c->r[3]=0u+0x00000000u; // 802BF694
L_802BF698:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 802BF698
  c->r[3]=c->r[3]+c->r[0]; // 802BF69C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BF6A0
  cmpu(c,0,c->r[0],c->r[5]); // 802BF6A4
  if (crb(c,0)) return; // 802BF6A8
  c->r[3]=0u+0x00000000u; // 802BF6AC
  return; // 802BF6B0
}

// fn_802BF6B4
void f_802BF6B4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF6B4
  c->r[5]=R16(c->r[3]+0x0000003Cu); // 802BF6B8
  cmpu(c,0,c->r[5],c->r[4]); // 802BF6BC
  if (crb(c,1)) { goto L_802BF6CC; } // 802BF6C0
  c->r[3]=0u+0x00000000u; // 802BF6C4
  return; // 802BF6C8
L_802BF6CC:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 802BF6CC
  cmps(c,0,(int32_t)c->r[0],0); // 802BF6D0
  if (crb(c,2)) { goto L_802BF6E0; } // 802BF6D4
  c->r[3]=c->r[3]+c->r[0]; // 802BF6D8
  goto L_802BF6E4; // 802BF6DC
L_802BF6E0:;
  c->r[3]=0u+0x00000000u; // 802BF6E0
L_802BF6E4:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 802BF6E4
  c->r[3]=c->r[3]+c->r[0]; // 802BF6E8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BF6EC
  cmpu(c,0,c->r[0],c->r[5]); // 802BF6F0
  if (crb(c,0)) return; // 802BF6F4
  c->r[3]=0u+0x00000000u; // 802BF6F8
  return; // 802BF6FC
}

// fn_802BF700
void f_802BF700(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF700
  c->r[5]=R16(c->r[3]+0x0000003Eu); // 802BF704
  cmpu(c,0,c->r[5],c->r[4]); // 802BF708
  if (crb(c,1)) { goto L_802BF718; } // 802BF70C
  c->r[3]=0u+0x00000000u; // 802BF710
  return; // 802BF714
L_802BF718:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 802BF718
  cmps(c,0,(int32_t)c->r[0],0); // 802BF71C
  if (crb(c,2)) { goto L_802BF72C; } // 802BF720
  c->r[3]=c->r[3]+c->r[0]; // 802BF724
  goto L_802BF730; // 802BF728
L_802BF72C:;
  c->r[3]=0u+0x00000000u; // 802BF72C
L_802BF730:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)40); // 802BF730
  c->r[3]=c->r[3]+c->r[0]; // 802BF734
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BF738
  cmpu(c,0,c->r[0],c->r[5]); // 802BF73C
  if (crb(c,0)) return; // 802BF740
  c->r[3]=0u+0x00000000u; // 802BF744
  return; // 802BF748
}

// fn_802BF74C
void f_802BF74C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BF74C
  c->r[5]=R16(c->r[3]+0x00000040u); // 802BF750
  cmpu(c,0,c->r[5],c->r[4]); // 802BF754
  if (crb(c,1)) { goto L_802BF764; } // 802BF758
  c->r[3]=0u+0x00000000u; // 802BF75C
  return; // 802BF760
L_802BF764:;
  c->r[0]=R32(c->r[3]+0x00000024u); // 802BF764
  cmps(c,0,(int32_t)c->r[0],0); // 802BF768
  if (crb(c,2)) { goto L_802BF778; } // 802BF76C
  c->r[3]=c->r[3]+c->r[0]; // 802BF770
  goto L_802BF77C; // 802BF774
L_802BF778:;
  c->r[3]=0u+0x00000000u; // 802BF778
L_802BF77C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)92); // 802BF77C
  c->r[3]=c->r[3]+c->r[0]; // 802BF780
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BF784
  cmpu(c,0,c->r[0],c->r[5]); // 802BF788
  if (crb(c,0)) return; // 802BF78C
  c->r[3]=0u+0x00000000u; // 802BF790
  return; // 802BF794
}

// fn_802BF798
void f_802BF798(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF798
  c->r[0]=c->lr; // 802BF79C
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BF7A0
  c->r[11]=c->r[1]+0x00000040u; // 802BF7A4
  c->lr=0x802BF7ACu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BF7A8
  c->r[5]=R32(c->r[3]+0x00000000u); // 802BF7AC
  c->r[28]=c->r[3]|c->r[3]; // 802BF7B0
  c->r[29]=c->r[4]|c->r[4]; // 802BF7B4
  c->r[0]=R32(c->r[5]+0x00000010u); // 802BF7B8
  cmps(c,0,(int32_t)c->r[0],0); // 802BF7BC
  if (crb(c,2)) { goto L_802BF7CC; } // 802BF7C0
  c->r[0]=c->r[5]+c->r[0]; // 802BF7C4
  goto L_802BF7D0; // 802BF7C8
L_802BF7CC:;
  c->r[0]=0u+0x00000000u; // 802BF7CC
L_802BF7D0:;
  c->r[3]=0u+0x80480000u; // 802BF7D0
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BF7D4
  c->r[3]=c->r[3]+0x000069E0u; // 802BF7D8
  c->r[4]=c->r[1]+0x00000014u; // 802BF7DC
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BF7E0
  c->r[3]=c->r[1]+0x00000010u; // 802BF7E4
  c->lr=0x802BF7ECu; f_802B6758(c); // 802BF7E8
  cmps(c,0,(int32_t)c->r[3],0); // 802BF7EC
  if (crb(c,2)) { goto L_802BF814; } // 802BF7F0
  c->r[0]=0u-c->r[3]; // 802BF7F4
  c->r[0]=c->r[0]|c->r[3]; // 802BF7F8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF7FC
  if (crb(c,2)) { goto L_802BF80C; } // 802BF800
  c->r[26]=R32(c->r[3]+0x00000004u); // 802BF804
  goto L_802BF818; // 802BF808
L_802BF80C:;
  c->r[26]=0u+0x00000000u; // 802BF80C
  goto L_802BF818; // 802BF810
L_802BF814:;
  c->r[26]=0u+0x00000000u; // 802BF814
L_802BF818:;
  c->r[27]=0u+0x80480000u; // 802BF818
  c->r[31]=0u+0x00000001u; // 802BF81C
  c->r[27]=c->r[27]+0x000069E0u; // 802BF820
  c->r[30]=0u+0x00000000u; // 802BF824
  goto L_802BF8E0; // 802BF828
L_802BF82C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 802BF82C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF830
  cmps(c,0,(int32_t)c->r[0],0); // 802BF834
  if (crb(c,2)) { goto L_802BF844; } // 802BF838
  c->r[0]=c->r[3]+c->r[0]; // 802BF83C
  goto L_802BF848; // 802BF840
L_802BF844:;
  c->r[0]=0u+0x00000000u; // 802BF844
L_802BF848:;
  W32(c->r[1]+0x00000008u,c->r[27]); // 802BF848
  c->r[4]=c->r[1]+0x00000008u; // 802BF84C
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF850
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF854
  c->lr=0x802BF85Cu; f_802B6758(c); // 802BF858
  cmps(c,0,(int32_t)c->r[3],0); // 802BF85C
  if (crb(c,2)) { goto L_802BF8A4; } // 802BF860
  c->r[0]=0u-c->r[3]; // 802BF864
  c->r[0]=c->r[0]|c->r[3]; // 802BF868
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF86C
  if (crb(c,2)) { goto L_802BF89C; } // 802BF870
  c->r[0]=c->r[30]+0x00000001u; // 802BF874
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF878
  c->r[4]=c->r[3]+c->r[0]; // 802BF87C
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF880
  cmps(c,0,(int32_t)c->r[0],0); // 802BF884
  if (crb(c,2)) { goto L_802BF894; } // 802BF888
  c->r[3]=c->r[3]+c->r[0]; // 802BF88C
  goto L_802BF8A8; // 802BF890
L_802BF894:;
  c->r[3]=0u+0x00000000u; // 802BF894
  goto L_802BF8A8; // 802BF898
L_802BF89C:;
  c->r[3]=0u+0x00000000u; // 802BF89C
  goto L_802BF8A8; // 802BF8A0
L_802BF8A4:;
  c->r[3]=0u+0x00000000u; // 802BF8A4
L_802BF8A8:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 802BF8A8
  c->r[4]=c->r[1]+0x00000018u; // 802BF8AC
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 802BF8B0
  c->r[3]=c->r[1]+0x0000001Cu; // 802BF8B4
  c->r[25]=0u+0x00000000u; // 802BF8B8
  W32(c->r[1]+0x00000018u,c->r[0]); // 802BF8BC
  c->lr=0x802BF8C4u; f_802BE38C(c); // 802BF8C0
  cmps(c,0,(int32_t)c->r[3],0); // 802BF8C4
  if (crb(c,2)) { goto L_802BF8D8; } // 802BF8C8
  cmps(c,0,(int32_t)c->r[31],0); // 802BF8CC
  if (crb(c,2)) { goto L_802BF8D8; } // 802BF8D0
  c->r[25]=0u+0x00000001u; // 802BF8D4
L_802BF8D8:;
  c->r[31]=c->r[25]|c->r[25]; // 802BF8D8
  c->r[30]=c->r[30]+0x00000001u; // 802BF8DC
L_802BF8E0:;
  cmpu(c,0,c->r[30],c->r[26]); // 802BF8E0
  if (crb(c,0)) { IRQCHK(c); goto L_802BF82C; } // 802BF8E4
  c->r[11]=c->r[1]+0x00000040u; // 802BF8E8
  c->r[3]=c->r[31]|c->r[31]; // 802BF8EC
  c->lr=0x802BF8F4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BF8F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BF8F4
  c->lr=c->r[0]; // 802BF8F8
  c->r[1]=c->r[1]+0x00000040u; // 802BF8FC
  return; // 802BF900
}

// fn_802BF904
void f_802BF904(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BF904
  c->r[0]=c->lr; // 802BF908
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BF90C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 802BF910
  c->r[31]=c->r[3]|c->r[3]; // 802BF914
  W32(c->r[1]+0x00000028u,c->r[30]); // 802BF918
  W32(c->r[1]+0x00000024u,c->r[29]); // 802BF91C
  W32(c->r[1]+0x00000020u,c->r[28]); // 802BF920
  c->r[4]=R32(c->r[3]+0x00000000u); // 802BF924
  c->r[0]=R32(c->r[4]+0x00000010u); // 802BF928
  cmps(c,0,(int32_t)c->r[0],0); // 802BF92C
  if (crb(c,2)) { goto L_802BF93C; } // 802BF930
  c->r[0]=c->r[4]+c->r[0]; // 802BF934
  goto L_802BF940; // 802BF938
L_802BF93C:;
  c->r[0]=0u+0x00000000u; // 802BF93C
L_802BF940:;
  c->r[3]=0u+0x80480000u; // 802BF940
  W32(c->r[1]+0x00000010u,c->r[0]); // 802BF944
  c->r[3]=c->r[3]+0x000069E0u; // 802BF948
  c->r[4]=c->r[1]+0x00000014u; // 802BF94C
  W32(c->r[1]+0x00000014u,c->r[3]); // 802BF950
  c->r[3]=c->r[1]+0x00000010u; // 802BF954
  c->lr=0x802BF95Cu; f_802B6758(c); // 802BF958
  cmps(c,0,(int32_t)c->r[3],0); // 802BF95C
  if (crb(c,2)) { goto L_802BF984; } // 802BF960
  c->r[0]=0u-c->r[3]; // 802BF964
  c->r[0]=c->r[0]|c->r[3]; // 802BF968
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF96C
  if (crb(c,2)) { goto L_802BF97C; } // 802BF970
  c->r[29]=R32(c->r[3]+0x00000004u); // 802BF974
  goto L_802BF988; // 802BF978
L_802BF97C:;
  c->r[29]=0u+0x00000000u; // 802BF97C
  goto L_802BF988; // 802BF980
L_802BF984:;
  c->r[29]=0u+0x00000000u; // 802BF984
L_802BF988:;
  c->r[30]=0u+0x80480000u; // 802BF988
  c->r[28]=0u+0x00000000u; // 802BF98C
  c->r[30]=c->r[30]+0x000069E0u; // 802BF990
  goto L_802BFA24; // 802BF994
L_802BF998:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802BF998
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BF99C
  cmps(c,0,(int32_t)c->r[0],0); // 802BF9A0
  if (crb(c,2)) { goto L_802BF9B0; } // 802BF9A4
  c->r[0]=c->r[3]+c->r[0]; // 802BF9A8
  goto L_802BF9B4; // 802BF9AC
L_802BF9B0:;
  c->r[0]=0u+0x00000000u; // 802BF9B0
L_802BF9B4:;
  W32(c->r[1]+0x00000008u,c->r[30]); // 802BF9B4
  c->r[4]=c->r[1]+0x00000008u; // 802BF9B8
  c->r[3]=c->r[1]+0x0000000Cu; // 802BF9BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802BF9C0
  c->lr=0x802BF9C8u; f_802B6758(c); // 802BF9C4
  cmps(c,0,(int32_t)c->r[3],0); // 802BF9C8
  if (crb(c,2)) { goto L_802BFA10; } // 802BF9CC
  c->r[0]=0u-c->r[3]; // 802BF9D0
  c->r[0]=c->r[0]|c->r[3]; // 802BF9D4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 802BF9D8
  if (crb(c,2)) { goto L_802BFA08; } // 802BF9DC
  c->r[0]=c->r[28]+0x00000001u; // 802BF9E0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 802BF9E4
  c->r[4]=c->r[3]+c->r[0]; // 802BF9E8
  c->r[0]=R32(c->r[4]+0x00000014u); // 802BF9EC
  cmps(c,0,(int32_t)c->r[0],0); // 802BF9F0
  if (crb(c,2)) { goto L_802BFA00; } // 802BF9F4
  c->r[0]=c->r[3]+c->r[0]; // 802BF9F8
  goto L_802BFA14; // 802BF9FC
L_802BFA00:;
  c->r[0]=0u+0x00000000u; // 802BFA00
  goto L_802BFA14; // 802BFA04
L_802BFA08:;
  c->r[0]=0u+0x00000000u; // 802BFA08
  goto L_802BFA14; // 802BFA0C
L_802BFA10:;
  c->r[0]=0u+0x00000000u; // 802BFA10
L_802BFA14:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 802BFA14
  c->r[3]=c->r[1]+0x00000018u; // 802BFA18
  c->lr=0x802BFA20u; f_802BE4F8(c); // 802BFA1C
  c->r[28]=c->r[28]+0x00000001u; // 802BFA20
L_802BFA24:;
  cmpu(c,0,c->r[28],c->r[29]); // 802BFA24
  if (crb(c,0)) { IRQCHK(c); goto L_802BF998; } // 802BFA28
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BFA2C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 802BFA30
  c->r[30]=R32(c->r[1]+0x00000028u); // 802BFA34
  c->r[29]=R32(c->r[1]+0x00000024u); // 802BFA38
  c->r[28]=R32(c->r[1]+0x00000020u); // 802BFA3C
  c->lr=c->r[0]; // 802BFA40
  c->r[1]=c->r[1]+0x00000030u; // 802BFA44
  return; // 802BFA48
}

// fn_802BFA4C
void f_802BFA4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BFA4C
  c->r[0]=c->lr; // 802BFA50
  W32(c->r[1]+0x00000044u,c->r[0]); // 802BFA54
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802BFA58
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802BFA5C
  c->r[11]=c->r[1]+0x00000030u; // 802BFA60
  c->lr=0x802BFA68u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BFA64
  c->r[3]=R32(c->r[3]+0x00000000u); // 802BFA68
  c->f[31]=c->f[1]; // 802BFA6C
  c->r[23]=c->r[4]|c->r[4]; // 802BFA70
  c->r[24]=c->r[6]|c->r[6]; // 802BFA74
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BFA78
  cmps(c,0,(int32_t)c->r[0],0); // 802BFA7C
  if (crb(c,2)) { goto L_802BFA8C; } // 802BFA80
  c->r[0]=c->r[3]+c->r[0]; // 802BFA84
  goto L_802BFA90; // 802BFA88
L_802BFA8C:;
  c->r[0]=0u+0x00000000u; // 802BFA8C
L_802BFA90:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BFA90
  if (crb(c,2)) { goto L_802BFAC0; } // 802BFA94
  c->r[3]=c->r[5]+0x00000001u; // 802BFA98
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 802BFA9C
  c->r[3]=c->r[0]+c->r[3]; // 802BFAA0
  c->r[3]=R32(c->r[3]+0x00000014u); // 802BFAA4
  cmps(c,0,(int32_t)c->r[3],0); // 802BFAA8
  if (crb(c,2)) { goto L_802BFAB8; } // 802BFAAC
  c->r[31]=c->r[0]+c->r[3]; // 802BFAB0
  goto L_802BFAC4; // 802BFAB4
L_802BFAB8:;
  c->r[31]=0u+0x00000000u; // 802BFAB8
  goto L_802BFAC4; // 802BFABC
L_802BFAC0:;
  c->r[31]=0u+0x00000000u; // 802BFAC0
L_802BFAC4:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 802BFAC4
  c->r[28]=c->r[31]|c->r[31]; // 802BFAC8
  c->r[26]=R32(c->r[31]+0x0000000Cu); // 802BFACC
  c->r[30]=c->r[4]+0x00000018u; // 802BFAD0
  c->r[0]=R32(c->r[31]+0x00000000u); // 802BFAD4
  c->r[29]=c->r[3]+c->r[31]; // 802BFAD8
  {uint32_t ea=c->r[2]+0xFFFFAB68u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BFADC
  c->r[27]=c->r[31]+0x00000014u; // 802BFAE0
  W32(c->r[4]+0x00000000u,c->r[0]); // 802BFAE4
  c->r[25]=0u+0x00000000u; // 802BFAE8
  c->r[0]=R16(c->r[31]+0x0000000Au); // 802BFAEC
  W32(c->r[4]+0x00000004u,c->r[0]); // 802BFAF0
  c->r[0]=R16(c->r[31]+0x00000008u); // 802BFAF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 802BFAF8
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[0]);} // 802BFAFC
  {uint32_t ea=c->r[6]+c->r[0]; c->r[5]=R32(ea); c->r[6]=ea;} // 802BFB00
  c->r[3]=R32(c->r[6]+0x00000004u); // 802BFB04
  c->r[0]=R32(c->r[6]+0x00000008u); // 802BFB08
  W32(c->r[4]+0x00000008u,c->r[5]); // 802BFB0C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 802BFB10
  W32(c->r[4]+0x00000010u,c->r[0]); // 802BFB14
  goto L_802BFB88; // 802BFB18
L_802BFB1C:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 802BFB1C
  c->r[22]=R16(c->r[29]+0x00000000u); // 802BFB20
  if (crb(c,2)) { goto L_802BFB30; } // 802BFB24
  {uint32_t ea=c->r[28]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFB28
  goto L_802BFB40; // 802BFB2C
L_802BFB30:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 802BFB30
  c->f[1]=c->f[31]; // 802BFB34
  c->r[3]=c->r[27]+c->r[0]; // 802BFB38
  c->lr=0x802BFB40u; f_802BBD40(c); // 802BFB3C
L_802BFB40:;
  c->r[0]=(uint32_t)((int32_t)c->r[22]*(int32_t)12); // 802BFB40
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 802BFB44
  c->r[29]=c->r[29]+0x00000002u; // 802BFB48
  c->r[28]=c->r[28]+0x00000004u; // 802BFB4C
  c->r[4]=c->r[24]+c->r[0]; // 802BFB50
  c->r[0]=R32(c->r[24]+c->r[0]); // 802BFB54
  c->r[3]=R32(c->r[4]+0x00000004u); // 802BFB58
  c->r[27]=c->r[27]+0x00000004u; // 802BFB5C
  W32(c->r[30]+0x00000000u,c->r[0]); // 802BFB60
  c->r[25]=c->r[25]+0x00000001u; // 802BFB64
  c->r[0]=R32(c->r[4]+0x00000008u); // 802BFB68
  W32(c->r[30]+0x00000004u,c->r[3]); // 802BFB6C
  W32(c->r[30]+0x00000008u,c->r[0]); // 802BFB70
  {uint32_t ea=c->r[30]+0x0000000Cu; WF32(ea,c->f[1]);} // 802BFB74
  c->r[30]=c->r[30]+0x00000010u; // 802BFB78
  {uint32_t ea=c->r[23]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BFB7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 802BFB80
  {uint32_t ea=c->r[23]+0x00000014u; WF32(ea,c->f[0]);} // 802BFB84
L_802BFB88:;
  c->r[0]=R16(c->r[31]+0x0000000Au); // 802BFB88
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 802BFB8C
  if (crb(c,0)) { IRQCHK(c); goto L_802BFB1C; } // 802BFB90
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802BFB94
  c->r[11]=c->r[1]+0x00000030u; // 802BFB98
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802BFB9C
  c->lr=0x802BFBA4u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BFBA0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802BFBA4
  c->lr=c->r[0]; // 802BFBA8
  c->r[1]=c->r[1]+0x00000040u; // 802BFBAC
  return; // 802BFBB0
}

// fn_802BFBB4
void f_802BFBB4(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 802BFBB4
  c->r[7]=0u+0x00000000u; // 802BFBB8
  c->r[5]=c->r[4]+0xFFFF8000u; // 802BFBBC
  c->r[6]=0u+0x00000000u; // 802BFBC0
  goto L_802BFBD8; // 802BFBC4
L_802BFBC8:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802BFBC8
  c->r[7]=c->r[7]+0x00000001u; // 802BFBCC
  W16(c->r[4]+c->r[6],c->r[5]); // 802BFBD0
  c->r[6]=c->r[6]+0x00000002u; // 802BFBD4
L_802BFBD8:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BFBD8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802BFBDC
  if (crb(c,0)) { IRQCHK(c); goto L_802BFBC8; } // 802BFBE0
  c->r[4]=0u+0x00000004u; // 802BFBE4
  c->r[5]=0u+0x00000000u; // 802BFBE8
  f_802C63A4(c); return; // 802BFBEC
}

// fn_802BFBF0
void f_802BFBF0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802BFBF0
  return; // 802BFBF4
}

// fn_802BFBF8
void f_802BFBF8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802BFBF8
  return; // 802BFBFC
}

// fn_802BFC00
void f_802BFC00(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 802BFC00
  c->r[0]=c->r[5]+0x00000002u; // 802BFC04
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802BFC08
  if (crb(c,2)) { goto L_802BFC48; } // 802BFC0C
  if (!crb(c,0)) { goto L_802BFC20; } // 802BFC10
  cmps(c,0,(int32_t)c->r[4],8); // 802BFC14
  if (crb(c,2)) { goto L_802BFC30; } // 802BFC18
  return; // 802BFC1C
L_802BFC20:;
  c->r[0]=c->r[5]+0x00000004u; // 802BFC20
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802BFC24
  if (!crb(c,0)) return; // 802BFC28
  goto L_802BFC3C; // 802BFC2C
L_802BFC30:;
  c->r[4]=0u+0x00000002u; // 802BFC30
  c->r[5]=0u+0x00000001u; // 802BFC34
  f_802C63A4(c); return; // 802BFC38
L_802BFC3C:;
  c->r[0]=0u+0x00000000u; // 802BFC3C
  W32(c->r[3]+0x00000004u,c->r[0]); // 802BFC40
  return; // 802BFC44
L_802BFC48:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802BFC48
  return; // 802BFC4C
}

// __dt__Q34nw4r3g3d9AnmObjVisFv
void f_802BFC50(Ctx* __restrict c) {
  trace_call(0x802BFC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BFC50
  c->r[0]=c->lr; // 802BFC54
  cmps(c,0,(int32_t)c->r[3],0); // 802BFC58
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BFC5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BFC60
  c->r[31]=c->r[3]|c->r[3]; // 802BFC64
  if (crb(c,2)) { goto L_802BFC78; } // 802BFC68
  if (crb(c,2)) { goto L_802BFC78; } // 802BFC6C
  c->r[4]=0u+0x00000000u; // 802BFC70
  c->lr=0x802BFC78u; f_802C624C(c); // 802BFC74
L_802BFC78:;
  c->r[3]=c->r[31]|c->r[31]; // 802BFC78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BFC7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BFC80
  c->lr=c->r[0]; // 802BFC84
  c->r[1]=c->r[1]+0x00000010u; // 802BFC88
  return; // 802BFC8C
}

// Construct__Q34nw4r3g3d12AnmObjVisResFP12MEMAllocatorPiQ34nw4r3g3d9ResAnmVisQ34nw4r3g3d6ResMdl
void f_802BFC90(Ctx* __restrict c) {
  trace_call(0x802BFC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BFC90
  c->r[0]=c->lr; // 802BFC94
  W32(c->r[1]+0x00000024u,c->r[0]); // 802BFC98
  c->r[0]=R32(c->r[5]+0x00000000u); // 802BFC9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802BFCA0
  c->r[31]=c->r[5]|c->r[5]; // 802BFCA4
  cmps(c,0,(int32_t)c->r[0],0); // 802BFCA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802BFCAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802BFCB0
  c->r[29]=c->r[4]|c->r[4]; // 802BFCB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 802BFCB8
  c->r[28]=c->r[3]|c->r[3]; // 802BFCBC
  if (crb(c,2)) { goto L_802BFCD0; } // 802BFCC0
  c->r[0]=R32(c->r[6]+0x00000000u); // 802BFCC4
  cmps(c,0,(int32_t)c->r[0],0); // 802BFCC8
  if (!crb(c,2)) { goto L_802BFCD8; } // 802BFCCC
L_802BFCD0:;
  c->r[3]=0u+0x00000000u; // 802BFCD0
  goto L_802BFDC0; // 802BFCD4
L_802BFCD8:;
  c->r[3]=c->r[6]|c->r[6]; // 802BFCD8
  c->lr=0x802BFCE0u; f_802B854C(c); // 802BFCDC
  cmps(c,0,(int32_t)c->r[29],0); // 802BFCE0
  c->r[4]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802BFCE4
  c->r[30]=c->r[3]|c->r[3]; // 802BFCE8
  c->r[4]=c->r[4]+0x00000030u; // 802BFCEC
  if (crb(c,2)) { goto L_802BFCF8; } // 802BFCF0
  W32(c->r[29]+0x00000000u,c->r[4]); // 802BFCF4
L_802BFCF8:;
  cmps(c,0,(int32_t)c->r[28],0); // 802BFCF8
  if (!crb(c,2)) { goto L_802BFD08; } // 802BFCFC
  c->r[3]=0u+0x00000000u; // 802BFD00
  goto L_802BFDC0; // 802BFD04
L_802BFD08:;
  c->r[3]=c->r[28]|c->r[28]; // 802BFD08
  c->lr=0x802BFD10u; f_8034FF40(c); // 802BFD0C
  cmps(c,0,(int32_t)c->r[3],0); // 802BFD10
  c->r[29]=c->r[3]|c->r[3]; // 802BFD14
  if (!crb(c,2)) { goto L_802BFD24; } // 802BFD18
  c->r[3]=0u+0x00000000u; // 802BFD1C
  goto L_802BFDC0; // 802BFD20
L_802BFD24:;
  c->r[4]=c->r[3]+0x00000030u; // 802BFD24
  if (crb(c,2)) { goto L_802BFDBC; } // 802BFD28
  c->r[0]=0u+0x00000000u; // 802BFD2C
  c->r[12]=0u+0x80480000u; // 802BFD30
  W32(c->r[3]+0x00000004u,c->r[0]); // 802BFD34
  c->r[12]=c->r[12]+0x00006AC4u; // 802BFD38
  c->r[31]=R32(c->r[31]+0x00000000u); // 802BFD3C
  W32(c->r[3]+0x00000008u,c->r[28]); // 802BFD40
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802BFD44
  W32(c->r[3]+0x00000000u,c->r[12]); // 802BFD48
  W32(c->r[3]+0x00000010u,c->r[30]); // 802BFD4C
  W32(c->r[3]+0x00000014u,c->r[4]); // 802BFD50
  c->r[12]=R32(c->r[12]+0x00000034u); // 802BFD54
  c->ctr=c->r[12]; // 802BFD58
  if (true) { c->lr=0x802BFD60u; dispatch(c,c->ctr); } // 802BFD5C
  c->r[4]=R16(c->r[31]+0x0000001Cu); // 802BFD60
  c->r[0]=0u+0x43300000u; // 802BFD64
  c->r[5]=R32(c->r[31]+0x00000020u); // 802BFD68
  c->r[3]=0u+0x80480000u; // 802BFD6C
  c->r[4]=c->r[4]^0x80000000u; // 802BFD70
  {uint32_t ea=c->r[2]+0xFFFFAB70u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFD74
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802BFD78
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802BFD7C
  {uint32_t ea=c->r[2]+0xFFFFAB74u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BFD80
  c->r[4]=c->r[13]+0xFFFF8008u; // 802BFD84
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BFD88
  c->r[3]=c->r[3]+0x00006A80u; // 802BFD8C
  {uint32_t ea=c->r[2]+0xFFFFAB78u; c->f[3]=RF64(ea);} // 802BFD90
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802BFD94
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802BFD98
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 802BFD9C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 802BFDA0
  c->r[0]=R32(c->r[4]+c->r[5]); // 802BFDA4
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[1]);} // 802BFDA8
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 802BFDAC
  W32(c->r[29]+0x00000028u,c->r[0]); // 802BFDB0
  W32(c->r[29]+0x00000000u,c->r[3]); // 802BFDB4
  W32(c->r[29]+0x0000002Cu,c->r[31]); // 802BFDB8
L_802BFDBC:;
  c->r[3]=c->r[29]|c->r[29]; // 802BFDBC
L_802BFDC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 802BFDC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802BFDC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802BFDC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802BFDCC
  c->r[28]=R32(c->r[1]+0x00000010u); // 802BFDD0
  c->lr=c->r[0]; // 802BFDD4
  c->r[1]=c->r[1]+0x00000020u; // 802BFDD8
  return; // 802BFDDC
}

// SetFrame__Q34nw4r3g3d12AnmObjVisResFf
void f_802BFDE0(Ctx* __restrict c) {
  trace_call(0x802BFDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BFDE0
  c->r[0]=c->lr; // 802BFDE4
  c->f[3]=c->f[1]; // 802BFDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BFDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BFDF0
  c->r[31]=c->r[3]|c->r[3]; // 802BFDF4
  c->r[12]=R32(c->r[3]+0x00000028u); // 802BFDF8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFDFC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BFE00
  c->ctr=c->r[12]; // 802BFE04
  if (true) { c->lr=0x802BFE0Cu; dispatch(c,c->ctr); } // 802BFE08
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802BFE0C
  c->r[3]=c->r[31]|c->r[31]; // 802BFE10
  c->r[4]=0u+0x00000008u; // 802BFE14
  c->r[5]=0u+0x00000000u; // 802BFE18
  c->r[12]=R32(c->r[31]+0x00000000u); // 802BFE1C
  c->r[6]=0u+0x00000000u; // 802BFE20
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802BFE24
  c->ctr=c->r[12]; // 802BFE28
  if (true) { c->lr=0x802BFE30u; dispatch(c,c->ctr); } // 802BFE2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BFE30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BFE34
  c->lr=c->r[0]; // 802BFE38
  c->r[1]=c->r[1]+0x00000010u; // 802BFE3C
  return; // 802BFE40
}

// GetFrame__Q34nw4r3g3d12AnmObjVisResCFv
void f_802BFE44(Ctx* __restrict c) {
  trace_call(0x802BFE44u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFE44
  return; // 802BFE48
}

// SetUpdateRate__Q34nw4r3g3d12AnmObjVisResFf
void f_802BFE4C(Ctx* __restrict c) {
  trace_call(0x802BFE4Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 802BFE4C
  return; // 802BFE50
}

// GetUpdateRate__Q34nw4r3g3d12AnmObjVisResCFv
void f_802BFE54(Ctx* __restrict c) {
  trace_call(0x802BFE54u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFE54
  return; // 802BFE58
}

// UpdateFrame__Q34nw4r3g3d12AnmObjVisResFv
void f_802BFE5C(Ctx* __restrict c) {
  trace_call(0x802BFE5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BFE5C
  c->r[0]=c->lr; // 802BFE60
  {uint32_t ea=c->r[2]+0xFFFFAB70u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BFE64
  W32(c->r[1]+0x00000014u,c->r[0]); // 802BFE68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802BFE6C
  c->r[31]=c->r[3]|c->r[3]; // 802BFE70
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFE74
  fcmp(c,0,c->f[0],c->f[1]); // 802BFE78
  if (crb(c,2)) { goto L_802BFECC; } // 802BFE7C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802BFE80
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFE84
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802BFE88
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802BFE8C
  c->r[12]=R32(c->r[3]+0x00000028u); // 802BFE90
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802BFE94
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802BFE98
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802BFE9C
  c->ctr=c->r[12]; // 802BFEA0
  if (true) { c->lr=0x802BFEA8u; dispatch(c,c->ctr); } // 802BFEA4
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802BFEA8
  c->r[3]=c->r[31]|c->r[31]; // 802BFEAC
  c->r[4]=0u+0x00000008u; // 802BFEB0
  c->r[5]=0u+0x00000000u; // 802BFEB4
  c->r[12]=R32(c->r[31]+0x00000000u); // 802BFEB8
  c->r[6]=0u+0x00000000u; // 802BFEBC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 802BFEC0
  c->ctr=c->r[12]; // 802BFEC4
  if (true) { c->lr=0x802BFECCu; dispatch(c,c->ctr); } // 802BFEC8
L_802BFECC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802BFECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802BFED0
  c->lr=c->r[0]; // 802BFED4
  c->r[1]=c->r[1]+0x00000010u; // 802BFED8
  return; // 802BFEDC
}

// Bind__Q34nw4r3g3d12AnmObjVisResFQ34nw4r3g3d6ResMdl
void f_802BFEE0(Ctx* __restrict c) {
  trace_call(0x802BFEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802BFEE0
  c->r[0]=c->lr; // 802BFEE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 802BFEE8
  c->r[11]=c->r[1]+0x00000030u; // 802BFEEC
  c->lr=0x802BFEF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802BFEF0
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802BFEF4
  c->r[27]=c->r[3]|c->r[3]; // 802BFEF8
  c->r[28]=c->r[4]|c->r[4]; // 802BFEFC
  c->r[30]=0u+0x00000000u; // 802BFF00
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 802BFF04
  c->r[29]=0u+0x00000000u; // 802BFF08
  cmps(c,0,(int32_t)c->r[31],0); // 802BFF0C
  if (!crb(c,1)) { goto L_802BFFB8; } // 802BFF10
  goto L_802BFFAC; // 802BFF14
L_802BFF18:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 802BFF18
  c->r[0]=R32(c->r[3]+0x00000010u); // 802BFF1C
  cmps(c,0,(int32_t)c->r[0],0); // 802BFF20
  if (crb(c,2)) { goto L_802BFF30; } // 802BFF24
  c->r[0]=c->r[3]+c->r[0]; // 802BFF28
  goto L_802BFF34; // 802BFF2C
L_802BFF30:;
  c->r[0]=0u+0x00000000u; // 802BFF30
L_802BFF34:;
  cmps(c,0,(int32_t)c->r[0],0); // 802BFF34
  if (crb(c,2)) { goto L_802BFF60; } // 802BFF38
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 802BFF3C
  c->r[3]=c->r[0]+c->r[3]; // 802BFF40
  c->r[3]=R32(c->r[3]+0x00000024u); // 802BFF44
  cmps(c,0,(int32_t)c->r[3],0); // 802BFF48
  if (crb(c,2)) { goto L_802BFF58; } // 802BFF4C
  c->r[5]=c->r[0]+c->r[3]; // 802BFF50
  goto L_802BFF64; // 802BFF54
L_802BFF58:;
  c->r[5]=0u+0x00000000u; // 802BFF58
  goto L_802BFF64; // 802BFF5C
L_802BFF60:;
  c->r[5]=0u+0x00000000u; // 802BFF60
L_802BFF64:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802BFF64
  c->r[3]=c->r[28]|c->r[28]; // 802BFF68
  c->r[4]=c->r[1]+0x00000008u; // 802BFF6C
  c->r[5]=c->r[0]+c->r[5]; // 802BFF70
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802BFF74
  W32(c->r[1]+0x00000008u,c->r[0]); // 802BFF78
  c->lr=0x802BFF80u; f_802B8454(c); // 802BFF7C
  cmps(c,0,(int32_t)c->r[3],0); // 802BFF80
  if (crb(c,2)) { goto L_802BFFA8; } // 802BFF84
  c->r[4]=R32(c->r[27]+0x00000014u); // 802BFF88
  if (crb(c,2)) { goto L_802BFF98; } // 802BFF8C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802BFF90
  goto L_802BFF9C; // 802BFF94
L_802BFF98:;
  c->r[0]=0u+0x00000000u; // 802BFF98
L_802BFF9C:;
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802BFF9C
  c->r[30]=0u+0x00000001u; // 802BFFA0
  W16(c->r[4]+c->r[0],c->r[29]); // 802BFFA4
L_802BFFA8:;
  c->r[29]=c->r[29]+0x00000001u; // 802BFFA8
L_802BFFAC:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 802BFFAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802BFFB0
  if (crb(c,0)) { IRQCHK(c); goto L_802BFF18; } // 802BFFB4
L_802BFFB8:;
  c->r[3]=c->r[27]|c->r[27]; // 802BFFB8
  c->r[4]=0u+0x00000004u; // 802BFFBC
  c->r[5]=0u+0x00000001u; // 802BFFC0
  c->lr=0x802BFFC8u; f_802C63A4(c); // 802BFFC4
  c->r[11]=c->r[1]+0x00000030u; // 802BFFC8
  c->r[3]=c->r[30]|c->r[30]; // 802BFFCC
  c->lr=0x802BFFD4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802BFFD0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802BFFD4
  c->lr=c->r[0]; // 802BFFD8
  c->r[1]=c->r[1]+0x00000030u; // 802BFFDC
  return; // 802BFFE0
}

// GetResult__Q34nw4r3g3d12AnmObjVisResFUl
void f_802BFFE4(Ctx* __restrict c) {
  trace_call(0x802BFFE4u);
  c->r[5]=R32(c->r[3]+0x00000014u); // 802BFFE4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802BFFE8
  c->r[4]=R16(c->r[5]+c->r[0]); // 802BFFEC
  c->r[0]=rotl(c->r[4],0)&0x00004000u; cr0(c,c->r[0]); // 802BFFF0
  if (!crb(c,2)) { goto L_802C0000; } // 802BFFF4
  c->r[0]=rotl(c->r[4],0)&0x00008000u; cr0(c,c->r[0]); // 802BFFF8
  if (crb(c,2)) { goto L_802C0008; } // 802BFFFC
L_802C0000:;
  c->r[3]=0u+0x00000001u; // 802C0000
  return; // 802C0004
L_802C0008:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C0008
  c->r[3]=c->r[3]+0x0000002Cu; // 802C000C
  f_802BBF6C(c); return; // 802C0010
  return; // 802C0014
}

// ApplyVisAnmResult__Q24nw4r3g3dFQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_802C0018(Ctx* __restrict c) {
  trace_call(0x802C0018u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0018
  c->r[0]=c->lr; // 802C001C
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C0020
  c->r[11]=c->r[1]+0x00000020u; // 802C0024
  c->lr=0x802C002Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C0028
  c->r[26]=c->r[3]|c->r[3]; // 802C002C
  c->r[27]=c->r[4]|c->r[4]; // 802C0030
  c->lr=0x802C0038u; f_802B854C(c); // 802C0034
  c->r[30]=c->r[3]|c->r[3]; // 802C0038
  c->r[28]=0u+0x00000000u; // 802C003C
  c->r[29]=0u+0x00000000u; // 802C0040
  goto L_802C00B4; // 802C0044
L_802C0048:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 802C0048
  c->r[0]=R16(c->r[3]+c->r[29]); // 802C004C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 802C0050
  if (!crb(c,2)) { goto L_802C00AC; } // 802C0054
  c->r[3]=c->r[26]|c->r[26]; // 802C0058
  c->r[4]=c->r[28]|c->r[28]; // 802C005C
  c->lr=0x802C0064u; f_802B84F8(c); // 802C0060
  c->r[12]=R32(c->r[27]+0x00000000u); // 802C0064
  c->r[31]=c->r[3]|c->r[3]; // 802C0068
  c->r[3]=c->r[27]|c->r[27]; // 802C006C
  c->r[4]=c->r[28]|c->r[28]; // 802C0070
  c->r[12]=R32(c->r[12]+0x00000038u); // 802C0074
  c->ctr=c->r[12]; // 802C0078
  if (true) { c->lr=0x802C0080u; dispatch(c,c->ctr); } // 802C007C
  cmps(c,0,(int32_t)c->r[31],0); // 802C0080
  if (crb(c,2)) { goto L_802C00AC; } // 802C0084
  cmps(c,0,(int32_t)c->r[3],0); // 802C0088
  if (crb(c,2)) { goto L_802C00A0; } // 802C008C
  c->r[0]=R32(c->r[31]+0x00000014u); // 802C0090
  c->r[0]=c->r[0]|0x00000100u; // 802C0094
  W32(c->r[31]+0x00000014u,c->r[0]); // 802C0098
  goto L_802C00AC; // 802C009C
L_802C00A0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 802C00A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFEFFu; // 802C00A4
  W32(c->r[31]+0x00000014u,c->r[0]); // 802C00A8
L_802C00AC:;
  c->r[29]=c->r[29]+0x00000002u; // 802C00AC
  c->r[28]=c->r[28]+0x00000001u; // 802C00B0
L_802C00B4:;
  cmpu(c,0,c->r[28],c->r[30]); // 802C00B4
  if (crb(c,0)) { IRQCHK(c); goto L_802C0048; } // 802C00B8
  c->r[11]=c->r[1]+0x00000020u; // 802C00BC
  c->lr=0x802C00C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C00C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C00C4
  c->lr=c->r[0]; // 802C00C8
  c->r[1]=c->r[1]+0x00000020u; // 802C00CC
  return; // 802C00D0
}

// ApplyVisAnmResult__Q24nw4r3g3dFPUcQ34nw4r3g3d6ResMdlPQ34nw4r3g3d9AnmObjVis
void f_802C00D4(Ctx* __restrict c) {
  trace_call(0x802C00D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C00D4
  c->r[0]=c->lr; // 802C00D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 802C00DC
  c->r[11]=c->r[1]+0x00000020u; // 802C00E0
  c->lr=0x802C00E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C00E4
  c->r[27]=c->r[3]|c->r[3]; // 802C00E8
  c->r[3]=c->r[4]|c->r[4]; // 802C00EC
  c->r[28]=c->r[5]|c->r[5]; // 802C00F0
  c->lr=0x802C00F8u; f_802B854C(c); // 802C00F4
  c->r[31]=c->r[3]|c->r[3]; // 802C00F8
  c->r[29]=0u+0x00000000u; // 802C00FC
  c->r[30]=0u+0x00000000u; // 802C0100
  goto L_802C0140; // 802C0104
L_802C0108:;
  c->r[3]=R32(c->r[28]+0x00000014u); // 802C0108
  c->r[0]=R16(c->r[3]+c->r[30]); // 802C010C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; cr0(c,c->r[0]); // 802C0110
  if (!crb(c,2)) { goto L_802C0134; } // 802C0114
  c->r[12]=R32(c->r[28]+0x00000000u); // 802C0118
  c->r[3]=c->r[28]|c->r[28]; // 802C011C
  c->r[4]=c->r[29]|c->r[29]; // 802C0120
  c->r[12]=R32(c->r[12]+0x00000038u); // 802C0124
  c->ctr=c->r[12]; // 802C0128
  if (true) { c->lr=0x802C0130u; dispatch(c,c->ctr); } // 802C012C
  W8(c->r[27]+0x00000000u,c->r[3]); // 802C0130
L_802C0134:;
  c->r[30]=c->r[30]+0x00000002u; // 802C0134
  c->r[29]=c->r[29]+0x00000001u; // 802C0138
  c->r[27]=c->r[27]+0x00000001u; // 802C013C
L_802C0140:;
  cmpu(c,0,c->r[29],c->r[31]); // 802C0140
  if (crb(c,0)) { IRQCHK(c); goto L_802C0108; } // 802C0144
  c->r[11]=c->r[1]+0x00000020u; // 802C0148
  c->lr=0x802C0150u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C014C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802C0150
  c->lr=c->r[0]; // 802C0154
  c->r[1]=c->r[1]+0x00000020u; // 802C0158
  return; // 802C015C
}

// IsDerivedFrom__Q34nw4r3g3d12AnmObjVisResCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C0160(Ctx* __restrict c) {
  trace_call(0x802C0160u);
  c->r[3]=0u+0x80440000u; // 802C0160
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0164
  c->r[3]=c->r[3]+0xFFFFC3F8u; // 802C0168
  cmpu(c,0,c->r[0],c->r[3]); // 802C016C
  if (!crb(c,2)) { goto L_802C017C; } // 802C0170
  c->r[3]=0u+0x00000001u; // 802C0174
  return; // 802C0178
L_802C017C:;
  c->r[3]=0u+0x80440000u; // 802C017C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0180
  c->r[3]=c->r[3]+0xFFFFC3E8u; // 802C0184
  cmpu(c,0,c->r[0],c->r[3]); // 802C0188
  if (!crb(c,2)) { goto L_802C0198; } // 802C018C
  c->r[3]=0u+0x00000001u; // 802C0190
  return; // 802C0194
L_802C0198:;
  c->r[3]=0u+0x80440000u; // 802C0198
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C019C
  cmpu(c,0,c->r[0],c->r[3]); // 802C01A0
  if (!crb(c,2)) { goto L_802C01B0; } // 802C01A4
  c->r[3]=0u+0x00000001u; // 802C01A8
  return; // 802C01AC
L_802C01B0:;
  c->r[3]=0u+0x80440000u; // 802C01B0
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C01B4
  c->r[0]=c->r[3]-c->r[0]; // 802C01B8
  c->r[0]=cntlz(c->r[0]); // 802C01BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C01C0
  return; // 802C01C4
}

// IsDerivedFrom__Q34nw4r3g3d9AnmObjVisCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C01C8(Ctx* __restrict c) {
  trace_call(0x802C01C8u);
  c->r[3]=0u+0x80440000u; // 802C01C8
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C01CC
  c->r[3]=c->r[3]+0xFFFFC3E8u; // 802C01D0
  cmpu(c,0,c->r[0],c->r[3]); // 802C01D4
  if (!crb(c,2)) { goto L_802C01E4; } // 802C01D8
  c->r[3]=0u+0x00000001u; // 802C01DC
  return; // 802C01E0
L_802C01E4:;
  c->r[3]=0u+0x80440000u; // 802C01E4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C01E8
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C01EC
  cmpu(c,0,c->r[0],c->r[3]); // 802C01F0
  if (!crb(c,2)) { goto L_802C0200; } // 802C01F4
  c->r[3]=0u+0x00000001u; // 802C01F8
  return; // 802C01FC
L_802C0200:;
  c->r[3]=0u+0x80440000u; // 802C0200
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C0204
  c->r[0]=c->r[3]-c->r[0]; // 802C0208
  c->r[0]=cntlz(c->r[0]); // 802C020C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C0210
  return; // 802C0214
}

// GetTypeName__Q34nw4r3g3d12AnmObjVisResCFv
void f_802C0218(Ctx* __restrict c) {
  trace_call(0x802C0218u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0218
  c->r[0]=c->lr; // 802C021C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C0220
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C0224
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C0228
  c->ctr=c->r[12]; // 802C022C
  if (true) { c->lr=0x802C0234u; dispatch(c,c->ctr); } // 802C0230
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C0234
  c->r[3]=c->r[3]+0x00000004u; // 802C0238
  c->lr=c->r[0]; // 802C023C
  c->r[1]=c->r[1]+0x00000010u; // 802C0240
  return; // 802C0244
}

// GetTypeObj__Q34nw4r3g3d12AnmObjVisResCFv
void f_802C0248(Ctx* __restrict c) {
  trace_call(0x802C0248u);
  c->r[3]=0u+0x80440000u; // 802C0248
  c->r[3]=c->r[3]+0xFFFFC3F8u; // 802C024C
  return; // 802C0250
}

// __dt__Q34nw4r3g3d12AnmObjVisResFv
void f_802C0254(Ctx* __restrict c) {
  trace_call(0x802C0254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0254
  c->r[0]=c->lr; // 802C0258
  cmps(c,0,(int32_t)c->r[3],0); // 802C025C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C0260
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C0264
  c->r[31]=c->r[3]|c->r[3]; // 802C0268
  if (crb(c,2)) { goto L_802C0280; } // 802C026C
  if (crb(c,2)) { goto L_802C0280; } // 802C0270
  if (crb(c,2)) { goto L_802C0280; } // 802C0274
  c->r[4]=0u+0x00000000u; // 802C0278
  c->lr=0x802C0280u; f_802C624C(c); // 802C027C
L_802C0280:;
  c->r[3]=c->r[31]|c->r[31]; // 802C0280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C0284
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C0288
  c->lr=c->r[0]; // 802C028C
  c->r[1]=c->r[1]+0x00000010u; // 802C0290
  return; // 802C0294
}

// GetTypeName__Q34nw4r3g3d9AnmObjVisCFv
void f_802C0298(Ctx* __restrict c) {
  trace_call(0x802C0298u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0298
  c->r[0]=c->lr; // 802C029C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C02A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C02A4
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C02A8
  c->ctr=c->r[12]; // 802C02AC
  if (true) { c->lr=0x802C02B4u; dispatch(c,c->ctr); } // 802C02B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C02B4
  c->r[3]=c->r[3]+0x00000004u; // 802C02B8
  c->lr=c->r[0]; // 802C02BC
  c->r[1]=c->r[1]+0x00000010u; // 802C02C0
  return; // 802C02C4
}

// GetTypeObj__Q34nw4r3g3d9AnmObjVisCFv
void f_802C02C8(Ctx* __restrict c) {
  trace_call(0x802C02C8u);
  c->r[3]=0u+0x80440000u; // 802C02C8
  c->r[3]=c->r[3]+0xFFFFC3E8u; // 802C02CC
  return; // 802C02D0
}

// TestExistence__Q34nw4r3g3d12AnmObjMatClrCFUl
void f_802C02D4(Ctx* __restrict c) {
  trace_call(0x802C02D4u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 802C02D4
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802C02D8
  c->r[0]=R16(c->r[3]+c->r[0]); // 802C02DC
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 802C02E0
  c->r[0]=cntlz(c->r[0]); // 802C02E4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C02E8
  return; // 802C02EC
}

// fn_802C02F0
void f_802C02F0(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 802C02F0
  c->r[7]=0u+0x00000000u; // 802C02F4
  c->r[5]=c->r[4]+0xFFFF8000u; // 802C02F8
  c->r[6]=0u+0x00000000u; // 802C02FC
  goto L_802C0314; // 802C0300
L_802C0304:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C0304
  c->r[7]=c->r[7]+0x00000001u; // 802C0308
  W16(c->r[4]+c->r[6],c->r[5]); // 802C030C
  c->r[6]=c->r[6]+0x00000002u; // 802C0310
L_802C0314:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C0314
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802C0318
  if (crb(c,0)) { IRQCHK(c); goto L_802C0304; } // 802C031C
  c->r[4]=0u+0x00000004u; // 802C0320
  c->r[5]=0u+0x00000000u; // 802C0324
  f_802C63A4(c); return; // 802C0328
}

// fn_802C032C
void f_802C032C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C032C
  return; // 802C0330
}

// fn_802C0334
void f_802C0334(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C0334
  return; // 802C0338
}

// fn_802C033C
void f_802C033C(Ctx* __restrict c) {
  return; // 802C033C
}

// fn_802C0340
void f_802C0340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0340
  c->r[0]=c->lr; // 802C0344
  cmps(c,0,(int32_t)c->r[3],0); // 802C0348
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C034C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C0350
  c->r[31]=c->r[3]|c->r[3]; // 802C0354
  if (crb(c,2)) { goto L_802C0368; } // 802C0358
  if (crb(c,2)) { goto L_802C0368; } // 802C035C
  c->r[4]=0u+0x00000000u; // 802C0360
  c->lr=0x802C0368u; f_802C624C(c); // 802C0364
L_802C0368:;
  c->r[3]=c->r[31]|c->r[31]; // 802C0368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C036C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C0370
  c->lr=c->r[0]; // 802C0374
  c->r[1]=c->r[1]+0x00000010u; // 802C0378
  return; // 802C037C
}

// Construct__Q34nw4r3g3d15AnmObjMatClrResFP12MEMAllocatorPiQ34nw4r3g3d9ResAnmClrQ34nw4r3g3d6ResMdlb
void f_802C0380(Ctx* __restrict c) {
  trace_call(0x802C0380u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0380
  c->r[0]=c->lr; // 802C0384
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C0388
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802C038C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802C0390
  c->r[11]=c->r[1]+0x00000030u; // 802C0394
  c->lr=0x802C039Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C0398
  c->r[8]=R32(c->r[5]+0x00000000u); // 802C039C
  c->r[29]=c->r[3]|c->r[3]; // 802C03A0
  c->r[25]=c->r[4]|c->r[4]; // 802C03A4
  c->r[30]=c->r[5]|c->r[5]; // 802C03A8
  cmps(c,0,(int32_t)c->r[8],0); // 802C03AC
  c->r[27]=c->r[7]|c->r[7]; // 802C03B0
  if (crb(c,2)) { goto L_802C03C4; } // 802C03B4
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C03B8
  cmps(c,0,(int32_t)c->r[0],0); // 802C03BC
  if (!crb(c,2)) { goto L_802C03CC; } // 802C03C0
L_802C03C4:;
  c->r[3]=0u+0x00000000u; // 802C03C4
  goto L_802C0550; // 802C03C8
L_802C03CC:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 802C03CC
  c->r[3]=c->r[6]|c->r[6]; // 802C03D0
  c->lr=0x802C03D8u; f_802B8AA4(c); // 802C03D4
  c->r[0]=0u-c->r[27]; // 802C03D8
  c->r[28]=c->r[3]|c->r[3]; // 802C03DC
  c->r[4]=c->r[0]|c->r[27]; // 802C03E0
  cmps(c,0,(int32_t)c->r[25],0); // 802C03E4
  c->r[4]=sraw(c,c->r[4],31); // 802C03E8
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C03EC
  c->r[3]=c->r[31]&c->r[4]; // 802C03F0
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)92); // 802C03F4
  c->r[3]=c->r[26]+c->r[0]; // 802C03F8
  c->r[4]=c->r[3]+0x00000034u; // 802C03FC
  if (crb(c,2)) { goto L_802C0408; } // 802C0400
  W32(c->r[25]+0x00000000u,c->r[4]); // 802C0404
L_802C0408:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C0408
  if (!crb(c,2)) { goto L_802C0418; } // 802C040C
  c->r[3]=0u+0x00000000u; // 802C0410
  goto L_802C0550; // 802C0414
L_802C0418:;
  c->r[3]=c->r[29]|c->r[29]; // 802C0418
  c->lr=0x802C0420u; f_8034FF40(c); // 802C041C
  cmps(c,0,(int32_t)c->r[3],0); // 802C0420
  c->r[31]=c->r[3]|c->r[3]; // 802C0424
  if (!crb(c,2)) { goto L_802C0434; } // 802C0428
  c->r[3]=0u+0x00000000u; // 802C042C
  goto L_802C0550; // 802C0430
L_802C0434:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C0434
  if (crb(c,2)) { goto L_802C0444; } // 802C0438
  c->r[27]=c->r[3]+0x00000034u; // 802C043C
  goto L_802C0448; // 802C0440
L_802C0444:;
  c->r[27]=0u+0x00000000u; // 802C0444
L_802C0448:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C0448
  c->r[4]=c->r[3]+c->r[26]; // 802C044C
  c->r[5]=c->r[4]+0x00000034u; // 802C0450
  if (crb(c,2)) { goto L_802C054C; } // 802C0454
  c->r[0]=0u+0x00000000u; // 802C0458
  c->r[4]=0u+0x80480000u; // 802C045C
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C0460
  c->r[4]=c->r[4]+0x00006B50u; // 802C0464
  c->r[30]=R32(c->r[30]+0x00000000u); // 802C0468
  W32(c->r[3]+0x00000008u,c->r[29]); // 802C046C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C0470
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C0474
  W32(c->r[3]+0x00000010u,c->r[28]); // 802C0478
  W32(c->r[3]+0x00000014u,c->r[5]); // 802C047C
  c->r[3]=c->r[31]|c->r[31]; // 802C0480
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C0484
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C0488
  c->ctr=c->r[12]; // 802C048C
  if (true) { c->lr=0x802C0494u; dispatch(c,c->ctr); } // 802C0490
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 802C0494
  c->r[0]=0u+0x43300000u; // 802C0498
  c->r[5]=R32(c->r[30]+0x00000020u); // 802C049C
  c->r[3]=0u+0x80480000u; // 802C04A0
  c->r[4]=c->r[4]^0x80000000u; // 802C04A4
  {uint32_t ea=c->r[2]+0xFFFFAB80u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C04A8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802C04AC
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802C04B0
  {uint32_t ea=c->r[2]+0xFFFFAB84u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C04B4
  c->r[4]=c->r[13]+0xFFFF8008u; // 802C04B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C04BC
  c->r[3]=c->r[3]+0x00006B08u; // 802C04C0
  {uint32_t ea=c->r[2]+0xFFFFAB88u; c->f[3]=RF64(ea);} // 802C04C4
  cmps(c,0,(int32_t)c->r[27],0); // 802C04C8
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802C04CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802C04D0
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C04D4
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 802C04D8
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C04DC
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802C04E0
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802C04E4
  W32(c->r[31]+0x00000028u,c->r[0]); // 802C04E8
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C04EC
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 802C04F0
  W32(c->r[31]+0x00000030u,c->r[27]); // 802C04F4
  if (crb(c,2)) { goto L_802C054C; } // 802C04F8
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C04FC
  c->r[28]=0u+0x00000000u; // 802C0500
  c->r[27]=0u+0x00000000u; // 802C0504
  goto L_802C0540; // 802C0508
L_802C050C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C050C
  c->r[3]=R16(c->r[3]+c->r[27]); // 802C0510
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C0514
  if (!crb(c,2)) { goto L_802C0538; } // 802C0518
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C051C
  c->f[1]=c->f[31]; // 802C0520
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 802C0524
  c->r[4]=R32(c->r[31]+0x00000030u); // 802C0528
  c->r[3]=c->r[31]+0x0000002Cu; // 802C052C
  c->r[4]=c->r[4]+c->r[0]; // 802C0530
  c->lr=0x802C0538u; f_802BC08C(c); // 802C0534
L_802C0538:;
  c->r[27]=c->r[27]+0x00000002u; // 802C0538
  c->r[28]=c->r[28]+0x00000001u; // 802C053C
L_802C0540:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C0540
  cmpu(c,0,c->r[28],c->r[0]); // 802C0544
  if (crb(c,0)) { IRQCHK(c); goto L_802C050C; } // 802C0548
L_802C054C:;
  c->r[3]=c->r[31]|c->r[31]; // 802C054C
L_802C0550:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802C0550
  c->r[11]=c->r[1]+0x00000030u; // 802C0554
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802C0558
  c->lr=0x802C0560u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C055C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C0560
  c->lr=c->r[0]; // 802C0564
  c->r[1]=c->r[1]+0x00000040u; // 802C0568
  return; // 802C056C
}

// fn_802C0570
void f_802C0570(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0570
  c->r[0]=c->lr; // 802C0574
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C0578
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C057C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C0580
  c->f[3]=c->f[1]; // 802C0584
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C0588
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C058C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C0590
  c->r[29]=c->r[3]|c->r[3]; // 802C0594
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C0598
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C059C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C05A0
  c->ctr=c->r[12]; // 802C05A4
  if (true) { c->lr=0x802C05ACu; dispatch(c,c->ctr); } // 802C05A8
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C05AC
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C05B0
  cmps(c,0,(int32_t)c->r[0],0); // 802C05B4
  if (crb(c,2)) { goto L_802C060C; } // 802C05B8
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C05BC
  c->r[31]=0u+0x00000000u; // 802C05C0
  c->r[30]=0u+0x00000000u; // 802C05C4
  goto L_802C0600; // 802C05C8
L_802C05CC:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C05CC
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C05D0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C05D4
  if (!crb(c,2)) { goto L_802C05F8; } // 802C05D8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C05DC
  c->f[1]=c->f[31]; // 802C05E0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 802C05E4
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C05E8
  c->r[3]=c->r[29]+0x0000002Cu; // 802C05EC
  c->r[4]=c->r[4]+c->r[0]; // 802C05F0
  c->lr=0x802C05F8u; f_802BC08C(c); // 802C05F4
L_802C05F8:;
  c->r[30]=c->r[30]+0x00000002u; // 802C05F8
  c->r[31]=c->r[31]+0x00000001u; // 802C05FC
L_802C0600:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C0600
  cmpu(c,0,c->r[31],c->r[0]); // 802C0604
  if (crb(c,0)) { IRQCHK(c); goto L_802C05CC; } // 802C0608
L_802C060C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C060C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C0610
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C0614
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C0618
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C061C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C0620
  c->lr=c->r[0]; // 802C0624
  c->r[1]=c->r[1]+0x00000030u; // 802C0628
  return; // 802C062C
}

// fn_802C0630
void f_802C0630(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C0630
  return; // 802C0634
}

// SetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResFf_802C0638
void f_802C0638(Ctx* __restrict c) {
  trace_call(0x802C0638u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0638
  c->r[0]=c->lr; // 802C063C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C0640
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C0644
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C0648
  {uint32_t ea=c->r[2]+0xFFFFAB80u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C064C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C0650
  fcmp(c,0,c->f[0],c->f[1]); // 802C0654
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C0658
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C065C
  c->r[29]=c->r[3]|c->r[3]; // 802C0660
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 802C0664
  if (!crb(c,2)) { goto L_802C06C8; } // 802C0668
  c->r[0]=R32(c->r[3]+0x00000030u); // 802C066C
  cmps(c,0,(int32_t)c->r[0],0); // 802C0670
  if (crb(c,2)) { goto L_802C06C8; } // 802C0674
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C0678
  c->r[31]=0u+0x00000000u; // 802C067C
  c->r[30]=0u+0x00000000u; // 802C0680
  goto L_802C06BC; // 802C0684
L_802C0688:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C0688
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C068C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C0690
  if (!crb(c,2)) { goto L_802C06B4; } // 802C0694
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C0698
  c->f[1]=c->f[31]; // 802C069C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 802C06A0
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C06A4
  c->r[3]=c->r[29]+0x0000002Cu; // 802C06A8
  c->r[4]=c->r[4]+c->r[0]; // 802C06AC
  c->lr=0x802C06B4u; f_802BC08C(c); // 802C06B0
L_802C06B4:;
  c->r[30]=c->r[30]+0x00000002u; // 802C06B4
  c->r[31]=c->r[31]+0x00000001u; // 802C06B8
L_802C06BC:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C06BC
  cmpu(c,0,c->r[31],c->r[0]); // 802C06C0
  if (crb(c,0)) { IRQCHK(c); goto L_802C0688; } // 802C06C4
L_802C06C8:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C06C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C06CC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C06D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C06D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C06D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C06DC
  c->lr=c->r[0]; // 802C06E0
  c->r[1]=c->r[1]+0x00000030u; // 802C06E4
  return; // 802C06E8
}

// GetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResCFv_802C06EC
void f_802C06EC(Ctx* __restrict c) {
  trace_call(0x802C06ECu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C06EC
  return; // 802C06F0
}

// UpdateFrame__Q34nw4r3g3d15AnmObjMatClrResFv_802C06F4
void f_802C06F4(Ctx* __restrict c) {
  trace_call(0x802C06F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C06F4
  c->r[0]=c->lr; // 802C06F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C06FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C0700
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C0704
  {uint32_t ea=c->r[2]+0xFFFFAB80u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C0708
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C070C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C0710
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C0714
  c->r[29]=c->r[3]|c->r[3]; // 802C0718
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C071C
  fcmp(c,0,c->f[0],c->f[1]); // 802C0720
  if (crb(c,2)) { goto L_802C07B0; } // 802C0724
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C0728
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C072C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C0730
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802C0734
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C0738
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C073C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C0740
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802C0744
  c->ctr=c->r[12]; // 802C0748
  if (true) { c->lr=0x802C0750u; dispatch(c,c->ctr); } // 802C074C
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C0750
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C0754
  cmps(c,0,(int32_t)c->r[0],0); // 802C0758
  if (crb(c,2)) { goto L_802C07B0; } // 802C075C
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C0760
  c->r[31]=0u+0x00000000u; // 802C0764
  c->r[30]=0u+0x00000000u; // 802C0768
  goto L_802C07A4; // 802C076C
L_802C0770:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C0770
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C0774
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C0778
  if (!crb(c,2)) { goto L_802C079C; } // 802C077C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C0780
  c->f[1]=c->f[31]; // 802C0784
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 802C0788
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C078C
  c->r[3]=c->r[29]+0x0000002Cu; // 802C0790
  c->r[4]=c->r[4]+c->r[0]; // 802C0794
  c->lr=0x802C079Cu; f_802BC08C(c); // 802C0798
L_802C079C:;
  c->r[30]=c->r[30]+0x00000002u; // 802C079C
  c->r[31]=c->r[31]+0x00000001u; // 802C07A0
L_802C07A4:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C07A4
  cmpu(c,0,c->r[31],c->r[0]); // 802C07A8
  if (crb(c,0)) { IRQCHK(c); goto L_802C0770; } // 802C07AC
L_802C07B0:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C07B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C07B4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C07B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C07BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C07C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C07C4
  c->lr=c->r[0]; // 802C07C8
  c->r[1]=c->r[1]+0x00000030u; // 802C07CC
  return; // 802C07D0
}

// Bind__Q34nw4r3g3d15AnmObjMatClrResFQ34nw4r3g3d6ResMdl_802C07D4
void f_802C07D4(Ctx* __restrict c) {
  trace_call(0x802C07D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C07D4
  c->r[0]=c->lr; // 802C07D8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C07DC
  c->r[11]=c->r[1]+0x00000030u; // 802C07E0
  c->lr=0x802C07E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C07E4
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802C07E8
  c->r[27]=c->r[3]|c->r[3]; // 802C07EC
  c->r[28]=c->r[4]|c->r[4]; // 802C07F0
  c->r[30]=0u+0x00000000u; // 802C07F4
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 802C07F8
  c->r[29]=0u+0x00000000u; // 802C07FC
  cmps(c,0,(int32_t)c->r[31],0); // 802C0800
  if (!crb(c,1)) { goto L_802C08A0; } // 802C0804
  goto L_802C0894; // 802C0808
L_802C080C:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 802C080C
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C0810
  cmps(c,0,(int32_t)c->r[0],0); // 802C0814
  if (crb(c,2)) { goto L_802C0824; } // 802C0818
  c->r[0]=c->r[3]+c->r[0]; // 802C081C
  goto L_802C0828; // 802C0820
L_802C0824:;
  c->r[0]=0u+0x00000000u; // 802C0824
L_802C0828:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C0828
  if (crb(c,2)) { goto L_802C0854; } // 802C082C
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 802C0830
  c->r[3]=c->r[0]+c->r[3]; // 802C0834
  c->r[3]=R32(c->r[3]+0x00000024u); // 802C0838
  cmps(c,0,(int32_t)c->r[3],0); // 802C083C
  if (crb(c,2)) { goto L_802C084C; } // 802C0840
  c->r[5]=c->r[0]+c->r[3]; // 802C0844
  goto L_802C0858; // 802C0848
L_802C084C:;
  c->r[5]=0u+0x00000000u; // 802C084C
  goto L_802C0858; // 802C0850
L_802C0854:;
  c->r[5]=0u+0x00000000u; // 802C0854
L_802C0858:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C0858
  c->r[3]=c->r[28]|c->r[28]; // 802C085C
  c->r[4]=c->r[1]+0x00000008u; // 802C0860
  c->r[5]=c->r[0]+c->r[5]; // 802C0864
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802C0868
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C086C
  c->lr=0x802C0874u; f_802B89AC(c); // 802C0870
  cmps(c,0,(int32_t)c->r[3],0); // 802C0874
  if (crb(c,2)) { goto L_802C0890; } // 802C0878
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C087C
  c->r[30]=0u+0x00000001u; // 802C0880
  c->r[3]=R32(c->r[27]+0x00000014u); // 802C0884
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802C0888
  W16(c->r[3]+c->r[0],c->r[29]); // 802C088C
L_802C0890:;
  c->r[29]=c->r[29]+0x00000001u; // 802C0890
L_802C0894:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 802C0894
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802C0898
  if (crb(c,0)) { IRQCHK(c); goto L_802C080C; } // 802C089C
L_802C08A0:;
  c->r[3]=c->r[27]|c->r[27]; // 802C08A0
  c->r[4]=0u+0x00000004u; // 802C08A4
  c->r[5]=0u+0x00000001u; // 802C08A8
  c->lr=0x802C08B0u; f_802C63A4(c); // 802C08AC
  c->r[11]=c->r[1]+0x00000030u; // 802C08B0
  c->r[3]=c->r[30]|c->r[30]; // 802C08B4
  c->lr=0x802C08BCu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C08B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C08BC
  c->lr=c->r[0]; // 802C08C0
  c->r[1]=c->r[1]+0x00000030u; // 802C08C4
  return; // 802C08C8
}

// GetResult__Q34nw4r3g3d15AnmObjMatClrResFPQ34nw4r3g3d12ClrAnmResultUl_802C08CC
void f_802C08CC(Ctx* __restrict c) {
  trace_call(0x802C08CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C08CC
  c->r[0]=c->lr; // 802C08D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C08D4
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C08D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C08DC
  c->r[31]=c->r[4]|c->r[4]; // 802C08E0
  c->r[6]=R32(c->r[3]+0x00000014u); // 802C08E4
  c->r[5]=R16(c->r[6]+c->r[0]); // 802C08E8
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 802C08EC
  if (crb(c,2)) { goto L_802C0904; } // 802C08F0
  c->r[0]=0u+0x00000000u; // 802C08F4
  c->r[3]=c->r[31]|c->r[31]; // 802C08F8
  W32(c->r[4]+0x00000000u,c->r[0]); // 802C08FC
  goto L_802C092C; // 802C0900
L_802C0904:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 802C0904
  cmps(c,0,(int32_t)c->r[6],0); // 802C0908
  if (crb(c,2)) { goto L_802C091C; } // 802C090C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)92); // 802C0910
  c->r[3]=c->r[6]+c->r[0]; // 802C0914
  goto L_802C092C; // 802C0918
L_802C091C:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C091C
  c->r[3]=c->r[3]+0x0000002Cu; // 802C0920
  c->lr=0x802C0928u; f_802BC08C(c); // 802C0924
  c->r[3]=c->r[31]|c->r[31]; // 802C0928
L_802C092C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C092C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C0930
  c->lr=c->r[0]; // 802C0934
  c->r[1]=c->r[1]+0x00000010u; // 802C0938
  return; // 802C093C
}

// G3dProc__Q34nw4r3g3d15AnmObjMatClrResFUlUlPv
void f_802C0940(Ctx* __restrict c) {
  trace_call(0x802C0940u);
  c->r[5]=0u+0x00010000u; // 802C0940
  c->r[0]=c->r[5]+0x00000002u; // 802C0944
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C0948
  if (crb(c,2)) { goto L_802C098C; } // 802C094C
  if (!crb(c,0)) { goto L_802C0960; } // 802C0950
  cmps(c,0,(int32_t)c->r[4],8); // 802C0954
  if (crb(c,2)) { goto L_802C0970; } // 802C0958
  return; // 802C095C
L_802C0960:;
  c->r[0]=c->r[5]+0x00000004u; // 802C0960
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C0964
  if (!crb(c,0)) return; // 802C0968
  goto L_802C0980; // 802C096C
L_802C0970:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C0970
  c->r[12]=R32(c->r[12]+0x00000024u); // 802C0974
  c->ctr=c->r[12]; // 802C0978
  if (true) { dispatch(c,c->ctr); return; } // 802C097C
L_802C0980:;
  c->r[0]=0u+0x00000000u; // 802C0980
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C0984
  return; // 802C0988
L_802C098C:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C098C
  return; // 802C0990
}

// ApplyClrAnmResult__Q24nw4r3g3dFQ34nw4r3g3d10ResMatChanQ34nw4r3g3d14ResMatTevColorPCQ34nw4r3g3d12ClrAnmResult
void f_802C0994(Ctx* __restrict c) {
  trace_call(0x802C0994u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0994
  c->r[0]=c->lr; // 802C0998
  c->r[6]=R32(c->r[5]+0x00000000u); // 802C099C
  W32(c->r[1]+0x00000094u,c->r[0]); // 802C09A0
  c->r[0]=0u+0xFFFFFFFFu; // 802C09A4
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 802C09A8
  c->r[31]=c->r[5]|c->r[5]; // 802C09AC
  W32(c->r[1]+0x00000088u,c->r[30]); // 802C09B0
  c->r[30]=c->r[4]|c->r[4]; // 802C09B4
  W32(c->r[1]+0x00000084u,c->r[29]); // 802C09B8
  c->r[29]=c->r[3]|c->r[3]; // 802C09BC
  W32(c->r[1]+0x00000080u,c->r[28]); // 802C09C0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C09C4
  c->r[0]=rotl(c->r[6],0)&0x0000000Fu; cr0(c,c->r[0]); // 802C09C8
  if (crb(c,2)) { goto L_802C0B2C; } // 802C09CC
  c->r[0]=rotl(c->r[6],0)&0x00000001u; cr0(c,c->r[0]); // 802C09D0
  if (crb(c,2)) { goto L_802C0A24; } // 802C09D4
  c->r[28]=R32(c->r[3]+0x00000000u); // 802C09D8
  c->r[3]=c->r[1]+0x00000078u; // 802C09DC
  c->r[5]=R32(c->r[5]+0x00000030u); // 802C09E0
  c->r[4]=c->r[1]+0x0000007Cu; // 802C09E4
  c->r[0]=R32(c->r[28]+0x00000004u); // 802C09E8
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C09EC
  c->lr=0x802C09F4u; f_802C0EC4(c); // 802C09F0
  c->r[5]=R32(c->r[31]+0x00000004u); // 802C09F4
  c->r[3]=c->r[1]+0x00000074u; // 802C09F8
  c->r[4]=c->r[1]+0x00000078u; // 802C09FC
  c->lr=0x802C0A04u; f_802C0ED4(c); // 802C0A00
  c->r[0]=R8(c->r[1]+0x00000074u); // 802C0A04
  W8(c->r[28]+0x00000004u,c->r[0]); // 802C0A08
  c->r[0]=R8(c->r[1]+0x00000075u); // 802C0A0C
  W8(c->r[28]+0x00000005u,c->r[0]); // 802C0A10
  c->r[0]=R8(c->r[1]+0x00000076u); // 802C0A14
  W8(c->r[28]+0x00000006u,c->r[0]); // 802C0A18
  c->r[0]=R8(c->r[1]+0x00000077u); // 802C0A1C
  W8(c->r[28]+0x00000007u,c->r[0]); // 802C0A20
L_802C0A24:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0A24
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 802C0A28
  if (crb(c,2)) { goto L_802C0A7C; } // 802C0A2C
  c->r[28]=R32(c->r[29]+0x00000000u); // 802C0A30
  c->r[3]=c->r[1]+0x00000070u; // 802C0A34
  c->r[5]=R32(c->r[31]+0x00000038u); // 802C0A38
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0A3C
  c->r[0]=R32(c->r[28]+0x00000008u); // 802C0A40
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0A44
  c->lr=0x802C0A4Cu; f_802C0EC4(c); // 802C0A48
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 802C0A4C
  c->r[3]=c->r[1]+0x0000006Cu; // 802C0A50
  c->r[4]=c->r[1]+0x00000070u; // 802C0A54
  c->lr=0x802C0A5Cu; f_802C0ED4(c); // 802C0A58
  c->r[0]=R8(c->r[1]+0x0000006Cu); // 802C0A5C
  W8(c->r[28]+0x00000008u,c->r[0]); // 802C0A60
  c->r[0]=R8(c->r[1]+0x0000006Du); // 802C0A64
  W8(c->r[28]+0x00000009u,c->r[0]); // 802C0A68
  c->r[0]=R8(c->r[1]+0x0000006Eu); // 802C0A6C
  W8(c->r[28]+0x0000000Au,c->r[0]); // 802C0A70
  c->r[0]=R8(c->r[1]+0x0000006Fu); // 802C0A74
  W8(c->r[28]+0x0000000Bu,c->r[0]); // 802C0A78
L_802C0A7C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0A7C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 802C0A80
  if (crb(c,2)) { goto L_802C0AD4; } // 802C0A84
  c->r[28]=R32(c->r[29]+0x00000000u); // 802C0A88
  c->r[3]=c->r[1]+0x00000068u; // 802C0A8C
  c->r[5]=R32(c->r[31]+0x00000034u); // 802C0A90
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0A94
  c->r[0]=R32(c->r[28]+0x00000018u); // 802C0A98
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0A9C
  c->lr=0x802C0AA4u; f_802C0EC4(c); // 802C0AA0
  c->r[5]=R32(c->r[31]+0x00000008u); // 802C0AA4
  c->r[3]=c->r[1]+0x00000064u; // 802C0AA8
  c->r[4]=c->r[1]+0x00000068u; // 802C0AAC
  c->lr=0x802C0AB4u; f_802C0ED4(c); // 802C0AB0
  c->r[0]=R8(c->r[1]+0x00000064u); // 802C0AB4
  W8(c->r[28]+0x00000018u,c->r[0]); // 802C0AB8
  c->r[0]=R8(c->r[1]+0x00000065u); // 802C0ABC
  W8(c->r[28]+0x00000019u,c->r[0]); // 802C0AC0
  c->r[0]=R8(c->r[1]+0x00000066u); // 802C0AC4
  W8(c->r[28]+0x0000001Au,c->r[0]); // 802C0AC8
  c->r[0]=R8(c->r[1]+0x00000067u); // 802C0ACC
  W8(c->r[28]+0x0000001Bu,c->r[0]); // 802C0AD0
L_802C0AD4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0AD4
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 802C0AD8
  if (crb(c,2)) { goto L_802C0B2C; } // 802C0ADC
  c->r[29]=R32(c->r[29]+0x00000000u); // 802C0AE0
  c->r[3]=c->r[1]+0x00000060u; // 802C0AE4
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 802C0AE8
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0AEC
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 802C0AF0
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0AF4
  c->lr=0x802C0AFCu; f_802C0EC4(c); // 802C0AF8
  c->r[5]=R32(c->r[31]+0x00000010u); // 802C0AFC
  c->r[3]=c->r[1]+0x0000005Cu; // 802C0B00
  c->r[4]=c->r[1]+0x00000060u; // 802C0B04
  c->lr=0x802C0B0Cu; f_802C0ED4(c); // 802C0B08
  c->r[0]=R8(c->r[1]+0x0000005Cu); // 802C0B0C
  W8(c->r[29]+0x0000001Cu,c->r[0]); // 802C0B10
  c->r[0]=R8(c->r[1]+0x0000005Du); // 802C0B14
  W8(c->r[29]+0x0000001Du,c->r[0]); // 802C0B18
  c->r[0]=R8(c->r[1]+0x0000005Eu); // 802C0B1C
  W8(c->r[29]+0x0000001Eu,c->r[0]); // 802C0B20
  c->r[0]=R8(c->r[1]+0x0000005Fu); // 802C0B24
  W8(c->r[29]+0x0000001Fu,c->r[0]); // 802C0B28
L_802C0B2C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 802C0B2C
  c->r[0]=rotl(c->r[3],0)&0x000007F0u; cr0(c,c->r[0]); // 802C0B30
  if (crb(c,2)) { goto L_802C0EA4; } // 802C0B34
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 802C0B38
  if (crb(c,2)) { goto L_802C0BB0; } // 802C0B3C
  c->r[3]=c->r[30]|c->r[30]; // 802C0B40
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0B44
  c->r[4]=0u+0x00000001u; // 802C0B48
  c->lr=0x802C0B50u; f_802BA4AC(c); // 802C0B4C
  cmps(c,0,(int32_t)c->r[3],0); // 802C0B50
  if (!crb(c,2)) { goto L_802C0B60; } // 802C0B54
  c->r[0]=0u+0x000000FFu; // 802C0B58
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0B5C
L_802C0B60:;
  c->r[5]=R32(c->r[31]+0x00000040u); // 802C0B60
  c->r[3]=c->r[1]+0x00000054u; // 802C0B64
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0B68
  c->lr=0x802C0B70u; f_802C0EC4(c); // 802C0B6C
  c->r[5]=R32(c->r[31]+0x00000014u); // 802C0B70
  c->r[3]=c->r[1]+0x00000050u; // 802C0B74
  c->r[4]=c->r[1]+0x00000054u; // 802C0B78
  c->lr=0x802C0B80u; f_802C0ED4(c); // 802C0B7C
  c->r[8]=R8(c->r[1]+0x00000050u); // 802C0B80
  c->r[5]=c->r[1]+0x00000058u; // 802C0B84
  c->r[7]=R8(c->r[1]+0x00000051u); // 802C0B88
  c->r[3]=c->r[30]|c->r[30]; // 802C0B8C
  c->r[6]=R8(c->r[1]+0x00000052u); // 802C0B90
  c->r[4]=0u+0x00000001u; // 802C0B94
  c->r[0]=R8(c->r[1]+0x00000053u); // 802C0B98
  W8(c->r[1]+0x00000058u,c->r[8]); // 802C0B9C
  W8(c->r[1]+0x00000059u,c->r[7]); // 802C0BA0
  W8(c->r[1]+0x0000005Au,c->r[6]); // 802C0BA4
  W8(c->r[1]+0x0000005Bu,c->r[0]); // 802C0BA8
  c->lr=0x802C0BB0u; f_802BA568(c); // 802C0BAC
L_802C0BB0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0BB0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 802C0BB4
  if (crb(c,2)) { goto L_802C0C2C; } // 802C0BB8
  c->r[3]=c->r[30]|c->r[30]; // 802C0BBC
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0BC0
  c->r[4]=0u+0x00000002u; // 802C0BC4
  c->lr=0x802C0BCCu; f_802BA4AC(c); // 802C0BC8
  cmps(c,0,(int32_t)c->r[3],0); // 802C0BCC
  if (!crb(c,2)) { goto L_802C0BDC; } // 802C0BD0
  c->r[0]=0u+0x000000FFu; // 802C0BD4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0BD8
L_802C0BDC:;
  c->r[5]=R32(c->r[31]+0x00000044u); // 802C0BDC
  c->r[3]=c->r[1]+0x00000048u; // 802C0BE0
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0BE4
  c->lr=0x802C0BECu; f_802C0EC4(c); // 802C0BE8
  c->r[5]=R32(c->r[31]+0x00000018u); // 802C0BEC
  c->r[3]=c->r[1]+0x00000044u; // 802C0BF0
  c->r[4]=c->r[1]+0x00000048u; // 802C0BF4
  c->lr=0x802C0BFCu; f_802C0ED4(c); // 802C0BF8
  c->r[8]=R8(c->r[1]+0x00000044u); // 802C0BFC
  c->r[5]=c->r[1]+0x0000004Cu; // 802C0C00
  c->r[7]=R8(c->r[1]+0x00000045u); // 802C0C04
  c->r[3]=c->r[30]|c->r[30]; // 802C0C08
  c->r[6]=R8(c->r[1]+0x00000046u); // 802C0C0C
  c->r[4]=0u+0x00000002u; // 802C0C10
  c->r[0]=R8(c->r[1]+0x00000047u); // 802C0C14
  W8(c->r[1]+0x0000004Cu,c->r[8]); // 802C0C18
  W8(c->r[1]+0x0000004Du,c->r[7]); // 802C0C1C
  W8(c->r[1]+0x0000004Eu,c->r[6]); // 802C0C20
  W8(c->r[1]+0x0000004Fu,c->r[0]); // 802C0C24
  c->lr=0x802C0C2Cu; f_802BA568(c); // 802C0C28
L_802C0C2C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0C2C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 802C0C30
  if (crb(c,2)) { goto L_802C0CA8; } // 802C0C34
  c->r[3]=c->r[30]|c->r[30]; // 802C0C38
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0C3C
  c->r[4]=0u+0x00000003u; // 802C0C40
  c->lr=0x802C0C48u; f_802BA4AC(c); // 802C0C44
  cmps(c,0,(int32_t)c->r[3],0); // 802C0C48
  if (!crb(c,2)) { goto L_802C0C58; } // 802C0C4C
  c->r[0]=0u+0x000000FFu; // 802C0C50
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0C54
L_802C0C58:;
  c->r[5]=R32(c->r[31]+0x00000048u); // 802C0C58
  c->r[3]=c->r[1]+0x0000003Cu; // 802C0C5C
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0C60
  c->lr=0x802C0C68u; f_802C0EC4(c); // 802C0C64
  c->r[5]=R32(c->r[31]+0x0000001Cu); // 802C0C68
  c->r[3]=c->r[1]+0x00000038u; // 802C0C6C
  c->r[4]=c->r[1]+0x0000003Cu; // 802C0C70
  c->lr=0x802C0C78u; f_802C0ED4(c); // 802C0C74
  c->r[8]=R8(c->r[1]+0x00000038u); // 802C0C78
  c->r[5]=c->r[1]+0x00000040u; // 802C0C7C
  c->r[7]=R8(c->r[1]+0x00000039u); // 802C0C80
  c->r[3]=c->r[30]|c->r[30]; // 802C0C84
  c->r[6]=R8(c->r[1]+0x0000003Au); // 802C0C88
  c->r[4]=0u+0x00000003u; // 802C0C8C
  c->r[0]=R8(c->r[1]+0x0000003Bu); // 802C0C90
  W8(c->r[1]+0x00000040u,c->r[8]); // 802C0C94
  W8(c->r[1]+0x00000041u,c->r[7]); // 802C0C98
  W8(c->r[1]+0x00000042u,c->r[6]); // 802C0C9C
  W8(c->r[1]+0x00000043u,c->r[0]); // 802C0CA0
  c->lr=0x802C0CA8u; f_802BA568(c); // 802C0CA4
L_802C0CA8:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0CA8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 802C0CAC
  if (crb(c,2)) { goto L_802C0D24; } // 802C0CB0
  c->r[3]=c->r[30]|c->r[30]; // 802C0CB4
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0CB8
  c->r[4]=0u+0x00000000u; // 802C0CBC
  c->lr=0x802C0CC4u; f_802BA5FC(c); // 802C0CC0
  cmps(c,0,(int32_t)c->r[3],0); // 802C0CC4
  if (!crb(c,2)) { goto L_802C0CD4; } // 802C0CC8
  c->r[0]=0u+0x000000FFu; // 802C0CCC
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0CD0
L_802C0CD4:;
  c->r[5]=R32(c->r[31]+0x0000004Cu); // 802C0CD4
  c->r[3]=c->r[1]+0x00000030u; // 802C0CD8
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0CDC
  c->lr=0x802C0CE4u; f_802C0EC4(c); // 802C0CE0
  c->r[5]=R32(c->r[31]+0x00000020u); // 802C0CE4
  c->r[3]=c->r[1]+0x0000002Cu; // 802C0CE8
  c->r[4]=c->r[1]+0x00000030u; // 802C0CEC
  c->lr=0x802C0CF4u; f_802C0ED4(c); // 802C0CF0
  c->r[8]=R8(c->r[1]+0x0000002Cu); // 802C0CF4
  c->r[5]=c->r[1]+0x00000034u; // 802C0CF8
  c->r[7]=R8(c->r[1]+0x0000002Du); // 802C0CFC
  c->r[3]=c->r[30]|c->r[30]; // 802C0D00
  c->r[6]=R8(c->r[1]+0x0000002Eu); // 802C0D04
  c->r[4]=0u+0x00000000u; // 802C0D08
  c->r[0]=R8(c->r[1]+0x0000002Fu); // 802C0D0C
  W8(c->r[1]+0x00000034u,c->r[8]); // 802C0D10
  W8(c->r[1]+0x00000035u,c->r[7]); // 802C0D14
  W8(c->r[1]+0x00000036u,c->r[6]); // 802C0D18
  W8(c->r[1]+0x00000037u,c->r[0]); // 802C0D1C
  c->lr=0x802C0D24u; f_802BA6B4(c); // 802C0D20
L_802C0D24:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0D24
  c->r[0]=rotl(c->r[0],0)&0x00000100u; cr0(c,c->r[0]); // 802C0D28
  if (crb(c,2)) { goto L_802C0DA0; } // 802C0D2C
  c->r[3]=c->r[30]|c->r[30]; // 802C0D30
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0D34
  c->r[4]=0u+0x00000001u; // 802C0D38
  c->lr=0x802C0D40u; f_802BA5FC(c); // 802C0D3C
  cmps(c,0,(int32_t)c->r[3],0); // 802C0D40
  if (!crb(c,2)) { goto L_802C0D50; } // 802C0D44
  c->r[0]=0u+0x000000FFu; // 802C0D48
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0D4C
L_802C0D50:;
  c->r[5]=R32(c->r[31]+0x00000050u); // 802C0D50
  c->r[3]=c->r[1]+0x00000024u; // 802C0D54
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0D58
  c->lr=0x802C0D60u; f_802C0EC4(c); // 802C0D5C
  c->r[5]=R32(c->r[31]+0x00000024u); // 802C0D60
  c->r[3]=c->r[1]+0x00000020u; // 802C0D64
  c->r[4]=c->r[1]+0x00000024u; // 802C0D68
  c->lr=0x802C0D70u; f_802C0ED4(c); // 802C0D6C
  c->r[8]=R8(c->r[1]+0x00000020u); // 802C0D70
  c->r[5]=c->r[1]+0x00000028u; // 802C0D74
  c->r[7]=R8(c->r[1]+0x00000021u); // 802C0D78
  c->r[3]=c->r[30]|c->r[30]; // 802C0D7C
  c->r[6]=R8(c->r[1]+0x00000022u); // 802C0D80
  c->r[4]=0u+0x00000001u; // 802C0D84
  c->r[0]=R8(c->r[1]+0x00000023u); // 802C0D88
  W8(c->r[1]+0x00000028u,c->r[8]); // 802C0D8C
  W8(c->r[1]+0x00000029u,c->r[7]); // 802C0D90
  W8(c->r[1]+0x0000002Au,c->r[6]); // 802C0D94
  W8(c->r[1]+0x0000002Bu,c->r[0]); // 802C0D98
  c->lr=0x802C0DA0u; f_802BA6B4(c); // 802C0D9C
L_802C0DA0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0DA0
  c->r[0]=rotl(c->r[0],0)&0x00000200u; cr0(c,c->r[0]); // 802C0DA4
  if (crb(c,2)) { goto L_802C0E1C; } // 802C0DA8
  c->r[3]=c->r[30]|c->r[30]; // 802C0DAC
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0DB0
  c->r[4]=0u+0x00000002u; // 802C0DB4
  c->lr=0x802C0DBCu; f_802BA5FC(c); // 802C0DB8
  cmps(c,0,(int32_t)c->r[3],0); // 802C0DBC
  if (!crb(c,2)) { goto L_802C0DCC; } // 802C0DC0
  c->r[0]=0u+0x000000FFu; // 802C0DC4
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0DC8
L_802C0DCC:;
  c->r[5]=R32(c->r[31]+0x00000054u); // 802C0DCC
  c->r[3]=c->r[1]+0x00000018u; // 802C0DD0
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0DD4
  c->lr=0x802C0DDCu; f_802C0EC4(c); // 802C0DD8
  c->r[5]=R32(c->r[31]+0x00000028u); // 802C0DDC
  c->r[3]=c->r[1]+0x00000014u; // 802C0DE0
  c->r[4]=c->r[1]+0x00000018u; // 802C0DE4
  c->lr=0x802C0DECu; f_802C0ED4(c); // 802C0DE8
  c->r[8]=R8(c->r[1]+0x00000014u); // 802C0DEC
  c->r[5]=c->r[1]+0x0000001Cu; // 802C0DF0
  c->r[7]=R8(c->r[1]+0x00000015u); // 802C0DF4
  c->r[3]=c->r[30]|c->r[30]; // 802C0DF8
  c->r[6]=R8(c->r[1]+0x00000016u); // 802C0DFC
  c->r[4]=0u+0x00000002u; // 802C0E00
  c->r[0]=R8(c->r[1]+0x00000017u); // 802C0E04
  W8(c->r[1]+0x0000001Cu,c->r[8]); // 802C0E08
  W8(c->r[1]+0x0000001Du,c->r[7]); // 802C0E0C
  W8(c->r[1]+0x0000001Eu,c->r[6]); // 802C0E10
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 802C0E14
  c->lr=0x802C0E1Cu; f_802BA6B4(c); // 802C0E18
L_802C0E1C:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 802C0E1C
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 802C0E20
  if (crb(c,2)) { goto L_802C0E98; } // 802C0E24
  c->r[3]=c->r[30]|c->r[30]; // 802C0E28
  c->r[5]=c->r[1]+0x0000007Cu; // 802C0E2C
  c->r[4]=0u+0x00000003u; // 802C0E30
  c->lr=0x802C0E38u; f_802BA5FC(c); // 802C0E34
  cmps(c,0,(int32_t)c->r[3],0); // 802C0E38
  if (!crb(c,2)) { goto L_802C0E48; } // 802C0E3C
  c->r[0]=0u+0x000000FFu; // 802C0E40
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 802C0E44
L_802C0E48:;
  c->r[5]=R32(c->r[31]+0x00000058u); // 802C0E48
  c->r[3]=c->r[1]+0x0000000Cu; // 802C0E4C
  c->r[4]=c->r[1]+0x0000007Cu; // 802C0E50
  c->lr=0x802C0E58u; f_802C0EC4(c); // 802C0E54
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 802C0E58
  c->r[3]=c->r[1]+0x00000008u; // 802C0E5C
  c->r[4]=c->r[1]+0x0000000Cu; // 802C0E60
  c->lr=0x802C0E68u; f_802C0ED4(c); // 802C0E64
  c->r[8]=R8(c->r[1]+0x00000008u); // 802C0E68
  c->r[5]=c->r[1]+0x00000010u; // 802C0E6C
  c->r[7]=R8(c->r[1]+0x00000009u); // 802C0E70
  c->r[3]=c->r[30]|c->r[30]; // 802C0E74
  c->r[6]=R8(c->r[1]+0x0000000Au); // 802C0E78
  c->r[4]=0u+0x00000003u; // 802C0E7C
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 802C0E80
  W8(c->r[1]+0x00000010u,c->r[8]); // 802C0E84
  W8(c->r[1]+0x00000011u,c->r[7]); // 802C0E88
  W8(c->r[1]+0x00000012u,c->r[6]); // 802C0E8C
  W8(c->r[1]+0x00000013u,c->r[0]); // 802C0E90
  c->lr=0x802C0E98u; f_802BA6B4(c); // 802C0E94
L_802C0E98:;
  c->r[3]=c->r[30]|c->r[30]; // 802C0E98
  c->r[4]=0u+0x00000000u; // 802C0E9C
  c->lr=0x802C0EA4u; f_802B9DCC(c); // 802C0EA0
L_802C0EA4:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 802C0EA4
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 802C0EA8
  c->r[30]=R32(c->r[1]+0x00000088u); // 802C0EAC
  c->r[29]=R32(c->r[1]+0x00000084u); // 802C0EB0
  c->r[28]=R32(c->r[1]+0x00000080u); // 802C0EB4
  c->lr=c->r[0]; // 802C0EB8
  c->r[1]=c->r[1]+0x00000090u; // 802C0EBC
  return; // 802C0EC0
}

// __ad__Q34nw4r2ut5ColorCFUl
void f_802C0EC4(Ctx* __restrict c) {
  trace_call(0x802C0EC4u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0EC4
  c->r[0]=c->r[5]&c->r[0]; // 802C0EC8
  W32(c->r[3]+0x00000000u,c->r[0]); // 802C0ECC
  return; // 802C0ED0
}

// __or__Q34nw4r2ut5ColorCFUl
void f_802C0ED4(Ctx* __restrict c) {
  trace_call(0x802C0ED4u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0ED4
  c->r[0]=c->r[5]|c->r[0]; // 802C0ED8
  W32(c->r[3]+0x00000000u,c->r[0]); // 802C0EDC
  return; // 802C0EE0
}

// IsDerivedFrom__Q34nw4r3g3d15AnmObjMatClrResCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C0EE4(Ctx* __restrict c) {
  trace_call(0x802C0EE4u);
  c->r[3]=0u+0x80440000u; // 802C0EE4
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0EE8
  c->r[3]=c->r[3]+0xFFFFC428u; // 802C0EEC
  cmpu(c,0,c->r[0],c->r[3]); // 802C0EF0
  if (!crb(c,2)) { goto L_802C0F00; } // 802C0EF4
  c->r[3]=0u+0x00000001u; // 802C0EF8
  return; // 802C0EFC
L_802C0F00:;
  c->r[3]=0u+0x80440000u; // 802C0F00
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0F04
  c->r[3]=c->r[3]+0xFFFFC410u; // 802C0F08
  cmpu(c,0,c->r[0],c->r[3]); // 802C0F0C
  if (!crb(c,2)) { goto L_802C0F1C; } // 802C0F10
  c->r[3]=0u+0x00000001u; // 802C0F14
  return; // 802C0F18
L_802C0F1C:;
  c->r[3]=0u+0x80440000u; // 802C0F1C
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C0F20
  cmpu(c,0,c->r[0],c->r[3]); // 802C0F24
  if (!crb(c,2)) { goto L_802C0F34; } // 802C0F28
  c->r[3]=0u+0x00000001u; // 802C0F2C
  return; // 802C0F30
L_802C0F34:;
  c->r[3]=0u+0x80440000u; // 802C0F34
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C0F38
  c->r[0]=c->r[3]-c->r[0]; // 802C0F3C
  c->r[0]=cntlz(c->r[0]); // 802C0F40
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C0F44
  return; // 802C0F48
}

// IsDerivedFrom__Q34nw4r3g3d12AnmObjMatClrCFQ44nw4r3g3d6G3dObj7TypeObj
void f_802C0F4C(Ctx* __restrict c) {
  trace_call(0x802C0F4Cu);
  c->r[3]=0u+0x80440000u; // 802C0F4C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0F50
  c->r[3]=c->r[3]+0xFFFFC410u; // 802C0F54
  cmpu(c,0,c->r[0],c->r[3]); // 802C0F58
  if (!crb(c,2)) { goto L_802C0F68; } // 802C0F5C
  c->r[3]=0u+0x00000001u; // 802C0F60
  return; // 802C0F64
L_802C0F68:;
  c->r[3]=0u+0x80440000u; // 802C0F68
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C0F6C
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C0F70
  cmpu(c,0,c->r[0],c->r[3]); // 802C0F74
  if (!crb(c,2)) { goto L_802C0F84; } // 802C0F78
  c->r[3]=0u+0x00000001u; // 802C0F7C
  return; // 802C0F80
L_802C0F84:;
  c->r[3]=0u+0x80440000u; // 802C0F84
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C0F88
  c->r[0]=c->r[3]-c->r[0]; // 802C0F8C
  c->r[0]=cntlz(c->r[0]); // 802C0F90
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C0F94
  return; // 802C0F98
}

// GetTypeName__Q34nw4r3g3d15AnmObjMatClrResCFv
void f_802C0F9C(Ctx* __restrict c) {
  trace_call(0x802C0F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0F9C
  c->r[0]=c->lr; // 802C0FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C0FA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C0FA8
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C0FAC
  c->ctr=c->r[12]; // 802C0FB0
  if (true) { c->lr=0x802C0FB8u; dispatch(c,c->ctr); } // 802C0FB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C0FB8
  c->r[3]=c->r[3]+0x00000004u; // 802C0FBC
  c->lr=c->r[0]; // 802C0FC0
  c->r[1]=c->r[1]+0x00000010u; // 802C0FC4
  return; // 802C0FC8
}

// GetTypeObj__Q34nw4r3g3d15AnmObjMatClrResCFv
void f_802C0FCC(Ctx* __restrict c) {
  trace_call(0x802C0FCCu);
  c->r[3]=0u+0x80440000u; // 802C0FCC
  c->r[3]=c->r[3]+0xFFFFC428u; // 802C0FD0
  return; // 802C0FD4
}

// __dt__Q34nw4r3g3d15AnmObjMatClrResFv
void f_802C0FD8(Ctx* __restrict c) {
  trace_call(0x802C0FD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C0FD8
  c->r[0]=c->lr; // 802C0FDC
  cmps(c,0,(int32_t)c->r[3],0); // 802C0FE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C0FE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C0FE8
  c->r[31]=c->r[3]|c->r[3]; // 802C0FEC
  if (crb(c,2)) { goto L_802C1004; } // 802C0FF0
  if (crb(c,2)) { goto L_802C1004; } // 802C0FF4
  if (crb(c,2)) { goto L_802C1004; } // 802C0FF8
  c->r[4]=0u+0x00000000u; // 802C0FFC
  c->lr=0x802C1004u; f_802C624C(c); // 802C1000
L_802C1004:;
  c->r[3]=c->r[31]|c->r[31]; // 802C1004
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C1008
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C100C
  c->lr=c->r[0]; // 802C1010
  c->r[1]=c->r[1]+0x00000010u; // 802C1014
  return; // 802C1018
}

// fn_802C101C
void f_802C101C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C101C
  c->r[0]=c->lr; // 802C1020
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C1024
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C1028
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C102C
  c->ctr=c->r[12]; // 802C1030
  if (true) { c->lr=0x802C1038u; dispatch(c,c->ctr); } // 802C1034
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C1038
  c->r[3]=c->r[3]+0x00000004u; // 802C103C
  c->lr=c->r[0]; // 802C1040
  c->r[1]=c->r[1]+0x00000010u; // 802C1044
  return; // 802C1048
}

// fn_802C104C
void f_802C104C(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C104C
  c->r[3]=c->r[3]+0xFFFFC410u; // 802C1050
  return; // 802C1054
}

// fn_802C1058
void f_802C1058(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 802C1058
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802C105C
  c->r[0]=R16(c->r[3]+c->r[0]); // 802C1060
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 802C1064
  c->r[0]=cntlz(c->r[0]); // 802C1068
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C106C
  return; // 802C1070
}

// fn_802C1074
void f_802C1074(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 802C1074
  c->r[7]=0u+0x00000000u; // 802C1078
  c->r[5]=c->r[4]+0xFFFF8000u; // 802C107C
  c->r[6]=0u+0x00000000u; // 802C1080
  goto L_802C1098; // 802C1084
L_802C1088:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C1088
  c->r[7]=c->r[7]+0x00000001u; // 802C108C
  W16(c->r[4]+c->r[6],c->r[5]); // 802C1090
  c->r[6]=c->r[6]+0x00000002u; // 802C1094
L_802C1098:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C1098
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802C109C
  if (crb(c,0)) { IRQCHK(c); goto L_802C1088; } // 802C10A0
  c->r[4]=0u+0x00000004u; // 802C10A4
  c->r[5]=0u+0x00000000u; // 802C10A8
  f_802C63A4(c); return; // 802C10AC
}

// fn_802C10B0
void f_802C10B0(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C10B0
  return; // 802C10B4
}

// fn_802C10B8
void f_802C10B8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C10B8
  return; // 802C10BC
}

// fn_802C10C0
void f_802C10C0(Ctx* __restrict c) {
  return; // 802C10C0
}

// fn_802C10C4
void f_802C10C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C10C4
  c->r[0]=c->lr; // 802C10C8
  cmps(c,0,(int32_t)c->r[3],0); // 802C10CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C10D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C10D4
  c->r[31]=c->r[3]|c->r[3]; // 802C10D8
  if (crb(c,2)) { goto L_802C10EC; } // 802C10DC
  if (crb(c,2)) { goto L_802C10EC; } // 802C10E0
  c->r[4]=0u+0x00000000u; // 802C10E4
  c->lr=0x802C10ECu; f_802C624C(c); // 802C10E8
L_802C10EC:;
  c->r[3]=c->r[31]|c->r[31]; // 802C10EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C10F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C10F4
  c->lr=c->r[0]; // 802C10F8
  c->r[1]=c->r[1]+0x00000010u; // 802C10FC
  return; // 802C1100
}

// Construct__Q34nw4r3g3d15AnmObjTexPatResFP12MEMAllocatorPiQ34nw4r3g3d12ResAnmTexPatQ34nw4r3g3d6ResMdlb
void f_802C1104(Ctx* __restrict c) {
  trace_call(0x802C1104u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1104
  c->r[0]=c->lr; // 802C1108
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C110C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802C1110
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802C1114
  c->r[11]=c->r[1]+0x00000030u; // 802C1118
  c->lr=0x802C1120u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C111C
  c->r[8]=R32(c->r[5]+0x00000000u); // 802C1120
  c->r[29]=c->r[3]|c->r[3]; // 802C1124
  c->r[25]=c->r[4]|c->r[4]; // 802C1128
  c->r[30]=c->r[5]|c->r[5]; // 802C112C
  cmps(c,0,(int32_t)c->r[8],0); // 802C1130
  c->r[27]=c->r[7]|c->r[7]; // 802C1134
  if (crb(c,2)) { goto L_802C1148; } // 802C1138
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C113C
  cmps(c,0,(int32_t)c->r[0],0); // 802C1140
  if (!crb(c,2)) { goto L_802C1150; } // 802C1144
L_802C1148:;
  c->r[3]=0u+0x00000000u; // 802C1148
  goto L_802C12D4; // 802C114C
L_802C1150:;
  c->r[31]=R16(c->r[8]+0x0000002Eu); // 802C1150
  c->r[3]=c->r[6]|c->r[6]; // 802C1154
  c->lr=0x802C115Cu; f_802B8AA4(c); // 802C1158
  c->r[0]=0u-c->r[27]; // 802C115C
  c->r[28]=c->r[3]|c->r[3]; // 802C1160
  c->r[4]=c->r[0]|c->r[27]; // 802C1164
  cmps(c,0,(int32_t)c->r[25],0); // 802C1168
  c->r[4]=sraw(c,c->r[4],31); // 802C116C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C1170
  c->r[3]=c->r[31]&c->r[4]; // 802C1174
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)68); // 802C1178
  c->r[3]=c->r[26]+c->r[0]; // 802C117C
  c->r[4]=c->r[3]+0x00000034u; // 802C1180
  if (crb(c,2)) { goto L_802C118C; } // 802C1184
  W32(c->r[25]+0x00000000u,c->r[4]); // 802C1188
L_802C118C:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C118C
  if (!crb(c,2)) { goto L_802C119C; } // 802C1190
  c->r[3]=0u+0x00000000u; // 802C1194
  goto L_802C12D4; // 802C1198
L_802C119C:;
  c->r[3]=c->r[29]|c->r[29]; // 802C119C
  c->lr=0x802C11A4u; f_8034FF40(c); // 802C11A0
  cmps(c,0,(int32_t)c->r[3],0); // 802C11A4
  c->r[31]=c->r[3]|c->r[3]; // 802C11A8
  if (!crb(c,2)) { goto L_802C11B8; } // 802C11AC
  c->r[3]=0u+0x00000000u; // 802C11B0
  goto L_802C12D4; // 802C11B4
L_802C11B8:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C11B8
  if (crb(c,2)) { goto L_802C11C8; } // 802C11BC
  c->r[27]=c->r[3]+0x00000034u; // 802C11C0
  goto L_802C11CC; // 802C11C4
L_802C11C8:;
  c->r[27]=0u+0x00000000u; // 802C11C8
L_802C11CC:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C11CC
  c->r[4]=c->r[3]+c->r[26]; // 802C11D0
  c->r[5]=c->r[4]+0x00000034u; // 802C11D4
  if (crb(c,2)) { goto L_802C12D0; } // 802C11D8
  c->r[0]=0u+0x00000000u; // 802C11DC
  c->r[4]=0u+0x80480000u; // 802C11E0
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C11E4
  c->r[4]=c->r[4]+0x00006BE0u; // 802C11E8
  c->r[30]=R32(c->r[30]+0x00000000u); // 802C11EC
  W32(c->r[3]+0x00000008u,c->r[29]); // 802C11F0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C11F4
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C11F8
  W32(c->r[3]+0x00000010u,c->r[28]); // 802C11FC
  W32(c->r[3]+0x00000014u,c->r[5]); // 802C1200
  c->r[3]=c->r[31]|c->r[31]; // 802C1204
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C1208
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C120C
  c->ctr=c->r[12]; // 802C1210
  if (true) { c->lr=0x802C1218u; dispatch(c,c->ctr); } // 802C1214
  c->r[4]=R16(c->r[30]+0x0000002Cu); // 802C1218
  c->r[0]=0u+0x43300000u; // 802C121C
  c->r[5]=R32(c->r[30]+0x00000034u); // 802C1220
  c->r[3]=0u+0x80480000u; // 802C1224
  c->r[4]=c->r[4]^0x80000000u; // 802C1228
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C122C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802C1230
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802C1234
  {uint32_t ea=c->r[2]+0xFFFFAB94u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C1238
  c->r[4]=c->r[13]+0xFFFF8008u; // 802C123C
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C1240
  c->r[3]=c->r[3]+0x00006B98u; // 802C1244
  {uint32_t ea=c->r[2]+0xFFFFAB98u; c->f[3]=RF64(ea);} // 802C1248
  cmps(c,0,(int32_t)c->r[27],0); // 802C124C
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802C1250
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802C1254
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C1258
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 802C125C
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C1260
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802C1264
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802C1268
  W32(c->r[31]+0x00000028u,c->r[0]); // 802C126C
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C1270
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 802C1274
  W32(c->r[31]+0x00000030u,c->r[27]); // 802C1278
  if (crb(c,2)) { goto L_802C12D0; } // 802C127C
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C1280
  c->r[28]=0u+0x00000000u; // 802C1284
  c->r[27]=0u+0x00000000u; // 802C1288
  goto L_802C12C4; // 802C128C
L_802C1290:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C1290
  c->r[3]=R16(c->r[3]+c->r[27]); // 802C1294
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1298
  if (!crb(c,2)) { goto L_802C12BC; } // 802C129C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C12A0
  c->f[1]=c->f[31]; // 802C12A4
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 802C12A8
  c->r[4]=R32(c->r[31]+0x00000030u); // 802C12AC
  c->r[3]=c->r[31]+0x0000002Cu; // 802C12B0
  c->r[4]=c->r[4]+c->r[0]; // 802C12B4
  c->lr=0x802C12BCu; f_802BC2A4(c); // 802C12B8
L_802C12BC:;
  c->r[27]=c->r[27]+0x00000002u; // 802C12BC
  c->r[28]=c->r[28]+0x00000001u; // 802C12C0
L_802C12C4:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C12C4
  cmpu(c,0,c->r[28],c->r[0]); // 802C12C8
  if (crb(c,0)) { IRQCHK(c); goto L_802C1290; } // 802C12CC
L_802C12D0:;
  c->r[3]=c->r[31]|c->r[31]; // 802C12D0
L_802C12D4:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802C12D4
  c->r[11]=c->r[1]+0x00000030u; // 802C12D8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802C12DC
  c->lr=0x802C12E4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C12E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C12E4
  c->lr=c->r[0]; // 802C12E8
  c->r[1]=c->r[1]+0x00000040u; // 802C12EC
  return; // 802C12F0
}

// fn_802C12F4
void f_802C12F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C12F4
  c->r[0]=c->lr; // 802C12F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C12FC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C1300
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C1304
  c->f[3]=c->f[1]; // 802C1308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C130C
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C1310
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C1314
  c->r[29]=c->r[3]|c->r[3]; // 802C1318
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C131C
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1320
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C1324
  c->ctr=c->r[12]; // 802C1328
  if (true) { c->lr=0x802C1330u; dispatch(c,c->ctr); } // 802C132C
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C1330
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C1334
  cmps(c,0,(int32_t)c->r[0],0); // 802C1338
  if (crb(c,2)) { goto L_802C1390; } // 802C133C
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C1340
  c->r[31]=0u+0x00000000u; // 802C1344
  c->r[30]=0u+0x00000000u; // 802C1348
  goto L_802C1384; // 802C134C
L_802C1350:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C1350
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C1354
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1358
  if (!crb(c,2)) { goto L_802C137C; } // 802C135C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C1360
  c->f[1]=c->f[31]; // 802C1364
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 802C1368
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C136C
  c->r[3]=c->r[29]+0x0000002Cu; // 802C1370
  c->r[4]=c->r[4]+c->r[0]; // 802C1374
  c->lr=0x802C137Cu; f_802BC2A4(c); // 802C1378
L_802C137C:;
  c->r[30]=c->r[30]+0x00000002u; // 802C137C
  c->r[31]=c->r[31]+0x00000001u; // 802C1380
L_802C1384:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C1384
  cmpu(c,0,c->r[31],c->r[0]); // 802C1388
  if (crb(c,0)) { IRQCHK(c); goto L_802C1350; } // 802C138C
L_802C1390:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C1390
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1394
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C1398
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C139C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C13A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C13A4
  c->lr=c->r[0]; // 802C13A8
  c->r[1]=c->r[1]+0x00000030u; // 802C13AC
  return; // 802C13B0
}

// fn_802C13B4
void f_802C13B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C13B4
  return; // 802C13B8
}

// SetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResFf
void f_802C13BC(Ctx* __restrict c) {
  trace_call(0x802C13BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C13BC
  c->r[0]=c->lr; // 802C13C0
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C13C4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C13C8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C13CC
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C13D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C13D4
  fcmp(c,0,c->f[0],c->f[1]); // 802C13D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C13DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C13E0
  c->r[29]=c->r[3]|c->r[3]; // 802C13E4
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 802C13E8
  if (!crb(c,2)) { goto L_802C144C; } // 802C13EC
  c->r[0]=R32(c->r[3]+0x00000030u); // 802C13F0
  cmps(c,0,(int32_t)c->r[0],0); // 802C13F4
  if (crb(c,2)) { goto L_802C144C; } // 802C13F8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C13FC
  c->r[31]=0u+0x00000000u; // 802C1400
  c->r[30]=0u+0x00000000u; // 802C1404
  goto L_802C1440; // 802C1408
L_802C140C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C140C
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C1410
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1414
  if (!crb(c,2)) { goto L_802C1438; } // 802C1418
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C141C
  c->f[1]=c->f[31]; // 802C1420
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 802C1424
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C1428
  c->r[3]=c->r[29]+0x0000002Cu; // 802C142C
  c->r[4]=c->r[4]+c->r[0]; // 802C1430
  c->lr=0x802C1438u; f_802BC2A4(c); // 802C1434
L_802C1438:;
  c->r[30]=c->r[30]+0x00000002u; // 802C1438
  c->r[31]=c->r[31]+0x00000001u; // 802C143C
L_802C1440:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C1440
  cmpu(c,0,c->r[31],c->r[0]); // 802C1444
  if (crb(c,0)) { IRQCHK(c); goto L_802C140C; } // 802C1448
L_802C144C:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C144C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1450
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C1454
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C1458
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C145C
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C1460
  c->lr=c->r[0]; // 802C1464
  c->r[1]=c->r[1]+0x00000030u; // 802C1468
  return; // 802C146C
}

// GetUpdateRate__Q34nw4r3g3d15AnmObjTexSrtResCFv
void f_802C1470(Ctx* __restrict c) {
  trace_call(0x802C1470u);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1470
  return; // 802C1474
}

// UpdateFrame__Q34nw4r3g3d15AnmObjTexSrtResFv
void f_802C1478(Ctx* __restrict c) {
  trace_call(0x802C1478u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1478
  c->r[0]=c->lr; // 802C147C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C1480
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C1484
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C1488
  {uint32_t ea=c->r[2]+0xFFFFAB90u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C148C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C1490
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C1494
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C1498
  c->r[29]=c->r[3]|c->r[3]; // 802C149C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C14A0
  fcmp(c,0,c->f[0],c->f[1]); // 802C14A4
  if (crb(c,2)) { goto L_802C1534; } // 802C14A8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C14AC
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C14B0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C14B4
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802C14B8
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C14BC
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C14C0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C14C4
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802C14C8
  c->ctr=c->r[12]; // 802C14CC
  if (true) { c->lr=0x802C14D4u; dispatch(c,c->ctr); } // 802C14D0
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C14D4
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C14D8
  cmps(c,0,(int32_t)c->r[0],0); // 802C14DC
  if (crb(c,2)) { goto L_802C1534; } // 802C14E0
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C14E4
  c->r[31]=0u+0x00000000u; // 802C14E8
  c->r[30]=0u+0x00000000u; // 802C14EC
  goto L_802C1528; // 802C14F0
L_802C14F4:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C14F4
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C14F8
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C14FC
  if (!crb(c,2)) { goto L_802C1520; } // 802C1500
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C1504
  c->f[1]=c->f[31]; // 802C1508
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 802C150C
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C1510
  c->r[3]=c->r[29]+0x0000002Cu; // 802C1514
  c->r[4]=c->r[4]+c->r[0]; // 802C1518
  c->lr=0x802C1520u; f_802BC2A4(c); // 802C151C
L_802C1520:;
  c->r[30]=c->r[30]+0x00000002u; // 802C1520
  c->r[31]=c->r[31]+0x00000001u; // 802C1524
L_802C1528:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C1528
  cmpu(c,0,c->r[31],c->r[0]); // 802C152C
  if (crb(c,0)) { IRQCHK(c); goto L_802C14F4; } // 802C1530
L_802C1534:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C1534
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1538
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C153C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C1540
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C1544
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C1548
  c->lr=c->r[0]; // 802C154C
  c->r[1]=c->r[1]+0x00000030u; // 802C1550
  return; // 802C1554
}

// fn_802C1558
void f_802C1558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1558
  c->r[0]=c->lr; // 802C155C
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C1560
  c->r[11]=c->r[1]+0x00000030u; // 802C1564
  c->lr=0x802C156Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C1568
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802C156C
  c->r[27]=c->r[3]|c->r[3]; // 802C1570
  c->r[28]=c->r[4]|c->r[4]; // 802C1574
  c->r[30]=0u+0x00000000u; // 802C1578
  c->r[31]=R16(c->r[5]+0x0000002Eu); // 802C157C
  c->r[29]=0u+0x00000000u; // 802C1580
  cmps(c,0,(int32_t)c->r[31],0); // 802C1584
  if (!crb(c,1)) { goto L_802C1624; } // 802C1588
  goto L_802C1618; // 802C158C
L_802C1590:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 802C1590
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C1594
  cmps(c,0,(int32_t)c->r[0],0); // 802C1598
  if (crb(c,2)) { goto L_802C15A8; } // 802C159C
  c->r[0]=c->r[3]+c->r[0]; // 802C15A0
  goto L_802C15AC; // 802C15A4
L_802C15A8:;
  c->r[0]=0u+0x00000000u; // 802C15A8
L_802C15AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C15AC
  if (crb(c,2)) { goto L_802C15D8; } // 802C15B0
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 802C15B4
  c->r[3]=c->r[0]+c->r[3]; // 802C15B8
  c->r[3]=R32(c->r[3]+0x00000024u); // 802C15BC
  cmps(c,0,(int32_t)c->r[3],0); // 802C15C0
  if (crb(c,2)) { goto L_802C15D0; } // 802C15C4
  c->r[5]=c->r[0]+c->r[3]; // 802C15C8
  goto L_802C15DC; // 802C15CC
L_802C15D0:;
  c->r[5]=0u+0x00000000u; // 802C15D0
  goto L_802C15DC; // 802C15D4
L_802C15D8:;
  c->r[5]=0u+0x00000000u; // 802C15D8
L_802C15DC:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C15DC
  c->r[3]=c->r[28]|c->r[28]; // 802C15E0
  c->r[4]=c->r[1]+0x00000008u; // 802C15E4
  c->r[5]=c->r[0]+c->r[5]; // 802C15E8
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802C15EC
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C15F0
  c->lr=0x802C15F8u; f_802B89AC(c); // 802C15F4
  cmps(c,0,(int32_t)c->r[3],0); // 802C15F8
  if (crb(c,2)) { goto L_802C1614; } // 802C15FC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C1600
  c->r[30]=0u+0x00000001u; // 802C1604
  c->r[3]=R32(c->r[27]+0x00000014u); // 802C1608
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802C160C
  W16(c->r[3]+c->r[0],c->r[29]); // 802C1610
L_802C1614:;
  c->r[29]=c->r[29]+0x00000001u; // 802C1614
L_802C1618:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 802C1618
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802C161C
  if (crb(c,0)) { IRQCHK(c); goto L_802C1590; } // 802C1620
L_802C1624:;
  c->r[3]=c->r[27]|c->r[27]; // 802C1624
  c->r[4]=0u+0x00000004u; // 802C1628
  c->r[5]=0u+0x00000001u; // 802C162C
  c->lr=0x802C1634u; f_802C63A4(c); // 802C1630
  c->r[11]=c->r[1]+0x00000030u; // 802C1634
  c->r[3]=c->r[30]|c->r[30]; // 802C1638
  c->lr=0x802C1640u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C163C
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1640
  c->lr=c->r[0]; // 802C1644
  c->r[1]=c->r[1]+0x00000030u; // 802C1648
  return; // 802C164C
}

// fn_802C1650
void f_802C1650(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1650
  c->r[0]=c->lr; // 802C1654
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C1658
  c->r[0]=rotl(c->r[5],1)&0xFFFFFFFEu; // 802C165C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C1660
  c->r[31]=c->r[4]|c->r[4]; // 802C1664
  c->r[6]=R32(c->r[3]+0x00000014u); // 802C1668
  c->r[5]=R16(c->r[6]+c->r[0]); // 802C166C
  c->r[0]=rotl(c->r[5],0)&0x0000C000u; cr0(c,c->r[0]); // 802C1670
  if (crb(c,2)) { goto L_802C168C; } // 802C1674
  c->r[0]=0u+0x00000000u; // 802C1678
  c->r[3]=c->r[31]|c->r[31]; // 802C167C
  W8(c->r[4]+0x00000000u,c->r[0]); // 802C1680
  W8(c->r[4]+0x00000001u,c->r[0]); // 802C1684
  goto L_802C16B4; // 802C1688
L_802C168C:;
  c->r[6]=R32(c->r[3]+0x00000030u); // 802C168C
  cmps(c,0,(int32_t)c->r[6],0); // 802C1690
  if (crb(c,2)) { goto L_802C16A4; } // 802C1694
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)68); // 802C1698
  c->r[3]=c->r[6]+c->r[0]; // 802C169C
  goto L_802C16B4; // 802C16A0
L_802C16A4:;
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C16A4
  c->r[3]=c->r[3]+0x0000002Cu; // 802C16A8
  c->lr=0x802C16B0u; f_802BC2A4(c); // 802C16AC
  c->r[3]=c->r[31]|c->r[31]; // 802C16B0
L_802C16B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C16B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C16B8
  c->lr=c->r[0]; // 802C16BC
  c->r[1]=c->r[1]+0x00000010u; // 802C16C0
  return; // 802C16C4
}

// fn_802C16C8
void f_802C16C8(Ctx* __restrict c) {
  c->r[5]=0u+0x00010000u; // 802C16C8
  c->r[0]=c->r[5]+0x00000002u; // 802C16CC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C16D0
  if (crb(c,2)) { goto L_802C1714; } // 802C16D4
  if (!crb(c,0)) { goto L_802C16E8; } // 802C16D8
  cmps(c,0,(int32_t)c->r[4],8); // 802C16DC
  if (crb(c,2)) { goto L_802C16F8; } // 802C16E0
  return; // 802C16E4
L_802C16E8:;
  c->r[0]=c->r[5]+0x00000004u; // 802C16E8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 802C16EC
  if (!crb(c,0)) return; // 802C16F0
  goto L_802C1708; // 802C16F4
L_802C16F8:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C16F8
  c->r[12]=R32(c->r[12]+0x00000024u); // 802C16FC
  c->ctr=c->r[12]; // 802C1700
  if (true) { dispatch(c,c->ctr); return; } // 802C1704
L_802C1708:;
  c->r[0]=0u+0x00000000u; // 802C1708
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C170C
  return; // 802C1710
L_802C1714:;
  W32(c->r[3]+0x00000004u,c->r[6]); // 802C1714
  return; // 802C1718
}

// fn_802C171C
void f_802C171C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C171C
  c->r[0]=c->lr; // 802C1720
  W32(c->r[1]+0x00000074u,c->r[0]); // 802C1724
  c->r[11]=c->r[1]+0x00000070u; // 802C1728
  c->lr=0x802C1730u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C172C
  c->r[31]=c->r[5]|c->r[5]; // 802C1730
  c->r[26]=R8(c->r[5]+0x00000000u); // 802C1734
  c->r[22]=c->r[3]|c->r[3]; // 802C1738
  c->r[30]=c->r[4]|c->r[4]; // 802C173C
  c->r[27]=c->r[31]|c->r[31]; // 802C1740
  c->r[29]=c->r[1]+0x00000024u; // 802C1744
  c->r[28]=0u+0x00000000u; // 802C1748
  goto L_802C1888; // 802C174C
L_802C1750:;
  c->r[0]=rotl(c->r[26],0)&0x00000001u; cr0(c,c->r[0]); // 802C1750
  if (crb(c,2)) { goto L_802C187C; } // 802C1754
  c->r[0]=R32(c->r[27]+0x00000004u); // 802C1758
  c->r[3]=c->r[22]|c->r[22]; // 802C175C
  c->r[4]=c->r[28]|c->r[28]; // 802C1760
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 802C1764
  c->lr=0x802C176Cu; f_802B9FA4(c); // 802C1768
  W32(c->r[1]+0x00000008u,c->r[29]); // 802C176C
  c->r[25]=c->r[3]|c->r[3]; // 802C1770
  c->r[4]=c->r[1]+0x00000038u; // 802C1774
  c->r[5]=c->r[1]+0x00000034u; // 802C1778
  c->r[6]=c->r[1]+0x00000030u; // 802C177C
  c->r[7]=c->r[1]+0x0000002Cu; // 802C1780
  c->r[8]=c->r[1]+0x00000028u; // 802C1784
  c->r[9]=c->r[1]+0x00000012u; // 802C1788
  c->r[10]=c->r[1]+0x00000011u; // 802C178C
  c->lr=0x802C1794u; f_80347518(c); // 802C1790
  c->r[3]=c->r[25]|c->r[25]; // 802C1794
  c->lr=0x802C179Cu; f_803474F4(c); // 802C1798
  c->r[24]=c->r[3]|c->r[3]; // 802C179C
  c->r[3]=c->r[25]|c->r[25]; // 802C17A0
  c->lr=0x802C17A8u; f_80347500(c); // 802C17A4
  c->r[4]=R32(c->r[1]+0x0000003Cu); // 802C17A8
  c->r[23]=c->r[3]|c->r[3]; // 802C17AC
  c->r[0]=R32(c->r[4]+0x00000018u); // 802C17B0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 802C17B4
  if (crb(c,2)) { goto L_802C180C; } // 802C17B8
  c->r[3]=c->r[1]+0x0000003Cu; // 802C17BC
  c->r[4]=c->r[1]+0x00000020u; // 802C17C0
  c->r[5]=c->r[1]+0x00000016u; // 802C17C4
  c->r[6]=c->r[1]+0x00000014u; // 802C17C8
  c->r[7]=c->r[1]+0x00000018u; // 802C17CC
  c->r[8]=c->r[1]+0x00000030u; // 802C17D0
  c->r[9]=c->r[1]+0x0000002Cu; // 802C17D4
  c->r[10]=c->r[1]+0x00000010u; // 802C17D8
  c->lr=0x802C17E0u; f_802BB9E0(c); // 802C17DC
  W32(c->r[1]+0x00000008u,c->r[28]); // 802C17E0
  c->r[3]=c->r[25]|c->r[25]; // 802C17E4
  c->r[8]=c->r[24]|c->r[24]; // 802C17E8
  c->r[9]=c->r[23]|c->r[23]; // 802C17EC
  c->r[4]=R32(c->r[1]+0x00000020u); // 802C17F0
  c->r[5]=R16(c->r[1]+0x00000016u); // 802C17F4
  c->r[6]=R16(c->r[1]+0x00000014u); // 802C17F8
  c->r[7]=R32(c->r[1]+0x00000018u); // 802C17FC
  c->r[10]=R8(c->r[1]+0x00000010u); // 802C1800
  c->lr=0x802C1808u; f_8034734C(c); // 802C1804
  goto L_802C1854; // 802C1808
L_802C180C:;
  c->r[3]=c->r[1]+0x0000003Cu; // 802C180C
  c->r[4]=c->r[1]+0x00000020u; // 802C1810
  c->r[5]=c->r[1]+0x00000016u; // 802C1814
  c->r[6]=c->r[1]+0x00000014u; // 802C1818
  c->r[7]=c->r[1]+0x0000001Cu; // 802C181C
  c->r[8]=c->r[1]+0x00000030u; // 802C1820
  c->r[9]=c->r[1]+0x0000002Cu; // 802C1824
  c->r[10]=c->r[1]+0x00000010u; // 802C1828
  c->lr=0x802C1830u; f_802BB924(c); // 802C182C
  c->r[4]=R32(c->r[1]+0x00000020u); // 802C1830
  c->r[3]=c->r[25]|c->r[25]; // 802C1834
  c->r[5]=R16(c->r[1]+0x00000016u); // 802C1838
  c->r[8]=c->r[24]|c->r[24]; // 802C183C
  c->r[6]=R16(c->r[1]+0x00000014u); // 802C1840
  c->r[9]=c->r[23]|c->r[23]; // 802C1844
  c->r[7]=R32(c->r[1]+0x0000001Cu); // 802C1848
  c->r[10]=R8(c->r[1]+0x00000010u); // 802C184C
  c->lr=0x802C1854u; f_80347140(c); // 802C1850
L_802C1854:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 802C1854
  c->r[3]=c->r[25]|c->r[25]; // 802C1858
  c->r[5]=R32(c->r[1]+0x00000034u); // 802C185C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1860
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C1864
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 802C1868
  c->r[6]=R8(c->r[1]+0x00000012u); // 802C186C
  c->r[7]=R8(c->r[1]+0x00000011u); // 802C1870
  c->r[8]=R32(c->r[1]+0x00000024u); // 802C1874
  c->lr=0x802C187Cu; f_80347394(c); // 802C1878
L_802C187C:;
  c->r[26]=rotl(c->r[26],31)&0x7FFFFFFFu; // 802C187C
  c->r[27]=c->r[27]+0x00000004u; // 802C1880
  c->r[28]=c->r[28]+0x00000001u; // 802C1884
L_802C1888:;
  cmps(c,0,(int32_t)c->r[26],0); // 802C1888
  if (!crb(c,2)) { IRQCHK(c); goto L_802C1750; } // 802C188C
  c->r[23]=R8(c->r[31]+0x00000001u); // 802C1890
  c->r[26]=0u+0x00000000u; // 802C1894
  goto L_802C18F0; // 802C1898
L_802C189C:;
  c->r[0]=rotl(c->r[23],0)&0x00000001u; cr0(c,c->r[0]); // 802C189C
  if (crb(c,2)) { goto L_802C18E4; } // 802C18A0
  c->r[4]=R32(c->r[31]+0x00000024u); // 802C18A4
  c->r[0]=R32(c->r[4]+0x00000010u); // 802C18A8
  cmps(c,0,(int32_t)c->r[0],0); // 802C18AC
  if (crb(c,2)) { goto L_802C18BC; } // 802C18B0
  c->r[28]=c->r[4]+c->r[0]; // 802C18B4
  goto L_802C18C0; // 802C18B8
L_802C18BC:;
  c->r[28]=0u+0x00000000u; // 802C18BC
L_802C18C0:;
  c->r[27]=R32(c->r[4]+0x00000018u); // 802C18C0
  c->r[3]=c->r[30]|c->r[30]; // 802C18C4
  c->r[29]=R16(c->r[4]+0x0000001Cu); // 802C18C8
  c->r[4]=c->r[26]|c->r[26]; // 802C18CC
  c->lr=0x802C18D4u; f_802BA0D8(c); // 802C18D0
  c->r[4]=c->r[28]|c->r[28]; // 802C18D4
  c->r[5]=c->r[27]|c->r[27]; // 802C18D8
  c->r[6]=c->r[29]|c->r[29]; // 802C18DC
  c->lr=0x802C18E4u; f_803477B4(c); // 802C18E0
L_802C18E4:;
  c->r[23]=rotl(c->r[23],31)&0x7FFFFFFFu; // 802C18E4
  c->r[31]=c->r[31]+0x00000004u; // 802C18E8
  c->r[26]=c->r[26]+0x00000001u; // 802C18EC
L_802C18F0:;
  cmps(c,0,(int32_t)c->r[23],0); // 802C18F0
  if (!crb(c,2)) { IRQCHK(c); goto L_802C189C; } // 802C18F4
  c->r[11]=c->r[1]+0x00000070u; // 802C18F8
  c->lr=0x802C1900u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C18FC
  c->r[0]=R32(c->r[1]+0x00000074u); // 802C1900
  c->lr=c->r[0]; // 802C1904
  c->r[1]=c->r[1]+0x00000070u; // 802C1908
  return; // 802C190C
}

// fn_802C1910
void f_802C1910(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C1910
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C1914
  c->r[3]=c->r[3]+0xFFFFC458u; // 802C1918
  cmpu(c,0,c->r[0],c->r[3]); // 802C191C
  if (!crb(c,2)) { goto L_802C192C; } // 802C1920
  c->r[3]=0u+0x00000001u; // 802C1924
  return; // 802C1928
L_802C192C:;
  c->r[3]=0u+0x80440000u; // 802C192C
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C1930
  c->r[3]=c->r[3]+0xFFFFC440u; // 802C1934
  cmpu(c,0,c->r[0],c->r[3]); // 802C1938
  if (!crb(c,2)) { goto L_802C1948; } // 802C193C
  c->r[3]=0u+0x00000001u; // 802C1940
  return; // 802C1944
L_802C1948:;
  c->r[3]=0u+0x80440000u; // 802C1948
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C194C
  cmpu(c,0,c->r[0],c->r[3]); // 802C1950
  if (!crb(c,2)) { goto L_802C1960; } // 802C1954
  c->r[3]=0u+0x00000001u; // 802C1958
  return; // 802C195C
L_802C1960:;
  c->r[3]=0u+0x80440000u; // 802C1960
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C1964
  c->r[0]=c->r[3]-c->r[0]; // 802C1968
  c->r[0]=cntlz(c->r[0]); // 802C196C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C1970
  return; // 802C1974
}

// fn_802C1978
void f_802C1978(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C1978
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C197C
  c->r[3]=c->r[3]+0xFFFFC440u; // 802C1980
  cmpu(c,0,c->r[0],c->r[3]); // 802C1984
  if (!crb(c,2)) { goto L_802C1994; } // 802C1988
  c->r[3]=0u+0x00000001u; // 802C198C
  return; // 802C1990
L_802C1994:;
  c->r[3]=0u+0x80440000u; // 802C1994
  c->r[0]=R32(c->r[4]+0x00000000u); // 802C1998
  c->r[3]=c->r[3]+0xFFFFC548u; // 802C199C
  cmpu(c,0,c->r[0],c->r[3]); // 802C19A0
  if (!crb(c,2)) { goto L_802C19B0; } // 802C19A4
  c->r[3]=0u+0x00000001u; // 802C19A8
  return; // 802C19AC
L_802C19B0:;
  c->r[3]=0u+0x80440000u; // 802C19B0
  c->r[3]=c->r[3]+0xFFFFC538u; // 802C19B4
  c->r[0]=c->r[3]-c->r[0]; // 802C19B8
  c->r[0]=cntlz(c->r[0]); // 802C19BC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C19C0
  return; // 802C19C4
}

// fn_802C19C8
void f_802C19C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C19C8
  c->r[0]=c->lr; // 802C19CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C19D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C19D4
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C19D8
  c->ctr=c->r[12]; // 802C19DC
  if (true) { c->lr=0x802C19E4u; dispatch(c,c->ctr); } // 802C19E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C19E4
  c->r[3]=c->r[3]+0x00000004u; // 802C19E8
  c->lr=c->r[0]; // 802C19EC
  c->r[1]=c->r[1]+0x00000010u; // 802C19F0
  return; // 802C19F4
}

// fn_802C19F8
void f_802C19F8(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C19F8
  c->r[3]=c->r[3]+0xFFFFC458u; // 802C19FC
  return; // 802C1A00
}

// fn_802C1A04
void f_802C1A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1A04
  c->r[0]=c->lr; // 802C1A08
  cmps(c,0,(int32_t)c->r[3],0); // 802C1A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C1A10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C1A14
  c->r[31]=c->r[3]|c->r[3]; // 802C1A18
  if (crb(c,2)) { goto L_802C1A30; } // 802C1A1C
  if (crb(c,2)) { goto L_802C1A30; } // 802C1A20
  if (crb(c,2)) { goto L_802C1A30; } // 802C1A24
  c->r[4]=0u+0x00000000u; // 802C1A28
  c->lr=0x802C1A30u; f_802C624C(c); // 802C1A2C
L_802C1A30:;
  c->r[3]=c->r[31]|c->r[31]; // 802C1A30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C1A34
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C1A38
  c->lr=c->r[0]; // 802C1A3C
  c->r[1]=c->r[1]+0x00000010u; // 802C1A40
  return; // 802C1A44
}

// fn_802C1A48
void f_802C1A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1A48
  c->r[0]=c->lr; // 802C1A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C1A50
  c->r[12]=R32(c->r[3]+0x00000000u); // 802C1A54
  c->r[12]=R32(c->r[12]+0x00000014u); // 802C1A58
  c->ctr=c->r[12]; // 802C1A5C
  if (true) { c->lr=0x802C1A64u; dispatch(c,c->ctr); } // 802C1A60
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C1A64
  c->r[3]=c->r[3]+0x00000004u; // 802C1A68
  c->lr=c->r[0]; // 802C1A6C
  c->r[1]=c->r[1]+0x00000010u; // 802C1A70
  return; // 802C1A74
}

// fn_802C1A78
void f_802C1A78(Ctx* __restrict c) {
  c->r[3]=0u+0x80440000u; // 802C1A78
  c->r[3]=c->r[3]+0xFFFFC440u; // 802C1A7C
  return; // 802C1A80
}

// fn_802C1A84
void f_802C1A84(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000014u); // 802C1A84
  c->r[0]=rotl(c->r[4],1)&0xFFFFFFFEu; // 802C1A88
  c->r[0]=R16(c->r[3]+c->r[0]); // 802C1A8C
  c->r[0]=rotl(c->r[0],0)&0x0000C000u; // 802C1A90
  c->r[0]=cntlz(c->r[0]); // 802C1A94
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 802C1A98
  return; // 802C1A9C
}

// fn_802C1AA0
void f_802C1AA0(Ctx* __restrict c) {
  c->r[4]=0u+0x00010000u; // 802C1AA0
  c->r[7]=0u+0x00000000u; // 802C1AA4
  c->r[5]=c->r[4]+0xFFFF8000u; // 802C1AA8
  c->r[6]=0u+0x00000000u; // 802C1AAC
  goto L_802C1AC4; // 802C1AB0
L_802C1AB4:;
  c->r[4]=R32(c->r[3]+0x00000014u); // 802C1AB4
  c->r[7]=c->r[7]+0x00000001u; // 802C1AB8
  W16(c->r[4]+c->r[6],c->r[5]); // 802C1ABC
  c->r[6]=c->r[6]+0x00000002u; // 802C1AC0
L_802C1AC4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C1AC4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 802C1AC8
  if (crb(c,0)) { IRQCHK(c); goto L_802C1AB4; } // 802C1ACC
  c->r[4]=0u+0x00000004u; // 802C1AD0
  c->r[5]=0u+0x00000000u; // 802C1AD4
  f_802C63A4(c); return; // 802C1AD8
}

// fn_802C1ADC
void f_802C1ADC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C1ADC
  return; // 802C1AE0
}

// fn_802C1AE4
void f_802C1AE4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 802C1AE4
  return; // 802C1AE8
}

// fn_802C1AEC
void f_802C1AEC(Ctx* __restrict c) {
  return; // 802C1AEC
}

// fn_802C1AF0
void f_802C1AF0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1AF0
  c->r[0]=c->lr; // 802C1AF4
  cmps(c,0,(int32_t)c->r[3],0); // 802C1AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802C1AFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802C1B00
  c->r[31]=c->r[3]|c->r[3]; // 802C1B04
  if (crb(c,2)) { goto L_802C1B18; } // 802C1B08
  if (crb(c,2)) { goto L_802C1B18; } // 802C1B0C
  c->r[4]=0u+0x00000000u; // 802C1B10
  c->lr=0x802C1B18u; f_802C624C(c); // 802C1B14
L_802C1B18:;
  c->r[3]=c->r[31]|c->r[31]; // 802C1B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802C1B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802C1B20
  c->lr=c->r[0]; // 802C1B24
  c->r[1]=c->r[1]+0x00000010u; // 802C1B28
  return; // 802C1B2C
}

// Construct__Q34nw4r3g3d15AnmObjTexSrtResFP12MEMAllocatorPiQ34nw4r3g3d12ResAnmTexSrtQ34nw4r3g3d6ResMdlb
void f_802C1B30(Ctx* __restrict c) {
  trace_call(0x802C1B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1B30
  c->r[0]=c->lr; // 802C1B34
  W32(c->r[1]+0x00000044u,c->r[0]); // 802C1B38
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 802C1B3C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 802C1B40
  c->r[11]=c->r[1]+0x00000030u; // 802C1B44
  c->lr=0x802C1B4Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C1B48
  c->r[8]=R32(c->r[5]+0x00000000u); // 802C1B4C
  c->r[29]=c->r[3]|c->r[3]; // 802C1B50
  c->r[25]=c->r[4]|c->r[4]; // 802C1B54
  c->r[30]=c->r[5]|c->r[5]; // 802C1B58
  cmps(c,0,(int32_t)c->r[8],0); // 802C1B5C
  c->r[27]=c->r[7]|c->r[7]; // 802C1B60
  if (crb(c,2)) { goto L_802C1B74; } // 802C1B64
  c->r[0]=R32(c->r[6]+0x00000000u); // 802C1B68
  cmps(c,0,(int32_t)c->r[0],0); // 802C1B6C
  if (!crb(c,2)) { goto L_802C1B7C; } // 802C1B70
L_802C1B74:;
  c->r[3]=0u+0x00000000u; // 802C1B74
  goto L_802C1D00; // 802C1B78
L_802C1B7C:;
  c->r[31]=R16(c->r[8]+0x0000001Eu); // 802C1B7C
  c->r[3]=c->r[6]|c->r[6]; // 802C1B80
  c->lr=0x802C1B88u; f_802B8AA4(c); // 802C1B84
  c->r[0]=0u-c->r[27]; // 802C1B88
  c->r[28]=c->r[3]|c->r[3]; // 802C1B8C
  c->r[4]=c->r[0]|c->r[27]; // 802C1B90
  cmps(c,0,(int32_t)c->r[25],0); // 802C1B94
  c->r[4]=sraw(c,c->r[4],31); // 802C1B98
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 802C1B9C
  c->r[3]=c->r[31]&c->r[4]; // 802C1BA0
  c->r[26]=(uint32_t)((int32_t)c->r[3]*(int32_t)232); // 802C1BA4
  c->r[3]=c->r[26]+c->r[0]; // 802C1BA8
  c->r[4]=c->r[3]+0x00000034u; // 802C1BAC
  if (crb(c,2)) { goto L_802C1BB8; } // 802C1BB0
  W32(c->r[25]+0x00000000u,c->r[4]); // 802C1BB4
L_802C1BB8:;
  cmps(c,0,(int32_t)c->r[29],0); // 802C1BB8
  if (!crb(c,2)) { goto L_802C1BC8; } // 802C1BBC
  c->r[3]=0u+0x00000000u; // 802C1BC0
  goto L_802C1D00; // 802C1BC4
L_802C1BC8:;
  c->r[3]=c->r[29]|c->r[29]; // 802C1BC8
  c->lr=0x802C1BD0u; f_8034FF40(c); // 802C1BCC
  cmps(c,0,(int32_t)c->r[3],0); // 802C1BD0
  c->r[31]=c->r[3]|c->r[3]; // 802C1BD4
  if (!crb(c,2)) { goto L_802C1BE4; } // 802C1BD8
  c->r[3]=0u+0x00000000u; // 802C1BDC
  goto L_802C1D00; // 802C1BE0
L_802C1BE4:;
  cmps(c,0,(int32_t)c->r[27],0); // 802C1BE4
  if (crb(c,2)) { goto L_802C1BF4; } // 802C1BE8
  c->r[27]=c->r[3]+0x00000034u; // 802C1BEC
  goto L_802C1BF8; // 802C1BF0
L_802C1BF4:;
  c->r[27]=0u+0x00000000u; // 802C1BF4
L_802C1BF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 802C1BF8
  c->r[4]=c->r[3]+c->r[26]; // 802C1BFC
  c->r[5]=c->r[4]+0x00000034u; // 802C1C00
  if (crb(c,2)) { goto L_802C1CFC; } // 802C1C04
  c->r[0]=0u+0x00000000u; // 802C1C08
  c->r[4]=0u+0x80480000u; // 802C1C0C
  W32(c->r[3]+0x00000004u,c->r[0]); // 802C1C10
  c->r[4]=c->r[4]+0x00006C70u; // 802C1C14
  c->r[30]=R32(c->r[30]+0x00000000u); // 802C1C18
  W32(c->r[3]+0x00000008u,c->r[29]); // 802C1C1C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 802C1C20
  W32(c->r[3]+0x00000000u,c->r[4]); // 802C1C24
  W32(c->r[3]+0x00000010u,c->r[28]); // 802C1C28
  W32(c->r[3]+0x00000014u,c->r[5]); // 802C1C2C
  c->r[3]=c->r[31]|c->r[31]; // 802C1C30
  c->r[12]=R32(c->r[31]+0x00000000u); // 802C1C34
  c->r[12]=R32(c->r[12]+0x00000034u); // 802C1C38
  c->ctr=c->r[12]; // 802C1C3C
  if (true) { c->lr=0x802C1C44u; dispatch(c,c->ctr); } // 802C1C40
  c->r[4]=R16(c->r[30]+0x0000001Cu); // 802C1C44
  c->r[0]=0u+0x43300000u; // 802C1C48
  c->r[5]=R32(c->r[30]+0x00000024u); // 802C1C4C
  c->r[3]=0u+0x80480000u; // 802C1C50
  c->r[4]=c->r[4]^0x80000000u; // 802C1C54
  {uint32_t ea=c->r[2]+0xFFFFABA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1C58
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 802C1C5C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 802C1C60
  {uint32_t ea=c->r[2]+0xFFFFABA4u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C1C64
  c->r[4]=c->r[13]+0xFFFF8008u; // 802C1C68
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C1C6C
  c->r[3]=c->r[3]+0x00006C28u; // 802C1C70
  {uint32_t ea=c->r[2]+0xFFFFABA8u; c->f[3]=RF64(ea);} // 802C1C74
  cmps(c,0,(int32_t)c->r[27],0); // 802C1C78
  {uint32_t ea=c->r[31]+0x00000018u; WF32(ea,c->f[1]);} // 802C1C7C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 802C1C80
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[0]);} // 802C1C84
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[3]); // 802C1C88
  c->r[0]=R32(c->r[4]+c->r[5]); // 802C1C8C
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[1]);} // 802C1C90
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[0]);} // 802C1C94
  W32(c->r[31]+0x00000028u,c->r[0]); // 802C1C98
  W32(c->r[31]+0x00000000u,c->r[3]); // 802C1C9C
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 802C1CA0
  W32(c->r[31]+0x00000030u,c->r[27]); // 802C1CA4
  if (crb(c,2)) { goto L_802C1CFC; } // 802C1CA8
  {uint32_t ea=c->r[31]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C1CAC
  c->r[28]=0u+0x00000000u; // 802C1CB0
  c->r[27]=0u+0x00000000u; // 802C1CB4
  goto L_802C1CF0; // 802C1CB8
L_802C1CBC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 802C1CBC
  c->r[3]=R16(c->r[3]+c->r[27]); // 802C1CC0
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1CC4
  if (!crb(c,2)) { goto L_802C1CE8; } // 802C1CC8
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C1CCC
  c->f[1]=c->f[31]; // 802C1CD0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 802C1CD4
  c->r[4]=R32(c->r[31]+0x00000030u); // 802C1CD8
  c->r[3]=c->r[31]+0x0000002Cu; // 802C1CDC
  c->r[4]=c->r[4]+c->r[0]; // 802C1CE0
  c->lr=0x802C1CE8u; f_802BC734(c); // 802C1CE4
L_802C1CE8:;
  c->r[27]=c->r[27]+0x00000002u; // 802C1CE8
  c->r[28]=c->r[28]+0x00000001u; // 802C1CEC
L_802C1CF0:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 802C1CF0
  cmpu(c,0,c->r[28],c->r[0]); // 802C1CF4
  if (crb(c,0)) { IRQCHK(c); goto L_802C1CBC; } // 802C1CF8
L_802C1CFC:;
  c->r[3]=c->r[31]|c->r[31]; // 802C1CFC
L_802C1D00:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 802C1D00
  c->r[11]=c->r[1]+0x00000030u; // 802C1D04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 802C1D08
  c->lr=0x802C1D10u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C1D0C
  c->r[0]=R32(c->r[1]+0x00000044u); // 802C1D10
  c->lr=c->r[0]; // 802C1D14
  c->r[1]=c->r[1]+0x00000040u; // 802C1D18
  return; // 802C1D1C
}

// fn_802C1D20
void f_802C1D20(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1D20
  c->r[0]=c->lr; // 802C1D24
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C1D28
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C1D2C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C1D30
  c->f[3]=c->f[1]; // 802C1D34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C1D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C1D3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C1D40
  c->r[29]=c->r[3]|c->r[3]; // 802C1D44
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C1D48
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1D4C
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C1D50
  c->ctr=c->r[12]; // 802C1D54
  if (true) { c->lr=0x802C1D5Cu; dispatch(c,c->ctr); } // 802C1D58
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C1D5C
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C1D60
  cmps(c,0,(int32_t)c->r[0],0); // 802C1D64
  if (crb(c,2)) { goto L_802C1DBC; } // 802C1D68
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C1D6C
  c->r[31]=0u+0x00000000u; // 802C1D70
  c->r[30]=0u+0x00000000u; // 802C1D74
  goto L_802C1DB0; // 802C1D78
L_802C1D7C:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C1D7C
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C1D80
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1D84
  if (!crb(c,2)) { goto L_802C1DA8; } // 802C1D88
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C1D8C
  c->f[1]=c->f[31]; // 802C1D90
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 802C1D94
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C1D98
  c->r[3]=c->r[29]+0x0000002Cu; // 802C1D9C
  c->r[4]=c->r[4]+c->r[0]; // 802C1DA0
  c->lr=0x802C1DA8u; f_802BC734(c); // 802C1DA4
L_802C1DA8:;
  c->r[30]=c->r[30]+0x00000002u; // 802C1DA8
  c->r[31]=c->r[31]+0x00000001u; // 802C1DAC
L_802C1DB0:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C1DB0
  cmpu(c,0,c->r[31],c->r[0]); // 802C1DB4
  if (crb(c,0)) { IRQCHK(c); goto L_802C1D7C; } // 802C1DB8
L_802C1DBC:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C1DBC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1DC0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C1DC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C1DC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C1DCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C1DD0
  c->lr=c->r[0]; // 802C1DD4
  c->r[1]=c->r[1]+0x00000030u; // 802C1DD8
  return; // 802C1DDC
}

// fn_802C1DE0
void f_802C1DE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1DE0
  return; // 802C1DE4
}

// SetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResFf_802C1DE8
void f_802C1DE8(Ctx* __restrict c) {
  trace_call(0x802C1DE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1DE8
  c->r[0]=c->lr; // 802C1DEC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C1DF0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C1DF4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C1DF8
  {uint32_t ea=c->r[2]+0xFFFFABA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C1DFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C1E00
  fcmp(c,0,c->f[0],c->f[1]); // 802C1E04
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C1E08
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C1E0C
  c->r[29]=c->r[3]|c->r[3]; // 802C1E10
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 802C1E14
  if (!crb(c,2)) { goto L_802C1E78; } // 802C1E18
  c->r[0]=R32(c->r[3]+0x00000030u); // 802C1E1C
  cmps(c,0,(int32_t)c->r[0],0); // 802C1E20
  if (crb(c,2)) { goto L_802C1E78; } // 802C1E24
  {uint32_t ea=c->r[3]+0x00000018u; c->f[31]=c->ps1[31]=RF32(ea);} // 802C1E28
  c->r[31]=0u+0x00000000u; // 802C1E2C
  c->r[30]=0u+0x00000000u; // 802C1E30
  goto L_802C1E6C; // 802C1E34
L_802C1E38:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C1E38
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C1E3C
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1E40
  if (!crb(c,2)) { goto L_802C1E64; } // 802C1E44
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C1E48
  c->f[1]=c->f[31]; // 802C1E4C
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 802C1E50
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C1E54
  c->r[3]=c->r[29]+0x0000002Cu; // 802C1E58
  c->r[4]=c->r[4]+c->r[0]; // 802C1E5C
  c->lr=0x802C1E64u; f_802BC734(c); // 802C1E60
L_802C1E64:;
  c->r[30]=c->r[30]+0x00000002u; // 802C1E64
  c->r[31]=c->r[31]+0x00000001u; // 802C1E68
L_802C1E6C:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C1E6C
  cmpu(c,0,c->r[31],c->r[0]); // 802C1E70
  if (crb(c,0)) { IRQCHK(c); goto L_802C1E38; } // 802C1E74
L_802C1E78:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C1E78
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1E7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C1E80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C1E84
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C1E88
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C1E8C
  c->lr=c->r[0]; // 802C1E90
  c->r[1]=c->r[1]+0x00000030u; // 802C1E94
  return; // 802C1E98
}

// GetUpdateRate__Q34nw4r3g3d15AnmObjMatClrResCFv_802C1E9C
void f_802C1E9C(Ctx* __restrict c) {
  trace_call(0x802C1E9Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1E9C
  return; // 802C1EA0
}

// UpdateFrame__Q34nw4r3g3d15AnmObjMatClrResFv_802C1EA4
void f_802C1EA4(Ctx* __restrict c) {
  trace_call(0x802C1EA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1EA4
  c->r[0]=c->lr; // 802C1EA8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C1EAC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 802C1EB0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 802C1EB4
  {uint32_t ea=c->r[2]+0xFFFFABA0u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C1EB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802C1EBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 802C1EC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 802C1EC4
  c->r[29]=c->r[3]|c->r[3]; // 802C1EC8
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1ECC
  fcmp(c,0,c->f[0],c->f[1]); // 802C1ED0
  if (crb(c,2)) { goto L_802C1F60; } // 802C1ED4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802C1ED8
  {uint32_t ea=c->r[13]+0xFFFFAA38u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1EDC
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 802C1EE0
  c->f[3]=c->ps1[3]=S(c->f[2]*c->f[1]); // 802C1EE4
  c->r[12]=R32(c->r[3]+0x00000028u); // 802C1EE8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 802C1EEC
  {uint32_t ea=c->r[3]+0x00000024u; c->f[2]=c->ps1[2]=RF32(ea);} // 802C1EF0
  c->f[3]=c->ps1[3]=S(c->f[0]+c->f[3]); // 802C1EF4
  c->ctr=c->r[12]; // 802C1EF8
  if (true) { c->lr=0x802C1F00u; dispatch(c,c->ctr); } // 802C1EFC
  c->r[0]=R32(c->r[29]+0x00000030u); // 802C1F00
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[1]);} // 802C1F04
  cmps(c,0,(int32_t)c->r[0],0); // 802C1F08
  if (crb(c,2)) { goto L_802C1F60; } // 802C1F0C
  c->f[31]=c->ps1[31]=S(c->f[1]); // 802C1F10
  c->r[31]=0u+0x00000000u; // 802C1F14
  c->r[30]=0u+0x00000000u; // 802C1F18
  goto L_802C1F54; // 802C1F1C
L_802C1F20:;
  c->r[3]=R32(c->r[29]+0x00000014u); // 802C1F20
  c->r[3]=R16(c->r[3]+c->r[30]); // 802C1F24
  c->r[0]=rotl(c->r[3],0)&0x00008000u; cr0(c,c->r[0]); // 802C1F28
  if (!crb(c,2)) { goto L_802C1F4C; } // 802C1F2C
  c->r[5]=rotl(c->r[3],0)&0x00003FFFu; // 802C1F30
  c->f[1]=c->f[31]; // 802C1F34
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)232); // 802C1F38
  c->r[4]=R32(c->r[29]+0x00000030u); // 802C1F3C
  c->r[3]=c->r[29]+0x0000002Cu; // 802C1F40
  c->r[4]=c->r[4]+c->r[0]; // 802C1F44
  c->lr=0x802C1F4Cu; f_802BC734(c); // 802C1F48
L_802C1F4C:;
  c->r[30]=c->r[30]+0x00000002u; // 802C1F4C
  c->r[31]=c->r[31]+0x00000001u; // 802C1F50
L_802C1F54:;
  c->r[0]=R32(c->r[29]+0x00000010u); // 802C1F54
  cmpu(c,0,c->r[31],c->r[0]); // 802C1F58
  if (crb(c,0)) { IRQCHK(c); goto L_802C1F20; } // 802C1F5C
L_802C1F60:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 802C1F60
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C1F64
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 802C1F68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802C1F6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 802C1F70
  c->r[29]=R32(c->r[1]+0x00000014u); // 802C1F74
  c->lr=c->r[0]; // 802C1F78
  c->r[1]=c->r[1]+0x00000030u; // 802C1F7C
  return; // 802C1F80
}

// Bind__Q34nw4r3g3d15AnmObjMatClrResFQ34nw4r3g3d6ResMdl_802C1F84
void f_802C1F84(Ctx* __restrict c) {
  trace_call(0x802C1F84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802C1F84
  c->r[0]=c->lr; // 802C1F88
  W32(c->r[1]+0x00000034u,c->r[0]); // 802C1F8C
  c->r[11]=c->r[1]+0x00000030u; // 802C1F90
  c->lr=0x802C1F98u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802C1F94
  c->r[5]=R32(c->r[3]+0x0000002Cu); // 802C1F98
  c->r[27]=c->r[3]|c->r[3]; // 802C1F9C
  c->r[28]=c->r[4]|c->r[4]; // 802C1FA0
  c->r[30]=0u+0x00000000u; // 802C1FA4
  c->r[31]=R16(c->r[5]+0x0000001Eu); // 802C1FA8
  c->r[29]=0u+0x00000000u; // 802C1FAC
  cmps(c,0,(int32_t)c->r[31],0); // 802C1FB0
  if (!crb(c,1)) { goto L_802C2050; } // 802C1FB4
  goto L_802C2044; // 802C1FB8
L_802C1FBC:;
  c->r[3]=R32(c->r[27]+0x0000002Cu); // 802C1FBC
  c->r[0]=R32(c->r[3]+0x00000010u); // 802C1FC0
  cmps(c,0,(int32_t)c->r[0],0); // 802C1FC4
  if (crb(c,2)) { goto L_802C1FD4; } // 802C1FC8
  c->r[0]=c->r[3]+c->r[0]; // 802C1FCC
  goto L_802C1FD8; // 802C1FD0
L_802C1FD4:;
  c->r[0]=0u+0x00000000u; // 802C1FD4
L_802C1FD8:;
  cmps(c,0,(int32_t)c->r[0],0); // 802C1FD8
  if (crb(c,2)) { goto L_802C2004; } // 802C1FDC
  c->r[3]=rotl(c->r[29],4)&0x000FFFF0u; // 802C1FE0
  c->r[3]=c->r[0]+c->r[3]; // 802C1FE4
  c->r[3]=R32(c->r[3]+0x00000024u); // 802C1FE8
  cmps(c,0,(int32_t)c->r[3],0); // 802C1FEC
  if (crb(c,2)) { goto L_802C1FFC; } // 802C1FF0
  c->r[5]=c->r[0]+c->r[3]; // 802C1FF4
  goto L_802C2008; // 802C1FF8
L_802C1FFC:;
  c->r[5]=0u+0x00000000u; // 802C1FFC
  goto L_802C2008; // 802C2000
L_802C2004:;
  c->r[5]=0u+0x00000000u; // 802C2004
L_802C2008:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 802C2008
  c->r[3]=c->r[28]|c->r[28]; // 802C200C
  c->r[4]=c->r[1]+0x00000008u; // 802C2010
  c->r[5]=c->r[0]+c->r[5]; // 802C2014
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 802C2018
  W32(c->r[1]+0x00000008u,c->r[0]); // 802C201C
  c->lr=0x802C2024u; f_802B89AC(c); // 802C2020
  cmps(c,0,(int32_t)c->r[3],0); // 802C2024
  if (crb(c,2)) { goto L_802C2040; } // 802C2028
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 802C202C
  c->r[30]=0u+0x00000001u; // 802C2030
  c->r[3]=R32(c->r[27]+0x00000014u); // 802C2034
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 802C2038
  W16(c->r[3]+c->r[0],c->r[29]); // 802C203C
L_802C2040:;
  c->r[29]=c->r[29]+0x00000001u; // 802C2040
L_802C2044:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 802C2044
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[31]); // 802C2048
  if (crb(c,0)) { IRQCHK(c); goto L_802C1FBC; } // 802C204C
L_802C2050:;
  c->r[3]=c->r[27]|c->r[27]; // 802C2050
  c->r[4]=0u+0x00000004u; // 802C2054
  c->r[5]=0u+0x00000001u; // 802C2058
  c->lr=0x802C2060u; f_802C63A4(c); // 802C205C
  c->r[11]=c->r[1]+0x00000030u; // 802C2060
  c->r[3]=c->r[30]|c->r[30]; // 802C2064
  c->lr=0x802C206Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802C2068
  c->r[0]=R32(c->r[1]+0x00000034u); // 802C206C
  c->lr=c->r[0]; // 802C2070
  c->r[1]=c->r[1]+0x00000030u; // 802C2074
  return; // 802C2078
}

