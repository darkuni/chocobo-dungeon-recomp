#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// bdcpy
void f_8030E838(Ctx* __restrict c) {
  trace_call(0x8030E838u);
  c->r[9]=R8(c->r[4]+0x00000000u); // 8030E838
  c->r[8]=R8(c->r[4]+0x00000001u); // 8030E83C
  c->r[7]=R8(c->r[4]+0x00000002u); // 8030E840
  c->r[6]=R8(c->r[4]+0x00000003u); // 8030E844
  c->r[5]=R8(c->r[4]+0x00000004u); // 8030E848
  c->r[0]=R8(c->r[4]+0x00000005u); // 8030E84C
  W8(c->r[3]+0x00000000u,c->r[9]); // 8030E850
  W8(c->r[3]+0x00000001u,c->r[8]); // 8030E854
  W8(c->r[3]+0x00000002u,c->r[7]); // 8030E858
  W8(c->r[3]+0x00000003u,c->r[6]); // 8030E85C
  W8(c->r[3]+0x00000004u,c->r[5]); // 8030E860
  W8(c->r[3]+0x00000005u,c->r[0]); // 8030E864
  return; // 8030E868
}

// bdcmp
void f_8030E86C(Ctx* __restrict c) {
  trace_call(0x8030E86Cu);
  c->r[5]=R8(c->r[3]+0x00000000u); // 8030E86C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8030E870
  cmpu(c,0,c->r[5],c->r[0]); // 8030E874
  if (crb(c,2)) { goto L_8030E884; } // 8030E878
  c->r[3]=0u+0xFFFFFFFFu; // 8030E87C
  return; // 8030E880
L_8030E884:;
  c->r[5]=R8(c->r[3]+0x00000001u); // 8030E884
  c->r[6]=c->r[3]+0x00000002u; // 8030E888
  c->r[0]=R8(c->r[4]+0x00000001u); // 8030E88C
  c->r[3]=c->r[4]+0x00000002u; // 8030E890
  cmpu(c,0,c->r[5],c->r[0]); // 8030E894
  if (crb(c,2)) { goto L_8030E8A4; } // 8030E898
  c->r[3]=0u+0xFFFFFFFFu; // 8030E89C
  return; // 8030E8A0
L_8030E8A4:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 8030E8A4
  c->r[0]=R8(c->r[3]+0x00000000u); // 8030E8A8
  cmpu(c,0,c->r[5],c->r[0]); // 8030E8AC
  if (crb(c,2)) { goto L_8030E8BC; } // 8030E8B0
  c->r[3]=0u+0xFFFFFFFFu; // 8030E8B4
  return; // 8030E8B8
L_8030E8BC:;
  c->r[5]=R8(c->r[6]+0x00000001u); // 8030E8BC
  c->r[0]=R8(c->r[3]+0x00000001u); // 8030E8C0
  cmpu(c,0,c->r[5],c->r[0]); // 8030E8C4
  if (crb(c,2)) { goto L_8030E8D4; } // 8030E8C8
  c->r[3]=0u+0xFFFFFFFFu; // 8030E8CC
  return; // 8030E8D0
L_8030E8D4:;
  c->r[5]=R8(c->r[6]+0x00000002u); // 8030E8D4
  c->r[0]=R8(c->r[3]+0x00000002u); // 8030E8D8
  cmpu(c,0,c->r[5],c->r[0]); // 8030E8DC
  if (crb(c,2)) { goto L_8030E8EC; } // 8030E8E0
  c->r[3]=0u+0xFFFFFFFFu; // 8030E8E4
  return; // 8030E8E8
L_8030E8EC:;
  c->r[5]=R8(c->r[6]+0x00000003u); // 8030E8EC
  c->r[0]=R8(c->r[3]+0x00000003u); // 8030E8F0
  cmpu(c,0,c->r[5],c->r[0]); // 8030E8F4
  if (crb(c,2)) { goto L_8030E904; } // 8030E8F8
  c->r[3]=0u+0xFFFFFFFFu; // 8030E8FC
  return; // 8030E900
L_8030E904:;
  c->r[3]=0u+0x00000000u; // 8030E904
  return; // 8030E908
}

// bta_sys_rm_register
void f_8030E90C(Ctx* __restrict c) {
  trace_call(0x8030E90Cu);
  c->r[4]=0u+0x80570000u; // 8030E90C
  c->r[4]=c->r[4]+0x00005458u; // 8030E910
  W32(c->r[4]+0x00000080u,c->r[3]); // 8030E914
  return; // 8030E918
}

// bta_sys_compress_register
void f_8030E91C(Ctx* __restrict c) {
  trace_call(0x8030E91Cu);
  c->r[4]=0u+0x80570000u; // 8030E91C
  c->r[4]=c->r[4]+0x00005458u; // 8030E920
  W32(c->r[4]+0x00000088u,c->r[3]); // 8030E924
  return; // 8030E928
}

// bta_sys_pm_register
void f_8030E92C(Ctx* __restrict c) {
  trace_call(0x8030E92Cu);
  c->r[4]=0u+0x80570000u; // 8030E92C
  c->r[4]=c->r[4]+0x00005458u; // 8030E930
  W32(c->r[4]+0x00000084u,c->r[3]); // 8030E934
  return; // 8030E938
}

// bta_sys_conn_open
void f_8030E93C(Ctx* __restrict c) {
  trace_call(0x8030E93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030E93C
  c->r[0]=c->lr; // 8030E940
  c->r[6]=0u+0x80570000u; // 8030E944
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030E948
  c->r[6]=c->r[6]+0x00005458u; // 8030E94C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030E950
  c->r[31]=c->r[5]|c->r[5]; // 8030E954
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030E958
  c->r[30]=c->r[4]|c->r[4]; // 8030E95C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8030E960
  c->r[29]=c->r[3]|c->r[3]; // 8030E964
  c->r[12]=R32(c->r[6]+0x00000080u); // 8030E968
  cmps(c,0,(int32_t)c->r[12],0); // 8030E96C
  if (crb(c,2)) { goto L_8030E98C; } // 8030E970
  c->r[4]=c->r[29]|c->r[29]; // 8030E974
  c->r[5]=c->r[30]|c->r[30]; // 8030E978
  c->r[6]=c->r[31]|c->r[31]; // 8030E97C
  c->r[3]=0u+0x00000000u; // 8030E980
  c->ctr=c->r[12]; // 8030E984
  if (true) { c->lr=0x8030E98Cu; dispatch(c,c->ctr); } // 8030E988
L_8030E98C:;
  c->r[3]=0u+0x80570000u; // 8030E98C
  c->r[3]=c->r[3]+0x00005458u; // 8030E990
  c->r[12]=R32(c->r[3]+0x00000084u); // 8030E994
  cmps(c,0,(int32_t)c->r[12],0); // 8030E998
  if (crb(c,2)) { goto L_8030E9B8; } // 8030E99C
  c->r[4]=c->r[29]|c->r[29]; // 8030E9A0
  c->r[5]=c->r[30]|c->r[30]; // 8030E9A4
  c->r[6]=c->r[31]|c->r[31]; // 8030E9A8
  c->r[3]=0u+0x00000000u; // 8030E9AC
  c->ctr=c->r[12]; // 8030E9B0
  if (true) { c->lr=0x8030E9B8u; dispatch(c,c->ctr); } // 8030E9B4
L_8030E9B8:;
  c->r[3]=0u+0x80570000u; // 8030E9B8
  c->r[3]=c->r[3]+0x00005458u; // 8030E9BC
  c->r[12]=R32(c->r[3]+0x00000088u); // 8030E9C0
  cmps(c,0,(int32_t)c->r[12],0); // 8030E9C4
  if (crb(c,2)) { goto L_8030E9E4; } // 8030E9C8
  c->r[4]=c->r[29]|c->r[29]; // 8030E9CC
  c->r[5]=c->r[30]|c->r[30]; // 8030E9D0
  c->r[6]=c->r[31]|c->r[31]; // 8030E9D4
  c->r[3]=0u+0x00000000u; // 8030E9D8
  c->ctr=c->r[12]; // 8030E9DC
  if (true) { c->lr=0x8030E9E4u; dispatch(c,c->ctr); } // 8030E9E0
L_8030E9E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030E9E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030E9E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030E9EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030E9F0
  c->lr=c->r[0]; // 8030E9F4
  c->r[1]=c->r[1]+0x00000020u; // 8030E9F8
  return; // 8030E9FC
}

// bta_sys_conn_close
void f_8030EA00(Ctx* __restrict c) {
  trace_call(0x8030EA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EA00
  c->r[0]=c->lr; // 8030EA04
  c->r[6]=0u+0x80570000u; // 8030EA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030EA0C
  c->r[6]=c->r[6]+0x00005458u; // 8030EA10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030EA14
  c->r[31]=c->r[5]|c->r[5]; // 8030EA18
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030EA1C
  c->r[30]=c->r[4]|c->r[4]; // 8030EA20
  W32(c->r[1]+0x00000014u,c->r[29]); // 8030EA24
  c->r[29]=c->r[3]|c->r[3]; // 8030EA28
  c->r[12]=R32(c->r[6]+0x00000080u); // 8030EA2C
  cmps(c,0,(int32_t)c->r[12],0); // 8030EA30
  if (crb(c,2)) { goto L_8030EA50; } // 8030EA34
  c->r[4]=c->r[29]|c->r[29]; // 8030EA38
  c->r[5]=c->r[30]|c->r[30]; // 8030EA3C
  c->r[6]=c->r[31]|c->r[31]; // 8030EA40
  c->r[3]=0u+0x00000001u; // 8030EA44
  c->ctr=c->r[12]; // 8030EA48
  if (true) { c->lr=0x8030EA50u; dispatch(c,c->ctr); } // 8030EA4C
L_8030EA50:;
  c->r[3]=0u+0x80570000u; // 8030EA50
  c->r[3]=c->r[3]+0x00005458u; // 8030EA54
  c->r[12]=R32(c->r[3]+0x00000084u); // 8030EA58
  cmps(c,0,(int32_t)c->r[12],0); // 8030EA5C
  if (crb(c,2)) { goto L_8030EA7C; } // 8030EA60
  c->r[4]=c->r[29]|c->r[29]; // 8030EA64
  c->r[5]=c->r[30]|c->r[30]; // 8030EA68
  c->r[6]=c->r[31]|c->r[31]; // 8030EA6C
  c->r[3]=0u+0x00000001u; // 8030EA70
  c->ctr=c->r[12]; // 8030EA74
  if (true) { c->lr=0x8030EA7Cu; dispatch(c,c->ctr); } // 8030EA78
L_8030EA7C:;
  c->r[3]=0u+0x80570000u; // 8030EA7C
  c->r[3]=c->r[3]+0x00005458u; // 8030EA80
  c->r[12]=R32(c->r[3]+0x00000088u); // 8030EA84
  cmps(c,0,(int32_t)c->r[12],0); // 8030EA88
  if (crb(c,2)) { goto L_8030EAA8; } // 8030EA8C
  c->r[4]=c->r[29]|c->r[29]; // 8030EA90
  c->r[5]=c->r[30]|c->r[30]; // 8030EA94
  c->r[6]=c->r[31]|c->r[31]; // 8030EA98
  c->r[3]=0u+0x00000001u; // 8030EA9C
  c->ctr=c->r[12]; // 8030EAA0
  if (true) { c->lr=0x8030EAA8u; dispatch(c,c->ctr); } // 8030EAA4
L_8030EAA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030EAA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030EAAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030EAB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030EAB4
  c->lr=c->r[0]; // 8030EAB8
  c->r[1]=c->r[1]+0x00000020u; // 8030EABC
  return; // 8030EAC0
}

// bta_sys_sco_close
void f_8030EAC4(Ctx* __restrict c) {
  trace_call(0x8030EAC4u);
  c->r[6]=0u+0x80570000u; // 8030EAC4
  c->r[0]=c->r[4]|c->r[4]; // 8030EAC8
  c->r[6]=c->r[6]+0x00005458u; // 8030EACC
  c->r[12]=R32(c->r[6]+0x00000084u); // 8030EAD0
  c->r[6]=c->r[5]|c->r[5]; // 8030EAD4
  cmps(c,0,(int32_t)c->r[12],0); // 8030EAD8
  if (crb(c,2)) return; // 8030EADC
  c->r[4]=c->r[3]|c->r[3]; // 8030EAE0
  c->r[5]=c->r[0]|c->r[0]; // 8030EAE4
  c->r[3]=0u+0x00000005u; // 8030EAE8
  c->ctr=c->r[12]; // 8030EAEC
  if (true) { dispatch(c,c->ctr); return; } // 8030EAF0
  return; // 8030EAF4
}

// bta_sys_idle
void f_8030EAF8(Ctx* __restrict c) {
  trace_call(0x8030EAF8u);
  c->r[6]=0u+0x80570000u; // 8030EAF8
  c->r[0]=c->r[4]|c->r[4]; // 8030EAFC
  c->r[6]=c->r[6]+0x00005458u; // 8030EB00
  c->r[12]=R32(c->r[6]+0x00000084u); // 8030EB04
  c->r[6]=c->r[5]|c->r[5]; // 8030EB08
  cmps(c,0,(int32_t)c->r[12],0); // 8030EB0C
  if (crb(c,2)) return; // 8030EB10
  c->r[4]=c->r[3]|c->r[3]; // 8030EB14
  c->r[5]=c->r[0]|c->r[0]; // 8030EB18
  c->r[3]=0u+0x00000006u; // 8030EB1C
  c->ctr=c->r[12]; // 8030EB20
  if (true) { dispatch(c,c->ctr); return; } // 8030EB24
  return; // 8030EB28
}

// bta_sys_busy
void f_8030EB2C(Ctx* __restrict c) {
  trace_call(0x8030EB2Cu);
  c->r[6]=0u+0x80570000u; // 8030EB2C
  c->r[0]=c->r[4]|c->r[4]; // 8030EB30
  c->r[6]=c->r[6]+0x00005458u; // 8030EB34
  c->r[12]=R32(c->r[6]+0x00000084u); // 8030EB38
  c->r[6]=c->r[5]|c->r[5]; // 8030EB3C
  cmps(c,0,(int32_t)c->r[12],0); // 8030EB40
  if (crb(c,2)) return; // 8030EB44
  c->r[4]=c->r[3]|c->r[3]; // 8030EB48
  c->r[5]=c->r[0]|c->r[0]; // 8030EB4C
  c->r[3]=0u+0x00000007u; // 8030EB50
  c->ctr=c->r[12]; // 8030EB54
  if (true) { dispatch(c,c->ctr); return; } // 8030EB58
  return; // 8030EB5C
}

// bta_sys_init
void f_8030EB60(Ctx* __restrict c) {
  trace_call(0x8030EB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EB60
  c->r[0]=c->lr; // 8030EB64
  c->r[4]=0u+0x00000000u; // 8030EB68
  c->r[5]=0u+0x0000008Cu; // 8030EB6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030EB70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030EB74
  c->r[31]=0u+0x80570000u; // 8030EB78
  c->r[3]=c->r[31]+0x00005458u; // 8030EB7C
  c->lr=0x8030EB84u; f_800060B8(c); // 8030EB80
  c->r[5]=R32(c->r[13]+0xFFFFAB70u); // 8030EB84
  c->r[31]=c->r[31]+0x00005458u; // 8030EB88
  c->r[3]=c->r[31]+0x00000068u; // 8030EB8C
  c->r[4]=0u+0x000003E8u; // 8030EB90
  c->r[5]=R8(c->r[5]+0x00000003u); // 8030EB94
  c->lr=0x8030EB9Cu; f_8030EDA4(c); // 8030EB98
  c->lr=0x8030EBA0u; f_8030C42C(c); // 8030EB9C
  W8(c->r[31]+0x0000007Du,c->r[3]); // 8030EBA0
  c->r[3]=R32(c->r[13]+0xFFFFAB70u); // 8030EBA4
  c->r[0]=R8(c->r[3]+0x00000004u); // 8030EBA8
  W8(c->r[13]+0xFFFFC0D8u,c->r[0]); // 8030EBAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030EBB0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030EBB4
  c->lr=c->r[0]; // 8030EBB8
  c->r[1]=c->r[1]+0x00000010u; // 8030EBBC
  return; // 8030EBC0
}

// bta_sys_event
void f_8030EBC4(Ctx* __restrict c) {
  trace_call(0x8030EBC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EBC4
  c->r[0]=c->lr; // 8030EBC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030EBCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030EBD0
  c->r[31]=0u+0x00000001u; // 8030EBD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8030EBD8
  c->r[30]=c->r[3]|c->r[3]; // 8030EBDC
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8030EBE0
  cmpu(c,0,c->r[0],0x00000004u); // 8030EBE4
  if (crb(c,0)) { goto L_8030EC00; } // 8030EBE8
  c->r[4]=0u+0x80490000u; // 8030EBEC
  c->r[5]=R16(c->r[30]+0x00000000u); // 8030EBF0
  c->r[4]=c->r[4]+0xFFFFEB98u; // 8030EBF4
  c->r[3]=0u+0x00000503u; // 8030EBF8
  c->lr=0x8030EC00u; f_8030E200(c); // 8030EBFC
L_8030EC00:;
  c->r[3]=0u+0x80570000u; // 8030EC00
  c->r[4]=R16(c->r[30]+0x00000000u); // 8030EC04
  c->r[3]=c->r[3]+0x00005458u; // 8030EC08
  c->r[0]=R8(c->r[3]+0x0000007Eu); // 8030EC0C
  c->r[5]=sraw(c,c->r[4],8); // 8030EC10
  cmps(c,0,(int32_t)c->r[0],0); // 8030EC14
  if (crb(c,2)) { goto L_8030EC34; } // 8030EC18
  cmpu(c,0,c->r[4],0x00000101u); // 8030EC1C
  if (!crb(c,2)) { goto L_8030EC28; } // 8030EC20
  c->lr=0x8030EC28u; f_80311294(c); // 8030EC24
L_8030EC28:;
  c->r[3]=c->r[30]|c->r[30]; // 8030EC28
  c->lr=0x8030EC30u; f_8030B00C(c); // 8030EC2C
  goto L_8030EC98; // 8030EC30
L_8030EC34:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 8030EC34
  cmpu(c,0,c->r[0],0x0000001Au); // 8030EC38
  if (!crb(c,0)) { goto L_8030EC68; } // 8030EC3C
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 8030EC40
  c->r[3]=R32(c->r[3]+c->r[0]); // 8030EC44
  cmps(c,0,(int32_t)c->r[3],0); // 8030EC48
  if (crb(c,2)) { goto L_8030EC68; } // 8030EC4C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8030EC50
  c->r[3]=c->r[30]|c->r[30]; // 8030EC54
  c->ctr=c->r[12]; // 8030EC58
  if (true) { c->lr=0x8030EC60u; dispatch(c,c->ctr); } // 8030EC5C
  c->r[31]=c->r[3]|c->r[3]; // 8030EC60
  goto L_8030EC88; // 8030EC64
L_8030EC68:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8030EC68
  cmpu(c,0,c->r[0],0x00000002u); // 8030EC6C
  if (crb(c,0)) { goto L_8030EC88; } // 8030EC70
  c->r[4]=0u+0x80490000u; // 8030EC74
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 8030EC78
  c->r[4]=c->r[4]+0xFFFFEBACu; // 8030EC7C
  c->r[3]=0u+0x00000501u; // 8030EC80
  c->lr=0x8030EC88u; f_8030E200(c); // 8030EC84
L_8030EC88:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 8030EC88
  if (crb(c,2)) { goto L_8030EC98; } // 8030EC8C
  c->r[3]=c->r[30]|c->r[30]; // 8030EC90
  c->lr=0x8030EC98u; f_8030B00C(c); // 8030EC94
L_8030EC98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030EC98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030EC9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8030ECA0
  c->lr=c->r[0]; // 8030ECA4
  c->r[1]=c->r[1]+0x00000010u; // 8030ECA8
  return; // 8030ECAC
}

// bta_sys_timer_update
void f_8030ECB0(Ctx* __restrict c) {
  trace_call(0x8030ECB0u);
  c->r[3]=0u+0x80570000u; // 8030ECB0
  c->r[3]=c->r[3]+0x00005458u; // 8030ECB4
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 8030ECB8
  cmps(c,0,(int32_t)c->r[0],0); // 8030ECBC
  if (!crb(c,2)) return; // 8030ECC0
  c->r[3]=c->r[3]+0x00000068u; // 8030ECC4
  f_8030EDF0(c); return; // 8030ECC8
  return; // 8030ECCC
}

// bta_sys_register
void f_8030ECD0(Ctx* __restrict c) {
  trace_call(0x8030ECD0u);
  c->r[5]=0u+0x80570000u; // 8030ECD0
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 8030ECD4
  c->r[5]=c->r[5]+0x00005458u; // 8030ECD8
  W32(c->r[5]+c->r[0],c->r[4]); // 8030ECDC
  return; // 8030ECE0
}

// bta_sys_sendmsg
void f_8030ECE4(Ctx* __restrict c) {
  trace_call(0x8030ECE4u);
  c->r[4]=R32(c->r[13]+0xFFFFAB70u); // 8030ECE4
  c->r[6]=0u+0x80570000u; // 8030ECE8
  c->r[6]=c->r[6]+0x00005458u; // 8030ECEC
  c->r[5]=c->r[3]|c->r[3]; // 8030ECF0
  c->r[3]=R8(c->r[6]+0x0000007Du); // 8030ECF4
  c->r[4]=R8(c->r[4]+0x00000002u); // 8030ECF8
  f_8030B1C0(c); return; // 8030ECFC
}

// bta_sys_start_timer
void f_8030ED00(Ctx* __restrict c) {
  trace_call(0x8030ED00u);
  c->r[7]=0u+0x80570000u; // 8030ED00
  c->r[0]=c->r[4]|c->r[4]; // 8030ED04
  c->r[7]=c->r[7]+0x00005458u; // 8030ED08
  c->r[6]=c->r[5]|c->r[5]; // 8030ED0C
  c->r[4]=c->r[3]|c->r[3]; // 8030ED10
  c->r[5]=c->r[0]|c->r[0]; // 8030ED14
  c->r[3]=c->r[7]+0x00000068u; // 8030ED18
  f_8030EEA4(c); return; // 8030ED1C
}

// bta_sys_stop_timer
void f_8030ED20(Ctx* __restrict c) {
  trace_call(0x8030ED20u);
  c->r[5]=0u+0x80570000u; // 8030ED20
  c->r[4]=c->r[3]|c->r[3]; // 8030ED24
  c->r[5]=c->r[5]+0x00005458u; // 8030ED28
  c->r[3]=c->r[5]+0x00000068u; // 8030ED2C
  f_8030EF44(c); return; // 8030ED30
}

// bta_sys_disable
void f_8030ED34(Ctx* __restrict c) {
  trace_call(0x8030ED34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030ED34
  c->r[0]=c->lr; // 8030ED38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030ED3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030ED40
  c->r[31]=0u+0x80570000u; // 8030ED44
  c->r[31]=c->r[31]+0x00005458u; // 8030ED48
  W32(c->r[1]+0x00000008u,c->r[30]); // 8030ED4C
  c->r[30]=0u+0x00000000u; // 8030ED50
L_8030ED54:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8030ED54
  cmps(c,0,(int32_t)c->r[3],0); // 8030ED58
  if (crb(c,2)) { goto L_8030ED74; } // 8030ED5C
  c->r[12]=R32(c->r[3]+0x00000004u); // 8030ED60
  cmps(c,0,(int32_t)c->r[12],0); // 8030ED64
  if (crb(c,2)) { goto L_8030ED74; } // 8030ED68
  c->ctr=c->r[12]; // 8030ED6C
  if (true) { c->lr=0x8030ED74u; dispatch(c,c->ctr); } // 8030ED70
L_8030ED74:;
  c->r[30]=c->r[30]+0x00000001u; // 8030ED74
  c->r[31]=c->r[31]+0x00000004u; // 8030ED78
  cmps(c,0,(int32_t)c->r[30],26); // 8030ED7C
  if (crb(c,0)) { IRQCHK(c); goto L_8030ED54; } // 8030ED80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030ED84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030ED88
  c->r[30]=R32(c->r[1]+0x00000008u); // 8030ED8C
  c->lr=c->r[0]; // 8030ED90
  c->r[1]=c->r[1]+0x00000010u; // 8030ED94
  return; // 8030ED98
}

// bta_sys_set_trace_level
void f_8030ED9C(Ctx* __restrict c) {
  trace_call(0x8030ED9Cu);
  W8(c->r[13]+0xFFFFC0D8u,c->r[3]); // 8030ED9C
  return; // 8030EDA0
}

// ptim_init
void f_8030EDA4(Ctx* __restrict c) {
  trace_call(0x8030EDA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EDA4
  c->r[0]=c->lr; // 8030EDA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030EDAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030EDB0
  c->r[31]=c->r[5]|c->r[5]; // 8030EDB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030EDB8
  c->r[30]=c->r[4]|c->r[4]; // 8030EDBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8030EDC0
  c->r[29]=c->r[3]|c->r[3]; // 8030EDC4
  c->lr=0x8030EDCCu; f_8030BF90(c); // 8030EDC8
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8030EDCC
  W8(c->r[29]+0x00000010u,c->r[31]); // 8030EDD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030EDD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030EDD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030EDDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030EDE0
  c->lr=c->r[0]; // 8030EDE4
  c->r[1]=c->r[1]+0x00000020u; // 8030EDE8
  return; // 8030EDEC
}

// ptim_timer_update
void f_8030EDF0(Ctx* __restrict c) {
  trace_call(0x8030EDF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EDF0
  c->r[0]=c->lr; // 8030EDF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030EDF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030EDFC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8030EE00
  c->r[30]=c->r[3]|c->r[3]; // 8030EE04
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8030EE08
  c->lr=0x8030EE10u; f_8030BFA4(c); // 8030EE0C
  goto L_8030EE64; // 8030EE10
L_8030EE14:;
  c->r[3]=c->r[30]|c->r[30]; // 8030EE14
  c->r[4]=c->r[31]|c->r[31]; // 8030EE18
  c->lr=0x8030EE20u; f_8030C11C(c); // 8030EE1C
  c->r[12]=R32(c->r[31]+0x00000008u); // 8030EE20
  cmps(c,0,(int32_t)c->r[12],0); // 8030EE24
  if (crb(c,2)) { goto L_8030EE3C; } // 8030EE28
  c->r[3]=c->r[31]|c->r[31]; // 8030EE2C
  c->ctr=c->r[12]; // 8030EE30
  if (true) { c->lr=0x8030EE38u; dispatch(c,c->ctr); } // 8030EE34
  goto L_8030EE64; // 8030EE38
L_8030EE3C:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 8030EE3C
  cmps(c,0,(int32_t)c->r[0],0); // 8030EE40
  if (crb(c,2)) { goto L_8030EE64; } // 8030EE44
  c->r[3]=0u+0x00000008u; // 8030EE48
  c->lr=0x8030EE50u; f_8030AD84(c); // 8030EE4C
  cmps(c,0,(int32_t)c->r[3],0); // 8030EE50
  if (crb(c,2)) { goto L_8030EE64; } // 8030EE54
  c->r[0]=R16(c->r[31]+0x00000014u); // 8030EE58
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030EE5C
  c->lr=0x8030EE64u; f_8030ECE4(c); // 8030EE60
L_8030EE64:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 8030EE64
  cmps(c,0,(int32_t)c->r[31],0); // 8030EE68
  if (crb(c,2)) { goto L_8030EE7C; } // 8030EE6C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8030EE70
  cmps(c,0,(int32_t)c->r[0],0); // 8030EE74
  if (!crb(c,1)) { IRQCHK(c); goto L_8030EE14; } // 8030EE78
L_8030EE7C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8030EE7C
  if (!crb(c,2)) { goto L_8030EE8C; } // 8030EE80
  c->r[3]=R8(c->r[30]+0x00000010u); // 8030EE84
  c->lr=0x8030EE8Cu; f_8030BF08(c); // 8030EE88
L_8030EE8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030EE8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030EE90
  c->r[30]=R32(c->r[1]+0x00000008u); // 8030EE94
  c->lr=c->r[0]; // 8030EE98
  c->r[1]=c->r[1]+0x00000010u; // 8030EE9C
  return; // 8030EEA0
}

// ptim_start_timer
void f_8030EEA4(Ctx* __restrict c) {
  trace_call(0x8030EEA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EEA4
  c->r[0]=c->lr; // 8030EEA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030EEAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030EEB0
  c->r[31]=c->r[6]|c->r[6]; // 8030EEB4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030EEB8
  c->r[30]=c->r[5]|c->r[5]; // 8030EEBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8030EEC0
  c->r[29]=c->r[4]|c->r[4]; // 8030EEC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8030EEC8
  c->r[28]=c->r[3]|c->r[3]; // 8030EECC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8030EED0
  cmps(c,0,(int32_t)c->r[0],0); // 8030EED4
  if (!crb(c,2)) { goto L_8030EF04; } // 8030EED8
  c->r[4]=0u+0x66660000u; // 8030EEDC
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8030EEE0
  c->r[4]=c->r[4]+0x00006667u; // 8030EEE4
  c->r[3]=R8(c->r[3]+0x00000010u); // 8030EEE8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8030EEEC
  c->r[5]=0u+0x00000001u; // 8030EEF0
  c->r[0]=sraw(c,c->r[0],2); // 8030EEF4
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8030EEF8
  c->r[4]=c->r[0]+c->r[4]; // 8030EEFC
  c->lr=0x8030EF04u; f_8030BDB8(c); // 8030EF00
L_8030EF04:;
  c->r[3]=c->r[28]|c->r[28]; // 8030EF04
  c->r[4]=c->r[29]|c->r[29]; // 8030EF08
  c->lr=0x8030EF10u; f_8030C11C(c); // 8030EF0C
  W16(c->r[29]+0x00000014u,c->r[30]); // 8030EF10
  c->r[3]=c->r[28]|c->r[28]; // 8030EF14
  c->r[4]=c->r[29]|c->r[29]; // 8030EF18
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 8030EF1C
  c->lr=0x8030EF24u; f_8030C030(c); // 8030EF20
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030EF24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030EF28
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030EF2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030EF30
  c->r[28]=R32(c->r[1]+0x00000010u); // 8030EF34
  c->lr=c->r[0]; // 8030EF38
  c->r[1]=c->r[1]+0x00000020u; // 8030EF3C
  return; // 8030EF40
}

// ptim_stop_timer
void f_8030EF44(Ctx* __restrict c) {
  trace_call(0x8030EF44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EF44
  c->r[0]=c->lr; // 8030EF48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030EF4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030EF50
  c->r[31]=c->r[3]|c->r[3]; // 8030EF54
  c->lr=0x8030EF5Cu; f_8030C11C(c); // 8030EF58
  c->r[0]=R32(c->r[31]+0x00000000u); // 8030EF5C
  cmps(c,0,(int32_t)c->r[0],0); // 8030EF60
  if (!crb(c,2)) { goto L_8030EF70; } // 8030EF64
  c->r[3]=R8(c->r[31]+0x00000010u); // 8030EF68
  c->lr=0x8030EF70u; f_8030BF08(c); // 8030EF6C
L_8030EF70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030EF70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030EF74
  c->lr=c->r[0]; // 8030EF78
  c->r[1]=c->r[1]+0x00000010u; // 8030EF7C
  return; // 8030EF80
}

// utl_freebuf
void f_8030EF84(Ctx* __restrict c) {
  trace_call(0x8030EF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EF84
  c->r[0]=c->lr; // 8030EF88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030EF8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030EF90
  c->r[31]=c->r[3]|c->r[3]; // 8030EF94
  c->r[0]=R32(c->r[3]+0x00000000u); // 8030EF98
  cmps(c,0,(int32_t)c->r[0],0); // 8030EF9C
  if (crb(c,2)) { goto L_8030EFB4; } // 8030EFA0
  c->r[3]=c->r[0]|c->r[0]; // 8030EFA4
  c->lr=0x8030EFACu; f_8030B00C(c); // 8030EFA8
  c->r[0]=0u+0x00000000u; // 8030EFAC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8030EFB0
L_8030EFB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030EFB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030EFB8
  c->lr=c->r[0]; // 8030EFBC
  c->r[1]=c->r[1]+0x00000010u; // 8030EFC0
  return; // 8030EFC4
}

// bta_dm_enable
void f_8030EFC8(Ctx* __restrict c) {
  trace_call(0x8030EFC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030EFC8
  c->r[0]=c->lr; // 8030EFCC
  c->r[4]=0u+0x80570000u; // 8030EFD0
  c->r[5]=0u+0x0000007Cu; // 8030EFD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030EFD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030EFDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030EFE0
  c->r[30]=c->r[3]|c->r[3]; // 8030EFE4
  c->r[3]=c->r[4]+0x00005518u; // 8030EFE8
  c->r[4]=0u+0x00000000u; // 8030EFEC
  c->lr=0x8030EFF4u; f_800060B8(c); // 8030EFF0
  c->r[3]=0u+0x80570000u; // 8030EFF4
  c->r[4]=0u+0x00000000u; // 8030EFF8
  c->r[3]=c->r[3]+0x00005698u; // 8030EFFC
  c->r[5]=0u+0x0000002Eu; // 8030F000
  c->lr=0x8030F008u; f_800060B8(c); // 8030F004
  c->r[31]=0u+0x80440000u; // 8030F008
  c->r[3]=c->r[1]+0x00000008u; // 8030F00C
  c->r[4]=c->r[31]+0xFFFFDA88u; // 8030F010
  c->r[5]=0u+0x00000003u; // 8030F014
  c->lr=0x8030F01Cu; f_80005FB4(c); // 8030F018
  c->r[3]=c->r[1]+0x00000008u; // 8030F01C
  c->lr=0x8030F024u; f_80317BA8(c); // 8030F020
  c->r[4]=0u+0x80570000u; // 8030F024
  c->r[0]=R32(c->r[30]+0x00000008u); // 8030F028
  c->r[4]=c->r[4]+0x00005594u; // 8030F02C
  c->r[3]=0u+0x80440000u; // 8030F030
  W32(c->r[4]+0x00000050u,c->r[0]); // 8030F034
  c->r[3]=c->r[3]+0xFFFFDBB8u; // 8030F038
  c->lr=0x8030F040u; f_8031BB90(c); // 8030F03C
  c->r[31]=c->r[31]+0xFFFFDA88u; // 8030F040
  c->r[3]=R16(c->r[31]+0x00000008u); // 8030F044
  c->lr=0x8030F04Cu; f_80315528(c); // 8030F048
  c->r[3]=R16(c->r[31]+0x00000006u); // 8030F04C
  c->lr=0x8030F054u; f_80317E98(c); // 8030F050
  c->r[3]=R16(c->r[31]+0x00000004u); // 8030F054
  c->lr=0x8030F05Cu; f_8031515C(c); // 8030F058
  c->r[3]=0u+0x80310000u; // 8030F05C
  c->r[3]=c->r[3]+0x00000A08u; // 8030F060
  c->lr=0x8030F068u; f_80315BA4(c); // 8030F064
  c->r[3]=0u+0x80310000u; // 8030F068
  c->r[3]=c->r[3]+0x000008B0u; // 8030F06C
  c->lr=0x8030F074u; f_80317AD4(c); // 8030F070
  c->r[3]=0u+0x80310000u; // 8030F074
  c->r[3]=c->r[3]+0x00001108u; // 8030F078
  c->lr=0x8030F080u; f_8030E90C(c); // 8030F07C
  c->r[31]=0u+0x80310000u; // 8030F080
  c->r[3]=c->r[31]+0x00000ED0u; // 8030F084
  c->lr=0x8030F08Cu; f_8030E91C(c); // 8030F088
  c->lr=0x8030F090u; f_803118D0(c); // 8030F08C
  c->r[3]=0u+0x80570000u; // 8030F090
  c->r[4]=0u+0x00000000u; // 8030F094
  c->r[3]=c->r[3]+0x000054E8u; // 8030F098
  c->r[5]=0u+0x0000002Du; // 8030F09C
  c->lr=0x8030F0A4u; f_800060B8(c); // 8030F0A0
  c->r[3]=c->r[31]+0x00000ED0u; // 8030F0A4
  c->lr=0x8030F0ACu; f_8030E91C(c); // 8030F0A8
  c->r[3]=0u+0x80310000u; // 8030F0AC
  c->r[4]=0u+0x00000000u; // 8030F0B0
  c->r[3]=c->r[3]+0x00000DECu; // 8030F0B4
  c->lr=0x8030F0BCu; f_803276D0(c); // 8030F0B8
  c->lr=0x8030F0C0u; f_8031FE28(c); // 8030F0BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030F0C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030F0C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030F0C8
  c->lr=c->r[0]; // 8030F0CC
  c->r[1]=c->r[1]+0x00000020u; // 8030F0D0
  return; // 8030F0D4
}

// bta_dm_disable
void f_8030F0D8(Ctx* __restrict c) {
  trace_call(0x8030F0D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F0D8
  c->r[0]=c->lr; // 8030F0DC
  c->r[3]=c->r[2]+0xFFFFB418u; // 8030F0E0
  c->r[4]=0u+0x00000000u; // 8030F0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030F0E8
  c->lr=0x8030F0F0u; f_803275B4(c); // 8030F0EC
  c->lr=0x8030F0F4u; f_8030ED34(c); // 8030F0F0
  c->r[3]=0u+0x00000000u; // 8030F0F4
  c->r[4]=0u+0x00000000u; // 8030F0F8
  c->r[5]=0u+0x00000000u; // 8030F0FC
  c->lr=0x8030F104u; f_803185D0(c); // 8030F100
  c->r[3]=0u+0x00000000u; // 8030F104
  c->r[4]=0u+0x00000000u; // 8030F108
  c->r[5]=0u+0x00000000u; // 8030F10C
  c->lr=0x8030F114u; f_80318A4C(c); // 8030F110
  c->lr=0x8030F118u; f_80311938(c); // 8030F114
  c->lr=0x8030F11Cu; f_80315610(c); // 8030F118
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8030F11C
  if (!crb(c,2)) { goto L_8030F14C; } // 8030F120
  c->r[6]=0u+0x80310000u; // 8030F124
  c->r[3]=0u+0x80570000u; // 8030F128
  c->r[3]=c->r[3]+0x00005594u; // 8030F12C
  c->r[4]=0u+0x00000000u; // 8030F130
  c->r[6]=c->r[6]+0x00000CF8u; // 8030F134
  c->r[5]=0u+0x000003E8u; // 8030F138
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 8030F13C
  c->r[3]=c->r[3]+0x00000074u; // 8030F140
  c->lr=0x8030F148u; f_8030ED00(c); // 8030F144
  goto L_8030F178; // 8030F148
L_8030F14C:;
  c->r[6]=0u+0x80570000u; // 8030F14C
  c->r[5]=0u+0x80310000u; // 8030F150
  c->r[6]=c->r[6]+0x00005594u; // 8030F154
  c->r[0]=0u+0x00000001u; // 8030F158
  c->r[5]=c->r[5]+0xFFFFF188u; // 8030F15C
  W8(c->r[6]+0x00000072u,c->r[0]); // 8030F160
  c->r[3]=c->r[6]+0x00000074u; // 8030F164
  c->r[4]=0u+0x00000000u; // 8030F168
  W32(c->r[6]+0x0000007Cu,c->r[5]); // 8030F16C
  c->r[5]=0u+0x00001388u; // 8030F170
  c->lr=0x8030F178u; f_8030ED00(c); // 8030F174
L_8030F178:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030F178
  c->lr=c->r[0]; // 8030F17C
  c->r[1]=c->r[1]+0x00000010u; // 8030F180
  return; // 8030F184
}

// bta_dm_disable_timer_cback
void f_8030F188(Ctx* __restrict c) {
  trace_call(0x8030F188u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F188
  c->r[0]=c->lr; // 8030F18C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030F190
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030F194
  W32(c->r[1]+0x00000008u,c->r[30]); // 8030F198
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8030F19C
  cmpu(c,0,c->r[0],0x00000004u); // 8030F1A0
  if (crb(c,0)) { goto L_8030F1B8; } // 8030F1A4
  c->r[4]=0u+0x80490000u; // 8030F1A8
  c->r[3]=0u+0x00000503u; // 8030F1AC
  c->r[4]=c->r[4]+0xFFFFEBD0u; // 8030F1B0
  c->lr=0x8030F1B8u; f_8030E1E8(c); // 8030F1B4
L_8030F1B8:;
  c->lr=0x8030F1BCu; f_80315610(c); // 8030F1B8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8030F1BC
  if (crb(c,2)) { goto L_8030F208; } // 8030F1C0
  c->r[3]=0u+0x80570000u; // 8030F1C4
  c->r[31]=c->r[3]+0x00005594u; // 8030F1C8
  c->r[0]=R8(c->r[31]+0x00000101u); // 8030F1CC
  cmps(c,0,(int32_t)c->r[0],0); // 8030F1D0
  if (!crb(c,2)) { goto L_8030F208; } // 8030F1D4
  c->r[30]=0u+0x00000000u; // 8030F1D8
  goto L_8030F1F4; // 8030F1DC
L_8030F1E0:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8030F1E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 8030F1E4
  c->r[3]=c->r[31]+c->r[0]; // 8030F1E8
  c->lr=0x8030F1F0u; f_8031616C(c); // 8030F1EC
  c->r[30]=c->r[30]+0x00000001u; // 8030F1F0
L_8030F1F4:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 8030F1F4
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 8030F1F8
  cmpu(c,0,c->r[3],c->r[0]); // 8030F1FC
  if (crb(c,0)) { IRQCHK(c); goto L_8030F1E0; } // 8030F200
  goto L_8030F22C; // 8030F204
L_8030F208:;
  c->r[5]=0u+0x80570000u; // 8030F208
  c->r[0]=0u+0x00000000u; // 8030F20C
  c->r[5]=c->r[5]+0x00005594u; // 8030F210
  c->r[3]=0u+0x00000001u; // 8030F214
  c->r[12]=R32(c->r[5]+0x00000050u); // 8030F218
  c->r[4]=0u+0x00000000u; // 8030F21C
  W8(c->r[5]+0x00000072u,c->r[0]); // 8030F220
  c->ctr=c->r[12]; // 8030F224
  if (true) { c->lr=0x8030F22Cu; dispatch(c,c->ctr); } // 8030F228
L_8030F22C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030F22C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030F230
  c->r[30]=R32(c->r[1]+0x00000008u); // 8030F234
  c->lr=c->r[0]; // 8030F238
  c->r[1]=c->r[1]+0x00000010u; // 8030F23C
  return; // 8030F240
}

// bta_dm_set_dev_name
void f_8030F244(Ctx* __restrict c) {
  trace_call(0x8030F244u);
  c->r[3]=c->r[3]+0x00000008u; // 8030F244
  f_80317990(c); return; // 8030F248
}

// bta_dm_set_visibility
void f_8030F24C(Ctx* __restrict c) {
  trace_call(0x8030F24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F24C
  c->r[0]=c->lr; // 8030F250
  c->r[4]=0u+0x00000000u; // 8030F254
  c->r[5]=0u+0x00000000u; // 8030F258
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030F25C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030F260
  c->r[31]=c->r[3]|c->r[3]; // 8030F264
  c->r[3]=R8(c->r[3]+0x00000008u); // 8030F268
  c->lr=0x8030F270u; f_803185D0(c); // 8030F26C
  c->r[3]=R8(c->r[31]+0x00000009u); // 8030F270
  c->r[4]=0u+0x00000000u; // 8030F274
  c->r[5]=0u+0x00000000u; // 8030F278
  c->lr=0x8030F280u; f_80318A4C(c); // 8030F27C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030F280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030F284
  c->lr=c->r[0]; // 8030F288
  c->r[1]=c->r[1]+0x00000010u; // 8030F28C
  return; // 8030F290
}

// bta_dm_bond
void f_8030F294(Ctx* __restrict c) {
  trace_call(0x8030F294u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F294
  c->r[0]=c->lr; // 8030F298
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030F29C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030F2A0
  c->r[31]=c->r[3]|c->r[3]; // 8030F2A4
  c->r[3]=c->r[3]+0x00000008u; // 8030F2A8
  c->lr=0x8030F2B0u; f_8031EB20(c); // 8030F2AC
  cmps(c,0,(int32_t)c->r[3],0); // 8030F2B0
  if (crb(c,2)) { goto L_8030F2CC; } // 8030F2B4
  c->r[4]=c->r[3]|c->r[3]; // 8030F2B8
  c->r[3]=c->r[1]+0x00000008u; // 8030F2BC
  c->r[5]=0u+0x00000008u; // 8030F2C0
  c->lr=0x8030F2C8u; f_80005FB4(c); // 8030F2C4
  goto L_8030F2DC; // 8030F2C8
L_8030F2CC:;
  c->r[3]=c->r[1]+0x00000008u; // 8030F2CC
  c->r[4]=0u+0x00000000u; // 8030F2D0
  c->r[5]=0u+0x00000008u; // 8030F2D4
  c->lr=0x8030F2DCu; f_800060B8(c); // 8030F2D8
L_8030F2DC:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 8030F2DC
  c->r[3]=c->r[31]+0x00000008u; // 8030F2E0
  c->r[5]=c->r[31]+0x0000000Fu; // 8030F2E4
  c->r[6]=c->r[1]+0x00000008u; // 8030F2E8
  c->lr=0x8030F2F0u; f_8031C224(c); // 8030F2EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030F2F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030F2F4
  c->lr=c->r[0]; // 8030F2F8
  c->r[1]=c->r[1]+0x00000020u; // 8030F2FC
  return; // 8030F300
}

// bta_dm_pin_reply
void f_8030F304(Ctx* __restrict c) {
  trace_call(0x8030F304u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F304
  c->r[0]=c->lr; // 8030F308
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030F30C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030F310
  c->r[31]=c->r[3]|c->r[3]; // 8030F314
  c->r[3]=c->r[3]+0x00000008u; // 8030F318
  c->lr=0x8030F320u; f_8031EB20(c); // 8030F31C
  cmps(c,0,(int32_t)c->r[3],0); // 8030F320
  if (crb(c,2)) { goto L_8030F33C; } // 8030F324
  c->r[4]=c->r[3]|c->r[3]; // 8030F328
  c->r[3]=c->r[1]+0x00000008u; // 8030F32C
  c->r[5]=0u+0x00000008u; // 8030F330
  c->lr=0x8030F338u; f_80005FB4(c); // 8030F334
  goto L_8030F34C; // 8030F338
L_8030F33C:;
  c->r[3]=c->r[1]+0x00000008u; // 8030F33C
  c->r[4]=0u+0x00000000u; // 8030F340
  c->r[5]=0u+0x00000008u; // 8030F344
  c->lr=0x8030F34Cu; f_800060B8(c); // 8030F348
L_8030F34C:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 8030F34C
  cmps(c,0,(int32_t)c->r[0],0); // 8030F350
  if (crb(c,2)) { goto L_8030F374; } // 8030F354
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 8030F358
  c->r[3]=c->r[31]+0x00000008u; // 8030F35C
  c->r[6]=c->r[31]+0x00000010u; // 8030F360
  c->r[7]=c->r[1]+0x00000008u; // 8030F364
  c->r[4]=0u+0x00000000u; // 8030F368
  c->lr=0x8030F370u; f_8031BF84(c); // 8030F36C
  goto L_8030F38C; // 8030F370
L_8030F374:;
  c->r[3]=c->r[31]+0x00000008u; // 8030F374
  c->r[7]=c->r[1]+0x00000008u; // 8030F378
  c->r[4]=0u+0x0000000Bu; // 8030F37C
  c->r[5]=0u+0x00000000u; // 8030F380
  c->r[6]=0u+0x00000000u; // 8030F384
  c->lr=0x8030F38Cu; f_8031BF84(c); // 8030F388
L_8030F38C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030F38C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030F390
  c->lr=c->r[0]; // 8030F394
  c->r[1]=c->r[1]+0x00000020u; // 8030F398
  return; // 8030F39C
}

// bta_dm_auth_reply
void f_8030F3A0(Ctx* __restrict c) {
  trace_call(0x8030F3A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F3A0
  c->r[0]=c->lr; // 8030F3A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030F3A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030F3AC
  c->r[31]=c->r[3]|c->r[3]; // 8030F3B0
  c->r[3]=c->r[3]+0x00000008u; // 8030F3B4
  c->lr=0x8030F3BCu; f_8031EB20(c); // 8030F3B8
  cmps(c,0,(int32_t)c->r[3],0); // 8030F3BC
  if (crb(c,2)) { goto L_8030F3D8; } // 8030F3C0
  c->r[4]=c->r[3]|c->r[3]; // 8030F3C4
  c->r[3]=c->r[1]+0x00000008u; // 8030F3C8
  c->r[5]=0u+0x00000008u; // 8030F3CC
  c->lr=0x8030F3D4u; f_80005FB4(c); // 8030F3D0
  goto L_8030F3E8; // 8030F3D4
L_8030F3D8:;
  c->r[3]=c->r[1]+0x00000008u; // 8030F3D8
  c->r[4]=0u+0x00000000u; // 8030F3DC
  c->r[5]=0u+0x00000008u; // 8030F3E0
  c->lr=0x8030F3E8u; f_800060B8(c); // 8030F3E4
L_8030F3E8:;
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 8030F3E8
  cmpu(c,0,c->r[0],0x00000002u); // 8030F3EC
  if (crb(c,2)) { goto L_8030F450; } // 8030F3F0
  cmps(c,0,(int32_t)c->r[0],0); // 8030F3F4
  if (!crb(c,2)) { goto L_8030F43C; } // 8030F3F8
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 8030F3FC
  cmpu(c,0,c->r[0],0x00000017u); // 8030F400
  if (crb(c,1)) { goto L_8030F43C; } // 8030F404
  c->r[3]=0u+0x80440000u; // 8030F408
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 8030F40C
  c->r[3]=c->r[3]+0xFFFFDB58u; // 8030F410
  c->r[5]=c->r[1]+0x00000008u; // 8030F414
  c->r[4]=R32(c->r[3]+c->r[0]); // 8030F418
  c->r[3]=0u+0x00000001u; // 8030F41C
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 8030F420
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 8030F424
  c->r[0]=c->r[4]-c->r[0]; // 8030F428
  c->r[4]=R32(c->r[5]+c->r[6]); // 8030F42C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8030F430
  c->r[0]=c->r[4]|c->r[0]; // 8030F434
  W32(c->r[5]+c->r[6],c->r[0]); // 8030F438
L_8030F43C:;
  c->r[3]=c->r[31]+0x00000008u; // 8030F43C
  c->r[5]=c->r[1]+0x00000008u; // 8030F440
  c->r[4]=0u+0x00000000u; // 8030F444
  c->lr=0x8030F44Cu; f_8031C048(c); // 8030F448
  goto L_8030F460; // 8030F44C
L_8030F450:;
  c->r[3]=c->r[31]+0x00000008u; // 8030F450
  c->r[5]=c->r[1]+0x00000008u; // 8030F454
  c->r[4]=0u+0x0000000Bu; // 8030F458
  c->lr=0x8030F460u; f_8031C048(c); // 8030F45C
L_8030F460:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030F460
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030F464
  c->lr=c->r[0]; // 8030F468
  c->r[1]=c->r[1]+0x00000020u; // 8030F46C
  return; // 8030F470
}

// bta_dm_search_start
void f_8030F474(Ctx* __restrict c) {
  trace_call(0x8030F474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F474
  c->r[0]=c->lr; // 8030F478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030F47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030F480
  c->r[31]=c->r[3]|c->r[3]; // 8030F484
  c->r[3]=0u+0x00000000u; // 8030F488
  c->lr=0x8030F490u; f_803192B4(c); // 8030F48C
  c->r[0]=R32(c->r[31]+0x00000018u); // 8030F490
  c->r[3]=0u+0x80570000u; // 8030F494
  c->r[4]=0u+0x80310000u; // 8030F498
  c->r[5]=0u+0x80310000u; // 8030F49C
  W32(c->r[3]+0x00005518u,c->r[0]); // 8030F4A0
  c->r[6]=c->r[3]+0x00005518u; // 8030F4A4
  c->r[3]=c->r[31]+0x00000008u; // 8030F4A8
  c->r[4]=c->r[4]+0x0000029Cu; // 8030F4AC
  c->r[0]=R32(c->r[31]+0x00000014u); // 8030F4B0
  c->r[5]=c->r[5]+0x0000032Cu; // 8030F4B4
  W32(c->r[6]+0x00000008u,c->r[0]); // 8030F4B8
  c->lr=0x8030F4C0u; f_80318CEC(c); // 8030F4BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030F4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030F4C4
  c->lr=c->r[0]; // 8030F4C8
  c->r[1]=c->r[1]+0x00000010u; // 8030F4CC
  return; // 8030F4D0
}

// bta_dm_search_cancel
void f_8030F4D4(Ctx* __restrict c) {
  trace_call(0x8030F4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F4D4
  c->r[0]=c->lr; // 8030F4D8
  c->r[3]=0u+0x00000000u; // 8030F4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030F4E0
  c->lr=0x8030F4E8u; f_803192B4(c); // 8030F4E4
  c->lr=0x8030F4ECu; f_80318BD4(c); // 8030F4E8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8030F4EC
  if (crb(c,2)) { goto L_8030F530; } // 8030F4F0
  c->lr=0x8030F4F8u; f_80318BE4(c); // 8030F4F4
  c->r[4]=0u+0x80570000u; // 8030F4F8
  c->r[3]=0u+0x00000004u; // 8030F4FC
  c->r[12]=R32(c->r[4]+0x00005518u); // 8030F500
  c->r[4]=0u+0x00000000u; // 8030F504
  c->ctr=c->r[12]; // 8030F508
  if (true) { c->lr=0x8030F510u; dispatch(c,c->ctr); } // 8030F50C
  c->r[3]=0u+0x00000110u; // 8030F510
  c->lr=0x8030F518u; f_8030AD84(c); // 8030F514
  cmps(c,0,(int32_t)c->r[3],0); // 8030F518
  if (crb(c,2)) { goto L_8030F548; } // 8030F51C
  c->r[0]=0u+0x00000207u; // 8030F520
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030F524
  c->lr=0x8030F52Cu; f_8030ECE4(c); // 8030F528
  goto L_8030F548; // 8030F52C
L_8030F530:;
  c->r[3]=0u+0x80570000u; // 8030F530
  c->r[3]=c->r[3]+0x00005518u; // 8030F534
  c->r[0]=R32(c->r[3]+0x00000008u); // 8030F538
  cmps(c,0,(int32_t)c->r[0],0); // 8030F53C
  if (!crb(c,2)) { goto L_8030F548; } // 8030F540
  c->lr=0x8030F548u; f_80318F88(c); // 8030F544
L_8030F548:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030F548
  c->lr=c->r[0]; // 8030F54C
  c->r[1]=c->r[1]+0x00000010u; // 8030F550
  return; // 8030F554
}

// bta_dm_discover
void f_8030F558(Ctx* __restrict c) {
  trace_call(0x8030F558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F558
  c->r[0]=c->lr; // 8030F55C
  c->r[4]=0u+0x80570000u; // 8030F560
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030F564
  c->r[0]=0u+0x00000000u; // 8030F568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030F56C
  c->r[31]=c->r[4]+0x00005518u; // 8030F570
  W32(c->r[1]+0x00000008u,c->r[30]); // 8030F574
  c->r[30]=c->r[3]|c->r[3]; // 8030F578
  c->r[5]=R32(c->r[3]+0x00000014u); // 8030F57C
  W32(c->r[4]+0x00005518u,c->r[5]); // 8030F580
  c->r[4]=0u+0x80310000u; // 8030F584
  c->r[5]=R32(c->r[3]+0x00000010u); // 8030F588
  c->r[3]=c->r[4]+0x00000378u; // 8030F58C
  W32(c->r[31]+0x00000008u,c->r[5]); // 8030F590
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 8030F594
  W8(c->r[31]+0x00000070u,c->r[0]); // 8030F598
  W32(c->r[31]+0x00000010u,c->r[0]); // 8030F59C
  W8(c->r[31]+0x00000020u,c->r[0]); // 8030F5A0
  c->lr=0x8030F5A8u; f_8031BC08(c); // 8030F5A4
  c->r[3]=c->r[31]+0x0000001Au; // 8030F5A8
  c->r[4]=c->r[30]+0x00000008u; // 8030F5AC
  c->lr=0x8030F5B4u; f_8030E838(c); // 8030F5B0
  c->r[0]=R32(c->r[31]+0x00000008u); // 8030F5B4
  cmps(c,0,(int32_t)c->r[0],0); // 8030F5B8
  if (crb(c,2)) { goto L_8030F5CC; } // 8030F5BC
  c->r[3]=c->r[31]+0x0000001Au; // 8030F5C0
  c->lr=0x8030F5C8u; f_8030FFD4(c); // 8030F5C4
  goto L_8030F654; // 8030F5C8
L_8030F5CC:;
  c->r[3]=0u+0x80570000u; // 8030F5CC
  c->r[3]=c->r[3]+0x000058F8u; // 8030F5D0
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 8030F5D4
  cmpu(c,0,c->r[4],0x00007530u); // 8030F5D8
  if (!crb(c,0)) { goto L_8030F5F0; } // 8030F5DC
  c->r[5]=c->r[4]+0x00000064u; // 8030F5E0
  c->r[3]=c->r[31]+0x00000058u; // 8030F5E4
  c->r[4]=0u+0x00000205u; // 8030F5E8
  c->lr=0x8030F5F0u; f_8030ED00(c); // 8030F5EC
L_8030F5F0:;
  c->r[31]=0u+0x80570000u; // 8030F5F0
  c->r[4]=0u+0x80310000u; // 8030F5F4
  c->r[31]=c->r[31]+0x00005518u; // 8030F5F8
  c->r[3]=c->r[31]+0x0000001Au; // 8030F5FC
  c->r[4]=c->r[4]+0x00000444u; // 8030F600
  c->lr=0x8030F608u; f_80318EA0(c); // 8030F604
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8030F608
  cmpu(c,0,c->r[0],0x00000001u); // 8030F60C
  if (crb(c,2)) { goto L_8030F654; } // 8030F610
  c->r[3]=c->r[31]+0x00000058u; // 8030F614
  c->lr=0x8030F61Cu; f_8030ED20(c); // 8030F618
  c->r[3]=0u+0x00000110u; // 8030F61C
  c->lr=0x8030F624u; f_8030AD84(c); // 8030F620
  cmps(c,0,(int32_t)c->r[3],0); // 8030F624
  c->r[30]=c->r[3]|c->r[3]; // 8030F628
  if (crb(c,2)) { goto L_8030F654; } // 8030F62C
  c->r[3]=c->r[3]+0x00000008u; // 8030F630
  c->r[4]=c->r[31]+0x0000001Au; // 8030F634
  c->lr=0x8030F63Cu; f_8030E838(c); // 8030F638
  c->r[3]=0u+0x00000000u; // 8030F63C
  c->r[0]=0u+0x00000204u; // 8030F640
  W8(c->r[30]+0x0000000Eu,c->r[3]); // 8030F644
  c->r[3]=c->r[30]|c->r[30]; // 8030F648
  W16(c->r[30]+0x00000000u,c->r[0]); // 8030F64C
  c->lr=0x8030F654u; f_8030ECE4(c); // 8030F650
L_8030F654:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030F654
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030F658
  c->r[30]=R32(c->r[1]+0x00000008u); // 8030F65C
  c->lr=c->r[0]; // 8030F660
  c->r[1]=c->r[1]+0x00000010u; // 8030F664
  return; // 8030F668
}

// bta_dm_inq_cmpl
void f_8030F66C(Ctx* __restrict c) {
  trace_call(0x8030F66Cu);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F66C
  c->r[0]=c->lr; // 8030F670
  W32(c->r[1]+0x00000234u,c->r[0]); // 8030F674
  c->r[11]=c->r[1]+0x00000230u; // 8030F678
  c->lr=0x8030F680u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8030F67C
  c->r[31]=c->r[3]|c->r[3]; // 8030F680
  c->r[27]=0u+0x00000001u; // 8030F684
  c->lr=0x8030F68Cu; f_803190C0(c); // 8030F688
  c->r[28]=0u+0x80570000u; // 8030F68C
  cmps(c,0,(int32_t)c->r[3],0); // 8030F690
  c->r[29]=c->r[28]+0x00005518u; // 8030F694
  W32(c->r[29]+0x00000004u,c->r[3]); // 8030F698
  if (crb(c,2)) { goto L_8030F824; } // 8030F69C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8030F6A0
  c->r[27]=0u+0x00000000u; // 8030F6A4
  cmps(c,0,(int32_t)c->r[0],0); // 8030F6A8
  if (crb(c,2)) { goto L_8030F724; } // 8030F6AC
  c->r[3]=c->r[3]+0x00000002u; // 8030F6B0
  c->lr=0x8030F6B8u; f_80315538(c); // 8030F6B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8030F6B8
  if (crb(c,2)) { goto L_8030F6CC; } // 8030F6BC
  c->r[0]=0u+0x00000000u; // 8030F6C0
  W8(c->r[29]+0x00000078u,c->r[0]); // 8030F6C4
  goto L_8030F6D4; // 8030F6C8
L_8030F6CC:;
  c->r[0]=0u+0x00000001u; // 8030F6CC
  W8(c->r[29]+0x00000078u,c->r[0]); // 8030F6D0
L_8030F6D4:;
  c->r[30]=0u+0x80570000u; // 8030F6D4
  c->r[3]=0u+0x80310000u; // 8030F6D8
  c->r[30]=c->r[30]+0x00005518u; // 8030F6DC
  c->r[29]=0u+0x00000000u; // 8030F6E0
  W8(c->r[30]+0x00000079u,c->r[29]); // 8030F6E4
  c->r[3]=c->r[3]+0x00000378u; // 8030F6E8
  c->lr=0x8030F6F0u; f_8031BC08(c); // 8030F6EC
  c->r[0]=R32(c->r[30]+0x00000008u); // 8030F6F0
  c->r[3]=c->r[30]+0x0000001Au; // 8030F6F4
  c->r[4]=R32(c->r[30]+0x00000004u); // 8030F6F8
  W8(c->r[30]+0x00000070u,c->r[29]); // 8030F6FC
  c->r[4]=c->r[4]+0x00000002u; // 8030F700
  W32(c->r[30]+0x00000010u,c->r[29]); // 8030F704
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8030F708
  W8(c->r[30]+0x00000020u,c->r[29]); // 8030F70C
  c->lr=0x8030F714u; f_8030E838(c); // 8030F710
  c->r[3]=R32(c->r[30]+0x00000004u); // 8030F714
  c->r[3]=c->r[3]+0x00000002u; // 8030F718
  c->lr=0x8030F720u; f_8030FFD4(c); // 8030F71C
  goto L_8030F824; // 8030F720
L_8030F724:;
  c->r[27]=0u+0x00000001u; // 8030F724
  c->r[30]=0u+0x00000000u; // 8030F728
  goto L_8030F818; // 8030F72C
L_8030F730:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 8030F730
  cmps(c,0,(int32_t)c->r[0],0); // 8030F734
  if (crb(c,2)) { goto L_8030F768; } // 8030F738
  c->r[3]=c->r[1]+0x00000008u; // 8030F73C
  c->r[4]=c->r[4]+0x00000002u; // 8030F740
  c->lr=0x8030F748u; f_8030E838(c); // 8030F744
  c->r[12]=R32(c->r[28]+0x00005518u); // 8030F748
  c->r[4]=c->r[1]+0x00000008u; // 8030F74C
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 8030F750
  c->r[3]=0u+0x00000002u; // 8030F754
  W32(c->r[1]+0x00000108u,c->r[30]); // 8030F758
  c->ctr=c->r[12]; // 8030F75C
  if (true) { c->lr=0x8030F764u; dispatch(c,c->ctr); } // 8030F760
  goto L_8030F80C; // 8030F764
L_8030F768:;
  c->r[3]=0u+0x80570000u; // 8030F768
  c->r[3]=c->r[3]+0x000058F8u; // 8030F76C
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 8030F770
  cmpu(c,0,c->r[4],0x00007530u); // 8030F774
  if (!crb(c,0)) { goto L_8030F794; } // 8030F778
  c->r[3]=0u+0x80570000u; // 8030F77C
  c->r[5]=c->r[4]+0x00000064u; // 8030F780
  c->r[3]=c->r[3]+0x00005518u; // 8030F784
  c->r[4]=0u+0x00000205u; // 8030F788
  c->r[3]=c->r[3]+0x00000058u; // 8030F78C
  c->lr=0x8030F794u; f_8030ED00(c); // 8030F790
L_8030F794:;
  c->r[30]=0u+0x80570000u; // 8030F794
  c->r[4]=0u+0x80310000u; // 8030F798
  c->r[30]=c->r[30]+0x00005518u; // 8030F79C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8030F7A0
  c->r[4]=c->r[4]+0x000003B8u; // 8030F7A4
  c->r[3]=c->r[3]+0x00000002u; // 8030F7A8
  c->lr=0x8030F7B0u; f_80318EA0(c); // 8030F7AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8030F7B0
  cmpu(c,0,c->r[0],0x00000001u); // 8030F7B4
  if (crb(c,2)) { goto L_8030F804; } // 8030F7B8
  c->r[3]=c->r[30]+0x00000058u; // 8030F7BC
  c->lr=0x8030F7C4u; f_8030ED20(c); // 8030F7C0
  c->r[4]=R32(c->r[30]+0x00000004u); // 8030F7C4
  c->r[3]=0u+0x00000110u; // 8030F7C8
  c->r[28]=c->r[4]+0x00000002u; // 8030F7CC
  c->lr=0x8030F7D4u; f_8030AD84(c); // 8030F7D0
  cmps(c,0,(int32_t)c->r[3],0); // 8030F7D4
  c->r[29]=c->r[3]|c->r[3]; // 8030F7D8
  if (crb(c,2)) { goto L_8030F804; } // 8030F7DC
  c->r[4]=c->r[28]|c->r[28]; // 8030F7E0
  c->r[3]=c->r[3]+0x00000008u; // 8030F7E4
  c->lr=0x8030F7ECu; f_8030E838(c); // 8030F7E8
  c->r[3]=0u+0x00000000u; // 8030F7EC
  c->r[0]=0u+0x00000204u; // 8030F7F0
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 8030F7F4
  c->r[3]=c->r[29]|c->r[29]; // 8030F7F8
  W16(c->r[29]+0x00000000u,c->r[0]); // 8030F7FC
  c->lr=0x8030F804u; f_8030ECE4(c); // 8030F800
L_8030F804:;
  c->r[27]=0u+0x00000000u; // 8030F804
  goto L_8030F824; // 8030F808
L_8030F80C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8030F80C
  c->lr=0x8030F814u; f_80319178(c); // 8030F810
  W32(c->r[29]+0x00000004u,c->r[3]); // 8030F814
L_8030F818:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 8030F818
  cmps(c,0,(int32_t)c->r[4],0); // 8030F81C
  if (!crb(c,2)) { IRQCHK(c); goto L_8030F730; } // 8030F820
L_8030F824:;
  cmps(c,0,(int32_t)c->r[27],0); // 8030F824
  if (crb(c,2)) { goto L_8030F858; } // 8030F828
  c->r[4]=0u+0x80570000u; // 8030F82C
  c->r[0]=0u+0x00000000u; // 8030F830
  c->r[4]=c->r[4]+0x00005518u; // 8030F834
  c->r[3]=0u+0x00000110u; // 8030F838
  W32(c->r[4]+0x00000008u,c->r[0]); // 8030F83C
  c->lr=0x8030F844u; f_8030AD84(c); // 8030F840
  cmps(c,0,(int32_t)c->r[3],0); // 8030F844
  if (crb(c,2)) { goto L_8030F858; } // 8030F848
  c->r[0]=0u+0x00000207u; // 8030F84C
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030F850
  c->lr=0x8030F858u; f_8030ECE4(c); // 8030F854
L_8030F858:;
  c->r[3]=0u+0x80570000u; // 8030F858
  c->r[0]=R8(c->r[31]+0x00000008u); // 8030F85C
  c->r[12]=R32(c->r[3]+0x00005518u); // 8030F860
  c->r[4]=c->r[1]+0x00000110u; // 8030F864
  W8(c->r[1]+0x00000110u,c->r[0]); // 8030F868
  c->r[3]=0u+0x00000001u; // 8030F86C
  c->ctr=c->r[12]; // 8030F870
  if (true) { c->lr=0x8030F878u; dispatch(c,c->ctr); } // 8030F874
  c->r[11]=c->r[1]+0x00000230u; // 8030F878
  c->lr=0x8030F880u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8030F87C
  c->r[0]=R32(c->r[1]+0x00000234u); // 8030F880
  c->lr=c->r[0]; // 8030F884
  c->r[1]=c->r[1]+0x00000230u; // 8030F888
  return; // 8030F88C
}

// bta_dm_rmt_name
void f_8030F890(Ctx* __restrict c) {
  trace_call(0x8030F890u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F890
  c->r[0]=c->lr; // 8030F894
  W32(c->r[1]+0x00000134u,c->r[0]); // 8030F898
  c->r[11]=c->r[1]+0x00000130u; // 8030F89C
  c->lr=0x8030F8A4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8030F8A0
  c->r[28]=0u+0x80570000u; // 8030F8A4
  c->r[31]=c->r[3]|c->r[3]; // 8030F8A8
  c->r[27]=0u+0x00000001u; // 8030F8AC
  c->r[30]=0u+0x00000000u; // 8030F8B0
  c->r[29]=c->r[28]+0x00005518u; // 8030F8B4
  goto L_8030F994; // 8030F8B8
L_8030F8BC:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 8030F8BC
  c->r[0]=R8(c->r[4]+0x00000010u); // 8030F8C0
  cmps(c,0,(int32_t)c->r[0],0); // 8030F8C4
  if (crb(c,2)) { goto L_8030F8F8; } // 8030F8C8
  c->r[3]=c->r[1]+0x00000008u; // 8030F8CC
  c->r[4]=c->r[4]+0x00000002u; // 8030F8D0
  c->lr=0x8030F8D8u; f_8030E838(c); // 8030F8D4
  c->r[12]=R32(c->r[28]+0x00005518u); // 8030F8D8
  c->r[4]=c->r[1]+0x00000008u; // 8030F8DC
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 8030F8E0
  c->r[3]=0u+0x00000002u; // 8030F8E4
  W32(c->r[1]+0x00000108u,c->r[30]); // 8030F8E8
  c->ctr=c->r[12]; // 8030F8EC
  if (true) { c->lr=0x8030F8F4u; dispatch(c,c->ctr); } // 8030F8F0
  goto L_8030F994; // 8030F8F4
L_8030F8F8:;
  c->r[3]=0u+0x80570000u; // 8030F8F8
  c->r[3]=c->r[3]+0x000058F8u; // 8030F8FC
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 8030F900
  cmpu(c,0,c->r[4],0x00007530u); // 8030F904
  if (!crb(c,0)) { goto L_8030F91C; } // 8030F908
  c->r[5]=c->r[4]+0x00000064u; // 8030F90C
  c->r[3]=c->r[29]+0x00000058u; // 8030F910
  c->r[4]=0u+0x00000205u; // 8030F914
  c->lr=0x8030F91Cu; f_8030ED00(c); // 8030F918
L_8030F91C:;
  c->r[30]=0u+0x80570000u; // 8030F91C
  c->r[4]=0u+0x80310000u; // 8030F920
  c->r[30]=c->r[30]+0x00005518u; // 8030F924
  c->r[3]=R32(c->r[30]+0x00000004u); // 8030F928
  c->r[4]=c->r[4]+0x000003B8u; // 8030F92C
  c->r[3]=c->r[3]+0x00000002u; // 8030F930
  c->lr=0x8030F938u; f_80318EA0(c); // 8030F934
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8030F938
  cmpu(c,0,c->r[0],0x00000001u); // 8030F93C
  if (crb(c,2)) { goto L_8030F98C; } // 8030F940
  c->r[3]=c->r[30]+0x00000058u; // 8030F944
  c->lr=0x8030F94Cu; f_8030ED20(c); // 8030F948
  c->r[4]=R32(c->r[30]+0x00000004u); // 8030F94C
  c->r[3]=0u+0x00000110u; // 8030F950
  c->r[28]=c->r[4]+0x00000002u; // 8030F954
  c->lr=0x8030F95Cu; f_8030AD84(c); // 8030F958
  cmps(c,0,(int32_t)c->r[3],0); // 8030F95C
  c->r[29]=c->r[3]|c->r[3]; // 8030F960
  if (crb(c,2)) { goto L_8030F98C; } // 8030F964
  c->r[4]=c->r[28]|c->r[28]; // 8030F968
  c->r[3]=c->r[3]+0x00000008u; // 8030F96C
  c->lr=0x8030F974u; f_8030E838(c); // 8030F970
  c->r[3]=0u+0x00000000u; // 8030F974
  c->r[0]=0u+0x00000204u; // 8030F978
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 8030F97C
  c->r[3]=c->r[29]|c->r[29]; // 8030F980
  W16(c->r[29]+0x00000000u,c->r[0]); // 8030F984
  c->lr=0x8030F98Cu; f_8030ECE4(c); // 8030F988
L_8030F98C:;
  c->r[27]=0u+0x00000000u; // 8030F98C
  goto L_8030F9A8; // 8030F990
L_8030F994:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8030F994
  c->lr=0x8030F99Cu; f_80319178(c); // 8030F998
  cmps(c,0,(int32_t)c->r[3],0); // 8030F99C
  W32(c->r[29]+0x00000004u,c->r[3]); // 8030F9A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8030F8BC; } // 8030F9A4
L_8030F9A8:;
  cmps(c,0,(int32_t)c->r[27],0); // 8030F9A8
  if (crb(c,2)) { goto L_8030F9CC; } // 8030F9AC
  c->r[3]=0u+0x00000110u; // 8030F9B0
  c->lr=0x8030F9B8u; f_8030AD84(c); // 8030F9B4
  cmps(c,0,(int32_t)c->r[3],0); // 8030F9B8
  if (crb(c,2)) { goto L_8030F9CC; } // 8030F9BC
  c->r[0]=0u+0x00000207u; // 8030F9C0
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030F9C4
  c->lr=0x8030F9CCu; f_8030ECE4(c); // 8030F9C8
L_8030F9CC:;
  c->r[3]=0u+0x80570000u; // 8030F9CC
  c->r[4]=c->r[31]+0x00000008u; // 8030F9D0
  c->r[12]=R32(c->r[3]+0x00005518u); // 8030F9D4
  c->r[3]=0u+0x00000002u; // 8030F9D8
  c->ctr=c->r[12]; // 8030F9DC
  if (true) { c->lr=0x8030F9E4u; dispatch(c,c->ctr); } // 8030F9E0
  c->r[11]=c->r[1]+0x00000130u; // 8030F9E4
  c->lr=0x8030F9ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8030F9E8
  c->r[0]=R32(c->r[1]+0x00000134u); // 8030F9EC
  c->lr=c->r[0]; // 8030F9F0
  c->r[1]=c->r[1]+0x00000130u; // 8030F9F4
  return; // 8030F9F8
}

// bta_dm_disc_rmt_name
void f_8030F9FC(Ctx* __restrict c) {
  trace_call(0x8030F9FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030F9FC
  c->r[0]=c->lr; // 8030FA00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FA04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FA08
  c->r[31]=c->r[3]|c->r[3]; // 8030FA0C
  c->r[3]=0u+0x00000110u; // 8030FA10
  c->lr=0x8030FA18u; f_8030AD84(c); // 8030FA14
  cmps(c,0,(int32_t)c->r[3],0); // 8030FA18
  if (crb(c,2)) { goto L_8030FA2C; } // 8030FA1C
  c->r[0]=0u+0x00000207u; // 8030FA20
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030FA24
  c->lr=0x8030FA2Cu; f_8030ECE4(c); // 8030FA28
L_8030FA2C:;
  c->r[0]=0u+0x00000000u; // 8030FA2C
  c->r[5]=0u+0x80570000u; // 8030FA30
  W32(c->r[31]+0x00000108u,c->r[0]); // 8030FA34
  c->r[4]=c->r[31]+0x00000008u; // 8030FA38
  c->r[3]=0u+0x00000002u; // 8030FA3C
  c->r[12]=R32(c->r[5]+0x00005518u); // 8030FA40
  c->ctr=c->r[12]; // 8030FA44
  if (true) { c->lr=0x8030FA4Cu; dispatch(c,c->ctr); } // 8030FA48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FA4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FA50
  c->lr=c->r[0]; // 8030FA54
  c->r[1]=c->r[1]+0x00000010u; // 8030FA58
  return; // 8030FA5C
}

// bta_dm_sdp_result
void f_8030FA60(Ctx* __restrict c) {
  trace_call(0x8030FA60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FA60
  c->r[0]=c->lr; // 8030FA64
  W32(c->r[1]+0x00000024u,c->r[0]); // 8030FA68
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8030FA6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8030FA70
  W32(c->r[1]+0x00000014u,c->r[29]); // 8030FA74
  c->r[29]=0u+0x00000000u; // 8030FA78
  c->r[5]=R16(c->r[3]+0x00000008u); // 8030FA7C
  c->r[3]=0u+0x00000000u; // 8030FA80
  cmps(c,0,(int32_t)c->r[5],0); // 8030FA84
  if (crb(c,2)) { goto L_8030FA9C; } // 8030FA88
  cmpu(c,0,c->r[5],0x0000FFF0u); // 8030FA8C
  if (crb(c,2)) { goto L_8030FA9C; } // 8030FA90
  cmpu(c,0,c->r[5],0x0000FFF4u); // 8030FA94
  if (!crb(c,2)) { goto L_8030FBEC; } // 8030FA98
L_8030FA9C:;
  c->r[6]=0u+0x80570000u; // 8030FA9C
  c->r[4]=0u+0x80440000u; // 8030FAA0
  c->r[6]=c->r[6]+0x00005518u; // 8030FAA4
  cmpu(c,0,c->r[5],0x0000FFF4u); // 8030FAA8
  c->r[5]=R8(c->r[6]+0x00000070u); // 8030FAAC
  c->r[4]=c->r[4]+0xFFFFDB28u; // 8030FAB0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8030FAB4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8030FAB8
  c->r[30]=R16(c->r[4]+c->r[0]); // 8030FABC
  if (crb(c,2)) { goto L_8030FADC; } // 8030FAC0
  c->r[3]=R32(c->r[6]+0x00000014u); // 8030FAC4
  c->r[4]=c->r[30]|c->r[30]; // 8030FAC8
  c->r[5]=0u+0x00000000u; // 8030FACC
  c->lr=0x8030FAD4u; f_80333520(c); // 8030FAD0
  cmps(c,0,(int32_t)c->r[3],0); // 8030FAD4
  if (crb(c,2)) { goto L_8030FB3C; } // 8030FAD8
L_8030FADC:;
  cmpu(c,0,c->r[30],0x00001200u); // 8030FADC
  if (!crb(c,2)) { goto L_8030FB0C; } // 8030FAE0
  cmps(c,0,(int32_t)c->r[3],0); // 8030FAE4
  if (crb(c,2)) { goto L_8030FB10; } // 8030FAE8
  c->r[4]=0u+0x00010000u; // 8030FAEC
  c->r[0]=c->r[4]+0xFFFF8001u; // 8030FAF0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8030FAF4
  c->lr=0x8030FAFCu; f_803334F8(c); // 8030FAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8030FAFC
  if (crb(c,2)) { goto L_8030FB10; } // 8030FB00
  c->r[29]=0u+0x00000001u; // 8030FB04
  goto L_8030FB10; // 8030FB08
L_8030FB0C:;
  c->r[29]=0u+0x00000001u; // 8030FB0C
L_8030FB10:;
  cmps(c,0,(int32_t)c->r[29],0); // 8030FB10
  if (crb(c,2)) { goto L_8030FB3C; } // 8030FB14
  c->r[6]=0u+0x80570000u; // 8030FB18
  c->r[4]=0u+0x00000001u; // 8030FB1C
  c->r[6]=c->r[6]+0x00005518u; // 8030FB20
  c->r[3]=R8(c->r[6]+0x00000070u); // 8030FB24
  c->r[5]=R32(c->r[6]+0x00000010u); // 8030FB28
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8030FB2C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 8030FB30
  c->r[0]=c->r[5]|c->r[0]; // 8030FB34
  W32(c->r[6]+0x00000010u,c->r[0]); // 8030FB38
L_8030FB3C:;
  c->r[30]=0u+0x80570000u; // 8030FB3C
  c->r[30]=c->r[30]+0x00005518u; // 8030FB40
  c->r[3]=R32(c->r[30]+0x00000014u); // 8030FB44
  c->lr=0x8030FB4Cu; f_8030B00C(c); // 8030FB48
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8030FB4C
  c->r[31]=0u+0x00000000u; // 8030FB50
  W32(c->r[30]+0x00000014u,c->r[31]); // 8030FB54
  cmps(c,0,(int32_t)c->r[0],0); // 8030FB58
  if (crb(c,2)) { goto L_8030FB6C; } // 8030FB5C
  c->r[3]=c->r[30]+0x0000001Au; // 8030FB60
  c->lr=0x8030FB68u; f_8030FFD4(c); // 8030FB64
  goto L_8030FCAC; // 8030FB68
L_8030FB6C:;
  c->r[3]=0u+0x80310000u; // 8030FB6C
  c->r[3]=c->r[3]+0x00000378u; // 8030FB70
  c->lr=0x8030FB78u; f_8031BC58(c); // 8030FB74
  c->r[3]=0u+0x00000110u; // 8030FB78
  c->lr=0x8030FB80u; f_8030AD84(c); // 8030FB7C
  cmps(c,0,(int32_t)c->r[3],0); // 8030FB80
  c->r[29]=c->r[3]|c->r[3]; // 8030FB84
  if (crb(c,2)) { goto L_8030FCAC; } // 8030FB88
  c->r[0]=0u+0x00000208u; // 8030FB8C
  c->r[4]=c->r[30]+0x0000001Au; // 8030FB90
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030FB94
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 8030FB98
  c->r[0]=R32(c->r[30]+0x00000010u); // 8030FB9C
  W32(c->r[3]+0x00000108u,c->r[0]); // 8030FBA0
  c->r[3]=c->r[3]+0x00000008u; // 8030FBA4
  c->lr=0x8030FBACu; f_8030E838(c); // 8030FBA8
  c->r[0]=R8(c->r[30]+0x00000020u); // 8030FBAC
  c->r[31]=c->r[30]+0x00000020u; // 8030FBB0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8030FBB4
  if (!crb(c,2)) { goto L_8030FBD0; } // 8030FBB8
  c->r[3]=c->r[30]+0x0000001Au; // 8030FBBC
  c->lr=0x8030FBC4u; f_8031667C(c); // 8030FBC0
  cmps(c,0,(int32_t)c->r[3],0); // 8030FBC4
  if (crb(c,2)) { goto L_8030FBD0; } // 8030FBC8
  c->r[31]=c->r[3]|c->r[3]; // 8030FBCC
L_8030FBD0:;
  c->r[4]=c->r[31]|c->r[31]; // 8030FBD0
  c->r[3]=c->r[29]+0x0000000Eu; // 8030FBD4
  c->r[5]=0u+0x00000020u; // 8030FBD8
  c->lr=0x8030FBE0u; f_802E9608(c); // 8030FBDC
  c->r[3]=c->r[29]|c->r[29]; // 8030FBE0
  c->lr=0x8030FBE8u; f_8030ECE4(c); // 8030FBE4
  goto L_8030FCAC; // 8030FBE8
L_8030FBEC:;
  cmpu(c,0,c->r[5],0x0000FFF1u); // 8030FBEC
  if (crb(c,2)) { goto L_8030FC04; } // 8030FBF0
  c->r[0]=c->r[5]+0x0000000Au; // 8030FBF4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8030FBF8
  cmpu(c,0,c->r[0],0x00000001u); // 8030FBFC
  if (crb(c,1)) { goto L_8030FC14; } // 8030FC00
L_8030FC04:;
  c->r[3]=0u+0x80570000u; // 8030FC04
  c->r[0]=0u+0x00000000u; // 8030FC08
  c->r[3]=c->r[3]+0x00005518u; // 8030FC0C
  W8(c->r[3]+0x00000078u,c->r[0]); // 8030FC10
L_8030FC14:;
  c->r[31]=0u+0x80570000u; // 8030FC14
  c->r[31]=c->r[31]+0x00005518u; // 8030FC18
  c->r[3]=R32(c->r[31]+0x00000014u); // 8030FC1C
  c->lr=0x8030FC24u; f_8030B00C(c); // 8030FC20
  c->r[0]=0u+0x00000000u; // 8030FC24
  c->r[3]=0u+0x80310000u; // 8030FC28
  W32(c->r[31]+0x00000014u,c->r[0]); // 8030FC2C
  c->r[3]=c->r[3]+0x00000378u; // 8030FC30
  c->lr=0x8030FC38u; f_8031BC58(c); // 8030FC34
  c->r[3]=0u+0x00000110u; // 8030FC38
  c->lr=0x8030FC40u; f_8030AD84(c); // 8030FC3C
  cmps(c,0,(int32_t)c->r[3],0); // 8030FC40
  c->r[29]=c->r[3]|c->r[3]; // 8030FC44
  if (crb(c,2)) { goto L_8030FCAC; } // 8030FC48
  c->r[4]=0u+0x00000208u; // 8030FC4C
  c->r[0]=0u+0x00000001u; // 8030FC50
  W16(c->r[3]+0x00000000u,c->r[4]); // 8030FC54
  c->r[4]=c->r[31]+0x0000001Au; // 8030FC58
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 8030FC5C
  c->r[0]=R32(c->r[31]+0x00000010u); // 8030FC60
  W32(c->r[3]+0x00000108u,c->r[0]); // 8030FC64
  c->r[3]=c->r[3]+0x00000008u; // 8030FC68
  c->lr=0x8030FC70u; f_8030E838(c); // 8030FC6C
  c->r[0]=R8(c->r[31]+0x00000020u); // 8030FC70
  c->r[30]=c->r[31]+0x00000020u; // 8030FC74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8030FC78
  if (!crb(c,2)) { goto L_8030FC94; } // 8030FC7C
  c->r[3]=c->r[31]+0x0000001Au; // 8030FC80
  c->lr=0x8030FC88u; f_8031667C(c); // 8030FC84
  cmps(c,0,(int32_t)c->r[3],0); // 8030FC88
  if (crb(c,2)) { goto L_8030FC94; } // 8030FC8C
  c->r[30]=c->r[3]|c->r[3]; // 8030FC90
L_8030FC94:;
  c->r[4]=c->r[30]|c->r[30]; // 8030FC94
  c->r[3]=c->r[29]+0x0000000Eu; // 8030FC98
  c->r[5]=0u+0x00000020u; // 8030FC9C
  c->lr=0x8030FCA4u; f_802E9608(c); // 8030FCA0
  c->r[3]=c->r[29]|c->r[29]; // 8030FCA4
  c->lr=0x8030FCACu; f_8030ECE4(c); // 8030FCA8
L_8030FCAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8030FCAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8030FCB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8030FCB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8030FCB8
  c->lr=c->r[0]; // 8030FCBC
  c->r[1]=c->r[1]+0x00000020u; // 8030FCC0
  return; // 8030FCC4
}

// bta_dm_search_cmpl
void f_8030FCC8(Ctx* __restrict c) {
  trace_call(0x8030FCC8u);
  c->r[4]=0u+0x80570000u; // 8030FCC8
  c->r[3]=0u+0x00000003u; // 8030FCCC
  c->r[12]=R32(c->r[4]+0x00005518u); // 8030FCD0
  c->r[4]=0u+0x00000000u; // 8030FCD4
  c->ctr=c->r[12]; // 8030FCD8
  if (true) { dispatch(c,c->ctr); return; } // 8030FCDC
}

// bta_dm_disc_result
void f_8030FCE0(Ctx* __restrict c) {
  trace_call(0x8030FCE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FCE0
  c->r[0]=c->lr; // 8030FCE4
  c->r[4]=0u+0x80570000u; // 8030FCE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FCEC
  c->r[12]=R32(c->r[4]+0x00005518u); // 8030FCF0
  c->r[4]=c->r[3]+0x00000008u; // 8030FCF4
  c->r[3]=0u+0x00000002u; // 8030FCF8
  c->ctr=c->r[12]; // 8030FCFC
  if (true) { c->lr=0x8030FD04u; dispatch(c,c->ctr); } // 8030FD00
  c->r[3]=0u+0x00000110u; // 8030FD04
  c->lr=0x8030FD0Cu; f_8030AD84(c); // 8030FD08
  cmps(c,0,(int32_t)c->r[3],0); // 8030FD0C
  if (crb(c,2)) { goto L_8030FD20; } // 8030FD10
  c->r[0]=0u+0x00000207u; // 8030FD14
  W16(c->r[3]+0x00000000u,c->r[0]); // 8030FD18
  c->lr=0x8030FD20u; f_8030ECE4(c); // 8030FD1C
L_8030FD20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FD20
  c->lr=c->r[0]; // 8030FD24
  c->r[1]=c->r[1]+0x00000010u; // 8030FD28
  return; // 8030FD2C
}

// bta_dm_search_result
void f_8030FD30(Ctx* __restrict c) {
  trace_call(0x8030FD30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FD30
  c->r[0]=c->lr; // 8030FD34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FD38
  c->r[0]=R32(c->r[3]+0x00000108u); // 8030FD3C
  cmps(c,0,(int32_t)c->r[0],0); // 8030FD40
  if (crb(c,2)) { goto L_8030FD60; } // 8030FD44
  c->r[5]=0u+0x80570000u; // 8030FD48
  c->r[4]=c->r[3]+0x00000008u; // 8030FD4C
  c->r[12]=R32(c->r[5]+0x00005518u); // 8030FD50
  c->r[3]=0u+0x00000002u; // 8030FD54
  c->ctr=c->r[12]; // 8030FD58
  if (true) { c->lr=0x8030FD60u; dispatch(c,c->ctr); } // 8030FD5C
L_8030FD60:;
  c->r[6]=0u+0x80570000u; // 8030FD60
  c->r[6]=c->r[6]+0x00005518u; // 8030FD64
  c->r[0]=R8(c->r[6]+0x00000078u); // 8030FD68
  cmps(c,0,(int32_t)c->r[0],0); // 8030FD6C
  if (!crb(c,2)) { goto L_8030FD84; } // 8030FD70
  c->r[0]=0u+0x00000000u; // 8030FD74
  W8(c->r[6]+0x00000078u,c->r[0]); // 8030FD78
  c->lr=0x8030FD80u; f_80310174(c); // 8030FD7C
  goto L_8030FDA8; // 8030FD80
L_8030FD84:;
  c->r[5]=0u+0x80310000u; // 8030FD84
  c->r[0]=0u+0x00000001u; // 8030FD88
  c->r[5]=c->r[5]+0xFFFFFDB8u; // 8030FD8C
  W8(c->r[6]+0x00000079u,c->r[0]); // 8030FD90
  c->r[3]=c->r[6]+0x00000040u; // 8030FD94
  c->r[4]=0u+0x00000000u; // 8030FD98
  W32(c->r[6]+0x00000048u,c->r[5]); // 8030FD9C
  c->r[5]=0u+0x00000BB8u; // 8030FDA0
  c->lr=0x8030FDA8u; f_8030ED00(c); // 8030FDA4
L_8030FDA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FDA8
  c->lr=c->r[0]; // 8030FDAC
  c->r[1]=c->r[1]+0x00000010u; // 8030FDB0
  return; // 8030FDB4
}

// bta_dm_search_timer_cback
void f_8030FDB8(Ctx* __restrict c) {
  trace_call(0x8030FDB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FDB8
  c->r[0]=c->lr; // 8030FDBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FDC0
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8030FDC4
  cmpu(c,0,c->r[0],0x00000004u); // 8030FDC8
  if (crb(c,0)) { goto L_8030FDE0; } // 8030FDCC
  c->r[4]=0u+0x80490000u; // 8030FDD0
  c->r[3]=0u+0x00000503u; // 8030FDD4
  c->r[4]=c->r[4]+0xFFFFEBF0u; // 8030FDD8
  c->lr=0x8030FDE0u; f_8030E1E8(c); // 8030FDDC
L_8030FDE0:;
  c->r[3]=0u+0x80570000u; // 8030FDE0
  c->r[0]=0u+0x00000000u; // 8030FDE4
  c->r[3]=c->r[3]+0x00005518u; // 8030FDE8
  W8(c->r[3]+0x00000078u,c->r[0]); // 8030FDEC
  c->lr=0x8030FDF4u; f_80310174(c); // 8030FDF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FDF4
  c->lr=c->r[0]; // 8030FDF8
  c->r[1]=c->r[1]+0x00000010u; // 8030FDFC
  return; // 8030FE00
}

// bta_dm_free_sdp_db
void f_8030FE04(Ctx* __restrict c) {
  trace_call(0x8030FE04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FE04
  c->r[0]=c->lr; // 8030FE08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FE0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FE10
  c->r[31]=0u+0x80570000u; // 8030FE14
  c->r[31]=c->r[31]+0x00005518u; // 8030FE18
  c->r[3]=R32(c->r[31]+0x00000014u); // 8030FE1C
  cmps(c,0,(int32_t)c->r[3],0); // 8030FE20
  if (crb(c,2)) { goto L_8030FE34; } // 8030FE24
  c->lr=0x8030FE2Cu; f_8030B00C(c); // 8030FE28
  c->r[0]=0u+0x00000000u; // 8030FE2C
  W32(c->r[31]+0x00000014u,c->r[0]); // 8030FE30
L_8030FE34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FE34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FE38
  c->lr=c->r[0]; // 8030FE3C
  c->r[1]=c->r[1]+0x00000010u; // 8030FE40
  return; // 8030FE44
}

// bta_dm_queue_search
void f_8030FE48(Ctx* __restrict c) {
  trace_call(0x8030FE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FE48
  c->r[0]=c->lr; // 8030FE4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FE50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FE54
  c->r[31]=c->r[3]|c->r[3]; // 8030FE58
  c->r[3]=0u+0x0000001Cu; // 8030FE5C
  c->lr=0x8030FE64u; f_8030AD84(c); // 8030FE60
  c->r[6]=0u+0x80570000u; // 8030FE64
  c->r[4]=c->r[31]|c->r[31]; // 8030FE68
  c->r[6]=c->r[6]+0x00005518u; // 8030FE6C
  c->r[5]=0u+0x0000001Cu; // 8030FE70
  W32(c->r[6]+0x00000074u,c->r[3]); // 8030FE74
  c->lr=0x8030FE7Cu; f_80005FB4(c); // 8030FE78
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FE7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FE80
  c->lr=c->r[0]; // 8030FE84
  c->r[1]=c->r[1]+0x00000010u; // 8030FE88
  return; // 8030FE8C
}

// bta_dm_queue_disc
void f_8030FE90(Ctx* __restrict c) {
  trace_call(0x8030FE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FE90
  c->r[0]=c->lr; // 8030FE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FE9C
  c->r[31]=c->r[3]|c->r[3]; // 8030FEA0
  c->r[3]=0u+0x00000018u; // 8030FEA4
  c->lr=0x8030FEACu; f_8030AD84(c); // 8030FEA8
  c->r[6]=0u+0x80570000u; // 8030FEAC
  c->r[4]=c->r[31]|c->r[31]; // 8030FEB0
  c->r[6]=c->r[6]+0x00005518u; // 8030FEB4
  c->r[5]=0u+0x00000018u; // 8030FEB8
  W32(c->r[6]+0x00000074u,c->r[3]); // 8030FEBC
  c->lr=0x8030FEC4u; f_80005FB4(c); // 8030FEC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FEC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FEC8
  c->lr=c->r[0]; // 8030FECC
  c->r[1]=c->r[1]+0x00000010u; // 8030FED0
  return; // 8030FED4
}

// bta_dm_search_clear_queue
void f_8030FED8(Ctx* __restrict c) {
  trace_call(0x8030FED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FED8
  c->r[0]=c->lr; // 8030FEDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FEE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FEE4
  c->r[31]=0u+0x80570000u; // 8030FEE8
  c->r[31]=c->r[31]+0x00005518u; // 8030FEEC
  c->r[3]=R32(c->r[31]+0x00000074u); // 8030FEF0
  cmps(c,0,(int32_t)c->r[3],0); // 8030FEF4
  if (crb(c,2)) { goto L_8030FF08; } // 8030FEF8
  c->lr=0x8030FF00u; f_8030B00C(c); // 8030FEFC
  c->r[0]=0u+0x00000000u; // 8030FF00
  W32(c->r[31]+0x00000074u,c->r[0]); // 8030FF04
L_8030FF08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FF08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FF0C
  c->lr=c->r[0]; // 8030FF10
  c->r[1]=c->r[1]+0x00000010u; // 8030FF14
  return; // 8030FF18
}

// bta_dm_search_cancel_cmpl
void f_8030FF1C(Ctx* __restrict c) {
  trace_call(0x8030FF1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FF1C
  c->r[0]=c->lr; // 8030FF20
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FF24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FF28
  c->r[31]=0u+0x80570000u; // 8030FF2C
  c->r[31]=c->r[31]+0x00005518u; // 8030FF30
  c->r[3]=R32(c->r[31]+0x00000074u); // 8030FF34
  cmps(c,0,(int32_t)c->r[3],0); // 8030FF38
  if (crb(c,2)) { goto L_8030FF4C; } // 8030FF3C
  c->lr=0x8030FF44u; f_8030ECE4(c); // 8030FF40
  c->r[0]=0u+0x00000000u; // 8030FF44
  W32(c->r[31]+0x00000074u,c->r[0]); // 8030FF48
L_8030FF4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FF4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FF50
  c->lr=c->r[0]; // 8030FF54
  c->r[1]=c->r[1]+0x00000010u; // 8030FF58
  return; // 8030FF5C
}

// bta_dm_search_cancel_transac_cmpl
void f_8030FF60(Ctx* __restrict c) {
  trace_call(0x8030FF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FF60
  c->r[0]=c->lr; // 8030FF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8030FF68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8030FF6C
  c->r[31]=0u+0x80570000u; // 8030FF70
  c->r[31]=c->r[31]+0x00005518u; // 8030FF74
  c->r[3]=R32(c->r[31]+0x00000014u); // 8030FF78
  cmps(c,0,(int32_t)c->r[3],0); // 8030FF7C
  if (crb(c,2)) { goto L_8030FF90; } // 8030FF80
  c->lr=0x8030FF88u; f_8030B00C(c); // 8030FF84
  c->r[0]=0u+0x00000000u; // 8030FF88
  W32(c->r[31]+0x00000014u,c->r[0]); // 8030FF8C
L_8030FF90:;
  c->r[4]=0u+0x80570000u; // 8030FF90
  c->r[3]=0u+0x00000004u; // 8030FF94
  c->r[12]=R32(c->r[4]+0x00005518u); // 8030FF98
  c->r[4]=0u+0x00000000u; // 8030FF9C
  c->ctr=c->r[12]; // 8030FFA0
  if (true) { c->lr=0x8030FFA8u; dispatch(c,c->ctr); } // 8030FFA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8030FFA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8030FFAC
  c->lr=c->r[0]; // 8030FFB0
  c->r[1]=c->r[1]+0x00000010u; // 8030FFB4
  return; // 8030FFB8
}

// bta_dm_search_cancel_notify
void f_8030FFBC(Ctx* __restrict c) {
  trace_call(0x8030FFBCu);
  c->r[4]=0u+0x80570000u; // 8030FFBC
  c->r[3]=0u+0x00000004u; // 8030FFC0
  c->r[12]=R32(c->r[4]+0x00005518u); // 8030FFC4
  c->r[4]=0u+0x00000000u; // 8030FFC8
  c->ctr=c->r[12]; // 8030FFCC
  if (true) { dispatch(c,c->ctr); return; } // 8030FFD0
}

// bta_dm_find_services
void f_8030FFD4(Ctx* __restrict c) {
  trace_call(0x8030FFD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8030FFD4
  c->r[0]=c->lr; // 8030FFD8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8030FFDC
  c->r[11]=c->r[1]+0x00000050u; // 8030FFE0
  c->lr=0x8030FFE8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8030FFE4
  c->r[4]=R16(c->r[2]+0xFFFFB3E0u); // 8030FFE8
  c->r[26]=0u+0x80570000u; // 8030FFEC
  c->r[0]=R16(c->r[2]+0xFFFFB3E2u); // 8030FFF0
  c->r[25]=0u+0x80440000u; // 8030FFF4
  W16(c->r[1]+0x00000008u,c->r[4]); // 8030FFF8
  c->r[30]=c->r[3]|c->r[3]; // 8030FFFC
  c->r[25]=c->r[25]+0xFFFFDB28u; // 80310000
  c->r[26]=c->r[26]+0x00005518u; // 80310004
  W16(c->r[1]+0x0000000Au,c->r[0]); // 80310008
  c->r[31]=0u+0x00000001u; // 8031000C
  c->r[23]=0u+0x00000001u; // 80310010
  c->r[24]=0u+0x00000002u; // 80310014
  c->r[27]=0u+0x80310000u; // 80310018
  c->r[28]=0u+0x00000000u; // 8031001C
  c->r[29]=0u+0x00000017u; // 80310020
  goto L_803100E0; // 80310024
L_80310028:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 80310028
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 8031002C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80310030
  if (crb(c,2)) { goto L_803100D4; } // 80310034
  c->r[3]=0u+0x000000FAu; // 80310038
  c->lr=0x80310040u; f_8030AD84(c); // 8031003C
  cmps(c,0,(int32_t)c->r[3],0); // 80310040
  W32(c->r[26]+0x00000014u,c->r[3]); // 80310044
  if (crb(c,2)) { goto L_803100D4; } // 80310048
  c->r[3]=R8(c->r[26]+0x00000070u); // 8031004C
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 80310050
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 80310054
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[23]<<((c->r[3])&31)); // 80310058
  c->r[0]=R16(c->r[25]+c->r[0]); // 8031005C
  c->r[3]=c->r[4]&~c->r[3]; // 80310060
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 80310064
  cmpu(c,0,c->r[0],0x00001200u); // 80310068
  W16(c->r[1]+0x0000000Cu,c->r[24]); // 8031006C
  W16(c->r[1]+0x00000010u,c->r[0]); // 80310070
  if (!crb(c,2)) { goto L_8031007C; } // 80310074
  c->r[31]=0u+0x00000002u; // 80310078
L_8031007C:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 8031007C
  c->r[7]=c->r[31]|c->r[31]; // 80310080
  c->r[6]=c->r[1]+0x0000000Cu; // 80310084
  c->r[8]=c->r[1]+0x00000008u; // 80310088
  c->r[4]=0u+0x000000FAu; // 8031008C
  c->r[5]=0u+0x00000001u; // 80310090
  c->lr=0x80310098u; f_803330C0(c); // 80310094
  c->r[4]=R32(c->r[26]+0x00000014u); // 80310098
  c->r[3]=c->r[30]|c->r[30]; // 8031009C
  c->r[5]=c->r[27]+0x00000254u; // 803100A0
  c->lr=0x803100A8u; f_80333494(c); // 803100A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803100A8
  if (!crb(c,2)) { goto L_803100C4; } // 803100AC
  c->r[3]=R32(c->r[26]+0x00000014u); // 803100B0
  c->lr=0x803100B8u; f_8030B00C(c); // 803100B4
  W32(c->r[26]+0x00000014u,c->r[28]); // 803100B8
  W8(c->r[26]+0x00000070u,c->r[29]); // 803100BC
  goto L_803100D4; // 803100C0
L_803100C4:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 803100C4
  c->r[0]=c->r[3]+0x00000001u; // 803100C8
  W8(c->r[26]+0x00000070u,c->r[0]); // 803100CC
  goto L_8031015C; // 803100D0
L_803100D4:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 803100D4
  c->r[0]=c->r[3]+0x00000001u; // 803100D8
  W8(c->r[26]+0x00000070u,c->r[0]); // 803100DC
L_803100E0:;
  c->r[0]=R8(c->r[26]+0x00000070u); // 803100E0
  cmpu(c,0,c->r[0],0x00000017u); // 803100E4
  if (crb(c,0)) { IRQCHK(c); goto L_80310028; } // 803100E8
  if (crb(c,0)) { goto L_8031015C; } // 803100EC
  c->r[3]=0u+0x00000110u; // 803100F0
  c->lr=0x803100F8u; f_8030AD84(c); // 803100F4
  cmps(c,0,(int32_t)c->r[3],0); // 803100F8
  c->r[24]=c->r[3]|c->r[3]; // 803100FC
  if (crb(c,2)) { goto L_8031015C; } // 80310100
  c->r[0]=0u+0x00000208u; // 80310104
  c->r[4]=c->r[26]+0x0000001Au; // 80310108
  W16(c->r[3]+0x00000000u,c->r[0]); // 8031010C
  c->r[0]=R32(c->r[26]+0x00000010u); // 80310110
  W32(c->r[3]+0x00000108u,c->r[0]); // 80310114
  c->r[3]=c->r[3]+0x00000008u; // 80310118
  c->lr=0x80310120u; f_8030E838(c); // 8031011C
  c->r[0]=R8(c->r[26]+0x00000020u); // 80310120
  c->r[23]=c->r[26]+0x00000020u; // 80310124
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80310128
  if (!crb(c,2)) { goto L_80310144; } // 8031012C
  c->r[3]=c->r[26]+0x0000001Au; // 80310130
  c->lr=0x80310138u; f_8031667C(c); // 80310134
  cmps(c,0,(int32_t)c->r[3],0); // 80310138
  if (crb(c,2)) { goto L_80310144; } // 8031013C
  c->r[23]=c->r[3]|c->r[3]; // 80310140
L_80310144:;
  c->r[4]=c->r[23]|c->r[23]; // 80310144
  c->r[3]=c->r[24]+0x0000000Eu; // 80310148
  c->r[5]=0u+0x00000020u; // 8031014C
  c->lr=0x80310154u; f_802E9608(c); // 80310150
  c->r[3]=c->r[24]|c->r[24]; // 80310154
  c->lr=0x8031015Cu; f_8030ECE4(c); // 80310158
L_8031015C:;
  c->r[11]=c->r[1]+0x00000050u; // 8031015C
  c->lr=0x80310164u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80310160
  c->r[0]=R32(c->r[1]+0x00000054u); // 80310164
  c->lr=c->r[0]; // 80310168
  c->r[1]=c->r[1]+0x00000050u; // 8031016C
  return; // 80310170
}

// bta_dm_discover_next_device
void f_80310174(Ctx* __restrict c) {
  trace_call(0x80310174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310174
  c->r[0]=c->lr; // 80310178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031017C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80310180
  W32(c->r[1]+0x00000008u,c->r[30]); // 80310184
  c->r[30]=0u+0x80570000u; // 80310188
  c->r[30]=c->r[30]+0x00005518u; // 8031018C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80310190
  c->lr=0x80310198u; f_80319178(c); // 80310194
  cmps(c,0,(int32_t)c->r[3],0); // 80310198
  W32(c->r[30]+0x00000004u,c->r[3]); // 8031019C
  if (crb(c,2)) { goto L_80310218; } // 803101A0
  c->r[3]=c->r[3]+0x00000002u; // 803101A4
  c->lr=0x803101ACu; f_80315538(c); // 803101A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803101AC
  if (crb(c,2)) { goto L_803101C0; } // 803101B0
  c->r[0]=0u+0x00000000u; // 803101B4
  W8(c->r[30]+0x00000078u,c->r[0]); // 803101B8
  goto L_803101C8; // 803101BC
L_803101C0:;
  c->r[0]=0u+0x00000001u; // 803101C0
  W8(c->r[30]+0x00000078u,c->r[0]); // 803101C4
L_803101C8:;
  c->r[31]=0u+0x80570000u; // 803101C8
  c->r[3]=0u+0x80310000u; // 803101CC
  c->r[31]=c->r[31]+0x00005518u; // 803101D0
  c->r[30]=0u+0x00000000u; // 803101D4
  W8(c->r[31]+0x00000079u,c->r[30]); // 803101D8
  c->r[3]=c->r[3]+0x00000378u; // 803101DC
  c->lr=0x803101E4u; f_8031BC08(c); // 803101E0
  c->r[0]=R32(c->r[31]+0x00000008u); // 803101E4
  c->r[3]=c->r[31]+0x0000001Au; // 803101E8
  c->r[4]=R32(c->r[31]+0x00000004u); // 803101EC
  W8(c->r[31]+0x00000070u,c->r[30]); // 803101F0
  c->r[4]=c->r[4]+0x00000002u; // 803101F4
  W32(c->r[31]+0x00000010u,c->r[30]); // 803101F8
  W8(c->r[31]+0x00000020u,c->r[30]); // 803101FC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80310200
  c->lr=0x80310208u; f_8030E838(c); // 80310204
  c->r[3]=R32(c->r[31]+0x00000004u); // 80310208
  c->r[3]=c->r[3]+0x00000002u; // 8031020C
  c->lr=0x80310214u; f_8030FFD4(c); // 80310210
  goto L_8031023C; // 80310214
L_80310218:;
  c->r[0]=0u+0x00000000u; // 80310218
  c->r[3]=0u+0x00000110u; // 8031021C
  W32(c->r[30]+0x00000008u,c->r[0]); // 80310220
  c->lr=0x80310228u; f_8030AD84(c); // 80310224
  cmps(c,0,(int32_t)c->r[3],0); // 80310228
  if (crb(c,2)) { goto L_8031023C; } // 8031022C
  c->r[0]=0u+0x00000207u; // 80310230
  W16(c->r[3]+0x00000000u,c->r[0]); // 80310234
  c->lr=0x8031023Cu; f_8030ECE4(c); // 80310238
L_8031023C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031023C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80310240
  c->r[30]=R32(c->r[1]+0x00000008u); // 80310244
  c->lr=c->r[0]; // 80310248
  c->r[1]=c->r[1]+0x00000010u; // 8031024C
  return; // 80310250
}

// bta_dm_sdp_callback
void f_80310254(Ctx* __restrict c) {
  trace_call(0x80310254u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310254
  c->r[0]=c->lr; // 80310258
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031025C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80310260
  c->r[31]=c->r[3]|c->r[3]; // 80310264
  c->r[3]=0u+0x0000000Au; // 80310268
  c->lr=0x80310270u; f_8030AD84(c); // 8031026C
  cmps(c,0,(int32_t)c->r[3],0); // 80310270
  if (crb(c,2)) { goto L_80310288; } // 80310274
  c->r[0]=0u+0x00000206u; // 80310278
  W16(c->r[3]+0x00000000u,c->r[0]); // 8031027C
  W16(c->r[3]+0x00000008u,c->r[31]); // 80310280
  c->lr=0x80310288u; f_8030ECE4(c); // 80310284
L_80310288:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80310288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031028C
  c->lr=c->r[0]; // 80310290
  c->r[1]=c->r[1]+0x00000010u; // 80310294
  return; // 80310298
}

// bta_dm_inq_results_cb
void f_8031029C(Ctx* __restrict c) {
  trace_call(0x8031029Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031029C
  c->r[0]=c->lr; // 803102A0
  W32(c->r[1]+0x00000124u,c->r[0]); // 803102A4
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803102A8
  c->r[31]=c->r[3]|c->r[3]; // 803102AC
  c->r[3]=c->r[1]+0x00000008u; // 803102B0
  c->r[4]=c->r[31]+0x00000002u; // 803102B4
  c->lr=0x803102BCu; f_8030E838(c); // 803102B8
  c->r[3]=c->r[1]+0x0000000Eu; // 803102BC
  c->r[4]=c->r[31]+0x00000008u; // 803102C0
  c->r[5]=0u+0x00000003u; // 803102C4
  c->lr=0x803102CCu; f_80005FB4(c); // 803102C8
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 803102CC
  c->r[3]=c->r[31]+0x00000002u; // 803102D0
  W8(c->r[1]+0x00000011u,c->r[0]); // 803102D4
  c->lr=0x803102DCu; f_80319000(c); // 803102D8
  cmps(c,0,(int32_t)c->r[3],0); // 803102DC
  c->r[31]=c->r[3]|c->r[3]; // 803102E0
  if (crb(c,2)) { goto L_803102F0; } // 803102E4
  c->r[0]=0u+0x00000000u; // 803102E8
  W8(c->r[1]+0x00000012u,c->r[0]); // 803102EC
L_803102F0:;
  c->r[3]=0u+0x80570000u; // 803102F0
  c->r[4]=c->r[1]+0x00000008u; // 803102F4
  c->r[12]=R32(c->r[3]+0x00005518u); // 803102F8
  c->r[3]=0u+0x00000000u; // 803102FC
  c->ctr=c->r[12]; // 80310300
  if (true) { c->lr=0x80310308u; dispatch(c,c->ctr); } // 80310304
  cmps(c,0,(int32_t)c->r[31],0); // 80310308
  if (crb(c,2)) { goto L_80310318; } // 8031030C
  c->r[0]=R8(c->r[1]+0x00000012u); // 80310310
  W8(c->r[31]+0x00000010u,c->r[0]); // 80310314
L_80310318:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 80310318
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 8031031C
  c->lr=c->r[0]; // 80310320
  c->r[1]=c->r[1]+0x00000120u; // 80310324
  return; // 80310328
}

// bta_dm_inq_cmpl_cb
void f_8031032C(Ctx* __restrict c) {
  trace_call(0x8031032Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031032C
  c->r[0]=c->lr; // 80310330
  W32(c->r[1]+0x00000014u,c->r[0]); // 80310334
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80310338
  c->r[31]=c->r[3]|c->r[3]; // 8031033C
  c->r[3]=0u+0x00000110u; // 80310340
  c->lr=0x80310348u; f_8030AD84(c); // 80310344
  cmps(c,0,(int32_t)c->r[3],0); // 80310348
  if (crb(c,2)) { goto L_80310364; } // 8031034C
  c->r[0]=0u+0x00000203u; // 80310350
  W16(c->r[3]+0x00000000u,c->r[0]); // 80310354
  c->r[0]=R8(c->r[31]+0x00000001u); // 80310358
  W8(c->r[3]+0x00000008u,c->r[0]); // 8031035C
  c->lr=0x80310364u; f_8030ECE4(c); // 80310360
L_80310364:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80310364
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80310368
  c->lr=c->r[0]; // 8031036C
  c->r[1]=c->r[1]+0x00000010u; // 80310370
  return; // 80310374
}

// bta_dm_service_search_remname_cback
void f_80310378(Ctx* __restrict c) {
  trace_call(0x80310378u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310378
  c->r[0]=c->lr; // 8031037C
  c->r[3]=0u+0x80570000u; // 80310380
  c->r[4]=c->r[5]|c->r[5]; // 80310384
  c->r[3]=c->r[3]+0x00005518u; // 80310388
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031038C
  c->r[5]=0u+0x0000001Fu; // 80310390
  c->r[3]=c->r[3]+0x00000020u; // 80310394
  c->lr=0x8031039Cu; f_802E9608(c); // 80310398
  c->r[3]=0u+0x80310000u; // 8031039C
  c->r[3]=c->r[3]+0x00000378u; // 803103A0
  c->lr=0x803103A8u; f_8031BC58(c); // 803103A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803103A8
  c->lr=c->r[0]; // 803103AC
  c->r[1]=c->r[1]+0x00000010u; // 803103B0
  return; // 803103B4
}

// bta_dm_remname_cback
void f_803103B8(Ctx* __restrict c) {
  trace_call(0x803103B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803103B8
  c->r[0]=c->lr; // 803103BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803103C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803103C4
  c->r[31]=0u+0x80570000u; // 803103C8
  c->r[31]=c->r[31]+0x00005518u; // 803103CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803103D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803103D4
  c->r[29]=c->r[3]|c->r[3]; // 803103D8
  c->r[3]=c->r[31]+0x00000058u; // 803103DC
  c->lr=0x803103E4u; f_8030ED20(c); // 803103E0
  c->r[3]=0u+0x00000110u; // 803103E4
  c->lr=0x803103ECu; f_8030AD84(c); // 803103E8
  cmps(c,0,(int32_t)c->r[3],0); // 803103EC
  c->r[30]=c->r[3]|c->r[3]; // 803103F0
  if (crb(c,2)) { goto L_80310428; } // 803103F4
  c->r[4]=R32(c->r[31]+0x00000004u); // 803103F8
  c->r[3]=c->r[3]+0x00000008u; // 803103FC
  c->r[4]=c->r[4]+0x00000002u; // 80310400
  c->lr=0x80310408u; f_8030E838(c); // 80310404
  c->r[3]=c->r[30]+0x0000000Eu; // 80310408
  c->r[4]=c->r[29]+0x00000004u; // 8031040C
  c->r[5]=0u+0x00000020u; // 80310410
  c->lr=0x80310418u; f_802E9608(c); // 80310414
  c->r[0]=0u+0x00000204u; // 80310418
  c->r[3]=c->r[30]|c->r[30]; // 8031041C
  W16(c->r[30]+0x00000000u,c->r[0]); // 80310420
  c->lr=0x80310428u; f_8030ECE4(c); // 80310424
L_80310428:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80310428
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031042C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80310430
  c->r[29]=R32(c->r[1]+0x00000014u); // 80310434
  c->lr=c->r[0]; // 80310438
  c->r[1]=c->r[1]+0x00000020u; // 8031043C
  return; // 80310440
}

// bta_dm_disc_remname_cback
void f_80310444(Ctx* __restrict c) {
  trace_call(0x80310444u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310444
  c->r[0]=c->lr; // 80310448
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031044C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80310450
  c->r[31]=0u+0x80570000u; // 80310454
  c->r[31]=c->r[31]+0x00005518u; // 80310458
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031045C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80310460
  c->r[29]=c->r[3]|c->r[3]; // 80310464
  c->r[3]=c->r[31]+0x00000058u; // 80310468
  c->lr=0x80310470u; f_8030ED20(c); // 8031046C
  c->r[3]=0u+0x00000110u; // 80310470
  c->lr=0x80310478u; f_8030AD84(c); // 80310474
  cmps(c,0,(int32_t)c->r[3],0); // 80310478
  c->r[30]=c->r[3]|c->r[3]; // 8031047C
  if (crb(c,2)) { goto L_803104B0; } // 80310480
  c->r[3]=c->r[3]+0x00000008u; // 80310484
  c->r[4]=c->r[31]+0x0000001Au; // 80310488
  c->lr=0x80310490u; f_8030E838(c); // 8031048C
  c->r[3]=c->r[30]+0x0000000Eu; // 80310490
  c->r[4]=c->r[29]+0x00000004u; // 80310494
  c->r[5]=0u+0x00000020u; // 80310498
  c->lr=0x803104A0u; f_802E9608(c); // 8031049C
  c->r[0]=0u+0x00000204u; // 803104A0
  c->r[3]=c->r[30]|c->r[30]; // 803104A4
  W16(c->r[30]+0x00000000u,c->r[0]); // 803104A8
  c->lr=0x803104B0u; f_8030ECE4(c); // 803104AC
L_803104B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803104B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803104B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803104B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803104BC
  c->lr=c->r[0]; // 803104C0
  c->r[1]=c->r[1]+0x00000020u; // 803104C4
  return; // 803104C8
}

// bta_dm_cancel_rmt_name
void f_803104CC(Ctx* __restrict c) {
  trace_call(0x803104CCu);
  f_80318F88(c); return; // 803104CC
}

// bta_dm_authorize_cback
void f_803104D0(Ctx* __restrict c) {
  trace_call(0x803104D0u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803104D0
  c->r[0]=c->lr; // 803104D4
  c->r[4]=c->r[3]|c->r[3]; // 803104D8
  W32(c->r[1]+0x00000134u,c->r[0]); // 803104DC
  c->r[3]=c->r[1]+0x00000008u; // 803104E0
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 803104E4
  c->r[31]=0u+0x00000001u; // 803104E8
  W32(c->r[1]+0x00000128u,c->r[30]); // 803104EC
  c->r[30]=c->r[7]|c->r[7]; // 803104F0
  W32(c->r[1]+0x00000124u,c->r[29]); // 803104F4
  c->r[29]=c->r[5]|c->r[5]; // 803104F8
  c->lr=0x80310500u; f_8030E838(c); // 803104FC
  c->r[4]=c->r[29]|c->r[29]; // 80310500
  c->r[3]=c->r[1]+0x0000000Eu; // 80310504
  c->r[5]=0u+0x00000020u; // 80310508
  c->lr=0x80310510u; f_802E9608(c); // 8031050C
  c->r[3]=0u+0x80440000u; // 80310510
  c->r[0]=0u+0x00000017u; // 80310514
  c->r[3]=c->r[3]+0xFFFFDB58u; // 80310518
  c->ctr=c->r[0]; // 8031051C
L_80310520:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 80310520
  c->r[0]=R32(c->r[3]+c->r[0]); // 80310524
  cmpu(c,0,c->r[30],c->r[0]); // 80310528
  if (!crb(c,2)) { goto L_80310538; } // 8031052C
  W8(c->r[1]+0x00000106u,c->r[31]); // 80310530
  goto L_80310540; // 80310534
L_80310538:;
  c->r[31]=c->r[31]+0x00000001u; // 80310538
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80310520; } // 8031053C
L_80310540:;
  c->r[3]=0u+0x80570000u; // 80310540
  c->r[3]=c->r[3]+0x00005594u; // 80310544
  c->r[12]=R32(c->r[3]+0x00000050u); // 80310548
  cmps(c,0,(int32_t)c->r[12],0); // 8031054C
  if (crb(c,2)) { goto L_80310578; } // 80310550
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80310554
  cmpu(c,0,c->r[0],0x00000017u); // 80310558
  if (crb(c,1)) { goto L_80310578; } // 8031055C
  c->r[4]=c->r[1]+0x00000008u; // 80310560
  c->r[3]=0u+0x00000004u; // 80310564
  c->ctr=c->r[12]; // 80310568
  if (true) { c->lr=0x80310570u; dispatch(c,c->ctr); } // 8031056C
  c->r[3]=0u+0x00000001u; // 80310570
  goto L_8031057C; // 80310574
L_80310578:;
  c->r[3]=0u+0x0000000Bu; // 80310578
L_8031057C:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 8031057C
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 80310580
  c->r[30]=R32(c->r[1]+0x00000128u); // 80310584
  c->r[29]=R32(c->r[1]+0x00000124u); // 80310588
  c->lr=c->r[0]; // 8031058C
  c->r[1]=c->r[1]+0x00000130u; // 80310590
  return; // 80310594
}

// bta_dm_pinname_cback
void f_80310598(Ctx* __restrict c) {
  trace_call(0x80310598u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310598
  c->r[0]=c->lr; // 8031059C
  W32(c->r[1]+0x00000124u,c->r[0]); // 803105A0
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803105A4
  c->r[31]=0u+0x80570000u; // 803105A8
  c->r[31]=c->r[31]+0x00005594u; // 803105AC
  W32(c->r[1]+0x00000118u,c->r[30]); // 803105B0
  c->r[30]=c->r[3]|c->r[3]; // 803105B4
  c->r[3]=c->r[1]+0x00000008u; // 803105B8
  c->r[4]=c->r[31]+0x000000F8u; // 803105BC
  c->lr=0x803105C4u; f_8030E838(c); // 803105C0
  c->r[4]=R8(c->r[31]+0x000000FEu); // 803105C4
  cmps(c,0,(int32_t)c->r[30],0); // 803105C8
  c->r[3]=R8(c->r[31]+0x000000FFu); // 803105CC
  c->r[0]=R8(c->r[31]+0x00000100u); // 803105D0
  W8(c->r[1]+0x00000106u,c->r[4]); // 803105D4
  W8(c->r[1]+0x00000107u,c->r[3]); // 803105D8
  W8(c->r[1]+0x00000108u,c->r[0]); // 803105DC
  if (crb(c,2)) { goto L_8031061C; } // 803105E0
  c->r[0]=R16(c->r[30]+0x00000000u); // 803105E4
  cmps(c,0,(int32_t)c->r[0],0); // 803105E8
  if (!crb(c,2)) { goto L_8031061C; } // 803105EC
  c->r[0]=R16(c->r[30]+0x00000002u); // 803105F0
  c->r[3]=c->r[1]+0x0000000Eu; // 803105F4
  c->r[4]=c->r[30]+0x00000004u; // 803105F8
  c->r[5]=0u+0x00000020u; // 803105FC
  cmpu(c,0,c->r[0],0x00000020u); // 80310600
  if (!crb(c,0)) { goto L_8031060C; } // 80310604
  c->r[5]=c->r[0]|c->r[0]; // 80310608
L_8031060C:;
  c->lr=0x80310610u; f_80005FB4(c); // 8031060C
  c->r[0]=0u+0x00000000u; // 80310610
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 80310614
  goto L_80310624; // 80310618
L_8031061C:;
  c->r[0]=0u+0x00000000u; // 8031061C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80310620
L_80310624:;
  c->r[5]=0u+0x80570000u; // 80310624
  c->r[4]=c->r[1]+0x00000008u; // 80310628
  c->r[5]=c->r[5]+0x00005594u; // 8031062C
  c->r[3]=0u+0x00000002u; // 80310630
  c->r[12]=R32(c->r[5]+0x00000050u); // 80310634
  c->ctr=c->r[12]; // 80310638
  if (true) { c->lr=0x80310640u; dispatch(c,c->ctr); } // 8031063C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80310640
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80310644
  c->r[30]=R32(c->r[1]+0x00000118u); // 80310648
  c->lr=c->r[0]; // 8031064C
  c->r[1]=c->r[1]+0x00000120u; // 80310650
  return; // 80310654
}

// bta_dm_pin_cback
void f_80310658(Ctx* __restrict c) {
  trace_call(0x80310658u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310658
  c->r[0]=c->lr; // 8031065C
  W32(c->r[1]+0x00000134u,c->r[0]); // 80310660
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 80310664
  c->r[31]=0u+0x80570000u; // 80310668
  c->r[31]=c->r[31]+0x00005594u; // 8031066C
  W32(c->r[1]+0x00000128u,c->r[30]); // 80310670
  c->r[30]=c->r[5]|c->r[5]; // 80310674
  W32(c->r[1]+0x00000124u,c->r[29]); // 80310678
  c->r[29]=c->r[4]|c->r[4]; // 8031067C
  W32(c->r[1]+0x00000120u,c->r[28]); // 80310680
  c->r[28]=c->r[3]|c->r[3]; // 80310684
  c->r[0]=R32(c->r[31]+0x00000050u); // 80310688
  cmps(c,0,(int32_t)c->r[0],0); // 8031068C
  if (!crb(c,2)) { goto L_8031069C; } // 80310690
  c->r[3]=0u+0x0000000Bu; // 80310694
  goto L_80310768; // 80310698
L_8031069C:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8031069C
  cmps(c,0,(int32_t)c->r[0],0); // 803106A0
  if (!crb(c,2)) { goto L_8031070C; } // 803106A4
  c->r[4]=c->r[28]|c->r[28]; // 803106A8
  c->r[3]=c->r[31]+0x000000F8u; // 803106AC
  c->lr=0x803106B4u; f_8030E838(c); // 803106B0
  c->r[0]=R8(c->r[29]+0x00000000u); // 803106B4
  c->r[4]=0u+0x80310000u; // 803106B8
  c->r[3]=c->r[28]|c->r[28]; // 803106BC
  W8(c->r[31]+0x000000FEu,c->r[0]); // 803106C0
  c->r[4]=c->r[4]+0x00000598u; // 803106C4
  c->r[0]=R8(c->r[29]+0x00000001u); // 803106C8
  W8(c->r[31]+0x000000FFu,c->r[0]); // 803106CC
  c->r[0]=R8(c->r[29]+0x00000002u); // 803106D0
  W8(c->r[31]+0x00000100u,c->r[0]); // 803106D4
  c->lr=0x803106DCu; f_80318EA0(c); // 803106D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803106DC
  cmpu(c,0,c->r[0],0x00000001u); // 803106E0
  if (!crb(c,2)) { goto L_803106F0; } // 803106E4
  c->r[3]=0u+0x00000001u; // 803106E8
  goto L_80310768; // 803106EC
L_803106F0:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803106F0
  cmpu(c,0,c->r[0],0x00000002u); // 803106F4
  if (crb(c,0)) { goto L_8031070C; } // 803106F8
  c->r[4]=0u+0x80490000u; // 803106FC
  c->r[3]=0u+0x00000501u; // 80310700
  c->r[4]=c->r[4]+0xFFFFEC10u; // 80310704
  c->lr=0x8031070Cu; f_8030E1E8(c); // 80310708
L_8031070C:;
  c->r[4]=c->r[28]|c->r[28]; // 8031070C
  c->r[3]=c->r[1]+0x00000008u; // 80310710
  c->lr=0x80310718u; f_8030E838(c); // 80310714
  c->r[0]=R8(c->r[29]+0x00000000u); // 80310718
  c->r[4]=c->r[30]|c->r[30]; // 8031071C
  c->r[3]=c->r[1]+0x0000000Eu; // 80310720
  c->r[5]=0u+0x00000020u; // 80310724
  W8(c->r[1]+0x00000106u,c->r[0]); // 80310728
  c->r[0]=R8(c->r[29]+0x00000001u); // 8031072C
  W8(c->r[1]+0x00000107u,c->r[0]); // 80310730
  c->r[0]=R8(c->r[29]+0x00000002u); // 80310734
  W8(c->r[1]+0x00000108u,c->r[0]); // 80310738
  c->lr=0x80310740u; f_802E9608(c); // 8031073C
  c->r[3]=0u+0x80570000u; // 80310740
  c->r[0]=0u+0x00000000u; // 80310744
  c->r[3]=c->r[3]+0x00005594u; // 80310748
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 8031074C
  c->r[12]=R32(c->r[3]+0x00000050u); // 80310750
  c->r[4]=c->r[1]+0x00000008u; // 80310754
  c->r[3]=0u+0x00000002u; // 80310758
  c->ctr=c->r[12]; // 8031075C
  if (true) { c->lr=0x80310764u; dispatch(c,c->ctr); } // 80310760
  c->r[3]=0u+0x00000001u; // 80310764
L_80310768:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 80310768
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 8031076C
  c->r[30]=R32(c->r[1]+0x00000128u); // 80310770
  c->r[29]=R32(c->r[1]+0x00000124u); // 80310774
  c->r[28]=R32(c->r[1]+0x00000120u); // 80310778
  c->lr=c->r[0]; // 8031077C
  c->r[1]=c->r[1]+0x00000130u; // 80310780
  return; // 80310784
}

// bta_dm_link_key_request_cback
void f_80310788(Ctx* __restrict c) {
  trace_call(0x80310788u);
  c->r[3]=0u+0x0000000Bu; // 80310788
  return; // 8031078C
}

// bta_dm_new_link_key_cback
void f_80310790(Ctx* __restrict c) {
  trace_call(0x80310790u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310790
  c->r[0]=c->lr; // 80310794
  c->r[4]=c->r[3]|c->r[3]; // 80310798
  W32(c->r[1]+0x00000124u,c->r[0]); // 8031079C
  c->r[3]=c->r[1]+0x00000008u; // 803107A0
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 803107A4
  c->r[31]=c->r[6]|c->r[6]; // 803107A8
  W32(c->r[1]+0x00000118u,c->r[30]); // 803107AC
  c->r[30]=c->r[5]|c->r[5]; // 803107B0
  c->lr=0x803107B8u; f_8030E838(c); // 803107B4
  c->r[4]=c->r[30]|c->r[30]; // 803107B8
  c->r[3]=c->r[1]+0x0000000Eu; // 803107BC
  c->r[5]=0u+0x0000001Fu; // 803107C0
  c->lr=0x803107C8u; f_80005FB4(c); // 803107C4
  c->r[0]=0u+0x00000000u; // 803107C8
  c->r[4]=c->r[31]|c->r[31]; // 803107CC
  W8(c->r[1]+0x0000002Du,c->r[0]); // 803107D0
  c->r[3]=c->r[1]+0x00000107u; // 803107D4
  c->r[5]=0u+0x00000010u; // 803107D8
  c->lr=0x803107E0u; f_80005FB4(c); // 803107DC
  c->r[3]=0u+0x80570000u; // 803107E0
  c->r[0]=0u+0x00000001u; // 803107E4
  c->r[3]=c->r[3]+0x00005594u; // 803107E8
  W8(c->r[1]+0x00000106u,c->r[0]); // 803107EC
  c->r[12]=R32(c->r[3]+0x00000050u); // 803107F0
  W8(c->r[1]+0x00000117u,c->r[0]); // 803107F4
  cmps(c,0,(int32_t)c->r[12],0); // 803107F8
  if (crb(c,2)) { goto L_80310810; } // 803107FC
  c->r[4]=c->r[1]+0x00000008u; // 80310800
  c->r[3]=0u+0x00000003u; // 80310804
  c->ctr=c->r[12]; // 80310808
  if (true) { c->lr=0x80310810u; dispatch(c,c->ctr); } // 8031080C
L_80310810:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80310810
  c->r[3]=0u+0x00000001u; // 80310814
  c->r[30]=R32(c->r[1]+0x00000118u); // 80310818
  c->r[0]=R32(c->r[1]+0x00000124u); // 8031081C
  c->lr=c->r[0]; // 80310820
  c->r[1]=c->r[1]+0x00000120u; // 80310824
  return; // 80310828
}

// bta_dm_authentication_complete_cback
void f_8031082C(Ctx* __restrict c) {
  trace_call(0x8031082Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031082C
  c->r[0]=c->lr; // 80310830
  cmps(c,0,(int32_t)c->r[6],0); // 80310834
  W32(c->r[1]+0x00000124u,c->r[0]); // 80310838
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 8031083C
  c->r[31]=c->r[5]|c->r[5]; // 80310840
  if (crb(c,2)) { goto L_80310898; } // 80310844
  c->r[4]=c->r[3]|c->r[3]; // 80310848
  c->r[3]=c->r[1]+0x00000008u; // 8031084C
  c->lr=0x80310854u; f_8030E838(c); // 80310850
  c->r[4]=c->r[31]|c->r[31]; // 80310854
  c->r[3]=c->r[1]+0x0000000Eu; // 80310858
  c->r[5]=0u+0x0000001Fu; // 8031085C
  c->lr=0x80310864u; f_80005FB4(c); // 80310860
  c->r[3]=0u+0x80570000u; // 80310864
  c->r[0]=0u+0x00000000u; // 80310868
  c->r[3]=c->r[3]+0x00005594u; // 8031086C
  W8(c->r[1]+0x0000002Du,c->r[0]); // 80310870
  c->r[12]=R32(c->r[3]+0x00000050u); // 80310874
  W8(c->r[1]+0x00000117u,c->r[0]); // 80310878
  cmps(c,0,(int32_t)c->r[12],0); // 8031087C
  W8(c->r[1]+0x00000106u,c->r[0]); // 80310880
  if (crb(c,2)) { goto L_80310898; } // 80310884
  c->r[4]=c->r[1]+0x00000008u; // 80310888
  c->r[3]=0u+0x00000003u; // 8031088C
  c->ctr=c->r[12]; // 80310890
  if (true) { c->lr=0x80310898u; dispatch(c,c->ctr); } // 80310894
L_80310898:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80310898
  c->r[3]=0u+0x00000000u; // 8031089C
  c->r[0]=R32(c->r[1]+0x00000124u); // 803108A0
  c->lr=c->r[0]; // 803108A4
  c->r[1]=c->r[1]+0x00000120u; // 803108A8
  return; // 803108AC
}

// bta_dm_local_addr_cback
void f_803108B0(Ctx* __restrict c) {
  trace_call(0x803108B0u);
  c->r[4]=0u+0x80570000u; // 803108B0
  c->r[4]=c->r[4]+0x00005594u; // 803108B4
  c->r[12]=R32(c->r[4]+0x00000050u); // 803108B8
  cmps(c,0,(int32_t)c->r[12],0); // 803108BC
  if (crb(c,2)) return; // 803108C0
  c->r[4]=c->r[3]|c->r[3]; // 803108C4
  c->r[3]=0u+0x00000000u; // 803108C8
  c->ctr=c->r[12]; // 803108CC
  if (true) { dispatch(c,c->ctr); return; } // 803108D0
  return; // 803108D4
}

// bta_dm_signal_strength
void f_803108D8(Ctx* __restrict c) {
  trace_call(0x803108D8u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 803108D8
  cmps(c,0,(int32_t)c->r[0],0); // 803108DC
  if (crb(c,2)) { goto L_80310904; } // 803108E0
  c->r[4]=0u+0x80570000u; // 803108E4
  c->r[0]=R8(c->r[3]+0x00000008u); // 803108E8
  c->r[4]=c->r[4]+0x00005594u; // 803108EC
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 803108F0
  c->r[0]=R16(c->r[3]+0x0000000Au); // 803108F4
  c->r[3]=0u+0x00000000u; // 803108F8
  W16(c->r[4]+0x00000070u,c->r[0]); // 803108FC
  f_80310914(c); return; // 80310900
L_80310904:;
  c->r[3]=0u+0x80570000u; // 80310904
  c->r[3]=c->r[3]+0x00005594u; // 80310908
  c->r[3]=c->r[3]+0x00000054u; // 8031090C
  f_8030ED20(c); return; // 80310910
}

// bta_dm_signal_strength_timer_cback
void f_80310914(Ctx* __restrict c) {
  trace_call(0x80310914u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310914
  c->r[0]=c->lr; // 80310918
  c->r[3]=0u+0x80570000u; // 8031091C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80310920
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80310924
  c->r[31]=c->r[3]+0x00005594u; // 80310928
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031092C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80310930
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 80310934
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80310938
  if (crb(c,2)) { goto L_80310974; } // 8031093C
  c->r[29]=0u+0x00000000u; // 80310940
  c->r[30]=0u+0x80310000u; // 80310944
  goto L_80310964; // 80310948
L_8031094C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 8031094C
  c->r[4]=c->r[30]+0x00000D14u; // 80310950
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80310954
  c->r[3]=c->r[31]+c->r[0]; // 80310958
  c->lr=0x80310960u; f_80315CC0(c); // 8031095C
  c->r[29]=c->r[29]+0x00000001u; // 80310960
L_80310964:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 80310964
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80310968
  cmpu(c,0,c->r[3],c->r[0]); // 8031096C
  if (crb(c,0)) { IRQCHK(c); goto L_8031094C; } // 80310970
L_80310974:;
  c->r[3]=0u+0x80570000u; // 80310974
  c->r[30]=c->r[3]+0x00005594u; // 80310978
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 8031097C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80310980
  if (crb(c,2)) { goto L_803109BC; } // 80310984
  c->r[29]=0u+0x00000000u; // 80310988
  c->r[31]=0u+0x80310000u; // 8031098C
  goto L_803109AC; // 80310990
L_80310994:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80310994
  c->r[4]=c->r[31]+0x00000D80u; // 80310998
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 8031099C
  c->r[3]=c->r[30]+c->r[0]; // 803109A0
  c->lr=0x803109A8u; f_80315DFC(c); // 803109A4
  c->r[29]=c->r[29]+0x00000001u; // 803109A8
L_803109AC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803109AC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803109B0
  cmpu(c,0,c->r[3],c->r[0]); // 803109B4
  if (crb(c,0)) { IRQCHK(c); goto L_80310994; } // 803109B8
L_803109BC:;
  c->r[7]=0u+0x80570000u; // 803109BC
  c->r[7]=c->r[7]+0x00005594u; // 803109C0
  c->r[0]=R16(c->r[7]+0x00000070u); // 803109C4
  cmps(c,0,(int32_t)c->r[0],0); // 803109C8
  if (crb(c,2)) { goto L_803109EC; } // 803109CC
  c->r[6]=0u+0x80310000u; // 803109D0
  c->r[3]=c->r[7]+0x00000054u; // 803109D4
  c->r[6]=c->r[6]+0x00000914u; // 803109D8
  c->r[4]=0u+0x00000000u; // 803109DC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 803109E0
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 803109E4
  c->lr=0x803109ECu; f_8030ED00(c); // 803109E8
L_803109EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803109EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803109F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803109F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803109F8
  c->lr=c->r[0]; // 803109FC
  c->r[1]=c->r[1]+0x00000020u; // 80310A00
  return; // 80310A04
}

// bta_dm_acl_change_cback
void f_80310A08(Ctx* __restrict c) {
  trace_call(0x80310A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310A08
  c->r[0]=c->lr; // 80310A0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80310A10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80310A14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80310A18
  c->r[30]=c->r[7]|c->r[7]; // 80310A1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80310A20
  c->r[29]=c->r[3]|c->r[3]; // 80310A24
  c->r[3]=0u+0x00000012u; // 80310A28
  c->lr=0x80310A30u; f_8030AD84(c); // 80310A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80310A30
  c->r[31]=c->r[3]|c->r[3]; // 80310A34
  if (crb(c,2)) { goto L_80310A5C; } // 80310A38
  c->r[4]=c->r[29]|c->r[29]; // 80310A3C
  c->r[3]=c->r[3]+0x0000000Bu; // 80310A40
  c->lr=0x80310A48u; f_8030E838(c); // 80310A44
  W8(c->r[31]+0x0000000Au,c->r[30]); // 80310A48
  c->r[0]=0u+0x00000105u; // 80310A4C
  c->r[3]=c->r[31]|c->r[31]; // 80310A50
  W16(c->r[31]+0x00000000u,c->r[0]); // 80310A54
  c->lr=0x80310A5Cu; f_8030ECE4(c); // 80310A58
L_80310A5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80310A5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80310A60
  c->r[30]=R32(c->r[1]+0x00000018u); // 80310A64
  c->r[29]=R32(c->r[1]+0x00000014u); // 80310A68
  c->lr=c->r[0]; // 80310A6C
  c->r[1]=c->r[1]+0x00000020u; // 80310A70
  return; // 80310A74
}

// bta_dm_acl_change
void f_80310A78(Ctx* __restrict c) {
  trace_call(0x80310A78u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310A78
  c->r[0]=c->lr; // 80310A7C
  W32(c->r[1]+0x00000134u,c->r[0]); // 80310A80
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 80310A84
  c->r[31]=c->r[3]+0x0000000Bu; // 80310A88
  W32(c->r[1]+0x00000128u,c->r[30]); // 80310A8C
  W32(c->r[1]+0x00000124u,c->r[29]); // 80310A90
  c->r[0]=R8(c->r[3]+0x0000000Au); // 80310A94
  cmps(c,0,(int32_t)c->r[0],0); // 80310A98
  if (crb(c,2)) { goto L_80310B5C; } // 80310A9C
  c->r[3]=0u+0x80570000u; // 80310AA0
  c->r[29]=0u+0x00000000u; // 80310AA4
  c->r[30]=c->r[3]+0x00005594u; // 80310AA8
  goto L_80310AD0; // 80310AAC
L_80310AB0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80310AB0
  c->r[4]=c->r[31]|c->r[31]; // 80310AB4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80310AB8
  c->r[3]=c->r[30]+c->r[0]; // 80310ABC
  c->lr=0x80310AC4u; f_8030E86C(c); // 80310AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80310AC4
  if (crb(c,2)) { goto L_80310AE0; } // 80310AC8
  c->r[29]=c->r[29]+0x00000001u; // 80310ACC
L_80310AD0:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 80310AD0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80310AD4
  cmpu(c,0,c->r[3],c->r[0]); // 80310AD8
  if (crb(c,0)) { IRQCHK(c); goto L_80310AB0; } // 80310ADC
L_80310AE0:;
  c->r[30]=0u+0x80570000u; // 80310AE0
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80310AE4
  c->r[30]=c->r[30]+0x00005594u; // 80310AE8
  c->r[3]=R8(c->r[30]+0x0000004Du); // 80310AEC
  cmpu(c,0,c->r[0],c->r[3]); // 80310AF0
  if (!crb(c,2)) { goto L_80310B14; } // 80310AF4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 80310AF8
  c->r[4]=c->r[31]|c->r[31]; // 80310AFC
  c->r[3]=c->r[30]+c->r[0]; // 80310B00
  c->lr=0x80310B08u; f_8030E838(c); // 80310B04
  c->r[3]=R8(c->r[30]+0x0000004Du); // 80310B08
  c->r[0]=c->r[3]+0x00000001u; // 80310B0C
  W8(c->r[30]+0x0000004Du,c->r[0]); // 80310B10
L_80310B14:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80310B14
  c->r[30]=0u+0x80570000u; // 80310B18
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80310B1C
  c->r[3]=0u+0x00000001u; // 80310B20
  c->r[30]=c->r[30]+0x00005594u; // 80310B24
  c->r[0]=0u+0x00000000u; // 80310B28
  c->r[5]=c->r[30]+c->r[4]; // 80310B2C
  W8(c->r[5]+0x00000006u,c->r[3]); // 80310B30
  c->r[4]=c->r[31]|c->r[31]; // 80310B34
  c->r[3]=c->r[1]+0x00000008u; // 80310B38
  W8(c->r[5]+0x00000007u,c->r[0]); // 80310B3C
  c->lr=0x80310B44u; f_8030E838(c); // 80310B40
  c->r[12]=R32(c->r[30]+0x00000050u); // 80310B44
  c->r[4]=c->r[1]+0x00000008u; // 80310B48
  c->r[3]=0u+0x00000005u; // 80310B4C
  c->ctr=c->r[12]; // 80310B50
  if (true) { c->lr=0x80310B58u; dispatch(c,c->ctr); } // 80310B54
  goto L_80310CDC; // 80310B58
L_80310B5C:;
  c->r[3]=0u+0x80570000u; // 80310B5C
  c->r[29]=0u+0x00000000u; // 80310B60
  c->r[30]=c->r[3]+0x00005594u; // 80310B64
  goto L_80310BD0; // 80310B68
L_80310B6C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80310B6C
  c->r[4]=c->r[31]|c->r[31]; // 80310B70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80310B74
  c->r[3]=c->r[30]+c->r[0]; // 80310B78
  c->lr=0x80310B80u; f_8030E86C(c); // 80310B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80310B80
  if (!crb(c,2)) { goto L_80310BCC; } // 80310B84
  c->r[3]=0u+0x80570000u; // 80310B88
  c->r[30]=c->r[3]+0x00005594u; // 80310B8C
  goto L_80310BB8; // 80310B90
L_80310B94:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80310B94
  c->r[5]=0u+0x0000000Bu; // 80310B98
  c->r[0]=c->r[3]+0x00000001u; // 80310B9C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 80310BA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80310BA4
  c->r[3]=c->r[30]+c->r[3]; // 80310BA8
  c->r[4]=c->r[30]+c->r[0]; // 80310BAC
  c->lr=0x80310BB4u; f_80005FB4(c); // 80310BB0
  c->r[29]=c->r[29]+0x00000001u; // 80310BB4
L_80310BB8:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 80310BB8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80310BBC
  cmpu(c,0,c->r[3],c->r[0]); // 80310BC0
  if (crb(c,0)) { IRQCHK(c); goto L_80310B94; } // 80310BC4
  goto L_80310BE0; // 80310BC8
L_80310BCC:;
  c->r[29]=c->r[29]+0x00000001u; // 80310BCC
L_80310BD0:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 80310BD0
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80310BD4
  cmpu(c,0,c->r[3],c->r[0]); // 80310BD8
  if (crb(c,0)) { IRQCHK(c); goto L_80310B6C; } // 80310BDC
L_80310BE0:;
  c->r[4]=0u+0x80570000u; // 80310BE0
  c->r[30]=0u+0x80570000u; // 80310BE4
  c->r[4]=c->r[4]+0x00005594u; // 80310BE8
  c->r[30]=c->r[30]+0x00005518u; // 80310BEC
  c->r[3]=R8(c->r[4]+0x0000004Du); // 80310BF0
  c->r[0]=R8(c->r[30]+0x00000078u); // 80310BF4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80310BF8
  cmps(c,0,(int32_t)c->r[0],0); // 80310BFC
  W8(c->r[4]+0x0000004Du,c->r[3]); // 80310C00
  if (crb(c,2)) { goto L_80310C60; } // 80310C04
  c->r[4]=c->r[31]|c->r[31]; // 80310C08
  c->r[3]=c->r[30]+0x0000001Au; // 80310C0C
  c->lr=0x80310C14u; f_8030E86C(c); // 80310C10
  cmps(c,0,(int32_t)c->r[3],0); // 80310C14
  if (!crb(c,2)) { goto L_80310C60; } // 80310C18
  c->r[0]=R8(c->r[30]+0x00000079u); // 80310C1C
  c->r[3]=0u+0x00000000u; // 80310C20
  W8(c->r[30]+0x00000078u,c->r[3]); // 80310C24
  cmps(c,0,(int32_t)c->r[0],0); // 80310C28
  if (crb(c,2)) { goto L_80310C60; } // 80310C2C
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80310C30
  cmpu(c,0,c->r[0],0x00000004u); // 80310C34
  if (crb(c,0)) { goto L_80310C4C; } // 80310C38
  c->r[4]=0u+0x80490000u; // 80310C3C
  c->r[3]=0u+0x00000503u; // 80310C40
  c->r[4]=c->r[4]+0xFFFFEC50u; // 80310C44
  c->lr=0x80310C4Cu; f_8030E1E8(c); // 80310C48
L_80310C4C:;
  c->r[3]=0u+0x80570000u; // 80310C4C
  c->r[3]=c->r[3]+0x00005518u; // 80310C50
  c->r[3]=c->r[3]+0x00000040u; // 80310C54
  c->lr=0x80310C5Cu; f_8030ED20(c); // 80310C58
  c->lr=0x80310C60u; f_80310174(c); // 80310C5C
L_80310C60:;
  c->r[30]=0u+0x80570000u; // 80310C60
  c->r[30]=c->r[30]+0x00005594u; // 80310C64
  c->r[0]=R8(c->r[30]+0x00000072u); // 80310C68
  cmps(c,0,(int32_t)c->r[0],0); // 80310C6C
  if (crb(c,2)) { goto L_80310CAC; } // 80310C70
  c->lr=0x80310C78u; f_80315610(c); // 80310C74
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80310C78
  if (!crb(c,2)) { goto L_80310CAC; } // 80310C7C
  c->r[0]=0u+0x00000000u; // 80310C80
  c->r[3]=c->r[30]+0x00000074u; // 80310C84
  W8(c->r[30]+0x00000072u,c->r[0]); // 80310C88
  c->lr=0x80310C90u; f_8030ED20(c); // 80310C8C
  c->r[5]=0u+0x80310000u; // 80310C90
  c->r[3]=c->r[30]+0x00000074u; // 80310C94
  c->r[5]=c->r[5]+0x00000CF8u; // 80310C98
  c->r[4]=0u+0x00000000u; // 80310C9C
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 80310CA0
  c->r[5]=0u+0x000003E8u; // 80310CA4
  c->lr=0x80310CACu; f_8030ED00(c); // 80310CA8
L_80310CAC:;
  c->r[4]=c->r[31]|c->r[31]; // 80310CAC
  c->r[3]=c->r[1]+0x00000008u; // 80310CB0
  c->lr=0x80310CB8u; f_8030E838(c); // 80310CB4
  c->lr=0x80310CBCu; f_8031566C(c); // 80310CB8
  c->r[5]=0u+0x80570000u; // 80310CBC
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80310CC0
  c->r[5]=c->r[5]+0x00005594u; // 80310CC4
  c->r[4]=c->r[1]+0x00000008u; // 80310CC8
  c->r[12]=R32(c->r[5]+0x00000050u); // 80310CCC
  c->r[3]=0u+0x00000006u; // 80310CD0
  c->ctr=c->r[12]; // 80310CD4
  if (true) { c->lr=0x80310CDCu; dispatch(c,c->ctr); } // 80310CD8
L_80310CDC:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 80310CDC
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 80310CE0
  c->r[30]=R32(c->r[1]+0x00000128u); // 80310CE4
  c->r[29]=R32(c->r[1]+0x00000124u); // 80310CE8
  c->lr=c->r[0]; // 80310CEC
  c->r[1]=c->r[1]+0x00000130u; // 80310CF0
  return; // 80310CF4
}

// bta_dm_disable_conn_down_timer_cback
void f_80310CF8(Ctx* __restrict c) {
  trace_call(0x80310CF8u);
  c->r[5]=0u+0x80570000u; // 80310CF8
  c->r[3]=0u+0x00000001u; // 80310CFC
  c->r[5]=c->r[5]+0x00005594u; // 80310D00
  c->r[4]=0u+0x00000000u; // 80310D04
  c->r[12]=R32(c->r[5]+0x00000050u); // 80310D08
  c->ctr=c->r[12]; // 80310D0C
  if (true) { dispatch(c,c->ctr); return; } // 80310D10
}

// bta_dm_rssi_cback
void f_80310D14(Ctx* __restrict c) {
  trace_call(0x80310D14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310D14
  c->r[0]=c->lr; // 80310D18
  W32(c->r[1]+0x00000024u,c->r[0]); // 80310D1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80310D20
  c->r[31]=c->r[3]|c->r[3]; // 80310D24
  c->r[0]=R8(c->r[3]+0x00000000u); // 80310D28
  cmps(c,0,(int32_t)c->r[0],0); // 80310D2C
  if (!crb(c,2)) { goto L_80310D6C; } // 80310D30
  c->r[3]=c->r[1]+0x00000008u; // 80310D34
  c->r[4]=c->r[31]+0x00000003u; // 80310D38
  c->lr=0x80310D40u; f_8030E838(c); // 80310D3C
  c->r[0]=0u+0x00000001u; // 80310D40
  c->r[3]=0u+0x80570000u; // 80310D44
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80310D48
  c->r[3]=c->r[3]+0x00005594u; // 80310D4C
  c->r[12]=R32(c->r[3]+0x00000050u); // 80310D50
  c->r[4]=c->r[1]+0x00000008u; // 80310D54
  c->r[0]=R8(c->r[31]+0x00000002u); // 80310D58
  c->r[3]=0u+0x00000007u; // 80310D5C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80310D60
  c->ctr=c->r[12]; // 80310D64
  if (true) { c->lr=0x80310D6Cu; dispatch(c,c->ctr); } // 80310D68
L_80310D6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80310D6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80310D70
  c->lr=c->r[0]; // 80310D74
  c->r[1]=c->r[1]+0x00000020u; // 80310D78
  return; // 80310D7C
}

// bta_dm_link_quality_cback
void f_80310D80(Ctx* __restrict c) {
  trace_call(0x80310D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310D80
  c->r[0]=c->lr; // 80310D84
  W32(c->r[1]+0x00000024u,c->r[0]); // 80310D88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80310D8C
  c->r[31]=c->r[3]|c->r[3]; // 80310D90
  c->r[0]=R8(c->r[3]+0x00000000u); // 80310D94
  cmps(c,0,(int32_t)c->r[0],0); // 80310D98
  if (!crb(c,2)) { goto L_80310DD8; } // 80310D9C
  c->r[3]=c->r[1]+0x00000008u; // 80310DA0
  c->r[4]=c->r[31]+0x00000003u; // 80310DA4
  c->lr=0x80310DACu; f_8030E838(c); // 80310DA8
  c->r[0]=0u+0x00000002u; // 80310DAC
  c->r[3]=0u+0x80570000u; // 80310DB0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80310DB4
  c->r[3]=c->r[3]+0x00005594u; // 80310DB8
  c->r[12]=R32(c->r[3]+0x00000050u); // 80310DBC
  c->r[4]=c->r[1]+0x00000008u; // 80310DC0
  c->r[0]=R8(c->r[31]+0x00000002u); // 80310DC4
  c->r[3]=0u+0x00000007u; // 80310DC8
  W8(c->r[1]+0x00000010u,c->r[0]); // 80310DCC
  c->ctr=c->r[12]; // 80310DD0
  if (true) { c->lr=0x80310DD8u; dispatch(c,c->ctr); } // 80310DD4
L_80310DD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80310DD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80310DDC
  c->lr=c->r[0]; // 80310DE0
  c->r[1]=c->r[1]+0x00000020u; // 80310DE4
  return; // 80310DE8
}

// bta_dm_l2cap_server_compress_cback
void f_80310DEC(Ctx* __restrict c) {
  trace_call(0x80310DECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310DEC
  c->r[0]=c->lr; // 80310DF0
  W32(c->r[1]+0x00000034u,c->r[0]); // 80310DF4
  c->r[11]=c->r[1]+0x00000030u; // 80310DF8
  c->lr=0x80310E00u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80310DFC
  c->r[31]=0u+0x80570000u; // 80310E00
  c->r[27]=R32(c->r[1]+0x00000038u); // 80310E04
  c->r[31]=c->r[31]+0x000054E8u; // 80310E08
  c->r[25]=c->r[3]|c->r[3]; // 80310E0C
  c->r[26]=c->r[10]|c->r[10]; // 80310E10
  c->r[29]=0u+0x00000000u; // 80310E14
  c->r[30]=c->r[31]|c->r[31]; // 80310E18
  c->r[28]=0u+0x00000000u; // 80310E1C
L_80310E20:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 80310E20
  cmpu(c,0,c->r[0],0x00000001u); // 80310E24
  if (!crb(c,2)) { goto L_80310EA0; } // 80310E28
  c->r[3]=c->r[30]|c->r[30]; // 80310E2C
  c->r[4]=c->r[25]|c->r[25]; // 80310E30
  c->lr=0x80310E38u; f_8030E86C(c); // 80310E34
  cmps(c,0,(int32_t)c->r[3],0); // 80310E38
  if (!crb(c,2)) { goto L_80310EA0; } // 80310E3C
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80310E40
  cmpu(c,0,c->r[0],0x00000004u); // 80310E44
  if (crb(c,0)) { goto L_80310E74; } // 80310E48
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 80310E4C
  c->r[5]=0u+0x80570000u; // 80310E50
  c->r[5]=c->r[5]+0x000054E8u; // 80310E54
  c->r[4]=0u+0x80490000u; // 80310E58
  c->r[0]=c->r[0]+c->r[28]; // 80310E5C
  c->r[3]=0u+0x00000503u; // 80310E60
  c->r[5]=c->r[5]+c->r[0]; // 80310E64
  c->r[4]=c->r[4]+0xFFFFEC64u; // 80310E68
  c->r[5]=R8(c->r[5]+0x00000006u); // 80310E6C
  c->lr=0x80310E74u; f_8030E200(c); // 80310E70
L_80310E74:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 80310E74
  c->r[3]=0u+0x80570000u; // 80310E78
  c->r[3]=c->r[3]+0x000054E8u; // 80310E7C
  c->r[4]=c->r[26]|c->r[26]; // 80310E80
  c->r[0]=c->r[0]+c->r[28]; // 80310E84
  c->r[5]=c->r[27]|c->r[27]; // 80310E88
  c->r[3]=c->r[3]+c->r[0]; // 80310E8C
  c->r[3]=R8(c->r[3]+0x00000006u); // 80310E90
  c->lr=0x80310E98u; f_8030551C(c); // 80310E94
  c->r[29]=c->r[3]|c->r[3]; // 80310E98
  goto L_80310EB4; // 80310E9C
L_80310EA0:;
  c->r[28]=c->r[28]+0x00000001u; // 80310EA0
  c->r[30]=c->r[30]+0x00000009u; // 80310EA4
  cmps(c,0,(int32_t)c->r[28],5); // 80310EA8
  c->r[31]=c->r[31]+0x00000009u; // 80310EAC
  if (crb(c,0)) { IRQCHK(c); goto L_80310E20; } // 80310EB0
L_80310EB4:;
  c->r[11]=c->r[1]+0x00000030u; // 80310EB4
  c->r[3]=c->r[29]|c->r[29]; // 80310EB8
  c->lr=0x80310EC0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80310EBC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80310EC0
  c->lr=c->r[0]; // 80310EC4
  c->r[1]=c->r[1]+0x00000030u; // 80310EC8
  return; // 80310ECC
}

// bta_dm_compress_cback
void f_80310ED0(Ctx* __restrict c) {
  trace_call(0x80310ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80310ED0
  c->r[0]=c->lr; // 80310ED4
  cmps(c,0,(int32_t)c->r[3],0); // 80310ED8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80310EDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80310EE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80310EE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80310EE8
  if (!crb(c,2)) { goto L_80311044; } // 80310EEC
  c->r[3]=R32(c->r[13]+0xFFFFAB4Cu); // 80310EF0
  c->r[7]=0u+0x00000001u; // 80310EF4
  c->r[9]=R8(c->r[3]+0x00000001u); // 80310EF8
  goto L_80311034; // 80310EFC
L_80310F00:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 80310F00
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 80310F04
  c->r[0]=c->r[0]-c->r[8]; // 80310F08
  c->r[8]=c->r[3]+c->r[0]; // 80310F0C
  c->r[0]=R8(c->r[8]+0x00000001u); // 80310F10
  cmpu(c,0,c->r[5],c->r[0]); // 80310F14
  if (crb(c,2)) { goto L_80310F24; } // 80310F18
  cmpu(c,0,c->r[0],0x000000FFu); // 80310F1C
  if (!crb(c,2)) { goto L_80311030; } // 80310F20
L_80310F24:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 80310F24
  cmpu(c,0,c->r[4],c->r[0]); // 80310F28
  if (!crb(c,2)) { goto L_80311030; } // 80310F2C
  c->r[0]=R8(c->r[8]+0x00000002u); // 80310F30
  cmpu(c,0,c->r[0],0x00000001u); // 80310F34
  if (!crb(c,2)) { goto L_80311030; } // 80310F38
  c->r[8]=0u+0x80570000u; // 80310F3C
  c->r[11]=R8(c->r[3]+0x00000001u); // 80310F40
  c->r[10]=R8(c->r[8]+0x00005698u); // 80310F44
  c->r[9]=c->r[8]+0x00005698u; // 80310F48
  c->r[31]=0u+0x00000000u; // 80310F4C
  c->r[29]=0u+0x00000001u; // 80310F50
  goto L_80310FB4; // 80310F54
L_80310F58:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 80310F58
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 80310F5C
  c->r[0]=c->r[0]-c->r[8]; // 80310F60
  c->r[12]=c->r[3]+c->r[0]; // 80310F64
  c->r[0]=R8(c->r[12]+0x00000002u); // 80310F68
  cmpu(c,0,c->r[0],0x00000002u); // 80310F6C
  if (!crb(c,2)) { goto L_80310FB0; } // 80310F70
  c->r[30]=0u+0x00000000u; // 80310F74
  goto L_80310FA4; // 80310F78
L_80310F7C:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 80310F7C
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 80310F80
  c->r[8]=c->r[0]+c->r[8]; // 80310F84
  c->r[0]=R8(c->r[12]+0x00000000u); // 80310F88
  c->r[8]=c->r[9]+c->r[8]; // 80310F8C
  c->r[8]=R8(c->r[8]+0x00000007u); // 80310F90
  cmpu(c,0,c->r[8],c->r[0]); // 80310F94
  if (!crb(c,2)) { goto L_80310FA0; } // 80310F98
  c->r[31]=0u+0x00000001u; // 80310F9C
L_80310FA0:;
  c->r[30]=c->r[30]+0x00000001u; // 80310FA0
L_80310FA4:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80310FA4
  cmpu(c,0,c->r[0],c->r[10]); // 80310FA8
  if (crb(c,0)) { IRQCHK(c); goto L_80310F7C; } // 80310FAC
L_80310FB0:;
  c->r[29]=c->r[29]+0x00000001u; // 80310FB0
L_80310FB4:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80310FB4
  cmpu(c,0,c->r[0],c->r[11]); // 80310FB8
  if (!crb(c,1)) { IRQCHK(c); goto L_80310F58; } // 80310FBC
  cmps(c,0,(int32_t)c->r[31],0); // 80310FC0
  if (!crb(c,2)) { goto L_803110EC; } // 80310FC4
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 80310FC8
  c->r[30]=0u+0x80570000u; // 80310FCC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80310FD0
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80310FD4
  c->r[30]=c->r[30]+0x000054E8u; // 80310FD8
  c->r[29]=c->r[0]+c->r[3]; // 80310FDC
  c->r[31]=c->r[30]+c->r[29]; // 80310FE0
  W8(c->r[31]+0x00000007u,c->r[5]); // 80310FE4
  c->r[3]=c->r[31]|c->r[31]; // 80310FE8
  W8(c->r[31]+0x00000006u,c->r[4]); // 80310FEC
  c->r[4]=c->r[6]|c->r[6]; // 80310FF0
  c->lr=0x80310FF8u; f_8030E838(c); // 80310FF4
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80310FF8
  c->r[3]=0u+0x00000001u; // 80310FFC
  W8(c->r[31]+0x00000008u,c->r[3]); // 80311000
  c->r[7]=c->r[31]|c->r[31]; // 80311004
  cmpu(c,0,c->r[0],0x00000004u); // 80311008
  if (crb(c,0)) { goto L_803110EC; } // 8031100C
  c->r[4]=0u+0x80490000u; // 80311010
  c->r[5]=R8(c->r[31]+0x00000007u); // 80311014
  c->r[6]=R8(c->r[31]+0x00000006u); // 80311018
  c->r[4]=c->r[4]+0xFFFFEC94u; // 8031101C
  c->r[7]=R8(c->r[7]+0x00000008u); // 80311020
  c->r[3]=0u+0x00000503u; // 80311024
  c->lr=0x8031102Cu; f_8030E230(c); // 80311028
  goto L_803110EC; // 8031102C
L_80311030:;
  c->r[7]=c->r[7]+0x00000001u; // 80311030
L_80311034:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 80311034
  cmpu(c,0,c->r[0],c->r[9]); // 80311038
  if (!crb(c,1)) { IRQCHK(c); goto L_80310F00; } // 8031103C
  goto L_803110EC; // 80311040
L_80311044:;
  cmpu(c,0,c->r[3],0x00000001u); // 80311044
  if (!crb(c,2)) { goto L_803110EC; } // 80311048
  c->r[7]=R32(c->r[13]+0xFFFFAB4Cu); // 8031104C
  c->r[8]=0u+0x00000001u; // 80311050
  c->r[6]=R8(c->r[7]+0x00000001u); // 80311054
  goto L_803110E0; // 80311058
L_8031105C:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 8031105C
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 80311060
  c->r[0]=c->r[0]-c->r[3]; // 80311064
  c->r[3]=c->r[7]+c->r[0]; // 80311068
  c->r[0]=R8(c->r[3]+0x00000001u); // 8031106C
  cmpu(c,0,c->r[5],c->r[0]); // 80311070
  if (crb(c,2)) { goto L_80311080; } // 80311074
  cmpu(c,0,c->r[0],0x000000FFu); // 80311078
  if (!crb(c,2)) { goto L_803110DC; } // 8031107C
L_80311080:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80311080
  cmpu(c,0,c->r[4],c->r[0]); // 80311084
  if (!crb(c,2)) { goto L_803110DC; } // 80311088
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 8031108C
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80311090
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 80311094
  c->r[3]=0u+0x80570000u; // 80311098
  cmpu(c,0,c->r[0],0x00000004u); // 8031109C
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 803110A0
  c->r[0]=c->r[4]+c->r[5]; // 803110A4
  c->r[3]=c->r[3]+0x000054E8u; // 803110A8
  c->r[3]=c->r[3]+c->r[0]; // 803110AC
  c->r[0]=0u+0x00000000u; // 803110B0
  W8(c->r[3]+0x00000008u,c->r[0]); // 803110B4
  if (crb(c,0)) { goto L_803110EC; } // 803110B8
  c->r[4]=0u+0x80490000u; // 803110BC
  c->r[5]=R8(c->r[3]+0x00000007u); // 803110C0
  c->r[6]=R8(c->r[3]+0x00000006u); // 803110C4
  c->r[4]=c->r[4]+0xFFFFECD0u; // 803110C8
  c->r[7]=R8(c->r[3]+0x00000008u); // 803110CC
  c->r[3]=0u+0x00000503u; // 803110D0
  c->lr=0x803110D8u; f_8030E230(c); // 803110D4
  goto L_803110EC; // 803110D8
L_803110DC:;
  c->r[8]=c->r[8]+0x00000001u; // 803110DC
L_803110E0:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 803110E0
  cmpu(c,0,c->r[0],c->r[6]); // 803110E4
  if (!crb(c,1)) { IRQCHK(c); goto L_8031105C; } // 803110E8
L_803110EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803110EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803110F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803110F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803110F8
  c->lr=c->r[0]; // 803110FC
  c->r[1]=c->r[1]+0x00000020u; // 80311100
  return; // 80311104
}

// bta_dm_rm_cback
void f_80311108(Ctx* __restrict c) {
  trace_call(0x80311108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311108
  c->r[0]=c->lr; // 8031110C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80311110
  c->r[11]=c->r[1]+0x00000020u; // 80311114
  c->lr=0x8031111Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80311118
  cmps(c,0,(int32_t)c->r[3],0); // 8031111C
  c->r[30]=c->r[4]|c->r[4]; // 80311120
  c->r[31]=c->r[5]|c->r[5]; // 80311124
  c->r[26]=c->r[6]|c->r[6]; // 80311128
  if (!crb(c,2)) { goto L_803111F8; } // 8031112C
  c->r[3]=0u+0x80570000u; // 80311130
  c->r[27]=0u+0x00000000u; // 80311134
  c->r[29]=c->r[3]+0x00005594u; // 80311138
  goto L_803111E8; // 8031113C
L_80311140:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 80311140
  c->r[4]=c->r[26]|c->r[26]; // 80311144
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80311148
  c->r[3]=c->r[29]+c->r[28]; // 8031114C
  c->lr=0x80311154u; f_8030E86C(c); // 80311150
  cmps(c,0,(int32_t)c->r[3],0); // 80311154
  if (!crb(c,2)) { goto L_803111E4; } // 80311158
  c->r[3]=c->r[29]+c->r[28]; // 8031115C
  c->r[0]=0u+0x00000001u; // 80311160
  W8(c->r[3]+0x00000006u,c->r[0]); // 80311164
  c->r[7]=0u+0x00000001u; // 80311168
  c->r[6]=R32(c->r[13]+0xFFFFAB48u); // 8031116C
  c->r[4]=R8(c->r[6]+0x00000001u); // 80311170
  goto L_803111D4; // 80311174
L_80311178:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 80311178
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 8031117C
  c->r[5]=c->r[0]-c->r[3]; // 80311180
  c->r[3]=c->r[6]+c->r[5]; // 80311184
  c->r[0]=R8(c->r[3]+0x00000001u); // 80311188
  cmpu(c,0,c->r[31],c->r[0]); // 8031118C
  if (crb(c,2)) { goto L_8031119C; } // 80311190
  cmpu(c,0,c->r[0],0x000000FFu); // 80311194
  if (!crb(c,2)) { goto L_803111D0; } // 80311198
L_8031119C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8031119C
  cmpu(c,0,c->r[30],c->r[0]); // 803111A0
  if (!crb(c,2)) { goto L_803111D0; } // 803111A4
  c->r[3]=0u+0x80570000u; // 803111A8
  c->r[4]=c->r[6]+c->r[5]; // 803111AC
  c->r[3]=c->r[3]+0x00005594u; // 803111B0
  c->r[4]=R8(c->r[4]+0x00000002u); // 803111B4
  c->r[3]=c->r[3]+c->r[28]; // 803111B8
  c->r[0]=R8(c->r[3]+0x00000007u); // 803111BC
  cmpu(c,0,c->r[4],c->r[0]); // 803111C0
  if (!crb(c,1)) { goto L_803111F8; } // 803111C4
  W8(c->r[3]+0x00000007u,c->r[4]); // 803111C8
  goto L_803111F8; // 803111CC
L_803111D0:;
  c->r[7]=c->r[7]+0x00000001u; // 803111D0
L_803111D4:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 803111D4
  cmpu(c,0,c->r[0],c->r[4]); // 803111D8
  if (!crb(c,1)) { IRQCHK(c); goto L_80311178; } // 803111DC
  goto L_803111F8; // 803111E0
L_803111E4:;
  c->r[27]=c->r[27]+0x00000001u; // 803111E4
L_803111E8:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 803111E8
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 803111EC
  cmpu(c,0,c->r[3],c->r[0]); // 803111F0
  if (crb(c,0)) { IRQCHK(c); goto L_80311140; } // 803111F4
L_803111F8:;
  c->r[11]=c->r[1]+0x00000020u; // 803111F8
  c->lr=0x80311200u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803111FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80311200
  c->lr=c->r[0]; // 80311204
  c->r[1]=c->r[1]+0x00000020u; // 80311208
  return; // 8031120C
}

// bta_dm_keep_acl
void f_80311210(Ctx* __restrict c) {
  trace_call(0x80311210u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311210
  c->r[0]=c->lr; // 80311214
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311218
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031121C
  c->r[4]=R16(c->r[3]+0x00000006u); // 80311220
  c->r[3]=0u+0x80570000u; // 80311224
  c->r[3]=c->r[3]+0x00005594u; // 80311228
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 8031122C
  W8(c->r[3]+0x00000101u,c->r[4]); // 80311230
  if (crb(c,2)) { goto L_80311264; } // 80311234
  c->r[31]=0u+0x00010000u; // 80311238
  c->r[3]=c->r[2]+0xFFFFB418u; // 8031123C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80311240
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80311244
  c->lr=0x8031124Cu; f_803275B4(c); // 80311248
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8031124C
  c->r[3]=0u+0x00000000u; // 80311250
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80311254
  c->r[5]=0u+0x00000001u; // 80311258
  c->lr=0x80311260u; f_803274EC(c); // 8031125C
  goto L_80311280; // 80311260
L_80311264:;
  c->r[3]=c->r[2]+0xFFFFB418u; // 80311264
  c->r[4]=0u+0x00000002u; // 80311268
  c->lr=0x80311270u; f_803275B4(c); // 8031126C
  c->r[3]=0u+0x00000000u; // 80311270
  c->r[4]=0u+0x00000002u; // 80311274
  c->r[5]=0u+0x00000001u; // 80311278
  c->lr=0x80311280u; f_803274EC(c); // 8031127C
L_80311280:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311280
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80311284
  c->lr=c->r[0]; // 80311288
  c->r[1]=c->r[1]+0x00000010u; // 8031128C
  return; // 80311290
}

// bta_dm_immediate_disable
void f_80311294(Ctx* __restrict c) {
  trace_call(0x80311294u);
  c->r[5]=0u+0x80570000u; // 80311294
  c->r[3]=0u+0x00000001u; // 80311298
  c->r[5]=c->r[5]+0x00005594u; // 8031129C
  c->r[4]=0u+0x00000000u; // 803112A0
  c->r[12]=R32(c->r[5]+0x00000050u); // 803112A4
  c->ctr=c->r[12]; // 803112A8
  if (true) { dispatch(c,c->ctr); return; } // 803112AC
}

// bta_dm_reset_complete
void f_803112B0(Ctx* __restrict c) {
  trace_call(0x803112B0u);
  return; // 803112B0
}

// bta_dm_send_hci_reset
void f_803112B4(Ctx* __restrict c) {
  trace_call(0x803112B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803112B4
  c->r[0]=c->lr; // 803112B8
  c->r[4]=0u+0x80570000u; // 803112BC
  c->r[3]=0u+0x00000002u; // 803112C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803112C4
  c->r[0]=0u+0x00000001u; // 803112C8
  c->r[4]=c->r[4]+0x00005458u; // 803112CC
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 803112D0
  c->lr=0x803112D8u; f_8030AF24(c); // 803112D4
  cmps(c,0,(int32_t)c->r[3],0); // 803112D8
  if (crb(c,2)) { goto L_803112E8; } // 803112DC
  c->r[4]=0u+0x00000000u; // 803112E0
  c->lr=0x803112E8u; f_80322C18(c); // 803112E4
L_803112E8:;
  c->r[3]=0u+0x80310000u; // 803112E8
  c->r[3]=c->r[3]+0x000012B0u; // 803112EC
  c->lr=0x803112F4u; f_80316D00(c); // 803112F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 803112F4
  c->lr=c->r[0]; // 803112F8
  c->r[1]=c->r[1]+0x00000010u; // 803112FC
  return; // 80311300
}

// BTA_EnableBluetooth
void f_80311304(Ctx* __restrict c) {
  trace_call(0x80311304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311304
  c->r[0]=c->lr; // 80311308
  c->r[4]=0u+0x80570000u; // 8031130C
  c->r[5]=0u+0x00000104u; // 80311310
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311314
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80311318
  c->r[31]=c->r[3]|c->r[3]; // 8031131C
  c->r[3]=c->r[4]+0x00005594u; // 80311320
  c->r[4]=0u+0x00000000u; // 80311324
  c->lr=0x8031132Cu; f_800060B8(c); // 80311328
  c->lr=0x80311330u; f_8030C37C(c); // 8031132C
  c->r[3]=0u+0x00000001u; // 80311330
  c->r[4]=c->r[2]+0xFFFFB3E8u; // 80311334
  c->lr=0x8031133Cu; f_8030ECD0(c); // 80311338
  c->r[3]=0u+0x00000002u; // 8031133C
  c->r[4]=c->r[2]+0xFFFFB3F0u; // 80311340
  c->lr=0x80311348u; f_8030ECD0(c); // 80311344
  c->lr=0x8031134Cu; f_8030C380(c); // 80311348
  c->r[3]=0u+0x0000000Cu; // 8031134C
  c->lr=0x80311354u; f_8030AD84(c); // 80311350
  cmps(c,0,(int32_t)c->r[3],0); // 80311354
  if (crb(c,2)) { goto L_80311374; } // 80311358
  c->r[0]=0u+0x00000100u; // 8031135C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80311360
  W32(c->r[3]+0x00000008u,c->r[31]); // 80311364
  c->lr=0x8031136Cu; f_8030ECE4(c); // 80311368
  c->r[3]=0u+0x00000000u; // 8031136C
  goto L_80311378; // 80311370
L_80311374:;
  c->r[3]=0u+0x00000001u; // 80311374
L_80311378:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031137C
  c->lr=c->r[0]; // 80311380
  c->r[1]=c->r[1]+0x00000010u; // 80311384
  return; // 80311388
}

// BTA_DisableBluetooth
void f_8031138C(Ctx* __restrict c) {
  trace_call(0x8031138Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031138C
  c->r[0]=c->lr; // 80311390
  c->r[3]=0u+0x00000008u; // 80311394
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311398
  c->lr=0x803113A0u; f_8030AD84(c); // 8031139C
  cmps(c,0,(int32_t)c->r[3],0); // 803113A0
  if (crb(c,2)) { goto L_803113B4; } // 803113A4
  c->r[0]=0u+0x00000101u; // 803113A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 803113AC
  c->lr=0x803113B4u; f_8030ECE4(c); // 803113B0
L_803113B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803113B4
  c->lr=c->r[0]; // 803113B8
  c->r[1]=c->r[1]+0x00000010u; // 803113BC
  return; // 803113C0
}

// BTA_DmIsDeviceUp
void f_803113C4(Ctx* __restrict c) {
  trace_call(0x803113C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803113C4
  c->r[0]=c->lr; // 803113C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803113CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803113D0
  c->lr=0x803113D8u; f_8030C37C(c); // 803113D4
  c->lr=0x803113DCu; f_80316DA8(c); // 803113D8
  c->r[31]=c->r[3]|c->r[3]; // 803113DC
  c->lr=0x803113E4u; f_8030C380(c); // 803113E0
  c->r[3]=c->r[31]|c->r[31]; // 803113E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803113E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 803113EC
  c->lr=c->r[0]; // 803113F0
  c->r[1]=c->r[1]+0x00000010u; // 803113F4
  return; // 803113F8
}

// BTA_DmSetDeviceName
void f_803113FC(Ctx* __restrict c) {
  trace_call(0x803113FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803113FC
  c->r[0]=c->lr; // 80311400
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311404
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80311408
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031140C
  c->r[30]=c->r[3]|c->r[3]; // 80311410
  c->r[3]=0u+0x00000028u; // 80311414
  c->lr=0x8031141Cu; f_8030AD84(c); // 80311418
  cmps(c,0,(int32_t)c->r[3],0); // 8031141C
  c->r[31]=c->r[3]|c->r[3]; // 80311420
  if (crb(c,2)) { goto L_80311448; } // 80311424
  c->r[0]=0u+0x00000102u; // 80311428
  c->r[4]=c->r[30]|c->r[30]; // 8031142C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80311430
  c->r[5]=0u+0x00000020u; // 80311434
  c->r[3]=c->r[3]+0x00000008u; // 80311438
  c->lr=0x80311440u; f_802E9608(c); // 8031143C
  c->r[3]=c->r[31]|c->r[31]; // 80311440
  c->lr=0x80311448u; f_8030ECE4(c); // 80311444
L_80311448:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311448
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031144C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80311450
  c->lr=c->r[0]; // 80311454
  c->r[1]=c->r[1]+0x00000010u; // 80311458
  return; // 8031145C
}

// BTA_DmSetVisibility
void f_80311460(Ctx* __restrict c) {
  trace_call(0x80311460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311460
  c->r[0]=c->lr; // 80311464
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311468
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031146C
  c->r[31]=c->r[4]|c->r[4]; // 80311470
  W32(c->r[1]+0x00000008u,c->r[30]); // 80311474
  c->r[30]=c->r[3]|c->r[3]; // 80311478
  c->r[3]=0u+0x00000110u; // 8031147C
  c->lr=0x80311484u; f_8030AD84(c); // 80311480
  cmps(c,0,(int32_t)c->r[3],0); // 80311484
  if (crb(c,2)) { goto L_803114A0; } // 80311488
  c->r[0]=0u+0x00000103u; // 8031148C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80311490
  W8(c->r[3]+0x00000008u,c->r[30]); // 80311494
  W8(c->r[3]+0x00000009u,c->r[31]); // 80311498
  c->lr=0x803114A0u; f_8030ECE4(c); // 8031149C
L_803114A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803114A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803114A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 803114A8
  c->lr=c->r[0]; // 803114AC
  c->r[1]=c->r[1]+0x00000010u; // 803114B0
  return; // 803114B4
}

// BTA_DmSearch
void f_803114B8(Ctx* __restrict c) {
  trace_call(0x803114B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803114B8
  c->r[0]=c->lr; // 803114BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803114C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803114C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803114C8
  c->r[30]=c->r[5]|c->r[5]; // 803114CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803114D0
  c->r[29]=c->r[4]|c->r[4]; // 803114D4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803114D8
  c->r[28]=c->r[3]|c->r[3]; // 803114DC
  c->r[3]=0u+0x0000001Cu; // 803114E0
  c->lr=0x803114E8u; f_8030AD84(c); // 803114E4
  cmps(c,0,(int32_t)c->r[3],0); // 803114E8
  c->r[31]=c->r[3]|c->r[3]; // 803114EC
  if (crb(c,2)) { goto L_8031151C; } // 803114F0
  c->r[0]=0u+0x00000200u; // 803114F4
  c->r[4]=c->r[28]|c->r[28]; // 803114F8
  W16(c->r[3]+0x00000000u,c->r[0]); // 803114FC
  c->r[5]=0u+0x0000000Au; // 80311500
  c->r[3]=c->r[3]+0x00000008u; // 80311504
  c->lr=0x8031150Cu; f_80005FB4(c); // 80311508
  W32(c->r[31]+0x00000014u,c->r[29]); // 8031150C
  c->r[3]=c->r[31]|c->r[31]; // 80311510
  W32(c->r[31]+0x00000018u,c->r[30]); // 80311514
  c->lr=0x8031151Cu; f_8030ECE4(c); // 80311518
L_8031151C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031151C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80311520
  c->r[30]=R32(c->r[1]+0x00000018u); // 80311524
  c->r[29]=R32(c->r[1]+0x00000014u); // 80311528
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031152C
  c->lr=c->r[0]; // 80311530
  c->r[1]=c->r[1]+0x00000020u; // 80311534
  return; // 80311538
}

// BTA_DmSearchCancel
void f_8031153C(Ctx* __restrict c) {
  trace_call(0x8031153Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031153C
  c->r[0]=c->lr; // 80311540
  c->r[3]=0u+0x00000008u; // 80311544
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311548
  c->lr=0x80311550u; f_8030AD84(c); // 8031154C
  cmps(c,0,(int32_t)c->r[3],0); // 80311550
  if (crb(c,2)) { goto L_80311564; } // 80311554
  c->r[0]=0u+0x00000201u; // 80311558
  W16(c->r[3]+0x00000000u,c->r[0]); // 8031155C
  c->lr=0x80311564u; f_8030ECE4(c); // 80311560
L_80311564:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311564
  c->lr=c->r[0]; // 80311568
  c->r[1]=c->r[1]+0x00000010u; // 8031156C
  return; // 80311570
}

// BTA_DmPinReply
void f_80311574(Ctx* __restrict c) {
  trace_call(0x80311574u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311574
  c->r[0]=c->lr; // 80311578
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031157C
  c->r[11]=c->r[1]+0x00000020u; // 80311580
  c->lr=0x80311588u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80311584
  c->r[27]=c->r[3]|c->r[3]; // 80311588
  c->r[28]=c->r[4]|c->r[4]; // 8031158C
  c->r[29]=c->r[5]|c->r[5]; // 80311590
  c->r[30]=c->r[6]|c->r[6]; // 80311594
  c->r[3]=0u+0x00000020u; // 80311598
  c->lr=0x803115A0u; f_8030AD84(c); // 8031159C
  cmps(c,0,(int32_t)c->r[3],0); // 803115A0
  c->r[31]=c->r[3]|c->r[3]; // 803115A4
  if (crb(c,2)) { goto L_803115E8; } // 803115A8
  c->r[0]=0u+0x00000107u; // 803115AC
  c->r[4]=c->r[27]|c->r[27]; // 803115B0
  W16(c->r[3]+0x00000000u,c->r[0]); // 803115B4
  c->r[3]=c->r[3]+0x00000008u; // 803115B8
  c->lr=0x803115C0u; f_8030E838(c); // 803115BC
  cmps(c,0,(int32_t)c->r[28],0); // 803115C0
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 803115C4
  if (crb(c,2)) { goto L_803115E0; } // 803115C8
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 803115CC
  c->r[4]=c->r[30]|c->r[30]; // 803115D0
  c->r[5]=c->r[29]|c->r[29]; // 803115D4
  c->r[3]=c->r[31]+0x00000010u; // 803115D8
  c->lr=0x803115E0u; f_80005FB4(c); // 803115DC
L_803115E0:;
  c->r[3]=c->r[31]|c->r[31]; // 803115E0
  c->lr=0x803115E8u; f_8030ECE4(c); // 803115E4
L_803115E8:;
  c->r[11]=c->r[1]+0x00000020u; // 803115E8
  c->lr=0x803115F0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803115EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803115F0
  c->lr=c->r[0]; // 803115F4
  c->r[1]=c->r[1]+0x00000020u; // 803115F8
  return; // 803115FC
}

// BTA_DmAddDevice
void f_80311600(Ctx* __restrict c) {
  trace_call(0x80311600u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311600
  c->r[0]=c->lr; // 80311604
  W32(c->r[1]+0x00000034u,c->r[0]); // 80311608
  c->r[11]=c->r[1]+0x00000030u; // 8031160C
  c->lr=0x80311614u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80311610
  c->r[28]=c->r[3]|c->r[3]; // 80311614
  c->r[29]=c->r[4]|c->r[4]; // 80311618
  c->r[30]=c->r[5]|c->r[5]; // 8031161C
  c->r[27]=c->r[6]|c->r[6]; // 80311620
  c->r[3]=c->r[1]+0x00000008u; // 80311624
  c->r[31]=0u+0x00000000u; // 80311628
  c->r[4]=0u+0x00000000u; // 8031162C
  c->r[5]=0u+0x00000008u; // 80311630
  c->lr=0x80311638u; f_800060B8(c); // 80311634
  cmps(c,0,(int32_t)c->r[27],0); // 80311638
  if (crb(c,2)) { goto L_803116A4; } // 8031163C
  c->r[7]=0u+0x80440000u; // 80311640
  c->r[5]=c->r[1]+0x00000008u; // 80311644
  c->r[7]=c->r[7]+0xFFFFDB58u; // 80311648
  c->r[3]=0u+0x00000001u; // 8031164C
  goto L_80311690; // 80311650
L_80311654:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80311654
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80311658
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 8031165C
  if (crb(c,2)) { goto L_8031168C; } // 80311660
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 80311664
  c->r[30]=c->r[30]&~c->r[4]; // 80311668
  c->r[4]=R32(c->r[7]+c->r[0]); // 8031166C
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 80311670
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 80311674
  c->r[0]=c->r[4]-c->r[0]; // 80311678
  c->r[4]=R32(c->r[5]+c->r[6]); // 8031167C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 80311680
  c->r[0]=c->r[4]|c->r[0]; // 80311684
  W32(c->r[5]+c->r[6],c->r[0]); // 80311688
L_8031168C:;
  c->r[31]=c->r[31]+0x00000001u; // 8031168C
L_80311690:;
  cmps(c,0,(int32_t)c->r[30],0); // 80311690
  if (crb(c,2)) { goto L_803116A4; } // 80311694
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80311698
  cmpu(c,0,c->r[0],0x00000017u); // 8031169C
  if (crb(c,0)) { IRQCHK(c); goto L_80311654; } // 803116A0
L_803116A4:;
  c->lr=0x803116A8u; f_8030C37C(c); // 803116A4
  c->r[3]=c->r[28]|c->r[28]; // 803116A8
  c->r[8]=c->r[29]|c->r[29]; // 803116AC
  c->r[7]=c->r[1]+0x00000008u; // 803116B0
  c->r[4]=0u+0x00000000u; // 803116B4
  c->r[5]=0u+0x00000000u; // 803116B8
  c->r[6]=0u+0x00000000u; // 803116BC
  c->lr=0x803116C4u; f_80316448(c); // 803116C0
  c->r[28]=c->r[3]|c->r[3]; // 803116C4
  c->lr=0x803116CCu; f_8030C380(c); // 803116C8
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 803116CC
  c->r[11]=c->r[1]+0x00000030u; // 803116D0
  c->r[0]=cntlz(c->r[0]); // 803116D4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 803116D8
  c->lr=0x803116E0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803116DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803116E0
  c->lr=c->r[0]; // 803116E4
  c->r[1]=c->r[1]+0x00000030u; // 803116E8
  return; // 803116EC
}

// BTA_DmRemoveDevice
void f_803116F0(Ctx* __restrict c) {
  trace_call(0x803116F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803116F0
  c->r[0]=c->lr; // 803116F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 803116F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803116FC
  c->r[31]=c->r[3]|c->r[3]; // 80311700
  c->lr=0x80311708u; f_8030C37C(c); // 80311704
  c->r[3]=c->r[31]|c->r[31]; // 80311708
  c->lr=0x80311710u; f_803165D0(c); // 8031170C
  c->r[31]=c->r[3]|c->r[3]; // 80311710
  c->lr=0x80311718u; f_8030C380(c); // 80311714
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80311718
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031171C
  c->r[0]=cntlz(c->r[0]); // 80311720
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 80311724
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311728
  c->lr=c->r[0]; // 8031172C
  c->r[1]=c->r[1]+0x00000010u; // 80311730
  return; // 80311734
}

// BTA_DmSendHciReset
void f_80311738(Ctx* __restrict c) {
  trace_call(0x80311738u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311738
  c->r[0]=c->lr; // 8031173C
  c->r[3]=0u+0x00000008u; // 80311740
  W32(c->r[1]+0x00000014u,c->r[0]); // 80311744
  c->lr=0x8031174Cu; f_8030AD84(c); // 80311748
  cmps(c,0,(int32_t)c->r[3],0); // 8031174C
  if (crb(c,2)) { goto L_80311760; } // 80311750
  c->r[0]=0u+0x0000010Cu; // 80311754
  W16(c->r[3]+0x00000000u,c->r[0]); // 80311758
  c->lr=0x80311760u; f_8030ECE4(c); // 8031175C
L_80311760:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311760
  c->lr=c->r[0]; // 80311764
  c->r[1]=c->r[1]+0x00000010u; // 80311768
  return; // 8031176C
}

// bta_dm_sm_execute
void f_80311770(Ctx* __restrict c) {
  trace_call(0x80311770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311770
  c->r[0]=c->lr; // 80311774
  W32(c->r[1]+0x00000024u,c->r[0]); // 80311778
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031177C
  c->r[31]=0u+0x80440000u; // 80311780
  c->r[31]=c->r[31]+0xFFFFDBD0u; // 80311784
  W32(c->r[1]+0x00000018u,c->r[30]); // 80311788
  c->r[30]=0u+0x80440000u; // 8031178C
  c->r[30]=c->r[30]+0xFFFFDC04u; // 80311790
  W32(c->r[1]+0x00000014u,c->r[29]); // 80311794
  c->r[29]=0u+0x00000000u; // 80311798
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031179C
  c->r[28]=c->r[3]|c->r[3]; // 803117A0
L_803117A4:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 803117A4
  c->r[0]=c->r[29]+c->r[30]; // 803117A8
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 803117AC
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 803117B0
  c->r[3]=c->r[3]-c->r[4]; // 803117B4
  c->r[0]=R8(c->r[3]+c->r[0]); // 803117B8
  cmpu(c,0,c->r[0],0x0000000Du); // 803117BC
  if (crb(c,2)) { goto L_803117E4; } // 803117C0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 803117C4
  c->r[3]=c->r[28]|c->r[28]; // 803117C8
  c->r[12]=R32(c->r[31]+c->r[0]); // 803117CC
  c->ctr=c->r[12]; // 803117D0
  if (true) { c->lr=0x803117D8u; dispatch(c,c->ctr); } // 803117D4
  c->r[29]=c->r[29]+0x00000001u; // 803117D8
  cmps(c,0,(int32_t)c->r[29],2); // 803117DC
  if (crb(c,0)) { IRQCHK(c); goto L_803117A4; } // 803117E0
L_803117E4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803117E4
  c->r[3]=0u+0x00000001u; // 803117E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803117EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803117F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 803117F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803117F8
  c->lr=c->r[0]; // 803117FC
  c->r[1]=c->r[1]+0x00000020u; // 80311800
  return; // 80311804
}

// bta_dm_search_sm_execute
void f_80311808(Ctx* __restrict c) {
  trace_call(0x80311808u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311808
  c->r[0]=c->lr; // 8031180C
  c->r[7]=0u+0x80570000u; // 80311810
  c->r[5]=0u+0x80440000u; // 80311814
  W32(c->r[1]+0x00000024u,c->r[0]); // 80311818
  c->r[7]=c->r[7]+0x00005518u; // 8031181C
  c->r[5]=c->r[5]+0xFFFFDCE8u; // 80311820
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80311824
  c->r[31]=0u+0x80440000u; // 80311828
  c->r[31]=c->r[31]+0xFFFFDC30u; // 8031182C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80311830
  W32(c->r[1]+0x00000014u,c->r[29]); // 80311834
  c->r[29]=0u+0x00000000u; // 80311838
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031183C
  c->r[28]=c->r[3]|c->r[3]; // 80311840
  c->r[6]=R16(c->r[7]+0x00000018u); // 80311844
  c->r[0]=R16(c->r[3]+0x00000000u); // 80311848
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8031184C
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80311850
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80311854
  c->r[30]=R32(c->r[5]+c->r[6]); // 80311858
  c->r[0]=c->r[0]-c->r[4]; // 8031185C
  c->r[3]=c->r[30]+c->r[0]; // 80311860
  c->r[0]=R8(c->r[3]+0x00000002u); // 80311864
  W16(c->r[7]+0x00000018u,c->r[0]); // 80311868
L_8031186C:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 8031186C
  c->r[0]=c->r[29]+c->r[30]; // 80311870
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80311874
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 80311878
  c->r[3]=c->r[3]-c->r[4]; // 8031187C
  c->r[0]=R8(c->r[3]+c->r[0]); // 80311880
  cmpu(c,0,c->r[0],0x00000012u); // 80311884
  if (crb(c,2)) { goto L_803118AC; } // 80311888
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 8031188C
  c->r[3]=c->r[28]|c->r[28]; // 80311890
  c->r[12]=R32(c->r[31]+c->r[0]); // 80311894
  c->ctr=c->r[12]; // 80311898
  if (true) { c->lr=0x803118A0u; dispatch(c,c->ctr); } // 8031189C
  c->r[29]=c->r[29]+0x00000001u; // 803118A0
  cmps(c,0,(int32_t)c->r[29],2); // 803118A4
  if (crb(c,0)) { IRQCHK(c); goto L_8031186C; } // 803118A8
L_803118AC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803118AC
  c->r[3]=0u+0x00000001u; // 803118B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 803118B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 803118B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 803118BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803118C0
  c->lr=c->r[0]; // 803118C4
  c->r[1]=c->r[1]+0x00000020u; // 803118C8
  return; // 803118CC
}

// bta_dm_init_pm
void f_803118D0(Ctx* __restrict c) {
  trace_call(0x803118D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803118D0
  c->r[0]=c->lr; // 803118D4
  c->r[3]=0u+0x80570000u; // 803118D8
  c->r[4]=0u+0x00000000u; // 803118DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803118E0
  c->r[3]=c->r[3]+0x00005698u; // 803118E4
  c->r[5]=0u+0x0000002Eu; // 803118E8
  c->lr=0x803118F0u; f_800060B8(c); // 803118EC
  c->r[3]=R32(c->r[13]+0xFFFFAB50u); // 803118F0
  c->r[0]=R8(c->r[3]+0x00000001u); // 803118F4
  cmps(c,0,(int32_t)c->r[0],0); // 803118F8
  if (crb(c,2)) { goto L_80311928; } // 803118FC
  c->r[3]=0u+0x80310000u; // 80311900
  c->r[3]=c->r[3]+0x00001950u; // 80311904
  c->lr=0x8031190Cu; f_8030E92C(c); // 80311908
  c->r[4]=0u+0x80570000u; // 8031190C
  c->r[5]=0u+0x80310000u; // 80311910
  c->r[4]=c->r[4]+0x00005594u; // 80311914
  c->r[3]=0u+0x00000003u; // 80311918
  c->r[4]=c->r[4]+0x00000095u; // 8031191C
  c->r[5]=c->r[5]+0x00002050u; // 80311920
  c->lr=0x80311928u; f_8031A0C4(c); // 80311924
L_80311928:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80311928
  c->lr=c->r[0]; // 8031192C
  c->r[1]=c->r[1]+0x00000010u; // 80311930
  return; // 80311934
}

// bta_dm_disable_pm
void f_80311938(Ctx* __restrict c) {
  trace_call(0x80311938u);
  c->r[4]=0u+0x80570000u; // 80311938
  c->r[3]=0u+0x00000004u; // 8031193C
  c->r[4]=c->r[4]+0x00005594u; // 80311940
  c->r[5]=0u+0x00000000u; // 80311944
  c->r[4]=c->r[4]+0x00000095u; // 80311948
  f_8031A0C4(c); return; // 8031194C
}

// bta_dm_pm_cback
void f_80311950(Ctx* __restrict c) {
  trace_call(0x80311950u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311950
  c->r[0]=c->lr; // 80311954
  W32(c->r[1]+0x00000044u,c->r[0]); // 80311958
  c->r[11]=c->r[1]+0x00000040u; // 8031195C
  c->lr=0x80311964u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80311960
  c->r[25]=c->r[3]|c->r[3]; // 80311964
  c->r[26]=c->r[4]|c->r[4]; // 80311968
  c->r[27]=c->r[5]|c->r[5]; // 8031196C
  c->r[28]=c->r[6]|c->r[6]; // 80311970
  c->r[3]=c->r[1]+0x0000000Cu; // 80311974
  c->lr=0x8031197Cu; f_80317B5C(c); // 80311978
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031197C
  if (!crb(c,2)) { goto L_803119EC; } // 80311980
  c->r[0]=R16(c->r[1]+0x00000012u); // 80311984
  cmpu(c,0,c->r[0],0x0000000Fu); // 80311988
  if (!crb(c,2)) { goto L_803119EC; } // 8031198C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80311990
  cmpu(c,0,c->r[0],0x00000003u); // 80311994
  if (!crb(c,0)) { goto L_803119EC; } // 80311998
  cmpu(c,0,c->r[25],0x00000004u); // 8031199C
  if (!crb(c,2)) { goto L_803119C8; } // 803119A0
  c->r[5]=0u+0x80440000u; // 803119A4
  c->r[3]=c->r[28]|c->r[28]; // 803119A8
  c->r[5]=c->r[5]+0xFFFFDA88u; // 803119AC
  c->r[4]=c->r[1]+0x00000008u; // 803119B0
  c->r[0]=R16(c->r[5]+0x00000004u); // 803119B4
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 803119B8
  W16(c->r[1]+0x00000008u,c->r[0]); // 803119BC
  c->lr=0x803119C4u; f_80314F6C(c); // 803119C0
  goto L_803119EC; // 803119C4
L_803119C8:;
  cmpu(c,0,c->r[25],0x00000005u); // 803119C8
  if (!crb(c,2)) { goto L_803119EC; } // 803119CC
  c->r[5]=0u+0x80440000u; // 803119D0
  c->r[3]=c->r[28]|c->r[28]; // 803119D4
  c->r[5]=c->r[5]+0xFFFFDA88u; // 803119D8
  c->r[4]=c->r[1]+0x00000008u; // 803119DC
  c->r[0]=R16(c->r[5]+0x00000004u); // 803119E0
  W16(c->r[1]+0x00000008u,c->r[0]); // 803119E4
  c->lr=0x803119ECu; f_80314F6C(c); // 803119E8
L_803119EC:;
  c->r[5]=R32(c->r[13]+0xFFFFAB50u); // 803119EC
  c->r[30]=0u+0x00000001u; // 803119F0
  c->r[4]=R8(c->r[5]+0x00000001u); // 803119F4
  goto L_80311A30; // 803119F8
L_803119FC:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 803119FC
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 80311A00
  c->r[0]=c->r[0]-c->r[3]; // 80311A04
  c->r[3]=c->r[5]+c->r[0]; // 80311A08
  c->r[0]=R8(c->r[5]+c->r[0]); // 80311A0C
  cmpu(c,0,c->r[26],c->r[0]); // 80311A10
  if (!crb(c,2)) { goto L_80311A2C; } // 80311A14
  c->r[0]=R8(c->r[3]+0x00000001u); // 80311A18
  cmpu(c,0,c->r[0],0x000000FFu); // 80311A1C
  if (crb(c,2)) { goto L_80311A3C; } // 80311A20
  cmpu(c,0,c->r[27],c->r[0]); // 80311A24
  if (crb(c,2)) { goto L_80311A3C; } // 80311A28
L_80311A2C:;
  c->r[30]=c->r[30]+0x00000001u; // 80311A2C
L_80311A30:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80311A30
  cmpu(c,0,c->r[0],c->r[4]); // 80311A34
  if (!crb(c,1)) { IRQCHK(c); goto L_803119FC; } // 80311A38
L_80311A3C:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 80311A3C
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 80311A40
  cmpu(c,0,c->r[3],c->r[0]); // 80311A44
  if (crb(c,1)) { goto L_80311CB8; } // 80311A48
  c->r[23]=0u+0x80570000u; // 80311A4C
  c->r[31]=0u+0x00000000u; // 80311A50
  c->r[23]=c->r[23]+0x00005594u; // 80311A54
L_80311A58:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 80311A58
  c->r[24]=c->r[23]+c->r[29]; // 80311A5C
  c->r[0]=R8(c->r[24]+0x000000B6u); // 80311A60
  cmps(c,0,(int32_t)c->r[0],0); // 80311A64
  if (crb(c,2)) { goto L_80311A98; } // 80311A68
  c->r[4]=c->r[28]|c->r[28]; // 80311A6C
  c->r[3]=c->r[24]+0x000000B0u; // 80311A70
  c->lr=0x80311A78u; f_8030E86C(c); // 80311A74
  cmps(c,0,(int32_t)c->r[3],0); // 80311A78
  if (!crb(c,2)) { goto L_80311A98; } // 80311A7C
  c->r[3]=c->r[24]|c->r[24]; // 80311A80
  c->r[3]=c->r[3]+0x00000098u; // 80311A84
  c->lr=0x80311A8Cu; f_8030ED20(c); // 80311A88
  c->r[0]=0u+0x00000000u; // 80311A8C
  W8(c->r[24]+0x000000B6u,c->r[0]); // 80311A90
  goto L_80311AA4; // 80311A94
L_80311A98:;
  c->r[31]=c->r[31]+0x00000001u; // 80311A98
  cmpu(c,0,c->r[31],0x00000003u); // 80311A9C
  if (crb(c,0)) { IRQCHK(c); goto L_80311A58; } // 80311AA0
L_80311AA4:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80311AA4
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 80311AA8
  c->r[30]=c->r[3]-c->r[4]; // 80311AAC
  c->r[0]=R32(c->r[13]+0xFFFFAB50u); // 80311AB0
  c->r[4]=R32(c->r[13]+0xFFFFAB54u); // 80311AB4
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 80311AB8
  c->r[3]=c->r[0]+c->r[30]; // 80311ABC
  c->r[0]=R8(c->r[3]+0x00000002u); // 80311AC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 80311AC4
  c->r[0]=c->r[4]+c->r[0]; // 80311AC8
  c->r[3]=c->r[0]+c->r[31]; // 80311ACC
  c->r[0]=R8(c->r[3]+0x00000002u); // 80311AD0
  cmps(c,0,(int32_t)c->r[0],0); // 80311AD4
  if (crb(c,2)) { goto L_80311CB8; } // 80311AD8
  c->r[23]=0u+0x80570000u; // 80311ADC
  c->r[29]=0u+0x00000000u; // 80311AE0
  c->r[24]=c->r[23]+0x00005698u; // 80311AE4
  goto L_80311B2C; // 80311AE8
L_80311AEC:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80311AEC
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 80311AF0
  c->r[0]=c->r[0]+c->r[3]; // 80311AF4
  c->r[3]=c->r[24]+c->r[0]; // 80311AF8
  c->r[0]=R8(c->r[3]+0x00000007u); // 80311AFC
  cmpu(c,0,c->r[26],c->r[0]); // 80311B00
  if (!crb(c,2)) { goto L_80311B28; } // 80311B04
  c->r[0]=R8(c->r[3]+0x00000008u); // 80311B08
  cmpu(c,0,c->r[27],c->r[0]); // 80311B0C
  if (!crb(c,2)) { goto L_80311B28; } // 80311B10
  c->r[4]=c->r[28]|c->r[28]; // 80311B14
  c->r[3]=c->r[3]+0x00000001u; // 80311B18
  c->lr=0x80311B20u; f_8030E86C(c); // 80311B1C
  cmps(c,0,(int32_t)c->r[3],0); // 80311B20
  if (crb(c,2)) { goto L_80311B3C; } // 80311B24
L_80311B28:;
  c->r[29]=c->r[29]+0x00000001u; // 80311B28
L_80311B2C:;
  c->r[0]=R8(c->r[23]+0x00005698u); // 80311B2C
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80311B30
  cmpu(c,0,c->r[3],c->r[0]); // 80311B34
  if (crb(c,0)) { IRQCHK(c); goto L_80311AEC; } // 80311B38
L_80311B3C:;
  c->r[0]=R32(c->r[13]+0xFFFFAB50u); // 80311B3C
  c->r[4]=R32(c->r[13]+0xFFFFAB54u); // 80311B40
  c->r[3]=c->r[0]+c->r[30]; // 80311B44
  c->r[0]=R8(c->r[3]+0x00000002u); // 80311B48
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 80311B4C
  c->r[0]=c->r[4]+c->r[0]; // 80311B50
  c->r[3]=c->r[0]+c->r[31]; // 80311B54
  c->r[0]=R8(c->r[3]+0x00000002u); // 80311B58
  cmpu(c,0,c->r[0],0x00000010u); // 80311B5C
  if (!crb(c,2)) { goto L_80311BD0; } // 80311B60
  c->r[27]=0u+0x80570000u; // 80311B64
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 80311B68
  c->r[0]=R8(c->r[27]+0x00005698u); // 80311B6C
  cmpu(c,0,c->r[3],c->r[0]); // 80311B70
  if (crb(c,2)) { goto L_80311C3C; } // 80311B74
  c->r[26]=c->r[27]+0x00005698u; // 80311B78
  goto L_80311BB4; // 80311B7C
L_80311B80:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 80311B80
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 80311B84
  c->r[3]=c->r[6]+0x00000001u; // 80311B88
  c->r[5]=0u+0x00000009u; // 80311B8C
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80311B90
  c->r[4]=c->r[4]+c->r[6]; // 80311B94
  c->r[0]=c->r[0]+c->r[3]; // 80311B98
  c->r[3]=c->r[26]+c->r[4]; // 80311B9C
  c->r[4]=c->r[26]+c->r[0]; // 80311BA0
  c->r[3]=c->r[3]+0x00000001u; // 80311BA4
  c->r[4]=c->r[4]+0x00000001u; // 80311BA8
  c->lr=0x80311BB0u; f_80005FB4(c); // 80311BAC
  c->r[29]=c->r[29]+0x00000001u; // 80311BB0
L_80311BB4:;
  c->r[3]=R8(c->r[27]+0x00005698u); // 80311BB4
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80311BB8
  cmpu(c,0,c->r[0],c->r[3]); // 80311BBC
  if (crb(c,0)) { IRQCHK(c); goto L_80311B80; } // 80311BC0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80311BC4
  W8(c->r[27]+0x00005698u,c->r[0]); // 80311BC8
  goto L_80311C3C; // 80311BCC
L_80311BD0:;
  c->r[30]=0u+0x80570000u; // 80311BD0
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 80311BD4
  c->r[0]=R8(c->r[30]+0x00005698u); // 80311BD8
  cmpu(c,0,c->r[4],c->r[0]); // 80311BDC
  if (!crb(c,2)) { goto L_80311C3C; } // 80311BE0
  cmpu(c,0,c->r[0],0x00000005u); // 80311BE4
  if (!crb(c,2)) { goto L_80311C0C; } // 80311BE8
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80311BEC
  cmpu(c,0,c->r[0],0x00000002u); // 80311BF0
  if (crb(c,0)) { goto L_80311CB8; } // 80311BF4
  c->r[4]=0u+0x80490000u; // 80311BF8
  c->r[3]=0u+0x00000501u; // 80311BFC
  c->r[4]=c->r[4]+0xFFFFED10u; // 80311C00
  c->lr=0x80311C08u; f_8030E1E8(c); // 80311C04
  goto L_80311CB8; // 80311C08
L_80311C0C:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 80311C0C
  c->r[0]=c->r[30]+0x00005698u; // 80311C10
  c->r[3]=c->r[3]+c->r[4]; // 80311C14
  c->r[4]=c->r[28]|c->r[28]; // 80311C18
  c->r[5]=c->r[0]+c->r[3]; // 80311C1C
  W8(c->r[5]+0x00000007u,c->r[26]); // 80311C20
  c->r[3]=c->r[5]+0x00000001u; // 80311C24
  W8(c->r[5]+0x00000008u,c->r[27]); // 80311C28
  c->lr=0x80311C30u; f_8030E838(c); // 80311C2C
  c->r[3]=R8(c->r[30]+0x00005698u); // 80311C30
  c->r[0]=c->r[3]+0x00000001u; // 80311C34
  W8(c->r[30]+0x00005698u,c->r[0]); // 80311C38
L_80311C3C:;
  c->r[3]=0u+0x80570000u; // 80311C3C
  c->r[24]=0u+0x00000000u; // 80311C40
  c->r[26]=c->r[3]+0x00005594u; // 80311C44
  goto L_80311C80; // 80311C48
L_80311C4C:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 80311C4C
  c->r[4]=c->r[28]|c->r[28]; // 80311C50
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80311C54
  c->r[3]=c->r[26]+c->r[23]; // 80311C58
  c->lr=0x80311C60u; f_8030E86C(c); // 80311C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80311C60
  if (!crb(c,2)) { goto L_80311C7C; } // 80311C64
  c->r[3]=c->r[26]+c->r[23]; // 80311C68
  c->r[0]=0u+0x00000000u; // 80311C6C
  W8(c->r[3]+0x00000009u,c->r[0]); // 80311C70
  W8(c->r[3]+0x0000000Au,c->r[0]); // 80311C74
  goto L_80311C90; // 80311C78
L_80311C7C:;
  c->r[24]=c->r[24]+0x00000001u; // 80311C7C
L_80311C80:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 80311C80
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 80311C84
  cmpu(c,0,c->r[3],c->r[0]); // 80311C88
  if (crb(c,0)) { IRQCHK(c); goto L_80311C4C; } // 80311C8C
L_80311C90:;
  c->r[6]=0u+0x80570000u; // 80311C90
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 80311C94
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 80311C98
  c->r[3]=c->r[28]|c->r[28]; // 80311C9C
  c->r[6]=c->r[6]+0x00005698u; // 80311CA0
  c->r[4]=0u+0x00000000u; // 80311CA4
  c->r[0]=c->r[0]+c->r[5]; // 80311CA8
  c->r[5]=c->r[6]+c->r[0]; // 80311CAC
  W8(c->r[5]+0x00000009u,c->r[25]); // 80311CB0
  c->lr=0x80311CB8u; f_80311CD0(c); // 80311CB4
L_80311CB8:;
  c->r[11]=c->r[1]+0x00000040u; // 80311CB8
  c->lr=0x80311CC0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80311CBC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80311CC0
  c->lr=c->r[0]; // 80311CC4
  c->r[1]=c->r[1]+0x00000040u; // 80311CC8
  return; // 80311CCC
}

// bta_dm_pm_set_mode
void f_80311CD0(Ctx* __restrict c) {
  trace_call(0x80311CD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80311CD0
  c->r[0]=c->lr; // 80311CD4
  W32(c->r[1]+0x00000054u,c->r[0]); // 80311CD8
  c->r[11]=c->r[1]+0x00000050u; // 80311CDC
  c->lr=0x80311CE4u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80311CE0
  c->r[5]=0u+0x80570000u; // 80311CE4
  c->r[20]=c->r[3]|c->r[3]; // 80311CE8
  c->r[28]=c->r[5]+0x00005594u; // 80311CEC
  c->r[21]=c->r[4]|c->r[4]; // 80311CF0
  c->r[0]=R8(c->r[28]+0x0000004Du); // 80311CF4
  c->r[27]=0u+0x00000000u; // 80311CF8
  c->r[26]=0u+0x00000000u; // 80311CFC
  c->r[25]=0u+0x00000000u; // 80311D00
  cmps(c,0,(int32_t)c->r[0],0); // 80311D04
  c->r[24]=0u+0x00000000u; // 80311D08
  c->r[23]=0u+0x00000000u; // 80311D0C
  c->r[22]=0u+0x00000000u; // 80311D10
  if (crb(c,2)) { goto L_80312038; } // 80311D14
  c->r[30]=0u+0x00000000u; // 80311D18
  goto L_80311D4C; // 80311D1C
L_80311D20:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 80311D20
  c->r[4]=c->r[20]|c->r[20]; // 80311D24
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80311D28
  c->r[3]=c->r[28]+c->r[29]; // 80311D2C
  c->lr=0x80311D34u; f_8030E86C(c); // 80311D30
  cmps(c,0,(int32_t)c->r[3],0); // 80311D34
  if (!crb(c,2)) { goto L_80311D48; } // 80311D38
  c->r[24]=c->r[28]+c->r[29]; // 80311D3C
  c->r[25]=R8(c->r[24]+0x0000000Au); // 80311D40
  goto L_80311D5C; // 80311D44
L_80311D48:;
  c->r[30]=c->r[30]+0x00000001u; // 80311D48
L_80311D4C:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 80311D4C
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 80311D50
  cmpu(c,0,c->r[3],c->r[0]); // 80311D54
  if (crb(c,0)) { IRQCHK(c); goto L_80311D20; } // 80311D58
L_80311D5C:;
  cmps(c,0,(int32_t)c->r[24],0); // 80311D5C
  if (crb(c,2)) { goto L_80312038; } // 80311D60
  c->r[30]=0u+0x80570000u; // 80311D64
  c->r[28]=0u+0x00000000u; // 80311D68
  c->r[31]=c->r[30]+0x00005698u; // 80311D6C
  goto L_80311EA0; // 80311D70
L_80311D74:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80311D74
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 80311D78
  c->r[29]=c->r[0]+c->r[3]; // 80311D7C
  c->r[4]=c->r[20]|c->r[20]; // 80311D80
  c->r[3]=c->r[31]+c->r[29]; // 80311D84
  c->r[3]=c->r[3]+0x00000001u; // 80311D88
  c->lr=0x80311D90u; f_8030E86C(c); // 80311D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80311D90
  if (!crb(c,2)) { goto L_80311E9C; } // 80311D94
  c->r[7]=R32(c->r[13]+0xFFFFAB50u); // 80311D98
  c->r[8]=c->r[31]+c->r[29]; // 80311D9C
  c->r[3]=R8(c->r[8]+0x00000008u); // 80311DA0
  c->r[9]=0u+0x00000001u; // 80311DA4
  c->r[6]=R8(c->r[7]+0x00000001u); // 80311DA8
  c->r[4]=R8(c->r[8]+0x00000007u); // 80311DAC
  goto L_80311DE8; // 80311DB0
L_80311DB4:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 80311DB4
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 80311DB8
  c->r[0]=c->r[0]-c->r[5]; // 80311DBC
  c->r[5]=c->r[7]+c->r[0]; // 80311DC0
  c->r[0]=R8(c->r[7]+c->r[0]); // 80311DC4
  cmpu(c,0,c->r[0],c->r[4]); // 80311DC8
  if (!crb(c,2)) { goto L_80311DE4; } // 80311DCC
  c->r[0]=R8(c->r[5]+0x00000001u); // 80311DD0
  cmpu(c,0,c->r[0],0x000000FFu); // 80311DD4
  if (crb(c,2)) { goto L_80311DF4; } // 80311DD8
  cmpu(c,0,c->r[0],c->r[3]); // 80311DDC
  if (crb(c,2)) { goto L_80311DF4; } // 80311DE0
L_80311DE4:;
  c->r[9]=c->r[9]+0x00000001u; // 80311DE4
L_80311DE8:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 80311DE8
  cmpu(c,0,c->r[0],c->r[6]); // 80311DEC
  if (!crb(c,1)) { IRQCHK(c); goto L_80311DB4; } // 80311DF0
L_80311DF4:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 80311DF4
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 80311DF8
  c->r[3]=c->r[0]-c->r[3]; // 80311DFC
  c->r[0]=R8(c->r[8]+0x00000009u); // 80311E00
  c->r[4]=c->r[7]+c->r[3]; // 80311E04
  c->r[3]=R32(c->r[13]+0xFFFFAB54u); // 80311E08
  c->r[4]=R8(c->r[4]+0x00000002u); // 80311E0C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80311E10
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 80311E14
  c->r[5]=c->r[3]+c->r[4]; // 80311E18
  c->r[3]=c->r[5]+c->r[0]; // 80311E1C
  c->r[0]=R8(c->r[5]+0x00000000u); // 80311E20
  c->r[4]=R8(c->r[3]+0x00000002u); // 80311E24
  c->r[23]=c->r[23]|c->r[0]; // 80311E28
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 80311E2C
  if (!crb(c,2)) { goto L_80311E64; } // 80311E30
  c->r[3]=c->r[31]+c->r[29]; // 80311E34
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 80311E38
  c->r[3]=R8(c->r[3]+0x00000009u); // 80311E3C
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80311E40
  c->r[5]=c->r[5]+c->r[3]; // 80311E44
  c->r[3]=R8(c->r[5]+0x00000002u); // 80311E48
  cmpu(c,0,c->r[3],c->r[0]); // 80311E4C
  c->r[22]=c->r[22]|c->r[3]; // 80311E50
  if (!crb(c,1)) { goto L_80311E9C; } // 80311E54
  c->r[26]=R16(c->r[5]+0x00000004u); // 80311E58
  c->r[27]=c->r[4]|c->r[4]; // 80311E5C
  goto L_80311E9C; // 80311E60
L_80311E64:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 80311E64
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 80311E68
  if (!crb(c,2)) { goto L_80311E9C; } // 80311E6C
  c->r[4]=c->r[31]+c->r[29]; // 80311E70
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 80311E74
  c->r[4]=R8(c->r[4]+0x00000009u); // 80311E78
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80311E7C
  c->r[5]=c->r[5]+c->r[4]; // 80311E80
  c->r[4]=R8(c->r[5]+0x00000006u); // 80311E84
  cmpu(c,0,c->r[4],c->r[0]); // 80311E88
  c->r[22]=c->r[22]|c->r[4]; // 80311E8C
  if (!crb(c,1)) { goto L_80311E9C; } // 80311E90
  c->r[27]=c->r[3]|c->r[3]; // 80311E94
  c->r[26]=R16(c->r[5]+0x00000008u); // 80311E98
L_80311E9C:;
  c->r[28]=c->r[28]+0x00000001u; // 80311E9C
L_80311EA0:;
  c->r[0]=R8(c->r[30]+0x00005698u); // 80311EA0
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 80311EA4
  cmpu(c,0,c->r[3],c->r[0]); // 80311EA8
  if (crb(c,0)) { IRQCHK(c); goto L_80311D74; } // 80311EAC
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 80311EB0
  if (crb(c,2)) { goto L_80311ED8; } // 80311EB4
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 80311EB8
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 80311EBC
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 80311EC0
  if (!crb(c,2)) { goto L_80311ED8; } // 80311EC4
  c->r[0]=c->r[23]&c->r[22]; // 80311EC8
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 80311ECC
  if (!crb(c,2)) { goto L_80311ED8; } // 80311ED0
  c->r[26]=0u+0x00000000u; // 80311ED4
L_80311ED8:;
  cmps(c,0,(int32_t)c->r[21],0); // 80311ED8
  if (!crb(c,2)) { goto L_80311F7C; } // 80311EDC
  cmps(c,0,(int32_t)c->r[26],0); // 80311EE0
  if (crb(c,2)) { goto L_80311F7C; } // 80311EE4
  c->r[21]=0u+0x80570000u; // 80311EE8
  c->r[0]=0u+0x00000003u; // 80311EEC
  c->r[21]=c->r[21]+0x00005594u; // 80311EF0
  c->r[4]=0u+0x00000000u; // 80311EF4
  c->ctr=c->r[0]; // 80311EF8
L_80311EFC:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 80311EFC
  c->r[3]=c->r[21]+c->r[22]; // 80311F00
  c->r[0]=R8(c->r[3]+0x000000B6u); // 80311F04
  cmps(c,0,(int32_t)c->r[0],0); // 80311F08
  if (!crb(c,2)) { goto L_80311F48; } // 80311F0C
  c->r[0]=0u+0x00000001u; // 80311F10
  c->r[4]=c->r[20]|c->r[20]; // 80311F14
  W8(c->r[3]+0x000000B6u,c->r[0]); // 80311F18
  c->r[3]=c->r[3]+0x000000B0u; // 80311F1C
  c->lr=0x80311F24u; f_8030E838(c); // 80311F20
  c->r[4]=0u+0x80310000u; // 80311F24
  c->r[3]=c->r[21]+c->r[22]; // 80311F28
  c->r[4]=c->r[4]+0x000020C8u; // 80311F2C
  c->r[5]=c->r[26]|c->r[26]; // 80311F30
  W32(c->r[3]+0x000000A0u,c->r[4]); // 80311F34
  c->r[3]=c->r[3]+0x00000098u; // 80311F38
  c->r[4]=0u+0x00000000u; // 80311F3C
  c->lr=0x80311F44u; f_8030ED00(c); // 80311F40
  goto L_80312038; // 80311F44
L_80311F48:;
  c->r[4]=c->r[4]+0x00000001u; // 80311F48
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 80311F4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80311EFC; } // 80311F50
  cmpu(c,0,c->r[0],0x00000003u); // 80311F54
  if (!crb(c,2)) { goto L_80311F7C; } // 80311F58
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80311F5C
  cmpu(c,0,c->r[0],0x00000002u); // 80311F60
  if (crb(c,0)) { goto L_80312038; } // 80311F64
  c->r[4]=0u+0x80490000u; // 80311F68
  c->r[3]=0u+0x00000501u; // 80311F6C
  c->r[4]=c->r[4]+0xFFFFED3Cu; // 80311F70
  c->lr=0x80311F78u; f_8030E1E8(c); // 80311F74
  goto L_80312038; // 80311F78
L_80311F7C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 80311F7C
  if (crb(c,2)) { goto L_80312038; } // 80311F80
  cmpu(c,0,c->r[0],0x00000001u); // 80311F84
  if (!crb(c,2)) { goto L_80311FCC; } // 80311F88
  c->r[0]=0u+0x00000001u; // 80311F8C
  c->r[3]=c->r[20]|c->r[20]; // 80311F90
  W8(c->r[24]+0x00000009u,c->r[0]); // 80311F94
  c->r[4]=c->r[1]+0x00000009u; // 80311F98
  c->lr=0x80311FA0u; f_8031A350(c); // 80311F9C
  c->r[0]=R8(c->r[1]+0x00000009u); // 80311FA0
  cmpu(c,0,c->r[0],0x00000003u); // 80311FA4
  if (crb(c,2)) { goto L_80312038; } // 80311FA8
  c->r[3]=0u+0x80570000u; // 80311FAC
  c->r[5]=R32(c->r[13]+0xFFFFAB58u); // 80311FB0
  c->r[3]=c->r[3]+0x00005594u; // 80311FB4
  c->r[4]=c->r[20]|c->r[20]; // 80311FB8
  c->r[3]=R8(c->r[3]+0x00000095u); // 80311FBC
  c->r[5]=c->r[5]+0x0000000Au; // 80311FC0
  c->lr=0x80311FC8u; f_8031A180(c); // 80311FC4
  goto L_80312038; // 80311FC8
L_80311FCC:;
  cmpu(c,0,c->r[0],0x00000002u); // 80311FCC
  if (!crb(c,2)) { goto L_80312010; } // 80311FD0
  c->r[0]=0u+0x00000002u; // 80311FD4
  c->r[3]=c->r[20]|c->r[20]; // 80311FD8
  W8(c->r[24]+0x00000009u,c->r[0]); // 80311FDC
  c->r[4]=c->r[1]+0x00000008u; // 80311FE0
  c->lr=0x80311FE8u; f_8031A350(c); // 80311FE4
  c->r[0]=R8(c->r[1]+0x00000008u); // 80311FE8
  cmpu(c,0,c->r[0],0x00000002u); // 80311FEC
  if (crb(c,2)) { goto L_80312038; } // 80311FF0
  c->r[3]=0u+0x80570000u; // 80311FF4
  c->r[5]=R32(c->r[13]+0xFFFFAB58u); // 80311FF8
  c->r[3]=c->r[3]+0x00005594u; // 80311FFC
  c->r[4]=c->r[20]|c->r[20]; // 80312000
  c->r[3]=R8(c->r[3]+0x00000095u); // 80312004
  c->lr=0x8031200Cu; f_8031A180(c); // 80312008
  goto L_80312038; // 8031200C
L_80312010:;
  cmpu(c,0,c->r[0],0x00000004u); // 80312010
  if (!crb(c,2)) { goto L_80312038; } // 80312014
  c->r[3]=0u+0x80570000u; // 80312018
  c->r[0]=0u+0x00000000u; // 8031201C
  c->r[3]=c->r[3]+0x00005594u; // 80312020
  W8(c->r[1]+0x00000014u,c->r[0]); // 80312024
  c->r[3]=R8(c->r[3]+0x00000095u); // 80312028
  c->r[4]=c->r[20]|c->r[20]; // 8031202C
  c->r[5]=c->r[1]+0x0000000Cu; // 80312030
  c->lr=0x80312038u; f_8031A180(c); // 80312034
L_80312038:;
  c->r[11]=c->r[1]+0x00000050u; // 80312038
  c->lr=0x80312040u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031203C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80312040
  c->lr=c->r[0]; // 80312044
  c->r[1]=c->r[1]+0x00000050u; // 80312048
  return; // 8031204C
}

// bta_dm_pm_btm_cback
void f_80312050(Ctx* __restrict c) {
  trace_call(0x80312050u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312050
  c->r[0]=c->lr; // 80312054
  W32(c->r[1]+0x00000024u,c->r[0]); // 80312058
  c->r[11]=c->r[1]+0x00000020u; // 8031205C
  c->lr=0x80312064u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80312060
  c->r[27]=c->r[3]|c->r[3]; // 80312064
  c->r[28]=c->r[4]|c->r[4]; // 80312068
  c->r[29]=c->r[5]|c->r[5]; // 8031206C
  c->r[30]=c->r[6]|c->r[6]; // 80312070
  c->r[3]=0u+0x00000014u; // 80312074
  c->lr=0x8031207Cu; f_8030AD84(c); // 80312078
  cmps(c,0,(int32_t)c->r[3],0); // 8031207C
  c->r[31]=c->r[3]|c->r[3]; // 80312080
  if (crb(c,2)) { goto L_803120B0; } // 80312084
  c->r[0]=0u+0x00000109u; // 80312088
  c->r[4]=c->r[27]|c->r[27]; // 8031208C
  W16(c->r[3]+0x00000000u,c->r[0]); // 80312090
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 80312094
  W16(c->r[3]+0x00000010u,c->r[29]); // 80312098
  W8(c->r[3]+0x00000012u,c->r[30]); // 8031209C
  c->r[3]=c->r[3]+0x00000008u; // 803120A0
  c->lr=0x803120A8u; f_8030E838(c); // 803120A4
  c->r[3]=c->r[31]|c->r[31]; // 803120A8
  c->lr=0x803120B0u; f_8030ECE4(c); // 803120AC
L_803120B0:;
  c->r[11]=c->r[1]+0x00000020u; // 803120B0
  c->lr=0x803120B8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803120B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 803120B8
  c->lr=c->r[0]; // 803120BC
  c->r[1]=c->r[1]+0x00000020u; // 803120C0
  return; // 803120C4
}

// bta_dm_pm_timer_cback
void f_803120C8(Ctx* __restrict c) {
  trace_call(0x803120C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803120C8
  c->r[0]=c->lr; // 803120CC
  c->r[4]=0u+0x80570000u; // 803120D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803120D4
  c->r[4]=c->r[4]+0x00005594u; // 803120D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803120DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 803120E0
  c->r[30]=0u+0x00000000u; // 803120E4
  c->r[0]=R8(c->r[4]+0x000000B6u); // 803120E8
  cmps(c,0,(int32_t)c->r[0],0); // 803120EC
  if (crb(c,2)) { goto L_8031210C; } // 803120F0
  c->r[0]=c->r[4]+0x00000098u; // 803120F4
  cmpu(c,0,c->r[0],c->r[3]); // 803120F8
  if (!crb(c,2)) { goto L_8031210C; } // 803120FC
  c->r[0]=0u+0x00000000u; // 80312100
  W8(c->r[4]+0x000000B6u,c->r[0]); // 80312104
  goto L_80312160; // 80312108
L_8031210C:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 8031210C
  c->r[30]=0u+0x00000001u; // 80312110
  cmps(c,0,(int32_t)c->r[0],0); // 80312114
  if (crb(c,2)) { goto L_80312134; } // 80312118
  c->r[0]=c->r[4]+0x000000B8u; // 8031211C
  cmpu(c,0,c->r[0],c->r[3]); // 80312120
  if (!crb(c,2)) { goto L_80312134; } // 80312124
  c->r[0]=0u+0x00000000u; // 80312128
  W8(c->r[4]+0x000000D6u,c->r[0]); // 8031212C
  goto L_80312160; // 80312130
L_80312134:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 80312134
  c->r[30]=0u+0x00000002u; // 80312138
  cmps(c,0,(int32_t)c->r[0],0); // 8031213C
  if (crb(c,2)) { goto L_8031215C; } // 80312140
  c->r[0]=c->r[4]+0x000000D8u; // 80312144
  cmpu(c,0,c->r[0],c->r[3]); // 80312148
  if (!crb(c,2)) { goto L_8031215C; } // 8031214C
  c->r[0]=0u+0x00000000u; // 80312150
  W8(c->r[4]+0x000000F6u,c->r[0]); // 80312154
  goto L_80312160; // 80312158
L_8031215C:;
  c->r[30]=0u+0x00000003u; // 8031215C
L_80312160:;
  cmpu(c,0,c->r[30],0x00000003u); // 80312160
  if (crb(c,2)) { goto L_803121A8; } // 80312164
  c->r[3]=0u+0x0000000Eu; // 80312168
  c->lr=0x80312170u; f_8030AD84(c); // 8031216C
  cmps(c,0,(int32_t)c->r[3],0); // 80312170
  c->r[31]=c->r[3]|c->r[3]; // 80312174
  if (crb(c,2)) { goto L_803121A8; } // 80312178
  c->r[4]=0u+0x80570000u; // 8031217C
  c->r[5]=0u+0x0000010Au; // 80312180
  c->r[4]=c->r[4]+0x00005594u; // 80312184
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 80312188
  W16(c->r[3]+0x00000000u,c->r[5]); // 8031218C
  c->r[4]=c->r[4]+c->r[0]; // 80312190
  c->r[4]=c->r[4]+0x000000B0u; // 80312194
  c->r[3]=c->r[3]+0x00000008u; // 80312198
  c->lr=0x803121A0u; f_8030E838(c); // 8031219C
  c->r[3]=c->r[31]|c->r[31]; // 803121A0
  c->lr=0x803121A8u; f_8030ECE4(c); // 803121A4
L_803121A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803121A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803121AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 803121B0
  c->lr=c->r[0]; // 803121B4
  c->r[1]=c->r[1]+0x00000010u; // 803121B8
  return; // 803121BC
}

// bta_dm_pm_btm_status
void f_803121C0(Ctx* __restrict c) {
  trace_call(0x803121C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803121C0
  c->r[0]=c->lr; // 803121C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803121C8
  c->r[11]=c->r[1]+0x00000020u; // 803121CC
  c->lr=0x803121D4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803121D0
  c->r[30]=0u+0x80570000u; // 803121D4
  c->r[31]=c->r[3]|c->r[3]; // 803121D8
  c->r[30]=c->r[30]+0x00005594u; // 803121DC
  c->r[27]=0u+0x00000000u; // 803121E0
L_803121E4:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 803121E4
  c->r[29]=c->r[30]+c->r[28]; // 803121E8
  c->r[0]=R8(c->r[29]+0x000000B6u); // 803121EC
  cmps(c,0,(int32_t)c->r[0],0); // 803121F0
  if (crb(c,2)) { goto L_80312224; } // 803121F4
  c->r[3]=c->r[29]+0x000000B0u; // 803121F8
  c->r[4]=c->r[31]+0x00000008u; // 803121FC
  c->lr=0x80312204u; f_8030E86C(c); // 80312200
  cmps(c,0,(int32_t)c->r[3],0); // 80312204
  if (!crb(c,2)) { goto L_80312224; } // 80312208
  c->r[3]=c->r[29]|c->r[29]; // 8031220C
  c->r[3]=c->r[3]+0x00000098u; // 80312210
  c->lr=0x80312218u; f_8030ED20(c); // 80312214
  c->r[0]=0u+0x00000000u; // 80312218
  W8(c->r[29]+0x000000B6u,c->r[0]); // 8031221C
  goto L_80312230; // 80312220
L_80312224:;
  c->r[27]=c->r[27]+0x00000001u; // 80312224
  cmpu(c,0,c->r[27],0x00000003u); // 80312228
  if (crb(c,0)) { IRQCHK(c); goto L_803121E4; } // 8031222C
L_80312230:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 80312230
  cmps(c,0,(int32_t)c->r[0],0); // 80312234
  if (crb(c,2)) { goto L_80312240; } // 80312238
  goto L_803122C8; // 8031223C
L_80312240:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 80312240
  cmps(c,0,(int32_t)c->r[0],0); // 80312244
  if (crb(c,2)) { goto L_803122BC; } // 80312248
  c->r[3]=0u+0x80570000u; // 8031224C
  c->r[29]=0u+0x00000000u; // 80312250
  c->r[30]=c->r[3]+0x00005594u; // 80312254
  goto L_803122A8; // 80312258
L_8031225C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 8031225C
  c->r[4]=c->r[31]+0x00000008u; // 80312260
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80312264
  c->r[3]=c->r[30]+c->r[28]; // 80312268
  c->lr=0x80312270u; f_8030E86C(c); // 8031226C
  cmps(c,0,(int32_t)c->r[3],0); // 80312270
  if (!crb(c,2)) { goto L_803122A4; } // 80312274
  c->r[5]=c->r[30]+c->r[28]; // 80312278
  c->r[0]=R8(c->r[5]+0x00000009u); // 8031227C
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 80312280
  if (crb(c,2)) { goto L_803122C8; } // 80312284
  c->r[0]=R8(c->r[5]+0x0000000Au); // 80312288
  c->r[3]=c->r[31]+0x00000008u; // 8031228C
  c->r[4]=0u+0x00000000u; // 80312290
  c->r[0]=c->r[0]|c->r[6]; // 80312294
  W8(c->r[5]+0x0000000Au,c->r[0]); // 80312298
  c->lr=0x803122A0u; f_80311CD0(c); // 8031229C
  goto L_803122C8; // 803122A0
L_803122A4:;
  c->r[29]=c->r[29]+0x00000001u; // 803122A4
L_803122A8:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 803122A8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 803122AC
  cmpu(c,0,c->r[3],c->r[0]); // 803122B0
  if (crb(c,0)) { IRQCHK(c); goto L_8031225C; } // 803122B4
  goto L_803122C8; // 803122B8
L_803122BC:;
  c->r[3]=c->r[31]+0x00000008u; // 803122BC
  c->r[4]=0u+0x00000000u; // 803122C0
  c->lr=0x803122C8u; f_80311CD0(c); // 803122C4
L_803122C8:;
  c->r[11]=c->r[1]+0x00000020u; // 803122C8
  c->lr=0x803122D0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803122CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803122D0
  c->lr=c->r[0]; // 803122D4
  c->r[1]=c->r[1]+0x00000020u; // 803122D8
  return; // 803122DC
}

// bta_dm_pm_timer
void f_803122E0(Ctx* __restrict c) {
  trace_call(0x803122E0u);
  c->r[4]=0u+0x00000001u; // 803122E0
  c->r[3]=c->r[3]+0x00000008u; // 803122E4
  f_80311CD0(c); return; // 803122E8
}

// bta_hh_api_enable
void f_803122EC(Ctx* __restrict c) {
  trace_call(0x803122ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803122EC
  c->r[0]=c->lr; // 803122F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 803122F4
  c->r[0]=0u+0x00000006u; // 803122F8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803122FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312300
  W32(c->r[1]+0x00000014u,c->r[29]); // 80312304
  c->r[29]=c->r[3]|c->r[3]; // 80312308
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031230C
  c->lr=0x80312314u; f_80324260(c); // 80312310
  c->r[31]=0u+0x80570000u; // 80312314
  c->r[4]=0u+0x00000000u; // 80312318
  c->r[3]=c->r[31]+0x000056C8u; // 8031231C
  c->r[5]=0u+0x00000230u; // 80312320
  c->lr=0x80312328u; f_800060B8(c); // 80312324
  c->r[4]=R8(c->r[29]+0x00000008u); // 80312328
  c->r[3]=c->r[13]+0xFFFFAB90u; // 8031232C
  c->lr=0x80312334u; f_803248A0(c); // 80312330
  c->r[3]=0u+0x80310000u; // 80312334
  c->r[3]=c->r[3]+0x0000379Cu; // 80312338
  c->lr=0x80312340u; f_803242A4(c); // 8031233C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80312340
  if (!crb(c,2)) { goto L_80312428; } // 80312344
  c->r[4]=R32(c->r[29]+0x00000030u); // 80312348
  c->r[12]=c->r[31]+0x000056C8u; // 8031234C
  c->r[3]=0u+0x00000000u; // 80312350
  c->r[0]=0u+0x00000002u; // 80312354
  W32(c->r[12]+0x00000224u,c->r[4]); // 80312358
  c->r[29]=0u+0x00000000u; // 8031235C
  c->r[11]=0u+0x00000001u; // 80312360
  c->r[10]=0u+0x000000FFu; // 80312364
  W8(c->r[1]+0x00000008u,c->r[3]); // 80312368
  c->r[9]=0u+0x00000010u; // 8031236C
  c->ctr=c->r[0]; // 80312370
L_80312374:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 80312374
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 80312378
  c->r[31]=c->r[12]+c->r[3]; // 8031237C
  c->r[8]=c->r[29]+0x00000001u; // 80312380
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 80312384
  c->r[30]=c->r[12]+c->r[0]; // 80312388
  c->r[7]=c->r[29]+0x00000002u; // 8031238C
  c->r[6]=c->r[29]+0x00000003u; // 80312390
  W8(c->r[31]+0x00000026u,c->r[10]); // 80312394
  c->r[5]=c->r[29]+0x00000004u; // 80312398
  c->r[4]=c->r[29]+0x00000005u; // 8031239C
  c->r[3]=c->r[29]+0x00000006u; // 803123A0
  W8(c->r[31]+0x00000022u,c->r[29]); // 803123A4
  c->r[0]=c->r[29]+0x00000007u; // 803123A8
  c->r[29]=c->r[29]+0x00000008u; // 803123AC
  W8(c->r[30]+0x00000214u,c->r[9]); // 803123B0
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 803123B4
  W8(c->r[31]+0x00000046u,c->r[10]); // 803123B8
  W8(c->r[31]+0x00000042u,c->r[8]); // 803123BC
  W8(c->r[30]+0x00000215u,c->r[9]); // 803123C0
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 803123C4
  W8(c->r[31]+0x00000066u,c->r[10]); // 803123C8
  W8(c->r[31]+0x00000062u,c->r[7]); // 803123CC
  W8(c->r[30]+0x00000216u,c->r[9]); // 803123D0
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 803123D4
  W8(c->r[31]+0x00000086u,c->r[10]); // 803123D8
  W8(c->r[31]+0x00000082u,c->r[6]); // 803123DC
  W8(c->r[30]+0x00000217u,c->r[9]); // 803123E0
  W8(c->r[31]+0x000000ACu,c->r[11]); // 803123E4
  W8(c->r[31]+0x000000A6u,c->r[10]); // 803123E8
  W8(c->r[31]+0x000000A2u,c->r[5]); // 803123EC
  W8(c->r[30]+0x00000218u,c->r[9]); // 803123F0
  W8(c->r[31]+0x000000CCu,c->r[11]); // 803123F4
  W8(c->r[31]+0x000000C6u,c->r[10]); // 803123F8
  W8(c->r[31]+0x000000C2u,c->r[4]); // 803123FC
  W8(c->r[30]+0x00000219u,c->r[9]); // 80312400
  W8(c->r[31]+0x000000ECu,c->r[11]); // 80312404
  W8(c->r[31]+0x000000E6u,c->r[10]); // 80312408
  W8(c->r[31]+0x000000E2u,c->r[3]); // 8031240C
  W8(c->r[30]+0x0000021Au,c->r[9]); // 80312410
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 80312414
  W8(c->r[31]+0x00000106u,c->r[10]); // 80312418
  W8(c->r[31]+0x00000102u,c->r[0]); // 8031241C
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 80312420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80312374; } // 80312424
L_80312428:;
  c->r[5]=0u+0x80570000u; // 80312428
  c->r[4]=c->r[1]+0x00000008u; // 8031242C
  c->r[5]=c->r[5]+0x000056C8u; // 80312430
  c->r[3]=0u+0x00000000u; // 80312434
  c->r[12]=R32(c->r[5]+0x00000224u); // 80312438
  c->ctr=c->r[12]; // 8031243C
  if (true) { c->lr=0x80312444u; dispatch(c,c->ctr); } // 80312440
  c->r[0]=R32(c->r[1]+0x00000024u); // 80312444
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80312448
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031244C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80312450
  c->lr=c->r[0]; // 80312454
  c->r[1]=c->r[1]+0x00000020u; // 80312458
  return; // 8031245C
}

// bta_hh_api_disable
void f_80312460(Ctx* __restrict c) {
  trace_call(0x80312460u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312460
  c->r[0]=c->lr; // 80312464
  c->r[3]=0u+0x80570000u; // 80312468
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031246C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80312470
  c->r[31]=c->r[3]+0x000056C8u; // 80312474
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312478
  c->r[0]=R32(c->r[31]+0x00000224u); // 8031247C
  cmps(c,0,(int32_t)c->r[0],0); // 80312480
  if (crb(c,2)) { goto L_8031254C; } // 80312484
  c->r[0]=R8(c->r[31]+0x0000022Du); // 80312488
  cmps(c,0,(int32_t)c->r[0],0); // 8031248C
  if (!crb(c,2)) { goto L_80312510; } // 80312490
  c->r[0]=0u+0x00000000u; // 80312494
  W8(c->r[1]+0x00000008u,c->r[0]); // 80312498
  c->lr=0x803124A0u; f_80324320(c); // 8031249C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803124A0
  if (crb(c,2)) { goto L_803124B0; } // 803124A4
  c->r[0]=0u+0x00000006u; // 803124A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803124AC
L_803124B0:;
  c->r[31]=0u+0x80570000u; // 803124B0
  c->r[30]=0u+0x00000000u; // 803124B4
  c->r[31]=c->r[31]+0x000056C8u; // 803124B8
L_803124BC:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803124BC
  c->r[3]=c->r[31]+c->r[0]; // 803124C0
  c->r[3]=c->r[3]+0x00000014u; // 803124C4
  c->lr=0x803124CCu; f_8030EF84(c); // 803124C8
  c->r[30]=c->r[30]+0x00000001u; // 803124CC
  cmpu(c,0,c->r[30],0x00000010u); // 803124D0
  if (crb(c,0)) { IRQCHK(c); goto L_803124BC; } // 803124D4
  c->r[31]=0u+0x80570000u; // 803124D8
  c->r[31]=c->r[31]+0x000056C8u; // 803124DC
  c->r[3]=c->r[31]+0x00000228u; // 803124E0
  c->lr=0x803124E8u; f_8030EF84(c); // 803124E4
  c->r[12]=R32(c->r[31]+0x00000224u); // 803124E8
  c->r[4]=c->r[1]+0x00000008u; // 803124EC
  c->r[3]=0u+0x00000001u; // 803124F0
  c->ctr=c->r[12]; // 803124F4
  if (true) { c->lr=0x803124FCu; dispatch(c,c->ctr); } // 803124F8
  c->r[3]=c->r[31]|c->r[31]; // 803124FC
  c->r[4]=0u+0x00000000u; // 80312500
  c->r[5]=0u+0x00000230u; // 80312504
  c->lr=0x8031250Cu; f_800060B8(c); // 80312508
  goto L_8031254C; // 8031250C
L_80312510:;
  c->r[0]=0u+0x00000001u; // 80312510
  c->r[30]=0u+0x00000000u; // 80312514
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 80312518
L_8031251C:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 8031251C
  c->r[3]=c->r[31]+c->r[0]; // 80312520
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 80312524
  cmpu(c,0,c->r[0],0x00000003u); // 80312528
  if (!crb(c,2)) { goto L_80312540; } // 8031252C
  c->r[3]=c->r[3]+0x00000010u; // 80312530
  c->r[4]=0u+0x00001701u; // 80312534
  c->r[5]=0u+0x00000000u; // 80312538
  c->lr=0x80312540u; f_80313E04(c); // 8031253C
L_80312540:;
  c->r[30]=c->r[30]+0x00000001u; // 80312540
  cmpu(c,0,c->r[30],0x00000010u); // 80312544
  if (crb(c,0)) { IRQCHK(c); goto L_8031251C; } // 80312548
L_8031254C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031254C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80312550
  c->r[30]=R32(c->r[1]+0x00000018u); // 80312554
  c->lr=c->r[0]; // 80312558
  c->r[1]=c->r[1]+0x00000020u; // 8031255C
  return; // 80312560
}

// bta_hh_disc_cmpl
void f_80312564(Ctx* __restrict c) {
  trace_call(0x80312564u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312564
  c->r[0]=c->lr; // 80312568
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031256C
  c->r[0]=0u+0x00000000u; // 80312570
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80312574
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312578
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031257C
  c->lr=0x80312584u; f_80324320(c); // 80312580
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80312584
  if (crb(c,2)) { goto L_80312594; } // 80312588
  c->r[0]=0u+0x00000006u; // 8031258C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80312590
L_80312594:;
  c->r[31]=0u+0x80570000u; // 80312594
  c->r[30]=0u+0x00000000u; // 80312598
  c->r[31]=c->r[31]+0x000056C8u; // 8031259C
L_803125A0:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803125A0
  c->r[3]=c->r[31]+c->r[0]; // 803125A4
  c->r[3]=c->r[3]+0x00000014u; // 803125A8
  c->lr=0x803125B0u; f_8030EF84(c); // 803125AC
  c->r[30]=c->r[30]+0x00000001u; // 803125B0
  cmpu(c,0,c->r[30],0x00000010u); // 803125B4
  if (crb(c,0)) { IRQCHK(c); goto L_803125A0; } // 803125B8
  c->r[31]=0u+0x80570000u; // 803125BC
  c->r[31]=c->r[31]+0x000056C8u; // 803125C0
  c->r[3]=c->r[31]+0x00000228u; // 803125C4
  c->lr=0x803125CCu; f_8030EF84(c); // 803125C8
  c->r[12]=R32(c->r[31]+0x00000224u); // 803125CC
  c->r[4]=c->r[1]+0x00000008u; // 803125D0
  c->r[3]=0u+0x00000001u; // 803125D4
  c->ctr=c->r[12]; // 803125D8
  if (true) { c->lr=0x803125E0u; dispatch(c,c->ctr); } // 803125DC
  c->r[3]=c->r[31]|c->r[31]; // 803125E0
  c->r[4]=0u+0x00000000u; // 803125E4
  c->r[5]=0u+0x00000230u; // 803125E8
  c->lr=0x803125F0u; f_800060B8(c); // 803125EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803125F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803125F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803125F8
  c->lr=c->r[0]; // 803125FC
  c->r[1]=c->r[1]+0x00000020u; // 80312600
  return; // 80312604
}

// bta_hh_sdp_cback
void f_80312608(Ctx* __restrict c) {
  trace_call(0x80312608u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312608
  c->r[0]=c->lr; // 8031260C
  c->r[6]=0u+0x80570000u; // 80312610
  cmps(c,0,(int32_t)c->r[3],0); // 80312614
  W32(c->r[1]+0x00000024u,c->r[0]); // 80312618
  c->r[0]=0u+0x00000010u; // 8031261C
  c->r[6]=c->r[6]+0x000056C8u; // 80312620
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80312624
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312628
  c->r[30]=c->r[5]|c->r[5]; // 8031262C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80312630
  c->r[29]=c->r[4]|c->r[4]; // 80312634
  W8(c->r[1]+0x00000008u,c->r[0]); // 80312638
  c->r[31]=R32(c->r[6]+0x00000210u); // 8031263C
  if (!crb(c,2)) { goto L_80312700; } // 80312640
  c->r[0]=R8(c->r[31]+0x00000014u); // 80312644
  cmps(c,0,(int32_t)c->r[0],0); // 80312648
  if (crb(c,2)) { goto L_80312654; } // 8031264C
  c->r[29]=c->r[4]|0x00008000u; // 80312650
L_80312654:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312654
  cmpu(c,0,c->r[0],0x00000004u); // 80312658
  if (crb(c,0)) { goto L_8031267C; } // 8031265C
  c->r[4]=0u+0x80490000u; // 80312660
  c->r[6]=c->r[3]|c->r[3]; // 80312664
  c->r[5]=c->r[31]|c->r[31]; // 80312668
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 8031266C
  c->r[4]=c->r[4]+0xFFFFED60u; // 80312670
  c->r[3]=0u+0x00000503u; // 80312674
  c->lr=0x8031267Cu; f_8030E230(c); // 80312678
L_8031267C:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 8031267C
  c->r[3]=c->r[31]|c->r[31]; // 80312680
  c->lr=0x80312688u; f_803145D0(c); // 80312684
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80312688
  if (crb(c,2)) { goto L_803126F8; } // 8031268C
  c->r[0]=R8(c->r[31]+0x00000016u); // 80312690
  cmpu(c,0,c->r[0],0x000000FFu); // 80312694
  if (!crb(c,2)) { goto L_80312700; } // 80312698
  c->r[3]=c->r[31]+0x00000008u; // 8031269C
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 803126A0
  c->r[5]=c->r[1]+0x00000009u; // 803126A4
  c->lr=0x803126ACu; f_80324404(c); // 803126A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803126AC
  W8(c->r[1]+0x00000008u,c->r[3]); // 803126B0
  if (!crb(c,2)) { goto L_803126EC; } // 803126B4
  c->r[3]=0u+0x80570000u; // 803126B8
  c->r[4]=R8(c->r[1]+0x00000009u); // 803126BC
  c->r[3]=c->r[3]+0x000056C8u; // 803126C0
  c->r[0]=R8(c->r[31]+0x00000012u); // 803126C4
  c->r[5]=c->r[3]+c->r[4]; // 803126C8
  c->r[6]=c->r[30]+0x00000068u; // 803126CC
  W8(c->r[5]+0x00000214u,c->r[0]); // 803126D0
  c->r[3]=c->r[31]|c->r[31]; // 803126D4
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 803126D8
  c->r[7]=R8(c->r[30]+0x00000064u); // 803126DC
  c->r[8]=R8(c->r[31]+0x00000015u); // 803126E0
  c->lr=0x803126E8u; f_80314514(c); // 803126E4
  goto L_80312700; // 803126E8
L_803126EC:;
  c->r[0]=0u+0x00000000u; // 803126EC
  W8(c->r[31]+0x00000015u,c->r[0]); // 803126F0
  goto L_80312700; // 803126F4
L_803126F8:;
  c->r[0]=0u+0x000000FFu; // 803126F8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803126FC
L_80312700:;
  c->r[3]=0u+0x80570000u; // 80312700
  c->r[3]=c->r[3]+0x000056C8u; // 80312704
  c->r[3]=c->r[3]+0x00000228u; // 80312708
  c->lr=0x80312710u; f_8030EF84(c); // 8031270C
  c->r[3]=c->r[31]|c->r[31]; // 80312710
  c->r[5]=c->r[1]+0x00000008u; // 80312714
  c->r[4]=0u+0x00001707u; // 80312718
  c->lr=0x80312720u; f_80313E04(c); // 8031271C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80312720
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80312724
  c->r[30]=R32(c->r[1]+0x00000018u); // 80312728
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031272C
  c->lr=c->r[0]; // 80312730
  c->r[1]=c->r[1]+0x00000020u; // 80312734
  return; // 80312738
}

// bta_hh_start_sdp
void f_8031273C(Ctx* __restrict c) {
  trace_call(0x8031273Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031273C
  c->r[0]=c->lr; // 80312740
  W32(c->r[1]+0x00000024u,c->r[0]); // 80312744
  c->r[0]=0u+0x00000010u; // 80312748
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031274C
  c->r[31]=c->r[3]|c->r[3]; // 80312750
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312754
  W32(c->r[1]+0x00000014u,c->r[29]); // 80312758
  c->r[29]=c->r[4]|c->r[4]; // 8031275C
  W8(c->r[1]+0x00000009u,c->r[0]); // 80312760
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 80312764
  c->r[0]=R8(c->r[3]+0x00000015u); // 80312768
  W8(c->r[3]+0x00000014u,c->r[5]); // 8031276C
  cmps(c,0,(int32_t)c->r[0],0); // 80312770
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 80312774
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 80312778
  if (crb(c,2)) { goto L_80312814; } // 8031277C
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312780
  c->r[3]=0u+0x00000000u; // 80312784
  W8(c->r[1]+0x00000009u,c->r[3]); // 80312788
  cmpu(c,0,c->r[0],0x00000005u); // 8031278C
  if (crb(c,0)) { goto L_803127A4; } // 80312790
  c->r[4]=0u+0x80490000u; // 80312794
  c->r[3]=0u+0x00000504u; // 80312798
  c->r[4]=c->r[4]+0xFFFFEDB8u; // 8031279C
  c->lr=0x803127A4u; f_8030E1E8(c); // 803127A0
L_803127A4:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 803127A4
  cmpu(c,0,c->r[0],0x000000FFu); // 803127A8
  if (!crb(c,2)) { goto L_80312800; } // 803127AC
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 803127B0
  c->r[3]=c->r[31]+0x00000008u; // 803127B4
  c->r[5]=c->r[1]+0x00000008u; // 803127B8
  c->lr=0x803127C0u; f_80324404(c); // 803127BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803127C0
  W8(c->r[1]+0x00000009u,c->r[3]); // 803127C4
  if (!crb(c,2)) { goto L_80312800; } // 803127C8
  c->r[4]=R8(c->r[1]+0x00000008u); // 803127CC
  c->r[3]=c->r[31]|c->r[31]; // 803127D0
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 803127D4
  c->r[6]=0u+0x00000000u; // 803127D8
  c->r[7]=R8(c->r[31]+0x00000013u); // 803127DC
  c->r[8]=R8(c->r[31]+0x00000015u); // 803127E0
  c->lr=0x803127E8u; f_80314514(c); // 803127E4
  c->r[3]=0u+0x80570000u; // 803127E8
  c->r[0]=R8(c->r[1]+0x00000008u); // 803127EC
  c->r[3]=c->r[3]+0x000056C8u; // 803127F0
  c->r[4]=R8(c->r[31]+0x00000012u); // 803127F4
  c->r[3]=c->r[3]+c->r[0]; // 803127F8
  W8(c->r[3]+0x00000214u,c->r[4]); // 803127FC
L_80312800:;
  c->r[3]=c->r[31]|c->r[31]; // 80312800
  c->r[5]=c->r[1]+0x00000009u; // 80312804
  c->r[4]=0u+0x00001707u; // 80312808
  c->lr=0x80312810u; f_80313E04(c); // 8031280C
  goto L_803128B4; // 80312810
L_80312814:;
  c->r[30]=0u+0x80570000u; // 80312814
  c->r[30]=c->r[30]+0x000056C8u; // 80312818
  c->r[0]=R32(c->r[30]+0x00000228u); // 8031281C
  cmps(c,0,(int32_t)c->r[0],0); // 80312820
  if (!crb(c,2)) { goto L_80312898; } // 80312824
  c->r[3]=R32(c->r[13]+0xFFFFAB68u); // 80312828
  c->r[3]=R16(c->r[3]+0x00000008u); // 8031282C
  c->lr=0x80312834u; f_8030AD84(c); // 80312830
  W32(c->r[30]+0x00000228u,c->r[3]); // 80312834
  c->r[6]=0u+0x80310000u; // 80312838
  c->r[5]=R32(c->r[13]+0xFFFFAB68u); // 8031283C
  c->r[4]=c->r[3]|c->r[3]; // 80312840
  W32(c->r[30]+0x00000210u,c->r[31]); // 80312844
  c->r[3]=c->r[29]+0x00000008u; // 80312848
  c->r[6]=c->r[6]+0x00002608u; // 8031284C
  c->r[5]=R16(c->r[5]+0x00000008u); // 80312850
  c->lr=0x80312858u; f_80323D48(c); // 80312854
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 80312858
  W8(c->r[1]+0x00000009u,c->r[3]); // 8031285C
  if (crb(c,2)) { goto L_80312898; } // 80312860
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312864
  cmpu(c,0,c->r[0],0x00000005u); // 80312868
  if (crb(c,0)) { goto L_80312880; } // 8031286C
  c->r[4]=0u+0x80490000u; // 80312870
  c->r[3]=0u+0x00000504u; // 80312874
  c->r[4]=c->r[4]+0xFFFFEDE8u; // 80312878
  c->lr=0x80312880u; f_8030E200(c); // 8031287C
L_80312880:;
  c->r[0]=0u+0x00000007u; // 80312880
  c->r[3]=0u+0x80570000u; // 80312884
  c->r[3]=c->r[3]+0x000056C8u; // 80312888
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031288C
  c->r[3]=c->r[3]+0x00000228u; // 80312890
  c->lr=0x80312898u; f_8030EF84(c); // 80312894
L_80312898:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 80312898
  cmps(c,0,(int32_t)c->r[0],0); // 8031289C
  if (crb(c,2)) { goto L_803128B4; } // 803128A0
  c->r[3]=c->r[31]|c->r[31]; // 803128A4
  c->r[5]=c->r[1]+0x00000009u; // 803128A8
  c->r[4]=0u+0x00001707u; // 803128AC
  c->lr=0x803128B4u; f_80313E04(c); // 803128B0
L_803128B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803128B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803128B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803128BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803128C0
  c->lr=c->r[0]; // 803128C4
  c->r[1]=c->r[1]+0x00000020u; // 803128C8
  return; // 803128CC
}

// bta_hh_sdp_cmpl
void f_803128D0(Ctx* __restrict c) {
  trace_call(0x803128D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803128D0
  c->r[0]=c->lr; // 803128D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803128D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803128DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 803128E0
  c->r[30]=c->r[4]|c->r[4]; // 803128E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803128E8
  c->r[29]=c->r[3]|c->r[3]; // 803128EC
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803128F0
  cmpu(c,0,c->r[0],0x00000005u); // 803128F4
  if (crb(c,0)) { goto L_80312910; } // 803128F8
  c->r[4]=0u+0x80490000u; // 803128FC
  c->r[5]=R8(c->r[30]+0x00000000u); // 80312900
  c->r[4]=c->r[4]+0xFFFFEE38u; // 80312904
  c->r[3]=0u+0x00000504u; // 80312908
  c->lr=0x80312910u; f_8030E200(c); // 8031290C
L_80312910:;
  c->r[3]=c->r[1]+0x00000008u; // 80312910
  c->r[4]=0u+0x00000000u; // 80312914
  c->r[5]=0u+0x00000008u; // 80312918
  c->lr=0x80312920u; f_800060B8(c); // 8031291C
  c->r[0]=R8(c->r[29]+0x00000016u); // 80312920
  c->r[3]=c->r[1]+0x00000008u; // 80312924
  c->r[4]=c->r[29]+0x00000008u; // 80312928
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8031292C
  c->lr=0x80312934u; f_8030E838(c); // 80312930
  c->r[31]=R8(c->r[30]+0x00000000u); // 80312934
  cmps(c,0,(int32_t)c->r[31],0); // 80312938
  if (!crb(c,2)) { goto L_803129A4; } // 8031293C
  c->r[0]=R8(c->r[29]+0x00000019u); // 80312940
  cmps(c,0,(int32_t)c->r[0],0); // 80312944
  if (!crb(c,2)) { goto L_80312994; } // 80312948
  c->r[4]=R8(c->r[29]+0x00000014u); // 8031294C
  c->r[3]=c->r[13]+0xFFFFAB90u; // 80312950
  c->lr=0x80312958u; f_803248A0(c); // 80312954
  c->r[3]=R8(c->r[29]+0x00000016u); // 80312958
  c->lr=0x80312960u; f_8032465C(c); // 8031295C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 80312960
  c->r[31]=c->r[3]|c->r[3]; // 80312964
  if (crb(c,2)) { goto L_803129A4; } // 80312968
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8031296C
  cmpu(c,0,c->r[0],0x00000005u); // 80312970
  if (crb(c,0)) { goto L_80312988; } // 80312974
  c->r[4]=0u+0x80490000u; // 80312978
  c->r[3]=0u+0x00000504u; // 8031297C
  c->r[4]=c->r[4]+0xFFFFEE58u; // 80312980
  c->lr=0x80312988u; f_8030E200(c); // 80312984
L_80312988:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 80312988
  c->lr=0x80312990u; f_80324594(c); // 8031298C
  goto L_803129A4; // 80312990
L_80312994:;
  c->r[3]=c->r[29]|c->r[29]; // 80312994
  c->r[4]=0u+0x0000170Bu; // 80312998
  c->r[5]=0u+0x00000000u; // 8031299C
  c->lr=0x803129A4u; f_80313E04(c); // 803129A0
L_803129A4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 803129A4
  if (crb(c,2)) { goto L_80312A1C; } // 803129A8
  c->r[0]=R8(c->r[30]+0x00000000u); // 803129AC
  cmpu(c,0,c->r[0],0x000000FFu); // 803129B0
  if (!crb(c,2)) { goto L_803129C4; } // 803129B4
  c->r[0]=0u+0x0000000Au; // 803129B8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803129BC
  goto L_803129CC; // 803129C0
L_803129C4:;
  c->r[0]=0u+0x00000007u; // 803129C4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 803129C8
L_803129CC:;
  c->r[5]=0u+0x80570000u; // 803129CC
  c->r[4]=c->r[1]+0x00000008u; // 803129D0
  c->r[5]=c->r[5]+0x000056C8u; // 803129D4
  c->r[3]=0u+0x00000002u; // 803129D8
  c->r[12]=R32(c->r[5]+0x00000224u); // 803129DC
  c->ctr=c->r[12]; // 803129E0
  if (true) { c->lr=0x803129E8u; dispatch(c,c->ctr); } // 803129E4
  c->r[3]=c->r[29]|c->r[29]; // 803129E8
  c->r[4]=0u+0x00001701u; // 803129EC
  c->r[5]=0u+0x00000000u; // 803129F0
  c->lr=0x803129F8u; f_80313E04(c); // 803129F4
  c->r[0]=R8(c->r[29]+0x00000015u); // 803129F8
  cmps(c,0,(int32_t)c->r[0],0); // 803129FC
  if (!crb(c,2)) { goto L_80312A18; } // 80312A00
  c->r[0]=R8(c->r[29]+0x00000019u); // 80312A04
  cmps(c,0,(int32_t)c->r[0],0); // 80312A08
  if (!crb(c,2)) { goto L_80312A18; } // 80312A0C
  c->r[3]=c->r[29]|c->r[29]; // 80312A10
  c->lr=0x80312A18u; f_80314494(c); // 80312A14
L_80312A18:;
  c->lr=0x80312A1Cu; f_80314624(c); // 80312A18
L_80312A1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80312A1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80312A20
  c->r[30]=R32(c->r[1]+0x00000018u); // 80312A24
  c->r[29]=R32(c->r[1]+0x00000014u); // 80312A28
  c->lr=c->r[0]; // 80312A2C
  c->r[1]=c->r[1]+0x00000020u; // 80312A30
  return; // 80312A34
}

// bta_hh_api_disc_act
void f_80312A38(Ctx* __restrict c) {
  trace_call(0x80312A38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312A38
  c->r[0]=c->lr; // 80312A3C
  cmps(c,0,(int32_t)c->r[4],0); // 80312A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80312A44
  if (crb(c,2)) { goto L_80312A58; } // 80312A48
  c->r[0]=R16(c->r[4]+0x00000006u); // 80312A4C
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 80312A50
  goto L_80312A5C; // 80312A54
L_80312A58:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 80312A58
L_80312A5C:;
  c->r[0]=0u+0x00000006u; // 80312A5C
  W8(c->r[1]+0x00000009u,c->r[3]); // 80312A60
  W8(c->r[1]+0x00000008u,c->r[0]); // 80312A64
  c->lr=0x80312A6Cu; f_80324800(c); // 80312A68
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80312A6C
  if (crb(c,2)) { goto L_80312A90; } // 80312A70
  c->r[5]=0u+0x80570000u; // 80312A74
  c->r[4]=c->r[1]+0x00000008u; // 80312A78
  c->r[5]=c->r[5]+0x000056C8u; // 80312A7C
  c->r[3]=0u+0x00000003u; // 80312A80
  c->r[12]=R32(c->r[5]+0x00000224u); // 80312A84
  c->ctr=c->r[12]; // 80312A88
  if (true) { c->lr=0x80312A90u; dispatch(c,c->ctr); } // 80312A8C
L_80312A90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80312A90
  c->lr=c->r[0]; // 80312A94
  c->r[1]=c->r[1]+0x00000010u; // 80312A98
  return; // 80312A9C
}

// bta_hh_open_cmpl_act
void f_80312AA0(Ctx* __restrict c) {
  trace_call(0x80312AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312AA0
  c->r[0]=c->lr; // 80312AA4
  cmps(c,0,(int32_t)c->r[4],0); // 80312AA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80312AAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80312AB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312AB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80312AB8
  c->r[29]=c->r[3]|c->r[3]; // 80312ABC
  if (crb(c,2)) { goto L_80312AD0; } // 80312AC0
  c->r[0]=R16(c->r[4]+0x00000006u); // 80312AC4
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 80312AC8
  goto L_80312AD4; // 80312ACC
L_80312AD0:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 80312AD0
L_80312AD4:;
  c->r[3]=c->r[1]+0x00000008u; // 80312AD4
  c->r[4]=0u+0x00000000u; // 80312AD8
  c->r[5]=0u+0x00000008u; // 80312ADC
  c->lr=0x80312AE4u; f_800060B8(c); // 80312AE0
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 80312AE4
  c->r[3]=c->r[1]+0x00000008u; // 80312AE8
  c->r[4]=c->r[29]+0x00000008u; // 80312AEC
  c->lr=0x80312AF4u; f_8030E838(c); // 80312AF0
  c->r[31]=0u+0x80570000u; // 80312AF4
  c->r[31]=c->r[31]+0x000056C8u; // 80312AF8
  c->r[3]=R8(c->r[31]+0x0000022Du); // 80312AFC
  c->r[0]=c->r[3]+0x00000001u; // 80312B00
  W8(c->r[31]+0x0000022Du,c->r[0]); // 80312B04
  c->r[3]=R8(c->r[29]+0x00000016u); // 80312B08
  c->r[4]=R8(c->r[29]+0x00000013u); // 80312B0C
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 80312B10
  c->r[6]=R8(c->r[29]+0x00000015u); // 80312B14
  c->lr=0x80312B1Cu; f_803054FC(c); // 80312B18
  c->r[4]=R8(c->r[29]+0x00000015u); // 80312B1C
  c->r[5]=c->r[29]+0x00000008u; // 80312B20
  c->r[3]=0u+0x00000017u; // 80312B24
  c->lr=0x80312B2Cu; f_8030E93C(c); // 80312B28
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 80312B2C
  cmps(c,0,(int32_t)c->r[5],0); // 80312B30
  if (crb(c,2)) { goto L_80312B88; } // 80312B34
  c->r[3]=c->r[30]|c->r[30]; // 80312B38
  c->r[4]=0u+0x00000007u; // 80312B3C
  c->r[6]=0u+0x00000000u; // 80312B40
  c->r[7]=0u+0x00000000u; // 80312B44
  c->r[8]=0u+0x00000000u; // 80312B48
  c->lr=0x80312B50u; f_803246C0(c); // 80312B4C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80312B50
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80312B54
  if (crb(c,2)) { goto L_80312B7C; } // 80312B58
  c->r[12]=R32(c->r[31]+0x00000224u); // 80312B5C
  c->r[0]=0u+0x00000008u; // 80312B60
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80312B64
  c->r[4]=c->r[1]+0x00000008u; // 80312B68
  c->r[3]=0u+0x00000002u; // 80312B6C
  c->ctr=c->r[12]; // 80312B70
  if (true) { c->lr=0x80312B78u; dispatch(c,c->ctr); } // 80312B74
  goto L_80312BA4; // 80312B78
L_80312B7C:;
  c->r[0]=0u+0x00000002u; // 80312B7C
  W16(c->r[29]+0x00000010u,c->r[0]); // 80312B80
  goto L_80312BA4; // 80312B84
L_80312B88:;
  c->r[0]=0u+0x00000001u; // 80312B88
  c->r[4]=c->r[1]+0x00000008u; // 80312B8C
  W8(c->r[29]+0x0000001Au,c->r[0]); // 80312B90
  c->r[3]=0u+0x00000002u; // 80312B94
  c->r[12]=R32(c->r[31]+0x00000224u); // 80312B98
  c->ctr=c->r[12]; // 80312B9C
  if (true) { c->lr=0x80312BA4u; dispatch(c,c->ctr); } // 80312BA0
L_80312BA4:;
  c->r[0]=0u+0x00000000u; // 80312BA4
  W8(c->r[29]+0x00000019u,c->r[0]); // 80312BA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80312BAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80312BB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80312BB4
  c->r[0]=R32(c->r[1]+0x00000024u); // 80312BB8
  c->lr=c->r[0]; // 80312BBC
  c->r[1]=c->r[1]+0x00000020u; // 80312BC0
  return; // 80312BC4
}

// bta_hh_open_act
void f_80312BC8(Ctx* __restrict c) {
  trace_call(0x80312BC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312BC8
  c->r[0]=c->lr; // 80312BCC
  cmps(c,0,(int32_t)c->r[4],0); // 80312BD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80312BD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80312BD8
  c->r[31]=c->r[4]|c->r[4]; // 80312BDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80312BE0
  c->r[30]=c->r[3]|c->r[3]; // 80312BE4
  if (crb(c,2)) { goto L_80312BF8; } // 80312BE8
  c->r[0]=R16(c->r[4]+0x00000006u); // 80312BEC
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 80312BF0
  goto L_80312BFC; // 80312BF4
L_80312BF8:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 80312BF8
L_80312BFC:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312BFC
  cmpu(c,0,c->r[0],0x00000004u); // 80312C00
  if (crb(c,0)) { goto L_80312C18; } // 80312C04
  c->r[4]=0u+0x80490000u; // 80312C08
  c->r[3]=0u+0x00000503u; // 80312C0C
  c->r[4]=c->r[4]+0xFFFFEEA4u; // 80312C10
  c->lr=0x80312C18u; f_8030E200(c); // 80312C14
L_80312C18:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 80312C18
  cmps(c,0,(int32_t)c->r[0],0); // 80312C1C
  if (crb(c,2)) { goto L_80312C38; } // 80312C20
  c->r[3]=c->r[30]|c->r[30]; // 80312C24
  c->r[5]=c->r[31]|c->r[31]; // 80312C28
  c->r[4]=0u+0x0000170Bu; // 80312C2C
  c->lr=0x80312C34u; f_80313E04(c); // 80312C30
  goto L_80312C68; // 80312C34
L_80312C38:;
  c->r[0]=0u+0x00000001u; // 80312C38
  c->r[3]=c->r[1]+0x00000008u; // 80312C3C
  W8(c->r[30]+0x00000019u,c->r[0]); // 80312C40
  c->r[4]=0u+0x00000000u; // 80312C44
  c->r[5]=0u+0x00000010u; // 80312C48
  c->lr=0x80312C50u; f_800060B8(c); // 80312C4C
  c->r[3]=c->r[1]+0x00000010u; // 80312C50
  c->r[4]=c->r[30]+0x00000008u; // 80312C54
  c->lr=0x80312C5Cu; f_8030E838(c); // 80312C58
  c->r[3]=c->r[30]|c->r[30]; // 80312C5C
  c->r[4]=c->r[1]+0x00000008u; // 80312C60
  c->lr=0x80312C68u; f_8031273C(c); // 80312C64
L_80312C68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80312C68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80312C6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80312C70
  c->lr=c->r[0]; // 80312C74
  c->r[1]=c->r[1]+0x00000020u; // 80312C78
  return; // 80312C7C
}

// bta_hh_data_act
void f_80312C80(Ctx* __restrict c) {
  trace_call(0x80312C80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312C80
  c->r[0]=c->lr; // 80312C84
  c->r[8]=c->r[3]|c->r[3]; // 80312C88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80312C8C
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 80312C90
  W32(c->r[1]+0x00000008u,c->r[5]); // 80312C94
  c->r[0]=R16(c->r[5]+0x00000004u); // 80312C98
  c->r[3]=R16(c->r[4]+0x00000006u); // 80312C9C
  c->r[4]=c->r[5]+c->r[0]; // 80312CA0
  c->r[5]=R16(c->r[5]+0x00000002u); // 80312CA4
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 80312CA8
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80312CAC
  c->r[7]=R8(c->r[8]+0x00000013u); // 80312CB0
  c->r[4]=c->r[4]+0x00000008u; // 80312CB4
  c->r[8]=R8(c->r[8]+0x00000015u); // 80312CB8
  c->lr=0x80312CC0u; f_803054C0(c); // 80312CBC
  c->r[3]=c->r[1]+0x00000008u; // 80312CC0
  c->lr=0x80312CC8u; f_8030EF84(c); // 80312CC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80312CC8
  c->lr=c->r[0]; // 80312CCC
  c->r[1]=c->r[1]+0x00000010u; // 80312CD0
  return; // 80312CD4
}

// bta_hh_handsk_act
void f_80312CD8(Ctx* __restrict c) {
  trace_call(0x80312CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312CD8
  c->r[0]=c->lr; // 80312CDC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80312CE0
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80312CE4
  c->r[31]=c->r[3]|c->r[3]; // 80312CE8
  W32(c->r[1]+0x00000038u,c->r[30]); // 80312CEC
  c->r[30]=0u+0x80490000u; // 80312CF0
  c->r[30]=c->r[30]+0xFFFFED60u; // 80312CF4
  W32(c->r[1]+0x00000034u,c->r[29]); // 80312CF8
  c->r[29]=c->r[4]|c->r[4]; // 80312CFC
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312D00
  cmpu(c,0,c->r[0],0x00000005u); // 80312D04
  if (crb(c,0)) { goto L_80312D7C; } // 80312D08
  c->r[0]=R16(c->r[3]+0x00000010u); // 80312D0C
  cmpu(c,0,c->r[0],0x00000009u); // 80312D10
  if (crb(c,1)) { goto L_80312D68; } // 80312D14
  c->r[3]=0u+0x80490000u; // 80312D18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80312D1C
  c->r[3]=c->r[3]+0xFFFFEFE0u; // 80312D20
  c->r[3]=R32(c->r[3]+c->r[0]); // 80312D24
  c->ctr=c->r[3]; // 80312D28
  if (true) { switch (c->ctr) { case 0x80312D30u: goto L_80312D30; case 0x80312D38u: goto L_80312D38; case 0x80312D40u: goto L_80312D40; case 0x80312D48u: goto L_80312D48; case 0x80312D50u: goto L_80312D50; case 0x80312D58u: goto L_80312D58; case 0x80312D60u: goto L_80312D60; case 0x80312D68u: goto L_80312D68; case 0x80312DA0u: goto L_80312DA0; case 0x80312E20u: goto L_80312E20; case 0x80312E90u: goto L_80312E90; case 0x80312EFCu: goto L_80312EFC; default: break; } dispatch(c,c->ctr); return; } // 80312D2C
L_80312D30:;
  c->r[5]=c->r[30]+0x0000016Cu; // 80312D30
  goto L_80312D6C; // 80312D34
L_80312D38:;
  c->r[5]=c->r[30]+0x00000180u; // 80312D38
  goto L_80312D6C; // 80312D3C
L_80312D40:;
  c->r[5]=c->r[30]+0x00000194u; // 80312D40
  goto L_80312D6C; // 80312D44
L_80312D48:;
  c->r[5]=c->r[30]+0x000001ACu; // 80312D48
  goto L_80312D6C; // 80312D4C
L_80312D50:;
  c->r[5]=c->r[30]+0x000001C4u; // 80312D50
  goto L_80312D6C; // 80312D54
L_80312D58:;
  c->r[5]=c->r[30]+0x000001D8u; // 80312D58
  goto L_80312D6C; // 80312D5C
L_80312D60:;
  c->r[5]=c->r[30]+0x000001F0u; // 80312D60
  goto L_80312D6C; // 80312D64
L_80312D68:;
  c->r[5]=c->r[30]+0x00000200u; // 80312D68
L_80312D6C:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 80312D6C
  c->r[4]=c->r[30]+0x00000210u; // 80312D70
  c->r[3]=0u+0x00000504u; // 80312D74
  c->lr=0x80312D7Cu; f_8030E218(c); // 80312D78
L_80312D7C:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 80312D7C
  cmpu(c,0,c->r[0],0x00000009u); // 80312D80
  if (crb(c,1)) { goto L_80312EFC; } // 80312D84
  c->r[3]=0u+0x80490000u; // 80312D88
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80312D8C
  c->r[3]=c->r[3]+0xFFFFEFB8u; // 80312D90
  c->r[3]=R32(c->r[3]+c->r[0]); // 80312D94
  c->ctr=c->r[3]; // 80312D98
  if (true) { switch (c->ctr) { case 0x80312D30u: goto L_80312D30; case 0x80312D38u: goto L_80312D38; case 0x80312D40u: goto L_80312D40; case 0x80312D48u: goto L_80312D48; case 0x80312D50u: goto L_80312D50; case 0x80312D58u: goto L_80312D58; case 0x80312D60u: goto L_80312D60; case 0x80312D68u: goto L_80312D68; case 0x80312DA0u: goto L_80312DA0; case 0x80312E20u: goto L_80312E20; case 0x80312E90u: goto L_80312E90; case 0x80312EFCu: goto L_80312EFC; default: break; } dispatch(c,c->ctr); return; } // 80312D9C
L_80312DA0:;
  c->r[3]=c->r[1]+0x00000018u; // 80312DA0
  c->r[4]=0u+0x00000000u; // 80312DA4
  c->r[5]=0u+0x0000000Au; // 80312DA8
  c->lr=0x80312DB0u; f_800060B8(c); // 80312DAC
  c->r[0]=R8(c->r[31]+0x00000016u); // 80312DB0
  W8(c->r[1]+0x00000019u,c->r[0]); // 80312DB4
  c->r[0]=R32(c->r[29]+0x00000008u); // 80312DB8
  cmps(c,0,(int32_t)c->r[0],5); // 80312DBC
  if (!crb(c,0)) { goto L_80312DD4; } // 80312DC0
  cmps(c,0,(int32_t)c->r[0],0); // 80312DC4
  if (crb(c,2)) { goto L_80312DE0; } // 80312DC8
  if (!crb(c,0)) { goto L_80312DE8; } // 80312DCC
  goto L_80312DF0; // 80312DD0
L_80312DD4:;
  cmps(c,0,(int32_t)c->r[0],16); // 80312DD4
  if (!crb(c,0)) { goto L_80312DF0; } // 80312DD8
  goto L_80312DF0; // 80312DDC
L_80312DE0:;
  c->r[0]=0u+0x00000000u; // 80312DE0
  goto L_80312DF4; // 80312DE4
L_80312DE8:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80312DE8
  goto L_80312DF4; // 80312DEC
L_80312DF0:;
  c->r[0]=0u+0x00000005u; // 80312DF0
L_80312DF4:;
  c->r[3]=0u+0x80570000u; // 80312DF4
  W8(c->r[1]+0x00000018u,c->r[0]); // 80312DF8
  c->r[3]=c->r[3]+0x000056C8u; // 80312DFC
  c->r[4]=c->r[1]+0x00000018u; // 80312E00
  c->r[12]=R32(c->r[3]+0x00000224u); // 80312E04
  c->r[3]=R16(c->r[31]+0x00000010u); // 80312E08
  c->ctr=c->r[12]; // 80312E0C
  if (true) { c->lr=0x80312E14u; dispatch(c,c->ctr); } // 80312E10
  c->r[0]=0u+0x00000000u; // 80312E14
  W16(c->r[31]+0x00000010u,c->r[0]); // 80312E18
  goto L_80312F14; // 80312E1C
L_80312E20:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 80312E20
  W8(c->r[1]+0x00000009u,c->r[0]); // 80312E24
  c->r[0]=R32(c->r[29]+0x00000008u); // 80312E28
  cmps(c,0,(int32_t)c->r[0],5); // 80312E2C
  if (!crb(c,0)) { goto L_80312E44; } // 80312E30
  cmps(c,0,(int32_t)c->r[0],0); // 80312E34
  if (crb(c,2)) { goto L_80312E50; } // 80312E38
  if (!crb(c,0)) { goto L_80312E58; } // 80312E3C
  goto L_80312E60; // 80312E40
L_80312E44:;
  cmps(c,0,(int32_t)c->r[0],16); // 80312E44
  if (!crb(c,0)) { goto L_80312E60; } // 80312E48
  goto L_80312E60; // 80312E4C
L_80312E50:;
  c->r[0]=0u+0x00000000u; // 80312E50
  goto L_80312E64; // 80312E54
L_80312E58:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80312E58
  goto L_80312E64; // 80312E5C
L_80312E60:;
  c->r[0]=0u+0x00000005u; // 80312E60
L_80312E64:;
  c->r[3]=0u+0x80570000u; // 80312E64
  W8(c->r[1]+0x00000008u,c->r[0]); // 80312E68
  c->r[3]=c->r[3]+0x000056C8u; // 80312E6C
  c->r[4]=c->r[1]+0x00000008u; // 80312E70
  c->r[12]=R32(c->r[3]+0x00000224u); // 80312E74
  c->r[3]=R16(c->r[31]+0x00000010u); // 80312E78
  c->ctr=c->r[12]; // 80312E7C
  if (true) { c->lr=0x80312E84u; dispatch(c,c->ctr); } // 80312E80
  c->r[0]=0u+0x00000000u; // 80312E84
  W16(c->r[31]+0x00000010u,c->r[0]); // 80312E88
  goto L_80312F14; // 80312E8C
L_80312E90:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 80312E90
  c->r[3]=0u+0x00000000u; // 80312E94
  cmps(c,0,(int32_t)c->r[0],0); // 80312E98
  if (crb(c,2)) { goto L_80312EA4; } // 80312E9C
  c->r[3]=0u+0x00000008u; // 80312EA0
L_80312EA4:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 80312EA4
  c->r[3]=c->r[1]+0x00000010u; // 80312EA8
  c->r[4]=c->r[31]+0x00000008u; // 80312EAC
  c->r[0]=R8(c->r[31]+0x00000016u); // 80312EB0
  W8(c->r[1]+0x00000017u,c->r[0]); // 80312EB4
  c->lr=0x80312EBCu; f_8030E838(c); // 80312EB8
  c->r[5]=0u+0x80570000u; // 80312EBC
  c->r[4]=c->r[1]+0x00000010u; // 80312EC0
  c->r[5]=c->r[5]+0x000056C8u; // 80312EC4
  c->r[3]=R16(c->r[31]+0x00000010u); // 80312EC8
  c->r[12]=R32(c->r[5]+0x00000224u); // 80312ECC
  c->ctr=c->r[12]; // 80312ED0
  if (true) { c->lr=0x80312ED8u; dispatch(c,c->ctr); } // 80312ED4
  c->lr=0x80312EDCu; f_80314624(c); // 80312ED8
  c->r[0]=0u+0x00000000u; // 80312EDC
  W16(c->r[31]+0x00000010u,c->r[0]); // 80312EE0
  c->r[0]=R8(c->r[1]+0x00000016u); // 80312EE4
  cmps(c,0,(int32_t)c->r[0],0); // 80312EE8
  if (!crb(c,2)) { goto L_80312F14; } // 80312EEC
  c->r[0]=0u+0x00000001u; // 80312EF0
  W8(c->r[31]+0x0000001Au,c->r[0]); // 80312EF4
  goto L_80312F14; // 80312EF8
L_80312EFC:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312EFC
  cmpu(c,0,c->r[0],0x00000005u); // 80312F00
  if (crb(c,0)) { goto L_80312F14; } // 80312F04
  c->r[4]=c->r[30]+0x0000023Cu; // 80312F08
  c->r[3]=0u+0x00000504u; // 80312F0C
  c->lr=0x80312F14u; f_8030E1E8(c); // 80312F10
L_80312F14:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 80312F14
  c->r[5]=c->r[31]+0x00000008u; // 80312F18
  c->r[3]=0u+0x00000017u; // 80312F1C
  c->lr=0x80312F24u; f_8030EAF8(c); // 80312F20
  c->r[0]=R32(c->r[1]+0x00000044u); // 80312F24
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80312F28
  c->r[30]=R32(c->r[1]+0x00000038u); // 80312F2C
  c->r[29]=R32(c->r[1]+0x00000034u); // 80312F30
  c->lr=c->r[0]; // 80312F34
  c->r[1]=c->r[1]+0x00000040u; // 80312F38
  return; // 80312F3C
}

// bta_hh_ctrl_dat_act
void f_80312F40(Ctx* __restrict c) {
  trace_call(0x80312F40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80312F40
  c->r[0]=c->lr; // 80312F44
  W32(c->r[1]+0x00000034u,c->r[0]); // 80312F48
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80312F4C
  c->r[31]=c->r[3]|c->r[3]; // 80312F50
  W32(c->r[1]+0x00000028u,c->r[30]); // 80312F54
  W32(c->r[1]+0x00000024u,c->r[29]); // 80312F58
  c->r[29]=0u+0x80490000u; // 80312F5C
  c->r[29]=c->r[29]+0xFFFFED60u; // 80312F60
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80312F64
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80312F68
  W32(c->r[1]+0x00000008u,c->r[4]); // 80312F6C
  cmpu(c,0,c->r[0],0x00000005u); // 80312F70
  c->r[0]=R16(c->r[4]+0x00000004u); // 80312F74
  c->r[30]=c->r[4]+c->r[0]; // 80312F78
  if (crb(c,0)) { goto L_80312FEC; } // 80312F7C
  c->r[0]=R16(c->r[3]+0x00000010u); // 80312F80
  cmpu(c,0,c->r[0],0x00000009u); // 80312F84
  if (crb(c,1)) { goto L_80312FDC; } // 80312F88
  c->r[3]=0u+0x80490000u; // 80312F8C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80312F90
  c->r[3]=c->r[3]+0xFFFFF08Cu; // 80312F94
  c->r[3]=R32(c->r[3]+c->r[0]); // 80312F98
  c->ctr=c->r[3]; // 80312F9C
  if (true) { switch (c->ctr) { case 0x80312FA4u: goto L_80312FA4; case 0x80312FACu: goto L_80312FAC; case 0x80312FB4u: goto L_80312FB4; case 0x80312FBCu: goto L_80312FBC; case 0x80312FC4u: goto L_80312FC4; case 0x80312FCCu: goto L_80312FCC; case 0x80312FD4u: goto L_80312FD4; case 0x80312FDCu: goto L_80312FDC; case 0x80313088u: goto L_80313088; case 0x80313090u: goto L_80313090; case 0x80313098u: goto L_80313098; case 0x803130A0u: goto L_803130A0; case 0x803130A8u: goto L_803130A8; case 0x803130B0u: goto L_803130B0; case 0x803130B8u: goto L_803130B8; case 0x803130C0u: goto L_803130C0; default: break; } dispatch(c,c->ctr); return; } // 80312FA0
L_80312FA4:;
  c->r[5]=c->r[29]+0x0000016Cu; // 80312FA4
  goto L_80312FE0; // 80312FA8
L_80312FAC:;
  c->r[5]=c->r[29]+0x00000180u; // 80312FAC
  goto L_80312FE0; // 80312FB0
L_80312FB4:;
  c->r[5]=c->r[29]+0x00000194u; // 80312FB4
  goto L_80312FE0; // 80312FB8
L_80312FBC:;
  c->r[5]=c->r[29]+0x000001ACu; // 80312FBC
  goto L_80312FE0; // 80312FC0
L_80312FC4:;
  c->r[5]=c->r[29]+0x000001C4u; // 80312FC4
  goto L_80312FE0; // 80312FC8
L_80312FCC:;
  c->r[5]=c->r[29]+0x000001D8u; // 80312FCC
  goto L_80312FE0; // 80312FD0
L_80312FD4:;
  c->r[5]=c->r[29]+0x000001F0u; // 80312FD4
  goto L_80312FE0; // 80312FD8
L_80312FDC:;
  c->r[5]=c->r[29]+0x00000200u; // 80312FDC
L_80312FE0:;
  c->r[4]=c->r[29]+0x000002A8u; // 80312FE0
  c->r[3]=0u+0x00000504u; // 80312FE4
  c->lr=0x80312FECu; f_8030E200(c); // 80312FE8
L_80312FEC:;
  c->r[0]=0u+0x00000000u; // 80312FEC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80312FF0
  c->r[0]=R8(c->r[31]+0x00000016u); // 80312FF4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80312FF8
  c->r[4]=R16(c->r[31]+0x00000010u); // 80312FFC
  cmps(c,0,(int32_t)c->r[4],7); // 80313000
  if (crb(c,2)) { goto L_8031305C; } // 80313004
  if (!crb(c,0)) { goto L_80313024; } // 80313008
  cmps(c,0,(int32_t)c->r[4],5); // 8031300C
  if (crb(c,2)) { goto L_8031305C; } // 80313010
  if (!crb(c,0)) { goto L_80313050; } // 80313014
  cmps(c,0,(int32_t)c->r[4],4); // 80313018
  if (!crb(c,0)) { goto L_8031303C; } // 8031301C
  goto L_8031305C; // 80313020
L_80313024:;
  cmps(c,0,(int32_t)c->r[4],9); // 80313024
  if (crb(c,2)) { goto L_8031305C; } // 80313028
  if (!crb(c,0)) { goto L_8031305C; } // 8031302C
  c->r[0]=R8(c->r[30]+0x00000008u); // 80313030
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80313034
  goto L_803130D0; // 80313038
L_8031303C:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 8031303C
  c->r[3]=c->r[1]+0x0000000Eu; // 80313040
  c->r[5]=0u+0x00000008u; // 80313044
  c->lr=0x8031304Cu; f_80005FB4(c); // 80313048
  goto L_803130D0; // 8031304C
L_80313050:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 80313050
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80313054
  goto L_803130D0; // 80313058
L_8031305C:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8031305C
  cmpu(c,0,c->r[0],0x00000005u); // 80313060
  if (crb(c,0)) { goto L_803130D0; } // 80313064
  cmpu(c,0,c->r[4],0x00000009u); // 80313068
  if (crb(c,1)) { goto L_803130C0; } // 8031306C
  c->r[3]=0u+0x80490000u; // 80313070
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80313074
  c->r[3]=c->r[3]+0xFFFFF064u; // 80313078
  c->r[3]=R32(c->r[3]+c->r[0]); // 8031307C
  c->ctr=c->r[3]; // 80313080
  if (true) { switch (c->ctr) { case 0x80312FA4u: goto L_80312FA4; case 0x80312FACu: goto L_80312FAC; case 0x80312FB4u: goto L_80312FB4; case 0x80312FBCu: goto L_80312FBC; case 0x80312FC4u: goto L_80312FC4; case 0x80312FCCu: goto L_80312FCC; case 0x80312FD4u: goto L_80312FD4; case 0x80312FDCu: goto L_80312FDC; case 0x80313088u: goto L_80313088; case 0x80313090u: goto L_80313090; case 0x80313098u: goto L_80313098; case 0x803130A0u: goto L_803130A0; case 0x803130A8u: goto L_803130A8; case 0x803130B0u: goto L_803130B0; case 0x803130B8u: goto L_803130B8; case 0x803130C0u: goto L_803130C0; default: break; } dispatch(c,c->ctr); return; } // 80313084
L_80313088:;
  c->r[5]=c->r[29]+0x0000016Cu; // 80313088
  goto L_803130C4; // 8031308C
L_80313090:;
  c->r[5]=c->r[29]+0x00000180u; // 80313090
  goto L_803130C4; // 80313094
L_80313098:;
  c->r[5]=c->r[29]+0x00000194u; // 80313098
  goto L_803130C4; // 8031309C
L_803130A0:;
  c->r[5]=c->r[29]+0x000001ACu; // 803130A0
  goto L_803130C4; // 803130A4
L_803130A8:;
  c->r[5]=c->r[29]+0x000001C4u; // 803130A8
  goto L_803130C4; // 803130AC
L_803130B0:;
  c->r[5]=c->r[29]+0x000001D8u; // 803130B0
  goto L_803130C4; // 803130B4
L_803130B8:;
  c->r[5]=c->r[29]+0x000001F0u; // 803130B8
  goto L_803130C4; // 803130BC
L_803130C0:;
  c->r[5]=c->r[29]+0x00000200u; // 803130C0
L_803130C4:;
  c->r[4]=c->r[29]+0x000002CCu; // 803130C4
  c->r[3]=0u+0x00000504u; // 803130C8
  c->lr=0x803130D0u; f_8030E200(c); // 803130CC
L_803130D0:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 803130D0
  c->r[5]=c->r[31]+0x00000008u; // 803130D4
  c->r[3]=0u+0x00000017u; // 803130D8
  c->lr=0x803130E0u; f_8030EB2C(c); // 803130DC
  c->r[4]=R8(c->r[31]+0x00000015u); // 803130E0
  c->r[5]=c->r[31]+0x00000008u; // 803130E4
  c->r[3]=0u+0x00000017u; // 803130E8
  c->lr=0x803130F0u; f_8030EAF8(c); // 803130EC
  c->r[5]=0u+0x80570000u; // 803130F0
  c->r[4]=c->r[1]+0x0000000Cu; // 803130F4
  c->r[5]=c->r[5]+0x000056C8u; // 803130F8
  c->r[3]=R16(c->r[31]+0x00000010u); // 803130FC
  c->r[12]=R32(c->r[5]+0x00000224u); // 80313100
  c->ctr=c->r[12]; // 80313104
  if (true) { c->lr=0x8031310Cu; dispatch(c,c->ctr); } // 80313108
  c->r[0]=0u+0x00000000u; // 8031310C
  c->r[3]=c->r[1]+0x00000008u; // 80313110
  W16(c->r[31]+0x00000010u,c->r[0]); // 80313114
  c->lr=0x8031311Cu; f_8030EF84(c); // 80313118
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031311C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80313120
  c->r[30]=R32(c->r[1]+0x00000028u); // 80313124
  c->r[29]=R32(c->r[1]+0x00000024u); // 80313128
  c->lr=c->r[0]; // 8031312C
  c->r[1]=c->r[1]+0x00000030u; // 80313130
  return; // 80313134
}

// bta_hh_close_act
void f_80313138(Ctx* __restrict c) {
  trace_call(0x80313138u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313138
  c->r[0]=c->lr; // 8031313C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80313140
  c->r[0]=0u+0x00000000u; // 80313144
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80313148
  c->r[31]=c->r[3]|c->r[3]; // 8031314C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80313150
  c->r[30]=0u+0x00000003u; // 80313154
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 80313158
  c->r[0]=R8(c->r[3]+0x00000017u); // 8031315C
  c->r[6]=R32(c->r[4]+0x00000008u); // 80313160
  cmps(c,0,(int32_t)c->r[0],0); // 80313164
  if (crb(c,2)) { goto L_80313170; } // 80313168
  c->r[30]=0u+0x0000000Du; // 8031316C
L_80313170:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 80313170
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 80313174
  W8(c->r[1]+0x0000000Du,c->r[5]); // 80313178
  c->r[0]=R32(c->r[4]+0x00000008u); // 8031317C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80313180
  if (!crb(c,2)) { goto L_803131A4; } // 80313184
  cmpu(c,0,c->r[6],0x0000000Fu); // 80313188
  if (crb(c,2)) { goto L_803131A4; } // 8031318C
  cmpu(c,0,c->r[6],0x0000000Eu); // 80313190
  if (crb(c,2)) { goto L_803131A4; } // 80313194
  c->r[0]=R8(c->r[3]+0x0000001Au); // 80313198
  cmps(c,0,(int32_t)c->r[0],0); // 8031319C
  if (!crb(c,2)) { goto L_803131F8; } // 803131A0
L_803131A4:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 803131A4
  cmpu(c,0,c->r[6],0x0000000Fu); // 803131A8
  c->r[0]=0u+0x00000006u; // 803131AC
  W8(c->r[1]+0x00000017u,c->r[3]); // 803131B0
  if (!crb(c,2)) { goto L_803131BC; } // 803131B4
  c->r[0]=0u+0x0000000Cu; // 803131B8
L_803131BC:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 803131BC
  c->r[3]=c->r[1]+0x00000010u; // 803131C0
  c->r[4]=c->r[31]+0x00000008u; // 803131C4
  c->lr=0x803131CCu; f_8030E838(c); // 803131C8
  c->r[3]=R8(c->r[31]+0x00000016u); // 803131CC
  c->lr=0x803131D4u; f_80324800(c); // 803131D0
  c->r[5]=0u+0x80570000u; // 803131D4
  c->r[4]=c->r[1]+0x00000010u; // 803131D8
  c->r[5]=c->r[5]+0x000056C8u; // 803131DC
  c->r[3]=0u+0x00000002u; // 803131E0
  c->r[12]=R32(c->r[5]+0x00000224u); // 803131E4
  c->ctr=c->r[12]; // 803131E8
  if (true) { c->lr=0x803131F0u; dispatch(c,c->ctr); } // 803131EC
  c->lr=0x803131F4u; f_80314624(c); // 803131F0
  goto L_80313320; // 803131F4
L_803131F8:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 803131F8
  c->r[4]=R8(c->r[31]+0x00000015u); // 803131FC
  c->lr=0x80313204u; f_8030550C(c); // 80313200
  c->r[4]=R8(c->r[31]+0x00000015u); // 80313204
  c->r[5]=c->r[31]+0x00000008u; // 80313208
  c->r[3]=0u+0x00000017u; // 8031320C
  c->lr=0x80313214u; f_8030EA00(c); // 80313210
  c->r[4]=0u+0x80570000u; // 80313214
  c->r[0]=0u+0x00000000u; // 80313218
  c->r[4]=c->r[4]+0x000056C8u; // 8031321C
  c->r[3]=R8(c->r[4]+0x0000022Du); // 80313220
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80313224
  W8(c->r[4]+0x0000022Du,c->r[3]); // 80313228
  W8(c->r[31]+0x0000001Au,c->r[0]); // 8031322C
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80313230
  cmps(c,0,(int32_t)c->r[0],0); // 80313234
  if (crb(c,2)) { goto L_80313244; } // 80313238
  c->r[0]=0u+0x00000006u; // 8031323C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80313240
L_80313244:;
  c->r[5]=0u+0x80570000u; // 80313244
  c->r[3]=c->r[30]|c->r[30]; // 80313248
  c->r[5]=c->r[5]+0x000056C8u; // 8031324C
  c->r[4]=c->r[1]+0x0000000Cu; // 80313250
  c->r[12]=R32(c->r[5]+0x00000224u); // 80313254
  c->ctr=c->r[12]; // 80313258
  if (true) { c->lr=0x80313260u; dispatch(c,c->ctr); } // 8031325C
  c->r[0]=R8(c->r[31]+0x00000017u); // 80313260
  cmps(c,0,(int32_t)c->r[0],0); // 80313264
  if (crb(c,2)) { goto L_8031327C; } // 80313268
  c->r[3]=R8(c->r[31]+0x00000016u); // 8031326C
  c->lr=0x80313274u; f_80324594(c); // 80313270
  c->r[3]=c->r[31]|c->r[31]; // 80313274
  c->lr=0x8031327Cu; f_80314494(c); // 80313278
L_8031327C:;
  c->lr=0x80313280u; f_80314624(c); // 8031327C
  c->r[4]=0u+0x00000000u; // 80313280
  c->r[3]=0u+0x80570000u; // 80313284
  W8(c->r[31]+0x00000017u,c->r[4]); // 80313288
  c->r[3]=c->r[3]+0x000056C8u; // 8031328C
  W16(c->r[31]+0x00000010u,c->r[4]); // 80313290
  c->r[0]=R8(c->r[3]+0x0000022Du); // 80313294
  cmps(c,0,(int32_t)c->r[0],0); // 80313298
  if (!crb(c,2)) { goto L_80313320; } // 8031329C
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 803132A0
  cmps(c,0,(int32_t)c->r[0],0); // 803132A4
  if (crb(c,2)) { goto L_80313320; } // 803132A8
  W8(c->r[1]+0x00000008u,c->r[4]); // 803132AC
  c->lr=0x803132B4u; f_80324320(c); // 803132B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803132B4
  if (crb(c,2)) { goto L_803132C4; } // 803132B8
  c->r[0]=0u+0x00000006u; // 803132BC
  W8(c->r[1]+0x00000008u,c->r[0]); // 803132C0
L_803132C4:;
  c->r[31]=0u+0x80570000u; // 803132C4
  c->r[30]=0u+0x00000000u; // 803132C8
  c->r[31]=c->r[31]+0x000056C8u; // 803132CC
L_803132D0:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 803132D0
  c->r[3]=c->r[31]+c->r[0]; // 803132D4
  c->r[3]=c->r[3]+0x00000014u; // 803132D8
  c->lr=0x803132E0u; f_8030EF84(c); // 803132DC
  c->r[30]=c->r[30]+0x00000001u; // 803132E0
  cmpu(c,0,c->r[30],0x00000010u); // 803132E4
  if (crb(c,0)) { IRQCHK(c); goto L_803132D0; } // 803132E8
  c->r[31]=0u+0x80570000u; // 803132EC
  c->r[31]=c->r[31]+0x000056C8u; // 803132F0
  c->r[3]=c->r[31]+0x00000228u; // 803132F4
  c->lr=0x803132FCu; f_8030EF84(c); // 803132F8
  c->r[12]=R32(c->r[31]+0x00000224u); // 803132FC
  c->r[4]=c->r[1]+0x00000008u; // 80313300
  c->r[3]=0u+0x00000001u; // 80313304
  c->ctr=c->r[12]; // 80313308
  if (true) { c->lr=0x80313310u; dispatch(c,c->ctr); } // 8031330C
  c->r[3]=c->r[31]|c->r[31]; // 80313310
  c->r[4]=0u+0x00000000u; // 80313314
  c->r[5]=0u+0x00000230u; // 80313318
  c->lr=0x80313320u; f_800060B8(c); // 8031331C
L_80313320:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313320
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80313324
  c->r[30]=R32(c->r[1]+0x00000018u); // 80313328
  c->lr=c->r[0]; // 8031332C
  c->r[1]=c->r[1]+0x00000020u; // 80313330
  return; // 80313334
}

// bta_hh_get_dscp_act
void f_80313338(Ctx* __restrict c) {
  trace_call(0x80313338u);
  c->r[5]=0u+0x80570000u; // 80313338
  c->r[4]=c->r[3]|c->r[3]; // 8031333C
  c->r[5]=c->r[5]+0x000056C8u; // 80313340
  c->r[3]=0u+0x0000000Au; // 80313344
  c->r[12]=R32(c->r[5]+0x00000224u); // 80313348
  c->ctr=c->r[12]; // 8031334C
  if (true) { dispatch(c,c->ctr); return; } // 80313350
}

// bta_hh_maint_dev_act
void f_80313354(Ctx* __restrict c) {
  trace_call(0x80313354u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313354
  c->r[0]=c->lr; // 80313358
  c->r[5]=0u+0x00000006u; // 8031335C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80313360
  c->r[0]=0u+0x000000FFu; // 80313364
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80313368
  c->r[31]=c->r[4]|c->r[4]; // 8031336C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80313370
  c->r[30]=c->r[3]|c->r[3]; // 80313374
  W8(c->r[1]+0x00000016u,c->r[5]); // 80313378
  W8(c->r[1]+0x00000017u,c->r[0]); // 8031337C
  c->r[0]=R16(c->r[4]+0x00000010u); // 80313380
  cmps(c,0,(int32_t)c->r[0],12); // 80313384
  if (crb(c,2)) { goto L_80313424; } // 80313388
  if (!crb(c,0)) { goto L_80313468; } // 8031338C
  cmps(c,0,(int32_t)c->r[0],11); // 80313390
  if (!crb(c,0)) { goto L_8031339C; } // 80313394
  goto L_80313468; // 80313398
L_8031339C:;
  c->r[3]=c->r[1]+0x00000010u; // 8031339C
  c->r[4]=c->r[4]+0x00000008u; // 803133A0
  c->lr=0x803133A8u; f_8030E838(c); // 803133A4
  c->r[3]=R8(c->r[30]+0x00000016u); // 803133A8
  cmpu(c,0,c->r[3],0x000000FFu); // 803133AC
  if (!crb(c,2)) { goto L_80313410; } // 803133B0
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 803133B4
  c->r[3]=c->r[31]+0x00000008u; // 803133B8
  c->r[5]=c->r[1]+0x00000008u; // 803133BC
  c->lr=0x803133C4u; f_80324404(c); // 803133C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803133C4
  if (!crb(c,2)) { goto L_8031341C; } // 803133C8
  c->r[4]=R8(c->r[1]+0x00000008u); // 803133CC
  c->r[0]=0u+0x00000000u; // 803133D0
  W8(c->r[1]+0x00000016u,c->r[0]); // 803133D4
  c->r[3]=c->r[30]|c->r[30]; // 803133D8
  c->r[6]=0u+0x00000000u; // 803133DC
  W8(c->r[1]+0x00000017u,c->r[4]); // 803133E0
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 803133E4
  c->r[7]=R8(c->r[31]+0x00000012u); // 803133E8
  c->r[8]=R8(c->r[31]+0x00000013u); // 803133EC
  c->lr=0x803133F4u; f_80314514(c); // 803133F0
  c->r[3]=0u+0x80570000u; // 803133F4
  c->r[0]=R8(c->r[1]+0x00000008u); // 803133F8
  c->r[3]=c->r[3]+0x000056C8u; // 803133FC
  c->r[4]=R8(c->r[30]+0x00000012u); // 80313400
  c->r[3]=c->r[3]+c->r[0]; // 80313404
  W8(c->r[3]+0x00000214u,c->r[4]); // 80313408
  goto L_8031341C; // 8031340C
L_80313410:;
  c->r[0]=0u+0x00000000u; // 80313410
  W8(c->r[1]+0x00000017u,c->r[3]); // 80313414
  W8(c->r[1]+0x00000016u,c->r[0]); // 80313418
L_8031341C:;
  c->lr=0x80313420u; f_80314624(c); // 8031341C
  goto L_80313484; // 80313420
L_80313424:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 80313424
  c->r[3]=c->r[1]+0x00000010u; // 80313428
  c->r[4]=c->r[30]+0x00000008u; // 8031342C
  W8(c->r[1]+0x00000017u,c->r[0]); // 80313430
  c->lr=0x80313438u; f_8030E838(c); // 80313434
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 80313438
  cmpu(c,0,c->r[0],0x00000003u); // 8031343C
  if (crb(c,2)) { goto L_80313484; } // 80313440
  c->r[3]=R8(c->r[1]+0x00000017u); // 80313444
  c->lr=0x8031344Cu; f_80324594(c); // 80313448
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031344C
  if (!crb(c,2)) { goto L_80313484; } // 80313450
  c->r[0]=0u+0x00000000u; // 80313454
  c->r[3]=c->r[30]|c->r[30]; // 80313458
  W8(c->r[1]+0x00000016u,c->r[0]); // 8031345C
  c->lr=0x80313464u; f_80314494(c); // 80313460
  goto L_80313484; // 80313464
L_80313468:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80313468
  cmpu(c,0,c->r[0],0x00000005u); // 8031346C
  if (crb(c,0)) { goto L_80313484; } // 80313470
  c->r[4]=0u+0x80490000u; // 80313474
  c->r[3]=0u+0x00000504u; // 80313478
  c->r[4]=c->r[4]+0xFFFFF0B8u; // 8031347C
  c->lr=0x80313484u; f_8030E1E8(c); // 80313480
L_80313484:;
  c->r[5]=0u+0x80570000u; // 80313484
  c->r[4]=c->r[1]+0x00000010u; // 80313488
  c->r[5]=c->r[5]+0x000056C8u; // 8031348C
  c->r[3]=R16(c->r[31]+0x00000010u); // 80313490
  c->r[12]=R32(c->r[5]+0x00000224u); // 80313494
  c->ctr=c->r[12]; // 80313498
  if (true) { c->lr=0x803134A0u; dispatch(c,c->ctr); } // 8031349C
  c->r[0]=R32(c->r[1]+0x00000024u); // 803134A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803134A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803134A8
  c->lr=c->r[0]; // 803134AC
  c->r[1]=c->r[1]+0x00000020u; // 803134B0
  return; // 803134B4
}

// bta_hh_get_acl_q_info
void f_803134B8(Ctx* __restrict c) {
  trace_call(0x803134B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803134B8
  c->r[0]=c->lr; // 803134BC
  W32(c->r[1]+0x00000044u,c->r[0]); // 803134C0
  c->r[11]=c->r[1]+0x00000040u; // 803134C4
  c->lr=0x803134CCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803134C8
  c->r[3]=c->r[1]+0x00000008u; // 803134CC
  c->r[31]=0u+0x00000000u; // 803134D0
  c->r[4]=0u+0x00000000u; // 803134D4
  c->r[5]=0u+0x0000001Eu; // 803134D8
  c->lr=0x803134E0u; f_800060B8(c); // 803134DC
  c->r[30]=0u+0x80580000u; // 803134E0
  c->r[29]=0u+0x80570000u; // 803134E4
  c->r[30]=c->r[30]+0xFFFF85B8u; // 803134E8
  c->r[27]=0u+0x00000000u; // 803134EC
  c->r[29]=c->r[29]+0x000056C8u; // 803134F0
L_803134F4:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 803134F4
  c->r[3]=c->r[29]+c->r[0]; // 803134F8
  c->r[0]=R8(c->r[3]+0x00000028u); // 803134FC
  cmps(c,0,(int32_t)c->r[0],0); // 80313500
  if (crb(c,2)) { goto L_80313574; } // 80313504
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 80313508
  cmpu(c,0,c->r[0],0x00000003u); // 8031350C
  if (!crb(c,2)) { goto L_80313574; } // 80313510
  c->r[4]=R8(c->r[3]+0x00000026u); // 80313514
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80313518
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 8031351C
  c->r[28]=c->r[1]+0x00000008u; // 80313520
  c->r[3]=0u+0x00000000u; // 80313524
  c->r[28]=c->r[28]+c->r[5]; // 80313528
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 8031352C
  W8(c->r[28]+0x00000006u,c->r[4]); // 80313530
  c->r[4]=c->r[30]+c->r[0]; // 80313534
  c->r[4]=R16(c->r[4]+0x00000016u); // 80313538
  c->lr=0x80313540u; f_8032C41C(c); // 8031353C
  cmps(c,0,(int32_t)c->r[3],0); // 80313540
  if (crb(c,2)) { goto L_80313570; } // 80313544
  c->r[3]=R32(c->r[3]+0x00000010u); // 80313548
  cmps(c,0,(int32_t)c->r[3],0); // 8031354C
  if (crb(c,2)) { goto L_80313570; } // 80313550
  c->r[0]=R8(c->r[3]+0x00000000u); // 80313554
  cmps(c,0,(int32_t)c->r[0],0); // 80313558
  if (crb(c,2)) { goto L_80313570; } // 8031355C
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 80313560
  W16(c->r[28]+0x00000008u,c->r[0]); // 80313564
  c->r[0]=R16(c->r[3]+0x00000038u); // 80313568
  W16(c->r[28]+0x0000000Au,c->r[0]); // 8031356C
L_80313570:;
  c->r[31]=c->r[31]+0x00000001u; // 80313570
L_80313574:;
  c->r[27]=c->r[27]+0x00000001u; // 80313574
  cmpu(c,0,c->r[27],0x00000010u); // 80313578
  if (crb(c,0)) { IRQCHK(c); goto L_803134F4; } // 8031357C
  c->r[4]=0u+0x80580000u; // 80313580
  c->r[3]=0u+0x80570000u; // 80313584
  c->r[4]=c->r[4]+0xFFFF89C0u; // 80313588
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8031358C
  c->r[3]=c->r[3]+0x000056C8u; // 80313590
  c->r[6]=R16(c->r[4]+0x00000004u); // 80313594
  c->r[5]=R16(c->r[4]+0x00000002u); // 80313598
  c->r[4]=c->r[1]+0x00000008u; // 8031359C
  c->r[12]=R32(c->r[3]+0x00000224u); // 803135A0
  c->r[3]=0u+0x0000000Fu; // 803135A4
  W16(c->r[1]+0x00000008u,c->r[6]); // 803135A8
  W16(c->r[1]+0x0000000Au,c->r[5]); // 803135AC
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 803135B0
  c->ctr=c->r[12]; // 803135B4
  if (true) { c->lr=0x803135BCu; dispatch(c,c->ctr); } // 803135B8
  c->r[11]=c->r[1]+0x00000040u; // 803135BC
  c->lr=0x803135C4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803135C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 803135C4
  c->lr=c->r[0]; // 803135C8
  c->r[1]=c->r[1]+0x00000040u; // 803135CC
  return; // 803135D0
}

// bta_hh_write_dev_act
void f_803135D4(Ctx* __restrict c) {
  trace_call(0x803135D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803135D4
  c->r[0]=c->lr; // 803135D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803135DC
  c->r[0]=0u+0x00000000u; // 803135E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803135E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803135E8
  c->r[30]=c->r[4]|c->r[4]; // 803135EC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803135F0
  c->r[29]=c->r[3]|c->r[3]; // 803135F4
  W16(c->r[1]+0x00000008u,c->r[0]); // 803135F8
  c->r[31]=R8(c->r[4]+0x00000008u); // 803135FC
  c->r[0]=R8(c->r[3]+0x00000016u); // 80313600
  W8(c->r[1]+0x00000009u,c->r[0]); // 80313604
  c->r[3]=R8(c->r[3]+0x00000016u); // 80313608
  c->r[4]=R8(c->r[4]+0x00000008u); // 8031360C
  c->r[5]=R8(c->r[30]+0x00000009u); // 80313610
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 80313614
  c->r[7]=R8(c->r[30]+0x0000000Au); // 80313618
  c->r[8]=R32(c->r[30]+0x00000010u); // 8031361C
  c->lr=0x80313624u; f_803246C0(c); // 80313620
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 80313624
  if (crb(c,2)) { goto L_803136B0; } // 80313628
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8031362C
  cmpu(c,0,c->r[0],0x00000001u); // 80313630
  if (crb(c,0)) { goto L_80313648; } // 80313634
  c->r[4]=0u+0x80490000u; // 80313638
  c->r[3]=0u+0x00000500u; // 8031363C
  c->r[4]=c->r[4]+0xFFFFF0C8u; // 80313640
  c->lr=0x80313648u; f_8030E200(c); // 80313644
L_80313648:;
  c->r[0]=0u+0x00000006u; // 80313648
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031364C
  c->r[0]=R8(c->r[30]+0x00000008u); // 80313650
  cmpu(c,0,c->r[0],0x00000001u); // 80313654
  if (crb(c,2)) { goto L_80313684; } // 80313658
  cmpu(c,0,c->r[0],0x0000000Au); // 8031365C
  if (crb(c,2)) { goto L_80313684; } // 80313660
  c->r[5]=0u+0x80570000u; // 80313664
  c->r[3]=c->r[31]|c->r[31]; // 80313668
  c->r[5]=c->r[5]+0x000056C8u; // 8031366C
  c->r[4]=c->r[1]+0x00000008u; // 80313670
  c->r[12]=R32(c->r[5]+0x00000224u); // 80313674
  c->ctr=c->r[12]; // 80313678
  if (true) { c->lr=0x80313680u; dispatch(c,c->ctr); } // 8031367C
  goto L_80313780; // 80313680
L_80313684:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 80313684
  cmpu(c,0,c->r[0],0x00000005u); // 80313688
  if (!crb(c,2)) { goto L_80313780; } // 8031368C
  c->r[5]=0u+0x80570000u; // 80313690
  c->r[4]=c->r[1]+0x00000008u; // 80313694
  c->r[5]=c->r[5]+0x000056C8u; // 80313698
  c->r[3]=0u+0x0000000Du; // 8031369C
  c->r[12]=R32(c->r[5]+0x00000224u); // 803136A0
  c->ctr=c->r[12]; // 803136A4
  if (true) { c->lr=0x803136ACu; dispatch(c,c->ctr); } // 803136A8
  goto L_80313780; // 803136AC
L_803136B0:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 803136B0
  cmps(c,0,(int32_t)c->r[5],10); // 803136B4
  if (crb(c,2)) { goto L_803136E4; } // 803136B8
  if (!crb(c,0)) { goto L_803136FC; } // 803136BC
  cmps(c,0,(int32_t)c->r[5],1); // 803136C0
  if (crb(c,2)) { goto L_803136E4; } // 803136C4
  if (crb(c,0)) { goto L_803136FC; } // 803136C8
  cmps(c,0,(int32_t)c->r[5],4); // 803136CC
  if (!crb(c,0)) { goto L_803136DC; } // 803136D0
  goto L_803136FC; // 803136D4
  goto L_803136FC; // 803136D8
L_803136DC:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 803136DC
  goto L_80313718; // 803136E0
L_803136E4:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 803136E4
  cmpu(c,0,c->r[0],0x00000005u); // 803136E8
  if (!crb(c,2)) { goto L_80313718; } // 803136EC
  c->r[0]=0u+0x00000001u; // 803136F0
  W8(c->r[29]+0x00000017u,c->r[0]); // 803136F4
  goto L_80313718; // 803136F8
L_803136FC:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803136FC
  cmpu(c,0,c->r[0],0x00000005u); // 80313700
  if (crb(c,0)) { goto L_80313718; } // 80313704
  c->r[4]=0u+0x80490000u; // 80313708
  c->r[3]=0u+0x00000504u; // 8031370C
  c->r[4]=c->r[4]+0xFFFFF0E4u; // 80313710
  c->lr=0x80313718u; f_8030E200(c); // 80313714
L_80313718:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 80313718
  cmpu(c,0,c->r[0],0x00000001u); // 8031371C
  if (crb(c,2)) { goto L_80313748; } // 80313720
  c->r[4]=R8(c->r[29]+0x00000015u); // 80313724
  c->r[5]=c->r[29]+0x00000008u; // 80313728
  c->r[3]=0u+0x00000017u; // 8031372C
  c->lr=0x80313734u; f_8030EB2C(c); // 80313730
  c->r[4]=R8(c->r[29]+0x00000015u); // 80313734
  c->r[5]=c->r[29]+0x00000008u; // 80313738
  c->r[3]=0u+0x00000017u; // 8031373C
  c->lr=0x80313744u; f_8030EAF8(c); // 80313740
  goto L_80313780; // 80313744
L_80313748:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 80313748
  cmpu(c,0,c->r[0],0x00000003u); // 8031374C
  if (!crb(c,2)) { goto L_80313768; } // 80313750
  c->r[4]=R8(c->r[29]+0x00000015u); // 80313754
  c->r[5]=c->r[29]+0x00000008u; // 80313758
  c->r[3]=0u+0x00000017u; // 8031375C
  c->lr=0x80313764u; f_8030EAC4(c); // 80313760
  goto L_80313780; // 80313764
L_80313768:;
  cmpu(c,0,c->r[0],0x00000004u); // 80313768
  if (!crb(c,2)) { goto L_80313780; } // 8031376C
  c->r[4]=R8(c->r[29]+0x00000015u); // 80313770
  c->r[5]=c->r[29]+0x00000008u; // 80313774
  c->r[3]=0u+0x00000017u; // 80313778
  c->lr=0x80313780u; f_8030EB2C(c); // 8031377C
L_80313780:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313780
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80313784
  c->r[30]=R32(c->r[1]+0x00000018u); // 80313788
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031378C
  c->lr=c->r[0]; // 80313790
  c->r[1]=c->r[1]+0x00000020u; // 80313794
  return; // 80313798
}

// bta_hh_cback
void f_8031379C(Ctx* __restrict c) {
  trace_call(0x8031379Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031379C
  c->r[0]=c->lr; // 803137A0
  c->r[7]=0u+0x80490000u; // 803137A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 803137A8
  c->r[7]=c->r[7]+0xFFFFED60u; // 803137AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803137B0
  c->r[31]=0u+0x00001710u; // 803137B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 803137B8
  c->r[30]=c->r[5]|c->r[5]; // 803137BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 803137C0
  c->r[29]=c->r[4]|c->r[4]; // 803137C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803137C8
  c->r[28]=c->r[3]|c->r[3]; // 803137CC
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803137D0
  W32(c->r[1]+0x00000008u,c->r[6]); // 803137D4
  cmpu(c,0,c->r[0],0x00000005u); // 803137D8
  if (crb(c,0)) { goto L_80313858; } // 803137DC
  cmpu(c,0,c->r[4],0x00000008u); // 803137E0
  if (crb(c,1)) { goto L_80313848; } // 803137E4
  c->r[3]=0u+0x80490000u; // 803137E8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 803137EC
  c->r[3]=c->r[3]+0xFFFFF234u; // 803137F0
  c->r[3]=R32(c->r[3]+c->r[0]); // 803137F4
  c->ctr=c->r[3]; // 803137F8
  if (true) { switch (c->ctr) { case 0x80313800u: goto L_80313800; case 0x80313808u: goto L_80313808; case 0x80313810u: goto L_80313810; case 0x80313818u: goto L_80313818; case 0x80313820u: goto L_80313820; case 0x80313828u: goto L_80313828; case 0x80313830u: goto L_80313830; case 0x80313838u: goto L_80313838; case 0x80313840u: goto L_80313840; case 0x80313878u: goto L_80313878; case 0x80313880u: goto L_80313880; case 0x80313888u: goto L_80313888; case 0x80313890u: goto L_80313890; case 0x80313898u: goto L_80313898; case 0x803138A0u: goto L_803138A0; case 0x803138ACu: goto L_803138AC; case 0x803139E4u: goto L_803139E4; default: break; } dispatch(c,c->ctr); return; } // 803137FC
L_80313800:;
  c->r[5]=c->r[7]+0x000003ACu; // 80313800
  goto L_8031384C; // 80313804
L_80313808:;
  c->r[5]=c->r[7]+0x000003C0u; // 80313808
  goto L_8031384C; // 8031380C
L_80313810:;
  c->r[5]=c->r[7]+0x000003D4u; // 80313810
  goto L_8031384C; // 80313814
L_80313818:;
  c->r[5]=c->r[7]+0x000003ECu; // 80313818
  goto L_8031384C; // 8031381C
L_80313820:;
  c->r[5]=c->r[7]+0x00000404u; // 80313820
  goto L_8031384C; // 80313824
L_80313828:;
  c->r[5]=c->r[7]+0x0000041Cu; // 80313828
  goto L_8031384C; // 8031382C
L_80313830:;
  c->r[5]=c->r[7]+0x00000434u; // 80313830
  goto L_8031384C; // 80313834
L_80313838:;
  c->r[5]=c->r[7]+0x0000044Cu; // 80313838
  goto L_8031384C; // 8031383C
L_80313840:;
  c->r[5]=c->r[7]+0x00000464u; // 80313840
  goto L_8031384C; // 80313844
L_80313848:;
  c->r[5]=c->r[7]+0x0000047Cu; // 80313848
L_8031384C:;
  c->r[4]=c->r[7]+0x00000490u; // 8031384C
  c->r[3]=0u+0x00000504u; // 80313850
  c->lr=0x80313858u; f_8030E200(c); // 80313854
L_80313858:;
  cmpu(c,0,c->r[29],0x00000008u); // 80313858
  if (crb(c,1)) { goto L_803139E4; } // 8031385C
  c->r[3]=0u+0x80490000u; // 80313860
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 80313864
  c->r[3]=c->r[3]+0xFFFFF210u; // 80313868
  c->r[3]=R32(c->r[3]+c->r[0]); // 8031386C
  c->ctr=c->r[3]; // 80313870
  if (true) { switch (c->ctr) { case 0x80313800u: goto L_80313800; case 0x80313808u: goto L_80313808; case 0x80313810u: goto L_80313810; case 0x80313818u: goto L_80313818; case 0x80313820u: goto L_80313820; case 0x80313828u: goto L_80313828; case 0x80313830u: goto L_80313830; case 0x80313838u: goto L_80313838; case 0x80313840u: goto L_80313840; case 0x80313878u: goto L_80313878; case 0x80313880u: goto L_80313880; case 0x80313888u: goto L_80313888; case 0x80313890u: goto L_80313890; case 0x80313898u: goto L_80313898; case 0x803138A0u: goto L_803138A0; case 0x803138ACu: goto L_803138AC; case 0x803139E4u: goto L_803139E4; default: break; } dispatch(c,c->ctr); return; } // 80313874
L_80313878:;
  c->r[31]=0u+0x00001702u; // 80313878
  goto L_803139E4; // 8031387C
L_80313880:;
  c->r[31]=0u+0x00001703u; // 80313880
  goto L_803139E4; // 80313884
L_80313888:;
  c->r[31]=0u+0x00001704u; // 80313888
  goto L_803139E4; // 8031388C
L_80313890:;
  c->r[31]=0u+0x00001706u; // 80313890
  goto L_803139E4; // 80313894
L_80313898:;
  c->r[31]=0u+0x00001705u; // 80313898
  goto L_803139E4; // 8031389C
L_803138A0:;
  c->r[3]=c->r[1]+0x00000008u; // 803138A0
  c->lr=0x803138A8u; f_8030EF84(c); // 803138A4
  goto L_803139E4; // 803138A8
L_803138AC:;
  c->r[4]=0u+0x80570000u; // 803138AC
  c->r[0]=0u+0x00000002u; // 803138B0
  c->r[4]=c->r[4]+0x000056C8u; // 803138B4
  c->r[5]=0u+0x00000000u; // 803138B8
  c->ctr=c->r[0]; // 803138BC
L_803138C0:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803138C0
  c->r[3]=c->r[4]+c->r[0]; // 803138C4
  c->r[0]=R8(c->r[3]+0x00000026u); // 803138C8
  cmpu(c,0,c->r[28],c->r[0]); // 803138CC
  if (!crb(c,2)) { goto L_803138E0; } // 803138D0
  c->r[0]=0u+0x00000001u; // 803138D4
  W8(c->r[3]+0x00000027u,c->r[0]); // 803138D8
  goto L_803139E4; // 803138DC
L_803138E0:;
  c->r[5]=c->r[5]+0x00000001u; // 803138E0
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803138E4
  c->r[3]=c->r[4]+c->r[0]; // 803138E8
  c->r[0]=R8(c->r[3]+0x00000026u); // 803138EC
  cmpu(c,0,c->r[28],c->r[0]); // 803138F0
  if (!crb(c,2)) { goto L_80313904; } // 803138F4
  c->r[0]=0u+0x00000001u; // 803138F8
  W8(c->r[3]+0x00000027u,c->r[0]); // 803138FC
  goto L_803139E4; // 80313900
L_80313904:;
  c->r[5]=c->r[5]+0x00000001u; // 80313904
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 80313908
  c->r[3]=c->r[4]+c->r[0]; // 8031390C
  c->r[0]=R8(c->r[3]+0x00000026u); // 80313910
  cmpu(c,0,c->r[28],c->r[0]); // 80313914
  if (!crb(c,2)) { goto L_80313928; } // 80313918
  c->r[0]=0u+0x00000001u; // 8031391C
  W8(c->r[3]+0x00000027u,c->r[0]); // 80313920
  goto L_803139E4; // 80313924
L_80313928:;
  c->r[5]=c->r[5]+0x00000001u; // 80313928
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 8031392C
  c->r[3]=c->r[4]+c->r[0]; // 80313930
  c->r[0]=R8(c->r[3]+0x00000026u); // 80313934
  cmpu(c,0,c->r[28],c->r[0]); // 80313938
  if (!crb(c,2)) { goto L_8031394C; } // 8031393C
  c->r[0]=0u+0x00000001u; // 80313940
  W8(c->r[3]+0x00000027u,c->r[0]); // 80313944
  goto L_803139E4; // 80313948
L_8031394C:;
  c->r[5]=c->r[5]+0x00000001u; // 8031394C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 80313950
  c->r[3]=c->r[4]+c->r[0]; // 80313954
  c->r[0]=R8(c->r[3]+0x00000026u); // 80313958
  cmpu(c,0,c->r[28],c->r[0]); // 8031395C
  if (!crb(c,2)) { goto L_80313970; } // 80313960
  c->r[0]=0u+0x00000001u; // 80313964
  W8(c->r[3]+0x00000027u,c->r[0]); // 80313968
  goto L_803139E4; // 8031396C
L_80313970:;
  c->r[5]=c->r[5]+0x00000001u; // 80313970
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 80313974
  c->r[3]=c->r[4]+c->r[0]; // 80313978
  c->r[0]=R8(c->r[3]+0x00000026u); // 8031397C
  cmpu(c,0,c->r[28],c->r[0]); // 80313980
  if (!crb(c,2)) { goto L_80313994; } // 80313984
  c->r[0]=0u+0x00000001u; // 80313988
  W8(c->r[3]+0x00000027u,c->r[0]); // 8031398C
  goto L_803139E4; // 80313990
L_80313994:;
  c->r[5]=c->r[5]+0x00000001u; // 80313994
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 80313998
  c->r[3]=c->r[4]+c->r[0]; // 8031399C
  c->r[0]=R8(c->r[3]+0x00000026u); // 803139A0
  cmpu(c,0,c->r[28],c->r[0]); // 803139A4
  if (!crb(c,2)) { goto L_803139B8; } // 803139A8
  c->r[0]=0u+0x00000001u; // 803139AC
  W8(c->r[3]+0x00000027u,c->r[0]); // 803139B0
  goto L_803139E4; // 803139B4
L_803139B8:;
  c->r[5]=c->r[5]+0x00000001u; // 803139B8
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 803139BC
  c->r[3]=c->r[4]+c->r[0]; // 803139C0
  c->r[0]=R8(c->r[3]+0x00000026u); // 803139C4
  cmpu(c,0,c->r[28],c->r[0]); // 803139C8
  if (!crb(c,2)) { goto L_803139DC; } // 803139CC
  c->r[0]=0u+0x00000001u; // 803139D0
  W8(c->r[3]+0x00000027u,c->r[0]); // 803139D4
  goto L_803139E4; // 803139D8
L_803139DC:;
  c->r[5]=c->r[5]+0x00000001u; // 803139DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803138C0; } // 803139E0
L_803139E4:;
  cmpu(c,0,c->r[31],0x00001710u); // 803139E4
  if (crb(c,2)) { goto L_80313A14; } // 803139E8
  c->r[3]=0u+0x00000018u; // 803139EC
  c->lr=0x803139F4u; f_8030AD84(c); // 803139F0
  cmps(c,0,(int32_t)c->r[3],0); // 803139F4
  if (crb(c,2)) { goto L_80313A14; } // 803139F8
  W16(c->r[3]+0x00000000u,c->r[31]); // 803139FC
  W16(c->r[3]+0x00000006u,c->r[28]); // 80313A00
  W32(c->r[3]+0x00000008u,c->r[30]); // 80313A04
  c->r[0]=R32(c->r[1]+0x00000008u); // 80313A08
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80313A0C
  c->lr=0x80313A14u; f_8030ECE4(c); // 80313A10
L_80313A14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313A14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80313A18
  c->r[30]=R32(c->r[1]+0x00000018u); // 80313A1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80313A20
  c->r[28]=R32(c->r[1]+0x00000010u); // 80313A24
  c->lr=c->r[0]; // 80313A28
  c->r[1]=c->r[1]+0x00000020u; // 80313A2C
  return; // 80313A30
}

// BTA_HhEnable
void f_80313A34(Ctx* __restrict c) {
  trace_call(0x80313A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313A34
  c->r[0]=c->lr; // 80313A38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80313A3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80313A40
  W32(c->r[1]+0x00000018u,c->r[30]); // 80313A44
  c->r[30]=c->r[4]|c->r[4]; // 80313A48
  W32(c->r[1]+0x00000014u,c->r[29]); // 80313A4C
  c->r[29]=c->r[3]|c->r[3]; // 80313A50
  c->lr=0x80313A58u; f_8030C37C(c); // 80313A54
  c->r[3]=0u+0x00000017u; // 80313A58
  c->r[4]=c->r[2]+0xFFFFB3F8u; // 80313A5C
  c->lr=0x80313A64u; f_8030ECD0(c); // 80313A60
  c->lr=0x80313A68u; f_8030C380(c); // 80313A64
  c->r[3]=0u+0x00000034u; // 80313A68
  c->lr=0x80313A70u; f_8030AD84(c); // 80313A6C
  cmps(c,0,(int32_t)c->r[3],0); // 80313A70
  c->r[31]=c->r[3]|c->r[3]; // 80313A74
  if (crb(c,2)) { goto L_80313AA0; } // 80313A78
  c->r[4]=0u+0x00000000u; // 80313A7C
  c->r[5]=0u+0x00000034u; // 80313A80
  c->lr=0x80313A88u; f_800060B8(c); // 80313A84
  c->r[0]=0u+0x0000170Cu; // 80313A88
  c->r[3]=c->r[31]|c->r[31]; // 80313A8C
  W16(c->r[31]+0x00000000u,c->r[0]); // 80313A90
  W32(c->r[31]+0x00000030u,c->r[30]); // 80313A94
  W8(c->r[31]+0x00000008u,c->r[29]); // 80313A98
  c->lr=0x80313AA0u; f_8030ECE4(c); // 80313A9C
L_80313AA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313AA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80313AA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80313AA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80313AAC
  c->lr=c->r[0]; // 80313AB0
  c->r[1]=c->r[1]+0x00000020u; // 80313AB4
  return; // 80313AB8
}

// BTA_HhDisable
void f_80313ABC(Ctx* __restrict c) {
  trace_call(0x80313ABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313ABC
  c->r[0]=c->lr; // 80313AC0
  c->r[3]=0u+0x00000008u; // 80313AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80313AC8
  c->lr=0x80313AD0u; f_8030AD84(c); // 80313ACC
  cmps(c,0,(int32_t)c->r[3],0); // 80313AD0
  if (crb(c,2)) { goto L_80313AE4; } // 80313AD4
  c->r[0]=0u+0x0000170Du; // 80313AD8
  W16(c->r[3]+0x00000000u,c->r[0]); // 80313ADC
  c->lr=0x80313AE4u; f_8030ECE4(c); // 80313AE0
L_80313AE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80313AE4
  c->lr=c->r[0]; // 80313AE8
  c->r[1]=c->r[1]+0x00000010u; // 80313AEC
  return; // 80313AF0
}

// BTA_HhClose
void f_80313AF4(Ctx* __restrict c) {
  trace_call(0x80313AF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313AF4
  c->r[0]=c->lr; // 80313AF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80313AFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80313B00
  W32(c->r[1]+0x00000008u,c->r[30]); // 80313B04
  c->r[30]=c->r[3]|c->r[3]; // 80313B08
  c->r[3]=0u+0x00000008u; // 80313B0C
  c->lr=0x80313B14u; f_8030AD84(c); // 80313B10
  cmps(c,0,(int32_t)c->r[3],0); // 80313B14
  c->r[31]=c->r[3]|c->r[3]; // 80313B18
  if (crb(c,2)) { goto L_80313B40; } // 80313B1C
  c->r[4]=0u+0x00000000u; // 80313B20
  c->r[5]=0u+0x00000008u; // 80313B24
  c->lr=0x80313B2Cu; f_800060B8(c); // 80313B28
  c->r[0]=0u+0x00001701u; // 80313B2C
  c->r[3]=c->r[31]|c->r[31]; // 80313B30
  W16(c->r[31]+0x00000000u,c->r[0]); // 80313B34
  W16(c->r[31]+0x00000006u,c->r[30]); // 80313B38
  c->lr=0x80313B40u; f_8030ECE4(c); // 80313B3C
L_80313B40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80313B40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80313B44
  c->r[30]=R32(c->r[1]+0x00000008u); // 80313B48
  c->lr=c->r[0]; // 80313B4C
  c->r[1]=c->r[1]+0x00000010u; // 80313B50
  return; // 80313B54
}

// BTA_HhOpen
void f_80313B58(Ctx* __restrict c) {
  trace_call(0x80313B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313B58
  c->r[0]=c->lr; // 80313B5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80313B60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80313B64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80313B68
  c->r[30]=c->r[5]|c->r[5]; // 80313B6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80313B70
  c->r[29]=c->r[4]|c->r[4]; // 80313B74
  W32(c->r[1]+0x00000010u,c->r[28]); // 80313B78
  c->r[28]=c->r[3]|c->r[3]; // 80313B7C
  c->r[3]=0u+0x00000010u; // 80313B80
  c->lr=0x80313B88u; f_8030AD84(c); // 80313B84
  cmps(c,0,(int32_t)c->r[3],0); // 80313B88
  c->r[31]=c->r[3]|c->r[3]; // 80313B8C
  if (crb(c,2)) { goto L_80313BD0; } // 80313B90
  c->r[4]=0u+0x00000000u; // 80313B94
  c->r[5]=0u+0x00000010u; // 80313B98
  c->lr=0x80313BA0u; f_800060B8(c); // 80313B9C
  c->r[3]=0u+0x00001700u; // 80313BA0
  c->r[0]=0u+0x000000FFu; // 80313BA4
  W16(c->r[31]+0x00000000u,c->r[3]); // 80313BA8
  c->r[4]=c->r[28]|c->r[28]; // 80313BAC
  c->r[3]=c->r[31]+0x00000008u; // 80313BB0
  W16(c->r[31]+0x00000006u,c->r[0]); // 80313BB4
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 80313BB8
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 80313BBC
  c->lr=0x80313BC4u; f_8030E838(c); // 80313BC0
  c->r[3]=c->r[31]|c->r[31]; // 80313BC4
  c->lr=0x80313BCCu; f_8030ECE4(c); // 80313BC8
  goto L_80313BEC; // 80313BCC
L_80313BD0:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80313BD0
  cmpu(c,0,c->r[0],0x00000001u); // 80313BD4
  if (crb(c,0)) { goto L_80313BEC; } // 80313BD8
  c->r[4]=0u+0x80490000u; // 80313BDC
  c->r[3]=0u+0x00000500u; // 80313BE0
  c->r[4]=c->r[4]+0xFFFFF258u; // 80313BE4
  c->lr=0x80313BECu; f_8030E1E8(c); // 80313BE8
L_80313BEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313BEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80313BF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80313BF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80313BF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80313BFC
  c->lr=c->r[0]; // 80313C00
  c->r[1]=c->r[1]+0x00000020u; // 80313C04
  return; // 80313C08
}

// BTA_HhSendData
void f_80313C0C(Ctx* __restrict c) {
  trace_call(0x80313C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313C0C
  c->r[0]=c->lr; // 80313C10
  W32(c->r[1]+0x00000024u,c->r[0]); // 80313C14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80313C18
  W32(c->r[1]+0x00000018u,c->r[30]); // 80313C1C
  c->r[30]=c->r[4]|c->r[4]; // 80313C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80313C24
  c->r[29]=c->r[3]|c->r[3]; // 80313C28
  c->r[3]=0u+0x00000014u; // 80313C2C
  c->lr=0x80313C34u; f_8030AD84(c); // 80313C30
  cmps(c,0,(int32_t)c->r[3],0); // 80313C34
  c->r[31]=c->r[3]|c->r[3]; // 80313C38
  if (crb(c,2)) { goto L_80313C80; } // 80313C3C
  c->r[4]=0u+0x00000000u; // 80313C40
  c->r[5]=0u+0x00000014u; // 80313C44
  c->lr=0x80313C4Cu; f_800060B8(c); // 80313C48
  c->r[0]=0u+0x00001708u; // 80313C4C
  c->r[5]=0u+0x0000000Au; // 80313C50
  W16(c->r[31]+0x00000000u,c->r[0]); // 80313C54
  c->r[4]=0u+0x00000000u; // 80313C58
  c->r[0]=0u+0x00000002u; // 80313C5C
  c->r[3]=c->r[31]|c->r[31]; // 80313C60
  W16(c->r[31]+0x00000006u,c->r[29]); // 80313C64
  W8(c->r[31]+0x00000008u,c->r[5]); // 80313C68
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 80313C6C
  W8(c->r[31]+0x00000009u,c->r[0]); // 80313C70
  W32(c->r[31]+0x00000010u,c->r[30]); // 80313C74
  W8(c->r[31]+0x0000000Au,c->r[4]); // 80313C78
  c->lr=0x80313C80u; f_8030ECE4(c); // 80313C7C
L_80313C80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313C80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80313C84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80313C88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80313C8C
  c->lr=c->r[0]; // 80313C90
  c->r[1]=c->r[1]+0x00000020u; // 80313C94
  return; // 80313C98
}

// BTA_HhAddDev
void f_80313C9C(Ctx* __restrict c) {
  trace_call(0x80313C9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313C9C
  c->r[0]=c->lr; // 80313CA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80313CA4
  c->r[11]=c->r[1]+0x00000020u; // 80313CA8
  c->lr=0x80313CB0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80313CAC
  c->r[26]=c->r[3]|c->r[3]; // 80313CB0
  c->r[27]=c->r[4]|c->r[4]; // 80313CB4
  c->r[28]=c->r[5]|c->r[5]; // 80313CB8
  c->r[29]=c->r[6]|c->r[6]; // 80313CBC
  c->r[30]=c->r[7]|c->r[7]; // 80313CC0
  c->r[3]=0u+0x0000001Cu; // 80313CC4
  c->lr=0x80313CCCu; f_8030AD84(c); // 80313CC8
  cmps(c,0,(int32_t)c->r[3],0); // 80313CCC
  c->r[31]=c->r[3]|c->r[3]; // 80313CD0
  if (crb(c,2)) { goto L_80313D2C; } // 80313CD4
  c->r[4]=0u+0x00000000u; // 80313CD8
  c->r[5]=0u+0x0000001Cu; // 80313CDC
  c->lr=0x80313CE4u; f_800060B8(c); // 80313CE0
  c->r[0]=0u+0x0000170Au; // 80313CE4
  c->r[5]=0u+0x0000000Bu; // 80313CE8
  W16(c->r[31]+0x00000000u,c->r[0]); // 80313CEC
  c->r[0]=0u+0x000000FFu; // 80313CF0
  c->r[4]=c->r[30]|c->r[30]; // 80313CF4
  c->r[3]=c->r[31]+0x00000014u; // 80313CF8
  W16(c->r[31]+0x00000010u,c->r[5]); // 80313CFC
  c->r[5]=0u+0x00000008u; // 80313D00
  W16(c->r[31]+0x00000006u,c->r[0]); // 80313D04
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 80313D08
  W8(c->r[31]+0x00000012u,c->r[28]); // 80313D0C
  W8(c->r[31]+0x00000013u,c->r[29]); // 80313D10
  c->lr=0x80313D18u; f_80005FB4(c); // 80313D14
  c->r[4]=c->r[26]|c->r[26]; // 80313D18
  c->r[3]=c->r[31]+0x00000008u; // 80313D1C
  c->lr=0x80313D24u; f_8030E838(c); // 80313D20
  c->r[3]=c->r[31]|c->r[31]; // 80313D24
  c->lr=0x80313D2Cu; f_8030ECE4(c); // 80313D28
L_80313D2C:;
  c->r[11]=c->r[1]+0x00000020u; // 80313D2C
  c->lr=0x80313D34u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80313D30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80313D34
  c->lr=c->r[0]; // 80313D38
  c->r[1]=c->r[1]+0x00000020u; // 80313D3C
  return; // 80313D40
}

// BTA_HhRemoveDev
void f_80313D44(Ctx* __restrict c) {
  trace_call(0x80313D44u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313D44
  c->r[0]=c->lr; // 80313D48
  W32(c->r[1]+0x00000014u,c->r[0]); // 80313D4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80313D50
  W32(c->r[1]+0x00000008u,c->r[30]); // 80313D54
  c->r[30]=c->r[3]|c->r[3]; // 80313D58
  c->r[3]=0u+0x0000001Cu; // 80313D5C
  c->lr=0x80313D64u; f_8030AD84(c); // 80313D60
  cmps(c,0,(int32_t)c->r[3],0); // 80313D64
  c->r[31]=c->r[3]|c->r[3]; // 80313D68
  if (crb(c,2)) { goto L_80313D98; } // 80313D6C
  c->r[4]=0u+0x00000000u; // 80313D70
  c->r[5]=0u+0x0000001Cu; // 80313D74
  c->lr=0x80313D7Cu; f_800060B8(c); // 80313D78
  c->r[3]=0u+0x0000170Au; // 80313D7C
  c->r[0]=0u+0x0000000Cu; // 80313D80
  W16(c->r[31]+0x00000000u,c->r[3]); // 80313D84
  c->r[3]=c->r[31]|c->r[31]; // 80313D88
  W16(c->r[31]+0x00000010u,c->r[0]); // 80313D8C
  W16(c->r[31]+0x00000006u,c->r[30]); // 80313D90
  c->lr=0x80313D98u; f_8030ECE4(c); // 80313D94
L_80313D98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80313D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80313D9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80313DA0
  c->lr=c->r[0]; // 80313DA4
  c->r[1]=c->r[1]+0x00000010u; // 80313DA8
  return; // 80313DAC
}

// BTA_HhGetAclQueueInfo
void f_80313DB0(Ctx* __restrict c) {
  trace_call(0x80313DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313DB0
  c->r[0]=c->lr; // 80313DB4
  c->r[3]=0u+0x00000008u; // 80313DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80313DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80313DC0
  c->lr=0x80313DC8u; f_8030AD84(c); // 80313DC4
  cmps(c,0,(int32_t)c->r[3],0); // 80313DC8
  c->r[31]=c->r[3]|c->r[3]; // 80313DCC
  if (crb(c,2)) { goto L_80313DF0; } // 80313DD0
  c->r[4]=0u+0x00000000u; // 80313DD4
  c->r[5]=0u+0x00000008u; // 80313DD8
  c->lr=0x80313DE0u; f_800060B8(c); // 80313DDC
  c->r[0]=0u+0x0000170Eu; // 80313DE0
  c->r[3]=c->r[31]|c->r[31]; // 80313DE4
  W16(c->r[31]+0x00000000u,c->r[0]); // 80313DE8
  c->lr=0x80313DF0u; f_8030ECE4(c); // 80313DEC
L_80313DF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80313DF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80313DF4
  c->lr=c->r[0]; // 80313DF8
  c->r[1]=c->r[1]+0x00000010u; // 80313DFC
  return; // 80313E00
}

// bta_hh_sm_execute
void f_80313E04(Ctx* __restrict c) {
  trace_call(0x80313E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80313E04
  c->r[0]=c->lr; // 80313E08
  W32(c->r[1]+0x00000044u,c->r[0]); // 80313E0C
  c->r[11]=c->r[1]+0x00000040u; // 80313E10
  c->lr=0x80313E18u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80313E14
  c->r[31]=0u+0x80490000u; // 80313E18
  c->r[27]=c->r[3]|c->r[3]; // 80313E1C
  c->r[28]=c->r[4]|c->r[4]; // 80313E20
  c->r[29]=c->r[5]|c->r[5]; // 80313E24
  c->r[31]=c->r[31]+0xFFFFF288u; // 80313E28
  c->r[3]=c->r[1]+0x00000008u; // 80313E2C
  c->r[30]=0u+0x00000000u; // 80313E30
  c->r[4]=0u+0x00000000u; // 80313E34
  c->r[5]=0u+0x00000020u; // 80313E38
  c->lr=0x80313E40u; f_800060B8(c); // 80313E3C
  cmps(c,0,(int32_t)c->r[27],0); // 80313E40
  if (!crb(c,2)) { goto L_80313F9C; } // 80313E44
  c->r[3]=0u+0x80570000u; // 80313E48
  c->r[3]=c->r[3]+0x000056C8u; // 80313E4C
  c->r[0]=R32(c->r[3]+0x00000224u); // 80313E50
  cmps(c,0,(int32_t)c->r[0],0); // 80313E54
  if (crb(c,2)) { goto L_80314140; } // 80313E58
  cmps(c,0,(int32_t)c->r[28],5896); // 80313E5C
  if (crb(c,2)) { goto L_80313EF0; } // 80313E60
  if (!crb(c,0)) { goto L_80313E80; } // 80313E64
  cmps(c,0,(int32_t)c->r[28],5889); // 80313E68
  if (crb(c,2)) { goto L_80313F44; } // 80313E6C
  if (!crb(c,0)) { goto L_80313F5C; } // 80313E70
  cmps(c,0,(int32_t)c->r[28],5888); // 80313E74
  if (!crb(c,0)) { goto L_80313E8C; } // 80313E78
  goto L_80313F5C; // 80313E7C
L_80313E80:;
  cmps(c,0,(int32_t)c->r[28],5898); // 80313E80
  if (crb(c,2)) { goto L_80313EB0; } // 80313E84
  goto L_80313F5C; // 80313E88
L_80313E8C:;
  c->r[3]=c->r[1]+0x00000008u; // 80313E8C
  c->r[4]=c->r[29]+0x00000008u; // 80313E90
  c->r[30]=0u+0x00000002u; // 80313E94
  c->lr=0x80313E9Cu; f_8030E838(c); // 80313E98
  c->r[3]=0u+0x00000009u; // 80313E9C
  c->r[0]=0u+0x000000FFu; // 80313EA0
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80313EA4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80313EA8
  goto L_80313F78; // 80313EAC
L_80313EB0:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 80313EB0
  cmpu(c,0,c->r[30],0x0000000Bu); // 80313EB4
  if (!crb(c,2)) { goto L_80313EDC; } // 80313EB8
  c->r[3]=c->r[1]+0x00000008u; // 80313EBC
  c->r[4]=c->r[29]+0x00000008u; // 80313EC0
  c->lr=0x80313EC8u; f_8030E838(c); // 80313EC4
  c->r[3]=0u+0x00000009u; // 80313EC8
  c->r[0]=0u+0x000000FFu; // 80313ECC
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 80313ED0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80313ED4
  goto L_80313F78; // 80313ED8
L_80313EDC:;
  c->r[0]=0u+0x0000000Du; // 80313EDC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80313EE0
  c->r[0]=R16(c->r[29]+0x00000006u); // 80313EE4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80313EE8
  goto L_80313F78; // 80313EEC
L_80313EF0:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 80313EF0
  cmpu(c,0,c->r[30],0x00000007u); // 80313EF4
  if (crb(c,2)) { goto L_80313F0C; } // 80313EF8
  cmpu(c,0,c->r[30],0x00000005u); // 80313EFC
  if (crb(c,2)) { goto L_80313F0C; } // 80313F00
  cmpu(c,0,c->r[30],0x00000009u); // 80313F04
  if (!crb(c,2)) { goto L_80313F20; } // 80313F08
L_80313F0C:;
  c->r[0]=0u+0x0000000Du; // 80313F0C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80313F10
  c->r[0]=R16(c->r[29]+0x00000006u); // 80313F14
  W8(c->r[1]+0x00000009u,c->r[0]); // 80313F18
  goto L_80313F78; // 80313F1C
L_80313F20:;
  cmpu(c,0,c->r[30],0x0000000Au); // 80313F20
  if (crb(c,2)) { goto L_80313F78; } // 80313F24
  cmpu(c,0,c->r[30],0x00000001u); // 80313F28
  if (crb(c,2)) { goto L_80313F78; } // 80313F2C
  c->r[3]=R16(c->r[29]+0x00000006u); // 80313F30
  c->r[0]=0u+0x0000000Du; // 80313F34
  W8(c->r[1]+0x00000009u,c->r[3]); // 80313F38
  W8(c->r[1]+0x00000008u,c->r[0]); // 80313F3C
  goto L_80313F78; // 80313F40
L_80313F44:;
  c->r[0]=0u+0x0000000Du; // 80313F44
  c->r[30]=0u+0x00000003u; // 80313F48
  W8(c->r[1]+0x00000008u,c->r[0]); // 80313F4C
  c->r[0]=R16(c->r[29]+0x00000006u); // 80313F50
  W8(c->r[1]+0x00000009u,c->r[0]); // 80313F54
  goto L_80313F78; // 80313F58
L_80313F5C:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80313F5C
  cmpu(c,0,c->r[0],0x00000001u); // 80313F60
  if (crb(c,0)) { goto L_80313F78; } // 80313F64
  c->r[5]=R16(c->r[29]+0x00000006u); // 80313F68
  c->r[4]=c->r[31]+0x00000000u; // 80313F6C
  c->r[3]=0u+0x00000500u; // 80313F70
  c->lr=0x80313F78u; f_8030E200(c); // 80313F74
L_80313F78:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 80313F78
  if (crb(c,2)) { goto L_80314140; } // 80313F7C
  c->r[5]=0u+0x80570000u; // 80313F80
  c->r[4]=c->r[1]+0x00000008u; // 80313F84
  c->r[5]=c->r[5]+0x000056C8u; // 80313F88
  c->r[12]=R32(c->r[5]+0x00000224u); // 80313F8C
  c->ctr=c->r[12]; // 80313F90
  if (true) { c->lr=0x80313F98u; dispatch(c,c->ctr); } // 80313F94
  goto L_80314140; // 80313F98
L_80313F9C:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80313F9C
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 80313FA0
  cmpu(c,0,c->r[0],0x00000004u); // 80313FA4
  if (crb(c,0)) { goto L_80314018; } // 80313FA8
  cmps(c,0,(int32_t)c->r[30],2); // 80313FAC
  if (crb(c,2)) { goto L_80313FE4; } // 80313FB0
  if (!crb(c,0)) { goto L_80313FC8; } // 80313FB4
  cmps(c,0,(int32_t)c->r[30],0); // 80313FB8
  if (crb(c,2)) { goto L_80313FD4; } // 80313FBC
  if (!crb(c,0)) { goto L_80313FDC; } // 80313FC0
  goto L_80313FF4; // 80313FC4
L_80313FC8:;
  cmps(c,0,(int32_t)c->r[30],4); // 80313FC8
  if (!crb(c,0)) { goto L_80313FF4; } // 80313FCC
  goto L_80313FEC; // 80313FD0
L_80313FD4:;
  c->r[26]=c->r[31]+0x0000001Cu; // 80313FD4
  goto L_80313FF8; // 80313FD8
L_80313FDC:;
  c->r[26]=c->r[31]+0x0000002Cu; // 80313FDC
  goto L_80313FF8; // 80313FE0
L_80313FE4:;
  c->r[26]=c->r[31]+0x0000003Cu; // 80313FE4
  goto L_80313FF8; // 80313FE8
L_80313FEC:;
  c->r[26]=c->r[31]+0x00000050u; // 80313FEC
  goto L_80313FF8; // 80313FF0
L_80313FF4:;
  c->r[26]=c->r[31]+0x00000060u; // 80313FF4
L_80313FF8:;
  c->r[3]=c->r[28]|c->r[28]; // 80313FF8
  c->lr=0x80314000u; f_803142A4(c); // 80313FFC
  c->r[7]=c->r[3]|c->r[3]; // 80314000
  c->r[5]=c->r[30]|c->r[30]; // 80314004
  c->r[6]=c->r[26]|c->r[26]; // 80314008
  c->r[4]=c->r[31]+0x00000078u; // 8031400C
  c->r[3]=0u+0x00000503u; // 80314010
  c->lr=0x80314018u; f_8030E230(c); // 80314014
L_80314018:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 80314018
  c->r[3]=0u+0x80440000u; // 8031401C
  c->r[3]=c->r[3]+0xFFFFDD70u; // 80314020
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 80314024
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80314028
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8031402C
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 80314030
  c->r[5]=R32(c->r[3]+c->r[0]); // 80314034
  c->r[3]=c->r[5]+c->r[4]; // 80314038
  c->r[0]=R8(c->r[3]+0x00000001u); // 8031403C
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 80314040
  c->r[0]=R8(c->r[5]+c->r[4]); // 80314044
  cmpu(c,0,c->r[0],0x0000000Cu); // 80314048
  if (crb(c,2)) { goto L_80314070; } // 8031404C
  c->r[4]=0u+0x80440000u; // 80314050
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 80314054
  c->r[4]=c->r[4]+0xFFFFDCF8u; // 80314058
  c->r[3]=c->r[27]|c->r[27]; // 8031405C
  c->r[12]=R32(c->r[4]+c->r[0]); // 80314060
  c->r[4]=c->r[29]|c->r[29]; // 80314064
  c->ctr=c->r[12]; // 80314068
  if (true) { c->lr=0x80314070u; dispatch(c,c->ctr); } // 8031406C
L_80314070:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 80314070
  cmpu(c,0,c->r[30],c->r[3]); // 80314074
  if (crb(c,2)) { goto L_80314140; } // 80314078
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 8031407C
  cmpu(c,0,c->r[0],0x00000005u); // 80314080
  if (crb(c,0)) { goto L_80314140; } // 80314084
  cmps(c,0,(int32_t)c->r[30],2); // 80314088
  if (crb(c,2)) { goto L_803140C0; } // 8031408C
  if (!crb(c,0)) { goto L_803140A4; } // 80314090
  cmps(c,0,(int32_t)c->r[30],0); // 80314094
  if (crb(c,2)) { goto L_803140B0; } // 80314098
  if (!crb(c,0)) { goto L_803140B8; } // 8031409C
  goto L_803140D0; // 803140A0
L_803140A4:;
  cmps(c,0,(int32_t)c->r[30],4); // 803140A4
  if (!crb(c,0)) { goto L_803140D0; } // 803140A8
  goto L_803140C8; // 803140AC
L_803140B0:;
  c->r[26]=c->r[31]+0x0000001Cu; // 803140B0
  goto L_803140D4; // 803140B4
L_803140B8:;
  c->r[26]=c->r[31]+0x0000002Cu; // 803140B8
  goto L_803140D4; // 803140BC
L_803140C0:;
  c->r[26]=c->r[31]+0x0000003Cu; // 803140C0
  goto L_803140D4; // 803140C4
L_803140C8:;
  c->r[26]=c->r[31]+0x00000050u; // 803140C8
  goto L_803140D4; // 803140CC
L_803140D0:;
  c->r[26]=c->r[31]+0x00000060u; // 803140D0
L_803140D4:;
  cmps(c,0,(int32_t)c->r[3],2); // 803140D4
  if (crb(c,2)) { goto L_8031410C; } // 803140D8
  if (!crb(c,0)) { goto L_803140F0; } // 803140DC
  cmps(c,0,(int32_t)c->r[3],0); // 803140E0
  if (crb(c,2)) { goto L_803140FC; } // 803140E4
  if (!crb(c,0)) { goto L_80314104; } // 803140E8
  goto L_8031411C; // 803140EC
L_803140F0:;
  cmps(c,0,(int32_t)c->r[3],4); // 803140F0
  if (!crb(c,0)) { goto L_8031411C; } // 803140F4
  goto L_80314114; // 803140F8
L_803140FC:;
  c->r[27]=c->r[31]+0x0000001Cu; // 803140FC
  goto L_80314120; // 80314100
L_80314104:;
  c->r[27]=c->r[31]+0x0000002Cu; // 80314104
  goto L_80314120; // 80314108
L_8031410C:;
  c->r[27]=c->r[31]+0x0000003Cu; // 8031410C
  goto L_80314120; // 80314110
L_80314114:;
  c->r[27]=c->r[31]+0x00000050u; // 80314114
  goto L_80314120; // 80314118
L_8031411C:;
  c->r[27]=c->r[31]+0x00000060u; // 8031411C
L_80314120:;
  c->r[3]=c->r[28]|c->r[28]; // 80314120
  c->lr=0x80314128u; f_803142A4(c); // 80314124
  c->r[7]=c->r[3]|c->r[3]; // 80314128
  c->r[5]=c->r[26]|c->r[26]; // 8031412C
  c->r[6]=c->r[27]|c->r[27]; // 80314130
  c->r[4]=c->r[31]+0x000000ACu; // 80314134
  c->r[3]=0u+0x00000504u; // 80314138
  c->lr=0x80314140u; f_8030E230(c); // 8031413C
L_80314140:;
  c->r[11]=c->r[1]+0x00000040u; // 80314140
  c->lr=0x80314148u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80314144
  c->r[0]=R32(c->r[1]+0x00000044u); // 80314148
  c->lr=c->r[0]; // 8031414C
  c->r[1]=c->r[1]+0x00000040u; // 80314150
  return; // 80314154
}

// bta_hh_hdl_event
void f_80314158(Ctx* __restrict c) {
  trace_call(0x80314158u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314158
  c->r[0]=c->lr; // 8031415C
  c->r[6]=0u+0x00000010u; // 80314160
  W32(c->r[1]+0x00000014u,c->r[0]); // 80314164
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80314168
  c->r[31]=0u+0x00000000u; // 8031416C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80314170
  c->r[30]=c->r[3]|c->r[3]; // 80314174
  c->r[0]=R16(c->r[3]+0x00000000u); // 80314178
  cmps(c,0,(int32_t)c->r[0],5902); // 8031417C
  if (crb(c,2)) { goto L_803141BC; } // 80314180
  if (!crb(c,0)) { goto L_80314198; } // 80314184
  cmps(c,0,(int32_t)c->r[0],5900); // 80314188
  if (crb(c,2)) { goto L_803141A4; } // 8031418C
  if (!crb(c,0)) { goto L_803141AC; } // 80314190
  goto L_803141C4; // 80314194
L_80314198:;
  cmps(c,0,(int32_t)c->r[0],5904); // 80314198
  if (!crb(c,0)) { goto L_803141C4; } // 8031419C
  goto L_803141B4; // 803141A0
L_803141A4:;
  c->lr=0x803141A8u; f_803122EC(c); // 803141A4
  goto L_80314288; // 803141A8
L_803141AC:;
  c->lr=0x803141B0u; f_80312460(c); // 803141AC
  goto L_80314288; // 803141B0
L_803141B4:;
  c->lr=0x803141B8u; f_80312564(c); // 803141B4
  goto L_80314288; // 803141B8
L_803141BC:;
  c->lr=0x803141C0u; f_803134B8(c); // 803141BC
  goto L_80314288; // 803141C0
L_803141C4:;
  cmpu(c,0,c->r[0],0x00001700u); // 803141C4
  if (!crb(c,2)) { goto L_803141DC; } // 803141C8
  c->r[3]=c->r[3]+0x00000008u; // 803141CC
  c->lr=0x803141D4u; f_80314358(c); // 803141D0
  c->r[6]=c->r[3]|c->r[3]; // 803141D4
  goto L_80314234; // 803141D8
L_803141DC:;
  cmpu(c,0,c->r[0],0x0000170Au); // 803141DC
  if (!crb(c,2)) { goto L_80314218; } // 803141E0
  c->r[0]=R16(c->r[3]+0x00000010u); // 803141E4
  cmpu(c,0,c->r[0],0x0000000Bu); // 803141E8
  if (!crb(c,2)) { goto L_80314200; } // 803141EC
  c->r[3]=c->r[3]+0x00000008u; // 803141F0
  c->lr=0x803141F8u; f_80314358(c); // 803141F4
  c->r[6]=c->r[3]|c->r[3]; // 803141F8
  goto L_80314234; // 803141FC
L_80314200:;
  c->r[4]=0u+0x80570000u; // 80314200
  c->r[0]=R16(c->r[3]+0x00000006u); // 80314204
  c->r[4]=c->r[4]+0x000056C8u; // 80314208
  c->r[3]=c->r[4]+c->r[0]; // 8031420C
  c->r[6]=R8(c->r[3]+0x00000214u); // 80314210
  goto L_80314234; // 80314214
L_80314218:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 80314218
  cmpu(c,0,c->r[0],0x00000010u); // 8031421C
  if (!crb(c,0)) { goto L_80314234; } // 80314220
  c->r[3]=0u+0x80570000u; // 80314224
  c->r[3]=c->r[3]+0x000056C8u; // 80314228
  c->r[3]=c->r[3]+c->r[0]; // 8031422C
  c->r[6]=R8(c->r[3]+0x00000214u); // 80314230
L_80314234:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 80314234
  cmpu(c,0,c->r[0],0x00000010u); // 80314238
  if (crb(c,2)) { goto L_80314254; } // 8031423C
  c->r[3]=0u+0x80570000u; // 80314240
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 80314244
  c->r[3]=c->r[3]+0x000056C8u; // 80314248
  c->r[3]=c->r[3]+c->r[0]; // 8031424C
  c->r[31]=c->r[3]+0x00000010u; // 80314250
L_80314254:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80314254
  cmpu(c,0,c->r[0],0x00000005u); // 80314258
  if (crb(c,0)) { goto L_80314278; } // 8031425C
  c->r[4]=0u+0x80490000u; // 80314260
  c->r[5]=R16(c->r[30]+0x00000006u); // 80314264
  c->r[4]=c->r[4]+0xFFFFF364u; // 80314268
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 8031426C
  c->r[3]=0u+0x00000504u; // 80314270
  c->lr=0x80314278u; f_8030E218(c); // 80314274
L_80314278:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 80314278
  c->r[3]=c->r[31]|c->r[31]; // 8031427C
  c->r[5]=c->r[30]|c->r[30]; // 80314280
  c->lr=0x80314288u; f_80313E04(c); // 80314284
L_80314288:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80314288
  c->r[3]=0u+0x00000001u; // 8031428C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80314290
  c->r[0]=R32(c->r[1]+0x00000014u); // 80314294
  c->lr=c->r[0]; // 80314298
  c->r[1]=c->r[1]+0x00000010u; // 8031429C
  return; // 803142A0
}

// bta_hh_evt_code
void f_803142A4(Ctx* __restrict c) {
  trace_call(0x803142A4u);
  c->r[0]=c->r[3]+0xFFFFE900u; // 803142A4
  c->r[4]=0u+0x80490000u; // 803142A8
  cmpu(c,0,c->r[0],0x0000000Fu); // 803142AC
  c->r[4]=c->r[4]+0xFFFFF288u; // 803142B0
  if (crb(c,1)) { goto L_80314350; } // 803142B4
  c->r[3]=0u+0x80490000u; // 803142B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 803142BC
  c->r[3]=c->r[3]+0xFFFFF528u; // 803142C0
  c->r[3]=R32(c->r[3]+c->r[0]); // 803142C4
  c->ctr=c->r[3]; // 803142C8
  if (true) { switch (c->ctr) { case 0x803142D0u: goto L_803142D0; case 0x803142D8u: goto L_803142D8; case 0x803142E0u: goto L_803142E0; case 0x803142E8u: goto L_803142E8; case 0x803142F0u: goto L_803142F0; case 0x803142F8u: goto L_803142F8; case 0x80314300u: goto L_80314300; case 0x80314308u: goto L_80314308; case 0x80314310u: goto L_80314310; case 0x80314318u: goto L_80314318; case 0x80314320u: goto L_80314320; case 0x80314328u: goto L_80314328; case 0x80314330u: goto L_80314330; case 0x80314338u: goto L_80314338; case 0x80314340u: goto L_80314340; case 0x80314348u: goto L_80314348; default: break; } dispatch(c,c->ctr); return; } // 803142CC
L_803142D0:;
  c->r[3]=c->r[4]+0x00000108u; // 803142D0
  return; // 803142D4
L_803142D8:;
  c->r[3]=c->r[4]+0x00000120u; // 803142D8
  return; // 803142DC
L_803142E0:;
  c->r[3]=c->r[4]+0x00000138u; // 803142E0
  return; // 803142E4
L_803142E8:;
  c->r[3]=c->r[4]+0x0000014Cu; // 803142E8
  return; // 803142EC
L_803142F0:;
  c->r[3]=c->r[4]+0x00000164u; // 803142F0
  return; // 803142F4
L_803142F8:;
  c->r[3]=c->r[4]+0x00000178u; // 803142F8
  return; // 803142FC
L_80314300:;
  c->r[3]=c->r[4]+0x00000190u; // 80314300
  return; // 80314304
L_80314308:;
  c->r[3]=c->r[4]+0x000001A8u; // 80314308
  return; // 8031430C
L_80314310:;
  c->r[3]=c->r[4]+0x000001BCu; // 80314310
  return; // 80314314
L_80314318:;
  c->r[3]=c->r[4]+0x000001D4u; // 80314318
  return; // 8031431C
L_80314320:;
  c->r[3]=c->r[4]+0x000001F0u; // 80314320
  return; // 80314324
L_80314328:;
  c->r[3]=c->r[4]+0x00000204u; // 80314328
  return; // 8031432C
L_80314330:;
  c->r[3]=c->r[4]+0x0000021Cu; // 80314330
  return; // 80314334
L_80314338:;
  c->r[3]=c->r[4]+0x00000238u; // 80314338
  return; // 8031433C
L_80314340:;
  c->r[3]=c->r[4]+0x00000250u; // 80314340
  return; // 80314344
L_80314348:;
  c->r[3]=c->r[4]+0x00000268u; // 80314348
  return; // 8031434C
L_80314350:;
  c->r[3]=c->r[4]+0x00000284u; // 80314350
  return; // 80314354
}

// bta_hh_find_cb
void f_80314358(Ctx* __restrict c) {
  trace_call(0x80314358u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314358
  c->r[0]=c->lr; // 8031435C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80314360
  c->r[11]=c->r[1]+0x00000020u; // 80314364
  c->lr=0x8031436Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80314368
  c->r[31]=0u+0x80570000u; // 8031436C
  c->r[30]=0u+0x80490000u; // 80314370
  c->r[27]=c->r[3]|c->r[3]; // 80314374
  c->r[28]=0u+0x00000000u; // 80314378
  c->r[30]=c->r[30]+0xFFFFF568u; // 8031437C
  c->r[31]=c->r[31]+0x000056C8u; // 80314380
L_80314384:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 80314384
  c->r[3]=c->r[27]|c->r[27]; // 80314388
  c->r[4]=c->r[31]+c->r[29]; // 8031438C
  c->r[4]=c->r[4]+0x00000018u; // 80314390
  c->lr=0x80314398u; f_8030E86C(c); // 80314394
  cmps(c,0,(int32_t)c->r[3],0); // 80314398
  if (!crb(c,2)) { goto L_803143E0; } // 8031439C
  c->r[3]=c->r[27]|c->r[27]; // 803143A0
  c->r[4]=c->r[2]+0xFFFFB728u; // 803143A4
  c->lr=0x803143ACu; f_8030E86C(c); // 803143A8
  cmps(c,0,(int32_t)c->r[3],0); // 803143AC
  if (crb(c,2)) { goto L_803143E0; } // 803143B0
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803143B4
  cmpu(c,0,c->r[0],0x00000005u); // 803143B8
  if (crb(c,0)) { goto L_803143D8; } // 803143BC
  c->r[3]=c->r[31]+c->r[29]; // 803143C0
  c->r[4]=c->r[30]+0x00000000u; // 803143C4
  c->r[6]=R8(c->r[3]+0x00000026u); // 803143C8
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 803143CC
  c->r[3]=0u+0x00000504u; // 803143D0
  c->lr=0x803143D8u; f_8030E218(c); // 803143D4
L_803143D8:;
  c->r[3]=c->r[28]|c->r[28]; // 803143D8
  goto L_8031447C; // 803143DC
L_803143E0:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803143E0
  cmpu(c,0,c->r[0],0x00000005u); // 803143E4
  if (crb(c,0)) { goto L_8031440C; } // 803143E8
  c->r[8]=c->r[31]+c->r[29]; // 803143EC
  c->r[4]=c->r[30]+0x00000024u; // 803143F0
  c->r[5]=R8(c->r[8]+0x00000028u); // 803143F4
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 803143F8
  c->r[7]=R8(c->r[8]+0x00000026u); // 803143FC
  c->r[3]=0u+0x00000504u; // 80314400
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 80314404
  c->lr=0x8031440Cu; f_8030E248(c); // 80314408
L_8031440C:;
  c->r[28]=c->r[28]+0x00000001u; // 8031440C
  cmpu(c,0,c->r[28],0x00000010u); // 80314410
  if (crb(c,0)) { IRQCHK(c); goto L_80314384; } // 80314414
  c->r[4]=0u+0x80570000u; // 80314418
  c->r[0]=0u+0x00000010u; // 8031441C
  c->r[4]=c->r[4]+0x000056C8u; // 80314420
  c->r[29]=0u+0x00000000u; // 80314424
  c->ctr=c->r[0]; // 80314428
L_8031442C:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 8031442C
  c->r[3]=c->r[4]+c->r[0]; // 80314430
  c->r[0]=R8(c->r[3]+0x00000028u); // 80314434
  cmps(c,0,(int32_t)c->r[0],0); // 80314438
  if (!crb(c,2)) { goto L_80314450; } // 8031443C
  c->r[4]=c->r[27]|c->r[27]; // 80314440
  c->r[3]=c->r[3]+0x00000018u; // 80314444
  c->lr=0x8031444Cu; f_8030E838(c); // 80314448
  goto L_80314458; // 8031444C
L_80314450:;
  c->r[29]=c->r[29]+0x00000001u; // 80314450
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031442C; } // 80314454
L_80314458:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80314458
  cmpu(c,0,c->r[0],0x00000005u); // 8031445C
  if (crb(c,0)) { goto L_80314478; } // 80314460
  c->r[4]=c->r[30]+0x00000058u; // 80314464
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 80314468
  c->r[3]=0u+0x00000504u; // 8031446C
  c->r[6]=0u+0x00000010u; // 80314470
  c->lr=0x80314478u; f_8030E218(c); // 80314474
L_80314478:;
  c->r[3]=c->r[29]|c->r[29]; // 80314478
L_8031447C:;
  c->r[11]=c->r[1]+0x00000020u; // 8031447C
  c->lr=0x80314484u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80314480
  c->r[0]=R32(c->r[1]+0x00000024u); // 80314484
  c->lr=c->r[0]; // 80314488
  c->r[1]=c->r[1]+0x00000020u; // 8031448C
  return; // 80314490
}

// bta_hh_clean_up_kdev
void f_80314494(Ctx* __restrict c) {
  trace_call(0x80314494u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314494
  c->r[0]=c->lr; // 80314498
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031449C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803144A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 803144A4
  c->r[30]=c->r[3]|c->r[3]; // 803144A8
  c->r[5]=R8(c->r[3]+0x00000016u); // 803144AC
  cmpu(c,0,c->r[5],0x000000FFu); // 803144B0
  if (crb(c,2)) { goto L_803144CC; } // 803144B4
  c->r[4]=0u+0x80570000u; // 803144B8
  c->r[0]=0u+0x00000010u; // 803144BC
  c->r[4]=c->r[4]+0x000056C8u; // 803144C0
  c->r[4]=c->r[4]+c->r[5]; // 803144C4
  W8(c->r[4]+0x00000214u,c->r[0]); // 803144C8
L_803144CC:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 803144CC
  c->r[3]=c->r[3]+0x00000004u; // 803144D0
  c->lr=0x803144D8u; f_8030EF84(c); // 803144D4
  c->r[3]=c->r[30]|c->r[30]; // 803144D8
  c->r[4]=0u+0x00000000u; // 803144DC
  c->r[5]=0u+0x00000020u; // 803144E0
  c->lr=0x803144E8u; f_800060B8(c); // 803144E4
  c->r[3]=0u+0x00000001u; // 803144E8
  c->r[0]=0u+0x000000FFu; // 803144EC
  W8(c->r[30]+0x00000012u,c->r[31]); // 803144F0
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 803144F4
  W8(c->r[30]+0x00000016u,c->r[0]); // 803144F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803144FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80314500
  c->r[0]=R32(c->r[1]+0x00000014u); // 80314504
  c->lr=c->r[0]; // 80314508
  c->r[1]=c->r[1]+0x00000010u; // 8031450C
  return; // 80314510
}

// bta_hh_add_device_to_list
void f_80314514(Ctx* __restrict c) {
  trace_call(0x80314514u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314514
  c->r[0]=c->lr; // 80314518
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031451C
  c->r[11]=c->r[1]+0x00000020u; // 80314520
  c->lr=0x80314528u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80314524
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80314528
  c->r[26]=c->r[3]|c->r[3]; // 8031452C
  c->r[27]=c->r[4]|c->r[4]; // 80314530
  c->r[28]=c->r[5]|c->r[5]; // 80314534
  cmpu(c,0,c->r[0],0x00000005u); // 80314538
  c->r[29]=c->r[6]|c->r[6]; // 8031453C
  c->r[30]=c->r[7]|c->r[7]; // 80314540
  c->r[31]=c->r[8]|c->r[8]; // 80314544
  if (crb(c,0)) { goto L_80314560; } // 80314548
  c->r[4]=0u+0x80490000u; // 8031454C
  c->r[5]=c->r[30]|c->r[30]; // 80314550
  c->r[4]=c->r[4]+0xFFFFF5ECu; // 80314554
  c->r[3]=0u+0x00000504u; // 80314558
  c->lr=0x80314560u; f_8030E200(c); // 8031455C
L_80314560:;
  c->r[0]=0u+0x00000001u; // 80314560
  cmps(c,0,(int32_t)c->r[29],0); // 80314564
  W8(c->r[26]+0x00000016u,c->r[27]); // 80314568
  W8(c->r[26]+0x00000018u,c->r[0]); // 8031456C
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 80314570
  W8(c->r[26]+0x00000013u,c->r[30]); // 80314574
  W8(c->r[26]+0x00000015u,c->r[31]); // 80314578
  if (crb(c,2)) { goto L_803145B8; } // 8031457C
  c->r[3]=c->r[26]+0x00000004u; // 80314580
  c->lr=0x80314588u; f_8030EF84(c); // 80314584
  c->r[3]=R16(c->r[29]+0x00000000u); // 80314588
  cmps(c,0,(int32_t)c->r[3],0); // 8031458C
  if (crb(c,2)) { goto L_803145B8; } // 80314590
  c->lr=0x80314598u; f_8030AD84(c); // 80314594
  cmps(c,0,(int32_t)c->r[3],0); // 80314598
  W32(c->r[26]+0x00000004u,c->r[3]); // 8031459C
  if (crb(c,2)) { goto L_803145B8; } // 803145A0
  c->r[0]=R16(c->r[29]+0x00000000u); // 803145A4
  W16(c->r[26]+0x00000000u,c->r[0]); // 803145A8
  c->r[4]=R32(c->r[29]+0x00000004u); // 803145AC
  c->r[5]=R16(c->r[29]+0x00000000u); // 803145B0
  c->lr=0x803145B8u; f_80005FB4(c); // 803145B4
L_803145B8:;
  c->r[11]=c->r[1]+0x00000020u; // 803145B8
  c->lr=0x803145C0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803145BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 803145C0
  c->lr=c->r[0]; // 803145C4
  c->r[1]=c->r[1]+0x00000020u; // 803145C8
  return; // 803145CC
}

// bta_hh_tod_spt
void f_803145D0(Ctx* __restrict c) {
  trace_call(0x803145D0u);
  c->r[7]=R32(c->r[13]+0xFFFFAB68u); // 803145D0
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 803145D4
  c->r[8]=0u+0x00000000u; // 803145D8
  c->r[5]=R8(c->r[7]+0x00000000u); // 803145DC
  goto L_80314610; // 803145E0
L_803145E4:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 803145E4
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 803145E8
  c->r[0]=R8(c->r[4]+c->r[6]); // 803145EC
  cmpu(c,0,c->r[9],c->r[0]); // 803145F0
  if (!crb(c,2)) { goto L_8031460C; } // 803145F4
  c->r[4]=c->r[4]+c->r[6]; // 803145F8
  c->r[0]=R8(c->r[4]+0x00000001u); // 803145FC
  W8(c->r[3]+0x00000015u,c->r[0]); // 80314600
  c->r[3]=0u+0x00000001u; // 80314604
  return; // 80314608
L_8031460C:;
  c->r[8]=c->r[8]+0x00000001u; // 8031460C
L_80314610:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 80314610
  cmpu(c,0,c->r[0],c->r[5]); // 80314614
  if (crb(c,0)) { IRQCHK(c); goto L_803145E4; } // 80314618
  c->r[3]=0u+0x00000000u; // 8031461C
  return; // 80314620
}

// bta_hh_trace_dev_db
void f_80314624(Ctx* __restrict c) {
  trace_call(0x80314624u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314624
  c->r[0]=c->lr; // 80314628
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031462C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80314630
  W32(c->r[1]+0x00000018u,c->r[30]); // 80314634
  c->r[30]=0u+0x80490000u; // 80314638
  c->r[30]=c->r[30]+0xFFFFF568u; // 8031463C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80314640
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80314644
  cmpu(c,0,c->r[0],0x00000005u); // 80314648
  if (crb(c,0)) { goto L_8031465C; } // 8031464C
  c->r[4]=c->r[30]+0x000001E4u; // 80314650
  c->r[3]=0u+0x00000504u; // 80314654
  c->lr=0x8031465Cu; f_8030E1E8(c); // 80314658
L_8031465C:;
  c->r[3]=0u+0x80570000u; // 8031465C
  c->r[29]=0u+0x00000000u; // 80314660
  c->r[31]=c->r[3]+0x000056C8u; // 80314664
L_80314668:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80314668
  cmpu(c,0,c->r[0],0x00000005u); // 8031466C
  if (crb(c,0)) { goto L_80314694; } // 80314670
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 80314674
  c->r[4]=c->r[30]+0x00000220u; // 80314678
  c->r[7]=c->r[31]+c->r[0]; // 8031467C
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 80314680
  c->r[6]=R8(c->r[7]+0x00000028u); // 80314684
  c->r[3]=0u+0x00000504u; // 80314688
  c->r[7]=R8(c->r[7]+0x00000026u); // 8031468C
  c->lr=0x80314694u; f_8030E230(c); // 80314690
L_80314694:;
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 80314694
  cmpu(c,0,c->r[0],0x00000005u); // 80314698
  if (crb(c,0)) { goto L_803146C4; } // 8031469C
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 803146A0
  c->r[4]=c->r[30]+0x00000244u; // 803146A4
  c->r[8]=c->r[31]+c->r[0]; // 803146A8
  c->r[3]=0u+0x00000504u; // 803146AC
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 803146B0
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 803146B4
  c->r[7]=R8(c->r[8]+0x00000023u); // 803146B8
  c->r[8]=R8(c->r[8]+0x00000022u); // 803146BC
  c->lr=0x803146C4u; f_8030E248(c); // 803146C0
L_803146C4:;
  c->r[29]=c->r[29]+0x00000001u; // 803146C4
  cmpu(c,0,c->r[29],0x00000010u); // 803146C8
  if (crb(c,0)) { IRQCHK(c); goto L_80314668; } // 803146CC
  c->r[0]=R8(c->r[13]+0xFFFFC0D8u); // 803146D0
  cmpu(c,0,c->r[0],0x00000005u); // 803146D4
  if (crb(c,0)) { goto L_803146E8; } // 803146D8
  c->r[4]=c->r[30]+0x00000280u; // 803146DC
  c->r[3]=0u+0x00000504u; // 803146E0
  c->lr=0x803146E8u; f_8030E1E8(c); // 803146E4
L_803146E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803146E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803146EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803146F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803146F4
  c->lr=c->r[0]; // 803146F8
  c->r[1]=c->r[1]+0x00000020u; // 803146FC
  return; // 80314700
}

// btm_acl_init
void f_80314704(Ctx* __restrict c) {
  trace_call(0x80314704u);
  c->r[3]=0u+0x80570000u; // 80314704
  c->r[4]=0u+0x00007D00u; // 80314708
  c->r[3]=c->r[3]+0x000058F8u; // 8031470C
  c->r[0]=0u+0x000000FFu; // 80314710
  W16(c->r[3]+0x000004C6u,c->r[4]); // 80314714
  W8(c->r[3]+0x000027BFu,c->r[0]); // 80314718
  return; // 8031471C
}

// btm_handle_to_acl_index
void f_80314720(Ctx* __restrict c) {
  trace_call(0x80314720u);
  c->r[4]=0u+0x80570000u; // 80314720
  c->r[5]=0u+0x00000000u; // 80314724
  c->r[4]=c->r[4]+0x000058F8u; // 80314728
  c->r[0]=R8(c->r[4]+0x0000014Du); // 8031472C
  cmps(c,0,(int32_t)c->r[0],0); // 80314730
  if (crb(c,2)) { goto L_80314744; } // 80314734
  c->r[0]=R16(c->r[4]+0x00000034u); // 80314738
  cmpu(c,0,c->r[0],c->r[3]); // 8031473C
  if (crb(c,2)) { goto L_8031479C; } // 80314740
L_80314744:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 80314744
  c->r[5]=0u+0x00000001u; // 80314748
  cmps(c,0,(int32_t)c->r[0],0); // 8031474C
  if (crb(c,2)) { goto L_80314760; } // 80314750
  c->r[0]=R16(c->r[4]+0x00000150u); // 80314754
  cmpu(c,0,c->r[0],c->r[3]); // 80314758
  if (crb(c,2)) { goto L_8031479C; } // 8031475C
L_80314760:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 80314760
  c->r[5]=0u+0x00000002u; // 80314764
  cmps(c,0,(int32_t)c->r[0],0); // 80314768
  if (crb(c,2)) { goto L_8031477C; } // 8031476C
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 80314770
  cmpu(c,0,c->r[0],c->r[3]); // 80314774
  if (crb(c,2)) { goto L_8031479C; } // 80314778
L_8031477C:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 8031477C
  c->r[5]=0u+0x00000003u; // 80314780
  cmps(c,0,(int32_t)c->r[0],0); // 80314784
  if (crb(c,2)) { goto L_80314798; } // 80314788
  c->r[0]=R16(c->r[4]+0x00000388u); // 8031478C
  cmpu(c,0,c->r[0],c->r[3]); // 80314790
  if (crb(c,2)) { goto L_8031479C; } // 80314794
L_80314798:;
  c->r[5]=0u+0x00000004u; // 80314798
L_8031479C:;
  c->r[3]=c->r[5]|c->r[5]; // 8031479C
  return; // 803147A0
}

// btm_acl_created
void f_803147A4(Ctx* __restrict c) {
  trace_call(0x803147A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803147A4
  c->r[0]=c->lr; // 803147A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803147AC
  c->r[11]=c->r[1]+0x00000030u; // 803147B0
  c->lr=0x803147B8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803147B4
  c->r[8]=0u+0x80570000u; // 803147B8
  c->r[30]=c->r[3]|c->r[3]; // 803147BC
  c->r[8]=c->r[8]+0x000058F8u; // 803147C0
  c->r[25]=c->r[4]|c->r[4]; // 803147C4
  c->r[26]=c->r[5]|c->r[5]; // 803147C8
  c->r[27]=c->r[6]|c->r[6]; // 803147CC
  c->r[28]=c->r[7]|c->r[7]; // 803147D0
  c->r[29]=c->r[8]+0x00000034u; // 803147D4
  c->r[31]=0u+0x00000000u; // 803147D8
L_803147DC:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803147DC
  cmps(c,0,(int32_t)c->r[0],0); // 803147E0
  if (crb(c,2)) { goto L_80314804; } // 803147E4
  c->r[4]=c->r[30]|c->r[30]; // 803147E8
  c->r[3]=c->r[29]+0x00000008u; // 803147EC
  c->r[5]=0u+0x00000006u; // 803147F0
  c->lr=0x803147F8u; f_802E54DC(c); // 803147F4
  cmps(c,0,(int32_t)c->r[3],0); // 803147F8
  if (!crb(c,2)) { goto L_80314804; } // 803147FC
  goto L_80314818; // 80314800
L_80314804:;
  c->r[31]=c->r[31]+0x00000001u; // 80314804
  c->r[29]=c->r[29]+0x0000011Cu; // 80314808
  cmpu(c,0,c->r[31],0x00000004u); // 8031480C
  if (crb(c,0)) { IRQCHK(c); goto L_803147DC; } // 80314810
  c->r[29]=0u+0x00000000u; // 80314814
L_80314818:;
  cmps(c,0,(int32_t)c->r[29],0); // 80314818
  if (crb(c,2)) { goto L_8031486C; } // 8031481C
  W16(c->r[29]+0x00000000u,c->r[27]); // 80314820
  c->r[3]=0u+0x80570000u; // 80314824
  c->r[3]=c->r[3]+0x000058F8u; // 80314828
  W8(c->r[29]+0x0000011Au,c->r[28]); // 8031482C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80314830
  cmpu(c,0,c->r[0],0x00000004u); // 80314834
  if (crb(c,0)) { goto L_80314AA0; } // 80314838
  c->r[3]=0u+0x000D0000u; // 8031483C
  c->r[4]=0u+0x80490000u; // 80314840
  c->r[5]=R8(c->r[30]+0x00000000u); // 80314844
  c->r[3]=c->r[3]+0x00000003u; // 80314848
  c->r[6]=R8(c->r[30]+0x00000001u); // 8031484C
  c->r[4]=c->r[4]+0xFFFFF828u; // 80314850
  c->r[7]=R8(c->r[30]+0x00000002u); // 80314854
  c->r[8]=R8(c->r[30]+0x00000003u); // 80314858
  c->r[9]=R8(c->r[30]+0x00000004u); // 8031485C
  c->r[10]=R8(c->r[30]+0x00000005u); // 80314860
  c->lr=0x80314868u; f_8030E278(c); // 80314864
  goto L_80314AA0; // 80314868
L_8031486C:;
  c->r[3]=0u+0x80570000u; // 8031486C
  c->r[0]=0u+0x00000004u; // 80314870
  c->r[3]=c->r[3]+0x000058F8u; // 80314874
  c->r[4]=0u+0x00000000u; // 80314878
  c->r[31]=c->r[3]+0x00000034u; // 8031487C
  c->ctr=c->r[0]; // 80314880
L_80314884:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 80314884
  cmps(c,0,(int32_t)c->r[0],0); // 80314888
  if (!crb(c,2)) { goto L_80314A94; } // 8031488C
  c->r[3]=0u+0x00000001u; // 80314890
  c->r[0]=0u+0x00000000u; // 80314894
  W8(c->r[31]+0x00000119u,c->r[3]); // 80314898
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 8031489C
  W16(c->r[31]+0x00000000u,c->r[27]); // 803148A0
  W8(c->r[31]+0x0000011Au,c->r[28]); // 803148A4
  W16(c->r[31]+0x00000004u,c->r[0]); // 803148A8
  c->lr=0x803148B0u; f_8031A480(c); // 803148AC
  c->r[4]=c->r[30]|c->r[30]; // 803148B0
  c->r[3]=c->r[31]+0x00000008u; // 803148B4
  c->r[5]=0u+0x00000006u; // 803148B8
  c->lr=0x803148C0u; f_80005FB4(c); // 803148BC
  cmps(c,0,(int32_t)c->r[25],0); // 803148C0
  if (crb(c,2)) { goto L_803148D8; } // 803148C4
  c->r[4]=c->r[25]|c->r[25]; // 803148C8
  c->r[3]=c->r[31]+0x0000000Eu; // 803148CC
  c->r[5]=0u+0x00000003u; // 803148D0
  c->lr=0x803148D8u; f_80005FB4(c); // 803148D4
L_803148D8:;
  cmps(c,0,(int32_t)c->r[26],0); // 803148D8
  if (crb(c,2)) { goto L_803148F0; } // 803148DC
  c->r[4]=c->r[26]|c->r[26]; // 803148E0
  c->r[3]=c->r[31]+0x00000011u; // 803148E4
  c->r[5]=0u+0x000000F8u; // 803148E8
  c->lr=0x803148F0u; f_80005FB4(c); // 803148EC
L_803148F0:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 803148F0
  c->lr=0x803148F8u; f_80321E04(c); // 803148F4
  c->r[3]=R16(c->r[31]+0x00000000u); // 803148F8
  c->lr=0x80314900u; f_80321D88(c); // 803148FC
  c->r[3]=c->r[27]|c->r[27]; // 80314900
  c->lr=0x80314908u; f_8031683C(c); // 80314904
  cmps(c,0,(int32_t)c->r[3],0); // 80314908
  c->r[5]=c->r[3]|c->r[3]; // 8031490C
  if (crb(c,2)) { goto L_80314A88; } // 80314910
  c->r[0]=0u+0x00000008u; // 80314914
  c->r[6]=0u+0x00000000u; // 80314918
  c->ctr=c->r[0]; // 8031491C
L_80314920:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 80314920
  c->r[4]=c->r[3]+c->r[0]; // 80314924
  c->r[0]=R8(c->r[4]+0x00000077u); // 80314928
  cmps(c,0,(int32_t)c->r[0],0); // 8031492C
  if (crb(c,2)) { goto L_80314A80; } // 80314930
  c->r[4]=c->r[5]+0x00000077u; // 80314934
  c->r[3]=c->r[31]+0x00000110u; // 80314938
  c->r[5]=0u+0x00000008u; // 8031493C
  c->lr=0x80314944u; f_80005FB4(c); // 80314940
  c->r[3]=0u+0x80570000u; // 80314944
  c->r[0]=0u+0xFFFFCCF9u; // 80314948
  c->r[3]=c->r[3]+0x000058F8u; // 8031494C
  c->r[5]=R16(c->r[3]+0x00000654u); // 80314950
  c->r[3]=R8(c->r[3]+0x00000636u); // 80314954
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 80314958
  cmpu(c,0,c->r[3],0x00000003u); // 8031495C
  c->r[30]=c->r[4]&c->r[0]; // 80314960
  if (crb(c,0)) { goto L_80314974; } // 80314964
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 80314968
  c->r[0]=c->r[4]|c->r[0]; // 8031496C
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 80314970
L_80314974:;
  c->r[3]=0u+0x80570000u; // 80314974
  c->r[3]=c->r[3]+0x000058F8u; // 80314978
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031497C
  cmpu(c,0,c->r[0],0x00000004u); // 80314980
  if (crb(c,0)) { goto L_803149A0; } // 80314984
  c->r[3]=0u+0x000D0000u; // 80314988
  c->r[4]=0u+0x80490000u; // 8031498C
  c->r[3]=c->r[3]+0x00000003u; // 80314990
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 80314994
  c->r[4]=c->r[4]+0xFFFFF868u; // 80314998
  c->lr=0x803149A0u; f_8030E200(c); // 8031499C
L_803149A0:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 803149A0
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 803149A4
  c->lr=0x803149ACu; f_803219FC(c); // 803149A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803149AC
  if (crb(c,2)) { goto L_803149B8; } // 803149B0
  W16(c->r[31]+0x00000002u,c->r[30]); // 803149B4
L_803149B8:;
  c->r[4]=0u+0x80570000u; // 803149B8
  c->r[4]=c->r[4]+0x000058F8u; // 803149BC
  c->r[0]=R16(c->r[4]+0x000004C4u); // 803149C0
  cmps(c,0,(int32_t)c->r[0],0); // 803149C4
  if (crb(c,2)) { goto L_803149D8; } // 803149C8
  c->r[3]=c->r[31]+0x00000008u; // 803149CC
  c->r[4]=c->r[4]+0x000004C4u; // 803149D0
  c->lr=0x803149D8u; f_80314F6C(c); // 803149D4
L_803149D8:;
  c->r[3]=0u+0x80570000u; // 803149D8
  c->r[29]=0u+0x00000000u; // 803149DC
  c->r[3]=c->r[3]+0x000058F8u; // 803149E0
  c->r[28]=R16(c->r[3]+0x000004C6u); // 803149E4
  c->r[30]=c->r[3]+0x00000034u; // 803149E8
L_803149EC:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803149EC
  cmps(c,0,(int32_t)c->r[0],0); // 803149F0
  if (crb(c,2)) { goto L_80314A14; } // 803149F4
  c->r[3]=c->r[30]+0x00000008u; // 803149F8
  c->r[4]=c->r[31]+0x00000008u; // 803149FC
  c->r[5]=0u+0x00000006u; // 80314A00
  c->lr=0x80314A08u; f_802E54DC(c); // 80314A04
  cmps(c,0,(int32_t)c->r[3],0); // 80314A08
  if (!crb(c,2)) { goto L_80314A14; } // 80314A0C
  goto L_80314A28; // 80314A10
L_80314A14:;
  c->r[29]=c->r[29]+0x00000001u; // 80314A14
  c->r[30]=c->r[30]+0x0000011Cu; // 80314A18
  cmpu(c,0,c->r[29],0x00000004u); // 80314A1C
  if (crb(c,0)) { IRQCHK(c); goto L_803149EC; } // 80314A20
  c->r[30]=0u+0x00000000u; // 80314A24
L_80314A28:;
  cmps(c,0,(int32_t)c->r[30],0); // 80314A28
  if (crb(c,2)) { goto L_80314A4C; } // 80314A2C
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 80314A30
  c->r[0]=R8(c->r[30]+0x0000011Au); // 80314A34
  cmps(c,0,(int32_t)c->r[0],0); // 80314A38
  if (!crb(c,2)) { goto L_80314A4C; } // 80314A3C
  c->r[3]=R16(c->r[30]+0x00000000u); // 80314A40
  c->r[4]=c->r[28]|c->r[28]; // 80314A44
  c->lr=0x80314A4Cu; f_80322EFC(c); // 80314A48
L_80314A4C:;
  c->r[3]=0u+0x80570000u; // 80314A4C
  c->r[3]=c->r[3]+0x000058F8u; // 80314A50
  c->r[12]=R32(c->r[3]+0x000004C8u); // 80314A54
  cmps(c,0,(int32_t)c->r[12],0); // 80314A58
  if (crb(c,2)) { goto L_80314AA0; } // 80314A5C
  c->r[3]=c->r[31]+0x00000008u; // 80314A60
  c->r[4]=c->r[31]+0x0000000Eu; // 80314A64
  c->r[5]=c->r[31]+0x00000011u; // 80314A68
  c->r[6]=c->r[31]+0x00000110u; // 80314A6C
  c->r[7]=0u+0x00000001u; // 80314A70
  c->ctr=c->r[12]; // 80314A74
  if (true) { c->lr=0x80314A7Cu; dispatch(c,c->ctr); } // 80314A78
  goto L_80314AA0; // 80314A7C
L_80314A80:;
  c->r[6]=c->r[6]+0x00000001u; // 80314A80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80314920; } // 80314A84
L_80314A88:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 80314A88
  c->lr=0x80314A90u; f_80321D0C(c); // 80314A8C
  goto L_80314AA0; // 80314A90
L_80314A94:;
  c->r[4]=c->r[4]+0x00000001u; // 80314A94
  c->r[31]=c->r[31]+0x0000011Cu; // 80314A98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80314884; } // 80314A9C
L_80314AA0:;
  c->r[11]=c->r[1]+0x00000030u; // 80314AA0
  c->lr=0x80314AA8u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80314AA4
  c->r[0]=R32(c->r[1]+0x00000034u); // 80314AA8
  c->lr=c->r[0]; // 80314AAC
  c->r[1]=c->r[1]+0x00000030u; // 80314AB0
  return; // 80314AB4
}

// btm_acl_removed
void f_80314AB8(Ctx* __restrict c) {
  trace_call(0x80314AB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314AB8
  c->r[0]=c->lr; // 80314ABC
  c->r[4]=0u+0x80570000u; // 80314AC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80314AC4
  c->r[4]=c->r[4]+0x000058F8u; // 80314AC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80314ACC
  c->r[31]=0u+0x00000000u; // 80314AD0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80314AD4
  c->r[30]=c->r[4]+0x00000034u; // 80314AD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80314ADC
  c->r[29]=c->r[3]|c->r[3]; // 80314AE0
L_80314AE4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 80314AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80314AE8
  if (crb(c,2)) { goto L_80314B0C; } // 80314AEC
  c->r[4]=c->r[29]|c->r[29]; // 80314AF0
  c->r[3]=c->r[30]+0x00000008u; // 80314AF4
  c->r[5]=0u+0x00000006u; // 80314AF8
  c->lr=0x80314B00u; f_802E54DC(c); // 80314AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80314B00
  if (!crb(c,2)) { goto L_80314B0C; } // 80314B04
  goto L_80314B20; // 80314B08
L_80314B0C:;
  c->r[31]=c->r[31]+0x00000001u; // 80314B0C
  c->r[30]=c->r[30]+0x0000011Cu; // 80314B10
  cmpu(c,0,c->r[31],0x00000004u); // 80314B14
  if (crb(c,0)) { IRQCHK(c); goto L_80314AE4; } // 80314B18
  c->r[30]=0u+0x00000000u; // 80314B1C
L_80314B20:;
  cmps(c,0,(int32_t)c->r[30],0); // 80314B20
  if (crb(c,2)) { goto L_80314B60; } // 80314B24
  c->r[0]=0u+0x00000000u; // 80314B28
  c->r[3]=0u+0x80570000u; // 80314B2C
  W8(c->r[30]+0x00000119u,c->r[0]); // 80314B30
  c->r[3]=c->r[3]+0x000058F8u; // 80314B34
  c->r[12]=R32(c->r[3]+0x000004C8u); // 80314B38
  cmps(c,0,(int32_t)c->r[12],0); // 80314B3C
  if (crb(c,2)) { goto L_80314B60; } // 80314B40
  c->r[3]=c->r[29]|c->r[29]; // 80314B44
  c->r[4]=0u+0x00000000u; // 80314B48
  c->r[5]=0u+0x00000000u; // 80314B4C
  c->r[6]=0u+0x00000000u; // 80314B50
  c->r[7]=0u+0x00000000u; // 80314B54
  c->ctr=c->r[12]; // 80314B58
  if (true) { c->lr=0x80314B60u; dispatch(c,c->ctr); } // 80314B5C
L_80314B60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80314B60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80314B64
  c->r[30]=R32(c->r[1]+0x00000018u); // 80314B68
  c->r[29]=R32(c->r[1]+0x00000014u); // 80314B6C
  c->lr=c->r[0]; // 80314B70
  c->r[1]=c->r[1]+0x00000020u; // 80314B74
  return; // 80314B78
}

// btm_acl_device_down
void f_80314B7C(Ctx* __restrict c) {
  trace_call(0x80314B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314B7C
  c->r[0]=c->lr; // 80314B80
  c->r[3]=0u+0x80570000u; // 80314B84
  W32(c->r[1]+0x00000014u,c->r[0]); // 80314B88
  c->r[3]=c->r[3]+0x000058F8u; // 80314B8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80314B90
  c->r[31]=c->r[3]+0x00000034u; // 80314B94
  W32(c->r[1]+0x00000008u,c->r[30]); // 80314B98
  c->r[30]=0u+0x00000000u; // 80314B9C
L_80314BA0:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 80314BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80314BA4
  if (crb(c,2)) { goto L_80314BB8; } // 80314BA8
  c->r[3]=R16(c->r[31]+0x00000000u); // 80314BAC
  c->r[4]=0u+0x00000003u; // 80314BB0
  c->lr=0x80314BB8u; f_80328FF0(c); // 80314BB4
L_80314BB8:;
  c->r[30]=c->r[30]+0x00000001u; // 80314BB8
  c->r[31]=c->r[31]+0x0000011Cu; // 80314BBC
  cmpu(c,0,c->r[30],0x00000004u); // 80314BC0
  if (crb(c,0)) { IRQCHK(c); goto L_80314BA0; } // 80314BC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80314BC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80314BCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80314BD0
  c->lr=c->r[0]; // 80314BD4
  c->r[1]=c->r[1]+0x00000010u; // 80314BD8
  return; // 80314BDC
}

// BTM_SwitchRole
void f_80314BE0(Ctx* __restrict c) {
  trace_call(0x80314BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314BE0
  c->r[0]=c->lr; // 80314BE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80314BE8
  c->r[11]=c->r[1]+0x00000030u; // 80314BEC
  c->lr=0x80314BF4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80314BF0
  c->r[6]=0u+0x80570000u; // 80314BF4
  c->r[28]=c->r[3]|c->r[3]; // 80314BF8
  c->r[6]=c->r[6]+0x000058F8u; // 80314BFC
  c->r[29]=c->r[4]|c->r[4]; // 80314C00
  c->r[0]=R8(c->r[6]+0x00000640u); // 80314C04
  c->r[30]=c->r[5]|c->r[5]; // 80314C08
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80314C0C
  if (!crb(c,2)) { goto L_80314C1C; } // 80314C10
  c->r[3]=0u+0x00000004u; // 80314C14
  goto L_80314DE4; // 80314C18
L_80314C1C:;
  c->r[31]=c->r[6]+0x00000034u; // 80314C1C
  c->r[27]=0u+0x00000000u; // 80314C20
L_80314C24:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 80314C24
  cmps(c,0,(int32_t)c->r[0],0); // 80314C28
  if (crb(c,2)) { goto L_80314C4C; } // 80314C2C
  c->r[4]=c->r[28]|c->r[28]; // 80314C30
  c->r[3]=c->r[31]+0x00000008u; // 80314C34
  c->r[5]=0u+0x00000006u; // 80314C38
  c->lr=0x80314C40u; f_802E54DC(c); // 80314C3C
  cmps(c,0,(int32_t)c->r[3],0); // 80314C40
  if (!crb(c,2)) { goto L_80314C4C; } // 80314C44
  goto L_80314C60; // 80314C48
L_80314C4C:;
  c->r[27]=c->r[27]+0x00000001u; // 80314C4C
  c->r[31]=c->r[31]+0x0000011Cu; // 80314C50
  cmpu(c,0,c->r[27],0x00000004u); // 80314C54
  if (crb(c,0)) { IRQCHK(c); goto L_80314C24; } // 80314C58
  c->r[31]=0u+0x00000000u; // 80314C5C
L_80314C60:;
  cmps(c,0,(int32_t)c->r[31],0); // 80314C60
  if (!crb(c,2)) { goto L_80314C70; } // 80314C64
  c->r[3]=0u+0x00000007u; // 80314C68
  goto L_80314DE4; // 80314C6C
L_80314C70:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 80314C70
  cmpu(c,0,c->r[0],c->r[29]); // 80314C74
  if (!crb(c,2)) { goto L_80314C84; } // 80314C78
  c->r[3]=0u+0x00000000u; // 80314C7C
  goto L_80314DE4; // 80314C80
L_80314C84:;
  c->r[3]=c->r[28]|c->r[28]; // 80314C84
  c->lr=0x80314C8Cu; f_8031BB08(c); // 80314C88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80314C8C
  cmpu(c,0,c->r[0],0x00000001u); // 80314C90
  if (!crb(c,2)) { goto L_80314CA0; } // 80314C94
  c->r[3]=0u+0x00000003u; // 80314C98
  goto L_80314DE4; // 80314C9C
L_80314CA0:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 80314CA0
  cmps(c,0,(int32_t)c->r[0],0); // 80314CA4
  if (crb(c,2)) { goto L_80314CDC; } // 80314CA8
  c->r[3]=0u+0x80570000u; // 80314CAC
  c->r[3]=c->r[3]+0x000058F8u; // 80314CB0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80314CB4
  cmpu(c,0,c->r[0],0x00000005u); // 80314CB8
  if (crb(c,0)) { goto L_80314CD4; } // 80314CBC
  c->r[3]=0u+0x000D0000u; // 80314CC0
  c->r[4]=0u+0x80490000u; // 80314CC4
  c->r[3]=c->r[3]+0x00000004u; // 80314CC8
  c->r[4]=c->r[4]+0xFFFFF888u; // 80314CCC
  c->lr=0x80314CD4u; f_8030E1E8(c); // 80314CD0
L_80314CD4:;
  c->r[3]=0u+0x00000002u; // 80314CD4
  goto L_80314DE4; // 80314CD8
L_80314CDC:;
  c->r[3]=0u+0x80570000u; // 80314CDC
  c->r[4]=0u+0x00000000u; // 80314CE0
  c->r[3]=c->r[3]+0x000058F8u; // 80314CE4
  c->r[5]=0u+0x00000008u; // 80314CE8
  c->r[3]=c->r[3]+0x00000624u; // 80314CEC
  c->lr=0x80314CF4u; f_800060B8(c); // 80314CF0
  c->r[3]=c->r[31]+0x00000008u; // 80314CF4
  c->r[4]=c->r[1]+0x00000008u; // 80314CF8
  c->lr=0x80314D00u; f_8031A350(c); // 80314CFC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80314D00
  if (crb(c,2)) { goto L_80314D0C; } // 80314D04
  goto L_80314DE4; // 80314D08
L_80314D0C:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 80314D0C
  c->r[0]=c->r[3]+0x000000FEu; // 80314D10
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80314D14
  cmpu(c,0,c->r[0],0x00000001u); // 80314D18
  if (crb(c,1)) { goto L_80314D58; } // 80314D1C
  c->r[0]=0u+0x00000000u; // 80314D20
  c->r[4]=c->r[31]+0x00000008u; // 80314D24
  W8(c->r[1]+0x00000014u,c->r[0]); // 80314D28
  c->r[5]=c->r[1]+0x0000000Cu; // 80314D2C
  c->r[3]=0u+0x00000080u; // 80314D30
  c->lr=0x80314D38u; f_8031A180(c); // 80314D34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80314D38
  cmpu(c,0,c->r[0],0x00000001u); // 80314D3C
  if (crb(c,2)) { goto L_80314D4C; } // 80314D40
  c->r[3]=0u+0x00000006u; // 80314D44
  goto L_80314DE4; // 80314D48
L_80314D4C:;
  c->r[0]=0u+0x00000001u; // 80314D4C
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 80314D50
  goto L_80314DC0; // 80314D54
L_80314D58:;
  c->r[3]=c->r[28]|c->r[28]; // 80314D58
  c->lr=0x80314D60u; f_803168F4(c); // 80314D5C
  cmps(c,0,(int32_t)c->r[3],0); // 80314D60
  if (crb(c,2)) { goto L_80314D9C; } // 80314D64
  c->r[0]=R8(c->r[3]+0x00000076u); // 80314D68
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80314D6C
  if (crb(c,2)) { goto L_80314D9C; } // 80314D70
  c->r[3]=R16(c->r[31]+0x00000000u); // 80314D74
  c->r[4]=0u+0x00000000u; // 80314D78
  c->lr=0x80314D80u; f_80321B08(c); // 80314D7C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80314D80
  if (!crb(c,2)) { goto L_80314D90; } // 80314D84
  c->r[3]=0u+0x00000003u; // 80314D88
  goto L_80314DE4; // 80314D8C
L_80314D90:;
  c->r[0]=0u+0x00000002u; // 80314D90
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 80314D94
  goto L_80314DC0; // 80314D98
L_80314D9C:;
  c->r[3]=c->r[28]|c->r[28]; // 80314D9C
  c->r[4]=c->r[29]|c->r[29]; // 80314DA0
  c->lr=0x80314DA8u; f_80322400(c); // 80314DA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80314DA8
  if (!crb(c,2)) { goto L_80314DB8; } // 80314DAC
  c->r[3]=0u+0x00000003u; // 80314DB0
  goto L_80314DE4; // 80314DB4
L_80314DB8:;
  c->r[0]=0u+0x00000005u; // 80314DB8
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 80314DBC
L_80314DC0:;
  c->r[31]=0u+0x80570000u; // 80314DC0
  c->r[4]=c->r[28]|c->r[28]; // 80314DC4
  c->r[31]=c->r[31]+0x000058F8u; // 80314DC8
  c->r[5]=0u+0x00000006u; // 80314DCC
  c->r[3]=c->r[31]+0x00000626u; // 80314DD0
  c->lr=0x80314DD8u; f_80005FB4(c); // 80314DD4
  W8(c->r[31]+0x00000625u,c->r[29]); // 80314DD8
  c->r[3]=0u+0x00000001u; // 80314DDC
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 80314DE0
L_80314DE4:;
  c->r[11]=c->r[1]+0x00000030u; // 80314DE4
  c->lr=0x80314DECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80314DE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80314DEC
  c->lr=c->r[0]; // 80314DF0
  c->r[1]=c->r[1]+0x00000030u; // 80314DF4
  return; // 80314DF8
}

// btm_acl_encrypt_change
void f_80314DFC(Ctx* __restrict c) {
  trace_call(0x80314DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314DFC
  c->r[0]=c->lr; // 80314E00
  c->r[4]=0u+0x80570000u; // 80314E04
  c->r[6]=0u+0x00000000u; // 80314E08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80314E0C
  c->r[4]=c->r[4]+0x000058F8u; // 80314E10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80314E14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80314E18
  W32(c->r[1]+0x00000014u,c->r[29]); // 80314E1C
  c->r[0]=R8(c->r[4]+0x0000014Du); // 80314E20
  cmps(c,0,(int32_t)c->r[0],0); // 80314E24
  if (crb(c,2)) { goto L_80314E38; } // 80314E28
  c->r[0]=R16(c->r[4]+0x00000034u); // 80314E2C
  cmpu(c,0,c->r[0],c->r[3]); // 80314E30
  if (crb(c,2)) { goto L_80314E90; } // 80314E34
L_80314E38:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 80314E38
  c->r[6]=0u+0x00000001u; // 80314E3C
  cmps(c,0,(int32_t)c->r[0],0); // 80314E40
  if (crb(c,2)) { goto L_80314E54; } // 80314E44
  c->r[0]=R16(c->r[4]+0x00000150u); // 80314E48
  cmpu(c,0,c->r[0],c->r[3]); // 80314E4C
  if (crb(c,2)) { goto L_80314E90; } // 80314E50
L_80314E54:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 80314E54
  c->r[6]=0u+0x00000002u; // 80314E58
  cmps(c,0,(int32_t)c->r[0],0); // 80314E5C
  if (crb(c,2)) { goto L_80314E70; } // 80314E60
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 80314E64
  cmpu(c,0,c->r[0],c->r[3]); // 80314E68
  if (crb(c,2)) { goto L_80314E90; } // 80314E6C
L_80314E70:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 80314E70
  c->r[6]=0u+0x00000003u; // 80314E74
  cmps(c,0,(int32_t)c->r[0],0); // 80314E78
  if (crb(c,2)) { goto L_80314E8C; } // 80314E7C
  c->r[0]=R16(c->r[4]+0x00000388u); // 80314E80
  cmpu(c,0,c->r[0],c->r[3]); // 80314E84
  if (crb(c,2)) { goto L_80314E90; } // 80314E88
L_80314E8C:;
  c->r[6]=0u+0x00000004u; // 80314E8C
L_80314E90:;
  cmpu(c,0,c->r[6],0x00000004u); // 80314E90
  if (!crb(c,0)) { goto L_80314F50; } // 80314E94
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 80314E98
  c->r[30]=0u+0x80570000u; // 80314E9C
  c->r[30]=c->r[30]+0x000058F8u; // 80314EA0
  c->r[29]=c->r[30]+c->r[0]; // 80314EA4
  goto L_80314EB0; // 80314EA8
  goto L_80314F50; // 80314EAC
L_80314EB0:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 80314EB0
  cmpu(c,0,c->r[0],0x00000002u); // 80314EB4
  if (!crb(c,2)) { goto L_80314F24; } // 80314EB8
  cmps(c,0,(int32_t)c->r[5],0); // 80314EBC
  if (crb(c,2)) { goto L_80314ED0; } // 80314EC0
  c->r[0]=0u+0x00000000u; // 80314EC4
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 80314EC8
  goto L_80314ED8; // 80314ECC
L_80314ED0:;
  c->r[0]=0u+0x00000003u; // 80314ED0
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 80314ED4
L_80314ED8:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 80314ED8
  c->r[3]=c->r[29]+0x0000003Cu; // 80314EDC
  c->r[0]=cntlz(c->r[0]); // 80314EE0
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 80314EE4
  c->lr=0x80314EECu; f_80322400(c); // 80314EE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80314EEC
  if (!crb(c,2)) { goto L_80314F50; } // 80314EF0
  c->r[30]=0u+0x00000000u; // 80314EF4
  c->r[31]=0u+0x80570000u; // 80314EF8
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 80314EFC
  c->r[31]=c->r[31]+0x000058F8u; // 80314F00
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 80314F04
  cmps(c,0,(int32_t)c->r[12],0); // 80314F08
  if (crb(c,2)) { goto L_80314F50; } // 80314F0C
  c->r[3]=c->r[31]+0x00000624u; // 80314F10
  c->ctr=c->r[12]; // 80314F14
  if (true) { c->lr=0x80314F1Cu; dispatch(c,c->ctr); } // 80314F18
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 80314F1C
  goto L_80314F50; // 80314F20
L_80314F24:;
  cmpu(c,0,c->r[0],0x00000004u); // 80314F24
  if (!crb(c,2)) { goto L_80314F50; } // 80314F28
  c->r[31]=0u+0x00000000u; // 80314F2C
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 80314F30
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 80314F34
  cmps(c,0,(int32_t)c->r[12],0); // 80314F38
  if (crb(c,2)) { goto L_80314F50; } // 80314F3C
  c->r[3]=c->r[30]+0x00000624u; // 80314F40
  c->ctr=c->r[12]; // 80314F44
  if (true) { c->lr=0x80314F4Cu; dispatch(c,c->ctr); } // 80314F48
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 80314F4C
L_80314F50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80314F50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80314F54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80314F58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80314F5C
  c->lr=c->r[0]; // 80314F60
  c->r[1]=c->r[1]+0x00000020u; // 80314F64
  return; // 80314F68
}

// BTM_SetLinkPolicy
void f_80314F6C(Ctx* __restrict c) {
  trace_call(0x80314F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80314F6C
  c->r[0]=c->lr; // 80314F70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80314F74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80314F78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80314F7C
  c->r[30]=0u+0x80490000u; // 80314F80
  c->r[30]=c->r[30]+0xFFFFF828u; // 80314F84
  W32(c->r[1]+0x00000014u,c->r[29]); // 80314F88
  c->r[29]=c->r[4]|c->r[4]; // 80314F8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80314F90
  c->r[28]=c->r[3]|c->r[3]; // 80314F94
  c->lr=0x80314F9Cu; f_80317C38(c); // 80314F98
  c->r[4]=R16(c->r[29]+0x00000000u); // 80314F9C
  c->r[31]=c->r[3]|c->r[3]; // 80314FA0
  cmps(c,0,(int32_t)c->r[4],0); // 80314FA4
  if (crb(c,2)) { goto L_803150C4; } // 80314FA8
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 80314FAC
  if (crb(c,2)) { goto L_80314FEC; } // 80314FB0
  c->r[0]=R8(c->r[3]+0x00000000u); // 80314FB4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80314FB8
  if (!crb(c,2)) { goto L_80314FEC; } // 80314FBC
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 80314FC0
  c->r[3]=0u+0x80570000u; // 80314FC4
  W16(c->r[29]+0x00000000u,c->r[5]); // 80314FC8
  c->r[3]=c->r[3]+0x000058F8u; // 80314FCC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80314FD0
  cmpu(c,0,c->r[0],0x00000003u); // 80314FD4
  if (crb(c,0)) { goto L_80314FEC; } // 80314FD8
  c->r[3]=0u+0x000D0000u; // 80314FDC
  c->r[4]=c->r[30]+0x000000BCu; // 80314FE0
  c->r[3]=c->r[3]+0x00000002u; // 80314FE4
  c->lr=0x80314FECu; f_8030E200(c); // 80314FE8
L_80314FEC:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 80314FEC
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 80314FF0
  if (crb(c,2)) { goto L_80315034; } // 80314FF4
  c->r[0]=R8(c->r[31]+0x00000000u); // 80314FF8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80314FFC
  if (!crb(c,2)) { goto L_80315034; } // 80315000
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 80315004
  c->r[3]=0u+0x80570000u; // 80315008
  W16(c->r[29]+0x00000000u,c->r[5]); // 8031500C
  c->r[3]=c->r[3]+0x000058F8u; // 80315010
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80315014
  cmpu(c,0,c->r[0],0x00000003u); // 80315018
  if (crb(c,0)) { goto L_80315034; } // 8031501C
  c->r[3]=0u+0x000D0000u; // 80315020
  c->r[4]=c->r[30]+0x000000F8u; // 80315024
  c->r[3]=c->r[3]+0x00000002u; // 80315028
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 8031502C
  c->lr=0x80315034u; f_8030E200(c); // 80315030
L_80315034:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 80315034
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80315038
  if (crb(c,2)) { goto L_8031507C; } // 8031503C
  c->r[0]=R8(c->r[31]+0x00000000u); // 80315040
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80315044
  if (!crb(c,2)) { goto L_8031507C; } // 80315048
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 8031504C
  c->r[3]=0u+0x80570000u; // 80315050
  W16(c->r[29]+0x00000000u,c->r[5]); // 80315054
  c->r[3]=c->r[3]+0x000058F8u; // 80315058
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031505C
  cmpu(c,0,c->r[0],0x00000003u); // 80315060
  if (crb(c,0)) { goto L_8031507C; } // 80315064
  c->r[3]=0u+0x000D0000u; // 80315068
  c->r[4]=c->r[30]+0x00000130u; // 8031506C
  c->r[3]=c->r[3]+0x00000002u; // 80315070
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 80315074
  c->lr=0x8031507Cu; f_8030E200(c); // 80315078
L_8031507C:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 8031507C
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80315080
  if (crb(c,2)) { goto L_803150C4; } // 80315084
  c->r[0]=R8(c->r[31]+0x00000001u); // 80315088
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8031508C
  if (!crb(c,2)) { goto L_803150C4; } // 80315090
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 80315094
  c->r[3]=0u+0x80570000u; // 80315098
  W16(c->r[29]+0x00000000u,c->r[5]); // 8031509C
  c->r[3]=c->r[3]+0x000058F8u; // 803150A0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803150A4
  cmpu(c,0,c->r[0],0x00000003u); // 803150A8
  if (crb(c,0)) { goto L_803150C4; } // 803150AC
  c->r[3]=0u+0x000D0000u; // 803150B0
  c->r[4]=c->r[30]+0x00000170u; // 803150B4
  c->r[3]=c->r[3]+0x00000002u; // 803150B8
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 803150BC
  c->lr=0x803150C4u; f_8030E200(c); // 803150C0
L_803150C4:;
  c->r[3]=0u+0x80570000u; // 803150C4
  c->r[30]=0u+0x00000000u; // 803150C8
  c->r[3]=c->r[3]+0x000058F8u; // 803150CC
  c->r[31]=c->r[3]+0x00000034u; // 803150D0
L_803150D4:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 803150D4
  cmps(c,0,(int32_t)c->r[0],0); // 803150D8
  if (crb(c,2)) { goto L_803150FC; } // 803150DC
  c->r[4]=c->r[28]|c->r[28]; // 803150E0
  c->r[3]=c->r[31]+0x00000008u; // 803150E4
  c->r[5]=0u+0x00000006u; // 803150E8
  c->lr=0x803150F0u; f_802E54DC(c); // 803150EC
  cmps(c,0,(int32_t)c->r[3],0); // 803150F0
  if (!crb(c,2)) { goto L_803150FC; } // 803150F4
  goto L_80315110; // 803150F8
L_803150FC:;
  c->r[30]=c->r[30]+0x00000001u; // 803150FC
  c->r[31]=c->r[31]+0x0000011Cu; // 80315100
  cmpu(c,0,c->r[30],0x00000004u); // 80315104
  if (crb(c,0)) { IRQCHK(c); goto L_803150D4; } // 80315108
  c->r[31]=0u+0x00000000u; // 8031510C
L_80315110:;
  cmps(c,0,(int32_t)c->r[31],0); // 80315110
  if (crb(c,2)) { goto L_80315138; } // 80315114
  c->r[3]=R16(c->r[31]+0x00000000u); // 80315118
  c->r[4]=R16(c->r[29]+0x00000000u); // 8031511C
  c->lr=0x80315124u; f_803224B0(c); // 80315120
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80315124
  c->r[3]=0u+0x00000003u; // 80315128
  if (crb(c,2)) { goto L_8031513C; } // 8031512C
  c->r[3]=0u+0x00000001u; // 80315130
  goto L_8031513C; // 80315134
L_80315138:;
  c->r[3]=0u+0x00000007u; // 80315138
L_8031513C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031513C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80315140
  c->r[30]=R32(c->r[1]+0x00000018u); // 80315144
  c->r[29]=R32(c->r[1]+0x00000014u); // 80315148
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031514C
  c->lr=c->r[0]; // 80315150
  c->r[1]=c->r[1]+0x00000020u; // 80315154
  return; // 80315158
}

// BTM_SetDefaultLinkPolicy
void f_8031515C(Ctx* __restrict c) {
  trace_call(0x8031515Cu);
  c->r[4]=0u+0x80570000u; // 8031515C
  c->r[4]=c->r[4]+0x000058F8u; // 80315160
  W16(c->r[4]+0x000004C4u,c->r[3]); // 80315164
  return; // 80315168
}

// btm_read_link_policy_complete
void f_8031516C(Ctx* __restrict c) {
  trace_call(0x8031516Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031516C
  c->r[0]=c->lr; // 80315170
  W32(c->r[1]+0x00000034u,c->r[0]); // 80315174
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80315178
  c->r[31]=0u+0x80570000u; // 8031517C
  c->r[31]=c->r[31]+0x000058F8u; // 80315180
  W32(c->r[1]+0x00000028u,c->r[30]); // 80315184
  W32(c->r[1]+0x00000024u,c->r[29]); // 80315188
  c->r[29]=c->r[31]+0x00000034u; // 8031518C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80315190
  c->r[28]=c->r[3]|c->r[3]; // 80315194
  c->r[3]=c->r[31]+0x000005ACu; // 80315198
  c->r[30]=R32(c->r[31]+0x000005C4u); // 8031519C
  c->lr=0x803151A4u; f_8030E824(c); // 803151A0
  c->r[3]=0u+0x00000000u; // 803151A4
  cmps(c,0,(int32_t)c->r[30],0); // 803151A8
  W32(c->r[31]+0x000005C4u,c->r[3]); // 803151AC
  if (crb(c,2)) { goto L_80315250; } // 803151B0
  c->r[0]=R8(c->r[28]+0x00000000u); // 803151B4
  cmps(c,0,(int32_t)c->r[0],0); // 803151B8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803151BC
  if (!crb(c,2)) { goto L_80315238; } // 803151C0
  W8(c->r[1]+0x00000008u,c->r[3]); // 803151C4
  c->r[0]=0u+0x00000004u; // 803151C8
  c->r[7]=0u+0x00000000u; // 803151CC
  c->r[4]=R8(c->r[28]+0x00000002u); // 803151D0
  c->r[3]=R8(c->r[28]+0x00000004u); // 803151D4
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 803151D8
  c->r[6]=R8(c->r[28]+0x00000001u); // 803151DC
  c->r[4]=R8(c->r[28]+0x00000003u); // 803151E0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 803151E4
  c->r[5]=c->r[6]+c->r[5]; // 803151E8
  c->r[3]=c->r[4]+c->r[3]; // 803151EC
  W16(c->r[1]+0x00000010u,c->r[3]); // 803151F0
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 803151F4
  c->ctr=c->r[0]; // 803151F8
L_803151FC:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803151FC
  cmps(c,0,(int32_t)c->r[0],0); // 80315200
  if (crb(c,2)) { goto L_80315228; } // 80315204
  c->r[0]=R16(c->r[29]+0x00000000u); // 80315208
  cmpu(c,0,c->r[3],c->r[0]); // 8031520C
  if (!crb(c,2)) { goto L_80315228; } // 80315210
  c->r[3]=c->r[1]+0x0000000Au; // 80315214
  c->r[4]=c->r[29]+0x00000008u; // 80315218
  c->r[5]=0u+0x00000006u; // 8031521C
  c->lr=0x80315224u; f_80005FB4(c); // 80315220
  goto L_80315240; // 80315224
L_80315228:;
  c->r[7]=c->r[7]+0x00000001u; // 80315228
  c->r[29]=c->r[29]+0x0000011Cu; // 8031522C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803151FC; } // 80315230
  goto L_80315240; // 80315234
L_80315238:;
  c->r[0]=0u+0x0000000Au; // 80315238
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031523C
L_80315240:;
  c->r[12]=c->r[30]|c->r[30]; // 80315240
  c->r[3]=c->r[1]+0x00000008u; // 80315244
  c->ctr=c->r[12]; // 80315248
  if (true) { c->lr=0x80315250u; dispatch(c,c->ctr); } // 8031524C
L_80315250:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80315250
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80315254
  c->r[30]=R32(c->r[1]+0x00000028u); // 80315258
  c->r[29]=R32(c->r[1]+0x00000024u); // 8031525C
  c->r[28]=R32(c->r[1]+0x00000020u); // 80315260
  c->lr=c->r[0]; // 80315264
  c->r[1]=c->r[1]+0x00000030u; // 80315268
  return; // 8031526C
}

// btm_read_remote_version_complete
void f_80315270(Ctx* __restrict c) {
  trace_call(0x80315270u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 80315270
  c->r[4]=0u+0x80570000u; // 80315274
  c->r[4]=c->r[4]+0x000058F8u; // 80315278
  cmps(c,0,(int32_t)c->r[0],0); // 8031527C
  c->r[6]=c->r[4]+0x00000034u; // 80315280
  if (!crb(c,2)) return; // 80315284
  c->r[4]=R8(c->r[3]+0x00000002u); // 80315288
  c->r[0]=0u+0x00000004u; // 8031528C
  c->r[5]=R8(c->r[3]+0x00000001u); // 80315290
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 80315294
  c->r[4]=c->r[5]+c->r[4]; // 80315298
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8031529C
  c->ctr=c->r[0]; // 803152A0
L_803152A4:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 803152A4
  cmps(c,0,(int32_t)c->r[0],0); // 803152A8
  if (crb(c,2)) { goto L_803152F0; } // 803152AC
  c->r[0]=R16(c->r[6]+0x00000000u); // 803152B0
  cmpu(c,0,c->r[0],c->r[4]); // 803152B4
  if (!crb(c,2)) { goto L_803152F0; } // 803152B8
  c->r[0]=R8(c->r[3]+0x00000003u); // 803152BC
  W8(c->r[6]+0x00000118u,c->r[0]); // 803152C0
  c->r[0]=R8(c->r[3]+0x00000005u); // 803152C4
  c->r[4]=R8(c->r[3]+0x00000004u); // 803152C8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803152CC
  c->r[0]=c->r[4]+c->r[0]; // 803152D0
  W16(c->r[6]+0x0000010Au,c->r[0]); // 803152D4
  c->r[0]=R8(c->r[3]+0x00000007u); // 803152D8
  c->r[3]=R8(c->r[3]+0x00000006u); // 803152DC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803152E0
  c->r[0]=c->r[3]+c->r[0]; // 803152E4
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 803152E8
  return; // 803152EC
L_803152F0:;
  c->r[6]=c->r[6]+0x0000011Cu; // 803152F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803152A4; } // 803152F4
  return; // 803152F8
}

// btm_read_remote_features_complete
void f_803152FC(Ctx* __restrict c) {
  trace_call(0x803152FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803152FC
  c->r[0]=c->lr; // 80315300
  c->r[4]=0u+0x80570000u; // 80315304
  W32(c->r[1]+0x00000024u,c->r[0]); // 80315308
  c->r[4]=c->r[4]+0x000058F8u; // 8031530C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80315310
  c->r[31]=c->r[4]+0x00000034u; // 80315314
  W32(c->r[1]+0x00000018u,c->r[30]); // 80315318
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031531C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80315320
  c->r[0]=R8(c->r[3]+0x00000000u); // 80315324
  cmps(c,0,(int32_t)c->r[0],0); // 80315328
  if (!crb(c,2)) { goto L_80315508; } // 8031532C
  c->r[4]=R8(c->r[3]+0x00000002u); // 80315330
  c->r[0]=0u+0x00000004u; // 80315334
  c->r[5]=R8(c->r[3]+0x00000001u); // 80315338
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 8031533C
  c->r[4]=c->r[5]+c->r[4]; // 80315340
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 80315344
  c->ctr=c->r[0]; // 80315348
L_8031534C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 8031534C
  cmps(c,0,(int32_t)c->r[0],0); // 80315350
  if (crb(c,2)) { goto L_80315500; } // 80315354
  c->r[0]=R16(c->r[31]+0x00000000u); // 80315358
  cmpu(c,0,c->r[0],c->r[4]); // 8031535C
  if (!crb(c,2)) { goto L_80315500; } // 80315360
  c->r[0]=R8(c->r[3]+0x00000003u); // 80315364
  W8(c->r[31]+0x00000110u,c->r[0]); // 80315368
  c->r[0]=R8(c->r[3]+0x00000004u); // 8031536C
  W8(c->r[31]+0x00000111u,c->r[0]); // 80315370
  c->r[0]=R8(c->r[3]+0x00000005u); // 80315374
  W8(c->r[31]+0x00000112u,c->r[0]); // 80315378
  c->r[0]=R8(c->r[3]+0x00000006u); // 8031537C
  W8(c->r[31]+0x00000113u,c->r[0]); // 80315380
  c->r[0]=R8(c->r[3]+0x00000007u); // 80315384
  W8(c->r[31]+0x00000114u,c->r[0]); // 80315388
  c->r[0]=R8(c->r[3]+0x00000008u); // 8031538C
  W8(c->r[31]+0x00000115u,c->r[0]); // 80315390
  c->r[0]=R8(c->r[3]+0x00000009u); // 80315394
  W8(c->r[31]+0x00000116u,c->r[0]); // 80315398
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8031539C
  c->r[3]=c->r[4]|c->r[4]; // 803153A0
  W8(c->r[31]+0x00000117u,c->r[0]); // 803153A4
  c->lr=0x803153ACu; f_8031683C(c); // 803153A8
  cmps(c,0,(int32_t)c->r[3],0); // 803153AC
  if (crb(c,2)) { goto L_803153C4; } // 803153B0
  c->r[4]=c->r[31]+0x00000110u; // 803153B4
  c->r[5]=0u+0x00000008u; // 803153B8
  c->r[3]=c->r[3]+0x00000077u; // 803153BC
  c->lr=0x803153C4u; f_80005FB4(c); // 803153C0
L_803153C4:;
  c->r[3]=0u+0x80570000u; // 803153C4
  c->r[0]=0u+0xFFFFCCF9u; // 803153C8
  c->r[3]=c->r[3]+0x000058F8u; // 803153CC
  c->r[5]=R16(c->r[3]+0x00000654u); // 803153D0
  c->r[3]=R8(c->r[3]+0x00000636u); // 803153D4
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 803153D8
  cmpu(c,0,c->r[3],0x00000003u); // 803153DC
  c->r[30]=c->r[4]&c->r[0]; // 803153E0
  if (crb(c,0)) { goto L_803153F4; } // 803153E4
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 803153E8
  c->r[0]=c->r[4]|c->r[0]; // 803153EC
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 803153F0
L_803153F4:;
  c->r[3]=0u+0x80570000u; // 803153F4
  c->r[3]=c->r[3]+0x000058F8u; // 803153F8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 803153FC
  cmpu(c,0,c->r[0],0x00000004u); // 80315400
  if (crb(c,0)) { goto L_80315420; } // 80315404
  c->r[3]=0u+0x000D0000u; // 80315408
  c->r[4]=0u+0x80490000u; // 8031540C
  c->r[3]=c->r[3]+0x00000003u; // 80315410
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 80315414
  c->r[4]=c->r[4]+0xFFFFF868u; // 80315418
  c->lr=0x80315420u; f_8030E200(c); // 8031541C
L_80315420:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 80315420
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 80315424
  c->lr=0x8031542Cu; f_803219FC(c); // 80315428
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031542C
  if (crb(c,2)) { goto L_80315438; } // 80315430
  W16(c->r[31]+0x00000002u,c->r[30]); // 80315434
L_80315438:;
  c->r[4]=0u+0x80570000u; // 80315438
  c->r[4]=c->r[4]+0x000058F8u; // 8031543C
  c->r[0]=R16(c->r[4]+0x000004C4u); // 80315440
  cmps(c,0,(int32_t)c->r[0],0); // 80315444
  if (crb(c,2)) { goto L_80315458; } // 80315448
  c->r[3]=c->r[31]+0x00000008u; // 8031544C
  c->r[4]=c->r[4]+0x000004C4u; // 80315450
  c->lr=0x80315458u; f_80314F6C(c); // 80315454
L_80315458:;
  c->r[3]=0u+0x80570000u; // 80315458
  c->r[30]=0u+0x00000000u; // 8031545C
  c->r[3]=c->r[3]+0x000058F8u; // 80315460
  c->r[28]=R16(c->r[3]+0x000004C6u); // 80315464
  c->r[29]=c->r[3]+0x00000034u; // 80315468
L_8031546C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 8031546C
  cmps(c,0,(int32_t)c->r[0],0); // 80315470
  if (crb(c,2)) { goto L_80315494; } // 80315474
  c->r[3]=c->r[29]+0x00000008u; // 80315478
  c->r[4]=c->r[31]+0x00000008u; // 8031547C
  c->r[5]=0u+0x00000006u; // 80315480
  c->lr=0x80315488u; f_802E54DC(c); // 80315484
  cmps(c,0,(int32_t)c->r[3],0); // 80315488
  if (!crb(c,2)) { goto L_80315494; } // 8031548C
  goto L_803154A8; // 80315490
L_80315494:;
  c->r[30]=c->r[30]+0x00000001u; // 80315494
  c->r[29]=c->r[29]+0x0000011Cu; // 80315498
  cmpu(c,0,c->r[30],0x00000004u); // 8031549C
  if (crb(c,0)) { IRQCHK(c); goto L_8031546C; } // 803154A0
  c->r[29]=0u+0x00000000u; // 803154A4
L_803154A8:;
  cmps(c,0,(int32_t)c->r[29],0); // 803154A8
  if (crb(c,2)) { goto L_803154CC; } // 803154AC
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 803154B0
  c->r[0]=R8(c->r[29]+0x0000011Au); // 803154B4
  cmps(c,0,(int32_t)c->r[0],0); // 803154B8
  if (!crb(c,2)) { goto L_803154CC; } // 803154BC
  c->r[3]=R16(c->r[29]+0x00000000u); // 803154C0
  c->r[4]=c->r[28]|c->r[28]; // 803154C4
  c->lr=0x803154CCu; f_80322EFC(c); // 803154C8
L_803154CC:;
  c->r[3]=0u+0x80570000u; // 803154CC
  c->r[3]=c->r[3]+0x000058F8u; // 803154D0
  c->r[12]=R32(c->r[3]+0x000004C8u); // 803154D4
  cmps(c,0,(int32_t)c->r[12],0); // 803154D8
  if (crb(c,2)) { goto L_80315508; } // 803154DC
  c->r[3]=c->r[31]+0x00000008u; // 803154E0
  c->r[4]=c->r[31]+0x0000000Eu; // 803154E4
  c->r[5]=c->r[31]+0x00000011u; // 803154E8
  c->r[6]=c->r[31]+0x00000110u; // 803154EC
  c->r[7]=0u+0x00000001u; // 803154F0
  c->ctr=c->r[12]; // 803154F4
  if (true) { c->lr=0x803154FCu; dispatch(c,c->ctr); } // 803154F8
  goto L_80315508; // 803154FC
L_80315500:;
  c->r[31]=c->r[31]+0x0000011Cu; // 80315500
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031534C; } // 80315504
L_80315508:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80315508
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031550C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80315510
  c->r[29]=R32(c->r[1]+0x00000014u); // 80315514
  c->r[28]=R32(c->r[1]+0x00000010u); // 80315518
  c->lr=c->r[0]; // 8031551C
  c->r[1]=c->r[1]+0x00000020u; // 80315520
  return; // 80315524
}

// BTM_SetDefaultLinkSuperTout
void f_80315528(Ctx* __restrict c) {
  trace_call(0x80315528u);
  c->r[4]=0u+0x80570000u; // 80315528
  c->r[4]=c->r[4]+0x000058F8u; // 8031552C
  W16(c->r[4]+0x000004C6u,c->r[3]); // 80315530
  return; // 80315534
}

// BTM_IsAclConnectionUp
void f_80315538(Ctx* __restrict c) {
  trace_call(0x80315538u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80315538
  c->r[0]=c->lr; // 8031553C
  c->r[4]=0u+0x80570000u; // 80315540
  W32(c->r[1]+0x00000024u,c->r[0]); // 80315544
  c->r[4]=c->r[4]+0x000058F8u; // 80315548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031554C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80315550
  W32(c->r[1]+0x00000014u,c->r[29]); // 80315554
  c->r[29]=c->r[3]|c->r[3]; // 80315558
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031555C
  cmpu(c,0,c->r[0],0x00000003u); // 80315560
  if (crb(c,0)) { goto L_80315594; } // 80315564
  c->r[3]=0u+0x000D0000u; // 80315568
  c->r[4]=0u+0x80490000u; // 8031556C
  c->r[5]=R8(c->r[29]+0x00000000u); // 80315570
  c->r[3]=c->r[3]+0x00000002u; // 80315574
  c->r[6]=R8(c->r[29]+0x00000001u); // 80315578
  c->r[4]=c->r[4]+0xFFFFFA08u; // 8031557C
  c->r[7]=R8(c->r[29]+0x00000002u); // 80315580
  c->r[8]=R8(c->r[29]+0x00000003u); // 80315584
  c->r[9]=R8(c->r[29]+0x00000004u); // 80315588
  c->r[10]=R8(c->r[29]+0x00000005u); // 8031558C
  c->lr=0x80315594u; f_8030E278(c); // 80315590
L_80315594:;
  c->r[3]=0u+0x80570000u; // 80315594
  c->r[31]=0u+0x00000000u; // 80315598
  c->r[3]=c->r[3]+0x000058F8u; // 8031559C
  c->r[30]=c->r[3]+0x00000034u; // 803155A0
L_803155A4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803155A4
  cmps(c,0,(int32_t)c->r[0],0); // 803155A8
  if (crb(c,2)) { goto L_803155CC; } // 803155AC
  c->r[4]=c->r[29]|c->r[29]; // 803155B0
  c->r[3]=c->r[30]+0x00000008u; // 803155B4
  c->r[5]=0u+0x00000006u; // 803155B8
  c->lr=0x803155C0u; f_802E54DC(c); // 803155BC
  cmps(c,0,(int32_t)c->r[3],0); // 803155C0
  if (!crb(c,2)) { goto L_803155CC; } // 803155C4
  goto L_803155E0; // 803155C8
L_803155CC:;
  c->r[31]=c->r[31]+0x00000001u; // 803155CC
  c->r[30]=c->r[30]+0x0000011Cu; // 803155D0
  cmpu(c,0,c->r[31],0x00000004u); // 803155D4
  if (crb(c,0)) { IRQCHK(c); goto L_803155A4; } // 803155D8
  c->r[30]=0u+0x00000000u; // 803155DC
L_803155E0:;
  cmps(c,0,(int32_t)c->r[30],0); // 803155E0
  if (crb(c,2)) { goto L_803155F0; } // 803155E4
  c->r[3]=0u+0x00000001u; // 803155E8
  goto L_803155F4; // 803155EC
L_803155F0:;
  c->r[3]=0u+0x00000000u; // 803155F0
L_803155F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803155F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803155F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803155FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80315600
  c->lr=c->r[0]; // 80315604
  c->r[1]=c->r[1]+0x00000020u; // 80315608
  return; // 8031560C
}

// BTM_GetNumAclLinks
void f_80315610(Ctx* __restrict c) {
  trace_call(0x80315610u);
  c->r[4]=0u+0x80570000u; // 80315610
  c->r[3]=0u+0x00000000u; // 80315614
  c->r[4]=c->r[4]+0x000058F8u; // 80315618
  c->r[0]=R8(c->r[4]+0x0000014Du); // 8031561C
  cmps(c,0,(int32_t)c->r[0],0); // 80315620
  if (crb(c,2)) { goto L_8031562C; } // 80315624
  c->r[3]=0u+0x00000001u; // 80315628
L_8031562C:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 8031562C
  cmps(c,0,(int32_t)c->r[0],0); // 80315630
  if (crb(c,2)) { goto L_80315640; } // 80315634
  c->r[0]=c->r[3]+0x00000001u; // 80315638
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8031563C
L_80315640:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 80315640
  cmps(c,0,(int32_t)c->r[0],0); // 80315644
  if (crb(c,2)) { goto L_80315654; } // 80315648
  c->r[0]=c->r[3]+0x00000001u; // 8031564C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80315650
L_80315654:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 80315654
  cmps(c,0,(int32_t)c->r[0],0); // 80315658
  if (crb(c,2)) return; // 8031565C
  c->r[0]=c->r[3]+0x00000001u; // 80315660
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80315664
  return; // 80315668
}

// btm_get_acl_disc_reason_code
void f_8031566C(Ctx* __restrict c) {
  trace_call(0x8031566Cu);
  c->r[3]=0u+0x80570000u; // 8031566C
  c->r[3]=c->r[3]+0x000058F8u; // 80315670
  c->r[3]=R8(c->r[3]+0x000027BFu); // 80315674
  return; // 80315678
}

// BTM_GetHCIConnHandle
void f_8031567C(Ctx* __restrict c) {
  trace_call(0x8031567Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031567C
  c->r[0]=c->lr; // 80315680
  c->r[4]=0u+0x80570000u; // 80315684
  W32(c->r[1]+0x00000024u,c->r[0]); // 80315688
  c->r[4]=c->r[4]+0x000058F8u; // 8031568C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80315690
  c->r[31]=0u+0x00000000u; // 80315694
  W32(c->r[1]+0x00000018u,c->r[30]); // 80315698
  c->r[30]=c->r[4]+0x00000034u; // 8031569C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803156A0
  c->r[29]=c->r[3]|c->r[3]; // 803156A4
L_803156A8:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 803156A8
  cmps(c,0,(int32_t)c->r[0],0); // 803156AC
  if (crb(c,2)) { goto L_803156D0; } // 803156B0
  c->r[4]=c->r[29]|c->r[29]; // 803156B4
  c->r[3]=c->r[30]+0x00000008u; // 803156B8
  c->r[5]=0u+0x00000006u; // 803156BC
  c->lr=0x803156C4u; f_802E54DC(c); // 803156C0
  cmps(c,0,(int32_t)c->r[3],0); // 803156C4
  if (!crb(c,2)) { goto L_803156D0; } // 803156C8
  goto L_803156E4; // 803156CC
L_803156D0:;
  c->r[31]=c->r[31]+0x00000001u; // 803156D0
  c->r[30]=c->r[30]+0x0000011Cu; // 803156D4
  cmpu(c,0,c->r[31],0x00000004u); // 803156D8
  if (crb(c,0)) { IRQCHK(c); goto L_803156A8; } // 803156DC
  c->r[30]=0u+0x00000000u; // 803156E0
L_803156E4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803156E4
  if (crb(c,2)) { goto L_803156F4; } // 803156E8
  c->r[3]=R16(c->r[30]+0x00000000u); // 803156EC
  goto L_803156FC; // 803156F0
L_803156F4:;
  c->r[3]=0u+0x00010000u; // 803156F4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803156F8
L_803156FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803156FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80315700
  c->r[30]=R32(c->r[1]+0x00000018u); // 80315704
  c->r[29]=R32(c->r[1]+0x00000014u); // 80315708
  c->lr=c->r[0]; // 8031570C
  c->r[1]=c->r[1]+0x00000020u; // 80315710
  return; // 80315714
}

// btm_process_clk_off_comp_evt
void f_80315718(Ctx* __restrict c) {
  trace_call(0x80315718u);
  c->r[5]=0u+0x80570000u; // 80315718
  c->r[6]=0u+0x00000000u; // 8031571C
  c->r[5]=c->r[5]+0x000058F8u; // 80315720
  c->r[0]=R8(c->r[5]+0x0000014Du); // 80315724
  cmps(c,0,(int32_t)c->r[0],0); // 80315728
  if (crb(c,2)) { goto L_8031573C; } // 8031572C
  c->r[0]=R16(c->r[5]+0x00000034u); // 80315730
  cmpu(c,0,c->r[0],c->r[3]); // 80315734
  if (crb(c,2)) { goto L_80315794; } // 80315738
L_8031573C:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 8031573C
  c->r[6]=0u+0x00000001u; // 80315740
  cmps(c,0,(int32_t)c->r[0],0); // 80315744
  if (crb(c,2)) { goto L_80315758; } // 80315748
  c->r[0]=R16(c->r[5]+0x00000150u); // 8031574C
  cmpu(c,0,c->r[0],c->r[3]); // 80315750
  if (crb(c,2)) { goto L_80315794; } // 80315754
L_80315758:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 80315758
  c->r[6]=0u+0x00000002u; // 8031575C
  cmps(c,0,(int32_t)c->r[0],0); // 80315760
  if (crb(c,2)) { goto L_80315774; } // 80315764
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 80315768
  cmpu(c,0,c->r[0],c->r[3]); // 8031576C
  if (crb(c,2)) { goto L_80315794; } // 80315770
L_80315774:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 80315774
  c->r[6]=0u+0x00000003u; // 80315778
  cmps(c,0,(int32_t)c->r[0],0); // 8031577C
  if (crb(c,2)) { goto L_80315790; } // 80315780
  c->r[0]=R16(c->r[5]+0x00000388u); // 80315784
  cmpu(c,0,c->r[0],c->r[3]); // 80315788
  if (crb(c,2)) { goto L_80315794; } // 8031578C
L_80315790:;
  c->r[6]=0u+0x00000004u; // 80315790
L_80315794:;
  cmpu(c,0,c->r[6],0x00000004u); // 80315794
  if (!crb(c,0)) return; // 80315798
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 8031579C
  c->r[3]=0u+0x80570000u; // 803157A0
  c->r[3]=c->r[3]+0x000058F8u; // 803157A4
  c->r[3]=c->r[3]+c->r[0]; // 803157A8
  W16(c->r[3]+0x0000003Au,c->r[4]); // 803157AC
  return; // 803157B0
}

// btm_acl_role_changed
void f_803157B4(Ctx* __restrict c) {
  trace_call(0x803157B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803157B4
  c->r[0]=c->lr; // 803157B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 803157BC
  c->r[11]=c->r[1]+0x00000030u; // 803157C0
  c->lr=0x803157C8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803157C4
  cmps(c,0,(int32_t)c->r[4],0); // 803157C8
  c->r[25]=c->r[3]|c->r[3]; // 803157CC
  c->r[26]=c->r[4]|c->r[4]; // 803157D0
  c->r[28]=c->r[5]|c->r[5]; // 803157D4
  if (crb(c,2)) { goto L_803157E4; } // 803157D8
  c->r[27]=c->r[26]|c->r[26]; // 803157DC
  goto L_803157F0; // 803157E0
L_803157E4:;
  c->r[3]=0u+0x80570000u; // 803157E4
  c->r[3]=c->r[3]+0x000058F8u; // 803157E8
  c->r[27]=c->r[3]+0x000027B4u; // 803157EC
L_803157F0:;
  c->r[3]=0u+0x80570000u; // 803157F0
  c->r[30]=0u+0x00000000u; // 803157F4
  c->r[3]=c->r[3]+0x000058F8u; // 803157F8
  c->r[29]=c->r[3]+0x00000034u; // 803157FC
L_80315800:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 80315800
  cmps(c,0,(int32_t)c->r[0],0); // 80315804
  if (crb(c,2)) { goto L_80315828; } // 80315808
  c->r[4]=c->r[27]|c->r[27]; // 8031580C
  c->r[3]=c->r[29]+0x00000008u; // 80315810
  c->r[5]=0u+0x00000006u; // 80315814
  c->lr=0x8031581Cu; f_802E54DC(c); // 80315818
  cmps(c,0,(int32_t)c->r[3],0); // 8031581C
  if (!crb(c,2)) { goto L_80315828; } // 80315820
  goto L_8031583C; // 80315824
L_80315828:;
  c->r[30]=c->r[30]+0x00000001u; // 80315828
  c->r[29]=c->r[29]+0x0000011Cu; // 8031582C
  cmpu(c,0,c->r[30],0x00000004u); // 80315830
  if (crb(c,0)) { IRQCHK(c); goto L_80315800; } // 80315834
  c->r[29]=0u+0x00000000u; // 80315838
L_8031583C:;
  c->r[3]=0u+0x80570000u; // 8031583C
  cmps(c,0,(int32_t)c->r[29],0); // 80315840
  c->r[3]=c->r[3]+0x000058F8u; // 80315844
  c->r[31]=c->r[3]+0x00000624u; // 80315848
  if (crb(c,2)) { goto L_80315990; } // 8031584C
  cmps(c,0,(int32_t)c->r[25],0); // 80315850
  W8(c->r[31]+0x00000000u,c->r[25]); // 80315854
  if (!crb(c,2)) { goto L_80315874; } // 80315858
  W8(c->r[31]+0x00000001u,c->r[28]); // 8031585C
  c->r[4]=c->r[27]|c->r[27]; // 80315860
  c->r[3]=c->r[31]+0x00000002u; // 80315864
  c->r[5]=0u+0x00000006u; // 80315868
  c->lr=0x80315870u; f_80005FB4(c); // 8031586C
  W8(c->r[29]+0x0000011Au,c->r[28]); // 80315870
L_80315874:;
  cmps(c,0,(int32_t)c->r[26],0); // 80315874
  if (crb(c,2)) { goto L_803158F0; } // 80315878
  c->r[3]=0u+0x80570000u; // 8031587C
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 80315880
  c->r[3]=c->r[3]+0x000058F8u; // 80315884
  c->r[28]=0u+0x00000000u; // 80315888
  c->r[27]=c->r[3]+0x00000034u; // 8031588C
L_80315890:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 80315890
  cmps(c,0,(int32_t)c->r[0],0); // 80315894
  if (crb(c,2)) { goto L_803158B8; } // 80315898
  c->r[3]=c->r[27]+0x00000008u; // 8031589C
  c->r[4]=c->r[29]+0x00000008u; // 803158A0
  c->r[5]=0u+0x00000006u; // 803158A4
  c->lr=0x803158ACu; f_802E54DC(c); // 803158A8
  cmps(c,0,(int32_t)c->r[3],0); // 803158AC
  if (!crb(c,2)) { goto L_803158B8; } // 803158B0
  goto L_803158CC; // 803158B4
L_803158B8:;
  c->r[28]=c->r[28]+0x00000001u; // 803158B8
  c->r[27]=c->r[27]+0x0000011Cu; // 803158BC
  cmpu(c,0,c->r[28],0x00000004u); // 803158C0
  if (crb(c,0)) { IRQCHK(c); goto L_80315890; } // 803158C4
  c->r[27]=0u+0x00000000u; // 803158C8
L_803158CC:;
  cmps(c,0,(int32_t)c->r[27],0); // 803158CC
  if (crb(c,2)) { goto L_803158F0; } // 803158D0
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 803158D4
  c->r[0]=R8(c->r[27]+0x0000011Au); // 803158D8
  cmps(c,0,(int32_t)c->r[0],0); // 803158DC
  if (!crb(c,2)) { goto L_803158F0; } // 803158E0
  c->r[3]=R16(c->r[27]+0x00000000u); // 803158E4
  c->r[4]=c->r[30]|c->r[30]; // 803158E8
  c->lr=0x803158F0u; f_80322EFC(c); // 803158EC
L_803158F0:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 803158F0
  cmpu(c,0,c->r[0],0x00000003u); // 803158F4
  if (!crb(c,2)) { goto L_8031591C; } // 803158F8
  c->r[3]=R16(c->r[29]+0x00000000u); // 803158FC
  c->r[4]=0u+0x00000001u; // 80315900
  c->lr=0x80315908u; f_80321B08(c); // 80315904
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80315908
  if (crb(c,2)) { goto L_8031591C; } // 8031590C
  c->r[0]=0u+0x00000004u; // 80315910
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 80315914
  goto L_80315990; // 80315918
L_8031591C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8031591C
  if (crb(c,2)) { goto L_80315938; } // 80315920
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 80315924
  cmpu(c,0,c->r[0],0x00000005u); // 80315928
  if (!crb(c,2)) { goto L_80315938; } // 8031592C
  c->r[0]=0u+0x00000000u; // 80315930
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 80315934
L_80315938:;
  c->r[30]=0u+0x80570000u; // 80315938
  c->r[30]=c->r[30]+0x000058F8u; // 8031593C
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 80315940
  cmps(c,0,(int32_t)c->r[12],0); // 80315944
  if (crb(c,2)) { goto L_80315960; } // 80315948
  c->r[3]=c->r[31]|c->r[31]; // 8031594C
  c->ctr=c->r[12]; // 80315950
  if (true) { c->lr=0x80315958u; dispatch(c,c->ctr); } // 80315954
  c->r[0]=0u+0x00000000u; // 80315958
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 8031595C
L_80315960:;
  c->r[3]=0u+0x80570000u; // 80315960
  c->r[3]=c->r[3]+0x000058F8u; // 80315964
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80315968
  cmpu(c,0,c->r[0],0x00000004u); // 8031596C
  if (crb(c,0)) { goto L_80315990; } // 80315970
  c->r[3]=0u+0x000D0000u; // 80315974
  c->r[4]=0u+0x80490000u; // 80315978
  c->r[5]=R8(c->r[31]+0x00000001u); // 8031597C
  c->r[3]=c->r[3]+0x00000003u; // 80315980
  c->r[6]=R8(c->r[31]+0x00000000u); // 80315984
  c->r[4]=c->r[4]+0xFFFFFA44u; // 80315988
  c->lr=0x80315990u; f_8030E218(c); // 8031598C
L_80315990:;
  c->r[11]=c->r[1]+0x00000030u; // 80315990
  c->lr=0x80315998u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80315994
  c->r[0]=R32(c->r[1]+0x00000034u); // 80315998
  c->lr=c->r[0]; // 8031599C
  c->r[1]=c->r[1]+0x00000030u; // 803159A0
  return; // 803159A4
}

// btm_acl_timeout
void f_803159A8(Ctx* __restrict c) {
  trace_call(0x803159A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803159A8
  c->r[0]=c->lr; // 803159AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 803159B0
  c->r[0]=R32(c->r[3]+0x00000010u); // 803159B4
  cmpu(c,0,c->r[0],0x00000004u); // 803159B8
  if (!crb(c,2)) { goto L_803159F4; } // 803159BC
  c->r[4]=0u+0x80570000u; // 803159C0
  c->r[3]=0u+0x0000000Au; // 803159C4
  c->r[4]=c->r[4]+0x000058F8u; // 803159C8
  c->r[0]=0u+0x00000000u; // 803159CC
  c->r[12]=R32(c->r[4]+0x000005C4u); // 803159D0
  W8(c->r[1]+0x00000008u,c->r[3]); // 803159D4
  cmps(c,0,(int32_t)c->r[12],0); // 803159D8
  W16(c->r[1]+0x00000010u,c->r[0]); // 803159DC
  W32(c->r[4]+0x000005C4u,c->r[0]); // 803159E0
  if (crb(c,2)) { goto L_803159F4; } // 803159E4
  c->r[3]=c->r[1]+0x00000008u; // 803159E8
  c->ctr=c->r[12]; // 803159EC
  if (true) { c->lr=0x803159F4u; dispatch(c,c->ctr); } // 803159F0
L_803159F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803159F4
  c->lr=c->r[0]; // 803159F8
  c->r[1]=c->r[1]+0x00000020u; // 803159FC
  return; // 80315A00
}

// btm_get_max_packet_size
void f_80315A04(Ctx* __restrict c) {
  trace_call(0x80315A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80315A04
  c->r[0]=c->lr; // 80315A08
  W32(c->r[1]+0x00000024u,c->r[0]); // 80315A0C
  c->r[11]=c->r[1]+0x00000020u; // 80315A10
  c->lr=0x80315A18u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80315A14
  c->r[4]=0u+0x80570000u; // 80315A18
  c->r[27]=c->r[3]|c->r[3]; // 80315A1C
  c->r[4]=c->r[4]+0x000058F8u; // 80315A20
  c->r[30]=0u+0x00000000u; // 80315A24
  c->r[29]=c->r[4]+0x00000034u; // 80315A28
L_80315A2C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 80315A2C
  cmps(c,0,(int32_t)c->r[0],0); // 80315A30
  if (crb(c,2)) { goto L_80315A54; } // 80315A34
  c->r[4]=c->r[27]|c->r[27]; // 80315A38
  c->r[3]=c->r[29]+0x00000008u; // 80315A3C
  c->r[5]=0u+0x00000006u; // 80315A40
  c->lr=0x80315A48u; f_802E54DC(c); // 80315A44
  cmps(c,0,(int32_t)c->r[3],0); // 80315A48
  if (!crb(c,2)) { goto L_80315A54; } // 80315A4C
  goto L_80315A68; // 80315A50
L_80315A54:;
  c->r[30]=c->r[30]+0x00000001u; // 80315A54
  c->r[29]=c->r[29]+0x0000011Cu; // 80315A58
  cmpu(c,0,c->r[30],0x00000004u); // 80315A5C
  if (crb(c,0)) { IRQCHK(c); goto L_80315A2C; } // 80315A60
  c->r[29]=0u+0x00000000u; // 80315A64
L_80315A68:;
  cmps(c,0,(int32_t)c->r[29],0); // 80315A68
  c->r[28]=0u+0x00000000u; // 80315A6C
  c->r[31]=0u+0x00000000u; // 80315A70
  if (crb(c,2)) { goto L_80315A80; } // 80315A74
  c->r[28]=R16(c->r[29]+0x00000002u); // 80315A78
  goto L_80315AA4; // 80315A7C
L_80315A80:;
  c->r[30]=0u+0x80570000u; // 80315A80
  c->r[4]=c->r[27]|c->r[27]; // 80315A84
  c->r[30]=c->r[30]+0x000058F8u; // 80315A88
  c->r[5]=0u+0x00000006u; // 80315A8C
  c->r[3]=c->r[30]+0x00000630u; // 80315A90
  c->lr=0x80315A98u; f_802E54DC(c); // 80315A94
  cmps(c,0,(int32_t)c->r[3],0); // 80315A98
  if (!crb(c,2)) { goto L_80315AA4; } // 80315A9C
  c->r[28]=R16(c->r[30]+0x00000654u); // 80315AA0
L_80315AA4:;
  cmps(c,0,(int32_t)c->r[28],0); // 80315AA4
  if (crb(c,2)) { goto L_80315B68; } // 80315AA8
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 80315AAC
  if (!crb(c,2)) { goto L_80315ABC; } // 80315AB0
  c->r[31]=0u+0x000003FDu; // 80315AB4
  goto L_80315B68; // 80315AB8
L_80315ABC:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 80315ABC
  if (!crb(c,2)) { goto L_80315ACC; } // 80315AC0
  c->r[31]=0u+0x000002A7u; // 80315AC4
  goto L_80315B68; // 80315AC8
L_80315ACC:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 80315ACC
  if (!crb(c,2)) { goto L_80315ADC; } // 80315AD0
  c->r[31]=0u+0x00000228u; // 80315AD4
  goto L_80315B68; // 80315AD8
L_80315ADC:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 80315ADC
  if (crb(c,2)) { goto L_80315AEC; } // 80315AE0
  c->r[31]=0u+0x00000153u; // 80315AE4
  goto L_80315B68; // 80315AE8
L_80315AEC:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 80315AEC
  if (!crb(c,2)) { goto L_80315AFC; } // 80315AF0
  c->r[31]=0u+0x0000016Fu; // 80315AF4
  goto L_80315B68; // 80315AF8
L_80315AFC:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 80315AFC
  if (crb(c,2)) { goto L_80315B0C; } // 80315B00
  c->r[31]=0u+0x000000E0u; // 80315B04
  goto L_80315B68; // 80315B08
L_80315B0C:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 80315B0C
  if (crb(c,2)) { goto L_80315B1C; } // 80315B10
  c->r[31]=0u+0x000000B7u; // 80315B14
  goto L_80315B68; // 80315B18
L_80315B1C:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 80315B1C
  if (crb(c,2)) { goto L_80315B2C; } // 80315B20
  c->r[31]=0u+0x00000079u; // 80315B24
  goto L_80315B68; // 80315B28
L_80315B2C:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 80315B2C
  if (!crb(c,2)) { goto L_80315B3C; } // 80315B30
  c->r[31]=0u+0x00000053u; // 80315B34
  goto L_80315B68; // 80315B38
L_80315B3C:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 80315B3C
  if (!crb(c,2)) { goto L_80315B4C; } // 80315B40
  c->r[31]=0u+0x00000036u; // 80315B44
  goto L_80315B68; // 80315B48
L_80315B4C:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 80315B4C
  if (crb(c,2)) { goto L_80315B5C; } // 80315B50
  c->r[31]=0u+0x0000001Bu; // 80315B54
  goto L_80315B68; // 80315B58
L_80315B5C:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 80315B5C
  if (crb(c,2)) { goto L_80315B68; } // 80315B60
  c->r[31]=0u+0x00000011u; // 80315B64
L_80315B68:;
  cmpu(c,0,c->r[31],0x000003FDu); // 80315B68
  if (!crb(c,2)) { goto L_80315B88; } // 80315B6C
  c->r[3]=0u+0x80570000u; // 80315B70
  c->r[3]=c->r[3]+0x000053D0u; // 80315B74
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 80315B78
  cmpu(c,0,c->r[0],0x000003F9u); // 80315B7C
  if (!crb(c,2)) { goto L_80315B88; } // 80315B80
  c->r[31]=0u+0x000003F9u; // 80315B84
L_80315B88:;
  c->r[11]=c->r[1]+0x00000020u; // 80315B88
  c->r[3]=c->r[31]|c->r[31]; // 80315B8C
  c->lr=0x80315B94u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80315B90
  c->r[0]=R32(c->r[1]+0x00000024u); // 80315B94
  c->lr=c->r[0]; // 80315B98
  c->r[1]=c->r[1]+0x00000020u; // 80315B9C
  return; // 80315BA0
}

// BTM_AclRegisterForChanges
void f_80315BA4(Ctx* __restrict c) {
  trace_call(0x80315BA4u);
  cmps(c,0,(int32_t)c->r[3],0); // 80315BA4
  if (!crb(c,2)) { goto L_80315BC0; } // 80315BA8
  c->r[3]=0u+0x80570000u; // 80315BAC
  c->r[0]=0u+0x00000000u; // 80315BB0
  c->r[3]=c->r[3]+0x000058F8u; // 80315BB4
  W32(c->r[3]+0x000004C8u,c->r[0]); // 80315BB8
  goto L_80315BE0; // 80315BBC
L_80315BC0:;
  c->r[4]=0u+0x80570000u; // 80315BC0
  c->r[4]=c->r[4]+0x000058F8u; // 80315BC4
  c->r[0]=R32(c->r[4]+0x000004C8u); // 80315BC8
  cmps(c,0,(int32_t)c->r[0],0); // 80315BCC
  if (crb(c,2)) { goto L_80315BDC; } // 80315BD0
  c->r[3]=0u+0x00000002u; // 80315BD4
  return; // 80315BD8
L_80315BDC:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 80315BDC
L_80315BE0:;
  c->r[3]=0u+0x00000000u; // 80315BE0
  return; // 80315BE4
}

// btm_qos_setup_complete
void f_80315BE8(Ctx* __restrict c) {
  trace_call(0x80315BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80315BE8
  c->r[0]=c->lr; // 80315BEC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80315BF0
  c->r[11]=c->r[1]+0x00000040u; // 80315BF4
  c->lr=0x80315BFCu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80315BF8
  c->r[31]=0u+0x80570000u; // 80315BFC
  c->r[27]=c->r[3]|c->r[3]; // 80315C00
  c->r[31]=c->r[31]+0x000058F8u; // 80315C04
  c->r[28]=c->r[4]|c->r[4]; // 80315C08
  c->r[30]=R32(c->r[31]+0x00000618u); // 80315C0C
  c->r[29]=c->r[5]|c->r[5]; // 80315C10
  c->r[3]=c->r[31]+0x00000600u; // 80315C14
  c->lr=0x80315C1Cu; f_8030E824(c); // 80315C18
  c->r[0]=0u+0x00000000u; // 80315C1C
  cmps(c,0,(int32_t)c->r[30],0); // 80315C20
  W32(c->r[31]+0x00000618u,c->r[0]); // 80315C24
  if (crb(c,2)) { goto L_80315CA8; } // 80315C28
  cmps(c,0,(int32_t)c->r[29],0); // 80315C2C
  W8(c->r[1]+0x00000022u,c->r[27]); // 80315C30
  W16(c->r[1]+0x00000020u,c->r[28]); // 80315C34
  if (crb(c,2)) { goto L_80315C6C; } // 80315C38
  c->r[0]=R8(c->r[29]+0x00000000u); // 80315C3C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80315C40
  c->r[0]=R8(c->r[29]+0x00000001u); // 80315C44
  W8(c->r[1]+0x00000009u,c->r[0]); // 80315C48
  c->r[0]=R32(c->r[29]+0x00000004u); // 80315C4C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80315C50
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80315C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80315C58
  c->r[0]=R32(c->r[29]+0x00000010u); // 80315C5C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80315C60
  c->r[0]=R32(c->r[29]+0x00000014u); // 80315C64
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80315C68
L_80315C6C:;
  c->r[3]=0u+0x80570000u; // 80315C6C
  c->r[3]=c->r[3]+0x000058F8u; // 80315C70
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80315C74
  cmpu(c,0,c->r[0],0x00000005u); // 80315C78
  if (crb(c,0)) { goto L_80315C98; } // 80315C7C
  c->r[3]=0u+0x000D0000u; // 80315C80
  c->r[4]=0u+0x80490000u; // 80315C84
  c->r[5]=R32(c->r[29]+0x00000014u); // 80315C88
  c->r[3]=c->r[3]+0x00000004u; // 80315C8C
  c->r[4]=c->r[4]+0xFFFFFAACu; // 80315C90
  c->lr=0x80315C98u; f_8030E200(c); // 80315C94
L_80315C98:;
  c->r[12]=c->r[30]|c->r[30]; // 80315C98
  c->r[3]=c->r[1]+0x00000008u; // 80315C9C
  c->ctr=c->r[12]; // 80315CA0
  if (true) { c->lr=0x80315CA8u; dispatch(c,c->ctr); } // 80315CA4
L_80315CA8:;
  c->r[11]=c->r[1]+0x00000040u; // 80315CA8
  c->lr=0x80315CB0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80315CAC
  c->r[0]=R32(c->r[1]+0x00000044u); // 80315CB0
  c->lr=c->r[0]; // 80315CB4
  c->r[1]=c->r[1]+0x00000040u; // 80315CB8
  return; // 80315CBC
}

// BTM_ReadRSSI
void f_80315CC0(Ctx* __restrict c) {
  trace_call(0x80315CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80315CC0
  c->r[0]=c->lr; // 80315CC4
  c->r[5]=0u+0x80570000u; // 80315CC8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80315CCC
  c->r[5]=c->r[5]+0x000058F8u; // 80315CD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80315CD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80315CD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80315CDC
  c->r[29]=c->r[4]|c->r[4]; // 80315CE0
  W32(c->r[1]+0x00000010u,c->r[28]); // 80315CE4
  c->r[28]=c->r[3]|c->r[3]; // 80315CE8
  c->r[0]=R8(c->r[5]+0x000027C0u); // 80315CEC
  cmpu(c,0,c->r[0],0x00000003u); // 80315CF0
  if (crb(c,0)) { goto L_80315D24; } // 80315CF4
  c->r[3]=0u+0x000D0000u; // 80315CF8
  c->r[4]=0u+0x80490000u; // 80315CFC
  c->r[5]=R8(c->r[28]+0x00000000u); // 80315D00
  c->r[3]=c->r[3]+0x00000002u; // 80315D04
  c->r[6]=R8(c->r[28]+0x00000001u); // 80315D08
  c->r[4]=c->r[4]+0xFFFFFAD4u; // 80315D0C
  c->r[7]=R8(c->r[28]+0x00000002u); // 80315D10
  c->r[8]=R8(c->r[28]+0x00000003u); // 80315D14
  c->r[9]=R8(c->r[28]+0x00000004u); // 80315D18
  c->r[10]=R8(c->r[28]+0x00000005u); // 80315D1C
  c->lr=0x80315D24u; f_8030E278(c); // 80315D20
L_80315D24:;
  c->r[3]=0u+0x80570000u; // 80315D24
  c->r[3]=c->r[3]+0x000058F8u; // 80315D28
  c->r[0]=R32(c->r[3]+0x000005E0u); // 80315D2C
  cmps(c,0,(int32_t)c->r[0],0); // 80315D30
  if (crb(c,2)) { goto L_80315D40; } // 80315D34
  c->r[3]=0u+0x00000002u; // 80315D38
  goto L_80315DDC; // 80315D3C
L_80315D40:;
  c->r[30]=c->r[3]+0x00000034u; // 80315D40
  c->r[31]=0u+0x00000000u; // 80315D44
L_80315D48:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 80315D48
  cmps(c,0,(int32_t)c->r[0],0); // 80315D4C
  if (crb(c,2)) { goto L_80315D70; } // 80315D50
  c->r[4]=c->r[28]|c->r[28]; // 80315D54
  c->r[3]=c->r[30]+0x00000008u; // 80315D58
  c->r[5]=0u+0x00000006u; // 80315D5C
  c->lr=0x80315D64u; f_802E54DC(c); // 80315D60
  cmps(c,0,(int32_t)c->r[3],0); // 80315D64
  if (!crb(c,2)) { goto L_80315D70; } // 80315D68
  goto L_80315D84; // 80315D6C
L_80315D70:;
  c->r[31]=c->r[31]+0x00000001u; // 80315D70
  c->r[30]=c->r[30]+0x0000011Cu; // 80315D74
  cmpu(c,0,c->r[31],0x00000004u); // 80315D78
  if (crb(c,0)) { IRQCHK(c); goto L_80315D48; } // 80315D7C
  c->r[30]=0u+0x00000000u; // 80315D80
L_80315D84:;
  cmps(c,0,(int32_t)c->r[30],0); // 80315D84
  if (crb(c,2)) { goto L_80315DD8; } // 80315D88
  c->r[31]=0u+0x80570000u; // 80315D8C
  c->r[4]=0u+0x00000009u; // 80315D90
  c->r[31]=c->r[31]+0x000058F8u; // 80315D94
  c->r[5]=0u+0x00000003u; // 80315D98
  c->r[3]=c->r[31]+0x000005C8u; // 80315D9C
  c->lr=0x80315DA4u; f_8030E7B4(c); // 80315DA0
  W32(c->r[31]+0x000005E0u,c->r[29]); // 80315DA4
  c->r[3]=R16(c->r[30]+0x00000000u); // 80315DA8
  c->lr=0x80315DB0u; f_803231C0(c); // 80315DAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80315DB0
  if (!crb(c,2)) { goto L_80315DD0; } // 80315DB4
  c->r[0]=0u+0x00000000u; // 80315DB8
  c->r[3]=c->r[31]+0x000005C8u; // 80315DBC
  W32(c->r[31]+0x000005E0u,c->r[0]); // 80315DC0
  c->lr=0x80315DC8u; f_8030E824(c); // 80315DC4
  c->r[3]=0u+0x00000003u; // 80315DC8
  goto L_80315DDC; // 80315DCC
L_80315DD0:;
  c->r[3]=0u+0x00000001u; // 80315DD0
  goto L_80315DDC; // 80315DD4
L_80315DD8:;
  c->r[3]=0u+0x00000007u; // 80315DD8
L_80315DDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80315DDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80315DE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80315DE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80315DE8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80315DEC
  c->lr=c->r[0]; // 80315DF0
  c->r[1]=c->r[1]+0x00000020u; // 80315DF4
  return; // 80315DF8
}

// BTM_ReadLinkQuality
void f_80315DFC(Ctx* __restrict c) {
  trace_call(0x80315DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80315DFC
  c->r[0]=c->lr; // 80315E00
  c->r[5]=0u+0x80570000u; // 80315E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80315E08
  c->r[5]=c->r[5]+0x000058F8u; // 80315E0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80315E10
  W32(c->r[1]+0x00000018u,c->r[30]); // 80315E14
  W32(c->r[1]+0x00000014u,c->r[29]); // 80315E18
  c->r[29]=c->r[4]|c->r[4]; // 80315E1C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80315E20
  c->r[28]=c->r[3]|c->r[3]; // 80315E24
  c->r[0]=R8(c->r[5]+0x000027C0u); // 80315E28
  cmpu(c,0,c->r[0],0x00000003u); // 80315E2C
  if (crb(c,0)) { goto L_80315E60; } // 80315E30
  c->r[3]=0u+0x000D0000u; // 80315E34
  c->r[4]=0u+0x80490000u; // 80315E38
  c->r[5]=R8(c->r[28]+0x00000000u); // 80315E3C
  c->r[3]=c->r[3]+0x00000002u; // 80315E40
  c->r[6]=R8(c->r[28]+0x00000001u); // 80315E44
  c->r[4]=c->r[4]+0xFFFFFB08u; // 80315E48
  c->r[7]=R8(c->r[28]+0x00000002u); // 80315E4C
  c->r[8]=R8(c->r[28]+0x00000003u); // 80315E50
  c->r[9]=R8(c->r[28]+0x00000004u); // 80315E54
  c->r[10]=R8(c->r[28]+0x00000005u); // 80315E58
  c->lr=0x80315E60u; f_8030E278(c); // 80315E5C
L_80315E60:;
  c->r[3]=0u+0x80570000u; // 80315E60
  c->r[3]=c->r[3]+0x000058F8u; // 80315E64
  c->r[0]=R32(c->r[3]+0x000005FCu); // 80315E68
  cmps(c,0,(int32_t)c->r[0],0); // 80315E6C
  if (crb(c,2)) { goto L_80315E7C; } // 80315E70
  c->r[3]=0u+0x00000002u; // 80315E74
  goto L_80315F18; // 80315E78
L_80315E7C:;
  c->r[30]=c->r[3]+0x00000034u; // 80315E7C
  c->r[31]=0u+0x00000000u; // 80315E80
L_80315E84:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 80315E84
  cmps(c,0,(int32_t)c->r[0],0); // 80315E88
  if (crb(c,2)) { goto L_80315EAC; } // 80315E8C
  c->r[4]=c->r[28]|c->r[28]; // 80315E90
  c->r[3]=c->r[30]+0x00000008u; // 80315E94
  c->r[5]=0u+0x00000006u; // 80315E98
  c->lr=0x80315EA0u; f_802E54DC(c); // 80315E9C
  cmps(c,0,(int32_t)c->r[3],0); // 80315EA0
  if (!crb(c,2)) { goto L_80315EAC; } // 80315EA4
  goto L_80315EC0; // 80315EA8
L_80315EAC:;
  c->r[31]=c->r[31]+0x00000001u; // 80315EAC
  c->r[30]=c->r[30]+0x0000011Cu; // 80315EB0
  cmpu(c,0,c->r[31],0x00000004u); // 80315EB4
  if (crb(c,0)) { IRQCHK(c); goto L_80315E84; } // 80315EB8
  c->r[30]=0u+0x00000000u; // 80315EBC
L_80315EC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80315EC0
  if (crb(c,2)) { goto L_80315F14; } // 80315EC4
  c->r[31]=0u+0x80570000u; // 80315EC8
  c->r[4]=0u+0x00000009u; // 80315ECC
  c->r[31]=c->r[31]+0x000058F8u; // 80315ED0
  c->r[5]=0u+0x00000003u; // 80315ED4
  c->r[3]=c->r[31]+0x000005E4u; // 80315ED8
  c->lr=0x80315EE0u; f_8030E7B4(c); // 80315EDC
  W32(c->r[31]+0x000005FCu,c->r[29]); // 80315EE0
  c->r[3]=R16(c->r[30]+0x00000000u); // 80315EE4
  c->lr=0x80315EECu; f_80323144(c); // 80315EE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80315EEC
  if (!crb(c,2)) { goto L_80315F0C; } // 80315EF0
  c->r[3]=c->r[31]+0x000005E4u; // 80315EF4
  c->lr=0x80315EFCu; f_8030E824(c); // 80315EF8
  c->r[0]=0u+0x00000000u; // 80315EFC
  c->r[3]=0u+0x00000003u; // 80315F00
  W32(c->r[31]+0x000005FCu,c->r[0]); // 80315F04
  goto L_80315F18; // 80315F08
L_80315F0C:;
  c->r[3]=0u+0x00000001u; // 80315F0C
  goto L_80315F18; // 80315F10
L_80315F14:;
  c->r[3]=0u+0x00000007u; // 80315F14
L_80315F18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80315F18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80315F1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80315F20
  c->r[29]=R32(c->r[1]+0x00000014u); // 80315F24
  c->r[28]=R32(c->r[1]+0x00000010u); // 80315F28
  c->lr=c->r[0]; // 80315F2C
  c->r[1]=c->r[1]+0x00000020u; // 80315F30
  return; // 80315F34
}

// btm_read_rssi_complete
void f_80315F38(Ctx* __restrict c) {
  trace_call(0x80315F38u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80315F38
  c->r[0]=c->lr; // 80315F3C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80315F40
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80315F44
  c->r[31]=0u+0x80570000u; // 80315F48
  c->r[31]=c->r[31]+0x000058F8u; // 80315F4C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80315F50
  W32(c->r[1]+0x00000024u,c->r[29]); // 80315F54
  c->r[29]=c->r[31]+0x00000034u; // 80315F58
  W32(c->r[1]+0x00000020u,c->r[28]); // 80315F5C
  c->r[28]=c->r[3]|c->r[3]; // 80315F60
  c->r[3]=c->r[31]+0x000005C8u; // 80315F64
  c->r[30]=R32(c->r[31]+0x000005E0u); // 80315F68
  c->lr=0x80315F70u; f_8030E824(c); // 80315F6C
  c->r[0]=0u+0x00000000u; // 80315F70
  cmps(c,0,(int32_t)c->r[30],0); // 80315F74
  W32(c->r[31]+0x000005E0u,c->r[0]); // 80315F78
  if (crb(c,2)) { goto L_80316034; } // 80315F7C
  c->r[6]=R8(c->r[28]+0x00000000u); // 80315F80
  cmps(c,0,(int32_t)c->r[6],0); // 80315F84
  W8(c->r[1]+0x00000009u,c->r[6]); // 80315F88
  if (!crb(c,2)) { goto L_8031601C; } // 80315F8C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80315F90
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80315F94
  c->r[3]=R8(c->r[28]+0x00000002u); // 80315F98
  c->r[4]=R8(c->r[28]+0x00000001u); // 80315F9C
  cmpu(c,0,c->r[0],0x00000004u); // 80315FA0
  c->r[5]=R8(c->r[28]+0x00000003u); // 80315FA4
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 80315FA8
  c->r[0]=c->r[4]+c->r[0]; // 80315FAC
  W8(c->r[1]+0x0000000Au,c->r[5]); // 80315FB0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80315FB4
  if (crb(c,0)) { goto L_80315FD4; } // 80315FB8
  c->r[3]=0u+0x000D0000u; // 80315FBC
  c->r[4]=0u+0x80490000u; // 80315FC0
  c->r[3]=c->r[3]+0x00000003u; // 80315FC4
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80315FC8
  c->r[4]=c->r[4]+0xFFFFFB44u; // 80315FCC
  c->lr=0x80315FD4u; f_8030E218(c); // 80315FD0
L_80315FD4:;
  c->r[0]=0u+0x00000004u; // 80315FD4
  c->r[3]=0u+0x00000000u; // 80315FD8
  c->ctr=c->r[0]; // 80315FDC
L_80315FE0:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 80315FE0
  cmps(c,0,(int32_t)c->r[0],0); // 80315FE4
  if (crb(c,2)) { goto L_8031600C; } // 80315FE8
  c->r[0]=R16(c->r[29]+0x00000000u); // 80315FEC
  cmpu(c,0,c->r[31],c->r[0]); // 80315FF0
  if (!crb(c,2)) { goto L_8031600C; } // 80315FF4
  c->r[3]=c->r[1]+0x0000000Bu; // 80315FF8
  c->r[4]=c->r[29]+0x00000008u; // 80315FFC
  c->r[5]=0u+0x00000006u; // 80316000
  c->lr=0x80316008u; f_80005FB4(c); // 80316004
  goto L_80316024; // 80316008
L_8031600C:;
  c->r[3]=c->r[3]+0x00000001u; // 8031600C
  c->r[29]=c->r[29]+0x0000011Cu; // 80316010
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80315FE0; } // 80316014
  goto L_80316024; // 80316018
L_8031601C:;
  c->r[0]=0u+0x0000000Au; // 8031601C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80316020
L_80316024:;
  c->r[12]=c->r[30]|c->r[30]; // 80316024
  c->r[3]=c->r[1]+0x00000008u; // 80316028
  c->ctr=c->r[12]; // 8031602C
  if (true) { c->lr=0x80316034u; dispatch(c,c->ctr); } // 80316030
L_80316034:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80316034
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80316038
  c->r[30]=R32(c->r[1]+0x00000028u); // 8031603C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80316040
  c->r[28]=R32(c->r[1]+0x00000020u); // 80316044
  c->lr=c->r[0]; // 80316048
  c->r[1]=c->r[1]+0x00000030u; // 8031604C
  return; // 80316050
}

// btm_read_link_quality_complete
void f_80316054(Ctx* __restrict c) {
  trace_call(0x80316054u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316054
  c->r[0]=c->lr; // 80316058
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031605C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80316060
  c->r[31]=0u+0x80570000u; // 80316064
  c->r[31]=c->r[31]+0x000058F8u; // 80316068
  W32(c->r[1]+0x00000028u,c->r[30]); // 8031606C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80316070
  c->r[29]=c->r[31]+0x00000034u; // 80316074
  W32(c->r[1]+0x00000020u,c->r[28]); // 80316078
  c->r[28]=c->r[3]|c->r[3]; // 8031607C
  c->r[3]=c->r[31]+0x000005C8u; // 80316080
  c->r[30]=R32(c->r[31]+0x000005FCu); // 80316084
  c->lr=0x8031608Cu; f_8030E824(c); // 80316088
  c->r[0]=0u+0x00000000u; // 8031608C
  cmps(c,0,(int32_t)c->r[30],0); // 80316090
  W32(c->r[31]+0x000005FCu,c->r[0]); // 80316094
  if (crb(c,2)) { goto L_8031614C; } // 80316098
  c->r[6]=R8(c->r[28]+0x00000000u); // 8031609C
  cmps(c,0,(int32_t)c->r[6],0); // 803160A0
  W8(c->r[1]+0x00000009u,c->r[6]); // 803160A4
  if (!crb(c,2)) { goto L_80316134; } // 803160A8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803160AC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803160B0
  c->r[3]=R8(c->r[28]+0x00000002u); // 803160B4
  c->r[4]=R8(c->r[28]+0x00000001u); // 803160B8
  cmpu(c,0,c->r[0],0x00000004u); // 803160BC
  c->r[5]=R8(c->r[28]+0x00000003u); // 803160C0
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 803160C4
  c->r[0]=c->r[4]+c->r[0]; // 803160C8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 803160CC
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 803160D0
  if (crb(c,0)) { goto L_803160EC; } // 803160D4
  c->r[3]=0u+0x000D0000u; // 803160D8
  c->r[4]=0u+0x80490000u; // 803160DC
  c->r[3]=c->r[3]+0x00000003u; // 803160E0
  c->r[4]=c->r[4]+0xFFFFFB74u; // 803160E4
  c->lr=0x803160ECu; f_8030E218(c); // 803160E8
L_803160EC:;
  c->r[0]=0u+0x00000004u; // 803160EC
  c->r[3]=0u+0x00000000u; // 803160F0
  c->ctr=c->r[0]; // 803160F4
L_803160F8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 803160F8
  cmps(c,0,(int32_t)c->r[0],0); // 803160FC
  if (crb(c,2)) { goto L_80316124; } // 80316100
  c->r[0]=R16(c->r[29]+0x00000000u); // 80316104
  cmpu(c,0,c->r[31],c->r[0]); // 80316108
  if (!crb(c,2)) { goto L_80316124; } // 8031610C
  c->r[3]=c->r[1]+0x0000000Bu; // 80316110
  c->r[4]=c->r[29]+0x00000008u; // 80316114
  c->r[5]=0u+0x00000006u; // 80316118
  c->lr=0x80316120u; f_80005FB4(c); // 8031611C
  goto L_8031613C; // 80316120
L_80316124:;
  c->r[3]=c->r[3]+0x00000001u; // 80316124
  c->r[29]=c->r[29]+0x0000011Cu; // 80316128
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803160F8; } // 8031612C
  goto L_8031613C; // 80316130
L_80316134:;
  c->r[0]=0u+0x0000000Au; // 80316134
  W8(c->r[1]+0x00000008u,c->r[0]); // 80316138
L_8031613C:;
  c->r[12]=c->r[30]|c->r[30]; // 8031613C
  c->r[3]=c->r[1]+0x00000008u; // 80316140
  c->ctr=c->r[12]; // 80316144
  if (true) { c->lr=0x8031614Cu; dispatch(c,c->ctr); } // 80316148
L_8031614C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031614C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80316150
  c->r[30]=R32(c->r[1]+0x00000028u); // 80316154
  c->r[29]=R32(c->r[1]+0x00000024u); // 80316158
  c->r[28]=R32(c->r[1]+0x00000020u); // 8031615C
  c->lr=c->r[0]; // 80316160
  c->r[1]=c->r[1]+0x00000030u; // 80316164
  return; // 80316168
}

// btm_remove_acl
void f_8031616C(Ctx* __restrict c) {
  trace_call(0x8031616Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031616C
  c->r[0]=c->lr; // 80316170
  c->r[4]=0u+0x80570000u; // 80316174
  W32(c->r[1]+0x00000024u,c->r[0]); // 80316178
  c->r[4]=c->r[4]+0x000058F8u; // 8031617C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80316180
  c->r[31]=0u+0x00000000u; // 80316184
  W32(c->r[1]+0x00000018u,c->r[30]); // 80316188
  c->r[30]=c->r[4]+0x00000034u; // 8031618C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80316190
  c->r[29]=c->r[3]|c->r[3]; // 80316194
L_80316198:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 80316198
  cmps(c,0,(int32_t)c->r[0],0); // 8031619C
  if (crb(c,2)) { goto L_803161C0; } // 803161A0
  c->r[4]=c->r[29]|c->r[29]; // 803161A4
  c->r[3]=c->r[30]+0x00000008u; // 803161A8
  c->r[5]=0u+0x00000006u; // 803161AC
  c->lr=0x803161B4u; f_802E54DC(c); // 803161B0
  cmps(c,0,(int32_t)c->r[3],0); // 803161B4
  if (!crb(c,2)) { goto L_803161C0; } // 803161B8
  goto L_803161D4; // 803161BC
L_803161C0:;
  c->r[31]=c->r[31]+0x00000001u; // 803161C0
  c->r[30]=c->r[30]+0x0000011Cu; // 803161C4
  cmpu(c,0,c->r[31],0x00000004u); // 803161C8
  if (crb(c,0)) { IRQCHK(c); goto L_80316198; } // 803161CC
  c->r[30]=0u+0x00000000u; // 803161D0
L_803161D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 803161D4
  if (crb(c,2)) { goto L_803161E4; } // 803161D8
  c->r[3]=R16(c->r[30]+0x00000000u); // 803161DC
  goto L_803161EC; // 803161E0
L_803161E4:;
  c->r[3]=0u+0x00010000u; // 803161E4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803161E8
L_803161EC:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 803161EC
  c->r[4]=0u+0x00000013u; // 803161F0
  c->lr=0x803161F8u; f_80321368(c); // 803161F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803161F8
  if (!crb(c,2)) { goto L_80316208; } // 803161FC
  c->r[3]=0u+0x00000003u; // 80316200
  goto L_8031620C; // 80316204
L_80316208:;
  c->r[3]=0u+0x00000000u; // 80316208
L_8031620C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031620C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80316210
  c->r[30]=R32(c->r[1]+0x00000018u); // 80316214
  c->r[29]=R32(c->r[1]+0x00000014u); // 80316218
  c->lr=c->r[0]; // 8031621C
  c->r[1]=c->r[1]+0x00000020u; // 80316220
  return; // 80316224
}

// btm_chg_all_acl_pkt_types
void f_80316228(Ctx* __restrict c) {
  trace_call(0x80316228u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316228
  c->r[0]=c->lr; // 8031622C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80316230
  c->r[11]=c->r[1]+0x00000040u; // 80316234
  c->lr=0x8031623Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80316238
  c->r[4]=0u+0x80570000u; // 8031623C
  cmps(c,0,(int32_t)c->r[3],0); // 80316240
  c->r[31]=c->r[4]+0x000058F8u; // 80316244
  c->r[30]=0u+0x80490000u; // 80316248
  c->r[30]=c->r[30]+0xFFFFF828u; // 8031624C
  c->r[28]=c->r[31]+0x00000034u; // 80316250
  if (crb(c,2)) { goto L_8031631C; } // 80316254
  c->r[29]=0u+0x00000000u; // 80316258
  c->r[26]=0u+0x000D0000u; // 8031625C
  c->r[24]=0u+0xFFFFCCF9u; // 80316260
L_80316264:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 80316264
  cmps(c,0,(int32_t)c->r[0],0); // 80316268
  if (crb(c,2)) { goto L_80316308; } // 8031626C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80316270
  cmpu(c,0,c->r[0],0x00000005u); // 80316274
  if (crb(c,0)) { goto L_8031628C; } // 80316278
  c->r[5]=R16(c->r[28]+0x00000000u); // 8031627C
  c->r[3]=c->r[26]+0x00000004u; // 80316280
  c->r[4]=c->r[30]+0x0000038Cu; // 80316284
  c->lr=0x8031628Cu; f_8030E200(c); // 80316288
L_8031628C:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 8031628C
  c->r[5]=0u+0x00000018u; // 80316290
  W16(c->r[28]+0x00000004u,c->r[0]); // 80316294
  c->r[3]=R8(c->r[31]+0x00000636u); // 80316298
  cmpu(c,0,c->r[3],0x00000003u); // 8031629C
  if (crb(c,0)) { goto L_803162AC; } // 803162A0
  c->r[0]=c->r[5]|0x00003300u; // 803162A4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 803162A8
L_803162AC:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 803162AC
  cmpu(c,1,c->r[3],0x00000003u); // 803162B0
  c->r[0]=c->r[5]&c->r[4]; // 803162B4
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 803162B8
  c->r[25]=c->r[3]&c->r[24]; // 803162BC
  if (crb(c,4)) { goto L_803162D4; } // 803162C0
  c->r[0]=c->r[5]|c->r[4]; // 803162C4
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 803162C8
  c->r[0]=c->r[3]|c->r[0]; // 803162CC
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 803162D0
L_803162D4:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803162D4
  cmpu(c,0,c->r[0],0x00000004u); // 803162D8
  if (crb(c,0)) { goto L_803162F0; } // 803162DC
  c->r[3]=c->r[26]+0x00000003u; // 803162E0
  c->r[4]=c->r[30]+0x00000040u; // 803162E4
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 803162E8
  c->lr=0x803162F0u; f_8030E200(c); // 803162EC
L_803162F0:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 803162F0
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 803162F4
  c->lr=0x803162FCu; f_803219FC(c); // 803162F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803162FC
  if (crb(c,2)) { goto L_80316308; } // 80316300
  W16(c->r[28]+0x00000002u,c->r[25]); // 80316304
L_80316308:;
  c->r[29]=c->r[29]+0x00000001u; // 80316308
  c->r[28]=c->r[28]+0x0000011Cu; // 8031630C
  cmpu(c,0,c->r[29],0x00000004u); // 80316310
  if (crb(c,0)) { IRQCHK(c); goto L_80316264; } // 80316314
  goto L_80316430; // 80316318
L_8031631C:;
  c->r[29]=0u+0x00000000u; // 8031631C
  c->r[24]=0u+0x000D0000u; // 80316320
  c->r[25]=0u+0x00000000u; // 80316324
  c->r[27]=0u+0xFFFFCCF9u; // 80316328
L_8031632C:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 8031632C
  cmps(c,0,(int32_t)c->r[0],0); // 80316330
  if (crb(c,2)) { goto L_80316420; } // 80316334
  c->r[0]=R16(c->r[28]+0x00000004u); // 80316338
  cmps(c,0,(int32_t)c->r[0],0); // 8031633C
  if (crb(c,2)) { goto L_80316420; } // 80316340
  c->r[3]=c->r[28]+0x00000008u; // 80316344
  c->r[4]=c->r[1]+0x00000008u; // 80316348
  c->lr=0x80316350u; f_8031A350(c); // 8031634C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80316350
  if (!crb(c,2)) { goto L_80316420; } // 80316354
  c->r[0]=R8(c->r[1]+0x00000008u); // 80316358
  cmpu(c,0,c->r[0],0x00000002u); // 8031635C
  if (!crb(c,2)) { goto L_80316398; } // 80316360
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80316364
  cmpu(c,0,c->r[0],0x00000005u); // 80316368
  if (crb(c,0)) { goto L_80316380; } // 8031636C
  c->r[5]=R16(c->r[28]+0x00000000u); // 80316370
  c->r[3]=c->r[24]+0x00000004u; // 80316374
  c->r[4]=c->r[30]+0x000003BCu; // 80316378
  c->lr=0x80316380u; f_8030E200(c); // 8031637C
L_80316380:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 80316380
  c->r[4]=c->r[28]+0x00000008u; // 80316384
  c->r[5]=c->r[1]+0x0000000Cu; // 80316388
  c->r[3]=0u+0x00000080u; // 8031638C
  c->lr=0x80316394u; f_8031A180(c); // 80316390
  goto L_80316420; // 80316394
L_80316398:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80316398
  cmpu(c,0,c->r[0],0x00000005u); // 8031639C
  if (crb(c,0)) { goto L_803163B8; } // 803163A0
  c->r[5]=R16(c->r[28]+0x00000000u); // 803163A4
  c->r[3]=c->r[24]+0x00000004u; // 803163A8
  c->r[6]=R16(c->r[28]+0x00000002u); // 803163AC
  c->r[4]=c->r[30]+0x000003ECu; // 803163B0
  c->lr=0x803163B8u; f_8030E218(c); // 803163B4
L_803163B8:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 803163B8
  c->r[5]=R16(c->r[31]+0x00000654u); // 803163BC
  c->r[0]=R8(c->r[31]+0x00000636u); // 803163C0
  c->r[3]=c->r[4]&c->r[5]; // 803163C4
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 803163C8
  cmpu(c,0,c->r[0],0x00000003u); // 803163CC
  c->r[26]=c->r[3]&c->r[27]; // 803163D0
  if (crb(c,0)) { goto L_803163E8; } // 803163D4
  c->r[0]=c->r[4]|c->r[5]; // 803163D8
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 803163DC
  c->r[0]=c->r[3]|c->r[0]; // 803163E0
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 803163E4
L_803163E8:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 803163E8
  cmpu(c,0,c->r[0],0x00000004u); // 803163EC
  if (crb(c,0)) { goto L_80316404; } // 803163F0
  c->r[3]=c->r[24]+0x00000003u; // 803163F4
  c->r[4]=c->r[30]+0x00000040u; // 803163F8
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 803163FC
  c->lr=0x80316404u; f_8030E200(c); // 80316400
L_80316404:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 80316404
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 80316408
  c->lr=0x80316410u; f_803219FC(c); // 8031640C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80316410
  if (crb(c,2)) { goto L_8031641C; } // 80316414
  W16(c->r[28]+0x00000002u,c->r[26]); // 80316418
L_8031641C:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 8031641C
L_80316420:;
  c->r[29]=c->r[29]+0x00000001u; // 80316420
  c->r[28]=c->r[28]+0x0000011Cu; // 80316424
  cmpu(c,0,c->r[29],0x00000004u); // 80316428
  if (crb(c,0)) { IRQCHK(c); goto L_8031632C; } // 8031642C
L_80316430:;
  c->r[11]=c->r[1]+0x00000040u; // 80316430
  c->lr=0x80316438u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80316434
  c->r[0]=R32(c->r[1]+0x00000044u); // 80316438
  c->lr=c->r[0]; // 8031643C
  c->r[1]=c->r[1]+0x00000040u; // 80316440
  return; // 80316444
}

// BTM_SecAddDevice
void f_80316448(Ctx* __restrict c) {
  trace_call(0x80316448u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316448
  c->r[0]=c->lr; // 8031644C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80316450
  c->r[11]=c->r[1]+0x00000030u; // 80316454
  c->lr=0x8031645Cu; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80316458
  c->r[9]=0u+0x80570000u; // 8031645C
  c->r[24]=c->r[3]|c->r[3]; // 80316460
  c->r[9]=c->r[9]+0x000058F8u; // 80316464
  c->r[25]=c->r[4]|c->r[4]; // 80316468
  c->r[26]=c->r[5]|c->r[5]; // 8031646C
  c->r[27]=c->r[6]|c->r[6]; // 80316470
  c->r[28]=c->r[7]|c->r[7]; // 80316474
  c->r[29]=c->r[8]|c->r[8]; // 80316478
  c->r[30]=c->r[9]+0x00001F30u; // 8031647C
  c->r[31]=0u+0x00000000u; // 80316480
L_80316484:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 80316484
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316488
  if (crb(c,2)) { goto L_803164AC; } // 8031648C
  c->r[4]=c->r[24]|c->r[24]; // 80316490
  c->r[3]=c->r[30]+0x0000001Cu; // 80316494
  c->r[5]=0u+0x00000006u; // 80316498
  c->lr=0x803164A0u; f_802E54DC(c); // 8031649C
  cmps(c,0,(int32_t)c->r[3],0); // 803164A0
  if (!crb(c,2)) { goto L_803164AC; } // 803164A4
  goto L_803164C0; // 803164A8
L_803164AC:;
  c->r[31]=c->r[31]+0x00000001u; // 803164AC
  c->r[30]=c->r[30]+0x00000088u; // 803164B0
  cmps(c,0,(int32_t)c->r[31],16); // 803164B4
  if (crb(c,0)) { IRQCHK(c); goto L_80316484; } // 803164B8
  c->r[30]=0u+0x00000000u; // 803164BC
L_803164C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 803164C0
  if (!crb(c,2)) { goto L_803164E4; } // 803164C4
  c->r[3]=c->r[24]|c->r[24]; // 803164C8
  c->lr=0x803164D0u; f_8031671C(c); // 803164CC
  cmps(c,0,(int32_t)c->r[3],0); // 803164D0
  c->r[30]=c->r[3]|c->r[3]; // 803164D4
  if (!crb(c,2)) { goto L_803164FC; } // 803164D8
  c->r[3]=0u+0x00000000u; // 803164DC
  goto L_803165B8; // 803164E0
L_803164E4:;
  c->r[4]=0u+0x80570000u; // 803164E4
  c->r[4]=c->r[4]+0x000058F8u; // 803164E8
  c->r[3]=R32(c->r[4]+0x00001974u); // 803164EC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 803164F0
  c->r[0]=c->r[3]+0x00000001u; // 803164F4
  W32(c->r[4]+0x00001974u,c->r[0]); // 803164F8
L_803164FC:;
  cmps(c,0,(int32_t)c->r[25],0); // 803164FC
  if (crb(c,2)) { goto L_80316514; } // 80316500
  c->r[4]=c->r[25]|c->r[25]; // 80316504
  c->r[3]=c->r[30]+0x00000022u; // 80316508
  c->r[5]=0u+0x00000003u; // 8031650C
  c->lr=0x80316514u; f_80005FB4(c); // 80316510
L_80316514:;
  c->r[3]=c->r[30]+0x00000035u; // 80316514
  c->r[4]=0u+0x00000000u; // 80316518
  c->r[5]=0u+0x00000041u; // 8031651C
  c->lr=0x80316524u; f_800060B8(c); // 80316520
  cmps(c,0,(int32_t)c->r[26],0); // 80316524
  if (crb(c,2)) { goto L_80316554; } // 80316528
  c->r[0]=R8(c->r[26]+0x00000000u); // 8031652C
  cmps(c,0,(int32_t)c->r[0],0); // 80316530
  if (crb(c,2)) { goto L_80316554; } // 80316534
  c->r[0]=R8(c->r[30]+0x00000076u); // 80316538
  c->r[4]=c->r[26]|c->r[26]; // 8031653C
  c->r[3]=c->r[30]+0x00000035u; // 80316540
  c->r[5]=0u+0x00000040u; // 80316544
  c->r[0]=c->r[0]|0x00000008u; // 80316548
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031654C
  c->lr=0x80316554u; f_802E9608(c); // 80316550
L_80316554:;
  cmps(c,0,(int32_t)c->r[27],0); // 80316554
  if (crb(c,2)) { goto L_80316570; } // 80316558
  c->r[4]=c->r[27]|c->r[27]; // 8031655C
  c->r[3]=c->r[30]+0x00000077u; // 80316560
  c->r[5]=0u+0x00000008u; // 80316564
  c->lr=0x8031656Cu; f_80005FB4(c); // 80316568
  goto L_80316580; // 8031656C
L_80316570:;
  c->r[3]=c->r[30]+0x00000077u; // 80316570
  c->r[4]=0u+0x00000000u; // 80316574
  c->r[5]=0u+0x00000008u; // 80316578
  c->lr=0x80316580u; f_800060B8(c); // 8031657C
L_80316580:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 80316580
  cmps(c,0,(int32_t)c->r[29],0); // 80316584
  W32(c->r[30]+0x00000010u,c->r[0]); // 80316588
  c->r[0]=R32(c->r[28]+0x00000004u); // 8031658C
  W32(c->r[30]+0x00000014u,c->r[0]); // 80316590
  if (crb(c,2)) { goto L_803165B4; } // 80316594
  c->r[0]=R8(c->r[30]+0x00000076u); // 80316598
  c->r[4]=c->r[29]|c->r[29]; // 8031659C
  c->r[3]=c->r[30]+0x00000025u; // 803165A0
  c->r[5]=0u+0x00000010u; // 803165A4
  c->r[0]=c->r[0]|0x00000010u; // 803165A8
  W8(c->r[30]+0x00000076u,c->r[0]); // 803165AC
  c->lr=0x803165B4u; f_80005FB4(c); // 803165B0
L_803165B4:;
  c->r[3]=0u+0x00000001u; // 803165B4
L_803165B8:;
  c->r[11]=c->r[1]+0x00000030u; // 803165B8
  c->lr=0x803165C0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803165BC
  c->r[0]=R32(c->r[1]+0x00000034u); // 803165C0
  c->lr=c->r[0]; // 803165C4
  c->r[1]=c->r[1]+0x00000030u; // 803165C8
  return; // 803165CC
}

// BTM_SecDeleteDevice
void f_803165D0(Ctx* __restrict c) {
  trace_call(0x803165D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803165D0
  c->r[0]=c->lr; // 803165D4
  c->r[4]=0u+0x80570000u; // 803165D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803165DC
  c->r[4]=c->r[4]+0x000058F8u; // 803165E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803165E4
  c->r[31]=0u+0x00000000u; // 803165E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803165EC
  c->r[30]=c->r[4]+0x00001F30u; // 803165F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 803165F4
  c->r[29]=c->r[3]|c->r[3]; // 803165F8
L_803165FC:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 803165FC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316600
  if (crb(c,2)) { goto L_80316624; } // 80316604
  c->r[4]=c->r[29]|c->r[29]; // 80316608
  c->r[3]=c->r[30]+0x0000001Cu; // 8031660C
  c->r[5]=0u+0x00000006u; // 80316610
  c->lr=0x80316618u; f_802E54DC(c); // 80316614
  cmps(c,0,(int32_t)c->r[3],0); // 80316618
  if (!crb(c,2)) { goto L_80316624; } // 8031661C
  goto L_80316638; // 80316620
L_80316624:;
  c->r[31]=c->r[31]+0x00000001u; // 80316624
  c->r[30]=c->r[30]+0x00000088u; // 80316628
  cmps(c,0,(int32_t)c->r[31],16); // 8031662C
  if (crb(c,0)) { IRQCHK(c); goto L_803165FC; } // 80316630
  c->r[30]=0u+0x00000000u; // 80316634
L_80316638:;
  cmps(c,0,(int32_t)c->r[30],0); // 80316638
  if (!crb(c,2)) { goto L_80316648; } // 8031663C
  c->r[3]=0u+0x00000000u; // 80316640
  goto L_80316660; // 80316644
L_80316648:;
  c->r[0]=0u+0x00000000u; // 80316648
  c->r[3]=c->r[29]|c->r[29]; // 8031664C
  W8(c->r[30]+0x00000076u,c->r[0]); // 80316650
  c->r[4]=0u+0x00000000u; // 80316654
  c->lr=0x8031665Cu; f_803180E0(c); // 80316658
  c->r[3]=0u+0x00000001u; // 8031665C
L_80316660:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80316660
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80316664
  c->r[30]=R32(c->r[1]+0x00000018u); // 80316668
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031666C
  c->lr=c->r[0]; // 80316670
  c->r[1]=c->r[1]+0x00000020u; // 80316674
  return; // 80316678
}

// BTM_SecReadDevName
void f_8031667C(Ctx* __restrict c) {
  trace_call(0x8031667Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031667C
  c->r[0]=c->lr; // 80316680
  c->r[4]=0u+0x80570000u; // 80316684
  W32(c->r[1]+0x00000024u,c->r[0]); // 80316688
  c->r[4]=c->r[4]+0x000058F8u; // 8031668C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80316690
  c->r[31]=0u+0x00000000u; // 80316694
  W32(c->r[1]+0x00000018u,c->r[30]); // 80316698
  c->r[30]=c->r[4]+0x00001F30u; // 8031669C
  W32(c->r[1]+0x00000014u,c->r[29]); // 803166A0
  c->r[29]=0u+0x00000000u; // 803166A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 803166A8
  c->r[28]=c->r[3]|c->r[3]; // 803166AC
L_803166B0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 803166B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803166B4
  if (crb(c,2)) { goto L_803166D8; } // 803166B8
  c->r[4]=c->r[28]|c->r[28]; // 803166BC
  c->r[3]=c->r[30]+0x0000001Cu; // 803166C0
  c->r[5]=0u+0x00000006u; // 803166C4
  c->lr=0x803166CCu; f_802E54DC(c); // 803166C8
  cmps(c,0,(int32_t)c->r[3],0); // 803166CC
  if (!crb(c,2)) { goto L_803166D8; } // 803166D0
  goto L_803166EC; // 803166D4
L_803166D8:;
  c->r[31]=c->r[31]+0x00000001u; // 803166D8
  c->r[30]=c->r[30]+0x00000088u; // 803166DC
  cmps(c,0,(int32_t)c->r[31],16); // 803166E0
  if (crb(c,0)) { IRQCHK(c); goto L_803166B0; } // 803166E4
  c->r[30]=0u+0x00000000u; // 803166E8
L_803166EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 803166EC
  if (crb(c,2)) { goto L_803166F8; } // 803166F0
  c->r[29]=c->r[30]+0x00000035u; // 803166F4
L_803166F8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803166F8
  c->r[3]=c->r[29]|c->r[29]; // 803166FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80316700
  c->r[29]=R32(c->r[1]+0x00000014u); // 80316704
  c->r[28]=R32(c->r[1]+0x00000010u); // 80316708
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031670C
  c->lr=c->r[0]; // 80316710
  c->r[1]=c->r[1]+0x00000020u; // 80316714
  return; // 80316718
}

// btm_sec_alloc_dev
void f_8031671C(Ctx* __restrict c) {
  trace_call(0x8031671Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031671C
  c->r[0]=c->lr; // 80316720
  c->r[4]=0u+0x80570000u; // 80316724
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316728
  c->r[0]=0u+0x00000010u; // 8031672C
  c->r[4]=c->r[4]+0x000058F8u; // 80316730
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80316734
  c->r[31]=0u+0x00000000u; // 80316738
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031673C
  c->r[30]=c->r[3]|c->r[3]; // 80316740
  c->r[3]=0u+0x00000000u; // 80316744
  c->ctr=c->r[0]; // 80316748
L_8031674C:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 8031674C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316750
  if (!crb(c,2)) { goto L_80316770; } // 80316754
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 80316758
  c->r[3]=0u+0x80570000u; // 8031675C
  c->r[3]=c->r[3]+0x000058F8u; // 80316760
  c->r[3]=c->r[3]+c->r[0]; // 80316764
  c->r[31]=c->r[3]+0x00001F30u; // 80316768
  goto L_8031677C; // 8031676C
L_80316770:;
  c->r[4]=c->r[4]+0x00000088u; // 80316770
  c->r[3]=c->r[3]+0x00000001u; // 80316774
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031674C; } // 80316778
L_8031677C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031677C
  if (!crb(c,2)) { goto L_8031678C; } // 80316780
  c->lr=0x80316788u; f_8031697C(c); // 80316784
  c->r[31]=c->r[3]|c->r[3]; // 80316788
L_8031678C:;
  c->r[3]=c->r[31]|c->r[31]; // 8031678C
  c->r[4]=0u+0x00000000u; // 80316790
  c->r[5]=0u+0x00000088u; // 80316794
  c->lr=0x8031679Cu; f_800060B8(c); // 80316798
  c->r[3]=0u+0x00000080u; // 8031679C
  c->r[0]=0u+0x00000000u; // 803167A0
  W8(c->r[31]+0x00000076u,c->r[3]); // 803167A4
  c->r[3]=c->r[30]|c->r[30]; // 803167A8
  W8(c->r[31]+0x00000085u,c->r[0]); // 803167AC
  c->lr=0x803167B4u; f_80319000(c); // 803167B0
  cmps(c,0,(int32_t)c->r[3],0); // 803167B4
  c->r[4]=c->r[3]|c->r[3]; // 803167B8
  if (crb(c,2)) { goto L_803167D4; } // 803167BC
  c->r[3]=c->r[31]+0x00000022u; // 803167C0
  c->r[4]=c->r[4]+0x00000008u; // 803167C4
  c->r[5]=0u+0x00000003u; // 803167C8
  c->lr=0x803167D0u; f_80005FB4(c); // 803167CC
  goto L_803167EC; // 803167D0
L_803167D4:;
  c->r[4]=0u+0x80570000u; // 803167D4
  c->r[3]=c->r[31]+0x00000022u; // 803167D8
  c->r[4]=c->r[4]+0x000058F8u; // 803167DC
  c->r[5]=0u+0x00000003u; // 803167E0
  c->r[4]=c->r[4]+0x000027BAu; // 803167E4
  c->lr=0x803167ECu; f_80005FB4(c); // 803167E8
L_803167EC:;
  c->r[4]=c->r[30]|c->r[30]; // 803167EC
  c->r[3]=c->r[31]+0x0000001Cu; // 803167F0
  c->r[5]=0u+0x00000006u; // 803167F4
  c->lr=0x803167FCu; f_80005FB4(c); // 803167F8
  c->r[3]=c->r[30]|c->r[30]; // 803167FC
  c->lr=0x80316804u; f_8031567C(c); // 80316800
  W16(c->r[31]+0x00000018u,c->r[3]); // 80316804
  c->r[5]=0u+0x80570000u; // 80316808
  c->r[5]=c->r[5]+0x000058F8u; // 8031680C
  c->r[3]=c->r[31]|c->r[31]; // 80316810
  c->r[4]=R32(c->r[5]+0x00001974u); // 80316814
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 80316818
  c->r[0]=c->r[4]+0x00000001u; // 8031681C
  W32(c->r[5]+0x00001974u,c->r[0]); // 80316820
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80316824
  c->r[30]=R32(c->r[1]+0x00000008u); // 80316828
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031682C
  c->lr=c->r[0]; // 80316830
  c->r[1]=c->r[1]+0x00000010u; // 80316834
  return; // 80316838
}

// btm_find_dev_by_handle
void f_8031683C(Ctx* __restrict c) {
  trace_call(0x8031683Cu);
  c->r[4]=0u+0x80570000u; // 8031683C
  c->r[0]=0u+0x00000004u; // 80316840
  c->r[4]=c->r[4]+0x000058F8u; // 80316844
  c->r[5]=0u+0x00000000u; // 80316848
  c->r[4]=c->r[4]+0x00001F30u; // 8031684C
  c->ctr=c->r[0]; // 80316850
L_80316854:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 80316854
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316858
  if (crb(c,2)) { goto L_80316874; } // 8031685C
  c->r[0]=R16(c->r[4]+0x00000018u); // 80316860
  cmpu(c,0,c->r[0],c->r[3]); // 80316864
  if (!crb(c,2)) { goto L_80316874; } // 80316868
  c->r[3]=c->r[4]|c->r[4]; // 8031686C
  return; // 80316870
L_80316874:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 80316874
  c->r[4]=c->r[4]+0x00000088u; // 80316878
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031687C
  if (crb(c,2)) { goto L_80316898; } // 80316880
  c->r[0]=R16(c->r[4]+0x00000018u); // 80316884
  cmpu(c,0,c->r[0],c->r[3]); // 80316888
  if (!crb(c,2)) { goto L_80316898; } // 8031688C
  c->r[3]=c->r[4]|c->r[4]; // 80316890
  return; // 80316894
L_80316898:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 80316898
  c->r[4]=c->r[4]+0x00000088u; // 8031689C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803168A0
  if (crb(c,2)) { goto L_803168BC; } // 803168A4
  c->r[0]=R16(c->r[4]+0x00000018u); // 803168A8
  cmpu(c,0,c->r[0],c->r[3]); // 803168AC
  if (!crb(c,2)) { goto L_803168BC; } // 803168B0
  c->r[3]=c->r[4]|c->r[4]; // 803168B4
  return; // 803168B8
L_803168BC:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 803168BC
  c->r[4]=c->r[4]+0x00000088u; // 803168C0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803168C4
  if (crb(c,2)) { goto L_803168E0; } // 803168C8
  c->r[0]=R16(c->r[4]+0x00000018u); // 803168CC
  cmpu(c,0,c->r[0],c->r[3]); // 803168D0
  if (!crb(c,2)) { goto L_803168E0; } // 803168D4
  c->r[3]=c->r[4]|c->r[4]; // 803168D8
  return; // 803168DC
L_803168E0:;
  c->r[5]=c->r[5]+0x00000003u; // 803168E0
  c->r[4]=c->r[4]+0x00000088u; // 803168E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80316854; } // 803168E8
  c->r[3]=0u+0x00000000u; // 803168EC
  return; // 803168F0
}

// btm_find_dev
void f_803168F4(Ctx* __restrict c) {
  trace_call(0x803168F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803168F4
  c->r[0]=c->lr; // 803168F8
  c->r[4]=0u+0x80570000u; // 803168FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80316900
  c->r[4]=c->r[4]+0x000058F8u; // 80316904
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80316908
  c->r[31]=c->r[4]+0x00001F30u; // 8031690C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80316910
  c->r[30]=0u+0x00000000u; // 80316914
  W32(c->r[1]+0x00000014u,c->r[29]); // 80316918
  c->r[29]=c->r[3]|c->r[3]; // 8031691C
L_80316920:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 80316920
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316924
  if (crb(c,2)) { goto L_8031694C; } // 80316928
  c->r[4]=c->r[29]|c->r[29]; // 8031692C
  c->r[3]=c->r[31]+0x0000001Cu; // 80316930
  c->r[5]=0u+0x00000006u; // 80316934
  c->lr=0x8031693Cu; f_802E54DC(c); // 80316938
  cmps(c,0,(int32_t)c->r[3],0); // 8031693C
  if (!crb(c,2)) { goto L_8031694C; } // 80316940
  c->r[3]=c->r[31]|c->r[31]; // 80316944
  goto L_80316960; // 80316948
L_8031694C:;
  c->r[30]=c->r[30]+0x00000001u; // 8031694C
  c->r[31]=c->r[31]+0x00000088u; // 80316950
  cmps(c,0,(int32_t)c->r[30],16); // 80316954
  if (crb(c,0)) { IRQCHK(c); goto L_80316920; } // 80316958
  c->r[3]=0u+0x00000000u; // 8031695C
L_80316960:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80316960
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80316964
  c->r[30]=R32(c->r[1]+0x00000018u); // 80316968
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031696C
  c->lr=c->r[0]; // 80316970
  c->r[1]=c->r[1]+0x00000020u; // 80316974
  return; // 80316978
}

// btm_find_oldest_dev
void f_8031697C(Ctx* __restrict c) {
  trace_call(0x8031697Cu);
  c->r[3]=0u+0x80570000u; // 8031697C
  c->r[0]=0u+0x00000004u; // 80316980
  c->r[3]=c->r[3]+0x000058F8u; // 80316984
  c->r[6]=0u+0xFFFFFFFFu; // 80316988
  c->r[5]=c->r[3]+0x00001F30u; // 8031698C
  c->r[7]=0u+0x00000000u; // 80316990
  c->r[3]=c->r[5]|c->r[5]; // 80316994
  c->ctr=c->r[0]; // 80316998
L_8031699C:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 8031699C
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803169A0
  if (crb(c,2)) { goto L_803169C4; } // 803169A4
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803169A8
  if (!crb(c,2)) { goto L_803169C4; } // 803169AC
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803169B0
  cmpu(c,0,c->r[0],c->r[6]); // 803169B4
  if (!crb(c,0)) { goto L_803169C4; } // 803169B8
  c->r[3]=c->r[5]|c->r[5]; // 803169BC
  c->r[6]=c->r[0]|c->r[0]; // 803169C0
L_803169C4:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 803169C4
  c->r[5]=c->r[5]+0x00000088u; // 803169C8
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803169CC
  if (crb(c,2)) { goto L_803169F0; } // 803169D0
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803169D4
  if (!crb(c,2)) { goto L_803169F0; } // 803169D8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 803169DC
  cmpu(c,0,c->r[0],c->r[6]); // 803169E0
  if (!crb(c,0)) { goto L_803169F0; } // 803169E4
  c->r[3]=c->r[5]|c->r[5]; // 803169E8
  c->r[6]=c->r[0]|c->r[0]; // 803169EC
L_803169F0:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 803169F0
  c->r[5]=c->r[5]+0x00000088u; // 803169F4
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 803169F8
  if (crb(c,2)) { goto L_80316A1C; } // 803169FC
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80316A00
  if (!crb(c,2)) { goto L_80316A1C; } // 80316A04
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80316A08
  cmpu(c,0,c->r[0],c->r[6]); // 80316A0C
  if (!crb(c,0)) { goto L_80316A1C; } // 80316A10
  c->r[3]=c->r[5]|c->r[5]; // 80316A14
  c->r[6]=c->r[0]|c->r[0]; // 80316A18
L_80316A1C:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 80316A1C
  c->r[5]=c->r[5]+0x00000088u; // 80316A20
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 80316A24
  if (crb(c,2)) { goto L_80316A48; } // 80316A28
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80316A2C
  if (!crb(c,2)) { goto L_80316A48; } // 80316A30
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80316A34
  cmpu(c,0,c->r[0],c->r[6]); // 80316A38
  if (!crb(c,0)) { goto L_80316A48; } // 80316A3C
  c->r[3]=c->r[5]|c->r[5]; // 80316A40
  c->r[6]=c->r[0]|c->r[0]; // 80316A44
L_80316A48:;
  c->r[7]=c->r[7]+0x00000003u; // 80316A48
  c->r[5]=c->r[5]+0x00000088u; // 80316A4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031699C; } // 80316A50
  c->r[0]=c->r[6]+0x00010000u; // 80316A54
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80316A58
  if (!crb(c,2)) return; // 80316A5C
  c->r[4]=0u+0x80570000u; // 80316A60
  c->r[0]=0u+0x00000004u; // 80316A64
  c->r[4]=c->r[4]+0x000058F8u; // 80316A68
  c->r[5]=0u+0x00000000u; // 80316A6C
  c->r[4]=c->r[4]+0x00001F30u; // 80316A70
  c->ctr=c->r[0]; // 80316A74
L_80316A78:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 80316A78
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316A7C
  if (crb(c,2)) { goto L_80316A98; } // 80316A80
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80316A84
  cmpu(c,0,c->r[0],c->r[6]); // 80316A88
  if (!crb(c,0)) { goto L_80316A98; } // 80316A8C
  c->r[3]=c->r[4]|c->r[4]; // 80316A90
  c->r[6]=c->r[0]|c->r[0]; // 80316A94
L_80316A98:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 80316A98
  c->r[4]=c->r[4]+0x00000088u; // 80316A9C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316AA0
  if (crb(c,2)) { goto L_80316ABC; } // 80316AA4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80316AA8
  cmpu(c,0,c->r[0],c->r[6]); // 80316AAC
  if (!crb(c,0)) { goto L_80316ABC; } // 80316AB0
  c->r[3]=c->r[4]|c->r[4]; // 80316AB4
  c->r[6]=c->r[0]|c->r[0]; // 80316AB8
L_80316ABC:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 80316ABC
  c->r[4]=c->r[4]+0x00000088u; // 80316AC0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316AC4
  if (crb(c,2)) { goto L_80316AE0; } // 80316AC8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80316ACC
  cmpu(c,0,c->r[0],c->r[6]); // 80316AD0
  if (!crb(c,0)) { goto L_80316AE0; } // 80316AD4
  c->r[3]=c->r[4]|c->r[4]; // 80316AD8
  c->r[6]=c->r[0]|c->r[0]; // 80316ADC
L_80316AE0:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 80316AE0
  c->r[4]=c->r[4]+0x00000088u; // 80316AE4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80316AE8
  if (crb(c,2)) { goto L_80316B04; } // 80316AEC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80316AF0
  cmpu(c,0,c->r[0],c->r[6]); // 80316AF4
  if (!crb(c,0)) { goto L_80316B04; } // 80316AF8
  c->r[3]=c->r[4]|c->r[4]; // 80316AFC
  c->r[6]=c->r[0]|c->r[0]; // 80316B00
L_80316B04:;
  c->r[5]=c->r[5]+0x00000003u; // 80316B04
  c->r[4]=c->r[4]+0x00000088u; // 80316B08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80316A78; } // 80316B0C
  return; // 80316B10
}

// btm_dev_init
void f_80316B14(Ctx* __restrict c) {
  trace_call(0x80316B14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316B14
  c->r[0]=c->lr; // 80316B18
  c->r[4]=c->r[13]+0xFFFFAB98u; // 80316B1C
  c->r[5]=0u+0x00000003u; // 80316B20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316B24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80316B28
  c->r[31]=0u+0x80570000u; // 80316B2C
  c->r[31]=c->r[31]+0x000058F8u; // 80316B30
  c->r[3]=c->r[31]+0x00000648u; // 80316B34
  c->lr=0x80316B3Cu; f_80005FB4(c); // 80316B38
  c->r[3]=0u+0x00010000u; // 80316B3C
  c->r[7]=0u+0x000000FFu; // 80316B40
  c->r[9]=c->r[3]+0xFFFFCC18u; // 80316B44
  c->r[12]=0u+0x00000001u; // 80316B48
  c->r[3]=0u+0x00001400u; // 80316B4C
  c->r[11]=0u+0x00000002u; // 80316B50
  c->r[10]=0u+0x00000004u; // 80316B54
  c->r[8]=0u+0x0000003Fu; // 80316B58
  c->r[6]=0u+0x00000000u; // 80316B5C
  c->r[0]=0u+0x00000005u; // 80316B60
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 80316B64
  c->r[3]=c->r[31]+0x00000574u; // 80316B68
  c->r[4]=0u+0x00000001u; // 80316B6C
  c->r[5]=0u+0x00000004u; // 80316B70
  W32(c->r[31]+0x00000584u,c->r[12]); // 80316B74
  W32(c->r[31]+0x000005A0u,c->r[11]); // 80316B78
  W32(c->r[31]+0x000005BCu,c->r[10]); // 80316B7C
  W16(c->r[31]+0x00000654u,c->r[9]); // 80316B80
  W16(c->r[31]+0x00000656u,c->r[8]); // 80316B84
  W8(c->r[31]+0x000027BDu,c->r[7]); // 80316B88
  W8(c->r[31]+0x000027BEu,c->r[7]); // 80316B8C
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 80316B90
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 80316B94
  c->lr=0x80316B9Cu; f_8030E7B4(c); // 80316B98
  c->lr=0x80316BA0u; f_80322544(c); // 80316B9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80316BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80316BA4
  c->lr=c->r[0]; // 80316BA8
  c->r[1]=c->r[1]+0x00000010u; // 80316BAC
  return; // 80316BB0
}

// btm_db_reset
void f_80316BB4(Ctx* __restrict c) {
  trace_call(0x80316BB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316BB4
  c->r[0]=c->lr; // 80316BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316BBC
  c->r[0]=0u+0x0000000Cu; // 80316BC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 80316BC4
  c->lr=0x80316BCCu; f_80319384(c); // 80316BC8
  c->lr=0x80316BD0u; f_80318514(c); // 80316BCC
  c->r[3]=0u+0x80570000u; // 80316BD0
  c->r[3]=c->r[3]+0x000058F8u; // 80316BD4
  c->r[12]=R32(c->r[3]+0x000005A8u); // 80316BD8
  cmps(c,0,(int32_t)c->r[12],0); // 80316BDC
  if (crb(c,2)) { goto L_80316BFC; } // 80316BE0
  c->r[0]=0u+0x00000000u; // 80316BE4
  W32(c->r[3]+0x000005A8u,c->r[0]); // 80316BE8
  if (crb(c,2)) { goto L_80316BFC; } // 80316BEC
  c->r[3]=0u+0x00000000u; // 80316BF0
  c->ctr=c->r[12]; // 80316BF4
  if (true) { c->lr=0x80316BFCu; dispatch(c,c->ctr); } // 80316BF8
L_80316BFC:;
  c->r[3]=0u+0x80570000u; // 80316BFC
  c->r[3]=c->r[3]+0x000058F8u; // 80316C00
  c->r[12]=R32(c->r[3]+0x000005C4u); // 80316C04
  cmps(c,0,(int32_t)c->r[12],0); // 80316C08
  if (crb(c,2)) { goto L_80316C28; } // 80316C0C
  c->r[0]=0u+0x00000000u; // 80316C10
  W32(c->r[3]+0x000005C4u,c->r[0]); // 80316C14
  if (crb(c,2)) { goto L_80316C28; } // 80316C18
  c->r[3]=c->r[1]+0x00000008u; // 80316C1C
  c->ctr=c->r[12]; // 80316C20
  if (true) { c->lr=0x80316C28u; dispatch(c,c->ctr); } // 80316C24
L_80316C28:;
  c->r[3]=0u+0x80570000u; // 80316C28
  c->r[3]=c->r[3]+0x000058F8u; // 80316C2C
  c->r[12]=R32(c->r[3]+0x000005E0u); // 80316C30
  cmps(c,0,(int32_t)c->r[12],0); // 80316C34
  if (crb(c,2)) { goto L_80316C54; } // 80316C38
  c->r[0]=0u+0x00000000u; // 80316C3C
  W32(c->r[3]+0x000005E0u,c->r[0]); // 80316C40
  if (crb(c,2)) { goto L_80316C54; } // 80316C44
  c->r[3]=c->r[1]+0x00000008u; // 80316C48
  c->ctr=c->r[12]; // 80316C4C
  if (true) { c->lr=0x80316C54u; dispatch(c,c->ctr); } // 80316C50
L_80316C54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80316C54
  c->lr=c->r[0]; // 80316C58
  c->r[1]=c->r[1]+0x00000010u; // 80316C5C
  return; // 80316C60
}

// BTM_DeviceReset
void f_80316C64(Ctx* __restrict c) {
  trace_call(0x80316C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316C64
  c->r[0]=c->lr; // 80316C68
  c->r[4]=0u+0x80570000u; // 80316C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316C70
  c->r[4]=c->r[4]+0x000058F8u; // 80316C74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80316C78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80316C7C
  c->r[30]=c->r[3]|c->r[3]; // 80316C80
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 80316C84
  cmps(c,0,(int32_t)c->r[0],0); // 80316C88
  if (crb(c,2)) { goto L_80316C98; } // 80316C8C
  cmpu(c,0,c->r[0],c->r[3]); // 80316C90
  if (!crb(c,2)) { goto L_80316CE8; } // 80316C94
L_80316C98:;
  c->lr=0x80316C9Cu; f_80314B7C(c); // 80316C98
  c->lr=0x80316CA0u; f_80316BB4(c); // 80316C9C
  c->r[31]=0u+0x80570000u; // 80316CA0
  c->r[6]=0u+0x00000000u; // 80316CA4
  c->r[31]=c->r[31]+0x000058F8u; // 80316CA8
  c->r[0]=0u+0x00000005u; // 80316CAC
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 80316CB0
  c->r[3]=c->r[31]+0x00000574u; // 80316CB4
  c->r[4]=0u+0x00000001u; // 80316CB8
  c->r[5]=0u+0x00000004u; // 80316CBC
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 80316CC0
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 80316CC4
  c->lr=0x80316CCCu; f_8030E7B4(c); // 80316CC8
  c->lr=0x80316CD0u; f_80322544(c); // 80316CCC
  c->r[12]=R32(c->r[31]+0x00000568u); // 80316CD0
  cmps(c,0,(int32_t)c->r[12],0); // 80316CD4
  if (crb(c,2)) { goto L_80316CE8; } // 80316CD8
  c->r[3]=0u+0x00000001u; // 80316CDC
  c->ctr=c->r[12]; // 80316CE0
  if (true) { c->lr=0x80316CE8u; dispatch(c,c->ctr); } // 80316CE4
L_80316CE8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80316CE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80316CEC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80316CF0
  c->lr=c->r[0]; // 80316CF4
  c->r[1]=c->r[1]+0x00000010u; // 80316CF8
  return; // 80316CFC
}

// BTM_SendHciReset
void f_80316D00(Ctx* __restrict c) {
  trace_call(0x80316D00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316D00
  c->r[0]=c->lr; // 80316D04
  c->r[4]=0u+0x80570000u; // 80316D08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316D0C
  c->r[4]=c->r[4]+0x000058F8u; // 80316D10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80316D14
  W32(c->r[1]+0x00000008u,c->r[30]); // 80316D18
  c->r[30]=c->r[3]|c->r[3]; // 80316D1C
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 80316D20
  cmps(c,0,(int32_t)c->r[0],0); // 80316D24
  if (crb(c,2)) { goto L_80316D40; } // 80316D28
  cmpu(c,0,c->r[0],c->r[3]); // 80316D2C
  if (crb(c,2)) { goto L_80316D40; } // 80316D30
  c->r[0]=R32(c->r[4]+0x00000620u); // 80316D34
  cmpu(c,0,c->r[0],c->r[3]); // 80316D38
  if (!crb(c,2)) { goto L_80316D90; } // 80316D3C
L_80316D40:;
  c->lr=0x80316D44u; f_80314B7C(c); // 80316D40
  c->lr=0x80316D48u; f_80316BB4(c); // 80316D44
  c->r[31]=0u+0x80570000u; // 80316D48
  c->r[6]=0u+0x00000000u; // 80316D4C
  c->r[31]=c->r[31]+0x000058F8u; // 80316D50
  c->r[0]=0u+0x00000005u; // 80316D54
  W32(c->r[31]+0x00000620u,c->r[30]); // 80316D58
  c->r[3]=c->r[31]+0x00000574u; // 80316D5C
  c->r[4]=0u+0x00000001u; // 80316D60
  c->r[5]=0u+0x00000004u; // 80316D64
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 80316D68
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 80316D6C
  c->lr=0x80316D74u; f_8030E7B4(c); // 80316D70
  c->lr=0x80316D78u; f_80322544(c); // 80316D74
  c->r[12]=R32(c->r[31]+0x00000568u); // 80316D78
  cmps(c,0,(int32_t)c->r[12],0); // 80316D7C
  if (crb(c,2)) { goto L_80316D90; } // 80316D80
  c->r[3]=0u+0x00000001u; // 80316D84
  c->ctr=c->r[12]; // 80316D88
  if (true) { c->lr=0x80316D90u; dispatch(c,c->ctr); } // 80316D8C
L_80316D90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80316D90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80316D94
  c->r[30]=R32(c->r[1]+0x00000008u); // 80316D98
  c->lr=c->r[0]; // 80316D9C
  c->r[1]=c->r[1]+0x00000010u; // 80316DA0
  return; // 80316DA4
}

// BTM_IsDeviceUp
void f_80316DA8(Ctx* __restrict c) {
  trace_call(0x80316DA8u);
  c->r[3]=0u+0x80570000u; // 80316DA8
  c->r[3]=c->r[3]+0x000058F8u; // 80316DAC
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 80316DB0
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 80316DB4
  c->r[0]=cntlz(c->r[0]); // 80316DB8
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 80316DBC
  return; // 80316DC0
}

// BTM_SetAfhChannels
void f_80316DC4(Ctx* __restrict c) {
  trace_call(0x80316DC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316DC4
  c->r[0]=c->lr; // 80316DC8
  c->r[7]=0u+0x80570000u; // 80316DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316DD0
  c->r[7]=c->r[7]+0x000058F8u; // 80316DD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80316DD8
  c->r[31]=c->r[4]|c->r[4]; // 80316DDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80316DE0
  c->r[30]=c->r[3]|c->r[3]; // 80316DE4
  c->r[0]=R8(c->r[7]+0x000027C0u); // 80316DE8
  cmpu(c,0,c->r[0],0x00000003u); // 80316DEC
  if (crb(c,0)) { goto L_80316E18; } // 80316DF0
  c->r[3]=0u+0x000D0000u; // 80316DF4
  c->r[4]=0u+0x80490000u; // 80316DF8
  c->r[6]=R8(c->r[7]+0x000027BDu); // 80316DFC
  c->r[5]=c->r[30]|c->r[30]; // 80316E00
  c->r[8]=R8(c->r[7]+0x000027BEu); // 80316E04
  c->r[7]=c->r[31]|c->r[31]; // 80316E08
  c->r[3]=c->r[3]+0x00000002u; // 80316E0C
  c->r[4]=c->r[4]+0xFFFFFC48u; // 80316E10
  c->lr=0x80316E18u; f_8030E248(c); // 80316E14
L_80316E18:;
  c->r[3]=0u+0x80570000u; // 80316E18
  c->r[3]=c->r[3]+0x000058F8u; // 80316E1C
  c->r[4]=R8(c->r[3]+0x00000645u); // 80316E20
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 80316E24
  if (!crb(c,2)) { goto L_80316E48; } // 80316E28
  c->r[0]=R8(c->r[3]+0x00000644u); // 80316E2C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80316E30
  if (!crb(c,2)) { goto L_80316E48; } // 80316E34
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 80316E38
  if (!crb(c,2)) { goto L_80316E48; } // 80316E3C
  c->r[3]=0u+0x00000004u; // 80316E40
  goto L_80316E9C; // 80316E44
L_80316E48:;
  c->r[3]=0u+0x80570000u; // 80316E48
  c->r[3]=c->r[3]+0x000058F8u; // 80316E4C
  c->r[0]=R8(c->r[3]+0x000027BDu); // 80316E50
  cmpu(c,0,c->r[0],c->r[30]); // 80316E54
  if (!crb(c,2)) { goto L_80316E68; } // 80316E58
  c->r[0]=R8(c->r[3]+0x000027BEu); // 80316E5C
  cmpu(c,0,c->r[0],c->r[31]); // 80316E60
  if (crb(c,2)) { goto L_80316E98; } // 80316E64
L_80316E68:;
  c->r[3]=c->r[30]|c->r[30]; // 80316E68
  c->r[4]=c->r[31]|c->r[31]; // 80316E6C
  c->lr=0x80316E74u; f_80323238(c); // 80316E70
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80316E74
  if (crb(c,2)) { goto L_80316E90; } // 80316E78
  c->r[3]=0u+0x80570000u; // 80316E7C
  c->r[3]=c->r[3]+0x000058F8u; // 80316E80
  W8(c->r[3]+0x000027BDu,c->r[30]); // 80316E84
  W8(c->r[3]+0x000027BEu,c->r[31]); // 80316E88
  goto L_80316E98; // 80316E8C
L_80316E90:;
  c->r[3]=0u+0x00000003u; // 80316E90
  goto L_80316E9C; // 80316E94
L_80316E98:;
  c->r[3]=0u+0x00000000u; // 80316E98
L_80316E9C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80316E9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80316EA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80316EA4
  c->lr=c->r[0]; // 80316EA8
  c->r[1]=c->r[1]+0x00000010u; // 80316EAC
  return; // 80316EB0
}

// btm_dev_timeout
void f_80316EB4(Ctx* __restrict c) {
  trace_call(0x80316EB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80316EB4
  c->r[0]=c->lr; // 80316EB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80316EBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80316EC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80316EC4
  c->r[0]=R32(c->r[3]+0x00000010u); // 80316EC8
  cmpu(c,0,c->r[0],0x00000001u); // 80316ECC
  if (!crb(c,2)) { goto L_80317104; } // 80316ED0
  c->r[6]=0u+0x80570000u; // 80316ED4
  c->r[6]=c->r[6]+0x000058F8u; // 80316ED8
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 80316EDC
  cmps(c,0,(int32_t)c->r[0],2); // 80316EE0
  if (crb(c,2)) { goto L_80317044; } // 80316EE4
  if (!crb(c,0)) { goto L_80316EFC; } // 80316EE8
  cmps(c,0,(int32_t)c->r[0],0); // 80316EEC
  if (crb(c,2)) { goto L_80316F08; } // 80316EF0
  if (!crb(c,0)) { goto L_80316F30; } // 80316EF4
  goto L_80317134; // 80316EF8
L_80316EFC:;
  cmps(c,0,(int32_t)c->r[0],4); // 80316EFC
  if (!crb(c,0)) { goto L_80317134; } // 80316F00
  goto L_803170A8; // 80316F04
L_80316F08:;
  c->r[3]=0u+0x00000000u; // 80316F08
  c->r[0]=0u+0x00000005u; // 80316F0C
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 80316F10
  c->r[3]=c->r[6]+0x00000574u; // 80316F14
  c->r[4]=0u+0x00000001u; // 80316F18
  c->r[5]=0u+0x00000004u; // 80316F1C
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 80316F20
  c->lr=0x80316F28u; f_8030E7B4(c); // 80316F24
  c->lr=0x80316F2Cu; f_80322544(c); // 80316F28
  goto L_80317134; // 80316F2C
L_80316F30:;
  c->r[0]=0u+0x00000004u; // 80316F30
  c->r[3]=0u+0x00000002u; // 80316F34
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 80316F38
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 80316F3C
  goto L_80316F58; // 80316F40
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 80316F44
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 80316F48
  c->lr=0x80316F50u; f_8030E7B4(c); // 80316F4C
  c->lr=0x80316F54u; f_80322544(c); // 80316F50
  goto L_80316F7C; // 80316F54
L_80316F58:;
  c->r[3]=c->r[6]+0x00000574u; // 80316F58
  c->r[4]=0u+0x00000001u; // 80316F5C
  c->r[5]=0u+0x00000001u; // 80316F60
  c->lr=0x80316F68u; f_8030E7B4(c); // 80316F64
  c->r[3]=0u+0x00000002u; // 80316F68
  c->lr=0x80316F70u; f_8030AF24(c); // 80316F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80316F70
  if (crb(c,2)) { goto L_80316F7C; } // 80316F74
  c->lr=0x80316F7Cu; f_803230BC(c); // 80316F78
L_80316F7C:;
  c->r[31]=0u+0x80570000u; // 80316F7C
  c->r[5]=0u+0x00000003u; // 80316F80
  c->r[31]=c->r[31]+0x000058F8u; // 80316F84
  c->r[3]=c->r[31]+0x00000648u; // 80316F88
  c->r[4]=c->r[3]|c->r[3]; // 80316F8C
  c->lr=0x80316F94u; f_80005FB4(c); // 80316F90
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80316F94
  cmps(c,0,(int32_t)c->r[0],0); // 80316F98
  if (crb(c,2)) { goto L_80316FC0; } // 80316F9C
  cmpu(c,0,c->r[0],0x00000001u); // 80316FA0
  if (crb(c,2)) { goto L_80316FC0; } // 80316FA4
  c->r[3]=0u+0x00000002u; // 80316FA8
  c->lr=0x80316FB0u; f_8030AF24(c); // 80316FAC
  cmps(c,0,(int32_t)c->r[3],0); // 80316FB0
  if (crb(c,2)) { goto L_80316FC0; } // 80316FB4
  c->r[4]=c->r[31]+0x00000648u; // 80316FB8
  c->lr=0x80316FC0u; f_80322DB8(c); // 80316FBC
L_80316FC0:;
  c->r[0]=0u+0x80570000u; // 80316FC0
  c->r[31]=addc(c,c->r[0],0x000058F8u,0); cr0(c,c->r[31]); // 80316FC4
  if (crb(c,2)) { goto L_80317028; } // 80316FC8
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80316FCC
  cmps(c,0,(int32_t)c->r[0],0); // 80316FD0
  if (crb(c,2)) { goto L_80317028; } // 80316FD4
  cmpu(c,0,c->r[0],0x00000001u); // 80316FD8
  if (crb(c,2)) { goto L_80317028; } // 80316FDC
  c->r[3]=0u+0x00000002u; // 80316FE0
  c->lr=0x80316FE8u; f_8030AF24(c); // 80316FE4
  cmps(c,0,(int32_t)c->r[3],0); // 80316FE8
  c->r[30]=c->r[3]|c->r[3]; // 80316FEC
  if (crb(c,2)) { goto L_80317028; } // 80316FF0
  cmpu(c,0,c->r[31],c->r[31]); // 80316FF4
  if (crb(c,2)) { goto L_8031701C; } // 80316FF8
  c->r[3]=c->r[31]|c->r[31]; // 80316FFC
  c->r[4]=0u+0x00000000u; // 80317000
  c->r[5]=0u+0x00000020u; // 80317004
  c->lr=0x8031700Cu; f_800060B8(c); // 80317008
  c->r[3]=c->r[31]|c->r[31]; // 8031700C
  c->r[4]=c->r[31]|c->r[31]; // 80317010
  c->r[5]=0u+0x0000001Fu; // 80317014
  c->lr=0x8031701Cu; f_802E9608(c); // 80317018
L_8031701C:;
  c->r[3]=c->r[30]|c->r[30]; // 8031701C
  c->r[4]=c->r[31]|c->r[31]; // 80317020
  c->lr=0x80317028u; f_80322AA0(c); // 80317024
L_80317028:;
  c->r[5]=0u+0x80570000u; // 80317028
  c->r[5]=c->r[5]+0x000058F8u; // 8031702C
  c->r[3]=R8(c->r[5]+0x00000020u); // 80317030
  c->r[4]=c->r[5]+0x00000022u; // 80317034
  c->r[5]=R8(c->r[5]+0x00000021u); // 80317038
  c->lr=0x80317040u; f_8031BCAC(c); // 8031703C
  goto L_80317134; // 80317040
L_80317044:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 80317044
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80317048
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031704C
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 80317050
  if (!crb(c,2)) { goto L_80317080; } // 80317054
  c->r[3]=0u+0x00000000u; // 80317058
  c->r[0]=0u+0x00000005u; // 8031705C
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 80317060
  c->r[3]=c->r[6]+0x00000574u; // 80317064
  c->r[4]=0u+0x00000001u; // 80317068
  c->r[5]=0u+0x00000004u; // 8031706C
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 80317070
  c->lr=0x80317078u; f_8030E7B4(c); // 80317074
  c->lr=0x8031707Cu; f_80322544(c); // 80317078
  goto L_80317134; // 8031707C
L_80317080:;
  c->r[3]=c->r[6]+0x00000574u; // 80317080
  c->r[4]=0u+0x00000001u; // 80317084
  c->r[5]=0u+0x00000001u; // 80317088
  c->lr=0x80317090u; f_8030E7B4(c); // 8031708C
  c->r[3]=0u+0x00000002u; // 80317090
  c->lr=0x80317098u; f_8030AF24(c); // 80317094
  cmps(c,0,(int32_t)c->r[3],0); // 80317098
  if (crb(c,2)) { goto L_80317134; } // 8031709C
  c->lr=0x803170A4u; f_803230BC(c); // 803170A0
  goto L_80317134; // 803170A4
L_803170A8:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 803170A8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 803170AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803170B0
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 803170B4
  if (!crb(c,2)) { goto L_803170E4; } // 803170B8
  c->r[3]=0u+0x00000000u; // 803170BC
  c->r[0]=0u+0x00000005u; // 803170C0
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 803170C4
  c->r[3]=c->r[6]+0x00000574u; // 803170C8
  c->r[4]=0u+0x00000001u; // 803170CC
  c->r[5]=0u+0x00000004u; // 803170D0
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 803170D4
  c->lr=0x803170DCu; f_8030E7B4(c); // 803170D8
  c->lr=0x803170E0u; f_80322544(c); // 803170DC
  goto L_80317134; // 803170E0
L_803170E4:;
  c->r[3]=c->r[6]+0x00000574u; // 803170E4
  c->r[4]=0u+0x00000001u; // 803170E8
  c->r[5]=0u+0x00000001u; // 803170EC
  c->lr=0x803170F4u; f_8030E7B4(c); // 803170F0
  c->lr=0x803170F8u; f_80323000(c); // 803170F4
  c->lr=0x803170FCu; f_803230E4(c); // 803170F8
  c->lr=0x80317100u; f_8031A408(c); // 803170FC
  goto L_80317134; // 80317100
L_80317104:;
  cmpu(c,0,c->r[0],0x00000002u); // 80317104
  if (!crb(c,2)) { goto L_80317134; } // 80317108
  c->r[3]=0u+0x80570000u; // 8031710C
  c->r[0]=0u+0x00000000u; // 80317110
  c->r[3]=c->r[3]+0x000058F8u; // 80317114
  c->r[12]=R32(c->r[3]+0x000005A8u); // 80317118
  cmps(c,0,(int32_t)c->r[12],0); // 8031711C
  W32(c->r[3]+0x000005A8u,c->r[0]); // 80317120
  if (crb(c,2)) { goto L_80317134; } // 80317124
  c->r[3]=0u+0x00000000u; // 80317128
  c->ctr=c->r[12]; // 8031712C
  if (true) { c->lr=0x80317134u; dispatch(c,c->ctr); } // 80317130
L_80317134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80317134
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80317138
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031713C
  c->lr=c->r[0]; // 80317140
  c->r[1]=c->r[1]+0x00000010u; // 80317144
  return; // 80317148
}

// btm_reset_complete
void f_8031714C(Ctx* __restrict c) {
  trace_call(0x8031714Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031714C
  c->r[0]=c->lr; // 80317150
  c->r[3]=0u+0x80570000u; // 80317154
  W32(c->r[1]+0x00000014u,c->r[0]); // 80317158
  c->r[3]=c->r[3]+0x000058F8u; // 8031715C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80317160
  W32(c->r[1]+0x00000008u,c->r[30]); // 80317164
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80317168
  cmpu(c,0,c->r[0],0x00000004u); // 8031716C
  if (crb(c,0)) { goto L_80317188; } // 80317170
  c->r[3]=0u+0x000D0000u; // 80317174
  c->r[4]=0u+0x80490000u; // 80317178
  c->r[3]=c->r[3]+0x00000003u; // 8031717C
  c->r[4]=c->r[4]+0xFFFFFC78u; // 80317180
  c->lr=0x80317188u; f_8030E1E8(c); // 80317184
L_80317188:;
  c->r[31]=0u+0x80570000u; // 80317188
  c->r[31]=c->r[31]+0x000058F8u; // 8031718C
  c->r[12]=R32(c->r[31]+0x00000620u); // 80317190
  cmps(c,0,(int32_t)c->r[12],0); // 80317194
  if (crb(c,2)) { goto L_803171B4; } // 80317198
  c->r[0]=0u+0x00000000u; // 8031719C
  c->r[3]=0u+0x00000000u; // 803171A0
  W32(c->r[31]+0x00000620u,c->r[0]); // 803171A4
  c->ctr=c->r[12]; // 803171A8
  if (true) { c->lr=0x803171B0u; dispatch(c,c->ctr); } // 803171AC
  goto L_803172F8; // 803171B0
L_803171B4:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 803171B4
  cmps(c,0,(int32_t)c->r[0],0); // 803171B8
  if (!crb(c,2)) { goto L_803172F8; } // 803171BC
  c->lr=0x803171C4u; f_8032C864(c); // 803171C0
  c->r[6]=0u+0x00000012u; // 803171C4
  c->r[5]=0u+0x00000800u; // 803171C8
  c->r[4]=0u+0x00000000u; // 803171CC
  c->r[0]=0u+0x00000004u; // 803171D0
  c->r[3]=0u+0x00000002u; // 803171D4
  W16(c->r[31]+0x000016A0u,c->r[6]); // 803171D8
  W16(c->r[31]+0x000016A2u,c->r[5]); // 803171DC
  W16(c->r[31]+0x000016A4u,c->r[4]); // 803171E0
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 803171E4
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 803171E8
  W16(c->r[31]+0x000016A6u,c->r[4]); // 803171EC
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 803171F0
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 803171F4
  goto L_80317210; // 803171F8
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 803171FC
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 80317200
  c->lr=0x80317208u; f_8030E7B4(c); // 80317204
  c->lr=0x8031720Cu; f_80322544(c); // 80317208
  goto L_80317234; // 8031720C
L_80317210:;
  c->r[3]=c->r[31]+0x00000574u; // 80317210
  c->r[4]=0u+0x00000001u; // 80317214
  c->r[5]=0u+0x00000001u; // 80317218
  c->lr=0x80317220u; f_8030E7B4(c); // 8031721C
  c->r[3]=0u+0x00000002u; // 80317220
  c->lr=0x80317228u; f_8030AF24(c); // 80317224
  cmps(c,0,(int32_t)c->r[3],0); // 80317228
  if (crb(c,2)) { goto L_80317234; } // 8031722C
  c->lr=0x80317234u; f_803230BC(c); // 80317230
L_80317234:;
  c->r[31]=0u+0x80570000u; // 80317234
  c->r[5]=0u+0x00000003u; // 80317238
  c->r[31]=c->r[31]+0x000058F8u; // 8031723C
  c->r[3]=c->r[31]+0x00000648u; // 80317240
  c->r[4]=c->r[3]|c->r[3]; // 80317244
  c->lr=0x8031724Cu; f_80005FB4(c); // 80317248
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 8031724C
  cmps(c,0,(int32_t)c->r[0],0); // 80317250
  if (crb(c,2)) { goto L_80317278; } // 80317254
  cmpu(c,0,c->r[0],0x00000001u); // 80317258
  if (crb(c,2)) { goto L_80317278; } // 8031725C
  c->r[3]=0u+0x00000002u; // 80317260
  c->lr=0x80317268u; f_8030AF24(c); // 80317264
  cmps(c,0,(int32_t)c->r[3],0); // 80317268
  if (crb(c,2)) { goto L_80317278; } // 8031726C
  c->r[4]=c->r[31]+0x00000648u; // 80317270
  c->lr=0x80317278u; f_80322DB8(c); // 80317274
L_80317278:;
  c->r[0]=0u+0x80570000u; // 80317278
  c->r[31]=addc(c,c->r[0],0x000058F8u,0); cr0(c,c->r[31]); // 8031727C
  if (crb(c,2)) { goto L_803172E0; } // 80317280
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80317284
  cmps(c,0,(int32_t)c->r[0],0); // 80317288
  if (crb(c,2)) { goto L_803172E0; } // 8031728C
  cmpu(c,0,c->r[0],0x00000001u); // 80317290
  if (crb(c,2)) { goto L_803172E0; } // 80317294
  c->r[3]=0u+0x00000002u; // 80317298
  c->lr=0x803172A0u; f_8030AF24(c); // 8031729C
  cmps(c,0,(int32_t)c->r[3],0); // 803172A0
  c->r[30]=c->r[3]|c->r[3]; // 803172A4
  if (crb(c,2)) { goto L_803172E0; } // 803172A8
  cmpu(c,0,c->r[31],c->r[31]); // 803172AC
  if (crb(c,2)) { goto L_803172D4; } // 803172B0
  c->r[3]=c->r[31]|c->r[31]; // 803172B4
  c->r[4]=0u+0x00000000u; // 803172B8
  c->r[5]=0u+0x00000020u; // 803172BC
  c->lr=0x803172C4u; f_800060B8(c); // 803172C0
  c->r[3]=c->r[31]|c->r[31]; // 803172C4
  c->r[4]=c->r[31]|c->r[31]; // 803172C8
  c->r[5]=0u+0x0000001Fu; // 803172CC
  c->lr=0x803172D4u; f_802E9608(c); // 803172D0
L_803172D4:;
  c->r[3]=c->r[30]|c->r[30]; // 803172D4
  c->r[4]=c->r[31]|c->r[31]; // 803172D8
  c->lr=0x803172E0u; f_80322AA0(c); // 803172DC
L_803172E0:;
  c->r[5]=0u+0x80570000u; // 803172E0
  c->r[5]=c->r[5]+0x000058F8u; // 803172E4
  c->r[3]=R8(c->r[5]+0x00000020u); // 803172E8
  c->r[4]=c->r[5]+0x00000022u; // 803172EC
  c->r[5]=R8(c->r[5]+0x00000021u); // 803172F0
  c->lr=0x803172F8u; f_8031BCAC(c); // 803172F4
L_803172F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803172F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803172FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 80317300
  c->lr=c->r[0]; // 80317304
  c->r[1]=c->r[1]+0x00000010u; // 80317308
  return; // 8031730C
}

// btm_read_hci_buf_size_complete
void f_80317310(Ctx* __restrict c) {
  trace_call(0x80317310u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317310
  c->r[0]=c->lr; // 80317314
  W32(c->r[1]+0x00000014u,c->r[0]); // 80317318
  c->r[0]=R8(c->r[3]+0x00000000u); // 8031731C
  cmps(c,0,(int32_t)c->r[0],0); // 80317320
  if (!crb(c,2)) { goto L_8031737C; } // 80317324
  c->r[0]=R8(c->r[3]+0x00000002u); // 80317328
  c->r[6]=0u+0x80570000u; // 8031732C
  c->r[4]=R8(c->r[3]+0x00000001u); // 80317330
  c->r[6]=c->r[6]+0x000053D0u; // 80317334
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80317338
  c->r[0]=c->r[4]+c->r[0]; // 8031733C
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 80317340
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80317344
  c->r[0]=c->r[4]+0x00000004u; // 80317348
  c->r[4]=R8(c->r[3]+0x00000005u); // 8031734C
  c->r[5]=R8(c->r[3]+0x00000004u); // 80317350
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 80317354
  c->r[3]=c->r[5]+c->r[3]; // 80317358
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 8031735C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 80317360
  c->lr=0x80317368u; f_803298E0(c); // 80317364
  c->r[3]=0u+0x0000069Bu; // 80317368
  c->r[4]=0u+0x0000001Eu; // 8031736C
  c->r[5]=0u+0x00000014u; // 80317370
  c->r[6]=0u+0x0000000Au; // 80317374
  c->lr=0x8031737Cu; f_80322E40(c); // 80317378
L_8031737C:;
  c->r[3]=0u+0x80570000u; // 8031737C
  c->r[0]=0u+0x00000004u; // 80317380
  c->r[3]=c->r[3]+0x000058F8u; // 80317384
  c->r[4]=0u+0x00000003u; // 80317388
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 8031738C
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 80317390
  goto L_803173AC; // 80317394
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 80317398
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 8031739C
  c->lr=0x803173A4u; f_8030E7B4(c); // 803173A0
  c->lr=0x803173A8u; f_80322544(c); // 803173A4
  goto L_803173C8; // 803173A8
L_803173AC:;
  c->r[3]=c->r[3]+0x00000574u; // 803173AC
  c->r[4]=0u+0x00000001u; // 803173B0
  c->r[5]=0u+0x00000001u; // 803173B4
  c->lr=0x803173BCu; f_8030E7B4(c); // 803173B8
  c->lr=0x803173C0u; f_80323000(c); // 803173BC
  c->lr=0x803173C4u; f_803230E4(c); // 803173C0
  c->lr=0x803173C8u; f_8031A408(c); // 803173C4
L_803173C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803173C8
  c->lr=c->r[0]; // 803173CC
  c->r[1]=c->r[1]+0x00000010u; // 803173D0
  return; // 803173D4
}

// btm_read_local_version_complete
void f_803173D8(Ctx* __restrict c) {
  trace_call(0x803173D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803173D8
  c->r[0]=c->lr; // 803173DC
  c->r[5]=0u+0x80570000u; // 803173E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 803173E4
  c->r[5]=c->r[5]+0x000058F8u; // 803173E8
  c->r[0]=R8(c->r[3]+0x00000000u); // 803173EC
  cmps(c,0,(int32_t)c->r[0],0); // 803173F0
  if (!crb(c,2)) { goto L_80317444; } // 803173F4
  c->r[0]=R8(c->r[3]+0x00000001u); // 803173F8
  W8(c->r[5]+0x00000636u,c->r[0]); // 803173FC
  c->r[0]=R8(c->r[3]+0x00000003u); // 80317400
  c->r[4]=R8(c->r[3]+0x00000002u); // 80317404
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80317408
  c->r[0]=c->r[4]+c->r[0]; // 8031740C
  W16(c->r[5]+0x00000638u,c->r[0]); // 80317410
  c->r[0]=R8(c->r[3]+0x00000004u); // 80317414
  W8(c->r[5]+0x0000063Au,c->r[0]); // 80317418
  c->r[0]=R8(c->r[3]+0x00000006u); // 8031741C
  c->r[4]=R8(c->r[3]+0x00000005u); // 80317420
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80317424
  c->r[0]=c->r[4]+c->r[0]; // 80317428
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 8031742C
  c->r[0]=R8(c->r[3]+0x00000008u); // 80317430
  c->r[3]=R8(c->r[3]+0x00000007u); // 80317434
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80317438
  c->r[0]=c->r[3]+c->r[0]; // 8031743C
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 80317440
L_80317444:;
  c->r[3]=0u+0x80570000u; // 80317444
  c->r[0]=0u+0x00000004u; // 80317448
  c->r[3]=c->r[3]+0x000058F8u; // 8031744C
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 80317450
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 80317454
  goto L_80317470; // 80317458
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 8031745C
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 80317460
  c->lr=0x80317468u; f_8030E7B4(c); // 80317464
  c->lr=0x8031746Cu; f_80322544(c); // 80317468
  goto L_80317484; // 8031746C
L_80317470:;
  c->r[3]=c->r[3]+0x00000574u; // 80317470
  c->r[4]=0u+0x00000001u; // 80317474
  c->r[5]=0u+0x00000001u; // 80317478
  c->lr=0x80317480u; f_8030E7B4(c); // 8031747C
  c->lr=0x80317484u; f_80323060(c); // 80317480
L_80317484:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80317484
  c->lr=c->r[0]; // 80317488
  c->r[1]=c->r[1]+0x00000010u; // 8031748C
  return; // 80317490
}

// btm_read_local_features_complete
void f_80317494(Ctx* __restrict c) {
  trace_call(0x80317494u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317494
  c->r[0]=c->lr; // 80317498
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031749C
  c->r[11]=c->r[1]+0x00000020u; // 803174A0
  c->lr=0x803174A8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803174A4
  c->r[31]=0u+0x80570000u; // 803174A8
  c->r[30]=0u+0x80490000u; // 803174AC
  c->r[31]=c->r[31]+0x000058F8u; // 803174B0
  c->r[0]=0u+0x00000000u; // 803174B4
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 803174B8
  c->r[30]=c->r[30]+0xFFFFFC48u; // 803174BC
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 803174C0
  c->r[0]=R8(c->r[3]+0x00000000u); // 803174C4
  cmps(c,0,(int32_t)c->r[0],0); // 803174C8
  if (!crb(c,2)) { goto L_80317978; } // 803174CC
  c->r[0]=0u+0x00000005u; // 803174D0
  c->r[4]=0u+0x00000018u; // 803174D4
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 803174D8
  c->r[0]=R8(c->r[3]+0x00000001u); // 803174DC
  W8(c->r[31]+0x00000640u,c->r[0]); // 803174E0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803174E4
  c->r[0]=R8(c->r[3]+0x00000002u); // 803174E8
  W8(c->r[31]+0x00000641u,c->r[0]); // 803174EC
  c->r[0]=R8(c->r[3]+0x00000003u); // 803174F0
  W8(c->r[31]+0x00000642u,c->r[0]); // 803174F4
  c->r[0]=R8(c->r[3]+0x00000004u); // 803174F8
  W8(c->r[31]+0x00000643u,c->r[0]); // 803174FC
  c->r[0]=R8(c->r[3]+0x00000005u); // 80317500
  W8(c->r[31]+0x00000644u,c->r[0]); // 80317504
  c->r[0]=R8(c->r[3]+0x00000006u); // 80317508
  W8(c->r[31]+0x00000645u,c->r[0]); // 8031750C
  c->r[0]=R8(c->r[3]+0x00000007u); // 80317510
  W8(c->r[31]+0x00000646u,c->r[0]); // 80317514
  c->r[0]=R8(c->r[3]+0x00000008u); // 80317518
  W8(c->r[31]+0x00000647u,c->r[0]); // 8031751C
  W16(c->r[31]+0x00000654u,c->r[4]); // 80317520
  if (crb(c,2)) { goto L_80317530; } // 80317524
  c->r[0]=c->r[4]|0x00000C00u; // 80317528
  W16(c->r[31]+0x00000654u,c->r[0]); // 8031752C
L_80317530:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 80317530
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80317534
  if (crb(c,2)) { goto L_80317550; } // 80317538
  c->r[3]=0u+0x80570000u; // 8031753C
  c->r[3]=c->r[3]+0x000058F8u; // 80317540
  c->r[0]=R16(c->r[3]+0x00000654u); // 80317544
  c->r[0]=c->r[0]|0x0000C000u; // 80317548
  W16(c->r[3]+0x00000654u,c->r[0]); // 8031754C
L_80317550:;
  c->r[3]=0u+0x80570000u; // 80317550
  c->r[3]=c->r[3]+0x000058F8u; // 80317554
  c->r[0]=R8(c->r[3]+0x00000636u); // 80317558
  cmpu(c,0,c->r[0],0x00000003u); // 8031755C
  if (crb(c,0)) { goto L_803175F0; } // 80317560
  c->r[0]=R8(c->r[31]+0x00000643u); // 80317564
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80317568
  if (!crb(c,2)) { goto L_8031757C; } // 8031756C
  c->r[0]=R16(c->r[3]+0x00000654u); // 80317570
  c->r[0]=c->r[0]|0x00001102u; // 80317574
  W16(c->r[3]+0x00000654u,c->r[0]); // 80317578
L_8031757C:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 8031757C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80317580
  if (!crb(c,2)) { goto L_8031759C; } // 80317584
  c->r[3]=0u+0x80570000u; // 80317588
  c->r[3]=c->r[3]+0x000058F8u; // 8031758C
  c->r[0]=R16(c->r[3]+0x00000654u); // 80317590
  c->r[0]=c->r[0]|0x00002204u; // 80317594
  W16(c->r[3]+0x00000654u,c->r[0]); // 80317598
L_8031759C:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 8031759C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 803175A0
  if (!crb(c,2)) { goto L_803175B0; } // 803175A4
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 803175A8
  if (crb(c,2)) { goto L_803175F0; } // 803175AC
L_803175B0:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 803175B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803175B4
  if (!crb(c,2)) { goto L_803175D0; } // 803175B8
  c->r[3]=0u+0x80570000u; // 803175BC
  c->r[3]=c->r[3]+0x000058F8u; // 803175C0
  c->r[0]=R16(c->r[3]+0x00000654u); // 803175C4
  c->r[0]=c->r[0]|0x00000300u; // 803175C8
  W16(c->r[3]+0x00000654u,c->r[0]); // 803175CC
L_803175D0:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 803175D0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803175D4
  if (!crb(c,2)) { goto L_803175F0; } // 803175D8
  c->r[3]=0u+0x80570000u; // 803175DC
  c->r[3]=c->r[3]+0x000058F8u; // 803175E0
  c->r[0]=R16(c->r[3]+0x00000654u); // 803175E4
  c->r[0]=c->r[0]|0x00003000u; // 803175E8
  W16(c->r[3]+0x00000654u,c->r[0]); // 803175EC
L_803175F0:;
  c->r[4]=0u+0x80570000u; // 803175F0
  c->r[4]=c->r[4]+0x000058F8u; // 803175F4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 803175F8
  cmpu(c,0,c->r[0],0x00000005u); // 803175FC
  if (crb(c,0)) { goto L_80317618; } // 80317600
  c->r[3]=0u+0x000D0000u; // 80317604
  c->r[5]=R16(c->r[4]+0x00000654u); // 80317608
  c->r[3]=c->r[3]+0x00000004u; // 8031760C
  c->r[4]=c->r[30]+0x00000044u; // 80317610
  c->lr=0x80317618u; f_8030E200(c); // 80317614
L_80317618:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 80317618
  c->r[4]=0u+0x80570000u; // 8031761C
  c->r[4]=c->r[4]+0x000058F8u; // 80317620
  c->r[5]=0u+0x00000000u; // 80317624
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80317628
  W16(c->r[4]+0x00000656u,c->r[5]); // 8031762C
  W8(c->r[4]+0x00001908u,c->r[5]); // 80317630
  if (crb(c,2)) { goto L_80317670; } // 80317634
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80317638
  c->r[0]=0u+0x00000001u; // 8031763C
  W16(c->r[4]+0x00000656u,c->r[0]); // 80317640
  if (crb(c,2)) { goto L_80317650; } // 80317644
  c->r[0]=c->r[0]|0x00000002u; // 80317648
  W16(c->r[4]+0x00000656u,c->r[0]); // 8031764C
L_80317650:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 80317650
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80317654
  if (crb(c,2)) { goto L_80317670; } // 80317658
  c->r[3]=0u+0x80570000u; // 8031765C
  c->r[3]=c->r[3]+0x000058F8u; // 80317660
  c->r[0]=R16(c->r[3]+0x00000656u); // 80317664
  c->r[0]=c->r[0]|0x00000004u; // 80317668
  W16(c->r[3]+0x00000656u,c->r[0]); // 8031766C
L_80317670:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 80317670
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80317674
  if (crb(c,2)) { goto L_80317690; } // 80317678
  c->r[3]=0u+0x80570000u; // 8031767C
  c->r[3]=c->r[3]+0x000058F8u; // 80317680
  c->r[0]=R16(c->r[3]+0x00000656u); // 80317684
  c->r[0]=c->r[0]|0x00000008u; // 80317688
  W16(c->r[3]+0x00000656u,c->r[0]); // 8031768C
L_80317690:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 80317690
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80317694
  if (crb(c,2)) { goto L_803176B0; } // 80317698
  c->r[3]=0u+0x80570000u; // 8031769C
  c->r[3]=c->r[3]+0x000058F8u; // 803176A0
  c->r[0]=R16(c->r[3]+0x00000656u); // 803176A4
  c->r[0]=c->r[0]|0x00000010u; // 803176A8
  W16(c->r[3]+0x00000656u,c->r[0]); // 803176AC
L_803176B0:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 803176B0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 803176B4
  if (crb(c,2)) { goto L_803176D0; } // 803176B8
  c->r[3]=0u+0x80570000u; // 803176BC
  c->r[3]=c->r[3]+0x000058F8u; // 803176C0
  c->r[0]=R16(c->r[3]+0x00000656u); // 803176C4
  c->r[0]=c->r[0]|0x00000020u; // 803176C8
  W16(c->r[3]+0x00000656u,c->r[0]); // 803176CC
L_803176D0:;
  c->r[4]=0u+0x80570000u; // 803176D0
  c->r[4]=c->r[4]+0x000058F8u; // 803176D4
  c->r[3]=R16(c->r[4]+0x00000656u); // 803176D8
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 803176DC
  if (crb(c,2)) { goto L_80317754; } // 803176E0
  c->r[5]=R8(c->r[31]+0x00000645u); // 803176E4
  c->r[0]=0u+0x00000001u; // 803176E8
  W8(c->r[4]+0x00001908u,c->r[0]); // 803176EC
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 803176F0
  if (crb(c,2)) { goto L_8031770C; } // 803176F4
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 803176F8
  if (!crb(c,2)) { goto L_80317714; } // 803176FC
  c->r[0]=c->r[3]|0x00000100u; // 80317700
  W16(c->r[4]+0x00000656u,c->r[0]); // 80317704
  goto L_80317714; // 80317708
L_8031770C:;
  c->r[0]=c->r[3]|0x00000140u; // 8031770C
  W16(c->r[4]+0x00000656u,c->r[0]); // 80317710
L_80317714:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 80317714
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80317718
  if (crb(c,2)) { goto L_80317740; } // 8031771C
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 80317720
  if (!crb(c,2)) { goto L_80317754; } // 80317724
  c->r[3]=0u+0x80570000u; // 80317728
  c->r[3]=c->r[3]+0x000058F8u; // 8031772C
  c->r[0]=R16(c->r[3]+0x00000656u); // 80317730
  c->r[0]=c->r[0]|0x00000200u; // 80317734
  W16(c->r[3]+0x00000656u,c->r[0]); // 80317738
  goto L_80317754; // 8031773C
L_80317740:;
  c->r[3]=0u+0x80570000u; // 80317740
  c->r[3]=c->r[3]+0x000058F8u; // 80317744
  c->r[0]=R16(c->r[3]+0x00000656u); // 80317748
  c->r[0]=c->r[0]|0x00000280u; // 8031774C
  W16(c->r[3]+0x00000656u,c->r[0]); // 80317750
L_80317754:;
  c->r[4]=0u+0x80570000u; // 80317754
  c->r[4]=c->r[4]+0x000058F8u; // 80317758
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031775C
  cmpu(c,0,c->r[0],0x00000005u); // 80317760
  if (crb(c,0)) { goto L_8031777C; } // 80317764
  c->r[3]=0u+0x000D0000u; // 80317768
  c->r[5]=R16(c->r[4]+0x00000656u); // 8031776C
  c->r[3]=c->r[3]+0x00000004u; // 80317770
  c->r[4]=c->r[30]+0x00000070u; // 80317774
  c->lr=0x8031777Cu; f_8030E200(c); // 80317778
L_8031777C:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 8031777C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80317780
  if (crb(c,2)) { goto L_803177A0; } // 80317784
  c->r[3]=0u+0x80570000u; // 80317788
  c->r[3]=c->r[3]+0x000058F8u; // 8031778C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80317790
  c->r[0]=c->r[0]|0x00000001u; // 80317794
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80317798
  goto L_803177B4; // 8031779C
L_803177A0:;
  c->r[3]=0u+0x80570000u; // 803177A0
  c->r[3]=c->r[3]+0x000058F8u; // 803177A4
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803177A8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 803177AC
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803177B0
L_803177B4:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 803177B4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 803177B8
  if (crb(c,2)) { goto L_803177D8; } // 803177BC
  c->r[3]=0u+0x80570000u; // 803177C0
  c->r[3]=c->r[3]+0x000058F8u; // 803177C4
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803177C8
  c->r[0]=c->r[0]|0x00000002u; // 803177CC
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803177D0
  goto L_803177EC; // 803177D4
L_803177D8:;
  c->r[3]=0u+0x80570000u; // 803177D8
  c->r[3]=c->r[3]+0x000058F8u; // 803177DC
  c->r[0]=R16(c->r[3]+0x000004C4u); // 803177E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 803177E4
  W16(c->r[3]+0x000004C4u,c->r[0]); // 803177E8
L_803177EC:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 803177EC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 803177F0
  if (crb(c,2)) { goto L_80317810; } // 803177F4
  c->r[3]=0u+0x80570000u; // 803177F8
  c->r[3]=c->r[3]+0x000058F8u; // 803177FC
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80317800
  c->r[0]=c->r[0]|0x00000004u; // 80317804
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80317808
  goto L_80317824; // 8031780C
L_80317810:;
  c->r[3]=0u+0x80570000u; // 80317810
  c->r[3]=c->r[3]+0x000058F8u; // 80317814
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80317818
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 8031781C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80317820
L_80317824:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 80317824
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80317828
  if (crb(c,2)) { goto L_80317848; } // 8031782C
  c->r[3]=0u+0x80570000u; // 80317830
  c->r[3]=c->r[3]+0x000058F8u; // 80317834
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80317838
  c->r[0]=c->r[0]|0x00000008u; // 8031783C
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80317840
  goto L_8031785C; // 80317844
L_80317848:;
  c->r[3]=0u+0x80570000u; // 80317848
  c->r[3]=c->r[3]+0x000058F8u; // 8031784C
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80317850
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80317854
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80317858
L_8031785C:;
  c->lr=0x80317860u; f_8031CE38(c); // 8031785C
  c->r[4]=0u+0x80570000u; // 80317860
  c->r[4]=c->r[4]+0x000058F8u; // 80317864
  c->r[29]=R8(c->r[4]+0x000027BEu); // 80317868
  cmpu(c,0,c->r[29],0x000000FFu); // 8031786C
  if (crb(c,2)) { goto L_8031791C; } // 80317870
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80317874
  c->r[3]=0u+0x000000FFu; // 80317878
  c->r[27]=R8(c->r[4]+0x000027BDu); // 8031787C
  cmpu(c,0,c->r[0],0x00000003u); // 80317880
  W8(c->r[4]+0x000027BEu,c->r[3]); // 80317884
  W8(c->r[4]+0x000027BDu,c->r[3]); // 80317888
  if (crb(c,0)) { goto L_803178B0; } // 8031788C
  c->r[3]=0u+0x000D0000u; // 80317890
  c->r[5]=c->r[27]|c->r[27]; // 80317894
  c->r[7]=c->r[29]|c->r[29]; // 80317898
  c->r[4]=c->r[30]+0x00000000u; // 8031789C
  c->r[3]=c->r[3]+0x00000002u; // 803178A0
  c->r[6]=0u+0x000000FFu; // 803178A4
  c->r[8]=0u+0x000000FFu; // 803178A8
  c->lr=0x803178B0u; f_8030E248(c); // 803178AC
L_803178B0:;
  c->r[3]=0u+0x80570000u; // 803178B0
  c->r[3]=c->r[3]+0x000058F8u; // 803178B4
  c->r[4]=R8(c->r[3]+0x00000645u); // 803178B8
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 803178BC
  if (!crb(c,2)) { goto L_803178D8; } // 803178C0
  c->r[0]=R8(c->r[3]+0x00000644u); // 803178C4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 803178C8
  if (!crb(c,2)) { goto L_803178D8; } // 803178CC
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 803178D0
  if (crb(c,2)) { goto L_8031791C; } // 803178D4
L_803178D8:;
  c->r[3]=0u+0x80570000u; // 803178D8
  c->r[3]=c->r[3]+0x000058F8u; // 803178DC
  c->r[0]=R8(c->r[3]+0x000027BDu); // 803178E0
  cmpu(c,0,c->r[0],c->r[27]); // 803178E4
  if (!crb(c,2)) { goto L_803178F8; } // 803178E8
  c->r[0]=R8(c->r[3]+0x000027BEu); // 803178EC
  cmpu(c,0,c->r[0],c->r[29]); // 803178F0
  if (crb(c,2)) { goto L_8031791C; } // 803178F4
L_803178F8:;
  c->r[3]=c->r[27]|c->r[27]; // 803178F8
  c->r[4]=c->r[29]|c->r[29]; // 803178FC
  c->lr=0x80317904u; f_80323238(c); // 80317900
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80317904
  if (crb(c,2)) { goto L_8031791C; } // 80317908
  c->r[3]=0u+0x80570000u; // 8031790C
  c->r[3]=c->r[3]+0x000058F8u; // 80317910
  W8(c->r[3]+0x000027BDu,c->r[27]); // 80317914
  W8(c->r[3]+0x000027BEu,c->r[29]); // 80317918
L_8031791C:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 8031791C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80317920
  if (crb(c,2)) { goto L_80317930; } // 80317924
  c->r[3]=0u+0x00000001u; // 80317928
  c->lr=0x80317930u; f_803189B4(c); // 8031792C
L_80317930:;
  c->r[3]=0u+0x00000001u; // 80317930
  c->lr=0x80317938u; f_80318904(c); // 80317934
  c->r[3]=0u+0x00000001u; // 80317938
  c->lr=0x80317940u; f_80318854(c); // 8031793C
  c->r[3]=0u+0x80570000u; // 80317940
  c->r[3]=c->r[3]+0x000058F8u; // 80317944
  c->r[12]=R32(c->r[3]+0x00000568u); // 80317948
  cmps(c,0,(int32_t)c->r[12],0); // 8031794C
  if (crb(c,2)) { goto L_80317960; } // 80317950
  c->r[3]=0u+0x00000000u; // 80317954
  c->ctr=c->r[12]; // 80317958
  if (true) { c->lr=0x80317960u; dispatch(c,c->ctr); } // 8031795C
L_80317960:;
  cmps(c,0,(int32_t)c->r[28],0); // 80317960
  if (crb(c,2)) { goto L_80317978; } // 80317964
  c->r[12]=c->r[28]|c->r[28]; // 80317968
  c->r[3]=0u+0x00000000u; // 8031796C
  c->ctr=c->r[12]; // 80317970
  if (true) { c->lr=0x80317978u; dispatch(c,c->ctr); } // 80317974
L_80317978:;
  c->r[11]=c->r[1]+0x00000020u; // 80317978
  c->lr=0x80317980u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031797C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80317980
  c->lr=c->r[0]; // 80317984
  c->r[1]=c->r[1]+0x00000020u; // 80317988
  return; // 8031798C
}

// BTM_SetLocalDeviceName
void f_80317990(Ctx* __restrict c) {
  trace_call(0x80317990u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317990
  c->r[0]=c->lr; // 80317994
  cmps(c,0,(int32_t)c->r[3],0); // 80317998
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031799C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803179A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 803179A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 803179A8
  c->r[29]=c->r[3]|c->r[3]; // 803179AC
  if (!crb(c,2)) { goto L_803179BC; } // 803179B0
  c->r[3]=0u+0x00000005u; // 803179B4
  goto L_80317A2C; // 803179B8
L_803179BC:;
  c->r[30]=0u+0x80570000u; // 803179BC
  c->r[30]=c->r[30]+0x000058F8u; // 803179C0
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 803179C4
  cmpu(c,0,c->r[0],0x00000001u); // 803179C8
  if (crb(c,1)) { goto L_803179D8; } // 803179CC
  c->r[3]=0u+0x0000000Cu; // 803179D0
  goto L_80317A2C; // 803179D4
L_803179D8:;
  c->r[3]=0u+0x00000002u; // 803179D8
  c->lr=0x803179E0u; f_8030AF24(c); // 803179DC
  cmps(c,0,(int32_t)c->r[3],0); // 803179E0
  c->r[31]=c->r[3]|c->r[3]; // 803179E4
  if (crb(c,2)) { goto L_80317A28; } // 803179E8
  cmpu(c,0,c->r[30],c->r[29]); // 803179EC
  if (crb(c,2)) { goto L_80317A14; } // 803179F0
  c->r[3]=c->r[30]|c->r[30]; // 803179F4
  c->r[4]=0u+0x00000000u; // 803179F8
  c->r[5]=0u+0x00000020u; // 803179FC
  c->lr=0x80317A04u; f_800060B8(c); // 80317A00
  c->r[3]=c->r[30]|c->r[30]; // 80317A04
  c->r[4]=c->r[29]|c->r[29]; // 80317A08
  c->r[5]=0u+0x0000001Fu; // 80317A0C
  c->lr=0x80317A14u; f_802E9608(c); // 80317A10
L_80317A14:;
  c->r[3]=c->r[31]|c->r[31]; // 80317A14
  c->r[4]=c->r[30]|c->r[30]; // 80317A18
  c->lr=0x80317A20u; f_80322AA0(c); // 80317A1C
  c->r[3]=0u+0x00000001u; // 80317A20
  goto L_80317A2C; // 80317A24
L_80317A28:;
  c->r[3]=0u+0x00000003u; // 80317A28
L_80317A2C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80317A2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80317A30
  c->r[30]=R32(c->r[1]+0x00000018u); // 80317A34
  c->r[29]=R32(c->r[1]+0x00000014u); // 80317A38
  c->lr=c->r[0]; // 80317A3C
  c->r[1]=c->r[1]+0x00000020u; // 80317A40
  return; // 80317A44
}

// btm_read_local_name_complete
void f_80317A48(Ctx* __restrict c) {
  trace_call(0x80317A48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317A48
  c->r[0]=c->lr; // 80317A4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80317A50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80317A54
  c->r[31]=0u+0x80570000u; // 80317A58
  c->r[31]=c->r[31]+0x000058F8u; // 80317A5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80317A60
  W32(c->r[1]+0x00000014u,c->r[29]); // 80317A64
  c->r[29]=c->r[3]|c->r[3]; // 80317A68
  c->r[3]=c->r[31]+0x00000590u; // 80317A6C
  c->r[30]=R32(c->r[31]+0x000005A8u); // 80317A70
  c->lr=0x80317A78u; f_8030E824(c); // 80317A74
  c->r[0]=0u+0x00000000u; // 80317A78
  cmps(c,0,(int32_t)c->r[30],0); // 80317A7C
  W32(c->r[31]+0x000005A8u,c->r[0]); // 80317A80
  if (crb(c,2)) { goto L_80317AB8; } // 80317A84
  c->r[0]=R8(c->r[29]+0x00000000u); // 80317A88
  cmps(c,0,(int32_t)c->r[0],0); // 80317A8C
  if (!crb(c,2)) { goto L_80317AA8; } // 80317A90
  c->r[12]=c->r[30]|c->r[30]; // 80317A94
  c->r[3]=c->r[29]+0x00000001u; // 80317A98
  c->ctr=c->r[12]; // 80317A9C
  if (true) { c->lr=0x80317AA4u; dispatch(c,c->ctr); } // 80317AA0
  goto L_80317AB8; // 80317AA4
L_80317AA8:;
  c->r[12]=c->r[30]|c->r[30]; // 80317AA8
  c->r[3]=0u+0x00000000u; // 80317AAC
  c->ctr=c->r[12]; // 80317AB0
  if (true) { c->lr=0x80317AB8u; dispatch(c,c->ctr); } // 80317AB4
L_80317AB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80317AB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80317ABC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80317AC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80317AC4
  c->lr=c->r[0]; // 80317AC8
  c->r[1]=c->r[1]+0x00000020u; // 80317ACC
  return; // 80317AD0
}

// BTM_ReadLocalDeviceAddr
void f_80317AD4(Ctx* __restrict c) {
  trace_call(0x80317AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317AD4
  c->r[0]=c->lr; // 80317AD8
  cmps(c,0,(int32_t)c->r[3],0); // 80317ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80317AE0
  if (crb(c,2)) { goto L_80317B00; } // 80317AE4
  c->r[4]=0u+0x80570000u; // 80317AE8
  c->r[12]=c->r[3]|c->r[3]; // 80317AEC
  c->r[4]=c->r[4]+0x000058F8u; // 80317AF0
  c->r[3]=c->r[4]+0x00000630u; // 80317AF4
  c->ctr=c->r[12]; // 80317AF8
  if (true) { c->lr=0x80317B00u; dispatch(c,c->ctr); } // 80317AFC
L_80317B00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80317B00
  c->r[3]=0u+0x00000000u; // 80317B04
  c->lr=c->r[0]; // 80317B08
  c->r[1]=c->r[1]+0x00000010u; // 80317B0C
  return; // 80317B10
}

// btm_read_local_addr_complete
void f_80317B14(Ctx* __restrict c) {
  trace_call(0x80317B14u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 80317B14
  cmps(c,0,(int32_t)c->r[0],0); // 80317B18
  if (!crb(c,2)) return; // 80317B1C
  c->r[4]=0u+0x80570000u; // 80317B20
  c->r[0]=R8(c->r[3]+0x00000001u); // 80317B24
  c->r[4]=c->r[4]+0x000058F8u; // 80317B28
  W8(c->r[4]+0x00000635u,c->r[0]); // 80317B2C
  c->r[0]=R8(c->r[3]+0x00000002u); // 80317B30
  W8(c->r[4]+0x00000634u,c->r[0]); // 80317B34
  c->r[0]=R8(c->r[3]+0x00000003u); // 80317B38
  W8(c->r[4]+0x00000633u,c->r[0]); // 80317B3C
  c->r[0]=R8(c->r[3]+0x00000004u); // 80317B40
  W8(c->r[4]+0x00000632u,c->r[0]); // 80317B44
  c->r[0]=R8(c->r[3]+0x00000005u); // 80317B48
  W8(c->r[4]+0x00000631u,c->r[0]); // 80317B4C
  c->r[0]=R8(c->r[3]+0x00000006u); // 80317B50
  W8(c->r[4]+0x00000630u,c->r[0]); // 80317B54
  return; // 80317B58
}

// BTM_ReadLocalVersion
void f_80317B5C(Ctx* __restrict c) {
  trace_call(0x80317B5Cu);
  c->r[5]=0u+0x80570000u; // 80317B5C
  c->r[5]=c->r[5]+0x000058F8u; // 80317B60
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 80317B64
  cmpu(c,0,c->r[0],0x00000004u); // 80317B68
  if (!crb(c,0)) { goto L_80317B78; } // 80317B6C
  c->r[3]=0u+0x0000000Cu; // 80317B70
  return; // 80317B74
L_80317B78:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 80317B78
  c->r[0]=R16(c->r[5]+0x00000638u); // 80317B7C
  W16(c->r[3]+0x00000000u,c->r[4]); // 80317B80
  W16(c->r[3]+0x00000002u,c->r[0]); // 80317B84
  c->r[4]=R16(c->r[5]+0x0000063Au); // 80317B88
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 80317B8C
  W16(c->r[3]+0x00000004u,c->r[4]); // 80317B90
  W16(c->r[3]+0x00000006u,c->r[0]); // 80317B94
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 80317B98
  W16(c->r[3]+0x00000008u,c->r[0]); // 80317B9C
  c->r[3]=0u+0x00000000u; // 80317BA0
  return; // 80317BA4
}

// BTM_SetDeviceClass
void f_80317BA8(Ctx* __restrict c) {
  trace_call(0x80317BA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317BA8
  c->r[0]=c->lr; // 80317BAC
  c->r[5]=0u+0x00000003u; // 80317BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80317BB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80317BB8
  c->r[31]=0u+0x80570000u; // 80317BBC
  c->r[31]=c->r[31]+0x000058F8u; // 80317BC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80317BC4
  c->r[30]=c->r[3]|c->r[3]; // 80317BC8
  c->r[4]=c->r[30]|c->r[30]; // 80317BCC
  c->r[3]=c->r[31]+0x00000648u; // 80317BD0
  c->lr=0x80317BD8u; f_80005FB4(c); // 80317BD4
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80317BD8
  cmpu(c,0,c->r[0],0x00000001u); // 80317BDC
  if (crb(c,1)) { goto L_80317BEC; } // 80317BE0
  c->r[3]=0u+0x0000000Cu; // 80317BE4
  goto L_80317C10; // 80317BE8
L_80317BEC:;
  c->r[3]=0u+0x00000002u; // 80317BEC
  c->lr=0x80317BF4u; f_8030AF24(c); // 80317BF0
  cmps(c,0,(int32_t)c->r[3],0); // 80317BF4
  if (crb(c,2)) { goto L_80317C0C; } // 80317BF8
  c->r[4]=c->r[30]|c->r[30]; // 80317BFC
  c->lr=0x80317C04u; f_80322DB8(c); // 80317C00
  c->r[3]=0u+0x00000000u; // 80317C04
  goto L_80317C10; // 80317C08
L_80317C0C:;
  c->r[3]=0u+0x00000003u; // 80317C0C
L_80317C10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80317C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80317C14
  c->r[30]=R32(c->r[1]+0x00000008u); // 80317C18
  c->lr=c->r[0]; // 80317C1C
  c->r[1]=c->r[1]+0x00000010u; // 80317C20
  return; // 80317C24
}

// BTM_ReadDeviceClass
void f_80317C28(Ctx* __restrict c) {
  trace_call(0x80317C28u);
  c->r[3]=0u+0x80570000u; // 80317C28
  c->r[3]=c->r[3]+0x000058F8u; // 80317C2C
  c->r[3]=c->r[3]+0x00000648u; // 80317C30
  return; // 80317C34
}

// BTM_ReadLocalFeatures
void f_80317C38(Ctx* __restrict c) {
  trace_call(0x80317C38u);
  c->r[3]=0u+0x80570000u; // 80317C38
  c->r[3]=c->r[3]+0x000058F8u; // 80317C3C
  c->r[3]=c->r[3]+0x00000640u; // 80317C40
  return; // 80317C44
}

// BTM_RegisterForDeviceStatusNotif
void f_80317C48(Ctx* __restrict c) {
  trace_call(0x80317C48u);
  c->r[4]=0u+0x80570000u; // 80317C48
  c->r[0]=c->r[3]|c->r[3]; // 80317C4C
  c->r[4]=c->r[4]+0x000058F8u; // 80317C50
  c->r[3]=R32(c->r[4]+0x00000568u); // 80317C54
  W32(c->r[4]+0x00000568u,c->r[0]); // 80317C58
  return; // 80317C5C
}

// BTM_VendorSpecificCommand
void f_80317C60(Ctx* __restrict c) {
  trace_call(0x80317C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317C60
  c->r[0]=c->lr; // 80317C64
  W32(c->r[1]+0x00000024u,c->r[0]); // 80317C68
  c->r[11]=c->r[1]+0x00000020u; // 80317C6C
  c->lr=0x80317C74u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80317C70
  c->r[7]=0u+0x80570000u; // 80317C74
  c->r[27]=c->r[3]|c->r[3]; // 80317C78
  c->r[7]=c->r[7]+0x000058F8u; // 80317C7C
  c->r[28]=c->r[4]|c->r[4]; // 80317C80
  c->r[0]=R8(c->r[7]+0x000027C0u); // 80317C84
  c->r[29]=c->r[5]|c->r[5]; // 80317C88
  c->r[30]=c->r[6]|c->r[6]; // 80317C8C
  cmpu(c,0,c->r[0],0x00000004u); // 80317C90
  if (crb(c,0)) { goto L_80317CB4; } // 80317C94
  c->r[3]=0u+0x000D0000u; // 80317C98
  c->r[4]=0u+0x80490000u; // 80317C9C
  c->r[5]=c->r[27]|c->r[27]; // 80317CA0
  c->r[6]=c->r[28]|c->r[28]; // 80317CA4
  c->r[3]=c->r[3]+0x00000003u; // 80317CA8
  c->r[4]=c->r[4]+0xFFFFFCE4u; // 80317CAC
  c->lr=0x80317CB4u; f_8030E218(c); // 80317CB0
L_80317CB4:;
  c->r[31]=0u+0x80570000u; // 80317CB4
  c->r[31]=c->r[31]+0x000058F8u; // 80317CB8
  c->r[0]=R8(c->r[31]+0x00000650u); // 80317CBC
  cmps(c,0,(int32_t)c->r[0],0); // 80317CC0
  if (crb(c,2)) { goto L_80317CF0; } // 80317CC4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80317CC8
  cmpu(c,0,c->r[0],0x00000004u); // 80317CCC
  if (crb(c,0)) { goto L_80317CE8; } // 80317CD0
  c->r[3]=0u+0x000D0000u; // 80317CD4
  c->r[4]=0u+0x80490000u; // 80317CD8
  c->r[3]=c->r[3]+0x00000003u; // 80317CDC
  c->r[4]=c->r[4]+0xFFFFFD24u; // 80317CE0
  c->lr=0x80317CE8u; f_8030E1E8(c); // 80317CE4
L_80317CE8:;
  c->r[3]=0u+0x00000002u; // 80317CE8
  goto L_80317D44; // 80317CEC
L_80317CF0:;
  c->r[0]=c->r[28]+0x0000000Bu; // 80317CF0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80317CF4
  c->lr=0x80317CFCu; f_8030AD84(c); // 80317CF8
  cmps(c,0,(int32_t)c->r[3],0); // 80317CFC
  if (crb(c,2)) { goto L_80317D40; } // 80317D00
  cmps(c,0,(int32_t)c->r[30],0); // 80317D04
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 80317D08
  if (crb(c,2)) { goto L_80317D18; } // 80317D0C
  c->r[0]=0u+0x00000001u; // 80317D10
  W8(c->r[31]+0x00000650u,c->r[0]); // 80317D14
L_80317D18:;
  c->r[4]=c->r[27]|c->r[27]; // 80317D18
  c->r[5]=c->r[28]|c->r[28]; // 80317D1C
  c->r[6]=c->r[29]|c->r[29]; // 80317D20
  c->lr=0x80317D28u; f_803236E8(c); // 80317D24
  cmps(c,0,(int32_t)c->r[30],0); // 80317D28
  if (crb(c,2)) { goto L_80317D38; } // 80317D2C
  c->r[3]=0u+0x00000001u; // 80317D30
  goto L_80317D44; // 80317D34
L_80317D38:;
  c->r[3]=0u+0x00000000u; // 80317D38
  goto L_80317D44; // 80317D3C
L_80317D40:;
  c->r[3]=0u+0x00000003u; // 80317D40
L_80317D44:;
  c->r[11]=c->r[1]+0x00000020u; // 80317D44
  c->lr=0x80317D4Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80317D48
  c->r[0]=R32(c->r[1]+0x00000024u); // 80317D4C
  c->lr=c->r[0]; // 80317D50
  c->r[1]=c->r[1]+0x00000020u; // 80317D54
  return; // 80317D58
}

// btm_vsc_complete
void f_80317D5C(Ctx* __restrict c) {
  trace_call(0x80317D5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317D5C
  c->r[0]=c->lr; // 80317D60
  c->r[6]=0u+0x80570000u; // 80317D64
  c->r[7]=c->r[3]|c->r[3]; // 80317D68
  W32(c->r[1]+0x00000124u,c->r[0]); // 80317D6C
  c->r[6]=c->r[6]+0x000058F8u; // 80317D70
  c->r[0]=0u+0x00000000u; // 80317D74
  c->r[3]=c->r[1]+0x0000000Cu; // 80317D78
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 80317D7C
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 80317D80
  W8(c->r[6]+0x00000650u,c->r[0]); // 80317D84
  cmps(c,0,(int32_t)c->r[31],0); // 80317D88
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 80317D8C
  if (crb(c,2)) { goto L_80317DB4; } // 80317D90
  W16(c->r[1]+0x00000008u,c->r[4]); // 80317D94
  c->r[4]=c->r[7]|c->r[7]; // 80317D98
  W16(c->r[1]+0x0000000Au,c->r[5]); // 80317D9C
  c->lr=0x80317DA4u; f_80005FB4(c); // 80317DA0
  c->r[12]=c->r[31]|c->r[31]; // 80317DA4
  c->r[3]=c->r[1]+0x00000008u; // 80317DA8
  c->ctr=c->r[12]; // 80317DAC
  if (true) { c->lr=0x80317DB4u; dispatch(c,c->ctr); } // 80317DB0
L_80317DB4:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 80317DB4
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80317DB8
  c->lr=c->r[0]; // 80317DBC
  c->r[1]=c->r[1]+0x00000120u; // 80317DC0
  return; // 80317DC4
}

// BTM_RegisterForVSEvents
void f_80317DC8(Ctx* __restrict c) {
  trace_call(0x80317DC8u);
  c->r[4]=0u+0x80570000u; // 80317DC8
  c->r[4]=c->r[4]+0x000058F8u; // 80317DCC
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 80317DD0
  cmps(c,0,(int32_t)c->r[0],0); // 80317DD4
  if (crb(c,2)) { goto L_80317DEC; } // 80317DD8
  cmps(c,0,(int32_t)c->r[3],0); // 80317DDC
  if (crb(c,2)) { goto L_80317DEC; } // 80317DE0
  c->r[3]=0u+0x00000002u; // 80317DE4
  return; // 80317DE8
L_80317DEC:;
  c->r[4]=0u+0x80570000u; // 80317DEC
  c->r[4]=c->r[4]+0x000058F8u; // 80317DF0
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 80317DF4
  c->r[3]=0u+0x00000000u; // 80317DF8
  return; // 80317DFC
}

// btm_vendor_specific_evt
void f_80317E00(Ctx* __restrict c) {
  trace_call(0x80317E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317E00
  c->r[0]=c->lr; // 80317E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 80317E08
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80317E0C
  c->r[31]=0u+0x80570000u; // 80317E10
  c->r[31]=c->r[31]+0x000058F8u; // 80317E14
  W32(c->r[1]+0x00000018u,c->r[30]); // 80317E18
  c->r[30]=c->r[4]|c->r[4]; // 80317E1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80317E20
  c->r[29]=c->r[3]|c->r[3]; // 80317E24
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 80317E28
  cmpu(c,0,c->r[0],0x00000012u); // 80317E2C
  if (crb(c,2)) { goto L_80317E54; } // 80317E30
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80317E34
  cmpu(c,0,c->r[0],0x00000004u); // 80317E38
  if (crb(c,0)) { goto L_80317E54; } // 80317E3C
  c->r[3]=0u+0x000D0000u; // 80317E40
  c->r[4]=0u+0x80490000u; // 80317E44
  c->r[3]=c->r[3]+0x00000003u; // 80317E48
  c->r[4]=c->r[4]+0xFFFFFD68u; // 80317E4C
  c->lr=0x80317E54u; f_8030E1E8(c); // 80317E50
L_80317E54:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 80317E54
  c->r[0]=0u+0x00000000u; // 80317E58
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 80317E5C
  cmps(c,0,(int32_t)c->r[12],0); // 80317E60
  W8(c->r[31]+0x00000650u,c->r[0]); // 80317E64
  if (crb(c,2)) { goto L_80317E7C; } // 80317E68
  c->r[3]=c->r[30]|c->r[30]; // 80317E6C
  c->r[4]=c->r[29]|c->r[29]; // 80317E70
  c->ctr=c->r[12]; // 80317E74
  if (true) { c->lr=0x80317E7Cu; dispatch(c,c->ctr); } // 80317E78
L_80317E7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80317E7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80317E80
  c->r[30]=R32(c->r[1]+0x00000018u); // 80317E84
  c->r[29]=R32(c->r[1]+0x00000014u); // 80317E88
  c->lr=c->r[0]; // 80317E8C
  c->r[1]=c->r[1]+0x00000020u; // 80317E90
  return; // 80317E94
}

// BTM_WritePageTimeout
void f_80317E98(Ctx* __restrict c) {
  trace_call(0x80317E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317E98
  c->r[0]=c->lr; // 80317E9C
  c->r[4]=0u+0x80570000u; // 80317EA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80317EA4
  c->r[4]=c->r[4]+0x000058F8u; // 80317EA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80317EAC
  c->r[31]=c->r[3]|c->r[3]; // 80317EB0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80317EB4
  cmpu(c,0,c->r[0],0x00000004u); // 80317EB8
  if (crb(c,0)) { goto L_80317ED8; } // 80317EBC
  c->r[3]=0u+0x000D0000u; // 80317EC0
  c->r[4]=0u+0x80490000u; // 80317EC4
  c->r[5]=c->r[31]|c->r[31]; // 80317EC8
  c->r[3]=c->r[3]+0x00000003u; // 80317ECC
  c->r[4]=c->r[4]+0xFFFFFDA8u; // 80317ED0
  c->lr=0x80317ED8u; f_8030E200(c); // 80317ED4
L_80317ED8:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 80317ED8
  c->r[3]=0u+0x10620000u; // 80317EDC
  c->r[4]=0u+0x80570000u; // 80317EE0
  c->r[3]=c->r[3]+0x00004DD3u; // 80317EE4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80317EE8
  c->r[4]=c->r[4]+0x000058F8u; // 80317EEC
  c->r[3]=0u+0x00000002u; // 80317EF0
  c->r[0]=sraw(c,c->r[0],6); // 80317EF4
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80317EF8
  c->r[0]=c->r[0]+c->r[5]; // 80317EFC
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 80317F00
  c->lr=0x80317F08u; f_8030AF24(c); // 80317F04
  cmps(c,0,(int32_t)c->r[3],0); // 80317F08
  if (crb(c,2)) { goto L_80317F20; } // 80317F0C
  c->r[4]=c->r[31]|c->r[31]; // 80317F10
  c->lr=0x80317F18u; f_80322BE0(c); // 80317F14
  c->r[3]=0u+0x00000000u; // 80317F18
  goto L_80317F24; // 80317F1C
L_80317F20:;
  c->r[3]=0u+0x00000003u; // 80317F20
L_80317F24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80317F24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80317F28
  c->lr=c->r[0]; // 80317F2C
  c->r[1]=c->r[1]+0x00000010u; // 80317F30
  return; // 80317F34
}

// BTM_ReadStoredLinkKey
void f_80317F38(Ctx* __restrict c) {
  trace_call(0x80317F38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80317F38
  c->r[0]=c->lr; // 80317F3C
  c->r[5]=0u+0x80570000u; // 80317F40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80317F44
  c->r[5]=c->r[5]+0x000058F8u; // 80317F48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80317F4C
  c->r[31]=0u+0x00000000u; // 80317F50
  W32(c->r[1]+0x00000018u,c->r[30]); // 80317F54
  c->r[30]=c->r[4]|c->r[4]; // 80317F58
  W32(c->r[1]+0x00000014u,c->r[29]); // 80317F5C
  c->r[29]=c->r[3]|c->r[3]; // 80317F60
  c->r[0]=R32(c->r[5]+0x00000570u); // 80317F64
  cmps(c,0,(int32_t)c->r[0],0); // 80317F68
  if (crb(c,2)) { goto L_80317F78; } // 80317F6C
  c->r[3]=0u+0x00000002u; // 80317F70
  goto L_80317FF4; // 80317F74
L_80317F78:;
  cmps(c,0,(int32_t)c->r[3],0); // 80317F78
  if (!crb(c,2)) { goto L_80317F88; } // 80317F7C
  c->r[31]=0u+0x00000001u; // 80317F80
  c->r[29]=c->r[1]+0x00000008u; // 80317F84
L_80317F88:;
  c->r[3]=0u+0x80570000u; // 80317F88
  c->r[3]=c->r[3]+0x000058F8u; // 80317F8C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80317F90
  cmpu(c,0,c->r[0],0x00000004u); // 80317F94
  if (crb(c,0)) { goto L_80317FC0; } // 80317F98
  cmps(c,0,(int32_t)c->r[31],0); // 80317F9C
  c->r[3]=0u+0x000D0000u; // 80317FA0
  c->r[4]=0u+0x80490000u; // 80317FA4
  c->r[5]=c->r[13]+0xFFFFABA4u; // 80317FA8
  c->r[3]=c->r[3]+0x00000003u; // 80317FAC
  c->r[4]=c->r[4]+0xFFFFFE18u; // 80317FB0
  if (crb(c,2)) { goto L_80317FBC; } // 80317FB4
  c->r[5]=c->r[13]+0xFFFFAB9Cu; // 80317FB8
L_80317FBC:;
  c->lr=0x80317FC0u; f_8030E200(c); // 80317FBC
L_80317FC0:;
  c->r[3]=0u+0x00000002u; // 80317FC0
  c->lr=0x80317FC8u; f_8030AF24(c); // 80317FC4
  cmps(c,0,(int32_t)c->r[3],0); // 80317FC8
  if (crb(c,2)) { goto L_80317FF0; } // 80317FCC
  c->r[6]=0u+0x80570000u; // 80317FD0
  c->r[4]=c->r[29]|c->r[29]; // 80317FD4
  c->r[6]=c->r[6]+0x000058F8u; // 80317FD8
  c->r[5]=c->r[31]|c->r[31]; // 80317FDC
  W32(c->r[6]+0x00000570u,c->r[30]); // 80317FE0
  c->lr=0x80317FE8u; f_803227D0(c); // 80317FE4
  c->r[3]=0u+0x00000000u; // 80317FE8
  goto L_80317FF4; // 80317FEC
L_80317FF0:;
  c->r[3]=0u+0x00000003u; // 80317FF0
L_80317FF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80317FF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80317FF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80317FFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80318000
  c->lr=c->r[0]; // 80318004
  c->r[1]=c->r[1]+0x00000020u; // 80318008
  return; // 8031800C
}

// BTM_WriteStoredLinkKey
void f_80318010(Ctx* __restrict c) {
  trace_call(0x80318010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318010
  c->r[0]=c->lr; // 80318014
  c->r[7]=0u+0x80570000u; // 80318018
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031801C
  c->r[7]=c->r[7]+0x000058F8u; // 80318020
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80318024
  c->r[31]=c->r[6]|c->r[6]; // 80318028
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031802C
  c->r[30]=c->r[5]|c->r[5]; // 80318030
  W32(c->r[1]+0x00000014u,c->r[29]); // 80318034
  c->r[29]=c->r[4]|c->r[4]; // 80318038
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031803C
  c->r[28]=c->r[3]|c->r[3]; // 80318040
  c->r[0]=R32(c->r[7]+0x00000570u); // 80318044
  cmps(c,0,(int32_t)c->r[0],0); // 80318048
  if (crb(c,2)) { goto L_80318058; } // 8031804C
  c->r[3]=0u+0x00000002u; // 80318050
  goto L_803180C0; // 80318054
L_80318058:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 80318058
  cmpu(c,0,c->r[0],0x00000004u); // 8031805C
  if (crb(c,0)) { goto L_8031807C; } // 80318060
  c->r[3]=0u+0x000D0000u; // 80318064
  c->r[4]=0u+0x80490000u; // 80318068
  c->r[5]=c->r[28]|c->r[28]; // 8031806C
  c->r[3]=c->r[3]+0x00000003u; // 80318070
  c->r[4]=c->r[4]+0xFFFFFE44u; // 80318074
  c->lr=0x8031807Cu; f_8030E200(c); // 80318078
L_8031807C:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 8031807C
  if (!crb(c,1)) { goto L_80318088; } // 80318080
  c->r[28]=0u+0x0000000Bu; // 80318084
L_80318088:;
  c->r[3]=0u+0x00000002u; // 80318088
  c->lr=0x80318090u; f_8030AF24(c); // 8031808C
  cmps(c,0,(int32_t)c->r[3],0); // 80318090
  if (crb(c,2)) { goto L_803180BC; } // 80318094
  c->r[6]=0u+0x80570000u; // 80318098
  c->r[4]=c->r[28]|c->r[28]; // 8031809C
  c->r[6]=c->r[6]+0x000058F8u; // 803180A0
  c->r[5]=c->r[29]|c->r[29]; // 803180A4
  W32(c->r[6]+0x00000570u,c->r[31]); // 803180A8
  c->r[6]=c->r[30]|c->r[30]; // 803180AC
  c->lr=0x803180B4u; f_80322830(c); // 803180B0
  c->r[3]=0u+0x00000000u; // 803180B4
  goto L_803180C0; // 803180B8
L_803180BC:;
  c->r[3]=0u+0x00000003u; // 803180BC
L_803180C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803180C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803180C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 803180C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 803180CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 803180D0
  c->lr=c->r[0]; // 803180D4
  c->r[1]=c->r[1]+0x00000020u; // 803180D8
  return; // 803180DC
}

// BTM_DeleteStoredLinkKey
void f_803180E0(Ctx* __restrict c) {
  trace_call(0x803180E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803180E0
  c->r[0]=c->lr; // 803180E4
  c->r[5]=0u+0x80570000u; // 803180E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803180EC
  c->r[5]=c->r[5]+0x000058F8u; // 803180F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803180F4
  c->r[31]=0u+0x00000000u; // 803180F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803180FC
  c->r[30]=c->r[4]|c->r[4]; // 80318100
  W32(c->r[1]+0x00000014u,c->r[29]); // 80318104
  c->r[29]=c->r[3]|c->r[3]; // 80318108
  c->r[0]=R32(c->r[5]+0x00000570u); // 8031810C
  cmps(c,0,(int32_t)c->r[0],0); // 80318110
  if (crb(c,2)) { goto L_80318120; } // 80318114
  c->r[3]=0u+0x00000002u; // 80318118
  goto L_80318194; // 8031811C
L_80318120:;
  cmps(c,0,(int32_t)c->r[3],0); // 80318120
  if (!crb(c,2)) { goto L_80318130; } // 80318124
  c->r[31]=0u+0x00000001u; // 80318128
  c->r[29]=c->r[1]+0x00000008u; // 8031812C
L_80318130:;
  c->r[3]=0u+0x80570000u; // 80318130
  c->r[3]=c->r[3]+0x000058F8u; // 80318134
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80318138
  cmpu(c,0,c->r[0],0x00000004u); // 8031813C
  if (crb(c,0)) { goto L_80318168; } // 80318140
  cmps(c,0,(int32_t)c->r[31],0); // 80318144
  c->r[3]=0u+0x000D0000u; // 80318148
  c->r[4]=0u+0x80490000u; // 8031814C
  c->r[5]=c->r[13]+0xFFFFABA4u; // 80318150
  c->r[3]=c->r[3]+0x00000003u; // 80318154
  c->r[4]=c->r[4]+0xFFFFFE70u; // 80318158
  if (crb(c,2)) { goto L_80318164; } // 8031815C
  c->r[5]=c->r[13]+0xFFFFAB9Cu; // 80318160
L_80318164:;
  c->lr=0x80318168u; f_8030E200(c); // 80318164
L_80318168:;
  c->r[5]=0u+0x80570000u; // 80318168
  c->r[3]=c->r[29]|c->r[29]; // 8031816C
  c->r[5]=c->r[5]+0x000058F8u; // 80318170
  c->r[4]=c->r[31]|c->r[31]; // 80318174
  W32(c->r[5]+0x00000570u,c->r[30]); // 80318178
  c->lr=0x80318180u; f_803229F0(c); // 8031817C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318180
  if (!crb(c,2)) { goto L_80318190; } // 80318184
  c->r[3]=0u+0x00000003u; // 80318188
  goto L_80318194; // 8031818C
L_80318190:;
  c->r[3]=0u+0x00000000u; // 80318190
L_80318194:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80318194
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80318198
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031819C
  c->r[29]=R32(c->r[1]+0x00000014u); // 803181A0
  c->lr=c->r[0]; // 803181A4
  c->r[1]=c->r[1]+0x00000020u; // 803181A8
  return; // 803181AC
}

// btm_read_stored_link_key_complete
void f_803181B0(Ctx* __restrict c) {
  trace_call(0x803181B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803181B0
  c->r[0]=c->lr; // 803181B4
  c->r[4]=0u+0x80570000u; // 803181B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803181BC
  c->r[4]=c->r[4]+0x000058F8u; // 803181C0
  c->r[0]=0u+0x00000000u; // 803181C4
  c->r[12]=R32(c->r[4]+0x00000570u); // 803181C8
  cmps(c,0,(int32_t)c->r[12],0); // 803181CC
  W32(c->r[4]+0x00000570u,c->r[0]); // 803181D0
  if (crb(c,2)) { goto L_8031821C; } // 803181D4
  c->r[0]=0u+0x00000002u; // 803181D8
  W8(c->r[1]+0x00000008u,c->r[0]); // 803181DC
  c->r[0]=R8(c->r[3]+0x00000000u); // 803181E0
  W8(c->r[1]+0x00000009u,c->r[0]); // 803181E4
  c->r[0]=R8(c->r[3]+0x00000002u); // 803181E8
  c->r[4]=R8(c->r[3]+0x00000001u); // 803181EC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803181F0
  c->r[0]=c->r[4]+c->r[0]; // 803181F4
  W16(c->r[1]+0x0000000Au,c->r[0]); // 803181F8
  c->r[0]=R8(c->r[3]+0x00000004u); // 803181FC
  c->r[4]=R8(c->r[3]+0x00000003u); // 80318200
  c->r[3]=c->r[1]+0x00000008u; // 80318204
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80318208
  c->r[0]=c->r[4]+c->r[0]; // 8031820C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 80318210
  c->ctr=c->r[12]; // 80318214
  if (true) { c->lr=0x8031821Cu; dispatch(c,c->ctr); } // 80318218
L_8031821C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031821C
  c->lr=c->r[0]; // 80318220
  c->r[1]=c->r[1]+0x00000010u; // 80318224
  return; // 80318228
}

// btm_write_stored_link_key_complete
void f_8031822C(Ctx* __restrict c) {
  trace_call(0x8031822Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031822C
  c->r[0]=c->lr; // 80318230
  c->r[4]=0u+0x80570000u; // 80318234
  W32(c->r[1]+0x00000014u,c->r[0]); // 80318238
  c->r[4]=c->r[4]+0x000058F8u; // 8031823C
  c->r[0]=0u+0x00000000u; // 80318240
  c->r[12]=R32(c->r[4]+0x00000570u); // 80318244
  cmps(c,0,(int32_t)c->r[12],0); // 80318248
  W32(c->r[4]+0x00000570u,c->r[0]); // 8031824C
  if (crb(c,2)) { goto L_80318278; } // 80318250
  c->r[0]=0u+0x00000003u; // 80318254
  W8(c->r[1]+0x00000008u,c->r[0]); // 80318258
  c->r[0]=R8(c->r[3]+0x00000000u); // 8031825C
  W8(c->r[1]+0x00000009u,c->r[0]); // 80318260
  c->r[0]=R8(c->r[3]+0x00000001u); // 80318264
  c->r[3]=c->r[1]+0x00000008u; // 80318268
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8031826C
  c->ctr=c->r[12]; // 80318270
  if (true) { c->lr=0x80318278u; dispatch(c,c->ctr); } // 80318274
L_80318278:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80318278
  c->lr=c->r[0]; // 8031827C
  c->r[1]=c->r[1]+0x00000010u; // 80318280
  return; // 80318284
}

// btm_delete_stored_link_key_complete
void f_80318288(Ctx* __restrict c) {
  trace_call(0x80318288u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318288
  c->r[0]=c->lr; // 8031828C
  c->r[4]=0u+0x80570000u; // 80318290
  W32(c->r[1]+0x00000014u,c->r[0]); // 80318294
  c->r[4]=c->r[4]+0x000058F8u; // 80318298
  c->r[0]=0u+0x00000000u; // 8031829C
  c->r[12]=R32(c->r[4]+0x00000570u); // 803182A0
  cmps(c,0,(int32_t)c->r[12],0); // 803182A4
  W32(c->r[4]+0x00000570u,c->r[0]); // 803182A8
  if (crb(c,2)) { goto L_803182E0; } // 803182AC
  c->r[0]=0u+0x00000004u; // 803182B0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803182B4
  c->r[0]=R8(c->r[3]+0x00000000u); // 803182B8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803182BC
  c->r[0]=R8(c->r[3]+0x00000002u); // 803182C0
  c->r[4]=R8(c->r[3]+0x00000001u); // 803182C4
  c->r[3]=c->r[1]+0x00000008u; // 803182C8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 803182CC
  c->r[0]=c->r[4]+c->r[0]; // 803182D0
  W16(c->r[1]+0x0000000Au,c->r[0]); // 803182D4
  c->ctr=c->r[12]; // 803182D8
  if (true) { c->lr=0x803182E0u; dispatch(c,c->ctr); } // 803182DC
L_803182E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803182E0
  c->lr=c->r[0]; // 803182E4
  c->r[1]=c->r[1]+0x00000010u; // 803182E8
  return; // 803182EC
}

// btm_return_link_keys_evt
void f_803182F0(Ctx* __restrict c) {
  trace_call(0x803182F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803182F0
  c->r[0]=c->lr; // 803182F4
  c->r[4]=0u+0x80570000u; // 803182F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803182FC
  c->r[4]=c->r[4]+0x000058F8u; // 80318300
  c->r[12]=R32(c->r[4]+0x00000570u); // 80318304
  cmps(c,0,(int32_t)c->r[12],0); // 80318308
  if (crb(c,2)) { goto L_8031846C; } // 8031830C
  c->r[5]=c->r[3]+0x00000002u; // 80318310
  c->r[4]=0u+0x00000000u; // 80318314
  goto L_80318454; // 80318318
L_8031831C:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 8031831C
  c->r[4]=c->r[4]+0x00000001u; // 80318320
  c->r[10]=R8(c->r[5]+0x00000001u); // 80318324
  c->r[9]=R8(c->r[5]+0x00000002u); // 80318328
  c->r[8]=R8(c->r[5]+0x00000003u); // 8031832C
  c->r[7]=R8(c->r[5]+0x00000004u); // 80318330
  c->r[6]=R8(c->r[5]+0x00000005u); // 80318334
  c->r[0]=R8(c->r[5]+0x00000006u); // 80318338
  W8(c->r[1]+0x00000017u,c->r[0]); // 8031833C
  c->r[0]=R8(c->r[5]+0x00000007u); // 80318340
  W8(c->r[1]+0x00000016u,c->r[0]); // 80318344
  c->r[0]=R8(c->r[5]+0x00000008u); // 80318348
  W8(c->r[1]+0x00000015u,c->r[0]); // 8031834C
  c->r[0]=R8(c->r[5]+0x00000009u); // 80318350
  W8(c->r[1]+0x00000014u,c->r[0]); // 80318354
  c->r[0]=R8(c->r[5]+0x0000000Au); // 80318358
  W8(c->r[1]+0x00000013u,c->r[0]); // 8031835C
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 80318360
  W8(c->r[1]+0x00000012u,c->r[0]); // 80318364
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 80318368
  W8(c->r[1]+0x00000011u,c->r[0]); // 8031836C
  c->r[0]=R8(c->r[5]+0x0000000Du); // 80318370
  W8(c->r[1]+0x00000010u,c->r[0]); // 80318374
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 80318378
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8031837C
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 80318380
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80318384
  c->r[0]=R8(c->r[5]+0x00000010u); // 80318388
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8031838C
  c->r[0]=R8(c->r[5]+0x00000011u); // 80318390
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80318394
  c->r[0]=R8(c->r[5]+0x00000012u); // 80318398
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8031839C
  c->r[0]=R8(c->r[5]+0x00000013u); // 803183A0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 803183A4
  c->r[0]=R8(c->r[5]+0x00000014u); // 803183A8
  W8(c->r[1]+0x00000009u,c->r[0]); // 803183AC
  c->r[0]=R8(c->r[5]+0x00000015u); // 803183B0
  W8(c->r[1]+0x00000008u,c->r[0]); // 803183B4
  W8(c->r[5]+0x00000000u,c->r[6]); // 803183B8
  W8(c->r[5]+0x00000001u,c->r[7]); // 803183BC
  W8(c->r[5]+0x00000002u,c->r[8]); // 803183C0
  W8(c->r[5]+0x00000003u,c->r[9]); // 803183C4
  W8(c->r[5]+0x00000004u,c->r[10]); // 803183C8
  W8(c->r[5]+0x00000005u,c->r[11]); // 803183CC
  c->r[0]=R8(c->r[1]+0x00000008u); // 803183D0
  W8(c->r[5]+0x00000006u,c->r[0]); // 803183D4
  c->r[0]=R8(c->r[1]+0x00000009u); // 803183D8
  W8(c->r[5]+0x00000007u,c->r[0]); // 803183DC
  c->r[0]=R8(c->r[1]+0x0000000Au); // 803183E0
  W8(c->r[5]+0x00000008u,c->r[0]); // 803183E4
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 803183E8
  W8(c->r[5]+0x00000009u,c->r[0]); // 803183EC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 803183F0
  W8(c->r[5]+0x0000000Au,c->r[0]); // 803183F4
  c->r[0]=R8(c->r[1]+0x0000000Du); // 803183F8
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 803183FC
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 80318400
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 80318404
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 80318408
  W8(c->r[5]+0x0000000Du,c->r[0]); // 8031840C
  c->r[0]=R8(c->r[1]+0x00000010u); // 80318410
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 80318414
  c->r[0]=R8(c->r[1]+0x00000011u); // 80318418
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 8031841C
  c->r[0]=R8(c->r[1]+0x00000012u); // 80318420
  W8(c->r[5]+0x00000010u,c->r[0]); // 80318424
  c->r[0]=R8(c->r[1]+0x00000013u); // 80318428
  W8(c->r[5]+0x00000011u,c->r[0]); // 8031842C
  c->r[0]=R8(c->r[1]+0x00000014u); // 80318430
  W8(c->r[5]+0x00000012u,c->r[0]); // 80318434
  c->r[0]=R8(c->r[1]+0x00000015u); // 80318438
  W8(c->r[5]+0x00000013u,c->r[0]); // 8031843C
  c->r[0]=R8(c->r[1]+0x00000016u); // 80318440
  W8(c->r[5]+0x00000014u,c->r[0]); // 80318444
  c->r[0]=R8(c->r[1]+0x00000017u); // 80318448
  W8(c->r[5]+0x00000015u,c->r[0]); // 8031844C
  c->r[5]=c->r[5]+0x00000016u; // 80318450
L_80318454:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 80318454
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 80318458
  cmpu(c,0,c->r[6],c->r[0]); // 8031845C
  if (crb(c,0)) { IRQCHK(c); goto L_8031831C; } // 80318460
  c->ctr=c->r[12]; // 80318464
  if (true) { c->lr=0x8031846Cu; dispatch(c,c->ctr); } // 80318468
L_8031846C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031846C
  c->lr=c->r[0]; // 80318470
  c->r[1]=c->r[1]+0x00000020u; // 80318474
  return; // 80318478
}

// btm_report_device_status
void f_8031847C(Ctx* __restrict c) {
  trace_call(0x8031847Cu);
  c->r[4]=0u+0x80570000u; // 8031847C
  c->r[4]=c->r[4]+0x000058F8u; // 80318480
  c->r[12]=R32(c->r[4]+0x00000568u); // 80318484
  cmps(c,0,(int32_t)c->r[12],0); // 80318488
  if (crb(c,2)) return; // 8031848C
  c->ctr=c->r[12]; // 80318490
  if (true) { dispatch(c,c->ctr); return; } // 80318494
  return; // 80318498
}

// btm_discovery_db_init
void f_8031849C(Ctx* __restrict c) {
  trace_call(0x8031849Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031849C
  c->r[0]=c->lr; // 803184A0
  c->r[4]=0u+0x00000000u; // 803184A4
  c->r[5]=0u+0x00001020u; // 803184A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 803184AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803184B0
  c->r[31]=0u+0x80570000u; // 803184B4
  c->r[31]=c->r[31]+0x000058F8u; // 803184B8
  c->r[0]=c->r[31]+0x000006D4u; // 803184BC
  W32(c->r[31]+0x00001678u,c->r[0]); // 803184C0
  c->r[3]=c->r[31]+0x00000658u; // 803184C4
  c->lr=0x803184CCu; f_800060B8(c); // 803184C8
  c->r[3]=0u+0x00000001u; // 803184CC
  c->r[4]=0u+0x00000002u; // 803184D0
  c->r[0]=0u+0x00001002u; // 803184D4
  W16(c->r[31]+0x00000670u,c->r[3]); // 803184D8
  c->r[3]=R32(c->r[31]+0x00001678u); // 803184DC
  c->r[6]=c->r[31]+0x00000674u; // 803184E0
  W16(c->r[31]+0x00000674u,c->r[4]); // 803184E4
  c->r[4]=0u+0x00000FA0u; // 803184E8
  c->r[5]=0u+0x00000001u; // 803184EC
  c->r[7]=0u+0x00000000u; // 803184F0
  W16(c->r[31]+0x00000678u,c->r[0]); // 803184F4
  c->r[8]=0u+0x00000000u; // 803184F8
  c->lr=0x80318500u; f_803330C0(c); // 803184FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80318500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80318504
  c->lr=c->r[0]; // 80318508
  c->r[1]=c->r[1]+0x00000010u; // 8031850C
  return; // 80318510
}

// btm_discovery_db_reset
void f_80318514(Ctx* __restrict c) {
  trace_call(0x80318514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318514
  c->r[0]=c->lr; // 80318518
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031851C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80318520
  c->r[31]=0u+0x80570000u; // 80318524
  c->r[31]=c->r[31]+0x000058F8u; // 80318528
  c->r[3]=c->r[31]+0x00000658u; // 8031852C
  c->lr=0x80318534u; f_8030E824(c); // 80318530
  c->r[0]=R8(c->r[31]+0x00001674u); // 80318534
  cmps(c,0,(int32_t)c->r[0],0); // 80318538
  if (crb(c,2)) { goto L_80318564; } // 8031853C
  c->r[12]=R32(c->r[31]+0x000006D0u); // 80318540
  c->r[0]=0u+0x00000000u; // 80318544
  W8(c->r[31]+0x00001674u,c->r[0]); // 80318548
  cmps(c,0,(int32_t)c->r[12],0); // 8031854C
  W32(c->r[31]+0x000006D0u,c->r[0]); // 80318550
  if (crb(c,2)) { goto L_80318564; } // 80318554
  c->r[3]=0u+0x00000000u; // 80318558
  c->ctr=c->r[12]; // 8031855C
  if (true) { c->lr=0x80318564u; dispatch(c,c->ctr); } // 80318560
L_80318564:;
  c->r[31]=0u+0x80570000u; // 80318564
  c->r[4]=0u+0x00000000u; // 80318568
  c->r[31]=c->r[31]+0x000058F8u; // 8031856C
  c->r[5]=0u+0x00001020u; // 80318570
  c->r[0]=c->r[31]+0x000006D4u; // 80318574
  W32(c->r[31]+0x00001678u,c->r[0]); // 80318578
  c->r[3]=c->r[31]+0x00000658u; // 8031857C
  c->lr=0x80318584u; f_800060B8(c); // 80318580
  c->r[3]=0u+0x00000001u; // 80318584
  c->r[4]=0u+0x00000002u; // 80318588
  c->r[0]=0u+0x00001002u; // 8031858C
  W16(c->r[31]+0x00000670u,c->r[3]); // 80318590
  c->r[3]=R32(c->r[31]+0x00001678u); // 80318594
  c->r[6]=c->r[31]+0x00000674u; // 80318598
  W16(c->r[31]+0x00000674u,c->r[4]); // 8031859C
  c->r[4]=0u+0x00000FA0u; // 803185A0
  c->r[5]=0u+0x00000001u; // 803185A4
  c->r[7]=0u+0x00000000u; // 803185A8
  W16(c->r[31]+0x00000678u,c->r[0]); // 803185AC
  c->r[8]=0u+0x00000000u; // 803185B0
  c->lr=0x803185B8u; f_803330C0(c); // 803185B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 803185B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803185BC
  c->lr=c->r[0]; // 803185C0
  c->r[1]=c->r[1]+0x00000010u; // 803185C4
  return; // 803185C8
}

// btm_discovery_timeout
void f_803185CC(Ctx* __restrict c) {
  trace_call(0x803185CCu);
  return; // 803185CC
}

// BTM_SetDiscoverability
void f_803185D0(Ctx* __restrict c) {
  trace_call(0x803185D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803185D0
  c->r[0]=c->lr; // 803185D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 803185D8
  c->r[11]=c->r[1]+0x00000030u; // 803185DC
  c->lr=0x803185E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803185E0
  cmps(c,0,(int32_t)c->r[3],0); // 803185E4
  c->r[31]=c->r[3]|c->r[3]; // 803185E8
  c->r[27]=c->r[4]|c->r[4]; // 803185EC
  c->r[28]=c->r[5]|c->r[5]; // 803185F0
  c->r[30]=0u+0x00000000u; // 803185F4
  if (crb(c,2)) { goto L_80318614; } // 803185F8
  cmpu(c,0,c->r[3],0x00000001u); // 803185FC
  if (crb(c,2)) { goto L_80318614; } // 80318600
  cmpu(c,0,c->r[3],0x00000002u); // 80318604
  if (crb(c,2)) { goto L_80318614; } // 80318608
  c->r[3]=0u+0x00000005u; // 8031860C
  goto L_8031883C; // 80318610
L_80318614:;
  c->r[3]=0u+0x80570000u; // 80318614
  c->r[3]=c->r[3]+0x000058F8u; // 80318618
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 8031861C
  cmpu(c,0,c->r[0],0x00000003u); // 80318620
  if (!crb(c,0)) { goto L_80318630; } // 80318624
  c->r[3]=0u+0x0000000Cu; // 80318628
  goto L_8031883C; // 8031862C
L_80318630:;
  cmps(c,0,(int32_t)c->r[4],0); // 80318630
  if (!crb(c,2)) { goto L_8031863C; } // 80318634
  c->r[27]=0u+0x00000012u; // 80318638
L_8031863C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8031863C
  if (!crb(c,2)) { goto L_80318648; } // 80318640
  c->r[28]=0u+0x00000800u; // 80318644
L_80318648:;
  c->r[3]=0u+0x80570000u; // 80318648
  c->r[3]=c->r[3]+0x000058F8u; // 8031864C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80318650
  cmpu(c,0,c->r[0],0x00000003u); // 80318654
  if (crb(c,0)) { goto L_8031867C; } // 80318658
  c->r[3]=0u+0x000D0000u; // 8031865C
  c->r[4]=0u+0x80490000u; // 80318660
  c->r[5]=c->r[31]|c->r[31]; // 80318664
  c->r[6]=c->r[27]|c->r[27]; // 80318668
  c->r[7]=c->r[28]|c->r[28]; // 8031866C
  c->r[3]=c->r[3]+0x00000002u; // 80318670
  c->r[4]=c->r[4]+0xFFFFFEA8u; // 80318674
  c->lr=0x8031867Cu; f_8030E230(c); // 80318678
L_8031867C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031867C
  if (crb(c,2)) { goto L_803186B4; } // 80318680
  cmpu(c,0,c->r[27],0x00000012u); // 80318684
  if (crb(c,0)) { goto L_803186AC; } // 80318688
  cmpu(c,0,c->r[27],0x00001000u); // 8031868C
  if (crb(c,1)) { goto L_803186AC; } // 80318690
  cmpu(c,0,c->r[28],0x00000012u); // 80318694
  if (crb(c,0)) { goto L_803186AC; } // 80318698
  cmpu(c,0,c->r[28],0x00001000u); // 8031869C
  if (crb(c,1)) { goto L_803186AC; } // 803186A0
  cmpu(c,0,c->r[27],c->r[28]); // 803186A4
  if (!crb(c,1)) { goto L_803186B4; } // 803186A8
L_803186AC:;
  c->r[3]=0u+0x00000005u; // 803186AC
  goto L_8031883C; // 803186B0
L_803186B4:;
  cmps(c,0,(int32_t)c->r[31],0); // 803186B4
  if (crb(c,2)) { goto L_80318728; } // 803186B8
  c->r[3]=0u+0x00000002u; // 803186BC
  c->lr=0x803186C4u; f_8030AF24(c); // 803186C0
  cmps(c,0,(int32_t)c->r[3],0); // 803186C4
  c->r[29]=c->r[3]|c->r[3]; // 803186C8
  if (crb(c,2)) { goto L_80318720; } // 803186CC
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 803186D0
  if (crb(c,2)) { goto L_8031870C; } // 803186D4
  c->r[3]=c->r[1]+0x0000000Cu; // 803186D8
  c->r[4]=c->r[2]+0xFFFFB404u; // 803186DC
  c->r[5]=0u+0x00000003u; // 803186E0
  c->lr=0x803186E8u; f_80005FB4(c); // 803186E4
  c->r[3]=c->r[1]+0x0000000Fu; // 803186E8
  c->r[4]=c->r[2]+0xFFFFB400u; // 803186EC
  c->r[5]=0u+0x00000003u; // 803186F0
  c->lr=0x803186F8u; f_80005FB4(c); // 803186F4
  c->r[3]=c->r[29]|c->r[29]; // 803186F8
  c->r[5]=c->r[1]+0x0000000Cu; // 803186FC
  c->r[4]=0u+0x00000002u; // 80318700
  c->lr=0x80318708u; f_80322F90(c); // 80318704
  goto L_80318718; // 80318708
L_8031870C:;
  c->r[4]=0u+0x00000001u; // 8031870C
  c->r[5]=c->r[2]+0xFFFFB400u; // 80318710
  c->lr=0x80318718u; f_80322F90(c); // 80318714
L_80318718:;
  c->r[30]=c->r[30]|0x00000001u; // 80318718
  goto L_80318728; // 8031871C
L_80318720:;
  c->r[3]=0u+0x00000003u; // 80318720
  goto L_8031883C; // 80318724
L_80318728:;
  c->r[3]=0u+0x80570000u; // 80318728
  c->r[3]=c->r[3]+0x000058F8u; // 8031872C
  c->r[0]=R16(c->r[3]+0x000016A0u); // 80318730
  cmpu(c,0,c->r[27],c->r[0]); // 80318734
  if (!crb(c,2)) { goto L_80318748; } // 80318738
  c->r[0]=R16(c->r[3]+0x000016A2u); // 8031873C
  cmpu(c,0,c->r[28],c->r[0]); // 80318740
  if (crb(c,2)) { goto L_80318780; } // 80318744
L_80318748:;
  c->r[3]=0u+0x00000002u; // 80318748
  c->lr=0x80318750u; f_8030AF24(c); // 8031874C
  cmps(c,0,(int32_t)c->r[3],0); // 80318750
  if (crb(c,2)) { goto L_80318778; } // 80318754
  c->r[6]=0u+0x80570000u; // 80318758
  c->r[4]=c->r[28]|c->r[28]; // 8031875C
  c->r[6]=c->r[6]+0x000058F8u; // 80318760
  c->r[5]=c->r[27]|c->r[27]; // 80318764
  W16(c->r[6]+0x000016A0u,c->r[27]); // 80318768
  W16(c->r[6]+0x000016A2u,c->r[28]); // 8031876C
  c->lr=0x80318774u; f_80322C8C(c); // 80318770
  goto L_80318780; // 80318774
L_80318778:;
  c->r[3]=0u+0x00000003u; // 80318778
  goto L_8031883C; // 8031877C
L_80318780:;
  c->r[3]=0u+0x00000002u; // 80318780
  c->lr=0x80318788u; f_8030AF24(c); // 80318784
  cmps(c,0,(int32_t)c->r[3],0); // 80318788
  if (crb(c,2)) { goto L_803187C4; } // 8031878C
  c->r[4]=0u+0x80570000u; // 80318790
  c->r[4]=c->r[4]+0x000058F8u; // 80318794
  c->r[0]=R16(c->r[4]+0x0000169Au); // 80318798
  cmps(c,0,(int32_t)c->r[0],0); // 8031879C
  if (crb(c,2)) { goto L_803187AC; } // 803187A0
  c->r[0]=c->r[30]|0x00000002u; // 803187A4
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 803187A8
L_803187AC:;
  c->r[5]=0u+0x80570000u; // 803187AC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803187B0
  c->r[5]=c->r[5]+0x000058F8u; // 803187B4
  W16(c->r[5]+0x00001698u,c->r[31]); // 803187B8
  c->lr=0x803187C0u; f_80322C18(c); // 803187BC
  goto L_803187CC; // 803187C0
L_803187C4:;
  c->r[3]=0u+0x00000003u; // 803187C4
  goto L_8031883C; // 803187C8
L_803187CC:;
  c->lr=0x803187D0u; f_80317C28(c); // 803187CC
  c->r[4]=R8(c->r[3]+0x00000000u); // 803187D0
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 803187D4
  c->r[5]=R8(c->r[3]+0x00000001u); // 803187D8
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 803187DC
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 803187E0
  c->r[4]=c->r[4]+c->r[0]; // 803187E4
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 803187E8
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 803187EC
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 803187F0
  if (crb(c,2)) { goto L_80318838; } // 803187F4
  c->r[3]=R8(c->r[3]+0x00000002u); // 803187F8
  cmps(c,0,(int32_t)c->r[6],0); // 803187FC
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 80318800
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 80318804
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 80318808
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8031880C
  if (crb(c,2)) { goto L_80318818; } // 80318810
  c->r[0]=c->r[4]|0x00000020u; // 80318814
L_80318818:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 80318818
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 8031881C
  c->r[4]=c->r[5]+c->r[3]; // 80318820
  W8(c->r[1]+0x0000000Au,c->r[6]); // 80318824
  c->r[3]=c->r[1]+0x00000008u; // 80318828
  W8(c->r[1]+0x00000009u,c->r[4]); // 8031882C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80318830
  c->lr=0x80318838u; f_80317BA8(c); // 80318834
L_80318838:;
  c->r[3]=0u+0x00000000u; // 80318838
L_8031883C:;
  c->r[11]=c->r[1]+0x00000030u; // 8031883C
  c->lr=0x80318844u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80318840
  c->r[0]=R32(c->r[1]+0x00000034u); // 80318844
  c->lr=c->r[0]; // 80318848
  c->r[1]=c->r[1]+0x00000030u; // 8031884C
  return; // 80318850
}

// BTM_SetInquiryScanType
void f_80318854(Ctx* __restrict c) {
  trace_call(0x80318854u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318854
  c->r[0]=c->lr; // 80318858
  cmps(c,0,(int32_t)c->r[3],0); // 8031885C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80318860
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80318864
  W32(c->r[1]+0x00000008u,c->r[30]); // 80318868
  c->r[30]=c->r[3]|c->r[3]; // 8031886C
  if (crb(c,2)) { goto L_80318884; } // 80318870
  cmpu(c,0,c->r[3],0x00000001u); // 80318874
  if (crb(c,2)) { goto L_80318884; } // 80318878
  c->r[3]=0u+0x00000005u; // 8031887C
  goto L_803188EC; // 80318880
L_80318884:;
  c->r[31]=0u+0x80570000u; // 80318884
  c->r[31]=c->r[31]+0x000058F8u; // 80318888
  c->r[0]=R8(c->r[31]+0x00000643u); // 8031888C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80318890
  if (!crb(c,2)) { goto L_803188A0; } // 80318894
  c->r[3]=0u+0x00000004u; // 80318898
  goto L_803188EC; // 8031889C
L_803188A0:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 803188A0
  cmpu(c,0,c->r[3],c->r[0]); // 803188A4
  if (crb(c,2)) { goto L_803188E8; } // 803188A8
  c->lr=0x803188B0u; f_80316DA8(c); // 803188AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803188B0
  if (crb(c,2)) { goto L_803188E0; } // 803188B4
  c->r[3]=0u+0x00000002u; // 803188B8
  c->lr=0x803188C0u; f_8030AF24(c); // 803188BC
  cmps(c,0,(int32_t)c->r[3],0); // 803188C0
  if (crb(c,2)) { goto L_803188D8; } // 803188C4
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 803188C8
  c->lr=0x803188D0u; f_80323658(c); // 803188CC
  W16(c->r[31]+0x000016A4u,c->r[30]); // 803188D0
  goto L_803188E8; // 803188D4
L_803188D8:;
  c->r[3]=0u+0x00000003u; // 803188D8
  goto L_803188EC; // 803188DC
L_803188E0:;
  c->r[3]=0u+0x00000006u; // 803188E0
  goto L_803188EC; // 803188E4
L_803188E8:;
  c->r[3]=0u+0x00000000u; // 803188E8
L_803188EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 803188EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803188F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803188F4
  c->lr=c->r[0]; // 803188F8
  c->r[1]=c->r[1]+0x00000010u; // 803188FC
  return; // 80318900
}

// BTM_SetPageScanType
void f_80318904(Ctx* __restrict c) {
  trace_call(0x80318904u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318904
  c->r[0]=c->lr; // 80318908
  cmps(c,0,(int32_t)c->r[3],0); // 8031890C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80318910
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80318914
  W32(c->r[1]+0x00000008u,c->r[30]); // 80318918
  c->r[30]=c->r[3]|c->r[3]; // 8031891C
  if (crb(c,2)) { goto L_80318934; } // 80318920
  cmpu(c,0,c->r[3],0x00000001u); // 80318924
  if (crb(c,2)) { goto L_80318934; } // 80318928
  c->r[3]=0u+0x00000005u; // 8031892C
  goto L_8031899C; // 80318930
L_80318934:;
  c->r[31]=0u+0x80570000u; // 80318934
  c->r[31]=c->r[31]+0x000058F8u; // 80318938
  c->r[0]=R8(c->r[31]+0x00000643u); // 8031893C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80318940
  if (!crb(c,2)) { goto L_80318950; } // 80318944
  c->r[3]=0u+0x00000004u; // 80318948
  goto L_8031899C; // 8031894C
L_80318950:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 80318950
  cmpu(c,0,c->r[3],c->r[0]); // 80318954
  if (crb(c,2)) { goto L_80318998; } // 80318958
  c->lr=0x80318960u; f_80316DA8(c); // 8031895C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318960
  if (crb(c,2)) { goto L_80318990; } // 80318964
  c->r[3]=0u+0x00000002u; // 80318968
  c->lr=0x80318970u; f_8030AF24(c); // 8031896C
  cmps(c,0,(int32_t)c->r[3],0); // 80318970
  if (crb(c,2)) { goto L_80318988; } // 80318974
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80318978
  c->lr=0x80318980u; f_803236B8(c); // 8031897C
  W16(c->r[31]+0x000016A6u,c->r[30]); // 80318980
  goto L_80318998; // 80318984
L_80318988:;
  c->r[3]=0u+0x00000003u; // 80318988
  goto L_8031899C; // 8031898C
L_80318990:;
  c->r[3]=0u+0x00000006u; // 80318990
  goto L_8031899C; // 80318994
L_80318998:;
  c->r[3]=0u+0x00000000u; // 80318998
L_8031899C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031899C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 803189A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 803189A4
  c->lr=c->r[0]; // 803189A8
  c->r[1]=c->r[1]+0x00000010u; // 803189AC
  return; // 803189B0
}

// BTM_SetInquiryMode
void f_803189B4(Ctx* __restrict c) {
  trace_call(0x803189B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803189B4
  c->r[0]=c->lr; // 803189B8
  cmps(c,0,(int32_t)c->r[3],0); // 803189BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 803189C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 803189C4
  c->r[31]=c->r[3]|c->r[3]; // 803189C8
  if (crb(c,2)) { goto L_803189E0; } // 803189CC
  cmpu(c,0,c->r[3],0x00000001u); // 803189D0
  if (crb(c,2)) { goto L_803189E0; } // 803189D4
  c->r[3]=0u+0x00000005u; // 803189D8
  goto L_80318A38; // 803189DC
L_803189E0:;
  c->r[3]=0u+0x80570000u; // 803189E0
  c->r[3]=c->r[3]+0x000058F8u; // 803189E4
  c->r[0]=R8(c->r[3]+0x00000643u); // 803189E8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 803189EC
  if (!crb(c,2)) { goto L_803189FC; } // 803189F0
  c->r[3]=0u+0x00000004u; // 803189F4
  goto L_80318A38; // 803189F8
L_803189FC:;
  c->lr=0x80318A00u; f_80316DA8(c); // 803189FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318A00
  if (!crb(c,2)) { goto L_80318A10; } // 80318A04
  c->r[3]=0u+0x00000006u; // 80318A08
  goto L_80318A38; // 80318A0C
L_80318A10:;
  c->r[3]=0u+0x00000002u; // 80318A10
  c->lr=0x80318A18u; f_8030AF24(c); // 80318A14
  cmps(c,0,(int32_t)c->r[3],0); // 80318A18
  if (crb(c,2)) { goto L_80318A2C; } // 80318A1C
  c->r[4]=c->r[31]|c->r[31]; // 80318A20
  c->lr=0x80318A28u; f_80323688(c); // 80318A24
  goto L_80318A34; // 80318A28
L_80318A2C:;
  c->r[3]=0u+0x00000003u; // 80318A2C
  goto L_80318A38; // 80318A30
L_80318A34:;
  c->r[3]=0u+0x00000000u; // 80318A34
L_80318A38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80318A38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80318A3C
  c->lr=c->r[0]; // 80318A40
  c->r[1]=c->r[1]+0x00000010u; // 80318A44
  return; // 80318A48
}

// BTM_SetConnectability
void f_80318A4C(Ctx* __restrict c) {
  trace_call(0x80318A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318A4C
  c->r[0]=c->lr; // 80318A50
  W32(c->r[1]+0x00000024u,c->r[0]); // 80318A54
  c->r[11]=c->r[1]+0x00000020u; // 80318A58
  c->lr=0x80318A60u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80318A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80318A60
  c->r[31]=0u+0x80570000u; // 80318A64
  c->r[27]=c->r[3]|c->r[3]; // 80318A68
  c->r[28]=c->r[4]|c->r[4]; // 80318A6C
  c->r[29]=c->r[5]|c->r[5]; // 80318A70
  c->r[31]=c->r[31]+0x000058F8u; // 80318A74
  c->r[30]=0u+0x00000000u; // 80318A78
  if (crb(c,2)) { goto L_80318A90; } // 80318A7C
  cmpu(c,0,c->r[3],0x00000001u); // 80318A80
  if (crb(c,2)) { goto L_80318A90; } // 80318A84
  c->r[3]=0u+0x00000005u; // 80318A88
  goto L_80318BBC; // 80318A8C
L_80318A90:;
  c->r[3]=0u+0x80570000u; // 80318A90
  c->r[3]=c->r[3]+0x000058F8u; // 80318A94
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 80318A98
  cmpu(c,0,c->r[0],0x00000003u); // 80318A9C
  if (!crb(c,0)) { goto L_80318AAC; } // 80318AA0
  c->r[3]=0u+0x0000000Cu; // 80318AA4
  goto L_80318BBC; // 80318AA8
L_80318AAC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80318AAC
  if (!crb(c,2)) { goto L_80318AB8; } // 80318AB0
  c->r[28]=0u+0x00000012u; // 80318AB4
L_80318AB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 80318AB8
  if (!crb(c,2)) { goto L_80318AC4; } // 80318ABC
  c->r[29]=0u+0x00000800u; // 80318AC0
L_80318AC4:;
  c->r[3]=0u+0x80570000u; // 80318AC4
  c->r[3]=c->r[3]+0x000058F8u; // 80318AC8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80318ACC
  cmpu(c,0,c->r[0],0x00000003u); // 80318AD0
  if (crb(c,0)) { goto L_80318AF8; } // 80318AD4
  c->r[3]=0u+0x000D0000u; // 80318AD8
  c->r[4]=0u+0x80490000u; // 80318ADC
  c->r[5]=c->r[27]|c->r[27]; // 80318AE0
  c->r[6]=c->r[28]|c->r[28]; // 80318AE4
  c->r[7]=c->r[29]|c->r[29]; // 80318AE8
  c->r[3]=c->r[3]+0x00000002u; // 80318AEC
  c->r[4]=c->r[4]+0xFFFFFF04u; // 80318AF0
  c->lr=0x80318AF8u; f_8030E230(c); // 80318AF4
L_80318AF8:;
  cmpu(c,0,c->r[27],0x00000001u); // 80318AF8
  if (!crb(c,2)) { goto L_80318B34; } // 80318AFC
  cmpu(c,0,c->r[28],0x00000012u); // 80318B00
  if (crb(c,0)) { goto L_80318B28; } // 80318B04
  cmpu(c,0,c->r[28],0x00001000u); // 80318B08
  if (crb(c,1)) { goto L_80318B28; } // 80318B0C
  cmpu(c,0,c->r[29],0x00000012u); // 80318B10
  if (crb(c,0)) { goto L_80318B28; } // 80318B14
  cmpu(c,0,c->r[29],0x00001000u); // 80318B18
  if (crb(c,1)) { goto L_80318B28; } // 80318B1C
  cmpu(c,0,c->r[28],c->r[29]); // 80318B20
  if (!crb(c,1)) { goto L_80318B30; } // 80318B24
L_80318B28:;
  c->r[3]=0u+0x00000005u; // 80318B28
  goto L_80318BBC; // 80318B2C
L_80318B30:;
  c->r[30]=c->r[30]|0x00000002u; // 80318B30
L_80318B34:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 80318B34
  cmpu(c,0,c->r[28],c->r[0]); // 80318B38
  if (!crb(c,2)) { goto L_80318B4C; } // 80318B3C
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 80318B40
  cmpu(c,0,c->r[29],c->r[0]); // 80318B44
  if (crb(c,2)) { goto L_80318B7C; } // 80318B48
L_80318B4C:;
  c->r[3]=0u+0x00000002u; // 80318B4C
  c->lr=0x80318B54u; f_8030AF24(c); // 80318B50
  cmps(c,0,(int32_t)c->r[3],0); // 80318B54
  if (crb(c,2)) { goto L_80318B74; } // 80318B58
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 80318B5C
  c->r[4]=c->r[29]|c->r[29]; // 80318B60
  c->r[5]=c->r[28]|c->r[28]; // 80318B64
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 80318B68
  c->lr=0x80318B70u; f_80322C48(c); // 80318B6C
  goto L_80318B7C; // 80318B70
L_80318B74:;
  c->r[3]=0u+0x00000003u; // 80318B74
  goto L_80318BBC; // 80318B78
L_80318B7C:;
  c->r[3]=0u+0x00000002u; // 80318B7C
  c->lr=0x80318B84u; f_8030AF24(c); // 80318B80
  cmps(c,0,(int32_t)c->r[3],0); // 80318B84
  if (crb(c,2)) { goto L_80318BB0; } // 80318B88
  c->r[0]=R16(c->r[31]+0x00001698u); // 80318B8C
  cmps(c,0,(int32_t)c->r[0],0); // 80318B90
  if (crb(c,2)) { goto L_80318BA0; } // 80318B94
  c->r[0]=c->r[30]|0x00000001u; // 80318B98
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 80318B9C
L_80318BA0:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 80318BA0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80318BA4
  c->lr=0x80318BACu; f_80322C18(c); // 80318BA8
  goto L_80318BB8; // 80318BAC
L_80318BB0:;
  c->r[3]=0u+0x00000003u; // 80318BB0
  goto L_80318BBC; // 80318BB4
L_80318BB8:;
  c->r[3]=0u+0x00000000u; // 80318BB8
L_80318BBC:;
  c->r[11]=c->r[1]+0x00000020u; // 80318BBC
  c->lr=0x80318BC4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80318BC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80318BC4
  c->lr=c->r[0]; // 80318BC8
  c->r[1]=c->r[1]+0x00000020u; // 80318BCC
  return; // 80318BD0
}

// BTM_IsInquiryActive
void f_80318BD4(Ctx* __restrict c) {
  trace_call(0x80318BD4u);
  c->r[3]=0u+0x80570000u; // 80318BD4
  c->r[3]=c->r[3]+0x000058F8u; // 80318BD8
  c->r[3]=R8(c->r[3]+0x00001848u); // 80318BDC
  return; // 80318BE0
}

// BTM_CancelInquiry
void f_80318BE4(Ctx* __restrict c) {
  trace_call(0x80318BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318BE4
  c->r[0]=c->lr; // 80318BE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80318BEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80318BF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80318BF4
  c->r[30]=0u+0x80570000u; // 80318BF8
  c->r[30]=c->r[30]+0x000058F8u; // 80318BFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80318C00
  c->r[29]=0u+0x00000000u; // 80318C04
  c->r[0]=R8(c->r[30]+0x000027C0u); // 80318C08
  cmpu(c,0,c->r[0],0x00000003u); // 80318C0C
  if (crb(c,0)) { goto L_80318C28; } // 80318C10
  c->r[3]=0u+0x000D0000u; // 80318C14
  c->r[4]=0u+0x80490000u; // 80318C18
  c->r[3]=c->r[3]+0x00000002u; // 80318C1C
  c->r[4]=c->r[4]+0xFFFFFF58u; // 80318C20
  c->lr=0x80318C28u; f_8030E1E8(c); // 80318C24
L_80318C28:;
  c->lr=0x80318C2Cu; f_80316DA8(c); // 80318C28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318C2C
  if (!crb(c,2)) { goto L_80318C3C; } // 80318C30
  c->r[3]=0u+0x00000006u; // 80318C34
  goto L_80318CD0; // 80318C38
L_80318C3C:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 80318C3C
  cmps(c,0,(int32_t)c->r[0],0); // 80318C40
  if (crb(c,2)) { goto L_80318CCC; } // 80318C44
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80318C48
  if (!crb(c,2)) { goto L_80318CCC; } // 80318C4C
  c->r[0]=R8(c->r[30]+0x00001844u); // 80318C50
  c->r[4]=0u+0x00000000u; // 80318C54
  W8(c->r[30]+0x00001848u,c->r[4]); // 80318C58
  cmps(c,0,(int32_t)c->r[0],0); // 80318C5C
  W8(c->r[30]+0x00001847u,c->r[4]); // 80318C60
  W32(c->r[30]+0x000016B4u,c->r[4]); // 80318C64
  W32(c->r[30]+0x000016B0u,c->r[4]); // 80318C68
  if (crb(c,2)) { goto L_80318C84; } // 80318C6C
  c->r[3]=R8(c->r[30]+0x00001845u); // 80318C70
  W8(c->r[30]+0x00001844u,c->r[4]); // 80318C74
  c->r[0]=c->r[3]+0x00000001u; // 80318C78
  W8(c->r[30]+0x00001845u,c->r[0]); // 80318C7C
  goto L_80318C94; // 80318C80
L_80318C84:;
  c->lr=0x80318C88u; f_80321168(c); // 80318C84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318C88
  if (!crb(c,2)) { goto L_80318C94; } // 80318C8C
  c->r[29]=0u+0x00000003u; // 80318C90
L_80318C94:;
  c->r[31]=0u+0x80570000u; // 80318C94
  c->r[4]=R32(c->r[30]+0x000016C0u); // 80318C98
  c->r[31]=c->r[31]+0x000058F8u; // 80318C9C
  c->r[3]=R32(c->r[31]+0x000016DCu); // 80318CA0
  c->r[0]=c->r[4]+0x00000001u; // 80318CA4
  W32(c->r[30]+0x000016C0u,c->r[0]); // 80318CA8
  cmps(c,0,(int32_t)c->r[3],0); // 80318CAC
  if (crb(c,2)) { goto L_80318CC0; } // 80318CB0
  c->lr=0x80318CB8u; f_8030B00C(c); // 80318CB4
  c->r[0]=0u+0x00000000u; // 80318CB8
  W32(c->r[31]+0x000016DCu,c->r[0]); // 80318CBC
L_80318CC0:;
  c->r[0]=0u+0x00000000u; // 80318CC0
  W16(c->r[31]+0x000016E0u,c->r[0]); // 80318CC4
  W16(c->r[31]+0x000016E2u,c->r[0]); // 80318CC8
L_80318CCC:;
  c->r[3]=c->r[29]|c->r[29]; // 80318CCC
L_80318CD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80318CD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80318CD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80318CD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80318CDC
  c->lr=c->r[0]; // 80318CE0
  c->r[1]=c->r[1]+0x00000020u; // 80318CE4
  return; // 80318CE8
}

// BTM_StartInquiry
void f_80318CEC(Ctx* __restrict c) {
  trace_call(0x80318CECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318CEC
  c->r[0]=c->lr; // 80318CF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80318CF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80318CF8
  c->r[31]=0u+0x80570000u; // 80318CFC
  c->r[31]=c->r[31]+0x000058F8u; // 80318D00
  W32(c->r[1]+0x00000018u,c->r[30]); // 80318D04
  c->r[30]=c->r[5]|c->r[5]; // 80318D08
  W32(c->r[1]+0x00000014u,c->r[29]); // 80318D0C
  c->r[29]=c->r[4]|c->r[4]; // 80318D10
  W32(c->r[1]+0x00000010u,c->r[28]); // 80318D14
  c->r[28]=c->r[3]|c->r[3]; // 80318D18
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80318D1C
  cmpu(c,0,c->r[0],0x00000003u); // 80318D20
  if (crb(c,0)) { goto L_80318D4C; } // 80318D24
  c->r[3]=0u+0x000D0000u; // 80318D28
  c->r[4]=0u+0x80490000u; // 80318D2C
  c->r[5]=R8(c->r[28]+0x00000000u); // 80318D30
  c->r[3]=c->r[3]+0x00000002u; // 80318D34
  c->r[6]=R8(c->r[28]+0x00000001u); // 80318D38
  c->r[4]=c->r[4]+0xFFFFFF74u; // 80318D3C
  c->r[7]=R8(c->r[28]+0x00000002u); // 80318D40
  c->r[8]=R8(c->r[28]+0x00000003u); // 80318D44
  c->lr=0x80318D4Cu; f_8030E248(c); // 80318D48
L_80318D4C:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 80318D4C
  cmps(c,0,(int32_t)c->r[0],0); // 80318D50
  if (!crb(c,2)) { goto L_80318D64; } // 80318D54
  c->r[0]=R8(c->r[31]+0x00001844u); // 80318D58
  cmps(c,0,(int32_t)c->r[0],0); // 80318D5C
  if (crb(c,2)) { goto L_80318D6C; } // 80318D60
L_80318D64:;
  c->r[3]=0u+0x00000002u; // 80318D64
  goto L_80318E80; // 80318D68
L_80318D6C:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80318D6C
  cmps(c,0,(int32_t)c->r[0],0); // 80318D70
  if (crb(c,2)) { goto L_80318D88; } // 80318D74
  cmpu(c,0,c->r[0],0x00000001u); // 80318D78
  if (crb(c,2)) { goto L_80318D88; } // 80318D7C
  c->r[3]=0u+0x00000005u; // 80318D80
  goto L_80318E80; // 80318D84
L_80318D88:;
  c->lr=0x80318D8Cu; f_80316DA8(c); // 80318D88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318D8C
  if (!crb(c,2)) { goto L_80318D9C; } // 80318D90
  c->r[3]=0u+0x00000006u; // 80318D94
  goto L_80318E80; // 80318D98
L_80318D9C:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 80318D9C
  c->r[0]=0u+0x00000003u; // 80318DA0
  c->r[3]=R8(c->r[28]+0x00000001u); // 80318DA4
  c->r[6]=0u+0x00000000u; // 80318DA8
  c->r[4]=0u+0x00000001u; // 80318DAC
  W8(c->r[31]+0x00001834u,c->r[5]); // 80318DB0
  W8(c->r[31]+0x00001835u,c->r[3]); // 80318DB4
  c->r[5]=R8(c->r[28]+0x00000002u); // 80318DB8
  c->r[3]=R8(c->r[28]+0x00000003u); // 80318DBC
  W8(c->r[31]+0x00001836u,c->r[5]); // 80318DC0
  W8(c->r[31]+0x00001837u,c->r[3]); // 80318DC4
  c->r[5]=R8(c->r[28]+0x00000004u); // 80318DC8
  c->r[3]=R8(c->r[28]+0x00000005u); // 80318DCC
  W8(c->r[31]+0x00001838u,c->r[5]); // 80318DD0
  W8(c->r[31]+0x00001839u,c->r[3]); // 80318DD4
  c->r[5]=R8(c->r[28]+0x00000006u); // 80318DD8
  c->r[3]=R8(c->r[28]+0x00000007u); // 80318DDC
  W8(c->r[31]+0x0000183Au,c->r[5]); // 80318DE0
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 80318DE4
  c->r[3]=R8(c->r[28]+0x00000008u); // 80318DE8
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 80318DEC
  c->r[3]=R8(c->r[28]+0x00000009u); // 80318DF0
  W8(c->r[31]+0x0000183Du,c->r[3]); // 80318DF4
  W8(c->r[31]+0x00001847u,c->r[0]); // 80318DF8
  W32(c->r[31]+0x000016B0u,c->r[30]); // 80318DFC
  W32(c->r[31]+0x000016B4u,c->r[29]); // 80318E00
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 80318E04
  c->r[5]=R8(c->r[28]+0x00000000u); // 80318E08
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 80318E0C
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 80318E10
  c->r[0]=~(c->r[3]|c->r[0]); // 80318E14
  c->r[3]=sraw(c,c->r[0],31); // 80318E18
  c->r[0]=c->r[3]+0x00000002u; // 80318E1C
  W8(c->r[31]+0x00001848u,c->r[0]); // 80318E20
  c->r[0]=R8(c->r[28]+0x00000003u); // 80318E24
  cmps(c,0,(int32_t)c->r[0],0); // 80318E28
  if (crb(c,2)) { goto L_80318E40; } // 80318E2C
  if (crb(c,0)) { goto L_80318E58; } // 80318E30
  cmps(c,0,(int32_t)c->r[0],3); // 80318E34
  if (!crb(c,0)) { goto L_80318E58; } // 80318E38
  goto L_80318E4C; // 80318E3C
L_80318E40:;
  c->r[0]=0u+0x00000002u; // 80318E40
  W8(c->r[31]+0x00001847u,c->r[0]); // 80318E44
  goto L_80318E60; // 80318E48
L_80318E4C:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 80318E4C
  W8(c->r[28]+0x00000003u,c->r[6]); // 80318E50
  goto L_80318E60; // 80318E54
L_80318E58:;
  c->r[3]=0u+0x00000005u; // 80318E58
  goto L_80318E80; // 80318E5C
L_80318E60:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 80318E60
  c->r[4]=c->r[28]+0x00000004u; // 80318E64
  c->lr=0x80318E6Cu; f_80319700(c); // 80318E68
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80318E6C
  cmpu(c,0,c->r[0],0x00000001u); // 80318E70
  if (crb(c,2)) { goto L_80318E80; } // 80318E74
  c->r[0]=0u+0x00000000u; // 80318E78
  W8(c->r[31]+0x00001847u,c->r[0]); // 80318E7C
L_80318E80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80318E80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80318E84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80318E88
  c->r[29]=R32(c->r[1]+0x00000014u); // 80318E8C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80318E90
  c->lr=c->r[0]; // 80318E94
  c->r[1]=c->r[1]+0x00000020u; // 80318E98
  return; // 80318E9C
}

// BTM_ReadRemoteDeviceName
void f_80318EA0(Ctx* __restrict c) {
  trace_call(0x80318EA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318EA0
  c->r[0]=c->lr; // 80318EA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80318EA8
  c->r[11]=c->r[1]+0x00000020u; // 80318EAC
  c->lr=0x80318EB4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80318EB0
  c->r[5]=0u+0x80570000u; // 80318EB4
  c->r[27]=c->r[3]|c->r[3]; // 80318EB8
  c->r[5]=c->r[5]+0x000058F8u; // 80318EBC
  c->r[28]=c->r[4]|c->r[4]; // 80318EC0
  c->r[0]=R8(c->r[5]+0x000027C0u); // 80318EC4
  c->r[29]=0u+0x00000000u; // 80318EC8
  cmpu(c,0,c->r[0],0x00000003u); // 80318ECC
  if (crb(c,0)) { goto L_80318F00; } // 80318ED0
  c->r[3]=0u+0x000D0000u; // 80318ED4
  c->r[4]=0u+0x80490000u; // 80318ED8
  c->r[5]=R8(c->r[27]+0x00000000u); // 80318EDC
  c->r[3]=c->r[3]+0x00000002u; // 80318EE0
  c->r[6]=R8(c->r[27]+0x00000001u); // 80318EE4
  c->r[4]=c->r[4]+0xFFFFFFACu; // 80318EE8
  c->r[7]=R8(c->r[27]+0x00000002u); // 80318EEC
  c->r[8]=R8(c->r[27]+0x00000003u); // 80318EF0
  c->r[9]=R8(c->r[27]+0x00000004u); // 80318EF4
  c->r[10]=R8(c->r[27]+0x00000005u); // 80318EF8
  c->lr=0x80318F00u; f_8030E278(c); // 80318EFC
L_80318F00:;
  c->r[3]=0u+0x80570000u; // 80318F00
  c->r[30]=0u+0x00000000u; // 80318F04
  c->r[3]=c->r[3]+0x000058F8u; // 80318F08
  c->r[31]=c->r[3]+0x000016E4u; // 80318F0C
L_80318F10:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 80318F10
  cmps(c,0,(int32_t)c->r[0],0); // 80318F14
  if (crb(c,2)) { goto L_80318F38; } // 80318F18
  c->r[4]=c->r[27]|c->r[27]; // 80318F1C
  c->r[3]=c->r[31]+0x0000000Au; // 80318F20
  c->r[5]=0u+0x00000006u; // 80318F24
  c->lr=0x80318F2Cu; f_802E54DC(c); // 80318F28
  cmps(c,0,(int32_t)c->r[3],0); // 80318F2C
  if (!crb(c,2)) { goto L_80318F38; } // 80318F30
  goto L_80318F4C; // 80318F34
L_80318F38:;
  c->r[30]=c->r[30]+0x00000001u; // 80318F38
  c->r[31]=c->r[31]+0x0000001Cu; // 80318F3C
  cmpu(c,0,c->r[30],0x0000000Cu); // 80318F40
  if (crb(c,0)) { IRQCHK(c); goto L_80318F10; } // 80318F44
  c->r[31]=0u+0x00000000u; // 80318F48
L_80318F4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80318F4C
  if (crb(c,2)) { goto L_80318F58; } // 80318F50
  c->r[29]=c->r[31]+0x00000008u; // 80318F54
L_80318F58:;
  c->r[3]=c->r[27]|c->r[27]; // 80318F58
  c->r[4]=c->r[29]|c->r[29]; // 80318F5C
  c->r[7]=c->r[28]|c->r[28]; // 80318F60
  c->r[5]=0u+0x00000001u; // 80318F64
  c->r[6]=0u+0x00000028u; // 80318F68
  c->lr=0x80318F70u; f_80319D80(c); // 80318F6C
  c->r[11]=c->r[1]+0x00000020u; // 80318F70
  c->lr=0x80318F78u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80318F74
  c->r[0]=R32(c->r[1]+0x00000024u); // 80318F78
  c->lr=c->r[0]; // 80318F7C
  c->r[1]=c->r[1]+0x00000020u; // 80318F80
  return; // 80318F84
}

// BTM_CancelRemoteDeviceName
void f_80318F88(Ctx* __restrict c) {
  trace_call(0x80318F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80318F88
  c->r[0]=c->lr; // 80318F8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80318F90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80318F94
  c->r[31]=0u+0x80570000u; // 80318F98
  c->r[31]=c->r[31]+0x000058F8u; // 80318F9C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80318FA0
  cmpu(c,0,c->r[0],0x00000003u); // 80318FA4
  if (crb(c,0)) { goto L_80318FC0; } // 80318FA8
  c->r[3]=0u+0x000D0000u; // 80318FAC
  c->r[4]=0u+0x80490000u; // 80318FB0
  c->r[3]=c->r[3]+0x00000002u; // 80318FB4
  c->r[4]=c->r[4]+0xFFFFFFECu; // 80318FB8
  c->lr=0x80318FC0u; f_8030E1E8(c); // 80318FBC
L_80318FC0:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 80318FC0
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80318FC4
  if (crb(c,2)) { goto L_80318FE8; } // 80318FC8
  c->r[3]=c->r[31]+0x000016A8u; // 80318FCC
  c->lr=0x80318FD4u; f_80321C6C(c); // 80318FD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80318FD4
  c->r[3]=0u+0x00000003u; // 80318FD8
  if (crb(c,2)) { goto L_80318FEC; } // 80318FDC
  c->r[3]=0u+0x00000001u; // 80318FE0
  goto L_80318FEC; // 80318FE4
L_80318FE8:;
  c->r[3]=0u+0x00000006u; // 80318FE8
L_80318FEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80318FEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80318FF0
  c->lr=c->r[0]; // 80318FF4
  c->r[1]=c->r[1]+0x00000010u; // 80318FF8
  return; // 80318FFC
}

// BTM_InqDbRead
void f_80319000(Ctx* __restrict c) {
  trace_call(0x80319000u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319000
  c->r[0]=c->lr; // 80319004
  c->r[4]=0u+0x80570000u; // 80319008
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031900C
  c->r[4]=c->r[4]+0x000058F8u; // 80319010
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80319014
  W32(c->r[1]+0x00000018u,c->r[30]); // 80319018
  c->r[30]=c->r[4]+0x000016E4u; // 8031901C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80319020
  c->r[29]=c->r[3]|c->r[3]; // 80319024
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80319028
  cmpu(c,0,c->r[0],0x00000003u); // 8031902C
  if (crb(c,0)) { goto L_80319060; } // 80319030
  c->r[3]=0u+0x000D0000u; // 80319034
  c->r[4]=0u+0x80490000u; // 80319038
  c->r[5]=R8(c->r[29]+0x00000000u); // 8031903C
  c->r[3]=c->r[3]+0x00000002u; // 80319040
  c->r[6]=R8(c->r[29]+0x00000001u); // 80319044
  c->r[4]=c->r[4]+0x0000000Cu; // 80319048
  c->r[7]=R8(c->r[29]+0x00000002u); // 8031904C
  c->r[8]=R8(c->r[29]+0x00000003u); // 80319050
  c->r[9]=R8(c->r[29]+0x00000004u); // 80319054
  c->r[10]=R8(c->r[29]+0x00000005u); // 80319058
  c->lr=0x80319060u; f_8030E278(c); // 8031905C
L_80319060:;
  c->r[31]=0u+0x00000000u; // 80319060
L_80319064:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 80319064
  cmps(c,0,(int32_t)c->r[0],0); // 80319068
  if (crb(c,2)) { goto L_80319090; } // 8031906C
  c->r[4]=c->r[29]|c->r[29]; // 80319070
  c->r[3]=c->r[30]+0x0000000Au; // 80319074
  c->r[5]=0u+0x00000006u; // 80319078
  c->lr=0x80319080u; f_802E54DC(c); // 8031907C
  cmps(c,0,(int32_t)c->r[3],0); // 80319080
  if (!crb(c,2)) { goto L_80319090; } // 80319084
  c->r[3]=c->r[30]+0x00000008u; // 80319088
  goto L_803190A4; // 8031908C
L_80319090:;
  c->r[31]=c->r[31]+0x00000001u; // 80319090
  c->r[30]=c->r[30]+0x0000001Cu; // 80319094
  cmpu(c,0,c->r[31],0x0000000Cu); // 80319098
  if (crb(c,0)) { IRQCHK(c); goto L_80319064; } // 8031909C
  c->r[3]=0u+0x00000000u; // 803190A0
L_803190A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803190A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803190A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803190AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803190B0
  c->lr=c->r[0]; // 803190B4
  c->r[1]=c->r[1]+0x00000020u; // 803190B8
  return; // 803190BC
}

// BTM_InqDbFirst
void f_803190C0(Ctx* __restrict c) {
  trace_call(0x803190C0u);
  c->r[3]=0u+0x80570000u; // 803190C0
  c->r[0]=0u+0x00000002u; // 803190C4
  c->r[3]=c->r[3]+0x000058F8u; // 803190C8
  c->r[4]=0u+0x00000000u; // 803190CC
  c->r[3]=c->r[3]+0x000016E4u; // 803190D0
  c->ctr=c->r[0]; // 803190D4
L_803190D8:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803190D8
  cmps(c,0,(int32_t)c->r[0],0); // 803190DC
  if (crb(c,2)) { goto L_803190EC; } // 803190E0
  c->r[3]=c->r[3]+0x00000008u; // 803190E4
  return; // 803190E8
L_803190EC:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 803190EC
  c->r[4]=c->r[4]+0x00000001u; // 803190F0
  cmps(c,0,(int32_t)c->r[0],0); // 803190F4
  if (crb(c,2)) { goto L_80319104; } // 803190F8
  c->r[3]=c->r[3]+0x00000024u; // 803190FC
  return; // 80319100
L_80319104:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 80319104
  c->r[4]=c->r[4]+0x00000001u; // 80319108
  cmps(c,0,(int32_t)c->r[0],0); // 8031910C
  if (crb(c,2)) { goto L_8031911C; } // 80319110
  c->r[3]=c->r[3]+0x00000040u; // 80319114
  return; // 80319118
L_8031911C:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 8031911C
  c->r[4]=c->r[4]+0x00000001u; // 80319120
  cmps(c,0,(int32_t)c->r[0],0); // 80319124
  if (crb(c,2)) { goto L_80319134; } // 80319128
  c->r[3]=c->r[3]+0x0000005Cu; // 8031912C
  return; // 80319130
L_80319134:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 80319134
  c->r[4]=c->r[4]+0x00000001u; // 80319138
  cmps(c,0,(int32_t)c->r[0],0); // 8031913C
  if (crb(c,2)) { goto L_8031914C; } // 80319140
  c->r[3]=c->r[3]+0x00000078u; // 80319144
  return; // 80319148
L_8031914C:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 8031914C
  c->r[4]=c->r[4]+0x00000001u; // 80319150
  cmps(c,0,(int32_t)c->r[0],0); // 80319154
  if (crb(c,2)) { goto L_80319164; } // 80319158
  c->r[3]=c->r[3]+0x00000094u; // 8031915C
  return; // 80319160
L_80319164:;
  c->r[4]=c->r[4]+0x00000001u; // 80319164
  c->r[3]=c->r[3]+0x000000A8u; // 80319168
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803190D8; } // 8031916C
  c->r[3]=0u+0x00000000u; // 80319170
  return; // 80319174
}

// BTM_InqDbNext
void f_80319178(Ctx* __restrict c) {
  trace_call(0x80319178u);
  cmps(c,0,(int32_t)c->r[3],0); // 80319178
  if (crb(c,2)) { goto L_803191FC; } // 8031917C
  c->r[5]=0u+0x80570000u; // 80319180
  c->r[4]=0u+0x92490000u; // 80319184
  c->r[5]=c->r[5]+0x000058F8u; // 80319188
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 8031918C
  c->r[3]=c->r[5]+0x000016E4u; // 80319190
  c->r[4]=c->r[4]+0x00002493u; // 80319194
  c->r[0]=c->r[0]-c->r[3]; // 80319198
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 8031919C
  c->r[0]=c->r[3]+c->r[0]; // 803191A0
  c->r[0]=sraw(c,c->r[0],4); // 803191A4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 803191A8
  c->r[3]=c->r[0]+c->r[3]; // 803191AC
  c->r[0]=c->r[3]+0x00000001u; // 803191B0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 803191B4
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 803191B8
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 803191BC
  c->r[3]=c->r[5]+c->r[3]; // 803191C0
  c->r[3]=c->r[3]+0x000016E4u; // 803191C4
  c->ctr=c->r[0]; // 803191C8
  cmpu(c,0,c->r[4],0x0000000Cu); // 803191CC
  if (!crb(c,0)) { goto L_803191F4; } // 803191D0
L_803191D4:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 803191D4
  cmps(c,0,(int32_t)c->r[0],0); // 803191D8
  if (crb(c,2)) { goto L_803191E8; } // 803191DC
  c->r[3]=c->r[3]+0x00000008u; // 803191E0
  return; // 803191E4
L_803191E8:;
  c->r[4]=c->r[4]+0x00000001u; // 803191E8
  c->r[3]=c->r[3]+0x0000001Cu; // 803191EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_803191D4; } // 803191F0
L_803191F4:;
  c->r[3]=0u+0x00000000u; // 803191F4
  return; // 803191F8
L_803191FC:;
  c->r[3]=0u+0x80570000u; // 803191FC
  c->r[0]=0u+0x00000002u; // 80319200
  c->r[3]=c->r[3]+0x000058F8u; // 80319204
  c->r[4]=0u+0x00000000u; // 80319208
  c->r[3]=c->r[3]+0x000016E4u; // 8031920C
  c->ctr=c->r[0]; // 80319210
L_80319214:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 80319214
  cmps(c,0,(int32_t)c->r[0],0); // 80319218
  if (crb(c,2)) { goto L_80319228; } // 8031921C
  c->r[3]=c->r[3]+0x00000008u; // 80319220
  return; // 80319224
L_80319228:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 80319228
  c->r[4]=c->r[4]+0x00000001u; // 8031922C
  cmps(c,0,(int32_t)c->r[0],0); // 80319230
  if (crb(c,2)) { goto L_80319240; } // 80319234
  c->r[3]=c->r[3]+0x00000024u; // 80319238
  return; // 8031923C
L_80319240:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 80319240
  c->r[4]=c->r[4]+0x00000001u; // 80319244
  cmps(c,0,(int32_t)c->r[0],0); // 80319248
  if (crb(c,2)) { goto L_80319258; } // 8031924C
  c->r[3]=c->r[3]+0x00000040u; // 80319250
  return; // 80319254
L_80319258:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 80319258
  c->r[4]=c->r[4]+0x00000001u; // 8031925C
  cmps(c,0,(int32_t)c->r[0],0); // 80319260
  if (crb(c,2)) { goto L_80319270; } // 80319264
  c->r[3]=c->r[3]+0x0000005Cu; // 80319268
  return; // 8031926C
L_80319270:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 80319270
  c->r[4]=c->r[4]+0x00000001u; // 80319274
  cmps(c,0,(int32_t)c->r[0],0); // 80319278
  if (crb(c,2)) { goto L_80319288; } // 8031927C
  c->r[3]=c->r[3]+0x00000078u; // 80319280
  return; // 80319284
L_80319288:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 80319288
  c->r[4]=c->r[4]+0x00000001u; // 8031928C
  cmps(c,0,(int32_t)c->r[0],0); // 80319290
  if (crb(c,2)) { goto L_803192A0; } // 80319294
  c->r[3]=c->r[3]+0x00000094u; // 80319298
  return; // 8031929C
L_803192A0:;
  c->r[4]=c->r[4]+0x00000001u; // 803192A0
  c->r[3]=c->r[3]+0x000000A8u; // 803192A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80319214; } // 803192A8
  c->r[3]=0u+0x00000000u; // 803192AC
  return; // 803192B0
}

// BTM_ClearInqDb
void f_803192B4(Ctx* __restrict c) {
  trace_call(0x803192B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803192B4
  c->r[0]=c->lr; // 803192B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803192BC
  c->r[11]=c->r[1]+0x00000020u; // 803192C0
  c->lr=0x803192C8u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 803192C4
  c->r[4]=0u+0x80570000u; // 803192C8
  c->r[27]=c->r[3]|c->r[3]; // 803192CC
  c->r[30]=c->r[4]+0x000058F8u; // 803192D0
  c->r[0]=R8(c->r[30]+0x00001848u); // 803192D4
  cmps(c,0,(int32_t)c->r[0],0); // 803192D8
  if (!crb(c,2)) { goto L_803192F8; } // 803192DC
  c->r[0]=R8(c->r[30]+0x000016AEu); // 803192E0
  cmps(c,0,(int32_t)c->r[0],0); // 803192E4
  if (!crb(c,2)) { goto L_803192F8; } // 803192E8
  c->r[0]=R8(c->r[30]+0x00001844u); // 803192EC
  cmps(c,0,(int32_t)c->r[0],0); // 803192F0
  if (crb(c,2)) { goto L_80319300; } // 803192F4
L_803192F8:;
  c->r[3]=0u+0x00000002u; // 803192F8
  goto L_8031936C; // 803192FC
L_80319300:;
  c->r[28]=c->r[30]+0x000016E4u; // 80319300
  c->r[29]=0u+0x00000000u; // 80319304
  c->r[31]=0u+0x00000000u; // 80319308
L_8031930C:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 8031930C
  cmps(c,0,(int32_t)c->r[0],0); // 80319310
  if (crb(c,2)) { goto L_80319358; } // 80319314
  cmps(c,0,(int32_t)c->r[27],0); // 80319318
  if (crb(c,2)) { goto L_80319338; } // 8031931C
  c->r[4]=c->r[27]|c->r[27]; // 80319320
  c->r[3]=c->r[28]+0x0000000Au; // 80319324
  c->r[5]=0u+0x00000006u; // 80319328
  c->lr=0x80319330u; f_802E54DC(c); // 8031932C
  cmps(c,0,(int32_t)c->r[3],0); // 80319330
  if (!crb(c,2)) { goto L_80319358; } // 80319334
L_80319338:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 80319338
  c->r[12]=R32(c->r[30]+0x000016BCu); // 8031933C
  cmps(c,0,(int32_t)c->r[12],0); // 80319340
  if (crb(c,2)) { goto L_80319358; } // 80319344
  c->r[3]=c->r[28]+0x00000008u; // 80319348
  c->r[4]=0u+0x00000000u; // 8031934C
  c->ctr=c->r[12]; // 80319350
  if (true) { c->lr=0x80319358u; dispatch(c,c->ctr); } // 80319354
L_80319358:;
  c->r[29]=c->r[29]+0x00000001u; // 80319358
  c->r[28]=c->r[28]+0x0000001Cu; // 8031935C
  cmpu(c,0,c->r[29],0x0000000Cu); // 80319360
  if (crb(c,0)) { IRQCHK(c); goto L_8031930C; } // 80319364
  c->r[3]=0u+0x00000000u; // 80319368
L_8031936C:;
  c->r[11]=c->r[1]+0x00000020u; // 8031936C
  c->lr=0x80319374u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80319370
  c->r[0]=R32(c->r[1]+0x00000024u); // 80319374
  c->lr=c->r[0]; // 80319378
  c->r[1]=c->r[1]+0x00000020u; // 8031937C
  return; // 80319380
}

// btm_inq_db_reset
void f_80319384(Ctx* __restrict c) {
  trace_call(0x80319384u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319384
  c->r[0]=c->lr; // 80319388
  W32(c->r[1]+0x00000124u,c->r[0]); // 8031938C
  c->r[11]=c->r[1]+0x00000120u; // 80319390
  c->lr=0x80319398u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80319394
  c->r[29]=0u+0x80570000u; // 80319398
  c->r[29]=c->r[29]+0x000058F8u; // 8031939C
  c->r[3]=c->r[29]+0x000016C4u; // 803193A0
  c->lr=0x803193A8u; f_8030E824(c); // 803193A4
  c->r[3]=R8(c->r[29]+0x00001848u); // 803193A8
  cmps(c,0,(int32_t)c->r[3],0); // 803193AC
  if (crb(c,2)) { goto L_803193E8; } // 803193B0
  c->r[0]=c->r[3]+0x000000FFu; // 803193B4
  c->r[3]=0u+0x00000000u; // 803193B8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 803193BC
  W8(c->r[29]+0x00001848u,c->r[3]); // 803193C0
  cmpu(c,0,c->r[0],0x00000001u); // 803193C4
  if (crb(c,1)) { goto L_803193E8; } // 803193C8
  c->r[12]=R32(c->r[29]+0x000016B0u); // 803193CC
  cmps(c,0,(int32_t)c->r[12],0); // 803193D0
  if (crb(c,2)) { goto L_803193E8; } // 803193D4
  W8(c->r[1]+0x00000009u,c->r[3]); // 803193D8
  c->r[3]=c->r[1]+0x00000009u; // 803193DC
  c->ctr=c->r[12]; // 803193E0
  if (true) { c->lr=0x803193E8u; dispatch(c,c->ctr); } // 803193E4
L_803193E8:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 803193E8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 803193EC
  if (crb(c,2)) { goto L_80319438; } // 803193F0
  c->r[3]=c->r[29]+0x00001680u; // 803193F4
  c->lr=0x803193FCu; f_8030E824(c); // 803193F8
  c->r[30]=0u+0x00000000u; // 803193FC
  c->r[3]=c->r[29]+0x000016A8u; // 80319400
  W8(c->r[29]+0x000016AEu,c->r[30]); // 80319404
  c->r[4]=0u+0x00000000u; // 80319408
  c->r[5]=0u+0x00000006u; // 8031940C
  c->lr=0x80319414u; f_800060B8(c); // 80319410
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 80319414
  cmps(c,0,(int32_t)c->r[12],0); // 80319418
  if (crb(c,2)) { goto L_80319438; } // 8031941C
  c->r[0]=0u+0x0000000Cu; // 80319420
  c->r[3]=c->r[1]+0x0000000Cu; // 80319424
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 80319428
  c->ctr=c->r[12]; // 8031942C
  if (true) { c->lr=0x80319434u; dispatch(c,c->ctr); } // 80319430
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 80319434
L_80319438:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 80319438
  cmps(c,0,(int32_t)c->r[0],0); // 8031943C
  if (crb(c,2)) { goto L_8031946C; } // 80319440
  c->r[12]=R32(c->r[29]+0x000016B8u); // 80319444
  c->r[0]=0u+0x00000000u; // 80319448
  W8(c->r[29]+0x00001844u,c->r[0]); // 8031944C
  cmps(c,0,(int32_t)c->r[12],0); // 80319450
  if (crb(c,2)) { goto L_8031946C; } // 80319454
  c->r[0]=0u+0x0000000Cu; // 80319458
  c->r[3]=c->r[1]+0x00000008u; // 8031945C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80319460
  c->ctr=c->r[12]; // 80319464
  if (true) { c->lr=0x8031946Cu; dispatch(c,c->ctr); } // 80319468
L_8031946C:;
  c->r[30]=0u+0x00000000u; // 8031946C
  c->r[31]=0u+0x80570000u; // 80319470
  c->r[31]=c->r[31]+0x000058F8u; // 80319474
  W8(c->r[29]+0x00001847u,c->r[30]); // 80319478
  c->r[28]=0u+0x00000000u; // 8031947C
  W8(c->r[29]+0x00001845u,c->r[30]); // 80319480
  c->r[27]=c->r[31]+0x000016E4u; // 80319484
  W32(c->r[29]+0x000016B4u,c->r[30]); // 80319488
L_8031948C:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 8031948C
  cmps(c,0,(int32_t)c->r[0],0); // 80319490
  if (crb(c,2)) { goto L_803194B8; } // 80319494
  W8(c->r[27]+0x0000001Au,c->r[30]); // 80319498
  c->r[12]=R32(c->r[31]+0x000016BCu); // 8031949C
  cmps(c,0,(int32_t)c->r[12],0); // 803194A0
  if (crb(c,2)) { goto L_803194B8; } // 803194A4
  c->r[3]=c->r[27]+0x00000008u; // 803194A8
  c->r[4]=0u+0x00000000u; // 803194AC
  c->ctr=c->r[12]; // 803194B0
  if (true) { c->lr=0x803194B8u; dispatch(c,c->ctr); } // 803194B4
L_803194B8:;
  c->r[28]=c->r[28]+0x00000001u; // 803194B8
  c->r[27]=c->r[27]+0x0000001Cu; // 803194BC
  cmpu(c,0,c->r[28],0x0000000Cu); // 803194C0
  if (crb(c,0)) { IRQCHK(c); goto L_8031948C; } // 803194C4
  c->r[31]=0u+0x80570000u; // 803194C8
  c->r[31]=c->r[31]+0x000058F8u; // 803194CC
  c->r[3]=R32(c->r[31]+0x000016DCu); // 803194D0
  cmps(c,0,(int32_t)c->r[3],0); // 803194D4
  if (crb(c,2)) { goto L_803194E8; } // 803194D8
  c->lr=0x803194E0u; f_8030B00C(c); // 803194DC
  c->r[0]=0u+0x00000000u; // 803194E0
  W32(c->r[31]+0x000016DCu,c->r[0]); // 803194E4
L_803194E8:;
  c->r[0]=0u+0x00000000u; // 803194E8
  c->r[11]=c->r[1]+0x00000120u; // 803194EC
  W16(c->r[31]+0x000016E0u,c->r[0]); // 803194F0
  W16(c->r[31]+0x000016E2u,c->r[0]); // 803194F4
  W16(c->r[29]+0x00001698u,c->r[0]); // 803194F8
  W16(c->r[29]+0x0000169Au,c->r[0]); // 803194FC
  W16(c->r[29]+0x000016A6u,c->r[0]); // 80319500
  W16(c->r[29]+0x000016A4u,c->r[0]); // 80319504
  c->lr=0x8031950Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80319508
  c->r[0]=R32(c->r[1]+0x00000124u); // 8031950C
  c->lr=c->r[0]; // 80319510
  c->r[1]=c->r[1]+0x00000120u; // 80319514
  return; // 80319518
}

// btm_inq_db_init
void f_8031951C(Ctx* __restrict c) {
  trace_call(0x8031951Cu);
  return; // 8031951C
}

// btm_inq_find_bdaddr
void f_80319520(Ctx* __restrict c) {
  trace_call(0x80319520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319520
  c->r[0]=c->lr; // 80319524
  W32(c->r[1]+0x00000024u,c->r[0]); // 80319528
  c->r[11]=c->r[1]+0x00000020u; // 8031952C
  c->lr=0x80319534u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80319530
  c->r[31]=0u+0x80570000u; // 80319534
  c->r[27]=c->r[3]|c->r[3]; // 80319538
  c->r[31]=c->r[31]+0x000058F8u; // 8031953C
  c->r[0]=R8(c->r[31]+0x00001848u); // 80319540
  c->r[29]=R32(c->r[31]+0x000016DCu); // 80319544
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80319548
  if (!crb(c,2)) { goto L_80319558; } // 8031954C
  cmps(c,0,(int32_t)c->r[29],0); // 80319550
  if (!crb(c,2)) { goto L_80319560; } // 80319554
L_80319558:;
  c->r[3]=0u+0x00000000u; // 80319558
  goto L_803195E4; // 8031955C
L_80319560:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 80319560
  c->r[28]=0u+0x00000000u; // 80319564
  goto L_803195A4; // 80319568
L_8031956C:;
  c->r[4]=c->r[27]|c->r[27]; // 8031956C
  c->r[3]=c->r[29]+0x00000004u; // 80319570
  c->r[5]=0u+0x00000006u; // 80319574
  c->lr=0x8031957Cu; f_802E54DC(c); // 80319578
  cmps(c,0,(int32_t)c->r[3],0); // 8031957C
  if (!crb(c,2)) { goto L_8031959C; } // 80319580
  c->r[3]=R32(c->r[29]+0x00000000u); // 80319584
  c->r[0]=R32(c->r[31]+0x000016C0u); // 80319588
  cmpu(c,0,c->r[3],c->r[0]); // 8031958C
  if (!crb(c,2)) { goto L_8031959C; } // 80319590
  c->r[3]=0u+0x00000001u; // 80319594
  goto L_803195E4; // 80319598
L_8031959C:;
  c->r[28]=c->r[28]+0x00000001u; // 8031959C
  c->r[29]=c->r[29]+0x0000000Cu; // 803195A0
L_803195A4:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 803195A4
  cmpu(c,0,c->r[3],c->r[30]); // 803195A8
  if (crb(c,0)) { IRQCHK(c); goto L_8031956C; } // 803195AC
  c->r[0]=R16(c->r[31]+0x000016E2u); // 803195B0
  cmpu(c,0,c->r[3],c->r[0]); // 803195B4
  if (!crb(c,0)) { goto L_803195E0; } // 803195B8
  c->r[0]=R32(c->r[31]+0x000016C0u); // 803195BC
  c->r[4]=c->r[27]|c->r[27]; // 803195C0
  c->r[3]=c->r[29]+0x00000004u; // 803195C4
  c->r[5]=0u+0x00000006u; // 803195C8
  W32(c->r[29]+0x00000000u,c->r[0]); // 803195CC
  c->lr=0x803195D4u; f_80005FB4(c); // 803195D0
  c->r[3]=R16(c->r[31]+0x000016E0u); // 803195D4
  c->r[0]=c->r[3]+0x00000001u; // 803195D8
  W16(c->r[31]+0x000016E0u,c->r[0]); // 803195DC
L_803195E0:;
  c->r[3]=0u+0x00000000u; // 803195E0
L_803195E4:;
  c->r[11]=c->r[1]+0x00000020u; // 803195E4
  c->lr=0x803195ECu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803195E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 803195EC
  c->lr=c->r[0]; // 803195F0
  c->r[1]=c->r[1]+0x00000020u; // 803195F4
  return; // 803195F8
}

// btm_inq_db_new
void f_803195FC(Ctx* __restrict c) {
  trace_call(0x803195FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803195FC
  c->r[0]=c->lr; // 80319600
  c->r[4]=0u+0x80570000u; // 80319604
  W32(c->r[1]+0x00000024u,c->r[0]); // 80319608
  c->r[4]=c->r[4]+0x000058F8u; // 8031960C
  c->r[0]=0u+0x0000000Cu; // 80319610
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80319614
  c->r[31]=c->r[4]+0x000016E4u; // 80319618
  c->r[4]=0u+0xFFFFFFFFu; // 8031961C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80319620
  c->r[30]=c->r[31]|c->r[31]; // 80319624
  W32(c->r[1]+0x00000014u,c->r[29]); // 80319628
  c->r[29]=c->r[3]|c->r[3]; // 8031962C
  c->r[3]=0u+0x00000000u; // 80319630
  c->ctr=c->r[0]; // 80319634
L_80319638:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 80319638
  cmps(c,0,(int32_t)c->r[0],0); // 8031963C
  if (!crb(c,2)) { goto L_80319674; } // 80319640
  c->r[3]=c->r[31]|c->r[31]; // 80319644
  c->r[4]=0u+0x00000000u; // 80319648
  c->r[5]=0u+0x0000001Cu; // 8031964C
  c->lr=0x80319654u; f_800060B8(c); // 80319650
  c->r[4]=c->r[29]|c->r[29]; // 80319654
  c->r[3]=c->r[31]+0x0000000Au; // 80319658
  c->r[5]=0u+0x00000006u; // 8031965C
  c->lr=0x80319664u; f_80005FB4(c); // 80319660
  c->r[0]=0u+0x00000001u; // 80319664
  c->r[3]=c->r[31]|c->r[31]; // 80319668
  W8(c->r[31]+0x0000001Au,c->r[0]); // 8031966C
  goto L_803196E4; // 80319670
L_80319674:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80319674
  cmpu(c,0,c->r[0],c->r[4]); // 80319678
  if (!crb(c,0)) { goto L_80319688; } // 8031967C
  c->r[30]=c->r[31]|c->r[31]; // 80319680
  c->r[4]=c->r[0]|c->r[0]; // 80319684
L_80319688:;
  c->r[3]=c->r[3]+0x00000001u; // 80319688
  c->r[31]=c->r[31]+0x0000001Cu; // 8031968C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80319638; } // 80319690
  c->r[3]=0u+0x80570000u; // 80319694
  c->r[3]=c->r[3]+0x000058F8u; // 80319698
  c->r[12]=R32(c->r[3]+0x000016BCu); // 8031969C
  cmps(c,0,(int32_t)c->r[12],0); // 803196A0
  if (crb(c,2)) { goto L_803196B8; } // 803196A4
  c->r[3]=c->r[30]+0x00000008u; // 803196A8
  c->r[4]=0u+0x00000000u; // 803196AC
  c->ctr=c->r[12]; // 803196B0
  if (true) { c->lr=0x803196B8u; dispatch(c,c->ctr); } // 803196B4
L_803196B8:;
  c->r[3]=c->r[30]|c->r[30]; // 803196B8
  c->r[4]=0u+0x00000000u; // 803196BC
  c->r[5]=0u+0x0000001Cu; // 803196C0
  c->lr=0x803196C8u; f_800060B8(c); // 803196C4
  c->r[4]=c->r[29]|c->r[29]; // 803196C8
  c->r[3]=c->r[30]+0x0000000Au; // 803196CC
  c->r[5]=0u+0x00000006u; // 803196D0
  c->lr=0x803196D8u; f_80005FB4(c); // 803196D4
  c->r[0]=0u+0x00000001u; // 803196D8
  c->r[3]=c->r[30]|c->r[30]; // 803196DC
  W8(c->r[30]+0x0000001Au,c->r[0]); // 803196E0
L_803196E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803196E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803196E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 803196EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 803196F0
  c->lr=c->r[0]; // 803196F4
  c->r[1]=c->r[1]+0x00000020u; // 803196F8
  return; // 803196FC
}

// btm_set_inq_event_filter
void f_80319700(Ctx* __restrict c) {
  trace_call(0x80319700u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319700
  c->r[0]=c->lr; // 80319704
  W32(c->r[1]+0x00000034u,c->r[0]); // 80319708
  c->r[11]=c->r[1]+0x00000030u; // 8031970C
  c->lr=0x80319714u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80319710
  c->r[27]=c->r[3]|c->r[3]; // 80319714
  c->r[28]=c->r[4]|c->r[4]; // 80319718
  c->r[29]=c->r[1]+0x00000008u; // 8031971C
  c->r[30]=0u+0x00000006u; // 80319720
  c->r[3]=0u+0x00000002u; // 80319724
  c->lr=0x8031972Cu; f_8030AF24(c); // 80319728
  cmps(c,0,(int32_t)c->r[3],0); // 8031972C
  c->r[31]=c->r[3]|c->r[3]; // 80319730
  if (crb(c,2)) { goto L_803197C8; } // 80319734
  cmps(c,0,(int32_t)c->r[27],1); // 80319738
  if (crb(c,2)) { goto L_8031975C; } // 8031973C
  if (!crb(c,0)) { goto L_80319750; } // 80319740
  cmps(c,0,(int32_t)c->r[27],0); // 80319744
  if (!crb(c,0)) { goto L_80319788; } // 80319748
  goto L_80319790; // 8031974C
L_80319750:;
  cmps(c,0,(int32_t)c->r[27],3); // 80319750
  if (!crb(c,0)) { goto L_80319790; } // 80319754
  goto L_80319780; // 80319758
L_8031975C:;
  c->r[3]=c->r[29]|c->r[29]; // 8031975C
  c->r[4]=c->r[28]|c->r[28]; // 80319760
  c->r[5]=0u+0x00000003u; // 80319764
  c->lr=0x8031976Cu; f_80005FB4(c); // 80319768
  c->r[3]=c->r[1]+0x0000000Bu; // 8031976C
  c->r[4]=c->r[28]+0x00000003u; // 80319770
  c->r[5]=0u+0x00000003u; // 80319774
  c->lr=0x8031977Cu; f_80005FB4(c); // 80319778
  goto L_80319798; // 8031977C
L_80319780:;
  c->r[29]=c->r[28]|c->r[28]; // 80319780
  goto L_80319798; // 80319784
L_80319788:;
  c->r[30]=0u+0x00000000u; // 80319788
  goto L_80319798; // 8031978C
L_80319790:;
  c->r[3]=0u+0x00000005u; // 80319790
  goto L_803197CC; // 80319794
L_80319798:;
  c->r[4]=0u+0x80570000u; // 80319798
  c->r[0]=0u+0x00000001u; // 8031979C
  c->r[4]=c->r[4]+0x000058F8u; // 803197A0
  c->r[3]=c->r[31]|c->r[31]; // 803197A4
  W8(c->r[4]+0x00001844u,c->r[0]); // 803197A8
  c->r[5]=c->r[27]|c->r[27]; // 803197AC
  c->r[6]=c->r[29]|c->r[29]; // 803197B0
  c->r[7]=c->r[30]|c->r[30]; // 803197B4
  c->r[4]=0u+0x00000001u; // 803197B8
  c->lr=0x803197C0u; f_803225A0(c); // 803197BC
  c->r[3]=0u+0x00000001u; // 803197C0
  goto L_803197CC; // 803197C4
L_803197C8:;
  c->r[3]=0u+0x00000003u; // 803197C8
L_803197CC:;
  c->r[11]=c->r[1]+0x00000030u; // 803197CC
  c->lr=0x803197D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 803197D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 803197D4
  c->lr=c->r[0]; // 803197D8
  c->r[1]=c->r[1]+0x00000030u; // 803197DC
  return; // 803197E0
}

// btm_event_filter_complete
void f_803197E4(Ctx* __restrict c) {
  trace_call(0x803197E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 803197E4
  c->r[0]=c->lr; // 803197E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 803197EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 803197F0
  c->r[31]=0u+0x80570000u; // 803197F4
  c->r[31]=c->r[31]+0x000058F8u; // 803197F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 803197FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80319800
  c->r[4]=R8(c->r[31]+0x00001845u); // 80319804
  c->r[29]=R32(c->r[31]+0x000016B8u); // 80319808
  cmps(c,0,(int32_t)c->r[4],0); // 8031980C
  if (crb(c,2)) { goto L_80319820; } // 80319810
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80319814
  W8(c->r[31]+0x00001845u,c->r[0]); // 80319818
  goto L_803199E8; // 8031981C
L_80319820:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 80319820
  cmpu(c,0,c->r[0],0x00000001u); // 80319824
  if (!crb(c,2)) { goto L_803199E8; } // 80319828
  c->r[5]=R8(c->r[3]+0x00000000u); // 8031982C
  cmps(c,0,(int32_t)c->r[5],0); // 80319830
  if (crb(c,2)) { goto L_80319864; } // 80319834
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80319838
  cmpu(c,0,c->r[0],0x00000002u); // 8031983C
  if (crb(c,0)) { goto L_80319858; } // 80319840
  c->r[3]=0u+0x000D0000u; // 80319844
  c->r[4]=0u+0x80490000u; // 80319848
  c->r[3]=c->r[3]+0x00000001u; // 8031984C
  c->r[4]=c->r[4]+0x00000040u; // 80319850
  c->lr=0x80319858u; f_8030E200(c); // 80319854
L_80319858:;
  c->r[0]=0u+0x0000000Au; // 80319858
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031985C
  goto L_8031986C; // 80319860
L_80319864:;
  c->r[0]=0u+0x00000000u; // 80319864
  W8(c->r[1]+0x00000008u,c->r[0]); // 80319868
L_8031986C:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 8031986C
  cmps(c,0,(int32_t)c->r[3],0); // 80319870
  if (!crb(c,2)) { goto L_8031989C; } // 80319874
  c->r[0]=0u+0x00000000u; // 80319878
  cmps(c,0,(int32_t)c->r[29],0); // 8031987C
  W8(c->r[31]+0x00001844u,c->r[0]); // 80319880
  if (crb(c,2)) { goto L_803199E8; } // 80319884
  c->r[12]=c->r[29]|c->r[29]; // 80319888
  c->r[3]=c->r[1]+0x00000008u; // 8031988C
  c->ctr=c->r[12]; // 80319890
  if (true) { c->lr=0x80319898u; dispatch(c,c->ctr); } // 80319894
  goto L_803199E8; // 80319898
L_8031989C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8031989C
  if (crb(c,2)) { goto L_803198C0; } // 803198A0
  c->r[3]=0u+0x0000000Au; // 803198A4
  c->lr=0x803198ACu; f_80319C7C(c); // 803198A8
  c->r[0]=0u+0x00000000u; // 803198AC
  W8(c->r[31]+0x00001844u,c->r[0]); // 803198B0
  W8(c->r[31]+0x00001848u,c->r[0]); // 803198B4
  W8(c->r[31]+0x00001847u,c->r[0]); // 803198B8
  goto L_803199E8; // 803198BC
L_803198C0:;
  cmpu(c,0,c->r[3],0x00000001u); // 803198C0
  if (!crb(c,2)) { goto L_80319904; } // 803198C4
  c->r[3]=R8(c->r[31]+0x00001837u); // 803198C8
  c->r[4]=c->r[31]+0x00001838u; // 803198CC
  c->lr=0x803198D4u; f_80319700(c); // 803198D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 803198D4
  W8(c->r[1]+0x00000008u,c->r[3]); // 803198D8
  cmpu(c,0,c->r[0],0x00000001u); // 803198DC
  if (!crb(c,2)) { goto L_803198F0; } // 803198E0
  c->r[0]=0u+0x00000002u; // 803198E4
  W8(c->r[31]+0x00001847u,c->r[0]); // 803198E8
  goto L_803199E8; // 803198EC
L_803198F0:;
  c->r[0]=0u+0x00000000u; // 803198F0
  c->r[3]=0u+0x0000000Au; // 803198F4
  W8(c->r[31]+0x00001844u,c->r[0]); // 803198F8
  c->lr=0x80319900u; f_80319C7C(c); // 803198FC
  goto L_803199E8; // 80319900
L_80319904:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 80319904
  c->r[0]=0u+0x00000003u; // 80319908
  c->r[3]=0u+0x00000000u; // 8031990C
  W8(c->r[31]+0x00001847u,c->r[0]); // 80319910
  cmpu(c,0,c->r[4],0x0000000Cu); // 80319914
  c->r[0]=0u+0x0000000Cu; // 80319918
  W8(c->r[31]+0x00001844u,c->r[3]); // 8031991C
  if (crb(c,1)) { goto L_80319928; } // 80319920
  c->r[0]=c->r[4]|c->r[4]; // 80319924
L_80319928:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 80319928
  c->r[29]=c->r[2]+0xFFFFB400u; // 8031992C
  W8(c->r[31]+0x00001836u,c->r[0]); // 80319930
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80319934
  if (crb(c,2)) { goto L_80319940; } // 80319938
  c->r[29]=c->r[2]+0xFFFFB404u; // 8031993C
L_80319940:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80319940
  if (crb(c,2)) { goto L_80319974; } // 80319944
  c->r[3]=R16(c->r[31]+0x00001842u); // 80319948
  c->r[5]=c->r[29]|c->r[29]; // 8031994C
  c->r[4]=R16(c->r[31]+0x00001840u); // 80319950
  c->r[6]=R8(c->r[31]+0x00001835u); // 80319954
  c->r[7]=R8(c->r[31]+0x00001836u); // 80319958
  c->lr=0x80319960u; f_803211C8(c); // 8031995C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80319960
  if (!crb(c,2)) { goto L_803199E8; } // 80319964
  c->r[3]=0u+0x00000003u; // 80319968
  c->lr=0x80319970u; f_80319C7C(c); // 8031996C
  goto L_803199E8; // 80319970
L_80319974:;
  c->r[30]=0u+0x80570000u; // 80319974
  c->r[30]=c->r[30]+0x000058F8u; // 80319978
  c->r[3]=R32(c->r[30]+0x000016DCu); // 8031997C
  cmps(c,0,(int32_t)c->r[3],0); // 80319980
  if (crb(c,2)) { goto L_80319994; } // 80319984
  c->lr=0x8031998Cu; f_8030B00C(c); // 80319988
  c->r[0]=0u+0x00000000u; // 8031998C
  W32(c->r[30]+0x000016DCu,c->r[0]); // 80319990
L_80319994:;
  c->r[0]=0u+0x00000000u; // 80319994
  c->r[3]=0u+0x00000708u; // 80319998
  W16(c->r[30]+0x000016E0u,c->r[0]); // 8031999C
  W16(c->r[30]+0x000016E2u,c->r[0]); // 803199A0
  c->lr=0x803199A8u; f_8030AD84(c); // 803199A4
  cmps(c,0,(int32_t)c->r[3],0); // 803199A8
  W32(c->r[31]+0x000016DCu,c->r[3]); // 803199AC
  if (crb(c,2)) { goto L_803199C8; } // 803199B0
  c->r[0]=0u+0x00000096u; // 803199B4
  c->r[4]=0u+0x00000000u; // 803199B8
  W16(c->r[31]+0x000016E2u,c->r[0]); // 803199BC
  c->r[5]=0u+0x00000708u; // 803199C0
  c->lr=0x803199C8u; f_800060B8(c); // 803199C4
L_803199C8:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 803199C8
  c->r[3]=c->r[29]|c->r[29]; // 803199CC
  c->r[5]=0u+0x00000000u; // 803199D0
  c->lr=0x803199D8u; f_803210C0(c); // 803199D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 803199D8
  if (!crb(c,2)) { goto L_803199E8; } // 803199DC
  c->r[3]=0u+0x00000003u; // 803199E0
  c->lr=0x803199E8u; f_80319C7C(c); // 803199E4
L_803199E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 803199E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 803199EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 803199F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 803199F4
  c->lr=c->r[0]; // 803199F8
  c->r[1]=c->r[1]+0x00000020u; // 803199FC
  return; // 80319A00
}

// btm_process_inq_results
void f_80319A04(Ctx* __restrict c) {
  trace_call(0x80319A04u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319A04
  c->r[0]=c->lr; // 80319A08
  W32(c->r[1]+0x00000064u,c->r[0]); // 80319A0C
  c->r[11]=c->r[1]+0x00000060u; // 80319A10
  c->lr=0x80319A18u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80319A14
  c->r[5]=0u+0x80570000u; // 80319A18
  c->r[18]=c->r[4]|c->r[4]; // 80319A1C
  c->r[27]=c->r[5]+0x000058F8u; // 80319A20
  c->r[23]=0u+0x00000001u; // 80319A24
  c->r[0]=R8(c->r[27]+0x00001848u); // 80319A28
  c->r[21]=0u+0x00000000u; // 80319A2C
  c->r[22]=R32(c->r[27]+0x000016B4u); // 80319A30
  c->r[20]=0u+0x00000000u; // 80319A34
  cmps(c,0,(int32_t)c->r[0],0); // 80319A38
  if (crb(c,2)) { goto L_80319C64; } // 80319A3C
  c->r[28]=R8(c->r[3]+0x00000000u); // 80319A40
  c->r[17]=c->r[3]+0x00000001u; // 80319A44
  c->r[26]=0u+0x00000000u; // 80319A48
  c->r[31]=0u+0x0000007Fu; // 80319A4C
  c->r[16]=0u+0x00000000u; // 80319A50
  goto L_80319C58; // 80319A54
L_80319A58:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 80319A58
  cmps(c,0,(int32_t)c->r[18],0); // 80319A5C
  W8(c->r[1]+0x00000011u,c->r[0]); // 80319A60
  c->r[0]=R8(c->r[17]+0x00000001u); // 80319A64
  W8(c->r[1]+0x00000010u,c->r[0]); // 80319A68
  c->r[0]=R8(c->r[17]+0x00000002u); // 80319A6C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80319A70
  c->r[0]=R8(c->r[17]+0x00000003u); // 80319A74
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80319A78
  c->r[0]=R8(c->r[17]+0x00000004u); // 80319A7C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80319A80
  c->r[0]=R8(c->r[17]+0x00000005u); // 80319A84
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80319A88
  c->r[29]=R8(c->r[17]+0x00000006u); // 80319A8C
  c->r[30]=R8(c->r[17]+0x00000007u); // 80319A90
  c->r[17]=c->r[17]+0x00000008u; // 80319A94
  if (!crb(c,2)) { goto L_80319AA4; } // 80319A98
  c->r[21]=R8(c->r[17]+0x00000000u); // 80319A9C
  c->r[17]=c->r[17]+0x00000001u; // 80319AA0
L_80319AA4:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 80319AA4
  cmps(c,0,(int32_t)c->r[18],0); // 80319AA8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80319AAC
  c->r[0]=R8(c->r[17]+0x00000001u); // 80319AB0
  W8(c->r[1]+0x00000009u,c->r[0]); // 80319AB4
  c->r[0]=R8(c->r[17]+0x00000002u); // 80319AB8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80319ABC
  c->r[0]=R8(c->r[17]+0x00000004u); // 80319AC0
  c->r[3]=R8(c->r[17]+0x00000003u); // 80319AC4
  c->r[17]=c->r[17]+0x00000005u; // 80319AC8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80319ACC
  c->r[0]=c->r[3]+c->r[0]; // 80319AD0
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 80319AD4
  if (crb(c,2)) { goto L_80319AE4; } // 80319AD8
  c->r[20]=R8(c->r[17]+0x00000000u); // 80319ADC
  c->r[17]=c->r[17]+0x00000001u; // 80319AE0
L_80319AE4:;
  c->r[3]=c->r[1]+0x0000000Cu; // 80319AE4
  c->lr=0x80319AECu; f_80319520(c); // 80319AE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80319AEC
  if (!crb(c,2)) { goto L_80319C54; } // 80319AF0
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 80319AF4
  cmps(c,0,(int32_t)c->r[12],0); // 80319AF8
  if (crb(c,2)) { goto L_80319B18; } // 80319AFC
  c->r[3]=c->r[1]+0x0000000Cu; // 80319B00
  c->r[4]=c->r[1]+0x00000008u; // 80319B04
  c->ctr=c->r[12]; // 80319B08
  if (true) { c->lr=0x80319B10u; dispatch(c,c->ctr); } // 80319B0C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80319B10
  if (crb(c,2)) { goto L_80319C54; } // 80319B14
L_80319B18:;
  c->r[25]=c->r[27]+0x000016E4u; // 80319B18
  c->r[24]=0u+0x00000000u; // 80319B1C
L_80319B20:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 80319B20
  cmps(c,0,(int32_t)c->r[0],0); // 80319B24
  if (crb(c,2)) { goto L_80319B48; } // 80319B28
  c->r[3]=c->r[25]+0x0000000Au; // 80319B2C
  c->r[4]=c->r[1]+0x0000000Cu; // 80319B30
  c->r[5]=0u+0x00000006u; // 80319B34
  c->lr=0x80319B3Cu; f_802E54DC(c); // 80319B38
  cmps(c,0,(int32_t)c->r[3],0); // 80319B3C
  if (!crb(c,2)) { goto L_80319B48; } // 80319B40
  goto L_80319B5C; // 80319B44
L_80319B48:;
  c->r[24]=c->r[24]+0x00000001u; // 80319B48
  c->r[25]=c->r[25]+0x0000001Cu; // 80319B4C
  cmpu(c,0,c->r[24],0x0000000Cu); // 80319B50
  if (crb(c,0)) { IRQCHK(c); goto L_80319B20; } // 80319B54
  c->r[25]=0u+0x00000000u; // 80319B58
L_80319B5C:;
  cmps(c,0,(int32_t)c->r[25],0); // 80319B5C
  if (!crb(c,2)) { goto L_80319B78; } // 80319B60
  c->r[3]=c->r[1]+0x0000000Cu; // 80319B64
  c->lr=0x80319B6Cu; f_803195FC(c); // 80319B68
  c->r[25]=c->r[3]|c->r[3]; // 80319B6C
  c->r[23]=0u+0x00000001u; // 80319B70
  goto L_80319B8C; // 80319B74
L_80319B78:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80319B78
  c->r[0]=R32(c->r[27]+0x000016C0u); // 80319B7C
  cmpu(c,0,c->r[3],c->r[0]); // 80319B80
  if (!crb(c,2)) { goto L_80319B8C; } // 80319B84
  c->r[23]=0u+0x00000000u; // 80319B88
L_80319B8C:;
  cmpu(c,0,c->r[23],0x00000001u); // 80319B8C
  if (!crb(c,2)) { goto L_80319C54; } // 80319B90
  W8(c->r[25]+0x00000013u,c->r[29]); // 80319B94
  cmps(c,0,(int32_t)c->r[18],0); // 80319B98
  c->r[5]=R8(c->r[1]+0x00000008u); // 80319B9C
  c->r[0]=c->r[19]|0x00008000u; // 80319BA0
  W8(c->r[25]+0x00000014u,c->r[30]); // 80319BA4
  c->r[24]=c->r[25]+0x00000008u; // 80319BA8
  c->r[4]=R8(c->r[1]+0x00000009u); // 80319BAC
  W8(c->r[25]+0x00000015u,c->r[21]); // 80319BB0
  c->r[3]=R8(c->r[1]+0x0000000Au); // 80319BB4
  W8(c->r[25]+0x00000010u,c->r[5]); // 80319BB8
  W8(c->r[25]+0x00000011u,c->r[4]); // 80319BBC
  W8(c->r[25]+0x00000012u,c->r[3]); // 80319BC0
  W16(c->r[25]+0x00000008u,c->r[0]); // 80319BC4
  if (crb(c,2)) { goto L_80319BD4; } // 80319BC8
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 80319BCC
  goto L_80319BD8; // 80319BD0
L_80319BD4:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 80319BD4
L_80319BD8:;
  c->lr=0x80319BDCu; f_8030BDA4(c); // 80319BD8
  W32(c->r[25]+0x00000000u,c->r[3]); // 80319BDC
  c->r[0]=R32(c->r[27]+0x000016C0u); // 80319BE0
  W32(c->r[25]+0x00000004u,c->r[0]); // 80319BE4
  c->r[0]=R8(c->r[27]+0x00001848u); // 80319BE8
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 80319BEC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80319BF0
  c->r[0]=c->r[3]+0x00000001u; // 80319BF4
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 80319BF8
  if (!crb(c,2)) { goto L_80319C1C; } // 80319BFC
  c->r[3]=R8(c->r[27]+0x00001836u); // 80319C00
  cmps(c,0,(int32_t)c->r[3],0); // 80319C04
  if (crb(c,2)) { goto L_80319C1C; } // 80319C08
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80319C0C
  cmpu(c,0,c->r[0],c->r[3]); // 80319C10
  if (!crb(c,2)) { goto L_80319C1C; } // 80319C14
  c->lr=0x80319C1Cu; f_80321168(c); // 80319C18
L_80319C1C:;
  cmps(c,0,(int32_t)c->r[22],0); // 80319C1C
  W8(c->r[25]+0x00000018u,c->r[16]); // 80319C20
  if (crb(c,2)) { goto L_80319C38; } // 80319C24
  c->r[12]=c->r[22]|c->r[22]; // 80319C28
  c->r[3]=c->r[24]|c->r[24]; // 80319C2C
  c->ctr=c->r[12]; // 80319C30
  if (true) { c->lr=0x80319C38u; dispatch(c,c->ctr); } // 80319C34
L_80319C38:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 80319C38
  cmps(c,0,(int32_t)c->r[12],0); // 80319C3C
  if (crb(c,2)) { goto L_80319C54; } // 80319C40
  c->r[3]=c->r[25]+0x00000008u; // 80319C44
  c->r[4]=0u+0x00000001u; // 80319C48
  c->ctr=c->r[12]; // 80319C4C
  if (true) { c->lr=0x80319C54u; dispatch(c,c->ctr); } // 80319C50
L_80319C54:;
  c->r[26]=c->r[26]+0x00000001u; // 80319C54
L_80319C58:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 80319C58
  cmpu(c,0,c->r[0],c->r[28]); // 80319C5C
  if (crb(c,0)) { IRQCHK(c); goto L_80319A58; } // 80319C60
L_80319C64:;
  c->r[11]=c->r[1]+0x00000060u; // 80319C64
  c->lr=0x80319C6Cu; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80319C68
  c->r[0]=R32(c->r[1]+0x00000064u); // 80319C6C
  c->lr=c->r[0]; // 80319C70
  c->r[1]=c->r[1]+0x00000060u; // 80319C74
  return; // 80319C78
}

// btm_process_inq_complete
void f_80319C7C(Ctx* __restrict c) {
  trace_call(0x80319C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319C7C
  c->r[0]=c->lr; // 80319C80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80319C84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80319C88
  W32(c->r[1]+0x00000018u,c->r[30]); // 80319C8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80319C90
  c->r[29]=0u+0x80570000u; // 80319C94
  c->r[29]=c->r[29]+0x000058F8u; // 80319C98
  W32(c->r[1]+0x00000010u,c->r[28]); // 80319C9C
  c->r[0]=R8(c->r[29]+0x00001848u); // 80319CA0
  c->r[28]=R32(c->r[29]+0x000016B0u); // 80319CA4
  cmps(c,0,(int32_t)c->r[0],0); // 80319CA8
  if (crb(c,2)) { goto L_80319D60; } // 80319CAC
  c->r[4]=R32(c->r[29]+0x000016C0u); // 80319CB0
  cmps(c,0,(int32_t)c->r[3],0); // 80319CB4
  c->r[3]=0u+0x0000000Au; // 80319CB8
  c->r[0]=c->r[4]+0x00000001u; // 80319CBC
  W32(c->r[29]+0x000016C0u,c->r[0]); // 80319CC0
  if (!crb(c,2)) { goto L_80319CCC; } // 80319CC4
  c->r[3]=0u+0x00000000u; // 80319CC8
L_80319CCC:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 80319CCC
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 80319CD0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80319CD4
  if (!crb(c,2)) { goto L_80319D60; } // 80319CD8
  c->r[31]=0u+0x80570000u; // 80319CDC
  c->r[30]=0u+0x00000000u; // 80319CE0
  c->r[31]=c->r[31]+0x000058F8u; // 80319CE4
  W32(c->r[29]+0x000016B4u,c->r[30]); // 80319CE8
  c->r[3]=R32(c->r[31]+0x000016DCu); // 80319CEC
  W8(c->r[29]+0x00001848u,c->r[30]); // 80319CF0
  cmps(c,0,(int32_t)c->r[3],0); // 80319CF4
  W8(c->r[29]+0x00001847u,c->r[30]); // 80319CF8
  W32(c->r[29]+0x000016B0u,c->r[30]); // 80319CFC
  if (crb(c,2)) { goto L_80319D0C; } // 80319D00
  c->lr=0x80319D08u; f_8030B00C(c); // 80319D04
  W32(c->r[31]+0x000016DCu,c->r[30]); // 80319D08
L_80319D0C:;
  c->r[3]=0u+0x80570000u; // 80319D0C
  c->r[4]=0u+0x00000000u; // 80319D10
  c->r[3]=c->r[3]+0x000058F8u; // 80319D14
  W16(c->r[31]+0x000016E0u,c->r[4]); // 80319D18
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80319D1C
  W16(c->r[31]+0x000016E2u,c->r[4]); // 80319D20
  cmpu(c,0,c->r[0],0x00000005u); // 80319D24
  if (crb(c,0)) { goto L_80319D48; } // 80319D28
  c->r[3]=0u+0x000D0000u; // 80319D2C
  c->r[4]=0u+0x80490000u; // 80319D30
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 80319D34
  c->r[3]=c->r[3]+0x00000004u; // 80319D38
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 80319D3C
  c->r[4]=c->r[4]+0x0000007Cu; // 80319D40
  c->lr=0x80319D48u; f_8030E218(c); // 80319D44
L_80319D48:;
  cmps(c,0,(int32_t)c->r[28],0); // 80319D48
  if (crb(c,2)) { goto L_80319D60; } // 80319D4C
  c->r[12]=c->r[28]|c->r[28]; // 80319D50
  c->r[3]=c->r[29]+0x0000183Eu; // 80319D54
  c->ctr=c->r[12]; // 80319D58
  if (true) { c->lr=0x80319D60u; dispatch(c,c->ctr); } // 80319D5C
L_80319D60:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80319D60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80319D64
  c->r[30]=R32(c->r[1]+0x00000018u); // 80319D68
  c->r[29]=R32(c->r[1]+0x00000014u); // 80319D6C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80319D70
  c->lr=c->r[0]; // 80319D74
  c->r[1]=c->r[1]+0x00000020u; // 80319D78
  return; // 80319D7C
}

// btm_initiate_rem_name
void f_80319D80(Ctx* __restrict c) {
  trace_call(0x80319D80u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319D80
  c->r[0]=c->lr; // 80319D84
  W32(c->r[1]+0x00000034u,c->r[0]); // 80319D88
  c->r[11]=c->r[1]+0x00000030u; // 80319D8C
  c->lr=0x80319D94u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80319D90
  c->r[31]=0u+0x80570000u; // 80319D94
  c->r[23]=c->r[3]|c->r[3]; // 80319D98
  c->r[24]=c->r[4]|c->r[4]; // 80319D9C
  c->r[25]=c->r[5]|c->r[5]; // 80319DA0
  c->r[26]=c->r[6]|c->r[6]; // 80319DA4
  c->r[27]=c->r[7]|c->r[7]; // 80319DA8
  c->r[31]=c->r[31]+0x000058F8u; // 80319DAC
  c->r[30]=0u+0x00000001u; // 80319DB0
  c->r[29]=0u+0x00000001u; // 80319DB4
  c->r[28]=0u+0x00000001u; // 80319DB8
  c->lr=0x80319DC0u; f_80316DA8(c); // 80319DBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80319DC0
  if (!crb(c,2)) { goto L_80319DD0; } // 80319DC4
  c->r[3]=0u+0x00000006u; // 80319DC8
  goto L_80319EB8; // 80319DCC
L_80319DD0:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 80319DD0
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 80319DD4
  if (!crb(c,2)) { goto L_80319EB0; } // 80319DD8
  cmpu(c,0,c->r[25],0x00000001u); // 80319DDC
  if (!crb(c,2)) { goto L_80319E1C; } // 80319DE0
  cmps(c,0,(int32_t)c->r[3],0); // 80319DE4
  if (crb(c,2)) { goto L_80319E14; } // 80319DE8
  c->r[3]=c->r[23]|c->r[23]; // 80319DEC
  c->r[4]=c->r[31]+0x000016A8u; // 80319DF0
  c->r[5]=0u+0x00000006u; // 80319DF4
  c->lr=0x80319DFCu; f_802E54DC(c); // 80319DF8
  cmps(c,0,(int32_t)c->r[3],0); // 80319DFC
  if (!crb(c,2)) { goto L_80319E0C; } // 80319E00
  c->r[30]=0u+0x00000000u; // 80319E04
  goto L_80319E14; // 80319E08
L_80319E0C:;
  c->r[3]=0u+0x00000002u; // 80319E0C
  goto L_80319EB8; // 80319E10
L_80319E14:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 80319E14
  goto L_80319E2C; // 80319E18
L_80319E1C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80319E1C
  if (crb(c,2)) { goto L_80319E2C; } // 80319E20
  c->r[3]=0u+0x00000002u; // 80319E24
  goto L_80319EB8; // 80319E28
L_80319E2C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80319E2C
  if (crb(c,2)) { goto L_80319E90; } // 80319E30
  c->r[4]=c->r[23]|c->r[23]; // 80319E34
  c->r[3]=c->r[31]+0x000016A8u; // 80319E38
  c->r[5]=0u+0x00000006u; // 80319E3C
  c->lr=0x80319E44u; f_80005FB4(c); // 80319E40
  c->r[5]=c->r[26]|c->r[26]; // 80319E44
  c->r[3]=c->r[31]+0x00001680u; // 80319E48
  c->r[4]=0u+0x0000000Au; // 80319E4C
  c->lr=0x80319E54u; f_8030E7B4(c); // 80319E50
  cmps(c,0,(int32_t)c->r[24],0); // 80319E54
  if (crb(c,2)) { goto L_80319E78; } // 80319E58
  c->r[0]=R16(c->r[24]+0x00000000u); // 80319E5C
  c->r[3]=c->r[23]|c->r[23]; // 80319E60
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 80319E64
  c->r[5]=R8(c->r[24]+0x0000000Du); // 80319E68
  c->r[6]=c->r[0]|0x00008000u; // 80319E6C
  c->lr=0x80319E74u; f_80321B94(c); // 80319E70
  goto L_80319E8C; // 80319E74
L_80319E78:;
  c->r[3]=c->r[23]|c->r[23]; // 80319E78
  c->r[4]=0u+0x00000001u; // 80319E7C
  c->r[5]=0u+0x00000000u; // 80319E80
  c->r[6]=0u+0x00000000u; // 80319E84
  c->lr=0x80319E8Cu; f_80321B94(c); // 80319E88
L_80319E8C:;
  c->r[29]=c->r[3]|c->r[3]; // 80319E8C
L_80319E90:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 80319E90
  if (crb(c,2)) { goto L_80319EA8; } // 80319E94
  c->r[0]=R8(c->r[31]+0x000016AEu); // 80319E98
  c->r[0]=c->r[0]|c->r[25]; // 80319E9C
  W8(c->r[31]+0x000016AEu,c->r[0]); // 80319EA0
  goto L_80319EB4; // 80319EA4
L_80319EA8:;
  c->r[28]=0u+0x00000003u; // 80319EA8
  goto L_80319EB4; // 80319EAC
L_80319EB0:;
  c->r[28]=0u+0x00000002u; // 80319EB0
L_80319EB4:;
  c->r[3]=c->r[28]|c->r[28]; // 80319EB4
L_80319EB8:;
  c->r[11]=c->r[1]+0x00000030u; // 80319EB8
  c->lr=0x80319EC0u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80319EBC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80319EC0
  c->lr=c->r[0]; // 80319EC4
  c->r[1]=c->r[1]+0x00000030u; // 80319EC8
  return; // 80319ECC
}

// btm_process_remote_name
void f_80319ED0(Ctx* __restrict c) {
  trace_call(0x80319ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80319ED0
  c->r[0]=c->lr; // 80319ED4
  W32(c->r[1]+0x00000124u,c->r[0]); // 80319ED8
  c->r[11]=c->r[1]+0x00000120u; // 80319EDC
  c->lr=0x80319EE4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80319EE0
  c->r[31]=0u+0x80570000u; // 80319EE4
  c->r[26]=c->r[4]|c->r[4]; // 80319EE8
  c->r[31]=c->r[31]+0x000058F8u; // 80319EEC
  c->r[27]=c->r[5]|c->r[5]; // 80319EF0
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 80319EF4
  c->r[28]=c->r[6]|c->r[6]; // 80319EF8
  c->r[29]=R8(c->r[31]+0x000016AEu); // 80319EFC
  c->r[3]=c->r[31]+0x00001680u; // 80319F00
  c->lr=0x80319F08u; f_8030E824(c); // 80319F04
  c->r[3]=0u+0x00000000u; // 80319F08
  cmps(c,0,(int32_t)c->r[28],0); // 80319F0C
  W8(c->r[31]+0x000016AEu,c->r[3]); // 80319F10
  if (!crb(c,2)) { goto L_80319FC8; } // 80319F14
  cmpu(c,0,c->r[27],0x000000F8u); // 80319F18
  c->r[4]=c->r[1]+0x0000000Cu; // 80319F1C
  c->r[3]=0u+0x000000F8u; // 80319F20
  if (!crb(c,0)) { goto L_80319F2C; } // 80319F24
  c->r[3]=c->r[27]|c->r[27]; // 80319F28
L_80319F2C:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 80319F2C
  c->r[0]=0u+0x00000000u; // 80319F30
  W16(c->r[1]+0x0000000Au,c->r[3]); // 80319F34
  W16(c->r[1]+0x00000008u,c->r[0]); // 80319F38
  c->r[3]=c->r[5]|c->r[5]; // 80319F3C
  if (crb(c,2)) { goto L_80319FD8; } // 80319F40
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80319F44
  c->ctr=c->r[0]; // 80319F48
  if (crb(c,2)) { goto L_80319FA8; } // 80319F4C
L_80319F50:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 80319F50
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 80319F54
  W8(c->r[4]+0x00000000u,c->r[0]); // 80319F58
  c->r[0]=R8(c->r[26]+0x00000001u); // 80319F5C
  W8(c->r[4]+0x00000001u,c->r[0]); // 80319F60
  c->r[0]=R8(c->r[26]+0x00000002u); // 80319F64
  W8(c->r[4]+0x00000002u,c->r[0]); // 80319F68
  c->r[0]=R8(c->r[26]+0x00000003u); // 80319F6C
  W8(c->r[4]+0x00000003u,c->r[0]); // 80319F70
  c->r[0]=R8(c->r[26]+0x00000004u); // 80319F74
  W8(c->r[4]+0x00000004u,c->r[0]); // 80319F78
  c->r[0]=R8(c->r[26]+0x00000005u); // 80319F7C
  W8(c->r[4]+0x00000005u,c->r[0]); // 80319F80
  c->r[0]=R8(c->r[26]+0x00000006u); // 80319F84
  W8(c->r[4]+0x00000006u,c->r[0]); // 80319F88
  c->r[0]=R8(c->r[26]+0x00000007u); // 80319F8C
  c->r[26]=c->r[26]+0x00000008u; // 80319F90
  W8(c->r[4]+0x00000007u,c->r[0]); // 80319F94
  c->r[4]=c->r[4]+0x00000008u; // 80319F98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80319F50; } // 80319F9C
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 80319FA0
  if (crb(c,2)) { goto L_80319FD8; } // 80319FA4
L_80319FA8:;
  c->ctr=c->r[3]; // 80319FA8
L_80319FAC:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 80319FAC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80319FB0
  c->r[26]=c->r[26]+0x00000001u; // 80319FB4
  W8(c->r[4]+0x00000000u,c->r[0]); // 80319FB8
  c->r[4]=c->r[4]+0x00000001u; // 80319FBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80319FAC; } // 80319FC0
  goto L_80319FD8; // 80319FC4
L_80319FC8:;
  c->r[0]=0u+0x00000009u; // 80319FC8
  W16(c->r[1]+0x0000000Au,c->r[3]); // 80319FCC
  W16(c->r[1]+0x00000008u,c->r[0]); // 80319FD0
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80319FD4
L_80319FD8:;
  c->r[3]=c->r[31]+0x000016A8u; // 80319FD8
  c->r[4]=0u+0x00000000u; // 80319FDC
  c->r[5]=0u+0x00000006u; // 80319FE0
  c->lr=0x80319FE8u; f_800060B8(c); // 80319FE4
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80319FE8
  if (crb(c,2)) { goto L_8031A010; } // 80319FEC
  c->r[0]=0u+0x00000000u; // 80319FF0
  cmps(c,0,(int32_t)c->r[30],0); // 80319FF4
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 80319FF8
  if (crb(c,2)) { goto L_8031A010; } // 80319FFC
  c->r[12]=c->r[30]|c->r[30]; // 8031A000
  c->r[3]=c->r[1]+0x00000008u; // 8031A004
  c->ctr=c->r[12]; // 8031A008
  if (true) { c->lr=0x8031A010u; dispatch(c,c->ctr); } // 8031A00C
L_8031A010:;
  c->r[11]=c->r[1]+0x00000120u; // 8031A010
  c->lr=0x8031A018u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031A014
  c->r[0]=R32(c->r[1]+0x00000124u); // 8031A018
  c->lr=c->r[0]; // 8031A01C
  c->r[1]=c->r[1]+0x00000120u; // 8031A020
  return; // 8031A024
}

// btm_inq_rmt_name_failed
void f_8031A028(Ctx* __restrict c) {
  trace_call(0x8031A028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A028
  c->r[0]=c->lr; // 8031A02C
  c->r[3]=0u+0x00000000u; // 8031A030
  c->r[4]=0u+0x00000000u; // 8031A034
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031A038
  c->r[5]=0u+0x00000000u; // 8031A03C
  c->r[6]=0u+0x0000001Fu; // 8031A040
  c->lr=0x8031A048u; f_80319ED0(c); // 8031A044
  c->r[3]=0u+0x00000000u; // 8031A048
  c->r[4]=0u+0x00000000u; // 8031A04C
  c->r[5]=0u+0x0000001Fu; // 8031A050
  c->lr=0x8031A058u; f_8031CF2C(c); // 8031A054
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031A058
  c->lr=c->r[0]; // 8031A05C
  c->r[1]=c->r[1]+0x00000010u; // 8031A060
  return; // 8031A064
}

// btm_init
void f_8031A068(Ctx* __restrict c) {
  trace_call(0x8031A068u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A068
  c->r[0]=c->lr; // 8031A06C
  c->r[4]=0u+0x00000000u; // 8031A070
  c->r[5]=0u+0x000027C4u; // 8031A074
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031A078
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031A07C
  c->r[31]=0u+0x80570000u; // 8031A080
  c->r[3]=c->r[31]+0x000058F8u; // 8031A084
  c->lr=0x8031A08Cu; f_800060B8(c); // 8031A088
  c->r[3]=c->r[31]+0x000058F8u; // 8031A08C
  c->r[0]=0u+0x00000000u; // 8031A090
  W8(c->r[3]+0x000027C0u,c->r[0]); // 8031A094
  c->lr=0x8031A09Cu; f_8031951C(c); // 8031A098
  c->lr=0x8031A0A0u; f_80314704(c); // 8031A09C
  c->r[3]=0u+0x00000002u; // 8031A0A0
  c->lr=0x8031A0A8u; f_8031CE1C(c); // 8031A0A4
  c->lr=0x8031A0ACu; f_8031AD58(c); // 8031A0A8
  c->lr=0x8031A0B0u; f_80316B14(c); // 8031A0AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031A0B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031A0B4
  c->lr=c->r[0]; // 8031A0B8
  c->r[1]=c->r[1]+0x00000010u; // 8031A0BC
  return; // 8031A0C0
}

// BTM_PmRegister
void f_8031A0C4(Ctx* __restrict c) {
  trace_call(0x8031A0C4u);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8031A0C4
  if (crb(c,2)) { goto L_8031A100; } // 8031A0C8
  c->r[0]=R8(c->r[4]+0x00000000u); // 8031A0CC
  cmpu(c,0,c->r[0],0x00000002u); // 8031A0D0
  if (crb(c,0)) { goto L_8031A0E0; } // 8031A0D4
  c->r[3]=0u+0x00000005u; // 8031A0D8
  return; // 8031A0DC
L_8031A0E0:;
  c->r[3]=0u+0x80570000u; // 8031A0E0
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 8031A0E4
  c->r[3]=c->r[3]+0x000058F8u; // 8031A0E8
  c->r[5]=0u+0x00000000u; // 8031A0EC
  c->r[4]=c->r[3]+c->r[0]; // 8031A0F0
  W8(c->r[4]+0x00000558u,c->r[5]); // 8031A0F4
  c->r[3]=0u+0x00000000u; // 8031A0F8
  return; // 8031A0FC
L_8031A100:;
  c->r[6]=0u+0x80570000u; // 8031A100
  c->r[0]=0u+0x00000002u; // 8031A104
  c->r[6]=c->r[6]+0x000058F8u; // 8031A108
  c->r[7]=0u+0x00000000u; // 8031A10C
  c->ctr=c->r[0]; // 8031A110
L_8031A114:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 8031A114
  cmps(c,0,(int32_t)c->r[0],0); // 8031A118
  if (!crb(c,2)) { goto L_8031A16C; } // 8031A11C
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8031A120
  if (crb(c,2)) { goto L_8031A14C; } // 8031A124
  cmps(c,0,(int32_t)c->r[5],0); // 8031A128
  if (!crb(c,2)) { goto L_8031A138; } // 8031A12C
  c->r[3]=0u+0x00000005u; // 8031A130
  return; // 8031A134
L_8031A138:;
  c->r[6]=0u+0x80570000u; // 8031A138
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8031A13C
  c->r[6]=c->r[6]+0x000058F8u; // 8031A140
  c->r[6]=c->r[6]+c->r[0]; // 8031A144
  W32(c->r[6]+0x00000554u,c->r[5]); // 8031A148
L_8031A14C:;
  c->r[5]=0u+0x80570000u; // 8031A14C
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8031A150
  c->r[5]=c->r[5]+0x000058F8u; // 8031A154
  c->r[5]=c->r[5]+c->r[0]; // 8031A158
  W8(c->r[5]+0x00000558u,c->r[3]); // 8031A15C
  c->r[3]=0u+0x00000000u; // 8031A160
  W8(c->r[4]+0x00000000u,c->r[7]); // 8031A164
  return; // 8031A168
L_8031A16C:;
  c->r[6]=c->r[6]+0x00000008u; // 8031A16C
  c->r[7]=c->r[7]+0x00000001u; // 8031A170
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031A114; } // 8031A174
  c->r[3]=0u+0x00000003u; // 8031A178
  return; // 8031A17C
}

// BTM_SetPowerMode
void f_8031A180(Ctx* __restrict c) {
  trace_call(0x8031A180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A180
  c->r[0]=c->lr; // 8031A184
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031A188
  c->r[11]=c->r[1]+0x00000020u; // 8031A18C
  c->lr=0x8031A194u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031A190
  cmpu(c,0,c->r[3],0x00000002u); // 8031A194
  c->r[27]=c->r[3]|c->r[3]; // 8031A198
  c->r[26]=c->r[4]|c->r[4]; // 8031A19C
  c->r[28]=c->r[5]|c->r[5]; // 8031A1A0
  if (crb(c,0)) { goto L_8031A1AC; } // 8031A1A4
  c->r[27]=0u+0x00000080u; // 8031A1A8
L_8031A1AC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8031A1AC
  if (!crb(c,2)) { goto L_8031A1BC; } // 8031A1B0
  c->r[3]=0u+0x00000005u; // 8031A1B4
  goto L_8031A338; // 8031A1B8
L_8031A1BC:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 8031A1BC
  c->r[3]=0u+0x80570000u; // 8031A1C0
  c->r[3]=c->r[3]+0x000058F8u; // 8031A1C4
  c->r[29]=0u+0x00000000u; // 8031A1C8
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8031A1CC
  c->r[30]=c->r[3]+0x00000034u; // 8031A1D0
L_8031A1D4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 8031A1D4
  cmps(c,0,(int32_t)c->r[0],0); // 8031A1D8
  if (crb(c,2)) { goto L_8031A1F8; } // 8031A1DC
  c->r[4]=c->r[26]|c->r[26]; // 8031A1E0
  c->r[3]=c->r[30]+0x00000008u; // 8031A1E4
  c->r[5]=0u+0x00000006u; // 8031A1E8
  c->lr=0x8031A1F0u; f_802E54DC(c); // 8031A1EC
  cmps(c,0,(int32_t)c->r[3],0); // 8031A1F0
  if (crb(c,2)) { goto L_8031A208; } // 8031A1F4
L_8031A1F8:;
  c->r[29]=c->r[29]+0x00000001u; // 8031A1F8
  c->r[30]=c->r[30]+0x0000011Cu; // 8031A1FC
  cmpu(c,0,c->r[29],0x00000004u); // 8031A200
  if (crb(c,0)) { IRQCHK(c); goto L_8031A1D4; } // 8031A204
L_8031A208:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 8031A208
  cmps(c,0,(int32_t)c->r[30],4); // 8031A20C
  if (!crb(c,2)) { goto L_8031A21C; } // 8031A210
  c->r[3]=0u+0x00000007u; // 8031A214
  goto L_8031A338; // 8031A218
L_8031A21C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 8031A21C
  c->r[4]=0u+0x80570000u; // 8031A220
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 8031A224
  c->r[4]=c->r[4]+0x000058F8u; // 8031A228
  c->r[4]=c->r[4]+c->r[0]; // 8031A22C
  c->r[29]=c->r[4]+0x000004CCu; // 8031A230
  if (crb(c,2)) { goto L_8031A264; } // 8031A234
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 8031A238
  c->lr=0x8031A240u; f_80317C38(c); // 8031A23C
  c->r[4]=c->r[2]+0xFFFFB408u; // 8031A240
  c->r[5]=c->r[2]+0xFFFFB40Cu; // 8031A244
  c->r[0]=R8(c->r[4]+c->r[26]); // 8031A248
  c->r[4]=R8(c->r[5]+c->r[26]); // 8031A24C
  c->r[0]=R8(c->r[3]+c->r[0]); // 8031A250
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 8031A254
  if (!crb(c,2)) { goto L_8031A264; } // 8031A258
  c->r[3]=0u+0x00000004u; // 8031A25C
  goto L_8031A338; // 8031A260
L_8031A264:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 8031A264
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8031A268
  cmpu(c,0,c->r[3],c->r[0]); // 8031A26C
  if (!crb(c,2)) { goto L_8031A2A0; } // 8031A270
  cmps(c,0,(int32_t)c->r[3],0); // 8031A274
  if (crb(c,2)) { goto L_8031A298; } // 8031A278
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 8031A27C
  c->r[0]=R16(c->r[28]+0x00000000u); // 8031A280
  cmpu(c,0,c->r[0],c->r[3]); // 8031A284
  if (crb(c,0)) { goto L_8031A2A0; } // 8031A288
  c->r[0]=R16(c->r[28]+0x00000002u); // 8031A28C
  cmpu(c,0,c->r[0],c->r[3]); // 8031A290
  if (crb(c,1)) { goto L_8031A2A0; } // 8031A294
L_8031A298:;
  c->r[3]=0u+0x00000000u; // 8031A298
  goto L_8031A338; // 8031A29C
L_8031A2A0:;
  cmpu(c,0,c->r[27],0x00000080u); // 8031A2A0
  if (crb(c,2)) { goto L_8031A2F8; } // 8031A2A4
  c->r[3]=0u+0x80570000u; // 8031A2A8
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 8031A2AC
  c->r[3]=c->r[3]+0x000058F8u; // 8031A2B0
  c->r[3]=c->r[3]+c->r[0]; // 8031A2B4
  c->r[0]=R8(c->r[3]+0x00000558u); // 8031A2B8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8031A2BC
  if (crb(c,2)) { goto L_8031A2F8; } // 8031A2C0
  c->r[4]=R16(c->r[28]+0x00000000u); // 8031A2C4
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 8031A2C8
  c->r[3]=R16(c->r[28]+0x00000002u); // 8031A2CC
  c->r[0]=0u+0x00000001u; // 8031A2D0
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 8031A2D4
  W16(c->r[5]+0x00000002u,c->r[3]); // 8031A2D8
  c->r[4]=R16(c->r[28]+0x00000004u); // 8031A2DC
  c->r[3]=R16(c->r[28]+0x00000006u); // 8031A2E0
  W16(c->r[5]+0x00000004u,c->r[4]); // 8031A2E4
  W16(c->r[5]+0x00000006u,c->r[3]); // 8031A2E8
  c->r[3]=R16(c->r[28]+0x00000008u); // 8031A2EC
  W16(c->r[5]+0x00000008u,c->r[3]); // 8031A2F0
  W8(c->r[29]+0x00000021u,c->r[0]); // 8031A2F4
L_8031A2F8:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 8031A2F8
  cmpu(c,0,c->r[0],0x00000001u); // 8031A2FC
  if (crb(c,2)) { goto L_8031A320; } // 8031A300
  cmpu(c,0,c->r[0],0x00000004u); // 8031A304
  if (crb(c,2)) { goto L_8031A320; } // 8031A308
  c->r[3]=0u+0x80570000u; // 8031A30C
  c->r[3]=c->r[3]+0x000058F8u; // 8031A310
  c->r[0]=R8(c->r[3]+0x00000564u); // 8031A314
  cmpu(c,0,c->r[0],0x00000004u); // 8031A318
  if (crb(c,2)) { goto L_8031A328; } // 8031A31C
L_8031A320:;
  c->r[3]=0u+0x0000000Du; // 8031A320
  goto L_8031A338; // 8031A324
L_8031A328:;
  c->r[3]=c->r[27]|c->r[27]; // 8031A328
  c->r[4]=c->r[30]|c->r[30]; // 8031A32C
  c->r[5]=c->r[28]|c->r[28]; // 8031A330
  c->lr=0x8031A338u; f_8031A84C(c); // 8031A334
L_8031A338:;
  c->r[11]=c->r[1]+0x00000020u; // 8031A338
  c->lr=0x8031A340u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031A33C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031A340
  c->lr=c->r[0]; // 8031A344
  c->r[1]=c->r[1]+0x00000020u; // 8031A348
  return; // 8031A34C
}

// BTM_ReadPowerMode
void f_8031A350(Ctx* __restrict c) {
  trace_call(0x8031A350u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A350
  c->r[0]=c->lr; // 8031A354
  c->r[5]=0u+0x80570000u; // 8031A358
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031A35C
  c->r[5]=c->r[5]+0x000058F8u; // 8031A360
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031A364
  c->r[31]=0u+0x00000000u; // 8031A368
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031A36C
  c->r[30]=c->r[5]+0x00000034u; // 8031A370
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031A374
  c->r[29]=c->r[4]|c->r[4]; // 8031A378
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031A37C
  c->r[28]=c->r[3]|c->r[3]; // 8031A380
L_8031A384:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 8031A384
  cmps(c,0,(int32_t)c->r[0],0); // 8031A388
  if (crb(c,2)) { goto L_8031A3A8; } // 8031A38C
  c->r[4]=c->r[28]|c->r[28]; // 8031A390
  c->r[3]=c->r[30]+0x00000008u; // 8031A394
  c->r[5]=0u+0x00000006u; // 8031A398
  c->lr=0x8031A3A0u; f_802E54DC(c); // 8031A39C
  cmps(c,0,(int32_t)c->r[3],0); // 8031A3A0
  if (crb(c,2)) { goto L_8031A3B8; } // 8031A3A4
L_8031A3A8:;
  c->r[31]=c->r[31]+0x00000001u; // 8031A3A8
  c->r[30]=c->r[30]+0x0000011Cu; // 8031A3AC
  cmpu(c,0,c->r[31],0x00000004u); // 8031A3B0
  if (crb(c,0)) { IRQCHK(c); goto L_8031A384; } // 8031A3B4
L_8031A3B8:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8031A3B8
  cmps(c,0,(int32_t)c->r[0],4); // 8031A3BC
  if (!crb(c,2)) { goto L_8031A3CC; } // 8031A3C0
  c->r[3]=0u+0x00000007u; // 8031A3C4
  goto L_8031A3E8; // 8031A3C8
L_8031A3CC:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 8031A3CC
  c->r[4]=0u+0x80570000u; // 8031A3D0
  c->r[3]=0u+0x00000000u; // 8031A3D4
  c->r[4]=c->r[4]+0x000058F8u; // 8031A3D8
  c->r[4]=c->r[4]+c->r[0]; // 8031A3DC
  c->r[0]=R8(c->r[4]+0x000004ECu); // 8031A3E0
  W8(c->r[29]+0x00000000u,c->r[0]); // 8031A3E4
L_8031A3E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031A3E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031A3EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031A3F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031A3F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031A3F8
  c->lr=c->r[0]; // 8031A3FC
  c->r[1]=c->r[1]+0x00000020u; // 8031A400
  return; // 8031A404
}

// btm_pm_reset
void f_8031A408(Ctx* __restrict c) {
  trace_call(0x8031A408u);
  c->r[3]=0u+0x80570000u; // 8031A408
  c->r[12]=0u+0x00000000u; // 8031A40C
  c->r[3]=c->r[3]+0x000058F8u; // 8031A410
  c->r[0]=R8(c->r[3]+0x00000565u); // 8031A414
  cmpu(c,0,c->r[0],0x00000080u); // 8031A418
  if (crb(c,2)) { goto L_8031A438; } // 8031A41C
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 8031A420
  c->r[3]=c->r[3]+c->r[0]; // 8031A424
  c->r[0]=R8(c->r[3]+0x00000558u); // 8031A428
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8031A42C
  if (crb(c,2)) { goto L_8031A438; } // 8031A430
  c->r[12]=R32(c->r[3]+0x00000554u); // 8031A434
L_8031A438:;
  c->r[3]=0u+0x80570000u; // 8031A438
  cmps(c,0,(int32_t)c->r[12],0); // 8031A43C
  c->r[3]=c->r[3]+0x000058F8u; // 8031A440
  c->r[0]=0u+0x00000000u; // 8031A444
  c->r[4]=0u+0x00000004u; // 8031A448
  W8(c->r[3]+0x00000558u,c->r[0]); // 8031A44C
  W8(c->r[3]+0x00000564u,c->r[4]); // 8031A450
  W8(c->r[3]+0x00000560u,c->r[0]); // 8031A454
  if (crb(c,2)) return; // 8031A458
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)284); // 8031A45C
  c->r[4]=0u+0x00000005u; // 8031A460
  c->r[5]=0u+0x0000000Cu; // 8031A464
  c->r[6]=0u+0x00000000u; // 8031A468
  c->r[3]=c->r[3]+c->r[0]; // 8031A46C
  c->r[3]=c->r[3]+0x0000003Cu; // 8031A470
  c->ctr=c->r[12]; // 8031A474
  if (true) { dispatch(c,c->ctr); return; } // 8031A478
  return; // 8031A47C
}

// btm_pm_sm_alloc
void f_8031A480(Ctx* __restrict c) {
  trace_call(0x8031A480u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A480
  c->r[0]=c->lr; // 8031A484
  c->r[4]=0u+0x00000000u; // 8031A488
  c->r[5]=0u+0x00000022u; // 8031A48C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031A490
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)34); // 8031A494
  c->r[3]=0u+0x80570000u; // 8031A498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031A49C
  c->r[3]=c->r[3]+0x000058F8u; // 8031A4A0
  c->r[3]=c->r[3]+c->r[0]; // 8031A4A4
  c->r[31]=c->r[3]+0x000004CCu; // 8031A4A8
  c->r[3]=c->r[31]|c->r[31]; // 8031A4AC
  c->lr=0x8031A4B4u; f_800060B8(c); // 8031A4B0
  c->r[0]=0u+0x00000000u; // 8031A4B4
  W8(c->r[31]+0x00000020u,c->r[0]); // 8031A4B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031A4BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031A4C0
  c->lr=c->r[0]; // 8031A4C4
  c->r[1]=c->r[1]+0x00000010u; // 8031A4C8
  return; // 8031A4CC
}

// btm_pm_compare_modes
void f_8031A4D0(Ctx* __restrict c) {
  trace_call(0x8031A4D0u);
  cmps(c,0,(int32_t)c->r[3],0); // 8031A4D0
  if (!crb(c,2)) { goto L_8031A508; } // 8031A4D4
  c->r[6]=R16(c->r[4]+0x00000000u); // 8031A4D8
  c->r[3]=c->r[4]|c->r[4]; // 8031A4DC
  c->r[0]=R16(c->r[4]+0x00000002u); // 8031A4E0
  W16(c->r[5]+0x00000000u,c->r[6]); // 8031A4E4
  W16(c->r[5]+0x00000002u,c->r[0]); // 8031A4E8
  c->r[6]=R16(c->r[4]+0x00000004u); // 8031A4EC
  c->r[0]=R16(c->r[4]+0x00000006u); // 8031A4F0
  W16(c->r[5]+0x00000004u,c->r[6]); // 8031A4F4
  W16(c->r[5]+0x00000006u,c->r[0]); // 8031A4F8
  c->r[0]=R16(c->r[4]+0x00000008u); // 8031A4FC
  W16(c->r[5]+0x00000008u,c->r[0]); // 8031A500
  return; // 8031A504
L_8031A508:;
  c->r[9]=R8(c->r[4]+0x00000008u); // 8031A508
  cmps(c,0,(int32_t)c->r[9],0); // 8031A50C
  if (crb(c,2)) { goto L_8031A520; } // 8031A510
  c->r[8]=R8(c->r[3]+0x00000008u); // 8031A514
  cmps(c,0,(int32_t)c->r[8],0); // 8031A518
  if (!crb(c,2)) { goto L_8031A528; } // 8031A51C
L_8031A520:;
  c->r[3]=0u+0x00000000u; // 8031A520
  return; // 8031A524
L_8031A528:;
  c->r[0]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[0]); // 8031A528
  if (crb(c,2)) { goto L_8031A56C; } // 8031A52C
  c->r[4]=R16(c->r[3]+0x00000000u); // 8031A530
  c->r[0]=R16(c->r[3]+0x00000002u); // 8031A534
  W16(c->r[5]+0x00000000u,c->r[4]); // 8031A538
  W16(c->r[5]+0x00000002u,c->r[0]); // 8031A53C
  c->r[4]=R16(c->r[3]+0x00000004u); // 8031A540
  c->r[0]=R16(c->r[3]+0x00000006u); // 8031A544
  W16(c->r[5]+0x00000004u,c->r[4]); // 8031A548
  W16(c->r[5]+0x00000006u,c->r[0]); // 8031A54C
  c->r[0]=R16(c->r[3]+0x00000008u); // 8031A550
  c->r[3]=c->r[5]|c->r[5]; // 8031A554
  W16(c->r[5]+0x00000008u,c->r[0]); // 8031A558
  c->r[0]=R8(c->r[5]+0x00000008u); // 8031A55C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8031A560
  W8(c->r[5]+0x00000008u,c->r[0]); // 8031A564
  return; // 8031A568
L_8031A56C:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 8031A56C
  if (crb(c,2)) { goto L_8031A5B0; } // 8031A570
  c->r[6]=R16(c->r[4]+0x00000000u); // 8031A574
  c->r[3]=c->r[5]|c->r[5]; // 8031A578
  c->r[0]=R16(c->r[4]+0x00000002u); // 8031A57C
  W16(c->r[5]+0x00000000u,c->r[6]); // 8031A580
  W16(c->r[5]+0x00000002u,c->r[0]); // 8031A584
  c->r[6]=R16(c->r[4]+0x00000004u); // 8031A588
  c->r[0]=R16(c->r[4]+0x00000006u); // 8031A58C
  W16(c->r[5]+0x00000004u,c->r[6]); // 8031A590
  W16(c->r[5]+0x00000006u,c->r[0]); // 8031A594
  c->r[0]=R16(c->r[4]+0x00000008u); // 8031A598
  W16(c->r[5]+0x00000008u,c->r[0]); // 8031A59C
  c->r[0]=R8(c->r[5]+0x00000008u); // 8031A5A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8031A5A4
  W8(c->r[5]+0x00000008u,c->r[0]); // 8031A5A8
  return; // 8031A5AC
L_8031A5B0:;
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 8031A5B0
  c->r[6]=0u+0x80440000u; // 8031A5B4
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8031A5B8
  c->r[0]=c->r[0]-c->r[7]; // 8031A5BC
  c->r[6]=c->r[6]+0xFFFFDD80u; // 8031A5C0
  c->r[7]=c->r[9]+c->r[0]; // 8031A5C4
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 8031A5C8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8031A5CC
  c->r[0]=R8(c->r[6]+c->r[0]); // 8031A5D0
  cmps(c,0,(int32_t)c->r[0],2); // 8031A5D4
  if (crb(c,2)) { goto L_8031A624; } // 8031A5D8
  if (!crb(c,0)) { goto L_8031A5EC; } // 8031A5DC
  cmps(c,0,(int32_t)c->r[0],1); // 8031A5E0
  if (!crb(c,0)) { goto L_8031A5F8; } // 8031A5E4
  goto L_8031A6E4; // 8031A5E8
L_8031A5EC:;
  cmps(c,0,(int32_t)c->r[0],4); // 8031A5EC
  if (!crb(c,0)) { goto L_8031A6E4; } // 8031A5F0
  goto L_8031A654; // 8031A5F4
L_8031A5F8:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 8031A5F8
  c->r[0]=R16(c->r[3]+0x00000002u); // 8031A5FC
  W16(c->r[5]+0x00000000u,c->r[4]); // 8031A600
  W16(c->r[5]+0x00000002u,c->r[0]); // 8031A604
  c->r[4]=R16(c->r[3]+0x00000004u); // 8031A608
  c->r[0]=R16(c->r[3]+0x00000006u); // 8031A60C
  W16(c->r[5]+0x00000004u,c->r[4]); // 8031A610
  W16(c->r[5]+0x00000006u,c->r[0]); // 8031A614
  c->r[0]=R16(c->r[3]+0x00000008u); // 8031A618
  W16(c->r[5]+0x00000008u,c->r[0]); // 8031A61C
  return; // 8031A620
L_8031A624:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 8031A624
  c->r[3]=c->r[4]|c->r[4]; // 8031A628
  c->r[0]=R16(c->r[4]+0x00000002u); // 8031A62C
  W16(c->r[5]+0x00000000u,c->r[6]); // 8031A630
  W16(c->r[5]+0x00000002u,c->r[0]); // 8031A634
  c->r[6]=R16(c->r[4]+0x00000004u); // 8031A638
  c->r[0]=R16(c->r[4]+0x00000006u); // 8031A63C
  W16(c->r[5]+0x00000004u,c->r[6]); // 8031A640
  W16(c->r[5]+0x00000006u,c->r[0]); // 8031A644
  c->r[0]=R16(c->r[4]+0x00000008u); // 8031A648
  W16(c->r[5]+0x00000008u,c->r[0]); // 8031A64C
  return; // 8031A650
L_8031A654:;
  W8(c->r[5]+0x00000008u,c->r[8]); // 8031A654
  c->r[6]=R16(c->r[4]+0x00000000u); // 8031A658
  c->r[0]=R16(c->r[3]+0x00000000u); // 8031A65C
  cmpu(c,0,c->r[0],c->r[6]); // 8031A660
  if (!crb(c,0)) { goto L_8031A66C; } // 8031A664
  c->r[6]=c->r[0]|c->r[0]; // 8031A668
L_8031A66C:;
  W16(c->r[5]+0x00000000u,c->r[6]); // 8031A66C
  c->r[7]=R16(c->r[4]+0x00000002u); // 8031A670
  c->r[0]=R16(c->r[3]+0x00000002u); // 8031A674
  cmpu(c,0,c->r[0],c->r[7]); // 8031A678
  if (!crb(c,1)) { goto L_8031A684; } // 8031A67C
  c->r[7]=c->r[0]|c->r[0]; // 8031A680
L_8031A684:;
  c->r[6]=R16(c->r[5]+0x00000000u); // 8031A684
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 8031A688
  W16(c->r[5]+0x00000002u,c->r[7]); // 8031A68C
  cmpu(c,0,c->r[6],c->r[0]); // 8031A690
  if (!crb(c,0)) { goto L_8031A6A0; } // 8031A694
  c->r[3]=0u+0x00000000u; // 8031A698
  return; // 8031A69C
L_8031A6A0:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 8031A6A0
  cmpu(c,0,c->r[0],0x00000002u); // 8031A6A4
  if (!crb(c,2)) { goto L_8031A6DC; } // 8031A6A8
  c->r[6]=R16(c->r[4]+0x00000004u); // 8031A6AC
  c->r[0]=R16(c->r[3]+0x00000004u); // 8031A6B0
  cmpu(c,0,c->r[0],c->r[6]); // 8031A6B4
  if (!crb(c,1)) { goto L_8031A6C0; } // 8031A6B8
  c->r[6]=c->r[0]|c->r[0]; // 8031A6BC
L_8031A6C0:;
  W16(c->r[5]+0x00000004u,c->r[6]); // 8031A6C0
  c->r[4]=R16(c->r[4]+0x00000006u); // 8031A6C4
  c->r[0]=R16(c->r[3]+0x00000006u); // 8031A6C8
  cmpu(c,0,c->r[0],c->r[4]); // 8031A6CC
  if (!crb(c,1)) { goto L_8031A6D8; } // 8031A6D0
  c->r[4]=c->r[0]|c->r[0]; // 8031A6D4
L_8031A6D8:;
  W16(c->r[5]+0x00000006u,c->r[4]); // 8031A6D8
L_8031A6DC:;
  c->r[3]=c->r[5]|c->r[5]; // 8031A6DC
  return; // 8031A6E0
L_8031A6E4:;
  c->r[3]=0u+0x00000000u; // 8031A6E4
  return; // 8031A6E8
}

// btm_pm_get_set_mode
void f_8031A6EC(Ctx* __restrict c) {
  trace_call(0x8031A6ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A6EC
  c->r[0]=c->lr; // 8031A6F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031A6F4
  c->r[11]=c->r[1]+0x00000020u; // 8031A6F8
  c->lr=0x8031A700u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031A6FC
  cmps(c,0,(int32_t)c->r[5],0); // 8031A700
  c->r[26]=c->r[3]|c->r[3]; // 8031A704
  c->r[27]=c->r[5]|c->r[5]; // 8031A708
  c->r[28]=c->r[6]|c->r[6]; // 8031A70C
  c->r[7]=0u+0x00000000u; // 8031A710
  if (crb(c,2)) { goto L_8031A75C; } // 8031A714
  c->r[0]=R8(c->r[5]+0x00000008u); // 8031A718
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8031A71C
  if (crb(c,2)) { goto L_8031A75C; } // 8031A720
  c->r[3]=R16(c->r[5]+0x00000000u); // 8031A724
  c->r[0]=R16(c->r[5]+0x00000002u); // 8031A728
  W16(c->r[6]+0x00000000u,c->r[3]); // 8031A72C
  W16(c->r[6]+0x00000002u,c->r[0]); // 8031A730
  c->r[3]=R16(c->r[5]+0x00000004u); // 8031A734
  c->r[0]=R16(c->r[5]+0x00000006u); // 8031A738
  W16(c->r[6]+0x00000004u,c->r[3]); // 8031A73C
  W16(c->r[6]+0x00000006u,c->r[0]); // 8031A740
  c->r[0]=R16(c->r[5]+0x00000008u); // 8031A744
  W16(c->r[6]+0x00000008u,c->r[0]); // 8031A748
  c->r[0]=R8(c->r[6]+0x00000008u); // 8031A74C
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8031A750
  W8(c->r[6]+0x00000008u,c->r[3]); // 8031A754
  goto L_8031A834; // 8031A758
L_8031A75C:;
  c->r[31]=0u+0x80570000u; // 8031A75C
  c->r[30]=c->r[4]|c->r[4]; // 8031A760
  c->r[31]=c->r[31]+0x000058F8u; // 8031A764
  c->r[29]=0u+0x00000000u; // 8031A768
L_8031A76C:;
  c->r[0]=R8(c->r[31]+0x00000558u); // 8031A76C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8031A770
  if (crb(c,2)) { goto L_8031A7B0; } // 8031A774
  c->r[0]=R8(c->r[30]+0x00000008u); // 8031A778
  cmps(c,0,(int32_t)c->r[0],0); // 8031A77C
  if (!crb(c,2)) { goto L_8031A78C; } // 8031A780
  c->r[3]=0u+0x00000000u; // 8031A784
  goto L_8031A834; // 8031A788
L_8031A78C:;
  c->r[3]=c->r[7]|c->r[7]; // 8031A78C
  c->r[4]=c->r[30]|c->r[30]; // 8031A790
  c->r[5]=c->r[28]|c->r[28]; // 8031A794
  c->lr=0x8031A79Cu; f_8031A4D0(c); // 8031A798
  cmps(c,0,(int32_t)c->r[3],0); // 8031A79C
  if (!crb(c,2)) { goto L_8031A7AC; } // 8031A7A0
  c->r[3]=0u+0x00000000u; // 8031A7A4
  goto L_8031A834; // 8031A7A8
L_8031A7AC:;
  c->r[7]=c->r[28]|c->r[28]; // 8031A7AC
L_8031A7B0:;
  c->r[29]=c->r[29]+0x00000001u; // 8031A7B0
  c->r[30]=c->r[30]+0x0000000Au; // 8031A7B4
  cmps(c,0,(int32_t)c->r[29],2); // 8031A7B8
  c->r[31]=c->r[31]+0x00000008u; // 8031A7BC
  if (crb(c,0)) { IRQCHK(c); goto L_8031A76C; } // 8031A7C0
  cmps(c,0,(int32_t)c->r[7],0); // 8031A7C4
  if (!crb(c,2)) { goto L_8031A808; } // 8031A7C8
  cmps(c,0,(int32_t)c->r[27],0); // 8031A7CC
  if (crb(c,2)) { goto L_8031A800; } // 8031A7D0
  c->r[3]=R16(c->r[27]+0x00000000u); // 8031A7D4
  c->r[0]=R16(c->r[27]+0x00000002u); // 8031A7D8
  W16(c->r[28]+0x00000000u,c->r[3]); // 8031A7DC
  W16(c->r[28]+0x00000002u,c->r[0]); // 8031A7E0
  c->r[3]=R16(c->r[27]+0x00000004u); // 8031A7E4
  c->r[0]=R16(c->r[27]+0x00000006u); // 8031A7E8
  W16(c->r[28]+0x00000004u,c->r[3]); // 8031A7EC
  W16(c->r[28]+0x00000006u,c->r[0]); // 8031A7F0
  c->r[0]=R16(c->r[27]+0x00000008u); // 8031A7F4
  W16(c->r[28]+0x00000008u,c->r[0]); // 8031A7F8
  goto L_8031A830; // 8031A7FC
L_8031A800:;
  c->r[3]=0u+0x00000000u; // 8031A800
  goto L_8031A834; // 8031A804
L_8031A808:;
  cmpu(c,0,c->r[26],0x00000080u); // 8031A808
  if (!crb(c,2)) { goto L_8031A830; } // 8031A80C
  c->r[3]=c->r[27]|c->r[27]; // 8031A810
  c->r[4]=c->r[7]|c->r[7]; // 8031A814
  c->r[5]=c->r[28]|c->r[28]; // 8031A818
  c->lr=0x8031A820u; f_8031A4D0(c); // 8031A81C
  cmps(c,0,(int32_t)c->r[3],0); // 8031A820
  if (!crb(c,2)) { goto L_8031A830; } // 8031A824
  c->r[3]=0u+0x00000000u; // 8031A828
  goto L_8031A834; // 8031A82C
L_8031A830:;
  c->r[3]=R8(c->r[28]+0x00000008u); // 8031A830
L_8031A834:;
  c->r[11]=c->r[1]+0x00000020u; // 8031A834
  c->lr=0x8031A83Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031A838
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031A83C
  c->lr=c->r[0]; // 8031A840
  c->r[1]=c->r[1]+0x00000020u; // 8031A844
  return; // 8031A848
}

// btm_pm_snd_md_req
void f_8031A84C(Ctx* __restrict c) {
  trace_call(0x8031A84Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031A84C
  c->r[0]=c->lr; // 8031A850
  c->r[6]=0u+0x80570000u; // 8031A854
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031A858
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)34); // 8031A85C
  c->r[6]=c->r[6]+0x000058F8u; // 8031A860
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8031A864
  c->r[31]=0u+0x00000000u; // 8031A868
  W32(c->r[1]+0x00000028u,c->r[30]); // 8031A86C
  c->r[30]=c->r[4]|c->r[4]; // 8031A870
  W32(c->r[1]+0x00000024u,c->r[29]); // 8031A874
  c->r[29]=c->r[3]|c->r[3]; // 8031A878
  c->r[3]=c->r[6]+c->r[0]; // 8031A87C
  c->r[6]=c->r[1]+0x00000008u; // 8031A880
  W32(c->r[1]+0x00000020u,c->r[28]); // 8031A884
  c->r[28]=c->r[3]+0x000004CCu; // 8031A888
  c->r[3]=c->r[29]|c->r[29]; // 8031A88C
  c->r[4]=c->r[28]|c->r[28]; // 8031A890
  c->lr=0x8031A898u; f_8031A6EC(c); // 8031A894
  c->r[4]=R8(c->r[28]+0x00000020u); // 8031A898
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031A89C
  W8(c->r[1]+0x00000010u,c->r[3]); // 8031A8A0
  cmpu(c,0,c->r[4],c->r[0]); // 8031A8A4
  if (!crb(c,2)) { goto L_8031A8DC; } // 8031A8A8
  cmps(c,0,(int32_t)c->r[0],0); // 8031A8AC
  if (crb(c,2)) { goto L_8031A8D0; } // 8031A8B0
  c->r[4]=R16(c->r[28]+0x0000001Eu); // 8031A8B4
  c->r[0]=R16(c->r[1]+0x00000008u); // 8031A8B8
  cmpu(c,0,c->r[0],c->r[4]); // 8031A8BC
  if (crb(c,0)) { goto L_8031A8D8; } // 8031A8C0
  c->r[0]=R16(c->r[1]+0x0000000Au); // 8031A8C4
  cmpu(c,0,c->r[0],c->r[4]); // 8031A8C8
  if (crb(c,1)) { goto L_8031A8D8; } // 8031A8CC
L_8031A8D0:;
  c->r[3]=0u+0x0000000Du; // 8031A8D0
  goto L_8031AA60; // 8031A8D4
L_8031A8D8:;
  c->r[31]=0u+0x00000001u; // 8031A8D8
L_8031A8DC:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031A8DC
  W8(c->r[28]+0x00000021u,c->r[31]); // 8031A8E0
  if (crb(c,2)) { goto L_8031A8FC; } // 8031A8E4
  c->r[0]=R8(c->r[28]+0x00000020u); // 8031A8E8
  cmps(c,0,(int32_t)c->r[0],0); // 8031A8EC
  if (crb(c,2)) { goto L_8031A8FC; } // 8031A8F0
  c->r[0]=0u+0x00000001u; // 8031A8F4
  W8(c->r[28]+0x00000021u,c->r[0]); // 8031A8F8
L_8031A8FC:;
  c->r[3]=0u+0x00000002u; // 8031A8FC
  c->lr=0x8031A904u; f_8030AF24(c); // 8031A900
  cmps(c,0,(int32_t)c->r[3],0); // 8031A904
  c->r[31]=c->r[3]|c->r[3]; // 8031A908
  if (!crb(c,2)) { goto L_8031A918; } // 8031A90C
  c->r[3]=0u+0x00000003u; // 8031A910
  goto L_8031AA60; // 8031A914
L_8031A918:;
  c->r[0]=R8(c->r[28]+0x00000021u); // 8031A918
  cmpu(c,0,c->r[0],0x00000001u); // 8031A91C
  if (!crb(c,2)) { goto L_8031A92C; } // 8031A920
  c->r[0]=0u+0x00000000u; // 8031A924
  W8(c->r[1]+0x00000010u,c->r[0]); // 8031A928
L_8031A92C:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 8031A92C
  c->r[4]=0u+0x80570000u; // 8031A930
  c->r[4]=c->r[4]+0x000058F8u; // 8031A934
  cmps(c,0,(int32_t)c->r[0],2); // 8031A938
  W8(c->r[4]+0x00000564u,c->r[30]); // 8031A93C
  W8(c->r[4]+0x00000565u,c->r[29]); // 8031A940
  if (crb(c,2)) { goto L_8031A9E8; } // 8031A944
  if (!crb(c,0)) { goto L_8031A95C; } // 8031A948
  cmps(c,0,(int32_t)c->r[0],0); // 8031A94C
  if (crb(c,2)) { goto L_8031A968; } // 8031A950
  if (!crb(c,0)) { goto L_8031A9C8; } // 8031A954
  goto L_8031AA30; // 8031A958
L_8031A95C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8031A95C
  if (!crb(c,0)) { goto L_8031AA30; } // 8031A960
  goto L_8031AA10; // 8031A964
L_8031A968:;
  c->r[0]=R8(c->r[28]+0x00000020u); // 8031A968
  cmps(c,0,(int32_t)c->r[0],3); // 8031A96C
  if (crb(c,2)) { goto L_8031A99C; } // 8031A970
  if (!crb(c,0)) { goto L_8031A9B4; } // 8031A974
  cmps(c,0,(int32_t)c->r[0],2); // 8031A978
  if (!crb(c,0)) { goto L_8031A984; } // 8031A97C
  goto L_8031A9B4; // 8031A980
L_8031A984:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 8031A984
  c->r[3]=c->r[31]|c->r[31]; // 8031A988
  c->r[4]=c->r[4]+c->r[0]; // 8031A98C
  c->r[4]=R16(c->r[4]+0x00000034u); // 8031A990
  c->lr=0x8031A998u; f_80322244(c); // 8031A994
  goto L_8031AA40; // 8031A998
L_8031A99C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 8031A99C
  c->r[3]=c->r[31]|c->r[31]; // 8031A9A0
  c->r[4]=c->r[4]+c->r[0]; // 8031A9A4
  c->r[4]=R16(c->r[4]+0x00000034u); // 8031A9A8
  c->lr=0x8031A9B0u; f_8032237C(c); // 8031A9AC
  goto L_8031AA40; // 8031A9B0
L_8031A9B4:;
  c->r[3]=0u+0x80570000u; // 8031A9B4
  c->r[0]=0u+0x00000004u; // 8031A9B8
  c->r[3]=c->r[3]+0x000058F8u; // 8031A9BC
  W8(c->r[3]+0x00000564u,c->r[0]); // 8031A9C0
  goto L_8031AA40; // 8031A9C4
L_8031A9C8:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 8031A9C8
  c->r[5]=R16(c->r[1]+0x00000008u); // 8031A9CC
  c->r[6]=R16(c->r[1]+0x0000000Au); // 8031A9D0
  c->r[3]=c->r[31]|c->r[31]; // 8031A9D4
  c->r[4]=c->r[4]+c->r[0]; // 8031A9D8
  c->r[4]=R16(c->r[4]+0x00000034u); // 8031A9DC
  c->lr=0x8031A9E4u; f_803220C4(c); // 8031A9E0
  goto L_8031AA40; // 8031A9E4
L_8031A9E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 8031A9E8
  c->r[5]=R16(c->r[1]+0x00000008u); // 8031A9EC
  c->r[6]=R16(c->r[1]+0x0000000Au); // 8031A9F0
  c->r[3]=c->r[31]|c->r[31]; // 8031A9F4
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 8031A9F8
  c->r[4]=c->r[4]+c->r[0]; // 8031A9FC
  c->r[4]=R16(c->r[4]+0x00000034u); // 8031AA00
  c->r[8]=R16(c->r[1]+0x0000000Eu); // 8031AA04
  c->lr=0x8031AA0Cu; f_80322178(c); // 8031AA08
  goto L_8031AA40; // 8031AA0C
L_8031AA10:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 8031AA10
  c->r[5]=R16(c->r[1]+0x00000008u); // 8031AA14
  c->r[6]=R16(c->r[1]+0x0000000Au); // 8031AA18
  c->r[3]=c->r[31]|c->r[31]; // 8031AA1C
  c->r[4]=c->r[4]+c->r[0]; // 8031AA20
  c->r[4]=R16(c->r[4]+0x00000034u); // 8031AA24
  c->lr=0x8031AA2Cu; f_803222C8(c); // 8031AA28
  goto L_8031AA40; // 8031AA2C
L_8031AA30:;
  c->r[3]=0u+0x80570000u; // 8031AA30
  c->r[0]=0u+0x00000004u; // 8031AA34
  c->r[3]=c->r[3]+0x000058F8u; // 8031AA38
  W8(c->r[3]+0x00000564u,c->r[0]); // 8031AA3C
L_8031AA40:;
  c->r[3]=0u+0x80570000u; // 8031AA40
  c->r[3]=c->r[3]+0x000058F8u; // 8031AA44
  c->r[0]=R8(c->r[3]+0x00000564u); // 8031AA48
  cmpu(c,0,c->r[0],0x00000004u); // 8031AA4C
  if (!crb(c,2)) { goto L_8031AA5C; } // 8031AA50
  c->r[3]=c->r[31]|c->r[31]; // 8031AA54
  c->lr=0x8031AA5Cu; f_8030B00C(c); // 8031AA58
L_8031AA5C:;
  c->r[3]=0u+0x00000001u; // 8031AA5C
L_8031AA60:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031AA60
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8031AA64
  c->r[30]=R32(c->r[1]+0x00000028u); // 8031AA68
  c->r[29]=R32(c->r[1]+0x00000024u); // 8031AA6C
  c->r[28]=R32(c->r[1]+0x00000020u); // 8031AA70
  c->lr=c->r[0]; // 8031AA74
  c->r[1]=c->r[1]+0x00000030u; // 8031AA78
  return; // 8031AA7C
}

// btm_pm_proc_cmd_status
void f_8031AA80(Ctx* __restrict c) {
  trace_call(0x8031AA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031AA80
  c->r[0]=c->lr; // 8031AA84
  c->r[4]=0u+0x80570000u; // 8031AA88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031AA8C
  c->r[4]=c->r[4]+0x000058F8u; // 8031AA90
  c->r[0]=R8(c->r[4]+0x00000564u); // 8031AA94
  cmpu(c,0,c->r[0],0x00000004u); // 8031AA98
  if (!crb(c,0)) { goto L_8031AB20; } // 8031AA9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 8031AAA0
  cmps(c,0,(int32_t)c->r[3],0); // 8031AAA4
  c->r[5]=c->r[4]+c->r[0]; // 8031AAA8
  if (!crb(c,2)) { goto L_8031AAC0; } // 8031AAAC
  c->r[0]=0u+0x00000004u; // 8031AAB0
  c->r[4]=0u+0x00000004u; // 8031AAB4
  W8(c->r[5]+0x000004ECu,c->r[0]); // 8031AAB8
  goto L_8031AAC4; // 8031AABC
L_8031AAC0:;
  c->r[4]=0u+0x00000005u; // 8031AAC0
L_8031AAC4:;
  c->r[7]=0u+0x80570000u; // 8031AAC4
  c->r[7]=c->r[7]+0x000058F8u; // 8031AAC8
  c->r[0]=R8(c->r[7]+0x00000565u); // 8031AACC
  cmpu(c,0,c->r[0],0x00000080u); // 8031AAD0
  if (crb(c,2)) { goto L_8031AB10; } // 8031AAD4
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 8031AAD8
  c->r[5]=c->r[7]+c->r[0]; // 8031AADC
  c->r[0]=R8(c->r[5]+0x00000558u); // 8031AAE0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8031AAE4
  if (crb(c,2)) { goto L_8031AB10; } // 8031AAE8
  c->r[0]=R8(c->r[7]+0x00000564u); // 8031AAEC
  c->r[6]=c->r[3]|c->r[3]; // 8031AAF0
  c->r[12]=R32(c->r[5]+0x00000554u); // 8031AAF4
  c->r[5]=0u+0x00000000u; // 8031AAF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)284); // 8031AAFC
  c->r[3]=c->r[7]+c->r[0]; // 8031AB00
  c->r[3]=c->r[3]+0x0000003Cu; // 8031AB04
  c->ctr=c->r[12]; // 8031AB08
  if (true) { c->lr=0x8031AB10u; dispatch(c,c->ctr); } // 8031AB0C
L_8031AB10:;
  c->r[3]=0u+0x80570000u; // 8031AB10
  c->r[0]=0u+0x00000004u; // 8031AB14
  c->r[3]=c->r[3]+0x000058F8u; // 8031AB18
  W8(c->r[3]+0x00000564u,c->r[0]); // 8031AB1C
L_8031AB20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031AB20
  c->lr=c->r[0]; // 8031AB24
  c->r[1]=c->r[1]+0x00000010u; // 8031AB28
  return; // 8031AB2C
}

// btm_pm_proc_mode_change
void f_8031AB30(Ctx* __restrict c) {
  trace_call(0x8031AB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031AB30
  c->r[0]=c->lr; // 8031AB34
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031AB38
  c->r[11]=c->r[1]+0x00000030u; // 8031AB3C
  c->lr=0x8031AB44u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031AB40
  c->r[26]=c->r[4]|c->r[4]; // 8031AB44
  c->r[25]=c->r[3]|c->r[3]; // 8031AB48
  c->r[27]=c->r[5]|c->r[5]; // 8031AB4C
  c->r[28]=c->r[6]|c->r[6]; // 8031AB50
  c->r[3]=c->r[26]|c->r[26]; // 8031AB54
  c->lr=0x8031AB5Cu; f_80314720(c); // 8031AB58
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 8031AB5C
  cmps(c,0,(int32_t)c->r[29],4); // 8031AB60
  if (!crb(c,0)) { goto L_8031AD40; } // 8031AB64
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)284); // 8031AB68
  c->r[24]=0u+0x80570000u; // 8031AB6C
  cmps(c,0,(int32_t)c->r[27],0); // 8031AB70
  c->r[24]=c->r[24]+0x000058F8u; // 8031AB74
  c->r[31]=c->r[24]+c->r[30]; // 8031AB78
  if (!crb(c,2)) { goto L_8031ABD4; } // 8031AB7C
  c->r[0]=R16(c->r[31]+0x00000038u); // 8031AB80
  cmps(c,0,(int32_t)c->r[0],0); // 8031AB84
  if (crb(c,2)) { goto L_8031ABD4; } // 8031AB88
  c->lr=0x8031AB90u; f_8031BAA8(c); // 8031AB8C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031AB90
  if (!crb(c,2)) { goto L_8031ABD4; } // 8031AB94
  c->r[0]=0u+0x00000000u; // 8031AB98
  W16(c->r[31]+0x00000038u,c->r[0]); // 8031AB9C
  c->r[0]=R8(c->r[24]+0x000027C0u); // 8031ABA0
  cmpu(c,0,c->r[0],0x00000005u); // 8031ABA4
  if (crb(c,0)) { goto L_8031ABC8; } // 8031ABA8
  c->r[3]=0u+0x000D0000u; // 8031ABAC
  c->r[4]=0u+0x80490000u; // 8031ABB0
  c->r[6]=R16(c->r[31]+0x00000036u); // 8031ABB4
  c->r[5]=c->r[26]|c->r[26]; // 8031ABB8
  c->r[3]=c->r[3]+0x00000004u; // 8031ABBC
  c->r[4]=c->r[4]+0x000000B8u; // 8031ABC0
  c->lr=0x8031ABC8u; f_8030E218(c); // 8031ABC4
L_8031ABC8:;
  c->r[3]=R16(c->r[31]+0x00000034u); // 8031ABC8
  c->r[4]=R16(c->r[31]+0x00000036u); // 8031ABCC
  c->lr=0x8031ABD4u; f_803219FC(c); // 8031ABD0
L_8031ABD4:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 8031ABD4
  c->r[3]=0u+0x80570000u; // 8031ABD8
  cmps(c,0,(int32_t)c->r[27],0); // 8031ABDC
  c->r[3]=c->r[3]+0x000058F8u; // 8031ABE0
  c->r[4]=c->r[3]+c->r[0]; // 8031ABE4
  W8(c->r[4]+0x000004ECu,c->r[27]); // 8031ABE8
  c->r[0]=0u+0x00000000u; // 8031ABEC
  W16(c->r[4]+0x000004EAu,c->r[28]); // 8031ABF0
  if (!crb(c,2)) { goto L_8031AC08; } // 8031ABF4
  c->r[3]=R8(c->r[4]+0x000004D4u); // 8031ABF8
  cmpu(c,0,c->r[3],0x00000001u); // 8031ABFC
  if (!crb(c,2)) { goto L_8031AC08; } // 8031AC00
  W8(c->r[4]+0x000004D4u,c->r[0]); // 8031AC04
L_8031AC08:;
  cmps(c,0,(int32_t)c->r[27],0); // 8031AC08
  c->r[5]=c->r[4]+0x000004D6u; // 8031AC0C
  if (!crb(c,2)) { goto L_8031AC24; } // 8031AC10
  c->r[3]=R8(c->r[5]+0x00000008u); // 8031AC14
  cmpu(c,0,c->r[3],0x00000001u); // 8031AC18
  if (!crb(c,2)) { goto L_8031AC24; } // 8031AC1C
  W8(c->r[5]+0x00000008u,c->r[0]); // 8031AC20
L_8031AC24:;
  c->r[0]=R8(c->r[4]+0x000004EDu); // 8031AC24
  cmpu(c,0,c->r[0],0x00000001u); // 8031AC28
  if (!crb(c,2)) { goto L_8031AC40; } // 8031AC2C
  c->r[4]=c->r[29]|c->r[29]; // 8031AC30
  c->r[3]=0u+0x00000080u; // 8031AC34
  c->r[5]=0u+0x00000000u; // 8031AC38
  c->lr=0x8031AC40u; f_8031A84C(c); // 8031AC3C
L_8031AC40:;
  c->r[24]=0u+0x80570000u; // 8031AC40
  c->r[29]=0u+0x00000000u; // 8031AC44
  c->r[24]=c->r[24]+0x000058F8u; // 8031AC48
L_8031AC4C:;
  c->r[0]=R8(c->r[24]+0x00000558u); // 8031AC4C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8031AC50
  if (crb(c,2)) { goto L_8031AC74; } // 8031AC54
  c->r[12]=R32(c->r[24]+0x00000554u); // 8031AC58
  c->r[4]=c->r[27]|c->r[27]; // 8031AC5C
  c->r[5]=c->r[28]|c->r[28]; // 8031AC60
  c->r[6]=c->r[25]|c->r[25]; // 8031AC64
  c->r[3]=c->r[31]+0x0000003Cu; // 8031AC68
  c->ctr=c->r[12]; // 8031AC6C
  if (true) { c->lr=0x8031AC74u; dispatch(c,c->ctr); } // 8031AC70
L_8031AC74:;
  c->r[29]=c->r[29]+0x00000001u; // 8031AC74
  c->r[24]=c->r[24]+0x00000008u; // 8031AC78
  cmps(c,0,(int32_t)c->r[29],2); // 8031AC7C
  if (crb(c,0)) { IRQCHK(c); goto L_8031AC4C; } // 8031AC80
  c->r[3]=0u+0x80570000u; // 8031AC84
  c->r[3]=c->r[3]+0x000058F8u; // 8031AC88
  c->r[28]=c->r[3]+c->r[30]; // 8031AC8C
  c->r[0]=R8(c->r[28]+0x0000014Fu); // 8031AC90
  cmpu(c,0,c->r[0],0x00000001u); // 8031AC94
  if (!crb(c,2)) { goto L_8031AD40; } // 8031AC98
  c->r[24]=c->r[28]+0x0000003Cu; // 8031AC9C
  c->r[3]=c->r[24]|c->r[24]; // 8031ACA0
  c->lr=0x8031ACA8u; f_803168F4(c); // 8031ACA4
  cmps(c,0,(int32_t)c->r[3],0); // 8031ACA8
  if (crb(c,2)) { goto L_8031ACDC; } // 8031ACAC
  c->r[0]=R8(c->r[3]+0x00000076u); // 8031ACB0
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8031ACB4
  if (crb(c,2)) { goto L_8031ACDC; } // 8031ACB8
  c->r[3]=c->r[26]|c->r[26]; // 8031ACBC
  c->r[4]=0u+0x00000000u; // 8031ACC0
  c->lr=0x8031ACC8u; f_80321B08(c); // 8031ACC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031ACC8
  if (crb(c,2)) { goto L_8031AD10; } // 8031ACCC
  c->r[0]=0u+0x00000002u; // 8031ACD0
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 8031ACD4
  goto L_8031AD40; // 8031ACD8
L_8031ACDC:;
  c->r[4]=0u+0x80570000u; // 8031ACDC
  c->r[3]=c->r[24]|c->r[24]; // 8031ACE0
  c->r[4]=c->r[4]+0x000058F8u; // 8031ACE4
  c->r[4]=c->r[4]+c->r[30]; // 8031ACE8
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 8031ACEC
  c->r[0]=cntlz(c->r[0]); // 8031ACF0
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 8031ACF4
  c->lr=0x8031ACFCu; f_80322400(c); // 8031ACF8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031ACFC
  if (crb(c,2)) { goto L_8031AD10; } // 8031AD00
  c->r[0]=0u+0x00000000u; // 8031AD04
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 8031AD08
  goto L_8031AD40; // 8031AD0C
L_8031AD10:;
  c->r[27]=0u+0x00000000u; // 8031AD10
  c->r[26]=0u+0x80570000u; // 8031AD14
  W8(c->r[28]+0x0000014Fu,c->r[27]); // 8031AD18
  c->r[26]=c->r[26]+0x000058F8u; // 8031AD1C
  c->r[12]=R32(c->r[26]+0x0000062Cu); // 8031AD20
  cmps(c,0,(int32_t)c->r[12],0); // 8031AD24
  if (crb(c,2)) { goto L_8031AD40; } // 8031AD28
  W8(c->r[26]+0x00000624u,c->r[25]); // 8031AD2C
  c->r[3]=c->r[26]+0x00000624u; // 8031AD30
  c->ctr=c->r[12]; // 8031AD34
  if (true) { c->lr=0x8031AD3Cu; dispatch(c,c->ctr); } // 8031AD38
  W32(c->r[26]+0x0000062Cu,c->r[27]); // 8031AD3C
L_8031AD40:;
  c->r[11]=c->r[1]+0x00000030u; // 8031AD40
  c->lr=0x8031AD48u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031AD44
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031AD48
  c->lr=c->r[0]; // 8031AD4C
  c->r[1]=c->r[1]+0x00000030u; // 8031AD50
  return; // 8031AD54
}

// btm_sco_init
void f_8031AD58(Ctx* __restrict c) {
  trace_call(0x8031AD58u);
  c->r[3]=0u+0x80440000u; // 8031AD58
  {uint32_t ea=c->r[3]+0xFFFFDD90u; c->r[6]=R32(ea); c->r[3]=ea;} // 8031AD5C
  c->r[4]=0u+0x00010000u; // 8031AD60
  c->r[7]=0u+0x80570000u; // 8031AD64
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 8031AD68
  c->r[5]=R32(c->r[3]+0x00000004u); // 8031AD6C
  c->r[7]=c->r[7]+0x000058F8u; // 8031AD70
  c->r[4]=R32(c->r[3]+0x00000008u); // 8031AD74
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8031AD78
  c->r[0]=0u+0x00000002u; // 8031AD7C
  W16(c->r[7]+0x000018F6u,c->r[8]); // 8031AD80
  W32(c->r[7]+0x000018F8u,c->r[6]); // 8031AD84
  W32(c->r[7]+0x000018FCu,c->r[5]); // 8031AD88
  W32(c->r[7]+0x00001900u,c->r[4]); // 8031AD8C
  W32(c->r[7]+0x00001904u,c->r[3]); // 8031AD90
  W8(c->r[7]+0x00001909u,c->r[0]); // 8031AD94
  return; // 8031AD98
}

// btm_esco_conn_rsp
void f_8031AD9C(Ctx* __restrict c) {
  trace_call(0x8031AD9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031AD9C
  c->r[0]=c->lr; // 8031ADA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031ADA4
  c->r[11]=c->r[1]+0x00000020u; // 8031ADA8
  c->lr=0x8031ADB0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031ADAC
  c->r[26]=c->r[3]|c->r[3]; // 8031ADB0
  c->r[27]=c->r[4]|c->r[4]; // 8031ADB4
  c->r[29]=c->r[5]|c->r[5]; // 8031ADB8
  c->r[28]=c->r[6]|c->r[6]; // 8031ADBC
  c->r[31]=0u+0x00000000u; // 8031ADC0
  c->r[3]=0u+0x00000002u; // 8031ADC4
  c->lr=0x8031ADCCu; f_8030AF24(c); // 8031ADC8
  cmps(c,0,(int32_t)c->r[3],0); // 8031ADCC
  c->r[30]=c->r[3]|c->r[3]; // 8031ADD0
  if (!crb(c,2)) { goto L_8031AE00; } // 8031ADD4
  c->r[3]=0u+0x80570000u; // 8031ADD8
  c->r[3]=c->r[3]+0x000058F8u; // 8031ADDC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031ADE0
  cmpu(c,0,c->r[0],0x00000001u); // 8031ADE4
  if (crb(c,0)) { goto L_8031AF60; } // 8031ADE8
  c->r[4]=0u+0x80490000u; // 8031ADEC
  c->r[3]=0u+0x000D0000u; // 8031ADF0
  c->r[4]=c->r[4]+0x000000F8u; // 8031ADF4
  c->lr=0x8031ADFCu; f_8030E1E8(c); // 8031ADF8
  goto L_8031AF60; // 8031ADFC
L_8031AE00:;
  cmpu(c,0,c->r[26],0x00000003u); // 8031AE00
  if (!crb(c,0)) { goto L_8031AE1C; } // 8031AE04
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)52); // 8031AE08
  c->r[3]=0u+0x80570000u; // 8031AE0C
  c->r[3]=c->r[3]+0x000058F8u; // 8031AE10
  c->r[3]=c->r[3]+c->r[0]; // 8031AE14
  c->r[31]=c->r[3]+0x00001854u; // 8031AE18
L_8031AE1C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8031AE1C
  if (crb(c,2)) { goto L_8031AE7C; } // 8031AE20
  cmps(c,0,(int32_t)c->r[31],0); // 8031AE24
  if (crb(c,2)) { goto L_8031AE40; } // 8031AE28
  c->r[3]=R16(c->r[31]+0x00000008u); // 8031AE2C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8031AE30
  c->r[0]=cntlz(c->r[0]); // 8031AE34
  c->r[0]=rotl(c->r[0],27)&0x0000FFFFu; // 8031AE38
  W16(c->r[31]+0x00000008u,c->r[0]); // 8031AE3C
L_8031AE40:;
  c->r[3]=0u+0x80570000u; // 8031AE40
  c->r[3]=c->r[3]+0x000058F8u; // 8031AE44
  c->r[0]=R8(c->r[3]+0x00001908u); // 8031AE48
  cmps(c,0,(int32_t)c->r[0],0); // 8031AE4C
  if (!crb(c,2)) { goto L_8031AE68; } // 8031AE50
  c->r[3]=c->r[30]|c->r[30]; // 8031AE54
  c->r[4]=c->r[29]|c->r[29]; // 8031AE58
  c->r[5]=c->r[27]|c->r[27]; // 8031AE5C
  c->lr=0x8031AE64u; f_803214DC(c); // 8031AE60
  goto L_8031AF60; // 8031AE64
L_8031AE68:;
  c->r[3]=c->r[30]|c->r[30]; // 8031AE68
  c->r[4]=c->r[29]|c->r[29]; // 8031AE6C
  c->r[5]=c->r[27]|c->r[27]; // 8031AE70
  c->lr=0x8031AE78u; f_80322064(c); // 8031AE74
  goto L_8031AF60; // 8031AE78
L_8031AE7C:;
  c->r[3]=0u+0x00000001u; // 8031AE7C
  c->lr=0x8031AE84u; f_80316228(c); // 8031AE80
  c->r[0]=0u+0x00000003u; // 8031AE84
  c->r[3]=0u+0x80570000u; // 8031AE88
  W16(c->r[31]+0x00000008u,c->r[0]); // 8031AE8C
  c->r[3]=c->r[3]+0x000058F8u; // 8031AE90
  c->r[0]=R8(c->r[3]+0x00001908u); // 8031AE94
  cmps(c,0,(int32_t)c->r[0],0); // 8031AE98
  if (crb(c,2)) { goto L_8031AF50; } // 8031AE9C
  c->r[0]=R8(c->r[31]+0x0000002Eu); // 8031AEA0
  cmpu(c,0,c->r[0],0x00000002u); // 8031AEA4
  if (!crb(c,2)) { goto L_8031AF50; } // 8031AEA8
  cmps(c,0,(int32_t)c->r[28],0); // 8031AEAC
  if (crb(c,2)) { goto L_8031AED4; } // 8031AEB0
  c->r[3]=R32(c->r[28]+0x00000000u); // 8031AEB4
  c->r[0]=R32(c->r[28]+0x00000004u); // 8031AEB8
  W32(c->r[31]+0x00000014u,c->r[3]); // 8031AEBC
  W32(c->r[31]+0x00000018u,c->r[0]); // 8031AEC0
  c->r[3]=R32(c->r[28]+0x00000008u); // 8031AEC4
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 8031AEC8
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 8031AECC
  W32(c->r[31]+0x00000020u,c->r[0]); // 8031AED0
L_8031AED4:;
  c->r[3]=0u+0x80570000u; // 8031AED4
  c->r[3]=c->r[3]+0x000058F8u; // 8031AED8
  c->r[4]=R16(c->r[3]+0x00001904u); // 8031AEDC
  W16(c->r[31]+0x00000020u,c->r[4]); // 8031AEE0
  c->r[5]=R16(c->r[3]+0x00000656u); // 8031AEE4
  c->r[3]=c->r[4]&c->r[5]; // 8031AEE8
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 8031AEEC
  c->r[28]=rotl(c->r[3],0)&0x0000003Fu; // 8031AEF0
  if (!crb(c,2)) { goto L_8031AF00; } // 8031AEF4
  c->r[0]=c->r[28]|0x00000008u; // 8031AEF8
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 8031AEFC
L_8031AF00:;
  c->r[3]=0u+0x80570000u; // 8031AF00
  c->r[3]=c->r[3]+0x000058F8u; // 8031AF04
  c->r[0]=R8(c->r[3]+0x00000636u); // 8031AF08
  cmpu(c,0,c->r[0],0x00000003u); // 8031AF0C
  if (crb(c,0)) { goto L_8031AF24; } // 8031AF10
  c->r[0]=c->r[4]|c->r[5]; // 8031AF14
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 8031AF18
  c->r[0]=c->r[28]|c->r[0]; // 8031AF1C
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 8031AF20
L_8031AF24:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 8031AF24
  c->r[3]=c->r[30]|c->r[30]; // 8031AF28
  c->r[6]=R32(c->r[31]+0x00000018u); // 8031AF2C
  c->r[4]=c->r[29]|c->r[29]; // 8031AF30
  c->r[7]=R16(c->r[31]+0x0000001Cu); // 8031AF34
  c->r[10]=rotl(c->r[28],0)&0x0000FFFFu; // 8031AF38
  c->r[8]=R16(c->r[31]+0x0000001Eu); // 8031AF3C
  c->r[9]=R8(c->r[31]+0x00000022u); // 8031AF40
  c->lr=0x8031AF48u; f_80321F7C(c); // 8031AF44
  W16(c->r[31]+0x00000020u,c->r[28]); // 8031AF48
  goto L_8031AF60; // 8031AF4C
L_8031AF50:;
  c->r[3]=c->r[30]|c->r[30]; // 8031AF50
  c->r[4]=c->r[29]|c->r[29]; // 8031AF54
  c->r[5]=0u+0x00000000u; // 8031AF58
  c->lr=0x8031AF60u; f_8032147C(c); // 8031AF5C
L_8031AF60:;
  c->r[11]=c->r[1]+0x00000020u; // 8031AF60
  c->lr=0x8031AF68u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031AF64
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031AF68
  c->lr=c->r[0]; // 8031AF6C
  c->r[1]=c->r[1]+0x00000020u; // 8031AF70
  return; // 8031AF74
}

// btm_sco_chk_pend_unpark
void f_8031AF78(Ctx* __restrict c) {
  trace_call(0x8031AF78u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031AF78
  c->r[0]=c->lr; // 8031AF7C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8031AF80
  c->r[11]=c->r[1]+0x00000040u; // 8031AF84
  c->lr=0x8031AF8Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031AF88
  c->r[28]=0u+0x80570000u; // 8031AF8C
  c->r[23]=c->r[3]|c->r[3]; // 8031AF90
  c->r[28]=c->r[28]+0x000058F8u; // 8031AF94
  c->r[24]=c->r[4]|c->r[4]; // 8031AF98
  c->r[25]=c->r[5]|c->r[5]; // 8031AF9C
  c->r[27]=0u+0x00000000u; // 8031AFA0
  c->r[26]=c->r[28]+0x00001854u; // 8031AFA4
  c->r[30]=0u+0x000D0000u; // 8031AFA8
  c->r[31]=0u+0x80490000u; // 8031AFAC
  c->r[21]=0u+0x80490000u; // 8031AFB0
  c->r[22]=0u+0x00000003u; // 8031AFB4
L_8031AFB8:;
  c->r[0]=R16(c->r[26]+0x00000008u); // 8031AFB8
  cmpu(c,0,c->r[0],0x00000006u); // 8031AFBC
  if (!crb(c,2)) { goto L_8031B0DC; } // 8031AFC0
  cmps(c,0,(int32_t)c->r[25],0); // 8031AFC4
  if (!crb(c,2)) { goto L_8031B0DC; } // 8031AFC8
  cmps(c,0,(int32_t)c->r[23],0); // 8031AFCC
  if (!crb(c,2)) { goto L_8031B0DC; } // 8031AFD0
  c->r[3]=c->r[26]+0x00000028u; // 8031AFD4
  c->lr=0x8031AFDCu; f_8031567C(c); // 8031AFD8
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 8031AFDC
  c->r[29]=c->r[3]|c->r[3]; // 8031AFE0
  cmpu(c,0,c->r[24],c->r[5]); // 8031AFE4
  if (!crb(c,2)) { goto L_8031B0DC; } // 8031AFE8
  c->r[0]=R8(c->r[28]+0x000027C0u); // 8031AFEC
  cmpu(c,0,c->r[0],0x00000003u); // 8031AFF0
  if (crb(c,0)) { goto L_8031B008; } // 8031AFF4
  c->r[6]=R8(c->r[28]+0x00001909u); // 8031AFF8
  c->r[3]=c->r[30]+0x00000002u; // 8031AFFC
  c->r[4]=c->r[31]+0x000001D4u; // 8031B000
  c->lr=0x8031B008u; f_8030E218(c); // 8031B004
L_8031B008:;
  c->r[3]=0u+0x00000001u; // 8031B008
  c->lr=0x8031B010u; f_80316228(c); // 8031B00C
  c->r[0]=R8(c->r[28]+0x00001908u); // 8031B010
  cmps(c,0,(int32_t)c->r[0],0); // 8031B014
  if (!crb(c,2)) { goto L_8031B03C; } // 8031B018
  c->r[0]=R16(c->r[26]+0x00000020u); // 8031B01C
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 8031B020
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 8031B024
  c->lr=0x8031B02Cu; f_803213F0(c); // 8031B028
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031B02C
  if (!crb(c,2)) { goto L_8031B0CC; } // 8031B030
  c->r[0]=0u+0x00000003u; // 8031B034
  goto L_8031B0D0; // 8031B038
L_8031B03C:;
  c->r[0]=R8(c->r[28]+0x00000636u); // 8031B03C
  c->r[3]=R16(c->r[28]+0x00000656u); // 8031B040
  c->r[4]=R16(c->r[26]+0x00000020u); // 8031B044
  cmpu(c,0,c->r[0],0x00000003u); // 8031B048
  c->r[0]=c->r[4]&c->r[3]; // 8031B04C
  c->r[20]=rotl(c->r[0],0)&0x0000003Fu; // 8031B050
  if (crb(c,0)) { goto L_8031B068; } // 8031B054
  c->r[0]=c->r[4]|c->r[3]; // 8031B058
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 8031B05C
  c->r[0]=c->r[20]|c->r[0]; // 8031B060
  c->r[20]=rotl(c->r[0],0)&0x0000FFFFu; // 8031B064
L_8031B068:;
  c->r[0]=R8(c->r[28]+0x000027C0u); // 8031B068
  cmpu(c,0,c->r[0],0x00000003u); // 8031B06C
  if (crb(c,0)) { goto L_8031B098; } // 8031B070
  c->r[5]=R32(c->r[26]+0x00000014u); // 8031B074
  c->r[3]=c->r[30]+0x00000002u; // 8031B078
  c->r[6]=R32(c->r[26]+0x00000018u); // 8031B07C
  c->r[4]=c->r[21]+0x00000184u; // 8031B080
  c->r[7]=R16(c->r[26]+0x0000001Cu); // 8031B084
  c->r[10]=rotl(c->r[20],0)&0x0000FFFFu; // 8031B088
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 8031B08C
  c->r[9]=R8(c->r[26]+0x00000022u); // 8031B090
  c->lr=0x8031B098u; f_8030E278(c); // 8031B094
L_8031B098:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 8031B098
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 8031B09C
  c->r[5]=R32(c->r[26]+0x00000018u); // 8031B0A0
  c->r[9]=rotl(c->r[20],0)&0x0000FFFFu; // 8031B0A4
  c->r[6]=R16(c->r[26]+0x0000001Cu); // 8031B0A8
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 8031B0AC
  c->r[8]=R8(c->r[26]+0x00000022u); // 8031B0B0
  c->lr=0x8031B0B8u; f_80321E80(c); // 8031B0B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031B0B8
  if (!crb(c,2)) { goto L_8031B0C8; } // 8031B0BC
  c->r[0]=0u+0x00000003u; // 8031B0C0
  goto L_8031B0D0; // 8031B0C4
L_8031B0C8:;
  W16(c->r[26]+0x00000020u,c->r[20]); // 8031B0C8
L_8031B0CC:;
  c->r[0]=0u+0x00000001u; // 8031B0CC
L_8031B0D0:;
  cmpu(c,0,c->r[0],0x00000001u); // 8031B0D0
  if (!crb(c,2)) { goto L_8031B0DC; } // 8031B0D4
  W16(c->r[26]+0x00000008u,c->r[22]); // 8031B0D8
L_8031B0DC:;
  c->r[27]=c->r[27]+0x00000001u; // 8031B0DC
  c->r[26]=c->r[26]+0x00000034u; // 8031B0E0
  cmpu(c,0,c->r[27],0x00000003u); // 8031B0E4
  if (crb(c,0)) { IRQCHK(c); goto L_8031AFB8; } // 8031B0E8
  c->r[11]=c->r[1]+0x00000040u; // 8031B0EC
  c->lr=0x8031B0F4u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031B0F0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8031B0F4
  c->lr=c->r[0]; // 8031B0F8
  c->r[1]=c->r[1]+0x00000040u; // 8031B0FC
  return; // 8031B100
}

// btm_sco_conn_req
void f_8031B104(Ctx* __restrict c) {
  trace_call(0x8031B104u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B104
  c->r[0]=c->lr; // 8031B108
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031B10C
  c->r[11]=c->r[1]+0x00000030u; // 8031B110
  c->lr=0x8031B118u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031B114
  c->r[6]=0u+0x80570000u; // 8031B118
  c->r[30]=c->r[3]|c->r[3]; // 8031B11C
  c->r[6]=c->r[6]+0x000058F8u; // 8031B120
  c->r[29]=c->r[4]|c->r[4]; // 8031B124
  c->r[31]=c->r[5]|c->r[5]; // 8031B128
  c->r[28]=0u+0x00000000u; // 8031B12C
  c->r[27]=c->r[6]+0x00001854u; // 8031B130
L_8031B134:;
  c->r[3]=R16(c->r[27]+0x00000008u); // 8031B134
  cmpu(c,0,c->r[3],0x00000001u); // 8031B138
  if (!crb(c,2)) { goto L_8031B14C; } // 8031B13C
  c->r[0]=R8(c->r[27]+0x0000000Du); // 8031B140
  cmps(c,0,(int32_t)c->r[0],0); // 8031B144
  if (!crb(c,2)) { goto L_8031B154; } // 8031B148
L_8031B14C:;
  cmpu(c,0,c->r[3],0x00000003u); // 8031B14C
  if (!crb(c,2)) { goto L_8031B1F4; } // 8031B150
L_8031B154:;
  c->r[4]=c->r[30]|c->r[30]; // 8031B154
  c->r[3]=c->r[27]+0x00000028u; // 8031B158
  c->r[5]=0u+0x00000006u; // 8031B15C
  c->lr=0x8031B164u; f_802E54DC(c); // 8031B160
  cmps(c,0,(int32_t)c->r[3],0); // 8031B164
  if (!crb(c,2)) { goto L_8031B1F4; } // 8031B168
  c->r[0]=0u+0x00000001u; // 8031B16C
  c->r[4]=c->r[30]|c->r[30]; // 8031B170
  W8(c->r[27]+0x0000000Du,c->r[0]); // 8031B174
  c->r[3]=c->r[27]+0x00000028u; // 8031B178
  c->r[5]=0u+0x00000006u; // 8031B17C
  W8(c->r[27]+0x0000002Eu,c->r[31]); // 8031B180
  c->lr=0x8031B188u; f_80005FB4(c); // 8031B184
  c->r[0]=R32(c->r[27]+0x00000010u); // 8031B188
  cmps(c,0,(int32_t)c->r[0],0); // 8031B18C
  if (!crb(c,2)) { goto L_8031B1AC; } // 8031B190
  c->r[5]=c->r[30]|c->r[30]; // 8031B194
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 8031B198
  c->r[4]=0u+0x00000000u; // 8031B19C
  c->r[6]=0u+0x00000000u; // 8031B1A0
  c->lr=0x8031B1A8u; f_8031AD9C(c); // 8031B1A4
  goto L_8031B2CC; // 8031B1A8
L_8031B1AC:;
  c->r[4]=c->r[30]|c->r[30]; // 8031B1AC
  c->r[3]=c->r[1]+0x0000000Au; // 8031B1B0
  c->r[5]=0u+0x00000006u; // 8031B1B4
  c->lr=0x8031B1BCu; f_80005FB4(c); // 8031B1B8
  c->r[4]=c->r[29]|c->r[29]; // 8031B1BC
  c->r[3]=c->r[1]+0x00000010u; // 8031B1C0
  c->r[5]=0u+0x00000003u; // 8031B1C4
  c->lr=0x8031B1CCu; f_80005FB4(c); // 8031B1C8
  c->r[0]=0u+0x00000002u; // 8031B1CC
  W8(c->r[1]+0x00000013u,c->r[31]); // 8031B1D0
  c->r[4]=c->r[1]+0x00000008u; // 8031B1D4
  c->r[3]=0u+0x00000002u; // 8031B1D8
  W16(c->r[27]+0x00000008u,c->r[0]); // 8031B1DC
  c->r[12]=R32(c->r[27]+0x00000010u); // 8031B1E0
  W16(c->r[1]+0x00000008u,c->r[28]); // 8031B1E4
  c->ctr=c->r[12]; // 8031B1E8
  if (true) { c->lr=0x8031B1F0u; dispatch(c,c->ctr); } // 8031B1EC
  goto L_8031B2CC; // 8031B1F0
L_8031B1F4:;
  c->r[28]=c->r[28]+0x00000001u; // 8031B1F4
  c->r[27]=c->r[27]+0x00000034u; // 8031B1F8
  cmpu(c,0,c->r[28],0x00000003u); // 8031B1FC
  if (crb(c,0)) { IRQCHK(c); goto L_8031B134; } // 8031B200
  c->r[3]=0u+0x80570000u; // 8031B204
  c->r[3]=c->r[3]+0x000058F8u; // 8031B208
  c->r[0]=R32(c->r[3]+0x00001850u); // 8031B20C
  cmps(c,0,(int32_t)c->r[0],0); // 8031B210
  if (crb(c,2)) { goto L_8031B290; } // 8031B214
  c->r[0]=0u+0x00000003u; // 8031B218
  c->r[28]=c->r[3]+0x00001854u; // 8031B21C
  c->r[27]=0u+0x00000000u; // 8031B220
  c->ctr=c->r[0]; // 8031B224
L_8031B228:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 8031B228
  cmps(c,0,(int32_t)c->r[0],0); // 8031B22C
  if (!crb(c,2)) { goto L_8031B260; } // 8031B230
  c->r[0]=0u+0x00000000u; // 8031B234
  c->r[29]=0u+0x00000001u; // 8031B238
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 8031B23C
  c->r[4]=c->r[30]|c->r[30]; // 8031B240
  c->r[3]=c->r[28]+0x00000028u; // 8031B244
  c->r[5]=0u+0x00000006u; // 8031B248
  W16(c->r[28]+0x00000008u,c->r[29]); // 8031B24C
  W8(c->r[28]+0x0000002Eu,c->r[31]); // 8031B250
  c->lr=0x8031B258u; f_80005FB4(c); // 8031B254
  W8(c->r[28]+0x0000000Du,c->r[29]); // 8031B258
  goto L_8031B26C; // 8031B25C
L_8031B260:;
  c->r[27]=c->r[27]+0x00000001u; // 8031B260
  c->r[28]=c->r[28]+0x00000034u; // 8031B264
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031B228; } // 8031B268
L_8031B26C:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 8031B26C
  cmpu(c,0,c->r[3],0x00000003u); // 8031B270
  if (!crb(c,0)) { goto L_8031B290; } // 8031B274
  c->r[4]=0u+0x80570000u; // 8031B278
  c->r[4]=c->r[4]+0x000058F8u; // 8031B27C
  c->r[12]=R32(c->r[4]+0x00001850u); // 8031B280
  c->ctr=c->r[12]; // 8031B284
  if (true) { c->lr=0x8031B28Cu; dispatch(c,c->ctr); } // 8031B288
  goto L_8031B2CC; // 8031B28C
L_8031B290:;
  c->r[3]=0u+0x80570000u; // 8031B290
  c->r[3]=c->r[3]+0x000058F8u; // 8031B294
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031B298
  cmpu(c,0,c->r[0],0x00000002u); // 8031B29C
  if (crb(c,0)) { goto L_8031B2B8; } // 8031B2A0
  c->r[3]=0u+0x000D0000u; // 8031B2A4
  c->r[4]=0u+0x80490000u; // 8031B2A8
  c->r[3]=c->r[3]+0x00000001u; // 8031B2AC
  c->r[4]=c->r[4]+0x00000224u; // 8031B2B0
  c->lr=0x8031B2B8u; f_8030E1E8(c); // 8031B2B4
L_8031B2B8:;
  c->r[5]=c->r[30]|c->r[30]; // 8031B2B8
  c->r[3]=0u+0x00000003u; // 8031B2BC
  c->r[4]=0u+0x0000000Du; // 8031B2C0
  c->r[6]=0u+0x00000000u; // 8031B2C4
  c->lr=0x8031B2CCu; f_8031AD9C(c); // 8031B2C8
L_8031B2CC:;
  c->r[11]=c->r[1]+0x00000030u; // 8031B2CC
  c->lr=0x8031B2D4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031B2D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031B2D4
  c->lr=c->r[0]; // 8031B2D8
  c->r[1]=c->r[1]+0x00000030u; // 8031B2DC
  return; // 8031B2E0
}

// btm_sco_connected
void f_8031B2E4(Ctx* __restrict c) {
  trace_call(0x8031B2E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B2E4
  c->r[0]=c->lr; // 8031B2E8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031B2EC
  c->r[11]=c->r[1]+0x00000030u; // 8031B2F0
  c->lr=0x8031B2F8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031B2F4
  c->r[7]=0u+0x80570000u; // 8031B2F8
  c->r[24]=c->r[3]|c->r[3]; // 8031B2FC
  c->r[7]=c->r[7]+0x000058F8u; // 8031B300
  c->r[25]=c->r[4]|c->r[4]; // 8031B304
  W16(c->r[7]+0x000018F6u,c->r[3]); // 8031B308
  c->r[26]=c->r[5]|c->r[5]; // 8031B30C
  c->r[29]=c->r[6]|c->r[6]; // 8031B310
  c->r[31]=c->r[7]+0x00001854u; // 8031B314
  c->r[27]=0u+0x00000000u; // 8031B318
  c->r[30]=0u+0x00000000u; // 8031B31C
L_8031B320:;
  c->r[28]=R16(c->r[31]+0x00000008u); // 8031B320
  c->r[3]=c->r[28]+0x00010000u; // 8031B324
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8031B328
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8031B32C
  cmpu(c,0,c->r[0],0x00000002u); // 8031B330
  if (crb(c,1)) { goto L_8031B45C; } // 8031B334
  c->r[0]=R8(c->r[31]+0x0000000Du); // 8031B338
  cmps(c,0,(int32_t)c->r[0],0); // 8031B33C
  if (crb(c,2)) { goto L_8031B45C; } // 8031B340
  cmps(c,0,(int32_t)c->r[25],0); // 8031B344
  if (crb(c,2)) { goto L_8031B364; } // 8031B348
  c->r[4]=c->r[25]|c->r[25]; // 8031B34C
  c->r[3]=c->r[31]+0x00000028u; // 8031B350
  c->r[5]=0u+0x00000006u; // 8031B354
  c->lr=0x8031B35Cu; f_802E54DC(c); // 8031B358
  cmps(c,0,(int32_t)c->r[3],0); // 8031B35C
  if (!crb(c,2)) { goto L_8031B45C; } // 8031B360
L_8031B364:;
  cmps(c,0,(int32_t)c->r[24],0); // 8031B364
  if (crb(c,2)) { goto L_8031B3A4; } // 8031B368
  cmpu(c,0,c->r[28],0x00000003u); // 8031B36C
  if (!crb(c,2)) { goto L_8031B398; } // 8031B370
  cmpu(c,0,c->r[24],0x00000023u); // 8031B374
  if (crb(c,2)) { goto L_8031B46C; } // 8031B378
  c->r[0]=0u+0x00000000u; // 8031B37C
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8031B380
  W16(c->r[31]+0x00000008u,c->r[0]); // 8031B384
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031B388
  c->ctr=c->r[12]; // 8031B38C
  if (true) { c->lr=0x8031B394u; dispatch(c,c->ctr); } // 8031B390
  goto L_8031B46C; // 8031B394
L_8031B398:;
  c->r[0]=0u+0x00000001u; // 8031B398
  W16(c->r[31]+0x00000008u,c->r[0]); // 8031B39C
  goto L_8031B46C; // 8031B3A0
L_8031B3A4:;
  cmpu(c,0,c->r[28],0x00000001u); // 8031B3A4
  if (!crb(c,2)) { goto L_8031B3B0; } // 8031B3A8
  c->r[27]=0u+0x00000001u; // 8031B3AC
L_8031B3B0:;
  c->r[0]=0u+0x00000004u; // 8031B3B0
  c->r[3]=0u+0x80570000u; // 8031B3B4
  W16(c->r[31]+0x00000008u,c->r[0]); // 8031B3B8
  c->r[3]=c->r[3]+0x000058F8u; // 8031B3BC
  W16(c->r[31]+0x0000000Au,c->r[26]); // 8031B3C0
  c->r[0]=R8(c->r[3]+0x00001908u); // 8031B3C4
  cmps(c,0,(int32_t)c->r[0],0); // 8031B3C8
  if (!crb(c,2)) { goto L_8031B408; } // 8031B3CC
  c->r[0]=0u+0x00000000u; // 8031B3D0
  cmps(c,0,(int32_t)c->r[27],0); // 8031B3D4
  W8(c->r[31]+0x0000002Eu,c->r[0]); // 8031B3D8
  if (crb(c,2)) { goto L_8031B448; } // 8031B3DC
  c->r[6]=R16(c->r[31]+0x00000020u); // 8031B3E0
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8031B3E4
  c->r[5]=R16(c->r[31]+0x0000001Cu); // 8031B3E8
  c->r[4]=c->r[1]+0x00000008u; // 8031B3EC
  c->r[0]=R8(c->r[31]+0x00000022u); // 8031B3F0
  W16(c->r[1]+0x0000000Au,c->r[6]); // 8031B3F4
  W16(c->r[1]+0x00000008u,c->r[5]); // 8031B3F8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8031B3FC
  c->lr=0x8031B404u; f_8031B78C(c); // 8031B400
  goto L_8031B448; // 8031B404
L_8031B408:;
  cmps(c,0,(int32_t)c->r[29],0); // 8031B408
  if (crb(c,2)) { goto L_8031B448; } // 8031B40C
  c->r[3]=R16(c->r[29]+0x00000000u); // 8031B410
  c->r[0]=R16(c->r[29]+0x00000002u); // 8031B414
  W16(c->r[31]+0x00000024u,c->r[3]); // 8031B418
  W16(c->r[31]+0x00000026u,c->r[0]); // 8031B41C
  c->r[3]=R16(c->r[29]+0x00000004u); // 8031B420
  c->r[0]=R16(c->r[29]+0x00000006u); // 8031B424
  W16(c->r[31]+0x00000028u,c->r[3]); // 8031B428
  W16(c->r[31]+0x0000002Au,c->r[0]); // 8031B42C
  c->r[0]=R16(c->r[29]+0x00000008u); // 8031B430
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 8031B434
  c->r[0]=R16(c->r[29]+0x0000000Au); // 8031B438
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 8031B43C
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 8031B440
  W16(c->r[31]+0x00000030u,c->r[0]); // 8031B444
L_8031B448:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8031B448
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8031B44C
  c->ctr=c->r[12]; // 8031B450
  if (true) { c->lr=0x8031B458u; dispatch(c,c->ctr); } // 8031B454
  goto L_8031B46C; // 8031B458
L_8031B45C:;
  c->r[30]=c->r[30]+0x00000001u; // 8031B45C
  c->r[31]=c->r[31]+0x00000034u; // 8031B460
  cmpu(c,0,c->r[30],0x00000003u); // 8031B464
  if (crb(c,0)) { IRQCHK(c); goto L_8031B320; } // 8031B468
L_8031B46C:;
  c->r[11]=c->r[1]+0x00000030u; // 8031B46C
  c->lr=0x8031B474u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031B470
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031B474
  c->lr=c->r[0]; // 8031B478
  c->r[1]=c->r[1]+0x00000030u; // 8031B47C
  return; // 8031B480
}

// BTM_RemoveSco
void f_8031B484(Ctx* __restrict c) {
  trace_call(0x8031B484u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B484
  c->r[0]=c->lr; // 8031B488
  c->r[4]=0u+0x80570000u; // 8031B48C
  cmpu(c,0,c->r[3],0x00000003u); // 8031B490
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031B494
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8031B498
  c->r[4]=c->r[4]+0x000058F8u; // 8031B49C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031B4A0
  c->r[31]=c->r[4]+c->r[0]; // 8031B4A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031B4A8
  if (!crb(c,0)) { goto L_8031B4BC; } // 8031B4AC
  c->r[30]=R16(c->r[31]+0x0000185Cu); // 8031B4B0
  cmps(c,0,(int32_t)c->r[30],0); // 8031B4B4
  if (!crb(c,2)) { goto L_8031B4C4; } // 8031B4B8
L_8031B4BC:;
  c->r[3]=0u+0x00000007u; // 8031B4BC
  goto L_8031B524; // 8031B4C0
L_8031B4C4:;
  c->r[0]=R16(c->r[31]+0x0000185Eu); // 8031B4C4
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031B4C8
  if (crb(c,2)) { goto L_8031B4D8; } // 8031B4CC
  cmpu(c,0,c->r[30],0x00000006u); // 8031B4D0
  if (!crb(c,2)) { goto L_8031B4F8; } // 8031B4D4
L_8031B4D8:;
  c->r[3]=0u+0x00010000u; // 8031B4D8
  c->r[0]=0u+0x00000000u; // 8031B4DC
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8031B4E0
  W16(c->r[31]+0x0000185Eu,c->r[4]); // 8031B4E4
  c->r[3]=0u+0x00000000u; // 8031B4E8
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 8031B4EC
  W32(c->r[31]+0x00001864u,c->r[0]); // 8031B4F0
  goto L_8031B524; // 8031B4F4
L_8031B4F8:;
  c->r[0]=0u+0x00000005u; // 8031B4F8
  c->r[4]=0u+0x00000013u; // 8031B4FC
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 8031B500
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 8031B504
  c->lr=0x8031B50Cu; f_80321368(c); // 8031B508
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031B50C
  if (!crb(c,2)) { goto L_8031B520; } // 8031B510
  W16(c->r[31]+0x0000185Cu,c->r[30]); // 8031B514
  c->r[3]=0u+0x00000003u; // 8031B518
  goto L_8031B524; // 8031B51C
L_8031B520:;
  c->r[3]=0u+0x00000001u; // 8031B520
L_8031B524:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031B524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031B528
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031B52C
  c->lr=c->r[0]; // 8031B530
  c->r[1]=c->r[1]+0x00000010u; // 8031B534
  return; // 8031B538
}

// btm_remove_sco_links
void f_8031B53C(Ctx* __restrict c) {
  trace_call(0x8031B53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B53C
  c->r[0]=c->lr; // 8031B540
  c->r[4]=0u+0x80570000u; // 8031B544
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031B548
  c->r[4]=c->r[4]+0x000058F8u; // 8031B54C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031B550
  c->r[31]=c->r[4]+0x00001854u; // 8031B554
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031B558
  c->r[30]=0u+0x00000000u; // 8031B55C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031B560
  c->r[29]=c->r[3]|c->r[3]; // 8031B564
L_8031B568:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 8031B568
  cmps(c,0,(int32_t)c->r[0],0); // 8031B56C
  if (crb(c,2)) { goto L_8031B594; } // 8031B570
  c->r[4]=c->r[29]|c->r[29]; // 8031B574
  c->r[3]=c->r[31]+0x00000028u; // 8031B578
  c->r[5]=0u+0x00000006u; // 8031B57C
  c->lr=0x8031B584u; f_802E54DC(c); // 8031B580
  cmps(c,0,(int32_t)c->r[3],0); // 8031B584
  if (!crb(c,2)) { goto L_8031B594; } // 8031B588
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8031B58C
  c->lr=0x8031B594u; f_8031B484(c); // 8031B590
L_8031B594:;
  c->r[30]=c->r[30]+0x00000001u; // 8031B594
  c->r[31]=c->r[31]+0x00000034u; // 8031B598
  cmpu(c,0,c->r[30],0x00000003u); // 8031B59C
  if (crb(c,0)) { IRQCHK(c); goto L_8031B568; } // 8031B5A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031B5A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031B5A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031B5AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031B5B0
  c->lr=c->r[0]; // 8031B5B4
  c->r[1]=c->r[1]+0x00000020u; // 8031B5B8
  return; // 8031B5BC
}

// btm_sco_removed
void f_8031B5C0(Ctx* __restrict c) {
  trace_call(0x8031B5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B5C0
  c->r[0]=c->lr; // 8031B5C4
  c->r[5]=0u+0x80570000u; // 8031B5C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031B5CC
  c->r[5]=c->r[5]+0x000058F8u; // 8031B5D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031B5D4
  c->r[31]=c->r[3]|c->r[3]; // 8031B5D8
  c->r[3]=0u+0x00000000u; // 8031B5DC
  W16(c->r[5]+0x000018F6u,c->r[4]); // 8031B5E0
  c->r[0]=R16(c->r[5]+0x0000185Cu); // 8031B5E4
  cmps(c,0,(int32_t)c->r[0],7); // 8031B5E8
  if (!crb(c,0)) { goto L_8031B600; } // 8031B5EC
  cmps(c,0,(int32_t)c->r[0],2); // 8031B5F0
  if (!crb(c,0)) { goto L_8031B5FC; } // 8031B5F4
  goto L_8031B600; // 8031B5F8
L_8031B5FC:;
  c->r[3]=0u+0x00000001u; // 8031B5FC
L_8031B600:;
  c->r[0]=R16(c->r[5]+0x00001890u); // 8031B600
  cmps(c,0,(int32_t)c->r[0],7); // 8031B604
  if (!crb(c,0)) { goto L_8031B61C; } // 8031B608
  cmps(c,0,(int32_t)c->r[0],2); // 8031B60C
  if (!crb(c,0)) { goto L_8031B618; } // 8031B610
  goto L_8031B61C; // 8031B614
L_8031B618:;
  c->r[3]=c->r[3]+0x00000001u; // 8031B618
L_8031B61C:;
  c->r[0]=R16(c->r[5]+0x000018C4u); // 8031B61C
  cmps(c,0,(int32_t)c->r[0],7); // 8031B620
  if (!crb(c,0)) { goto L_8031B638; } // 8031B624
  cmps(c,0,(int32_t)c->r[0],2); // 8031B628
  if (!crb(c,0)) { goto L_8031B634; } // 8031B62C
  goto L_8031B638; // 8031B630
L_8031B634:;
  c->r[3]=c->r[3]+0x00000001u; // 8031B634
L_8031B638:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031B638
  cmpu(c,0,c->r[0],0x00000001u); // 8031B63C
  if (crb(c,1)) { goto L_8031B64C; } // 8031B640
  c->r[3]=0u+0x00000000u; // 8031B644
  c->lr=0x8031B64Cu; f_80316228(c); // 8031B648
L_8031B64C:;
  c->r[3]=0u+0x80570000u; // 8031B64C
  c->r[0]=0u+0x00000003u; // 8031B650
  c->r[3]=c->r[3]+0x000058F8u; // 8031B654
  c->r[6]=0u+0x00000000u; // 8031B658
  c->r[5]=c->r[3]+0x00001854u; // 8031B65C
  c->ctr=c->r[0]; // 8031B660
L_8031B664:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 8031B664
  cmps(c,0,(int32_t)c->r[0],0); // 8031B668
  if (crb(c,2)) { goto L_8031B6B4; } // 8031B66C
  cmpu(c,0,c->r[0],0x00000001u); // 8031B670
  if (crb(c,2)) { goto L_8031B6B4; } // 8031B674
  c->r[0]=R16(c->r[5]+0x0000000Au); // 8031B678
  cmpu(c,0,c->r[0],c->r[31]); // 8031B67C
  if (!crb(c,2)) { goto L_8031B6B4; } // 8031B680
  c->r[4]=0u+0x00000000u; // 8031B684
  c->r[3]=0u+0x00010000u; // 8031B688
  W16(c->r[5]+0x00000008u,c->r[4]); // 8031B68C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8031B690
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 8031B694
  W16(c->r[5]+0x0000000Au,c->r[0]); // 8031B698
  W8(c->r[5]+0x0000000Du,c->r[4]); // 8031B69C
  W32(c->r[5]+0x00000010u,c->r[4]); // 8031B6A0
  c->r[12]=R32(c->r[5]+0x00000004u); // 8031B6A4
  c->ctr=c->r[12]; // 8031B6A8
  if (true) { c->lr=0x8031B6B0u; dispatch(c,c->ctr); } // 8031B6AC
  goto L_8031B6C0; // 8031B6B0
L_8031B6B4:;
  c->r[6]=c->r[6]+0x00000001u; // 8031B6B4
  c->r[5]=c->r[5]+0x00000034u; // 8031B6B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031B664; } // 8031B6BC
L_8031B6C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031B6C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031B6C4
  c->lr=c->r[0]; // 8031B6C8
  c->r[1]=c->r[1]+0x00000010u; // 8031B6CC
  return; // 8031B6D0
}

// btm_sco_acl_removed
void f_8031B6D4(Ctx* __restrict c) {
  trace_call(0x8031B6D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B6D4
  c->r[0]=c->lr; // 8031B6D8
  c->r[4]=0u+0x80570000u; // 8031B6DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031B6E0
  c->r[4]=c->r[4]+0x000058F8u; // 8031B6E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031B6E8
  c->r[31]=0u+0x00000000u; // 8031B6EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031B6F0
  c->r[30]=c->r[4]+0x00001854u; // 8031B6F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031B6F8
  c->r[29]=0u+0x00000000u; // 8031B6FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031B700
  c->r[28]=c->r[3]|c->r[3]; // 8031B704
L_8031B708:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 8031B708
  cmps(c,0,(int32_t)c->r[0],0); // 8031B70C
  if (crb(c,2)) { goto L_8031B758; } // 8031B710
  cmps(c,0,(int32_t)c->r[28],0); // 8031B714
  if (crb(c,2)) { goto L_8031B740; } // 8031B718
  c->r[4]=c->r[28]|c->r[28]; // 8031B71C
  c->r[3]=c->r[30]+0x00000028u; // 8031B720
  c->r[5]=0u+0x00000006u; // 8031B724
  c->lr=0x8031B72Cu; f_802E54DC(c); // 8031B728
  cmps(c,0,(int32_t)c->r[3],0); // 8031B72C
  if (!crb(c,2)) { goto L_8031B758; } // 8031B730
  c->r[0]=R8(c->r[30]+0x0000000Du); // 8031B734
  cmps(c,0,(int32_t)c->r[0],0); // 8031B738
  if (crb(c,2)) { goto L_8031B758; } // 8031B73C
L_8031B740:;
  W16(c->r[30]+0x00000008u,c->r[31]); // 8031B740
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 8031B744
  W32(c->r[30]+0x00000010u,c->r[31]); // 8031B748
  c->r[12]=R32(c->r[30]+0x00000004u); // 8031B74C
  c->ctr=c->r[12]; // 8031B750
  if (true) { c->lr=0x8031B758u; dispatch(c,c->ctr); } // 8031B754
L_8031B758:;
  c->r[29]=c->r[29]+0x00000001u; // 8031B758
  c->r[30]=c->r[30]+0x00000034u; // 8031B75C
  cmpu(c,0,c->r[29],0x00000003u); // 8031B760
  if (crb(c,0)) { IRQCHK(c); goto L_8031B708; } // 8031B764
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031B768
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031B76C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031B770
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031B774
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031B778
  c->lr=c->r[0]; // 8031B77C
  c->r[1]=c->r[1]+0x00000020u; // 8031B780
  return; // 8031B784
}

// btm_route_sco_data
void f_8031B788(Ctx* __restrict c) {
  trace_call(0x8031B788u);
  f_8030B00C(c); return; // 8031B788
}

// BTM_ChangeEScoLinkParms
void f_8031B78C(Ctx* __restrict c) {
  trace_call(0x8031B78Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B78C
  c->r[0]=c->lr; // 8031B790
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031B794
  c->r[11]=c->r[1]+0x00000020u; // 8031B798
  c->lr=0x8031B7A0u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031B79C
  cmpu(c,0,c->r[3],0x00000003u); // 8031B7A0
  c->r[30]=0u+0x80490000u; // 8031B7A4
  c->r[28]=c->r[4]|c->r[4]; // 8031B7A8
  c->r[30]=c->r[30]+0x000000F8u; // 8031B7AC
  if (!crb(c,0)) { goto L_8031B7D0; } // 8031B7B0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8031B7B4
  c->r[3]=0u+0x80570000u; // 8031B7B8
  c->r[3]=c->r[3]+0x000058F8u; // 8031B7BC
  c->r[31]=c->r[3]+c->r[0]; // 8031B7C0
  c->r[0]=R16(c->r[31]+0x0000185Cu); // 8031B7C4
  cmpu(c,0,c->r[0],0x00000004u); // 8031B7C8
  if (crb(c,2)) { goto L_8031B7D8; } // 8031B7CC
L_8031B7D0:;
  c->r[3]=0u+0x00000006u; // 8031B7D0
  goto L_8031B91C; // 8031B7D4
L_8031B7D8:;
  c->r[0]=R8(c->r[31]+0x00001882u); // 8031B7D8
  c->r[29]=c->r[31]+0x00001868u; // 8031B7DC
  cmps(c,0,(int32_t)c->r[0],0); // 8031B7E0
  if (crb(c,2)) { goto L_8031B7F4; } // 8031B7E4
  c->r[0]=R8(c->r[3]+0x00001908u); // 8031B7E8
  cmps(c,0,(int32_t)c->r[0],0); // 8031B7EC
  if (!crb(c,2)) { goto L_8031B854; } // 8031B7F0
L_8031B7F4:;
  c->r[3]=0u+0x80570000u; // 8031B7F4
  c->r[4]=R16(c->r[4]+0x00000002u); // 8031B7F8
  c->r[3]=c->r[3]+0x000058F8u; // 8031B7FC
  c->r[0]=R16(c->r[3]+0x00000656u); // 8031B800
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 8031B804
  c->r[0]=c->r[4]&c->r[0]; // 8031B808
  W16(c->r[29]+0x0000000Cu,c->r[0]); // 8031B80C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031B810
  cmpu(c,0,c->r[0],0x00000003u); // 8031B814
  if (crb(c,0)) { goto L_8031B834; } // 8031B818
  c->r[3]=0u+0x000D0000u; // 8031B81C
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 8031B820
  c->r[6]=R16(c->r[29]+0x0000000Cu); // 8031B824
  c->r[3]=c->r[3]+0x00000002u; // 8031B828
  c->r[4]=c->r[30]+0x00000248u; // 8031B82C
  c->lr=0x8031B834u; f_8030E218(c); // 8031B830
L_8031B834:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 8031B834
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 8031B838
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 8031B83C
  c->lr=0x8031B844u; f_803219FC(c); // 8031B840
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031B844
  if (!crb(c,2)) { goto L_8031B918; } // 8031B848
  c->r[3]=0u+0x00000003u; // 8031B84C
  goto L_8031B91C; // 8031B850
L_8031B854:;
  c->r[0]=R8(c->r[3]+0x00000636u); // 8031B854
  c->r[3]=R16(c->r[3]+0x00000656u); // 8031B858
  c->r[4]=R16(c->r[4]+0x00000002u); // 8031B85C
  cmpu(c,0,c->r[0],0x00000003u); // 8031B860
  c->r[0]=c->r[4]&c->r[3]; // 8031B864
  c->r[27]=rotl(c->r[0],0)&0x0000003Fu; // 8031B868
  if (crb(c,0)) { goto L_8031B880; } // 8031B86C
  c->r[0]=c->r[4]|c->r[3]; // 8031B870
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 8031B874
  c->r[0]=c->r[27]|c->r[0]; // 8031B878
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 8031B87C
L_8031B880:;
  c->r[3]=0u+0x80570000u; // 8031B880
  c->r[3]=c->r[3]+0x000058F8u; // 8031B884
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031B888
  cmpu(c,0,c->r[0],0x00000003u); // 8031B88C
  if (crb(c,0)) { goto L_8031B8A8; } // 8031B890
  c->r[3]=0u+0x000D0000u; // 8031B894
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 8031B898
  c->r[3]=c->r[3]+0x00000002u; // 8031B89C
  c->r[4]=c->r[30]+0x0000028Cu; // 8031B8A0
  c->lr=0x8031B8A8u; f_8030E200(c); // 8031B8A4
L_8031B8A8:;
  c->r[3]=0u+0x80570000u; // 8031B8A8
  c->r[3]=c->r[3]+0x000058F8u; // 8031B8AC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031B8B0
  cmpu(c,0,c->r[0],0x00000003u); // 8031B8B4
  if (crb(c,0)) { goto L_8031B8E4; } // 8031B8B8
  c->r[3]=0u+0x000D0000u; // 8031B8BC
  c->r[5]=R32(c->r[29]+0x00000000u); // 8031B8C0
  c->r[6]=R32(c->r[29]+0x00000004u); // 8031B8C4
  c->r[3]=c->r[3]+0x00000002u; // 8031B8C8
  c->r[7]=R16(c->r[28]+0x00000000u); // 8031B8CC
  c->r[4]=c->r[30]+0x0000008Cu; // 8031B8D0
  c->r[8]=R16(c->r[29]+0x0000000Au); // 8031B8D4
  c->r[10]=rotl(c->r[27],0)&0x0000FFFFu; // 8031B8D8
  c->r[9]=R8(c->r[28]+0x00000004u); // 8031B8DC
  c->lr=0x8031B8E4u; f_8030E278(c); // 8031B8E0
L_8031B8E4:;
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 8031B8E4
  c->r[9]=rotl(c->r[27],0)&0x0000FFFFu; // 8031B8E8
  c->r[4]=R32(c->r[29]+0x00000000u); // 8031B8EC
  c->r[5]=R32(c->r[29]+0x00000004u); // 8031B8F0
  c->r[6]=R16(c->r[28]+0x00000000u); // 8031B8F4
  c->r[7]=R16(c->r[29]+0x0000000Au); // 8031B8F8
  c->r[8]=R8(c->r[28]+0x00000004u); // 8031B8FC
  c->lr=0x8031B904u; f_80321E80(c); // 8031B900
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031B904
  if (!crb(c,2)) { goto L_8031B914; } // 8031B908
  c->r[3]=0u+0x00000003u; // 8031B90C
  goto L_8031B91C; // 8031B910
L_8031B914:;
  W16(c->r[28]+0x00000002u,c->r[27]); // 8031B914
L_8031B918:;
  c->r[3]=0u+0x00000001u; // 8031B918
L_8031B91C:;
  c->r[11]=c->r[1]+0x00000020u; // 8031B91C
  c->lr=0x8031B924u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031B920
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031B924
  c->lr=c->r[0]; // 8031B928
  c->r[1]=c->r[1]+0x00000020u; // 8031B92C
  return; // 8031B930
}

// btm_esco_proc_conn_chg
void f_8031B934(Ctx* __restrict c) {
  trace_call(0x8031B934u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031B934
  c->r[0]=c->lr; // 8031B938
  W32(c->r[1]+0x00000044u,c->r[0]); // 8031B93C
  c->r[11]=c->r[1]+0x00000040u; // 8031B940
  c->lr=0x8031B948u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031B944
  c->r[9]=0u+0x80570000u; // 8031B948
  c->r[24]=c->r[3]|c->r[3]; // 8031B94C
  c->r[9]=c->r[9]+0x000058F8u; // 8031B950
  c->r[25]=c->r[4]|c->r[4]; // 8031B954
  c->r[0]=R8(c->r[9]+0x000027C0u); // 8031B958
  c->r[26]=c->r[5]|c->r[5]; // 8031B95C
  c->r[27]=c->r[6]|c->r[6]; // 8031B960
  c->r[28]=c->r[7]|c->r[7]; // 8031B964
  cmpu(c,0,c->r[0],0x00000004u); // 8031B968
  c->r[29]=c->r[8]|c->r[8]; // 8031B96C
  c->r[31]=c->r[9]+0x00001854u; // 8031B970
  if (crb(c,0)) { goto L_8031B994; } // 8031B974
  c->r[3]=0u+0x000D0000u; // 8031B978
  c->r[4]=0u+0x80490000u; // 8031B97C
  c->r[5]=c->r[25]|c->r[25]; // 8031B980
  c->r[6]=c->r[24]|c->r[24]; // 8031B984
  c->r[3]=c->r[3]+0x00000003u; // 8031B988
  c->r[4]=c->r[4]+0x000003BCu; // 8031B98C
  c->lr=0x8031B994u; f_8030E218(c); // 8031B990
L_8031B994:;
  c->r[0]=0u+0x00000003u; // 8031B994
  c->r[30]=0u+0x00000000u; // 8031B998
  c->ctr=c->r[0]; // 8031B99C
L_8031B9A0:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 8031B9A0
  cmpu(c,0,c->r[0],0x00000004u); // 8031B9A4
  if (!crb(c,2)) { goto L_8031BA14; } // 8031B9A8
  c->r[0]=R16(c->r[31]+0x0000000Au); // 8031B9AC
  cmpu(c,0,c->r[25],c->r[0]); // 8031B9B0
  if (!crb(c,2)) { goto L_8031BA14; } // 8031B9B4
  c->r[0]=R32(c->r[31]+0x00000010u); // 8031B9B8
  cmps(c,0,(int32_t)c->r[0],0); // 8031B9BC
  if (crb(c,2)) { goto L_8031BA20; } // 8031B9C0
  c->r[3]=c->r[1]+0x0000000Eu; // 8031B9C4
  c->r[4]=c->r[31]+0x00000028u; // 8031B9C8
  c->r[5]=0u+0x00000006u; // 8031B9CC
  c->lr=0x8031B9D4u; f_80005FB4(c); // 8031B9D0
  W16(c->r[31]+0x00000024u,c->r[28]); // 8031B9D4
  c->r[4]=c->r[1]+0x00000008u; // 8031B9D8
  c->r[3]=0u+0x00000001u; // 8031B9DC
  W16(c->r[31]+0x00000026u,c->r[29]); // 8031B9E0
  W8(c->r[31]+0x0000002Fu,c->r[26]); // 8031B9E4
  W8(c->r[31]+0x00000030u,c->r[27]); // 8031B9E8
  c->r[12]=R32(c->r[31]+0x00000010u); // 8031B9EC
  W8(c->r[1]+0x00000014u,c->r[24]); // 8031B9F0
  W16(c->r[1]+0x00000008u,c->r[30]); // 8031B9F4
  W16(c->r[1]+0x0000000Au,c->r[28]); // 8031B9F8
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 8031B9FC
  W8(c->r[1]+0x00000015u,c->r[26]); // 8031BA00
  W8(c->r[1]+0x00000016u,c->r[27]); // 8031BA04
  c->ctr=c->r[12]; // 8031BA08
  if (true) { c->lr=0x8031BA10u; dispatch(c,c->ctr); } // 8031BA0C
  goto L_8031BA20; // 8031BA10
L_8031BA14:;
  c->r[30]=c->r[30]+0x00000001u; // 8031BA14
  c->r[31]=c->r[31]+0x00000034u; // 8031BA18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031B9A0; } // 8031BA1C
L_8031BA20:;
  c->r[11]=c->r[1]+0x00000040u; // 8031BA20
  c->lr=0x8031BA28u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031BA24
  c->r[0]=R32(c->r[1]+0x00000044u); // 8031BA28
  c->lr=c->r[0]; // 8031BA2C
  c->r[1]=c->r[1]+0x00000040u; // 8031BA30
  return; // 8031BA34
}

// btm_is_sco_active
void f_8031BA38(Ctx* __restrict c) {
  trace_call(0x8031BA38u);
  c->r[4]=0u+0x80570000u; // 8031BA38
  c->r[4]=c->r[4]+0x000058F8u; // 8031BA3C
  c->r[0]=R16(c->r[4]+0x0000185Eu); // 8031BA40
  cmpu(c,0,c->r[3],c->r[0]); // 8031BA44
  if (!crb(c,2)) { goto L_8031BA60; } // 8031BA48
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 8031BA4C
  cmpu(c,0,c->r[0],0x00000004u); // 8031BA50
  if (!crb(c,2)) { goto L_8031BA60; } // 8031BA54
  c->r[3]=0u+0x00000001u; // 8031BA58
  return; // 8031BA5C
L_8031BA60:;
  c->r[0]=R16(c->r[4]+0x00001892u); // 8031BA60
  cmpu(c,0,c->r[3],c->r[0]); // 8031BA64
  if (!crb(c,2)) { goto L_8031BA80; } // 8031BA68
  c->r[0]=R16(c->r[4]+0x00001890u); // 8031BA6C
  cmpu(c,0,c->r[0],0x00000004u); // 8031BA70
  if (!crb(c,2)) { goto L_8031BA80; } // 8031BA74
  c->r[3]=0u+0x00000001u; // 8031BA78
  return; // 8031BA7C
L_8031BA80:;
  c->r[0]=R16(c->r[4]+0x000018C6u); // 8031BA80
  cmpu(c,0,c->r[3],c->r[0]); // 8031BA84
  if (!crb(c,2)) { goto L_8031BAA0; } // 8031BA88
  c->r[0]=R16(c->r[4]+0x000018C4u); // 8031BA8C
  cmpu(c,0,c->r[0],0x00000004u); // 8031BA90
  if (!crb(c,2)) { goto L_8031BAA0; } // 8031BA94
  c->r[3]=0u+0x00000001u; // 8031BA98
  return; // 8031BA9C
L_8031BAA0:;
  c->r[3]=0u+0x00000000u; // 8031BAA0
  return; // 8031BAA4
}

// btm_num_sco_links_active
void f_8031BAA8(Ctx* __restrict c) {
  trace_call(0x8031BAA8u);
  c->r[4]=0u+0x80570000u; // 8031BAA8
  c->r[3]=0u+0x00000000u; // 8031BAAC
  c->r[4]=c->r[4]+0x000058F8u; // 8031BAB0
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 8031BAB4
  cmps(c,0,(int32_t)c->r[0],7); // 8031BAB8
  if (!crb(c,0)) { goto L_8031BAD0; } // 8031BABC
  cmps(c,0,(int32_t)c->r[0],2); // 8031BAC0
  if (!crb(c,0)) { goto L_8031BACC; } // 8031BAC4
  goto L_8031BAD0; // 8031BAC8
L_8031BACC:;
  c->r[3]=0u+0x00000001u; // 8031BACC
L_8031BAD0:;
  c->r[0]=R16(c->r[4]+0x00001890u); // 8031BAD0
  cmps(c,0,(int32_t)c->r[0],7); // 8031BAD4
  if (!crb(c,0)) { goto L_8031BAEC; } // 8031BAD8
  cmps(c,0,(int32_t)c->r[0],2); // 8031BADC
  if (!crb(c,0)) { goto L_8031BAE8; } // 8031BAE0
  goto L_8031BAEC; // 8031BAE4
L_8031BAE8:;
  c->r[3]=c->r[3]+0x00000001u; // 8031BAE8
L_8031BAEC:;
  c->r[0]=R16(c->r[4]+0x000018C4u); // 8031BAEC
  cmps(c,0,(int32_t)c->r[0],7); // 8031BAF0
  if (!crb(c,0)) return; // 8031BAF4
  cmps(c,0,(int32_t)c->r[0],2); // 8031BAF8
  if (crb(c,0)) return; // 8031BAFC
  c->r[3]=c->r[3]+0x00000001u; // 8031BB00
  return; // 8031BB04
}

// btm_is_sco_active_by_bdaddr
void f_8031BB08(Ctx* __restrict c) {
  trace_call(0x8031BB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031BB08
  c->r[0]=c->lr; // 8031BB0C
  c->r[4]=0u+0x80570000u; // 8031BB10
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031BB14
  c->r[4]=c->r[4]+0x000058F8u; // 8031BB18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031BB1C
  c->r[31]=0u+0x00000000u; // 8031BB20
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031BB24
  c->r[30]=c->r[4]+0x00001854u; // 8031BB28
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031BB2C
  c->r[29]=c->r[3]|c->r[3]; // 8031BB30
L_8031BB34:;
  c->r[4]=c->r[29]|c->r[29]; // 8031BB34
  c->r[3]=c->r[30]+0x00000028u; // 8031BB38
  c->r[5]=0u+0x00000006u; // 8031BB3C
  c->lr=0x8031BB44u; f_802E54DC(c); // 8031BB40
  cmps(c,0,(int32_t)c->r[3],0); // 8031BB44
  if (!crb(c,2)) { goto L_8031BB60; } // 8031BB48
  c->r[0]=R16(c->r[30]+0x00000008u); // 8031BB4C
  cmpu(c,0,c->r[0],0x00000004u); // 8031BB50
  if (!crb(c,2)) { goto L_8031BB60; } // 8031BB54
  c->r[3]=0u+0x00000001u; // 8031BB58
  goto L_8031BB74; // 8031BB5C
L_8031BB60:;
  c->r[31]=c->r[31]+0x00000001u; // 8031BB60
  c->r[30]=c->r[30]+0x00000034u; // 8031BB64
  cmpu(c,0,c->r[31],0x00000003u); // 8031BB68
  if (crb(c,0)) { IRQCHK(c); goto L_8031BB34; } // 8031BB6C
  c->r[3]=0u+0x00000000u; // 8031BB70
L_8031BB74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031BB74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031BB78
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031BB7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031BB80
  c->lr=c->r[0]; // 8031BB84
  c->r[1]=c->r[1]+0x00000020u; // 8031BB88
  return; // 8031BB8C
}

// BTM_SecRegister
void f_8031BB90(Ctx* __restrict c) {
  trace_call(0x8031BB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031BB90
  c->r[0]=c->lr; // 8031BB94
  c->r[6]=0u+0x80570000u; // 8031BB98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031BB9C
  c->r[6]=c->r[6]+0x000058F8u; // 8031BBA0
  c->r[5]=R32(c->r[3]+0x00000000u); // 8031BBA4
  c->r[4]=R32(c->r[3]+0x00000004u); // 8031BBA8
  c->r[0]=R8(c->r[6]+0x000027C0u); // 8031BBAC
  W32(c->r[6]+0x0000190Cu,c->r[5]); // 8031BBB0
  cmpu(c,0,c->r[0],0x00000004u); // 8031BBB4
  W32(c->r[6]+0x00001910u,c->r[4]); // 8031BBB8
  c->r[4]=R32(c->r[3]+0x00000008u); // 8031BBBC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8031BBC0
  W32(c->r[6]+0x00001914u,c->r[4]); // 8031BBC4
  W32(c->r[6]+0x00001918u,c->r[0]); // 8031BBC8
  c->r[4]=R32(c->r[3]+0x00000010u); // 8031BBCC
  c->r[0]=R32(c->r[3]+0x00000014u); // 8031BBD0
  W32(c->r[6]+0x0000191Cu,c->r[4]); // 8031BBD4
  W32(c->r[6]+0x00001920u,c->r[0]); // 8031BBD8
  if (crb(c,0)) { goto L_8031BBF4; } // 8031BBDC
  c->r[3]=0u+0x000D0000u; // 8031BBE0
  c->r[4]=0u+0x80490000u; // 8031BBE4
  c->r[3]=c->r[3]+0x00000003u; // 8031BBE8
  c->r[4]=c->r[4]+0x000003F8u; // 8031BBEC
  c->lr=0x8031BBF4u; f_8030E1E8(c); // 8031BBF0
L_8031BBF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031BBF4
  c->r[3]=0u+0x00000001u; // 8031BBF8
  c->lr=c->r[0]; // 8031BBFC
  c->r[1]=c->r[1]+0x00000010u; // 8031BC00
  return; // 8031BC04
}

// BTM_SecAddRmtNameNotifyCallback
void f_8031BC08(Ctx* __restrict c) {
  trace_call(0x8031BC08u);
  c->r[4]=0u+0x80570000u; // 8031BC08
  c->r[0]=0u+0x00000002u; // 8031BC0C
  c->r[4]=c->r[4]+0x000058F8u; // 8031BC10
  c->r[5]=0u+0x00000000u; // 8031BC14
  c->ctr=c->r[0]; // 8031BC18
L_8031BC1C:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 8031BC1C
  cmps(c,0,(int32_t)c->r[0],0); // 8031BC20
  if (!crb(c,2)) { goto L_8031BC44; } // 8031BC24
  c->r[4]=0u+0x80570000u; // 8031BC28
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8031BC2C
  c->r[4]=c->r[4]+0x000058F8u; // 8031BC30
  c->r[4]=c->r[4]+c->r[0]; // 8031BC34
  W32(c->r[4]+0x0000192Cu,c->r[3]); // 8031BC38
  c->r[3]=0u+0x00000001u; // 8031BC3C
  return; // 8031BC40
L_8031BC44:;
  c->r[4]=c->r[4]+0x00000004u; // 8031BC44
  c->r[5]=c->r[5]+0x00000001u; // 8031BC48
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031BC1C; } // 8031BC4C
  c->r[3]=0u+0x00000000u; // 8031BC50
  return; // 8031BC54
}

// BTM_SecDeleteRmtNameNotifyCallback
void f_8031BC58(Ctx* __restrict c) {
  trace_call(0x8031BC58u);
  c->r[4]=0u+0x80570000u; // 8031BC58
  c->r[0]=0u+0x00000002u; // 8031BC5C
  c->r[4]=c->r[4]+0x000058F8u; // 8031BC60
  c->r[5]=0u+0x00000000u; // 8031BC64
  c->ctr=c->r[0]; // 8031BC68
L_8031BC6C:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 8031BC6C
  cmpu(c,0,c->r[0],c->r[3]); // 8031BC70
  if (!crb(c,2)) { goto L_8031BC98; } // 8031BC74
  c->r[3]=0u+0x80570000u; // 8031BC78
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8031BC7C
  c->r[3]=c->r[3]+0x000058F8u; // 8031BC80
  c->r[5]=0u+0x00000000u; // 8031BC84
  c->r[4]=c->r[3]+c->r[0]; // 8031BC88
  W32(c->r[4]+0x0000192Cu,c->r[5]); // 8031BC8C
  c->r[3]=0u+0x00000001u; // 8031BC90
  return; // 8031BC94
L_8031BC98:;
  c->r[4]=c->r[4]+0x00000004u; // 8031BC98
  c->r[5]=c->r[5]+0x00000001u; // 8031BC9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031BC6C; } // 8031BCA0
  c->r[3]=0u+0x00000000u; // 8031BCA4
  return; // 8031BCA8
}

// BTM_SetPinType
void f_8031BCAC(Ctx* __restrict c) {
  trace_call(0x8031BCACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031BCAC
  c->r[0]=c->lr; // 8031BCB0
  c->r[6]=0u+0x80570000u; // 8031BCB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031BCB8
  c->r[6]=c->r[6]+0x000058F8u; // 8031BCBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031BCC0
  c->r[31]=c->r[5]|c->r[5]; // 8031BCC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031BCC8
  c->r[30]=c->r[4]|c->r[4]; // 8031BCCC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031BCD0
  c->r[29]=c->r[3]|c->r[3]; // 8031BCD4
  c->r[0]=R8(c->r[6]+0x000027C0u); // 8031BCD8
  cmpu(c,0,c->r[0],0x00000003u); // 8031BCDC
  if (crb(c,0)) { goto L_8031BD04; } // 8031BCE0
  c->r[3]=0u+0x000D0000u; // 8031BCE4
  c->r[4]=0u+0x80490000u; // 8031BCE8
  c->r[5]=c->r[29]|c->r[29]; // 8031BCEC
  c->r[6]=c->r[30]|c->r[30]; // 8031BCF0
  c->r[7]=c->r[31]|c->r[31]; // 8031BCF4
  c->r[3]=c->r[3]+0x00000002u; // 8031BCF8
  c->r[4]=c->r[4]+0x00000490u; // 8031BCFC
  c->lr=0x8031BD04u; f_8030E230(c); // 8031BD00
L_8031BD04:;
  c->r[3]=0u+0x80570000u; // 8031BD04
  c->r[3]=c->r[3]+0x000058F8u; // 8031BD08
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 8031BD0C
  cmpu(c,0,c->r[0],0x00000001u); // 8031BD10
  if (!crb(c,1)) { goto L_8031BD20; } // 8031BD14
  c->r[3]=c->r[29]|c->r[29]; // 8031BD18
  c->lr=0x8031BD20u; f_8032275C(c); // 8031BD1C
L_8031BD20:;
  c->r[6]=0u+0x80570000u; // 8031BD20
  c->r[4]=c->r[30]|c->r[30]; // 8031BD24
  c->r[6]=c->r[6]+0x000058F8u; // 8031BD28
  c->r[5]=c->r[31]|c->r[31]; // 8031BD2C
  W8(c->r[6]+0x00000020u,c->r[29]); // 8031BD30
  c->r[3]=c->r[6]+0x00000022u; // 8031BD34
  W8(c->r[6]+0x00000021u,c->r[31]); // 8031BD38
  c->lr=0x8031BD40u; f_80005FB4(c); // 8031BD3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031BD40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031BD44
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031BD48
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031BD4C
  c->lr=c->r[0]; // 8031BD50
  c->r[1]=c->r[1]+0x00000020u; // 8031BD54
  return; // 8031BD58
}

// BTM_SetSecurityLevel
void f_8031BD5C(Ctx* __restrict c) {
  trace_call(0x8031BD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031BD5C
  c->r[0]=c->lr; // 8031BD60
  W32(c->r[1]+0x00000044u,c->r[0]); // 8031BD64
  c->r[11]=c->r[1]+0x00000040u; // 8031BD68
  c->lr=0x8031BD70u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031BD6C
  c->r[10]=0u+0x80570000u; // 8031BD70
  c->r[31]=0u+0x80490000u; // 8031BD74
  c->r[10]=c->r[10]+0x000058F8u; // 8031BD78
  c->r[11]=0u+0x00010000u; // 8031BD7C
  c->r[20]=c->r[3]|c->r[3]; // 8031BD80
  c->r[21]=c->r[4]|c->r[4]; // 8031BD84
  c->r[22]=c->r[5]|c->r[5]; // 8031BD88
  c->r[23]=c->r[6]|c->r[6]; // 8031BD8C
  c->r[24]=c->r[7]|c->r[7]; // 8031BD90
  c->r[25]=c->r[8]|c->r[8]; // 8031BD94
  c->r[26]=c->r[9]|c->r[9]; // 8031BD98
  c->r[31]=c->r[31]+0x000003F8u; // 8031BD9C
  c->r[28]=c->r[11]+0xFFFFFFFFu; // 8031BDA0
  c->r[30]=c->r[10]+0x00001990u; // 8031BDA4
  c->r[27]=0u+0x00000000u; // 8031BDA8
  c->r[29]=0u+0x00000000u; // 8031BDAC
L_8031BDB0:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 8031BDB0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031BDB4
  if (crb(c,2)) { goto L_8031BE18; } // 8031BDB8
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 8031BDBC
  cmpu(c,0,c->r[0],c->r[24]); // 8031BDC0
  if (!crb(c,2)) { goto L_8031BE28; } // 8031BDC4
  c->r[0]=R32(c->r[30]+0x00000000u); // 8031BDC8
  cmpu(c,0,c->r[0],c->r[25]); // 8031BDCC
  if (!crb(c,2)) { goto L_8031BE28; } // 8031BDD0
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 8031BDD4
  cmpu(c,0,c->r[22],c->r[0]); // 8031BDD8
  if (!crb(c,2)) { goto L_8031BE28; } // 8031BDDC
  c->r[3]=c->r[21]|c->r[21]; // 8031BDE0
  c->r[4]=c->r[30]+0x00000010u; // 8031BDE4
  c->r[5]=0u+0x00000015u; // 8031BDE8
  c->lr=0x8031BDF0u; f_802E97E0(c); // 8031BDEC
  cmps(c,0,(int32_t)c->r[3],0); // 8031BDF0
  if (crb(c,2)) { goto L_8031BE10; } // 8031BDF4
  c->r[3]=c->r[21]|c->r[21]; // 8031BDF8
  c->r[4]=c->r[30]+0x00000026u; // 8031BDFC
  c->r[5]=0u+0x00000015u; // 8031BE00
  c->lr=0x8031BE08u; f_802E97E0(c); // 8031BE04
  cmps(c,0,(int32_t)c->r[3],0); // 8031BE08
  if (!crb(c,2)) { goto L_8031BE28; } // 8031BE0C
L_8031BE10:;
  c->r[27]=0u+0x00000001u; // 8031BE10
  goto L_8031BE38; // 8031BE14
L_8031BE18:;
  cmps(c,0,(int32_t)c->r[27],0); // 8031BE18
  if (!crb(c,2)) { goto L_8031BE28; } // 8031BE1C
  c->r[27]=0u+0x00000001u; // 8031BE20
  c->r[28]=c->r[29]|c->r[29]; // 8031BE24
L_8031BE28:;
  c->r[29]=c->r[29]+0x00000001u; // 8031BE28
  c->r[30]=c->r[30]+0x0000003Cu; // 8031BE2C
  cmpu(c,0,c->r[29],0x00000018u); // 8031BE30
  if (crb(c,0)) { IRQCHK(c); goto L_8031BDB0; } // 8031BE34
L_8031BE38:;
  cmps(c,0,(int32_t)c->r[27],0); // 8031BE38
  if (crb(c,2)) { goto L_8031BF40; } // 8031BE3C
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8031BE40
  cmpu(c,0,c->r[0],0x00000018u); // 8031BE44
  if (crb(c,0)) { goto L_8031BE68; } // 8031BE48
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 8031BE4C
  c->r[3]=0u+0x80570000u; // 8031BE50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 8031BE54
  c->r[29]=c->r[28]|c->r[28]; // 8031BE58
  c->r[3]=c->r[3]+0x000058F8u; // 8031BE5C
  c->r[3]=c->r[3]+c->r[0]; // 8031BE60
  c->r[30]=c->r[3]+0x00001990u; // 8031BE64
L_8031BE68:;
  W16(c->r[30]+0x0000000Cu,c->r[24]); // 8031BE68
  cmps(c,0,(int32_t)c->r[20],0); // 8031BE6C
  W8(c->r[30]+0x0000000Fu,c->r[22]); // 8031BE70
  W32(c->r[30]+0x00000000u,c->r[25]); // 8031BE74
  if (crb(c,2)) { goto L_8031BEA0; } // 8031BE78
  W32(c->r[30]+0x00000004u,c->r[26]); // 8031BE7C
  c->r[4]=c->r[21]|c->r[21]; // 8031BE80
  c->r[3]=c->r[30]+0x00000010u; // 8031BE84
  c->r[5]=0u+0x00000015u; // 8031BE88
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 8031BE8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC7u; // 8031BE90
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 8031BE94
  c->lr=0x8031BE9Cu; f_802E9608(c); // 8031BE98
  goto L_8031BEC0; // 8031BE9C
L_8031BEA0:;
  W32(c->r[30]+0x00000008u,c->r[26]); // 8031BEA0
  c->r[4]=c->r[21]|c->r[21]; // 8031BEA4
  c->r[3]=c->r[30]+0x00000026u; // 8031BEA8
  c->r[5]=0u+0x00000015u; // 8031BEAC
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 8031BEB0
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 8031BEB4
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 8031BEB8
  c->lr=0x8031BEC0u; f_802E9608(c); // 8031BEBC
L_8031BEC0:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 8031BEC0
  c->r[0]=c->r[23]|0x00000080u; // 8031BEC4
  c->r[3]=0u+0x80570000u; // 8031BEC8
  c->r[0]=c->r[4]|c->r[0]; // 8031BECC
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 8031BED0
  c->r[3]=c->r[3]+0x000058F8u; // 8031BED4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031BED8
  cmpu(c,0,c->r[0],0x00000003u); // 8031BEDC
  if (crb(c,0)) { goto L_8031BF0C; } // 8031BEE0
  c->r[3]=0u+0x000D0000u; // 8031BEE4
  c->r[6]=c->r[22]|c->r[22]; // 8031BEE8
  c->r[7]=c->r[20]|c->r[20]; // 8031BEEC
  c->r[8]=c->r[24]|c->r[24]; // 8031BEF0
  c->r[9]=c->r[25]|c->r[25]; // 8031BEF4
  c->r[10]=c->r[26]|c->r[26]; // 8031BEF8
  c->r[3]=c->r[3]+0x00000002u; // 8031BEFC
  c->r[4]=c->r[31]+0x000000E0u; // 8031BF00
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 8031BF04
  c->lr=0x8031BF0Cu; f_8030E278(c); // 8031BF08
L_8031BF0C:;
  c->r[3]=0u+0x80570000u; // 8031BF0C
  c->r[3]=c->r[3]+0x000058F8u; // 8031BF10
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031BF14
  cmpu(c,0,c->r[0],0x00000003u); // 8031BF18
  if (crb(c,0)) { goto L_8031BF68; } // 8031BF1C
  c->r[3]=0u+0x000D0000u; // 8031BF20
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 8031BF24
  c->r[6]=c->r[21]|c->r[21]; // 8031BF28
  c->r[4]=c->r[31]+0x00000128u; // 8031BF2C
  c->r[3]=c->r[3]+0x00000002u; // 8031BF30
  c->r[7]=0u+0x00000015u; // 8031BF34
  c->lr=0x8031BF3Cu; f_8030E230(c); // 8031BF38
  goto L_8031BF68; // 8031BF3C
L_8031BF40:;
  c->r[3]=0u+0x80570000u; // 8031BF40
  c->r[3]=c->r[3]+0x000058F8u; // 8031BF44
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031BF48
  cmpu(c,0,c->r[0],0x00000002u); // 8031BF4C
  if (crb(c,0)) { goto L_8031BF68; } // 8031BF50
  c->r[3]=0u+0x000D0000u; // 8031BF54
  c->r[4]=c->r[31]+0x00000170u; // 8031BF58
  c->r[3]=c->r[3]+0x00000001u; // 8031BF5C
  c->r[5]=0u+0x00000018u; // 8031BF60
  c->lr=0x8031BF68u; f_8030E200(c); // 8031BF64
L_8031BF68:;
  c->r[11]=c->r[1]+0x00000040u; // 8031BF68
  c->r[3]=c->r[27]|c->r[27]; // 8031BF6C
  c->lr=0x8031BF74u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031BF70
  c->r[0]=R32(c->r[1]+0x00000044u); // 8031BF74
  c->lr=c->r[0]; // 8031BF78
  c->r[1]=c->r[1]+0x00000040u; // 8031BF7C
  return; // 8031BF80
}

// BTM_PINCodeReply
void f_8031BF84(Ctx* __restrict c) {
  trace_call(0x8031BF84u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031BF84
  c->r[0]=c->lr; // 8031BF88
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031BF8C
  c->r[11]=c->r[1]+0x00000030u; // 8031BF90
  c->lr=0x8031BF98u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031BF94
  c->r[30]=0u+0x80570000u; // 8031BF98
  c->r[25]=c->r[3]|c->r[3]; // 8031BF9C
  c->r[30]=c->r[30]+0x000058F8u; // 8031BFA0
  c->r[26]=c->r[4]|c->r[4]; // 8031BFA4
  c->r[0]=R32(c->r[30]+0x0000194Cu); // 8031BFA8
  c->r[27]=c->r[5]|c->r[5]; // 8031BFAC
  c->r[28]=c->r[6]|c->r[6]; // 8031BFB0
  c->r[29]=c->r[7]|c->r[7]; // 8031BFB4
  cmps(c,0,(int32_t)c->r[0],0); // 8031BFB8
  if (crb(c,2)) { goto L_8031C030; } // 8031BFBC
  c->r[3]=c->r[30]+0x0000193Cu; // 8031BFC0
  c->lr=0x8031BFC8u; f_8030E824(c); // 8031BFC4
  c->r[31]=0u+0x00000000u; // 8031BFC8
  c->r[3]=c->r[30]+0x00001954u; // 8031BFCC
  W32(c->r[30]+0x0000194Cu,c->r[31]); // 8031BFD0
  c->r[4]=0u+0x000000FFu; // 8031BFD4
  c->r[5]=0u+0x00000006u; // 8031BFD8
  c->lr=0x8031BFE0u; f_800060B8(c); // 8031BFDC
  cmps(c,0,(int32_t)c->r[26],0); // 8031BFE0
  if (crb(c,2)) { goto L_8031BFFC; } // 8031BFE4
  c->r[0]=0u+0x0000000Eu; // 8031BFE8
  c->r[3]=c->r[25]|c->r[25]; // 8031BFEC
  W8(c->r[30]+0x000027BFu,c->r[0]); // 8031BFF0
  c->lr=0x8031BFF8u; f_8032195C(c); // 8031BFF4
  goto L_8031C030; // 8031BFF8
L_8031BFFC:;
  W8(c->r[30]+0x000027BFu,c->r[31]); // 8031BFFC
  c->r[3]=c->r[25]|c->r[25]; // 8031C000
  c->r[4]=c->r[27]|c->r[27]; // 8031C004
  c->r[5]=c->r[28]|c->r[28]; // 8031C008
  c->lr=0x8031C010u; f_80321778(c); // 8031C00C
  c->r[3]=c->r[25]|c->r[25]; // 8031C010
  c->lr=0x8031C018u; f_803168F4(c); // 8031C014
  cmps(c,0,(int32_t)c->r[3],0); // 8031C018
  if (crb(c,2)) { goto L_8031C030; } // 8031C01C
  c->r[0]=R32(c->r[29]+0x00000000u); // 8031C020
  W32(c->r[3]+0x00000010u,c->r[0]); // 8031C024
  c->r[0]=R32(c->r[29]+0x00000004u); // 8031C028
  W32(c->r[3]+0x00000014u,c->r[0]); // 8031C02C
L_8031C030:;
  c->r[11]=c->r[1]+0x00000030u; // 8031C030
  c->lr=0x8031C038u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031C034
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031C038
  c->lr=c->r[0]; // 8031C03C
  c->r[1]=c->r[1]+0x00000030u; // 8031C040
  return; // 8031C044
}

// BTM_DeviceAuthorized
void f_8031C048(Ctx* __restrict c) {
  trace_call(0x8031C048u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031C048
  c->r[0]=c->lr; // 8031C04C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031C050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031C054
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031C058
  c->r[30]=c->r[3]|c->r[3]; // 8031C05C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031C060
  c->r[29]=c->r[5]|c->r[5]; // 8031C064
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031C068
  c->r[28]=c->r[4]|c->r[4]; // 8031C06C
  c->lr=0x8031C074u; f_803168F4(c); // 8031C070
  cmps(c,1,(int32_t)c->r[3],0); // 8031C074
  c->r[31]=c->r[3]|c->r[3]; // 8031C078
  if (!crb(c,6)) { goto L_8031C0C4; } // 8031C07C
  c->r[3]=0u+0x80570000u; // 8031C080
  c->r[3]=c->r[3]+0x000058F8u; // 8031C084
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C088
  cmpu(c,0,c->r[0],0x00000002u); // 8031C08C
  if (crb(c,0)) { goto L_8031C204; } // 8031C090
  c->r[3]=0u+0x000D0000u; // 8031C094
  c->r[4]=0u+0x80490000u; // 8031C098
  c->r[5]=R8(c->r[30]+0x00000000u); // 8031C09C
  c->r[3]=c->r[3]+0x00000001u; // 8031C0A0
  c->r[6]=R8(c->r[30]+0x00000001u); // 8031C0A4
  c->r[4]=c->r[4]+0x00000598u; // 8031C0A8
  c->r[7]=R8(c->r[30]+0x00000002u); // 8031C0AC
  c->r[8]=R8(c->r[30]+0x00000003u); // 8031C0B0
  c->r[9]=R8(c->r[30]+0x00000004u); // 8031C0B4
  c->r[10]=R8(c->r[30]+0x00000005u); // 8031C0B8
  c->lr=0x8031C0C0u; f_8030E278(c); // 8031C0BC
  goto L_8031C204; // 8031C0C0
L_8031C0C4:;
  c->r[3]=0u+0x80570000u; // 8031C0C4
  c->r[3]=c->r[3]+0x000058F8u; // 8031C0C8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C0CC
  cmpu(c,0,c->r[0],0x00000004u); // 8031C0D0
  if (crb(c,0)) { goto L_8031C100; } // 8031C0D4
  c->r[3]=0u+0x000D0000u; // 8031C0D8
  c->r[4]=0u+0x80490000u; // 8031C0DC
  c->r[5]=c->r[28]|c->r[28]; // 8031C0E0
  c->r[3]=c->r[3]+0x00000003u; // 8031C0E4
  c->r[4]=c->r[4]+0x000005F8u; // 8031C0E8
  if (crb(c,6)) { goto L_8031C0F8; } // 8031C0EC
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 8031C0F0
  goto L_8031C0FC; // 8031C0F4
L_8031C0F8:;
  c->r[6]=0u+0x00000000u; // 8031C0F8
L_8031C0FC:;
  c->lr=0x8031C100u; f_8030E218(c); // 8031C0FC
L_8031C100:;
  cmps(c,0,(int32_t)c->r[28],0); // 8031C100
  if (!crb(c,2)) { goto L_8031C124; } // 8031C104
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031C108
  c->r[0]=c->r[0]|0x00000001u; // 8031C10C
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031C110
  c->r[0]=R32(c->r[29]+0x00000000u); // 8031C114
  W32(c->r[31]+0x00000010u,c->r[0]); // 8031C118
  c->r[0]=R32(c->r[29]+0x00000004u); // 8031C11C
  W32(c->r[31]+0x00000014u,c->r[0]); // 8031C120
L_8031C124:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031C124
  cmpu(c,0,c->r[0],0x00000004u); // 8031C128
  if (!crb(c,2)) { goto L_8031C204; } // 8031C12C
  c->r[29]=0u+0x00000000u; // 8031C130
  cmps(c,0,(int32_t)c->r[28],0); // 8031C134
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 8031C138
  if (crb(c,2)) { goto L_8031C198; } // 8031C13C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8031C140
  cmps(c,0,(int32_t)c->r[0],0); // 8031C144
  if (crb(c,2)) { goto L_8031C204; } // 8031C148
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031C14C
  cmps(c,0,(int32_t)c->r[0],0); // 8031C150
  if (crb(c,2)) { goto L_8031C174; } // 8031C154
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031C158
  cmps(c,0,(int32_t)c->r[3],0); // 8031C15C
  if (crb(c,2)) { goto L_8031C174; } // 8031C160
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031C164
  cmpu(c,0,c->r[0],0x00000003u); // 8031C168
  if (!crb(c,2)) { goto L_8031C174; } // 8031C16C
  W32(c->r[3]+0x00000004u,c->r[29]); // 8031C170
L_8031C174:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031C174
  c->r[3]=c->r[30]|c->r[30]; // 8031C178
  c->r[5]=c->r[28]|c->r[28]; // 8031C17C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031C180
  c->ctr=c->r[12]; // 8031C184
  if (true) { c->lr=0x8031C18Cu; dispatch(c,c->ctr); } // 8031C188
  c->r[0]=0u+0x00000000u; // 8031C18C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031C190
  goto L_8031C204; // 8031C194
L_8031C198:;
  c->r[3]=c->r[31]|c->r[31]; // 8031C198
  c->lr=0x8031C1A0u; f_8031E544(c); // 8031C19C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031C1A0
  c->r[4]=c->r[3]|c->r[3]; // 8031C1A4
  cmpu(c,0,c->r[0],0x00000001u); // 8031C1A8
  if (crb(c,2)) { goto L_8031C204; } // 8031C1AC
  c->r[0]=R32(c->r[31]+0x00000004u); // 8031C1B0
  cmps(c,0,(int32_t)c->r[0],0); // 8031C1B4
  if (crb(c,2)) { goto L_8031C204; } // 8031C1B8
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031C1BC
  cmps(c,0,(int32_t)c->r[0],0); // 8031C1C0
  if (crb(c,2)) { goto L_8031C1E4; } // 8031C1C4
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031C1C8
  cmps(c,0,(int32_t)c->r[3],0); // 8031C1CC
  if (crb(c,2)) { goto L_8031C1E4; } // 8031C1D0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031C1D4
  cmpu(c,0,c->r[0],0x00000003u); // 8031C1D8
  if (!crb(c,2)) { goto L_8031C1E4; } // 8031C1DC
  W32(c->r[3]+0x00000004u,c->r[29]); // 8031C1E0
L_8031C1E4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031C1E4
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 8031C1E8
  c->r[3]=c->r[30]|c->r[30]; // 8031C1EC
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031C1F0
  c->ctr=c->r[12]; // 8031C1F4
  if (true) { c->lr=0x8031C1FCu; dispatch(c,c->ctr); } // 8031C1F8
  c->r[0]=0u+0x00000000u; // 8031C1FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031C200
L_8031C204:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031C204
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031C208
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031C20C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031C210
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031C214
  c->lr=c->r[0]; // 8031C218
  c->r[1]=c->r[1]+0x00000020u; // 8031C21C
  return; // 8031C220
}

// BTM_SecBond
void f_8031C224(Ctx* __restrict c) {
  trace_call(0x8031C224u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031C224
  c->r[0]=c->lr; // 8031C228
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031C22C
  c->r[11]=c->r[1]+0x00000020u; // 8031C230
  c->lr=0x8031C238u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031C234
  c->r[7]=0u+0x80570000u; // 8031C238
  c->r[31]=0u+0x80490000u; // 8031C23C
  c->r[7]=c->r[7]+0x000058F8u; // 8031C240
  c->r[28]=c->r[3]|c->r[3]; // 8031C244
  c->r[0]=R8(c->r[7]+0x000027C0u); // 8031C248
  c->r[29]=c->r[4]|c->r[4]; // 8031C24C
  c->r[26]=c->r[5]|c->r[5]; // 8031C250
  c->r[27]=c->r[6]|c->r[6]; // 8031C254
  cmpu(c,0,c->r[0],0x00000003u); // 8031C258
  c->r[31]=c->r[31]+0x000003F8u; // 8031C25C
  if (crb(c,0)) { goto L_8031C28C; } // 8031C260
  c->r[3]=0u+0x000D0000u; // 8031C264
  c->r[5]=R8(c->r[28]+0x00000000u); // 8031C268
  c->r[6]=R8(c->r[28]+0x00000001u); // 8031C26C
  c->r[3]=c->r[3]+0x00000002u; // 8031C270
  c->r[7]=R8(c->r[28]+0x00000002u); // 8031C274
  c->r[4]=c->r[31]+0x00000230u; // 8031C278
  c->r[8]=R8(c->r[28]+0x00000003u); // 8031C27C
  c->r[9]=R8(c->r[28]+0x00000004u); // 8031C280
  c->r[10]=R8(c->r[28]+0x00000005u); // 8031C284
  c->lr=0x8031C28Cu; f_8030E278(c); // 8031C288
L_8031C28C:;
  cmpu(c,0,c->r[29],0x00000010u); // 8031C28C
  if (!crb(c,1)) { goto L_8031C2C0; } // 8031C290
  c->r[3]=0u+0x80570000u; // 8031C294
  c->r[3]=c->r[3]+0x000058F8u; // 8031C298
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C29C
  cmpu(c,0,c->r[0],0x00000001u); // 8031C2A0
  if (crb(c,0)) { goto L_8031C2B8; } // 8031C2A4
  c->r[5]=c->r[29]|c->r[29]; // 8031C2A8
  c->r[4]=c->r[31]+0x00000260u; // 8031C2AC
  c->r[3]=0u+0x000D0000u; // 8031C2B0
  c->lr=0x8031C2B8u; f_8030E200(c); // 8031C2B4
L_8031C2B8:;
  c->r[3]=0u+0x00000005u; // 8031C2B8
  goto L_8031C5D8; // 8031C2BC
L_8031C2C0:;
  c->r[3]=c->r[28]|c->r[28]; // 8031C2C0
  c->lr=0x8031C2C8u; f_803168F4(c); // 8031C2C4
  cmps(c,0,(int32_t)c->r[3],0); // 8031C2C8
  c->r[30]=c->r[3]|c->r[3]; // 8031C2CC
  if (!crb(c,2)) { goto L_8031C310; } // 8031C2D0
  c->r[3]=c->r[28]|c->r[28]; // 8031C2D4
  c->lr=0x8031C2DCu; f_8031671C(c); // 8031C2D8
  cmps(c,0,(int32_t)c->r[3],0); // 8031C2DC
  c->r[30]=c->r[3]|c->r[3]; // 8031C2E0
  if (!crb(c,2)) { goto L_8031C310; } // 8031C2E4
  c->r[3]=0u+0x80570000u; // 8031C2E8
  c->r[3]=c->r[3]+0x000058F8u; // 8031C2EC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C2F0
  cmpu(c,0,c->r[0],0x00000001u); // 8031C2F4
  if (crb(c,0)) { goto L_8031C308; } // 8031C2F8
  c->r[4]=c->r[31]+0x00000280u; // 8031C2FC
  c->r[3]=0u+0x000D0000u; // 8031C300
  c->lr=0x8031C308u; f_8030E1E8(c); // 8031C304
L_8031C308:;
  c->r[3]=0u+0x00000003u; // 8031C308
  goto L_8031C5D8; // 8031C30C
L_8031C310:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 8031C310
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031C314
  if (crb(c,2)) { goto L_8031C354; } // 8031C318
  c->r[0]=R8(c->r[30]+0x00000076u); // 8031C31C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8031C320
  if (crb(c,2)) { goto L_8031C354; } // 8031C324
  c->r[3]=0u+0x80570000u; // 8031C328
  c->r[3]=c->r[3]+0x000058F8u; // 8031C32C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C330
  cmpu(c,0,c->r[0],0x00000002u); // 8031C334
  if (crb(c,0)) { goto L_8031C34C; } // 8031C338
  c->r[3]=0u+0x000D0000u; // 8031C33C
  c->r[4]=c->r[31]+0x000002A0u; // 8031C340
  c->r[3]=c->r[3]+0x00000001u; // 8031C344
  c->lr=0x8031C34Cu; f_8030E1E8(c); // 8031C348
L_8031C34C:;
  c->r[3]=0u+0x00000000u; // 8031C34C
  goto L_8031C5D8; // 8031C350
L_8031C354:;
  c->r[3]=c->r[28]|c->r[28]; // 8031C354
  c->r[4]=0u+0x00000000u; // 8031C358
  c->lr=0x8031C360u; f_803180E0(c); // 8031C35C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031C360
  if (crb(c,2)) { goto L_8031C370; } // 8031C364
  c->r[3]=0u+0x00000003u; // 8031C368
  goto L_8031C5D8; // 8031C36C
L_8031C370:;
  c->r[0]=0u+0x00000050u; // 8031C370
  c->r[3]=0u+0x80570000u; // 8031C374
  W8(c->r[30]+0x00000081u,c->r[0]); // 8031C378
  c->r[0]=0u+0x00000001u; // 8031C37C
  cmps(c,0,(int32_t)c->r[29],0); // 8031C380
  c->r[3]=c->r[3]+0x000058F8u; // 8031C384
  W8(c->r[30]+0x00000080u,c->r[0]); // 8031C388
  c->r[0]=R32(c->r[27]+0x00000000u); // 8031C38C
  W32(c->r[30]+0x00000010u,c->r[0]); // 8031C390
  c->r[0]=R32(c->r[27]+0x00000004u); // 8031C394
  W32(c->r[30]+0x00000014u,c->r[0]); // 8031C398
  W8(c->r[3]+0x0000197Fu,c->r[29]); // 8031C39C
  if (crb(c,2)) { goto L_8031C3B4; } // 8031C3A0
  c->r[4]=c->r[26]|c->r[26]; // 8031C3A4
  c->r[5]=c->r[29]|c->r[29]; // 8031C3A8
  c->r[3]=c->r[3]+0x00001980u; // 8031C3AC
  c->lr=0x8031C3B4u; f_80005FB4(c); // 8031C3B0
L_8031C3B4:;
  c->r[3]=R8(c->r[30]+0x00000076u); // 8031C3B4
  c->r[0]=0u+0xFFFFFFE9u; // 8031C3B8
  c->r[0]=c->r[3]&c->r[0]; // 8031C3BC
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031C3C0
  c->r[0]=R8(c->r[30]+0x00000023u); // 8031C3C4
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8031C3C8
  cmps(c,0,(int32_t)c->r[0],5); // 8031C3CC
  if (!crb(c,2)) { goto L_8031C404; } // 8031C3D0
  c->r[0]=R8(c->r[30]+0x00000024u); // 8031C3D4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031C3D8
  if (crb(c,2)) { goto L_8031C404; } // 8031C3DC
  c->r[4]=0u+0x80570000u; // 8031C3E0
  c->r[4]=c->r[4]+0x000058F8u; // 8031C3E4
  c->r[0]=R8(c->r[4]+0x00000020u); // 8031C3E8
  cmpu(c,0,c->r[0],0x00000001u); // 8031C3EC
  if (crb(c,2)) { goto L_8031C404; } // 8031C3F0
  c->r[0]=0u+0x00000001u; // 8031C3F4
  c->r[3]=0u+0x00000001u; // 8031C3F8
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 8031C3FC
  c->lr=0x8031C404u; f_8032275C(c); // 8031C400
L_8031C404:;
  c->r[29]=0u+0x80570000u; // 8031C404
  c->r[27]=0u+0x00000000u; // 8031C408
  c->r[29]=c->r[29]+0x000058F8u; // 8031C40C
  W8(c->r[29]+0x0000197Eu,c->r[27]); // 8031C410
  c->r[0]=R16(c->r[30]+0x00000018u); // 8031C414
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031C418
  if (crb(c,2)) { goto L_8031C458; } // 8031C41C
  c->r[3]=R8(c->r[30]+0x00000076u); // 8031C420
  c->r[0]=0u+0x00000001u; // 8031C424
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 8031C428
  W8(c->r[30]+0x00000076u,c->r[3]); // 8031C42C
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 8031C430
  c->r[3]=R16(c->r[30]+0x00000018u); // 8031C434
  c->lr=0x8031C43Cu; f_80321A8C(c); // 8031C438
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031C43C
  if (!crb(c,2)) { goto L_8031C44C; } // 8031C440
  c->r[3]=0u+0x00000003u; // 8031C444
  goto L_8031C5D8; // 8031C448
L_8031C44C:;
  W8(c->r[29]+0x0000197Du,c->r[27]); // 8031C44C
  c->r[3]=0u+0x00000001u; // 8031C450
  goto L_8031C5D8; // 8031C454
L_8031C458:;
  c->r[0]=R8(c->r[29]+0x00001978u); // 8031C458
  cmpu(c,0,c->r[0],0x00000003u); // 8031C45C
  if (crb(c,2)) { goto L_8031C4C8; } // 8031C460
  c->r[0]=R8(c->r[29]+0x000027C0u); // 8031C464
  cmpu(c,0,c->r[0],0x00000005u); // 8031C468
  if (crb(c,0)) { goto L_8031C480; } // 8031C46C
  c->r[3]=0u+0x000D0000u; // 8031C470
  c->r[4]=c->r[31]+0x000002C0u; // 8031C474
  c->r[3]=c->r[3]+0x00000004u; // 8031C478
  c->lr=0x8031C480u; f_8030E1E8(c); // 8031C47C
L_8031C480:;
  c->r[3]=0u+0x00000001u; // 8031C480
  c->lr=0x8031C488u; f_80322CD0(c); // 8031C484
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031C488
  if (!crb(c,2)) { goto L_8031C4B8; } // 8031C48C
  c->r[3]=0u+0x80570000u; // 8031C490
  c->r[3]=c->r[3]+0x000058F8u; // 8031C494
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C498
  cmpu(c,0,c->r[0],0x00000001u); // 8031C49C
  if (crb(c,0)) { goto L_8031C4B0; } // 8031C4A0
  c->r[4]=c->r[31]+0x000002E4u; // 8031C4A4
  c->r[3]=0u+0x000D0000u; // 8031C4A8
  c->lr=0x8031C4B0u; f_8030E1E8(c); // 8031C4AC
L_8031C4B0:;
  c->r[3]=0u+0x00000003u; // 8031C4B0
  goto L_8031C5D8; // 8031C4B4
L_8031C4B8:;
  c->r[3]=0u+0x80570000u; // 8031C4B8
  c->r[0]=0u+0x00000001u; // 8031C4BC
  c->r[3]=c->r[3]+0x000058F8u; // 8031C4C0
  W8(c->r[3]+0x0000197Bu,c->r[0]); // 8031C4C4
L_8031C4C8:;
  c->r[3]=0u+0x80570000u; // 8031C4C8
  c->r[0]=0u+0x00000001u; // 8031C4CC
  c->r[3]=c->r[3]+0x000058F8u; // 8031C4D0
  W8(c->r[3]+0x0000197Du,c->r[0]); // 8031C4D4
  c->lr=0x8031C4DCu; f_80317C38(c); // 8031C4D8
  c->r[4]=R8(c->r[3]+0x00000000u); // 8031C4DC
  c->r[0]=0u+0x00000000u; // 8031C4E0
  c->r[3]=c->r[28]|c->r[28]; // 8031C4E4
  W8(c->r[30]+0x00000085u,c->r[0]); // 8031C4E8
  c->r[27]=rotl(c->r[4],27)&0x00000001u; // 8031C4EC
  c->lr=0x8031C4F4u; f_80319000(c); // 8031C4F0
  cmps(c,0,(int32_t)c->r[3],0); // 8031C4F4
  c->r[4]=c->r[3]|c->r[3]; // 8031C4F8
  if (crb(c,2)) { goto L_8031C524; } // 8031C4FC
  c->r[0]=R16(c->r[4]+0x00000000u); // 8031C500
  c->r[3]=c->r[28]|c->r[28]; // 8031C504
  c->r[5]=R8(c->r[4]+0x0000000Bu); // 8031C508
  c->r[8]=c->r[27]|c->r[27]; // 8031C50C
  c->r[6]=R8(c->r[4]+0x0000000Du); // 8031C510
  c->r[7]=c->r[0]|0x00008000u; // 8031C514
  c->r[4]=0u+0x00000018u; // 8031C518
  c->lr=0x8031C520u; f_80321288(c); // 8031C51C
  goto L_8031C540; // 8031C520
L_8031C524:;
  c->r[7]=R16(c->r[30]+0x0000001Au); // 8031C524
  c->r[3]=c->r[28]|c->r[28]; // 8031C528
  c->r[8]=c->r[27]|c->r[27]; // 8031C52C
  c->r[4]=0u+0x00000018u; // 8031C530
  c->r[5]=0u+0x00000001u; // 8031C534
  c->r[6]=0u+0x00000000u; // 8031C538
  c->lr=0x8031C540u; f_80321288(c); // 8031C53C
L_8031C540:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031C540
  if (crb(c,2)) { goto L_8031C550; } // 8031C544
  c->r[3]=0u+0x00000001u; // 8031C548
  goto L_8031C5D8; // 8031C54C
L_8031C550:;
  c->r[3]=0u+0x80570000u; // 8031C550
  c->r[3]=c->r[3]+0x000058F8u; // 8031C554
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C558
  cmpu(c,0,c->r[0],0x00000001u); // 8031C55C
  if (crb(c,0)) { goto L_8031C570; } // 8031C560
  c->r[4]=c->r[31]+0x000002E4u; // 8031C564
  c->r[3]=0u+0x000D0000u; // 8031C568
  c->lr=0x8031C570u; f_8030E1E8(c); // 8031C56C
L_8031C570:;
  c->r[4]=0u+0x80570000u; // 8031C570
  c->r[4]=c->r[4]+0x000058F8u; // 8031C574
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 8031C578
  cmps(c,0,(int32_t)c->r[0],0); // 8031C57C
  if (crb(c,2)) { goto L_8031C5D4; } // 8031C580
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031C584
  c->r[3]=0u+0x00000000u; // 8031C588
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 8031C58C
  cmpu(c,0,c->r[0],0x00000005u); // 8031C590
  if (crb(c,0)) { goto L_8031C5B8; } // 8031C594
  c->r[5]=R8(c->r[4]+0x00001978u); // 8031C598
  c->r[3]=0u+0x000D0000u; // 8031C59C
  c->r[3]=c->r[3]+0x00000004u; // 8031C5A0
  c->r[4]=c->r[31]+0x000002FCu; // 8031C5A4
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 8031C5A8
  c->r[0]=cntlz(c->r[0]); // 8031C5AC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8031C5B0
  c->lr=0x8031C5B8u; f_8030E200(c); // 8031C5B4
L_8031C5B8:;
  c->r[3]=0u+0x80570000u; // 8031C5B8
  c->r[3]=c->r[3]+0x000058F8u; // 8031C5BC
  c->r[3]=R8(c->r[3]+0x00001978u); // 8031C5C0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8031C5C4
  c->r[0]=cntlz(c->r[0]); // 8031C5C8
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 8031C5CC
  c->lr=0x8031C5D4u; f_80322CD0(c); // 8031C5D0
L_8031C5D4:;
  c->r[3]=0u+0x00000003u; // 8031C5D4
L_8031C5D8:;
  c->r[11]=c->r[1]+0x00000020u; // 8031C5D8
  c->lr=0x8031C5E0u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031C5DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031C5E0
  c->lr=c->r[0]; // 8031C5E4
  c->r[1]=c->r[1]+0x00000020u; // 8031C5E8
  return; // 8031C5EC
}

// btm_sec_l2cap_access_req
void f_8031C5F0(Ctx* __restrict c) {
  trace_call(0x8031C5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031C5F0
  c->r[0]=c->lr; // 8031C5F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031C5F8
  c->r[11]=c->r[1]+0x00000030u; // 8031C5FC
  c->lr=0x8031C604u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031C600
  c->r[31]=0u+0x80490000u; // 8031C604
  c->r[24]=c->r[3]|c->r[3]; // 8031C608
  c->r[25]=c->r[4]|c->r[4]; // 8031C60C
  c->r[26]=c->r[5]|c->r[5]; // 8031C610
  c->r[27]=c->r[6]|c->r[6]; // 8031C614
  c->r[28]=c->r[7]|c->r[7]; // 8031C618
  c->r[31]=c->r[31]+0x000003F8u; // 8031C61C
  c->lr=0x8031C624u; f_803168F4(c); // 8031C620
  cmps(c,0,(int32_t)c->r[3],0); // 8031C624
  c->r[30]=c->r[3]|c->r[3]; // 8031C628
  if (!crb(c,2)) { goto L_8031C694; } // 8031C62C
  c->r[3]=c->r[24]|c->r[24]; // 8031C630
  c->lr=0x8031C638u; f_8031671C(c); // 8031C634
  cmps(c,0,(int32_t)c->r[3],0); // 8031C638
  c->r[30]=c->r[3]|c->r[3]; // 8031C63C
  if (!crb(c,2)) { goto L_8031C694; } // 8031C640
  c->r[3]=0u+0x80570000u; // 8031C644
  c->r[3]=c->r[3]+0x000058F8u; // 8031C648
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C64C
  cmpu(c,0,c->r[0],0x00000002u); // 8031C650
  if (crb(c,0)) { goto L_8031C66C; } // 8031C654
  c->r[3]=0u+0x000D0000u; // 8031C658
  c->r[5]=c->r[25]|c->r[25]; // 8031C65C
  c->r[3]=c->r[3]+0x00000001u; // 8031C660
  c->r[4]=c->r[31]+0x00000410u; // 8031C664
  c->lr=0x8031C66Cu; f_8030E200(c); // 8031C668
L_8031C66C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8031C66C
  if (crb(c,2)) { goto L_8031C68C; } // 8031C670
  c->r[12]=c->r[28]|c->r[28]; // 8031C674
  c->r[3]=c->r[24]|c->r[24]; // 8031C678
  c->r[4]=0u+0x00000000u; // 8031C67C
  c->r[5]=0u+0x00000003u; // 8031C680
  c->ctr=c->r[12]; // 8031C684
  if (true) { c->lr=0x8031C68Cu; dispatch(c,c->ctr); } // 8031C688
L_8031C68C:;
  c->r[3]=0u+0x00000003u; // 8031C68C
  goto L_8031CA3C; // 8031C690
L_8031C694:;
  c->r[3]=0u+0x80570000u; // 8031C694
  c->r[0]=0u+0x00000004u; // 8031C698
  c->r[3]=c->r[3]+0x000058F8u; // 8031C69C
  W16(c->r[30]+0x00000018u,c->r[26]); // 8031C6A0
  c->r[4]=c->r[3]+0x00001990u; // 8031C6A4
  c->r[3]=0u+0x00000000u; // 8031C6A8
  c->ctr=c->r[0]; // 8031C6AC
L_8031C6B0:;
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 8031C6B0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C6B4
  if (crb(c,2)) { goto L_8031C6CC; } // 8031C6B8
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C6BC
  cmpu(c,0,c->r[0],c->r[25]); // 8031C6C0
  if (!crb(c,2)) { goto L_8031C6CC; } // 8031C6C4
  goto L_8031C77C; // 8031C6C8
L_8031C6CC:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 8031C6CC
  c->r[4]=c->r[4]+0x0000003Cu; // 8031C6D0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C6D4
  if (crb(c,2)) { goto L_8031C6EC; } // 8031C6D8
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C6DC
  cmpu(c,0,c->r[0],c->r[25]); // 8031C6E0
  if (!crb(c,2)) { goto L_8031C6EC; } // 8031C6E4
  goto L_8031C77C; // 8031C6E8
L_8031C6EC:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 8031C6EC
  c->r[4]=c->r[4]+0x0000003Cu; // 8031C6F0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C6F4
  if (crb(c,2)) { goto L_8031C70C; } // 8031C6F8
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C6FC
  cmpu(c,0,c->r[0],c->r[25]); // 8031C700
  if (!crb(c,2)) { goto L_8031C70C; } // 8031C704
  goto L_8031C77C; // 8031C708
L_8031C70C:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 8031C70C
  c->r[4]=c->r[4]+0x0000003Cu; // 8031C710
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C714
  if (crb(c,2)) { goto L_8031C72C; } // 8031C718
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C71C
  cmpu(c,0,c->r[0],c->r[25]); // 8031C720
  if (!crb(c,2)) { goto L_8031C72C; } // 8031C724
  goto L_8031C77C; // 8031C728
L_8031C72C:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 8031C72C
  c->r[4]=c->r[4]+0x0000003Cu; // 8031C730
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C734
  if (crb(c,2)) { goto L_8031C74C; } // 8031C738
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C73C
  cmpu(c,0,c->r[0],c->r[25]); // 8031C740
  if (!crb(c,2)) { goto L_8031C74C; } // 8031C744
  goto L_8031C77C; // 8031C748
L_8031C74C:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 8031C74C
  c->r[4]=c->r[4]+0x0000003Cu; // 8031C750
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C754
  if (crb(c,2)) { goto L_8031C76C; } // 8031C758
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C75C
  cmpu(c,0,c->r[0],c->r[25]); // 8031C760
  if (!crb(c,2)) { goto L_8031C76C; } // 8031C764
  goto L_8031C77C; // 8031C768
L_8031C76C:;
  c->r[3]=c->r[3]+0x00000005u; // 8031C76C
  c->r[4]=c->r[4]+0x0000003Cu; // 8031C770
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031C6B0; } // 8031C774
  c->r[4]=0u+0x00000000u; // 8031C778
L_8031C77C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8031C77C
  if (!crb(c,2)) { goto L_8031C7D4; } // 8031C780
  c->r[3]=0u+0x80570000u; // 8031C784
  c->r[3]=c->r[3]+0x000058F8u; // 8031C788
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C78C
  cmpu(c,0,c->r[0],0x00000002u); // 8031C790
  if (crb(c,0)) { goto L_8031C7AC; } // 8031C794
  c->r[3]=0u+0x000D0000u; // 8031C798
  c->r[5]=c->r[25]|c->r[25]; // 8031C79C
  c->r[3]=c->r[3]+0x00000001u; // 8031C7A0
  c->r[4]=c->r[31]+0x00000448u; // 8031C7A4
  c->lr=0x8031C7ACu; f_8030E200(c); // 8031C7A8
L_8031C7AC:;
  cmps(c,0,(int32_t)c->r[28],0); // 8031C7AC
  if (crb(c,2)) { goto L_8031C7CC; } // 8031C7B0
  c->r[12]=c->r[28]|c->r[28]; // 8031C7B4
  c->r[3]=c->r[24]|c->r[24]; // 8031C7B8
  c->r[4]=0u+0x00000000u; // 8031C7BC
  c->r[5]=0u+0x00000004u; // 8031C7C0
  c->ctr=c->r[12]; // 8031C7C4
  if (true) { c->lr=0x8031C7CCu; dispatch(c,c->ctr); } // 8031C7C8
L_8031C7CC:;
  c->r[3]=0u+0x00000004u; // 8031C7CC
  goto L_8031CA3C; // 8031C7D0
L_8031C7D4:;
  cmps(c,0,(int32_t)c->r[27],0); // 8031C7D4
  if (crb(c,2)) { goto L_8031C7EC; } // 8031C7D8
  if (crb(c,2)) { goto L_8031C7F0; } // 8031C7DC
  c->r[0]=R32(c->r[30]+0x00000000u); // 8031C7E0
  cmps(c,0,(int32_t)c->r[0],0); // 8031C7E4
  if (!crb(c,2)) { goto L_8031C7F0; } // 8031C7E8
L_8031C7EC:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 8031C7EC
L_8031C7F0:;
  c->r[3]=0u+0x80570000u; // 8031C7F0
  c->r[0]=0u+0x00000006u; // 8031C7F4
  c->r[3]=c->r[3]+0x000058F8u; // 8031C7F8
  c->r[29]=R8(c->r[4]+0x0000000Eu); // 8031C7FC
  c->r[7]=c->r[3]+0x00001990u; // 8031C800
  c->r[6]=0u+0x00000000u; // 8031C804
  c->r[5]=0u+0x00000000u; // 8031C808
  c->ctr=c->r[0]; // 8031C80C
L_8031C810:;
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 8031C810
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C814
  if (crb(c,2)) { goto L_8031C848; } // 8031C818
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 8031C81C
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C820
  cmpu(c,0,c->r[3],c->r[0]); // 8031C824
  if (!crb(c,2)) { goto L_8031C848; } // 8031C828
  cmps(c,0,(int32_t)c->r[6],0); // 8031C82C
  if (!crb(c,2)) { goto L_8031C90C; } // 8031C830
  cmpu(c,0,c->r[4],c->r[7]); // 8031C834
  if (!crb(c,2)) { goto L_8031C848; } // 8031C838
  c->r[6]=0u+0x00000001u; // 8031C83C
  goto L_8031C848; // 8031C840
  goto L_8031C90C; // 8031C844
L_8031C848:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 8031C848
  c->r[7]=c->r[7]+0x0000003Cu; // 8031C84C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C850
  if (crb(c,2)) { goto L_8031C884; } // 8031C854
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 8031C858
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C85C
  cmpu(c,0,c->r[3],c->r[0]); // 8031C860
  if (!crb(c,2)) { goto L_8031C884; } // 8031C864
  cmps(c,0,(int32_t)c->r[6],0); // 8031C868
  if (!crb(c,2)) { goto L_8031C90C; } // 8031C86C
  cmpu(c,0,c->r[4],c->r[7]); // 8031C870
  if (!crb(c,2)) { goto L_8031C884; } // 8031C874
  c->r[6]=0u+0x00000001u; // 8031C878
  goto L_8031C884; // 8031C87C
  goto L_8031C90C; // 8031C880
L_8031C884:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 8031C884
  c->r[7]=c->r[7]+0x0000003Cu; // 8031C888
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C88C
  if (crb(c,2)) { goto L_8031C8C0; } // 8031C890
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 8031C894
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C898
  cmpu(c,0,c->r[3],c->r[0]); // 8031C89C
  if (!crb(c,2)) { goto L_8031C8C0; } // 8031C8A0
  cmps(c,0,(int32_t)c->r[6],0); // 8031C8A4
  if (!crb(c,2)) { goto L_8031C90C; } // 8031C8A8
  cmpu(c,0,c->r[4],c->r[7]); // 8031C8AC
  if (!crb(c,2)) { goto L_8031C8C0; } // 8031C8B0
  c->r[6]=0u+0x00000001u; // 8031C8B4
  goto L_8031C8C0; // 8031C8B8
  goto L_8031C90C; // 8031C8BC
L_8031C8C0:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 8031C8C0
  c->r[7]=c->r[7]+0x0000003Cu; // 8031C8C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031C8C8
  if (crb(c,2)) { goto L_8031C8FC; } // 8031C8CC
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 8031C8D0
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 8031C8D4
  cmpu(c,0,c->r[3],c->r[0]); // 8031C8D8
  if (!crb(c,2)) { goto L_8031C8FC; } // 8031C8DC
  cmps(c,0,(int32_t)c->r[6],0); // 8031C8E0
  if (!crb(c,2)) { goto L_8031C90C; } // 8031C8E4
  cmpu(c,0,c->r[4],c->r[7]); // 8031C8E8
  if (!crb(c,2)) { goto L_8031C8FC; } // 8031C8EC
  c->r[6]=0u+0x00000001u; // 8031C8F0
  goto L_8031C8FC; // 8031C8F4
  goto L_8031C90C; // 8031C8F8
L_8031C8FC:;
  c->r[5]=c->r[5]+0x00000003u; // 8031C8FC
  c->r[7]=c->r[7]+0x0000003Cu; // 8031C900
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031C810; } // 8031C904
  c->r[7]=0u+0x00000000u; // 8031C908
L_8031C90C:;
  cmps(c,0,(int32_t)c->r[7],0); // 8031C90C
  if (crb(c,2)) { goto L_8031C964; } // 8031C910
  c->r[3]=0u+0x80570000u; // 8031C914
  c->r[3]=c->r[3]+0x000058F8u; // 8031C918
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C91C
  cmpu(c,0,c->r[0],0x00000004u); // 8031C920
  if (crb(c,0)) { goto L_8031C93C; } // 8031C924
  c->r[3]=0u+0x000D0000u; // 8031C928
  c->r[5]=c->r[25]|c->r[25]; // 8031C92C
  c->r[3]=c->r[3]+0x00000003u; // 8031C930
  c->r[4]=c->r[31]+0x0000048Cu; // 8031C934
  c->lr=0x8031C93Cu; f_8030E200(c); // 8031C938
L_8031C93C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8031C93C
  if (crb(c,2)) { goto L_8031C95C; } // 8031C940
  c->r[12]=c->r[28]|c->r[28]; // 8031C944
  c->r[3]=c->r[24]|c->r[24]; // 8031C948
  c->r[4]=0u+0x00000000u; // 8031C94C
  c->r[5]=0u+0x00000000u; // 8031C950
  c->ctr=c->r[12]; // 8031C954
  if (true) { c->lr=0x8031C95Cu; dispatch(c,c->ctr); } // 8031C958
L_8031C95C:;
  c->r[3]=0u+0x00000000u; // 8031C95C
  goto L_8031CA3C; // 8031C960
L_8031C964:;
  W32(c->r[30]+0x00000004u,c->r[28]); // 8031C964
  c->r[0]=0u+0x00000000u; // 8031C968
  c->r[3]=0u+0x80570000u; // 8031C96C
  W32(c->r[30]+0x00000008u,c->r[0]); // 8031C970
  c->r[3]=c->r[3]+0x000058F8u; // 8031C974
  W8(c->r[30]+0x00000081u,c->r[29]); // 8031C978
  W8(c->r[30]+0x00000080u,c->r[27]); // 8031C97C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C980
  cmpu(c,0,c->r[0],0x00000004u); // 8031C984
  if (crb(c,0)) { goto L_8031C9B0; } // 8031C988
  c->r[3]=0u+0x000D0000u; // 8031C98C
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 8031C990
  c->r[8]=R8(c->r[30]+0x00000076u); // 8031C994
  c->r[5]=c->r[25]|c->r[25]; // 8031C998
  c->r[6]=c->r[26]|c->r[26]; // 8031C99C
  c->r[9]=c->r[29]|c->r[29]; // 8031C9A0
  c->r[3]=c->r[3]+0x00000003u; // 8031C9A4
  c->r[4]=c->r[31]+0x000004D0u; // 8031C9A8
  c->lr=0x8031C9B0u; f_8030E260(c); // 8031C9AC
L_8031C9B0:;
  cmps(c,0,(int32_t)c->r[27],0); // 8031C9B0
  if (!crb(c,2)) { goto L_8031C9FC; } // 8031C9B4
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 8031C9B8
  if (crb(c,2)) { goto L_8031C9FC; } // 8031C9BC
  c->r[0]=R8(c->r[30]+0x00000076u); // 8031C9C0
  c->r[3]=0u+0x80570000u; // 8031C9C4
  c->r[3]=c->r[3]+0x000058F8u; // 8031C9C8
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8031C9CC
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031C9D0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031C9D4
  cmpu(c,0,c->r[0],0x00000004u); // 8031C9D8
  if (crb(c,0)) { goto L_8031C9FC; } // 8031C9DC
  c->r[3]=0u+0x000D0000u; // 8031C9E0
  c->r[5]=R32(c->r[30]+0x00000014u); // 8031C9E4
  c->r[6]=R32(c->r[30]+0x00000010u); // 8031C9E8
  c->r[3]=c->r[3]+0x00000003u; // 8031C9EC
  c->r[7]=R8(c->r[30]+0x00000076u); // 8031C9F0
  c->r[4]=c->r[31]+0x00000528u; // 8031C9F4
  c->lr=0x8031C9FCu; f_8030E230(c); // 8031C9F8
L_8031C9FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8031C9FC
  c->lr=0x8031CA04u; f_8031E544(c); // 8031CA00
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 8031CA04
  c->r[25]=c->r[3]|c->r[3]; // 8031CA08
  cmpu(c,0,c->r[5],0x00000001u); // 8031CA0C
  if (crb(c,2)) { goto L_8031CA38; } // 8031CA10
  cmps(c,0,(int32_t)c->r[28],0); // 8031CA14
  if (crb(c,2)) { goto L_8031CA38; } // 8031CA18
  c->r[12]=c->r[28]|c->r[28]; // 8031CA1C
  c->r[3]=c->r[24]|c->r[24]; // 8031CA20
  c->r[4]=R32(c->r[30]+0x00000008u); // 8031CA24
  c->ctr=c->r[12]; // 8031CA28
  if (true) { c->lr=0x8031CA30u; dispatch(c,c->ctr); } // 8031CA2C
  c->r[0]=0u+0x00000000u; // 8031CA30
  W32(c->r[30]+0x00000004u,c->r[0]); // 8031CA34
L_8031CA38:;
  c->r[3]=c->r[25]|c->r[25]; // 8031CA38
L_8031CA3C:;
  c->r[11]=c->r[1]+0x00000030u; // 8031CA3C
  c->lr=0x8031CA44u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031CA40
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031CA44
  c->lr=c->r[0]; // 8031CA48
  c->r[1]=c->r[1]+0x00000030u; // 8031CA4C
  return; // 8031CA50
}

// btm_sec_mx_access_request
void f_8031CA54(Ctx* __restrict c) {
  trace_call(0x8031CA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031CA54
  c->r[0]=c->lr; // 8031CA58
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031CA5C
  c->r[11]=c->r[1]+0x00000030u; // 8031CA60
  c->lr=0x8031CA68u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031CA64
  c->r[24]=c->r[3]|c->r[3]; // 8031CA68
  c->r[25]=c->r[4]|c->r[4]; // 8031CA6C
  c->r[26]=c->r[5]|c->r[5]; // 8031CA70
  c->r[27]=c->r[6]|c->r[6]; // 8031CA74
  c->r[28]=c->r[7]|c->r[7]; // 8031CA78
  c->r[29]=c->r[8]|c->r[8]; // 8031CA7C
  c->r[30]=c->r[9]|c->r[9]; // 8031CA80
  c->lr=0x8031CA88u; f_803168F4(c); // 8031CA84
  cmps(c,0,(int32_t)c->r[3],0); // 8031CA88
  c->r[31]=c->r[3]|c->r[3]; // 8031CA8C
  if (!crb(c,2)) { goto L_8031CACC; } // 8031CA90
  c->r[3]=c->r[24]|c->r[24]; // 8031CA94
  c->lr=0x8031CA9Cu; f_8031671C(c); // 8031CA98
  cmps(c,0,(int32_t)c->r[3],0); // 8031CA9C
  c->r[31]=c->r[3]|c->r[3]; // 8031CAA0
  if (!crb(c,2)) { goto L_8031CACC; } // 8031CAA4
  cmps(c,0,(int32_t)c->r[29],0); // 8031CAA8
  if (crb(c,2)) { goto L_8031CCD8; } // 8031CAAC
  c->r[12]=c->r[29]|c->r[29]; // 8031CAB0
  c->r[3]=c->r[24]|c->r[24]; // 8031CAB4
  c->r[4]=c->r[30]|c->r[30]; // 8031CAB8
  c->r[5]=0u+0x00000003u; // 8031CABC
  c->ctr=c->r[12]; // 8031CAC0
  if (true) { c->lr=0x8031CAC8u; dispatch(c,c->ctr); } // 8031CAC4
  goto L_8031CCD8; // 8031CAC8
L_8031CACC:;
  c->r[3]=0u+0x80570000u; // 8031CACC
  c->r[0]=0u+0x00000008u; // 8031CAD0
  c->r[3]=c->r[3]+0x000058F8u; // 8031CAD4
  c->r[4]=0u+0x00000000u; // 8031CAD8
  c->r[5]=c->r[3]+0x00001990u; // 8031CADC
  c->ctr=c->r[0]; // 8031CAE0
L_8031CAE4:;
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8031CAE4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CAE8
  if (crb(c,2)) { goto L_8031CB34; } // 8031CAEC
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 8031CAF0
  cmpu(c,0,c->r[0],c->r[25]); // 8031CAF4
  if (!crb(c,2)) { goto L_8031CB34; } // 8031CAF8
  c->r[0]=R32(c->r[5]+0x00000000u); // 8031CAFC
  cmpu(c,0,c->r[0],c->r[27]); // 8031CB00
  if (!crb(c,2)) { goto L_8031CB34; } // 8031CB04
  cmps(c,0,(int32_t)c->r[26],0); // 8031CB08
  if (crb(c,2)) { goto L_8031CB1C; } // 8031CB0C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8031CB10
  cmpu(c,0,c->r[0],c->r[28]); // 8031CB14
  if (crb(c,2)) { goto L_8031CBEC; } // 8031CB18
L_8031CB1C:;
  cmps(c,0,(int32_t)c->r[26],0); // 8031CB1C
  if (!crb(c,2)) { goto L_8031CB34; } // 8031CB20
  c->r[0]=R32(c->r[5]+0x00000008u); // 8031CB24
  cmpu(c,0,c->r[0],c->r[28]); // 8031CB28
  if (!crb(c,2)) { goto L_8031CB34; } // 8031CB2C
  goto L_8031CBEC; // 8031CB30
L_8031CB34:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 8031CB34
  c->r[5]=c->r[5]+0x0000003Cu; // 8031CB38
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CB3C
  if (crb(c,2)) { goto L_8031CB88; } // 8031CB40
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 8031CB44
  cmpu(c,0,c->r[0],c->r[25]); // 8031CB48
  if (!crb(c,2)) { goto L_8031CB88; } // 8031CB4C
  c->r[0]=R32(c->r[5]+0x00000000u); // 8031CB50
  cmpu(c,0,c->r[0],c->r[27]); // 8031CB54
  if (!crb(c,2)) { goto L_8031CB88; } // 8031CB58
  cmps(c,0,(int32_t)c->r[26],0); // 8031CB5C
  if (crb(c,2)) { goto L_8031CB70; } // 8031CB60
  c->r[0]=R32(c->r[5]+0x00000004u); // 8031CB64
  cmpu(c,0,c->r[0],c->r[28]); // 8031CB68
  if (crb(c,2)) { goto L_8031CBEC; } // 8031CB6C
L_8031CB70:;
  cmps(c,0,(int32_t)c->r[26],0); // 8031CB70
  if (!crb(c,2)) { goto L_8031CB88; } // 8031CB74
  c->r[0]=R32(c->r[5]+0x00000008u); // 8031CB78
  cmpu(c,0,c->r[0],c->r[28]); // 8031CB7C
  if (!crb(c,2)) { goto L_8031CB88; } // 8031CB80
  goto L_8031CBEC; // 8031CB84
L_8031CB88:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 8031CB88
  c->r[5]=c->r[5]+0x0000003Cu; // 8031CB8C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CB90
  if (crb(c,2)) { goto L_8031CBDC; } // 8031CB94
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 8031CB98
  cmpu(c,0,c->r[0],c->r[25]); // 8031CB9C
  if (!crb(c,2)) { goto L_8031CBDC; } // 8031CBA0
  c->r[0]=R32(c->r[5]+0x00000000u); // 8031CBA4
  cmpu(c,0,c->r[0],c->r[27]); // 8031CBA8
  if (!crb(c,2)) { goto L_8031CBDC; } // 8031CBAC
  cmps(c,0,(int32_t)c->r[26],0); // 8031CBB0
  if (crb(c,2)) { goto L_8031CBC4; } // 8031CBB4
  c->r[0]=R32(c->r[5]+0x00000004u); // 8031CBB8
  cmpu(c,0,c->r[0],c->r[28]); // 8031CBBC
  if (crb(c,2)) { goto L_8031CBEC; } // 8031CBC0
L_8031CBC4:;
  cmps(c,0,(int32_t)c->r[26],0); // 8031CBC4
  if (!crb(c,2)) { goto L_8031CBDC; } // 8031CBC8
  c->r[0]=R32(c->r[5]+0x00000008u); // 8031CBCC
  cmpu(c,0,c->r[0],c->r[28]); // 8031CBD0
  if (!crb(c,2)) { goto L_8031CBDC; } // 8031CBD4
  goto L_8031CBEC; // 8031CBD8
L_8031CBDC:;
  c->r[4]=c->r[4]+0x00000002u; // 8031CBDC
  c->r[5]=c->r[5]+0x0000003Cu; // 8031CBE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031CAE4; } // 8031CBE4
  c->r[5]=0u+0x00000000u; // 8031CBE8
L_8031CBEC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8031CBEC
  if (!crb(c,2)) { goto L_8031CC48; } // 8031CBF0
  cmps(c,0,(int32_t)c->r[29],0); // 8031CBF4
  if (crb(c,2)) { goto L_8031CC14; } // 8031CBF8
  c->r[12]=c->r[29]|c->r[29]; // 8031CBFC
  c->r[3]=c->r[24]|c->r[24]; // 8031CC00
  c->r[4]=c->r[30]|c->r[30]; // 8031CC04
  c->r[5]=0u+0x00000004u; // 8031CC08
  c->ctr=c->r[12]; // 8031CC0C
  if (true) { c->lr=0x8031CC14u; dispatch(c,c->ctr); } // 8031CC10
L_8031CC14:;
  c->r[3]=0u+0x80570000u; // 8031CC14
  c->r[3]=c->r[3]+0x000058F8u; // 8031CC18
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031CC1C
  cmpu(c,0,c->r[0],0x00000001u); // 8031CC20
  if (crb(c,0)) { goto L_8031CCD8; } // 8031CC24
  c->r[4]=0u+0x80490000u; // 8031CC28
  c->r[5]=c->r[25]|c->r[25]; // 8031CC2C
  c->r[6]=c->r[27]|c->r[27]; // 8031CC30
  c->r[7]=c->r[28]|c->r[28]; // 8031CC34
  c->r[4]=c->r[4]+0x00000950u; // 8031CC38
  c->r[3]=0u+0x000D0000u; // 8031CC3C
  c->lr=0x8031CC44u; f_8030E230(c); // 8031CC40
  goto L_8031CCD8; // 8031CC44
L_8031CC48:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 8031CC48
  c->r[3]=c->r[31]|c->r[31]; // 8031CC4C
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 8031CC50
  W8(c->r[31]+0x00000081u,c->r[0]); // 8031CC54
  W8(c->r[31]+0x00000080u,c->r[26]); // 8031CC58
  W32(c->r[31]+0x00000004u,c->r[29]); // 8031CC5C
  W32(c->r[31]+0x00000008u,c->r[30]); // 8031CC60
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031CC64
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8031CC68
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031CC6C
  c->lr=0x8031CC74u; f_8031E544(c); // 8031CC70
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031CC74
  c->r[5]=c->r[3]|c->r[3]; // 8031CC78
  cmpu(c,0,c->r[0],0x00000001u); // 8031CC7C
  if (crb(c,2)) { goto L_8031CCD8; } // 8031CC80
  cmps(c,0,(int32_t)c->r[29],0); // 8031CC84
  if (crb(c,2)) { goto L_8031CCD8; } // 8031CC88
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031CC8C
  cmps(c,0,(int32_t)c->r[0],0); // 8031CC90
  if (crb(c,2)) { goto L_8031CCB8; } // 8031CC94
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031CC98
  cmps(c,0,(int32_t)c->r[3],0); // 8031CC9C
  if (crb(c,2)) { goto L_8031CCB8; } // 8031CCA0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031CCA4
  cmpu(c,0,c->r[0],0x00000003u); // 8031CCA8
  if (!crb(c,2)) { goto L_8031CCB8; } // 8031CCAC
  c->r[0]=0u+0x00000000u; // 8031CCB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8031CCB4
L_8031CCB8:;
  c->r[12]=c->r[29]|c->r[29]; // 8031CCB8
  c->r[3]=c->r[24]|c->r[24]; // 8031CCBC
  c->r[4]=c->r[30]|c->r[30]; // 8031CCC0
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 8031CCC4
  c->ctr=c->r[12]; // 8031CCC8
  if (true) { c->lr=0x8031CCD0u; dispatch(c,c->ctr); } // 8031CCCC
  c->r[0]=0u+0x00000000u; // 8031CCD0
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031CCD4
L_8031CCD8:;
  c->r[11]=c->r[1]+0x00000030u; // 8031CCD8
  c->lr=0x8031CCE0u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031CCDC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031CCE0
  c->lr=c->r[0]; // 8031CCE4
  c->r[1]=c->r[1]+0x00000030u; // 8031CCE8
  return; // 8031CCEC
}

// btm_sec_conn_req
void f_8031CCF0(Ctx* __restrict c) {
  trace_call(0x8031CCF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031CCF0
  c->r[0]=c->lr; // 8031CCF4
  c->r[5]=0u+0x80570000u; // 8031CCF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031CCFC
  c->r[5]=c->r[5]+0x000058F8u; // 8031CD00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031CD04
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031CD08
  c->r[30]=c->r[4]|c->r[4]; // 8031CD0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031CD10
  c->r[29]=c->r[3]|c->r[3]; // 8031CD14
  c->r[0]=R8(c->r[5]+0x0000197Au); // 8031CD18
  cmps(c,0,(int32_t)c->r[0],0); // 8031CD1C
  if (crb(c,2)) { goto L_8031CD84; } // 8031CD20
  c->lr=0x8031CD28u; f_803168F4(c); // 8031CD24
  cmps(c,0,(int32_t)c->r[3],0); // 8031CD28
  if (crb(c,2)) { goto L_8031CD3C; } // 8031CD2C
  c->r[0]=R8(c->r[3]+0x00000076u); // 8031CD30
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8031CD34
  if (!crb(c,2)) { goto L_8031CD84; } // 8031CD38
L_8031CD3C:;
  c->r[3]=0u+0x80570000u; // 8031CD3C
  c->r[3]=c->r[3]+0x000058F8u; // 8031CD40
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031CD44
  cmpu(c,0,c->r[0],0x00000004u); // 8031CD48
  if (crb(c,0)) { goto L_8031CD64; } // 8031CD4C
  c->r[3]=0u+0x000D0000u; // 8031CD50
  c->r[4]=0u+0x80490000u; // 8031CD54
  c->r[3]=c->r[3]+0x00000003u; // 8031CD58
  c->r[4]=c->r[4]+0x00000990u; // 8031CD5C
  c->lr=0x8031CD64u; f_8030E1E8(c); // 8031CD60
L_8031CD64:;
  c->r[3]=0u+0x00000002u; // 8031CD64
  c->lr=0x8031CD6Cu; f_8030AF24(c); // 8031CD68
  cmps(c,0,(int32_t)c->r[3],0); // 8031CD6C
  if (crb(c,2)) { goto L_8031CE00; } // 8031CD70
  c->r[4]=c->r[29]|c->r[29]; // 8031CD74
  c->r[5]=0u+0x0000000Fu; // 8031CD78
  c->lr=0x8031CD80u; f_803214DC(c); // 8031CD7C
  goto L_8031CE00; // 8031CD80
L_8031CD84:;
  c->r[3]=0u+0x80570000u; // 8031CD84
  c->r[3]=c->r[3]+0x000058F8u; // 8031CD88
  c->r[12]=R32(c->r[3]+0x00001934u); // 8031CD8C
  cmps(c,0,(int32_t)c->r[12],0); // 8031CD90
  if (crb(c,2)) { goto L_8031CDD0; } // 8031CD94
  c->r[3]=c->r[29]|c->r[29]; // 8031CD98
  c->r[4]=c->r[30]|c->r[30]; // 8031CD9C
  c->ctr=c->r[12]; // 8031CDA0
  if (true) { c->lr=0x8031CDA8u; dispatch(c,c->ctr); } // 8031CDA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031CDA8
  if (!crb(c,2)) { goto L_8031CDD0; } // 8031CDAC
  c->r[3]=0u+0x00000002u; // 8031CDB0
  c->lr=0x8031CDB8u; f_8030AF24(c); // 8031CDB4
  cmps(c,0,(int32_t)c->r[3],0); // 8031CDB8
  if (crb(c,2)) { goto L_8031CE00; } // 8031CDBC
  c->r[4]=c->r[29]|c->r[29]; // 8031CDC0
  c->r[5]=0u+0x0000000Fu; // 8031CDC4
  c->lr=0x8031CDCCu; f_803214DC(c); // 8031CDC8
  goto L_8031CE00; // 8031CDCC
L_8031CDD0:;
  c->r[31]=0u+0x80570000u; // 8031CDD0
  c->r[4]=c->r[29]|c->r[29]; // 8031CDD4
  c->r[31]=c->r[31]+0x000058F8u; // 8031CDD8
  c->r[5]=0u+0x00000006u; // 8031CDDC
  c->r[3]=c->r[31]+0x000027B4u; // 8031CDE0
  c->lr=0x8031CDE8u; f_80005FB4(c); // 8031CDE4
  c->r[4]=c->r[30]|c->r[30]; // 8031CDE8
  c->r[3]=c->r[31]+0x000027BAu; // 8031CDEC
  c->r[5]=0u+0x00000003u; // 8031CDF0
  c->lr=0x8031CDF8u; f_80005FB4(c); // 8031CDF4
  c->r[3]=c->r[29]|c->r[29]; // 8031CDF8
  c->lr=0x8031CE00u; f_80328BB0(c); // 8031CDFC
L_8031CE00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031CE00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031CE04
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031CE08
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031CE0C
  c->lr=c->r[0]; // 8031CE10
  c->r[1]=c->r[1]+0x00000020u; // 8031CE14
  return; // 8031CE18
}

// btm_sec_init
void f_8031CE1C(Ctx* __restrict c) {
  trace_call(0x8031CE1Cu);
  c->r[6]=0u+0x80570000u; // 8031CE1C
  c->r[4]=0u+0x000000FFu; // 8031CE20
  c->r[6]=c->r[6]+0x000058F8u; // 8031CE24
  c->r[5]=0u+0x00000006u; // 8031CE28
  W8(c->r[6]+0x00001978u,c->r[3]); // 8031CE2C
  c->r[3]=c->r[6]+0x00001954u; // 8031CE30
  f_800060B8(c); return; // 8031CE34
}

// btm_sec_dev_reset
void f_8031CE38(Ctx* __restrict c) {
  trace_call(0x8031CE38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031CE38
  c->r[0]=c->lr; // 8031CE3C
  c->r[3]=0u+0x80570000u; // 8031CE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031CE44
  c->r[3]=c->r[3]+0x000058F8u; // 8031CE48
  c->r[0]=R8(c->r[3]+0x00001978u); // 8031CE4C
  cmpu(c,0,c->r[0],0x00000003u); // 8031CE50
  if (!crb(c,2)) { goto L_8031CE68; } // 8031CE54
  c->r[3]=0u+0x00000001u; // 8031CE58
  c->lr=0x8031CE60u; f_80322CD0(c); // 8031CE5C
  c->r[3]=0u+0x00000001u; // 8031CE60
  c->lr=0x8031CE68u; f_80322D44(c); // 8031CE64
L_8031CE68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031CE68
  c->lr=c->r[0]; // 8031CE6C
  c->r[1]=c->r[1]+0x00000010u; // 8031CE70
  return; // 8031CE74
}

// btm_sec_abort_access_req
void f_8031CE78(Ctx* __restrict c) {
  trace_call(0x8031CE78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031CE78
  c->r[0]=c->lr; // 8031CE7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031CE80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031CE84
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031CE88
  c->r[30]=c->r[3]|c->r[3]; // 8031CE8C
  c->lr=0x8031CE94u; f_803168F4(c); // 8031CE90
  cmps(c,0,(int32_t)c->r[3],0); // 8031CE94
  c->r[31]=c->r[3]|c->r[3]; // 8031CE98
  if (crb(c,2)) { goto L_8031CF14; } // 8031CE9C
  c->r[3]=0u+0x80570000u; // 8031CEA0
  c->r[3]=c->r[3]+0x000058F8u; // 8031CEA4
  c->r[12]=R32(c->r[3]+0x00001920u); // 8031CEA8
  cmps(c,0,(int32_t)c->r[12],0); // 8031CEAC
  if (crb(c,2)) { goto L_8031CEC8; } // 8031CEB0
  c->r[3]=c->r[30]|c->r[30]; // 8031CEB4
  c->r[4]=c->r[31]+0x00000022u; // 8031CEB8
  c->r[5]=c->r[31]+0x00000035u; // 8031CEBC
  c->ctr=c->r[12]; // 8031CEC0
  if (true) { c->lr=0x8031CEC8u; dispatch(c,c->ctr); } // 8031CEC4
L_8031CEC8:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031CEC8
  cmpu(c,0,c->r[0],0x00000004u); // 8031CECC
  if (crb(c,2)) { goto L_8031CEDC; } // 8031CED0
  cmpu(c,0,c->r[0],0x00000001u); // 8031CED4
  if (!crb(c,2)) { goto L_8031CF14; } // 8031CED8
L_8031CEDC:;
  c->r[3]=0u+0x00000000u; // 8031CEDC
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 8031CEE0
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031CEE4
  cmps(c,0,(int32_t)c->r[0],0); // 8031CEE8
  if (crb(c,2)) { goto L_8031CF0C; } // 8031CEEC
  c->r[4]=R32(c->r[31]+0x00000000u); // 8031CEF0
  cmps(c,0,(int32_t)c->r[4],0); // 8031CEF4
  if (crb(c,2)) { goto L_8031CF0C; } // 8031CEF8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8031CEFC
  cmpu(c,0,c->r[0],0x00000003u); // 8031CF00
  if (!crb(c,2)) { goto L_8031CF0C; } // 8031CF04
  W32(c->r[4]+0x00000004u,c->r[3]); // 8031CF08
L_8031CF0C:;
  c->r[0]=0u+0x00000000u; // 8031CF0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031CF10
L_8031CF14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031CF14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031CF18
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031CF1C
  c->lr=c->r[0]; // 8031CF20
  c->r[1]=c->r[1]+0x00000010u; // 8031CF24
  return; // 8031CF28
}

// btm_sec_rmt_name_request_complete
void f_8031CF2C(Ctx* __restrict c) {
  trace_call(0x8031CF2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031CF2C
  c->r[0]=c->lr; // 8031CF30
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031CF34
  c->r[11]=c->r[1]+0x00000020u; // 8031CF38
  c->lr=0x8031CF40u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031CF3C
  cmps(c,0,(int32_t)c->r[3],0); // 8031CF40
  c->r[27]=c->r[3]|c->r[3]; // 8031CF44
  c->r[28]=c->r[4]|c->r[4]; // 8031CF48
  c->r[30]=c->r[5]|c->r[5]; // 8031CF4C
  if (crb(c,2)) { goto L_8031CF60; } // 8031CF50
  c->lr=0x8031CF58u; f_803168F4(c); // 8031CF54
  c->r[31]=c->r[3]|c->r[3]; // 8031CF58
  goto L_8031D008; // 8031CF5C
L_8031CF60:;
  c->r[3]=0u+0x80570000u; // 8031CF60
  c->r[0]=0u+0x00000004u; // 8031CF64
  c->r[3]=c->r[3]+0x000058F8u; // 8031CF68
  c->r[4]=0u+0x00000000u; // 8031CF6C
  c->r[31]=c->r[3]+0x00001F30u; // 8031CF70
  c->ctr=c->r[0]; // 8031CF74
L_8031CF78:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031CF78
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CF7C
  if (crb(c,2)) { goto L_8031CF90; } // 8031CF80
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031CF84
  cmpu(c,0,c->r[0],0x00000003u); // 8031CF88
  if (crb(c,2)) { goto L_8031CFFC; } // 8031CF8C
L_8031CF90:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 8031CF90
  c->r[4]=c->r[4]+0x00000001u; // 8031CF94
  c->r[31]=c->r[31]+0x00000088u; // 8031CF98
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CF9C
  if (crb(c,2)) { goto L_8031CFB0; } // 8031CFA0
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031CFA4
  cmpu(c,0,c->r[0],0x00000003u); // 8031CFA8
  if (crb(c,2)) { goto L_8031CFFC; } // 8031CFAC
L_8031CFB0:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 8031CFB0
  c->r[4]=c->r[4]+0x00000001u; // 8031CFB4
  c->r[31]=c->r[31]+0x00000088u; // 8031CFB8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CFBC
  if (crb(c,2)) { goto L_8031CFD0; } // 8031CFC0
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031CFC4
  cmpu(c,0,c->r[0],0x00000003u); // 8031CFC8
  if (crb(c,2)) { goto L_8031CFFC; } // 8031CFCC
L_8031CFD0:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 8031CFD0
  c->r[4]=c->r[4]+0x00000001u; // 8031CFD4
  c->r[31]=c->r[31]+0x00000088u; // 8031CFD8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031CFDC
  if (crb(c,2)) { goto L_8031CFF0; } // 8031CFE0
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031CFE4
  cmpu(c,0,c->r[0],0x00000003u); // 8031CFE8
  if (crb(c,2)) { goto L_8031CFFC; } // 8031CFEC
L_8031CFF0:;
  c->r[4]=c->r[4]+0x00000001u; // 8031CFF0
  c->r[31]=c->r[31]+0x00000088u; // 8031CFF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031CF78; } // 8031CFF8
L_8031CFFC:;
  cmps(c,0,(int32_t)c->r[4],16); // 8031CFFC
  if (!crb(c,2)) { goto L_8031D008; } // 8031D000
  c->r[31]=0u+0x00000000u; // 8031D004
L_8031D008:;
  c->r[3]=0u+0x80570000u; // 8031D008
  c->r[3]=c->r[3]+0x000058F8u; // 8031D00C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031D010
  cmpu(c,0,c->r[0],0x00000004u); // 8031D014
  if (crb(c,0)) { goto L_8031D048; } // 8031D018
  cmps(c,0,(int32_t)c->r[31],0); // 8031D01C
  c->r[3]=0u+0x000D0000u; // 8031D020
  c->r[4]=0u+0x80490000u; // 8031D024
  c->r[5]=c->r[30]|c->r[30]; // 8031D028
  c->r[3]=c->r[3]+0x00000003u; // 8031D02C
  c->r[4]=c->r[4]+0x000009CCu; // 8031D030
  if (crb(c,2)) { goto L_8031D040; } // 8031D034
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 8031D038
  goto L_8031D044; // 8031D03C
L_8031D040:;
  c->r[6]=0u+0x00000000u; // 8031D040
L_8031D044:;
  c->lr=0x8031D048u; f_8030E218(c); // 8031D044
L_8031D048:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031D048
  if (crb(c,2)) { goto L_8031D1FC; } // 8031D04C
  cmps(c,0,(int32_t)c->r[30],0); // 8031D050
  if (!crb(c,2)) { goto L_8031D0B0; } // 8031D054
  c->r[4]=c->r[28]|c->r[28]; // 8031D058
  c->r[3]=c->r[31]+0x00000035u; // 8031D05C
  c->r[5]=0u+0x00000040u; // 8031D060
  c->lr=0x8031D068u; f_80005FB4(c); // 8031D064
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031D068
  c->r[29]=0u+0x80570000u; // 8031D06C
  c->r[29]=c->r[29]+0x000058F8u; // 8031D070
  c->r[28]=0u+0x00000000u; // 8031D074
  c->r[0]=c->r[0]|0x00000008u; // 8031D078
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031D07C
L_8031D080:;
  c->r[12]=R32(c->r[29]+0x0000192Cu); // 8031D080
  cmps(c,0,(int32_t)c->r[12],0); // 8031D084
  if (crb(c,2)) { goto L_8031D0A0; } // 8031D088
  c->r[3]=c->r[27]|c->r[27]; // 8031D08C
  c->r[4]=c->r[31]+0x00000022u; // 8031D090
  c->r[5]=c->r[31]+0x00000035u; // 8031D094
  c->ctr=c->r[12]; // 8031D098
  if (true) { c->lr=0x8031D0A0u; dispatch(c,c->ctr); } // 8031D09C
L_8031D0A0:;
  c->r[28]=c->r[28]+0x00000001u; // 8031D0A0
  c->r[29]=c->r[29]+0x00000004u; // 8031D0A4
  cmps(c,0,(int32_t)c->r[28],2); // 8031D0A8
  if (crb(c,0)) { IRQCHK(c); goto L_8031D080; } // 8031D0AC
L_8031D0B0:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 8031D0B0
  cmps(c,0,(int32_t)c->r[0],0); // 8031D0B4
  if (crb(c,2)) { goto L_8031D150; } // 8031D0B8
  c->r[0]=R8(c->r[31]+0x00000081u); // 8031D0BC
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031D0C0
  if (crb(c,2)) { goto L_8031D0D4; } // 8031D0C4
  c->r[0]=R8(c->r[31]+0x00000085u); // 8031D0C8
  cmps(c,0,(int32_t)c->r[0],0); // 8031D0CC
  if (crb(c,2)) { goto L_8031D1FC; } // 8031D0D0
L_8031D0D4:;
  c->r[0]=0u+0x00000000u; // 8031D0D4
  c->r[3]=0u+0x80570000u; // 8031D0D8
  W8(c->r[31]+0x00000082u,c->r[0]); // 8031D0DC
  c->r[3]=c->r[3]+0x000058F8u; // 8031D0E0
  c->r[12]=R32(c->r[3]+0x00001914u); // 8031D0E4
  cmps(c,0,(int32_t)c->r[12],0); // 8031D0E8
  if (crb(c,2)) { goto L_8031D10C; } // 8031D0EC
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D0F0
  c->r[4]=c->r[31]+0x00000022u; // 8031D0F4
  c->r[5]=c->r[31]+0x00000035u; // 8031D0F8
  c->r[6]=c->r[31]+0x00000025u; // 8031D0FC
  c->r[7]=R8(c->r[31]+0x00000083u); // 8031D100
  c->ctr=c->r[12]; // 8031D104
  if (true) { c->lr=0x8031D10Cu; dispatch(c,c->ctr); } // 8031D108
L_8031D10C:;
  c->r[29]=0u+0x80570000u; // 8031D10C
  c->r[28]=0u+0x00000000u; // 8031D110
  c->r[29]=c->r[29]+0x000058F8u; // 8031D114
L_8031D118:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 8031D118
  cmps(c,0,(int32_t)c->r[12],0); // 8031D11C
  if (crb(c,2)) { goto L_8031D140; } // 8031D120
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D124
  c->r[4]=c->r[31]+0x00000022u; // 8031D128
  c->r[5]=c->r[31]+0x00000035u; // 8031D12C
  c->r[6]=c->r[31]+0x00000025u; // 8031D130
  c->r[7]=R8(c->r[31]+0x00000083u); // 8031D134
  c->ctr=c->r[12]; // 8031D138
  if (true) { c->lr=0x8031D140u; dispatch(c,c->ctr); } // 8031D13C
L_8031D140:;
  c->r[28]=c->r[28]+0x00000001u; // 8031D140
  c->r[29]=c->r[29]+0x00000004u; // 8031D144
  cmps(c,0,(int32_t)c->r[28],2); // 8031D148
  if (crb(c,0)) { IRQCHK(c); goto L_8031D118; } // 8031D14C
L_8031D150:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 8031D150
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 8031D154
  if (crb(c,2)) { goto L_8031D184; } // 8031D158
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031D15C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8031D160
  if (crb(c,2)) { goto L_8031D184; } // 8031D164
  c->r[0]=0u+0xFFFFFFAFu; // 8031D168
  c->r[4]=0u+0x00000013u; // 8031D16C
  c->r[0]=c->r[3]&c->r[0]; // 8031D170
  W8(c->r[31]+0x00000081u,c->r[0]); // 8031D174
  c->r[3]=R16(c->r[31]+0x00000018u); // 8031D178
  c->lr=0x8031D180u; f_80321368(c); // 8031D17C
  goto L_8031D1FC; // 8031D180
L_8031D184:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031D184
  cmpu(c,0,c->r[0],0x00000003u); // 8031D188
  if (!crb(c,2)) { goto L_8031D1FC; } // 8031D18C
  c->r[29]=0u+0x00000000u; // 8031D190
  cmps(c,0,(int32_t)c->r[30],0); // 8031D194
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 8031D198
  if (crb(c,2)) { goto L_8031D1C8; } // 8031D19C
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031D1A0
  cmps(c,0,(int32_t)c->r[12],0); // 8031D1A4
  if (crb(c,2)) { goto L_8031D1FC; } // 8031D1A8
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D1AC
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031D1B0
  c->r[5]=0u+0x0000000Au; // 8031D1B4
  c->ctr=c->r[12]; // 8031D1B8
  if (true) { c->lr=0x8031D1C0u; dispatch(c,c->ctr); } // 8031D1BC
  W32(c->r[31]+0x00000004u,c->r[29]); // 8031D1C0
  goto L_8031D1FC; // 8031D1C4
L_8031D1C8:;
  c->r[3]=c->r[31]|c->r[31]; // 8031D1C8
  c->lr=0x8031D1D0u; f_8031E544(c); // 8031D1CC
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 8031D1D0
  cmpu(c,0,c->r[5],0x00000001u); // 8031D1D4
  if (crb(c,2)) { goto L_8031D1FC; } // 8031D1D8
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031D1DC
  cmps(c,0,(int32_t)c->r[12],0); // 8031D1E0
  if (crb(c,2)) { goto L_8031D1FC; } // 8031D1E4
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D1E8
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031D1EC
  c->ctr=c->r[12]; // 8031D1F0
  if (true) { c->lr=0x8031D1F8u; dispatch(c,c->ctr); } // 8031D1F4
  W32(c->r[31]+0x00000004u,c->r[29]); // 8031D1F8
L_8031D1FC:;
  c->r[11]=c->r[1]+0x00000020u; // 8031D1FC
  c->lr=0x8031D204u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031D200
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031D204
  c->lr=c->r[0]; // 8031D208
  c->r[1]=c->r[1]+0x00000020u; // 8031D20C
  return; // 8031D210
}

// btm_sec_auth_complete
void f_8031D214(Ctx* __restrict c) {
  trace_call(0x8031D214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031D214
  c->r[0]=c->lr; // 8031D218
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031D21C
  c->r[11]=c->r[1]+0x00000020u; // 8031D220
  c->lr=0x8031D228u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031D224
  c->r[29]=c->r[3]|c->r[3]; // 8031D228
  c->r[30]=c->r[4]|c->r[4]; // 8031D22C
  c->lr=0x8031D234u; f_8031683C(c); // 8031D230
  c->r[4]=0u+0x80570000u; // 8031D234
  c->r[31]=c->r[3]|c->r[3]; // 8031D238
  c->r[4]=c->r[4]+0x000058F8u; // 8031D23C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031D240
  cmpu(c,0,c->r[0],0x00000004u); // 8031D244
  if (crb(c,0)) { goto L_8031D278; } // 8031D248
  cmps(c,0,(int32_t)c->r[31],0); // 8031D24C
  c->r[3]=0u+0x000D0000u; // 8031D250
  c->r[4]=0u+0x80490000u; // 8031D254
  c->r[5]=c->r[30]|c->r[30]; // 8031D258
  c->r[3]=c->r[3]+0x00000003u; // 8031D25C
  c->r[4]=c->r[4]+0x00000A04u; // 8031D260
  if (crb(c,2)) { goto L_8031D270; } // 8031D264
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 8031D268
  goto L_8031D274; // 8031D26C
L_8031D270:;
  c->r[6]=0u+0x00000000u; // 8031D270
L_8031D274:;
  c->lr=0x8031D278u; f_8030E218(c); // 8031D274
L_8031D278:;
  c->r[4]=0u+0x80570000u; // 8031D278
  c->r[4]=c->r[4]+0x000058F8u; // 8031D27C
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 8031D280
  cmps(c,0,(int32_t)c->r[0],0); // 8031D284
  if (crb(c,2)) { goto L_8031D2E0; } // 8031D288
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031D28C
  c->r[3]=0u+0x00000000u; // 8031D290
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 8031D294
  cmpu(c,0,c->r[0],0x00000005u); // 8031D298
  if (crb(c,0)) { goto L_8031D2C4; } // 8031D29C
  c->r[3]=R8(c->r[4]+0x00001978u); // 8031D2A0
  c->r[4]=0u+0x80490000u; // 8031D2A4
  c->r[5]=0u+0x000D0000u; // 8031D2A8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8031D2AC
  c->r[4]=c->r[4]+0x000006F4u; // 8031D2B0
  c->r[0]=cntlz(c->r[0]); // 8031D2B4
  c->r[3]=c->r[5]+0x00000004u; // 8031D2B8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8031D2BC
  c->lr=0x8031D2C4u; f_8030E200(c); // 8031D2C0
L_8031D2C4:;
  c->r[3]=0u+0x80570000u; // 8031D2C4
  c->r[3]=c->r[3]+0x000058F8u; // 8031D2C8
  c->r[3]=R8(c->r[3]+0x00001978u); // 8031D2CC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8031D2D0
  c->r[0]=cntlz(c->r[0]); // 8031D2D4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 8031D2D8
  c->lr=0x8031D2E0u; f_80322CD0(c); // 8031D2DC
L_8031D2E0:;
  c->r[4]=0u+0x80570000u; // 8031D2E0
  c->r[4]=c->r[4]+0x000058F8u; // 8031D2E4
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 8031D2E8
  cmps(c,0,(int32_t)c->r[0],0); // 8031D2EC
  if (crb(c,2)) { goto L_8031D304; } // 8031D2F0
  c->r[0]=0u+0x00000000u; // 8031D2F4
  c->r[3]=R8(c->r[4]+0x00000020u); // 8031D2F8
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 8031D2FC
  c->lr=0x8031D304u; f_8032275C(c); // 8031D300
L_8031D304:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031D304
  if (crb(c,2)) { goto L_8031D398; } // 8031D308
  c->r[3]=R8(c->r[31]+0x00000081u); // 8031D30C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 8031D310
  if (crb(c,2)) { goto L_8031D398; } // 8031D314
  c->r[27]=0u+0x80570000u; // 8031D318
  c->r[27]=c->r[27]+0x000058F8u; // 8031D31C
  c->r[0]=R8(c->r[27]+0x0000197Du); // 8031D320
  cmps(c,0,(int32_t)c->r[0],0); // 8031D324
  if (!crb(c,2)) { goto L_8031D398; } // 8031D328
  c->r[0]=0u+0xFFFFFFAFu; // 8031D32C
  c->r[0]=c->r[3]&c->r[0]; // 8031D330
  W8(c->r[31]+0x00000081u,c->r[0]); // 8031D334
  c->r[26]=R8(c->r[27]+0x0000197Eu); // 8031D338
  cmps(c,0,(int32_t)c->r[26],0); // 8031D33C
  if (crb(c,2)) { goto L_8031D398; } // 8031D340
  c->r[3]=c->r[29]|c->r[29]; // 8031D344
  c->lr=0x8031D34Cu; f_8031683C(c); // 8031D348
  cmps(c,0,(int32_t)c->r[3],0); // 8031D34C
  c->r[28]=c->r[3]|c->r[3]; // 8031D350
  if (crb(c,2)) { goto L_8031D398; } // 8031D354
  c->r[0]=R8(c->r[3]+0x00000081u); // 8031D358
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031D35C
  if (crb(c,2)) { goto L_8031D36C; } // 8031D360
  W8(c->r[27]+0x0000197Eu,c->r[26]); // 8031D364
  goto L_8031D398; // 8031D368
L_8031D36C:;
  c->r[27]=R8(c->r[3]+0x0000007Fu); // 8031D36C
  cmpu(c,0,c->r[27],0x00000005u); // 8031D370
  if (crb(c,2)) { goto L_8031D398; } // 8031D374
  c->r[0]=0u+0x00000005u; // 8031D378
  c->r[4]=c->r[26]|c->r[26]; // 8031D37C
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 8031D380
  c->r[3]=c->r[29]|c->r[29]; // 8031D384
  c->lr=0x8031D38Cu; f_80321368(c); // 8031D388
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031D38C
  if (!crb(c,2)) { goto L_8031D398; } // 8031D390
  W8(c->r[28]+0x0000007Fu,c->r[27]); // 8031D394
L_8031D398:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031D398
  if (crb(c,2)) { goto L_8031D540; } // 8031D39C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8031D3A0
  cmpu(c,0,c->r[0],0x00000001u); // 8031D3A4
  if (crb(c,2)) { goto L_8031D3E4; } // 8031D3A8
  c->r[3]=0u+0x80570000u; // 8031D3AC
  c->r[3]=c->r[3]+0x000058F8u; // 8031D3B0
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 8031D3B4
  cmps(c,0,(int32_t)c->r[12],0); // 8031D3B8
  if (crb(c,2)) { goto L_8031D540; } // 8031D3BC
  cmps(c,0,(int32_t)c->r[30],0); // 8031D3C0
  if (crb(c,2)) { goto L_8031D540; } // 8031D3C4
  c->r[6]=c->r[30]|c->r[30]; // 8031D3C8
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D3CC
  c->r[4]=c->r[31]+0x00000022u; // 8031D3D0
  c->r[5]=c->r[31]+0x00000035u; // 8031D3D4
  c->ctr=c->r[12]; // 8031D3D8
  if (true) { c->lr=0x8031D3E0u; dispatch(c,c->ctr); } // 8031D3DC
  goto L_8031D540; // 8031D3E0
L_8031D3E4:;
  cmpu(c,0,c->r[30],0x0000000Cu); // 8031D3E4
  if (!crb(c,2)) { goto L_8031D400; } // 8031D3E8
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031D3EC
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 8031D3F0
  cmps(c,0,(int32_t)c->r[0],6); // 8031D3F4
  if (!crb(c,2)) { goto L_8031D400; } // 8031D3F8
  c->r[30]=0u+0x00000000u; // 8031D3FC
L_8031D400:;
  c->r[3]=0u+0x80570000u; // 8031D400
  c->r[3]=c->r[3]+0x000058F8u; // 8031D404
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 8031D408
  cmps(c,0,(int32_t)c->r[12],0); // 8031D40C
  if (crb(c,2)) { goto L_8031D42C; } // 8031D410
  c->r[6]=c->r[30]|c->r[30]; // 8031D414
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D418
  c->r[4]=c->r[31]+0x00000022u; // 8031D41C
  c->r[5]=c->r[31]+0x00000035u; // 8031D420
  c->ctr=c->r[12]; // 8031D424
  if (true) { c->lr=0x8031D42Cu; dispatch(c,c->ctr); } // 8031D428
L_8031D42C:;
  c->r[29]=0u+0x00000000u; // 8031D42C
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 8031D430
  c->r[3]=R8(c->r[31]+0x00000081u); // 8031D434
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 8031D438
  if (crb(c,2)) { goto L_8031D45C; } // 8031D43C
  c->r[0]=0u+0xFFFFFFAFu; // 8031D440
  c->r[4]=0u+0x00000013u; // 8031D444
  c->r[0]=c->r[3]&c->r[0]; // 8031D448
  W8(c->r[31]+0x00000081u,c->r[0]); // 8031D44C
  c->r[3]=R16(c->r[31]+0x00000018u); // 8031D450
  c->lr=0x8031D458u; f_80321368(c); // 8031D454
  goto L_8031D540; // 8031D458
L_8031D45C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8031D45C
  if (crb(c,2)) { goto L_8031D4C8; } // 8031D460
  c->r[0]=R32(c->r[31]+0x00000004u); // 8031D464
  cmps(c,0,(int32_t)c->r[0],0); // 8031D468
  if (crb(c,2)) { goto L_8031D4B8; } // 8031D46C
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031D470
  cmps(c,0,(int32_t)c->r[0],0); // 8031D474
  if (crb(c,2)) { goto L_8031D498; } // 8031D478
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031D47C
  cmps(c,0,(int32_t)c->r[3],0); // 8031D480
  if (crb(c,2)) { goto L_8031D498; } // 8031D484
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031D488
  cmpu(c,0,c->r[0],0x00000003u); // 8031D48C
  if (!crb(c,2)) { goto L_8031D498; } // 8031D490
  W32(c->r[3]+0x00000004u,c->r[29]); // 8031D494
L_8031D498:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031D498
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D49C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031D4A0
  c->r[5]=0u+0x0000000Au; // 8031D4A4
  c->ctr=c->r[12]; // 8031D4A8
  if (true) { c->lr=0x8031D4B0u; dispatch(c,c->ctr); } // 8031D4AC
  c->r[0]=0u+0x00000000u; // 8031D4B0
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031D4B4
L_8031D4B8:;
  c->r[3]=R16(c->r[31]+0x00000018u); // 8031D4B8
  c->r[4]=0u+0x00000005u; // 8031D4BC
  c->lr=0x8031D4C4u; f_80321368(c); // 8031D4C0
  goto L_8031D540; // 8031D4C4
L_8031D4C8:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031D4C8
  c->r[3]=c->r[31]|c->r[31]; // 8031D4CC
  c->r[0]=c->r[0]|0x00000002u; // 8031D4D0
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031D4D4
  c->lr=0x8031D4DCu; f_8031E544(c); // 8031D4D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031D4DC
  c->r[4]=c->r[3]|c->r[3]; // 8031D4E0
  cmpu(c,0,c->r[0],0x00000001u); // 8031D4E4
  if (crb(c,2)) { goto L_8031D540; } // 8031D4E8
  c->r[0]=R32(c->r[31]+0x00000004u); // 8031D4EC
  cmps(c,0,(int32_t)c->r[0],0); // 8031D4F0
  if (crb(c,2)) { goto L_8031D540; } // 8031D4F4
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031D4F8
  cmps(c,0,(int32_t)c->r[0],0); // 8031D4FC
  if (crb(c,2)) { goto L_8031D520; } // 8031D500
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031D504
  cmps(c,0,(int32_t)c->r[3],0); // 8031D508
  if (crb(c,2)) { goto L_8031D520; } // 8031D50C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031D510
  cmpu(c,0,c->r[0],0x00000003u); // 8031D514
  if (!crb(c,2)) { goto L_8031D520; } // 8031D518
  W32(c->r[3]+0x00000004u,c->r[29]); // 8031D51C
L_8031D520:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031D520
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 8031D524
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D528
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031D52C
  c->ctr=c->r[12]; // 8031D530
  if (true) { c->lr=0x8031D538u; dispatch(c,c->ctr); } // 8031D534
  c->r[0]=0u+0x00000000u; // 8031D538
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031D53C
L_8031D540:;
  c->r[11]=c->r[1]+0x00000020u; // 8031D540
  c->lr=0x8031D548u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031D544
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031D548
  c->lr=c->r[0]; // 8031D54C
  c->r[1]=c->r[1]+0x00000020u; // 8031D550
  return; // 8031D554
}

// btm_sec_mkey_comp_event
void f_8031D558(Ctx* __restrict c) {
  trace_call(0x8031D558u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031D558
  c->r[0]=c->lr; // 8031D55C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031D560
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031D564
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031D568
  c->r[30]=c->r[5]|c->r[5]; // 8031D56C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031D570
  c->r[29]=c->r[4]|c->r[4]; // 8031D574
  c->lr=0x8031D57Cu; f_8031683C(c); // 8031D578
  c->r[4]=0u+0x80570000u; // 8031D57C
  c->r[7]=R8(c->r[2]+0xFFFFB410u); // 8031D580
  c->r[4]=c->r[4]+0x000058F8u; // 8031D584
  c->r[6]=R8(c->r[2]+0xFFFFB411u); // 8031D588
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031D58C
  c->r[31]=c->r[3]|c->r[3]; // 8031D590
  c->r[5]=R8(c->r[2]+0xFFFFB412u); // 8031D594
  c->r[4]=R8(c->r[2]+0xFFFFB413u); // 8031D598
  cmpu(c,0,c->r[0],0x00000004u); // 8031D59C
  c->r[3]=R8(c->r[2]+0xFFFFB414u); // 8031D5A0
  c->r[0]=R8(c->r[2]+0xFFFFB415u); // 8031D5A4
  W8(c->r[1]+0x00000008u,c->r[7]); // 8031D5A8
  W8(c->r[1]+0x00000009u,c->r[6]); // 8031D5AC
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8031D5B0
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 8031D5B4
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 8031D5B8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8031D5BC
  if (crb(c,0)) { goto L_8031D5F0; } // 8031D5C0
  cmps(c,0,(int32_t)c->r[31],0); // 8031D5C4
  c->r[3]=0u+0x000D0000u; // 8031D5C8
  c->r[4]=0u+0x80490000u; // 8031D5CC
  c->r[5]=c->r[29]|c->r[29]; // 8031D5D0
  c->r[3]=c->r[3]+0x00000003u; // 8031D5D4
  c->r[4]=c->r[4]+0x00000A38u; // 8031D5D8
  if (crb(c,2)) { goto L_8031D5E8; } // 8031D5DC
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 8031D5E0
  goto L_8031D5EC; // 8031D5E4
L_8031D5E8:;
  c->r[6]=0u+0x00000000u; // 8031D5E8
L_8031D5EC:;
  c->lr=0x8031D5F0u; f_8030E218(c); // 8031D5EC
L_8031D5F0:;
  c->r[3]=0u+0x80570000u; // 8031D5F0
  c->r[3]=c->r[3]+0x000058F8u; // 8031D5F4
  c->r[12]=R32(c->r[3]+0x000027B0u); // 8031D5F8
  cmps(c,0,(int32_t)c->r[12],0); // 8031D5FC
  if (crb(c,2)) { goto L_8031D638; } // 8031D600
  cmps(c,0,(int32_t)c->r[31],0); // 8031D604
  if (!crb(c,2)) { goto L_8031D624; } // 8031D608
  c->r[4]=c->r[29]|c->r[29]; // 8031D60C
  c->r[5]=c->r[30]|c->r[30]; // 8031D610
  c->r[3]=c->r[1]+0x00000008u; // 8031D614
  c->ctr=c->r[12]; // 8031D618
  if (true) { c->lr=0x8031D620u; dispatch(c,c->ctr); } // 8031D61C
  goto L_8031D638; // 8031D620
L_8031D624:;
  c->r[4]=c->r[29]|c->r[29]; // 8031D624
  c->r[5]=c->r[30]|c->r[30]; // 8031D628
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D62C
  c->ctr=c->r[12]; // 8031D630
  if (true) { c->lr=0x8031D638u; dispatch(c,c->ctr); } // 8031D634
L_8031D638:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031D638
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031D63C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031D640
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031D644
  c->lr=c->r[0]; // 8031D648
  c->r[1]=c->r[1]+0x00000020u; // 8031D64C
  return; // 8031D650
}

// btm_sec_encrypt_change
void f_8031D654(Ctx* __restrict c) {
  trace_call(0x8031D654u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031D654
  c->r[0]=c->lr; // 8031D658
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031D65C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031D660
  c->r[31]=c->r[4]|c->r[4]; // 8031D664
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031D668
  c->lr=0x8031D670u; f_8031683C(c); // 8031D66C
  c->r[4]=0u+0x80570000u; // 8031D670
  c->r[30]=c->r[3]|c->r[3]; // 8031D674
  c->r[4]=c->r[4]+0x000058F8u; // 8031D678
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031D67C
  cmpu(c,0,c->r[0],0x00000004u); // 8031D680
  if (crb(c,0)) { goto L_8031D6B4; } // 8031D684
  cmps(c,0,(int32_t)c->r[30],0); // 8031D688
  c->r[3]=0u+0x000D0000u; // 8031D68C
  c->r[4]=0u+0x80490000u; // 8031D690
  c->r[5]=c->r[31]|c->r[31]; // 8031D694
  c->r[3]=c->r[3]+0x00000003u; // 8031D698
  c->r[4]=c->r[4]+0x00000A68u; // 8031D69C
  if (crb(c,2)) { goto L_8031D6AC; } // 8031D6A0
  c->r[6]=R8(c->r[30]+0x0000007Fu); // 8031D6A4
  goto L_8031D6B0; // 8031D6A8
L_8031D6AC:;
  c->r[6]=0u+0x00000000u; // 8031D6AC
L_8031D6B0:;
  c->lr=0x8031D6B4u; f_8030E218(c); // 8031D6B0
L_8031D6B4:;
  cmps(c,0,(int32_t)c->r[30],0); // 8031D6B4
  if (crb(c,2)) { goto L_8031D778; } // 8031D6B8
  cmpu(c,0,c->r[31],0x00000023u); // 8031D6BC
  if (!crb(c,2)) { goto L_8031D6F0; } // 8031D6C0
  c->r[7]=0u+0x80570000u; // 8031D6C4
  c->r[6]=0u+0x80320000u; // 8031D6C8
  c->r[7]=c->r[7]+0x000058F8u; // 8031D6CC
  c->r[4]=0u+0x00000016u; // 8031D6D0
  c->r[6]=c->r[6]+0xFFFFEA40u; // 8031D6D4
  W32(c->r[7]+0x00001938u,c->r[30]); // 8031D6D8
  c->r[3]=c->r[7]+0x0000195Cu; // 8031D6DC
  c->r[5]=0u+0x00000001u; // 8031D6E0
  W32(c->r[7]+0x0000196Cu,c->r[6]); // 8031D6E4
  c->lr=0x8031D6ECu; f_8030E7B4(c); // 8031D6E8
  goto L_8031D778; // 8031D6EC
L_8031D6F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031D6F0
  if (crb(c,2)) { goto L_8031D724; } // 8031D6F4
  c->r[12]=R32(c->r[30]+0x00000004u); // 8031D6F8
  cmps(c,0,(int32_t)c->r[12],0); // 8031D6FC
  if (crb(c,2)) { goto L_8031D778; } // 8031D700
  c->r[3]=c->r[30]+0x0000001Cu; // 8031D704
  c->r[4]=R32(c->r[30]+0x00000008u); // 8031D708
  c->r[5]=0u+0x0000000Au; // 8031D70C
  c->ctr=c->r[12]; // 8031D710
  if (true) { c->lr=0x8031D718u; dispatch(c,c->ctr); } // 8031D714
  c->r[0]=0u+0x00000000u; // 8031D718
  W32(c->r[30]+0x00000004u,c->r[0]); // 8031D71C
  goto L_8031D778; // 8031D720
L_8031D724:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 8031D724
  c->r[0]=c->r[0]|0x00000006u; // 8031D728
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031D72C
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 8031D730
  cmpu(c,0,c->r[0],0x00000002u); // 8031D734
  if (!crb(c,2)) { goto L_8031D778; } // 8031D738
  c->r[31]=0u+0x00000000u; // 8031D73C
  c->r[3]=c->r[30]|c->r[30]; // 8031D740
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 8031D744
  c->lr=0x8031D74Cu; f_8031E544(c); // 8031D748
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 8031D74C
  cmpu(c,0,c->r[5],0x00000001u); // 8031D750
  if (crb(c,2)) { goto L_8031D778; } // 8031D754
  c->r[12]=R32(c->r[30]+0x00000004u); // 8031D758
  cmps(c,0,(int32_t)c->r[12],0); // 8031D75C
  if (crb(c,2)) { goto L_8031D778; } // 8031D760
  c->r[3]=c->r[30]+0x0000001Cu; // 8031D764
  c->r[4]=R32(c->r[30]+0x00000008u); // 8031D768
  c->ctr=c->r[12]; // 8031D76C
  if (true) { c->lr=0x8031D774u; dispatch(c,c->ctr); } // 8031D770
  W32(c->r[30]+0x00000004u,c->r[31]); // 8031D774
L_8031D778:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031D778
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031D77C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031D780
  c->lr=c->r[0]; // 8031D784
  c->r[1]=c->r[1]+0x00000010u; // 8031D788
  return; // 8031D78C
}

// btm_sec_is_bonding
void f_8031D790(Ctx* __restrict c) {
  trace_call(0x8031D790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031D790
  c->r[0]=c->lr; // 8031D794
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031D798
  c->lr=0x8031D7A0u; f_8031683C(c); // 8031D79C
  cmps(c,0,(int32_t)c->r[3],0); // 8031D7A0
  if (crb(c,2)) { goto L_8031D7BC; } // 8031D7A4
  c->r[0]=R8(c->r[3]+0x00000081u); // 8031D7A8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031D7AC
  if (crb(c,2)) { goto L_8031D7BC; } // 8031D7B0
  c->r[3]=0u+0x00000001u; // 8031D7B4
  goto L_8031D7C0; // 8031D7B8
L_8031D7BC:;
  c->r[3]=0u+0x00000000u; // 8031D7BC
L_8031D7C0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031D7C0
  c->lr=c->r[0]; // 8031D7C4
  c->r[1]=c->r[1]+0x00000010u; // 8031D7C8
  return; // 8031D7CC
}

// btm_sec_connected
void f_8031D7D0(Ctx* __restrict c) {
  trace_call(0x8031D7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031D7D0
  c->r[0]=c->lr; // 8031D7D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031D7D8
  c->r[11]=c->r[1]+0x00000020u; // 8031D7DC
  c->lr=0x8031D7E4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031D7E0
  c->r[27]=c->r[3]|c->r[3]; // 8031D7E4
  c->r[28]=c->r[4]|c->r[4]; // 8031D7E8
  c->r[29]=c->r[5]|c->r[5]; // 8031D7EC
  c->r[30]=c->r[6]|c->r[6]; // 8031D7F0
  c->lr=0x8031D7F8u; f_803168F4(c); // 8031D7F4
  c->r[4]=0u+0x80570000u; // 8031D7F8
  c->r[31]=c->r[3]|c->r[3]; // 8031D7FC
  c->r[4]=c->r[4]+0x000058F8u; // 8031D800
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031D804
  cmpu(c,0,c->r[0],0x00000004u); // 8031D808
  if (crb(c,0)) { goto L_8031D830; } // 8031D80C
  c->r[3]=0u+0x000D0000u; // 8031D810
  c->r[4]=0u+0x80490000u; // 8031D814
  c->r[5]=c->r[28]|c->r[28]; // 8031D818
  c->r[6]=c->r[29]|c->r[29]; // 8031D81C
  c->r[7]=c->r[30]|c->r[30]; // 8031D820
  c->r[3]=c->r[3]+0x00000003u; // 8031D824
  c->r[4]=c->r[4]+0x00000A9Cu; // 8031D828
  c->lr=0x8031D830u; f_8030E230(c); // 8031D82C
L_8031D830:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031D830
  if (!crb(c,2)) { goto L_8031D85C; } // 8031D834
  cmps(c,0,(int32_t)c->r[29],0); // 8031D838
  if (!crb(c,2)) { goto L_8031DC38; } // 8031D83C
  c->r[3]=c->r[27]|c->r[27]; // 8031D840
  c->lr=0x8031D848u; f_8031671C(c); // 8031D844
  cmps(c,0,(int32_t)c->r[3],0); // 8031D848
  c->r[31]=c->r[3]|c->r[3]; // 8031D84C
  if (!crb(c,2)) { goto L_8031D87C; } // 8031D850
  goto L_8031DC38; // 8031D854
  goto L_8031DC38; // 8031D858
L_8031D85C:;
  c->r[4]=0u+0x80570000u; // 8031D85C
  c->r[0]=0u+0x00000001u; // 8031D860
  c->r[4]=c->r[4]+0x000058F8u; // 8031D864
  c->r[3]=R32(c->r[4]+0x00001974u); // 8031D868
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8031D86C
  c->r[3]=c->r[3]+0x00000001u; // 8031D870
  W32(c->r[4]+0x00001974u,c->r[3]); // 8031D874
  W8(c->r[31]+0x00000085u,c->r[0]); // 8031D878
L_8031D87C:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 8031D87C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031D880
  if (crb(c,2)) { goto L_8031D914; } // 8031D884
  c->r[4]=0u+0x80570000u; // 8031D888
  c->r[4]=c->r[4]+0x000058F8u; // 8031D88C
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 8031D890
  cmps(c,0,(int32_t)c->r[0],0); // 8031D894
  if (crb(c,2)) { goto L_8031D8F0; } // 8031D898
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031D89C
  c->r[3]=0u+0x00000000u; // 8031D8A0
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 8031D8A4
  cmpu(c,0,c->r[0],0x00000005u); // 8031D8A8
  if (crb(c,0)) { goto L_8031D8D4; } // 8031D8AC
  c->r[3]=R8(c->r[4]+0x00001978u); // 8031D8B0
  c->r[4]=0u+0x80490000u; // 8031D8B4
  c->r[5]=0u+0x000D0000u; // 8031D8B8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8031D8BC
  c->r[4]=c->r[4]+0x000006F4u; // 8031D8C0
  c->r[0]=cntlz(c->r[0]); // 8031D8C4
  c->r[3]=c->r[5]+0x00000004u; // 8031D8C8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8031D8CC
  c->lr=0x8031D8D4u; f_8030E200(c); // 8031D8D0
L_8031D8D4:;
  c->r[3]=0u+0x80570000u; // 8031D8D4
  c->r[3]=c->r[3]+0x000058F8u; // 8031D8D8
  c->r[3]=R8(c->r[3]+0x00001978u); // 8031D8DC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8031D8E0
  c->r[0]=cntlz(c->r[0]); // 8031D8E4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 8031D8E8
  c->lr=0x8031D8F0u; f_80322CD0(c); // 8031D8EC
L_8031D8F0:;
  c->r[4]=0u+0x80570000u; // 8031D8F0
  c->r[4]=c->r[4]+0x000058F8u; // 8031D8F4
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 8031D8F8
  cmps(c,0,(int32_t)c->r[0],0); // 8031D8FC
  if (crb(c,2)) { goto L_8031D914; } // 8031D900
  c->r[0]=0u+0x00000000u; // 8031D904
  c->r[3]=R8(c->r[4]+0x00000020u); // 8031D908
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 8031D90C
  c->lr=0x8031D914u; f_8032275C(c); // 8031D910
L_8031D914:;
  cmps(c,0,(int32_t)c->r[29],0); // 8031D914
  if (crb(c,2)) { goto L_8031DA84; } // 8031D918
  cmpu(c,0,c->r[29],0x00000005u); // 8031D91C
  if (crb(c,2)) { goto L_8031D970; } // 8031D920
  cmpu(c,0,c->r[29],0x00000006u); // 8031D924
  if (crb(c,2)) { goto L_8031D970; } // 8031D928
  cmpu(c,0,c->r[29],0x0000000Eu); // 8031D92C
  if (crb(c,2)) { goto L_8031D970; } // 8031D930
  cmpu(c,0,c->r[29],0x00000018u); // 8031D934
  if (crb(c,2)) { goto L_8031D970; } // 8031D938
  cmpu(c,0,c->r[29],0x00000026u); // 8031D93C
  if (crb(c,2)) { goto L_8031D970; } // 8031D940
  cmpu(c,0,c->r[29],0x00000029u); // 8031D944
  if (crb(c,2)) { goto L_8031D970; } // 8031D948
  cmpu(c,0,c->r[29],0x00000025u); // 8031D94C
  if (crb(c,2)) { goto L_8031D970; } // 8031D950
  cmpu(c,0,c->r[29],0x00000017u); // 8031D954
  if (crb(c,2)) { goto L_8031D970; } // 8031D958
  cmpu(c,0,c->r[29],0x00000022u); // 8031D95C
  if (crb(c,2)) { goto L_8031D970; } // 8031D960
  c->r[0]=R8(c->r[31]+0x00000081u); // 8031D964
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031D968
  if (crb(c,2)) { goto L_8031D9FC; } // 8031D96C
L_8031D970:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 8031D970
  c->r[0]=0u+0xFFFFFFAFu; // 8031D974
  c->r[28]=0u+0x80570000u; // 8031D978
  c->r[0]=c->r[3]&c->r[0]; // 8031D97C
  W8(c->r[31]+0x00000081u,c->r[0]); // 8031D980
  c->r[28]=c->r[28]+0x000058F8u; // 8031D984
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031D988
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8031D98C
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031D990
  c->r[0]=R32(c->r[28]+0x0000194Cu); // 8031D994
  cmps(c,0,(int32_t)c->r[0],0); // 8031D998
  if (crb(c,2)) { goto L_8031D9B4; } // 8031D99C
  c->r[3]=c->r[28]+0x0000193Cu; // 8031D9A0
  c->lr=0x8031D9A8u; f_8030E824(c); // 8031D9A4
  c->r[0]=0u+0x00000000u; // 8031D9A8
  c->r[29]=0u+0x0000000Eu; // 8031D9AC
  W32(c->r[28]+0x0000194Cu,c->r[0]); // 8031D9B0
L_8031D9B4:;
  c->r[3]=0u+0x80570000u; // 8031D9B4
  c->r[3]=c->r[3]+0x000058F8u; // 8031D9B8
  c->r[0]=R8(c->r[3]+0x000027BFu); // 8031D9BC
  cmpu(c,0,c->r[0],0x0000000Eu); // 8031D9C0
  if (!crb(c,2)) { goto L_8031D9CC; } // 8031D9C4
  c->r[29]=0u+0x0000000Eu; // 8031D9C8
L_8031D9CC:;
  c->r[3]=0u+0x80570000u; // 8031D9CC
  c->r[3]=c->r[3]+0x000058F8u; // 8031D9D0
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 8031D9D4
  cmps(c,0,(int32_t)c->r[12],0); // 8031D9D8
  if (crb(c,2)) { goto L_8031DC38; } // 8031D9DC
  c->r[6]=c->r[29]|c->r[29]; // 8031D9E0
  c->r[3]=c->r[31]+0x0000001Cu; // 8031D9E4
  c->r[4]=c->r[31]+0x00000022u; // 8031D9E8
  c->r[5]=c->r[31]+0x00000035u; // 8031D9EC
  c->ctr=c->r[12]; // 8031D9F0
  if (true) { c->lr=0x8031D9F8u; dispatch(c,c->ctr); } // 8031D9F4
  goto L_8031DC38; // 8031D9F8
L_8031D9FC:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8031D9FC
  cmps(c,0,(int32_t)c->r[0],0); // 8031DA00
  if (crb(c,2)) { goto L_8031DC38; } // 8031DA04
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031DA08
  cmps(c,0,(int32_t)c->r[0],0); // 8031DA0C
  if (crb(c,2)) { goto L_8031DA34; } // 8031DA10
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031DA14
  cmps(c,0,(int32_t)c->r[3],0); // 8031DA18
  if (crb(c,2)) { goto L_8031DA34; } // 8031DA1C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031DA20
  cmpu(c,0,c->r[0],0x00000003u); // 8031DA24
  if (!crb(c,2)) { goto L_8031DA34; } // 8031DA28
  c->r[0]=0u+0x00000000u; // 8031DA2C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8031DA30
L_8031DA34:;
  cmpu(c,0,c->r[29],0x00000008u); // 8031DA34
  if (crb(c,2)) { goto L_8031DA4C; } // 8031DA38
  cmpu(c,0,c->r[29],0x0000001Fu); // 8031DA3C
  if (crb(c,2)) { goto L_8031DA4C; } // 8031DA40
  cmpu(c,0,c->r[29],0x00000004u); // 8031DA44
  if (!crb(c,2)) { goto L_8031DA68; } // 8031DA48
L_8031DA4C:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031DA4C
  c->r[3]=c->r[31]+0x0000001Cu; // 8031DA50
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031DA54
  c->r[5]=0u+0x00000008u; // 8031DA58
  c->ctr=c->r[12]; // 8031DA5C
  if (true) { c->lr=0x8031DA64u; dispatch(c,c->ctr); } // 8031DA60
  goto L_8031DC38; // 8031DA64
L_8031DA68:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031DA68
  c->r[3]=c->r[31]+0x0000001Cu; // 8031DA6C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031DA70
  c->r[5]=0u+0x0000000Au; // 8031DA74
  c->ctr=c->r[12]; // 8031DA78
  if (true) { c->lr=0x8031DA80u; dispatch(c,c->ctr); } // 8031DA7C
  goto L_8031DC38; // 8031DA80
L_8031DA84:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 8031DA84
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031DA88
  if (crb(c,2)) { goto L_8031DB64; } // 8031DA8C
  c->r[0]=R8(c->r[31]+0x00000082u); // 8031DA90
  cmps(c,0,(int32_t)c->r[0],0); // 8031DA94
  if (crb(c,2)) { goto L_8031DB64; } // 8031DA98
  c->r[0]=0u+0x00000000u; // 8031DA9C
  c->r[3]=0u+0x80570000u; // 8031DAA0
  W8(c->r[31]+0x00000082u,c->r[0]); // 8031DAA4
  c->r[3]=c->r[3]+0x000058F8u; // 8031DAA8
  c->r[12]=R32(c->r[3]+0x00001914u); // 8031DAAC
  cmps(c,0,(int32_t)c->r[12],0); // 8031DAB0
  if (crb(c,2)) { goto L_8031DAD4; } // 8031DAB4
  c->r[3]=c->r[31]+0x0000001Cu; // 8031DAB8
  c->r[4]=c->r[31]+0x00000022u; // 8031DABC
  c->r[5]=c->r[31]+0x00000035u; // 8031DAC0
  c->r[6]=c->r[31]+0x00000025u; // 8031DAC4
  c->r[7]=R8(c->r[31]+0x00000083u); // 8031DAC8
  c->ctr=c->r[12]; // 8031DACC
  if (true) { c->lr=0x8031DAD4u; dispatch(c,c->ctr); } // 8031DAD0
L_8031DAD4:;
  c->r[29]=0u+0x80570000u; // 8031DAD4
  c->r[30]=0u+0x00000000u; // 8031DAD8
  c->r[29]=c->r[29]+0x000058F8u; // 8031DADC
L_8031DAE0:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 8031DAE0
  cmps(c,0,(int32_t)c->r[12],0); // 8031DAE4
  if (crb(c,2)) { goto L_8031DB08; } // 8031DAE8
  c->r[3]=c->r[31]+0x0000001Cu; // 8031DAEC
  c->r[4]=c->r[31]+0x00000022u; // 8031DAF0
  c->r[5]=c->r[31]+0x00000035u; // 8031DAF4
  c->r[6]=c->r[31]+0x00000025u; // 8031DAF8
  c->r[7]=R8(c->r[31]+0x00000083u); // 8031DAFC
  c->ctr=c->r[12]; // 8031DB00
  if (true) { c->lr=0x8031DB08u; dispatch(c,c->ctr); } // 8031DB04
L_8031DB08:;
  c->r[30]=c->r[30]+0x00000001u; // 8031DB08
  c->r[29]=c->r[29]+0x00000004u; // 8031DB0C
  cmps(c,0,(int32_t)c->r[30],2); // 8031DB10
  if (crb(c,0)) { IRQCHK(c); goto L_8031DAE0; } // 8031DB14
  c->r[3]=0u+0x80570000u; // 8031DB18
  c->r[3]=c->r[3]+0x000058F8u; // 8031DB1C
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 8031DB20
  cmps(c,0,(int32_t)c->r[12],0); // 8031DB24
  if (crb(c,2)) { goto L_8031DB44; } // 8031DB28
  c->r[3]=c->r[31]+0x0000001Cu; // 8031DB2C
  c->r[4]=c->r[31]+0x00000022u; // 8031DB30
  c->r[5]=c->r[31]+0x00000035u; // 8031DB34
  c->r[6]=0u+0x00000000u; // 8031DB38
  c->ctr=c->r[12]; // 8031DB3C
  if (true) { c->lr=0x8031DB44u; dispatch(c,c->ctr); } // 8031DB40
L_8031DB44:;
  c->r[5]=R8(c->r[31]+0x00000081u); // 8031DB44
  c->r[0]=0u+0xFFFFFFAFu; // 8031DB48
  c->r[3]=c->r[28]|c->r[28]; // 8031DB4C
  c->r[4]=0u+0x00000013u; // 8031DB50
  c->r[0]=c->r[5]&c->r[0]; // 8031DB54
  W8(c->r[31]+0x00000081u,c->r[0]); // 8031DB58
  c->lr=0x8031DB60u; f_80321368(c); // 8031DB5C
  goto L_8031DC38; // 8031DB60
L_8031DB64:;
  W16(c->r[31]+0x00000018u,c->r[28]); // 8031DB64
  cmps(c,0,(int32_t)c->r[30],0); // 8031DB68
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031DB6C
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 8031DB70
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031DB74
  if (crb(c,2)) { goto L_8031DB88; } // 8031DB78
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031DB7C
  c->r[0]=c->r[0]|0x00000006u; // 8031DB80
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031DB84
L_8031DB88:;
  c->r[3]=0u+0x80570000u; // 8031DB88
  c->r[3]=c->r[3]+0x000058F8u; // 8031DB8C
  c->r[0]=R8(c->r[3]+0x00001978u); // 8031DB90
  cmpu(c,0,c->r[0],0x00000003u); // 8031DB94
  if (!crb(c,2)) { goto L_8031DBA8; } // 8031DB98
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031DB9C
  c->r[0]=c->r[0]|0x00000002u; // 8031DBA0
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031DBA4
L_8031DBA8:;
  c->r[0]=0u+0x00000000u; // 8031DBA8
  W8(c->r[31]+0x00000084u,c->r[0]); // 8031DBAC
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031DBB0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8031DBB4
  if (crb(c,2)) { goto L_8031DBC8; } // 8031DBB8
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031DBBC
  cmps(c,0,(int32_t)c->r[0],0); // 8031DBC0
  if (crb(c,2)) { goto L_8031DC38; } // 8031DBC4
L_8031DBC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8031DBC8
  c->lr=0x8031DBD0u; f_8031E544(c); // 8031DBCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031DBD0
  c->r[4]=c->r[3]|c->r[3]; // 8031DBD4
  cmpu(c,0,c->r[0],0x00000001u); // 8031DBD8
  if (crb(c,2)) { goto L_8031DC38; } // 8031DBDC
  c->r[0]=R32(c->r[31]+0x00000004u); // 8031DBE0
  cmps(c,0,(int32_t)c->r[0],0); // 8031DBE4
  if (crb(c,2)) { goto L_8031DC38; } // 8031DBE8
  c->r[0]=R8(c->r[31]+0x00000080u); // 8031DBEC
  cmps(c,0,(int32_t)c->r[0],0); // 8031DBF0
  if (crb(c,2)) { goto L_8031DC18; } // 8031DBF4
  c->r[3]=R32(c->r[31]+0x00000000u); // 8031DBF8
  cmps(c,0,(int32_t)c->r[3],0); // 8031DBFC
  if (crb(c,2)) { goto L_8031DC18; } // 8031DC00
  c->r[0]=R32(c->r[3]+0x00000000u); // 8031DC04
  cmpu(c,0,c->r[0],0x00000003u); // 8031DC08
  if (!crb(c,2)) { goto L_8031DC18; } // 8031DC0C
  c->r[0]=0u+0x00000000u; // 8031DC10
  W32(c->r[3]+0x00000004u,c->r[0]); // 8031DC14
L_8031DC18:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 8031DC18
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 8031DC1C
  c->r[3]=c->r[31]+0x0000001Cu; // 8031DC20
  c->r[4]=R32(c->r[31]+0x00000008u); // 8031DC24
  c->ctr=c->r[12]; // 8031DC28
  if (true) { c->lr=0x8031DC30u; dispatch(c,c->ctr); } // 8031DC2C
  c->r[0]=0u+0x00000000u; // 8031DC30
  W32(c->r[31]+0x00000004u,c->r[0]); // 8031DC34
L_8031DC38:;
  c->r[11]=c->r[1]+0x00000020u; // 8031DC38
  c->lr=0x8031DC40u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031DC3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031DC40
  c->lr=c->r[0]; // 8031DC44
  c->r[1]=c->r[1]+0x00000020u; // 8031DC48
  return; // 8031DC4C
}

// btm_sec_disconnect
void f_8031DC50(Ctx* __restrict c) {
  trace_call(0x8031DC50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031DC50
  c->r[0]=c->lr; // 8031DC54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031DC58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031DC5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031DC60
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031DC64
  c->r[29]=c->r[4]|c->r[4]; // 8031DC68
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031DC6C
  c->r[28]=c->r[3]|c->r[3]; // 8031DC70
  c->lr=0x8031DC78u; f_8031683C(c); // 8031DC74
  cmps(c,0,(int32_t)c->r[3],0); // 8031DC78
  c->r[31]=c->r[3]|c->r[3]; // 8031DC7C
  if (!crb(c,2)) { goto L_8031DC8C; } // 8031DC80
  c->r[3]=0u+0x00000005u; // 8031DC84
  goto L_8031DCEC; // 8031DC88
L_8031DC8C:;
  c->r[0]=R8(c->r[3]+0x00000081u); // 8031DC8C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031DC90
  if (crb(c,2)) { goto L_8031DCAC; } // 8031DC94
  c->r[4]=0u+0x80570000u; // 8031DC98
  c->r[3]=0u+0x00000000u; // 8031DC9C
  c->r[4]=c->r[4]+0x000058F8u; // 8031DCA0
  W8(c->r[4]+0x0000197Eu,c->r[29]); // 8031DCA4
  goto L_8031DCEC; // 8031DCA8
L_8031DCAC:;
  c->r[30]=R8(c->r[3]+0x0000007Fu); // 8031DCAC
  cmpu(c,0,c->r[30],0x00000005u); // 8031DCB0
  if (!crb(c,2)) { goto L_8031DCC0; } // 8031DCB4
  c->r[3]=0u+0x00000001u; // 8031DCB8
  goto L_8031DCEC; // 8031DCBC
L_8031DCC0:;
  c->r[0]=0u+0x00000005u; // 8031DCC0
  c->r[4]=c->r[29]|c->r[29]; // 8031DCC4
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 8031DCC8
  c->r[3]=c->r[28]|c->r[28]; // 8031DCCC
  c->lr=0x8031DCD4u; f_80321368(c); // 8031DCD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031DCD4
  if (crb(c,2)) { goto L_8031DCE4; } // 8031DCD8
  c->r[3]=0u+0x00000001u; // 8031DCDC
  goto L_8031DCEC; // 8031DCE0
L_8031DCE4:;
  W8(c->r[31]+0x0000007Fu,c->r[30]); // 8031DCE4
  c->r[3]=0u+0x00000003u; // 8031DCE8
L_8031DCEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031DCEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031DCF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031DCF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031DCF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031DCFC
  c->lr=c->r[0]; // 8031DD00
  c->r[1]=c->r[1]+0x00000020u; // 8031DD04
  return; // 8031DD08
}

// btm_sec_disconnected
void f_8031DD0C(Ctx* __restrict c) {
  trace_call(0x8031DD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031DD0C
  c->r[0]=c->lr; // 8031DD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031DD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031DD18
  c->r[31]=c->r[4]|c->r[4]; // 8031DD1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031DD20
  c->lr=0x8031DD28u; f_8031683C(c); // 8031DD24
  cmps(c,0,(int32_t)c->r[3],0); // 8031DD28
  c->r[30]=c->r[3]|c->r[3]; // 8031DD2C
  if (crb(c,2)) { goto L_8031DE30; } // 8031DD30
  c->r[0]=R8(c->r[3]+0x00000081u); // 8031DD34
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031DD38
  if (crb(c,2)) { goto L_8031DD90; } // 8031DD3C
  c->r[4]=0u+0x80570000u; // 8031DD40
  c->r[4]=c->r[4]+0x000058F8u; // 8031DD44
  c->r[12]=R32(c->r[4]+0x0000191Cu); // 8031DD48
  cmps(c,0,(int32_t)c->r[12],0); // 8031DD4C
  if (crb(c,2)) { goto L_8031DD90; } // 8031DD50
  cmpu(c,0,c->r[31],0x00000017u); // 8031DD54
  if (!crb(c,2)) { goto L_8031DD78; } // 8031DD58
  c->r[4]=c->r[3]+0x00000022u; // 8031DD5C
  c->r[5]=c->r[3]+0x00000035u; // 8031DD60
  c->r[6]=0u+0x00000017u; // 8031DD64
  c->ctr=c->r[12]; // 8031DD68
  c->r[3]=c->r[3]+0x0000001Cu; // 8031DD6C
  if (true) { c->lr=0x8031DD74u; dispatch(c,c->ctr); } // 8031DD70
  goto L_8031DD90; // 8031DD74
L_8031DD78:;
  c->r[4]=c->r[3]+0x00000022u; // 8031DD78
  c->r[5]=c->r[3]+0x00000035u; // 8031DD7C
  c->r[6]=0u+0x00000005u; // 8031DD80
  c->ctr=c->r[12]; // 8031DD84
  c->r[3]=c->r[3]+0x0000001Cu; // 8031DD88
  if (true) { c->lr=0x8031DD90u; dispatch(c,c->ctr); } // 8031DD8C
L_8031DD90:;
  c->r[31]=0u+0x80570000u; // 8031DD90
  c->r[31]=c->r[31]+0x000058F8u; // 8031DD94
  c->r[0]=R32(c->r[31]+0x0000194Cu); // 8031DD98
  cmps(c,0,(int32_t)c->r[0],0); // 8031DD9C
  if (crb(c,2)) { goto L_8031DE00; } // 8031DDA0
  c->r[3]=c->r[31]+0x00001954u; // 8031DDA4
  c->r[4]=c->r[30]+0x0000001Cu; // 8031DDA8
  c->r[5]=0u+0x00000006u; // 8031DDAC
  c->lr=0x8031DDB4u; f_802E54DC(c); // 8031DDB0
  cmps(c,0,(int32_t)c->r[3],0); // 8031DDB4
  if (!crb(c,2)) { goto L_8031DE00; } // 8031DDB8
  c->r[3]=c->r[31]+0x0000193Cu; // 8031DDBC
  c->lr=0x8031DDC4u; f_8030E824(c); // 8031DDC0
  c->r[0]=0u+0x00000000u; // 8031DDC4
  c->r[3]=c->r[31]+0x00001954u; // 8031DDC8
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 8031DDCC
  c->r[4]=0u+0x000000FFu; // 8031DDD0
  c->r[5]=0u+0x00000006u; // 8031DDD4
  c->lr=0x8031DDDCu; f_800060B8(c); // 8031DDD8
  c->r[12]=R32(c->r[31]+0x0000191Cu); // 8031DDDC
  cmps(c,0,(int32_t)c->r[12],0); // 8031DDE0
  if (crb(c,2)) { goto L_8031DE00; } // 8031DDE4
  c->r[3]=c->r[30]+0x0000001Cu; // 8031DDE8
  c->r[4]=c->r[30]+0x00000022u; // 8031DDEC
  c->r[5]=c->r[30]+0x00000035u; // 8031DDF0
  c->r[6]=0u+0x0000000Eu; // 8031DDF4
  c->ctr=c->r[12]; // 8031DDF8
  if (true) { c->lr=0x8031DE00u; dispatch(c,c->ctr); } // 8031DDFC
L_8031DE00:;
  c->r[4]=0u+0x00010000u; // 8031DE00
  c->r[3]=0u+0x00000000u; // 8031DE04
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8031DE08
  W16(c->r[30]+0x00000018u,c->r[0]); // 8031DE0C
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 8031DE10
  c->r[0]=R8(c->r[30]+0x00000076u); // 8031DE14
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 8031DE18
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031DE1C
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031DE20
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 8031DE24
  W8(c->r[30]+0x00000081u,c->r[0]); // 8031DE28
  W32(c->r[30]+0x00000004u,c->r[3]); // 8031DE2C
L_8031DE30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031DE30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031DE34
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031DE38
  c->lr=c->r[0]; // 8031DE3C
  c->r[1]=c->r[1]+0x00000010u; // 8031DE40
  return; // 8031DE44
}

// btm_sec_link_key_notification
void f_8031DE48(Ctx* __restrict c) {
  trace_call(0x8031DE48u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031DE48
  c->r[0]=c->lr; // 8031DE4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031DE50
  c->r[11]=c->r[1]+0x00000020u; // 8031DE54
  c->lr=0x8031DE5Cu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031DE58
  c->r[29]=c->r[3]|c->r[3]; // 8031DE5C
  c->r[30]=c->r[4]|c->r[4]; // 8031DE60
  c->r[27]=c->r[5]|c->r[5]; // 8031DE64
  c->lr=0x8031DE6Cu; f_803168F4(c); // 8031DE68
  cmps(c,0,(int32_t)c->r[3],0); // 8031DE6C
  c->r[31]=c->r[3]|c->r[3]; // 8031DE70
  if (!crb(c,2)) { goto L_8031DE8C; } // 8031DE74
  c->r[3]=c->r[29]|c->r[29]; // 8031DE78
  c->lr=0x8031DE80u; f_8031671C(c); // 8031DE7C
  cmps(c,0,(int32_t)c->r[3],0); // 8031DE80
  c->r[31]=c->r[3]|c->r[3]; // 8031DE84
  if (crb(c,2)) { goto L_8031DFDC; } // 8031DE88
L_8031DE8C:;
  c->r[3]=0u+0x80570000u; // 8031DE8C
  c->r[3]=c->r[3]+0x000058F8u; // 8031DE90
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031DE94
  cmpu(c,0,c->r[0],0x00000004u); // 8031DE98
  if (crb(c,0)) { goto L_8031DECC; } // 8031DE9C
  c->r[3]=0u+0x000D0000u; // 8031DEA0
  c->r[4]=0u+0x80490000u; // 8031DEA4
  c->r[5]=R8(c->r[29]+0x00000000u); // 8031DEA8
  c->r[3]=c->r[3]+0x00000003u; // 8031DEAC
  c->r[6]=R8(c->r[29]+0x00000001u); // 8031DEB0
  c->r[4]=c->r[4]+0x00000AE0u; // 8031DEB4
  c->r[7]=R8(c->r[29]+0x00000002u); // 8031DEB8
  c->r[8]=R8(c->r[29]+0x00000003u); // 8031DEBC
  c->r[9]=R8(c->r[29]+0x00000004u); // 8031DEC0
  c->r[10]=R8(c->r[29]+0x00000005u); // 8031DEC4
  c->lr=0x8031DECCu; f_8030E278(c); // 8031DEC8
L_8031DECC:;
  c->r[3]=0u+0x80570000u; // 8031DECC
  c->r[3]=c->r[3]+0x000058F8u; // 8031DED0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031DED4
  cmpu(c,0,c->r[0],0x00000004u); // 8031DED8
  if (crb(c,0)) { goto L_8031DEF8; } // 8031DEDC
  c->r[3]=0u+0x000D0000u; // 8031DEE0
  c->r[4]=0u+0x80490000u; // 8031DEE4
  c->r[5]=c->r[27]|c->r[27]; // 8031DEE8
  c->r[3]=c->r[3]+0x00000003u; // 8031DEEC
  c->r[4]=c->r[4]+0x00000B24u; // 8031DEF0
  c->lr=0x8031DEF8u; f_8030E200(c); // 8031DEF4
L_8031DEF8:;
  c->r[3]=0u+0x80570000u; // 8031DEF8
  c->r[3]=c->r[3]+0x000058F8u; // 8031DEFC
  c->r[0]=R8(c->r[3]+0x00000636u); // 8031DF00
  cmpu(c,0,c->r[0],0x00000001u); // 8031DF04
  if (!crb(c,0)) { goto L_8031DF18; } // 8031DF08
  c->r[0]=0u+0x000000FFu; // 8031DF0C
  W8(c->r[31]+0x00000083u,c->r[0]); // 8031DF10
  goto L_8031DF1C; // 8031DF14
L_8031DF18:;
  W8(c->r[31]+0x00000083u,c->r[27]); // 8031DF18
L_8031DF1C:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031DF1C
  c->r[4]=c->r[30]|c->r[30]; // 8031DF20
  c->r[3]=c->r[31]+0x00000025u; // 8031DF24
  c->r[5]=0u+0x00000010u; // 8031DF28
  c->r[0]=c->r[0]|0x00000010u; // 8031DF2C
  W8(c->r[31]+0x00000076u,c->r[0]); // 8031DF30
  c->lr=0x8031DF38u; f_80005FB4(c); // 8031DF34
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031DF38
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8031DF3C
  if (crb(c,2)) { goto L_8031DF5C; } // 8031DF40
  c->r[0]=R8(c->r[31]+0x00000081u); // 8031DF44
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031DF48
  if (crb(c,2)) { goto L_8031DF68; } // 8031DF4C
  c->r[0]=R8(c->r[31]+0x00000085u); // 8031DF50
  cmps(c,0,(int32_t)c->r[0],0); // 8031DF54
  if (!crb(c,2)) { goto L_8031DF68; } // 8031DF58
L_8031DF5C:;
  c->r[0]=0u+0x00000001u; // 8031DF5C
  W8(c->r[31]+0x00000082u,c->r[0]); // 8031DF60
  goto L_8031DFDC; // 8031DF64
L_8031DF68:;
  c->r[3]=0u+0x80570000u; // 8031DF68
  c->r[3]=c->r[3]+0x000058F8u; // 8031DF6C
  c->r[12]=R32(c->r[3]+0x00001914u); // 8031DF70
  cmps(c,0,(int32_t)c->r[12],0); // 8031DF74
  if (crb(c,2)) { goto L_8031DF98; } // 8031DF78
  c->r[3]=c->r[29]|c->r[29]; // 8031DF7C
  c->r[6]=c->r[30]|c->r[30]; // 8031DF80
  c->r[4]=c->r[31]+0x00000022u; // 8031DF84
  c->r[5]=c->r[31]+0x00000035u; // 8031DF88
  c->r[7]=R8(c->r[31]+0x00000083u); // 8031DF8C
  c->ctr=c->r[12]; // 8031DF90
  if (true) { c->lr=0x8031DF98u; dispatch(c,c->ctr); } // 8031DF94
L_8031DF98:;
  c->r[28]=0u+0x80570000u; // 8031DF98
  c->r[27]=0u+0x00000000u; // 8031DF9C
  c->r[28]=c->r[28]+0x000058F8u; // 8031DFA0
L_8031DFA4:;
  c->r[12]=R32(c->r[28]+0x00001924u); // 8031DFA4
  cmps(c,0,(int32_t)c->r[12],0); // 8031DFA8
  if (crb(c,2)) { goto L_8031DFCC; } // 8031DFAC
  c->r[3]=c->r[29]|c->r[29]; // 8031DFB0
  c->r[6]=c->r[30]|c->r[30]; // 8031DFB4
  c->r[4]=c->r[31]+0x00000022u; // 8031DFB8
  c->r[5]=c->r[31]+0x00000035u; // 8031DFBC
  c->r[7]=R8(c->r[31]+0x00000083u); // 8031DFC0
  c->ctr=c->r[12]; // 8031DFC4
  if (true) { c->lr=0x8031DFCCu; dispatch(c,c->ctr); } // 8031DFC8
L_8031DFCC:;
  c->r[27]=c->r[27]+0x00000001u; // 8031DFCC
  c->r[28]=c->r[28]+0x00000004u; // 8031DFD0
  cmps(c,0,(int32_t)c->r[27],2); // 8031DFD4
  if (crb(c,0)) { IRQCHK(c); goto L_8031DFA4; } // 8031DFD8
L_8031DFDC:;
  c->r[11]=c->r[1]+0x00000020u; // 8031DFDC
  c->lr=0x8031DFE4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031DFE0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031DFE4
  c->lr=c->r[0]; // 8031DFE8
  c->r[1]=c->r[1]+0x00000020u; // 8031DFEC
  return; // 8031DFF0
}

// btm_sec_link_key_request
void f_8031DFF4(Ctx* __restrict c) {
  trace_call(0x8031DFF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031DFF4
  c->r[0]=c->lr; // 8031DFF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031DFFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031E000
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031E004
  c->r[30]=c->r[3]|c->r[3]; // 8031E008
  c->lr=0x8031E010u; f_803168F4(c); // 8031E00C
  c->r[4]=0u+0x80570000u; // 8031E010
  c->r[31]=c->r[3]|c->r[3]; // 8031E014
  c->r[4]=c->r[4]+0x000058F8u; // 8031E018
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031E01C
  cmpu(c,0,c->r[0],0x00000004u); // 8031E020
  if (crb(c,0)) { goto L_8031E054; } // 8031E024
  c->r[3]=0u+0x000D0000u; // 8031E028
  c->r[4]=0u+0x80490000u; // 8031E02C
  c->r[5]=R8(c->r[30]+0x00000000u); // 8031E030
  c->r[3]=c->r[3]+0x00000003u; // 8031E034
  c->r[6]=R8(c->r[30]+0x00000001u); // 8031E038
  c->r[4]=c->r[4]+0x00000B50u; // 8031E03C
  c->r[7]=R8(c->r[30]+0x00000002u); // 8031E040
  c->r[8]=R8(c->r[30]+0x00000003u); // 8031E044
  c->r[9]=R8(c->r[30]+0x00000004u); // 8031E048
  c->r[10]=R8(c->r[30]+0x00000005u); // 8031E04C
  c->lr=0x8031E054u; f_8030E278(c); // 8031E050
L_8031E054:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031E054
  if (crb(c,2)) { goto L_8031E078; } // 8031E058
  c->r[0]=R8(c->r[31]+0x00000076u); // 8031E05C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8031E060
  if (crb(c,2)) { goto L_8031E078; } // 8031E064
  c->r[3]=c->r[30]|c->r[30]; // 8031E068
  c->r[4]=c->r[31]+0x00000025u; // 8031E06C
  c->lr=0x8031E074u; f_80321538(c); // 8031E070
  goto L_8031E10C; // 8031E074
L_8031E078:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031E078
  if (!crb(c,2)) { goto L_8031E08C; } // 8031E07C
  c->r[3]=c->r[30]|c->r[30]; // 8031E080
  c->lr=0x8031E088u; f_8031671C(c); // 8031E084
  c->r[31]=c->r[3]|c->r[3]; // 8031E088
L_8031E08C:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 8031E08C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031E090
  if (!crb(c,2)) { goto L_8031E104; } // 8031E094
  c->r[3]=0u+0x80570000u; // 8031E098
  c->r[3]=c->r[3]+0x000058F8u; // 8031E09C
  c->r[12]=R32(c->r[3]+0x00001918u); // 8031E0A0
  cmps(c,0,(int32_t)c->r[12],0); // 8031E0A4
  if (crb(c,2)) { goto L_8031E104; } // 8031E0A8
  cmps(c,0,(int32_t)c->r[31],0); // 8031E0AC
  if (crb(c,2)) { goto L_8031E0DC; } // 8031E0B0
  c->r[3]=c->r[30]|c->r[30]; // 8031E0B4
  c->r[4]=c->r[31]+0x00000025u; // 8031E0B8
  c->ctr=c->r[12]; // 8031E0BC
  if (true) { c->lr=0x8031E0C4u; dispatch(c,c->ctr); } // 8031E0C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031E0C4
  if (!crb(c,2)) { goto L_8031E104; } // 8031E0C8
  c->r[3]=c->r[30]|c->r[30]; // 8031E0CC
  c->r[4]=c->r[31]+0x00000025u; // 8031E0D0
  c->lr=0x8031E0D8u; f_80321538(c); // 8031E0D4
  goto L_8031E10C; // 8031E0D8
L_8031E0DC:;
  c->r[3]=c->r[30]|c->r[30]; // 8031E0DC
  c->r[4]=c->r[1]+0x00000008u; // 8031E0E0
  c->ctr=c->r[12]; // 8031E0E4
  if (true) { c->lr=0x8031E0ECu; dispatch(c,c->ctr); } // 8031E0E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031E0EC
  if (!crb(c,2)) { goto L_8031E104; } // 8031E0F0
  c->r[3]=c->r[30]|c->r[30]; // 8031E0F4
  c->r[4]=c->r[1]+0x00000008u; // 8031E0F8
  c->lr=0x8031E100u; f_80321538(c); // 8031E0FC
  goto L_8031E10C; // 8031E100
L_8031E104:;
  c->r[3]=c->r[30]|c->r[30]; // 8031E104
  c->lr=0x8031E10Cu; f_803216D8(c); // 8031E108
L_8031E10C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031E10C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031E110
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031E114
  c->lr=c->r[0]; // 8031E118
  c->r[1]=c->r[1]+0x00000020u; // 8031E11C
  return; // 8031E120
}

// btm_sec_pin_code_request_timeout
void f_8031E124(Ctx* __restrict c) {
  trace_call(0x8031E124u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031E124
  c->r[0]=c->lr; // 8031E128
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031E12C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031E130
  c->r[31]=0u+0x80570000u; // 8031E134
  c->r[31]=c->r[31]+0x000058F8u; // 8031E138
  c->r[0]=R8(c->r[31]+0x000027C0u); // 8031E13C
  cmpu(c,0,c->r[0],0x00000004u); // 8031E140
  if (crb(c,0)) { goto L_8031E15C; } // 8031E144
  c->r[3]=0u+0x000D0000u; // 8031E148
  c->r[4]=0u+0x80490000u; // 8031E14C
  c->r[3]=c->r[3]+0x00000003u; // 8031E150
  c->r[4]=c->r[4]+0x00000B90u; // 8031E154
  c->lr=0x8031E15Cu; f_8030E1E8(c); // 8031E158
L_8031E15C:;
  c->r[0]=0u+0x00000000u; // 8031E15C
  c->r[3]=0u+0x80570000u; // 8031E160
  c->r[3]=c->r[3]+0x000058F8u; // 8031E164
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 8031E168
  c->r[3]=c->r[3]+0x00001954u; // 8031E16C
  c->r[4]=0u+0x000000FFu; // 8031E170
  c->r[5]=0u+0x00000006u; // 8031E174
  c->lr=0x8031E17Cu; f_800060B8(c); // 8031E178
  c->r[3]=c->r[31]+0x000027B4u; // 8031E17C
  c->lr=0x8031E184u; f_8032195C(c); // 8031E180
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031E184
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031E188
  c->lr=c->r[0]; // 8031E18C
  c->r[1]=c->r[1]+0x00000010u; // 8031E190
  return; // 8031E194
}

// btm_sec_pin_code_request
void f_8031E198(Ctx* __restrict c) {
  trace_call(0x8031E198u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031E198
  c->r[0]=c->lr; // 8031E19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031E1A0
  c->r[11]=c->r[1]+0x00000020u; // 8031E1A4
  c->lr=0x8031E1ACu; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031E1A8
  c->r[29]=0u+0x80570000u; // 8031E1AC
  c->r[31]=0u+0x80490000u; // 8031E1B0
  c->r[29]=c->r[29]+0x000058F8u; // 8031E1B4
  c->r[27]=c->r[3]|c->r[3]; // 8031E1B8
  c->r[0]=R8(c->r[29]+0x000027C0u); // 8031E1BC
  c->r[31]=c->r[31]+0x000003F8u; // 8031E1C0
  c->r[28]=0u+0x00000000u; // 8031E1C4
  c->r[30]=0u+0x00000000u; // 8031E1C8
  cmpu(c,0,c->r[0],0x00000004u); // 8031E1CC
  if (crb(c,0)) { goto L_8031E1FC; } // 8031E1D0
  c->r[3]=0u+0x000D0000u; // 8031E1D4
  c->r[5]=R8(c->r[27]+0x00000000u); // 8031E1D8
  c->r[6]=R8(c->r[27]+0x00000001u); // 8031E1DC
  c->r[3]=c->r[3]+0x00000003u; // 8031E1E0
  c->r[7]=R8(c->r[27]+0x00000002u); // 8031E1E4
  c->r[4]=c->r[31]+0x000007BCu; // 8031E1E8
  c->r[8]=R8(c->r[27]+0x00000003u); // 8031E1EC
  c->r[9]=R8(c->r[27]+0x00000004u); // 8031E1F0
  c->r[10]=R8(c->r[27]+0x00000005u); // 8031E1F4
  c->lr=0x8031E1FCu; f_8030E278(c); // 8031E1F8
L_8031E1FC:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 8031E1FC
  cmps(c,0,(int32_t)c->r[0],0); // 8031E200
  if (!crb(c,2)) { goto L_8031E2E8; } // 8031E204
  c->r[0]=R8(c->r[29]+0x00000020u); // 8031E208
  cmpu(c,0,c->r[0],0x00000001u); // 8031E20C
  if (!crb(c,2)) { goto L_8031E2E8; } // 8031E210
  c->r[3]=c->r[27]|c->r[27]; // 8031E214
  c->lr=0x8031E21Cu; f_803168F4(c); // 8031E218
  cmps(c,0,(int32_t)c->r[3],0); // 8031E21C
  if (!crb(c,2)) { goto L_8031E2C0; } // 8031E220
  c->r[3]=0u+0x80570000u; // 8031E224
  c->r[0]=0u+0x00000002u; // 8031E228
  c->r[3]=c->r[3]+0x000058F8u; // 8031E22C
  c->r[3]=c->r[3]+0x00001F30u; // 8031E230
  c->ctr=c->r[0]; // 8031E234
L_8031E238:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 8031E238
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E23C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E240
  c->r[0]=R8(c->r[3]+0x000000FEu); // 8031E244
  c->r[30]=c->r[30]+0x00000001u; // 8031E248
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E24C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E250
  c->r[0]=R8(c->r[3]+0x00000186u); // 8031E254
  c->r[30]=c->r[30]+0x00000001u; // 8031E258
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E25C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E260
  c->r[0]=R8(c->r[3]+0x0000020Eu); // 8031E264
  c->r[30]=c->r[30]+0x00000001u; // 8031E268
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E26C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E270
  c->r[0]=R8(c->r[3]+0x00000296u); // 8031E274
  c->r[30]=c->r[30]+0x00000001u; // 8031E278
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E27C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E280
  c->r[0]=R8(c->r[3]+0x0000031Eu); // 8031E284
  c->r[30]=c->r[30]+0x00000001u; // 8031E288
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E28C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E290
  c->r[0]=R8(c->r[3]+0x000003A6u); // 8031E294
  c->r[30]=c->r[30]+0x00000001u; // 8031E298
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E29C
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E2A0
  c->r[0]=R8(c->r[3]+0x0000042Eu); // 8031E2A4
  c->r[30]=c->r[30]+0x00000001u; // 8031E2A8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8031E2AC
  if (crb(c,2)) { goto L_8031E2C0; } // 8031E2B0
  c->r[30]=c->r[30]+0x00000001u; // 8031E2B4
  c->r[3]=c->r[3]+0x00000440u; // 8031E2B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8031E238; } // 8031E2BC
L_8031E2C0:;
  cmps(c,0,(int32_t)c->r[30],16); // 8031E2C0
  if (crb(c,0)) { goto L_8031E2D4; } // 8031E2C4
  c->r[3]=c->r[27]|c->r[27]; // 8031E2C8
  c->lr=0x8031E2D0u; f_8032195C(c); // 8031E2CC
  goto L_8031E4DC; // 8031E2D0
L_8031E2D4:;
  c->r[4]=R8(c->r[29]+0x00000021u); // 8031E2D4
  c->r[3]=c->r[27]|c->r[27]; // 8031E2D8
  c->r[5]=c->r[29]+0x00000022u; // 8031E2DC
  c->lr=0x8031E2E4u; f_80321778(c); // 8031E2E0
  goto L_8031E4DC; // 8031E2E4
L_8031E2E8:;
  c->r[3]=c->r[27]|c->r[27]; // 8031E2E8
  c->lr=0x8031E2F0u; f_803168F4(c); // 8031E2EC
  cmps(c,0,(int32_t)c->r[3],0); // 8031E2F0
  c->r[30]=c->r[3]|c->r[3]; // 8031E2F4
  if (!crb(c,2)) { goto L_8031E308; } // 8031E2F8
  c->r[3]=c->r[27]|c->r[27]; // 8031E2FC
  c->lr=0x8031E304u; f_8031671C(c); // 8031E300
  c->r[30]=c->r[3]|c->r[3]; // 8031E304
L_8031E308:;
  c->r[3]=0u+0x80570000u; // 8031E308
  c->r[4]=c->r[27]|c->r[27]; // 8031E30C
  c->r[3]=c->r[3]+0x000058F8u; // 8031E310
  c->r[5]=0u+0x00000006u; // 8031E314
  c->r[3]=c->r[3]+0x00001954u; // 8031E318
  c->lr=0x8031E320u; f_80005FB4(c); // 8031E31C
  cmps(c,0,(int32_t)c->r[30],0); // 8031E320
  if (crb(c,2)) { goto L_8031E498; } // 8031E324
  c->r[3]=c->r[27]|c->r[27]; // 8031E328
  c->r[4]=c->r[29]+0x000027B4u; // 8031E32C
  c->r[5]=0u+0x00000006u; // 8031E330
  c->lr=0x8031E338u; f_802E54DC(c); // 8031E334
  cmps(c,0,(int32_t)c->r[3],0); // 8031E338
  if (!crb(c,2)) { goto L_8031E350; } // 8031E33C
  c->r[3]=c->r[30]+0x00000022u; // 8031E340
  c->r[4]=c->r[29]+0x000027BAu; // 8031E344
  c->r[5]=0u+0x00000003u; // 8031E348
  c->lr=0x8031E350u; f_80005FB4(c); // 8031E34C
L_8031E350:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E350
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031E354
  if (crb(c,2)) { goto L_8031E3F8; } // 8031E358
  c->r[3]=0u+0x80570000u; // 8031E35C
  c->r[3]=c->r[3]+0x000058F8u; // 8031E360
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E364
  cmpu(c,0,c->r[0],0x00000004u); // 8031E368
  if (crb(c,0)) { goto L_8031E380; } // 8031E36C
  c->r[3]=0u+0x000D0000u; // 8031E370
  c->r[4]=c->r[31]+0x000007FCu; // 8031E374
  c->r[3]=c->r[3]+0x00000003u; // 8031E378
  c->lr=0x8031E380u; f_8030E1E8(c); // 8031E37C
L_8031E380:;
  c->r[4]=R8(c->r[29]+0x0000197Fu); // 8031E380
  c->r[3]=c->r[27]|c->r[27]; // 8031E384
  c->r[5]=c->r[29]+0x00001980u; // 8031E388
  c->lr=0x8031E390u; f_80321778(c); // 8031E38C
  c->r[4]=0u+0x80570000u; // 8031E390
  c->r[4]=c->r[4]+0x000058F8u; // 8031E394
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 8031E398
  cmps(c,0,(int32_t)c->r[0],0); // 8031E39C
  if (crb(c,2)) { goto L_8031E49C; } // 8031E3A0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031E3A4
  c->r[3]=0u+0x00000000u; // 8031E3A8
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 8031E3AC
  cmpu(c,0,c->r[0],0x00000005u); // 8031E3B0
  if (crb(c,0)) { goto L_8031E3D8; } // 8031E3B4
  c->r[5]=R8(c->r[4]+0x00001978u); // 8031E3B8
  c->r[3]=0u+0x000D0000u; // 8031E3BC
  c->r[3]=c->r[3]+0x00000004u; // 8031E3C0
  c->r[4]=c->r[31]+0x0000082Cu; // 8031E3C4
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 8031E3C8
  c->r[0]=cntlz(c->r[0]); // 8031E3CC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8031E3D0
  c->lr=0x8031E3D8u; f_8030E200(c); // 8031E3D4
L_8031E3D8:;
  c->r[3]=0u+0x80570000u; // 8031E3D8
  c->r[3]=c->r[3]+0x000058F8u; // 8031E3DC
  c->r[3]=R8(c->r[3]+0x00001978u); // 8031E3E0
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8031E3E4
  c->r[0]=cntlz(c->r[0]); // 8031E3E8
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 8031E3EC
  c->lr=0x8031E3F4u; f_80322CD0(c); // 8031E3F0
  goto L_8031E49C; // 8031E3F4
L_8031E3F8:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 8031E3F8
  cmps(c,0,(int32_t)c->r[0],0); // 8031E3FC
  if (!crb(c,2)) { goto L_8031E438; } // 8031E400
  c->r[0]=R32(c->r[29]+0x00001910u); // 8031E404
  cmps(c,0,(int32_t)c->r[0],0); // 8031E408
  if (crb(c,2)) { goto L_8031E438; } // 8031E40C
  c->r[0]=R8(c->r[30]+0x00000080u); // 8031E410
  cmps(c,0,(int32_t)c->r[0],0); // 8031E414
  if (!crb(c,2)) { goto L_8031E440; } // 8031E418
  c->r[0]=R8(c->r[30]+0x00000023u); // 8031E41C
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 8031E420
  cmps(c,0,(int32_t)c->r[0],5); // 8031E424
  if (!crb(c,2)) { goto L_8031E440; } // 8031E428
  c->r[0]=R8(c->r[30]+0x00000024u); // 8031E42C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8031E430
  if (crb(c,2)) { goto L_8031E440; } // 8031E434
L_8031E438:;
  c->r[28]=0u+0x00000001u; // 8031E438
  goto L_8031E49C; // 8031E43C
L_8031E440:;
  c->r[4]=c->r[27]|c->r[27]; // 8031E440
  c->r[3]=c->r[29]+0x000027B4u; // 8031E444
  c->r[5]=0u+0x00000006u; // 8031E448
  c->lr=0x8031E450u; f_80005FB4(c); // 8031E44C
  c->r[3]=c->r[29]+0x000027BAu; // 8031E450
  c->r[4]=c->r[30]+0x00000022u; // 8031E454
  c->r[5]=0u+0x00000003u; // 8031E458
  c->lr=0x8031E460u; f_80005FB4(c); // 8031E45C
  c->r[5]=0u+0x80320000u; // 8031E460
  c->r[3]=c->r[29]+0x0000193Cu; // 8031E464
  c->r[5]=c->r[5]+0xFFFFE124u; // 8031E468
  c->r[4]=0u+0x00000016u; // 8031E46C
  W32(c->r[29]+0x0000194Cu,c->r[5]); // 8031E470
  c->r[5]=0u+0x0000003Cu; // 8031E474
  c->lr=0x8031E47Cu; f_8030E7B4(c); // 8031E478
  c->r[12]=R32(c->r[29]+0x00001910u); // 8031E47C
  c->r[3]=c->r[27]|c->r[27]; // 8031E480
  c->r[4]=c->r[30]+0x00000022u; // 8031E484
  c->r[5]=c->r[30]+0x00000035u; // 8031E488
  c->ctr=c->r[12]; // 8031E48C
  if (true) { c->lr=0x8031E494u; dispatch(c,c->ctr); } // 8031E490
  goto L_8031E49C; // 8031E494
L_8031E498:;
  c->r[28]=0u+0x00000001u; // 8031E498
L_8031E49C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8031E49C
  if (crb(c,2)) { goto L_8031E4DC; } // 8031E4A0
  c->r[3]=0u+0x80570000u; // 8031E4A4
  c->r[3]=c->r[3]+0x000058F8u; // 8031E4A8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E4AC
  cmpu(c,0,c->r[0],0x00000002u); // 8031E4B0
  if (crb(c,0)) { goto L_8031E4D4; } // 8031E4B4
  c->r[3]=0u+0x000D0000u; // 8031E4B8
  c->r[5]=R8(c->r[29]+0x00001979u); // 8031E4BC
  c->r[6]=R32(c->r[29]+0x00001910u); // 8031E4C0
  c->r[7]=c->r[30]|c->r[30]; // 8031E4C4
  c->r[3]=c->r[3]+0x00000001u; // 8031E4C8
  c->r[4]=c->r[31]+0x0000085Cu; // 8031E4CC
  c->lr=0x8031E4D4u; f_8030E230(c); // 8031E4D0
L_8031E4D4:;
  c->r[3]=c->r[27]|c->r[27]; // 8031E4D4
  c->lr=0x8031E4DCu; f_8032195C(c); // 8031E4D8
L_8031E4DC:;
  c->r[11]=c->r[1]+0x00000020u; // 8031E4DC
  c->lr=0x8031E4E4u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031E4E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031E4E4
  c->lr=c->r[0]; // 8031E4E8
  c->r[1]=c->r[1]+0x00000020u; // 8031E4EC
  return; // 8031E4F0
}

// btm_sec_update_clock_offset
void f_8031E4F4(Ctx* __restrict c) {
  trace_call(0x8031E4F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031E4F4
  c->r[0]=c->lr; // 8031E4F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031E4FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031E500
  c->r[31]=c->r[4]|c->r[4]; // 8031E504
  c->lr=0x8031E50Cu; f_8031683C(c); // 8031E508
  cmps(c,0,(int32_t)c->r[3],0); // 8031E50C
  if (crb(c,2)) { goto L_8031E530; } // 8031E510
  c->r[31]=c->r[31]|0x00008000u; // 8031E514
  W16(c->r[3]+0x0000001Au,c->r[31]); // 8031E518
  c->r[3]=c->r[3]+0x0000001Cu; // 8031E51C
  c->lr=0x8031E524u; f_80319000(c); // 8031E520
  cmps(c,0,(int32_t)c->r[3],0); // 8031E524
  if (crb(c,2)) { goto L_8031E530; } // 8031E528
  W16(c->r[3]+0x00000000u,c->r[31]); // 8031E52C
L_8031E530:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031E530
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031E534
  c->lr=c->r[0]; // 8031E538
  c->r[1]=c->r[1]+0x00000010u; // 8031E53C
  return; // 8031E540
}

// btm_sec_execute_procedure
void f_8031E544(Ctx* __restrict c) {
  trace_call(0x8031E544u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031E544
  c->r[0]=c->lr; // 8031E548
  c->r[4]=0u+0x80570000u; // 8031E54C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031E550
  c->r[4]=c->r[4]+0x000058F8u; // 8031E554
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031E558
  c->r[31]=0u+0x80490000u; // 8031E55C
  c->r[31]=c->r[31]+0x000003F8u; // 8031E560
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031E564
  c->r[30]=c->r[3]|c->r[3]; // 8031E568
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031E56C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8031E570
  cmpu(c,0,c->r[0],0x00000004u); // 8031E574
  if (crb(c,0)) { goto L_8031E598; } // 8031E578
  c->r[3]=0u+0x000D0000u; // 8031E57C
  c->r[5]=R8(c->r[30]+0x00000081u); // 8031E580
  c->r[6]=R8(c->r[30]+0x00000076u); // 8031E584
  c->r[3]=c->r[3]+0x00000003u; // 8031E588
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 8031E58C
  c->r[4]=c->r[31]+0x000008ACu; // 8031E590
  c->lr=0x8031E598u; f_8030E230(c); // 8031E594
L_8031E598:;
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 8031E598
  cmps(c,0,(int32_t)c->r[0],0); // 8031E59C
  if (crb(c,2)) { goto L_8031E5AC; } // 8031E5A0
  c->r[3]=0u+0x00000001u; // 8031E5A4
  goto L_8031E908; // 8031E5A8
L_8031E5AC:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 8031E5AC
  cmpu(c,1,c->r[0],0x0000FFFFu); // 8031E5B0
  if (!crb(c,6)) { goto L_8031E614; } // 8031E5B4
  c->r[3]=c->r[30]+0x0000001Cu; // 8031E5B8
  c->lr=0x8031E5C0u; f_8032AD6C(c); // 8031E5BC
  cmps(c,0,(int32_t)c->r[3],0); // 8031E5C0
  if (!crb(c,2)) { goto L_8031E5F0; } // 8031E5C4
  c->r[3]=0u+0x80580000u; // 8031E5C8
  c->r[0]=R8(c->r[3]+0xFFFF89C0u); // 8031E5CC
  cmpu(c,0,c->r[0],0x00000002u); // 8031E5D0
  if (crb(c,0)) { goto L_8031E5E8; } // 8031E5D4
  c->r[3]=0u+0x00080000u; // 8031E5D8
  c->r[4]=c->r[31]+0x000008ECu; // 8031E5DC
  c->r[3]=c->r[3]+0x00000001u; // 8031E5E0
  c->lr=0x8031E5E8u; f_8030E1E8(c); // 8031E5E4
L_8031E5E8:;
  c->r[3]=0u+0x00000003u; // 8031E5E8
  goto L_8031E908; // 8031E5EC
L_8031E5F0:;
  c->lr=0x8031E5F4u; f_8032C8D0(c); // 8031E5F0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031E5F4
  if (!crb(c,2)) { goto L_8031E604; } // 8031E5F8
  c->r[3]=0u+0x00000003u; // 8031E5FC
  goto L_8031E908; // 8031E600
L_8031E604:;
  c->r[0]=0u+0x00000001u; // 8031E604
  c->r[3]=0u+0x00000001u; // 8031E608
  W8(c->r[30]+0x00000080u,c->r[0]); // 8031E60C
  goto L_8031E908; // 8031E610
L_8031E614:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 8031E614
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8031E618
  if (!crb(c,2)) { goto L_8031E6A4; } // 8031E61C
  if (crb(c,6)) { goto L_8031E6A4; } // 8031E620
  c->r[3]=0u+0x80570000u; // 8031E624
  c->r[3]=c->r[3]+0x000058F8u; // 8031E628
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E62C
  cmpu(c,0,c->r[0],0x00000004u); // 8031E630
  if (crb(c,0)) { goto L_8031E648; } // 8031E634
  c->r[3]=0u+0x000D0000u; // 8031E638
  c->r[4]=c->r[31]+0x00000910u; // 8031E63C
  c->r[3]=c->r[3]+0x00000003u; // 8031E640
  c->lr=0x8031E648u; f_8030E1E8(c); // 8031E644
L_8031E648:;
  c->r[29]=R8(c->r[30]+0x0000007Fu); // 8031E648
  c->r[0]=0u+0x00000003u; // 8031E64C
  c->r[3]=c->r[30]+0x0000001Cu; // 8031E650
  c->r[4]=0u+0x00000000u; // 8031E654
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 8031E658
  c->r[5]=0u+0x00000002u; // 8031E65C
  c->r[6]=0u+0x0000001Eu; // 8031E660
  c->r[7]=0u+0x00000000u; // 8031E664
  c->lr=0x8031E66Cu; f_80319D80(c); // 8031E668
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031E66C
  cmpu(c,0,c->r[0],0x00000001u); // 8031E670
  if (crb(c,2)) { goto L_8031E684; } // 8031E674
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 8031E678
  c->r[0]=0u+0x00000000u; // 8031E67C
  goto L_8031E688; // 8031E680
L_8031E684:;
  c->r[0]=0u+0x00000001u; // 8031E684
L_8031E688:;
  cmps(c,0,(int32_t)c->r[0],0); // 8031E688
  if (crb(c,2)) { goto L_8031E698; } // 8031E68C
  c->r[3]=0u+0x00000001u; // 8031E690
  goto L_8031E908; // 8031E694
L_8031E698:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 8031E698
  c->r[0]=c->r[0]|0x00000008u; // 8031E69C
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031E6A0
L_8031E6A4:;
  c->r[4]=R8(c->r[30]+0x00000076u); // 8031E6A4
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 8031E6A8
  if (!crb(c,2)) { goto L_8031E734; } // 8031E6AC
  c->r[3]=R8(c->r[30]+0x00000080u); // 8031E6B0
  cmps(c,0,(int32_t)c->r[3],0); // 8031E6B4
  if (crb(c,2)) { goto L_8031E6C8; } // 8031E6B8
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E6BC
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8031E6C0
  if (!crb(c,2)) { goto L_8031E6DC; } // 8031E6C4
L_8031E6C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8031E6C8
  if (!crb(c,2)) { goto L_8031E734; } // 8031E6CC
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E6D0
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8031E6D4
  if (crb(c,2)) { goto L_8031E734; } // 8031E6D8
L_8031E6DC:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 8031E6DC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031E6E0
  if (crb(c,2)) { goto L_8031E734; } // 8031E6E4
  c->r[3]=0u+0x80570000u; // 8031E6E8
  c->r[3]=c->r[3]+0x000058F8u; // 8031E6EC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E6F0
  cmpu(c,0,c->r[0],0x00000004u); // 8031E6F4
  if (crb(c,0)) { goto L_8031E70C; } // 8031E6F8
  c->r[3]=0u+0x000D0000u; // 8031E6FC
  c->r[4]=c->r[31]+0x00000934u; // 8031E700
  c->r[3]=c->r[3]+0x00000003u; // 8031E704
  c->lr=0x8031E70Cu; f_8030E1E8(c); // 8031E708
L_8031E70C:;
  c->r[0]=0u+0x00000001u; // 8031E70C
  c->r[3]=R16(c->r[30]+0x00000018u); // 8031E710
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 8031E714
  c->lr=0x8031E71Cu; f_80321A8C(c); // 8031E718
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031E71C
  if (!crb(c,2)) { goto L_8031E72C; } // 8031E720
  c->r[3]=0u+0x00000003u; // 8031E724
  goto L_8031E908; // 8031E728
L_8031E72C:;
  c->r[3]=0u+0x00000001u; // 8031E72C
  goto L_8031E908; // 8031E730
L_8031E734:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 8031E734
  if (!crb(c,2)) { goto L_8031E7D8; } // 8031E738
  c->r[3]=R8(c->r[30]+0x00000080u); // 8031E73C
  cmps(c,0,(int32_t)c->r[3],0); // 8031E740
  if (crb(c,2)) { goto L_8031E754; } // 8031E744
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E748
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8031E74C
  if (!crb(c,2)) { goto L_8031E768; } // 8031E750
L_8031E754:;
  cmps(c,0,(int32_t)c->r[3],0); // 8031E754
  if (!crb(c,2)) { goto L_8031E7D8; } // 8031E758
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E75C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8031E760
  if (crb(c,2)) { goto L_8031E7D8; } // 8031E764
L_8031E768:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 8031E768
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031E76C
  if (crb(c,2)) { goto L_8031E7D8; } // 8031E770
  c->r[3]=0u+0x80570000u; // 8031E774
  c->r[3]=c->r[3]+0x000058F8u; // 8031E778
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E77C
  cmpu(c,0,c->r[0],0x00000004u); // 8031E780
  if (crb(c,0)) { goto L_8031E798; } // 8031E784
  c->r[3]=0u+0x000D0000u; // 8031E788
  c->r[4]=c->r[31]+0x0000095Cu; // 8031E78C
  c->r[3]=c->r[3]+0x00000003u; // 8031E790
  c->lr=0x8031E798u; f_8030E1E8(c); // 8031E794
L_8031E798:;
  c->r[3]=R16(c->r[30]+0x00000018u); // 8031E798
  c->r[4]=0u+0x00000001u; // 8031E79C
  c->lr=0x8031E7A4u; f_80321B08(c); // 8031E7A0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031E7A4
  if (!crb(c,2)) { goto L_8031E7B4; } // 8031E7A8
  c->r[3]=0u+0x00000000u; // 8031E7AC
  goto L_8031E7C0; // 8031E7B0
L_8031E7B4:;
  c->r[0]=0u+0x00000002u; // 8031E7B4
  c->r[3]=0u+0x00000001u; // 8031E7B8
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 8031E7BC
L_8031E7C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8031E7C0
  if (!crb(c,2)) { goto L_8031E7D0; } // 8031E7C4
  c->r[3]=0u+0x00000003u; // 8031E7C8
  goto L_8031E908; // 8031E7CC
L_8031E7D0:;
  c->r[3]=0u+0x00000001u; // 8031E7D0
  goto L_8031E908; // 8031E7D4
L_8031E7D8:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 8031E7D8
  if (!crb(c,2)) { goto L_8031E8A8; } // 8031E7DC
  c->r[3]=R8(c->r[30]+0x00000080u); // 8031E7E0
  cmps(c,0,(int32_t)c->r[3],0); // 8031E7E4
  if (crb(c,2)) { goto L_8031E7F8; } // 8031E7E8
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E7EC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8031E7F0
  if (!crb(c,2)) { goto L_8031E80C; } // 8031E7F4
L_8031E7F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8031E7F8
  if (!crb(c,2)) { goto L_8031E8A8; } // 8031E7FC
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E800
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8031E804
  if (crb(c,2)) { goto L_8031E8A8; } // 8031E808
L_8031E80C:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 8031E80C
  c->r[0]=c->r[3]+0x00010000u; // 8031E810
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031E814
  if (crb(c,2)) { goto L_8031E824; } // 8031E818
  c->r[0]=0u+0x00000000u; // 8031E81C
  goto L_8031E840; // 8031E820
L_8031E824:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 8031E824
  c->r[0]=c->r[3]+0x00010000u; // 8031E828
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031E82C
  if (crb(c,2)) { goto L_8031E83C; } // 8031E830
  c->r[0]=0u+0x00000000u; // 8031E834
  goto L_8031E840; // 8031E838
L_8031E83C:;
  c->r[0]=0u+0x00000001u; // 8031E83C
L_8031E840:;
  cmps(c,0,(int32_t)c->r[0],0); // 8031E840
  if (!crb(c,2)) { goto L_8031E8A8; } // 8031E844
  c->r[3]=R32(c->r[30]+0x00000000u); // 8031E848
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 8031E84C
  cmpu(c,0,c->r[3],0x0000002Eu); // 8031E850
  if (!crb(c,0)) { goto L_8031E8A8; } // 8031E854
  c->r[0]=rotl(c->r[3],29)&0x0000001Cu; // 8031E858
  c->r[4]=rotl(c->r[3],0)&0x0000001Fu; // 8031E85C
  c->r[3]=c->r[30]+c->r[0]; // 8031E860
  c->r[5]=0u+0x00000001u; // 8031E864
  c->r[0]=R32(c->r[3]+0x00000010u); // 8031E868
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 8031E86C
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8031E870
  if (!crb(c,2)) { goto L_8031E8A8; } // 8031E874
  c->r[3]=0u+0x80570000u; // 8031E878
  c->r[3]=c->r[3]+0x000058F8u; // 8031E87C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E880
  cmpu(c,0,c->r[0],0x00000004u); // 8031E884
  if (crb(c,0)) { goto L_8031E89C; } // 8031E888
  c->r[3]=0u+0x000D0000u; // 8031E88C
  c->r[4]=c->r[31]+0x00000980u; // 8031E890
  c->r[3]=c->r[3]+0x00000003u; // 8031E894
  c->lr=0x8031E89Cu; f_8030E1E8(c); // 8031E898
L_8031E89C:;
  c->r[3]=c->r[30]|c->r[30]; // 8031E89C
  c->lr=0x8031E8A4u; f_8031E924(c); // 8031E8A0
  goto L_8031E908; // 8031E8A4
L_8031E8A8:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 8031E8A8
  c->r[3]=0u+0x80570000u; // 8031E8AC
  c->r[3]=c->r[3]+0x000058F8u; // 8031E8B0
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 8031E8B4
  W8(c->r[30]+0x00000081u,c->r[0]); // 8031E8B8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E8BC
  cmpu(c,0,c->r[0],0x00000004u); // 8031E8C0
  if (crb(c,0)) { goto L_8031E8E0; } // 8031E8C4
  c->r[3]=0u+0x000D0000u; // 8031E8C8
  c->r[5]=R32(c->r[30]+0x00000014u); // 8031E8CC
  c->r[6]=R32(c->r[30]+0x00000010u); // 8031E8D0
  c->r[3]=c->r[3]+0x00000003u; // 8031E8D4
  c->r[4]=c->r[31]+0x000009A8u; // 8031E8D8
  c->lr=0x8031E8E0u; f_8030E218(c); // 8031E8DC
L_8031E8E0:;
  c->r[3]=0u+0x80570000u; // 8031E8E0
  c->r[3]=c->r[3]+0x000058F8u; // 8031E8E4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031E8E8
  cmpu(c,0,c->r[0],0x00000004u); // 8031E8EC
  if (crb(c,0)) { goto L_8031E904; } // 8031E8F0
  c->r[3]=0u+0x000D0000u; // 8031E8F4
  c->r[4]=c->r[31]+0x000009D0u; // 8031E8F8
  c->r[3]=c->r[3]+0x00000003u; // 8031E8FC
  c->lr=0x8031E904u; f_8030E1E8(c); // 8031E900
L_8031E904:;
  c->r[3]=0u+0x00000000u; // 8031E904
L_8031E908:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031E908
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031E90C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031E910
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031E914
  c->lr=c->r[0]; // 8031E918
  c->r[1]=c->r[1]+0x00000020u; // 8031E91C
  return; // 8031E920
}

// btm_sec_start_authorization
void f_8031E924(Ctx* __restrict c) {
  trace_call(0x8031E924u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031E924
  c->r[0]=c->lr; // 8031E928
  c->r[6]=0u+0x00000000u; // 8031E92C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031E930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031E934
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031E938
  c->r[30]=c->r[3]|c->r[3]; // 8031E93C
  c->r[0]=R8(c->r[3]+0x00000076u); // 8031E940
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 8031E944
  if (!crb(c,2)) { goto L_8031E958; } // 8031E948
  c->r[0]=R16(c->r[3]+0x00000018u); // 8031E94C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8031E950
  if (!crb(c,2)) { goto L_8031E9F0; } // 8031E954
L_8031E958:;
  c->r[4]=0u+0x80570000u; // 8031E958
  c->r[4]=c->r[4]+0x000058F8u; // 8031E95C
  c->r[0]=R32(c->r[4]+0x0000190Cu); // 8031E960
  cmps(c,0,(int32_t)c->r[0],0); // 8031E964
  if (!crb(c,2)) { goto L_8031E974; } // 8031E968
  c->r[3]=0u+0x00000004u; // 8031E96C
  goto L_8031EA28; // 8031E970
L_8031E974:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8031E974
  cmps(c,0,(int32_t)c->r[4],0); // 8031E978
  if (crb(c,2)) { goto L_8031E9A0; } // 8031E97C
  c->r[0]=R8(c->r[3]+0x00000080u); // 8031E980
  cmps(c,0,(int32_t)c->r[0],0); // 8031E984
  if (crb(c,2)) { goto L_8031E994; } // 8031E988
  c->r[6]=c->r[4]+0x00000010u; // 8031E98C
  goto L_8031E998; // 8031E990
L_8031E994:;
  c->r[6]=c->r[4]+0x00000026u; // 8031E994
L_8031E998:;
  c->r[7]=R8(c->r[4]+0x0000000Fu); // 8031E998
  goto L_8031E9A4; // 8031E99C
L_8031E9A0:;
  c->r[7]=0u+0x00000000u; // 8031E9A0
L_8031E9A4:;
  c->r[0]=0u+0x00000004u; // 8031E9A4
  c->r[4]=0u+0x80570000u; // 8031E9A8
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 8031E9AC
  c->r[4]=c->r[4]+0x000058F8u; // 8031E9B0
  c->r[5]=c->r[3]+0x00000035u; // 8031E9B4
  c->r[8]=R8(c->r[3]+0x00000080u); // 8031E9B8
  c->r[12]=R32(c->r[4]+0x0000190Cu); // 8031E9BC
  c->r[4]=c->r[3]+0x00000022u; // 8031E9C0
  c->ctr=c->r[12]; // 8031E9C4
  c->r[3]=c->r[3]+0x0000001Cu; // 8031E9C8
  if (true) { c->lr=0x8031E9D0u; dispatch(c,c->ctr); } // 8031E9CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031E9D0
  if (!crb(c,2)) { goto L_8031EA28; } // 8031E9D4
  c->r[4]=R8(c->r[30]+0x00000076u); // 8031E9D8
  c->r[0]=0u+0x00000000u; // 8031E9DC
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 8031E9E0
  c->r[0]=c->r[4]|0x00000001u; // 8031E9E4
  W8(c->r[30]+0x00000076u,c->r[0]); // 8031E9E8
  goto L_8031EA28; // 8031E9EC
L_8031E9F0:;
  c->r[31]=R8(c->r[3]+0x0000007Fu); // 8031E9F0
  c->r[0]=0u+0x00000003u; // 8031E9F4
  c->r[4]=0u+0x00000000u; // 8031E9F8
  c->r[5]=0u+0x00000002u; // 8031E9FC
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 8031EA00
  c->r[6]=0u+0x0000001Eu; // 8031EA04
  c->r[7]=0u+0x00000000u; // 8031EA08
  c->r[3]=c->r[3]+0x0000001Cu; // 8031EA0C
  c->lr=0x8031EA14u; f_80319D80(c); // 8031EA10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031EA14
  cmpu(c,0,c->r[0],0x00000001u); // 8031EA18
  if (crb(c,2)) { goto L_8031EA24; } // 8031EA1C
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 8031EA20
L_8031EA24:;
  c->r[3]=0u+0x00000001u; // 8031EA24
L_8031EA28:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031EA28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031EA2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031EA30
  c->lr=c->r[0]; // 8031EA34
  c->r[1]=c->r[1]+0x00000010u; // 8031EA38
  return; // 8031EA3C
}

// btm_sec_collision_timeout
void f_8031EA40(Ctx* __restrict c) {
  trace_call(0x8031EA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031EA40
  c->r[0]=c->lr; // 8031EA44
  c->r[3]=0u+0x80570000u; // 8031EA48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031EA4C
  c->r[3]=c->r[3]+0x000058F8u; // 8031EA50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8031EA54
  W32(c->r[1]+0x00000008u,c->r[30]); // 8031EA58
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8031EA5C
  cmpu(c,0,c->r[0],0x00000004u); // 8031EA60
  if (crb(c,0)) { goto L_8031EA7C; } // 8031EA64
  c->r[3]=0u+0x000D0000u; // 8031EA68
  c->r[4]=0u+0x80490000u; // 8031EA6C
  c->r[3]=c->r[3]+0x00000003u; // 8031EA70
  c->r[4]=c->r[4]+0x00000DECu; // 8031EA74
  c->lr=0x8031EA7Cu; f_8030E1E8(c); // 8031EA78
L_8031EA7C:;
  c->r[31]=0u+0x80570000u; // 8031EA7C
  c->r[30]=0u+0x00000000u; // 8031EA80
  c->r[31]=c->r[31]+0x000058F8u; // 8031EA84
  W32(c->r[31]+0x0000196Cu,c->r[30]); // 8031EA88
  c->r[3]=R32(c->r[31]+0x00001938u); // 8031EA8C
  c->lr=0x8031EA94u; f_8031E544(c); // 8031EA90
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8031EA94
  cmpu(c,0,c->r[0],0x00000001u); // 8031EA98
  if (crb(c,2)) { goto L_8031EB08; } // 8031EA9C
  c->r[4]=R32(c->r[31]+0x00001938u); // 8031EAA0
  c->r[0]=R32(c->r[4]+0x00000004u); // 8031EAA4
  cmps(c,0,(int32_t)c->r[0],0); // 8031EAA8
  if (crb(c,2)) { goto L_8031EB08; } // 8031EAAC
  c->r[0]=R8(c->r[4]+0x00000080u); // 8031EAB0
  cmps(c,0,(int32_t)c->r[0],0); // 8031EAB4
  if (crb(c,2)) { goto L_8031EAD8; } // 8031EAB8
  c->r[4]=R32(c->r[4]+0x00000000u); // 8031EABC
  cmps(c,0,(int32_t)c->r[4],0); // 8031EAC0
  if (crb(c,2)) { goto L_8031EAD8; } // 8031EAC4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8031EAC8
  cmpu(c,0,c->r[0],0x00000003u); // 8031EACC
  if (!crb(c,2)) { goto L_8031EAD8; } // 8031EAD0
  W32(c->r[4]+0x00000004u,c->r[30]); // 8031EAD4
L_8031EAD8:;
  c->r[31]=0u+0x80570000u; // 8031EAD8
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 8031EADC
  c->r[31]=c->r[31]+0x000058F8u; // 8031EAE0
  c->r[4]=R32(c->r[31]+0x00001938u); // 8031EAE4
  c->r[12]=R32(c->r[4]+0x00000004u); // 8031EAE8
  c->r[3]=c->r[4]+0x0000001Cu; // 8031EAEC
  c->r[4]=R32(c->r[4]+0x00000008u); // 8031EAF0
  c->ctr=c->r[12]; // 8031EAF4
  if (true) { c->lr=0x8031EAFCu; dispatch(c,c->ctr); } // 8031EAF8
  c->r[3]=R32(c->r[31]+0x00001938u); // 8031EAFC
  c->r[0]=0u+0x00000000u; // 8031EB00
  W32(c->r[3]+0x00000004u,c->r[0]); // 8031EB04
L_8031EB08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031EB08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8031EB0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8031EB10
  c->lr=c->r[0]; // 8031EB14
  c->r[1]=c->r[1]+0x00000010u; // 8031EB18
  return; // 8031EB1C
}

// btm_read_trusted_mask
void f_8031EB20(Ctx* __restrict c) {
  trace_call(0x8031EB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031EB20
  c->r[0]=c->lr; // 8031EB24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031EB28
  c->lr=0x8031EB30u; f_803168F4(c); // 8031EB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8031EB30
  if (crb(c,2)) { goto L_8031EB40; } // 8031EB34
  c->r[3]=c->r[3]+0x00000010u; // 8031EB38
  goto L_8031EB44; // 8031EB3C
L_8031EB40:;
  c->r[3]=0u+0x00000000u; // 8031EB40
L_8031EB44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8031EB44
  c->lr=c->r[0]; // 8031EB48
  c->r[1]=c->r[1]+0x00000010u; // 8031EB4C
  return; // 8031EB50
}

// btu_hcif_process_event
void f_8031EB54(Ctx* __restrict c) {
  trace_call(0x8031EB54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031EB54
  c->r[0]=c->lr; // 8031EB58
  c->r[4]=0u+0x80570000u; // 8031EB5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8031EB60
  c->r[4]=c->r[4]+0x000058F8u; // 8031EB64
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8031EB68
  W32(c->r[1]+0x00000038u,c->r[30]); // 8031EB6C
  W32(c->r[1]+0x00000034u,c->r[29]); // 8031EB70
  W32(c->r[1]+0x00000030u,c->r[28]); // 8031EB74
  c->r[5]=R16(c->r[3]+0x00000004u); // 8031EB78
  c->r[0]=R8(c->r[4]+0x0000064Eu); // 8031EB7C
  c->r[7]=c->r[3]+c->r[5]; // 8031EB80
  cmps(c,0,(int32_t)c->r[0],0); // 8031EB84
  c->r[3]=R8(c->r[7]+0x00000008u); // 8031EB88
  c->r[4]=R8(c->r[7]+0x00000009u); // 8031EB8C
  if (!crb(c,2)) { goto L_8031EBA4; } // 8031EB90
  cmpu(c,0,c->r[3],0x0000000Eu); // 8031EB94
  if (crb(c,2)) { goto L_8031EBA4; } // 8031EB98
  cmpu(c,0,c->r[3],0x0000000Fu); // 8031EB9C
  if (!crb(c,2)) { goto L_8031F0EC; } // 8031EBA0
L_8031EBA4:;
  cmps(c,0,(int32_t)c->r[3],20); // 8031EBA4
  if (crb(c,2)) { goto L_8031EF08; } // 8031EBA8
  if (!crb(c,0)) { goto L_8031EC40; } // 8031EBAC
  cmps(c,0,(int32_t)c->r[3],10); // 8031EBB0
  if (crb(c,2)) { goto L_8031EE14; } // 8031EBB4
  if (!crb(c,0)) { goto L_8031EC04; } // 8031EBB8
  cmps(c,0,(int32_t)c->r[3],5); // 8031EBBC
  if (crb(c,2)) { goto L_8031ED08; } // 8031EBC0
  if (!crb(c,0)) { goto L_8031EBEC; } // 8031EBC4
  cmps(c,0,(int32_t)c->r[3],2); // 8031EBC8
  if (crb(c,2)) { goto L_8031ECD0; } // 8031EBCC
  if (!crb(c,0)) { goto L_8031EBE0; } // 8031EBD0
  cmps(c,0,(int32_t)c->r[3],1); // 8031EBD4
  if (!crb(c,0)) { goto L_8031ECC4; } // 8031EBD8
  goto L_8031F0EC; // 8031EBDC
L_8031EBE0:;
  cmps(c,0,(int32_t)c->r[3],4); // 8031EBE0
  if (!crb(c,0)) { goto L_8031ECFC; } // 8031EBE4
  goto L_8031ECF0; // 8031EBE8
L_8031EBEC:;
  cmps(c,0,(int32_t)c->r[3],8); // 8031EBEC
  if (crb(c,2)) { goto L_8031EDD4; } // 8031EBF0
  if (!crb(c,0)) { goto L_8031F0EC; } // 8031EBF4
  cmps(c,0,(int32_t)c->r[3],7); // 8031EBF8
  if (!crb(c,0)) { goto L_8031ED70; } // 8031EBFC
  goto L_8031ED50; // 8031EC00
L_8031EC04:;
  cmps(c,0,(int32_t)c->r[3],15); // 8031EC04
  if (crb(c,2)) { goto L_8031EE68; } // 8031EC08
  if (!crb(c,0)) { goto L_8031EC28; } // 8031EC0C
  cmps(c,0,(int32_t)c->r[3],13); // 8031EC10
  if (crb(c,2)) { goto L_8031EE50; } // 8031EC14
  if (!crb(c,0)) { goto L_8031EE5C; } // 8031EC18
  cmps(c,0,(int32_t)c->r[3],12); // 8031EC1C
  if (!crb(c,0)) { goto L_8031EE44; } // 8031EC20
  goto L_8031EE38; // 8031EC24
L_8031EC28:;
  cmps(c,0,(int32_t)c->r[3],18); // 8031EC28
  if (crb(c,2)) { goto L_8031EE9C; } // 8031EC2C
  if (!crb(c,0)) { goto L_8031EEFC; } // 8031EC30
  cmps(c,0,(int32_t)c->r[3],17); // 8031EC34
  if (!crb(c,0)) { goto L_8031F0EC; } // 8031EC38
  goto L_8031EE74; // 8031EC3C
L_8031EC40:;
  cmps(c,0,(int32_t)c->r[3],33); // 8031EC40
  if (crb(c,2)) { goto L_8031F0EC; } // 8031EC44
  if (!crb(c,0)) { goto L_8031EC88; } // 8031EC48
  cmps(c,0,(int32_t)c->r[3],28); // 8031EC4C
  if (crb(c,2)) { goto L_8031F01C; } // 8031EC50
  if (!crb(c,0)) { goto L_8031EC7C; } // 8031EC54
  cmps(c,0,(int32_t)c->r[3],23); // 8031EC58
  if (crb(c,2)) { goto L_8031EFD4; } // 8031EC5C
  if (!crb(c,0)) { goto L_8031EC70; } // 8031EC60
  cmps(c,0,(int32_t)c->r[3],22); // 8031EC64
  if (!crb(c,0)) { goto L_8031EF90; } // 8031EC68
  goto L_8031EF70; // 8031EC6C
L_8031EC70:;
  cmps(c,0,(int32_t)c->r[3],25); // 8031EC70
  if (!crb(c,0)) { goto L_8031F0EC; } // 8031EC74
  goto L_8031F010; // 8031EC78
L_8031EC7C:;
  cmps(c,0,(int32_t)c->r[3],30); // 8031EC7C
  if (crb(c,2)) { goto L_8031F06C; } // 8031EC80
  goto L_8031F0EC; // 8031EC84
L_8031EC88:;
  cmps(c,0,(int32_t)c->r[3],239); // 8031EC88
  if (crb(c,2)) { goto L_8031F0E4; } // 8031EC8C
  if (!crb(c,0)) { goto L_8031ECB8; } // 8031EC90
  cmps(c,0,(int32_t)c->r[3],44); // 8031EC94
  if (crb(c,2)) { goto L_8031F088; } // 8031EC98
  if (!crb(c,0)) { goto L_8031ECAC; } // 8031EC9C
  cmps(c,0,(int32_t)c->r[3],35); // 8031ECA0
  if (!crb(c,0)) { goto L_8031F0EC; } // 8031ECA4
  goto L_8031ECE0; // 8031ECA8
L_8031ECAC:;
  cmps(c,0,(int32_t)c->r[3],46); // 8031ECAC
  if (!crb(c,0)) { goto L_8031F0EC; } // 8031ECB0
  goto L_8031F094; // 8031ECB4
L_8031ECB8:;
  cmps(c,0,(int32_t)c->r[3],255); // 8031ECB8
  if (crb(c,2)) { goto L_8031F0E4; } // 8031ECBC
  goto L_8031F0EC; // 8031ECC0
L_8031ECC4:;
  c->r[3]=R8(c->r[7]+0x0000000Au); // 8031ECC4
  c->lr=0x8031ECCCu; f_80319C7C(c); // 8031ECC8
  goto L_8031F0EC; // 8031ECCC
L_8031ECD0:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031ECD0
  c->r[4]=0u+0x00000000u; // 8031ECD4
  c->lr=0x8031ECDCu; f_80319A04(c); // 8031ECD8
  goto L_8031F0EC; // 8031ECDC
L_8031ECE0:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031ECE0
  c->r[4]=0u+0x00000001u; // 8031ECE4
  c->lr=0x8031ECECu; f_80319A04(c); // 8031ECE8
  goto L_8031F0EC; // 8031ECEC
L_8031ECF0:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031ECF0
  c->lr=0x8031ECF8u; f_8031F298(c); // 8031ECF4
  goto L_8031F0EC; // 8031ECF8
L_8031ECFC:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031ECFC
  c->lr=0x8031ED04u; f_8031F374(c); // 8031ED00
  goto L_8031F0EC; // 8031ED04
L_8031ED08:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031ED08
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 8031ED0C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031ED10
  c->r[31]=R8(c->r[7]+0x0000000Du); // 8031ED14
  c->r[0]=c->r[3]+c->r[0]; // 8031ED18
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 8031ED1C
  c->r[4]=c->r[31]|c->r[31]; // 8031ED20
  c->r[3]=c->r[28]|c->r[28]; // 8031ED24
  c->lr=0x8031ED2Cu; f_80328FF0(c); // 8031ED28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031ED2C
  if (!crb(c,2)) { goto L_8031ED40; } // 8031ED30
  c->r[3]=c->r[28]|c->r[28]; // 8031ED34
  c->r[4]=c->r[31]|c->r[31]; // 8031ED38
  c->lr=0x8031ED40u; f_8031B5C0(c); // 8031ED3C
L_8031ED40:;
  c->r[3]=c->r[28]|c->r[28]; // 8031ED40
  c->r[4]=c->r[31]|c->r[31]; // 8031ED44
  c->lr=0x8031ED4Cu; f_8031DD0C(c); // 8031ED48
  goto L_8031F0EC; // 8031ED4C
L_8031ED50:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031ED50
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 8031ED54
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031ED58
  c->r[4]=R8(c->r[7]+0x0000000Au); // 8031ED5C
  c->r[0]=c->r[3]+c->r[0]; // 8031ED60
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8031ED64
  c->lr=0x8031ED6Cu; f_8031D214(c); // 8031ED68
  goto L_8031F0EC; // 8031ED6C
L_8031ED70:;
  c->r[30]=R8(c->r[7]+0x0000000Au); // 8031ED70
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 8031ED74
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 8031ED78
  c->r[31]=c->r[7]+0x00000011u; // 8031ED7C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8031ED80
  c->r[6]=c->r[30]|c->r[30]; // 8031ED84
  W8(c->r[1]+0x00000025u,c->r[3]); // 8031ED88
  c->r[4]=c->r[31]|c->r[31]; // 8031ED8C
  c->r[3]=c->r[1]+0x00000020u; // 8031ED90
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031ED94
  W8(c->r[1]+0x00000024u,c->r[0]); // 8031ED98
  c->r[0]=R8(c->r[7]+0x0000000Du); // 8031ED9C
  W8(c->r[1]+0x00000023u,c->r[0]); // 8031EDA0
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 8031EDA4
  W8(c->r[1]+0x00000022u,c->r[0]); // 8031EDA8
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 8031EDAC
  W8(c->r[1]+0x00000021u,c->r[0]); // 8031EDB0
  c->r[0]=R8(c->r[7]+0x00000010u); // 8031EDB4
  W8(c->r[1]+0x00000020u,c->r[0]); // 8031EDB8
  c->lr=0x8031EDC0u; f_80319ED0(c); // 8031EDBC
  c->r[4]=c->r[31]|c->r[31]; // 8031EDC0
  c->r[5]=c->r[30]|c->r[30]; // 8031EDC4
  c->r[3]=c->r[1]+0x00000020u; // 8031EDC8
  c->lr=0x8031EDD0u; f_8031CF2C(c); // 8031EDCC
  goto L_8031F0EC; // 8031EDD0
L_8031EDD4:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031EDD4
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 8031EDD8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031EDDC
  c->r[29]=R8(c->r[7]+0x0000000Au); // 8031EDE0
  c->r[0]=c->r[3]+c->r[0]; // 8031EDE4
  c->r[30]=R8(c->r[7]+0x0000000Du); // 8031EDE8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8031EDEC
  c->r[4]=c->r[29]|c->r[29]; // 8031EDF0
  c->r[3]=c->r[31]|c->r[31]; // 8031EDF4
  c->r[5]=c->r[30]|c->r[30]; // 8031EDF8
  c->lr=0x8031EE00u; f_80314DFC(c); // 8031EDFC
  c->r[3]=c->r[31]|c->r[31]; // 8031EE00
  c->r[4]=c->r[29]|c->r[29]; // 8031EE04
  c->r[5]=c->r[30]|c->r[30]; // 8031EE08
  c->lr=0x8031EE10u; f_8031D654(c); // 8031EE0C
  goto L_8031F0EC; // 8031EE10
L_8031EE14:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031EE14
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 8031EE18
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031EE1C
  c->r[4]=R8(c->r[7]+0x0000000Au); // 8031EE20
  c->r[0]=c->r[3]+c->r[0]; // 8031EE24
  c->r[5]=R8(c->r[7]+0x0000000Du); // 8031EE28
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8031EE2C
  c->lr=0x8031EE34u; f_8031D558(c); // 8031EE30
  goto L_8031F0EC; // 8031EE34
L_8031EE38:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031EE38
  c->lr=0x8031EE40u; f_803152FC(c); // 8031EE3C
  goto L_8031F0EC; // 8031EE40
L_8031EE44:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031EE44
  c->lr=0x8031EE4Cu; f_80315270(c); // 8031EE48
  goto L_8031F0EC; // 8031EE4C
L_8031EE50:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031EE50
  c->lr=0x8031EE58u; f_8031F400(c); // 8031EE54
  goto L_8031F0EC; // 8031EE58
L_8031EE5C:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031EE5C
  c->lr=0x8031EE64u; f_8031F738(c); // 8031EE60
  goto L_8031F0EC; // 8031EE64
L_8031EE68:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031EE68
  c->lr=0x8031EE70u; f_8031FA50(c); // 8031EE6C
  goto L_8031F0EC; // 8031EE70
L_8031EE74:;
  c->r[4]=0u+0x80490000u; // 8031EE74
  c->r[3]=0u+0x00070000u; // 8031EE78
  c->r[4]=c->r[4]+0x00000E08u; // 8031EE7C
  c->lr=0x8031EE84u; f_8030E1E8(c); // 8031EE80
  c->lr=0x8031EE88u; f_80316DA8(c); // 8031EE84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031EE88
  if (crb(c,2)) { goto L_8031F0EC; } // 8031EE8C
  c->r[3]=0u+0x00000000u; // 8031EE90
  c->lr=0x8031EE98u; f_80316C64(c); // 8031EE94
  goto L_8031F0EC; // 8031EE98
L_8031EE9C:;
  c->r[29]=R8(c->r[7]+0x0000000Au); // 8031EE9C
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 8031EEA0
  cmps(c,0,(int32_t)c->r[29],0); // 8031EEA4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8031EEA8
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031EEAC
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8031EEB0
  c->r[0]=R8(c->r[7]+0x0000000Du); // 8031EEB4
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8031EEB8
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 8031EEBC
  W8(c->r[1]+0x0000001Au,c->r[0]); // 8031EEC0
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 8031EEC4
  W8(c->r[1]+0x00000019u,c->r[0]); // 8031EEC8
  c->r[0]=R8(c->r[7]+0x00000010u); // 8031EECC
  W8(c->r[1]+0x00000018u,c->r[0]); // 8031EED0
  c->r[31]=R8(c->r[7]+0x00000011u); // 8031EED4
  if (!crb(c,2)) { goto L_8031EEE8; } // 8031EED8
  c->r[4]=c->r[31]|c->r[31]; // 8031EEDC
  c->r[3]=c->r[1]+0x00000018u; // 8031EEE0
  c->lr=0x8031EEE8u; f_80329B30(c); // 8031EEE4
L_8031EEE8:;
  c->r[3]=c->r[29]|c->r[29]; // 8031EEE8
  c->r[5]=c->r[31]|c->r[31]; // 8031EEEC
  c->r[4]=c->r[1]+0x00000018u; // 8031EEF0
  c->lr=0x8031EEF8u; f_803157B4(c); // 8031EEF4
  goto L_8031F0EC; // 8031EEF8
L_8031EEFC:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031EEFC
  c->lr=0x8031EF04u; f_803297FC(c); // 8031EF00
  goto L_8031F0EC; // 8031EF04
L_8031EF08:;
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 8031EF08
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 8031EF0C
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 8031EF10
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 8031EF14
  c->r[3]=R8(c->r[7]+0x0000000Eu); // 8031EF18
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031EF1C
  c->r[4]=c->r[5]+c->r[4]; // 8031EF20
  c->r[30]=R8(c->r[7]+0x0000000Du); // 8031EF24
  c->r[31]=rotl(c->r[4],0)&0x0000FFFFu; // 8031EF28
  c->r[0]=c->r[3]+c->r[0]; // 8031EF2C
  c->r[28]=R8(c->r[7]+0x0000000Au); // 8031EF30
  c->r[4]=c->r[31]|c->r[31]; // 8031EF34
  c->r[5]=c->r[30]|c->r[30]; // 8031EF38
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8031EF3C
  c->r[3]=c->r[28]|c->r[28]; // 8031EF40
  c->lr=0x8031EF48u; f_8031AF78(c); // 8031EF44
  c->r[3]=c->r[28]|c->r[28]; // 8031EF48
  c->r[4]=c->r[31]|c->r[31]; // 8031EF4C
  c->r[5]=c->r[30]|c->r[30]; // 8031EF50
  c->r[6]=c->r[29]|c->r[29]; // 8031EF54
  c->lr=0x8031EF5Cu; f_8031AB30(c); // 8031EF58
  c->r[3]=c->r[28]|c->r[28]; // 8031EF5C
  c->r[4]=c->r[30]|c->r[30]; // 8031EF60
  c->r[5]=c->r[29]|c->r[29]; // 8031EF64
  c->lr=0x8031EF6Cu; f_80323BA4(c); // 8031EF68
  goto L_8031F0EC; // 8031EF6C
L_8031EF70:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 8031EF70
  cmps(c,0,(int32_t)c->r[0],0); // 8031EF74
  if (crb(c,2)) { goto L_8031F0EC; } // 8031EF78
  c->r[0]=0u+0x00000001u; // 8031EF7C
  c->r[3]=c->r[7]+0x00000009u; // 8031EF80
  W8(c->r[7]+0x00000009u,c->r[0]); // 8031EF84
  c->lr=0x8031EF8Cu; f_803182F0(c); // 8031EF88
  goto L_8031F0EC; // 8031EF8C
L_8031EF90:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 8031EF90
  c->r[3]=c->r[1]+0x00000010u; // 8031EF94
  W8(c->r[1]+0x00000015u,c->r[0]); // 8031EF98
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 8031EF9C
  W8(c->r[1]+0x00000014u,c->r[0]); // 8031EFA0
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031EFA4
  W8(c->r[1]+0x00000013u,c->r[0]); // 8031EFA8
  c->r[0]=R8(c->r[7]+0x0000000Du); // 8031EFAC
  W8(c->r[1]+0x00000012u,c->r[0]); // 8031EFB0
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 8031EFB4
  W8(c->r[1]+0x00000011u,c->r[0]); // 8031EFB8
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 8031EFBC
  W8(c->r[1]+0x00000010u,c->r[0]); // 8031EFC0
  c->lr=0x8031EFC8u; f_80329CF8(c); // 8031EFC4
  c->r[3]=c->r[1]+0x00000010u; // 8031EFC8
  c->lr=0x8031EFD0u; f_8031E198(c); // 8031EFCC
  goto L_8031F0EC; // 8031EFD0
L_8031EFD4:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 8031EFD4
  c->r[3]=c->r[1]+0x00000008u; // 8031EFD8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8031EFDC
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 8031EFE0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8031EFE4
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 8031EFE8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8031EFEC
  c->r[0]=R8(c->r[7]+0x0000000Du); // 8031EFF0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8031EFF4
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 8031EFF8
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031EFFC
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 8031F000
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031F004
  c->lr=0x8031F00Cu; f_8031DFF4(c); // 8031F008
  goto L_8031F0EC; // 8031F00C
L_8031F010:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031F010
  c->lr=0x8031F018u; f_8031FCD0(c); // 8031F014
  goto L_8031F0EC; // 8031F018
L_8031F01C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 8031F01C
  cmps(c,0,(int32_t)c->r[0],0); // 8031F020
  if (!crb(c,2)) { goto L_8031F0EC; } // 8031F024
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 8031F028
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 8031F02C
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 8031F030
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 8031F034
  c->r[3]=R8(c->r[7]+0x0000000Du); // 8031F038
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F03C
  c->r[4]=c->r[5]+c->r[4]; // 8031F040
  c->r[0]=c->r[3]+c->r[0]; // 8031F044
  c->r[29]=rotl(c->r[4],0)&0x00000FFFu; // 8031F048
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F04C
  c->r[3]=c->r[29]|c->r[29]; // 8031F050
  c->r[4]=c->r[28]|c->r[28]; // 8031F054
  c->lr=0x8031F05Cu; f_80315718(c); // 8031F058
  c->r[3]=c->r[29]|c->r[29]; // 8031F05C
  c->r[4]=c->r[28]|c->r[28]; // 8031F060
  c->lr=0x8031F068u; f_8031E4F4(c); // 8031F064
  goto L_8031F0EC; // 8031F068
L_8031F06C:;
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 8031F06C
  c->r[3]=R8(c->r[7]+0x0000000Au); // 8031F070
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F074
  c->r[0]=c->r[3]+c->r[0]; // 8031F078
  c->r[3]=rotl(c->r[0],0)&0x00000FFFu; // 8031F07C
  c->lr=0x8031F084u; f_803290AC(c); // 8031F080
  goto L_8031F0EC; // 8031F084
L_8031F088:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031F088
  c->lr=0x8031F090u; f_8031F500(c); // 8031F08C
  goto L_8031F0EC; // 8031F090
L_8031F094:;
  c->r[4]=R8(c->r[7]+0x0000000Cu); // 8031F094
  c->r[3]=R8(c->r[7]+0x00000010u); // 8031F098
  c->r[0]=R8(c->r[7]+0x00000012u); // 8031F09C
  c->r[6]=rotl(c->r[4],8)&0xFFFFFF00u; // 8031F0A0
  c->r[8]=R8(c->r[7]+0x0000000Bu); // 8031F0A4
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 8031F0A8
  c->r[5]=R8(c->r[7]+0x0000000Fu); // 8031F0AC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F0B0
  c->r[9]=c->r[8]+c->r[6]; // 8031F0B4
  c->r[4]=R8(c->r[7]+0x00000011u); // 8031F0B8
  c->r[8]=c->r[5]+c->r[3]; // 8031F0BC
  c->r[3]=R8(c->r[7]+0x0000000Au); // 8031F0C0
  c->r[0]=c->r[4]+c->r[0]; // 8031F0C4
  c->r[5]=R8(c->r[7]+0x0000000Du); // 8031F0C8
  c->r[6]=R8(c->r[7]+0x0000000Eu); // 8031F0CC
  c->r[7]=rotl(c->r[8],0)&0x0000FFFFu; // 8031F0D0
  c->r[4]=rotl(c->r[9],0)&0x0000FFFFu; // 8031F0D4
  c->r[8]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F0D8
  c->lr=0x8031F0E0u; f_8031B934(c); // 8031F0DC
  goto L_8031F0EC; // 8031F0E0
L_8031F0E4:;
  c->r[3]=c->r[7]+0x0000000Au; // 8031F0E4
  c->lr=0x8031F0ECu; f_80317E00(c); // 8031F0E8
L_8031F0EC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8031F0EC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8031F0F0
  c->r[30]=R32(c->r[1]+0x00000038u); // 8031F0F4
  c->r[29]=R32(c->r[1]+0x00000034u); // 8031F0F8
  c->r[28]=R32(c->r[1]+0x00000030u); // 8031F0FC
  c->lr=c->r[0]; // 8031F100
  c->r[1]=c->r[1]+0x00000040u; // 8031F104
  return; // 8031F108
}

// btu_hcif_send_cmd
void f_8031F10C(Ctx* __restrict c) {
  trace_call(0x8031F10Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F10C
  c->r[0]=c->lr; // 8031F110
  cmps(c,0,(int32_t)c->r[3],0); // 8031F114
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031F118
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031F11C
  c->r[31]=c->r[3]|c->r[3]; // 8031F120
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031F124
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031F128
  if (crb(c,2)) { goto L_8031F154; } // 8031F12C
  c->r[3]=0u+0x80570000u; // 8031F130
  c->r[3]=c->r[3]+0x000053D0u; // 8031F134
  c->r[0]=R16(c->r[3]+0x0000006Cu); // 8031F138
  cmps(c,0,(int32_t)c->r[0],0); // 8031F13C
  if (crb(c,2)) { goto L_8031F154; } // 8031F140
  c->r[4]=c->r[31]|c->r[31]; // 8031F144
  c->r[3]=c->r[3]+0x00000064u; // 8031F148
  c->lr=0x8031F150u; f_8030B42C(c); // 8031F14C
  c->r[31]=0u+0x00000000u; // 8031F150
L_8031F154:;
  c->r[4]=0u+0x80570000u; // 8031F154
  c->r[4]=c->r[4]+0x000053D0u; // 8031F158
  c->r[0]=R16(c->r[4]+0x00000080u); // 8031F15C
  cmps(c,0,(int32_t)c->r[0],0); // 8031F160
  if (!crb(c,2)) { goto L_8031F188; } // 8031F164
  c->r[3]=0u+0x80570000u; // 8031F168
  c->r[3]=c->r[3]+0x000058F8u; // 8031F16C
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 8031F170
  cmps(c,0,(int32_t)c->r[0],0); // 8031F174
  if (!crb(c,2)) { goto L_8031F188; } // 8031F178
  c->r[3]=R16(c->r[4]+0x0000006Cu); // 8031F17C
  c->r[0]=c->r[3]+0x00000001u; // 8031F180
  W16(c->r[4]+0x00000080u,c->r[0]); // 8031F184
L_8031F188:;
  c->r[3]=0u+0x80570000u; // 8031F188
  c->r[30]=c->r[3]+0x000053D0u; // 8031F18C
  goto L_8031F254; // 8031F190
L_8031F194:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031F194
  if (!crb(c,2)) { goto L_8031F1A8; } // 8031F198
  c->r[3]=c->r[30]+0x00000064u; // 8031F19C
  c->lr=0x8031F1A4u; f_8030B6A8(c); // 8031F1A0
  c->r[31]=c->r[3]|c->r[3]; // 8031F1A4
L_8031F1A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031F1A8
  if (crb(c,2)) { goto L_8031F260; } // 8031F1AC
  c->r[0]=R16(c->r[31]+0x00000004u); // 8031F1B0
  c->r[3]=c->r[31]+c->r[0]; // 8031F1B4
  c->r[0]=R8(c->r[3]+0x00000009u); // 8031F1B8
  c->r[3]=R8(c->r[3]+0x00000008u); // 8031F1BC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F1C0
  c->r[0]=c->r[3]+c->r[0]; // 8031F1C4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F1C8
  cmpu(c,0,c->r[0],0x00000C03u); // 8031F1CC
  if (crb(c,2)) { goto L_8031F238; } // 8031F1D0
  cmpu(c,0,c->r[0],0x00000C35u); // 8031F1D4
  if (crb(c,2)) { goto L_8031F238; } // 8031F1D8
  c->r[3]=0u+0x00000002u; // 8031F1DC
  c->lr=0x8031F1E4u; f_8030AF24(c); // 8031F1E0
  cmps(c,0,(int32_t)c->r[3],0); // 8031F1E4
  c->r[29]=c->r[3]|c->r[3]; // 8031F1E8
  if (crb(c,2)) { goto L_8031F238; } // 8031F1EC
  c->r[4]=c->r[31]|c->r[31]; // 8031F1F0
  c->r[5]=0u+0x00000008u; // 8031F1F4
  c->lr=0x8031F1FCu; f_80005FB4(c); // 8031F1F8
  c->r[3]=R16(c->r[29]+0x00000004u); // 8031F1FC
  c->r[0]=R16(c->r[31]+0x00000004u); // 8031F200
  c->r[3]=c->r[29]+c->r[3]; // 8031F204
  c->r[5]=R16(c->r[31]+0x00000002u); // 8031F208
  c->r[4]=c->r[31]+c->r[0]; // 8031F20C
  c->r[3]=c->r[3]+0x00000008u; // 8031F210
  c->r[4]=c->r[4]+0x00000008u; // 8031F214
  c->lr=0x8031F21Cu; f_80005FB4(c); // 8031F218
  c->r[4]=c->r[29]|c->r[29]; // 8031F21C
  c->r[3]=c->r[30]+0x00000070u; // 8031F220
  c->lr=0x8031F228u; f_8030B42C(c); // 8031F224
  c->r[3]=c->r[30]+0x0000004Cu; // 8031F228
  c->r[4]=0u+0x0000003Cu; // 8031F22C
  c->r[5]=0u+0x00000008u; // 8031F230
  c->lr=0x8031F238u; f_8030E7B4(c); // 8031F234
L_8031F238:;
  c->r[5]=R16(c->r[30]+0x00000080u); // 8031F238
  c->r[3]=c->r[31]|c->r[31]; // 8031F23C
  c->r[4]=0u+0x00002000u; // 8031F240
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 8031F244
  W16(c->r[30]+0x00000080u,c->r[0]); // 8031F248
  c->lr=0x8031F250u; f_8030E048(c); // 8031F24C
  c->r[31]=0u+0x00000000u; // 8031F250
L_8031F254:;
  c->r[0]=R16(c->r[30]+0x00000080u); // 8031F254
  cmps(c,0,(int32_t)c->r[0],0); // 8031F258
  if (!crb(c,2)) { IRQCHK(c); goto L_8031F194; } // 8031F25C
L_8031F260:;
  cmps(c,0,(int32_t)c->r[31],0); // 8031F260
  if (crb(c,2)) { goto L_8031F27C; } // 8031F264
  c->r[3]=0u+0x80570000u; // 8031F268
  c->r[4]=c->r[31]|c->r[31]; // 8031F26C
  c->r[3]=c->r[3]+0x000053D0u; // 8031F270
  c->r[3]=c->r[3]+0x00000064u; // 8031F274
  c->lr=0x8031F27Cu; f_8030B42C(c); // 8031F278
L_8031F27C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031F27C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031F280
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031F284
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031F288
  c->lr=c->r[0]; // 8031F28C
  c->r[1]=c->r[1]+0x00000020u; // 8031F290
  return; // 8031F294
}

// btu_hcif_connection_comp_evt
void f_8031F298(Ctx* __restrict c) {
  trace_call(0x8031F298u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F298
  c->r[0]=c->lr; // 8031F29C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031F2A0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8031F2A4
  W32(c->r[1]+0x00000028u,c->r[30]); // 8031F2A8
  c->r[0]=R8(c->r[3]+0x00000002u); // 8031F2AC
  c->r[31]=R8(c->r[3]+0x00000000u); // 8031F2B0
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F2B4
  c->r[5]=R8(c->r[3]+0x00000001u); // 8031F2B8
  c->r[0]=R8(c->r[3]+0x00000003u); // 8031F2BC
  c->r[4]=c->r[5]+c->r[4]; // 8031F2C0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8031F2C4
  c->r[30]=rotl(c->r[4],0)&0x00000FFFu; // 8031F2C8
  c->r[0]=R8(c->r[3]+0x00000004u); // 8031F2CC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8031F2D0
  c->r[0]=R8(c->r[3]+0x00000005u); // 8031F2D4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8031F2D8
  c->r[0]=R8(c->r[3]+0x00000006u); // 8031F2DC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8031F2E0
  c->r[0]=R8(c->r[3]+0x00000007u); // 8031F2E4
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031F2E8
  c->r[0]=R8(c->r[3]+0x00000008u); // 8031F2EC
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031F2F0
  c->r[0]=R8(c->r[3]+0x00000009u); // 8031F2F4
  c->r[6]=R8(c->r[3]+0x0000000Au); // 8031F2F8
  cmpu(c,0,c->r[0],0x00000001u); // 8031F2FC
  if (!crb(c,2)) { goto L_8031F328; } // 8031F300
  c->r[4]=c->r[30]|c->r[30]; // 8031F304
  c->r[5]=c->r[31]|c->r[31]; // 8031F308
  c->r[3]=c->r[1]+0x00000008u; // 8031F30C
  c->lr=0x8031F314u; f_8031D7D0(c); // 8031F310
  c->r[3]=c->r[31]|c->r[31]; // 8031F314
  c->r[4]=c->r[30]|c->r[30]; // 8031F318
  c->r[5]=c->r[1]+0x00000008u; // 8031F31C
  c->lr=0x8031F324u; f_80328D04(c); // 8031F320
  goto L_8031F35C; // 8031F324
L_8031F328:;
  c->r[3]=c->r[1]+0x00000010u; // 8031F328
  c->r[4]=0u+0x00000000u; // 8031F32C
  c->r[5]=0u+0x0000000Eu; // 8031F330
  c->lr=0x8031F338u; f_800060B8(c); // 8031F334
  c->r[3]=c->r[1]+0x00000014u; // 8031F338
  c->r[4]=c->r[1]+0x00000008u; // 8031F33C
  c->r[5]=0u+0x00000006u; // 8031F340
  c->lr=0x8031F348u; f_80005FB4(c); // 8031F344
  c->r[3]=c->r[31]|c->r[31]; // 8031F348
  c->r[5]=c->r[30]|c->r[30]; // 8031F34C
  c->r[4]=c->r[1]+0x00000008u; // 8031F350
  c->r[6]=c->r[1]+0x00000010u; // 8031F354
  c->lr=0x8031F35Cu; f_8031B2E4(c); // 8031F358
L_8031F35C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031F35C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8031F360
  c->r[30]=R32(c->r[1]+0x00000028u); // 8031F364
  c->lr=c->r[0]; // 8031F368
  c->r[1]=c->r[1]+0x00000030u; // 8031F36C
  return; // 8031F370
}

// btu_hcif_connection_request_evt
void f_8031F374(Ctx* __restrict c) {
  trace_call(0x8031F374u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F374
  c->r[0]=c->lr; // 8031F378
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031F37C
  c->r[0]=R8(c->r[3]+0x00000000u); // 8031F380
  W8(c->r[1]+0x00000011u,c->r[0]); // 8031F384
  c->r[0]=R8(c->r[3]+0x00000001u); // 8031F388
  W8(c->r[1]+0x00000010u,c->r[0]); // 8031F38C
  c->r[0]=R8(c->r[3]+0x00000002u); // 8031F390
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 8031F394
  c->r[0]=R8(c->r[3]+0x00000003u); // 8031F398
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8031F39C
  c->r[0]=R8(c->r[3]+0x00000004u); // 8031F3A0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8031F3A4
  c->r[0]=R8(c->r[3]+0x00000005u); // 8031F3A8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8031F3AC
  c->r[0]=R8(c->r[3]+0x00000006u); // 8031F3B0
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8031F3B4
  c->r[0]=R8(c->r[3]+0x00000007u); // 8031F3B8
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031F3BC
  c->r[0]=R8(c->r[3]+0x00000008u); // 8031F3C0
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031F3C4
  c->r[5]=R8(c->r[3]+0x00000009u); // 8031F3C8
  cmpu(c,0,c->r[5],0x00000001u); // 8031F3CC
  if (!crb(c,2)) { goto L_8031F3E4; } // 8031F3D0
  c->r[3]=c->r[1]+0x0000000Cu; // 8031F3D4
  c->r[4]=c->r[1]+0x00000008u; // 8031F3D8
  c->lr=0x8031F3E0u; f_8031CCF0(c); // 8031F3DC
  goto L_8031F3F0; // 8031F3E0
L_8031F3E4:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8031F3E4
  c->r[4]=c->r[1]+0x00000008u; // 8031F3E8
  c->lr=0x8031F3F0u; f_8031B104(c); // 8031F3EC
L_8031F3F0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031F3F0
  c->lr=c->r[0]; // 8031F3F4
  c->r[1]=c->r[1]+0x00000020u; // 8031F3F8
  return; // 8031F3FC
}

// btu_hcif_qos_setup_comp_evt
void f_8031F400(Ctx* __restrict c) {
  trace_call(0x8031F400u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F400
  c->r[0]=c->lr; // 8031F404
  c->r[6]=c->r[3]|c->r[3]; // 8031F408
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031F40C
  c->r[5]=c->r[1]+0x00000008u; // 8031F410
  c->r[4]=R8(c->r[6]+0x00000002u); // 8031F414
  c->r[3]=R8(c->r[3]+0x00000000u); // 8031F418
  c->r[7]=R8(c->r[6]+0x00000001u); // 8031F41C
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 8031F420
  c->r[0]=R8(c->r[6]+0x00000003u); // 8031F424
  c->r[4]=c->r[7]+c->r[4]; // 8031F428
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031F42C
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8031F430
  c->r[0]=R8(c->r[6]+0x00000004u); // 8031F434
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031F438
  c->r[7]=R8(c->r[6]+0x00000008u); // 8031F43C
  c->r[8]=R8(c->r[6]+0x00000007u); // 8031F440
  c->r[0]=R8(c->r[6]+0x00000006u); // 8031F444
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 8031F448
  c->r[7]=R8(c->r[6]+0x00000005u); // 8031F44C
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 8031F450
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F454
  c->r[7]=c->r[8]+c->r[7]; // 8031F458
  c->r[0]=c->r[9]+c->r[0]; // 8031F45C
  c->r[0]=c->r[7]+c->r[0]; // 8031F460
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8031F464
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 8031F468
  c->r[8]=R8(c->r[6]+0x0000000Bu); // 8031F46C
  c->r[0]=R8(c->r[6]+0x0000000Au); // 8031F470
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 8031F474
  c->r[7]=R8(c->r[6]+0x00000009u); // 8031F478
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 8031F47C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F480
  c->r[7]=c->r[8]+c->r[7]; // 8031F484
  c->r[0]=c->r[9]+c->r[0]; // 8031F488
  c->r[0]=c->r[7]+c->r[0]; // 8031F48C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8031F490
  c->r[7]=R8(c->r[6]+0x00000010u); // 8031F494
  c->r[8]=R8(c->r[6]+0x0000000Fu); // 8031F498
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 8031F49C
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 8031F4A0
  c->r[7]=R8(c->r[6]+0x0000000Du); // 8031F4A4
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 8031F4A8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F4AC
  c->r[7]=c->r[8]+c->r[7]; // 8031F4B0
  c->r[0]=c->r[9]+c->r[0]; // 8031F4B4
  c->r[0]=c->r[7]+c->r[0]; // 8031F4B8
  W32(c->r[1]+0x00000018u,c->r[0]); // 8031F4BC
  c->r[8]=R8(c->r[6]+0x00000014u); // 8031F4C0
  c->r[7]=R8(c->r[6]+0x00000013u); // 8031F4C4
  c->r[0]=R8(c->r[6]+0x00000012u); // 8031F4C8
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 8031F4CC
  c->r[6]=R8(c->r[6]+0x00000011u); // 8031F4D0
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 8031F4D4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F4D8
  c->r[6]=c->r[7]+c->r[6]; // 8031F4DC
  c->r[0]=c->r[8]+c->r[0]; // 8031F4E0
  c->r[0]=c->r[6]+c->r[0]; // 8031F4E4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8031F4E8
  c->lr=0x8031F4F0u; f_80315BE8(c); // 8031F4EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031F4F0
  c->lr=c->r[0]; // 8031F4F4
  c->r[1]=c->r[1]+0x00000020u; // 8031F4F8
  return; // 8031F4FC
}

// btu_hcif_esco_connection_comp_evt
void f_8031F500(Ctx* __restrict c) {
  trace_call(0x8031F500u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F500
  c->r[0]=c->lr; // 8031F504
  c->r[5]=0u+0x00000006u; // 8031F508
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031F50C
  c->r[4]=c->r[1]+0x00000008u; // 8031F510
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8031F514
  W32(c->r[1]+0x00000028u,c->r[30]); // 8031F518
  c->r[0]=R8(c->r[3]+0x00000002u); // 8031F51C
  c->r[31]=R8(c->r[3]+0x00000000u); // 8031F520
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F524
  c->r[7]=R8(c->r[3]+0x00000001u); // 8031F528
  c->r[0]=R8(c->r[3]+0x00000003u); // 8031F52C
  c->r[6]=c->r[7]+c->r[6]; // 8031F530
  W8(c->r[1]+0x0000000Du,c->r[0]); // 8031F534
  c->r[30]=rotl(c->r[6],0)&0x0000FFFFu; // 8031F538
  c->r[0]=R8(c->r[3]+0x00000004u); // 8031F53C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8031F540
  c->r[0]=R8(c->r[3]+0x00000005u); // 8031F544
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8031F548
  c->r[0]=R8(c->r[3]+0x00000006u); // 8031F54C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8031F550
  c->r[0]=R8(c->r[3]+0x00000007u); // 8031F554
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031F558
  c->r[0]=R8(c->r[3]+0x00000008u); // 8031F55C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031F560
  c->r[0]=R8(c->r[3]+0x00000009u); // 8031F564
  W8(c->r[1]+0x0000001Au,c->r[0]); // 8031F568
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8031F56C
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8031F570
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 8031F574
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 8031F578
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8031F57C
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 8031F580
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F584
  c->r[0]=c->r[6]+c->r[0]; // 8031F588
  W16(c->r[1]+0x00000010u,c->r[0]); // 8031F58C
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8031F590
  c->r[6]=R8(c->r[3]+0x0000000Eu); // 8031F594
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F598
  c->r[0]=c->r[6]+c->r[0]; // 8031F59C
  W16(c->r[1]+0x00000012u,c->r[0]); // 8031F5A0
  c->r[0]=R8(c->r[3]+0x00000010u); // 8031F5A4
  c->r[3]=c->r[1]+0x00000014u; // 8031F5A8
  W8(c->r[1]+0x0000001Du,c->r[0]); // 8031F5AC
  c->lr=0x8031F5B4u; f_80005FB4(c); // 8031F5B0
  c->r[3]=c->r[31]|c->r[31]; // 8031F5B4
  c->r[5]=c->r[30]|c->r[30]; // 8031F5B8
  c->r[4]=c->r[1]+0x00000008u; // 8031F5BC
  c->r[6]=c->r[1]+0x00000010u; // 8031F5C0
  c->lr=0x8031F5C8u; f_8031B2E4(c); // 8031F5C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031F5C8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8031F5CC
  c->r[30]=R32(c->r[1]+0x00000028u); // 8031F5D0
  c->lr=c->r[0]; // 8031F5D4
  c->r[1]=c->r[1]+0x00000030u; // 8031F5D8
  return; // 8031F5DC
}

// btu_hcif_hdl_command_complete
void f_8031F5E0(Ctx* __restrict c) {
  trace_call(0x8031F5E0u);
  cmps(c,0,(int32_t)c->r[3],3092); // 8031F5E0
  c->r[6]=c->r[3]|c->r[3]; // 8031F5E4
  if (crb(c,2)) { goto L_8031F6F0; } // 8031F5E8
  if (!crb(c,0)) { goto L_8031F644; } // 8031F5EC
  cmps(c,0,(int32_t)c->r[3],3077); // 8031F5F0
  if (crb(c,2)) { goto L_8031F6A4; } // 8031F5F4
  if (!crb(c,0)) { goto L_8031F620; } // 8031F5F8
  cmps(c,0,(int32_t)c->r[3],2060); // 8031F5FC
  if (crb(c,2)) { goto L_8031F6D0; } // 8031F600
  if (!crb(c,0)) { goto L_8031F614; } // 8031F604
  cmps(c,0,(int32_t)c->r[3],1026); // 8031F608
  if (crb(c,2)) { goto L_8031F69C; } // 8031F60C
  goto L_8031F718; // 8031F610
L_8031F614:;
  cmps(c,0,(int32_t)c->r[3],3075); // 8031F614
  if (crb(c,2)) { goto L_8031F698; } // 8031F618
  goto L_8031F718; // 8031F61C
L_8031F620:;
  cmps(c,0,(int32_t)c->r[3],3089); // 8031F620
  if (crb(c,2)) { goto L_8031F6B4; } // 8031F624
  if (!crb(c,0)) { goto L_8031F638; } // 8031F628
  cmps(c,0,(int32_t)c->r[3],3085); // 8031F62C
  if (crb(c,2)) { goto L_8031F6AC; } // 8031F630
  goto L_8031F718; // 8031F634
L_8031F638:;
  cmps(c,0,(int32_t)c->r[3],3091); // 8031F638
  if (!crb(c,0)) { goto L_8031F718; } // 8031F63C
  goto L_8031F6BC; // 8031F640
L_8031F644:;
  cmps(c,0,(int32_t)c->r[3],4105); // 8031F644
  if (crb(c,2)) { goto L_8031F6FC; } // 8031F648
  if (!crb(c,0)) { goto L_8031F674; } // 8031F64C
  cmps(c,0,(int32_t)c->r[3],4099); // 8031F650
  if (crb(c,2)) { goto L_8031F6E4; } // 8031F654
  if (!crb(c,0)) { goto L_8031F668; } // 8031F658
  cmps(c,0,(int32_t)c->r[3],4097); // 8031F65C
  if (crb(c,2)) { goto L_8031F6C4; } // 8031F660
  goto L_8031F718; // 8031F664
L_8031F668:;
  cmps(c,0,(int32_t)c->r[3],4101); // 8031F668
  if (crb(c,2)) { goto L_8031F6D8; } // 8031F66C
  goto L_8031F718; // 8031F670
L_8031F674:;
  cmps(c,0,(int32_t)c->r[3],5124); // 8031F674
  if (crb(c,2)) { goto L_8031F718; } // 8031F678
  if (!crb(c,0)) { goto L_8031F68C; } // 8031F67C
  cmps(c,0,(int32_t)c->r[3],5123); // 8031F680
  if (!crb(c,0)) { goto L_8031F708; } // 8031F684
  goto L_8031F718; // 8031F688
L_8031F68C:;
  cmps(c,0,(int32_t)c->r[3],5126); // 8031F68C
  if (!crb(c,0)) { goto L_8031F718; } // 8031F690
  goto L_8031F710; // 8031F694
L_8031F698:;
  f_8031714C(c); return; // 8031F698
L_8031F69C:;
  c->r[3]=0u+0x00000000u; // 8031F69C
  f_80319C7C(c); return; // 8031F6A0
L_8031F6A4:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6A4
  f_803197E4(c); return; // 8031F6A8
L_8031F6AC:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6AC
  f_803181B0(c); return; // 8031F6B0
L_8031F6B4:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6B4
  f_8031822C(c); return; // 8031F6B8
L_8031F6BC:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6BC
  f_80318288(c); return; // 8031F6C0
L_8031F6C4:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6C4
  c->r[4]=c->r[5]|c->r[5]; // 8031F6C8
  f_803173D8(c); return; // 8031F6CC
L_8031F6D0:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6D0
  f_8031516C(c); return; // 8031F6D4
L_8031F6D8:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6D8
  c->r[4]=c->r[5]|c->r[5]; // 8031F6DC
  f_80317310(c); return; // 8031F6E0
L_8031F6E4:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6E4
  c->r[4]=c->r[5]|c->r[5]; // 8031F6E8
  f_80317494(c); return; // 8031F6EC
L_8031F6F0:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6F0
  c->r[4]=c->r[5]|c->r[5]; // 8031F6F4
  f_80317A48(c); return; // 8031F6F8
L_8031F6FC:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F6FC
  c->r[4]=c->r[5]|c->r[5]; // 8031F700
  f_80317B14(c); return; // 8031F704
L_8031F708:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F708
  f_80316054(c); return; // 8031F70C
L_8031F710:;
  c->r[3]=c->r[4]|c->r[4]; // 8031F710
  f_80315F38(c); return; // 8031F714
L_8031F718:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 8031F718
  c->r[0]=c->r[3]+0x00000000u; // 8031F71C
  cmpu(c,0,c->r[0],0x0000FC00u); // 8031F720
  if (!crb(c,2)) return; // 8031F724
  c->r[3]=c->r[4]|c->r[4]; // 8031F728
  c->r[4]=c->r[6]|c->r[6]; // 8031F72C
  f_80317D5C(c); return; // 8031F730
  return; // 8031F734
}

// btu_hcif_command_complete_evt
void f_8031F738(Ctx* __restrict c) {
  trace_call(0x8031F738u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F738
  c->r[0]=c->lr; // 8031F73C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031F740
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031F744
  c->r[31]=0u+0x80570000u; // 8031F748
  c->r[31]=c->r[31]+0x000053D0u; // 8031F74C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031F750
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031F754
  c->r[29]=c->r[4]|c->r[4]; // 8031F758
  W32(c->r[1]+0x00000010u,c->r[28]); // 8031F75C
  c->r[28]=c->r[3]|c->r[3]; // 8031F760
  c->r[0]=R8(c->r[3]+0x00000000u); // 8031F764
  W16(c->r[31]+0x00000080u,c->r[0]); // 8031F768
  c->r[0]=R8(c->r[3]+0x00000002u); // 8031F76C
  c->r[3]=R8(c->r[3]+0x00000001u); // 8031F770
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F774
  c->r[0]=c->r[3]+c->r[0]; // 8031F778
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F77C
  cmpu(c,0,c->r[30],0x00000C03u); // 8031F780
  if (crb(c,2)) { goto L_8031F814; } // 8031F784
  cmpu(c,0,c->r[30],0x00000C35u); // 8031F788
  if (crb(c,2)) { goto L_8031F814; } // 8031F78C
  cmps(c,0,(int32_t)c->r[30],0); // 8031F790
  if (crb(c,2)) { goto L_8031F814; } // 8031F794
  c->r[3]=c->r[31]+0x00000070u; // 8031F798
  c->lr=0x8031F7A0u; f_8030B6A8(c); // 8031F79C
  cmps(c,0,(int32_t)c->r[3],0); // 8031F7A0
  if (crb(c,2)) { goto L_8031F7E0; } // 8031F7A4
  c->r[0]=R8(c->r[3]+0x00000009u); // 8031F7A8
  cmpu(c,0,c->r[30],0x0000FC4Cu); // 8031F7AC
  c->r[4]=R8(c->r[3]+0x00000008u); // 8031F7B0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F7B4
  c->r[0]=c->r[4]+c->r[0]; // 8031F7B8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F7BC
  if (!crb(c,2)) { goto L_8031F7DC; } // 8031F7C0
  cmpu(c,0,c->r[0],c->r[30]); // 8031F7C4
  if (crb(c,2)) { goto L_8031F7DC; } // 8031F7C8
  c->r[4]=c->r[3]|c->r[3]; // 8031F7CC
  c->r[3]=c->r[31]+0x00000070u; // 8031F7D0
  c->lr=0x8031F7D8u; f_8030B568(c); // 8031F7D4
  goto L_8031F830; // 8031F7D8
L_8031F7DC:;
  c->lr=0x8031F7E0u; f_8030B00C(c); // 8031F7DC
L_8031F7E0:;
  c->r[31]=0u+0x80570000u; // 8031F7E0
  c->r[31]=c->r[31]+0x000053D0u; // 8031F7E4
  c->r[3]=c->r[31]+0x00000070u; // 8031F7E8
  c->lr=0x8031F7F0u; f_8030B830(c); // 8031F7EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031F7F0
  if (!crb(c,2)) { goto L_8031F80C; } // 8031F7F4
  c->r[3]=c->r[31]+0x0000004Cu; // 8031F7F8
  c->r[4]=0u+0x0000003Cu; // 8031F7FC
  c->r[5]=0u+0x00000008u; // 8031F800
  c->lr=0x8031F808u; f_8030E7B4(c); // 8031F804
  goto L_8031F814; // 8031F808
L_8031F80C:;
  c->r[3]=c->r[31]+0x0000004Cu; // 8031F80C
  c->lr=0x8031F814u; f_8030E824(c); // 8031F810
L_8031F814:;
  c->r[0]=c->r[29]+0xFFFFFFFDu; // 8031F814
  c->r[3]=c->r[30]|c->r[30]; // 8031F818
  c->r[4]=c->r[28]+0x00000003u; // 8031F81C
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F820
  c->lr=0x8031F828u; f_8031F5E0(c); // 8031F824
  c->r[3]=0u+0x00000000u; // 8031F828
  c->lr=0x8031F830u; f_8031F10C(c); // 8031F82C
L_8031F830:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031F830
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031F834
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031F838
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031F83C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8031F840
  c->lr=c->r[0]; // 8031F844
  c->r[1]=c->r[1]+0x00000020u; // 8031F848
  return; // 8031F84C
}

// btu_hcif_hdl_command_status
void f_8031F850(Ctx* __restrict c) {
  trace_call(0x8031F850u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031F850
  c->r[0]=c->lr; // 8031F854
  cmps(c,0,(int32_t)c->r[3],2050); // 8031F858
  c->r[6]=c->r[3]|c->r[3]; // 8031F85C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8031F860
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8031F864
  W32(c->r[1]+0x00000028u,c->r[30]); // 8031F868
  c->r[30]=c->r[4]|c->r[4]; // 8031F86C
  if (crb(c,2)) { goto L_8031F898; } // 8031F870
  if (!crb(c,0)) { goto L_8031F884; } // 8031F874
  cmps(c,0,(int32_t)c->r[3],2049); // 8031F878
  if (!crb(c,0)) { goto L_8031F88C; } // 8031F87C
  goto L_8031F898; // 8031F880
L_8031F884:;
  cmps(c,0,(int32_t)c->r[3],2055); // 8031F884
  if (!crb(c,0)) { goto L_8031F898; } // 8031F888
L_8031F88C:;
  c->r[3]=c->r[30]|c->r[30]; // 8031F88C
  c->lr=0x8031F894u; f_8031AA80(c); // 8031F890
  goto L_8031FA38; // 8031F894
L_8031F898:;
  cmps(c,0,(int32_t)c->r[4],0); // 8031F898
  if (crb(c,2)) { goto L_8031FA38; } // 8031F89C
  cmps(c,0,(int32_t)c->r[3],1049); // 8031F8A0
  if (crb(c,2)) { goto L_8031F8F4; } // 8031F8A4
  if (!crb(c,0)) { goto L_8031F8D0; } // 8031F8A8
  cmps(c,0,(int32_t)c->r[3],1025); // 8031F8AC
  if (crb(c,2)) { goto L_8031F8E8; } // 8031F8B0
  if (!crb(c,0)) { goto L_8031F8C4; } // 8031F8B4
  cmps(c,0,(int32_t)c->r[3],13); // 8031F8B8
  if (crb(c,2)) { goto L_8031F91C; } // 8031F8BC
  goto L_8031FA18; // 8031F8C0
L_8031F8C4:;
  cmps(c,0,(int32_t)c->r[3],1029); // 8031F8C4
  if (crb(c,2)) { goto L_8031F948; } // 8031F8C8
  goto L_8031FA18; // 8031F8CC
L_8031F8D0:;
  cmps(c,0,(int32_t)c->r[3],2059); // 8031F8D0
  if (crb(c,2)) { goto L_8031F930; } // 8031F8D4
  if (!crb(c,0)) { goto L_8031FA18; } // 8031F8D8
  cmps(c,0,(int32_t)c->r[3],1064); // 8031F8DC
  if (crb(c,2)) { goto L_8031F9B4; } // 8031F8E0
  goto L_8031FA18; // 8031F8E4
L_8031F8E8:;
  c->r[3]=c->r[30]|c->r[30]; // 8031F8E8
  c->lr=0x8031F8F0u; f_80319C7C(c); // 8031F8EC
  goto L_8031FA38; // 8031F8F0
L_8031F8F4:;
  c->r[6]=c->r[30]|c->r[30]; // 8031F8F4
  c->r[3]=0u+0x00000000u; // 8031F8F8
  c->r[4]=0u+0x00000000u; // 8031F8FC
  c->r[5]=0u+0x00000000u; // 8031F900
  c->lr=0x8031F908u; f_80319ED0(c); // 8031F904
  c->r[5]=c->r[30]|c->r[30]; // 8031F908
  c->r[3]=0u+0x00000000u; // 8031F90C
  c->r[4]=0u+0x00000000u; // 8031F910
  c->lr=0x8031F918u; f_8031CF2C(c); // 8031F914
  goto L_8031FA38; // 8031F918
L_8031F91C:;
  c->r[3]=c->r[30]|c->r[30]; // 8031F91C
  c->r[4]=0u+0x00000000u; // 8031F920
  c->r[5]=0u+0x00000000u; // 8031F924
  c->lr=0x8031F92Cu; f_80315BE8(c); // 8031F928
  goto L_8031FA38; // 8031F92C
L_8031F930:;
  c->r[3]=c->r[30]|c->r[30]; // 8031F930
  c->r[4]=0u+0x00000000u; // 8031F934
  c->r[5]=0u+0x000000FFu; // 8031F938
  c->lr=0x8031F940u; f_803157B4(c); // 8031F93C
  c->lr=0x8031F944u; f_80329BB0(c); // 8031F940
  goto L_8031FA38; // 8031F944
L_8031F948:;
  cmps(c,0,(int32_t)c->r[5],0); // 8031F948
  if (crb(c,2)) { goto L_8031FA38; } // 8031F94C
  c->r[4]=R8(c->r[5]+0x00000001u); // 8031F950
  c->r[31]=0u+0x00010000u; // 8031F954
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8031F958
  c->r[3]=c->r[1]+0x00000008u; // 8031F95C
  W8(c->r[1]+0x0000000Du,c->r[4]); // 8031F960
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F964
  c->r[6]=0u+0x00000000u; // 8031F968
  c->r[0]=R8(c->r[5]+0x00000002u); // 8031F96C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8031F970
  c->r[0]=R8(c->r[5]+0x00000003u); // 8031F974
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8031F978
  c->r[0]=R8(c->r[5]+0x00000004u); // 8031F97C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8031F980
  c->r[0]=R8(c->r[5]+0x00000005u); // 8031F984
  W8(c->r[1]+0x00000009u,c->r[0]); // 8031F988
  c->r[0]=R8(c->r[5]+0x00000006u); // 8031F98C
  c->r[5]=c->r[30]|c->r[30]; // 8031F990
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031F994
  c->lr=0x8031F99Cu; f_8031D7D0(c); // 8031F998
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8031F99C
  c->r[3]=c->r[30]|c->r[30]; // 8031F9A0
  c->r[5]=c->r[1]+0x00000008u; // 8031F9A4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F9A8
  c->lr=0x8031F9B0u; f_80328D04(c); // 8031F9AC
  goto L_8031FA38; // 8031F9B0
L_8031F9B4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8031F9B4
  if (crb(c,2)) { goto L_8031FA38; } // 8031F9B8
  c->r[0]=R8(c->r[5]+0x00000002u); // 8031F9BC
  c->r[3]=R8(c->r[5]+0x00000001u); // 8031F9C0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031F9C4
  c->r[0]=c->r[3]+c->r[0]; // 8031F9C8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8031F9CC
  c->r[3]=c->r[31]|c->r[31]; // 8031F9D0
  c->lr=0x8031F9D8u; f_8031BA38(c); // 8031F9D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031F9D8
  if (crb(c,2)) { goto L_8031FA00; } // 8031F9DC
  c->r[3]=c->r[30]|c->r[30]; // 8031F9E0
  c->r[4]=c->r[31]|c->r[31]; // 8031F9E4
  c->r[5]=0u+0x00000000u; // 8031F9E8
  c->r[6]=0u+0x00000000u; // 8031F9EC
  c->r[7]=0u+0x00000000u; // 8031F9F0
  c->r[8]=0u+0x00000000u; // 8031F9F4
  c->lr=0x8031F9FCu; f_8031B934(c); // 8031F9F8
  goto L_8031FA38; // 8031F9FC
L_8031FA00:;
  c->r[3]=c->r[30]|c->r[30]; // 8031FA00
  c->r[5]=c->r[31]|c->r[31]; // 8031FA04
  c->r[6]=c->r[1]+0x00000010u; // 8031FA08
  c->r[4]=0u+0x00000000u; // 8031FA0C
  c->lr=0x8031FA14u; f_8031B2E4(c); // 8031FA10
  goto L_8031FA38; // 8031FA14
L_8031FA18:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 8031FA18
  c->r[0]=c->r[3]+0x00000000u; // 8031FA1C
  cmpu(c,0,c->r[0],0x0000FC00u); // 8031FA20
  if (!crb(c,2)) { goto L_8031FA38; } // 8031FA24
  c->r[3]=c->r[5]|c->r[5]; // 8031FA28
  c->r[4]=c->r[6]|c->r[6]; // 8031FA2C
  c->r[5]=0u+0x00000001u; // 8031FA30
  c->lr=0x8031FA38u; f_80317D5C(c); // 8031FA34
L_8031FA38:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8031FA38
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8031FA3C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8031FA40
  c->lr=c->r[0]; // 8031FA44
  c->r[1]=c->r[1]+0x00000030u; // 8031FA48
  return; // 8031FA4C
}

// btu_hcif_command_status_evt
void f_8031FA50(Ctx* __restrict c) {
  trace_call(0x8031FA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031FA50
  c->r[0]=c->lr; // 8031FA54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031FA58
  c->r[11]=c->r[1]+0x00000020u; // 8031FA5C
  c->lr=0x8031FA64u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8031FA60
  c->r[4]=0u+0x80570000u; // 8031FA64
  c->r[29]=R8(c->r[3]+0x00000000u); // 8031FA68
  c->r[0]=R8(c->r[3]+0x00000001u); // 8031FA6C
  c->r[4]=c->r[4]+0x000053D0u; // 8031FA70
  c->r[31]=0u+0x00000000u; // 8031FA74
  c->r[27]=0u+0x00000000u; // 8031FA78
  W16(c->r[4]+0x00000080u,c->r[0]); // 8031FA7C
  c->r[0]=R8(c->r[3]+0x00000003u); // 8031FA80
  c->r[3]=R8(c->r[3]+0x00000002u); // 8031FA84
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031FA88
  c->r[0]=c->r[3]+c->r[0]; // 8031FA8C
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 8031FA90
  cmpu(c,0,c->r[28],0x00000C03u); // 8031FA94
  if (crb(c,2)) { goto L_8031FB38; } // 8031FA98
  cmpu(c,0,c->r[28],0x00000C35u); // 8031FA9C
  if (crb(c,2)) { goto L_8031FB38; } // 8031FAA0
  cmps(c,0,(int32_t)c->r[28],0); // 8031FAA4
  if (crb(c,2)) { goto L_8031FB38; } // 8031FAA8
  c->r[3]=c->r[4]+0x00000070u; // 8031FAAC
  c->lr=0x8031FAB4u; f_8030B6A8(c); // 8031FAB0
  cmps(c,0,(int32_t)c->r[3],0); // 8031FAB4
  c->r[31]=c->r[3]|c->r[3]; // 8031FAB8
  if (crb(c,2)) { goto L_8031FB04; } // 8031FABC
  c->r[0]=R16(c->r[3]+0x00000004u); // 8031FAC0
  c->r[3]=c->r[3]+c->r[0]; // 8031FAC4
  c->r[0]=R8(c->r[3]+0x00000009u); // 8031FAC8
  c->r[27]=c->r[3]+0x0000000Au; // 8031FACC
  c->r[3]=R8(c->r[3]+0x00000008u); // 8031FAD0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031FAD4
  c->r[0]=c->r[3]+c->r[0]; // 8031FAD8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 8031FADC
  cmpu(c,0,c->r[6],c->r[28]); // 8031FAE0
  if (crb(c,2)) { goto L_8031FB04; } // 8031FAE4
  c->r[3]=0u+0x00070000u; // 8031FAE8
  c->r[4]=0u+0x80490000u; // 8031FAEC
  c->r[5]=c->r[28]|c->r[28]; // 8031FAF0
  c->r[27]=0u+0x00000000u; // 8031FAF4
  c->r[3]=c->r[3]+0x00000001u; // 8031FAF8
  c->r[4]=c->r[4]+0x00000E20u; // 8031FAFC
  c->lr=0x8031FB04u; f_8030E218(c); // 8031FB00
L_8031FB04:;
  c->r[30]=0u+0x80570000u; // 8031FB04
  c->r[30]=c->r[30]+0x000053D0u; // 8031FB08
  c->r[3]=c->r[30]+0x00000070u; // 8031FB0C
  c->lr=0x8031FB14u; f_8030B830(c); // 8031FB10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031FB14
  if (!crb(c,2)) { goto L_8031FB30; } // 8031FB18
  c->r[3]=c->r[30]+0x0000004Cu; // 8031FB1C
  c->r[4]=0u+0x0000003Cu; // 8031FB20
  c->r[5]=0u+0x00000008u; // 8031FB24
  c->lr=0x8031FB2Cu; f_8030E7B4(c); // 8031FB28
  goto L_8031FB38; // 8031FB2C
L_8031FB30:;
  c->r[3]=c->r[30]+0x0000004Cu; // 8031FB30
  c->lr=0x8031FB38u; f_8030E824(c); // 8031FB34
L_8031FB38:;
  c->r[3]=c->r[28]|c->r[28]; // 8031FB38
  c->r[4]=c->r[29]|c->r[29]; // 8031FB3C
  c->r[5]=c->r[27]|c->r[27]; // 8031FB40
  c->lr=0x8031FB48u; f_8031F850(c); // 8031FB44
  cmps(c,0,(int32_t)c->r[31],0); // 8031FB48
  if (crb(c,2)) { goto L_8031FB58; } // 8031FB4C
  c->r[3]=c->r[31]|c->r[31]; // 8031FB50
  c->lr=0x8031FB58u; f_8030B00C(c); // 8031FB54
L_8031FB58:;
  c->r[3]=0u+0x00000000u; // 8031FB58
  c->lr=0x8031FB60u; f_8031F10C(c); // 8031FB5C
  c->r[11]=c->r[1]+0x00000020u; // 8031FB60
  c->lr=0x8031FB68u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8031FB64
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031FB68
  c->lr=c->r[0]; // 8031FB6C
  c->r[1]=c->r[1]+0x00000020u; // 8031FB70
  return; // 8031FB74
}

// btu_hcif_cmd_timeout
void f_8031FB78(Ctx* __restrict c) {
  trace_call(0x8031FB78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8031FB78
  c->r[0]=c->lr; // 8031FB7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8031FB80
  c->r[0]=0u+0x00000001u; // 8031FB84
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8031FB88
  c->r[31]=0u+0x80570000u; // 8031FB8C
  c->r[31]=c->r[31]+0x000053D0u; // 8031FB90
  W32(c->r[1]+0x00000018u,c->r[30]); // 8031FB94
  c->r[3]=c->r[31]+0x00000070u; // 8031FB98
  W32(c->r[1]+0x00000014u,c->r[29]); // 8031FB9C
  W16(c->r[31]+0x00000080u,c->r[0]); // 8031FBA0
  c->lr=0x8031FBA8u; f_8030B6A8(c); // 8031FBA4
  cmps(c,0,(int32_t)c->r[3],0); // 8031FBA8
  c->r[30]=c->r[3]|c->r[3]; // 8031FBAC
  if (!crb(c,2)) { goto L_8031FBCC; } // 8031FBB0
  c->r[3]=0u+0x00070000u; // 8031FBB4
  c->r[4]=0u+0x80490000u; // 8031FBB8
  c->r[3]=c->r[3]+0x00000001u; // 8031FBBC
  c->r[4]=c->r[4]+0x00000E48u; // 8031FBC0
  c->lr=0x8031FBC8u; f_8030E1E8(c); // 8031FBC4
  goto L_8031FCB4; // 8031FBC8
L_8031FBCC:;
  c->r[3]=c->r[31]+0x00000070u; // 8031FBCC
  c->lr=0x8031FBD4u; f_8030B830(c); // 8031FBD0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8031FBD4
  if (!crb(c,2)) { goto L_8031FBEC; } // 8031FBD8
  c->r[3]=c->r[31]+0x0000004Cu; // 8031FBDC
  c->r[4]=0u+0x0000003Cu; // 8031FBE0
  c->r[5]=0u+0x00000008u; // 8031FBE4
  c->lr=0x8031FBECu; f_8030E7B4(c); // 8031FBE8
L_8031FBEC:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 8031FBEC
  c->r[3]=0u+0x00070000u; // 8031FBF0
  c->r[4]=0u+0x80490000u; // 8031FBF4
  c->r[31]=c->r[30]+c->r[0]; // 8031FBF8
  c->r[3]=c->r[3]+0x00000001u; // 8031FBFC
  c->r[0]=R8(c->r[31]+0x00000009u); // 8031FC00
  c->r[4]=c->r[4]+0x00000E68u; // 8031FC04
  c->r[5]=R8(c->r[31]+0x00000008u); // 8031FC08
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8031FC0C
  c->r[0]=c->r[5]+c->r[0]; // 8031FC10
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8031FC14
  c->r[5]=c->r[29]|c->r[29]; // 8031FC18
  c->lr=0x8031FC20u; f_8030E200(c); // 8031FC1C
  cmps(c,0,(int32_t)c->r[29],1049); // 8031FC20
  if (crb(c,2)) { goto L_8031FC70; } // 8031FC24
  if (!crb(c,0)) { goto L_8031FC50; } // 8031FC28
  cmps(c,0,(int32_t)c->r[29],1025); // 8031FC2C
  if (crb(c,2)) { goto L_8031FC70; } // 8031FC30
  if (!crb(c,0)) { goto L_8031FC44; } // 8031FC34
  cmps(c,0,(int32_t)c->r[29],13); // 8031FC38
  if (crb(c,2)) { goto L_8031FC70; } // 8031FC3C
  goto L_8031FC84; // 8031FC40
L_8031FC44:;
  cmps(c,0,(int32_t)c->r[29],1029); // 8031FC44
  if (crb(c,2)) { goto L_8031FC70; } // 8031FC48
  goto L_8031FC84; // 8031FC4C
L_8031FC50:;
  cmps(c,0,(int32_t)c->r[29],2050); // 8031FC50
  if (crb(c,2)) { goto L_8031FC84; } // 8031FC54
  if (!crb(c,0)) { goto L_8031FC68; } // 8031FC58
  cmps(c,0,(int32_t)c->r[29],2049); // 8031FC5C
  if (!crb(c,0)) { goto L_8031FC70; } // 8031FC60
  goto L_8031FC84; // 8031FC64
L_8031FC68:;
  cmps(c,0,(int32_t)c->r[29],2055); // 8031FC68
  if (!crb(c,0)) { goto L_8031FC84; } // 8031FC6C
L_8031FC70:;
  c->r[3]=c->r[29]|c->r[29]; // 8031FC70
  c->r[5]=c->r[31]+0x0000000Au; // 8031FC74
  c->r[4]=0u+0x0000001Fu; // 8031FC78
  c->lr=0x8031FC80u; f_8031F850(c); // 8031FC7C
  goto L_8031FC9C; // 8031FC80
L_8031FC84:;
  c->r[0]=0u+0x0000001Fu; // 8031FC84
  c->r[3]=c->r[29]|c->r[29]; // 8031FC88
  W8(c->r[1]+0x00000008u,c->r[0]); // 8031FC8C
  c->r[4]=c->r[1]+0x00000008u; // 8031FC90
  c->r[5]=0u+0x00000001u; // 8031FC94
  c->lr=0x8031FC9Cu; f_8031F5E0(c); // 8031FC98
L_8031FC9C:;
  c->r[3]=c->r[30]|c->r[30]; // 8031FC9C
  c->lr=0x8031FCA4u; f_8030B00C(c); // 8031FCA0
  c->r[3]=0u+0x00000002u; // 8031FCA4
  c->lr=0x8031FCACu; f_8031847C(c); // 8031FCA8
  c->r[3]=0u+0x00000000u; // 8031FCAC
  c->lr=0x8031FCB4u; f_8031F10C(c); // 8031FCB0
L_8031FCB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8031FCB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8031FCB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8031FCBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8031FCC0
  c->lr=c->r[0]; // 8031FCC4
  c->r[1]=c->r[1]+0x00000020u; // 8031FCC8
  return; // 8031FCCC
}

