#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_8022A77C
void f_8022A77C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022A77C
  c->r[0]=c->lr; // 8022A780
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022A784
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022A788
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022A78C
  c->r[30]=c->r[3]|c->r[3]; // 8022A790
  c->lr=0x8022A798u; f_8022B468(c); // 8022A794
  cmpu(c,0,c->r[3],0x00000028u); // 8022A798
  if (crb(c,1)) { goto L_8022A9AC; } // 8022A79C
  c->r[4]=0u+0x80480000u; // 8022A7A0
  c->r[4]=c->r[4]+0xFFFFFE00u; // 8022A7A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8022A7A8
  c->r[4]=R32(c->r[4]+c->r[0]); // 8022A7AC
  c->ctr=c->r[4]; // 8022A7B0
  if (true) { switch (c->ctr) { case 0x8022A7B8u: goto L_8022A7B8; case 0x8022A808u: goto L_8022A808; case 0x8022A82Cu: goto L_8022A82C; case 0x8022A87Cu: goto L_8022A87C; case 0x8022A89Cu: goto L_8022A89C; case 0x8022A8F8u: goto L_8022A8F8; case 0x8022A928u: goto L_8022A928; case 0x8022A964u: goto L_8022A964; case 0x8022A994u: goto L_8022A994; case 0x8022A9ACu: goto L_8022A9AC; default: break; } dispatch(c,c->ctr); return; } // 8022A7B4
L_8022A7B8:;
  c->r[3]=c->r[30]+0x00010000u; // 8022A7B8
  c->r[31]=R32(c->r[3]+0xFFFF81BCu); // 8022A7BC
  c->r[0]=c->r[31]+0x00010000u; // 8022A7C0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8022A7C4
  if (!crb(c,2)) { goto L_8022A7DC; } // 8022A7C8
  c->r[3]=c->r[30]|c->r[30]; // 8022A7CC
  c->r[4]=0u+0x0000000Au; // 8022A7D0
  c->lr=0x8022A7D8u; f_802292D8(c); // 8022A7D4
  goto L_8022A9AC; // 8022A7D8
L_8022A7DC:;
  c->lr=0x8022A7E0u; f_8006592C(c); // 8022A7DC
  c->r[4]=c->r[31]|c->r[31]; // 8022A7E0
  c->r[5]=0u+0xFFFFFFFFu; // 8022A7E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022A7E8
  c->lr=0x8022A7F0u; f_80048BF8(c); // 8022A7EC
  cmps(c,0,(int32_t)c->r[3],0); // 8022A7F0
  if (crb(c,2)) { goto L_8022A9AC; } // 8022A7F4
  c->r[3]=c->r[30]|c->r[30]; // 8022A7F8
  c->r[4]=0u+0x00000001u; // 8022A7FC
  c->lr=0x8022A804u; f_802292E4(c); // 8022A800
  goto L_8022A9AC; // 8022A804
L_8022A808:;
  c->lr=0x8022A80Cu; f_8006592C(c); // 8022A808
  c->r[4]=0u+0x00000001u; // 8022A80C
  c->lr=0x8022A814u; f_80048D00(c); // 8022A810
  cmps(c,0,(int32_t)c->r[3],0); // 8022A814
  if (crb(c,2)) { goto L_8022A9AC; } // 8022A818
  c->r[3]=c->r[30]|c->r[30]; // 8022A81C
  c->r[4]=0u+0x0000000Au; // 8022A820
  c->lr=0x8022A828u; f_802292D8(c); // 8022A824
  goto L_8022A9AC; // 8022A828
L_8022A82C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022A82C
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022A830
  c->r[12]=R32(c->r[12]+0x0000007Cu); // 8022A834
  c->ctr=c->r[12]; // 8022A838
  if (true) { c->lr=0x8022A840u; dispatch(c,c->ctr); } // 8022A83C
  cmps(c,0,(int32_t)c->r[3],0); // 8022A840
  if (!crb(c,2)) { goto L_8022A858; } // 8022A844
  c->r[3]=c->r[30]|c->r[30]; // 8022A848
  c->r[4]=0u+0x00000014u; // 8022A84C
  c->lr=0x8022A854u; f_802292D8(c); // 8022A850
  goto L_8022A9AC; // 8022A854
L_8022A858:;
  c->lr=0x8022A85Cu; f_8006E5AC(c); // 8022A858
  c->r[4]=0u+0x00000000u; // 8022A85C
  c->lr=0x8022A864u; f_8010ABFC(c); // 8022A860
  cmps(c,0,(int32_t)c->r[3],0); // 8022A864
  if (crb(c,2)) { goto L_8022A9AC; } // 8022A868
  c->r[3]=c->r[30]|c->r[30]; // 8022A86C
  c->r[4]=0u+0x00000001u; // 8022A870
  c->lr=0x8022A878u; f_802292E4(c); // 8022A874
  goto L_8022A9AC; // 8022A878
L_8022A87C:;
  c->lr=0x8022A880u; f_8006E5AC(c); // 8022A87C
  c->lr=0x8022A884u; f_8010AD04(c); // 8022A880
  cmps(c,0,(int32_t)c->r[3],0); // 8022A884
  if (crb(c,2)) { goto L_8022A9AC; } // 8022A888
  c->r[3]=c->r[30]|c->r[30]; // 8022A88C
  c->r[4]=0u+0x00000014u; // 8022A890
  c->lr=0x8022A898u; f_802292D8(c); // 8022A894
  goto L_8022A9AC; // 8022A898
L_8022A89C:;
  c->r[3]=c->r[30]+0x00070000u; // 8022A89C
  c->r[3]=R32(c->r[3]+0x00006550u); // 8022A8A0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022A8A4
  cmps(c,0,(int32_t)c->r[0],0); // 8022A8A8
  if (!crb(c,2)) { goto L_8022A8CC; } // 8022A8AC
  c->r[3]=c->r[30]+0x00010000u; // 8022A8B0
  c->r[3]=c->r[3]+0xFFFF80E0u; // 8022A8B4
  c->r[4]=0u+0x80430000u; // 8022A8B8
  c->r[4]=c->r[4]+0x00002CB0u; // 8022A8BC
  c->r[5]=0u+0x00000001u; // 8022A8C0
  c->lr=0x8022A8C8u; f_80076D08(c); // 8022A8C4
  goto L_8022A8E8; // 8022A8C8
L_8022A8CC:;
  c->r[3]=c->r[30]+0x00010000u; // 8022A8CC
  c->r[3]=c->r[3]+0xFFFF80E0u; // 8022A8D0
  c->r[4]=0u+0x80430000u; // 8022A8D4
  c->r[4]=c->r[4]+0x00002CB0u; // 8022A8D8
  c->r[4]=c->r[4]+0x00000110u; // 8022A8DC
  c->r[5]=0u+0x00000001u; // 8022A8E0
  c->lr=0x8022A8E8u; f_80076D08(c); // 8022A8E4
L_8022A8E8:;
  c->r[3]=c->r[30]|c->r[30]; // 8022A8E8
  c->r[4]=0u+0x00000001u; // 8022A8EC
  c->lr=0x8022A8F4u; f_802292E4(c); // 8022A8F0
  goto L_8022A9AC; // 8022A8F4
L_8022A8F8:;
  c->r[3]=c->r[30]+0x00010000u; // 8022A8F8
  c->r[3]=c->r[3]+0xFFFF80E0u; // 8022A8FC
  c->lr=0x8022A904u; f_80075AF0(c); // 8022A900
  cmps(c,0,(int32_t)c->r[3],0); // 8022A904
  if (crb(c,2)) { goto L_8022A9AC; } // 8022A908
  c->r[3]=c->r[30]+0x00010000u; // 8022A90C
  c->r[3]=c->r[3]+0xFFFF80E0u; // 8022A910
  c->lr=0x8022A918u; f_80076D58(c); // 8022A914
  c->r[3]=c->r[30]|c->r[30]; // 8022A918
  c->r[4]=0u+0x0000001Eu; // 8022A91C
  c->lr=0x8022A924u; f_802292D8(c); // 8022A920
  goto L_8022A9AC; // 8022A924
L_8022A928:;
  c->r[3]=c->r[30]+0x00010000u; // 8022A928
  c->r[4]=R32(c->r[3]+0xFFFF81B8u); // 8022A92C
  cmps(c,0,(int32_t)c->r[4],0); // 8022A930
  if (crb(c,2)) { goto L_8022A954; } // 8022A934
  c->r[3]=c->r[3]+0xFFFF814Cu; // 8022A938
  c->r[5]=0u+0x00000001u; // 8022A93C
  c->lr=0x8022A944u; f_80076D08(c); // 8022A940
  c->r[3]=c->r[30]|c->r[30]; // 8022A944
  c->r[4]=0u+0x00000001u; // 8022A948
  c->lr=0x8022A950u; f_802292E4(c); // 8022A94C
  goto L_8022A9AC; // 8022A950
L_8022A954:;
  c->r[3]=c->r[30]|c->r[30]; // 8022A954
  c->r[4]=0u+0x00000028u; // 8022A958
  c->lr=0x8022A960u; f_802292D8(c); // 8022A95C
  goto L_8022A9AC; // 8022A960
L_8022A964:;
  c->r[3]=c->r[30]+0x00010000u; // 8022A964
  c->r[3]=c->r[3]+0xFFFF814Cu; // 8022A968
  c->lr=0x8022A970u; f_80075AF0(c); // 8022A96C
  cmps(c,0,(int32_t)c->r[3],0); // 8022A970
  if (crb(c,2)) { goto L_8022A9AC; } // 8022A974
  c->r[3]=c->r[30]+0x00010000u; // 8022A978
  c->r[3]=c->r[3]+0xFFFF814Cu; // 8022A97C
  c->lr=0x8022A984u; f_80076D58(c); // 8022A980
  c->r[3]=c->r[30]|c->r[30]; // 8022A984
  c->r[4]=0u+0x00000028u; // 8022A988
  c->lr=0x8022A990u; f_802292D8(c); // 8022A98C
  goto L_8022A9AC; // 8022A990
L_8022A994:;
  c->r[3]=c->r[30]|c->r[30]; // 8022A994
  c->r[4]=0u+0x00000000u; // 8022A998
  c->lr=0x8022A9A0u; f_802292D8(c); // 8022A99C
  c->r[3]=c->r[30]|c->r[30]; // 8022A9A0
  c->r[4]=0u+0x00000003u; // 8022A9A4
  c->lr=0x8022A9ACu; f_8022B420(c); // 8022A9A8
L_8022A9AC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022A9AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022A9B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022A9B4
  c->lr=c->r[0]; // 8022A9B8
  c->r[1]=c->r[1]+0x00000010u; // 8022A9BC
  return; // 8022A9C0
}

// fn_8022A9C4
void f_8022A9C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022A9C4
  c->r[0]=c->lr; // 8022A9C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022A9CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022A9D0
  c->r[31]=c->r[3]|c->r[3]; // 8022A9D4
  c->lr=0x8022A9DCu; f_8022B468(c); // 8022A9D8
  cmps(c,0,(int32_t)c->r[3],2); // 8022A9DC
  if (crb(c,2)) { goto L_8022AA60; } // 8022A9E0
  if (!crb(c,0)) { goto L_8022A9F8; } // 8022A9E4
  cmps(c,0,(int32_t)c->r[3],0); // 8022A9E8
  if (crb(c,2)) { goto L_8022AA04; } // 8022A9EC
  if (!crb(c,0)) { goto L_8022AA34; } // 8022A9F0
  goto L_8022AAA8; // 8022A9F4
L_8022A9F8:;
  cmps(c,0,(int32_t)c->r[3],4); // 8022A9F8
  if (!crb(c,0)) { goto L_8022AAA8; } // 8022A9FC
  goto L_8022AA80; // 8022AA00
L_8022AA04:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AA04
  c->r[4]=0u+0x00000002u; // 8022AA08
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022AA0C
  c->r[12]=R32(c->r[12]+0x00000058u); // 8022AA10
  c->ctr=c->r[12]; // 8022AA14
  if (true) { c->lr=0x8022AA1Cu; dispatch(c,c->ctr); } // 8022AA18
  cmps(c,0,(int32_t)c->r[3],0); // 8022AA1C
  if (crb(c,2)) { goto L_8022AAA8; } // 8022AA20
  c->r[3]=c->r[31]|c->r[31]; // 8022AA24
  c->r[4]=0u+0x00000001u; // 8022AA28
  c->lr=0x8022AA30u; f_802292E4(c); // 8022AA2C
  goto L_8022AAA8; // 8022AA30
L_8022AA34:;
  c->r[3]=c->r[31]+0x00070000u; // 8022AA34
  c->r[3]=R32(c->r[3]+0x00006550u); // 8022AA38
  c->r[0]=R32(c->r[3]+0x00000004u); // 8022AA3C
  cmps(c,0,(int32_t)c->r[0],0); // 8022AA40
  if (!crb(c,2)) { goto L_8022AA50; } // 8022AA44
  c->r[3]=c->r[31]|c->r[31]; // 8022AA48
  c->lr=0x8022AA50u; f_80229A24(c); // 8022AA4C
L_8022AA50:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AA50
  c->r[4]=0u+0x00000001u; // 8022AA54
  c->lr=0x8022AA5Cu; f_802292E4(c); // 8022AA58
  goto L_8022AAA8; // 8022AA5C
L_8022AA60:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AA60
  c->r[4]=0u+0x00000000u; // 8022AA64
  c->r[5]=0u+0x00000001u; // 8022AA68
  c->lr=0x8022AA70u; f_80229624(c); // 8022AA6C
  c->r[3]=c->r[31]|c->r[31]; // 8022AA70
  c->r[4]=0u+0x00000001u; // 8022AA74
  c->lr=0x8022AA7Cu; f_802292E4(c); // 8022AA78
  goto L_8022AAA8; // 8022AA7C
L_8022AA80:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AA80
  c->r[4]=0u+0x00000000u; // 8022AA84
  c->lr=0x8022AA8Cu; f_802292D8(c); // 8022AA88
  c->r[3]=c->r[31]|c->r[31]; // 8022AA8C
  c->r[4]=0u+0x00000004u; // 8022AA90
  c->lr=0x8022AA98u; f_8022B420(c); // 8022AA94
  c->lr=0x8022AA9Cu; f_8006E23C(c); // 8022AA98
  c->r[4]=0u+0x00000000u; // 8022AA9C
  c->r[5]=0u+0x00000000u; // 8022AAA0
  c->lr=0x8022AAA8u; f_801E9E38(c); // 8022AAA4
L_8022AAA8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022AAA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022AAAC
  c->lr=c->r[0]; // 8022AAB0
  c->r[1]=c->r[1]+0x00000010u; // 8022AAB4
  return; // 8022AAB8
}

// fn_8022AABC
void f_8022AABC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AABC
  c->r[0]=c->lr; // 8022AAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022AAC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022AAC8
  c->r[31]=c->r[3]|c->r[3]; // 8022AACC
  c->lr=0x8022AAD4u; f_8022B468(c); // 8022AAD0
  cmps(c,0,(int32_t)c->r[3],1); // 8022AAD4
  if (crb(c,2)) { goto L_8022AB20; } // 8022AAD8
  if (!crb(c,0)) { goto L_8022AAEC; } // 8022AADC
  cmps(c,0,(int32_t)c->r[3],0); // 8022AAE0
  if (!crb(c,0)) { goto L_8022AAF8; } // 8022AAE4
  goto L_8022AB70; // 8022AAE8
L_8022AAEC:;
  cmps(c,0,(int32_t)c->r[3],3); // 8022AAEC
  if (!crb(c,0)) { goto L_8022AB70; } // 8022AAF0
  goto L_8022AB48; // 8022AAF4
L_8022AAF8:;
  c->r[3]=0u+0x00000001u; // 8022AAF8
  c->lr=0x8022AB00u; f_80173F68(c); // 8022AAFC
  c->r[4]=0u+0x00000001u; // 8022AB00
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AB04
  {uint32_t ea=c->r[2]+0xFFFF9994u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022AB08
  c->lr=0x8022AB10u; f_80174548(c); // 8022AB0C
  c->r[3]=c->r[31]|c->r[31]; // 8022AB10
  c->r[4]=0u+0x00000001u; // 8022AB14
  c->lr=0x8022AB1Cu; f_802292E4(c); // 8022AB18
  goto L_8022AB70; // 8022AB1C
L_8022AB20:;
  c->r[3]=0u+0x00000001u; // 8022AB20
  c->lr=0x8022AB28u; f_80173F68(c); // 8022AB24
  c->r[4]=0u+0x00000000u; // 8022AB28
  c->lr=0x8022AB30u; f_801748B8(c); // 8022AB2C
  cmps(c,0,(int32_t)c->r[3],0); // 8022AB30
  if (crb(c,2)) { goto L_8022AB70; } // 8022AB34
  c->r[3]=c->r[31]|c->r[31]; // 8022AB38
  c->r[4]=0u+0x00000001u; // 8022AB3C
  c->lr=0x8022AB44u; f_802292E4(c); // 8022AB40
  goto L_8022AB70; // 8022AB44
L_8022AB48:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AB48
  c->r[4]=0u+0x00000000u; // 8022AB4C
  c->lr=0x8022AB54u; f_802292D8(c); // 8022AB50
  c->r[3]=c->r[31]|c->r[31]; // 8022AB54
  c->r[4]=0u+0x00000005u; // 8022AB58
  c->lr=0x8022AB60u; f_8022B420(c); // 8022AB5C
  c->r[3]=c->r[31]+0x00010000u; // 8022AB60
  c->r[0]=R32(c->r[3]+0xFFFF80DCu); // 8022AB64
  c->r[0]=c->r[0]|0x00000002u; // 8022AB68
  W32(c->r[3]+0xFFFF80DCu,c->r[0]); // 8022AB6C
L_8022AB70:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022AB70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022AB74
  c->lr=c->r[0]; // 8022AB78
  c->r[1]=c->r[1]+0x00000010u; // 8022AB7C
  return; // 8022AB80
}

// fn_8022AB84
void f_8022AB84(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AB84
  c->r[0]=c->lr; // 8022AB88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022AB8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022AB90
  c->r[31]=c->r[3]|c->r[3]; // 8022AB94
  c->lr=0x8022AB9Cu; f_8022B468(c); // 8022AB98
  cmps(c,0,(int32_t)c->r[3],3); // 8022AB9C
  if (crb(c,2)) { goto L_8022ACDC; } // 8022ABA0
  if (!crb(c,0)) { goto L_8022ABC0; } // 8022ABA4
  cmps(c,0,(int32_t)c->r[3],1); // 8022ABA8
  if (crb(c,2)) { goto L_8022AC54; } // 8022ABAC
  if (!crb(c,0)) { goto L_8022ACAC; } // 8022ABB0
  cmps(c,0,(int32_t)c->r[3],0); // 8022ABB4
  if (!crb(c,0)) { goto L_8022ABD0; } // 8022ABB8
  goto L_8022ADBC; // 8022ABBC
L_8022ABC0:;
  cmps(c,0,(int32_t)c->r[3],5); // 8022ABC0
  if (crb(c,2)) { goto L_8022AD5C; } // 8022ABC4
  if (!crb(c,0)) { goto L_8022ADBC; } // 8022ABC8
  goto L_8022ACFC; // 8022ABCC
L_8022ABD0:;
  c->r[3]=c->r[31]+0x00010000u; // 8022ABD0
  c->r[0]=R32(c->r[3]+0xFFFF80DCu); // 8022ABD4
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 8022ABD8
  cmps(c,0,(int32_t)c->r[0],0); // 8022ABDC
  if (!crb(c,2)) { goto L_8022ABF4; } // 8022ABE0
  c->r[3]=c->r[31]|c->r[31]; // 8022ABE4
  c->r[4]=0u+0x00000005u; // 8022ABE8
  c->lr=0x8022ABF0u; f_802292D8(c); // 8022ABEC
  goto L_8022ADBC; // 8022ABF0
L_8022ABF4:;
  c->lr=0x8022ABF8u; f_80047C90(c); // 8022ABF4
  c->r[4]=0u+0x00000000u; // 8022ABF8
  c->lr=0x8022AC00u; f_80058EA4(c); // 8022ABFC
  c->r[4]=0u+0x00000800u; // 8022AC00
  c->lr=0x8022AC08u; f_80057B44(c); // 8022AC04
  cmps(c,0,(int32_t)c->r[3],0); // 8022AC08
  if (crb(c,2)) { goto L_8022ADBC; } // 8022AC0C
  c->lr=0x8022AC14u; f_8006592C(c); // 8022AC10
  c->r[4]=0u+0x0000000Eu; // 8022AC14
  c->r[5]=0u+0x00000000u; // 8022AC18
  c->r[6]=0u+0xFFFFFFFFu; // 8022AC1C
  c->r[7]=0u+0xFFFFFFFFu; // 8022AC20
  c->lr=0x8022AC28u; f_80048F20(c); // 8022AC24
  c->r[3]=c->r[31]|c->r[31]; // 8022AC28
  c->r[4]=0u+0x00000000u; // 8022AC2C
  c->r[5]=0u+0x00000000u; // 8022AC30
  c->lr=0x8022AC38u; f_80229624(c); // 8022AC34
  c->r[3]=c->r[31]|c->r[31]; // 8022AC38
  c->r[4]=0u+0x00000001u; // 8022AC3C
  c->lr=0x8022AC44u; f_802292E4(c); // 8022AC40
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AC44
  c->r[3]=c->r[31]+0x00070000u; // 8022AC48
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022AC4C
  goto L_8022ADBC; // 8022AC50
L_8022AC54:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AC54
  c->r[4]=0u+0x00000000u; // 8022AC58
  c->lr=0x8022AC60u; f_80229840(c); // 8022AC5C
  cmps(c,0,(int32_t)c->r[3],0); // 8022AC60
  if (crb(c,2)) { goto L_8022ADBC; } // 8022AC64
  c->r[3]=c->r[31]+0x00070000u; // 8022AC68
  {uint32_t ea=c->r[3]+0x00006548u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AC6C
  {uint32_t ea=c->r[2]+0xFFFF9994u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AC70
  fcmp(c,0,c->f[1],c->f[0]); // 8022AC74
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022AC78
  if (!crb(c,2)) { goto L_8022AC90; } // 8022AC7C
  c->r[3]=c->r[31]|c->r[31]; // 8022AC80
  c->r[4]=0u+0x00000001u; // 8022AC84
  c->lr=0x8022AC8Cu; f_802292E4(c); // 8022AC88
  goto L_8022ADBC; // 8022AC8C
L_8022AC90:;
  c->r[3]=0u+0x00000001u; // 8022AC90
  c->lr=0x8022AC98u; f_8005D714(c); // 8022AC94
  c->r[3]=c->r[31]+0x00070000u; // 8022AC98
  {uint32_t ea=c->r[3]+0x00006548u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AC9C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8022ACA0
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022ACA4
  goto L_8022ADBC; // 8022ACA8
L_8022ACAC:;
  c->r[3]=c->r[31]|c->r[31]; // 8022ACAC
  c->r[4]=0u+0x00000003u; // 8022ACB0
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022ACB4
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 8022ACB8
  c->ctr=c->r[12]; // 8022ACBC
  if (true) { c->lr=0x8022ACC4u; dispatch(c,c->ctr); } // 8022ACC0
  cmps(c,0,(int32_t)c->r[3],0); // 8022ACC4
  if (crb(c,2)) { goto L_8022ADBC; } // 8022ACC8
  c->r[3]=c->r[31]|c->r[31]; // 8022ACCC
  c->r[4]=0u+0x00000001u; // 8022ACD0
  c->lr=0x8022ACD8u; f_802292E4(c); // 8022ACD4
  goto L_8022ADBC; // 8022ACD8
L_8022ACDC:;
  c->r[3]=c->r[31]|c->r[31]; // 8022ACDC
  c->r[4]=0u+0x00000001u; // 8022ACE0
  c->r[5]=0u+0x00000001u; // 8022ACE4
  c->lr=0x8022ACECu; f_80229624(c); // 8022ACE8
  c->r[3]=c->r[31]|c->r[31]; // 8022ACEC
  c->r[4]=0u+0x00000001u; // 8022ACF0
  c->lr=0x8022ACF8u; f_802292E4(c); // 8022ACF4
  goto L_8022ADBC; // 8022ACF8
L_8022ACFC:;
  c->lr=0x8022AD00u; f_80047C90(c); // 8022ACFC
  c->r[4]=0u+0x00000000u; // 8022AD00
  c->lr=0x8022AD08u; f_80058EA4(c); // 8022AD04
  c->r[4]=0u+0x00000800u; // 8022AD08
  c->lr=0x8022AD10u; f_80057B44(c); // 8022AD0C
  cmps(c,0,(int32_t)c->r[3],0); // 8022AD10
  if (crb(c,2)) { goto L_8022ADBC; } // 8022AD14
  c->lr=0x8022AD1Cu; f_8006592C(c); // 8022AD18
  c->r[4]=0u+0x0000000Eu; // 8022AD1C
  c->r[5]=0u+0x00000000u; // 8022AD20
  c->r[6]=0u+0xFFFFFFFFu; // 8022AD24
  c->r[7]=0u+0xFFFFFFFFu; // 8022AD28
  c->lr=0x8022AD30u; f_80048F20(c); // 8022AD2C
  c->r[3]=c->r[31]|c->r[31]; // 8022AD30
  c->r[4]=0u+0x00000001u; // 8022AD34
  c->r[5]=0u+0x00000000u; // 8022AD38
  c->lr=0x8022AD40u; f_80229624(c); // 8022AD3C
  c->r[3]=c->r[31]|c->r[31]; // 8022AD40
  c->r[4]=0u+0x00000001u; // 8022AD44
  c->lr=0x8022AD4Cu; f_802292E4(c); // 8022AD48
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AD4C
  c->r[3]=c->r[31]+0x00070000u; // 8022AD50
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022AD54
  goto L_8022ADBC; // 8022AD58
L_8022AD5C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AD5C
  c->r[4]=0u+0x00000001u; // 8022AD60
  c->lr=0x8022AD68u; f_80229840(c); // 8022AD64
  cmps(c,0,(int32_t)c->r[3],0); // 8022AD68
  if (crb(c,2)) { goto L_8022ADBC; } // 8022AD6C
  c->r[3]=c->r[31]+0x00070000u; // 8022AD70
  {uint32_t ea=c->r[3]+0x00006548u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AD74
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AD78
  fcmp(c,0,c->f[1],c->f[0]); // 8022AD7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022AD80
  if (!crb(c,2)) { goto L_8022ADA4; } // 8022AD84
  c->r[3]=c->r[31]|c->r[31]; // 8022AD88
  c->r[4]=0u+0x00000000u; // 8022AD8C
  c->lr=0x8022AD94u; f_802292D8(c); // 8022AD90
  c->r[3]=c->r[31]|c->r[31]; // 8022AD94
  c->r[4]=0u+0x00000006u; // 8022AD98
  c->lr=0x8022ADA0u; f_8022B420(c); // 8022AD9C
  goto L_8022ADBC; // 8022ADA0
L_8022ADA4:;
  c->r[3]=0u+0x00000001u; // 8022ADA4
  c->lr=0x8022ADACu; f_8005D714(c); // 8022ADA8
  c->r[3]=c->r[31]+0x00070000u; // 8022ADAC
  {uint32_t ea=c->r[3]+0x00006548u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022ADB0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8022ADB4
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022ADB8
L_8022ADBC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022ADBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022ADC0
  c->lr=c->r[0]; // 8022ADC4
  c->r[1]=c->r[1]+0x00000010u; // 8022ADC8
  return; // 8022ADCC
}

// fn_8022ADD0
void f_8022ADD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022ADD0
  c->r[0]=c->lr; // 8022ADD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022ADD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022ADDC
  c->r[31]=c->r[3]|c->r[3]; // 8022ADE0
  c->lr=0x8022ADE8u; f_8022B468(c); // 8022ADE4
  cmps(c,0,(int32_t)c->r[3],1); // 8022ADE8
  if (crb(c,2)) { goto L_8022AE6C; } // 8022ADEC
  if (!crb(c,0)) { goto L_8022AE00; } // 8022ADF0
  cmps(c,0,(int32_t)c->r[3],0); // 8022ADF4
  if (!crb(c,0)) { goto L_8022AE0C; } // 8022ADF8
  goto L_8022AED8; // 8022ADFC
L_8022AE00:;
  cmps(c,0,(int32_t)c->r[3],3); // 8022AE00
  if (!crb(c,0)) { goto L_8022AED8; } // 8022AE04
  goto L_8022AEB0; // 8022AE08
L_8022AE0C:;
  c->r[3]=c->r[31]+0x00010000u; // 8022AE0C
  c->r[0]=R32(c->r[3]+0xFFFF80DCu); // 8022AE10
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 8022AE14
  cmps(c,0,(int32_t)c->r[0],0); // 8022AE18
  if (!crb(c,2)) { goto L_8022AE30; } // 8022AE1C
  c->r[3]=c->r[31]|c->r[31]; // 8022AE20
  c->r[4]=0u+0x00000002u; // 8022AE24
  c->lr=0x8022AE2Cu; f_802292D8(c); // 8022AE28
  goto L_8022AED8; // 8022AE2C
L_8022AE30:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AE30
  c->r[4]=0u+0x00000002u; // 8022AE34
  c->r[5]=0u+0x00000001u; // 8022AE38
  c->lr=0x8022AE40u; f_80229624(c); // 8022AE3C
  c->r[3]=c->r[31]|c->r[31]; // 8022AE40
  c->r[4]=0u+0x00000003u; // 8022AE44
  c->r[5]=0u+0x00000001u; // 8022AE48
  c->lr=0x8022AE50u; f_80229624(c); // 8022AE4C
  c->r[3]=c->r[31]|c->r[31]; // 8022AE50
  c->r[4]=0u+0x00000001u; // 8022AE54
  c->lr=0x8022AE5Cu; f_802292E4(c); // 8022AE58
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AE5C
  c->r[3]=c->r[31]+0x00070000u; // 8022AE60
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022AE64
  goto L_8022AED8; // 8022AE68
L_8022AE6C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AE6C
  c->r[4]=0u+0x00000004u; // 8022AE70
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022AE74
  c->r[12]=R32(c->r[12]+0x00000060u); // 8022AE78
  c->ctr=c->r[12]; // 8022AE7C
  if (true) { c->lr=0x8022AE84u; dispatch(c,c->ctr); } // 8022AE80
  cmps(c,0,(int32_t)c->r[3],0); // 8022AE84
  if (crb(c,2)) { goto L_8022AED8; } // 8022AE88
  c->r[3]=c->r[31]|c->r[31]; // 8022AE8C
  c->r[4]=0u+0x00000002u; // 8022AE90
  c->lr=0x8022AE98u; f_80229840(c); // 8022AE94
  cmps(c,0,(int32_t)c->r[3],0); // 8022AE98
  if (crb(c,2)) { goto L_8022AED8; } // 8022AE9C
  c->r[3]=c->r[31]|c->r[31]; // 8022AEA0
  c->r[4]=0u+0x00000001u; // 8022AEA4
  c->lr=0x8022AEACu; f_802292E4(c); // 8022AEA8
  goto L_8022AED8; // 8022AEAC
L_8022AEB0:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AEB0
  c->r[4]=0u+0x00000002u; // 8022AEB4
  c->r[5]=0u+0x00000000u; // 8022AEB8
  c->lr=0x8022AEC0u; f_80229624(c); // 8022AEBC
  c->r[3]=c->r[31]|c->r[31]; // 8022AEC0
  c->r[4]=0u+0x00000000u; // 8022AEC4
  c->lr=0x8022AECCu; f_802292D8(c); // 8022AEC8
  c->r[3]=c->r[31]|c->r[31]; // 8022AECC
  c->r[4]=0u+0x00000007u; // 8022AED0
  c->lr=0x8022AED8u; f_8022B420(c); // 8022AED4
L_8022AED8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022AED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022AEDC
  c->lr=c->r[0]; // 8022AEE0
  c->r[1]=c->r[1]+0x00000010u; // 8022AEE4
  return; // 8022AEE8
}

// fn_8022AEEC
void f_8022AEEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AEEC
  c->r[0]=c->lr; // 8022AEF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022AEF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022AEF8
  c->r[31]=c->r[3]|c->r[3]; // 8022AEFC
  c->lr=0x8022AF04u; f_8022B468(c); // 8022AF00
  cmps(c,0,(int32_t)c->r[3],0); // 8022AF04
  if (crb(c,2)) { goto L_8022AF10; } // 8022AF08
  goto L_8022AF48; // 8022AF0C
L_8022AF10:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AF10
  c->r[4]=0u+0x00000005u; // 8022AF14
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022AF18
  c->r[12]=R32(c->r[12]+0x00000064u); // 8022AF1C
  c->ctr=c->r[12]; // 8022AF20
  if (true) { c->lr=0x8022AF28u; dispatch(c,c->ctr); } // 8022AF24
  cmps(c,0,(int32_t)c->r[3],0); // 8022AF28
  if (crb(c,2)) { goto L_8022AF48; } // 8022AF2C
  c->r[3]=c->r[31]|c->r[31]; // 8022AF30
  c->r[4]=0u+0x00000000u; // 8022AF34
  c->lr=0x8022AF3Cu; f_802292D8(c); // 8022AF38
  c->r[3]=c->r[31]|c->r[31]; // 8022AF3C
  c->r[4]=0u+0x00000008u; // 8022AF40
  c->lr=0x8022AF48u; f_8022B420(c); // 8022AF44
L_8022AF48:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022AF48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022AF4C
  c->lr=c->r[0]; // 8022AF50
  c->r[1]=c->r[1]+0x00000010u; // 8022AF54
  return; // 8022AF58
}

// fn_8022AF5C
void f_8022AF5C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022AF5C
  c->r[0]=c->lr; // 8022AF60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022AF64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022AF68
  c->r[31]=c->r[3]|c->r[3]; // 8022AF6C
  c->lr=0x8022AF74u; f_8022B468(c); // 8022AF70
  cmpu(c,0,c->r[3],0x0000000Au); // 8022AF74
  if (crb(c,1)) { goto L_8022B208; } // 8022AF78
  c->r[4]=0u+0x80480000u; // 8022AF7C
  c->r[4]=c->r[4]+0xFFFFFEA4u; // 8022AF80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8022AF84
  c->r[4]=R32(c->r[4]+c->r[0]); // 8022AF88
  c->ctr=c->r[4]; // 8022AF8C
  if (true) { switch (c->ctr) { case 0x8022AF94u: goto L_8022AF94; case 0x8022AFF4u: goto L_8022AFF4; case 0x8022B06Cu: goto L_8022B06C; case 0x8022B104u: goto L_8022B104; case 0x8022B16Cu: goto L_8022B16C; case 0x8022B190u: goto L_8022B190; case 0x8022B1ACu: goto L_8022B1AC; case 0x8022B1F0u: goto L_8022B1F0; case 0x8022B208u: goto L_8022B208; default: break; } dispatch(c,c->ctr); return; } // 8022AF90
L_8022AF94:;
  c->r[3]=c->r[31]|c->r[31]; // 8022AF94
  c->r[4]=0u+0x00000006u; // 8022AF98
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022AF9C
  c->r[12]=R32(c->r[12]+0x00000068u); // 8022AFA0
  c->ctr=c->r[12]; // 8022AFA4
  if (true) { c->lr=0x8022AFACu; dispatch(c,c->ctr); } // 8022AFA8
  cmps(c,0,(int32_t)c->r[3],0); // 8022AFAC
  if (crb(c,2)) { goto L_8022B208; } // 8022AFB0
  c->r[3]=c->r[31]+0x00010000u; // 8022AFB4
  c->r[0]=R32(c->r[3]+0xFFFF80DCu); // 8022AFB8
  c->r[0]=rotl(c->r[0],0)&0x00010000u; // 8022AFBC
  cmps(c,0,(int32_t)c->r[0],0); // 8022AFC0
  if (!crb(c,2)) { goto L_8022AFD8; } // 8022AFC4
  c->r[3]=c->r[31]|c->r[31]; // 8022AFC8
  c->r[4]=0u+0x0000000Au; // 8022AFCC
  c->lr=0x8022AFD4u; f_802292D8(c); // 8022AFD0
  goto L_8022B208; // 8022AFD4
L_8022AFD8:;
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AFD8
  c->r[3]=c->r[31]+0x00070000u; // 8022AFDC
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022AFE0
  c->r[3]=c->r[31]|c->r[31]; // 8022AFE4
  c->r[4]=0u+0x00000001u; // 8022AFE8
  c->lr=0x8022AFF0u; f_802292E4(c); // 8022AFEC
  goto L_8022B208; // 8022AFF0
L_8022AFF4:;
  c->r[3]=c->r[31]+0x00070000u; // 8022AFF4
  {uint32_t ea=c->r[3]+0x00006548u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022AFF8
  {uint32_t ea=c->r[2]+0xFFFF9994u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022AFFC
  fcmp(c,0,c->f[1],c->f[0]); // 8022B000
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022B004
  if (!crb(c,2)) { goto L_8022B050; } // 8022B008
  c->r[3]=c->r[31]|c->r[31]; // 8022B00C
  c->r[4]=0u+0x00000001u; // 8022B010
  c->lr=0x8022B018u; f_802292E4(c); // 8022B014
  c->r[3]=c->r[31]|c->r[31]; // 8022B018
  c->r[4]=0u+0x00000004u; // 8022B01C
  c->r[5]=0u+0x00000001u; // 8022B020
  c->lr=0x8022B028u; f_80229624(c); // 8022B024
  c->r[3]=c->r[31]+0x00010000u; // 8022B028
  c->r[3]=c->r[3]+0xFFFF81E4u; // 8022B02C
  c->r[4]=0u+0x00000001u; // 8022B030
  c->r[5]=0u+0x00000000u; // 8022B034
  c->r[6]=0u+0x00000000u; // 8022B038
  c->lr=0x8022B040u; f_8005302C(c); // 8022B03C
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B040
  c->r[3]=c->r[31]+0x00070000u; // 8022B044
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B048
  goto L_8022B208; // 8022B04C
L_8022B050:;
  c->r[3]=0u+0x00000001u; // 8022B050
  c->lr=0x8022B058u; f_8005D714(c); // 8022B054
  c->r[3]=c->r[31]+0x00070000u; // 8022B058
  {uint32_t ea=c->r[3]+0x00006548u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B05C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8022B060
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B064
  goto L_8022B208; // 8022B068
L_8022B06C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B06C
  c->r[4]=0u+0x00000004u; // 8022B070
  c->lr=0x8022B078u; f_80229840(c); // 8022B074
  cmps(c,0,(int32_t)c->r[3],0); // 8022B078
  if (crb(c,2)) { goto L_8022B208; } // 8022B07C
  c->r[3]=c->r[31]+0x00070000u; // 8022B080
  {uint32_t ea=c->r[3]+0x00006548u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B084
  {uint32_t ea=c->r[2]+0xFFFF999Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B088
  fcmp(c,0,c->f[1],c->f[0]); // 8022B08C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022B090
  if (!crb(c,2)) { goto L_8022B0E8; } // 8022B094
  c->r[3]=c->r[31]+0x00010000u; // 8022B098
  c->r[0]=R32(c->r[3]+0xFFFF80DCu); // 8022B09C
  c->r[0]=rotl(c->r[0],0)&0x00020000u; // 8022B0A0
  cmps(c,0,(int32_t)c->r[0],0); // 8022B0A4
  if (crb(c,2)) { goto L_8022B0D8; } // 8022B0A8
  c->r[3]=c->r[31]|c->r[31]; // 8022B0AC
  c->r[4]=0u+0x00000001u; // 8022B0B0
  c->lr=0x8022B0B8u; f_802292E4(c); // 8022B0B4
  c->r[3]=c->r[31]|c->r[31]; // 8022B0B8
  c->r[4]=0u+0x00000004u; // 8022B0BC
  c->r[5]=0u+0x00000000u; // 8022B0C0
  c->lr=0x8022B0C8u; f_80229624(c); // 8022B0C4
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B0C8
  c->r[3]=c->r[31]+0x00070000u; // 8022B0CC
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B0D0
  goto L_8022B208; // 8022B0D4
L_8022B0D8:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B0D8
  c->r[4]=0u+0x00000008u; // 8022B0DC
  c->lr=0x8022B0E4u; f_802292D8(c); // 8022B0E0
  goto L_8022B208; // 8022B0E4
L_8022B0E8:;
  c->r[3]=0u+0x00000001u; // 8022B0E8
  c->lr=0x8022B0F0u; f_8005D714(c); // 8022B0EC
  c->r[3]=c->r[31]+0x00070000u; // 8022B0F0
  {uint32_t ea=c->r[3]+0x00006548u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B0F4
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8022B0F8
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B0FC
  goto L_8022B208; // 8022B100
L_8022B104:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B104
  c->r[4]=0u+0x00000004u; // 8022B108
  c->lr=0x8022B110u; f_80229840(c); // 8022B10C
  cmps(c,0,(int32_t)c->r[3],0); // 8022B110
  if (crb(c,2)) { goto L_8022B208; } // 8022B114
  c->r[3]=c->r[31]+0x00070000u; // 8022B118
  {uint32_t ea=c->r[3]+0x00006548u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B11C
  {uint32_t ea=c->r[2]+0xFFFF9994u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B120
  fcmp(c,0,c->f[1],c->f[0]); // 8022B124
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022B128
  if (!crb(c,2)) { goto L_8022B150; } // 8022B12C
  c->r[3]=c->r[31]|c->r[31]; // 8022B130
  c->r[4]=0u+0x00000005u; // 8022B134
  c->r[5]=0u+0x00000001u; // 8022B138
  c->lr=0x8022B140u; f_80229624(c); // 8022B13C
  c->r[3]=c->r[31]|c->r[31]; // 8022B140
  c->r[4]=0u+0x00000001u; // 8022B144
  c->lr=0x8022B14Cu; f_802292E4(c); // 8022B148
  goto L_8022B208; // 8022B14C
L_8022B150:;
  c->r[3]=0u+0x00000001u; // 8022B150
  c->lr=0x8022B158u; f_8005D714(c); // 8022B154
  c->r[3]=c->r[31]+0x00070000u; // 8022B158
  {uint32_t ea=c->r[3]+0x00006548u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B15C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8022B160
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B164
  goto L_8022B208; // 8022B168
L_8022B16C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B16C
  c->r[4]=0u+0x00000005u; // 8022B170
  c->lr=0x8022B178u; f_80229840(c); // 8022B174
  cmps(c,0,(int32_t)c->r[3],0); // 8022B178
  if (crb(c,2)) { goto L_8022B208; } // 8022B17C
  c->r[3]=c->r[31]|c->r[31]; // 8022B180
  c->r[4]=0u+0x00000008u; // 8022B184
  c->lr=0x8022B18Cu; f_802292D8(c); // 8022B188
  goto L_8022B208; // 8022B18C
L_8022B190:;
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B190
  c->r[3]=c->r[31]+0x00070000u; // 8022B194
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B198
  c->r[3]=c->r[31]|c->r[31]; // 8022B19C
  c->r[4]=0u+0x00000001u; // 8022B1A0
  c->lr=0x8022B1A8u; f_802292E4(c); // 8022B1A4
  goto L_8022B208; // 8022B1A8
L_8022B1AC:;
  c->r[3]=c->r[31]+0x00070000u; // 8022B1AC
  {uint32_t ea=c->r[3]+0x00006548u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B1B0
  {uint32_t ea=c->r[2]+0xFFFF99A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B1B4
  fcmp(c,0,c->f[1],c->f[0]); // 8022B1B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022B1BC
  if (!crb(c,2)) { goto L_8022B1D4; } // 8022B1C0
  c->r[3]=c->r[31]|c->r[31]; // 8022B1C4
  c->r[4]=0u+0x00000001u; // 8022B1C8
  c->lr=0x8022B1D0u; f_802292E4(c); // 8022B1CC
  goto L_8022B208; // 8022B1D0
L_8022B1D4:;
  c->r[3]=0u+0x00000001u; // 8022B1D4
  c->lr=0x8022B1DCu; f_8005D714(c); // 8022B1D8
  c->r[3]=c->r[31]+0x00070000u; // 8022B1DC
  {uint32_t ea=c->r[3]+0x00006548u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022B1E0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8022B1E4
  {uint32_t ea=c->r[3]+0x00006548u; WF32(ea,c->f[0]);} // 8022B1E8
  goto L_8022B208; // 8022B1EC
L_8022B1F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B1F0
  c->r[4]=0u+0x00000000u; // 8022B1F4
  c->lr=0x8022B1FCu; f_802292D8(c); // 8022B1F8
  c->r[3]=c->r[31]|c->r[31]; // 8022B1FC
  c->r[4]=0u+0x00000009u; // 8022B200
  c->lr=0x8022B208u; f_8022B420(c); // 8022B204
L_8022B208:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B208
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B20C
  c->lr=c->r[0]; // 8022B210
  c->r[1]=c->r[1]+0x00000010u; // 8022B214
  return; // 8022B218
}

// fn_8022B21C
void f_8022B21C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B21C
  c->r[0]=c->lr; // 8022B220
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B224
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B228
  c->r[31]=c->r[3]|c->r[3]; // 8022B22C
  c->lr=0x8022B234u; f_8022B468(c); // 8022B230
  cmps(c,0,(int32_t)c->r[3],1); // 8022B234
  if (crb(c,2)) { goto L_8022B2AC; } // 8022B238
  if (!crb(c,0)) { goto L_8022B24C; } // 8022B23C
  cmps(c,0,(int32_t)c->r[3],0); // 8022B240
  if (!crb(c,0)) { goto L_8022B258; } // 8022B244
  goto L_8022B2EC; // 8022B248
L_8022B24C:;
  cmps(c,0,(int32_t)c->r[3],3); // 8022B24C
  if (!crb(c,0)) { goto L_8022B2EC; } // 8022B250
  goto L_8022B2D4; // 8022B254
L_8022B258:;
  c->r[3]=0u+0x00000001u; // 8022B258
  c->lr=0x8022B260u; f_80173F68(c); // 8022B25C
  c->r[4]=0u+0x00000000u; // 8022B260
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B264
  {uint32_t ea=c->r[2]+0xFFFF9994u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022B268
  c->lr=0x8022B270u; f_80174548(c); // 8022B26C
  c->r[3]=c->r[31]|c->r[31]; // 8022B270
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022B274
  c->r[12]=R32(c->r[12]+0x00000080u); // 8022B278
  c->ctr=c->r[12]; // 8022B27C
  if (true) { c->lr=0x8022B284u; dispatch(c,c->ctr); } // 8022B280
  cmps(c,0,(int32_t)c->r[3],0); // 8022B284
  if (crb(c,2)) { goto L_8022B29C; } // 8022B288
  c->r[3]=c->r[31]+0x00010000u; // 8022B28C
  c->r[3]=R32(c->r[3]+0xFFFF80D0u); // 8022B290
  c->r[4]=0u+0x00000078u; // 8022B294
  c->lr=0x8022B29Cu; f_80226D08(c); // 8022B298
L_8022B29C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B29C
  c->r[4]=0u+0x00000001u; // 8022B2A0
  c->lr=0x8022B2A8u; f_802292E4(c); // 8022B2A4
  goto L_8022B2EC; // 8022B2A8
L_8022B2AC:;
  c->r[3]=0u+0x00000001u; // 8022B2AC
  c->lr=0x8022B2B4u; f_80173F68(c); // 8022B2B0
  c->r[4]=0u+0x00000000u; // 8022B2B4
  c->lr=0x8022B2BCu; f_801748B8(c); // 8022B2B8
  cmps(c,0,(int32_t)c->r[3],0); // 8022B2BC
  if (crb(c,2)) { goto L_8022B2EC; } // 8022B2C0
  c->r[3]=c->r[31]|c->r[31]; // 8022B2C4
  c->r[4]=0u+0x00000001u; // 8022B2C8
  c->lr=0x8022B2D0u; f_802292E4(c); // 8022B2CC
  goto L_8022B2EC; // 8022B2D0
L_8022B2D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B2D4
  c->r[4]=0u+0x00000000u; // 8022B2D8
  c->lr=0x8022B2E0u; f_802292D8(c); // 8022B2DC
  c->r[3]=c->r[31]|c->r[31]; // 8022B2E0
  c->r[4]=0u+0x0000000Au; // 8022B2E4
  c->lr=0x8022B2ECu; f_8022B420(c); // 8022B2E8
L_8022B2EC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B2EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B2F0
  c->lr=c->r[0]; // 8022B2F4
  c->r[1]=c->r[1]+0x00000010u; // 8022B2F8
  return; // 8022B2FC
}

// fn_8022B300
void f_8022B300(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B300
  c->r[0]=c->lr; // 8022B304
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B308
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B30C
  c->r[31]=c->r[3]|c->r[3]; // 8022B310
  c->lr=0x8022B318u; f_8022B468(c); // 8022B314
  cmps(c,0,(int32_t)c->r[3],1); // 8022B318
  if (crb(c,2)) { goto L_8022B354; } // 8022B31C
  if (!crb(c,0)) { goto L_8022B330; } // 8022B320
  cmps(c,0,(int32_t)c->r[3],0); // 8022B324
  if (!crb(c,0)) { goto L_8022B33C; } // 8022B328
  goto L_8022B3BC; // 8022B32C
L_8022B330:;
  cmps(c,0,(int32_t)c->r[3],3); // 8022B330
  if (!crb(c,0)) { goto L_8022B3BC; } // 8022B334
  goto L_8022B384; // 8022B338
L_8022B33C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B33C
  c->lr=0x8022B344u; f_8022A0E4(c); // 8022B340
  c->r[3]=c->r[31]|c->r[31]; // 8022B344
  c->r[4]=0u+0x00000001u; // 8022B348
  c->lr=0x8022B350u; f_802292E4(c); // 8022B34C
  goto L_8022B3BC; // 8022B350
L_8022B354:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B354
  c->r[4]=0u+0x00000000u; // 8022B358
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022B35C
  c->r[12]=R32(c->r[12]+0x00000050u); // 8022B360
  c->ctr=c->r[12]; // 8022B364
  if (true) { c->lr=0x8022B36Cu; dispatch(c,c->ctr); } // 8022B368
  cmps(c,0,(int32_t)c->r[3],0); // 8022B36C
  if (crb(c,2)) { goto L_8022B3BC; } // 8022B370
  c->r[3]=c->r[31]|c->r[31]; // 8022B374
  c->r[4]=0u+0x00000001u; // 8022B378
  c->lr=0x8022B380u; f_802292E4(c); // 8022B37C
  goto L_8022B3BC; // 8022B380
L_8022B384:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B384
  c->lr=0x8022B38Cu; f_80229234(c); // 8022B388
  c->r[3]=c->r[31]|c->r[31]; // 8022B38C
  c->r[4]=0u+0x00000000u; // 8022B390
  c->lr=0x8022B398u; f_802292D8(c); // 8022B394
  c->r[3]=c->r[31]|c->r[31]; // 8022B398
  c->r[4]=0u+0x0000000Bu; // 8022B39C
  c->lr=0x8022B3A4u; f_8022B420(c); // 8022B3A0
  c->r[3]=0u+0x00000001u; // 8022B3A4
  c->lr=0x8022B3ACu; f_8005D7F4(c); // 8022B3A8
  c->r[3]=c->r[31]+0x00010000u; // 8022B3AC
  c->r[0]=R32(c->r[3]+0xFFFF80DCu); // 8022B3B0
  c->r[0]=c->r[0]|0x00000200u; // 8022B3B4
  W32(c->r[3]+0xFFFF80DCu,c->r[0]); // 8022B3B8
L_8022B3BC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B3BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B3C0
  c->lr=c->r[0]; // 8022B3C4
  c->r[1]=c->r[1]+0x00000010u; // 8022B3C8
  return; // 8022B3CC
}

// fn_8022B3D0
void f_8022B3D0(Ctx* __restrict c) {
  return; // 8022B3D0
}

// fn_8022B3D4
void f_8022B3D4(Ctx* __restrict c) {
  W32(c->r[3]+0x000000B0u,c->r[4]); // 8022B3D4
  return; // 8022B3D8
}

// fn_8022B3DC
void f_8022B3DC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000B0u); // 8022B3DC
  return; // 8022B3E0
}

// fn_8022B3E4
void f_8022B3E4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00060000u; // 8022B3E4
  c->r[3]=R32(c->r[3]+0xFFFF8120u); // 8022B3E8
  return; // 8022B3EC
}

// fn_8022B3F0
void f_8022B3F0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022B3F0
  c->r[3]=R32(c->r[3]+0xFFFF80D8u); // 8022B3F4
  c->r[0]=0u-c->r[3]; // 8022B3F8
  c->r[0]=c->r[0]|c->r[3]; // 8022B3FC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8022B400
  return; // 8022B404
}

// fn_8022B408
void f_8022B408(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022B408
  W32(c->r[3]+0xFFFF81BCu,c->r[4]); // 8022B40C
  return; // 8022B410
}

// fn_8022B414
void f_8022B414(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022B414
  W32(c->r[3]+0xFFFF81B8u,c->r[4]); // 8022B418
  return; // 8022B41C
}

// fn_8022B420
void f_8022B420(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022B420
  W32(c->r[3]+0xFFFF80D8u,c->r[4]); // 8022B424
  return; // 8022B428
}

// fn_8022B42C
void f_8022B42C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00060000u; // 8022B42C
  W32(c->r[3]+0xFFFF8124u,c->r[4]); // 8022B430
  return; // 8022B434
}

// fn_8022B438
void f_8022B438(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8022B438
  return; // 8022B43C
}

// fn_8022B440
void f_8022B440(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8022B440
  return; // 8022B444
}

// fn_8022B448
void f_8022B448(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B448
  return; // 8022B44C
}

// fn_8022B450
void f_8022B450(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B450
  return; // 8022B454
}

// fn_8022B458
void f_8022B458(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B458
  return; // 8022B45C
}

// fn_8022B460
void f_8022B460(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B460
  return; // 8022B464
}

// fn_8022B468
void f_8022B468(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022B468
  c->r[3]=R32(c->r[3]+0xFFFF80D4u); // 8022B46C
  return; // 8022B470
}

// fn_8022B474
void f_8022B474(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B474
  return; // 8022B478
}

// fn_8022B47C
void f_8022B47C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B47C
  return; // 8022B480
}

// fn_8022B484
void f_8022B484(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B484
  return; // 8022B488
}

// fn_8022B48C
void f_8022B48C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B48C
  return; // 8022B490
}

// fn_8022B494
void f_8022B494(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B494
  return; // 8022B498
}

// fn_8022B49C
void f_8022B49C(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B49C
  return; // 8022B4A0
}

// fn_8022B4A4
void f_8022B4A4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022B4A4
  return; // 8022B4A8
}

// fn_8022B4AC
void f_8022B4AC(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000008E0u); // 8022B4AC
  return; // 8022B4B0
}

// fn_8022B4B4
void f_8022B4B4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022B4B4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 8022B4B8
  c->r[3]=c->r[3]+c->r[0]; // 8022B4BC
  c->r[3]=c->r[3]+0x00002378u; // 8022B4C0
  return; // 8022B4C4
}

// fn_8022B4C8
void f_8022B4C8(Ctx* __restrict c) {
  W32(c->r[3]+0x00004310u,c->r[4]); // 8022B4C8
  return; // 8022B4CC
}

// fn_8022B4D0
void f_8022B4D0(Ctx* __restrict c) {
  W32(c->r[3]+0x0000430Cu,c->r[4]); // 8022B4D0
  return; // 8022B4D4
}

// fn_8022B4D8
void f_8022B4D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B4D8
  c->r[0]=c->lr; // 8022B4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B4E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B4E4
  c->r[31]=c->r[3]|c->r[3]; // 8022B4E8
  c->lr=0x8022B4F0u; f_80228F04(c); // 8022B4EC
  c->r[3]=0u+0x80480000u; // 8022B4F0
  c->r[0]=c->r[3]+0x00000090u; // 8022B4F4
  W32(c->r[31]+0x00000058u,c->r[0]); // 8022B4F8
  c->r[3]=c->r[31]+0x00070000u; // 8022B4FC
  c->r[3]=c->r[3]+0x00006580u; // 8022B500
  c->r[4]=0u+0x80070000u; // 8022B504
  c->r[4]=c->r[4]+0x00007934u; // 8022B508
  c->r[5]=0u+0x80070000u; // 8022B50C
  c->r[5]=c->r[5]+0x000079D0u; // 8022B510
  c->r[6]=0u+0x000008B4u; // 8022B514
  c->r[7]=0u+0x00000004u; // 8022B518
  c->lr=0x8022B520u; f_802F07B0(c); // 8022B51C
  c->r[3]=c->r[31]+0x00080000u; // 8022B520
  c->r[3]=c->r[3]+0xFFFF886Cu; // 8022B524
  c->lr=0x8022B52Cu; f_8004A768(c); // 8022B528
  c->r[4]=0u+0x00000000u; // 8022B52C
  c->r[3]=c->r[31]+0x00070000u; // 8022B530
  W32(c->r[3]+0x0000657Cu,c->r[4]); // 8022B534
  c->r[0]=0u+0x00000007u; // 8022B538
  W32(c->r[3]+0x00006578u,c->r[0]); // 8022B53C
  c->r[0]=0u+0xFFFFFFFFu; // 8022B540
  c->r[3]=c->r[31]+0x00080000u; // 8022B544
  W32(c->r[3]+0xFFFF8868u,c->r[0]); // 8022B548
  W32(c->r[3]+0xFFFF8954u,c->r[4]); // 8022B54C
  W32(c->r[3]+0xFFFF8958u,c->r[4]); // 8022B550
  c->r[3]=c->r[31]|c->r[31]; // 8022B554
  c->r[4]=0u+0x00000000u; // 8022B558
  c->lr=0x8022B560u; f_8022B3D4(c); // 8022B55C
  c->r[3]=c->r[31]|c->r[31]; // 8022B560
  c->r[4]=0u+0x80430000u; // 8022B564
  c->r[4]=c->r[4]+0x00003290u; // 8022B568
  c->lr=0x8022B570u; f_8022B414(c); // 8022B56C
  c->r[3]=c->r[31]|c->r[31]; // 8022B570
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B574
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B578
  c->lr=c->r[0]; // 8022B57C
  c->r[1]=c->r[1]+0x00000010u; // 8022B580
  return; // 8022B584
}

// fn_8022B588
void f_8022B588(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B588
  c->r[0]=c->lr; // 8022B58C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B590
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B594
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022B598
  c->r[30]=c->r[3]|c->r[3]; // 8022B59C
  c->r[31]=c->r[4]|c->r[4]; // 8022B5A0
  cmps(c,0,(int32_t)c->r[3],0); // 8022B5A4
  if (crb(c,2)) { goto L_8022B5F8; } // 8022B5A8
  c->r[3]=c->r[3]+0x00080000u; // 8022B5AC
  c->r[3]=c->r[3]+0xFFFF886Cu; // 8022B5B0
  c->r[4]=0u+0xFFFFFFFFu; // 8022B5B4
  c->lr=0x8022B5BCu; f_8004A7A8(c); // 8022B5B8
  c->r[3]=c->r[30]+0x00070000u; // 8022B5BC
  c->r[3]=c->r[3]+0x00006580u; // 8022B5C0
  c->r[4]=0u+0x80070000u; // 8022B5C4
  c->r[4]=c->r[4]+0x000079D0u; // 8022B5C8
  c->r[5]=0u+0x000008B4u; // 8022B5CC
  c->r[6]=0u+0x00000004u; // 8022B5D0
  c->lr=0x8022B5D8u; f_802F08A8(c); // 8022B5D4
  c->r[3]=c->r[30]|c->r[30]; // 8022B5D8
  c->r[4]=0u+0x00000000u; // 8022B5DC
  c->lr=0x8022B5E4u; f_8022912C(c); // 8022B5E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8022B5E4
  cmps(c,0,(int32_t)c->r[0],0); // 8022B5E8
  if (!crb(c,1)) { goto L_8022B5F8; } // 8022B5EC
  c->r[3]=c->r[30]|c->r[30]; // 8022B5F0
  c->lr=0x8022B5F8u; f_80047B20(c); // 8022B5F4
L_8022B5F8:;
  c->r[3]=c->r[30]|c->r[30]; // 8022B5F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B5FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022B600
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B604
  c->lr=c->r[0]; // 8022B608
  c->r[1]=c->r[1]+0x00000010u; // 8022B60C
  return; // 8022B610
}

// fn_8022B614
void f_8022B614(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B614
  c->r[0]=c->lr; // 8022B618
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B61C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B620
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022B624
  c->r[30]=c->r[3]|c->r[3]; // 8022B628
  c->r[5]=c->r[3]+0x00070000u; // 8022B62C
  W32(c->r[5]+0x00006578u,c->r[4]); // 8022B630
  c->r[31]=0u+0x00000000u; // 8022B634
  cmpu(c,0,c->r[4],0x00000006u); // 8022B638
  if (crb(c,1)) { goto L_8022B6A0; } // 8022B63C
  c->r[3]=0u+0x80480000u; // 8022B640
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 8022B644
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8022B648
  c->r[3]=R32(c->r[3]+c->r[0]); // 8022B64C
  c->ctr=c->r[3]; // 8022B650
  if (true) { switch (c->ctr) { case 0x8022B658u: goto L_8022B658; case 0x8022B670u: goto L_8022B670; case 0x8022B688u: goto L_8022B688; case 0x8022B6A0u: goto L_8022B6A0; default: break; } dispatch(c,c->ctr); return; } // 8022B654
L_8022B658:;
  c->r[0]=R32(c->r[5]+0x0000657Cu); // 8022B658
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 8022B65C
  cmps(c,0,(int32_t)c->r[0],0); // 8022B660
  if (crb(c,2)) { goto L_8022B6A4; } // 8022B664
  c->r[31]=0u+0x00000001u; // 8022B668
  goto L_8022B6A4; // 8022B66C
L_8022B670:;
  c->r[0]=R32(c->r[5]+0x0000657Cu); // 8022B670
  c->r[0]=rotl(c->r[0],0)&0x00000002u; // 8022B674
  cmps(c,0,(int32_t)c->r[0],0); // 8022B678
  if (crb(c,2)) { goto L_8022B6A4; } // 8022B67C
  c->r[31]=0u+0x00000001u; // 8022B680
  goto L_8022B6A4; // 8022B684
L_8022B688:;
  c->r[0]=R32(c->r[5]+0x0000657Cu); // 8022B688
  c->r[0]=rotl(c->r[0],0)&0x00000004u; // 8022B68C
  cmps(c,0,(int32_t)c->r[0],0); // 8022B690
  if (crb(c,2)) { goto L_8022B6A4; } // 8022B694
  c->r[31]=0u+0x00000001u; // 8022B698
  goto L_8022B6A4; // 8022B69C
L_8022B6A0:;
  c->r[31]=0u+0x00000001u; // 8022B6A0
L_8022B6A4:;
  c->r[3]=c->r[30]|c->r[30]; // 8022B6A4
  c->lr=0x8022B6ACu; f_8022B3DC(c); // 8022B6A8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 8022B6AC
  c->r[3]=0u+0x80430000u; // 8022B6B0
  c->r[0]=c->r[3]+0x00003268u; // 8022B6B4
  c->r[12]=c->r[0]+c->r[4]; // 8022B6B8
  c->r[3]=c->r[30]|c->r[30]; // 8022B6BC
  c->lr=0x8022B6C4u; f_802F09D0(c); // 8022B6C0
  c->r[0]=c->r[0]|0x00000000u; // 8022B6C4
  c->r[3]=c->r[30]|c->r[30]; // 8022B6C8
  c->lr=0x8022B6D0u; f_8022B6EC(c); // 8022B6CC
  c->r[3]=c->r[31]|c->r[31]; // 8022B6D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B6D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022B6D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B6DC
  c->lr=c->r[0]; // 8022B6E0
  c->r[1]=c->r[1]+0x00000010u; // 8022B6E4
  return; // 8022B6E8
}

// fn_8022B6EC
void f_8022B6EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B6EC
  c->r[0]=c->lr; // 8022B6F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B6F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B6F8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022B6FC
  c->r[3]=c->r[3]+0x00070000u; // 8022B700
  c->r[0]=R32(c->r[3]+0x00006578u); // 8022B704
  cmps(c,0,(int32_t)c->r[0],5); // 8022B708
  if (!crb(c,2)) { goto L_8022B73C; } // 8022B70C
  c->r[30]=0u+0x00000000u; // 8022B710
  c->r[31]=c->r[3]+0x00006580u; // 8022B714
L_8022B718:;
  c->r[3]=c->r[31]|c->r[31]; // 8022B718
  c->r[12]=R32(c->r[3]+0x00000020u); // 8022B71C
  c->r[12]=R32(c->r[12]+0x00000044u); // 8022B720
  c->ctr=c->r[12]; // 8022B724
  if (true) { c->lr=0x8022B72Cu; dispatch(c,c->ctr); } // 8022B728
  c->r[31]=c->r[31]+0x000008B4u; // 8022B72C
  c->r[30]=c->r[30]+0x00000001u; // 8022B730
  cmps(c,0,(int32_t)c->r[30],4); // 8022B734
  if (crb(c,0)) { IRQCHK(c); goto L_8022B718; } // 8022B738
L_8022B73C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B73C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022B740
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B744
  c->lr=c->r[0]; // 8022B748
  c->r[1]=c->r[1]+0x00000010u; // 8022B74C
  return; // 8022B750
}

// fn_8022B754
void f_8022B754(Ctx* __restrict c) {
  f_8022B614(c); return; // 8022B754
}

// fn_8022B758
void f_8022B758(Ctx* __restrict c) {
  f_8022B614(c); return; // 8022B758
}

// fn_8022B75C
void f_8022B75C(Ctx* __restrict c) {
  f_8022B614(c); return; // 8022B75C
}

// fn_8022B760
void f_8022B760(Ctx* __restrict c) {
  f_8022B614(c); return; // 8022B760
}

// fn_8022B764
void f_8022B764(Ctx* __restrict c) {
  f_8022B614(c); return; // 8022B764
}

// fn_8022B768
void f_8022B768(Ctx* __restrict c) {
  f_8022B614(c); return; // 8022B768
}

// fn_8022B76C
void f_8022B76C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B76C
  c->r[0]=c->lr; // 8022B770
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022B774
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022B778
  c->r[31]=c->r[3]|c->r[3]; // 8022B77C
  c->r[4]=c->r[3]+0x00070000u; // 8022B780
  c->r[0]=R32(c->r[4]+0x00006578u); // 8022B784
  cmps(c,0,(int32_t)c->r[0],2); // 8022B788
  if (crb(c,2)) { goto L_8022B794; } // 8022B78C
  goto L_8022B7A8; // 8022B790
L_8022B794:;
  c->r[4]=0u+0x00000000u; // 8022B794
  c->lr=0x8022B79Cu; f_802293C4(c); // 8022B798
  c->r[3]=c->r[31]|c->r[31]; // 8022B79C
  c->r[4]=0u+0x00000001u; // 8022B7A0
  c->lr=0x8022B7A8u; f_8022B3D4(c); // 8022B7A4
L_8022B7A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022B7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022B7AC
  c->lr=c->r[0]; // 8022B7B0
  c->r[1]=c->r[1]+0x00000010u; // 8022B7B4
  return; // 8022B7B8
}

// fn_8022B7BC
void f_8022B7BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022B7BC
  c->r[0]=c->lr; // 8022B7C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022B7C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8022B7C8
  W32(c->r[1]+0x00000038u,c->r[30]); // 8022B7CC
  W32(c->r[1]+0x00000034u,c->r[29]); // 8022B7D0
  c->r[31]=c->r[3]|c->r[3]; // 8022B7D4
  c->r[4]=c->r[3]+0x00070000u; // 8022B7D8
  c->r[0]=R32(c->r[4]+0x00006578u); // 8022B7DC
  cmps(c,0,(int32_t)c->r[0],2); // 8022B7E0
  if (!crb(c,2)) { goto L_8022BBA8; } // 8022B7E4
  c->lr=0x8022B7ECu; f_8022C3B4(c); // 8022B7E8
  c->r[29]=c->r[3]|c->r[3]; // 8022B7EC
  c->r[3]=c->r[31]|c->r[31]; // 8022B7F0
  c->lr=0x8022B7F8u; f_8022C3A8(c); // 8022B7F4
  cmps(c,0,(int32_t)c->r[3],0); // 8022B7F8
  if (crb(c,2)) { goto L_8022B810; } // 8022B7FC
  if (!crb(c,0)) { goto L_8022BBA8; } // 8022B800
  cmps(c,0,(int32_t)c->r[3],-1); // 8022B804
  if (!crb(c,0)) { goto L_8022BB80; } // 8022B808
  goto L_8022BBA8; // 8022B80C
L_8022B810:;
  c->r[3]=c->r[29]|c->r[29]; // 8022B810
  c->r[4]=0u+0x00000000u; // 8022B814
  c->lr=0x8022B81Cu; f_80076DF8(c); // 8022B818
  c->lr=0x8022B820u; f_8006E56C(c); // 8022B81C
  c->r[4]=c->r[3]|c->r[3]; // 8022B820
  c->r[3]=c->r[31]+0x00070000u; // 8022B824
  c->r[3]=c->r[3]+0x00006580u; // 8022B828
  c->r[5]=0u+0x00000001u; // 8022B82C
  c->r[6]=0u+0x00000000u; // 8022B830
  c->r[7]=0u+0x00000001u; // 8022B834
  c->r[8]=0u+0x00000000u; // 8022B838
  c->lr=0x8022B840u; f_80077B14(c); // 8022B83C
  c->r[3]=c->r[31]+0x00070000u; // 8022B840
  c->r[3]=c->r[3]+0x000065A4u; // 8022B844
  c->r[4]=0u+0x00000001u; // 8022B848
  c->lr=0x8022B850u; f_8005378C(c); // 8022B84C
  c->r[3]=c->r[31]+0x00070000u; // 8022B850
  c->r[3]=c->r[3]+0x000065A4u; // 8022B854
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B858
  c->f[2]=c->f[1]; // 8022B85C
  c->f[3]=c->f[1]; // 8022B860
  c->lr=0x8022B868u; f_80074EEC(c); // 8022B864
  c->r[3]=c->r[31]+0x00070000u; // 8022B868
  c->r[3]=c->r[3]+0x000065A4u; // 8022B86C
  c->r[4]=0u+0x00000001u; // 8022B870
  c->lr=0x8022B878u; f_800536E8(c); // 8022B874
  c->r[3]=c->r[31]+0x00070000u; // 8022B878
  c->r[3]=c->r[3]+0x000065A4u; // 8022B87C
  c->r[4]=0u+0x00000001u; // 8022B880
  c->lr=0x8022B888u; f_80052BC0(c); // 8022B884
  c->r[3]=c->r[31]+0x00070000u; // 8022B888
  c->r[3]=c->r[3]+0x00006580u; // 8022B88C
  c->r[4]=0u+0x00000001u; // 8022B890
  c->r[5]=0u+0x00000001u; // 8022B894
  c->r[6]=0u+0xFFFFFFFFu; // 8022B898
  c->lr=0x8022B8A0u; f_80078874(c); // 8022B89C
  c->r[3]=c->r[31]+0x00070000u; // 8022B8A0
  c->r[3]=c->r[3]+0x00006580u; // 8022B8A4
  {uint32_t ea=c->r[2]+0xFFFF99ACu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B8A8
  c->lr=0x8022B8B0u; f_80078A18(c); // 8022B8AC
  c->r[3]=c->r[29]|c->r[29]; // 8022B8B0
  c->r[4]=0u+0x00000001u; // 8022B8B4
  c->lr=0x8022B8BCu; f_80076DF8(c); // 8022B8B8
  c->lr=0x8022B8C0u; f_8006E56C(c); // 8022B8BC
  c->r[4]=c->r[3]|c->r[3]; // 8022B8C0
  c->r[3]=c->r[31]+0x00070000u; // 8022B8C4
  c->r[3]=c->r[3]+0x00006E34u; // 8022B8C8
  c->r[5]=0u+0x00000001u; // 8022B8CC
  c->r[6]=0u+0x00000000u; // 8022B8D0
  c->r[7]=0u+0x00000001u; // 8022B8D4
  c->r[8]=0u+0x00000000u; // 8022B8D8
  c->lr=0x8022B8E0u; f_80077B88(c); // 8022B8DC
  c->r[3]=c->r[31]+0x00070000u; // 8022B8E0
  c->r[3]=c->r[3]+0x00006E58u; // 8022B8E4
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B8E8
  c->f[2]=c->f[1]; // 8022B8EC
  c->f[3]=c->f[1]; // 8022B8F0
  c->lr=0x8022B8F8u; f_80074EEC(c); // 8022B8F4
  c->r[3]=c->r[29]|c->r[29]; // 8022B8F8
  c->r[4]=0u+0x00000003u; // 8022B8FC
  c->lr=0x8022B904u; f_80076DF8(c); // 8022B900
  c->lr=0x8022B908u; f_8006E56C(c); // 8022B904
  c->r[4]=c->r[3]|c->r[3]; // 8022B908
  c->r[3]=c->r[31]+0x00070000u; // 8022B90C
  c->r[3]=c->r[3]+0x000076E8u; // 8022B910
  c->r[5]=0u+0x00000001u; // 8022B914
  c->r[6]=0u+0x00000000u; // 8022B918
  c->r[7]=0u+0x00000001u; // 8022B91C
  c->r[8]=0u+0x00000000u; // 8022B920
  c->lr=0x8022B928u; f_80077B88(c); // 8022B924
  c->r[3]=c->r[31]+0x00070000u; // 8022B928
  c->r[3]=c->r[3]+0x0000770Cu; // 8022B92C
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022B930
  c->f[2]=c->f[1]; // 8022B934
  c->f[3]=c->f[1]; // 8022B938
  c->lr=0x8022B940u; f_80074EEC(c); // 8022B93C
  c->r[3]=c->r[29]|c->r[29]; // 8022B940
  c->r[4]=0u+0x00000002u; // 8022B944
  c->lr=0x8022B94Cu; f_80076DF8(c); // 8022B948
  c->r[30]=c->r[3]|c->r[3]; // 8022B94C
  c->lr=0x8022B954u; f_8006E4DC(c); // 8022B950
  c->r[4]=c->r[31]+0x00080000u; // 8022B954
  W32(c->r[4]+0xFFFF8850u,c->r[3]); // 8022B958
  c->r[3]=c->r[30]|c->r[30]; // 8022B95C
  c->lr=0x8022B964u; f_80077070(c); // 8022B960
  c->r[4]=c->r[31]+0x00080000u; // 8022B964
  W32(c->r[4]+0xFFFF8860u,c->r[3]); // 8022B968
  c->lr=0x8022B970u; f_80078B6C(c); // 8022B96C
  c->r[5]=c->r[31]+0x00080000u; // 8022B970
  c->r[4]=R32(c->r[5]+0xFFFF8850u); // 8022B974
  c->r[5]=R32(c->r[5]+0xFFFF8860u); // 8022B978
  c->lr=0x8022B980u; f_8018F904(c); // 8022B97C
  c->r[4]=c->r[31]+0x00080000u; // 8022B980
  W32(c->r[4]+0xFFFF8858u,c->r[3]); // 8022B984
  c->r[3]=c->r[29]|c->r[29]; // 8022B988
  c->r[4]=0u+0x00000004u; // 8022B98C
  c->lr=0x8022B994u; f_80076DF8(c); // 8022B990
  c->r[30]=c->r[3]|c->r[3]; // 8022B994
  c->lr=0x8022B99Cu; f_8006E4DC(c); // 8022B998
  c->r[4]=c->r[31]+0x00080000u; // 8022B99C
  W32(c->r[4]+0xFFFF8854u,c->r[3]); // 8022B9A0
  c->r[3]=c->r[30]|c->r[30]; // 8022B9A4
  c->lr=0x8022B9ACu; f_80077070(c); // 8022B9A8
  c->r[4]=c->r[31]+0x00080000u; // 8022B9AC
  W32(c->r[4]+0xFFFF8864u,c->r[3]); // 8022B9B0
  c->lr=0x8022B9B8u; f_80078B6C(c); // 8022B9B4
  c->r[5]=c->r[31]+0x00080000u; // 8022B9B8
  c->r[4]=R32(c->r[5]+0xFFFF8854u); // 8022B9BC
  c->r[5]=R32(c->r[5]+0xFFFF8864u); // 8022B9C0
  c->lr=0x8022B9C8u; f_8018F904(c); // 8022B9C4
  c->r[4]=c->r[31]+0x00080000u; // 8022B9C8
  W32(c->r[4]+0xFFFF885Cu,c->r[3]); // 8022B9CC
  c->r[3]=c->r[29]|c->r[29]; // 8022B9D0
  c->r[4]=0u+0x00000006u; // 8022B9D4
  c->lr=0x8022B9DCu; f_80076DF8(c); // 8022B9D8
  c->r[3]=c->r[29]|c->r[29]; // 8022B9DC
  c->r[4]=0u+0x00000005u; // 8022B9E0
  c->lr=0x8022B9E8u; f_80076DF8(c); // 8022B9E4
  c->lr=0x8022B9ECu; f_8006E56C(c); // 8022B9E8
  c->r[4]=c->r[3]|c->r[3]; // 8022B9EC
  c->r[3]=c->r[31]+0x00070000u; // 8022B9F0
  c->r[3]=c->r[3]+0x00007F9Cu; // 8022B9F4
  c->lr=0x8022B9FCu; f_80077C74(c); // 8022B9F8
  c->r[3]=c->r[31]+0x00070000u; // 8022B9FC
  c->r[3]=c->r[3]+0x00007F9Cu; // 8022BA00
  c->lr=0x8022BA08u; f_80077CF0(c); // 8022BA04
  c->r[3]=c->r[31]+0x00070000u; // 8022BA08
  c->r[3]=c->r[3]+0x00007F9Cu; // 8022BA0C
  c->r[4]=0u+0x00000001u; // 8022BA10
  c->r[5]=0u+0x00000010u; // 8022BA14
  c->r[6]=0u+0x00000000u; // 8022BA18
  c->lr=0x8022BA20u; f_80077D5C(c); // 8022BA1C
  c->r[3]=c->r[31]+0x00070000u; // 8022BA20
  c->r[3]=c->r[3]+0x00007F9Cu; // 8022BA24
  c->r[4]=0u+0x00000001u; // 8022BA28
  c->r[5]=0u+0x00000000u; // 8022BA2C
  c->r[6]=0u+0x0000734Fu; // 8022BA30
  c->lr=0x8022BA38u; f_80077DF8(c); // 8022BA34
  c->r[3]=c->r[31]+0x00070000u; // 8022BA38
  c->r[3]=c->r[3]+0x00007FC0u; // 8022BA3C
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022BA40
  {uint32_t ea=c->r[2]+0xFFFF99B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022BA44
  c->f[3]=c->f[1]; // 8022BA48
  c->lr=0x8022BA50u; f_80074EEC(c); // 8022BA4C
  c->r[0]=0u+0x00000000u; // 8022BA50
  c->r[3]=c->r[31]+0x00080000u; // 8022BA54
  W32(c->r[3]+0xFFFF895Cu,c->r[0]); // 8022BA58
  c->r[3]=c->r[31]+0x00070000u; // 8022BA5C
  c->r[3]=c->r[3]+0x00007FC0u; // 8022BA60
  c->r[4]=0u+0x80430000u; // 8022BA64
  c->r[4]=c->r[4]+0x00003DF8u; // 8022BA68
  c->r[5]=0u+0x00000001u; // 8022BA6C
  c->r[6]=0u+0x00000000u; // 8022BA70
  c->lr=0x8022BA78u; f_80052F6C(c); // 8022BA74
  c->r[3]=c->r[31]|c->r[31]; // 8022BA78
  c->r[4]=0u+0x00000000u; // 8022BA7C
  c->lr=0x8022BA84u; f_8022BC64(c); // 8022BA80
  c->lr=0x8022BA88u; f_80056B5C(c); // 8022BA84
  c->r[29]=c->r[3]|c->r[3]; // 8022BA88
  c->r[3]=c->r[31]|c->r[31]; // 8022BA8C
  c->lr=0x8022BA94u; f_80065DB4(c); // 8022BA90
  c->lr=0x8022BA98u; f_80056B54(c); // 8022BA94
  c->r[3]=0u+0x00000038u; // 8022BA98
  c->lr=0x8022BAA0u; f_80047B64(c); // 8022BA9C
  c->r[30]=c->r[3]|c->r[3]; // 8022BAA0
  cmps(c,0,(int32_t)c->r[3],0); // 8022BAA4
  if (crb(c,2)) { goto L_8022BAB0; } // 8022BAA8
  c->lr=0x8022BAB0u; f_8022BBC4(c); // 8022BAAC
L_8022BAB0:;
  c->r[3]=c->r[29]|c->r[29]; // 8022BAB0
  c->lr=0x8022BAB8u; f_80056B54(c); // 8022BAB4
  c->r[3]=c->r[31]+0x00080000u; // 8022BAB8
  W32(c->r[3]+0xFFFF8954u,c->r[30]); // 8022BABC
  c->lr=0x8022BAC4u; f_80056B5C(c); // 8022BAC0
  c->r[29]=c->r[3]|c->r[3]; // 8022BAC4
  c->r[3]=c->r[31]|c->r[31]; // 8022BAC8
  c->lr=0x8022BAD0u; f_80065DB4(c); // 8022BACC
  c->lr=0x8022BAD4u; f_80056B54(c); // 8022BAD0
  c->r[3]=0u+0x000000CCu; // 8022BAD4
  c->lr=0x8022BADCu; f_80047B64(c); // 8022BAD8
  c->r[30]=c->r[3]|c->r[3]; // 8022BADC
  cmps(c,0,(int32_t)c->r[3],0); // 8022BAE0
  if (crb(c,2)) { goto L_8022BAEC; } // 8022BAE4
  c->lr=0x8022BAECu; f_8022C310(c); // 8022BAE8
L_8022BAEC:;
  c->r[3]=c->r[29]|c->r[29]; // 8022BAEC
  c->lr=0x8022BAF4u; f_80056B54(c); // 8022BAF0
  c->r[3]=c->r[31]+0x00080000u; // 8022BAF4
  W32(c->r[3]+0xFFFF8958u,c->r[30]); // 8022BAF8
  c->r[3]=c->r[1]+0x00000014u; // 8022BAFC
  c->lr=0x8022BB04u; f_80185604(c); // 8022BB00
  c->r[3]=c->r[1]+0x00000008u; // 8022BB04
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022BB08
  {uint32_t ea=c->r[2]+0xFFFF99B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022BB0C
  c->f[3]=c->f[1]; // 8022BB10
  c->lr=0x8022BB18u; f_8004E34C(c); // 8022BB14
  c->r[4]=c->r[3]|c->r[3]; // 8022BB18
  c->r[3]=c->r[1]+0x00000018u; // 8022BB1C
  c->lr=0x8022BB24u; f_8004A65C(c); // 8022BB20
  {uint32_t ea=c->r[2]+0xFFFF99B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BB24
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8022BB28
  c->r[3]=c->r[31]+0x00080000u; // 8022BB2C
  c->r[3]=R32(c->r[3]+0xFFFF8958u); // 8022BB30
  c->r[4]=c->r[1]+0x00000014u; // 8022BB34
  c->lr=0x8022BB3Cu; f_801831A4(c); // 8022BB38
  c->r[4]=c->r[31]+0x00080000u; // 8022BB3C
  c->r[3]=R32(c->r[4]+0xFFFF8958u); // 8022BB40
  c->r[4]=R32(c->r[4]+0xFFFF8954u); // 8022BB44
  c->r[4]=c->r[4]+0x00000020u; // 8022BB48
  c->lr=0x8022BB50u; f_80183CB4(c); // 8022BB4C
  c->r[3]=c->r[31]+0x00080000u; // 8022BB50
  c->r[3]=R32(c->r[3]+0xFFFF8958u); // 8022BB54
  c->r[4]=0u+0x00000004u; // 8022BB58
  c->lr=0x8022BB60u; f_80180F84(c); // 8022BB5C
  c->lr=0x8022BB64u; f_80078B6C(c); // 8022BB60
  c->r[4]=c->r[31]+0x00080000u; // 8022BB64
  c->r[4]=R32(c->r[4]+0xFFFF8958u); // 8022BB68
  c->lr=0x8022BB70u; f_8018F928(c); // 8022BB6C
  c->r[3]=c->r[31]|c->r[31]; // 8022BB70
  c->r[4]=0u+0xFFFFFFFFu; // 8022BB74
  c->lr=0x8022BB7Cu; f_802293C4(c); // 8022BB78
  goto L_8022BBA8; // 8022BB7C
L_8022BB80:;
  c->r[3]=c->r[31]|c->r[31]; // 8022BB80
  c->r[4]=0u+0x00000000u; // 8022BB84
  c->lr=0x8022BB8Cu; f_802293C4(c); // 8022BB88
  c->r[3]=c->r[31]|c->r[31]; // 8022BB8C
  c->r[4]=0u+0x00000002u; // 8022BB90
  c->lr=0x8022BB98u; f_8022B3D4(c); // 8022BB94
  c->r[3]=c->r[31]+0x00070000u; // 8022BB98
  c->r[0]=R32(c->r[3]+0x0000657Cu); // 8022BB9C
  c->r[0]=c->r[0]|0x00000001u; // 8022BBA0
  W32(c->r[3]+0x0000657Cu,c->r[0]); // 8022BBA4
L_8022BBA8:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8022BBA8
  c->r[30]=R32(c->r[1]+0x00000038u); // 8022BBAC
  c->r[29]=R32(c->r[1]+0x00000034u); // 8022BBB0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8022BBB4
  c->lr=c->r[0]; // 8022BBB8
  c->r[1]=c->r[1]+0x00000040u; // 8022BBBC
  return; // 8022BBC0
}

// fn_8022BBC4
void f_8022BBC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BBC4
  c->r[0]=c->lr; // 8022BBC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022BBCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022BBD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022BBD4
  c->r[30]=c->r[3]|c->r[3]; // 8022BBD8
  c->lr=0x8022BBE0u; f_8004B0A4(c); // 8022BBDC
  c->r[3]=c->r[30]+0x0000000Cu; // 8022BBE0
  c->lr=0x8022BBE8u; f_8004B0A4(c); // 8022BBE4
  c->r[3]=c->r[30]+0x00000020u; // 8022BBE8
  c->lr=0x8022BBF0u; f_8004B0A4(c); // 8022BBEC
  {uint32_t ea=c->r[2]+0xFFFF99B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BBF0
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8022BBF4
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BBF8
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8022BBFC
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 8022BC00
  c->r[3]=c->r[30]|c->r[30]; // 8022BC04
  c->r[31]=0u+0x804C0000u; // 8022BC08
  c->r[4]=c->r[31]+0x000024A0u; // 8022BC0C
  c->lr=0x8022BC14u; f_8004A65C(c); // 8022BC10
  c->r[3]=c->r[30]+0x0000000Cu; // 8022BC14
  c->r[4]=c->r[31]+0x000024A0u; // 8022BC18
  c->lr=0x8022BC20u; f_8004A65C(c); // 8022BC1C
  c->r[0]=0u+0xFFFFFFFFu; // 8022BC20
  W32(c->r[30]+0x00000034u,c->r[0]); // 8022BC24
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BC28
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 8022BC2C
  {uint32_t ea=c->r[2]+0xFFFF99BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BC30
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 8022BC34
  {uint32_t ea=c->r[2]+0xFFFF99C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BC38
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 8022BC3C
  {uint32_t ea=c->r[2]+0xFFFF99C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BC40
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 8022BC44
  c->r[3]=c->r[30]|c->r[30]; // 8022BC48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022BC4C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022BC50
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022BC54
  c->lr=c->r[0]; // 8022BC58
  c->r[1]=c->r[1]+0x00000010u; // 8022BC5C
  return; // 8022BC60
}

// fn_8022BC64
void f_8022BC64(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BC64
  c->r[0]=c->lr; // 8022BC68
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022BC6C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8022BC70
  W32(c->r[1]+0x00000028u,c->r[30]); // 8022BC74
  W32(c->r[1]+0x00000024u,c->r[29]); // 8022BC78
  W32(c->r[1]+0x00000020u,c->r[28]); // 8022BC7C
  c->r[31]=c->r[3]|c->r[3]; // 8022BC80
  c->r[28]=c->r[4]|c->r[4]; // 8022BC84
  c->r[3]=c->r[1]+0x00000008u; // 8022BC88
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022BC8C
  {uint32_t ea=c->r[2]+0xFFFF99BCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022BC90
  {uint32_t ea=c->r[2]+0xFFFF99C8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8022BC94
  c->lr=0x8022BC9Cu; f_8004E34C(c); // 8022BC98
  c->r[3]=c->r[31]+0x00080000u; // 8022BC9C
  W32(c->r[3]+0xFFFF8868u,c->r[28]); // 8022BCA0
  c->r[3]=c->r[28]|c->r[28]; // 8022BCA4
  c->r[4]=0u+0x00000000u; // 8022BCA8
  c->r[5]=0u+0x00000001u; // 8022BCAC
  c->lr=0x8022BCB4u; f_800EEE08(c); // 8022BCB0
  c->r[4]=c->r[31]+0x00080000u; // 8022BCB4
  W32(c->r[4]+0xFFFF8868u,c->r[3]); // 8022BCB8
  c->r[28]=0u+0x00000000u; // 8022BCBC
  c->r[29]=0u+0x00000000u; // 8022BCC0
  c->r[30]=c->r[31]+0x00070000u; // 8022BCC4
L_8022BCC8:;
  c->r[3]=c->r[29]+c->r[30]; // 8022BCC8
  c->r[3]=c->r[3]+0x00006E58u; // 8022BCCC
  c->r[4]=0u+0x00000001u; // 8022BCD0
  c->lr=0x8022BCD8u; f_800536FC(c); // 8022BCD4
  c->r[29]=c->r[29]+0x000008B4u; // 8022BCD8
  c->r[28]=c->r[28]+0x00000001u; // 8022BCDC
  cmps(c,0,(int32_t)c->r[28],2); // 8022BCE0
  if (crb(c,0)) { IRQCHK(c); goto L_8022BCC8; } // 8022BCE4
  c->lr=0x8022BCECu; f_80078B6C(c); // 8022BCE8
  c->r[4]=c->r[31]+0x00080000u; // 8022BCEC
  c->r[0]=R32(c->r[4]+0xFFFF8868u); // 8022BCF0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022BCF4
  c->r[4]=c->r[4]+c->r[0]; // 8022BCF8
  c->r[4]=R32(c->r[4]+0xFFFF8858u); // 8022BCFC
  c->lr=0x8022BD04u; f_8018F910(c); // 8022BD00
  c->r[4]=c->r[31]+0x00070000u; // 8022BD04
  c->r[3]=c->r[31]+0x00080000u; // 8022BD08
  c->r[3]=R32(c->r[3]+0xFFFF8868u); // 8022BD0C
  c->r[0]=c->r[3]+0x00000001u; // 8022BD10
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)2228); // 8022BD14
  c->r[3]=c->r[4]+c->r[0]; // 8022BD18
  c->r[3]=c->r[3]+0x000065A4u; // 8022BD1C
  c->r[4]=0u+0x00000001u; // 8022BD20
  c->lr=0x8022BD28u; f_800536E8(c); // 8022BD24
  c->r[3]=c->r[31]+0x00080000u; // 8022BD28
  c->r[3]=R32(c->r[3]+0xFFFF8958u); // 8022BD2C
  cmps(c,0,(int32_t)c->r[3],0); // 8022BD30
  if (crb(c,2)) { goto L_8022BD40; } // 8022BD34
  c->r[4]=c->r[1]+0x00000008u; // 8022BD38
  c->lr=0x8022BD40u; f_80183CB4(c); // 8022BD3C
L_8022BD40:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8022BD40
  c->r[30]=R32(c->r[1]+0x00000028u); // 8022BD44
  c->r[29]=R32(c->r[1]+0x00000024u); // 8022BD48
  c->r[28]=R32(c->r[1]+0x00000020u); // 8022BD4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022BD50
  c->lr=c->r[0]; // 8022BD54
  c->r[1]=c->r[1]+0x00000030u; // 8022BD58
  return; // 8022BD5C
}

// fn_8022BD60
void f_8022BD60(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BD60
  c->r[0]=c->lr; // 8022BD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022BD68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022BD6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022BD70
  c->r[30]=c->r[3]|c->r[3]; // 8022BD74
  c->r[3]=c->r[3]+0x00070000u; // 8022BD78
  c->r[0]=R32(c->r[3]+0x00006578u); // 8022BD7C
  cmps(c,0,(int32_t)c->r[0],5); // 8022BD80
  if (!crb(c,2)) { goto L_8022BEB4; } // 8022BD84
  c->r[3]=0u+0x80480000u; // 8022BD88
  c->r[3]=c->r[3]+0x00000014u; // 8022BD8C
  {uint32_t ea=c->r[2]+0xFFFF99CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022BD90
  {uint32_t ea=c->r[2]+0xFFFF99D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022BD94
  c->r[4]=0u+0x00000007u; // 8022BD98
  c->r[5]=0u+0x00000001u; // 8022BD9C
  c->lr=0x8022BDA4u; f_80061368(c); // 8022BDA0
  c->lr=0x8022BDA8u; f_800484B8(c); // 8022BDA4
  c->r[4]=0u+0x00000000u; // 8022BDA8
  c->lr=0x8022BDB0u; f_80048624(c); // 8022BDAC
  c->r[31]=c->r[3]|c->r[3]; // 8022BDB0
  c->lr=0x8022BDB8u; f_80047C90(c); // 8022BDB4
  c->r[4]=0u+0x00000000u; // 8022BDB8
  c->lr=0x8022BDC0u; f_80058EA4(c); // 8022BDBC
  c->r[4]=0u+0x00000010u; // 8022BDC0
  c->lr=0x8022BDC8u; f_80057B44(c); // 8022BDC4
  cmps(c,0,(int32_t)c->r[3],0); // 8022BDC8
  if (!crb(c,2)) { goto L_8022BDEC; } // 8022BDCC
  c->lr=0x8022BDD4u; f_80047C90(c); // 8022BDD0
  c->r[4]=0u+0x00000000u; // 8022BDD4
  c->lr=0x8022BDDCu; f_80058EA4(c); // 8022BDD8
  c->r[4]=0u+0x00000400u; // 8022BDDC
  c->lr=0x8022BDE4u; f_80057B68(c); // 8022BDE0
  cmps(c,0,(int32_t)c->r[3],0); // 8022BDE4
  if (crb(c,2)) { goto L_8022BE2C; } // 8022BDE8
L_8022BDEC:;
  c->r[3]=c->r[31]|c->r[31]; // 8022BDEC
  c->lr=0x8022BDF4u; f_8005F6E8(c); // 8022BDF0
  cmps(c,0,(int32_t)c->r[3],0); // 8022BDF4
  if (crb(c,2)) { goto L_8022BE1C; } // 8022BDF8
  c->r[3]=c->r[31]|c->r[31]; // 8022BDFC
  c->r[4]=0u+0x00000000u; // 8022BE00
  c->r[5]=0u+0x00000000u; // 8022BE04
  c->lr=0x8022BE0Cu; f_8005F65C(c); // 8022BE08
  c->r[3]=c->r[31]|c->r[31]; // 8022BE0C
  c->r[4]=0u+0x00000080u; // 8022BE10
  c->lr=0x8022BE18u; f_8005EE5C(c); // 8022BE14
  goto L_8022BE2C; // 8022BE18
L_8022BE1C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022BE1C
  c->r[4]=0u+0x00000001u; // 8022BE20
  c->r[5]=0u+0x00000001u; // 8022BE24
  c->lr=0x8022BE2Cu; f_8005F65C(c); // 8022BE28
L_8022BE2C:;
  c->lr=0x8022BE30u; f_80047C90(c); // 8022BE2C
  c->r[4]=0u+0x00000000u; // 8022BE30
  c->lr=0x8022BE38u; f_80058EA4(c); // 8022BE34
  c->r[4]=0u+0x00001000u; // 8022BE38
  c->lr=0x8022BE40u; f_80057B44(c); // 8022BE3C
  cmps(c,0,(int32_t)c->r[3],0); // 8022BE40
  if (crb(c,2)) { goto L_8022BE60; } // 8022BE44
  c->r[5]=c->r[30]+0x00080000u; // 8022BE48
  c->r[3]=R32(c->r[5]+0xFFFF8868u); // 8022BE4C
  c->r[4]=c->r[3]+0x00000001u; // 8022BE50
  W32(c->r[5]+0xFFFF8868u,c->r[4]); // 8022BE54
  c->r[3]=c->r[30]|c->r[30]; // 8022BE58
  c->lr=0x8022BE60u; f_8022BC64(c); // 8022BE5C
L_8022BE60:;
  c->r[3]=c->r[31]|c->r[31]; // 8022BE60
  c->lr=0x8022BE68u; f_8005F6E8(c); // 8022BE64
  cmps(c,0,(int32_t)c->r[3],0); // 8022BE68
  if (!crb(c,2)) { goto L_8022BE78; } // 8022BE6C
  c->r[3]=c->r[30]|c->r[30]; // 8022BE70
  c->lr=0x8022BE78u; f_8022BECC(c); // 8022BE74
L_8022BE78:;
  c->r[3]=c->r[30]|c->r[30]; // 8022BE78
  c->lr=0x8022BE80u; f_8022C030(c); // 8022BE7C
  c->r[3]=c->r[30]|c->r[30]; // 8022BE80
  c->lr=0x8022BE88u; f_8022C3A8(c); // 8022BE84
  cmps(c,0,(int32_t)c->r[3],2); // 8022BE88
  if (crb(c,2)) { goto L_8022BE98; } // 8022BE8C
  if (!crb(c,0)) { goto L_8022BEB4; } // 8022BE90
  goto L_8022BEB4; // 8022BE94
L_8022BE98:;
  c->r[3]=c->r[30]|c->r[30]; // 8022BE98
  c->r[4]=0u+0x00000000u; // 8022BE9C
  c->lr=0x8022BEA4u; f_802293C4(c); // 8022BEA0
  c->r[3]=c->r[30]+0x00070000u; // 8022BEA4
  c->r[0]=R32(c->r[3]+0x0000657Cu); // 8022BEA8
  c->r[0]=c->r[0]|0x00000002u; // 8022BEAC
  W32(c->r[3]+0x0000657Cu,c->r[0]); // 8022BEB0
L_8022BEB4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022BEB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022BEB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022BEBC
  c->lr=c->r[0]; // 8022BEC0
  c->r[1]=c->r[1]+0x00000010u; // 8022BEC4
  return; // 8022BEC8
}

// fn_8022BECC
void f_8022BECC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022BECC
  c->r[0]=c->lr; // 8022BED0
  W32(c->r[1]+0x00000064u,c->r[0]); // 8022BED4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8022BED8
  c->r[31]=c->r[3]|c->r[3]; // 8022BEDC
  c->r[3]=c->r[1]+0x00000020u; // 8022BEE0
  c->lr=0x8022BEE8u; f_8004B0A0(c); // 8022BEE4
  c->r[3]=c->r[1]+0x00000014u; // 8022BEE8
  c->lr=0x8022BEF0u; f_8004B0A4(c); // 8022BEEC
  c->r[3]=c->r[1]+0x00000008u; // 8022BEF0
  c->lr=0x8022BEF8u; f_8004B0A4(c); // 8022BEF4
  c->r[3]=c->r[31]+0x00080000u; // 8022BEF8
  c->r[31]=R32(c->r[3]+0xFFFF8954u); // 8022BEFC
  c->lr=0x8022BF04u; f_80047C90(c); // 8022BF00
  c->r[4]=0u+0x00000000u; // 8022BF04
  c->lr=0x8022BF0Cu; f_80058EA4(c); // 8022BF08
  c->r[4]=0u+0x00000000u; // 8022BF0C
  c->lr=0x8022BF14u; f_80057D40(c); // 8022BF10
  cmpu(c,0,c->r[3],0x00000002u); // 8022BF14
  if (!crb(c,2)) { goto L_8022BF60; } // 8022BF18
  c->lr=0x8022BF20u; f_80047C90(c); // 8022BF1C
  c->r[4]=0u+0x00000000u; // 8022BF20
  c->lr=0x8022BF28u; f_80058EA4(c); // 8022BF24
  c->r[4]=0u+0x0000002Au; // 8022BF28
  c->r[5]=0u+0x00000000u; // 8022BF2C
  c->lr=0x8022BF34u; f_80057910(c); // 8022BF30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8022BF34
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BF38
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8022BF3C
  c->lr=0x8022BF44u; f_80047C90(c); // 8022BF40
  c->r[4]=0u+0x00000000u; // 8022BF44
  c->lr=0x8022BF4Cu; f_80058EA4(c); // 8022BF48
  c->r[4]=0u+0x0000002Bu; // 8022BF4C
  c->r[5]=0u+0x00000000u; // 8022BF50
  c->lr=0x8022BF58u; f_80057910(c); // 8022BF54
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8022BF58
  goto L_8022BFA0; // 8022BF5C
L_8022BF60:;
  c->lr=0x8022BF64u; f_80047C90(c); // 8022BF60
  c->r[4]=0u+0x00000000u; // 8022BF64
  c->lr=0x8022BF6Cu; f_80058EA4(c); // 8022BF68
  c->r[4]=0u+0x00000021u; // 8022BF6C
  c->r[5]=0u+0x00000000u; // 8022BF70
  c->lr=0x8022BF78u; f_80057910(c); // 8022BF74
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8022BF78
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BF7C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8022BF80
  c->lr=0x8022BF88u; f_80047C90(c); // 8022BF84
  c->r[4]=0u+0x00000000u; // 8022BF88
  c->lr=0x8022BF90u; f_80058EA4(c); // 8022BF8C
  c->r[4]=0u+0x00000022u; // 8022BF90
  c->r[5]=0u+0x00000000u; // 8022BF94
  c->lr=0x8022BF9Cu; f_80057910(c); // 8022BF98
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8022BF9C
L_8022BFA0:;
  c->r[3]=c->r[1]+0x00000008u; // 8022BFA0
  c->lr=0x8022BFA8u; f_8005C170(c); // 8022BFA4
  {uint32_t ea=c->r[31]+0x0000001Cu; WF32(ea,c->f[1]);} // 8022BFA8
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022BFAC
  {uint32_t ea=c->r[2]+0xFFFF99D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BFB0
  fcmp(c,0,c->f[1],c->f[0]); // 8022BFB4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8022BFB8
  if (!crb(c,2)) { goto L_8022BFD0; } // 8022BFBC
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022BFC0
  fcmp(c,0,c->f[1],c->f[0]); // 8022BFC4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022BFC8
  if (crb(c,2)) { goto L_8022C01C; } // 8022BFCC
L_8022BFD0:;
  c->lr=0x8022BFD4u; f_800484B8(c); // 8022BFD0
  c->r[4]=0u+0x00000000u; // 8022BFD4
  c->lr=0x8022BFDCu; f_80048624(c); // 8022BFD8
  c->r[4]=c->r[1]+0x00000020u; // 8022BFDC
  c->lr=0x8022BFE4u; f_8005F794(c); // 8022BFE0
  c->r[3]=c->r[1]+0x00000008u; // 8022BFE4
  c->r[4]=c->r[3]|c->r[3]; // 8022BFE8
  c->lr=0x8022BFF0u; f_8005C110(c); // 8022BFEC
  c->r[3]=c->r[1]+0x00000014u; // 8022BFF0
  c->r[4]=c->r[1]+0x00000020u; // 8022BFF4
  c->r[5]=c->r[1]+0x00000008u; // 8022BFF8
  c->lr=0x8022C000u; f_8026CFE0(c); // 8022BFFC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C000
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C004
  c->f[2]=-c->f[0]; // 8022C008
  c->lr=0x8022C010u; f_802EBCD4(c); // 8022C00C
  {uint32_t ea=c->r[2]+0xFFFF99DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C010
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8022C014
  {uint32_t ea=c->r[31]+0x0000002Cu; WF32(ea,c->f[0]);} // 8022C018
L_8022C01C:;
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8022C01C
  c->r[0]=R32(c->r[1]+0x00000064u); // 8022C020
  c->lr=c->r[0]; // 8022C024
  c->r[1]=c->r[1]+0x00000060u; // 8022C028
  return; // 8022C02C
}

// fn_8022C030
void f_8022C030(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C030
  c->r[0]=c->lr; // 8022C034
  W32(c->r[1]+0x00000114u,c->r[0]); // 8022C038
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 8022C03C
  W32(c->r[1]+0x00000108u,c->r[30]); // 8022C040
  W32(c->r[1]+0x00000104u,c->r[29]); // 8022C044
  W32(c->r[1]+0x00000100u,c->r[28]); // 8022C048
  c->r[28]=c->r[3]|c->r[3]; // 8022C04C
  c->r[3]=c->r[1]+0x000000D0u; // 8022C050
  c->lr=0x8022C058u; f_8004B0A0(c); // 8022C054
  c->r[3]=c->r[1]+0x0000002Cu; // 8022C058
  c->lr=0x8022C060u; f_8004B0A4(c); // 8022C05C
  c->r[3]=c->r[1]+0x00000020u; // 8022C060
  c->lr=0x8022C068u; f_8004B0A4(c); // 8022C064
  c->r[3]=c->r[1]+0x00000098u; // 8022C068
  c->lr=0x8022C070u; f_8022C3C0(c); // 8022C06C
  c->r[3]=c->r[28]+0x00080000u; // 8022C070
  c->r[30]=R32(c->r[3]+0xFFFF8954u); // 8022C074
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C078
  {uint32_t ea=c->r[2]+0xFFFF99D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C07C
  fcmp(c,0,c->f[1],c->f[0]); // 8022C080
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8022C084
  if (!crb(c,2)) { goto L_8022C0A4; } // 8022C088
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C08C
  fcmp(c,0,c->f[1],c->f[0]); // 8022C090
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8022C094
  if (!crb(c,2)) { goto L_8022C0A4; } // 8022C098
  c->r[29]=0u+0x00000000u; // 8022C09C
  goto L_8022C0A8; // 8022C0A0
L_8022C0A4:;
  c->r[29]=0u+0x00000007u; // 8022C0A4
L_8022C0A8:;
  c->r[0]=R32(c->r[30]+0x00000034u); // 8022C0A8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 8022C0AC
  if (crb(c,2)) { goto L_8022C118; } // 8022C0B0
  W32(c->r[30]+0x00000034u,c->r[29]); // 8022C0B4
  c->r[3]=c->r[28]+0x00070000u; // 8022C0B8
  c->r[3]=c->r[3]+0x00006580u; // 8022C0BC
  c->r[0]=R32(c->r[30]+0x00000034u); // 8022C0C0
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8022C0C4
  c->r[4]=0u+0x80430000u; // 8022C0C8
  c->r[31]=c->r[4]+0x00003758u; // 8022C0CC
  c->r[4]=c->r[31]+c->r[0]; // 8022C0D0
  c->r[5]=c->r[1]+0x00000050u; // 8022C0D4
  c->lr=0x8022C0DCu; f_80052230(c); // 8022C0D8
  c->r[3]=c->r[28]+0x00070000u; // 8022C0DC
  c->r[3]=c->r[3]+0x000065A4u; // 8022C0E0
  c->r[0]=R32(c->r[30]+0x00000034u); // 8022C0E4
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 8022C0E8
  c->r[4]=c->r[31]+c->r[0]; // 8022C0EC
  c->r[5]=0u+0x00000000u; // 8022C0F0
  c->r[6]=0u+0x00000000u; // 8022C0F4
  c->lr=0x8022C0FCu; f_80052F6C(c); // 8022C0F8
  c->r[3]=c->r[28]+0x00070000u; // 8022C0FC
  c->r[3]=c->r[3]+0x000065A4u; // 8022C100
  c->r[4]=R32(c->r[1]+0x00000050u); // 8022C104
  {uint32_t ea=c->r[2]+0xFFFF99E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C108
  {uint32_t ea=c->r[2]+0xFFFF99E4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C10C
  c->r[5]=0u+0x00000000u; // 8022C110
  c->lr=0x8022C118u; f_80053798(c); // 8022C114
L_8022C118:;
  c->r[3]=c->r[28]+0x00070000u; // 8022C118
  c->r[3]=c->r[3]+0x000065A4u; // 8022C11C
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C120
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C124
  c->f[3]=c->f[1]; // 8022C128
  c->lr=0x8022C130u; f_80074EDC(c); // 8022C12C
  c->r[3]=c->r[30]+0x0000000Cu; // 8022C130
  c->r[4]=0u+0x804C0000u; // 8022C134
  c->r[4]=c->r[4]+0x000024A0u; // 8022C138
  c->lr=0x8022C140u; f_8004A65C(c); // 8022C13C
  cmps(c,0,(int32_t)c->r[29],7); // 8022C140
  if (!crb(c,2)) { goto L_8022C184; } // 8022C144
  c->r[3]=c->r[1]+0x000000D0u; // 8022C148
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C14C
  {uint32_t ea=c->r[30]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C150
  c->f[3]=c->f[1]; // 8022C154
  c->lr=0x8022C15Cu; f_8004B0A8(c); // 8022C158
  c->r[3]=c->r[1]+0x0000002Cu; // 8022C15C
  c->r[4]=c->r[1]+0x000000D0u; // 8022C160
  c->r[5]=0u+0x804C0000u; // 8022C164
  c->r[5]=c->r[5]+0x00002470u; // 8022C168
  c->lr=0x8022C170u; f_8026CFE0(c); // 8022C16C
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C170
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8022C174
  c->r[3]=c->r[30]|c->r[30]; // 8022C178
  c->r[4]=c->r[1]+0x0000002Cu; // 8022C17C
  c->lr=0x8022C184u; f_8005C110(c); // 8022C180
L_8022C184:;
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C184
  {uint32_t ea=c->r[2]+0xFFFF99E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C188
  fcmp(c,0,c->f[1],c->f[0]); // 8022C18C
  if (!crb(c,0)) { goto L_8022C1AC; } // 8022C190
  {uint32_t ea=c->r[2]+0xFFFF99ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C194
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 8022C198
  c->r[3]=c->r[28]+0x00080000u; // 8022C19C
  c->r[3]=R32(c->r[3]+0xFFFF8958u); // 8022C1A0
  c->r[4]=c->r[30]+0x00000020u; // 8022C1A4
  c->lr=0x8022C1ACu; f_80183CB4(c); // 8022C1A8
L_8022C1AC:;
  c->r[3]=c->r[28]+0x00080000u; // 8022C1AC
  c->r[3]=R32(c->r[3]+0xFFFF8958u); // 8022C1B0
  c->lr=0x8022C1B8u; f_8007B51C(c); // 8022C1B4
  c->r[4]=c->r[3]|c->r[3]; // 8022C1B8
  c->r[3]=c->r[30]+0x00000020u; // 8022C1BC
  c->lr=0x8022C1C4u; f_8004A65C(c); // 8022C1C0
  c->lr=0x8022C1C8u; f_80078B6C(c); // 8022C1C4
  c->lr=0x8022C1CCu; f_8018F91C(c); // 8022C1C8
  c->r[3]=c->r[30]+0x0000000Cu; // 8022C1CC
  c->r[4]=c->r[30]|c->r[30]; // 8022C1D0
  {uint32_t ea=c->r[30]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C1D4
  {uint32_t ea=c->r[30]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C1D8
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 8022C1DC
  c->lr=0x8022C1E4u; f_8004E330(c); // 8022C1E0
  {uint32_t ea=c->r[30]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C1E4
  c->f[0]=-c->f[0]; // 8022C1E8
  {uint32_t ea=c->r[30]+0x00000010u; WF32(ea,c->f[0]);} // 8022C1EC
  c->r[3]=c->r[28]+0x00080000u; // 8022C1F0
  c->r[3]=R32(c->r[3]+0xFFFF8958u); // 8022C1F4
  c->r[4]=c->r[30]+0x0000000Cu; // 8022C1F8
  c->lr=0x8022C200u; f_80180F74(c); // 8022C1FC
  c->r[3]=c->r[28]+0x00070000u; // 8022C200
  c->r[3]=c->r[3]+0x000065A4u; // 8022C204
  c->r[4]=c->r[30]+0x00000020u; // 8022C208
  c->lr=0x8022C210u; f_8005658C(c); // 8022C20C
  c->r[3]=c->r[1]+0x00000068u; // 8022C210
  c->lr=0x8022C218u; f_8004B0A0(c); // 8022C214
  c->r[3]=c->r[1]+0x00000014u; // 8022C218
  c->lr=0x8022C220u; f_8004B0A4(c); // 8022C21C
  c->r[3]=c->r[1]+0x00000008u; // 8022C220
  c->lr=0x8022C228u; f_8004B0A4(c); // 8022C224
  c->r[3]=c->r[1]+0x00000038u; // 8022C228
  c->lr=0x8022C230u; f_8004B0A4(c); // 8022C22C
  c->r[3]=c->r[1]+0x00000044u; // 8022C230
  c->lr=0x8022C238u; f_8004B0A4(c); // 8022C234
  c->r[3]=c->r[28]+0x00070000u; // 8022C238
  c->r[3]=c->r[3]+0x00006580u; // 8022C23C
  c->r[4]=c->r[1]+0x00000068u; // 8022C240
  c->r[5]=0u+0x00000000u; // 8022C244
  c->lr=0x8022C24Cu; f_800785B0(c); // 8022C248
  {uint32_t ea=c->r[1]+0x00000074u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C24C
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 8022C250
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C254
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8022C258
  {uint32_t ea=c->r[1]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C25C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8022C260
  c->r[3]=c->r[1]+0x00000038u; // 8022C264
  c->r[4]=c->r[1]+0x00000014u; // 8022C268
  c->lr=0x8022C270u; f_8004A65C(c); // 8022C26C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C270
  {uint32_t ea=c->r[2]+0xFFFF99D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C274
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8022C278
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8022C27C
  c->r[3]=c->r[1]+0x00000044u; // 8022C280
  c->r[4]=c->r[1]+0x00000014u; // 8022C284
  c->lr=0x8022C28Cu; f_8004A65C(c); // 8022C288
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C28C
  {uint32_t ea=c->r[2]+0xFFFF99F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C290
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8022C294
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8022C298
  c->lr=0x8022C2A0u; f_80078B6C(c); // 8022C29C
  c->r[4]=c->r[1]+0x00000038u; // 8022C2A0
  c->r[5]=c->r[1]+0x00000044u; // 8022C2A4
  c->r[6]=c->r[1]+0x00000008u; // 8022C2A8
  c->lr=0x8022C2B0u; f_8018F94C(c); // 8022C2AC
  cmps(c,0,(int32_t)c->r[3],0); // 8022C2B0
  if (crb(c,2)) { goto L_8022C2C8; } // 8022C2B4
  c->r[3]=c->r[1]+0x00000014u; // 8022C2B8
  c->r[4]=c->r[1]+0x00000008u; // 8022C2BC
  c->lr=0x8022C2C4u; f_8004A65C(c); // 8022C2C0
  goto L_8022C2E0; // 8022C2C4
L_8022C2C8:;
  c->r[3]=c->r[28]+0x00070000u; // 8022C2C8
  c->r[3]=c->r[3]+0x000065A4u; // 8022C2CC
  c->r[4]=c->r[1]+0x00000008u; // 8022C2D0
  c->lr=0x8022C2D8u; f_8006E4CC(c); // 8022C2D4
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022C2D8
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 8022C2DC
L_8022C2E0:;
  c->r[3]=c->r[28]+0x00070000u; // 8022C2E0
  c->r[3]=c->r[3]+0x00006580u; // 8022C2E4
  c->r[4]=c->r[1]+0x00000014u; // 8022C2E8
  c->lr=0x8022C2F0u; f_80078A20(c); // 8022C2EC
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 8022C2F0
  c->r[30]=R32(c->r[1]+0x00000108u); // 8022C2F4
  c->r[29]=R32(c->r[1]+0x00000104u); // 8022C2F8
  c->r[28]=R32(c->r[1]+0x00000100u); // 8022C2FC
  c->r[0]=R32(c->r[1]+0x00000114u); // 8022C300
  c->lr=c->r[0]; // 8022C304
  c->r[1]=c->r[1]+0x00000110u; // 8022C308
  return; // 8022C30C
}

// fn_8022C310
void f_8022C310(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C310
  c->r[0]=c->lr; // 8022C314
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022C318
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022C31C
  c->r[31]=c->r[3]|c->r[3]; // 8022C320
  c->lr=0x8022C328u; f_80078A88(c); // 8022C324
  c->r[3]=0u+0x80480000u; // 8022C328
  c->r[0]=c->r[3]+0x00000030u; // 8022C32C
  W32(c->r[31]+0x00000024u,c->r[0]); // 8022C330
  c->r[3]=c->r[31]|c->r[31]; // 8022C334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022C338
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022C33C
  c->lr=c->r[0]; // 8022C340
  c->r[1]=c->r[1]+0x00000010u; // 8022C344
  return; // 8022C348
}

// fn_8022C34C
void f_8022C34C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C34C
  c->r[0]=c->lr; // 8022C350
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022C354
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022C358
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022C35C
  c->r[30]=c->r[3]|c->r[3]; // 8022C360
  c->r[31]=c->r[4]|c->r[4]; // 8022C364
  cmps(c,0,(int32_t)c->r[3],0); // 8022C368
  if (crb(c,2)) { goto L_8022C38C; } // 8022C36C
  c->r[4]=0u+0x00000000u; // 8022C370
  c->lr=0x8022C378u; f_80183148(c); // 8022C374
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8022C378
  cmps(c,0,(int32_t)c->r[0],0); // 8022C37C
  if (!crb(c,1)) { goto L_8022C38C; } // 8022C380
  c->r[3]=c->r[30]|c->r[30]; // 8022C384
  c->lr=0x8022C38Cu; f_80047B20(c); // 8022C388
L_8022C38C:;
  c->r[3]=c->r[30]|c->r[30]; // 8022C38C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022C390
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022C394
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022C398
  c->lr=c->r[0]; // 8022C39C
  c->r[1]=c->r[1]+0x00000010u; // 8022C3A0
  return; // 8022C3A4
}

// fn_8022C3A8
void f_8022C3A8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00070000u; // 8022C3A8
  c->r[3]=R32(c->r[3]+0x0000654Cu); // 8022C3AC
  return; // 8022C3B0
}

// fn_8022C3B4
void f_8022C3B4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022C3B4
  c->r[3]=c->r[3]+0xFFFF814Cu; // 8022C3B8
  return; // 8022C3BC
}

// fn_8022C3C0
void f_8022C3C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C3C0
  c->r[0]=c->lr; // 8022C3C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022C3C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022C3CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022C3D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022C3D4
  c->r[29]=c->r[3]|c->r[3]; // 8022C3D8
  c->r[30]=c->r[29]|c->r[29]; // 8022C3DC
  c->r[31]=c->r[3]+0x00000024u; // 8022C3E0
L_8022C3E4:;
  c->r[3]=c->r[30]|c->r[30]; // 8022C3E4
  c->lr=0x8022C3ECu; f_8004B0A4(c); // 8022C3E8
  c->r[30]=c->r[30]+0x0000000Cu; // 8022C3EC
  cmpu(c,0,c->r[30],c->r[31]); // 8022C3F0
  if (crb(c,0)) { IRQCHK(c); goto L_8022C3E4; } // 8022C3F4
  c->r[3]=c->r[31]|c->r[31]; // 8022C3F8
  c->lr=0x8022C400u; f_8004B0A4(c); // 8022C3FC
  c->r[3]=c->r[29]|c->r[29]; // 8022C400
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022C404
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022C408
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022C40C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022C410
  c->lr=c->r[0]; // 8022C414
  c->r[1]=c->r[1]+0x00000020u; // 8022C418
  return; // 8022C41C
}

// fn_8022C420
void f_8022C420(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8022C420
  return; // 8022C424
}

// fn_8022C428
void f_8022C428(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8022C428
  return; // 8022C42C
}

// fn_8022C430
void f_8022C430(Ctx* __restrict c) {
  c->r[3]=0u+0x00000000u; // 8022C430
  return; // 8022C434
}

// fn_8022C438
void f_8022C438(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8022C438
  c->r[3]=c->r[13]+0xFFFFA510u; // 8022C43C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8022C440
  return; // 8022C444
}

// fn_8022C448
void f_8022C448(Ctx* __restrict c) {
  f_8022C458(c); return; // 8022C448
}

// fn_8022C44C
void f_8022C44C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000034u); // 8022C44C
  c->r[3]=R32(c->r[3]+0x00000008u); // 8022C450
  return; // 8022C454
}

// fn_8022C458
void f_8022C458(Ctx* __restrict c) {
  c->r[5]=R32(c->r[3]+0x00000038u); // 8022C458
  c->r[3]=R32(c->r[3]+0x00000034u); // 8022C45C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8022C460
  c->r[0]=c->r[4]-c->r[0]; // 8022C464
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)40); // 8022C468
  c->r[3]=c->r[5]+c->r[0]; // 8022C46C
  return; // 8022C470
}

// fn_8022C474
void f_8022C474(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C474
  c->r[0]=c->lr; // 8022C478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022C47C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022C480
  c->r[31]=c->r[3]|c->r[3]; // 8022C484
  c->lr=0x8022C48Cu; f_801ECD20(c); // 8022C488
  c->r[3]=0u+0x80480000u; // 8022C48C
  c->r[0]=c->r[3]+0x000006A8u; // 8022C490
  W32(c->r[31]+0x00000058u,c->r[0]); // 8022C494
  c->r[3]=0u+0x00000001u; // 8022C498
  c->r[4]=0u+0x80480000u; // 8022C49C
  c->r[4]=c->r[4]+0x000001DCu; // 8022C4A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022C4A4
  c->lr=0x8022C4ACu; f_803D3760(c); // 8022C4A8
  c->r[5]=0u+0x00000000u; // 8022C4AC
  c->r[4]=c->r[31]+0x00010000u; // 8022C4B0
  W32(c->r[4]+0xFFFF8288u,c->r[5]); // 8022C4B4
  W32(c->r[4]+0xFFFF8298u,c->r[5]); // 8022C4B8
  W32(c->r[4]+0xFFFF8170u,c->r[5]); // 8022C4BC
  W32(c->r[4]+0xFFFF8174u,c->r[5]); // 8022C4C0
  W32(c->r[4]+0xFFFF816Cu,c->r[5]); // 8022C4C4
  W32(c->r[4]+0xFFFF81B0u,c->r[5]); // 8022C4C8
  W32(c->r[4]+0xFFFF8178u,c->r[5]); // 8022C4CC
  W32(c->r[4]+0xFFFF8168u,c->r[5]); // 8022C4D0
  W32(c->r[4]+0xFFFF8190u,c->r[5]); // 8022C4D4
  W16(c->r[4]+0xFFFF8290u,c->r[5]); // 8022C4D8
  c->r[0]=0u+0x00000002u; // 8022C4DC
  W32(c->r[4]+0xFFFF828Cu,c->r[0]); // 8022C4E0
  W16(c->r[4]+0xFFFF81C4u,c->r[5]); // 8022C4E4
  W32(c->r[4]+0xFFFF817Cu,c->r[5]); // 8022C4E8
  c->r[0]=0u+0xFFFFFFFFu; // 8022C4EC
  W16(c->r[4]+0xFFFF8276u,c->r[0]); // 8022C4F0
  W16(c->r[4]+0xFFFF827Eu,c->r[0]); // 8022C4F4
  c->r[0]=0u+0x00000001u; // 8022C4F8
  W32(c->r[4]+0xFFFF8180u,c->r[0]); // 8022C4FC
  W32(c->r[4]+0xFFFF818Cu,c->r[5]); // 8022C500
  W32(c->r[4]+0xFFFF8188u,c->r[5]); // 8022C504
  W32(c->r[4]+0xFFFF819Cu,c->r[5]); // 8022C508
  W32(c->r[4]+0xFFFF81A0u,c->r[5]); // 8022C50C
  W32(c->r[4]+0xFFFF81A4u,c->r[5]); // 8022C510
  W32(c->r[4]+0xFFFF8218u,c->r[5]); // 8022C514
  W32(c->r[4]+0xFFFF8280u,c->r[5]); // 8022C518
  W32(c->r[4]+0xFFFF821Cu,c->r[5]); // 8022C51C
  W32(c->r[4]+0xFFFF8230u,c->r[5]); // 8022C520
  W32(c->r[4]+0xFFFF8220u,c->r[5]); // 8022C524
  W32(c->r[4]+0xFFFF8234u,c->r[5]); // 8022C528
  W32(c->r[4]+0xFFFF8224u,c->r[5]); // 8022C52C
  W32(c->r[4]+0xFFFF8228u,c->r[5]); // 8022C530
  W32(c->r[4]+0xFFFF822Cu,c->r[5]); // 8022C534
  c->r[0]=0u+0x00000014u; // 8022C538
  W32(c->r[4]+0xFFFF82B0u,c->r[0]); // 8022C53C
  W32(c->r[4]+0xFFFF82B4u,c->r[0]); // 8022C540
  W32(c->r[4]+0xFFFF8194u,c->r[5]); // 8022C544
  W32(c->r[4]+0xFFFF8198u,c->r[5]); // 8022C548
  W32(c->r[4]+0xFFFF81A8u,c->r[5]); // 8022C54C
  W32(c->r[4]+0xFFFF81ACu,c->r[5]); // 8022C550
  W32(c->r[4]+0xFFFF81B4u,c->r[5]); // 8022C554
  W32(c->r[4]+0xFFFF81B8u,c->r[5]); // 8022C558
  W32(c->r[4]+0xFFFF81BCu,c->r[5]); // 8022C55C
  W32(c->r[4]+0xFFFF81C0u,c->r[5]); // 8022C560
  W32(c->r[4]+0xFFFF81C8u,c->r[5]); // 8022C564
  W32(c->r[4]+0xFFFF81CCu,c->r[5]); // 8022C568
  W32(c->r[4]+0xFFFF81D0u,c->r[5]); // 8022C56C
  W32(c->r[4]+0xFFFF81D4u,c->r[5]); // 8022C570
  W32(c->r[4]+0xFFFF81D8u,c->r[5]); // 8022C574
  W32(c->r[4]+0xFFFF81DCu,c->r[5]); // 8022C578
  W32(c->r[4]+0xFFFF81E0u,c->r[5]); // 8022C57C
  W32(c->r[4]+0xFFFF81E4u,c->r[5]); // 8022C580
  W32(c->r[4]+0xFFFF81E8u,c->r[5]); // 8022C584
  W32(c->r[4]+0xFFFF81ECu,c->r[5]); // 8022C588
  c->r[6]=c->r[31]+0x00000014u; // 8022C58C
  c->r[3]=c->r[6]+0x00010000u; // 8022C590
  W32(c->r[3]+0xFFFF81DCu,c->r[5]); // 8022C594
  W32(c->r[3]+0xFFFF81E0u,c->r[5]); // 8022C598
  W32(c->r[3]+0xFFFF81E4u,c->r[5]); // 8022C59C
  W32(c->r[3]+0xFFFF81E8u,c->r[5]); // 8022C5A0
  W32(c->r[3]+0xFFFF81ECu,c->r[5]); // 8022C5A4
  c->r[6]=c->r[6]+0x00000014u; // 8022C5A8
  c->r[3]=c->r[6]+0x00010000u; // 8022C5AC
  W32(c->r[3]+0xFFFF81DCu,c->r[5]); // 8022C5B0
  W32(c->r[3]+0xFFFF81E0u,c->r[5]); // 8022C5B4
  W32(c->r[3]+0xFFFF81E4u,c->r[5]); // 8022C5B8
  W32(c->r[3]+0xFFFF81E8u,c->r[5]); // 8022C5BC
  W32(c->r[3]+0xFFFF81ECu,c->r[5]); // 8022C5C0
  W32(c->r[4]+0xFFFF8268u,c->r[5]); // 8022C5C4
  W32(c->r[4]+0xFFFF8270u,c->r[5]); // 8022C5C8
  W32(c->r[4]+0xFFFF8278u,c->r[5]); // 8022C5CC
  W32(c->r[4]+0xFFFF82A4u,c->r[5]); // 8022C5D0
  W32(c->r[4]+0xFFFF82A8u,c->r[5]); // 8022C5D4
  W32(c->r[4]+0xFFFF8264u,c->r[5]); // 8022C5D8
  c->r[3]=c->r[31]|c->r[31]; // 8022C5DC
  c->r[4]=0u+0x00000000u; // 8022C5E0
  c->lr=0x8022C5E8u; f_801EDEE0(c); // 8022C5E4
  c->r[3]=c->r[31]|c->r[31]; // 8022C5E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022C5EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022C5F0
  c->lr=c->r[0]; // 8022C5F4
  c->r[1]=c->r[1]+0x00000010u; // 8022C5F8
  return; // 8022C5FC
}

// fn_8022C600
void f_8022C600(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C600
  c->r[0]=c->lr; // 8022C604
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022C608
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022C60C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022C610
  c->r[30]=c->r[3]|c->r[3]; // 8022C614
  c->r[31]=c->r[4]|c->r[4]; // 8022C618
  cmps(c,0,(int32_t)c->r[3],0); // 8022C61C
  if (crb(c,2)) { goto L_8022C664; } // 8022C620
  c->r[4]=0u+0x80480000u; // 8022C624
  c->r[0]=c->r[4]+0x000006A8u; // 8022C628
  W32(c->r[3]+0x00000058u,c->r[0]); // 8022C62C
  c->r[3]=0u+0x00000001u; // 8022C630
  c->r[4]=0u+0x80480000u; // 8022C634
  c->r[4]=c->r[4]+0x00000200u; // 8022C638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022C63C
  c->lr=0x8022C644u; f_803D3760(c); // 8022C640
  c->r[3]=c->r[30]|c->r[30]; // 8022C644
  c->r[4]=0u+0x00000000u; // 8022C648
  c->lr=0x8022C650u; f_801ECF20(c); // 8022C64C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8022C650
  cmps(c,0,(int32_t)c->r[0],0); // 8022C654
  if (!crb(c,1)) { goto L_8022C664; } // 8022C658
  c->r[3]=c->r[30]|c->r[30]; // 8022C65C
  c->lr=0x8022C664u; f_80047B20(c); // 8022C660
L_8022C664:;
  c->r[3]=c->r[30]|c->r[30]; // 8022C664
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022C668
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022C66C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022C670
  c->lr=c->r[0]; // 8022C674
  c->r[1]=c->r[1]+0x00000010u; // 8022C678
  return; // 8022C67C
}

// fn_8022C680
void f_8022C680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C680
  c->r[0]=c->lr; // 8022C684
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022C688
  c->r[11]=c->r[1]+0x00000020u; // 8022C68C
  c->lr=0x8022C694u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022C690
  c->r[30]=c->r[3]|c->r[3]; // 8022C694
  c->lr=0x8022C69Cu; f_801E65AC(c); // 8022C698
  c->r[29]=c->r[3]|c->r[3]; // 8022C69C
  c->lr=0x8022C6A4u; f_80047C9C(c); // 8022C6A0
  c->lr=0x8022C6A8u; f_80065638(c); // 8022C6A4
  c->r[0]=c->r[3]&c->r[29]; // 8022C6A8
  c->r[3]=c->r[30]+0x00010000u; // 8022C6AC
  W32(c->r[3]+0xFFFF816Cu,c->r[0]); // 8022C6B0
  c->lr=0x8022C6B8u; f_801ECCEC(c); // 8022C6B4
  c->lr=0x8022C6BCu; f_801ECCF4(c); // 8022C6B8
  c->r[31]=c->r[3]|c->r[3]; // 8022C6BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022C6C0
  cmps(c,0,(int32_t)c->r[0],2); // 8022C6C4
  if (crb(c,2)) { goto L_8022C6D0; } // 8022C6C8
  goto L_8022C728; // 8022C6CC
L_8022C6D0:;
  c->lr=0x8022C6D4u; f_801ECCEC(c); // 8022C6D0
  c->lr=0x8022C6D8u; f_80207A34(c); // 8022C6D4
  cmps(c,0,(int32_t)c->r[3],0); // 8022C6D8
  if (crb(c,2)) { goto L_8022C728; } // 8022C6DC
  c->r[3]=c->r[30]+0x00010000u; // 8022C6E0
  c->r[0]=R32(c->r[3]+0xFFFF8170u); // 8022C6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8022C6E8
  if (!crb(c,2)) { goto L_8022C728; } // 8022C6EC
  c->r[3]=0u+0x00000001u; // 8022C6F0
  c->r[4]=0u+0x80480000u; // 8022C6F4
  c->r[4]=c->r[4]+0x00000228u; // 8022C6F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022C6FC
  c->lr=0x8022C704u; f_803D3760(c); // 8022C700
  c->r[0]=0u+0x00000001u; // 8022C704
  c->r[3]=c->r[30]+0x00010000u; // 8022C708
  W32(c->r[3]+0xFFFF8170u,c->r[0]); // 8022C70C
  c->r[0]=0u+0x00000000u; // 8022C710
  W32(c->r[3]+0xFFFF817Cu,c->r[0]); // 8022C714
  c->r[3]=c->r[30]|c->r[30]; // 8022C718
  c->r[4]=0u+0x00000006u; // 8022C71C
  c->lr=0x8022C724u; f_801EDEE0(c); // 8022C720
  goto L_8022C90C; // 8022C724
L_8022C728:;
  c->r[3]=c->r[30]|c->r[30]; // 8022C728
  c->r[0]=R32(c->r[30]+0x000000B0u); // 8022C72C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 8022C730
  c->r[4]=0u+0x80430000u; // 8022C734
  c->r[0]=c->r[4]+0x00003EF8u; // 8022C738
  c->r[12]=c->r[0]+c->r[5]; // 8022C73C
  c->lr=0x8022C744u; f_802F09D0(c); // 8022C740
  c->r[0]=c->r[0]|0x00000000u; // 8022C744
  c->r[3]=c->r[30]+0x00010000u; // 8022C748
  c->r[0]=R32(c->r[3]+0xFFFF8178u); // 8022C74C
  cmps(c,0,(int32_t)c->r[0],0); // 8022C750
  if (crb(c,2)) { goto L_8022C81C; } // 8022C754
  c->r[0]=R32(c->r[3]+0xFFFF816Cu); // 8022C758
  cmps(c,0,(int32_t)c->r[0],0); // 8022C75C
  if (!crb(c,2)) { goto L_8022C81C; } // 8022C760
  c->r[0]=R32(c->r[3]+0xFFFF8298u); // 8022C764
  cmps(c,0,(int32_t)c->r[0],0); // 8022C768
  if (crb(c,2)) { goto L_8022C81C; } // 8022C76C
  c->lr=0x8022C774u; f_80047C90(c); // 8022C770
  c->r[4]=0u+0x00000000u; // 8022C774
  c->lr=0x8022C77Cu; f_80058EA4(c); // 8022C778
  c->r[4]=0u+0x00000800u; // 8022C77C
  c->lr=0x8022C784u; f_80057BD4(c); // 8022C780
  cmps(c,0,(int32_t)c->r[3],0); // 8022C784
  if (crb(c,2)) { goto L_8022C7B0; } // 8022C788
  c->r[3]=c->r[30]+0x00010000u; // 8022C78C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF8276u); // 8022C790
  cmps(c,0,(int32_t)c->r[4],0); // 8022C794
  if (crb(c,0)) { goto L_8022C81C; } // 8022C798
  cmps(c,0,(int32_t)c->r[4],20); // 8022C79C
  if (crb(c,1)) { goto L_8022C81C; } // 8022C7A0
  c->r[0]=c->r[4]+0x00000001u; // 8022C7A4
  W16(c->r[3]+0xFFFF8276u,c->r[0]); // 8022C7A8
  goto L_8022C81C; // 8022C7AC
L_8022C7B0:;
  c->r[5]=c->r[30]+0x00010000u; // 8022C7B0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0xFFFF8276u); // 8022C7B4
  c->r[0]=rotl(c->r[6],1)&0x00000001u; // 8022C7B8
  c->r[4]=c->r[0]^0x00000001u; // 8022C7BC
  c->r[3]=0u+0x00000000u; // 8022C7C0
  c->r[0]=R8(c->r[5]+0xFFFF8293u); // 8022C7C4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022C7C8
  cmps(c,0,(int32_t)c->r[0],1); // 8022C7CC
  if (!crb(c,2)) { goto L_8022C7E0; } // 8022C7D0
  cmps(c,0,(int32_t)c->r[6],-1); // 8022C7D4
  if (!crb(c,2)) { goto L_8022C7E0; } // 8022C7D8
  c->r[3]=0u+0x00000001u; // 8022C7DC
L_8022C7E0:;
  c->r[0]=c->r[4]|c->r[3]; // 8022C7E0
  cmps(c,0,(int32_t)c->r[0],0); // 8022C7E4
  if (crb(c,2)) { goto L_8022C81C; } // 8022C7E8
  c->r[0]=0u+0xFFFFFFFFu; // 8022C7EC
  c->r[3]=c->r[30]+0x00010000u; // 8022C7F0
  W16(c->r[3]+0xFFFF8276u,c->r[0]); // 8022C7F4
  c->r[3]=c->r[30]|c->r[30]; // 8022C7F8
  c->r[4]=0u+0x00000003u; // 8022C7FC
  c->r[5]=0u+0x00000002u; // 8022C800
  c->lr=0x8022C808u; f_8022F234(c); // 8022C804
  c->r[3]=c->r[30]+0x00010000u; // 8022C808
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 8022C80C
  c->r[4]=0u+0x00000000u; // 8022C810
  c->r[5]=0u+0x00000000u; // 8022C814
  c->lr=0x8022C81Cu; f_8021B358(c); // 8022C818
L_8022C81C:;
  c->r[26]=0u+0x00000000u; // 8022C81C
  c->r[27]=c->r[30]|c->r[30]; // 8022C820
L_8022C824:;
  c->r[3]=c->r[27]+0x00010000u; // 8022C824
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022C828
  cmps(c,0,(int32_t)c->r[3],0); // 8022C82C
  if (crb(c,2)) { goto L_8022C87C; } // 8022C830
  c->lr=0x8022C838u; f_80253A84(c); // 8022C834
  cmps(c,0,(int32_t)c->r[26],0); // 8022C838
  if (!crb(c,2)) { goto L_8022C848; } // 8022C83C
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000006FCu); // 8022C840
  goto L_8022C84C; // 8022C844
L_8022C848:;
  c->r[28]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000006FEu); // 8022C848
L_8022C84C:;
  c->r[3]=c->r[27]+0x00010000u; // 8022C84C
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022C850
  c->lr=0x8022C858u; f_80231054(c); // 8022C854
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 8022C858
  c->lr=0x8022C860u; f_802083FC(c); // 8022C85C
  c->r[4]=c->r[28]|c->r[28]; // 8022C860
  c->r[5]=c->r[29]|c->r[29]; // 8022C864
  c->lr=0x8022C86Cu; f_80218A44(c); // 8022C868
  c->r[4]=c->r[3]|c->r[3]; // 8022C86C
  c->r[3]=c->r[27]+0x00010000u; // 8022C870
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022C874
  c->lr=0x8022C87Cu; f_802539E0(c); // 8022C878
L_8022C87C:;
  c->r[27]=c->r[27]+0x00000004u; // 8022C87C
  c->r[26]=c->r[26]+0x00000001u; // 8022C880
  cmps(c,0,(int32_t)c->r[26],2); // 8022C884
  if (crb(c,0)) { IRQCHK(c); goto L_8022C824; } // 8022C888
  c->r[26]=0u+0x00000000u; // 8022C88C
  c->r[28]=c->r[30]|c->r[30]; // 8022C890
L_8022C894:;
  c->r[3]=c->r[28]+0x00010000u; // 8022C894
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022C898
  cmps(c,0,(int32_t)c->r[3],0); // 8022C89C
  if (crb(c,2)) { goto L_8022C8D8; } // 8022C8A0
  c->lr=0x8022C8A8u; f_80253A84(c); // 8022C8A4
  c->r[3]=c->r[28]+0x00010000u; // 8022C8A8
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022C8AC
  c->lr=0x8022C8B4u; f_80231054(c); // 8022C8B0
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 8022C8B4
  c->lr=0x8022C8BCu; f_802083FC(c); // 8022C8B8
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000006FCu); // 8022C8BC
  c->r[5]=c->r[29]|c->r[29]; // 8022C8C0
  c->lr=0x8022C8C8u; f_80218A44(c); // 8022C8C4
  c->r[4]=c->r[3]|c->r[3]; // 8022C8C8
  c->r[3]=c->r[28]+0x00010000u; // 8022C8CC
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022C8D0
  c->lr=0x8022C8D8u; f_802539E0(c); // 8022C8D4
L_8022C8D8:;
  c->r[28]=c->r[28]+0x00000004u; // 8022C8D8
  c->r[26]=c->r[26]+0x00000001u; // 8022C8DC
  cmps(c,0,(int32_t)c->r[26],3); // 8022C8E0
  if (crb(c,0)) { IRQCHK(c); goto L_8022C894; } // 8022C8E4
  c->r[3]=c->r[30]|c->r[30]; // 8022C8E8
  c->r[12]=R32(c->r[3]+0x00000058u); // 8022C8EC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8022C8F0
  c->ctr=c->r[12]; // 8022C8F4
  if (true) { c->lr=0x8022C8FCu; dispatch(c,c->ctr); } // 8022C8F8
  c->r[3]=c->r[30]|c->r[30]; // 8022C8FC
  c->lr=0x8022C904u; f_8022D2F4(c); // 8022C900
  c->r[3]=c->r[30]|c->r[30]; // 8022C904
  c->lr=0x8022C90Cu; f_801ED0E4(c); // 8022C908
L_8022C90C:;
  c->r[11]=c->r[1]+0x00000020u; // 8022C90C
  c->lr=0x8022C914u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022C910
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022C914
  c->lr=c->r[0]; // 8022C918
  c->r[1]=c->r[1]+0x00000020u; // 8022C91C
  return; // 8022C920
}

// fn_8022C924
void f_8022C924(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 8022C924
  f_801EDEE0(c); return; // 8022C928
}

// fn_8022C92C
void f_8022C92C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022C92C
  c->r[3]=R32(c->r[3]+0xFFFF8288u); // 8022C930
  return; // 8022C934
}

// fn_8022C938
void f_8022C938(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 8022C938
  c->r[3]=c->r[3]+0x00010000u; // 8022C93C
  W32(c->r[3]+0xFFFF8288u,c->r[0]); // 8022C940
  return; // 8022C944
}

// fn_8022C948
void f_8022C948(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 8022C948
  return; // 8022C94C
}

// fn_8022C950
void f_8022C950(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFD80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022C950
  c->r[0]=c->lr; // 8022C954
  W32(c->r[1]+0x00000284u,c->r[0]); // 8022C958
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[31]);} // 8022C95C
  {uint32_t ea=c->r[1]+0x00000278u; psq_store(c,31,ea,0,0);} // 8022C960
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[30]);} // 8022C964
  {uint32_t ea=c->r[1]+0x00000268u; psq_store(c,30,ea,0,0);} // 8022C968
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[29]);} // 8022C96C
  {uint32_t ea=c->r[1]+0x00000258u; psq_store(c,29,ea,0,0);} // 8022C970
  c->r[11]=c->r[1]+0x00000250u; // 8022C974
  c->lr=0x8022C97Cu; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022C978
  c->r[24]=c->r[3]|c->r[3]; // 8022C97C
  c->r[23]=0u+0x00000000u; // 8022C980
  c->lr=0x8022C988u; f_801ECCEC(c); // 8022C984
  c->lr=0x8022C98Cu; f_801ECCF4(c); // 8022C988
  c->r[26]=c->r[3]|c->r[3]; // 8022C98C
  c->lr=0x8022C994u; f_801ECCEC(c); // 8022C990
  c->lr=0x8022C998u; f_801ECCE4(c); // 8022C994
  c->r[31]=c->r[3]|c->r[3]; // 8022C998
  c->r[3]=0u+0x00000001u; // 8022C99C
  c->r[4]=0u+0x80480000u; // 8022C9A0
  c->r[4]=c->r[4]+0x00000268u; // 8022C9A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022C9A8
  c->lr=0x8022C9B0u; f_803D3760(c); // 8022C9AC
  c->r[3]=c->r[24]|c->r[24]; // 8022C9B0
  c->r[4]=0u+0x00000023u; // 8022C9B4
  c->r[5]=0u+0x00000000u; // 8022C9B8
  c->r[6]=0u+0x00000002u; // 8022C9BC
  c->r[7]=0u+0x00000003u; // 8022C9C0
  c->lr=0x8022C9C8u; f_801EDF08(c); // 8022C9C4
  c->r[4]=c->r[24]+0x00010000u; // 8022C9C8
  W32(c->r[4]+0xFFFF8190u,c->r[3]); // 8022C9CC
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022C9D0
  {uint32_t ea=c->r[2]+0xFFFF99FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022C9D4
  c->lr=0x8022C9DCu; f_8021B27C(c); // 8022C9D8
  c->r[3]=c->r[24]+0x00010000u; // 8022C9DC
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022C9E0
  c->r[4]=0u+0x00000002u; // 8022C9E4
  c->r[5]=0u+0x00000000u; // 8022C9E8
  c->lr=0x8022C9F0u; f_8021B47C(c); // 8022C9EC
  c->r[3]=c->r[24]+0x00010000u; // 8022C9F0
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022C9F4
  c->r[4]=0u+0x00000000u; // 8022C9F8
  c->lr=0x8022CA00u; f_8021B46C(c); // 8022C9FC
  c->r[25]=0u+0x00000000u; // 8022CA00
  c->r[21]=c->r[24]|c->r[24]; // 8022CA04
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[29]=RF64(ea);} // 8022CA08
  c->r[22]=0u+0x43300000u; // 8022CA0C
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[30]=c->ps1[30]=RF32(ea);} // 8022CA10
  {uint32_t ea=c->r[2]+0xFFFF9A00u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022CA14
L_8022CA18:;
  c->r[3]=c->r[24]|c->r[24]; // 8022CA18
  c->r[4]=0u+0x00000047u; // 8022CA1C
  c->r[5]=c->r[23]|c->r[23]; // 8022CA20
  c->r[6]=0u+0x00000002u; // 8022CA24
  c->r[7]=0u+0x00000004u; // 8022CA28
  c->lr=0x8022CA30u; f_801EDF08(c); // 8022CA2C
  c->r[4]=c->r[21]+0x00010000u; // 8022CA30
  W32(c->r[4]+0xFFFF81B4u,c->r[3]); // 8022CA34
  c->r[3]=R32(c->r[4]+0xFFFF81B4u); // 8022CA38
  c->r[0]=c->r[25]^0x80000000u; // 8022CA3C
  W32(c->r[1]+0x0000020Cu,c->r[0]); // 8022CA40
  W32(c->r[1]+0x00000208u,c->r[22]); // 8022CA44
  {uint32_t ea=c->r[1]+0x00000208u; c->f[0]=RF64(ea);} // 8022CA48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8022CA4C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8022CA50
  c->f[1]=c->ps1[1]=S(c->f[31]-c->f[0]); // 8022CA54
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CA58
  c->lr=0x8022CA60u; f_8021B27C(c); // 8022CA5C
  c->r[3]=c->r[21]+0x00010000u; // 8022CA60
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022CA64
  c->r[4]=0u+0x00000005u; // 8022CA68
  c->r[5]=0u+0x00000000u; // 8022CA6C
  c->lr=0x8022CA74u; f_8021B47C(c); // 8022CA70
  c->r[3]=c->r[21]+0x00010000u; // 8022CA74
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022CA78
  c->r[4]=0u+0x00000000u; // 8022CA7C
  c->lr=0x8022CA84u; f_8021B46C(c); // 8022CA80
  cmps(c,0,(int32_t)c->r[23],0); // 8022CA84
  if (!crb(c,2)) { goto L_8022CA94; } // 8022CA88
  c->r[3]=c->r[21]+0x00010000u; // 8022CA8C
  c->r[23]=R32(c->r[3]+0xFFFF81B4u); // 8022CA90
L_8022CA94:;
  c->r[21]=c->r[21]+0x00000004u; // 8022CA94
  c->r[25]=c->r[25]+0x00000001u; // 8022CA98
  cmps(c,0,(int32_t)c->r[25],4); // 8022CA9C
  if (crb(c,0)) { IRQCHK(c); goto L_8022CA18; } // 8022CAA0
  c->r[3]=c->r[24]|c->r[24]; // 8022CAA4
  c->r[4]=0u+0x00000019u; // 8022CAA8
  c->r[5]=0u+0x00000000u; // 8022CAAC
  c->r[6]=0u+0x00000002u; // 8022CAB0
  c->r[7]=0u+0x00000003u; // 8022CAB4
  c->lr=0x8022CABCu; f_801EDF08(c); // 8022CAB8
  c->r[4]=c->r[24]+0x00010000u; // 8022CABC
  W32(c->r[4]+0xFFFF81D8u,c->r[3]); // 8022CAC0
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CAC4
  {uint32_t ea=c->r[2]+0xFFFF9A08u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CAC8
  c->lr=0x8022CAD0u; f_8021B27C(c); // 8022CACC
  c->r[3]=c->r[24]+0x00010000u; // 8022CAD0
  c->r[3]=R32(c->r[3]+0xFFFF81D8u); // 8022CAD4
  c->r[4]=0u+0x0000000Au; // 8022CAD8
  c->r[5]=0u+0x00000000u; // 8022CADC
  c->lr=0x8022CAE4u; f_8021B47C(c); // 8022CAE0
  c->r[3]=c->r[24]+0x00010000u; // 8022CAE4
  c->r[3]=R32(c->r[3]+0xFFFF81D8u); // 8022CAE8
  c->r[4]=0u+0x00000000u; // 8022CAEC
  c->lr=0x8022CAF4u; f_8021B46C(c); // 8022CAF0
  c->r[3]=c->r[24]+0x00010000u; // 8022CAF4
  c->r[0]=R32(c->r[3]+0xFFFF81D8u); // 8022CAF8
  W32(c->r[3]+0xFFFF82A4u,c->r[0]); // 8022CAFC
  c->lr=0x8022CB04u; f_80056B5C(c); // 8022CB00
  c->r[21]=c->r[3]|c->r[3]; // 8022CB04
  c->r[3]=c->r[24]|c->r[24]; // 8022CB08
  c->lr=0x8022CB10u; f_80065DB4(c); // 8022CB0C
  c->lr=0x8022CB14u; f_80056B54(c); // 8022CB10
  c->r[3]=0u+0x00000034u; // 8022CB14
  c->lr=0x8022CB1Cu; f_80047B64(c); // 8022CB18
  c->r[22]=c->r[3]|c->r[3]; // 8022CB1C
  cmps(c,0,(int32_t)c->r[3],0); // 8022CB20
  if (crb(c,2)) { goto L_8022CB3C; } // 8022CB24
  c->r[3]=c->r[24]|c->r[24]; // 8022CB28
  c->lr=0x8022CB30u; f_80065DB4(c); // 8022CB2C
  c->r[4]=c->r[3]|c->r[3]; // 8022CB30
  c->r[3]=c->r[22]|c->r[22]; // 8022CB34
  c->lr=0x8022CB3Cu; f_80257438(c); // 8022CB38
L_8022CB3C:;
  c->r[3]=c->r[24]+0x00010000u; // 8022CB3C
  W32(c->r[3]+0xFFFF819Cu,c->r[22]); // 8022CB40
  c->r[3]=c->r[21]|c->r[21]; // 8022CB44
  c->lr=0x8022CB4Cu; f_80056B54(c); // 8022CB48
  c->r[3]=c->r[24]+0x00010000u; // 8022CB4C
  c->r[3]=R32(c->r[3]+0xFFFF819Cu); // 8022CB50
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CB54
  c->f[2]=c->f[1]; // 8022CB58
  c->lr=0x8022CB60u; f_802575C8(c); // 8022CB5C
  c->r[3]=c->r[24]+0x00010000u; // 8022CB60
  c->r[3]=R32(c->r[3]+0xFFFF819Cu); // 8022CB64
  c->r[4]=0u+0x00000000u; // 8022CB68
  c->lr=0x8022CB70u; f_80257888(c); // 8022CB6C
  c->r[25]=0u+0x00000000u; // 8022CB70
  c->r[30]=c->r[24]|c->r[24]; // 8022CB74
  c->r[29]=c->r[26]|c->r[26]; // 8022CB78
  c->r[28]=c->r[26]+0x00000188u; // 8022CB7C
  c->r[27]=c->r[26]|c->r[26]; // 8022CB80
  c->r[23]=0u+0x00000000u; // 8022CB84
  c->r[22]=c->r[1]+0x00000008u; // 8022CB88
L_8022CB8C:;
  cmps(c,0,(int32_t)c->r[25],0); // 8022CB8C
  if (!crb(c,2)) { goto L_8022CBC4; } // 8022CB90
  c->r[3]=c->r[1]+0x00000008u; // 8022CB94
  c->r[4]=c->r[31]+0x0000004Cu; // 8022CB98
  c->r[5]=0u+0x00000008u; // 8022CB9C
  c->lr=0x8022CBA4u; f_8021E898(c); // 8022CBA0
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8022CBA4
  W8(c->r[22]+c->r[0],c->r[23]); // 8022CBA8
  c->r[3]=c->r[1]+0x00000108u; // 8022CBAC
  c->r[4]=c->r[13]+0xFFFFA520u; // 8022CBB0
  c->r[5]=c->r[22]|c->r[22]; // 8022CBB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022CBB8
  c->lr=0x8022CBC0u; f_802E7CC4(c); // 8022CBBC
  goto L_8022CC0C; // 8022CBC0
L_8022CBC4:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 8022CBC4
  cmps(c,0,(int32_t)c->r[0],2); // 8022CBC8
  if (!crb(c,2)) { goto L_8022CBEC; } // 8022CBCC
  c->r[3]=c->r[1]+0x00000008u; // 8022CBD0
  c->r[4]=c->r[26]+0x00000042u; // 8022CBD4
  c->r[5]=0u+0x00000008u; // 8022CBD8
  c->lr=0x8022CBE0u; f_8021E898(c); // 8022CBDC
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 8022CBE0
  W8(c->r[22]+c->r[0],c->r[23]); // 8022CBE4
  goto L_8022CBF8; // 8022CBE8
L_8022CBEC:;
  c->r[3]=c->r[1]+0x00000008u; // 8022CBEC
  c->r[4]=c->r[26]+0x0000022Cu; // 8022CBF0
  c->lr=0x8022CBF8u; f_802E9548(c); // 8022CBF4
L_8022CBF8:;
  c->r[3]=c->r[1]+0x00000108u; // 8022CBF8
  c->r[4]=c->r[13]+0xFFFFA520u; // 8022CBFC
  c->r[5]=c->r[1]+0x00000008u; // 8022CC00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022CC04
  c->lr=0x8022CC0Cu; f_802E7CC4(c); // 8022CC08
L_8022CC0C:;
  c->lr=0x8022CC10u; f_80056B5C(c); // 8022CC0C
  c->r[20]=c->r[3]|c->r[3]; // 8022CC10
  c->r[3]=c->r[24]|c->r[24]; // 8022CC14
  c->lr=0x8022CC1Cu; f_80065DB4(c); // 8022CC18
  c->lr=0x8022CC20u; f_80056B54(c); // 8022CC1C
  c->r[3]=0u+0x000000A8u; // 8022CC20
  c->lr=0x8022CC28u; f_80047B64(c); // 8022CC24
  c->r[21]=c->r[3]|c->r[3]; // 8022CC28
  cmps(c,0,(int32_t)c->r[3],0); // 8022CC2C
  if (crb(c,2)) { goto L_8022CC50; } // 8022CC30
  c->r[3]=c->r[24]|c->r[24]; // 8022CC34
  c->lr=0x8022CC3Cu; f_80065DB4(c); // 8022CC38
  c->r[4]=c->r[3]|c->r[3]; // 8022CC3C
  c->r[3]=c->r[21]|c->r[21]; // 8022CC40
  c->r[5]=c->r[25]|c->r[25]; // 8022CC44
  c->r[6]=c->r[1]+0x00000108u; // 8022CC48
  c->lr=0x8022CC50u; f_80257D78(c); // 8022CC4C
L_8022CC50:;
  c->r[3]=c->r[30]+0x00010000u; // 8022CC50
  W32(c->r[3]+0xFFFF8194u,c->r[21]); // 8022CC54
  c->r[3]=c->r[20]|c->r[20]; // 8022CC58
  c->lr=0x8022CC60u; f_80056B54(c); // 8022CC5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x000006BCu); // 8022CC60
  c->r[3]=c->r[30]+0x00010000u; // 8022CC64
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022CC68
  cmps(c,0,(int32_t)c->r[0],0); // 8022CC6C
  c->r[4]=0u+0x00000014u; // 8022CC70
  if (crb(c,2)) { goto L_8022CC7C; } // 8022CC74
  c->r[4]=c->r[0]|c->r[0]; // 8022CC78
L_8022CC7C:;
  c->lr=0x8022CC80u; f_802583A0(c); // 8022CC7C
  c->r[3]=c->r[30]+0x00010000u; // 8022CC80
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022CC84
  c->r[4]=0u+0x00000000u; // 8022CC88
  c->lr=0x8022CC90u; f_80258628(c); // 8022CC8C
  W16(c->r[28]+0x00000000u,c->r[23]); // 8022CC90
  W32(c->r[28]+0x0000000Cu,c->r[23]); // 8022CC94
  W32(c->r[28]+0x00000010u,c->r[23]); // 8022CC98
  W32(c->r[28]+0x00000014u,c->r[23]); // 8022CC9C
  W32(c->r[28]+0x00000018u,c->r[23]); // 8022CCA0
  W32(c->r[28]+0x0000001Cu,c->r[23]); // 8022CCA4
  W32(c->r[28]+0x00000020u,c->r[23]); // 8022CCA8
  W32(c->r[28]+0x00000024u,c->r[23]); // 8022CCAC
  W32(c->r[28]+0x00000028u,c->r[23]); // 8022CCB0
  W32(c->r[28]+0x0000002Cu,c->r[23]); // 8022CCB4
  W32(c->r[28]+0x00000030u,c->r[23]); // 8022CCB8
  W16(c->r[28]+0x00000002u,c->r[23]); // 8022CCBC
  W16(c->r[28]+0x00000004u,c->r[23]); // 8022CCC0
  W16(c->r[28]+0x00000006u,c->r[23]); // 8022CCC4
  W16(c->r[28]+0x00000008u,c->r[23]); // 8022CCC8
  c->r[20]=R32(c->r[27]+0x000006C0u); // 8022CCCC
  cmps(c,0,(int32_t)c->r[20],0); // 8022CCD0
  if (crb(c,2)) { goto L_8022CD28; } // 8022CCD4
  c->r[21]=0u+0x00000000u; // 8022CCD8
L_8022CCDC:;
  c->r[3]=c->r[24]|c->r[24]; // 8022CCDC
  c->r[4]=0u+0x0000000Au; // 8022CCE0
  c->r[5]=addc(c,~c->r[21],0x00000003u,1); // 8022CCE4
  c->lr=0x8022CCECu; f_8022D9D4(c); // 8022CCE8
  c->r[19]=divwu(c->r[20],c->r[4]); // 8022CCEC
  c->r[0]=(uint32_t)((int32_t)c->r[19]*(int32_t)c->r[4]); // 8022CCF0
  c->r[20]=c->r[20]-c->r[0]; // 8022CCF4
  c->r[18]=0u+0x00000000u; // 8022CCF8
  goto L_8022CD14; // 8022CCFC
L_8022CD00:;
  c->lr=0x8022CD04u; f_802082D4(c); // 8022CD00
  c->r[4]=c->r[28]|c->r[28]; // 8022CD04
  c->r[5]=c->r[21]+0x00000001u; // 8022CD08
  c->lr=0x8022CD10u; f_8021A934(c); // 8022CD0C
  c->r[18]=c->r[18]+0x00000001u; // 8022CD10
L_8022CD14:;
  cmpu(c,0,c->r[18],c->r[19]); // 8022CD14
  if (crb(c,0)) { IRQCHK(c); goto L_8022CD00; } // 8022CD18
  c->r[21]=c->r[21]+0x00000001u; // 8022CD1C
  cmpu(c,0,c->r[21],0x00000004u); // 8022CD20
  if (crb(c,0)) { IRQCHK(c); goto L_8022CCDC; } // 8022CD24
L_8022CD28:;
  c->r[30]=c->r[30]+0x00000004u; // 8022CD28
  c->r[29]=c->r[29]+0x00000002u; // 8022CD2C
  c->r[28]=c->r[28]+0x0000018Cu; // 8022CD30
  c->r[27]=c->r[27]+0x00000004u; // 8022CD34
  c->r[25]=c->r[25]+0x00000001u; // 8022CD38
  cmps(c,0,(int32_t)c->r[25],2); // 8022CD3C
  if (crb(c,0)) { IRQCHK(c); goto L_8022CB8C; } // 8022CD40
  c->lr=0x8022CD48u; f_80056B5C(c); // 8022CD44
  c->r[18]=c->r[3]|c->r[3]; // 8022CD48
  c->r[3]=c->r[24]|c->r[24]; // 8022CD4C
  c->lr=0x8022CD54u; f_80065DB4(c); // 8022CD50
  c->lr=0x8022CD58u; f_80056B54(c); // 8022CD54
  c->r[3]=0u+0x00000018u; // 8022CD58
  c->lr=0x8022CD60u; f_80047B64(c); // 8022CD5C
  c->r[21]=c->r[3]|c->r[3]; // 8022CD60
  cmps(c,0,(int32_t)c->r[3],0); // 8022CD64
  if (crb(c,2)) { goto L_8022CD84; } // 8022CD68
  c->r[3]=c->r[24]|c->r[24]; // 8022CD6C
  c->lr=0x8022CD74u; f_80065DB4(c); // 8022CD70
  c->r[4]=c->r[3]|c->r[3]; // 8022CD74
  c->r[3]=c->r[21]|c->r[21]; // 8022CD78
  c->r[5]=0u+0x0000000Fu; // 8022CD7C
  c->lr=0x8022CD84u; f_80256918(c); // 8022CD80
L_8022CD84:;
  c->r[3]=c->r[24]+0x00010000u; // 8022CD84
  W32(c->r[3]+0xFFFF81A0u,c->r[21]); // 8022CD88
  c->r[3]=c->r[18]|c->r[18]; // 8022CD8C
  c->lr=0x8022CD94u; f_80056B54(c); // 8022CD90
  c->r[3]=c->r[24]+0x00010000u; // 8022CD94
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 8022CD98
  {uint32_t ea=c->r[2]+0xFFFF9A0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CD9C
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CDA0
  c->lr=0x8022CDA8u; f_80256A64(c); // 8022CDA4
  c->r[3]=c->r[24]+0x00010000u; // 8022CDA8
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 8022CDAC
  c->r[4]=0u+0x00000000u; // 8022CDB0
  c->lr=0x8022CDB8u; f_80256B04(c); // 8022CDB4
  c->lr=0x8022CDBCu; f_80056B5C(c); // 8022CDB8
  c->r[18]=c->r[3]|c->r[3]; // 8022CDBC
  c->r[3]=c->r[24]|c->r[24]; // 8022CDC0
  c->lr=0x8022CDC8u; f_80065DB4(c); // 8022CDC4
  c->lr=0x8022CDCCu; f_80056B54(c); // 8022CDC8
  c->r[3]=0u+0x00000024u; // 8022CDCC
  c->lr=0x8022CDD4u; f_80047B64(c); // 8022CDD0
  c->r[21]=c->r[3]|c->r[3]; // 8022CDD4
  cmps(c,0,(int32_t)c->r[3],0); // 8022CDD8
  if (crb(c,2)) { goto L_8022CDF4; } // 8022CDDC
  c->r[3]=c->r[24]|c->r[24]; // 8022CDE0
  c->lr=0x8022CDE8u; f_80065DB4(c); // 8022CDE4
  c->r[4]=c->r[3]|c->r[3]; // 8022CDE8
  c->r[3]=c->r[21]|c->r[21]; // 8022CDEC
  c->lr=0x8022CDF4u; f_80256D5C(c); // 8022CDF0
L_8022CDF4:;
  c->r[3]=c->r[24]+0x00010000u; // 8022CDF4
  W32(c->r[3]+0xFFFF81A4u,c->r[21]); // 8022CDF8
  c->r[3]=c->r[18]|c->r[18]; // 8022CDFC
  c->lr=0x8022CE04u; f_80056B54(c); // 8022CE00
  c->r[3]=c->r[24]+0x00010000u; // 8022CE04
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8022CE08
  {uint32_t ea=c->r[2]+0xFFFF9A14u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CE0C
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CE10
  c->lr=0x8022CE18u; f_80256EF4(c); // 8022CE14
  c->r[3]=c->r[24]+0x00010000u; // 8022CE18
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8022CE1C
  c->r[4]=0u+0x00000000u; // 8022CE20
  c->lr=0x8022CE28u; f_80257114(c); // 8022CE24
  c->r[18]=0u+0x00000000u; // 8022CE28
  c->r[21]=c->r[24]|c->r[24]; // 8022CE2C
  c->r[25]=c->r[24]+0x00010000u; // 8022CE30
L_8022CE34:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022CE34
  c->r[4]=c->r[18]|c->r[18]; // 8022CE38
  c->lr=0x8022CE40u; f_801EF41C(c); // 8022CE3C
  c->r[4]=c->r[3]|c->r[3]; // 8022CE40
  c->r[3]=c->r[24]|c->r[24]; // 8022CE44
  c->r[5]=R32(c->r[25]+0xFFFF81D8u); // 8022CE48
  c->lr=0x8022CE50u; f_801EDFF4(c); // 8022CE4C
  c->r[4]=c->r[21]+0x00010000u; // 8022CE50
  W32(c->r[4]+0xFFFF81DCu,c->r[3]); // 8022CE54
  c->r[3]=R32(c->r[4]+0xFFFF81DCu); // 8022CE58
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CE5C
  {uint32_t ea=c->r[2]+0xFFFF9A18u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CE60
  c->r[4]=0u+0x00000000u; // 8022CE64
  c->lr=0x8022CE6Cu; f_802249E8(c); // 8022CE68
  c->r[3]=c->r[21]+0x00010000u; // 8022CE6C
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022CE70
  c->r[4]=0u+0x00000001u; // 8022CE74
  c->r[5]=0u+0x00000001u; // 8022CE78
  c->lr=0x8022CE80u; f_802249B4(c); // 8022CE7C
  c->r[3]=c->r[21]+0x00010000u; // 8022CE80
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022CE84
  {uint32_t ea=c->r[2]+0xFFFF9A1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CE88
  c->lr=0x8022CE90u; f_80224B98(c); // 8022CE8C
  c->r[3]=c->r[24]|c->r[24]; // 8022CE90
  c->r[4]=c->r[18]|c->r[18]; // 8022CE94
  c->r[5]=0u+0x00000000u; // 8022CE98
  c->lr=0x8022CEA0u; f_8022D6D0(c); // 8022CE9C
  c->r[21]=c->r[21]+0x00000004u; // 8022CEA0
  c->r[18]=c->r[18]+0x00000001u; // 8022CEA4
  cmps(c,0,(int32_t)c->r[18],15); // 8022CEA8
  if (crb(c,0)) { IRQCHK(c); goto L_8022CE34; } // 8022CEAC
  c->r[3]=c->r[24]|c->r[24]; // 8022CEB0
  c->r[4]=0u+0x00000020u; // 8022CEB4
  c->r[5]=0u+0x00000000u; // 8022CEB8
  c->r[6]=0u+0x00000002u; // 8022CEBC
  c->r[7]=0u+0x00000003u; // 8022CEC0
  c->lr=0x8022CEC8u; f_801EDF08(c); // 8022CEC4
  c->r[4]=c->r[24]+0x00010000u; // 8022CEC8
  W32(c->r[4]+0xFFFF81C8u,c->r[3]); // 8022CECC
  c->r[4]=0u+0x00000008u; // 8022CED0
  c->r[5]=0u+0x00000000u; // 8022CED4
  c->lr=0x8022CEDCu; f_8021B47C(c); // 8022CED8
  c->r[3]=c->r[24]+0x00010000u; // 8022CEDC
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 8022CEE0
  c->r[4]=0u+0x00000000u; // 8022CEE4
  c->lr=0x8022CEECu; f_8021B46C(c); // 8022CEE8
  c->r[3]=c->r[24]|c->r[24]; // 8022CEEC
  c->r[4]=0u+0x00000021u; // 8022CEF0
  c->r[5]=0u+0x00000000u; // 8022CEF4
  c->r[6]=0u+0x00000002u; // 8022CEF8
  c->r[7]=0u+0x00000003u; // 8022CEFC
  c->lr=0x8022CF04u; f_801EDF08(c); // 8022CF00
  c->r[4]=c->r[24]+0x00010000u; // 8022CF04
  W32(c->r[4]+0xFFFF81CCu,c->r[3]); // 8022CF08
  c->r[4]=0u+0x00000008u; // 8022CF0C
  c->r[5]=0u+0x00000000u; // 8022CF10
  c->lr=0x8022CF18u; f_8021B47C(c); // 8022CF14
  c->r[3]=c->r[24]+0x00010000u; // 8022CF18
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 8022CF1C
  c->r[4]=0u+0x00000000u; // 8022CF20
  c->lr=0x8022CF28u; f_8021B46C(c); // 8022CF24
  c->r[3]=c->r[24]|c->r[24]; // 8022CF28
  c->r[4]=0u+0x00000026u; // 8022CF2C
  c->r[5]=0u+0x00000000u; // 8022CF30
  c->r[6]=0u+0x00000002u; // 8022CF34
  c->r[7]=0u+0x00000003u; // 8022CF38
  c->lr=0x8022CF40u; f_801EDF08(c); // 8022CF3C
  c->r[4]=c->r[24]+0x00010000u; // 8022CF40
  W32(c->r[4]+0xFFFF8264u,c->r[3]); // 8022CF44
  c->r[4]=0u+0x00000000u; // 8022CF48
  c->r[5]=0u+0x00000000u; // 8022CF4C
  c->lr=0x8022CF54u; f_8021B47C(c); // 8022CF50
  c->r[3]=c->r[24]+0x00010000u; // 8022CF54
  c->r[3]=R32(c->r[3]+0xFFFF8264u); // 8022CF58
  c->r[4]=0u+0x00000000u; // 8022CF5C
  c->lr=0x8022CF64u; f_8021B46C(c); // 8022CF60
  c->r[18]=0u+0x00000000u; // 8022CF64
  c->r[22]=c->r[24]|c->r[24]; // 8022CF68
  c->r[3]=0u+0x80480000u; // 8022CF6C
  c->r[23]=c->r[3]+0x000001C4u; // 8022CF70
L_8022CF74:;
  c->lr=0x8022CF78u; f_80056B5C(c); // 8022CF74
  c->r[19]=c->r[3]|c->r[3]; // 8022CF78
  c->r[3]=c->r[24]|c->r[24]; // 8022CF7C
  c->lr=0x8022CF84u; f_80065DB4(c); // 8022CF80
  c->lr=0x8022CF88u; f_80056B54(c); // 8022CF84
  c->r[3]=0u+0x0000004Cu; // 8022CF88
  c->lr=0x8022CF90u; f_80047B64(c); // 8022CF8C
  c->r[21]=c->r[3]|c->r[3]; // 8022CF90
  cmps(c,0,(int32_t)c->r[3],0); // 8022CF94
  if (crb(c,2)) { goto L_8022CFBC; } // 8022CF98
  c->r[3]=c->r[24]|c->r[24]; // 8022CF9C
  c->lr=0x8022CFA4u; f_80065DB4(c); // 8022CFA0
  c->r[4]=c->r[3]|c->r[3]; // 8022CFA4
  c->r[3]=c->r[21]|c->r[21]; // 8022CFA8
  c->r[5]=0u+0x00000000u; // 8022CFAC
  c->r[6]=0u+0x00000001u; // 8022CFB0
  c->r[7]=0u+0x00000001u; // 8022CFB4
  c->lr=0x8022CFBCu; f_802533D8(c); // 8022CFB8
L_8022CFBC:;
  c->r[3]=c->r[22]+0x00010000u; // 8022CFBC
  W32(c->r[3]+0xFFFF821Cu,c->r[21]); // 8022CFC0
  c->r[3]=c->r[19]|c->r[19]; // 8022CFC4
  c->lr=0x8022CFCCu; f_80056B54(c); // 8022CFC8
  c->r[3]=c->r[22]+0x00010000u; // 8022CFCC
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022CFD0
  {uint32_t ea=c->r[23]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022CFD4
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022CFD8
  c->lr=0x8022CFE0u; f_80253658(c); // 8022CFDC
  c->r[3]=c->r[22]+0x00010000u; // 8022CFE0
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022CFE4
  c->r[4]=0u+0x00000000u; // 8022CFE8
  c->lr=0x8022CFF0u; f_80253970(c); // 8022CFEC
  c->r[3]=c->r[24]|c->r[24]; // 8022CFF0
  c->r[4]=c->r[18]+0x00000001u; // 8022CFF4
  c->r[5]=0u+0x00000000u; // 8022CFF8
  c->lr=0x8022D000u; f_8022D784(c); // 8022CFFC
  c->r[22]=c->r[22]+0x00000004u; // 8022D000
  c->r[23]=c->r[23]+0x00000004u; // 8022D004
  c->r[18]=c->r[18]+0x00000001u; // 8022D008
  cmps(c,0,(int32_t)c->r[18],2); // 8022D00C
  if (crb(c,0)) { IRQCHK(c); goto L_8022CF74; } // 8022D010
  c->r[18]=0u+0x00000000u; // 8022D014
  c->r[22]=c->r[24]|c->r[24]; // 8022D018
  c->r[3]=0u+0x80480000u; // 8022D01C
  c->r[23]=c->r[3]+0x000001D0u; // 8022D020
L_8022D024:;
  c->lr=0x8022D028u; f_80056B5C(c); // 8022D024
  c->r[19]=c->r[3]|c->r[3]; // 8022D028
  c->r[3]=c->r[24]|c->r[24]; // 8022D02C
  c->lr=0x8022D034u; f_80065DB4(c); // 8022D030
  c->lr=0x8022D038u; f_80056B54(c); // 8022D034
  c->r[3]=0u+0x0000004Cu; // 8022D038
  c->lr=0x8022D040u; f_80047B64(c); // 8022D03C
  c->r[21]=c->r[3]|c->r[3]; // 8022D040
  cmps(c,0,(int32_t)c->r[3],0); // 8022D044
  if (crb(c,2)) { goto L_8022D068; } // 8022D048
  c->r[3]=c->r[24]|c->r[24]; // 8022D04C
  c->lr=0x8022D054u; f_80065DB4(c); // 8022D050
  c->r[4]=c->r[3]|c->r[3]; // 8022D054
  c->r[3]=c->r[21]|c->r[21]; // 8022D058
  c->r[5]=0u+0x00000000u; // 8022D05C
  c->r[6]=0u+0x00000001u; // 8022D060
  c->lr=0x8022D068u; f_80253338(c); // 8022D064
L_8022D068:;
  c->r[3]=c->r[22]+0x00010000u; // 8022D068
  W32(c->r[3]+0xFFFF8224u,c->r[21]); // 8022D06C
  c->r[3]=c->r[19]|c->r[19]; // 8022D070
  c->lr=0x8022D078u; f_80056B54(c); // 8022D074
  c->r[3]=c->r[22]+0x00010000u; // 8022D078
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022D07C
  {uint32_t ea=c->r[23]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D080
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022D084
  c->lr=0x8022D08Cu; f_80253658(c); // 8022D088
  c->r[3]=c->r[22]+0x00010000u; // 8022D08C
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022D090
  c->r[4]=0u+0x00000000u; // 8022D094
  c->lr=0x8022D09Cu; f_80253970(c); // 8022D098
  c->r[22]=c->r[22]+0x00000004u; // 8022D09C
  c->r[23]=c->r[23]+0x00000004u; // 8022D0A0
  c->r[18]=c->r[18]+0x00000001u; // 8022D0A4
  cmps(c,0,(int32_t)c->r[18],3); // 8022D0A8
  if (crb(c,0)) { IRQCHK(c); goto L_8022D024; } // 8022D0AC
  c->r[3]=c->r[24]|c->r[24]; // 8022D0B0
  c->r[4]=0u+0x00000022u; // 8022D0B4
  c->r[5]=0u+0x00000000u; // 8022D0B8
  c->r[6]=0u+0x00000003u; // 8022D0BC
  c->r[7]=0u+0x00000003u; // 8022D0C0
  c->lr=0x8022D0C8u; f_801EDF08(c); // 8022D0C4
  c->r[4]=c->r[24]+0x00010000u; // 8022D0C8
  W32(c->r[4]+0xFFFF8280u,c->r[3]); // 8022D0CC
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D0D0
  c->f[2]=c->f[1]; // 8022D0D4
  c->lr=0x8022D0DCu; f_8021B27C(c); // 8022D0D8
  c->r[3]=c->r[24]+0x00010000u; // 8022D0DC
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 8022D0E0
  c->r[4]=0u+0x00000000u; // 8022D0E4
  c->r[5]=0u+0x00000000u; // 8022D0E8
  c->lr=0x8022D0F0u; f_8021B47C(c); // 8022D0EC
  c->r[3]=c->r[24]+0x00010000u; // 8022D0F0
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 8022D0F4
  c->r[4]=0u+0x00000000u; // 8022D0F8
  c->lr=0x8022D100u; f_8021B46C(c); // 8022D0FC
  c->r[3]=c->r[24]|c->r[24]; // 8022D100
  c->r[4]=0u+0x0000001Cu; // 8022D104
  c->r[5]=0u+0x00000000u; // 8022D108
  c->r[6]=0u+0x00000002u; // 8022D10C
  c->r[7]=0u+0x00000003u; // 8022D110
  c->lr=0x8022D118u; f_801EDF08(c); // 8022D114
  c->r[4]=c->r[24]+0x00010000u; // 8022D118
  W32(c->r[4]+0xFFFF8268u,c->r[3]); // 8022D11C
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D120
  {uint32_t ea=c->r[2]+0xFFFF9A24u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022D124
  c->lr=0x8022D12Cu; f_8021B27C(c); // 8022D128
  c->r[3]=c->r[24]+0x00010000u; // 8022D12C
  c->r[3]=R32(c->r[3]+0xFFFF8268u); // 8022D130
  c->r[4]=0u+0x00000008u; // 8022D134
  c->r[5]=0u+0x00000000u; // 8022D138
  c->lr=0x8022D140u; f_8021B47C(c); // 8022D13C
  c->r[3]=c->r[24]+0x00010000u; // 8022D140
  c->r[3]=R32(c->r[3]+0xFFFF8268u); // 8022D144
  c->r[4]=0u+0x00000000u; // 8022D148
  c->lr=0x8022D150u; f_8021B46C(c); // 8022D14C
  c->r[3]=c->r[24]|c->r[24]; // 8022D150
  c->r[4]=0u+0x0000001Au; // 8022D154
  c->r[5]=0u+0x00000000u; // 8022D158
  c->r[6]=0u+0x00000002u; // 8022D15C
  c->r[7]=0u+0x00000003u; // 8022D160
  c->lr=0x8022D168u; f_801EDF08(c); // 8022D164
  c->r[4]=c->r[24]+0x00010000u; // 8022D168
  W32(c->r[4]+0xFFFF8270u,c->r[3]); // 8022D16C
  {uint32_t ea=c->r[2]+0xFFFF9A28u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D170
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022D174
  c->lr=0x8022D17Cu; f_8021B27C(c); // 8022D178
  c->r[3]=c->r[24]+0x00010000u; // 8022D17C
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 8022D180
  c->r[4]=0u+0x00000008u; // 8022D184
  c->r[5]=0u+0x00000000u; // 8022D188
  c->lr=0x8022D190u; f_8021B47C(c); // 8022D18C
  c->r[3]=c->r[24]+0x00010000u; // 8022D190
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 8022D194
  c->r[4]=0u+0x00000000u; // 8022D198
  c->lr=0x8022D1A0u; f_8021B46C(c); // 8022D19C
  c->r[3]=c->r[24]|c->r[24]; // 8022D1A0
  c->r[4]=0u+0x0000001Bu; // 8022D1A4
  c->r[5]=0u+0x00000000u; // 8022D1A8
  c->r[6]=0u+0x00000002u; // 8022D1AC
  c->r[7]=0u+0x00000003u; // 8022D1B0
  c->lr=0x8022D1B8u; f_801EDF08(c); // 8022D1B4
  c->r[4]=c->r[24]+0x00010000u; // 8022D1B8
  W32(c->r[4]+0xFFFF8278u,c->r[3]); // 8022D1BC
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D1C0
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022D1C4
  c->lr=0x8022D1CCu; f_8021B27C(c); // 8022D1C8
  c->r[3]=c->r[24]+0x00010000u; // 8022D1CC
  c->r[3]=R32(c->r[3]+0xFFFF8278u); // 8022D1D0
  c->r[4]=0u+0x00000008u; // 8022D1D4
  c->r[5]=0u+0x00000000u; // 8022D1D8
  c->lr=0x8022D1E0u; f_8021B47C(c); // 8022D1DC
  c->r[3]=c->r[24]+0x00010000u; // 8022D1E0
  c->r[3]=R32(c->r[3]+0xFFFF8278u); // 8022D1E4
  c->r[4]=0u+0x00000000u; // 8022D1E8
  c->lr=0x8022D1F0u; f_8021B46C(c); // 8022D1EC
  c->r[3]=c->r[24]|c->r[24]; // 8022D1F0
  c->r[4]=0u+0x00000029u; // 8022D1F4
  c->r[5]=0u+0x00000000u; // 8022D1F8
  c->r[6]=0u+0x00000002u; // 8022D1FC
  c->r[7]=0u+0x00000002u; // 8022D200
  c->lr=0x8022D208u; f_801EDF08(c); // 8022D204
  c->r[4]=c->r[24]+0x00010000u; // 8022D208
  W32(c->r[4]+0xFFFF81A8u,c->r[3]); // 8022D20C
  {uint32_t ea=c->r[2]+0xFFFF9A34u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D210
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022D214
  c->lr=0x8022D21Cu; f_8021B27C(c); // 8022D218
  c->r[3]=c->r[24]+0x00010000u; // 8022D21C
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022D220
  c->r[4]=0u+0x00000005u; // 8022D224
  c->r[5]=0u+0x00000000u; // 8022D228
  c->lr=0x8022D230u; f_8021B47C(c); // 8022D22C
  c->r[3]=c->r[24]+0x00010000u; // 8022D230
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022D234
  c->r[4]=0u+0x00000000u; // 8022D238
  c->lr=0x8022D240u; f_8021B46C(c); // 8022D23C
  c->r[3]=c->r[24]|c->r[24]; // 8022D240
  c->r[4]=0u+0x00000029u; // 8022D244
  c->r[5]=c->r[24]+0x00010000u; // 8022D248
  c->r[5]=R32(c->r[5]+0xFFFF81A8u); // 8022D24C
  c->r[6]=0u+0x00000002u; // 8022D250
  c->r[7]=0u+0x00000002u; // 8022D254
  c->lr=0x8022D25Cu; f_801EDF08(c); // 8022D258
  c->r[4]=c->r[24]+0x00010000u; // 8022D25C
  W32(c->r[4]+0xFFFF81ACu,c->r[3]); // 8022D260
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D264
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022D268
  c->lr=0x8022D270u; f_8021B27C(c); // 8022D26C
  c->r[3]=c->r[24]+0x00010000u; // 8022D270
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022D274
  c->r[4]=0u+0x00000005u; // 8022D278
  c->r[5]=0u+0x00000000u; // 8022D27C
  c->lr=0x8022D284u; f_8021B47C(c); // 8022D280
  c->r[3]=c->r[24]+0x00010000u; // 8022D284
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022D288
  c->r[4]=0u+0x00000000u; // 8022D28C
  c->lr=0x8022D294u; f_8021B46C(c); // 8022D290
  c->r[18]=0u+0x00000000u; // 8022D294
L_8022D298:;
  c->r[3]=c->r[24]+0x00010000u; // 8022D298
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022D29C
  c->r[4]=0u+0x00000001u; // 8022D2A0
  c->lr=0x8022D2A8u; f_80258628(c); // 8022D2A4
  c->r[24]=c->r[24]+0x00000004u; // 8022D2A8
  c->r[18]=c->r[18]+0x00000001u; // 8022D2AC
  cmps(c,0,(int32_t)c->r[18],2); // 8022D2B0
  if (crb(c,0)) { IRQCHK(c); goto L_8022D298; } // 8022D2B4
  c->r[0]=0u+0x00000278u; // 8022D2B8
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022D2BC
  {uint32_t ea=c->r[1]+0x00000270u; c->f[31]=RF64(ea);} // 8022D2C0
  c->r[0]=0u+0x00000268u; // 8022D2C4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8022D2C8
  {uint32_t ea=c->r[1]+0x00000260u; c->f[30]=RF64(ea);} // 8022D2CC
  c->r[0]=0u+0x00000258u; // 8022D2D0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 8022D2D4
  {uint32_t ea=c->r[1]+0x00000250u; c->f[29]=RF64(ea);} // 8022D2D8
  c->r[11]=c->r[1]+0x00000250u; // 8022D2DC
  c->lr=0x8022D2E4u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022D2E0
  c->r[0]=R32(c->r[1]+0x00000284u); // 8022D2E4
  c->lr=c->r[0]; // 8022D2E8
  c->r[1]=c->r[1]+0x00000280u; // 8022D2EC
  return; // 8022D2F0
}

// fn_8022D2F4
void f_8022D2F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D2F4
  c->r[0]=c->lr; // 8022D2F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022D2FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022D300
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022D304
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022D308
  c->r[31]=c->r[3]|c->r[3]; // 8022D30C
  c->lr=0x8022D314u; f_801EDEE8(c); // 8022D310
  cmps(c,0,(int32_t)c->r[3],0); // 8022D314
  if (crb(c,2)) { goto L_8022D4CC; } // 8022D318
  c->r[3]=c->r[31]+0x00010000u; // 8022D31C
  c->r[0]=R8(c->r[3]+0xFFFF8260u); // 8022D320
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022D324
  cmps(c,0,(int32_t)c->r[0],1); // 8022D328
  if (!crb(c,2)) { goto L_8022D338; } // 8022D32C
  c->r[3]=c->r[31]|c->r[31]; // 8022D330
  c->lr=0x8022D338u; f_8023059C(c); // 8022D334
L_8022D338:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D338
  c->r[0]=R8(c->r[3]+0xFFFF8295u); // 8022D33C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022D340
  cmps(c,0,(int32_t)c->r[0],1); // 8022D344
  if (!crb(c,2)) { goto L_8022D354; } // 8022D348
  c->r[3]=c->r[31]|c->r[31]; // 8022D34C
  c->lr=0x8022D354u; f_8022F438(c); // 8022D350
L_8022D354:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D354
  c->r[0]=R8(c->r[3]+0xFFFF829Eu); // 8022D358
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022D35C
  cmps(c,0,(int32_t)c->r[0],1); // 8022D360
  if (!crb(c,2)) { goto L_8022D370; } // 8022D364
  c->r[3]=c->r[31]|c->r[31]; // 8022D368
  c->lr=0x8022D370u; f_8022F944(c); // 8022D36C
L_8022D370:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D370
  c->r[0]=R8(c->r[3]+0xFFFF82ACu); // 8022D374
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022D378
  cmps(c,0,(int32_t)c->r[0],1); // 8022D37C
  if (!crb(c,2)) { goto L_8022D38C; } // 8022D380
  c->r[3]=c->r[31]|c->r[31]; // 8022D384
  c->lr=0x8022D38Cu; f_8022FD44(c); // 8022D388
L_8022D38C:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D38C
  c->r[0]=R8(c->r[3]+0xFFFF82ADu); // 8022D390
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022D394
  cmps(c,0,(int32_t)c->r[0],1); // 8022D398
  if (!crb(c,2)) { goto L_8022D3A8; } // 8022D39C
  c->r[3]=c->r[31]|c->r[31]; // 8022D3A0
  c->lr=0x8022D3A8u; f_802302C0(c); // 8022D3A4
L_8022D3A8:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D3A8
  c->r[0]=R8(c->r[3]+0xFFFF8284u); // 8022D3AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022D3B0
  cmps(c,0,(int32_t)c->r[0],1); // 8022D3B4
  if (!crb(c,2)) { goto L_8022D3C4; } // 8022D3B8
  c->r[3]=c->r[31]|c->r[31]; // 8022D3BC
  c->lr=0x8022D3C4u; f_80230120(c); // 8022D3C0
L_8022D3C4:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D3C4
  c->r[0]=R32(c->r[3]+0xFFFF8268u); // 8022D3C8
  cmps(c,0,(int32_t)c->r[0],0); // 8022D3CC
  if (crb(c,2)) { goto L_8022D3DC; } // 8022D3D0
  c->r[3]=c->r[31]|c->r[31]; // 8022D3D4
  c->lr=0x8022D3DCu; f_80230688(c); // 8022D3D8
L_8022D3DC:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D3DC
  c->r[0]=R32(c->r[3]+0xFFFF8270u); // 8022D3E0
  cmps(c,0,(int32_t)c->r[0],0); // 8022D3E4
  if (crb(c,2)) { goto L_8022D3F4; } // 8022D3E8
  c->r[3]=c->r[31]|c->r[31]; // 8022D3EC
  c->lr=0x8022D3F4u; f_80230738(c); // 8022D3F0
L_8022D3F4:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D3F4
  c->r[0]=R32(c->r[3]+0xFFFF8278u); // 8022D3F8
  cmps(c,0,(int32_t)c->r[0],0); // 8022D3FC
  if (crb(c,2)) { goto L_8022D40C; } // 8022D400
  c->r[3]=c->r[31]|c->r[31]; // 8022D404
  c->lr=0x8022D40Cu; f_80230808(c); // 8022D408
L_8022D40C:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D40C
  c->r[0]=R32(c->r[3]+0xFFFF81B4u); // 8022D410
  cmps(c,0,(int32_t)c->r[0],0); // 8022D414
  if (crb(c,2)) { goto L_8022D424; } // 8022D418
  c->r[3]=c->r[31]|c->r[31]; // 8022D41C
  c->lr=0x8022D424u; f_8022F098(c); // 8022D420
L_8022D424:;
  c->r[29]=0u+0x00000000u; // 8022D424
  c->r[30]=c->r[31]|c->r[31]; // 8022D428
L_8022D42C:;
  c->r[3]=c->r[30]+0x00010000u; // 8022D42C
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022D430
  cmps(c,0,(int32_t)c->r[3],0); // 8022D434
  if (crb(c,2)) { goto L_8022D440; } // 8022D438
  c->lr=0x8022D440u; f_80258704(c); // 8022D43C
L_8022D440:;
  c->r[30]=c->r[30]+0x00000004u; // 8022D440
  c->r[29]=c->r[29]+0x00000001u; // 8022D444
  cmps(c,0,(int32_t)c->r[29],2); // 8022D448
  if (crb(c,0)) { IRQCHK(c); goto L_8022D42C; } // 8022D44C
  c->r[29]=0u+0x00000000u; // 8022D450
  c->r[30]=c->r[31]|c->r[31]; // 8022D454
L_8022D458:;
  c->r[3]=c->r[30]+0x00010000u; // 8022D458
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022D45C
  cmps(c,0,(int32_t)c->r[3],0); // 8022D460
  if (crb(c,2)) { goto L_8022D46C; } // 8022D464
  c->lr=0x8022D46Cu; f_80224A84(c); // 8022D468
L_8022D46C:;
  c->r[30]=c->r[30]+0x00000004u; // 8022D46C
  c->r[29]=c->r[29]+0x00000001u; // 8022D470
  cmps(c,0,(int32_t)c->r[29],15); // 8022D474
  if (crb(c,0)) { IRQCHK(c); goto L_8022D458; } // 8022D478
  c->r[3]=c->r[31]+0x00010000u; // 8022D47C
  c->r[3]=R32(c->r[3]+0xFFFF8218u); // 8022D480
  cmps(c,0,(int32_t)c->r[3],0); // 8022D484
  if (crb(c,2)) { goto L_8022D490; } // 8022D488
  c->lr=0x8022D490u; f_80224A84(c); // 8022D48C
L_8022D490:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D490
  c->r[3]=R32(c->r[3]+0xFFFF819Cu); // 8022D494
  cmps(c,0,(int32_t)c->r[3],0); // 8022D498
  if (crb(c,2)) { goto L_8022D4A4; } // 8022D49C
  c->lr=0x8022D4A4u; f_80257920(c); // 8022D4A0
L_8022D4A4:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D4A4
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 8022D4A8
  cmps(c,0,(int32_t)c->r[3],0); // 8022D4AC
  if (crb(c,2)) { goto L_8022D4B8; } // 8022D4B0
  c->lr=0x8022D4B8u; f_80256BC8(c); // 8022D4B4
L_8022D4B8:;
  c->r[3]=c->r[31]+0x00010000u; // 8022D4B8
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8022D4BC
  cmps(c,0,(int32_t)c->r[3],0); // 8022D4C0
  if (crb(c,2)) { goto L_8022D4CC; } // 8022D4C4
  c->lr=0x8022D4CCu; f_8025719C(c); // 8022D4C8
L_8022D4CC:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022D4CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022D4D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022D4D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022D4D8
  c->lr=c->r[0]; // 8022D4DC
  c->r[1]=c->r[1]+0x00000020u; // 8022D4E0
  return; // 8022D4E4
}

// fn_8022D4E8
void f_8022D4E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D4E8
  c->r[0]=c->lr; // 8022D4EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022D4F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022D4F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022D4F8
  c->r[31]=c->r[3]|c->r[3]; // 8022D4FC
  c->r[30]=0u+0x00000000u; // 8022D500
  c->lr=0x8022D508u; f_80361BF4(c); // 8022D504
  c->r[7]=c->r[31]+0x00010000u; // 8022D508
  c->r[8]=R32(c->r[7]+0xFFFF82C0u); // 8022D50C
  c->r[9]=R32(c->r[7]+0xFFFF82C4u); // 8022D510
  c->r[0]=c->r[3]^0x80000000u; // 8022D514
  c->r[6]=c->r[8]^0x80000000u; // 8022D518
  c->r[5]=addc(c,~c->r[9],c->r[4],1); // 8022D51C
  c->r[6]=addc(c,~c->r[6],c->r[0],c->xer_ca); // 8022D520
  c->r[6]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8022D524
  c->r[6]=0u-c->r[6]; // 8022D528
  cmps(c,0,(int32_t)c->r[6],0); // 8022D52C
  if (crb(c,2)) { goto L_8022D570; } // 8022D530
  c->r[5]=0u+0x80000000u; // 8022D534
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8022D538
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8022D53C
  c->r[7]=addc(c,~c->r[4],c->r[9],1); // 8022D540
  c->r[5]=addc(c,~c->r[3],c->r[8],c->xer_ca); // 8022D544
  c->r[4]=0u+0x00000000u; // 8022D548
  c->r[0]=0u+0xFFFFFFFFu; // 8022D54C
  c->r[3]=addc(c,c->r[6],c->r[0],0); // 8022D550
  c->r[0]=addc(c,c->r[4],c->r[0],c->xer_ca); // 8022D554
  c->r[4]=addc(c,c->r[7],c->r[3],0); // 8022D558
  c->r[3]=addc(c,c->r[5],c->r[0],c->xer_ca); // 8022D55C
  c->r[5]=0u+0x00000000u; // 8022D560
  c->lr=0x8022D568u; f_802F0F18(c); // 8022D564
  c->r[30]=c->r[4]|c->r[4]; // 8022D568
  goto L_8022D5A0; // 8022D56C
L_8022D570:;
  c->r[0]=R32(c->r[7]+0xFFFF81B0u); // 8022D570
  cmps(c,0,(int32_t)c->r[0],0); // 8022D574
  if (crb(c,2)) { goto L_8022D5A0; } // 8022D578
  c->r[0]=0u+0x00000001u; // 8022D57C
  W32(c->r[7]+0xFFFF82CCu,c->r[0]); // 8022D580
  c->r[3]=R32(c->r[7]+0xFFFF81A8u); // 8022D584
  c->r[4]=0u+0x00000000u; // 8022D588
  c->lr=0x8022D590u; f_8021B46C(c); // 8022D58C
  c->r[3]=c->r[31]+0x00010000u; // 8022D590
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022D594
  c->r[4]=0u+0x00000000u; // 8022D598
  c->lr=0x8022D5A0u; f_8021B46C(c); // 8022D59C
L_8022D5A0:;
  c->r[3]=c->r[31]|c->r[31]; // 8022D5A0
  c->r[4]=c->r[30]|c->r[30]; // 8022D5A4
  c->lr=0x8022D5ACu; f_8022D5C4(c); // 8022D5A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022D5AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022D5B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022D5B4
  c->lr=c->r[0]; // 8022D5B8
  c->r[1]=c->r[1]+0x00000010u; // 8022D5BC
  return; // 8022D5C0
}

// fn_8022D5C4
void f_8022D5C4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D5C4
  c->r[0]=c->lr; // 8022D5C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022D5CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022D5D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022D5D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022D5D8
  c->r[29]=c->r[3]|c->r[3]; // 8022D5DC
  c->r[30]=c->r[4]|c->r[4]; // 8022D5E0
  c->r[3]=c->r[3]+0x00010000u; // 8022D5E4
  c->r[0]=R32(c->r[3]+0xFFFF82C8u); // 8022D5E8
  cmpu(c,0,c->r[0],c->r[4]); // 8022D5EC
  if (crb(c,2)) { goto L_8022D664; } // 8022D5F0
  cmpu(c,0,c->r[4],0x00000009u); // 8022D5F4
  if (!crb(c,2)) { goto L_8022D618; } // 8022D5F8
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022D5FC
  c->r[4]=0u+0x00000000u; // 8022D600
  c->lr=0x8022D608u; f_8021B46C(c); // 8022D604
  c->r[3]=c->r[29]+0x00010000u; // 8022D608
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022D60C
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D610
  c->lr=0x8022D618u; f_8021B288(c); // 8022D614
L_8022D618:;
  c->r[3]=c->r[29]+0x00010000u; // 8022D618
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022D61C
  c->r[4]=0u+0x00000004u; // 8022D620
  c->r[31]=0u+0xCCCD0000u; // 8022D624
  c->r[0]=c->r[31]+0xFFFFCCCDu; // 8022D628
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[30])>>32); // 8022D62C
  c->r[5]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8022D630
  c->lr=0x8022D638u; f_8021B358(c); // 8022D634
  c->r[3]=c->r[29]+0x00010000u; // 8022D638
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022D63C
  c->r[4]=0u+0x00000004u; // 8022D640
  c->r[0]=c->r[31]+0xFFFFCCCDu; // 8022D644
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[30])>>32); // 8022D648
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8022D64C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8022D650
  c->r[5]=c->r[30]-c->r[0]; // 8022D654
  c->lr=0x8022D65Cu; f_8021B358(c); // 8022D658
  c->r[3]=c->r[29]+0x00010000u; // 8022D65C
  W32(c->r[3]+0xFFFF82C8u,c->r[30]); // 8022D660
L_8022D664:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022D664
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022D668
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022D66C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022D670
  c->lr=c->r[0]; // 8022D674
  c->r[1]=c->r[1]+0x00000020u; // 8022D678
  return; // 8022D67C
}

// fn_8022D680
void f_8022D680(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D680
  c->r[0]=c->lr; // 8022D684
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022D688
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022D68C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022D690
  c->r[30]=c->r[3]|c->r[3]; // 8022D694
  c->r[31]=c->r[4]|c->r[4]; // 8022D698
  c->r[3]=c->r[3]+0x00010000u; // 8022D69C
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022D6A0
  c->lr=0x8022D6A8u; f_8021B46C(c); // 8022D6A4
  c->r[3]=c->r[30]+0x00010000u; // 8022D6A8
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022D6AC
  c->r[4]=c->r[31]|c->r[31]; // 8022D6B0
  c->lr=0x8022D6B8u; f_8021B46C(c); // 8022D6B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022D6B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022D6BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022D6C0
  c->lr=c->r[0]; // 8022D6C4
  c->r[1]=c->r[1]+0x00000010u; // 8022D6C8
  return; // 8022D6CC
}

// fn_8022D6D0
void f_8022D6D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D6D0
  c->r[0]=c->lr; // 8022D6D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022D6D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022D6DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022D6E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022D6E4
  c->r[29]=c->r[3]|c->r[3]; // 8022D6E8
  c->r[30]=c->r[4]|c->r[4]; // 8022D6EC
  c->r[31]=c->r[5]|c->r[5]; // 8022D6F0
  c->lr=0x8022D6F8u; f_8011B41C(c); // 8022D6F4
  c->r[4]=0u+0x00000019u; // 8022D6F8
  c->lr=0x8022D700u; f_8011B814(c); // 8022D6FC
  cmps(c,0,(int32_t)c->r[31],0); // 8022D700
  if (crb(c,2)) { goto L_8022D718; } // 8022D704
  c->r[4]=c->r[29]+0x00010000u; // 8022D708
  W32(c->r[4]+0xFFFF80D4u,c->r[30]); // 8022D70C
  c->r[4]=0u+0x00000007u; // 8022D710
  goto L_8022D71C; // 8022D714
L_8022D718:;
  c->r[4]=0u+0x00000008u; // 8022D718
L_8022D71C:;
  c->lr=0x8022D720u; f_8011961C(c); // 8022D71C
  c->r[4]=c->r[3]|c->r[3]; // 8022D720
  c->r[3]=c->r[1]+0x0000000Cu; // 8022D724
  c->lr=0x8022D72Cu; f_800549FC(c); // 8022D728
  c->r[3]=c->r[1]+0x00000008u; // 8022D72C
  c->r[4]=c->r[1]+0x0000000Cu; // 8022D730
  c->lr=0x8022D738u; f_800549FC(c); // 8022D734
  c->r[3]=c->r[29]+0x00010000u; // 8022D738
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8022D73C
  c->r[3]=c->r[3]+c->r[0]; // 8022D740
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022D744
  c->r[4]=c->r[1]+0x00000008u; // 8022D748
  c->lr=0x8022D750u; f_801ECCDC(c); // 8022D74C
  c->r[3]=c->r[1]+0x00000008u; // 8022D750
  c->r[4]=0u+0xFFFFFFFFu; // 8022D754
  c->lr=0x8022D75Cu; f_80047BD4(c); // 8022D758
  c->r[3]=c->r[1]+0x0000000Cu; // 8022D75C
  c->r[4]=0u+0xFFFFFFFFu; // 8022D760
  c->lr=0x8022D768u; f_80047BD4(c); // 8022D764
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022D768
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022D76C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022D770
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022D774
  c->lr=c->r[0]; // 8022D778
  c->r[1]=c->r[1]+0x00000020u; // 8022D77C
  return; // 8022D780
}

// fn_8022D784
void f_8022D784(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D784
  c->r[0]=c->lr; // 8022D788
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022D78C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8022D790
  W32(c->r[1]+0x00000028u,c->r[30]); // 8022D794
  W32(c->r[1]+0x00000024u,c->r[29]); // 8022D798
  W32(c->r[1]+0x00000020u,c->r[28]); // 8022D79C
  c->r[28]=c->r[3]|c->r[3]; // 8022D7A0
  c->r[29]=c->r[4]|c->r[4]; // 8022D7A4
  c->r[30]=c->r[5]|c->r[5]; // 8022D7A8
  c->lr=0x8022D7B0u; f_8011B41C(c); // 8022D7AC
  c->r[4]=0u+0x00000019u; // 8022D7B0
  c->lr=0x8022D7B8u; f_8011B814(c); // 8022D7B4
  c->r[31]=c->r[3]|c->r[3]; // 8022D7B8
  cmps(c,0,(int32_t)c->r[30],0); // 8022D7BC
  if (crb(c,2)) { goto L_8022D7EC; } // 8022D7C0
  c->r[3]=c->r[28]+0x00010000u; // 8022D7C4
  W32(c->r[3]+0xFFFF828Cu,c->r[29]); // 8022D7C8
  c->r[30]=0u+0x00000007u; // 8022D7CC
  c->lr=0x8022D7D4u; f_8006592C(c); // 8022D7D0
  c->r[4]=0u+0x00000006u; // 8022D7D4
  c->r[5]=0u+0x00000000u; // 8022D7D8
  c->r[6]=0u+0xFFFFFFFFu; // 8022D7DC
  c->r[7]=0u+0xFFFFFFFFu; // 8022D7E0
  c->lr=0x8022D7E8u; f_80048F20(c); // 8022D7E4
  goto L_8022D7FC; // 8022D7E8
L_8022D7EC:;
  c->r[0]=0u+0x00000000u; // 8022D7EC
  c->r[3]=c->r[28]+0x00010000u; // 8022D7F0
  W32(c->r[3]+0xFFFF828Cu,c->r[0]); // 8022D7F4
  c->r[30]=0u+0x00000008u; // 8022D7F8
L_8022D7FC:;
  c->r[3]=c->r[31]|c->r[31]; // 8022D7FC
  c->r[4]=c->r[30]|c->r[30]; // 8022D800
  c->lr=0x8022D808u; f_8011961C(c); // 8022D804
  c->r[4]=c->r[3]|c->r[3]; // 8022D808
  c->r[3]=c->r[1]+0x00000008u; // 8022D80C
  c->lr=0x8022D814u; f_800549FC(c); // 8022D810
  c->r[3]=c->r[28]+0x00010000u; // 8022D814
  c->r[0]=R32(c->r[3]+0xFFFF828Cu); // 8022D818
  cmps(c,0,(int32_t)c->r[0],0); // 8022D81C
  if (!crb(c,1)) { goto L_8022D884; } // 8022D820
  c->r[30]=c->r[29]+0xFFFFFFFFu; // 8022D824
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8022D828
  c->r[3]=c->r[3]+c->r[0]; // 8022D82C
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022D830
  c->r[4]=0u+0x00000001u; // 8022D834
  c->lr=0x8022D83Cu; f_80253970(c); // 8022D838
  c->r[3]=c->r[28]+0x00010000u; // 8022D83C
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022D840
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[1]=RF64(ea);} // 8022D844
  c->r[0]=c->r[30]^0x80000000u; // 8022D848
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022D84C
  c->r[0]=0u+0x43300000u; // 8022D850
  W32(c->r[1]+0x00000010u,c->r[0]); // 8022D854
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8022D858
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8022D85C
  {uint32_t ea=c->r[2]+0xFFFF9A4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D860
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8022D864
  {uint32_t ea=c->r[2]+0xFFFF9A48u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022D868
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8022D86C
  c->lr=0x8022D874u; f_8021B288(c); // 8022D870
  c->r[3]=c->r[28]+0x00010000u; // 8022D874
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022D878
  {uint32_t ea=c->r[2]+0xFFFF99FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8022D87C
  c->lr=0x8022D884u; f_8021B290(c); // 8022D880
L_8022D884:;
  c->r[3]=c->r[1]+0x00000008u; // 8022D884
  c->r[4]=0u+0xFFFFFFFFu; // 8022D888
  c->lr=0x8022D890u; f_80047BD4(c); // 8022D88C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8022D890
  c->r[30]=R32(c->r[1]+0x00000028u); // 8022D894
  c->r[29]=R32(c->r[1]+0x00000024u); // 8022D898
  c->r[28]=R32(c->r[1]+0x00000020u); // 8022D89C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022D8A0
  c->lr=c->r[0]; // 8022D8A4
  c->r[1]=c->r[1]+0x00000030u; // 8022D8A8
  return; // 8022D8AC
}

// fn_8022D8B0
void f_8022D8B0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022D8B0
  f_801EF41C(c); return; // 8022D8B4
}

// fn_8022D8B8
void f_8022D8B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D8B8
  c->r[0]=c->lr; // 8022D8BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022D8C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022D8C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022D8C8
  c->r[30]=c->r[3]|c->r[3]; // 8022D8CC
  c->r[31]=c->r[4]|c->r[4]; // 8022D8D0
  c->lr=0x8022D8D8u; f_80361BF4(c); // 8022D8D4
  c->r[5]=0u+0x80000000u; // 8022D8D8
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8022D8DC
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8022D8E0
  c->r[5]=0u+0x10620000u; // 8022D8E4
  c->r[5]=c->r[5]+0x00004DD3u; // 8022D8E8
  c->r[0]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[0])>>32); // 8022D8EC
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8022D8F0
  c->r[5]=(uint32_t)((int32_t)c->r[31]*(int32_t)c->r[0]); // 8022D8F4
  c->r[0]=0u+0x00000000u; // 8022D8F8
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 8022D8FC
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 8022D900
  c->r[3]=c->r[30]+0x00010000u; // 8022D904
  W32(c->r[3]+0xFFFF818Cu,c->r[4]); // 8022D908
  W32(c->r[3]+0xFFFF8188u,c->r[0]); // 8022D90C
  c->r[0]=0u+0x00000001u; // 8022D910
  W32(c->r[3]+0xFFFF8180u,c->r[0]); // 8022D914
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022D918
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022D91C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022D920
  c->lr=c->r[0]; // 8022D924
  c->r[1]=c->r[1]+0x00000010u; // 8022D928
  return; // 8022D92C
}

// fn_8022D930
void f_8022D930(Ctx* __restrict c) {
  c->r[0]=c->r[4]|c->r[4]; // 8022D930
  cmps(c,0,(int32_t)c->r[4],0); // 8022D934
  if (crb(c,0)) { goto L_8022D944; } // 8022D938
  cmps(c,0,(int32_t)c->r[4],15); // 8022D93C
  if (crb(c,0)) { goto L_8022D95C; } // 8022D940
L_8022D944:;
  c->r[3]=0u+0x00000002u; // 8022D944
  c->r[4]=0u+0x80480000u; // 8022D948
  c->r[4]=c->r[4]+0x00000288u; // 8022D94C
  c->r[5]=c->r[0]|c->r[0]; // 8022D950
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022D954
  f_803D3760(c); return; // 8022D958
L_8022D95C:;
  c->r[3]=c->r[3]+0x00010000u; // 8022D95C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8022D960
  c->r[3]=c->r[3]+c->r[0]; // 8022D964
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022D968
  c->r[4]=c->r[5]|c->r[5]; // 8022D96C
  c->r[5]=0u+0x00000001u; // 8022D970
  f_80224894(c); return; // 8022D974
}

// fn_8022D978
void f_8022D978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022D978
  c->r[0]=c->lr; // 8022D97C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022D980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022D984
  c->r[31]=0u+0x00000000u; // 8022D988
  c->lr=0x8022D990u; f_801EDEE8(c); // 8022D98C
  cmps(c,0,(int32_t)c->r[3],8); // 8022D990
  if (!crb(c,0)) { goto L_8022D9A4; } // 8022D994
  cmps(c,0,(int32_t)c->r[3],3); // 8022D998
  if (crb(c,2)) { goto L_8022D9B0; } // 8022D99C
  goto L_8022D9BC; // 8022D9A0
L_8022D9A4:;
  cmps(c,0,(int32_t)c->r[3],11); // 8022D9A4
  if (!crb(c,0)) { goto L_8022D9BC; } // 8022D9A8
  goto L_8022D9B8; // 8022D9AC
L_8022D9B0:;
  c->r[31]=0u+0x00000001u; // 8022D9B0
  goto L_8022D9BC; // 8022D9B4
L_8022D9B8:;
  c->r[31]=0u+0x00000001u; // 8022D9B8
L_8022D9BC:;
  c->r[3]=c->r[31]|c->r[31]; // 8022D9BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022D9C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022D9C4
  c->lr=c->r[0]; // 8022D9C8
  c->r[1]=c->r[1]+0x00000010u; // 8022D9CC
  return; // 8022D9D0
}

// fn_8022D9D4
void f_8022D9D4(Ctx* __restrict c) {
  c->r[8]=0u+0x00000001u; // 8022D9D4
  c->r[3]=0u+0x00000000u; // 8022D9D8
  c->r[6]=0u+0x00000000u; // 8022D9DC
  cmps(c,0,(int32_t)c->r[5],0); // 8022D9E0
  if (crb(c,2)) { goto L_8022DAB4; } // 8022D9E4
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 8022D9E8
  cmpu(c,0,c->r[5],0x00000008u); // 8022D9EC
  if (!crb(c,1)) { goto L_8022DA90; } // 8022D9F0
  c->r[0]=c->r[7]+0x00000007u; // 8022D9F4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8022D9F8
  c->ctr=c->r[0]; // 8022D9FC
  cmpu(c,0,c->r[7],0x00000000u); // 8022DA00
  if (!crb(c,1)) { goto L_8022DA90; } // 8022DA04
L_8022DA08:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[4])>>32); // 8022DA08
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA0C
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[4]); // 8022DA10
  c->r[3]=c->r[0]+c->r[3]; // 8022DA14
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA18
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA1C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA20
  c->r[3]=c->r[0]+c->r[3]; // 8022DA24
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA28
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA2C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA30
  c->r[3]=c->r[0]+c->r[3]; // 8022DA34
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA38
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA3C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA40
  c->r[3]=c->r[0]+c->r[3]; // 8022DA44
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA48
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA4C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA50
  c->r[3]=c->r[0]+c->r[3]; // 8022DA54
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA58
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA5C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA60
  c->r[3]=c->r[0]+c->r[3]; // 8022DA64
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA68
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA6C
  c->r[7]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA70
  c->r[3]=c->r[0]+c->r[3]; // 8022DA74
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[4])>>32); // 8022DA78
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DA7C
  c->r[8]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[4]); // 8022DA80
  c->r[3]=c->r[0]+c->r[3]; // 8022DA84
  c->r[6]=c->r[6]+0x00000008u; // 8022DA88
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8022DA08; } // 8022DA8C
L_8022DA90:;
  c->r[0]=c->r[5]-c->r[6]; // 8022DA90
  c->ctr=c->r[0]; // 8022DA94
  cmpu(c,0,c->r[6],c->r[5]); // 8022DA98
  if (!crb(c,0)) { goto L_8022DAB4; } // 8022DA9C
L_8022DAA0:;
  c->r[0]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[4])>>32); // 8022DAA0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[4]); // 8022DAA4
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[4]); // 8022DAA8
  c->r[3]=c->r[0]+c->r[3]; // 8022DAAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8022DAA0; } // 8022DAB0
L_8022DAB4:;
  c->r[4]=c->r[8]|c->r[8]; // 8022DAB4
  return; // 8022DAB8
}

// fn_8022DABC
void f_8022DABC(Ctx* __restrict c) {
  return; // 8022DABC
}

// fn_8022DAC0
void f_8022DAC0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022DAC0
  c->r[0]=c->lr; // 8022DAC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022DAC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022DACC
  c->r[31]=c->r[3]|c->r[3]; // 8022DAD0
  c->r[0]=0u+0x00000000u; // 8022DAD4
  c->r[4]=c->r[3]+0x00010000u; // 8022DAD8
  W8(c->r[4]+0xFFFF8292u,c->r[0]); // 8022DADC
  W8(c->r[4]+0xFFFF8295u,c->r[0]); // 8022DAE0
  W8(c->r[4]+0xFFFF829Eu,c->r[0]); // 8022DAE4
  W8(c->r[4]+0xFFFF82ACu,c->r[0]); // 8022DAE8
  W8(c->r[4]+0xFFFF82ADu,c->r[0]); // 8022DAEC
  W8(c->r[4]+0xFFFF8284u,c->r[0]); // 8022DAF0
  W8(c->r[4]+0xFFFF8260u,c->r[0]); // 8022DAF4
  W8(c->r[4]+0xFFFF826Cu,c->r[0]); // 8022DAF8
  W8(c->r[4]+0xFFFF8274u,c->r[0]); // 8022DAFC
  W8(c->r[4]+0xFFFF827Cu,c->r[0]); // 8022DB00
  c->lr=0x8022DB08u; f_8022C950(c); // 8022DB04
  c->r[0]=0u+0x00000001u; // 8022DB08
  c->r[3]=c->r[31]+0x00010000u; // 8022DB0C
  W32(c->r[3]+0xFFFF8178u,c->r[0]); // 8022DB10
  c->r[3]=c->r[31]|c->r[31]; // 8022DB14
  c->lr=0x8022DB1Cu; f_80230944(c); // 8022DB18
  c->lr=0x8022DB20u; f_8006592C(c); // 8022DB1C
  c->r[4]=0u+0x00000000u; // 8022DB20
  c->r[5]=0u+0x00000000u; // 8022DB24
  c->r[6]=0u+0xFFFFFFFFu; // 8022DB28
  c->r[7]=0u+0xFFFFFFFFu; // 8022DB2C
  c->lr=0x8022DB34u; f_80048F20(c); // 8022DB30
  c->r[3]=c->r[31]|c->r[31]; // 8022DB34
  c->r[4]=0u+0x00000002u; // 8022DB38
  c->lr=0x8022DB40u; f_801EDEE0(c); // 8022DB3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022DB40
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022DB44
  c->lr=c->r[0]; // 8022DB48
  c->r[1]=c->r[1]+0x00000010u; // 8022DB4C
  return; // 8022DB50
}

// fn_8022DB54
void f_8022DB54(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022DB54
  c->r[0]=c->lr; // 8022DB58
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022DB5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022DB60
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022DB64
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022DB68
  c->r[29]=c->r[3]|c->r[3]; // 8022DB6C
  c->r[3]=c->r[3]+0x00010000u; // 8022DB70
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022DB74
  c->lr=0x8022DB7Cu; f_8025860C(c); // 8022DB78
  cmps(c,0,(int32_t)c->r[3],0); // 8022DB7C
  if (crb(c,2)) { goto L_8022DC08; } // 8022DB80
  c->r[30]=0u+0x00000000u; // 8022DB84
  c->r[31]=c->r[29]|c->r[29]; // 8022DB88
L_8022DB8C:;
  c->r[3]=c->r[31]+0x00010000u; // 8022DB8C
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022DB90
  c->r[4]=0u+0x00000000u; // 8022DB94
  c->lr=0x8022DB9Cu; f_80224B90(c); // 8022DB98
  c->r[31]=c->r[31]+0x00000004u; // 8022DB9C
  c->r[30]=c->r[30]+0x00000001u; // 8022DBA0
  cmps(c,0,(int32_t)c->r[30],15); // 8022DBA4
  if (crb(c,0)) { IRQCHK(c); goto L_8022DB8C; } // 8022DBA8
  c->r[30]=0u+0x00000000u; // 8022DBAC
L_8022DBB0:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022DBB0
  c->lr=0x8022DBB8u; f_801EF7A8(c); // 8022DBB4
  c->r[4]=c->r[30]|c->r[30]; // 8022DBB8
  c->r[5]=0u+0x00000000u; // 8022DBBC
  c->lr=0x8022DBC4u; f_80231064(c); // 8022DBC0
  c->r[30]=c->r[30]+0x00000001u; // 8022DBC4
  cmps(c,0,(int32_t)c->r[30],2); // 8022DBC8
  if (crb(c,0)) { IRQCHK(c); goto L_8022DBB0; } // 8022DBCC
  c->lr=0x8022DBD4u; f_801ECCEC(c); // 8022DBD0
  c->lr=0x8022DBD8u; f_801ECCF4(c); // 8022DBD4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022DBD8
  cmps(c,0,(int32_t)c->r[0],2); // 8022DBDC
  if (!crb(c,2)) { goto L_8022DBF0; } // 8022DBE0
  c->r[0]=0u+0x00000001u; // 8022DBE4
  c->r[3]=c->r[29]+0x00010000u; // 8022DBE8
  W32(c->r[3]+0xFFFF81B0u,c->r[0]); // 8022DBEC
L_8022DBF0:;
  c->r[0]=0u+0x00000001u; // 8022DBF0
  c->r[3]=c->r[29]+0x00010000u; // 8022DBF4
  W32(c->r[3]+0xFFFF8288u,c->r[0]); // 8022DBF8
  c->r[3]=c->r[29]|c->r[29]; // 8022DBFC
  c->r[4]=0u+0x00000003u; // 8022DC00
  c->lr=0x8022DC08u; f_801EDEE0(c); // 8022DC04
L_8022DC08:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022DC08
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022DC0C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022DC10
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022DC14
  c->lr=c->r[0]; // 8022DC18
  c->r[1]=c->r[1]+0x00000020u; // 8022DC1C
  return; // 8022DC20
}

// fn_8022DC24
void f_8022DC24(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022DC24
  c->r[0]=c->lr; // 8022DC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022DC2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022DC30
  c->r[31]=c->r[3]|c->r[3]; // 8022DC34
  c->lr=0x8022DC3Cu; f_801ECCEC(c); // 8022DC38
  c->lr=0x8022DC40u; f_801ECCF4(c); // 8022DC3C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8022DC40
  cmpu(c,0,c->r[0],0x0000000Eu); // 8022DC44
  if (crb(c,1)) { goto L_8022DCC8; } // 8022DC48
  c->r[3]=0u+0x80480000u; // 8022DC4C
  c->r[3]=c->r[3]+0x000002D8u; // 8022DC50
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022DC54
  c->r[3]=R32(c->r[3]+c->r[0]); // 8022DC58
  c->ctr=c->r[3]; // 8022DC5C
  if (true) { switch (c->ctr) { case 0x8022DC64u: goto L_8022DC64; case 0x8022DC94u: goto L_8022DC94; case 0x8022DCC8u: goto L_8022DCC8; default: break; } dispatch(c,c->ctr); return; } // 8022DC60
L_8022DC64:;
  c->lr=0x8022DC68u; f_801ECCEC(c); // 8022DC64
  c->lr=0x8022DC6Cu; f_80208278(c); // 8022DC68
  cmps(c,0,(int32_t)c->r[3],0); // 8022DC6C
  if (crb(c,2)) { goto L_8022DCC8; } // 8022DC70
  c->lr=0x8022DC78u; f_801ECCEC(c); // 8022DC74
  c->lr=0x8022DC7Cu; f_80204B2C(c); // 8022DC78
  c->r[3]=0u+0x00000001u; // 8022DC7C
  c->r[4]=0u+0x80480000u; // 8022DC80
  c->r[4]=c->r[4]+0x000002A0u; // 8022DC84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022DC88
  c->lr=0x8022DC90u; f_803D3760(c); // 8022DC8C
  goto L_8022DCC8; // 8022DC90
L_8022DC94:;
  c->r[3]=c->r[31]+0x00010000u; // 8022DC94
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022DC98
  c->lr=0x8022DCA0u; f_8021B474(c); // 8022DC9C
  cmps(c,0,(int32_t)c->r[3],0); // 8022DCA0
  if (crb(c,2)) { goto L_8022DCC8; } // 8022DCA4
  c->r[3]=c->r[31]+0x00010000u; // 8022DCA8
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022DCAC
  c->r[4]=0u+0x00000000u; // 8022DCB0
  c->lr=0x8022DCB8u; f_8021B46C(c); // 8022DCB4
  c->r[3]=c->r[31]+0x00010000u; // 8022DCB8
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022DCBC
  c->r[4]=0u+0x00000000u; // 8022DCC0
  c->lr=0x8022DCC8u; f_8021B46C(c); // 8022DCC4
L_8022DCC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8022DCC8
  c->lr=0x8022DCD0u; f_801ED56C(c); // 8022DCCC
  c->r[3]=c->r[31]|c->r[31]; // 8022DCD0
  c->lr=0x8022DCD8u; f_8022D4E8(c); // 8022DCD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022DCD8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022DCDC
  c->lr=c->r[0]; // 8022DCE0
  c->r[1]=c->r[1]+0x00000010u; // 8022DCE4
  return; // 8022DCE8
}

// fn_8022DCEC
void f_8022DCEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022DCEC
  c->r[0]=c->lr; // 8022DCF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022DCF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022DCF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022DCFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022DD00
  W32(c->r[1]+0x00000010u,c->r[28]); // 8022DD04
  c->r[28]=c->r[3]|c->r[3]; // 8022DD08
  c->r[3]=c->r[3]+0x00010000u; // 8022DD0C
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022DD10
  c->lr=0x8022DD18u; f_8025860C(c); // 8022DD14
  cmps(c,0,(int32_t)c->r[3],0); // 8022DD18
  if (crb(c,2)) { goto L_8022DD90; } // 8022DD1C
  c->r[29]=0u+0x00000000u; // 8022DD20
  c->r[30]=c->r[28]|c->r[28]; // 8022DD24
  c->r[31]=c->r[28]+0x00010000u; // 8022DD28
L_8022DD2C:;
  c->r[3]=c->r[30]+0x00010000u; // 8022DD2C
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8022DD30
  c->r[4]=0u+0x00000000u; // 8022DD34
  c->lr=0x8022DD3Cu; f_80224B90(c); // 8022DD38
  c->r[3]=R32(c->r[31]+0xFFFF81D8u); // 8022DD3C
  c->r[4]=0u+0x00000000u; // 8022DD40
  c->r[5]=0u+0x00000003u; // 8022DD44
  c->lr=0x8022DD4Cu; f_8021B358(c); // 8022DD48
  c->r[30]=c->r[30]+0x00000004u; // 8022DD4C
  c->r[29]=c->r[29]+0x00000001u; // 8022DD50
  cmps(c,0,(int32_t)c->r[29],15); // 8022DD54
  if (crb(c,0)) { IRQCHK(c); goto L_8022DD2C; } // 8022DD58
  c->r[3]=c->r[28]+0x00010000u; // 8022DD5C
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022DD60
  c->r[4]=0u+0x00000000u; // 8022DD64
  c->lr=0x8022DD6Cu; f_8021B46C(c); // 8022DD68
  c->r[3]=c->r[28]|c->r[28]; // 8022DD6C
  c->r[4]=0u+0x00000005u; // 8022DD70
  c->lr=0x8022DD78u; f_801EDEE0(c); // 8022DD74
  c->lr=0x8022DD7Cu; f_8006592C(c); // 8022DD78
  c->r[4]=0u+0x00000001u; // 8022DD7C
  c->r[5]=0u+0x00000000u; // 8022DD80
  c->r[6]=0u+0xFFFFFFFFu; // 8022DD84
  c->r[7]=0u+0xFFFFFFFFu; // 8022DD88
  c->lr=0x8022DD90u; f_80048F20(c); // 8022DD8C
L_8022DD90:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022DD90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022DD94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022DD98
  c->r[28]=R32(c->r[1]+0x00000010u); // 8022DD9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022DDA0
  c->lr=c->r[0]; // 8022DDA4
  c->r[1]=c->r[1]+0x00000020u; // 8022DDA8
  return; // 8022DDAC
}

// fn_8022DDB0
void f_8022DDB0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022DDB0
  c->r[0]=c->lr; // 8022DDB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022DDB8
  c->r[11]=c->r[1]+0x00000020u; // 8022DDBC
  c->lr=0x8022DDC4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022DDC0
  c->r[31]=c->r[3]|c->r[3]; // 8022DDC4
  c->r[28]=0u+0x00000001u; // 8022DDC8
  c->r[27]=0u+0x00000000u; // 8022DDCC
  c->r[29]=c->r[31]|c->r[31]; // 8022DDD0
  c->r[30]=c->r[3]+0x00010000u; // 8022DDD4
L_8022DDD8:;
  c->r[3]=c->r[29]+0x00010000u; // 8022DDD8
  c->r[0]=R32(c->r[3]+0xFFFF8194u); // 8022DDDC
  cmps(c,0,(int32_t)c->r[0],0); // 8022DDE0
  if (crb(c,2)) { goto L_8022DDF4; } // 8022DDE4
  c->r[3]=R32(c->r[30]+0xFFFF8194u); // 8022DDE8
  c->lr=0x8022DDF0u; f_8025860C(c); // 8022DDEC
  c->r[28]=c->r[28]&c->r[3]; // 8022DDF0
L_8022DDF4:;
  c->r[29]=c->r[29]+0x00000004u; // 8022DDF4
  c->r[27]=c->r[27]+0x00000001u; // 8022DDF8
  cmps(c,0,(int32_t)c->r[27],2); // 8022DDFC
  if (crb(c,0)) { IRQCHK(c); goto L_8022DDD8; } // 8022DE00
  cmps(c,0,(int32_t)c->r[28],0); // 8022DE04
  if (crb(c,2)) { goto L_8022E0A0; } // 8022DE08
  c->r[0]=0u+0x00000000u; // 8022DE0C
  c->r[30]=c->r[31]+0x00010000u; // 8022DE10
  W8(c->r[30]+0xFFFF8260u,c->r[0]); // 8022DE14
  W8(c->r[30]+0xFFFF82ACu,c->r[0]); // 8022DE18
  W8(c->r[30]+0xFFFF82ADu,c->r[0]); // 8022DE1C
  W8(c->r[30]+0xFFFF8284u,c->r[0]); // 8022DE20
  c->r[27]=0u+0x00000000u; // 8022DE24
L_8022DE28:;
  c->r[3]=R32(c->r[30]+0xFFFF81D8u); // 8022DE28
  cmps(c,0,(int32_t)c->r[3],0); // 8022DE2C
  if (crb(c,2)) { goto L_8022DE3C; } // 8022DE30
  c->r[4]=0u+0x00000000u; // 8022DE34
  c->lr=0x8022DE3Cu; f_8021B46C(c); // 8022DE38
L_8022DE3C:;
  c->r[27]=c->r[27]+0x00000001u; // 8022DE3C
  cmps(c,0,(int32_t)c->r[27],15); // 8022DE40
  if (crb(c,0)) { IRQCHK(c); goto L_8022DE28; } // 8022DE44
  c->r[27]=0u+0x00000000u; // 8022DE48
  c->r[29]=c->r[31]|c->r[31]; // 8022DE4C
  c->r[30]=0u+0x00000000u; // 8022DE50
L_8022DE54:;
  c->r[3]=c->r[29]+0x00010000u; // 8022DE54
  c->r[0]=R32(c->r[3]+0xFFFF821Cu); // 8022DE58
  cmps(c,0,(int32_t)c->r[0],0); // 8022DE5C
  if (crb(c,2)) { goto L_8022DE98; } // 8022DE60
  c->lr=0x8022DE68u; f_80056B5C(c); // 8022DE64
  c->r[28]=c->r[3]|c->r[3]; // 8022DE68
  c->r[3]=c->r[31]|c->r[31]; // 8022DE6C
  c->lr=0x8022DE74u; f_80065DB4(c); // 8022DE70
  c->lr=0x8022DE78u; f_80056B54(c); // 8022DE74
  c->r[3]=c->r[29]+0x00010000u; // 8022DE78
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022DE7C
  c->r[4]=0u+0x00000001u; // 8022DE80
  c->lr=0x8022DE88u; f_8025346C(c); // 8022DE84
  c->r[3]=c->r[28]|c->r[28]; // 8022DE88
  c->lr=0x8022DE90u; f_80056B54(c); // 8022DE8C
  c->r[3]=c->r[29]+0x00010000u; // 8022DE90
  W32(c->r[3]+0xFFFF821Cu,c->r[30]); // 8022DE94
L_8022DE98:;
  c->r[29]=c->r[29]+0x00000004u; // 8022DE98
  c->r[27]=c->r[27]+0x00000001u; // 8022DE9C
  cmps(c,0,(int32_t)c->r[27],2); // 8022DEA0
  if (crb(c,0)) { IRQCHK(c); goto L_8022DE54; } // 8022DEA4
  c->r[27]=0u+0x00000000u; // 8022DEA8
  c->r[29]=c->r[31]|c->r[31]; // 8022DEAC
  c->r[30]=0u+0x00000000u; // 8022DEB0
L_8022DEB4:;
  c->r[3]=c->r[29]+0x00010000u; // 8022DEB4
  c->r[0]=R32(c->r[3]+0xFFFF8224u); // 8022DEB8
  cmps(c,0,(int32_t)c->r[0],0); // 8022DEBC
  if (crb(c,2)) { goto L_8022DEF8; } // 8022DEC0
  c->lr=0x8022DEC8u; f_80056B5C(c); // 8022DEC4
  c->r[28]=c->r[3]|c->r[3]; // 8022DEC8
  c->r[3]=c->r[31]|c->r[31]; // 8022DECC
  c->lr=0x8022DED4u; f_80065DB4(c); // 8022DED0
  c->lr=0x8022DED8u; f_80056B54(c); // 8022DED4
  c->r[3]=c->r[29]+0x00010000u; // 8022DED8
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022DEDC
  c->r[4]=0u+0x00000001u; // 8022DEE0
  c->lr=0x8022DEE8u; f_8025346C(c); // 8022DEE4
  c->r[3]=c->r[28]|c->r[28]; // 8022DEE8
  c->lr=0x8022DEF0u; f_80056B54(c); // 8022DEEC
  c->r[3]=c->r[29]+0x00010000u; // 8022DEF0
  W32(c->r[3]+0xFFFF8224u,c->r[30]); // 8022DEF4
L_8022DEF8:;
  c->r[29]=c->r[29]+0x00000004u; // 8022DEF8
  c->r[27]=c->r[27]+0x00000001u; // 8022DEFC
  cmps(c,0,(int32_t)c->r[27],3); // 8022DF00
  if (crb(c,0)) { IRQCHK(c); goto L_8022DEB4; } // 8022DF04
  c->r[3]=c->r[31]+0x00010000u; // 8022DF08
  c->r[0]=R32(c->r[3]+0xFFFF819Cu); // 8022DF0C
  cmps(c,0,(int32_t)c->r[0],0); // 8022DF10
  if (crb(c,2)) { goto L_8022DF50; } // 8022DF14
  c->lr=0x8022DF1Cu; f_80056B5C(c); // 8022DF18
  c->r[27]=c->r[3]|c->r[3]; // 8022DF1C
  c->r[3]=c->r[31]|c->r[31]; // 8022DF20
  c->lr=0x8022DF28u; f_80065DB4(c); // 8022DF24
  c->lr=0x8022DF2Cu; f_80056B54(c); // 8022DF28
  c->r[3]=c->r[31]+0x00010000u; // 8022DF2C
  c->r[3]=R32(c->r[3]+0xFFFF819Cu); // 8022DF30
  c->r[4]=0u+0x00000001u; // 8022DF34
  c->lr=0x8022DF3Cu; f_802574AC(c); // 8022DF38
  c->r[3]=c->r[27]|c->r[27]; // 8022DF3C
  c->lr=0x8022DF44u; f_80056B54(c); // 8022DF40
  c->r[0]=0u+0x00000000u; // 8022DF44
  c->r[3]=c->r[31]+0x00010000u; // 8022DF48
  W32(c->r[3]+0xFFFF819Cu,c->r[0]); // 8022DF4C
L_8022DF50:;
  c->r[3]=c->r[31]+0x00010000u; // 8022DF50
  c->r[0]=R32(c->r[3]+0xFFFF81A0u); // 8022DF54
  cmps(c,0,(int32_t)c->r[0],0); // 8022DF58
  if (crb(c,2)) { goto L_8022DF98; } // 8022DF5C
  c->lr=0x8022DF64u; f_80056B5C(c); // 8022DF60
  c->r[27]=c->r[3]|c->r[3]; // 8022DF64
  c->r[3]=c->r[31]|c->r[31]; // 8022DF68
  c->lr=0x8022DF70u; f_80065DB4(c); // 8022DF6C
  c->lr=0x8022DF74u; f_80056B54(c); // 8022DF70
  c->r[3]=c->r[31]+0x00010000u; // 8022DF74
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 8022DF78
  c->r[4]=0u+0x00000001u; // 8022DF7C
  c->lr=0x8022DF84u; f_8025698C(c); // 8022DF80
  c->r[3]=c->r[27]|c->r[27]; // 8022DF84
  c->lr=0x8022DF8Cu; f_80056B54(c); // 8022DF88
  c->r[0]=0u+0x00000000u; // 8022DF8C
  c->r[3]=c->r[31]+0x00010000u; // 8022DF90
  W32(c->r[3]+0xFFFF81A0u,c->r[0]); // 8022DF94
L_8022DF98:;
  c->r[3]=c->r[31]+0x00010000u; // 8022DF98
  c->r[0]=R32(c->r[3]+0xFFFF81A4u); // 8022DF9C
  cmps(c,0,(int32_t)c->r[0],0); // 8022DFA0
  if (crb(c,2)) { goto L_8022DFE0; } // 8022DFA4
  c->lr=0x8022DFACu; f_80056B5C(c); // 8022DFA8
  c->r[27]=c->r[3]|c->r[3]; // 8022DFAC
  c->r[3]=c->r[31]|c->r[31]; // 8022DFB0
  c->lr=0x8022DFB8u; f_80065DB4(c); // 8022DFB4
  c->lr=0x8022DFBCu; f_80056B54(c); // 8022DFB8
  c->r[3]=c->r[31]+0x00010000u; // 8022DFBC
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8022DFC0
  c->r[4]=0u+0x00000001u; // 8022DFC4
  c->lr=0x8022DFCCu; f_80256DC4(c); // 8022DFC8
  c->r[3]=c->r[27]|c->r[27]; // 8022DFCC
  c->lr=0x8022DFD4u; f_80056B54(c); // 8022DFD0
  c->r[0]=0u+0x00000000u; // 8022DFD4
  c->r[3]=c->r[31]+0x00010000u; // 8022DFD8
  W32(c->r[3]+0xFFFF81A4u,c->r[0]); // 8022DFDC
L_8022DFE0:;
  c->r[27]=0u+0x00000000u; // 8022DFE0
  c->r[29]=c->r[31]|c->r[31]; // 8022DFE4
  c->r[30]=0u+0x00000000u; // 8022DFE8
L_8022DFEC:;
  c->lr=0x8022DFF0u; f_80056B5C(c); // 8022DFEC
  c->r[28]=c->r[3]|c->r[3]; // 8022DFF0
  c->r[3]=c->r[31]|c->r[31]; // 8022DFF4
  c->lr=0x8022DFFCu; f_80065DB4(c); // 8022DFF8
  c->lr=0x8022E000u; f_80056B54(c); // 8022DFFC
  c->r[3]=c->r[29]+0x00010000u; // 8022E000
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022E004
  c->r[4]=0u+0x00000001u; // 8022E008
  c->lr=0x8022E010u; f_80257E6C(c); // 8022E00C
  c->r[3]=c->r[28]|c->r[28]; // 8022E010
  c->lr=0x8022E018u; f_80056B54(c); // 8022E014
  c->r[3]=c->r[29]+0x00010000u; // 8022E018
  W32(c->r[3]+0xFFFF8194u,c->r[30]); // 8022E01C
  c->r[29]=c->r[29]+0x00000004u; // 8022E020
  c->r[27]=c->r[27]+0x00000001u; // 8022E024
  cmps(c,0,(int32_t)c->r[27],2); // 8022E028
  if (crb(c,0)) { IRQCHK(c); goto L_8022DFEC; } // 8022E02C
  c->r[3]=c->r[31]|c->r[31]; // 8022E030
  c->lr=0x8022E038u; f_801EDEFC(c); // 8022E034
  cmpu(c,0,c->r[3],0x00000017u); // 8022E038
  if (!crb(c,2)) { goto L_8022E070; } // 8022E03C
  c->lr=0x8022E044u; f_801ECCEC(c); // 8022E040
  c->lr=0x8022E048u; f_801ECCF4(c); // 8022E044
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022E048
  cmps(c,0,(int32_t)c->r[0],2); // 8022E04C
  if (!crb(c,2)) { goto L_8022E064; } // 8022E050
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E054
  c->r[4]=0u+0x00000001u; // 8022E058
  c->lr=0x8022E060u; f_801EF5C0(c); // 8022E05C
  goto L_8022E070; // 8022E060
L_8022E064:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E064
  c->r[4]=0u+0x00000002u; // 8022E068
  c->lr=0x8022E070u; f_801EF5C0(c); // 8022E06C
L_8022E070:;
  c->r[3]=c->r[31]|c->r[31]; // 8022E070
  c->lr=0x8022E078u; f_801EDEFC(c); // 8022E074
  c->r[4]=c->r[3]|c->r[3]; // 8022E078
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E07C
  c->lr=0x8022E084u; f_801EF234(c); // 8022E080
  c->r[0]=0u+0x00000000u; // 8022E084
  c->r[3]=c->r[31]+0x00010000u; // 8022E088
  W32(c->r[3]+0xFFFF8170u,c->r[0]); // 8022E08C
  W32(c->r[3]+0xFFFF8174u,c->r[0]); // 8022E090
  c->r[3]=c->r[31]|c->r[31]; // 8022E094
  c->r[4]=0u+0x00000000u; // 8022E098
  c->lr=0x8022E0A0u; f_801EDEE0(c); // 8022E09C
L_8022E0A0:;
  c->r[11]=c->r[1]+0x00000020u; // 8022E0A0
  c->lr=0x8022E0A8u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022E0A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022E0A8
  c->lr=c->r[0]; // 8022E0AC
  c->r[1]=c->r[1]+0x00000020u; // 8022E0B0
  return; // 8022E0B4
}

// fn_8022E0B8
void f_8022E0B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E0B8
  c->r[0]=c->lr; // 8022E0BC
  W32(c->r[1]+0x00000214u,c->r[0]); // 8022E0C0
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 8022E0C4
  c->r[31]=c->r[3]|c->r[3]; // 8022E0C8
  c->r[4]=c->r[3]+0x00010000u; // 8022E0CC
  c->r[0]=R32(c->r[4]+0xFFFF817Cu); // 8022E0D0
  cmps(c,0,(int32_t)c->r[0],2); // 8022E0D4
  if (crb(c,2)) { goto L_8022E1B8; } // 8022E0D8
  if (!crb(c,0)) { goto L_8022E0F0; } // 8022E0DC
  cmps(c,0,(int32_t)c->r[0],0); // 8022E0E0
  if (crb(c,2)) { goto L_8022E0FC; } // 8022E0E4
  if (!crb(c,0)) { goto L_8022E120; } // 8022E0E8
  goto L_8022E220; // 8022E0EC
L_8022E0F0:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022E0F0
  if (!crb(c,0)) { goto L_8022E220; } // 8022E0F4
  goto L_8022E1DC; // 8022E0F8
L_8022E0FC:;
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 8022E0FC
  cmps(c,0,(int32_t)c->r[0],0); // 8022E100
  if (crb(c,2)) { goto L_8022E10C; } // 8022E104
  c->lr=0x8022E10Cu; f_801EE384(c); // 8022E108
L_8022E10C:;
  c->r[4]=c->r[31]+0x00010000u; // 8022E10C
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 8022E110
  c->r[0]=c->r[3]+0x00000001u; // 8022E114
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8022E118
  goto L_8022E220; // 8022E11C
L_8022E120:;
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 8022E120
  cmps(c,0,(int32_t)c->r[0],0); // 8022E124
  if (!crb(c,2)) { goto L_8022E220; } // 8022E128
  c->lr=0x8022E130u; f_801ECCEC(c); // 8022E12C
  c->r[4]=c->r[1]+0x00000008u; // 8022E130
  c->lr=0x8022E138u; f_80207000(c); // 8022E134
  cmps(c,0,(int32_t)c->r[3],0); // 8022E138
  if (crb(c,2)) { goto L_8022E154; } // 8022E13C
  c->r[3]=c->r[31]|c->r[31]; // 8022E140
  c->r[4]=c->r[1]+0x00000008u; // 8022E144
  c->r[5]=0u+0x00000000u; // 8022E148
  c->lr=0x8022E150u; f_801EE164(c); // 8022E14C
  goto L_8022E174; // 8022E150
L_8022E154:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E154
  c->r[4]=0u+0x00000005u; // 8022E158
  c->r[5]=0u+0x00000013u; // 8022E15C
  c->lr=0x8022E164u; f_801EF42C(c); // 8022E160
  c->r[4]=c->r[3]|c->r[3]; // 8022E164
  c->r[3]=c->r[31]|c->r[31]; // 8022E168
  c->r[5]=0u+0x00000000u; // 8022E16C
  c->lr=0x8022E174u; f_801EE164(c); // 8022E170
L_8022E174:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E174
  c->r[4]=0u+0x0000000Du; // 8022E178
  c->r[5]=0u+0x00000011u; // 8022E17C
  c->lr=0x8022E184u; f_801EF42C(c); // 8022E180
  c->r[4]=c->r[3]|c->r[3]; // 8022E184
  c->r[3]=c->r[31]|c->r[31]; // 8022E188
  c->r[5]=0u+0x80230000u; // 8022E18C
  c->r[5]=c->r[5]+0x00001008u; // 8022E190
  c->lr=0x8022E198u; f_801EE6AC(c); // 8022E194
  c->r[3]=c->r[31]|c->r[31]; // 8022E198
  c->r[4]=0u+0x00000001u; // 8022E19C
  c->lr=0x8022E1A4u; f_801ECD0C(c); // 8022E1A0
  c->r[4]=c->r[31]+0x00010000u; // 8022E1A4
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 8022E1A8
  c->r[0]=c->r[3]+0x00000001u; // 8022E1AC
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8022E1B0
  goto L_8022E220; // 8022E1B4
L_8022E1B8:;
  c->lr=0x8022E1BCu; f_801ED56C(c); // 8022E1B8
  c->r[4]=c->r[31]+0x00010000u; // 8022E1BC
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 8022E1C0
  cmps(c,0,(int32_t)c->r[0],0); // 8022E1C4
  if (crb(c,2)) { goto L_8022E220; } // 8022E1C8
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 8022E1CC
  c->r[0]=c->r[3]+0x00000001u; // 8022E1D0
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8022E1D4
  goto L_8022E220; // 8022E1D8
L_8022E1DC:;
  c->lr=0x8022E1E0u; f_801ED56C(c); // 8022E1DC
  c->r[3]=c->r[31]+0x00010000u; // 8022E1E0
  c->r[0]=R32(c->r[3]+0xFFFF8148u); // 8022E1E4
  cmps(c,0,(int32_t)c->r[0],0); // 8022E1E8
  if (!crb(c,2)) { goto L_8022E220; } // 8022E1EC
  c->lr=0x8022E1F4u; f_801ECCEC(c); // 8022E1F0
  c->lr=0x8022E1F8u; f_80207B20(c); // 8022E1F4
  cmps(c,0,(int32_t)c->r[3],0); // 8022E1F8
  if (crb(c,2)) { goto L_8022E220; } // 8022E1FC
  c->lr=0x8022E204u; f_801ECCEC(c); // 8022E200
  c->lr=0x8022E208u; f_802079DC(c); // 8022E204
  c->r[3]=c->r[31]|c->r[31]; // 8022E208
  c->r[4]=0u+0x00000003u; // 8022E20C
  c->lr=0x8022E214u; f_801EDEF0(c); // 8022E210
  c->r[3]=c->r[31]|c->r[31]; // 8022E214
  c->r[4]=0u+0x00000005u; // 8022E218
  c->lr=0x8022E220u; f_801EDEE0(c); // 8022E21C
L_8022E220:;
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 8022E220
  c->r[0]=R32(c->r[1]+0x00000214u); // 8022E224
  c->lr=c->r[0]; // 8022E228
  c->r[1]=c->r[1]+0x00000210u; // 8022E22C
  return; // 8022E230
}

// fn_8022E234
void f_8022E234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E234
  c->r[0]=c->lr; // 8022E238
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022E23C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022E240
  c->r[31]=c->r[3]|c->r[3]; // 8022E244
  c->r[4]=c->r[3]+0x00010000u; // 8022E248
  c->r[0]=R32(c->r[4]+0xFFFF817Cu); // 8022E24C
  cmps(c,0,(int32_t)c->r[0],2); // 8022E250
  if (crb(c,2)) { goto L_8022E308; } // 8022E254
  if (!crb(c,0)) { goto L_8022E26C; } // 8022E258
  cmps(c,0,(int32_t)c->r[0],0); // 8022E25C
  if (crb(c,2)) { goto L_8022E278; } // 8022E260
  if (!crb(c,0)) { goto L_8022E29C; } // 8022E264
  goto L_8022E370; // 8022E268
L_8022E26C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022E26C
  if (!crb(c,0)) { goto L_8022E370; } // 8022E270
  goto L_8022E32C; // 8022E274
L_8022E278:;
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 8022E278
  cmps(c,0,(int32_t)c->r[0],0); // 8022E27C
  if (crb(c,2)) { goto L_8022E288; } // 8022E280
  c->lr=0x8022E288u; f_801EE384(c); // 8022E284
L_8022E288:;
  c->r[4]=c->r[31]+0x00010000u; // 8022E288
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 8022E28C
  c->r[0]=c->r[3]+0x00000001u; // 8022E290
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8022E294
  goto L_8022E370; // 8022E298
L_8022E29C:;
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 8022E29C
  cmps(c,0,(int32_t)c->r[0],0); // 8022E2A0
  if (!crb(c,2)) { goto L_8022E370; } // 8022E2A4
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E2A8
  c->r[4]=0u+0x00000020u; // 8022E2AC
  c->lr=0x8022E2B4u; f_801EF41C(c); // 8022E2B0
  c->r[4]=c->r[3]|c->r[3]; // 8022E2B4
  c->r[3]=c->r[31]|c->r[31]; // 8022E2B8
  c->r[5]=0u+0x00000000u; // 8022E2BC
  c->lr=0x8022E2C4u; f_801EE164(c); // 8022E2C0
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022E2C4
  c->r[4]=0u+0x0000000Du; // 8022E2C8
  c->r[5]=0u+0x00000011u; // 8022E2CC
  c->lr=0x8022E2D4u; f_801EF42C(c); // 8022E2D0
  c->r[4]=c->r[3]|c->r[3]; // 8022E2D4
  c->r[3]=c->r[31]|c->r[31]; // 8022E2D8
  c->r[5]=0u+0x80230000u; // 8022E2DC
  c->r[5]=c->r[5]+0x00001008u; // 8022E2E0
  c->lr=0x8022E2E8u; f_801EE6AC(c); // 8022E2E4
  c->r[3]=c->r[31]|c->r[31]; // 8022E2E8
  c->r[4]=0u+0x00000001u; // 8022E2EC
  c->lr=0x8022E2F4u; f_801ECD0C(c); // 8022E2F0
  c->r[4]=c->r[31]+0x00010000u; // 8022E2F4
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 8022E2F8
  c->r[0]=c->r[3]+0x00000001u; // 8022E2FC
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8022E300
  goto L_8022E370; // 8022E304
L_8022E308:;
  c->lr=0x8022E30Cu; f_801ED56C(c); // 8022E308
  c->r[4]=c->r[31]+0x00010000u; // 8022E30C
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 8022E310
  cmps(c,0,(int32_t)c->r[0],0); // 8022E314
  if (crb(c,2)) { goto L_8022E370; } // 8022E318
  c->r[3]=R32(c->r[4]+0xFFFF817Cu); // 8022E31C
  c->r[0]=c->r[3]+0x00000001u; // 8022E320
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8022E324
  goto L_8022E370; // 8022E328
L_8022E32C:;
  c->lr=0x8022E330u; f_801ED56C(c); // 8022E32C
  c->r[3]=c->r[31]+0x00010000u; // 8022E330
  c->r[0]=R32(c->r[3]+0xFFFF8148u); // 8022E334
  cmps(c,0,(int32_t)c->r[0],0); // 8022E338
  if (!crb(c,2)) { goto L_8022E370; } // 8022E33C
  c->lr=0x8022E344u; f_801ECCEC(c); // 8022E340
  c->lr=0x8022E348u; f_80207B20(c); // 8022E344
  cmps(c,0,(int32_t)c->r[3],0); // 8022E348
  if (crb(c,2)) { goto L_8022E370; } // 8022E34C
  c->lr=0x8022E354u; f_801ECCEC(c); // 8022E350
  c->lr=0x8022E358u; f_802079DC(c); // 8022E354
  c->r[3]=c->r[31]|c->r[31]; // 8022E358
  c->r[4]=0u+0x00000003u; // 8022E35C
  c->lr=0x8022E364u; f_801EDEF0(c); // 8022E360
  c->r[3]=c->r[31]|c->r[31]; // 8022E364
  c->r[4]=0u+0x00000005u; // 8022E368
  c->lr=0x8022E370u; f_801EDEE0(c); // 8022E36C
L_8022E370:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022E370
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022E374
  c->lr=c->r[0]; // 8022E378
  c->r[1]=c->r[1]+0x00000010u; // 8022E37C
  return; // 8022E380
}

// fn_8022E384
void f_8022E384(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E384
  c->r[0]=c->lr; // 8022E388
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022E38C
  c->r[11]=c->r[1]+0x00000030u; // 8022E390
  c->lr=0x8022E398u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022E394
  c->r[31]=c->r[3]|c->r[3]; // 8022E398
  c->lr=0x8022E3A0u; f_801EDEE8(c); // 8022E39C
  cmps(c,0,(int32_t)c->r[3],3); // 8022E3A0
  if (!crb(c,2)) { goto L_8022E4A4; } // 8022E3A4
  c->r[3]=c->r[31]+0x00010000u; // 8022E3A8
  c->r[0]=R8(c->r[3]+0xFFFF8292u); // 8022E3AC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022E3B0
  cmps(c,0,(int32_t)c->r[0],1); // 8022E3B4
  if (!crb(c,2)) { goto L_8022E3D4; } // 8022E3B8
  c->r[3]=0u+0x00000001u; // 8022E3BC
  c->r[4]=0u+0x80480000u; // 8022E3C0
  c->r[4]=c->r[4]+0x00000314u; // 8022E3C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022E3C8
  c->lr=0x8022E3D0u; f_803D3760(c); // 8022E3CC
  goto L_8022E4A4; // 8022E3D0
L_8022E3D4:;
  c->r[3]=0u+0x00000001u; // 8022E3D4
  c->r[4]=0u+0x80480000u; // 8022E3D8
  c->r[4]=c->r[4]+0x00000340u; // 8022E3DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022E3E0
  c->lr=0x8022E3E8u; f_803D3760(c); // 8022E3E4
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022E3E8
  c->r[3]=c->r[31]+0x00010000u; // 8022E3EC
  {uint32_t ea=c->r[3]+0xFFFF82B8u; WF32(ea,c->f[0]);} // 8022E3F0
  c->lr=0x8022E3F8u; f_801ECCEC(c); // 8022E3F4
  c->lr=0x8022E3FCu; f_801ECCF4(c); // 8022E3F8
  c->r[3]=R32(c->r[3]+0x00000700u); // 8022E3FC
  c->r[26]=c->r[3]+0x00000040u; // 8022E400
  c->r[25]=0u+0x00000000u; // 8022E404
  c->r[3]=0u+0x80480000u; // 8022E408
  c->r[29]=c->r[3]+0x000001B8u; // 8022E40C
  c->r[28]=c->r[31]|c->r[31]; // 8022E410
  c->r[3]=0u+0x80480000u; // 8022E414
  c->r[27]=c->r[3]+0x000001D0u; // 8022E418
  c->r[30]=c->r[31]+0x00010000u; // 8022E41C
L_8022E420:;
  c->r[3]=c->r[28]+0x00010000u; // 8022E420
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022E424
  c->r[0]=R32(c->r[29]+0x00000000u); // 8022E428
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022E42C
  c->r[4]=c->r[26]+c->r[0]; // 8022E430
  c->r[0]=R32(c->r[4]+0x00000080u); // 8022E434
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 8022E438
  c->lr=0x8022E440u; f_802536F8(c); // 8022E43C
  c->r[3]=c->r[28]+0x00010000u; // 8022E440
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022E444
  {uint32_t ea=c->r[27]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022E448
  {uint32_t ea=c->r[30]+0xFFFF82B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022E44C
  c->lr=0x8022E454u; f_80253658(c); // 8022E450
  c->r[3]=c->r[28]+0x00010000u; // 8022E454
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022E458
  c->r[4]=0u+0x00000001u; // 8022E45C
  c->lr=0x8022E464u; f_80253970(c); // 8022E460
  c->r[29]=c->r[29]+0x00000004u; // 8022E464
  c->r[28]=c->r[28]+0x00000004u; // 8022E468
  c->r[27]=c->r[27]+0x00000004u; // 8022E46C
  c->r[25]=c->r[25]+0x00000001u; // 8022E470
  cmps(c,0,(int32_t)c->r[25],3); // 8022E474
  if (crb(c,0)) { IRQCHK(c); goto L_8022E420; } // 8022E478
  c->r[0]=0u+0x00000000u; // 8022E47C
  c->r[3]=c->r[31]+0x00010000u; // 8022E480
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022E484
  c->r[0]=0u+0x00000001u; // 8022E488
  W8(c->r[3]+0xFFFF8292u,c->r[0]); // 8022E48C
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8022E490
  c->lr=0x8022E498u; f_80256F5C(c); // 8022E494
  c->r[3]=c->r[31]|c->r[31]; // 8022E498
  c->r[4]=0u+0x00000008u; // 8022E49C
  c->lr=0x8022E4A4u; f_801EDEE0(c); // 8022E4A0
L_8022E4A4:;
  c->r[11]=c->r[1]+0x00000030u; // 8022E4A4
  c->lr=0x8022E4ACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022E4A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022E4AC
  c->lr=c->r[0]; // 8022E4B0
  c->r[1]=c->r[1]+0x00000030u; // 8022E4B4
  return; // 8022E4B8
}

// fn_8022E4BC
void f_8022E4BC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E4BC
  c->r[0]=c->lr; // 8022E4C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022E4C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022E4C8
  c->r[31]=c->r[3]|c->r[3]; // 8022E4CC
  c->r[3]=0u+0x00000001u; // 8022E4D0
  c->r[4]=0u+0x80480000u; // 8022E4D4
  c->r[4]=c->r[4]+0x00000360u; // 8022E4D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022E4DC
  c->lr=0x8022E4E4u; f_803D3760(c); // 8022E4E0
  c->r[3]=c->r[31]|c->r[31]; // 8022E4E4
  c->r[4]=0u+0x00000017u; // 8022E4E8
  c->lr=0x8022E4F0u; f_801EDEF0(c); // 8022E4EC
  c->r[3]=c->r[31]|c->r[31]; // 8022E4F0
  c->r[4]=0u+0x00000005u; // 8022E4F4
  c->lr=0x8022E4FCu; f_801EDEE0(c); // 8022E4F8
  c->r[3]=c->r[31]|c->r[31]; // 8022E4FC
  c->r[4]=0u+0x00000002u; // 8022E500
  c->lr=0x8022E508u; f_801EECBC(c); // 8022E504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022E508
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022E50C
  c->lr=c->r[0]; // 8022E510
  c->r[1]=c->r[1]+0x00000010u; // 8022E514
  return; // 8022E518
}

// fn_8022E51C
void f_8022E51C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E51C
  c->r[0]=c->lr; // 8022E520
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022E524
  c->r[11]=c->r[1]+0x00000020u; // 8022E528
  c->lr=0x8022E530u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022E52C
  c->r[31]=c->r[3]|c->r[3]; // 8022E530
  c->lr=0x8022E538u; f_801ECCEC(c); // 8022E534
  c->lr=0x8022E53Cu; f_801ECCF4(c); // 8022E538
  c->r[30]=c->r[3]|c->r[3]; // 8022E53C
  c->r[27]=0u+0x00000001u; // 8022E540
  c->r[4]=c->r[31]+0x00010000u; // 8022E544
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF8290u); // 8022E548
  cmps(c,0,(int32_t)c->r[0],1); // 8022E54C
  if (crb(c,2)) { goto L_8022E608; } // 8022E550
  if (!crb(c,0)) { goto L_8022E648; } // 8022E554
  cmps(c,0,(int32_t)c->r[0],0); // 8022E558
  if (!crb(c,0)) { goto L_8022E564; } // 8022E55C
  goto L_8022E648; // 8022E560
L_8022E564:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022E564
  cmps(c,0,(int32_t)c->r[0],2); // 8022E568
  if (!crb(c,2)) { goto L_8022E578; } // 8022E56C
  c->r[0]=0u+0x00000001u; // 8022E570
  W32(c->r[4]+0xFFFF81B0u,c->r[0]); // 8022E574
L_8022E578:;
  c->r[3]=c->r[31]|c->r[31]; // 8022E578
  c->r[4]=0u+0x00000001u; // 8022E57C
  c->lr=0x8022E584u; f_80230678(c); // 8022E580
  c->r[3]=c->r[31]|c->r[31]; // 8022E584
  c->r[4]=0u+0x00000001u; // 8022E588
  c->lr=0x8022E590u; f_802304DC(c); // 8022E58C
  c->r[3]=c->r[31]+0x00010000u; // 8022E590
  {uint32_t ea=c->r[3]+0xFFFF82B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022E594
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022E598
  fcmp(c,0,c->f[1],c->f[0]); // 8022E59C
  if (!crb(c,1)) { goto L_8022E5B4; } // 8022E5A0
  c->r[27]=0u+0x00000000u; // 8022E5A4
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022E5A8
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 8022E5AC
  {uint32_t ea=c->r[3]+0xFFFF82B8u; WF32(ea,c->f[0]);} // 8022E5B0
L_8022E5B4:;
  c->r[26]=0u+0x00000000u; // 8022E5B4
  c->r[3]=0u+0x80480000u; // 8022E5B8
  c->r[29]=c->r[3]+0x000001D0u; // 8022E5BC
  c->r[28]=c->r[31]|c->r[31]; // 8022E5C0
  c->r[30]=c->r[31]+0x00010000u; // 8022E5C4
L_8022E5C8:;
  c->r[3]=c->r[28]+0x00010000u; // 8022E5C8
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022E5CC
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022E5D0
  {uint32_t ea=c->r[30]+0xFFFF82B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022E5D4
  c->lr=0x8022E5DCu; f_80253658(c); // 8022E5D8
  c->r[29]=c->r[29]+0x00000004u; // 8022E5DC
  c->r[28]=c->r[28]+0x00000004u; // 8022E5E0
  c->r[26]=c->r[26]+0x00000001u; // 8022E5E4
  cmps(c,0,(int32_t)c->r[26],3); // 8022E5E8
  if (crb(c,0)) { IRQCHK(c); goto L_8022E5C8; } // 8022E5EC
  cmps(c,0,(int32_t)c->r[27],0); // 8022E5F0
  if (crb(c,2)) { goto L_8022E74C; } // 8022E5F4
  c->r[0]=0u+0x00000001u; // 8022E5F8
  c->r[3]=c->r[31]+0x00010000u; // 8022E5FC
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022E600
  goto L_8022E74C; // 8022E604
L_8022E608:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8022E608
  cmps(c,0,(int32_t)c->r[0],2); // 8022E60C
  if (!crb(c,2)) { goto L_8022E620; } // 8022E610
  c->r[0]=R32(c->r[4]+0xFFFF8168u); // 8022E614
  cmps(c,0,(int32_t)c->r[0],0); // 8022E618
  if (crb(c,2)) { goto L_8022E74C; } // 8022E61C
L_8022E620:;
  c->r[4]=c->r[31]+0x00010000u; // 8022E620
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF8290u); // 8022E624
  c->r[0]=c->r[3]+0x00000001u; // 8022E628
  W16(c->r[4]+0xFFFF8290u,c->r[0]); // 8022E62C
  c->r[3]=0u+0x00000001u; // 8022E630
  c->r[4]=0u+0x80480000u; // 8022E634
  c->r[4]=c->r[4]+0x00000388u; // 8022E638
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022E63C
  c->lr=0x8022E644u; f_803D3760(c); // 8022E640
  goto L_8022E74C; // 8022E644
L_8022E648:;
  c->lr=0x8022E64Cu; f_80361C0C(c); // 8022E648
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 8022E64C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8022E650
  cmps(c,0,(int32_t)c->r[0],2); // 8022E654
  if (!crb(c,2)) { goto L_8022E6B8; } // 8022E658
  c->r[3]=c->r[31]+0x00010000u; // 8022E65C
  c->r[3]=R32(c->r[3]+0xFFFF81A8u); // 8022E660
  c->r[4]=0u+0x00000001u; // 8022E664
  c->lr=0x8022E66Cu; f_8021B46C(c); // 8022E668
  c->r[3]=c->r[31]+0x00010000u; // 8022E66C
  c->r[3]=R32(c->r[3]+0xFFFF81ACu); // 8022E670
  c->r[4]=0u+0x00000001u; // 8022E674
  c->lr=0x8022E67Cu; f_8021B46C(c); // 8022E678
  c->r[3]=c->r[31]|c->r[31]; // 8022E67C
  c->r[4]=0u+0x0000000Fu; // 8022E680
  c->lr=0x8022E688u; f_8022D5C4(c); // 8022E684
  c->lr=0x8022E68Cu; f_80361BF4(c); // 8022E688
  c->r[5]=0u+0x80000000u; // 8022E68C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 8022E690
  c->r[5]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8022E694
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 8022E698
  c->r[5]=c->r[0]-c->r[5]; // 8022E69C
  c->r[0]=0u+0x00000000u; // 8022E6A0
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 8022E6A4
  c->r[0]=addc(c,c->r[0],c->r[3],c->xer_ca); // 8022E6A8
  c->r[3]=c->r[31]+0x00010000u; // 8022E6AC
  W32(c->r[3]+0xFFFF82C4u,c->r[4]); // 8022E6B0
  W32(c->r[3]+0xFFFF82C0u,c->r[0]); // 8022E6B4
L_8022E6B8:;
  c->r[0]=0u+0x00000000u; // 8022E6B8
  c->r[3]=c->r[31]+0x00010000u; // 8022E6BC
  W32(c->r[3]+0xFFFF82CCu,c->r[0]); // 8022E6C0
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022E6C4
  c->r[0]=0u+0x00000002u; // 8022E6C8
  W32(c->r[3]+0xFFFF828Cu,c->r[0]); // 8022E6CC
  c->r[3]=c->r[31]|c->r[31]; // 8022E6D0
  c->r[4]=0u+0x00000002u; // 8022E6D4
  c->r[5]=0u+0x00000001u; // 8022E6D8
  c->lr=0x8022E6E0u; f_8022D784(c); // 8022E6DC
  c->r[3]=c->r[31]+0x00010000u; // 8022E6E0
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022E6E4
  c->r[4]=0u+0x00000001u; // 8022E6E8
  c->lr=0x8022E6F0u; f_8021B46C(c); // 8022E6EC
  c->r[3]=c->r[31]|c->r[31]; // 8022E6F0
  c->r[4]=0u+0x00000009u; // 8022E6F4
  c->lr=0x8022E6FCu; f_801EDEE0(c); // 8022E6F8
  c->lr=0x8022E700u; f_80361C0C(c); // 8022E6FC
  c->lr=0x8022E704u; f_8005C2D0(c); // 8022E700
  c->lr=0x8022E708u; f_8005C538(c); // 8022E704
  c->r[4]=0u+0x288E0000u; // 8022E708
  c->r[0]=c->r[4]+0xFFFFF0CBu; // 8022E70C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 8022E710
  c->r[0]=sraw(c,c->r[0],4); // 8022E714
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8022E718
  c->r[0]=c->r[0]+c->r[4]; // 8022E71C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)101); // 8022E720
  c->r[4]=c->r[3]-c->r[0]; // 8022E724
  c->r[3]=c->r[31]|c->r[31]; // 8022E728
  c->r[4]=c->r[4]+0x000001C2u; // 8022E72C
  c->lr=0x8022E734u; f_8022D8B8(c); // 8022E730
  c->lr=0x8022E738u; f_8006592C(c); // 8022E734
  c->r[4]=0u+0x0000022Au; // 8022E738
  c->r[5]=0u+0x00000000u; // 8022E73C
  c->r[6]=0u+0xFFFFFFFFu; // 8022E740
  c->r[7]=0u+0xFFFFFFFFu; // 8022E744
  c->lr=0x8022E74Cu; f_80048F20(c); // 8022E748
L_8022E74C:;
  c->r[11]=c->r[1]+0x00000020u; // 8022E74C
  c->lr=0x8022E754u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022E750
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022E754
  c->lr=c->r[0]; // 8022E758
  c->r[1]=c->r[1]+0x00000020u; // 8022E75C
  return; // 8022E760
}

// fn_8022E764
void f_8022E764(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E764
  c->r[0]=c->lr; // 8022E768
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022E76C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8022E770
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8022E774
  c->r[11]=c->r[1]+0x00000030u; // 8022E778
  c->lr=0x8022E780u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022E77C
  c->r[29]=c->r[3]|c->r[3]; // 8022E780
  c->lr=0x8022E788u; f_801ECCEC(c); // 8022E784
  c->lr=0x8022E78Cu; f_801ECCF4(c); // 8022E788
  c->r[28]=c->r[3]|c->r[3]; // 8022E78C
  c->r[31]=0u+0x00000000u; // 8022E790
  c->lr=0x8022E798u; f_80047C90(c); // 8022E794
  c->r[4]=0u+0x00000000u; // 8022E798
  c->lr=0x8022E7A0u; f_80058EA4(c); // 8022E79C
  c->r[4]=0u+0x00000400u; // 8022E7A0
  c->lr=0x8022E7A8u; f_80057BD4(c); // 8022E7A4
  c->r[30]=c->r[3]|c->r[3]; // 8022E7A8
  c->r[3]=c->r[29]+0x00010000u; // 8022E7AC
  c->r[0]=R32(c->r[3]+0xFFFF8180u); // 8022E7B0
  cmps(c,0,(int32_t)c->r[0],0); // 8022E7B4
  if (crb(c,2)) { goto L_8022E7F4; } // 8022E7B8
  c->lr=0x8022E7C0u; f_80361BF4(c); // 8022E7BC
  c->r[7]=c->r[29]+0x00010000u; // 8022E7C0
  c->r[5]=R32(c->r[7]+0xFFFF8188u); // 8022E7C4
  c->r[6]=R32(c->r[7]+0xFFFF818Cu); // 8022E7C8
  c->r[0]=c->r[3]^0x80000000u; // 8022E7CC
  c->r[5]=c->r[5]^0x80000000u; // 8022E7D0
  c->r[3]=addc(c,~c->r[6],c->r[4],1); // 8022E7D4
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 8022E7D8
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8022E7DC
  c->r[5]=0u-c->r[5]; // 8022E7E0
  cmps(c,0,(int32_t)c->r[5],0); // 8022E7E4
  if (!crb(c,2)) { goto L_8022E7F4; } // 8022E7E8
  c->r[0]=0u+0x00000000u; // 8022E7EC
  W32(c->r[7]+0xFFFF8180u,c->r[0]); // 8022E7F0
L_8022E7F4:;
  c->r[4]=c->r[29]+0x00010000u; // 8022E7F4
  c->r[0]=R32(c->r[4]+0xFFFF816Cu); // 8022E7F8
  cmps(c,0,(int32_t)c->r[0],0); // 8022E7FC
  if (!crb(c,2)) { goto L_8022E9AC; } // 8022E800
  c->r[0]=R32(c->r[4]+0xFFFF8180u); // 8022E804
  cmps(c,0,(int32_t)c->r[0],0); // 8022E808
  if (!crb(c,2)) { goto L_8022E9AC; } // 8022E80C
  c->r[0]=R32(c->r[28]+0x00000000u); // 8022E810
  cmps(c,0,(int32_t)c->r[0],2); // 8022E814
  if (!crb(c,2)) { goto L_8022E83C; } // 8022E818
  c->r[3]=0u+0x00000000u; // 8022E81C
  cmps(c,0,(int32_t)c->r[30],0); // 8022E820
  if (crb(c,2)) { goto L_8022E838; } // 8022E824
  c->r[0]=R32(c->r[4]+0xFFFF8168u); // 8022E828
  cmps(c,0,(int32_t)c->r[0],0); // 8022E82C
  if (crb(c,2)) { goto L_8022E838; } // 8022E830
  c->r[3]=0u+0x00000001u; // 8022E834
L_8022E838:;
  c->r[30]=c->r[3]|c->r[3]; // 8022E838
L_8022E83C:;
  c->r[3]=c->r[29]+0x00010000u; // 8022E83C
  c->r[0]=R8(c->r[3]+0xFFFF8292u); // 8022E840
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022E844
  cmps(c,0,(int32_t)c->r[0],1); // 8022E848
  if (!crb(c,2)) { goto L_8022E900; } // 8022E84C
  cmps(c,0,(int32_t)c->r[30],0); // 8022E850
  if (crb(c,2)) { goto L_8022E900; } // 8022E854
  c->r[30]=0u+0x00000000u; // 8022E858
  c->r[28]=0u+0x00000000u; // 8022E85C
  c->r[27]=0u+0x00000000u; // 8022E860
  {uint32_t ea=c->r[2]+0xFFFF9A58u; c->f[31]=RF64(ea);} // 8022E864
L_8022E868:;
  c->lr=0x8022E86Cu; f_80047C90(c); // 8022E868
  c->r[4]=0u+0x00000000u; // 8022E86C
  c->lr=0x8022E874u; f_80058EA4(c); // 8022E870
  c->r[4]=0u+0x0000000Eu; // 8022E874
  c->r[5]=c->r[27]|c->r[27]; // 8022E878
  c->lr=0x8022E880u; f_80057910(c); // 8022E87C
  fcmp(c,0,c->f[1],c->f[31]); // 8022E880
  c->r[3]=c->cr; // 8022E884
  c->r[3]=rotl(c->r[3],2)&0x00000001u; // 8022E888
  cmps(c,0,(int32_t)c->r[3],0); // 8022E88C
  if (crb(c,2)) { goto L_8022E89C; } // 8022E890
  c->r[0]=c->r[28]+0x00000001u; // 8022E894
  c->r[28]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8022E898
L_8022E89C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8022E89C
  if (!crb(c,2)) { goto L_8022E8AC; } // 8022E8A0
  c->r[0]=c->r[30]+0x00000001u; // 8022E8A4
  c->r[30]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8022E8A8
L_8022E8AC:;
  c->r[27]=c->r[27]+0x00000001u; // 8022E8AC
  cmps(c,0,(int32_t)c->r[27],5); // 8022E8B0
  if (crb(c,0)) { IRQCHK(c); goto L_8022E868; } // 8022E8B4
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[2]=RF64(ea);} // 8022E8B8
  c->r[0]=c->r[28]^0x80000000u; // 8022E8BC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8022E8C0
  c->r[3]=0u+0x43300000u; // 8022E8C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 8022E8C8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8022E8CC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 8022E8D0
  c->r[0]=c->r[28]+c->r[30]; // 8022E8D4
  c->r[0]=c->r[0]^0x80000000u; // 8022E8D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022E8DC
  W32(c->r[1]+0x00000010u,c->r[3]); // 8022E8E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8022E8E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 8022E8E8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8022E8EC
  {uint32_t ea=c->r[2]+0xFFFF9A60u; c->f[0]=RF64(ea);} // 8022E8F0
  fcmp(c,0,c->f[1],c->f[0]); // 8022E8F4
  if (!crb(c,1)) { goto L_8022E900; } // 8022E8F8
  c->r[31]=0u+0x00000001u; // 8022E8FC
L_8022E900:;
  c->r[3]=c->r[29]+0x00010000u; // 8022E900
  c->r[5]=R32(c->r[3]+0xFFFF828Cu); // 8022E904
  cmps(c,0,(int32_t)c->r[5],0); // 8022E908
  if (!crb(c,1)) { goto L_8022E99C; } // 8022E90C
  cmps(c,0,(int32_t)c->r[31],0); // 8022E910
  if (!crb(c,2)) { goto L_8022E924; } // 8022E914
  c->r[0]=R32(c->r[3]+0xFFFF82CCu); // 8022E918
  cmps(c,0,(int32_t)c->r[0],0); // 8022E91C
  if (crb(c,2)) { goto L_8022E99C; } // 8022E920
L_8022E924:;
  c->r[3]=0u+0x00000001u; // 8022E924
  c->r[4]=0u+0x80480000u; // 8022E928
  c->r[4]=c->r[4]+0x000003A8u; // 8022E92C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022E930
  c->lr=0x8022E938u; f_803D3760(c); // 8022E934
  c->r[3]=c->r[29]+0x00010000u; // 8022E938
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022E93C
  c->r[4]=0u+0x00000000u; // 8022E940
  c->lr=0x8022E948u; f_8021B46C(c); // 8022E944
  c->r[30]=0u+0x00000000u; // 8022E948
  c->r[3]=c->r[29]+0x00010000u; // 8022E94C
  W16(c->r[3]+0xFFFF8290u,c->r[30]); // 8022E950
  c->r[3]=c->r[29]|c->r[29]; // 8022E954
  c->r[4]=0u+0x0000000Au; // 8022E958
  c->lr=0x8022E960u; f_801EDEE0(c); // 8022E95C
  c->lr=0x8022E964u; f_801ECCEC(c); // 8022E960
  c->r[4]=c->r[29]+0x00010000u; // 8022E964
  c->r[4]=R32(c->r[4]+0xFFFF828Cu); // 8022E968
  c->lr=0x8022E970u; f_80208280(c); // 8022E96C
  c->lr=0x8022E974u; f_801ECCEC(c); // 8022E970
  c->r[4]=0u+0x00000001u; // 8022E974
  c->lr=0x8022E97Cu; f_80208288(c); // 8022E978
  c->r[3]=c->r[29]+0x00010000u; // 8022E97C
  W32(c->r[3]+0xFFFF81B0u,c->r[30]); // 8022E980
  c->lr=0x8022E988u; f_8006592C(c); // 8022E984
  c->r[4]=0u+0x00000229u; // 8022E988
  c->r[5]=0u+0x00000000u; // 8022E98C
  c->r[6]=0u+0xFFFFFFFFu; // 8022E990
  c->r[7]=0u+0xFFFFFFFFu; // 8022E994
  c->lr=0x8022E99Cu; f_80048F20(c); // 8022E998
L_8022E99C:;
  c->r[3]=c->r[29]|c->r[29]; // 8022E99C
  c->lr=0x8022E9A4u; f_801ED56C(c); // 8022E9A0
  c->r[3]=c->r[29]|c->r[29]; // 8022E9A4
  c->lr=0x8022E9ACu; f_8022D4E8(c); // 8022E9A8
L_8022E9AC:;
  c->r[0]=0u+0x00000038u; // 8022E9AC
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022E9B0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8022E9B4
  c->r[11]=c->r[1]+0x00000030u; // 8022E9B8
  c->lr=0x8022E9C0u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022E9BC
  c->r[0]=R32(c->r[1]+0x00000044u); // 8022E9C0
  c->lr=c->r[0]; // 8022E9C4
  c->r[1]=c->r[1]+0x00000040u; // 8022E9C8
  return; // 8022E9CC
}

// fn_8022E9D0
void f_8022E9D0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022E9D0
  c->r[0]=c->lr; // 8022E9D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022E9D8
  c->r[11]=c->r[1]+0x00000030u; // 8022E9DC
  c->lr=0x8022E9E4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022E9E0
  c->r[31]=c->r[3]|c->r[3]; // 8022E9E4
  c->r[27]=0u+0x00000001u; // 8022E9E8
  c->r[5]=c->r[3]+0x00010000u; // 8022E9EC
  c->r[4]=R32(c->r[5]+0xFFFF828Cu); // 8022E9F0
  c->r[26]=c->r[4]+0xFFFFFFFFu; // 8022E9F4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0xFFFF8290u); // 8022E9F8
  cmps(c,0,(int32_t)c->r[4],1); // 8022E9FC
  if (crb(c,2)) { goto L_8022EAC0; } // 8022EA00
  if (!crb(c,0)) { goto L_8022EB20; } // 8022EA04
  cmps(c,0,(int32_t)c->r[4],0); // 8022EA08
  if (!crb(c,0)) { goto L_8022EA14; } // 8022EA0C
  goto L_8022EB20; // 8022EA10
L_8022EA14:;
  {uint32_t ea=c->r[5]+0xFFFF82B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022EA14
  {uint32_t ea=c->r[2]+0xFFFF9A68u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022EA18
  fcmp(c,0,c->f[2],c->f[1]); // 8022EA1C
  if (!crb(c,0)) { goto L_8022EA40; } // 8022EA20
  c->r[27]=0u+0x00000000u; // 8022EA24
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022EA28
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 8022EA2C
  {uint32_t ea=c->r[5]+0xFFFF82B8u; WF32(ea,c->f[0]);} // 8022EA30
  fcmp(c,0,c->f[0],c->f[1]); // 8022EA34
  if (!crb(c,1)) { goto L_8022EA40; } // 8022EA38
  {uint32_t ea=c->r[5]+0xFFFF82B8u; WF32(ea,c->f[1]);} // 8022EA3C
L_8022EA40:;
  c->r[25]=0u+0x00000000u; // 8022EA40
  c->r[4]=0u+0x80480000u; // 8022EA44
  c->r[29]=c->r[4]+0x000001D0u; // 8022EA48
  c->r[28]=c->r[31]|c->r[31]; // 8022EA4C
  c->r[30]=c->r[3]+0x00010000u; // 8022EA50
L_8022EA54:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[25]); // 8022EA54
  if (!crb(c,2)) { goto L_8022EA78; } // 8022EA58
  c->r[3]=c->r[28]+0x00010000u; // 8022EA5C
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022EA60
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022EA64
  {uint32_t ea=c->r[30]+0xFFFF82B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022EA68
  c->f[2]=-c->f[0]; // 8022EA6C
  c->lr=0x8022EA74u; f_80253658(c); // 8022EA70
  goto L_8022EA8C; // 8022EA74
L_8022EA78:;
  c->r[3]=c->r[28]+0x00010000u; // 8022EA78
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022EA7C
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022EA80
  {uint32_t ea=c->r[30]+0xFFFF82B8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022EA84
  c->lr=0x8022EA8Cu; f_80253658(c); // 8022EA88
L_8022EA8C:;
  c->r[29]=c->r[29]+0x00000004u; // 8022EA8C
  c->r[28]=c->r[28]+0x00000004u; // 8022EA90
  c->r[25]=c->r[25]+0x00000001u; // 8022EA94
  cmps(c,0,(int32_t)c->r[25],3); // 8022EA98
  if (crb(c,0)) { IRQCHK(c); goto L_8022EA54; } // 8022EA9C
  cmps(c,0,(int32_t)c->r[27],0); // 8022EAA0
  if (crb(c,2)) { goto L_8022EB54; } // 8022EAA4
  c->r[0]=0u+0x00000001u; // 8022EAA8
  c->r[3]=c->r[31]+0x00010000u; // 8022EAAC
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022EAB0
  c->r[0]=0u+0x00000000u; // 8022EAB4
  W32(c->r[3]+0xFFFF8168u,c->r[0]); // 8022EAB8
  goto L_8022EB54; // 8022EABC
L_8022EAC0:;
  c->r[0]=c->r[4]+0x00000001u; // 8022EAC0
  W16(c->r[5]+0xFFFF8290u,c->r[0]); // 8022EAC4
  c->r[3]=0u+0x00000001u; // 8022EAC8
  c->r[4]=0u+0x80480000u; // 8022EACC
  c->r[4]=c->r[4]+0x000003C8u; // 8022EAD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022EAD4
  c->lr=0x8022EADCu; f_803D3760(c); // 8022EAD8
  c->r[3]=c->r[31]|c->r[31]; // 8022EADC
  c->r[4]=0u+0x00000003u; // 8022EAE0
  c->lr=0x8022EAE8u; f_80230678(c); // 8022EAE4
  c->r[3]=c->r[31]|c->r[31]; // 8022EAE8
  c->r[4]=0u+0x00000000u; // 8022EAEC
  c->lr=0x8022EAF4u; f_802304DC(c); // 8022EAF0
  c->r[25]=0u+0x00000000u; // 8022EAF4
  c->r[30]=c->r[31]|c->r[31]; // 8022EAF8
L_8022EAFC:;
  c->r[3]=c->r[30]+0x00010000u; // 8022EAFC
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 8022EB00
  c->r[4]=0u+0x00000000u; // 8022EB04
  c->lr=0x8022EB0Cu; f_80253970(c); // 8022EB08
  c->r[30]=c->r[30]+0x00000004u; // 8022EB0C
  c->r[25]=c->r[25]+0x00000001u; // 8022EB10
  cmps(c,0,(int32_t)c->r[25],3); // 8022EB14
  if (crb(c,0)) { IRQCHK(c); goto L_8022EAFC; } // 8022EB18
  goto L_8022EB54; // 8022EB1C
L_8022EB20:;
  c->r[0]=0u+0x00000000u; // 8022EB20
  c->r[3]=c->r[3]+0x00010000u; // 8022EB24
  W32(c->r[3]+0xFFFF828Cu,c->r[0]); // 8022EB28
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022EB2C
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 8022EB30
  c->r[4]=0u+0x00000000u; // 8022EB34
  c->lr=0x8022EB3Cu; f_8021B46C(c); // 8022EB38
  c->r[0]=0u+0x00000002u; // 8022EB3C
  c->r[3]=c->r[31]+0x00010000u; // 8022EB40
  W8(c->r[3]+0xFFFF8292u,c->r[0]); // 8022EB44
  c->r[3]=c->r[31]|c->r[31]; // 8022EB48
  c->r[4]=0u+0x00000003u; // 8022EB4C
  c->lr=0x8022EB54u; f_801EDEE0(c); // 8022EB50
L_8022EB54:;
  c->r[3]=c->r[31]|c->r[31]; // 8022EB54
  c->lr=0x8022EB5Cu; f_8022D4E8(c); // 8022EB58
  c->r[11]=c->r[1]+0x00000030u; // 8022EB5C
  c->lr=0x8022EB64u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022EB60
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022EB64
  c->lr=c->r[0]; // 8022EB68
  c->r[1]=c->r[1]+0x00000030u; // 8022EB6C
  return; // 8022EB70
}

// fn_8022EB74
void f_8022EB74(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022EB74
  c->r[0]=c->lr; // 8022EB78
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022EB7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022EB80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022EB84
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022EB88
  W32(c->r[1]+0x00000010u,c->r[28]); // 8022EB8C
  c->r[30]=c->r[3]|c->r[3]; // 8022EB90
  c->r[31]=c->r[4]|c->r[4]; // 8022EB94
  c->r[28]=c->r[5]|c->r[5]; // 8022EB98
  c->r[29]=c->r[6]|c->r[6]; // 8022EB9C
  c->lr=0x8022EBA4u; f_801ECCEC(c); // 8022EBA0
  c->lr=0x8022EBA8u; f_801ECCF4(c); // 8022EBA4
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8022EBA8
  c->r[3]=0u+0x80480000u; // 8022EBAC
  c->r[3]=c->r[3]+0x000001B8u; // 8022EBB0
  c->r[0]=R32(c->r[3]+c->r[0]); // 8022EBB4
  cmps(c,0,(int32_t)c->r[31],1); // 8022EBB8
  if (crb(c,2)) { goto L_8022EBD4; } // 8022EBBC
  if (!crb(c,0)) { goto L_8022EBC8; } // 8022EBC0
  goto L_8022EC80; // 8022EBC4
L_8022EBC8:;
  cmps(c,0,(int32_t)c->r[31],3); // 8022EBC8
  if (!crb(c,0)) { goto L_8022EC80; } // 8022EBCC
  goto L_8022EC2C; // 8022EBD0
L_8022EBD4:;
  c->r[3]=R32(c->r[28]+0x00000108u); // 8022EBD4
  cmps(c,0,(int32_t)c->r[3],0); // 8022EBD8
  if (crb(c,2)) { goto L_8022EBE8; } // 8022EBDC
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 8022EBE0
  goto L_8022EBF4; // 8022EBE4
L_8022EBE8:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022EBE8
  c->r[3]=c->r[28]+c->r[0]; // 8022EBEC
  c->r[29]=R32(c->r[3]+0x000000C0u); // 8022EBF0
L_8022EBF4:;
  c->r[3]=0u+0x00000001u; // 8022EBF4
  c->r[4]=0u+0x80480000u; // 8022EBF8
  c->r[4]=c->r[4]+0x000003E8u; // 8022EBFC
  c->r[5]=c->r[29]|c->r[29]; // 8022EC00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022EC04
  c->lr=0x8022EC0Cu; f_803D3760(c); // 8022EC08
  c->r[3]=c->r[30]+0x00010000u; // 8022EC0C
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8022EC10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022EC14
  c->r[3]=c->r[3]+c->r[0]; // 8022EC18
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022EC1C
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 8022EC20
  c->lr=0x8022EC28u; f_802536F8(c); // 8022EC24
  goto L_8022EC80; // 8022EC28
L_8022EC2C:;
  c->r[3]=R32(c->r[28]+0x00000108u); // 8022EC2C
  cmps(c,0,(int32_t)c->r[3],0); // 8022EC30
  if (crb(c,2)) { goto L_8022EC40; } // 8022EC34
  c->r[29]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000000u); // 8022EC38
  goto L_8022EC4C; // 8022EC3C
L_8022EC40:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022EC40
  c->r[3]=c->r[28]+c->r[0]; // 8022EC44
  c->r[29]=R32(c->r[3]+0x000000C0u); // 8022EC48
L_8022EC4C:;
  c->r[3]=0u+0x00000001u; // 8022EC4C
  c->r[4]=0u+0x80480000u; // 8022EC50
  c->r[4]=c->r[4]+0x00000410u; // 8022EC54
  c->r[5]=c->r[29]|c->r[29]; // 8022EC58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022EC5C
  c->lr=0x8022EC64u; f_803D3760(c); // 8022EC60
  c->r[3]=c->r[30]+0x00010000u; // 8022EC64
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 8022EC68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022EC6C
  c->r[3]=c->r[3]+c->r[0]; // 8022EC70
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022EC74
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 8022EC78
  c->lr=0x8022EC80u; f_802536F8(c); // 8022EC7C
L_8022EC80:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022EC80
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022EC84
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022EC88
  c->r[28]=R32(c->r[1]+0x00000010u); // 8022EC8C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022EC90
  c->lr=c->r[0]; // 8022EC94
  c->r[1]=c->r[1]+0x00000020u; // 8022EC98
  return; // 8022EC9C
}

// fn_8022ECA0
void f_8022ECA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022ECA0
  c->r[0]=c->lr; // 8022ECA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022ECA8
  c->r[0]=0u+0xFFFFFFFFu; // 8022ECAC
  cmps(c,0,(int32_t)c->r[4],3); // 8022ECB0
  if (!crb(c,0)) { goto L_8022ECE0; } // 8022ECB4
  cmps(c,0,(int32_t)c->r[4],1); // 8022ECB8
  if (!crb(c,0)) { goto L_8022ECC4; } // 8022ECBC
  goto L_8022ECE0; // 8022ECC0
L_8022ECC4:;
  c->r[3]=c->r[3]+0x00010000u; // 8022ECC4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8022ECC8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022ECCC
  c->r[3]=c->r[3]+c->r[0]; // 8022ECD0
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022ECD4
  c->lr=0x8022ECDCu; f_80231054(c); // 8022ECD8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8022ECDC
L_8022ECE0:;
  c->r[3]=c->r[0]|c->r[0]; // 8022ECE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022ECE4
  c->lr=c->r[0]; // 8022ECE8
  c->r[1]=c->r[1]+0x00000010u; // 8022ECEC
  return; // 8022ECF0
}

// fn_8022ECF4
void f_8022ECF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022ECF4
  c->r[0]=c->lr; // 8022ECF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022ECFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022ED00
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022ED04
  c->r[30]=c->r[4]|c->r[4]; // 8022ED08
  c->r[31]=c->r[5]|c->r[5]; // 8022ED0C
  cmps(c,0,(int32_t)c->r[4],3); // 8022ED10
  if (!crb(c,0)) { goto L_8022ED94; } // 8022ED14
  cmps(c,0,(int32_t)c->r[4],1); // 8022ED18
  if (!crb(c,0)) { goto L_8022ED24; } // 8022ED1C
  goto L_8022ED94; // 8022ED20
L_8022ED24:;
  c->r[3]=c->r[3]+0x00010000u; // 8022ED24
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8022ED28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8022ED2C
  c->r[3]=c->r[3]+c->r[0]; // 8022ED30
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 8022ED34
  c->r[4]=c->r[31]|c->r[31]; // 8022ED38
  c->lr=0x8022ED40u; f_802582A8(c); // 8022ED3C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022ED40
  c->lr=0x8022ED48u; f_801EF7A8(c); // 8022ED44
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 8022ED48
  c->lr=0x8022ED50u; f_80231078(c); // 8022ED4C
  cmps(c,0,(int32_t)c->r[31],6); // 8022ED50
  if (crb(c,1)) { goto L_8022ED78; } // 8022ED54
  cmps(c,0,(int32_t)c->r[3],0); // 8022ED58
  if (!crb(c,2)) { goto L_8022ED94; } // 8022ED5C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022ED60
  c->lr=0x8022ED68u; f_801EF7A8(c); // 8022ED64
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 8022ED68
  c->r[5]=0u+0x00000001u; // 8022ED6C
  c->lr=0x8022ED74u; f_80231064(c); // 8022ED70
  goto L_8022ED94; // 8022ED74
L_8022ED78:;
  cmps(c,0,(int32_t)c->r[3],0); // 8022ED78
  if (crb(c,2)) { goto L_8022ED94; } // 8022ED7C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8022ED80
  c->lr=0x8022ED88u; f_801EF7A8(c); // 8022ED84
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 8022ED88
  c->r[5]=0u+0x00000000u; // 8022ED8C
  c->lr=0x8022ED94u; f_80231064(c); // 8022ED90
L_8022ED94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022ED94
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022ED98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022ED9C
  c->lr=c->r[0]; // 8022EDA0
  c->r[1]=c->r[1]+0x00000010u; // 8022EDA4
  return; // 8022EDA8
}

// fn_8022EDAC
void f_8022EDAC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 8022EDAC
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 8022EDB0
  cmps(c,0,(int32_t)c->r[3],0); // 8022EDB4
  if (crb(c,2)) return; // 8022EDB8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8022EDBC
  f_80256ACC(c); return; // 8022EDC0
  return; // 8022EDC4
}

// fn_8022EDC8
void f_8022EDC8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022EDC8
  c->r[0]=c->lr; // 8022EDCC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8022EDD0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 8022EDD4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8022EDD8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 8022EDDC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 8022EDE0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 8022EDE4
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 8022EDE8
  c->r[11]=c->r[1]+0x00000030u; // 8022EDEC
  c->lr=0x8022EDF4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8022EDF0
  c->r[27]=c->r[3]|c->r[3]; // 8022EDF4
  c->r[28]=c->r[4]|c->r[4]; // 8022EDF8
  c->r[29]=c->r[5]|c->r[5]; // 8022EDFC
  c->r[3]=c->r[3]+0x00010000u; // 8022EE00
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF81C4u); // 8022EE04
  cmps(c,0,(int32_t)c->r[0],0); // 8022EE08
  if (crb(c,1)) { goto L_8022F05C; } // 8022EE0C
  c->r[3]=0u+0x00000001u; // 8022EE10
  c->lr=0x8022EE18u; f_8005D714(c); // 8022EE14
  {uint32_t ea=c->r[2]+0xFFFF9A6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8022EE18
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[1]); // 8022EE1C
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022EE20
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8022EE24
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 8022EE28
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 8022EE2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8022EE30
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8022EE34
  c->r[3]=c->r[27]+0x00010000u; // 8022EE38
  W16(c->r[3]+0xFFFF81C4u,c->r[0]); // 8022EE3C
  c->r[0]=0u+0x00000001u; // 8022EE40
  W16(c->r[3]+0xFFFF81C6u,c->r[0]); // 8022EE44
  {uint32_t ea=c->r[2]+0xFFFF9A70u; c->f[29]=c->ps1[29]=RF32(ea);} // 8022EE48
  cmps(c,0,(int32_t)c->r[28],1000); // 8022EE4C
  if (!crb(c,0)) { goto L_8022EE58; } // 8022EE50
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[29]=c->ps1[29]=RF32(ea);} // 8022EE54
L_8022EE58:;
  cmps(c,0,(int32_t)c->r[28],100); // 8022EE58
  if (!crb(c,0)) { goto L_8022EE64; } // 8022EE5C
  {uint32_t ea=c->r[2]+0xFFFF9A18u; c->f[29]=c->ps1[29]=RF32(ea);} // 8022EE60
L_8022EE64:;
  cmps(c,0,(int32_t)c->r[28],10); // 8022EE64
  if (!crb(c,0)) { goto L_8022EE70; } // 8022EE68
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[29]=c->ps1[29]=RF32(ea);} // 8022EE6C
L_8022EE70:;
  c->r[30]=0u+0x00000000u; // 8022EE70
  c->r[26]=c->r[27]|c->r[27]; // 8022EE74
L_8022EE78:;
  c->r[3]=c->r[26]+0x00010000u; // 8022EE78
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022EE7C
  c->r[4]=0u+0x00000000u; // 8022EE80
  c->lr=0x8022EE88u; f_8021B46C(c); // 8022EE84
  c->r[26]=c->r[26]+0x00000004u; // 8022EE88
  c->r[30]=c->r[30]+0x00000001u; // 8022EE8C
  cmps(c,0,(int32_t)c->r[30],4); // 8022EE90
  if (crb(c,0)) { IRQCHK(c); goto L_8022EE78; } // 8022EE94
  cmps(c,0,(int32_t)c->r[28],1); // 8022EE98
  if (!crb(c,0)) { goto L_8022EF48; } // 8022EE9C
  c->r[3]=c->r[27]+0x00010000u; // 8022EEA0
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 8022EEA4
  c->f[1]=c->f[29]; // 8022EEA8
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022EEAC
  c->lr=0x8022EEB4u; f_8021B27C(c); // 8022EEB0
  c->r[3]=c->r[27]+0x00010000u; // 8022EEB4
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 8022EEB8
  c->r[4]=0u+0x00000001u; // 8022EEBC
  c->lr=0x8022EEC4u; f_8021B46C(c); // 8022EEC0
  c->r[3]=c->r[27]+0x00010000u; // 8022EEC4
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 8022EEC8
  c->r[4]=0u+0x00000000u; // 8022EECC
  c->r[5]=0u+0x00000000u; // 8022EED0
  c->lr=0x8022EED8u; f_8021B358(c); // 8022EED4
  c->r[3]=c->r[27]+0x00010000u; // 8022EED8
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 8022EEDC
  c->r[4]=0u+0x00000003u; // 8022EEE0
  c->r[5]=0u+0x00000000u; // 8022EEE4
  c->lr=0x8022EEECu; f_8021B358(c); // 8022EEE8
  cmps(c,0,(int32_t)c->r[29],0); // 8022EEEC
  if (crb(c,2)) { goto L_8022EF34; } // 8022EEF0
  c->r[3]=c->r[1]+0x0000000Cu; // 8022EEF4
  c->r[4]=0u+0x00000040u; // 8022EEF8
  c->r[5]=0u+0x000000FFu; // 8022EEFC
  c->r[6]=0u+0x00000040u; // 8022EF00
  c->r[7]=0u+0x000000FFu; // 8022EF04
  c->lr=0x8022EF0Cu; f_8004E248(c); // 8022EF08
  c->r[3]=c->r[27]+0x00010000u; // 8022EF0C
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 8022EF10
  c->r[4]=c->r[1]+0x0000000Cu; // 8022EF14
  c->r[5]=0u+0xFFFFFFFFu; // 8022EF18
  c->r[6]=0u+0x00000000u; // 8022EF1C
  c->lr=0x8022EF24u; f_8021B4E4(c); // 8022EF20
  c->r[3]=c->r[1]+0x0000000Cu; // 8022EF24
  c->r[4]=0u+0xFFFFFFFFu; // 8022EF28
  c->lr=0x8022EF30u; f_80047BD4(c); // 8022EF2C
  goto L_8022F05C; // 8022EF30
L_8022EF34:;
  c->r[3]=c->r[27]+0x00010000u; // 8022EF34
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 8022EF38
  c->r[4]=0u+0xFFFFFFFFu; // 8022EF3C
  c->lr=0x8022EF44u; f_8021B554(c); // 8022EF40
  goto L_8022F05C; // 8022EF44
L_8022EF48:;
  c->r[30]=0u+0x00000000u; // 8022EF48
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[30]=RF64(ea);} // 8022EF4C
  c->r[31]=0u+0x43300000u; // 8022EF50
  {uint32_t ea=c->r[2]+0xFFFF9A04u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022EF54
  c->r[26]=0u+0x66660000u; // 8022EF58
L_8022EF5C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8022EF5C
  if (!crb(c,1)) { goto L_8022F04C; } // 8022EF60
  c->r[3]=c->r[27]+0x00010000u; // 8022EF64
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022EF68
  c->r[0]=c->r[30]^0x80000000u; // 8022EF6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8022EF70
  W32(c->r[1]+0x00000010u,c->r[31]); // 8022EF74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8022EF78
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8022EF7C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 8022EF80
  c->f[1]=c->ps1[1]=S(c->f[29]-c->f[0]); // 8022EF84
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8022EF88
  c->lr=0x8022EF90u; f_8021B27C(c); // 8022EF8C
  c->r[3]=c->r[27]+0x00010000u; // 8022EF90
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022EF94
  c->r[4]=0u+0x00000001u; // 8022EF98
  c->lr=0x8022EFA0u; f_8021B46C(c); // 8022EF9C
  c->r[3]=c->r[27]+0x00010000u; // 8022EFA0
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022EFA4
  c->r[4]=0u+0x00000000u; // 8022EFA8
  c->r[5]=0u+0x00000000u; // 8022EFAC
  c->lr=0x8022EFB4u; f_8021B358(c); // 8022EFB0
  c->r[3]=c->r[27]+0x00010000u; // 8022EFB4
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022EFB8
  c->r[4]=0u+0x00000003u; // 8022EFBC
  c->r[0]=c->r[26]+0x00006667u; // 8022EFC0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[28])>>32); // 8022EFC4
  c->r[0]=sraw(c,c->r[0],2); // 8022EFC8
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8022EFCC
  c->r[0]=c->r[0]+c->r[5]; // 8022EFD0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 8022EFD4
  c->r[5]=c->r[28]-c->r[0]; // 8022EFD8
  c->lr=0x8022EFE0u; f_8021B358(c); // 8022EFDC
  c->r[0]=c->r[26]+0x00006667u; // 8022EFE0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[28])>>32); // 8022EFE4
  c->r[0]=sraw(c,c->r[0],2); // 8022EFE8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8022EFEC
  c->r[28]=c->r[0]+c->r[3]; // 8022EFF0
  cmps(c,0,(int32_t)c->r[29],0); // 8022EFF4
  if (crb(c,2)) { goto L_8022F03C; } // 8022EFF8
  c->r[3]=c->r[1]+0x00000008u; // 8022EFFC
  c->r[4]=0u+0x00000040u; // 8022F000
  c->r[5]=0u+0x000000FFu; // 8022F004
  c->r[6]=0u+0x00000040u; // 8022F008
  c->r[7]=0u+0x000000FFu; // 8022F00C
  c->lr=0x8022F014u; f_8004E248(c); // 8022F010
  c->r[3]=c->r[27]+0x00010000u; // 8022F014
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F018
  c->r[4]=c->r[1]+0x00000008u; // 8022F01C
  c->r[5]=0u+0xFFFFFFFFu; // 8022F020
  c->r[6]=0u+0x00000000u; // 8022F024
  c->lr=0x8022F02Cu; f_8021B4E4(c); // 8022F028
  c->r[3]=c->r[1]+0x00000008u; // 8022F02C
  c->r[4]=0u+0xFFFFFFFFu; // 8022F030
  c->lr=0x8022F038u; f_80047BD4(c); // 8022F034
  goto L_8022F04C; // 8022F038
L_8022F03C:;
  c->r[3]=c->r[27]+0x00010000u; // 8022F03C
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F040
  c->r[4]=0u+0xFFFFFFFFu; // 8022F044
  c->lr=0x8022F04Cu; f_8021B554(c); // 8022F048
L_8022F04C:;
  c->r[27]=c->r[27]+0x00000004u; // 8022F04C
  c->r[30]=c->r[30]+0x00000001u; // 8022F050
  cmps(c,0,(int32_t)c->r[30],4); // 8022F054
  if (crb(c,0)) { IRQCHK(c); goto L_8022EF5C; } // 8022F058
L_8022F05C:;
  c->r[0]=0u+0x00000058u; // 8022F05C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022F060
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 8022F064
  c->r[0]=0u+0x00000048u; // 8022F068
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8022F06C
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8022F070
  c->r[0]=0u+0x00000038u; // 8022F074
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 8022F078
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 8022F07C
  c->r[11]=c->r[1]+0x00000030u; // 8022F080
  c->lr=0x8022F088u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8022F084
  c->r[0]=R32(c->r[1]+0x00000064u); // 8022F088
  c->lr=c->r[0]; // 8022F08C
  c->r[1]=c->r[1]+0x00000060u; // 8022F090
  return; // 8022F094
}

// fn_8022F098
void f_8022F098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F098
  c->r[0]=c->lr; // 8022F09C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022F0A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022F0A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022F0A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022F0AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8022F0B0
  c->r[31]=c->r[3]|c->r[3]; // 8022F0B4
  c->r[29]=0u+0x00000001u; // 8022F0B8
  c->r[3]=c->r[3]+0x00010000u; // 8022F0BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF81C6u); // 8022F0C0
  cmps(c,0,(int32_t)c->r[0],1); // 8022F0C4
  if (crb(c,2)) { goto L_8022F0D4; } // 8022F0C8
  cmps(c,0,(int32_t)c->r[0],3); // 8022F0CC
  if (!crb(c,2)) { goto L_8022F114; } // 8022F0D0
L_8022F0D4:;
  c->r[28]=0u+0x00000000u; // 8022F0D4
  c->r[30]=c->r[31]|c->r[31]; // 8022F0D8
L_8022F0DC:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F0DC
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F0E0
  c->lr=0x8022F0E8u; f_8021B474(c); // 8022F0E4
  cmps(c,0,(int32_t)c->r[3],0); // 8022F0E8
  if (crb(c,2)) { goto L_8022F104; } // 8022F0EC
  c->r[3]=c->r[30]+0x00010000u; // 8022F0F0
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F0F4
  c->r[4]=0u+0x00000000u; // 8022F0F8
  c->lr=0x8022F100u; f_8021B3FC(c); // 8022F0FC
  c->r[29]=c->r[29]&c->r[3]; // 8022F100
L_8022F104:;
  c->r[30]=c->r[30]+0x00000004u; // 8022F104
  c->r[28]=c->r[28]+0x00000001u; // 8022F108
  cmps(c,0,(int32_t)c->r[28],4); // 8022F10C
  if (crb(c,0)) { IRQCHK(c); goto L_8022F0DC; } // 8022F110
L_8022F114:;
  cmps(c,0,(int32_t)c->r[29],0); // 8022F114
  if (crb(c,2)) { goto L_8022F214; } // 8022F118
  c->r[4]=c->r[31]+0x00010000u; // 8022F11C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF81C6u); // 8022F120
  cmps(c,0,(int32_t)c->r[0],2); // 8022F124
  if (crb(c,2)) { goto L_8022F188; } // 8022F128
  if (!crb(c,0)) { goto L_8022F13C; } // 8022F12C
  cmps(c,0,(int32_t)c->r[0],1); // 8022F130
  if (!crb(c,0)) { goto L_8022F148; } // 8022F134
  goto L_8022F214; // 8022F138
L_8022F13C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022F13C
  if (!crb(c,0)) { goto L_8022F214; } // 8022F140
  goto L_8022F1E0; // 8022F144
L_8022F148:;
  c->r[28]=0u+0x00000000u; // 8022F148
  c->r[30]=c->r[31]|c->r[31]; // 8022F14C
L_8022F150:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F150
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F154
  c->r[4]=0u+0x00000000u; // 8022F158
  c->r[5]=0u+0x00000001u; // 8022F15C
  c->lr=0x8022F164u; f_8021B358(c); // 8022F160
  c->r[30]=c->r[30]+0x00000004u; // 8022F164
  c->r[28]=c->r[28]+0x00000001u; // 8022F168
  cmps(c,0,(int32_t)c->r[28],4); // 8022F16C
  if (crb(c,0)) { IRQCHK(c); goto L_8022F150; } // 8022F170
  c->r[4]=c->r[31]+0x00010000u; // 8022F174
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF81C6u); // 8022F178
  c->r[0]=c->r[3]+0x00000001u; // 8022F17C
  W16(c->r[4]+0xFFFF81C6u,c->r[0]); // 8022F180
  goto L_8022F214; // 8022F184
L_8022F188:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF81C4u); // 8022F188
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8022F18C
  W16(c->r[4]+0xFFFF81C4u,c->r[0]); // 8022F190
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8022F194
  cmps(c,0,(int32_t)c->r[0],0); // 8022F198
  if (crb(c,1)) { goto L_8022F214; } // 8022F19C
  c->r[28]=0u+0x00000000u; // 8022F1A0
  c->r[30]=c->r[31]|c->r[31]; // 8022F1A4
L_8022F1A8:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F1A8
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F1AC
  c->r[4]=0u+0x00000000u; // 8022F1B0
  c->r[5]=0u+0x00000002u; // 8022F1B4
  c->lr=0x8022F1BCu; f_8021B358(c); // 8022F1B8
  c->r[30]=c->r[30]+0x00000004u; // 8022F1BC
  c->r[28]=c->r[28]+0x00000001u; // 8022F1C0
  cmps(c,0,(int32_t)c->r[28],4); // 8022F1C4
  if (crb(c,0)) { IRQCHK(c); goto L_8022F1A8; } // 8022F1C8
  c->r[4]=c->r[31]+0x00010000u; // 8022F1CC
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF81C6u); // 8022F1D0
  c->r[0]=c->r[3]+0x00000001u; // 8022F1D4
  W16(c->r[4]+0xFFFF81C6u,c->r[0]); // 8022F1D8
  goto L_8022F214; // 8022F1DC
L_8022F1E0:;
  c->r[28]=0u+0x00000000u; // 8022F1E0
  c->r[30]=c->r[31]|c->r[31]; // 8022F1E4
L_8022F1E8:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F1E8
  c->r[3]=R32(c->r[3]+0xFFFF81B4u); // 8022F1EC
  c->r[4]=0u+0x00000000u; // 8022F1F0
  c->lr=0x8022F1F8u; f_8021B46C(c); // 8022F1F4
  c->r[30]=c->r[30]+0x00000004u; // 8022F1F8
  c->r[28]=c->r[28]+0x00000001u; // 8022F1FC
  cmps(c,0,(int32_t)c->r[28],4); // 8022F200
  if (crb(c,0)) { IRQCHK(c); goto L_8022F1E8; } // 8022F204
  c->r[0]=0u+0x00000000u; // 8022F208
  c->r[3]=c->r[31]+0x00010000u; // 8022F20C
  W16(c->r[3]+0xFFFF81C6u,c->r[0]); // 8022F210
L_8022F214:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022F214
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022F218
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022F21C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8022F220
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022F224
  c->lr=c->r[0]; // 8022F228
  c->r[1]=c->r[1]+0x00000020u; // 8022F22C
  return; // 8022F230
}

// fn_8022F234
void f_8022F234(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F234
  c->r[0]=c->lr; // 8022F238
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022F23C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022F240
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022F244
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022F248
  c->r[29]=c->r[3]|c->r[3]; // 8022F24C
  c->r[30]=c->r[4]|c->r[4]; // 8022F250
  c->r[31]=c->r[5]|c->r[5]; // 8022F254
  c->lr=0x8022F25Cu; f_801EDEE8(c); // 8022F258
  cmps(c,0,(int32_t)c->r[3],9); // 8022F25C
  if (!crb(c,0)) { goto L_8022F270; } // 8022F260
  cmps(c,0,(int32_t)c->r[3],3); // 8022F264
  if (crb(c,2)) { goto L_8022F280; } // 8022F268
  goto L_8022F350; // 8022F26C
L_8022F270:;
  cmps(c,0,(int32_t)c->r[3],11); // 8022F270
  if (!crb(c,0)) { goto L_8022F350; } // 8022F274
  goto L_8022F280; // 8022F278
  goto L_8022F350; // 8022F27C
L_8022F280:;
  c->r[3]=c->r[29]+0x00010000u; // 8022F280
  c->r[0]=R8(c->r[3]+0xFFFF8295u); // 8022F284
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F288
  cmps(c,0,(int32_t)c->r[0],1); // 8022F28C
  if (!crb(c,2)) { goto L_8022F2AC; } // 8022F290
  c->r[3]=0u+0x00000001u; // 8022F294
  c->r[4]=0u+0x80480000u; // 8022F298
  c->r[4]=c->r[4]+0x00000438u; // 8022F29C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022F2A0
  c->lr=0x8022F2A8u; f_803D3760(c); // 8022F2A4
  goto L_8022F350; // 8022F2A8
L_8022F2AC:;
  c->r[0]=0u+0x00000000u; // 8022F2AC
  W8(c->r[3]+0xFFFF8295u,c->r[0]); // 8022F2B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 8022F2B4
  W8(c->r[3]+0xFFFF8294u,c->r[0]); // 8022F2B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8022F2BC
  W8(c->r[3]+0xFFFF8293u,c->r[0]); // 8022F2C0
  cmps(c,0,(int32_t)c->r[30],0); // 8022F2C4
  if (!crb(c,2)) { goto L_8022F2EC; } // 8022F2C8
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022F2CC
  c->r[4]=0u+0x00000000u; // 8022F2D0
  c->lr=0x8022F2D8u; f_80253970(c); // 8022F2D4
  c->r[3]=c->r[29]+0x00010000u; // 8022F2D8
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 8022F2DC
  c->r[4]=0u+0x00000000u; // 8022F2E0
  c->lr=0x8022F2E8u; f_80253970(c); // 8022F2E4
  goto L_8022F350; // 8022F2E8
L_8022F2EC:;
  cmps(c,0,(int32_t)c->r[30],2); // 8022F2EC
  if (crb(c,2)) { goto L_8022F32C; } // 8022F2F0
  if (!crb(c,0)) { goto L_8022F304; } // 8022F2F4
  cmps(c,0,(int32_t)c->r[30],1); // 8022F2F8
  if (!crb(c,0)) { goto L_8022F310; } // 8022F2FC
  goto L_8022F33C; // 8022F300
L_8022F304:;
  cmps(c,0,(int32_t)c->r[30],4); // 8022F304
  if (!crb(c,0)) { goto L_8022F33C; } // 8022F308
  goto L_8022F320; // 8022F30C
L_8022F310:;
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022F310
  c->r[4]=0u+0x00000001u; // 8022F314
  c->lr=0x8022F31Cu; f_80253970(c); // 8022F318
  goto L_8022F33C; // 8022F31C
L_8022F320:;
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022F320
  c->r[4]=0u+0x00000001u; // 8022F324
  c->lr=0x8022F32Cu; f_80253970(c); // 8022F328
L_8022F32C:;
  c->r[3]=c->r[29]+0x00010000u; // 8022F32C
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 8022F330
  c->r[4]=0u+0x00000001u; // 8022F334
  c->lr=0x8022F33Cu; f_80253970(c); // 8022F338
L_8022F33C:;
  c->r[0]=0u+0x00000000u; // 8022F33C
  c->r[3]=c->r[29]+0x00010000u; // 8022F340
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022F344
  c->r[0]=0u+0x00000001u; // 8022F348
  W8(c->r[3]+0xFFFF8295u,c->r[0]); // 8022F34C
L_8022F350:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022F350
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022F354
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022F358
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022F35C
  c->lr=c->r[0]; // 8022F360
  c->r[1]=c->r[1]+0x00000020u; // 8022F364
  return; // 8022F368
}

// fn_8022F36C
void f_8022F36C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F36C
  c->r[0]=c->lr; // 8022F370
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022F374
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8022F378
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8022F37C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022F380
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022F384
  c->f[31]=c->f[1]; // 8022F388
  c->r[30]=0u+0x00000001u; // 8022F38C
  c->r[3]=c->r[3]+0x00010000u; // 8022F390
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8022F394
  c->r[31]=c->r[3]+c->r[0]; // 8022F398
  c->r[3]=R32(c->r[31]+0xFFFF821Cu); // 8022F39C
  c->lr=0x8022F3A4u; f_802536E8(c); // 8022F3A0
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[1]); // 8022F3A4
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022F3A8
  fcmp(c,0,c->f[0],c->f[2]); // 8022F3AC
  if (!crb(c,2)) { goto L_8022F3BC; } // 8022F3B0
  c->r[3]=0u+0x00000001u; // 8022F3B4
  goto L_8022F414; // 8022F3B8
L_8022F3BC:;
  fcmp(c,0,c->f[2],c->f[0]); // 8022F3BC
  if (!crb(c,0)) { goto L_8022F3E8; } // 8022F3C0
  fcmp(c,0,c->f[1],c->f[31]); // 8022F3C4
  if (!crb(c,1)) { goto L_8022F408; } // 8022F3C8
  c->r[30]=0u+0x00000000u; // 8022F3CC
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022F3D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022F3D4
  fcmp(c,0,c->f[1],c->f[31]); // 8022F3D8
  if (!crb(c,0)) { goto L_8022F408; } // 8022F3DC
  c->f[1]=c->f[31]; // 8022F3E0
  goto L_8022F408; // 8022F3E4
L_8022F3E8:;
  fcmp(c,0,c->f[1],c->f[31]); // 8022F3E8
  if (!crb(c,0)) { goto L_8022F408; } // 8022F3EC
  c->r[30]=0u+0x00000000u; // 8022F3F0
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022F3F4
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8022F3F8
  fcmp(c,0,c->f[1],c->f[31]); // 8022F3FC
  if (!crb(c,1)) { goto L_8022F408; } // 8022F400
  c->f[1]=c->f[31]; // 8022F404
L_8022F408:;
  c->r[3]=R32(c->r[31]+0xFFFF821Cu); // 8022F408
  c->lr=0x8022F410u; f_802536A0(c); // 8022F40C
  c->r[3]=c->r[30]|c->r[30]; // 8022F410
L_8022F414:;
  c->r[0]=0u+0x00000018u; // 8022F414
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022F418
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8022F41C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022F420
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022F424
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022F428
  c->lr=c->r[0]; // 8022F42C
  c->r[1]=c->r[1]+0x00000020u; // 8022F430
  return; // 8022F434
}

// fn_8022F438
void f_8022F438(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F438
  c->r[0]=c->lr; // 8022F43C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022F440
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8022F444
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8022F448
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022F44C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022F450
  c->r[30]=c->r[3]|c->r[3]; // 8022F454
  c->r[31]=0u+0x00000001u; // 8022F458
  c->r[4]=c->r[3]+0x00010000u; // 8022F45C
  c->r[0]=R8(c->r[4]+0xFFFF8293u); // 8022F460
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F464
  cmps(c,0,(int32_t)c->r[0],2); // 8022F468
  if (crb(c,2)) { goto L_8022F488; } // 8022F46C
  if (!crb(c,0)) { goto L_8022F490; } // 8022F470
  cmps(c,0,(int32_t)c->r[0],1); // 8022F474
  if (!crb(c,0)) { goto L_8022F480; } // 8022F478
  goto L_8022F490; // 8022F47C
L_8022F480:;
  {uint32_t ea=c->r[2]+0xFFFF9A4Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8022F480
  goto L_8022F494; // 8022F484
L_8022F488:;
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022F488
  goto L_8022F494; // 8022F48C
L_8022F490:;
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022F490
L_8022F494:;
  c->r[3]=c->r[3]+0x00010000u; // 8022F494
  c->r[0]=R8(c->r[3]+0xFFFF8294u); // 8022F498
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F49C
  cmps(c,0,(int32_t)c->r[0],2); // 8022F4A0
  if (crb(c,2)) { goto L_8022F4F0; } // 8022F4A4
  if (!crb(c,0)) { goto L_8022F4B8; } // 8022F4A8
  cmps(c,0,(int32_t)c->r[0],1); // 8022F4AC
  if (!crb(c,0)) { goto L_8022F4C4; } // 8022F4B0
  goto L_8022F504; // 8022F4B4
L_8022F4B8:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022F4B8
  if (!crb(c,0)) { goto L_8022F504; } // 8022F4BC
  goto L_8022F4DC; // 8022F4C0
L_8022F4C4:;
  c->r[3]=c->r[30]|c->r[30]; // 8022F4C4
  c->r[4]=0u+0x00000000u; // 8022F4C8
  c->f[1]=-c->f[31]; // 8022F4CC
  c->lr=0x8022F4D4u; f_8022F36C(c); // 8022F4D0
  c->r[31]=rotl(c->r[3],0)&0x00000001u; // 8022F4D4
  goto L_8022F504; // 8022F4D8
L_8022F4DC:;
  c->r[3]=c->r[30]|c->r[30]; // 8022F4DC
  c->r[4]=0u+0x00000000u; // 8022F4E0
  c->f[1]=-c->f[31]; // 8022F4E4
  c->lr=0x8022F4ECu; f_8022F36C(c); // 8022F4E8
  c->r[31]=rotl(c->r[3],0)&0x00000001u; // 8022F4EC
L_8022F4F0:;
  c->r[3]=c->r[30]|c->r[30]; // 8022F4F0
  c->r[4]=0u+0x00000001u; // 8022F4F4
  c->f[1]=c->f[31]; // 8022F4F8
  c->lr=0x8022F500u; f_8022F36C(c); // 8022F4FC
  c->r[31]=c->r[31]&c->r[3]; // 8022F500
L_8022F504:;
  cmps(c,0,(int32_t)c->r[31],0); // 8022F504
  if (crb(c,2)) { goto L_8022F534; } // 8022F508
  c->r[3]=0u+0x00000001u; // 8022F50C
  c->r[4]=0u+0x80480000u; // 8022F510
  c->r[4]=c->r[4]+0x0000046Cu; // 8022F514
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022F518
  c->lr=0x8022F520u; f_803D3760(c); // 8022F51C
  c->r[0]=0u+0x00000000u; // 8022F520
  c->r[3]=c->r[30]+0x00010000u; // 8022F524
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022F528
  c->r[0]=0u+0x00000002u; // 8022F52C
  W8(c->r[3]+0xFFFF8295u,c->r[0]); // 8022F530
L_8022F534:;
  c->r[0]=0u+0x00000018u; // 8022F534
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022F538
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8022F53C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022F540
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022F544
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022F548
  c->lr=c->r[0]; // 8022F54C
  c->r[1]=c->r[1]+0x00000020u; // 8022F550
  return; // 8022F554
}

// fn_8022F558
void f_8022F558(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F558
  c->r[0]=c->lr; // 8022F55C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022F560
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022F564
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022F568
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022F56C
  c->r[29]=c->r[3]|c->r[3]; // 8022F570
  c->r[30]=c->r[4]|c->r[4]; // 8022F574
  c->r[31]=c->r[5]|c->r[5]; // 8022F578
  c->r[4]=c->r[3]+0x00010000u; // 8022F57C
  c->r[0]=R8(c->r[4]+0xFFFF829Eu); // 8022F580
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F584
  cmps(c,0,(int32_t)c->r[0],1); // 8022F588
  if (!crb(c,2)) { goto L_8022F5A8; } // 8022F58C
  c->r[3]=0u+0x00000001u; // 8022F590
  c->r[4]=0u+0x80480000u; // 8022F594
  c->r[4]=c->r[4]+0x00000484u; // 8022F598
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022F59C
  c->lr=0x8022F5A4u; f_803D3760(c); // 8022F5A0
  goto L_8022F5D0; // 8022F5A4
L_8022F5A8:;
  c->r[3]=R32(c->r[4]+0xFFFF8200u); // 8022F5A8
  W32(c->r[4]+0xFFFF82A8u,c->r[3]); // 8022F5AC
  c->r[4]=c->r[6]|c->r[6]; // 8022F5B0
  c->r[5]=0u+0x00000001u; // 8022F5B4
  c->lr=0x8022F5BCu; f_80224894(c); // 8022F5B8
  c->r[3]=c->r[29]|c->r[29]; // 8022F5BC
  c->r[4]=c->r[30]|c->r[30]; // 8022F5C0
  c->r[5]=c->r[31]|c->r[31]; // 8022F5C4
  c->r[6]=0u+0xFFFFFFFFu; // 8022F5C8
  c->lr=0x8022F5D0u; f_8022F5EC(c); // 8022F5CC
L_8022F5D0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022F5D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022F5D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022F5D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022F5DC
  c->lr=c->r[0]; // 8022F5E0
  c->r[1]=c->r[1]+0x00000020u; // 8022F5E4
  return; // 8022F5E8
}

// fn_8022F5EC
void f_8022F5EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F5EC
  c->r[0]=c->lr; // 8022F5F0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022F5F4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8022F5F8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8022F5FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022F600
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022F604
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022F608
  W32(c->r[1]+0x00000010u,c->r[28]); // 8022F60C
  c->r[30]=c->r[3]|c->r[3]; // 8022F610
  c->r[31]=c->r[4]|c->r[4]; // 8022F614
  c->r[28]=c->r[5]|c->r[5]; // 8022F618
  c->r[29]=c->r[6]|c->r[6]; // 8022F61C
  c->lr=0x8022F624u; f_8022D978(c); // 8022F620
  cmps(c,0,(int32_t)c->r[3],0); // 8022F624
  if (crb(c,2)) { goto L_8022F7F0; } // 8022F628
  cmps(c,0,(int32_t)c->r[28],0); // 8022F62C
  if (!crb(c,2)) { goto L_8022F648; } // 8022F630
  c->r[3]=c->r[30]+0x00010000u; // 8022F634
  c->r[0]=R8(c->r[3]+0xFFFF829Cu); // 8022F638
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F63C
  cmps(c,0,(int32_t)c->r[0],0); // 8022F640
  if (crb(c,2)) { goto L_8022F7F0; } // 8022F644
L_8022F648:;
  c->r[4]=c->r[30]+0x00010000u; // 8022F648
  c->r[0]=R8(c->r[4]+0xFFFF829Eu); // 8022F64C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F650
  cmps(c,0,(int32_t)c->r[0],1); // 8022F654
  if (!crb(c,2)) { goto L_8022F674; } // 8022F658
  c->r[3]=0u+0x00000001u; // 8022F65C
  c->r[4]=0u+0x80480000u; // 8022F660
  c->r[4]=c->r[4]+0x00000484u; // 8022F664
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022F668
  c->lr=0x8022F670u; f_803D3760(c); // 8022F66C
  goto L_8022F7F0; // 8022F670
L_8022F674:;
  c->r[0]=0u+0x00000000u; // 8022F674
  W8(c->r[4]+0xFFFF829Eu,c->r[0]); // 8022F678
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8022F67C
  W8(c->r[4]+0xFFFF829Du,c->r[0]); // 8022F680
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 8022F684
  W8(c->r[4]+0xFFFF829Cu,c->r[0]); // 8022F688
  cmps(c,0,(int32_t)c->r[29],0); // 8022F68C
  if (crb(c,0)) { goto L_8022F6A8; } // 8022F690
  W32(c->r[4]+0xFFFF82A0u,c->r[29]); // 8022F694
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8022F698
  c->r[3]=c->r[4]+c->r[0]; // 8022F69C
  c->r[0]=R32(c->r[3]+0xFFFF81DCu); // 8022F6A0
  W32(c->r[4]+0xFFFF82A8u,c->r[0]); // 8022F6A4
L_8022F6A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8022F6A8
  if (!crb(c,2)) { goto L_8022F714; } // 8022F6AC
  c->r[3]=c->r[30]+0x00010000u; // 8022F6B0
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F6B4
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022F6B8
  c->lr=0x8022F6C0u; f_8021B288(c); // 8022F6BC
  c->r[3]=c->r[30]+0x00010000u; // 8022F6C0
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F6C4
  c->lr=0x8022F6CCu; f_8021B2B8(c); // 8022F6C8
  c->f[31]=c->f[1]; // 8022F6CC
  c->r[3]=c->r[30]+0x00010000u; // 8022F6D0
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F6D4
  c->lr=0x8022F6DCu; f_8021B2A8(c); // 8022F6D8
  c->r[3]=c->r[30]+0x00010000u; // 8022F6DC
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F6E0
  c->f[2]=c->f[31]; // 8022F6E4
  c->r[4]=0u+0x00000001u; // 8022F6E8
  c->lr=0x8022F6F0u; f_802249D0(c); // 8022F6EC
  c->r[3]=c->r[30]+0x00010000u; // 8022F6F0
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F6F4
  c->r[4]=0u+0x00000000u; // 8022F6F8
  c->lr=0x8022F700u; f_8021B46C(c); // 8022F6FC
  c->r[3]=c->r[30]+0x00010000u; // 8022F700
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F704
  c->r[4]=0u+0x00000000u; // 8022F708
  c->lr=0x8022F710u; f_80224B90(c); // 8022F70C
  goto L_8022F7F0; // 8022F710
L_8022F714:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F714
  c->r[0]=R8(c->r[3]+0xFFFF829Cu); // 8022F718
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F71C
  cmps(c,0,(int32_t)c->r[0],2); // 8022F720
  if (crb(c,2)) { goto L_8022F750; } // 8022F724
  if (!crb(c,0)) { goto L_8022F738; } // 8022F728
  cmps(c,0,(int32_t)c->r[0],1); // 8022F72C
  if (!crb(c,0)) { goto L_8022F748; } // 8022F730
  goto L_8022F750; // 8022F734
L_8022F738:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022F738
  if (!crb(c,0)) { goto L_8022F750; } // 8022F73C
  c->r[0]=0u+0x0000003Cu; // 8022F740
  W8(c->r[3]+0xFFFF829Fu,c->r[0]); // 8022F744
L_8022F748:;
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022F748
  goto L_8022F754; // 8022F74C
L_8022F750:;
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022F750
L_8022F754:;
  cmps(c,0,(int32_t)c->r[31],2); // 8022F754
  if (crb(c,2)) { goto L_8022F780; } // 8022F758
  if (!crb(c,0)) { goto L_8022F78C; } // 8022F75C
  cmps(c,0,(int32_t)c->r[31],1); // 8022F760
  if (!crb(c,0)) { goto L_8022F76C; } // 8022F764
  goto L_8022F78C; // 8022F768
L_8022F76C:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F76C
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F770
  c->f[1]=-c->f[1]; // 8022F774
  c->lr=0x8022F77Cu; f_8021B288(c); // 8022F778
  goto L_8022F78C; // 8022F77C
L_8022F780:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F780
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F784
  c->lr=0x8022F78Cu; f_8021B288(c); // 8022F788
L_8022F78C:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F78C
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F790
  c->lr=0x8022F798u; f_8021B2B8(c); // 8022F794
  c->f[31]=c->f[1]; // 8022F798
  c->r[3]=c->r[30]+0x00010000u; // 8022F79C
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F7A0
  c->lr=0x8022F7A8u; f_8021B2A8(c); // 8022F7A4
  c->r[3]=c->r[30]+0x00010000u; // 8022F7A8
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F7AC
  c->f[2]=c->f[31]; // 8022F7B0
  c->r[4]=0u+0x00000001u; // 8022F7B4
  c->lr=0x8022F7BCu; f_802249D0(c); // 8022F7B8
  c->r[3]=c->r[30]+0x00010000u; // 8022F7BC
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F7C0
  c->r[4]=0u+0x00000001u; // 8022F7C4
  c->lr=0x8022F7CCu; f_8021B46C(c); // 8022F7C8
  c->r[3]=c->r[30]+0x00010000u; // 8022F7CC
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F7D0
  c->r[4]=0u+0x00000001u; // 8022F7D4
  c->lr=0x8022F7DCu; f_80224B90(c); // 8022F7D8
  c->r[0]=0u+0x00000000u; // 8022F7DC
  c->r[3]=c->r[30]+0x00010000u; // 8022F7E0
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022F7E4
  c->r[0]=0u+0x00000001u; // 8022F7E8
  W8(c->r[3]+0xFFFF829Eu,c->r[0]); // 8022F7EC
L_8022F7F0:;
  c->r[0]=0u+0x00000028u; // 8022F7F0
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022F7F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8022F7F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022F7FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022F800
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022F804
  c->r[28]=R32(c->r[1]+0x00000010u); // 8022F808
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022F80C
  c->lr=c->r[0]; // 8022F810
  c->r[1]=c->r[1]+0x00000030u; // 8022F814
  return; // 8022F818
}

// fn_8022F81C
void f_8022F81C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F81C
  c->r[0]=c->lr; // 8022F820
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022F824
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8022F828
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8022F82C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8022F830
  W32(c->r[1]+0x00000008u,c->r[30]); // 8022F834
  c->r[30]=c->r[3]|c->r[3]; // 8022F838
  c->f[31]=c->f[1]; // 8022F83C
  c->r[31]=0u+0x00000001u; // 8022F840
  c->r[3]=c->r[3]+0x00010000u; // 8022F844
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F848
  c->lr=0x8022F850u; f_8023108C(c); // 8022F84C
  c->f[2]=c->ps1[2]=S(c->f[31]-c->f[1]); // 8022F850
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022F854
  fcmp(c,0,c->f[2],c->f[0]); // 8022F858
  if (!crb(c,0)) { goto L_8022F884; } // 8022F85C
  fcmp(c,0,c->f[1],c->f[31]); // 8022F860
  if (!crb(c,1)) { goto L_8022F8A4; } // 8022F864
  c->r[31]=0u+0x00000000u; // 8022F868
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022F86C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8022F870
  fcmp(c,0,c->f[1],c->f[31]); // 8022F874
  if (!crb(c,0)) { goto L_8022F8A4; } // 8022F878
  c->f[1]=c->f[31]; // 8022F87C
  goto L_8022F8A4; // 8022F880
L_8022F884:;
  fcmp(c,0,c->f[1],c->f[31]); // 8022F884
  if (!crb(c,0)) { goto L_8022F8A4; } // 8022F888
  c->r[31]=0u+0x00000000u; // 8022F88C
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[0]=c->ps1[0]=RF32(ea);} // 8022F890
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 8022F894
  fcmp(c,0,c->f[1],c->f[31]); // 8022F898
  if (!crb(c,1)) { goto L_8022F8A4; } // 8022F89C
  c->f[1]=c->f[31]; // 8022F8A0
L_8022F8A4:;
  c->r[3]=c->r[30]+0x00010000u; // 8022F8A4
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F8A8
  c->lr=0x8022F8B0u; f_8021B288(c); // 8022F8AC
  c->r[3]=c->r[30]+0x00010000u; // 8022F8B0
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F8B4
  c->lr=0x8022F8BCu; f_8021B2B8(c); // 8022F8B8
  c->f[31]=c->f[1]; // 8022F8BC
  c->r[3]=c->r[30]+0x00010000u; // 8022F8C0
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022F8C4
  c->lr=0x8022F8CCu; f_8021B2A8(c); // 8022F8C8
  c->r[3]=c->r[30]+0x00010000u; // 8022F8CC
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F8D0
  c->f[2]=c->f[31]; // 8022F8D4
  c->r[4]=0u+0x00000000u; // 8022F8D8
  c->lr=0x8022F8E0u; f_802249D0(c); // 8022F8DC
  c->r[3]=c->r[30]+0x00010000u; // 8022F8E0
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F8E4
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8022F8E8
  {uint32_t ea=c->r[2]+0xFFFF9A7Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8022F8EC
  c->r[4]=0u+0x00000000u; // 8022F8F0
  c->lr=0x8022F8F8u; f_802249E8(c); // 8022F8F4
  c->r[3]=c->r[30]+0x00010000u; // 8022F8F8
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F8FC
  c->r[4]=0u+0x00000001u; // 8022F900
  c->r[5]=0u+0x00000001u; // 8022F904
  c->lr=0x8022F90Cu; f_802249B4(c); // 8022F908
  c->r[3]=c->r[30]+0x00010000u; // 8022F90C
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022F910
  c->r[4]=0u+0x00000001u; // 8022F914
  c->lr=0x8022F91Cu; f_80224B90(c); // 8022F918
  c->r[3]=c->r[31]|c->r[31]; // 8022F91C
  c->r[0]=0u+0x00000018u; // 8022F920
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022F924
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8022F928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8022F92C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8022F930
  c->r[0]=R32(c->r[1]+0x00000024u); // 8022F934
  c->lr=c->r[0]; // 8022F938
  c->r[1]=c->r[1]+0x00000020u; // 8022F93C
  return; // 8022F940
}

// fn_8022F944
void f_8022F944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022F944
  c->r[0]=c->lr; // 8022F948
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022F94C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8022F950
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8022F954
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022F958
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022F95C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022F960
  c->r[31]=c->r[3]|c->r[3]; // 8022F964
  c->r[30]=0u+0x00000001u; // 8022F968
  c->r[29]=0u+0x00000001u; // 8022F96C
  c->r[4]=c->r[3]+0x00010000u; // 8022F970
  c->r[0]=R8(c->r[4]+0xFFFF829Cu); // 8022F974
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F978
  cmps(c,0,(int32_t)c->r[0],2); // 8022F97C
  if (crb(c,2)) { goto L_8022F9F4; } // 8022F980
  if (!crb(c,0)) { goto L_8022F994; } // 8022F984
  cmps(c,0,(int32_t)c->r[0],1); // 8022F988
  if (!crb(c,0)) { goto L_8022F9EC; } // 8022F98C
  goto L_8022F9F4; // 8022F990
L_8022F994:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022F994
  if (!crb(c,0)) { goto L_8022F9F4; } // 8022F998
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF8290u); // 8022F99C
  cmps(c,0,(int32_t)c->r[0],1); // 8022F9A0
  if (crb(c,2)) { goto L_8022F9CC; } // 8022F9A4
  if (!crb(c,0)) { goto L_8022F9B8; } // 8022F9A8
  cmps(c,0,(int32_t)c->r[0],0); // 8022F9AC
  if (!crb(c,0)) { goto L_8022F9EC; } // 8022F9B0
  goto L_8022F9CC; // 8022F9B4
L_8022F9B8:;
  cmps(c,0,(int32_t)c->r[0],3); // 8022F9B8
  if (!crb(c,0)) { goto L_8022F9CC; } // 8022F9BC
  goto L_8022F9EC; // 8022F9C0
  goto L_8022F9EC; // 8022F9C4
  goto L_8022F9EC; // 8022F9C8
L_8022F9CC:;
  c->r[5]=c->r[3]+0x00010000u; // 8022F9CC
  c->r[4]=R8(c->r[5]+0xFFFF829Fu); // 8022F9D0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8022F9D4
  W8(c->r[5]+0xFFFF829Fu,c->r[0]); // 8022F9D8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022F9DC
  cmps(c,0,(int32_t)c->r[0],0); // 8022F9E0
  if (crb(c,1)) { goto L_8022FAE4; } // 8022F9E4
  c->r[29]=0u+0x00000000u; // 8022F9E8
L_8022F9EC:;
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022F9EC
  goto L_8022F9F8; // 8022F9F0
L_8022F9F4:;
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022F9F4
L_8022F9F8:;
  c->r[3]=c->r[3]+0x00010000u; // 8022F9F8
  c->r[0]=R8(c->r[3]+0xFFFF829Du); // 8022F9FC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FA00
  cmps(c,0,(int32_t)c->r[0],2); // 8022FA04
  if (crb(c,2)) { goto L_8022FA4C; } // 8022FA08
  if (!crb(c,0)) { goto L_8022FA1C; } // 8022FA0C
  cmps(c,0,(int32_t)c->r[0],1); // 8022FA10
  if (!crb(c,0)) { goto L_8022FA28; } // 8022FA14
  goto L_8022FA5C; // 8022FA18
L_8022FA1C:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022FA1C
  if (!crb(c,0)) { goto L_8022FA5C; } // 8022FA20
  goto L_8022FA3C; // 8022FA24
L_8022FA28:;
  c->r[3]=c->r[31]|c->r[31]; // 8022FA28
  c->f[1]=-c->f[31]; // 8022FA2C
  c->lr=0x8022FA34u; f_8022F81C(c); // 8022FA30
  c->r[30]=rotl(c->r[3],0)&0x00000001u; // 8022FA34
  goto L_8022FA5C; // 8022FA38
L_8022FA3C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022FA3C
  c->f[1]=-c->f[31]; // 8022FA40
  c->lr=0x8022FA48u; f_8022F81C(c); // 8022FA44
  c->r[30]=rotl(c->r[3],0)&0x00000001u; // 8022FA48
L_8022FA4C:;
  c->r[3]=c->r[31]|c->r[31]; // 8022FA4C
  c->f[1]=c->f[31]; // 8022FA50
  c->lr=0x8022FA58u; f_8022F81C(c); // 8022FA54
  c->r[30]=c->r[30]&c->r[3]; // 8022FA58
L_8022FA5C:;
  c->r[30]=c->r[30]&c->r[29]; // 8022FA5C
  cmps(c,0,(int32_t)c->r[30],0); // 8022FA60
  if (crb(c,2)) { goto L_8022FAE4; } // 8022FA64
  c->r[4]=c->r[31]+0x00010000u; // 8022FA68
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF8290u); // 8022FA6C
  cmps(c,0,(int32_t)c->r[3],2); // 8022FA70
  if (!crb(c,0)) { goto L_8022FA90; } // 8022FA74
  cmps(c,0,(int32_t)c->r[3],0); // 8022FA78
  if (!crb(c,0)) { goto L_8022FA84; } // 8022FA7C
  goto L_8022FA90; // 8022FA80
L_8022FA84:;
  c->r[0]=c->r[3]+0x00000001u; // 8022FA84
  W16(c->r[4]+0xFFFF8290u,c->r[0]); // 8022FA88
  goto L_8022FAE4; // 8022FA8C
L_8022FA90:;
  c->r[3]=0u+0x00000001u; // 8022FA90
  c->r[4]=0u+0x80480000u; // 8022FA94
  c->r[4]=c->r[4]+0x000004B8u; // 8022FA98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FA9C
  c->lr=0x8022FAA4u; f_803D3760(c); // 8022FAA0
  c->r[0]=0u+0x00000000u; // 8022FAA4
  c->r[3]=c->r[31]+0x00010000u; // 8022FAA8
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022FAAC
  c->r[0]=0u+0x00000002u; // 8022FAB0
  W8(c->r[3]+0xFFFF829Eu,c->r[0]); // 8022FAB4
  c->r[0]=R8(c->r[3]+0xFFFF829Cu); // 8022FAB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FABC
  cmps(c,0,(int32_t)c->r[0],0); // 8022FAC0
  if (!crb(c,2)) { goto L_8022FAE4; } // 8022FAC4
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FAC8
  c->r[4]=0u+0x00000000u; // 8022FACC
  c->lr=0x8022FAD4u; f_8021B46C(c); // 8022FAD0
  c->r[3]=c->r[31]+0x00010000u; // 8022FAD4
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022FAD8
  c->r[4]=0u+0x00000000u; // 8022FADC
  c->lr=0x8022FAE4u; f_80224B90(c); // 8022FAE0
L_8022FAE4:;
  c->r[0]=0u+0x00000028u; // 8022FAE4
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022FAE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8022FAEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022FAF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022FAF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022FAF8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022FAFC
  c->lr=c->r[0]; // 8022FB00
  c->r[1]=c->r[1]+0x00000030u; // 8022FB04
  return; // 8022FB08
}

// fn_8022FB0C
void f_8022FB0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022FB0C
  c->r[0]=c->lr; // 8022FB10
  W32(c->r[1]+0x00000034u,c->r[0]); // 8022FB14
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8022FB18
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8022FB1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022FB20
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022FB24
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022FB28
  W32(c->r[1]+0x00000010u,c->r[28]); // 8022FB2C
  c->r[30]=c->r[3]|c->r[3]; // 8022FB30
  c->r[31]=c->r[4]|c->r[4]; // 8022FB34
  c->r[28]=c->r[5]|c->r[5]; // 8022FB38
  c->r[29]=c->r[6]|c->r[6]; // 8022FB3C
  c->lr=0x8022FB44u; f_8022D978(c); // 8022FB40
  cmps(c,0,(int32_t)c->r[3],0); // 8022FB44
  if (crb(c,2)) { goto L_8022FD18; } // 8022FB48
  c->r[3]=c->r[30]+0x00010000u; // 8022FB4C
  c->r[0]=R8(c->r[3]+0xFFFF8295u); // 8022FB50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FB54
  cmps(c,0,(int32_t)c->r[0],1); // 8022FB58
  if (crb(c,2)) { goto L_8022FB70; } // 8022FB5C
  c->r[0]=R8(c->r[3]+0xFFFF829Eu); // 8022FB60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FB64
  cmps(c,0,(int32_t)c->r[0],1); // 8022FB68
  if (!crb(c,2)) { goto L_8022FB88; } // 8022FB6C
L_8022FB70:;
  c->r[3]=0u+0x00000001u; // 8022FB70
  c->r[4]=0u+0x80480000u; // 8022FB74
  c->r[4]=c->r[4]+0x000004CCu; // 8022FB78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FB7C
  c->lr=0x8022FB84u; f_803D3760(c); // 8022FB80
  goto L_8022FD18; // 8022FB84
L_8022FB88:;
  c->r[3]=0u+0x00000001u; // 8022FB88
  c->r[4]=0u+0x80480000u; // 8022FB8C
  c->r[4]=c->r[4]+0x00000500u; // 8022FB90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FB94
  c->lr=0x8022FB9Cu; f_803D3760(c); // 8022FB98
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8022FB9C
  c->r[4]=c->r[30]+0x00010000u; // 8022FBA0
  W8(c->r[4]+0xFFFF8294u,c->r[3]); // 8022FBA4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[28]; // 8022FBA8
  W8(c->r[4]+0xFFFF8293u,c->r[0]); // 8022FBAC
  W8(c->r[4]+0xFFFF829Du,c->r[3]); // 8022FBB0
  W8(c->r[4]+0xFFFF829Cu,c->r[0]); // 8022FBB4
  cmps(c,0,(int32_t)c->r[29],0); // 8022FBB8
  if (crb(c,0)) { goto L_8022FBD4; } // 8022FBBC
  W32(c->r[4]+0xFFFF82A0u,c->r[29]); // 8022FBC0
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 8022FBC4
  c->r[3]=c->r[4]+c->r[0]; // 8022FBC8
  c->r[0]=R32(c->r[3]+0xFFFF81DCu); // 8022FBCC
  W32(c->r[4]+0xFFFF82A8u,c->r[0]); // 8022FBD0
L_8022FBD4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8022FBD4
  if (!crb(c,2)) { goto L_8022FC20; } // 8022FBD8
  c->r[3]=c->r[30]+0x00010000u; // 8022FBDC
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022FBE0
  c->r[4]=0u+0x00000000u; // 8022FBE4
  c->lr=0x8022FBECu; f_80253970(c); // 8022FBE8
  c->r[3]=c->r[30]+0x00010000u; // 8022FBEC
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 8022FBF0
  c->r[4]=0u+0x00000000u; // 8022FBF4
  c->lr=0x8022FBFCu; f_80253970(c); // 8022FBF8
  c->r[3]=c->r[30]+0x00010000u; // 8022FBFC
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FC00
  c->r[4]=0u+0x00000000u; // 8022FC04
  c->lr=0x8022FC0Cu; f_8021B46C(c); // 8022FC08
  c->r[3]=c->r[30]+0x00010000u; // 8022FC0C
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022FC10
  c->r[4]=0u+0x00000000u; // 8022FC14
  c->lr=0x8022FC1Cu; f_80224B90(c); // 8022FC18
  goto L_8022FD18; // 8022FC1C
L_8022FC20:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FC20
  c->r[0]=R8(c->r[3]+0xFFFF829Cu); // 8022FC24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FC28
  cmps(c,0,(int32_t)c->r[0],1); // 8022FC2C
  if (crb(c,2)) { goto L_8022FC38; } // 8022FC30
  goto L_8022FC40; // 8022FC34
L_8022FC38:;
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022FC38
  goto L_8022FC44; // 8022FC3C
L_8022FC40:;
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022FC40
L_8022FC44:;
  cmps(c,0,(int32_t)c->r[31],2); // 8022FC44
  if (crb(c,2)) { goto L_8022FC9C; } // 8022FC48
  if (!crb(c,0)) { goto L_8022FC5C; } // 8022FC4C
  cmps(c,0,(int32_t)c->r[31],1); // 8022FC50
  if (!crb(c,0)) { goto L_8022FC68; } // 8022FC54
  goto L_8022FCBC; // 8022FC58
L_8022FC5C:;
  cmps(c,0,(int32_t)c->r[31],4); // 8022FC5C
  if (!crb(c,0)) { goto L_8022FCBC; } // 8022FC60
  goto L_8022FC8C; // 8022FC64
L_8022FC68:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FC68
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022FC6C
  c->r[4]=0u+0x00000001u; // 8022FC70
  c->lr=0x8022FC78u; f_80253970(c); // 8022FC74
  c->r[3]=c->r[30]+0x00010000u; // 8022FC78
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FC7C
  c->f[1]=-c->f[31]; // 8022FC80
  c->lr=0x8022FC88u; f_8021B288(c); // 8022FC84
  goto L_8022FCBC; // 8022FC88
L_8022FC8C:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FC8C
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8022FC90
  c->r[4]=0u+0x00000001u; // 8022FC94
  c->lr=0x8022FC9Cu; f_80253970(c); // 8022FC98
L_8022FC9C:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FC9C
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 8022FCA0
  c->r[4]=0u+0x00000001u; // 8022FCA4
  c->lr=0x8022FCACu; f_80253970(c); // 8022FCA8
  c->r[3]=c->r[30]+0x00010000u; // 8022FCAC
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FCB0
  c->f[1]=c->f[31]; // 8022FCB4
  c->lr=0x8022FCBCu; f_8021B288(c); // 8022FCB8
L_8022FCBC:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FCBC
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FCC0
  c->lr=0x8022FCC8u; f_8021B2B8(c); // 8022FCC4
  c->f[31]=c->f[1]; // 8022FCC8
  c->r[3]=c->r[30]+0x00010000u; // 8022FCCC
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FCD0
  c->lr=0x8022FCD8u; f_8021B2A8(c); // 8022FCD4
  c->r[3]=c->r[30]+0x00010000u; // 8022FCD8
  c->r[3]=R32(c->r[3]+0xFFFF82A8u); // 8022FCDC
  c->f[2]=c->f[31]; // 8022FCE0
  c->r[4]=0u+0x00000001u; // 8022FCE4
  c->lr=0x8022FCECu; f_802249D0(c); // 8022FCE8
  c->r[3]=c->r[30]+0x00010000u; // 8022FCEC
  c->r[3]=R32(c->r[3]+0xFFFF82A4u); // 8022FCF0
  c->r[4]=0u+0x00000001u; // 8022FCF4
  c->lr=0x8022FCFCu; f_8021B46C(c); // 8022FCF8
  c->r[0]=0u+0x00000000u; // 8022FCFC
  c->r[3]=c->r[30]+0x00010000u; // 8022FD00
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022FD04
  c->r[0]=0u+0x00000001u; // 8022FD08
  W8(c->r[3]+0xFFFF8295u,c->r[0]); // 8022FD0C
  W8(c->r[3]+0xFFFF829Eu,c->r[0]); // 8022FD10
  W8(c->r[3]+0xFFFF82ACu,c->r[0]); // 8022FD14
L_8022FD18:;
  c->r[0]=0u+0x00000028u; // 8022FD18
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022FD1C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8022FD20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022FD24
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022FD28
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022FD2C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8022FD30
  c->r[0]=R32(c->r[1]+0x00000034u); // 8022FD34
  c->lr=c->r[0]; // 8022FD38
  c->r[1]=c->r[1]+0x00000030u; // 8022FD3C
  return; // 8022FD40
}

// fn_8022FD44
void f_8022FD44(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022FD44
  c->r[0]=c->lr; // 8022FD48
  W32(c->r[1]+0x00000044u,c->r[0]); // 8022FD4C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 8022FD50
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 8022FD54
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 8022FD58
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 8022FD5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022FD60
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022FD64
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022FD68
  c->r[30]=c->r[3]|c->r[3]; // 8022FD6C
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[30]=c->ps1[30]=RF32(ea);} // 8022FD70
  c->r[29]=0u+0x00000001u; // 8022FD74
  c->r[31]=0u+0x00000001u; // 8022FD78
  c->r[4]=c->r[3]+0x00010000u; // 8022FD7C
  c->r[0]=R8(c->r[4]+0xFFFF8293u); // 8022FD80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FD84
  cmps(c,0,(int32_t)c->r[0],2); // 8022FD88
  if (crb(c,2)) { goto L_8022FDAC; } // 8022FD8C
  if (!crb(c,0)) { goto L_8022FDB4; } // 8022FD90
  cmps(c,0,(int32_t)c->r[0],1); // 8022FD94
  if (!crb(c,0)) { goto L_8022FDA0; } // 8022FD98
  goto L_8022FDB4; // 8022FD9C
L_8022FDA0:;
  {uint32_t ea=c->r[2]+0xFFFF9A4Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 8022FDA0
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[30]=c->ps1[30]=RF32(ea);} // 8022FDA4
  goto L_8022FDBC; // 8022FDA8
L_8022FDAC:;
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022FDAC
  goto L_8022FDBC; // 8022FDB0
L_8022FDB4:;
  {uint32_t ea=c->r[2]+0xFFFF9A74u; c->f[31]=c->ps1[31]=RF32(ea);} // 8022FDB4
  c->f[30]=c->f[31]; // 8022FDB8
L_8022FDBC:;
  c->r[3]=c->r[3]+0x00010000u; // 8022FDBC
  c->r[0]=R8(c->r[3]+0xFFFF8295u); // 8022FDC0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FDC4
  cmps(c,0,(int32_t)c->r[0],1); // 8022FDC8
  if (!crb(c,2)) { goto L_8022FE64; } // 8022FDCC
  c->r[0]=R8(c->r[3]+0xFFFF8294u); // 8022FDD0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FDD4
  cmps(c,0,(int32_t)c->r[0],2); // 8022FDD8
  if (crb(c,2)) { goto L_8022FE28; } // 8022FDDC
  if (!crb(c,0)) { goto L_8022FDF0; } // 8022FDE0
  cmps(c,0,(int32_t)c->r[0],1); // 8022FDE4
  if (!crb(c,0)) { goto L_8022FDFC; } // 8022FDE8
  goto L_8022FE3C; // 8022FDEC
L_8022FDF0:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022FDF0
  if (!crb(c,0)) { goto L_8022FE3C; } // 8022FDF4
  goto L_8022FE14; // 8022FDF8
L_8022FDFC:;
  c->r[3]=c->r[30]|c->r[30]; // 8022FDFC
  c->r[4]=0u+0x00000000u; // 8022FE00
  c->f[1]=-c->f[31]; // 8022FE04
  c->lr=0x8022FE0Cu; f_8022F36C(c); // 8022FE08
  c->r[29]=rotl(c->r[3],0)&0x00000001u; // 8022FE0C
  goto L_8022FE3C; // 8022FE10
L_8022FE14:;
  c->r[3]=c->r[30]|c->r[30]; // 8022FE14
  c->r[4]=0u+0x00000000u; // 8022FE18
  c->f[1]=-c->f[31]; // 8022FE1C
  c->lr=0x8022FE24u; f_8022F36C(c); // 8022FE20
  c->r[29]=rotl(c->r[3],0)&0x00000001u; // 8022FE24
L_8022FE28:;
  c->r[3]=c->r[30]|c->r[30]; // 8022FE28
  c->r[4]=0u+0x00000001u; // 8022FE2C
  c->f[1]=c->f[31]; // 8022FE30
  c->lr=0x8022FE38u; f_8022F36C(c); // 8022FE34
  c->r[29]=c->r[29]&c->r[3]; // 8022FE38
L_8022FE3C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8022FE3C
  if (crb(c,2)) { goto L_8022FE64; } // 8022FE40
  c->r[3]=0u+0x00000001u; // 8022FE44
  c->r[4]=0u+0x80480000u; // 8022FE48
  c->r[4]=c->r[4]+0x0000052Cu; // 8022FE4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FE50
  c->lr=0x8022FE58u; f_803D3760(c); // 8022FE54
  c->r[0]=0u+0x00000002u; // 8022FE58
  c->r[3]=c->r[30]+0x00010000u; // 8022FE5C
  W8(c->r[3]+0xFFFF8295u,c->r[0]); // 8022FE60
L_8022FE64:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FE64
  c->r[0]=R8(c->r[3]+0xFFFF829Eu); // 8022FE68
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FE6C
  cmps(c,0,(int32_t)c->r[0],1); // 8022FE70
  if (!crb(c,2)) { goto L_8022FF00; } // 8022FE74
  c->r[0]=R8(c->r[3]+0xFFFF829Du); // 8022FE78
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FE7C
  cmps(c,0,(int32_t)c->r[0],2); // 8022FE80
  if (crb(c,2)) { goto L_8022FEC8; } // 8022FE84
  if (!crb(c,0)) { goto L_8022FE98; } // 8022FE88
  cmps(c,0,(int32_t)c->r[0],1); // 8022FE8C
  if (!crb(c,0)) { goto L_8022FEA4; } // 8022FE90
  goto L_8022FED8; // 8022FE94
L_8022FE98:;
  cmps(c,0,(int32_t)c->r[0],4); // 8022FE98
  if (!crb(c,0)) { goto L_8022FED8; } // 8022FE9C
  goto L_8022FEB8; // 8022FEA0
L_8022FEA4:;
  c->r[3]=c->r[30]|c->r[30]; // 8022FEA4
  c->f[1]=-c->f[30]; // 8022FEA8
  c->lr=0x8022FEB0u; f_8022F81C(c); // 8022FEAC
  c->r[31]=rotl(c->r[3],0)&0x00000001u; // 8022FEB0
  goto L_8022FED8; // 8022FEB4
L_8022FEB8:;
  c->r[3]=c->r[30]|c->r[30]; // 8022FEB8
  c->f[1]=-c->f[30]; // 8022FEBC
  c->lr=0x8022FEC4u; f_8022F81C(c); // 8022FEC0
  c->r[31]=rotl(c->r[3],0)&0x00000001u; // 8022FEC4
L_8022FEC8:;
  c->r[3]=c->r[30]|c->r[30]; // 8022FEC8
  c->f[1]=c->f[30]; // 8022FECC
  c->lr=0x8022FED4u; f_8022F81C(c); // 8022FED0
  c->r[31]=c->r[31]&c->r[3]; // 8022FED4
L_8022FED8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8022FED8
  if (crb(c,2)) { goto L_8022FF00; } // 8022FEDC
  c->r[3]=0u+0x00000001u; // 8022FEE0
  c->r[4]=0u+0x80480000u; // 8022FEE4
  c->r[4]=c->r[4]+0x000004B8u; // 8022FEE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FEEC
  c->lr=0x8022FEF4u; f_803D3760(c); // 8022FEF0
  c->r[0]=0u+0x00000002u; // 8022FEF4
  c->r[3]=c->r[30]+0x00010000u; // 8022FEF8
  W8(c->r[3]+0xFFFF829Eu,c->r[0]); // 8022FEFC
L_8022FF00:;
  c->r[3]=c->r[30]+0x00010000u; // 8022FF00
  c->r[0]=R8(c->r[3]+0xFFFF8295u); // 8022FF04
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FF08
  cmps(c,0,(int32_t)c->r[0],2); // 8022FF0C
  if (!crb(c,2)) { goto L_8022FF34; } // 8022FF10
  c->r[0]=R8(c->r[3]+0xFFFF829Eu); // 8022FF14
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FF18
  cmps(c,0,(int32_t)c->r[0],2); // 8022FF1C
  if (!crb(c,2)) { goto L_8022FF34; } // 8022FF20
  c->r[0]=0u+0x00000000u; // 8022FF24
  W16(c->r[3]+0xFFFF8290u,c->r[0]); // 8022FF28
  c->r[0]=0u+0x00000002u; // 8022FF2C
  W8(c->r[3]+0xFFFF82ACu,c->r[0]); // 8022FF30
L_8022FF34:;
  c->r[0]=0u+0x00000038u; // 8022FF34
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 8022FF38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 8022FF3C
  c->r[0]=0u+0x00000028u; // 8022FF40
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 8022FF44
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 8022FF48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8022FF4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8022FF50
  c->r[29]=R32(c->r[1]+0x00000014u); // 8022FF54
  c->r[0]=R32(c->r[1]+0x00000044u); // 8022FF58
  c->lr=c->r[0]; // 8022FF5C
  c->r[1]=c->r[1]+0x00000040u; // 8022FF60
  return; // 8022FF64
}

// fn_8022FF68
void f_8022FF68(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8022FF68
  c->r[0]=c->lr; // 8022FF6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8022FF70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8022FF74
  W32(c->r[1]+0x00000018u,c->r[30]); // 8022FF78
  W32(c->r[1]+0x00000014u,c->r[29]); // 8022FF7C
  c->r[29]=c->r[3]|c->r[3]; // 8022FF80
  c->r[30]=c->r[4]|c->r[4]; // 8022FF84
  c->lr=0x8022FF8Cu; f_8022D978(c); // 8022FF88
  cmps(c,0,(int32_t)c->r[3],0); // 8022FF8C
  if (!crb(c,2)) { goto L_8022FF9C; } // 8022FF90
  c->r[3]=0u+0x00000000u; // 8022FF94
  goto L_80230104; // 8022FF98
L_8022FF9C:;
  c->r[3]=c->r[29]+0x00010000u; // 8022FF9C
  c->r[0]=R8(c->r[3]+0xFFFF8284u); // 8022FFA0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8022FFA4
  cmps(c,0,(int32_t)c->r[0],1); // 8022FFA8
  if (!crb(c,2)) { goto L_8022FFCC; } // 8022FFAC
  c->r[3]=0u+0x00000001u; // 8022FFB0
  c->r[4]=0u+0x80480000u; // 8022FFB4
  c->r[4]=c->r[4]+0x00000544u; // 8022FFB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FFBC
  c->lr=0x8022FFC4u; f_803D3760(c); // 8022FFC0
  c->r[3]=0u+0x00000000u; // 8022FFC4
  goto L_80230104; // 8022FFC8
L_8022FFCC:;
  c->r[3]=0u+0x00000001u; // 8022FFCC
  c->r[4]=0u+0x80480000u; // 8022FFD0
  c->r[4]=c->r[4]+0x0000057Cu; // 8022FFD4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8022FFD8
  c->lr=0x8022FFE0u; f_803D3760(c); // 8022FFDC
  c->r[31]=0u+0x00000000u; // 8022FFE0
  c->r[3]=c->r[29]+0x00010000u; // 8022FFE4
  W8(c->r[3]+0xFFFF8284u,c->r[31]); // 8022FFE8
  cmps(c,0,(int32_t)c->r[30],2); // 8022FFEC
  if (crb(c,2)) { goto L_80230074; } // 8022FFF0
  if (!crb(c,0)) { goto L_802300E4; } // 8022FFF4
  cmps(c,0,(int32_t)c->r[30],1); // 8022FFF8
  if (!crb(c,0)) { goto L_80230004; } // 8022FFFC
  goto L_802300E4; // 80230000
L_80230004:;
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 80230004
  c->r[4]=0u+0x00000000u; // 80230008
  c->r[5]=0u+0x00000000u; // 8023000C
  c->lr=0x80230014u; f_8021B358(c); // 80230010
  c->r[3]=c->r[29]+0x00010000u; // 80230014
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 80230018
  c->r[4]=0u+0x00000001u; // 8023001C
  c->lr=0x80230024u; f_8021B46C(c); // 80230020
  c->r[3]=c->r[1]+0x0000000Cu; // 80230024
  c->r[4]=0u+0x000000FFu; // 80230028
  c->r[5]=0u+0x000000FFu; // 8023002C
  c->r[6]=0u+0x000000FFu; // 80230030
  c->r[7]=0u+0x00000080u; // 80230034
  c->lr=0x8023003Cu; f_8004E248(c); // 80230038
  c->r[3]=c->r[29]+0x00010000u; // 8023003C
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 80230040
  c->r[4]=c->r[1]+0x0000000Cu; // 80230044
  c->r[5]=0u+0xFFFFFFFFu; // 80230048
  c->r[6]=0u+0x00000000u; // 8023004C
  c->lr=0x80230054u; f_8021B4E4(c); // 80230050
  c->r[3]=c->r[1]+0x0000000Cu; // 80230054
  c->r[4]=0u+0xFFFFFFFFu; // 80230058
  c->lr=0x80230060u; f_80047BD4(c); // 8023005C
  c->r[0]=0u+0x00000001u; // 80230060
  c->r[3]=c->r[29]+0x00010000u; // 80230064
  W8(c->r[3]+0xFFFF8284u,c->r[0]); // 80230068
  W16(c->r[3]+0xFFFF8286u,c->r[31]); // 8023006C
  goto L_80230100; // 80230070
L_80230074:;
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 80230074
  c->r[4]=0u+0x00000000u; // 80230078
  c->r[5]=0u+0x00000001u; // 8023007C
  c->lr=0x80230084u; f_8021B358(c); // 80230080
  c->r[3]=c->r[29]+0x00010000u; // 80230084
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 80230088
  c->r[4]=0u+0x00000001u; // 8023008C
  c->lr=0x80230094u; f_8021B46C(c); // 80230090
  c->r[3]=c->r[1]+0x00000008u; // 80230094
  c->r[4]=0u+0x000000FFu; // 80230098
  c->r[5]=0u+0x000000FFu; // 8023009C
  c->r[6]=0u+0x000000FFu; // 802300A0
  c->r[7]=0u+0x00000080u; // 802300A4
  c->lr=0x802300ACu; f_8004E248(c); // 802300A8
  c->r[3]=c->r[29]+0x00010000u; // 802300AC
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 802300B0
  c->r[4]=c->r[1]+0x00000008u; // 802300B4
  c->r[5]=0u+0xFFFFFFFFu; // 802300B8
  c->r[6]=0u+0x00000000u; // 802300BC
  c->lr=0x802300C4u; f_8021B4E4(c); // 802300C0
  c->r[3]=c->r[1]+0x00000008u; // 802300C4
  c->r[4]=0u+0xFFFFFFFFu; // 802300C8
  c->lr=0x802300D0u; f_80047BD4(c); // 802300CC
  c->r[0]=0u+0x00000001u; // 802300D0
  c->r[3]=c->r[29]+0x00010000u; // 802300D4
  W8(c->r[3]+0xFFFF8284u,c->r[0]); // 802300D8
  W16(c->r[3]+0xFFFF8286u,c->r[31]); // 802300DC
  goto L_80230100; // 802300E0
L_802300E4:;
  c->r[3]=c->r[29]+0x00010000u; // 802300E4
  c->r[3]=R32(c->r[3]+0xFFFF8280u); // 802300E8
  c->r[4]=0u+0x00000000u; // 802300EC
  c->lr=0x802300F4u; f_8021B46C(c); // 802300F0
  c->r[0]=0u+0x00000000u; // 802300F4
  c->r[3]=c->r[29]+0x00010000u; // 802300F8
  W8(c->r[3]+0xFFFF8284u,c->r[0]); // 802300FC
L_80230100:;
  c->r[3]=0u+0x00000001u; // 80230100
L_80230104:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80230104
  c->r[30]=R32(c->r[1]+0x00000018u); // 80230108
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023010C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80230110
  c->lr=c->r[0]; // 80230114
  c->r[1]=c->r[1]+0x00000020u; // 80230118
  return; // 8023011C
}

// fn_80230120
void f_80230120(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230120
  c->r[0]=c->lr; // 80230124
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230128
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023012C
  c->r[31]=c->r[3]|c->r[3]; // 80230130
  c->r[4]=c->r[3]+0x00010000u; // 80230134
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF8286u); // 80230138
  cmps(c,0,(int32_t)c->r[3],50); // 8023013C
  if (crb(c,2)) { goto L_80230148; } // 80230140
  goto L_80230164; // 80230144
L_80230148:;
  c->r[3]=R32(c->r[4]+0xFFFF8280u); // 80230148
  c->r[4]=0u+0x00000000u; // 8023014C
  c->lr=0x80230154u; f_8021B46C(c); // 80230150
  c->r[0]=0u+0x00000000u; // 80230154
  c->r[3]=c->r[31]+0x00010000u; // 80230158
  W8(c->r[3]+0xFFFF8284u,c->r[0]); // 8023015C
  goto L_8023016C; // 80230160
L_80230164:;
  c->r[0]=c->r[3]+0x00000001u; // 80230164
  W16(c->r[4]+0xFFFF8286u,c->r[0]); // 80230168
L_8023016C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023016C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230170
  c->lr=c->r[0]; // 80230174
  c->r[1]=c->r[1]+0x00000010u; // 80230178
  return; // 8023017C
}

// fn_80230180
void f_80230180(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230180
  c->r[0]=c->lr; // 80230184
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230188
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023018C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80230190
  c->r[30]=c->r[3]|c->r[3]; // 80230194
  c->r[31]=c->r[4]|c->r[4]; // 80230198
  c->lr=0x802301A0u; f_8022D978(c); // 8023019C
  cmps(c,0,(int32_t)c->r[3],0); // 802301A0
  if (!crb(c,2)) { goto L_802301B0; } // 802301A4
  c->r[3]=0u+0x00000000u; // 802301A8
  goto L_802302A8; // 802301AC
L_802301B0:;
  c->r[3]=c->r[30]+0x00010000u; // 802301B0
  c->r[0]=R8(c->r[3]+0xFFFF82ADu); // 802301B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802301B8
  cmps(c,0,(int32_t)c->r[0],1); // 802301BC
  if (!crb(c,2)) { goto L_802301E0; } // 802301C0
  c->r[3]=0u+0x00000001u; // 802301C4
  c->r[4]=0u+0x80480000u; // 802301C8
  c->r[4]=c->r[4]+0x000005A0u; // 802301CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802301D0
  c->lr=0x802301D8u; f_803D3760(c); // 802301D4
  c->r[3]=0u+0x00000000u; // 802301D8
  goto L_802302A8; // 802301DC
L_802301E0:;
  c->r[3]=0u+0x00000001u; // 802301E0
  c->r[4]=0u+0x80480000u; // 802301E4
  c->r[4]=c->r[4]+0x000005D4u; // 802301E8
  c->r[5]=c->r[31]|c->r[31]; // 802301EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802301F0
  c->lr=0x802301F8u; f_803D3760(c); // 802301F4
  c->r[0]=0u+0x00000000u; // 802301F8
  c->r[3]=c->r[30]+0x00010000u; // 802301FC
  W8(c->r[3]+0xFFFF82ADu,c->r[0]); // 80230200
  cmps(c,0,(int32_t)c->r[31],2); // 80230204
  if (crb(c,2)) { goto L_80230230; } // 80230208
  if (!crb(c,0)) { goto L_80230244; } // 8023020C
  cmps(c,0,(int32_t)c->r[31],1); // 80230210
  if (!crb(c,0)) { goto L_8023021C; } // 80230214
  goto L_80230244; // 80230218
L_8023021C:;
  c->r[0]=R32(c->r[3]+0xFFFF81C8u); // 8023021C
  W32(c->r[3]+0xFFFF81D0u,c->r[0]); // 80230220
  c->r[0]=R32(c->r[3]+0xFFFF81CCu); // 80230224
  W32(c->r[3]+0xFFFF81D4u,c->r[0]); // 80230228
  goto L_8023026C; // 8023022C
L_80230230:;
  c->r[0]=R32(c->r[3]+0xFFFF81CCu); // 80230230
  W32(c->r[3]+0xFFFF81D0u,c->r[0]); // 80230234
  c->r[0]=R32(c->r[3]+0xFFFF81C8u); // 80230238
  W32(c->r[3]+0xFFFF81D4u,c->r[0]); // 8023023C
  goto L_8023026C; // 80230240
L_80230244:;
  c->r[3]=c->r[30]+0x00010000u; // 80230244
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 80230248
  c->r[4]=0u+0x00000000u; // 8023024C
  c->lr=0x80230254u; f_8021B46C(c); // 80230250
  c->r[3]=c->r[30]+0x00010000u; // 80230254
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 80230258
  c->r[4]=0u+0x00000000u; // 8023025C
  c->lr=0x80230264u; f_8021B46C(c); // 80230260
  c->r[3]=0u+0x00000001u; // 80230264
  goto L_802302A8; // 80230268
L_8023026C:;
  c->r[0]=0u+0x00000001u; // 8023026C
  c->r[3]=c->r[30]+0x00010000u; // 80230270
  W8(c->r[3]+0xFFFF82ADu,c->r[0]); // 80230274
  c->r[0]=0u+0x00000000u; // 80230278
  W16(c->r[3]+0xFFFF82AEu,c->r[0]); // 8023027C
  c->r[3]=R32(c->r[3]+0xFFFF81D0u); // 80230280
  {uint32_t ea=c->r[2]+0xFFFF9A80u; c->f[1]=c->ps1[1]=RF32(ea);} // 80230284
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80230288
  c->lr=0x80230290u; f_8021B27C(c); // 8023028C
  c->r[3]=c->r[30]+0x00010000u; // 80230290
  c->r[3]=R32(c->r[3]+0xFFFF81D4u); // 80230294
  {uint32_t ea=c->r[2]+0xFFFF9A84u; c->f[1]=c->ps1[1]=RF32(ea);} // 80230298
  {uint32_t ea=c->r[2]+0xFFFF9A2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8023029C
  c->lr=0x802302A4u; f_8021B27C(c); // 802302A0
  c->r[3]=0u+0x00000001u; // 802302A4
L_802302A8:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802302A8
  c->r[30]=R32(c->r[1]+0x00000008u); // 802302AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802302B0
  c->lr=c->r[0]; // 802302B4
  c->r[1]=c->r[1]+0x00000010u; // 802302B8
  return; // 802302BC
}

// fn_802302C0
void f_802302C0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802302C0
  c->r[0]=c->lr; // 802302C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802302C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802302CC
  c->r[31]=c->r[3]|c->r[3]; // 802302D0
  c->r[4]=c->r[3]+0x00010000u; // 802302D4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF82AEu); // 802302D8
  c->r[0]=c->r[3]+0x00000001u; // 802302DC
  W16(c->r[4]+0xFFFF82AEu,c->r[0]); // 802302E0
  cmps(c,0,(int32_t)c->r[3],180); // 802302E4
  if (crb(c,2)) { goto L_80230384; } // 802302E8
  if (!crb(c,0)) { goto L_80230308; } // 802302EC
  cmps(c,0,(int32_t)c->r[3],15); // 802302F0
  if (crb(c,2)) { goto L_8023035C; } // 802302F4
  if (!crb(c,0)) { goto L_802303D4; } // 802302F8
  cmps(c,0,(int32_t)c->r[3],0); // 802302FC
  if (crb(c,2)) { goto L_80230314; } // 80230300
  goto L_802303D4; // 80230304
L_80230308:;
  cmps(c,0,(int32_t)c->r[3],195); // 80230308
  if (crb(c,2)) { goto L_802303AC; } // 8023030C
  goto L_802303D4; // 80230310
L_80230314:;
  c->r[3]=R32(c->r[4]+0xFFFF81C8u); // 80230314
  c->r[4]=0u+0x00000001u; // 80230318
  c->lr=0x80230320u; f_8021B46C(c); // 8023031C
  c->r[3]=c->r[31]+0x00010000u; // 80230320
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 80230324
  c->r[4]=0u+0x00000001u; // 80230328
  c->lr=0x80230330u; f_8021B46C(c); // 8023032C
  c->r[3]=c->r[31]+0x00010000u; // 80230330
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 80230334
  c->r[4]=0u+0x00000000u; // 80230338
  c->r[5]=0u+0x00000000u; // 8023033C
  c->lr=0x80230344u; f_8021B358(c); // 80230340
  c->r[3]=c->r[31]+0x00010000u; // 80230344
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 80230348
  c->r[4]=0u+0x00000000u; // 8023034C
  c->r[5]=0u+0x00000000u; // 80230350
  c->lr=0x80230358u; f_8021B358(c); // 80230354
  goto L_802303D4; // 80230358
L_8023035C:;
  c->r[3]=R32(c->r[4]+0xFFFF81C8u); // 8023035C
  c->r[4]=0u+0x00000000u; // 80230360
  c->r[5]=0u+0x00000001u; // 80230364
  c->lr=0x8023036Cu; f_8021B358(c); // 80230368
  c->r[3]=c->r[31]+0x00010000u; // 8023036C
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 80230370
  c->r[4]=0u+0x00000000u; // 80230374
  c->r[5]=0u+0x00000001u; // 80230378
  c->lr=0x80230380u; f_8021B358(c); // 8023037C
  goto L_802303D4; // 80230380
L_80230384:;
  c->r[3]=R32(c->r[4]+0xFFFF81C8u); // 80230384
  c->r[4]=0u+0x00000000u; // 80230388
  c->r[5]=0u+0x00000002u; // 8023038C
  c->lr=0x80230394u; f_8021B358(c); // 80230390
  c->r[3]=c->r[31]+0x00010000u; // 80230394
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 80230398
  c->r[4]=0u+0x00000000u; // 8023039C
  c->r[5]=0u+0x00000002u; // 802303A0
  c->lr=0x802303A8u; f_8021B358(c); // 802303A4
  goto L_802303D4; // 802303A8
L_802303AC:;
  c->r[3]=R32(c->r[4]+0xFFFF81C8u); // 802303AC
  c->r[4]=0u+0x00000000u; // 802303B0
  c->lr=0x802303B8u; f_8021B46C(c); // 802303B4
  c->r[3]=c->r[31]+0x00010000u; // 802303B8
  c->r[3]=R32(c->r[3]+0xFFFF81CCu); // 802303BC
  c->r[4]=0u+0x00000000u; // 802303C0
  c->lr=0x802303C8u; f_8021B46C(c); // 802303C4
  c->r[0]=0u+0x00000002u; // 802303C8
  c->r[3]=c->r[31]+0x00010000u; // 802303CC
  W8(c->r[3]+0xFFFF82ADu,c->r[0]); // 802303D0
L_802303D4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802303D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802303D8
  c->lr=c->r[0]; // 802303DC
  c->r[1]=c->r[1]+0x00000010u; // 802303E0
  return; // 802303E4
}

// fn_802303E8
void f_802303E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802303E8
  c->r[0]=c->lr; // 802303EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802303F0
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 802303F4
  W32(c->r[1]+0x00000014u,c->r[31]); // 802303F8
  W32(c->r[1]+0x00000010u,c->r[30]); // 802303FC
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 80230400
  W32(c->r[1]+0x00000008u,c->r[28]); // 80230404
  c->r[28]=c->r[3]|c->r[3]; // 80230408
  c->r[29]=c->r[4]|c->r[4]; // 8023040C
  c->r[30]=c->r[5]|c->r[5]; // 80230410
  c->r[31]=c->r[6]|c->r[6]; // 80230414
  c->f[31]=c->f[1]; // 80230418
  c->lr=0x80230420u; f_8022D978(c); // 8023041C
  cmps(c,0,(int32_t)c->r[3],0); // 80230420
  if (!crb(c,2)) { goto L_80230430; } // 80230424
  c->r[3]=0u+0x00000000u; // 80230428
  goto L_8023049C; // 8023042C
L_80230430:;
  cmps(c,0,(int32_t)c->r[30],1); // 80230430
  if (!crb(c,2)) { goto L_80230468; } // 80230434
  c->r[3]=0u+0x00000001u; // 80230438
  c->r[4]=0u+0x80480000u; // 8023043C
  c->r[4]=c->r[4]+0x00000600u; // 80230440
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80230444
  c->lr=0x8023044Cu; f_803D3760(c); // 80230448
  c->r[3]=0u+0x00000001u; // 8023044C
  c->r[4]=0u+0x80480000u; // 80230450
  c->r[4]=c->r[4]+0x00000628u; // 80230454
  c->r[5]=c->r[31]|c->r[31]; // 80230458
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8023045C
  c->lr=0x80230464u; f_803D3760(c); // 80230460
  goto L_8023047C; // 80230464
L_80230468:;
  c->r[3]=0u+0x00000001u; // 80230468
  c->r[4]=0u+0x80480000u; // 8023046C
  c->r[4]=c->r[4]+0x00000638u; // 80230470
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80230474
  c->lr=0x8023047Cu; f_803D3760(c); // 80230478
L_8023047C:;
  c->r[3]=c->r[28]+0x00010000u; // 8023047C
  c->r[3]=R32(c->r[3]+0xFFFF819Cu); // 80230480
  c->r[4]=c->r[29]|c->r[29]; // 80230484
  c->r[5]=c->r[30]|c->r[30]; // 80230488
  c->r[6]=c->r[31]|c->r[31]; // 8023048C
  c->f[1]=c->f[31]; // 80230490
  c->lr=0x80230498u; f_80257704(c); // 80230494
  c->r[3]=0u+0x00000001u; // 80230498
L_8023049C:;
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8023049C
  c->r[31]=R32(c->r[1]+0x00000014u); // 802304A0
  c->r[30]=R32(c->r[1]+0x00000010u); // 802304A4
  c->r[29]=R32(c->r[1]+0x0000000Cu); // 802304A8
  c->r[28]=R32(c->r[1]+0x00000008u); // 802304AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802304B0
  c->lr=c->r[0]; // 802304B4
  c->r[1]=c->r[1]+0x00000020u; // 802304B8
  return; // 802304BC
}

// fn_802304C0
void f_802304C0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 802304C0
  c->r[3]=R32(c->r[3]+0xFFFF819Cu); // 802304C4
  cmps(c,0,(int32_t)c->r[3],0); // 802304C8
  if (crb(c,2)) { goto L_802304D4; } // 802304CC
  f_80257914(c); return; // 802304D0
L_802304D4:;
  c->r[3]=0u+0x00000000u; // 802304D4
  return; // 802304D8
}

// fn_802304DC
void f_802304DC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802304DC
  c->r[0]=c->lr; // 802304E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802304E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802304E8
  c->r[31]=c->r[3]|c->r[3]; // 802304EC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 802304F0
  c->r[3]=c->r[3]+0x00010000u; // 802304F4
  W8(c->r[3]+0xFFFF8261u,c->r[0]); // 802304F8
  cmps(c,0,(int32_t)c->r[4],1); // 802304FC
  if (!crb(c,2)) { goto L_80230558; } // 80230500
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 80230504
  c->r[4]=0u+0x00000001u; // 80230508
  c->lr=0x80230510u; f_80256B04(c); // 8023050C
  c->r[3]=c->r[31]+0x00010000u; // 80230510
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 80230514
  c->r[4]=0u+0x00000001u; // 80230518
  c->lr=0x80230520u; f_80257114(c); // 8023051C
  c->r[3]=c->r[31]+0x00010000u; // 80230520
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 80230524
  c->r[4]=0u+0x00000000u; // 80230528
  c->r[5]=0u+0x00000000u; // 8023052C
  c->lr=0x80230534u; f_80256AD4(c); // 80230530
  c->r[3]=c->r[31]+0x00010000u; // 80230534
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 80230538
  c->r[4]=0u+0x00000000u; // 8023053C
  c->r[5]=0u+0x00000000u; // 80230540
  c->lr=0x80230548u; f_80257078(c); // 80230544
  c->r[0]=0u+0x00000001u; // 80230548
  c->r[3]=c->r[31]+0x00010000u; // 8023054C
  W8(c->r[3]+0xFFFF8260u,c->r[0]); // 80230550
  goto L_80230588; // 80230554
L_80230558:;
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 80230558
  c->r[4]=0u+0x00000000u; // 8023055C
  c->r[5]=0u+0x00000002u; // 80230560
  c->lr=0x80230568u; f_80256AD4(c); // 80230564
  c->r[3]=c->r[31]+0x00010000u; // 80230568
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8023056C
  c->r[4]=0u+0x00000000u; // 80230570
  c->r[5]=0u+0x00000002u; // 80230574
  c->lr=0x8023057Cu; f_80257078(c); // 80230578
  c->r[0]=0u+0x00000001u; // 8023057C
  c->r[3]=c->r[31]+0x00010000u; // 80230580
  W8(c->r[3]+0xFFFF8260u,c->r[0]); // 80230584
L_80230588:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230588
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023058C
  c->lr=c->r[0]; // 80230590
  c->r[1]=c->r[1]+0x00000010u; // 80230594
  return; // 80230598
}

// fn_8023059C
void f_8023059C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023059C
  c->r[0]=c->lr; // 802305A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802305A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802305A8
  c->r[31]=c->r[3]|c->r[3]; // 802305AC
  c->r[4]=c->r[3]+0x00010000u; // 802305B0
  c->r[3]=R32(c->r[4]+0xFFFF81A0u); // 802305B4
  cmps(c,0,(int32_t)c->r[3],0); // 802305B8
  if (crb(c,2)) { goto L_80230664; } // 802305BC
  c->r[0]=R32(c->r[4]+0xFFFF81A4u); // 802305C0
  cmps(c,0,(int32_t)c->r[0],0); // 802305C4
  if (crb(c,2)) { goto L_80230664; } // 802305C8
  c->lr=0x802305D0u; f_80256AE8(c); // 802305CC
  cmps(c,0,(int32_t)c->r[3],0); // 802305D0
  if (crb(c,2)) { goto L_80230664; } // 802305D4
  c->r[3]=c->r[31]+0x00010000u; // 802305D8
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 802305DC
  c->lr=0x802305E4u; f_802570F8(c); // 802305E0
  cmps(c,0,(int32_t)c->r[3],0); // 802305E4
  if (crb(c,2)) { goto L_80230664; } // 802305E8
  c->r[3]=c->r[31]+0x00010000u; // 802305EC
  c->r[0]=R8(c->r[3]+0xFFFF8261u); // 802305F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802305F4
  cmps(c,0,(int32_t)c->r[0],1); // 802305F8
  if (crb(c,2)) { goto L_80230610; } // 802305FC
  if (!crb(c,0)) { goto L_80230664; } // 80230600
  cmps(c,0,(int32_t)c->r[0],0); // 80230604
  if (!crb(c,0)) { goto L_80230640; } // 80230608
  goto L_80230664; // 8023060C
L_80230610:;
  c->r[0]=0u+0x00000000u; // 80230610
  W8(c->r[3]+0xFFFF8260u,c->r[0]); // 80230614
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 80230618
  c->r[4]=0u+0x00000000u; // 8023061C
  c->r[5]=0u+0x00000001u; // 80230620
  c->lr=0x80230628u; f_80256AD4(c); // 80230624
  c->r[3]=c->r[31]+0x00010000u; // 80230628
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 8023062C
  c->r[4]=0u+0x00000000u; // 80230630
  c->r[5]=0u+0x00000001u; // 80230634
  c->lr=0x8023063Cu; f_80257078(c); // 80230638
  goto L_80230664; // 8023063C
L_80230640:;
  c->r[0]=0u+0x00000000u; // 80230640
  W8(c->r[3]+0xFFFF8260u,c->r[0]); // 80230644
  c->r[3]=R32(c->r[3]+0xFFFF81A0u); // 80230648
  c->r[4]=0u+0x00000000u; // 8023064C
  c->lr=0x80230654u; f_80256B04(c); // 80230650
  c->r[3]=c->r[31]+0x00010000u; // 80230654
  c->r[3]=R32(c->r[3]+0xFFFF81A4u); // 80230658
  c->r[4]=0u+0x00000000u; // 8023065C
  c->lr=0x80230664u; f_80257114(c); // 80230660
L_80230664:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230664
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230668
  c->lr=c->r[0]; // 8023066C
  c->r[1]=c->r[1]+0x00000010u; // 80230670
  return; // 80230674
}

// fn_80230678
void f_80230678(Ctx* __restrict c) {
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80230678
  c->r[3]=c->r[3]+0x00010000u; // 8023067C
  W8(c->r[3]+0xFFFF826Cu,c->r[0]); // 80230680
  return; // 80230684
}

// fn_80230688
void f_80230688(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230688
  c->r[0]=c->lr; // 8023068C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230690
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230694
  c->r[31]=c->r[3]|c->r[3]; // 80230698
  c->r[3]=c->r[3]+0x00010000u; // 8023069C
  c->r[0]=R8(c->r[3]+0xFFFF826Cu); // 802306A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 802306A4
  cmps(c,0,(int32_t)c->r[0],2); // 802306A8
  if (crb(c,2)) { goto L_802306E8; } // 802306AC
  if (!crb(c,0)) { goto L_802306C0; } // 802306B0
  cmps(c,0,(int32_t)c->r[0],1); // 802306B4
  if (!crb(c,0)) { goto L_802306CC; } // 802306B8
  goto L_80230714; // 802306BC
L_802306C0:;
  cmps(c,0,(int32_t)c->r[0],4); // 802306C0
  if (!crb(c,0)) { goto L_80230714; } // 802306C4
  goto L_802306FC; // 802306C8
L_802306CC:;
  c->r[3]=R32(c->r[3]+0xFFFF8268u); // 802306CC
  c->r[4]=0u+0x00000001u; // 802306D0
  c->lr=0x802306D8u; f_8021B46C(c); // 802306D4
  c->r[0]=0u+0x00000002u; // 802306D8
  c->r[3]=c->r[31]+0x00010000u; // 802306DC
  W8(c->r[3]+0xFFFF826Cu,c->r[0]); // 802306E0
  goto L_80230714; // 802306E4
L_802306E8:;
  c->r[3]=R32(c->r[3]+0xFFFF8268u); // 802306E8
  c->r[4]=0u+0x00000000u; // 802306EC
  c->r[5]=0u+0x00000000u; // 802306F0
  c->lr=0x802306F8u; f_8021B358(c); // 802306F4
  goto L_80230714; // 802306F8
L_802306FC:;
  c->r[3]=R32(c->r[3]+0xFFFF8268u); // 802306FC
  c->r[4]=0u+0x00000000u; // 80230700
  c->lr=0x80230708u; f_8021B46C(c); // 80230704
  c->r[0]=0u+0x00000000u; // 80230708
  c->r[3]=c->r[31]+0x00010000u; // 8023070C
  W8(c->r[3]+0xFFFF826Cu,c->r[0]); // 80230710
L_80230714:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230714
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230718
  c->lr=c->r[0]; // 8023071C
  c->r[1]=c->r[1]+0x00000010u; // 80230720
  return; // 80230724
}

// fn_80230728
void f_80230728(Ctx* __restrict c) {
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 80230728
  c->r[3]=c->r[3]+0x00010000u; // 8023072C
  W8(c->r[3]+0xFFFF8274u,c->r[0]); // 80230730
  return; // 80230734
}

// fn_80230738
void f_80230738(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230738
  c->r[0]=c->lr; // 8023073C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230744
  c->r[31]=c->r[3]|c->r[3]; // 80230748
  c->r[3]=c->r[3]+0x00010000u; // 8023074C
  c->r[0]=R8(c->r[3]+0xFFFF8274u); // 80230750
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80230754
  cmps(c,0,(int32_t)c->r[0],2); // 80230758
  if (crb(c,2)) { goto L_802307AC; } // 8023075C
  if (!crb(c,0)) { goto L_80230770; } // 80230760
  cmps(c,0,(int32_t)c->r[0],1); // 80230764
  if (!crb(c,0)) { goto L_8023077C; } // 80230768
  goto L_802307E4; // 8023076C
L_80230770:;
  cmps(c,0,(int32_t)c->r[0],4); // 80230770
  if (!crb(c,0)) { goto L_802307E4; } // 80230774
  goto L_802307CC; // 80230778
L_8023077C:;
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 8023077C
  c->r[4]=0u+0x00000001u; // 80230780
  c->lr=0x80230788u; f_8021B46C(c); // 80230784
  c->r[3]=c->r[31]+0x00010000u; // 80230788
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 8023078C
  c->r[4]=0u+0x00000000u; // 80230790
  c->r[5]=0u+0x00000000u; // 80230794
  c->lr=0x8023079Cu; f_8021B358(c); // 80230798
  c->r[0]=0u+0x00000002u; // 8023079C
  c->r[3]=c->r[31]+0x00010000u; // 802307A0
  W8(c->r[3]+0xFFFF8274u,c->r[0]); // 802307A4
  goto L_802307E4; // 802307A8
L_802307AC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF8276u); // 802307AC
  cmps(c,0,(int32_t)c->r[0],2); // 802307B0
  if (!crb(c,2)) { goto L_802307E4; } // 802307B4
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 802307B8
  c->r[4]=0u+0x00000000u; // 802307BC
  c->r[5]=0u+0x00000001u; // 802307C0
  c->lr=0x802307C8u; f_8021B358(c); // 802307C4
  goto L_802307E4; // 802307C8
L_802307CC:;
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 802307CC
  c->r[4]=0u+0x00000000u; // 802307D0
  c->lr=0x802307D8u; f_8021B46C(c); // 802307D4
  c->r[0]=0u+0x00000000u; // 802307D8
  c->r[3]=c->r[31]+0x00010000u; // 802307DC
  W8(c->r[3]+0xFFFF8274u,c->r[0]); // 802307E0
L_802307E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802307E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802307E8
  c->lr=c->r[0]; // 802307EC
  c->r[1]=c->r[1]+0x00000010u; // 802307F0
  return; // 802307F4
}

// fn_802307F8
void f_802307F8(Ctx* __restrict c) {
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 802307F8
  c->r[3]=c->r[3]+0x00010000u; // 802307FC
  W8(c->r[3]+0xFFFF827Cu,c->r[0]); // 80230800
  return; // 80230804
}

// fn_80230808
void f_80230808(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230808
  c->r[0]=c->lr; // 8023080C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230810
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230814
  c->r[31]=c->r[3]|c->r[3]; // 80230818
  c->r[3]=c->r[3]+0x00010000u; // 8023081C
  c->r[0]=R8(c->r[3]+0xFFFF827Cu); // 80230820
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 80230824
  cmps(c,0,(int32_t)c->r[0],2); // 80230828
  if (crb(c,2)) { goto L_8023087C; } // 8023082C
  if (!crb(c,0)) { goto L_80230840; } // 80230830
  cmps(c,0,(int32_t)c->r[0],1); // 80230834
  if (!crb(c,0)) { goto L_8023084C; } // 80230838
  goto L_802308B4; // 8023083C
L_80230840:;
  cmps(c,0,(int32_t)c->r[0],4); // 80230840
  if (!crb(c,0)) { goto L_802308B4; } // 80230844
  goto L_8023089C; // 80230848
L_8023084C:;
  c->r[3]=R32(c->r[3]+0xFFFF8278u); // 8023084C
  c->r[4]=0u+0x00000001u; // 80230850
  c->lr=0x80230858u; f_8021B46C(c); // 80230854
  c->r[3]=c->r[31]+0x00010000u; // 80230858
  c->r[3]=R32(c->r[3]+0xFFFF8278u); // 8023085C
  c->r[4]=0u+0x00000000u; // 80230860
  c->r[5]=0u+0x00000000u; // 80230864
  c->lr=0x8023086Cu; f_8021B358(c); // 80230868
  c->r[0]=0u+0x00000002u; // 8023086C
  c->r[3]=c->r[31]+0x00010000u; // 80230870
  W8(c->r[3]+0xFFFF827Cu,c->r[0]); // 80230874
  goto L_802308B4; // 80230878
L_8023087C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0xFFFF827Eu); // 8023087C
  cmps(c,0,(int32_t)c->r[0],2); // 80230880
  if (!crb(c,2)) { goto L_802308B4; } // 80230884
  c->r[3]=R32(c->r[3]+0xFFFF8278u); // 80230888
  c->r[4]=0u+0x00000000u; // 8023088C
  c->r[5]=0u+0x00000001u; // 80230890
  c->lr=0x80230898u; f_8021B358(c); // 80230894
  goto L_802308B4; // 80230898
L_8023089C:;
  c->r[3]=R32(c->r[3]+0xFFFF8278u); // 8023089C
  c->r[4]=0u+0x00000000u; // 802308A0
  c->lr=0x802308A8u; f_8021B46C(c); // 802308A4
  c->r[0]=0u+0x00000000u; // 802308A8
  c->r[3]=c->r[31]+0x00010000u; // 802308AC
  W8(c->r[3]+0xFFFF827Cu,c->r[0]); // 802308B0
L_802308B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802308B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802308B8
  c->lr=c->r[0]; // 802308BC
  c->r[1]=c->r[1]+0x00000010u; // 802308C0
  return; // 802308C4
}

// fn_802308C8
void f_802308C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802308C8
  c->r[0]=c->lr; // 802308CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802308D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802308D4
  c->r[31]=c->r[3]|c->r[3]; // 802308D8
  cmps(c,0,(int32_t)c->r[4],1); // 802308DC
  if (crb(c,2)) { goto L_8023090C; } // 802308E0
  if (!crb(c,0)) { goto L_80230920; } // 802308E4
  cmps(c,0,(int32_t)c->r[4],0); // 802308E8
  if (!crb(c,0)) { goto L_802308F4; } // 802308EC
  goto L_80230920; // 802308F0
L_802308F4:;
  c->r[3]=c->r[3]+0x00010000u; // 802308F4
  c->r[3]=R32(c->r[3]+0xFFFF8264u); // 802308F8
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=c->ps1[1]=RF32(ea);} // 802308FC
  {uint32_t ea=c->r[2]+0xFFFF9A8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80230900
  c->lr=0x80230908u; f_8021B27C(c); // 80230904
  goto L_80230920; // 80230908
L_8023090C:;
  c->r[3]=c->r[3]+0x00010000u; // 8023090C
  c->r[3]=R32(c->r[3]+0xFFFF8264u); // 80230910
  {uint32_t ea=c->r[2]+0xFFFF9A90u; c->f[1]=c->ps1[1]=RF32(ea);} // 80230914
  {uint32_t ea=c->r[2]+0xFFFF9A8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80230918
  c->lr=0x80230920u; f_8021B27C(c); // 8023091C
L_80230920:;
  c->r[3]=c->r[31]+0x00010000u; // 80230920
  c->r[3]=R32(c->r[3]+0xFFFF8264u); // 80230924
  c->r[4]=0u+0x00000001u; // 80230928
  c->lr=0x80230930u; f_8021B46C(c); // 8023092C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230930
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230934
  c->lr=c->r[0]; // 80230938
  c->r[1]=c->r[1]+0x00000010u; // 8023093C
  return; // 80230940
}

// fn_80230944
void f_80230944(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 80230944
  c->r[3]=R32(c->r[3]+0xFFFF8264u); // 80230948
  c->r[4]=0u+0x00000000u; // 8023094C
  f_8021B46C(c); return; // 80230950
}

// fn_80230954
void f_80230954(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 80230954
  c->r[3]=R32(c->r[3]+0xFFFF8264u); // 80230958
  cmps(c,0,(int32_t)c->r[3],0); // 8023095C
  if (crb(c,2)) { goto L_80230968; } // 80230960
  f_8021B474(c); return; // 80230964
L_80230968:;
  c->r[3]=0u+0x00000000u; // 80230968
  return; // 8023096C
}

// fn_80230970
void f_80230970(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230970
  c->r[0]=c->lr; // 80230974
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023097C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80230980
  c->r[30]=0u+0x00000000u; // 80230984
  c->r[31]=c->r[3]|c->r[3]; // 80230988
L_8023098C:;
  c->r[3]=c->r[31]+0x00010000u; // 8023098C
  c->r[0]=R32(c->r[3]+0xFFFF8230u); // 80230990
  cmps(c,0,(int32_t)c->r[0],0); // 80230994
  if (crb(c,2)) { goto L_802309D0; } // 80230998
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 8023099C
  c->lr=0x802309A4u; f_80253918(c); // 802309A0
  cmps(c,0,(int32_t)c->r[3],0); // 802309A4
  if (!crb(c,2)) { goto L_802309B4; } // 802309A8
  c->r[3]=0u+0x00000000u; // 802309AC
  goto L_802309E4; // 802309B0
L_802309B4:;
  c->r[3]=c->r[31]+0x00010000u; // 802309B4
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 802309B8
  c->lr=0x802309C0u; f_80253944(c); // 802309BC
  cmps(c,0,(int32_t)c->r[3],0); // 802309C0
  if (!crb(c,2)) { goto L_802309D0; } // 802309C4
  c->r[3]=0u+0x00000000u; // 802309C8
  goto L_802309E4; // 802309CC
L_802309D0:;
  c->r[31]=c->r[31]+0x00000004u; // 802309D0
  c->r[30]=c->r[30]+0x00000001u; // 802309D4
  cmps(c,0,(int32_t)c->r[30],2); // 802309D8
  if (crb(c,0)) { IRQCHK(c); goto L_8023098C; } // 802309DC
  c->r[3]=0u+0x00000001u; // 802309E0
L_802309E4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802309E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802309E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802309EC
  c->lr=c->r[0]; // 802309F0
  c->r[1]=c->r[1]+0x00000010u; // 802309F4
  return; // 802309F8
}

// fn_802309FC
void f_802309FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802309FC
  c->r[0]=c->lr; // 80230A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230A08
  W32(c->r[1]+0x00000008u,c->r[30]); // 80230A0C
  c->r[30]=0u+0x00000000u; // 80230A10
  c->r[31]=c->r[3]|c->r[3]; // 80230A14
L_80230A18:;
  c->r[3]=c->r[31]+0x00010000u; // 80230A18
  c->r[0]=R32(c->r[3]+0xFFFF8230u); // 80230A1C
  cmps(c,0,(int32_t)c->r[0],0); // 80230A20
  if (crb(c,2)) { goto L_80230A40; } // 80230A24
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80230A28
  c->lr=0x80230A30u; f_80253944(c); // 80230A2C
  cmps(c,0,(int32_t)c->r[3],0); // 80230A30
  if (!crb(c,2)) { goto L_80230A40; } // 80230A34
  c->r[3]=0u+0x00000000u; // 80230A38
  goto L_80230A54; // 80230A3C
L_80230A40:;
  c->r[31]=c->r[31]+0x00000004u; // 80230A40
  c->r[30]=c->r[30]+0x00000001u; // 80230A44
  cmps(c,0,(int32_t)c->r[30],2); // 80230A48
  if (crb(c,0)) { IRQCHK(c); goto L_80230A18; } // 80230A4C
  c->r[3]=0u+0x00000001u; // 80230A50
L_80230A54:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230A54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80230A58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230A5C
  c->lr=c->r[0]; // 80230A60
  c->r[1]=c->r[1]+0x00000010u; // 80230A64
  return; // 80230A68
}

// fn_80230A6C
void f_80230A6C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230A6C
  c->r[0]=c->lr; // 80230A70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80230A74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80230A78
  W32(c->r[1]+0x00000018u,c->r[30]); // 80230A7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80230A80
  c->r[29]=c->r[3]|c->r[3]; // 80230A84
  c->r[30]=c->r[4]|c->r[4]; // 80230A88
  c->r[8]=0u+0x00000000u; // 80230A8C
  c->r[9]=0u+0xFFFFFFFFu; // 80230A90
  c->r[5]=R32(c->r[4]+0x00000004u); // 80230A94
  c->r[7]=R32(c->r[5]+0x00000010u); // 80230A98
  c->r[0]=0u-c->r[7]; // 80230A9C
  c->r[0]=c->r[0]&~c->r[7]; // 80230AA0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80230AA4
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 80230AA8
  cmps(c,0,(int32_t)c->r[6],1); // 80230AAC
  if (!crb(c,2)) { goto L_80230AC8; } // 80230AB0
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230AB4
  cmps(c,0,(int32_t)c->r[0],1); // 80230AB8
  if (!crb(c,2)) { goto L_80230AC8; } // 80230ABC
  c->r[8]=0u+0x00000001u; // 80230AC0
  c->r[9]=0u+0x00000001u; // 80230AC4
L_80230AC8:;
  cmps(c,0,(int32_t)c->r[6],1); // 80230AC8
  if (!crb(c,2)) { goto L_80230AF0; } // 80230ACC
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230AD0
  cmps(c,0,(int32_t)c->r[0],2); // 80230AD4
  if (!crb(c,2)) { goto L_80230AF0; } // 80230AD8
  c->r[8]=0u+0x00000002u; // 80230ADC
  c->r[9]=0u+0x00000002u; // 80230AE0
  c->r[5]=0u+0x00000001u; // 80230AE4
  c->r[0]=cntlz(c->r[7]); // 80230AE8
  c->r[5]=rotl(c->r[5],c->r[0]&31)&0x00000001u; // 80230AEC
L_80230AF0:;
  cmps(c,0,(int32_t)c->r[6],1); // 80230AF0
  if (!crb(c,2)) { goto L_80230B0C; } // 80230AF4
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230AF8
  cmps(c,0,(int32_t)c->r[0],0); // 80230AFC
  if (!crb(c,2)) { goto L_80230B0C; } // 80230B00
  c->r[8]=0u+0x00000003u; // 80230B04
  c->r[9]=0u+0x00000000u; // 80230B08
L_80230B0C:;
  cmps(c,0,(int32_t)c->r[6],1); // 80230B0C
  if (!crb(c,2)) { goto L_80230B28; } // 80230B10
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230B14
  cmps(c,0,(int32_t)c->r[0],3); // 80230B18
  if (!crb(c,2)) { goto L_80230B28; } // 80230B1C
  c->r[8]=0u+0x00000004u; // 80230B20
  c->r[9]=0u+0x00000003u; // 80230B24
L_80230B28:;
  cmps(c,0,(int32_t)c->r[6],3); // 80230B28
  if (!crb(c,2)) { goto L_80230B48; } // 80230B2C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230B30
  cmps(c,0,(int32_t)c->r[0],1); // 80230B34
  if (!crb(c,2)) { goto L_80230B48; } // 80230B38
  c->r[8]=0u+0x00000005u; // 80230B3C
  c->r[9]=0u+0x00000005u; // 80230B40
  c->r[5]=0u+0x00000002u; // 80230B44
L_80230B48:;
  cmps(c,0,(int32_t)c->r[6],3); // 80230B48
  if (!crb(c,2)) { goto L_80230B64; } // 80230B4C
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230B50
  cmps(c,0,(int32_t)c->r[0],2); // 80230B54
  if (!crb(c,2)) { goto L_80230B64; } // 80230B58
  c->r[8]=0u+0x00000006u; // 80230B5C
  c->r[9]=0u+0x00000006u; // 80230B60
L_80230B64:;
  cmps(c,0,(int32_t)c->r[6],3); // 80230B64
  if (!crb(c,2)) { goto L_80230B84; } // 80230B68
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230B6C
  cmps(c,0,(int32_t)c->r[0],0); // 80230B70
  if (!crb(c,2)) { goto L_80230B84; } // 80230B74
  c->r[8]=0u+0x00000007u; // 80230B78
  c->r[9]=0u+0x00000004u; // 80230B7C
  c->r[5]=0u+0x00000002u; // 80230B80
L_80230B84:;
  cmps(c,0,(int32_t)c->r[6],3); // 80230B84
  if (!crb(c,2)) { goto L_80230BA4; } // 80230B88
  c->r[0]=R32(c->r[4]+0x00000010u); // 80230B8C
  cmps(c,0,(int32_t)c->r[0],3); // 80230B90
  if (!crb(c,2)) { goto L_80230BA4; } // 80230B94
  c->r[8]=0u+0x00000008u; // 80230B98
  c->r[9]=0u+0x00000007u; // 80230B9C
  c->r[5]=0u+0x00000002u; // 80230BA0
L_80230BA4:;
  c->r[31]=c->r[9]|c->r[9]; // 80230BA4
  c->r[0]=R32(c->r[4]+0x00000018u); // 80230BA8
  cmps(c,0,(int32_t)c->r[0],3); // 80230BAC
  if (!crb(c,2)) { goto L_80230BBC; } // 80230BB0
  cmps(c,0,(int32_t)c->r[9],0); // 80230BB4
  if (crb(c,0)) { goto L_80230C50; } // 80230BB8
L_80230BBC:;
  cmps(c,0,(int32_t)c->r[8],0); // 80230BBC
  if (crb(c,2)) { goto L_80230C50; } // 80230BC0
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80230BC4
  c->r[9]=c->r[9]+c->r[0]; // 80230BC8
  c->r[3]=c->r[3]+0x00010000u; // 80230BCC
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80230BD0
  c->r[3]=c->r[3]+c->r[0]; // 80230BD4
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80230BD8
  c->r[4]=c->r[9]|c->r[9]; // 80230BDC
  c->r[6]=R16(c->r[30]+0x00000014u); // 80230BE0
  c->r[7]=0u+0xFFFFFFFFu; // 80230BE4
  c->lr=0x80230BECu; f_80253878(c); // 80230BE8
  c->r[4]=c->r[29]+0x00010000u; // 80230BEC
  c->r[3]=R32(c->r[30]+0x00000004u); // 80230BF0
  c->r[0]=R32(c->r[3]+0x00000010u); // 80230BF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80230BF8
  c->r[3]=c->r[4]+c->r[0]; // 80230BFC
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80230C00
  c->r[4]=R16(c->r[30]+0x00000014u); // 80230C04
  c->r[5]=0u+0xFFFFFFFFu; // 80230C08
  c->lr=0x80230C10u; f_802537D8(c); // 80230C0C
  c->r[4]=c->r[29]+0x00010000u; // 80230C10
  c->r[3]=R32(c->r[30]+0x00000008u); // 80230C14
  c->r[0]=R32(c->r[3]+0x00000010u); // 80230C18
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80230C1C
  c->r[3]=c->r[4]+c->r[0]; // 80230C20
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80230C24
  c->r[4]=R16(c->r[30]+0x00000014u); // 80230C28
  c->r[5]=0u+0xFFFFFFFFu; // 80230C2C
  c->lr=0x80230C34u; f_802537D8(c); // 80230C30
  c->r[5]=0u+0x00000001u; // 80230C34
  c->r[4]=c->r[29]+0x00010000u; // 80230C38
  c->r[3]=R32(c->r[30]+0x00000004u); // 80230C3C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80230C40
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80230C44
  c->r[3]=c->r[4]+c->r[0]; // 80230C48
  W32(c->r[3]+0xFFFF8230u,c->r[5]); // 80230C4C
L_80230C50:;
  c->r[3]=c->r[31]|c->r[31]; // 80230C50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80230C54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80230C58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80230C5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80230C60
  c->lr=c->r[0]; // 80230C64
  c->r[1]=c->r[1]+0x00000020u; // 80230C68
  return; // 80230C6C
}

// fn_80230C70
void f_80230C70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230C70
  c->r[0]=c->lr; // 80230C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230C78
  c->r[5]=c->r[3]+0x00010000u; // 80230C7C
  c->r[3]=R32(c->r[4]+0x00000004u); // 80230C80
  c->r[0]=R32(c->r[3]+0x00000010u); // 80230C84
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80230C88
  c->r[3]=c->r[5]+c->r[0]; // 80230C8C
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80230C90
  c->lr=0x80230C98u; f_8023105C(c); // 80230C94
  c->r[4]=0u+0x00000000u; // 80230C98
  c->lr=0x80230CA0u; f_8021B404(c); // 80230C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230CA0
  c->lr=c->r[0]; // 80230CA4
  c->r[1]=c->r[1]+0x00000010u; // 80230CA8
  return; // 80230CAC
}

// fn_80230CB0
void f_80230CB0(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 80230CB0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80230CB4
  c->r[3]=c->r[3]+c->r[0]; // 80230CB8
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 80230CBC
  c->r[4]=c->r[5]|c->r[5]; // 80230CC0
  f_8025843C(c); return; // 80230CC4
}

// fn_80230CC8
void f_80230CC8(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 80230CC8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80230CCC
  c->r[3]=c->r[3]+c->r[0]; // 80230CD0
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 80230CD4
  f_802583F0(c); return; // 80230CD8
}

// fn_80230CDC
void f_80230CDC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230CDC
  c->r[0]=c->lr; // 80230CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230CE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230CE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80230CEC
  c->r[30]=0u+0x00000000u; // 80230CF0
  c->r[31]=c->r[3]|c->r[3]; // 80230CF4
L_80230CF8:;
  c->r[3]=c->r[31]+0x00010000u; // 80230CF8
  c->r[3]=R32(c->r[3]+0xFFFF8194u); // 80230CFC
  c->lr=0x80230D04u; f_802584DC(c); // 80230D00
  c->r[31]=c->r[31]+0x00000004u; // 80230D04
  c->r[30]=c->r[30]+0x00000001u; // 80230D08
  cmps(c,0,(int32_t)c->r[30],2); // 80230D0C
  if (crb(c,0)) { IRQCHK(c); goto L_80230CF8; } // 80230D10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230D14
  c->r[30]=R32(c->r[1]+0x00000008u); // 80230D18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230D1C
  c->lr=c->r[0]; // 80230D20
  c->r[1]=c->r[1]+0x00000010u; // 80230D24
  return; // 80230D28
}

// fn_80230D2C
void f_80230D2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230D2C
  c->r[0]=c->lr; // 80230D30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230D34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230D38
  c->r[31]=c->r[3]|c->r[3]; // 80230D3C
  c->r[4]=c->r[3]+0x00010000u; // 80230D40
  c->r[0]=R32(c->r[4]+0xFFFF828Cu); // 80230D44
  cmps(c,0,(int32_t)c->r[0],2); // 80230D48
  if (crb(c,2)) { goto L_80230D94; } // 80230D4C
  c->lr=0x80230D54u; f_801EDEE8(c); // 80230D50
  cmps(c,0,(int32_t)c->r[3],9); // 80230D54
  if (crb(c,2)) { goto L_80230D60; } // 80230D58
  goto L_80230D94; // 80230D5C
L_80230D60:;
  c->r[3]=c->r[31]|c->r[31]; // 80230D60
  c->r[4]=c->r[31]+0x00010000u; // 80230D64
  c->r[4]=R32(c->r[4]+0xFFFF828Cu); // 80230D68
  c->r[5]=0u+0x00000000u; // 80230D6C
  c->lr=0x80230D74u; f_8022D784(c); // 80230D70
  c->r[3]=c->r[31]|c->r[31]; // 80230D74
  c->r[4]=0u+0x00000002u; // 80230D78
  c->r[5]=0u+0x00000001u; // 80230D7C
  c->lr=0x80230D84u; f_8022D784(c); // 80230D80
  c->r[3]=c->r[31]+0x00010000u; // 80230D84
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 80230D88
  c->r[4]=0u+0x00000001u; // 80230D8C
  c->lr=0x80230D94u; f_8021B46C(c); // 80230D90
L_80230D94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230D94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230D98
  c->lr=c->r[0]; // 80230D9C
  c->r[1]=c->r[1]+0x00000010u; // 80230DA0
  return; // 80230DA4
}

// fn_80230DA8
void f_80230DA8(Ctx* __restrict c) {
  return; // 80230DA8
}

// fn_80230DAC
void f_80230DAC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230DAC
  c->r[0]=c->lr; // 80230DB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230DB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230DB8
  c->r[31]=c->r[3]|c->r[3]; // 80230DBC
  c->r[4]=c->r[3]+0x00010000u; // 80230DC0
  c->r[0]=R32(c->r[4]+0xFFFF828Cu); // 80230DC4
  cmps(c,0,(int32_t)c->r[0],1); // 80230DC8
  if (crb(c,2)) { goto L_80230E14; } // 80230DCC
  c->lr=0x80230DD4u; f_801EDEE8(c); // 80230DD0
  cmps(c,0,(int32_t)c->r[3],9); // 80230DD4
  if (crb(c,2)) { goto L_80230DE0; } // 80230DD8
  goto L_80230E14; // 80230DDC
L_80230DE0:;
  c->r[3]=c->r[31]|c->r[31]; // 80230DE0
  c->r[4]=c->r[31]+0x00010000u; // 80230DE4
  c->r[4]=R32(c->r[4]+0xFFFF828Cu); // 80230DE8
  c->r[5]=0u+0x00000000u; // 80230DEC
  c->lr=0x80230DF4u; f_8022D784(c); // 80230DF0
  c->r[3]=c->r[31]|c->r[31]; // 80230DF4
  c->r[4]=0u+0x00000001u; // 80230DF8
  c->r[5]=0u+0x00000001u; // 80230DFC
  c->lr=0x80230E04u; f_8022D784(c); // 80230E00
  c->r[3]=c->r[31]+0x00010000u; // 80230E04
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 80230E08
  c->r[4]=0u+0x00000001u; // 80230E0C
  c->lr=0x80230E14u; f_8021B46C(c); // 80230E10
L_80230E14:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230E14
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230E18
  c->lr=c->r[0]; // 80230E1C
  c->r[1]=c->r[1]+0x00000010u; // 80230E20
  return; // 80230E24
}

// fn_80230E28
void f_80230E28(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230E28
  c->r[0]=c->lr; // 80230E2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230E30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230E34
  c->r[31]=c->r[3]|c->r[3]; // 80230E38
  c->r[4]=c->r[3]+0x00010000u; // 80230E3C
  c->r[0]=R32(c->r[4]+0xFFFF828Cu); // 80230E40
  cmps(c,0,(int32_t)c->r[0],3); // 80230E44
  if (crb(c,2)) { goto L_80230E90; } // 80230E48
  c->lr=0x80230E50u; f_801EDEE8(c); // 80230E4C
  cmps(c,0,(int32_t)c->r[3],9); // 80230E50
  if (crb(c,2)) { goto L_80230E5C; } // 80230E54
  goto L_80230E90; // 80230E58
L_80230E5C:;
  c->r[3]=c->r[31]|c->r[31]; // 80230E5C
  c->r[4]=c->r[31]+0x00010000u; // 80230E60
  c->r[4]=R32(c->r[4]+0xFFFF828Cu); // 80230E64
  c->r[5]=0u+0x00000000u; // 80230E68
  c->lr=0x80230E70u; f_8022D784(c); // 80230E6C
  c->r[3]=c->r[31]|c->r[31]; // 80230E70
  c->r[4]=0u+0x00000003u; // 80230E74
  c->r[5]=0u+0x00000001u; // 80230E78
  c->lr=0x80230E80u; f_8022D784(c); // 80230E7C
  c->r[3]=c->r[31]+0x00010000u; // 80230E80
  c->r[3]=R32(c->r[3]+0xFFFF8190u); // 80230E84
  c->r[4]=0u+0x00000001u; // 80230E88
  c->lr=0x80230E90u; f_8021B46C(c); // 80230E8C
L_80230E90:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230E94
  c->lr=c->r[0]; // 80230E98
  c->r[1]=c->r[1]+0x00000010u; // 80230E9C
  return; // 80230EA0
}

// fn_80230EA4
void f_80230EA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230EA4
  c->r[0]=c->lr; // 80230EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230EAC
  c->r[4]=c->r[3]+0x00010000u; // 80230EB0
  c->r[0]=R32(c->r[4]+0xFFFF8298u); // 80230EB4
  cmps(c,0,(int32_t)c->r[0],0); // 80230EB8
  if (crb(c,2)) { goto L_80230F0C; } // 80230EBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0xFFFF8276u); // 80230EC0
  cmps(c,0,(int32_t)c->r[0],0); // 80230EC4
  if (!crb(c,0)) { goto L_80230ED4; } // 80230EC8
  c->r[0]=0u+0x00000000u; // 80230ECC
  W16(c->r[4]+0xFFFF8276u,c->r[0]); // 80230ED0
L_80230ED4:;
  c->r[4]=0u+0x00000003u; // 80230ED4
  c->r[5]=0u+0x00000001u; // 80230ED8
  c->lr=0x80230EE0u; f_8022F234(c); // 80230EDC
  c->r[3]=0u+0x00000001u; // 80230EE0
  c->r[4]=0u+0x80480000u; // 80230EE4
  c->r[4]=c->r[4]+0x00000660u; // 80230EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80230EEC
  c->lr=0x80230EF4u; f_803D3760(c); // 80230EF0
  c->lr=0x80230EF8u; f_8006592C(c); // 80230EF4
  c->r[4]=0u+0x00000004u; // 80230EF8
  c->r[5]=0u+0x00000000u; // 80230EFC
  c->r[6]=0u+0xFFFFFFFFu; // 80230F00
  c->r[7]=0u+0xFFFFFFFFu; // 80230F04
  c->lr=0x80230F0Cu; f_80048F20(c); // 80230F08
L_80230F0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230F0C
  c->lr=c->r[0]; // 80230F10
  c->r[1]=c->r[1]+0x00000010u; // 80230F14
  return; // 80230F18
}

// fn_80230F1C
void f_80230F1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230F1C
  c->r[0]=c->lr; // 80230F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230F28
  c->r[31]=c->r[3]|c->r[3]; // 80230F2C
  c->r[0]=0u+0xFFFFFFFFu; // 80230F30
  c->r[4]=c->r[3]+0x00010000u; // 80230F34
  W16(c->r[4]+0xFFFF8276u,c->r[0]); // 80230F38
  c->r[0]=R32(c->r[4]+0xFFFF8298u); // 80230F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80230F40
  if (crb(c,2)) { goto L_80230F7C; } // 80230F44
  c->r[4]=0u+0x00000003u; // 80230F48
  c->r[5]=0u+0x00000002u; // 80230F4C
  c->lr=0x80230F54u; f_8022F234(c); // 80230F50
  c->r[3]=0u+0x00000001u; // 80230F54
  c->r[4]=0u+0x80480000u; // 80230F58
  c->r[4]=c->r[4]+0x00000670u; // 80230F5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80230F60
  c->lr=0x80230F68u; f_803D3760(c); // 80230F64
  c->r[3]=c->r[31]+0x00010000u; // 80230F68
  c->r[3]=R32(c->r[3]+0xFFFF8270u); // 80230F6C
  c->r[4]=0u+0x00000000u; // 80230F70
  c->r[5]=0u+0x00000000u; // 80230F74
  c->lr=0x80230F7Cu; f_8021B358(c); // 80230F78
L_80230F7C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230F80
  c->lr=c->r[0]; // 80230F84
  c->r[1]=c->r[1]+0x00000010u; // 80230F88
  return; // 80230F8C
}

// fn_80230F90
void f_80230F90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230F90
  c->r[0]=c->lr; // 80230F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230F98
  c->r[0]=R32(c->r[3]+0x000000B0u); // 80230F9C
  cmps(c,0,(int32_t)c->r[0],9); // 80230FA0
  if (!crb(c,2)) { goto L_80230FC0; } // 80230FA4
  c->lr=0x80230FACu; f_8006592C(c); // 80230FA8
  c->r[4]=0u+0x00000004u; // 80230FAC
  c->r[5]=0u+0x00000000u; // 80230FB0
  c->r[6]=0u+0xFFFFFFFFu; // 80230FB4
  c->r[7]=0u+0xFFFFFFFFu; // 80230FB8
  c->lr=0x80230FC0u; f_80048F20(c); // 80230FBC
L_80230FC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230FC0
  c->lr=c->r[0]; // 80230FC4
  c->r[1]=c->r[1]+0x00000010u; // 80230FC8
  return; // 80230FCC
}

// fn_80230FD0
void f_80230FD0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80230FD0
  c->r[0]=c->lr; // 80230FD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80230FD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80230FDC
  c->r[31]=c->r[3]|c->r[3]; // 80230FE0
  c->lr=0x80230FE8u; f_801EE384(c); // 80230FE4
  c->r[0]=0u+0x00000000u; // 80230FE8
  c->r[3]=c->r[31]+0x00010000u; // 80230FEC
  W32(c->r[3]+0xFFFF8178u,c->r[0]); // 80230FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80230FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80230FF8
  c->lr=c->r[0]; // 80230FFC
  c->r[1]=c->r[1]+0x00000010u; // 80231000
  return; // 80231004
}

// fn_80231008
void f_80231008(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231008
  c->r[0]=c->lr; // 8023100C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80231010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80231014
  c->r[31]=c->r[3]|c->r[3]; // 80231018
  c->r[3]=0u+0x00000001u; // 8023101C
  c->r[4]=0u+0x80480000u; // 80231020
  c->r[4]=c->r[4]+0x00000680u; // 80231024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80231028
  c->lr=0x80231030u; f_803D3760(c); // 8023102C
  c->r[3]=c->r[31]|c->r[31]; // 80231030
  c->lr=0x80231038u; f_80230FD0(c); // 80231034
  c->lr=0x8023103Cu; f_801ECCEC(c); // 80231038
  c->lr=0x80231040u; f_80206F70(c); // 8023103C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80231040
  c->r[0]=R32(c->r[1]+0x00000014u); // 80231044
  c->lr=c->r[0]; // 80231048
  c->r[1]=c->r[1]+0x00000010u; // 8023104C
  return; // 80231050
}

// fn_80231054
void f_80231054(Ctx* __restrict c) {
  c->r[3]=R16(c->r[3]+0x00000040u); // 80231054
  return; // 80231058
}

// fn_8023105C
void f_8023105C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000020u); // 8023105C
  return; // 80231060
}

// fn_80231064
void f_80231064(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 80231064
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80231068
  c->r[3]=c->r[3]+c->r[0]; // 8023106C
  W32(c->r[3]+0xFFFF8440u,c->r[5]); // 80231070
  return; // 80231074
}

// fn_80231078
void f_80231078(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0x00010000u; // 80231078
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8023107C
  c->r[3]=c->r[3]+c->r[0]; // 80231080
  c->r[3]=R32(c->r[3]+0xFFFF8440u); // 80231084
  return; // 80231088
}

// fn_8023108C
void f_8023108C(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x000008CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023108C
  return; // 80231090
}

// fn_80231094
void f_80231094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231094
  c->r[0]=c->lr; // 80231098
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023109C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802310A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 802310A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 802310A8
  W32(c->r[1]+0x00000010u,c->r[28]); // 802310AC
  c->r[31]=c->r[3]|c->r[3]; // 802310B0
  c->lr=0x802310B8u; f_801ECD20(c); // 802310B4
  c->r[3]=0u+0x80480000u; // 802310B8
  c->r[0]=c->r[3]+0x000007A8u; // 802310BC
  W32(c->r[31]+0x00000058u,c->r[0]); // 802310C0
  c->r[30]=0u+0x00000000u; // 802310C4
  c->r[3]=c->r[31]+0x00010000u; // 802310C8
  W32(c->r[3]+0xFFFF81DCu,c->r[30]); // 802310CC
  W32(c->r[3]+0xFFFF80D4u,c->r[30]); // 802310D0
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802310D4
  c->lr=0x802310DCu; f_801EF3E0(c); // 802310D8
  c->r[4]=c->r[31]+0x00010000u; // 802310DC
  W32(c->r[4]+0xFFFF8370u,c->r[3]); // 802310E0
  c->lr=0x802310E8u; f_801ECCEC(c); // 802310E4
  c->lr=0x802310ECu; f_801ECCE4(c); // 802310E8
  c->r[29]=c->r[3]+0x00000442u; // 802310EC
  c->r[0]=0u+0x00000085u; // 802310F0
  W16(c->r[29]+0x00000020u,c->r[0]); // 802310F4
  c->lr=0x802310FCu; f_800A23BC(c); // 802310F8
  cmps(c,0,(int32_t)c->r[3],0); // 802310FC
  if (crb(c,2)) { goto L_80231160; } // 80231100
  W16(c->r[29]+0x00000020u,c->r[30]); // 80231104
  c->r[28]=0u+0x00000000u; // 80231108
  c->r[30]=0u+0x00000001u; // 8023110C
L_80231110:;
  c->lr=0x80231114u; f_8007B524(c); // 80231110
  c->r[4]=c->r[28]+0x0000016Cu; // 80231114
  c->lr=0x8023111Cu; f_8009DDD4(c); // 80231118
  cmps(c,0,(int32_t)c->r[3],0); // 8023111C
  if (crb(c,2)) { goto L_80231154; } // 80231120
  c->r[4]=rotl(c->r[28],29)&0x1FFFFFFFu; // 80231124
  c->r[3]=R8(c->r[29]+c->r[4]); // 80231128
  c->r[0]=rotl(c->r[28],0)&0x00000007u; // 8023112C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[30]<<((c->r[0])&31)); // 80231130
  c->r[0]=c->r[3]|c->r[0]; // 80231134
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80231138
  W8(c->r[29]+c->r[4],c->r[0]); // 8023113C
  cmps(c,0,(int32_t)c->r[28],0); // 80231140
  if (crb(c,2)) { goto L_80231154; } // 80231144
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000020u); // 80231148
  c->r[0]=c->r[3]+0x00000001u; // 8023114C
  W16(c->r[29]+0x00000020u,c->r[0]); // 80231150
L_80231154:;
  c->r[28]=c->r[28]+0x00000001u; // 80231154
  cmpu(c,0,c->r[28],0x00000085u); // 80231158
  if (!crb(c,1)) { IRQCHK(c); goto L_80231110; } // 8023115C
L_80231160:;
  c->r[3]=c->r[31]+0x00010000u; // 80231160
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231164
  c->r[4]=0u+0x00000000u; // 80231168
  c->lr=0x80231170u; f_8028CA58(c); // 8023116C
  c->r[0]=0u+0x00000000u; // 80231170
  c->r[4]=c->r[31]+0x00010000u; // 80231174
  W32(c->r[4]+0xFFFF8168u,c->r[0]); // 80231178
  W32(c->r[4]+0xFFFF816Cu,c->r[0]); // 8023117C
  W32(c->r[4]+0xFFFF8170u,c->r[0]); // 80231180
  W32(c->r[4]+0xFFFF8174u,c->r[0]); // 80231184
  W32(c->r[4]+0xFFFF8178u,c->r[0]); // 80231188
  W32(c->r[4]+0xFFFF817Cu,c->r[0]); // 8023118C
  W32(c->r[4]+0xFFFF8180u,c->r[0]); // 80231190
  W32(c->r[4]+0xFFFF8184u,c->r[0]); // 80231194
  W32(c->r[4]+0xFFFF8188u,c->r[0]); // 80231198
  W32(c->r[4]+0xFFFF818Cu,c->r[0]); // 8023119C
  W32(c->r[4]+0xFFFF8190u,c->r[0]); // 802311A0
  c->r[5]=c->r[31]+0x00000014u; // 802311A4
  c->r[3]=c->r[5]+0x00010000u; // 802311A8
  W32(c->r[3]+0xFFFF8180u,c->r[0]); // 802311AC
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 802311B0
  W32(c->r[3]+0xFFFF8188u,c->r[0]); // 802311B4
  W32(c->r[3]+0xFFFF818Cu,c->r[0]); // 802311B8
  W32(c->r[3]+0xFFFF8190u,c->r[0]); // 802311BC
  c->r[5]=c->r[5]+0x00000014u; // 802311C0
  c->r[3]=c->r[5]+0x00010000u; // 802311C4
  W32(c->r[3]+0xFFFF8180u,c->r[0]); // 802311C8
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 802311CC
  W32(c->r[3]+0xFFFF8188u,c->r[0]); // 802311D0
  W32(c->r[3]+0xFFFF818Cu,c->r[0]); // 802311D4
  W32(c->r[3]+0xFFFF8190u,c->r[0]); // 802311D8
  W32(c->r[4]+0xFFFF81BCu,c->r[0]); // 802311DC
  W32(c->r[4]+0xFFFF81C0u,c->r[0]); // 802311E0
  W32(c->r[4]+0xFFFF81C4u,c->r[0]); // 802311E4
  W32(c->r[4]+0xFFFF81C8u,c->r[0]); // 802311E8
  W32(c->r[4]+0xFFFF81CCu,c->r[0]); // 802311EC
  W32(c->r[4]+0xFFFF81D0u,c->r[0]); // 802311F0
  W32(c->r[4]+0xFFFF81D4u,c->r[0]); // 802311F4
  W32(c->r[4]+0xFFFF81D8u,c->r[0]); // 802311F8
  W32(c->r[4]+0xFFFF81E0u,c->r[0]); // 802311FC
  W32(c->r[4]+0xFFFF81E4u,c->r[0]); // 80231200
  W32(c->r[4]+0xFFFF81E8u,c->r[0]); // 80231204
  W32(c->r[4]+0xFFFF81ECu,c->r[0]); // 80231208
  W32(c->r[4]+0xFFFF81F0u,c->r[0]); // 8023120C
  c->r[5]=c->r[31]+0x00000014u; // 80231210
  c->r[3]=c->r[5]+0x00010000u; // 80231214
  W32(c->r[3]+0xFFFF81E0u,c->r[0]); // 80231218
  W32(c->r[3]+0xFFFF81E4u,c->r[0]); // 8023121C
  W32(c->r[3]+0xFFFF81E8u,c->r[0]); // 80231220
  W32(c->r[3]+0xFFFF81ECu,c->r[0]); // 80231224
  W32(c->r[3]+0xFFFF81F0u,c->r[0]); // 80231228
  c->r[5]=c->r[5]+0x00000014u; // 8023122C
  c->r[3]=c->r[5]+0x00010000u; // 80231230
  W32(c->r[3]+0xFFFF81E0u,c->r[0]); // 80231234
  W32(c->r[3]+0xFFFF81E4u,c->r[0]); // 80231238
  W32(c->r[3]+0xFFFF81E8u,c->r[0]); // 8023123C
  W32(c->r[3]+0xFFFF81ECu,c->r[0]); // 80231240
  W32(c->r[3]+0xFFFF81F0u,c->r[0]); // 80231244
  W32(c->r[4]+0xFFFF821Cu,c->r[0]); // 80231248
  W32(c->r[4]+0xFFFF8220u,c->r[0]); // 8023124C
  W32(c->r[4]+0xFFFF8224u,c->r[0]); // 80231250
  W32(c->r[4]+0xFFFF8228u,c->r[0]); // 80231254
  W32(c->r[4]+0xFFFF8364u,c->r[0]); // 80231258
  W16(c->r[4]+0xFFFF836Cu,c->r[0]); // 8023125C
  c->r[3]=c->r[31]|c->r[31]; // 80231260
  c->r[4]=0u+0x00000000u; // 80231264
  c->lr=0x8023126Cu; f_801EDEE0(c); // 80231268
  c->r[3]=c->r[31]|c->r[31]; // 8023126C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80231270
  c->r[30]=R32(c->r[1]+0x00000018u); // 80231274
  c->r[29]=R32(c->r[1]+0x00000014u); // 80231278
  c->r[28]=R32(c->r[1]+0x00000010u); // 8023127C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80231280
  c->lr=c->r[0]; // 80231284
  c->r[1]=c->r[1]+0x00000020u; // 80231288
  return; // 8023128C
}

// fn_80231290
void f_80231290(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231290
  c->r[0]=c->lr; // 80231294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80231298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023129C
  W32(c->r[1]+0x00000008u,c->r[30]); // 802312A0
  c->r[30]=c->r[3]|c->r[3]; // 802312A4
  c->r[31]=c->r[4]|c->r[4]; // 802312A8
  cmps(c,0,(int32_t)c->r[3],0); // 802312AC
  if (crb(c,2)) { goto L_802312D0; } // 802312B0
  c->r[4]=0u+0x00000000u; // 802312B4
  c->lr=0x802312BCu; f_801ECF20(c); // 802312B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 802312BC
  cmps(c,0,(int32_t)c->r[0],0); // 802312C0
  if (!crb(c,1)) { goto L_802312D0; } // 802312C4
  c->r[3]=c->r[30]|c->r[30]; // 802312C8
  c->lr=0x802312D0u; f_80047B20(c); // 802312CC
L_802312D0:;
  c->r[3]=c->r[30]|c->r[30]; // 802312D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802312D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802312D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802312DC
  c->lr=c->r[0]; // 802312E0
  c->r[1]=c->r[1]+0x00000010u; // 802312E4
  return; // 802312E8
}

// fn_802312EC
void f_802312EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802312EC
  c->r[0]=c->lr; // 802312F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802312F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802312F8
  c->r[31]=c->r[3]|c->r[3]; // 802312FC
  c->r[0]=R32(c->r[3]+0x000000B0u); // 80231300
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80231304
  c->r[4]=0u+0x80430000u; // 80231308
  c->r[0]=c->r[4]+0x00003FA0u; // 8023130C
  c->r[12]=c->r[0]+c->r[5]; // 80231310
  c->lr=0x80231318u; f_802F09D0(c); // 80231314
  c->r[0]=c->r[0]|0x00000000u; // 80231318
  c->r[3]=c->r[31]|c->r[31]; // 8023131C
  c->lr=0x80231324u; f_801ED0E4(c); // 80231320
  c->r[3]=c->r[31]+0x00010000u; // 80231324
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80231328
  cmps(c,0,(int32_t)c->r[3],0); // 8023132C
  if (crb(c,2)) { goto L_80231338; } // 80231330
  c->lr=0x80231338u; f_80253A84(c); // 80231334
L_80231338:;
  c->r[3]=c->r[31]|c->r[31]; // 80231338
  c->r[12]=R32(c->r[3]+0x00000058u); // 8023133C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80231340
  c->ctr=c->r[12]; // 80231344
  if (true) { c->lr=0x8023134Cu; dispatch(c,c->ctr); } // 80231348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023134C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80231350
  c->lr=c->r[0]; // 80231354
  c->r[1]=c->r[1]+0x00000010u; // 80231358
  return; // 8023135C
}

// fn_80231360
void f_80231360(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80231360
  c->r[4]=c->r[3]+0x00010000u; // 80231364
  W32(c->r[4]+0xFFFF8364u,c->r[0]); // 80231368
  c->r[4]=0u+0x00000001u; // 8023136C
  f_801EDEE0(c); return; // 80231370
}

// fn_80231374
void f_80231374(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231374
  c->r[0]=c->lr; // 80231378
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023137C
  c->lr=0x80231384u; f_801EDEE8(c); // 80231380
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80231384
  c->r[0]=cntlz(c->r[0]); // 80231388
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8023138C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80231390
  c->lr=c->r[0]; // 80231394
  c->r[1]=c->r[1]+0x00000010u; // 80231398
  return; // 8023139C
}

// fn_802313A0
void f_802313A0(Ctx* __restrict c) {
  return; // 802313A0
}

// fn_802313A4
void f_802313A4(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 802313A4
  return; // 802313A8
}

// fn_802313AC
void f_802313AC(Ctx* __restrict c) {
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 802313AC
  c->r[4]=R16(c->r[3]+0x0000000Cu); // 802313B0
  cmpu(c,0,c->r[4],c->r[0]); // 802313B4
  if (!crb(c,0)) { goto L_802313C4; } // 802313B8
  c->r[3]=0u+0xFFFFFFFFu; // 802313BC
  return; // 802313C0
L_802313C4:;
  c->r[3]=c->r[0]-c->r[4]; // 802313C4
  c->r[0]=c->r[4]-c->r[0]; // 802313C8
  c->r[0]=c->r[3]|c->r[0]; // 802313CC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 802313D0
  return; // 802313D4
}

// fn_802313D8
void f_802313D8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802313D8
  c->r[0]=c->lr; // 802313DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 802313E0
  c->r[11]=c->r[1]+0x00000030u; // 802313E4
  c->lr=0x802313ECu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802313E8
  c->r[31]=c->r[3]|c->r[3]; // 802313EC
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802313F0
  c->lr=0x802313F8u; f_801EF5B4(c); // 802313F4
  c->r[29]=c->r[3]|c->r[3]; // 802313F8
  c->lr=0x80231400u; f_801ECCEC(c); // 802313FC
  c->lr=0x80231404u; f_801ECCE4(c); // 80231400
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 80231404
  c->r[3]=c->r[3]+c->r[0]; // 80231408
  c->r[26]=c->r[3]+0x00000330u; // 8023140C
  c->r[0]=0u+0x00000000u; // 80231410
  c->r[29]=c->r[31]+0x00010000u; // 80231414
  W32(c->r[29]+0xFFFF8368u,c->r[0]); // 80231418
  W32(c->r[29]+0xFFFF8248u,c->r[0]); // 8023141C
  W32(c->r[29]+0xFFFF825Cu,c->r[0]); // 80231420
  W32(c->r[29]+0xFFFF8270u,c->r[0]); // 80231424
  W32(c->r[29]+0xFFFF8284u,c->r[0]); // 80231428
  W32(c->r[29]+0xFFFF8298u,c->r[0]); // 8023142C
  c->r[4]=c->r[31]+0x00000064u; // 80231430
  c->r[3]=c->r[4]+0x00010000u; // 80231434
  W32(c->r[3]+0xFFFF8248u,c->r[0]); // 80231438
  W32(c->r[3]+0xFFFF825Cu,c->r[0]); // 8023143C
  W32(c->r[3]+0xFFFF8270u,c->r[0]); // 80231440
  W32(c->r[3]+0xFFFF8284u,c->r[0]); // 80231444
  W32(c->r[3]+0xFFFF8298u,c->r[0]); // 80231448
  c->r[4]=c->r[4]+0x00000064u; // 8023144C
  c->r[3]=c->r[4]+0x00010000u; // 80231450
  W32(c->r[3]+0xFFFF8248u,c->r[0]); // 80231454
  W32(c->r[3]+0xFFFF825Cu,c->r[0]); // 80231458
  W32(c->r[3]+0xFFFF8270u,c->r[0]); // 8023145C
  W32(c->r[3]+0xFFFF8284u,c->r[0]); // 80231460
  W32(c->r[3]+0xFFFF8298u,c->r[0]); // 80231464
  c->r[25]=0u+0x00000000u; // 80231468
  c->r[28]=c->r[31]|c->r[31]; // 8023146C
  c->r[27]=c->r[29]+0xFFFF8238u; // 80231470
  c->r[30]=0u+0x00000001u; // 80231474
  goto L_802314B8; // 80231478
L_8023147C:;
  c->r[3]=c->r[26]+c->r[25]; // 8023147C
  c->r[0]=R8(c->r[3]+0x00000010u); // 80231480
  c->r[3]=c->r[28]+0x00010000u; // 80231484
  W16(c->r[3]+0xFFFF8244u,c->r[0]); // 80231488
  W32(c->r[3]+0xFFFF8248u,c->r[30]); // 8023148C
  c->r[3]=c->r[31]+0x00010000u; // 80231490
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231494
  c->r[4]=c->r[27]|c->r[27]; // 80231498
  c->lr=0x802314A0u; f_8028CA70(c); // 8023149C
  c->r[3]=R32(c->r[29]+0xFFFF8368u); // 802314A0
  c->r[0]=c->r[3]+0x00000001u; // 802314A4
  W32(c->r[29]+0xFFFF8368u,c->r[0]); // 802314A8
  c->r[28]=c->r[28]+0x00000014u; // 802314AC
  c->r[27]=c->r[27]+0x00000014u; // 802314B0
  c->r[25]=c->r[25]+0x00000001u; // 802314B4
L_802314B8:;
  c->r[0]=R8(c->r[26]+0x0000001Fu); // 802314B8
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 802314BC
  if (crb(c,0)) { IRQCHK(c); goto L_8023147C; } // 802314C0
  c->r[3]=c->r[31]+0x00010000u; // 802314C4
  c->r[3]=c->r[3]+0xFFFF822Cu; // 802314C8
  c->r[4]=0u+0x80230000u; // 802314CC
  c->r[4]=c->r[4]+0x000013ACu; // 802314D0
  c->lr=0x802314D8u; f_8005B748(c); // 802314D4
  c->r[11]=c->r[1]+0x00000030u; // 802314D8
  c->lr=0x802314E0u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802314DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 802314E0
  c->lr=c->r[0]; // 802314E4
  c->r[1]=c->r[1]+0x00000030u; // 802314E8
  return; // 802314EC
}

// fn_802314F0
void f_802314F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFE70u; W32(ea,c->r[1]); c->r[1]=ea;} // 802314F0
  c->r[0]=c->lr; // 802314F4
  W32(c->r[1]+0x00000194u,c->r[0]); // 802314F8
  {uint32_t ea=c->r[1]+0x00000180u; WF64(ea,c->f[31]);} // 802314FC
  {uint32_t ea=c->r[1]+0x00000188u; psq_store(c,31,ea,0,0);} // 80231500
  {uint32_t ea=c->r[1]+0x00000170u; WF64(ea,c->f[30]);} // 80231504
  {uint32_t ea=c->r[1]+0x00000178u; psq_store(c,30,ea,0,0);} // 80231508
  {uint32_t ea=c->r[1]+0x00000160u; WF64(ea,c->f[29]);} // 8023150C
  {uint32_t ea=c->r[1]+0x00000168u; psq_store(c,29,ea,0,0);} // 80231510
  c->r[11]=c->r[1]+0x00000160u; // 80231514
  c->lr=0x8023151Cu; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80231518
  c->r[27]=c->r[3]|c->r[3]; // 8023151C
  c->r[4]=0u+0x0000000Au; // 80231520
  c->r[5]=0u+0x00000000u; // 80231524
  c->r[6]=0u+0x00000002u; // 80231528
  c->r[7]=0u+0x00000003u; // 8023152C
  c->lr=0x80231534u; f_801EDF08(c); // 80231530
  c->r[4]=c->r[27]+0x00010000u; // 80231534
  W32(c->r[4]+0xFFFF80FCu,c->r[3]); // 80231538
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023153C
  {uint32_t ea=c->r[2]+0xFFFF9A9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80231540
  c->lr=0x80231548u; f_8021B27C(c); // 80231544
  c->r[3]=c->r[27]+0x00010000u; // 80231548
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 8023154C
  c->r[4]=0u+0x00000001u; // 80231550
  c->r[5]=0u+0x00000000u; // 80231554
  c->lr=0x8023155Cu; f_8021B47C(c); // 80231558
  c->r[3]=c->r[27]+0x00010000u; // 8023155C
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 80231560
  c->r[4]=0u+0x00000000u; // 80231564
  c->lr=0x8023156Cu; f_8021B46C(c); // 80231568
  c->r[3]=c->r[27]|c->r[27]; // 8023156C
  c->r[4]=0u+0x00000037u; // 80231570
  c->r[5]=0u+0x00000000u; // 80231574
  c->r[6]=0u+0x00000002u; // 80231578
  c->r[7]=0u+0x00000003u; // 8023157C
  c->lr=0x80231584u; f_801EDF08(c); // 80231580
  c->r[4]=c->r[27]+0x00010000u; // 80231584
  W32(c->r[4]+0xFFFF81C4u,c->r[3]); // 80231588
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023158C
  {uint32_t ea=c->r[2]+0xFFFF9A9Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80231590
  c->lr=0x80231598u; f_8021B27C(c); // 80231594
  c->r[3]=c->r[27]+0x00010000u; // 80231598
  c->r[3]=R32(c->r[3]+0xFFFF81C4u); // 8023159C
  c->r[4]=0u+0x00000081u; // 802315A0
  c->r[5]=0u+0x00000000u; // 802315A4
  c->lr=0x802315ACu; f_8021B47C(c); // 802315A8
  c->r[3]=c->r[27]+0x00010000u; // 802315AC
  c->r[3]=R32(c->r[3]+0xFFFF81C4u); // 802315B0
  c->r[4]=0u+0x00000000u; // 802315B4
  c->lr=0x802315BCu; f_8021B46C(c); // 802315B8
  c->r[29]=0u+0x00000000u; // 802315BC
  c->r[28]=0u+0x00000000u; // 802315C0
  c->r[31]=c->r[27]|c->r[27]; // 802315C4
  c->r[30]=0u+0x00000000u; // 802315C8
  c->r[3]=0u+0x80430000u; // 802315CC
  c->r[25]=c->r[3]+0x0000400Cu; // 802315D0
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[31]=RF64(ea);} // 802315D4
  c->r[24]=0u+0x43300000u; // 802315D8
  {uint32_t ea=c->r[2]+0xFFFF9AA4u; c->f[30]=c->ps1[30]=RF32(ea);} // 802315DC
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[29]=c->ps1[29]=RF32(ea);} // 802315E0
L_802315E4:;
  c->r[3]=c->r[27]|c->r[27]; // 802315E4
  c->r[4]=0u+0x00000030u; // 802315E8
  c->r[5]=c->r[28]|c->r[28]; // 802315EC
  c->r[6]=0u+0x00000002u; // 802315F0
  c->r[7]=0u+0x00000005u; // 802315F4
  c->lr=0x802315FCu; f_801EDF08(c); // 802315F8
  c->r[4]=c->r[31]+0x00010000u; // 802315FC
  W32(c->r[4]+0xFFFF816Cu,c->r[3]); // 80231600
  c->r[3]=R32(c->r[4]+0xFFFF816Cu); // 80231604
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80231608
  W32(c->r[1]+0x00000124u,c->r[29]); // 8023160C
  W32(c->r[1]+0x00000120u,c->r[24]); // 80231610
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 80231614
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80231618
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8023161C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 80231620
  c->lr=0x80231628u; f_8021B27C(c); // 80231624
  c->r[3]=c->r[31]+0x00010000u; // 80231628
  c->r[3]=R32(c->r[3]+0xFFFF816Cu); // 8023162C
  c->r[4]=0u+0x00000083u; // 80231630
  c->r[5]=0u+0x00000000u; // 80231634
  c->lr=0x8023163Cu; f_8021B47C(c); // 80231638
  c->r[21]=0u+0x00000000u; // 8023163C
  c->r[23]=c->r[27]+c->r[30]; // 80231640
  c->r[22]=c->r[1]+0x00000010u; // 80231644
  c->r[26]=c->r[31]+0x00010000u; // 80231648
L_8023164C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8023164C
  c->r[0]=R32(c->r[25]+0x00000004u); // 80231650
  W32(c->r[1]+0x00000010u,c->r[3]); // 80231654
  W32(c->r[1]+0x00000014u,c->r[0]); // 80231658
  c->r[0]=R32(c->r[25]+0x00000008u); // 8023165C
  W32(c->r[1]+0x00000018u,c->r[0]); // 80231660
  c->r[3]=c->r[27]|c->r[27]; // 80231664
  c->r[4]=0u+0x00000000u; // 80231668
  c->r[5]=R32(c->r[26]+0xFFFF816Cu); // 8023166C
  c->lr=0x80231674u; f_801EDFF4(c); // 80231670
  c->r[4]=c->r[23]+0x00010000u; // 80231674
  W32(c->r[4]+0xFFFF81E0u,c->r[3]); // 80231678
  c->r[3]=R32(c->r[4]+0xFFFF81E0u); // 8023167C
  {uint32_t ea=c->r[22]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80231680
  {uint32_t ea=c->r[2]+0xFFFF9AACu; c->f[2]=c->ps1[2]=RF32(ea);} // 80231684
  c->r[4]=0u+0x00000000u; // 80231688
  c->lr=0x80231690u; f_802249E8(c); // 8023168C
  c->r[3]=c->r[23]+0x00010000u; // 80231690
  c->r[3]=R32(c->r[3]+0xFFFF81E0u); // 80231694
  c->r[4]=0u+0x00000004u; // 80231698
  c->lr=0x802316A0u; f_80224A40(c); // 8023169C
  c->r[23]=c->r[23]+0x00000014u; // 802316A0
  c->r[22]=c->r[22]+0x00000004u; // 802316A4
  c->r[21]=c->r[21]+0x00000001u; // 802316A8
  cmpu(c,0,c->r[21],0x00000003u); // 802316AC
  if (crb(c,0)) { IRQCHK(c); goto L_8023164C; } // 802316B0
  c->r[3]=c->r[31]+0x00010000u; // 802316B4
  c->r[3]=R32(c->r[3]+0xFFFF81F4u); // 802316B8
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[1]=c->ps1[1]=RF32(ea);} // 802316BC
  c->r[4]=0u+0x00000000u; // 802316C0
  c->lr=0x802316C8u; f_80224A18(c); // 802316C4
  c->r[3]=c->r[31]+0x00010000u; // 802316C8
  c->r[3]=R32(c->r[3]+0xFFFF8208u); // 802316CC
  {uint32_t ea=c->r[2]+0xFFFF9AB4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802316D0
  c->r[4]=0u+0x00000000u; // 802316D4
  c->lr=0x802316DCu; f_80224A18(c); // 802316D8
  cmps(c,0,(int32_t)c->r[28],0); // 802316DC
  if (!crb(c,2)) { goto L_802316EC; } // 802316E0
  c->r[3]=c->r[31]+0x00010000u; // 802316E4
  c->r[28]=R32(c->r[3]+0xFFFF816Cu); // 802316E8
L_802316EC:;
  c->r[31]=c->r[31]+0x00000004u; // 802316EC
  c->r[30]=c->r[30]+0x00000004u; // 802316F0
  c->r[29]=c->r[29]+0x00000001u; // 802316F4
  cmpu(c,0,c->r[29],0x00000005u); // 802316F8
  if (crb(c,0)) { IRQCHK(c); goto L_802315E4; } // 802316FC
  c->r[3]=c->r[27]+0x00010000u; // 80231700
  c->r[0]=R32(c->r[3]+0xFFFF8370u); // 80231704
  cmpu(c,0,c->r[0],0x0000000Bu); // 80231708
  if (!crb(c,2)) { goto L_80231960; } // 8023170C
  c->r[3]=c->r[27]|c->r[27]; // 80231710
  c->r[4]=0u+0x00000000u; // 80231714
  c->r[5]=0u+0x00000001u; // 80231718
  c->r[6]=0u+0x00000001u; // 8023171C
  c->lr=0x80231724u; f_801EE9C0(c); // 80231720
  c->r[23]=0u+0x00000000u; // 80231724
  c->r[22]=0u+0x00000000u; // 80231728
  c->r[24]=c->r[27]|c->r[27]; // 8023172C
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[31]=RF64(ea);} // 80231730
  c->r[28]=0u+0x43300000u; // 80231734
  {uint32_t ea=c->r[2]+0xFFFF9AA4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80231738
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[29]=c->ps1[29]=RF32(ea);} // 8023173C
L_80231740:;
  c->r[3]=c->r[27]|c->r[27]; // 80231740
  c->r[4]=0u+0x0000002Eu; // 80231744
  c->r[5]=c->r[22]|c->r[22]; // 80231748
  c->r[6]=0u+0x00000002u; // 8023174C
  c->r[7]=0u+0x00000005u; // 80231750
  c->lr=0x80231758u; f_801EDF08(c); // 80231754
  c->r[4]=c->r[24]+0x00010000u; // 80231758
  W32(c->r[4]+0xFFFF81C8u,c->r[3]); // 8023175C
  c->r[3]=R32(c->r[4]+0xFFFF81C8u); // 80231760
  c->r[4]=0u+0x00000082u; // 80231764
  c->r[5]=0u+0x00000000u; // 80231768
  c->lr=0x80231770u; f_8021B47C(c); // 8023176C
  c->r[3]=c->r[24]+0x00010000u; // 80231770
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 80231774
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80231778
  W32(c->r[1]+0x00000124u,c->r[23]); // 8023177C
  W32(c->r[1]+0x00000120u,c->r[28]); // 80231780
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 80231784
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80231788
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 8023178C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 80231790
  c->lr=0x80231798u; f_8021B27C(c); // 80231794
  c->r[3]=c->r[24]+0x00010000u; // 80231798
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 8023179C
  c->r[4]=0u+0x00000000u; // 802317A0
  c->lr=0x802317A8u; f_8021B46C(c); // 802317A4
  cmps(c,0,(int32_t)c->r[22],0); // 802317A8
  if (!crb(c,2)) { goto L_802317B8; } // 802317AC
  c->r[3]=c->r[24]+0x00010000u; // 802317B0
  c->r[22]=R32(c->r[3]+0xFFFF81C8u); // 802317B4
L_802317B8:;
  c->r[24]=c->r[24]+0x00000004u; // 802317B8
  c->r[23]=c->r[23]+0x00000001u; // 802317BC
  cmpu(c,0,c->r[23],0x00000005u); // 802317C0
  if (crb(c,0)) { IRQCHK(c); goto L_80231740; } // 802317C4
  c->r[23]=0u+0x00000000u; // 802317C8
  c->r[22]=0u+0x00000000u; // 802317CC
  c->r[24]=c->r[27]|c->r[27]; // 802317D0
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[29]=RF64(ea);} // 802317D4
  c->r[28]=0u+0x43300000u; // 802317D8
  {uint32_t ea=c->r[2]+0xFFFF9ABCu; c->f[30]=c->ps1[30]=RF32(ea);} // 802317DC
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[31]=c->ps1[31]=RF32(ea);} // 802317E0
L_802317E4:;
  c->r[3]=c->r[27]|c->r[27]; // 802317E4
  c->r[4]=0u+0x0000002Du; // 802317E8
  c->r[5]=c->r[22]|c->r[22]; // 802317EC
  c->r[6]=0u+0x00000002u; // 802317F0
  c->r[7]=0u+0x0000000Fu; // 802317F4
  c->lr=0x802317FCu; f_801EDF08(c); // 802317F8
  c->r[4]=c->r[24]+0x00010000u; // 802317FC
  W32(c->r[4]+0xFFFF8180u,c->r[3]); // 80231800
  c->r[3]=R32(c->r[4]+0xFFFF8180u); // 80231804
  W32(c->r[1]+0x00000124u,c->r[23]); // 80231808
  W32(c->r[1]+0x00000120u,c->r[28]); // 8023180C
  {uint32_t ea=c->r[1]+0x00000120u; c->f[0]=RF64(ea);} // 80231810
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 80231814
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80231818
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 8023181C
  {uint32_t ea=c->r[2]+0xFFFF9AC4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80231820
  c->lr=0x80231828u; f_8021B27C(c); // 80231824
  c->r[3]=c->r[24]+0x00010000u; // 80231828
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 8023182C
  c->r[4]=0u+0x00000008u; // 80231830
  c->r[5]=0u+0x00000000u; // 80231834
  c->lr=0x8023183Cu; f_8021B47C(c); // 80231838
  c->r[3]=c->r[24]+0x00010000u; // 8023183C
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 80231840
  c->r[4]=0u+0x00000000u; // 80231844
  c->lr=0x8023184Cu; f_8021B46C(c); // 80231848
  cmps(c,0,(int32_t)c->r[22],0); // 8023184C
  if (!crb(c,2)) { goto L_8023185C; } // 80231850
  c->r[3]=c->r[24]+0x00010000u; // 80231854
  c->r[22]=R32(c->r[3]+0xFFFF8180u); // 80231858
L_8023185C:;
  c->r[24]=c->r[24]+0x00000004u; // 8023185C
  c->r[23]=c->r[23]+0x00000001u; // 80231860
  cmpu(c,0,c->r[23],0x0000000Fu); // 80231864
  if (crb(c,0)) { IRQCHK(c); goto L_802317E4; } // 80231868
  c->r[3]=c->r[27]|c->r[27]; // 8023186C
  c->r[4]=0u+0x00000005u; // 80231870
  c->r[5]=0u+0x00000000u; // 80231874
  c->r[6]=0u+0x00000002u; // 80231878
  c->r[7]=0u+0x00000003u; // 8023187C
  c->lr=0x80231884u; f_801EDF08(c); // 80231880
  c->r[4]=c->r[27]+0x00010000u; // 80231884
  W32(c->r[4]+0xFFFF8168u,c->r[3]); // 80231888
  {uint32_t ea=c->r[2]+0xFFFF9AC8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023188C
  c->lr=0x80231894u; f_8021B290(c); // 80231890
  c->r[3]=c->r[27]+0x00010000u; // 80231894
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80231898
  c->r[4]=0u+0x00000085u; // 8023189C
  c->r[5]=0u+0x00000000u; // 802318A0
  c->lr=0x802318A8u; f_8021B47C(c); // 802318A4
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802318A8
  c->lr=0x802318B0u; f_801EF5B4(c); // 802318AC
  c->r[28]=c->r[3]|c->r[3]; // 802318B0
  c->lr=0x802318B8u; f_801ECCEC(c); // 802318B4
  c->lr=0x802318BCu; f_801ECCE4(c); // 802318B8
  c->r[0]=(uint32_t)((int32_t)c->r[28]*(int32_t)34); // 802318BC
  c->r[3]=c->r[3]+c->r[0]; // 802318C0
  c->r[21]=c->r[3]+0x00000330u; // 802318C4
  c->r[0]=0u+0x00000080u; // 802318C8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 802318CC
  c->r[0]=0u+0x00000008u; // 802318D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 802318D4
  c->r[3]=c->r[1]+0x00000020u; // 802318D8
  c->r[4]=0u+0x00000000u; // 802318DC
  c->r[5]=0u+0x00000080u; // 802318E0
  c->lr=0x802318E8u; f_800060B8(c); // 802318E4
  c->r[3]=c->r[1]+0x00000020u; // 802318E8
  c->r[4]=c->r[1]+0x0000000Cu; // 802318EC
  c->r[5]=c->r[21]|c->r[21]; // 802318F0
  c->r[6]=c->r[1]+0x00000008u; // 802318F4
  c->lr=0x802318FCu; f_8040C924(c); // 802318F8
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802318FC
  c->r[4]=0u+0x00000002u; // 80231900
  c->lr=0x80231908u; f_801EF41C(c); // 80231904
  c->r[4]=c->r[3]|c->r[3]; // 80231908
  c->r[3]=c->r[1]+0x000000A0u; // 8023190C
  c->r[5]=c->r[28]+0x00000001u; // 80231910
  c->r[6]=c->r[1]+0x00000020u; // 80231914
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80231918
  c->lr=0x80231920u; f_802E7CC4(c); // 8023191C
  c->r[3]=c->r[27]|c->r[27]; // 80231920
  c->r[4]=c->r[1]+0x000000A0u; // 80231924
  c->r[5]=c->r[27]+0x00010000u; // 80231928
  c->r[5]=R32(c->r[5]+0xFFFF8168u); // 8023192C
  c->lr=0x80231934u; f_801EDFF4(c); // 80231930
  c->r[4]=c->r[27]+0x00010000u; // 80231934
  W32(c->r[4]+0xFFFF821Cu,c->r[3]); // 80231938
  {uint32_t ea=c->r[2]+0xFFFF9ACCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8023193C
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80231940
  c->r[4]=0u+0x00000001u; // 80231944
  c->lr=0x8023194Cu; f_802249E8(c); // 80231948
  c->r[3]=c->r[27]+0x00010000u; // 8023194C
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80231950
  c->r[4]=0u+0x00000000u; // 80231954
  c->lr=0x8023195Cu; f_80224B90(c); // 80231958
  goto L_80231AB8; // 8023195C
L_80231960:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80231960
  c->lr=0x80231968u; f_801EF5B4(c); // 80231964
  c->lr=0x8023196Cu; f_801ECCEC(c); // 80231968
  c->lr=0x80231970u; f_801ECCE4(c); // 8023196C
  c->lr=0x80231974u; f_801ECCEC(c); // 80231970
  c->lr=0x80231978u; f_801ECCE4(c); // 80231974
  c->r[28]=c->r[3]|c->r[3]; // 80231978
  c->r[3]=c->r[27]|c->r[27]; // 8023197C
  c->r[4]=0u+0x00000000u; // 80231980
  c->r[5]=0u+0xFFFFFFFFu; // 80231984
  c->r[6]=0u+0x00000001u; // 80231988
  c->lr=0x80231990u; f_801EE9C0(c); // 8023198C
  c->r[3]=c->r[27]|c->r[27]; // 80231990
  c->r[4]=0u+0x00000000u; // 80231994
  c->lr=0x8023199Cu; f_801EEC68(c); // 80231998
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8023199C
  c->r[4]=0u+0x00000004u; // 802319A0
  c->lr=0x802319A8u; f_801EF41C(c); // 802319A4
  c->r[4]=c->r[3]|c->r[3]; // 802319A8
  c->r[3]=c->r[1]+0x000000A0u; // 802319AC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000462u); // 802319B0
  c->r[6]=0u+0x00000085u; // 802319B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802319B8
  c->lr=0x802319C0u; f_802E7CC4(c); // 802319BC
  c->r[3]=c->r[27]|c->r[27]; // 802319C0
  c->r[4]=c->r[1]+0x000000A0u; // 802319C4
  c->r[5]=c->r[27]+0x00010000u; // 802319C8
  c->r[5]=R32(c->r[5]+0xFFFF8104u); // 802319CC
  c->lr=0x802319D4u; f_801EDFF4(c); // 802319D0
  c->r[4]=c->r[27]+0x00010000u; // 802319D4
  W32(c->r[4]+0xFFFF8220u,c->r[3]); // 802319D8
  c->r[4]=0u+0x00000002u; // 802319DC
  c->r[5]=0u+0x00000000u; // 802319E0
  c->lr=0x802319E8u; f_802249B4(c); // 802319E4
  c->r[3]=c->r[27]+0x00010000u; // 802319E8
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 802319EC
  {uint32_t ea=c->r[2]+0xFFFF9AD4u; c->f[1]=c->ps1[1]=RF32(ea);} // 802319F0
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 802319F4
  c->r[4]=0u+0x00000001u; // 802319F8
  c->lr=0x80231A00u; f_802249E8(c); // 802319FC
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80231A00
  c->r[4]=0u+0x00000002u; // 80231A04
  c->lr=0x80231A0Cu; f_801EF41C(c); // 80231A08
  c->r[4]=c->r[3]|c->r[3]; // 80231A0C
  c->r[3]=c->r[27]|c->r[27]; // 80231A10
  c->r[5]=c->r[27]+0x00010000u; // 80231A14
  c->r[5]=R32(c->r[5]+0xFFFF8104u); // 80231A18
  c->lr=0x80231A20u; f_801EDFF4(c); // 80231A1C
  c->r[4]=c->r[27]+0x00010000u; // 80231A20
  W32(c->r[4]+0xFFFF8224u,c->r[3]); // 80231A24
  {uint32_t ea=c->r[2]+0xFFFF9AD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80231A28
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80231A2C
  c->r[4]=0u+0x00000001u; // 80231A30
  c->lr=0x80231A38u; f_802249E8(c); // 80231A34
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80231A38
  c->r[4]=0u+0x00000005u; // 80231A3C
  c->lr=0x80231A44u; f_801EF41C(c); // 80231A40
  c->r[4]=c->r[3]|c->r[3]; // 80231A44
  c->r[3]=c->r[1]+0x000000A0u; // 80231A48
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x00000462u); // 80231A4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)100); // 80231A50
  c->r[5]=0u+0xF6600000u; // 80231A54
  c->r[5]=c->r[5]+0x00003D99u; // 80231A58
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[0])>>32); // 80231A5C
  c->r[0]=c->r[5]+c->r[0]; // 80231A60
  c->r[0]=sraw(c,c->r[0],7); // 80231A64
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80231A68
  c->r[5]=c->r[0]+c->r[5]; // 80231A6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80231A70
  c->lr=0x80231A78u; f_802E7CC4(c); // 80231A74
  c->r[3]=c->r[27]|c->r[27]; // 80231A78
  c->r[4]=c->r[1]+0x000000A0u; // 80231A7C
  c->r[5]=c->r[27]+0x00010000u; // 80231A80
  c->r[5]=R32(c->r[5]+0xFFFF8104u); // 80231A84
  c->lr=0x80231A8Cu; f_801EDFF4(c); // 80231A88
  c->r[4]=c->r[27]+0x00010000u; // 80231A8C
  W32(c->r[4]+0xFFFF8228u,c->r[3]); // 80231A90
  c->r[4]=0u+0x00000002u; // 80231A94
  c->r[5]=0u+0x00000000u; // 80231A98
  c->lr=0x80231AA0u; f_802249B4(c); // 80231A9C
  c->r[3]=c->r[27]+0x00010000u; // 80231AA0
  c->r[3]=R32(c->r[3]+0xFFFF8228u); // 80231AA4
  {uint32_t ea=c->r[2]+0xFFFF9ADCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80231AA8
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80231AAC
  c->r[4]=0u+0x00000001u; // 80231AB0
  c->lr=0x80231AB8u; f_802249E8(c); // 80231AB4
L_80231AB8:;
  c->r[3]=c->r[27]|c->r[27]; // 80231AB8
  c->r[4]=0u+0x00000031u; // 80231ABC
  c->r[5]=0u+0x00000000u; // 80231AC0
  c->r[6]=0u+0x00000002u; // 80231AC4
  c->r[7]=0u+0x00000002u; // 80231AC8
  c->lr=0x80231AD0u; f_801EDF08(c); // 80231ACC
  c->r[5]=c->r[3]|c->r[3]; // 80231AD0
  c->r[4]=c->r[27]+0x00010000u; // 80231AD4
  W32(c->r[4]+0xFFFF81BCu,c->r[3]); // 80231AD8
  c->r[3]=c->r[27]|c->r[27]; // 80231ADC
  c->r[4]=0u+0x00000031u; // 80231AE0
  c->r[6]=0u+0x00000002u; // 80231AE4
  c->r[7]=0u+0x00000003u; // 80231AE8
  c->lr=0x80231AF0u; f_801EDF08(c); // 80231AEC
  c->r[4]=c->r[27]+0x00010000u; // 80231AF0
  W32(c->r[4]+0xFFFF81C0u,c->r[3]); // 80231AF4
  c->r[3]=R32(c->r[4]+0xFFFF81BCu); // 80231AF8
  c->r[4]=0u+0x00000003u; // 80231AFC
  c->r[5]=0u+0x00000000u; // 80231B00
  c->lr=0x80231B08u; f_8021B47C(c); // 80231B04
  c->r[3]=c->r[27]+0x00010000u; // 80231B08
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 80231B0C
  c->r[4]=0u+0x00000003u; // 80231B10
  c->r[5]=0u+0x00000000u; // 80231B14
  c->lr=0x80231B1Cu; f_8021B47C(c); // 80231B18
  c->r[3]=c->r[27]+0x00010000u; // 80231B1C
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 80231B20
  c->r[4]=0u+0x00000004u; // 80231B24
  c->r[5]=0u+0x00000001u; // 80231B28
  c->lr=0x80231B30u; f_8021B358(c); // 80231B2C
  c->r[3]=c->r[27]+0x00010000u; // 80231B30
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80231B34
  c->r[4]=0u+0x00000000u; // 80231B38
  c->lr=0x80231B40u; f_8021B46C(c); // 80231B3C
  c->r[3]=c->r[27]+0x00010000u; // 80231B40
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 80231B44
  c->r[4]=0u+0x00000000u; // 80231B48
  c->lr=0x80231B50u; f_8021B46C(c); // 80231B4C
  c->r[3]=c->r[27]+0x00010000u; // 80231B50
  c->r[3]=R32(c->r[3]+0xFFFF8110u); // 80231B54
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80231B58
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80231B5C
  c->r[4]=0u+0x00000000u; // 80231B60
  c->lr=0x80231B68u; f_802249E8(c); // 80231B64
  c->r[0]=0u+0x00000188u; // 80231B68
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80231B6C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[31]=RF64(ea);} // 80231B70
  c->r[0]=0u+0x00000178u; // 80231B74
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 80231B78
  {uint32_t ea=c->r[1]+0x00000170u; c->f[30]=RF64(ea);} // 80231B7C
  c->r[0]=0u+0x00000168u; // 80231B80
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 80231B84
  {uint32_t ea=c->r[1]+0x00000160u; c->f[29]=RF64(ea);} // 80231B88
  c->r[11]=c->r[1]+0x00000160u; // 80231B8C
  c->lr=0x80231B94u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80231B90
  c->r[0]=R32(c->r[1]+0x00000194u); // 80231B94
  c->lr=c->r[0]; // 80231B98
  c->r[1]=c->r[1]+0x00000190u; // 80231B9C
  return; // 80231BA0
}

// fn_80231BA4
void f_80231BA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231BA4
  c->r[0]=c->lr; // 80231BA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 80231BAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80231BB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80231BB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80231BB8
  c->r[29]=c->r[3]|c->r[3]; // 80231BBC
  c->lr=0x80231BC4u; f_80056B5C(c); // 80231BC0
  c->r[30]=c->r[3]|c->r[3]; // 80231BC4
  c->r[3]=c->r[29]|c->r[29]; // 80231BC8
  c->lr=0x80231BD0u; f_80065DB4(c); // 80231BCC
  c->lr=0x80231BD4u; f_80056B54(c); // 80231BD0
  c->r[3]=0u+0x0000004Cu; // 80231BD4
  c->lr=0x80231BDCu; f_80047B64(c); // 80231BD8
  c->r[31]=c->r[3]|c->r[3]; // 80231BDC
  cmps(c,0,(int32_t)c->r[3],0); // 80231BE0
  if (crb(c,2)) { goto L_80231C04; } // 80231BE4
  c->r[3]=c->r[29]|c->r[29]; // 80231BE8
  c->lr=0x80231BF0u; f_80065DB4(c); // 80231BEC
  c->r[4]=c->r[3]|c->r[3]; // 80231BF0
  c->r[3]=c->r[31]|c->r[31]; // 80231BF4
  c->r[5]=0u+0x00000000u; // 80231BF8
  c->r[6]=0u+0x00000001u; // 80231BFC
  c->lr=0x80231C04u; f_80253338(c); // 80231C00
L_80231C04:;
  c->r[3]=c->r[29]+0x00010000u; // 80231C04
  W32(c->r[3]+0xFFFF81DCu,c->r[31]); // 80231C08
  c->r[3]=c->r[30]|c->r[30]; // 80231C0C
  c->lr=0x80231C14u; f_80056B54(c); // 80231C10
  c->r[3]=c->r[29]+0x00010000u; // 80231C14
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80231C18
  {uint32_t ea=c->r[2]+0xFFFF9AF0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80231C1C
  {uint32_t ea=c->r[2]+0xFFFF9AF4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80231C20
  c->lr=0x80231C28u; f_80253658(c); // 80231C24
  c->r[3]=c->r[29]+0x00010000u; // 80231C28
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80231C2C
  c->r[4]=0u+0x00000001u; // 80231C30
  c->lr=0x80231C38u; f_80253970(c); // 80231C34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80231C38
  c->r[30]=R32(c->r[1]+0x00000018u); // 80231C3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80231C40
  c->r[0]=R32(c->r[1]+0x00000024u); // 80231C44
  c->lr=c->r[0]; // 80231C48
  c->r[1]=c->r[1]+0x00000020u; // 80231C4C
  return; // 80231C50
}

// fn_80231C54
void f_80231C54(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],0)&0x0000FFFFu; // 80231C54
  cmps(c,0,(int32_t)c->r[0],2); // 80231C58
  if (crb(c,2)) { goto L_80231C94; } // 80231C5C
  if (!crb(c,0)) { goto L_80231C74; } // 80231C60
  cmps(c,0,(int32_t)c->r[0],0); // 80231C64
  if (crb(c,2)) { goto L_80231C84; } // 80231C68
  if (!crb(c,0)) { goto L_80231C8C; } // 80231C6C
  return; // 80231C70
L_80231C74:;
  cmps(c,0,(int32_t)c->r[0],4); // 80231C74
  if (crb(c,2)) { goto L_80231CA4; } // 80231C78
  if (!crb(c,0)) return; // 80231C7C
  goto L_80231C9C; // 80231C80
L_80231C84:;
  c->r[3]=0u+0x00000001u; // 80231C84
  return; // 80231C88
L_80231C8C:;
  c->r[3]=0u+0x00000002u; // 80231C8C
  return; // 80231C90
L_80231C94:;
  c->r[3]=0u+0x00000003u; // 80231C94
  return; // 80231C98
L_80231C9C:;
  c->r[3]=0u+0x00000004u; // 80231C9C
  return; // 80231CA0
L_80231CA4:;
  c->r[3]=0u+0x00000005u; // 80231CA4
  return; // 80231CA8
}

// fn_80231CAC
void f_80231CAC(Ctx* __restrict c) {
  cmps(c,0,(int32_t)c->r[4],2); // 80231CAC
  if (crb(c,2)) { goto L_80231CF8; } // 80231CB0
  if (!crb(c,0)) { goto L_80231CD0; } // 80231CB4
  cmps(c,0,(int32_t)c->r[4],0); // 80231CB8
  if (crb(c,2)) { goto L_80231CE8; } // 80231CBC
  if (!crb(c,0)) { goto L_80231CF0; } // 80231CC0
  cmps(c,0,(int32_t)c->r[4],-1); // 80231CC4
  if (!crb(c,0)) { goto L_80231CE0; } // 80231CC8
  return; // 80231CCC
L_80231CD0:;
  cmps(c,0,(int32_t)c->r[4],4); // 80231CD0
  if (crb(c,2)) { goto L_80231D08; } // 80231CD4
  if (!crb(c,0)) return; // 80231CD8
  goto L_80231D00; // 80231CDC
L_80231CE0:;
  c->r[3]=0u+0x00000008u; // 80231CE0
  return; // 80231CE4
L_80231CE8:;
  c->r[3]=0u+0x00000003u; // 80231CE8
  return; // 80231CEC
L_80231CF0:;
  c->r[3]=0u+0x00000004u; // 80231CF0
  return; // 80231CF4
L_80231CF8:;
  c->r[3]=0u+0x00000005u; // 80231CF8
  return; // 80231CFC
L_80231D00:;
  c->r[3]=0u+0x00000006u; // 80231D00
  return; // 80231D04
L_80231D08:;
  c->r[3]=0u+0x00000007u; // 80231D08
  return; // 80231D0C
}

// fn_80231D10
void f_80231D10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231D10
  c->r[0]=c->lr; // 80231D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80231D18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80231D1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80231D20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80231D24
  c->r[29]=c->r[3]|c->r[3]; // 80231D28
  c->r[31]=c->r[4]|c->r[4]; // 80231D2C
  c->r[3]=c->r[3]+0x00010000u; // 80231D30
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231D34
  c->lr=0x80231D3Cu; f_8004B018(c); // 80231D38
  c->r[30]=c->r[3]|c->r[3]; // 80231D3C
  c->r[31]=rotl(c->r[31],0)&0x0000FFFFu; // 80231D40
  goto L_80231D84; // 80231D44
L_80231D48:;
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 80231D48
  cmpu(c,0,c->r[0],c->r[31]); // 80231D4C
  if (!crb(c,2)) { goto L_80231D70; } // 80231D50
  c->r[3]=c->r[29]+0x00010000u; // 80231D54
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231D58
  c->r[4]=c->r[30]|c->r[30]; // 80231D5C
  c->lr=0x80231D64u; f_8028CC6C(c); // 80231D60
  c->r[0]=0u+0x00000000u; // 80231D64
  W32(c->r[30]+0x00000010u,c->r[0]); // 80231D68
  goto L_80231D8C; // 80231D6C
L_80231D70:;
  c->r[3]=c->r[29]+0x00010000u; // 80231D70
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231D74
  c->r[4]=c->r[30]|c->r[30]; // 80231D78
  c->lr=0x80231D80u; f_8028CCD8(c); // 80231D7C
  c->r[30]=c->r[3]|c->r[3]; // 80231D80
L_80231D84:;
  cmps(c,0,(int32_t)c->r[30],0); // 80231D84
  if (!crb(c,2)) { IRQCHK(c); goto L_80231D48; } // 80231D88
L_80231D8C:;
  c->r[4]=c->r[29]+0x00010000u; // 80231D8C
  c->r[3]=R32(c->r[4]+0xFFFF8368u); // 80231D90
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80231D94
  W32(c->r[4]+0xFFFF8368u,c->r[0]); // 80231D98
  c->lr=0x80231DA0u; f_8006592C(c); // 80231D9C
  c->r[4]=0u+0x00000004u; // 80231DA0
  c->r[5]=0u+0x00000000u; // 80231DA4
  c->r[6]=0u+0xFFFFFFFFu; // 80231DA8
  c->r[7]=0u+0xFFFFFFFFu; // 80231DAC
  c->lr=0x80231DB4u; f_80048F20(c); // 80231DB0
  c->r[3]=c->r[29]|c->r[29]; // 80231DB4
  c->lr=0x80231DBCu; f_80231F4C(c); // 80231DB8
  c->r[3]=c->r[29]|c->r[29]; // 80231DBC
  c->r[4]=c->r[29]+0x00010000u; // 80231DC0
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 80231DC4
  c->r[5]=0u+0x00000001u; // 80231DC8
  c->lr=0x80231DD0u; f_8023218C(c); // 80231DCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80231DD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80231DD4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80231DD8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80231DDC
  c->lr=c->r[0]; // 80231DE0
  c->r[1]=c->r[1]+0x00000020u; // 80231DE4
  return; // 80231DE8
}

// fn_80231DEC
void f_80231DEC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231DEC
  c->r[0]=c->lr; // 80231DF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80231DF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80231DF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80231DFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80231E00
  c->r[29]=c->r[3]|c->r[3]; // 80231E04
  c->r[31]=0u+0x00000000u; // 80231E08
  c->r[7]=0u+0x00000000u; // 80231E0C
  c->r[6]=c->r[29]|c->r[29]; // 80231E10
  c->r[0]=0u+0x0000000Fu; // 80231E14
  c->ctr=c->r[0]; // 80231E18
L_80231E1C:;
  c->r[5]=c->r[6]+0x00010000u; // 80231E1C
  c->r[0]=R32(c->r[5]+0xFFFF8248u); // 80231E20
  cmps(c,0,(int32_t)c->r[0],0); // 80231E24
  if (!crb(c,2)) { goto L_80231E40; } // 80231E28
  c->r[5]=c->r[3]+0x00010000u; // 80231E2C
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)20); // 80231E30
  c->r[5]=c->r[5]+c->r[0]; // 80231E34
  c->r[31]=c->r[5]+0xFFFF8238u; // 80231E38
  goto L_80231E4C; // 80231E3C
L_80231E40:;
  c->r[6]=c->r[6]+0x00000014u; // 80231E40
  c->r[7]=c->r[7]+0x00000001u; // 80231E44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80231E1C; } // 80231E48
L_80231E4C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80231E4C
  if (!crb(c,2)) { goto L_80231E70; } // 80231E50
  c->lr=0x80231E58u; f_8006592C(c); // 80231E54
  c->r[4]=0u+0x00000007u; // 80231E58
  c->r[5]=0u+0x00000000u; // 80231E5C
  c->r[6]=0u+0xFFFFFFFFu; // 80231E60
  c->r[7]=0u+0xFFFFFFFFu; // 80231E64
  c->lr=0x80231E6Cu; f_80048F20(c); // 80231E68
  goto L_80231F30; // 80231E6C
L_80231E70:;
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 80231E70
  c->r[0]=0u+0x00000001u; // 80231E74
  W32(c->r[31]+0x00000010u,c->r[0]); // 80231E78
  c->r[3]=c->r[3]+0x00010000u; // 80231E7C
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231E80
  c->lr=0x80231E88u; f_8004B018(c); // 80231E84
  c->r[30]=c->r[3]|c->r[3]; // 80231E88
  goto L_80231ECC; // 80231E8C
L_80231E90:;
  c->r[3]=R16(c->r[30]+0x0000000Cu); // 80231E90
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 80231E94
  cmpu(c,0,c->r[3],c->r[0]); // 80231E98
  if (!crb(c,1)) { goto L_80231EB8; } // 80231E9C
  c->r[3]=c->r[29]+0x00010000u; // 80231EA0
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231EA4
  c->r[4]=c->r[30]|c->r[30]; // 80231EA8
  c->r[5]=c->r[31]|c->r[31]; // 80231EAC
  c->lr=0x80231EB4u; f_8028CB4C(c); // 80231EB0
  goto L_80231ED4; // 80231EB4
L_80231EB8:;
  c->r[3]=c->r[29]+0x00010000u; // 80231EB8
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231EBC
  c->r[4]=c->r[30]|c->r[30]; // 80231EC0
  c->lr=0x80231EC8u; f_8028CCD8(c); // 80231EC4
  c->r[30]=c->r[3]|c->r[3]; // 80231EC8
L_80231ECC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80231ECC
  if (!crb(c,2)) { IRQCHK(c); goto L_80231E90; } // 80231ED0
L_80231ED4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80231ED4
  if (!crb(c,2)) { goto L_80231EEC; } // 80231ED8
  c->r[3]=c->r[29]+0x00010000u; // 80231EDC
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231EE0
  c->r[4]=c->r[31]|c->r[31]; // 80231EE4
  c->lr=0x80231EECu; f_8028CA70(c); // 80231EE8
L_80231EEC:;
  c->r[4]=c->r[29]+0x00010000u; // 80231EEC
  c->r[3]=R32(c->r[4]+0xFFFF8368u); // 80231EF0
  c->r[0]=c->r[3]+0x00000001u; // 80231EF4
  W32(c->r[4]+0xFFFF8368u,c->r[0]); // 80231EF8
  c->lr=0x80231F00u; f_8006592C(c); // 80231EFC
  c->r[4]=0u+0x00000004u; // 80231F00
  c->r[5]=0u+0x00000000u; // 80231F04
  c->r[6]=0u+0xFFFFFFFFu; // 80231F08
  c->r[7]=0u+0xFFFFFFFFu; // 80231F0C
  c->lr=0x80231F14u; f_80048F20(c); // 80231F10
  c->r[3]=c->r[29]|c->r[29]; // 80231F14
  c->lr=0x80231F1Cu; f_80231F4C(c); // 80231F18
  c->r[3]=c->r[29]|c->r[29]; // 80231F1C
  c->r[4]=c->r[29]+0x00010000u; // 80231F20
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 80231F24
  c->r[5]=0u+0x00000001u; // 80231F28
  c->lr=0x80231F30u; f_8023218C(c); // 80231F2C
L_80231F30:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80231F30
  c->r[30]=R32(c->r[1]+0x00000018u); // 80231F34
  c->r[29]=R32(c->r[1]+0x00000014u); // 80231F38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80231F3C
  c->lr=c->r[0]; // 80231F40
  c->r[1]=c->r[1]+0x00000020u; // 80231F44
  return; // 80231F48
}

// fn_80231F4C
void f_80231F4C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80231F4C
  c->r[0]=c->lr; // 80231F50
  W32(c->r[1]+0x00000034u,c->r[0]); // 80231F54
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80231F58
  W32(c->r[1]+0x00000028u,c->r[30]); // 80231F5C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80231F60
  W32(c->r[1]+0x00000020u,c->r[28]); // 80231F64
  c->r[28]=c->r[3]|c->r[3]; // 80231F68
  c->r[3]=c->r[3]+0x00010000u; // 80231F6C
  c->r[0]=R32(c->r[3]+0xFFFF8370u); // 80231F70
  cmpu(c,0,c->r[0],0x0000000Bu); // 80231F74
  if (!crb(c,2)) { goto L_80232058; } // 80231F78
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231F7C
  c->lr=0x80231F84u; f_8004B018(c); // 80231F80
  c->r[30]=c->r[3]|c->r[3]; // 80231F84
  c->r[31]=c->r[28]|c->r[28]; // 80231F88
  goto L_80231FD4; // 80231F8C
L_80231F90:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80231F90
  c->r[4]=R16(c->r[30]+0x0000000Cu); // 80231F94
  c->lr=0x80231F9Cu; f_801EF9C4(c); // 80231F98
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80231F9C
  c->r[3]=c->r[28]|c->r[28]; // 80231FA0
  c->lr=0x80231FA8u; f_80231C54(c); // 80231FA4
  c->r[5]=c->r[3]|c->r[3]; // 80231FA8
  c->r[3]=c->r[31]+0x00010000u; // 80231FAC
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 80231FB0
  c->r[4]=0u+0x00000004u; // 80231FB4
  c->lr=0x80231FBCu; f_8021B358(c); // 80231FB8
  c->r[3]=c->r[28]+0x00010000u; // 80231FBC
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231FC0
  c->r[4]=c->r[30]|c->r[30]; // 80231FC4
  c->lr=0x80231FCCu; f_8028CCD8(c); // 80231FC8
  c->r[30]=c->r[3]|c->r[3]; // 80231FCC
  c->r[31]=c->r[31]+0x00000004u; // 80231FD0
L_80231FD4:;
  cmps(c,0,(int32_t)c->r[30],0); // 80231FD4
  if (!crb(c,2)) { IRQCHK(c); goto L_80231F90; } // 80231FD8
  c->r[3]=c->r[28]+0x00010000u; // 80231FDC
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80231FE0
  c->lr=0x80231FE8u; f_8005C00C(c); // 80231FE4
  c->r[30]=rotl(c->r[3],0)&0x0000FFFFu; // 80231FE8
  c->r[29]=c->r[30]|c->r[30]; // 80231FEC
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80231FF0
  c->r[31]=c->r[28]+c->r[0]; // 80231FF4
  goto L_80232018; // 80231FF8
L_80231FFC:;
  c->r[3]=c->r[31]+0x00010000u; // 80231FFC
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 80232000
  c->r[4]=0u+0x00000004u; // 80232004
  c->r[5]=0u+0x00000000u; // 80232008
  c->lr=0x80232010u; f_8021B358(c); // 8023200C
  c->r[31]=c->r[31]+0x00000004u; // 80232010
  c->r[29]=c->r[29]+0x00000001u; // 80232014
L_80232018:;
  cmps(c,0,(int32_t)c->r[29],15); // 80232018
  if (crb(c,0)) { IRQCHK(c); goto L_80231FFC; } // 8023201C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232020
  c->r[4]=0u+0x00000003u; // 80232024
  c->lr=0x8023202Cu; f_801EF41C(c); // 80232028
  c->r[4]=c->r[3]|c->r[3]; // 8023202C
  c->r[3]=c->r[1]+0x00000008u; // 80232030
  c->r[5]=c->r[30]|c->r[30]; // 80232034
  c->r[6]=0u+0x0000000Fu; // 80232038
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8023203C
  c->lr=0x80232044u; f_802E7CC4(c); // 80232040
  c->r[3]=c->r[28]+0x00010000u; // 80232044
  c->r[3]=R32(c->r[3]+0xFFFF8110u); // 80232048
  c->r[4]=c->r[1]+0x00000008u; // 8023204C
  c->r[5]=0u+0x00000001u; // 80232050
  c->lr=0x80232058u; f_80224894(c); // 80232054
L_80232058:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80232058
  c->r[30]=R32(c->r[1]+0x00000028u); // 8023205C
  c->r[29]=R32(c->r[1]+0x00000024u); // 80232060
  c->r[28]=R32(c->r[1]+0x00000020u); // 80232064
  c->r[0]=R32(c->r[1]+0x00000034u); // 80232068
  c->lr=c->r[0]; // 8023206C
  c->r[1]=c->r[1]+0x00000030u; // 80232070
  return; // 80232074
}

// fn_80232078
void f_80232078(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232078
  c->r[0]=c->lr; // 8023207C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80232080
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80232084
  W32(c->r[1]+0x00000018u,c->r[30]); // 80232088
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023208C
  c->r[29]=c->r[3]|c->r[3]; // 80232090
  c->r[31]=c->r[4]|c->r[4]; // 80232094
  c->r[30]=0u+0x00000000u; // 80232098
  c->r[3]=c->r[3]+0x00010000u; // 8023209C
  c->r[3]=c->r[3]+0xFFFF822Cu; // 802320A0
  c->lr=0x802320A8u; f_8004B018(c); // 802320A4
  c->r[4]=c->r[3]|c->r[3]; // 802320A8
  c->r[31]=rotl(c->r[31],0)&0x0000FFFFu; // 802320AC
  goto L_802320D8; // 802320B0
L_802320B4:;
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 802320B4
  cmpu(c,0,c->r[0],c->r[31]); // 802320B8
  if (!crb(c,2)) { goto L_802320C8; } // 802320BC
  c->r[30]=0u+0x00000001u; // 802320C0
  goto L_802320E0; // 802320C4
L_802320C8:;
  c->r[3]=c->r[29]+0x00010000u; // 802320C8
  c->r[3]=c->r[3]+0xFFFF822Cu; // 802320CC
  c->lr=0x802320D4u; f_8028CCD8(c); // 802320D0
  c->r[4]=c->r[3]|c->r[3]; // 802320D4
L_802320D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 802320D8
  if (!crb(c,2)) { IRQCHK(c); goto L_802320B4; } // 802320DC
L_802320E0:;
  c->r[3]=c->r[30]|c->r[30]; // 802320E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802320E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 802320E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 802320EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 802320F0
  c->lr=c->r[0]; // 802320F4
  c->r[1]=c->r[1]+0x00000020u; // 802320F8
  return; // 802320FC
}

// fn_80232100
void f_80232100(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232100
  c->r[0]=c->lr; // 80232104
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023210C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80232110
  c->r[30]=c->r[4]|c->r[4]; // 80232114
  c->lr=0x8023211Cu; f_801ECCEC(c); // 80232118
  c->lr=0x80232120u; f_801ECCE4(c); // 8023211C
  c->r[31]=c->r[3]+0x00000442u; // 80232120
  c->lr=0x80232128u; f_800A23BC(c); // 80232124
  cmps(c,0,(int32_t)c->r[3],0); // 80232128
  if (crb(c,2)) { goto L_80232170; } // 8023212C
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80232130
  c->r[0]=rotl(c->r[3],29)&0x1FFFFFFFu; // 80232134
  c->r[5]=R8(c->r[31]+c->r[0]); // 80232138
  c->r[4]=0u+0x00000001u; // 8023213C
  c->r[0]=rotl(c->r[3],29)&0xE0000000u; // 80232140
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80232144
  c->r[0]=c->r[0]-c->r[3]; // 80232148
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8023214C
  c->r[0]=c->r[0]+c->r[3]; // 80232150
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 80232154
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80232158
  c->r[3]=c->r[5]&c->r[0]; // 8023215C
  c->r[0]=0u-c->r[3]; // 80232160
  c->r[0]=c->r[0]|c->r[3]; // 80232164
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80232168
  goto L_80232174; // 8023216C
L_80232170:;
  c->r[3]=0u+0x00000001u; // 80232170
L_80232174:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232174
  c->r[30]=R32(c->r[1]+0x00000008u); // 80232178
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023217C
  c->lr=c->r[0]; // 80232180
  c->r[1]=c->r[1]+0x00000010u; // 80232184
  return; // 80232188
}

// fn_8023218C
void f_8023218C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023218C
  c->r[0]=c->lr; // 80232190
  W32(c->r[1]+0x00000044u,c->r[0]); // 80232194
  c->r[11]=c->r[1]+0x00000040u; // 80232198
  c->lr=0x802321A0u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8023219C
  c->r[23]=c->r[3]|c->r[3]; // 802321A0
  c->r[24]=c->r[4]|c->r[4]; // 802321A4
  c->r[25]=c->r[5]|c->r[5]; // 802321A8
  c->r[27]=0u+0x00000000u; // 802321AC
  c->r[3]=c->r[3]+0x00010000u; // 802321B0
  c->r[0]=R32(c->r[3]+0xFFFF8370u); // 802321B4
  cmpu(c,0,c->r[0],0x0000000Bu); // 802321B8
  if (!crb(c,2)) { goto L_802321E8; } // 802321BC
  c->r[28]=0u+0x00000000u; // 802321C0
  c->r[26]=c->r[23]|c->r[23]; // 802321C4
L_802321C8:;
  c->r[3]=c->r[26]+0x00010000u; // 802321C8
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 802321CC
  c->r[4]=0u+0x00000000u; // 802321D0
  c->lr=0x802321D8u; f_8021B46C(c); // 802321D4
  c->r[26]=c->r[26]+0x00000004u; // 802321D8
  c->r[28]=c->r[28]+0x00000001u; // 802321DC
  cmps(c,0,(int32_t)c->r[28],5); // 802321E0
  if (crb(c,0)) { IRQCHK(c); goto L_802321C8; } // 802321E4
L_802321E8:;
  c->r[28]=0u+0x00000000u; // 802321E8
  c->r[29]=c->r[23]|c->r[23]; // 802321EC
  c->r[3]=0u+0xF6600000u; // 802321F0
  c->r[30]=c->r[3]+0x00003D99u; // 802321F4
  c->r[31]=0u+0x80480000u; // 802321F8
L_802321FC:;
  c->r[3]=c->r[24]+c->r[28]; // 802321FC
  c->r[4]=c->r[3]+0x00000083u; // 80232200
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[30]*(int64_t)(int32_t)c->r[4])>>32); // 80232204
  c->r[0]=c->r[0]+c->r[4]; // 80232208
  c->r[0]=sraw(c,c->r[0],7); // 8023220C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80232210
  c->r[0]=c->r[0]+c->r[3]; // 80232214
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)133); // 80232218
  c->r[3]=c->r[4]-c->r[0]; // 8023221C
  c->r[0]=c->r[3]+0x00000001u; // 80232220
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 80232224
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232228
  c->r[4]=c->r[26]|c->r[26]; // 8023222C
  c->lr=0x80232234u; f_801EF9D4(c); // 80232230
  c->r[22]=c->r[3]|c->r[3]; // 80232234
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232238
  c->r[4]=c->r[26]|c->r[26]; // 8023223C
  c->lr=0x80232244u; f_801EF9E4(c); // 80232240
  c->r[21]=c->r[3]|c->r[3]; // 80232244
  c->r[3]=c->r[1]+0x00000008u; // 80232248
  c->r[4]=c->r[13]+0xFFFFA538u; // 8023224C
  c->r[5]=c->r[26]|c->r[26]; // 80232250
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80232254
  c->lr=0x8023225Cu; f_802E7CC4(c); // 80232258
  c->r[3]=c->r[29]+0x00010000u; // 8023225C
  c->r[3]=R32(c->r[3]+0xFFFF81E0u); // 80232260
  c->r[4]=c->r[1]+0x00000008u; // 80232264
  c->r[5]=0u+0x00000001u; // 80232268
  c->lr=0x80232270u; f_80224894(c); // 8023226C
  c->r[3]=c->r[23]|c->r[23]; // 80232270
  c->r[4]=c->r[26]|c->r[26]; // 80232274
  c->lr=0x8023227Cu; f_80232100(c); // 80232278
  cmps(c,0,(int32_t)c->r[3],0); // 8023227C
  if (crb(c,2)) { goto L_802322BC; } // 80232280
  c->r[3]=c->r[29]+0x00010000u; // 80232284
  c->r[3]=R32(c->r[3]+0xFFFF81F4u); // 80232288
  c->r[4]=c->r[22]|c->r[22]; // 8023228C
  c->r[5]=0u+0x00000001u; // 80232290
  c->lr=0x80232298u; f_80224894(c); // 80232294
  c->r[3]=c->r[29]+0x00010000u; // 80232298
  c->r[3]=R32(c->r[3]+0xFFFF8208u); // 8023229C
  c->r[4]=c->r[21]|c->r[21]; // 802322A0
  c->r[5]=0u+0x00000001u; // 802322A4
  c->lr=0x802322ACu; f_80224894(c); // 802322A8
  cmps(c,0,(int32_t)c->r[28],2); // 802322AC
  if (!crb(c,2)) { goto L_802322F0; } // 802322B0
  c->r[27]=0u+0x00000001u; // 802322B4
  goto L_802322F0; // 802322B8
L_802322BC:;
  c->r[3]=c->r[29]+0x00010000u; // 802322BC
  c->r[3]=R32(c->r[3]+0xFFFF81F4u); // 802322C0
  c->r[4]=c->r[31]+0x00000750u; // 802322C4
  c->r[5]=0u+0x00000001u; // 802322C8
  c->lr=0x802322D0u; f_80224894(c); // 802322CC
  c->r[3]=c->r[29]+0x00010000u; // 802322D0
  c->r[3]=R32(c->r[3]+0xFFFF8208u); // 802322D4
  c->r[4]=c->r[31]+0x00000750u; // 802322D8
  c->r[5]=0u+0x00000001u; // 802322DC
  c->lr=0x802322E4u; f_80224894(c); // 802322E0
  cmps(c,0,(int32_t)c->r[28],2); // 802322E4
  if (!crb(c,2)) { goto L_802322F0; } // 802322E8
  c->r[27]=0u+0x00000000u; // 802322EC
L_802322F0:;
  cmps(c,0,(int32_t)c->r[27],0); // 802322F0
  if (crb(c,2)) { goto L_80232310; } // 802322F4
  c->r[3]=c->r[23]+0x00010000u; // 802322F8
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 802322FC
  c->r[0]=c->r[24]+0x00000001u; // 80232300
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80232304
  c->lr=0x8023230Cu; f_802536F8(c); // 80232308
  goto L_80232320; // 8023230C
L_80232310:;
  c->r[3]=c->r[23]+0x00010000u; // 80232310
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80232314
  c->r[4]=0u+0x00000000u; // 80232318
  c->lr=0x80232320u; f_802536F8(c); // 8023231C
L_80232320:;
  cmps(c,0,(int32_t)c->r[25],0); // 80232320
  if (crb(c,2)) { goto L_80232354; } // 80232324
  c->r[3]=c->r[23]+0x00010000u; // 80232328
  c->r[0]=R32(c->r[3]+0xFFFF8370u); // 8023232C
  cmpu(c,0,c->r[0],0x0000000Bu); // 80232330
  if (!crb(c,2)) { goto L_80232354; } // 80232334
  c->r[3]=c->r[23]|c->r[23]; // 80232338
  c->r[4]=c->r[26]|c->r[26]; // 8023233C
  c->lr=0x80232344u; f_80232078(c); // 80232340
  c->r[4]=c->r[3]|c->r[3]; // 80232344
  c->r[3]=c->r[29]+0x00010000u; // 80232348
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 8023234C
  c->lr=0x80232354u; f_8021B46C(c); // 80232350
L_80232354:;
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232354
  c->r[4]=c->r[26]|c->r[26]; // 80232358
  c->lr=0x80232360u; f_801EF9C4(c); // 8023235C
  c->r[0]=c->r[3]|c->r[3]; // 80232360
  c->r[3]=c->r[23]|c->r[23]; // 80232364
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 80232368
  c->lr=0x80232370u; f_80231CAC(c); // 8023236C
  c->r[5]=c->r[3]|c->r[3]; // 80232370
  c->r[3]=c->r[29]+0x00010000u; // 80232374
  c->r[3]=R32(c->r[3]+0xFFFF816Cu); // 80232378
  c->r[4]=0u+0x00000002u; // 8023237C
  c->lr=0x80232384u; f_8021B358(c); // 80232380
  c->r[29]=c->r[29]+0x00000004u; // 80232384
  c->r[28]=c->r[28]+0x00000001u; // 80232388
  cmps(c,0,(int32_t)c->r[28],5); // 8023238C
  if (crb(c,0)) { IRQCHK(c); goto L_802321FC; } // 80232390
  c->r[0]=c->r[24]+0x00000001u; // 80232394
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80232398
  c->r[3]=c->r[23]+0x00010000u; // 8023239C
  W16(c->r[3]+0xFFFF836Cu,c->r[0]); // 802323A0
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; // 802323A4
  W32(c->r[3]+0xFFFF80D4u,c->r[0]); // 802323A8
  c->lr=0x802323B0u; f_8006592C(c); // 802323AC
  c->r[4]=0u+0x00000006u; // 802323B0
  c->r[5]=0u+0x00000000u; // 802323B4
  c->r[6]=0u+0xFFFFFFFFu; // 802323B8
  c->r[7]=0u+0xFFFFFFFFu; // 802323BC
  c->lr=0x802323C4u; f_80048F20(c); // 802323C0
  c->r[11]=c->r[1]+0x00000040u; // 802323C4
  c->lr=0x802323CCu; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 802323C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 802323CC
  c->lr=c->r[0]; // 802323D0
  c->r[1]=c->r[1]+0x00000040u; // 802323D4
  return; // 802323D8
}

// fn_802323DC
void f_802323DC(Ctx* __restrict c) {
  return; // 802323DC
}

// fn_802323E0
void f_802323E0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802323E0
  c->r[0]=c->lr; // 802323E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802323E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802323EC
  c->r[31]=c->r[3]|c->r[3]; // 802323F0
  c->r[4]=c->r[3]+0x00010000u; // 802323F4
  c->r[0]=R32(c->r[4]+0xFFFF8364u); // 802323F8
  cmps(c,0,(int32_t)c->r[0],1); // 802323FC
  if (crb(c,2)) { goto L_80232430; } // 80232400
  if (!crb(c,0)) { goto L_80232480; } // 80232404
  cmps(c,0,(int32_t)c->r[0],0); // 80232408
  if (!crb(c,0)) { goto L_80232414; } // 8023240C
  goto L_80232480; // 80232410
L_80232414:;
  c->r[0]=R32(c->r[4]+0xFFFF8370u); // 80232414
  cmpu(c,0,c->r[0],0x0000000Bu); // 80232418
  if (!crb(c,2)) { goto L_80232424; } // 8023241C
  c->lr=0x80232424u; f_802313D8(c); // 80232420
L_80232424:;
  c->r[3]=c->r[31]|c->r[31]; // 80232424
  c->lr=0x8023242Cu; f_802314F0(c); // 80232428
  goto L_80232480; // 8023242C
L_80232430:;
  c->lr=0x80232434u; f_80231BA4(c); // 80232430
  c->r[3]=c->r[31]|c->r[31]; // 80232434
  c->r[4]=0u+0x00000000u; // 80232438
  c->r[5]=0u+0x00000000u; // 8023243C
  c->lr=0x80232444u; f_8023218C(c); // 80232440
  c->r[3]=c->r[31]|c->r[31]; // 80232444
  c->lr=0x8023244Cu; f_80231F4C(c); // 80232448
  c->r[3]=c->r[31]+0x00010000u; // 8023244C
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80232450
  c->r[4]=0u+0x00000004u; // 80232454
  c->lr=0x8023245Cu; f_80253A10(c); // 80232458
  c->lr=0x80232460u; f_8006592C(c); // 8023245C
  c->r[4]=0u+0x00000000u; // 80232460
  c->r[5]=0u+0x00000000u; // 80232464
  c->r[6]=0u+0xFFFFFFFFu; // 80232468
  c->r[7]=0u+0xFFFFFFFFu; // 8023246C
  c->lr=0x80232474u; f_80048F20(c); // 80232470
  c->r[3]=c->r[31]|c->r[31]; // 80232474
  c->r[4]=0u+0x00000002u; // 80232478
  c->lr=0x80232480u; f_801EDEE0(c); // 8023247C
L_80232480:;
  c->r[4]=c->r[31]+0x00010000u; // 80232480
  c->r[3]=R32(c->r[4]+0xFFFF8364u); // 80232484
  c->r[0]=c->r[3]+0x00000001u; // 80232488
  W32(c->r[4]+0xFFFF8364u,c->r[0]); // 8023248C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232490
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232494
  c->lr=c->r[0]; // 80232498
  c->r[1]=c->r[1]+0x00000010u; // 8023249C
  return; // 802324A0
}

// fn_802324A4
void f_802324A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802324A4
  c->r[0]=c->lr; // 802324A8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802324AC
  c->r[11]=c->r[1]+0x00000030u; // 802324B0
  c->lr=0x802324B8u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802324B4
  c->r[27]=c->r[3]|c->r[3]; // 802324B8
  c->r[3]=c->r[3]+0x00010000u; // 802324BC
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 802324C0
  c->r[4]=0u+0x00000000u; // 802324C4
  c->lr=0x802324CCu; f_8021B3FC(c); // 802324C8
  cmps(c,0,(int32_t)c->r[3],0); // 802324CC
  if (crb(c,2)) { goto L_80232640; } // 802324D0
  c->r[3]=c->r[27]|c->r[27]; // 802324D4
  c->r[4]=0u+0x00000001u; // 802324D8
  c->lr=0x802324E0u; f_801EED28(c); // 802324DC
  c->r[3]=c->r[27]+0x00010000u; // 802324E0
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 802324E4
  c->r[4]=0u+0x00000001u; // 802324E8
  c->lr=0x802324F0u; f_8021B46C(c); // 802324EC
  c->r[3]=c->r[27]+0x00010000u; // 802324F0
  c->r[3]=R32(c->r[3]+0xFFFF81C4u); // 802324F4
  c->r[4]=0u+0x00000001u; // 802324F8
  c->lr=0x80232500u; f_8021B46C(c); // 802324FC
  c->r[3]=c->r[27]+0x00010000u; // 80232500
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80232504
  c->r[4]=0u+0x00000001u; // 80232508
  c->lr=0x80232510u; f_8021B46C(c); // 8023250C
  c->r[3]=c->r[27]+0x00010000u; // 80232510
  c->r[3]=R32(c->r[3]+0xFFFF81C0u); // 80232514
  c->r[4]=0u+0x00000001u; // 80232518
  c->lr=0x80232520u; f_8021B46C(c); // 8023251C
  c->r[28]=0u+0x00000000u; // 80232520
  c->r[30]=0u+0x00000000u; // 80232524
  c->r[29]=c->r[27]|c->r[27]; // 80232528
  c->r[26]=0u+0xF6600000u; // 8023252C
  c->r[31]=c->r[27]+0x00010000u; // 80232530
L_80232534:;
  c->r[24]=0u+0x00000000u; // 80232534
  c->r[25]=c->r[27]+c->r[30]; // 80232538
L_8023253C:;
  c->r[3]=c->r[25]+0x00010000u; // 8023253C
  c->r[3]=R32(c->r[3]+0xFFFF81E0u); // 80232540
  c->r[4]=0u+0x00000001u; // 80232544
  c->lr=0x8023254Cu; f_80224B90(c); // 80232548
  c->r[25]=c->r[25]+0x00000014u; // 8023254C
  c->r[24]=c->r[24]+0x00000001u; // 80232550
  cmps(c,0,(int32_t)c->r[24],3); // 80232554
  if (crb(c,0)) { IRQCHK(c); goto L_8023253C; } // 80232558
  c->r[0]=R32(c->r[31]+0xFFFF8370u); // 8023255C
  cmpu(c,0,c->r[0],0x0000000Bu); // 80232560
  if (!crb(c,2)) { goto L_802325AC; } // 80232564
  c->r[3]=c->r[27]|c->r[27]; // 80232568
  c->r[5]=c->r[28]+0x00000083u; // 8023256C
  c->r[0]=c->r[26]+0x00003D99u; // 80232570
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80232574
  c->r[0]=c->r[0]+c->r[5]; // 80232578
  c->r[0]=sraw(c,c->r[0],7); // 8023257C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80232580
  c->r[0]=c->r[0]+c->r[4]; // 80232584
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)133); // 80232588
  c->r[4]=c->r[5]-c->r[0]; // 8023258C
  c->r[0]=c->r[4]+0x00000001u; // 80232590
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80232594
  c->lr=0x8023259Cu; f_80232078(c); // 80232598
  c->r[4]=c->r[3]|c->r[3]; // 8023259C
  c->r[3]=c->r[29]+0x00010000u; // 802325A0
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 802325A4
  c->lr=0x802325ACu; f_8021B46C(c); // 802325A8
L_802325AC:;
  c->r[30]=c->r[30]+0x00000004u; // 802325AC
  c->r[29]=c->r[29]+0x00000004u; // 802325B0
  c->r[28]=c->r[28]+0x00000001u; // 802325B4
  cmps(c,0,(int32_t)c->r[28],5); // 802325B8
  if (crb(c,0)) { IRQCHK(c); goto L_80232534; } // 802325BC
  c->r[3]=c->r[27]+0x00010000u; // 802325C0
  c->r[0]=R32(c->r[3]+0xFFFF8370u); // 802325C4
  cmpu(c,0,c->r[0],0x0000000Bu); // 802325C8
  if (!crb(c,2)) { goto L_80232608; } // 802325CC
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 802325D0
  c->r[4]=0u+0x00000001u; // 802325D4
  c->lr=0x802325DCu; f_80224B90(c); // 802325D8
  c->r[24]=0u+0x00000000u; // 802325DC
  c->r[26]=c->r[27]|c->r[27]; // 802325E0
L_802325E4:;
  c->r[3]=c->r[26]+0x00010000u; // 802325E4
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 802325E8
  c->r[4]=0u+0x00000001u; // 802325EC
  c->lr=0x802325F4u; f_8021B46C(c); // 802325F0
  c->r[26]=c->r[26]+0x00000004u; // 802325F4
  c->r[24]=c->r[24]+0x00000001u; // 802325F8
  cmps(c,0,(int32_t)c->r[24],15); // 802325FC
  if (crb(c,0)) { IRQCHK(c); goto L_802325E4; } // 80232600
  goto L_80232634; // 80232604
L_80232608:;
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 80232608
  c->r[4]=0u+0x00000001u; // 8023260C
  c->lr=0x80232614u; f_80224B90(c); // 80232610
  c->r[3]=c->r[27]+0x00010000u; // 80232614
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 80232618
  c->r[4]=0u+0x00000001u; // 8023261C
  c->lr=0x80232624u; f_80224B90(c); // 80232620
  c->r[3]=c->r[27]+0x00010000u; // 80232624
  c->r[3]=R32(c->r[3]+0xFFFF8228u); // 80232628
  c->r[4]=0u+0x00000001u; // 8023262C
  c->lr=0x80232634u; f_80224B90(c); // 80232630
L_80232634:;
  c->r[3]=c->r[27]|c->r[27]; // 80232634
  c->r[4]=0u+0x00000003u; // 80232638
  c->lr=0x80232640u; f_801EDEE0(c); // 8023263C
L_80232640:;
  c->r[11]=c->r[1]+0x00000030u; // 80232640
  c->lr=0x80232648u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80232644
  c->r[0]=R32(c->r[1]+0x00000034u); // 80232648
  c->lr=c->r[0]; // 8023264C
  c->r[1]=c->r[1]+0x00000030u; // 80232650
  return; // 80232654
}

// fn_80232658
void f_80232658(Ctx* __restrict c) {
  f_801ED56C(c); return; // 80232658
}

// fn_8023265C
void f_8023265C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023265C
  c->r[0]=c->lr; // 80232660
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232668
  c->r[31]=c->r[3]|c->r[3]; // 8023266C
  c->r[3]=c->r[3]+0x00010000u; // 80232670
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 80232674
  cmps(c,0,(int32_t)c->r[3],0); // 80232678
  if (crb(c,2)) { goto L_802326DC; } // 8023267C
  c->r[4]=0u+0x00000000u; // 80232680
  c->lr=0x80232688u; f_8021B3FC(c); // 80232684
  cmps(c,0,(int32_t)c->r[3],0); // 80232688
  if (crb(c,2)) { goto L_802326DC; } // 8023268C
  c->r[3]=c->r[31]|c->r[31]; // 80232690
  c->r[4]=0u+0x00000000u; // 80232694
  c->lr=0x8023269Cu; f_801EED28(c); // 80232698
  c->r[3]=c->r[31]|c->r[31]; // 8023269C
  c->r[4]=0u+0x00000002u; // 802326A0
  c->lr=0x802326A8u; f_801EECBC(c); // 802326A4
  c->r[3]=c->r[31]+0x00010000u; // 802326A8
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 802326AC
  c->r[4]=0u+0x00000000u; // 802326B0
  c->lr=0x802326B8u; f_80253970(c); // 802326B4
  c->r[3]=c->r[31]|c->r[31]; // 802326B8
  c->r[4]=0u+0x00000007u; // 802326BC
  c->lr=0x802326C4u; f_801EDEE0(c); // 802326C0
  c->lr=0x802326C8u; f_8006592C(c); // 802326C4
  c->r[4]=0u+0x00000001u; // 802326C8
  c->r[5]=0u+0x00000000u; // 802326CC
  c->r[6]=0u+0xFFFFFFFFu; // 802326D0
  c->r[7]=0u+0xFFFFFFFFu; // 802326D4
  c->lr=0x802326DCu; f_80048F20(c); // 802326D8
L_802326DC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802326DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802326E0
  c->lr=c->r[0]; // 802326E4
  c->r[1]=c->r[1]+0x00000010u; // 802326E8
  return; // 802326EC
}

// fn_802326F0
void f_802326F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802326F0
  c->r[0]=c->lr; // 802326F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802326F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802326FC
  c->r[31]=c->r[3]|c->r[3]; // 80232700
  c->r[3]=c->r[3]+0x00010000u; // 80232704
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80232708
  c->lr=0x80232710u; f_80253650(c); // 8023270C
  c->r[4]=0u+0x00000000u; // 80232710
  c->lr=0x80232718u; f_8021B3FC(c); // 80232714
  cmps(c,0,(int32_t)c->r[3],0); // 80232718
  if (crb(c,2)) { goto L_8023275C; } // 8023271C
  c->r[3]=c->r[31]+0x00010000u; // 80232720
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80232724
  c->r[4]=0u+0x00000000u; // 80232728
  c->lr=0x80232730u; f_80253970(c); // 8023272C
  c->r[3]=c->r[31]+0x00010000u; // 80232730
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 80232734
  c->r[4]=0u+0x00000000u; // 80232738
  c->lr=0x80232740u; f_8021B46C(c); // 8023273C
  c->r[3]=c->r[31]+0x00010000u; // 80232740
  c->r[3]=R32(c->r[3]+0xFFFF8104u); // 80232744
  c->r[4]=0u+0x00000000u; // 80232748
  c->lr=0x80232750u; f_8021B46C(c); // 8023274C
  c->r[3]=c->r[31]|c->r[31]; // 80232750
  c->r[4]=0u+0x00000006u; // 80232754
  c->lr=0x8023275Cu; f_801EDEE0(c); // 80232758
L_8023275C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023275C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232760
  c->lr=c->r[0]; // 80232764
  c->r[1]=c->r[1]+0x00000010u; // 80232768
  return; // 8023276C
}

// fn_80232770
void f_80232770(Ctx* __restrict c) {
  f_801ED56C(c); return; // 80232770
}

// fn_80232774
void f_80232774(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232774
  c->r[0]=c->lr; // 80232778
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023277C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232780
  W32(c->r[1]+0x00000008u,c->r[30]); // 80232784
  c->r[30]=c->r[3]|c->r[3]; // 80232788
  c->r[4]=c->r[3]+0x00010000u; // 8023278C
  c->r[0]=R32(c->r[4]+0xFFFF8364u); // 80232790
  cmps(c,0,(int32_t)c->r[0],1); // 80232794
  if (crb(c,2)) { goto L_802327D0; } // 80232798
  if (!crb(c,0)) { goto L_80232830; } // 8023279C
  cmps(c,0,(int32_t)c->r[0],0); // 802327A0
  if (!crb(c,0)) { goto L_802327AC; } // 802327A4
  goto L_80232830; // 802327A8
L_802327AC:;
  c->r[4]=R32(c->r[4]+0xFFFF80FCu); // 802327AC
  c->lr=0x802327B4u; f_801EEE18(c); // 802327B0
  c->r[3]=c->r[30]|c->r[30]; // 802327B4
  c->lr=0x802327BCu; f_802329B4(c); // 802327B8
  c->r[4]=c->r[30]+0x00010000u; // 802327BC
  c->r[3]=R32(c->r[4]+0xFFFF8364u); // 802327C0
  c->r[0]=c->r[3]+0x00000001u; // 802327C4
  W32(c->r[4]+0xFFFF8364u,c->r[0]); // 802327C8
  goto L_80232830; // 802327CC
L_802327D0:;
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 802327D0
  cmps(c,0,(int32_t)c->r[0],0); // 802327D4
  if (!crb(c,2)) { goto L_80232830; } // 802327D8
  c->lr=0x802327E0u; f_80232A04(c); // 802327DC
  cmps(c,0,(int32_t)c->r[3],0); // 802327E0
  if (crb(c,2)) { goto L_80232830; } // 802327E4
  c->r[31]=0u+0x00000000u; // 802327E8
L_802327EC:;
  c->r[3]=c->r[30]|c->r[30]; // 802327EC
  c->r[0]=addc(c,~c->r[31],0x0000000Eu,1); // 802327F0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 802327F4
  c->r[4]=c->r[4]+0x00010000u; // 802327F8
  c->r[0]=c->r[4]+0xFFFF8180u; // 802327FC
  c->r[4]=R32(c->r[30]+c->r[0]); // 80232800
  c->lr=0x80232808u; f_801EEE18(c); // 80232804
  c->r[31]=c->r[31]+0x00000001u; // 80232808
  cmps(c,0,(int32_t)c->r[31],15); // 8023280C
  if (crb(c,0)) { IRQCHK(c); goto L_802327EC; } // 80232810
  c->r[4]=c->r[30]+0x00010000u; // 80232814
  c->r[3]=R32(c->r[4]+0xFFFF8364u); // 80232818
  c->r[0]=c->r[3]+0x00000001u; // 8023281C
  W32(c->r[4]+0xFFFF8364u,c->r[0]); // 80232820
  c->r[3]=c->r[30]|c->r[30]; // 80232824
  c->r[4]=0u+0x00000008u; // 80232828
  c->lr=0x80232830u; f_801EDEE0(c); // 8023282C
L_80232830:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232830
  c->r[30]=R32(c->r[1]+0x00000008u); // 80232834
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232838
  c->lr=c->r[0]; // 8023283C
  c->r[1]=c->r[1]+0x00000010u; // 80232840
  return; // 80232844
}

// fn_80232848
void f_80232848(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232848
  c->r[0]=c->lr; // 8023284C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232854
  W32(c->r[1]+0x00000008u,c->r[30]); // 80232858
  c->r[30]=c->r[3]|c->r[3]; // 8023285C
  c->r[0]=0u+0x00000001u; // 80232860
  c->r[4]=c->r[3]+0x00010000u; // 80232864
  c->r[3]=R32(c->r[4]+0xFFFF8168u); // 80232868
  cmps(c,0,(int32_t)c->r[3],0); // 8023286C
  if (crb(c,2)) { goto L_80232894; } // 80232870
  c->r[0]=R32(c->r[4]+0xFFFF8370u); // 80232874
  cmpu(c,0,c->r[0],0x0000000Bu); // 80232878
  if (!crb(c,2)) { goto L_8023288C; } // 8023287C
  c->r[4]=0u+0x00000000u; // 80232880
  c->lr=0x80232888u; f_8021B3FC(c); // 80232884
  goto L_80232890; // 80232888
L_8023288C:;
  c->r[3]=0u+0x00000001u; // 8023288C
L_80232890:;
  c->r[0]=c->r[3]|c->r[3]; // 80232890
L_80232894:;
  c->r[3]=c->r[30]+0x00010000u; // 80232894
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 80232898
  cmps(c,0,(int32_t)c->r[3],0); // 8023289C
  if (crb(c,2)) { goto L_802328C8; } // 802328A0
  c->r[31]=0u+0x00000000u; // 802328A4
  cmps(c,0,(int32_t)c->r[0],0); // 802328A8
  if (crb(c,2)) { goto L_802328C4; } // 802328AC
  c->r[4]=0u+0x00000000u; // 802328B0
  c->lr=0x802328B8u; f_8021B3FC(c); // 802328B4
  cmps(c,0,(int32_t)c->r[3],0); // 802328B8
  if (crb(c,2)) { goto L_802328C4; } // 802328BC
  c->r[31]=0u+0x00000001u; // 802328C0
L_802328C4:;
  c->r[0]=c->r[31]|c->r[31]; // 802328C4
L_802328C8:;
  c->r[3]=c->r[30]+0x00010000u; // 802328C8
  c->r[3]=R32(c->r[3]+0xFFFF8104u); // 802328CC
  cmps(c,0,(int32_t)c->r[3],0); // 802328D0
  if (crb(c,2)) { goto L_802328FC; } // 802328D4
  c->r[31]=0u+0x00000000u; // 802328D8
  cmps(c,0,(int32_t)c->r[0],0); // 802328DC
  if (crb(c,2)) { goto L_802328F8; } // 802328E0
  c->r[4]=0u+0x00000000u; // 802328E4
  c->lr=0x802328ECu; f_8021B3FC(c); // 802328E8
  cmps(c,0,(int32_t)c->r[3],0); // 802328EC
  if (crb(c,2)) { goto L_802328F8; } // 802328F0
  c->r[31]=0u+0x00000001u; // 802328F4
L_802328F8:;
  c->r[0]=c->r[31]|c->r[31]; // 802328F8
L_802328FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 802328FC
  if (crb(c,2)) { goto L_8023299C; } // 80232900
  c->r[3]=c->r[30]+0x00010000u; // 80232904
  c->r[3]=R32(c->r[3]+0xFFFF8100u); // 80232908
  cmps(c,0,(int32_t)c->r[3],0); // 8023290C
  if (crb(c,2)) { goto L_8023291C; } // 80232910
  c->r[4]=0u+0x00000000u; // 80232914
  c->lr=0x8023291Cu; f_8021B46C(c); // 80232918
L_8023291C:;
  c->r[3]=c->r[30]+0x00010000u; // 8023291C
  c->r[3]=R32(c->r[3]+0xFFFF8104u); // 80232920
  cmps(c,0,(int32_t)c->r[3],0); // 80232924
  if (crb(c,2)) { goto L_80232934; } // 80232928
  c->r[4]=0u+0x00000000u; // 8023292C
  c->lr=0x80232934u; f_8021B46C(c); // 80232930
L_80232934:;
  c->r[3]=c->r[30]+0x00010000u; // 80232934
  c->r[0]=R32(c->r[3]+0xFFFF81DCu); // 80232938
  cmps(c,0,(int32_t)c->r[0],0); // 8023293C
  if (crb(c,2)) { goto L_8023297C; } // 80232940
  c->lr=0x80232948u; f_80056B5C(c); // 80232944
  c->r[31]=c->r[3]|c->r[3]; // 80232948
  c->r[3]=c->r[30]|c->r[30]; // 8023294C
  c->lr=0x80232954u; f_80065DB4(c); // 80232950
  c->lr=0x80232958u; f_80056B54(c); // 80232954
  c->r[3]=c->r[30]+0x00010000u; // 80232958
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 8023295C
  c->r[4]=0u+0x00000001u; // 80232960
  c->lr=0x80232968u; f_8025346C(c); // 80232964
  c->r[3]=c->r[31]|c->r[31]; // 80232968
  c->lr=0x80232970u; f_80056B54(c); // 8023296C
  c->r[0]=0u+0x00000000u; // 80232970
  c->r[3]=c->r[30]+0x00010000u; // 80232974
  W32(c->r[3]+0xFFFF81DCu,c->r[0]); // 80232978
L_8023297C:;
  c->r[3]=c->r[30]|c->r[30]; // 8023297C
  c->lr=0x80232984u; f_801EDEFC(c); // 80232980
  c->r[4]=c->r[3]|c->r[3]; // 80232984
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232988
  c->lr=0x80232990u; f_801EF234(c); // 8023298C
  c->r[3]=c->r[30]|c->r[30]; // 80232990
  c->r[4]=0u+0x00000000u; // 80232994
  c->lr=0x8023299Cu; f_801EDEE0(c); // 80232998
L_8023299C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023299C
  c->r[30]=R32(c->r[1]+0x00000008u); // 802329A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802329A4
  c->lr=c->r[0]; // 802329A8
  c->r[1]=c->r[1]+0x00000010u; // 802329AC
  return; // 802329B0
}

// fn_802329B4
void f_802329B4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802329B4
  c->r[0]=c->lr; // 802329B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802329BC
  c->lr=0x802329C4u; f_801ECCEC(c); // 802329C0
  c->lr=0x802329C8u; f_8022256C(c); // 802329C4
  cmps(c,0,(int32_t)c->r[3],0); // 802329C8
  if (crb(c,2)) { goto L_802329F4; } // 802329CC
  c->r[3]=0u+0x00000001u; // 802329D0
  c->r[4]=0u+0x80480000u; // 802329D4
  c->r[4]=c->r[4]+0x0000075Cu; // 802329D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802329DC
  c->lr=0x802329E4u; f_803D3760(c); // 802329E0
  c->lr=0x802329E8u; f_801E6540(c); // 802329E4
  c->lr=0x802329ECu; f_801ECCEC(c); // 802329E8
  c->r[4]=0u+0x00000000u; // 802329EC
  c->lr=0x802329F4u; f_80222564(c); // 802329F0
L_802329F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 802329F4
  c->lr=c->r[0]; // 802329F8
  c->r[1]=c->r[1]+0x00000010u; // 802329FC
  return; // 80232A00
}

// fn_80232A04
void f_80232A04(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232A04
  c->r[0]=c->lr; // 80232A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232A0C
  c->lr=0x80232A14u; f_801E65AC(c); // 80232A10
  c->r[0]=0u-c->r[3]; // 80232A14
  c->r[0]=c->r[0]|c->r[3]; // 80232A18
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80232A1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232A20
  c->lr=c->r[0]; // 80232A24
  c->r[1]=c->r[1]+0x00000010u; // 80232A28
  return; // 80232A2C
}

// fn_80232A30
void f_80232A30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232A30
  c->r[0]=c->lr; // 80232A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232A3C
  c->r[4]=0u+0x00000058u; // 80232A40
  c->r[5]=c->r[13]+0xFFFFA540u; // 80232A44
  c->r[6]=c->r[13]+0xFFFF9E20u; // 80232A48
  c->r[7]=0u+0x00000000u; // 80232A4C
  c->lr=0x80232A54u; f_802F09F8(c); // 80232A50
  c->r[31]=c->r[3]|c->r[3]; // 80232A54
  c->r[3]=0u+0x00000001u; // 80232A58
  c->r[4]=0u+0x80480000u; // 80232A5C
  c->r[4]=c->r[4]+0x0000078Cu; // 80232A60
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80232A64
  c->lr=0x80232A6Cu; f_803D3760(c); // 80232A68
  c->lr=0x80232A70u; f_801ECCEC(c); // 80232A6C
  c->r[4]=0u+0x00000001u; // 80232A70
  c->lr=0x80232A78u; f_80222564(c); // 80232A74
  c->r[3]=c->r[31]|c->r[31]; // 80232A78
  c->r[4]=0u+0x00000007u; // 80232A7C
  c->lr=0x80232A84u; f_801EDEE0(c); // 80232A80
  c->r[3]=c->r[31]|c->r[31]; // 80232A84
  c->lr=0x80232A8Cu; f_801EE384(c); // 80232A88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232A8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232A90
  c->lr=c->r[0]; // 80232A94
  c->r[1]=c->r[1]+0x00000010u; // 80232A98
  return; // 80232A9C
}

// fn_80232AA0
void f_80232AA0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232AA0
  c->r[0]=c->lr; // 80232AA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232AA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232AAC
  c->r[4]=0u+0x00000058u; // 80232AB0
  c->r[5]=c->r[13]+0xFFFFA540u; // 80232AB4
  c->r[6]=c->r[13]+0xFFFF9E20u; // 80232AB8
  c->r[7]=0u+0x00000000u; // 80232ABC
  c->lr=0x80232AC4u; f_802F09F8(c); // 80232AC0
  c->r[31]=c->r[3]|c->r[3]; // 80232AC4
  c->lr=0x80232ACCu; f_801ECCEC(c); // 80232AC8
  c->lr=0x80232AD0u; f_801ECCE4(c); // 80232ACC
  c->r[4]=c->r[3]|c->r[3]; // 80232AD0
  c->r[3]=c->r[13]+0xFFFFA530u; // 80232AD4
  c->r[4]=c->r[4]+0x00000330u; // 80232AD8
  c->r[5]=0u+0x00000112u; // 80232ADC
  c->lr=0x80232AE4u; f_801E66A0(c); // 80232AE0
  c->lr=0x80232AE8u; f_801ECCEC(c); // 80232AE4
  c->r[4]=0u+0x00000000u; // 80232AE8
  c->lr=0x80232AF0u; f_80222564(c); // 80232AEC
  c->r[3]=c->r[31]|c->r[31]; // 80232AF0
  c->r[4]=0u+0x00000007u; // 80232AF4
  c->lr=0x80232AFCu; f_801EDEE0(c); // 80232AF8
  c->r[3]=c->r[31]|c->r[31]; // 80232AFC
  c->lr=0x80232B04u; f_801EE384(c); // 80232B00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232B04
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232B08
  c->lr=c->r[0]; // 80232B0C
  c->r[1]=c->r[1]+0x00000010u; // 80232B10
  return; // 80232B14
}

// fn_80232B18
void f_80232B18(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00010000u; // 80232B18
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 80232B1C
  c->r[5]=c->r[4]+0x00000084u; // 80232B20
  c->r[4]=0u+0xF6600000u; // 80232B24
  c->r[0]=c->r[4]+0x00003D99u; // 80232B28
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80232B2C
  c->r[0]=c->r[0]+c->r[5]; // 80232B30
  c->r[0]=sraw(c,c->r[0],7); // 80232B34
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80232B38
  c->r[0]=c->r[0]+c->r[4]; // 80232B3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)133); // 80232B40
  c->r[4]=c->r[5]-c->r[0]; // 80232B44
  c->r[5]=0u+0x00000001u; // 80232B48
  f_8023218C(c); return; // 80232B4C
}

// fn_80232B50
void f_80232B50(Ctx* __restrict c) {
  c->r[4]=c->r[3]+0x00010000u; // 80232B50
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 80232B54
  c->r[5]=c->r[4]+0x00000001u; // 80232B58
  c->r[4]=0u+0xF6600000u; // 80232B5C
  c->r[0]=c->r[4]+0x00003D99u; // 80232B60
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 80232B64
  c->r[0]=c->r[0]+c->r[5]; // 80232B68
  c->r[0]=sraw(c,c->r[0],7); // 80232B6C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80232B70
  c->r[0]=c->r[0]+c->r[4]; // 80232B74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)133); // 80232B78
  c->r[4]=c->r[5]-c->r[0]; // 80232B7C
  c->r[5]=0u+0x00000001u; // 80232B80
  f_8023218C(c); return; // 80232B84
}

// fn_80232B88
void f_80232B88(Ctx* __restrict c) {
  return; // 80232B88
}

// fn_80232B8C
void f_80232B8C(Ctx* __restrict c) {
  return; // 80232B8C
}

// fn_80232B90
void f_80232B90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232B90
  c->r[0]=c->lr; // 80232B94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232B98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232B9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80232BA0
  c->r[30]=c->r[3]|c->r[3]; // 80232BA4
  c->r[4]=c->r[3]+0x00010000u; // 80232BA8
  c->r[31]=R16(c->r[4]+0xFFFF836Cu); // 80232BAC
  c->r[0]=R32(c->r[4]+0xFFFF8370u); // 80232BB0
  cmpu(c,0,c->r[0],0x0000000Bu); // 80232BB4
  if (!crb(c,2)) { goto L_80232C18; } // 80232BB8
  c->r[4]=c->r[31]|c->r[31]; // 80232BBC
  c->lr=0x80232BC4u; f_80232100(c); // 80232BC0
  cmps(c,0,(int32_t)c->r[3],0); // 80232BC4
  if (crb(c,2)) { goto L_80232C00; } // 80232BC8
  c->r[3]=c->r[30]|c->r[30]; // 80232BCC
  c->r[4]=c->r[31]|c->r[31]; // 80232BD0
  c->lr=0x80232BD8u; f_80232078(c); // 80232BD4
  cmps(c,0,(int32_t)c->r[3],0); // 80232BD8
  if (crb(c,2)) { goto L_80232BF0; } // 80232BDC
  c->r[3]=c->r[30]|c->r[30]; // 80232BE0
  c->r[4]=c->r[31]|c->r[31]; // 80232BE4
  c->lr=0x80232BECu; f_80231D10(c); // 80232BE8
  goto L_80232C18; // 80232BEC
L_80232BF0:;
  c->r[3]=c->r[30]|c->r[30]; // 80232BF0
  c->r[4]=c->r[31]|c->r[31]; // 80232BF4
  c->lr=0x80232BFCu; f_80231DEC(c); // 80232BF8
  goto L_80232C18; // 80232BFC
L_80232C00:;
  c->lr=0x80232C04u; f_8006592C(c); // 80232C00
  c->r[4]=0u+0x00000007u; // 80232C04
  c->r[5]=0u+0x00000000u; // 80232C08
  c->r[6]=0u+0xFFFFFFFFu; // 80232C0C
  c->r[7]=0u+0xFFFFFFFFu; // 80232C10
  c->lr=0x80232C18u; f_80048F20(c); // 80232C14
L_80232C18:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232C18
  c->r[30]=R32(c->r[1]+0x00000008u); // 80232C1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232C20
  c->lr=c->r[0]; // 80232C24
  c->r[1]=c->r[1]+0x00000010u; // 80232C28
  return; // 80232C2C
}

// fn_80232C30
void f_80232C30(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232C30
  c->r[0]=c->lr; // 80232C34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80232C38
  c->r[11]=c->r[1]+0x00000020u; // 80232C3C
  c->lr=0x80232C44u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80232C40
  c->r[31]=c->r[3]|c->r[3]; // 80232C44
  c->r[27]=0u+0x00000000u; // 80232C48
  c->r[30]=c->r[31]|c->r[31]; // 80232C4C
  c->r[29]=0u+0x00000000u; // 80232C50
L_80232C54:;
  c->r[3]=c->r[30]+0x00010000u; // 80232C54
  c->r[3]=R32(c->r[3]+0xFFFF816Cu); // 80232C58
  c->r[4]=0u+0x00000000u; // 80232C5C
  c->r[5]=0u+0x00000002u; // 80232C60
  c->lr=0x80232C68u; f_8021B358(c); // 80232C64
  c->r[26]=0u+0x00000000u; // 80232C68
  c->r[28]=c->r[31]+c->r[29]; // 80232C6C
L_80232C70:;
  c->r[3]=c->r[28]+0x00010000u; // 80232C70
  c->r[3]=R32(c->r[3]+0xFFFF81E0u); // 80232C74
  c->r[4]=0u+0x00000000u; // 80232C78
  c->lr=0x80232C80u; f_80224B90(c); // 80232C7C
  c->r[28]=c->r[28]+0x00000014u; // 80232C80
  c->r[26]=c->r[26]+0x00000001u; // 80232C84
  cmps(c,0,(int32_t)c->r[26],3); // 80232C88
  if (crb(c,0)) { IRQCHK(c); goto L_80232C70; } // 80232C8C
  c->r[30]=c->r[30]+0x00000004u; // 80232C90
  c->r[29]=c->r[29]+0x00000004u; // 80232C94
  c->r[27]=c->r[27]+0x00000001u; // 80232C98
  cmps(c,0,(int32_t)c->r[27],5); // 80232C9C
  if (crb(c,0)) { IRQCHK(c); goto L_80232C54; } // 80232CA0
  c->r[28]=0u+0x00000000u; // 80232CA4
  c->r[30]=c->r[31]|c->r[31]; // 80232CA8
L_80232CAC:;
  c->r[3]=c->r[30]+0x00010000u; // 80232CAC
  c->r[3]=R32(c->r[3]+0xFFFF81BCu); // 80232CB0
  c->r[4]=0u+0x00000000u; // 80232CB4
  c->lr=0x80232CBCu; f_8021B46C(c); // 80232CB8
  c->r[30]=c->r[30]+0x00000004u; // 80232CBC
  c->r[28]=c->r[28]+0x00000001u; // 80232CC0
  cmps(c,0,(int32_t)c->r[28],2); // 80232CC4
  if (crb(c,0)) { IRQCHK(c); goto L_80232CAC; } // 80232CC8
  c->r[3]=c->r[31]+0x00010000u; // 80232CCC
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 80232CD0
  c->r[4]=0u+0x00000000u; // 80232CD4
  c->lr=0x80232CDCu; f_8021B46C(c); // 80232CD8
  c->r[3]=c->r[31]+0x00010000u; // 80232CDC
  c->r[3]=R32(c->r[3]+0xFFFF81C4u); // 80232CE0
  c->r[4]=0u+0x00000000u; // 80232CE4
  c->lr=0x80232CECu; f_8021B46C(c); // 80232CE8
  c->r[3]=c->r[31]+0x00010000u; // 80232CEC
  c->r[3]=R32(c->r[3]+0xFFFF81DCu); // 80232CF0
  c->r[4]=0u+0x00000007u; // 80232CF4
  c->lr=0x80232CFCu; f_80253A10(c); // 80232CF8
  c->r[3]=c->r[31]|c->r[31]; // 80232CFC
  c->r[4]=0u+0x00000000u; // 80232D00
  c->lr=0x80232D08u; f_801EED28(c); // 80232D04
  c->r[3]=c->r[31]|c->r[31]; // 80232D08
  c->r[4]=0u+0x00000002u; // 80232D0C
  c->lr=0x80232D14u; f_801EECBC(c); // 80232D10
  c->r[3]=c->r[31]+0x00010000u; // 80232D14
  c->r[0]=R32(c->r[3]+0xFFFF8370u); // 80232D18
  cmpu(c,0,c->r[0],0x0000000Bu); // 80232D1C
  if (!crb(c,2)) { goto L_80232EB8; } // 80232D20
  c->r[26]=0u+0x00000000u; // 80232D24
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232D28
  c->lr=0x80232D30u; f_801EF5B4(c); // 80232D2C
  c->r[30]=c->r[3]|c->r[3]; // 80232D30
  c->lr=0x80232D38u; f_801ECCEC(c); // 80232D34
  c->lr=0x80232D3Cu; f_801ECCE4(c); // 80232D38
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 80232D3C
  c->r[3]=c->r[3]+c->r[0]; // 80232D40
  c->r[27]=c->r[3]+0x00000330u; // 80232D44
  c->r[3]=c->r[31]+0x00010000u; // 80232D48
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80232D4C
  c->lr=0x80232D54u; f_8004B018(c); // 80232D50
  c->r[29]=c->r[3]|c->r[3]; // 80232D54
  c->r[3]=c->r[31]+0x00010000u; // 80232D58
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80232D5C
  c->r[4]=0u+0x00000006u; // 80232D60
  c->r[5]=0u+0x00000002u; // 80232D64
  c->lr=0x80232D6Cu; f_8021B358(c); // 80232D68
  c->r[3]=c->r[31]+0x00010000u; // 80232D6C
  c->r[3]=R32(c->r[3]+0xFFFF821Cu); // 80232D70
  c->r[4]=0u+0x00000000u; // 80232D74
  c->lr=0x80232D7Cu; f_80224B90(c); // 80232D78
  c->r[28]=0u+0x00000000u; // 80232D7C
  c->r[30]=c->r[31]|c->r[31]; // 80232D80
L_80232D84:;
  c->r[3]=c->r[30]+0x00010000u; // 80232D84
  c->r[3]=R32(c->r[3]+0xFFFF8180u); // 80232D88
  c->r[4]=0u+0x00000000u; // 80232D8C
  c->lr=0x80232D94u; f_8021B46C(c); // 80232D90
  c->r[30]=c->r[30]+0x00000004u; // 80232D94
  c->r[28]=c->r[28]+0x00000001u; // 80232D98
  cmps(c,0,(int32_t)c->r[28],15); // 80232D9C
  if (crb(c,0)) { IRQCHK(c); goto L_80232D84; } // 80232DA0
  c->r[28]=0u+0x00000000u; // 80232DA4
  c->r[30]=c->r[31]|c->r[31]; // 80232DA8
L_80232DAC:;
  c->r[3]=c->r[30]+0x00010000u; // 80232DAC
  c->r[3]=R32(c->r[3]+0xFFFF81C8u); // 80232DB0
  c->r[4]=0u+0x00000000u; // 80232DB4
  c->lr=0x80232DBCu; f_8021B46C(c); // 80232DB8
  c->r[30]=c->r[30]+0x00000004u; // 80232DBC
  c->r[28]=c->r[28]+0x00000001u; // 80232DC0
  cmps(c,0,(int32_t)c->r[28],5); // 80232DC4
  if (crb(c,0)) { IRQCHK(c); goto L_80232DAC; } // 80232DC8
  goto L_80232DF8; // 80232DCC
L_80232DD0:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 80232DD0
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80232DD4
  c->r[3]=c->r[27]+c->r[26]; // 80232DD8
  W8(c->r[3]+0x00000010u,c->r[0]); // 80232DDC
  c->r[3]=c->r[31]+0x00010000u; // 80232DE0
  c->r[3]=c->r[3]+0xFFFF822Cu; // 80232DE4
  c->r[4]=c->r[29]|c->r[29]; // 80232DE8
  c->lr=0x80232DF0u; f_8028CCD8(c); // 80232DEC
  c->r[29]=c->r[3]|c->r[3]; // 80232DF0
  c->r[26]=c->r[26]+0x00000001u; // 80232DF4
L_80232DF8:;
  cmps(c,0,(int32_t)c->r[29],0); // 80232DF8
  if (!crb(c,2)) { IRQCHK(c); goto L_80232DD0; } // 80232DFC
  c->r[3]=c->r[31]+0x00010000u; // 80232E00
  c->r[0]=R32(c->r[3]+0xFFFF8368u); // 80232E04
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80232E08
  W8(c->r[27]+0x0000001Fu,c->r[0]); // 80232E0C
  c->r[3]=c->r[31]|c->r[31]; // 80232E10
  c->r[4]=0u+0x0000000Au; // 80232E14
  c->lr=0x80232E1Cu; f_801EDEF0(c); // 80232E18
  c->r[3]=c->r[31]|c->r[31]; // 80232E1C
  c->r[4]=0u+0x00000005u; // 80232E20
  c->lr=0x80232E28u; f_801EDEE0(c); // 80232E24
  c->r[0]=0u+0x00000000u; // 80232E28
  c->r[3]=c->r[31]+0x00010000u; // 80232E2C
  W32(c->r[3]+0xFFFF8364u,c->r[0]); // 80232E30
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232E34
  c->r[4]=0u+0x00000004u; // 80232E38
  c->lr=0x80232E40u; f_801EF41C(c); // 80232E3C
  c->r[4]=c->r[3]|c->r[3]; // 80232E40
  c->r[3]=c->r[31]|c->r[31]; // 80232E44
  c->r[5]=0u+0x00000000u; // 80232E48
  c->lr=0x80232E50u; f_801EE164(c); // 80232E4C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232E50
  c->r[4]=0u+0x00000005u; // 80232E54
  c->lr=0x80232E5Cu; f_801EF41C(c); // 80232E58
  c->r[4]=c->r[3]|c->r[3]; // 80232E5C
  c->r[3]=c->r[31]|c->r[31]; // 80232E60
  c->r[5]=0u+0x80230000u; // 80232E64
  c->r[5]=c->r[5]+0x00002A30u; // 80232E68
  c->lr=0x80232E70u; f_801EE6AC(c); // 80232E6C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80232E70
  c->r[4]=0u+0x00000006u; // 80232E74
  c->lr=0x80232E7Cu; f_801EF41C(c); // 80232E78
  c->r[4]=c->r[3]|c->r[3]; // 80232E7C
  c->r[3]=c->r[31]|c->r[31]; // 80232E80
  c->r[5]=0u+0x80230000u; // 80232E84
  c->r[5]=c->r[5]+0x00002AA0u; // 80232E88
  c->lr=0x80232E90u; f_801EE6AC(c); // 80232E8C
  c->r[3]=c->r[31]|c->r[31]; // 80232E90
  c->r[4]=0u+0x00000001u; // 80232E94
  c->lr=0x80232E9Cu; f_801ED3F4(c); // 80232E98
  c->lr=0x80232EA0u; f_8006592C(c); // 80232E9C
  c->r[4]=0u+0x00000001u; // 80232EA0
  c->r[5]=0u+0x00000000u; // 80232EA4
  c->r[6]=0u+0xFFFFFFFFu; // 80232EA8
  c->r[7]=0u+0xFFFFFFFFu; // 80232EAC
  c->lr=0x80232EB4u; f_80048F20(c); // 80232EB0
  goto L_80232F14; // 80232EB4
L_80232EB8:;
  c->r[3]=R32(c->r[3]+0xFFFF8220u); // 80232EB8
  c->r[4]=0u+0x00000000u; // 80232EBC
  c->lr=0x80232EC4u; f_80224B90(c); // 80232EC0
  c->r[3]=c->r[31]+0x00010000u; // 80232EC4
  c->r[3]=R32(c->r[3]+0xFFFF8224u); // 80232EC8
  c->r[4]=0u+0x00000000u; // 80232ECC
  c->lr=0x80232ED4u; f_80224B90(c); // 80232ED0
  c->r[3]=c->r[31]+0x00010000u; // 80232ED4
  c->r[3]=R32(c->r[3]+0xFFFF8228u); // 80232ED8
  c->r[4]=0u+0x00000000u; // 80232EDC
  c->lr=0x80232EE4u; f_80224B90(c); // 80232EE0
  c->r[3]=c->r[31]|c->r[31]; // 80232EE4
  c->r[4]=0u+0x0000000Eu; // 80232EE8
  c->lr=0x80232EF0u; f_801EDEF0(c); // 80232EEC
  c->r[3]=c->r[31]|c->r[31]; // 80232EF0
  c->r[4]=0u+0x00000008u; // 80232EF4
  c->lr=0x80232EFCu; f_801EDEE0(c); // 80232EF8
  c->lr=0x80232F00u; f_8006592C(c); // 80232EFC
  c->r[4]=0u+0x00000001u; // 80232F00
  c->r[5]=0u+0x00000000u; // 80232F04
  c->r[6]=0u+0xFFFFFFFFu; // 80232F08
  c->r[7]=0u+0xFFFFFFFFu; // 80232F0C
  c->lr=0x80232F14u; f_80048F20(c); // 80232F10
L_80232F14:;
  c->r[11]=c->r[1]+0x00000020u; // 80232F14
  c->lr=0x80232F1Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80232F18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80232F1C
  c->lr=c->r[0]; // 80232F20
  c->r[1]=c->r[1]+0x00000020u; // 80232F24
  return; // 80232F28
}

// fn_80232F2C
void f_80232F2C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232F2C
  c->r[0]=c->lr; // 80232F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232F34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232F38
  c->r[31]=c->r[3]|c->r[3]; // 80232F3C
  c->lr=0x80232F44u; f_801ECD20(c); // 80232F40
  c->r[3]=0u+0x80480000u; // 80232F44
  c->r[0]=c->r[3]+0x00000880u; // 80232F48
  W32(c->r[31]+0x00000058u,c->r[0]); // 80232F4C
  c->r[3]=c->r[31]+0x00010000u; // 80232F50
  c->r[0]=0u+0x00000000u; // 80232F54
  W32(c->r[3]+0xFFFF8168u,c->r[0]); // 80232F58
  W32(c->r[3]+0xFFFF8178u,c->r[0]); // 80232F5C
  W32(c->r[3]+0xFFFF816Cu,c->r[0]); // 80232F60
  W32(c->r[3]+0xFFFF817Cu,c->r[0]); // 80232F64
  W32(c->r[3]+0xFFFF8170u,c->r[0]); // 80232F68
  W32(c->r[3]+0xFFFF8180u,c->r[0]); // 80232F6C
  W32(c->r[3]+0xFFFF8174u,c->r[0]); // 80232F70
  W32(c->r[3]+0xFFFF8184u,c->r[0]); // 80232F74
  c->r[3]=c->r[31]|c->r[31]; // 80232F78
  c->r[4]=0u+0x00000000u; // 80232F7C
  c->lr=0x80232F84u; f_801EDEE0(c); // 80232F80
  c->r[3]=c->r[31]|c->r[31]; // 80232F84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232F88
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232F8C
  c->lr=c->r[0]; // 80232F90
  c->r[1]=c->r[1]+0x00000010u; // 80232F94
  return; // 80232F98
}

// fn_80232F9C
void f_80232F9C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232F9C
  c->r[0]=c->lr; // 80232FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80232FA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80232FA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80232FAC
  c->r[30]=c->r[3]|c->r[3]; // 80232FB0
  c->r[31]=c->r[4]|c->r[4]; // 80232FB4
  cmps(c,0,(int32_t)c->r[3],0); // 80232FB8
  if (crb(c,2)) { goto L_80232FDC; } // 80232FBC
  c->r[4]=0u+0x00000000u; // 80232FC0
  c->lr=0x80232FC8u; f_801ECF20(c); // 80232FC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80232FC8
  cmps(c,0,(int32_t)c->r[0],0); // 80232FCC
  if (!crb(c,1)) { goto L_80232FDC; } // 80232FD0
  c->r[3]=c->r[30]|c->r[30]; // 80232FD4
  c->lr=0x80232FDCu; f_80047B20(c); // 80232FD8
L_80232FDC:;
  c->r[3]=c->r[30]|c->r[30]; // 80232FDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80232FE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80232FE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80232FE8
  c->lr=c->r[0]; // 80232FEC
  c->r[1]=c->r[1]+0x00000010u; // 80232FF0
  return; // 80232FF4
}

// fn_80232FF8
void f_80232FF8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80232FF8
  c->r[0]=c->lr; // 80232FFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233004
  c->r[31]=c->r[3]|c->r[3]; // 80233008
  c->r[0]=R32(c->r[3]+0x000000B0u); // 8023300C
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80233010
  c->r[4]=0u+0x80430000u; // 80233014
  c->r[0]=c->r[4]+0x00004018u; // 80233018
  c->r[12]=c->r[0]+c->r[5]; // 8023301C
  c->lr=0x80233024u; f_802F09D0(c); // 80233020
  c->r[0]=c->r[0]|0x00000000u; // 80233024
  c->r[3]=c->r[31]|c->r[31]; // 80233028
  c->lr=0x80233030u; f_801ED0E4(c); // 8023302C
  c->r[3]=c->r[31]|c->r[31]; // 80233030
  c->r[12]=R32(c->r[3]+0x00000058u); // 80233034
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80233038
  c->ctr=c->r[12]; // 8023303C
  if (true) { c->lr=0x80233044u; dispatch(c,c->ctr); } // 80233040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233044
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233048
  c->lr=c->r[0]; // 8023304C
  c->r[1]=c->r[1]+0x00000010u; // 80233050
  return; // 80233054
}

// fn_80233058
void f_80233058(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 80233058
  f_801EDEE0(c); return; // 8023305C
}

// fn_80233060
void f_80233060(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233060
  c->r[0]=c->lr; // 80233064
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233068
  c->lr=0x80233070u; f_801EDEE8(c); // 8023306C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80233070
  c->r[0]=cntlz(c->r[0]); // 80233074
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 80233078
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023307C
  c->lr=c->r[0]; // 80233080
  c->r[1]=c->r[1]+0x00000010u; // 80233084
  return; // 80233088
}

// fn_8023308C
void f_8023308C(Ctx* __restrict c) {
  return; // 8023308C
}

// fn_80233090
void f_80233090(Ctx* __restrict c) {
  c->r[3]=0u+0x00000001u; // 80233090
  return; // 80233094
}

// fn_80233098
void f_80233098(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233098
  c->r[0]=c->lr; // 8023309C
  W32(c->r[1]+0x00000164u,c->r[0]); // 802330A0
  {uint32_t ea=c->r[1]+0x00000150u; WF64(ea,c->f[31]);} // 802330A4
  {uint32_t ea=c->r[1]+0x00000158u; psq_store(c,31,ea,0,0);} // 802330A8
  {uint32_t ea=c->r[1]+0x00000140u; WF64(ea,c->f[30]);} // 802330AC
  {uint32_t ea=c->r[1]+0x00000148u; psq_store(c,30,ea,0,0);} // 802330B0
  {uint32_t ea=c->r[1]+0x00000130u; WF64(ea,c->f[29]);} // 802330B4
  {uint32_t ea=c->r[1]+0x00000138u; psq_store(c,29,ea,0,0);} // 802330B8
  c->r[11]=c->r[1]+0x00000130u; // 802330BC
  c->lr=0x802330C4u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 802330C0
  c->r[31]=c->r[3]|c->r[3]; // 802330C4
  c->r[4]=0u+0x0000000Au; // 802330C8
  c->r[5]=0u+0x00000000u; // 802330CC
  c->r[6]=0u+0x00000002u; // 802330D0
  c->r[7]=0u+0x00000003u; // 802330D4
  c->lr=0x802330DCu; f_801EDF08(c); // 802330D8
  c->r[4]=c->r[31]+0x00010000u; // 802330DC
  W32(c->r[4]+0xFFFF80FCu,c->r[3]); // 802330E0
  {uint32_t ea=c->r[2]+0xFFFF9AF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 802330E4
  {uint32_t ea=c->r[2]+0xFFFF9AFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 802330E8
  c->lr=0x802330F0u; f_8021B27C(c); // 802330EC
  c->r[3]=c->r[31]+0x00010000u; // 802330F0
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 802330F4
  c->r[4]=0u+0x00000001u; // 802330F8
  c->r[5]=0u+0x00000000u; // 802330FC
  c->lr=0x80233104u; f_8021B47C(c); // 80233100
  c->r[3]=c->r[31]+0x00010000u; // 80233104
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 80233108
  c->r[4]=0u+0x00000000u; // 8023310C
  c->lr=0x80233114u; f_8021B46C(c); // 80233110
  c->r[3]=c->r[31]|c->r[31]; // 80233114
  c->r[4]=0u+0x00000000u; // 80233118
  c->r[5]=0u+0xFFFFFFFFu; // 8023311C
  c->r[6]=0u+0x00000001u; // 80233120
  c->lr=0x80233128u; f_801EE9C0(c); // 80233124
  c->r[28]=0u+0x00000000u; // 80233128
  c->r[27]=0u+0x00000000u; // 8023312C
  c->r[29]=c->r[31]|c->r[31]; // 80233130
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[29]=RF64(ea);} // 80233134
  c->r[30]=0u+0x43300000u; // 80233138
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[30]=c->ps1[30]=RF32(ea);} // 8023313C
  {uint32_t ea=c->r[2]+0xFFFF9B04u; c->f[31]=c->ps1[31]=RF32(ea);} // 80233140
L_80233144:;
  c->r[3]=c->r[31]|c->r[31]; // 80233144
  c->r[4]=0u+0x00000009u; // 80233148
  c->r[5]=c->r[27]|c->r[27]; // 8023314C
  c->r[6]=0u+0x00000002u; // 80233150
  c->r[7]=0u+0x00000003u; // 80233154
  c->lr=0x8023315Cu; f_801EDF08(c); // 80233158
  c->r[4]=c->r[29]+0x00010000u; // 8023315C
  W32(c->r[4]+0xFFFF8168u,c->r[3]); // 80233160
  c->r[3]=R32(c->r[4]+0xFFFF8168u); // 80233164
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[1]=c->ps1[1]=RF32(ea);} // 80233168
  c->r[0]=c->r[28]^0x80000000u; // 8023316C
  W32(c->r[1]+0x00000114u,c->r[0]); // 80233170
  W32(c->r[1]+0x00000110u,c->r[30]); // 80233174
  {uint32_t ea=c->r[1]+0x00000110u; c->f[0]=RF64(ea);} // 80233178
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[29]); // 8023317C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 80233180
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[0]); // 80233184
  c->lr=0x8023318Cu; f_8021B27C(c); // 80233188
  c->r[3]=c->r[29]+0x00010000u; // 8023318C
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233190
  c->r[4]=0u+0x00000080u; // 80233194
  c->r[5]=0u+0x00000000u; // 80233198
  c->lr=0x802331A0u; f_8021B47C(c); // 8023319C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802331A0
  c->r[4]=c->r[28]+0x00000002u; // 802331A4
  c->lr=0x802331ACu; f_801EF41C(c); // 802331A8
  c->r[4]=c->r[3]|c->r[3]; // 802331AC
  c->r[3]=c->r[31]|c->r[31]; // 802331B0
  c->r[5]=c->r[29]+0x00010000u; // 802331B4
  c->r[5]=R32(c->r[5]+0xFFFF8168u); // 802331B8
  c->lr=0x802331C0u; f_801EDFF4(c); // 802331BC
  c->r[4]=c->r[29]+0x00010000u; // 802331C0
  W32(c->r[4]+0xFFFF8178u,c->r[3]); // 802331C4
  c->r[3]=R32(c->r[4]+0xFFFF8178u); // 802331C8
  {uint32_t ea=c->r[2]+0xFFFF9B0Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 802331CC
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[2]=c->ps1[2]=RF32(ea);} // 802331D0
  c->r[4]=0u+0x00000000u; // 802331D4
  c->lr=0x802331DCu; f_802249E8(c); // 802331D8
  c->r[3]=c->r[29]+0x00010000u; // 802331DC
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 802331E0
  c->r[4]=0u+0x00000001u; // 802331E4
  c->r[5]=0u+0x00000001u; // 802331E8
  c->lr=0x802331F0u; f_802249B4(c); // 802331EC
  c->r[3]=c->r[31]|c->r[31]; // 802331F0
  c->r[4]=c->r[28]|c->r[28]; // 802331F4
  c->r[5]=0u+0x00000000u; // 802331F8
  c->lr=0x80233200u; f_8023334C(c); // 802331FC
  cmps(c,0,(int32_t)c->r[27],0); // 80233200
  if (!crb(c,2)) { goto L_80233210; } // 80233204
  c->r[3]=c->r[29]+0x00010000u; // 80233208
  c->r[27]=R32(c->r[3]+0xFFFF8168u); // 8023320C
L_80233210:;
  c->r[29]=c->r[29]+0x00000004u; // 80233210
  c->r[28]=c->r[28]+0x00000001u; // 80233214
  cmps(c,0,(int32_t)c->r[28],3); // 80233218
  if (crb(c,0)) { IRQCHK(c); goto L_80233144; } // 8023321C
  c->r[3]=c->r[31]|c->r[31]; // 80233220
  c->r[4]=0u+0x00000005u; // 80233224
  c->r[5]=0u+0x00000000u; // 80233228
  c->r[6]=0u+0x00000002u; // 8023322C
  c->r[7]=0u+0x00000003u; // 80233230
  c->lr=0x80233238u; f_801EDF08(c); // 80233234
  c->r[4]=c->r[31]+0x00010000u; // 80233238
  W32(c->r[4]+0xFFFF8174u,c->r[3]); // 8023323C
  {uint32_t ea=c->r[2]+0xFFFF9B14u; c->f[1]=c->ps1[1]=RF32(ea);} // 80233240
  c->lr=0x80233248u; f_8021B290(c); // 80233244
  c->r[3]=c->r[31]+0x00010000u; // 80233248
  c->r[3]=R32(c->r[3]+0xFFFF8174u); // 8023324C
  c->r[4]=0u+0x00000085u; // 80233250
  c->r[5]=0u+0x00000000u; // 80233254
  c->lr=0x8023325Cu; f_8021B47C(c); // 80233258
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 8023325C
  c->lr=0x80233264u; f_801EF5B4(c); // 80233260
  c->r[30]=c->r[3]|c->r[3]; // 80233264
  c->lr=0x8023326Cu; f_801ECCEC(c); // 80233268
  c->lr=0x80233270u; f_801ECCE4(c); // 8023326C
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 80233270
  c->r[3]=c->r[3]+c->r[0]; // 80233274
  c->r[27]=c->r[3]+0x00000330u; // 80233278
  c->r[0]=0u+0x00000080u; // 8023327C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80233280
  c->r[0]=0u+0x00000008u; // 80233284
  W32(c->r[1]+0x00000008u,c->r[0]); // 80233288
  c->r[3]=c->r[1]+0x00000010u; // 8023328C
  c->r[4]=0u+0x00000000u; // 80233290
  c->r[5]=0u+0x00000080u; // 80233294
  c->lr=0x8023329Cu; f_800060B8(c); // 80233298
  c->r[3]=c->r[1]+0x00000010u; // 8023329C
  c->r[4]=c->r[1]+0x0000000Cu; // 802332A0
  c->r[5]=c->r[27]|c->r[27]; // 802332A4
  c->r[6]=c->r[1]+0x00000008u; // 802332A8
  c->lr=0x802332B0u; f_8040C924(c); // 802332AC
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802332B0
  c->r[4]=0u+0x00000001u; // 802332B4
  c->lr=0x802332BCu; f_801EF41C(c); // 802332B8
  c->r[4]=c->r[3]|c->r[3]; // 802332BC
  c->r[3]=c->r[1]+0x00000090u; // 802332C0
  c->r[5]=c->r[30]+0x00000001u; // 802332C4
  c->r[6]=c->r[1]+0x00000010u; // 802332C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802332CC
  c->lr=0x802332D4u; f_802E7CC4(c); // 802332D0
  c->r[3]=c->r[31]|c->r[31]; // 802332D4
  c->r[4]=c->r[1]+0x00000090u; // 802332D8
  c->r[5]=c->r[31]+0x00010000u; // 802332DC
  c->r[5]=R32(c->r[5]+0xFFFF8174u); // 802332E0
  c->lr=0x802332E8u; f_801EDFF4(c); // 802332E4
  c->r[4]=c->r[31]+0x00010000u; // 802332E8
  W32(c->r[4]+0xFFFF8184u,c->r[3]); // 802332EC
  {uint32_t ea=c->r[2]+0xFFFF9B18u; c->f[1]=c->ps1[1]=RF32(ea);} // 802332F0
  {uint32_t ea=c->r[2]+0xFFFF9B1Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802332F4
  c->r[4]=0u+0x00000001u; // 802332F8
  c->lr=0x80233300u; f_802249E8(c); // 802332FC
  c->r[3]=c->r[31]+0x00010000u; // 80233300
  c->r[3]=R32(c->r[3]+0xFFFF8184u); // 80233304
  c->r[4]=0u+0x00000000u; // 80233308
  c->lr=0x80233310u; f_80224B90(c); // 8023330C
  c->r[0]=0u+0x00000158u; // 80233310
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80233314
  {uint32_t ea=c->r[1]+0x00000150u; c->f[31]=RF64(ea);} // 80233318
  c->r[0]=0u+0x00000148u; // 8023331C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,30,ea,0,0);} // 80233320
  {uint32_t ea=c->r[1]+0x00000140u; c->f[30]=RF64(ea);} // 80233324
  c->r[0]=0u+0x00000138u; // 80233328
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,29,ea,0,0);} // 8023332C
  {uint32_t ea=c->r[1]+0x00000130u; c->f[29]=RF64(ea);} // 80233330
  c->r[11]=c->r[1]+0x00000130u; // 80233334
  c->lr=0x8023333Cu; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80233338
  c->r[0]=R32(c->r[1]+0x00000164u); // 8023333C
  c->lr=c->r[0]; // 80233340
  c->r[1]=c->r[1]+0x00000160u; // 80233344
  return; // 80233348
}

// fn_8023334C
void f_8023334C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023334C
  c->r[0]=c->lr; // 80233350
  W32(c->r[1]+0x00000034u,c->r[0]); // 80233354
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80233358
  W32(c->r[1]+0x00000028u,c->r[30]); // 8023335C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80233360
  c->r[29]=c->r[3]|c->r[3]; // 80233364
  c->r[31]=c->r[4]|c->r[4]; // 80233368
  c->r[30]=c->r[5]|c->r[5]; // 8023336C
  c->r[3]=c->r[1]+0x0000000Cu; // 80233370
  c->lr=0x80233378u; f_80047C5C(c); // 80233374
  cmps(c,0,(int32_t)c->r[30],0); // 80233378
  if (crb(c,2)) { goto L_802333A8; } // 8023337C
  c->r[3]=c->r[29]+0x00010000u; // 80233380
  W32(c->r[3]+0xFFFF80D4u,c->r[31]); // 80233384
  c->r[30]=0u+0x00000001u; // 80233388
  c->r[3]=0u+0x000000FFu; // 8023338C
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80233390
  W8(c->r[1]+0x0000000Du,c->r[3]); // 80233394
  c->r[0]=0u+0x00000000u; // 80233398
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 8023339C
  W8(c->r[1]+0x0000000Fu,c->r[3]); // 802333A0
  goto L_802333C0; // 802333A4
L_802333A8:;
  c->r[30]=0u+0x00000000u; // 802333A8
  c->r[0]=0u+0x000000FFu; // 802333AC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 802333B0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 802333B4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 802333B8
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 802333BC
L_802333C0:;
  c->r[3]=c->r[1]+0x00000008u; // 802333C0
  c->r[4]=c->r[1]+0x0000000Cu; // 802333C4
  c->lr=0x802333CCu; f_800549FC(c); // 802333C8
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 802333CC
  c->r[0]=c->r[29]+0x00010000u; // 802333D0
  c->r[3]=c->r[0]+c->r[31]; // 802333D4
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 802333D8
  c->r[4]=c->r[1]+0x00000008u; // 802333DC
  c->lr=0x802333E4u; f_801ECCDC(c); // 802333E0
  c->r[3]=c->r[1]+0x00000008u; // 802333E4
  c->r[4]=0u+0xFFFFFFFFu; // 802333E8
  c->lr=0x802333F0u; f_80047BD4(c); // 802333EC
  c->r[0]=c->r[29]+0x00010000u; // 802333F0
  c->r[3]=c->r[0]+c->r[31]; // 802333F4
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 802333F8
  c->r[4]=0u+0x00000002u; // 802333FC
  c->r[5]=c->r[30]|c->r[30]; // 80233400
  c->lr=0x80233408u; f_8021B358(c); // 80233404
  c->r[4]=c->r[29]+0x00010000u; // 80233408
  c->r[3]=R32(c->r[4]+0xFFFF80FCu); // 8023340C
  c->r[0]=R32(c->r[4]+0xFFFF80D4u); // 80233410
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[1]=RF64(ea);} // 80233414
  c->r[0]=c->r[0]^0x80000000u; // 80233418
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023341C
  c->r[0]=0u+0x43300000u; // 80233420
  W32(c->r[1]+0x00000010u,c->r[0]); // 80233424
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80233428
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8023342C
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[0]=c->ps1[0]=RF32(ea);} // 80233430
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 80233434
  {uint32_t ea=c->r[2]+0xFFFF9B04u; c->f[0]=c->ps1[0]=RF32(ea);} // 80233438
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[1]); // 8023343C
  c->lr=0x80233444u; f_8021B290(c); // 80233440
  c->r[3]=c->r[29]|c->r[29]; // 80233444
  c->r[4]=c->r[29]+0x00010000u; // 80233448
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 8023344C
  c->r[4]=c->r[4]+0x00000005u; // 80233450
  c->lr=0x80233458u; f_801EEC68(c); // 80233454
  c->r[3]=c->r[1]+0x0000000Cu; // 80233458
  c->r[4]=0u+0xFFFFFFFFu; // 8023345C
  c->lr=0x80233464u; f_80047BD4(c); // 80233460
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80233464
  c->r[30]=R32(c->r[1]+0x00000028u); // 80233468
  c->r[29]=R32(c->r[1]+0x00000024u); // 8023346C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80233470
  c->lr=c->r[0]; // 80233474
  c->r[1]=c->r[1]+0x00000030u; // 80233478
  return; // 8023347C
}

// fn_80233480
void f_80233480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233480
  c->r[0]=c->lr; // 80233484
  W32(c->r[1]+0x00000024u,c->r[0]); // 80233488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8023348C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80233490
  W32(c->r[1]+0x00000014u,c->r[29]); // 80233494
  W32(c->r[1]+0x00000010u,c->r[28]); // 80233498
  c->r[4]=0u+0x00000058u; // 8023349C
  c->r[5]=c->r[13]+0xFFFFA550u; // 802334A0
  c->r[6]=c->r[13]+0xFFFF9E20u; // 802334A4
  c->r[7]=0u+0x00000000u; // 802334A8
  c->lr=0x802334B0u; f_802F09F8(c); // 802334AC
  c->r[29]=c->r[3]|c->r[3]; // 802334B0
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802334B4
  c->lr=0x802334BCu; f_801EF5B4(c); // 802334B8
  c->r[30]=c->r[3]|c->r[3]; // 802334BC
  c->lr=0x802334C4u; f_801ECCEC(c); // 802334C0
  c->lr=0x802334C8u; f_801ECCE4(c); // 802334C4
  c->r[28]=c->r[3]+0x00000330u; // 802334C8
  c->r[3]=R16(c->r[28]+0x00000110u); // 802334CC
  c->r[0]=0u+0x00000001u; // 802334D0
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[0]<<((c->r[30])&31)); // 802334D4
  c->r[0]=~(c->r[0]|c->r[0]); // 802334D8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 802334DC
  c->r[0]=c->r[3]&c->r[0]; // 802334E0
  W16(c->r[28]+0x00000110u,c->r[0]); // 802334E4
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 802334E8
  c->r[30]=0u+0x00000000u; // 802334EC
  c->r[31]=c->r[28]+c->r[0]; // 802334F0
  W8(c->r[31]+0x0000001Fu,c->r[30]); // 802334F4
  c->r[3]=c->r[31]|c->r[31]; // 802334F8
  c->r[4]=0u+0x00000000u; // 802334FC
  c->r[5]=0u+0x00000010u; // 80233500
  c->lr=0x80233508u; f_800060B8(c); // 80233504
  W8(c->r[31]+0x00000010u,c->r[30]); // 80233508
  W8(c->r[31]+0x00000011u,c->r[30]); // 8023350C
  W8(c->r[31]+0x00000012u,c->r[30]); // 80233510
  W8(c->r[31]+0x00000013u,c->r[30]); // 80233514
  W8(c->r[31]+0x00000014u,c->r[30]); // 80233518
  W8(c->r[31]+0x00000015u,c->r[30]); // 8023351C
  W8(c->r[31]+0x00000016u,c->r[30]); // 80233520
  W8(c->r[31]+0x00000017u,c->r[30]); // 80233524
  W8(c->r[31]+0x00000018u,c->r[30]); // 80233528
  W8(c->r[31]+0x00000019u,c->r[30]); // 8023352C
  W8(c->r[31]+0x0000001Au,c->r[30]); // 80233530
  W8(c->r[31]+0x0000001Bu,c->r[30]); // 80233534
  W8(c->r[31]+0x0000001Cu,c->r[30]); // 80233538
  W8(c->r[31]+0x0000001Du,c->r[30]); // 8023353C
  W8(c->r[31]+0x0000001Eu,c->r[30]); // 80233540
  c->r[3]=c->r[13]+0xFFFFA548u; // 80233544
  c->r[4]=c->r[28]|c->r[28]; // 80233548
  c->r[5]=0u+0x00000112u; // 8023354C
  c->lr=0x80233554u; f_801E6644(c); // 80233550
  c->lr=0x80233558u; f_801ECCEC(c); // 80233554
  c->r[4]=0u+0x00000001u; // 80233558
  c->lr=0x80233560u; f_80222564(c); // 8023355C
  c->r[3]=c->r[29]|c->r[29]; // 80233560
  c->lr=0x80233568u; f_801EE384(c); // 80233564
  c->r[3]=c->r[29]|c->r[29]; // 80233568
  c->r[4]=0u+0x00000006u; // 8023356C
  c->lr=0x80233574u; f_801EDEE0(c); // 80233570
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80233574
  c->r[30]=R32(c->r[1]+0x00000018u); // 80233578
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023357C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80233580
  c->r[0]=R32(c->r[1]+0x00000024u); // 80233584
  c->lr=c->r[0]; // 80233588
  c->r[1]=c->r[1]+0x00000020u; // 8023358C
  return; // 80233590
}

// fn_80233594
void f_80233594(Ctx* __restrict c) {
  return; // 80233594
}

// fn_80233598
void f_80233598(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233598
  c->r[0]=c->lr; // 8023359C
  W32(c->r[1]+0x00000014u,c->r[0]); // 802335A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802335A4
  c->r[31]=c->r[3]|c->r[3]; // 802335A8
  c->lr=0x802335B0u; f_80233098(c); // 802335AC
  c->lr=0x802335B4u; f_8006592C(c); // 802335B0
  c->r[4]=0u+0x00000000u; // 802335B4
  c->r[5]=0u+0x00000000u; // 802335B8
  c->r[6]=0u+0xFFFFFFFFu; // 802335BC
  c->r[7]=0u+0xFFFFFFFFu; // 802335C0
  c->lr=0x802335C8u; f_80048F20(c); // 802335C4
  c->r[3]=c->r[31]|c->r[31]; // 802335C8
  c->r[4]=0u+0x00000002u; // 802335CC
  c->lr=0x802335D4u; f_801EDEE0(c); // 802335D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802335D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802335D8
  c->lr=c->r[0]; // 802335DC
  c->r[1]=c->r[1]+0x00000010u; // 802335E0
  return; // 802335E4
}

// fn_802335E8
void f_802335E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802335E8
  c->r[0]=c->lr; // 802335EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802335F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802335F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802335F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802335FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80233600
  c->r[28]=c->r[3]|c->r[3]; // 80233604
  c->r[0]=0u+0x00000001u; // 80233608
  c->r[29]=0u+0x00000000u; // 8023360C
  c->r[30]=c->r[28]|c->r[28]; // 80233610
L_80233614:;
  c->r[31]=0u+0x00000000u; // 80233614
  cmps(c,0,(int32_t)c->r[0],0); // 80233618
  if (crb(c,2)) { goto L_8023363C; } // 8023361C
  c->r[3]=c->r[30]+0x00010000u; // 80233620
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233624
  c->r[4]=0u+0x00000000u; // 80233628
  c->lr=0x80233630u; f_8021B3FC(c); // 8023362C
  cmps(c,0,(int32_t)c->r[3],0); // 80233630
  if (crb(c,2)) { goto L_8023363C; } // 80233634
  c->r[31]=0u+0x00000001u; // 80233638
L_8023363C:;
  c->r[0]=c->r[31]|c->r[31]; // 8023363C
  c->r[30]=c->r[30]+0x00000004u; // 80233640
  c->r[29]=c->r[29]+0x00000001u; // 80233644
  cmps(c,0,(int32_t)c->r[29],3); // 80233648
  if (crb(c,0)) { IRQCHK(c); goto L_80233614; } // 8023364C
  cmps(c,0,(int32_t)c->r[31],0); // 80233650
  if (crb(c,2)) { goto L_802336C8; } // 80233654
  c->r[3]=c->r[28]|c->r[28]; // 80233658
  c->r[4]=0u+0x00000001u; // 8023365C
  c->lr=0x80233664u; f_801EED28(c); // 80233660
  c->r[29]=0u+0x00000000u; // 80233664
  c->r[31]=c->r[28]|c->r[28]; // 80233668
L_8023366C:;
  c->r[3]=c->r[31]+0x00010000u; // 8023366C
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 80233670
  c->r[4]=0u+0x00000001u; // 80233674
  c->lr=0x8023367Cu; f_80224B90(c); // 80233678
  c->r[31]=c->r[31]+0x00000004u; // 8023367C
  c->r[29]=c->r[29]+0x00000001u; // 80233680
  cmps(c,0,(int32_t)c->r[29],3); // 80233684
  if (crb(c,0)) { IRQCHK(c); goto L_8023366C; } // 80233688
  c->r[3]=c->r[28]+0x00010000u; // 8023368C
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 80233690
  c->r[4]=0u+0x00000001u; // 80233694
  c->lr=0x8023369Cu; f_8021B46C(c); // 80233698
  c->r[3]=c->r[28]+0x00010000u; // 8023369C
  c->r[3]=R32(c->r[3]+0xFFFF8184u); // 802336A0
  c->r[4]=0u+0x00000001u; // 802336A4
  c->lr=0x802336ACu; f_80224B90(c); // 802336A8
  c->r[3]=c->r[28]|c->r[28]; // 802336AC
  c->r[4]=0u+0x00000000u; // 802336B0
  c->r[5]=0u+0x00000001u; // 802336B4
  c->lr=0x802336BCu; f_8023334C(c); // 802336B8
  c->r[3]=c->r[28]|c->r[28]; // 802336BC
  c->r[4]=0u+0x00000003u; // 802336C0
  c->lr=0x802336C8u; f_801EDEE0(c); // 802336C4
L_802336C8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 802336C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 802336CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 802336D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 802336D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 802336D8
  c->lr=c->r[0]; // 802336DC
  c->r[1]=c->r[1]+0x00000020u; // 802336E0
  return; // 802336E4
}

// fn_802336E8
void f_802336E8(Ctx* __restrict c) {
  f_801ED56C(c); return; // 802336E8
}

// fn_802336EC
void f_802336EC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802336EC
  c->r[0]=c->lr; // 802336F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 802336F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802336F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 802336FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80233700
  c->r[29]=c->r[3]|c->r[3]; // 80233704
  c->r[3]=c->r[3]+0x00010000u; // 80233708
  c->r[0]=R32(c->r[3]+0xFFFF80D4u); // 8023370C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233710
  c->r[3]=c->r[3]+c->r[0]; // 80233714
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233718
  cmps(c,0,(int32_t)c->r[3],0); // 8023371C
  if (crb(c,2)) { goto L_80233808; } // 80233720
  c->r[4]=0u+0x00000000u; // 80233724
  c->lr=0x8023372Cu; f_8021B3FC(c); // 80233728
  cmps(c,0,(int32_t)c->r[3],0); // 8023372C
  if (crb(c,2)) { goto L_80233808; } // 80233730
  c->r[30]=0u+0x00000000u; // 80233734
  c->r[31]=c->r[29]|c->r[29]; // 80233738
L_8023373C:;
  c->r[3]=c->r[31]+0x00010000u; // 8023373C
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 80233740
  cmps(c,0,(int32_t)c->r[3],0); // 80233744
  if (crb(c,2)) { goto L_80233754; } // 80233748
  c->r[4]=0u+0x00000000u; // 8023374C
  c->lr=0x80233754u; f_80224B90(c); // 80233750
L_80233754:;
  c->r[3]=c->r[31]+0x00010000u; // 80233754
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233758
  cmps(c,0,(int32_t)c->r[3],0); // 8023375C
  if (crb(c,2)) { goto L_80233770; } // 80233760
  c->r[4]=0u+0x00000000u; // 80233764
  c->r[5]=0u+0x00000003u; // 80233768
  c->lr=0x80233770u; f_8021B358(c); // 8023376C
L_80233770:;
  c->r[3]=c->r[29]|c->r[29]; // 80233770
  c->r[4]=0u+0x00000000u; // 80233774
  c->lr=0x8023377Cu; f_801EED28(c); // 80233778
  c->r[3]=c->r[29]|c->r[29]; // 8023377C
  c->r[4]=0u+0x00000002u; // 80233780
  c->lr=0x80233788u; f_801EECBC(c); // 80233784
  c->r[31]=c->r[31]+0x00000004u; // 80233788
  c->r[30]=c->r[30]+0x00000001u; // 8023378C
  cmps(c,0,(int32_t)c->r[30],3); // 80233790
  if (crb(c,0)) { IRQCHK(c); goto L_8023373C; } // 80233794
  c->r[3]=c->r[29]+0x00010000u; // 80233798
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 8023379C
  cmps(c,0,(int32_t)c->r[3],0); // 802337A0
  if (crb(c,2)) { goto L_802337B0; } // 802337A4
  c->r[4]=0u+0x00000000u; // 802337A8
  c->lr=0x802337B0u; f_8021B46C(c); // 802337AC
L_802337B0:;
  c->lr=0x802337B4u; f_801ECCEC(c); // 802337B0
  c->lr=0x802337B8u; f_8022256C(c); // 802337B4
  cmps(c,0,(int32_t)c->r[3],0); // 802337B8
  if (crb(c,2)) { goto L_802337E4; } // 802337BC
  c->r[3]=0u+0x00000001u; // 802337C0
  c->r[4]=0u+0x80480000u; // 802337C4
  c->r[4]=c->r[4]+0x00000850u; // 802337C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 802337CC
  c->lr=0x802337D4u; f_803D3760(c); // 802337D0
  c->lr=0x802337D8u; f_801E6540(c); // 802337D4
  c->lr=0x802337DCu; f_801ECCEC(c); // 802337D8
  c->r[4]=0u+0x00000000u; // 802337DC
  c->lr=0x802337E4u; f_80222564(c); // 802337E0
L_802337E4:;
  c->r[3]=c->r[29]|c->r[29]; // 802337E4
  c->r[4]=0u+0x00000005u; // 802337E8
  c->lr=0x802337F0u; f_801EDEE0(c); // 802337EC
  c->lr=0x802337F4u; f_8006592C(c); // 802337F0
  c->r[4]=0u+0x00000001u; // 802337F4
  c->r[5]=0u+0x00000000u; // 802337F8
  c->r[6]=0u+0xFFFFFFFFu; // 802337FC
  c->r[7]=0u+0xFFFFFFFFu; // 80233800
  c->lr=0x80233808u; f_80048F20(c); // 80233804
L_80233808:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80233808
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023380C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80233810
  c->r[0]=R32(c->r[1]+0x00000024u); // 80233814
  c->lr=c->r[0]; // 80233818
  c->r[1]=c->r[1]+0x00000020u; // 8023381C
  return; // 80233820
}

// fn_80233824
void f_80233824(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233824
  c->r[0]=c->lr; // 80233828
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023382C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80233830
  W32(c->r[1]+0x00000018u,c->r[30]); // 80233834
  W32(c->r[1]+0x00000014u,c->r[29]); // 80233838
  W32(c->r[1]+0x00000010u,c->r[28]); // 8023383C
  c->r[28]=c->r[3]|c->r[3]; // 80233840
  c->r[0]=0u+0x00000001u; // 80233844
  c->r[29]=0u+0x00000000u; // 80233848
  c->r[30]=c->r[28]|c->r[28]; // 8023384C
L_80233850:;
  c->r[3]=c->r[30]+0x00010000u; // 80233850
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233854
  cmps(c,0,(int32_t)c->r[3],0); // 80233858
  if (crb(c,2)) { goto L_80233884; } // 8023385C
  c->r[31]=0u+0x00000000u; // 80233860
  cmps(c,0,(int32_t)c->r[0],0); // 80233864
  if (crb(c,2)) { goto L_80233880; } // 80233868
  c->r[4]=0u+0x00000000u; // 8023386C
  c->lr=0x80233874u; f_8021B3FC(c); // 80233870
  cmps(c,0,(int32_t)c->r[3],0); // 80233874
  if (crb(c,2)) { goto L_80233880; } // 80233878
  c->r[31]=0u+0x00000001u; // 8023387C
L_80233880:;
  c->r[0]=c->r[31]|c->r[31]; // 80233880
L_80233884:;
  c->r[30]=c->r[30]+0x00000004u; // 80233884
  c->r[29]=c->r[29]+0x00000001u; // 80233888
  cmps(c,0,(int32_t)c->r[29],3); // 8023388C
  if (crb(c,0)) { IRQCHK(c); goto L_80233850; } // 80233890
  c->r[31]=0u+0x00000000u; // 80233894
  cmps(c,0,(int32_t)c->r[0],0); // 80233898
  if (crb(c,2)) { goto L_802338B0; } // 8023389C
  c->lr=0x802338A4u; f_801E65AC(c); // 802338A0
  cmps(c,0,(int32_t)c->r[3],0); // 802338A4
  if (crb(c,2)) { goto L_802338B0; } // 802338A8
  c->r[31]=0u+0x00000001u; // 802338AC
L_802338B0:;
  cmps(c,0,(int32_t)c->r[31],0); // 802338B0
  if (crb(c,2)) { goto L_80233908; } // 802338B4
  c->r[29]=0u+0x00000000u; // 802338B8
  c->r[31]=c->r[28]|c->r[28]; // 802338BC
L_802338C0:;
  c->r[3]=c->r[31]+0x00010000u; // 802338C0
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 802338C4
  cmps(c,0,(int32_t)c->r[3],0); // 802338C8
  if (crb(c,2)) { goto L_802338D8; } // 802338CC
  c->r[4]=0u+0x00000000u; // 802338D0
  c->lr=0x802338D8u; f_8021B46C(c); // 802338D4
L_802338D8:;
  c->r[31]=c->r[31]+0x00000004u; // 802338D8
  c->r[29]=c->r[29]+0x00000001u; // 802338DC
  cmps(c,0,(int32_t)c->r[29],3); // 802338E0
  if (crb(c,0)) { IRQCHK(c); goto L_802338C0; } // 802338E4
  c->r[3]=c->r[28]|c->r[28]; // 802338E8
  c->lr=0x802338F0u; f_801EDEFC(c); // 802338EC
  c->r[4]=c->r[3]|c->r[3]; // 802338F0
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 802338F4
  c->lr=0x802338FCu; f_801EF234(c); // 802338F8
  c->r[3]=c->r[28]|c->r[28]; // 802338FC
  c->r[4]=0u+0x00000000u; // 80233900
  c->lr=0x80233908u; f_801EDEE0(c); // 80233904
L_80233908:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80233908
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023390C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80233910
  c->r[28]=R32(c->r[1]+0x00000010u); // 80233914
  c->r[0]=R32(c->r[1]+0x00000024u); // 80233918
  c->lr=c->r[0]; // 8023391C
  c->r[1]=c->r[1]+0x00000020u; // 80233920
  return; // 80233924
}

// fn_80233928
void f_80233928(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233928
  c->r[0]=c->lr; // 8023392C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233930
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233934
  c->r[31]=c->r[3]|c->r[3]; // 80233938
  c->r[4]=c->r[3]+0x00010000u; // 8023393C
  c->r[0]=R32(c->r[4]+0xFFFF8148u); // 80233940
  cmps(c,0,(int32_t)c->r[0],4); // 80233944
  if (crb(c,2)) { goto L_80233950; } // 80233948
  goto L_80233964; // 8023394C
L_80233950:;
  c->r[4]=0u+0x00000009u; // 80233950
  c->lr=0x80233958u; f_801EDEF0(c); // 80233954
  c->r[3]=c->r[31]|c->r[31]; // 80233958
  c->r[4]=0u+0x00000004u; // 8023395C
  c->lr=0x80233964u; f_801EDEE0(c); // 80233960
L_80233964:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233964
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233968
  c->lr=c->r[0]; // 8023396C
  c->r[1]=c->r[1]+0x00000010u; // 80233970
  return; // 80233974
}

// fn_80233978
void f_80233978(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233978
  c->r[0]=c->lr; // 8023397C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233980
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233984
  c->r[31]=c->r[3]|c->r[3]; // 80233988
  c->r[4]=c->r[3]+0x00010000u; // 8023398C
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 80233990
  c->r[5]=0u+0x00000000u; // 80233994
  c->lr=0x8023399Cu; f_8023334C(c); // 80233998
  c->r[5]=c->r[31]+0x00010000u; // 8023399C
  c->r[3]=R32(c->r[5]+0xFFFF80D4u); // 802339A0
  c->r[4]=c->r[3]+0x00000002u; // 802339A4
  c->r[3]=0u+0x55550000u; // 802339A8
  c->r[0]=c->r[3]+0x00005556u; // 802339AC
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 802339B0
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 802339B4
  c->r[0]=c->r[3]+c->r[0]; // 802339B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 802339BC
  c->r[4]=c->r[4]-c->r[0]; // 802339C0
  W32(c->r[5]+0xFFFF80D4u,c->r[4]); // 802339C4
  c->r[3]=c->r[31]|c->r[31]; // 802339C8
  c->r[5]=0u+0x00000001u; // 802339CC
  c->lr=0x802339D4u; f_8023334C(c); // 802339D0
  c->lr=0x802339D8u; f_8006592C(c); // 802339D4
  c->r[4]=0u+0x00000006u; // 802339D8
  c->r[5]=0u+0x00000000u; // 802339DC
  c->r[6]=0u+0xFFFFFFFFu; // 802339E0
  c->r[7]=0u+0xFFFFFFFFu; // 802339E4
  c->lr=0x802339ECu; f_80048F20(c); // 802339E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802339EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802339F0
  c->lr=c->r[0]; // 802339F4
  c->r[1]=c->r[1]+0x00000010u; // 802339F8
  return; // 802339FC
}

// fn_80233A00
void f_80233A00(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233A00
  c->r[0]=c->lr; // 80233A04
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233A08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233A0C
  c->r[31]=c->r[3]|c->r[3]; // 80233A10
  c->r[4]=c->r[3]+0x00010000u; // 80233A14
  c->r[4]=R32(c->r[4]+0xFFFF80D4u); // 80233A18
  c->r[5]=0u+0x00000000u; // 80233A1C
  c->lr=0x80233A24u; f_8023334C(c); // 80233A20
  c->r[5]=c->r[31]+0x00010000u; // 80233A24
  c->r[3]=R32(c->r[5]+0xFFFF80D4u); // 80233A28
  c->r[4]=c->r[3]+0x00000001u; // 80233A2C
  c->r[3]=0u+0x55550000u; // 80233A30
  c->r[0]=c->r[3]+0x00005556u; // 80233A34
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80233A38
  c->r[0]=rotl(c->r[3],1)&0x00000001u; // 80233A3C
  c->r[0]=c->r[3]+c->r[0]; // 80233A40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 80233A44
  c->r[4]=c->r[4]-c->r[0]; // 80233A48
  W32(c->r[5]+0xFFFF80D4u,c->r[4]); // 80233A4C
  c->r[3]=c->r[31]|c->r[31]; // 80233A50
  c->r[5]=0u+0x00000001u; // 80233A54
  c->lr=0x80233A5Cu; f_8023334C(c); // 80233A58
  c->lr=0x80233A60u; f_8006592C(c); // 80233A5C
  c->r[4]=0u+0x00000006u; // 80233A60
  c->r[5]=0u+0x00000000u; // 80233A64
  c->r[6]=0u+0xFFFFFFFFu; // 80233A68
  c->r[7]=0u+0xFFFFFFFFu; // 80233A6C
  c->lr=0x80233A74u; f_80048F20(c); // 80233A70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233A74
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233A78
  c->lr=c->r[0]; // 80233A7C
  c->r[1]=c->r[1]+0x00000010u; // 80233A80
  return; // 80233A84
}

// fn_80233A88
void f_80233A88(Ctx* __restrict c) {
  return; // 80233A88
}

// fn_80233A8C
void f_80233A8C(Ctx* __restrict c) {
  return; // 80233A8C
}

// fn_80233A90
void f_80233A90(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233A90
  c->r[0]=c->lr; // 80233A94
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233A98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233A9C
  c->r[31]=c->r[3]|c->r[3]; // 80233AA0
  c->r[3]=c->r[3]+0x00010000u; // 80233AA4
  c->r[0]=R32(c->r[3]+0xFFFF80D4u); // 80233AA8
  cmps(c,0,(int32_t)c->r[0],1); // 80233AAC
  if (crb(c,2)) { goto L_80233B1C; } // 80233AB0
  if (!crb(c,0)) { goto L_80233AC4; } // 80233AB4
  cmps(c,0,(int32_t)c->r[0],0); // 80233AB8
  if (!crb(c,0)) { goto L_80233AD0; } // 80233ABC
  goto L_80233BFC; // 80233AC0
L_80233AC4:;
  cmps(c,0,(int32_t)c->r[0],3); // 80233AC4
  if (!crb(c,0)) { goto L_80233BFC; } // 80233AC8
  goto L_80233B68; // 80233ACC
L_80233AD0:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233AD0
  c->r[3]=c->r[3]+c->r[0]; // 80233AD4
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233AD8
  c->r[4]=0u+0x00000000u; // 80233ADC
  c->r[5]=0u+0x00000002u; // 80233AE0
  c->lr=0x80233AE8u; f_8021B358(c); // 80233AE4
  c->r[3]=c->r[31]|c->r[31]; // 80233AE8
  c->r[4]=0u+0x00000004u; // 80233AEC
  c->lr=0x80233AF4u; f_801EDEE0(c); // 80233AF0
  c->r[3]=c->r[31]|c->r[31]; // 80233AF4
  c->r[4]=0u+0x0000000Bu; // 80233AF8
  c->lr=0x80233B00u; f_801EDEF0(c); // 80233AFC
  c->lr=0x80233B04u; f_8006592C(c); // 80233B00
  c->r[4]=0u+0x00000004u; // 80233B04
  c->r[5]=0u+0x00000000u; // 80233B08
  c->r[6]=0u+0xFFFFFFFFu; // 80233B0C
  c->r[7]=0u+0xFFFFFFFFu; // 80233B10
  c->lr=0x80233B18u; f_80048F20(c); // 80233B14
  goto L_80233BFC; // 80233B18
L_80233B1C:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233B1C
  c->r[3]=c->r[3]+c->r[0]; // 80233B20
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233B24
  c->r[4]=0u+0x00000000u; // 80233B28
  c->r[5]=0u+0x00000002u; // 80233B2C
  c->lr=0x80233B34u; f_8021B358(c); // 80233B30
  c->r[3]=c->r[31]|c->r[31]; // 80233B34
  c->r[4]=0u+0x00000004u; // 80233B38
  c->lr=0x80233B40u; f_801EDEE0(c); // 80233B3C
  c->r[3]=c->r[31]|c->r[31]; // 80233B40
  c->r[4]=0u+0x00000001u; // 80233B44
  c->lr=0x80233B4Cu; f_801EDEF0(c); // 80233B48
  c->lr=0x80233B50u; f_8006592C(c); // 80233B4C
  c->r[4]=0u+0x00000004u; // 80233B50
  c->r[5]=0u+0x00000000u; // 80233B54
  c->r[6]=0u+0xFFFFFFFFu; // 80233B58
  c->r[7]=0u+0xFFFFFFFFu; // 80233B5C
  c->lr=0x80233B64u; f_80048F20(c); // 80233B60
  goto L_80233BFC; // 80233B64
L_80233B68:;
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233B68
  c->r[3]=c->r[3]+c->r[0]; // 80233B6C
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233B70
  c->r[4]=0u+0x00000000u; // 80233B74
  c->r[5]=0u+0x00000002u; // 80233B78
  c->lr=0x80233B80u; f_8021B358(c); // 80233B7C
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80233B80
  c->r[4]=0u+0x00000008u; // 80233B84
  c->lr=0x80233B8Cu; f_801EF41C(c); // 80233B88
  c->r[4]=c->r[3]|c->r[3]; // 80233B8C
  c->r[3]=c->r[31]|c->r[31]; // 80233B90
  c->r[5]=0u+0x00000000u; // 80233B94
  c->lr=0x80233B9Cu; f_801EE164(c); // 80233B98
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80233B9C
  c->r[4]=0u+0x00000009u; // 80233BA0
  c->lr=0x80233BA8u; f_801EF41C(c); // 80233BA4
  c->r[4]=c->r[3]|c->r[3]; // 80233BA8
  c->r[3]=c->r[31]|c->r[31]; // 80233BAC
  c->r[5]=0u+0x80230000u; // 80233BB0
  c->r[5]=c->r[5]+0x00003480u; // 80233BB4
  c->lr=0x80233BBCu; f_801EE6AC(c); // 80233BB8
  c->r[3]=R32(c->r[13]+0xFFFFBB28u); // 80233BBC
  c->r[4]=0u+0x0000000Au; // 80233BC0
  c->lr=0x80233BC8u; f_801EF41C(c); // 80233BC4
  c->r[4]=c->r[3]|c->r[3]; // 80233BC8
  c->r[3]=c->r[31]|c->r[31]; // 80233BCC
  c->r[5]=0u+0x00000000u; // 80233BD0
  c->lr=0x80233BD8u; f_801EE6AC(c); // 80233BD4
  c->r[3]=c->r[31]|c->r[31]; // 80233BD8
  c->r[4]=0u+0x00000001u; // 80233BDC
  c->lr=0x80233BE4u; f_801ED3F4(c); // 80233BE0
  c->lr=0x80233BE8u; f_8006592C(c); // 80233BE4
  c->r[4]=0u+0x00000004u; // 80233BE8
  c->r[5]=0u+0x00000000u; // 80233BEC
  c->r[6]=0u+0xFFFFFFFFu; // 80233BF0
  c->r[7]=0u+0xFFFFFFFFu; // 80233BF4
  c->lr=0x80233BFCu; f_80048F20(c); // 80233BF8
L_80233BFC:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233C00
  c->lr=c->r[0]; // 80233C04
  c->r[1]=c->r[1]+0x00000010u; // 80233C08
  return; // 80233C0C
}

// fn_80233C10
void f_80233C10(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233C10
  c->r[0]=c->lr; // 80233C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80233C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80233C1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80233C20
  W32(c->r[1]+0x00000014u,c->r[29]); // 80233C24
  c->r[29]=c->r[3]|c->r[3]; // 80233C28
  c->r[30]=0u+0x00000000u; // 80233C2C
  c->r[31]=c->r[29]|c->r[29]; // 80233C30
L_80233C34:;
  c->r[3]=c->r[31]+0x00010000u; // 80233C34
  c->r[3]=R32(c->r[3]+0xFFFF8178u); // 80233C38
  c->r[4]=0u+0x00000000u; // 80233C3C
  c->lr=0x80233C44u; f_80224B90(c); // 80233C40
  c->r[3]=c->r[31]+0x00010000u; // 80233C44
  c->r[3]=R32(c->r[3]+0xFFFF8168u); // 80233C48
  c->r[4]=0u+0x00000000u; // 80233C4C
  c->r[5]=0u+0x00000003u; // 80233C50
  c->lr=0x80233C58u; f_8021B358(c); // 80233C54
  c->r[31]=c->r[31]+0x00000004u; // 80233C58
  c->r[30]=c->r[30]+0x00000001u; // 80233C5C
  cmps(c,0,(int32_t)c->r[30],3); // 80233C60
  if (crb(c,0)) { IRQCHK(c); goto L_80233C34; } // 80233C64
  c->r[3]=c->r[29]|c->r[29]; // 80233C68
  c->r[4]=0u+0x00000009u; // 80233C6C
  c->lr=0x80233C74u; f_801EDEF0(c); // 80233C70
  c->r[3]=c->r[29]|c->r[29]; // 80233C74
  c->r[4]=0u+0x00000002u; // 80233C78
  c->lr=0x80233C80u; f_801EECBC(c); // 80233C7C
  c->r[3]=c->r[29]|c->r[29]; // 80233C80
  c->r[4]=0u+0x00000000u; // 80233C84
  c->lr=0x80233C8Cu; f_801EED28(c); // 80233C88
  c->r[3]=c->r[29]+0x00010000u; // 80233C8C
  c->r[3]=R32(c->r[3]+0xFFFF80FCu); // 80233C90
  c->r[4]=0u+0x00000000u; // 80233C94
  c->lr=0x80233C9Cu; f_8021B46C(c); // 80233C98
  c->r[3]=c->r[29]|c->r[29]; // 80233C9C
  c->r[4]=0u+0x00000005u; // 80233CA0
  c->lr=0x80233CA8u; f_801EDEE0(c); // 80233CA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80233CA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80233CAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80233CB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80233CB4
  c->lr=c->r[0]; // 80233CB8
  c->r[1]=c->r[1]+0x00000020u; // 80233CBC
  return; // 80233CC0
}

// fn_80233CC4
void f_80233CC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233CC4
  c->r[0]=c->lr; // 80233CC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233CCC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233CD0
  c->r[31]=c->r[3]|c->r[3]; // 80233CD4
  c->lr=0x80233CDCu; f_80234264(c); // 80233CD8
  c->r[3]=c->r[31]|c->r[31]; // 80233CDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233CE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233CE4
  c->lr=c->r[0]; // 80233CE8
  c->r[1]=c->r[1]+0x00000010u; // 80233CEC
  return; // 80233CF0
}

// fn_80233CF4
void f_80233CF4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233CF4
  c->r[0]=c->lr; // 80233CF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233CFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233D00
  c->r[31]=c->r[3]|c->r[3]; // 80233D04
  cmps(c,0,(int32_t)c->r[3],0); // 80233D08
  if (crb(c,2)) { goto L_80233D20; } // 80233D0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 80233D10
  cmps(c,0,(int32_t)c->r[0],0); // 80233D14
  if (!crb(c,1)) { goto L_80233D20; } // 80233D18
  c->lr=0x80233D20u; f_80047B20(c); // 80233D1C
L_80233D20:;
  c->r[3]=c->r[31]|c->r[31]; // 80233D20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233D24
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233D28
  c->lr=c->r[0]; // 80233D2C
  c->r[1]=c->r[1]+0x00000010u; // 80233D30
  return; // 80233D34
}

// fn_80233D38
void f_80233D38(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 80233D38
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233D3C
  c->r[6]=R32(c->r[3]+c->r[7]); // 80233D40
  c->r[5]=0u+0x00000001u; // 80233D44
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 80233D48
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 80233D4C
  c->r[0]=c->r[6]|c->r[0]; // 80233D50
  W32(c->r[3]+c->r[7],c->r[0]); // 80233D54
  return; // 80233D58
}

// fn_80233D5C
void f_80233D5C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 80233D5C
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 80233D60
  c->r[5]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 80233D64
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 80233D68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233D6C
  c->r[0]=R32(c->r[3]+c->r[0]); // 80233D70
  c->r[3]=c->r[5]&c->r[0]; // 80233D74
  c->r[0]=0u-c->r[3]; // 80233D78
  c->r[0]=c->r[0]|c->r[3]; // 80233D7C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80233D80
  return; // 80233D84
}

// fn_80233D88
void f_80233D88(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],27)&0x07FFFFFFu; // 80233D88
  c->r[7]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233D8C
  c->r[6]=R32(c->r[3]+c->r[7]); // 80233D90
  c->r[5]=0u+0x00000001u; // 80233D94
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; // 80233D98
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 80233D9C
  c->r[0]=~(c->r[0]|c->r[0]); // 80233DA0
  c->r[0]=c->r[6]&c->r[0]; // 80233DA4
  W32(c->r[3]+c->r[7],c->r[0]); // 80233DA8
  return; // 80233DAC
}

// fn_80233DB0
void f_80233DB0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80233DB0
  f_80233D38(c); return; // 80233DB4
}

// fn_80233DB8
void f_80233DB8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80233DB8
  f_80233D88(c); return; // 80233DBC
}

// fn_80233DC0
void f_80233DC0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000000u; // 80233DC0
  f_80233D5C(c); return; // 80233DC4
}

// fn_80233DC8
void f_80233DC8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 80233DC8
  f_80233D38(c); return; // 80233DCC
}

// fn_80233DD0
void f_80233DD0(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 80233DD0
  f_80233D88(c); return; // 80233DD4
}

// fn_80233DD8
void f_80233DD8(Ctx* __restrict c) {
  c->r[4]=0u+0x00000001u; // 80233DD8
  f_80233D5C(c); return; // 80233DDC
}

// fn_80233DE0
void f_80233DE0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233DE0
  c->r[0]=c->lr; // 80233DE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233DE8
  c->lr=0x80233DF0u; f_8006592C(c); // 80233DEC
  c->r[4]=0u+0x00000006u; // 80233DF0
  c->r[5]=0u+0x00000000u; // 80233DF4
  c->r[6]=0u+0xFFFFFFFFu; // 80233DF8
  c->r[7]=0u+0xFFFFFFFFu; // 80233DFC
  c->lr=0x80233E04u; f_80048F20(c); // 80233E00
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233E04
  c->lr=c->r[0]; // 80233E08
  c->r[1]=c->r[1]+0x00000010u; // 80233E0C
  return; // 80233E10
}

// fn_80233E14
void f_80233E14(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233E14
  c->r[0]=c->lr; // 80233E18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233E20
  c->r[31]=c->r[3]|c->r[3]; // 80233E24
  c->r[0]=R32(c->r[3]+0x00000028u); // 80233E28
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233E2C
  c->r[5]=c->r[3]+c->r[0]; // 80233E30
  c->r[4]=R32(c->r[5]+0x00000004u); // 80233E34
  c->r[0]=R32(c->r[5]+0x00000010u); // 80233E38
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80233E3C
  if (crb(c,2)) { goto L_80233E5C; } // 80233E40
  c->lr=0x80233E48u; f_80233DE0(c); // 80233E44
  c->r[0]=R32(c->r[31]+0x00000028u); // 80233E48
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233E4C
  c->r[3]=c->r[31]+c->r[0]; // 80233E50
  c->r[0]=R32(c->r[3]+0x00000004u); // 80233E54
  W32(c->r[3]+0x00000010u,c->r[0]); // 80233E58
L_80233E5C:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233E5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233E60
  c->lr=c->r[0]; // 80233E64
  c->r[1]=c->r[1]+0x00000010u; // 80233E68
  return; // 80233E6C
}

// fn_80233E70
void f_80233E70(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233E70
  c->r[0]=c->lr; // 80233E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233E78
  c->lr=0x80233E80u; f_8006592C(c); // 80233E7C
  c->r[4]=0u+0x00000000u; // 80233E80
  c->r[5]=0u+0x00000000u; // 80233E84
  c->r[6]=0u+0xFFFFFFFFu; // 80233E88
  c->r[7]=0u+0xFFFFFFFFu; // 80233E8C
  c->lr=0x80233E94u; f_80048F20(c); // 80233E90
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233E94
  c->lr=c->r[0]; // 80233E98
  c->r[1]=c->r[1]+0x00000010u; // 80233E9C
  return; // 80233EA0
}

// fn_80233EA4
void f_80233EA4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233EA4
  c->r[0]=c->lr; // 80233EA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233EAC
  c->lr=0x80233EB4u; f_8006592C(c); // 80233EB0
  c->r[4]=0u+0x00000001u; // 80233EB4
  c->r[5]=0u+0x00000000u; // 80233EB8
  c->r[6]=0u+0xFFFFFFFFu; // 80233EBC
  c->r[7]=0u+0xFFFFFFFFu; // 80233EC0
  c->lr=0x80233EC8u; f_80048F20(c); // 80233EC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233EC8
  c->lr=c->r[0]; // 80233ECC
  c->r[1]=c->r[1]+0x00000010u; // 80233ED0
  return; // 80233ED4
}

// fn_80233ED8
void f_80233ED8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233ED8
  c->r[0]=c->lr; // 80233EDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233EE0
  c->lr=0x80233EE8u; f_8006592C(c); // 80233EE4
  c->r[4]=0u+0x00000004u; // 80233EE8
  c->r[5]=0u+0x00000000u; // 80233EEC
  c->r[6]=0u+0xFFFFFFFFu; // 80233EF0
  c->r[7]=0u+0xFFFFFFFFu; // 80233EF4
  c->lr=0x80233EFCu; f_80048F20(c); // 80233EF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233EFC
  c->lr=c->r[0]; // 80233F00
  c->r[1]=c->r[1]+0x00000010u; // 80233F04
  return; // 80233F08
}

// fn_80233F0C
void f_80233F0C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233F0C
  c->r[0]=c->lr; // 80233F10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233F14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233F18
  W32(c->r[1]+0x00000008u,c->r[30]); // 80233F1C
  c->r[31]=c->r[3]|c->r[3]; // 80233F20
  c->r[0]=R32(c->r[3]+0x00000028u); // 80233F24
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233F28
  c->r[5]=c->r[3]+c->r[0]; // 80233F2C
  c->r[4]=R32(c->r[5]+0x00000004u); // 80233F30
  c->r[0]=c->r[4]+0x00000001u; // 80233F34
  W32(c->r[5]+0x00000004u,c->r[0]); // 80233F38
  c->r[0]=R32(c->r[3]+0x00000028u); // 80233F3C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233F40
  c->r[5]=c->r[3]+c->r[0]; // 80233F44
  c->r[3]=R32(c->r[5]+0x00000004u); // 80233F48
  c->r[4]=0u+0x00000000u; // 80233F4C
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80233F50
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80233F54
  c->lr=0x80233F5Cu; f_800592BC(c); // 80233F58
  c->r[0]=R32(c->r[31]+0x00000028u); // 80233F5C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233F60
  c->r[4]=c->r[31]+c->r[0]; // 80233F64
  W32(c->r[4]+0x00000004u,c->r[3]); // 80233F68
  c->r[0]=R32(c->r[31]+0x00000028u); // 80233F6C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233F70
  c->r[3]=c->r[31]+c->r[0]; // 80233F74
  c->r[4]=R32(c->r[3]+0x00000004u); // 80233F78
  c->r[0]=R32(c->r[3]+0x00000010u); // 80233F7C
  c->r[3]=c->r[0]-c->r[4]; // 80233F80
  c->r[0]=c->r[4]-c->r[0]; // 80233F84
  c->r[0]=c->r[3]|c->r[0]; // 80233F88
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 80233F8C
  c->r[3]=c->r[31]|c->r[31]; // 80233F90
  c->lr=0x80233F98u; f_80233E14(c); // 80233F94
  c->r[3]=c->r[30]|c->r[30]; // 80233F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80233F9C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80233FA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80233FA4
  c->lr=c->r[0]; // 80233FA8
  c->r[1]=c->r[1]+0x00000010u; // 80233FAC
  return; // 80233FB0
}

// fn_80233FB4
void f_80233FB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80233FB4
  c->r[0]=c->lr; // 80233FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80233FBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80233FC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 80233FC4
  c->r[31]=c->r[3]|c->r[3]; // 80233FC8
  c->r[0]=R32(c->r[3]+0x00000028u); // 80233FCC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233FD0
  c->r[5]=c->r[3]+c->r[0]; // 80233FD4
  c->r[4]=R32(c->r[5]+0x00000004u); // 80233FD8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80233FDC
  W32(c->r[5]+0x00000004u,c->r[0]); // 80233FE0
  c->r[0]=R32(c->r[3]+0x00000028u); // 80233FE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80233FE8
  c->r[5]=c->r[3]+c->r[0]; // 80233FEC
  c->r[3]=R32(c->r[5]+0x00000004u); // 80233FF0
  c->r[4]=0u+0x00000000u; // 80233FF4
  c->r[5]=R32(c->r[5]+0x0000001Cu); // 80233FF8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 80233FFC
  c->lr=0x80234004u; f_800592BC(c); // 80234000
  c->r[0]=R32(c->r[31]+0x00000028u); // 80234004
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80234008
  c->r[4]=c->r[31]+c->r[0]; // 8023400C
  W32(c->r[4]+0x00000004u,c->r[3]); // 80234010
  c->r[0]=R32(c->r[31]+0x00000028u); // 80234014
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80234018
  c->r[3]=c->r[31]+c->r[0]; // 8023401C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80234020
  c->r[0]=R32(c->r[3]+0x00000010u); // 80234024
  c->r[3]=c->r[0]-c->r[4]; // 80234028
  c->r[0]=c->r[4]-c->r[0]; // 8023402C
  c->r[0]=c->r[3]|c->r[0]; // 80234030
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 80234034
  c->r[3]=c->r[31]|c->r[31]; // 80234038
  c->lr=0x80234040u; f_80233E14(c); // 8023403C
  c->r[3]=c->r[30]|c->r[30]; // 80234040
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234044
  c->r[30]=R32(c->r[1]+0x00000008u); // 80234048
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023404C
  c->lr=c->r[0]; // 80234050
  c->r[1]=c->r[1]+0x00000010u; // 80234054
  return; // 80234058
}

// fn_8023405C
void f_8023405C(Ctx* __restrict c) {
  c->r[0]=R32(c->r[3]+0x00000028u); // 8023405C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80234060
  c->r[3]=c->r[3]+c->r[0]; // 80234064
  c->r[3]=R32(c->r[3]+0x00000004u); // 80234068
  return; // 8023406C
}

// fn_80234070
void f_80234070(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80234070
  c->r[3]=c->r[3]+c->r[0]; // 80234074
  c->r[3]=R32(c->r[3]+0x00000004u); // 80234078
  return; // 8023407C
}

// fn_80234080
void f_80234080(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80234080
  c->r[3]=c->r[3]+c->r[0]; // 80234084
  W32(c->r[3]+0x00000004u,c->r[4]); // 80234088
  W32(c->r[3]+0x00000010u,c->r[4]); // 8023408C
  return; // 80234090
}

// fn_80234094
void f_80234094(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80234094
  c->r[3]=c->r[3]+c->r[0]; // 80234098
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8023409C
  return; // 802340A0
}

// fn_802340A4
void f_802340A4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802340A4
  c->r[0]=c->lr; // 802340A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 802340AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802340B0
  c->r[31]=c->r[3]|c->r[3]; // 802340B4
  c->lr=0x802340BCu; f_80233DE0(c); // 802340B8
  c->r[3]=R32(c->r[31]+0x00000028u); // 802340BC
  c->r[3]=c->r[3]+0x00000001u; // 802340C0
  W32(c->r[31]+0x00000028u,c->r[3]); // 802340C4
  c->r[4]=0u+0x00000000u; // 802340C8
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 802340CC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 802340D0
  c->lr=0x802340D8u; f_800EEE08(c); // 802340D4
  W32(c->r[31]+0x00000028u,c->r[3]); // 802340D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802340DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 802340E0
  c->lr=c->r[0]; // 802340E4
  c->r[1]=c->r[1]+0x00000010u; // 802340E8
  return; // 802340EC
}

// fn_802340F0
void f_802340F0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802340F0
  c->r[0]=c->lr; // 802340F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802340F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802340FC
  c->r[31]=c->r[3]|c->r[3]; // 80234100
  c->lr=0x80234108u; f_80233DE0(c); // 80234104
  c->r[3]=R32(c->r[31]+0x00000028u); // 80234108
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8023410C
  W32(c->r[31]+0x00000028u,c->r[3]); // 80234110
  c->r[4]=0u+0x00000000u; // 80234114
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 80234118
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8023411C
  c->lr=0x80234124u; f_800EEE08(c); // 80234120
  W32(c->r[31]+0x00000028u,c->r[3]); // 80234124
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234128
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023412C
  c->lr=c->r[0]; // 80234130
  c->r[1]=c->r[1]+0x00000010u; // 80234134
  return; // 80234138
}

// fn_8023413C
void f_8023413C(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x00000028u); // 8023413C
  return; // 80234140
}

// fn_80234144
void f_80234144(Ctx* __restrict c) {
  W32(c->r[3]+0x00000028u,c->r[4]); // 80234144
  return; // 80234148
}

// fn_8023414C
void f_8023414C(Ctx* __restrict c) {
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8023414C
  return; // 80234150
}

// fn_80234154
void f_80234154(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234154
  c->r[0]=c->lr; // 80234158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023415C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80234160
  c->r[31]=c->r[3]|c->r[3]; // 80234164
  c->lr=0x8023416Cu; f_8023413C(c); // 80234168
  cmps(c,0,(int32_t)c->r[3],1); // 8023416C
  if (crb(c,2)) { goto L_80234178; } // 80234170
  goto L_802341B4; // 80234174
L_80234178:;
  c->r[3]=c->r[31]|c->r[31]; // 80234178
  c->r[4]=0u+0x00000001u; // 8023417C
  c->lr=0x80234184u; f_80234070(c); // 80234180
  cmps(c,0,(int32_t)c->r[3],0); // 80234184
  if (!crb(c,2)) { goto L_802341B4; } // 80234188
  c->lr=0x80234190u; f_8011B03C(c); // 8023418C
  c->r[31]=c->r[3]|c->r[3]; // 80234190
  c->lr=0x80234198u; f_80047C90(c); // 80234194
  c->r[4]=c->r[31]|c->r[31]; // 80234198
  c->lr=0x802341A0u; f_80058EA4(c); // 8023419C
  c->lr=0x802341A4u; f_80059168(c); // 802341A0
  c->r[4]=0u+0x00000003u; // 802341A4
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[1]=c->ps1[1]=RF32(ea);} // 802341A8
  {uint32_t ea=c->r[2]+0xFFFF9B2Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802341AC
  c->lr=0x802341B4u; f_80056F64(c); // 802341B0
L_802341B4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802341B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802341B8
  c->lr=c->r[0]; // 802341BC
  c->r[1]=c->r[1]+0x00000010u; // 802341C0
  return; // 802341C4
}

// fn_802341C8
void f_802341C8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802341C8
  c->r[0]=c->lr; // 802341CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802341D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802341D4
  c->r[31]=c->r[3]|c->r[3]; // 802341D8
  c->r[3]=c->r[3]+0x00000004u; // 802341DC
  c->r[4]=0u+0x00000000u; // 802341E0
  c->r[5]=0u+0x0000000Cu; // 802341E4
  c->lr=0x802341ECu; f_800060B8(c); // 802341E8
  c->r[3]=c->r[31]+0x0000001Cu; // 802341EC
  c->r[4]=0u+0x00000000u; // 802341F0
  c->r[5]=0u+0x0000000Cu; // 802341F4
  c->lr=0x802341FCu; f_800060B8(c); // 802341F8
  c->r[3]=c->r[31]+0x00000010u; // 802341FC
  c->r[4]=0u+0x00000000u; // 80234200
  c->r[5]=0u+0x0000000Cu; // 80234204
  c->lr=0x8023420Cu; f_800060B8(c); // 80234208
  c->r[0]=0u+0x00000000u; // 8023420C
  W32(c->r[31]+0x00000028u,c->r[0]); // 80234210
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 80234214
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234218
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023421C
  c->lr=c->r[0]; // 80234220
  c->r[1]=c->r[1]+0x00000010u; // 80234224
  return; // 80234228
}

// fn_8023422C
void f_8023422C(Ctx* __restrict c) {
  c->r[5]=0u+0x00000001u; // 8023422C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80234230
  c->r[3]=c->r[3]+c->r[0]; // 80234234
  W32(c->r[3]+0x00000030u,c->r[5]); // 80234238
  return; // 8023423C
}

// fn_80234240
void f_80234240(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80234240
  c->r[3]=c->r[3]+c->r[0]; // 80234244
  c->r[3]=R32(c->r[3]+0x00000030u); // 80234248
  return; // 8023424C
}

// fn_80234250
void f_80234250(Ctx* __restrict c) {
  c->r[0]=0u+0x00000000u; // 80234250
  W32(c->r[3]+0x00000030u,c->r[0]); // 80234254
  W32(c->r[3]+0x00000034u,c->r[0]); // 80234258
  W32(c->r[3]+0x00000038u,c->r[0]); // 8023425C
  return; // 80234260
}

// fn_80234264
void f_80234264(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234264
  c->r[0]=c->lr; // 80234268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023426C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80234270
  c->r[31]=c->r[3]|c->r[3]; // 80234274
  c->r[4]=0u+0x00000000u; // 80234278
  c->r[5]=0u+0x00000004u; // 8023427C
  c->lr=0x80234284u; f_800060B8(c); // 80234280
  c->r[3]=c->r[31]|c->r[31]; // 80234284
  c->lr=0x8023428Cu; f_802341C8(c); // 80234288
  c->r[3]=c->r[31]|c->r[31]; // 8023428C
  c->lr=0x80234294u; f_80234250(c); // 80234290
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234294
  c->r[0]=R32(c->r[1]+0x00000014u); // 80234298
  c->lr=c->r[0]; // 8023429C
  c->r[1]=c->r[1]+0x00000010u; // 802342A0
  return; // 802342A4
}

// fn_802342A8
void f_802342A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802342A8
  c->r[0]=c->lr; // 802342AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802342B0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 802342B4
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 802342B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802342BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802342C0
  c->r[30]=c->r[3]|c->r[3]; // 802342C4
  c->lr=0x802342CCu; f_8011B41C(c); // 802342C8
  c->r[4]=0u+0x0000000Du; // 802342CC
  c->lr=0x802342D4u; f_8011B814(c); // 802342D0
  c->r[31]=c->r[3]|c->r[3]; // 802342D4
  c->lr=0x802342DCu; f_80236AC4(c); // 802342D8
  c->r[3]=c->r[30]|c->r[30]; // 802342DC
  c->lr=0x802342E4u; f_80117D04(c); // 802342E0
  c->r[3]=c->r[31]|c->r[31]; // 802342E4
  c->lr=0x802342ECu; f_80236ADC(c); // 802342E8
  c->f[31]=c->f[1]; // 802342EC
  c->r[3]=c->r[31]|c->r[31]; // 802342F0
  c->lr=0x802342F8u; f_80236ADC(c); // 802342F4
  c->r[3]=c->r[30]|c->r[30]; // 802342F8
  c->f[2]=c->f[31]; // 802342FC
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[3]=c->ps1[3]=RF32(ea);} // 80234300
  c->lr=0x80234308u; f_80114AA8(c); // 80234304
  c->r[3]=c->r[31]|c->r[31]; // 80234308
  c->lr=0x80234310u; f_8012FCB0(c); // 8023430C
  c->r[3]=c->r[30]|c->r[30]; // 80234310
  c->lr=0x80234318u; f_8012FA30(c); // 80234314
  c->r[3]=c->r[31]|c->r[31]; // 80234318
  c->lr=0x80234320u; f_8012FCB8(c); // 8023431C
  c->r[3]=c->r[30]|c->r[30]; // 80234320
  c->lr=0x80234328u; f_8012FA38(c); // 80234324
  c->r[3]=c->r[31]|c->r[31]; // 80234328
  c->lr=0x80234330u; f_8012FCC8(c); // 8023432C
  c->r[3]=c->r[30]|c->r[30]; // 80234330
  c->lr=0x80234338u; f_8012FA4C(c); // 80234334
  c->r[3]=c->r[31]|c->r[31]; // 80234338
  c->lr=0x80234340u; f_8012FCD0(c); // 8023433C
  c->r[3]=c->r[30]|c->r[30]; // 80234340
  c->lr=0x80234348u; f_8012FA54(c); // 80234344
  c->r[3]=c->r[31]|c->r[31]; // 80234348
  c->lr=0x80234350u; f_8012FCE8(c); // 8023434C
  c->r[3]=c->r[30]|c->r[30]; // 80234350
  c->lr=0x80234358u; f_8012FA6C(c); // 80234354
  c->r[3]=c->r[31]|c->r[31]; // 80234358
  c->lr=0x80234360u; f_8012FCF0(c); // 8023435C
  c->r[3]=c->r[30]|c->r[30]; // 80234360
  c->lr=0x80234368u; f_8012FA74(c); // 80234364
  c->r[3]=c->r[31]|c->r[31]; // 80234368
  c->lr=0x80234370u; f_8012FCE0(c); // 8023436C
  c->r[4]=c->r[3]|c->r[3]; // 80234370
  c->r[3]=c->r[30]|c->r[30]; // 80234374
  c->lr=0x8023437Cu; f_8012F918(c); // 80234378
  c->r[3]=c->r[31]|c->r[31]; // 8023437C
  c->lr=0x80234384u; f_8012FCF8(c); // 80234380
  c->f[31]=c->f[1]; // 80234384
  c->r[3]=c->r[30]|c->r[30]; // 80234388
  c->lr=0x80234390u; f_8012AA10(c); // 8023438C
  c->f[1]=c->f[31]; // 80234390
  c->lr=0x80234398u; f_80110580(c); // 80234394
  c->r[3]=c->r[31]|c->r[31]; // 80234398
  c->lr=0x802343A0u; f_8012FD00(c); // 8023439C
  c->f[31]=c->f[1]; // 802343A0
  c->r[3]=c->r[30]|c->r[30]; // 802343A4
  c->lr=0x802343ACu; f_8012AA08(c); // 802343A8
  c->f[1]=c->f[31]; // 802343AC
  c->lr=0x802343B4u; f_80110580(c); // 802343B0
  c->r[3]=c->r[31]|c->r[31]; // 802343B4
  c->lr=0x802343BCu; f_8012FD08(c); // 802343B8
  c->f[31]=c->f[1]; // 802343BC
  c->r[3]=c->r[30]|c->r[30]; // 802343C0
  c->lr=0x802343C8u; f_8012AA10(c); // 802343C4
  c->f[1]=c->f[31]; // 802343C8
  c->lr=0x802343D0u; f_80110588(c); // 802343CC
  c->r[3]=c->r[31]|c->r[31]; // 802343D0
  c->lr=0x802343D8u; f_8012FD10(c); // 802343D4
  c->f[31]=c->f[1]; // 802343D8
  c->r[3]=c->r[30]|c->r[30]; // 802343DC
  c->lr=0x802343E4u; f_8012AA08(c); // 802343E0
  c->f[1]=c->f[31]; // 802343E4
  c->lr=0x802343ECu; f_80110588(c); // 802343E8
  c->lr=0x802343F0u; f_8011A9D8(c); // 802343EC
  c->r[4]=0u+0x00000000u; // 802343F0
  c->lr=0x802343F8u; f_8011AF74(c); // 802343F4
  c->r[31]=c->r[3]|c->r[3]; // 802343F8
  c->lr=0x80234400u; f_8011A6E8(c); // 802343FC
  c->r[4]=c->r[31]|c->r[31]; // 80234400
  c->lr=0x80234408u; f_8011A9B0(c); // 80234404
  c->lr=0x8023440Cu; f_8012DA20(c); // 80234408
  c->r[4]=c->r[3]|c->r[3]; // 8023440C
  c->r[3]=c->r[30]|c->r[30]; // 80234410
  c->lr=0x80234418u; f_80114AA0(c); // 80234414
  c->r[3]=c->r[30]|c->r[30]; // 80234418
  c->r[4]=0u+0x0000000Du; // 8023441C
  c->r[5]=0u+0x00000000u; // 80234420
  c->r[6]=0u+0xFFFFFFFFu; // 80234424
  c->lr=0x8023442Cu; f_8012DE5C(c); // 80234428
  c->r[3]=c->r[30]|c->r[30]; // 8023442C
  c->lr=0x80234434u; f_8012F448(c); // 80234430
  c->r[3]=c->r[30]|c->r[30]; // 80234434
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 80234438
  c->r[4]=0u+0x00000006u; // 8023443C
  c->lr=0x80234444u; f_8012E920(c); // 80234440
  c->r[3]=c->r[30]|c->r[30]; // 80234444
  c->r[4]=0u+0x00000001u; // 80234448
  c->lr=0x80234450u; f_8012E1C0(c); // 8023444C
  c->r[3]=c->r[30]|c->r[30]; // 80234450
  c->r[4]=0u+0x00000000u; // 80234454
  c->lr=0x8023445Cu; f_8012F910(c); // 80234458
  c->r[0]=0u+0x00000018u; // 8023445C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80234460
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80234464
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234468
  c->r[30]=R32(c->r[1]+0x00000008u); // 8023446C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80234470
  c->lr=c->r[0]; // 80234474
  c->r[1]=c->r[1]+0x00000020u; // 80234478
  return; // 8023447C
}

// fn_80234480
void f_80234480(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234480
  c->r[0]=c->lr; // 80234484
  W32(c->r[1]+0x00000034u,c->r[0]); // 80234488
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8023448C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80234490
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80234494
  W32(c->r[1]+0x00000018u,c->r[30]); // 80234498
  W32(c->r[1]+0x00000014u,c->r[29]); // 8023449C
  c->r[29]=c->r[3]|c->r[3]; // 802344A0
  c->lr=0x802344A8u; f_8011B41C(c); // 802344A4
  c->r[4]=0u+0x0000000Du; // 802344A8
  c->lr=0x802344B0u; f_8011B814(c); // 802344AC
  c->r[31]=c->r[3]|c->r[3]; // 802344B0
  c->lr=0x802344B8u; f_8011B41C(c); // 802344B4
  c->r[4]=0u+0x00000019u; // 802344B8
  c->lr=0x802344C0u; f_8011B814(c); // 802344BC
  c->r[30]=c->r[3]|c->r[3]; // 802344C0
  c->r[4]=0u+0x00000010u; // 802344C4
  c->lr=0x802344CCu; f_8011959C(c); // 802344C8
  {uint32_t ea=c->r[29]+0x00000B38u; WF32(ea,c->f[1]);} // 802344CC
  c->r[3]=c->r[30]|c->r[30]; // 802344D0
  c->r[4]=0u+0x00000011u; // 802344D4
  c->lr=0x802344DCu; f_8011959C(c); // 802344D8
  {uint32_t ea=c->r[29]+0x00000B3Cu; WF32(ea,c->f[1]);} // 802344DC
  c->r[3]=c->r[30]|c->r[30]; // 802344E0
  c->r[4]=0u+0x00000010u; // 802344E4
  c->lr=0x802344ECu; f_801195C4(c); // 802344E8
  {uint32_t ea=c->r[29]+0x00000B40u; WF32(ea,c->f[1]);} // 802344EC
  c->r[3]=c->r[30]|c->r[30]; // 802344F0
  c->r[4]=0u+0x00000011u; // 802344F4
  c->lr=0x802344FCu; f_801195C4(c); // 802344F8
  {uint32_t ea=c->r[29]+0x00000B44u; WF32(ea,c->f[1]);} // 802344FC
  c->r[3]=c->r[31]|c->r[31]; // 80234500
  c->lr=0x80234508u; f_80236AF4(c); // 80234504
  c->r[3]=c->r[29]|c->r[29]; // 80234508
  c->lr=0x80234510u; f_80117D04(c); // 8023450C
  c->r[3]=c->r[29]|c->r[29]; // 80234510
  {uint32_t ea=c->r[2]+0xFFFF9B34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80234514
  c->f[2]=c->f[1]; // 80234518
  c->f[3]=c->f[1]; // 8023451C
  c->lr=0x80234524u; f_80114AB8(c); // 80234520
  c->r[3]=c->r[31]|c->r[31]; // 80234524
  c->lr=0x8023452Cu; f_80236B0C(c); // 80234528
  c->f[31]=c->f[1]; // 8023452C
  c->r[3]=c->r[31]|c->r[31]; // 80234530
  c->lr=0x80234538u; f_80236B0C(c); // 80234534
  c->r[3]=c->r[29]|c->r[29]; // 80234538
  c->f[2]=c->f[31]; // 8023453C
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[3]=c->ps1[3]=RF32(ea);} // 80234540
  c->lr=0x80234548u; f_80114AA8(c); // 80234544
  c->r[3]=c->r[31]|c->r[31]; // 80234548
  c->lr=0x80234550u; f_8012FCB0(c); // 8023454C
  c->r[3]=c->r[29]|c->r[29]; // 80234550
  c->lr=0x80234558u; f_8012FA30(c); // 80234554
  c->r[3]=c->r[31]|c->r[31]; // 80234558
  c->lr=0x80234560u; f_8012FCB8(c); // 8023455C
  c->r[3]=c->r[29]|c->r[29]; // 80234560
  c->lr=0x80234568u; f_8012FA38(c); // 80234564
  c->r[3]=c->r[31]|c->r[31]; // 80234568
  c->lr=0x80234570u; f_8012FCC8(c); // 8023456C
  c->r[3]=c->r[29]|c->r[29]; // 80234570
  c->lr=0x80234578u; f_8012FA4C(c); // 80234574
  c->r[3]=c->r[31]|c->r[31]; // 80234578
  c->lr=0x80234580u; f_8012FCD0(c); // 8023457C
  c->r[3]=c->r[29]|c->r[29]; // 80234580
  c->lr=0x80234588u; f_8012FA54(c); // 80234584
  c->r[3]=c->r[31]|c->r[31]; // 80234588
  c->lr=0x80234590u; f_8012FCE8(c); // 8023458C
  c->r[3]=c->r[29]|c->r[29]; // 80234590
  c->lr=0x80234598u; f_8012FA6C(c); // 80234594
  c->r[3]=c->r[31]|c->r[31]; // 80234598
  c->lr=0x802345A0u; f_8012FCD0(c); // 8023459C
  c->r[3]=c->r[29]|c->r[29]; // 802345A0
  c->lr=0x802345A8u; f_8012FA74(c); // 802345A4
  c->r[3]=c->r[31]|c->r[31]; // 802345A8
  c->lr=0x802345B0u; f_8012FCE0(c); // 802345AC
  c->r[4]=c->r[3]|c->r[3]; // 802345B0
  c->r[3]=c->r[29]|c->r[29]; // 802345B4
  c->lr=0x802345BCu; f_8012F918(c); // 802345B8
  c->r[3]=c->r[31]|c->r[31]; // 802345BC
  c->lr=0x802345C4u; f_8012FCF8(c); // 802345C0
  c->f[31]=c->f[1]; // 802345C4
  c->r[3]=c->r[29]|c->r[29]; // 802345C8
  c->lr=0x802345D0u; f_8012AA10(c); // 802345CC
  c->f[1]=c->f[31]; // 802345D0
  c->lr=0x802345D8u; f_80110580(c); // 802345D4
  c->r[3]=c->r[31]|c->r[31]; // 802345D8
  c->lr=0x802345E0u; f_8012FD00(c); // 802345DC
  c->f[31]=c->f[1]; // 802345E0
  c->r[3]=c->r[29]|c->r[29]; // 802345E4
  c->lr=0x802345ECu; f_8012AA08(c); // 802345E8
  c->f[1]=c->f[31]; // 802345EC
  c->lr=0x802345F4u; f_80110580(c); // 802345F0
  c->r[3]=c->r[31]|c->r[31]; // 802345F4
  c->lr=0x802345FCu; f_8012FD08(c); // 802345F8
  c->f[31]=c->f[1]; // 802345FC
  c->r[3]=c->r[29]|c->r[29]; // 80234600
  c->lr=0x80234608u; f_8012AA10(c); // 80234604
  c->f[1]=c->f[31]; // 80234608
  c->lr=0x80234610u; f_80110588(c); // 8023460C
  c->r[3]=c->r[31]|c->r[31]; // 80234610
  c->lr=0x80234618u; f_8012FD10(c); // 80234614
  c->f[31]=c->f[1]; // 80234618
  c->r[3]=c->r[29]|c->r[29]; // 8023461C
  c->lr=0x80234624u; f_8012AA08(c); // 80234620
  c->f[1]=c->f[31]; // 80234624
  c->lr=0x8023462Cu; f_80110588(c); // 80234628
  c->r[0]=0u+0x00000028u; // 8023462C
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80234630
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80234634
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80234638
  c->r[30]=R32(c->r[1]+0x00000018u); // 8023463C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80234640
  c->r[0]=R32(c->r[1]+0x00000034u); // 80234644
  c->lr=c->r[0]; // 80234648
  c->r[1]=c->r[1]+0x00000030u; // 8023464C
  return; // 80234650
}

// fn_80234654
void f_80234654(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234654
  c->r[0]=c->lr; // 80234658
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023465C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80234660
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80234664
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80234668
  W32(c->r[1]+0x00000008u,c->r[30]); // 8023466C
  c->r[30]=c->r[3]|c->r[3]; // 80234670
  c->lr=0x80234678u; f_8011B41C(c); // 80234674
  c->r[4]=0u+0x0000000Du; // 80234678
  c->lr=0x80234680u; f_8011B814(c); // 8023467C
  c->r[31]=c->r[3]|c->r[3]; // 80234680
  c->lr=0x80234688u; f_80236B24(c); // 80234684
  c->r[3]=c->r[30]|c->r[30]; // 80234688
  c->lr=0x80234690u; f_80117D04(c); // 8023468C
  c->r[3]=c->r[31]|c->r[31]; // 80234690
  c->lr=0x80234698u; f_80236B3C(c); // 80234694
  c->f[31]=c->f[1]; // 80234698
  c->r[3]=c->r[31]|c->r[31]; // 8023469C
  c->lr=0x802346A4u; f_80236B3C(c); // 802346A0
  c->r[3]=c->r[30]|c->r[30]; // 802346A4
  c->f[2]=c->f[31]; // 802346A8
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[3]=c->ps1[3]=RF32(ea);} // 802346AC
  c->lr=0x802346B4u; f_80114AA8(c); // 802346B0
  c->r[3]=c->r[31]|c->r[31]; // 802346B4
  c->lr=0x802346BCu; f_8012FCB0(c); // 802346B8
  c->r[3]=c->r[30]|c->r[30]; // 802346BC
  c->lr=0x802346C4u; f_8012FA30(c); // 802346C0
  c->r[3]=c->r[31]|c->r[31]; // 802346C4
  c->lr=0x802346CCu; f_8012FCB8(c); // 802346C8
  c->r[3]=c->r[30]|c->r[30]; // 802346CC
  c->lr=0x802346D4u; f_8012FA38(c); // 802346D0
  c->r[3]=c->r[31]|c->r[31]; // 802346D4
  c->lr=0x802346DCu; f_8012FCC8(c); // 802346D8
  c->r[3]=c->r[30]|c->r[30]; // 802346DC
  c->lr=0x802346E4u; f_8012FA4C(c); // 802346E0
  c->r[3]=c->r[31]|c->r[31]; // 802346E4
  c->lr=0x802346ECu; f_8012FCD0(c); // 802346E8
  c->r[3]=c->r[30]|c->r[30]; // 802346EC
  c->lr=0x802346F4u; f_8012FA54(c); // 802346F0
  c->r[3]=c->r[31]|c->r[31]; // 802346F4
  c->lr=0x802346FCu; f_8012FCE8(c); // 802346F8
  c->r[3]=c->r[30]|c->r[30]; // 802346FC
  c->lr=0x80234704u; f_8012FA6C(c); // 80234700
  c->r[3]=c->r[31]|c->r[31]; // 80234704
  c->lr=0x8023470Cu; f_8012FCF0(c); // 80234708
  c->r[3]=c->r[30]|c->r[30]; // 8023470C
  c->lr=0x80234714u; f_8012FA74(c); // 80234710
  c->r[3]=c->r[31]|c->r[31]; // 80234714
  c->lr=0x8023471Cu; f_8012FCE0(c); // 80234718
  c->r[4]=c->r[3]|c->r[3]; // 8023471C
  c->r[3]=c->r[30]|c->r[30]; // 80234720
  c->lr=0x80234728u; f_8012F918(c); // 80234724
  c->r[3]=c->r[31]|c->r[31]; // 80234728
  c->lr=0x80234730u; f_8012FCF8(c); // 8023472C
  c->f[31]=c->f[1]; // 80234730
  c->r[3]=c->r[30]|c->r[30]; // 80234734
  c->lr=0x8023473Cu; f_8012AA10(c); // 80234738
  c->f[1]=c->f[31]; // 8023473C
  c->lr=0x80234744u; f_80110580(c); // 80234740
  c->r[3]=c->r[31]|c->r[31]; // 80234744
  c->lr=0x8023474Cu; f_8012FD00(c); // 80234748
  c->f[31]=c->f[1]; // 8023474C
  c->r[3]=c->r[30]|c->r[30]; // 80234750
  c->lr=0x80234758u; f_8012AA08(c); // 80234754
  c->f[1]=c->f[31]; // 80234758
  c->lr=0x80234760u; f_80110580(c); // 8023475C
  c->r[3]=c->r[31]|c->r[31]; // 80234760
  c->lr=0x80234768u; f_8012FD08(c); // 80234764
  c->f[31]=c->f[1]; // 80234768
  c->r[3]=c->r[30]|c->r[30]; // 8023476C
  c->lr=0x80234774u; f_8012AA10(c); // 80234770
  c->f[1]=c->f[31]; // 80234774
  c->lr=0x8023477Cu; f_80110588(c); // 80234778
  c->r[3]=c->r[31]|c->r[31]; // 8023477C
  c->lr=0x80234784u; f_8012FD10(c); // 80234780
  c->f[31]=c->f[1]; // 80234784
  c->r[3]=c->r[30]|c->r[30]; // 80234788
  c->lr=0x80234790u; f_8012AA08(c); // 8023478C
  c->f[1]=c->f[31]; // 80234790
  c->lr=0x80234798u; f_80110588(c); // 80234794
  c->lr=0x8023479Cu; f_8011A9D8(c); // 80234798
  c->r[4]=0u+0x00000000u; // 8023479C
  c->lr=0x802347A4u; f_8011AF74(c); // 802347A0
  c->r[31]=c->r[3]|c->r[3]; // 802347A4
  c->lr=0x802347ACu; f_8011A6E8(c); // 802347A8
  c->r[4]=c->r[31]|c->r[31]; // 802347AC
  c->lr=0x802347B4u; f_8011A9B0(c); // 802347B0
  c->lr=0x802347B8u; f_8012DA20(c); // 802347B4
  c->r[4]=c->r[3]|c->r[3]; // 802347B8
  c->r[3]=c->r[30]|c->r[30]; // 802347BC
  c->lr=0x802347C4u; f_80114AA0(c); // 802347C0
  c->r[0]=R32(c->r[30]+0x000009F8u); // 802347C4
  cmps(c,0,(int32_t)c->r[0],0); // 802347C8
  if (!crb(c,2)) { goto L_802347DC; } // 802347CC
  c->r[3]=c->r[30]|c->r[30]; // 802347D0
  c->r[4]=0u+0x00000004u; // 802347D4
  c->lr=0x802347DCu; f_8012F440(c); // 802347D8
L_802347DC:;
  c->r[3]=c->r[30]|c->r[30]; // 802347DC
  c->r[4]=0u+0x0000000Du; // 802347E0
  c->r[5]=0u+0x00000002u; // 802347E4
  c->r[6]=0u+0xFFFFFFFFu; // 802347E8
  c->lr=0x802347F0u; f_8012DE5C(c); // 802347EC
  c->r[3]=c->r[30]|c->r[30]; // 802347F0
  c->lr=0x802347F8u; f_8012F448(c); // 802347F4
  c->r[3]=c->r[30]|c->r[30]; // 802347F8
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 802347FC
  c->r[4]=0u+0x00000006u; // 80234800
  c->lr=0x80234808u; f_8012E920(c); // 80234804
  c->r[3]=c->r[30]|c->r[30]; // 80234808
  c->r[4]=0u+0x00000001u; // 8023480C
  c->lr=0x80234814u; f_8012E1C0(c); // 80234810
  c->r[3]=c->r[30]|c->r[30]; // 80234814
  c->r[4]=0u+0x00000000u; // 80234818
  c->lr=0x80234820u; f_8012F910(c); // 8023481C
  c->r[0]=0u+0x00000018u; // 80234820
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80234824
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80234828
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023482C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80234830
  c->r[0]=R32(c->r[1]+0x00000024u); // 80234834
  c->lr=c->r[0]; // 80234838
  c->r[1]=c->r[1]+0x00000020u; // 8023483C
  return; // 80234840
}

// fn_80234844
void f_80234844(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234844
  c->r[0]=c->lr; // 80234848
  W32(c->r[1]+0x00000024u,c->r[0]); // 8023484C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80234850
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80234854
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80234858
  W32(c->r[1]+0x00000008u,c->r[30]); // 8023485C
  c->r[30]=c->r[3]|c->r[3]; // 80234860
  c->lr=0x80234868u; f_8011B41C(c); // 80234864
  c->r[4]=0u+0x0000000Du; // 80234868
  c->lr=0x80234870u; f_8011B814(c); // 8023486C
  c->r[31]=c->r[3]|c->r[3]; // 80234870
  c->lr=0x80234878u; f_80236B80(c); // 80234874
  c->r[3]=c->r[30]|c->r[30]; // 80234878
  c->lr=0x80234880u; f_80117D04(c); // 8023487C
  c->r[3]=c->r[31]|c->r[31]; // 80234880
  c->lr=0x80234888u; f_80236B98(c); // 80234884
  c->f[31]=c->f[1]; // 80234888
  c->r[3]=c->r[31]|c->r[31]; // 8023488C
  c->lr=0x80234894u; f_80236B98(c); // 80234890
  c->r[3]=c->r[30]|c->r[30]; // 80234894
  c->f[2]=c->f[31]; // 80234898
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023489C
  c->lr=0x802348A4u; f_80114AA8(c); // 802348A0
  c->r[3]=c->r[31]|c->r[31]; // 802348A4
  c->lr=0x802348ACu; f_8012FCB0(c); // 802348A8
  c->r[3]=c->r[30]|c->r[30]; // 802348AC
  c->lr=0x802348B4u; f_8012FA30(c); // 802348B0
  c->r[3]=c->r[31]|c->r[31]; // 802348B4
  c->lr=0x802348BCu; f_8012FCB8(c); // 802348B8
  c->r[3]=c->r[30]|c->r[30]; // 802348BC
  c->lr=0x802348C4u; f_8012FA38(c); // 802348C0
  c->r[3]=c->r[31]|c->r[31]; // 802348C4
  c->lr=0x802348CCu; f_8012FCC8(c); // 802348C8
  c->r[3]=c->r[30]|c->r[30]; // 802348CC
  c->lr=0x802348D4u; f_8012FA4C(c); // 802348D0
  c->r[3]=c->r[31]|c->r[31]; // 802348D4
  c->lr=0x802348DCu; f_8012FCD0(c); // 802348D8
  c->r[3]=c->r[30]|c->r[30]; // 802348DC
  c->lr=0x802348E4u; f_8012FA54(c); // 802348E0
  c->r[3]=c->r[31]|c->r[31]; // 802348E4
  c->lr=0x802348ECu; f_8012FCE8(c); // 802348E8
  c->r[3]=c->r[30]|c->r[30]; // 802348EC
  c->lr=0x802348F4u; f_8012FA6C(c); // 802348F0
  c->r[3]=c->r[31]|c->r[31]; // 802348F4
  c->lr=0x802348FCu; f_8012FCF0(c); // 802348F8
  c->r[3]=c->r[30]|c->r[30]; // 802348FC
  c->lr=0x80234904u; f_8012FA74(c); // 80234900
  c->r[3]=c->r[31]|c->r[31]; // 80234904
  c->lr=0x8023490Cu; f_8012FCE0(c); // 80234908
  c->r[4]=c->r[3]|c->r[3]; // 8023490C
  c->r[3]=c->r[30]|c->r[30]; // 80234910
  c->lr=0x80234918u; f_8012F918(c); // 80234914
  c->r[3]=c->r[31]|c->r[31]; // 80234918
  c->lr=0x80234920u; f_8012FCF8(c); // 8023491C
  c->f[31]=c->f[1]; // 80234920
  c->r[3]=c->r[30]|c->r[30]; // 80234924
  c->lr=0x8023492Cu; f_8012AA10(c); // 80234928
  c->f[1]=c->f[31]; // 8023492C
  c->lr=0x80234934u; f_80110580(c); // 80234930
  c->r[3]=c->r[31]|c->r[31]; // 80234934
  c->lr=0x8023493Cu; f_8012FD00(c); // 80234938
  c->f[31]=c->f[1]; // 8023493C
  c->r[3]=c->r[30]|c->r[30]; // 80234940
  c->lr=0x80234948u; f_8012AA08(c); // 80234944
  c->f[1]=c->f[31]; // 80234948
  c->lr=0x80234950u; f_80110580(c); // 8023494C
  c->r[3]=c->r[31]|c->r[31]; // 80234950
  c->lr=0x80234958u; f_8012FD08(c); // 80234954
  c->f[31]=c->f[1]; // 80234958
  c->r[3]=c->r[30]|c->r[30]; // 8023495C
  c->lr=0x80234964u; f_8012AA10(c); // 80234960
  c->f[1]=c->f[31]; // 80234964
  c->lr=0x8023496Cu; f_80110588(c); // 80234968
  c->r[3]=c->r[31]|c->r[31]; // 8023496C
  c->lr=0x80234974u; f_8012FD10(c); // 80234970
  c->f[31]=c->f[1]; // 80234974
  c->r[3]=c->r[30]|c->r[30]; // 80234978
  c->lr=0x80234980u; f_8012AA08(c); // 8023497C
  c->f[1]=c->f[31]; // 80234980
  c->lr=0x80234988u; f_80110588(c); // 80234984
  c->lr=0x8023498Cu; f_8011A9D8(c); // 80234988
  c->r[4]=0u+0x00000000u; // 8023498C
  c->lr=0x80234994u; f_8011AF74(c); // 80234990
  c->r[31]=c->r[3]|c->r[3]; // 80234994
  c->lr=0x8023499Cu; f_8011A6E8(c); // 80234998
  c->r[4]=c->r[31]|c->r[31]; // 8023499C
  c->lr=0x802349A4u; f_8011A9B0(c); // 802349A0
  c->lr=0x802349A8u; f_8012DA20(c); // 802349A4
  c->r[4]=c->r[3]|c->r[3]; // 802349A8
  c->r[3]=c->r[30]|c->r[30]; // 802349AC
  c->lr=0x802349B4u; f_80114AA0(c); // 802349B0
  c->r[0]=R32(c->r[30]+0x000009F8u); // 802349B4
  cmps(c,0,(int32_t)c->r[0],0); // 802349B8
  if (!crb(c,2)) { goto L_802349CC; } // 802349BC
  c->r[3]=c->r[30]|c->r[30]; // 802349C0
  c->r[4]=0u+0x00000007u; // 802349C4
  c->lr=0x802349CCu; f_8012F440(c); // 802349C8
L_802349CC:;
  c->r[3]=c->r[30]|c->r[30]; // 802349CC
  c->r[4]=0u+0x0000000Du; // 802349D0
  c->r[5]=0u+0x00000001u; // 802349D4
  c->r[6]=0u+0xFFFFFFFFu; // 802349D8
  c->lr=0x802349E0u; f_8012DE5C(c); // 802349DC
  c->r[3]=c->r[30]|c->r[30]; // 802349E0
  c->lr=0x802349E8u; f_8012F448(c); // 802349E4
  c->r[3]=c->r[30]|c->r[30]; // 802349E8
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[1]=c->ps1[1]=RF32(ea);} // 802349EC
  c->r[4]=0u+0x00000006u; // 802349F0
  c->lr=0x802349F8u; f_8012E920(c); // 802349F4
  c->r[3]=c->r[30]|c->r[30]; // 802349F8
  c->r[4]=0u+0x00000001u; // 802349FC
  c->lr=0x80234A04u; f_8012E1C0(c); // 80234A00
  c->r[3]=c->r[30]|c->r[30]; // 80234A04
  c->r[4]=0u+0x00000000u; // 80234A08
  c->lr=0x80234A10u; f_8012F910(c); // 80234A0C
  c->r[0]=0u+0x00000018u; // 80234A10
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80234A14
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80234A18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234A1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80234A20
  c->r[0]=R32(c->r[1]+0x00000024u); // 80234A24
  c->lr=c->r[0]; // 80234A28
  c->r[1]=c->r[1]+0x00000020u; // 80234A2C
  return; // 80234A30
}

// fn_80234A34
void f_80234A34(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234A34
  c->r[0]=c->lr; // 80234A38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80234A3C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80234A40
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80234A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80234A48
  W32(c->r[1]+0x00000008u,c->r[30]); // 80234A4C
  c->r[30]=c->r[3]|c->r[3]; // 80234A50
  c->lr=0x80234A58u; f_8011B41C(c); // 80234A54
  c->r[4]=0u+0x0000000Du; // 80234A58
  c->lr=0x80234A60u; f_8011B814(c); // 80234A5C
  c->r[31]=c->r[3]|c->r[3]; // 80234A60
  c->lr=0x80234A68u; f_8012FCB8(c); // 80234A64
  c->f[31]=c->f[1]; // 80234A68
  c->r[3]=c->r[31]|c->r[31]; // 80234A6C
  c->lr=0x80234A74u; f_8012FCB0(c); // 80234A70
  c->r[3]=c->r[30]|c->r[30]; // 80234A74
  c->f[2]=c->f[31]; // 80234A78
  c->lr=0x80234A80u; f_80131C2C(c); // 80234A7C
  c->r[3]=c->r[31]|c->r[31]; // 80234A80
  c->lr=0x80234A88u; f_8012FCD0(c); // 80234A84
  c->f[31]=c->f[1]; // 80234A88
  c->r[3]=c->r[31]|c->r[31]; // 80234A8C
  c->lr=0x80234A94u; f_8012FCC8(c); // 80234A90
  c->r[3]=c->r[30]|c->r[30]; // 80234A94
  c->f[2]=c->f[31]; // 80234A98
  c->lr=0x80234AA0u; f_80131C48(c); // 80234A9C
  c->r[3]=c->r[31]|c->r[31]; // 80234AA0
  c->lr=0x80234AA8u; f_8012FCE8(c); // 80234AA4
  c->r[3]=c->r[30]|c->r[30]; // 80234AA8
  c->lr=0x80234AB0u; f_80131C64(c); // 80234AAC
  c->r[3]=c->r[31]|c->r[31]; // 80234AB0
  c->lr=0x80234AB8u; f_8012FCF0(c); // 80234AB4
  c->r[3]=c->r[30]|c->r[30]; // 80234AB8
  c->lr=0x80234AC0u; f_80131C6C(c); // 80234ABC
  c->r[3]=c->r[31]|c->r[31]; // 80234AC0
  c->lr=0x80234AC8u; f_8012FCE0(c); // 80234AC4
  c->r[4]=c->r[3]|c->r[3]; // 80234AC8
  c->r[3]=c->r[30]|c->r[30]; // 80234ACC
  c->lr=0x80234AD4u; f_80131B68(c); // 80234AD0
  c->r[3]=c->r[31]|c->r[31]; // 80234AD4
  c->lr=0x80234ADCu; f_8012FCF8(c); // 80234AD8
  c->r[3]=c->r[30]+0x00003158u; // 80234ADC
  c->lr=0x80234AE4u; f_80110580(c); // 80234AE0
  c->r[3]=c->r[31]|c->r[31]; // 80234AE4
  c->lr=0x80234AECu; f_8012FD00(c); // 80234AE8
  c->r[3]=c->r[30]+0x000031A0u; // 80234AEC
  c->lr=0x80234AF4u; f_80110580(c); // 80234AF0
  c->r[3]=c->r[31]|c->r[31]; // 80234AF4
  c->lr=0x80234AFCu; f_8012FD08(c); // 80234AF8
  c->r[3]=c->r[30]+0x00003158u; // 80234AFC
  c->lr=0x80234B04u; f_80110588(c); // 80234B00
  c->r[3]=c->r[31]|c->r[31]; // 80234B04
  c->lr=0x80234B0Cu; f_8012FD10(c); // 80234B08
  c->r[3]=c->r[30]+0x000031A0u; // 80234B0C
  c->lr=0x80234B14u; f_80110588(c); // 80234B10
  c->r[3]=c->r[30]|c->r[30]; // 80234B14
  {uint32_t ea=c->r[2]+0xFFFF9B34u; c->f[1]=c->ps1[1]=RF32(ea);} // 80234B18
  c->f[2]=c->f[1]; // 80234B1C
  c->lr=0x80234B24u; f_801313A0(c); // 80234B20
  c->r[3]=c->r[31]|c->r[31]; // 80234B24
  c->lr=0x80234B2Cu; f_80236C18(c); // 80234B28
  c->f[31]=c->f[1]; // 80234B2C
  c->r[3]=c->r[31]|c->r[31]; // 80234B30
  c->lr=0x80234B38u; f_80236C18(c); // 80234B34
  c->r[3]=c->r[30]|c->r[30]; // 80234B38
  c->f[2]=c->f[31]; // 80234B3C
  c->lr=0x80234B44u; f_801313AC(c); // 80234B40
  c->r[3]=c->r[30]|c->r[30]; // 80234B44
  c->r[4]=c->r[13]+0xFFFFA558u; // 80234B48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80234B4C
  c->lr=0x80234B54u; f_801313D4(c); // 80234B50
  c->r[0]=0u+0x00000018u; // 80234B54
  {uint32_t ea=c->r[1]+c->r[0]; psq_load(c,31,ea,0,0);} // 80234B58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80234B5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234B60
  c->r[30]=R32(c->r[1]+0x00000008u); // 80234B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80234B68
  c->lr=c->r[0]; // 80234B6C
  c->r[1]=c->r[1]+0x00000020u; // 80234B70
  return; // 80234B74
}

// fn_80234B78
void f_80234B78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234B78
  c->r[0]=c->lr; // 80234B7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80234B80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80234B84
  c->r[31]=c->r[3]|c->r[3]; // 80234B88
  c->lr=0x80234B90u; f_8012FAAC(c); // 80234B8C
  c->r[3]=0u+0x80480000u; // 80234B90
  c->r[0]=c->r[3]+0x00000998u; // 80234B94
  W32(c->r[31]+0x00000058u,c->r[0]); // 80234B98
  c->r[0]=0u+0x00000000u; // 80234B9C
  W32(c->r[31]+0x000000C0u,c->r[0]); // 80234BA0
  W32(c->r[31]+0x000000C4u,c->r[0]); // 80234BA4
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80234BA8
  W32(c->r[31]+0x000000CCu,c->r[0]); // 80234BAC
  W32(c->r[31]+0x000000D0u,c->r[0]); // 80234BB0
  W32(c->r[31]+0x000000D8u,c->r[0]); // 80234BB4
  W32(c->r[31]+0x000000D4u,c->r[0]); // 80234BB8
  W32(c->r[31]+0x000000DCu,c->r[0]); // 80234BBC
  W32(c->r[31]+0x000000E0u,c->r[0]); // 80234BC0
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80234BC4
  W32(c->r[31]+0x000000E8u,c->r[0]); // 80234BC8
  W32(c->r[31]+0x000000F0u,c->r[0]); // 80234BCC
  W32(c->r[31]+0x000000ECu,c->r[0]); // 80234BD0
  W32(c->r[31]+0x000000F4u,c->r[0]); // 80234BD4
  W32(c->r[31]+0x000000F8u,c->r[0]); // 80234BD8
  W32(c->r[31]+0x000000FCu,c->r[0]); // 80234BDC
  W32(c->r[31]+0x00000100u,c->r[0]); // 80234BE0
  W32(c->r[31]+0x00000108u,c->r[0]); // 80234BE4
  W32(c->r[31]+0x00000104u,c->r[0]); // 80234BE8
  W32(c->r[31]+0x0000010Cu,c->r[0]); // 80234BEC
  W32(c->r[31]+0x00000114u,c->r[0]); // 80234BF0
  W32(c->r[31]+0x00000118u,c->r[0]); // 80234BF4
  W32(c->r[31]+0x0000011Cu,c->r[0]); // 80234BF8
  W32(c->r[31]+0x00000120u,c->r[0]); // 80234BFC
  W32(c->r[31]+0x00000110u,c->r[0]); // 80234C00
  c->r[3]=c->r[31]|c->r[31]; // 80234C04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80234C08
  c->r[0]=R32(c->r[1]+0x00000014u); // 80234C0C
  c->lr=c->r[0]; // 80234C10
  c->r[1]=c->r[1]+0x00000010u; // 80234C14
  return; // 80234C18
}

// fn_80234C1C
void f_80234C1C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80234C1C
  c->r[0]=c->lr; // 80234C20
  W32(c->r[1]+0x00000024u,c->r[0]); // 80234C24
  c->r[11]=c->r[1]+0x00000020u; // 80234C28
  c->lr=0x80234C30u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80234C2C
  c->r[30]=c->r[3]|c->r[3]; // 80234C30
  c->lr=0x80234C38u; f_8011C12C(c); // 80234C34
  c->r[4]=0u+0x0000000Du; // 80234C38
  c->lr=0x80234C40u; f_8011CFF4(c); // 80234C3C
  c->r[31]=c->r[3]|c->r[3]; // 80234C40
  c->lr=0x80234C48u; f_80056B5C(c); // 80234C44
  c->r[27]=c->r[3]|c->r[3]; // 80234C48
  c->lr=0x80234C50u; f_801F1340(c); // 80234C4C
  c->lr=0x80234C54u; f_80056B54(c); // 80234C50
  c->r[3]=0u+0x00000B28u; // 80234C54
  c->lr=0x80234C5Cu; f_80047B64(c); // 80234C58
  c->r[29]=c->r[3]|c->r[3]; // 80234C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80234C60
  if (crb(c,2)) { goto L_80234C6C; } // 80234C64
  c->lr=0x80234C6Cu; f_802368B0(c); // 80234C68
L_80234C6C:;
  W32(c->r[30]+0x000000C0u,c->r[29]); // 80234C6C
  c->r[3]=c->r[27]|c->r[27]; // 80234C70
  c->lr=0x80234C78u; f_80056B54(c); // 80234C74
  c->r[3]=R32(c->r[30]+0x000000C0u); // 80234C78
  c->r[4]=0u+0x00000000u; // 80234C7C
  c->lr=0x80234C84u; f_80114AE0(c); // 80234C80
  c->r[3]=R32(c->r[30]+0x000000C0u); // 80234C84
  c->r[4]=0u+0x00000000u; // 80234C88
  c->lr=0x80234C90u; f_801169C8(c); // 80234C8C
  c->r[3]=R32(c->r[30]+0x000000C0u); // 80234C90
  c->r[12]=R32(c->r[3]+0x00000020u); // 80234C94
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80234C98
  c->ctr=c->r[12]; // 80234C9C
  if (true) { c->lr=0x80234CA4u; dispatch(c,c->ctr); } // 80234CA0
  c->lr=0x80234CA8u; f_80056B5C(c); // 80234CA4
  c->r[27]=c->r[3]|c->r[3]; // 80234CA8
  c->lr=0x80234CB0u; f_801F1340(c); // 80234CAC
  c->lr=0x80234CB4u; f_80056B54(c); // 80234CB0
  c->r[3]=0u+0x00000B58u; // 80234CB4
  c->lr=0x80234CBCu; f_80047B64(c); // 80234CB8
  c->r[29]=c->r[3]|c->r[3]; // 80234CBC
  cmps(c,0,(int32_t)c->r[3],0); // 80234CC0
  if (crb(c,2)) { goto L_80234CCC; } // 80234CC4
  c->lr=0x80234CCCu; f_80236854(c); // 80234CC8
L_80234CCC:;
  W32(c->r[30]+0x000000C4u,c->r[29]); // 80234CCC
  c->r[3]=c->r[27]|c->r[27]; // 80234CD0
  c->lr=0x80234CD8u; f_80056B54(c); // 80234CD4
  c->lr=0x80234CDCu; f_80114E10(c); // 80234CD8
  c->lr=0x80234CE0u; f_801165B0(c); // 80234CDC
  c->r[4]=c->r[3]|c->r[3]; // 80234CE0
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80234CE4
  c->lr=0x80234CECu; f_80114AE0(c); // 80234CE8
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80234CEC
  c->r[4]=0u+0x00000000u; // 80234CF0
  c->lr=0x80234CF8u; f_80114AD8(c); // 80234CF4
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80234CF8
  c->r[4]=0u+0x0000000Au; // 80234CFC
  c->lr=0x80234D04u; f_80112704(c); // 80234D00
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80234D04
  c->r[12]=R32(c->r[3]+0x00000020u); // 80234D08
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80234D0C
  c->ctr=c->r[12]; // 80234D10
  if (true) { c->lr=0x80234D18u; dispatch(c,c->ctr); } // 80234D14
  c->lr=0x80234D1Cu; f_80056B5C(c); // 80234D18
  c->r[27]=c->r[3]|c->r[3]; // 80234D1C
  c->lr=0x80234D24u; f_801F1340(c); // 80234D20
  c->lr=0x80234D28u; f_80056B54(c); // 80234D24
  c->r[3]=0u+0x00000B28u; // 80234D28
  c->lr=0x80234D30u; f_80047B64(c); // 80234D2C
  c->r[29]=c->r[3]|c->r[3]; // 80234D30
  cmps(c,0,(int32_t)c->r[3],0); // 80234D34
  if (crb(c,2)) { goto L_80234D40; } // 80234D38
  c->lr=0x80234D40u; f_802367F8(c); // 80234D3C
L_80234D40:;
  W32(c->r[30]+0x000000C8u,c->r[29]); // 80234D40
  c->r[3]=c->r[27]|c->r[27]; // 80234D44
  c->lr=0x80234D4Cu; f_80056B54(c); // 80234D48
  c->r[3]=c->r[31]|c->r[31]; // 80234D4C
  c->lr=0x80234D54u; f_80237F2C(c); // 80234D50
  c->lr=0x80234D58u; f_80236698(c); // 80234D54
  c->lr=0x80234D5Cu; f_80116A2C(c); // 80234D58
  c->r[4]=c->r[3]|c->r[3]; // 80234D5C
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80234D60
  c->lr=0x80234D68u; f_80114AE0(c); // 80234D64
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80234D68
  c->r[4]=0u+0x00000000u; // 80234D6C
  c->lr=0x80234D74u; f_80114AD8(c); // 80234D70
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80234D74
  c->r[12]=R32(c->r[3]+0x00000020u); // 80234D78
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80234D7C
  c->ctr=c->r[12]; // 80234D80
  if (true) { c->lr=0x80234D88u; dispatch(c,c->ctr); } // 80234D84
  c->r[27]=0u+0x00000000u; // 80234D88
  c->r[28]=c->r[30]|c->r[30]; // 80234D8C
L_80234D90:;
  c->lr=0x80234D94u; f_80056B5C(c); // 80234D90
  c->r[26]=c->r[3]|c->r[3]; // 80234D94
  c->lr=0x80234D9Cu; f_801F1340(c); // 80234D98
  c->lr=0x80234DA0u; f_80056B54(c); // 80234D9C
  c->r[3]=0u+0x00000B28u; // 80234DA0
  c->lr=0x80234DA8u; f_80047B64(c); // 80234DA4
  c->r[29]=c->r[3]|c->r[3]; // 80234DA8
  cmps(c,0,(int32_t)c->r[3],0); // 80234DAC
  if (crb(c,2)) { goto L_80234DB8; } // 80234DB0
  c->lr=0x80234DB8u; f_8023679C(c); // 80234DB4
L_80234DB8:;
  W32(c->r[28]+0x000000D8u,c->r[29]); // 80234DB8
  c->r[3]=c->r[26]|c->r[26]; // 80234DBC
  c->lr=0x80234DC4u; f_80056B54(c); // 80234DC0
  c->r[3]=c->r[31]|c->r[31]; // 80234DC4
  c->lr=0x80234DCCu; f_80237F2C(c); // 80234DC8
  c->lr=0x80234DD0u; f_802366A0(c); // 80234DCC
  c->lr=0x80234DD4u; f_80116A2C(c); // 80234DD0
  c->r[4]=c->r[3]|c->r[3]; // 80234DD4
  c->r[3]=R32(c->r[28]+0x000000D8u); // 80234DD8
  c->lr=0x80234DE0u; f_80114AE0(c); // 80234DDC
  c->r[3]=R32(c->r[28]+0x000000D8u); // 80234DE0
  c->r[4]=c->r[27]|c->r[27]; // 80234DE4
  c->lr=0x80234DECu; f_80114AD8(c); // 80234DE8
  c->r[3]=R32(c->r[28]+0x000000D8u); // 80234DEC
  c->r[12]=R32(c->r[3]+0x00000020u); // 80234DF0
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80234DF4
  c->ctr=c->r[12]; // 80234DF8
  if (true) { c->lr=0x80234E00u; dispatch(c,c->ctr); } // 80234DFC
  c->r[28]=c->r[28]+0x00000004u; // 80234E00
  c->r[27]=c->r[27]+0x00000001u; // 80234E04
  cmps(c,0,(int32_t)c->r[27],2); // 80234E08
  if (crb(c,0)) { IRQCHK(c); goto L_80234D90; } // 80234E0C
  c->r[27]=0u+0x00000000u; // 80234E10
  c->r[28]=c->r[30]|c->r[30]; // 80234E14
L_80234E18:;
  c->lr=0x80234E1Cu; f_80056B5C(c); // 80234E18
  c->r[26]=c->r[3]|c->r[3]; // 80234E1C
  c->lr=0x80234E24u; f_801F1340(c); // 80234E20
  c->lr=0x80234E28u; f_80056B54(c); // 80234E24
  c->r[3]=0u+0x00003200u; // 80234E28
  c->lr=0x80234E30u; f_80047B64(c); // 80234E2C
  c->r[29]=c->r[3]|c->r[3]; // 80234E30
  cmps(c,0,(int32_t)c->r[3],0); // 80234E34
  if (crb(c,2)) { goto L_80234E40; } // 80234E38
  c->lr=0x80234E40u; f_80236760(c); // 80234E3C
L_80234E40:;
  W32(c->r[28]+0x000000D0u,c->r[29]); // 80234E40
  c->r[3]=c->r[26]|c->r[26]; // 80234E44
  c->lr=0x80234E4Cu; f_80056B54(c); // 80234E48
  c->r[3]=R32(c->r[28]+0x000000D0u); // 80234E4C
  c->r[12]=R32(c->r[3]+0x00000058u); // 80234E50
  c->r[12]=R32(c->r[12]+0x00000044u); // 80234E54
  c->ctr=c->r[12]; // 80234E58
  if (true) { c->lr=0x80234E60u; dispatch(c,c->ctr); } // 80234E5C
  c->r[28]=c->r[28]+0x00000004u; // 80234E60
  c->r[27]=c->r[27]+0x00000001u; // 80234E64
  cmps(c,0,(int32_t)c->r[27],2); // 80234E68
  if (crb(c,0)) { IRQCHK(c); goto L_80234E18; } // 80234E6C
  c->lr=0x80234E74u; f_80056B5C(c); // 80234E70
  c->r[26]=c->r[3]|c->r[3]; // 80234E74
  c->lr=0x80234E7Cu; f_801F1340(c); // 80234E78
  c->lr=0x80234E80u; f_80056B54(c); // 80234E7C
  c->r[3]=0u+0x00003200u; // 80234E80
  c->lr=0x80234E88u; f_80047B64(c); // 80234E84
  c->r[29]=c->r[3]|c->r[3]; // 80234E88
  cmps(c,0,(int32_t)c->r[3],0); // 80234E8C
  if (crb(c,2)) { goto L_80234E98; } // 80234E90
  c->lr=0x80234E98u; f_80236760(c); // 80234E94
L_80234E98:;
  W32(c->r[30]+0x000000CCu,c->r[29]); // 80234E98
  c->r[3]=c->r[26]|c->r[26]; // 80234E9C
  c->lr=0x80234EA4u; f_80056B54(c); // 80234EA0
  c->r[3]=R32(c->r[30]+0x000000CCu); // 80234EA4
  c->r[12]=R32(c->r[3]+0x00000058u); // 80234EA8
  c->r[12]=R32(c->r[12]+0x00000044u); // 80234EAC
  c->ctr=c->r[12]; // 80234EB0
  if (true) { c->lr=0x80234EB8u; dispatch(c,c->ctr); } // 80234EB4
  c->lr=0x80234EBCu; f_80056B5C(c); // 80234EB8
  c->r[26]=c->r[3]|c->r[3]; // 80234EBC
  c->lr=0x80234EC4u; f_801F1340(c); // 80234EC0
  c->lr=0x80234EC8u; f_80056B54(c); // 80234EC4
  c->r[3]=0u+0x00000B28u; // 80234EC8
  c->lr=0x80234ED0u; f_80047B64(c); // 80234ECC
  c->r[29]=c->r[3]|c->r[3]; // 80234ED0
  cmps(c,0,(int32_t)c->r[3],0); // 80234ED4
  if (crb(c,2)) { goto L_80234EE0; } // 80234ED8
  c->lr=0x80234EE0u; f_802367F8(c); // 80234EDC
L_80234EE0:;
  W32(c->r[30]+0x000000E0u,c->r[29]); // 80234EE0
  c->r[3]=c->r[26]|c->r[26]; // 80234EE4
  c->lr=0x80234EECu; f_80056B54(c); // 80234EE8
  c->r[3]=c->r[31]|c->r[31]; // 80234EEC
  c->lr=0x80234EF4u; f_80237F2C(c); // 80234EF0
  c->lr=0x80234EF8u; f_80236698(c); // 80234EF4
  c->lr=0x80234EFCu; f_80116A2C(c); // 80234EF8
  c->r[4]=c->r[3]|c->r[3]; // 80234EFC
  c->r[3]=R32(c->r[30]+0x000000E0u); // 80234F00
  c->lr=0x80234F08u; f_80114AE0(c); // 80234F04
  c->r[3]=R32(c->r[30]+0x000000E0u); // 80234F08
  c->r[4]=0u+0x00000000u; // 80234F0C
  c->lr=0x80234F14u; f_80114AD8(c); // 80234F10
  c->r[3]=R32(c->r[30]+0x000000E0u); // 80234F14
  c->r[12]=R32(c->r[3]+0x00000020u); // 80234F18
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80234F1C
  c->ctr=c->r[12]; // 80234F20
  if (true) { c->lr=0x80234F28u; dispatch(c,c->ctr); } // 80234F24
  c->r[27]=0u+0x00000000u; // 80234F28
  c->r[28]=c->r[30]|c->r[30]; // 80234F2C
L_80234F30:;
  c->lr=0x80234F34u; f_80056B5C(c); // 80234F30
  c->r[26]=c->r[3]|c->r[3]; // 80234F34
  c->lr=0x80234F3Cu; f_801F1340(c); // 80234F38
  c->lr=0x80234F40u; f_80056B54(c); // 80234F3C
  c->r[3]=0u+0x00000B28u; // 80234F40
  c->lr=0x80234F48u; f_80047B64(c); // 80234F44
  c->r[29]=c->r[3]|c->r[3]; // 80234F48
  cmps(c,0,(int32_t)c->r[3],0); // 80234F4C
  if (crb(c,2)) { goto L_80234F58; } // 80234F50
  c->lr=0x80234F58u; f_8023679C(c); // 80234F54
L_80234F58:;
  W32(c->r[28]+0x000000F0u,c->r[29]); // 80234F58
  c->r[3]=c->r[26]|c->r[26]; // 80234F5C
  c->lr=0x80234F64u; f_80056B54(c); // 80234F60
  c->r[3]=c->r[31]|c->r[31]; // 80234F64
  c->lr=0x80234F6Cu; f_80237F2C(c); // 80234F68
  c->lr=0x80234F70u; f_802366A0(c); // 80234F6C
  c->lr=0x80234F74u; f_80116A2C(c); // 80234F70
  c->r[4]=c->r[3]|c->r[3]; // 80234F74
  c->r[3]=R32(c->r[28]+0x000000F0u); // 80234F78
  c->lr=0x80234F80u; f_80114AE0(c); // 80234F7C
  c->r[3]=R32(c->r[28]+0x000000F0u); // 80234F80
  c->r[4]=c->r[27]|c->r[27]; // 80234F84
  c->lr=0x80234F8Cu; f_80114AD8(c); // 80234F88
  c->r[3]=R32(c->r[28]+0x000000F0u); // 80234F8C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80234F90
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80234F94
  c->ctr=c->r[12]; // 80234F98
  if (true) { c->lr=0x80234FA0u; dispatch(c,c->ctr); } // 80234F9C
  c->r[28]=c->r[28]+0x00000004u; // 80234FA0
  c->r[27]=c->r[27]+0x00000001u; // 80234FA4
  cmps(c,0,(int32_t)c->r[27],2); // 80234FA8
  if (crb(c,0)) { IRQCHK(c); goto L_80234F30; } // 80234FAC
  c->r[27]=0u+0x00000000u; // 80234FB0
  c->r[28]=c->r[30]|c->r[30]; // 80234FB4
L_80234FB8:;
  c->lr=0x80234FBCu; f_80056B5C(c); // 80234FB8
  c->r[26]=c->r[3]|c->r[3]; // 80234FBC
  c->lr=0x80234FC4u; f_801F1340(c); // 80234FC0
  c->lr=0x80234FC8u; f_80056B54(c); // 80234FC4
  c->r[3]=0u+0x00003200u; // 80234FC8
  c->lr=0x80234FD0u; f_80047B64(c); // 80234FCC
  c->r[29]=c->r[3]|c->r[3]; // 80234FD0
  cmps(c,0,(int32_t)c->r[3],0); // 80234FD4
  if (crb(c,2)) { goto L_80234FE0; } // 80234FD8
  c->lr=0x80234FE0u; f_80236760(c); // 80234FDC
L_80234FE0:;
  W32(c->r[28]+0x000000E8u,c->r[29]); // 80234FE0
  c->r[3]=c->r[26]|c->r[26]; // 80234FE4
  c->lr=0x80234FECu; f_80056B54(c); // 80234FE8
  c->r[3]=R32(c->r[28]+0x000000E8u); // 80234FEC
  c->r[12]=R32(c->r[3]+0x00000058u); // 80234FF0
  c->r[12]=R32(c->r[12]+0x00000044u); // 80234FF4
  c->ctr=c->r[12]; // 80234FF8
  if (true) { c->lr=0x80235000u; dispatch(c,c->ctr); } // 80234FFC
  c->r[28]=c->r[28]+0x00000004u; // 80235000
  c->r[27]=c->r[27]+0x00000001u; // 80235004
  cmps(c,0,(int32_t)c->r[27],2); // 80235008
  if (crb(c,0)) { IRQCHK(c); goto L_80234FB8; } // 8023500C
  c->lr=0x80235014u; f_80056B5C(c); // 80235010
  c->r[26]=c->r[3]|c->r[3]; // 80235014
  c->lr=0x8023501Cu; f_801F1340(c); // 80235018
  c->lr=0x80235020u; f_80056B54(c); // 8023501C
  c->r[3]=0u+0x00003200u; // 80235020
  c->lr=0x80235028u; f_80047B64(c); // 80235024
  c->r[29]=c->r[3]|c->r[3]; // 80235028
  cmps(c,0,(int32_t)c->r[3],0); // 8023502C
  if (crb(c,2)) { goto L_80235038; } // 80235030
  c->lr=0x80235038u; f_80236760(c); // 80235034
L_80235038:;
  W32(c->r[30]+0x000000E4u,c->r[29]); // 80235038
  c->r[3]=c->r[26]|c->r[26]; // 8023503C
  c->lr=0x80235044u; f_80056B54(c); // 80235040
  c->r[3]=R32(c->r[30]+0x000000E4u); // 80235044
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235048
  c->r[12]=R32(c->r[12]+0x00000044u); // 8023504C
  c->ctr=c->r[12]; // 80235050
  if (true) { c->lr=0x80235058u; dispatch(c,c->ctr); } // 80235054
  c->lr=0x8023505Cu; f_80056B5C(c); // 80235058
  c->r[26]=c->r[3]|c->r[3]; // 8023505C
  c->lr=0x80235064u; f_801F1340(c); // 80235060
  c->lr=0x80235068u; f_80056B54(c); // 80235064
  c->r[3]=0u+0x00000B28u; // 80235068
  c->lr=0x80235070u; f_80047B64(c); // 8023506C
  c->r[29]=c->r[3]|c->r[3]; // 80235070
  cmps(c,0,(int32_t)c->r[3],0); // 80235074
  if (crb(c,2)) { goto L_80235080; } // 80235078
  c->lr=0x80235080u; f_802367F8(c); // 8023507C
L_80235080:;
  W32(c->r[30]+0x000000F8u,c->r[29]); // 80235080
  c->r[3]=c->r[26]|c->r[26]; // 80235084
  c->lr=0x8023508Cu; f_80056B54(c); // 80235088
  c->r[3]=c->r[31]|c->r[31]; // 8023508C
  c->lr=0x80235094u; f_80237F2C(c); // 80235090
  c->lr=0x80235098u; f_80236698(c); // 80235094
  c->lr=0x8023509Cu; f_80116A2C(c); // 80235098
  c->r[4]=c->r[3]|c->r[3]; // 8023509C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 802350A0
  c->lr=0x802350A8u; f_80114AE0(c); // 802350A4
  c->r[3]=R32(c->r[30]+0x000000F8u); // 802350A8
  c->r[4]=0u+0x00000000u; // 802350AC
  c->lr=0x802350B4u; f_80114AD8(c); // 802350B0
  c->r[3]=R32(c->r[30]+0x000000F8u); // 802350B4
  c->r[12]=R32(c->r[3]+0x00000020u); // 802350B8
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 802350BC
  c->ctr=c->r[12]; // 802350C0
  if (true) { c->lr=0x802350C8u; dispatch(c,c->ctr); } // 802350C4
  c->r[27]=0u+0x00000000u; // 802350C8
  c->r[28]=c->r[30]|c->r[30]; // 802350CC
L_802350D0:;
  c->lr=0x802350D4u; f_80056B5C(c); // 802350D0
  c->r[26]=c->r[3]|c->r[3]; // 802350D4
  c->lr=0x802350DCu; f_801F1340(c); // 802350D8
  c->lr=0x802350E0u; f_80056B54(c); // 802350DC
  c->r[3]=0u+0x00000B28u; // 802350E0
  c->lr=0x802350E8u; f_80047B64(c); // 802350E4
  c->r[29]=c->r[3]|c->r[3]; // 802350E8
  cmps(c,0,(int32_t)c->r[3],0); // 802350EC
  if (crb(c,2)) { goto L_802350F8; } // 802350F0
  c->lr=0x802350F8u; f_8023679C(c); // 802350F4
L_802350F8:;
  W32(c->r[28]+0x00000108u,c->r[29]); // 802350F8
  c->r[3]=c->r[26]|c->r[26]; // 802350FC
  c->lr=0x80235104u; f_80056B54(c); // 80235100
  c->r[3]=c->r[31]|c->r[31]; // 80235104
  c->lr=0x8023510Cu; f_80237F2C(c); // 80235108
  c->lr=0x80235110u; f_802366A0(c); // 8023510C
  c->lr=0x80235114u; f_80116A2C(c); // 80235110
  c->r[4]=c->r[3]|c->r[3]; // 80235114
  c->r[3]=R32(c->r[28]+0x00000108u); // 80235118
  c->lr=0x80235120u; f_80114AE0(c); // 8023511C
  c->r[3]=R32(c->r[28]+0x00000108u); // 80235120
  c->r[4]=c->r[27]|c->r[27]; // 80235124
  c->lr=0x8023512Cu; f_80114AD8(c); // 80235128
  c->r[3]=R32(c->r[28]+0x00000108u); // 8023512C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235130
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80235134
  c->ctr=c->r[12]; // 80235138
  if (true) { c->lr=0x80235140u; dispatch(c,c->ctr); } // 8023513C
  c->r[28]=c->r[28]+0x00000004u; // 80235140
  c->r[27]=c->r[27]+0x00000001u; // 80235144
  cmps(c,0,(int32_t)c->r[27],2); // 80235148
  if (crb(c,0)) { IRQCHK(c); goto L_802350D0; } // 8023514C
  c->r[28]=0u+0x00000000u; // 80235150
  c->r[31]=c->r[30]|c->r[30]; // 80235154
L_80235158:;
  c->lr=0x8023515Cu; f_80056B5C(c); // 80235158
  c->r[26]=c->r[3]|c->r[3]; // 8023515C
  c->lr=0x80235164u; f_801F1340(c); // 80235160
  c->lr=0x80235168u; f_80056B54(c); // 80235164
  c->r[3]=0u+0x00003200u; // 80235168
  c->lr=0x80235170u; f_80047B64(c); // 8023516C
  c->r[29]=c->r[3]|c->r[3]; // 80235170
  cmps(c,0,(int32_t)c->r[3],0); // 80235174
  if (crb(c,2)) { goto L_80235180; } // 80235178
  c->lr=0x80235180u; f_80236760(c); // 8023517C
L_80235180:;
  W32(c->r[31]+0x00000100u,c->r[29]); // 80235180
  c->r[3]=c->r[26]|c->r[26]; // 80235184
  c->lr=0x8023518Cu; f_80056B54(c); // 80235188
  c->r[3]=R32(c->r[31]+0x00000100u); // 8023518C
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235190
  c->r[12]=R32(c->r[12]+0x00000044u); // 80235194
  c->ctr=c->r[12]; // 80235198
  if (true) { c->lr=0x802351A0u; dispatch(c,c->ctr); } // 8023519C
  c->r[31]=c->r[31]+0x00000004u; // 802351A0
  c->r[28]=c->r[28]+0x00000001u; // 802351A4
  cmps(c,0,(int32_t)c->r[28],2); // 802351A8
  if (crb(c,0)) { IRQCHK(c); goto L_80235158; } // 802351AC
  c->lr=0x802351B4u; f_80056B5C(c); // 802351B0
  c->r[26]=c->r[3]|c->r[3]; // 802351B4
  c->lr=0x802351BCu; f_801F1340(c); // 802351B8
  c->lr=0x802351C0u; f_80056B54(c); // 802351BC
  c->r[3]=0u+0x00003200u; // 802351C0
  c->lr=0x802351C8u; f_80047B64(c); // 802351C4
  c->r[29]=c->r[3]|c->r[3]; // 802351C8
  cmps(c,0,(int32_t)c->r[3],0); // 802351CC
  if (crb(c,2)) { goto L_802351D8; } // 802351D0
  c->lr=0x802351D8u; f_80236760(c); // 802351D4
L_802351D8:;
  W32(c->r[30]+0x000000FCu,c->r[29]); // 802351D8
  c->r[3]=c->r[26]|c->r[26]; // 802351DC
  c->lr=0x802351E4u; f_80056B54(c); // 802351E0
  c->r[3]=R32(c->r[30]+0x000000FCu); // 802351E4
  c->r[12]=R32(c->r[3]+0x00000058u); // 802351E8
  c->r[12]=R32(c->r[12]+0x00000044u); // 802351EC
  c->ctr=c->r[12]; // 802351F0
  if (true) { c->lr=0x802351F8u; dispatch(c,c->ctr); } // 802351F4
  c->lr=0x802351FCu; f_80056B5C(c); // 802351F8
  c->r[26]=c->r[3]|c->r[3]; // 802351FC
  c->lr=0x80235204u; f_801F1340(c); // 80235200
  c->lr=0x80235208u; f_80056B54(c); // 80235204
  c->r[3]=0u+0x00003200u; // 80235208
  c->lr=0x80235210u; f_80047B64(c); // 8023520C
  c->r[29]=c->r[3]|c->r[3]; // 80235210
  cmps(c,0,(int32_t)c->r[3],0); // 80235214
  if (crb(c,2)) { goto L_80235220; } // 80235218
  c->lr=0x80235220u; f_80236760(c); // 8023521C
L_80235220:;
  W32(c->r[30]+0x00000110u,c->r[29]); // 80235220
  c->r[3]=c->r[26]|c->r[26]; // 80235224
  c->lr=0x8023522Cu; f_80056B54(c); // 80235228
  c->r[3]=R32(c->r[30]+0x00000110u); // 8023522C
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235230
  c->r[12]=R32(c->r[12]+0x00000044u); // 80235234
  c->ctr=c->r[12]; // 80235238
  if (true) { c->lr=0x80235240u; dispatch(c,c->ctr); } // 8023523C
  c->r[3]=c->r[30]|c->r[30]; // 80235240
  c->lr=0x80235248u; f_802360F4(c); // 80235244
  c->r[11]=c->r[1]+0x00000020u; // 80235248
  c->lr=0x80235250u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023524C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80235250
  c->lr=c->r[0]; // 80235254
  c->r[1]=c->r[1]+0x00000020u; // 80235258
  return; // 8023525C
}

// fn_80235260
void f_80235260(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80235260
  c->r[0]=c->lr; // 80235264
  W32(c->r[1]+0x00000024u,c->r[0]); // 80235268
  c->r[11]=c->r[1]+0x00000020u; // 8023526C
  c->lr=0x80235274u; { W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80235270
  c->r[31]=c->r[3]|c->r[3]; // 80235274
  c->r[3]=R32(c->r[3]+0x000000C0u); // 80235278
  cmps(c,0,(int32_t)c->r[3],0); // 8023527C
  if (crb(c,2)) { goto L_802352D4; } // 80235280
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235284
  c->r[12]=R32(c->r[12]+0x00000060u); // 80235288
  c->ctr=c->r[12]; // 8023528C
  if (true) { c->lr=0x80235294u; dispatch(c,c->ctr); } // 80235290
  c->lr=0x80235298u; f_80056B5C(c); // 80235294
  c->r[28]=c->r[3]|c->r[3]; // 80235298
  c->lr=0x802352A0u; f_801F1340(c); // 8023529C
  c->lr=0x802352A4u; f_80056B54(c); // 802352A0
  c->r[3]=R32(c->r[31]+0x000000C0u); // 802352A4
  cmps(c,0,(int32_t)c->r[3],0); // 802352A8
  if (crb(c,2)) { goto L_802352C4; } // 802352AC
  c->r[4]=0u+0x00000001u; // 802352B0
  c->r[12]=R32(c->r[3]+0x00000020u); // 802352B4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802352B8
  c->ctr=c->r[12]; // 802352BC
  if (true) { c->lr=0x802352C4u; dispatch(c,c->ctr); } // 802352C0
L_802352C4:;
  c->r[3]=c->r[28]|c->r[28]; // 802352C4
  c->lr=0x802352CCu; f_80056B54(c); // 802352C8
  c->r[0]=0u+0x00000000u; // 802352CC
  W32(c->r[31]+0x000000C0u,c->r[0]); // 802352D0
L_802352D4:;
  c->r[3]=R32(c->r[31]+0x000000C4u); // 802352D4
  cmps(c,0,(int32_t)c->r[3],0); // 802352D8
  if (crb(c,2)) { goto L_80235330; } // 802352DC
  c->r[12]=R32(c->r[3]+0x00000020u); // 802352E0
  c->r[12]=R32(c->r[12]+0x00000060u); // 802352E4
  c->ctr=c->r[12]; // 802352E8
  if (true) { c->lr=0x802352F0u; dispatch(c,c->ctr); } // 802352EC
  c->lr=0x802352F4u; f_80056B5C(c); // 802352F0
  c->r[28]=c->r[3]|c->r[3]; // 802352F4
  c->lr=0x802352FCu; f_801F1340(c); // 802352F8
  c->lr=0x80235300u; f_80056B54(c); // 802352FC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 80235300
  cmps(c,0,(int32_t)c->r[3],0); // 80235304
  if (crb(c,2)) { goto L_80235320; } // 80235308
  c->r[4]=0u+0x00000001u; // 8023530C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235310
  c->r[12]=R32(c->r[12]+0x00000008u); // 80235314
  c->ctr=c->r[12]; // 80235318
  if (true) { c->lr=0x80235320u; dispatch(c,c->ctr); } // 8023531C
L_80235320:;
  c->r[3]=c->r[28]|c->r[28]; // 80235320
  c->lr=0x80235328u; f_80056B54(c); // 80235324
  c->r[0]=0u+0x00000000u; // 80235328
  W32(c->r[31]+0x000000C4u,c->r[0]); // 8023532C
L_80235330:;
  c->r[3]=R32(c->r[31]+0x000000C8u); // 80235330
  cmps(c,0,(int32_t)c->r[3],0); // 80235334
  if (crb(c,2)) { goto L_8023538C; } // 80235338
  c->r[12]=R32(c->r[3]+0x00000020u); // 8023533C
  c->r[12]=R32(c->r[12]+0x00000060u); // 80235340
  c->ctr=c->r[12]; // 80235344
  if (true) { c->lr=0x8023534Cu; dispatch(c,c->ctr); } // 80235348
  c->lr=0x80235350u; f_80056B5C(c); // 8023534C
  c->r[28]=c->r[3]|c->r[3]; // 80235350
  c->lr=0x80235358u; f_801F1340(c); // 80235354
  c->lr=0x8023535Cu; f_80056B54(c); // 80235358
  c->r[3]=R32(c->r[31]+0x000000C8u); // 8023535C
  cmps(c,0,(int32_t)c->r[3],0); // 80235360
  if (crb(c,2)) { goto L_8023537C; } // 80235364
  c->r[4]=0u+0x00000001u; // 80235368
  c->r[12]=R32(c->r[3]+0x00000020u); // 8023536C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80235370
  c->ctr=c->r[12]; // 80235374
  if (true) { c->lr=0x8023537Cu; dispatch(c,c->ctr); } // 80235378
L_8023537C:;
  c->r[3]=c->r[28]|c->r[28]; // 8023537C
  c->lr=0x80235384u; f_80056B54(c); // 80235380
  c->r[0]=0u+0x00000000u; // 80235384
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80235388
L_8023538C:;
  c->r[28]=0u+0x00000000u; // 8023538C
  c->r[29]=c->r[31]|c->r[31]; // 80235390
  c->r[30]=0u+0x00000000u; // 80235394
L_80235398:;
  c->r[3]=R32(c->r[29]+0x000000D0u); // 80235398
  cmps(c,0,(int32_t)c->r[3],0); // 8023539C
  if (crb(c,2)) { goto L_802353F0; } // 802353A0
  c->r[12]=R32(c->r[3]+0x00000058u); // 802353A4
  c->r[12]=R32(c->r[12]+0x00000048u); // 802353A8
  c->ctr=c->r[12]; // 802353AC
  if (true) { c->lr=0x802353B4u; dispatch(c,c->ctr); } // 802353B0
  c->lr=0x802353B8u; f_80056B5C(c); // 802353B4
  c->r[27]=c->r[3]|c->r[3]; // 802353B8
  c->lr=0x802353C0u; f_801F1340(c); // 802353BC
  c->lr=0x802353C4u; f_80056B54(c); // 802353C0
  c->r[3]=R32(c->r[29]+0x000000D0u); // 802353C4
  cmps(c,0,(int32_t)c->r[3],0); // 802353C8
  if (crb(c,2)) { goto L_802353E4; } // 802353CC
  c->r[4]=0u+0x00000001u; // 802353D0
  c->r[12]=R32(c->r[3]+0x00000058u); // 802353D4
  c->r[12]=R32(c->r[12]+0x00000008u); // 802353D8
  c->ctr=c->r[12]; // 802353DC
  if (true) { c->lr=0x802353E4u; dispatch(c,c->ctr); } // 802353E0
L_802353E4:;
  c->r[3]=c->r[27]|c->r[27]; // 802353E4
  c->lr=0x802353ECu; f_80056B54(c); // 802353E8
  W32(c->r[29]+0x000000D0u,c->r[30]); // 802353EC
L_802353F0:;
  c->r[3]=R32(c->r[29]+0x000000D8u); // 802353F0
  cmps(c,0,(int32_t)c->r[3],0); // 802353F4
  if (crb(c,2)) { goto L_80235448; } // 802353F8
  c->r[12]=R32(c->r[3]+0x00000020u); // 802353FC
  c->r[12]=R32(c->r[12]+0x00000060u); // 80235400
  c->ctr=c->r[12]; // 80235404
  if (true) { c->lr=0x8023540Cu; dispatch(c,c->ctr); } // 80235408
  c->lr=0x80235410u; f_80056B5C(c); // 8023540C
  c->r[27]=c->r[3]|c->r[3]; // 80235410
  c->lr=0x80235418u; f_801F1340(c); // 80235414
  c->lr=0x8023541Cu; f_80056B54(c); // 80235418
  c->r[3]=R32(c->r[29]+0x000000D8u); // 8023541C
  cmps(c,0,(int32_t)c->r[3],0); // 80235420
  if (crb(c,2)) { goto L_8023543C; } // 80235424
  c->r[4]=0u+0x00000001u; // 80235428
  c->r[12]=R32(c->r[3]+0x00000020u); // 8023542C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80235430
  c->ctr=c->r[12]; // 80235434
  if (true) { c->lr=0x8023543Cu; dispatch(c,c->ctr); } // 80235438
L_8023543C:;
  c->r[3]=c->r[27]|c->r[27]; // 8023543C
  c->lr=0x80235444u; f_80056B54(c); // 80235440
  W32(c->r[29]+0x000000D8u,c->r[30]); // 80235444
L_80235448:;
  c->r[29]=c->r[29]+0x00000004u; // 80235448
  c->r[28]=c->r[28]+0x00000001u; // 8023544C
  cmps(c,0,(int32_t)c->r[28],2); // 80235450
  if (crb(c,0)) { IRQCHK(c); goto L_80235398; } // 80235454
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80235458
  cmps(c,0,(int32_t)c->r[3],0); // 8023545C
  if (crb(c,2)) { goto L_802354B4; } // 80235460
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235464
  c->r[12]=R32(c->r[12]+0x00000048u); // 80235468
  c->ctr=c->r[12]; // 8023546C
  if (true) { c->lr=0x80235474u; dispatch(c,c->ctr); } // 80235470
  c->lr=0x80235478u; f_80056B5C(c); // 80235474
  c->r[27]=c->r[3]|c->r[3]; // 80235478
  c->lr=0x80235480u; f_801F1340(c); // 8023547C
  c->lr=0x80235484u; f_80056B54(c); // 80235480
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80235484
  cmps(c,0,(int32_t)c->r[3],0); // 80235488
  if (crb(c,2)) { goto L_802354A4; } // 8023548C
  c->r[4]=0u+0x00000001u; // 80235490
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235494
  c->r[12]=R32(c->r[12]+0x00000008u); // 80235498
  c->ctr=c->r[12]; // 8023549C
  if (true) { c->lr=0x802354A4u; dispatch(c,c->ctr); } // 802354A0
L_802354A4:;
  c->r[3]=c->r[27]|c->r[27]; // 802354A4
  c->lr=0x802354ACu; f_80056B54(c); // 802354A8
  c->r[0]=0u+0x00000000u; // 802354AC
  W32(c->r[31]+0x000000CCu,c->r[0]); // 802354B0
L_802354B4:;
  c->r[3]=R32(c->r[31]+0x000000E0u); // 802354B4
  cmps(c,0,(int32_t)c->r[3],0); // 802354B8
  if (crb(c,2)) { goto L_80235510; } // 802354BC
  c->r[12]=R32(c->r[3]+0x00000020u); // 802354C0
  c->r[12]=R32(c->r[12]+0x00000060u); // 802354C4
  c->ctr=c->r[12]; // 802354C8
  if (true) { c->lr=0x802354D0u; dispatch(c,c->ctr); } // 802354CC
  c->lr=0x802354D4u; f_80056B5C(c); // 802354D0
  c->r[27]=c->r[3]|c->r[3]; // 802354D4
  c->lr=0x802354DCu; f_801F1340(c); // 802354D8
  c->lr=0x802354E0u; f_80056B54(c); // 802354DC
  c->r[3]=R32(c->r[31]+0x000000E0u); // 802354E0
  cmps(c,0,(int32_t)c->r[3],0); // 802354E4
  if (crb(c,2)) { goto L_80235500; } // 802354E8
  c->r[4]=0u+0x00000001u; // 802354EC
  c->r[12]=R32(c->r[3]+0x00000020u); // 802354F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802354F4
  c->ctr=c->r[12]; // 802354F8
  if (true) { c->lr=0x80235500u; dispatch(c,c->ctr); } // 802354FC
L_80235500:;
  c->r[3]=c->r[27]|c->r[27]; // 80235500
  c->lr=0x80235508u; f_80056B54(c); // 80235504
  c->r[0]=0u+0x00000000u; // 80235508
  W32(c->r[31]+0x000000E0u,c->r[0]); // 8023550C
L_80235510:;
  c->r[28]=0u+0x00000000u; // 80235510
  c->r[29]=c->r[31]|c->r[31]; // 80235514
  c->r[30]=0u+0x00000000u; // 80235518
L_8023551C:;
  c->r[3]=R32(c->r[29]+0x000000E8u); // 8023551C
  cmps(c,0,(int32_t)c->r[3],0); // 80235520
  if (crb(c,2)) { goto L_80235574; } // 80235524
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235528
  c->r[12]=R32(c->r[12]+0x00000048u); // 8023552C
  c->ctr=c->r[12]; // 80235530
  if (true) { c->lr=0x80235538u; dispatch(c,c->ctr); } // 80235534
  c->lr=0x8023553Cu; f_80056B5C(c); // 80235538
  c->r[27]=c->r[3]|c->r[3]; // 8023553C
  c->lr=0x80235544u; f_801F1340(c); // 80235540
  c->lr=0x80235548u; f_80056B54(c); // 80235544
  c->r[3]=R32(c->r[29]+0x000000E8u); // 80235548
  cmps(c,0,(int32_t)c->r[3],0); // 8023554C
  if (crb(c,2)) { goto L_80235568; } // 80235550
  c->r[4]=0u+0x00000001u; // 80235554
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235558
  c->r[12]=R32(c->r[12]+0x00000008u); // 8023555C
  c->ctr=c->r[12]; // 80235560
  if (true) { c->lr=0x80235568u; dispatch(c,c->ctr); } // 80235564
L_80235568:;
  c->r[3]=c->r[27]|c->r[27]; // 80235568
  c->lr=0x80235570u; f_80056B54(c); // 8023556C
  W32(c->r[29]+0x000000E8u,c->r[30]); // 80235570
L_80235574:;
  c->r[3]=R32(c->r[29]+0x000000F0u); // 80235574
  cmps(c,0,(int32_t)c->r[3],0); // 80235578
  if (crb(c,2)) { goto L_802355CC; } // 8023557C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235580
  c->r[12]=R32(c->r[12]+0x00000060u); // 80235584
  c->ctr=c->r[12]; // 80235588
  if (true) { c->lr=0x80235590u; dispatch(c,c->ctr); } // 8023558C
  c->lr=0x80235594u; f_80056B5C(c); // 80235590
  c->r[27]=c->r[3]|c->r[3]; // 80235594
  c->lr=0x8023559Cu; f_801F1340(c); // 80235598
  c->lr=0x802355A0u; f_80056B54(c); // 8023559C
  c->r[3]=R32(c->r[29]+0x000000F0u); // 802355A0
  cmps(c,0,(int32_t)c->r[3],0); // 802355A4
  if (crb(c,2)) { goto L_802355C0; } // 802355A8
  c->r[4]=0u+0x00000001u; // 802355AC
  c->r[12]=R32(c->r[3]+0x00000020u); // 802355B0
  c->r[12]=R32(c->r[12]+0x00000008u); // 802355B4
  c->ctr=c->r[12]; // 802355B8
  if (true) { c->lr=0x802355C0u; dispatch(c,c->ctr); } // 802355BC
L_802355C0:;
  c->r[3]=c->r[27]|c->r[27]; // 802355C0
  c->lr=0x802355C8u; f_80056B54(c); // 802355C4
  W32(c->r[29]+0x000000F0u,c->r[30]); // 802355C8
L_802355CC:;
  c->r[29]=c->r[29]+0x00000004u; // 802355CC
  c->r[28]=c->r[28]+0x00000001u; // 802355D0
  cmps(c,0,(int32_t)c->r[28],2); // 802355D4
  if (crb(c,0)) { IRQCHK(c); goto L_8023551C; } // 802355D8
  c->r[3]=R32(c->r[31]+0x000000E4u); // 802355DC
  cmps(c,0,(int32_t)c->r[3],0); // 802355E0
  if (crb(c,2)) { goto L_80235638; } // 802355E4
  c->r[12]=R32(c->r[3]+0x00000058u); // 802355E8
  c->r[12]=R32(c->r[12]+0x00000048u); // 802355EC
  c->ctr=c->r[12]; // 802355F0
  if (true) { c->lr=0x802355F8u; dispatch(c,c->ctr); } // 802355F4
  c->lr=0x802355FCu; f_80056B5C(c); // 802355F8
  c->r[27]=c->r[3]|c->r[3]; // 802355FC
  c->lr=0x80235604u; f_801F1340(c); // 80235600
  c->lr=0x80235608u; f_80056B54(c); // 80235604
  c->r[3]=R32(c->r[31]+0x000000E4u); // 80235608
  cmps(c,0,(int32_t)c->r[3],0); // 8023560C
  if (crb(c,2)) { goto L_80235628; } // 80235610
  c->r[4]=0u+0x00000001u; // 80235614
  c->r[12]=R32(c->r[3]+0x00000058u); // 80235618
  c->r[12]=R32(c->r[12]+0x00000008u); // 8023561C
  c->ctr=c->r[12]; // 80235620
  if (true) { c->lr=0x80235628u; dispatch(c,c->ctr); } // 80235624
L_80235628:;
  c->r[3]=c->r[27]|c->r[27]; // 80235628
  c->lr=0x80235630u; f_80056B54(c); // 8023562C
  c->r[0]=0u+0x00000000u; // 80235630
  W32(c->r[31]+0x000000E4u,c->r[0]); // 80235634
L_80235638:;
  c->r[3]=R32(c->r[31]+0x000000F8u); // 80235638
  cmps(c,0,(int32_t)c->r[3],0); // 8023563C
  if (crb(c,2)) { goto L_80235694; } // 80235640
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235644
  c->r[12]=R32(c->r[12]+0x00000060u); // 80235648
  c->ctr=c->r[12]; // 8023564C
  if (true) { c->lr=0x80235654u; dispatch(c,c->ctr); } // 80235650
  c->lr=0x80235658u; f_80056B5C(c); // 80235654
  c->r[27]=c->r[3]|c->r[3]; // 80235658
  c->lr=0x80235660u; f_801F1340(c); // 8023565C
  c->lr=0x80235664u; f_80056B54(c); // 80235660
  c->r[3]=R32(c->r[31]+0x000000F8u); // 80235664
  cmps(c,0,(int32_t)c->r[3],0); // 80235668
  if (crb(c,2)) { goto L_80235684; } // 8023566C
  c->r[4]=0u+0x00000001u; // 80235670
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235674
  c->r[12]=R32(c->r[12]+0x00000008u); // 80235678
  c->ctr=c->r[12]; // 8023567C
  if (true) { c->lr=0x80235684u; dispatch(c,c->ctr); } // 80235680
L_80235684:;
  c->r[3]=c->r[27]|c->r[27]; // 80235684
  c->lr=0x8023568Cu; f_80056B54(c); // 80235688
  c->r[0]=0u+0x00000000u; // 8023568C
  W32(c->r[31]+0x000000F8u,c->r[0]); // 80235690
L_80235694:;
  c->r[28]=0u+0x00000000u; // 80235694
  c->r[29]=c->r[31]|c->r[31]; // 80235698
  c->r[30]=0u+0x00000000u; // 8023569C
L_802356A0:;
  c->r[3]=R32(c->r[29]+0x00000100u); // 802356A0
  cmps(c,0,(int32_t)c->r[3],0); // 802356A4
  if (crb(c,2)) { goto L_802356F8; } // 802356A8
  c->r[12]=R32(c->r[3]+0x00000058u); // 802356AC
  c->r[12]=R32(c->r[12]+0x00000048u); // 802356B0
  c->ctr=c->r[12]; // 802356B4
  if (true) { c->lr=0x802356BCu; dispatch(c,c->ctr); } // 802356B8
  c->lr=0x802356C0u; f_80056B5C(c); // 802356BC
  c->r[27]=c->r[3]|c->r[3]; // 802356C0
  c->lr=0x802356C8u; f_801F1340(c); // 802356C4
  c->lr=0x802356CCu; f_80056B54(c); // 802356C8
  c->r[3]=R32(c->r[29]+0x00000100u); // 802356CC
  cmps(c,0,(int32_t)c->r[3],0); // 802356D0
  if (crb(c,2)) { goto L_802356EC; } // 802356D4
  c->r[4]=0u+0x00000001u; // 802356D8
  c->r[12]=R32(c->r[3]+0x00000058u); // 802356DC
  c->r[12]=R32(c->r[12]+0x00000008u); // 802356E0
  c->ctr=c->r[12]; // 802356E4
  if (true) { c->lr=0x802356ECu; dispatch(c,c->ctr); } // 802356E8
L_802356EC:;
  c->r[3]=c->r[27]|c->r[27]; // 802356EC
  c->lr=0x802356F4u; f_80056B54(c); // 802356F0
  W32(c->r[29]+0x00000100u,c->r[30]); // 802356F4
L_802356F8:;
  c->r[3]=R32(c->r[29]+0x00000108u); // 802356F8
  cmps(c,0,(int32_t)c->r[3],0); // 802356FC
  if (crb(c,2)) { goto L_80235750; } // 80235700
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235704
  c->r[12]=R32(c->r[12]+0x00000060u); // 80235708
  c->ctr=c->r[12]; // 8023570C
  if (true) { c->lr=0x80235714u; dispatch(c,c->ctr); } // 80235710
  c->lr=0x80235718u; f_80056B5C(c); // 80235714
  c->r[27]=c->r[3]|c->r[3]; // 80235718
  c->lr=0x80235720u; f_801F1340(c); // 8023571C
  c->lr=0x80235724u; f_80056B54(c); // 80235720
  c->r[3]=R32(c->r[29]+0x00000108u); // 80235724
  cmps(c,0,(int32_t)c->r[3],0); // 80235728
  if (crb(c,2)) { goto L_80235744; } // 8023572C
  c->r[4]=0u+0x00000001u; // 80235730
  c->r[12]=R32(c->r[3]+0x00000020u); // 80235734
  c->r[12]=R32(c->r[12]+0x00000008u); // 80235738
  c->ctr=c->r[12]; // 8023573C
  if (true) { c->lr=0x80235744u; dispatch(c,c->ctr); } // 80235740
L_80235744:;
  c->r[3]=c->r[27]|c->r[27]; // 80235744
  c->lr=0x8023574Cu; f_80056B54(c); // 80235748
  W32(c->r[29]+0x00000108u,c->r[30]); // 8023574C
L_80235750:;
  c->r[29]=c->r[29]+0x00000004u; // 80235750
  c->r[28]=c->r[28]+0x00000001u; // 80235754
  cmps(c,0,(int32_t)c->r[28],2); // 80235758
  if (crb(c,0)) { IRQCHK(c); goto L_802356A0; } // 8023575C
  c->r[3]=R32(c->r[31]+0x000000FCu); // 80235760
  cmps(c,0,(int32_t)c->r[3],0); // 80235764
  if (crb(c,2)) { goto L_802357BC; } // 80235768
  c->r[12]=R32(c->r[3]+0x00000058u); // 8023576C
  c->r[12]=R32(c->r[12]+0x00000048u); // 80235770
  c->ctr=c->r[12]; // 80235774
  if (true) { c->lr=0x8023577Cu; dispatch(c,c->ctr); } // 80235778
  c->lr=0x80235780u; f_80056B5C(c); // 8023577C
  c->r[27]=c->r[3]|c->r[3]; // 80235780
  c->lr=0x80235788u; f_801F1340(c); // 80235784
  c->lr=0x8023578Cu; f_80056B54(c); // 80235788
  c->r[3]=R32(c->r[31]+0x000000FCu); // 8023578C
  cmps(c,0,(int32_t)c->r[3],0); // 80235790
  if (crb(c,2)) { goto L_802357AC; } // 80235794
  c->r[4]=0u+0x00000001u; // 80235798
  c->r[12]=R32(c->r[3]+0x00000058u); // 8023579C
  c->r[12]=R32(c->r[12]+0x00000008u); // 802357A0
  c->ctr=c->r[12]; // 802357A4
  if (true) { c->lr=0x802357ACu; dispatch(c,c->ctr); } // 802357A8
L_802357AC:;
  c->r[3]=c->r[27]|c->r[27]; // 802357AC
  c->lr=0x802357B4u; f_80056B54(c); // 802357B0
  c->r[0]=0u+0x00000000u; // 802357B4
  W32(c->r[31]+0x000000FCu,c->r[0]); // 802357B8
L_802357BC:;
  c->r[3]=R32(c->r[31]+0x00000110u); // 802357BC
  cmps(c,0,(int32_t)c->r[3],0); // 802357C0
  if (crb(c,2)) { goto L_80235818; } // 802357C4
  c->r[12]=R32(c->r[3]+0x00000058u); // 802357C8
  c->r[12]=R32(c->r[12]+0x00000048u); // 802357CC
  c->ctr=c->r[12]; // 802357D0
  if (true) { c->lr=0x802357D8u; dispatch(c,c->ctr); } // 802357D4
  c->lr=0x802357DCu; f_80056B5C(c); // 802357D8
  c->r[27]=c->r[3]|c->r[3]; // 802357DC
  c->lr=0x802357E4u; f_801F1340(c); // 802357E0
  c->lr=0x802357E8u; f_80056B54(c); // 802357E4
  c->r[3]=R32(c->r[31]+0x00000110u); // 802357E8
  cmps(c,0,(int32_t)c->r[3],0); // 802357EC
  if (crb(c,2)) { goto L_80235808; } // 802357F0
  c->r[4]=0u+0x00000001u; // 802357F4
  c->r[12]=R32(c->r[3]+0x00000058u); // 802357F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 802357FC
  c->ctr=c->r[12]; // 80235800
  if (true) { c->lr=0x80235808u; dispatch(c,c->ctr); } // 80235804
L_80235808:;
  c->r[3]=c->r[27]|c->r[27]; // 80235808
  c->lr=0x80235810u; f_80056B54(c); // 8023580C
  c->r[0]=0u+0x00000000u; // 80235810
  W32(c->r[31]+0x00000110u,c->r[0]); // 80235814
L_80235818:;
  c->r[11]=c->r[1]+0x00000020u; // 80235818
  c->lr=0x80235820u; { c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8023581C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80235820
  c->lr=c->r[0]; // 80235824
  c->r[1]=c->r[1]+0x00000020u; // 80235828
  return; // 8023582C
}

// fn_80235830
void f_80235830(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80235830
  c->r[0]=c->lr; // 80235834
  W32(c->r[1]+0x00000014u,c->r[0]); // 80235838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023583C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80235840
  c->r[30]=c->r[3]|c->r[3]; // 80235844
  c->r[31]=c->r[4]|c->r[4]; // 80235848
  cmps(c,0,(int32_t)c->r[3],0); // 8023584C
  if (crb(c,2)) { goto L_80235870; } // 80235850
  c->r[4]=0u+0x00000000u; // 80235854
  c->lr=0x8023585Cu; f_8012F7F0(c); // 80235858
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 8023585C
  cmps(c,0,(int32_t)c->r[0],0); // 80235860
  if (!crb(c,1)) { goto L_80235870; } // 80235864
  c->r[3]=c->r[30]|c->r[30]; // 80235868
  c->lr=0x80235870u; f_80047B20(c); // 8023586C
L_80235870:;
  c->r[3]=c->r[30]|c->r[30]; // 80235870
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80235874
  c->r[30]=R32(c->r[1]+0x00000008u); // 80235878
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023587C
  c->lr=c->r[0]; // 80235880
  c->r[1]=c->r[1]+0x00000010u; // 80235884
  return; // 80235888
}

// fn_8023588C
void f_8023588C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023588C
  c->r[0]=c->lr; // 80235890
  W32(c->r[1]+0x00000014u,c->r[0]); // 80235894
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80235898
  W32(c->r[1]+0x00000008u,c->r[30]); // 8023589C
  c->r[30]=c->r[3]|c->r[3]; // 802358A0
  c->r[31]=c->r[4]|c->r[4]; // 802358A4
  cmps(c,0,(int32_t)c->r[3],0); // 802358A8
  if (crb(c,2)) { goto L_802358CC; } // 802358AC
  c->r[4]=0u+0x00000000u; // 802358B0
  c->lr=0x802358B8u; f_80114B08(c); // 802358B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 802358B8
  cmps(c,0,(int32_t)c->r[0],0); // 802358BC
  if (!crb(c,1)) { goto L_802358CC; } // 802358C0
  c->r[3]=c->r[30]|c->r[30]; // 802358C4
  c->lr=0x802358CCu; f_80047B20(c); // 802358C8
L_802358CC:;
  c->r[3]=c->r[30]|c->r[30]; // 802358CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802358D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 802358D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802358D8
  c->lr=c->r[0]; // 802358DC
  c->r[1]=c->r[1]+0x00000010u; // 802358E0
  return; // 802358E4
}

// fn_802358E8
void f_802358E8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802358E8
  c->r[0]=c->lr; // 802358EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802358F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802358F4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802358F8
  c->r[30]=c->r[3]|c->r[3]; // 802358FC
  c->r[31]=c->r[4]|c->r[4]; // 80235900
  cmps(c,0,(int32_t)c->r[3],0); // 80235904
  if (crb(c,2)) { goto L_80235928; } // 80235908
  c->r[4]=0u+0x00000000u; // 8023590C
  c->lr=0x80235914u; f_8012F7F0(c); // 80235910
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80235914
  cmps(c,0,(int32_t)c->r[0],0); // 80235918
  if (!crb(c,1)) { goto L_80235928; } // 8023591C
  c->r[3]=c->r[30]|c->r[30]; // 80235920
  c->lr=0x80235928u; f_80047B20(c); // 80235924
L_80235928:;
  c->r[3]=c->r[30]|c->r[30]; // 80235928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023592C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80235930
  c->r[0]=R32(c->r[1]+0x00000014u); // 80235934
  c->lr=c->r[0]; // 80235938
  c->r[1]=c->r[1]+0x00000010u; // 8023593C
  return; // 80235940
}

// fn_80235944
void f_80235944(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80235944
  c->r[0]=c->lr; // 80235948
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023594C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80235950
  W32(c->r[1]+0x00000008u,c->r[30]); // 80235954
  c->r[30]=c->r[3]|c->r[3]; // 80235958
  c->r[31]=c->r[4]|c->r[4]; // 8023595C
  cmps(c,0,(int32_t)c->r[3],0); // 80235960
  if (crb(c,2)) { goto L_80235984; } // 80235964
  c->r[4]=0u+0x00000000u; // 80235968
  c->lr=0x80235970u; f_8011498C(c); // 8023596C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80235970
  cmps(c,0,(int32_t)c->r[0],0); // 80235974
  if (!crb(c,1)) { goto L_80235984; } // 80235978
  c->r[3]=c->r[30]|c->r[30]; // 8023597C
  c->lr=0x80235984u; f_80047B20(c); // 80235980
L_80235984:;
  c->r[3]=c->r[30]|c->r[30]; // 80235984
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80235988
  c->r[30]=R32(c->r[1]+0x00000008u); // 8023598C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80235990
  c->lr=c->r[0]; // 80235994
  c->r[1]=c->r[1]+0x00000010u; // 80235998
  return; // 8023599C
}

// fn_802359A0
void f_802359A0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802359A0
  c->r[0]=c->lr; // 802359A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802359A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802359AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802359B0
  c->r[30]=c->r[3]|c->r[3]; // 802359B4
  c->r[31]=c->r[4]|c->r[4]; // 802359B8
  cmps(c,0,(int32_t)c->r[3],0); // 802359BC
  if (crb(c,2)) { goto L_802359E0; } // 802359C0
  c->r[4]=0u+0x00000000u; // 802359C4
  c->lr=0x802359CCu; f_8012F7F0(c); // 802359C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 802359CC
  cmps(c,0,(int32_t)c->r[0],0); // 802359D0
  if (!crb(c,1)) { goto L_802359E0; } // 802359D4
  c->r[3]=c->r[30]|c->r[30]; // 802359D8
  c->lr=0x802359E0u; f_80047B20(c); // 802359DC
L_802359E0:;
  c->r[3]=c->r[30]|c->r[30]; // 802359E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802359E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 802359E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802359EC
  c->lr=c->r[0]; // 802359F0
  c->r[1]=c->r[1]+0x00000010u; // 802359F4
  return; // 802359F8
}

// fn_802359FC
void f_802359FC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802359FC
  c->r[0]=c->lr; // 80235A00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80235A04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80235A08
  W32(c->r[1]+0x00000008u,c->r[30]); // 80235A0C
  c->r[30]=c->r[3]|c->r[3]; // 80235A10
  c->r[31]=c->r[4]|c->r[4]; // 80235A14
  c->lr=0x80235A1Cu; f_80235A40(c); // 80235A18
  c->r[3]=c->r[30]|c->r[30]; // 80235A1C
  c->r[4]=c->r[31]|c->r[31]; // 80235A20
  c->lr=0x80235A28u; f_80235A48(c); // 80235A24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80235A28
  c->r[30]=R32(c->r[1]+0x00000008u); // 80235A2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80235A30
  c->lr=c->r[0]; // 80235A34
  c->r[1]=c->r[1]+0x00000010u; // 80235A38
  return; // 80235A3C
}

// fn_80235A40
void f_80235A40(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 80235A40
  f_8012F910(c); return; // 80235A44
}

// fn_80235A48
void f_80235A48(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80235A48
  c->r[0]=c->lr; // 80235A4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80235A50
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80235A54
  W32(c->r[1]+0x00000018u,c->r[30]); // 80235A58
  W32(c->r[1]+0x00000014u,c->r[29]); // 80235A5C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80235A60
  c->r[28]=c->r[3]|c->r[3]; // 80235A64
  c->r[29]=c->r[4]|c->r[4]; // 80235A68
  c->r[3]=R32(c->r[3]+0x000000C4u); // 80235A6C
  c->lr=0x80235A74u; f_8012F910(c); // 80235A70
  c->r[3]=R32(c->r[28]+0x000000C8u); // 80235A74
  c->r[4]=c->r[29]|c->r[29]; // 80235A78
  c->lr=0x80235A80u; f_8012F910(c); // 80235A7C
  c->r[30]=0u+0x00000000u; // 80235A80
  c->r[31]=c->r[28]|c->r[28]; // 80235A84
L_80235A88:;
  c->r[3]=R32(c->r[31]+0x000000D0u); // 80235A88
  c->r[4]=c->r[29]|c->r[29]; // 80235A8C
  c->lr=0x80235A94u; f_80131388(c); // 80235A90
  c->r[3]=R32(c->r[31]+0x000000D8u); // 80235A94
  c->r[4]=c->r[29]|c->r[29]; // 80235A98
  c->lr=0x80235AA0u; f_8012F910(c); // 80235A9C
  c->r[31]=c->r[31]+0x00000004u; // 80235AA0
  c->r[30]=c->r[30]+0x00000001u; // 80235AA4
  cmps(c,0,(int32_t)c->r[30],2); // 80235AA8
  if (crb(c,0)) { IRQCHK(c); goto L_80235A88; } // 80235AAC
  c->r[3]=R32(c->r[28]+0x000000CCu); // 80235AB0
  c->r[4]=c->r[29]|c->r[29]; // 80235AB4
  c->lr=0x80235ABCu; f_80131388(c); // 80235AB8
  c->r[3]=R32(c->r[28]+0x000000E0u); // 80235ABC
  c->r[4]=c->r[29]|c->r[29]; // 80235AC0
  c->lr=0x80235AC8u; f_8012F910(c); // 80235AC4
  c->r[30]=0u+0x00000000u; // 80235AC8
  c->r[31]=c->r[28]|c->r[28]; // 80235ACC
L_80235AD0:;
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80235AD0
  c->r[4]=c->r[29]|c->r[29]; // 80235AD4
  c->lr=0x80235ADCu; f_80131388(c); // 80235AD8
  c->r[3]=R32(c->r[31]+0x000000F0u); // 80235ADC
  c->r[4]=c->r[29]|c->r[29]; // 80235AE0
  c->lr=0x80235AE8u; f_8012F910(c); // 80235AE4
  c->r[31]=c->r[31]+0x00000004u; // 80235AE8
  c->r[30]=c->r[30]+0x00000001u; // 80235AEC
  cmps(c,0,(int32_t)c->r[30],2); // 80235AF0
  if (crb(c,0)) { IRQCHK(c); goto L_80235AD0; } // 80235AF4
  c->r[3]=R32(c->r[28]+0x000000E4u); // 80235AF8
  c->r[4]=c->r[29]|c->r[29]; // 80235AFC
  c->lr=0x80235B04u; f_80131388(c); // 80235B00
  c->r[3]=R32(c->r[28]+0x000000F8u); // 80235B04
  c->r[4]=c->r[29]|c->r[29]; // 80235B08
  c->lr=0x80235B10u; f_8012F910(c); // 80235B0C
  c->r[30]=0u+0x00000000u; // 80235B10
  c->r[31]=c->r[28]|c->r[28]; // 80235B14
L_80235B18:;
  c->r[3]=R32(c->r[31]+0x00000100u); // 80235B18
  c->r[4]=c->r[29]|c->r[29]; // 80235B1C
  c->lr=0x80235B24u; f_80131388(c); // 80235B20
  c->r[3]=R32(c->r[31]+0x00000108u); // 80235B24
  c->r[4]=c->r[29]|c->r[29]; // 80235B28
  c->lr=0x80235B30u; f_8012F910(c); // 80235B2C
  c->r[31]=c->r[31]+0x00000004u; // 80235B30
  c->r[30]=c->r[30]+0x00000001u; // 80235B34
  cmps(c,0,(int32_t)c->r[30],2); // 80235B38
  if (crb(c,0)) { IRQCHK(c); goto L_80235B18; } // 80235B3C
  c->r[3]=R32(c->r[28]+0x000000FCu); // 80235B40
  c->r[4]=c->r[29]|c->r[29]; // 80235B44
  c->lr=0x80235B4Cu; f_80131388(c); // 80235B48
  c->r[3]=R32(c->r[28]+0x00000110u); // 80235B4C
  c->r[4]=c->r[29]|c->r[29]; // 80235B50
  c->lr=0x80235B58u; f_80131388(c); // 80235B54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80235B58
  c->r[30]=R32(c->r[1]+0x00000018u); // 80235B5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80235B60
  c->r[28]=R32(c->r[1]+0x00000010u); // 80235B64
  c->r[0]=R32(c->r[1]+0x00000024u); // 80235B68
  c->lr=c->r[0]; // 80235B6C
  c->r[1]=c->r[1]+0x00000020u; // 80235B70
  return; // 80235B74
}

// fn_80235B78
void f_80235B78(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80235B78
  c->r[0]=c->lr; // 80235B7C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80235B80
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80235B84
  W32(c->r[1]+0x00000038u,c->r[30]); // 80235B88
  W32(c->r[1]+0x00000034u,c->r[29]); // 80235B8C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80235B90
  c->r[28]=c->r[3]|c->r[3]; // 80235B94
  c->lr=0x80235B9Cu; f_8011B41C(c); // 80235B98
  c->r[4]=0u+0x0000000Du; // 80235B9C
  c->lr=0x80235BA4u; f_8011B814(c); // 80235BA0
  c->lr=0x80235BA8u; f_8011B41C(c); // 80235BA4
  c->r[4]=0u+0x00000019u; // 80235BA8
  c->lr=0x80235BB0u; f_8011B814(c); // 80235BAC
  c->r[29]=c->r[3]|c->r[3]; // 80235BB0
  cmps(c,0,(int32_t)c->r[3],0); // 80235BB4
  if (crb(c,2)) { goto L_80235FDC; } // 80235BB8
  c->r[4]=0u+0x0000000Fu; // 80235BBC
  c->lr=0x80235BC4u; f_8011961C(c); // 80235BC0
  c->r[4]=c->r[3]|c->r[3]; // 80235BC4
  c->r[3]=c->r[1]+0x0000002Cu; // 80235BC8
  c->lr=0x80235BD0u; f_800549FC(c); // 80235BCC
  c->r[3]=R32(c->r[28]+0x000000E4u); // 80235BD0
  c->r[4]=c->r[1]+0x0000002Cu; // 80235BD4
  c->lr=0x80235BDCu; f_801313CC(c); // 80235BD8
  c->r[3]=c->r[1]+0x0000002Cu; // 80235BDC
  c->r[4]=0u+0xFFFFFFFFu; // 80235BE0
  c->lr=0x80235BE8u; f_80047BD4(c); // 80235BE4
  c->lr=0x80235BECu; f_8007B524(c); // 80235BE8
  c->r[4]=0u+0x00000057u; // 80235BEC
  c->lr=0x80235BF4u; f_800A2EF0(c); // 80235BF0
  c->r[4]=c->r[3]|c->r[3]; // 80235BF4
  c->r[3]=R32(c->r[28]+0x000000E4u); // 80235BF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235BFC
  c->lr=0x80235C04u; f_801313D4(c); // 80235C00
  c->r[30]=0u+0x00000000u; // 80235C04
  c->r[31]=c->r[28]|c->r[28]; // 80235C08
L_80235C0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80235C0C
  if (!crb(c,2)) { goto L_80235C34; } // 80235C10
  c->lr=0x80235C18u; f_8007B524(c); // 80235C14
  c->r[4]=0u+0x00000058u; // 80235C18
  c->lr=0x80235C20u; f_800A2EF0(c); // 80235C1C
  c->r[4]=c->r[3]|c->r[3]; // 80235C20
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80235C24
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235C28
  c->lr=0x80235C30u; f_801313D4(c); // 80235C2C
  goto L_80235C50; // 80235C30
L_80235C34:;
  c->lr=0x80235C38u; f_8007B524(c); // 80235C34
  c->r[4]=0u+0x00000059u; // 80235C38
  c->lr=0x80235C40u; f_800A2EF0(c); // 80235C3C
  c->r[4]=c->r[3]|c->r[3]; // 80235C40
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80235C44
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235C48
  c->lr=0x80235C50u; f_801313D4(c); // 80235C4C
L_80235C50:;
  c->r[0]=R32(c->r[28]+0x00000118u); // 80235C50
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80235C54
  if (!crb(c,2)) { goto L_80235C70; } // 80235C58
  c->r[3]=R32(c->r[31]+0x000000F0u); // 80235C5C
  c->r[4]=0u+0x00000000u; // 80235C60
  c->r[5]=0u+0x00000002u; // 80235C64
  c->lr=0x80235C6Cu; f_8012E640(c); // 80235C68
  goto L_80235C80; // 80235C6C
L_80235C70:;
  c->r[3]=R32(c->r[31]+0x000000F0u); // 80235C70
  c->r[4]=0u+0x00000001u; // 80235C74
  c->r[5]=0u+0x00000002u; // 80235C78
  c->lr=0x80235C80u; f_8012E640(c); // 80235C7C
L_80235C80:;
  c->r[0]=R32(c->r[28]+0x00000118u); // 80235C80
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80235C84
  if (!crb(c,2)) { goto L_80235CC0; } // 80235C88
  c->r[3]=c->r[29]|c->r[29]; // 80235C8C
  c->r[4]=0u+0x00000007u; // 80235C90
  c->lr=0x80235C98u; f_8011961C(c); // 80235C94
  c->r[4]=c->r[3]|c->r[3]; // 80235C98
  c->r[3]=c->r[1]+0x00000028u; // 80235C9C
  c->lr=0x80235CA4u; f_800549FC(c); // 80235CA0
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80235CA4
  c->r[4]=c->r[1]+0x00000028u; // 80235CA8
  c->lr=0x80235CB0u; f_801313CC(c); // 80235CAC
  c->r[3]=c->r[1]+0x00000028u; // 80235CB0
  c->r[4]=0u+0xFFFFFFFFu; // 80235CB4
  c->lr=0x80235CBCu; f_80047BD4(c); // 80235CB8
  goto L_80235CF0; // 80235CBC
L_80235CC0:;
  c->r[3]=c->r[29]|c->r[29]; // 80235CC0
  c->r[4]=0u+0x00000008u; // 80235CC4
  c->lr=0x80235CCCu; f_8011961C(c); // 80235CC8
  c->r[4]=c->r[3]|c->r[3]; // 80235CCC
  c->r[3]=c->r[1]+0x00000024u; // 80235CD0
  c->lr=0x80235CD8u; f_800549FC(c); // 80235CD4
  c->r[3]=R32(c->r[31]+0x000000E8u); // 80235CD8
  c->r[4]=c->r[1]+0x00000024u; // 80235CDC
  c->lr=0x80235CE4u; f_801313CC(c); // 80235CE0
  c->r[3]=c->r[1]+0x00000024u; // 80235CE4
  c->r[4]=0u+0xFFFFFFFFu; // 80235CE8
  c->lr=0x80235CF0u; f_80047BD4(c); // 80235CEC
L_80235CF0:;
  c->r[31]=c->r[31]+0x00000004u; // 80235CF0
  c->r[30]=c->r[30]+0x00000001u; // 80235CF4
  cmps(c,0,(int32_t)c->r[30],2); // 80235CF8
  if (crb(c,0)) { IRQCHK(c); goto L_80235C0C; } // 80235CFC
  c->r[3]=c->r[29]|c->r[29]; // 80235D00
  c->r[4]=0u+0x0000000Fu; // 80235D04
  c->lr=0x80235D0Cu; f_8011961C(c); // 80235D08
  c->r[4]=c->r[3]|c->r[3]; // 80235D0C
  c->r[3]=c->r[1]+0x00000020u; // 80235D10
  c->lr=0x80235D18u; f_800549FC(c); // 80235D14
  c->r[3]=R32(c->r[28]+0x000000FCu); // 80235D18
  c->r[4]=c->r[1]+0x00000020u; // 80235D1C
  c->lr=0x80235D24u; f_801313CC(c); // 80235D20
  c->r[3]=c->r[1]+0x00000020u; // 80235D24
  c->r[4]=0u+0xFFFFFFFFu; // 80235D28
  c->lr=0x80235D30u; f_80047BD4(c); // 80235D2C
  c->lr=0x80235D34u; f_8007B524(c); // 80235D30
  c->r[4]=0u+0x0000005Au; // 80235D34
  c->lr=0x80235D3Cu; f_800A2EF0(c); // 80235D38
  c->r[4]=c->r[3]|c->r[3]; // 80235D3C
  c->r[3]=R32(c->r[28]+0x000000FCu); // 80235D40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235D44
  c->lr=0x80235D4Cu; f_801313D4(c); // 80235D48
  c->r[30]=0u+0x00000000u; // 80235D4C
  c->r[31]=c->r[28]|c->r[28]; // 80235D50
L_80235D54:;
  cmps(c,0,(int32_t)c->r[30],0); // 80235D54
  if (!crb(c,2)) { goto L_80235D7C; } // 80235D58
  c->lr=0x80235D60u; f_8007B524(c); // 80235D5C
  c->r[4]=0u+0x0000005Bu; // 80235D60
  c->lr=0x80235D68u; f_800A2EF0(c); // 80235D64
  c->r[4]=c->r[3]|c->r[3]; // 80235D68
  c->r[3]=R32(c->r[31]+0x00000100u); // 80235D6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235D70
  c->lr=0x80235D78u; f_801313D4(c); // 80235D74
  goto L_80235D98; // 80235D78
L_80235D7C:;
  c->lr=0x80235D80u; f_8007B524(c); // 80235D7C
  c->r[4]=0u+0x0000005Cu; // 80235D80
  c->lr=0x80235D88u; f_800A2EF0(c); // 80235D84
  c->r[4]=c->r[3]|c->r[3]; // 80235D88
  c->r[3]=R32(c->r[31]+0x00000100u); // 80235D8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235D90
  c->lr=0x80235D98u; f_801313D4(c); // 80235D94
L_80235D98:;
  c->r[0]=R32(c->r[28]+0x0000011Cu); // 80235D98
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80235D9C
  if (!crb(c,2)) { goto L_80235DB8; } // 80235DA0
  c->r[3]=R32(c->r[31]+0x00000108u); // 80235DA4
  c->r[4]=0u+0x00000000u; // 80235DA8
  c->r[5]=0u+0x00000002u; // 80235DAC
  c->lr=0x80235DB4u; f_8012E640(c); // 80235DB0
  goto L_80235DC8; // 80235DB4
L_80235DB8:;
  c->r[3]=R32(c->r[31]+0x00000108u); // 80235DB8
  c->r[4]=0u+0x00000001u; // 80235DBC
  c->r[5]=0u+0x00000002u; // 80235DC0
  c->lr=0x80235DC8u; f_8012E640(c); // 80235DC4
L_80235DC8:;
  c->r[0]=R32(c->r[28]+0x0000011Cu); // 80235DC8
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80235DCC
  if (!crb(c,2)) { goto L_80235E08; } // 80235DD0
  c->r[3]=c->r[29]|c->r[29]; // 80235DD4
  c->r[4]=0u+0x00000007u; // 80235DD8
  c->lr=0x80235DE0u; f_8011961C(c); // 80235DDC
  c->r[4]=c->r[3]|c->r[3]; // 80235DE0
  c->r[3]=c->r[1]+0x0000001Cu; // 80235DE4
  c->lr=0x80235DECu; f_800549FC(c); // 80235DE8
  c->r[3]=R32(c->r[31]+0x00000100u); // 80235DEC
  c->r[4]=c->r[1]+0x0000001Cu; // 80235DF0
  c->lr=0x80235DF8u; f_801313CC(c); // 80235DF4
  c->r[3]=c->r[1]+0x0000001Cu; // 80235DF8
  c->r[4]=0u+0xFFFFFFFFu; // 80235DFC
  c->lr=0x80235E04u; f_80047BD4(c); // 80235E00
  goto L_80235E38; // 80235E04
L_80235E08:;
  c->r[3]=c->r[29]|c->r[29]; // 80235E08
  c->r[4]=0u+0x00000008u; // 80235E0C
  c->lr=0x80235E14u; f_8011961C(c); // 80235E10
  c->r[4]=c->r[3]|c->r[3]; // 80235E14
  c->r[3]=c->r[1]+0x00000018u; // 80235E18
  c->lr=0x80235E20u; f_800549FC(c); // 80235E1C
  c->r[3]=R32(c->r[31]+0x00000100u); // 80235E20
  c->r[4]=c->r[1]+0x00000018u; // 80235E24
  c->lr=0x80235E2Cu; f_801313CC(c); // 80235E28
  c->r[3]=c->r[1]+0x00000018u; // 80235E2C
  c->r[4]=0u+0xFFFFFFFFu; // 80235E30
  c->lr=0x80235E38u; f_80047BD4(c); // 80235E34
L_80235E38:;
  c->r[31]=c->r[31]+0x00000004u; // 80235E38
  c->r[30]=c->r[30]+0x00000001u; // 80235E3C
  cmps(c,0,(int32_t)c->r[30],2); // 80235E40
  if (crb(c,0)) { IRQCHK(c); goto L_80235D54; } // 80235E44
  c->r[3]=c->r[29]|c->r[29]; // 80235E48
  c->r[4]=0u+0x0000000Fu; // 80235E4C
  c->lr=0x80235E54u; f_8011961C(c); // 80235E50
  c->r[4]=c->r[3]|c->r[3]; // 80235E54
  c->r[3]=c->r[1]+0x00000014u; // 80235E58
  c->lr=0x80235E60u; f_800549FC(c); // 80235E5C
  c->r[3]=R32(c->r[28]+0x000000CCu); // 80235E60
  c->r[4]=c->r[1]+0x00000014u; // 80235E64
  c->lr=0x80235E6Cu; f_801313CC(c); // 80235E68
  c->r[3]=c->r[1]+0x00000014u; // 80235E6C
  c->r[4]=0u+0xFFFFFFFFu; // 80235E70
  c->lr=0x80235E78u; f_80047BD4(c); // 80235E74
  c->lr=0x80235E7Cu; f_8007B524(c); // 80235E78
  c->r[4]=0u+0x0000005Du; // 80235E7C
  c->lr=0x80235E84u; f_800A2EF0(c); // 80235E80
  c->r[4]=c->r[3]|c->r[3]; // 80235E84
  c->r[3]=R32(c->r[28]+0x000000CCu); // 80235E88
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235E8C
  c->lr=0x80235E94u; f_801313D4(c); // 80235E90
  c->r[30]=0u+0x00000000u; // 80235E94
  c->r[31]=c->r[28]|c->r[28]; // 80235E98
L_80235E9C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80235E9C
  if (!crb(c,2)) { goto L_80235EC4; } // 80235EA0
  c->lr=0x80235EA8u; f_8007B524(c); // 80235EA4
  c->r[4]=0u+0x0000005Fu; // 80235EA8
  c->lr=0x80235EB0u; f_800A2EF0(c); // 80235EAC
  c->r[4]=c->r[3]|c->r[3]; // 80235EB0
  c->r[3]=R32(c->r[31]+0x000000D0u); // 80235EB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235EB8
  c->lr=0x80235EC0u; f_801313D4(c); // 80235EBC
  goto L_80235EE0; // 80235EC0
L_80235EC4:;
  c->lr=0x80235EC8u; f_8007B524(c); // 80235EC4
  c->r[4]=0u+0x0000005Eu; // 80235EC8
  c->lr=0x80235ED0u; f_800A2EF0(c); // 80235ECC
  c->r[4]=c->r[3]|c->r[3]; // 80235ED0
  c->r[3]=R32(c->r[31]+0x000000D0u); // 80235ED4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235ED8
  c->lr=0x80235EE0u; f_801313D4(c); // 80235EDC
L_80235EE0:;
  c->r[0]=R32(c->r[28]+0x00000120u); // 80235EE0
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80235EE4
  if (!crb(c,2)) { goto L_80235F00; } // 80235EE8
  c->r[3]=R32(c->r[31]+0x000000D8u); // 80235EEC
  c->r[4]=0u+0x00000000u; // 80235EF0
  c->r[5]=0u+0x00000002u; // 80235EF4
  c->lr=0x80235EFCu; f_8012E640(c); // 80235EF8
  goto L_80235F10; // 80235EFC
L_80235F00:;
  c->r[3]=R32(c->r[31]+0x000000D8u); // 80235F00
  c->r[4]=0u+0x00000001u; // 80235F04
  c->r[5]=0u+0x00000002u; // 80235F08
  c->lr=0x80235F10u; f_8012E640(c); // 80235F0C
L_80235F10:;
  c->r[0]=R32(c->r[28]+0x00000120u); // 80235F10
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 80235F14
  if (!crb(c,2)) { goto L_80235F50; } // 80235F18
  c->r[3]=c->r[29]|c->r[29]; // 80235F1C
  c->r[4]=0u+0x00000007u; // 80235F20
  c->lr=0x80235F28u; f_8011961C(c); // 80235F24
  c->r[4]=c->r[3]|c->r[3]; // 80235F28
  c->r[3]=c->r[1]+0x00000010u; // 80235F2C
  c->lr=0x80235F34u; f_800549FC(c); // 80235F30
  c->r[3]=R32(c->r[31]+0x000000D0u); // 80235F34
  c->r[4]=c->r[1]+0x00000010u; // 80235F38
  c->lr=0x80235F40u; f_801313CC(c); // 80235F3C
  c->r[3]=c->r[1]+0x00000010u; // 80235F40
  c->r[4]=0u+0xFFFFFFFFu; // 80235F44
  c->lr=0x80235F4Cu; f_80047BD4(c); // 80235F48
  goto L_80235F80; // 80235F4C
L_80235F50:;
  c->r[3]=c->r[29]|c->r[29]; // 80235F50
  c->r[4]=0u+0x00000008u; // 80235F54
  c->lr=0x80235F5Cu; f_8011961C(c); // 80235F58
  c->r[4]=c->r[3]|c->r[3]; // 80235F5C
  c->r[3]=c->r[1]+0x0000000Cu; // 80235F60
  c->lr=0x80235F68u; f_800549FC(c); // 80235F64
  c->r[3]=R32(c->r[31]+0x000000D0u); // 80235F68
  c->r[4]=c->r[1]+0x0000000Cu; // 80235F6C
  c->lr=0x80235F74u; f_801313CC(c); // 80235F70
  c->r[3]=c->r[1]+0x0000000Cu; // 80235F74
  c->r[4]=0u+0xFFFFFFFFu; // 80235F78
  c->lr=0x80235F80u; f_80047BD4(c); // 80235F7C
L_80235F80:;
  c->r[31]=c->r[31]+0x00000004u; // 80235F80
  c->r[30]=c->r[30]+0x00000001u; // 80235F84
  cmps(c,0,(int32_t)c->r[30],2); // 80235F88
  if (crb(c,0)) { IRQCHK(c); goto L_80235E9C; } // 80235F8C
  c->r[3]=c->r[29]|c->r[29]; // 80235F90
  c->r[4]=0u+0x00000000u; // 80235F94
  c->lr=0x80235F9Cu; f_8011961C(c); // 80235F98
  c->r[4]=c->r[3]|c->r[3]; // 80235F9C
  c->r[3]=c->r[1]+0x00000008u; // 80235FA0
  c->lr=0x80235FA8u; f_800549FC(c); // 80235FA4
  c->r[3]=R32(c->r[28]+0x00000110u); // 80235FA8
  c->r[4]=c->r[1]+0x00000008u; // 80235FAC
  c->lr=0x80235FB4u; f_801313CC(c); // 80235FB0
  c->r[3]=c->r[1]+0x00000008u; // 80235FB4
  c->r[4]=0u+0xFFFFFFFFu; // 80235FB8
  c->lr=0x80235FC0u; f_80047BD4(c); // 80235FBC
  c->lr=0x80235FC4u; f_8007B524(c); // 80235FC0
  c->r[4]=0u+0x00000060u; // 80235FC4
  c->lr=0x80235FCCu; f_800A2EF0(c); // 80235FC8
  c->r[4]=c->r[3]|c->r[3]; // 80235FCC
  c->r[3]=R32(c->r[28]+0x00000110u); // 80235FD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80235FD4
  c->lr=0x80235FDCu; f_801313D4(c); // 80235FD8
L_80235FDC:;
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 80235FDC
  c->r[30]=R32(c->r[1]+0x00000038u); // 80235FE0
  c->r[29]=R32(c->r[1]+0x00000034u); // 80235FE4
  c->r[28]=R32(c->r[1]+0x00000030u); // 80235FE8
  c->r[0]=R32(c->r[1]+0x00000044u); // 80235FEC
  c->lr=c->r[0]; // 80235FF0
  c->r[1]=c->r[1]+0x00000040u; // 80235FF4
  return; // 80235FF8
}

// fn_80235FFC
void f_80235FFC(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80235FFC
  c->r[0]=c->lr; // 80236000
  W32(c->r[1]+0x00000014u,c->r[0]); // 80236004
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80236008
  c->r[31]=c->r[3]|c->r[3]; // 8023600C
  c->r[4]=0u+0x00000000u; // 80236010
  c->lr=0x80236018u; f_80235A48(c); // 80236014
  c->r[3]=c->r[31]|c->r[31]; // 80236018
  c->r[4]=0u+0x00000001u; // 8023601C
  c->lr=0x80236024u; f_80235A40(c); // 80236020
  c->r[3]=R32(c->r[31]+0x000000C0u); // 80236024
  c->r[4]=0u+0x00000000u; // 80236028
  c->r[5]=0u+0x00000006u; // 8023602C
  c->lr=0x80236034u; f_8012E640(c); // 80236030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80236034
  c->r[0]=R32(c->r[1]+0x00000014u); // 80236038
  c->lr=c->r[0]; // 8023603C
  c->r[1]=c->r[1]+0x00000010u; // 80236040
  return; // 80236044
}

// fn_80236048
void f_80236048(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80236048
  c->r[0]=c->lr; // 8023604C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80236050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80236054
  c->r[31]=c->r[3]|c->r[3]; // 80236058
  c->r[4]=0u+0x00000000u; // 8023605C
  c->lr=0x80236064u; f_80235A48(c); // 80236060
  c->r[3]=c->r[31]|c->r[31]; // 80236064
  c->r[4]=0u+0x00000001u; // 80236068
  c->lr=0x80236070u; f_80235A40(c); // 8023606C
  c->r[3]=R32(c->r[31]+0x000000C0u); // 80236070
  c->r[4]=0u+0x00000002u; // 80236074
  c->r[5]=0u+0x00000006u; // 80236078
  c->lr=0x80236080u; f_8012E640(c); // 8023607C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80236080
  c->r[0]=R32(c->r[1]+0x00000014u); // 80236084
  c->lr=c->r[0]; // 80236088
  c->r[1]=c->r[1]+0x00000010u; // 8023608C
  return; // 80236090
}

// fn_80236094
void f_80236094(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80236094
  c->r[0]=c->lr; // 80236098
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023609C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802360A0
  c->r[31]=c->r[3]|c->r[3]; // 802360A4
  c->r[4]=0u+0x00000001u; // 802360A8
  c->lr=0x802360B0u; f_80235A48(c); // 802360AC
  c->r[3]=R32(c->r[31]+0x000000C0u); // 802360B0
  c->r[4]=0u+0x00000001u; // 802360B4
  c->r[5]=0u+0x00000006u; // 802360B8
  c->lr=0x802360C0u; f_8012E640(c); // 802360BC
  c->r[3]=R32(c->r[31]+0x000000C4u); // 802360C0
  c->r[4]=R32(c->r[31]+0x00000114u); // 802360C4
  c->lr=0x802360CCu; f_8011271C(c); // 802360C8
  c->r[3]=c->r[31]|c->r[31]; // 802360CC
  c->lr=0x802360D4u; f_80235B78(c); // 802360D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802360D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802360D8
  c->lr=c->r[0]; // 802360DC
  c->r[1]=c->r[1]+0x00000010u; // 802360E0
  return; // 802360E4
}

// fn_802360E8
void f_802360E8(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 802360E8
  c->r[4]=0u+0x00000000u; // 802360EC
  f_8012ECA4(c); return; // 802360F0
}

// fn_802360F4
void f_802360F4(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802360F4
  c->r[0]=c->lr; // 802360F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 802360FC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80236100
  W32(c->r[1]+0x00000028u,c->r[30]); // 80236104
  c->r[30]=c->r[3]|c->r[3]; // 80236108
  c->lr=0x80236110u; f_8011B41C(c); // 8023610C
  c->r[4]=0u+0x0000000Du; // 80236110
  c->lr=0x80236118u; f_8011B814(c); // 80236114
  c->r[31]=c->r[3]|c->r[3]; // 80236118
  c->lr=0x80236120u; f_8011B41C(c); // 8023611C
  c->r[4]=0u+0x00000019u; // 80236120
  c->lr=0x80236128u; f_8011B814(c); // 80236124
  cmps(c,0,(int32_t)c->r[3],0); // 80236128
  if (crb(c,2)) { goto L_80236440; } // 8023612C
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80236130
  c->lr=0x80236138u; f_80234480(c); // 80236134
  c->r[3]=c->r[1]+0x00000018u; // 80236138
  c->lr=0x80236140u; f_8004B0A4(c); // 8023613C
  c->r[3]=c->r[1]+0x00000010u; // 80236140
  c->lr=0x80236148u; f_800592DC(c); // 80236144
  c->r[3]=c->r[1]+0x00000008u; // 80236148
  c->lr=0x80236150u; f_80047C5C(c); // 8023614C
  c->r[3]=c->r[31]|c->r[31]; // 80236150
  c->r[4]=0u+0x00000000u; // 80236154
  c->r[5]=c->r[1]+0x00000018u; // 80236158
  c->lr=0x80236160u; f_80236B58(c); // 8023615C
  c->r[3]=R32(c->r[30]+0x000000E0u); // 80236160
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236164
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80236168
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023616C
  c->lr=0x80236174u; f_80114AB8(c); // 80236170
  c->r[3]=R32(c->r[30]+0x000000E0u); // 80236174
  c->r[4]=0u+0x00000000u; // 80236178
  c->r[5]=0u+0x00000003u; // 8023617C
  c->lr=0x80236184u; f_8012E640(c); // 80236180
  c->r[3]=c->r[31]|c->r[31]; // 80236184
  c->r[4]=0u+0x00000000u; // 80236188
  c->r[5]=c->r[1]+0x00000010u; // 8023618C
  c->lr=0x80236194u; f_80236BF8(c); // 80236190
  c->r[3]=R32(c->r[30]+0x000000E4u); // 80236194
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236198
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023619C
  c->lr=0x802361A4u; f_801313A0(c); // 802361A0
  c->r[3]=c->r[31]|c->r[31]; // 802361A4
  c->r[4]=0u+0x00000000u; // 802361A8
  c->r[5]=0u+0x00000000u; // 802361AC
  c->r[6]=c->r[1]+0x00000010u; // 802361B0
  c->lr=0x802361B8u; f_80236C3C(c); // 802361B4
  c->r[3]=R32(c->r[30]+0x000000E8u); // 802361B8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802361BC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802361C0
  c->lr=0x802361C8u; f_801313A0(c); // 802361C4
  c->r[3]=c->r[31]|c->r[31]; // 802361C8
  c->r[4]=0u+0x00000000u; // 802361CC
  c->r[5]=0u+0x00000001u; // 802361D0
  c->r[6]=c->r[1]+0x00000010u; // 802361D4
  c->lr=0x802361DCu; f_80236C3C(c); // 802361D8
  c->r[3]=R32(c->r[30]+0x000000ECu); // 802361DC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802361E0
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802361E4
  c->lr=0x802361ECu; f_801313A0(c); // 802361E8
  c->r[3]=c->r[31]|c->r[31]; // 802361EC
  c->r[4]=0u+0x00000000u; // 802361F0
  c->r[5]=0u+0x00000000u; // 802361F4
  c->r[6]=c->r[1]+0x00000018u; // 802361F8
  c->lr=0x80236200u; f_80236BBC(c); // 802361FC
  c->r[3]=R32(c->r[30]+0x000000F0u); // 80236200
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236204
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80236208
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023620C
  c->lr=0x80236214u; f_80114AB8(c); // 80236210
  c->r[3]=c->r[31]|c->r[31]; // 80236214
  c->r[4]=0u+0x00000000u; // 80236218
  c->r[5]=0u+0x00000001u; // 8023621C
  c->r[6]=c->r[1]+0x00000018u; // 80236220
  c->lr=0x80236228u; f_80236BBC(c); // 80236224
  c->r[3]=R32(c->r[30]+0x000000F4u); // 80236228
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023622C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80236230
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80236234
  c->lr=0x8023623Cu; f_80114AB8(c); // 80236238
  c->r[3]=c->r[31]|c->r[31]; // 8023623C
  c->r[4]=0u+0x00000001u; // 80236240
  c->r[5]=c->r[1]+0x00000018u; // 80236244
  c->lr=0x8023624Cu; f_80236B58(c); // 80236248
  c->r[3]=R32(c->r[30]+0x000000F8u); // 8023624C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236250
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80236254
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80236258
  c->lr=0x80236260u; f_80114AB8(c); // 8023625C
  c->r[3]=R32(c->r[30]+0x000000F8u); // 80236260
  c->r[4]=0u+0x00000001u; // 80236264
  c->r[5]=0u+0x00000003u; // 80236268
  c->lr=0x80236270u; f_8012E640(c); // 8023626C
  c->r[3]=c->r[31]|c->r[31]; // 80236270
  c->r[4]=0u+0x00000001u; // 80236274
  c->r[5]=c->r[1]+0x00000010u; // 80236278
  c->lr=0x80236280u; f_80236BF8(c); // 8023627C
  c->r[3]=R32(c->r[30]+0x000000FCu); // 80236280
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236284
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80236288
  c->lr=0x80236290u; f_801313A0(c); // 8023628C
  c->r[3]=c->r[31]|c->r[31]; // 80236290
  c->r[4]=0u+0x00000001u; // 80236294
  c->r[5]=0u+0x00000000u; // 80236298
  c->r[6]=c->r[1]+0x00000010u; // 8023629C
  c->lr=0x802362A4u; f_80236C3C(c); // 802362A0
  c->r[3]=R32(c->r[30]+0x00000100u); // 802362A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802362A8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802362AC
  c->lr=0x802362B4u; f_801313A0(c); // 802362B0
  c->r[3]=c->r[31]|c->r[31]; // 802362B4
  c->r[4]=0u+0x00000001u; // 802362B8
  c->r[5]=0u+0x00000001u; // 802362BC
  c->r[6]=c->r[1]+0x00000010u; // 802362C0
  c->lr=0x802362C8u; f_80236C3C(c); // 802362C4
  c->r[3]=R32(c->r[30]+0x00000104u); // 802362C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802362CC
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802362D0
  c->lr=0x802362D8u; f_801313A0(c); // 802362D4
  c->r[3]=c->r[31]|c->r[31]; // 802362D8
  c->r[4]=0u+0x00000001u; // 802362DC
  c->r[5]=0u+0x00000000u; // 802362E0
  c->r[6]=c->r[1]+0x00000018u; // 802362E4
  c->lr=0x802362ECu; f_80236BBC(c); // 802362E8
  c->r[3]=R32(c->r[30]+0x00000108u); // 802362EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802362F0
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802362F4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802362F8
  c->lr=0x80236300u; f_80114AB8(c); // 802362FC
  c->r[3]=c->r[31]|c->r[31]; // 80236300
  c->r[4]=0u+0x00000001u; // 80236304
  c->r[5]=0u+0x00000001u; // 80236308
  c->r[6]=c->r[1]+0x00000018u; // 8023630C
  c->lr=0x80236314u; f_80236BBC(c); // 80236310
  c->r[3]=R32(c->r[30]+0x0000010Cu); // 80236314
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236318
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8023631C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80236320
  c->lr=0x80236328u; f_80114AB8(c); // 80236324
  c->r[3]=c->r[31]|c->r[31]; // 80236328
  c->r[4]=0u+0x00000002u; // 8023632C
  c->r[5]=c->r[1]+0x00000018u; // 80236330
  c->lr=0x80236338u; f_80236B58(c); // 80236334
  c->r[3]=R32(c->r[30]+0x000000C8u); // 80236338
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 8023633C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80236340
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80236344
  c->lr=0x8023634Cu; f_80114AB8(c); // 80236348
  c->r[3]=R32(c->r[30]+0x000000C8u); // 8023634C
  c->r[4]=0u+0x00000002u; // 80236350
  c->r[5]=0u+0x00000003u; // 80236354
  c->lr=0x8023635Cu; f_8012E640(c); // 80236358
  c->r[3]=c->r[31]|c->r[31]; // 8023635C
  c->r[4]=0u+0x00000002u; // 80236360
  c->r[5]=c->r[1]+0x00000010u; // 80236364
  c->lr=0x8023636Cu; f_80236BF8(c); // 80236368
  c->r[3]=R32(c->r[30]+0x000000CCu); // 8023636C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236370
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80236374
  c->lr=0x8023637Cu; f_801313A0(c); // 80236378
  c->r[3]=c->r[31]|c->r[31]; // 8023637C
  c->r[4]=0u+0x00000002u; // 80236380
  c->r[5]=0u+0x00000000u; // 80236384
  c->r[6]=c->r[1]+0x00000010u; // 80236388
  c->lr=0x80236390u; f_80236C3C(c); // 8023638C
  c->r[3]=R32(c->r[30]+0x000000D0u); // 80236390
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236394
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 80236398
  c->lr=0x802363A0u; f_801313A0(c); // 8023639C
  c->r[3]=c->r[31]|c->r[31]; // 802363A0
  c->r[4]=0u+0x00000002u; // 802363A4
  c->r[5]=0u+0x00000001u; // 802363A8
  c->r[6]=c->r[1]+0x00000010u; // 802363AC
  c->lr=0x802363B4u; f_80236C3C(c); // 802363B0
  c->r[3]=R32(c->r[30]+0x000000D4u); // 802363B4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 802363B8
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 802363BC
  c->lr=0x802363C4u; f_801313A0(c); // 802363C0
  c->r[3]=c->r[31]|c->r[31]; // 802363C4
  c->r[4]=0u+0x00000002u; // 802363C8
  c->r[5]=0u+0x00000000u; // 802363CC
  c->r[6]=c->r[1]+0x00000018u; // 802363D0
  c->lr=0x802363D8u; f_80236BBC(c); // 802363D4
  c->r[3]=R32(c->r[30]+0x000000D8u); // 802363D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 802363DC
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 802363E0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 802363E4
  c->lr=0x802363ECu; f_80114AB8(c); // 802363E8
  c->r[3]=c->r[31]|c->r[31]; // 802363EC
  c->r[4]=0u+0x00000002u; // 802363F0
  c->r[5]=0u+0x00000001u; // 802363F4
  c->r[6]=c->r[1]+0x00000018u; // 802363F8
  c->lr=0x80236400u; f_80236BBC(c); // 802363FC
  c->r[3]=R32(c->r[30]+0x000000DCu); // 80236400
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236404
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80236408
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 8023640C
  c->lr=0x80236414u; f_80114AB8(c); // 80236410
  c->r[3]=c->r[31]|c->r[31]; // 80236414
  c->r[4]=0u+0x00000003u; // 80236418
  c->r[5]=c->r[1]+0x00000010u; // 8023641C
  c->lr=0x80236424u; f_80236BF8(c); // 80236420
  c->r[3]=R32(c->r[30]+0x00000110u); // 80236424
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236428
  {uint32_t ea=c->r[1]+0x00000014u; c->f[2]=c->ps1[2]=RF32(ea);} // 8023642C
  c->lr=0x80236434u; f_801313A0(c); // 80236430
  c->r[3]=c->r[1]+0x00000008u; // 80236434
  c->r[4]=0u+0xFFFFFFFFu; // 80236438
  c->lr=0x80236440u; f_80047BD4(c); // 8023643C
L_80236440:;
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80236440
  c->r[30]=R32(c->r[1]+0x00000028u); // 80236444
  c->r[0]=R32(c->r[1]+0x00000034u); // 80236448
  c->lr=c->r[0]; // 8023644C
  c->r[1]=c->r[1]+0x00000030u; // 80236450
  return; // 80236454
}

// fn_80236458
void f_80236458(Ctx* __restrict c) {
  W32(c->r[3]+0x00000114u,c->r[4]); // 80236458
  return; // 8023645C
}

// fn_80236460
void f_80236460(Ctx* __restrict c) {
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80236460
  c->r[3]=c->r[3]+c->r[0]; // 80236464
  W32(c->r[3]+0x00000118u,c->r[5]); // 80236468
  return; // 8023646C
}

// fn_80236470
void f_80236470(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80236470
  c->r[0]=c->lr; // 80236474
  W32(c->r[1]+0x00000014u,c->r[0]); // 80236478
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023647C
  c->r[31]=c->r[3]|c->r[3]; // 80236480
  c->lr=0x80236488u; f_8012FAAC(c); // 80236484
  c->r[3]=0u+0x80480000u; // 80236488
  c->r[0]=c->r[3]+0x00000928u; // 8023648C
  W32(c->r[31]+0x00000058u,c->r[0]); // 80236490
  c->r[0]=0u+0x00000000u; // 80236494
  W32(c->r[31]+0x000000C0u,c->r[0]); // 80236498
  W32(c->r[31]+0x000000C4u,c->r[0]); // 8023649C
  c->r[3]=c->r[31]|c->r[31]; // 802364A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802364A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802364A8
  c->lr=c->r[0]; // 802364AC
  c->r[1]=c->r[1]+0x00000010u; // 802364B0
  return; // 802364B4
}

// fn_802364B8
void f_802364B8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802364B8
  c->r[0]=c->lr; // 802364BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 802364C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 802364C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 802364C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 802364CC
  c->r[29]=c->r[3]|c->r[3]; // 802364D0
  c->lr=0x802364D8u; f_80056B5C(c); // 802364D4
  c->r[30]=c->r[3]|c->r[3]; // 802364D8
  c->lr=0x802364E0u; f_801F1340(c); // 802364DC
  c->lr=0x802364E4u; f_80056B54(c); // 802364E0
  c->r[3]=0u+0x00000B28u; // 802364E4
  c->lr=0x802364ECu; f_80047B64(c); // 802364E8
  c->r[31]=c->r[3]|c->r[3]; // 802364EC
  cmps(c,0,(int32_t)c->r[3],0); // 802364F0
  if (crb(c,2)) { goto L_802364FC; } // 802364F4
  c->lr=0x802364FCu; f_802367F8(c); // 802364F8
L_802364FC:;
  W32(c->r[29]+0x000000C0u,c->r[31]); // 802364FC
  c->r[3]=c->r[30]|c->r[30]; // 80236500
  c->lr=0x80236508u; f_80056B54(c); // 80236504
  c->r[3]=R32(c->r[29]+0x000000C0u); // 80236508
  c->r[4]=0u+0x00000000u; // 8023650C
  c->lr=0x80236514u; f_80114AE0(c); // 80236510
  c->r[3]=R32(c->r[29]+0x000000C0u); // 80236514
  c->r[4]=0u+0x00000000u; // 80236518
  c->lr=0x80236520u; f_801169C8(c); // 8023651C
  c->r[3]=R32(c->r[29]+0x000000C0u); // 80236520
  c->r[12]=R32(c->r[3]+0x00000020u); // 80236524
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80236528
  c->ctr=c->r[12]; // 8023652C
  if (true) { c->lr=0x80236534u; dispatch(c,c->ctr); } // 80236530
  c->lr=0x80236538u; f_80056B5C(c); // 80236534
  c->r[30]=c->r[3]|c->r[3]; // 80236538
  c->lr=0x80236540u; f_801F1340(c); // 8023653C
  c->lr=0x80236544u; f_80056B54(c); // 80236540
  c->r[3]=0u+0x00000B28u; // 80236544
  c->lr=0x8023654Cu; f_80047B64(c); // 80236548
  c->r[31]=c->r[3]|c->r[3]; // 8023654C
  cmps(c,0,(int32_t)c->r[3],0); // 80236550
  if (crb(c,2)) { goto L_8023655C; } // 80236554
  c->lr=0x8023655Cu; f_8023679C(c); // 80236558
L_8023655C:;
  W32(c->r[29]+0x000000C4u,c->r[31]); // 8023655C
  c->r[3]=c->r[30]|c->r[30]; // 80236560
  c->lr=0x80236568u; f_80056B54(c); // 80236564
  c->r[3]=R32(c->r[29]+0x000000C4u); // 80236568
  c->r[4]=0u+0x00000000u; // 8023656C
  c->lr=0x80236574u; f_80114AE0(c); // 80236570
  c->r[3]=R32(c->r[29]+0x000000C4u); // 80236574
  c->r[4]=0u+0x00000000u; // 80236578
  c->lr=0x80236580u; f_801169C8(c); // 8023657C
  c->r[3]=R32(c->r[29]+0x000000C4u); // 80236580
  c->r[12]=R32(c->r[3]+0x00000020u); // 80236584
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 80236588
  c->ctr=c->r[12]; // 8023658C
  if (true) { c->lr=0x80236594u; dispatch(c,c->ctr); } // 80236590
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80236594
  c->r[30]=R32(c->r[1]+0x00000018u); // 80236598
  c->r[29]=R32(c->r[1]+0x00000014u); // 8023659C
  c->r[0]=R32(c->r[1]+0x00000024u); // 802365A0
  c->lr=c->r[0]; // 802365A4
  c->r[1]=c->r[1]+0x00000020u; // 802365A8
  return; // 802365AC
}

// fn_802365B0
void f_802365B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802365B0
  c->r[0]=c->lr; // 802365B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802365B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802365BC
  W32(c->r[1]+0x00000008u,c->r[30]); // 802365C0
  c->r[30]=c->r[3]|c->r[3]; // 802365C4
  c->r[3]=R32(c->r[3]+0x000000C0u); // 802365C8
  cmps(c,0,(int32_t)c->r[3],0); // 802365CC
  if (crb(c,2)) { goto L_80236624; } // 802365D0
  c->r[12]=R32(c->r[3]+0x00000020u); // 802365D4
  c->r[12]=R32(c->r[12]+0x00000060u); // 802365D8
  c->ctr=c->r[12]; // 802365DC
  if (true) { c->lr=0x802365E4u; dispatch(c,c->ctr); } // 802365E0
  c->lr=0x802365E8u; f_80056B5C(c); // 802365E4
  c->r[31]=c->r[3]|c->r[3]; // 802365E8
  c->lr=0x802365F0u; f_801F1340(c); // 802365EC
  c->lr=0x802365F4u; f_80056B54(c); // 802365F0
  c->r[3]=R32(c->r[30]+0x000000C0u); // 802365F4
  cmps(c,0,(int32_t)c->r[3],0); // 802365F8
  if (crb(c,2)) { goto L_80236614; } // 802365FC
  c->r[4]=0u+0x00000001u; // 80236600
  c->r[12]=R32(c->r[3]+0x00000020u); // 80236604
  c->r[12]=R32(c->r[12]+0x00000008u); // 80236608
  c->ctr=c->r[12]; // 8023660C
  if (true) { c->lr=0x80236614u; dispatch(c,c->ctr); } // 80236610
L_80236614:;
  c->r[3]=c->r[31]|c->r[31]; // 80236614
  c->lr=0x8023661Cu; f_80056B54(c); // 80236618
  c->r[0]=0u+0x00000000u; // 8023661C
  W32(c->r[30]+0x000000C0u,c->r[0]); // 80236620
L_80236624:;
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80236624
  cmps(c,0,(int32_t)c->r[3],0); // 80236628
  if (crb(c,2)) { goto L_80236680; } // 8023662C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80236630
  c->r[12]=R32(c->r[12]+0x00000060u); // 80236634
  c->ctr=c->r[12]; // 80236638
  if (true) { c->lr=0x80236640u; dispatch(c,c->ctr); } // 8023663C
  c->lr=0x80236644u; f_80056B5C(c); // 80236640
  c->r[31]=c->r[3]|c->r[3]; // 80236644
  c->lr=0x8023664Cu; f_801F1340(c); // 80236648
  c->lr=0x80236650u; f_80056B54(c); // 8023664C
  c->r[3]=R32(c->r[30]+0x000000C4u); // 80236650
  cmps(c,0,(int32_t)c->r[3],0); // 80236654
  if (crb(c,2)) { goto L_80236670; } // 80236658
  c->r[4]=0u+0x00000001u; // 8023665C
  c->r[12]=R32(c->r[3]+0x00000020u); // 80236660
  c->r[12]=R32(c->r[12]+0x00000008u); // 80236664
  c->ctr=c->r[12]; // 80236668
  if (true) { c->lr=0x80236670u; dispatch(c,c->ctr); } // 8023666C
L_80236670:;
  c->r[3]=c->r[31]|c->r[31]; // 80236670
  c->lr=0x80236678u; f_80056B54(c); // 80236674
  c->r[0]=0u+0x00000000u; // 80236678
  W32(c->r[30]+0x000000C4u,c->r[0]); // 8023667C
L_80236680:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80236680
  c->r[30]=R32(c->r[1]+0x00000008u); // 80236684
  c->r[0]=R32(c->r[1]+0x00000014u); // 80236688
  c->lr=c->r[0]; // 8023668C
  c->r[1]=c->r[1]+0x00000010u; // 80236690
  return; // 80236694
}

// fn_80236698
void f_80236698(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C0u); // 80236698
  return; // 8023669C
}

// fn_802366A0
void f_802366A0(Ctx* __restrict c) {
  c->r[3]=R32(c->r[3]+0x000000C4u); // 802366A0
  return; // 802366A4
}

// fn_802366A8
void f_802366A8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802366A8
  c->r[0]=c->lr; // 802366AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 802366B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802366B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 802366B8
  c->r[30]=c->r[3]|c->r[3]; // 802366BC
  c->r[31]=c->r[4]|c->r[4]; // 802366C0
  cmps(c,0,(int32_t)c->r[3],0); // 802366C4
  if (crb(c,2)) { goto L_802366E8; } // 802366C8
  c->r[4]=0u+0x00000000u; // 802366CC
  c->lr=0x802366D4u; f_8012FB1C(c); // 802366D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 802366D4
  cmps(c,0,(int32_t)c->r[0],0); // 802366D8
  if (!crb(c,1)) { goto L_802366E8; } // 802366DC
  c->r[3]=c->r[30]|c->r[30]; // 802366E0
  c->lr=0x802366E8u; f_80047B20(c); // 802366E4
L_802366E8:;
  c->r[3]=c->r[30]|c->r[30]; // 802366E8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802366EC
  c->r[30]=R32(c->r[1]+0x00000008u); // 802366F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 802366F4
  c->lr=c->r[0]; // 802366F8
  c->r[1]=c->r[1]+0x00000010u; // 802366FC
  return; // 80236700
}

// fn_80236704
void f_80236704(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80236704
  c->r[0]=c->lr; // 80236708
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023670C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80236710
  W32(c->r[1]+0x00000008u,c->r[30]); // 80236714
  c->r[30]=c->r[3]|c->r[3]; // 80236718
  c->r[31]=c->r[4]|c->r[4]; // 8023671C
  cmps(c,0,(int32_t)c->r[3],0); // 80236720
  if (crb(c,2)) { goto L_80236744; } // 80236724
  c->r[4]=0u+0x00000000u; // 80236728
  c->lr=0x80236730u; f_8012FB1C(c); // 8023672C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[31]; // 80236730
  cmps(c,0,(int32_t)c->r[0],0); // 80236734
  if (!crb(c,1)) { goto L_80236744; } // 80236738
  c->r[3]=c->r[30]|c->r[30]; // 8023673C
  c->lr=0x80236744u; f_80047B20(c); // 80236740
L_80236744:;
  c->r[3]=c->r[30]|c->r[30]; // 80236744
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80236748
  c->r[30]=R32(c->r[1]+0x00000008u); // 8023674C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80236750
  c->lr=c->r[0]; // 80236754
  c->r[1]=c->r[1]+0x00000010u; // 80236758
  return; // 8023675C
}

// fn_80236760
void f_80236760(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80236760
  c->r[0]=c->lr; // 80236764
  W32(c->r[1]+0x00000014u,c->r[0]); // 80236768
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8023676C
  c->r[31]=c->r[3]|c->r[3]; // 80236770
  c->lr=0x80236778u; f_80131A40(c); // 80236774
  c->r[3]=0u+0x80480000u; // 80236778
  c->r[0]=c->r[3]+0x00000A04u; // 8023677C
  W32(c->r[31]+0x00000058u,c->r[0]); // 80236780
  c->r[3]=c->r[31]|c->r[31]; // 80236784
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80236788
  c->r[0]=R32(c->r[1]+0x00000014u); // 8023678C
  c->lr=c->r[0]; // 80236790
  c->r[1]=c->r[1]+0x00000010u; // 80236794
  return; // 80236798
}

// fn_8023679C
void f_8023679C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023679C
  c->r[0]=c->lr; // 802367A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 802367A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802367A8
  c->r[31]=c->r[3]|c->r[3]; // 802367AC
  c->lr=0x802367B4u; f_8012F740(c); // 802367B0
  c->r[3]=0u+0x80480000u; // 802367B4
  c->r[3]=c->r[3]+0x00000A98u; // 802367B8
  W32(c->r[31]+0x00000020u,c->r[3]); // 802367BC
  c->r[0]=c->r[3]+0x0000000Cu; // 802367C0
  W32(c->r[31]+0x00000288u,c->r[0]); // 802367C4
  c->r[0]=c->r[3]+0x00000018u; // 802367C8
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 802367CC
  c->r[0]=c->r[3]+0x00000024u; // 802367D0
  W32(c->r[31]+0x000002B0u,c->r[0]); // 802367D4
  c->r[0]=c->r[3]+0x00000030u; // 802367D8
  W32(c->r[31]+0x00000300u,c->r[0]); // 802367DC
  c->r[3]=c->r[31]|c->r[31]; // 802367E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802367E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 802367E8
  c->lr=c->r[0]; // 802367EC
  c->r[1]=c->r[1]+0x00000010u; // 802367F0
  return; // 802367F4
}

// fn_802367F8
void f_802367F8(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802367F8
  c->r[0]=c->lr; // 802367FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80236800
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80236804
  c->r[31]=c->r[3]|c->r[3]; // 80236808
  c->lr=0x80236810u; f_8012F740(c); // 8023680C
  c->r[3]=0u+0x80480000u; // 80236810
  c->r[3]=c->r[3]+0x00000B58u; // 80236814
  W32(c->r[31]+0x00000020u,c->r[3]); // 80236818
  c->r[0]=c->r[3]+0x0000000Cu; // 8023681C
  W32(c->r[31]+0x00000288u,c->r[0]); // 80236820
  c->r[0]=c->r[3]+0x00000018u; // 80236824
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 80236828
  c->r[0]=c->r[3]+0x00000024u; // 8023682C
  W32(c->r[31]+0x000002B0u,c->r[0]); // 80236830
  c->r[0]=c->r[3]+0x00000030u; // 80236834
  W32(c->r[31]+0x00000300u,c->r[0]); // 80236838
  c->r[3]=c->r[31]|c->r[31]; // 8023683C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80236840
  c->r[0]=R32(c->r[1]+0x00000014u); // 80236844
  c->lr=c->r[0]; // 80236848
  c->r[1]=c->r[1]+0x00000010u; // 8023684C
  return; // 80236850
}

// fn_80236854
void f_80236854(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80236854
  c->r[0]=c->lr; // 80236858
  W32(c->r[1]+0x00000014u,c->r[0]); // 8023685C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80236860
  c->r[31]=c->r[3]|c->r[3]; // 80236864
  c->lr=0x8023686Cu; f_8011243C(c); // 80236868
  c->r[3]=0u+0x80480000u; // 8023686C
  c->r[3]=c->r[3]+0x00000C18u; // 80236870
  W32(c->r[31]+0x00000020u,c->r[3]); // 80236874
  c->r[0]=c->r[3]+0x0000000Cu; // 80236878
  W32(c->r[31]+0x00000288u,c->r[0]); // 8023687C
  c->r[0]=c->r[3]+0x00000018u; // 80236880
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 80236884
  c->r[0]=c->r[3]+0x00000024u; // 80236888
  W32(c->r[31]+0x000002B0u,c->r[0]); // 8023688C
  c->r[0]=c->r[3]+0x00000030u; // 80236890
  W32(c->r[31]+0x00000300u,c->r[0]); // 80236894
  c->r[3]=c->r[31]|c->r[31]; // 80236898
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8023689C
  c->r[0]=R32(c->r[1]+0x00000014u); // 802368A0
  c->lr=c->r[0]; // 802368A4
  c->r[1]=c->r[1]+0x00000010u; // 802368A8
  return; // 802368AC
}

// fn_802368B0
void f_802368B0(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 802368B0
  c->r[0]=c->lr; // 802368B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 802368B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 802368BC
  c->r[31]=c->r[3]|c->r[3]; // 802368C0
  c->lr=0x802368C8u; f_8012F740(c); // 802368C4
  c->r[3]=0u+0x80480000u; // 802368C8
  c->r[3]=c->r[3]+0x00000CDCu; // 802368CC
  W32(c->r[31]+0x00000020u,c->r[3]); // 802368D0
  c->r[0]=c->r[3]+0x0000000Cu; // 802368D4
  W32(c->r[31]+0x00000288u,c->r[0]); // 802368D8
  c->r[0]=c->r[3]+0x00000018u; // 802368DC
  W32(c->r[31]+0x0000029Cu,c->r[0]); // 802368E0
  c->r[0]=c->r[3]+0x00000024u; // 802368E4
  W32(c->r[31]+0x000002B0u,c->r[0]); // 802368E8
  c->r[0]=c->r[3]+0x00000030u; // 802368EC
  W32(c->r[31]+0x00000300u,c->r[0]); // 802368F0
  c->r[3]=c->r[31]|c->r[31]; // 802368F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 802368F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 802368FC
  c->lr=c->r[0]; // 80236900
  c->r[1]=c->r[1]+0x00000010u; // 80236904
  return; // 80236908
}

// fn_8023690C
void f_8023690C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8023690C
  f_802359A0(c); return; // 80236910
}

// fn_80236914
void f_80236914(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 80236914
  f_802359A0(c); return; // 80236918
}

// fn_8023691C
void f_8023691C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8023691C
  f_802359A0(c); return; // 80236920
}

// fn_80236924
void f_80236924(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 80236924
  f_802359A0(c); return; // 80236928
}

// fn_8023692C
void f_8023692C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8023692C
  f_80235944(c); return; // 80236930
}

// fn_80236934
void f_80236934(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 80236934
  f_80235944(c); return; // 80236938
}

// fn_8023693C
void f_8023693C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8023693C
  f_80235944(c); return; // 80236940
}

// fn_80236944
void f_80236944(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 80236944
  f_80235944(c); return; // 80236948
}

// fn_8023694C
void f_8023694C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8023694C
  f_802358E8(c); return; // 80236950
}

// fn_80236954
void f_80236954(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 80236954
  f_802358E8(c); return; // 80236958
}

// fn_8023695C
void f_8023695C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8023695C
  f_802358E8(c); return; // 80236960
}

// fn_80236964
void f_80236964(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 80236964
  f_802358E8(c); return; // 80236968
}

// fn_8023696C
void f_8023696C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD74u; // 8023696C
  f_80235830(c); return; // 80236970
}

// fn_80236974
void f_80236974(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD60u; // 80236974
  f_80235830(c); return; // 80236978
}

// fn_8023697C
void f_8023697C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFD4Cu; // 8023697C
  f_80235830(c); return; // 80236980
}

// fn_80236984
void f_80236984(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFFFDCu; // 80236984
  f_80235830(c); return; // 80236988
}

// fn_8023698C
void f_8023698C(Ctx* __restrict c) {
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8023698C
  c->r[0]=c->lr; // 80236990
  W32(c->r[1]+0x00000024u,c->r[0]); // 80236994
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80236998
  W32(c->r[1]+0x00000018u,c->r[30]); // 8023699C
  W32(c->r[1]+0x00000014u,c->r[29]); // 802369A0
  c->r[29]=c->r[3]|c->r[3]; // 802369A4
  c->lr=0x802369ACu; f_8012FBEC(c); // 802369A8
  c->r[3]=0u+0x80480000u; // 802369AC
  c->r[0]=c->r[3]+0x00000D98u; // 802369B0
  W32(c->r[29]+0x00000044u,c->r[0]); // 802369B4
  c->r[30]=c->r[29]+0x00000060u; // 802369B8
  c->r[31]=c->r[29]+0x00000084u; // 802369BC
L_802369C0:;
  c->r[3]=c->r[30]|c->r[30]; // 802369C0
  c->lr=0x802369C8u; f_8004B0A4(c); // 802369C4
  c->r[30]=c->r[30]+0x0000000Cu; // 802369C8
  cmpu(c,0,c->r[30],c->r[31]); // 802369CC
  if (crb(c,0)) { IRQCHK(c); goto L_802369C0; } // 802369D0
  c->r[30]=c->r[29]+0x0000008Cu; // 802369D4
  c->r[31]=c->r[29]+0x000000D4u; // 802369D8
L_802369DC:;
  c->r[3]=c->r[30]|c->r[30]; // 802369DC
  c->lr=0x802369E4u; f_8004B0A4(c); // 802369E0
  c->r[30]=c->r[30]+0x0000000Cu; // 802369E4
  cmpu(c,0,c->r[30],c->r[31]); // 802369E8
  if (crb(c,0)) { IRQCHK(c); goto L_802369DC; } // 802369EC
  c->r[30]=c->r[29]+0x000000D8u; // 802369F0
  c->r[31]=c->r[29]+0x000000F8u; // 802369F4
L_802369F8:;
  c->r[3]=c->r[30]|c->r[30]; // 802369F8
  c->lr=0x80236A00u; f_800592DC(c); // 802369FC
  c->r[30]=c->r[30]+0x00000008u; // 80236A00
  cmpu(c,0,c->r[30],c->r[31]); // 80236A04
  if (crb(c,0)) { IRQCHK(c); goto L_802369F8; } // 80236A08
  c->r[30]=c->r[29]+0x000000FCu; // 80236A0C
  c->r[31]=c->r[29]+0x0000012Cu; // 80236A10
L_80236A14:;
  c->r[3]=c->r[30]|c->r[30]; // 80236A14
  c->lr=0x80236A1Cu; f_800592DC(c); // 80236A18
  c->r[30]=c->r[30]+0x00000008u; // 80236A1C
  cmpu(c,0,c->r[30],c->r[31]); // 80236A20
  if (crb(c,0)) { IRQCHK(c); goto L_80236A14; } // 80236A24
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[0]=c->ps1[0]=RF32(ea);} // 80236A28
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 80236A2C
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[0]);} // 80236A30
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 80236A34
  {uint32_t ea=c->r[29]+0x00000054u; WF32(ea,c->f[0]);} // 80236A38
  {uint32_t ea=c->r[29]+0x00000058u; WF32(ea,c->f[0]);} // 80236A3C
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 80236A40
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 80236A44
  {uint32_t ea=c->r[29]+0x00000088u; WF32(ea,c->f[0]);} // 80236A48
  {uint32_t ea=c->r[29]+0x000000D4u; WF32(ea,c->f[0]);} // 80236A4C
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[0]);} // 80236A50
  c->r[3]=c->r[29]+0x00000060u; // 80236A54
  c->r[4]=0u+0x00000000u; // 80236A58
  c->r[5]=0u+0x00000024u; // 80236A5C
  c->lr=0x80236A64u; f_800060B8(c); // 80236A60
  c->r[3]=c->r[29]+0x0000008Cu; // 80236A64
  c->r[4]=0u+0x00000000u; // 80236A68
  c->r[5]=0u+0x00000048u; // 80236A6C
  c->lr=0x80236A74u; f_800060B8(c); // 80236A70
  c->r[3]=c->r[29]+0x000000D8u; // 80236A74
  c->r[4]=0u+0x00000000u; // 80236A78
  c->r[5]=0u+0x00000020u; // 80236A7C
  c->lr=0x80236A84u; f_800060B8(c); // 80236A80
  c->r[3]=c->r[29]+0x000000FCu; // 80236A84
  c->r[4]=0u+0x00000000u; // 80236A88
  c->r[5]=0u+0x00000030u; // 80236A8C
  c->lr=0x80236A94u; f_800060B8(c); // 80236A90
  c->r[3]=c->r[29]|c->r[29]; // 80236A94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80236A98
  c->r[30]=R32(c->r[1]+0x00000018u); // 80236A9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80236AA0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80236AA4
  c->lr=c->r[0]; // 80236AA8
  c->r[1]=c->r[1]+0x00000020u; // 80236AAC
  return; // 80236AB0
}

// fn_80236AB4
void f_80236AB4(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9B3Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80236AB4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80236AB8
  {uint32_t ea=c->r[3]+0x00000048u; WF32(ea,c->f[0]);} // 80236ABC
  return; // 80236AC0
}

// fn_80236AC4
void f_80236AC4(Ctx* __restrict c) {
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80236AC4
  return; // 80236AC8
}

// fn_80236ACC
void f_80236ACC(Ctx* __restrict c) {
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[0]=c->ps1[0]=RF32(ea);} // 80236ACC
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80236AD0
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[0]);} // 80236AD4
  return; // 80236AD8
}

