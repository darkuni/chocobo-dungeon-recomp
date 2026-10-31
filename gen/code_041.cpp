#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8019C694
void f_8019C694(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C694
  c->r[0]=c->lr; // 8019C698
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C69C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C6A0
  c->r[31]=c->r[3]|c->r[3]; // 8019C6A4
  c->lr=0x8019C6ACu; f_8019BBF4(c); // 8019C6A8
  c->r[3]=0u+0x80470000u; // 8019C6AC
  c->r[3]=c->r[3]+0xFFFFEF90u; // 8019C6B0
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8019C6B4
  c->r[0]=c->r[3]+0x00000014u; // 8019C6B8
  W32(c->r[31]+0x00000128u,c->r[0]); // 8019C6BC
  c->r[3]=c->r[31]|c->r[31]; // 8019C6C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019C6C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C6C8
  c->lr=c->r[0]; // 8019C6CC
  c->r[1]=c->r[1]+0x00000010u; // 8019C6D0
  return; // 8019C6D4
}

// dtor_8019C6D8
void f_8019C6D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C6D8
  c->r[0]=c->lr; // 8019C6DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C6E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C6E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019C6E8
  c->r[30]=c->r[3]|c->r[3]; // 8019C6EC
  c->r[31]=c->r[4]|c->r[4]; // 8019C6F0
  cmps(c,0,(int32_t)c->r[3],0); // 8019C6F4
  if (crb(c,2)) { goto L_8019C718; } // 8019C6F8
  c->r[4]=0u+0x00000000u; // 8019C6FC
  c->lr=0x8019C704u; f_8019BD0C(c); // 8019C700
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8019C704
  cmps(c,0,(int32_t)c->r[0],0); // 8019C708
  if (!crb(c,1)) { goto L_8019C718; } // 8019C70C
  c->r[3]=c->r[30]|c->r[30]; // 8019C710
  c->lr=0x8019C718u; f_80047B20(c); // 8019C714
L_8019C718:;
  c->r[3]=c->r[30]|c->r[30]; // 8019C718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019C71C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019C720
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C724
  c->lr=c->r[0]; // 8019C728
  c->r[1]=c->r[1]+0x00000010u; // 8019C72C
  return; // 8019C730
}

// fn_8019C734
void f_8019C734(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C734
  c->r[0]=c->lr; // 8019C738
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C73C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C740
  c->r[31]=c->r[3]|c->r[3]; // 8019C744
  c->lr=0x8019C74Cu; f_8019C070(c); // 8019C748
  c->r[3]=c->r[31]|c->r[31]; // 8019C74C
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 8019C750
  c->r[12]=R32(c->r[12]+0x00000024u); // 8019C754
  c->ctr=c->r[12]; // 8019C758
  if (true) { c->lr=0x8019C760u; dispatch(c,c->ctr); } // 8019C75C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019C760
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C764
  c->lr=c->r[0]; // 8019C768
  c->r[1]=c->r[1]+0x00000010u; // 8019C76C
  return; // 8019C770
}

// fn_8019C774
void f_8019C774(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 8019C774
  f_8019C6D8(c); return; // 8019C778
}

// fn_8019C77C
void f_8019C77C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C77C
  c->r[0]=c->lr; // 8019C780
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C788
  c->r[31]=c->r[3]|c->r[3]; // 8019C78C
  c->lr=0x8019C794u; f_8019C694(c); // 8019C790
  c->r[3]=0u+0x80470000u; // 8019C794
  c->r[3]=c->r[3]+0xFFFFEFB8u; // 8019C798
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 8019C79C
  c->r[0]=c->r[3]+0x00000014u; // 8019C7A0
  W32(c->r[31]+0x00000128u,c->r[0]); // 8019C7A4
  c->r[3]=c->r[31]+0x00003248u; // 8019C7A8
  c->lr=0x8019C7B0u; f_80110498(c); // 8019C7AC
  c->r[3]=c->r[31]+0x00003290u; // 8019C7B0
  c->lr=0x8019C7B8u; f_80110498(c); // 8019C7B4
  c->r[3]=c->r[31]+0x000032D8u; // 8019C7B8
  c->lr=0x8019C7C0u; f_80110498(c); // 8019C7BC
  {uint32_t ea=c->r[2]+0xFFFF9210u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C7C0
  {uint32_t ea=c->r[31]+0x00003320u; WF32(ea,c->f[1]);} // 8019C7C4
  {uint32_t ea=c->r[2]+0xFFFF9214u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019C7C8
  {uint32_t ea=c->r[31]+0x00003324u; WF32(ea,c->f[0]);} // 8019C7CC
  {uint32_t ea=c->r[31]+0x00003328u; WF32(ea,c->f[1]);} // 8019C7D0
  {uint32_t ea=c->r[31]+0x0000332Cu; WF32(ea,c->f[0]);} // 8019C7D4
  {uint32_t ea=c->r[2]+0xFFFF9218u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019C7D8
  {uint32_t ea=c->r[31]+0x00003330u; WF32(ea,c->f[0]);} // 8019C7DC
  {uint32_t ea=c->r[31]+0x00003334u; WF32(ea,c->f[0]);} // 8019C7E0
  {uint32_t ea=c->r[2]+0xFFFF921Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8019C7E4
  {uint32_t ea=c->r[31]+0x00003338u; WF32(ea,c->f[0]);} // 8019C7E8
  {uint32_t ea=c->r[31]+0x0000333Cu; WF32(ea,c->f[0]);} // 8019C7EC
  c->r[3]=c->r[31]|c->r[31]; // 8019C7F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019C7F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C7F8
  c->lr=c->r[0]; // 8019C7FC
  c->r[1]=c->r[1]+0x00000010u; // 8019C800
  return; // 8019C804
}

// dtor_8019C808
void f_8019C808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C808
  c->r[0]=c->lr; // 8019C80C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C810
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C814
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019C818
  c->r[30]=c->r[3]|c->r[3]; // 8019C81C
  c->r[31]=c->r[4]|c->r[4]; // 8019C820
  cmps(c,0,(int32_t)c->r[3],0); // 8019C824
  if (crb(c,2)) { goto L_8019C870; } // 8019C828
  c->r[3]=c->r[3]+0x000032D8u; // 8019C82C
  c->r[4]=0u+0xFFFFFFFFu; // 8019C830
  c->lr=0x8019C838u; f_80110504(c); // 8019C834
  c->r[3]=c->r[30]+0x00003290u; // 8019C838
  c->r[4]=0u+0xFFFFFFFFu; // 8019C83C
  c->lr=0x8019C844u; f_80110504(c); // 8019C840
  c->r[3]=c->r[30]+0x00003248u; // 8019C844
  c->r[4]=0u+0xFFFFFFFFu; // 8019C848
  c->lr=0x8019C850u; f_80110504(c); // 8019C84C
  c->r[3]=c->r[30]|c->r[30]; // 8019C850
  c->r[4]=0u+0x00000000u; // 8019C854
  c->lr=0x8019C85Cu; f_8019C6D8(c); // 8019C858
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8019C85C
  cmps(c,0,(int32_t)c->r[0],0); // 8019C860
  if (!crb(c,1)) { goto L_8019C870; } // 8019C864
  c->r[3]=c->r[30]|c->r[30]; // 8019C868
  c->lr=0x8019C870u; f_80047B20(c); // 8019C86C
L_8019C870:;
  c->r[3]=c->r[30]|c->r[30]; // 8019C870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019C874
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019C878
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C87C
  c->lr=c->r[0]; // 8019C880
  c->r[1]=c->r[1]+0x00000010u; // 8019C884
  return; // 8019C888
}

// fn_8019C88C
void f_8019C88C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C88C
  c->r[0]=c->lr; // 8019C890
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019C894
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019C898
  c->r[31]=c->r[3]|c->r[3]; // 8019C89C
  c->r[3]=c->r[3]+0x00003248u; // 8019C8A0
  c->lr=0x8019C8A8u; f_801105F8(c); // 8019C8A4
  cmps(c,0,(int32_t)c->r[3],0); // 8019C8A8
  if (crb(c,2)) { goto L_8019C8BC; } // 8019C8AC
  c->r[3]=c->r[31]+0x00003248u; // 8019C8B0
  c->r[4]=c->r[31]+0x00000200u; // 8019C8B4
  c->lr=0x8019C8BCu; f_801108D8(c); // 8019C8B8
L_8019C8BC:;
  c->r[3]=c->r[31]+0x00003290u; // 8019C8BC
  c->lr=0x8019C8C4u; f_801105F8(c); // 8019C8C0
  cmps(c,0,(int32_t)c->r[3],0); // 8019C8C4
  if (crb(c,2)) { goto L_8019C8D8; } // 8019C8C8
  c->r[3]=c->r[31]+0x00003290u; // 8019C8CC
  c->r[4]=c->r[31]+0x00000204u; // 8019C8D0
  c->lr=0x8019C8D8u; f_801108D8(c); // 8019C8D4
L_8019C8D8:;
  c->r[3]=c->r[31]+0x000032D8u; // 8019C8D8
  c->lr=0x8019C8E0u; f_801105F8(c); // 8019C8DC
  cmps(c,0,(int32_t)c->r[3],0); // 8019C8E0
  if (crb(c,2)) { goto L_8019C91C; } // 8019C8E4
  c->r[3]=c->r[31]+0x000032D8u; // 8019C8E8
  c->r[4]=c->r[31]+0x00000234u; // 8019C8EC
  c->lr=0x8019C8F4u; f_801108D8(c); // 8019C8F0
  c->r[3]=c->r[31]|c->r[31]; // 8019C8F4
  {uint32_t ea=c->r[2]+0xFFFF9220u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C8F8
  {uint32_t ea=c->r[31]+0x00000234u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019C8FC
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8019C900
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8019C904
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 8019C908
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8019C90C
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 8019C910
  c->r[5]=0u+0xFFFFFFFFu; // 8019C914
  c->lr=0x8019C91Cu; f_8019C44C(c); // 8019C918
L_8019C91C:;
  c->r[3]=c->r[31]|c->r[31]; // 8019C91C
  c->lr=0x8019C924u; f_8019C734(c); // 8019C920
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019C924
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019C928
  c->lr=c->r[0]; // 8019C92C
  c->r[1]=c->r[1]+0x00000020u; // 8019C930
  return; // 8019C934
}

// fn_8019C938
void f_8019C938(Ctx* __restrict c) {
  return; // 8019C938
}

// fn_8019C93C
void f_8019C93C(Ctx* __restrict c) {
  f_8019BF60(c); return; // 8019C93C
}

// fn_8019C940
void f_8019C940(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C940
  c->r[0]=c->lr; // 8019C944
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C94C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019C950
  c->r[30]=c->r[3]|c->r[3]; // 8019C954
  c->r[31]=c->r[4]|c->r[4]; // 8019C958
  c->lr=0x8019C960u; f_8019CBB4(c); // 8019C95C
  c->r[3]=c->r[30]|c->r[30]; // 8019C960
  c->r[4]=c->r[31]|c->r[31]; // 8019C964
  c->r[5]=0u+0xFFFFFFFFu; // 8019C968
  c->lr=0x8019C970u; f_8019C518(c); // 8019C96C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019C970
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019C974
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019C978
  c->lr=c->r[0]; // 8019C97C
  c->r[1]=c->r[1]+0x00000010u; // 8019C980
  return; // 8019C984
}

// fn_8019C988
void f_8019C988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019C988
  c->r[0]=c->lr; // 8019C98C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019C990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019C994
  c->r[31]=c->r[3]|c->r[3]; // 8019C998
  cmps(c,0,(int32_t)c->r[4],0); // 8019C99C
  if (crb(c,2)) { goto L_8019CA14; } // 8019C9A0
  c->r[3]=c->r[3]+0x00003248u; // 8019C9A4
  {uint32_t ea=c->r[31]+0x00003320u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9A8
  c->lr=0x8019C9B0u; f_80110560(c); // 8019C9AC
  c->r[3]=c->r[31]+0x00003248u; // 8019C9B0
  {uint32_t ea=c->r[31]+0x00003328u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9B4
  c->lr=0x8019C9BCu; f_80110568(c); // 8019C9B8
  c->r[3]=c->r[31]+0x00003248u; // 8019C9BC
  {uint32_t ea=c->r[31]+0x00003338u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9C0
  c->lr=0x8019C9C8u; f_80110590(c); // 8019C9C4
  c->r[3]=c->r[31]+0x00003290u; // 8019C9C8
  {uint32_t ea=c->r[31]+0x00003324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9CC
  c->lr=0x8019C9D4u; f_80110560(c); // 8019C9D0
  c->r[3]=c->r[31]+0x00003290u; // 8019C9D4
  {uint32_t ea=c->r[31]+0x0000332Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9D8
  c->lr=0x8019C9E0u; f_80110568(c); // 8019C9DC
  c->r[3]=c->r[31]+0x00003290u; // 8019C9E0
  {uint32_t ea=c->r[31]+0x00003338u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9E4
  c->lr=0x8019C9ECu; f_80110590(c); // 8019C9E8
  c->r[3]=c->r[31]+0x000032D8u; // 8019C9EC
  {uint32_t ea=c->r[31]+0x00003330u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9F0
  c->lr=0x8019C9F8u; f_80110560(c); // 8019C9F4
  c->r[3]=c->r[31]+0x000032D8u; // 8019C9F8
  {uint32_t ea=c->r[31]+0x00003334u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019C9FC
  c->lr=0x8019CA04u; f_80110568(c); // 8019CA00
  c->r[3]=c->r[31]+0x000032D8u; // 8019CA04
  {uint32_t ea=c->r[31]+0x00003338u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA08
  c->lr=0x8019CA10u; f_80110590(c); // 8019CA0C
  goto L_8019CA80; // 8019CA10
L_8019CA14:;
  c->r[3]=c->r[3]+0x00003248u; // 8019CA14
  {uint32_t ea=c->r[31]+0x00003328u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA18
  c->lr=0x8019CA20u; f_80110560(c); // 8019CA1C
  c->r[3]=c->r[31]+0x00003248u; // 8019CA20
  {uint32_t ea=c->r[31]+0x00003320u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA24
  c->lr=0x8019CA2Cu; f_80110568(c); // 8019CA28
  c->r[3]=c->r[31]+0x00003248u; // 8019CA2C
  {uint32_t ea=c->r[31]+0x0000333Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA30
  c->lr=0x8019CA38u; f_80110590(c); // 8019CA34
  c->r[3]=c->r[31]+0x00003290u; // 8019CA38
  {uint32_t ea=c->r[31]+0x0000332Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA3C
  c->lr=0x8019CA44u; f_80110560(c); // 8019CA40
  c->r[3]=c->r[31]+0x00003290u; // 8019CA44
  {uint32_t ea=c->r[31]+0x00003324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA48
  c->lr=0x8019CA50u; f_80110568(c); // 8019CA4C
  c->r[3]=c->r[31]+0x00003290u; // 8019CA50
  {uint32_t ea=c->r[31]+0x0000333Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA54
  c->lr=0x8019CA5Cu; f_80110590(c); // 8019CA58
  c->r[3]=c->r[31]+0x000032D8u; // 8019CA5C
  {uint32_t ea=c->r[31]+0x00003334u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA60
  c->lr=0x8019CA68u; f_80110560(c); // 8019CA64
  c->r[3]=c->r[31]+0x000032D8u; // 8019CA68
  {uint32_t ea=c->r[31]+0x00003330u; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA6C
  c->lr=0x8019CA74u; f_80110568(c); // 8019CA70
  c->r[3]=c->r[31]+0x000032D8u; // 8019CA74
  {uint32_t ea=c->r[31]+0x0000333Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8019CA78
  c->lr=0x8019CA80u; f_80110590(c); // 8019CA7C
L_8019CA80:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CA80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CA84
  c->lr=c->r[0]; // 8019CA88
  c->r[1]=c->r[1]+0x00000010u; // 8019CA8C
  return; // 8019CA90
}

// fn_8019CA94
void f_8019CA94(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00003330u; WF32(ea,c->f[1]);} // 8019CA94
  return; // 8019CA98
}

// fn_8019CA9C
void f_8019CA9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00003334u; WF32(ea,c->f[1]);} // 8019CA9C
  return; // 8019CAA0
}

// fn_8019CAA4
void f_8019CAA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00003338u; WF32(ea,c->f[1]);} // 8019CAA4
  return; // 8019CAA8
}

// fn_8019CAAC
void f_8019CAAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000333Cu; WF32(ea,c->f[1]);} // 8019CAAC
  return; // 8019CAB0
}

// fn_8019CAB4
void f_8019CAB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CAB4
  c->r[0]=c->lr; // 8019CAB8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019CABC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8019CAC0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8019CAC4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8019CAC8
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 8019CACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CAD0
  c->r[31]=c->r[3]|c->r[3]; // 8019CAD4
  c->f[31]=c->f[1]; // 8019CAD8
  c->f[30]=c->f[2]; // 8019CADC
  c->lr=0x8019CAE4u; f_8005D2E8(c); // 8019CAE0
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019CAE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8019CAE8
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 8019CAEC
  c->lr=0x8019CAF4u; f_8005D314(c); // 8019CAF0
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019CAF4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8019CAF8
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 8019CAFC
  {uint32_t ea=c->r[31]+0x00003320u; WF32(ea,c->f[31]);} // 8019CB00
  {uint32_t ea=c->r[31]+0x00003324u; WF32(ea,c->f[0]);} // 8019CB04
  c->r[0]=0u+0x00000028u; // 8019CB08
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8019CB0C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8019CB10
  c->r[0]=0u+0x00000018u; // 8019CB14
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8019CB18
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8019CB1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CB20
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019CB24
  c->lr=c->r[0]; // 8019CB28
  c->r[1]=c->r[1]+0x00000030u; // 8019CB2C
  return; // 8019CB30
}

// fn_8019CB34
void f_8019CB34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CB34
  c->r[0]=c->lr; // 8019CB38
  W32(c->r[1]+0x00000034u,c->r[0]); // 8019CB3C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8019CB40
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8019CB44
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 8019CB48
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 8019CB4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CB50
  c->r[31]=c->r[3]|c->r[3]; // 8019CB54
  c->f[31]=c->f[1]; // 8019CB58
  c->f[30]=c->f[2]; // 8019CB5C
  c->lr=0x8019CB64u; f_8005D2E8(c); // 8019CB60
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019CB64
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8019CB68
  c->f[31]=c->ps1[31]=S(c->f[31]-c->f[0]); // 8019CB6C
  c->lr=0x8019CB74u; f_8005D314(c); // 8019CB70
  {uint32_t ea=c->r[2]+0xFFFF9224u; c->f[0]=c->ps1[0]=RF32(ea);} // 8019CB74
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8019CB78
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[0]); // 8019CB7C
  {uint32_t ea=c->r[31]+0x00003328u; WF32(ea,c->f[31]);} // 8019CB80
  {uint32_t ea=c->r[31]+0x0000332Cu; WF32(ea,c->f[0]);} // 8019CB84
  c->r[0]=0u+0x00000028u; // 8019CB88
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8019CB8C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8019CB90
  c->r[0]=0u+0x00000018u; // 8019CB94
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8019CB98
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 8019CB9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CBA0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8019CBA4
  c->lr=c->r[0]; // 8019CBA8
  c->r[1]=c->r[1]+0x00000030u; // 8019CBAC
  return; // 8019CBB0
}

// fn_8019CBB4
void f_8019CBB4(Ctx* __restrict c) {
  W32(c->r[3]+0x000001F0u,c->r[4]); // 8019CBB4
  return; // 8019CBB8
}

// fn_8019CBBC
void f_8019CBBC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFF4Cu; // 8019CBBC
  f_8019C808(c); return; // 8019CBC0
}

// fn_8019CBC4
void f_8019CBC4(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 8019CBC4
  c->r[3]=c->r[3]+0x00000718u; // 8019CBC8
  return; // 8019CBCC
}

// fn_8019CBD0
void f_8019CBD0(Ctx* __restrict c) {
  f_8019CCE8(c); return; // 8019CBD0
}

// fn_8019CBD4
void f_8019CBD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CBD4
  c->r[0]=c->lr; // 8019CBD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CBDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CBE0
  c->r[31]=c->r[3]|c->r[3]; // 8019CBE4
  c->lr=0x8019CBECu; f_8019CBD0(c); // 8019CBE8
  c->r[4]=c->r[3]|c->r[3]; // 8019CBEC
  c->r[3]=c->r[31]|c->r[31]; // 8019CBF0
  c->r[4]=R32(c->r[4]+0x00000004u); // 8019CBF4
  c->lr=0x8019CBFCu; f_8019CD04(c); // 8019CBF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CBFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CC00
  c->lr=c->r[0]; // 8019CC04
  c->r[1]=c->r[1]+0x00000010u; // 8019CC08
  return; // 8019CC0C
}

// fn_8019CC10
void f_8019CC10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CC10
  c->r[0]=c->lr; // 8019CC14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CC18
  c->lr=0x8019CC20u; f_8019CBD0(c); // 8019CC1C
  c->r[3]=R32(c->r[3]+0x00000038u); // 8019CC20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CC24
  c->lr=c->r[0]; // 8019CC28
  c->r[1]=c->r[1]+0x00000010u; // 8019CC2C
  return; // 8019CC30
}

// fn_8019CC34
void f_8019CC34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CC34
  c->r[0]=c->lr; // 8019CC38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CC3C
  c->lr=0x8019CC44u; f_8019CBD0(c); // 8019CC40
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8019CC44
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CC48
  c->lr=c->r[0]; // 8019CC4C
  c->r[1]=c->r[1]+0x00000010u; // 8019CC50
  return; // 8019CC54
}

// fn_8019CC58
void f_8019CC58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CC58
  c->r[0]=c->lr; // 8019CC5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CC60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CC64
  c->r[31]=c->r[5]|c->r[5]; // 8019CC68
  c->lr=0x8019CC70u; f_8019CBD0(c); // 8019CC6C
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8019CC70
  c->r[3]=c->r[3]+c->r[0]; // 8019CC74
  c->r[0]=R32(c->r[3]+0x00000014u); // 8019CC78
  cmps(c,0,(int32_t)c->r[0],3); // 8019CC7C
  if (!crb(c,0)) { goto L_8019CC90; } // 8019CC80
  cmps(c,0,(int32_t)c->r[0],0); // 8019CC84
  if (!crb(c,0)) { goto L_8019CC9C; } // 8019CC88
  goto L_8019CCAC; // 8019CC8C
L_8019CC90:;
  cmps(c,0,(int32_t)c->r[0],6); // 8019CC90
  if (!crb(c,0)) { goto L_8019CCAC; } // 8019CC94
  goto L_8019CCA4; // 8019CC98
L_8019CC9C:;
  c->r[3]=0u+0x00000000u; // 8019CC9C
  goto L_8019CCB0; // 8019CCA0
L_8019CCA4:;
  c->r[3]=0u+0x00000001u; // 8019CCA4
  goto L_8019CCB0; // 8019CCA8
L_8019CCAC:;
  c->r[3]=0u+0x00000000u; // 8019CCAC
L_8019CCB0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CCB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CCB4
  c->lr=c->r[0]; // 8019CCB8
  c->r[1]=c->r[1]+0x00000010u; // 8019CCBC
  return; // 8019CCC0
}

// fn_8019CCC4
void f_8019CCC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CCC4
  c->r[0]=c->lr; // 8019CCC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CCCC
  c->lr=0x8019CCD4u; f_8019CBD0(c); // 8019CCD0
  c->r[3]=R32(c->r[3]+0x00000044u); // 8019CCD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CCD8
  c->lr=c->r[0]; // 8019CCDC
  c->r[1]=c->r[1]+0x00000010u; // 8019CCE0
  return; // 8019CCE4
}

// fn_8019CCE8
void f_8019CCE8(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 8019CCE8
  c->r[3]=R32(c->r[3]+0x00000034u); // 8019CCEC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8019CCF0
  c->r[0]=c->r[4]-c->r[0]; // 8019CCF4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)252); // 8019CCF8
  c->r[3]=c->r[5]+c->r[0]; // 8019CCFC
  return; // 8019CD00
}

// fn_8019CD04
void f_8019CD04(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 8019CD04
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8019CD08
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8019CD0C
  c->r[3]=c->r[3]+c->r[0]; // 8019CD10
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 8019CD14
  return; // 8019CD18
}

// fn_8019CD1C
void f_8019CD1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CD1C
  c->r[0]=c->lr; // 8019CD20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CD24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CD28
  c->r[31]=c->r[3]|c->r[3]; // 8019CD2C
  c->lr=0x8019CD34u; f_80111CF0(c); // 8019CD30
  cmps(c,0,(int32_t)c->r[3],0); // 8019CD34
  if (crb(c,2)) { goto L_8019CE90; } // 8019CD38
  cmpu(c,0,c->r[31],0x00000007u); // 8019CD3C
  if (crb(c,1)) { goto L_8019CEA0; } // 8019CD40
  c->r[3]=0u+0x80470000u; // 8019CD44
  c->r[3]=c->r[3]+0xFFFFF030u; // 8019CD48
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8019CD4C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8019CD50
  c->ctr=c->r[3]; // 8019CD54
  if (true) { switch (c->ctr) { case 0x8019CD5Cu: goto L_8019CD5C; case 0x8019CD88u: goto L_8019CD88; case 0x8019CDB4u: goto L_8019CDB4; case 0x8019CDE0u: goto L_8019CDE0; case 0x8019CE0Cu: goto L_8019CE0C; case 0x8019CE38u: goto L_8019CE38; case 0x8019CE64u: goto L_8019CE64; case 0x8019CEA0u: goto L_8019CEA0; default: break; } dispatch(c,c->ctr); return; } // 8019CD58
L_8019CD5C:;
  c->lr=0x8019CD60u; f_8011B03C(c); // 8019CD5C
  c->r[31]=c->r[3]|c->r[3]; // 8019CD60
  c->lr=0x8019CD68u; f_80047C90(c); // 8019CD64
  c->r[4]=c->r[31]|c->r[31]; // 8019CD68
  c->lr=0x8019CD70u; f_80058EA4(c); // 8019CD6C
  c->r[4]=0u+0x00000800u; // 8019CD70
  c->lr=0x8019CD78u; f_80057C1C(c); // 8019CD74
  cmps(c,0,(int32_t)c->r[3],0); // 8019CD78
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CD7C
  c->r[3]=0u+0x00000001u; // 8019CD80
  goto L_8019CEA4; // 8019CD84
L_8019CD88:;
  c->lr=0x8019CD8Cu; f_8011B03C(c); // 8019CD88
  c->r[31]=c->r[3]|c->r[3]; // 8019CD8C
  c->lr=0x8019CD94u; f_80047C90(c); // 8019CD90
  c->r[4]=c->r[31]|c->r[31]; // 8019CD94
  c->lr=0x8019CD9Cu; f_80058EA4(c); // 8019CD98
  c->r[4]=0u+0x00000400u; // 8019CD9C
  c->lr=0x8019CDA4u; f_80057C1C(c); // 8019CDA0
  cmps(c,0,(int32_t)c->r[3],0); // 8019CDA4
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CDA8
  c->r[3]=0u+0x00000001u; // 8019CDAC
  goto L_8019CEA4; // 8019CDB0
L_8019CDB4:;
  c->lr=0x8019CDB8u; f_8011B03C(c); // 8019CDB4
  c->r[31]=c->r[3]|c->r[3]; // 8019CDB8
  c->lr=0x8019CDC0u; f_80047C90(c); // 8019CDBC
  c->r[4]=c->r[31]|c->r[31]; // 8019CDC0
  c->lr=0x8019CDC8u; f_80058EA4(c); // 8019CDC4
  c->r[4]=0u+0x00000008u; // 8019CDC8
  c->lr=0x8019CDD0u; f_80057C1C(c); // 8019CDCC
  cmps(c,0,(int32_t)c->r[3],0); // 8019CDD0
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CDD4
  c->r[3]=0u+0x00000001u; // 8019CDD8
  goto L_8019CEA4; // 8019CDDC
L_8019CDE0:;
  c->lr=0x8019CDE4u; f_8011B03C(c); // 8019CDE0
  c->r[31]=c->r[3]|c->r[3]; // 8019CDE4
  c->lr=0x8019CDECu; f_80047C90(c); // 8019CDE8
  c->r[4]=c->r[31]|c->r[31]; // 8019CDEC
  c->lr=0x8019CDF4u; f_80058EA4(c); // 8019CDF0
  c->r[4]=0u+0x00000004u; // 8019CDF4
  c->lr=0x8019CDFCu; f_80057C1C(c); // 8019CDF8
  cmps(c,0,(int32_t)c->r[3],0); // 8019CDFC
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CE00
  c->r[3]=0u+0x00000001u; // 8019CE04
  goto L_8019CEA4; // 8019CE08
L_8019CE0C:;
  c->lr=0x8019CE10u; f_8011B03C(c); // 8019CE0C
  c->r[31]=c->r[3]|c->r[3]; // 8019CE10
  c->lr=0x8019CE18u; f_80047C90(c); // 8019CE14
  c->r[4]=c->r[31]|c->r[31]; // 8019CE18
  c->lr=0x8019CE20u; f_80058EA4(c); // 8019CE1C
  c->r[4]=0u+0x00000002u; // 8019CE20
  c->lr=0x8019CE28u; f_80057C1C(c); // 8019CE24
  cmps(c,0,(int32_t)c->r[3],0); // 8019CE28
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CE2C
  c->r[3]=0u+0x00000001u; // 8019CE30
  goto L_8019CEA4; // 8019CE34
L_8019CE38:;
  c->lr=0x8019CE3Cu; f_8011B03C(c); // 8019CE38
  c->r[31]=c->r[3]|c->r[3]; // 8019CE3C
  c->lr=0x8019CE44u; f_80047C90(c); // 8019CE40
  c->r[4]=c->r[31]|c->r[31]; // 8019CE44
  c->lr=0x8019CE4Cu; f_80058EA4(c); // 8019CE48
  c->r[4]=0u+0x00000001u; // 8019CE4C
  c->lr=0x8019CE54u; f_80057C1C(c); // 8019CE50
  cmps(c,0,(int32_t)c->r[3],0); // 8019CE54
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CE58
  c->r[3]=0u+0x00000001u; // 8019CE5C
  goto L_8019CEA4; // 8019CE60
L_8019CE64:;
  c->lr=0x8019CE68u; f_8011B03C(c); // 8019CE64
  c->r[31]=c->r[3]|c->r[3]; // 8019CE68
  c->lr=0x8019CE70u; f_80047C90(c); // 8019CE6C
  c->r[4]=c->r[31]|c->r[31]; // 8019CE70
  c->lr=0x8019CE78u; f_80058EA4(c); // 8019CE74
  c->r[4]=0u+0x00000010u; // 8019CE78
  c->lr=0x8019CE80u; f_80057C1C(c); // 8019CE7C
  cmps(c,0,(int32_t)c->r[3],0); // 8019CE80
  if (crb(c,2)) { goto L_8019CEA0; } // 8019CE84
  c->r[3]=0u+0x00000001u; // 8019CE88
  goto L_8019CEA4; // 8019CE8C
L_8019CE90:;
  c->lr=0x8019CE94u; f_8007B524(c); // 8019CE90
  c->r[4]=c->r[31]|c->r[31]; // 8019CE94
  c->lr=0x8019CE9Cu; f_800A4BE8(c); // 8019CE98
  goto L_8019CEA4; // 8019CE9C
L_8019CEA0:;
  c->r[3]=0u+0x00000000u; // 8019CEA0
L_8019CEA4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CEA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CEA8
  c->lr=c->r[0]; // 8019CEAC
  c->r[1]=c->r[1]+0x00000010u; // 8019CEB0
  return; // 8019CEB4
}

// fn_8019CEB8
void f_8019CEB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CEB8
  c->r[0]=c->lr; // 8019CEBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CEC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CEC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019CEC8
  c->r[0]=R32(c->r[13]+0xFFFFBAE0u); // 8019CECC
  cmps(c,0,(int32_t)c->r[0],0); // 8019CED0
  if (!crb(c,2)) { goto L_8019CF0C; } // 8019CED4
  c->lr=0x8019CEDCu; f_80056B5C(c); // 8019CED8
  c->r[30]=c->r[3]|c->r[3]; // 8019CEDC
  c->lr=0x8019CEE4u; f_8005DEE8(c); // 8019CEE0
  c->lr=0x8019CEE8u; f_80056B54(c); // 8019CEE4
  c->r[3]=0u+0x00000014u; // 8019CEE8
  c->lr=0x8019CEF0u; f_80047B64(c); // 8019CEEC
  c->r[31]=c->r[3]|c->r[3]; // 8019CEF0
  cmps(c,0,(int32_t)c->r[3],0); // 8019CEF4
  if (crb(c,2)) { goto L_8019CF00; } // 8019CEF8
  c->lr=0x8019CF00u; f_8019CF28(c); // 8019CEFC
L_8019CF00:;
  W32(c->r[13]+0xFFFFBAE0u,c->r[31]); // 8019CF00
  c->r[3]=c->r[30]|c->r[30]; // 8019CF04
  c->lr=0x8019CF0Cu; f_80056B54(c); // 8019CF08
L_8019CF0C:;
  c->r[3]=R32(c->r[13]+0xFFFFBAE0u); // 8019CF0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CF10
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019CF14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CF18
  c->lr=c->r[0]; // 8019CF1C
  c->r[1]=c->r[1]+0x00000010u; // 8019CF20
  return; // 8019CF24
}

// fn_8019CF28
void f_8019CF28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CF28
  c->r[0]=c->lr; // 8019CF2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019CF30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019CF34
  c->r[31]=c->r[3]|c->r[3]; // 8019CF38
  c->r[0]=0u+0x00000020u; // 8019CF3C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8019CF40
  c->r[0]=0u+0x00000000u; // 8019CF44
  W32(c->r[3]+0x00000000u,c->r[0]); // 8019CF48
  c->r[3]=c->r[3]+0x00000008u; // 8019CF4C
  c->r[4]=0u+0x0000000Cu; // 8019CF50
  c->lr=0x8019CF58u; f_8028CA58(c); // 8019CF54
  c->r[3]=c->r[31]|c->r[31]; // 8019CF58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019CF5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019CF60
  c->lr=c->r[0]; // 8019CF64
  c->r[1]=c->r[1]+0x00000010u; // 8019CF68
  return; // 8019CF6C
}

// fn_8019CF70
void f_8019CF70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019CF70
  c->r[0]=c->lr; // 8019CF74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019CF78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019CF7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019CF80
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019CF84
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019CF88
  c->r[28]=c->r[3]|c->r[3]; // 8019CF8C
  c->lr=0x8019CF94u; f_80056B5C(c); // 8019CF90
  c->r[30]=c->r[3]|c->r[3]; // 8019CF94
  c->lr=0x8019CF9Cu; f_8005DEE8(c); // 8019CF98
  c->lr=0x8019CFA0u; f_80056B54(c); // 8019CF9C
  c->r[3]=0u+0x0000001Cu; // 8019CFA0
  c->lr=0x8019CFA8u; f_80047B64(c); // 8019CFA4
  c->r[31]=c->r[3]|c->r[3]; // 8019CFA8
  cmps(c,0,(int32_t)c->r[3],0); // 8019CFAC
  if (crb(c,2)) { goto L_8019CFB8; } // 8019CFB0
  c->lr=0x8019CFB8u; f_80130030(c); // 8019CFB4
L_8019CFB8:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 8019CFB8
  c->r[3]=c->r[30]|c->r[30]; // 8019CFBC
  c->lr=0x8019CFC4u; f_80056B54(c); // 8019CFC0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019CFC4
  c->r[4]=R32(c->r[28]+0x00000004u); // 8019CFC8
  c->lr=0x8019CFD0u; f_801300C8(c); // 8019CFCC
  c->r[30]=0u+0x00000000u; // 8019CFD0
  goto L_8019D048; // 8019CFD4
L_8019CFD8:;
  c->lr=0x8019CFDCu; f_80056B5C(c); // 8019CFD8
  c->r[29]=c->r[3]|c->r[3]; // 8019CFDC
  c->lr=0x8019CFE4u; f_8005DEE8(c); // 8019CFE0
  c->lr=0x8019CFE8u; f_80056B54(c); // 8019CFE4
  c->r[3]=0u+0x00000014u; // 8019CFE8
  c->lr=0x8019CFF0u; f_80047B64(c); // 8019CFEC
  c->r[31]=c->r[3]|c->r[3]; // 8019CFF0
  cmps(c,0,(int32_t)c->r[3],0); // 8019CFF4
  if (crb(c,2)) { goto L_8019D000; } // 8019CFF8
  c->lr=0x8019D000u; f_8019D310(c); // 8019CFFC
L_8019D000:;
  c->r[3]=c->r[29]|c->r[29]; // 8019D000
  c->lr=0x8019D008u; f_80056B54(c); // 8019D004
  c->r[3]=c->r[31]|c->r[31]; // 8019D008
  c->r[4]=0u+0x00000000u; // 8019D00C
  c->r[5]=0u+0x00000014u; // 8019D010
  c->lr=0x8019D018u; f_800060B8(c); // 8019D014
  c->r[3]=c->r[31]|c->r[31]; // 8019D018
  c->r[4]=c->r[30]|c->r[30]; // 8019D01C
  c->lr=0x8019D024u; f_8019D308(c); // 8019D020
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019D024
  c->r[4]=c->r[31]|c->r[31]; // 8019D028
  c->r[5]=c->r[30]|c->r[30]; // 8019D02C
  c->r[6]=0u+0x00000000u; // 8019D030
  c->lr=0x8019D038u; f_801300D0(c); // 8019D034
  c->r[4]=c->r[3]|c->r[3]; // 8019D038
  c->r[3]=c->r[31]|c->r[31]; // 8019D03C
  c->lr=0x8019D044u; f_8019D300(c); // 8019D040
  c->r[30]=c->r[30]+0x00000001u; // 8019D044
L_8019D048:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8019D048
  cmpu(c,0,c->r[30],c->r[0]); // 8019D04C
  if (crb(c,0)) { IRQCHK(c); goto L_8019CFD8; } // 8019D050
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019D054
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019D058
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019D05C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019D060
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019D064
  c->lr=c->r[0]; // 8019D068
  c->r[1]=c->r[1]+0x00000020u; // 8019D06C
  return; // 8019D070
}

// fn_8019D074
void f_8019D074(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D074
  c->r[0]=c->lr; // 8019D078
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019D07C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019D080
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019D084
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019D088
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019D08C
  c->r[28]=c->r[3]|c->r[3]; // 8019D090
  c->r[31]=0u+0x00000000u; // 8019D094
  goto L_8019D0E4; // 8019D098
L_8019D09C:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019D09C
  c->r[4]=c->r[31]|c->r[31]; // 8019D0A0
  c->lr=0x8019D0A8u; f_80130128(c); // 8019D0A4
  c->r[30]=c->r[3]|c->r[3]; // 8019D0A8
  cmps(c,0,(int32_t)c->r[3],0); // 8019D0AC
  if (crb(c,2)) { goto L_8019D0E0; } // 8019D0B0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019D0B4
  c->r[4]=c->r[30]|c->r[30]; // 8019D0B8
  c->lr=0x8019D0C0u; f_801300D4(c); // 8019D0BC
  c->lr=0x8019D0C4u; f_80056B5C(c); // 8019D0C0
  c->r[29]=c->r[3]|c->r[3]; // 8019D0C4
  c->lr=0x8019D0CCu; f_8005DEE8(c); // 8019D0C8
  c->lr=0x8019D0D0u; f_80056B54(c); // 8019D0CC
  c->r[3]=c->r[30]|c->r[30]; // 8019D0D0
  c->lr=0x8019D0D8u; f_80047B20(c); // 8019D0D4
  c->r[3]=c->r[29]|c->r[29]; // 8019D0D8
  c->lr=0x8019D0E0u; f_80056B54(c); // 8019D0DC
L_8019D0E0:;
  c->r[31]=c->r[31]+0x00000001u; // 8019D0E0
L_8019D0E4:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8019D0E4
  cmpu(c,0,c->r[31],c->r[0]); // 8019D0E8
  if (crb(c,0)) { IRQCHK(c); goto L_8019D09C; } // 8019D0EC
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019D0F0
  cmps(c,0,(int32_t)c->r[3],0); // 8019D0F4
  if (crb(c,2)) { goto L_8019D140; } // 8019D0F8
  c->lr=0x8019D100u; f_801300CC(c); // 8019D0FC
  c->lr=0x8019D104u; f_80056B5C(c); // 8019D100
  c->r[29]=c->r[3]|c->r[3]; // 8019D104
  c->lr=0x8019D10Cu; f_8005DEE8(c); // 8019D108
  c->lr=0x8019D110u; f_80056B54(c); // 8019D10C
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019D110
  cmps(c,0,(int32_t)c->r[3],0); // 8019D114
  if (crb(c,2)) { goto L_8019D130; } // 8019D118
  c->r[4]=0u+0x00000001u; // 8019D11C
  c->r[12]=R32(c->r[3]+0x00000018u); // 8019D120
  c->r[12]=R32(c->r[12]+0x00000008u); // 8019D124
  c->ctr=c->r[12]; // 8019D128
  if (true) { c->lr=0x8019D130u; dispatch(c,c->ctr); } // 8019D12C
L_8019D130:;
  c->r[3]=c->r[29]|c->r[29]; // 8019D130
  c->lr=0x8019D138u; f_80056B54(c); // 8019D134
  c->r[0]=0u+0x00000000u; // 8019D138
  W32(c->r[28]+0x00000000u,c->r[0]); // 8019D13C
L_8019D140:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019D140
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019D144
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019D148
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019D14C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019D150
  c->lr=c->r[0]; // 8019D154
  c->r[1]=c->r[1]+0x00000020u; // 8019D158
  return; // 8019D15C
}

// fn_8019D160
void f_8019D160(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D160
  c->r[0]=c->lr; // 8019D164
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D168
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D16C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019D170
  c->r[30]=c->r[3]|c->r[3]; // 8019D174
  c->r[3]=c->r[3]+0x00000008u; // 8019D178
  c->lr=0x8019D180u; f_8004B018(c); // 8019D17C
  c->r[31]=c->r[3]|c->r[3]; // 8019D180
  goto L_8019D1B8; // 8019D184
L_8019D188:;
  c->r[3]=c->r[31]|c->r[31]; // 8019D188
  c->lr=0x8019D190u; f_8019D324(c); // 8019D18C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D190
  if (crb(c,2)) { goto L_8019D1A8; } // 8019D194
  c->r[12]=R32(c->r[3]+0x0000004Cu); // 8019D198
  c->r[12]=R32(c->r[12]+0x00000020u); // 8019D19C
  c->ctr=c->r[12]; // 8019D1A0
  if (true) { c->lr=0x8019D1A8u; dispatch(c,c->ctr); } // 8019D1A4
L_8019D1A8:;
  c->r[3]=c->r[30]+0x00000008u; // 8019D1A8
  c->r[4]=c->r[31]|c->r[31]; // 8019D1AC
  c->lr=0x8019D1B4u; f_8028CCD8(c); // 8019D1B0
  c->r[31]=c->r[3]|c->r[3]; // 8019D1B4
L_8019D1B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8019D1B8
  if (!crb(c,2)) { IRQCHK(c); goto L_8019D188; } // 8019D1BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D1C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019D1C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D1C8
  c->lr=c->r[0]; // 8019D1CC
  c->r[1]=c->r[1]+0x00000010u; // 8019D1D0
  return; // 8019D1D4
}

// fn_8019D1D8
void f_8019D1D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D1D8
  c->r[0]=c->lr; // 8019D1DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019D1E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019D1E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019D1E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019D1EC
  c->r[29]=c->r[3]|c->r[3]; // 8019D1F0
  c->r[30]=c->r[4]|c->r[4]; // 8019D1F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 8019D1F8
  c->lr=0x8019D200u; f_80130120(c); // 8019D1FC
  c->r[31]=c->r[3]|c->r[3]; // 8019D200
  c->lr=0x8019D208u; f_80130F0C(c); // 8019D204
  c->r[4]=c->r[3]|c->r[3]; // 8019D208
  c->r[3]=c->r[30]|c->r[30]; // 8019D20C
  c->lr=0x8019D214u; f_8019D334(c); // 8019D210
  c->r[3]=c->r[31]|c->r[31]; // 8019D214
  c->r[4]=c->r[30]|c->r[30]; // 8019D218
  c->lr=0x8019D220u; f_8019D32C(c); // 8019D21C
  c->r[3]=c->r[29]+0x00000008u; // 8019D220
  c->r[4]=c->r[31]|c->r[31]; // 8019D224
  c->lr=0x8019D22Cu; f_8028CA70(c); // 8019D228
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019D22C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019D230
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019D234
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019D238
  c->lr=c->r[0]; // 8019D23C
  c->r[1]=c->r[1]+0x00000020u; // 8019D240
  return; // 8019D244
}

// fn_8019D248
void f_8019D248(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D248
  c->r[0]=c->lr; // 8019D24C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8019D250
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8019D254
  W32(c->r[1]+0x00000018u,c->r[30]); // 8019D258
  W32(c->r[1]+0x00000014u,c->r[29]); // 8019D25C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8019D260
  c->r[28]=c->r[3]|c->r[3]; // 8019D264
  c->r[29]=c->r[4]|c->r[4]; // 8019D268
  cmps(c,0,(int32_t)c->r[4],0); // 8019D26C
  if (crb(c,2)) { goto L_8019D2E0; } // 8019D270
  c->r[3]=c->r[29]|c->r[29]; // 8019D274
  c->lr=0x8019D27Cu; f_8019D33C(c); // 8019D278
  c->r[31]=c->r[3]|c->r[3]; // 8019D27C
  c->r[3]=c->r[28]+0x00000008u; // 8019D280
  c->lr=0x8019D288u; f_8004B018(c); // 8019D284
  c->r[30]=c->r[3]|c->r[3]; // 8019D288
  goto L_8019D2B0; // 8019D28C
L_8019D290:;
  c->r[3]=c->r[30]|c->r[30]; // 8019D290
  c->lr=0x8019D298u; f_80130F0C(c); // 8019D294
  cmpu(c,0,c->r[31],c->r[3]); // 8019D298
  if (crb(c,2)) { goto L_8019D2B8; } // 8019D29C
  c->r[3]=c->r[28]+0x00000008u; // 8019D2A0
  c->r[4]=c->r[30]|c->r[30]; // 8019D2A4
  c->lr=0x8019D2ACu; f_8028CCD8(c); // 8019D2A8
  c->r[30]=c->r[3]|c->r[3]; // 8019D2AC
L_8019D2B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019D2B0
  if (!crb(c,2)) { IRQCHK(c); goto L_8019D290; } // 8019D2B4
L_8019D2B8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8019D2B8
  if (crb(c,2)) { goto L_8019D2E0; } // 8019D2BC
  c->r[3]=c->r[28]+0x00000008u; // 8019D2C0
  c->r[4]=c->r[30]|c->r[30]; // 8019D2C4
  c->lr=0x8019D2CCu; f_8028CC6C(c); // 8019D2C8
  c->r[3]=c->r[29]|c->r[29]; // 8019D2CC
  c->lr=0x8019D2D4u; f_8019D33C(c); // 8019D2D0
  c->r[4]=c->r[3]|c->r[3]; // 8019D2D4
  c->r[3]=R32(c->r[28]+0x00000000u); // 8019D2D8
  c->lr=0x8019D2E0u; f_80130124(c); // 8019D2DC
L_8019D2E0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8019D2E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8019D2E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8019D2E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8019D2EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8019D2F0
  c->lr=c->r[0]; // 8019D2F4
  c->r[1]=c->r[1]+0x00000020u; // 8019D2F8
  return; // 8019D2FC
}

// fn_8019D300
void f_8019D300(Ctx* __restrict c) {
  W32(c->r[3]+0x00000004u,c->r[4]); // 8019D300
  return; // 8019D304
}

// fn_8019D308
void f_8019D308(Ctx* __restrict c) {
  W32(c->r[3]+0x00000000u,c->r[4]); // 8019D308
  return; // 8019D30C
}

// fn_8019D310
void f_8019D310(Ctx* __restrict c) {
  c->r[0]=0u+0xFFFFFFFFu; // 8019D310
  W32(c->r[3]+0x00000000u,c->r[0]); // 8019D314
  c->r[0]=0u+0x00000000u; // 8019D318
  W32(c->r[3]+0x00000008u,c->r[0]); // 8019D31C
  return; // 8019D320
}

// fn_8019D324
void f_8019D324(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000008u); // 8019D324
  return; // 8019D328
}

// fn_8019D32C
void f_8019D32C(Ctx* __restrict c) {
  W32(c->r[3]+0x00000008u,c->r[4]); // 8019D32C
  return; // 8019D330
}

// fn_8019D334
void f_8019D334(Ctx* __restrict c) {
  W32(c->r[3]+0x000001E0u,c->r[4]); // 8019D334
  return; // 8019D338
}

// fn_8019D33C
void f_8019D33C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000001E0u); // 8019D33C
  return; // 8019D340
}

// fn_8019D344
void f_8019D344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D344
  c->r[0]=c->lr; // 8019D348
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D34C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D350
  c->r[31]=c->r[3]|c->r[3]; // 8019D354
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019D358
  c->lr=0x8019D360u; f_8013A35C(c); // 8019D35C
  c->r[5]=c->r[3]|c->r[3]; // 8019D360
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D364
  c->r[4]=0u+0x00000000u; // 8019D368
  c->lr=0x8019D370u; f_801346B8(c); // 8019D36C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D370
  c->lr=0x8019D378u; f_8013A364(c); // 8019D374
  c->r[5]=c->r[3]|c->r[3]; // 8019D378
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D37C
  c->r[4]=0u+0x00000001u; // 8019D380
  c->lr=0x8019D388u; f_801346B8(c); // 8019D384
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D388
  c->lr=0x8019D390u; f_80134770(c); // 8019D38C
  c->r[4]=c->r[3]|c->r[3]; // 8019D390
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D394
  c->lr=0x8019D39Cu; f_8013C018(c); // 8019D398
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D39C
  c->lr=0x8019D3A4u; f_801346A4(c); // 8019D3A0
  c->r[4]=c->r[3]|c->r[3]; // 8019D3A4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D3A8
  c->lr=0x8019D3B0u; f_8013C1CC(c); // 8019D3AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D3B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D3B4
  c->lr=c->r[0]; // 8019D3B8
  c->r[1]=c->r[1]+0x00000010u; // 8019D3BC
  return; // 8019D3C0
}

// fn_8019D3C4
void f_8019D3C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D3C4
  c->r[0]=c->lr; // 8019D3C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D3CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D3D0
  c->r[31]=c->r[3]|c->r[3]; // 8019D3D4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019D3D8
  c->lr=0x8019D3E0u; f_80137010(c); // 8019D3DC
  cmps(c,0,(int32_t)c->r[3],0); // 8019D3E0
  if (crb(c,2)) { goto L_8019D414; } // 8019D3E4
  c->lr=0x8019D3ECu; f_801E67A8(c); // 8019D3E8
  cmps(c,0,(int32_t)c->r[3],0); // 8019D3EC
  if (!crb(c,2)) { goto L_8019D404; } // 8019D3F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D3F4
  c->r[4]=0u+0x00000000u; // 8019D3F8
  c->lr=0x8019D400u; f_8013A470(c); // 8019D3FC
  goto L_8019D420; // 8019D400
L_8019D404:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D404
  c->r[4]=0u+0x00000000u; // 8019D408
  c->lr=0x8019D410u; f_8013A478(c); // 8019D40C
  goto L_8019D420; // 8019D410
L_8019D414:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D414
  c->r[4]=0u+0x00000000u; // 8019D418
  c->lr=0x8019D420u; f_8013A478(c); // 8019D41C
L_8019D420:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D420
  c->r[4]=0u+0x00000006u; // 8019D424
  c->lr=0x8019D42Cu; f_8013BE58(c); // 8019D428
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D42C
  c->lr=0x8019D434u; f_8013C1EC(c); // 8019D430
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D434
  c->lr=0x8019D43Cu; f_8013A208(c); // 8019D438
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D43C
  c->lr=0x8019D444u; f_80135E14(c); // 8019D440
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D444
  c->lr=0x8019D44Cu; f_801345AC(c); // 8019D448
  c->r[3]=c->r[31]|c->r[31]; // 8019D44C
  c->lr=0x8019D454u; f_8019D344(c); // 8019D450
  c->r[3]=c->r[31]|c->r[31]; // 8019D454
  c->r[4]=0u+0x00000005u; // 8019D458
  c->lr=0x8019D460u; f_8013114C(c); // 8019D45C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D460
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D464
  c->lr=c->r[0]; // 8019D468
  c->r[1]=c->r[1]+0x00000010u; // 8019D46C
  return; // 8019D470
}

// fn_8019D474
void f_8019D474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D474
  c->r[0]=c->lr; // 8019D478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D480
  c->r[31]=c->r[3]|c->r[3]; // 8019D484
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019D488
  c->lr=0x8019D490u; f_8013A350(c); // 8019D48C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D490
  if (crb(c,2)) { goto L_8019D4C0; } // 8019D494
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D498
  c->lr=0x8019D4A0u; f_8013A2D8(c); // 8019D49C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D4A0
  c->lr=0x8019D4A8u; f_801346A4(c); // 8019D4A4
  c->r[4]=c->r[3]|c->r[3]; // 8019D4A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D4AC
  c->lr=0x8019D4B4u; f_8013BF10(c); // 8019D4B0
  c->r[3]=c->r[31]|c->r[31]; // 8019D4B4
  c->r[4]=0u+0x00000008u; // 8019D4B8
  c->lr=0x8019D4C0u; f_8013114C(c); // 8019D4BC
L_8019D4C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D4C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D4C4
  c->lr=c->r[0]; // 8019D4C8
  c->r[1]=c->r[1]+0x00000010u; // 8019D4CC
  return; // 8019D4D0
}

// fn_8019D4D4
void f_8019D4D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D4D4
  c->r[0]=c->lr; // 8019D4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D4DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D4E0
  c->r[31]=c->r[3]|c->r[3]; // 8019D4E4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019D4E8
  c->r[4]=0u+0x00000006u; // 8019D4EC
  c->lr=0x8019D4F4u; f_8013BE58(c); // 8019D4F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D4F4
  c->lr=0x8019D4FCu; f_8013A36C(c); // 8019D4F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D4FC
  c->lr=0x8019D504u; f_80135E14(c); // 8019D500
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D504
  c->lr=0x8019D50Cu; f_801345AC(c); // 8019D508
  c->r[3]=c->r[31]|c->r[31]; // 8019D50C
  c->lr=0x8019D514u; f_8019D344(c); // 8019D510
  c->r[3]=c->r[31]|c->r[31]; // 8019D514
  c->r[4]=0u+0x00000007u; // 8019D518
  c->lr=0x8019D520u; f_8013114C(c); // 8019D51C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D520
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D524
  c->lr=c->r[0]; // 8019D528
  c->r[1]=c->r[1]+0x00000010u; // 8019D52C
  return; // 8019D530
}

// fn_8019D534
void f_8019D534(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D534
  c->r[0]=c->lr; // 8019D538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D53C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D540
  c->r[31]=c->r[3]|c->r[3]; // 8019D544
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019D548
  c->lr=0x8019D550u; f_8013A468(c); // 8019D54C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D550
  if (crb(c,2)) { goto L_8019D580; } // 8019D554
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D558
  c->lr=0x8019D560u; f_8013A418(c); // 8019D55C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D560
  c->lr=0x8019D568u; f_801346A4(c); // 8019D564
  c->r[4]=c->r[3]|c->r[3]; // 8019D568
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D56C
  c->lr=0x8019D574u; f_8013BF10(c); // 8019D570
  c->r[3]=c->r[31]|c->r[31]; // 8019D574
  c->r[4]=0u+0x00000008u; // 8019D578
  c->lr=0x8019D580u; f_8013114C(c); // 8019D57C
L_8019D580:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D580
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D584
  c->lr=c->r[0]; // 8019D588
  c->r[1]=c->r[1]+0x00000010u; // 8019D58C
  return; // 8019D590
}

// fn_8019D594
void f_8019D594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D594
  c->r[0]=c->lr; // 8019D598
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D59C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D5A0
  c->r[31]=c->r[3]|c->r[3]; // 8019D5A4
  c->r[3]=0u+0x00000001u; // 8019D5A8
  c->lr=0x8019D5B0u; f_8019CD1C(c); // 8019D5AC
  cmps(c,0,(int32_t)c->r[3],0); // 8019D5B0
  if (crb(c,2)) { goto L_8019D5D0; } // 8019D5B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D5B8
  c->lr=0x8019D5C0u; f_801345A4(c); // 8019D5BC
  c->r[3]=c->r[31]|c->r[31]; // 8019D5C0
  c->r[4]=0u+0x0000000Du; // 8019D5C4
  c->lr=0x8019D5CCu; f_8013114C(c); // 8019D5C8
  goto L_8019D70C; // 8019D5CC
L_8019D5D0:;
  c->r[3]=0u+0x00000003u; // 8019D5D0
  c->lr=0x8019D5D8u; f_8019CD1C(c); // 8019D5D4
  cmps(c,0,(int32_t)c->r[3],0); // 8019D5D8
  if (crb(c,2)) { goto L_8019D5E8; } // 8019D5DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D5E0
  c->lr=0x8019D5E8u; f_80134630(c); // 8019D5E4
L_8019D5E8:;
  c->r[3]=0u+0x00000004u; // 8019D5E8
  c->lr=0x8019D5F0u; f_8019CD1C(c); // 8019D5EC
  cmps(c,0,(int32_t)c->r[3],0); // 8019D5F0
  if (crb(c,2)) { goto L_8019D600; } // 8019D5F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D5F8
  c->lr=0x8019D600u; f_801345BC(c); // 8019D5FC
L_8019D600:;
  c->r[3]=0u+0x00000006u; // 8019D600
  c->lr=0x8019D608u; f_8019CD1C(c); // 8019D604
  cmps(c,0,(int32_t)c->r[3],0); // 8019D608
  if (crb(c,2)) { goto L_8019D618; } // 8019D60C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D610
  c->lr=0x8019D618u; f_8013471C(c); // 8019D614
L_8019D618:;
  c->r[3]=0u+0x00000005u; // 8019D618
  c->lr=0x8019D620u; f_8019CD1C(c); // 8019D61C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D620
  if (crb(c,2)) { goto L_8019D630; } // 8019D624
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D628
  c->lr=0x8019D630u; f_801346C8(c); // 8019D62C
L_8019D630:;
  c->r[3]=0u+0x00000000u; // 8019D630
  c->lr=0x8019D638u; f_8019CD1C(c); // 8019D634
  cmps(c,0,(int32_t)c->r[3],0); // 8019D638
  if (crb(c,2)) { goto L_8019D6DC; } // 8019D63C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D640
  c->lr=0x8019D648u; f_80134770(c); // 8019D644
  cmps(c,0,(int32_t)c->r[3],1); // 8019D648
  if (crb(c,2)) { goto L_8019D6A0; } // 8019D64C
  if (!crb(c,0)) { goto L_8019D6DC; } // 8019D650
  cmps(c,0,(int32_t)c->r[3],0); // 8019D654
  if (!crb(c,0)) { goto L_8019D660; } // 8019D658
  goto L_8019D6DC; // 8019D65C
L_8019D660:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D660
  c->lr=0x8019D668u; f_801346A4(c); // 8019D664
  c->r[4]=c->r[3]|c->r[3]; // 8019D668
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D66C
  c->lr=0x8019D674u; f_8013A354(c); // 8019D670
  cmps(c,0,(int32_t)c->r[3],0); // 8019D674
  if (crb(c,2)) { goto L_8019D688; } // 8019D678
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D67C
  c->lr=0x8019D684u; f_80135F08(c); // 8019D680
  goto L_8019D6DC; // 8019D684
L_8019D688:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D688
  c->lr=0x8019D690u; f_80135E7C(c); // 8019D68C
  c->r[3]=c->r[31]|c->r[31]; // 8019D690
  c->r[4]=0u+0x00000009u; // 8019D694
  c->lr=0x8019D69Cu; f_8013114C(c); // 8019D698
  goto L_8019D6DC; // 8019D69C
L_8019D6A0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D6A0
  c->lr=0x8019D6A8u; f_801346A4(c); // 8019D6A4
  c->r[4]=c->r[3]|c->r[3]; // 8019D6A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D6AC
  c->lr=0x8019D6B4u; f_8013A480(c); // 8019D6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8019D6B4
  if (crb(c,2)) { goto L_8019D6C8; } // 8019D6B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D6BC
  c->lr=0x8019D6C4u; f_80135F08(c); // 8019D6C0
  goto L_8019D6DC; // 8019D6C4
L_8019D6C8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D6C8
  c->lr=0x8019D6D0u; f_80135E7C(c); // 8019D6CC
  c->r[3]=c->r[31]|c->r[31]; // 8019D6D0
  c->r[4]=0u+0x00000009u; // 8019D6D4
  c->lr=0x8019D6DCu; f_8013114C(c); // 8019D6D8
L_8019D6DC:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D6DC
  c->lr=0x8019D6E4u; f_8013A2D8(c); // 8019D6E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D6E4
  c->lr=0x8019D6ECu; f_80134770(c); // 8019D6E8
  c->r[4]=c->r[3]|c->r[3]; // 8019D6EC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D6F0
  c->lr=0x8019D6F8u; f_8013C018(c); // 8019D6F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D6F8
  c->lr=0x8019D700u; f_801346A4(c); // 8019D6FC
  c->r[4]=c->r[3]|c->r[3]; // 8019D700
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D704
  c->lr=0x8019D70Cu; f_8013BF10(c); // 8019D708
L_8019D70C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D70C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D710
  c->lr=c->r[0]; // 8019D714
  c->r[1]=c->r[1]+0x00000010u; // 8019D718
  return; // 8019D71C
}

// fn_8019D720
void f_8019D720(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D720
  c->r[0]=c->lr; // 8019D724
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D72C
  c->r[31]=c->r[3]|c->r[3]; // 8019D730
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019D734
  c->lr=0x8019D73Cu; f_80134770(c); // 8019D738
  c->r[4]=c->r[3]|c->r[3]; // 8019D73C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D740
  c->lr=0x8019D748u; f_8013C018(c); // 8019D744
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D748
  c->lr=0x8019D750u; f_801346A4(c); // 8019D74C
  c->r[4]=c->r[3]|c->r[3]; // 8019D750
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D754
  c->lr=0x8019D75Cu; f_8013BE60(c); // 8019D758
  c->r[3]=c->r[31]|c->r[31]; // 8019D75C
  c->r[4]=0u+0x0000000Au; // 8019D760
  c->lr=0x8019D768u; f_8013114C(c); // 8019D764
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D768
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D76C
  c->lr=c->r[0]; // 8019D770
  c->r[1]=c->r[1]+0x00000010u; // 8019D774
  return; // 8019D778
}

// fn_8019D77C
void f_8019D77C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D77C
  c->r[0]=c->lr; // 8019D780
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D788
  c->r[31]=c->r[3]|c->r[3]; // 8019D78C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019D790
  c->lr=0x8019D798u; f_8013BFD0(c); // 8019D794
  cmps(c,0,(int32_t)c->r[3],0); // 8019D798
  if (crb(c,2)) { goto L_8019D7B8; } // 8019D79C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D7A0
  c->r[4]=0u+0x00000000u; // 8019D7A4
  c->lr=0x8019D7ACu; f_8013A1F8(c); // 8019D7A8
  c->r[3]=c->r[31]|c->r[31]; // 8019D7AC
  c->r[4]=0u+0x0000000Bu; // 8019D7B0
  c->lr=0x8019D7B8u; f_8013114C(c); // 8019D7B4
L_8019D7B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D7B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D7BC
  c->lr=c->r[0]; // 8019D7C0
  c->r[1]=c->r[1]+0x00000010u; // 8019D7C4
  return; // 8019D7C8
}

// fn_8019D7CC
void f_8019D7CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D7CC
  c->r[0]=c->lr; // 8019D7D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D7D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D7D8
  c->r[31]=c->r[3]|c->r[3]; // 8019D7DC
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019D7E0
  c->lr=0x8019D7E8u; f_80135E48(c); // 8019D7E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D7E8
  c->lr=0x8019D7F0u; f_80134770(c); // 8019D7EC
  cmps(c,0,(int32_t)c->r[3],1); // 8019D7F0
  if (crb(c,2)) { goto L_8019D830; } // 8019D7F4
  if (!crb(c,0)) { goto L_8019D838; } // 8019D7F8
  cmps(c,0,(int32_t)c->r[3],0); // 8019D7FC
  if (!crb(c,0)) { goto L_8019D808; } // 8019D800
  goto L_8019D838; // 8019D804
L_8019D808:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D808
  c->lr=0x8019D810u; f_801346A4(c); // 8019D80C
  cmps(c,0,(int32_t)c->r[3],2); // 8019D810
  if (!crb(c,2)) { goto L_8019D824; } // 8019D814
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D818
  c->lr=0x8019D820u; f_8013A3C8(c); // 8019D81C
  goto L_8019D838; // 8019D820
L_8019D824:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D824
  c->lr=0x8019D82Cu; f_8013A27C(c); // 8019D828
  goto L_8019D838; // 8019D82C
L_8019D830:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D830
  c->lr=0x8019D838u; f_8013A27C(c); // 8019D834
L_8019D838:;
  c->r[3]=c->r[31]|c->r[31]; // 8019D838
  c->r[4]=0u+0x0000000Cu; // 8019D83C
  c->lr=0x8019D844u; f_8013114C(c); // 8019D840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019D844
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019D848
  c->lr=c->r[0]; // 8019D84C
  c->r[1]=c->r[1]+0x00000010u; // 8019D850
  return; // 8019D854
}

// fn_8019D858
void f_8019D858(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019D858
  c->r[0]=c->lr; // 8019D85C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019D860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019D864
  c->r[31]=c->r[3]|c->r[3]; // 8019D868
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019D86C
  c->lr=0x8019D874u; f_80134770(c); // 8019D870
  cmps(c,0,(int32_t)c->r[3],1); // 8019D874
  if (crb(c,2)) { goto L_8019D9D8; } // 8019D878
  if (!crb(c,0)) { goto L_8019DA50; } // 8019D87C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D880
  if (!crb(c,0)) { goto L_8019D88C; } // 8019D884
  goto L_8019DA50; // 8019D888
L_8019D88C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D88C
  c->lr=0x8019D894u; f_801346A4(c); // 8019D890
  cmps(c,0,(int32_t)c->r[3],2); // 8019D894
  if (!crb(c,2)) { goto L_8019D8BC; } // 8019D898
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D89C
  c->lr=0x8019D8A4u; f_8013A468(c); // 8019D8A0
  cmps(c,0,(int32_t)c->r[3],0); // 8019D8A4
  if (crb(c,2)) { goto L_8019DA50; } // 8019D8A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D8AC
  c->r[4]=0u+0x00000000u; // 8019D8B0
  c->lr=0x8019D8B8u; f_80139E8C(c); // 8019D8B4
  goto L_8019D8D8; // 8019D8B8
L_8019D8BC:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D8BC
  c->lr=0x8019D8C4u; f_8013A350(c); // 8019D8C0
  cmps(c,0,(int32_t)c->r[3],0); // 8019D8C4
  if (crb(c,2)) { goto L_8019DA50; } // 8019D8C8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D8CC
  c->r[4]=0u+0x00000000u; // 8019D8D0
  c->lr=0x8019D8D8u; f_80139E48(c); // 8019D8D4
L_8019D8D8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D8D8
  c->lr=0x8019D8E0u; f_801346A4(c); // 8019D8DC
  cmps(c,0,(int32_t)c->r[3],2); // 8019D8E0
  if (crb(c,2)) { goto L_8019D928; } // 8019D8E4
  if (!crb(c,0)) { goto L_8019D8FC; } // 8019D8E8
  cmps(c,0,(int32_t)c->r[3],0); // 8019D8EC
  if (crb(c,2)) { goto L_8019D908; } // 8019D8F0
  if (!crb(c,0)) { goto L_8019D918; } // 8019D8F4
  goto L_8019DA50; // 8019D8F8
L_8019D8FC:;
  cmps(c,0,(int32_t)c->r[3],4); // 8019D8FC
  if (!crb(c,0)) { goto L_8019DA50; } // 8019D900
  goto L_8019D938; // 8019D904
L_8019D908:;
  c->r[3]=c->r[31]|c->r[31]; // 8019D908
  c->r[4]=0u+0x0000000Fu; // 8019D90C
  c->lr=0x8019D914u; f_8013114C(c); // 8019D910
  goto L_8019DA50; // 8019D914
L_8019D918:;
  c->r[3]=c->r[31]|c->r[31]; // 8019D918
  c->r[4]=0u+0x0000002Eu; // 8019D91C
  c->lr=0x8019D924u; f_8013114C(c); // 8019D920
  goto L_8019DA50; // 8019D924
L_8019D928:;
  c->r[3]=c->r[31]|c->r[31]; // 8019D928
  c->r[4]=0u+0x00000034u; // 8019D92C
  c->lr=0x8019D934u; f_8013114C(c); // 8019D930
  goto L_8019DA50; // 8019D934
L_8019D938:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D938
  c->lr=0x8019D940u; f_80137010(c); // 8019D93C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D940
  if (crb(c,2)) { goto L_8019D958; } // 8019D944
  c->r[3]=c->r[31]|c->r[31]; // 8019D948
  c->r[4]=0u+0x00000055u; // 8019D94C
  c->lr=0x8019D954u; f_8013114C(c); // 8019D950
  goto L_8019DA50; // 8019D954
L_8019D958:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D958
  c->lr=0x8019D960u; f_80135890(c); // 8019D95C
  cmps(c,0,(int32_t)c->r[3],0); // 8019D960
  if (crb(c,2)) { goto L_8019D994; } // 8019D964
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D968
  c->lr=0x8019D970u; f_80136BAC(c); // 8019D96C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D970
  c->lr=0x8019D978u; f_80134564(c); // 8019D974
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D978
  c->r[4]=0u+0x00000000u; // 8019D97C
  c->lr=0x8019D984u; f_80139E48(c); // 8019D980
  c->r[3]=c->r[31]|c->r[31]; // 8019D984
  c->r[4]=0u+0x00000000u; // 8019D988
  c->lr=0x8019D990u; f_8013114C(c); // 8019D98C
  goto L_8019DA50; // 8019D990
L_8019D994:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D994
  c->lr=0x8019D99Cu; f_8013504C(c); // 8019D998
  cmps(c,0,(int32_t)c->r[3],0); // 8019D99C
  if (crb(c,2)) { goto L_8019D9B4; } // 8019D9A0
  c->r[3]=c->r[31]|c->r[31]; // 8019D9A4
  c->r[4]=0u+0x00000039u; // 8019D9A8
  c->lr=0x8019D9B0u; f_8013114C(c); // 8019D9AC
  goto L_8019DA50; // 8019D9B0
L_8019D9B4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D9B4
  c->lr=0x8019D9BCu; f_80134564(c); // 8019D9B8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D9BC
  c->r[4]=0u+0x00000000u; // 8019D9C0
  c->lr=0x8019D9C8u; f_80139E48(c); // 8019D9C4
  c->r[3]=c->r[31]|c->r[31]; // 8019D9C8
  c->r[4]=0u+0x00000000u; // 8019D9CC
  c->lr=0x8019D9D4u; f_8013114C(c); // 8019D9D0
  goto L_8019DA50; // 8019D9D4
L_8019D9D8:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D9D8
  c->lr=0x8019D9E0u; f_8013A350(c); // 8019D9DC
  cmps(c,0,(int32_t)c->r[3],0); // 8019D9E0
  if (crb(c,2)) { goto L_8019DA50; } // 8019D9E4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019D9E8
  c->r[4]=0u+0x00000000u; // 8019D9EC
  c->lr=0x8019D9F4u; f_80139E48(c); // 8019D9F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019D9F4
  c->lr=0x8019D9FCu; f_801346A4(c); // 8019D9F8
  cmps(c,0,(int32_t)c->r[3],1); // 8019D9FC
  if (crb(c,2)) { goto L_8019DA44; } // 8019DA00
  if (!crb(c,0)) { goto L_8019DA50; } // 8019DA04
  cmps(c,0,(int32_t)c->r[3],0); // 8019DA08
  if (!crb(c,0)) { goto L_8019DA14; } // 8019DA0C
  goto L_8019DA50; // 8019DA10
L_8019DA14:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DA14
  c->lr=0x8019DA1Cu; f_80137010(c); // 8019DA18
  cmps(c,0,(int32_t)c->r[3],0); // 8019DA1C
  if (crb(c,2)) { goto L_8019DA34; } // 8019DA20
  c->r[3]=c->r[31]|c->r[31]; // 8019DA24
  c->r[4]=0u+0x00000064u; // 8019DA28
  c->lr=0x8019DA30u; f_8013114C(c); // 8019DA2C
  goto L_8019DA50; // 8019DA30
L_8019DA34:;
  c->r[3]=c->r[31]|c->r[31]; // 8019DA34
  c->r[4]=0u+0x00000055u; // 8019DA38
  c->lr=0x8019DA40u; f_8013114C(c); // 8019DA3C
  goto L_8019DA50; // 8019DA40
L_8019DA44:;
  c->r[3]=c->r[31]|c->r[31]; // 8019DA44
  c->r[4]=0u+0x0000006Au; // 8019DA48
  c->lr=0x8019DA50u; f_8013114C(c); // 8019DA4C
L_8019DA50:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DA50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DA54
  c->lr=c->r[0]; // 8019DA58
  c->r[1]=c->r[1]+0x00000010u; // 8019DA5C
  return; // 8019DA60
}

// fn_8019DA64
void f_8019DA64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DA64
  c->r[0]=c->lr; // 8019DA68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DA6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DA70
  c->r[31]=c->r[3]|c->r[3]; // 8019DA74
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DA78
  c->r[4]=0u+0x00000000u; // 8019DA7C
  c->lr=0x8019DA84u; f_8013A1F8(c); // 8019DA80
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DA84
  c->lr=0x8019DA8Cu; f_80135E48(c); // 8019DA88
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DA8C
  c->lr=0x8019DA94u; f_8013A27C(c); // 8019DA90
  c->r[3]=c->r[31]|c->r[31]; // 8019DA94
  c->r[4]=0u+0x0000000Eu; // 8019DA98
  c->lr=0x8019DAA0u; f_8013114C(c); // 8019DA9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DAA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DAA4
  c->lr=c->r[0]; // 8019DAA8
  c->r[1]=c->r[1]+0x00000010u; // 8019DAAC
  return; // 8019DAB0
}

// fn_8019DAB4
void f_8019DAB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DAB4
  c->r[0]=c->lr; // 8019DAB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DABC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DAC0
  c->r[31]=c->r[3]|c->r[3]; // 8019DAC4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DAC8
  c->lr=0x8019DAD0u; f_8013A350(c); // 8019DACC
  cmps(c,0,(int32_t)c->r[3],0); // 8019DAD0
  if (crb(c,2)) { goto L_8019DAF8; } // 8019DAD4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DAD8
  c->r[4]=0u+0x00000000u; // 8019DADC
  c->lr=0x8019DAE4u; f_80139E48(c); // 8019DAE0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DAE4
  c->lr=0x8019DAECu; f_80134564(c); // 8019DAE8
  c->r[3]=c->r[31]|c->r[31]; // 8019DAEC
  c->r[4]=0u+0x00000000u; // 8019DAF0
  c->lr=0x8019DAF8u; f_8013114C(c); // 8019DAF4
L_8019DAF8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DAF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DAFC
  c->lr=c->r[0]; // 8019DB00
  c->r[1]=c->r[1]+0x00000010u; // 8019DB04
  return; // 8019DB08
}

// fn_8019DB0C
void f_8019DB0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DB0C
  c->r[0]=c->lr; // 8019DB10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DB18
  c->r[31]=c->r[3]|c->r[3]; // 8019DB1C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DB20
  c->r[4]=0u+0x00000002u; // 8019DB24
  c->lr=0x8019DB2Cu; f_8013BE58(c); // 8019DB28
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DB2C
  c->lr=0x8019DB34u; f_8013C1EC(c); // 8019DB30
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DB34
  c->lr=0x8019DB3Cu; f_8013B1E4(c); // 8019DB38
  c->r[3]=c->r[31]|c->r[31]; // 8019DB3C
  c->r[4]=0u+0x00000035u; // 8019DB40
  c->lr=0x8019DB48u; f_8013114C(c); // 8019DB44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DB48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DB4C
  c->lr=c->r[0]; // 8019DB50
  c->r[1]=c->r[1]+0x00000010u; // 8019DB54
  return; // 8019DB58
}

// fn_8019DB5C
void f_8019DB5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DB5C
  c->r[0]=c->lr; // 8019DB60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DB64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DB68
  c->r[31]=c->r[3]|c->r[3]; // 8019DB6C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DB70
  c->lr=0x8019DB78u; f_8013B298(c); // 8019DB74
  cmps(c,0,(int32_t)c->r[3],0); // 8019DB78
  if (crb(c,2)) { goto L_8019DB94; } // 8019DB7C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DB80
  c->lr=0x8019DB88u; f_8013B254(c); // 8019DB84
  c->r[3]=c->r[31]|c->r[31]; // 8019DB88
  c->r[4]=0u+0x00000036u; // 8019DB8C
  c->lr=0x8019DB94u; f_8013114C(c); // 8019DB90
L_8019DB94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DB94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DB98
  c->lr=c->r[0]; // 8019DB9C
  c->r[1]=c->r[1]+0x00000010u; // 8019DBA0
  return; // 8019DBA4
}

// fn_8019DBA8
void f_8019DBA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DBA8
  c->r[0]=c->lr; // 8019DBAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DBB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DBB4
  c->r[31]=c->r[3]|c->r[3]; // 8019DBB8
  c->r[3]=0u+0x00000001u; // 8019DBBC
  c->lr=0x8019DBC4u; f_8019CD1C(c); // 8019DBC0
  cmps(c,0,(int32_t)c->r[3],0); // 8019DBC4
  if (crb(c,2)) { goto L_8019DBE4; } // 8019DBC8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DBCC
  c->lr=0x8019DBD4u; f_801345A4(c); // 8019DBD0
  c->r[3]=c->r[31]|c->r[31]; // 8019DBD4
  c->r[4]=0u+0x00000037u; // 8019DBD8
  c->lr=0x8019DBE0u; f_8013114C(c); // 8019DBDC
  goto L_8019DBEC; // 8019DBE0
L_8019DBE4:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DBE4
  c->lr=0x8019DBECu; f_8013B254(c); // 8019DBE8
L_8019DBEC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DBEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DBF0
  c->lr=c->r[0]; // 8019DBF4
  c->r[1]=c->r[1]+0x00000010u; // 8019DBF8
  return; // 8019DBFC
}

// fn_8019DC00
void f_8019DC00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DC00
  c->r[0]=c->lr; // 8019DC04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DC08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DC0C
  c->r[31]=c->r[3]|c->r[3]; // 8019DC10
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DC14
  c->lr=0x8019DC1Cu; f_8013B21C(c); // 8019DC18
  c->r[3]=c->r[31]|c->r[31]; // 8019DC1C
  c->r[4]=0u+0x00000038u; // 8019DC20
  c->lr=0x8019DC28u; f_8013114C(c); // 8019DC24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DC28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DC2C
  c->lr=c->r[0]; // 8019DC30
  c->r[1]=c->r[1]+0x00000010u; // 8019DC34
  return; // 8019DC38
}

// fn_8019DC3C
void f_8019DC3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DC3C
  c->r[0]=c->lr; // 8019DC40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DC44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DC48
  c->r[31]=c->r[3]|c->r[3]; // 8019DC4C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DC50
  c->lr=0x8019DC58u; f_8013B298(c); // 8019DC54
  cmps(c,0,(int32_t)c->r[3],0); // 8019DC58
  if (crb(c,2)) { goto L_8019DC78; } // 8019DC5C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DC60
  c->r[4]=0u+0x00000000u; // 8019DC64
  c->lr=0x8019DC6Cu; f_8013A034(c); // 8019DC68
  c->r[3]=c->r[31]|c->r[31]; // 8019DC6C
  c->r[4]=0u+0x00000006u; // 8019DC70
  c->lr=0x8019DC78u; f_8013114C(c); // 8019DC74
L_8019DC78:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DC7C
  c->lr=c->r[0]; // 8019DC80
  c->r[1]=c->r[1]+0x00000010u; // 8019DC84
  return; // 8019DC88
}

// fn_8019DC8C
void f_8019DC8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DC8C
  c->r[0]=c->lr; // 8019DC90
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DC98
  c->r[31]=c->r[3]|c->r[3]; // 8019DC9C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DCA0
  c->r[4]=0u+0x00000001u; // 8019DCA4
  c->lr=0x8019DCACu; f_8013BE58(c); // 8019DCA8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DCAC
  c->lr=0x8019DCB4u; f_80134F7C(c); // 8019DCB0
  c->r[4]=c->r[3]|c->r[3]; // 8019DCB4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DCB8
  c->lr=0x8019DCC0u; f_8013C1CC(c); // 8019DCBC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DCC0
  c->lr=0x8019DCC8u; f_80134F7C(c); // 8019DCC4
  c->r[4]=c->r[3]|c->r[3]; // 8019DCC8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DCCC
  c->lr=0x8019DCD4u; f_8013C020(c); // 8019DCD0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DCD4
  c->lr=0x8019DCDCu; f_8013501C(c); // 8019DCD8
  c->r[4]=c->r[3]|c->r[3]; // 8019DCDC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DCE0
  c->lr=0x8019DCE8u; f_8013C0EC(c); // 8019DCE4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DCE8
  c->lr=0x8019DCF0u; f_8013C1EC(c); // 8019DCEC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DCF0
  c->lr=0x8019DCF8u; f_8013AFD4(c); // 8019DCF4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DCF8
  c->lr=0x8019DD00u; f_80135E14(c); // 8019DCFC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DD00
  c->lr=0x8019DD08u; f_801345AC(c); // 8019DD04
  c->r[3]=c->r[31]|c->r[31]; // 8019DD08
  c->r[4]=0u+0x0000002Fu; // 8019DD0C
  c->lr=0x8019DD14u; f_8013114C(c); // 8019DD10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DD14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DD18
  c->lr=c->r[0]; // 8019DD1C
  c->r[1]=c->r[1]+0x00000010u; // 8019DD20
  return; // 8019DD24
}

// fn_8019DD28
void f_8019DD28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DD28
  c->r[0]=c->lr; // 8019DD2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DD30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DD34
  c->r[31]=c->r[3]|c->r[3]; // 8019DD38
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DD3C
  c->lr=0x8019DD44u; f_8013B158(c); // 8019DD40
  cmps(c,0,(int32_t)c->r[3],0); // 8019DD44
  if (crb(c,2)) { goto L_8019DD60; } // 8019DD48
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DD4C
  c->lr=0x8019DD54u; f_8013B0DC(c); // 8019DD50
  c->r[3]=c->r[31]|c->r[31]; // 8019DD54
  c->r[4]=0u+0x00000030u; // 8019DD58
  c->lr=0x8019DD60u; f_8013114C(c); // 8019DD5C
L_8019DD60:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DD60
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DD64
  c->lr=c->r[0]; // 8019DD68
  c->r[1]=c->r[1]+0x00000010u; // 8019DD6C
  return; // 8019DD70
}

// fn_8019DD74
void f_8019DD74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DD74
  c->r[0]=c->lr; // 8019DD78
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DD7C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DD80
  c->r[31]=c->r[3]|c->r[3]; // 8019DD84
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DD88
  c->lr=0x8019DD90u; f_8013B164(c); // 8019DD8C
  c->r[4]=c->r[3]|c->r[3]; // 8019DD90
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DD94
  c->lr=0x8019DD9Cu; f_80135024(c); // 8019DD98
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DD9C
  c->lr=0x8019DDA4u; f_8013B15C(c); // 8019DDA0
  c->r[4]=c->r[3]|c->r[3]; // 8019DDA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DDA8
  c->lr=0x8019DDB0u; f_8013502C(c); // 8019DDAC
  c->r[3]=c->r[31]|c->r[31]; // 8019DDB0
  c->r[4]=0u+0x00000031u; // 8019DDB4
  c->lr=0x8019DDBCu; f_8013114C(c); // 8019DDB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DDBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DDC0
  c->lr=c->r[0]; // 8019DDC4
  c->r[1]=c->r[1]+0x00000010u; // 8019DDC8
  return; // 8019DDCC
}

// fn_8019DDD0
void f_8019DDD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DDD0
  c->r[0]=c->lr; // 8019DDD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DDD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DDDC
  c->r[31]=c->r[3]|c->r[3]; // 8019DDE0
  c->r[3]=0u+0x00000001u; // 8019DDE4
  c->lr=0x8019DDECu; f_8019CD1C(c); // 8019DDE8
  cmps(c,0,(int32_t)c->r[3],0); // 8019DDEC
  if (crb(c,2)) { goto L_8019DE08; } // 8019DDF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DDF4
  c->lr=0x8019DDFCu; f_801345A4(c); // 8019DDF8
  c->r[3]=c->r[31]|c->r[31]; // 8019DDFC
  c->r[4]=0u+0x00000032u; // 8019DE00
  c->lr=0x8019DE08u; f_8013114C(c); // 8019DE04
L_8019DE08:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DE08
  c->lr=0x8019DE10u; f_80137010(c); // 8019DE0C
  cmps(c,0,(int32_t)c->r[3],0); // 8019DE10
  if (!crb(c,2)) { goto L_8019DE98; } // 8019DE14
  c->r[3]=0u+0x00000000u; // 8019DE18
  c->lr=0x8019DE20u; f_8019CD1C(c); // 8019DE1C
  cmps(c,0,(int32_t)c->r[3],0); // 8019DE20
  if (crb(c,2)) { goto L_8019DE98; } // 8019DE24
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DE28
  c->lr=0x8019DE30u; f_80134F7C(c); // 8019DE2C
  c->r[4]=c->r[3]|c->r[3]; // 8019DE30
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DE34
  c->lr=0x8019DE3Cu; f_8013C020(c); // 8019DE38
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DE3C
  c->lr=0x8019DE44u; f_8013501C(c); // 8019DE40
  c->r[4]=c->r[3]|c->r[3]; // 8019DE44
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DE48
  c->lr=0x8019DE50u; f_8013C0EC(c); // 8019DE4C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DE50
  c->lr=0x8019DE58u; f_8013B194(c); // 8019DE54
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DE58
  c->lr=0x8019DE60u; f_8013B16C(c); // 8019DE5C
  c->r[4]=c->r[3]|c->r[3]; // 8019DE60
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DE64
  c->lr=0x8019DE6Cu; f_80135794(c); // 8019DE68
  cmps(c,0,(int32_t)c->r[3],0); // 8019DE6C
  if (crb(c,2)) { goto L_8019DE8C; } // 8019DE70
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DE74
  c->lr=0x8019DE7Cu; f_80135E7C(c); // 8019DE78
  c->r[3]=c->r[31]|c->r[31]; // 8019DE7C
  c->r[4]=0u+0x00000032u; // 8019DE80
  c->lr=0x8019DE88u; f_8013114C(c); // 8019DE84
  goto L_8019DF48; // 8019DE88
L_8019DE8C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DE8C
  c->lr=0x8019DE94u; f_80135F08(c); // 8019DE90
  goto L_8019DF48; // 8019DE94
L_8019DE98:;
  c->r[3]=0u+0x00000003u; // 8019DE98
  c->lr=0x8019DEA0u; f_8019CD1C(c); // 8019DE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8019DEA0
  if (crb(c,2)) { goto L_8019DEB0; } // 8019DEA4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DEA8
  c->lr=0x8019DEB0u; f_80134EE0(c); // 8019DEAC
L_8019DEB0:;
  c->r[3]=0u+0x00000004u; // 8019DEB0
  c->lr=0x8019DEB8u; f_8019CD1C(c); // 8019DEB4
  cmps(c,0,(int32_t)c->r[3],0); // 8019DEB8
  if (crb(c,2)) { goto L_8019DEC8; } // 8019DEBC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DEC0
  c->lr=0x8019DEC8u; f_80134E84(c); // 8019DEC4
L_8019DEC8:;
  c->r[3]=0u+0x00000006u; // 8019DEC8
  c->lr=0x8019DED0u; f_8019CD1C(c); // 8019DECC
  cmps(c,0,(int32_t)c->r[3],0); // 8019DED0
  if (crb(c,2)) { goto L_8019DEF0; } // 8019DED4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DED8
  c->lr=0x8019DEE0u; f_8013C1DC(c); // 8019DEDC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DEE0
  c->lr=0x8019DEE8u; f_80134FD0(c); // 8019DEE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DEE8
  c->lr=0x8019DEF0u; f_80134F3C(c); // 8019DEEC
L_8019DEF0:;
  c->r[3]=0u+0x00000005u; // 8019DEF0
  c->lr=0x8019DEF8u; f_8019CD1C(c); // 8019DEF4
  cmps(c,0,(int32_t)c->r[3],0); // 8019DEF8
  if (crb(c,2)) { goto L_8019DF18; } // 8019DEFC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DF00
  c->lr=0x8019DF08u; f_8013C1E4(c); // 8019DF04
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DF08
  c->lr=0x8019DF10u; f_80134F84(c); // 8019DF0C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DF10
  c->lr=0x8019DF18u; f_80134F3C(c); // 8019DF14
L_8019DF18:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DF18
  c->lr=0x8019DF20u; f_80134F7C(c); // 8019DF1C
  c->r[4]=c->r[3]|c->r[3]; // 8019DF20
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DF24
  c->lr=0x8019DF2Cu; f_8013C020(c); // 8019DF28
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DF2C
  c->lr=0x8019DF34u; f_8013501C(c); // 8019DF30
  c->r[4]=c->r[3]|c->r[3]; // 8019DF34
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DF38
  c->lr=0x8019DF40u; f_8013C0EC(c); // 8019DF3C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DF40
  c->lr=0x8019DF48u; f_8013B194(c); // 8019DF44
L_8019DF48:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DF4C
  c->lr=c->r[0]; // 8019DF50
  c->r[1]=c->r[1]+0x00000010u; // 8019DF54
  return; // 8019DF58
}

// fn_8019DF5C
void f_8019DF5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DF5C
  c->r[0]=c->lr; // 8019DF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DF64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DF68
  c->r[31]=c->r[3]|c->r[3]; // 8019DF6C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DF70
  c->r[4]=0u+0x00000000u; // 8019DF74
  c->lr=0x8019DF7Cu; f_80139FF0(c); // 8019DF78
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DF7C
  c->lr=0x8019DF84u; f_80135E48(c); // 8019DF80
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DF84
  c->lr=0x8019DF8Cu; f_8013B064(c); // 8019DF88
  c->r[3]=c->r[31]|c->r[31]; // 8019DF8C
  c->r[4]=0u+0x00000033u; // 8019DF90
  c->lr=0x8019DF98u; f_8013114C(c); // 8019DF94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019DF98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019DF9C
  c->lr=c->r[0]; // 8019DFA0
  c->r[1]=c->r[1]+0x00000010u; // 8019DFA4
  return; // 8019DFA8
}

// fn_8019DFAC
void f_8019DFAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019DFAC
  c->r[0]=c->lr; // 8019DFB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019DFB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019DFB8
  c->r[31]=c->r[3]|c->r[3]; // 8019DFBC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019DFC0
  c->lr=0x8019DFC8u; f_8013B158(c); // 8019DFC4
  cmps(c,0,(int32_t)c->r[3],0); // 8019DFC8
  if (crb(c,2)) { goto L_8019E064; } // 8019DFCC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DFD0
  c->r[4]=0u+0x00000000u; // 8019DFD4
  c->lr=0x8019DFDCu; f_80139F94(c); // 8019DFD8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DFDC
  c->lr=0x8019DFE4u; f_801345B4(c); // 8019DFE0
  cmps(c,0,(int32_t)c->r[3],0); // 8019DFE4
  if (!crb(c,2)) { goto L_8019E034; } // 8019DFE8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019DFEC
  c->lr=0x8019DFF4u; f_8013B16C(c); // 8019DFF0
  c->r[4]=c->r[3]|c->r[3]; // 8019DFF4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019DFF8
  c->lr=0x8019E000u; f_80135F3C(c); // 8019DFFC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E000
  c->r[4]=0u+0xFFFFFFFFu; // 8019E004
  c->lr=0x8019E00Cu; f_80135F44(c); // 8019E008
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E00C
  c->r[4]=0u+0x00000001u; // 8019E010
  c->r[5]=0u+0xFFFFFFFFu; // 8019E014
  c->lr=0x8019E01Cu; f_80135F4C(c); // 8019E018
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E01C
  c->lr=0x8019E024u; f_80134564(c); // 8019E020
  c->r[3]=c->r[31]|c->r[31]; // 8019E024
  c->r[4]=0u+0x00000000u; // 8019E028
  c->lr=0x8019E030u; f_8013114C(c); // 8019E02C
  goto L_8019E064; // 8019E030
L_8019E034:;
  c->r[0]=R32(c->r[31]+0x000000F0u); // 8019E034
  cmps(c,0,(int32_t)c->r[0],0); // 8019E038
  if (crb(c,2)) { goto L_8019E058; } // 8019E03C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E040
  c->lr=0x8019E048u; f_80134564(c); // 8019E044
  c->r[3]=c->r[31]|c->r[31]; // 8019E048
  c->r[4]=0u+0x00000000u; // 8019E04C
  c->lr=0x8019E054u; f_8013114C(c); // 8019E050
  goto L_8019E064; // 8019E054
L_8019E058:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E058
  c->r[4]=0u+0x00000004u; // 8019E05C
  c->lr=0x8019E064u; f_8013114C(c); // 8019E060
L_8019E064:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E064
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E068
  c->lr=c->r[0]; // 8019E06C
  c->r[1]=c->r[1]+0x00000010u; // 8019E070
  return; // 8019E074
}

// fn_8019E078
void f_8019E078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E078
  c->r[0]=c->lr; // 8019E07C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E080
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E084
  c->r[31]=c->r[3]|c->r[3]; // 8019E088
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E08C
  c->lr=0x8019E094u; f_8013B998(c); // 8019E090
  cmps(c,0,(int32_t)c->r[3],3); // 8019E094
  if (crb(c,2)) { goto L_8019E108; } // 8019E098
  if (!crb(c,0)) { goto L_8019E0B0; } // 8019E09C
  cmps(c,0,(int32_t)c->r[3],1); // 8019E0A0
  if (crb(c,2)) { goto L_8019E0BC; } // 8019E0A4
  if (!crb(c,0)) { goto L_8019E0E0; } // 8019E0A8
  goto L_8019E198; // 8019E0AC
L_8019E0B0:;
  cmps(c,0,(int32_t)c->r[3],5); // 8019E0B0
  if (!crb(c,0)) { goto L_8019E198; } // 8019E0B4
  goto L_8019E150; // 8019E0B8
L_8019E0BC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E0BC
  c->lr=0x8019E0C4u; f_80135154(c); // 8019E0C0
  cmps(c,0,(int32_t)c->r[3],2); // 8019E0C4
  if (!crb(c,0)) { goto L_8019E198; } // 8019E0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8019E0CC
  if (!crb(c,0)) { goto L_8019E0D8; } // 8019E0D0
  goto L_8019E198; // 8019E0D4
L_8019E0D8:;
  c->r[3]=0u+0x00000001u; // 8019E0D8
  goto L_8019E19C; // 8019E0DC
L_8019E0E0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E0E0
  c->lr=0x8019E0E8u; f_80135154(c); // 8019E0E4
  cmps(c,0,(int32_t)c->r[3],2); // 8019E0E8
  if (!crb(c,0)) { goto L_8019E198; } // 8019E0EC
  cmps(c,0,(int32_t)c->r[3],0); // 8019E0F0
  if (!crb(c,0)) { goto L_8019E100; } // 8019E0F4
  goto L_8019E198; // 8019E0F8
  goto L_8019E198; // 8019E0FC
L_8019E100:;
  c->r[3]=0u+0x00000001u; // 8019E100
  goto L_8019E19C; // 8019E104
L_8019E108:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E108
  c->lr=0x8019E110u; f_80135154(c); // 8019E10C
  cmps(c,0,(int32_t)c->r[3],2); // 8019E110
  if (crb(c,2)) { goto L_8019E130; } // 8019E114
  if (!crb(c,0)) { goto L_8019E198; } // 8019E118
  cmps(c,0,(int32_t)c->r[3],0); // 8019E11C
  if (crb(c,2)) { goto L_8019E130; } // 8019E120
  if (!crb(c,0)) { goto L_8019E138; } // 8019E124
  goto L_8019E198; // 8019E128
  goto L_8019E198; // 8019E12C
L_8019E130:;
  c->r[3]=0u+0x00000001u; // 8019E130
  goto L_8019E19C; // 8019E134
L_8019E138:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E138
  c->lr=0x8019E140u; f_8013B870(c); // 8019E13C
  cmps(c,0,(int32_t)c->r[3],0); // 8019E140
  if (!crb(c,2)) { goto L_8019E198; } // 8019E144
  c->r[3]=0u+0x00000001u; // 8019E148
  goto L_8019E19C; // 8019E14C
L_8019E150:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E150
  c->lr=0x8019E158u; f_80135154(c); // 8019E154
  cmps(c,0,(int32_t)c->r[3],2); // 8019E158
  if (crb(c,2)) { goto L_8019E178; } // 8019E15C
  if (!crb(c,0)) { goto L_8019E198; } // 8019E160
  cmps(c,0,(int32_t)c->r[3],0); // 8019E164
  if (crb(c,2)) { goto L_8019E178; } // 8019E168
  if (!crb(c,0)) { goto L_8019E180; } // 8019E16C
  goto L_8019E198; // 8019E170
  goto L_8019E198; // 8019E174
L_8019E178:;
  c->r[3]=0u+0x00000001u; // 8019E178
  goto L_8019E19C; // 8019E17C
L_8019E180:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E180
  c->lr=0x8019E188u; f_8013B870(c); // 8019E184
  cmps(c,0,(int32_t)c->r[3],0); // 8019E188
  if (!crb(c,2)) { goto L_8019E198; } // 8019E18C
  c->r[3]=0u+0x00000001u; // 8019E190
  goto L_8019E19C; // 8019E194
L_8019E198:;
  c->r[3]=0u+0x00000000u; // 8019E198
L_8019E19C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E19C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E1A0
  c->lr=c->r[0]; // 8019E1A4
  c->r[1]=c->r[1]+0x00000010u; // 8019E1A8
  return; // 8019E1AC
}

// fn_8019E1B0
void f_8019E1B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E1B0
  c->r[0]=c->lr; // 8019E1B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E1B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E1BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019E1C0
  c->r[30]=c->r[3]|c->r[3]; // 8019E1C4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E1C8
  c->lr=0x8019E1D0u; f_80135154(c); // 8019E1CC
  c->r[31]=c->r[3]|c->r[3]; // 8019E1D0
  cmps(c,0,(int32_t)c->r[3],2); // 8019E1D4
  if (crb(c,2)) { goto L_8019E228; } // 8019E1D8
  if (!crb(c,0)) { goto L_8019E234; } // 8019E1DC
  cmps(c,0,(int32_t)c->r[3],0); // 8019E1E0
  if (!crb(c,0)) { goto L_8019E1EC; } // 8019E1E4
  goto L_8019E234; // 8019E1E8
L_8019E1EC:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E1EC
  c->lr=0x8019E1F4u; f_8013B998(c); // 8019E1F0
  c->r[4]=c->r[3]|c->r[3]; // 8019E1F4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E1F8
  c->lr=0x8019E200u; f_80135498(c); // 8019E1FC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E200
  c->r[4]=0u+0x00000003u; // 8019E204
  c->r[5]=c->r[31]|c->r[31]; // 8019E208
  c->lr=0x8019E210u; f_80135F4C(c); // 8019E20C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E210
  c->lr=0x8019E218u; f_80134564(c); // 8019E214
  c->r[3]=c->r[30]|c->r[30]; // 8019E218
  c->r[4]=0u+0x00000000u; // 8019E21C
  c->lr=0x8019E224u; f_8013114C(c); // 8019E220
  goto L_8019E234; // 8019E224
L_8019E228:;
  c->r[3]=c->r[30]|c->r[30]; // 8019E228
  c->r[4]=0u+0x0000004Eu; // 8019E22C
  c->lr=0x8019E234u; f_8013114C(c); // 8019E230
L_8019E234:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E234
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019E238
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E23C
  c->lr=c->r[0]; // 8019E240
  c->r[1]=c->r[1]+0x00000010u; // 8019E244
  return; // 8019E248
}

// fn_8019E24C
void f_8019E24C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E24C
  c->r[0]=c->lr; // 8019E250
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E258
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019E25C
  c->r[30]=c->r[3]|c->r[3]; // 8019E260
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E264
  c->lr=0x8019E26Cu; f_80135154(c); // 8019E268
  c->r[31]=c->r[3]|c->r[3]; // 8019E26C
  cmps(c,0,(int32_t)c->r[3],2); // 8019E270
  if (crb(c,2)) { goto L_8019E2D0; } // 8019E274
  if (!crb(c,0)) { goto L_8019E288; } // 8019E278
  cmps(c,0,(int32_t)c->r[3],0); // 8019E27C
  if (!crb(c,0)) { goto L_8019E294; } // 8019E280
  goto L_8019E2EC; // 8019E284
L_8019E288:;
  cmps(c,0,(int32_t)c->r[3],4); // 8019E288
  if (!crb(c,0)) { goto L_8019E2EC; } // 8019E28C
  goto L_8019E2E0; // 8019E290
L_8019E294:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E294
  c->lr=0x8019E29Cu; f_8013B998(c); // 8019E298
  c->r[4]=c->r[3]|c->r[3]; // 8019E29C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E2A0
  c->lr=0x8019E2A8u; f_80135498(c); // 8019E2A4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E2A8
  c->r[4]=0u+0x00000003u; // 8019E2AC
  c->r[5]=c->r[31]|c->r[31]; // 8019E2B0
  c->lr=0x8019E2B8u; f_80135F4C(c); // 8019E2B4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E2B8
  c->lr=0x8019E2C0u; f_80134564(c); // 8019E2BC
  c->r[3]=c->r[30]|c->r[30]; // 8019E2C0
  c->r[4]=0u+0x00000000u; // 8019E2C4
  c->lr=0x8019E2CCu; f_8013114C(c); // 8019E2C8
  goto L_8019E2EC; // 8019E2CC
L_8019E2D0:;
  c->r[3]=c->r[30]|c->r[30]; // 8019E2D0
  c->r[4]=0u+0x00000048u; // 8019E2D4
  c->lr=0x8019E2DCu; f_8013114C(c); // 8019E2D8
  goto L_8019E2EC; // 8019E2DC
L_8019E2E0:;
  c->r[3]=c->r[30]|c->r[30]; // 8019E2E0
  c->r[4]=0u+0x0000004Eu; // 8019E2E4
  c->lr=0x8019E2ECu; f_8013114C(c); // 8019E2E8
L_8019E2EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E2EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019E2F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E2F4
  c->lr=c->r[0]; // 8019E2F8
  c->r[1]=c->r[1]+0x00000010u; // 8019E2FC
  return; // 8019E300
}

// fn_8019E304
void f_8019E304(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E304
  c->r[0]=c->lr; // 8019E308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E30C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E310
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019E314
  c->r[30]=c->r[3]|c->r[3]; // 8019E318
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E31C
  c->lr=0x8019E324u; f_80135154(c); // 8019E320
  c->r[31]=c->r[3]|c->r[3]; // 8019E324
  cmps(c,0,(int32_t)c->r[3],2); // 8019E328
  if (crb(c,2)) { goto L_8019E350; } // 8019E32C
  if (!crb(c,0)) { goto L_8019E344; } // 8019E330
  cmps(c,0,(int32_t)c->r[3],0); // 8019E334
  if (crb(c,2)) { goto L_8019E350; } // 8019E338
  if (!crb(c,0)) { goto L_8019E38C; } // 8019E33C
  goto L_8019E3F4; // 8019E340
L_8019E344:;
  cmps(c,0,(int32_t)c->r[3],4); // 8019E344
  if (!crb(c,0)) { goto L_8019E3F4; } // 8019E348
  goto L_8019E3E8; // 8019E34C
L_8019E350:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E350
  c->lr=0x8019E358u; f_8013B998(c); // 8019E354
  c->r[4]=c->r[3]|c->r[3]; // 8019E358
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E35C
  c->lr=0x8019E364u; f_80135498(c); // 8019E360
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E364
  c->r[4]=0u+0x00000003u; // 8019E368
  c->r[5]=c->r[31]|c->r[31]; // 8019E36C
  c->lr=0x8019E374u; f_80135F4C(c); // 8019E370
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E374
  c->lr=0x8019E37Cu; f_80134564(c); // 8019E378
  c->r[3]=c->r[30]|c->r[30]; // 8019E37C
  c->r[4]=0u+0x00000000u; // 8019E380
  c->lr=0x8019E388u; f_8013114C(c); // 8019E384
  goto L_8019E3F4; // 8019E388
L_8019E38C:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E38C
  c->lr=0x8019E394u; f_8013B870(c); // 8019E390
  cmps(c,0,(int32_t)c->r[3],0); // 8019E394
  if (crb(c,2)) { goto L_8019E3AC; } // 8019E398
  c->r[3]=c->r[30]|c->r[30]; // 8019E39C
  c->r[4]=0u+0x00000042u; // 8019E3A0
  c->lr=0x8019E3A8u; f_8013114C(c); // 8019E3A4
  goto L_8019E3F4; // 8019E3A8
L_8019E3AC:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E3AC
  c->lr=0x8019E3B4u; f_8013B998(c); // 8019E3B0
  c->r[4]=c->r[3]|c->r[3]; // 8019E3B4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E3B8
  c->lr=0x8019E3C0u; f_80135498(c); // 8019E3BC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E3C0
  c->r[4]=0u+0x00000003u; // 8019E3C4
  c->r[5]=c->r[31]|c->r[31]; // 8019E3C8
  c->lr=0x8019E3D0u; f_80135F4C(c); // 8019E3CC
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E3D0
  c->lr=0x8019E3D8u; f_80134564(c); // 8019E3D4
  c->r[3]=c->r[30]|c->r[30]; // 8019E3D8
  c->r[4]=0u+0x00000000u; // 8019E3DC
  c->lr=0x8019E3E4u; f_8013114C(c); // 8019E3E0
  goto L_8019E3F4; // 8019E3E4
L_8019E3E8:;
  c->r[3]=c->r[30]|c->r[30]; // 8019E3E8
  c->r[4]=0u+0x0000004Eu; // 8019E3EC
  c->lr=0x8019E3F4u; f_8013114C(c); // 8019E3F0
L_8019E3F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E3F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019E3F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E3FC
  c->lr=c->r[0]; // 8019E400
  c->r[1]=c->r[1]+0x00000010u; // 8019E404
  return; // 8019E408
}

// fn_8019E40C
void f_8019E40C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E40C
  c->r[0]=c->lr; // 8019E410
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E418
  W32(c->r[1]+0x00000008u,c->r[30]); // 8019E41C
  c->r[30]=c->r[3]|c->r[3]; // 8019E420
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E424
  c->lr=0x8019E42Cu; f_80135154(c); // 8019E428
  c->r[31]=c->r[3]|c->r[3]; // 8019E42C
  cmps(c,0,(int32_t)c->r[3],2); // 8019E430
  if (crb(c,2)) { goto L_8019E45C; } // 8019E434
  if (!crb(c,0)) { goto L_8019E44C; } // 8019E438
  cmps(c,0,(int32_t)c->r[3],0); // 8019E43C
  if (crb(c,2)) { goto L_8019E45C; } // 8019E440
  if (!crb(c,0)) { goto L_8019E498; } // 8019E444
  goto L_8019E510; // 8019E448
L_8019E44C:;
  cmps(c,0,(int32_t)c->r[3],4); // 8019E44C
  if (crb(c,2)) { goto L_8019E504; } // 8019E450
  if (!crb(c,0)) { goto L_8019E510; } // 8019E454
  goto L_8019E4F4; // 8019E458
L_8019E45C:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E45C
  c->lr=0x8019E464u; f_8013B998(c); // 8019E460
  c->r[4]=c->r[3]|c->r[3]; // 8019E464
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E468
  c->lr=0x8019E470u; f_80135498(c); // 8019E46C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E470
  c->r[4]=0u+0x00000003u; // 8019E474
  c->r[5]=c->r[31]|c->r[31]; // 8019E478
  c->lr=0x8019E480u; f_80135F4C(c); // 8019E47C
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E480
  c->lr=0x8019E488u; f_80134564(c); // 8019E484
  c->r[3]=c->r[30]|c->r[30]; // 8019E488
  c->r[4]=0u+0x00000000u; // 8019E48C
  c->lr=0x8019E494u; f_8013114C(c); // 8019E490
  goto L_8019E510; // 8019E494
L_8019E498:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E498
  c->lr=0x8019E4A0u; f_8013B870(c); // 8019E49C
  cmps(c,0,(int32_t)c->r[3],0); // 8019E4A0
  if (crb(c,2)) { goto L_8019E4B8; } // 8019E4A4
  c->r[3]=c->r[30]|c->r[30]; // 8019E4A8
  c->r[4]=0u+0x00000042u; // 8019E4AC
  c->lr=0x8019E4B4u; f_8013114C(c); // 8019E4B0
  goto L_8019E510; // 8019E4B4
L_8019E4B8:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8019E4B8
  c->lr=0x8019E4C0u; f_8013B998(c); // 8019E4BC
  c->r[4]=c->r[3]|c->r[3]; // 8019E4C0
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E4C4
  c->lr=0x8019E4CCu; f_80135498(c); // 8019E4C8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E4CC
  c->r[4]=0u+0x00000003u; // 8019E4D0
  c->r[5]=c->r[31]|c->r[31]; // 8019E4D4
  c->lr=0x8019E4DCu; f_80135F4C(c); // 8019E4D8
  c->r[3]=R32(c->r[30]+0x000000E8u); // 8019E4DC
  c->lr=0x8019E4E4u; f_80134564(c); // 8019E4E0
  c->r[3]=c->r[30]|c->r[30]; // 8019E4E4
  c->r[4]=0u+0x00000000u; // 8019E4E8
  c->lr=0x8019E4F0u; f_8013114C(c); // 8019E4EC
  goto L_8019E510; // 8019E4F0
L_8019E4F4:;
  c->r[3]=c->r[30]|c->r[30]; // 8019E4F4
  c->r[4]=0u+0x00000048u; // 8019E4F8
  c->lr=0x8019E500u; f_8013114C(c); // 8019E4FC
  goto L_8019E510; // 8019E500
L_8019E504:;
  c->r[3]=c->r[30]|c->r[30]; // 8019E504
  c->r[4]=0u+0x0000004Eu; // 8019E508
  c->lr=0x8019E510u; f_8013114C(c); // 8019E50C
L_8019E510:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E510
  c->r[30]=R32(c->r[1]+0x00000008u); // 8019E514
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E518
  c->lr=c->r[0]; // 8019E51C
  c->r[1]=c->r[1]+0x00000010u; // 8019E520
  return; // 8019E524
}

// fn_8019E528
void f_8019E528(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E528
  c->r[0]=c->lr; // 8019E52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E530
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E534
  c->r[31]=c->r[3]|c->r[3]; // 8019E538
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E53C
  c->lr=0x8019E544u; f_80135154(c); // 8019E540
  c->r[4]=c->r[3]|c->r[3]; // 8019E544
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E548
  c->lr=0x8019E550u; f_8013C1CC(c); // 8019E54C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E550
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E554
  c->lr=c->r[0]; // 8019E558
  c->r[1]=c->r[1]+0x00000010u; // 8019E55C
  return; // 8019E560
}

// fn_8019E564
void f_8019E564(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E564
  c->r[0]=c->lr; // 8019E568
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E56C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E570
  c->r[31]=c->r[3]|c->r[3]; // 8019E574
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E578
  c->r[4]=0u+0x00000003u; // 8019E57C
  c->lr=0x8019E584u; f_8013BE58(c); // 8019E580
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E584
  c->lr=0x8019E58Cu; f_8013C1EC(c); // 8019E588
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E58C
  c->lr=0x8019E594u; f_8013B2A0(c); // 8019E590
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E594
  c->lr=0x8019E59Cu; f_8013B520(c); // 8019E598
  c->r[4]=c->r[3]|c->r[3]; // 8019E59C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E5A0
  c->lr=0x8019E5A8u; f_8013519C(c); // 8019E5A4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E5A8
  c->lr=0x8019E5B0u; f_8013515C(c); // 8019E5AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E5B0
  c->lr=0x8019E5B8u; f_801345AC(c); // 8019E5B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E5B8
  c->lr=0x8019E5C0u; f_80135E14(c); // 8019E5BC
  c->r[3]=c->r[31]|c->r[31]; // 8019E5C0
  c->lr=0x8019E5C8u; f_8019E528(c); // 8019E5C4
  c->r[3]=c->r[31]|c->r[31]; // 8019E5C8
  c->r[4]=0u+0x0000003Au; // 8019E5CC
  c->lr=0x8019E5D4u; f_8013114C(c); // 8019E5D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E5D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E5D8
  c->lr=c->r[0]; // 8019E5DC
  c->r[1]=c->r[1]+0x00000010u; // 8019E5E0
  return; // 8019E5E4
}

// fn_8019E5E8
void f_8019E5E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E5E8
  c->r[0]=c->lr; // 8019E5EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E5F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E5F4
  c->r[31]=c->r[3]|c->r[3]; // 8019E5F8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E5FC
  c->lr=0x8019E604u; f_8013B514(c); // 8019E600
  cmps(c,0,(int32_t)c->r[3],0); // 8019E604
  if (crb(c,2)) { goto L_8019E620; } // 8019E608
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E60C
  c->lr=0x8019E614u; f_8013B478(c); // 8019E610
  c->r[3]=c->r[31]|c->r[31]; // 8019E614
  c->r[4]=0u+0x0000003Du; // 8019E618
  c->lr=0x8019E620u; f_8013114C(c); // 8019E61C
L_8019E620:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E620
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E624
  c->lr=c->r[0]; // 8019E628
  c->r[1]=c->r[1]+0x00000010u; // 8019E62C
  return; // 8019E630
}

// fn_8019E634
void f_8019E634(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E634
  c->r[0]=c->lr; // 8019E638
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E63C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E640
  c->r[31]=c->r[3]|c->r[3]; // 8019E644
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E648
  c->lr=0x8019E650u; f_8013C3C0(c); // 8019E64C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E650
  c->lr=0x8019E658u; f_8013B324(c); // 8019E654
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E658
  c->lr=0x8019E660u; f_8013B520(c); // 8019E65C
  c->r[4]=c->r[3]|c->r[3]; // 8019E660
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E664
  c->lr=0x8019E66Cu; f_8013519C(c); // 8019E668
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E66C
  c->lr=0x8019E674u; f_8013515C(c); // 8019E670
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E674
  c->lr=0x8019E67Cu; f_801345AC(c); // 8019E678
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E67C
  c->lr=0x8019E684u; f_80135E14(c); // 8019E680
  c->r[3]=c->r[31]|c->r[31]; // 8019E684
  c->lr=0x8019E68Cu; f_8019E528(c); // 8019E688
  c->r[3]=c->r[31]|c->r[31]; // 8019E68C
  c->r[4]=0u+0x0000003Cu; // 8019E690
  c->lr=0x8019E698u; f_8013114C(c); // 8019E694
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E698
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E69C
  c->lr=c->r[0]; // 8019E6A0
  c->r[1]=c->r[1]+0x00000010u; // 8019E6A4
  return; // 8019E6A8
}

// fn_8019E6AC
void f_8019E6AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E6AC
  c->r[0]=c->lr; // 8019E6B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E6B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E6B8
  c->r[31]=c->r[3]|c->r[3]; // 8019E6BC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E6C0
  c->lr=0x8019E6C8u; f_8013B518(c); // 8019E6C4
  cmps(c,0,(int32_t)c->r[3],0); // 8019E6C8
  if (crb(c,2)) { goto L_8019E6E4; } // 8019E6CC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E6D0
  c->lr=0x8019E6D8u; f_8013B478(c); // 8019E6D4
  c->r[3]=c->r[31]|c->r[31]; // 8019E6D8
  c->r[4]=0u+0x0000003Du; // 8019E6DC
  c->lr=0x8019E6E4u; f_8013114C(c); // 8019E6E0
L_8019E6E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E6E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E6E8
  c->lr=c->r[0]; // 8019E6EC
  c->r[1]=c->r[1]+0x00000010u; // 8019E6F0
  return; // 8019E6F4
}

// fn_8019E6F8
void f_8019E6F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E6F8
  c->r[0]=c->lr; // 8019E6FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E700
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E704
  c->r[31]=c->r[3]|c->r[3]; // 8019E708
  c->r[3]=0u+0x00000001u; // 8019E70C
  c->lr=0x8019E714u; f_8019CD1C(c); // 8019E710
  cmps(c,0,(int32_t)c->r[3],0); // 8019E714
  if (crb(c,2)) { goto L_8019E728; } // 8019E718
  c->r[3]=c->r[31]|c->r[31]; // 8019E71C
  c->r[4]=0u+0x00000053u; // 8019E720
  c->lr=0x8019E728u; f_8013114C(c); // 8019E724
L_8019E728:;
  c->r[3]=0u+0x00000003u; // 8019E728
  c->lr=0x8019E730u; f_8019CD1C(c); // 8019E72C
  cmps(c,0,(int32_t)c->r[3],0); // 8019E730
  if (crb(c,2)) { goto L_8019E740; } // 8019E734
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E738
  c->lr=0x8019E740u; f_80135108(c); // 8019E73C
L_8019E740:;
  c->r[3]=0u+0x00000004u; // 8019E740
  c->lr=0x8019E748u; f_8019CD1C(c); // 8019E744
  cmps(c,0,(int32_t)c->r[3],0); // 8019E748
  if (crb(c,2)) { goto L_8019E758; } // 8019E74C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E750
  c->lr=0x8019E758u; f_801350BC(c); // 8019E754
L_8019E758:;
  c->r[3]=0u+0x00000000u; // 8019E758
  c->lr=0x8019E760u; f_8019CD1C(c); // 8019E75C
  cmps(c,0,(int32_t)c->r[3],0); // 8019E760
  if (crb(c,2)) { goto L_8019E7A4; } // 8019E764
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E768
  c->lr=0x8019E770u; f_80135154(c); // 8019E76C
  c->r[4]=c->r[3]|c->r[3]; // 8019E770
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E774
  c->lr=0x8019E77Cu; f_8013B528(c); // 8019E778
  cmps(c,0,(int32_t)c->r[3],0); // 8019E77C
  if (crb(c,2)) { goto L_8019E790; } // 8019E780
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E784
  c->lr=0x8019E78Cu; f_80135F08(c); // 8019E788
  goto L_8019E7A4; // 8019E78C
L_8019E790:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E790
  c->lr=0x8019E798u; f_80135E7C(c); // 8019E794
  c->r[3]=c->r[31]|c->r[31]; // 8019E798
  c->r[4]=0u+0x0000003Eu; // 8019E79C
  c->lr=0x8019E7A4u; f_8013114C(c); // 8019E7A0
L_8019E7A4:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E7A4
  c->lr=0x8019E7ACu; f_8013B478(c); // 8019E7A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E7AC
  c->lr=0x8019E7B4u; f_80135154(c); // 8019E7B0
  c->r[4]=c->r[3]|c->r[3]; // 8019E7B4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E7B8
  c->lr=0x8019E7C0u; f_8013BF10(c); // 8019E7BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E7C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E7C4
  c->lr=c->r[0]; // 8019E7C8
  c->r[1]=c->r[1]+0x00000010u; // 8019E7CC
  return; // 8019E7D0
}

// fn_8019E7D4
void f_8019E7D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E7D4
  c->r[0]=c->lr; // 8019E7D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E7DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E7E0
  c->r[31]=c->r[3]|c->r[3]; // 8019E7E4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E7E8
  c->lr=0x8019E7F0u; f_80135154(c); // 8019E7EC
  c->r[4]=c->r[3]|c->r[3]; // 8019E7F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E7F4
  c->lr=0x8019E7FCu; f_8013BE60(c); // 8019E7F8
  c->r[3]=c->r[31]|c->r[31]; // 8019E7FC
  c->r[4]=0u+0x0000003Fu; // 8019E800
  c->lr=0x8019E808u; f_8013114C(c); // 8019E804
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E808
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E80C
  c->lr=c->r[0]; // 8019E810
  c->r[1]=c->r[1]+0x00000010u; // 8019E814
  return; // 8019E818
}

// fn_8019E81C
void f_8019E81C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E81C
  c->r[0]=c->lr; // 8019E820
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E824
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E828
  c->r[31]=c->r[3]|c->r[3]; // 8019E82C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E830
  c->lr=0x8019E838u; f_8013BFD0(c); // 8019E834
  cmps(c,0,(int32_t)c->r[3],0); // 8019E838
  if (crb(c,2)) { goto L_8019E858; } // 8019E83C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E840
  c->r[4]=0u+0x00000000u; // 8019E844
  c->lr=0x8019E84Cu; f_8013A1F8(c); // 8019E848
  c->r[3]=c->r[31]|c->r[31]; // 8019E84C
  c->r[4]=0u+0x00000040u; // 8019E850
  c->lr=0x8019E858u; f_8013114C(c); // 8019E854
L_8019E858:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E858
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E85C
  c->lr=c->r[0]; // 8019E860
  c->r[1]=c->r[1]+0x00000010u; // 8019E864
  return; // 8019E868
}

// fn_8019E86C
void f_8019E86C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E86C
  c->r[0]=c->lr; // 8019E870
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E874
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E878
  c->r[31]=c->r[3]|c->r[3]; // 8019E87C
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019E880
  c->lr=0x8019E888u; f_80135E48(c); // 8019E884
  c->r[3]=c->r[31]|c->r[31]; // 8019E888
  c->lr=0x8019E890u; f_8019E078(c); // 8019E88C
  cmps(c,0,(int32_t)c->r[3],0); // 8019E890
  if (crb(c,2)) { goto L_8019E8B0; } // 8019E894
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E898
  c->r[4]=0u+0x00000000u; // 8019E89C
  c->lr=0x8019E8A4u; f_8013A0A4(c); // 8019E8A0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E8A4
  c->lr=0x8019E8ACu; f_8013B390(c); // 8019E8A8
  goto L_8019E8C4; // 8019E8AC
L_8019E8B0:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E8B0
  c->r[4]=0u+0x00000001u; // 8019E8B4
  c->lr=0x8019E8BCu; f_8013A0E8(c); // 8019E8B8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E8BC
  c->lr=0x8019E8C4u; f_8013B410(c); // 8019E8C0
L_8019E8C4:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E8C4
  c->r[4]=0u+0x00000041u; // 8019E8C8
  c->lr=0x8019E8D0u; f_8013114C(c); // 8019E8CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E8D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E8D4
  c->lr=c->r[0]; // 8019E8D8
  c->r[1]=c->r[1]+0x00000010u; // 8019E8DC
  return; // 8019E8E0
}

// fn_8019E8E4
void f_8019E8E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E8E4
  c->r[0]=c->lr; // 8019E8E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E8EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E8F0
  c->r[31]=c->r[3]|c->r[3]; // 8019E8F4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E8F8
  c->lr=0x8019E900u; f_8013B518(c); // 8019E8FC
  cmps(c,0,(int32_t)c->r[3],0); // 8019E900
  if (crb(c,2)) { goto L_8019E990; } // 8019E904
  c->r[3]=c->r[31]|c->r[31]; // 8019E908
  c->lr=0x8019E910u; f_8019E078(c); // 8019E90C
  cmps(c,0,(int32_t)c->r[3],0); // 8019E910
  if (crb(c,2)) { goto L_8019E928; } // 8019E914
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E918
  c->r[4]=0u+0x00000000u; // 8019E91C
  c->lr=0x8019E924u; f_8013A03C(c); // 8019E920
  goto L_8019E934; // 8019E924
L_8019E928:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E928
  c->r[4]=0u+0x00000000u; // 8019E92C
  c->lr=0x8019E934u; f_8013A0E8(c); // 8019E930
L_8019E934:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E934
  c->lr=0x8019E93Cu; f_8013B998(c); // 8019E938
  cmps(c,0,(int32_t)c->r[3],3); // 8019E93C
  if (crb(c,2)) { goto L_8019E97C; } // 8019E940
  if (!crb(c,0)) { goto L_8019E958; } // 8019E944
  cmps(c,0,(int32_t)c->r[3],1); // 8019E948
  if (crb(c,2)) { goto L_8019E964; } // 8019E94C
  if (!crb(c,0)) { goto L_8019E970; } // 8019E950
  goto L_8019E990; // 8019E954
L_8019E958:;
  cmps(c,0,(int32_t)c->r[3],5); // 8019E958
  if (!crb(c,0)) { goto L_8019E990; } // 8019E95C
  goto L_8019E988; // 8019E960
L_8019E964:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E964
  c->lr=0x8019E96Cu; f_8019E1B0(c); // 8019E968
  goto L_8019E990; // 8019E96C
L_8019E970:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E970
  c->lr=0x8019E978u; f_8019E24C(c); // 8019E974
  goto L_8019E990; // 8019E978
L_8019E97C:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E97C
  c->lr=0x8019E984u; f_8019E304(c); // 8019E980
  goto L_8019E990; // 8019E984
L_8019E988:;
  c->r[3]=c->r[31]|c->r[31]; // 8019E988
  c->lr=0x8019E990u; f_8019E40C(c); // 8019E98C
L_8019E990:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019E990
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019E994
  c->lr=c->r[0]; // 8019E998
  c->r[1]=c->r[1]+0x00000010u; // 8019E99C
  return; // 8019E9A0
}

// fn_8019E9A4
void f_8019E9A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019E9A4
  c->r[0]=c->lr; // 8019E9A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019E9AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019E9B0
  c->r[31]=c->r[3]|c->r[3]; // 8019E9B4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019E9B8
  c->lr=0x8019E9C0u; f_8013B530(c); // 8019E9BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E9C0
  c->lr=0x8019E9C8u; f_80135E14(c); // 8019E9C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E9C8
  c->lr=0x8019E9D0u; f_801345AC(c); // 8019E9CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E9D0
  c->lr=0x8019E9D8u; f_801353D4(c); // 8019E9D4
  c->r[4]=c->r[3]|c->r[3]; // 8019E9D8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E9DC
  c->lr=0x8019E9E4u; f_8013C1CC(c); // 8019E9E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E9E4
  c->lr=0x8019E9ECu; f_801353D4(c); // 8019E9E8
  c->r[4]=c->r[3]|c->r[3]; // 8019E9EC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019E9F0
  c->lr=0x8019E9F8u; f_8013C020(c); // 8019E9F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019E9F8
  c->lr=0x8019EA00u; f_80135480(c); // 8019E9FC
  c->r[4]=c->r[3]|c->r[3]; // 8019EA00
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EA04
  c->lr=0x8019EA0Cu; f_8013C0EC(c); // 8019EA08
  c->r[3]=c->r[31]|c->r[31]; // 8019EA0C
  c->r[4]=0u+0x00000043u; // 8019EA10
  c->lr=0x8019EA18u; f_8013114C(c); // 8019EA14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EA18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EA1C
  c->lr=c->r[0]; // 8019EA20
  c->r[1]=c->r[1]+0x00000010u; // 8019EA24
  return; // 8019EA28
}

// fn_8019EA2C
void f_8019EA2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EA2C
  c->r[0]=c->lr; // 8019EA30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EA34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EA38
  c->r[31]=c->r[3]|c->r[3]; // 8019EA3C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019EA40
  c->lr=0x8019EA48u; f_8013B7C4(c); // 8019EA44
  cmps(c,0,(int32_t)c->r[3],0); // 8019EA48
  if (crb(c,2)) { goto L_8019EA68; } // 8019EA4C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EA50
  c->r[4]=0u+0x00000001u; // 8019EA54
  c->lr=0x8019EA5Cu; f_8013B718(c); // 8019EA58
  c->r[3]=c->r[31]|c->r[31]; // 8019EA5C
  c->r[4]=0u+0x00000044u; // 8019EA60
  c->lr=0x8019EA68u; f_8013114C(c); // 8019EA64
L_8019EA68:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EA68
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EA6C
  c->lr=c->r[0]; // 8019EA70
  c->r[1]=c->r[1]+0x00000010u; // 8019EA74
  return; // 8019EA78
}

// fn_8019EA7C
void f_8019EA7C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EA7C
  c->r[0]=c->lr; // 8019EA80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EA84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EA88
  c->r[31]=c->r[3]|c->r[3]; // 8019EA8C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019EA90
  c->lr=0x8019EA98u; f_8013B7D4(c); // 8019EA94
  c->r[4]=c->r[3]|c->r[3]; // 8019EA98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EA9C
  c->lr=0x8019EAA4u; f_80135488(c); // 8019EAA0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EAA4
  c->lr=0x8019EAACu; f_8013B7CC(c); // 8019EAA8
  c->r[4]=c->r[3]|c->r[3]; // 8019EAAC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EAB0
  c->lr=0x8019EAB8u; f_80135490(c); // 8019EAB4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EAB8
  c->lr=0x8019EAC0u; f_80135E08(c); // 8019EABC
  c->r[3]=c->r[31]|c->r[31]; // 8019EAC0
  c->r[4]=0u+0x00000045u; // 8019EAC4
  c->lr=0x8019EACCu; f_8013114C(c); // 8019EAC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EACC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EAD0
  c->lr=c->r[0]; // 8019EAD4
  c->r[1]=c->r[1]+0x00000010u; // 8019EAD8
  return; // 8019EADC
}

// fn_8019EAE0
void f_8019EAE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EAE0
  c->r[0]=c->lr; // 8019EAE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EAE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EAEC
  c->r[31]=c->r[3]|c->r[3]; // 8019EAF0
  c->r[3]=0u+0x00000001u; // 8019EAF4
  c->lr=0x8019EAFCu; f_8019CD1C(c); // 8019EAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8019EAFC
  if (crb(c,2)) { goto L_8019EB24; } // 8019EB00
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB04
  c->lr=0x8019EB0Cu; f_801345A4(c); // 8019EB08
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB0C
  c->lr=0x8019EB14u; f_80135E08(c); // 8019EB10
  c->r[3]=c->r[31]|c->r[31]; // 8019EB14
  c->r[4]=0u+0x00000046u; // 8019EB18
  c->lr=0x8019EB20u; f_8013114C(c); // 8019EB1C
  goto L_8019ECF8; // 8019EB20
L_8019EB24:;
  c->r[3]=0u+0x00000000u; // 8019EB24
  c->lr=0x8019EB2Cu; f_8019CD1C(c); // 8019EB28
  cmps(c,0,(int32_t)c->r[3],0); // 8019EB2C
  if (crb(c,2)) { goto L_8019EBA4; } // 8019EB30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB34
  c->lr=0x8019EB3Cu; f_801353D4(c); // 8019EB38
  c->r[4]=c->r[3]|c->r[3]; // 8019EB3C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EB40
  c->lr=0x8019EB48u; f_8013C020(c); // 8019EB44
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB48
  c->lr=0x8019EB50u; f_80135480(c); // 8019EB4C
  c->r[4]=c->r[3]|c->r[3]; // 8019EB50
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EB54
  c->lr=0x8019EB5Cu; f_8013C0EC(c); // 8019EB58
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EB5C
  c->r[4]=0u+0x00000001u; // 8019EB60
  c->lr=0x8019EB68u; f_8013B718(c); // 8019EB64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB68
  c->lr=0x8019EB70u; f_8013570C(c); // 8019EB6C
  cmps(c,0,(int32_t)c->r[3],0); // 8019EB70
  if (!crb(c,2)) { goto L_8019EB84; } // 8019EB74
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB78
  c->lr=0x8019EB80u; f_80135F08(c); // 8019EB7C
  goto L_8019ECF8; // 8019EB80
L_8019EB84:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB84
  c->lr=0x8019EB8Cu; f_80135E08(c); // 8019EB88
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EB8C
  c->lr=0x8019EB94u; f_80135E7C(c); // 8019EB90
  c->r[3]=c->r[31]|c->r[31]; // 8019EB94
  c->r[4]=0u+0x00000046u; // 8019EB98
  c->lr=0x8019EBA0u; f_8013114C(c); // 8019EB9C
  goto L_8019ECF8; // 8019EBA0
L_8019EBA4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EBA4
  c->lr=0x8019EBACu; f_80135DAC(c); // 8019EBA8
  cmps(c,0,(int32_t)c->r[3],0); // 8019EBAC
  if (!crb(c,2)) { goto L_8019EC44; } // 8019EBB0
  c->r[3]=0u+0x00000008u; // 8019EBB4
  c->lr=0x8019EBBCu; f_8019CD1C(c); // 8019EBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8019EBBC
  if (crb(c,2)) { goto L_8019EC44; } // 8019EBC0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EBC4
  c->lr=0x8019EBCCu; f_8013B804(c); // 8019EBC8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EBCC
  c->lr=0x8019EBD4u; f_801353C8(c); // 8019EBD0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EBD4
  c->lr=0x8019EBDCu; f_80135474(c); // 8019EBD8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EBDC
  c->lr=0x8019EBE4u; f_8013B7D4(c); // 8019EBE0
  c->r[4]=c->r[3]|c->r[3]; // 8019EBE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EBE8
  c->lr=0x8019EBF0u; f_80135488(c); // 8019EBEC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EBF0
  c->lr=0x8019EBF8u; f_8013B7CC(c); // 8019EBF4
  c->r[4]=c->r[3]|c->r[3]; // 8019EBF8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EBFC
  c->lr=0x8019EC04u; f_80135490(c); // 8019EC00
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC04
  c->lr=0x8019EC0Cu; f_80135EB0(c); // 8019EC08
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC0C
  c->lr=0x8019EC14u; f_801353D4(c); // 8019EC10
  c->r[4]=c->r[3]|c->r[3]; // 8019EC14
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EC18
  c->lr=0x8019EC20u; f_8013C020(c); // 8019EC1C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC20
  c->lr=0x8019EC28u; f_80135480(c); // 8019EC24
  c->r[4]=c->r[3]|c->r[3]; // 8019EC28
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EC2C
  c->lr=0x8019EC34u; f_8013C0EC(c); // 8019EC30
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EC34
  c->r[4]=0u+0x00000001u; // 8019EC38
  c->lr=0x8019EC40u; f_8013B718(c); // 8019EC3C
  goto L_8019ECF8; // 8019EC40
L_8019EC44:;
  c->r[3]=0u+0x00000003u; // 8019EC44
  c->lr=0x8019EC4Cu; f_8019CD1C(c); // 8019EC48
  cmps(c,0,(int32_t)c->r[3],0); // 8019EC4C
  if (crb(c,2)) { goto L_8019EC5C; } // 8019EC50
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC54
  c->lr=0x8019EC5Cu; f_8013532C(c); // 8019EC58
L_8019EC5C:;
  c->r[3]=0u+0x00000004u; // 8019EC5C
  c->lr=0x8019EC64u; f_8019CD1C(c); // 8019EC60
  cmps(c,0,(int32_t)c->r[3],0); // 8019EC64
  if (crb(c,2)) { goto L_8019EC74; } // 8019EC68
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC6C
  c->lr=0x8019EC74u; f_801352D0(c); // 8019EC70
L_8019EC74:;
  c->r[3]=0u+0x00000006u; // 8019EC74
  c->lr=0x8019EC7Cu; f_8019CD1C(c); // 8019EC78
  cmps(c,0,(int32_t)c->r[3],0); // 8019EC7C
  if (crb(c,2)) { goto L_8019EC9C; } // 8019EC80
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EC84
  c->lr=0x8019EC8Cu; f_8013C1DC(c); // 8019EC88
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC8C
  c->lr=0x8019EC94u; f_80135428(c); // 8019EC90
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EC94
  c->lr=0x8019EC9Cu; f_80135388(c); // 8019EC98
L_8019EC9C:;
  c->r[3]=0u+0x00000005u; // 8019EC9C
  c->lr=0x8019ECA4u; f_8019CD1C(c); // 8019ECA0
  cmps(c,0,(int32_t)c->r[3],0); // 8019ECA4
  if (crb(c,2)) { goto L_8019ECC4; } // 8019ECA8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019ECAC
  c->lr=0x8019ECB4u; f_8013C1E4(c); // 8019ECB0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ECB4
  c->lr=0x8019ECBCu; f_801353DC(c); // 8019ECB8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ECBC
  c->lr=0x8019ECC4u; f_80135388(c); // 8019ECC0
L_8019ECC4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ECC4
  c->lr=0x8019ECCCu; f_801353D4(c); // 8019ECC8
  c->r[4]=c->r[3]|c->r[3]; // 8019ECCC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019ECD0
  c->lr=0x8019ECD8u; f_8013C020(c); // 8019ECD4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ECD8
  c->lr=0x8019ECE0u; f_80135480(c); // 8019ECDC
  c->r[4]=c->r[3]|c->r[3]; // 8019ECE0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019ECE4
  c->lr=0x8019ECECu; f_8013C0EC(c); // 8019ECE8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019ECEC
  c->r[4]=0u+0x00000001u; // 8019ECF0
  c->lr=0x8019ECF8u; f_8013B718(c); // 8019ECF4
L_8019ECF8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019ECF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019ECFC
  c->lr=c->r[0]; // 8019ED00
  c->r[1]=c->r[1]+0x00000010u; // 8019ED04
  return; // 8019ED08
}

// fn_8019ED0C
void f_8019ED0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019ED0C
  c->r[0]=c->lr; // 8019ED10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019ED14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019ED18
  c->r[31]=c->r[3]|c->r[3]; // 8019ED1C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019ED20
  c->r[4]=0u+0x00000000u; // 8019ED24
  c->lr=0x8019ED2Cu; f_8013A100(c); // 8019ED28
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ED2C
  c->lr=0x8019ED34u; f_80135E48(c); // 8019ED30
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ED34
  c->lr=0x8019ED3Cu; f_801345B4(c); // 8019ED38
  cmps(c,0,(int32_t)c->r[3],0); // 8019ED3C
  if (crb(c,2)) { goto L_8019ED50; } // 8019ED40
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019ED44
  c->lr=0x8019ED4Cu; f_8013B614(c); // 8019ED48
  goto L_8019ED58; // 8019ED4C
L_8019ED50:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019ED50
  c->lr=0x8019ED58u; f_8013B690(c); // 8019ED54
L_8019ED58:;
  c->r[3]=c->r[31]|c->r[31]; // 8019ED58
  c->r[4]=0u+0x00000047u; // 8019ED5C
  c->lr=0x8019ED64u; f_8013114C(c); // 8019ED60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019ED64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019ED68
  c->lr=c->r[0]; // 8019ED6C
  c->r[1]=c->r[1]+0x00000010u; // 8019ED70
  return; // 8019ED74
}

// fn_8019ED78
void f_8019ED78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019ED78
  c->r[0]=c->lr; // 8019ED7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019ED80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019ED84
  c->r[31]=c->r[3]|c->r[3]; // 8019ED88
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019ED8C
  c->lr=0x8019ED94u; f_8013B7C4(c); // 8019ED90
  cmps(c,0,(int32_t)c->r[3],0); // 8019ED94
  if (crb(c,2)) { goto L_8019EE28; } // 8019ED98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019ED9C
  c->lr=0x8019EDA4u; f_801345B4(c); // 8019EDA0
  cmps(c,0,(int32_t)c->r[3],0); // 8019EDA4
  if (crb(c,2)) { goto L_8019EDC8; } // 8019EDA8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EDAC
  c->r[4]=0u+0x00000000u; // 8019EDB0
  c->lr=0x8019EDB8u; f_8013A0F8(c); // 8019EDB4
  c->r[3]=c->r[31]|c->r[31]; // 8019EDB8
  c->r[4]=0u+0x0000003Bu; // 8019EDBC
  c->lr=0x8019EDC4u; f_8013114C(c); // 8019EDC0
  goto L_8019EE28; // 8019EDC4
L_8019EDC8:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EDC8
  c->r[4]=0u+0x00000000u; // 8019EDCC
  c->lr=0x8019EDD4u; f_8013A108(c); // 8019EDD0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EDD4
  c->lr=0x8019EDDCu; f_8013B998(c); // 8019EDD8
  c->r[4]=c->r[3]|c->r[3]; // 8019EDDC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EDE0
  c->lr=0x8019EDE8u; f_80135498(c); // 8019EDE4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EDE8
  c->lr=0x8019EDF0u; f_8013B7DC(c); // 8019EDEC
  c->r[4]=c->r[3]|c->r[3]; // 8019EDF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EDF4
  c->lr=0x8019EDFCu; f_80135F44(c); // 8019EDF8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EDFC
  c->lr=0x8019EE04u; f_80135154(c); // 8019EE00
  c->r[5]=c->r[3]|c->r[3]; // 8019EE04
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE08
  c->r[4]=0u+0x00000003u; // 8019EE0C
  c->lr=0x8019EE14u; f_80135F4C(c); // 8019EE10
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE14
  c->lr=0x8019EE1Cu; f_80134564(c); // 8019EE18
  c->r[3]=c->r[31]|c->r[31]; // 8019EE1C
  c->r[4]=0u+0x00000000u; // 8019EE20
  c->lr=0x8019EE28u; f_8013114C(c); // 8019EE24
L_8019EE28:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EE28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EE2C
  c->lr=c->r[0]; // 8019EE30
  c->r[1]=c->r[1]+0x00000010u; // 8019EE34
  return; // 8019EE38
}

// fn_8019EE3C
void f_8019EE3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EE3C
  c->r[0]=c->lr; // 8019EE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EE48
  c->r[31]=c->r[3]|c->r[3]; // 8019EE4C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019EE50
  c->lr=0x8019EE58u; f_8013BE28(c); // 8019EE54
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EE58
  c->lr=0x8019EE60u; f_8013B530(c); // 8019EE5C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE60
  c->lr=0x8019EE68u; f_80135E14(c); // 8019EE64
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE68
  c->lr=0x8019EE70u; f_801345AC(c); // 8019EE6C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE70
  c->lr=0x8019EE78u; f_801353D4(c); // 8019EE74
  c->r[4]=c->r[3]|c->r[3]; // 8019EE78
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EE7C
  c->lr=0x8019EE84u; f_8013C1CC(c); // 8019EE80
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE84
  c->lr=0x8019EE8Cu; f_801353D4(c); // 8019EE88
  c->r[4]=c->r[3]|c->r[3]; // 8019EE8C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EE90
  c->lr=0x8019EE98u; f_8013C020(c); // 8019EE94
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EE98
  c->lr=0x8019EEA0u; f_80135480(c); // 8019EE9C
  c->r[4]=c->r[3]|c->r[3]; // 8019EEA0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EEA4
  c->lr=0x8019EEACu; f_8013C0EC(c); // 8019EEA8
  c->r[3]=c->r[31]|c->r[31]; // 8019EEAC
  c->r[4]=0u+0x00000049u; // 8019EEB0
  c->lr=0x8019EEB8u; f_8013114C(c); // 8019EEB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EEBC
  c->lr=c->r[0]; // 8019EEC0
  c->r[1]=c->r[1]+0x00000010u; // 8019EEC4
  return; // 8019EEC8
}

// fn_8019EECC
void f_8019EECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EECC
  c->r[0]=c->lr; // 8019EED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EED8
  c->r[31]=c->r[3]|c->r[3]; // 8019EEDC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019EEE0
  c->lr=0x8019EEE8u; f_8013B7C4(c); // 8019EEE4
  cmps(c,0,(int32_t)c->r[3],0); // 8019EEE8
  if (crb(c,2)) { goto L_8019EF08; } // 8019EEEC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EEF0
  c->r[4]=0u+0x00000000u; // 8019EEF4
  c->lr=0x8019EEFCu; f_8013B718(c); // 8019EEF8
  c->r[3]=c->r[31]|c->r[31]; // 8019EEFC
  c->r[4]=0u+0x0000004Au; // 8019EF00
  c->lr=0x8019EF08u; f_8013114C(c); // 8019EF04
L_8019EF08:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EF08
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EF0C
  c->lr=c->r[0]; // 8019EF10
  c->r[1]=c->r[1]+0x00000010u; // 8019EF14
  return; // 8019EF18
}

// fn_8019EF1C
void f_8019EF1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EF1C
  c->r[0]=c->lr; // 8019EF20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EF24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EF28
  c->r[31]=c->r[3]|c->r[3]; // 8019EF2C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019EF30
  c->lr=0x8019EF38u; f_8013B7D4(c); // 8019EF34
  c->r[4]=c->r[3]|c->r[3]; // 8019EF38
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EF3C
  c->lr=0x8019EF44u; f_80135488(c); // 8019EF40
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EF44
  c->lr=0x8019EF4Cu; f_8013B7CC(c); // 8019EF48
  c->r[4]=c->r[3]|c->r[3]; // 8019EF4C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EF50
  c->lr=0x8019EF58u; f_80135490(c); // 8019EF54
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EF58
  c->lr=0x8019EF60u; f_80135E08(c); // 8019EF5C
  c->r[3]=c->r[31]|c->r[31]; // 8019EF60
  c->r[4]=0u+0x0000004Bu; // 8019EF64
  c->lr=0x8019EF6Cu; f_8013114C(c); // 8019EF68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019EF6C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019EF70
  c->lr=c->r[0]; // 8019EF74
  c->r[1]=c->r[1]+0x00000010u; // 8019EF78
  return; // 8019EF7C
}

// fn_8019EF80
void f_8019EF80(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019EF80
  c->r[0]=c->lr; // 8019EF84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019EF88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019EF8C
  c->r[31]=c->r[3]|c->r[3]; // 8019EF90
  c->r[3]=0u+0x00000001u; // 8019EF94
  c->lr=0x8019EF9Cu; f_8019CD1C(c); // 8019EF98
  cmps(c,0,(int32_t)c->r[3],0); // 8019EF9C
  if (crb(c,2)) { goto L_8019EFC4; } // 8019EFA0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EFA4
  c->lr=0x8019EFACu; f_801345A4(c); // 8019EFA8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EFAC
  c->lr=0x8019EFB4u; f_80135E08(c); // 8019EFB0
  c->r[3]=c->r[31]|c->r[31]; // 8019EFB4
  c->r[4]=0u+0x0000004Cu; // 8019EFB8
  c->lr=0x8019EFC0u; f_8013114C(c); // 8019EFBC
  goto L_8019F1B4; // 8019EFC0
L_8019EFC4:;
  c->r[3]=0u+0x00000000u; // 8019EFC4
  c->lr=0x8019EFCCu; f_8019CD1C(c); // 8019EFC8
  cmps(c,0,(int32_t)c->r[3],0); // 8019EFCC
  if (crb(c,2)) { goto L_8019F060; } // 8019EFD0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EFD4
  c->lr=0x8019EFDCu; f_801353D4(c); // 8019EFD8
  c->r[4]=c->r[3]|c->r[3]; // 8019EFDC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EFE0
  c->lr=0x8019EFE8u; f_8013C020(c); // 8019EFE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019EFE8
  c->lr=0x8019EFF0u; f_80135480(c); // 8019EFEC
  c->r[4]=c->r[3]|c->r[3]; // 8019EFF0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EFF4
  c->lr=0x8019EFFCu; f_8013C0EC(c); // 8019EFF8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019EFFC
  c->r[4]=0u+0x00000000u; // 8019F000
  c->lr=0x8019F008u; f_8013B718(c); // 8019F004
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F008
  c->lr=0x8019F010u; f_8013570C(c); // 8019F00C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F010
  if (crb(c,2)) { goto L_8019F034; } // 8019F014
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F018
  c->lr=0x8019F020u; f_8013B7DC(c); // 8019F01C
  c->r[4]=c->r[3]|c->r[3]; // 8019F020
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F024
  c->lr=0x8019F02Cu; f_801357DC(c); // 8019F028
  cmps(c,0,(int32_t)c->r[3],0); // 8019F02C
  if (crb(c,2)) { goto L_8019F040; } // 8019F030
L_8019F034:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F034
  c->lr=0x8019F03Cu; f_80135F08(c); // 8019F038
  goto L_8019F1B4; // 8019F03C
L_8019F040:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F040
  c->lr=0x8019F048u; f_80135E08(c); // 8019F044
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F048
  c->lr=0x8019F050u; f_80135E7C(c); // 8019F04C
  c->r[3]=c->r[31]|c->r[31]; // 8019F050
  c->r[4]=0u+0x0000004Cu; // 8019F054
  c->lr=0x8019F05Cu; f_8013114C(c); // 8019F058
  goto L_8019F1B4; // 8019F05C
L_8019F060:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F060
  c->lr=0x8019F068u; f_80135DAC(c); // 8019F064
  cmps(c,0,(int32_t)c->r[3],0); // 8019F068
  if (!crb(c,2)) { goto L_8019F100; } // 8019F06C
  c->r[3]=0u+0x00000008u; // 8019F070
  c->lr=0x8019F078u; f_8019CD1C(c); // 8019F074
  cmps(c,0,(int32_t)c->r[3],0); // 8019F078
  if (crb(c,2)) { goto L_8019F100; } // 8019F07C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F080
  c->lr=0x8019F088u; f_8013B804(c); // 8019F084
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F088
  c->lr=0x8019F090u; f_801353C8(c); // 8019F08C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F090
  c->lr=0x8019F098u; f_80135474(c); // 8019F094
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F098
  c->lr=0x8019F0A0u; f_8013B7D4(c); // 8019F09C
  c->r[4]=c->r[3]|c->r[3]; // 8019F0A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F0A4
  c->lr=0x8019F0ACu; f_80135488(c); // 8019F0A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F0AC
  c->lr=0x8019F0B4u; f_8013B7CC(c); // 8019F0B0
  c->r[4]=c->r[3]|c->r[3]; // 8019F0B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F0B8
  c->lr=0x8019F0C0u; f_80135490(c); // 8019F0BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F0C0
  c->lr=0x8019F0C8u; f_80135EB0(c); // 8019F0C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F0C8
  c->lr=0x8019F0D0u; f_801353D4(c); // 8019F0CC
  c->r[4]=c->r[3]|c->r[3]; // 8019F0D0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F0D4
  c->lr=0x8019F0DCu; f_8013C020(c); // 8019F0D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F0DC
  c->lr=0x8019F0E4u; f_80135480(c); // 8019F0E0
  c->r[4]=c->r[3]|c->r[3]; // 8019F0E4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F0E8
  c->lr=0x8019F0F0u; f_8013C0EC(c); // 8019F0EC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F0F0
  c->r[4]=0u+0x00000000u; // 8019F0F4
  c->lr=0x8019F0FCu; f_8013B718(c); // 8019F0F8
  goto L_8019F1B4; // 8019F0FC
L_8019F100:;
  c->r[3]=0u+0x00000003u; // 8019F100
  c->lr=0x8019F108u; f_8019CD1C(c); // 8019F104
  cmps(c,0,(int32_t)c->r[3],0); // 8019F108
  if (crb(c,2)) { goto L_8019F118; } // 8019F10C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F110
  c->lr=0x8019F118u; f_8013532C(c); // 8019F114
L_8019F118:;
  c->r[3]=0u+0x00000004u; // 8019F118
  c->lr=0x8019F120u; f_8019CD1C(c); // 8019F11C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F120
  if (crb(c,2)) { goto L_8019F130; } // 8019F124
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F128
  c->lr=0x8019F130u; f_801352D0(c); // 8019F12C
L_8019F130:;
  c->r[3]=0u+0x00000006u; // 8019F130
  c->lr=0x8019F138u; f_8019CD1C(c); // 8019F134
  cmps(c,0,(int32_t)c->r[3],0); // 8019F138
  if (crb(c,2)) { goto L_8019F158; } // 8019F13C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F140
  c->lr=0x8019F148u; f_8013C1DC(c); // 8019F144
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F148
  c->lr=0x8019F150u; f_80135428(c); // 8019F14C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F150
  c->lr=0x8019F158u; f_80135388(c); // 8019F154
L_8019F158:;
  c->r[3]=0u+0x00000005u; // 8019F158
  c->lr=0x8019F160u; f_8019CD1C(c); // 8019F15C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F160
  if (crb(c,2)) { goto L_8019F180; } // 8019F164
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F168
  c->lr=0x8019F170u; f_8013C1E4(c); // 8019F16C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F170
  c->lr=0x8019F178u; f_801353DC(c); // 8019F174
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F178
  c->lr=0x8019F180u; f_80135388(c); // 8019F17C
L_8019F180:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F180
  c->lr=0x8019F188u; f_801353D4(c); // 8019F184
  c->r[4]=c->r[3]|c->r[3]; // 8019F188
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F18C
  c->lr=0x8019F194u; f_8013C020(c); // 8019F190
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F194
  c->lr=0x8019F19Cu; f_80135480(c); // 8019F198
  c->r[4]=c->r[3]|c->r[3]; // 8019F19C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F1A0
  c->lr=0x8019F1A8u; f_8013C0EC(c); // 8019F1A4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F1A8
  c->r[4]=0u+0x00000000u; // 8019F1AC
  c->lr=0x8019F1B4u; f_8013B718(c); // 8019F1B0
L_8019F1B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F1B8
  c->lr=c->r[0]; // 8019F1BC
  c->r[1]=c->r[1]+0x00000010u; // 8019F1C0
  return; // 8019F1C4
}

// fn_8019F1C8
void f_8019F1C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F1C8
  c->r[0]=c->lr; // 8019F1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F1D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F1D4
  c->r[31]=c->r[3]|c->r[3]; // 8019F1D8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F1DC
  c->r[4]=0u+0x00000000u; // 8019F1E0
  c->lr=0x8019F1E8u; f_8013A100(c); // 8019F1E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F1E8
  c->lr=0x8019F1F0u; f_80135E48(c); // 8019F1EC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F1F0
  c->lr=0x8019F1F8u; f_801345B4(c); // 8019F1F4
  cmps(c,0,(int32_t)c->r[3],0); // 8019F1F8
  if (crb(c,2)) { goto L_8019F20C; } // 8019F1FC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F200
  c->lr=0x8019F208u; f_8013B614(c); // 8019F204
  goto L_8019F214; // 8019F208
L_8019F20C:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F20C
  c->lr=0x8019F214u; f_8013B690(c); // 8019F210
L_8019F214:;
  c->r[3]=c->r[31]|c->r[31]; // 8019F214
  c->r[4]=0u+0x0000004Du; // 8019F218
  c->lr=0x8019F220u; f_8013114C(c); // 8019F21C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F220
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F224
  c->lr=c->r[0]; // 8019F228
  c->r[1]=c->r[1]+0x00000010u; // 8019F22C
  return; // 8019F230
}

// fn_8019F234
void f_8019F234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F234
  c->r[0]=c->lr; // 8019F238
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F23C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F240
  c->r[31]=c->r[3]|c->r[3]; // 8019F244
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F248
  c->lr=0x8019F250u; f_8013B7C4(c); // 8019F24C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F250
  if (crb(c,2)) { goto L_8019F2EC; } // 8019F254
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F258
  c->lr=0x8019F260u; f_801345B4(c); // 8019F25C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F260
  if (crb(c,2)) { goto L_8019F28C; } // 8019F264
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F268
  c->lr=0x8019F270u; f_8013BE40(c); // 8019F26C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F270
  c->r[4]=0u+0x00000000u; // 8019F274
  c->lr=0x8019F27Cu; f_8013A0F8(c); // 8019F278
  c->r[3]=c->r[31]|c->r[31]; // 8019F27C
  c->r[4]=0u+0x0000003Bu; // 8019F280
  c->lr=0x8019F288u; f_8013114C(c); // 8019F284
  goto L_8019F2EC; // 8019F288
L_8019F28C:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F28C
  c->r[4]=0u+0x00000000u; // 8019F290
  c->lr=0x8019F298u; f_8013A108(c); // 8019F294
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F298
  c->lr=0x8019F2A0u; f_8013B998(c); // 8019F29C
  c->r[4]=c->r[3]|c->r[3]; // 8019F2A0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F2A4
  c->lr=0x8019F2ACu; f_80135498(c); // 8019F2A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F2AC
  c->lr=0x8019F2B4u; f_8013B7DC(c); // 8019F2B0
  c->r[4]=c->r[3]|c->r[3]; // 8019F2B4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F2B8
  c->lr=0x8019F2C0u; f_80135F44(c); // 8019F2BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F2C0
  c->lr=0x8019F2C8u; f_80135154(c); // 8019F2C4
  c->r[5]=c->r[3]|c->r[3]; // 8019F2C8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F2CC
  c->r[4]=0u+0x00000003u; // 8019F2D0
  c->lr=0x8019F2D8u; f_80135F4C(c); // 8019F2D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F2D8
  c->lr=0x8019F2E0u; f_80134564(c); // 8019F2DC
  c->r[3]=c->r[31]|c->r[31]; // 8019F2E0
  c->r[4]=0u+0x00000000u; // 8019F2E4
  c->lr=0x8019F2ECu; f_8013114C(c); // 8019F2E8
L_8019F2EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F2EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F2F0
  c->lr=c->r[0]; // 8019F2F4
  c->r[1]=c->r[1]+0x00000010u; // 8019F2F8
  return; // 8019F2FC
}

// fn_8019F300
void f_8019F300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F300
  c->r[0]=c->lr; // 8019F304
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F30C
  c->r[31]=c->r[3]|c->r[3]; // 8019F310
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F314
  c->lr=0x8019F31Cu; f_8013BE1C(c); // 8019F318
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F31C
  c->lr=0x8019F324u; f_8013B990(c); // 8019F320
  c->r[4]=c->r[3]|c->r[3]; // 8019F324
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F328
  c->lr=0x8019F330u; f_80135250(c); // 8019F32C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F330
  c->lr=0x8019F338u; f_8013B878(c); // 8019F334
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F338
  c->lr=0x8019F340u; f_80135244(c); // 8019F33C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F340
  c->lr=0x8019F348u; f_8013523C(c); // 8019F344
  c->r[4]=c->r[3]|c->r[3]; // 8019F348
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F34C
  c->lr=0x8019F354u; f_8013C1D4(c); // 8019F350
  c->r[3]=c->r[31]|c->r[31]; // 8019F354
  c->r[4]=0u+0x0000004Fu; // 8019F358
  c->lr=0x8019F360u; f_8013114C(c); // 8019F35C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F360
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F364
  c->lr=c->r[0]; // 8019F368
  c->r[1]=c->r[1]+0x00000010u; // 8019F36C
  return; // 8019F370
}

// fn_8019F374
void f_8019F374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F374
  c->r[0]=c->lr; // 8019F378
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F37C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F380
  c->r[31]=c->r[3]|c->r[3]; // 8019F384
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F388
  c->lr=0x8019F390u; f_8013B988(c); // 8019F38C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F390
  if (crb(c,2)) { goto L_8019F3B8; } // 8019F394
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F398
  c->lr=0x8019F3A0u; f_8013523C(c); // 8019F39C
  c->r[4]=c->r[3]|c->r[3]; // 8019F3A0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F3A4
  c->lr=0x8019F3ACu; f_8013B8E8(c); // 8019F3A8
  c->r[3]=c->r[31]|c->r[31]; // 8019F3AC
  c->r[4]=0u+0x00000050u; // 8019F3B0
  c->lr=0x8019F3B8u; f_8013114C(c); // 8019F3B4
L_8019F3B8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F3B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F3BC
  c->lr=c->r[0]; // 8019F3C0
  c->r[1]=c->r[1]+0x00000010u; // 8019F3C4
  return; // 8019F3C8
}

// fn_8019F3CC
void f_8019F3CC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F3CC
  c->r[0]=c->lr; // 8019F3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F3D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F3D8
  c->r[31]=c->r[3]|c->r[3]; // 8019F3DC
  c->r[3]=0u+0x00000001u; // 8019F3E0
  c->lr=0x8019F3E8u; f_8019CD1C(c); // 8019F3E4
  cmps(c,0,(int32_t)c->r[3],0); // 8019F3E8
  if (crb(c,2)) { goto L_8019F408; } // 8019F3EC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F3F0
  c->lr=0x8019F3F8u; f_801345A4(c); // 8019F3F4
  c->r[3]=c->r[31]|c->r[31]; // 8019F3F8
  c->r[4]=0u+0x00000051u; // 8019F3FC
  c->lr=0x8019F404u; f_8013114C(c); // 8019F400
  goto L_8019F44C; // 8019F404
L_8019F408:;
  c->r[3]=0u+0x00000006u; // 8019F408
  c->lr=0x8019F410u; f_8019CD1C(c); // 8019F40C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F410
  if (crb(c,2)) { goto L_8019F420; } // 8019F414
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F418
  c->lr=0x8019F420u; f_801351F0(c); // 8019F41C
L_8019F420:;
  c->r[3]=0u+0x00000005u; // 8019F420
  c->lr=0x8019F428u; f_8019CD1C(c); // 8019F424
  cmps(c,0,(int32_t)c->r[3],0); // 8019F428
  if (crb(c,2)) { goto L_8019F438; } // 8019F42C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F430
  c->lr=0x8019F438u; f_801351A4(c); // 8019F434
L_8019F438:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F438
  c->lr=0x8019F440u; f_8013523C(c); // 8019F43C
  c->r[4]=c->r[3]|c->r[3]; // 8019F440
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F444
  c->lr=0x8019F44Cu; f_8013B8E8(c); // 8019F448
L_8019F44C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F44C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F450
  c->lr=c->r[0]; // 8019F454
  c->r[1]=c->r[1]+0x00000010u; // 8019F458
  return; // 8019F45C
}

// fn_8019F460
void f_8019F460(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F460
  c->r[0]=c->lr; // 8019F464
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F46C
  c->r[31]=c->r[3]|c->r[3]; // 8019F470
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F474
  c->lr=0x8019F47Cu; f_8013B8B0(c); // 8019F478
  c->r[3]=c->r[31]|c->r[31]; // 8019F47C
  c->r[4]=0u+0x00000052u; // 8019F480
  c->lr=0x8019F488u; f_8013114C(c); // 8019F484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F488
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F48C
  c->lr=c->r[0]; // 8019F490
  c->r[1]=c->r[1]+0x00000010u; // 8019F494
  return; // 8019F498
}

// fn_8019F49C
void f_8019F49C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F49C
  c->r[0]=c->lr; // 8019F4A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F4A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F4A8
  c->r[31]=c->r[3]|c->r[3]; // 8019F4AC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F4B0
  c->lr=0x8019F4B8u; f_8013B988(c); // 8019F4B4
  cmps(c,0,(int32_t)c->r[3],0); // 8019F4B8
  if (crb(c,2)) { goto L_8019F4E0; } // 8019F4BC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F4C0
  c->r[4]=0u+0x00000000u; // 8019F4C4
  c->lr=0x8019F4CCu; f_8013A0F0(c); // 8019F4C8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F4CC
  c->lr=0x8019F4D4u; f_8013BE40(c); // 8019F4D0
  c->r[3]=c->r[31]|c->r[31]; // 8019F4D4
  c->r[4]=0u+0x0000003Bu; // 8019F4D8
  c->lr=0x8019F4E0u; f_8013114C(c); // 8019F4DC
L_8019F4E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F4E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F4E4
  c->lr=c->r[0]; // 8019F4E8
  c->r[1]=c->r[1]+0x00000010u; // 8019F4EC
  return; // 8019F4F0
}

// fn_8019F4F4
void f_8019F4F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F4F4
  c->r[0]=c->lr; // 8019F4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F4FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F500
  c->r[31]=c->r[3]|c->r[3]; // 8019F504
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019F508
  c->lr=0x8019F510u; f_80135E48(c); // 8019F50C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F510
  c->r[4]=0u+0x00000000u; // 8019F514
  c->lr=0x8019F51Cu; f_8013A0A4(c); // 8019F518
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F51C
  c->lr=0x8019F524u; f_8013B390(c); // 8019F520
  c->r[3]=c->r[31]|c->r[31]; // 8019F524
  c->r[4]=0u+0x00000054u; // 8019F528
  c->lr=0x8019F530u; f_8013114C(c); // 8019F52C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F530
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F534
  c->lr=c->r[0]; // 8019F538
  c->r[1]=c->r[1]+0x00000010u; // 8019F53C
  return; // 8019F540
}

// fn_8019F544
void f_8019F544(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F544
  c->r[0]=c->lr; // 8019F548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F54C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F550
  c->r[31]=c->r[3]|c->r[3]; // 8019F554
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F558
  c->lr=0x8019F560u; f_8013B514(c); // 8019F55C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F560
  if (crb(c,2)) { goto L_8019F580; } // 8019F564
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F568
  c->r[4]=0u+0x00000000u; // 8019F56C
  c->lr=0x8019F574u; f_8013A03C(c); // 8019F570
  c->r[3]=c->r[31]|c->r[31]; // 8019F574
  c->r[4]=0u+0x00000004u; // 8019F578
  c->lr=0x8019F580u; f_8013114C(c); // 8019F57C
L_8019F580:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F580
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F584
  c->lr=c->r[0]; // 8019F588
  c->r[1]=c->r[1]+0x00000010u; // 8019F58C
  return; // 8019F590
}

// fn_8019F594
void f_8019F594(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F594
  c->r[0]=c->lr; // 8019F598
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F59C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F5A0
  c->r[31]=c->r[3]|c->r[3]; // 8019F5A4
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019F5A8
  c->lr=0x8019F5B0u; f_80134918(c); // 8019F5AC
  c->r[4]=c->r[3]|c->r[3]; // 8019F5B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F5B4
  c->lr=0x8019F5BCu; f_8013C1CC(c); // 8019F5B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F5BC
  c->lr=0x8019F5C4u; f_80134918(c); // 8019F5C0
  c->r[4]=c->r[3]|c->r[3]; // 8019F5C4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F5C8
  c->lr=0x8019F5D0u; f_8013C020(c); // 8019F5CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F5D0
  c->lr=0x8019F5D8u; f_801349C4(c); // 8019F5D4
  c->r[4]=c->r[3]|c->r[3]; // 8019F5D8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F5DC
  c->lr=0x8019F5E4u; f_8013C0EC(c); // 8019F5E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F5E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F5E8
  c->lr=c->r[0]; // 8019F5EC
  c->r[1]=c->r[1]+0x00000010u; // 8019F5F0
  return; // 8019F5F4
}

// fn_8019F5F8
void f_8019F5F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F5F8
  c->r[0]=c->lr; // 8019F5FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F600
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F604
  c->r[31]=c->r[3]|c->r[3]; // 8019F608
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F60C
  c->r[4]=0u+0x00000000u; // 8019F610
  c->lr=0x8019F618u; f_8013BE58(c); // 8019F614
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F618
  c->lr=0x8019F620u; f_8013C1EC(c); // 8019F61C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F620
  c->lr=0x8019F628u; f_8013A488(c); // 8019F624
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F628
  c->lr=0x8019F630u; f_80135E14(c); // 8019F62C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F630
  c->lr=0x8019F638u; f_801345AC(c); // 8019F634
  c->r[3]=c->r[31]|c->r[31]; // 8019F638
  c->lr=0x8019F640u; f_8019F594(c); // 8019F63C
  c->r[3]=c->r[31]|c->r[31]; // 8019F640
  c->r[4]=0u+0x00000010u; // 8019F644
  c->lr=0x8019F64Cu; f_8013114C(c); // 8019F648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F64C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F650
  c->lr=c->r[0]; // 8019F654
  c->r[1]=c->r[1]+0x00000010u; // 8019F658
  return; // 8019F65C
}

// fn_8019F660
void f_8019F660(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F660
  c->r[0]=c->lr; // 8019F664
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F66C
  c->r[31]=c->r[3]|c->r[3]; // 8019F670
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F674
  c->lr=0x8019F67Cu; f_8013A698(c); // 8019F678
  cmps(c,0,(int32_t)c->r[3],0); // 8019F67C
  if (crb(c,2)) { goto L_8019F698; } // 8019F680
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F684
  c->lr=0x8019F68Cu; f_8013A5E8(c); // 8019F688
  c->r[3]=c->r[31]|c->r[31]; // 8019F68C
  c->r[4]=0u+0x00000013u; // 8019F690
  c->lr=0x8019F698u; f_8013114C(c); // 8019F694
L_8019F698:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F698
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F69C
  c->lr=c->r[0]; // 8019F6A0
  c->r[1]=c->r[1]+0x00000010u; // 8019F6A4
  return; // 8019F6A8
}

// fn_8019F6AC
void f_8019F6AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F6AC
  c->r[0]=c->lr; // 8019F6B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F6B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F6B8
  c->r[31]=c->r[3]|c->r[3]; // 8019F6BC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F6C0
  c->lr=0x8019F6C8u; f_8013C3C0(c); // 8019F6C4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F6C8
  c->lr=0x8019F6D0u; f_8013A74C(c); // 8019F6CC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F6D0
  c->lr=0x8019F6D8u; f_80135E14(c); // 8019F6D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F6D8
  c->lr=0x8019F6E0u; f_801345AC(c); // 8019F6DC
  c->r[3]=c->r[31]|c->r[31]; // 8019F6E0
  c->lr=0x8019F6E8u; f_8019F594(c); // 8019F6E4
  c->r[3]=c->r[31]|c->r[31]; // 8019F6E8
  c->r[4]=0u+0x00000012u; // 8019F6EC
  c->lr=0x8019F6F4u; f_8013114C(c); // 8019F6F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F6F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F6F8
  c->lr=c->r[0]; // 8019F6FC
  c->r[1]=c->r[1]+0x00000010u; // 8019F700
  return; // 8019F704
}

// fn_8019F708
void f_8019F708(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F708
  c->r[0]=c->lr; // 8019F70C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F710
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F714
  c->r[31]=c->r[3]|c->r[3]; // 8019F718
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F71C
  c->lr=0x8019F724u; f_8013A900(c); // 8019F720
  cmps(c,0,(int32_t)c->r[3],0); // 8019F724
  if (crb(c,2)) { goto L_8019F740; } // 8019F728
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F72C
  c->lr=0x8019F734u; f_8013A85C(c); // 8019F730
  c->r[3]=c->r[31]|c->r[31]; // 8019F734
  c->r[4]=0u+0x00000013u; // 8019F738
  c->lr=0x8019F740u; f_8013114C(c); // 8019F73C
L_8019F740:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F740
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F744
  c->lr=c->r[0]; // 8019F748
  c->r[1]=c->r[1]+0x00000010u; // 8019F74C
  return; // 8019F750
}

// fn_8019F754
void f_8019F754(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F754
  c->r[0]=c->lr; // 8019F758
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F75C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F760
  c->r[31]=c->r[3]|c->r[3]; // 8019F764
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019F768
  c->lr=0x8019F770u; f_8013A6CC(c); // 8019F76C
  c->r[4]=c->r[3]|c->r[3]; // 8019F770
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F774
  c->lr=0x8019F77Cu; f_801349CC(c); // 8019F778
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F77C
  c->lr=0x8019F784u; f_8013A6C4(c); // 8019F780
  c->r[4]=c->r[3]|c->r[3]; // 8019F784
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F788
  c->lr=0x8019F790u; f_801349D4(c); // 8019F78C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F790
  c->lr=0x8019F798u; f_80135E08(c); // 8019F794
  c->r[3]=c->r[31]|c->r[31]; // 8019F798
  c->r[4]=0u+0x00000014u; // 8019F79C
  c->lr=0x8019F7A4u; f_8013114C(c); // 8019F7A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F7A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F7A8
  c->lr=c->r[0]; // 8019F7AC
  c->r[1]=c->r[1]+0x00000010u; // 8019F7B0
  return; // 8019F7B4
}

// fn_8019F7B8
void f_8019F7B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F7B8
  c->r[0]=c->lr; // 8019F7BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F7C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019F7C4
  c->r[31]=c->r[3]|c->r[3]; // 8019F7C8
  c->r[3]=0u+0x00000001u; // 8019F7CC
  c->lr=0x8019F7D4u; f_8019CD1C(c); // 8019F7D0
  cmps(c,0,(int32_t)c->r[3],0); // 8019F7D4
  if (crb(c,2)) { goto L_8019F7FC; } // 8019F7D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F7DC
  c->lr=0x8019F7E4u; f_801345A4(c); // 8019F7E0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F7E4
  c->lr=0x8019F7ECu; f_80135E08(c); // 8019F7E8
  c->r[3]=c->r[31]|c->r[31]; // 8019F7EC
  c->r[4]=0u+0x0000002Cu; // 8019F7F0
  c->lr=0x8019F7F8u; f_8013114C(c); // 8019F7F4
  goto L_8019F9E0; // 8019F7F8
L_8019F7FC:;
  c->r[3]=0u+0x00000000u; // 8019F7FC
  c->lr=0x8019F804u; f_8019CD1C(c); // 8019F800
  cmps(c,0,(int32_t)c->r[3],0); // 8019F804
  if (crb(c,2)) { goto L_8019F894; } // 8019F808
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F80C
  c->lr=0x8019F814u; f_80134918(c); // 8019F810
  c->r[4]=c->r[3]|c->r[3]; // 8019F814
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F818
  c->lr=0x8019F820u; f_8013C020(c); // 8019F81C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F820
  c->lr=0x8019F828u; f_801349C4(c); // 8019F824
  c->r[4]=c->r[3]|c->r[3]; // 8019F828
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F82C
  c->lr=0x8019F834u; f_8013C0EC(c); // 8019F830
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F834
  c->lr=0x8019F83Cu; f_8013A5E8(c); // 8019F838
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F83C
  c->lr=0x8019F844u; f_8013570C(c); // 8019F840
  cmps(c,0,(int32_t)c->r[3],0); // 8019F844
  if (crb(c,2)) { goto L_8019F868; } // 8019F848
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F84C
  c->lr=0x8019F854u; f_8013A69C(c); // 8019F850
  c->r[4]=c->r[3]|c->r[3]; // 8019F854
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F858
  c->lr=0x8019F860u; f_801357DC(c); // 8019F85C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F860
  if (crb(c,2)) { goto L_8019F874; } // 8019F864
L_8019F868:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F868
  c->lr=0x8019F870u; f_80135F08(c); // 8019F86C
  goto L_8019F9E0; // 8019F870
L_8019F874:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F874
  c->lr=0x8019F87Cu; f_80135E08(c); // 8019F878
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F87C
  c->lr=0x8019F884u; f_80135E7C(c); // 8019F880
  c->r[3]=c->r[31]|c->r[31]; // 8019F884
  c->r[4]=0u+0x00000015u; // 8019F888
  c->lr=0x8019F890u; f_8013114C(c); // 8019F88C
  goto L_8019F9E0; // 8019F890
L_8019F894:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F894
  c->lr=0x8019F89Cu; f_80135DAC(c); // 8019F898
  cmps(c,0,(int32_t)c->r[3],0); // 8019F89C
  if (!crb(c,2)) { goto L_8019F930; } // 8019F8A0
  c->r[3]=0u+0x00000008u; // 8019F8A4
  c->lr=0x8019F8ACu; f_8019CD1C(c); // 8019F8A8
  cmps(c,0,(int32_t)c->r[3],0); // 8019F8AC
  if (crb(c,2)) { goto L_8019F930; } // 8019F8B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F8B4
  c->lr=0x8019F8BCu; f_8013A6D4(c); // 8019F8B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F8BC
  c->lr=0x8019F8C4u; f_8013490C(c); // 8019F8C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F8C4
  c->lr=0x8019F8CCu; f_801349B8(c); // 8019F8C8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F8CC
  c->lr=0x8019F8D4u; f_8013A6CC(c); // 8019F8D0
  c->r[4]=c->r[3]|c->r[3]; // 8019F8D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F8D8
  c->lr=0x8019F8E0u; f_801349CC(c); // 8019F8DC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F8E0
  c->lr=0x8019F8E8u; f_8013A6C4(c); // 8019F8E4
  c->r[4]=c->r[3]|c->r[3]; // 8019F8E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F8EC
  c->lr=0x8019F8F4u; f_801349D4(c); // 8019F8F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F8F4
  c->lr=0x8019F8FCu; f_80135EB0(c); // 8019F8F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F8FC
  c->lr=0x8019F904u; f_80134918(c); // 8019F900
  c->r[4]=c->r[3]|c->r[3]; // 8019F904
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F908
  c->lr=0x8019F910u; f_8013C020(c); // 8019F90C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F910
  c->lr=0x8019F918u; f_801349C4(c); // 8019F914
  c->r[4]=c->r[3]|c->r[3]; // 8019F918
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F91C
  c->lr=0x8019F924u; f_8013C0EC(c); // 8019F920
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F924
  c->lr=0x8019F92Cu; f_8013A5E8(c); // 8019F928
  goto L_8019F9E0; // 8019F92C
L_8019F930:;
  c->r[3]=0u+0x00000003u; // 8019F930
  c->lr=0x8019F938u; f_8019CD1C(c); // 8019F934
  cmps(c,0,(int32_t)c->r[3],0); // 8019F938
  if (crb(c,2)) { goto L_8019F948; } // 8019F93C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F940
  c->lr=0x8019F948u; f_80134870(c); // 8019F944
L_8019F948:;
  c->r[3]=0u+0x00000004u; // 8019F948
  c->lr=0x8019F950u; f_8019CD1C(c); // 8019F94C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F950
  if (crb(c,2)) { goto L_8019F960; } // 8019F954
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F958
  c->lr=0x8019F960u; f_80134814(c); // 8019F95C
L_8019F960:;
  c->r[3]=0u+0x00000006u; // 8019F960
  c->lr=0x8019F968u; f_8019CD1C(c); // 8019F964
  cmps(c,0,(int32_t)c->r[3],0); // 8019F968
  if (crb(c,2)) { goto L_8019F988; } // 8019F96C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F970
  c->lr=0x8019F978u; f_8013C1DC(c); // 8019F974
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F978
  c->lr=0x8019F980u; f_8013496C(c); // 8019F97C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F980
  c->lr=0x8019F988u; f_801348CC(c); // 8019F984
L_8019F988:;
  c->r[3]=0u+0x00000005u; // 8019F988
  c->lr=0x8019F990u; f_8019CD1C(c); // 8019F98C
  cmps(c,0,(int32_t)c->r[3],0); // 8019F990
  if (crb(c,2)) { goto L_8019F9B0; } // 8019F994
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F998
  c->lr=0x8019F9A0u; f_8013C1E4(c); // 8019F99C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F9A0
  c->lr=0x8019F9A8u; f_80134920(c); // 8019F9A4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F9A8
  c->lr=0x8019F9B0u; f_801348CC(c); // 8019F9AC
L_8019F9B0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F9B0
  c->lr=0x8019F9B8u; f_80134918(c); // 8019F9B4
  c->r[4]=c->r[3]|c->r[3]; // 8019F9B8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F9BC
  c->lr=0x8019F9C4u; f_8013C020(c); // 8019F9C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019F9C4
  c->lr=0x8019F9CCu; f_801349C4(c); // 8019F9C8
  c->r[4]=c->r[3]|c->r[3]; // 8019F9CC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F9D0
  c->lr=0x8019F9D8u; f_8013C0EC(c); // 8019F9D4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019F9D8
  c->lr=0x8019F9E0u; f_8013A5E8(c); // 8019F9DC
L_8019F9E0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019F9E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019F9E4
  c->lr=c->r[0]; // 8019F9E8
  c->r[1]=c->r[1]+0x00000010u; // 8019F9EC
  return; // 8019F9F0
}

// fn_8019F9F4
void f_8019F9F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019F9F4
  c->r[0]=c->lr; // 8019F9F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019F9FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FA00
  c->r[31]=c->r[3]|c->r[3]; // 8019FA04
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019FA08
  c->r[4]=0u+0x00000000u; // 8019FA0C
  c->r[5]=0u+0x00000000u; // 8019FA10
  c->lr=0x8019FA18u; f_80139EE0(c); // 8019FA14
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FA18
  c->lr=0x8019FA20u; f_80135E48(c); // 8019FA1C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FA20
  c->lr=0x8019FA28u; f_8013A804(c); // 8019FA24
  c->r[3]=c->r[31]|c->r[31]; // 8019FA28
  c->r[4]=0u+0x00000016u; // 8019FA2C
  c->lr=0x8019FA34u; f_8013114C(c); // 8019FA30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FA34
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FA38
  c->lr=c->r[0]; // 8019FA3C
  c->r[1]=c->r[1]+0x00000010u; // 8019FA40
  return; // 8019FA44
}

// fn_8019FA48
void f_8019FA48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FA48
  c->r[0]=c->lr; // 8019FA4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FA50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FA54
  c->r[31]=c->r[3]|c->r[3]; // 8019FA58
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019FA5C
  c->lr=0x8019FA64u; f_8013A900(c); // 8019FA60
  cmps(c,0,(int32_t)c->r[3],0); // 8019FA64
  if (crb(c,2)) { goto L_8019FA88; } // 8019FA68
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FA6C
  c->r[4]=0u+0x00000000u; // 8019FA70
  c->r[5]=0u+0x00000000u; // 8019FA74
  c->lr=0x8019FA7Cu; f_80139E94(c); // 8019FA78
  c->r[3]=c->r[31]|c->r[31]; // 8019FA7C
  c->r[4]=0u+0x00000017u; // 8019FA80
  c->lr=0x8019FA88u; f_8013114C(c); // 8019FA84
L_8019FA88:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FA88
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FA8C
  c->lr=c->r[0]; // 8019FA90
  c->r[1]=c->r[1]+0x00000010u; // 8019FA94
  return; // 8019FA98
}

// fn_8019FA9C
void f_8019FA9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FA9C
  c->r[0]=c->lr; // 8019FAA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FAA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FAA8
  c->r[31]=c->r[3]|c->r[3]; // 8019FAAC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019FAB0
  c->lr=0x8019FAB8u; f_8013A908(c); // 8019FAB4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FAB8
  c->r[4]=R32(c->r[31]+0x000000ECu); // 8019FABC
  c->lr=0x8019FAC4u; f_8013A910(c); // 8019FAC0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FAC4
  c->lr=0x8019FACCu; f_8013ABA4(c); // 8019FAC8
  c->r[4]=c->r[3]|c->r[3]; // 8019FACC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FAD0
  c->lr=0x8019FAD8u; f_80134A7C(c); // 8019FAD4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FAD8
  c->lr=0x8019FAE0u; f_80135E14(c); // 8019FADC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FAE0
  c->lr=0x8019FAE8u; f_801345AC(c); // 8019FAE4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FAE8
  c->lr=0x8019FAF0u; f_80134A84(c); // 8019FAEC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FAF0
  c->lr=0x8019FAF8u; f_80134A74(c); // 8019FAF4
  c->r[4]=c->r[3]|c->r[3]; // 8019FAF8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FAFC
  c->lr=0x8019FB04u; f_8013C1CC(c); // 8019FB00
  c->r[0]=0u+0x00000001u; // 8019FB04
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FB08
  c->r[3]=c->r[31]|c->r[31]; // 8019FB0C
  c->r[4]=0u+0x00000018u; // 8019FB10
  c->lr=0x8019FB18u; f_8013114C(c); // 8019FB14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FB18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FB1C
  c->lr=c->r[0]; // 8019FB20
  c->r[1]=c->r[1]+0x00000010u; // 8019FB24
  return; // 8019FB28
}

// fn_8019FB2C
void f_8019FB2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FB2C
  c->r[0]=c->lr; // 8019FB30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FB34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FB38
  c->r[31]=c->r[3]|c->r[3]; // 8019FB3C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019FB40
  c->lr=0x8019FB48u; f_8013AB9C(c); // 8019FB44
  cmps(c,0,(int32_t)c->r[3],0); // 8019FB48
  if (crb(c,2)) { goto L_8019FB64; } // 8019FB4C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FB50
  c->lr=0x8019FB58u; f_8013AB40(c); // 8019FB54
  c->r[3]=c->r[31]|c->r[31]; // 8019FB58
  c->r[4]=0u+0x00000019u; // 8019FB5C
  c->lr=0x8019FB64u; f_8013114C(c); // 8019FB60
L_8019FB64:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FB64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FB68
  c->lr=c->r[0]; // 8019FB6C
  c->r[1]=c->r[1]+0x00000010u; // 8019FB70
  return; // 8019FB74
}

// fn_8019FB78
void f_8019FB78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FB78
  c->r[0]=c->lr; // 8019FB7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FB80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FB84
  c->r[31]=c->r[3]|c->r[3]; // 8019FB88
  c->r[3]=0u+0x00000001u; // 8019FB8C
  c->lr=0x8019FB94u; f_8019CD1C(c); // 8019FB90
  cmps(c,0,(int32_t)c->r[3],0); // 8019FB94
  if (crb(c,2)) { goto L_8019FBB4; } // 8019FB98
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FB9C
  c->lr=0x8019FBA4u; f_801345A4(c); // 8019FBA0
  c->r[3]=c->r[31]|c->r[31]; // 8019FBA4
  c->r[4]=0u+0x0000001Cu; // 8019FBA8
  c->lr=0x8019FBB0u; f_8013114C(c); // 8019FBAC
  goto L_8019FC4C; // 8019FBB0
L_8019FBB4:;
  c->r[3]=0u+0x00000003u; // 8019FBB4
  c->lr=0x8019FBBCu; f_8019CD1C(c); // 8019FBB8
  cmps(c,0,(int32_t)c->r[3],0); // 8019FBBC
  if (crb(c,2)) { goto L_8019FBCC; } // 8019FBC0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FBC4
  c->lr=0x8019FBCCu; f_80134A28(c); // 8019FBC8
L_8019FBCC:;
  c->r[3]=0u+0x00000004u; // 8019FBCC
  c->lr=0x8019FBD4u; f_8019CD1C(c); // 8019FBD0
  cmps(c,0,(int32_t)c->r[3],0); // 8019FBD4
  if (crb(c,2)) { goto L_8019FBE4; } // 8019FBD8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FBDC
  c->lr=0x8019FBE4u; f_801349DC(c); // 8019FBE0
L_8019FBE4:;
  c->r[3]=0u+0x00000000u; // 8019FBE4
  c->lr=0x8019FBECu; f_8019CD1C(c); // 8019FBE8
  cmps(c,0,(int32_t)c->r[3],0); // 8019FBEC
  if (crb(c,2)) { goto L_8019FC30; } // 8019FBF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FBF4
  c->lr=0x8019FBFCu; f_80134A74(c); // 8019FBF8
  c->r[4]=c->r[3]|c->r[3]; // 8019FBFC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FC00
  c->lr=0x8019FC08u; f_8013A8F0(c); // 8019FC04
  cmps(c,0,(int32_t)c->r[3],0); // 8019FC08
  if (crb(c,2)) { goto L_8019FC1C; } // 8019FC0C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FC10
  c->lr=0x8019FC18u; f_80135F08(c); // 8019FC14
  goto L_8019FC30; // 8019FC18
L_8019FC1C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FC1C
  c->lr=0x8019FC24u; f_80135E7C(c); // 8019FC20
  c->r[3]=c->r[31]|c->r[31]; // 8019FC24
  c->r[4]=0u+0x0000001Au; // 8019FC28
  c->lr=0x8019FC30u; f_8013114C(c); // 8019FC2C
L_8019FC30:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FC30
  c->lr=0x8019FC38u; f_8013AB40(c); // 8019FC34
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FC38
  c->lr=0x8019FC40u; f_80134A74(c); // 8019FC3C
  c->r[4]=c->r[3]|c->r[3]; // 8019FC40
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FC44
  c->lr=0x8019FC4Cu; f_8013BF10(c); // 8019FC48
L_8019FC4C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FC4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FC50
  c->lr=c->r[0]; // 8019FC54
  c->r[1]=c->r[1]+0x00000010u; // 8019FC58
  return; // 8019FC5C
}

// fn_8019FC60
void f_8019FC60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FC60
  c->r[0]=c->lr; // 8019FC64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FC68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FC6C
  c->r[31]=c->r[3]|c->r[3]; // 8019FC70
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019FC74
  c->lr=0x8019FC7Cu; f_80134A74(c); // 8019FC78
  c->r[4]=c->r[3]|c->r[3]; // 8019FC7C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FC80
  c->lr=0x8019FC88u; f_8013BE60(c); // 8019FC84
  c->r[3]=c->r[31]|c->r[31]; // 8019FC88
  c->r[4]=0u+0x0000001Bu; // 8019FC8C
  c->lr=0x8019FC94u; f_8013114C(c); // 8019FC90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FC94
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FC98
  c->lr=c->r[0]; // 8019FC9C
  c->r[1]=c->r[1]+0x00000010u; // 8019FCA0
  return; // 8019FCA4
}

// fn_8019FCA8
void f_8019FCA8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FCA8
  c->r[0]=c->lr; // 8019FCAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FCB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FCB4
  c->r[31]=c->r[3]|c->r[3]; // 8019FCB8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019FCBC
  c->lr=0x8019FCC4u; f_8013BFD0(c); // 8019FCC0
  cmps(c,0,(int32_t)c->r[3],0); // 8019FCC4
  if (crb(c,2)) { goto L_8019FCE4; } // 8019FCC8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FCCC
  c->r[4]=0u+0x00000000u; // 8019FCD0
  c->lr=0x8019FCD8u; f_8013A1F8(c); // 8019FCD4
  c->r[3]=c->r[31]|c->r[31]; // 8019FCD8
  c->r[4]=0u+0x0000001Cu; // 8019FCDC
  c->lr=0x8019FCE4u; f_8013114C(c); // 8019FCE0
L_8019FCE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FCE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FCE8
  c->lr=c->r[0]; // 8019FCEC
  c->r[1]=c->r[1]+0x00000010u; // 8019FCF0
  return; // 8019FCF4
}

// fn_8019FCF8
void f_8019FCF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FCF8
  c->r[0]=c->lr; // 8019FCFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FD00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FD04
  c->r[31]=c->r[3]|c->r[3]; // 8019FD08
  c->r[3]=R32(c->r[3]+0x000000E8u); // 8019FD0C
  c->lr=0x8019FD14u; f_80135E48(c); // 8019FD10
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FD14
  c->lr=0x8019FD1Cu; f_801345B4(c); // 8019FD18
  cmps(c,0,(int32_t)c->r[3],0); // 8019FD1C
  if (!crb(c,2)) { goto L_8019FE08; } // 8019FD20
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FD24
  c->lr=0x8019FD2Cu; f_80137010(c); // 8019FD28
  cmps(c,0,(int32_t)c->r[3],0); // 8019FD2C
  if (crb(c,2)) { goto L_8019FDB0; } // 8019FD30
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FD34
  c->lr=0x8019FD3Cu; f_8013AFAC(c); // 8019FD38
  cmps(c,0,(int32_t)c->r[3],2); // 8019FD3C
  if (crb(c,2)) { goto L_8019FD9C; } // 8019FD40
  if (!crb(c,0)) { goto L_8019FE18; } // 8019FD44
  cmps(c,0,(int32_t)c->r[3],1); // 8019FD48
  if (!crb(c,0)) { goto L_8019FD54; } // 8019FD4C
  goto L_8019FE18; // 8019FD50
L_8019FD54:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FD54
  c->lr=0x8019FD5Cu; f_80134A74(c); // 8019FD58
  cmps(c,0,(int32_t)c->r[3],1); // 8019FD5C
  if (crb(c,2)) { goto L_8019FD74; } // 8019FD60
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FD64
  c->lr=0x8019FD6Cu; f_80134A74(c); // 8019FD68
  cmps(c,0,(int32_t)c->r[3],2); // 8019FD6C
  if (!crb(c,2)) { goto L_8019FD88; } // 8019FD70
L_8019FD74:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FD74
  c->lr=0x8019FD7Cu; f_8013AA14(c); // 8019FD78
  c->r[0]=0u+0x00000000u; // 8019FD7C
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FD80
  goto L_8019FE18; // 8019FD84
L_8019FD88:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FD88
  c->lr=0x8019FD90u; f_8013A97C(c); // 8019FD8C
  c->r[0]=0u+0x00000001u; // 8019FD90
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FD94
  goto L_8019FE18; // 8019FD98
L_8019FD9C:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FD9C
  c->lr=0x8019FDA4u; f_8013AA14(c); // 8019FDA0
  c->r[0]=0u+0x00000000u; // 8019FDA4
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FDA8
  goto L_8019FE18; // 8019FDAC
L_8019FDB0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FDB0
  c->lr=0x8019FDB8u; f_80134A74(c); // 8019FDB4
  cmps(c,0,(int32_t)c->r[3],3); // 8019FDB8
  if (crb(c,2)) { goto L_8019FDE0; } // 8019FDBC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FDC0
  c->lr=0x8019FDC8u; f_80134A74(c); // 8019FDC4
  cmps(c,0,(int32_t)c->r[3],0); // 8019FDC8
  if (!crb(c,2)) { goto L_8019FDF4; } // 8019FDCC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FDD0
  c->lr=0x8019FDD8u; f_8013A8F8(c); // 8019FDD4
  cmps(c,0,(int32_t)c->r[3],0); // 8019FDD8
  if (crb(c,2)) { goto L_8019FDF4; } // 8019FDDC
L_8019FDE0:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FDE0
  c->lr=0x8019FDE8u; f_8013AA14(c); // 8019FDE4
  c->r[0]=0u+0x00000000u; // 8019FDE8
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FDEC
  goto L_8019FE18; // 8019FDF0
L_8019FDF4:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FDF4
  c->lr=0x8019FDFCu; f_8013A97C(c); // 8019FDF8
  c->r[0]=0u+0x00000001u; // 8019FDFC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FE00
  goto L_8019FE18; // 8019FE04
L_8019FE08:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FE08
  c->lr=0x8019FE10u; f_8013AA70(c); // 8019FE0C
  c->r[0]=0u+0x00000001u; // 8019FE10
  W32(c->r[31]+0x000000ECu,c->r[0]); // 8019FE14
L_8019FE18:;
  c->r[3]=c->r[31]|c->r[31]; // 8019FE18
  c->r[4]=0u+0x0000001Du; // 8019FE1C
  c->lr=0x8019FE24u; f_8013114C(c); // 8019FE20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8019FE24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8019FE28
  c->lr=c->r[0]; // 8019FE2C
  c->r[1]=c->r[1]+0x00000010u; // 8019FE30
  return; // 8019FE34
}

// fn_8019FE38
void f_8019FE38(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8019FE38
  c->r[0]=c->lr; // 8019FE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8019FE40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8019FE44
  c->r[31]=c->r[3]|c->r[3]; // 8019FE48
  c->r[3]=R32(c->r[3]+0x000000F4u); // 8019FE4C
  c->lr=0x8019FE54u; f_8013AB9C(c); // 8019FE50
  cmps(c,0,(int32_t)c->r[3],0); // 8019FE54
  if (crb(c,2)) { goto L_801A00B0; } // 8019FE58
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FE5C
  c->lr=0x8019FE64u; f_801345B4(c); // 8019FE60
  cmps(c,0,(int32_t)c->r[3],0); // 8019FE64
  if (!crb(c,2)) { goto L_801A0098; } // 8019FE68
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FE6C
  c->lr=0x8019FE74u; f_80137010(c); // 8019FE70
  cmps(c,0,(int32_t)c->r[3],0); // 8019FE74
  if (crb(c,2)) { goto L_8019FFC8; } // 8019FE78
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FE7C
  c->lr=0x8019FE84u; f_8013AFAC(c); // 8019FE80
  cmps(c,0,(int32_t)c->r[3],2); // 8019FE84
  if (crb(c,2)) { goto L_8019FF70; } // 8019FE88
  if (!crb(c,0)) { goto L_801A00B0; } // 8019FE8C
  cmps(c,0,(int32_t)c->r[3],1); // 8019FE90
  if (!crb(c,0)) { goto L_8019FE9C; } // 8019FE94
  goto L_801A00B0; // 8019FE98
L_8019FE9C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FE9C
  c->lr=0x8019FEA4u; f_80134A74(c); // 8019FEA0
  cmps(c,0,(int32_t)c->r[3],1); // 8019FEA4
  if (crb(c,2)) { goto L_8019FF38; } // 8019FEA8
  if (!crb(c,0)) { goto L_8019FEBC; } // 8019FEAC
  cmps(c,0,(int32_t)c->r[3],0); // 8019FEB0
  if (!crb(c,0)) { goto L_8019FEC8; } // 8019FEB4
  goto L_801A00B0; // 8019FEB8
L_8019FEBC:;
  cmps(c,0,(int32_t)c->r[3],3); // 8019FEBC
  if (!crb(c,0)) { goto L_801A00B0; } // 8019FEC0
  goto L_8019FF54; // 8019FEC4
L_8019FEC8:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FEC8
  c->r[4]=0u+0x00000000u; // 8019FECC
  c->lr=0x8019FED4u; f_80139F34(c); // 8019FED0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FED4
  c->lr=0x8019FEDCu; f_8013AFAC(c); // 8019FED8
  c->r[4]=c->r[3]|c->r[3]; // 8019FEDC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FEE0
  c->lr=0x8019FEE8u; f_80134DC8(c); // 8019FEE4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FEE8
  c->lr=0x8019FEF0u; f_8013A69C(c); // 8019FEEC
  c->r[4]=c->r[3]|c->r[3]; // 8019FEF0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FEF4
  c->lr=0x8019FEFCu; f_80135F3C(c); // 8019FEF8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FEFC
  c->r[4]=0u+0xFFFFFFFFu; // 8019FF00
  c->lr=0x8019FF08u; f_80135F44(c); // 8019FF04
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FF08
  c->lr=0x8019FF10u; f_80134A74(c); // 8019FF0C
  c->r[5]=c->r[3]|c->r[3]; // 8019FF10
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FF14
  c->r[4]=0u+0x00000000u; // 8019FF18
  c->lr=0x8019FF20u; f_80135F4C(c); // 8019FF1C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FF20
  c->lr=0x8019FF28u; f_80134564(c); // 8019FF24
  c->r[3]=c->r[31]|c->r[31]; // 8019FF28
  c->r[4]=0u+0x00000000u; // 8019FF2C
  c->lr=0x8019FF34u; f_8013114C(c); // 8019FF30
  goto L_801A00B0; // 8019FF34
L_8019FF38:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FF38
  c->r[4]=0u+0x00000000u; // 8019FF3C
  c->lr=0x8019FF44u; f_80139F2C(c); // 8019FF40
  c->r[3]=c->r[31]|c->r[31]; // 8019FF44
  c->r[4]=0u+0x00000029u; // 8019FF48
  c->lr=0x8019FF50u; f_8013114C(c); // 8019FF4C
  goto L_801A00B0; // 8019FF50
L_8019FF54:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FF54
  c->r[4]=0u+0x00000000u; // 8019FF58
  c->lr=0x8019FF60u; f_80139F2C(c); // 8019FF5C
  c->r[3]=c->r[31]|c->r[31]; // 8019FF60
  c->r[4]=0u+0x0000001Eu; // 8019FF64
  c->lr=0x8019FF6Cu; f_8013114C(c); // 8019FF68
  goto L_801A00B0; // 8019FF6C
L_8019FF70:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FF70
  c->lr=0x8019FF78u; f_80134A74(c); // 8019FF74
  cmps(c,0,(int32_t)c->r[3],1); // 8019FF78
  if (crb(c,2)) { goto L_8019FFAC; } // 8019FF7C
  if (!crb(c,0)) { goto L_801A00B0; } // 8019FF80
  cmps(c,0,(int32_t)c->r[3],0); // 8019FF84
  if (!crb(c,0)) { goto L_8019FF90; } // 8019FF88
  goto L_801A00B0; // 8019FF8C
L_8019FF90:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FF90
  c->r[4]=0u+0x00000000u; // 8019FF94
  c->lr=0x8019FF9Cu; f_80139F2C(c); // 8019FF98
  c->r[3]=c->r[31]|c->r[31]; // 8019FF9C
  c->r[4]=0u+0x00000029u; // 8019FFA0
  c->lr=0x8019FFA8u; f_8013114C(c); // 8019FFA4
  goto L_801A00B0; // 8019FFA8
L_8019FFAC:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FFAC
  c->r[4]=0u+0x00000000u; // 8019FFB0
  c->lr=0x8019FFB8u; f_80139F2C(c); // 8019FFB4
  c->r[3]=c->r[31]|c->r[31]; // 8019FFB8
  c->r[4]=0u+0x0000001Eu; // 8019FFBC
  c->lr=0x8019FFC4u; f_8013114C(c); // 8019FFC0
  goto L_801A00B0; // 8019FFC4
L_8019FFC8:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 8019FFC8
  c->lr=0x8019FFD0u; f_80134A74(c); // 8019FFCC
  cmps(c,0,(int32_t)c->r[3],0); // 8019FFD0
  if (!crb(c,2)) { goto L_801A0004; } // 8019FFD4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FFD8
  c->lr=0x8019FFE0u; f_8013A8F8(c); // 8019FFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8019FFE0
  if (crb(c,2)) { goto L_801A0004; } // 8019FFE4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8019FFE8
  c->r[4]=0u+0x00000000u; // 8019FFEC
  c->lr=0x8019FFF4u; f_80139F2C(c); // 8019FFF0
  c->r[3]=c->r[31]|c->r[31]; // 8019FFF4
  c->r[4]=0u+0x00000023u; // 8019FFF8
  c->lr=0x801A0000u; f_8013114C(c); // 8019FFFC
  goto L_801A00B0; // 801A0000
L_801A0004:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0004
  c->lr=0x801A000Cu; f_80134A74(c); // 801A0008
  cmps(c,0,(int32_t)c->r[3],3); // 801A000C
  if (!crb(c,2)) { goto L_801A0030; } // 801A0010
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0014
  c->r[4]=0u+0x00000000u; // 801A0018
  c->lr=0x801A0020u; f_80139F2C(c); // 801A001C
  c->r[3]=c->r[31]|c->r[31]; // 801A0020
  c->r[4]=0u+0x0000001Eu; // 801A0024
  c->lr=0x801A002Cu; f_8013114C(c); // 801A0028
  goto L_801A00B0; // 801A002C
L_801A0030:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0030
  c->r[4]=0u+0x00000000u; // 801A0034
  c->lr=0x801A003Cu; f_80139F34(c); // 801A0038
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A003C
  c->r[4]=0u+0x00000000u; // 801A0040
  c->lr=0x801A0048u; f_80134DC8(c); // 801A0044
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0048
  c->lr=0x801A0050u; f_8013A69C(c); // 801A004C
  c->r[4]=c->r[3]|c->r[3]; // 801A0050
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0054
  c->lr=0x801A005Cu; f_80135F3C(c); // 801A0058
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A005C
  c->r[4]=0u+0xFFFFFFFFu; // 801A0060
  c->lr=0x801A0068u; f_80135F44(c); // 801A0064
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0068
  c->lr=0x801A0070u; f_80134A74(c); // 801A006C
  c->r[5]=c->r[3]|c->r[3]; // 801A0070
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0074
  c->r[4]=0u+0x00000000u; // 801A0078
  c->lr=0x801A0080u; f_80135F4C(c); // 801A007C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0080
  c->lr=0x801A0088u; f_80134564(c); // 801A0084
  c->r[3]=c->r[31]|c->r[31]; // 801A0088
  c->r[4]=0u+0x00000000u; // 801A008C
  c->lr=0x801A0094u; f_8013114C(c); // 801A0090
  goto L_801A00B0; // 801A0094
L_801A0098:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0098
  c->r[4]=0u+0x00000000u; // 801A009C
  c->lr=0x801A00A4u; f_80139F2C(c); // 801A00A0
  c->r[3]=c->r[31]|c->r[31]; // 801A00A4
  c->r[4]=0u+0x00000011u; // 801A00A8
  c->lr=0x801A00B0u; f_8013114C(c); // 801A00AC
L_801A00B0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A00B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A00B4
  c->lr=c->r[0]; // 801A00B8
  c->r[1]=c->r[1]+0x00000010u; // 801A00BC
  return; // 801A00C0
}

// fn_801A00C4
void f_801A00C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A00C4
  c->r[0]=c->lr; // 801A00C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A00CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A00D0
  c->r[31]=c->r[3]|c->r[3]; // 801A00D4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A00D8
  c->lr=0x801A00E0u; f_8013BE1C(c); // 801A00DC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A00E0
  c->lr=0x801A00E8u; f_8013ACC4(c); // 801A00E4
  c->r[4]=c->r[3]|c->r[3]; // 801A00E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A00EC
  c->lr=0x801A00F4u; f_80134B70(c); // 801A00F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A00F4
  c->lr=0x801A00FCu; f_8013ABAC(c); // 801A00F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A00FC
  c->lr=0x801A0104u; f_80134B64(c); // 801A0100
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0104
  c->lr=0x801A010Cu; f_80134B5C(c); // 801A0108
  c->r[4]=c->r[3]|c->r[3]; // 801A010C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0110
  c->lr=0x801A0118u; f_8013C1D4(c); // 801A0114
  c->r[3]=c->r[31]|c->r[31]; // 801A0118
  c->r[4]=0u+0x0000001Fu; // 801A011C
  c->lr=0x801A0124u; f_8013114C(c); // 801A0120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0124
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0128
  c->lr=c->r[0]; // 801A012C
  c->r[1]=c->r[1]+0x00000010u; // 801A0130
  return; // 801A0134
}

// fn_801A0138
void f_801A0138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0138
  c->r[0]=c->lr; // 801A013C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0140
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0144
  c->r[31]=c->r[3]|c->r[3]; // 801A0148
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A014C
  c->lr=0x801A0154u; f_8013ACBC(c); // 801A0150
  cmps(c,0,(int32_t)c->r[3],0); // 801A0154
  if (crb(c,2)) { goto L_801A017C; } // 801A0158
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A015C
  c->lr=0x801A0164u; f_80134B5C(c); // 801A0160
  c->r[4]=c->r[3]|c->r[3]; // 801A0164
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0168
  c->lr=0x801A0170u; f_8013AC1C(c); // 801A016C
  c->r[3]=c->r[31]|c->r[31]; // 801A0170
  c->r[4]=0u+0x00000020u; // 801A0174
  c->lr=0x801A017Cu; f_8013114C(c); // 801A0178
L_801A017C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A017C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0180
  c->lr=c->r[0]; // 801A0184
  c->r[1]=c->r[1]+0x00000010u; // 801A0188
  return; // 801A018C
}

// fn_801A0190
void f_801A0190(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0190
  c->r[0]=c->lr; // 801A0194
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0198
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A019C
  c->r[31]=c->r[3]|c->r[3]; // 801A01A0
  c->r[3]=0u+0x00000001u; // 801A01A4
  c->lr=0x801A01ACu; f_8019CD1C(c); // 801A01A8
  cmps(c,0,(int32_t)c->r[3],0); // 801A01AC
  if (crb(c,2)) { goto L_801A01CC; } // 801A01B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A01B4
  c->lr=0x801A01BCu; f_801345A4(c); // 801A01B8
  c->r[3]=c->r[31]|c->r[31]; // 801A01BC
  c->r[4]=0u+0x00000021u; // 801A01C0
  c->lr=0x801A01C8u; f_8013114C(c); // 801A01C4
  goto L_801A0210; // 801A01C8
L_801A01CC:;
  c->r[3]=0u+0x00000006u; // 801A01CC
  c->lr=0x801A01D4u; f_8019CD1C(c); // 801A01D0
  cmps(c,0,(int32_t)c->r[3],0); // 801A01D4
  if (crb(c,2)) { goto L_801A01E4; } // 801A01D8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A01DC
  c->lr=0x801A01E4u; f_80134B10(c); // 801A01E0
L_801A01E4:;
  c->r[3]=0u+0x00000005u; // 801A01E4
  c->lr=0x801A01ECu; f_8019CD1C(c); // 801A01E8
  cmps(c,0,(int32_t)c->r[3],0); // 801A01EC
  if (crb(c,2)) { goto L_801A01FC; } // 801A01F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A01F4
  c->lr=0x801A01FCu; f_80134AC4(c); // 801A01F8
L_801A01FC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A01FC
  c->lr=0x801A0204u; f_80134B5C(c); // 801A0200
  c->r[4]=c->r[3]|c->r[3]; // 801A0204
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0208
  c->lr=0x801A0210u; f_8013AC1C(c); // 801A020C
L_801A0210:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0210
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0214
  c->lr=c->r[0]; // 801A0218
  c->r[1]=c->r[1]+0x00000010u; // 801A021C
  return; // 801A0220
}

// fn_801A0224
void f_801A0224(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0224
  c->r[0]=c->lr; // 801A0228
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A022C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0230
  c->r[31]=c->r[3]|c->r[3]; // 801A0234
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A0238
  c->lr=0x801A0240u; f_8013ABE4(c); // 801A023C
  c->r[3]=c->r[31]|c->r[31]; // 801A0240
  c->r[4]=0u+0x00000022u; // 801A0244
  c->lr=0x801A024Cu; f_8013114C(c); // 801A0248
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A024C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0250
  c->lr=c->r[0]; // 801A0254
  c->r[1]=c->r[1]+0x00000010u; // 801A0258
  return; // 801A025C
}

// fn_801A0260
void f_801A0260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0260
  c->r[0]=c->lr; // 801A0264
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A026C
  c->r[31]=c->r[3]|c->r[3]; // 801A0270
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A0274
  c->lr=0x801A027Cu; f_8013ACBC(c); // 801A0278
  cmps(c,0,(int32_t)c->r[3],0); // 801A027C
  if (crb(c,2)) { goto L_801A02A4; } // 801A0280
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0284
  c->r[4]=0u+0x00000000u; // 801A0288
  c->lr=0x801A0290u; f_80139F78(c); // 801A028C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0290
  c->lr=0x801A0298u; f_8013BE34(c); // 801A0294
  c->r[3]=c->r[31]|c->r[31]; // 801A0298
  c->r[4]=0u+0x00000017u; // 801A029C
  c->lr=0x801A02A4u; f_8013114C(c); // 801A02A0
L_801A02A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A02A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A02A8
  c->lr=c->r[0]; // 801A02AC
  c->r[1]=c->r[1]+0x00000010u; // 801A02B0
  return; // 801A02B4
}

// fn_801A02B8
void f_801A02B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A02B8
  c->r[0]=c->lr; // 801A02BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A02C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A02C4
  c->r[31]=c->r[3]|c->r[3]; // 801A02C8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A02CC
  c->r[4]=0u+0x00000001u; // 801A02D0
  c->lr=0x801A02D8u; f_8013C1C4(c); // 801A02D4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A02D8
  c->lr=0x801A02E0u; f_8013C3C0(c); // 801A02DC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A02E0
  c->lr=0x801A02E8u; f_8013ACCC(c); // 801A02E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A02E8
  c->lr=0x801A02F0u; f_80135E14(c); // 801A02EC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A02F0
  c->lr=0x801A02F8u; f_801345AC(c); // 801A02F4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A02F8
  c->lr=0x801A0300u; f_80134D04(c); // 801A02FC
  c->r[4]=c->r[3]|c->r[3]; // 801A0300
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0304
  c->lr=0x801A030Cu; f_8013C1CC(c); // 801A0308
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A030C
  c->lr=0x801A0314u; f_80134DB0(c); // 801A0310
  c->r[4]=c->r[3]|c->r[3]; // 801A0314
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0318
  c->lr=0x801A0320u; f_8013C0EC(c); // 801A031C
  c->r[3]=c->r[31]|c->r[31]; // 801A0320
  c->r[4]=0u+0x00000024u; // 801A0324
  c->lr=0x801A032Cu; f_8013114C(c); // 801A0328
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A032C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0330
  c->lr=c->r[0]; // 801A0334
  c->r[1]=c->r[1]+0x00000010u; // 801A0338
  return; // 801A033C
}

// fn_801A0340
void f_801A0340(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0340
  c->r[0]=c->lr; // 801A0344
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0348
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A034C
  c->r[31]=c->r[3]|c->r[3]; // 801A0350
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A0354
  c->lr=0x801A035Cu; f_8013AF00(c); // 801A0358
  cmps(c,0,(int32_t)c->r[3],0); // 801A035C
  if (crb(c,2)) { goto L_801A0378; } // 801A0360
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0364
  c->lr=0x801A036Cu; f_8013AE88(c); // 801A0368
  c->r[3]=c->r[31]|c->r[31]; // 801A036C
  c->r[4]=0u+0x00000025u; // 801A0370
  c->lr=0x801A0378u; f_8013114C(c); // 801A0374
L_801A0378:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0378
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A037C
  c->lr=c->r[0]; // 801A0380
  c->r[1]=c->r[1]+0x00000010u; // 801A0384
  return; // 801A0388
}

// fn_801A038C
void f_801A038C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A038C
  c->r[0]=c->lr; // 801A0390
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0394
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0398
  c->r[31]=c->r[3]|c->r[3]; // 801A039C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A03A0
  c->lr=0x801A03A8u; f_8013AF38(c); // 801A03A4
  c->r[4]=c->r[3]|c->r[3]; // 801A03A8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A03AC
  c->lr=0x801A03B4u; f_80134DB8(c); // 801A03B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A03B4
  c->lr=0x801A03BCu; f_8013AF30(c); // 801A03B8
  c->r[4]=c->r[3]|c->r[3]; // 801A03BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A03C0
  c->lr=0x801A03C8u; f_80134DC0(c); // 801A03C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A03C8
  c->lr=0x801A03D0u; f_80135E08(c); // 801A03CC
  c->r[3]=c->r[31]|c->r[31]; // 801A03D0
  c->r[4]=0u+0x00000026u; // 801A03D4
  c->lr=0x801A03DCu; f_8013114C(c); // 801A03D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A03DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A03E0
  c->lr=c->r[0]; // 801A03E4
  c->r[1]=c->r[1]+0x00000010u; // 801A03E8
  return; // 801A03EC
}

// fn_801A03F0
void f_801A03F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A03F0
  c->r[0]=c->lr; // 801A03F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A03F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A03FC
  c->r[31]=c->r[3]|c->r[3]; // 801A0400
  c->r[3]=0u+0x00000001u; // 801A0404
  c->lr=0x801A040Cu; f_8019CD1C(c); // 801A0408
  cmps(c,0,(int32_t)c->r[3],0); // 801A040C
  if (crb(c,2)) { goto L_801A0434; } // 801A0410
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0414
  c->lr=0x801A041Cu; f_801345A4(c); // 801A0418
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A041C
  c->lr=0x801A0424u; f_80135E08(c); // 801A0420
  c->r[3]=c->r[31]|c->r[31]; // 801A0424
  c->r[4]=0u+0x00000027u; // 801A0428
  c->lr=0x801A0430u; f_8013114C(c); // 801A042C
  goto L_801A05FC; // 801A0430
L_801A0434:;
  c->r[3]=0u+0x00000000u; // 801A0434
  c->lr=0x801A043Cu; f_8019CD1C(c); // 801A0438
  cmps(c,0,(int32_t)c->r[3],0); // 801A043C
  if (crb(c,2)) { goto L_801A04B0; } // 801A0440
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0444
  c->lr=0x801A044Cu; f_80134D04(c); // 801A0448
  c->r[4]=c->r[3]|c->r[3]; // 801A044C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0450
  c->lr=0x801A0458u; f_8013C020(c); // 801A0454
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0458
  c->lr=0x801A0460u; f_80134DB0(c); // 801A045C
  c->r[4]=c->r[3]|c->r[3]; // 801A0460
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0464
  c->lr=0x801A046Cu; f_8013C0EC(c); // 801A0468
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A046C
  c->lr=0x801A0474u; f_8013AE88(c); // 801A0470
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0474
  c->lr=0x801A047Cu; f_8013570C(c); // 801A0478
  cmps(c,0,(int32_t)c->r[3],0); // 801A047C
  if (!crb(c,2)) { goto L_801A0490; } // 801A0480
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0484
  c->lr=0x801A048Cu; f_80135F08(c); // 801A0488
  goto L_801A05FC; // 801A048C
L_801A0490:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0490
  c->lr=0x801A0498u; f_80135E08(c); // 801A0494
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0498
  c->lr=0x801A04A0u; f_80135E7C(c); // 801A049C
  c->r[3]=c->r[31]|c->r[31]; // 801A04A0
  c->r[4]=0u+0x00000027u; // 801A04A4
  c->lr=0x801A04ACu; f_8013114C(c); // 801A04A8
  goto L_801A05FC; // 801A04AC
L_801A04B0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A04B0
  c->lr=0x801A04B8u; f_80135DAC(c); // 801A04B4
  cmps(c,0,(int32_t)c->r[3],0); // 801A04B8
  if (!crb(c,2)) { goto L_801A054C; } // 801A04BC
  c->r[3]=0u+0x00000008u; // 801A04C0
  c->lr=0x801A04C8u; f_8019CD1C(c); // 801A04C4
  cmps(c,0,(int32_t)c->r[3],0); // 801A04C8
  if (crb(c,2)) { goto L_801A054C; } // 801A04CC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A04D0
  c->lr=0x801A04D8u; f_8013AF40(c); // 801A04D4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A04D8
  c->lr=0x801A04E0u; f_80134CF8(c); // 801A04DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A04E0
  c->lr=0x801A04E8u; f_80134DA4(c); // 801A04E4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A04E8
  c->lr=0x801A04F0u; f_8013AF38(c); // 801A04EC
  c->r[4]=c->r[3]|c->r[3]; // 801A04F0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A04F4
  c->lr=0x801A04FCu; f_80134DB8(c); // 801A04F8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A04FC
  c->lr=0x801A0504u; f_8013AF30(c); // 801A0500
  c->r[4]=c->r[3]|c->r[3]; // 801A0504
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0508
  c->lr=0x801A0510u; f_80134DC0(c); // 801A050C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0510
  c->lr=0x801A0518u; f_80135EB0(c); // 801A0514
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0518
  c->lr=0x801A0520u; f_80134D04(c); // 801A051C
  c->r[4]=c->r[3]|c->r[3]; // 801A0520
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0524
  c->lr=0x801A052Cu; f_8013C020(c); // 801A0528
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A052C
  c->lr=0x801A0534u; f_80134DB0(c); // 801A0530
  c->r[4]=c->r[3]|c->r[3]; // 801A0534
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0538
  c->lr=0x801A0540u; f_8013C0EC(c); // 801A053C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0540
  c->lr=0x801A0548u; f_8013AE88(c); // 801A0544
  goto L_801A05FC; // 801A0548
L_801A054C:;
  c->r[3]=0u+0x00000003u; // 801A054C
  c->lr=0x801A0554u; f_8019CD1C(c); // 801A0550
  cmps(c,0,(int32_t)c->r[3],0); // 801A0554
  if (crb(c,2)) { goto L_801A0564; } // 801A0558
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A055C
  c->lr=0x801A0564u; f_80134C5C(c); // 801A0560
L_801A0564:;
  c->r[3]=0u+0x00000004u; // 801A0564
  c->lr=0x801A056Cu; f_8019CD1C(c); // 801A0568
  cmps(c,0,(int32_t)c->r[3],0); // 801A056C
  if (crb(c,2)) { goto L_801A057C; } // 801A0570
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0574
  c->lr=0x801A057Cu; f_80134C00(c); // 801A0578
L_801A057C:;
  c->r[3]=0u+0x00000006u; // 801A057C
  c->lr=0x801A0584u; f_8019CD1C(c); // 801A0580
  cmps(c,0,(int32_t)c->r[3],0); // 801A0584
  if (crb(c,2)) { goto L_801A05A4; } // 801A0588
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A058C
  c->lr=0x801A0594u; f_8013C1DC(c); // 801A0590
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0594
  c->lr=0x801A059Cu; f_80134D58(c); // 801A0598
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A059C
  c->lr=0x801A05A4u; f_80134CB8(c); // 801A05A0
L_801A05A4:;
  c->r[3]=0u+0x00000005u; // 801A05A4
  c->lr=0x801A05ACu; f_8019CD1C(c); // 801A05A8
  cmps(c,0,(int32_t)c->r[3],0); // 801A05AC
  if (crb(c,2)) { goto L_801A05CC; } // 801A05B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A05B4
  c->lr=0x801A05BCu; f_8013C1E4(c); // 801A05B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A05BC
  c->lr=0x801A05C4u; f_80134D0C(c); // 801A05C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A05C4
  c->lr=0x801A05CCu; f_80134CB8(c); // 801A05C8
L_801A05CC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A05CC
  c->lr=0x801A05D4u; f_80134D04(c); // 801A05D0
  c->r[4]=c->r[3]|c->r[3]; // 801A05D4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A05D8
  c->lr=0x801A05E0u; f_8013C020(c); // 801A05DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A05E0
  c->lr=0x801A05E8u; f_80134DB0(c); // 801A05E4
  c->r[4]=c->r[3]|c->r[3]; // 801A05E8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A05EC
  c->lr=0x801A05F4u; f_8013C0EC(c); // 801A05F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A05F4
  c->lr=0x801A05FCu; f_8013AE88(c); // 801A05F8
L_801A05FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A05FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0600
  c->lr=c->r[0]; // 801A0604
  c->r[1]=c->r[1]+0x00000010u; // 801A0608
  return; // 801A060C
}

// fn_801A0610
void f_801A0610(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0610
  c->r[0]=c->lr; // 801A0614
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A061C
  c->r[31]=c->r[3]|c->r[3]; // 801A0620
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801A0624
  c->lr=0x801A062Cu; f_801345B4(c); // 801A0628
  cmps(c,0,(int32_t)c->r[3],0); // 801A062C
  if (!crb(c,2)) { goto L_801A0654; } // 801A0630
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0634
  c->r[4]=0u+0x00000000u; // 801A0638
  c->lr=0x801A0640u; f_80139F80(c); // 801A063C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0640
  c->lr=0x801A0648u; f_8013ADE8(c); // 801A0644
  c->r[0]=0u+0x00000001u; // 801A0648
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801A064C
  goto L_801A0670; // 801A0650
L_801A0654:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0654
  c->r[4]=0u+0x00000000u; // 801A0658
  c->lr=0x801A0660u; f_80139F8C(c); // 801A065C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0660
  c->lr=0x801A0668u; f_80135E48(c); // 801A0664
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0668
  c->lr=0x801A0670u; f_8013AD84(c); // 801A066C
L_801A0670:;
  c->r[3]=c->r[31]|c->r[31]; // 801A0670
  c->r[4]=0u+0x00000028u; // 801A0674
  c->lr=0x801A067Cu; f_8013114C(c); // 801A0678
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A067C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0680
  c->lr=c->r[0]; // 801A0684
  c->r[1]=c->r[1]+0x00000010u; // 801A0688
  return; // 801A068C
}

// fn_801A0690
void f_801A0690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0690
  c->r[0]=c->lr; // 801A0694
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A069C
  c->r[31]=c->r[3]|c->r[3]; // 801A06A0
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A06A4
  c->lr=0x801A06ACu; f_8013AF00(c); // 801A06A8
  cmps(c,0,(int32_t)c->r[3],0); // 801A06AC
  if (crb(c,2)) { goto L_801A076C; } // 801A06B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A06B4
  c->lr=0x801A06BCu; f_801345B4(c); // 801A06B8
  cmps(c,0,(int32_t)c->r[3],0); // 801A06BC
  if (!crb(c,2)) { goto L_801A06D4; } // 801A06C0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A06C4
  c->r[4]=0u+0x00000000u; // 801A06C8
  c->lr=0x801A06D0u; f_80139F88(c); // 801A06CC
  goto L_801A06E0; // 801A06D0
L_801A06D4:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A06D4
  c->r[4]=0u+0x00000000u; // 801A06D8
  c->lr=0x801A06E0u; f_80139F80(c); // 801A06DC
L_801A06E0:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A06E0
  c->r[4]=0u+0x00000000u; // 801A06E4
  c->lr=0x801A06ECu; f_8013C1C4(c); // 801A06E8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A06EC
  c->lr=0x801A06F4u; f_801345B4(c); // 801A06F0
  cmps(c,0,(int32_t)c->r[3],0); // 801A06F4
  if (!crb(c,2)) { goto L_801A0760; } // 801A06F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A06FC
  c->r[4]=0u+0x00000000u; // 801A0700
  c->lr=0x801A0708u; f_80134DC8(c); // 801A0704
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0708
  c->lr=0x801A0710u; f_8013A69C(c); // 801A070C
  c->r[4]=c->r[3]|c->r[3]; // 801A0710
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0714
  c->lr=0x801A071Cu; f_80135F3C(c); // 801A0718
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A071C
  c->lr=0x801A0724u; f_8013AF08(c); // 801A0720
  c->r[4]=c->r[3]|c->r[3]; // 801A0724
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0728
  c->lr=0x801A0730u; f_80135F44(c); // 801A072C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0730
  c->lr=0x801A0738u; f_80134A74(c); // 801A0734
  c->r[5]=c->r[3]|c->r[3]; // 801A0738
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A073C
  c->r[4]=0u+0x00000000u; // 801A0740
  c->lr=0x801A0748u; f_80135F4C(c); // 801A0744
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A0748
  c->lr=0x801A0750u; f_80134564(c); // 801A074C
  c->r[3]=c->r[31]|c->r[31]; // 801A0750
  c->r[4]=0u+0x00000000u; // 801A0754
  c->lr=0x801A075Cu; f_8013114C(c); // 801A0758
  goto L_801A076C; // 801A075C
L_801A0760:;
  c->r[3]=c->r[31]|c->r[31]; // 801A0760
  c->r[4]=0u+0x00000017u; // 801A0764
  c->lr=0x801A076Cu; f_8013114C(c); // 801A0768
L_801A076C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A076C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0770
  c->lr=c->r[0]; // 801A0774
  c->r[1]=c->r[1]+0x00000010u; // 801A0778
  return; // 801A077C
}

// fn_801A0780
void f_801A0780(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0780
  c->r[0]=c->lr; // 801A0784
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A078C
  c->r[31]=c->r[3]|c->r[3]; // 801A0790
  c->r[3]=0u+0x00000001u; // 801A0794
  c->lr=0x801A079Cu; f_8012C3BC(c); // 801A0798
  c->r[3]=0u+0x00000001u; // 801A079C
  c->lr=0x801A07A4u; f_8012C380(c); // 801A07A0
  c->r[3]=0u+0x00000069u; // 801A07A4
  c->r[4]=0u+0x00000000u; // 801A07A8
  c->lr=0x801A07B0u; f_8012C334(c); // 801A07AC
  c->r[3]=0u+0x00000064u; // 801A07B0
  c->r[4]=0u+0x00000000u; // 801A07B4
  c->lr=0x801A07BCu; f_8012C334(c); // 801A07B8
  c->r[3]=0u+0x00000065u; // 801A07BC
  c->r[4]=0u+0x00000000u; // 801A07C0
  c->lr=0x801A07C8u; f_8012C334(c); // 801A07C4
  c->lr=0x801A07CCu; f_8012C280(c); // 801A07C8
  c->r[3]=c->r[31]|c->r[31]; // 801A07CC
  c->r[4]=0u+0x0000002Au; // 801A07D0
  c->lr=0x801A07D8u; f_8013114C(c); // 801A07D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A07D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A07DC
  c->lr=c->r[0]; // 801A07E0
  c->r[1]=c->r[1]+0x00000010u; // 801A07E4
  return; // 801A07E8
}

// fn_801A07EC
void f_801A07EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A07EC
  c->r[0]=c->lr; // 801A07F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A07F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A07F8
  c->r[31]=c->r[3]|c->r[3]; // 801A07FC
  c->lr=0x801A0804u; f_8012C2B8(c); // 801A0800
  cmps(c,0,(int32_t)c->r[3],0); // 801A0804
  if (crb(c,2)) { goto L_801A0834; } // 801A0808
  c->lr=0x801A0810u; f_8012C2E4(c); // 801A080C
  cmps(c,0,(int32_t)c->r[3],0); // 801A0810
  if (!crb(c,2)) { goto L_801A0828; } // 801A0814
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0818
  c->lr=0x801A0820u; f_8013AAC8(c); // 801A081C
  c->r[0]=0u+0x00000001u; // 801A0820
  W32(c->r[31]+0x000000ECu,c->r[0]); // 801A0824
L_801A0828:;
  c->r[3]=c->r[31]|c->r[31]; // 801A0828
  c->r[4]=0u+0x0000002Bu; // 801A082C
  c->lr=0x801A0834u; f_8013114C(c); // 801A0830
L_801A0834:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0834
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0838
  c->lr=c->r[0]; // 801A083C
  c->r[1]=c->r[1]+0x00000010u; // 801A0840
  return; // 801A0844
}

// fn_801A0848
void f_801A0848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0848
  c->r[0]=c->lr; // 801A084C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0854
  c->r[31]=c->r[3]|c->r[3]; // 801A0858
  c->lr=0x801A0860u; f_8012C2E4(c); // 801A085C
  cmps(c,0,(int32_t)c->r[3],0); // 801A0860
  if (!crb(c,2)) { goto L_801A08F8; } // 801A0864
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0868
  c->lr=0x801A0870u; f_8013AB9C(c); // 801A086C
  cmps(c,0,(int32_t)c->r[3],0); // 801A0870
  if (crb(c,2)) { goto L_801A0914; } // 801A0874
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0878
  c->r[4]=0u+0x00000000u; // 801A087C
  c->lr=0x801A0884u; f_80139F34(c); // 801A0880
  c->r[3]=0u+0x00000000u; // 801A0884
  c->lr=0x801A088Cu; f_8012C380(c); // 801A0888
  c->r[3]=0u+0x00000000u; // 801A088C
  c->lr=0x801A0894u; f_8012C3BC(c); // 801A0890
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0894
  c->lr=0x801A089Cu; f_8013AFAC(c); // 801A0898
  c->r[4]=c->r[3]|c->r[3]; // 801A089C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A08A0
  c->lr=0x801A08A8u; f_80134DC8(c); // 801A08A4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A08A8
  c->lr=0x801A08B0u; f_8013A69C(c); // 801A08AC
  c->r[4]=c->r[3]|c->r[3]; // 801A08B0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A08B4
  c->lr=0x801A08BCu; f_80135F3C(c); // 801A08B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A08BC
  c->r[4]=0u+0xFFFFFFFFu; // 801A08C0
  c->lr=0x801A08C8u; f_80135F44(c); // 801A08C4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A08C8
  c->lr=0x801A08D0u; f_80134A74(c); // 801A08CC
  c->r[5]=c->r[3]|c->r[3]; // 801A08D0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A08D4
  c->r[4]=0u+0x00000000u; // 801A08D8
  c->lr=0x801A08E0u; f_80135F4C(c); // 801A08DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A08E0
  c->lr=0x801A08E8u; f_80134564(c); // 801A08E4
  c->r[3]=c->r[31]|c->r[31]; // 801A08E8
  c->r[4]=0u+0x00000000u; // 801A08EC
  c->lr=0x801A08F4u; f_8013114C(c); // 801A08F0
  goto L_801A0914; // 801A08F4
L_801A08F8:;
  c->r[3]=0u+0x00000000u; // 801A08F8
  c->lr=0x801A0900u; f_8012C380(c); // 801A08FC
  c->r[3]=0u+0x00000000u; // 801A0900
  c->lr=0x801A0908u; f_8012C3BC(c); // 801A0904
  c->r[3]=c->r[31]|c->r[31]; // 801A0908
  c->r[4]=0u+0x00000017u; // 801A090C
  c->lr=0x801A0914u; f_8013114C(c); // 801A0910
L_801A0914:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0914
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0918
  c->lr=c->r[0]; // 801A091C
  c->r[1]=c->r[1]+0x00000010u; // 801A0920
  return; // 801A0924
}

// fn_801A0928
void f_801A0928(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0928
  c->r[0]=c->lr; // 801A092C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0934
  c->r[31]=c->r[3]|c->r[3]; // 801A0938
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A093C
  c->r[4]=0u+0x00000000u; // 801A0940
  c->r[5]=0u+0x00000001u; // 801A0944
  c->lr=0x801A094Cu; f_80139EE0(c); // 801A0948
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A094C
  c->lr=0x801A0954u; f_80135E48(c); // 801A0950
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A0954
  c->lr=0x801A095Cu; f_8013A568(c); // 801A0958
  c->r[3]=c->r[31]|c->r[31]; // 801A095C
  c->r[4]=0u+0x0000002Du; // 801A0960
  c->lr=0x801A0968u; f_8013114C(c); // 801A0964
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0968
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A096C
  c->lr=c->r[0]; // 801A0970
  c->r[1]=c->r[1]+0x00000010u; // 801A0974
  return; // 801A0978
}

// fn_801A097C
void f_801A097C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A097C
  c->r[0]=c->lr; // 801A0980
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0984
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0988
  c->r[31]=c->r[3]|c->r[3]; // 801A098C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A0990
  c->lr=0x801A0998u; f_8013A698(c); // 801A0994
  cmps(c,0,(int32_t)c->r[3],0); // 801A0998
  if (crb(c,2)) { goto L_801A0A0C; } // 801A099C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A09A0
  c->r[4]=0u+0x00000000u; // 801A09A4
  c->r[5]=0u+0x00000001u; // 801A09A8
  c->lr=0x801A09B0u; f_80139E94(c); // 801A09AC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A09B0
  c->lr=0x801A09B8u; f_801345B4(c); // 801A09B4
  cmps(c,0,(int32_t)c->r[3],0); // 801A09B8
  if (!crb(c,2)) { goto L_801A09D0; } // 801A09BC
  c->r[3]=c->r[31]|c->r[31]; // 801A09C0
  c->r[4]=0u+0x0000000Du; // 801A09C4
  c->lr=0x801A09CCu; f_8013114C(c); // 801A09C8
  goto L_801A0A0C; // 801A09CC
L_801A09D0:;
  c->r[0]=R32(c->r[31]+0x000000F0u); // 801A09D0
  cmps(c,0,(int32_t)c->r[0],0); // 801A09D4
  if (crb(c,2)) { goto L_801A0A00; } // 801A09D8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A09DC
  c->r[4]=0u+0x00000000u; // 801A09E0
  c->lr=0x801A09E8u; f_80139F34(c); // 801A09E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A09E8
  c->lr=0x801A09F0u; f_80134564(c); // 801A09EC
  c->r[3]=c->r[31]|c->r[31]; // 801A09F0
  c->r[4]=0u+0x00000000u; // 801A09F4
  c->lr=0x801A09FCu; f_8013114C(c); // 801A09F8
  goto L_801A0A0C; // 801A09FC
L_801A0A00:;
  c->r[3]=c->r[31]|c->r[31]; // 801A0A00
  c->r[4]=0u+0x00000004u; // 801A0A04
  c->lr=0x801A0A0Cu; f_8013114C(c); // 801A0A08
L_801A0A0C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0A0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0A10
  c->lr=c->r[0]; // 801A0A14
  c->r[1]=c->r[1]+0x00000010u; // 801A0A18
  return; // 801A0A1C
}

// fn_801A0A20
void f_801A0A20(Ctx* __restrict c) {
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 801A0A20
  c->r[3]=0u+0x80430000u; // 801A0A24
  c->r[0]=c->r[3]+0x00000730u; // 801A0A28
  c->r[3]=c->r[0]+c->r[4]; // 801A0A2C
  return; // 801A0A30
}

// fn_801A0A34
void f_801A0A34(Ctx* __restrict c) {
  c->r[3]=0u+0x0000000Au; // 801A0A34
  return; // 801A0A38
}

// fn_801A0A3C
void f_801A0A3C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0A3C
  c->r[0]=c->lr; // 801A0A40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A0A44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A0A48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A0A4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A0A50
  c->r[29]=c->r[3]|c->r[3]; // 801A0A54
  c->r[30]=0u+0x00000000u; // 801A0A58
  goto L_801A0AA4; // 801A0A5C
L_801A0A60:;
  c->r[3]=c->r[29]|c->r[29]; // 801A0A60
  c->r[4]=c->r[30]|c->r[30]; // 801A0A64
  c->lr=0x801A0A6Cu; f_801A0B14(c); // 801A0A68
  c->r[31]=c->r[3]|c->r[3]; // 801A0A6C
  c->r[3]=c->r[29]|c->r[29]; // 801A0A70
  c->r[4]=R32(c->r[31]+0x00000008u); // 801A0A74
  c->lr=0x801A0A7Cu; f_801A0B30(c); // 801A0A78
  W32(c->r[31]+0x00000008u,c->r[3]); // 801A0A7C
  c->r[3]=c->r[29]|c->r[29]; // 801A0A80
  c->r[4]=R32(c->r[31]+0x00000040u); // 801A0A84
  c->lr=0x801A0A8Cu; f_801A0B30(c); // 801A0A88
  W32(c->r[31]+0x00000040u,c->r[3]); // 801A0A8C
  c->r[3]=c->r[29]|c->r[29]; // 801A0A90
  c->r[4]=R32(c->r[31]+0x00000044u); // 801A0A94
  c->lr=0x801A0A9Cu; f_801A0B30(c); // 801A0A98
  W32(c->r[31]+0x00000044u,c->r[3]); // 801A0A9C
  c->r[30]=c->r[30]+0x00000001u; // 801A0AA0
L_801A0AA4:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 801A0AA4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A0AA8
  cmpu(c,0,c->r[30],c->r[0]); // 801A0AAC
  if (crb(c,0)) { IRQCHK(c); goto L_801A0A60; } // 801A0AB0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A0AB4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A0AB8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A0ABC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A0AC0
  c->lr=c->r[0]; // 801A0AC4
  c->r[1]=c->r[1]+0x00000020u; // 801A0AC8
  return; // 801A0ACC
}

// fn_801A0AD0
void f_801A0AD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0AD0
  c->r[0]=c->lr; // 801A0AD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A0AD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A0ADC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A0AE0
  c->r[30]=c->r[3]|c->r[3]; // 801A0AE4
  c->r[31]=c->r[5]|c->r[5]; // 801A0AE8
  c->lr=0x801A0AF0u; f_800FC250(c); // 801A0AEC
  c->r[3]=c->r[30]|c->r[30]; // 801A0AF0
  c->r[4]=c->r[31]|c->r[31]; // 801A0AF4
  c->lr=0x801A0AFCu; f_801A0B14(c); // 801A0AF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A0AFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A0B00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A0B04
  c->lr=c->r[0]; // 801A0B08
  c->r[1]=c->r[1]+0x00000010u; // 801A0B0C
  return; // 801A0B10
}

// fn_801A0B14
void f_801A0B14(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A0B14
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A0B18
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A0B1C
  c->r[0]=c->r[4]-c->r[0]; // 801A0B20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 801A0B24
  c->r[3]=c->r[5]+c->r[0]; // 801A0B28
  return; // 801A0B2C
}

// fn_801A0B30
void f_801A0B30(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A0B30
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801A0B34
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A0B38
  c->r[3]=c->r[3]+c->r[0]; // 801A0B3C
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801A0B40
  return; // 801A0B44
}

// fn_801A0B48
void f_801A0B48(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801A0B48
  c->r[3]=c->r[3]+0x00000870u; // 801A0B4C
  return; // 801A0B50
}

// fn_801A0B54
void f_801A0B54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0B54
  c->r[0]=c->lr; // 801A0B58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A0B5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A0B60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A0B64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A0B68
  c->r[29]=c->r[3]|c->r[3]; // 801A0B6C
  c->r[30]=c->r[4]|c->r[4]; // 801A0B70
  c->r[31]=0u+0x00000000u; // 801A0B74
  goto L_801A0BAC; // 801A0B78
L_801A0B7C:;
  c->r[3]=c->r[29]|c->r[29]; // 801A0B7C
  c->r[4]=c->r[31]|c->r[31]; // 801A0B80
  c->lr=0x801A0B88u; f_801A0BDC(c); // 801A0B84
  c->r[0]=R32(c->r[3]+0x00000004u); // 801A0B88
  cmpu(c,0,c->r[30],c->r[0]); // 801A0B8C
  if (!crb(c,2)) { goto L_801A0BA8; } // 801A0B90
  c->r[3]=c->r[29]|c->r[29]; // 801A0B94
  c->r[4]=c->r[31]|c->r[31]; // 801A0B98
  c->lr=0x801A0BA0u; f_801A0BDC(c); // 801A0B9C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801A0BA0
  goto L_801A0BC0; // 801A0BA4
L_801A0BA8:;
  c->r[31]=c->r[31]+0x00000001u; // 801A0BA8
L_801A0BAC:;
  c->r[3]=R32(c->r[29]+0x00000034u); // 801A0BAC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801A0BB0
  cmpu(c,0,c->r[31],c->r[0]); // 801A0BB4
  if (crb(c,0)) { IRQCHK(c); goto L_801A0B7C; } // 801A0BB8
  c->r[3]=0u+0xFFFFFFFFu; // 801A0BBC
L_801A0BC0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A0BC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A0BC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A0BC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A0BCC
  c->lr=c->r[0]; // 801A0BD0
  c->r[1]=c->r[1]+0x00000020u; // 801A0BD4
  return; // 801A0BD8
}

// fn_801A0BDC
void f_801A0BDC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A0BDC
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A0BE0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A0BE4
  c->r[0]=c->r[4]-c->r[0]; // 801A0BE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 801A0BEC
  c->r[3]=c->r[5]+c->r[0]; // 801A0BF0
  return; // 801A0BF4
}

// fn_801A0BF8
void f_801A0BF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A0BF8
  c->r[0]=c->lr; // 801A0BFC
  W32(c->r[1]+0x00000064u,c->r[0]); // 801A0C00
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801A0C04
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801A0C08
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801A0C0C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801A0C10
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801A0C14
  W32(c->r[1]+0x00000038u,c->r[30]); // 801A0C18
  W32(c->r[1]+0x00000034u,c->r[29]); // 801A0C1C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801A0C20
  c->r[29]=c->r[3]|c->r[3]; // 801A0C24
  c->r[3]=c->r[1]+0x0000001Cu; // 801A0C28
  c->lr=0x801A0C30u; f_80047C5C(c); // 801A0C2C
  c->r[3]=c->r[29]|c->r[29]; // 801A0C30
  c->lr=0x801A0C38u; f_801A17B0(c); // 801A0C34
  c->r[28]=c->r[3]|c->r[3]; // 801A0C38
  c->lr=0x801A0C40u; f_801A179C(c); // 801A0C3C
  c->f[30]=c->f[1]; // 801A0C40
  c->r[3]=c->r[28]|c->r[28]; // 801A0C44
  c->lr=0x801A0C4Cu; f_801A1794(c); // 801A0C48
  c->f[31]=c->f[1]; // 801A0C4C
  c->f[1]=c->f[30]; // 801A0C50
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A0C54
  {uint32_t ea=c->r[2]+0xFFFF922Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A0C58
  c->lr=0x801A0C60u; f_800549D4(c); // 801A0C5C
  {uint32_t ea=c->r[2]+0xFFFF922Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A0C60
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[1]); // 801A0C64
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A0C68
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A0C6C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801A0C70
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 801A0C74
  c->r[30]=R32(c->r[1]+0x00000024u); // 801A0C78
  c->f[1]=c->f[31]; // 801A0C7C
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A0C80
  c->lr=0x801A0C88u; f_800549D4(c); // 801A0C84
  {uint32_t ea=c->r[2]+0xFFFF922Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A0C88
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 801A0C8C
  {uint32_t ea=c->r[2]+0xFFFF9228u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A0C90
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A0C94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801A0C98
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 801A0C9C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801A0CA0
  c->r[3]=c->r[1]+0x00000014u; // 801A0CA4
  c->r[4]=0u+0x00000000u; // 801A0CA8
  c->lr=0x801A0CB0u; f_8004B068(c); // 801A0CAC
  c->r[4]=c->r[1]+0x00000018u; // 801A0CB0
  c->r[0]=R8(c->r[1]+0x00000014u); // 801A0CB4
  W8(c->r[1]+0x00000018u,c->r[0]); // 801A0CB8
  c->r[0]=R8(c->r[1]+0x00000015u); // 801A0CBC
  W8(c->r[1]+0x00000019u,c->r[0]); // 801A0CC0
  c->r[0]=R8(c->r[1]+0x00000016u); // 801A0CC4
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801A0CC8
  c->r[0]=R8(c->r[1]+0x00000017u); // 801A0CCC
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801A0CD0
  c->r[3]=0u+0x00000000u; // 801A0CD4
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A0CD8
  c->f[2]=c->f[1]; // 801A0CDC
  c->f[3]=c->f[1]; // 801A0CE0
  c->f[4]=c->f[1]; // 801A0CE4
  c->lr=0x801A0CECu; f_803489CC(c); // 801A0CE8
  c->r[3]=c->r[1]+0x00000014u; // 801A0CEC
  c->r[4]=0u+0xFFFFFFFFu; // 801A0CF0
  c->lr=0x801A0CF8u; f_80047BD4(c); // 801A0CF4
  c->r[3]=0u+0x00000001u; // 801A0CF8
  c->lr=0x801A0D00u; f_80346E94(c); // 801A0CFC
  c->r[28]=0u+0x80460000u; // 801A0D00
  c->r[3]=R32(c->r[28]+0xFFFFD188u); // 801A0D04
  c->r[4]=c->r[1]+0x00000010u; // 801A0D08
  c->r[0]=R8(c->r[3]+0x00000000u); // 801A0D0C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801A0D10
  c->r[0]=R8(c->r[3]+0x00000001u); // 801A0D14
  W8(c->r[1]+0x00000011u,c->r[0]); // 801A0D18
  c->r[0]=R8(c->r[3]+0x00000002u); // 801A0D1C
  W8(c->r[1]+0x00000012u,c->r[0]); // 801A0D20
  c->r[0]=R8(c->r[3]+0x00000003u); // 801A0D24
  W8(c->r[1]+0x00000013u,c->r[0]); // 801A0D28
  c->r[3]=0u+0x00000004u; // 801A0D2C
  c->lr=0x801A0D34u; f_80346DBC(c); // 801A0D30
  c->r[3]=R32(c->r[28]+0xFFFFD188u); // 801A0D34
  c->r[4]=c->r[1]+0x0000000Cu; // 801A0D38
  c->r[0]=R8(c->r[3]+0x00000000u); // 801A0D3C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801A0D40
  c->r[0]=R8(c->r[3]+0x00000001u); // 801A0D44
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801A0D48
  c->r[0]=R8(c->r[3]+0x00000002u); // 801A0D4C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801A0D50
  c->r[0]=R8(c->r[3]+0x00000003u); // 801A0D54
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801A0D58
  c->r[3]=0u+0x00000004u; // 801A0D5C
  c->lr=0x801A0D64u; f_80346CE4(c); // 801A0D60
  c->r[3]=0u+0x00000004u; // 801A0D64
  c->r[4]=0u+0x00000000u; // 801A0D68
  c->r[5]=0u+0x00000000u; // 801A0D6C
  c->r[6]=0u+0x00000000u; // 801A0D70
  c->r[7]=0u+0x00000000u; // 801A0D74
  c->r[8]=0u+0x00000000u; // 801A0D78
  c->r[9]=0u+0x00000002u; // 801A0D7C
  c->lr=0x801A0D84u; f_80346EB8(c); // 801A0D80
  c->r[0]=0u+0x000000FFu; // 801A0D84
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801A0D88
  W8(c->r[1]+0x0000001Du,c->r[31]); // 801A0D8C
  W8(c->r[1]+0x0000001Eu,c->r[30]); // 801A0D90
  c->r[3]=0u+0x00000000u; // 801A0D94
  W8(c->r[1]+0x0000001Fu,c->r[3]); // 801A0D98
  c->r[4]=c->r[1]+0x00000008u; // 801A0D9C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801A0DA0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801A0DA4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801A0DA8
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801A0DAC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801A0DB0
  W8(c->r[1]+0x0000000Bu,c->r[3]); // 801A0DB4
  c->r[3]=0u+0x00000000u; // 801A0DB8
  c->lr=0x801A0DC0u; f_803485D4(c); // 801A0DBC
  c->r[3]=0u+0x00000000u; // 801A0DC0
  c->lr=0x801A0DC8u; f_8034828C(c); // 801A0DC4
  c->r[3]=0u+0x00000002u; // 801A0DC8
  c->lr=0x801A0DD0u; f_80344FA8(c); // 801A0DCC
  c->r[3]=0u+0x00000000u; // 801A0DD0
  c->r[4]=0u+0x00000001u; // 801A0DD4
  c->r[5]=0u+0x00000004u; // 801A0DD8
  c->r[6]=0u+0x0000003Cu; // 801A0DDC
  c->lr=0x801A0DE4u; f_801A17A4(c); // 801A0DE0
  c->r[3]=c->r[29]+0x000000B4u; // 801A0DE4
  c->r[4]=0u+0x00000000u; // 801A0DE8
  c->r[5]=0u+0x00000000u; // 801A0DEC
  c->lr=0x801A0DF4u; f_8004CDC0(c); // 801A0DF0
  c->r[3]=0u+0x00000000u; // 801A0DF4
  c->r[4]=0u+0x00000000u; // 801A0DF8
  c->r[5]=0u+0x00000000u; // 801A0DFC
  c->r[6]=0u+0x00000004u; // 801A0E00
  c->lr=0x801A0E08u; f_8034884C(c); // 801A0E04
  c->r[3]=0u+0x00000001u; // 801A0E08
  c->r[4]=0u+0x00000001u; // 801A0E0C
  c->r[5]=0u+0x00000005u; // 801A0E10
  c->r[6]=0u+0x0000003Cu; // 801A0E14
  c->lr=0x801A0E1Cu; f_801A17A4(c); // 801A0E18
  c->r[3]=c->r[29]+0x000000B4u; // 801A0E1C
  c->r[4]=0u+0x00000001u; // 801A0E20
  c->r[5]=0u+0x00000001u; // 801A0E24
  c->lr=0x801A0E2Cu; f_8004CDC0(c); // 801A0E28
  c->r[3]=0u+0x00000001u; // 801A0E2C
  c->r[4]=0u+0x00000001u; // 801A0E30
  c->r[5]=0u+0x00000001u; // 801A0E34
  c->r[6]=0u+0x00000004u; // 801A0E38
  c->lr=0x801A0E40u; f_8034884C(c); // 801A0E3C
  c->r[3]=0u+0x00000002u; // 801A0E40
  c->r[4]=0u+0x00000001u; // 801A0E44
  c->r[5]=0u+0x00000001u; // 801A0E48
  c->r[6]=0u+0x00000004u; // 801A0E4C
  c->lr=0x801A0E54u; f_8034884C(c); // 801A0E50
  c->r[3]=0u+0x00000003u; // 801A0E54
  c->r[4]=0u+0x00000001u; // 801A0E58
  c->r[5]=0u+0x00000001u; // 801A0E5C
  c->r[6]=0u+0x00000004u; // 801A0E60
  c->lr=0x801A0E68u; f_8034884C(c); // 801A0E64
  c->r[3]=0u+0x00000004u; // 801A0E68
  c->r[4]=0u+0x00000001u; // 801A0E6C
  c->r[5]=0u+0x00000001u; // 801A0E70
  c->r[6]=0u+0x00000004u; // 801A0E74
  c->lr=0x801A0E7Cu; f_8034884C(c); // 801A0E78
  c->r[3]=0u+0x00000005u; // 801A0E7C
  c->lr=0x801A0E84u; f_803489A8(c); // 801A0E80
  c->r[3]=0u+0x00000000u; // 801A0E84
  c->lr=0x801A0E8Cu; f_803482AC(c); // 801A0E88
  c->r[3]=0u+0x00000000u; // 801A0E8C
  c->r[4]=0u+0x0000000Fu; // 801A0E90
  c->r[5]=0u+0x00000009u; // 801A0E94
  c->r[6]=0u+0x0000000Au; // 801A0E98
  c->r[7]=0u+0x0000000Au; // 801A0E9C
  c->lr=0x801A0EA4u; f_803483E0(c); // 801A0EA0
  c->r[3]=0u+0x00000000u; // 801A0EA4
  c->r[4]=0u+0x00000001u; // 801A0EA8
  c->r[5]=0u+0x00000000u; // 801A0EAC
  c->r[6]=0u+0x00000002u; // 801A0EB0
  c->r[7]=0u+0x00000001u; // 801A0EB4
  c->r[8]=0u+0x00000001u; // 801A0EB8
  c->lr=0x801A0EC0u; f_80348460(c); // 801A0EBC
  c->r[3]=0u+0x00000000u; // 801A0EC0
  c->r[4]=0u+0x00000007u; // 801A0EC4
  c->r[5]=0u+0x00000004u; // 801A0EC8
  c->r[6]=0u+0x00000005u; // 801A0ECC
  c->r[7]=0u+0x00000005u; // 801A0ED0
  c->lr=0x801A0ED8u; f_80348420(c); // 801A0ED4
  c->r[3]=0u+0x00000000u; // 801A0ED8
  c->r[4]=0u+0x00000001u; // 801A0EDC
  c->r[5]=0u+0x00000000u; // 801A0EE0
  c->r[6]=0u+0x00000002u; // 801A0EE4
  c->r[7]=0u+0x00000001u; // 801A0EE8
  c->r[8]=0u+0x00000001u; // 801A0EEC
  c->lr=0x801A0EF4u; f_803484B8(c); // 801A0EF0
  c->r[3]=0u+0x00000001u; // 801A0EF4
  c->lr=0x801A0EFCu; f_803482AC(c); // 801A0EF8
  {uint32_t ea=c->r[2]+0xFFFF9234u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A0EFC
  fcmp(c,0,c->f[31],c->f[0]); // 801A0F00
  if (!crb(c,1)) { goto L_801A0F8C; } // 801A0F04
  c->r[3]=0u+0x00000001u; // 801A0F08
  c->r[4]=0u+0x00000010u; // 801A0F0C
  c->lr=0x801A0F14u; f_80348630(c); // 801A0F10
  c->r[3]=0u+0x00000001u; // 801A0F14
  c->r[4]=0u+0x00000010u; // 801A0F18
  c->lr=0x801A0F20u; f_80348680(c); // 801A0F1C
  c->r[3]=0u+0x00000001u; // 801A0F20
  c->r[4]=0u+0x0000000Fu; // 801A0F24
  c->r[5]=0u+0x0000000Eu; // 801A0F28
  c->r[6]=0u+0x0000000Au; // 801A0F2C
  c->r[7]=0u+0x0000000Fu; // 801A0F30
  c->lr=0x801A0F38u; f_803483E0(c); // 801A0F34
  c->r[3]=0u+0x00000001u; // 801A0F38
  c->r[4]=0u+0x00000000u; // 801A0F3C
  c->r[5]=0u+0x00000000u; // 801A0F40
  c->r[6]=0u+0x00000000u; // 801A0F44
  c->r[7]=0u+0x00000001u; // 801A0F48
  c->r[8]=0u+0x00000002u; // 801A0F4C
  c->lr=0x801A0F54u; f_80348460(c); // 801A0F50
  c->r[3]=0u+0x00000001u; // 801A0F54
  c->r[4]=0u+0x00000007u; // 801A0F58
  c->r[5]=0u+0x00000006u; // 801A0F5C
  c->r[6]=0u+0x00000005u; // 801A0F60
  c->r[7]=0u+0x00000007u; // 801A0F64
  c->lr=0x801A0F6Cu; f_80348420(c); // 801A0F68
  c->r[3]=0u+0x00000001u; // 801A0F6C
  c->r[4]=0u+0x00000000u; // 801A0F70
  c->r[5]=0u+0x00000000u; // 801A0F74
  c->r[6]=0u+0x00000000u; // 801A0F78
  c->r[7]=0u+0x00000001u; // 801A0F7C
  c->r[8]=0u+0x00000002u; // 801A0F80
  c->lr=0x801A0F88u; f_803484B8(c); // 801A0F84
  goto L_801A100C; // 801A0F88
L_801A0F8C:;
  c->r[3]=0u+0x00000001u; // 801A0F8C
  c->r[4]=0u+0x00000014u; // 801A0F90
  c->lr=0x801A0F98u; f_80348630(c); // 801A0F94
  c->r[3]=0u+0x00000001u; // 801A0F98
  c->r[4]=0u+0x00000014u; // 801A0F9C
  c->lr=0x801A0FA4u; f_80348680(c); // 801A0FA0
  c->r[3]=0u+0x00000001u; // 801A0FA4
  c->r[4]=0u+0x00000002u; // 801A0FA8
  c->r[5]=0u+0x0000000Eu; // 801A0FAC
  c->r[6]=0u+0x0000000Au; // 801A0FB0
  c->r[7]=0u+0x0000000Fu; // 801A0FB4
  c->lr=0x801A0FBCu; f_803483E0(c); // 801A0FB8
  c->r[3]=0u+0x00000001u; // 801A0FBC
  c->r[4]=0u+0x0000000Eu; // 801A0FC0
  c->r[5]=0u+0x00000000u; // 801A0FC4
  c->r[6]=0u+0x00000000u; // 801A0FC8
  c->r[7]=0u+0x00000001u; // 801A0FCC
  c->r[8]=0u+0x00000002u; // 801A0FD0
  c->lr=0x801A0FD8u; f_80348460(c); // 801A0FD4
  c->r[3]=0u+0x00000001u; // 801A0FD8
  c->r[4]=0u+0x00000001u; // 801A0FDC
  c->r[5]=0u+0x00000006u; // 801A0FE0
  c->r[6]=0u+0x00000005u; // 801A0FE4
  c->r[7]=0u+0x00000007u; // 801A0FE8
  c->lr=0x801A0FF0u; f_80348420(c); // 801A0FEC
  c->r[3]=0u+0x00000001u; // 801A0FF0
  c->r[4]=0u+0x0000000Eu; // 801A0FF4
  c->r[5]=0u+0x00000000u; // 801A0FF8
  c->r[6]=0u+0x00000000u; // 801A0FFC
  c->r[7]=0u+0x00000001u; // 801A1000
  c->r[8]=0u+0x00000002u; // 801A1004
  c->lr=0x801A100Cu; f_803484B8(c); // 801A1008
L_801A100C:;
  c->r[3]=0u+0x00000002u; // 801A100C
  c->lr=0x801A1014u; f_803482AC(c); // 801A1010
  c->r[3]=0u+0x00000002u; // 801A1014
  c->r[4]=0u+0x00000018u; // 801A1018
  c->lr=0x801A1020u; f_80348630(c); // 801A101C
  c->r[3]=0u+0x00000002u; // 801A1020
  c->r[4]=0u+0x00000018u; // 801A1024
  c->lr=0x801A102Cu; f_80348680(c); // 801A1028
  c->r[3]=0u+0x00000002u; // 801A102C
  c->r[4]=0u+0x0000000Eu; // 801A1030
  c->r[5]=0u+0x00000002u; // 801A1034
  c->r[6]=0u+0x0000000Au; // 801A1038
  c->r[7]=0u+0x0000000Fu; // 801A103C
  c->lr=0x801A1044u; f_803483E0(c); // 801A1040
  c->r[3]=0u+0x00000002u; // 801A1044
  c->r[4]=0u+0x0000000Eu; // 801A1048
  c->r[5]=0u+0x00000000u; // 801A104C
  c->r[6]=0u+0x00000000u; // 801A1050
  c->r[7]=0u+0x00000001u; // 801A1054
  c->r[8]=0u+0x00000003u; // 801A1058
  c->lr=0x801A1060u; f_80348460(c); // 801A105C
  c->r[3]=0u+0x00000002u; // 801A1060
  c->r[4]=0u+0x00000006u; // 801A1064
  c->r[5]=0u+0x00000001u; // 801A1068
  c->r[6]=0u+0x00000005u; // 801A106C
  c->r[7]=0u+0x00000007u; // 801A1070
  c->lr=0x801A1078u; f_80348420(c); // 801A1074
  c->r[3]=0u+0x00000002u; // 801A1078
  c->r[4]=0u+0x0000000Eu; // 801A107C
  c->r[5]=0u+0x00000000u; // 801A1080
  c->r[6]=0u+0x00000000u; // 801A1084
  c->r[7]=0u+0x00000001u; // 801A1088
  c->r[8]=0u+0x00000003u; // 801A108C
  c->lr=0x801A1094u; f_803484B8(c); // 801A1090
  c->r[3]=0u+0x00000003u; // 801A1094
  c->lr=0x801A109Cu; f_803482AC(c); // 801A1098
  c->r[3]=0u+0x00000003u; // 801A109C
  c->r[4]=0u+0x00000002u; // 801A10A0
  c->r[5]=0u+0x00000006u; // 801A10A4
  c->r[6]=0u+0x00000004u; // 801A10A8
  c->r[7]=0u+0x0000000Au; // 801A10AC
  c->lr=0x801A10B4u; f_803483E0(c); // 801A10B0
  c->r[3]=0u+0x00000003u; // 801A10B4
  c->r[4]=0u+0x00000001u; // 801A10B8
  c->r[5]=0u+0x00000000u; // 801A10BC
  c->r[6]=0u+0x00000000u; // 801A10C0
  c->r[7]=0u+0x00000001u; // 801A10C4
  c->r[8]=0u+0x00000001u; // 801A10C8
  c->lr=0x801A10D0u; f_80348460(c); // 801A10CC
  c->r[3]=0u+0x00000003u; // 801A10D0
  c->r[4]=0u+0x00000001u; // 801A10D4
  c->r[5]=0u+0x00000003u; // 801A10D8
  c->r[6]=0u+0x00000002u; // 801A10DC
  c->r[7]=0u+0x00000005u; // 801A10E0
  c->lr=0x801A10E8u; f_80348420(c); // 801A10E4
  c->r[3]=0u+0x00000003u; // 801A10E8
  c->r[4]=0u+0x00000001u; // 801A10EC
  c->r[5]=0u+0x00000000u; // 801A10F0
  c->r[6]=0u+0x00000000u; // 801A10F4
  c->r[7]=0u+0x00000001u; // 801A10F8
  c->r[8]=0u+0x00000001u; // 801A10FC
  c->lr=0x801A1104u; f_803484B8(c); // 801A1100
  c->r[3]=0u+0x00000004u; // 801A1104
  c->lr=0x801A110Cu; f_803482AC(c); // 801A1108
  c->r[3]=0u+0x00000004u; // 801A110C
  c->r[4]=0u+0x0000000Fu; // 801A1110
  c->r[5]=0u+0x00000008u; // 801A1114
  c->r[6]=0u+0x0000000Au; // 801A1118
  c->r[7]=0u+0x0000000Fu; // 801A111C
  c->lr=0x801A1124u; f_803483E0(c); // 801A1120
  c->r[3]=0u+0x00000004u; // 801A1124
  c->r[4]=0u+0x00000000u; // 801A1128
  c->r[5]=0u+0x00000000u; // 801A112C
  c->r[6]=0u+0x00000000u; // 801A1130
  c->r[7]=0u+0x00000001u; // 801A1134
  c->r[8]=0u+0x00000000u; // 801A1138
  c->lr=0x801A1140u; f_80348460(c); // 801A113C
  c->r[3]=0u+0x00000004u; // 801A1140
  c->r[4]=0u+0x00000007u; // 801A1144
  c->r[5]=0u+0x00000007u; // 801A1148
  c->r[6]=0u+0x00000007u; // 801A114C
  c->r[7]=0u+0x00000001u; // 801A1150
  c->lr=0x801A1158u; f_80348420(c); // 801A1154
  c->r[3]=0u+0x00000004u; // 801A1158
  c->r[4]=0u+0x00000000u; // 801A115C
  c->r[5]=0u+0x00000000u; // 801A1160
  c->r[6]=0u+0x00000000u; // 801A1164
  c->r[7]=0u+0x00000001u; // 801A1168
  c->r[8]=0u+0x00000000u; // 801A116C
  c->lr=0x801A1174u; f_803484B8(c); // 801A1170
  c->r[3]=0u+0x00000001u; // 801A1174
  c->r[4]=0u+0x00000004u; // 801A1178
  c->r[5]=0u+0x00000005u; // 801A117C
  c->r[6]=0u+0x00000000u; // 801A1180
  c->lr=0x801A1188u; f_80348E7C(c); // 801A1184
  c->r[3]=0u+0x00000004u; // 801A1188
  c->r[4]=0u+0x00000000u; // 801A118C
  c->r[5]=0u+0x00000001u; // 801A1190
  c->r[6]=0u+0x00000004u; // 801A1194
  c->r[7]=0u+0x00000000u; // 801A1198
  c->lr=0x801A11A0u; f_80348788(c); // 801A119C
  c->r[3]=c->r[1]+0x0000001Cu; // 801A11A0
  c->r[4]=0u+0xFFFFFFFFu; // 801A11A4
  c->lr=0x801A11ACu; f_80047BD4(c); // 801A11A8
  c->r[0]=0u+0x00000058u; // 801A11AC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801A11B0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801A11B4
  c->r[0]=0u+0x00000048u; // 801A11B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801A11BC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801A11C0
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801A11C4
  c->r[30]=R32(c->r[1]+0x00000038u); // 801A11C8
  c->r[29]=R32(c->r[1]+0x00000034u); // 801A11CC
  c->r[28]=R32(c->r[1]+0x00000030u); // 801A11D0
  c->r[0]=R32(c->r[1]+0x00000064u); // 801A11D4
  c->lr=c->r[0]; // 801A11D8
  c->r[1]=c->r[1]+0x00000060u; // 801A11DC
  return; // 801A11E0
}

// fn_801A11E4
void f_801A11E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A11E4
  c->r[0]=c->lr; // 801A11E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A11EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A11F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A11F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A11F8
  c->r[29]=c->r[3]|c->r[3]; // 801A11FC
  c->lr=0x801A1204u; f_801A37FC(c); // 801A1200
  c->r[3]=0u+0x80470000u; // 801A1204
  c->r[0]=c->r[3]+0xFFFFF0E0u; // 801A1208
  W32(c->r[29]+0x00000254u,c->r[0]); // 801A120C
  c->r[3]=c->r[29]+0x00000260u; // 801A1210
  c->lr=0x801A1218u; f_800592DC(c); // 801A1214
  c->r[30]=c->r[29]+0x00000268u; // 801A1218
  c->r[31]=c->r[29]+0x00000288u; // 801A121C
L_801A1220:;
  c->r[3]=c->r[30]|c->r[30]; // 801A1220
  c->lr=0x801A1228u; f_800592DC(c); // 801A1224
  c->r[30]=c->r[30]+0x00000008u; // 801A1228
  cmpu(c,0,c->r[30],c->r[31]); // 801A122C
  if (crb(c,0)) { IRQCHK(c); goto L_801A1220; } // 801A1230
  c->r[3]=c->r[29]|c->r[29]; // 801A1234
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A1238
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A123C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A1240
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A1244
  c->lr=c->r[0]; // 801A1248
  c->r[1]=c->r[1]+0x00000020u; // 801A124C
  return; // 801A1250
}

// fn_801A1254
void f_801A1254(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1254
  c->r[0]=c->lr; // 801A1258
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A125C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1260
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A1264
  c->r[30]=c->r[3]|c->r[3]; // 801A1268
  c->r[31]=c->r[4]|c->r[4]; // 801A126C
  cmps(c,0,(int32_t)c->r[3],0); // 801A1270
  if (crb(c,2)) { goto L_801A1294; } // 801A1274
  c->r[4]=0u+0x00000000u; // 801A1278
  c->lr=0x801A1280u; f_801A38A8(c); // 801A127C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A1280
  cmps(c,0,(int32_t)c->r[0],0); // 801A1284
  if (!crb(c,1)) { goto L_801A1294; } // 801A1288
  c->r[3]=c->r[30]|c->r[30]; // 801A128C
  c->lr=0x801A1294u; f_80047B20(c); // 801A1290
L_801A1294:;
  c->r[3]=c->r[30]|c->r[30]; // 801A1294
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1298
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A129C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A12A0
  c->lr=c->r[0]; // 801A12A4
  c->r[1]=c->r[1]+0x00000010u; // 801A12A8
  return; // 801A12AC
}

// fn_801A12B0
void f_801A12B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A12B0
  c->r[0]=c->lr; // 801A12B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A12B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A12BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A12C0
  c->r[30]=c->r[3]|c->r[3]; // 801A12C4
  c->r[31]=c->r[4]|c->r[4]; // 801A12C8
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A12CC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801A12D0
  c->ctr=c->r[12]; // 801A12D4
  if (true) { c->lr=0x801A12DCu; dispatch(c,c->ctr); } // 801A12D8
  cmps(c,0,(int32_t)c->r[3],0); // 801A12DC
  if (!crb(c,2)) { goto L_801A13C0; } // 801A12E0
  c->r[3]=c->r[30]|c->r[30]; // 801A12E4
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A12E8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801A12EC
  c->ctr=c->r[12]; // 801A12F0
  if (true) { c->lr=0x801A12F8u; dispatch(c,c->ctr); } // 801A12F4
  c->r[3]=c->r[30]+0x00000004u; // 801A12F8
  c->r[4]=0u+0x00000003u; // 801A12FC
  c->r[5]=0u+0x00000001u; // 801A1300
  c->r[6]=0u+0x00000000u; // 801A1304
  c->r[7]=c->r[31]|c->r[31]; // 801A1308
  c->r[8]=0u+0x00000001u; // 801A130C
  c->lr=0x801A1314u; f_8004CFB0(c); // 801A1310
  c->r[3]=c->r[30]+0x00000004u; // 801A1314
  c->r[4]=0u+0x00000001u; // 801A1318
  c->lr=0x801A1320u; f_8004D750(c); // 801A131C
  c->r[3]=c->r[30]+0x00000004u; // 801A1320
  c->r[4]=0u+0x00000000u; // 801A1324
  c->lr=0x801A132Cu; f_8004D7F8(c); // 801A1328
  c->r[3]=c->r[30]+0x00000004u; // 801A132C
  c->r[4]=0u+0x00000002u; // 801A1330
  c->lr=0x801A1338u; f_8004D740(c); // 801A1334
  c->r[3]=0u+0x00000002u; // 801A1338
  c->lr=0x801A1340u; f_80173FB0(c); // 801A133C
  c->lr=0x801A1344u; f_8017409C(c); // 801A1340
  c->r[4]=c->r[3]|c->r[3]; // 801A1344
  c->r[3]=c->r[30]+0x000000B8u; // 801A1348
  c->lr=0x801A1350u; f_8004CDB4(c); // 801A134C
  c->r[3]=0u+0x00000001u; // 801A1350
  c->lr=0x801A1358u; f_80173FB0(c); // 801A1354
  c->lr=0x801A135Cu; f_8017409C(c); // 801A1358
  c->r[4]=c->r[3]|c->r[3]; // 801A135C
  c->r[3]=c->r[30]+0x000000B8u; // 801A1360
  c->lr=0x801A1368u; f_8004CDB4(c); // 801A1364
  c->r[3]=c->r[30]+0x00000004u; // 801A1368
  c->r[4]=0u+0x801A0000u; // 801A136C
  c->r[4]=c->r[4]+0x00000BF8u; // 801A1370
  c->lr=0x801A1378u; f_8004E18C(c); // 801A1374
  c->r[3]=c->r[30]+0x00000004u; // 801A1378
  c->r[4]=c->r[30]|c->r[30]; // 801A137C
  c->lr=0x801A1384u; f_8004E2BC(c); // 801A1380
  c->r[3]=c->r[30]+0x00000004u; // 801A1384
  c->r[4]=0u+0x00000001u; // 801A1388
  c->lr=0x801A1390u; f_8004D22C(c); // 801A138C
  c->r[3]=c->r[30]+0x00000004u; // 801A1390
  c->r[4]=0u+0x00000001u; // 801A1394
  c->lr=0x801A139Cu; f_8004D26C(c); // 801A1398
  c->r[3]=c->r[30]|c->r[30]; // 801A139C
  c->r[4]=0u+0x00000000u; // 801A13A0
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A13A4
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A13A8
  c->ctr=c->r[12]; // 801A13AC
  if (true) { c->lr=0x801A13B4u; dispatch(c,c->ctr); } // 801A13B0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801A13B4
  c->r[0]=c->r[0]|0x00000002u; // 801A13B8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801A13BC
L_801A13C0:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A13C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A13C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A13C8
  c->lr=c->r[0]; // 801A13CC
  c->r[1]=c->r[1]+0x00000010u; // 801A13D0
  return; // 801A13D4
}

// fn_801A13D8
void f_801A13D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A13D8
  c->r[0]=c->lr; // 801A13DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A13E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A13E4
  c->r[31]=c->r[3]|c->r[3]; // 801A13E8
  c->r[3]=c->r[1]+0x00000010u; // 801A13EC
  c->lr=0x801A13F4u; f_800592DC(c); // 801A13F0
  c->r[3]=c->r[1]+0x00000008u; // 801A13F4
  c->lr=0x801A13FCu; f_800592DC(c); // 801A13F8
  c->r[3]=c->r[1]+0x00000010u; // 801A13FC
  c->lr=0x801A1404u; f_8005D29C(c); // 801A1400
  c->r[3]=c->r[1]+0x00000008u; // 801A1404
  c->lr=0x801A140Cu; f_8005D29C(c); // 801A1408
  c->r[3]=c->r[1]+0x00000008u; // 801A140C
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A1410
  c->lr=0x801A1418u; f_801A17B8(c); // 801A1414
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A1418
  {uint32_t ea=c->r[31]+0x00000250u; WF32(ea,c->f[1]);} // 801A141C
  {uint32_t ea=c->r[2]+0xFFFF923Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801A1420
  {uint32_t ea=c->r[31]+0x000001E8u; WF32(ea,c->f[4]);} // 801A1424
  {uint32_t ea=c->r[2]+0xFFFF9240u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A1428
  {uint32_t ea=c->r[31]+0x000001ECu; WF32(ea,c->f[3]);} // 801A142C
  {uint32_t ea=c->r[31]+0x00000260u; WF32(ea,c->f[3]);} // 801A1430
  {uint32_t ea=c->r[2]+0xFFFF9244u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A1434
  {uint32_t ea=c->r[31]+0x00000264u; WF32(ea,c->f[2]);} // 801A1438
  {uint32_t ea=c->r[2]+0xFFFF9248u; c->f[7]=c->ps1[7]=RF32(ea);} // 801A143C
  {uint32_t ea=c->r[31]+0x000001F0u; WF32(ea,c->f[7]);} // 801A1440
  {uint32_t ea=c->r[2]+0xFFFF924Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 801A1444
  {uint32_t ea=c->r[31]+0x000001F4u; WF32(ea,c->f[6]);} // 801A1448
  {uint32_t ea=c->r[2]+0xFFFF922Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 801A144C
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[5]);} // 801A1450
  {uint32_t ea=c->r[31]+0x000001FCu; WF32(ea,c->f[5]);} // 801A1454
  c->r[0]=0u+0x000000FFu; // 801A1458
  W8(c->r[31]+0x000001E4u,c->r[0]); // 801A145C
  W8(c->r[31]+0x000001E5u,c->r[0]); // 801A1460
  W8(c->r[31]+0x000001E6u,c->r[0]); // 801A1464
  W8(c->r[31]+0x000001E7u,c->r[0]); // 801A1468
  {uint32_t ea=c->r[31]+0x00000230u; WF32(ea,c->f[1]);} // 801A146C
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1470
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 801A1474
  {uint32_t ea=c->r[31]+0x00000234u; WF32(ea,c->f[0]);} // 801A1478
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A147C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801A1480
  {uint32_t ea=c->r[31]+0x00000238u; WF32(ea,c->f[0]);} // 801A1484
  {uint32_t ea=c->r[1]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1488
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 801A148C
  {uint32_t ea=c->r[31]+0x0000023Cu; WF32(ea,c->f[0]);} // 801A1490
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1494
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 801A1498
  {uint32_t ea=c->r[31]+0x00000240u; WF32(ea,c->f[0]);} // 801A149C
  {uint32_t ea=c->r[31]+0x00000244u; WF32(ea,c->f[1]);} // 801A14A0
  {uint32_t ea=c->r[31]+0x00000248u; WF32(ea,c->f[1]);} // 801A14A4
  {uint32_t ea=c->r[31]+0x0000024Cu; WF32(ea,c->f[1]);} // 801A14A8
  {uint32_t ea=c->r[31]+0x00000268u; WF32(ea,c->f[1]);} // 801A14AC
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A14B0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801A14B4
  {uint32_t ea=c->r[31]+0x0000026Cu; WF32(ea,c->f[0]);} // 801A14B8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A14BC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 801A14C0
  {uint32_t ea=c->r[31]+0x00000270u; WF32(ea,c->f[0]);} // 801A14C4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A14C8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801A14CC
  {uint32_t ea=c->r[31]+0x00000274u; WF32(ea,c->f[0]);} // 801A14D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A14D4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[3]); // 801A14D8
  {uint32_t ea=c->r[31]+0x00000278u; WF32(ea,c->f[0]);} // 801A14DC
  {uint32_t ea=c->r[31]+0x0000027Cu; WF32(ea,c->f[1]);} // 801A14E0
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[1]);} // 801A14E4
  {uint32_t ea=c->r[31]+0x00000284u; WF32(ea,c->f[1]);} // 801A14E8
  c->f[0]=-c->f[7]; // 801A14EC
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[4]=c->ps1[4]=RF32(ea);} // 801A14F0
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801A14F4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[5]); // 801A14F8
  {uint32_t ea=c->r[31]+0x00000200u; WF32(ea,c->f[3]);} // 801A14FC
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[6]); // 801A1500
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[0]); // 801A1504
  {uint32_t ea=c->r[31]+0x00000204u; WF32(ea,c->f[2]);} // 801A1508
  {uint32_t ea=c->r[31]+0x00000208u; WF32(ea,c->f[1]);} // 801A150C
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[7]); // 801A1510
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 801A1514
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[0]);} // 801A1518
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[2]);} // 801A151C
  {uint32_t ea=c->r[31]+0x00000214u; WF32(ea,c->f[1]);} // 801A1520
  {uint32_t ea=c->r[31]+0x00000218u; WF32(ea,c->f[0]);} // 801A1524
  c->f[0]=-c->f[6]; // 801A1528
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 801A152C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[5]); // 801A1530
  {uint32_t ea=c->r[31]+0x0000021Cu; WF32(ea,c->f[0]);} // 801A1534
  {uint32_t ea=c->r[31]+0x00000220u; WF32(ea,c->f[1]);} // 801A1538
  {uint32_t ea=c->r[31]+0x00000224u; WF32(ea,c->f[3]);} // 801A153C
  {uint32_t ea=c->r[31]+0x00000228u; WF32(ea,c->f[0]);} // 801A1540
  {uint32_t ea=c->r[31]+0x0000022Cu; WF32(ea,c->f[1]);} // 801A1544
  c->r[3]=c->r[31]|c->r[31]; // 801A1548
  {uint32_t ea=c->r[2]+0xFFFF9250u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A154C
  c->lr=0x801A1554u; f_801A1700(c); // 801A1550
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A1554
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A1558
  c->lr=c->r[0]; // 801A155C
  c->r[1]=c->r[1]+0x00000020u; // 801A1560
  return; // 801A1564
}

// fn_801A1568
void f_801A1568(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1568
  c->r[0]=c->lr; // 801A156C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A1570
  c->r[11]=c->r[1]+0x00000020u; // 801A1574
  c->lr=0x801A157Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A1578
  c->r[27]=c->r[3]|c->r[3]; // 801A157C
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A1580
  c->r[12]=R32(c->r[12]+0x00000010u); // 801A1584
  c->ctr=c->r[12]; // 801A1588
  if (true) { c->lr=0x801A1590u; dispatch(c,c->ctr); } // 801A158C
  cmps(c,0,(int32_t)c->r[3],0); // 801A1590
  if (crb(c,2)) { goto L_801A1678; } // 801A1594
  c->r[3]=c->r[27]|c->r[27]; // 801A1598
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A159C
  c->r[12]=R32(c->r[12]+0x00000024u); // 801A15A0
  c->ctr=c->r[12]; // 801A15A4
  if (true) { c->lr=0x801A15ACu; dispatch(c,c->ctr); } // 801A15A8
  cmps(c,0,(int32_t)c->r[3],0); // 801A15AC
  if (crb(c,2)) { goto L_801A1678; } // 801A15B0
  c->r[28]=0u+0x00000000u; // 801A15B4
  c->r[31]=c->r[27]+0x00000200u; // 801A15B8
  c->r[30]=c->r[27]+0x00000230u; // 801A15BC
  c->r[29]=c->r[27]+0x00000268u; // 801A15C0
L_801A15C4:;
  c->r[3]=c->r[27]+0x00000004u; // 801A15C4
  c->r[4]=0u+0x00000000u; // 801A15C8
  c->r[5]=c->r[28]|c->r[28]; // 801A15CC
  c->r[6]=c->r[31]|c->r[31]; // 801A15D0
  c->lr=0x801A15D8u; f_8004D384(c); // 801A15D4
  c->r[3]=c->r[27]+0x00000004u; // 801A15D8
  c->r[4]=0u+0x00000000u; // 801A15DC
  c->r[5]=c->r[28]|c->r[28]; // 801A15E0
  c->r[6]=c->r[30]|c->r[30]; // 801A15E4
  c->r[7]=0u+0xFFFFFFFFu; // 801A15E8
  c->lr=0x801A15F0u; f_8004D650(c); // 801A15EC
  c->r[3]=c->r[27]+0x00000004u; // 801A15F0
  c->r[4]=0u+0x00000000u; // 801A15F4
  c->r[5]=c->r[28]|c->r[28]; // 801A15F8
  c->r[6]=c->r[29]|c->r[29]; // 801A15FC
  c->r[7]=0u+0x00000000u; // 801A1600
  c->lr=0x801A1608u; f_8004D650(c); // 801A1604
  c->r[3]=c->r[27]+0x00000004u; // 801A1608
  c->r[4]=0u+0x00000000u; // 801A160C
  c->r[5]=c->r[28]|c->r[28]; // 801A1610
  c->r[6]=c->r[27]+0x000001E4u; // 801A1614
  c->lr=0x801A161Cu; f_8004D508(c); // 801A1618
  c->r[31]=c->r[31]+0x0000000Cu; // 801A161C
  c->r[30]=c->r[30]+0x00000008u; // 801A1620
  c->r[29]=c->r[29]+0x00000008u; // 801A1624
  c->r[28]=c->r[28]+0x00000001u; // 801A1628
  cmps(c,0,(int32_t)c->r[28],4); // 801A162C
  if (crb(c,0)) { IRQCHK(c); goto L_801A15C4; } // 801A1630
  c->r[3]=c->r[27]+0x00000004u; // 801A1634
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A1638
  {uint32_t ea=c->r[27]+0x000001F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A163C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 801A1640
  {uint32_t ea=c->r[27]+0x000001F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1644
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801A1648
  {uint32_t ea=c->r[27]+0x00000250u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A164C
  c->lr=0x801A1654u; f_80070424(c); // 801A1650
  c->lr=0x801A1658u; f_8005D98C(c); // 801A1654
  {uint32_t ea=c->r[27]+0x000001F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1658
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801A165C
  c->r[3]=c->r[27]+0x00000004u; // 801A1660
  {uint32_t ea=c->r[27]+0x000001FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A1664
  {uint32_t ea=c->r[2]+0xFFFF922Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801A1668
  c->lr=0x801A1670u; f_80070434(c); // 801A166C
  c->r[3]=c->r[27]+0x00000004u; // 801A1670
  c->lr=0x801A1678u; f_8004E1AC(c); // 801A1674
L_801A1678:;
  c->r[11]=c->r[1]+0x00000020u; // 801A1678
  c->lr=0x801A1680u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A167C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A1680
  c->lr=c->r[0]; // 801A1684
  c->r[1]=c->r[1]+0x00000020u; // 801A1688
  return; // 801A168C
}

// fn_801A1690
void f_801A1690(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1690
  c->r[0]=c->lr; // 801A1694
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1698
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A169C
  c->r[31]=c->r[3]|c->r[3]; // 801A16A0
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A16A4
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A16A8
  c->lr=0x801A16B0u; f_800549D4(c); // 801A16AC
  {uint32_t ea=c->r[31]+0x00000258u; WF32(ea,c->f[1]);} // 801A16B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A16B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A16B8
  c->lr=c->r[0]; // 801A16BC
  c->r[1]=c->r[1]+0x00000010u; // 801A16C0
  return; // 801A16C4
}

// fn_801A16C8
void f_801A16C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A16C8
  c->r[0]=c->lr; // 801A16CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A16D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A16D4
  c->r[31]=c->r[3]|c->r[3]; // 801A16D8
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A16DC
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A16E0
  c->lr=0x801A16E8u; f_800549D4(c); // 801A16E4
  {uint32_t ea=c->r[31]+0x0000025Cu; WF32(ea,c->f[1]);} // 801A16E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A16EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A16F0
  c->lr=c->r[0]; // 801A16F4
  c->r[1]=c->r[1]+0x00000010u; // 801A16F8
  return; // 801A16FC
}

// fn_801A1700
void f_801A1700(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1700
  c->r[0]=c->lr; // 801A1704
  W32(c->r[1]+0x00000034u,c->r[0]); // 801A1708
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801A170C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801A1710
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801A1714
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801A1718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A171C
  c->r[31]=c->r[3]|c->r[3]; // 801A1720
  c->f[30]=c->f[1]; // 801A1724
  c->f[31]=c->f[2]; // 801A1728
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A172C
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A1730
  c->lr=0x801A1738u; f_800549D4(c); // 801A1734
  c->f[1]=c->f[31]; // 801A1738
  {uint32_t ea=c->r[2]+0xFFFF9230u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A173C
  {uint32_t ea=c->r[2]+0xFFFF9254u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A1740
  c->lr=0x801A1748u; f_800549D4(c); // 801A1744
  {uint32_t ea=c->r[2]+0xFFFF9238u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1748
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 801A174C
  c->r[3]=c->r[31]|c->r[31]; // 801A1750
  c->f[1]=c->ps1[1]=S(c->f[30]+c->f[31]); // 801A1754
  c->lr=0x801A175Cu; f_801A1690(c); // 801A1758
  c->r[3]=c->r[31]|c->r[31]; // 801A175C
  c->f[1]=c->ps1[1]=S(c->f[30]-c->f[31]); // 801A1760
  c->lr=0x801A1768u; f_801A16C8(c); // 801A1764
  c->r[0]=0u+0x00000028u; // 801A1768
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801A176C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801A1770
  c->r[0]=0u+0x00000018u; // 801A1774
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801A1778
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801A177C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1780
  c->r[0]=R32(c->r[1]+0x00000034u); // 801A1784
  c->lr=c->r[0]; // 801A1788
  c->r[1]=c->r[1]+0x00000030u; // 801A178C
  return; // 801A1790
}

// fn_801A1794
void f_801A1794(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000258u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A1794
  return; // 801A1798
}

// fn_801A179C
void f_801A179C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x0000025Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A179C
  return; // 801A17A0
}

// fn_801A17A4
void f_801A17A4(Ctx* __restrict c) {
  c->r[7]=0u+0x00000000u; // 801A17A4
  c->r[8]=0u+0x0000007Du; // 801A17A8
  f_80344D80(c); return; // 801A17AC
}

// fn_801A17B0
void f_801A17B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000001DCu); // 801A17B0
  return; // 801A17B4
}

// fn_801A17B8
void f_801A17B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A17B8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A17BC
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 801A17C0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A17C4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801A17C8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 801A17CC
  return; // 801A17D0
}

// fn_801A17D4
void f_801A17D4(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A17D4
  c->r[3]=rotl(c->r[0],0)&0x00000002u; // 801A17D8
  c->r[0]=0u-c->r[3]; // 801A17DC
  c->r[0]=c->r[0]|c->r[3]; // 801A17E0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801A17E4
  return; // 801A17E8
}

// fn_801A17EC
void f_801A17EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A17EC
  c->r[0]=c->lr; // 801A17F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A17F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A17F8
  c->r[31]=c->r[3]|c->r[3]; // 801A17FC
  c->lr=0x801A1804u; f_801A37FC(c); // 801A1800
  c->r[3]=0u+0x80470000u; // 801A1804
  c->r[0]=c->r[3]+0xFFFFF160u; // 801A1808
  W32(c->r[31]+0x00000254u,c->r[0]); // 801A180C
  c->r[3]=c->r[31]|c->r[31]; // 801A1810
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1814
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1818
  c->lr=c->r[0]; // 801A181C
  c->r[1]=c->r[1]+0x00000010u; // 801A1820
  return; // 801A1824
}

// fn_801A1828
void f_801A1828(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1828
  c->r[0]=c->lr; // 801A182C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1830
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1834
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A1838
  c->r[30]=c->r[3]|c->r[3]; // 801A183C
  c->r[31]=c->r[4]|c->r[4]; // 801A1840
  cmps(c,0,(int32_t)c->r[3],0); // 801A1844
  if (crb(c,2)) { goto L_801A1868; } // 801A1848
  c->r[4]=0u+0x00000000u; // 801A184C
  c->lr=0x801A1854u; f_801A38A8(c); // 801A1850
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A1854
  cmps(c,0,(int32_t)c->r[0],0); // 801A1858
  if (!crb(c,1)) { goto L_801A1868; } // 801A185C
  c->r[3]=c->r[30]|c->r[30]; // 801A1860
  c->lr=0x801A1868u; f_80047B20(c); // 801A1864
L_801A1868:;
  c->r[3]=c->r[30]|c->r[30]; // 801A1868
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A186C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A1870
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1874
  c->lr=c->r[0]; // 801A1878
  c->r[1]=c->r[1]+0x00000010u; // 801A187C
  return; // 801A1880
}

// fn_801A1884
void f_801A1884(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1884
  c->r[0]=c->lr; // 801A1888
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A188C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1890
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A1894
  c->r[30]=c->r[3]|c->r[3]; // 801A1898
  c->r[31]=c->r[4]|c->r[4]; // 801A189C
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A18A0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801A18A4
  c->ctr=c->r[12]; // 801A18A8
  if (true) { c->lr=0x801A18B0u; dispatch(c,c->ctr); } // 801A18AC
  cmps(c,0,(int32_t)c->r[3],0); // 801A18B0
  if (!crb(c,2)) { goto L_801A1948; } // 801A18B4
  c->r[3]=c->r[30]|c->r[30]; // 801A18B8
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A18BC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801A18C0
  c->ctr=c->r[12]; // 801A18C4
  if (true) { c->lr=0x801A18CCu; dispatch(c,c->ctr); } // 801A18C8
  c->r[3]=c->r[30]+0x00000004u; // 801A18CC
  c->r[4]=0u+0x00000003u; // 801A18D0
  c->r[5]=0u+0x00000001u; // 801A18D4
  c->r[6]=0u+0x00000000u; // 801A18D8
  c->r[7]=c->r[31]|c->r[31]; // 801A18DC
  c->r[8]=0u+0x00000000u; // 801A18E0
  c->lr=0x801A18E8u; f_8004CFB0(c); // 801A18E4
  c->r[3]=c->r[30]+0x00000004u; // 801A18E8
  c->r[4]=0u+0x00000001u; // 801A18EC
  c->lr=0x801A18F4u; f_8004D750(c); // 801A18F0
  c->r[3]=c->r[30]+0x00000004u; // 801A18F4
  c->r[4]=0u+0x00000000u; // 801A18F8
  c->lr=0x801A1900u; f_8004D7F8(c); // 801A18FC
  c->r[3]=c->r[30]+0x00000004u; // 801A1900
  c->r[4]=0u+0x00000002u; // 801A1904
  c->lr=0x801A190Cu; f_8004D740(c); // 801A1908
  c->r[3]=0u+0x00000000u; // 801A190C
  c->lr=0x801A1914u; f_80173FB0(c); // 801A1910
  c->lr=0x801A1918u; f_8017409C(c); // 801A1914
  c->r[4]=c->r[3]|c->r[3]; // 801A1918
  c->r[3]=c->r[30]+0x000000B8u; // 801A191C
  c->lr=0x801A1924u; f_8004CDB4(c); // 801A1920
  c->r[3]=c->r[30]|c->r[30]; // 801A1924
  c->r[4]=0u+0x00000000u; // 801A1928
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A192C
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A1930
  c->ctr=c->r[12]; // 801A1934
  if (true) { c->lr=0x801A193Cu; dispatch(c,c->ctr); } // 801A1938
  c->r[0]=R32(c->r[30]+0x00000000u); // 801A193C
  c->r[0]=c->r[0]|0x00000002u; // 801A1940
  W32(c->r[30]+0x00000000u,c->r[0]); // 801A1944
L_801A1948:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1948
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A194C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1950
  c->lr=c->r[0]; // 801A1954
  c->r[1]=c->r[1]+0x00000010u; // 801A1958
  return; // 801A195C
}

// fn_801A1960
void f_801A1960(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1960
  c->r[0]=c->lr; // 801A1964
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A1968
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A196C
  c->r[31]=c->r[3]|c->r[3]; // 801A1970
  c->r[3]=c->r[1]+0x00000008u; // 801A1974
  c->lr=0x801A197Cu; f_800592DC(c); // 801A1978
  c->r[3]=c->r[1]+0x00000008u; // 801A197C
  c->lr=0x801A1984u; f_8005D29C(c); // 801A1980
  {uint32_t ea=c->r[2]+0xFFFF9258u; c->f[7]=c->ps1[7]=RF32(ea);} // 801A1984
  {uint32_t ea=c->r[31]+0x00000250u; WF32(ea,c->f[7]);} // 801A1988
  {uint32_t ea=c->r[2]+0xFFFF925Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A198C
  {uint32_t ea=c->r[31]+0x000001E8u; WF32(ea,c->f[2]);} // 801A1990
  {uint32_t ea=c->r[2]+0xFFFF9260u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A1994
  {uint32_t ea=c->r[31]+0x000001ECu; WF32(ea,c->f[1]);} // 801A1998
  {uint32_t ea=c->r[2]+0xFFFF9264u; c->f[6]=c->ps1[6]=RF32(ea);} // 801A199C
  {uint32_t ea=c->r[31]+0x000001F0u; WF32(ea,c->f[6]);} // 801A19A0
  {uint32_t ea=c->r[2]+0xFFFF9268u; c->f[5]=c->ps1[5]=RF32(ea);} // 801A19A4
  {uint32_t ea=c->r[31]+0x000001F4u; WF32(ea,c->f[5]);} // 801A19A8
  {uint32_t ea=c->r[2]+0xFFFF926Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801A19AC
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[4]);} // 801A19B0
  {uint32_t ea=c->r[31]+0x000001FCu; WF32(ea,c->f[4]);} // 801A19B4
  c->r[0]=0u+0x000000FFu; // 801A19B8
  W8(c->r[31]+0x000001E4u,c->r[0]); // 801A19BC
  W8(c->r[31]+0x000001E5u,c->r[0]); // 801A19C0
  W8(c->r[31]+0x000001E6u,c->r[0]); // 801A19C4
  c->r[0]=0u+0x00000080u; // 801A19C8
  W8(c->r[31]+0x000001E7u,c->r[0]); // 801A19CC
  {uint32_t ea=c->r[31]+0x00000230u; WF32(ea,c->f[7]);} // 801A19D0
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A19D4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801A19D8
  {uint32_t ea=c->r[31]+0x00000234u; WF32(ea,c->f[0]);} // 801A19DC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A19E0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801A19E4
  {uint32_t ea=c->r[31]+0x00000238u; WF32(ea,c->f[0]);} // 801A19E8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A19EC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801A19F0
  {uint32_t ea=c->r[31]+0x0000023Cu; WF32(ea,c->f[0]);} // 801A19F4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A19F8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801A19FC
  {uint32_t ea=c->r[31]+0x00000240u; WF32(ea,c->f[0]);} // 801A1A00
  {uint32_t ea=c->r[31]+0x00000244u; WF32(ea,c->f[7]);} // 801A1A04
  {uint32_t ea=c->r[31]+0x00000248u; WF32(ea,c->f[7]);} // 801A1A08
  {uint32_t ea=c->r[31]+0x0000024Cu; WF32(ea,c->f[7]);} // 801A1A0C
  c->f[0]=-c->f[6]; // 801A1A10
  {uint32_t ea=c->r[2]+0xFFFF9270u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A1A14
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801A1A18
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 801A1A1C
  {uint32_t ea=c->r[31]+0x00000200u; WF32(ea,c->f[2]);} // 801A1A20
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[5]); // 801A1A24
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 801A1A28
  {uint32_t ea=c->r[31]+0x00000204u; WF32(ea,c->f[1]);} // 801A1A2C
  {uint32_t ea=c->r[31]+0x00000208u; WF32(ea,c->f[7]);} // 801A1A30
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[6]); // 801A1A34
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801A1A38
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[0]);} // 801A1A3C
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[1]);} // 801A1A40
  {uint32_t ea=c->r[31]+0x00000214u; WF32(ea,c->f[7]);} // 801A1A44
  {uint32_t ea=c->r[31]+0x00000218u; WF32(ea,c->f[0]);} // 801A1A48
  c->f[0]=-c->f[5]; // 801A1A4C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801A1A50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801A1A54
  {uint32_t ea=c->r[31]+0x0000021Cu; WF32(ea,c->f[0]);} // 801A1A58
  {uint32_t ea=c->r[31]+0x00000220u; WF32(ea,c->f[7]);} // 801A1A5C
  {uint32_t ea=c->r[31]+0x00000224u; WF32(ea,c->f[2]);} // 801A1A60
  {uint32_t ea=c->r[31]+0x00000228u; WF32(ea,c->f[0]);} // 801A1A64
  {uint32_t ea=c->r[31]+0x0000022Cu; WF32(ea,c->f[7]);} // 801A1A68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A1A6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A1A70
  c->lr=c->r[0]; // 801A1A74
  c->r[1]=c->r[1]+0x00000020u; // 801A1A78
  return; // 801A1A7C
}

// fn_801A1A80
void f_801A1A80(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1A80
  c->r[3]=0u+0x80470000u; // 801A1A84
  c->r[3]=c->r[3]+0xFFFFF438u; // 801A1A88
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A1A8C
  return; // 801A1A90
}

// fn_801A1A94
void f_801A1A94(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1A94
  c->r[0]=c->lr; // 801A1A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1AA0
  c->r[31]=c->r[3]|c->r[3]; // 801A1AA4
  c->lr=0x801A1AACu; f_801A1BD4(c); // 801A1AA8
  c->r[3]=0u+0x80470000u; // 801A1AAC
  c->r[0]=c->r[3]+0xFFFFF4DCu; // 801A1AB0
  W32(c->r[31]+0x00000030u,c->r[0]); // 801A1AB4
  c->r[0]=0u+0x00000000u; // 801A1AB8
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 801A1ABC
  c->r[3]=c->r[31]|c->r[31]; // 801A1AC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1AC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1AC8
  c->lr=c->r[0]; // 801A1ACC
  c->r[1]=c->r[1]+0x00000010u; // 801A1AD0
  return; // 801A1AD4
}

// fn_801A1AD8
void f_801A1AD8(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801A1AD8
  c->r[4]=0u+0x80470000u; // 801A1ADC
  c->r[4]=c->r[4]+0xFFFFF438u; // 801A1AE0
  goto L_801A1AF0; // 801A1AE4
L_801A1AE8:;
  c->r[4]=c->r[4]+0x00000004u; // 801A1AE8
  c->r[3]=c->r[3]+0x00000001u; // 801A1AEC
L_801A1AF0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801A1AF0
  cmps(c,0,(int32_t)c->r[0],0); // 801A1AF4
  if (!crb(c,2)) { IRQCHK(c); goto L_801A1AE8; } // 801A1AF8
  return; // 801A1AFC
}

// fn_801A1B00
void f_801A1B00(Ctx* __restrict c) {
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 801A1B00
  f_800FECA4(c); return; // 801A1B04
}

// fn_801A1B08
void f_801A1B08(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801A1B08
  return; // 801A1B0C
}

// fn_801A1B10
void f_801A1B10(Ctx* __restrict c) {
  f_801A1C1C(c); return; // 801A1B10
}

// fn_801A1B14
void f_801A1B14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1B14
  c->r[0]=c->lr; // 801A1B18
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1B1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1B20
  c->r[31]=c->r[3]|c->r[3]; // 801A1B24
  c->lr=0x801A1B2Cu; f_801A1C1C(c); // 801A1B28
  c->r[4]=c->r[3]|c->r[3]; // 801A1B2C
  c->r[3]=c->r[31]|c->r[31]; // 801A1B30
  c->r[4]=R32(c->r[4]+0x00000004u); // 801A1B34
  c->lr=0x801A1B3Cu; f_801A1C38(c); // 801A1B38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1B3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1B40
  c->lr=c->r[0]; // 801A1B44
  c->r[1]=c->r[1]+0x00000010u; // 801A1B48
  return; // 801A1B4C
}

// fn_801A1B50
void f_801A1B50(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1B50
  c->r[0]=c->lr; // 801A1B54
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1B58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1B5C
  c->r[31]=c->r[3]|c->r[3]; // 801A1B60
  c->lr=0x801A1B68u; f_801A1C1C(c); // 801A1B64
  c->r[4]=c->r[3]|c->r[3]; // 801A1B68
  c->r[3]=c->r[31]|c->r[31]; // 801A1B6C
  c->r[4]=R32(c->r[4]+0x00000034u); // 801A1B70
  c->lr=0x801A1B78u; f_801A1C38(c); // 801A1B74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1B78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1B7C
  c->lr=c->r[0]; // 801A1B80
  c->r[1]=c->r[1]+0x00000010u; // 801A1B84
  return; // 801A1B88
}

// fn_801A1B8C
void f_801A1B8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1B8C
  c->r[0]=c->lr; // 801A1B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1B94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1B98
  c->r[31]=c->r[3]|c->r[3]; // 801A1B9C
  c->lr=0x801A1BA4u; f_801A1C1C(c); // 801A1BA0
  c->r[4]=c->r[3]|c->r[3]; // 801A1BA4
  c->r[3]=c->r[31]|c->r[31]; // 801A1BA8
  c->r[4]=R32(c->r[4]+0x00000018u); // 801A1BAC
  c->lr=0x801A1BB4u; f_801A1C38(c); // 801A1BB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1BB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1BB8
  c->lr=c->r[0]; // 801A1BBC
  c->r[1]=c->r[1]+0x00000010u; // 801A1BC0
  return; // 801A1BC4
}

// fn_801A1BC8
void f_801A1BC8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1BC8
  c->r[3]=R32(c->r[3]+0x00000008u); // 801A1BCC
  return; // 801A1BD0
}

// fn_801A1BD4
void f_801A1BD4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1BD4
  c->r[0]=c->lr; // 801A1BD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1BDC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1BE0
  c->r[31]=c->r[3]|c->r[3]; // 801A1BE4
  c->lr=0x801A1BECu; f_80105360(c); // 801A1BE8
  c->r[3]=0u+0x80460000u; // 801A1BEC
  c->r[0]=c->r[3]+0x00003634u; // 801A1BF0
  W32(c->r[31]+0x00000030u,c->r[0]); // 801A1BF4
  c->r[0]=0u+0x00000000u; // 801A1BF8
  W32(c->r[31]+0x00000034u,c->r[0]); // 801A1BFC
  W32(c->r[31]+0x00000038u,c->r[0]); // 801A1C00
  c->r[3]=c->r[31]|c->r[31]; // 801A1C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1C08
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1C0C
  c->lr=c->r[0]; // 801A1C10
  c->r[1]=c->r[1]+0x00000010u; // 801A1C14
  return; // 801A1C18
}

// fn_801A1C1C
void f_801A1C1C(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A1C1C
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1C20
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A1C24
  c->r[0]=c->r[4]-c->r[0]; // 801A1C28
  c->r[0]=rotl(c->r[0],7)&0xFFFFFF80u; // 801A1C2C
  c->r[3]=c->r[5]+c->r[0]; // 801A1C30
  return; // 801A1C34
}

// fn_801A1C38
void f_801A1C38(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1C38
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801A1C3C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1C40
  c->r[3]=c->r[3]+c->r[0]; // 801A1C44
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801A1C48
  return; // 801A1C4C
}

// fn_801A1C50
void f_801A1C50(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1C50
  c->r[3]=c->r[13]+0xFFFF99B8u; // 801A1C54
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A1C58
  return; // 801A1C5C
}

// fn_801A1C60
void f_801A1C60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1C60
  c->r[0]=c->lr; // 801A1C64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A1C68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A1C6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A1C70
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A1C74
  c->r[29]=c->r[3]|c->r[3]; // 801A1C78
  c->r[30]=c->r[5]|c->r[5]; // 801A1C7C
  c->lr=0x801A1C84u; f_801A1D04(c); // 801A1C80
  c->r[31]=c->r[3]|c->r[3]; // 801A1C84
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A1C88
  W32(c->r[30]+0x00000000u,c->r[0]); // 801A1C8C
  c->r[3]=c->r[29]|c->r[29]; // 801A1C90
  c->r[4]=R32(c->r[31]+0x00000004u); // 801A1C94
  c->lr=0x801A1C9Cu; f_801A1D20(c); // 801A1C98
  W32(c->r[30]+0x00000004u,c->r[3]); // 801A1C9C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801A1CA0
  W32(c->r[30]+0x00000008u,c->r[0]); // 801A1CA4
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801A1CA8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A1CAC
  c->r[0]=R32(c->r[31]+0x00000010u); // 801A1CB0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801A1CB4
  c->r[0]=R32(c->r[31]+0x00000014u); // 801A1CB8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801A1CBC
  c->r[0]=R32(c->r[31]+0x00000018u); // 801A1CC0
  W32(c->r[30]+0x00000018u,c->r[0]); // 801A1CC4
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801A1CC8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801A1CCC
  c->r[0]=R32(c->r[31]+0x00000020u); // 801A1CD0
  W32(c->r[30]+0x00000020u,c->r[0]); // 801A1CD4
  c->r[0]=R32(c->r[31]+0x00000024u); // 801A1CD8
  W32(c->r[30]+0x00000024u,c->r[0]); // 801A1CDC
  c->r[0]=R32(c->r[31]+0x00000028u); // 801A1CE0
  W32(c->r[30]+0x00000028u,c->r[0]); // 801A1CE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A1CE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A1CEC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A1CF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A1CF4
  c->lr=c->r[0]; // 801A1CF8
  c->r[1]=c->r[1]+0x00000020u; // 801A1CFC
  return; // 801A1D00
}

// fn_801A1D04
void f_801A1D04(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A1D04
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1D08
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A1D0C
  c->r[0]=c->r[4]-c->r[0]; // 801A1D10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)44); // 801A1D14
  c->r[3]=c->r[5]+c->r[0]; // 801A1D18
  return; // 801A1D1C
}

// fn_801A1D20
void f_801A1D20(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1D20
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801A1D24
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1D28
  c->r[3]=c->r[3]+c->r[0]; // 801A1D2C
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801A1D30
  return; // 801A1D34
}

// fn_801A1D38
void f_801A1D38(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1D38
  c->r[3]=c->r[13]+0xFFFF99C8u; // 801A1D3C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A1D40
  return; // 801A1D44
}

// fn_801A1D48
void f_801A1D48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1D48
  c->r[0]=c->lr; // 801A1D4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A1D50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A1D54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A1D58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A1D5C
  c->r[29]=c->r[3]|c->r[3]; // 801A1D60
  c->r[30]=c->r[5]|c->r[5]; // 801A1D64
  c->lr=0x801A1D6Cu; f_801A1EC0(c); // 801A1D68
  c->r[31]=c->r[3]|c->r[3]; // 801A1D6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A1D70
  W32(c->r[30]+0x00000000u,c->r[0]); // 801A1D74
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801A1D78
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801A1D7C
  c->r[0]=R32(c->r[3]+0x00000010u); // 801A1D80
  W32(c->r[30]+0x00000010u,c->r[0]); // 801A1D84
  c->r[0]=R32(c->r[3]+0x00000014u); // 801A1D88
  W32(c->r[30]+0x00000014u,c->r[0]); // 801A1D8C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A1D90
  W32(c->r[30]+0x00000018u,c->r[0]); // 801A1D94
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801A1D98
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801A1D9C
  c->r[0]=R32(c->r[3]+0x00000020u); // 801A1DA0
  W32(c->r[30]+0x00000020u,c->r[0]); // 801A1DA4
  c->r[0]=R32(c->r[3]+0x00000024u); // 801A1DA8
  W32(c->r[30]+0x00000024u,c->r[0]); // 801A1DAC
  c->r[0]=R32(c->r[3]+0x00000028u); // 801A1DB0
  W32(c->r[30]+0x00000028u,c->r[0]); // 801A1DB4
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 801A1DB8
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 801A1DBC
  c->r[0]=R32(c->r[3]+0x00000030u); // 801A1DC0
  W32(c->r[30]+0x00000030u,c->r[0]); // 801A1DC4
  c->r[0]=R32(c->r[3]+0x00000034u); // 801A1DC8
  W32(c->r[30]+0x00000034u,c->r[0]); // 801A1DCC
  c->r[0]=R32(c->r[3]+0x00000038u); // 801A1DD0
  W32(c->r[30]+0x00000038u,c->r[0]); // 801A1DD4
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 801A1DD8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 801A1DDC
  c->r[0]=R32(c->r[3]+0x00000040u); // 801A1DE0
  W32(c->r[30]+0x00000040u,c->r[0]); // 801A1DE4
  c->r[0]=R32(c->r[3]+0x00000044u); // 801A1DE8
  W32(c->r[30]+0x00000044u,c->r[0]); // 801A1DEC
  c->r[0]=R32(c->r[3]+0x00000048u); // 801A1DF0
  W32(c->r[30]+0x00000048u,c->r[0]); // 801A1DF4
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1DF8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 801A1DFC
  {uint32_t ea=c->r[3]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1E00
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 801A1E04
  {uint32_t ea=c->r[3]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1E08
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[0]);} // 801A1E0C
  {uint32_t ea=c->r[3]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1E10
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 801A1E14
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1E18
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 801A1E1C
  {uint32_t ea=c->r[3]+0x00000060u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1E20
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 801A1E24
  c->r[0]=R32(c->r[3]+0x00000064u); // 801A1E28
  W32(c->r[30]+0x00000064u,c->r[0]); // 801A1E2C
  c->r[3]=c->r[29]|c->r[29]; // 801A1E30
  c->r[4]=R32(c->r[31]+0x00000004u); // 801A1E34
  c->lr=0x801A1E3Cu; f_801A1EDC(c); // 801A1E38
  W32(c->r[30]+0x00000004u,c->r[3]); // 801A1E3C
  c->r[3]=c->r[29]|c->r[29]; // 801A1E40
  c->r[4]=R32(c->r[31]+0x00000008u); // 801A1E44
  c->lr=0x801A1E4Cu; f_801A1EDC(c); // 801A1E48
  W32(c->r[30]+0x00000008u,c->r[3]); // 801A1E4C
  c->r[3]=c->r[29]|c->r[29]; // 801A1E50
  c->r[4]=R32(c->r[31]+0x00000068u); // 801A1E54
  c->lr=0x801A1E5Cu; f_801A1EDC(c); // 801A1E58
  W32(c->r[30]+0x00000068u,c->r[3]); // 801A1E5C
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A1E60
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 801A1E64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A1E68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A1E6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A1E70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A1E74
  c->lr=c->r[0]; // 801A1E78
  c->r[1]=c->r[1]+0x00000020u; // 801A1E7C
  return; // 801A1E80
}

// fn_801A1E84
void f_801A1E84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A1E84
  c->r[0]=c->lr; // 801A1E88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A1E8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A1E90
  c->r[31]=c->r[3]|c->r[3]; // 801A1E94
  c->lr=0x801A1E9Cu; f_801A1EC0(c); // 801A1E98
  c->r[4]=c->r[3]|c->r[3]; // 801A1E9C
  c->r[3]=c->r[31]|c->r[31]; // 801A1EA0
  c->r[4]=R32(c->r[4]+0x00000068u); // 801A1EA4
  c->lr=0x801A1EACu; f_801A1EDC(c); // 801A1EA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A1EAC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A1EB0
  c->lr=c->r[0]; // 801A1EB4
  c->r[1]=c->r[1]+0x00000010u; // 801A1EB8
  return; // 801A1EBC
}

// fn_801A1EC0
void f_801A1EC0(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A1EC0
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1EC4
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A1EC8
  c->r[0]=c->r[4]-c->r[0]; // 801A1ECC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)112); // 801A1ED0
  c->r[3]=c->r[5]+c->r[0]; // 801A1ED4
  return; // 801A1ED8
}

// fn_801A1EDC
void f_801A1EDC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1EDC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801A1EE0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1EE4
  c->r[3]=c->r[3]+c->r[0]; // 801A1EE8
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801A1EEC
  return; // 801A1EF0
}

// fn_801A1EF4
void f_801A1EF4(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1EF4
  c->r[3]=0u+0x80470000u; // 801A1EF8
  c->r[3]=c->r[3]+0xFFFFF978u; // 801A1EFC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A1F00
  return; // 801A1F04
}

// fn_801A1F08
void f_801A1F08(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801A1F08
  c->r[4]=0u+0x80470000u; // 801A1F0C
  c->r[4]=c->r[4]+0xFFFFF978u; // 801A1F10
  goto L_801A1F20; // 801A1F14
L_801A1F18:;
  c->r[4]=c->r[4]+0x00000004u; // 801A1F18
  c->r[3]=c->r[3]+0x00000001u; // 801A1F1C
L_801A1F20:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801A1F20
  cmps(c,0,(int32_t)c->r[0],0); // 801A1F24
  if (!crb(c,2)) { IRQCHK(c); goto L_801A1F18; } // 801A1F28
  return; // 801A1F2C
}

// fn_801A1F30
void f_801A1F30(Ctx* __restrict c) {
  f_800FE8EC(c); return; // 801A1F30
}

// fn_801A1F34
void f_801A1F34(Ctx* __restrict c) {
  f_801A1F48(c); return; // 801A1F34
}

// fn_801A1F38
void f_801A1F38(Ctx* __restrict c) {
  f_801A1F64(c); return; // 801A1F38
}

// fn_801A1F3C
void f_801A1F3C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1F3C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801A1F40
  return; // 801A1F44
}

// fn_801A1F48
void f_801A1F48(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A1F48
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1F4C
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A1F50
  c->r[0]=c->r[4]-c->r[0]; // 801A1F54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)608); // 801A1F58
  c->r[3]=c->r[5]+c->r[0]; // 801A1F5C
  return; // 801A1F60
}

// fn_801A1F64
void f_801A1F64(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1F64
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801A1F68
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1F6C
  c->r[3]=c->r[3]+c->r[0]; // 801A1F70
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801A1F74
  return; // 801A1F78
}

// fn_801A1F7C
void f_801A1F7C(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1F7C
  c->r[3]=0u+0x80470000u; // 801A1F80
  c->r[3]=c->r[3]+0xFFFFFD90u; // 801A1F84
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A1F88
  return; // 801A1F8C
}

// fn_801A1F90
void f_801A1F90(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801A1F90
  c->r[4]=0u+0x80470000u; // 801A1F94
  c->r[4]=c->r[4]+0xFFFFFD90u; // 801A1F98
  goto L_801A1FA8; // 801A1F9C
L_801A1FA0:;
  c->r[4]=c->r[4]+0x00000004u; // 801A1FA0
  c->r[3]=c->r[3]+0x00000001u; // 801A1FA4
L_801A1FA8:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801A1FA8
  cmps(c,0,(int32_t)c->r[0],0); // 801A1FAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801A1FA0; } // 801A1FB0
  return; // 801A1FB4
}

// fn_801A1FB8
void f_801A1FB8(Ctx* __restrict c) {
  f_800FE710(c); return; // 801A1FB8
}

// fn_801A1FBC
void f_801A1FBC(Ctx* __restrict c) {
  f_801A1FCC(c); return; // 801A1FBC
}

// fn_801A1FC0
void f_801A1FC0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1FC0
  c->r[3]=R32(c->r[3]+0x00000008u); // 801A1FC4
  return; // 801A1FC8
}

// fn_801A1FCC
void f_801A1FCC(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A1FCC
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A1FD0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A1FD4
  c->r[0]=c->r[4]-c->r[0]; // 801A1FD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)604); // 801A1FDC
  c->r[3]=c->r[5]+c->r[0]; // 801A1FE0
  return; // 801A1FE4
}

// fn_801A1FE8
void f_801A1FE8(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A1FE8
  c->r[3]=0u+0x80470000u; // 801A1FEC
  c->r[3]=c->r[3]+0x000001A0u; // 801A1FF0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801A1FF4
  return; // 801A1FF8
}

// fn_801A1FFC
void f_801A1FFC(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 801A1FFC
  c->r[4]=0u+0x80470000u; // 801A2000
  c->r[4]=c->r[4]+0x000001A0u; // 801A2004
  goto L_801A2014; // 801A2008
L_801A200C:;
  c->r[4]=c->r[4]+0x00000004u; // 801A200C
  c->r[3]=c->r[3]+0x00000001u; // 801A2010
L_801A2014:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801A2014
  cmps(c,0,(int32_t)c->r[0],0); // 801A2018
  if (!crb(c,2)) { IRQCHK(c); goto L_801A200C; } // 801A201C
  return; // 801A2020
}

// fn_801A2024
void f_801A2024(Ctx* __restrict c) {
  f_800FE534(c); return; // 801A2024
}

// fn_801A2028
void f_801A2028(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A2028
  c->r[3]=R32(c->r[3]+0x00000008u); // 801A202C
  return; // 801A2030
}

// fn_801A2034
void f_801A2034(Ctx* __restrict c) {
  f_801A2074(c); return; // 801A2034
}

// fn_801A2038
void f_801A2038(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2038
  c->r[0]=c->lr; // 801A203C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2040
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2044
  c->r[31]=c->r[3]|c->r[3]; // 801A2048
  c->lr=0x801A2050u; f_801A2074(c); // 801A204C
  c->r[4]=c->r[3]|c->r[3]; // 801A2050
  c->r[3]=c->r[31]|c->r[31]; // 801A2054
  c->r[4]=R32(c->r[4]+0x00000004u); // 801A2058
  c->lr=0x801A2060u; f_801A2090(c); // 801A205C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2060
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2064
  c->lr=c->r[0]; // 801A2068
  c->r[1]=c->r[1]+0x00000010u; // 801A206C
  return; // 801A2070
}

// fn_801A2074
void f_801A2074(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A2074
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A2078
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A207C
  c->r[0]=c->r[4]-c->r[0]; // 801A2080
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)608); // 801A2084
  c->r[3]=c->r[5]+c->r[0]; // 801A2088
  return; // 801A208C
}

// fn_801A2090
void f_801A2090(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A2090
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801A2094
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801A2098
  c->r[3]=c->r[3]+c->r[0]; // 801A209C
  c->r[3]=R32(c->r[3]+0xFFFFFFFCu); // 801A20A0
  return; // 801A20A4
}

// fn_801A20A8
void f_801A20A8(Ctx* __restrict c) {
  c->r[3]=0u+0x80430000u; // 801A20A8
  c->r[3]=c->r[3]+0x00000880u; // 801A20AC
  return; // 801A20B0
}

// fn_801A20B4
void f_801A20B4(Ctx* __restrict c) {
  goto L_801A20B8; // 801A20B4
L_801A20B8:;
  c->r[5]=R32(c->r[3]+0x00000038u); // 801A20B8
  c->r[3]=R32(c->r[3]+0x00000034u); // 801A20BC
  c->r[0]=R32(c->r[3]+0x00000018u); // 801A20C0
  c->r[0]=c->r[4]-c->r[0]; // 801A20C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 801A20C8
  c->r[3]=c->r[5]+c->r[0]; // 801A20CC
  return; // 801A20D0
}

// fn_801A20D4
void f_801A20D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A20D4
  c->r[0]=c->lr; // 801A20D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A20DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A20E0
  c->r[31]=c->r[3]|c->r[3]; // 801A20E4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A20E8
  c->r[4]=0u+0x00000005u; // 801A20EC
  c->lr=0x801A20F4u; f_8013BE58(c); // 801A20F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A20F4
  c->lr=0x801A20FCu; f_8013C1EC(c); // 801A20F8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A20FC
  c->lr=0x801A2104u; f_8013BD5C(c); // 801A2100
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2104
  c->lr=0x801A210Cu; f_80135E14(c); // 801A2108
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A210C
  c->lr=0x801A2114u; f_801345AC(c); // 801A2110
  c->lr=0x801A2118u; f_80237F34(c); // 801A2114
  c->r[3]=c->r[31]|c->r[31]; // 801A2118
  c->r[4]=0u+0x0000006Bu; // 801A211C
  c->lr=0x801A2124u; f_8013114C(c); // 801A2120
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2124
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2128
  c->lr=c->r[0]; // 801A212C
  c->r[1]=c->r[1]+0x00000010u; // 801A2130
  return; // 801A2134
}

// fn_801A2138
void f_801A2138(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2138
  c->r[0]=c->lr; // 801A213C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2140
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2144
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A2148
  c->r[30]=c->r[3]|c->r[3]; // 801A214C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2150
  c->lr=0x801A2158u; f_8013BE18(c); // 801A2154
  cmps(c,0,(int32_t)c->r[3],0); // 801A2158
  if (crb(c,2)) { goto L_801A2188; } // 801A215C
  c->lr=0x801A2164u; f_80237F98(c); // 801A2160
  c->r[31]=c->r[3]|c->r[3]; // 801A2164
  c->lr=0x801A216Cu; f_80237FC4(c); // 801A2168
  c->r[5]=c->r[3]|c->r[3]; // 801A216C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801A2170
  c->r[4]=c->r[31]|c->r[31]; // 801A2174
  c->lr=0x801A217Cu; f_8013BDE4(c); // 801A2178
  c->r[3]=c->r[30]|c->r[30]; // 801A217C
  c->r[4]=0u+0x0000006Cu; // 801A2180
  c->lr=0x801A2188u; f_8013114C(c); // 801A2184
L_801A2188:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2188
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A218C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2190
  c->lr=c->r[0]; // 801A2194
  c->r[1]=c->r[1]+0x00000010u; // 801A2198
  return; // 801A219C
}

// fn_801A21A0
void f_801A21A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A21A0
  c->r[0]=c->lr; // 801A21A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A21A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A21AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A21B0
  c->r[30]=c->r[3]|c->r[3]; // 801A21B4
  c->lr=0x801A21BCu; f_80237F98(c); // 801A21B8
  c->r[31]=c->r[3]|c->r[3]; // 801A21BC
  c->lr=0x801A21C4u; f_80237FC4(c); // 801A21C0
  c->r[5]=c->r[3]|c->r[3]; // 801A21C4
  c->r[3]=R32(c->r[30]+0x000000F4u); // 801A21C8
  c->r[4]=c->r[31]|c->r[31]; // 801A21CC
  c->lr=0x801A21D4u; f_8013BDE4(c); // 801A21D0
  c->lr=0x801A21D8u; f_80237F6C(c); // 801A21D4
  cmps(c,0,(int32_t)c->r[3],0); // 801A21D8
  if (crb(c,2)) { goto L_801A21EC; } // 801A21DC
  c->r[3]=c->r[30]|c->r[30]; // 801A21E0
  c->r[4]=0u+0x0000006Du; // 801A21E4
  c->lr=0x801A21ECu; f_8013114C(c); // 801A21E8
L_801A21EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A21EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A21F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A21F4
  c->lr=c->r[0]; // 801A21F8
  c->r[1]=c->r[1]+0x00000010u; // 801A21FC
  return; // 801A2200
}

// fn_801A2204
void f_801A2204(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2204
  c->r[0]=c->lr; // 801A2208
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A220C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2210
  c->r[31]=c->r[3]|c->r[3]; // 801A2214
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2218
  c->lr=0x801A2220u; f_8013BDA0(c); // 801A221C
  c->lr=0x801A2224u; f_80238000(c); // 801A2220
  cmps(c,0,(int32_t)c->r[3],0); // 801A2224
  if (!crb(c,2)) { goto L_801A2314; } // 801A2228
  c->lr=0x801A2230u; f_8023802C(c); // 801A222C
  cmps(c,0,(int32_t)c->r[3],0); // 801A2230
  if (crb(c,2)) { goto L_801A22F0; } // 801A2234
  c->lr=0x801A223Cu; f_80111CF0(c); // 801A2238
  cmps(c,0,(int32_t)c->r[3],0); // 801A223C
  if (crb(c,2)) { goto L_801A224C; } // 801A2240
  c->r[3]=0u+0x00000001u; // 801A2244
  goto L_801A2258; // 801A2248
L_801A224C:;
  c->lr=0x801A2250u; f_8007B524(c); // 801A224C
  c->r[4]=0u+0x00000000u; // 801A2250
  c->lr=0x801A2258u; f_800A7010(c); // 801A2254
L_801A2258:;
  cmps(c,0,(int32_t)c->r[3],1); // 801A2258
  if (crb(c,2)) { goto L_801A227C; } // 801A225C
  if (!crb(c,0)) { goto L_801A2270; } // 801A2260
  cmps(c,0,(int32_t)c->r[3],0); // 801A2264
  if (!crb(c,0)) { goto L_801A2298; } // 801A2268
  goto L_801A22CC; // 801A226C
L_801A2270:;
  cmps(c,0,(int32_t)c->r[3],3); // 801A2270
  if (!crb(c,0)) { goto L_801A22CC; } // 801A2274
  goto L_801A22B4; // 801A2278
L_801A227C:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A227C
  c->lr=0x801A2284u; f_80137010(c); // 801A2280
  cmps(c,0,(int32_t)c->r[3],0); // 801A2284
  c->r[3]=0u+0x0000019Cu; // 801A2288
  if (crb(c,2)) { goto L_801A22CC; } // 801A228C
  c->r[3]=0u+0x000001A0u; // 801A2290
  goto L_801A22CC; // 801A2294
L_801A2298:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2298
  c->lr=0x801A22A0u; f_80137010(c); // 801A229C
  cmps(c,0,(int32_t)c->r[3],0); // 801A22A0
  c->r[3]=0u+0x0000019Du; // 801A22A4
  if (crb(c,2)) { goto L_801A22CC; } // 801A22A8
  c->r[3]=0u+0x000001A1u; // 801A22AC
  goto L_801A22CC; // 801A22B0
L_801A22B4:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A22B4
  c->lr=0x801A22BCu; f_80137010(c); // 801A22B8
  c->r[0]=0u-c->r[3]; // 801A22BC
  c->r[0]=c->r[0]|c->r[3]; // 801A22C0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801A22C4
  c->r[3]=c->r[3]+0x000001A4u; // 801A22C8
L_801A22CC:;
  c->lr=0x801A22D0u; f_8024853C(c); // 801A22CC
  c->r[3]=0u+0x00000064u; // 801A22D0
  c->lr=0x801A22D8u; f_80248578(c); // 801A22D4
  c->r[3]=0u+0x00000065u; // 801A22D8
  c->lr=0x801A22E0u; f_802485B4(c); // 801A22DC
  c->r[3]=0u+0x00000000u; // 801A22E0
  c->lr=0x801A22E8u; f_802485F0(c); // 801A22E4
  c->lr=0x801A22ECu; f_802484AC(c); // 801A22E8
  goto L_801A2314; // 801A22EC
L_801A22F0:;
  c->r[3]=0u+0x000001A2u; // 801A22F0
  c->lr=0x801A22F8u; f_8024853C(c); // 801A22F4
  c->r[3]=0u+0x00000064u; // 801A22F8
  c->lr=0x801A2300u; f_80248578(c); // 801A22FC
  c->r[3]=0u+0x00000065u; // 801A2300
  c->lr=0x801A2308u; f_802485B4(c); // 801A2304
  c->r[3]=0u+0x00000000u; // 801A2308
  c->lr=0x801A2310u; f_802485F0(c); // 801A230C
  c->lr=0x801A2314u; f_802484AC(c); // 801A2310
L_801A2314:;
  c->r[3]=c->r[31]|c->r[31]; // 801A2314
  c->r[4]=0u+0x0000006Eu; // 801A2318
  c->lr=0x801A2320u; f_8013114C(c); // 801A231C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2320
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2324
  c->lr=c->r[0]; // 801A2328
  c->r[1]=c->r[1]+0x00000010u; // 801A232C
  return; // 801A2330
}

// fn_801A2334
void f_801A2334(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2334
  c->r[0]=c->lr; // 801A2338
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A233C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2340
  c->r[31]=c->r[3]|c->r[3]; // 801A2344
  c->lr=0x801A234Cu; f_80238000(c); // 801A2348
  cmps(c,0,(int32_t)c->r[3],0); // 801A234C
  if (!crb(c,2)) { goto L_801A2360; } // 801A2350
  c->lr=0x801A2358u; f_802484E4(c); // 801A2354
  cmps(c,0,(int32_t)c->r[3],0); // 801A2358
  if (crb(c,2)) { goto L_801A236C; } // 801A235C
L_801A2360:;
  c->r[3]=c->r[31]|c->r[31]; // 801A2360
  c->r[4]=0u+0x00000004u; // 801A2364
  c->lr=0x801A236Cu; f_8013114C(c); // 801A2368
L_801A236C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A236C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2370
  c->lr=c->r[0]; // 801A2374
  c->r[1]=c->r[1]+0x00000010u; // 801A2378
  return; // 801A237C
}

// fn_801A2380
void f_801A2380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2380
  c->r[0]=c->lr; // 801A2384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A238C
  c->r[31]=c->r[3]|c->r[3]; // 801A2390
  c->r[3]=R32(c->r[3]+0x000000E8u); // 801A2394
  c->lr=0x801A239Cu; f_8013563C(c); // 801A2398
  c->r[4]=c->r[3]|c->r[3]; // 801A239C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A23A0
  c->lr=0x801A23A8u; f_8013C1CC(c); // 801A23A4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A23A8
  c->lr=0x801A23B0u; f_8013563C(c); // 801A23AC
  c->r[4]=c->r[3]|c->r[3]; // 801A23B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A23B4
  c->lr=0x801A23BCu; f_8013C020(c); // 801A23B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A23BC
  c->lr=0x801A23C4u; f_801356DC(c); // 801A23C0
  c->r[4]=c->r[3]|c->r[3]; // 801A23C4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A23C8
  c->lr=0x801A23D0u; f_8013C0EC(c); // 801A23CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A23D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A23D4
  c->lr=c->r[0]; // 801A23D8
  c->r[1]=c->r[1]+0x00000010u; // 801A23DC
  return; // 801A23E0
}

// fn_801A23E4
void f_801A23E4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A23E4
  c->r[0]=c->lr; // 801A23E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A23EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A23F0
  c->r[31]=c->r[3]|c->r[3]; // 801A23F4
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A23F8
  c->r[4]=0u+0x00000004u; // 801A23FC
  c->lr=0x801A2404u; f_8013BE58(c); // 801A2400
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2404
  c->lr=0x801A240Cu; f_8013C1EC(c); // 801A2408
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A240C
  c->lr=0x801A2414u; f_8013B9C0(c); // 801A2410
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2414
  c->lr=0x801A241Cu; f_80135E14(c); // 801A2418
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A241C
  c->lr=0x801A2424u; f_801345AC(c); // 801A2420
  c->r[3]=c->r[31]|c->r[31]; // 801A2424
  c->lr=0x801A242Cu; f_801A2380(c); // 801A2428
  c->r[3]=c->r[31]|c->r[31]; // 801A242C
  c->r[4]=0u+0x00000056u; // 801A2430
  c->lr=0x801A2438u; f_8013114C(c); // 801A2434
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2438
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A243C
  c->lr=c->r[0]; // 801A2440
  c->r[1]=c->r[1]+0x00000010u; // 801A2444
  return; // 801A2448
}

// fn_801A244C
void f_801A244C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A244C
  c->r[0]=c->lr; // 801A2450
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2454
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2458
  c->r[31]=c->r[3]|c->r[3]; // 801A245C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2460
  c->lr=0x801A2468u; f_8013BB2C(c); // 801A2464
  cmps(c,0,(int32_t)c->r[3],0); // 801A2468
  if (crb(c,2)) { goto L_801A2484; } // 801A246C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2470
  c->lr=0x801A2478u; f_8013BAA0(c); // 801A2474
  c->r[3]=c->r[31]|c->r[31]; // 801A2478
  c->r[4]=0u+0x00000059u; // 801A247C
  c->lr=0x801A2484u; f_8013114C(c); // 801A2480
L_801A2484:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2484
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2488
  c->lr=c->r[0]; // 801A248C
  c->r[1]=c->r[1]+0x00000010u; // 801A2490
  return; // 801A2494
}

// fn_801A2498
void f_801A2498(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2498
  c->r[0]=c->lr; // 801A249C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A24A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A24A4
  c->r[31]=c->r[3]|c->r[3]; // 801A24A8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A24AC
  c->lr=0x801A24B4u; f_8013C3C0(c); // 801A24B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A24B4
  c->lr=0x801A24BCu; f_8013BB68(c); // 801A24B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A24BC
  c->lr=0x801A24C4u; f_80135E14(c); // 801A24C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A24C4
  c->lr=0x801A24CCu; f_801345AC(c); // 801A24C8
  c->r[3]=c->r[31]|c->r[31]; // 801A24CC
  c->lr=0x801A24D4u; f_801A2380(c); // 801A24D0
  c->r[3]=c->r[31]|c->r[31]; // 801A24D4
  c->r[4]=0u+0x00000058u; // 801A24D8
  c->lr=0x801A24E0u; f_8013114C(c); // 801A24DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A24E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A24E4
  c->lr=c->r[0]; // 801A24E8
  c->r[1]=c->r[1]+0x00000010u; // 801A24EC
  return; // 801A24F0
}

// fn_801A24F4
void f_801A24F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A24F4
  c->r[0]=c->lr; // 801A24F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A24FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2500
  c->r[31]=c->r[3]|c->r[3]; // 801A2504
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2508
  c->lr=0x801A2510u; f_8013BCA8(c); // 801A250C
  cmps(c,0,(int32_t)c->r[3],0); // 801A2510
  if (crb(c,2)) { goto L_801A252C; } // 801A2514
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2518
  c->lr=0x801A2520u; f_8013BC1C(c); // 801A251C
  c->r[3]=c->r[31]|c->r[31]; // 801A2520
  c->r[4]=0u+0x00000059u; // 801A2524
  c->lr=0x801A252Cu; f_8013114C(c); // 801A2528
L_801A252C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A252C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2530
  c->lr=c->r[0]; // 801A2534
  c->r[1]=c->r[1]+0x00000010u; // 801A2538
  return; // 801A253C
}

// fn_801A2540
void f_801A2540(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2540
  c->r[0]=c->lr; // 801A2544
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A254C
  c->r[31]=c->r[3]|c->r[3]; // 801A2550
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2554
  c->lr=0x801A255Cu; f_8013BB60(c); // 801A2558
  c->r[4]=c->r[3]|c->r[3]; // 801A255C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2560
  c->lr=0x801A2568u; f_801356E4(c); // 801A2564
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2568
  c->lr=0x801A2570u; f_8013BB58(c); // 801A256C
  c->r[4]=c->r[3]|c->r[3]; // 801A2570
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2574
  c->lr=0x801A257Cu; f_801356EC(c); // 801A2578
  c->r[3]=c->r[31]|c->r[31]; // 801A257C
  c->r[4]=0u+0x0000005Au; // 801A2580
  c->lr=0x801A2588u; f_8013114C(c); // 801A2584
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2588
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A258C
  c->lr=c->r[0]; // 801A2590
  c->r[1]=c->r[1]+0x00000010u; // 801A2594
  return; // 801A2598
}

// fn_801A259C
void f_801A259C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A259C
  c->r[0]=c->lr; // 801A25A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A25A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A25A8
  c->r[31]=c->r[3]|c->r[3]; // 801A25AC
  c->r[3]=0u+0x00000001u; // 801A25B0
  c->lr=0x801A25B8u; f_8019CD1C(c); // 801A25B4
  cmps(c,0,(int32_t)c->r[3],0); // 801A25B8
  if (crb(c,2)) { goto L_801A25D8; } // 801A25BC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A25C0
  c->lr=0x801A25C8u; f_801345A4(c); // 801A25C4
  c->r[3]=c->r[31]|c->r[31]; // 801A25C8
  c->r[4]=0u+0x00000062u; // 801A25CC
  c->lr=0x801A25D4u; f_8013114C(c); // 801A25D0
  goto L_801A26FC; // 801A25D4
L_801A25D8:;
  c->r[3]=0u+0x00000000u; // 801A25D8
  c->lr=0x801A25E0u; f_8019CD1C(c); // 801A25DC
  cmps(c,0,(int32_t)c->r[3],0); // 801A25E0
  if (crb(c,2)) { goto L_801A264C; } // 801A25E4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A25E8
  c->lr=0x801A25F0u; f_8013563C(c); // 801A25EC
  c->r[4]=c->r[3]|c->r[3]; // 801A25F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A25F4
  c->lr=0x801A25FCu; f_8013C020(c); // 801A25F8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A25FC
  c->lr=0x801A2604u; f_801356DC(c); // 801A2600
  c->r[4]=c->r[3]|c->r[3]; // 801A2604
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2608
  c->lr=0x801A2610u; f_8013C0EC(c); // 801A260C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2610
  c->lr=0x801A2618u; f_8013BAA0(c); // 801A2614
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2618
  c->lr=0x801A2620u; f_80135750(c); // 801A261C
  cmps(c,0,(int32_t)c->r[3],0); // 801A2620
  if (!crb(c,2)) { goto L_801A2634; } // 801A2624
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2628
  c->lr=0x801A2630u; f_80135F08(c); // 801A262C
  goto L_801A26FC; // 801A2630
L_801A2634:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2634
  c->lr=0x801A263Cu; f_80135E7C(c); // 801A2638
  c->r[3]=c->r[31]|c->r[31]; // 801A263C
  c->r[4]=0u+0x0000005Bu; // 801A2640
  c->lr=0x801A2648u; f_8013114C(c); // 801A2644
  goto L_801A26FC; // 801A2648
L_801A264C:;
  c->r[3]=0u+0x00000003u; // 801A264C
  c->lr=0x801A2654u; f_8019CD1C(c); // 801A2650
  cmps(c,0,(int32_t)c->r[3],0); // 801A2654
  if (crb(c,2)) { goto L_801A2664; } // 801A2658
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A265C
  c->lr=0x801A2664u; f_801355A0(c); // 801A2660
L_801A2664:;
  c->r[3]=0u+0x00000004u; // 801A2664
  c->lr=0x801A266Cu; f_8019CD1C(c); // 801A2668
  cmps(c,0,(int32_t)c->r[3],0); // 801A266C
  if (crb(c,2)) { goto L_801A267C; } // 801A2670
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2674
  c->lr=0x801A267Cu; f_80135544(c); // 801A2678
L_801A267C:;
  c->r[3]=0u+0x00000006u; // 801A267C
  c->lr=0x801A2684u; f_8019CD1C(c); // 801A2680
  cmps(c,0,(int32_t)c->r[3],0); // 801A2684
  if (crb(c,2)) { goto L_801A26A4; } // 801A2688
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A268C
  c->lr=0x801A2694u; f_8013C1DC(c); // 801A2690
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2694
  c->lr=0x801A269Cu; f_80135690(c); // 801A2698
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A269C
  c->lr=0x801A26A4u; f_801355FC(c); // 801A26A0
L_801A26A4:;
  c->r[3]=0u+0x00000005u; // 801A26A4
  c->lr=0x801A26ACu; f_8019CD1C(c); // 801A26A8
  cmps(c,0,(int32_t)c->r[3],0); // 801A26AC
  if (crb(c,2)) { goto L_801A26CC; } // 801A26B0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A26B4
  c->lr=0x801A26BCu; f_8013C1E4(c); // 801A26B8
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A26BC
  c->lr=0x801A26C4u; f_80135644(c); // 801A26C0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A26C4
  c->lr=0x801A26CCu; f_801355FC(c); // 801A26C8
L_801A26CC:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A26CC
  c->lr=0x801A26D4u; f_8013563C(c); // 801A26D0
  c->r[4]=c->r[3]|c->r[3]; // 801A26D4
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A26D8
  c->lr=0x801A26E0u; f_8013C020(c); // 801A26DC
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A26E0
  c->lr=0x801A26E8u; f_801356DC(c); // 801A26E4
  c->r[4]=c->r[3]|c->r[3]; // 801A26E8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A26EC
  c->lr=0x801A26F4u; f_8013C0EC(c); // 801A26F0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A26F4
  c->lr=0x801A26FCu; f_8013BAA0(c); // 801A26F8
L_801A26FC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A26FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2700
  c->lr=c->r[0]; // 801A2704
  c->r[1]=c->r[1]+0x00000010u; // 801A2708
  return; // 801A270C
}

// fn_801A2710
void f_801A2710(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2710
  c->r[0]=c->lr; // 801A2714
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A271C
  c->r[31]=c->r[3]|c->r[3]; // 801A2720
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2724
  c->r[4]=0u+0x00000000u; // 801A2728
  c->r[5]=0u+0x00000000u; // 801A272C
  c->lr=0x801A2734u; f_8013A1A4(c); // 801A2730
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2734
  c->lr=0x801A273Cu; f_80135E48(c); // 801A2738
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A273C
  c->lr=0x801A2744u; f_8013BBCC(c); // 801A2740
  c->r[3]=c->r[31]|c->r[31]; // 801A2744
  c->r[4]=0u+0x0000005Cu; // 801A2748
  c->lr=0x801A2750u; f_8013114C(c); // 801A274C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2750
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2754
  c->lr=c->r[0]; // 801A2758
  c->r[1]=c->r[1]+0x00000010u; // 801A275C
  return; // 801A2760
}

// fn_801A2764
void f_801A2764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2764
  c->r[0]=c->lr; // 801A2768
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A276C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2770
  c->r[31]=c->r[3]|c->r[3]; // 801A2774
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2778
  c->lr=0x801A2780u; f_8013BCA8(c); // 801A277C
  cmps(c,0,(int32_t)c->r[3],0); // 801A2780
  if (crb(c,2)) { goto L_801A27A4; } // 801A2784
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2788
  c->r[4]=0u+0x00000000u; // 801A278C
  c->r[5]=0u+0x00000000u; // 801A2790
  c->lr=0x801A2798u; f_8013A158(c); // 801A2794
  c->r[3]=c->r[31]|c->r[31]; // 801A2798
  c->r[4]=0u+0x0000005Du; // 801A279C
  c->lr=0x801A27A4u; f_8013114C(c); // 801A27A0
L_801A27A4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A27A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A27A8
  c->lr=c->r[0]; // 801A27AC
  c->r[1]=c->r[1]+0x00000010u; // 801A27B0
  return; // 801A27B4
}

// fn_801A27B8
void f_801A27B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A27B8
  c->r[0]=c->lr; // 801A27BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A27C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A27C4
  c->r[31]=c->r[3]|c->r[3]; // 801A27C8
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A27CC
  c->lr=0x801A27D4u; f_8013BE1C(c); // 801A27D0
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A27D4
  c->lr=0x801A27DCu; f_8013BCB0(c); // 801A27D8
  c->r[3]=c->r[31]|c->r[31]; // 801A27DC
  c->r[4]=0u+0x0000005Eu; // 801A27E0
  c->lr=0x801A27E8u; f_8013114C(c); // 801A27E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A27E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A27EC
  c->lr=c->r[0]; // 801A27F0
  c->r[1]=c->r[1]+0x00000010u; // 801A27F4
  return; // 801A27F8
}

// fn_801A27FC
void f_801A27FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A27FC
  c->r[0]=c->lr; // 801A2800
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2804
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2808
  c->r[31]=c->r[3]|c->r[3]; // 801A280C
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2810
  c->lr=0x801A2818u; f_8013BD54(c); // 801A2814
  cmps(c,0,(int32_t)c->r[3],0); // 801A2818
  if (crb(c,2)) { goto L_801A2834; } // 801A281C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2820
  c->lr=0x801A2828u; f_8013BD18(c); // 801A2824
  c->r[3]=c->r[31]|c->r[31]; // 801A2828
  c->r[4]=0u+0x0000005Fu; // 801A282C
  c->lr=0x801A2834u; f_8013114C(c); // 801A2830
L_801A2834:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2834
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2838
  c->lr=c->r[0]; // 801A283C
  c->r[1]=c->r[1]+0x00000010u; // 801A2840
  return; // 801A2844
}

// fn_801A2848
void f_801A2848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2848
  c->r[0]=c->lr; // 801A284C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2854
  c->r[31]=c->r[3]|c->r[3]; // 801A2858
  c->r[3]=0u+0x00000001u; // 801A285C
  c->lr=0x801A2864u; f_8019CD1C(c); // 801A2860
  cmps(c,0,(int32_t)c->r[3],0); // 801A2864
  if (crb(c,2)) { goto L_801A2884; } // 801A2868
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A286C
  c->lr=0x801A2874u; f_801345A4(c); // 801A2870
  c->r[3]=c->r[31]|c->r[31]; // 801A2874
  c->r[4]=0u+0x00000060u; // 801A2878
  c->lr=0x801A2880u; f_8013114C(c); // 801A287C
  goto L_801A288C; // 801A2880
L_801A2884:;
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2884
  c->lr=0x801A288Cu; f_8013BD18(c); // 801A2888
L_801A288C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A288C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2890
  c->lr=c->r[0]; // 801A2894
  c->r[1]=c->r[1]+0x00000010u; // 801A2898
  return; // 801A289C
}

// fn_801A28A0
void f_801A28A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A28A0
  c->r[0]=c->lr; // 801A28A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A28A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A28AC
  c->r[31]=c->r[3]|c->r[3]; // 801A28B0
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A28B4
  c->lr=0x801A28BCu; f_8013BCE4(c); // 801A28B8
  c->r[3]=c->r[31]|c->r[31]; // 801A28BC
  c->r[4]=0u+0x00000061u; // 801A28C0
  c->lr=0x801A28C8u; f_8013114C(c); // 801A28C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A28C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A28CC
  c->lr=c->r[0]; // 801A28D0
  c->r[1]=c->r[1]+0x00000010u; // 801A28D4
  return; // 801A28D8
}

// fn_801A28DC
void f_801A28DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A28DC
  c->r[0]=c->lr; // 801A28E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A28E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A28E8
  c->r[31]=c->r[3]|c->r[3]; // 801A28EC
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A28F0
  c->lr=0x801A28F8u; f_8013BD54(c); // 801A28F4
  cmps(c,0,(int32_t)c->r[3],0); // 801A28F8
  if (crb(c,2)) { goto L_801A2920; } // 801A28FC
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2900
  c->r[4]=0u+0x00000000u; // 801A2904
  c->lr=0x801A290Cu; f_8013A1F0(c); // 801A2908
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A290C
  c->lr=0x801A2914u; f_8013BE4C(c); // 801A2910
  c->r[3]=c->r[31]|c->r[31]; // 801A2914
  c->r[4]=0u+0x00000057u; // 801A2918
  c->lr=0x801A2920u; f_8013114C(c); // 801A291C
L_801A2920:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2920
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2924
  c->lr=c->r[0]; // 801A2928
  c->r[1]=c->r[1]+0x00000010u; // 801A292C
  return; // 801A2930
}

// fn_801A2934
void f_801A2934(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2934
  c->r[0]=c->lr; // 801A2938
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A293C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2940
  c->r[31]=c->r[3]|c->r[3]; // 801A2944
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2948
  c->r[4]=0u+0x00000000u; // 801A294C
  c->r[5]=0u+0x00000001u; // 801A2950
  c->lr=0x801A2958u; f_8013A1A4(c); // 801A2954
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2958
  c->lr=0x801A2960u; f_80135E48(c); // 801A295C
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A2960
  c->lr=0x801A2968u; f_8013BA40(c); // 801A2964
  c->r[3]=c->r[31]|c->r[31]; // 801A2968
  c->r[4]=0u+0x00000063u; // 801A296C
  c->lr=0x801A2974u; f_8013114C(c); // 801A2970
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2974
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2978
  c->lr=c->r[0]; // 801A297C
  c->r[1]=c->r[1]+0x00000010u; // 801A2980
  return; // 801A2984
}

// fn_801A2988
void f_801A2988(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2988
  c->r[0]=c->lr; // 801A298C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2994
  c->r[31]=c->r[3]|c->r[3]; // 801A2998
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A299C
  c->lr=0x801A29A4u; f_8013BB2C(c); // 801A29A0
  cmps(c,0,(int32_t)c->r[3],0); // 801A29A4
  if (crb(c,2)) { goto L_801A29C8; } // 801A29A8
  c->r[3]=R32(c->r[31]+0x000000F4u); // 801A29AC
  c->r[4]=0u+0x00000000u; // 801A29B0
  c->r[5]=0u+0x00000001u; // 801A29B4
  c->lr=0x801A29BCu; f_8013A158(c); // 801A29B8
  c->r[3]=c->r[31]|c->r[31]; // 801A29BC
  c->r[4]=0u+0x00000004u; // 801A29C0
  c->lr=0x801A29C8u; f_8013114C(c); // 801A29C4
L_801A29C8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A29C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A29CC
  c->lr=c->r[0]; // 801A29D0
  c->r[1]=c->r[1]+0x00000010u; // 801A29D4
  return; // 801A29D8
}

// fn_801A29DC
void f_801A29DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A29DC
  c->r[0]=c->lr; // 801A29E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A29E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A29E8
  c->r[31]=c->r[3]|c->r[3]; // 801A29EC
  c->r[3]=0u+0x00000001u; // 801A29F0
  c->lr=0x801A29F8u; f_8012C380(c); // 801A29F4
  c->r[3]=0u+0x00000001u; // 801A29F8
  c->lr=0x801A2A00u; f_8012C3BC(c); // 801A29FC
  c->r[3]=0u+0x0000006Cu; // 801A2A00
  c->r[4]=0u+0x00000000u; // 801A2A04
  c->lr=0x801A2A0Cu; f_8012C334(c); // 801A2A08
  c->r[3]=0u+0x00000064u; // 801A2A0C
  c->r[4]=0u+0x00000000u; // 801A2A10
  c->lr=0x801A2A18u; f_8012C334(c); // 801A2A14
  c->r[3]=0u+0x00000065u; // 801A2A18
  c->r[4]=0u+0x00000000u; // 801A2A1C
  c->lr=0x801A2A24u; f_8012C334(c); // 801A2A20
  c->lr=0x801A2A28u; f_8012C280(c); // 801A2A24
  c->r[3]=c->r[31]|c->r[31]; // 801A2A28
  c->r[4]=0u+0x00000065u; // 801A2A2C
  c->lr=0x801A2A34u; f_8013114C(c); // 801A2A30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2A34
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2A38
  c->lr=c->r[0]; // 801A2A3C
  c->r[1]=c->r[1]+0x00000010u; // 801A2A40
  return; // 801A2A44
}

// fn_801A2A48
void f_801A2A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2A48
  c->r[0]=c->lr; // 801A2A4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2A50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2A54
  c->r[31]=c->r[3]|c->r[3]; // 801A2A58
  c->lr=0x801A2A60u; f_8012C2B8(c); // 801A2A5C
  cmps(c,0,(int32_t)c->r[3],0); // 801A2A60
  if (crb(c,2)) { goto L_801A2A74; } // 801A2A64
  c->r[3]=c->r[31]|c->r[31]; // 801A2A68
  c->r[4]=0u+0x00000066u; // 801A2A6C
  c->lr=0x801A2A74u; f_8013114C(c); // 801A2A70
L_801A2A74:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2A74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2A78
  c->lr=c->r[0]; // 801A2A7C
  c->r[1]=c->r[1]+0x00000010u; // 801A2A80
  return; // 801A2A84
}

// fn_801A2A88
void f_801A2A88(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2A88
  c->r[0]=c->lr; // 801A2A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2A94
  c->r[31]=c->r[3]|c->r[3]; // 801A2A98
  c->lr=0x801A2AA0u; f_8012C2E4(c); // 801A2A9C
  cmps(c,0,(int32_t)c->r[3],0); // 801A2AA0
  if (!crb(c,2)) { goto L_801A2AC8; } // 801A2AA4
  c->r[3]=0u+0x00000000u; // 801A2AA8
  c->lr=0x801A2AB0u; f_8012C380(c); // 801A2AAC
  c->r[3]=0u+0x00000000u; // 801A2AB0
  c->lr=0x801A2AB8u; f_8012C3BC(c); // 801A2AB4
  c->r[3]=c->r[31]|c->r[31]; // 801A2AB8
  c->r[4]=0u+0x00000067u; // 801A2ABC
  c->lr=0x801A2AC4u; f_8013114C(c); // 801A2AC0
  goto L_801A2AE4; // 801A2AC4
L_801A2AC8:;
  c->r[3]=0u+0x00000000u; // 801A2AC8
  c->lr=0x801A2AD0u; f_8012C380(c); // 801A2ACC
  c->r[3]=0u+0x00000000u; // 801A2AD0
  c->lr=0x801A2AD8u; f_8012C3BC(c); // 801A2AD4
  c->r[3]=c->r[31]|c->r[31]; // 801A2AD8
  c->r[4]=0u+0x00000004u; // 801A2ADC
  c->lr=0x801A2AE4u; f_8013114C(c); // 801A2AE0
L_801A2AE4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2AE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2AE8
  c->lr=c->r[0]; // 801A2AEC
  c->r[1]=c->r[1]+0x00000010u; // 801A2AF0
  return; // 801A2AF4
}

// fn_801A2AF8
void f_801A2AF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2AF8
  c->r[0]=c->lr; // 801A2AFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2B00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2B04
  c->r[31]=c->r[3]|c->r[3]; // 801A2B08
  c->lr=0x801A2B10u; f_801E6540(c); // 801A2B0C
  c->r[3]=c->r[31]|c->r[31]; // 801A2B10
  c->r[4]=0u+0x00000068u; // 801A2B14
  c->lr=0x801A2B1Cu; f_8013114C(c); // 801A2B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2B20
  c->lr=c->r[0]; // 801A2B24
  c->r[1]=c->r[1]+0x00000010u; // 801A2B28
  return; // 801A2B2C
}

// fn_801A2B30
void f_801A2B30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2B30
  c->r[0]=c->lr; // 801A2B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2B3C
  c->r[31]=c->r[3]|c->r[3]; // 801A2B40
  c->lr=0x801A2B48u; f_801E65AC(c); // 801A2B44
  cmps(c,0,(int32_t)c->r[3],0); // 801A2B48
  if (crb(c,2)) { goto L_801A2B5C; } // 801A2B4C
  c->r[3]=c->r[31]|c->r[31]; // 801A2B50
  c->r[4]=0u+0x00000069u; // 801A2B54
  c->lr=0x801A2B5Cu; f_8013114C(c); // 801A2B58
L_801A2B5C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2B5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2B60
  c->lr=c->r[0]; // 801A2B64
  c->r[1]=c->r[1]+0x00000010u; // 801A2B68
  return; // 801A2B6C
}

// fn_801A2B70
void f_801A2B70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2B70
  c->r[0]=c->lr; // 801A2B74
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2B78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2B7C
  c->r[31]=c->r[3]|c->r[3]; // 801A2B80
  c->r[3]=R32(c->r[3]+0x000000F4u); // 801A2B84
  c->r[4]=0u+0x00000000u; // 801A2B88
  c->lr=0x801A2B90u; f_80139E48(c); // 801A2B8C
  c->r[3]=R32(c->r[31]+0x000000E8u); // 801A2B90
  c->lr=0x801A2B98u; f_80134564(c); // 801A2B94
  c->r[3]=c->r[31]|c->r[31]; // 801A2B98
  c->r[4]=0u+0x00000000u; // 801A2B9C
  c->lr=0x801A2BA4u; f_8013114C(c); // 801A2BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2BA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2BA8
  c->lr=c->r[0]; // 801A2BAC
  c->r[1]=c->r[1]+0x00000010u; // 801A2BB0
  return; // 801A2BB4
}

// fn_801A2BB8
void f_801A2BB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2BB8
  c->r[0]=c->lr; // 801A2BBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2BC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2BC4
  c->r[31]=c->r[3]|c->r[3]; // 801A2BC8
  c->lr=0x801A2BD0u; f_801A3584(c); // 801A2BCC
  c->r[3]=0u+0x80470000u; // 801A2BD0
  c->r[0]=c->r[3]+0x00000398u; // 801A2BD4
  W32(c->r[31]+0x00000058u,c->r[0]); // 801A2BD8
  c->r[0]=0u+0xFFFFFFFFu; // 801A2BDC
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801A2BE0
  c->r[3]=c->r[31]|c->r[31]; // 801A2BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2BE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2BEC
  c->lr=c->r[0]; // 801A2BF0
  c->r[1]=c->r[1]+0x00000010u; // 801A2BF4
  return; // 801A2BF8
}

// fn_801A2BFC
void f_801A2BFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2BFC
  c->r[0]=c->lr; // 801A2C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2C04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2C08
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A2C0C
  c->r[30]=c->r[3]|c->r[3]; // 801A2C10
  c->r[31]=c->r[4]|c->r[4]; // 801A2C14
  cmps(c,0,(int32_t)c->r[3],0); // 801A2C18
  if (crb(c,2)) { goto L_801A2C3C; } // 801A2C1C
  c->r[4]=0u+0x00000000u; // 801A2C20
  c->lr=0x801A2C28u; f_8012FB1C(c); // 801A2C24
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A2C28
  cmps(c,0,(int32_t)c->r[0],0); // 801A2C2C
  if (!crb(c,1)) { goto L_801A2C3C; } // 801A2C30
  c->r[3]=c->r[30]|c->r[30]; // 801A2C34
  c->lr=0x801A2C3Cu; f_80047B20(c); // 801A2C38
L_801A2C3C:;
  c->r[3]=c->r[30]|c->r[30]; // 801A2C3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2C40
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A2C44
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2C48
  c->lr=c->r[0]; // 801A2C4C
  c->r[1]=c->r[1]+0x00000010u; // 801A2C50
  return; // 801A2C54
}

// fn_801A2C58
void f_801A2C58(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2C58
  c->r[0]=c->lr; // 801A2C5C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801A2C60
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801A2C64
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801A2C68
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 801A2C6C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,30,ea,0,0);} // 801A2C70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2C74
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A2C78
  c->r[30]=c->r[3]|c->r[3]; // 801A2C7C
  c->lr=0x801A2C84u; f_8011B41C(c); // 801A2C80
  c->r[4]=0u+0x00000002u; // 801A2C84
  c->lr=0x801A2C8Cu; f_8011B814(c); // 801A2C88
  c->r[31]=c->r[3]|c->r[3]; // 801A2C8C
  c->lr=0x801A2C94u; f_8014F39C(c); // 801A2C90
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2C94
  c->lr=0x801A2C9Cu; f_80117D04(c); // 801A2C98
  c->r[3]=c->r[31]|c->r[31]; // 801A2C9C
  c->lr=0x801A2CA4u; f_8014F3B4(c); // 801A2CA0
  c->f[30]=c->f[1]; // 801A2CA4
  c->r[3]=c->r[31]|c->r[31]; // 801A2CA8
  c->lr=0x801A2CB0u; f_8014F3AC(c); // 801A2CAC
  c->f[31]=c->f[1]; // 801A2CB0
  c->r[3]=c->r[31]|c->r[31]; // 801A2CB4
  c->lr=0x801A2CBCu; f_8014F3A4(c); // 801A2CB8
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2CBC
  c->f[2]=c->f[31]; // 801A2CC0
  c->f[3]=c->f[30]; // 801A2CC4
  c->lr=0x801A2CCCu; f_80114AB8(c); // 801A2CC8
  c->r[3]=c->r[31]|c->r[31]; // 801A2CCC
  c->lr=0x801A2CD4u; f_8014F3BC(c); // 801A2CD0
  c->f[31]=c->f[1]; // 801A2CD4
  c->r[3]=c->r[31]|c->r[31]; // 801A2CD8
  c->lr=0x801A2CE0u; f_8014F3BC(c); // 801A2CDC
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2CE0
  c->f[2]=c->f[31]; // 801A2CE4
  {uint32_t ea=c->r[2]+0xFFFF9278u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A2CE8
  c->lr=0x801A2CF0u; f_80114AA8(c); // 801A2CEC
  c->r[3]=c->r[31]|c->r[31]; // 801A2CF0
  c->lr=0x801A2CF8u; f_8012FCB0(c); // 801A2CF4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2CF8
  c->lr=0x801A2D00u; f_8012FA30(c); // 801A2CFC
  c->r[3]=c->r[31]|c->r[31]; // 801A2D00
  c->lr=0x801A2D08u; f_8012FCB8(c); // 801A2D04
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D08
  c->lr=0x801A2D10u; f_8012FA38(c); // 801A2D0C
  c->r[3]=c->r[31]|c->r[31]; // 801A2D10
  c->lr=0x801A2D18u; f_8012FCC8(c); // 801A2D14
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D18
  c->lr=0x801A2D20u; f_8012FA4C(c); // 801A2D1C
  c->r[3]=c->r[31]|c->r[31]; // 801A2D20
  c->lr=0x801A2D28u; f_8012FCD0(c); // 801A2D24
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D28
  c->lr=0x801A2D30u; f_8012FA54(c); // 801A2D2C
  c->r[3]=c->r[31]|c->r[31]; // 801A2D30
  c->lr=0x801A2D38u; f_8012FCE8(c); // 801A2D34
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D38
  c->lr=0x801A2D40u; f_8012FA6C(c); // 801A2D3C
  c->r[3]=c->r[31]|c->r[31]; // 801A2D40
  c->lr=0x801A2D48u; f_8012FCF0(c); // 801A2D44
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D48
  c->lr=0x801A2D50u; f_8012FA74(c); // 801A2D4C
  c->r[3]=c->r[31]|c->r[31]; // 801A2D50
  c->lr=0x801A2D58u; f_8012FCE0(c); // 801A2D54
  c->r[4]=c->r[3]|c->r[3]; // 801A2D58
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D5C
  c->lr=0x801A2D64u; f_8012F918(c); // 801A2D60
  c->r[3]=c->r[31]|c->r[31]; // 801A2D64
  c->lr=0x801A2D6Cu; f_8012FCF8(c); // 801A2D68
  c->f[31]=c->f[1]; // 801A2D6C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D70
  c->lr=0x801A2D78u; f_8012AA10(c); // 801A2D74
  c->f[1]=c->f[31]; // 801A2D78
  c->lr=0x801A2D80u; f_80110580(c); // 801A2D7C
  c->r[3]=c->r[31]|c->r[31]; // 801A2D80
  c->lr=0x801A2D88u; f_8012FD00(c); // 801A2D84
  c->f[31]=c->f[1]; // 801A2D88
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2D8C
  c->lr=0x801A2D94u; f_8012AA08(c); // 801A2D90
  c->f[1]=c->f[31]; // 801A2D94
  c->lr=0x801A2D9Cu; f_80110580(c); // 801A2D98
  c->r[3]=c->r[31]|c->r[31]; // 801A2D9C
  c->lr=0x801A2DA4u; f_8012FD08(c); // 801A2DA0
  c->f[31]=c->f[1]; // 801A2DA4
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2DA8
  c->lr=0x801A2DB0u; f_8012AA10(c); // 801A2DAC
  c->f[1]=c->f[31]; // 801A2DB0
  c->lr=0x801A2DB8u; f_80110588(c); // 801A2DB4
  c->r[3]=c->r[31]|c->r[31]; // 801A2DB8
  c->lr=0x801A2DC0u; f_8012FD10(c); // 801A2DBC
  c->f[31]=c->f[1]; // 801A2DC0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A2DC4
  c->lr=0x801A2DCCu; f_8012AA08(c); // 801A2DC8
  c->f[1]=c->f[31]; // 801A2DCC
  c->lr=0x801A2DD4u; f_80110588(c); // 801A2DD0
  c->r[0]=0u+0x00000028u; // 801A2DD4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801A2DD8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801A2DDC
  c->r[0]=0u+0x00000018u; // 801A2DE0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 801A2DE4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 801A2DE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2DEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A2DF0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801A2DF4
  c->lr=c->r[0]; // 801A2DF8
  c->r[1]=c->r[1]+0x00000030u; // 801A2DFC
  return; // 801A2E00
}

// fn_801A2E04
void f_801A2E04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2E04
  c->r[0]=c->lr; // 801A2E08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A2E0C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801A2E10
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801A2E14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2E18
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A2E1C
  c->r[30]=c->r[3]|c->r[3]; // 801A2E20
  c->lr=0x801A2E28u; f_8011B41C(c); // 801A2E24
  c->r[4]=0u+0x00000002u; // 801A2E28
  c->lr=0x801A2E30u; f_8011B814(c); // 801A2E2C
  c->r[31]=c->r[3]|c->r[3]; // 801A2E30
  c->lr=0x801A2E38u; f_8014F414(c); // 801A2E34
  c->f[31]=c->f[1]; // 801A2E38
  c->r[3]=c->r[31]|c->r[31]; // 801A2E3C
  c->lr=0x801A2E44u; f_8014F40C(c); // 801A2E40
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2E44
  c->f[2]=c->f[31]; // 801A2E48
  c->lr=0x801A2E50u; f_801313A0(c); // 801A2E4C
  c->r[3]=c->r[31]|c->r[31]; // 801A2E50
  c->lr=0x801A2E58u; f_8014F41C(c); // 801A2E54
  c->f[31]=c->f[1]; // 801A2E58
  c->r[3]=c->r[31]|c->r[31]; // 801A2E5C
  c->lr=0x801A2E64u; f_8014F41C(c); // 801A2E60
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2E64
  c->f[2]=c->f[31]; // 801A2E68
  c->lr=0x801A2E70u; f_801313AC(c); // 801A2E6C
  c->r[3]=c->r[31]|c->r[31]; // 801A2E70
  c->lr=0x801A2E78u; f_8012FCB0(c); // 801A2E74
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2E78
  c->lr=0x801A2E80u; f_80131C38(c); // 801A2E7C
  c->r[3]=c->r[31]|c->r[31]; // 801A2E80
  c->lr=0x801A2E88u; f_8012FCB8(c); // 801A2E84
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2E88
  c->lr=0x801A2E90u; f_80131C40(c); // 801A2E8C
  c->r[3]=c->r[31]|c->r[31]; // 801A2E90
  c->lr=0x801A2E98u; f_8012FCC8(c); // 801A2E94
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2E98
  c->lr=0x801A2EA0u; f_80131C54(c); // 801A2E9C
  c->r[3]=c->r[31]|c->r[31]; // 801A2EA0
  c->lr=0x801A2EA8u; f_8012FCD0(c); // 801A2EA4
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2EA8
  c->lr=0x801A2EB0u; f_80131C5C(c); // 801A2EAC
  c->r[3]=c->r[31]|c->r[31]; // 801A2EB0
  c->lr=0x801A2EB8u; f_8012FCE8(c); // 801A2EB4
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2EB8
  c->lr=0x801A2EC0u; f_80131C64(c); // 801A2EBC
  c->r[3]=c->r[31]|c->r[31]; // 801A2EC0
  c->lr=0x801A2EC8u; f_8012FCF0(c); // 801A2EC4
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2EC8
  c->lr=0x801A2ED0u; f_80131C6C(c); // 801A2ECC
  c->r[3]=c->r[31]|c->r[31]; // 801A2ED0
  c->lr=0x801A2ED8u; f_8012FCE0(c); // 801A2ED4
  c->r[4]=c->r[3]|c->r[3]; // 801A2ED8
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2EDC
  c->lr=0x801A2EE4u; f_80131B68(c); // 801A2EE0
  c->r[3]=c->r[31]|c->r[31]; // 801A2EE4
  c->lr=0x801A2EECu; f_8012FCF8(c); // 801A2EE8
  c->f[31]=c->f[1]; // 801A2EEC
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2EF0
  c->lr=0x801A2EF8u; f_80137E4C(c); // 801A2EF4
  c->f[1]=c->f[31]; // 801A2EF8
  c->lr=0x801A2F00u; f_80110580(c); // 801A2EFC
  c->r[3]=c->r[31]|c->r[31]; // 801A2F00
  c->lr=0x801A2F08u; f_8012FD00(c); // 801A2F04
  c->f[31]=c->f[1]; // 801A2F08
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2F0C
  c->lr=0x801A2F14u; f_80137E44(c); // 801A2F10
  c->f[1]=c->f[31]; // 801A2F14
  c->lr=0x801A2F1Cu; f_80110580(c); // 801A2F18
  c->r[3]=c->r[31]|c->r[31]; // 801A2F1C
  c->lr=0x801A2F24u; f_8012FD08(c); // 801A2F20
  c->f[31]=c->f[1]; // 801A2F24
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2F28
  c->lr=0x801A2F30u; f_80137E4C(c); // 801A2F2C
  c->f[1]=c->f[31]; // 801A2F30
  c->lr=0x801A2F38u; f_80110588(c); // 801A2F34
  c->r[3]=c->r[31]|c->r[31]; // 801A2F38
  c->lr=0x801A2F40u; f_8012FD10(c); // 801A2F3C
  c->f[31]=c->f[1]; // 801A2F40
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2F44
  c->lr=0x801A2F4Cu; f_80137E44(c); // 801A2F48
  c->f[1]=c->f[31]; // 801A2F4C
  c->lr=0x801A2F54u; f_80110588(c); // 801A2F50
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A2F54
  {uint32_t ea=c->r[2]+0xFFFF927Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801A2F58
  c->lr=0x801A2F60u; f_801315AC(c); // 801A2F5C
  c->r[0]=0u+0x00000018u; // 801A2F60
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 801A2F64
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801A2F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2F6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A2F70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A2F74
  c->lr=c->r[0]; // 801A2F78
  c->r[1]=c->r[1]+0x00000020u; // 801A2F7C
  return; // 801A2F80
}

// fn_801A2F84
void f_801A2F84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2F84
  c->r[0]=c->lr; // 801A2F88
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2F8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2F90
  c->r[31]=c->r[3]|c->r[3]; // 801A2F94
  c->lr=0x801A2F9Cu; f_80111CF0(c); // 801A2F98
  cmps(c,0,(int32_t)c->r[3],0); // 801A2F9C
  if (crb(c,2)) { goto L_801A2FB0; } // 801A2FA0
  c->r[3]=0u+0x80470000u; // 801A2FA4
  c->r[4]=c->r[3]+0x000002D0u; // 801A2FA8
  goto L_801A2FC0; // 801A2FAC
L_801A2FB0:;
  c->lr=0x801A2FB4u; f_8007B524(c); // 801A2FB0
  c->r[4]=R32(c->r[31]+0x000000CCu); // 801A2FB4
  c->lr=0x801A2FBCu; f_800A33B8(c); // 801A2FB8
  c->r[4]=c->r[3]|c->r[3]; // 801A2FBC
L_801A2FC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801A2FC0
  if (crb(c,2)) { goto L_801A2FD4; } // 801A2FC4
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A2FC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A2FCC
  c->lr=0x801A2FD4u; f_801313D4(c); // 801A2FD0
L_801A2FD4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A2FD4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A2FD8
  c->lr=c->r[0]; // 801A2FDC
  c->r[1]=c->r[1]+0x00000010u; // 801A2FE0
  return; // 801A2FE4
}

// fn_801A2FE8
void f_801A2FE8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A2FE8
  c->r[0]=c->lr; // 801A2FEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A2FF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A2FF4
  c->r[31]=c->r[3]|c->r[3]; // 801A2FF8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A2FFC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801A3000
  c->ctr=c->r[12]; // 801A3004
  if (true) { c->lr=0x801A300Cu; dispatch(c,c->ctr); } // 801A3008
  c->r[3]=c->r[31]|c->r[31]; // 801A300C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A3010
  c->r[12]=R32(c->r[12]+0x00000044u); // 801A3014
  c->ctr=c->r[12]; // 801A3018
  if (true) { c->lr=0x801A3020u; dispatch(c,c->ctr); } // 801A301C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3020
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3024
  c->lr=c->r[0]; // 801A3028
  c->r[1]=c->r[1]+0x00000010u; // 801A302C
  return; // 801A3030
}

// fn_801A3034
void f_801A3034(Ctx* __restrict c) {
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A3034
  c->r[12]=R32(c->r[12]+0x00000048u); // 801A3038
  c->ctr=c->r[12]; // 801A303C
  if (true) { dispatch(c,c->ctr); return; } // 801A3040
}

// fn_801A3044
void f_801A3044(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3044
  c->r[0]=c->lr; // 801A3048
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A304C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3050
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A3054
  c->r[30]=c->r[3]|c->r[3]; // 801A3058
  c->r[31]=c->r[4]|c->r[4]; // 801A305C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A3060
  c->lr=0x801A3068u; f_8012F910(c); // 801A3064
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A3068
  c->r[4]=c->r[31]|c->r[31]; // 801A306C
  c->lr=0x801A3074u; f_80131388(c); // 801A3070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3074
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A3078
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A307C
  c->lr=c->r[0]; // 801A3080
  c->r[1]=c->r[1]+0x00000010u; // 801A3084
  return; // 801A3088
}

// fn_801A308C
void f_801A308C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A308C
  c->r[0]=c->lr; // 801A3090
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3098
  c->r[31]=c->r[3]|c->r[3]; // 801A309C
  c->lr=0x801A30A4u; f_8012FAAC(c); // 801A30A0
  c->r[3]=0u+0x80470000u; // 801A30A4
  c->r[0]=c->r[3]+0x00000328u; // 801A30A8
  W32(c->r[31]+0x00000058u,c->r[0]); // 801A30AC
  c->r[0]=0u+0x00000000u; // 801A30B0
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801A30B4
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801A30B8
  c->r[3]=c->r[31]|c->r[31]; // 801A30BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A30C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A30C4
  c->lr=c->r[0]; // 801A30C8
  c->r[1]=c->r[1]+0x00000010u; // 801A30CC
  return; // 801A30D0
}

// fn_801A30D4
void f_801A30D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A30D4
  c->r[0]=c->lr; // 801A30D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A30DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A30E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A30E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A30E8
  c->r[29]=c->r[3]|c->r[3]; // 801A30EC
  c->lr=0x801A30F4u; f_80056B5C(c); // 801A30F0
  c->r[30]=c->r[3]|c->r[3]; // 801A30F4
  c->lr=0x801A30FCu; f_801F1340(c); // 801A30F8
  c->lr=0x801A3100u; f_80056B54(c); // 801A30FC
  c->r[3]=0u+0x00010000u; // 801A3100
  c->r[3]=c->r[3]+0xFFFFD120u; // 801A3104
  c->lr=0x801A310Cu; f_80047B64(c); // 801A3108
  c->r[31]=c->r[3]|c->r[3]; // 801A310C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3110
  if (crb(c,2)) { goto L_801A311C; } // 801A3114
  c->lr=0x801A311Cu; f_8013D750(c); // 801A3118
L_801A311C:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801A311C
  c->r[3]=c->r[30]|c->r[30]; // 801A3120
  c->lr=0x801A3128u; f_80056B54(c); // 801A3124
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801A3128
  c->r[4]=0u+0x00000001u; // 801A312C
  c->lr=0x801A3134u; f_8017DD6C(c); // 801A3130
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801A3134
  c->r[4]=0u+0x00000002u; // 801A3138
  c->lr=0x801A3140u; f_801A3570(c); // 801A313C
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801A3140
  c->lr=0x801A3148u; f_8017D8EC(c); // 801A3144
  c->lr=0x801A314Cu; f_80056B5C(c); // 801A3148
  c->r[30]=c->r[3]|c->r[3]; // 801A314C
  c->lr=0x801A3154u; f_801F1340(c); // 801A3150
  c->lr=0x801A3158u; f_80056B54(c); // 801A3154
  c->r[3]=0u+0x000000D0u; // 801A3158
  c->lr=0x801A3160u; f_80047B64(c); // 801A315C
  c->r[31]=c->r[3]|c->r[3]; // 801A3160
  cmps(c,0,(int32_t)c->r[3],0); // 801A3164
  if (crb(c,2)) { goto L_801A3170; } // 801A3168
  c->lr=0x801A3170u; f_801A2BB8(c); // 801A316C
L_801A3170:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801A3170
  c->r[3]=c->r[30]|c->r[30]; // 801A3174
  c->lr=0x801A317Cu; f_80056B54(c); // 801A3178
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801A317C
  c->r[4]=0u+0x00000002u; // 801A3180
  c->lr=0x801A3188u; f_801A37E4(c); // 801A3184
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801A3188
  c->lr=0x801A3190u; f_801A35D0(c); // 801A318C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A3190
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A3194
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A3198
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A319C
  c->lr=c->r[0]; // 801A31A0
  c->r[1]=c->r[1]+0x00000020u; // 801A31A4
  return; // 801A31A8
}

// fn_801A31AC
void f_801A31AC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A31AC
  c->r[0]=c->lr; // 801A31B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A31B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A31B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A31BC
  c->r[30]=c->r[3]|c->r[3]; // 801A31C0
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A31C4
  cmps(c,0,(int32_t)c->r[3],0); // 801A31C8
  if (crb(c,2)) { goto L_801A3214; } // 801A31CC
  c->lr=0x801A31D4u; f_8017DA18(c); // 801A31D0
  c->lr=0x801A31D8u; f_80056B5C(c); // 801A31D4
  c->r[31]=c->r[3]|c->r[3]; // 801A31D8
  c->lr=0x801A31E0u; f_801F1340(c); // 801A31DC
  c->lr=0x801A31E4u; f_80056B54(c); // 801A31E0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A31E4
  cmps(c,0,(int32_t)c->r[3],0); // 801A31E8
  if (crb(c,2)) { goto L_801A3204; } // 801A31EC
  c->r[4]=0u+0x00000001u; // 801A31F0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A31F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A31F8
  c->ctr=c->r[12]; // 801A31FC
  if (true) { c->lr=0x801A3204u; dispatch(c,c->ctr); } // 801A3200
L_801A3204:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3204
  c->lr=0x801A320Cu; f_80056B54(c); // 801A3208
  c->r[0]=0u+0x00000000u; // 801A320C
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801A3210
L_801A3214:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A3214
  cmps(c,0,(int32_t)c->r[3],0); // 801A3218
  if (crb(c,2)) { goto L_801A3264; } // 801A321C
  c->lr=0x801A3224u; f_801A36B8(c); // 801A3220
  c->lr=0x801A3228u; f_80056B5C(c); // 801A3224
  c->r[31]=c->r[3]|c->r[3]; // 801A3228
  c->lr=0x801A3230u; f_801F1340(c); // 801A322C
  c->lr=0x801A3234u; f_80056B54(c); // 801A3230
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A3234
  cmps(c,0,(int32_t)c->r[3],0); // 801A3238
  if (crb(c,2)) { goto L_801A3254; } // 801A323C
  c->r[4]=0u+0x00000001u; // 801A3240
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A3244
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A3248
  c->ctr=c->r[12]; // 801A324C
  if (true) { c->lr=0x801A3254u; dispatch(c,c->ctr); } // 801A3250
L_801A3254:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3254
  c->lr=0x801A325Cu; f_80056B54(c); // 801A3258
  c->r[0]=0u+0x00000000u; // 801A325C
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801A3260
L_801A3264:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3264
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A3268
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A326C
  c->lr=c->r[0]; // 801A3270
  c->r[1]=c->r[1]+0x00000010u; // 801A3274
  return; // 801A3278
}

// fn_801A327C
void f_801A327C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A327C
  c->r[0]=c->lr; // 801A3280
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3284
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3288
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A328C
  c->r[30]=c->r[3]|c->r[3]; // 801A3290
  c->r[31]=c->r[4]|c->r[4]; // 801A3294
  cmps(c,0,(int32_t)c->r[3],0); // 801A3298
  if (crb(c,2)) { goto L_801A32BC; } // 801A329C
  c->r[4]=0u+0x00000000u; // 801A32A0
  c->lr=0x801A32A8u; f_801A2BFC(c); // 801A32A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A32A8
  cmps(c,0,(int32_t)c->r[0],0); // 801A32AC
  if (!crb(c,1)) { goto L_801A32BC; } // 801A32B0
  c->r[3]=c->r[30]|c->r[30]; // 801A32B4
  c->lr=0x801A32BCu; f_80047B20(c); // 801A32B8
L_801A32BC:;
  c->r[3]=c->r[30]|c->r[30]; // 801A32BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A32C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A32C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A32C8
  c->lr=c->r[0]; // 801A32CC
  c->r[1]=c->r[1]+0x00000010u; // 801A32D0
  return; // 801A32D4
}

// fn_801A32D8
void f_801A32D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A32D8
  f_8017DB64(c); return; // 801A32DC
}

// fn_801A32E0
void f_801A32E0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A32E0
  f_8017DC74(c); return; // 801A32E4
}

// fn_801A32E8
void f_801A32E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801A32E8
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A32EC
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801A32F0
  c->ctr=c->r[12]; // 801A32F4
  if (true) { dispatch(c,c->ctr); return; } // 801A32F8
}

// fn_801A32FC
void f_801A32FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A32FC
  c->r[0]=c->lr; // 801A3300
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3304
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3308
  c->r[31]=c->r[3]|c->r[3]; // 801A330C
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A3310
  c->r[4]=0u+0x00000001u; // 801A3314
  c->lr=0x801A331Cu; f_8017DC30(c); // 801A3318
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801A331C
  c->r[4]=0u+0x00000000u; // 801A3320
  c->lr=0x801A3328u; f_8017DC74(c); // 801A3324
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801A3328
  c->lr=0x801A3330u; f_8017DD30(c); // 801A332C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3330
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3334
  c->lr=c->r[0]; // 801A3338
  c->r[1]=c->r[1]+0x00000010u; // 801A333C
  return; // 801A3340
}

// fn_801A3344
void f_801A3344(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3344
  c->r[0]=c->lr; // 801A3348
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A334C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3350
  c->r[31]=c->r[3]|c->r[3]; // 801A3354
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A3358
  c->r[4]=0u+0x00000001u; // 801A335C
  c->lr=0x801A3364u; f_8017DC30(c); // 801A3360
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801A3364
  c->lr=0x801A336Cu; f_8017DD40(c); // 801A3368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A336C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3370
  c->lr=c->r[0]; // 801A3374
  c->r[1]=c->r[1]+0x00000010u; // 801A3378
  return; // 801A337C
}

// fn_801A3380
void f_801A3380(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3380
  c->r[0]=c->lr; // 801A3384
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A338C
  c->r[31]=c->r[3]|c->r[3]; // 801A3390
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A3394
  c->r[4]=0u+0x00000001u; // 801A3398
  c->lr=0x801A33A0u; f_8017DC74(c); // 801A339C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 801A33A0
  c->lr=0x801A33A8u; f_8017DD50(c); // 801A33A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A33A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A33AC
  c->lr=c->r[0]; // 801A33B0
  c->r[1]=c->r[1]+0x00000010u; // 801A33B4
  return; // 801A33B8
}

// fn_801A33BC
void f_801A33BC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33BC
  f_8017DD60(c); return; // 801A33C0
}

// fn_801A33C4
void f_801A33C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33C4
  f_8017DFBC(c); return; // 801A33C8
}

// fn_801A33CC
void f_801A33CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33CC
  f_8017DFB4(c); return; // 801A33D0
}

// fn_801A33D4
void f_801A33D4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33D4
  f_80137E64(c); return; // 801A33D8
}

// fn_801A33DC
void f_801A33DC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33DC
  f_8017DFC8(c); return; // 801A33E0
}

// fn_801A33E4
void f_801A33E4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33E4
  f_8017DFD0(c); return; // 801A33E8
}

// fn_801A33EC
void f_801A33EC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A33EC
  f_8017DE70(c); return; // 801A33F0
}

// fn_801A33F4
void f_801A33F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A33F4
  c->r[0]=c->lr; // 801A33F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A33FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3400
  c->r[31]=c->r[3]|c->r[3]; // 801A3404
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801A3408
  c->r[4]=0u+0x00000001u; // 801A340C
  c->lr=0x801A3414u; f_801A37A0(c); // 801A3410
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A3414
  c->lr=0x801A341Cu; f_801A37A8(c); // 801A3418
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A341C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3420
  c->lr=c->r[0]; // 801A3424
  c->r[1]=c->r[1]+0x00000010u; // 801A3428
  return; // 801A342C
}

// fn_801A3430
void f_801A3430(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3430
  c->r[0]=c->lr; // 801A3434
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3438
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A343C
  c->r[31]=c->r[3]|c->r[3]; // 801A3440
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801A3444
  c->r[4]=0u+0x00000000u; // 801A3448
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A344C
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801A3450
  c->ctr=c->r[12]; // 801A3454
  if (true) { c->lr=0x801A345Cu; dispatch(c,c->ctr); } // 801A3458
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A345C
  c->r[4]=0u+0x00000001u; // 801A3460
  c->lr=0x801A3468u; f_801A37A0(c); // 801A3464
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A3468
  c->lr=0x801A3470u; f_801A37B8(c); // 801A346C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3470
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3474
  c->lr=c->r[0]; // 801A3478
  c->r[1]=c->r[1]+0x00000010u; // 801A347C
  return; // 801A3480
}

// fn_801A3484
void f_801A3484(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3484
  c->r[0]=c->lr; // 801A3488
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A348C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3490
  c->r[31]=c->r[3]|c->r[3]; // 801A3494
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801A3498
  c->r[4]=0u+0x00000001u; // 801A349C
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A34A0
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 801A34A4
  c->ctr=c->r[12]; // 801A34A8
  if (true) { c->lr=0x801A34B0u; dispatch(c,c->ctr); } // 801A34AC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A34B0
  c->lr=0x801A34B8u; f_801A37C8(c); // 801A34B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A34B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A34BC
  c->lr=c->r[0]; // 801A34C0
  c->r[1]=c->r[1]+0x00000010u; // 801A34C4
  return; // 801A34C8
}

// fn_801A34CC
void f_801A34CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801A34CC
  f_801A37D8(c); return; // 801A34D0
}

// fn_801A34D4
void f_801A34D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A34D4
  c->r[0]=c->lr; // 801A34D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A34DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A34E0
  c->r[31]=c->r[3]|c->r[3]; // 801A34E4
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A34E8
  c->lr=0x801A34F0u; f_8013E20C(c); // 801A34EC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A34F0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A34F4
  c->r[12]=R32(c->r[12]+0x00000050u); // 801A34F8
  c->ctr=c->r[12]; // 801A34FC
  if (true) { c->lr=0x801A3504u; dispatch(c,c->ctr); } // 801A3500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3504
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3508
  c->lr=c->r[0]; // 801A350C
  c->r[1]=c->r[1]+0x00000010u; // 801A3510
  return; // 801A3514
}

// fn_801A3518
void f_801A3518(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A3518
  f_8013E258(c); return; // 801A351C
}

// fn_801A3520
void f_801A3520(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3520
  c->r[0]=c->lr; // 801A3524
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3528
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A352C
  c->r[31]=c->r[3]|c->r[3]; // 801A3530
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A3534
  c->lr=0x801A353Cu; f_8017DE7C(c); // 801A3538
  c->r[4]=c->r[3]|c->r[3]; // 801A353C
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A3540
  c->lr=0x801A3548u; f_801A357C(c); // 801A3544
  c->r[3]=R32(c->r[31]+0x000000C4u); // 801A3548
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A354C
  c->r[12]=R32(c->r[12]+0x00000054u); // 801A3550
  c->ctr=c->r[12]; // 801A3554
  if (true) { c->lr=0x801A355Cu; dispatch(c,c->ctr); } // 801A3558
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A355C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3560
  c->lr=c->r[0]; // 801A3564
  c->r[1]=c->r[1]+0x00000010u; // 801A3568
  return; // 801A356C
}

// fn_801A3570
void f_801A3570(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 801A3570
  W32(c->r[3]+0xFFFFD11Cu,c->r[4]); // 801A3574
  return; // 801A3578
}

// fn_801A357C
void f_801A357C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000CCu,c->r[4]); // 801A357C
  return; // 801A3580
}

// fn_801A3584
void f_801A3584(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3584
  c->r[0]=c->lr; // 801A3588
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A358C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3590
  c->r[31]=c->r[3]|c->r[3]; // 801A3594
  c->lr=0x801A359Cu; f_8012FAAC(c); // 801A3598
  c->r[3]=0u+0x80470000u; // 801A359C
  c->r[0]=c->r[3]+0x00000458u; // 801A35A0
  W32(c->r[31]+0x00000058u,c->r[0]); // 801A35A4
  c->r[0]=0u+0x00000000u; // 801A35A8
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801A35AC
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801A35B0
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801A35B4
  c->r[3]=c->r[31]|c->r[31]; // 801A35B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A35BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A35C0
  c->lr=c->r[0]; // 801A35C4
  c->r[1]=c->r[1]+0x00000010u; // 801A35C8
  return; // 801A35CC
}

// fn_801A35D0
void f_801A35D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A35D0
  c->r[0]=c->lr; // 801A35D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A35D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A35DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A35E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A35E4
  c->r[29]=c->r[3]|c->r[3]; // 801A35E8
  c->lr=0x801A35F0u; f_80056B5C(c); // 801A35EC
  c->r[30]=c->r[3]|c->r[3]; // 801A35F0
  c->lr=0x801A35F8u; f_801F1340(c); // 801A35F4
  c->lr=0x801A35FCu; f_80056B54(c); // 801A35F8
  c->r[3]=0u+0x00000B28u; // 801A35FC
  c->lr=0x801A3604u; f_80047B64(c); // 801A3600
  c->r[31]=c->r[3]|c->r[3]; // 801A3604
  cmps(c,0,(int32_t)c->r[3],0); // 801A3608
  if (crb(c,2)) { goto L_801A3614; } // 801A360C
  c->lr=0x801A3614u; f_80116858(c); // 801A3610
L_801A3614:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 801A3614
  c->r[3]=c->r[30]|c->r[30]; // 801A3618
  c->lr=0x801A3620u; f_80056B54(c); // 801A361C
  c->lr=0x801A3624u; f_80114E10(c); // 801A3620
  c->lr=0x801A3628u; f_801164A8(c); // 801A3624
  c->r[4]=c->r[3]|c->r[3]; // 801A3628
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801A362C
  c->lr=0x801A3634u; f_80114AE0(c); // 801A3630
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801A3634
  c->r[4]=R32(c->r[29]+0x000000C8u); // 801A3638
  c->lr=0x801A3640u; f_80114AD8(c); // 801A363C
  c->r[3]=R32(c->r[29]+0x000000C0u); // 801A3640
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A3644
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801A3648
  c->ctr=c->r[12]; // 801A364C
  if (true) { c->lr=0x801A3654u; dispatch(c,c->ctr); } // 801A3650
  c->lr=0x801A3658u; f_80056B5C(c); // 801A3654
  c->r[30]=c->r[3]|c->r[3]; // 801A3658
  c->lr=0x801A3660u; f_801F1340(c); // 801A365C
  c->lr=0x801A3664u; f_80056B54(c); // 801A3660
  c->r[3]=0u+0x00003200u; // 801A3664
  c->lr=0x801A366Cu; f_80047B64(c); // 801A3668
  c->r[31]=c->r[3]|c->r[3]; // 801A366C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3670
  if (crb(c,2)) { goto L_801A367C; } // 801A3674
  c->lr=0x801A367Cu; f_8017C130(c); // 801A3678
L_801A367C:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 801A367C
  c->r[3]=c->r[30]|c->r[30]; // 801A3680
  c->lr=0x801A3688u; f_80056B54(c); // 801A3684
  c->r[3]=R32(c->r[29]+0x000000C4u); // 801A3688
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A368C
  c->r[12]=R32(c->r[12]+0x00000044u); // 801A3690
  c->ctr=c->r[12]; // 801A3694
  if (true) { c->lr=0x801A369Cu; dispatch(c,c->ctr); } // 801A3698
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A369C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A36A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A36A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A36A8
  c->lr=c->r[0]; // 801A36AC
  c->r[1]=c->r[1]+0x00000020u; // 801A36B0
  return; // 801A36B4
}

// fn_801A36B8
void f_801A36B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A36B8
  c->r[0]=c->lr; // 801A36BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A36C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A36C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A36C8
  c->r[30]=c->r[3]|c->r[3]; // 801A36CC
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A36D0
  cmps(c,0,(int32_t)c->r[3],0); // 801A36D4
  if (crb(c,2)) { goto L_801A372C; } // 801A36D8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A36DC
  c->r[12]=R32(c->r[12]+0x00000060u); // 801A36E0
  c->ctr=c->r[12]; // 801A36E4
  if (true) { c->lr=0x801A36ECu; dispatch(c,c->ctr); } // 801A36E8
  c->lr=0x801A36F0u; f_80056B5C(c); // 801A36EC
  c->r[31]=c->r[3]|c->r[3]; // 801A36F0
  c->lr=0x801A36F8u; f_801F1340(c); // 801A36F4
  c->lr=0x801A36FCu; f_80056B54(c); // 801A36F8
  c->r[3]=R32(c->r[30]+0x000000C0u); // 801A36FC
  cmps(c,0,(int32_t)c->r[3],0); // 801A3700
  if (crb(c,2)) { goto L_801A371C; } // 801A3704
  c->r[4]=0u+0x00000001u; // 801A3708
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A370C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A3710
  c->ctr=c->r[12]; // 801A3714
  if (true) { c->lr=0x801A371Cu; dispatch(c,c->ctr); } // 801A3718
L_801A371C:;
  c->r[3]=c->r[31]|c->r[31]; // 801A371C
  c->lr=0x801A3724u; f_80056B54(c); // 801A3720
  c->r[0]=0u+0x00000000u; // 801A3724
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801A3728
L_801A372C:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A372C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3730
  if (crb(c,2)) { goto L_801A3788; } // 801A3734
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A3738
  c->r[12]=R32(c->r[12]+0x00000048u); // 801A373C
  c->ctr=c->r[12]; // 801A3740
  if (true) { c->lr=0x801A3748u; dispatch(c,c->ctr); } // 801A3744
  c->lr=0x801A374Cu; f_80056B5C(c); // 801A3748
  c->r[31]=c->r[3]|c->r[3]; // 801A374C
  c->lr=0x801A3754u; f_801F1340(c); // 801A3750
  c->lr=0x801A3758u; f_80056B54(c); // 801A3754
  c->r[3]=R32(c->r[30]+0x000000C4u); // 801A3758
  cmps(c,0,(int32_t)c->r[3],0); // 801A375C
  if (crb(c,2)) { goto L_801A3778; } // 801A3760
  c->r[4]=0u+0x00000001u; // 801A3764
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A3768
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A376C
  c->ctr=c->r[12]; // 801A3770
  if (true) { c->lr=0x801A3778u; dispatch(c,c->ctr); } // 801A3774
L_801A3778:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3778
  c->lr=0x801A3780u; f_80056B54(c); // 801A377C
  c->r[0]=0u+0x00000000u; // 801A3780
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801A3784
L_801A3788:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3788
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A378C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3790
  c->lr=c->r[0]; // 801A3794
  c->r[1]=c->r[1]+0x00000010u; // 801A3798
  return; // 801A379C
}

// fn_801A37A0
void f_801A37A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A37A0
  f_8012F910(c); return; // 801A37A4
}

// fn_801A37A8
void f_801A37A8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A37A8
  c->r[4]=0u+0x00000000u; // 801A37AC
  c->r[5]=0u+0x00000006u; // 801A37B0
  f_8012E640(c); return; // 801A37B4
}

// fn_801A37B8
void f_801A37B8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A37B8
  c->r[4]=0u+0x00000002u; // 801A37BC
  c->r[5]=0u+0x00000006u; // 801A37C0
  f_8012E640(c); return; // 801A37C4
}

// fn_801A37C8
void f_801A37C8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A37C8
  c->r[4]=0u+0x00000001u; // 801A37CC
  c->r[5]=0u+0x00000006u; // 801A37D0
  f_8012E640(c); return; // 801A37D4
}

// fn_801A37D8
void f_801A37D8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A37D8
  c->r[4]=0u+0x00000000u; // 801A37DC
  f_8012ECA4(c); return; // 801A37E0
}

// fn_801A37E4
void f_801A37E4(Ctx* __restrict c) {
  W32(c->r[3]+0x000000C8u,c->r[4]); // 801A37E4
  return; // 801A37E8
}

// fn_801A37EC
void f_801A37EC(Ctx* __restrict c) {
  return; // 801A37EC
}

// fn_801A37F0
void f_801A37F0(Ctx* __restrict c) {
  return; // 801A37F0
}

// fn_801A37F4
void f_801A37F4(Ctx* __restrict c) {
  return; // 801A37F4
}

// fn_801A37F8
void f_801A37F8(Ctx* __restrict c) {
  return; // 801A37F8
}

// fn_801A37FC
void f_801A37FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A37FC
  c->r[0]=c->lr; // 801A3800
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A3804
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A3808
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A380C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A3810
  c->r[29]=c->r[3]|c->r[3]; // 801A3814
  c->r[4]=0u+0x80470000u; // 801A3818
  c->r[0]=c->r[4]+0x000004A8u; // 801A381C
  W32(c->r[3]+0x00000254u,c->r[0]); // 801A3820
  c->r[3]=c->r[3]+0x00000004u; // 801A3824
  c->lr=0x801A382Cu; f_8004CDFC(c); // 801A3828
  c->r[3]=c->r[29]+0x000001E4u; // 801A382C
  c->lr=0x801A3834u; f_80047C5C(c); // 801A3830
  c->r[3]=c->r[29]+0x000001E8u; // 801A3834
  c->lr=0x801A383Cu; f_800592DC(c); // 801A3838
  c->r[3]=c->r[29]+0x000001F0u; // 801A383C
  c->lr=0x801A3844u; f_800592DC(c); // 801A3840
  c->r[3]=c->r[29]+0x000001F8u; // 801A3844
  c->lr=0x801A384Cu; f_800592DC(c); // 801A3848
  c->r[31]=c->r[29]+0x00000200u; // 801A384C
  c->r[30]=c->r[29]+0x00000230u; // 801A3850
L_801A3854:;
  c->r[3]=c->r[31]|c->r[31]; // 801A3854
  c->lr=0x801A385Cu; f_8004B0A4(c); // 801A3858
  c->r[31]=c->r[31]+0x0000000Cu; // 801A385C
  cmpu(c,0,c->r[31],c->r[30]); // 801A3860
  if (crb(c,0)) { IRQCHK(c); goto L_801A3854; } // 801A3864
  c->r[31]=c->r[29]+0x00000250u; // 801A3868
L_801A386C:;
  c->r[3]=c->r[30]|c->r[30]; // 801A386C
  c->lr=0x801A3874u; f_800592DC(c); // 801A3870
  c->r[30]=c->r[30]+0x00000008u; // 801A3874
  cmpu(c,0,c->r[30],c->r[31]); // 801A3878
  if (crb(c,0)) { IRQCHK(c); goto L_801A386C; } // 801A387C
  c->r[0]=0u+0x00000000u; // 801A3880
  W32(c->r[29]+0x00000000u,c->r[0]); // 801A3884
  c->r[3]=c->r[29]|c->r[29]; // 801A3888
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A388C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A3890
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A3894
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A3898
  c->lr=c->r[0]; // 801A389C
  c->r[1]=c->r[1]+0x00000020u; // 801A38A0
  return; // 801A38A4
}

// fn_801A38A8
void f_801A38A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A38A8
  c->r[0]=c->lr; // 801A38AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A38B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A38B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A38B8
  c->r[30]=c->r[3]|c->r[3]; // 801A38BC
  c->r[31]=c->r[4]|c->r[4]; // 801A38C0
  cmps(c,0,(int32_t)c->r[3],0); // 801A38C4
  if (crb(c,2)) { goto L_801A3914; } // 801A38C8
  c->r[4]=0u+0x80470000u; // 801A38CC
  c->r[0]=c->r[4]+0x000004A8u; // 801A38D0
  W32(c->r[3]+0x00000254u,c->r[0]); // 801A38D4
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A38D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801A38DC
  c->ctr=c->r[12]; // 801A38E0
  if (true) { c->lr=0x801A38E8u; dispatch(c,c->ctr); } // 801A38E4
  c->r[3]=c->r[30]+0x000001E4u; // 801A38E8
  c->r[4]=0u+0xFFFFFFFFu; // 801A38EC
  c->lr=0x801A38F4u; f_80047BD4(c); // 801A38F0
  c->r[3]=c->r[30]+0x00000004u; // 801A38F4
  c->r[4]=0u+0xFFFFFFFFu; // 801A38F8
  c->lr=0x801A3900u; f_8004CE58(c); // 801A38FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A3900
  cmps(c,0,(int32_t)c->r[0],0); // 801A3904
  if (!crb(c,1)) { goto L_801A3914; } // 801A3908
  c->r[3]=c->r[30]|c->r[30]; // 801A390C
  c->lr=0x801A3914u; f_80047B20(c); // 801A3910
L_801A3914:;
  c->r[3]=c->r[30]|c->r[30]; // 801A3914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3918
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A391C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3920
  c->lr=c->r[0]; // 801A3924
  c->r[1]=c->r[1]+0x00000010u; // 801A3928
  return; // 801A392C
}

// fn_801A3930
void f_801A3930(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3930
  c->r[0]=c->lr; // 801A3934
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A393C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A3940
  c->r[30]=c->r[3]|c->r[3]; // 801A3944
  c->r[31]=c->r[4]|c->r[4]; // 801A3948
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A394C
  c->r[12]=R32(c->r[12]+0x00000010u); // 801A3950
  c->ctr=c->r[12]; // 801A3954
  if (true) { c->lr=0x801A395Cu; dispatch(c,c->ctr); } // 801A3958
  cmps(c,0,(int32_t)c->r[3],0); // 801A395C
  if (!crb(c,2)) { goto L_801A39F4; } // 801A3960
  c->r[3]=c->r[30]|c->r[30]; // 801A3964
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A3968
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801A396C
  c->ctr=c->r[12]; // 801A3970
  if (true) { c->lr=0x801A3978u; dispatch(c,c->ctr); } // 801A3974
  c->r[3]=c->r[30]+0x00000004u; // 801A3978
  c->r[4]=0u+0x00000003u; // 801A397C
  c->r[5]=0u+0x00000001u; // 801A3980
  c->r[6]=0u+0x00000000u; // 801A3984
  c->r[7]=c->r[31]|c->r[31]; // 801A3988
  c->r[8]=0u+0x00000000u; // 801A398C
  c->lr=0x801A3994u; f_8004CFB0(c); // 801A3990
  c->r[3]=c->r[30]+0x00000004u; // 801A3994
  c->r[4]=0u+0x00000001u; // 801A3998
  c->lr=0x801A39A0u; f_8004D750(c); // 801A399C
  c->r[3]=c->r[30]+0x00000004u; // 801A39A0
  c->r[4]=0u+0x00000000u; // 801A39A4
  c->lr=0x801A39ACu; f_8004D7F8(c); // 801A39A8
  c->r[3]=c->r[30]+0x00000004u; // 801A39AC
  c->r[4]=0u+0x00000002u; // 801A39B0
  c->lr=0x801A39B8u; f_8004D740(c); // 801A39B4
  c->r[3]=0u+0x00000000u; // 801A39B8
  c->lr=0x801A39C0u; f_80173FB0(c); // 801A39BC
  c->lr=0x801A39C4u; f_8017409C(c); // 801A39C0
  c->r[4]=c->r[3]|c->r[3]; // 801A39C4
  c->r[3]=c->r[30]+0x000000B8u; // 801A39C8
  c->lr=0x801A39D0u; f_8004CDB4(c); // 801A39CC
  c->r[3]=c->r[30]|c->r[30]; // 801A39D0
  c->r[4]=0u+0x00000000u; // 801A39D4
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A39D8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801A39DC
  c->ctr=c->r[12]; // 801A39E0
  if (true) { c->lr=0x801A39E8u; dispatch(c,c->ctr); } // 801A39E4
  c->r[0]=R32(c->r[30]+0x00000000u); // 801A39E8
  c->r[0]=c->r[0]|0x00000002u; // 801A39EC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801A39F0
L_801A39F4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A39F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A39F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A39FC
  c->lr=c->r[0]; // 801A3A00
  c->r[1]=c->r[1]+0x00000010u; // 801A3A04
  return; // 801A3A08
}

// fn_801A3A0C
void f_801A3A0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3A0C
  c->r[0]=c->lr; // 801A3A10
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3A14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3A18
  c->r[31]=c->r[3]|c->r[3]; // 801A3A1C
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A3A20
  c->r[12]=R32(c->r[12]+0x00000010u); // 801A3A24
  c->ctr=c->r[12]; // 801A3A28
  if (true) { c->lr=0x801A3A30u; dispatch(c,c->ctr); } // 801A3A2C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3A30
  if (crb(c,2)) { goto L_801A3A40; } // 801A3A34
  c->r[3]=c->r[31]+0x00000004u; // 801A3A38
  c->lr=0x801A3A40u; f_8004D19C(c); // 801A3A3C
L_801A3A40:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3A40
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3A44
  c->lr=c->r[0]; // 801A3A48
  c->r[1]=c->r[1]+0x00000010u; // 801A3A4C
  return; // 801A3A50
}

// fn_801A3A54
void f_801A3A54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3A54
  c->r[0]=c->lr; // 801A3A58
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A3A5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A3A60
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A3A64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A3A68
  W32(c->r[1]+0x00000010u,c->r[28]); // 801A3A6C
  c->r[28]=c->r[3]|c->r[3]; // 801A3A70
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A3A74
  c->r[12]=R32(c->r[12]+0x00000010u); // 801A3A78
  c->ctr=c->r[12]; // 801A3A7C
  if (true) { c->lr=0x801A3A84u; dispatch(c,c->ctr); } // 801A3A80
  cmps(c,0,(int32_t)c->r[3],0); // 801A3A84
  if (crb(c,2)) { goto L_801A3B4C; } // 801A3A88
  c->r[3]=c->r[28]|c->r[28]; // 801A3A8C
  c->r[12]=R32(c->r[3]+0x00000254u); // 801A3A90
  c->r[12]=R32(c->r[12]+0x00000024u); // 801A3A94
  c->ctr=c->r[12]; // 801A3A98
  if (true) { c->lr=0x801A3AA0u; dispatch(c,c->ctr); } // 801A3A9C
  cmps(c,0,(int32_t)c->r[3],0); // 801A3AA0
  if (crb(c,2)) { goto L_801A3B4C; } // 801A3AA4
  c->r[29]=0u+0x00000000u; // 801A3AA8
  c->r[31]=c->r[28]+0x00000200u; // 801A3AAC
  c->r[30]=c->r[28]+0x00000230u; // 801A3AB0
L_801A3AB4:;
  c->r[3]=c->r[28]+0x00000004u; // 801A3AB4
  c->r[4]=0u+0x00000000u; // 801A3AB8
  c->r[5]=c->r[29]|c->r[29]; // 801A3ABC
  c->r[6]=c->r[31]|c->r[31]; // 801A3AC0
  c->lr=0x801A3AC8u; f_8004D384(c); // 801A3AC4
  c->r[3]=c->r[28]+0x00000004u; // 801A3AC8
  c->r[4]=0u+0x00000000u; // 801A3ACC
  c->r[5]=c->r[29]|c->r[29]; // 801A3AD0
  c->r[6]=c->r[30]|c->r[30]; // 801A3AD4
  c->r[7]=0u+0xFFFFFFFFu; // 801A3AD8
  c->lr=0x801A3AE0u; f_8004D650(c); // 801A3ADC
  c->r[3]=c->r[28]+0x00000004u; // 801A3AE0
  c->r[4]=0u+0x00000000u; // 801A3AE4
  c->r[5]=c->r[29]|c->r[29]; // 801A3AE8
  c->r[6]=c->r[28]+0x000001E4u; // 801A3AEC
  c->lr=0x801A3AF4u; f_8004D508(c); // 801A3AF0
  c->r[31]=c->r[31]+0x0000000Cu; // 801A3AF4
  c->r[30]=c->r[30]+0x00000008u; // 801A3AF8
  c->r[29]=c->r[29]+0x00000001u; // 801A3AFC
  cmps(c,0,(int32_t)c->r[29],4); // 801A3B00
  if (crb(c,0)) { IRQCHK(c); goto L_801A3AB4; } // 801A3B04
  c->r[3]=c->r[28]+0x00000004u; // 801A3B08
  {uint32_t ea=c->r[2]+0xFFFF9280u; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3B0C
  {uint32_t ea=c->r[28]+0x000001F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3B10
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 801A3B14
  {uint32_t ea=c->r[28]+0x000001F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3B18
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 801A3B1C
  {uint32_t ea=c->r[28]+0x00000250u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A3B20
  c->lr=0x801A3B28u; f_80070424(c); // 801A3B24
  c->lr=0x801A3B2Cu; f_8005D98C(c); // 801A3B28
  {uint32_t ea=c->r[28]+0x000001F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3B2C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801A3B30
  c->r[3]=c->r[28]+0x00000004u; // 801A3B34
  {uint32_t ea=c->r[28]+0x000001FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3B38
  {uint32_t ea=c->r[2]+0xFFFF9284u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A3B3C
  c->lr=0x801A3B44u; f_80070434(c); // 801A3B40
  c->r[3]=c->r[28]+0x00000004u; // 801A3B44
  c->lr=0x801A3B4Cu; f_8004E1AC(c); // 801A3B48
L_801A3B4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A3B4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A3B50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A3B54
  c->r[28]=R32(c->r[1]+0x00000010u); // 801A3B58
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A3B5C
  c->lr=c->r[0]; // 801A3B60
  c->r[1]=c->r[1]+0x00000020u; // 801A3B64
  return; // 801A3B68
}

// fn_801A3B6C
void f_801A3B6C(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],0); // 801A3B6C
  if (crb(c,2)) { goto L_801A3B84; } // 801A3B70
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A3B74
  c->r[0]=c->r[0]|0x00000001u; // 801A3B78
  W32(c->r[3]+0x00000000u,c->r[0]); // 801A3B7C
  goto L_801A3B90; // 801A3B80
L_801A3B84:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801A3B84
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801A3B88
  W32(c->r[3]+0x00000000u,c->r[0]); // 801A3B8C
L_801A3B90:;
  c->r[3]=c->r[3]+0x00000004u; // 801A3B90
  f_8004D73C(c); return; // 801A3B94
}

// fn_801A3B98
void f_801A3B98(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3B98
  c->r[0]=c->lr; // 801A3B9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A3BA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A3BA4
  c->r[31]=c->r[3]|c->r[3]; // 801A3BA8
  c->r[3]=c->r[1]+0x00000008u; // 801A3BAC
  c->lr=0x801A3BB4u; f_800592DC(c); // 801A3BB0
  c->r[3]=c->r[1]+0x00000008u; // 801A3BB4
  c->lr=0x801A3BBCu; f_8005D29C(c); // 801A3BB8
  {uint32_t ea=c->r[2]+0xFFFF9288u; c->f[7]=c->ps1[7]=RF32(ea);} // 801A3BBC
  {uint32_t ea=c->r[31]+0x00000250u; WF32(ea,c->f[7]);} // 801A3BC0
  {uint32_t ea=c->r[2]+0xFFFF928Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3BC4
  {uint32_t ea=c->r[31]+0x000001E8u; WF32(ea,c->f[2]);} // 801A3BC8
  {uint32_t ea=c->r[2]+0xFFFF9290u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3BCC
  {uint32_t ea=c->r[31]+0x000001ECu; WF32(ea,c->f[1]);} // 801A3BD0
  {uint32_t ea=c->r[2]+0xFFFF9294u; c->f[6]=c->ps1[6]=RF32(ea);} // 801A3BD4
  {uint32_t ea=c->r[31]+0x000001F0u; WF32(ea,c->f[6]);} // 801A3BD8
  {uint32_t ea=c->r[2]+0xFFFF9298u; c->f[5]=c->ps1[5]=RF32(ea);} // 801A3BDC
  {uint32_t ea=c->r[31]+0x000001F4u; WF32(ea,c->f[5]);} // 801A3BE0
  {uint32_t ea=c->r[2]+0xFFFF9284u; c->f[4]=c->ps1[4]=RF32(ea);} // 801A3BE4
  {uint32_t ea=c->r[31]+0x000001F8u; WF32(ea,c->f[4]);} // 801A3BE8
  {uint32_t ea=c->r[31]+0x000001FCu; WF32(ea,c->f[4]);} // 801A3BEC
  c->r[0]=0u+0x000000FFu; // 801A3BF0
  W8(c->r[31]+0x000001E4u,c->r[0]); // 801A3BF4
  W8(c->r[31]+0x000001E5u,c->r[0]); // 801A3BF8
  W8(c->r[31]+0x000001E6u,c->r[0]); // 801A3BFC
  c->r[0]=0u+0x00000080u; // 801A3C00
  W8(c->r[31]+0x000001E7u,c->r[0]); // 801A3C04
  {uint32_t ea=c->r[31]+0x00000230u; WF32(ea,c->f[7]);} // 801A3C08
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3C0C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801A3C10
  {uint32_t ea=c->r[31]+0x00000234u; WF32(ea,c->f[0]);} // 801A3C14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3C18
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801A3C1C
  {uint32_t ea=c->r[31]+0x00000238u; WF32(ea,c->f[0]);} // 801A3C20
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3C24
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[1]); // 801A3C28
  {uint32_t ea=c->r[31]+0x0000023Cu; WF32(ea,c->f[0]);} // 801A3C2C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801A3C30
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 801A3C34
  {uint32_t ea=c->r[31]+0x00000240u; WF32(ea,c->f[0]);} // 801A3C38
  {uint32_t ea=c->r[31]+0x00000244u; WF32(ea,c->f[7]);} // 801A3C3C
  {uint32_t ea=c->r[31]+0x00000248u; WF32(ea,c->f[7]);} // 801A3C40
  {uint32_t ea=c->r[31]+0x0000024Cu; WF32(ea,c->f[7]);} // 801A3C44
  c->f[0]=-c->f[6]; // 801A3C48
  {uint32_t ea=c->r[2]+0xFFFF9280u; c->f[3]=c->ps1[3]=RF32(ea);} // 801A3C4C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801A3C50
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 801A3C54
  {uint32_t ea=c->r[31]+0x00000200u; WF32(ea,c->f[2]);} // 801A3C58
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[5]); // 801A3C5C
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[0]); // 801A3C60
  {uint32_t ea=c->r[31]+0x00000204u; WF32(ea,c->f[1]);} // 801A3C64
  {uint32_t ea=c->r[31]+0x00000208u; WF32(ea,c->f[7]);} // 801A3C68
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[6]); // 801A3C6C
  c->f[0]=c->ps1[0]=S(c->f[4]+c->f[0]); // 801A3C70
  {uint32_t ea=c->r[31]+0x0000020Cu; WF32(ea,c->f[0]);} // 801A3C74
  {uint32_t ea=c->r[31]+0x00000210u; WF32(ea,c->f[1]);} // 801A3C78
  {uint32_t ea=c->r[31]+0x00000214u; WF32(ea,c->f[7]);} // 801A3C7C
  {uint32_t ea=c->r[31]+0x00000218u; WF32(ea,c->f[0]);} // 801A3C80
  c->f[0]=-c->f[5]; // 801A3C84
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801A3C88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 801A3C8C
  {uint32_t ea=c->r[31]+0x0000021Cu; WF32(ea,c->f[0]);} // 801A3C90
  {uint32_t ea=c->r[31]+0x00000220u; WF32(ea,c->f[7]);} // 801A3C94
  {uint32_t ea=c->r[31]+0x00000224u; WF32(ea,c->f[2]);} // 801A3C98
  {uint32_t ea=c->r[31]+0x00000228u; WF32(ea,c->f[0]);} // 801A3C9C
  {uint32_t ea=c->r[31]+0x0000022Cu; WF32(ea,c->f[7]);} // 801A3CA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A3CA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A3CA8
  c->lr=c->r[0]; // 801A3CAC
  c->r[1]=c->r[1]+0x00000020u; // 801A3CB0
  return; // 801A3CB4
}

// fn_801A3CB8
void f_801A3CB8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3CB8
  c->r[0]=c->lr; // 801A3CBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A3CC0
  c->r[11]=c->r[1]+0x00000020u; // 801A3CC4
  c->lr=0x801A3CCCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A3CC8
  c->r[27]=c->r[3]|c->r[3]; // 801A3CCC
  c->lr=0x801A3CD4u; f_8011B41C(c); // 801A3CD0
  c->r[4]=0u+0x00000019u; // 801A3CD4
  c->lr=0x801A3CDCu; f_8011B814(c); // 801A3CD8
  c->r[28]=c->r[3]|c->r[3]; // 801A3CDC
  c->r[3]=c->r[27]|c->r[27]; // 801A3CE0
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3CE4
  c->f[2]=c->f[1]; // 801A3CE8
  c->lr=0x801A3CF0u; f_801313A0(c); // 801A3CEC
  c->r[3]=c->r[27]|c->r[27]; // 801A3CF0
  {uint32_t ea=c->r[2]+0xFFFF92A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3CF4
  c->f[2]=c->f[1]; // 801A3CF8
  c->lr=0x801A3D00u; f_801313AC(c); // 801A3CFC
  c->r[3]=c->r[28]|c->r[28]; // 801A3D00
  c->r[4]=0u+0x0000000Au; // 801A3D04
  c->lr=0x801A3D0Cu; f_801196BC(c); // 801A3D08
  c->r[29]=c->r[3]|c->r[3]; // 801A3D0C
  c->r[3]=c->r[28]|c->r[28]; // 801A3D10
  c->r[4]=0u+0x0000000Au; // 801A3D14
  c->lr=0x801A3D1Cu; f_80119694(c); // 801A3D18
  c->r[30]=c->r[3]|c->r[3]; // 801A3D1C
  c->r[3]=c->r[28]|c->r[28]; // 801A3D20
  c->r[4]=0u+0x0000000Au; // 801A3D24
  c->lr=0x801A3D2Cu; f_8011966C(c); // 801A3D28
  c->r[31]=c->r[3]|c->r[3]; // 801A3D2C
  c->r[3]=c->r[28]|c->r[28]; // 801A3D30
  c->r[4]=0u+0x0000000Au; // 801A3D34
  c->lr=0x801A3D3Cu; f_80119644(c); // 801A3D38
  c->r[0]=c->r[3]|c->r[3]; // 801A3D3C
  c->r[3]=c->r[27]|c->r[27]; // 801A3D40
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801A3D44
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801A3D48
  c->r[6]=rotl(c->r[30],0)&0x000000FFu; // 801A3D4C
  c->r[7]=rotl(c->r[29],0)&0x000000FFu; // 801A3D50
  c->lr=0x801A3D58u; f_801313B8(c); // 801A3D54
  c->r[3]=c->r[27]|c->r[27]; // 801A3D58
  c->r[4]=c->r[13]+0xFFFF9A10u; // 801A3D5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A3D60
  c->lr=0x801A3D68u; f_801313D4(c); // 801A3D64
  c->r[3]=c->r[27]|c->r[27]; // 801A3D68
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3D6C
  {uint32_t ea=c->r[2]+0xFFFF92ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3D70
  c->lr=0x801A3D78u; f_80131C2C(c); // 801A3D74
  c->r[3]=c->r[27]|c->r[27]; // 801A3D78
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3D7C
  {uint32_t ea=c->r[2]+0xFFFF92ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3D80
  c->lr=0x801A3D88u; f_80131C48(c); // 801A3D84
  c->r[3]=c->r[27]|c->r[27]; // 801A3D88
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3D8C
  c->lr=0x801A3D94u; f_80131C64(c); // 801A3D90
  c->r[3]=c->r[27]|c->r[27]; // 801A3D94
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3D98
  c->lr=0x801A3DA0u; f_80131C6C(c); // 801A3D9C
  c->r[3]=c->r[27]|c->r[27]; // 801A3DA0
  c->r[4]=0u+0x00000001u; // 801A3DA4
  c->lr=0x801A3DACu; f_80131B68(c); // 801A3DA8
  c->r[3]=c->r[27]+0x00003158u; // 801A3DAC
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3DB0
  c->lr=0x801A3DB8u; f_80110580(c); // 801A3DB4
  c->r[3]=c->r[27]+0x000031A0u; // 801A3DB8
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3DBC
  c->lr=0x801A3DC4u; f_80110580(c); // 801A3DC0
  c->r[3]=c->r[27]+0x00003158u; // 801A3DC4
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3DC8
  c->lr=0x801A3DD0u; f_80110588(c); // 801A3DCC
  c->r[3]=c->r[27]+0x000031A0u; // 801A3DD0
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3DD4
  c->lr=0x801A3DDCu; f_80110588(c); // 801A3DD8
  c->r[11]=c->r[1]+0x00000020u; // 801A3DDC
  c->lr=0x801A3DE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A3DE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A3DE4
  c->lr=c->r[0]; // 801A3DE8
  c->r[1]=c->r[1]+0x00000020u; // 801A3DEC
  return; // 801A3DF0
}

// fn_801A3DF4
void f_801A3DF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3DF4
  c->r[0]=c->lr; // 801A3DF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A3DFC
  c->r[11]=c->r[1]+0x00000020u; // 801A3E00
  c->lr=0x801A3E08u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A3E04
  c->r[27]=c->r[3]|c->r[3]; // 801A3E08
  c->lr=0x801A3E10u; f_8011B41C(c); // 801A3E0C
  c->r[4]=0u+0x00000019u; // 801A3E10
  c->lr=0x801A3E18u; f_8011B814(c); // 801A3E14
  c->r[28]=c->r[3]|c->r[3]; // 801A3E18
  c->r[3]=c->r[27]|c->r[27]; // 801A3E1C
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3E20
  c->f[2]=c->f[1]; // 801A3E24
  c->lr=0x801A3E2Cu; f_801313A0(c); // 801A3E28
  c->r[3]=c->r[27]|c->r[27]; // 801A3E2C
  {uint32_t ea=c->r[2]+0xFFFF92A4u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3E30
  c->f[2]=c->f[1]; // 801A3E34
  c->lr=0x801A3E3Cu; f_801313AC(c); // 801A3E38
  c->r[3]=c->r[28]|c->r[28]; // 801A3E3C
  c->r[4]=0u+0x00000000u; // 801A3E40
  c->lr=0x801A3E48u; f_801196BC(c); // 801A3E44
  c->r[29]=c->r[3]|c->r[3]; // 801A3E48
  c->r[3]=c->r[28]|c->r[28]; // 801A3E4C
  c->r[4]=0u+0x00000000u; // 801A3E50
  c->lr=0x801A3E58u; f_80119694(c); // 801A3E54
  c->r[30]=c->r[3]|c->r[3]; // 801A3E58
  c->r[3]=c->r[28]|c->r[28]; // 801A3E5C
  c->r[4]=0u+0x00000000u; // 801A3E60
  c->lr=0x801A3E68u; f_8011966C(c); // 801A3E64
  c->r[31]=c->r[3]|c->r[3]; // 801A3E68
  c->r[3]=c->r[28]|c->r[28]; // 801A3E6C
  c->r[4]=0u+0x00000000u; // 801A3E70
  c->lr=0x801A3E78u; f_80119644(c); // 801A3E74
  c->r[0]=c->r[3]|c->r[3]; // 801A3E78
  c->r[3]=c->r[27]|c->r[27]; // 801A3E7C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801A3E80
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801A3E84
  c->r[6]=rotl(c->r[30],0)&0x000000FFu; // 801A3E88
  c->r[7]=rotl(c->r[29],0)&0x000000FFu; // 801A3E8C
  c->lr=0x801A3E94u; f_801313B8(c); // 801A3E90
  c->r[3]=c->r[27]|c->r[27]; // 801A3E94
  c->r[4]=c->r[13]+0xFFFF9A10u; // 801A3E98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801A3E9C
  c->lr=0x801A3EA4u; f_801313D4(c); // 801A3EA0
  c->r[3]=c->r[27]|c->r[27]; // 801A3EA4
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3EA8
  {uint32_t ea=c->r[2]+0xFFFF92ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3EAC
  c->lr=0x801A3EB4u; f_80131C2C(c); // 801A3EB0
  c->r[3]=c->r[27]|c->r[27]; // 801A3EB4
  {uint32_t ea=c->r[2]+0xFFFF92A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3EB8
  {uint32_t ea=c->r[2]+0xFFFF92ACu; c->f[2]=c->ps1[2]=RF32(ea);} // 801A3EBC
  c->lr=0x801A3EC4u; f_80131C48(c); // 801A3EC0
  c->r[3]=c->r[27]|c->r[27]; // 801A3EC4
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3EC8
  c->lr=0x801A3ED0u; f_80131C64(c); // 801A3ECC
  c->r[3]=c->r[27]|c->r[27]; // 801A3ED0
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3ED4
  c->lr=0x801A3EDCu; f_80131C6C(c); // 801A3ED8
  c->r[3]=c->r[27]|c->r[27]; // 801A3EDC
  c->r[4]=0u+0x00000001u; // 801A3EE0
  c->lr=0x801A3EE8u; f_80131B68(c); // 801A3EE4
  c->r[3]=c->r[27]+0x00003158u; // 801A3EE8
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3EEC
  c->lr=0x801A3EF4u; f_80110580(c); // 801A3EF0
  c->r[3]=c->r[27]+0x000031A0u; // 801A3EF4
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3EF8
  c->lr=0x801A3F00u; f_80110580(c); // 801A3EFC
  c->r[3]=c->r[27]+0x00003158u; // 801A3F00
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3F04
  c->lr=0x801A3F0Cu; f_80110588(c); // 801A3F08
  c->r[3]=c->r[27]+0x000031A0u; // 801A3F0C
  {uint32_t ea=c->r[2]+0xFFFF92A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801A3F10
  c->lr=0x801A3F18u; f_80110588(c); // 801A3F14
  c->r[11]=c->r[1]+0x00000020u; // 801A3F18
  c->lr=0x801A3F20u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A3F1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A3F20
  c->lr=c->r[0]; // 801A3F24
  c->r[1]=c->r[1]+0x00000020u; // 801A3F28
  return; // 801A3F2C
}

// fn_801A3F30
void f_801A3F30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3F30
  c->r[0]=c->lr; // 801A3F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A3F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A3F3C
  c->r[31]=c->r[3]|c->r[3]; // 801A3F40
  c->lr=0x801A3F48u; f_8012FAAC(c); // 801A3F44
  c->r[3]=0u+0x80470000u; // 801A3F48
  c->r[0]=c->r[3]+0x00000500u; // 801A3F4C
  W32(c->r[31]+0x00000058u,c->r[0]); // 801A3F50
  c->r[0]=0u+0x00000000u; // 801A3F54
  W32(c->r[31]+0x000000C0u,c->r[0]); // 801A3F58
  W32(c->r[31]+0x000000C4u,c->r[0]); // 801A3F5C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 801A3F60
  W32(c->r[31]+0x000000D0u,c->r[0]); // 801A3F64
  W32(c->r[31]+0x000000CCu,c->r[0]); // 801A3F68
  W32(c->r[31]+0x000000D4u,c->r[0]); // 801A3F6C
  W32(c->r[31]+0x000000D8u,c->r[0]); // 801A3F70
  c->r[3]=c->r[31]|c->r[31]; // 801A3F74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A3F78
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A3F7C
  c->lr=c->r[0]; // 801A3F80
  c->r[1]=c->r[1]+0x00000010u; // 801A3F84
  return; // 801A3F88
}

// fn_801A3F8C
void f_801A3F8C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A3F8C
  c->r[0]=c->lr; // 801A3F90
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A3F94
  c->r[11]=c->r[1]+0x00000020u; // 801A3F98
  c->lr=0x801A3FA0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A3F9C
  c->r[26]=c->r[3]|c->r[3]; // 801A3FA0
  c->r[27]=c->r[4]|c->r[4]; // 801A3FA4
  c->lr=0x801A3FACu; f_80056B5C(c); // 801A3FA8
  c->r[30]=c->r[3]|c->r[3]; // 801A3FAC
  c->lr=0x801A3FB4u; f_801F1340(c); // 801A3FB0
  c->lr=0x801A3FB8u; f_80056B54(c); // 801A3FB4
  c->r[3]=0u+0x00000B28u; // 801A3FB8
  c->lr=0x801A3FC0u; f_80047B64(c); // 801A3FBC
  c->r[31]=c->r[3]|c->r[3]; // 801A3FC0
  cmps(c,0,(int32_t)c->r[3],0); // 801A3FC4
  if (crb(c,2)) { goto L_801A3FD0; } // 801A3FC8
  c->lr=0x801A3FD0u; f_801169D0(c); // 801A3FCC
L_801A3FD0:;
  W32(c->r[26]+0x000000C0u,c->r[31]); // 801A3FD0
  c->r[3]=c->r[30]|c->r[30]; // 801A3FD4
  c->lr=0x801A3FDCu; f_80056B54(c); // 801A3FD8
  c->lr=0x801A3FE0u; f_80114E10(c); // 801A3FDC
  c->lr=0x801A3FE4u; f_80116448(c); // 801A3FE0
  c->r[4]=c->r[3]|c->r[3]; // 801A3FE4
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A3FE8
  c->lr=0x801A3FF0u; f_80114AE0(c); // 801A3FEC
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A3FF0
  c->r[4]=c->r[27]|c->r[27]; // 801A3FF4
  c->lr=0x801A3FFCu; f_80114AD8(c); // 801A3FF8
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A3FFC
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A4000
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801A4004
  c->ctr=c->r[12]; // 801A4008
  if (true) { c->lr=0x801A4010u; dispatch(c,c->ctr); } // 801A400C
  c->lr=0x801A4014u; f_80056B5C(c); // 801A4010
  c->r[30]=c->r[3]|c->r[3]; // 801A4014
  c->lr=0x801A401Cu; f_801F1340(c); // 801A4018
  c->lr=0x801A4020u; f_80056B54(c); // 801A401C
  c->r[3]=0u+0x00003200u; // 801A4020
  c->lr=0x801A4028u; f_80047B64(c); // 801A4024
  c->r[31]=c->r[3]|c->r[3]; // 801A4028
  cmps(c,0,(int32_t)c->r[3],0); // 801A402C
  if (crb(c,2)) { goto L_801A4038; } // 801A4030
  c->lr=0x801A4038u; f_801A4678(c); // 801A4034
L_801A4038:;
  W32(c->r[26]+0x000000C4u,c->r[31]); // 801A4038
  c->r[3]=c->r[30]|c->r[30]; // 801A403C
  c->lr=0x801A4044u; f_80056B54(c); // 801A4040
  c->r[3]=R32(c->r[26]+0x000000C4u); // 801A4044
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A4048
  c->r[12]=R32(c->r[12]+0x00000044u); // 801A404C
  c->ctr=c->r[12]; // 801A4050
  if (true) { c->lr=0x801A4058u; dispatch(c,c->ctr); } // 801A4054
  c->r[29]=0u+0x00000000u; // 801A4058
  c->r[30]=c->r[26]|c->r[26]; // 801A405C
L_801A4060:;
  c->lr=0x801A4064u; f_80056B5C(c); // 801A4060
  c->r[28]=c->r[3]|c->r[3]; // 801A4064
  c->lr=0x801A406Cu; f_801F1340(c); // 801A4068
  c->lr=0x801A4070u; f_80056B54(c); // 801A406C
  c->r[3]=0u+0x00000B30u; // 801A4070
  c->lr=0x801A4078u; f_80047B64(c); // 801A4074
  c->r[31]=c->r[3]|c->r[3]; // 801A4078
  cmps(c,0,(int32_t)c->r[3],0); // 801A407C
  if (crb(c,2)) { goto L_801A4088; } // 801A4080
  c->lr=0x801A4088u; f_801A461C(c); // 801A4084
L_801A4088:;
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801A4088
  c->r[3]=c->r[28]|c->r[28]; // 801A408C
  c->lr=0x801A4094u; f_80056B54(c); // 801A4090
  c->lr=0x801A4098u; f_80114E10(c); // 801A4094
  c->lr=0x801A409Cu; f_80116520(c); // 801A4098
  c->r[4]=c->r[3]|c->r[3]; // 801A409C
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A40A0
  c->lr=0x801A40A8u; f_80114AE0(c); // 801A40A4
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A40A8
  c->r[4]=c->r[27]+c->r[29]; // 801A40AC
  c->lr=0x801A40B4u; f_80114AD8(c); // 801A40B0
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A40B4
  c->r[4]=0u+0x00000010u; // 801A40B8
  c->lr=0x801A40C0u; f_801166D0(c); // 801A40BC
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A40C0
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A40C4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 801A40C8
  c->ctr=c->r[12]; // 801A40CC
  if (true) { c->lr=0x801A40D4u; dispatch(c,c->ctr); } // 801A40D0
  c->lr=0x801A40D8u; f_80056B5C(c); // 801A40D4
  c->r[28]=c->r[3]|c->r[3]; // 801A40D8
  c->lr=0x801A40E0u; f_801F1340(c); // 801A40DC
  c->lr=0x801A40E4u; f_80056B54(c); // 801A40E0
  c->r[3]=0u+0x00003200u; // 801A40E4
  c->lr=0x801A40ECu; f_80047B64(c); // 801A40E8
  c->r[31]=c->r[3]|c->r[3]; // 801A40EC
  cmps(c,0,(int32_t)c->r[3],0); // 801A40F0
  if (crb(c,2)) { goto L_801A40FC; } // 801A40F4
  c->lr=0x801A40FCu; f_801A45E0(c); // 801A40F8
L_801A40FC:;
  W32(c->r[30]+0x000000D0u,c->r[31]); // 801A40FC
  c->r[3]=c->r[28]|c->r[28]; // 801A4100
  c->lr=0x801A4108u; f_80056B54(c); // 801A4104
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801A4108
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A410C
  c->r[12]=R32(c->r[12]+0x00000044u); // 801A4110
  c->ctr=c->r[12]; // 801A4114
  if (true) { c->lr=0x801A411Cu; dispatch(c,c->ctr); } // 801A4118
  c->r[30]=c->r[30]+0x00000004u; // 801A411C
  c->r[29]=c->r[29]+0x00000001u; // 801A4120
  cmps(c,0,(int32_t)c->r[29],2); // 801A4124
  if (crb(c,0)) { IRQCHK(c); goto L_801A4060; } // 801A4128
  c->r[0]=R32(c->r[26]+0x000000D8u); // 801A412C
  cmps(c,0,(int32_t)c->r[0],0); // 801A4130
  if (!crb(c,2)) { goto L_801A417C; } // 801A4134
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A4138
  c->lr=0x801A4140u; f_80116A2C(c); // 801A413C
  c->r[4]=c->r[3]|c->r[3]; // 801A4140
  c->r[3]=R32(c->r[26]+0x000000C8u); // 801A4144
  c->r[5]=0u+0x80470000u; // 801A4148
  c->r[5]=c->r[5]+0x000004D0u; // 801A414C
  c->r[6]=0u+0x00000000u; // 801A4150
  c->lr=0x801A4158u; f_8012EE8C(c); // 801A4154
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A4158
  c->lr=0x801A4160u; f_80116A2C(c); // 801A415C
  c->r[4]=c->r[3]|c->r[3]; // 801A4160
  c->r[3]=R32(c->r[26]+0x000000CCu); // 801A4164
  c->r[5]=0u+0x80470000u; // 801A4168
  c->r[5]=c->r[5]+0x000004DCu; // 801A416C
  c->r[6]=0u+0x00000000u; // 801A4170
  c->lr=0x801A4178u; f_8012EE8C(c); // 801A4174
  goto L_801A41BC; // 801A4178
L_801A417C:;
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A417C
  c->lr=0x801A4184u; f_80116A2C(c); // 801A4180
  c->r[4]=c->r[3]|c->r[3]; // 801A4184
  c->r[3]=R32(c->r[26]+0x000000C8u); // 801A4188
  c->r[5]=0u+0x80470000u; // 801A418C
  c->r[5]=c->r[5]+0x000004E8u; // 801A4190
  c->r[6]=0u+0x00000000u; // 801A4194
  c->lr=0x801A419Cu; f_8012EE8C(c); // 801A4198
  c->r[3]=R32(c->r[26]+0x000000C0u); // 801A419C
  c->lr=0x801A41A4u; f_80116A2C(c); // 801A41A0
  c->r[4]=c->r[3]|c->r[3]; // 801A41A4
  c->r[3]=R32(c->r[26]+0x000000CCu); // 801A41A8
  c->r[5]=0u+0x80470000u; // 801A41AC
  c->r[5]=c->r[5]+0x000004F4u; // 801A41B0
  c->r[6]=0u+0x00000000u; // 801A41B4
  c->lr=0x801A41BCu; f_8012EE8C(c); // 801A41B8
L_801A41BC:;
  c->r[11]=c->r[1]+0x00000020u; // 801A41BC
  c->lr=0x801A41C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A41C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A41C4
  c->lr=c->r[0]; // 801A41C8
  c->r[1]=c->r[1]+0x00000020u; // 801A41CC
  return; // 801A41D0
}

// fn_801A41D4
void f_801A41D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A41D4
  c->r[0]=c->lr; // 801A41D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A41DC
  c->r[11]=c->r[1]+0x00000020u; // 801A41E0
  c->lr=0x801A41E8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801A41E4
  c->r[27]=c->r[3]|c->r[3]; // 801A41E8
  c->r[29]=0u+0x00000000u; // 801A41EC
  c->r[30]=c->r[27]|c->r[27]; // 801A41F0
L_801A41F4:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A41F4
  cmps(c,0,(int32_t)c->r[3],0); // 801A41F8
  if (crb(c,2)) { goto L_801A4204; } // 801A41FC
  c->lr=0x801A4204u; f_8012F02C(c); // 801A4200
L_801A4204:;
  c->r[30]=c->r[30]+0x00000004u; // 801A4204
  c->r[29]=c->r[29]+0x00000001u; // 801A4208
  cmps(c,0,(int32_t)c->r[29],2); // 801A420C
  if (crb(c,0)) { IRQCHK(c); goto L_801A41F4; } // 801A4210
  c->r[29]=0u+0x00000000u; // 801A4214
  c->r[30]=c->r[27]|c->r[27]; // 801A4218
  c->r[31]=0u+0x00000000u; // 801A421C
L_801A4220:;
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A4220
  cmps(c,0,(int32_t)c->r[3],0); // 801A4224
  if (crb(c,2)) { goto L_801A4278; } // 801A4228
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A422C
  c->r[12]=R32(c->r[12]+0x00000060u); // 801A4230
  c->ctr=c->r[12]; // 801A4234
  if (true) { c->lr=0x801A423Cu; dispatch(c,c->ctr); } // 801A4238
  c->lr=0x801A4240u; f_80056B5C(c); // 801A423C
  c->r[28]=c->r[3]|c->r[3]; // 801A4240
  c->lr=0x801A4248u; f_801F1340(c); // 801A4244
  c->lr=0x801A424Cu; f_80056B54(c); // 801A4248
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801A424C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4250
  if (crb(c,2)) { goto L_801A426C; } // 801A4254
  c->r[4]=0u+0x00000001u; // 801A4258
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A425C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A4260
  c->ctr=c->r[12]; // 801A4264
  if (true) { c->lr=0x801A426Cu; dispatch(c,c->ctr); } // 801A4268
L_801A426C:;
  c->r[3]=c->r[28]|c->r[28]; // 801A426C
  c->lr=0x801A4274u; f_80056B54(c); // 801A4270
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801A4274
L_801A4278:;
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801A4278
  cmps(c,0,(int32_t)c->r[3],0); // 801A427C
  if (crb(c,2)) { goto L_801A42D0; } // 801A4280
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A4284
  c->r[12]=R32(c->r[12]+0x00000048u); // 801A4288
  c->ctr=c->r[12]; // 801A428C
  if (true) { c->lr=0x801A4294u; dispatch(c,c->ctr); } // 801A4290
  c->lr=0x801A4298u; f_80056B5C(c); // 801A4294
  c->r[28]=c->r[3]|c->r[3]; // 801A4298
  c->lr=0x801A42A0u; f_801F1340(c); // 801A429C
  c->lr=0x801A42A4u; f_80056B54(c); // 801A42A0
  c->r[3]=R32(c->r[30]+0x000000D0u); // 801A42A4
  cmps(c,0,(int32_t)c->r[3],0); // 801A42A8
  if (crb(c,2)) { goto L_801A42C4; } // 801A42AC
  c->r[4]=0u+0x00000001u; // 801A42B0
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A42B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A42B8
  c->ctr=c->r[12]; // 801A42BC
  if (true) { c->lr=0x801A42C4u; dispatch(c,c->ctr); } // 801A42C0
L_801A42C4:;
  c->r[3]=c->r[28]|c->r[28]; // 801A42C4
  c->lr=0x801A42CCu; f_80056B54(c); // 801A42C8
  W32(c->r[30]+0x000000D0u,c->r[31]); // 801A42CC
L_801A42D0:;
  c->r[30]=c->r[30]+0x00000004u; // 801A42D0
  c->r[29]=c->r[29]+0x00000001u; // 801A42D4
  cmps(c,0,(int32_t)c->r[29],2); // 801A42D8
  if (crb(c,0)) { IRQCHK(c); goto L_801A4220; } // 801A42DC
  c->r[3]=R32(c->r[27]+0x000000C0u); // 801A42E0
  cmps(c,0,(int32_t)c->r[3],0); // 801A42E4
  if (crb(c,2)) { goto L_801A433C; } // 801A42E8
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A42EC
  c->r[12]=R32(c->r[12]+0x00000060u); // 801A42F0
  c->ctr=c->r[12]; // 801A42F4
  if (true) { c->lr=0x801A42FCu; dispatch(c,c->ctr); } // 801A42F8
  c->lr=0x801A4300u; f_80056B5C(c); // 801A42FC
  c->r[28]=c->r[3]|c->r[3]; // 801A4300
  c->lr=0x801A4308u; f_801F1340(c); // 801A4304
  c->lr=0x801A430Cu; f_80056B54(c); // 801A4308
  c->r[3]=R32(c->r[27]+0x000000C0u); // 801A430C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4310
  if (crb(c,2)) { goto L_801A432C; } // 801A4314
  c->r[4]=0u+0x00000001u; // 801A4318
  c->r[12]=R32(c->r[3]+0x00000020u); // 801A431C
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A4320
  c->ctr=c->r[12]; // 801A4324
  if (true) { c->lr=0x801A432Cu; dispatch(c,c->ctr); } // 801A4328
L_801A432C:;
  c->r[3]=c->r[28]|c->r[28]; // 801A432C
  c->lr=0x801A4334u; f_80056B54(c); // 801A4330
  c->r[0]=0u+0x00000000u; // 801A4334
  W32(c->r[27]+0x000000C0u,c->r[0]); // 801A4338
L_801A433C:;
  c->r[3]=R32(c->r[27]+0x000000C4u); // 801A433C
  cmps(c,0,(int32_t)c->r[3],0); // 801A4340
  if (crb(c,2)) { goto L_801A4398; } // 801A4344
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A4348
  c->r[12]=R32(c->r[12]+0x00000048u); // 801A434C
  c->ctr=c->r[12]; // 801A4350
  if (true) { c->lr=0x801A4358u; dispatch(c,c->ctr); } // 801A4354
  c->lr=0x801A435Cu; f_80056B5C(c); // 801A4358
  c->r[28]=c->r[3]|c->r[3]; // 801A435C
  c->lr=0x801A4364u; f_801F1340(c); // 801A4360
  c->lr=0x801A4368u; f_80056B54(c); // 801A4364
  c->r[3]=R32(c->r[27]+0x000000C4u); // 801A4368
  cmps(c,0,(int32_t)c->r[3],0); // 801A436C
  if (crb(c,2)) { goto L_801A4388; } // 801A4370
  c->r[4]=0u+0x00000001u; // 801A4374
  c->r[12]=R32(c->r[3]+0x00000058u); // 801A4378
  c->r[12]=R32(c->r[12]+0x00000008u); // 801A437C
  c->ctr=c->r[12]; // 801A4380
  if (true) { c->lr=0x801A4388u; dispatch(c,c->ctr); } // 801A4384
L_801A4388:;
  c->r[3]=c->r[28]|c->r[28]; // 801A4388
  c->lr=0x801A4390u; f_80056B54(c); // 801A438C
  c->r[0]=0u+0x00000000u; // 801A4390
  W32(c->r[27]+0x000000C4u,c->r[0]); // 801A4394
L_801A4398:;
  c->r[11]=c->r[1]+0x00000020u; // 801A4398
  c->lr=0x801A43A0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801A439C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A43A0
  c->lr=c->r[0]; // 801A43A4
  c->r[1]=c->r[1]+0x00000020u; // 801A43A8
  return; // 801A43AC
}

// fn_801A43B0
void f_801A43B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A43B0
  c->r[0]=c->lr; // 801A43B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A43B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A43BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A43C0
  c->r[30]=c->r[3]|c->r[3]; // 801A43C4
  c->r[31]=c->r[4]|c->r[4]; // 801A43C8
  cmps(c,0,(int32_t)c->r[3],0); // 801A43CC
  if (crb(c,2)) { goto L_801A43F0; } // 801A43D0
  c->r[4]=0u+0x00000000u; // 801A43D4
  c->lr=0x801A43DCu; f_80114B08(c); // 801A43D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A43DC
  cmps(c,0,(int32_t)c->r[0],0); // 801A43E0
  if (!crb(c,1)) { goto L_801A43F0; } // 801A43E4
  c->r[3]=c->r[30]|c->r[30]; // 801A43E8
  c->lr=0x801A43F0u; f_80047B20(c); // 801A43EC
L_801A43F0:;
  c->r[3]=c->r[30]|c->r[30]; // 801A43F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A43F4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A43F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A43FC
  c->lr=c->r[0]; // 801A4400
  c->r[1]=c->r[1]+0x00000010u; // 801A4404
  return; // 801A4408
}

// fn_801A440C
void f_801A440C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A440C
  c->r[0]=c->lr; // 801A4410
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4414
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4418
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A441C
  c->r[30]=c->r[3]|c->r[3]; // 801A4420
  c->r[31]=c->r[4]|c->r[4]; // 801A4424
  cmps(c,0,(int32_t)c->r[3],0); // 801A4428
  if (crb(c,2)) { goto L_801A444C; } // 801A442C
  c->r[4]=0u+0x00000000u; // 801A4430
  c->lr=0x801A4438u; f_80114B08(c); // 801A4434
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A4438
  cmps(c,0,(int32_t)c->r[0],0); // 801A443C
  if (!crb(c,1)) { goto L_801A444C; } // 801A4440
  c->r[3]=c->r[30]|c->r[30]; // 801A4444
  c->lr=0x801A444Cu; f_80047B20(c); // 801A4448
L_801A444C:;
  c->r[3]=c->r[30]|c->r[30]; // 801A444C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A4450
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A4454
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A4458
  c->lr=c->r[0]; // 801A445C
  c->r[1]=c->r[1]+0x00000010u; // 801A4460
  return; // 801A4464
}

// fn_801A4468
void f_801A4468(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A4468
  c->r[0]=c->lr; // 801A446C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801A4470
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801A4474
  W32(c->r[1]+0x00000008u,c->r[30]); // 801A4478
  c->r[30]=c->r[3]|c->r[3]; // 801A447C
  c->r[31]=c->r[4]|c->r[4]; // 801A4480
  cmps(c,0,(int32_t)c->r[3],0); // 801A4484
  if (crb(c,2)) { goto L_801A44A8; } // 801A4488
  c->r[4]=0u+0x00000000u; // 801A448C
  c->lr=0x801A4494u; f_801148D4(c); // 801A4490
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 801A4494
  cmps(c,0,(int32_t)c->r[0],0); // 801A4498
  if (!crb(c,1)) { goto L_801A44A8; } // 801A449C
  c->r[3]=c->r[30]|c->r[30]; // 801A44A0
  c->lr=0x801A44A8u; f_80047B20(c); // 801A44A4
L_801A44A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801A44A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801A44AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801A44B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801A44B4
  c->lr=c->r[0]; // 801A44B8
  c->r[1]=c->r[1]+0x00000010u; // 801A44BC
  return; // 801A44C0
}

// fn_801A44C4
void f_801A44C4(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A44C4
  f_8012F910(c); return; // 801A44C8
}

// fn_801A44CC
void f_801A44CC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 801A44CC
  f_80131388(c); return; // 801A44D0
}

// fn_801A44D4
void f_801A44D4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801A44D4
  c->r[0]=c->lr; // 801A44D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801A44DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801A44E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801A44E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801A44E8
  c->r[29]=c->r[4]|c->r[4]; // 801A44EC
  c->r[30]=0u+0x00000000u; // 801A44F0
  c->r[31]=c->r[3]|c->r[3]; // 801A44F4
L_801A44F8:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801A44F8
  c->r[4]=c->r[29]|c->r[29]; // 801A44FC
  c->lr=0x801A4504u; f_8012F910(c); // 801A4500
  c->r[3]=R32(c->r[31]+0x000000D0u); // 801A4504
  c->r[4]=c->r[29]|c->r[29]; // 801A4508
  c->lr=0x801A4510u; f_80131388(c); // 801A450C
  c->r[31]=c->r[31]+0x00000004u; // 801A4510
  c->r[30]=c->r[30]+0x00000001u; // 801A4514
  cmps(c,0,(int32_t)c->r[30],2); // 801A4518
  if (crb(c,0)) { IRQCHK(c); goto L_801A44F8; } // 801A451C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801A4520
  c->r[30]=R32(c->r[1]+0x00000018u); // 801A4524
  c->r[29]=R32(c->r[1]+0x00000014u); // 801A4528
  c->r[0]=R32(c->r[1]+0x00000024u); // 801A452C
  c->lr=c->r[0]; // 801A4530
  c->r[1]=c->r[1]+0x00000020u; // 801A4534
  return; // 801A4538
}

// fn_801A453C
void f_801A453C(Ctx* __restrict c) {
  W32(c->r[3]+0x000000D8u,c->r[4]); // 801A453C
  return; // 801A4540
}

// fn_801A4544
void f_801A4544(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 801A4544
  c->r[4]=0u+0x00000000u; // 801A4548
  c->r[5]=0u+0x00000006u; // 801A454C
  f_8012E640(c); return; // 801A4550
}

